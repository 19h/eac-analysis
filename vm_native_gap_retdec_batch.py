#!/usr/bin/env python3
import argparse
import csv
import re
import subprocess
import sys
import tempfile
from pathlib import Path


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
FUNCTION_DEF_RE = re.compile(r"^int64_t (function_[0-9a-f]+)\(.*\) \{", re.M)
FUNCTION_CALL_RE = re.compile(r"\b(function_[0-9a-f]+)\(")
GLOBAL_RE = re.compile(r"\bg(\d+)\b")


BATCHES = {
    0: [
        "0x568cf0-0x568eea",
        "0x56274-0x5646b",
        "0x4fed10-0x4fef07",
        "0x25a3e-0x25c34",
        "0x500b70-0x500d66",
        "0x498230-0x498422",
        "0x4c98a0-0x4c9a91",
        "0x2ceb0-0x2d09e",
        "0x579d80-0x579f6e",
        "0x4f75e-0x4f94a",
        "0x4d3da0-0x4d3f8b",
        "0x4fbb00-0x4fbceb",
        "0x4b2990-0x4b2b79",
        "0x53f76-0x5415e",
        "0x5534e-0x55536",
        "0x568500-0x5686e7",
    ],
    1: [
        "0x56b2c0-0x56b4a7",
        "0x4cd00-0x4cee6",
        "0x268c9-0x26aae",
        "0x4a6e6-0x4a8c5",
        "0x57160-0x5733f",
        "0x55c790-0x55c96f",
        "0x55c9b0-0x55cb8f",
        "0x5725b0-0x57278f",
        "0x5727c0-0x57299f",
        "0x4b8430-0x4b860e",
        "0x538ea0-0x53907d",
        "0x5cb26-0x5cd02",
        "0x2cafa-0x2ccd5",
        "0x4aa650-0x4aa829",
        "0x567f20-0x5680f7",
        "0x492898-0x492a6e",
    ],
    2: [
        "0x4c6100-0x4c62d6",
        "0x56b60-0x56d34",
        "0x4bcd80-0x4bcf54",
        "0x4b8bc0-0x4b8d92",
        "0x572230-0x572400",
        "0x4b36d0-0x4b389f",
        "0x5586e0-0x5588ad",
        "0x4f20e-0x4f3da",
        "0x50e4c0-0x50e68c",
        "0x619f2-0x61bbd",
        "0x502fa0-0x50316a",
        "0x505870-0x505a3a",
        "0x556610-0x5567da",
        "0x5100a0-0x510269",
        "0x55a0c0-0x55a289",
        "0x530c90-0x530e56",
    ],
    3: [
        "0x4b60a0-0x4b6264",
        "0x48bfc0-0x48c182",
        "0x4cf380-0x4cf540",
        "0x4d3930-0x4d3af0",
        "0x568c4-0x56a83",
        "0x69abc-0x69c7b",
        "0x37c20-0x37dde",
        "0x66ea2-0x67060",
        "0x4a3b70-0x4a3d2c",
        "0x56b7e0-0x56b99c",
        "0x32360-0x3251a",
        "0x522540-0x5226f9",
        "0x555240-0x5553f9",
        "0x50dec0-0x50e078",
        "0x5580e0-0x558297",
        "0x59faa-0x5a160",
    ],
    4: [
        "0x50ab00-0x50acb6",
        "0x56bf40-0x56c0f5",
        "0x4baf6-0x4bca9",
        "0x50cd40-0x50cef3",
        "0x49a910-0x49aac2",
        "0x4c5100-0x4c52b2",
        "0x55ec80-0x55ee32",
        "0x499e90-0x49a041",
        "0x4eb84-0x4ed34",
        "0x4ac9e0-0x4acb8f",
        "0x212399-0x212547",
        "0x4ac0d0-0x4ac27e",
        "0x2293e-0x22aea",
        "0x2ccd6-0x2ce81",
        "0x529840-0x5299eb",
        "0x50aff0-0x50b198",
    ],
    5: [
        "0x535930-0x535ad8",
        "0x527483-0x52762a",
        "0x54d0a0-0x54d247",
        "0x6747c-0x67622",
        "0x48aec0-0x48b066",
        "0x4f3230-0x4f33d6",
        "0x542770-0x542916",
        "0x69802-0x699a6",
        "0x4b13e0-0x4b1584",
        "0x6bd8a-0x6bf2a",
        "0x568b50-0x568d00",
        "0x61082-0x61221",
        "0x4886f0-0x48888d",
        "0x55620-0x557b9",
        "0x4ae080-0x4ae218",
        "0x4cd900-0x4cda96",
    ],
    6: [
        "0x4d3af0-0x4d3c86",
        "0x54d830-0x54d9c6",
        "0x552760-0x5528f6",
        "0x29a64-0x29bf9",
        "0x4dfc2-0x4e155",
        "0x497ff0-0x498183",
        "0x4ab380-0x4ab513",
        "0x4b53f0-0x4b5583",
        "0x489630-0x4897c0",
        "0x23344-0x234d2",
        "0x4918e-0x4931c",
        "0x4d4560-0x4d46ec",
        "0x565450-0x5655dc",
        "0x4985b0-0x49873b",
        "0x5be1a-0x5bfa4",
        "0x67ede-0x68067",
    ],
    7: [
        "0x71a15-0x71b9e",
        "0x491e50-0x491fd9",
        "0x30c30-0x30db8",
        "0x2620b-0x26392",
        "0x488d00-0x488e87",
        "0x5515b0-0x551735",
        "0x33be0-0x33d64",
        "0x564190-0x564314",
        "0x565720-0x5658a3",
        "0x4b1ac0-0x4b1c41",
        "0x27c71-0x27df1",
        "0x4b2e6-0x4b465",
        "0x5c136-0x5c2b5",
        "0x5c2b6-0x5c435",
        "0x5143e0-0x51455f",
        "0x61d90-0x61f0e",
    ],
    8: [
        "0x55ead0-0x55ec4e",
        "0x497e60-0x497fdd",
        "0x5422a-0x543a6",
        "0x48c190-0x48c30c",
        "0x54d560-0x54d6dc",
        "0x61792-0x6190c",
        "0x4ff270-0x4ff3e8",
        "0x5010e0-0x501258",
        "0x2247e-0x225f5",
        "0x327a0-0x32917",
        "0x36b64-0x36cda",
        "0x4b51a-0x4b690",
        "0x71d34-0x71eaa",
        "0x4c5bd0-0x4c5d45",
        "0x4ea160-0x4ea2d5",
        "0x548780-0x5488f5",
    ],
    9: [
        "0x48e480-0x48e5f4",
        "0x4d2690-0x4d2804",
        "0x50cac0-0x50cc34",
        "0x2d980-0x2daf3",
        "0x549ac-0x54b1f",
        "0x55c6e-0x55de1",
        "0x59cd2-0x59e45",
        "0x50c440-0x50c5b3",
        "0x4fd550-0x4fd6c1",
        "0x4c87e-0x4c9ee",
        "0x4d2270-0x4d23e0",
        "0x5001a-0x50189",
        "0x6837a-0x684e8",
        "0x4a578-0x4a6e5",
        "0x2808e-0x281fa",
        "0x4b9df0-0x4b9f5c",
    ],
    10: [
        "0x48e723-0x48e88e",
        "0x4af8d0-0x4afa38",
        "0x5484b0-0x548616",
        "0x549e80-0x549fe6",
        "0x5720a0-0x572205",
        "0x57d580-0x57d6e5",
        "0x4c4730-0x4c4893",
        "0x4fd6d0-0x4fd833",
        "0x583450-0x5835b3",
        "0x4525c-0x453be",
        "0x4ad570-0x4ad6d2",
        "0x5009e0-0x500b42",
        "0x58d40-0x58ea1",
        "0x752b0-0x75411",
        "0x5146f0-0x514851",
        "0x2c930-0x2ca8f",
    ],
    11: [
        "0x40adf-0x40c3e",
        "0x67060-0x671bf",
        "0x4c0830-0x4c098f",
        "0x4feb80-0x4fecdf",
        "0x5a828-0x5a984",
        "0x48f642-0x48f79d",
        "0x53c4b0-0x53c60b",
        "0x307d0-0x30929",
        "0x33b1f2-0x33b34b",
        "0x52b400-0x52b558",
        "0x577f00-0x578058",
        "0x578090-0x5781e8",
        "0x2a9de-0x2ab35",
        "0x495a4-0x496fb",
        "0x4f0b6-0x4f20d",
        "0x4c0990-0x4c0ae6",
    ],
    12: [
        "0x4096a-0x40abf",
        "0x4bd90-0x4bee5",
        "0x578220-0x578375",
        "0x498440-0x498594",
        "0x4a9620-0x4a9774",
        "0x508490-0x5085e1",
        "0x281fa-0x2834a",
        "0x4d70e-0x4d85d",
        "0x4b66c0-0x4b680e",
        "0x20f9a-0x210e7",
        "0x578380-0x5784cd",
        "0x47660-0x477ac",
        "0x53b22-0x53c6e",
        "0x54eda-0x55026",
        "0x609f0-0x60b3b",
        "0x49044-0x4918e",
    ],
    13: [
        "0x4b188-0x4b2d2",
        "0x4c3810-0x4c395a",
        "0x556cf0-0x556e3a",
        "0x4c0d4-0x4c21c",
        "0x4c592-0x4c6da",
        "0x633cc-0x63514",
        "0x4ff460-0x4ff5a7",
        "0x5012d0-0x501417",
        "0x54f250-0x54f397",
        "0x552590-0x5526d7",
        "0x25712-0x25856",
        "0x2588a-0x259ce",
        "0x27e7a-0x27fbe",
        "0x45a3e-0x45b82",
        "0x713da-0x7151e",
        "0x4d30d0-0x4d3213",
    ],
    14: [
        "0x4d8cc0-0x4d8e02",
        "0x4885ae-0x4886ef",
        "0x57b2f0-0x57b431",
        "0x59b19-0x59c57",
        "0x4ea000-0x4ea13d",
        "0x579bc0-0x579cfd",
        "0x6bb54-0x6bc90",
        "0x525bd0-0x525d0c",
        "0x525d20-0x525e5c",
        "0x54ed60-0x54ee9c",
        "0x54eec0-0x54effc",
        "0x55b740-0x55b87c",
        "0x55b890-0x55b9cc",
        "0x577a20-0x577b5c",
        "0x577bc0-0x577cfc",
        "0x56788-0x568c3",
    ],
    15: [
        "0x56fab0-0x56fbea",
        "0x48e347-0x48e480",
        "0x27a86-0x27bbe",
        "0x59078-0x591b0",
        "0x514590-0x5146c8",
        "0x5148a0-0x5149d8",
        "0x51970f-0x519847",
        "0x6b56e-0x6b6a5",
        "0x4bb8d0-0x4bba05",
        "0x573580-0x5736b5",
        "0x692e6-0x69419",
        "0x38fcf-0x39101",
        "0xfeebc-0xfefee",
        "0x6a512-0x6a643",
        "0x4b8660-0x4b8791",
        "0x4fdd8-0x4ff08",
    ],
    16: [
        "0x60dea-0x60f19",
        "0x4cc900-0x4cca2f",
        "0x525f0-0x5271d",
        "0x4fa50-0x4fb7c",
        "0x60c84-0x60db0",
        "0x49e770-0x49e89c",
        "0x4ce440-0x4ce56b",
        "0x58947-0x58a71",
        "0x4c8450-0x4c857a",
        "0x25da6-0x25ecf",
        "0x35c96-0x35dbf",
        "0x519120-0x519249",
        "0x573430-0x573559",
        "0x29dd0-0x29ef7",
        "0x57650-0x57777",
        "0x6a3ea-0x6a511",
    ],
    17: [
        "0x715a1-0x716c8",
        "0x4c5fc0-0x4c60e6",
        "0x621c2-0x622e7",
        "0x3ddb5d-0x3ddc80",
        "0x4d2860-0x4d2983",
        "0x5efd2-0x5f0f4",
        "0x5c4c0-0x5c5e1",
        "0x696e0-0x69801",
        "0x5115a0-0x5116c1",
        "0x5116e0-0x511801",
        "0x538c20-0x538d41",
        "0x538d60-0x538e81",
        "0x2a0c4-0x2a1e4",
        "0x4c28f0-0x4c2a10",
        "0x4c8320-0x4c8440",
        "0x4cc7d0-0x4cc8f0",
    ],
    18: [
        "0x4cd7d0-0x4cd8f0",
        "0x542470-0x542590",
        "0x542650-0x542770",
        "0x567df0-0x567f10",
        "0x4abec-0x4ad09",
        "0x49b370-0x49b48d",
        "0x5736e0-0x5737fd",
        "0x594b8-0x595d4",
        "0x573800-0x57391c",
        "0x264e5-0x26600",
        "0x54e4c0-0x54e5db",
        "0x565f90-0x5660ab",
        "0x4c478-0x4c592",
        "0x40f90-0x410a8",
        "0x30d540-0x30d658",
        "0x4b1100-0x4b1218",
    ],
    19: [
        "0x54e8a0-0x54e9b8",
        "0x565070-0x565188",
        "0x490294-0x4903ab",
        "0x4ef000-0x4ef117",
        "0x463a6-0x464bc",
        "0x4e554-0x4e66a",
        "0x5b0cc-0x5b1e1",
        "0x1a3e94-0x1a3fa9",
        "0x5f302-0x5f416",
        "0x1060ab-0x1061bf",
        "0x4a9410-0x4a9524",
        "0x6ad18-0x6ae2b",
        "0x54dc8-0x54eda",
        "0x4308a-0x4319b",
        "0x4a47d0-0x4a48e0",
        "0x4f2d50-0x4f2e60",
    ],
    20: [
        "0x573140-0x573250",
        "0x4cfb40-0x4cfc4e",
        "0x46e15-0x46f22",
        "0x4c19e0-0x4c1aed",
        "0x4c2a20-0x4c2b2d",
        "0x511b7f-0x511c8b",
        "0x4e37c-0x4e487",
        "0x3a262e-0x3a2739",
        "0x567c30-0x567d3a",
        "0x41448-0x41551",
        "0x4ad450-0x4ad559",
        "0x4a470-0x4a578",
        "0x569250-0x569358",
        "0x573fe-0x57505",
        "0x62350-0x62456",
        "0x72178-0x7227e",
    ],
    21: [
        "0x4b01d0-0x4b02d6",
        "0x5033d0-0x5034d6",
        "0x505ca0-0x505da6",
        "0x2c438-0x2c53d",
        "0x4aecc0-0x4aedc5",
        "0x4d0c20-0x4d0d25",
        "0x4afd30-0x4afe34",
        "0x4e9ae0-0x4e9be4",
        "0x499ab0-0x499bb3",
        "0x4a8c40-0x4a8d43",
        "0x4bc9a0-0x4bcaa3",
        "0x4d2b80-0x4d2c83",
        "0x54cf90-0x54d093",
        "0x57a2b0-0x57a3b3",
        "0x4cdde0-0x4cdee1",
        "0x32260-0x32405",
    ],
    22: [
        "0x52a5a-0x52b5a",
        "0x68d1a-0x68e1a",
        "0x4d2e40-0x4d2f40",
        "0x4c9fa-0x4caf9",
        "0x72832-0x72931",
        "0x4d3c90-0x4d3d8f",
        "0x5f4d0-0x5f5ce",
        "0x548b0-0x549ac",
        "0x488a10-0x488b0c",
        "0x61fb0-0x620ab",
        "0x4977a0-0x49789b",
        "0x4bd480-0x4bd57b",
        "0x4d9090-0x4d918b",
        "0x61698-0x61792",
        "0x62460-0x6255a",
        "0x491110-0x49120a",
    ],
    23: [
        "0x2c7a0-0x2c899",
        "0x52b68-0x52c61",
        "0x52cc60-0x52cd59",
        "0x2b252-0x2b34a",
        "0x1f5d10-0x1f5e08",
        "0x52bdc0-0x52beb8",
        "0x54a8d0-0x54a9c8",
        "0x36ff8-0x370ef",
        "0x522710-0x522807",
        "0x507f6-0x508eb",
        "0x4b5690-0x4b5785",
        "0x2b674-0x2b768",
        "0x5a160-0x5a254",
        "0x4c3a10-0x4c3b04",
        "0x52b8e0-0x52b9d4",
        "0x48e88e-0x48e981",
    ],
    24: [
        "0x573010-0x573103",
        "0x569140-0x569232",
        "0x72496-0x72587",
        "0x4f1920-0x4f1a11",
        "0x49d220-0x49d310",
        "0x50b1c0-0x50b2b0",
        "0x54a3d0-0x54a4c0",
        "0x473f6-0x474e5",
        "0x5a470-0x5a55f",
        "0x4ee130-0x4ee21f",
        "0x4eec10-0x4eecff",
        "0x4ef2e0-0x4ef3cf",
        "0x5142c0-0x5143ae",
        "0x529720-0x52980e",
        "0x53c390-0x53c47e",
        "0x55e9b0-0x55ea9e",
    ],
    25: [
        "0x4a1b4-0x4a2a1",
        "0x687c4-0x688b1",
        "0x54df80-0x54e06d",
        "0x2b4b6-0x2b5a2",
        "0x1e15fc-0x1e16e8",
        "0x4efa60-0x4efb4c",
        "0x57c670-0x57c75c",
        "0x4aad8-0x4abc3",
        "0x56df8-0x56ee3",
        "0x632e0-0x633cb",
        "0x7192a-0x71a15",
        "0x4ff5b0-0x4ff69b",
        "0x501420-0x50150b",
        "0x36d98-0x36e82",
        "0x380dc-0x381c6",
        "0x4ff30-0x5001a",
    ],
    26: [
        "0x593ce-0x594b8",
        "0x49ebd0-0x49ecb9",
        "0x50d0c0-0x50d1a9",
        "0x50d7e0-0x50d8c9",
        "0x67df6-0x67ede",
        "0x48f88a-0x48f972",
        "0x49a730-0x49a818",
        "0x4b0c90-0x4b0d77",
        "0x43215-0x432fb",
        "0x4ddee-0x4ded4",
        "0x4fd3f0-0x4fd4d6",
        "0x6190c-0x619f1",
        "0x4bcac0-0x4bcba5",
        "0x53fbe0-0x53fcc5",
        "0x50906-0x509ea",
        "0x631a2-0x63286",
    ],
    27: [
        "0x4ad100-0x4ad1e4",
        "0x557390-0x557474",
        "0x557a40-0x557b24",
        "0x497d70-0x497e53",
        "0x498a40-0x498b23",
        "0x4d08f0-0x4d09d3",
        "0x56ff90-0x570073",
        "0x5b204-0x5b2e6",
        "0x4d2d40-0x4d2e22",
        "0x564090-0x564172",
        "0x36a32-0x36b13",
        "0x4bf880-0x4bf961",
        "0x582a30-0x582b11",
        "0x4bba20-0x4bbb00",
        "0x4c4530-0x4c4610",
        "0x450d0-0x451af",
    ],
    28: [
        "0x592ee-0x593cd",
        "0x4aedd0-0x4aeeaf",
        "0x4b63a0-0x4b647f",
        "0x3e18d-0x3e26b",
        "0x7826e-0x7834c",
        "0x4d4790-0x4d486e",
        "0x4ee710-0x4ee7ee",
        "0x502870-0x50294e",
        "0x505130-0x50520e",
        "0x36f05-0x36fe2",
        "0x67d18-0x67df5",
        "0x28cb6f-0x28cc4c",
        "0x4f17f0-0x4f18cd",
        "0x24bd0-0x24cac",
        "0x423a3-0x4247f",
        "0x52c62-0x52d3e",
    ],
    29: [
        "0x6b492-0x6b56e",
        "0x4b95a0-0x4b967c",
        "0x4c8242-0x4c831d",
        "0x5088b0-0x50898b",
        "0x4b00e0-0x4b01ba",
        "0x4bf9e0-0x4bfab9",
        "0x7742a-0x77502",
        "0x289b2-0x28a89",
        "0x530e6-0x531bd",
        "0x4b1590-0x4b1667",
        "0x6897e-0x68a54",
        "0x3df27-0x3dffc",
        "0x4e2a6-0x4e37b",
        "0x4b09d0-0x4b0aa4",
        "0x4b28b0-0x4b2984",
        "0x4b8fd0-0x4b90a4",
    ],
    30: [
        "0x54f0e0-0x54f1b4",
        "0x24f44-0x25017",
        "0x51c60-0x51d33",
        "0x48e14d-0x48e220",
        "0x4b7730-0x4b7803",
        "0x4b7cd0-0x4b7da3",
        "0x52e467-0x52e53a",
        "0x4b5940-0x4b5a12",
        "0x4e706-0x4e7d7",
        "0x56188-0x56259",
        "0x3bc0e4-0x3bc1b5",
        "0x4b0ac0-0x4b0b91",
        "0x4c8fa0-0x4c9071",
        "0x27fbe-0x2808e",
        "0x570190-0x570260",
        "0x4b1220-0x4b12ef",
    ],
}


