/*
 * Targeted RetDec C for native executable gap queue batch 183.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x524720-0x525b29 rank=149 name=fcn.00524720 kind=r2_discovered bytes=5129 uncovered=5129
 *   0x23122-0x2478a rank=150 name=fcn.00023122 kind=r2_discovered bytes=5736 uncovered=4990
 *   0x5282e0-0x5295e1 rank=151 name=fcn.005282e0 kind=r2_discovered bytes=4865 uncovered=4865
 *   0x5378f0-0x538b82 rank=152 name=fcn.005378f0 kind=r2_discovered bytes=4754 uncovered=4754
 *   0x539b70-0x53ae01 rank=153 name=fcn.00539b70 kind=r2_discovered bytes=4753 uncovered=4753
 *   0x53af80-0x53c211 rank=154 name=fcn.0053af80 kind=r2_discovered bytes=4753 uncovered=4753
 *   0x49f120-0x4a03ad rank=155 name=fcn.0049f120 kind=r2_discovered bytes=4749 uncovered=4749
 *   0x4cb560-0x4cc7cd rank=156 name=fcn.004cb560 kind=r2_discovered bytes=4717 uncovered=4717
 *   0x49bfd1-0x49d5e0 rank=157 name=fcn.0049bfd1 kind=r2_discovered bytes=5647 uncovered=4703
 *   0x2327e-0x247dc rank=158 name=fcn.0002327e kind=r2_discovered bytes=5470 uncovered=4692
 *   0x55a5d0-0x55b699 rank=159 name=fcn.0055a5d0 kind=r2_discovered bytes=4297 uncovered=4297
 *   0x4f1be0-0x4f2bd7 rank=160 name=fcn.004f1be0 kind=r2_discovered bytes=4087 uncovered=4082
 *   0x526ea0-0x528000 rank=161 name=fcn.00526ea0 kind=r2_discovered bytes=4448 uncovered=4025
 *   0x510590-0x51150e rank=162 name=fcn.00510590 kind=r2_discovered bytes=3966 uncovered=3966
 *   0x5cd02-0x5dc67 rank=163 name=fcn.0005cd02 kind=r2_discovered bytes=3941 uncovered=3941
 *   0x498d40-0x499a60 rank=164 name=fcn.00498d40 kind=r2_discovered bytes=3360 uncovered=3360
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
typedef int64_t int224_t;
typedef int32_t int3_t;
typedef float float32_t;
typedef double float64_t;
typedef long double float80_t;
static inline int128_t eac_retdec_i128(uint64_t hi, uint64_t lo) { return (int128_t)(((uint128_t)hi << 64) | (uint128_t)lo); }
struct __locale_struct;
struct _TYPEDEF_glob_t;
struct _TYPEDEF___mbstate_t;
struct _IO_FILE;
struct __dirstream;
struct dirent;
struct pollfd;
struct sockaddr;
struct addrinfo;
struct stat;
struct stat64;
struct timespec;
struct timeval;
struct utsname;
struct iovec;
struct epoll_event;
#ifndef EAC_RETDEC_CPUID_REGS_DEFINED
#define EAC_RETDEC_CPUID_REGS_DEFINED 1
struct eac_retdec_cpuid_regs { uint32_t e0; uint32_t e1; uint32_t e2; uint32_t e3; };
#endif
#define F_GETFL 3
#define F_SETFL 4
#define SO_DEBUG 1
#define _SC_PAGESIZE 30
#define SIGALARM 14
#define SYS_getegid32 50
#define PTHREAD_MUTEX_RECURSIVE 1
extern int g2;
extern int g3;
extern int g4;
extern int g5;
extern int g6;
extern int g7;
extern int g8;
extern int g9;
extern int g10;
extern int g11;
extern int g12;
extern int g13;
extern int g14;
extern int g15;
extern int g16;
extern int g17;
extern int g18;
extern int g19;
extern int g20;
extern int g21;
extern int g22;
extern int g23;
extern int g24;
extern int g25;
extern int g26;
extern int g27;
extern int g28;
extern int g29;
extern int g30;
extern int g31;
extern int g32;
extern int g33;
extern int g34;
extern int g35;
extern int g36;
extern int g37;
extern int g38;
extern int g39;
extern int g40;
extern int g41;
extern int g42;
extern int g43;
extern int g44;
extern int g45;
extern int g46;
extern int g47;
extern int g48;
extern int g49;
extern int g50;
extern int g51;
extern int g52;
extern int g53;
extern int g54;
extern int g55;
extern int g56;
extern int g58;
extern int g59;
extern int g60;
extern int g61;
extern int g62;
extern int g63;
extern int g64;
extern int g65;
extern int g66;
extern int g67;
extern int g68;
extern int g69;
extern int g70;
extern int g71;
extern int g72;
extern int g73;
extern int g74;
extern int g75;
extern int g76;
extern int g77;
extern int g78;
extern int g79;
extern int g80;
extern int g81;
extern int g82;
extern int g83;
extern int g84;
extern int g85;
extern int g86;
extern int g87;
extern int g88;
extern int g89;
extern int g90;
extern int g91;
extern int g92;
extern int g93;
extern int g94;
extern int g95;
extern int g96;
extern int g97;
extern int g98;
extern int g99;
extern int g100;
extern int g101;
extern int g102;
extern int g103;
extern int g104;
extern int g105;
extern int g106;
extern int g107;
extern int g108;
extern int g109;
extern int g110;
extern int g111;
extern int g112;
extern int g113;
extern int g114;
extern int g115;
extern int g116;
extern int g117;
extern int g118;
extern int g120;
extern int g126;
extern int g127;
extern int g128;
extern int g129;
extern int g130;
extern int g131;
extern int g132;
extern int g133;
extern int g134;
extern int g135;
extern int g136;
extern int g137;
extern int g138;
extern int g139;
extern int g140;
extern int g141;
extern int g142;
extern int g143;
extern int g144;
extern int g145;
extern int g146;
extern int g147;
extern int g148;
extern int g149;
extern int g150;
extern int g151;
extern int g152;
extern int g153;
extern int g154;
extern int g155;
extern int g156;
extern int g157;
extern int g158;
extern int g159;
extern int g160;
extern int g161;
extern int g162;
extern int g163;
extern int g164;
extern int g165;
extern int g166;
extern int g167;
extern int g168;
extern int g169;
extern int g170;
extern int g171;
extern int g172;
extern int g173;
extern int g174;
extern int g175;
extern int g176;
extern int g177;
extern int g178;
extern int g179;
extern int g180;
extern int g181;
extern int g182;
extern int g183;
extern int g184;
extern int g185;
extern int g186;
extern int g187;
extern int g188;
extern int g189;
extern int g190;
extern int g191;
extern int g192;
extern int g193;
extern int g194;
extern int g195;
extern int g196;
extern int g197;
extern int g198;
extern int g199;
extern int g200;
extern int g201;
extern int g202;
extern int g203;
extern int g204;
extern int g205;
extern int g206;
extern int g207;
extern int g208;
extern int g209;
extern int g210;
extern int g211;
extern int g212;
extern int g213;
extern int g214;
extern int g215;
extern int g216;
extern int g217;
extern int g218;
extern int g219;
extern int g220;
extern int g221;
extern int g222;
extern int g223;
extern int g224;
extern int g225;
extern int g226;
extern int g227;
extern int g228;
extern int g229;
extern int g230;
extern int g231;
extern int g232;
extern int g233;
extern int g234;
extern int g235;
extern int g236;
extern int g237;
extern int g238;
extern int g239;
extern int g240;
extern int g241;
extern int g242;
extern int g243;
extern int g244;
extern int g245;
extern int g246;
extern int g247;
extern int g248;
extern int g249;
extern int g250;
extern int g251;
extern int g252;
extern int g253;
extern int g254;
extern int g255;
extern int g256;
extern int g257;
extern int g258;
extern int g259;
extern int g260;
extern int g261;
extern int g262;
extern int g263;
extern int g264;
extern int g265;
extern int g266;
extern int g267;
extern int g268;
extern int g269;
extern int g270;
extern int g271;
extern int g272;
extern int g273;
extern int g274;
extern int g275;
extern int g276;
extern int g277;
extern int g278;
extern int g279;
extern int g280;
extern int g281;
extern int g282;
extern int g283;
extern int g284;
extern int g285;
extern int g286;
extern int g287;
extern int g288;
extern int g289;
extern int g290;
extern int g291;
extern int g292;
extern int g293;
extern int g294;
extern int g295;
extern int g296;
extern int g297;
extern int g298;
extern int g299;
extern int g300;
extern int g301;
extern int g302;
extern int g303;
extern int g304;
extern int g305;
extern int g306;
extern int g307;
extern int g308;
extern int g309;
extern int g310;
extern int g311;
extern int g312;
extern int g313;
extern int g314;
extern int g315;
extern int g316;
extern int g317;
extern int g318;
extern int g319;
extern int g320;
extern int g321;
extern int g322;
extern int g323;
extern int g324;
extern int g325;
extern int g326;
extern int g327;
extern int g328;
extern int g329;
extern int g330;
extern int g331;
extern int g332;
extern int g333;
extern int g334;
extern int g335;
extern int g336;
extern int g337;
extern int g338;
extern int g339;
extern int g340;
extern int g341;
extern int g342;
extern int g343;
extern int g344;
extern int g345;
extern int g346;
extern int g347;
extern int g348;
extern int g349;
extern int g350;
extern int g351;
extern int g352;
extern int g353;
extern int g354;
extern int g355;
extern int g356;
extern int g357;
extern int g358;
extern int g359;
extern int g360;
extern int g361;
extern int g362;
extern int g363;
extern int g364;
extern int g365;
extern int g366;
extern int g367;
extern int g368;
extern int g369;
extern int g370;
extern int g371;
extern int g372;
extern int g373;
extern int g374;
extern int g375;
extern int g376;
extern int g377;
extern int g378;
extern int g379;
extern int g380;
extern int g381;
extern int g382;
extern int g383;
extern int g384;
extern int g385;
extern int g386;
extern int g387;
extern int g388;
extern int g389;
extern int g390;
extern int g391;
extern int g392;
extern int g393;
extern int g394;
extern int g395;
extern int g396;
extern int g397;
extern int g398;
extern int g399;
extern int g400;
extern int g401;
extern int g402;
extern int g403;
extern int g404;
extern int g405;
extern int g406;
extern int g407;
extern int g408;
extern int g409;
extern int g410;
extern int g411;
extern int g412;
extern int g413;
extern int g414;
extern int g415;
extern int g416;
extern int g417;
extern int g418;
extern int g419;
extern int g420;
extern int g421;
extern int g422;
extern int g423;
extern int g424;
extern int g425;
extern int g426;
extern int g427;
extern int g428;
extern int g429;
extern int g430;
extern int g431;
extern int g432;
extern int g433;
extern int g434;
extern int g435;
extern int g436;
extern int g437;
extern int g439;
extern int g440;
extern int g441;
extern int g442;
extern int g443;
extern int g444;
extern int g445;
extern int g447;
extern int g448;
extern int g449;
extern int g450;
extern int g452;
int64_t entry_point();
unsigned char llvm_ctpop_i8(unsigned char value);
uint16_t llvm_bswap_i16(uint16_t value);
uint32_t llvm_bswap_i32(uint32_t value);
void __asm_int(int32_t interrupt);
int64_t __asm_int1();
int64_t __asm_int3();
int32_t __asm_in(uint16_t port);
int32_t __asm_in_133(uint16_t port);
int32_t __asm_in_134(uint16_t port);
char __asm_in_136(uint16_t port);
char __asm_in_137(uint16_t port);
int32_t __asm_in_138(uint16_t port);
char __asm_insb(uint16_t port);
int32_t __asm_insd(uint16_t port);
void __asm_out(uint16_t port, char value);
void __asm_out_133(uint16_t port, int32_t value);
void __asm_out_134(uint16_t port, int32_t value);
void __asm_out_135(uint16_t port, int32_t value);
void __asm_out_137(uint16_t port, char value);
void __asm_out_139(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint64_t __readfsqword(int64_t offset);
uint8_t __readgsbyte(int64_t offset);
uint32_t __readgsdword(int64_t offset);
uint64_t __readgsqword(int64_t offset);
void __writegsbyte(int64_t offset, uint8_t value);
int64_t __asm_iretd();
int64_t __asm_sti();
int64_t unknown_34e4aca1(int64_t value);
void unknown_11c3039(void);
int64_t unknown_2a35274a(void);
int64_t unknown_3dc1cbae(int32_t value);
int64_t unknown_6847365b(void);
int64_t unknown_74517502(void);
int64_t unknown_6ae5a3c4(void);
int64_t unknown_3d2a4ac0(void);
int64_t unknown_3f58ba8f(void);
int64_t unknown_3a9782b0(void);
int64_t unknown_4a2eb0c7(int64_t value);
int64_t unknown_4c300d9d(void);
int64_t unknown_1a5f8c06(void);
int64_t unknown_1c9eef14(void);
int64_t unknown_fce9f06(void);
int64_t unknown_6830301e(void);
int64_t unknown_2f0fdc0b(void);
int64_t unknown_38ae20ec(void);
int64_t unknown_401c0cfa(void);
void unknown_b6ccb9(void);
int64_t unknown_ffffffffd3dfe90d(void);
int64_t unknown_ffffffffba4fa1e3(void);
int64_t unknown_ffffffffa83be585(void);
int64_t unknown_ffffffffa845fcb4(int64_t a1, int64_t a2, int64_t a3);
int64_t unknown_ffffffffa337f4e6(void);
int64_t unknown_ffffffffb8c4d43e(void);
int64_t unknown_ffffffffb1f005c0(int64_t value);
int64_t unknown_ffffffffc9a6c1f7(void);
int64_t unknown_ffffffffe026915f(void);
int64_t unknown_ffffffffffa50add(void);
int64_t unknown_ffffffff8d401ab3(void);
int64_t unknown_ffffffff920a593a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t unknown_ffffffffc304842d(int64_t value);
int64_t unknown_ffffffffc23c8777(int64_t a1, int64_t a2);
int64_t unknown_ffffffffd64cfc2a(int64_t dst, int64_t src);
int64_t unknown_ffffffffd296219c(void);
int64_t unknown_ffffffffe8914fc1(void);
int64_t unknown_fffffffff537c295(void);
int64_t unknown_ffffffffb38ec0a9(void);
int64_t _ITM_RU1(int64_t src);
int64_t _ITM_RU8(void);
int64_t _ZGTtnam(int64_t size);
int64_t _ITM_memcpyRtWn(int64_t dst, int64_t src, int64_t size);
void __asm_rcl(int32_t value);
void __asm_rep_movsb_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_stosb_memset(char *dst, char value, int64_t count);
void __asm_rep_stosd_memset(char *dst, int32_t value, int64_t count);
void __asm_rep_stosq_memset(char *dst, int64_t value, int64_t count);
void __asm_rep_movsd_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_movsq_memcpy(char *dst, char *src, int64_t count);
int64_t __asm_hlt();
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_wait(void);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __asm_fnstenv(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
struct eac_retdec_cpuid_regs __asm_cpuid(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_133(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_134(uint32_t leaf);
uint64_t __asm_xgetbv(uint64_t index);
uint64_t __asm_rdtsc(void);
void __stack_chk_fail(void);
int __cxa_atexit(void (*func)(int64_t *), void *arg, void *dso);
uint128_t __udivti3(uint128_t a, uint128_t b);
int64_t _ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii_constprop_31(int64_t value);
int64_t _ZGTtdlPv(int64_t value);
int64_t blake3_hasher_init_derive_key_raw(int64_t hasher, int64_t context, int64_t context_len);
int64_t unknown_166c28d(void);
int128_t __asm_movsd(int64_t value);
int128_t __asm_movsd_133(int64_t value);
int128_t __asm_movd(int32_t value);
int128_t __asm_movss(int32_t value);
int64_t __asm_movss_133(int128_t value);
int128_t __asm_movdqa(int128_t value);
void __asm_movq(int64_t value, int128_t dst);
int128_t __asm_aesimc(int128_t value);
int128_t __asm_aeskeygenassist(int128_t value, int imm);
int128_t __asm_movdqu(int128_t value);
int128_t __asm_movdqu_133(int128_t value);
int128_t __asm_movapd(int128_t value);
int128_t __asm_movaps_133(int128_t value);
int128_t __asm_andpd(int128_t left, int128_t right);
int128_t __asm_andnpd(int128_t left, int128_t right);
int128_t __asm_orpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_por(int128_t left, int128_t right);
int128_t __asm_pxor(int128_t left, int128_t right);
int128_t __asm_xorps(int128_t left, int128_t right);
int128_t __asm_addps(int128_t left, int128_t right);
int128_t __asm_cmpnlesd(int128_t left, int128_t right);
int128_t __asm_cvtsi2sd(int64_t value);
int128_t __asm_cvtss2sd(int32_t value);
int128_t __asm_addsd(int128_t left, int128_t right);
int128_t __asm_subsd(int128_t left, int128_t right);
int64_t __asm_cvttsd2si(int128_t value);
int64_t __asm_vcvttsd2si(int128_t value);
void __asm_ucomisd(int128_t left, int128_t right);
void __asm_ucomiss(int128_t left, int64_t right);
void __asm_ucomiss_134(int128_t left, int128_t right);
int128_t __asm_movups();
void __asm_movups_133();
void __asm_movups_134();
int128_t __asm_movaps(int128_t value);
float80_t __frontend_reg_load_fpr(int32_t reg);
void __frontend_reg_store_fpr(int32_t reg, float80_t value);
char *__nl_langinfo_l(int32_t item, struct __locale_struct *locale);
struct __locale_struct *__newlocale(int category_mask, const char *locale, struct __locale_struct *base);
void __freelocale(struct __locale_struct *locale);
struct __locale_struct *__uselocale(struct __locale_struct *locale);
struct __locale_struct *__duplocale(struct __locale_struct *locale);
float32_t __strtof_l(const char *nptr, char **endptr, struct __locale_struct *locale);
float64_t __strtod_l(const char *nptr, char **endptr, struct __locale_struct *locale);
float80_t strtold_l(const char *nptr, char **endptr, struct __locale_struct *locale);
int32_t __strcoll_l(const char *s1, const char *s2, struct __locale_struct *locale);
int32_t __wcscoll_l(const int32_t *s1, const int32_t *s2, struct __locale_struct *locale);
size_t __strxfrm_l(char *dest, const char *src, size_t n, struct __locale_struct *locale);
size_t __wcsxfrm_l(int32_t *dest, const int32_t *src, size_t n, struct __locale_struct *locale);
char *dgettext(char *domain, char *msgid);
char *gettext(char *msgid);
char *bind_textdomain_codeset(char *domainname, char *codeset);
void *iconv_open(const char *tocode, const char *fromcode);
int32_t iconv(void *cd, char **inbuf, int32_t *inbytesleft, char **outbuf, int32_t *outbytesleft);
int iconv_close(void *cd);
struct _IO_FILE *fopen(const char *path, const char *mode);
struct _IO_FILE *fopen64(const char *path, const char *mode);
struct _IO_FILE *fdopen(int fd, const char *mode);
size_t fread(void *ptr, size_t size, size_t nmemb, struct _IO_FILE *stream);
int32_t read(int fd, void *buf, size_t count);
int fileno(struct _IO_FILE *stream);
void rewind(struct _IO_FILE *stream);
int fclose(struct _IO_FILE *stream);
int uname(struct utsname *buf);
int64_t __tls_get_addr(void *arg);
void *dlsym(void *handle, const char *symbol);
int dlclose(void *handle);
int32_t mbrtowc(int32_t *pwc, const char *s, size_t n, struct _TYPEDEF___mbstate_t *ps);
size_t mbstowcs(int32_t *dest, const char *src, size_t n);
size_t mbsrtowcs(int32_t *dst, char **src, size_t len, struct _TYPEDEF___mbstate_t *ps);
int32_t mbsnrtowcs(int32_t *dst, char **src, size_t nms, size_t len, struct _TYPEDEF___mbstate_t *ps);
size_t wcslen(const int32_t *s);
int wcscmp(const int32_t *s1, const int32_t *s2);
int wctob(int32_t wc);
int32_t btowc(int c);
int32_t towlower(int32_t wc);
int32_t __towlower_l(int32_t wc, struct __locale_struct *locale);
int32_t __towupper_l(int32_t wc, struct __locale_struct *locale);
int vswprintf(int32_t *wcs, size_t maxlen, const int32_t *format, int64_t ap);
int32_t *wmemchr(const int32_t *s, int32_t c, size_t n);
int32_t *wmemcpy(int32_t *dest, const int32_t *src, size_t n);
int wmemcmp(const int32_t *s1, const int32_t *s2, size_t n);
int32_t *wmemmove(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemset(int32_t *wcs, int32_t wc, size_t n);
int32_t getwc(struct _IO_FILE *stream);
int32_t putwc(int32_t wc, struct _IO_FILE *stream);
int32_t ungetwc(int32_t wc, struct _IO_FILE *stream);
size_t wcsnrtombs(char *dst, int32_t **src, size_t nwc, size_t len, struct _TYPEDEF___mbstate_t *ps);
size_t wcrtomb(char *s, int32_t wc, struct _TYPEDEF___mbstate_t *ps);
int64_t memset2();
int pthread_mutex_lock(void *mutex);
int pthread_mutex_trylock(void *mutex);
int pthread_mutex_unlock(void *mutex);
int pthread_mutex_init(void *mutex, void *attr);
int pthread_mutex_destroy(void *mutex);
int pthread_mutexattr_init(void *attr);
int pthread_mutexattr_settype(void *attr, int type);
int pthread_create(int32_t *thread, const void *attr, int64_t *(*start_routine)(int64_t *), int64_t *arg);
int pthread_join(int32_t thread, void **retval);
int pthread_once(int32_t *once_control, ...);
int pthread_cond_init(void *cond, void *attr);
int pthread_cond_wait(void *cond, void *mutex);
int pthread_cond_timedwait(void *cond, void *mutex, const struct timespec *abstime);
int pthread_cond_broadcast(void *cond);
int sem_init(int64_t *sem, int pshared, unsigned int value);
int sem_post(int64_t *sem);
int sem_wait(int64_t *sem);
int sem_destroy(int64_t *sem);
int64_t signal(int signum, int64_t handler);
unsigned int alarm(unsigned int seconds);
int fcntl(int fd, int cmd, ...);
int32_t write(int fd, const void *buf, size_t nbyte);
int ftruncate(int fd, int64_t length);
int writev(int fd, const struct iovec *iov, int iovcnt);
int epoll_create(int size);
int epoll_ctl(int epfd, int op, int fd, struct epoll_event *event);
int epoll_wait(int epfd, struct epoll_event *events, int maxevents, int timeout);
int close(int fd);
struct __dirstream *opendir(const char *name);
struct dirent *readdir(struct __dirstream *dirp);
int closedir(struct __dirstream *dirp);
int64_t blake3_hasher_finalize_seek();
int ioctl(int fd, unsigned long request, ...);
int poll(struct pollfd *fds, unsigned long nfds, int timeout);
int gettimeofday(struct timeval *tv, void *tz);
int clock_gettime(int clk_id, struct timespec *tp);
int64_t sysconf(int name);
int64_t syscall(int64_t number, ...);
int mprotect(void *addr, size_t len, int prot);
int memfd_create(void *name, unsigned int flags);
void *mmap(void *addr, size_t len, int prot, int flags, int fd, int64_t offset);
int munmap(void *addr, size_t len);
int __xstat(int ver, const char *path, struct stat *buf);
int __fxstat64(int ver, int fd, struct stat64 *buf);
int fseeko64(struct _IO_FILE *stream, int64_t offset, int whence);
int64_t ftello64(struct _IO_FILE *stream);
int64_t lseek64(int fd, int64_t offset, int whence);
int32_t *__errno_location(void);
int connect(int sockfd, const struct sockaddr *addr, int32_t addrlen);
int getsockopt(int sockfd, int level, int optname, void *optval, int32_t *optlen);
int setsockopt(int sockfd, int level, int optname, const void *optval, int32_t optlen);
int getaddrinfo(const char *node, const char *service, const struct addrinfo *hints, struct addrinfo **res);
void freeaddrinfo(struct addrinfo *res);
int64_t readlink(const char *path, char *buf, size_t bufsiz);
char *realpath(const char *path, char *resolved_path);
int glob(const char *pattern, int flags, void *errfunc, struct _TYPEDEF_glob_t *pglob);
void globfree(struct _TYPEDEF_glob_t *pglob);
char *__xpg_basename(char *path);
int32_t eac_retdec_vsnprintf(char *str, int32_t size, char *format, int64_t ap);
int64_t __wctype_l(const char *property, struct __locale_struct *locale);
int __iswctype_l(int32_t wc, int32_t desc, struct __locale_struct *locale);
int32_t __strftime_l(char *s, int32_t max, const char *format, struct tm *tm, struct __locale_struct *locale);
int32_t __wcsftime_l(int32_t *s, int32_t max, int32_t *format, struct tm *tm, struct __locale_struct *locale);
char *strdup(const char *s);
int __sprintf_chk(char *str, int flag, size_t slen, const char *format, ...);
struct tm *gmtime_r(const time_t *timep, struct tm *result);
struct _Unwind_Exception;
int64_t _Unwind_DeleteException(int64_t exception);
int64_t _Unwind_GetDataRelBase(int64_t context);
int64_t _Unwind_GetLanguageSpecificData(int64_t context);
int64_t _Unwind_GetIPInfo(int64_t context, void *ip_before_insn, int64_t extra);
int64_t _Unwind_GetRegionStart();
int64_t _Unwind_RaiseException(int64_t exception);
void _Unwind_SetGR(int64_t context, int index, int64_t value);
void _Unwind_SetIP(int64_t context, int64_t value);
void _Unwind_Resume(struct _Unwind_Exception *exception);
void _Unwind_Resume_or_Rethrow(int64_t exception);

int64_t function_12f6788d();
int64_t function_1df0f150();
int64_t function_21a2d();
int64_t function_230ff();
int64_t function_23114();
int64_t function_2311d();
int64_t function_23122(int64_t a1);
int64_t function_2314f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23171(void);
int64_t function_2317a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23185(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_231ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23220(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23272(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2327e(int64_t a1);
int64_t function_2329a(int64_t a1);
int64_t function_232a4(int64_t a1, int64_t a2);
int64_t function_232c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2330c(int64_t a1);
int64_t function_23344(int64_t a1, int64_t a2);
int64_t function_23372(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23398(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23414(int64_t a1, int64_t a2);
int64_t function_23424(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_235f2(int64_t a1);
int64_t function_23608(int64_t a1);
int64_t function_23620(int64_t a1);
int64_t function_23680(int64_t a1);
int64_t function_236e3(void);
int64_t function_236fd(void);
int64_t function_23727(int64_t a1);
int64_t function_2376a(int64_t a1);
int64_t function_23792(int64_t a1);
int64_t function_237a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_237f0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23821(void);
int64_t function_2382b(int64_t a1);
int64_t function_23867(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_23981(void);
int64_t function_23985(void);
int64_t function_239a3(int64_t a1);
int64_t function_239eb(int64_t a1);
int64_t function_23a27(int64_t a1);
int64_t function_23a33(void);
int64_t function_23a53(int64_t a1);
int64_t function_23a89(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23aa6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23aaf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23b13(int64_t a1);
int64_t function_23b63(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23b8a(int64_t a1);
int64_t function_23b9f(int64_t a1);
int64_t function_23bb7(int64_t a1);
int64_t function_23bbf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23c58(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23cdf(int64_t a1);
int64_t function_23cec(void);
int64_t function_23d08(void);
int64_t function_23d4e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23d51(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23d7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23dab(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23de5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_23e24(int64_t a1);
int64_t function_23efd(void);
int64_t function_23f07(int64_t a1);
int64_t function_23f21(void);
int64_t function_23f35(void);
int64_t function_23f64(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23f6f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23fd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2401c(void);
int64_t function_2405a(void);
int64_t function_24090(void);
int64_t function_24099(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_240f4(int64_t a1);
int64_t function_24131(void);
int64_t function_24149(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24155(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_241e5(void);
int64_t function_2421c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2426c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_242b0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_242ed(void);
int64_t function_242f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_24336(void);
int64_t function_24357(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_243c6(int64_t a1);
int64_t function_24460(int64_t a1, int64_t a2, int64_t a3);
int64_t function_246af(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24793(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24ce0();
int64_t function_24cec();
int64_t function_24ded();
int64_t function_24dff();
int64_t function_24e0d();
int64_t function_24e1e();
int64_t function_24e74();
int64_t function_24e7c();
int64_t function_24ef4();
int64_t function_2508e();
int64_t function_251d6();
int64_t function_251de();
int64_t function_251e8();
int64_t function_252e0();
int64_t function_2537c();
int64_t function_254fe();
int64_t function_255da();
int64_t function_25622();
int64_t function_2562c();
int64_t function_256ba();
int64_t function_2588a();
int64_t function_259ce();
int64_t function_25a28();
int64_t function_25c34();
int64_t function_29a51ea9();
int64_t function_48db2f();
int64_t function_496540();
int64_t function_4967e0();
int64_t function_496860();
int64_t function_4976c0();
int64_t function_498bb0();
int64_t function_498d10();
int64_t function_498d40(int64_t a1);
int64_t function_499dd0();
int64_t function_49a910();
int64_t function_49b370();
int64_t function_49baf0();
int64_t function_49bdb4();
int64_t function_49bfd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_49d220(int64_t a1);
int64_t function_49d320(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_49e960();
int64_t function_49efb0();
int64_t function_49f120(int64_t result);
int64_t function_4b5890();
int64_t function_4b5940();
int64_t function_4ba4b0();
int64_t function_4c1af0();
int64_t function_4c1b30();
int64_t function_4c1bc0();
int64_t function_4cb560(int64_t a1, int64_t a2);
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f1be0(int64_t a1, int64_t a2);
int64_t function_4f2bd4(void);
int64_t function_4f51e0();
int64_t function_4f5280();
int64_t function_509d40();
int64_t function_50ab00();
int64_t function_50b7d0();
int64_t function_50bde0();
int64_t function_50c440();
int64_t function_50d7a0();
int64_t function_50f6f0();
int64_t function_50f7d0();
int64_t function_510590(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t wstr, int64_t a10, int64_t a11, int64_t a12);
int64_t function_523ad0();
int64_t function_5245c0();
int64_t function_524600();
int64_t function_5246d0();
int64_t function_524720(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * str, int64_t a10, int64_t a11, int64_t a12, int64_t a13);
int64_t function_526ea0(int64_t a1, int64_t result4, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13);
int64_t function_5282e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13);
int64_t function_529a20();
int64_t function_52b8e0();
int64_t function_52cc60();
int64_t function_536e00();
int64_t function_5378f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8, int64_t wstr, int64_t a10, int64_t a11, int64_t a12, int64_t a13);
int64_t function_539b70(int64_t a1, int64_t result2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_53af80(int64_t a1, int64_t result2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_54d6e0();
int64_t function_553d30();
int64_t function_554b00();
int64_t function_555a00();
int64_t function_555fe0();
int64_t function_556610();
int64_t function_55a5d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t str, int64_t a10);
int64_t function_5630c0();
int64_t function_565f30();
int64_t function_565f80();
int64_t function_566390();
int64_t function_5663d0();
int64_t function_566890();
int64_t function_5681f0();
int64_t function_568500();
int64_t function_569370();
int64_t function_569910();
int64_t function_56a0d0();
int64_t function_56a740();
int64_t function_5a470();
int64_t function_5cab4();
int64_t function_5cd02(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_620ac();
int64_t function_62ad8();
int64_t function_729b6();
int64_t function_729ce();
int64_t function_e0017();
int64_t function_e1448();
int64_t function_e298f();
int64_t function_e5cd3();
int64_t function_f1975();
int64_t function_f2be7();
int64_t function_f8eb8();
int64_t function_f9d78();
int64_t function_fb533();
int64_t function_fd3e0();
int64_t function_ffffffffbbe05b21();
int64_t function_ffffffffbf2ede74();
int64_t function_ffffffffcf7e6974();
int64_t function_ffffffffd6bafeaf();
int64_t function_ffffffffdf5a6943();
int64_t function_ffffffffe337f2b9();

// Address range: 0x23122 - 0x2314f
int64_t function_23122(int64_t a1) {
    // 0x23122
    __readfsqword(40);
    return function_e0017();
}

// Address range: 0x2314f - 0x23166
int64_t function_2314f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2314f
    int64_t v1; // 0x2314f
    *(char *)(2 * a2 + 0x362e41bc + a4) = (char)v1;
    char * v2 = (char *)(a4 + 121); // 0x23157
    *v2 = *v2 + (char)a3;
    return function_230ff();
}

// Address range: 0x23171 - 0x23172
int64_t function_23171(void) {
    // 0x23171
    int64_t result; // 0x23171
    return result;
}

// Address range: 0x2317a - 0x23185
int64_t function_2317a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x6c145363); // 0x2317a
    *v1 = *v1 & (int32_t)a4;
    int64_t v2; // 0x2317a
    __asm_outsd((int16_t)a3, *(int32_t *)&v2);
    return function_23114();
}

// Address range: 0x23185 - 0x231ff
int64_t function_23185(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23185
    int64_t v1; // 0x23185
    uint64_t v2 = v1;
    int64_t v3 = v1;
    int64_t v4 = a4 & -256 | (int64_t)((char)a4 - *(char *)(a1 - 0x5e17de3a)); // 0x23186
    *(char *)v3 = 2 * (char)v3;
    if (v4 == 0) {
        function_2311d();
    }
    char * v5 = (char *)(v4 + 19); // 0x2319b
    unsigned char v6 = *v5; // 0x2319b
    *v5 = v6 + 37;
    int64_t result = v6 > 218 ? 0xb2291119 : 0xb2291118; // 0x2319e
    *(char *)a2 = 17;
    char * v7 = (char *)(v1 - 0x408cbd1c); // 0x231a2
    char v8 = *v7 ^ ((char)a5 | (char)&g120); // 0x231a2
    *v7 = v8;
    if (v4 != 1 == v8 == 0) {
        // 0x2321f
        return result;
    }
    if (v4 != 2) {
        // 0x231fb
        __asm_out((int16_t)&g120 & -256, (char)result);
        return __asm_wait();
    }
    unsigned char v9 = *(char *)(v1 + v2 % 256); // 0x231ad
    uint32_t v10 = (int32_t)(v2 & 0xffffff00 | (int64_t)v9); // 0x231ae
    int32_t v11 = v10 + 0x5e0259f5; // 0x231ae
    return 256 * (16 * (int64_t)(v10 % 16 > 10) | (int64_t)(v10 > 0xa1fda60a) | 64 * (int64_t)(v11 == 0) | 128 * (int64_t)(v11 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v11) % 2 == 0)) | (int64_t)(v11 & -0xff01 | 512);
}

// Address range: 0x231ff - 0x2321f
int64_t function_231ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x23206
    if (v1 != 0) {
        int64_t v2; // 0x231ff
        char * v3 = (char *)(v2 + 0x237c151c); // 0x23206
        *v3 = *v3 << v1;
    }
    char * v4 = (char *)(a1 + 63 + a3); // 0x2320c
    *v4 = *v4 ^ 88;
    int32_t v5 = __asm_in((int16_t)a3); // 0x23210
    float80_t v6; // 0x231ff
    *(float32_t *)0x3d22e558 = (float32_t)v6;
    return v5 ^ 0x20d70851;
}

// Address range: 0x23220 - 0x23271
int64_t function_23220(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23220
    int64_t v1; // 0x23220
    int32_t * v2 = (int32_t *)(v1 + 0x790be193); // 0x2322c
    *v2 = *v2 & (int32_t)a2;
    int64_t result = v1 + 0xffd451e8 & 0xffffffff; // 0x23269
    int32_t * v3 = (int32_t *)(result - 125); // 0x2326e
    *v3 = *v3 - 1;
    return result;
}

// Address range: 0x23272 - 0x2327e
int64_t function_23272(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23272
    int64_t result; // 0x23272
    return result;
}

// Address range: 0x2327e - 0x23298
int64_t function_2327e(int64_t a1) {
    // 0x2327e
    return function_e1448();
}

// Address range: 0x2329a - 0x2329b
int64_t function_2329a(int64_t a1) {
    // 0x2329a
    int64_t result; // 0x2329a
    return result;
}

// Address range: 0x232a4 - 0x232a9
int64_t function_232a4(int64_t a1, int64_t a2) {
    // 0x232a4
    int64_t result; // 0x232a4
    *(int32_t *)result = (int32_t)a2;
    return result;
}

// Address range: 0x232c1 - 0x2330b
int64_t function_232c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x232c1
    int64_t v1; // 0x232c1
    bool v2; // 0x232c1
    int64_t result = v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512; // 0x232c1
    if (a4 != 1 == v2) {
        // 0x232f5
        return result & -244;
    }
    // 0x232c4
    return result;
}

// Address range: 0x2330c - 0x23344
int64_t function_2330c(int64_t a1) {
    int64_t result = function_24e74(a1 + 8); // 0x23314
    if ((char)result == 0) {
        // 0x23342
        return result;
    }
    // 0x2331d
    function_620ac(a1 + (int64_t)&g16);
    int64_t result2 = function_24e74(a1 + (int64_t)&g2); // 0x23330
    if ((char)result2 == 0) {
        // 0x23342
        return result2;
    }
    // 0x23339
    return function_243c6(a1);
}

// Address range: 0x23344 - 0x2336f
int64_t function_23344(int64_t a1, int64_t a2) {
    // 0x23344
    __readfsqword(40);
    return function_e298f();
}

// Address range: 0x23372 - 0x23398
int64_t function_23372(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_hlt(a1, a2, a3); // 0x23374
    bool v2; // 0x23372
    int64_t v3 = v2 ? -1 : 1; // 0x2338a
    int64_t v4 = v3 + a1; // 0x2338a
    *(char *)v4 = *(char *)(v3 + a2);
    uint32_t v5 = *(int32_t *)(v4 + v3); // 0x2338e
    int64_t v6; // 0x23372
    uint32_t v7 = *(int32_t *)&v6; // 0x2338f
    *(int32_t *)v1 = v7 / 0x2000 | 0x100000 * v7 | 0x80000 * (int32_t)(v5 > (int32_t)v1);
    return v1 + 0xa1d6e52b + (int64_t)((v7 & 0x1000) != 0) & 0xffffffff;
}

// Address range: 0x23398 - 0x23413
int64_t function_23398(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23398
    int64_t v1; // 0x23398
    uint64_t v2 = v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x23399
    bool v4; // 0x23398
    bool v5; // 0x23398
    if (v3 != 0) {
        int32_t * v6 = (int32_t *)(v2 - 97); // 0x23399
        uint32_t v7 = *v6; // 0x23399
        *v6 = v7 >> v3 | (int32_t)v5 << 32 - v3 | (int32_t)((int64_t)v7 << (int64_t)(33 - v3));
        v4 = v3 == 1 ? v7 < 0 != v5 : v5;
    }
    int64_t v8 = a4 - 1; // 0x2339c
    if (v8 != 0 != v5) {
        // 0x2339e
        int64_t v9; // 0x23398
        return (int64_t)&v9;
    }
    int64_t v10 = v1 & 0xffffffff; // 0x23398
    int64_t v11 = v5 ? -1 : 1; // 0x233a3
    int64_t v12 = v8; // 0x2339c
    int64_t v13 = a1; // 0x23398
    int64_t v14 = a2; // 0x233a3
    int64_t v15 = v10; // 0x23398
    *(char *)v13 = *(char *)v14;
    v14 += v11;
    int64_t result; // 0x23398
    while (v5 || v5 != v4) {
        // 0x2339c
        v12--;
        result = *(int64_t *)v15;
        v13 += v11;
        v15 += 8;
        if (v12 != 0 != v5) {
            // 0x2339e
            return result;
        }
        *(char *)v13 = *(char *)v14;
        v14 += v11;
    }
    char * v16 = (char *)((v2 % 256 | v8 & -256) + 0x5126528b); // 0x233a9
    unsigned char v17 = *v16; // 0x233a9
    unsigned char v18 = v17 + *(char *)v14; // 0x233a9
    *v16 = v18;
    uint32_t v19 = *(int32_t *)-0x3e4a128125071814; // 0x233af
    *(int64_t *)v10 = 0x383f8e;
    int64_t result2 = (int64_t)v19 - 0x69d5ff8d + (int64_t)(v18 < v17); // 0x233be
    float80_t v20; // 0x23398
    *(int16_t *)(result2 - 0x6c3812ad) = (int16_t)v20;
    if (result2 >= 0) {
        char * v21 = (char *)(a3 - 9); // 0x233cd
        *v21 = *v21 + (char)v2;
        return result2;
    }
    // 0x233d5
    *(int32_t *)(v10 + 12) = 0;
    result = result2;
    if (*(int64_t *)(v10 + 24) != __readfsqword(40)) {
        // 0x23405
        __stack_chk_fail();
        result = (int64_t)&g452;
    }
    // 0x2339e
    return result;
}

// Address range: 0x23414 - 0x23423
int64_t function_23414(int64_t a1, int64_t a2) {
    uint32_t v1 = (int32_t)a2; // 0x23414
    int64_t result; // 0x23414
    if (v1 >= 25) {
        // 0x23419
        *(int32_t *)(a1 + (int64_t)&g15) = v1;
        result = __asm_mfence(a1, a2);
    }
    // 0x23422
    return result;
}

// Address range: 0x23424 - 0x235f1
int64_t function_23424(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = 0x2eb95ba6; // bp-70, 0x23441
    int64_t v3 = __readfsqword(40); // 0x23449
    int64_t v4 = (int64_t)&v2; // 0x2346d
    *(int32_t *)&v2 = 0x61657473;
    char * v5 = (char *)(v4 | 4); // 0x2348a
    *v5 = *v5 ^ 3;
    char * v6 = (char *)(v4 | 5); // 0x2349d
    *v6 = *v6 ^ 54;
    if (a2 != 0) {
        // 0x234af
        if (!(((int32_t)a4 == 0 | a3 == 0 | *(char *)&v1 == 0))) {
            uint64_t v7 = a4 & 0xffffffff; // 0x234c6
            int64_t v8; // bp-112, 0x23424
            function_729b6(&v8, a1 + (int64_t)&g10, v4);
            int64_t v9 = function_24ded(v1); // 0x234ea
            int64_t v10 = a1 + (int64_t)&g11; // 0x234ef
            int64_t v11 = v7 + a3; // 0x234fc
            function_25c34(v10, v1, v9);
            function_48db2f(*(int64_t *)v10);
            int64_t * v12 = (int64_t *)(a1 + (int64_t)&g12); // 0x23511
            int64_t v13 = *v12; // 0x23511
            int64_t * v14 = (int64_t *)(a1 + (int64_t)&g14); // 0x23518
            if (v7 > *v14 - v13) {
                int64_t v15 = function_24cec(v7); // 0x2352a
                function_21a2d(a3, v11, v15);
                function_24ce0(*v12);
                *v12 = v15;
                int64_t v16 = v15 + v7; // 0x2355a
                *(int64_t *)(a1 + (int64_t)&g13) = v16;
                *v14 = v16;
            } else {
                int64_t * v17 = (int64_t *)(a1 + (int64_t)&g13); // 0x2356d
                uint64_t v18 = *v17 - v13; // 0x23574
                if (v7 > v18) {
                    int64_t v19 = v18 + a3; // 0x23590
                    function_21a2d(a3, v19, v13);
                    *v17 = function_21a2d(v19, v11, *v17);
                } else {
                    // 0x2357c
                    *v17 = function_21a2d(a3, v11, v13);
                }
            }
            // 0x235b8
            function_729ce(&v8);
        }
    }
    // 0x235c0
    function_24dff(&v2, 6);
    int64_t result = 0; // 0x235db
    if (v3 != __readfsqword(40)) {
        // 0x235dd
        __stack_chk_fail();
        result = (int64_t)&g452;
    }
    // 0x235e2
    return result;
}

// Address range: 0x235f2 - 0x23607
int64_t function_235f2(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + (int64_t)&g9); // 0x235f2
    if (v1 == 0) {
        // 0x23604
        return 0;
    }
    // 0x235fe
    return *(int64_t *)v1;
}

// Address range: 0x23608 - 0x23620
int64_t function_23608(int64_t a1) {
    int64_t v1 = function_252e0(a1 + (int64_t)&g3); // 0x23613
    return v1 & -256 | (int64_t)((int32_t)v1 == 2);
}

// Address range: 0x23620 - 0x2367b
int64_t function_23620(int64_t a1) {
    int64_t v1 = function_24e1e(); // 0x23629
    function_251de(a1 + (int64_t)&g6, v1 + 0x6fc23ac00);
    function_251de(a1 + (int64_t)&g4, v1);
    *(int64_t *)(a1 + (int64_t)&g5) = 0;
    __asm_mfence(a1 + (int64_t)&g3, 1);
    return function_251d6();
}

// Address range: 0x23680 - 0x236a7
int64_t function_23680(int64_t a1) {
    // 0x23680
    __readfsqword(40);
    return function_e5cd3();
}

// Address range: 0x236e3 - 0x236e4
int64_t function_236e3(void) {
    // 0x236e3
    int64_t result; // 0x236e3
    return result;
}

// Address range: 0x236fd - 0x236ff
int64_t function_236fd(void) {
    // 0x236fd
    int64_t result; // 0x236fd
    return result;
}

// Address range: 0x23727 - 0x2372f
int64_t function_23727(int64_t a1) {
    // 0x23727
    return function_236e3();
}

// Address range: 0x2376a - 0x2376d
int64_t function_2376a(int64_t a1) {
    // 0x2376a
    int64_t result; // 0x2376a
    return result;
}

// Address range: 0x23792 - 0x23793
int64_t function_23792(int64_t a1) {
    // 0x23792
    int64_t result; // 0x23792
    return result;
}

// Address range: 0x237a1 - 0x237e1
int64_t function_237a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x237a1
    int64_t v1; // 0x237a1
    __asm_out_133((int16_t)a3, (int32_t)v1);
    char * v2 = (char *)(v1 + 4 * a4); // 0x237a4
    *v2 = *v2 - (char)a4;
    float80_t v3; // 0x237a1
    *(int32_t *)(v1 - 0x77247740) = (int32_t)v3;
    *(int32_t *)(v1 + 36) = 0;
    int64_t result = v1 & 0xffffffff; // 0x237d4
    if (*(int64_t *)(v1 + 80) != __readfsqword(40)) {
        // 0x237d6
        __stack_chk_fail();
        result = (int64_t)&g452;
    }
    // 0x237db
    return result;
}

// Address range: 0x237f0 - 0x23820
int64_t function_237f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x237f0
    __readfsqword(40);
    return function_f1975();
}

// Address range: 0x23821 - 0x23822
int64_t function_23821(void) {
    // 0x23821
    int64_t result; // 0x23821
    return result;
}

// Address range: 0x2382b - 0x2382f
int64_t function_2382b(int64_t a1) {
    // 0x2382b
    int64_t result; // 0x2382b
    return result;
}

// Address range: 0x23867 - 0x2394d
int64_t function_23867(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a4;
    int64_t v2; // 0x23867
    if (a4 == 0) {
        v2 = function_23821();
    }
    bool v3; // 0x23867
    if (!v3) {
        // 0x2386b
        *(char *)a1 = (char)v2 & 60;
        *(char *)v1 = *(char *)&v1;
        *(char *)(a3 - 0x246bffe9) = (char)__asm_int1();
        return function_ffffffffcf7e6974();
    }
    uint32_t v4 = __asm_in((int16_t)a3); // 0x238da
    int64_t result = ((int64_t)(v4 % 256) | (int64_t)(v4 & -256)) ^ 52; // 0x238db
    int32_t * v5 = (int32_t *)(a3 + 0x3e282761); // 0x238e2
    *v5 = *v5 / 64;
    int64_t v6; // 0x23867
    int32_t * v7 = (int32_t *)(v6 - 0x57ff635a); // 0x238e9
    uint32_t v8 = *v7; // 0x238e9
    *v7 = v8 / 2 | 0x80000000 * v8;
    int64_t v9 = v1 - 1; // 0x238f1
    v1 = v9;
    if (v9 != 0) {
        // 0x238b4
        return result;
    }
    int32_t * v10 = (int32_t *)(a3 + a1); // 0x238f3
    int32_t v11 = a1; // 0x238f3
    *v10 = *v10 ^ v11;
    char * v12 = (char *)result; // 0x238f8
    *v12 = *v12 + (char)a3;
    int32_t * v13 = (int32_t *)(a1 - 92); // 0x238fb
    *v13 = *v13 | v11;
    char * v14 = (char *)(a1 - 0x309a86ef); // 0x23902
    *v14 = *v14 + (char)result;
    __asm_iretd();
    char * v15 = (char *)(a3 + 82 + 8 * a2); // 0x2391a
    *v15 = *v15 + (char)(v1 / 256);
    char * v16 = (char *)(a2 + 0x6661e0ab); // 0x23930
    int32_t * v17 = (int32_t *)(a2 + 0x5017ee2b); // 0x23936
    while (true) {
        // 0x23930
        *v16 = *v16 + (char)v1;
        *v17 = *v17 & (int32_t)v1;
    }
}

// Address range: 0x23981 - 0x23984
int64_t function_23981(void) {
    // 0x23981
    int64_t result; // 0x23981
    return result;
}

// Address range: 0x23985 - 0x2398a
int64_t function_23985(void) {
    // 0x23985
    return function_12f6788d();
}

// Address range: 0x239a3 - 0x239b0
int64_t function_239a3(int64_t a1) {
    // 0x239a3
    int64_t v1; // 0x239a3
    return v1 & -256 | (int64_t)*(char *)0x2f3f2b246ed333b;
}

// Address range: 0x239eb - 0x239ee
int64_t function_239eb(int64_t a1) {
    // 0x239eb
    int64_t result; // 0x239eb
    return result;
}

// Address range: 0x23a27 - 0x23a33
int64_t function_23a27(int64_t a1) {
    // 0x23a27
    return function_ffffffffdf5a6943(a1);
}

// Address range: 0x23a33 - 0x23a3d
int64_t function_23a33(void) {
    // 0x23a33
    return function_ffffffffbbe05b21();
}

// Address range: 0x23a53 - 0x23a56
int64_t function_23a53(int64_t a1) {
    // 0x23a53
    int64_t v1; // 0x23a53
    return v1 & 0xffffffff;
}

// Address range: 0x23a89 - 0x23aa6
int64_t function_23a89(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23a89
    int64_t v1; // 0x23a89
    uint64_t result = v1;
    *(int32_t *)0x1714c06f60d13b44 = (int32_t)result;
    char * v2 = (char *)(8 * a3 + 0x61620013); // 0x23a92
    *v2 = *v2 + (char)(result / 256);
    int32_t * v3 = (int32_t *)(result + 0x1cfffb10); // 0x23a9e
    *v3 = *v3 | (int32_t)a3;
    return result;
}

// Address range: 0x23aa6 - 0x23aaf
int64_t function_23aa6(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 + 3); // 0x23aa6
    int64_t v2; // 0x23aa6
    *v1 = *v1 ^ (char)v2;
    return function_1df0f150();
}

// Address range: 0x23aaf - 0x23abd
int64_t function_23aaf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23aaf
    int64_t result; // 0x23aaf
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x23b13 - 0x23b14
int64_t function_23b13(int64_t a1) {
    // 0x23b13
    int64_t result; // 0x23b13
    return result;
}

// Address range: 0x23b63 - 0x23b6d
int64_t function_23b63(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23b63
    return __asm_in((int16_t)a3);
}

// Address range: 0x23b8a - 0x23b8d
int64_t function_23b8a(int64_t a1) {
    // 0x23b8a
    int64_t result; // 0x23b8a
    return result;
}

// Address range: 0x23b9f - 0x23ba2
int64_t function_23b9f(int64_t a1) {
    // 0x23b9f
    int64_t result; // 0x23b9f
    return result;
}

// Address range: 0x23bb7 - 0x23bbf
int64_t function_23bb7(int64_t a1) {
    // 0x23bb7
    int64_t result; // 0x23bb7
    *(int32_t *)a1 = (int32_t)(result & result);
    return result;
}

// Address range: 0x23bbf - 0x23bed
int64_t function_23bbf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23bbf
    bool v1; // 0x23bbf
    int64_t v2 = v1 ? -4 : 4; // 0x23bcc
    int64_t v3 = v2 + a1; // 0x23bcc
    int32_t * v4 = (int32_t *)(a3 + 0x5463704b); // 0x23bcd
    int32_t v5 = *v4; // 0x23bcd
    *v4 = 2 * v5 | (int32_t)(v5 < 0);
    int64_t v6 = (int64_t)(v5 < 0) & 0xffffffff; // 0x23bd3
    *(int64_t *)(v6 - 8) = v6;
    int32_t * v7 = (int32_t *)(v3 + 63); // 0x23bd8
    *v7 = *v7 >> 28;
    int64_t v8; // 0x23bbf
    return function_ffffffffe337f2b9(v3, v2 + a2, v8 & 0xffffffff, 0xc7311af0);
}

// Address range: 0x23c58 - 0x23c62
int64_t function_23c58(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23c58
    return 2 * a3 & 0xfffffffe;
}

// Address range: 0x23cdf - 0x23ce4
int64_t function_23cdf(int64_t a1) {
    // 0x23cdf
    int64_t v1; // 0x23cdf
    bool v2; // 0x23cdf
    return function_23d4e((v2 ? -1 : 1) + a1, v1, v1);
}

// Address range: 0x23cec - 0x23cef
int64_t function_23cec(void) {
    // 0x23cec
    int64_t result; // 0x23cec
    return result;
}

// Address range: 0x23d08 - 0x23d0d
int64_t function_23d08(void) {
    // 0x23d08
    return function_ffffffffbf2ede74();
}

// Address range: 0x23d4e - 0x23d50
int64_t function_23d4e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23d4e
    int64_t result; // 0x23d4e
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x23d51 - 0x23d7e
int64_t function_23d51(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23d51
    int64_t v1; // 0x23d51
    int32_t * v2 = (int32_t *)(v1 - 125); // 0x23d51
    *v2 = *v2 - 1;
    __asm_in_134((int16_t)a3);
    char * v3 = (char *)(v1 - 61); // 0x23d55
    bool v4; // 0x23d51
    *v3 = *v3 - (v4 ? 86 : 85);
    __readfsqword(40);
    return function_f2be7();
}

// Address range: 0x23d7e - 0x23da2
int64_t function_23d7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23d7e
    int64_t v1; // 0x23d7e
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    *(int32_t *)a3 = (int32_t)a4 & -0x10000 | 458;
    return result;
}

// Address range: 0x23dab - 0x23dae
int64_t function_23dab(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23dab
    int64_t result; // 0x23dab
    return result;
}

// Address range: 0x23de5 - 0x23e24
int64_t function_23de5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    int64_t result = 0; // 0x23e16
    int64_t v1; // 0x23de5
    if (v1 != __readfsqword(40)) {
        // 0x23e18
        __stack_chk_fail();
        result = (int64_t)&g452;
    }
    // 0x23e1d
    return result;
}

// Address range: 0x23e24 - 0x23e52
int64_t function_23e24(int64_t a1) {
    // 0x23e24
    __readfsqword(40);
    return function_f8eb8();
}

// Address range: 0x23efd - 0x23efe
int64_t function_23efd(void) {
    // 0x23efd
    int64_t result; // 0x23efd
    return result;
}

// Address range: 0x23f07 - 0x23f0a
int64_t function_23f07(int64_t a1) {
    // 0x23f07
    int64_t result; // 0x23f07
    return result;
}

// Address range: 0x23f21 - 0x23f22
int64_t function_23f21(void) {
    // 0x23f21
    int64_t result; // 0x23f21
    return result;
}

// Address range: 0x23f35 - 0x23f38
int64_t function_23f35(void) {
    // 0x23f35
    int64_t result; // 0x23f35
    return result;
}

// Address range: 0x23f64 - 0x23f6f
int64_t function_23f64(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23f64
    int64_t v1; // 0x23f64
    __asm_out_133((int16_t)a3, (int32_t)v1);
    int64_t result; // 0x23f64
    if ((int32_t)v1 == (int32_t)v1) {
        result = function_23efd();
    }
    // 0x23f6a
    return result;
}

// Address range: 0x23f6f - 0x23f91
int64_t function_23f6f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 - 0x65e50378); // 0x23f6f
    if (llvm_ctpop_i8((char)((int32_t)a4 - v1)) % 2 != 0) {
        function_23f21();
    }
    // 0x23f77
    *(char *)a1 = __asm_insb((int16_t)a3);
    __asm_iretd();
    return function_29a51ea9();
}

// Address range: 0x23fd4 - 0x23fe6
int64_t function_23fd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23fd4
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x23fd4
    int32_t * v1 = (int32_t *)(result + 0x39cf475d); // 0x23fd6
    bool v2; // 0x23fd4
    *v1 = (int32_t)v2 + (int32_t)result + *v1;
    char * v3 = (char *)(3 * a2); // 0x23fe1
    *v3 = *v3 + (char)(result / 256);
    return result;
}

// Address range: 0x2401c - 0x2401d
int64_t function_2401c(void) {
    // 0x2401c
    int64_t result; // 0x2401c
    return result;
}

// Address range: 0x2405a - 0x2405f
int64_t function_2405a(void) {
    // 0x2405a
    return function_ffffffffd6bafeaf();
}

// Address range: 0x24090 - 0x24094
int64_t function_24090(void) {
    // 0x24090
    int64_t v1; // 0x24090
    __asm_out_135(0, (int32_t)v1);
    return function_2401c();
}

// Address range: 0x24099 - 0x240f4
int64_t function_24099(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x24099
    __asm_in_136(-15);
    int64_t v1; // 0x24099
    int32_t * v2 = (int32_t *)(v1 - 27); // 0x240a5
    *v2 = *v2 + (int32_t)v1;
    *(int32_t *)0x90cbe18a = *(int32_t *)0x90cbe18a + 0x140a6800;
    int64_t result = 0; // 0x240de
    if (v1 != __readfsqword(40)) {
        // 0x240e0
        __stack_chk_fail();
        result = (int64_t)&g452;
    }
    // 0x240e5
    return result;
}

// Address range: 0x240f4 - 0x2411a
int64_t function_240f4(int64_t a1) {
    // 0x240f4
    __readfsqword(40);
    return function_f9d78();
}

// Address range: 0x24131 - 0x24132
int64_t function_24131(void) {
    // 0x24131
    int64_t result; // 0x24131
    return result;
}

// Address range: 0x24149 - 0x2414c
int64_t function_24149(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24149
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x24149
    return result;
}

// Address range: 0x24155 - 0x241df
int64_t function_24155(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x24155
    bool v1; // 0x24155
    if (v1 || false) {
        char * v2 = (char *)(a4 + 0x48142474); // 0x241b8
        *v2 = (char)v1 - (char)a4 + *v2;
        __readfsqword(40);
        return function_fb533();
    }
    // 0x24157
    int64_t result; // 0x24155
    return result;
}

// Address range: 0x241e5 - 0x241e6
int64_t function_241e5(void) {
    // 0x241e5
    int64_t result; // 0x241e5
    return result;
}

// Address range: 0x2421c - 0x2426b
int64_t function_2421c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2421c
    int64_t v1; // 0x2421c
    bool v2; // 0x2421c
    if (!v2) {
        v1 = function_241e5();
    }
    // 0x2421e
    __asm_out((int16_t)a3, (char)v1);
    int64_t v3 = a3 & a2;
    int64_t v4 = v1; // 0x24226
    int64_t v5 = a1; // 0x24226
    if ((int32_t)v3 == 0) {
        // 0x24228
        *(char *)0x3954e898 = *(char *)0x3954e898 + (char)(v1 / 256);
        if (a4 != 0) {
            // 0x24236
            __asm_fbld(*(float80_t *)(a4 + 0x266818fa));
            return v1 | 177;
        }
        // 0x24250
        int64_t v6; // 0x2421c
        unsigned char v7 = *(char *)((v1 & 4 | 251) + v6); // 0x24252
        v4 = v1 & -256 | (int64_t)v7;
        v5 = (int64_t)((int32_t)a1 - *(int32_t *)(a4 + 18));
    }
    int64_t v8 = v5 + (v2 ? -1 : 1); // 0x2425b
    int64_t result = __asm_hlt(v8, a2, v3 & 0xffffffff); // 0x2425c
    __asm_out_137(-34, (char)result);
    *(int32_t *)v8 = __asm_insd(0x5e3e);
    *(int64_t *)((v4 & 0xffffffff) - 8) = 0xa0e95e3e;
    return result;
}

// Address range: 0x2426c - 0x242b0
int64_t function_2426c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2426c
    int64_t v1; // 0x2426c
    int64_t v2 = v1 & -256 | (int64_t)*(char *)0x7f0078f266e566e7; // 0x2426c
    float80_t v3; // 0x2426c
    *(int32_t *)(v2 - 0x772d772e) = (int32_t)v3;
    unsigned char v4 = (char)a4 % 32; // 0x2427e
    if (v4 != 0) {
        char * v5 = (char *)(v2 - 0x77367740); // 0x2427e
        unsigned char v6 = *v5; // 0x2427e
        *v5 = v6 >> v4 | v6 << 8 - v4;
    }
    *(int32_t *)(v1 + 52) = 0;
    int64_t result = 0; // 0x242a4
    if (*(int64_t *)(v1 + 80) != __readfsqword(40)) {
        // 0x242a6
        __stack_chk_fail();
        result = (int64_t)&g452;
    }
    // 0x242ab
    return result;
}

// Address range: 0x242b0 - 0x242e1
int64_t function_242b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x242b0
    __readfsqword(40);
    return function_fd3e0();
}

// Address range: 0x242ed - 0x242ee
int64_t function_242ed(void) {
    // 0x242ed
    int64_t result; // 0x242ed
    return result;
}

// Address range: 0x242f4 - 0x24318
int64_t function_242f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x242f4
    int64_t v1; // 0x242f4
    __asm_out_133((int16_t)a3, (int32_t)v1);
    int64_t v2; // 0x242f4
    bool v3; // 0x242f4
    if (!v3 && !v3) {
        v2 = function_242ed();
    }
    char * v4 = (char *)(a3 - 0x1726d642); // 0x242fb
    char v5 = *v4 + (char)(v2 / 256); // 0x242fb
    *v4 = v5;
    return a4 == 1 | v5 == 0 ? v2 : v1;
}

// Address range: 0x24336 - 0x24339
int64_t function_24336(void) {
    // 0x24336
    int64_t result; // 0x24336
    return result;
}

// Address range: 0x24357 - 0x243c5
int64_t function_24357(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x24357
    int128_t v1; // 0x24357
    int128_t v2 = v1;
    uint32_t v3 = *(int32_t *)0x2e42021a028ed6; // 0x24357
    int64_t v4 = v3; // 0x24357
    char * v5 = (char *)(v4 - 0x1ef2ef29); // 0x24366
    *v5 = *v5 + (char)(v3 / 256);
    char * v6 = (char *)v4; // 0x2436c
    *v6 = *v6 + (char)v3;
    __asm_addps(v2, v2);
    int64_t result = 0; // 0x243b9
    int64_t v7; // 0x24357
    if (v7 != __readfsqword(40)) {
        // 0x243bb
        __stack_chk_fail();
        result = (int64_t)&g452;
    }
    // 0x243c0
    return result;
}

// Address range: 0x243c6 - 0x24460
int64_t function_243c6(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x243d4
    int64_t v2; // bp-56, 0x243c6
    function_24e7c(&v2);
    int64_t v3 = 5; // bp-72, 0x243ec
    int64_t v4; // 0x243c6
    function_2588a(&v2, v4, &v3, &v2);
    function_62ad8(a1 + (int64_t)&g16, function_24ef4(&v2), 1);
    function_254fe(&v2);
    int64_t result = 0; // 0x24452
    if (v1 != __readfsqword(40)) {
        // 0x24454
        __stack_chk_fail();
        result = (int64_t)&g452;
    }
    // 0x24459
    return result;
}

// Address range: 0x24460 - 0x2465f
int64_t function_24460(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x2448a
    int64_t v2; // bp-112, 0x24460
    function_729b6(&v2, a1 + (int64_t)&g7, a3);
    int64_t v3 = (int64_t)&g428; // bp-104, 0x244b0
    int64_t v4; // 0x2456b
    uint64_t v5; // 0x2457d
    int64_t v6; // 0x244bb
    int64_t * v7; // 0x244bb
    if (a2 == 0) {
        goto lab_0x2462b;
    } else {
        // 0x244bb
        v6 = a1 + (int64_t)&g8;
        v7 = (int64_t *)v6;
        if (*(int64_t *)(*v7 - 24) == 0) {
            goto lab_0x2462b;
        } else {
            int64_t v8 = *(int64_t *)(a1 + (int64_t)&g9); // 0x244cd
            int64_t v9 = 0; // bp-88, 0x244ec
            int64_t v10; // bp-96, 0x24460
            function_5a470(&v10, v8 + (int64_t)&g17, "game_error.error_corrupted_network", "Corrupted packet flow", &v9);
            function_256ba(&v3, &v10);
            function_2508e(&v10);
            if (v9 != 0) {
                int64_t v11 = v9 + 8; // 0x2453b
                function_2508e((int64_t *)v9);
                int64_t v12 = v11; // 0x24536
                while (v11 != 0) {
                    // 0x24538
                    v11 = v12 + 8;
                    function_2508e((int64_t *)v12);
                    v12 = v11;
                }
                // 0x24546
                if (v9 != 0) {
                    // 0x24550
                    function_4eeb50(v9);
                }
            }
            // 0x24555
            function_2537c(&v3, " (");
            v4 = *(int64_t *)(*v7 - 24);
            if (v4 == 0) {
                goto lab_0x245c9;
            } else {
                // 0x24574
                v5 = g426 + v4;
                if (v5 > g427) {
                    // 0x24586
                    function_259ce(&v3, v5);
                    goto lab_0x245a0;
                } else {
                    // 0x24593
                    if ((char)function_25622(v3 - 24) != 0) {
                        // 0x24586
                        function_259ce(&v3, v5);
                        goto lab_0x245a0;
                    } else {
                        goto lab_0x245a0;
                    }
                }
            }
        }
    }
  lab_0x2462b:
    // 0x2462b
    function_2508e(&v3);
    function_729ce(&v2);
    int64_t result = 0; // 0x24649
    if (v1 != __readfsqword(40)) {
        // 0x2464b
        __stack_chk_fail();
        result = (int64_t)&g452;
    }
    // 0x24650
    return result;
  lab_0x245c9:
    // 0x245c9
    if ((char)function_2537c(&v3, ")") != 0) {
        int64_t v13 = *v7; // 0x245d8
        int64_t v14 = *(int64_t *)(v13 - 24); // 0x24603
        if (v14 != 0) {
            // 0x2460c
            function_255da(v6, v13, v3, a3);
            function_24e0d(*v7, v14);
        }
        // 0x24623
        function_251e8(v6);
    }
    goto lab_0x2462b;
  lab_0x245a0:
    // 0x245a0
    function_25a28(&g428, *v7, v4);
    function_2562c(&g426, v5);
    goto lab_0x245c9;
}

// Address range: 0x246af - 0x246b8
int64_t function_246af(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x246af
    int64_t result; // 0x246af
    char * v1 = (char *)(2 * result); // 0x246af
    *v1 = *v1 & (char)a3;
    char * v2 = (char *)(result - 119); // 0x246b2
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x24793 - 0x24799
int64_t function_24793(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24793
    int64_t v1; // 0x24793
    *(char *)a1 = (char)(v1 ^ a4);
    return v1 & 0xffffffff;
}

// Address range: 0x5cd02 - 0x5dc67
int64_t function_5cd02(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = __readfsqword(40); // 0x5cd0e
    int32_t v3 = *(int32_t *)&v1; // 0x5cd21
    int64_t v4; // bp-74, 0x5cd02
    int64_t v5 = (int64_t)&v4; // 0x5cd23
    int64_t v6 = 0; // 0x5cd2e
    int64_t v7; // 0x5cd02
    char v8; // 0x5cd02
    char v9; // 0x5cd02
    int64_t v10; // 0x5cd02
    int64_t v11; // 0x5cd02
    int64_t v12; // 0x5cd02
    int64_t v13; // 0x5cd02
    int64_t v14; // 0x5cd02
    int64_t v15; // 0x5cd02
    if (v3 == 10) {
        *(char *)(v6 + v5) = 0;
        v6++;
        int32_t v16 = (int32_t)"_create" - 0x1fce8af7 >> 30 | 4 * ((int32_t)"_create" - 0x1fce8af7); // 0x5d44d
        int64_t v17 = 0; // 0x5d44d
        while (v6 != 23) {
            // 0x5d442
            *(char *)(v6 + v5) = 0;
            v6++;
            v16 = (int32_t)"_create" - 0x1fce8af7 >> 30 | 4 * ((int32_t)"_create" - 0x1fce8af7);
            v17 = 0;
        }
        int32_t v18 = *(int32_t *)(v17 + (int64_t)&g82); // 0x5d492
        *(int32_t *)(v17 + v5) = v18 ^ v16;
        int64_t v19 = v17 + 4; // 0x5d49d
        uint32_t v20 = 0x41c64e6d * v16 + (int32_t)"_create"; // 0x5d473
        int32_t v21 = v20 / 0x40000000 | 4 * v20; // 0x5d479
        v16 = v21;
        v17 = v19;
        while (v19 != 20) {
            // 0x5d482
            v18 = *(int32_t *)(v17 + (int64_t)&g82);
            *(int32_t *)(v17 + v5) = v18 ^ v16;
            v19 = v17 + 4;
            v20 = 0x41c64e6d * v16 + (int32_t)"_create";
            v21 = v20 / 0x40000000 | 4 * v20;
            v16 = v21;
            v17 = v19;
        }
        int64_t v22 = 20; // 0x5d4ab
        int64_t v23 = v21; // 0x5d4ab
        char v24 = *(char *)(v22 + (int64_t)&g82); // 0x5d4c3
        int64_t v25 = v23 / 256; // 0x5d4c9
        *(char *)(v22 + v5) = v24 ^ (char)v23;
        v22++;
        v23 = v25;
        while (v22 != 23) {
            // 0x5d4b3
            v24 = *(char *)(v22 + (int64_t)&g82);
            v25 = v23 / 256;
            *(char *)(v22 + v5) = v24 ^ (char)v23;
            v22++;
            v23 = v25;
        }
        // 0x5d4d9
        function_5cab4(a1, &v4, v25, v5);
        v1 = 23;
        v7 = 23;
        goto lab_0x5dc3a;
    } else {
        if (v3 > 10) {
            int64_t v26 = 0; // 0x5cdb4
            if (v3 == 16) {
                *(char *)(v26 + v5) = 0;
                int64_t v27 = v26 + 1; // 0x5d7c6
                v26 = v27;
                int32_t v28 = -0x6b2b0fbd; // 0x5d7cd
                int64_t v29 = 0; // 0x5d7cd
                while (v27 != 30) {
                    // 0x5d7c2
                    *(char *)(v26 + v5) = 0;
                    v27 = v26 + 1;
                    v26 = v27;
                    v28 = -0x6b2b0fbd;
                    v29 = 0;
                }
                v1 = v5;
                int32_t v30 = *(int32_t *)(v29 + (int64_t)&g76); // 0x5d810
                *(int32_t *)(v29 + v5) = v30 ^ v28;
                int64_t v31 = v29 + 4; // 0x5d81b
                v28 = llvm_bswap_i32(0xc203 * v28 + 0x3f2a5);
                v29 = v31;
                while (v31 != 28) {
                    // 0x5d800
                    v1 = v5;
                    v30 = *(int32_t *)(v29 + (int64_t)&g76);
                    *(int32_t *)(v29 + v5) = v30 ^ v28;
                    v31 = v29 + 4;
                    v28 = llvm_bswap_i32(0xc203 * v28 + 0x3f2a5);
                    v29 = v31;
                }
                // 0x5d821
                *(char *)(v5 + 28) = 110;
                v8 = 72;
                v12 = (int64_t)&g76;
                goto lab_0x5db67;
            } else {
                if (v3 > 16) {
                    int64_t v32 = 0; // 0x5cdfc
                    if (v3 == 19) {
                        *(char *)(v32 + v5) = 0;
                        int64_t v33 = v32 + 1; // 0x5d99a
                        v32 = v33;
                        while (v33 != 27) {
                            // 0x5d996
                            *(char *)(v32 + v5) = 0;
                            v33 = v32 + 1;
                            v32 = v33;
                        }
                        // 0x5d9a3
                        v1 = (int64_t)&g72;
                        int64_t v34 = 0; // 0x5d9fe
                        int64_t v35 = 0x8aa02b67;
                        int32_t v36 = *(int32_t *)(v34 + (int64_t)&g72); // 0x5d9f3
                        *(int32_t *)(v34 + v5) = v36 ^ -0x755fd499;
                        v34 += 4;
                        uint32_t v37 = (int32_t)(0x2000 * v35 ^ v35); // 0x5d9cb
                        int32_t v38 = v37 / 128 ^ v37; // 0x5d9d0
                        int32_t v39 = -((0x20000 * v38 ^ v38)); // 0x5d9db
                        while (v34 != 24) {
                            // 0x5d9e3
                            v35 = v39;
                            v36 = *(int32_t *)(v34 + (int64_t)&g72);
                            *(int32_t *)(v34 + v5) = v36 ^ v39;
                            v34 += 4;
                            v37 = (int32_t)(0x2000 * v35 ^ v35);
                            v38 = v37 / 128 ^ v37;
                            v39 = -((0x20000 * v38 ^ v38));
                        }
                        int64_t v40 = 24; // 0x5da0c
                        int64_t v41 = 0x9ec9d10a; // 0x5da0c
                        char v42 = *(char *)(v40 + v1); // 0x5da24
                        *(char *)(v40 + v5) = v42 ^ (char)v41;
                        v40++;
                        v41 /= 256;
                        while (v40 != 27) {
                            // 0x5da14
                            v42 = *(char *)(v40 + v1);
                            *(char *)(v40 + v5) = v42 ^ (char)v41;
                            v40++;
                            v41 /= 256;
                        }
                        // 0x5da3a
                        function_5cab4(a1, &v4, v5, 158);
                        v1 = 27;
                        v7 = 27;
                        goto lab_0x5dc3a;
                    } else {
                        if (v3 > 19) {
                            int64_t v43 = 0; // 0x5cd02
                            int64_t v44 = 0; // 0x5cd02
                            switch (v3) {
                                case 20: {
                                    *(char *)(v43 + v5) = 0;
                                    int64_t v45 = v43 + 1; // 0x5da55
                                    v43 = v45;
                                    while (v45 != 36) {
                                        // 0x5da51
                                        *(char *)(v43 + v5) = 0;
                                        v45 = v43 + 1;
                                        v43 = v45;
                                    }
                                    int64_t v46 = 0;
                                    int32_t v47 = *(int32_t *)(v46 + (int64_t)&g71); // 0x5da92
                                    uint32_t v48 = -0x2b9bef1a; // 0x5da95
                                    int32_t v49 = v48 / 16 | 0x10000000 * v48; // 0x5da9a
                                    *(int32_t *)(v46 + v5) = v49 ^ v47;
                                    int64_t v50 = v46 + 4; // 0x5daaa
                                    while (v46 != 32) {
                                        // 0x5da7c
                                        v46 = v50;
                                        v47 = *(int32_t *)(v46 + (int64_t)&g71);
                                        v48 = 0x6d0d * v49 + 0xc6db5;
                                        v49 = v48 / 16 | 0x10000000 * v48;
                                        *(int32_t *)(v46 + v5) = v49 ^ v47;
                                        v50 = v46 + 4;
                                    }
                                    goto lab_0x5daac;
                                }
                                case 21: {
                                    *(char *)(v44 + v5) = 0;
                                    int64_t v51 = v44 + 1; // 0x5dac5
                                    v44 = v51;
                                    while (v51 != 30) {
                                        // 0x5dac1
                                        *(char *)(v44 + v5) = 0;
                                        v51 = v44 + 1;
                                        v44 = v51;
                                    }
                                    // 0x5dace
                                    v1 = (int64_t)&g70;
                                    int64_t v52 = 0; // 0x5db27
                                    int64_t v53 = 0x106e7746;
                                    int32_t v54 = *(int32_t *)(v52 + (int64_t)&g70); // 0x5db1c
                                    *(int32_t *)(v52 + v5) = v54 ^ 0x106e7746;
                                    v52 += 4;
                                    uint32_t v55 = (int32_t)(0x2000 * v53 ^ v53); // 0x5daf6
                                    int32_t v56 = v55 / 128 ^ v55; // 0x5dafb
                                    int32_t v57 = 0x20000 * v56 ^ -1 - v56; // 0x5db08
                                    while (v52 != 28) {
                                        // 0x5db0c
                                        v53 = v57;
                                        v54 = *(int32_t *)(v52 + (int64_t)&g70);
                                        *(int32_t *)(v52 + v5) = v54 ^ v57;
                                        v52 += 4;
                                        v55 = (int32_t)(0x2000 * v53 ^ v53);
                                        v56 = v55 / 128 ^ v55;
                                        v57 = 0x20000 * v56 ^ -1 - v56;
                                    }
                                    // 0x5db2d
                                    *(char *)(v5 + 28) = 115;
                                    v8 = 0;
                                    v12 = v1;
                                    goto lab_0x5db67;
                                }
                                default: {
                                    goto lab_0x5db85;
                                }
                            }
                        } else {
                            int64_t v58 = 0; // 0x5cd02
                            int64_t v59 = 0; // 0x5cd02
                            switch (v3) {
                                case 17: {
                                    *(char *)(v58 + v5) = 0;
                                    int64_t v60 = v58 + 1; // 0x5d866
                                    v58 = v60;
                                    while (v60 != 32) {
                                        // 0x5d862
                                        *(char *)(v58 + v5) = 0;
                                        v60 = v58 + 1;
                                        v58 = v60;
                                    }
                                    int64_t v61 = 0;
                                    int64_t v62 = 0xe2ac2321;
                                    uint32_t v63 = (int32_t)(0x2000 * v62 ^ v62); // 0x5d89c
                                    int32_t v64 = *(int32_t *)(v61 + (int64_t)&g75); // 0x5d89e
                                    int32_t v65 = v63 / 128 ^ v63; // 0x5d8a4
                                    uint32_t v66 = 0x20000 * v65 ^ -1 - v65; // 0x5d8ad
                                    *(int32_t *)(v61 + v5) = v66 ^ v64;
                                    int64_t v67 = v61 + 4; // 0x5d8c6
                                    v11 = 0x3d622442;
                                    while (v61 != 28) {
                                        // 0x5d88d
                                        v61 = v67;
                                        v62 = v66;
                                        v63 = (int32_t)(0x2000 * v62 ^ v62);
                                        v64 = *(int32_t *)(v61 + (int64_t)&g75);
                                        v65 = v63 / 128 ^ v63;
                                        v66 = 0x20000 * v65 ^ -1 - v65;
                                        *(int32_t *)(v61 + v5) = v66 ^ v64;
                                        v67 = v61 + 4;
                                        v11 = 0x3d622442;
                                    }
                                    goto lab_0x5d8c8;
                                }
                                case 18: {
                                    *(char *)(v59 + v5) = 0;
                                    int64_t v68 = v59 + 1; // 0x5d8e1
                                    v59 = v68;
                                    int64_t v69 = -0x6367225cf99d5f93; // 0x5d8e8
                                    int64_t v70 = 0; // 0x5d8e8
                                    while (v68 != 22) {
                                        // 0x5d8dd
                                        *(char *)(v59 + v5) = 0;
                                        v68 = v59 + 1;
                                        v59 = v68;
                                        v69 = -0x6367225cf99d5f93;
                                        v70 = 0;
                                    }
                                    v1 = v5;
                                    int32_t v71 = *(int32_t *)(v70 + (int64_t)&g73); // 0x5d92b
                                    *(int32_t *)(v70 + v5) = v71 ^ (int32_t)v69;
                                    int64_t v72 = v70 + 4; // 0x5d936
                                    v69 = 0xffff6367 * (v69 & 0xffffffff) + 0xff66c292;
                                    v70 = v72;
                                    while (v72 != 20) {
                                        // 0x5d91b
                                        v1 = v5;
                                        v71 = *(int32_t *)(v70 + (int64_t)&g73);
                                        *(int32_t *)(v70 + v5) = v71 ^ (int32_t)v69;
                                        v72 = v70 + 4;
                                        v69 = 0xffff6367 * (v69 & 0xffffffff) + 0xff66c292;
                                        v70 = v72;
                                    }
                                    // 0x5d93c
                                    *(char *)(v5 + 20) = *(char *)&g74 ^ 109;
                                    *(char *)(v5 + 21) = 0;
                                    function_5cab4(a1, &v4, v5, (int64_t)&g73);
                                    v1 = 22;
                                    v7 = 22;
                                    goto lab_0x5dc3a;
                                }
                                default: {
                                    goto lab_0x5db85;
                                }
                            }
                        }
                    }
                } else {
                    int64_t v73 = 0; // 0x5cdbf
                    if (v3 == 13) {
                        *(char *)(v73 + v5) = 0;
                        int64_t v74 = v73 + 1; // 0x5d64c
                        v73 = v74;
                        while (v74 != 32) {
                            // 0x5d648
                            *(char *)(v73 + v5) = 0;
                            v74 = v73 + 1;
                            v73 = v74;
                        }
                        int64_t v75 = 0;
                        int64_t v76 = 0x4f9b3d31;
                        uint32_t v77 = (int32_t)(0x2000 * v76 ^ v76); // 0x5d682
                        int32_t v78 = *(int32_t *)(v75 + (int64_t)&g79); // 0x5d684
                        int32_t v79 = v77 / 0x20000 ^ v77; // 0x5d68a
                        uint32_t v80 = (32 * v79 ^ v79) / 16 | 0x10000000 * v79; // 0x5d693
                        *(int32_t *)(v75 + v5) = v80 ^ v78;
                        int64_t v81 = v75 + 4; // 0x5d6ad
                        v11 = 0x22989874;
                        while (v75 != 28) {
                            // 0x5d673
                            v75 = v81;
                            v76 = v80;
                            v77 = (int32_t)(0x2000 * v76 ^ v76);
                            v78 = *(int32_t *)(v75 + (int64_t)&g79);
                            v79 = v77 / 0x20000 ^ v77;
                            v80 = (32 * v79 ^ v79) / 16 | 0x10000000 * v79;
                            *(int32_t *)(v75 + v5) = v80 ^ v78;
                            v81 = v75 + 4;
                            v11 = 0x22989874;
                        }
                        goto lab_0x5d8c8;
                    } else {
                        if (v3 > 13) {
                            int64_t v82 = 0; // 0x5cd02
                            int64_t v83 = 0; // 0x5cd02
                            switch (v3) {
                                case 14: {
                                    *(char *)(v82 + v5) = 0;
                                    int64_t v84 = v82 + 1; // 0x5d6ba
                                    v82 = v84;
                                    while (v84 != 36) {
                                        // 0x5d6b6
                                        *(char *)(v82 + v5) = 0;
                                        v84 = v82 + 1;
                                        v82 = v84;
                                    }
                                    int64_t v85 = 0;
                                    int32_t v86 = *(int32_t *)(v85 + (int64_t)&g78); // 0x5d6f7
                                    int64_t v87 = 0x582e834f4a8188ed; // 0x5d6ff
                                    *(int32_t *)(v85 + v5) = v86 ^ (int32_t)v87;
                                    int64_t v88 = v87 & 0xffffffff; // 0x5d70e
                                    int64_t v89 = v85 + 4; // 0x5d70e
                                    while (v85 != 32) {
                                        // 0x5d6e1
                                        v85 = v89;
                                        v86 = *(int32_t *)(v85 + (int64_t)&g78);
                                        v87 = 0xbe39b193 * v88 + 0xffffcfc6;
                                        *(int32_t *)(v85 + v5) = v86 ^ (int32_t)v87;
                                        v88 = v87 & 0xffffffff;
                                        v89 = v85 + 4;
                                    }
                                    goto lab_0x5daac;
                                }
                                case 15: {
                                    *(char *)(v83 + v5) = 0;
                                    int64_t v90 = v83 + 1; // 0x5d719
                                    v83 = v90;
                                    while (v90 != 30) {
                                        // 0x5d715
                                        *(char *)(v83 + v5) = 0;
                                        v90 = v83 + 1;
                                        v83 = v90;
                                    }
                                    // 0x5d722
                                    v1 = (int64_t)&g77;
                                    int64_t v91 = 0; // 0x5d77b
                                    int64_t v92 = 0xee77680c;
                                    int32_t v93 = *(int32_t *)(v91 + (int64_t)&g77); // 0x5d770
                                    *(int32_t *)(v91 + v5) = v93 ^ -0x118897f4;
                                    v91 += 4;
                                    uint32_t v94 = (int32_t)(0x2000 * v92 ^ v92); // 0x5d74a
                                    int32_t v95 = v94 / 0x20000 ^ v94; // 0x5d74f
                                    int32_t v96 = llvm_bswap_i32(32 * v95 ^ v95); // 0x5d75c
                                    while (v91 != 28) {
                                        // 0x5d760
                                        v92 = v96;
                                        v93 = *(int32_t *)(v91 + (int64_t)&g77);
                                        *(int32_t *)(v91 + v5) = v93 ^ v96;
                                        v91 += 4;
                                        v94 = (int32_t)(0x2000 * v92 ^ v92);
                                        v95 = v94 / 0x20000 ^ v94;
                                        v96 = llvm_bswap_i32(32 * v95 ^ v95);
                                    }
                                    // 0x5d781
                                    *(char *)(v5 + 28) = 101;
                                    v8 = -105;
                                    v12 = v1;
                                    goto lab_0x5db67;
                                }
                                default: {
                                    goto lab_0x5db85;
                                }
                            }
                        } else {
                            int64_t v97 = 0; // 0x5cd02
                            int64_t v98 = 0; // 0x5cd02
                            switch (v3) {
                                case 11: {
                                    *(char *)(v97 + v5) = 0;
                                    int64_t v99 = v97 + 1; // 0x5d4f4
                                    v97 = v99;
                                    while (v99 != 31) {
                                        // 0x5d4f0
                                        *(char *)(v97 + v5) = 0;
                                        v99 = v97 + 1;
                                        v97 = v99;
                                    }
                                    // 0x5d4fd
                                    v1 = (int64_t)&g81;
                                    int64_t v100 = 0; // 0x5d559
                                    int64_t v101 = 0xf020d2b7;
                                    int32_t v102 = *(int32_t *)(v100 + (int64_t)&g81); // 0x5d54e
                                    *(int32_t *)(v100 + v5) = v102 ^ -0xfdf2d49;
                                    v100 += 4;
                                    uint32_t v103 = (int32_t)(0x2000 * v101 ^ v101); // 0x5d525
                                    int32_t v104 = v103 / 0x20000 ^ v103; // 0x5d52a
                                    int32_t v105 = (32 * v104 ^ v104) / 8 | 0x20000000 * v104; // 0x5d535
                                    while (v100 != 28) {
                                        // 0x5d53e
                                        v101 = v105;
                                        v102 = *(int32_t *)(v100 + (int64_t)&g81);
                                        *(int32_t *)(v100 + v5) = v102 ^ v105;
                                        v100 += 4;
                                        v103 = (int32_t)(0x2000 * v101 ^ v101);
                                        v104 = v103 / 0x20000 ^ v103;
                                        v105 = (32 * v104 ^ v104) / 8 | 0x20000000 * v104;
                                    }
                                    int64_t v106 = 28; // 0x5d567
                                    int64_t v107 = 0xd46a7133; // 0x5d567
                                    char v108 = *(char *)(v106 + v1); // 0x5d57f
                                    *(char *)(v106 + v5) = v108 ^ (char)v107;
                                    v106++;
                                    v107 /= 256;
                                    v10 = 212;
                                    v15 = v5;
                                    while (v106 != 31) {
                                        // 0x5d56f
                                        v108 = *(char *)(v106 + v1);
                                        *(char *)(v106 + v5) = v108 ^ (char)v107;
                                        v106++;
                                        v107 /= 256;
                                        v10 = 212;
                                        v15 = v5;
                                    }
                                    goto lab_0x5d595;
                                }
                                case 12: {
                                    *(char *)(v98 + v5) = 0;
                                    int64_t v109 = v98 + 1; // 0x5d5ae
                                    v98 = v109;
                                    int64_t v110 = 0; // 0x5d5b5
                                    while (v109 != 30) {
                                        // 0x5d5aa
                                        *(char *)(v98 + v5) = 0;
                                        v109 = v98 + 1;
                                        v98 = v109;
                                        v110 = 0;
                                    }
                                    v1 = v5;
                                    int32_t v111 = *(int32_t *)(v110 + (int64_t)&g80); // 0x5d5f6
                                    *(int32_t *)(v110 + v5) = v111 ^ (int32_t)-0x7a5c39f08d6c15aa;
                                    int64_t v112 = v110 + 4; // 0x5d601
                                    int64_t v113 = 0x55239a56111ad529; // 0x5d5db
                                    int64_t v114 = v113 & 0xffffffff; // 0x5d5e4
                                    v110 = v112;
                                    while (v112 != 28) {
                                        // 0x5d5e6
                                        v1 = v5;
                                        v111 = *(int32_t *)(v110 + (int64_t)&g80);
                                        *(int32_t *)(v110 + v5) = v111 ^ (int32_t)v113;
                                        v112 = v110 + 4;
                                        v113 = 0xbe39b193 * v114 + 0xffffcfc7;
                                        v114 = v113 & 0xffffffff;
                                        v110 = v112;
                                    }
                                    // 0x5d607
                                    *(char *)(v5 + 28) = 114;
                                    v8 = -25;
                                    v12 = (int64_t)&g80;
                                    goto lab_0x5db67;
                                }
                                default: {
                                    goto lab_0x5db85;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            int64_t v115 = 0; // 0x5cd39
            if (v3 == 4) {
                *(char *)(v115 + v5) = 0;
                int64_t v116 = v115 + 1; // 0x5d048
                v115 = v116;
                int32_t v117 = -0x78a22fb2; // 0x5d04f
                int64_t v118 = 0; // 0x5d04f
                while (v116 != 37) {
                    // 0x5d044
                    *(char *)(v115 + v5) = 0;
                    v116 = v115 + 1;
                    v115 = v116;
                    v117 = -0x78a22fb2;
                    v118 = 0;
                }
                int32_t v119 = *(int32_t *)(v118 + (int64_t)&g90); // 0x5d08c
                *(int32_t *)(v118 + v5) = v119 ^ v117;
                int64_t v120 = v118 + 4; // 0x5d097
                uint32_t v121 = 0x41c64e6d * v117 + 0x3039; // 0x5d072
                v117 = v121 / 2 | 0x80000000 * v121;
                v118 = v120;
                while (v120 != 36) {
                    // 0x5d07f
                    v119 = *(int32_t *)(v118 + (int64_t)&g90);
                    *(int32_t *)(v118 + v5) = v119 ^ v117;
                    v120 = v118 + 4;
                    v121 = 0x41c64e6d * v117 + 0x3039;
                    v117 = v121 / 2 | 0x80000000 * v121;
                    v118 = v120;
                }
                // 0x5d09d
                *(char *)(v5 + 36) = 0;
                function_5cab4(a1, &v4, v5, (int64_t)&g90);
                v1 = 37;
                v7 = 37;
                goto lab_0x5dc3a;
            } else {
                if (v3 > 4) {
                    int64_t v122 = 0; // 0x5cd77
                    if (v3 == 7) {
                        *(char *)(v122 + v5) = 0;
                        int64_t v123 = v122 + 1; // 0x5d225
                        v122 = v123;
                        while (v123 != 42) {
                            // 0x5d221
                            *(char *)(v122 + v5) = 0;
                            v123 = v122 + 1;
                            v122 = v123;
                        }
                        // 0x5d22e
                        v1 = (int64_t)&g86;
                        int64_t v124 = 0; // 0x5d288
                        int32_t v125 = 0x1d0406a6;
                        int32_t v126 = *(int32_t *)(v124 + (int64_t)&g86); // 0x5d27d
                        *(int32_t *)(v124 + v5) = v126 ^ v125;
                        v124 += 4;
                        uint32_t v127 = 0x2000 * v125 ^ v125; // 0x5d254
                        int32_t v128 = v127 / 0x20000 ^ v127; // 0x5d25b
                        uint32_t v129 = 32 * v128 ^ v128; // 0x5d262
                        while (v124 != 40) {
                            // 0x5d26d
                            v125 = v129 / 0x20000000 | 8 * v129;
                            v126 = *(int32_t *)(v124 + (int64_t)&g86);
                            *(int32_t *)(v124 + v5) = v126 ^ v125;
                            v124 += 4;
                            v127 = 0x2000 * v125 ^ v125;
                            v128 = v127 / 0x20000 ^ v127;
                            v129 = 32 * v128 ^ v128;
                        }
                        // 0x5d28e
                        *(char *)(v5 + 40) = *(char *)&g87 ^ -120;
                        *(char *)(v5 + 41) = 0;
                        function_5cab4(a1, &v4, v5, v1);
                        v1 = 42;
                        v7 = 42;
                        goto lab_0x5dc3a;
                    } else {
                        if (v3 > 7) {
                            int64_t v130 = 0; // 0x5cd02
                            int64_t v131 = 0; // 0x5cd02
                            switch (v3) {
                                case 8: {
                                    *(char *)(v130 + v5) = 0;
                                    int64_t v132 = v130 + 1; // 0x5d2ec
                                    v130 = v132;
                                    int32_t v133 = 0xf0c4bb4; // 0x5d2f3
                                    int64_t v134 = 0; // 0x5d2f3
                                    while (v132 != 30) {
                                        // 0x5d2e8
                                        *(char *)(v130 + v5) = 0;
                                        v132 = v130 + 1;
                                        v130 = v132;
                                        v133 = 0xf0c4bb4;
                                        v134 = 0;
                                    }
                                    int32_t v135 = *(int32_t *)(v134 + (int64_t)&g84); // 0x5d336
                                    *(int32_t *)(v134 + v5) = v135 ^ v133;
                                    int64_t v136 = v134 + 4; // 0x5d341
                                    int32_t v137 = 0x41c64e6d * v133 + 0x3039; // 0x5d319
                                    v133 = 2 * v137 | (int32_t)(v137 < 0);
                                    v134 = v136;
                                    while (v136 != 28) {
                                        // 0x5d326
                                        v135 = *(int32_t *)(v134 + (int64_t)&g84);
                                        *(int32_t *)(v134 + v5) = v135 ^ v133;
                                        v136 = v134 + 4;
                                        v137 = 0x41c64e6d * v133 + 0x3039;
                                        v133 = 2 * v137 | (int32_t)(v137 < 0);
                                        v134 = v136;
                                    }
                                    // 0x5d347
                                    *(char *)(v5 + 28) = *(char *)&g85 ^ 25;
                                    v8 = -97;
                                    v12 = (int64_t)&g84;
                                    goto lab_0x5db67;
                                }
                                case 9: {
                                    *(char *)(v131 + v5) = 0;
                                    int64_t v138 = v131 + 1; // 0x5d38a
                                    v131 = v138;
                                    while (v138 != 35) {
                                        // 0x5d386
                                        *(char *)(v131 + v5) = 0;
                                        v138 = v131 + 1;
                                        v131 = v138;
                                    }
                                    // 0x5d393
                                    v1 = (int64_t)&g83;
                                    int64_t v139 = 0; // 0x5d3ef
                                    int64_t v140 = 0x2fdd8347;
                                    int32_t v141 = *(int32_t *)(v139 + (int64_t)&g83); // 0x5d3e4
                                    *(int32_t *)(v139 + v5) = v141 ^ 0x2fdd8347;
                                    v139 += 4;
                                    uint32_t v142 = (int32_t)(0x2000 * v140 ^ v140); // 0x5d3bb
                                    int32_t v143 = v142 / 0x20000 ^ v142; // 0x5d3c0
                                    uint32_t v144 = 32 * v143 ^ v143; // 0x5d3c7
                                    int32_t v145 = v144 / 0x40000000 | 4 * v144; // 0x5d3cb
                                    while (v139 != 32) {
                                        // 0x5d3d4
                                        v140 = v145;
                                        v141 = *(int32_t *)(v139 + (int64_t)&g83);
                                        *(int32_t *)(v139 + v5) = v141 ^ v145;
                                        v139 += 4;
                                        v142 = (int32_t)(0x2000 * v140 ^ v140);
                                        v143 = v142 / 0x20000 ^ v142;
                                        v144 = 32 * v143 ^ v143;
                                        v145 = v144 / 0x40000000 | 4 * v144;
                                    }
                                    int64_t v146 = 32; // 0x5d3fd
                                    int64_t v147 = 0xef420f6a; // 0x5d3fd
                                    char v148 = *(char *)(v146 + v1); // 0x5d415
                                    *(char *)(v146 + v5) = v148 ^ (char)v147;
                                    v146++;
                                    v147 /= 256;
                                    v14 = 239;
                                    while (v146 != 35) {
                                        // 0x5d405
                                        v148 = *(char *)(v146 + v1);
                                        *(char *)(v146 + v5) = v148 ^ (char)v147;
                                        v146++;
                                        v147 /= 256;
                                        v14 = 239;
                                    }
                                    goto lab_0x5d42b;
                                }
                                default: {
                                    goto lab_0x5db85;
                                }
                            }
                        } else {
                            int64_t v149 = 0; // 0x5cd02
                            int64_t v150 = 0; // 0x5cd02
                            switch (v3) {
                                case 5: {
                                    *(char *)(v149 + v5) = 0;
                                    int64_t v151 = v149 + 1; // 0x5d0de
                                    v149 = v151;
                                    while (v151 != 35) {
                                        // 0x5d0da
                                        *(char *)(v149 + v5) = 0;
                                        v151 = v149 + 1;
                                        v149 = v151;
                                    }
                                    // 0x5d0e7
                                    v1 = (int64_t)&g89;
                                    int64_t v152 = 0; // 0x5d142
                                    int64_t v153 = 0x7865d738;
                                    int32_t v154 = *(int32_t *)(v152 + (int64_t)&g89); // 0x5d137
                                    *(int32_t *)(v152 + v5) = v154 ^ 0x7865d738;
                                    v152 += 4;
                                    uint32_t v155 = (int32_t)(0x2000 * v153 ^ v153); // 0x5d10f
                                    int32_t v156 = v155 / 0x20000 ^ v155; // 0x5d114
                                    int32_t v157 = 32 * v156 ^ -1 - v156; // 0x5d123
                                    while (v152 != 32) {
                                        // 0x5d127
                                        v153 = v157;
                                        v154 = *(int32_t *)(v152 + (int64_t)&g89);
                                        *(int32_t *)(v152 + v5) = v154 ^ v157;
                                        v152 += 4;
                                        v155 = (int32_t)(0x2000 * v153 ^ v153);
                                        v156 = v155 / 0x20000 ^ v155;
                                        v157 = 32 * v156 ^ -1 - v156;
                                    }
                                    int64_t v158 = 32; // 0x5d150
                                    int64_t v159 = 0x6936d45c; // 0x5d150
                                    char v160 = *(char *)(v158 + v1); // 0x5d168
                                    *(char *)(v158 + v5) = v160 ^ (char)v159;
                                    v158++;
                                    v159 /= 256;
                                    v14 = 105;
                                    while (v158 != 35) {
                                        // 0x5d158
                                        v160 = *(char *)(v158 + v1);
                                        *(char *)(v158 + v5) = v160 ^ (char)v159;
                                        v158++;
                                        v159 /= 256;
                                        v14 = 105;
                                    }
                                    goto lab_0x5d42b;
                                }
                                case 6: {
                                    *(char *)(v150 + v5) = 0;
                                    int64_t v161 = v150 + 1; // 0x5d187
                                    v150 = v161;
                                    int32_t v162 = (int32_t)"_create" - 0x337b3cf4 >> 4 | 0x10000000 * ((int32_t)"_create" - 0x337b3cf4); // 0x5d18e
                                    int64_t v163 = 0; // 0x5d18e
                                    while (v161 != 31) {
                                        // 0x5d183
                                        *(char *)(v150 + v5) = 0;
                                        v161 = v150 + 1;
                                        v150 = v161;
                                        v162 = (int32_t)"_create" - 0x337b3cf4 >> 4 | 0x10000000 * ((int32_t)"_create" - 0x337b3cf4);
                                        v163 = 0;
                                    }
                                    int32_t v164 = *(int32_t *)(v163 + (int64_t)&g88); // 0x5d1d3
                                    *(int32_t *)(v163 + v5) = v164 ^ v162;
                                    int64_t v165 = v163 + 4; // 0x5d1de
                                    uint32_t v166 = 0x41c64e6d * v162 + (int32_t)"_create"; // 0x5d1b4
                                    int32_t v167 = v166 / 16 | 0x10000000 * v166; // 0x5d1ba
                                    v162 = v167;
                                    v163 = v165;
                                    while (v165 != 28) {
                                        // 0x5d1c3
                                        v164 = *(int32_t *)(v163 + (int64_t)&g88);
                                        *(int32_t *)(v163 + v5) = v164 ^ v162;
                                        v165 = v163 + 4;
                                        v166 = 0x41c64e6d * v162 + (int32_t)"_create";
                                        v167 = v166 / 16 | 0x10000000 * v166;
                                        v162 = v167;
                                        v163 = v165;
                                    }
                                    int64_t v168 = 28; // 0x5d1ec
                                    uint64_t v169 = (int64_t)v167;
                                    char v170 = *(char *)(v168 + (int64_t)&g88); // 0x5d204
                                    int64_t v171 = v169 / 256; // 0x5d20a
                                    *(char *)(v168 + v5) = v170 ^ (char)v169;
                                    v168++;
                                    v10 = v5;
                                    v15 = v171;
                                    while (v168 != 31) {
                                        // 0x5d1f4
                                        v169 = v171;
                                        v170 = *(char *)(v168 + (int64_t)&g88);
                                        v171 = v169 / 256;
                                        *(char *)(v168 + v5) = v170 ^ (char)v169;
                                        v168++;
                                        v10 = v5;
                                        v15 = v171;
                                    }
                                    goto lab_0x5d595;
                                }
                                default: {
                                    goto lab_0x5db85;
                                }
                            }
                        }
                    }
                } else {
                    int64_t v172 = 0; // 0x5cd44
                    if (v3 == 1) {
                        *(char *)(v172 + v5) = 0;
                        int64_t v173 = v172 + 1; // 0x5cea9
                        v172 = v173;
                        int32_t v174 = 0x23b4ec6d; // 0x5ceb0
                        int64_t v175 = 0; // 0x5ceb0
                        while (v173 != 25) {
                            // 0x5cea5
                            *(char *)(v172 + v5) = 0;
                            v173 = v172 + 1;
                            v172 = v173;
                            v174 = 0x23b4ec6d;
                            v175 = 0;
                        }
                        int32_t v176 = *(int32_t *)(v175 + (int64_t)&g94); // 0x5cee7
                        *(int32_t *)(v175 + v5) = v176 ^ v174;
                        int64_t v177 = v175 + 4; // 0x5cef2
                        v174 = llvm_bswap_i32(0x43fd43fd * v174 + 0xc39ec3);
                        v175 = v177;
                        while (v177 != 24) {
                            // 0x5cedd
                            v176 = *(int32_t *)(v175 + (int64_t)&g94);
                            *(int32_t *)(v175 + v5) = v176 ^ v174;
                            v177 = v175 + 4;
                            v174 = llvm_bswap_i32(0x43fd43fd * v174 + 0xc39ec3);
                            v175 = v177;
                        }
                        // 0x5cef8
                        *(char *)(v5 + 24) = 0;
                        function_5cab4(a1, &v4, v5, (int64_t)&g94);
                        v1 = 25;
                        v7 = 25;
                        goto lab_0x5dc3a;
                    } else {
                        if (v3 > 1) {
                            int64_t v178 = 0; // 0x5cd02
                            int64_t v179 = 0; // 0x5cd02
                            switch (v3) {
                                case 2: {
                                    *(char *)(v178 + v5) = 0;
                                    int64_t v180 = v178 + 1; // 0x5cf2d
                                    v178 = v180;
                                    int64_t v181 = 0; // 0x5cf34
                                    while (v180 != 33) {
                                        // 0x5cf29
                                        *(char *)(v178 + v5) = 0;
                                        v180 = v178 + 1;
                                        v178 = v180;
                                        v181 = 0;
                                    }
                                    int32_t v182 = -0x104c8101;
                                    int32_t v183 = *(int32_t *)(v181 + (int64_t)&g93); // 0x5cf75
                                    *(int32_t *)(v181 + v5) = v183 ^ v182;
                                    int64_t v184 = v181 + 4; // 0x5cf80
                                    uint32_t v185 = 0x2000 * v182 ^ v182; // 0x5cf53
                                    int32_t v186 = v185 / 0x20000 ^ v185; // 0x5cf5a
                                    v181 = v184;
                                    while (v184 != 32) {
                                        // 0x5cf6b
                                        v182 = 32 * v186 ^ -1 - v186;
                                        v183 = *(int32_t *)(v181 + (int64_t)&g93);
                                        *(int32_t *)(v181 + v5) = v183 ^ v182;
                                        v184 = v181 + 4;
                                        v185 = 0x2000 * v182 ^ v182;
                                        v186 = v185 / 0x20000 ^ v185;
                                        v181 = v184;
                                    }
                                    // 0x5cf86
                                    *(char *)(v5 + 32) = 0;
                                    function_5cab4(a1, &v4, v5, (int64_t)&g93);
                                    v1 = 33;
                                    v7 = 33;
                                    goto lab_0x5dc3a;
                                }
                                case 3: {
                                    *(char *)(v179 + v5) = 0;
                                    int64_t v187 = v179 + 1; // 0x5cfb9
                                    v179 = v187;
                                    while (v187 != 26) {
                                        // 0x5cfb5
                                        *(char *)(v179 + v5) = 0;
                                        v187 = v179 + 1;
                                        v179 = v187;
                                    }
                                    // 0x5cfc2
                                    v1 = (int64_t)&g91;
                                    int64_t v188 = 0; // 0x5d00f
                                    int64_t v189 = 0xc1ee55ce;
                                    int32_t v190 = *(int32_t *)(v188 + (int64_t)&g91); // 0x5d004
                                    *(int32_t *)(v188 + v5) = v190 ^ -0x3e11aa32;
                                    v188 += 4;
                                    uint32_t v191 = (int32_t)(0x2000 * v189 ^ v189); // 0x5cfe4
                                    int32_t v192 = v191 / 0x20000 ^ v191; // 0x5cfe9
                                    int32_t v193 = -((32 * v192 ^ v192)); // 0x5cff2
                                    while (v188 != 24) {
                                        // 0x5cffa
                                        v189 = v193;
                                        v190 = *(int32_t *)(v188 + (int64_t)&g91);
                                        *(int32_t *)(v188 + v5) = v190 ^ v193;
                                        v188 += 4;
                                        v191 = (int32_t)(0x2000 * v189 ^ v189);
                                        v192 = v191 / 0x20000 ^ v191;
                                        v193 = -((32 * v192 ^ v192));
                                    }
                                    // 0x5d015
                                    *(char *)(v5 + 24) = *(char *)&g92 ^ 34;
                                    v9 = 79;
                                    v13 = v1;
                                    goto lab_0x5dc21;
                                }
                                default: {
                                    goto lab_0x5db85;
                                }
                            }
                        } else {
                            // 0x5cd4c
                            if (v3 == 0) {
                                while (true) {
                                    // continue -> 0x5ce36
                                }
                            } else {
                                goto lab_0x5db85;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x5dc3a:
    // 0x5dc3a
    function_24dff(&v4, v7);
    int64_t result = a1; // 0x5dc56
    if (v2 != __readfsqword(40)) {
        // 0x5dc58
        __stack_chk_fail();
        result = (int64_t)&g452;
    }
    // 0x5dc5d
    return result;
  lab_0x5db67:
    // 0x5db67
    *(char *)(v5 + 29) = *(char *)(v12 + 29) ^ v8;
    function_5cab4(a1, &v4, v5, v12);
    v1 = 30;
    v7 = 30;
    goto lab_0x5dc3a;
  lab_0x5d8c8:
    // 0x5d8c8
    function_5cab4(a1, &v4, 32, v11);
    v1 = 32;
    v7 = 32;
    goto lab_0x5dc3a;
  lab_0x5db85:;
    int64_t v194 = 0; // 0x5db85
    *(char *)(v194 + v5) = 0;
    int64_t v195 = v194 + 1; // 0x5db8b
    v194 = v195;
    int32_t v196 = -0x73b4ee86; // 0x5db92
    int64_t v197 = 0; // 0x5db92
    while (v195 != 26) {
        // 0x5db87
        *(char *)(v194 + v5) = 0;
        v195 = v194 + 1;
        v194 = v195;
        v196 = -0x73b4ee86;
        v197 = 0;
    }
    v1 = v5;
    int32_t v198 = *(int32_t *)(v197 + (int64_t)&g68); // 0x5dbd6
    *(int32_t *)(v197 + v5) = v198 ^ v196;
    int64_t v199 = v197 + 4; // 0x5dbe1
    uint32_t v200 = 0x1ab1 * v196 + 0xb085fa; // 0x5dbb8
    v196 = v200 / 8 | 0x20000000 * v200;
    v197 = v199;
    while (v199 != 24) {
        // 0x5dbc6
        v1 = v5;
        v198 = *(int32_t *)(v197 + (int64_t)&g68);
        *(int32_t *)(v197 + v5) = v198 ^ v196;
        v199 = v197 + 4;
        v200 = 0x1ab1 * v196 + 0xb085fa;
        v196 = v200 / 8 | 0x20000000 * v200;
        v197 = v199;
    }
    // 0x5dbe7
    *(char *)(v5 + 24) = *(char *)&g69 ^ -45;
    v9 = 113;
    v13 = (int64_t)&g68;
    goto lab_0x5dc21;
  lab_0x5dc21:
    // 0x5dc21
    *(char *)(v5 + 25) = *(char *)(v13 + 25) ^ v9;
    function_5cab4(a1, &v4, v5, v13);
    v1 = 26;
    v7 = 26;
    goto lab_0x5dc3a;
  lab_0x5daac:
    // 0x5daac
    function_5cab4(a1, &v4, 36, v5);
    v1 = 36;
    v7 = 36;
    goto lab_0x5dc3a;
  lab_0x5d595:
    // 0x5d595
    function_5cab4(a1, &v4, v15, v10);
    v1 = 31;
    v7 = 31;
    goto lab_0x5dc3a;
  lab_0x5d42b:
    // 0x5d42b
    function_5cab4(a1, &v4, v5, v14);
    v1 = 35;
    v7 = 35;
    goto lab_0x5dc3a;
}

// Address range: 0x498d40 - 0x499a60
int64_t function_498d40(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 344); // 0x498d6b
    int64_t v2 = *v1; // 0x498d6b
    int64_t v3; // 0x498d40
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g440, "=> write record", v3);
    char * v4 = (char *)(a1 + 372);
    char v5 = *v4 & 2;
    int64_t v6; // 0x498d40
    int64_t v7; // 0x498d40
    int64_t v8; // 0x498d40
    if (v5 == 0) {
        goto lab_0x498d9e;
    } else {
        int64_t v9 = *(int64_t *)(a1 + 96); // 0x498d88
        if (v9 == 0) {
            goto lab_0x498d9e;
        } else {
            // 0x498d91
            if (*(char *)(v9 + (int64_t)&g49) == 1) {
                // 0x499610
                v6 = (int64_t)*(int32_t *)(a1 + 336);
                v7 = v2;
                v8 = a1;
                goto lab_0x498dd1;
            } else {
                goto lab_0x498d9e;
            }
        }
    }
  lab_0x498d9e:;
    int32_t * v10 = (int32_t *)(a1 + 336); // 0x498d9e
    int32_t v11 = *v10; // 0x498d9e
    int32_t v12 = v11; // 0x498da7
    char v13 = v5; // 0x498da7
    int64_t v14 = v2; // 0x498da7
    int64_t v15 = a1; // 0x498da7
    if (v11 == 22) {
        int64_t * v16 = (int64_t *)(a1 + 328); // 0x4994d0
        int64_t v17 = *v16; // 0x4994d0
        char v18 = *(char *)v17; // 0x4994d7
        if (v18 != 0) {
            // 0x4994e0
            if (*(int64_t *)(a1 + 96) == 0) {
                // 0x499943
                function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)2719, "should never happen", v3);
                // 0x499388
                return 0xffff9400;
            }
        }
        uint64_t v19 = v2 - 4; // 0x4994eb
        *(char *)(v17 + 1) = (char)(v19 / 0x10000);
        *(char *)(*v16 + 2) = (char)(v19 / 256);
        *(char *)(*v16 + 3) = (char)v2 - 4;
        int64_t v20 = v2; // 0x499521
        int64_t v21 = a1; // 0x499521
        if ((*v4 & 2) != 0) {
            int64_t v22 = *v16; // 0x4996d0
            v21 = v22 + 12;
            memmove((int64_t *)v21, (int64_t *)(v22 + 4), (int32_t)v19);
            *v1 = *v1 + 8;
            if (v18 != 0) {
                int64_t * v23 = (int64_t *)(a1 + 96); // 0x4998c0
                uint32_t v24 = *(int32_t *)(*v23 + (int64_t)&g44); // 0x4998cb
                *(char *)(*v16 + 4) = (char)(v24 / 256);
                int32_t v25 = *(int32_t *)(*v23 + (int64_t)&g44); // 0x4998e2
                *(char *)(*v16 + 5) = (char)v25;
                int32_t * v26 = (int32_t *)(*v23 + (int64_t)&g44); // 0x4998ef
                *v26 = *v26 + 1;
            } else {
                // 0x4996f9
                *(char *)(*v16 + 4) = 0;
                *(char *)(*v16 + 5) = 0;
            }
            int64_t v27 = *v16; // 0x49970f
            *(int16_t *)(v27 + 6) = 0;
            *(char *)(v27 + 8) = 0;
            int64_t v28 = *v16; // 0x499720
            *(int16_t *)(v28 + 9) = *(int16_t *)(v28 + 1);
            *(char *)(v28 + 11) = *(char *)(v28 + 3);
            v20 = v2 + 8;
        }
        int64_t v29 = v18 != 0 ? a1 : v21;
        v12 = *v10;
        v13 = *(char *)(v29 + 372) & 2;
        v14 = v20;
        v15 = v29;
    }
    int64_t v30 = v12;
    v6 = v30;
    v7 = v14;
    v8 = v15;
    if (v13 != 0) {
        int64_t * v31 = (int64_t *)(a1 + 96); // 0x498db1
        int64_t v32 = *v31; // 0x498db1
        v6 = v30;
        v7 = v14;
        v8 = v15;
        if (v32 != 0) {
            // 0x498dba
            v6 = v30;
            v7 = v14;
            v8 = v15;
            if (*(char *)(v32 + (int64_t)&g49) != 1) {
                // 0x498dc3
                v6 = v30;
                v7 = v14;
                v8 = v15;
                if ((v12 - 20 & -3) == 0) {
                    int64_t * mem = calloc(1, 32); // 0x49957a
                    int64_t result = (int64_t)mem; // 0x49957a
                    if (mem == NULL) {
                        // 0x499a82
                        return result;
                    }
                    int64_t v33 = *v1; // 0x49958b
                    int32_t size = v33; // 0x49959a
                    int64_t * mem2 = calloc(1, size); // 0x49959a
                    int64_t v34 = (int64_t)mem2; // 0x49959a
                    *mem = v34;
                    if (mem2 == NULL) {
                        // 0x499a27
                        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g437, "alloc %d bytes failed", v33);
                        free(mem);
                        return (int64_t)&g452;
                    }
                    // 0x4995ac
                    memcpy(mem2, (int64_t *)*(int64_t *)(a1 + 328), size);
                    *(int64_t *)(result + 8) = *v1;
                    uint32_t v35 = *v10; // 0x4995ca
                    int64_t v36 = v35; // 0x4995ca
                    *(int64_t *)(result + 24) = 0;
                    *(char *)(result + 16) = (char)v35;
                    int64_t * v37 = (int64_t *)(*v31 + (int64_t)&g50); // 0x4995e2
                    int64_t v38 = *v37; // 0x4995e2
                    if (v38 != 0) {
                        int64_t * v39 = (int64_t *)(v38 + 24);
                        int64_t v40 = *v39; // 0x4995fb
                        while (v40 != 0) {
                            // 0x4995fb
                            v39 = (int64_t *)(v40 + 24);
                            v40 = *v39;
                        }
                        // 0x499604
                        *v39 = result;
                        v6 = v36;
                        v7 = v14;
                        v8 = v34;
                    } else {
                        // 0x4999e8
                        *v37 = result;
                        v6 = v36;
                        v7 = v14;
                        v8 = v34;
                    }
                }
            }
        }
    }
    goto lab_0x498dd1;
  lab_0x498dd1:;
    int64_t * v41 = (int64_t *)(a1 + 304); // 0x498dd1
    *(char *)*v41 = (char)v6;
    int32_t * v42 = (int32_t *)(a1 + 24); // 0x498de4
    int32_t * v43 = (int32_t *)(a1 + 20); // 0x498de7
    uint32_t v44 = *v43; // 0x498de7
    unsigned char v45 = *(char *)(v8 + 372); // 0x498dea
    function_498d10(v44, *v42, (int32_t)(v45 / 2 % 2), *v41 + 1);
    int64_t * v46 = (int64_t *)(a1 + 312); // 0x498e01
    *(char *)*v46 = (char)(v7 / 256);
    *(char *)(*v46 + 1) = (char)v7;
    int64_t * v47 = (int64_t *)(a1 + 112); // 0x498e1c
    char * v48; // 0x498d40
    int32_t v49; // 0x498d40
    int32_t v50; // 0x498d40
    int64_t v51; // 0x498d40
    int64_t v52; // 0x498d40
    bool v53; // 0x498d40
    int64_t v54; // 0x498d40
    int32_t v55; // 0x498e71
    int64_t * v56; // 0x498d40
    int64_t v57; // 0x498e82
    if (*v47 == 0) {
        // 0x498dd1
        v48 = (char *)((int64_t)v44 + 372);
        goto lab_0x49928b;
    } else {
        // 0x498e27
        function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g54, "=> encrypt buf", v3);
        int64_t * v58 = (int64_t *)(a1 + 72); // 0x498e49
        v54 = (int64_t)&g55;
        if (*v58 == 0) {
            goto lab_0x498f89;
        } else {
            int64_t v59 = *v47; // 0x498e54
            v54 = (int64_t)&g55;
            if (v59 == 0) {
                goto lab_0x498f89;
            } else {
                int64_t v60 = *(int64_t *)(v59 + 128); // 0x498e61
                if (v60 == 0) {
                    int64_t v61 = *v1; // 0x499740
                    int64_t v62 = *(int64_t *)(a1 + 328); // 0x499747
                    function_49e960(a1, 4, "/home/richard/code/mbedtls/library/ssl_tls.c", &g56, "before encrypt: output payload", v62, v61);
                    v54 = (int64_t)&g110;
                    v52 = v62;
                    goto lab_0x498f89;
                } else {
                    // 0x498e71
                    v55 = *(int32_t *)(v60 + 4);
                    int64_t v63 = *v1; // 0x498e74
                    v56 = (int64_t *)(a1 + 328);
                    v57 = *v56;
                    function_49e960(a1, 4, "/home/richard/code/mbedtls/library/ssl_tls.c", &g56, "before encrypt: output payload", v57, v63);
                    switch (v55) {
                        case 7: {
                            goto lab_0x4993a0;
                        }
                        case 2: {
                            // 0x499550
                            v49 = 0;
                            if (*(int32_t *)(*v58 + 148) == 0) {
                                goto lab_0x4993a0;
                            } else {
                                goto lab_0x498fd9;
                            }
                        }
                        default: {
                            // 0x498eb8
                            v53 = v55 == 8 | v55 == 6;
                            v51 = v57;
                            v50 = 0;
                            goto lab_0x498ec9;
                        }
                    }
                }
            }
        }
    }
  lab_0x49928b:;
    unsigned char v64 = *v48 & 2;
    int64_t v65 = v64; // 0x4992b2
    *(int64_t *)(a1 + 352) = *v1 + 13 + (v65 - ((int64_t)(v64 == 0) | v65) & -8);
    unsigned char v66 = *(char *)*v41; // 0x4992d8
    function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g442, "output record: msgtype = %d, version = [%d:%d], msglen = %d", (int64_t)v66);
    int64_t v67 = *v1; // 0x49930a
    int64_t v68 = *v41; // 0x499318
    unsigned char v69 = *v4 & 2;
    int64_t v70 = v69; // 0x499333
    function_49e960(a1, 4, "/home/richard/code/mbedtls/library/ssl_tls.c", &g443, "output record sent to network", v68, v67 + 13 + (v70 - ((int64_t)(v69 == 0) | v70) & -8));
    int64_t v71 = function_496540(a1); // 0x499357
    int64_t v72 = v71 & 0xffffffff; // 0x49935e
    if ((int32_t)v71 != 0) {
        // 0x4994a8
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g444, "mbedtls_ssl_flush_output", v72);
    } else {
        // 0x499366
        function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g445, "<= write record", v68);
    }
    // 0x499388
    return v72 & 0xffffffff;
  lab_0x498f89:
    // 0x498f89
    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)v54, "should never happen", v52);
    int64_t v73 = 0xffff9400;
    function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g441, "ssl_encrypt_buf", v73);
    // 0x499388
    return v73 & 0xffffffff;
  lab_0x4993a0:;
    uint32_t v74 = *v42; // 0x4993a0
    v54 = (int64_t)&g58;
    v52 = v57;
    int64_t v75; // 0x498d40
    int64_t v76; // bp-80, 0x498d40
    if (v74 < 1) {
        goto lab_0x498f89;
    } else {
        int64_t v77 = v74; // 0x4993a0
        function_4c1af0(*v47 + 80, (int64_t *)*(int64_t *)(a1 + 296), 8, v77);
        function_4c1af0(*v47 + 80, (int64_t *)*v41, 3, v77);
        function_4c1af0(*v47 + 80, (int64_t *)*v46, 2, v77);
        function_4c1af0(*v47 + 80, (int64_t *)*v56, *v1, v77);
        function_4c1b30(*v47 + 80, *v1 + *v56);
        function_4c1bc0(*v47 + 80);
        int64_t v78 = *v56; // 0x49943d
        int64_t v79 = *v1; // 0x49944b
        int64_t v80 = *(int64_t *)(*v47 + 40); // 0x499466
        function_49e960(a1, 4, "/home/richard/code/mbedtls/library/ssl_tls.c", &g59, "computed mac", v79 + v78, v80);
        int64_t v81 = *v1 + *(int64_t *)(*v47 + 40); // 0x49947b
        *v1 = v81;
        if (v55 == 7) {
            // 0x499620
            v76 = 0;
            function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g60, "before encrypt: msglen = %d, including %d bytes of padding", v81);
            int64_t v82 = *v47; // 0x499652
            int64_t v83 = *v56; // 0x499656
            int64_t v84 = *(int64_t *)(v82 + 24); // 0x499669
            int64_t v85 = function_4b5890(v82 + 128, v82 + 48, v84, v83, *v1, v83, &v76); // 0x49967c
            if ((int32_t)v85 != 0) {
                int64_t v86 = v85 & 0xffffffff; // 0x499683
                function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g61, "mbedtls_cipher_crypt", v86);
                // 0x498fa4
                function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g441, "ssl_encrypt_buf", v86);
                // 0x499388
                return v86 & 0xffffffff;
            }
            // 0x49968b
            v54 = (int64_t)&g62;
            v52 = v83;
            v75 = v83;
            if (*v1 != v76) {
                goto lab_0x498f89;
            } else {
                goto lab_0x499248;
            }
        } else {
            // 0x499492
            v53 = v55 == 6;
            v51 = v81;
            v50 = 1;
            goto lab_0x498ec9;
        }
    }
  lab_0x498ec9:;
    // 0x498ec9
    int64_t v87; // bp-72, 0x498d40
    if (!v53) {
        // 0x498fd0
        v54 = (int64_t)&g110;
        v52 = v51;
        v49 = v50;
        if (v55 != 2) {
            goto lab_0x498f89;
        } else {
            goto lab_0x498fd9;
        }
    } else {
        uint32_t v88 = *v43; // 0x498edd
        int64_t * v89 = (int64_t *)(a1 + 296); // 0x498eec
        v87 = *(int64_t *)*v89;
        unsigned char v90 = *(char *)((int64_t)v88 + 372); // 0x498f10
        int64_t v91; // bp-63, 0x498d40
        function_498d10(v88, *v42, (int32_t)(v90 / 2 % 2), (int64_t)&v91);
        int64_t v92 = (int64_t)&v87; // 0x498f28
        function_49e960(a1, 4, "/home/richard/code/mbedtls/library/ssl_tls.c", &g63, "additional data used for AEAD", v92, 13);
        int64_t v93 = *v47; // 0x498f64
        int64_t v94 = *(int64_t *)(v93 + 32); // 0x498f68
        v54 = (int64_t)&g64;
        v52 = v92;
        if (*(int64_t *)(v93 + 24) - v94 == 8) {
            int64_t v95 = (int64_t)((4 * *(char *)(*(int64_t *)*v47 + 44) & 8 ^ 8) + 8); // 0x498efb
            *(int64_t *)(v93 + 48 + v94) = *(int64_t *)*v89;
            int64_t * v96 = (int64_t *)(a1 + 320); // 0x4997ae
            *(int64_t *)*v96 = *(int64_t *)*v89;
            int64_t v97 = *v47; // 0x4997bb
            int64_t v98 = *v96; // 0x4997bf
            int64_t v99 = *(int64_t *)(v97 + 24); // 0x4997c6
            int64_t v100 = *(int64_t *)(v97 + 32); // 0x4997ca
            function_49e960(a1, 4, "/home/richard/code/mbedtls/library/ssl_tls.c", &g65, "IV used", v98, v99 - v100);
            int64_t v101 = *v1; // 0x4997de
            int64_t v102 = *v47; // 0x4997e5
            int64_t v103 = *v56; // 0x4997ff
            int64_t v104 = *(int64_t *)(v102 + 24) + v101 - *(int64_t *)(v102 + 32); // 0x49980d
            *v1 = v104;
            function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g66, "before encrypt: msglen = %d, including %d bytes of padding", v104);
            int64_t v105 = *v47; // 0x49982b
            int64_t v106 = v103 + v101; // 0x49982f
            int64_t v107 = *(int64_t *)(v105 + 24); // 0x499846
            int64_t v108 = function_4b5940(v105 + 128, v105 + 48, v107, &v87, 13, v103, v101, v103, &v76, v106, v95); // 0x49986f
            if ((int32_t)v108 != 0) {
                int64_t v109 = v108 & 0xffffffff; // 0x499876
                function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g67, "mbedtls_cipher_auth_encrypt", v109);
                // 0x498fa4
                function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g441, "ssl_encrypt_buf", v109);
                // 0x499388
                return v109 & 0xffffffff;
            }
            // 0x499883
            v54 = (int64_t)&g95;
            v52 = v103;
            if (v101 == v76) {
                // 0x4998fb
                *v1 = *v1 + v95;
                function_49e960(a1, 4, "/home/richard/code/mbedtls/library/ssl_tls.c", &g96, "after encrypt: tag", v106, v95);
                v54 = (int64_t)&g111;
                v52 = v106;
                v75 = v106;
                if (v50 != 0) {
                    goto lab_0x498f89;
                } else {
                    goto lab_0x499248;
                }
            } else {
                goto lab_0x498f89;
            }
        } else {
            goto lab_0x498f89;
        }
    }
  lab_0x498fd9:;
    int64_t v110 = *v1; // 0x498fdd
    v76 = 0;
    uint64_t v111 = *(int64_t *)(*v47 + 24); // 0x498fef
    uint64_t v112 = (v110 + 1) % v111;
    int64_t v113 = v111 - v112; // 0x498ffd
    char v114 = v112 == 0 ? 0 : (char)v113;
    uint64_t v115 = v112 == 0 ? 0 : v113;
    int64_t v116 = 0; // 0x49900e
    int64_t v117 = v116 + 1; // 0x499021
    *(char *)(v110 + v116 + *v56) = v114;
    int64_t v118 = *v1;
    v116 = v117;
    while (v115 >= v117) {
        // 0x499017
        v117 = v116 + 1;
        *(char *)(v118 + v116 + *v56) = v114;
        v118 = *v1;
        v116 = v117;
    }
    int64_t v119 = v115 + 1 + v118; // 0x499040
    *v1 = v119;
    int64_t v120 = v119; // 0x49904c
    int64_t v121 = v119; // 0x49904c
    if (*v42 >= 2) {
        // 0x499052
        if ((int32_t)a1 != 0) {
            // 0x498fa4
            v73 = a1 & 0xffffffff;
            function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g441, "ssl_encrypt_buf", v73);
            // 0x499388
            return v73 & 0xffffffff;
        }
        int64_t v122 = *v47; // 0x499072
        int64_t v123 = *(int64_t *)(a1 + 320); // 0x499076
        int64_t v124 = *(int64_t *)(v122 + 24); // 0x49907d
        memcpy((int64_t *)v123, (int64_t *)(v122 + 48), (int32_t)v124);
        int64_t v125 = *v1; // 0x49908a
        int64_t v126 = *(int64_t *)(*v47 + 24) + v125; // 0x49909f
        *v1 = v126;
        v120 = v126;
        v121 = v125;
    }
    int64_t v127 = *v56;
    function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g97, "before encrypt: msglen = %d, including %d bytes of IV and %d bytes of padding", v120);
    int64_t v128 = *v47; // 0x4990dd
    int64_t v129 = *(int64_t *)(v128 + 24); // 0x4990ef
    int64_t v130 = function_4b5890(v128 + 128, v128 + 48, v129, v127, v121, v127, &v76); // 0x4990ff
    if ((int32_t)v130 != 0) {
        int64_t v131 = v130 & 0xffffffff; // 0x499106
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g98, "mbedtls_cipher_crypt", v131);
        // 0x498fa4
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g441, "ssl_encrypt_buf", v131);
        // 0x499388
        return v131 & 0xffffffff;
    }
    // 0x49910e
    v54 = (int64_t)&g99;
    v52 = v127;
    if (v121 != v76) {
        goto lab_0x498f89;
    } else {
        // 0x499125
        if (*v42 <= 1) {
            int64_t v132 = *v47; // 0x49912b
            int64_t v133 = *(int64_t *)(v132 + 24); // 0x49912f
            memcpy((int64_t *)(v132 + 48), (int64_t *)(v132 + 184), (int32_t)v133);
        }
        // 0x499148
        v75 = v127;
        if (v49 == 0) {
            // 0x499151
            function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g108, "using encrypt then mac", v127);
            int64_t v134 = (int64_t)&v87; // 0x49917a
            v87 = *(int64_t *)*(int64_t *)(a1 + 296);
            function_49e960(a1, 4, "/home/richard/code/mbedtls/library/ssl_tls.c", &g109, "MAC'd meta-data", v134, 13);
            function_4c1af0(*v47 + 80, &v87, 13, (int64_t)&g109);
            int64_t * v135 = (int64_t *)(a1 + 320); // 0x4991fe
            function_4c1af0(*v47 + 80, (int64_t *)*v135, *v1, (int64_t)&g109);
            function_4c1b30(*v47 + 80, *v1 + *v135);
            function_4c1bc0(*v47 + 80);
            *v1 = *v1 + *(int64_t *)(*v47 + 40);
            v75 = v134;
        }
        goto lab_0x499248;
    }
  lab_0x499248:
    // 0x499248
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)&g112, "<= encrypt buf", v75);
    uint64_t v136 = *v1; // 0x49926a
    *(char *)*v46 = (char)(v136 / 256);
    *(char *)(*v46 + 1) = (char)v136;
    v48 = v4;
    goto lab_0x49928b;
}

// Address range: 0x49bfd1 - 0x49d220
int64_t function_49bfd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x49bfd1
    int64_t v1; // 0x49bfd1
    function_49e770(v1, 1, (char *)a3, (int64_t *)a4, (char *)a5, a6);
    if ((*(char *)(v1 + 372) & 2) == 0) {
        // 0x49d1fb
        return 0xffff8e00;
    }
    // 0x49bffa
    *(int64_t *)(v1 + 248) = 0;
    *(int64_t *)(v1 + 232) = 0;
    return function_49bdb4();
}

// Address range: 0x49d220 - 0x49d31d
int64_t function_49d220(int64_t a1) {
    // 0x49d220
    int64_t v1; // 0x49d220
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g447, "=> read record", v1);
    int64_t v2 = function_49baf0(a1); // 0x49d253
    while ((int32_t)v2 == 0) {
        int64_t v3 = function_49b370(a1); // 0x49d261
        int32_t v4 = v3;
        if (v4 != -0x6680) {
            int64_t result = v3 & 0xffffffff; // 0x49d26f
            if (v4 != 0) {
                // 0x49d2e0
                function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g449, "mbedtls_ssl_handle_message_type", result);
                return result;
            }
            // 0x49d273
            if (*(int32_t *)(a1 + 216) != 22) {
                // 0x49d280
                function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g450, "<= read record", v1);
                return result;
            }
            // 0x49d310
            function_496860(a1);
            // 0x49d280
            function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g450, "<= read record", v1);
            return result;
        }
        v2 = function_49baf0(a1);
    }
    int64_t result2 = v2 & 0xffffffff; // 0x49d25a
    function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g448, "mbedtls_ssl_read_record_layer", result2);
    return result2;
}

// Address range: 0x49d320 - 0x49d5dc
int64_t function_49d320(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x49d320
    if (a1 == 0) {
        // 0x49d610
        int64_t result; // 0x49d320
        return result;
    }
    // 0x49d353
    int64_t v1; // 0x49d320
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g18, "=> read", v1);
    if ((*(char *)(a1 + 372) & 2) != 0) {
        int64_t v2 = function_496540(a1); // 0x49d387
        if ((int32_t)v2 != 0) {
            // 0x49d450
            return v2 & 0xffffffff & 0xffffffff;
        }
        int64_t v3 = *(int64_t *)(a1 + 96); // 0x49d396
        if (v3 != 0) {
            // 0x49d39f
            if (*(char *)(v3 + (int64_t)&g49) == 1) {
                int64_t v4 = function_49a910(a1); // 0x49d5a3
                if ((int32_t)v4 != 0) {
                    // 0x49d450
                    return v4 & 0xffffffff & 0xffffffff;
                }
            }
        }
    }
    int64_t v5 = function_499dd0(a1); // 0x49d3af
    int64_t v6 = v5 & 0xffffffff; // 0x49d3b6
    if ((int32_t)v5 != 0) {
        // 0x49d568
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g19, "ssl_check_ctr_renegotiate", v6);
        // 0x49d450
        return v6 & 0xffffffff;
    }
    int32_t * v7 = (int32_t *)(a1 + 8); // 0x49d3be
    int32_t v8 = 0; // 0x49d3c2
    int64_t v9; // 0x49d320
    int64_t v10; // 0x49d320
    int64_t v11; // 0x49d320
    int64_t v12; // 0x49d320
    if (*v7 == 16) {
        goto lab_0x49d3f1;
    } else {
        int64_t v13 = function_4976c0(a1); // 0x49d3c7
        int32_t v14 = v13; // 0x49d3cc
        v8 = 1;
        if (v14 == -0x6b00) {
            goto lab_0x49d3f1;
        } else {
            int64_t v15 = v13 & 0xffffffff;
            v11 = v15;
            v8 = 0;
            v9 = v15;
            v12 = (int64_t)&g20;
            v10 = (int64_t)"mbedtls_ssl_handshake";
            if (v14 != 0) {
                goto lab_0x49d4a2;
            } else {
                goto lab_0x49d3f1;
            }
        }
    }
  lab_0x49d3f1:;
    int64_t * v16 = (int64_t *)(a1 + 208); // 0x49d3f1
    int64_t v17 = *v16; // 0x49d3f1
    int64_t * v18; // 0x49d320
    int64_t v19; // 0x49d320
    int64_t result5; // 0x49d320
    int64_t v20; // 0x49d320
    if (v17 == 0) {
        int64_t result2 = *(int64_t *)(a1 + 152); // 0x49d4c8
        int64_t v21 = a1; // 0x49d4d2
        if (result2 != 0) {
            // 0x49d4d4
            v21 = *(int64_t *)(a1 + 136);
            if ((int32_t)result2 == -1) {
                // 0x49d610
                return result2;
            }
        }
        // 0x49d4e6
        result5 = v21;
        if (v8 == 0) {
            int64_t v22 = function_49d220(a1); // 0x49d483
            v19 = v6;
            result5 = a1;
            switch ((int32_t)v22) {
                case 0: {
                    goto lab_0x49d4eb;
                }
                case -0x7280: {
                    return v19 & 0xffffffff;
                }
                default: {
                    // 0x49d493
                    v9 = v22 & 0xffffffff;
                    v12 = (int64_t)&g21;
                    v10 = (int64_t)"mbedtls_ssl_read_record";
                    goto lab_0x49d4a2;
                }
            }
        } else {
            goto lab_0x49d4eb;
        }
    } else {
        // 0x49d3f1
        v18 = (int64_t *)(a1 + 224);
        v20 = v17;
        goto lab_0x49d401;
    }
  lab_0x49d4eb:;
    int64_t * v23 = (int64_t *)(a1 + 224);
    uint32_t v24 = *(int32_t *)(a1 + 216); // 0x49d4f3
    int64_t result3 = v24; // 0x49d4f3
    if (v24 == 22 | *v23 == 0 == v24 == 23) {
        // 0x49d610
        return result3;
    }
    int32_t * v25 = (int32_t *)(a1 + 12); // 0x49d50d
    if (*v25 == 3) {
        // 0x49d5c0
        if (*(int32_t *)(result5 + 348) >= 0) {
            int32_t * v26 = (int32_t *)(a1 + 16); // 0x49d5d1
            *v26 = *v26 + 1;
            return result3;
        }
    }
    // 0x49d517
    if (v24 == 21 || v24 != 23) {
        // 0x49d610
        return result3;
    }
    int64_t result4 = *(int64_t *)(a1 + 200); // 0x49d52d
    *v16 = result4;
    if (*v7 == 16) {
        // 0x49d610
        return result4;
    }
    // 0x49d541
    v18 = v23;
    v20 = result4;
    if (*(char *)(result5 + 372) % 2 != 0) {
        // 0x49d54d
        v18 = v23;
        v20 = result4;
        if (*v25 == 3) {
            // 0x49d610
            return result5;
        }
    }
    goto lab_0x49d401;
  lab_0x49d401:;
    uint64_t v27 = *v18; // 0x49d401
    int64_t v28 = v27 < a3 ? v27 : a3; // 0x49d40e
    memcpy((int64_t *)a2, (int64_t *)v20, (int32_t)v28);
    int64_t v29 = *v18 - v28; // 0x49d41a
    *v18 = v29;
    int64_t v30 = 0; // 0x49d421
    if (v29 != 0) {
        // 0x49d470
        v30 = *v16 + v28;
    }
    // 0x49d42e
    *v16 = v30;
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g22, "<= read", v11);
    v19 = v28;
    // 0x49d450
    return v19 & 0xffffffff;
  lab_0x49d4a2:
    // 0x49d4a2
    function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)v12, (char *)v10, v9);
    // 0x49d450
    return v9 & 0xffffffff;
}

// Address range: 0x49f120 - 0x4a03ac
int64_t function_49f120(int64_t result) {
    // 0x49f120
    int64_t v1; // 0x49f120
    function_49e770(result, 2, "/home/richard/code/mbedtls/library/ssl_cli.c", &g31, "=> write client hello", v1);
    if (*(int64_t *)(result + 48) == 0) {
        // 0x49f953
        return result;
    }
    int32_t * v2 = (int32_t *)(result + 12); // 0x49f15f
    uint32_t v3 = *v2; // 0x49f15f
    if (v3 == 0) {
        // 0x49f169
        *(int32_t *)(result + 20) = (int32_t)*(char *)(result + 370);
        *(int32_t *)(result + 24) = (int32_t)*(char *)(result + 371);
    }
    int64_t v4 = result + 368; // 0x49f181
    unsigned char v5 = *(char *)v4; // 0x49f181
    if (v5 == 0) {
        // 0x4a02cf
        function_49e770(result, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g32, "configured max major version is invalid, consider using mbedtls_ssl_config_defaults()", (int64_t)v3);
        // 0x49f953
        return 0xffff8f00;
    }
    int64_t * v6 = (int64_t *)(result + 328); // 0x49f191
    int64_t v7 = *v6; // 0x49f191
    char * v8 = (char *)(result + 369);
    int64_t v9 = result + 372; // 0x49f1a8
    char * v10 = (char *)v9; // 0x49f1a8
    int64_t v11 = v7 + 4; // 0x49f1af
    function_498d10((int32_t)v5, (int32_t)*v8, (int32_t)(*v10 / 2 % 2), v11);
    unsigned char v12 = *(char *)v11; // 0x49f1dc
    function_49e770(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g33, "client hello, max version: [%d:%d]", (int64_t)v12);
    int64_t * v13 = (int64_t *)(result + 96); // 0x49f1f4
    int64_t v14 = *v13; // 0x49f1f4
    int64_t v15; // 0x49f120
    if ((*v10 & 2) == 0) {
        goto lab_0x49f998;
    } else {
        // 0x49f206
        v15 = v14;
        if (*(int64_t *)(v14 + (int64_t)&g45) == 0) {
            goto lab_0x49f998;
        } else {
            goto lab_0x49f214;
        }
    }
  lab_0x49fa70:;
    // 0x49fa70
    int32_t v16; // 0x49f60d
    int64_t v17 = v16;
    uint64_t v18; // 0x49f502
    uint64_t v19 = v18 + v17; // 0x49fa75
    char * v20; // 0x49f120
    uint64_t v21 = (int64_t)v20; // 0x49fa7a
    int64_t v22; // 0x49f120
    int64_t v23; // 0x49f120
    int64_t v24; // 0x49f120
    int32_t v25; // 0x49f120
    if (v19 > v21) {
        goto lab_0x49fd6f;
    } else {
        // 0x49fa85
        if (v21 - v19 < v24 + 6) {
            goto lab_0x49fd6f;
        } else {
            int64_t v26 = *(int64_t *)((int64_t)v25 + 240); // 0x49faa1
            int32_t v27 = *(int32_t *)v26; // 0x49faa8
            v22 = v17;
            v23 = 0;
            if (v27 != 0) {
                int64_t v28 = 0;
                int64_t v29 = function_4ba4b0(v27); // 0x49fab8
                int64_t v30 = v28 + v19;
                *(char *)(v30 + 6) = *(char *)(v29 + 5);
                *(char *)(v30 + 7) = (char)*(int16_t *)(v29 + 4);
                int64_t v31 = v28 + 2; // 0x49facf
                int32_t v32 = *(int32_t *)(2 * v31 + v26); // 0x49fad3
                int32_t v33 = v32; // 0x49fada
                while (v32 != 0) {
                    // 0x49fab8
                    v28 = v31;
                    v29 = function_4ba4b0(v33);
                    v30 = v28 + v19;
                    *(char *)(v30 + 6) = *(char *)(v29 + 5);
                    *(char *)(v30 + 7) = (char)*(int16_t *)(v29 + 4);
                    v31 = v28 + 2;
                    v32 = *(int32_t *)(2 * v31 + v26);
                    v33 = v32;
                }
                // 0x49fadc
                v22 = v17;
                v23 = 0;
                if (v31 != 0) {
                    char v34 = v31; // 0x49fae9
                    *(char *)(v19 + 5) = v34;
                    *(char *)v19 = 0;
                    *(char *)(v19 + 1) = 10;
                    *(char *)(v19 + 2) = (char)((v28 + 4) / 256);
                    *(char *)(v19 + 3) = v34 + 2;
                    *(char *)(v19 + 4) = (char)(v31 / 256);
                    v22 = v17;
                    v23 = v28 + 8;
                }
            }
            goto lab_0x49f66e;
        }
    }
  lab_0x49f438:;
    // 0x49f438
    int64_t v35; // 0x49f120
    int64_t v36 = v35 + 4;
    uint32_t v37 = *(int32_t *)v36; // 0x49f43f
    int64_t v38 = v37; // 0x49f43f
    int64_t v39; // 0x49f120
    int64_t v40 = v39; // 0x49f445
    int64_t v41 = v38; // 0x49f445
    int64_t v42; // 0x49f120
    int64_t v43 = v42; // 0x49f445
    int64_t v44 = v36; // 0x49f445
    int64_t v45; // 0x49f120
    int64_t v46 = v45; // 0x49f445
    int64_t v47 = v39; // 0x49f445
    int64_t v48 = v38; // 0x49f445
    int64_t v49 = v42; // 0x49f445
    int64_t v50 = v45; // 0x49f445
    if (v37 == 0) {
        // break -> 0x49f44b
        goto lab_0x49f44b;
    }
    goto lab_0x49f3b0;
  lab_0x49f3e8:;
    int64_t v51; // 0x49f120
    int64_t v52; // 0x49f120
    int64_t v54; // 0x49f120
    int64_t v55; // 0x49f3b0
    char v58; // 0x49f3d6
    if ((v58 & 64) == 0) {
        goto lab_0x49f3f3;
    } else {
        // 0x49f3ed
        v39 = v54;
        v42 = v52;
        v45 = v51;
        if (*(int32_t *)(v55 + 16) == 42) {
            goto lab_0x49f438;
        } else {
            goto lab_0x49f3f3;
        }
    }
  lab_0x49f3f3:;
    int32_t * v59 = (int32_t *)v35; // 0x49f3f3
    int64_t v60 = (int64_t)*v59; // 0x49f3f3
    function_49e770(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g40, "client hello, add ciphersuite: %04x", v60);
    *(char *)v54 = (char)(*v59 / 256);
    *(char *)(v54 + 1) = (char)*v59;
    v39 = v54 + 2;
    v42 = v60;
    v45 = v51 + 1;
    goto lab_0x49f438;
  lab_0x49f998:;
    int32_t time_val = time(NULL); // 0x49f99a
    uint64_t v61 = (int64_t)time_val; // 0x49f99a
    *(char *)(v14 + (int64_t)&g112) = (char)(v61 / 0x1000000);
    *(char *)(v14 + (int64_t)&g115) = (char)time_val;
    *(char *)(v14 + (int64_t)&g113) = (char)(v61 / 0x10000);
    *(char *)(v14 + (int64_t)&g114) = (char)(v61 / 256);
    function_49e770(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g30, "client hello, current time: %lu", v61);
    if ((int32_t)result != 0) {
        int64_t result2 = result & 0xffffffff; // 0x49fa08
        function_49e8b0(result, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t *)&g34, "ssl_generate_random", result2);
        // 0x49f953
        return result2;
    }
    // 0x49fe42
    v15 = *v13;
    goto lab_0x49f214;
  lab_0x49f214:;
    int64_t v62 = v7 + 6; // 0x49f234
    *(int64_t *)v62 = *(int64_t *)(v15 + (int64_t)&g112);
    int64_t v63 = *(int64_t *)(v15 + (int64_t)&g116); // 0x49f238
    *(int64_t *)(v7 + 14) = v63;
    int64_t v64 = *(int64_t *)(v15 + (int64_t)&g117); // 0x49f24c
    *(int64_t *)(v7 + 22) = v64;
    int64_t v65 = *(int64_t *)(v15 + (int64_t)&g118); // 0x49f257
    *(int64_t *)(v7 + 30) = v65;
    function_49e960(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g35, "client hello, random bytes", v62, 32);
    int64_t * v66 = (int64_t *)(result + 88); // 0x49f276
    int64_t v67 = *v66; // 0x49f276
    int64_t * v68 = (int64_t *)(v67 + 16);
    int64_t v69 = *v68; // 0x49f27b
    int32_t v70 = *v2;
    int64_t v71; // 0x49f988
    if (v69 == 32 || (v69 & -16) == 16) {
        if (v70 != 0) {
            goto lab_0x49f29a;
        } else {
            // 0x49f976
            v71 = *(int32_t *)(*v13 + (int64_t)&g439) == 0 ? 0 : v69;
            goto lab_0x49fd1d;
        }
    } else {
        // 0x49f28d
        v71 = 0;
        if (v70 == 0) {
            goto lab_0x49fd1d;
        } else {
            goto lab_0x49f29a;
        }
    }
  lab_0x49f29a:
    // 0x49f29a
    *(char *)(v7 + 38) = 0;
    int64_t v72 = v7 + 39; // 0x49f2a8
    int64_t v73 = 0; // 0x49f2ac
    int64_t v74 = v72; // 0x49f2ac
    int64_t v75 = v72; // 0x49f2ac
    goto lab_0x49f2af;
  lab_0x49fd1d:;
    int64_t v111 = v71;
    int64_t v114; // 0x49f120
    int64_t v113; // 0x49f120
    if (*(int64_t *)(v67 + 120) == 0) {
        goto lab_0x49fd32;
    } else {
        // 0x49fd24
        if (*(int64_t *)(v67 + 128) != 0) {
            // 0x4a0175
            if ((int32_t)v67 != 0) {
                // 0x49f953
                int64_t v231; // 0x49f120
                int64_t result4 = v231;
                return result4;
            }
            // 0x4a0193
            *v68 = 32;
            *(char *)(v7 + 38) = 32;
            v113 = 32;
            v114 = v7 + 39;
            goto lab_0x49fd4d;
        } else {
            goto lab_0x49fd32;
        }
    }
  lab_0x49f2af:;
    int64_t v76 = v74;
    function_49e770(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g36, "client hello, session id len.: %d", v73);
    function_49e960(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g37, "client hello, session id", v75, v73);
    int64_t v77 = result; // 0x49f306
    int64_t v78 = v76; // 0x49f306
    int64_t v79 = v75; // 0x49f306
    if ((*v10 & 2) != 0) {
        int64_t v80 = *v13; // 0x49f30c
        int64_t v81 = *(int64_t *)(v80 + (int64_t)&g45); // 0x49f311
        if (v81 == 0) {
            // 0x4a029c
            function_49e770(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g38, "no verify cookie to send", 0);
            *(char *)v76 = 0;
            v77 = result;
            v78 = v76 + 1;
            v79 = 0;
        } else {
            unsigned char v82 = *(char *)(v80 + (int64_t)&g48); // 0x49f321
            function_49e960(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g39, "client hello, cookie", v81, (int64_t)v82);
            char v83 = *(char *)(*v13 + (int64_t)&g48); // 0x49f351
            *(char *)v76 = v83;
            int64_t v84 = *v13; // 0x49f35b
            int64_t v85 = v76 + 1; // 0x49f360
            unsigned char v86 = *(char *)(v84 + (int64_t)&g48); // 0x49f367
            int64_t v87 = *(int64_t *)(v84 + (int64_t)&g45); // 0x49f36e
            memcpy((int64_t *)v85, (int64_t *)v87, (int32_t)v86);
            unsigned char v88 = *(char *)(*v13 + (int64_t)&g48); // 0x49f37f
            v77 = v85;
            v78 = v85 + (int64_t)v88;
            v79 = v81;
        }
    }
    int64_t v89 = v78;
    int64_t v90 = v89 + 2; // 0x49f392
    int64_t v91 = *(int64_t *)(8 * (int64_t)*(int32_t *)(result + 24) + v77); // 0x49f396
    uint32_t v92 = *(int32_t *)v91; // 0x49f39a
    v47 = v90;
    v48 = 0;
    v49 = v79;
    v50 = 0;
    if (v92 != 0) {
        // 0x49f3b0
        v40 = v90;
        v41 = v92;
        v43 = v79;
        v44 = v91;
        v46 = 0;
        while (true) {
          lab_0x49f3b0:
            // 0x49f3b0
            v51 = v46;
            v35 = v44;
            v52 = v43;
            int64_t v53 = v41;
            v54 = v40;
            v55 = function_49efb0((int32_t)v53);
            v39 = v54;
            v42 = v52;
            v45 = v51;
            if (v55 == 0) {
                goto lab_0x49f438;
            } else {
                int32_t v56 = *(int32_t *)(v55 + 32); // 0x49f3c5
                v39 = v54;
                v42 = v52;
                v45 = v51;
                if ((int64_t)v56 > (int64_t)*(char *)(v53 + 369)) {
                    goto lab_0x49f438;
                } else {
                    int32_t v57 = *(int32_t *)(v55 + 40); // 0x49f3d1
                    v39 = v54;
                    v42 = v52;
                    v45 = v51;
                    if ((int64_t)v57 < (int64_t)*(char *)(v53 + 371)) {
                        goto lab_0x49f438;
                    } else {
                        // 0x49f3d6
                        v58 = *(char *)(v53 + 372);
                        if ((v58 & 2) == 0) {
                            goto lab_0x49f3e8;
                        } else {
                            // 0x49f3e2
                            v39 = v54;
                            v42 = v52;
                            v45 = v51;
                            if ((*(char *)(v55 + 44) & 4) != 0) {
                                goto lab_0x49f438;
                            } else {
                                goto lab_0x49f3e8;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x49f44b:;
    int64_t v93 = v47; // 0x49f452
    int64_t v94 = v50; // 0x49f452
    if (*v2 == 0) {
        // 0x49f454
        *(char *)v47 = 0;
        *(char *)(v47 + 1) = -1;
        v93 = v47 + 2;
        v94 = v50 + 1;
    }
    int64_t v95 = v93; // 0x49f46e
    int64_t v96 = v94; // 0x49f46e
    if ((*(char *)(v48 + 374) & 2) != 0) {
        // 0x49fe59
        function_49e770(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g42, "adding FALLBACK_SCSV", v49);
        *(char *)v93 = 86;
        *(char *)(v93 + 1) = 0;
        v95 = v93 + 2;
        v96 = v94 + 1;
    }
    // 0x49f474
    *(char *)v89 = (char)(v96 / 128);
    int64_t v97 = v95 + 2; // 0x49f4a0
    *(char *)(v89 + 1) = 2 * (char)v96;
    function_49e770(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g43, "client hello, got %d ciphersuites", v96);
    function_49e770(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g46, "client hello, compress len.: %d", 1);
    function_49e770(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g47, "client hello, compress alg.: %d", 0);
    *(char *)v95 = 1;
    *(char *)(v95 + 1) = 0;
    v18 = v95 + 4;
    int64_t * str = (int64_t *)v4; // 0x49f50e
    int64_t v98 = *str; // 0x49f50e
    int64_t v99 = *v6 + (int64_t)"le"; // 0x49f51b
    int64_t v100 = v99; // 0x49f52a
    char * v101; // 0x49f120
    int64_t v102; // 0x49f120
    int64_t v103; // 0x49f120
    int64_t v104; // 0x49f120
    char * v105; // 0x49f120
    char * v106; // 0x49f120
    if (v98 == 0) {
        goto lab_0x49f5c1;
    } else {
        // 0x49f530
        function_49e770(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t *)72, "client hello, adding server name extension: %s", v98);
        int32_t len = strlen((char *)*str); // 0x49f55a
        if (v99 < v18) {
            goto lab_0x49f583;
        } else {
            uint64_t v107 = (int64_t)len; // 0x49f55a
            int64_t v108 = v107 + 9; // 0x49f576
            if (v99 - v18 >= v108) {
                char v109 = len; // 0x49fe96
                *(char *)(v95 + 12) = v109;
                *(char *)v18 = 0;
                *(char *)(v95 + 5) = 0;
                *(char *)(v95 + 10) = 0;
                *(char *)(v95 + 6) = (char)((v107 + 5) / 256);
                *(char *)(v95 + 9) = v109 + 3;
                *(char *)(v95 + 7) = v109 + 5;
                *(char *)(v95 + 8) = (char)((v107 + 3) / 256);
                *(char *)(v95 + 11) = (char)(v107 / 256);
                memcpy((int64_t *)(v95 + 13), (int64_t *)*str, len);
                char * v110 = (char *)(*v6 + (int64_t)"le"); // 0x49fefd
                v106 = v110;
                v103 = v108;
                v102 = v107 + 11;
                if (*v2 != 1) {
                    // 0x49fe8f
                    v101 = (char *)(v95 + 382);
                    v105 = v110;
                    v104 = v108;
                    goto lab_0x49f5cf;
                } else {
                    goto lab_0x49ff08;
                }
            } else {
                goto lab_0x49f583;
            }
        }
    }
  lab_0x49fd32:
    // 0x49fd32
    *(char *)(v7 + 38) = (char)v111;
    int64_t v112 = v7 + 39; // 0x49fd3d
    v73 = 0;
    v74 = v112;
    v75 = v112;
    v113 = v111;
    v114 = v112;
    if (v111 == 0) {
        goto lab_0x49f2af;
    } else {
        goto lab_0x49fd4d;
    }
  lab_0x49f5c1:;
    char * v115 = (char *)v100;
    v101 = v8;
    v105 = v115;
    v104 = 0;
    v106 = v115;
    v103 = 0;
    v102 = 2;
    if (*v2 == 1) {
        goto lab_0x49ff08;
    } else {
        goto lab_0x49f5cf;
    }
  lab_0x49fd4d:;
    int64_t v116 = 0; // 0x49fd4f
    int64_t v117 = v116 + 1; // 0x49fd5a
    *(char *)v114 = *(char *)(v116 + 24 + *v66);
    int64_t v118 = v114 + 1; // 0x49fd61
    v73 = v113;
    v74 = v118;
    v75 = v114;
    v116 = v117;
    int64_t v119 = v118; // 0x49fd68
    while (v117 < v113) {
        // 0x49fd50
        v117 = v116 + 1;
        *(char *)v119 = *(char *)(v116 + 24 + *v66);
        v118 = v119 + 1;
        v73 = v113;
        v74 = v118;
        v75 = v114;
        v116 = v117;
        v119 = v118;
    }
    goto lab_0x49f2af;
  lab_0x49ff08:;
    uint64_t v120 = v102 + v97; // 0x49ff23
    function_49e770(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t *)132, "client hello, adding renegotiation extension", v98);
    uint64_t v121 = (int64_t)v106; // 0x49ff2b
    if (v120 <= v121) {
        int64_t v122 = result + 408; // 0x49ff37
        int64_t * v123 = (int64_t *)v122; // 0x49ff37
        if (v121 - v120 >= *v123 + 5) {
            // 0x4a034e
            *(char *)v120 = -1;
            *(char *)(v120 + 1) = 1;
            *(char *)(v120 + 2) = 0;
            *(char *)(v120 + 3) = *(char *)v122 + 1;
            *(char *)(v120 + 4) = (char)*v123;
            memcpy((int64_t *)(v120 + 5), (int64_t *)(result + 416), (int32_t)*v123);
            return *v123 + 5;
        }
    }
    // 0x49ff4f
    function_49e770(result, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t *)136, "buffer too small", v98);
    v101 = v8;
    v105 = (char *)(*v6 + (int64_t)"le");
    v104 = v103;
    goto lab_0x49f5cf;
  lab_0x49f5cf:
    // 0x49f5cf
    v20 = v105;
    int64_t v124 = 0; // 0x49f5e4
    if (*v101 == 3) {
        // 0x4a0078
        function_49e770(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t *)178, "client hello, adding signature_algorithms extension", v98);
        int64_t v125 = *(int64_t *)(result + 232); // 0x4a009c
        int32_t v126 = *(int32_t *)v125; // 0x4a00a5
        int64_t v127 = 0; // 0x4a00aa
        if (v126 != 0) {
            int64_t v128 = 4; // 0x4a00b0
            int64_t v129 = v128; // 0x4a00ba
            v127 = v128;
            while (*(int32_t *)(v128 + v125) != 0) {
                // 0x4a00b0
                v128 = v129 + 4;
                v129 = v128;
                v127 = v128;
            }
        }
        uint64_t v130 = (0x100000000 * v104 >> 32) + v18; // 0x4a00c1
        uint64_t v131 = (int64_t)v105; // 0x4a00c6
        if (v130 > v131) {
            goto lab_0x4a023c;
        } else {
            // 0x4a00d1
            if (v131 - v130 < v127 + 6) {
                goto lab_0x4a023c;
            } else {
                int64_t v132 = 6; // 0x4a00eb
                int64_t v133 = 0; // 0x4a00eb
                int64_t v134 = 0; // 0x4a00eb
                int64_t v135 = 2; // 0x4a00eb
                int64_t v136 = 0; // 0x4a00eb
                if (v126 != 0) {
                    int64_t v137 = 0;
                    int64_t v138 = function_498bb0((int64_t)v126); // 0x4a00f8
                    int64_t v139 = v137 + v130;
                    *(char *)(v139 + 7) = 3;
                    *(char *)(v139 + 6) = (char)v138;
                    int64_t v140 = function_498bb0((int64_t)*(int32_t *)(v137 + v125)); // 0x4a010d
                    *(char *)(v139 + 9) = 1;
                    *(char *)(v139 + 8) = (char)v140;
                    int64_t v141 = v137 + 4; // 0x4a011d
                    int32_t v142 = *(int32_t *)(v141 + v125); // 0x4a0121
                    int32_t v143 = v142; // 0x4a0128
                    while (v142 != 0) {
                        // 0x4a00f8
                        v137 = v141;
                        v138 = function_498bb0((int64_t)v143);
                        v139 = v137 + v130;
                        *(char *)(v139 + 7) = 3;
                        *(char *)(v139 + 6) = (char)v138;
                        v140 = function_498bb0((int64_t)*(int32_t *)(v137 + v125));
                        *(char *)(v139 + 9) = 1;
                        *(char *)(v139 + 8) = (char)v140;
                        v141 = v137 + 4;
                        v142 = *(int32_t *)(v141 + v125);
                        v143 = v142;
                    }
                    uint64_t v144 = v137 + 6; // 0x4a012a
                    v132 = v137 + 10;
                    v133 = v141 / 256;
                    v134 = v141 & 0xfffffffc;
                    v135 = v144 & 0xfffffffe;
                    v136 = v144 / 256;
                }
                // 0x4a0143
                *(char *)v130 = 0;
                *(char *)(v130 + 1) = 13;
                *(char *)(v130 + 2) = (char)v136;
                *(char *)(v130 + 3) = (char)v135;
                *(char *)(v130 + 4) = (char)v133;
                *(char *)(v130 + 5) = (char)v134;
                v20 = (char *)(*v6 + (int64_t)"le");
                v124 = v132;
                goto lab_0x49f5ea;
            }
        }
    } else {
        goto lab_0x49f5ea;
    }
  lab_0x49f583:
    // 0x49f583
    function_49e770(result, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t *)78, "buffer too small", v98);
    v100 = *v6 + (int64_t)"le";
    goto lab_0x49f5c1;
  lab_0x49f5ea:
    // 0x49f5ea
    v16 = (int32_t)v124 + (int32_t)v104;
    function_49e770(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t *)263, "client hello, adding supported_elliptic_curves extension", v98);
    int64_t v145 = *(int64_t *)(result + 240); // 0x49f61d
    int32_t v146 = *(int32_t *)v145; // 0x49f624
    int32_t v147 = v146; // 0x49f629
    int64_t v148 = 0; // 0x49f629
    v25 = v146;
    v24 = 0;
    if (v146 != 0) {
        while (function_4ba4b0(v147) != 0) {
            int64_t v149 = v148 + 2; // 0x49f630
            int32_t v150 = *(int32_t *)(2 * v149 + v145); // 0x49f634
            v147 = v150;
            v148 = v149;
            v25 = 0;
            v24 = v149;
            if (v150 == 0) {
                goto lab_0x49fa70;
            }
        }
        // 0x49f64b
        function_49e770(result, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t *)275, "invalid curve in ssl configuration", v98);
        v22 = v16;
        v23 = 0;
        goto lab_0x49f66e;
    } else {
        goto lab_0x49fa70;
    }
  lab_0x4a023c:
    // 0x4a023c
    function_49e770(result, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t *)192, "buffer too small", v98);
    v20 = (char *)(*v6 + (int64_t)"le");
    v124 = 0;
    goto lab_0x49f5ea;
  lab_0x49f66e:;
    int64_t v151 = v23 + v22; // 0x49f690
    uint64_t v152 = v151 + v18; // 0x49f69b
    function_49e770(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t *)326, "client hello, adding supported_point_formats extension", v98);
    uint64_t v153 = *v6 + (int64_t)"le"; // 0x49f6a5
    int64_t v154; // 0x49f120
    if (v153 < v152 || v153 - v152 < 6) {
        // 0x49fa40
        function_49e770(result, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t *)330, "buffer too small", v98);
        v154 = 0;
    } else {
        // 0x49f6c5
        *(char *)v152 = 0;
        *(char *)(v152 + 1) = 11;
        *(char *)(v152 + 2) = 0;
        *(char *)(v152 + 3) = 2;
        *(char *)(v152 + 4) = 1;
        *(char *)(v152 + 5) = 0;
        v154 = 6;
    }
    int64_t v155 = v154 + v151; // 0x49f6e2
    int64_t v156 = *v6; // 0x49f6e5
    int64_t v157 = v156 + (int64_t)"le"; // 0x49f6f3
    int16_t * v158 = (int16_t *)v9; // 0x49f6fa
    int64_t v159 = v156; // 0x49f703
    int64_t v160 = 0; // 0x49f703
    int64_t v161 = v157; // 0x49f703
    if ((*v158 & (int16_t)&g41) != 0) {
        uint64_t v162 = v155 + v18; // 0x49fc98
        function_49e770(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t *)440, "client hello, adding max_fragment_length extension", v98);
        if (v157 < v162 || v157 - v162 < 5) {
            // 0x49fe06
            function_49e770(result, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t *)444, "buffer too small", v98);
            int64_t v163 = *v6; // 0x49fe28
            v159 = v163;
            v160 = (int32_t)"/home/richard/code/mbedtls/library/ssl_cli.c" ^ (int32_t)"/home/richard/code/mbedtls/library/ssl_cli.c";
            v161 = v163 + (int64_t)"le";
        } else {
            // 0x49fcd5
            *(char *)v162 = 0;
            *(char *)(v162 + 1) = 1;
            *(char *)(v162 + 2) = 0;
            *(char *)(v162 + 3) = 1;
            *(char *)(v162 + 4) = (char)(*v158 / 128) % 8;
            int64_t v164 = *v6; // 0x49fd03
            v159 = v164;
            v160 = 5;
            v161 = v164 + (int64_t)"le";
        }
    }
    int64_t v165 = v161;
    int64_t v166 = v160 + v155; // 0x49f709
    char * v167 = (char *)(result + 373); // 0x49f70c
    char v168 = *v167; // 0x49f70c
    int64_t v169 = v159; // 0x49f717
    int64_t v170 = 0; // 0x49f717
    char v171 = v168; // 0x49f717
    int64_t v172 = v165; // 0x49f717
    if (v168 < 0) {
        uint64_t v173 = v166 + v18; // 0x49fb90
        function_49e770(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t *)474, "client hello, adding truncated_hmac extension", v98);
        if (v165 < v173 || v165 - v173 < 4) {
            // 0x49fdc3
            function_49e770(result, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t *)478, "buffer too small", v98);
            int64_t v174 = *v6; // 0x49fde5
            v169 = v174;
            v170 = 0;
            v171 = *v167;
            v172 = v174 + (int64_t)"le";
        } else {
            // 0x49fbcc
            *(char *)v173 = 0;
            *(char *)(v173 + 1) = 4;
            *(char *)(v173 + 2) = 0;
            *(char *)(v173 + 3) = 0;
            int64_t v175 = *v6; // 0x49fbe4
            v169 = v175;
            v170 = 4;
            v171 = *v167;
            v172 = v175 + (int64_t)"le";
        }
    }
    int64_t v176 = v172;
    int64_t v177 = v171;
    int64_t v178 = v170 + v166; // 0x49f71d
    int64_t v179 = v169; // 0x49f725
    int64_t v180 = 0; // 0x49f725
    int64_t v181 = v177; // 0x49f725
    int64_t v182 = v176; // 0x49f725
    if ((v177 & 4) != 0) {
        // 0x49f727
        v179 = v169;
        v180 = 0;
        v181 = v177;
        v182 = v176;
        if (*v8 != 0) {
            uint64_t v183 = v178 + v18; // 0x49fff8
            function_49e770(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t *)508, "client hello, adding encrypt_then_mac extension", v98);
            if (v176 < v183 || v176 - v183 < 4) {
                // 0x4a01f9
                function_49e770(result, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g23, "buffer too small", v98);
                int64_t v184 = *v6; // 0x4a021b
                v179 = v184;
                v180 = (int32_t)&g23 ^ (int32_t)&g23;
                v181 = (int64_t)*v167;
                v182 = v184 + (int64_t)"le";
            } else {
                // 0x4a0034
                *(char *)v183 = 0;
                *(char *)(v183 + 1) = 22;
                *(char *)(v183 + 2) = 0;
                *(char *)(v183 + 3) = 0;
                int64_t v185 = *v6; // 0x4a004c
                v179 = v185;
                v180 = 4;
                v181 = (int64_t)*v167;
                v182 = v185 + (int64_t)"le";
            }
        }
    }
    int64_t v186 = v182;
    int64_t v187 = v180 + v178; // 0x49f734
    int64_t v188 = v179; // 0x49f73c
    int64_t v189 = 0; // 0x49f73c
    int64_t v190 = v186; // 0x49f73c
    if ((v181 & 8) != 0) {
        // 0x49f73e
        v188 = v179;
        v189 = 0;
        v190 = v186;
        if (*v8 != 0) {
            uint64_t v191 = v187 + v18; // 0x49ff8c
            function_49e770(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t *)542, "client hello, adding extended_master_secret extension", v98);
            if (v186 < v191 || v186 - v191 < 4) {
                // 0x4a01bd
                function_49e770(result, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g24, "buffer too small", v98);
                int64_t v192 = *v6;
                v188 = v192;
                v189 = (int32_t)&g24 ^ (int32_t)&g24;
                v190 = v192 + (int64_t)"le";
            } else {
                // 0x49ffc8
                *(char *)v191 = 0;
                *(char *)(v191 + 1) = 23;
                *(char *)(v191 + 2) = 0;
                *(char *)(v191 + 3) = 0;
                int64_t v193 = *v6;
                v188 = v193;
                v189 = 4;
                v190 = v193 + (int64_t)"le";
            }
        }
    }
    int64_t v194 = v190;
    int64_t v195 = v189 + v187; // 0x49f74b
    int64_t v196 = result; // 0x49f767
    int64_t v197 = 0; // 0x49f767
    int64_t v198 = v194; // 0x49f767
    if (v188 != 0) {
        // 0x49f76d
        function_49e770(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g28, "client hello, adding alpn extension", v98);
        int64_t v199 = *v6; // 0x49f796
        int64_t str2 = *(int64_t *)v199; // 0x49f79d
        int64_t * v200 = (int64_t *)328; // 0x49f7a3
        int64_t v201 = 6; // 0x49f7a3
        if (str2 != 0) {
            int64_t v202 = v199 + 8; // 0x49f7a8
            uint32_t len2 = strlen((char *)str2); // 0x49f7ac
            int64_t v203 = *(int64_t *)v202; // 0x49f7b1
            int64_t v204 = 1 + (int64_t)(len2 % 256); // 0x49f7b7
            int64_t str3 = v203; // 0x49f7bf
            int64_t v205 = v202; // 0x49f7bf
            int64_t v206 = v204; // 0x49f7bf
            while (v203 != 0) {
                // 0x49f7a8
                v202 = v205 + 8;
                len2 = strlen((char *)str3);
                v203 = *(int64_t *)v202;
                v204 = v206 + 1 + (int64_t)(len2 % 256);
                str3 = v203;
                v205 = v202;
                v206 = v204;
            }
            // 0x49f7c1
            v200 = (int64_t *)(v203 + 328);
            v201 = v204 + 6;
        }
        uint64_t v207 = v195 + v18; // 0x49f758
        if (v194 < v207 || v194 - v207 < v201) {
            // 0x49fb20
            function_49e770(result, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g29, "buffer too small", v98);
            v196 = result;
            v197 = (int32_t)"/home/richard/code/mbedtls/library/ssl_cli.c" ^ (int32_t)"/home/richard/code/mbedtls/library/ssl_cli.c";
            v198 = *v6 + (int64_t)"le";
        } else {
            // 0x49f7de
            *(char *)v207 = 0;
            *(char *)(v207 + 1) = 16;
            int64_t v208 = v207 + 6; // 0x49f7f1
            int64_t v209 = *v200; // 0x49f7f5
            int64_t str4 = *(int64_t *)v209; // 0x49f7fc
            int64_t v210 = v208; // 0x49f802
            int64_t v211 = 0; // 0x49f802
            if (str4 != 0) {
                uint32_t len3 = strlen((char *)str4); // 0x49f808
                char * v212 = (char *)v208; // 0x49f80d
                *v212 = (char)len3;
                int64_t v213 = v208 + 1; // 0x49f813
                int64_t v214 = v209 + 8; // 0x49f81a
                memcpy((int64_t *)v213, (int64_t *)*(int64_t *)v209, len3 % 256);
                int64_t v215 = *(int64_t *)v214; // 0x49f827
                int64_t v216 = v213 + (int64_t)*v212; // 0x49f82d
                int64_t v217 = v216; // 0x49f832
                int64_t str5 = v215; // 0x49f832
                int64_t v218 = v214; // 0x49f832
                v210 = v216;
                v211 = v215;
                while (v215 != 0) {
                    // 0x49f808
                    len3 = strlen((char *)str5);
                    v212 = (char *)v217;
                    *v212 = (char)len3;
                    v213 = v217 + 1;
                    v214 = v218 + 8;
                    memcpy((int64_t *)v213, (int64_t *)*(int64_t *)v218, len3 % 256);
                    v215 = *(int64_t *)v214;
                    v216 = v213 + (int64_t)*v212;
                    v217 = v216;
                    str5 = v215;
                    v218 = v214;
                    v210 = v216;
                    v211 = v215;
                }
            }
            int64_t v219 = v210 - v207; // 0x49f837
            *(char *)(v207 + 4) = (char)((v219 + 0xfffa) / 256);
            char v220 = v219;
            *(char *)(v207 + 3) = v220 - 4;
            *(char *)(v207 + 5) = v220 - 6;
            *(char *)(v207 + 2) = (char)((v219 + 0xfffc) / 256);
            v196 = v211;
            v197 = v219;
            v198 = *v6 + (int64_t)"le";
        }
    }
    int64_t v221 = v197 + (0x100000000 * v195 >> 32); // 0x49f885
    uint64_t v222 = *(int64_t *)(*v66 + 128); // 0x49f894
    int64_t v223 = 0; // 0x49f89b
    if (*(char *)(v196 + 374) % 2 != 0) {
        uint64_t v224 = v221 + v18; // 0x49fc08
        function_49e770(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g25, "client hello, adding session ticket extension", v98);
        if (v198 < v224) {
            // 0x49fd99
            function_49e770(result, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g26, "buffer too small", v98);
            v223 = 0;
            goto lab_0x49f8a1;
        } else {
            int64_t v225 = v222 + 4; // 0x49fc4c
            if (v198 - v224 < v225) {
                // 0x49fd99
                function_49e770(result, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g26, "buffer too small", v98);
                v223 = 0;
                goto lab_0x49f8a1;
            } else {
                // 0x49fc5c
                *(char *)v224 = 0;
                *(char *)(v224 + 1) = 35;
                *(char *)(v224 + 3) = (char)v222;
                *(char *)(v224 + 2) = (char)(v222 / 256);
                v223 = 4;
                if (v222 != 0 == (*(int64_t *)(*v66 + 120) != 0)) {
                    // 0x4a02fb
                    function_49e770(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g27, "sending session ticket of length %d", v222);
                    int64_t v226 = *(int64_t *)(*v66 + 120); // 0x4a0339
                    memcpy((int64_t *)(v224 + 4), (int64_t *)v226, (int32_t)v222);
                    v223 = v225;
                }
                goto lab_0x49f8a1;
            }
        }
    } else {
        goto lab_0x49f8a1;
    }
  lab_0x49fd6f:
    // 0x49fd6f
    function_49e770(result, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t *)284, "buffer too small", v98);
    v22 = v17;
    v23 = 0;
    goto lab_0x49f66e;
  lab_0x49f8a1:;
    uint64_t v227 = v223 + v221; // 0x49f8a1
    function_49e770(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g51, "client hello, total extension length: %d", v227);
    int64_t v228 = v97; // 0x49f8cc
    if (v227 != 0) {
        // 0x49f8ce
        *(char *)(v95 + 3) = (char)v227;
        *(char *)v97 = (char)(v227 / 256);
        v228 = v227 + v18;
    }
    // 0x49f8e4
    *(int32_t *)(result + 336) = 22;
    *(int64_t *)(result + 344) = v228 - v7;
    *(char *)*v6 = 1;
    int32_t * v229 = (int32_t *)(result + 8); // 0x49f90c
    *v229 = *v229 + 1;
    if ((*v10 & 2) != 0) {
        // 0x49fe4c
        function_4967e0(result);
    }
    int64_t v230 = function_498d40(result); // 0x49f922
    int64_t result3 = v230 & 0xffffffff; // 0x49f929
    if ((int32_t)v230 != 0) {
        // 0x49fb60
        function_49e8b0(result, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g52, "mbedtls_ssl_write_record", result3);
    } else {
        // 0x49f931
        function_49e770(result, 2, "/home/richard/code/mbedtls/library/ssl_cli.c", &g53, "<= write client hello", v227);
    }
    // 0x49f953
    return result3;
}

// Address range: 0x4cb560 - 0x4cc7cd
int64_t function_4cb560(int64_t a1, int64_t a2) {
    unsigned char v1 = *(char *)(a2 + 1); // 0x4cb56d
    unsigned char v2 = *(char *)(a2 + 4); // 0x4cb571
    unsigned char v3 = *(char *)(a2 + 8); // 0x4cb576
    unsigned char v4 = *(char *)(a2 + 12); // 0x4cb57b
    unsigned char v5 = *(char *)(a2 + 16); // 0x4cb580
    unsigned char v6 = *(char *)(a2 + 20); // 0x4cb58d
    unsigned char v7 = *(char *)(a2 + 24); // 0x4cb591
    unsigned char v8 = *(char *)(a2 + 28); // 0x4cb59c
    unsigned char v9 = *(char *)(a2 + 3); // 0x4cb5a2
    unsigned char v10 = *(char *)(a2 + 33); // 0x4cb5b2
    unsigned char v11 = *(char *)(a2 + 2); // 0x4cb5bb
    int64_t v12; // 0x4cb560
    int64_t v13 = 0x10000 * (int64_t)v1 | 0x1000000 * v12 & 0xff000000 | (int64_t)v9 | 256 * (int64_t)v11; // 0x4cb5c2
    unsigned char v14 = *(char *)(a2 + 5); // 0x4cb5c4
    unsigned char v15 = *(char *)(a2 + 7); // 0x4cb5ce
    unsigned char v16 = *(char *)(a2 + 6); // 0x4cb5d5
    int64_t v17 = 0x10000 * (int64_t)v14 | 0x1000000 * (int64_t)v2 | (int64_t)v15 | 256 * (int64_t)v16; // 0x4cb5dc
    unsigned char v18 = *(char *)(a2 + 9); // 0x4cb5df
    unsigned char v19 = *(char *)(a2 + 11); // 0x4cb5e9
    unsigned char v20 = *(char *)(a2 + 10); // 0x4cb5f0
    int64_t v21 = 0x10000 * (int64_t)v18 | 0x1000000 * (int64_t)v3 | (int64_t)v19 | 256 * (int64_t)v20; // 0x4cb5f7
    unsigned char v22 = *(char *)(a2 + 13); // 0x4cb5fa
    unsigned char v23 = *(char *)(a2 + 15); // 0x4cb604
    unsigned char v24 = *(char *)(a2 + 14); // 0x4cb60b
    int64_t v25 = 0x10000 * (int64_t)v22 | 0x1000000 * (int64_t)v4 | (int64_t)v23 | 256 * (int64_t)v24; // 0x4cb612
    unsigned char v26 = *(char *)(a2 + 17); // 0x4cb615
    unsigned char v27 = *(char *)(a2 + 19); // 0x4cb61f
    unsigned char v28 = *(char *)(a2 + 18); // 0x4cb626
    int64_t v29 = 0x10000 * (int64_t)v26 | 0x1000000 * (int64_t)v5 | (int64_t)v27 | 256 * (int64_t)v28; // 0x4cb62d
    unsigned char v30 = *(char *)(a2 + 21); // 0x4cb630
    unsigned char v31 = *(char *)(a2 + 23); // 0x4cb639
    unsigned char v32 = *(char *)(a2 + 22); // 0x4cb63f
    int64_t v33 = 0x10000 * (int64_t)v30 | 0x1000000 * (int64_t)v6 | (int64_t)v31 | 256 * (int64_t)v32; // 0x4cb64f
    unsigned char v34 = *(char *)(a2 + 25); // 0x4cb651
    unsigned char v35 = *(char *)(a2 + 27); // 0x4cb65a
    unsigned char v36 = *(char *)(a2 + 26); // 0x4cb660
    int64_t v37 = 0x10000 * (int64_t)v34 | 0x1000000 * (int64_t)v7 | (int64_t)v35 | 256 * (int64_t)v36; // 0x4cb667
    unsigned char v38 = *(char *)(a2 + 29); // 0x4cb669
    unsigned char v39 = *(char *)(a2 + 31); // 0x4cb672
    unsigned char v40 = *(char *)(a2 + 30); // 0x4cb678
    int64_t v41 = 0x10000 * (int64_t)v38 | 0x1000000 * (int64_t)v8 | (int64_t)v39 | 256 * (int64_t)v40; // 0x4cb67f
    unsigned char v42 = *(char *)(a2 + 32); // 0x4cb681
    unsigned char v43 = *(char *)(a2 + 35); // 0x4cb68a
    unsigned char v44 = *(char *)(a2 + 34); // 0x4cb690
    int64_t v45 = 0x1000000 * (int64_t)v42 | 0x10000 * (int64_t)v10 | (int64_t)v43 | 256 * (int64_t)v44; // 0x4cb697
    unsigned char v46 = *(char *)(a2 + 36); // 0x4cb699
    unsigned char v47 = *(char *)(a2 + 37); // 0x4cb6a4
    unsigned char v48 = *(char *)(a2 + 40); // 0x4cb6a8
    unsigned char v49 = *(char *)(a2 + 39); // 0x4cb6b4
    unsigned char v50 = *(char *)(a2 + 38); // 0x4cb6bc
    int32_t v51 = 0x10000 * (int32_t)v47 | 0x1000000 * (int32_t)v46 | (int32_t)v49 | 256 * (int32_t)v50; // 0x4cb6c7
    unsigned char v52 = *(char *)(a2 + 41); // 0x4cb6cb
    unsigned char v53 = *(char *)(a2 + 43); // 0x4cb6d5
    unsigned char v54 = *(char *)(a2 + 42); // 0x4cb6dc
    int32_t v55 = 0x10000 * (int32_t)v52 | 0x1000000 * (int32_t)v48 | (int32_t)v53 | 256 * (int32_t)v54; // 0x4cb6e3
    unsigned char v56 = *(char *)(a2 + 44); // 0x4cb6e6
    unsigned char v57 = *(char *)(a2 + 48); // 0x4cb6ef
    unsigned char v58 = *(char *)(a2 + 45); // 0x4cb6fb
    unsigned char v59 = *(char *)(a2 + 47); // 0x4cb70a
    unsigned char v60 = *(char *)(a2 + 46); // 0x4cb712
    int32_t v61 = 0x10000 * (int32_t)v58 | 0x1000000 * (int32_t)v56 | (int32_t)v59 | 256 * (int32_t)v60; // 0x4cb719
    unsigned char v62 = *(char *)(a2 + 49); // 0x4cb71d
    unsigned char v63 = *(char *)(a2 + 51); // 0x4cb727
    unsigned char v64 = *(char *)(a2 + 50); // 0x4cb72e
    int32_t v65 = 0x10000 * (int32_t)v62 | 0x1000000 * (int32_t)v57 | (int32_t)v63 | 256 * (int32_t)v64; // 0x4cb735
    unsigned char v66 = *(char *)(a2 + 52); // 0x4cb738
    unsigned char v67 = *(char *)(a2 + 53); // 0x4cb748
    unsigned char v68 = *(char *)(a2 + 55); // 0x4cb753
    unsigned char v69 = *(char *)(a2 + 54); // 0x4cb75b
    unsigned char v70 = *(char *)(a2 + 56); // 0x4cb75f
    int32_t v71 = 0x10000 * (int32_t)v67 | 0x1000000 * (int32_t)v66 | (int32_t)v68 | 256 * (int32_t)v69; // 0x4cb767
    unsigned char v72 = *(char *)(a2 + 57); // 0x4cb76b
    unsigned char v73 = *(char *)(a2 + 59); // 0x4cb779
    unsigned char v74 = *(char *)(a2 + 58); // 0x4cb780
    int32_t v75 = 0x10000 * (int32_t)v72 | 0x1000000 * (int32_t)v70 | (int32_t)v73 | 256 * (int32_t)v74; // 0x4cb787
    unsigned char v76 = *(char *)(a2 + 60); // 0x4cb78a
    int32_t * v77 = (int32_t *)(a1 + 8); // 0x4cb79b
    uint32_t v78 = *v77; // 0x4cb79b
    unsigned char v79 = *(char *)(a2 + 61); // 0x4cb7a3
    unsigned char v80 = *(char *)(a2 + 63); // 0x4cb7b8
    unsigned char v81 = *(char *)(a2 + 62); // 0x4cb7bc
    int32_t * v82 = (int32_t *)(a1 + 20); // 0x4cb7c9
    int32_t v83 = *v82; // 0x4cb7c9
    int32_t v84 = 0x10000 * (int32_t)v79 | 0x1000000 * (int32_t)v76 | (int32_t)v80 | 256 * (int32_t)v81; // 0x4cb7d0
    int32_t * v85 = (int32_t *)(a1 + 16); // 0x4cb7d9
    int32_t v86 = *v85; // 0x4cb7d9
    int32_t * v87 = (int32_t *)(a1 + 12); // 0x4cb7dc
    uint32_t v88 = *v87; // 0x4cb7dc
    int32_t * v89 = (int32_t *)(a1 + 24); // 0x4cb7fb
    int32_t v90 = *v89; // 0x4cb7fb
    int32_t v91 = v88 / 4 | 0x40000000 * v88; // 0x4cb823
    int32_t v92 = v78 / 4 | 0x40000000 * v78; // 0x4cb827
    uint32_t v93 = (int32_t)v13 + 0x5a827999 + (v78 / 0x8000000 | 32 * v78) + v90 + ((v86 ^ v83) & v88 ^ v83); // 0x4cb832
    uint32_t v94 = (int32_t)v17 + 0x5a827999 + v83 + ((v91 ^ v86) & v78 ^ v86) + (v93 / 0x8000000 | 32 * v93); // 0x4cb851
    int32_t v95 = v93 / 4 | 0x40000000 * v93; // 0x4cb868
    uint32_t v96 = (int32_t)v21 + 0x5a827999 + v86 + (v93 & (v91 ^ v92) ^ v91) + (v94 / 0x8000000 | 32 * v94); // 0x4cb881
    int32_t v97 = v94 / 4 | 0x40000000 * v94; // 0x4cb88c
    uint32_t v98 = (int32_t)v25 + 0x5a827999 + v91 + (v94 & (v95 ^ v92) ^ v92) + (v96 / 0x8000000 | 32 * v96); // 0x4cb8a4
    int32_t v99 = v96 / 4 | 0x40000000 * v96; // 0x4cb8af
    uint32_t v100 = (int32_t)v29 + 0x5a827999 + v92 + ((v97 ^ v95) & v96 ^ v95) + (v98 / 0x8000000 | 32 * v98); // 0x4cb8c8
    int32_t v101 = v98 / 4 | 0x40000000 * v98; // 0x4cb8d3
    uint32_t v102 = (int32_t)v33 + 0x5a827999 + v95 + ((v99 ^ v97) & v98 ^ v97) + (v100 / 0x8000000 | 32 * v100); // 0x4cb8ea
    int32_t v103 = v100 / 4 | 0x40000000 * v100; // 0x4cb8f6
    int32_t v104 = v41;
    uint32_t v105 = (int32_t)v37 + 0x5a827999 + v97 + ((v101 ^ v99) & v100 ^ v99) + (v102 / 0x8000000 | 32 * v102); // 0x4cb90d
    int32_t v106 = v102 / 4 | 0x40000000 * v102; // 0x4cb918
    int32_t v107 = v45;
    uint32_t v108 = v104 + 0x5a827999 + v99 + ((v103 ^ v101) & v102 ^ v101) + (v105 / 0x8000000 | 32 * v105); // 0x4cb931
    int32_t v109 = v105 / 4 | 0x40000000 * v105; // 0x4cb93c
    uint32_t v110 = v107 + 0x5a827999 + v101 + ((v106 ^ v103) & v105 ^ v103) + (v108 / 0x8000000 | 32 * v108); // 0x4cb94c
    uint32_t v111 = v51 + 0x5a827999 + v103 + ((v109 ^ v106) & v108 ^ v106) + (v110 / 0x8000000 | 32 * v110); // 0x4cb970
    int32_t v112 = v108 / 4 | 0x40000000 * v108; // 0x4cb977
    int32_t v113 = v110 / 4 | 0x40000000 * v110; // 0x4cb98b
    uint32_t v114 = v55 + 0x5a827999 + v106 + ((v112 ^ v109) & v110 ^ v109) + (v111 / 0x8000000 | 32 * v111); // 0x4cb99b
    int32_t v115 = v111 / 4 | 0x40000000 * v111; // 0x4cb9b2
    uint32_t v116 = v61 + 0x5a827999 + v109 + ((v113 ^ v112) & v111 ^ v112) + (v114 / 0x8000000 | 32 * v114); // 0x4cb9c1
    int32_t v117 = v114 / 4 | 0x40000000 * v114; // 0x4cb9d8
    uint32_t v118 = v65 + 0x5a827999 + v112 + ((v115 ^ v113) & v114 ^ v113) + (v116 / 0x8000000 | 32 * v116); // 0x4cb9e9
    int32_t v119 = v116 / 4 | 0x40000000 * v116; // 0x4cba00
    uint32_t v120 = v71 + 0x5a827999 + v113 + ((v117 ^ v115) & v116 ^ v115) + (v118 / 0x8000000 | 32 * v118); // 0x4cba10
    int32_t v121 = v118 / 4 | 0x40000000 * v118; // 0x4cba34
    uint32_t v122 = v75 + 0x5a827999 + v115 + ((v119 ^ v117) & v118 ^ v117) + (v120 / 0x8000000 | 32 * v120); // 0x4cba3b
    int32_t v123 = v120 / 4 | 0x40000000 * v120; // 0x4cba54
    uint32_t v124 = v84 + 0x5a827999 + v117 + ((v121 ^ v119) & v120 ^ v119) + (v122 / 0x8000000 | 32 * v122); // 0x4cba64
    int32_t v125 = v71 ^ (int32_t)(v21 ^ v13 ^ v45); // 0x4cba6b
    int32_t v126 = 2 * v125 | (int32_t)(v125 < 0); // 0x4cba70
    int32_t v127 = v51 ^ (int32_t)(v25 ^ v17) ^ v75; // 0x4cba8d
    int32_t v128 = v122 / 4 | 0x40000000 * v122; // 0x4cba94
    uint32_t v129 = v126 + 0x5a827999 + v119 + ((v123 ^ v121) & v122 ^ v121) + (v124 / 0x8000000 | 32 * v124); // 0x4cbaa0
    int32_t v130 = 2 * v127 | (int32_t)(v127 < 0); // 0x4cbaa5
    int32_t v131 = v124 / 4 | 0x40000000 * v124; // 0x4cbabb
    uint32_t v132 = v130 + 0x5a827999 + v121 + ((v128 ^ v123) & v124 ^ v123) + (v129 / 0x8000000 | 32 * v129); // 0x4cbacc
    int32_t v133 = v55 ^ (int32_t)(v29 ^ v21) ^ v84; // 0x4cbad7
    int32_t v134 = v129 / 4 | 0x40000000 * v129; // 0x4cbae1
    int32_t v135 = 2 * v133 | (int32_t)(v133 < 0); // 0x4cbae7
    int32_t v136 = v61 ^ (int32_t)(v33 ^ v25) ^ v126; // 0x4cbafd
    uint32_t v137 = v135 + 0x5a827999 + v123 + ((v131 ^ v128) & v129 ^ v128) + (v132 / 0x8000000 | 32 * v132); // 0x4cbb0c
    int32_t v138 = 2 * v136 | (int32_t)(v136 < 0); // 0x4cbb14
    int32_t v139 = v132 / 4 | 0x40000000 * v132; // 0x4cbb1a
    uint32_t v140 = v138 + 0x5a827999 + v128 + ((v134 ^ v131) & v132 ^ v131) + (v137 / 0x8000000 | 32 * v137); // 0x4cbb3e
    int32_t v141 = v65 ^ (int32_t)(v37 ^ v29) ^ v130; // 0x4cbb44
    int32_t v142 = 2 * v141 | (int32_t)(v141 < 0); // 0x4cbb49
    int32_t v143 = v137 / 4 | 0x40000000 * v137; // 0x4cbb4f
    uint32_t v144 = v142 + 0x6ed9eba1 + v131 + (v139 ^ v134 ^ v137) + (v140 / 0x8000000 | 32 * v140); // 0x4cbb70
    int32_t v145 = v71 ^ (int32_t)(v41 ^ v33) ^ v135; // 0x4cbb76
    int32_t v146 = 2 * v145 | (int32_t)(v145 < 0); // 0x4cbb7c
    int32_t v147 = v140 / 4 | 0x40000000 * v140; // 0x4cbb82
    int32_t v148 = v144 / 4 | 0x40000000 * v144; // 0x4cbba7
    uint32_t v149 = v146 + 0x6ed9eba1 + v134 + (v143 ^ v139 ^ v140) + (v144 / 0x8000000 | 32 * v144); // 0x4cbbab
    int32_t v150 = v75 ^ (int32_t)(v45 ^ v37) ^ v138; // 0x4cbbad
    int32_t v151 = 2 * v150 | (int32_t)(v150 < 0); // 0x4cbbb0
    uint32_t v152 = v151 + 0x6ed9eba1 + v139 + (v147 ^ v143 ^ v144) + (v149 / 0x8000000 | 32 * v149); // 0x4cbbce
    int32_t v153 = v149 / 4 | 0x40000000 * v149; // 0x4cbbd8
    int32_t v154 = v51 ^ v104 ^ v84 ^ v142; // 0x4cbbdb
    int32_t v155 = 2 * v154 | (int32_t)(v154 < 0); // 0x4cbbde
    uint32_t v156 = v155 + 0x6ed9eba1 + v143 + (v148 ^ v147 ^ v149) + (v152 / 0x8000000 | 32 * v152); // 0x4cbc02
    int32_t v157 = v55 ^ v107 ^ v126 ^ v146; // 0x4cbc04
    int32_t v158 = 2 * v157 | (int32_t)(v157 < 0); // 0x4cbc07
    int32_t v159 = v152 / 4 | 0x40000000 * v152; // 0x4cbc0c
    uint32_t v160 = v158 + 0x6ed9eba1 + v147 + (v153 ^ v148 ^ v152) + (v156 / 0x8000000 | 32 * v156); // 0x4cbc2b
    int32_t v161 = v61 ^ v51 ^ v130 ^ v151; // 0x4cbc2f
    int32_t v162 = 2 * v161 | (int32_t)(v161 < 0); // 0x4cbc34
    int32_t v163 = v156 / 4 | 0x40000000 * v156; // 0x4cbc39
    uint32_t v164 = v162 + 0x6ed9eba1 + v148 + (v159 ^ v153 ^ v156) + (v160 / 0x8000000 | 32 * v160); // 0x4cbc5d
    int32_t v165 = v71 ^ v61 ^ v138 ^ v158; // 0x4cbc6b
    int32_t v166 = 2 * v165 | (int32_t)(v165 < 0); // 0x4cbc6e
    int32_t v167 = v65 ^ v55 ^ v135 ^ v155; // 0x4cbc79
    int32_t v168 = 2 * v167 | (int32_t)(v167 < 0); // 0x4cbc7c
    int32_t v169 = v160 / 4 | 0x40000000 * v160; // 0x4cbc8f
    uint32_t v170 = v168 + 0x6ed9eba1 + v153 + (v163 ^ v159 ^ v160) + (v164 / 0x8000000 | 32 * v164); // 0x4cbc9a
    uint32_t v171 = v166 + 0x6ed9eba1 + v159 + (v169 ^ v163 ^ v164) + (v170 / 0x8000000 | 32 * v170); // 0x4cbcb7
    int32_t v172 = v164 / 4 | 0x40000000 * v164; // 0x4cbcc1
    int32_t v173 = v75 ^ v65 ^ v142 ^ v162; // 0x4cbcc8
    int32_t v174 = 2 * v173 | (int32_t)(v173 < 0); // 0x4cbcd0
    int32_t v175 = v170 / 4 | 0x40000000 * v170; // 0x4cbce4
    uint32_t v176 = v174 + 0x6ed9eba1 + v163 + (v172 ^ v169 ^ v170) + (v171 / 0x8000000 | 32 * v171); // 0x4cbcee
    int32_t v177 = v84 ^ v71 ^ v146 ^ v168; // 0x4cbcfb
    int32_t v178 = 2 * v177 | (int32_t)(v177 < 0); // 0x4cbd03
    int32_t v179 = v171 / 4 | 0x40000000 * v171; // 0x4cbd17
    uint32_t v180 = v178 + 0x6ed9eba1 + v169 + (v175 ^ v172 ^ v171) + (v176 / 0x8000000 | 32 * v176); // 0x4cbd21
    int32_t v181 = v75 ^ v126 ^ v151 ^ v166; // 0x4cbd2d
    int32_t v182 = 2 * v181 | (int32_t)(v181 < 0); // 0x4cbd33
    int32_t v183 = v176 / 4 | 0x40000000 * v176; // 0x4cbd4b
    uint32_t v184 = v182 + 0x6ed9eba1 + v172 + (v179 ^ v175 ^ v176) + (v180 / 0x8000000 | 32 * v180); // 0x4cbd53
    int32_t v185 = v84 ^ v130 ^ v155 ^ v174; // 0x4cbd61
    int32_t v186 = v180 / 4 | 0x40000000 * v180; // 0x4cbd6a
    int32_t v187 = v130 ^ v138 ^ v162 ^ v182; // 0x4cbd74
    int32_t v188 = 2 * v185 | (int32_t)(v185 < 0); // 0x4cbd78
    int32_t v189 = 2 * v187 | (int32_t)(v187 < 0); // 0x4cbd88
    uint32_t v190 = v188 + 0x6ed9eba1 + v175 + (v183 ^ v179 ^ v180) + (v184 / 0x8000000 | 32 * v184); // 0x4cbd8d
    int32_t v191 = v135 ^ v126 ^ v158 ^ v178; // 0x4cbda9
    int32_t v192 = 2 * v191 | (int32_t)(v191 < 0); // 0x4cbdad
    int32_t v193 = v135 ^ v142 ^ v168 ^ v188; // 0x4cbdb1
    int32_t v194 = 2 * v193 | (int32_t)(v193 < 0); // 0x4cbdb8
    int32_t v195 = v184 / 4 | 0x40000000 * v184; // 0x4cbdd6
    uint32_t v196 = v192 + 0x6ed9eba1 + v179 + (v186 ^ v183 ^ v184) + (v190 / 0x8000000 | 32 * v190); // 0x4cbdda
    int32_t v197 = v190 / 4 | 0x40000000 * v190; // 0x4cbdea
    uint32_t v198 = v189 + 0x6ed9eba1 + v183 + (v195 ^ v186 ^ v190) + (v196 / 0x8000000 | 32 * v196); // 0x4cbdf4
    int32_t v199 = v146 ^ v138 ^ v166 ^ v192; // 0x4cbe0b
    int32_t v200 = v196 / 4 | 0x40000000 * v196; // 0x4cbe19
    uint32_t v201 = v194 + 0x6ed9eba1 + v186 + (v197 ^ v195 ^ v196) + (v198 / 0x8000000 | 32 * v198); // 0x4cbe27
    int32_t v202 = 2 * v199 | (int32_t)(v199 < 0); // 0x4cbe30
    int32_t v203 = v198 / 4 | 0x40000000 * v198; // 0x4cbe3f
    int32_t v204 = v142 ^ v151 ^ v174 ^ v189; // 0x4cbe42
    int32_t v205 = 2 * v204 | (int32_t)(v204 < 0); // 0x4cbe4b
    int32_t v206 = v146 ^ v155 ^ v178 ^ v194; // 0x4cbe52
    uint32_t v207 = v202 + 0x6ed9eba1 + v195 + (v200 ^ v197 ^ v198) + (v201 / 0x8000000 | 32 * v201); // 0x4cbe55
    int32_t v208 = 2 * v206 | (int32_t)(v206 < 0); // 0x4cbe64
    int32_t v209 = v201 / 4 | 0x40000000 * v201; // 0x4cbe69
    uint32_t v210 = v205 + 0x6ed9eba1 + v197 + (v203 ^ v200 ^ v201) + (v207 / 0x8000000 | 32 * v207); // 0x4cbe74
    int32_t v211 = v207 / 4 | 0x40000000 * v207; // 0x4cbe8f
    uint32_t v212 = v208 + 0x6ed9eba1 + v200 + (v209 ^ v203 ^ v207) + (v210 / 0x8000000 | 32 * v210); // 0x4cbe93
    int32_t v213 = v158 ^ v151 ^ v182 ^ v202; // 0x4cbe9b
    int32_t v214 = 2 * v213 | (int32_t)(v213 < 0); // 0x4cbe9e
    int32_t v215 = v210 / 4 | 0x40000000 * v210; // 0x4cbebc
    int32_t v216 = v155 ^ v162 ^ v188 ^ v205; // 0x4cbecb
    int32_t v217 = 2 * v216 | (int32_t)(v216 < 0); // 0x4cbed2
    uint32_t v218 = v214 + 0x6ed9eba1 + v203 + (v211 ^ v209 ^ v210) + (v212 / 0x8000000 | 32 * v212); // 0x4cbedd
    int32_t v219 = v212 / 4 | 0x40000000 * v212; // 0x4cbef7
    uint32_t v220 = v217 + 0x6ed9eba1 + v209 + (v215 ^ v211 ^ v212) + (v218 / 0x8000000 | 32 * v218); // 0x4cbefd
    int32_t v221 = v158 ^ v168 ^ v192 ^ v208; // 0x4cbf0d
    int32_t v222 = 2 * v221 | (int32_t)(v221 < 0); // 0x4cbf10
    uint32_t v223 = v222 - 0x70e44324 + v211 + ((v218 | v219) & v215 | v218 & v219) + (v220 / 0x8000000 | 32 * v220); // 0x4cbf3b
    int32_t v224 = v218 / 4 | 0x40000000 * v218; // 0x4cbf42
    int32_t v225 = v166 ^ v162 ^ v189 ^ v214; // 0x4cbf4c
    int32_t v226 = 2 * v225 | (int32_t)(v225 < 0); // 0x4cbf57
    int32_t v227 = v220 / 4 | 0x40000000 * v220; // 0x4cbf6f
    uint32_t v228 = v226 - 0x70e44324 + v215 + ((v220 | v224) & v219 | v220 & v224) + (v223 / 0x8000000 | 32 * v223); // 0x4cbf88
    int32_t v229 = v168 ^ v174 ^ v194 ^ v217; // 0x4cbf91
    int32_t v230 = 2 * v229 | (int32_t)(v229 < 0); // 0x4cbf93
    int32_t v231 = v223 / 4 | 0x40000000 * v223; // 0x4cbfad
    uint32_t v232 = v230 - 0x70e44324 + v219 + ((v223 | v227) & v224 | v223 & v227) + (v228 / 0x8000000 | 32 * v228); // 0x4cbfc2
    int32_t v233 = v166 ^ v178 ^ v202 ^ v222; // 0x4cbfc7
    int32_t v234 = 2 * v233 | (int32_t)(v233 < 0); // 0x4cbfcd
    uint32_t v235 = v234 - 0x70e44324 + v224 + ((v228 | v231) & v227 | v228 & v231) + (v232 / 0x8000000 | 32 * v232); // 0x4cbffe
    int32_t v236 = v228 / 4 | 0x40000000 * v228; // 0x4cc001
    int32_t v237 = v182 ^ v174 ^ v205 ^ v226; // 0x4cc00a
    int32_t v238 = 2 * v237 | (int32_t)(v237 < 0); // 0x4cc00e
    int32_t v239 = v232 / 4 | 0x40000000 * v232; // 0x4cc02c
    int32_t v240 = v235 / 4 | 0x40000000 * v235; // 0x4cc032
    uint32_t v241 = v238 - 0x70e44324 + v227 + ((v232 | v236) & v231 | v232 & v236) + (v235 / 0x8000000 | 32 * v235); // 0x4cc041
    int32_t v242 = v178 ^ v188 ^ v208 ^ v230; // 0x4cc04a
    int32_t v243 = 2 * v242 | (int32_t)(v242 < 0); // 0x4cc04f
    uint32_t v244 = v243 - 0x70e44324 + v231 + ((v235 | v239) & v236 | v235 & v239) + (v241 / 0x8000000 | 32 * v241); // 0x4cc083
    int32_t v245 = v182 ^ v192 ^ v214 ^ v234; // 0x4cc08e
    int32_t v246 = 2 * v245 | (int32_t)(v245 < 0); // 0x4cc092
    int32_t v247 = v189 ^ v188 ^ v217 ^ v238; // 0x4cc0aa
    int32_t v248 = v241 / 4 | 0x40000000 * v241; // 0x4cc0c1
    int32_t v249 = 2 * v247 | (int32_t)(v247 < 0); // 0x4cc0d1
    uint32_t v250 = v246 - 0x70e44324 + v236 + ((v241 | v240) & v239 | v241 & v240) + (v244 / 0x8000000 | 32 * v244); // 0x4cc0d5
    int32_t v251 = v244 / 4 | 0x40000000 * v244; // 0x4cc0e7
    uint32_t v252 = v249 - 0x70e44324 + v239 + ((v244 | v248) & v240 | v244 & v248) + (v250 / 0x8000000 | 32 * v250); // 0x4cc0fb
    int32_t v253 = v192 ^ v194 ^ v222 ^ v243; // 0x4cc109
    int32_t v254 = 2 * v253 | (int32_t)(v253 < 0); // 0x4cc10d
    int32_t v255 = v250 / 4 | 0x40000000 * v250; // 0x4cc12a
    uint32_t v256 = v254 - 0x70e44324 + v240 + ((v250 | v251) & v248 | v250 & v251) + (v252 / 0x8000000 | 32 * v252); // 0x4cc135
    int32_t v257 = v189 ^ v202 ^ v226 ^ v246; // 0x4cc156
    int32_t v258 = v202 ^ v208 ^ v234 ^ v254; // 0x4cc15a
    int32_t v259 = 2 * v257 | (int32_t)(v257 < 0); // 0x4cc15f
    int32_t v260 = v205 ^ v194 ^ v230 ^ v249; // 0x4cc174
    int32_t v261 = v252 / 4 | 0x40000000 * v252; // 0x4cc177
    int32_t v262 = 2 * v260 | (int32_t)(v260 < 0); // 0x4cc180
    uint32_t v263 = v259 - 0x70e44324 + v248 + ((v252 | v255) & v251 | v252 & v255) + (v256 / 0x8000000 | 32 * v256); // 0x4cc191
    int32_t v264 = 2 * v258 | (int32_t)(v258 < 0); // 0x4cc197
    int32_t v265 = v256 / 4 | 0x40000000 * v256; // 0x4cc1aa
    uint32_t v266 = v262 - 0x70e44324 + v251 + ((v256 | v261) & v255 | v256 & v261) + (v263 / 0x8000000 | 32 * v263); // 0x4cc1c0
    uint32_t v267 = v264 - 0x70e44324 + v255 + ((v263 | v265) & v261 | v263 & v265) + (v266 / 0x8000000 | 32 * v266); // 0x4cc1d8
    int32_t v268 = v263 / 4 | 0x40000000 * v263; // 0x4cc1eb
    int32_t v269 = v205 ^ v214 ^ v238 ^ v259; // 0x4cc1fe
    int32_t v270 = 2 * v269 | (int32_t)(v269 < 0); // 0x4cc209
    int32_t v271 = v217 ^ v208 ^ v243 ^ v262; // 0x4cc20c
    int32_t v272 = 2 * v271 | (int32_t)(v271 < 0); // 0x4cc219
    int32_t v273 = v266 / 4 | 0x40000000 * v266; // 0x4cc225
    uint32_t v274 = v270 - 0x70e44324 + v261 + ((v266 | v268) & v265 | v266 & v268) + (v267 / 0x8000000 | 32 * v267); // 0x4cc234
    int32_t v275 = v267 / 4 | 0x40000000 * v267; // 0x4cc246
    uint32_t v276 = v272 - 0x70e44324 + v265 + ((v267 | v273) & v268 | v267 & v273) + (v274 / 0x8000000 | 32 * v274); // 0x4cc25d
    int32_t v277 = v214 ^ v222 ^ v246 ^ v264; // 0x4cc266
    int32_t v278 = 2 * v277 | (int32_t)(v277 < 0); // 0x4cc269
    int32_t v279 = v274 / 4 | 0x40000000 * v274; // 0x4cc29b
    uint32_t v280 = v278 - 0x70e44324 + v268 + ((v274 | v275) & v273 | v274 & v275) + (v276 / 0x8000000 | 32 * v276); // 0x4cc29e
    int32_t v281 = v217 ^ v226 ^ v249 ^ v270; // 0x4cc2b8
    int32_t v282 = v226 ^ v234 ^ v259 ^ v278; // 0x4cc2bb
    int32_t v283 = 2 * v281 | (int32_t)(v281 < 0); // 0x4cc2c0
    int32_t v284 = v230 ^ v222 ^ v254 ^ v272; // 0x4cc2c2
    int32_t v285 = 2 * v284 | (int32_t)(v284 < 0); // 0x4cc2cf
    int32_t v286 = v276 / 4 | 0x40000000 * v276; // 0x4cc2d4
    int32_t v287 = 2 * v282 | (int32_t)(v282 < 0); // 0x4cc2d9
    uint32_t v288 = v283 - 0x70e44324 + v273 + ((v276 | v279) & v275 | v276 & v279) + (v280 / 0x8000000 | 32 * v280); // 0x4cc2f1
    int32_t v289 = v280 / 4 | 0x40000000 * v280; // 0x4cc304
    uint32_t v290 = v285 - 0x70e44324 + v275 + ((v280 | v286) & v279 | v280 & v286) + (v288 / 0x8000000 | 32 * v288); // 0x4cc311
    int32_t v291 = v288 / 4 | 0x40000000 * v288; // 0x4cc323
    uint32_t v292 = v287 - 0x70e44324 + v279 + ((v288 | v289) & v286 | v288 & v289) + (v290 / 0x8000000 | 32 * v290); // 0x4cc335
    int32_t v293 = v230 ^ v238 ^ v262 ^ v283; // 0x4cc34a
    int32_t v294 = 2 * v293 | (int32_t)(v293 < 0); // 0x4cc34d
    int32_t v295 = v290 / 4 | 0x40000000 * v290; // 0x4cc367
    uint32_t v296 = v294 - 0x70e44324 + v286 + ((v290 | v291) & v289 | v290 & v291) + (v292 / 0x8000000 | 32 * v292); // 0x4cc375
    int32_t v297 = v243 ^ v234 ^ v264 ^ v285; // 0x4cc385
    int32_t v298 = 2 * v297 | (int32_t)(v297 < 0); // 0x4cc388
    int32_t v299 = v292 / 4 | 0x40000000 * v292; // 0x4cc399
    uint32_t v300 = v298 - 0x70e44324 + v289 + ((v292 | v295) & v291 | v292 & v295) + (v296 / 0x8000000 | 32 * v296); // 0x4cc3ad
    int32_t v301 = v238 ^ v246 ^ v270 ^ v287; // 0x4cc3bf
    int32_t v302 = v296 / 4 | 0x40000000 * v296; // 0x4cc3c4
    int32_t v303 = 2 * v301 | (int32_t)(v301 < 0); // 0x4cc3c7
    uint32_t v304 = v303 - 0x359d3e2a + v291 + (v299 ^ v295 ^ v296) + (v300 / 0x8000000 | 32 * v300); // 0x4cc3e6
    int32_t v305 = v243 ^ v249 ^ v272 ^ v294; // 0x4cc3f8
    int32_t v306 = 2 * v305 | (int32_t)(v305 < 0); // 0x4cc400
    int32_t v307 = v300 / 4 | 0x40000000 * v300; // 0x4cc418
    uint32_t v308 = v306 - 0x359d3e2a + v295 + (v302 ^ v299 ^ v300) + (v304 / 0x8000000 | 32 * v304); // 0x4cc425
    int32_t v309 = v254 ^ v246 ^ v278 ^ v298; // 0x4cc43a
    int32_t v310 = 2 * v309 | (int32_t)(v309 < 0); // 0x4cc442
    int32_t v311 = v304 / 4 | 0x40000000 * v304; // 0x4cc458
    uint32_t v312 = v310 - 0x359d3e2a + v299 + (v307 ^ v302 ^ v304) + (v308 / 0x8000000 | 32 * v308); // 0x4cc465
    int32_t v313 = v249 ^ v259 ^ v283 ^ v303; // 0x4cc46d
    int32_t v314 = 2 * v313 | (int32_t)(v313 < 0); // 0x4cc470
    int32_t v315 = v308 / 4 | 0x40000000 * v308; // 0x4cc48e
    int32_t v316 = v254 ^ v262 ^ v285 ^ v306; // 0x4cc494
    int32_t v317 = 2 * v316 | (int32_t)(v316 < 0); // 0x4cc49a
    uint32_t v318 = v314 - 0x359d3e2a + v302 + (v311 ^ v307 ^ v308) + (v312 / 0x8000000 | 32 * v312); // 0x4cc4a1
    int32_t v319 = v312 / 4 | 0x40000000 * v312; // 0x4cc4bc
    uint32_t v320 = v317 - 0x359d3e2a + v307 + (v315 ^ v311 ^ v312) + (v318 / 0x8000000 | 32 * v318); // 0x4cc4c9
    int32_t v321 = v264 ^ v259 ^ v287 ^ v310; // 0x4cc4d7
    int32_t v322 = 2 * v321 | (int32_t)(v321 < 0); // 0x4cc4dd
    int32_t v323 = v262 ^ v270 ^ v294 ^ v314; // 0x4cc4ed
    int32_t v324 = v318 / 4 | 0x40000000 * v318; // 0x4cc500
    int32_t v325 = 2 * v323 | (int32_t)(v323 < 0); // 0x4cc509
    uint32_t v326 = v322 - 0x359d3e2a + v311 + (v319 ^ v315 ^ v318) + (v320 / 0x8000000 | 32 * v320); // 0x4cc510
    int32_t v327 = v264 ^ v272 ^ v298 ^ v317; // 0x4cc533
    int32_t v328 = v320 / 4 | 0x40000000 * v320; // 0x4cc538
    uint32_t v329 = v325 - 0x359d3e2a + v315 + (v324 ^ v319 ^ v320) + (v326 / 0x8000000 | 32 * v326); // 0x4cc53b
    int32_t v330 = 2 * v327 | (int32_t)(v327 < 0); // 0x4cc53e
    int32_t v331 = v326 / 4 | 0x40000000 * v326; // 0x4cc54f
    uint32_t v332 = v330 - 0x359d3e2a + v319 + (v328 ^ v324 ^ v326) + (v329 / 0x8000000 | 32 * v329); // 0x4cc55c
    int32_t v333 = v278 ^ v270 ^ v303 ^ v322; // 0x4cc571
    int32_t v334 = 2 * v333 | (int32_t)(v333 < 0); // 0x4cc576
    int32_t v335 = v329 / 4 | 0x40000000 * v329; // 0x4cc587
    uint32_t v336 = v334 - 0x359d3e2a + v324 + (v331 ^ v328 ^ v329) + (v332 / 0x8000000 | 32 * v332); // 0x4cc596
    int32_t v337 = v272 ^ v283 ^ v306 ^ v325; // 0x4cc59f
    int32_t v338 = 2 * v337 | (int32_t)(v337 < 0); // 0x4cc5a2
    int32_t v339 = v332 / 4 | 0x40000000 * v332; // 0x4cc5b2
    uint32_t v340 = v338 - 0x359d3e2a + v328 + (v335 ^ v331 ^ v332) + (v336 / 0x8000000 | 32 * v336); // 0x4cc5bc
    int32_t v341 = v278 ^ v285 ^ v310 ^ v330; // 0x4cc5cc
    int32_t v342 = 2 * v341 | (int32_t)(v341 < 0); // 0x4cc5cf
    int32_t v343 = v336 / 4 | 0x40000000 * v336; // 0x4cc5e0
    uint32_t v344 = v342 - 0x359d3e2a + v331 + (v339 ^ v335 ^ v336) + (v340 / 0x8000000 | 32 * v340); // 0x4cc5f0
    int32_t v345 = v287 ^ v283 ^ v314 ^ v334; // 0x4cc5f9
    int32_t v346 = 2 * v345 | (int32_t)(v345 < 0); // 0x4cc5fc
    int32_t v347 = v340 / 4 | 0x40000000 * v340; // 0x4cc60d
    uint32_t v348 = v346 - 0x359d3e2a + v335 + (v343 ^ v339 ^ v340) + (v344 / 0x8000000 | 32 * v344); // 0x4cc617
    int32_t v349 = v285 ^ v294 ^ v317 ^ v338; // 0x4cc620
    int32_t v350 = 2 * v349 | (int32_t)(v349 < 0); // 0x4cc622
    int32_t v351 = v344 / 4 | 0x40000000 * v344; // 0x4cc634
    uint32_t v352 = v350 - 0x359d3e2a + v339 + (v347 ^ v343 ^ v344) + (v348 / 0x8000000 | 32 * v348); // 0x4cc63f
    int32_t v353 = v287 ^ v298 ^ v322 ^ v342; // 0x4cc64f
    int32_t v354 = 2 * v353 | (int32_t)(v353 < 0); // 0x4cc651
    int32_t v355 = v348 / 4 | 0x40000000 * v348; // 0x4cc668
    uint32_t v356 = v354 - 0x359d3e2a + v343 + (v351 ^ v347 ^ v348) + (v352 / 0x8000000 | 32 * v352); // 0x4cc678
    int32_t v357 = v303 ^ v294 ^ v325 ^ v346; // 0x4cc688
    int32_t v358 = 2 * v357 | (int32_t)(v357 < 0); // 0x4cc68e
    int32_t v359 = v352 / 4 | 0x40000000 * v352; // 0x4cc6aa
    uint32_t v360 = v358 - 0x359d3e2a + v347 + (v355 ^ v351 ^ v352) + (v356 / 0x8000000 | 32 * v356); // 0x4cc6ae
    int32_t v361 = v298 ^ v306 ^ v330 ^ v350; // 0x4cc6b4
    int32_t v362 = 2 * v361 | (int32_t)(v361 < 0); // 0x4cc6b9
    int32_t v363 = v356 / 4 | 0x40000000 * v356; // 0x4cc6c8
    uint32_t v364 = v362 - 0x359d3e2a + v351 + (v359 ^ v355 ^ v356) + (v360 / 0x8000000 | 32 * v360); // 0x4cc6de
    int32_t v365 = v303 ^ v310 ^ v334 ^ v354; // 0x4cc6e7
    int32_t v366 = 2 * v365 | (int32_t)(v365 < 0); // 0x4cc6ef
    int32_t v367 = v360 / 4 | 0x40000000 * v360; // 0x4cc70b
    uint32_t v368 = v366 - 0x359d3e2a + v355 + (v363 ^ v359 ^ v360) + (v364 / 0x8000000 | 32 * v364); // 0x4cc70f
    int32_t v369 = v314 ^ v306 ^ v338 ^ v358; // 0x4cc71f
    int32_t v370 = v310 ^ v317 ^ v342 ^ v362; // 0x4cc73f
    int32_t v371 = v364 / 4 | 0x40000000 * v364; // 0x4cc741
    int32_t v372 = v314 ^ v322 ^ v346 ^ v366; // 0x4cc751
    uint32_t v373 = (2 * v369 | (int32_t)(v369 < 0)) - 0x359d3e2a + v359 + (v367 ^ v363 ^ v364) + (v368 / 0x8000000 | 32 * v368); // 0x4cc76c
    int32_t v374 = v368 / 4 | 0x40000000 * v368; // 0x4cc77b
    uint32_t v375 = (2 * v370 | (int32_t)(v370 < 0)) - 0x359d3e2a + v363 + (v371 ^ v367 ^ v368) + (v373 / 0x8000000 | 32 * v373); // 0x4cc78d
    uint32_t result = v78 - 0x359d3e2a + (2 * v372 | (int32_t)(v372 < 0)) + v367 + (v374 ^ v371 ^ v373) + (v375 / 0x8000000 | 32 * v375); // 0x4cc79c
    *v77 = result;
    *v82 = v374 + v83;
    *v87 = v375 + v88;
    *v85 = (v373 / 4 | 0x40000000 * v373) + v86;
    *v89 = v371 + v90;
    return result;
}

// Address range: 0x4f1be0 - 0x4f2bd2
int64_t function_4f1be0(int64_t a1, int64_t a2) {
    // 0x4f1be0
    *(int32_t *)a1 = (int32_t)a2;
    *(int64_t *)(a1 + 16) = 46;
    int64_t v1 = __readfsqword(40); // 0x4f1c09
    int64_t v2 = (int64_t)&g400; // 0x4f1c1c
    *(int64_t *)v2 = 0;
    v2 += 8;
    while (v2 != (int64_t)&g401) {
        // 0x4f1c20
        *(int64_t *)v2 = 0;
        v2 += 8;
    }
    // 0x4f1c30
    *(int64_t *)(a1 + 8) = (int64_t)&g400;
    int64_t v3 = (int64_t)&g398; // 0x4f1c45
    *(int64_t *)v3 = 0;
    v3 += 8;
    while (v3 != (int64_t)&g399) {
        // 0x4f1c48
        *(int64_t *)v3 = 0;
        v3 += 8;
    }
    int64_t * v4 = (int64_t *)(a1 + 24); // 0x4f1c58
    *v4 = (int64_t)&g398;
    int64_t v5 = (int64_t)&g402; // 0x4f1c6a
    *(int64_t *)v5 = 0;
    v5 += 8;
    while (v5 != (int64_t)&g403) {
        // 0x4f1c70
        *(int64_t *)v5 = 0;
        v5 += 8;
    }
    // 0x4f1c80
    *(int64_t *)(a1 + 32) = (int64_t)&g402;
    g402 = (int64_t)&g401;
    *(int16_t *)&g401 = *(int16_t *)function_565f80();
    function_5630c0(&g397, 0, 0, 1);
    function_5663d0(a1, &g430, &g397);
    function_4f51e0(&g386, 1);
    function_5663d0(a1, &g405, &g386);
    *(int32_t *)&g328 = 1;
    g329 = 0;
    g330 = 0;
    *(char *)&g331 = 0;
    g332 = 0;
    g327 = (int64_t)&g155;
    g333 = 0;
    g334 = 0;
    g335 = 0;
    *(int16_t *)&g336 = 0;
    *(char *)&g337 = 0;
    *(int32_t *)&g392 = 1;
    g391 = (int64_t)&g136;
    g393 = (int64_t)&g327;
    function_5681f0(&g391, (int32_t)&g405 ^ (int32_t)&g405);
    function_5663d0(a1, &g413, &g391);
    *(int32_t *)&g390 = 1;
    g389 = (int64_t)&g151;
    function_5663d0(a1, &g436, &g389);
    *(int32_t *)&g388 = 1;
    g387 = (int64_t)&g152;
    function_5663d0(a1, &g435, &g387);
    *(int32_t *)&g395 = 1;
    g394 = (int64_t)&g135;
    g396 = function_565f30();
    function_5663d0(a1, &g410, &g394);
    *(int16_t *)&g302 = (int16_t)((int32_t)&g394 ^ (int32_t)&g394);
    *(int32_t *)&g298 = 1;
    g299 = 0;
    g300 = 0;
    *(char *)&g301 = 0;
    g297 = (int64_t)&g127;
    g303 = 0;
    g304 = 0;
    g305 = 0;
    g306 = 0;
    g307 = 0;
    g308 = 0;
    g309 = 0;
    *(int32_t *)&g310 = 0;
    *(char *)&g311 = 0;
    *(int32_t *)&g381 = 1;
    g380 = (int64_t)&g138;
    g382 = (int64_t)&g297;
    function_569910(&g380, (int32_t)&g410 ^ (int32_t)&g410, (int32_t)&g394 ^ (int32_t)&g394 ^ (int32_t)&g394 ^ (int32_t)&g394);
    function_5663d0(a1, &g417, &g380);
    *(int32_t *)&g313 = 1;
    g314 = 0;
    g315 = 0;
    *(char *)&g316 = 0;
    g318 = 0;
    g312 = (int64_t)&g126;
    g319 = 0;
    *(int16_t *)&g317 = (int16_t)((int32_t)&g126 ^ (int32_t)&g126);
    g320 = 0;
    g321 = 0;
    g322 = 0;
    g323 = 0;
    g324 = 0;
    *(int32_t *)&g325 = 0;
    *(char *)&g326 = 0;
    *(int32_t *)&g384 = 1;
    g383 = (int64_t)&g137;
    g385 = (int64_t)&g312;
    function_569370(&g383, (int32_t)&g417 ^ (int32_t)&g417, (int32_t)&g380 ^ (int32_t)&g380);
    function_5663d0(a1, &g416, &g383);
    *(int32_t *)&g379 = 1;
    g378 = (int64_t)&g139;
    function_5663d0(a1, &g415, &g378);
    *(int32_t *)&g377 = 1;
    g376 = (int64_t)&g140;
    function_5663d0(a1, &g414, &g376);
    *(int32_t *)&g248 = 1;
    g249 = 0;
    g250 = 0;
    g251 = 0;
    g252 = 0;
    g253 = 0;
    g247 = (int64_t)&g153;
    g254 = 0;
    g255 = 0;
    g256 = 0;
    g257 = 0;
    g258 = 0;
    g259 = 0;
    g260 = 0;
    g261 = 0;
    g262 = 0;
    g263 = 0;
    g264 = 0;
    g265 = 0;
    g266 = 0;
    g267 = 0;
    g268 = 0;
    g269 = 0;
    g270 = 0;
    g271 = 0;
    g272 = 0;
    g273 = 0;
    g274 = 0;
    g275 = 0;
    g276 = 0;
    g277 = 0;
    g278 = 0;
    g279 = 0;
    g280 = 0;
    g281 = 0;
    g282 = 0;
    g283 = 0;
    g284 = 0;
    g285 = 0;
    g286 = 0;
    g287 = 0;
    g288 = 0;
    g289 = 0;
    g290 = 0;
    g291 = 0;
    g292 = 0;
    g293 = 0;
    g294 = 0;
    g295 = 0;
    *(char *)&g296 = 0;
    function_553d30(&g375, &g247, 1);
    function_5663d0(a1, &g434, &g375);
    *(int32_t *)&g374 = 1;
    g373 = (int64_t)&g141;
    function_5663d0(a1, &g412, &g373);
    *(int32_t *)&g372 = 1;
    g371 = (int64_t)&g154;
    function_5663d0(a1, &g433, &g371);
    function_523ad0(&g370, 1);
    function_5663d0(a1, &g411, &g370);
    function_54d6e0(&g369, 1);
    function_5663d0(a1, &g429, &g369);
    function_4f5280(&g358, 1);
    function_5663d0(a1, &g404, &g358);
    *(int32_t *)&g237 = 1;
    g238 = 0;
    g239 = 0;
    *(char *)&g240 = 0;
    g241 = 0;
    g242 = 0;
    g236 = (int64_t)&g134;
    g243 = 0;
    g244 = 0;
    g245 = 0;
    *(char *)&g246 = 0;
    *(int32_t *)&g364 = 1;
    g365 = (int64_t)&g236;
    g363 = (int64_t)&g143;
    function_568500(&g363, (int32_t)&g404 ^ (int32_t)&g404);
    function_5663d0(a1, &g421, &g363);
    *(int32_t *)&g362 = 1;
    g361 = (int64_t)&g130;
    function_5663d0(a1, &g409, &g361);
    *(int32_t *)&g360 = 1;
    g359 = (int64_t)&g131;
    function_5663d0(a1, &g408, &g359);
    *(int32_t *)&g367 = 1;
    g366 = (int64_t)&g142;
    g368 = function_565f30();
    function_5663d0(a1, &g418, &g366);
    *(int32_t *)&g207 = 1;
    g208 = 0;
    g209 = 0;
    *(char *)&g210 = 0;
    g211 = 0;
    g206 = (int64_t)&g129;
    g212 = 0;
    g213 = 0;
    g214 = 0;
    g215 = 0;
    g216 = 0;
    g217 = 0;
    g218 = 0;
    *(int32_t *)&g219 = 0;
    *(char *)&g220 = 0;
    *(int32_t *)&g353 = 1;
    g352 = (int64_t)&g145;
    g354 = (int64_t)&g206;
    function_56a740(&g352, (int32_t)&g418 ^ (int32_t)&g418, (int32_t)&g366 ^ (int32_t)&g366);
    function_5663d0(a1, &g425, &g352);
    *(int32_t *)&g222 = 1;
    g223 = 0;
    g224 = 0;
    *(char *)&g225 = 0;
    g226 = 0;
    g227 = 0;
    g221 = (int64_t)&g128;
    g228 = 0;
    g229 = 0;
    g230 = 0;
    g231 = 0;
    g232 = 0;
    g233 = 0;
    g355 = (int64_t)&g144;
    *(int32_t *)&g234 = 0;
    *(char *)&g235 = 0;
    *(int32_t *)&g356 = 1;
    g357 = (int64_t)&g221;
    function_56a0d0(&g355, (int32_t)&g425 ^ (int32_t)&g425, (int32_t)&g352 ^ (int32_t)&g352);
    function_5663d0(a1, &g424, &g355);
    *(int32_t *)&g351 = 1;
    g350 = (int64_t)&g146;
    function_5663d0(a1, &g423, &g350);
    *(int32_t *)&g349 = 1;
    g348 = (int64_t)&g147;
    function_5663d0(a1, &g422, &g348);
    *(int32_t *)&g157 = 1;
    g158 = 0;
    g159 = 0;
    g160 = 0;
    g161 = 0;
    g162 = 0;
    g156 = (int64_t)&g132;
    g163 = 0;
    g164 = 0;
    g165 = 0;
    g166 = 0;
    g167 = 0;
    g168 = 0;
    g169 = 0;
    g170 = 0;
    g171 = 0;
    g172 = 0;
    g173 = 0;
    g174 = 0;
    g175 = 0;
    g176 = 0;
    g177 = 0;
    g178 = 0;
    g179 = 0;
    g180 = 0;
    g181 = 0;
    g182 = 0;
    g183 = 0;
    g184 = 0;
    g185 = 0;
    g186 = 0;
    g187 = 0;
    g188 = 0;
    g189 = 0;
    g190 = 0;
    g191 = 0;
    g192 = 0;
    g193 = 0;
    g194 = 0;
    g195 = 0;
    g196 = 0;
    g197 = 0;
    g198 = 0;
    g199 = 0;
    g200 = 0;
    g201 = 0;
    g202 = 0;
    g203 = 0;
    g204 = 0;
    *(char *)&g205 = 0;
    function_509d40(&g347, &g156, 1);
    function_5663d0(a1, &g407, &g347);
    *(int32_t *)&g346 = 1;
    g345 = (int64_t)&g148;
    function_5663d0(a1, &g420, &g345);
    *(int32_t *)&g344 = 1;
    g343 = (int64_t)&g133;
    function_5663d0(a1, &g406, &g343);
    function_536e00(&g342, 1);
    function_5663d0(a1, &g419, &g342);
    *(int32_t *)&g341 = 1;
    g340 = (int64_t)&g149;
    function_5663d0(a1, &g432, &g340);
    *(int32_t *)&g339 = 1;
    g338 = (int64_t)&g150;
    function_5663d0(a1, &g431, &g338);
    int64_t v6 = (int64_t)&g327; // bp-120, 0x4f2ace
    function_529a20(a1, &v6);
    int64_t v7 = function_566390(&g413); // 0x4f2b01
    *(int64_t *)(8 * v7 + *v4) = (int64_t)&g327;
    int64_t v8 = function_566390(&g417); // 0x4f2b1a
    *(int64_t *)(8 * v8 + *v4) = (int64_t)&g297;
    int64_t v9 = function_566390(&g416); // 0x4f2b2e
    *(int64_t *)(8 * v9 + *v4) = (int64_t)&g312;
    int64_t v10 = function_566390(&g434); // 0x4f2b42
    *(int64_t *)(8 * v10 + *v4) = (int64_t)&g247;
    int64_t v11 = function_566390(&g421); // 0x4f2b5e
    *(int64_t *)(8 * v11 + *v4) = (int64_t)&g236;
    int64_t v12 = function_566390(&g425); // 0x4f2b73
    *(int64_t *)(8 * v12 + *v4) = (int64_t)&g206;
    int64_t v13 = function_566390(&g424); // 0x4f2b87
    *(int64_t *)(8 * v13 + *v4) = (int64_t)&g221;
    int64_t v14 = function_566390(&g407); // 0x4f2ba3
    *(int64_t *)(8 * v14 + *v4) = (int64_t)&g156;
    return __readfsqword(40) ^ v1;
}

// Address range: 0x4f2bd4 - 0x4f2bd5
int64_t function_4f2bd4(void) {
    // 0x4f2bd4
    int64_t result; // 0x4f2bd4
    return result;
}

// Address range: 0x510590 - 0x511509
int64_t function_510590(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t wstr, int64_t a10, int64_t a11, int64_t a12) {
    int64_t result = a2; // bp-200, 0x5105c8
    int64_t v1 = a4; // bp-216, 0x5105d8
    __readfsqword(40);
    function_50c440();
    int64_t v2 = function_50ab00(a6 + 208); // 0x510621
    int32_t v3 = wcslen((int32_t *)wstr); // 0x51062c
    uint64_t v4 = (int64_t)v3; // 0x51062c
    int64_t v5 = (int64_t)&v1; // 0x510649
    int64_t v6 = function_50f6f0(&result, v5); // 0x51067d
    int64_t v7 = 0; // 0x510687
    if (v3 == 0 || (char)v6 == 1) {
      lab_0x510740:
        // 0x510740
        if (v7 == v4) {
            // 0x51075a
            __readfsqword(40);
            return result;
        }
    } else {
        bool v8 = false; // 0x510590
        int64_t v9 = 0;
        while (true) {
            if (v8) {
                // break (via goto) -> 0x510752
                goto lab_0x510752;
            }
            int64_t v10 = v9;
            int64_t v11 = *(int64_t *)v2; // 0x5106ac
            int64_t v12; // 0x510590
            while ((char)v11 != 37) {
                uint32_t v13 = *(int32_t *)(4 * v10 + wstr); // 0x5106ba
                int64_t v14 = v10 + 1; // 0x5106c0
                int64_t v15 = function_50f7d0(&result, v13, v14); // 0x5106d3
                v12 = v14;
                if (v13 != (int32_t)v15) {
                    goto lab_0x510675;
                }
                // 0x5107c0
                function_50d7a0(&result, (int64_t)v13, v14, a4);
                int64_t v16 = function_50f6f0(&result, v5); // 0x51067d
                v7 = v14;
                if (v14 >= v4 || (char)v16 == 1) {
                    goto lab_0x510740;
                }
                if (v8) {
                    // break (via goto) -> 0x510752
                    goto lab_0x510752;
                }
                // 0x5106a4
                v10 = v14;
                v11 = *(int64_t *)v2;
            }
            int64_t v17 = v11 + 0xffffffbf; // 0x51071c
            if ((char)v17 < 57) {
                int32_t v18 = *(int32_t *)((4 * v17 & 1020) + (int64_t)&g100); // 0x510731
                return (int64_t)v18 + (int64_t)&g100;
            }
            // 0x510f31
            v12 = v10 + 2;
          lab_0x510675:
            // 0x510675
            v9 = v12;
            int64_t v19 = function_50f6f0(&result, v5); // 0x51067d
            v8 = true;
            if (v9 >= v4 || (char)v19 == 1) {
                // break -> 0x510752
                break;
            }
        }
    }
  lab_0x510752:;
    int32_t * v20 = (int32_t *)a7; // 0x510757
    *v20 = *v20 | 4;
    // 0x51075a
    __readfsqword(40);
    return result;
}

// Address range: 0x524720 - 0x525b25
int64_t function_524720(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * str, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    // 0x524720
    __readfsqword(40);
    function_556610();
    int64_t v1 = function_554b00(a6 + 208); // 0x5247a8
    int32_t len = strlen((char *)str); // 0x5247b3
    int32_t v2 = 0; // bp-196, 0x5247cb
    int64_t result = (int64_t)&v2; // 0x5247f8
    if (a2 == 0) {
        // 0x525b2a
        return result;
    }
    int64_t v3 = (int64_t)str;
    uint64_t v4 = (int64_t)len; // 0x5247b3
    int64_t v5 = v1 + 313;
    int64_t v6 = 0; // 0x524720
    int64_t v7 = a2;
    int64_t v8 = a5; // 0x524720
    int64_t v9 = a4; // 0x524720
    int64_t v10 = a3; // 0x524720
    uint64_t v11; // 0x524720
    char v12; // 0x524720
    int64_t v13; // 0x524720
    int64_t v14; // 0x524720
    int64_t v15; // 0x524720
    int64_t v16; // 0x524720
    int64_t v17; // 0x524720
    int64_t v18; // 0x524720
    int64_t v19; // 0x524720
    int64_t v20; // 0x524720
    while (true) {
      lab_0x5247fe:;
        int64_t v21 = v10;
        v20 = v9;
        v19 = v8;
        v16 = v7;
        v11 = v6;
        v13 = v21;
        if ((int32_t)v21 == -1) {
            uint64_t v22 = *(int64_t *)(v16 + 16); // 0x524978
            if (v22 >= *(int64_t *)(v16 + 24)) {
                int64_t v23 = *(int64_t *)v16; // 0x5259e0
                int64_t v24 = v23; // 0x5259e9
                if ((int32_t)v23 != -1) {
                    // 0x524989
                    v13 = 0x100000000 * v24 >> 32;
                    goto lab_0x52480c;
                } else {
                    // 0x524b1b
                    result = v23;
                    if (v20 == 0) {
                        // 0x525b2a
                        return result;
                    }
                    // 0x524b2c
                    v14 = v21;
                    v17 = 0;
                    v12 = 1;
                    v15 = v21;
                    v9 = v20;
                    v8 = v19;
                    v18 = 0;
                    if ((int32_t)v19 != -1) {
                        goto lab_0x524898;
                    } else {
                        goto lab_0x52487a;
                    }
                }
            } else {
                // 0x524989
                v13 = 0x100000000 * (int64_t)*(char *)v22 >> 32;
                goto lab_0x52480c;
            }
        } else {
            goto lab_0x52480c;
        }
    }
  lab_0x524823_2:;
    // 0x524823
    int64_t v25; // 0x524720
    int64_t result2 = v25; // 0x524823
    int32_t v26 = v2; // 0x524823
    goto lab_0x52482a_2;
  lab_0x52480c:;
    int64_t v28 = v13;
    v15 = v28;
    v9 = 0;
    v8 = v19;
    v18 = v16;
    if (v20 == 0) {
        goto lab_0x524898;
    } else {
        // 0x524819
        v25 = v16;
        v14 = v28;
        v17 = v16;
        v12 = 0;
        if ((int32_t)v19 != -1) {
            goto lab_0x524823_2;
        }
        goto lab_0x52487a;
    }
  lab_0x524898:
    // 0x524898
    v7 = v18;
    result2 = v7;
    v26 = v2;
    if (v11 >= v4) {
        // break -> 0x52482a
        goto lab_0x52482a_2;
    }
    int64_t result3 = v7; // 0x5248a6
    if (v2 != 0) {
        goto lab_0x524833;
    }
    int64_t v29 = v15;
    int64_t v30 = v11 + v3;
    int64_t v31 = v11 + 1; // 0x5248ac
    char * v32 = (char *)v30; // 0x5248b0
    unsigned char v33 = *v32; // 0x5248b0
    int64_t v34 = v33; // 0x5248b0
    char * v35 = (char *)(v5 + v34); // 0x5248b4
    char v36 = *v35; // 0x5248b4
    char v37 = v36; // 0x5248c2
    char v38; // 0x524720
    if (v36 == 0) {
        // 0x5249ed
        v38 = 0;
        if (v33 == 0) {
            goto lab_0x524998;
        } else {
            // 0x5249f1
            *v35 = v33;
            v37 = v33;
            goto lab_0x5248c8;
        }
    } else {
        goto lab_0x5248c8;
    }
  lab_0x5248c8:;
    // 0x5248c8
    int64_t v39; // 0x524720
    int64_t v40; // 0x524720
    int64_t v41; // 0x524720
    int64_t v42; // 0x5248d1
    if (v37 != 37) {
        // 0x5248c8
        v38 = *v32;
        goto lab_0x524998;
    } else {
        unsigned char v43 = *(char *)(v31 + v3); // 0x5248d1
        v42 = v43;
        char * v44 = (char *)(v5 + v42); // 0x5248d6
        unsigned char v45 = *v44; // 0x5248d6
        v41 = v45;
        if (v45 == 0) {
            // 0x524a00
            v40 = 0;
            v39 = v31;
            if (v43 == 0) {
                goto lab_0x524957;
            } else {
                // 0x524a1d
                *v44 = v43;
                v41 = v42;
                goto lab_0x5248ea;
            }
        } else {
            goto lab_0x5248ea;
        }
    }
  lab_0x52487a:;
    uint64_t v46 = *(int64_t *)(v20 + 16); // 0x52487a
    int64_t v47; // 0x524720
    int64_t v48; // 0x524720
    int64_t v49; // 0x524720
    char v50; // 0x524720
    if (v46 >= *(int64_t *)(v20 + 24)) {
        int64_t v51 = *(int64_t *)v20; // 0x525a08
        v47 = v51;
        v49 = 0;
        v48 = v19;
        v50 = 1;
        if ((int32_t)v51 != -1) {
            goto lab_0x52488b;
        } else {
            goto lab_0x524894;
        }
    } else {
        // 0x524888
        v47 = (int64_t)*(char *)v46;
        goto lab_0x52488b;
    }
  lab_0x524998:
    // 0x524998
    result = v34;
    if (v7 == 0) {
        // 0x525b2a
        return result;
    }
    char v52 = v38; // 0x5249a0
    int64_t * v53; // 0x524720
    int64_t v54; // 0x524720
    int64_t v55; // 0x524720
    int64_t v56; // 0x524720
    int64_t v57; // 0x524720
    if ((int32_t)v29 == -1) {
        int64_t * v58 = (int64_t *)(v7 + 16);
        int64_t v59 = *v58; // 0x524a30
        int64_t v60 = *(int64_t *)(v7 + 24); // 0x524a34
        if (v59 >= v60) {
            int64_t v61 = *(int64_t *)v7; // 0x524ae8
            result = v61;
            if ((int32_t)v61 == -1) {
                // 0x525b2a
                return result;
            }
            // 0x524af7
            v57 = 0x100000000 * v61 >> 32;
            v56 = v61;
            v54 = v60;
            v55 = v59;
            v53 = v58;
            if (v52 != (char)v61) {
                goto lab_0x5249c5;
            } else {
                goto lab_0x524a58;
            }
        } else {
            unsigned char v62 = *(char *)v59; // 0x524a3e
            v57 = v62;
            v56 = v59;
            v54 = v60;
            v55 = v59;
            v53 = v58;
            if (v62 != v52) {
                goto lab_0x5249c5;
            } else {
                goto lab_0x524a58;
            }
        }
    } else {
        // 0x5249bc
        v57 = v29;
        v56 = v29 & 0xffffffff;
        if (v52 == (char)v29) {
            int64_t * v63 = (int64_t *)(v7 + 16); // 0x524a58
            v54 = *(int64_t *)(v7 + 24);
            v55 = *v63;
            v53 = v63;
            goto lab_0x524a58;
        } else {
            goto lab_0x5249c5;
        }
    }
  lab_0x5248ea:;
    int64_t v64 = v42; // 0x524720
    int64_t v65 = v41; // 0x524720
    int64_t v66 = v31; // 0x524720
    int64_t v67; // 0x524720
    switch ((char)v67) {
        case 69: {
            goto lab_0x524920;
        }
        case 79: {
            goto lab_0x524920;
        }
        default: {
            goto lab_0x5248ff;
        }
    }
  lab_0x52488b:
    // 0x52488b
    v49 = v20;
    v48 = 0x100000000 * v47 >> 32;
    v50 = 0;
    goto lab_0x524894;
  lab_0x524894:
    // 0x524894
    v25 = v17;
    v15 = v14;
    v9 = v49;
    v8 = v48;
    v18 = v17;
    if (v50 == v12) {
        goto lab_0x524823_2;
    }
    goto lab_0x524898;
  lab_0x5249c5:
    // 0x5249c5
    v2 |= 4;
    v10 = v57;
    int64_t v68 = v56; // 0x5249d0
    v6 = v31;
    goto lab_0x5247f5;
  lab_0x524957:
    // 0x524957
    v2 |= 4;
    v10 = v29;
    v68 = v40;
    v6 = v39 + 1;
    goto lab_0x5247f5;
  lab_0x524920:;
    int64_t v69 = v11 + 2; // 0x524920
    unsigned char v70 = *(char *)(v30 + 2); // 0x524924
    int64_t v71 = v70; // 0x524924
    unsigned char v72 = *(char *)(v5 + v71); // 0x52492a
    v64 = v71;
    v65 = v72;
    v66 = v69;
    if (v72 != 0) {
        goto lab_0x5248ff;
    } else {
        // 0x52493a
        v40 = v71;
        v39 = v69;
        if (v70 != 0) {
            // 0x524ab0
            char * v73; // 0x52492a
            *v73 = v70;
            v64 = v71;
            v65 = v71;
            v66 = v69;
            goto lab_0x5248ff;
        } else {
            goto lab_0x524957;
        }
    }
  lab_0x5248ff:;
    int64_t v74 = v65 + 0xffffffbf; // 0x5248ff
    v40 = v64;
    v39 = v66;
    if ((char)v74 < 57) {
        int32_t v75 = *(int32_t *)((4 * v74 & 1020) + (int64_t)&g101); // 0x524911
        return (int64_t)v75 + (int64_t)&g101;
    }
    goto lab_0x524957;
  lab_0x524a58:
    // 0x524a58
    if (v55 >= v54) {
        int64_t result4 = *(int64_t *)v7; // 0x525b14
        return result4;
    }
    int64_t v76 = v55 + 1; // 0x524a66
    *v53 = v76;
    v10 = -1;
    v68 = v76;
    v6 = v31;
    goto lab_0x5247f5;
  lab_0x5247f5:
    // 0x5247f5
    result = v68;
    if (v7 == 0) {
        // 0x525b2a
        return result;
    }
    goto lab_0x5247fe;
  lab_0x52482a_2:
    // 0x52482a
    result3 = result2;
    if (v11 == v4 == v26 == 0) {
        // 0x52483b
        __readfsqword(40);
        return result2;
    }
  lab_0x524833:;
    int32_t * v27 = (int32_t *)a7; // 0x524838
    *v27 = *v27 | 4;
    // 0x52483b
    __readfsqword(40);
    return result3;
}

// Address range: 0x526ea0 - 0x527ffc
int64_t function_526ea0(int64_t a1, int64_t result4, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    int64_t v1 = a6 + 208; // 0x526ea8
    __readfsqword(40);
    function_554b00(v1);
    int64_t v2 = function_566390(&g416); // 0x526f1b
    int64_t * v3 = (int64_t *)v1; // 0x526f23
    int64_t * v4 = (int64_t *)(*(int64_t *)(*v3 + 24) + 8 * v2); // 0x526f32
    int64_t v5 = *v4; // 0x526f32
    int64_t v6 = v5; // 0x526f38
    if (v5 == 0) {
        int64_t v7 = function_4efd30(112); // 0x527df5
        *(int32_t *)(v7 + 8) = 0;
        *(int64_t *)(v7 + 16) = 0;
        *(int64_t *)(v7 + 24) = 0;
        *(char *)(v7 + 32) = 0;
        *(int16_t *)(v7 + 33) = 0;
        *(int64_t *)(v7 + 40) = 0;
        *(int64_t *)(v7 + 48) = 0;
        *(int64_t *)v7 = (int64_t)&g126;
        *(int64_t *)(v7 + 56) = 0;
        *(int64_t *)(v7 + 64) = 0;
        *(int64_t *)(v7 + 72) = 0;
        *(int64_t *)(v7 + 80) = 0;
        *(int64_t *)(v7 + 88) = 0;
        *(int32_t *)(v7 + 96) = 0;
        *(char *)(v7 + 111) = 0;
        function_555a00(v7, v1, 0);
        function_566890(*v3, v7, v2);
        v6 = *v4;
    }
    char v8 = 0; // bp-120, 0x526f6f
    int64_t v9; // bp-136, 0x526ea0
    int64_t v10 = (int64_t)&v9; // 0x526f77
    v9 = (int64_t)&v8;
    if (*(char *)(v6 + 32) != 0) {
        // 0x526f8e
        function_52b8e0(v10, 32);
    }
    // 0x526f9d
    char * v11; // bp-104, 0x526ea0
    int64_t v12 = (int64_t)&v11; // 0x526f9d
    char v13 = 0; // bp-88, 0x526fb6
    v11 = &v13;
    function_52b8e0(v12, 32);
    int32_t v14 = *(int32_t *)(v6 + 96); // 0x526fee
    int32_t v15 = v14; // bp-140, 0x526fff
    int64_t v16 = (int64_t)&v15; // 0x52700e
    int64_t v17 = 0; // 0x527027
    unsigned char v18; // 0x52702d
    uint32_t v19; // 0x527039
    if ((char)v14 < 5) {
        // 0x52702d
        v18 = *(char *)v16;
        v19 = *(int32_t *)(4 * (int64_t)v18 + (int64_t)&g102);
        return (int64_t)v19 + (int64_t)&g102;
    }
    while ((int32_t)v17 <= 2) {
        // 0x5270ad
        v17++;
        int64_t v20 = v17; // 0x5270bb
        if (*(char *)(v17 + v16) < 5) {
            // 0x52702d
            v18 = *(char *)(v20 + v16);
            v19 = *(int32_t *)(4 * (int64_t)v18 + (int64_t)&g102);
            return (int64_t)v19 + (int64_t)&g102;
        }
    }
    int64_t result = function_52cc60(a9, v12); // 0x527138
    if (result4 == 0) {
        // 0x5280c6
        return result;
    }
    if ((int32_t)a3 == -1) {
        uint64_t result2 = *(int64_t *)(result4 + 16); // 0x527c30
        if (result2 >= *(int64_t *)(result4 + 24)) {
            // 0x5280c6
            return result2;
        }
    }
    if (a4 != 0) {
        if ((int32_t)a5 == -1) {
            uint64_t result3 = *(int64_t *)(a4 + 16); // 0x527c52
            if (result3 >= *(int64_t *)(a4 + 24)) {
                // 0x5280c6
                return result3;
            }
        }
        int32_t * v21 = (int32_t *)a8; // 0x527166
        *v21 = *v21 | 2;
    }
    int64_t v22 = (int64_t)v11; // 0x52716e
    if (v12 + 16 != v22) {
        // 0x52718f
        function_4eeb50(v22);
    }
    // 0x5271a6
    if (v9 != v10 + 16) {
        // 0x5271bc
        function_4eeb50(v9);
    }
    // 0x5271d3
    __readfsqword(40);
    return result4;
}

// Address range: 0x5282e0 - 0x5295d7
int64_t function_5282e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    int64_t v1 = a6 + 208; // 0x5282e8
    __readfsqword(40);
    function_554b00(v1);
    int64_t v2 = function_566390(&g417); // 0x52835b
    int64_t * v3 = (int64_t *)v1; // 0x528363
    int64_t * v4 = (int64_t *)(*(int64_t *)(*v3 + 24) + 8 * v2); // 0x528372
    int64_t v5 = *v4; // 0x528372
    int64_t v6 = v5; // 0x528378
    if (v5 == 0) {
        int64_t v7 = function_4efd30(112); // 0x529235
        *(int32_t *)(v7 + 8) = 0;
        *(int64_t *)(v7 + 16) = 0;
        *(int64_t *)(v7 + 24) = 0;
        *(char *)(v7 + 32) = 0;
        *(int16_t *)(v7 + 33) = 0;
        *(int64_t *)(v7 + 40) = 0;
        *(int64_t *)(v7 + 48) = 0;
        *(int64_t *)v7 = (int64_t)&g127;
        *(int64_t *)(v7 + 56) = 0;
        *(int64_t *)(v7 + 64) = 0;
        *(int64_t *)(v7 + 72) = 0;
        *(int64_t *)(v7 + 80) = 0;
        *(int64_t *)(v7 + 88) = 0;
        *(int32_t *)(v7 + 96) = 0;
        *(char *)(v7 + 111) = 0;
        function_555fe0(v7, v1, 0);
        function_566890(*v3, v7, v2);
        v6 = *v4;
    }
    int32_t v8 = 0; // bp-120, 0x5283af
    int64_t v9; // bp-136, 0x5282e0
    int64_t v10 = (int64_t)&v9; // 0x5283b7
    v9 = (int64_t)&v8;
    if (*(char *)(v6 + 32) != 0) {
        // 0x5283ce
        function_52b8e0(v10, 32);
    }
    // 0x5283dd
    char * v11; // bp-104, 0x5282e0
    int64_t v12 = (int64_t)&v11; // 0x5283dd
    char v13 = 0; // bp-88, 0x5283f6
    v11 = &v13;
    function_52b8e0(v12, 32);
    int32_t v14 = *(int32_t *)(v6 + 96); // 0x52842e
    int32_t v15 = v14; // bp-140, 0x52843f
    int64_t v16 = (int64_t)&v15; // 0x52844e
    int64_t v17 = 0; // 0x528467
    unsigned char v18; // 0x52846d
    uint32_t v19; // 0x528479
    if ((char)v14 < 5) {
        // 0x52846d
        v18 = *(char *)v16;
        v19 = *(int32_t *)(4 * (int64_t)v18 + (int64_t)&g103);
        return (int64_t)v19 + (int64_t)&g103;
    }
    while ((int32_t)v17 <= 2) {
        // 0x5284ed
        v17++;
        int64_t v20 = v17; // 0x5284fb
        if (*(char *)(v17 + v16) < 5) {
            // 0x52846d
            v18 = *(char *)(v20 + v16);
            v19 = *(int32_t *)(4 * (int64_t)v18 + (int64_t)&g103);
            return (int64_t)v19 + (int64_t)&g103;
        }
    }
    // 0x529331
    function_52cc60(a9, v12);
    if (a2 == 0) {
        goto lab_0x529521;
    } else {
        if ((int32_t)a3 == -1) {
            // 0x529070
            if (*(int64_t *)(a2 + 16) >= *(int64_t *)(a2 + 24)) {
                // 0x529506
                if ((int32_t)*(int64_t *)a2 != -1) {
                    goto lab_0x52858c;
                } else {
                    goto lab_0x529521;
                }
            } else {
                goto lab_0x52858c;
            }
        } else {
            goto lab_0x52858c;
        }
    }
  lab_0x529521:;
    int64_t v21 = 0; // 0x529529
    char v22; // 0x5282e0
    int64_t v23; // 0x5282e0
    int64_t result; // 0x5282e0
    if (a4 == 0) {
        goto lab_0x5285a1;
    } else {
        // 0x52952f
        result = 0;
        v23 = 0;
        v22 = 1;
        if ((int32_t)a5 != -1) {
            goto lab_0x5285a9;
        } else {
            goto lab_0x529092;
        }
    }
  lab_0x5285a1:;
    int32_t * v24 = (int32_t *)a8; // 0x5285a6
    *v24 = *v24 | 2;
    result = v21;
    goto lab_0x5285a9;
  lab_0x52858c:
    // 0x52858c
    result = a2;
    if (a4 == 0) {
        goto lab_0x5285a9;
    } else {
        // 0x528596
        v21 = a2;
        v23 = a2;
        v22 = 0;
        if ((int32_t)a5 == -1) {
            goto lab_0x529092;
        } else {
            goto lab_0x5285a1;
        }
    }
  lab_0x5285a9:;
    int64_t v25 = (int64_t)v11; // 0x5285ae
    if (v12 + 16 != v25) {
        // 0x5285cf
        function_4eeb50(v25);
    }
    // 0x5285e6
    if (v9 != v10 + 16) {
        // 0x5285fc
        function_4eeb50(v9);
    }
    // 0x528613
    __readfsqword(40);
    return result;
  lab_0x529092:;
    char v26 = 0; // 0x52909a
    if (*(int64_t *)(a4 + 16) >= *(int64_t *)(a4 + 24)) {
        // 0x529544
        v26 = (int32_t)*(int64_t *)a4 == -1;
    }
    // 0x5290a9
    v21 = v23;
    result = v23;
    if (v26 != v22) {
        goto lab_0x5285a9;
    } else {
        goto lab_0x5285a1;
    }
}

// Address range: 0x5378f0 - 0x538b82
int64_t function_5378f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8, int64_t wstr, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    int64_t result = a2; // bp-200, 0x537923
    __readfsqword(40);
    function_50c440();
    int64_t v1 = function_50ab00(a6 + 208); // 0x53797a
    uint64_t v2 = (int64_t)wcslen((int32_t *)wstr); // 0x537985
    int64_t v3 = a2; // 0x5379ae
    int64_t v4 = a3; // 0x5379ae
    int64_t v5 = a4; // 0x5379ae
    int64_t v6 = a5; // 0x5379ae
    int32_t v7 = 0; // 0x5379ae
    int64_t v8 = 0; // 0x5379ae
    int64_t v9; // 0x5378f0
    int64_t v10; // 0x5378f0
    int64_t v11; // 0x5378f0
    int64_t v12; // 0x5378f0
    int64_t v13; // 0x5378f0
    int64_t v14; // 0x5378f0
    int32_t v15; // 0x5378f0
    int32_t v16; // 0x5378f0
    int64_t v17; // 0x5378f0
    int64_t v18; // 0x5378f0
    int64_t v19; // 0x5378f0
    int64_t v20; // 0x5378f0
    while (true) {
      lab_0x5379b3_2:
        // 0x5379b3
        v9 = v3;
        v11 = v3;
        v17 = v4;
        v15 = v7;
        v13 = v8;
        v10 = 0;
        v12 = 0;
        v18 = v4;
        v20 = v5;
        v19 = v6;
        v16 = v7;
        v14 = v8;
        if (v3 == 0) {
            goto lab_0x537af8;
        } else {
            goto lab_0x5379c4;
        }
    }
  lab_0x5379f4_4:;
    // 0x5379f4
    int64_t v21; // 0x5378f0
    int32_t v22; // 0x5378f0
    if (v22 == 0 == v21 == v2) {
        // 0x537a06
        __readfsqword(40);
        return result;
    }
    // 0x5379fe
    *(int32_t *)a7 = *(int32_t *)a7 | 4;
    // 0x537a06
    __readfsqword(40);
    return result;
  lab_0x537af8:;
    int64_t v23 = v14;
    int32_t v24 = v16;
    int64_t v25 = v20;
    v22 = v24;
    v21 = v23;
    if (v25 == 0) {
        // break -> 0x5379f4
        goto lab_0x5379f4_4;
    }
    int64_t v26 = v19;
    int64_t v27 = v18;
    int64_t v28 = v12;
    int64_t v29 = v10;
    int64_t v30 = v29; // 0x537b17
    int64_t v31 = v28; // 0x537b17
    int64_t v32 = v27; // 0x537b17
    int64_t v33 = v25; // 0x537b17
    int64_t v34 = v26; // 0x537b17
    int32_t v35 = v24; // 0x537b17
    int64_t v36 = v23; // 0x537b17
    int64_t v37; // 0x5378f0
    int64_t v38; // 0x5378f0
    int64_t v39; // 0x5378f0
    int64_t v40; // 0x5378f0
    int64_t v41; // 0x5378f0
    int64_t v42; // 0x5378f0
    int64_t v43; // 0x5378f0
    int64_t v44; // 0x5378f0
    int64_t v45; // 0x5378f0
    int32_t v46; // 0x5378f0
    int32_t v47; // 0x5378f0
    int64_t v48; // 0x5378f0
    int64_t v49; // 0x5378f0
    int64_t v50; // 0x5378f0
    int64_t v51; // 0x5378f0
    int64_t v52; // 0x5378f0
    int64_t v53; // 0x5378f0
    if ((int32_t)v26 != -1) {
        goto lab_0x537a6e;
    } else {
        uint64_t v54 = *(int64_t *)(v25 + 16); // 0x537b1d
        v37 = v29;
        v39 = v28;
        v48 = v27;
        v52 = v25;
        v50 = v26;
        v46 = v24;
        v45 = v54;
        v41 = 1;
        v43 = v23;
        v38 = v29;
        v40 = v28;
        v49 = v27;
        v53 = v25;
        v51 = v26;
        v47 = v24;
        v42 = 1;
        v44 = v23;
        if (v54 < *(int64_t *)(v25 + 24)) {
            goto lab_0x537a51;
        } else {
            goto lab_0x537b2b;
        }
    }
  lab_0x5379c4:;
    int64_t v55 = v13;
    int32_t v56 = v15;
    int64_t v57 = v6;
    int64_t v58 = v5;
    int64_t v59 = v17;
    int64_t v60 = v11;
    int64_t v61 = v9;
    int64_t v62 = v59; // 0x5379cc
    if ((int32_t)v59 == -1) {
        uint64_t v63 = *(int64_t *)(v60 + 16); // 0x537b60
        int64_t v64; // 0x5378f0
        if (v63 >= *(int64_t *)(v60 + 24)) {
            // 0x5389c8
            v64 = *(int64_t *)v60;
        } else {
            // 0x537b6e
            v64 = (int64_t)*(int32_t *)v63;
        }
        int64_t v65 = v64;
        if ((int32_t)v65 == -1) {
            // 0x537c30
            result = 0;
            v10 = 0;
            v12 = 0;
            v18 = v59;
            v20 = v58;
            v19 = v57;
            v16 = v56;
            v14 = v55;
            goto lab_0x537af8;
        } else {
            // 0x537b79
            v62 = 0x100000000 * v65 >> 32;
            goto lab_0x5379d2;
        }
    } else {
        goto lab_0x5379d2;
    }
  lab_0x537a6e:;
    int64_t v66 = v36;
    int32_t v67 = v35;
    v22 = v67;
    v21 = v66;
    if (v66 >= v2) {
        // break -> 0x5379f4
        goto lab_0x5379f4_4;
    }
    if (v67 != 0) {
        // 0x5379fe
        *(int32_t *)a7 = *(int32_t *)a7 | 4;
        // 0x537a06
        __readfsqword(40);
        return result;
    }
    // 0x537a87
    v6 = v34;
    v5 = v33;
    int64_t v68 = v32;
    int64_t v69 = v30;
    int64_t v70 = *(int64_t *)v1; // 0x537a8f
    int64_t v71; // 0x5378f0
    int64_t v72; // 0x5378f0
    int64_t v73; // 0x5378f0
    int64_t v74; // 0x5378f0
    int64_t v75; // 0x537a97
    uint32_t v76; // 0x537aa0
    if ((char)v70 == 37) {
        int64_t v77 = v70 + 0xffffffbf; // 0x537bab
        if ((char)v77 < 57) {
            int32_t v78 = *(int32_t *)((4 * v77 & 1020) + (int64_t)&g104); // 0x537bc0
            return (int64_t)v78 + (int64_t)&g104;
        }
        // 0x538522
        v3 = v69;
        v4 = v68;
        v7 = v67 | 4;
        v8 = v66 + 2;
        goto lab_0x5379b3_2;
    } else {
        int64_t v79 = v31;
        v75 = v66 + 1;
        v76 = *(int32_t *)(4 * v66 + wstr);
        v71 = v69;
        v72 = 0;
        v73 = 0xffffffff;
        if (v79 == 0) {
            goto lab_0x537ad3;
        } else {
            // 0x537ac3
            v71 = v69;
            v72 = v79;
            v73 = v68 & 0xffffffff;
            if ((int32_t)v68 == -1) {
                uint64_t v80 = *(int64_t *)(v79 + 16); // 0x537bd0
                int64_t v81; // 0x5378f0
                if (v80 >= *(int64_t *)(v79 + 24)) {
                    // 0x5389b8
                    v81 = *(int64_t *)v79;
                } else {
                    // 0x537bde
                    v81 = (int64_t)*(int32_t *)v80;
                }
                int64_t v82 = v81;
                int32_t v83 = v82; // 0x537be0
                if (v83 == -1) {
                    // 0x5389d8
                    result = 0;
                    v71 = 0;
                    v72 = 0;
                    v73 = 0xffffffff;
                    goto lab_0x537ad3;
                } else {
                    int64_t v84 = 0x100000000 * v82 >> 32; // 0x537bec
                    v74 = v84;
                    if (v76 != v83) {
                        // 0x537adc
                        v9 = v69;
                        v11 = v79;
                        v17 = v84;
                        v15 = v67 | 4;
                        v13 = v75;
                        goto lab_0x5379c4;
                    } else {
                        goto lab_0x537bf9;
                    }
                }
            } else {
                goto lab_0x537ad3;
            }
        }
    }
  lab_0x5379d2:;
    int64_t v85 = v62;
    v30 = v61;
    v31 = v60;
    v32 = v85;
    v33 = 0;
    v34 = v57;
    v35 = v56;
    v36 = v55;
    if (v58 == 0) {
        goto lab_0x537a6e;
    } else {
        // 0x5379e3
        v22 = v56;
        v21 = v55;
        if ((int32_t)v57 != -1) {
            // break -> 0x5379f4
            goto lab_0x5379f4_4;
        }
        uint64_t v86 = *(int64_t *)(v58 + 16); // 0x537a43
        v37 = v61;
        v39 = v60;
        v48 = v85;
        v52 = v58;
        v50 = v57;
        v46 = v56;
        v45 = v86;
        v41 = 0;
        v43 = v55;
        v38 = v61;
        v40 = v60;
        v49 = v85;
        v53 = v58;
        v51 = v57;
        v47 = v56;
        v42 = 0;
        v44 = v55;
        if (v86 >= *(int64_t *)(v58 + 24)) {
            goto lab_0x537b2b;
        } else {
            goto lab_0x537a51;
        }
    }
  lab_0x537a51:;
    uint32_t v87 = *(int32_t *)v45; // 0x537a51
    int64_t v88 = v37; // 0x537a56
    int64_t v89 = v39; // 0x537a56
    int64_t v90 = v48; // 0x537a56
    int64_t v91 = v52; // 0x537a56
    int32_t v92 = v46; // 0x537a56
    int64_t v93 = v87; // 0x537a56
    int64_t v94 = v41; // 0x537a56
    int64_t v95 = v43; // 0x537a56
    int64_t v96 = v37; // 0x537a56
    int64_t v97 = v39; // 0x537a56
    int64_t v98 = v48; // 0x537a56
    int64_t v99 = 0; // 0x537a56
    int64_t v100 = v50; // 0x537a56
    int32_t v101 = v46; // 0x537a56
    int64_t v102 = v41; // 0x537a56
    int64_t v103 = v43; // 0x537a56
    char v104 = 1; // 0x537a56
    if (v87 == -1) {
        goto lab_0x537a65;
    } else {
        goto lab_0x537a5c;
    }
  lab_0x537b2b:;
    int64_t v105 = *(int64_t *)v53; // 0x537b2b
    v88 = v38;
    v89 = v40;
    v90 = v49;
    v91 = v53;
    v92 = v47;
    v93 = v105;
    v94 = v42;
    v95 = v44;
    v96 = v38;
    v97 = v40;
    v98 = v49;
    v99 = 0;
    v100 = v51;
    v101 = v47;
    v102 = v42;
    v103 = v44;
    v104 = 1;
    if ((int32_t)v105 != -1) {
        goto lab_0x537a5c;
    } else {
        goto lab_0x537a65;
    }
  lab_0x5379b3:
    // 0x5379b3
    goto lab_0x5379b3_2;
  lab_0x537ad3:
    // 0x537ad3
    v74 = v68;
    if (v76 == (int32_t)v73) {
        goto lab_0x537bf9;
    } else {
        int32_t v106 = v67 | 4; // 0x537ae4
        v9 = v71;
        v11 = v72;
        v17 = v68;
        v15 = v106;
        v13 = v75;
        v10 = v71;
        v12 = v72;
        v18 = v68;
        v20 = v5;
        v19 = v6;
        v16 = v106;
        v14 = v75;
        if (v72 != 0) {
            goto lab_0x5379c4;
        } else {
            goto lab_0x537af8;
        }
    }
  lab_0x537a65:
    // 0x537a65
    v22 = v101;
    v21 = v103;
    v30 = v96;
    v31 = v97;
    v32 = v98;
    v33 = v99;
    v34 = v100;
    v35 = v101;
    v36 = v103;
    if (v104 == (char)v102) {
        // break -> 0x5379f4
        goto lab_0x5379f4_4;
    }
    goto lab_0x537a6e;
  lab_0x537a5c:
    // 0x537a5c
    v96 = v88;
    v97 = v89;
    v98 = v90;
    v99 = v91;
    v100 = 0x100000000 * v93 >> 32;
    v101 = v92;
    v102 = v94;
    v103 = v95;
    v104 = 0;
    goto lab_0x537a65;
  lab_0x537bf9:
    // 0x537bf9
    function_50d7a0(&result, (int64_t)v76, 0, a4);
    v3 = result;
    v4 = v74;
    v7 = v67;
    v8 = v75;
    goto lab_0x5379b3;
}

// Address range: 0x539b70 - 0x53ae00
int64_t function_539b70(int64_t a1, int64_t result2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = a6 + 208; // 0x539b78
    __readfsqword(40);
    function_50ab00(v1);
    int64_t v2 = function_566390(&g424); // 0x539bf1
    int64_t * v3 = (int64_t *)v1; // 0x539bf9
    int64_t * v4 = (int64_t *)(*(int64_t *)(*v3 + 24) + 8 * v2); // 0x539c08
    int64_t v5 = *v4; // 0x539c08
    int64_t v6 = v5; // 0x539c0e
    if (v5 == 0) {
        int64_t v7 = function_4efd30(160); // 0x53ac9d
        *(int32_t *)(v7 + 8) = 0;
        *(int64_t *)(v7 + 16) = 0;
        *(int64_t *)(v7 + 24) = 0;
        *(char *)(v7 + 32) = 0;
        *(int64_t *)(v7 + 36) = 0;
        *(int64_t *)(v7 + 48) = 0;
        *(int64_t *)(v7 + 56) = 0;
        *(int64_t *)v7 = (int64_t)&g128;
        *(int64_t *)(v7 + 64) = 0;
        *(int64_t *)(v7 + 72) = 0;
        *(int64_t *)(v7 + 80) = 0;
        *(int64_t *)(v7 + 88) = 0;
        *(int64_t *)(v7 + 96) = 0;
        *(int32_t *)(v7 + 104) = 0;
        *(char *)(v7 + 152) = 0;
        function_50b7d0(v7, v1);
        function_566890(*v3, v7, v2);
        v6 = *v4;
    }
    char v8 = 0; // bp-120, 0x539c45
    int64_t v9; // bp-136, 0x539b70
    int64_t v10 = (int64_t)&v9; // 0x539c4d
    v9 = (int64_t)&v8;
    if (*(char *)(v6 + 32) != 0) {
        // 0x539c64
        function_52b8e0(v10, 32);
    }
    // 0x539c73
    char * v11; // bp-104, 0x539b70
    int64_t v12 = (int64_t)&v11; // 0x539c73
    char v13 = 0; // bp-88, 0x539c8c
    v11 = &v13;
    function_52b8e0(v12, 32);
    int32_t v14 = *(int32_t *)(v6 + 104); // 0x539cca
    int32_t v15 = v14; // bp-140, 0x539cdb
    int64_t v16 = (int64_t)&v15; // 0x539cea
    int64_t v17 = 0; // 0x539d13
    unsigned char v18; // 0x539d19
    uint32_t v19; // 0x539d25
    if ((char)v14 < 5) {
        // 0x539d19
        v18 = *(char *)v16;
        v19 = *(int32_t *)(4 * (int64_t)v18 + (int64_t)&g105);
        return (int64_t)v19 + (int64_t)&g105;
    }
    while ((int32_t)v17 <= 2) {
        // 0x539da4
        v17++;
        int64_t v20 = v17; // 0x539db2
        if (*(char *)(v17 + v16) < 5) {
            // 0x539d19
            v18 = *(char *)(v20 + v16);
            v19 = *(int32_t *)(4 * (int64_t)v18 + (int64_t)&g105);
            return (int64_t)v19 + (int64_t)&g105;
        }
    }
    // 0x53ad89
    function_52cc60(a9, v12);
    char v21; // 0x539b70
    if (result2 != 0) {
        if ((int32_t)a3 == -1) {
            uint64_t result = *(int64_t *)(result2 + 16); // 0x53ab00
            if (result >= *(int64_t *)(result2 + 24)) {
                // 0x53ae4f
                return result;
            }
            // 0x53ab0e
            if (*(int32_t *)result == -1) {
                // 0x53ae4f
                return 0xffffffff;
            }
        }
        if (a4 == 0) {
            goto lab_0x539e70;
        } else {
            // 0x539e5a
            v21 = 0;
            if ((int32_t)a5 == -1) {
                goto lab_0x53a71a;
            } else {
                goto lab_0x539e68;
            }
        }
    } else {
        if (a4 == 0) {
            goto lab_0x539e68;
        } else {
            // 0x53a192
            v21 = 1;
            if ((int32_t)a5 != -1) {
                goto lab_0x539e70;
            } else {
                goto lab_0x53a71a;
            }
        }
    }
  lab_0x539e70:;
    int64_t v22 = (int64_t)v11; // 0x539e75
    if (v12 + 16 != v22) {
        // 0x539e96
        function_4eeb50(v22);
    }
    // 0x539ead
    if (v9 != v10 + 16) {
        // 0x539ec3
        function_4eeb50(v9);
    }
    // 0x539eda
    __readfsqword(40);
    return result2;
  lab_0x539e68:;
    int32_t * v23 = (int32_t *)a8; // 0x539e6d
    *v23 = *v23 | 2;
    goto lab_0x539e70;
  lab_0x53a71a:;
    uint64_t result3 = *(int64_t *)(a4 + 16); // 0x53a71a
    if (result3 >= *(int64_t *)(a4 + 24)) {
        // 0x53ae4f
        return result3;
    }
    // 0x53a728
    if (*(int32_t *)result3 == -1) {
        // 0x53ae4f
        return 0xffffffff;
    }
    // 0x53a733
    if (v21 != 0) {
        goto lab_0x539e70;
    } else {
        goto lab_0x539e68;
    }
}

// Address range: 0x53af80 - 0x53c210
int64_t function_53af80(int64_t a1, int64_t result2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = a6 + 208; // 0x53af88
    __readfsqword(40);
    function_50ab00(v1);
    int64_t v2 = function_566390(&g425); // 0x53b001
    int64_t * v3 = (int64_t *)v1; // 0x53b009
    int64_t * v4 = (int64_t *)(*(int64_t *)(*v3 + 24) + 8 * v2); // 0x53b018
    int64_t v5 = *v4; // 0x53b018
    int64_t v6 = v5; // 0x53b01e
    if (v5 == 0) {
        int64_t v7 = function_4efd30(160); // 0x53c0ad
        *(int32_t *)(v7 + 8) = 0;
        *(int64_t *)(v7 + 16) = 0;
        *(int64_t *)(v7 + 24) = 0;
        *(char *)(v7 + 32) = 0;
        *(int64_t *)(v7 + 36) = 0;
        *(int64_t *)(v7 + 48) = 0;
        *(int64_t *)(v7 + 56) = 0;
        *(int64_t *)v7 = (int64_t)&g129;
        *(int64_t *)(v7 + 64) = 0;
        *(int64_t *)(v7 + 72) = 0;
        *(int64_t *)(v7 + 80) = 0;
        *(int64_t *)(v7 + 88) = 0;
        *(int64_t *)(v7 + 96) = 0;
        *(int32_t *)(v7 + 104) = 0;
        *(char *)(v7 + 152) = 0;
        function_50bde0(v7, v1);
        function_566890(*v3, v7, v2);
        v6 = *v4;
    }
    char v8 = 0; // bp-120, 0x53b055
    int64_t v9; // bp-136, 0x53af80
    int64_t v10 = (int64_t)&v9; // 0x53b05d
    v9 = (int64_t)&v8;
    if (*(char *)(v6 + 32) != 0) {
        // 0x53b074
        function_52b8e0(v10, 32);
    }
    // 0x53b083
    char * v11; // bp-104, 0x53af80
    int64_t v12 = (int64_t)&v11; // 0x53b083
    char v13 = 0; // bp-88, 0x53b09c
    v11 = &v13;
    function_52b8e0(v12, 32);
    int32_t v14 = *(int32_t *)(v6 + 104); // 0x53b0da
    int32_t v15 = v14; // bp-140, 0x53b0eb
    int64_t v16 = (int64_t)&v15; // 0x53b0fa
    int64_t v17 = 0; // 0x53b123
    unsigned char v18; // 0x53b129
    uint32_t v19; // 0x53b135
    if ((char)v14 < 5) {
        // 0x53b129
        v18 = *(char *)v16;
        v19 = *(int32_t *)(4 * (int64_t)v18 + (int64_t)&g106);
        return (int64_t)v19 + (int64_t)&g106;
    }
    while ((int32_t)v17 <= 2) {
        // 0x53b1b4
        v17++;
        int64_t v20 = v17; // 0x53b1c2
        if (*(char *)(v17 + v16) < 5) {
            // 0x53b129
            v18 = *(char *)(v20 + v16);
            v19 = *(int32_t *)(4 * (int64_t)v18 + (int64_t)&g106);
            return (int64_t)v19 + (int64_t)&g106;
        }
    }
    // 0x53c199
    function_52cc60(a9, v12);
    char v21; // 0x53af80
    if (result2 != 0) {
        if ((int32_t)a3 == -1) {
            uint64_t result = *(int64_t *)(result2 + 16); // 0x53bf10
            if (result >= *(int64_t *)(result2 + 24)) {
                // 0x53c25f
                return result;
            }
            // 0x53bf1e
            if (*(int32_t *)result == -1) {
                // 0x53c25f
                return 0xffffffff;
            }
        }
        if (a4 == 0) {
            goto lab_0x53b280;
        } else {
            // 0x53b26a
            v21 = 0;
            if ((int32_t)a5 == -1) {
                goto lab_0x53bb2a;
            } else {
                goto lab_0x53b278;
            }
        }
    } else {
        if (a4 == 0) {
            goto lab_0x53b278;
        } else {
            // 0x53b5a2
            v21 = 1;
            if ((int32_t)a5 != -1) {
                goto lab_0x53b280;
            } else {
                goto lab_0x53bb2a;
            }
        }
    }
  lab_0x53b280:;
    int64_t v22 = (int64_t)v11; // 0x53b285
    if (v12 + 16 != v22) {
        // 0x53b2a6
        function_4eeb50(v22);
    }
    // 0x53b2bd
    if (v9 != v10 + 16) {
        // 0x53b2d3
        function_4eeb50(v9);
    }
    // 0x53b2ea
    __readfsqword(40);
    return result2;
  lab_0x53b278:;
    int32_t * v23 = (int32_t *)a8; // 0x53b27d
    *v23 = *v23 | 2;
    goto lab_0x53b280;
  lab_0x53bb2a:;
    uint64_t result3 = *(int64_t *)(a4 + 16); // 0x53bb2a
    if (result3 >= *(int64_t *)(a4 + 24)) {
        // 0x53c25f
        return result3;
    }
    // 0x53bb38
    if (*(int32_t *)result3 == -1) {
        // 0x53c25f
        return 0xffffffff;
    }
    // 0x53bb43
    if (v21 != 0) {
        goto lab_0x53b280;
    } else {
        goto lab_0x53b278;
    }
}

// Address range: 0x55a5d0 - 0x55b696
int64_t function_55a5d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t str, int64_t a10) {
    int64_t result = a2; // bp-216, 0x55a60b
    int64_t v1 = a4; // bp-232, 0x55a61b
    __readfsqword(40);
    function_556610();
    int64_t v2 = function_554b00(a6 + 208); // 0x55a662
    int32_t len = strlen((char *)str); // 0x55a66d
    uint64_t v3 = (int64_t)len; // 0x55a66d
    int64_t v4 = (int64_t)&result; // 0x55a6b9
    int64_t v5 = function_524600(v4, &v1); // 0x55a6bc
    int64_t v6 = 0; // 0x55a6c4
    bool v7; // 0x55a5d0
    char v8; // 0x55a5d0
    int64_t v9; // 0x55a5d0
    int64_t v10; // 0x55a5d0
    int64_t v11; // 0x55a5d0
    int64_t v12; // 0x55a5d0
    char v13; // 0x55a5d0
    int64_t v14; // 0x55a5d0
    int64_t v15; // 0x55a5d0
    int64_t v16; // 0x55a6e6
    char * v17; // 0x55a6ea
    int64_t v18; // 0x55a5d0
    if (len == 0 || (char)v5 == 1) {
      lab_0x55a800:
        // 0x55a800
        if (v6 == v3) {
            // 0x55a818
            __readfsqword(40);
            return result;
        }
    } else {
        // 0x55a6d2
        v18 = v2 + 313;
        v7 = false;
        v12 = 0;
        while (true) {
          lab_0x55a6d2_2:
            // 0x55a6d2
            v10 = v12;
            while (true) {
              lab_0x55a6d2:
                if (v7) {
                    // break (via goto) -> 0x55a810
                    goto lab_0x55a810_2;
                }
                // 0x55a6e1
                v11 = v10;
                v15 = v11 + str;
                v16 = v11 + 1;
                v17 = (char *)v15;
                unsigned char v19 = *v17; // 0x55a6ea
                char * v20 = (char *)(v18 + (int64_t)v19); // 0x55a6ee
                char v21 = *v20; // 0x55a6ee
                v13 = v21;
                if (v21 == 0) {
                    // 0x55a7ec
                    v8 = 0;
                    if (v19 == 0) {
                        goto lab_0x55a7b0;
                    } else {
                        // 0x55a7f0
                        *v20 = v19;
                        v13 = v19;
                        goto lab_0x55a702;
                    }
                } else {
                    goto lab_0x55a702;
                }
            }
          lab_0x55a70b:;
            unsigned char v22 = *(char *)(v16 + str); // 0x55a70b
            int64_t v23 = v22; // 0x55a70b
            char * v24 = (char *)(v18 + v23); // 0x55a711
            unsigned char v25 = *v24; // 0x55a711
            v14 = v25;
            if (v25 == 0) {
                // 0x55a858
                v9 = v16;
                if (v22 == 0) {
                    goto lab_0x55a78e;
                } else {
                    // 0x55a870
                    *v24 = v22;
                    v14 = v23;
                    goto lab_0x55a724;
                }
            } else {
                goto lab_0x55a724;
            }
        }
    }
  lab_0x55a810_2:;
    int32_t * v26 = (int32_t *)a7; // 0x55a815
    *v26 = *v26 | 4;
    // 0x55a818
    __readfsqword(40);
    return result;
  lab_0x55a702:
    // 0x55a702
    if (v13 == 37) {
        // break -> 0x55a70b
        goto lab_0x55a70b;
    }
    // 0x55a702
    v8 = *v17;
    goto lab_0x55a7b0;
  lab_0x55a7b0:;
    int64_t v27 = v16; // 0x55a7bf
    if (v8 != (char)function_5246d0(v4)) {
        goto lab_0x55a6b4;
    }
    // 0x55a880
    function_5245c0(v4);
    int64_t v28 = function_524600(v4, &v1); // 0x55a6bc
    v10 = v16;
    v6 = v16;
    if (v16 >= v3 || (char)v28 == 1) {
        goto lab_0x55a800;
    }
    goto lab_0x55a6d2;
  lab_0x55a724:;
    int64_t v29 = v14; // 0x55a5d0
    int64_t v30 = v16; // 0x55a5d0
    int64_t v31; // 0x55a5d0
    switch ((char)v31) {
        case 69: {
            goto lab_0x55a758;
        }
        case 79: {
            goto lab_0x55a758;
        }
        default: {
            goto lab_0x55a739;
        }
    }
  lab_0x55a78e:
    // 0x55a78e
    v27 = v9 + 1;
  lab_0x55a6b4:;
    int64_t v32 = function_524600(v4, &v1); // 0x55a6bc
    v7 = true;
    v12 = v27;
    if (v27 >= v3 || (char)v32 == 1) {
        // break -> 0x55a810
        goto lab_0x55a810_2;
    }
    goto lab_0x55a6d2_2;
  lab_0x55a758:;
    int64_t v33 = v11 + 2; // 0x55a758
    unsigned char v34 = *(char *)(v15 + 2); // 0x55a75c
    int64_t v35 = v34; // 0x55a75c
    char * v36 = (char *)(v18 + v35); // 0x55a762
    unsigned char v37 = *v36; // 0x55a762
    v29 = v37;
    v30 = v33;
    if (v37 != 0) {
        goto lab_0x55a739;
    } else {
        // 0x55a772
        v9 = v33;
        if (v34 != 0) {
            // 0x55a8b8
            *v36 = v34;
            v29 = v35;
            v30 = v33;
            goto lab_0x55a739;
        } else {
            goto lab_0x55a78e;
        }
    }
  lab_0x55a739:;
    int64_t v38 = v29 + 0xffffffbf; // 0x55a739
    v9 = v30;
    if ((char)v38 < 57) {
        int32_t v39 = *(int32_t *)((4 * v38 & 1020) + (int64_t)&g107); // 0x55a74b
        return (int64_t)v39 + (int64_t)&g107;
    }
    goto lab_0x55a78e;
}
