/*
 * Exact byte carriers for executable coverage gaps.
 * ELF: eac.elf
 * Coverage: dumps/vmtail-wide-1m-w16/vm_native_executable_coverage_audit.tsv
 * Section: all
 * Gaps: 181
 * Bytes: 1278
 *
 * These are not decompiled semantics. They are lossless C evidence for
 * executable bytes that are not yet represented by RetDec/manual lifts.
 */
#include <stddef.h>
#include <stdint.h>

typedef struct VMUncoveredExecutableGap {
    const char *section;
    uint64_t start;
    uint64_t stop;
    uint64_t size;
    const uint8_t *bytes;
} VMUncoveredExecutableGap;

static const uint8_t vm_uncovered_executable_gap_0000_bytes[12] = {
    0x74, 0x46, 0x64, 0xc1, 0x0d, 0xf6, 0xd1, 0x8a, 0x38, 0xe8, 0x01, 0x04,
};

static const uint8_t vm_uncovered_executable_gap_0001_bytes[12] = {
    0x01, 0x08, 0x0f, 0x2a, 0xd0, 0xec, 0xa1, 0x06, 0xe8, 0x01, 0xe2, 0x1d,
};

static const uint8_t vm_uncovered_executable_gap_0002_bytes[12] = {
    0x8b, 0xd0, 0xe7, 0x0a, 0x0f, 0x61, 0x5e, 0x4a, 0xe8, 0x01, 0x13, 0xa8,
};

static const uint8_t vm_uncovered_executable_gap_0003_bytes[12] = {
    0xdf, 0xc2, 0x10, 0xe8, 0x01, 0xe6, 0x55, 0xe4, 0xb4, 0xa6, 0xec, 0xb1,
};

static const uint8_t vm_uncovered_executable_gap_0004_bytes[12] = {
    0x9d, 0x42, 0x47, 0x43, 0x0f, 0xe8, 0x01, 0x73, 0x27, 0x08, 0x30, 0xcc,
};

static const uint8_t vm_uncovered_executable_gap_0005_bytes[12] = {
    0x5c, 0xfb, 0xaa, 0xc9, 0x45, 0xf3, 0x93, 0x0f, 0xe8, 0x01, 0x2a, 0xd5,
};

static const uint8_t vm_uncovered_executable_gap_0006_bytes[12] = {
    0x0f, 0x15, 0x1a, 0xeb, 0xf3, 0x6d, 0xdd, 0x4d, 0x14, 0x48, 0xbd, 0x37,
};

static const uint8_t vm_uncovered_executable_gap_0007_bytes[12] = {
    0xfa, 0x19, 0xd2, 0x56, 0x0f, 0x61, 0xcb, 0xd7, 0x39, 0x33, 0xb6, 0xe4,
};

static const uint8_t vm_uncovered_executable_gap_0008_bytes[12] = {
    0xc4, 0xc1, 0x55, 0xef, 0xe9, 0xc4, 0xc1, 0x4d, 0xef, 0xf2, 0xc4, 0xc1,
};

static const uint8_t vm_uncovered_executable_gap_0009_bytes[12] = {
    0x14, 0xc4, 0xc1, 0x55, 0xeb, 0xe8, 0xc5, 0xbd, 0x72, 0xd6, 0x0c, 0xc5,
};

static const uint8_t vm_uncovered_executable_gap_0010_bytes[12] = {
    0xc1, 0x4d, 0xef, 0xf3, 0xc4, 0xc1, 0x45, 0xef, 0xf8, 0xc4, 0xc1, 0x5d,
};

static const uint8_t vm_uncovered_executable_gap_0011_bytes[12] = {
    0x0b, 0x00, 0x62, 0xc1, 0x3c, 0x48, 0xc6, 0xc2, 0x88, 0x62, 0xc1, 0x1c,
};

static const uint8_t vm_uncovered_executable_gap_0012_bytes[12] = {
    0x62, 0xd1, 0x1d, 0x48, 0x72, 0xc4, 0x10, 0x62, 0xd1, 0x15, 0x48, 0x72,
};

static const uint8_t vm_uncovered_executable_gap_0013_bytes[12] = {
    0x62, 0xd1, 0x1d, 0x48, 0x72, 0xc4, 0x10, 0x62, 0xd1, 0x15, 0x48, 0x72,
};

static const uint8_t vm_uncovered_executable_gap_0014_bytes[12] = {
    0x62, 0xd1, 0x1d, 0x48, 0x72, 0xc4, 0x10, 0x62, 0xd1, 0x15, 0x48, 0x72,
};

static const uint8_t vm_uncovered_executable_gap_0015_bytes[12] = {
    0x62, 0xd1, 0x1d, 0x48, 0x72, 0xc4, 0x10, 0x62, 0xd1, 0x15, 0x48, 0x72,
};

static const uint8_t vm_uncovered_executable_gap_0016_bytes[12] = {
    0x62, 0xd1, 0x1d, 0x48, 0x72, 0xc4, 0x10, 0x62, 0xd1, 0x15, 0x48, 0x72,
};

static const uint8_t vm_uncovered_executable_gap_0017_bytes[12] = {
    0x62, 0xd1, 0x1d, 0x48, 0x72, 0xc4, 0x10, 0x62, 0xd1, 0x15, 0x48, 0x72,
};

static const uint8_t vm_uncovered_executable_gap_0018_bytes[12] = {
    0x62, 0xd1, 0x1d, 0x48, 0x72, 0xc4, 0x10, 0x62, 0xd1, 0x15, 0x48, 0x72,
};

static const uint8_t vm_uncovered_executable_gap_0019_bytes[11] = {
    0x09, 0x22, 0xd8, 0x03, 0xc5, 0x79, 0x7f, 0xfa, 0xc4, 0x41, 0x78,
};

static const uint8_t vm_uncovered_executable_gap_0020_bytes[10] = {
    0x90, 0x53, 0x48, 0x89, 0xfb, 0xe8, 0xe9, 0xd4, 0xfa, 0xff,
};

static const uint8_t vm_uncovered_executable_gap_0021_bytes[10] = {
    0xef, 0xf2, 0xc4, 0xc1, 0x45, 0xef, 0xfb, 0xc5, 0x7d, 0x7f,
};

static const uint8_t vm_uncovered_executable_gap_0022_bytes[10] = {
    0x0c, 0xc5, 0xdd, 0x72, 0xf4, 0x14, 0xc4, 0xc1, 0x5d, 0xeb,
};

static const uint8_t vm_uncovered_executable_gap_0023_bytes[10] = {
    0xc5, 0x7d, 0x7f, 0x84, 0x24, 0x00, 0x02, 0x00, 0x00, 0xc5,
};

static const uint8_t vm_uncovered_executable_gap_0024_bytes[10] = {
    0x72, 0xd4, 0x0c, 0xc5, 0xdd, 0x72, 0xf4, 0x14, 0xc4, 0xc1,
};

static const uint8_t vm_uncovered_executable_gap_0025_bytes[10] = {
    0x50, 0xc5, 0x7c, 0x14, 0xc1, 0xc5, 0x6c, 0x14, 0xcb, 0xc5,
};

static const uint8_t vm_uncovered_executable_gap_0026_bytes[10] = {
    0xc5, 0x7c, 0x11, 0x23, 0xc5, 0x5c, 0x15, 0xf5, 0xc4, 0xe3,
};