def read_tsv(path):
    path = Path(path)
    if not path.exists():
        return []
    with path.open(newline="", errors="replace") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def queue_by_range(path):
    return {row.get("selected_range", ""): row for row in read_tsv(path)}


def extract_functions(text):
    start_marker = "// ------------------------ Functions -------------------------"
    end_marker = "// --------------------- Meta-Information ---------------------"
    start = text.find(start_marker)
    end = text.find(end_marker)
    if start < 0 or end < 0 or end <= start:
        raise SystemExit("retdec output did not contain the expected functions section")
    functions = text[start + len(start_marker):end].strip()
    functions = functions.replace(" = &v", " = (int64_t)&v")
    functions = functions.replace("vsnprintf(", "eac_retdec_vsnprintf(")
    functions = re.sub(r"(int64_t\s+v\d+\s*=\s*)&([A-Za-z_]\w*)", r"\1(int64_t)&\2", functions)
    functions = re.sub(r"((?:u?int(?:8|16|32|64)_t|char)\s*\*\s+v\d+\s*=\s*)g(\d+)", r"\1(void *)(int64_t)g\2", functions)
    functions = re.sub(r" = &g(\d+)", r" = (int64_t)&g\1", functions)
    functions = re.sub(r"return &g(\d+)", r"return (int64_t)&g\1", functions)
    functions = re.sub(r"return &v(\d+)", r"return (int64_t)&v\1", functions)
    functions = re.sub(r"return &([A-Za-z_]\w*)", r"return (int64_t)&\1", functions)
    functions = normalize_wide_movdqa_immediates(functions)
    return normalize_pointer_local_assignments(functions)


