/*
 * Targeted RetDec C for native return-patch follow-up helpers.
 *
 * Ranges:
 *   0x21a50-0x21b05
 *   0x2508e-0x2509a
 *   0x72588-0x7259e
 *   0x7260a-0x7261c
 *   0x72bbc-0x72c20
 *   0x48eb2b-0x48ec68
 *
 * These are the narrow follow-up targets selected by
 * vm_native_ret_patch_followups.c. They model native helper semantics
 * adjacent to ret-patch exits; they are not promoted as VM bytecode CFG.
 */
#include <iconv.h>
#include <stdint.h>
#include <stddef.h>

int64_t __readfsqword(uint64_t offset);


int64_t function_21a2d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_21a50(int64_t result, int64_t a2);
int64_t function_24cb0(int64_t a1);
int64_t function_2508e(int64_t * a1);
int64_t function_250b0(int64_t a1, int64_t * a2, int64_t * a3);
int64_t function_256ba(int64_t * a1, int64_t * a2);
int64_t function_48d302(int64_t * a1);
int64_t function_48e6b8(int64_t a1, int64_t a2);
int64_t function_48eb2b(int64_t a1, int64_t a2);
int64_t function_4eeb40(int64_t a1);
int64_t function_4eec00(void);
int64_t function_4efb50(void);
int64_t function_4efb60(void);
int64_t function_4efb80(void);
int64_t function_4efb90(void);
int64_t function_4efba0(void);
int64_t function_4efbc0(void);
int64_t function_4efd90(void);
int64_t function_4efda0(void);
int64_t function_4efdc0(void);
int64_t function_4f1a20(void);
int64_t function_4f1a30(void);
int64_t function_4f1a40(void);
int64_t function_4f1a60(void);
int64_t function_4f1a80(void);
int64_t function_4f1aa0(void);
int64_t function_4f2ff0(void);
int64_t function_4f3050(void);
int64_t function_4f3080(void);
int64_t function_4f30e0(void);
int64_t function_4f3110(void);
int64_t function_4f3170(void);
int64_t function_4f31a0(void);
int64_t function_4f3200(void);
int64_t function_4f3f50(void);
int64_t function_4f4030(void);
int64_t function_4f4060(void);
int64_t function_4f4140(void);
int64_t function_4f4e50(void);
int64_t function_4f4f20(void);
int64_t function_4f4f50(void);
int64_t function_4f5020(void);
int64_t function_4f5070(void);
int64_t function_4f50b0(void);
int64_t function_4f5150(void);
int64_t function_4f51b0(void);
int64_t function_4f5340(void);
int64_t function_4f5350(void);
int64_t function_4f53c0(void);
int64_t function_4f5450(void);
int64_t function_4f54c0(void);
int64_t function_4fbf50(void);
int64_t function_4fbf60(void);
int64_t function_4fbf80(void);
int64_t function_4fbfa0(void);
int64_t function_4fbfc0(void);
int64_t function_4fd330(void);
int64_t function_4fd390(void);
int64_t function_4fd3f0(void);
int64_t function_4fd470(void);
int64_t function_4fd4f0(void);
int64_t function_4fd520(void);
int64_t function_4fd550(void);
int64_t function_4fd6d0(void);
int64_t function_4fd840(void);
int64_t function_4fddc0(void);
int64_t function_4fe020(void);
int64_t function_4fe280(void);
int64_t function_4fe3d0(void);
int64_t function_4fe530(void);
int64_t function_4ff6a0(void);
int64_t function_4ff8f0(void);
int64_t function_4ffb20(void);
int64_t function_4ffbf0(void);
int64_t function_501510(void);
int64_t function_501780(void);
int64_t function_5019b0(void);
int64_t function_501a90(void);
int64_t function_5029a0(void);
int64_t function_504780(void);
int64_t function_504980(void);
int64_t function_504ac0(void);
int64_t function_504be0(void);
int64_t function_504cf0(void);
int64_t function_504e20(void);
int64_t function_504eb0(void);
int64_t function_505260(void);
int64_t function_506f90(void);
int64_t function_5070b0(void);
int64_t function_507290(void);
int64_t function_507490(void);
int64_t function_5075d0(void);
int64_t function_5076f0(void);
int64_t function_507780(void);
int64_t function_507980(void);
int64_t function_507990(void);
int64_t function_5079a0(void);
int64_t function_5079b0(void);
int64_t function_5079f0(void);
int64_t function_507a30(void);
int64_t function_507a40(void);
int64_t function_507a50(void);
int64_t function_507a60(void);
int64_t function_507aa0(void);
int64_t function_507ae0(void);
int64_t function_507b00(void);
int64_t function_507b20(void);
int64_t function_507b30(void);
int64_t function_507b40(void);
int64_t function_507b60(void);
int64_t function_507b70(void);
int64_t function_507ba0(void);
int64_t function_507bc0(void);
int64_t function_507be0(void);
int64_t function_507c30(void);
int64_t function_507c50(void);
int64_t function_507c70(void);
int64_t function_507c90(void);
int64_t function_507cb0(void);
int64_t function_507cd0(void);
int64_t function_507cf0(void);
int64_t function_507d10(void);
int64_t function_507d30(void);
int64_t function_507d50(void);
int64_t function_507d70(void);
int64_t function_507d90(void);
int64_t function_507db0(void);
int64_t function_507dd0(void);
int64_t function_507df0(void);
int64_t function_507e10(void);
int64_t function_507e30(void);
int64_t function_507e50(void);
int64_t function_507e70(void);
int64_t function_507e90(void);
int64_t function_507eb0(void);
int64_t function_507f00(void);
int64_t function_507f50(void);
int64_t function_507fa0(void);
int64_t function_507ff0(void);
int64_t function_508040(void);
int64_t function_508090(void);
int64_t function_5080e0(void);
int64_t function_508130(void);
int64_t function_508180(void);
int64_t function_5081d0(void);
int64_t function_508220(void);
int64_t function_508250(void);
int64_t function_508280(void);
int64_t function_5082b0(void);
int64_t function_5082e0(void);
int64_t function_508340(void);
int64_t function_508360(void);
int64_t function_5083b0(void);
int64_t function_5083d0(void);
int64_t function_5083f0(void);
int64_t function_508410(void);
int64_t function_508430(void);
int64_t function_508490(void);
int64_t function_508660(void);
int64_t function_50aff0(void);
int64_t function_50c490(void);
int64_t function_50dec0(void);
int64_t function_50e0b0(void);
int64_t function_50e490(void);
int64_t function_50e4c0(void);
int64_t function_50e8f0(void);
int64_t function_50e900(void);
int64_t function_50ec20(void);
int64_t function_50ee90(void);
int64_t function_50f2d0(void);
int64_t function_50f6e0(void);
int64_t function_5100a0(void);
int64_t function_510270(void);
int64_t function_5115a0(void);
int64_t function_5116e0(void);
int64_t function_5142c0(void);
int64_t function_5143e0(void);
int64_t function_514590(void);
int64_t function_5146f0(void);
int64_t function_5148a0(void);
int64_t function_5153a0(void);
int64_t function_515d80(void);
int64_t function_516760(void);
int64_t function_517130(void);
int64_t function_517140(void);
int64_t function_517be0(void);
int64_t function_517bf0(void);
int64_t function_518b00(void);
int64_t function_518b30(void);
int64_t function_518b40(void);
int64_t function_518b50(void);
int64_t function_518b60(void);
int64_t function_518ba0(void);
int64_t function_518be0(void);
int64_t function_518bf0(void);
int64_t function_518c00(void);
int64_t function_518c10(void);
int64_t function_518c50(void);
int64_t function_518c90(void);
int64_t function_518cb0(void);
int64_t function_518cd0(void);
int64_t function_518ce0(void);
int64_t function_518cf0(void);
int64_t function_518d10(void);
int64_t function_518d20(void);
int64_t function_518d60(void);
int64_t function_518d80(void);
int64_t function_518da0(void);
int64_t function_518dc0(void);
int64_t function_518de0(void);
int64_t function_518e00(void);
int64_t function_518e20(void);
int64_t function_518e40(void);
int64_t function_518e60(void);
int64_t function_518e80(void);
int64_t function_518ea0(void);
int64_t function_518ec0(void);
int64_t function_518ee0(void);
int64_t function_518f10(void);
int64_t function_518f40(void);
int64_t function_518f70(void);
int64_t function_518fa0(void);
int64_t function_518ff0(void);
int64_t function_519010(void);
int64_t function_519030(void);
int64_t function_519120(void);
int64_t function_519280(void);
int64_t function_5192d0(void);
int64_t function_519320(void);
int64_t function_519370(void);
int64_t function_5193c0(void);
int64_t function_519410(void);
int64_t function_519460(void);
int64_t function_5194b0(void);
int64_t function_519500(void);
int64_t function_519550(void);
int64_t function_5195a0(void);
int64_t function_5195f0(void);
int64_t function_51b750(void);
int64_t function_51b9a0(void);
int64_t function_522540(void);
int64_t function_5234b0(void);
int64_t function_523750(void);
int64_t function_525bd0(void);
int64_t function_525d20(void);
int64_t function_525e70(void);
int64_t function_529720(void);
int64_t function_529840(void);
int64_t function_52def0(void);
int64_t function_52df00(void);
int64_t function_52df10(void);
int64_t function_52df20(void);
int64_t function_52df60(void);
int64_t function_52dfa0(void);
int64_t function_52dfb0(void);
int64_t function_52dfc0(void);
int64_t function_52dfd0(void);
int64_t function_52e010(void);
int64_t function_52e050(void);
int64_t function_52e070(void);
int64_t function_52e090(void);
int64_t function_52e0a0(void);
int64_t function_52e0b0(void);
int64_t function_52e0d0(void);
int64_t function_52e0e0(void);
int64_t function_52e110(void);
int64_t function_52e130(void);
int64_t function_52e150(void);
int64_t function_52e170(void);
int64_t function_52e190(void);
int64_t function_52e1b0(void);
int64_t function_52e1d0(void);
int64_t function_52e1f0(void);
int64_t function_52e210(void);
int64_t function_52e230(void);
int64_t function_52e250(void);
int64_t function_52e270(void);
int64_t function_52e2a0(void);
int64_t function_52e2d0(void);
int64_t function_52e300(void);
int64_t function_52e330(void);
int64_t function_52e380(void);
int64_t function_52e3a0(void);
int64_t function_52e3c0(void);
int64_t function_52e3e0(void);
int64_t function_52e580(void);
int64_t function_52e650(void);
int64_t function_52e720(void);
int64_t function_52e7f0(void);
int64_t function_52e840(void);
int64_t function_52e890(void);
int64_t function_52e8e0(void);
int64_t function_52e930(void);
int64_t function_52e980(void);
int64_t function_52e9d0(void);
int64_t function_52ea20(void);
int64_t function_52ea70(void);
int64_t function_530c90(void);
int64_t function_530e90(void);
int64_t function_535930(void);
int64_t function_536820(void);
int64_t function_536aa0(void);
int64_t function_538c20(void);
int64_t function_538d60(void);
int64_t function_538ea0(void);
int64_t function_53c390(void);
int64_t function_53c4b0(void);
int64_t function_53e560(void);
int64_t function_53e620(void);
int64_t function_53e710(void);
int64_t function_53e7d0(void);
int64_t function_53f740(void);
int64_t function_53f750(void);
int64_t function_53f760(void);
int64_t function_53f7a0(void);
int64_t function_53f7e0(void);
int64_t function_53f7f0(void);
int64_t function_53f800(void);
int64_t function_53f810(void);
int64_t function_53f820(void);
int64_t function_53f830(void);
int64_t function_53f840(void);
int64_t function_53f850(void);
int64_t function_53f890(void);
int64_t function_53f8d0(void);
int64_t function_53f8e0(void);
int64_t function_53f8f0(void);
int64_t function_53f900(void);
int64_t function_53f910(void);
int64_t function_53f920(void);
int64_t function_53f940(void);
int64_t function_53f960(void);
int64_t function_53f990(void);
int64_t function_53f9c0(void);
int64_t function_53fa70(void);
int64_t function_53fac0(void);
int64_t function_53fb90(void);
int64_t function_53fbe0(void);
int64_t function_53fce0(void);
int64_t function_541ef0(void);
int64_t function_541f00(void);
int64_t function_541f20(void);
int64_t function_541f80(void);
int64_t function_541f90(void);
int64_t function_541fa0(void);
int64_t function_541fb0(void);
int64_t function_541fd0(void);
int64_t function_541ff0(void);
int64_t function_542010(void);
int64_t function_542030(void);
int64_t function_5420c0(void);
int64_t function_5421b0(void);
int64_t function_5421c0(void);
int64_t function_5421e0(void);
int64_t function_5421f0(void);
int64_t function_542250(void);
int64_t function_5428f0(void);
int64_t function_542950(void);
int64_t function_5429d0(void);
int64_t function_542a30(void);
int64_t function_548d90(void);
int64_t function_548da0(void);
int64_t function_548db0(void);
int64_t function_548dd0(void);
int64_t function_548df0(void);
int64_t function_548e10(void);
int64_t function_548ea0(void);
int64_t function_548ed0(void);
int64_t function_548f00(void);
int64_t function_54cf10(void);
int64_t function_54cf70(void);
int64_t function_54d260(void);
int64_t function_54d2a0(void);
int64_t function_54d2e0(void);
int64_t function_54d300(void);
int64_t function_54d320(void);
int64_t function_54d340(void);
int64_t function_54d360(void);
int64_t function_54d9d0(void);
int64_t function_54d9e0(void);
int64_t function_54d9f0(void);
int64_t function_54da00(void);
int64_t function_54da10(void);
int64_t function_54da30(void);
int64_t function_54da50(void);
int64_t function_54da70(void);
int64_t function_54da90(void);
int64_t function_54dab0(void);
int64_t function_54dad0(void);
int64_t function_54daf0(void);
int64_t function_54db10(void);
int64_t function_54db30(void);
int64_t function_54db50(void);
int64_t function_54db70(void);
int64_t function_54db90(void);
int64_t function_54dbb0(void);
int64_t function_54dbd0(void);
int64_t function_54dbf0(void);
int64_t function_54dc10(void);
int64_t function_54dc30(void);
int64_t function_54dc50(void);
int64_t function_54dc70(void);
int64_t function_54dc90(void);
int64_t function_54dcb0(void);
int64_t function_54dcd0(void);
int64_t function_54dcf0(void);
int64_t function_54dd10(void);
int64_t function_54dec0(void);
int64_t function_54dee0(void);
int64_t function_54df00(void);
int64_t function_54df20(void);
int64_t function_54df40(void);
int64_t function_54df60(void);
int64_t function_54e140(void);
int64_t function_54e1c0(void);
int64_t function_54e320(void);
int64_t function_54e3e0(void);
int64_t function_54e4c0(void);
int64_t function_54e6e0(void);
int64_t function_54e770(void);
int64_t function_54e800(void);
int64_t function_54e8a0(void);
int64_t function_54e9d0(void);
int64_t function_54ea90(void);
int64_t function_54ebd0(void);
int64_t function_54ed60(void);
int64_t function_54eec0(void);
int64_t function_54f020(void);
int64_t function_54f1d0(void);
int64_t function_54f1f0(void);
int64_t function_54f210(void);
int64_t function_54f230(void);
int64_t function_54f3b0(void);
int64_t function_54f430(void);
int64_t function_54f4b0(void);
int64_t function_54f5f0(void);
int64_t function_54f610(void);
int64_t function_54f630(void);
int64_t function_54f6f0(void);
int64_t function_54f770(void);
int64_t function_54f7f0(void);
int64_t function_54f870(void);
int64_t function_54f930(void);
int64_t function_54fa00(void);
int64_t function_54faa0(void);
int64_t function_54fb40(void);
int64_t function_551a70(void);
int64_t function_551a80(void);
int64_t function_551a90(void);
int64_t function_551aa0(void);
int64_t function_551ae0(void);
int64_t function_551b20(void);
int64_t function_551b30(void);
int64_t function_551b40(void);
int64_t function_551b50(void);
int64_t function_551b90(void);
int64_t function_551bd0(void);
int64_t function_551bf0(void);
int64_t function_551c10(void);
int64_t function_551c20(void);
int64_t function_551c30(void);
int64_t function_551c50(void);
int64_t function_551c60(void);
int64_t function_551ca0(void);
int64_t function_551cc0(void);
int64_t function_551ce0(void);
int64_t function_551d30(void);
int64_t function_551d50(void);
int64_t function_551d70(void);
int64_t function_551d90(void);
int64_t function_551db0(void);
int64_t function_551dd0(void);
int64_t function_551df0(void);
int64_t function_551e10(void);
int64_t function_551e30(void);
int64_t function_551e50(void);
int64_t function_551e70(void);
int64_t function_551e90(void);
int64_t function_551eb0(void);
int64_t function_551ed0(void);
int64_t function_551ef0(void);
int64_t function_551f10(void);
int64_t function_551f30(void);
int64_t function_551f50(void);
int64_t function_551f70(void);
int64_t function_551f90(void);
int64_t function_551fb0(void);
int64_t function_552000(void);
int64_t function_552050(void);
int64_t function_5520a0(void);
int64_t function_5520f0(void);
int64_t function_552140(void);
int64_t function_552190(void);
int64_t function_5521e0(void);
int64_t function_552230(void);
int64_t function_552280(void);
int64_t function_5522d0(void);
int64_t function_552320(void);
int64_t function_552350(void);
int64_t function_552380(void);
int64_t function_5523b0(void);
int64_t function_5523e0(void);
int64_t function_552440(void);
int64_t function_552460(void);
int64_t function_5524b0(void);
int64_t function_5524d0(void);
int64_t function_5524f0(void);
int64_t function_552590(void);
int64_t function_552760(void);
int64_t function_555240(void);
int64_t function_556660(void);
int64_t function_5580e0(void);
int64_t function_5582d0(void);
int64_t function_5586a0(void);
int64_t function_5586e0(void);
int64_t function_558b00(void);
int64_t function_558b10(void);
int64_t function_558e30(void);
int64_t function_5590a0(void);
int64_t function_5594e0(void);
int64_t function_5598e0(void);
int64_t function_55a0c0(void);
int64_t function_55a290(void);
int64_t function_55b740(void);
int64_t function_55b890(void);
int64_t function_55c790(void);
int64_t function_55c9b0(void);
int64_t function_55e9b0(void);
int64_t function_55ead0(void);
int64_t function_55ec80(void);
int64_t function_55f800(void);
int64_t function_5601c0(void);
int64_t function_5601d0(void);
int64_t function_560c00(void);
int64_t function_5615a0(void);
int64_t function_562030(void);
int64_t function_562ac0(void);
int64_t function_562ad0(void);
int64_t function_5631a0(void);
int64_t function_5631b0(void);
int64_t function_5631e0(void);
int64_t function_5631f0(void);
int64_t function_563220(void);
int64_t function_563240(void);
int64_t function_563270(void);
int64_t function_563290(void);
int64_t function_5632c0(void);
int64_t function_5632e0(void);
int64_t function_563300(void);
int64_t function_563340(void);
int64_t function_563350(void);
int64_t function_563360(void);
int64_t function_5633a0(void);
int64_t function_563410(void);
int64_t function_563480(void);
int64_t function_5634a0(void);
int64_t function_563520(void);
int64_t function_563540(void);
int64_t function_563580(void);
int64_t function_5635c0(void);
int64_t function_563620(void);
int64_t function_563640(void);
int64_t function_563690(void);
int64_t function_563720(void);
int64_t function_5637b0(void);
int64_t function_5637f0(void);
int64_t function_563810(void);
int64_t function_563850(void);
int64_t function_564ea0(void);
int64_t function_564eb0(void);
int64_t function_564ed0(void);
int64_t function_565280(void);
int64_t function_5652a0(void);
int64_t function_5658d0(void);
int64_t function_5658e0(void);
int64_t function_565900(void);
int64_t function_565920(void);
int64_t function_565930(void);
int64_t function_565950(void);
int64_t function_565970(void);
int64_t function_565980(void);
int64_t function_566ae0(void);
int64_t function_566af0(void);
int64_t function_566b00(void);
int64_t function_566b90(void);
int64_t function_566bb0(void);
int64_t function_566bd0(void);
int64_t function_566bf0(void);
int64_t function_566c10(void);
int64_t function_566c30(void);
int64_t function_566c50(void);
int64_t function_566c70(void);
int64_t function_566c90(void);
int64_t function_566cb0(void);
int64_t function_566d40(void);
int64_t function_566d60(void);
int64_t function_566d80(void);
int64_t function_566da0(void);
int64_t function_566dc0(void);
int64_t function_566de0(void);
int64_t function_566e00(void);
int64_t function_568460(void);
int64_t function_5684d0(void);
int64_t function_568730(void);
int64_t function_5687a0(void);
int64_t function_5687d0(void);
int64_t function_5687e0(void);
int64_t function_568870(void);
int64_t function_568aa0(void);
int64_t function_568b50(void);
int64_t function_568b70(void);
int64_t function_568c40(void);
int64_t function_568cf0(void);
int64_t function_569eb0(void);
int64_t function_569f90(void);
int64_t function_569fc0(void);
int64_t function_56a0a0(void);
int64_t function_56adb0(void);
int64_t function_56ae80(void);
int64_t function_56aeb0(void);
int64_t function_56af80(void);
int64_t function_56b220(void);
int64_t function_56b290(void);
int64_t function_56b4f0(void);
int64_t function_56b560(void);
int64_t function_56b590(void);
int64_t function_56b640(void);
int64_t function_56b660(void);
int64_t function_56b730(void);
int64_t function_56b7e0(void);
int64_t function_56ba40(void);
int64_t function_56bca0(void);
int64_t function_56bed0(void);
int64_t function_56bf10(void);
int64_t function_56bf40(void);
int64_t function_56f9c0(void);
int64_t function_56f9e0(void);
int64_t function_56fc00(void);
int64_t function_56fc10(void);
int64_t function_56fc70(void);
int64_t function_56fc80(void);
int64_t function_56fce0(void);
int64_t function_56fd80(void);
int64_t function_56fe30(void);
int64_t function_56fe90(void);
int64_t function_56fef0(void);
int64_t function_56ff00(void);
int64_t function_56ff30(void);
int64_t function_56ff90(void);
int64_t function_570490(void);
int64_t function_5704b0(void);
int64_t function_5704d0(void);
int64_t function_5704f0(void);
int64_t function_570510(void);
int64_t function_570530(void);
int64_t function_570550(void);
int64_t function_570570(void);
int64_t function_570620(void);
int64_t function_570650(void);
int64_t function_570670(void);
int64_t function_570690(void);
int64_t function_5706b0(void);
int64_t function_5706d0(void);
int64_t function_5706f0(void);
int64_t function_570710(void);
int64_t function_570730(void);
int64_t function_570750(void);
int64_t function_570770(void);
int64_t function_570820(void);
int64_t function_570850(void);
int64_t function_570870(void);
int64_t function_570960(void);
int64_t function_570b50(void);
int64_t function_570c50(void);
int64_t function_570d00(void);
int64_t function_570dc0(void);
int64_t function_570ec0(void);
int64_t function_570f80(void);
int64_t function_571040(void);
int64_t function_571220(void);
int64_t function_5712b0(void);
int64_t function_571340(void);
int64_t function_5713b0(void);
int64_t function_571440(void);
int64_t function_5714d0(void);
int64_t function_571540(void);
int64_t function_5715b0(void);
int64_t function_571620(void);
int64_t function_571680(void);
int64_t function_5716e0(void);
int64_t function_571740(void);
int64_t function_5717a0(void);
int64_t function_571800(void);
int64_t function_571860(void);
int64_t function_5718c0(void);
int64_t function_571920(void);
int64_t function_571980(void);
int64_t function_5719e0(void);
int64_t function_571a40(void);
int64_t function_571aa0(void);
int64_t function_571b10(void);
int64_t function_571b80(void);
int64_t function_571bf0(void);
int64_t function_571c60(void);
int64_t function_571cd0(void);
int64_t function_571d40(void);
int64_t function_571db0(void);
int64_t function_571e20(void);
int64_t function_571eb0(void);
int64_t function_571f40(void);
int64_t function_571fd0(void);
int64_t function_574770(void);
int64_t function_574790(void);
int64_t function_5747b0(void);
int64_t function_5747d0(void);
int64_t function_5747f0(void);
int64_t function_574810(void);
int64_t function_574830(void);
int64_t function_574850(void);
int64_t function_574900(void);
int64_t function_574930(void);
int64_t function_574950(void);
int64_t function_574980(void);
int64_t function_5749a0(void);
int64_t function_5749c0(void);
int64_t function_5749e0(void);
int64_t function_574a00(void);
int64_t function_574a20(void);
int64_t function_574a40(void);
int64_t function_574a60(void);
int64_t function_574b10(void);
int64_t function_574b40(void);
int64_t function_574b60(void);
int64_t function_574b90(void);
int64_t function_574c90(void);
int64_t function_574d90(void);
int64_t function_574e40(void);
int64_t function_574ef0(void);
int64_t function_574fb0(void);
int64_t function_575070(void);
int64_t function_575100(void);
int64_t function_575170(void);
int64_t function_575200(void);
int64_t function_575270(void);
int64_t function_575300(void);
int64_t function_575390(void);
int64_t function_575400(void);
int64_t function_575470(void);
int64_t function_5754d0(void);
int64_t function_575530(void);
int64_t function_575590(void);
int64_t function_5755f0(void);
int64_t function_575650(void);
int64_t function_5756b0(void);
int64_t function_575710(void);
int64_t function_575770(void);
int64_t function_5757d0(void);
int64_t function_575830(void);
int64_t function_575890(void);
int64_t function_5758f0(void);
int64_t function_575960(void);
int64_t function_5759d0(void);
int64_t function_575a40(void);
int64_t function_575ab0(void);
int64_t function_575b20(void);
int64_t function_575b90(void);
int64_t function_575c00(void);
int64_t function_575c70(void);
int64_t function_575d00(void);
int64_t function_575d90(void);
int64_t function_575e20(void);
int64_t function_575fb0(void);
int64_t function_576140(void);
int64_t function_72588(int64_t a1);
int64_t function_7260a(int64_t a1);
int64_t function_72782(int64_t a1);
int64_t function_729b6(void);
int64_t function_729ce(int64_t * a1);
int64_t function_72a14(void);
int64_t function_72ba0(int64_t a1, int32_t a2);
int64_t function_72bbc(int64_t a1);