static const uint8_t vm_uncovered_executable_gap_0027_bytes[10] = {
    0x10, 0xf0, 0xc4, 0xc1, 0x38, 0xc6, 0xf1, 0x88, 0xc4, 0xc1,
};

static const uint8_t vm_uncovered_executable_gap_0028_bytes[10] = {
    0xd0, 0x07, 0x66, 0x0f, 0x72, 0xf6, 0x19, 0x66, 0x41, 0x0f,
};

static const uint8_t vm_uncovered_executable_gap_0029_bytes[10] = {
    0xd0, 0x07, 0x66, 0x0f, 0x72, 0xf7, 0x19, 0x66, 0x41, 0x0f,
};

static const uint8_t vm_uncovered_executable_gap_0030_bytes[10] = {
    0x44, 0x0f, 0xef, 0xf2, 0x66, 0x44, 0x0f, 0xef, 0xfb, 0x66,
};

static const uint8_t vm_uncovered_executable_gap_0031_bytes[10] = {
    0x0f, 0xef, 0xea, 0x66, 0x44, 0x0f, 0xef, 0xf3, 0x66, 0x44,
};

static const uint8_t vm_uncovered_executable_gap_0032_bytes[10] = {
    0xdd, 0xb1, 0xff, 0x48, 0x83, 0xea, 0x01, 0x48, 0x89, 0xc7,
};

static const uint8_t vm_uncovered_executable_gap_0033_bytes[9] = {
    0xc5, 0xe5, 0xfe, 0xdf, 0xc5, 0x1d, 0xef, 0xe0, 0xc5,
};

static const uint8_t vm_uncovered_executable_gap_0034_bytes[9] = {
    0x0b, 0x00, 0xc4, 0x42, 0x1d, 0x00, 0xe0, 0xc4, 0x42,
};

static const uint8_t vm_uncovered_executable_gap_0035_bytes[9] = {
    0x24, 0x01, 0x62, 0x72, 0x7d, 0x48, 0x7c, 0xf2, 0x62,
};

static const uint8_t vm_uncovered_executable_gap_0036_bytes[9] = {
    0xfe, 0xc0, 0x62, 0xb1, 0x75, 0x48, 0xfe, 0xca, 0x62,
};

static const uint8_t vm_uncovered_executable_gap_0037_bytes[9] = {
    0x62, 0xd1, 0x0d, 0x48, 0x72, 0xc6, 0x10, 0x62, 0x51,
};

static const uint8_t vm_uncovered_executable_gap_0038_bytes[9] = {
    0x0f, 0xef, 0xe9, 0x66, 0x44, 0x0f, 0xef, 0xf2, 0x66,
};

static const uint8_t vm_uncovered_executable_gap_0039_bytes[8] = {
    0x0f, 0x37, 0x1d, 0xda, 0x91, 0x4c, 0x00, 0x58,
};

static const uint8_t vm_uncovered_executable_gap_0040_bytes[8] = {
    0x0f, 0x32, 0xd4, 0xfc, 0x1e, 0x5b, 0x6d, 0x87,
};

static const uint8_t vm_uncovered_executable_gap_0041_bytes[8] = {
    0x64, 0xde, 0x40, 0x66, 0x74, 0x90, 0xf1, 0x6e,
};

static const uint8_t vm_uncovered_executable_gap_0042_bytes[8] = {
    0x46, 0xae, 0xdd, 0x37, 0xa3, 0x21, 0x47, 0xb0,
};

static const uint8_t vm_uncovered_executable_gap_0043_bytes[8] = {
    0x5f, 0x7f, 0x3f, 0x93, 0x0f, 0xe8, 0x01, 0x56,
};

static const uint8_t vm_uncovered_executable_gap_0044_bytes[8] = {
    0xb0, 0x1f, 0x0f, 0x37, 0x01, 0x18, 0x59, 0xb8,
};

static const uint8_t vm_uncovered_executable_gap_0045_bytes[8] = {
    0x0f, 0x76, 0x67, 0xe8, 0x91, 0x00, 0x52, 0xad,
};

static const uint8_t vm_uncovered_executable_gap_0046_bytes[8] = {
    0xd9, 0xd8, 0x4a, 0xe8, 0x01, 0x29, 0x0e, 0x12,
};

static const uint8_t vm_uncovered_executable_gap_0047_bytes[8] = {
    0x10, 0x10, 0x2a, 0xc2, 0xd9, 0xdb, 0x4b, 0xc3,
};

static const uint8_t vm_uncovered_executable_gap_0048_bytes[8] = {
    0x0f, 0xda, 0x10, 0xcb, 0xe8, 0x01, 0x92, 0x34,
};

static const uint8_t vm_uncovered_executable_gap_0049_bytes[8] = {
    0x7a, 0x01, 0x15, 0x0f, 0xc2, 0x01, 0xe8, 0x01,
};

static const uint8_t vm_uncovered_executable_gap_0050_bytes[8] = {
    0x0f, 0x55, 0x48, 0x89, 0x1c, 0x24, 0x48, 0x89,
};

static const uint8_t vm_uncovered_executable_gap_0051_bytes[8] = {
    0x4a, 0x0f, 0xc4, 0x7a, 0x44, 0x52, 0x13, 0xe8,
};

static const uint8_t vm_uncovered_executable_gap_0052_bytes[8] = {
    0x44, 0x80, 0x5b, 0xf7, 0x43, 0x0f, 0xe8, 0x01,
};

static const uint8_t vm_uncovered_executable_gap_0053_bytes[8] = {
    0x0f, 0xfc, 0x16, 0x14, 0x65, 0xc0, 0xda, 0x97,
};

static const uint8_t vm_uncovered_executable_gap_0054_bytes[8] = {
    0x64, 0x11, 0x69, 0xa3, 0x68, 0xf4, 0xd5, 0xac,
};

static const uint8_t vm_uncovered_executable_gap_0055_bytes[8] = {
    0x0f, 0x67, 0x0f, 0xe9, 0x76, 0x73, 0x5f, 0x0c,
};

static const uint8_t vm_uncovered_executable_gap_0056_bytes[8] = {
    0x0c, 0xb1, 0x0f, 0x5c, 0x5d, 0x75, 0xe9, 0x0e,
};

static const uint8_t vm_uncovered_executable_gap_0057_bytes[8] = {
    0x4e, 0xcf, 0x59, 0xec, 0x7b, 0xd5, 0x59, 0xef,
};

static const uint8_t vm_uncovered_executable_gap_0058_bytes[8] = {
    0x0f, 0x34, 0x19, 0x5c, 0x2b, 0x98, 0xca, 0x68,
};

static const uint8_t vm_uncovered_executable_gap_0059_bytes[8] = {
    0xea, 0xdf, 0x35, 0xbe, 0x4c, 0x69, 0x7d, 0xcb,
};

static const uint8_t vm_uncovered_executable_gap_0060_bytes[8] = {
    0x72, 0x06, 0xf3, 0x0f, 0x58, 0xc1, 0xeb, 0x04,
};

static const uint8_t vm_uncovered_executable_gap_0061_bytes[8] = {
    0xc4, 0x42, 0x05, 0x00, 0xf8, 0xc5, 0x1d, 0xfe,
};

static const uint8_t vm_uncovered_executable_gap_0062_bytes[8] = {
    0xef, 0xf2, 0xc5, 0x05, 0xef, 0xfb, 0xc4, 0x62,
};