def normalize_wide_movdqa_immediates(functions):
    def repl(match):
        hex_digits = match.group(1)
        padded = hex_digits.rjust(32, "0")
        hi = padded[:-16] or "0"
        lo = padded[-16:]
        return f"__asm_movdqa(eac_retdec_i128(0x{hi}ull, 0x{lo}ull))"

    return re.sub(r"__asm_movdqa\(0x([0-9a-fA-F]{17,})\)", repl, functions)


def normalize_pointer_local_assignments(functions):
    matches = list(FUNCTION_DEF_RE.finditer(functions))
    if not matches:
        return functions
    chunks = []
    cursor = 0
    for index, match in enumerate(matches):
        start = match.start()
        end = matches[index + 1].start() if index + 1 < len(matches) else len(functions)
        chunks.append(functions[cursor:start])
        body = functions[start:end]
        for pointer_local in sorted(set(re.findall(r"\bint64_t\s*\*\s*(v\d+)\s*;", body))):
            body = re.sub(rf"(\b{pointer_local}\s*=\s*)\(int64_t\)&", r"\1&", body)
        body = re.sub(r"(\*\s*v\d+\s*=\s*)&g(\d+)", r"\1(int64_t)&g\2", body)
        chunks.append(body)
        cursor = end
    chunks.append(functions[cursor:])
    return "".join(chunks)