int64_t g1 = 0x1033dce48862a00; // 0x597127
int64_t g2 = 0; // 0x8523c0
int64_t g3 = 0; // 0x8523d8
int32_t g4;



void __stack_chk_fail(void);



// Address range: 0x21a50 - 0x21b05
int64_t function_21a50(int64_t result, int64_t a2) {
    if (a2 != result) {
        int64_t v1 = *(int64_t *)(a2 + 8); // 0x21a69
        function_21a2d(v1, v1, result);
        *(int64_t *)(result + 8) = v1;
    }
    // 0x21af7
    return result;
}

// Address range: 0x2508e - 0x2509a
int64_t function_2508e(int64_t * a1) {
    // 0x2508e
    return function_24cb0((int64_t)a1 - 24);
}

// Address range: 0x72588 - 0x7259e
int64_t function_72588(int64_t a1) {
    // 0x72588
    function_72a14();
    return function_72782(a1 + 248);
}

// Address range: 0x7260a - 0x7261c
int64_t function_7260a(int64_t a1) {
    // 0x7260a
    function_72588(a1);
    return function_72bbc(a1);
}

// Address range: 0x72bbc - 0x72c20
int64_t function_72bbc(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x72bcf
    function_729b6();
    int64_t v2 = a1 + 8; // 0x72be4
    int64_t * v3 = (int64_t *)v2; // 0x72be4
    if (*v3 != 0) {
        // 0x72beb
        function_72ba0(v2, 0);
        *v3 = 0;
    }
    // 0x72bfe
    int64_t v4; // bp-40, 0x72bbc
    function_729ce(&v4);
    int64_t result = 0; // 0x72c14
    if (v1 != __readfsqword(40)) {
        // 0x72c16
        __stack_chk_fail();
        result = (int64_t)&g4;
    }
    // 0x72c1b
    return result;
}