static const uint8_t vm_uncovered_executable_gap_0063_bytes[8] = {
    0xf8, 0xc5, 0x1d, 0xef, 0xe1, 0xc5, 0x15, 0xef,
};

static const uint8_t vm_uncovered_executable_gap_0064_bytes[8] = {
    0x0b, 0x00, 0xc4, 0x42, 0x1d, 0x00, 0xe0, 0xc4,
};

static const uint8_t vm_uncovered_executable_gap_0065_bytes[8] = {
    0x62, 0xd1, 0x05, 0x48, 0x72, 0xc7, 0x10, 0x62,
};

static const uint8_t vm_uncovered_executable_gap_0066_bytes[8] = {
    0x48, 0x72, 0xc6, 0x10, 0x62, 0x51, 0x2d, 0x48,
};

static const uint8_t vm_uncovered_executable_gap_0067_bytes[8] = {
    0x62, 0xf1, 0x7d, 0x48, 0xfe, 0xc5, 0x62, 0xf1,
};

static const uint8_t vm_uncovered_executable_gap_0068_bytes[8] = {
    0x62, 0xf1, 0x7d, 0x48, 0xfe, 0xc4, 0x62, 0xf1,
};

static const uint8_t vm_uncovered_executable_gap_0069_bytes[8] = {
    0x62, 0xf1, 0x7d, 0x48, 0xfe, 0xc5, 0x62, 0xf1,
};

static const uint8_t vm_uncovered_executable_gap_0070_bytes[8] = {
    0x62, 0xd1, 0x45, 0x48, 0xef, 0xf8, 0x62, 0xd1,
};

static const uint8_t vm_uncovered_executable_gap_0071_bytes[8] = {
    0xed, 0xc4, 0xc1, 0x4d, 0xef, 0xf6, 0xc4, 0xc1,
};

static const uint8_t vm_uncovered_executable_gap_0072_bytes[8] = {
    0x00, 0x00, 0xc5, 0xf8, 0x92, 0xd0, 0x62, 0x52,
};

static const uint8_t vm_uncovered_executable_gap_0073_bytes[8] = {
    0xc0, 0x39, 0xc5, 0xf9, 0x70, 0xdb, 0x4e, 0xc5,
};

static const uint8_t vm_uncovered_executable_gap_0074_bytes[8] = {
    0xc5, 0x58, 0xc6, 0xc5, 0xd6, 0xc5, 0x79, 0x70,
};

static const uint8_t vm_uncovered_executable_gap_0075_bytes[8] = {
    0x66, 0x45, 0x0f, 0x6d, 0xca, 0x66, 0x45, 0x0f,
};

static const uint8_t vm_uncovered_executable_gap_0076_bytes[8] = {
    0xfe, 0xcd, 0x66, 0x0f, 0xfe, 0xd6, 0x66, 0x0f,
};

static const uint8_t vm_uncovered_executable_gap_0077_bytes[8] = {
    0xb1, 0xf3, 0x45, 0x0f, 0x70, 0xe4, 0xb1, 0xf2,
};

static const uint8_t vm_uncovered_executable_gap_0078_bytes[8] = {
    0x0f, 0x72, 0xd7, 0x08, 0x66, 0x41, 0x0f, 0x72,
};

static const uint8_t vm_uncovered_executable_gap_0079_bytes[8] = {
    0x08, 0x66, 0x41, 0x0f, 0x72, 0xf0, 0x18, 0x66,
};

static const uint8_t vm_uncovered_executable_gap_0080_bytes[8] = {
    0x0f, 0xef, 0xf2, 0x66, 0x41, 0x0f, 0xef, 0xfb,
};

static const uint8_t vm_uncovered_executable_gap_0081_bytes[8] = {
    0x41, 0x0f, 0x72, 0xd0, 0x07, 0x66, 0x0f, 0x72,
};

static const uint8_t vm_uncovered_executable_gap_0082_bytes[8] = {
    0xd0, 0x07, 0x66, 0x0f, 0x72, 0xf5, 0x19, 0x66,
};

static const uint8_t vm_uncovered_executable_gap_0083_bytes[8] = {
    0x66, 0x41, 0x0f, 0x72, 0xd0, 0x07, 0x66, 0x0f,
};

static const uint8_t vm_uncovered_executable_gap_0084_bytes[8] = {
    0x66, 0x0f, 0xfe, 0x44, 0x24, 0x30, 0x66, 0x0f,
};

static const uint8_t vm_uncovered_executable_gap_0085_bytes[8] = {
    0x0f, 0xef, 0xe0, 0x66, 0x44, 0x0f, 0xef, 0xe9,
};

static const uint8_t vm_uncovered_executable_gap_0086_bytes[8] = {
    0x0c, 0x66, 0x0f, 0x72, 0xf6, 0x14, 0x66, 0x41,
};

static const uint8_t vm_uncovered_executable_gap_0087_bytes[8] = {
    0x66, 0x41, 0x0f, 0x72, 0xd0, 0x0c, 0x66, 0x0f,
};

static const uint8_t vm_uncovered_executable_gap_0088_bytes[8] = {
    0x72, 0xd0, 0x0c, 0x66, 0x0f, 0x72, 0xf4, 0x14,
};

static const uint8_t vm_uncovered_executable_gap_0089_bytes[8] = {
    0x41, 0x0f, 0x72, 0xf0, 0x18, 0x66, 0x45, 0x0f,
};

static const uint8_t vm_uncovered_executable_gap_0090_bytes[8] = {
    0x41, 0x0f, 0x72, 0xd4, 0x08, 0x66, 0x41, 0x0f,
};

static const uint8_t vm_uncovered_executable_gap_0091_bytes[8] = {
    0xf1, 0x14, 0x66, 0x0f, 0x72, 0xd4, 0x0c, 0x66,
};

static const uint8_t vm_uncovered_executable_gap_0092_bytes[8] = {
    0x66, 0x41, 0x0f, 0x72, 0xf1, 0x14, 0x66, 0x0f,
};

static const uint8_t vm_uncovered_executable_gap_0093_bytes[8] = {
    0x66, 0x0f, 0xfe, 0xc7, 0x66, 0x45, 0x0f, 0xfe,
};

static const uint8_t vm_uncovered_executable_gap_0094_bytes[8] = {
    0x41, 0x0f, 0xc6, 0xed, 0xd6, 0x66, 0x44, 0x0f,
};

static const uint8_t vm_uncovered_executable_gap_0095_bytes[8] = {
    0x41, 0x0f, 0xc6, 0xef, 0xfa, 0x66, 0x0f, 0xdb,
};

static const uint8_t vm_uncovered_executable_gap_0096_bytes[8] = {
    0x0f, 0xef, 0xde, 0x66, 0x0f, 0xfe, 0xd3, 0x66,
};

static const uint8_t vm_uncovered_executable_gap_0097_bytes[8] = {
    0x66, 0x0f, 0x72, 0xf1, 0x19, 0x66, 0x41, 0x0f,
};

static const uint8_t vm_uncovered_executable_gap_0098_bytes[8] = {
    0x0f, 0xef, 0xde, 0x66, 0x0f, 0xfe, 0xd3, 0x66,
};

static const uint8_t vm_uncovered_executable_gap_0099_bytes[8] = {
    0x66, 0x0f, 0x72, 0xf1, 0x19, 0x66, 0x41, 0x0f,
};

static const uint8_t vm_uncovered_executable_gap_0100_bytes[8] = {
    0x66, 0x0f, 0xfe, 0x4c, 0x24, 0x20, 0x66, 0x0f,
};