def function_prototypes(functions):
    defined = set(FUNCTION_DEF_RE.findall(functions))
    called = set(FUNCTION_CALL_RE.findall(functions))
    return [f"int64_t {name}();" for name in sorted(called | defined)]


def referenced_globals(functions):
    return sorted({int(match) for match in GLOBAL_RE.findall(functions)})


def c_comment(value):
    return str(value).replace("*/", "* /")


def main():
    parser = argparse.ArgumentParser(description="Emit targeted RetDec C for a fixed native gap queue batch.")
    parser.add_argument("--batch-index", type=int, default=0)
    parser.add_argument("--queue", default=str(TRACE_DIR / "vm_native_retdec_gap_queue.tsv"))
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--retdec", default="retdec-decompiler")
    parser.add_argument("--timeout", type=int, default=90)
    args = parser.parse_args()

    ranges = BATCHES.get(args.batch_index)
    if not ranges:
        raise SystemExit(f"no fixed native gap RetDec batch {args.batch_index}")

    with tempfile.TemporaryDirectory(prefix=f"eacsym-retdec-native-gap-b{args.batch_index:02d}-") as tmpdir:
        out_path = Path(tmpdir) / f"native_gap_batch{args.batch_index:02d}.c"
        cmd = [
            args.retdec,
            "--select-ranges",
            ",".join(ranges),
            "--select-decode-only",
            "--timeout",
            str(args.timeout),
            "-o",
            str(out_path),
            args.eac,
        ]
        proc = subprocess.run(cmd, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True)
        if proc.returncode != 0:
            sys.stderr.write(proc.stdout)
            raise SystemExit(proc.returncode)
        source = out_path.read_text(errors="replace")

    functions = extract_functions(source)
    provenance = queue_by_range(args.queue)

    print("/*")
    print(f" * Targeted RetDec C for native executable gap queue batch {args.batch_index}.")
    print(" *")
    print(" * This batch is fixed from the ranked native gap queue so it can feed the")
    print(" * executable coverage audit without creating a Make dependency cycle:")
    print(" * coverage -> queue -> RetDec batch -> coverage.")
    print(" *")
    print(" * Ranges:")
    for selected_range in ranges:
        row = provenance.get(selected_range, {})
        print(
            " *   "
            f"{selected_range} rank={c_comment(row.get('rank', '-'))} "
            f"name={c_comment(row.get('name', '-'))} "
            f"kind={c_comment(row.get('kind', '-'))} "
            f"bytes={c_comment(row.get('bytes', '-'))} "
            f"uncovered={c_comment(row.get('semantic_uncovered_bytes', '-'))}"
        )
    print(" */")
    print("#include <stdbool.h>")
    print("#include <stdio.h>")
    print("#include <stdint.h>")
    print("#include <stdlib.h>")
    print("#include <string.h>")
    print("")
    print("typedef __int128 int128_t;")
    print("typedef unsigned __int128 uint128_t;")
    print("typedef int32_t int3_t;")
    print("typedef float float32_t;")
    print("typedef double float64_t;")
    print("typedef long double float80_t;")
    print("static inline int128_t eac_retdec_i128(uint64_t hi, uint64_t lo) { return (int128_t)(((uint128_t)hi << 64) | (uint128_t)lo); }")
    print("struct __locale_struct;")
    print("struct _TYPEDEF_glob_t;")
    print("struct _TYPEDEF___mbstate_t;")
    print("struct _IO_FILE;")
    print("struct pollfd;")
    print("struct sockaddr;")
    print("struct stat64;")
    print("struct timespec;")
    print("struct timeval;")
    print("struct utsname;")
    print("struct iovec;")
    print("struct epoll_event;")
    print("#define F_GETFL 3")
    print("#define F_SETFL 4")
    print("#define SO_DEBUG 1")
    print("#define _SC_PAGESIZE 30")
    print("#define SYS_getegid32 50")
    for index in referenced_globals(functions):
        print(f"extern int g{index};")
    print("unsigned char llvm_ctpop_i8(unsigned char value);")
    print("uint16_t llvm_bswap_i16(uint16_t value);")
    print("void __asm_int(int32_t interrupt);")
    print("int64_t __asm_int1();")
    print("int64_t __asm_int3(void);")
    print("int32_t __asm_in(uint16_t port);")
    print("int32_t __asm_in_134(uint16_t port);")
    print("char __asm_in_136(uint16_t port);")
    print("void __asm_out(uint16_t port, char value);")
    print("void __asm_out_135(uint16_t port, int32_t value);")
    print("void __asm_outsb(uint16_t port, char value);")
    print("void __asm_outsd(uint16_t port, int32_t value);")
    print("uint8_t __readfsbyte(int64_t offset);")
    print("uint64_t __readfsqword(int64_t offset);")
    print("int64_t __asm_iretd(void);")
    print("void __asm_rcl(int32_t value);")
    print("void __asm_rep_movsb_memcpy(char *dst, char *src, int64_t count);")
    print("void __asm_rep_stosb_memset(char *dst, char value, int64_t count);")
    print("void __asm_rep_stosd_memset(char *dst, int32_t value, int64_t count);")
    print("void __asm_rep_stosq_memset(char *dst, int64_t value, int64_t count);")
    print("void __asm_rep_movsd_memcpy(char *dst, char *src, int64_t count);")
    print("void __asm_rep_movsq_memcpy(char *dst, char *src, int64_t count);")
    print("int64_t __asm_hlt(void);")
    print("int64_t __asm_mfence();")
    print("void __stack_chk_fail(void);")
    print("int __cxa_atexit(void (*func)(int64_t *), void *arg, void *dso);")
    print("int128_t __asm_movsd(int64_t value);")
    print("int128_t __asm_movss(int32_t value);")
    print("int64_t __asm_movss_133(int128_t value);")
    print("int128_t __asm_movdqa(int128_t value);")
    print("int128_t __asm_movdqu(int128_t value);")
    print("void __asm_movdqu_133();")
    print("int128_t __asm_movapd(int128_t value);")
    print("int128_t __asm_andpd(int128_t left, int128_t right);")
    print("int128_t __asm_andnpd(int128_t left, int128_t right);")
    print("int128_t __asm_divsd(int128_t left, int64_t right);")
    print("int128_t __asm_divsd_133(int128_t left, int128_t right);")
    print("int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);")
    print("int128_t __asm_psrldq(int128_t value, int count);")
    print("int128_t __asm_pslldq(int128_t value, int count);")
    print("int128_t __asm_psllq(int128_t value, int count);")
    print("int128_t __asm_psrlq(int128_t value, int count);")
    print("int128_t __asm_por(int128_t left, int128_t right);")
    print("int128_t __asm_pxor(int128_t left, int128_t right);")
    print("int128_t __asm_xorps(int128_t left, int128_t right);")
    print("int128_t __asm_cmpnlesd(int128_t left, int128_t right);")
    print("int128_t __asm_cvtsi2sd(int64_t value);")
    print("int128_t __asm_subsd(int128_t left, int128_t right);")
    print("int64_t __asm_cvttsd2si(int128_t value);")
    print("void __asm_ucomisd(int128_t left, int128_t right);")
    print("int128_t __asm_movups();")
    print("void __asm_movups_133();")
    print("int128_t __asm_movaps(int128_t value);")
    print("float80_t __frontend_reg_load_fpr(int32_t reg);")
    print("void __frontend_reg_store_fpr(int32_t reg, float80_t value);")
    print("char *__nl_langinfo_l(int32_t item, struct __locale_struct *locale);")
    print("struct __locale_struct *__uselocale(struct __locale_struct *locale);")
    print("char *dgettext(char *domain, char *msgid);")
    print("char *gettext(char *msgid);")
    print("char *bind_textdomain_codeset(char *domainname, char *codeset);")
    print("void *iconv_open(const char *tocode, const char *fromcode);")
    print("int32_t iconv(void *cd, char **inbuf, int32_t *inbytesleft, char **outbuf, int32_t *outbytesleft);")
    print("int iconv_close(void *cd);")
    print("struct _IO_FILE *fopen(const char *path, const char *mode);")
    print("size_t fread(void *ptr, size_t size, size_t nmemb, struct _IO_FILE *stream);")
    print("int fclose(struct _IO_FILE *stream);")
    print("int uname(struct utsname *buf);")
    print("int64_t __tls_get_addr(void *arg);")
    print("int32_t mbrtowc(int32_t *pwc, const char *s, size_t n, struct _TYPEDEF___mbstate_t *ps);")
    print("size_t mbstowcs(int32_t *dest, const char *src, size_t n);")
    print("int32_t mbsnrtowcs(int32_t *dst, char **src, size_t nms, size_t len, struct _TYPEDEF___mbstate_t *ps);")
    print("size_t wcslen(const int32_t *s);")
    print("int wctob(int32_t wc);")
    print("int32_t towlower(int32_t wc);")
    print("int32_t *wmemcpy(int32_t *dest, const int32_t *src, size_t n);")
    print("int32_t *wmemmove(int32_t *dest, const int32_t *src, size_t n);")
    print("int32_t *wmemset(int32_t *wcs, int32_t wc, size_t n);")
    print("int64_t memset2(void *s, int c, size_t n);")
    print("int pthread_mutex_lock(void *mutex);")
    print("int pthread_mutex_unlock(void *mutex);")
    print("int pthread_cond_wait(void *cond, void *mutex);")
    print("int pthread_cond_timedwait(void *cond, void *mutex, const struct timespec *abstime);")
    print("int fcntl(int fd, int cmd, ...);")
    print("int writev(int fd, const struct iovec *iov, int iovcnt);")
    print("int epoll_create(int size);")
    print("int epoll_ctl(int epfd, int op, int fd, struct epoll_event *event);")
    print("int epoll_wait(int epfd, struct epoll_event *events, int maxevents, int timeout);")
    print("int close(int fd);")
    print("int ioctl(int fd, unsigned long request, ...);")
    print("int poll(struct pollfd *fds, unsigned long nfds, int timeout);")
    print("int gettimeofday(struct timeval *tv, void *tz);")
    print("int64_t sysconf(int name);")
    print("int64_t syscall(int64_t number, ...);")
    print("int mprotect(void *addr, size_t len, int prot);")
    print("int __fxstat64(int ver, int fd, struct stat64 *buf);")
    print("int64_t lseek64(int fd, int64_t offset, int whence);")
    print("int32_t *__errno_location(void);")
    print("int connect(int sockfd, const struct sockaddr *addr, int32_t addrlen);")
    print("int getsockopt(int sockfd, int level, int optname, void *optval, int32_t *optlen);")
    print("int64_t readlink(const char *path, char *buf, size_t bufsiz);")
    print("char *realpath(const char *path, char *resolved_path);")
    print("int glob(const char *pattern, int flags, void *errfunc, struct _TYPEDEF_glob_t *pglob);")
    print("void globfree(struct _TYPEDEF_glob_t *pglob);")
    print("char *__xpg_basename(char *path);")
    print("int32_t eac_retdec_vsnprintf(char *str, int32_t size, char *format, int64_t ap);")
    print("int64_t __wctype_l(const char *property, struct __locale_struct *locale);")
    print("char *strdup(const char *s);")
    print("int __sprintf_chk(char *str, int flag, size_t slen, const char *format, ...);")
    print("struct _Unwind_Exception;")
    print("int64_t _Unwind_GetRegionStart();")
    print("void _Unwind_Resume(struct _Unwind_Exception *exception);")
    print("")
    for proto in function_prototypes(functions):
        print(proto)
    print("")
    print(functions)
    print(f"native_gap_retdec_batch={args.batch_index}", file=sys.stderr)
    print(f"native_gap_retdec_selected_ranges={len(ranges)}", file=sys.stderr)


if __name__ == "__main__":
    main()