// Address range: 0x48eb2b - 0x48ec68
int64_t function_48eb2b(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x48eb3a
    int64_t v2; // bp-56, 0x48eb2b
    if (*(int64_t *)(a2 - 24) != 0) {
        // 0x48eb6d
        int64_t v3; // bp-96, 0x48eb2b
        function_250b0((int64_t)&v3, (int64_t *)"W2U8_ERROR", &v2);
        int64_t v4 = 4 * *(int64_t *)((int64_t)"W2U8_ERROR" - 24); // 0x48eb8f
        int64_t inbytesleft = v4; // bp-88, 0x48eb97
        int64_t outbytesleft = v4; // bp-80, 0x48eb9c
        int64_t v5 = function_4eec00(); // 0x48eba1
        char * inbuf = "W2U8_ERROR"; // bp-72, 0x48ebb4
        int64_t outbuf = v5; // bp-64, 0x48ebbc
        int64_t * cd = iconv_open("UTF-8", "UTF-32LE"); // 0x48ebc1
        if (cd != (int64_t *)-1) {
            int32_t v6 = iconv(cd, &inbuf, (size_t *)&inbytesleft, (char **)&outbuf, (size_t *)&outbytesleft); // 0x48ebe6
            if (v6 != -1) {
                // 0x48ebf0
                v2 = function_48e6b8(v5, outbuf);
                function_256ba(&v3, &v2);
                function_2508e(&v2);
            }
            // 0x48ec15
            iconv_close(cd);
        }
        // 0x48ec1d
        function_4eeb40(v5);
        *(int64_t *)a1 = v3;
        v3 = (int64_t)&g3;
        function_48d302(&g2);
    } else {
        // 0x48eb59
        function_250b0(a1, &g1, &v2);
    }
    int64_t result = a1; // 0x48ec54
    if (v1 != __readfsqword(40)) {
        // 0x48ec56
        __stack_chk_fail();
        result = (int64_t)&g4;
    }
    // 0x48ec5b
    return result;
}