static const uint8_t vm_uncovered_executable_gap_0101_bytes[8] = {
    0x0f, 0xef, 0xe9, 0x66, 0x41, 0x0f, 0xef, 0xf2,
};

static const uint8_t vm_uncovered_executable_gap_0102_bytes[8] = {
    0xd0, 0x07, 0x66, 0x0f, 0x72, 0xf4, 0x19, 0x66,
};

static const uint8_t vm_uncovered_executable_gap_0103_bytes[8] = {
    0x66, 0x45, 0x0f, 0xfe, 0xc5, 0x66, 0x45, 0x0f,
};

static const uint8_t vm_uncovered_executable_gap_0104_bytes[8] = {
    0xd0, 0x0c, 0x66, 0x0f, 0x72, 0xf4, 0x14, 0x66,
};

static const uint8_t vm_uncovered_executable_gap_0105_bytes[8] = {
    0x0f, 0xfe, 0x5c, 0x24, 0x40, 0x66, 0x0f, 0xfe,
};

static const uint8_t vm_uncovered_executable_gap_0106_bytes[8] = {
    0x0c, 0x66, 0x0f, 0x72, 0xf4, 0x14, 0x66, 0x41,
};

static const uint8_t vm_uncovered_executable_gap_0107_bytes[8] = {
    0x66, 0x41, 0x0f, 0x72, 0xd0, 0x0c, 0x66, 0x0f,
};

static const uint8_t vm_uncovered_executable_gap_0108_bytes[8] = {
    0x0f, 0xfe, 0xd6, 0x66, 0x0f, 0xfe, 0xdf, 0x66,
};

static const uint8_t vm_uncovered_executable_gap_0109_bytes[8] = {
    0x0f, 0xfe, 0xd7, 0x66, 0x45, 0x0f, 0xfe, 0xdc,
};

static const uint8_t vm_uncovered_executable_gap_0110_bytes[8] = {
    0x0f, 0xfe, 0xc5, 0x66, 0x45, 0x0f, 0xfe, 0xce,
};

static const uint8_t vm_uncovered_executable_gap_0111_bytes[8] = {
    0x72, 0xd0, 0x0c, 0x66, 0x0f, 0x72, 0xf5, 0x14,
};

static const uint8_t vm_uncovered_executable_gap_0112_bytes[8] = {
    0x41, 0x0f, 0x72, 0xd0, 0x07, 0x66, 0x0f, 0x72,
};

static const uint8_t vm_uncovered_executable_gap_0113_bytes[8] = {
    0x0f, 0x72, 0xf4, 0x14, 0x66, 0x41, 0x0f, 0xeb,
};

static const uint8_t vm_uncovered_executable_gap_0114_bytes[8] = {
    0xfe, 0xc4, 0x66, 0x0f, 0xfe, 0xc1, 0x66, 0x0f,
};

static const uint8_t vm_uncovered_executable_gap_0115_bytes[6] = {
    0xc5, 0xf9, 0x70, 0xc0, 0x39, 0xc5,
};

static const uint8_t vm_uncovered_executable_gap_0116_bytes[6] = {
    0xc5, 0xf9, 0x70, 0xc0, 0x39, 0xc5,
};

static const uint8_t vm_uncovered_executable_gap_0117_bytes[6] = {
    0xc5, 0x79, 0x7f, 0xc6, 0xe9, 0x01,
};

static const uint8_t vm_uncovered_executable_gap_0118_bytes[6] = {
    0xc4, 0x43, 0x15, 0x38, 0xee, 0x01,
};

static const uint8_t vm_uncovered_executable_gap_0119_bytes[6] = {
    0xd6, 0x66, 0x45, 0x0f, 0xfe, 0xdf,
};

static const uint8_t vm_uncovered_executable_gap_0120_bytes[6] = {
    0x0f, 0x72, 0xf6, 0x19, 0x66, 0x41,
};

static const uint8_t vm_uncovered_executable_gap_0121_bytes[6] = {
    0x0f, 0x72, 0xd0, 0x0c, 0x66, 0x0f,
};

static const uint8_t vm_uncovered_executable_gap_0122_bytes[5] = {
    0x0f, 0x70, 0xf8, 0x93, 0x44,
};

static const uint8_t vm_uncovered_executable_gap_0123_bytes[4] = {
    0x0f, 0xe7, 0x20, 0xe6,
};

static const uint8_t vm_uncovered_executable_gap_0124_bytes[4] = {
    0xff, 0x75, 0x30, 0xe8,
};

static const uint8_t vm_uncovered_executable_gap_0125_bytes[4] = {
    0x0f, 0x00, 0x48, 0x89,
};

static const uint8_t vm_uncovered_executable_gap_0126_bytes[4] = {
    0x2c, 0x75, 0x0f, 0xe1,
};

static const uint8_t vm_uncovered_executable_gap_0127_bytes[4] = {
    0x5a, 0xf4, 0x0f, 0x07,
};

static const uint8_t vm_uncovered_executable_gap_0128_bytes[4] = {
    0xd1, 0x3a, 0xdb, 0xe2,
};

static const uint8_t vm_uncovered_executable_gap_0129_bytes[4] = {
    0xc6, 0xf8, 0xe8, 0x01,
};

static const uint8_t vm_uncovered_executable_gap_0130_bytes[4] = {
    0x52, 0x0f, 0x0e, 0xba,
};

static const uint8_t vm_uncovered_executable_gap_0131_bytes[4] = {
    0x0f, 0xe8, 0x01, 0x89,
};

static const uint8_t vm_uncovered_executable_gap_0132_bytes[4] = {
    0x0f, 0x2a, 0x78, 0xb2,
};

static const uint8_t vm_uncovered_executable_gap_0133_bytes[4] = {
    0x65, 0x8e, 0xab, 0x66,
};

static const uint8_t vm_uncovered_executable_gap_0134_bytes[4] = {
    0x0f, 0x76, 0x7b, 0x0f,
};

static const uint8_t vm_uncovered_executable_gap_0135_bytes[4] = {
    0x0f, 0x2c, 0xe6, 0xf4,
};

static const uint8_t vm_uncovered_executable_gap_0136_bytes[4] = {
    0x0f, 0xe8, 0x01, 0x10,
};

static const uint8_t vm_uncovered_executable_gap_0137_bytes[4] = {
    0xb9, 0x72, 0x92, 0xed,
};

static const uint8_t vm_uncovered_executable_gap_0138_bytes[4] = {
    0x0f, 0x5a, 0x41, 0x6f,
};

static const uint8_t vm_uncovered_executable_gap_0139_bytes[4] = {
    0xa7, 0xdd, 0x37, 0x3a,
};

static const uint8_t vm_uncovered_executable_gap_0140_bytes[4] = {
    0x0f, 0x66, 0x2e, 0xeb,
};

static const uint8_t vm_uncovered_executable_gap_0141_bytes[4] = {
    0x0f, 0x66, 0x0f, 0x38,
};

static const uint8_t vm_uncovered_executable_gap_0142_bytes[4] = {
    0xf8, 0xc4, 0xc1, 0x5d,
};

static const uint8_t vm_uncovered_executable_gap_0143_bytes[4] = {
    0xe5, 0xfe, 0xdf, 0xc5,
};

static const uint8_t vm_uncovered_executable_gap_0144_bytes[4] = {
    0xdf, 0xc5, 0x1d, 0xef,
};

static const uint8_t vm_uncovered_executable_gap_0145_bytes[4] = {
    0x4d, 0xef, 0xf3, 0xc4,
};

static const uint8_t vm_uncovered_executable_gap_0146_bytes[4] = {
    0xc4, 0xc1, 0x5d, 0xef,
};

static const uint8_t vm_uncovered_executable_gap_0147_bytes[4] = {
    0x70, 0xc0, 0x93, 0xc5,
};

static const uint8_t vm_uncovered_executable_gap_0148_bytes[4] = {
    0xc5, 0xf9, 0x70, 0xd2,
};

static const uint8_t vm_uncovered_executable_gap_0149_bytes[4] = {
    0xfe, 0xc1, 0x62, 0xf1,
};

static const uint8_t vm_uncovered_executable_gap_0150_bytes[4] = {
    0x62, 0xf1, 0x65, 0x08,
};

static const uint8_t vm_uncovered_executable_gap_0151_bytes[4] = {
    0xc5, 0xc9, 0x62, 0xf5,
};

static const uint8_t vm_uncovered_executable_gap_0152_bytes[4] = {
    0x66, 0x45, 0x0f, 0xfe,
};

static const uint8_t vm_uncovered_executable_gap_0153_bytes[4] = {
    0x0f, 0x72, 0xf6, 0x14,
};

static const uint8_t vm_uncovered_executable_gap_0154_bytes[4] = {
    0x0f, 0x72, 0xf5, 0x14,
};

static const uint8_t vm_uncovered_executable_gap_0155_bytes[4] = {
    0x0c, 0x66, 0x0f, 0x72,
};

static const uint8_t vm_uncovered_executable_gap_0156_bytes[4] = {
    0x0f, 0x38, 0x00, 0xe0,
};

static const uint8_t vm_uncovered_executable_gap_0157_bytes[4] = {
    0x0f, 0x38, 0x00, 0xf0,
};

static const uint8_t vm_uncovered_executable_gap_0158_bytes[4] = {
    0xd7, 0x66, 0x45, 0x0f,
};

static const uint8_t vm_uncovered_executable_gap_0159_bytes[4] = {
    0x0f, 0x38, 0x00, 0xf8,
};

static const uint8_t vm_uncovered_executable_gap_0160_bytes[4] = {
    0x0f, 0x38, 0x00, 0xe8,
};

static const uint8_t vm_uncovered_executable_gap_0161_bytes[4] = {
    0x0f, 0x72, 0xd0, 0x07,
};

static const uint8_t vm_uncovered_executable_gap_0162_bytes[4] = {
    0x19, 0x66, 0x41, 0x0f,
};

static const uint8_t vm_uncovered_executable_gap_0163_bytes[4] = {
    0xd0, 0x0c, 0x66, 0x0f,
};

static const uint8_t vm_uncovered_executable_gap_0164_bytes[4] = {
    0x0f, 0xc6, 0xf7, 0x88,
};

static const uint8_t vm_uncovered_executable_gap_0165_bytes[3] = {
    0x0f, 0xfe, 0xcd,
};

static const uint8_t vm_uncovered_executable_gap_0166_bytes[2] = {
    0x0f, 0x32,
};

static const uint8_t vm_uncovered_executable_gap_0167_bytes[2] = {
    0xd9, 0xe5,
};

static const uint8_t vm_uncovered_executable_gap_0168_bytes[2] = {
    0x94, 0x0f,
};

static const uint8_t vm_uncovered_executable_gap_0169_bytes[2] = {
    0xd9, 0xde,
};

static const uint8_t vm_uncovered_executable_gap_0170_bytes[2] = {
    0x0f, 0xff,
};

static const uint8_t vm_uncovered_executable_gap_0171_bytes[2] = {
    0x66, 0xcf,
};

static const uint8_t vm_uncovered_executable_gap_0172_bytes[2] = {
    0x0f, 0x07,
};

static const uint8_t vm_uncovered_executable_gap_0173_bytes[2] = {
    0x36, 0xde,
};

static const uint8_t vm_uncovered_executable_gap_0174_bytes[2] = {
    0x0f, 0x6a,
};

static const uint8_t vm_uncovered_executable_gap_0175_bytes[2] = {
    0xc5, 0x05,
};

static const uint8_t vm_uncovered_executable_gap_0176_bytes[2] = {
    0xdd, 0x72,
};

static const uint8_t vm_uncovered_executable_gap_0177_bytes[2] = {
    0xc5, 0x7c,
};

static const uint8_t vm_uncovered_executable_gap_0178_bytes[2] = {
    0xc5, 0x5c,
};

static const uint8_t vm_uncovered_executable_gap_0179_bytes[2] = {
    0x04, 0x24,
};

static const uint8_t vm_uncovered_executable_gap_0180_bytes[1] = {
    0x0f,
};

static const VMUncoveredExecutableGap vm_uncovered_executable_gaps[] = {
    { ".text", 0x1fc470ull, 0x1fc47cull, 12ull, vm_uncovered_executable_gap_0000_bytes },
    { ".text", 0x1fc864ull, 0x1fc870ull, 12ull, vm_uncovered_executable_gap_0001_bytes },
    { ".text", 0x1fc948ull, 0x1fc954ull, 12ull, vm_uncovered_executable_gap_0002_bytes },
    { ".text", 0x347f50ull, 0x347f5cull, 12ull, vm_uncovered_executable_gap_0003_bytes },
    { ".text", 0x348028ull, 0x348034ull, 12ull, vm_uncovered_executable_gap_0004_bytes },
    { ".text", 0x3a2e95ull, 0x3a2ea1ull, 12ull, vm_uncovered_executable_gap_0005_bytes },
    { ".text", 0x3e3552ull, 0x3e355eull, 12ull, vm_uncovered_executable_gap_0006_bytes },
    { ".text", 0x3efc46ull, 0x3efc52ull, 12ull, vm_uncovered_executable_gap_0007_bytes },
    { ".text", 0x4db649ull, 0x4db655ull, 12ull, vm_uncovered_executable_gap_0008_bytes },
    { ".text", 0x4db739ull, 0x4db745ull, 12ull, vm_uncovered_executable_gap_0009_bytes },
    { ".text", 0x4dbe61ull, 0x4dbe6dull, 12ull, vm_uncovered_executable_gap_0010_bytes },
    { ".text", 0x4dd605ull, 0x4dd611ull, 12ull, vm_uncovered_executable_gap_0011_bytes },
    { ".text", 0x4dd919ull, 0x4dd925ull, 12ull, vm_uncovered_executable_gap_0012_bytes },
    { ".text", 0x4ddbd9ull, 0x4ddbe5ull, 12ull, vm_uncovered_executable_gap_0013_bytes },
    { ".text", 0x4dde99ull, 0x4ddea5ull, 12ull, vm_uncovered_executable_gap_0014_bytes },
    { ".text", 0x4de159ull, 0x4de165ull, 12ull, vm_uncovered_executable_gap_0015_bytes },
    { ".text", 0x4de419ull, 0x4de425ull, 12ull, vm_uncovered_executable_gap_0016_bytes },
    { ".text", 0x4de6d9ull, 0x4de6e5ull, 12ull, vm_uncovered_executable_gap_0017_bytes },
    { ".text", 0x4de999ull, 0x4de9a5ull, 12ull, vm_uncovered_executable_gap_0018_bytes },
    { ".text", 0x4e09d3ull, 0x4e09deull, 11ull, vm_uncovered_executable_gap_0019_bytes },
    { ".text", 0x7276dull, 0x72777ull, 10ull, vm_uncovered_executable_gap_0020_bytes },
    { ".text", 0x4db583ull, 0x4db58dull, 10ull, vm_uncovered_executable_gap_0021_bytes },
    { ".text", 0x4db597ull, 0x4db5a1ull, 10ull, vm_uncovered_executable_gap_0022_bytes },
    { ".text", 0x4db7f9ull, 0x4db803ull, 10ull, vm_uncovered_executable_gap_0023_bytes },
    { ".text", 0x4dc287ull, 0x4dc291ull, 10ull, vm_uncovered_executable_gap_0024_bytes },
    { ".text", 0x4e0299ull, 0x4e02a3ull, 10ull, vm_uncovered_executable_gap_0025_bytes },
    { ".text", 0x4e02d5ull, 0x4e02dfull, 10ull, vm_uncovered_executable_gap_0026_bytes },
    { ".text", 0x4e0a01ull, 0x4e0a0bull, 10ull, vm_uncovered_executable_gap_0027_bytes },
    { ".text", 0x4e5571ull, 0x4e557bull, 10ull, vm_uncovered_executable_gap_0028_bytes },
    { ".text", 0x4e5586ull, 0x4e5590ull, 10ull, vm_uncovered_executable_gap_0029_bytes },
    { ".text", 0x4e78d9ull, 0x4e78e3ull, 10ull, vm_uncovered_executable_gap_0030_bytes },
    { ".text", 0x4e8db9ull, 0x4e8dc3ull, 10ull, vm_uncovered_executable_gap_0031_bytes },
    { ".text", 0x50294eull, 0x502958ull, 10ull, vm_uncovered_executable_gap_0032_bytes },
    { ".text", 0x4dbba9ull, 0x4dbbb2ull, 9ull, vm_uncovered_executable_gap_0033_bytes },
    { ".text", 0x4dbbc4ull, 0x4dbbcdull, 9ull, vm_uncovered_executable_gap_0034_bytes },
    { ".text", 0x4e116eull, 0x4e1177ull, 9ull, vm_uncovered_executable_gap_0035_bytes },
    { ".text", 0x4e1180ull, 0x4e1189ull, 9ull, vm_uncovered_executable_gap_0036_bytes },
    { ".text", 0x4e18b9ull, 0x4e18c2ull, 9ull, vm_uncovered_executable_gap_0037_bytes },
    { ".text", 0x4e468aull, 0x4e4693ull, 9ull, vm_uncovered_executable_gap_0038_bytes },
    { ".text", 0x31f83ull, 0x31f8bull, 8ull, vm_uncovered_executable_gap_0039_bytes },
    { ".text", 0x32dd7ull, 0x32ddfull, 8ull, vm_uncovered_executable_gap_0040_bytes },
    { ".text", 0x34f64ull, 0x34f6cull, 8ull, vm_uncovered_executable_gap_0041_bytes },
    { ".text", 0x709e8ull, 0x709f0ull, 8ull, vm_uncovered_executable_gap_0042_bytes },
    { ".text", 0x153b23ull, 0x153b2bull, 8ull, vm_uncovered_executable_gap_0043_bytes },
    { ".text", 0x153bcbull, 0x153bd3ull, 8ull, vm_uncovered_executable_gap_0044_bytes },
    { ".text", 0x166caaull, 0x166cb2ull, 8ull, vm_uncovered_executable_gap_0045_bytes },
    { ".text", 0x24e0dcull, 0x24e0e4ull, 8ull, vm_uncovered_executable_gap_0046_bytes },
    { ".text", 0x251dbcull, 0x251dc4ull, 8ull, vm_uncovered_executable_gap_0047_bytes },
    { ".text", 0x251e2cull, 0x251e34ull, 8ull, vm_uncovered_executable_gap_0048_bytes },
    { ".text", 0x2fd0e6ull, 0x2fd0eeull, 8ull, vm_uncovered_executable_gap_0049_bytes },
    { ".text", 0x306e1eull, 0x306e26ull, 8ull, vm_uncovered_executable_gap_0050_bytes },
    { ".text", 0x3db8d9ull, 0x3db8e1ull, 8ull, vm_uncovered_executable_gap_0051_bytes },
    { ".text", 0x3dcdb9ull, 0x3dcdc1ull, 8ull, vm_uncovered_executable_gap_0052_bytes },
    { ".text", 0x431f13ull, 0x431f1bull, 8ull, vm_uncovered_executable_gap_0053_bytes },
    { ".text", 0x4340f3ull, 0x4340fbull, 8ull, vm_uncovered_executable_gap_0054_bytes },
    { ".text", 0x438ad7ull, 0x438adfull, 8ull, vm_uncovered_executable_gap_0055_bytes },
    { ".text", 0x43e3c7ull, 0x43e3cfull, 8ull, vm_uncovered_executable_gap_0056_bytes },
    { ".text", 0x43e867ull, 0x43e86full, 8ull, vm_uncovered_executable_gap_0057_bytes },
    { ".text", 0x444957ull, 0x44495full, 8ull, vm_uncovered_executable_gap_0058_bytes },
    { ".text", 0x447aedull, 0x447af5ull, 8ull, vm_uncovered_executable_gap_0059_bytes },
    { ".text", 0x48ddf3ull, 0x48ddfbull, 8ull, vm_uncovered_executable_gap_0060_bytes },
    { ".text", 0x4db559ull, 0x4db561ull, 8ull, vm_uncovered_executable_gap_0061_bytes },
    { ".text", 0x4db609ull, 0x4db611ull, 8ull, vm_uncovered_executable_gap_0062_bytes },
    { ".text", 0x4db6d1ull, 0x4db6d9ull, 8ull, vm_uncovered_executable_gap_0063_bytes },
    { ".text", 0x4dbfd1ull, 0x4dbfd9ull, 8ull, vm_uncovered_executable_gap_0064_bytes },
    { ".text", 0x4ddd39ull, 0x4ddd41ull, 8ull, vm_uncovered_executable_gap_0065_bytes },
    { ".text", 0x4ddd51ull, 0x4ddd59ull, 8ull, vm_uncovered_executable_gap_0066_bytes },
    { ".text", 0x4dddb9ull, 0x4dddc1ull, 8ull, vm_uncovered_executable_gap_0067_bytes },
    { ".text", 0x4ddf19ull, 0x4ddf21ull, 8ull, vm_uncovered_executable_gap_0068_bytes },
    { ".text", 0x4ddfc9ull, 0x4ddfd1ull, 8ull, vm_uncovered_executable_gap_0069_bytes },
    { ".text", 0x4deb39ull, 0x4deb41ull, 8ull, vm_uncovered_executable_gap_0070_bytes },
    { ".text", 0x4e0281ull, 0x4e0289ull, 8ull, vm_uncovered_executable_gap_0071_bytes },
    { ".text", 0x4e0401ull, 0x4e0409ull, 8ull, vm_uncovered_executable_gap_0072_bytes },
    { ".text", 0x4e0fa1ull, 0x4e0fa9ull, 8ull, vm_uncovered_executable_gap_0073_bytes },
    { ".text", 0x4e0fb1ull, 0x4e0fb9ull, 8ull, vm_uncovered_executable_gap_0074_bytes },
    { ".text", 0x4e45b9ull, 0x4e45c1ull, 8ull, vm_uncovered_executable_gap_0075_bytes },
    { ".text", 0x4e4679ull, 0x4e4681ull, 8ull, vm_uncovered_executable_gap_0076_bytes },
    { ".text", 0x4e469cull, 0x4e46a4ull, 8ull, vm_uncovered_executable_gap_0077_bytes },
    { ".text", 0x4e49d1ull, 0x4e49d9ull, 8ull, vm_uncovered_executable_gap_0078_bytes },
    { ".text", 0x4e4bf9ull, 0x4e4c01ull, 8ull, vm_uncovered_executable_gap_0079_bytes },
    { ".text", 0x4e4c71ull, 0x4e4c79ull, 8ull, vm_uncovered_executable_gap_0080_bytes },
    { ".text", 0x4e4c89ull, 0x4e4c91ull, 8ull, vm_uncovered_executable_gap_0081_bytes },
    { ".text", 0x4e4ca1ull, 0x4e4ca9ull, 8ull, vm_uncovered_executable_gap_0082_bytes },
    { ".text", 0x4e4ef9ull, 0x4e4f01ull, 8ull, vm_uncovered_executable_gap_0083_bytes },
    { ".text", 0x4e4f09ull, 0x4e4f11ull, 8ull, vm_uncovered_executable_gap_0084_bytes },
    { ".text", 0x4e4f39ull, 0x4e4f41ull, 8ull, vm_uncovered_executable_gap_0085_bytes },
    { ".text", 0x4e5f09ull, 0x4e5f11ull, 8ull, vm_uncovered_executable_gap_0086_bytes },
    { ".text", 0x4e5f19ull, 0x4e5f21ull, 8ull, vm_uncovered_executable_gap_0087_bytes },
    { ".text", 0x4e5f31ull, 0x4e5f39ull, 8ull, vm_uncovered_executable_gap_0088_bytes },
    { ".text", 0x4e5f89ull, 0x4e5f91ull, 8ull, vm_uncovered_executable_gap_0089_bytes },
    { ".text", 0x4e5f99ull, 0x4e5fa1ull, 8ull, vm_uncovered_executable_gap_0090_bytes },
    { ".text", 0x4e6899ull, 0x4e68a1ull, 8ull, vm_uncovered_executable_gap_0091_bytes },
    { ".text", 0x4e68a9ull, 0x4e68b1ull, 8ull, vm_uncovered_executable_gap_0092_bytes },
    { ".text", 0x4e68b9ull, 0x4e68c1ull, 8ull, vm_uncovered_executable_gap_0093_bytes },
    { ".text", 0x4e69f9ull, 0x4e6a01ull, 8ull, vm_uncovered_executable_gap_0094_bytes },
    { ".text", 0x4e6a09ull, 0x4e6a11ull, 8ull, vm_uncovered_executable_gap_0095_bytes },
    { ".text", 0x4e6ff9ull, 0x4e7001ull, 8ull, vm_uncovered_executable_gap_0096_bytes },
    { ".text", 0x4e7009ull, 0x4e7011ull, 8ull, vm_uncovered_executable_gap_0097_bytes },
    { ".text", 0x4e7079ull, 0x4e7081ull, 8ull, vm_uncovered_executable_gap_0098_bytes },
    { ".text", 0x4e7089ull, 0x4e7091ull, 8ull, vm_uncovered_executable_gap_0099_bytes },
    { ".text", 0x4e74e1ull, 0x4e74e9ull, 8ull, vm_uncovered_executable_gap_0100_bytes },
    { ".text", 0x4e7649ull, 0x4e7651ull, 8ull, vm_uncovered_executable_gap_0101_bytes },
    { ".text", 0x4e7669ull, 0x4e7671ull, 8ull, vm_uncovered_executable_gap_0102_bytes },
    { ".text", 0x4e7731ull, 0x4e7739ull, 8ull, vm_uncovered_executable_gap_0103_bytes },
    { ".text", 0x4e77a1ull, 0x4e77a9ull, 8ull, vm_uncovered_executable_gap_0104_bytes },
    { ".text", 0x4e78b9ull, 0x4e78c1ull, 8ull, vm_uncovered_executable_gap_0105_bytes },
    { ".text", 0x4e7949ull, 0x4e7951ull, 8ull, vm_uncovered_executable_gap_0106_bytes },
    { ".text", 0x4e7959ull, 0x4e7961ull, 8ull, vm_uncovered_executable_gap_0107_bytes },
    { ".text", 0x4e79b9ull, 0x4e79c1ull, 8ull, vm_uncovered_executable_gap_0108_bytes },
    { ".text", 0x4e7aedull, 0x4e7af5ull, 8ull, vm_uncovered_executable_gap_0109_bytes },
    { ".text", 0x4e7b01ull, 0x4e7b09ull, 8ull, vm_uncovered_executable_gap_0110_bytes },
    { ".text", 0x4e8a61ull, 0x4e8a69ull, 8ull, vm_uncovered_executable_gap_0111_bytes },
    { ".text", 0x4e8d49ull, 0x4e8d51ull, 8ull, vm_uncovered_executable_gap_0112_bytes },
    { ".text", 0x4e8e69ull, 0x4e8e71ull, 8ull, vm_uncovered_executable_gap_0113_bytes },
    { ".text", 0x4e997aull, 0x4e9982ull, 8ull, vm_uncovered_executable_gap_0114_bytes },
    { ".text", 0x4e0c4full, 0x4e0c55ull, 6ull, vm_uncovered_executable_gap_0115_bytes },
    { ".text", 0x4e0dcfull, 0x4e0dd5ull, 6ull, vm_uncovered_executable_gap_0116_bytes },
    { ".text", 0x4e0fedull, 0x4e0ff3ull, 6ull, vm_uncovered_executable_gap_0117_bytes },
    { ".text", 0x4e3f79ull, 0x4e3f7full, 6ull, vm_uncovered_executable_gap_0118_bytes },
    { ".text", 0x4e4c5full, 0x4e4c65ull, 6ull, vm_uncovered_executable_gap_0119_bytes },
    { ".text", 0x4e4cb9ull, 0x4e4cbfull, 6ull, vm_uncovered_executable_gap_0120_bytes },
    { ".text", 0x4e758full, 0x4e7595ull, 6ull, vm_uncovered_executable_gap_0121_bytes },
    { ".text", 0x4e9962ull, 0x4e9967ull, 5ull, vm_uncovered_executable_gap_0122_bytes },
    { ".text", 0x6fe98ull, 0x6fe9cull, 4ull, vm_uncovered_executable_gap_0123_bytes },
    { ".text", 0x72cabull, 0x72cafull, 4ull, vm_uncovered_executable_gap_0124_bytes },
    { ".text", 0x72e13ull, 0x72e17ull, 4ull, vm_uncovered_executable_gap_0125_bytes },
    { ".text", 0x16aab2ull, 0x16aab6ull, 4ull, vm_uncovered_executable_gap_0126_bytes },
    { ".text", 0x16b2baull, 0x16b2beull, 4ull, vm_uncovered_executable_gap_0127_bytes },
    { ".text", 0x17fac5ull, 0x17fac9ull, 4ull, vm_uncovered_executable_gap_0128_bytes },
    { ".text", 0x181085ull, 0x181089ull, 4ull, vm_uncovered_executable_gap_0129_bytes },
    { ".text", 0x2674c6ull, 0x2674caull, 4ull, vm_uncovered_executable_gap_0130_bytes },
    { ".text", 0x268ea2ull, 0x268ea6ull, 4ull, vm_uncovered_executable_gap_0131_bytes },
    { ".text", 0x2761e9ull, 0x2761edull, 4ull, vm_uncovered_executable_gap_0132_bytes },
    { ".text", 0x30952dull, 0x309531ull, 4ull, vm_uncovered_executable_gap_0133_bytes },
    { ".text", 0x31c6fbull, 0x31c6ffull, 4ull, vm_uncovered_executable_gap_0134_bytes },
    { ".text", 0x31d7c7ull, 0x31d7cbull, 4ull, vm_uncovered_executable_gap_0135_bytes },
    { ".text", 0x3dc419ull, 0x3dc41dull, 4ull, vm_uncovered_executable_gap_0136_bytes },
    { ".text", 0x3e3176ull, 0x3e317aull, 4ull, vm_uncovered_executable_gap_0137_bytes },
    { ".text", 0x3e9516ull, 0x3e951aull, 4ull, vm_uncovered_executable_gap_0138_bytes },
    { ".text", 0x44813dull, 0x448141ull, 4ull, vm_uncovered_executable_gap_0139_bytes },
    { ".text", 0x44a71dull, 0x44a721ull, 4ull, vm_uncovered_executable_gap_0140_bytes },
    { ".text", 0x4af8adull, 0x4af8b1ull, 4ull, vm_uncovered_executable_gap_0141_bytes },
    { ".text", 0x4db721ull, 0x4db725ull, 4ull, vm_uncovered_executable_gap_0142_bytes },
    { ".text", 0x4dbc79ull, 0x4dbc7dull, 4ull, vm_uncovered_executable_gap_0143_bytes },
    { ".text", 0x4dbfb9ull, 0x4dbfbdull, 4ull, vm_uncovered_executable_gap_0144_bytes },
    { ".text", 0x4dc409ull, 0x4dc40dull, 4ull, vm_uncovered_executable_gap_0145_bytes },
    { ".text", 0x4dc411ull, 0x4dc415ull, 4ull, vm_uncovered_executable_gap_0146_bytes },
    { ".text", 0x4e0a69ull, 0x4e0a6dull, 4ull, vm_uncovered_executable_gap_0147_bytes },
    { ".text", 0x4e0a71ull, 0x4e0a75ull, 4ull, vm_uncovered_executable_gap_0148_bytes },
    { ".text", 0x4e0c09ull, 0x4e0c0dull, 4ull, vm_uncovered_executable_gap_0149_bytes },
    { ".text", 0x4e0c11ull, 0x4e0c15ull, 4ull, vm_uncovered_executable_gap_0150_bytes },
    { ".text", 0x4e0c91ull, 0x4e0c95ull, 4ull, vm_uncovered_executable_gap_0151_bytes },
    { ".text", 0x4e4c51ull, 0x4e4c55ull, 4ull, vm_uncovered_executable_gap_0152_bytes },
    { ".text", 0x4e4fedull, 0x4e4ff1ull, 4ull, vm_uncovered_executable_gap_0153_bytes },
    { ".text", 0x4e5435ull, 0x4e5439ull, 4ull, vm_uncovered_executable_gap_0154_bytes },
    { ".text", 0x4e545dull, 0x4e5461ull, 4ull, vm_uncovered_executable_gap_0155_bytes },
    { ".text", 0x4e770dull, 0x4e7711ull, 4ull, vm_uncovered_executable_gap_0156_bytes },
    { ".text", 0x4e7719ull, 0x4e771dull, 4ull, vm_uncovered_executable_gap_0157_bytes },
    { ".text", 0x4e7721ull, 0x4e7725ull, 4ull, vm_uncovered_executable_gap_0158_bytes },
    { ".text", 0x4e7ad5ull, 0x4e7ad9ull, 4ull, vm_uncovered_executable_gap_0159_bytes },
    { ".text", 0x4e7ae1ull, 0x4e7ae5ull, 4ull, vm_uncovered_executable_gap_0160_bytes },
    { ".text", 0x4e85c1ull, 0x4e85c5ull, 4ull, vm_uncovered_executable_gap_0161_bytes },
    { ".text", 0x4e8d3dull, 0x4e8d41ull, 4ull, vm_uncovered_executable_gap_0162_bytes },
    { ".text", 0x4e8e51ull, 0x4e8e55ull, 4ull, vm_uncovered_executable_gap_0163_bytes },
    { ".text", 0x4e9952ull, 0x4e9956ull, 4ull, vm_uncovered_executable_gap_0164_bytes },
    { ".text", 0x4e7635ull, 0x4e7638ull, 3ull, vm_uncovered_executable_gap_0165_bytes },
    { ".text", 0xd73dfull, 0xd73e1ull, 2ull, vm_uncovered_executable_gap_0166_bytes },
    { ".text", 0xdae07ull, 0xdae09ull, 2ull, vm_uncovered_executable_gap_0167_bytes },
    { ".text", 0x192885ull, 0x192887ull, 2ull, vm_uncovered_executable_gap_0168_bytes },
    { ".text", 0x2761e1ull, 0x2761e3ull, 2ull, vm_uncovered_executable_gap_0169_bytes },
    { ".text", 0x277783ull, 0x277785ull, 2ull, vm_uncovered_executable_gap_0170_bytes },
    { ".text", 0x27a581ull, 0x27a583ull, 2ull, vm_uncovered_executable_gap_0171_bytes },
    { ".text", 0x33202bull, 0x33202dull, 2ull, vm_uncovered_executable_gap_0172_bytes },
    { ".text", 0x44a717ull, 0x44a719ull, 2ull, vm_uncovered_executable_gap_0173_bytes },
    { ".text", 0x45985cull, 0x45985eull, 2ull, vm_uncovered_executable_gap_0174_bytes },
    { ".text", 0x4dc635ull, 0x4dc637ull, 2ull, vm_uncovered_executable_gap_0175_bytes },
    { ".text", 0x4dc691ull, 0x4dc693ull, 2ull, vm_uncovered_executable_gap_0176_bytes },
    { ".text", 0x4dc8cdull, 0x4dc8cfull, 2ull, vm_uncovered_executable_gap_0177_bytes },
    { ".text", 0x4dc8d1ull, 0x4dc8d3ull, 2ull, vm_uncovered_executable_gap_0178_bytes },
    { ".text", 0x4e831bull, 0x4e831dull, 2ull, vm_uncovered_executable_gap_0179_bytes },
    { ".text", 0x4e573dull, 0x4e573eull, 1ull, vm_uncovered_executable_gap_0180_bytes },
};

enum { VM_UNCOVERED_EXECUTABLE_GAP_COUNT = 181 };
enum { VM_UNCOVERED_EXECUTABLE_GAP_BYTES = 1278 };
_Static_assert(sizeof(vm_uncovered_executable_gaps) / sizeof(vm_uncovered_executable_gaps[0]) == VM_UNCOVERED_EXECUTABLE_GAP_COUNT, "gap table count mismatch");

const VMUncoveredExecutableGap *vm_uncovered_executable_gap_at(size_t index) {
    return index < VM_UNCOVERED_EXECUTABLE_GAP_COUNT ? &vm_uncovered_executable_gaps[index] : 0;
}

size_t vm_uncovered_executable_gap_count(void) {
    return VM_UNCOVERED_EXECUTABLE_GAP_COUNT;
}
