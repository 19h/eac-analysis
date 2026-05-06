/*
 * Targeted RetDec C for native executable gap queue batch 184.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4d7f50-0x4d8c59 rank=37 name=sym.blake3_hasher_finalize_seek kind=symbol_named bytes=3337 uncovered=3337
 *   0x4ed250-0x4edf1f rank=38 name=sym.ZydisDecoderDecodeOperands kind=symbol_named bytes=3279 uncovered=3279
 *   0x47e0a-0x48a9d rank=39 name=fcn.00047e0a kind=r2_discovered bytes=3219 uncovered=3219
 *   0x5df38-0x5eba0 rank=40 name=fcn.0005df38 kind=r2_discovered bytes=3176 uncovered=3176
 *   0x4d9eb0-0x4daa69 rank=41 name=fcn.004d9eb0 kind=r2_discovered bytes=3001 uncovered=3001
 *   0x4ab520-0x4ac09f rank=42 name=fcn.004ab520 kind=r2_discovered bytes=2943 uncovered=2943
 *   0x21906-0x22f41 rank=43 name=fcn.00021906 kind=r2_discovered bytes=5691 uncovered=2925
 *   0x4a0710-0x4a1241 rank=44 name=fcn.004a0710 kind=r2_discovered bytes=2865 uncovered=2865
 *   0x4d4f10-0x4d5a23 rank=45 name=fcn.004d4f10 kind=r2_discovered bytes=2835 uncovered=2835
 *   0x495700-0x49620b rank=46 name=fcn.00495700 kind=r2_discovered bytes=2827 uncovered=2827
 *   0x573920-0x5743bc rank=47 name=fcn.00573920 kind=r2_discovered bytes=2716 uncovered=2716
 *   0x5784e0-0x578f7c rank=48 name=fcn.005784e0 kind=r2_discovered bytes=2716 uncovered=2716
 *   0x4a98b0-0x4aa335 rank=49 name=fcn.004a98b0 kind=r2_discovered bytes=2693 uncovered=2693
 *   0x4a3d40-0x4a479b rank=50 name=fcn.004a3d40 kind=r2_discovered bytes=2651 uncovered=2651
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
extern int g1;
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
extern int g51;
extern int g53;
extern int g54;
extern int g55;
extern int g56;
extern int g57;
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
extern int g76;
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
extern int g112;
extern int g113;
extern int g114;
extern int g115;
extern int g116;
extern int g117;
extern int g118;
extern int g119;
extern int g120;
extern int g122;
extern int g123;
extern int g125;
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
extern int g278;
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
extern int g345;
int64_t entry_point();
unsigned char llvm_ctpop_i8(unsigned char value);
uint16_t llvm_bswap_i16(uint16_t value);
uint32_t llvm_bswap_i32(uint32_t value);
uint64_t llvm_ctlz_i64(uint64_t value, bool is_zero_undef);
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
int128_t __asm_movq();
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
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
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
int128_t __asm_movups_133();
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

int64_t function_14310fab();
int64_t function_20590();
int64_t function_205e0();
int64_t function_20710();
int64_t function_20730();
int64_t function_20d1e();
int64_t function_20d68();
int64_t function_21748();
int64_t function_21906(int64_t a1, int64_t a2, int64_t a3, int64_t * a4);
int64_t function_21932(int64_t a1, int64_t a2);
int64_t function_2196c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_21a2d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_21a50(int64_t result, int64_t a2);
int64_t function_21b06(int64_t a1, int64_t a2);
int64_t function_21b66(int64_t a1, int64_t a2);
int64_t function_21b72(int64_t a1, int64_t a2);
int64_t function_21b76(int64_t a1);
int64_t function_21ba2(int64_t a1, int64_t a2);
int64_t function_21bd8(void);
int64_t function_21bef(int64_t a1);
int64_t function_21c1d(void);
int64_t function_21c48(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_21ca4(int64_t a1);
int64_t function_21cae(int64_t a1);
int64_t function_21d06(int64_t result);
int64_t function_21d0a(int64_t a1);
int64_t function_21d14(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_21e5e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_21fac(void);
int64_t function_21faf(int64_t * a1, int64_t * a2, int64_t a3);
int64_t function_21fba(int64_t a1);
int64_t function_21fe4(int64_t a1, int64_t a2);
int64_t function_2216e(int64_t result);
int64_t function_22172(int64_t a1);
int64_t function_22186(void);
int64_t function_22188(int64_t a1);
int64_t function_221a8(int64_t * a1);
int64_t function_221c0(int64_t a1, int64_t a2);
int64_t function_2247e(int64_t a1);
int64_t function_225f6(int64_t a1);
int64_t function_2260e(int64_t a1, int64_t a2);
int64_t function_2263e(int64_t a1, int64_t a2);
int64_t function_226ca(int64_t a1, int64_t a2);
int64_t function_2293e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_22aea(int64_t a1, int64_t a2, int64_t a3);
int64_t function_22e2e(int64_t a1, int64_t a2);
int64_t function_22e3a(int64_t a1, int64_t a2);
int64_t function_22ea0(int64_t a1, int64_t a2);
int64_t function_22edc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_22f0f(int64_t a1);
int64_t function_2327e();
int64_t function_24460();
int64_t function_24660();
int64_t function_24bd0();
int64_t function_24cec();
int64_t function_24dff();
int64_t function_24e0d();
int64_t function_24e1e();
int64_t function_24e6a();
int64_t function_24f44();
int64_t function_25018();
int64_t function_2508e();
int64_t function_2515a();
int64_t function_251d6();
int64_t function_251de();
int64_t function_251e8();
int64_t function_25236();
int64_t function_2527b();
int64_t function_254fe();
int64_t function_2556e();
int64_t function_255a8();
int64_t function_255da();
int64_t function_25646();
int64_t function_25a3e();
int64_t function_25ff8();
int64_t function_2603e();
int64_t function_2a9de();
int64_t function_3602c();
int64_t function_4525c();
int64_t function_455ee();
int64_t function_477fa();
int64_t function_47a80();
int64_t function_47e0a(int64_t a1);
int64_t function_48fcf5();
int64_t function_4901fa();
int64_t function_495700(int64_t a1);
int64_t function_498b30();
int64_t function_498b70();
int64_t function_498b90();
int64_t function_498c10();
int64_t function_498d40();
int64_t function_49d220();
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_49e960();
int64_t function_49eba0();
int64_t function_49ebd0();
int64_t function_49f070();
int64_t function_49f0c0();
int64_t function_4a0650();
int64_t function_4a0710(int64_t a1);
int64_t function_4a2f8();
int64_t function_4a3d40(int64_t a1);
int64_t function_4a93a();
int64_t function_4a98b0(int64_t str, uint64_t size, int64_t a3, int64_t a4);
int64_t function_4ab2f0();
int64_t function_4ab380();
int64_t function_4ab520(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4ac570();
int64_t function_4ac610();
int64_t function_4ac9e0();
int64_t function_4acba0();
int64_t function_4ad070();
int64_t function_4ad100();
int64_t function_4ad200();
int64_t function_4ad2a0();
int64_t function_4ad450();
int64_t function_4ad570();
int64_t function_4ad6f0();
int64_t function_4afd30();
int64_t function_4afe70();
int64_t function_4afeb0();
int64_t function_4aff10();
int64_t function_4affe0();
int64_t function_4b00e0();
int64_t function_4b0ac0();
int64_t function_4b0fa0();
int64_t function_4b4d90();
int64_t function_4b4f20();
int64_t function_4b55b0();
int64_t function_4b5690();
int64_t function_4b8370();
int64_t function_4b8430();
int64_t function_4b91b0();
int64_t function_4b9280();
int64_t function_4b92f0();
int64_t function_4bf0f0();
int64_t function_4c14d0();
int64_t function_4c1690();
int64_t function_4c16b0();
int64_t function_4c1770();
int64_t function_4c1820();
int64_t function_4c1850();
int64_t function_4c1880();
int64_t function_4c19e0();
int64_t function_4c1d00();
int64_t function_4c1d60();
int64_t function_4c1df0();
int64_t function_4c1e70();
int64_t function_4c28f0();
int64_t function_4c2a20();
int64_t function_4c3140();
int64_t function_4c31c0();
int64_t function_4c4450();
int64_t function_4c4470();
int64_t function_4c4530();
int64_t function_4c4700();
int64_t function_4c4900();
int64_t function_4c6100();
int64_t function_4cb410();
int64_t function_4cb4a0();
int64_t function_4cb520();
int64_t function_4cc7d0();
int64_t function_4cc900();
int64_t function_4d4f10(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, uint32_t a5, int64_t * a6, uint64_t a7);
int64_t function_4d8f60();
int64_t function_4d8ff0();
int64_t function_4d9090();
int64_t function_4d91a0();
int64_t function_4d92b0();
int64_t function_4d9eb0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_4e9c8();
int64_t function_4ed34();
int64_t function_4eda6();
int64_t function_4ede78(void);
int64_t function_4edeb4(void);
int64_t function_4edece(void);
int64_t function_4edee8(void);
int64_t function_4eeb30();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f3410();
int64_t function_4f39b0();
int64_t function_4f4170();
int64_t function_4f47e0();
int64_t function_50a420();
int64_t function_523ad0();
int64_t function_536e00();
int64_t function_554420();
int64_t function_565f30();
int64_t function_5681f0();
int64_t function_568500();
int64_t function_569370();
int64_t function_569910();
int64_t function_56a0d0();
int64_t function_56a740();
int64_t function_56afb0();
int64_t function_56b2c0();
int64_t function_5720a0();
int64_t function_572230();
int64_t function_5725b0();
int64_t function_5727c0();
int64_t function_5729d0();
int64_t function_572c50();
int64_t function_573920(int64_t a1, int64_t a2);
int64_t function_5762d0();
int64_t function_576550();
int64_t function_576a20();
int64_t function_576d70();
int64_t function_5770c0();
int64_t function_577490();
int64_t function_5784e0(int64_t a1, int64_t a2);
int64_t function_5cab4();
int64_t function_5dc68();
int64_t function_5dd2a();
int64_t function_5ddde();
int64_t function_5df38(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5f416();
int64_t function_5f453();
int64_t function_5f47b();
int64_t function_61d14();
int64_t function_62114();
int64_t function_621c2();
int64_t function_625dc();
int64_t function_62d6e();
int64_t function_63d20();
int64_t function_63d4c();
int64_t function_63d80();
int64_t function_65cd0();
int64_t function_6aba4();
int64_t function_71c60();
int64_t function_7214c();
int64_t function_7216c();
int64_t function_72496();
int64_t function_7259e();
int64_t function_7260a();
int64_t function_7293a();
int64_t function_72994();
int64_t function_7299a();
int64_t function_729b0();
int64_t function_729b6();
int64_t function_729ce();
int64_t function_72b18();
int64_t function_72dce();
int64_t function_d3e3e();
int64_t function_d708c();
int64_t function_dd0e3();

// Address range: 0x21906 - 0x21932
int64_t function_21906(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    // 0x21906
    *(int32_t *)a1 = (int32_t)a2;
    *(int16_t *)(a1 + 4) = (int16_t)a3;
    function_21b06(a1 + 8, (int64_t)a4);
    __asm_rep_stosd_memset((char *)(a1 + 32), 0, 8);
    return function_21748(a1);
}

// Address range: 0x21932 - 0x2196c
int64_t function_21932(int64_t a1, int64_t a2) {
    // 0x21932
    *(int32_t *)a1 = *(int32_t *)a2;
    *(int16_t *)(a1 + 4) = (int16_t)*(int32_t *)(a2 + 4);
    function_21b06(a1 + 8, a2 + 8);
    __asm_movups(*(int128_t *)(a1 + 32), __asm_movups_133(*(int128_t *)(a2 + 32)));
    __asm_movups(*(int128_t *)(a1 + 48), __asm_movups_133(*(int128_t *)(a2 + 48)));
    int64_t result; // 0x21932
    return result;
}

// Address range: 0x2196c - 0x21a2d
int64_t function_2196c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __readfsqword(40); // 0x21987
    int64_t v2 = 0; // bp-72, 0x2199a
    int64_t v3 = 0; // 0x219b5
    if (a5 != 0) {
        // 0x219b7
        v3 = function_4efd30(a5, a2, a3, a4);
    }
    // 0x219c9
    v2 = v3;
    function_21a2d(a4, a5 + a4, v3);
    function_21906(a1, a2 & 0xffffffff, a3 % 0x10000, &v2);
    if (v2 != 0) {
        // 0x21a06
        function_4eeb50(v2);
    }
    int64_t result = 0; // 0x21a19
    if (v1 != __readfsqword(40)) {
        // 0x21a1b
        __stack_chk_fail();
        result = (int64_t)&g345;
    }
    // 0x21a20
    return result;
}

// Address range: 0x21a2d - 0x21a50
int64_t function_21a2d(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 - a1; // 0x21a34
    int64_t dest_mem = a3; // 0x21a37
    if (v1 != 0) {
        // 0x21a39
        dest_mem = (int64_t)memmove((int64_t *)a3, (int64_t *)a1, (int32_t)v1);
    }
    // 0x21a4a
    return dest_mem + v1;
}

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

// Address range: 0x21b06 - 0x21b65
int64_t function_21b06(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x21b0c
    int64_t v2 = *v1 - a2; // 0x21b13
    int64_t * v3 = (int64_t *)a1; // 0x21b19
    *v3 = 0;
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x21b20
    *v4 = 0;
    int64_t * v5 = (int64_t *)(a1 + 16); // 0x21b28
    *v5 = 0;
    int64_t v6 = 0; // 0x21b33
    if (v2 != 0) {
        // 0x21b35
        int64_t v7; // 0x21b06
        v6 = function_4efd30(v2, a2, v7, v7);
    }
    // 0x21b3d
    *v3 = v6;
    *v4 = v6;
    *v5 = v6 + v2;
    int64_t v8 = *v1; // 0x21b4b
    int64_t result = function_21a2d(v8, v8, v6); // 0x21b57
    *v4 = result;
    return result;
}

// Address range: 0x21b66 - 0x21b72
int64_t function_21b66(int64_t a1, int64_t a2) {
    // 0x21b66
    *(int64_t *)a1 = 0;
    *(int64_t *)(a1 + 8) = a2;
    int64_t result; // 0x21b66
    return result;
}

// Address range: 0x21b72 - 0x21b76
int64_t function_21b72(int64_t a1, int64_t a2) {
    // 0x21b72
    *(int64_t *)a1 = a2 + a1;
    int64_t result; // 0x21b72
    return result;
}

// Address range: 0x21b76 - 0x21ba2
int64_t function_21b76(int64_t a1) {
    // 0x21b76
    *(int64_t *)a1 = 0;
    *(int64_t *)(a1 + 8) = 0;
    *(int64_t *)(a1 + 16) = 0;
    int64_t result = function_7293a(a1 + 24); // 0x21b95
    *(int16_t *)(a1 + 64) = 0;
    return result;
}

// Address range: 0x21ba2 - 0x21bd1
int64_t function_21ba2(int64_t a1, int64_t a2) {
    // 0x21ba2
    __readfsqword(40);
    return function_d3e3e();
}

// Address range: 0x21bd8 - 0x21bd9
int64_t function_21bd8(void) {
    // 0x21bd8
    int64_t result; // 0x21bd8
    return result;
}

// Address range: 0x21bef - 0x21bf8
int64_t function_21bef(int64_t a1) {
    // 0x21bef
    return __asm_int1(a1);
}

// Address range: 0x21c1d - 0x21c26
int64_t function_21c1d(void) {
    // 0x21c1d
    int64_t result; // 0x21c1d
    int32_t * v1 = (int32_t *)(result + 13);
    *v1 = *v1 | (int32_t)result;
    int64_t v2; // 0x21c1d
    unsigned char v3 = *(char *)&v2; // 0x21c20
    *(char *)v2 = v3 / 2 | 128 * v3;
    return result;
}

// Address range: 0x21c48 - 0x21ca3
int64_t function_21c48(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x21c4c
    *(char *)a3 = 0;
    int64_t v1; // 0x21c48
    __asm_out(34, (int32_t)v1);
    int64_t v2; // 0x21c48
    unsigned char v3 = *(char *)&v2; // 0x21c50
    unsigned char v4 = v3 + (char)(v1 / 256); // 0x21c50
    *(char *)v2 = v4;
    int64_t result; // 0x21c48
    if (v4 < v3 || v4 == 0) {
        // 0x21ca2
        return result;
    }
    int32_t * v5 = (int32_t *)(v1 + 20); // 0x21c73
    *v5 = 0;
    result = v2 % 256 | (int64_t)(*v5 & -256);
    if (*(int64_t *)(v1 + 32) != __readfsqword(40)) {
        // 0x21c91
        __stack_chk_fail();
        result = (int64_t)&g345;
    }
    // 0x21ca2
    return result;
}

// Address range: 0x21ca4 - 0x21cad
int64_t function_21ca4(int64_t a1) {
    // 0x21ca4
    return function_7299a(a1 + 24);
}

// Address range: 0x21cae - 0x21d06
int64_t function_21cae(int64_t a1) {
    // 0x21cae
    int64_t v1; // bp-40, 0x21cae
    int64_t v2 = (int64_t)&v1; // 0x21cbe
    int64_t v3 = __readfsqword(40); // 0x21cc1
    function_729b6(v2, a1 + 24);
    int64_t v4 = function_729ce(&v1); // 0x21cf6
    if (v3 != __readfsqword(40)) {
        // 0x21cf8
        __stack_chk_fail();
        v4 = (int64_t)&g345;
    }
    // 0x21cfd
    return v4 & -256 | (int64_t)(*(int64_t *)(a1 + 8) == v2);
}

// Address range: 0x21d06 - 0x21d0a
int64_t function_21d06(int64_t result) {
    // 0x21d06
    return result;
}

// Address range: 0x21d0a - 0x21d13
int64_t function_21d0a(int64_t a1) {
    // 0x21d0a
    return function_729b0(a1 + 24);
}

// Address range: 0x21d14 - 0x21e5e
int64_t function_21d14(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = __readfsqword(40); // 0x21d20
    if ((int32_t)a2 != 0) {
        // 0x21d38
        return function_d708c();
    }
    int64_t result = 0; // 0x21e4c
    if (v1 != __readfsqword(40)) {
        // 0x21e4e
        __stack_chk_fail();
        result = (int64_t)&g345;
    }
    // 0x21e53
    return result;
}

// Address range: 0x21e5e - 0x21fab
int64_t function_21e5e(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x21e80
    int64_t v2 = 0x3ffffffffffffff; // 0x21ea8
    int64_t v3; // 0x21e5e
    int64_t v4; // 0x21e5e
    if (v2 > 0x3ffffffffffffff | v2 < *v1 - a1 >> 6) {
        goto lab_0x21f97;
    } else {
        // 0x21eb7
        v3 = v2;
        v4 = 0;
        if (v2 != 0) {
            goto lab_0x21f97;
        } else {
            goto lab_0x21ec3;
        }
    }
  lab_0x21f97:;
    // 0x21f97
    int64_t v5; // 0x21e5e
    int64_t v6 = function_4efd30(64 * v2, a2, a1, v5); // 0x21f9e
    v3 = v2;
    v4 = v6;
    goto lab_0x21ec3;
  lab_0x21ec3:;
    int64_t v7 = v4 + a2 - a1; // 0x21ec3
    function_21932(v7, a3);
    int64_t v8 = v4; // 0x21ee4
    if (v7 != a2) {
        int64_t v9 = v4 + 64; // 0x21ed9
        int64_t v10 = v7 + 64; // 0x21ee9
        function_21932(v4, v7);
        int64_t v11 = v10; // 0x21ee4
        int64_t v12 = v9; // 0x21ee4
        v8 = v9;
        while (v10 != a2) {
            // 0x21ee6
            v9 = v12 + 64;
            v10 = v11 + 64;
            function_21932(v12, v11);
            v11 = v10;
            v12 = v9;
            v8 = v9;
        }
    }
    int64_t v13 = *v1; // 0x21efb
    int64_t v14 = v4 + 64 + (a2 - v7 & -64); // 0x21f09
    int64_t v15 = a2; // 0x21f14
    int64_t v16 = v8; // 0x21f14
    int64_t v17 = v14; // 0x21f14
    if (v13 != a2) {
        int64_t v18 = v14;
        int64_t v19 = a2 + 64; // 0x21f25
        function_21932(v18, a2);
        int64_t v20 = v18 + 64; // 0x21f37
        int64_t v21 = v19; // 0x21f14
        while (v13 != v19) {
            // 0x21f16
            v18 = v20;
            v19 = v21 + 64;
            function_21932(v18, v21);
            v20 = v18 + 64;
            v21 = v19;
        }
        // 0x21f11
        v15 = *v1;
        v16 = v18;
        v17 = v20;
    }
    int64_t v22 = v17; // 0x21f4e
    int64_t v23 = v15; // 0x21f4e
    if (v15 != v16) {
        int64_t v24 = *(int64_t *)(v16 + 8); // 0x21f50
        int64_t v25 = v17; // 0x21f57
        if (v24 != 0) {
            // 0x21f59
            v25 = function_4eeb50(v24);
        }
        int64_t v26 = v16 + 64; // 0x21f5e
        int64_t v27 = v26; // 0x21f4e
        int64_t v28 = v25; // 0x21f4e
        v22 = v25;
        v23 = v24;
        while (v15 != v26) {
            // 0x21f50
            v24 = *(int64_t *)(v27 + 8);
            v25 = v28;
            if (v24 != 0) {
                // 0x21f59
                v25 = function_4eeb50(v24);
            }
            // 0x21f5e
            v26 = v27 + 64;
            v27 = v26;
            v28 = v25;
            v22 = v25;
            v23 = v24;
        }
    }
    int64_t result = v22; // 0x21f6b
    if (v23 != 0) {
        // 0x21f6d
        result = function_4eeb50(v23);
    }
    // 0x21f72
    *(int64_t *)a1 = v4;
    *v1 = v14 - a2 + v13;
    *(int64_t *)(a1 + 16) = v4 + 64 * v3;
    return result;
}

// Address range: 0x21fac - 0x21faf
int64_t function_21fac(void) {
    // 0x21fac
    int64_t v1; // 0x21fac
    return v1 & -256 | 1;
}

// Address range: 0x21faf - 0x21fb9
int64_t function_21faf(int64_t * a1, int64_t * a2, int64_t a3) {
    if ((int32_t)a3 == 1) {
        // 0x21fb3
        *a1 = (int64_t)a2;
    }
    // 0x21fb6
    return 0;
}

// Address range: 0x21fba - 0x21fe4
int64_t function_21fba(int64_t a1) {
    // 0x21fba
    function_6aba4(a1 + 24);
    function_71c60(a1 + (int64_t)&g338);
    int64_t result = function_48fcf5(a1); // 0x21fd6
    *(int32_t *)(a1 + 16) = 0;
    return result;
}

// Address range: 0x21fe4 - 0x2216e
int64_t function_21fe4(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x21ff1
    int32_t v2 = a2; // 0x22004
    if (v2 != 0) {
        int32_t * v3 = (int32_t *)(a1 + 16); // 0x2200c
        if (*v3 == 0) {
            int64_t v4 = a1 + (int64_t)&g338; // 0x22019
            *v3 = v2;
            function_72b18(v4, 0);
            int64_t v5; // bp-152, 0x21fe4
            int64_t v6; // bp-184, 0x21fe4
            function_21faf(&v5, &v6, 2);
            function_7216c(v4, &v5, &g51, &g51);
            function_221a8(&v5);
            function_221a8(&v6);
        }
    }
    int64_t result = 0; // 0x22159
    if (v1 != __readfsqword(40)) {
        // 0x2215b
        __stack_chk_fail();
        result = (int64_t)&g345;
    }
    // 0x22160
    return result;
}

// Address range: 0x2216e - 0x22172
int64_t function_2216e(int64_t result) {
    // 0x2216e
    return result;
}

// Address range: 0x22172 - 0x22186
int64_t function_22172(int64_t a1) {
    // 0x22172
    return function_72dce(a1 + (int64_t)&g338) & 0xffffffff;
}

// Address range: 0x22186 - 0x22187
int64_t function_22186(void) {
    // 0x22186
    int64_t result; // 0x22186
    return result;
}

// Address range: 0x22188 - 0x221a8
int64_t function_22188(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 16); // 0x22188
    if (*v1 == 0) {
        // 0x221a7
        int64_t result; // 0x22188
        return result;
    }
    int64_t result2 = function_7260a(a1 + (int64_t)&g338); // 0x22199
    *v1 = 0;
    return result2;
}

// Address range: 0x221a8 - 0x221bc
int64_t function_221a8(int64_t * a1) {
    // 0x221a8
    return *(int64_t *)((int64_t)a1 + 16);
}

// Address range: 0x221c0 - 0x2247e
int64_t function_221c0(int64_t a1, int64_t a2) {
    // 0x221c0
    *(int32_t *)(a1 + 12) = 0;
    *(int64_t *)a1 = (int64_t)&g148;
    function_63d20(a1 + 24);
    int64_t v1 = a1 + (int64_t)&g318; // 0x221e4
    function_63d20(v1);
    *(int64_t *)(a1 + (int64_t)&g2) = 0;
    *(int64_t *)(a1 + (int64_t)&g3) = 0;
    *(int64_t *)(a1 + (int64_t)&g4) = 0;
    *(int64_t *)(a1 + (int64_t)&g5) = 0;
    *(int64_t *)(a1 + (int64_t)&g6) = 0;
    *(int64_t *)(a1 + (int64_t)&g7) = 0;
    *(int64_t *)(a1 + (int64_t)&g10) = 0;
    *(int64_t *)v1 = (int64_t)&g164;
    *(int64_t *)(a1 + (int64_t)&g12) = 0;
    *(int64_t *)(a1 + (int64_t)&g13) = 0;
    *(int64_t *)(a1 + (int64_t)&g14) = 0;
    function_7293a(a1 + (int64_t)&g15);
    *(int64_t *)(a1 + (int64_t)&g16) = (int64_t)&g278;
    function_7293a(a1 + (int64_t)&g18);
    *(int64_t *)(a1 + (int64_t)&g19) = (int64_t)&g278;
    *(int64_t *)(a1 + (int64_t)&g20) = 0;
    *(int64_t *)(a1 + (int64_t)&g21) = 0;
    *(int64_t *)(a1 + (int64_t)&g22) = 0;
    function_621c2(a1 + (int64_t)&g25, 0, &g53);
    function_7293a(a1 + (int64_t)&g26);
    function_7293a(a1 + (int64_t)&g27);
    *(int64_t *)(a1 + (int64_t)&g28) = 0;
    *(int64_t *)(a1 + (int64_t)&g29) = 0;
    *(int64_t *)(a1 + (int64_t)&g30) = 0;
    function_71c60(a1 + (int64_t)&g31);
    function_7293a(a1 + (int64_t)&g32);
    int64_t * v2 = (int64_t *)(a1 + (int64_t)&g33); // 0x22326
    *v2 = 0;
    int64_t * v3 = (int64_t *)(a1 + (int64_t)&g35); // 0x22331
    *v3 = 0;
    int64_t * v4 = (int64_t *)(a1 + (int64_t)&g36); // 0x22341
    *v4 = 0;
    int64_t * v5 = (int64_t *)(a1 + (int64_t)&g37); // 0x2234c
    *v5 = 0;
    int64_t * v6 = (int64_t *)(a1 + (int64_t)&g38); // 0x22357
    *v6 = 0;
    int64_t * v7 = (int64_t *)(a1 + (int64_t)&g39); // 0x22362
    *v7 = 0;
    int64_t * v8 = (int64_t *)(a1 + (int64_t)&g40); // 0x2236d
    *v8 = 0;
    int64_t * v9 = (int64_t *)(a1 + (int64_t)&g41); // 0x22378
    *v9 = 0;
    int64_t * v10 = (int64_t *)(a1 + (int64_t)&g42); // 0x22383
    *v10 = 0;
    int64_t * v11 = (int64_t *)(a1 + (int64_t)&g34); // 0x2238e
    *v11 = 8;
    int64_t v12; // 0x221c0
    int64_t v13 = function_4efd30(64, 0, (int64_t)&g53, v12); // 0x22399
    int64_t v14 = *v11; // 0x2239e
    *v2 = v13;
    int64_t v15 = (4 * v14 - 4 & -8) + v13; // 0x223bd
    int64_t v16 = function_4efd30(504, 0, v14, v12); // 0x223c0
    int64_t v17 = v16 + 504; // 0x223c5
    *(int64_t *)v15 = v16;
    *v6 = v15;
    *v4 = v16;
    *v5 = v17;
    *v10 = v15;
    *v8 = v16;
    *v9 = v17;
    *v3 = v16;
    *v7 = v16;
    function_7293a(a1 + (int64_t)&g43);
    int64_t v18 = a1 + (int64_t)&g44; // 0x22414
    *(int64_t *)(a1 + (int64_t)&g17) = a2;
    *(int32_t *)v18 = 0;
    *(int64_t *)(a1 + (int64_t)&g45) = 0;
    *(int64_t *)(a1 + (int64_t)&g46) = v18;
    *(int64_t *)(a1 + (int64_t)&g47) = v18;
    *(int64_t *)(a1 + (int64_t)&g48) = 0;
    function_24e6a(a1 + 8, 0);
    *(int32_t *)(a1 + (int64_t)&g24) = 1;
    *(int32_t *)(a1 + (int64_t)&g23) = (int32_t)&g53;
    __asm_mfence(a1, 0);
    return function_226ca(a1, 0);
}

// Address range: 0x2247e - 0x225f5
int64_t function_2247e(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + (int64_t)L"L\"" + 16); // 0x2249d
    *(int64_t *)(a1 + (int64_t)L"L\"" - 0x1880) = (int64_t)&g148;
    function_255a8(a1 + (int64_t)L"L\"", v1);
    function_72994(a1 + (int64_t)&g43);
    int64_t v2 = *(int64_t *)(a1 + (int64_t)&g38); // 0x224c0
    int64_t v3 = *(int64_t *)(a1 + (int64_t)&g39); // 0x224c7
    uint64_t v4 = *(int64_t *)(a1 + (int64_t)&g42); // 0x224ce
    int64_t v5 = *(int64_t *)(a1 + (int64_t)&g35); // 0x224d5
    int64_t v6 = v2 + 8;
    int64_t v7 = v6; // 0x22500
    if (v4 > v6) {
        int64_t v8 = *(int64_t *)v7; // 0x22502
        function_25ff8(v8, v8 + 504);
        v7 += 8;
        while (v4 > v7) {
            // 0x22502
            v8 = *(int64_t *)v7;
            function_25ff8(v8, v8 + 504);
            v7 += 8;
        }
    }
    if (v2 == v4) {
        // 0x22539
        function_25ff8(v5, v3);
    } else {
        // 0x2251d
        function_25ff8(v5, *(int64_t *)(a1 + (int64_t)&g37));
        function_25ff8(*(int64_t *)(a1 + (int64_t)&g40), v3);
    }
    // 0x22544
    function_2556e(a1 + (int64_t)&g33);
    function_72994(a1 + (int64_t)&g32);
    function_7259e(a1 + (int64_t)&g31);
    function_254fe(a1 + (int64_t)&g28);
    function_72994(a1 + (int64_t)&g27);
    function_72994(a1 + (int64_t)&g26);
    function_24f44(a1 + (int64_t)&g25);
    function_254fe(a1 + (int64_t)&g20);
    function_2508e(a1 + (int64_t)&g19);
    function_72994(a1 + (int64_t)&g18);
    function_2508e(a1 + (int64_t)&g16);
    function_72994(a1 + (int64_t)&g15);
    function_2603e(a1 + (int64_t)&g318);
    return function_63d4c(a1 + 24);
}

// Address range: 0x225f6 - 0x2260d
int64_t function_225f6(int64_t a1) {
    // 0x225f6
    function_2247e(a1);
    return function_4eeb30(a1, &g49);
}

// Address range: 0x2260e - 0x2263e
int64_t function_2260e(int64_t a1, int64_t a2) {
    // 0x2260e
    function_72b18(a1 + (int64_t)&g31, 0);
    *(int32_t *)(a1 + 12) = (int32_t)a2;
    int64_t v1 = a1 + 8; // 0x2262a
    __asm_mfence(v1, 1);
    return function_24e6a(v1, 1);
}

// Address range: 0x2263e - 0x226c9
int64_t function_2263e(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + (int64_t)&g31; // 0x2263f
    int64_t v2 = __readfsqword(40); // 0x22651
    function_7260a(v1);
    function_72496(v1, 0);
    int64_t v3; // bp-40, 0x2263e
    function_729b6((int64_t)&v3, a1 + (int64_t)&g26);
    function_251d6(a1 + (int64_t)&g9, 0);
    *(int32_t *)(a1 + 12) = 0;
    int64_t v4 = a1 + 8; // 0x22697
    __asm_mfence(v4, 0);
    function_24e6a(v4, 0);
    function_729ce(&v3);
    int64_t result = 0; // 0x226bb
    if (v2 != __readfsqword(40)) {
        // 0x226bd
        __stack_chk_fail();
        result = (int64_t)&g345;
    }
    // 0x226c2
    return result;
}

// Address range: 0x226ca - 0x2293e
int64_t function_226ca(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + (int64_t)&g31; // 0x226d1
    int64_t v2 = __readfsqword(40); // 0x226e3
    function_7260a(v1);
    int64_t v3 = a1 + (int64_t)&g25; // 0x22702
    function_72496(v1, 0);
    int64_t v4; // bp-64, 0x226ca
    function_729b6((int64_t)&v4, a1 + (int64_t)&g26);
    function_62114(v3);
    function_61d14(v3, &g315);
    function_63d80(a1 + 24);
    function_65cd0(a1 + (int64_t)&g318);
    *(int64_t *)(a1 + 16) = 0;
    function_24e6a(a1 + (int64_t)&g8, (int32_t)&g315 ^ (int32_t)&g315);
    function_251d6(a1 + (int64_t)&g9, (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315);
    function_251de(a1 + (int64_t)&g10, (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315);
    *(int64_t *)(a1 + (int64_t)&g11) = 0;
    int64_t v5 = a1 + (int64_t)&g12; // 0x22789
    __asm_mfence(v5, (int64_t)((int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315));
    function_251de(v5, (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315 ^ (int32_t)&g315);
    int64_t v6; // bp-56, 0x226ca
    int64_t v7 = (int64_t)&v6; // 0x227a1
    function_729b6(v7, a1 + (int64_t)&g18);
    int64_t * v8 = (int64_t *)(a1 + (int64_t)&g21); // 0x227a9
    int64_t v9 = *v8; // 0x227a9
    int64_t * v10 = (int64_t *)(a1 + (int64_t)&g20); // 0x227b0
    int64_t v11 = *v10; // 0x227b0
    int64_t v12 = v9; // 0x227ba
    if (v9 != v11) {
        // 0x227bc
        function_24e0d(v11, v9 - v11);
        v12 = *v10;
    }
    int64_t v13 = a1 + (int64_t)&g16; // 0x227ce
    *v8 = v12;
    function_729ce(&v6);
    function_729b6(v7, a1 + (int64_t)&g15);
    int64_t * v14 = (int64_t *)v13; // 0x227f0
    int64_t v15 = *(int64_t *)(*v14 - 24); // 0x227f7
    if (v15 != 0) {
        // 0x22800
        function_255da(v13);
        function_24e0d(*v14, v15);
    }
    // 0x22817
    function_251e8(v13);
    function_729ce(&v6);
    function_2a9de(0, 0);
    function_729b6(v7, a1 + (int64_t)&g27);
    int64_t * v16 = (int64_t *)(a1 + (int64_t)&g29); // 0x2283f
    int64_t v17 = *v16; // 0x2283f
    int64_t * v18 = (int64_t *)(a1 + (int64_t)&g28); // 0x22846
    int64_t v19 = *v18; // 0x22846
    int64_t v20 = v17; // 0x22850
    if (v17 != v19) {
        // 0x22852
        function_24e0d(v19, v17 - v19);
        v20 = *v18;
    }
    // 0x2285a
    *v16 = v20;
    function_729ce(&v6);
    *(int64_t *)(a1 + (int64_t)&g13) = function_24e1e();
    *(int64_t *)(a1 + (int64_t)&g14) = 0;
    function_729b6(v7, a1 + (int64_t)&g32);
    int64_t * v21 = (int64_t *)(a1 + (int64_t)&g35); // 0x2289d
    int64_t * v22 = (int64_t *)(a1 + (int64_t)&g39); // 0x228a4
    if (*v22 != *v21) {
        function_25646(a1 + (int64_t)&g33);
        while (*v22 != *v21) {
            // 0x228ad
            function_25646(a1 + (int64_t)&g33);
        }
    }
    // 0x228b7
    function_729ce(&v6);
    function_729b6(v7, a1 + (int64_t)&g43);
    int64_t * v23 = (int64_t *)(a1 + (int64_t)&g45); // 0x228ce
    function_255a8(a1 + (int64_t)L"L\"", *v23);
    int64_t v24 = a1 + (int64_t)&g44; // 0x228e1
    *v23 = 0;
    *(int64_t *)(a1 + (int64_t)&g48) = 0;
    *(int64_t *)(a1 + (int64_t)&g46) = v24;
    *(int64_t *)(a1 + (int64_t)&g47) = v24;
    function_729ce(&v6);
    function_729ce(&v4);
    int64_t result = 0; // 0x2292a
    if (v2 != __readfsqword(40)) {
        // 0x2292c
        __stack_chk_fail();
        result = (int64_t)&g345;
    }
    // 0x22931
    return result;
}

// Address range: 0x2293e - 0x22aea
int64_t function_2293e(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x2294f
    int64_t v2 = 0; // 0x22965
    if (a2 != 0 == (a3 != 0)) {
        int64_t v3 = a1 + 12; // 0x22976
        if ((int32_t)function_25236(v3) != 1) {
            // 0x2299e
            v2 = 0;
            if ((int32_t)function_25236(v3) != 2) {
                goto lab_0x22ac0;
            } else {
                goto lab_0x2298c;
            }
        } else {
            goto lab_0x2298c;
        }
    } else {
        goto lab_0x22ac0;
    }
  lab_0x22ac0:;
    int64_t result = v2; // 0x22ad1
    if (v1 != __readfsqword(40)) {
        // 0x22ad3
        __stack_chk_fail();
        result = (int64_t)&g345;
    }
    // 0x22ad8
    return result;
  lab_0x2298c:;
    int64_t v4 = function_24bd0(a1); // 0x2298f
    v2 = 0;
    if (v4 != 0) {
        int64_t v5 = 0x23114; // bp-200, 0x229bf
        int64_t v6; // bp-168, 0x2293e
        function_2515a(&v6, &v5);
        function_7214c(a1 + (int64_t)&g31, &v6);
        function_25018(&v6);
        function_221a8(&v5);
        int64_t v7 = function_625dc(a1 + (int64_t)&g25, a2, v4); // 0x22a59
        int64_t v8; // 0x2293e
        if (v7 == 0) {
            int64_t v9 = function_24e1e(); // 0x22a74
            v8 = v9;
            if (v9 - *(int64_t *)(a1 + (int64_t)&g13) >= 0x1bf08eb001) {
                int64_t v10 = v9 - *(int64_t *)(a1 + (int64_t)&g14); // 0x22a92
                v8 = v10;
                if (v10 <= 0x1bf08eafff) {
                    int64_t v11 = function_21cae(function_2527b()); // 0x22aa9
                    v8 = v11;
                    if ((char)v11 == 0) {
                        // 0x22ab2
                        v8 = function_2327e(a1);
                    }
                }
            }
        } else {
            int64_t * v12 = (int64_t *)(a1 + (int64_t)&g11); // 0x22a66
            *v12 = *v12 + v7;
            *(int32_t *)a3 = (int32_t)v7;
            v8 = v7;
        }
        // 0x22aba
        v2 = v8 & -256 | (int64_t)(v7 != 0);
    }
    goto lab_0x22ac0;
}

// Address range: 0x22aea - 0x22e2d
int64_t function_22aea(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x22b05
    int64_t v2 = a1 + (int64_t)&g25; // 0x22b2f
    int64_t v3; // bp-224, 0x22aea
    int64_t v4 = (int64_t)&v3;
    int32_t * v5; // bp-248, 0x22aea
    int64_t v6 = (int64_t)&v5;
    v5 = NULL;
    int32_t v7 = function_62d6e(v2, a2, (int32_t)a3, (int64_t *)&v5);
    char v8 = 1; // 0x22b5c
    int64_t v9; // 0x22aea
    if (v7 != 3) {
        if (v7 > 3) {
            // 0x22b6e
            v9 = 11;
            if (v7 == 4) {
                goto lab_0x22df9;
            } else {
                // 0x22b7c
                v9 = 0;
                if (v7 != 5) {
                    goto lab_0x22df9;
                } else {
                    // 0x22b85
                    function_24660(a1, "MMCorruptedData", 6);
                    v9 = 11;
                    goto lab_0x22df9;
                }
            }
        }
        // 0x22b60
        v8 = 0;
        v9 = 0;
        if (v7 != 2) {
            goto lab_0x22df9;
        }
    }
    int64_t v10 = (int64_t)v5; // 0x22ba1
    uint64_t v11 = -v10; // 0x22bab
    int64_t v12; // 0x22aea
    int32_t * v13; // 0x22aea
    int32_t v14; // 0x22c1f
    while (v11 >= 12) {
        uint32_t v15 = *v5; // 0x22bd2
        if (v15 >= 0x100001) {
            // 0x22bdc
            function_24660(a1, "MessageTooLarge", 2);
            v9 = 11;
            goto lab_0x22df9;
        }
        uint64_t v16 = (int64_t)v15; // 0x22bd2
        if (v16 > v11) {
            // 0x22c01
            function_24660(a1, "MessageTooSmallB", 4);
            v9 = 11;
            goto lab_0x22df9;
        }
        // 0x22c1f
        v13 = (int32_t *)(v10 + 8);
        v14 = *v13;
        *v13 = 0;
        if (v14 != (int32_t)function_455ee(v10, v16, 0)) {
            goto lab_0x22c71_2;
        }
        uint32_t v17 = *v5; // 0x22c39
        if (v17 < 13) {
            goto lab_0x22c71_2;
        }
        uint32_t v18 = v17 - 12; // 0x22c40
        *v13 = v14;
        if (v18 < 8) {
            // 0x22c53
            function_24660(a1, "MessageTooSmallC", 5);
            v9 = 11;
            goto lab_0x22df9;
        }
        int64_t v19 = v10 + 12; // 0x22c47
        int64_t v20 = v18;
        int64_t v21; // bp-256, 0x22aea
        function_729b6((int64_t)&v21, a1 + (int64_t)&g32);
        v3 = 0;
        int64_t v22 = function_24cec(v20); // 0x22cd5
        v3 = v22;
        function_21a2d(v19, v19 + v20, v22);
        function_25a3e(a1 + (int64_t)&g33, &v3);
        function_254fe(v4);
        int64_t v23 = 0x23680; // bp-200, 0x22d2e
        int64_t v24; // bp-168, 0x22aea
        function_2515a(&v24, &v23);
        function_7214c(a1 + (int64_t)&g31, &v24);
        function_25018(&v24);
        function_221a8(&v23);
        function_729ce(&v21);
        function_254fe(v6);
        v12 = 0;
        if (v8 == 0) {
            goto lab_0x22e01;
        }
        v5 = NULL;
        v7 = function_62d6e(v2, a2, (int32_t)a3, (int64_t *)&v5);
        v8 = 1;
        if (v7 != 3) {
            if (v7 > 3) {
                // 0x22b6e
                v9 = 11;
                if (v7 == 4) {
                    goto lab_0x22df9;
                } else {
                    // 0x22b7c
                    v9 = 0;
                    if (v7 != 5) {
                        goto lab_0x22df9;
                    } else {
                        // 0x22b85
                        function_24660(a1, "MMCorruptedData", 6);
                        v9 = 11;
                        goto lab_0x22df9;
                    }
                }
            }
            // 0x22b60
            v8 = 0;
            v9 = 0;
            if (v7 != 2) {
                goto lab_0x22df9;
            }
        }
        // 0x22ba1
        v10 = (int64_t)v5;
        v11 = -v10;
    }
    // 0x22bb4
    function_24660(a1, "MessageTooSmallA", 3);
    v9 = 11;
    goto lab_0x22df9;
  lab_0x22df9:
    // 0x22df9
    function_254fe(v6);
    v12 = v9;
  lab_0x22e01:;
    int64_t result = v12 & 0xffffffff; // 0x22e14
    if (v1 != __readfsqword(40)) {
        // 0x22e16
        __stack_chk_fail();
        result = (int64_t)&g345;
    }
    // 0x22e1b
    return result;
  lab_0x22c71_2:
    // 0x22c71
    *v13 = v14;
    function_24660(a1, "CorruptedData", 1);
    v9 = 11;
    goto lab_0x22df9;
}

// Address range: 0x22e2e - 0x22e39
int64_t function_22e2e(int64_t a1, int64_t a2) {
    // 0x22e2e
    if (a2 == 0) {
        // 0x22e38
        int64_t result; // 0x22e2e
        return result;
    }
    // 0x22e33
    return function_24460();
}

// Address range: 0x22e3a - 0x22e9b
int64_t function_22e3a(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x22e55
    int64_t v2; // bp-40, 0x22e3a
    function_729b6((int64_t)&v2, a1 + (int64_t)&g26);
    function_22ea0(a1, a2);
    function_729ce(&v2);
    int64_t result = 0; // 0x22e8b
    if (v1 != __readfsqword(40)) {
        // 0x22e8d
        __stack_chk_fail();
        result = (int64_t)&g345;
    }
    // 0x22e92
    return result;
}

// Address range: 0x22ea0 - 0x22ed0
int64_t function_22ea0(int64_t a1, int64_t a2) {
    // 0x22ea0
    __readfsqword(40);
    return function_dd0e3();
}

// Address range: 0x22edc - 0x22eea
int64_t function_22edc(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 101 + a3); // 0x22edc
    bool v2; // 0x22edc
    *v1 = *v1 - (v2 ? 0x21644894 : 0x21644893);
    return function_14310fab();
}

// Address range: 0x22f0f - 0x22f10
int64_t function_22f0f(int64_t a1) {
    // 0x22f0f
    int64_t result; // 0x22f0f
    return result;
}

// Address range: 0x47e0a - 0x48a9d
int64_t function_47e0a(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x47e22
    int64_t v2; // bp-80, 0x47e0a
    function_4e9c8(&v2, 1);
    int64_t v3; // bp-88, 0x47e0a
    function_477fa(&v3, "game_round_start");
    function_4eda6(&v2, &v3);
    int64_t v4 = (int64_t)&v3; // 0x47e54
    function_2508e(v4);
    function_477fa(&v3, "map_name");
    function_4ed34(&v2, &g108, &v3);
    function_2508e(v4);
    function_47a80(a1, &v2);
    function_4a2f8(&v2);
    function_4e9c8(&v2, 2);
    function_477fa(&v3, "game_round_end");
    function_4eda6(&v2, &v3);
    function_2508e(v4);
    function_477fa(&v3, "winning_team_id");
    function_4ed34(&v2, &g94, &v3);
    function_2508e(v4);
    function_47a80(a1, &v2);
    function_4a2f8(&v2);
    function_4e9c8(&v2, 3);
    function_477fa(&v3, "player_spawn");
    function_4eda6(&v2, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player");
    function_4ed34(&v2, &g93, &v3);
    function_2508e(v4);
    function_477fa(&v3, "team_id");
    function_4ed34(&v2, &g94, &v3);
    function_2508e(v4);
    function_477fa(&v3, "character_id");
    function_4ed34(&v2, &g94, &v3);
    function_2508e(v4);
    function_47a80(a1, &v2);
    function_4a2f8(&v2);
    function_4e9c8(&v2, 4);
    function_477fa(&v3, "player_despawn");
    function_4eda6(&v2, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player");
    function_4ed34(&v2, &g93, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player_death");
    function_4ed34(&v2, &g94, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player_killer");
    function_4ed34(&v2, &g93, &v3);
    function_2508e(v4);
    function_47a80(a1, &v2);
    function_4a2f8(&v2);
    function_4e9c8(&v2, 5);
    function_477fa(&v3, "player_revive");
    function_4eda6(&v2, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player_revived");
    function_4ed34(&v2, &g93, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player_reviving");
    function_4ed34(&v2, &g93, &v3);
    function_2508e(v4);
    function_47a80(a1, &v2);
    function_4a2f8(&v2);
    function_4e9c8(&v2, 6);
    function_477fa(&v3, "player_tick");
    function_4eda6(&v2, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player");
    function_4ed34(&v2, &g93, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player_position");
    function_4ed34(&v2, &g123, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player_viewrotation");
    function_4ed34(&v2, &g125, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player_health");
    function_4ed34(&v2, &g94, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player_tickflags");
    function_4ed34(&v2, &g94, &v3);
    function_2508e(v4);
    function_47a80(a1, &v2);
    function_4a2f8(&v2);
    function_4e9c8(&v2, 7);
    function_477fa(&v3, "player_useweapon");
    function_4eda6(&v2, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player");
    function_4ed34(&v2, &g93, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player_position");
    function_4ed34(&v2, &g123, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player_viewrotation");
    function_4ed34(&v2, &g125, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player_fov");
    function_4ed34(&v2, &g94, &v3);
    function_2508e(v4);
    function_477fa(&v3, "weapon_id");
    function_4ed34(&v2, &g94, &v3);
    function_2508e(v4);
    function_477fa(&v3, "melee_attack");
    function_4ed34(&v2, &g94, &v3);
    function_2508e(v4);
    function_47a80(a1, &v2);
    function_4a2f8(&v2);
    function_4e9c8(&v2, 8);
    function_477fa(&v3, "player_takedamage");
    function_4eda6(&v2, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player_victim");
    function_4ed34(&v2, &g93, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player_victim_position");
    function_4ed34(&v2, &g123, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player_victim_viewrotation");
    function_4ed34(&v2, &g125, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player_attacker");
    function_4ed34(&v2, &g93, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player_attacker_position");
    function_4ed34(&v2, &g123, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player_attacker_viewrotation");
    function_4ed34(&v2, &g125, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player_attacker_fov");
    function_4ed34(&v2, &g94, &v3);
    function_2508e(v4);
    function_477fa(&v3, "weapon_id");
    function_4ed34(&v2, &g94, &v3);
    function_2508e(v4);
    function_477fa(&v3, "hitbone_id");
    function_4ed34(&v2, &g94, &v3);
    function_2508e(v4);
    function_477fa(&v3, "damage_taken");
    function_4ed34(&v2, &g94, &v3);
    function_2508e(v4);
    function_477fa(&v3, "damage_flags");
    function_4ed34(&v2, &g94, &v3);
    function_2508e(v4);
    function_47a80(a1, &v2);
    function_4a2f8(&v2);
    function_4e9c8(&v2, 9);
    function_477fa(&v3, "player_downed");
    function_4eda6(&v2, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player_victim");
    function_4ed34(&v2, &g93, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player_attacker");
    function_4ed34(&v2, &g93, &v3);
    function_2508e(v4);
    function_47a80(a1, &v2);
    function_4a2f8(&v2);
    function_4e9c8(&v2, 10);
    function_477fa(&v3, "player_death");
    function_4eda6(&v2, &v3);
    function_2508e(v4);
    function_477fa(&v3, "victim");
    function_4ed34(&v2, &g93, &v3);
    function_2508e(v4);
    function_477fa(&v3, "victim_shots_fired");
    function_4ed34(&v2, &g122, &v3);
    function_2508e(v4);
    function_477fa(&v3, "victim_shots_landed");
    function_4ed34(&v2, &g122, &v3);
    function_2508e(v4);
    function_477fa(&v3, "attacker");
    function_4ed34(&v2, &g93, &v3);
    function_2508e(v4);
    function_477fa(&v3, "attacker_shots_fired");
    function_4ed34(&v2, &g122, &v3);
    function_2508e(v4);
    function_477fa(&v3, "attacker_shots_landed");
    function_4ed34(&v2, &g122, &v3);
    function_2508e(v4);
    function_47a80(a1, &v2);
    function_4a2f8(&v2);
    function_4e9c8(&v2, 11);
    function_477fa(&v3, "game_round_start_v2");
    function_4eda6(&v2, &v3);
    function_2508e(v4);
    function_477fa(&v3, "map_name");
    function_4ed34(&v2, &g108, &v3);
    function_2508e(v4);
    function_477fa(&v3, "mode_name");
    function_4ed34(&v2, &g108, &v3);
    function_2508e(v4);
    function_477fa(&v3, "round_time_seconds");
    function_4ed34(&v2, &g94, &v3);
    function_2508e(v4);
    function_477fa(&v3, "start_frame_number");
    function_4ed34(&v2, &g122, &v3);
    function_2508e(v4);
    function_477fa(&v3, "start_delta_seconds");
    function_4ed34(&v2, &g94, &v3);
    function_2508e(v4);
    function_47a80(a1, &v2);
    function_4a2f8(&v2);
    function_4e9c8(&v2, 12);
    function_477fa(&v3, "game_round_start_v3");
    function_4eda6(&v2, &v3);
    function_2508e(v4);
    function_477fa(&v3, "gamesessionid");
    function_4ed34(&v2, &g108, &v3);
    function_2508e(v4);
    function_477fa(&v3, "map_name");
    function_4ed34(&v2, &g108, &v3);
    function_2508e(v4);
    function_477fa(&v3, "mode_name");
    function_4ed34(&v2, &g108, &v3);
    function_2508e(v4);
    function_477fa(&v3, "round_time_seconds");
    function_4ed34(&v2, &g94, &v3);
    function_2508e(v4);
    function_477fa(&v3, "start_frame_number");
    function_4ed34(&v2, &g122, &v3);
    function_2508e(v4);
    function_477fa(&v3, "start_delta_seconds");
    function_4ed34(&v2, &g94, &v3);
    function_2508e(v4);
    function_47a80(a1, &v2);
    function_4a2f8(&v2);
    function_4e9c8(&v2, 13);
    function_477fa(&v3, "player_use_ability");
    function_4eda6(&v2, &v3);
    function_2508e(v4);
    function_477fa(&v3, "player");
    function_4ed34(&v2, &g93, &v3);
    function_2508e(v4);
    function_477fa(&v3, "ability_id");
    function_4ed34(&v2, &g94, &v3);
    function_2508e(v4);
    function_477fa(&v3, "ability_duration_ms");
    function_4ed34(&v2, &g94, &v3);
    function_2508e(v4);
    function_477fa(&v3, "ability_cooldown_ms");
    function_4ed34(&v2, &g94, &v3);
    function_2508e(v4);
    function_477fa(&v3, "ability_effect_flags");
    function_4ed34(&v2, &g94, &v3);
    function_2508e(v4);
    function_47a80(a1, &v2);
    function_4a2f8(&v2);
    int64_t result = 0; // 0x48a8d
    if (v1 != __readfsqword(40)) {
        // 0x48a8f
        __stack_chk_fail();
        result = (int64_t)&g345;
    }
    // 0x48a94
    return result;
}

// Address range: 0x5df38 - 0x5eba0
int64_t function_5df38(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5df38
    int64_t v1; // bp-81, 0x5df38
    int64_t v2 = (int64_t)&v1; // 0x5df54
    int64_t v3 = __readfsqword(40); // 0x5df5c
    int64_t * v4 = (int64_t *)(a2 + 8); // 0x5df6f
    int64_t v5 = 0; // 0x5df78
    int32_t v6; // 0x5df38
    int64_t v7; // 0x5df38
    int64_t v8; // 0x5df38
    int64_t v9; // 0x5df38
    int64_t v10; // 0x5df38
    int32_t v11; // bp-104, 0x5df38
    int64_t v12; // bp-112, 0x5df38
    int32_t v13; // bp-120, 0x5df38
    int64_t v14; // bp-408, 0x5df38
    int64_t v15; // 0x5df38
    int64_t v16; // 0x5df38
    int64_t v17; // 0x5df38
    int64_t v18; // bp-96, 0x5df38
    int64_t v19; // 0x5e00b
    int64_t v20; // 0x5df38
    int64_t v21; // 0x5df38
    int64_t v22; // 0x5df38
    int32_t * v23; // 0x5df38
    int64_t v24; // 0x5df38
    char * v25; // 0x5df38
    char * v26; // 0x5df38
    char * v27; // 0x5df38
    int64_t * v28; // 0x5e03e
    int64_t * v29; // 0x5e042
    if (*v4 != a2) {
        *(char *)(v5 + v2) = 0;
        v5++;
        while (v5 != 12) {
            // 0x5df8b
            *(char *)(v5 + v2) = 0;
            v5++;
        }
        int64_t v30 = 0;
        uint32_t v31 = 0x1569b9ed;
        int32_t v32 = v31 / 128 ^ v31; // 0x5dfba
        int32_t v33 = *(int32_t *)(v30 + (int64_t)&g107); // 0x5dfbe
        uint32_t v34 = 512 * v32 ^ v32; // 0x5dfc4
        int32_t v35 = llvm_bswap_i32(v34 / 0x2000 ^ v34); // 0x5dfd2
        *(int32_t *)(v30 + v2) = v35 ^ v33;
        int64_t v36 = v30 + 4; // 0x5dfe1
        while (v30 != 8) {
            // 0x5dfb0
            v30 = v36;
            v31 = v35;
            v32 = v31 / 128 ^ v31;
            v33 = *(int32_t *)(v30 + (int64_t)&g107);
            v34 = 512 * v32 ^ v32;
            v35 = llvm_bswap_i32(v34 / 0x2000 ^ v34);
            *(int32_t *)(v30 + v2) = v35 ^ v33;
            v36 = v30 + 4;
        }
        int64_t v37 = (int64_t)&v14; // 0x5dfe3
        function_5cab4(v37, &v1, 12, v2);
        function_24dff(&v1, 12);
        v19 = *v4;
        if (v19 == 12) {
          lab_0x5eab2:
            // 0x5eab2
            v1 = 0;
            v13 = (int64_t)&g97;
            v12 = v2;
            v11 = (int64_t)&g97;
            v18 = v2;
            char v38 = *(char *)((int64_t)((int32_t)&g97 ^ (int32_t)&g97) + (int64_t)(int32_t)&g97); // 0x5eb02
            *(char *)(v2 + (int64_t)((int32_t)&g97 ^ (int32_t)&g97)) = v38 ^ 97;
            int64_t v39 = 0xe253f3; // 0x5eb16
            int64_t v40 = (int32_t)&g97 ^ (int32_t)&g97; // 0x5eb16
            int64_t v41 = v2; // 0x5eb16
            int64_t v42 = 0xe253f3; // 0x5eb16
            if (((int32_t)&g97 ^ (int32_t)&g97) != 2) {
                int64_t v43 = v40 + 1; // 0x5eb0f
                char v44 = *(char *)(v43 + (int64_t)v11); // 0x5eb02
                int64_t v45 = v39 / 256; // 0x5eb08
                *(char *)(v43 + v18) = v44 ^ (char)v39;
                v39 = v45;
                v40 = v43;
                v41 = v18;
                v42 = v45;
                while (v43 != 2) {
                    // 0x5eaf2
                    v43 = v40 + 1;
                    v44 = *(char *)(v43 + (int64_t)v11);
                    v45 = v39 / 256;
                    *(char *)(v43 + v18) = v44 ^ (char)v39;
                    v39 = v45;
                    v40 = v43;
                    v41 = v18;
                    v42 = v45;
                }
            }
            // 0x5eb18
            int64_t v46; // bp-400, 0x5df38
            int64_t v47 = (int64_t)&v46; // 0x5eb20
            function_5cab4(v47, &v1, v42, v41);
            function_3602c(&v14, &v46);
            function_2508e(v47);
            function_24dff(&v1, 3);
            *(int64_t *)a1 = v14;
            v14 = (int64_t)&g278;
        } else {
            // 0x5e031
            v20 = (int64_t)&v12;
            v21 = (int64_t)&v18;
            v22 = (int64_t)&v11;
            v23 = (int32_t *)(v2 | 4);
            int64_t v48 = 0x100000000 * v2 >> 32;
            v24 = (int64_t)&v13;
            v25 = (char *)(v2 + 12);
            v26 = (char *)(v2 + 13);
            v27 = (char *)(v2 + 9);
            v15 = 0;
            v16 = 12;
            v9 = 12;
            v10 = 12;
            v7 = 12;
            if (*(int64_t *)(*(int64_t *)12 - 24) != 0) {
                while (true) {
                  lab_0x5e03b:
                    // 0x5e03b
                    v17 = v16;
                    v28 = (int64_t *)(v17 + 8);
                    int64_t v49 = *v28; // 0x5e03e
                    v29 = (int64_t *)(v17 + 16);
                    v10 = v9;
                    v7 = v49;
                    int64_t v50 = 0; // 0x5e046
                    if (*v29 == v49) {
                        // break -> 0x5e048
                        break;
                    }
                    *(char *)(v50 + v2) = 0;
                    v50++;
                    while (v50 != 15) {
                        // 0x5e060
                        *(char *)(v50 + v2) = 0;
                        v50++;
                    }
                    int64_t v51 = 0x2a96c551; // 0x5e0a8
                    int64_t v52 = (int32_t)&g106 ^ (int32_t)&g106; // 0x5e0a8
                    if (((int32_t)&g106 ^ (int32_t)&g106) != 12) {
                        int64_t v53 = 0x2a96c551;
                        int32_t v54 = *(int32_t *)(v52 + (int64_t)(int32_t)&g106); // 0x5e0ba
                        *(int32_t *)(v52 + v2) = v54 ^ 0x2a96c551;
                        int64_t v55 = v52 + 4; // 0x5e0c2
                        uint32_t v56 = (int32_t)(0x2000 * v53 ^ v53); // 0x5e092
                        int32_t v57 = v56 / 128 ^ v56; // 0x5e097
                        int32_t v58 = 0x20000 * v57 ^ v57; // 0x5e09e
                        int32_t v59 = 2 * v58 | (int32_t)(v58 < 0); // 0x5e0a2
                        int64_t v60 = v59; // 0x5e0a2
                        v51 = v60;
                        v52 = v55;
                        while (v55 != 12) {
                            // 0x5e0aa
                            v53 = v60;
                            v54 = *(int32_t *)(v52 + (int64_t)(int32_t)&g106);
                            *(int32_t *)(v52 + v2) = v54 ^ v59;
                            v55 = v52 + 4;
                            v56 = (int32_t)(0x2000 * v53 ^ v53);
                            v57 = v56 / 128 ^ v56;
                            v58 = 0x20000 * v57 ^ v57;
                            v59 = 2 * v58 | (int32_t)(v58 < 0);
                            v60 = v59;
                            v51 = v60;
                            v52 = v55;
                        }
                    }
                    int64_t v61 = 12; // 0x5e0fc
                    char v62 = *(char *)(v61 + (int64_t)(int32_t)&g106); // 0x5e0ef
                    int64_t v63 = v51 / 256; // 0x5e0f5
                    *(char *)(v61 + v2) = v62 ^ (char)v51;
                    v61++;
                    int64_t v64 = v63; // 0x5e103
                    while (v61 != 15) {
                        // 0x5e0df
                        v62 = *(char *)(v61 + (int64_t)(int32_t)&g106);
                        v63 = v64 / 256;
                        *(char *)(v61 + v2) = v62 ^ (char)v64;
                        v61++;
                        v64 = v63;
                    }
                    // 0x5e105
                    function_5cab4(v20, &v1, v2, v63);
                    function_5f416((int64_t *)&v11, &v12, v17);
                    function_5f453(&v18, (int64_t *)&v11, &g96);
                    function_3602c(&v14, &v18);
                    function_2508e(v21);
                    function_2508e(v22);
                    function_2508e(v20);
                    function_24dff(&v1, 15);
                    function_5ddde(&v12);
                    v1 = 0x756f5322;
                    *v23 = 0x22656372;
                    int64_t v65 = 8; // 0x5e205
                    int64_t v66 = 0xe3eba5a7; // 0x5e205
                    char v67 = *(char *)(v65 + (int64_t)(int32_t)&g105); // 0x5e21a
                    *(char *)(v65 + v48) = v67 ^ (char)v66;
                    v65++;
                    v66 /= 256;
                    while (v65 != 11) {
                        // 0x5e20a
                        v67 = *(char *)(v65 + (int64_t)(int32_t)&g105);
                        *(char *)(v65 + v48) = v67 ^ (char)v66;
                        v65++;
                        v66 /= 256;
                    }
                    // 0x5e230
                    function_5cab4(v24, &v1, 227, v48);
                    function_5f47b((int64_t *)&v11, (int64_t *)&v13, &v12);
                    function_5f453(&v18, (int64_t *)&v11, &g96);
                    function_3602c(&v14, &v18);
                    function_2508e(v21);
                    function_2508e(v22);
                    function_2508e(v24);
                    function_24dff(&v1, 11);
                    function_2508e(v20);
                    function_4901fa(&v12);
                    int64_t v68 = 0; // 0x5e2b3
                    while (true) {
                        // 0x5e2b5
                        *(char *)(v68 + v2) = 0;
                        v68++;
                        v6 = -0x3971cf0;
                        v8 = 0;
                        if (v68 == 14) {
                            goto lab_0x5e301;
                        }
                    }
                    goto lab_0x5e322;
                }
            }
          lab_0x5e048:
            // 0x5e048
            function_5cab4(a1, (int64_t *)&g110, v10, v7);
        }
        // 0x5eb67
        function_2508e(v37);
    } else {
        // 0x5df7a
        function_5cab4(a1, (int64_t *)&g110, a3, a2);
    }
    int64_t result = a1; // 0x5eb87
    if (v3 != __readfsqword(40)) {
        // 0x5eb89
        __stack_chk_fail();
        result = (int64_t)&g345;
    }
    // 0x5eb8e
    return result;
  lab_0x5e301:;
    int32_t v69 = v6;
    int32_t v70 = *(int32_t *)(v8 + (int64_t)&g104); // 0x5e311
    *(int32_t *)(v8 + v2) = v70 ^ v69;
    int64_t v71 = v8 + 4; // 0x5e31c
    uint32_t v72 = 0x2000 * v69 ^ v69; // 0x5e2e8
    int32_t v73 = v72 / 128 ^ v72; // 0x5e2ef
    uint32_t v74 = 0x20000 * v73 ^ v73; // 0x5e2f6
    v6 = v74 / 0x40000000 | 4 * v74;
    v8 = v71;
    if (v71 == 12) {
        goto lab_0x5e322;
    } else {
        goto lab_0x5e301;
    }
  lab_0x5e429:;
    // 0x5e429
    int64_t v75; // 0x5df38
    int32_t v76 = *(int32_t *)(v75 + (int64_t)(int32_t)&g103); // 0x5e439
    int32_t v77; // 0x5df38
    *(int32_t *)(v75 + v2) = v76 ^ v77;
    int64_t v78 = v75 + 4; // 0x5e444
    uint32_t v79 = 0x83cb * v77 + 0xca9071; // 0x5e41b
    v77 = v79 / 8 | 0x20000000 * v79;
    v75 = v78;
    if (v78 == 12) {
        goto lab_0x5e44a;
    } else {
        goto lab_0x5e429;
    }
  lab_0x5e549:;
    // 0x5e549
    int32_t v80; // 0x5df38
    int32_t v81 = v80;
    int64_t v82; // 0x5df38
    int32_t v83 = *(int32_t *)(v82 + (int64_t)&g102); // 0x5e559
    *(int32_t *)(v82 + v2) = v83 ^ v81;
    int64_t v84 = v82 + 4; // 0x5e564
    uint32_t v85 = 0x2000 * v81 ^ v81; // 0x5e531
    int32_t v86 = v85 / 128 ^ v85; // 0x5e538
    v80 = 0x20000 * v86 ^ -1 - v86;
    v82 = v84;
    if (v84 == 12) {
        goto lab_0x5e56a;
    } else {
        goto lab_0x5e549;
    }
  lab_0x5e65d:;
    // 0x5e65d
    int64_t v87; // 0x5df38
    int32_t v88 = *(int32_t *)(v87 + (int64_t)&g101); // 0x5e66d
    int32_t v89; // 0x5df38
    *(int32_t *)(v87 + v2) = v88 ^ v89;
    int64_t v90 = v87 + 4; // 0x5e678
    uint32_t v91 = 0xca77 * v89 + 0x77b738; // 0x5e64f
    v89 = v91 / 16 | 0x10000000 * v91;
    v87 = v90;
    if (v90 == 16) {
        goto lab_0x5e67e;
    } else {
        goto lab_0x5e65d;
    }
  lab_0x5e322:
    // 0x5e322
    *v25 = 34;
    *v26 = 0;
    function_5cab4(v24, &v1, v2, (int64_t)&g104);
    function_5f47b((int64_t *)&v11, (int64_t *)&v13, &v12);
    function_5f453(&v18, (int64_t *)&v11, &g96);
    function_3602c(&v14, &v18);
    function_2508e(v21);
    function_2508e(v22);
    function_2508e(v24);
    function_24dff(&v1, 14);
    function_2508e(v20);
    int64_t v92 = 0; // 0x5e3e8
    while (true) {
        // 0x5e3ea
        *(char *)(v92 + v2) = 0;
        int64_t v93 = v92 + 1; // 0x5e3ee
        v92 = v93;
        v77 = -0x7ab5625f;
        v75 = 0;
        if (v93 == 14) {
            goto lab_0x5e429;
        }
    }
    goto lab_0x5e44a;
  lab_0x5e44a:
    // 0x5e44a
    *v25 = 34;
    *v26 = 0;
    function_5cab4(v20, &v1, v2, (int64_t)&g103);
    function_5f416((int64_t *)&v11, &v12, (int64_t)&g254);
    function_5f453(&v18, (int64_t *)&v11, &g96);
    function_3602c(&v14, &v18);
    function_2508e(v21);
    function_2508e(v22);
    function_2508e(v20);
    function_24dff(&v1, 14);
    int64_t v94 = 0; // 0x5e4fc
    while (true) {
        // 0x5e4fe
        *(char *)(v94 + v2) = 0;
        int64_t v95 = v94 + 1; // 0x5e502
        v94 = v95;
        v80 = 0x3e72de71;
        v82 = 0;
        if (v95 == 14) {
            goto lab_0x5e549;
        }
    }
    goto lab_0x5e56a;
  lab_0x5e56a:
    // 0x5e56a
    *v25 = 34;
    *v26 = 0;
    function_5cab4(v20, &v1, v2, (int64_t)&g102);
    function_5f416((int64_t *)&v11, &v12, (int64_t)&g253);
    function_5f453(&v18, (int64_t *)&v11, &g96);
    function_3602c(&v14, &v18);
    function_2508e(v21);
    function_2508e(v22);
    function_2508e(v20);
    function_24dff(&v1, 14);
    int64_t v96 = 0; // 0x5e61c
    while (true) {
        // 0x5e61e
        *(char *)(v96 + v2) = 0;
        int64_t v97 = v96 + 1; // 0x5e622
        v96 = v97;
        v89 = 0x94b0124;
        v87 = 0;
        if (v97 == 17) {
            goto lab_0x5e65d;
        }
    }
    goto lab_0x5e67e;
  lab_0x5e67e:
    // 0x5e67e
    *(char *)(v2 + 16) = 0;
    function_5cab4(v20, &v1, v2, (int64_t)&g101);
    function_5f416((int64_t *)&v11, &v12, (int64_t)&g252);
    function_5f453(&v18, (int64_t *)&v11, &g96);
    function_3602c(&v14, &v18);
    function_2508e(v21);
    function_2508e(v22);
    function_2508e(v20);
    function_24dff(&v1, 17);
    function_5dd2a(&v12);
    v1 = 0;
    int64_t v98 = 0xfbc6dfd9; // 0x5e77f
    int64_t v99 = (int32_t)&g96 ^ (int32_t)&g96; // 0x5e77f
    if (((int32_t)&g96 ^ (int32_t)&g96) != 8) {
        int64_t v100 = 0xfbc6dfd9;
        int32_t v101 = *(int32_t *)(v99 + (int64_t)&g100); // 0x5e791
        *(int32_t *)(v99 + v2) = v101 ^ -0x4392027;
        int64_t v102 = v99 + 4; // 0x5e79c
        uint32_t v103 = (int32_t)(0x2000 * v100 ^ v100); // 0x5e769
        int32_t v104 = v103 / 128 ^ v103; // 0x5e76e
        int32_t v105 = -((0x20000 * v104 ^ v104)); // 0x5e777
        int64_t v106 = v105; // 0x5e77d
        v98 = v106;
        v99 = v102;
        while (v102 != 8) {
            // 0x5e781
            v100 = v106;
            v101 = *(int32_t *)(v99 + (int64_t)&g100);
            *(int32_t *)(v99 + v2) = v101 ^ v105;
            v102 = v99 + 4;
            v103 = (int32_t)(0x2000 * v100 ^ v100);
            v104 = v103 / 128 ^ v103;
            v105 = -((0x20000 * v104 ^ v104));
            v106 = v105;
            v98 = v106;
            v99 = v102;
        }
    }
    int64_t v107 = 8; // 0x5df38
    char v108 = *(char *)(v107 + (int64_t)&g100); // 0x5e7c2
    int64_t v109 = v98 / 256; // 0x5e7c8
    *(char *)(v107 + v2) = v108 ^ (char)v98;
    int64_t v110 = v107 + 1; // 0x5e7cf
    int64_t v111 = v109; // 0x5e7d6
    v107 = v110;
    while (v110 != 11) {
        // 0x5e7b2
        v108 = *(char *)(v107 + (int64_t)&g100);
        v109 = v111 / 256;
        *(char *)(v107 + v2) = v108 ^ (char)v111;
        v110 = v107 + 1;
        v111 = v109;
        v107 = v110;
    }
    // 0x5e7d8
    function_5cab4(v24, &v1, 11, v109);
    function_5f47b((int64_t *)&v11, (int64_t *)&v13, &v12);
    function_5f453(&v18, (int64_t *)&v11, &g96);
    function_3602c(&v14, &v18);
    function_2508e(v21);
    function_2508e(v22);
    function_2508e(v24);
    function_24dff(&v1, 11);
    function_2508e(v20);
    function_5dc68(&v12);
    v1 = 0x56534f22;
    *v23 = 0x3a227265;
    *(char *)(v2 + 8) = *(char *)&g99 ^ 25;
    *v27 = (char)((int32_t)((int64_t)&g98 & -256 | 232) ^ -24);
    function_5cab4(v24, &v1, v2, v2);
    function_5f47b((int64_t *)&v11, (int64_t *)&v13, &v12);
    function_5f453(&v18, (int64_t *)&v11, &g96);
    function_3602c(&v14, &v18);
    function_2508e(v21);
    function_2508e(v22);
    function_2508e(v24);
    function_24dff(&v1, 10);
    function_2508e(v20);
    int64_t v112 = *v28; // 0x5e958
    int64_t v113 = *v29; // 0x5e95c
    int64_t v114 = 0; // 0x5e96a
    int64_t v115 = v112; // 0x5e96a
    int64_t v116 = v2; // 0x5e96a
    int64_t v117 = (int64_t)&g96; // 0x5e96a
    if (v112 != v113) {
        int64_t v118 = (int64_t)&g96;
        function_5cab4(v22, &g95, v118, v2);
        function_4525c(&v18, v115);
        function_3602c((int64_t *)&v11, &v18);
        function_2508e(v21);
        int32_t * v119 = (int32_t *)(v115 + 16); // 0x5e9a5
        int64_t v120 = *v119 == 0 ? (int64_t)"\":\"" : (int64_t)"\":"; // 0x5e9b3
        function_4a93a((int64_t *)&v11, v120, v118, v2);
        function_4525c(&v18, v115 + 8);
        function_3602c((int64_t *)&v11, &v18);
        function_2508e(v21);
        if (*v119 == 0) {
            // 0x5e9e1
            function_4a93a((int64_t *)&v11, (int64_t)&g95, v118, v2);
        }
        // 0x5e9f0
        if (-0x5555555555555555 * (*v29 - *v28 >> 3) - 1 > v114) {
            // 0x5ea28
            function_4a93a((int64_t *)&v11, (int64_t)&g112, -0x5555555555555555, v17);
        }
        int64_t v121 = v115 + 24; // 0x5ea3f
        function_3602c(&v14, (int64_t *)&v11);
        function_2508e(v22);
        v114++;
        v115 = v121;
        v116 = v17;
        v117 = -0x5555555555555555;
        while (v121 != v113) {
            int64_t v122 = v17;
            v118 = -0x5555555555555555;
            function_5cab4(v22, &g95, v118, v122);
            function_4525c(&v18, v115);
            function_3602c((int64_t *)&v11, &v18);
            function_2508e(v21);
            v119 = (int32_t *)(v115 + 16);
            v120 = *v119 == 0 ? (int64_t)"\":\"" : (int64_t)"\":";
            function_4a93a((int64_t *)&v11, v120, v118, v122);
            function_4525c(&v18, v115 + 8);
            function_3602c((int64_t *)&v11, &v18);
            function_2508e(v21);
            if (*v119 == 0) {
                // 0x5e9e1
                function_4a93a((int64_t *)&v11, (int64_t)&g95, v118, v122);
            }
            // 0x5e9f0
            if (-0x5555555555555555 * (*v29 - *v28 >> 3) - 1 > v114) {
                // 0x5ea28
                function_4a93a((int64_t *)&v11, (int64_t)&g112, -0x5555555555555555, v17);
            }
            // 0x5ea37
            v121 = v115 + 24;
            function_3602c(&v14, (int64_t *)&v11);
            function_2508e(v22);
            v114++;
            v115 = v121;
            v116 = v17;
            v117 = -0x5555555555555555;
        }
    }
    int64_t v123 = v117;
    function_4a93a(&v14, (int64_t)&g109, v123, v116);
    if ((*v4 - (int64_t)&g109 >> 5) - 1 > v15) {
        // 0x5ea91
        function_4a93a(&v14, (int64_t)&g112, v123, a2);
    }
    int64_t v124 = v17 + 32; // 0x5eaa2
    if (v19 == v124) {
        goto lab_0x5eab2;
    }
    // 0x5e031
    v15++;
    v16 = v124;
    v9 = v123;
    v10 = v123;
    v7 = v124;
    if (*(int64_t *)(*(int64_t *)v124 - 24) == 0) {
        // break -> 0x5e048
        goto lab_0x5e048;
    }
    goto lab_0x5e03b;
}

// Address range: 0x495700 - 0x49620b
int64_t function_495700(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 88); // 0x49572c
    int64_t * v2 = (int64_t *)(a1 + 128); // 0x495730
    int64_t v3 = *v2; // 0x495730
    int64_t * v4 = (int64_t *)(a1 + 96); // 0x495737
    int64_t v5 = *v4; // 0x495737
    int64_t v6; // 0x495700
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", 501, "=> derive keys", v6);
    int64_t * v7 = (int64_t *)v3; // 0x495747
    int64_t v8 = function_4b4d90(*(int32_t *)(*v7 + 16)); // 0x49574e
    int64_t v9 = *v7; // 0x49575b
    int64_t v10; // 0x495700
    int64_t v11; // 0x495700
    int64_t v12; // 0x495700
    int64_t v13; // 0x495700
    int64_t v14; // 0x495768
    int32_t * v15; // 0x49577b
    if (v8 == 0) {
        // 0x496160
        v13 = 507;
        v10 = (int64_t)"cipher info for %d not found";
        v11 = v9 + 16;
        goto lab_0x496170;
    } else {
        // 0x495765
        v14 = function_4c14d0(*(int32_t *)(v9 + 20));
        if (v14 == 0) {
            // 0x496191
            v13 = (int64_t)&g54;
            v10 = (int64_t)"mbedtls_md info for %d not found";
            v11 = *v7 + 20;
            goto lab_0x496170;
        } else {
            // 0x49577b
            v15 = (int32_t *)(a1 + 24);
            int32_t v16 = *v15; // 0x49577b
            if (v16 > 2) {
                // 0x495c95
                v12 = (int64_t)&g61;
                if (v16 == 3) {
                    int64_t * v17 = (int64_t *)(v5 + (int64_t)&g128);
                    if (*(int32_t *)(*v7 + 20) == 7) {
                        // 0x496001
                        *v17 = 0x4952a0;
                        *(int64_t *)(v5 + (int64_t)&g126) = 0x494870;
                        *(int64_t *)(v5 + (int64_t)&g127) = 0x494930;
                    } else {
                        // 0x495e78
                        *v17 = 0x495270;
                        *(int64_t *)(v5 + (int64_t)&g126) = (int64_t)&g91;
                        *(int64_t *)(v5 + (int64_t)&g127) = 0x494700;
                    }
                    goto lab_0x4957b1;
                } else {
                    goto lab_0x495caa;
                }
            } else {
                // 0x495787
                *(int64_t *)(v5 + (int64_t)&g128) = 0x4952d0;
                *(int64_t *)(v5 + (int64_t)&g126) = 0x494aa0;
                *(int64_t *)(v5 + (int64_t)&g127) = (int64_t)&g92;
                goto lab_0x4957b1;
            }
        }
    }
  lab_0x496170:;
    uint32_t v18 = *(int32_t *)v11;
    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", v13, (char *)v10, (int64_t)v18);
    // 0x495c80
    return 0xffff8f00;
  lab_0x495caa:;
    // 0x495caa
    int64_t v19; // 0x495700
    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", v12, "should never happen", v19);
    // 0x495c80
    return 0xffff9400;
  lab_0x4957b1:;
    int64_t v20 = v5 + (int64_t)&g320; // 0x4957b1
    int64_t v21; // bp-312, 0x495700
    int64_t v22; // 0x495700
    if (*(int32_t *)v20 != 0) {
        // 0x495cd0
        int64_t v23; // 0x495700
        function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t)&g69, "no premaster (session resumed)", v23);
    } else {
        int64_t v24 = *(int64_t *)(v5 + (int64_t)&g129); // 0x4957c0
        int64_t v25 = v5 + (int64_t)&g138; // 0x4957c7
        function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g63, "premaster secret", v25, v24);
        int64_t v26 = *v4; // 0x4957f5
        if (*(int32_t *)(v26 + (int64_t)&g322) == 1) {
            // 0x495ea7
            function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t)&g64, "using extended master secret", v25);
            int64_t v27 = 36; // 0x495ef0
            if (*v15 == 3) {
                // 0x495fe2
                v27 = *(int32_t *)(*(int64_t *)*v2 + 20) != 7 ? 32 : 48;
            }
            // 0x495ef6
            function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g66, "session hash", (int64_t)&v21, v27);
            int64_t v28 = (0x100000000 * v1 >> 32) + 56; // 0x495f4c
            v22 = v28;
            if ((int32_t)v28 != 0) {
                int64_t result = v28 & 0xffffffff; // 0x495f61
                function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g67, "prf", result);
                // 0x495c80
                return result;
            }
        } else {
            if ((int32_t)v26 != 0) {
                int64_t result2 = v26 & 0xffffffff; // 0x495849
                function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g68, "prf", result2);
                // 0x495c80
                return result2;
            }
            // 0x495852
            v22 = (0x100000000 * v1 >> 32) + 56;
        }
        int64_t v29 = v25; // 0x495866
        *(char *)v29 = 0;
        v29++;
        while (v29 != v20) {
            // 0x495870
            *(char *)v29 = 0;
            v29++;
        }
    }
    int64_t v30 = v5 + (int64_t)&g130;
    int64_t * v31 = (int64_t *)v30; // 0x49587e
    int64_t * v32 = (int64_t *)(v5 + (int64_t)&g134); // 0x495885
    int64_t v33 = *v31; // bp-376, 0x49588f
    int64_t * v34 = (int64_t *)(v5 + (int64_t)&g135); // 0x4958bd
    int64_t * v35 = (int64_t *)(v5 + (int64_t)&g136); // 0x4958c9
    int64_t * v36 = (int64_t *)(v5 + (int64_t)&g137); // 0x4958d8
    *v31 = *v32;
    *(int64_t *)(v5 + (int64_t)&g130 + 8) = *v34;
    *(int64_t *)(v5 + (int64_t)&g130 + 16) = *v35;
    *(int64_t *)(v5 + (int64_t)&g130 + 24) = *v36;
    *v32 = v33;
    *v34 = *(int64_t *)(v5 + (int64_t)&g131);
    *v35 = *(int64_t *)(v5 + (int64_t)&g132);
    *v36 = *(int64_t *)(v5 + (int64_t)&g133);
    int64_t v37 = (int64_t)&v21; // 0x495944
    int64_t v38 = (int64_t)&v33; // 0x49594c
    *(char *)v38 = 0;
    int64_t v39 = v38 + 1; // 0x495953
    v38 = v39;
    while (v39 != v37) {
        // 0x495950
        *(char *)v38 = 0;
        v39 = v38 + 1;
        v38 = v39;
    }
    if ((int32_t)v39 != 0) {
        int64_t result3 = v39 & 0xffffffff; // 0x49598c
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g70, "prf", result3);
        // 0x495c80
        return result3;
    }
    int64_t v40 = 0x100000000 * v1 >> 32; // 0x495995
    int64_t v41 = function_49f070(*(int32_t *)(v40 + 8), 48, v40, v30, 64, v37, 256); // 0x4959a4
    function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t)&g71, "ciphersuite = %s", v41);
    function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g72, "master secret", v22, 48);
    function_49e960(a1, 4, "/home/richard/code/mbedtls/library/ssl_tls.c", &g73, "random bytes", v30, 64);
    function_49e960(a1, 4, "/home/richard/code/mbedtls/library/ssl_tls.c", &g74, "key block", v37, 256);
    *(char *)v30 = 0;
    int64_t v42 = v30 + 1; // 0x495a5d
    int64_t v43 = v42; // 0x495a64
    while (v42 != v5 + (int64_t)&g138) {
        // 0x495a58
        *(char *)v43 = 0;
        v42 = v43 + 1;
        v43 = v42;
    }
    int32_t * v44 = (int32_t *)(v8 + 8); // 0x495a6b
    int32_t * v45 = (int32_t *)(v8 + 4); // 0x495a6f
    int32_t v46 = *v44 / 8; // 0x495a72
    int32_t * v47 = (int32_t *)(v3 + 8); // 0x495a79
    *v47 = v46;
    int64_t * v48; // 0x495700
    int32_t v49; // 0x495700
    int64_t v50; // 0x495e32
    switch (*v45) {
        case 8: {
            goto lab_0x495a83;
        }
        case 6: {
            goto lab_0x495a83;
        }
        default: {
            int64_t v51 = function_4c1770(v3 + 80, v14, 1); // 0x495e18
            v50 = v51;
            if ((int32_t)v51 != 0) {
                goto lab_0x495e42;
            } else {
                // 0x495e24
                v50 = function_4c1770(v3 + 104, v14, 1);
                if ((int32_t)v50 == 0) {
                    uint64_t v52 = function_4c1d00(v14) % 256; // 0x49603a
                    int64_t * v53 = (int64_t *)(v3 + 40);
                    *v53 = v52;
                    int32_t v54 = *(int32_t *)(v40 + 144); // 0x496046
                    int64_t v55 = v54 != 1 ? v52 : 10;
                    *v53 = v55;
                    uint32_t v56 = *(int32_t *)(v8 + 24); // 0x496061
                    int64_t v57 = v56; // 0x496061
                    int32_t v58 = *v45; // 0x496064
                    *(int64_t *)(v3 + 24) = v57;
                    if (v58 == 7) {
                        // 0x496150
                        *(int64_t *)(v3 + 16) = v55;
                        int32_t v59 = *v47; // 0x496154
                        v48 = v53;
                        v49 = v59;
                    } else {
                        int32_t v60 = *(int32_t *)(v40 + 148); // 0x496077
                        uint32_t v61 = *(int32_t *)(v8 + 32);
                        int64_t v62 = v61;
                        if (v60 == 1) {
                            // 0x4961c5
                            *(int64_t *)(v3 + 16) = v55 + v62;
                        } else {
                            // 0x496084
                            *(int64_t *)(v3 + 16) = v55 + v62 - (int64_t)((int32_t)v55 % v61);
                        }
                        uint32_t v63 = *v15; // 0x4960a0
                        if (v63 < 2) {
                            int32_t v64 = *v47; // 0x4961bc
                            v48 = v53;
                            v49 = v64;
                        } else {
                            if ((v63 & -2) != 2) {
                                // 0x496204
                                return v63 - 2;
                            }
                            int64_t * v65 = (int64_t *)(v3 + 16); // 0x4960bb
                            int64_t v66 = *v65; // 0x4960bb
                            int32_t v67 = *v47; // 0x4960bf
                            *v65 = v66 + v57;
                            v48 = v53;
                            v49 = v67;
                        }
                    }
                    goto lab_0x495abd;
                } else {
                    goto lab_0x495e42;
                }
            }
        }
    }
  lab_0x495a83:;
    int64_t * v68 = (int64_t *)(v3 + 40);
    *v68 = 0;
    *(int64_t *)(v3 + 24) = 12;
    *(int64_t *)(v3 + 32) = 4;
    *(int64_t *)(v3 + 16) = (int64_t)(4 * *(char *)(*v7 + 44) & 8 ^ 24);
    v48 = v68;
    v49 = v46;
    goto lab_0x495abd;
  lab_0x495e42:;
    int64_t result10 = v50 & 0xffffffff;
    function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g76, "mbedtls_md_setup", result10);
    // 0x495c80
    return result10;
  lab_0x495abd:;
    int64_t * v69 = v48;
    int64_t v70 = v49;
    function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t)&g78, "keylen: %d, minlen: %d, ivlen: %d, maclen: %d", v70);
    int64_t v71 = *v69;
    int64_t v72 = (int64_t)*v47;
    int64_t v73 = *(int64_t *)(v3 + 32);
    int64_t v74 = v71 + v37;
    int64_t v75 = 2 * v71 + v37;
    int64_t v76 = v75 + v72;
    int64_t v77; // 0x495700
    int64_t v78; // 0x495700
    int64_t v79; // 0x495700
    int64_t v80; // 0x495700
    int64_t v81; // 0x495700
    if (*(char *)(a1 + 372) % 2 != 0) {
        int64_t v82 = v73; // 0x495d66
        if (v73 == 0) {
            // 0x495dab
            v82 = *(int64_t *)(v3 + 24);
        }
        int32_t v83 = v82; // 0x495d79
        memcpy((int64_t *)(v3 + 64), (int64_t *)(v76 + v72), v83);
        uint32_t v84 = *v47; // 0x495d7e
        memcpy((int64_t *)(v3 + 48), (int64_t *)(v82 + v76 + (int64_t)v84), v83);
        v77 = v82;
        v78 = v76;
        v79 = v75;
        v80 = v37;
        v81 = v74;
    } else {
        int64_t v85 = v73; // 0x495b27
        if (v73 == 0) {
            // 0x495da2
            v85 = *(int64_t *)(v3 + 24);
        }
        int32_t v86 = v85; // 0x495b38
        memcpy((int64_t *)(v3 + 48), (int64_t *)(v76 + v72), v86);
        uint32_t v87 = *v47; // 0x495b3d
        memcpy((int64_t *)(v3 + 64), (int64_t *)(v85 + v76 + (int64_t)v87), v86);
        v77 = v85;
        v78 = v75;
        v79 = v76;
        v80 = v74;
        v81 = v37;
    }
    // 0x495b57
    v12 = (int64_t)&g79;
    v19 = v70;
    if (*v15 >= 1) {
        int64_t v88 = v81;
        function_4c19e0(v3 + 80, v88, *v69, v88);
        int64_t v89 = v3 + 104; // 0x495b76
        function_4c19e0(v89, v80, *v69, v88);
        int64_t v90 = *(int64_t *)(v3 + 288); // 0x495b85
        int64_t v91 = v90 == 0 ? v89 : v37;
        int64_t v92 = v3 + 128; // 0x495baf
        int64_t v93 = function_4b5690(v92, v8, v91); // 0x495bbe
        if ((int32_t)v93 != 0) {
            int64_t result4 = v93 & 0xffffffff; // 0x495bc5
            function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g81, "mbedtls_cipher_setup", result4);
            // 0x495c80
            return result4;
        }
        int64_t v94 = v3 + 216; // 0x495bd3
        int64_t v95 = function_4b5690(v94, v8, v91); // 0x495bdd
        if ((int32_t)v95 != 0) {
            int64_t result5 = v95 & 0xffffffff; // 0x495be4
            function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g82, "mbedtls_cipher_setup", result5);
            // 0x495c80
            return result5;
        }
        int64_t v96 = function_4b4f20(v92, v78, *v44, 1); // 0x495c00
        if ((int32_t)v96 != 0) {
            int64_t result6 = v96 & 0xffffffff; // 0x495c07
            function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g83, "mbedtls_cipher_setkey", result6);
            // 0x495c80
            return result6;
        }
        int64_t v97 = function_4b4f20(v94, v79, *v44, 0); // 0x495c20
        int64_t result7 = v97 & 0xffffffff; // 0x495c27
        if ((int32_t)v97 != 0) {
            // 0x4960cc
            function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g85, "mbedtls_cipher_setkey", result7);
            // 0x495c80
            return result7;
        }
        // 0x495c30
        if (*v45 == 2) {
            int64_t v98 = function_4b55b0(v92, 4); // 0x4960fc
            if ((int32_t)v98 != 0) {
                int64_t result8 = v98 & 0xffffffff; // 0x496103
                function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g86, "mbedtls_cipher_set_padding_mode", result8);
                // 0x495c80
                return result8;
            }
            int64_t v99 = function_4b55b0(v94, 4); // 0x496114
            if ((int32_t)v99 != 0) {
                int64_t result9 = v99 & 0xffffffff; // 0x49611b
                function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g87, "mbedtls_cipher_set_padding_mode", result9);
                // 0x495c80
                return result9;
            }
        }
        int64_t v100 = v90 == 0 ? v70 : v77;
        int64_t v101 = v37; // 0x495c44
        *(char *)v101 = 0;
        v101++;
        int64_t v102; // bp-56, 0x495700
        while (v101 != (int64_t)&v102) {
            // 0x495c48
            *(char *)v101 = 0;
            v101++;
        }
        // 0x495c5c
        function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t)&g88, "<= derive keys", v100);
        // 0x495c80
        return result7;
    }
    goto lab_0x495caa;
}

// Address range: 0x4a0710 - 0x4a123e
int64_t function_4a0710(int64_t a1) {
    int64_t v1 = *(int64_t *)*(int64_t *)(a1 + 128); // 0x4a0757
    int64_t v2; // 0x4a0710
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g293, "=> parse server key exchange", v2);
    int32_t * v3 = (int32_t *)(v1 + 24); // 0x4a0761
    int32_t v4 = *v3; // 0x4a0761
    if (v4 == 1) {
        // 0x4a0a20
        function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g294, "<= skip parse server key exchange", v2);
        int32_t * v5 = (int32_t *)(a1 + 8); // 0x4a0a44
        *v5 = *v5 + 1;
        // 0x4a07f9
        return 0;
    }
    if (v4 < 11) {
        int64_t * v6 = (int64_t *)(a1 + 88); // 0x4a0838
        int64_t v7 = *(int64_t *)(*v6 + 104); // 0x4a083c
        int64_t v8; // 0x4a0710
        if (v7 == 0) {
            // 0x4a0ea9
            function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g289, "certificate required", v2);
            // 0x4a09cb
            v8 = 0xffff8900;
            function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g295, "ssl_get_ecdh_params_from_cert", v8);
            // 0x4a07f9
            return v8 & 0xffffffff;
        }
        int64_t v9 = function_4c4450(v7 + 328, 2, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g293); // 0x4a0855
        if ((int32_t)v9 == 0) {
            // 0x4a0c93
            function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g290, "server key not ECDH capable", v2);
            // 0x4a09cb
            v8 = 0xffff9300;
            function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g295, "ssl_get_ecdh_params_from_cert", v8);
            // 0x4a07f9
            return v8 & 0xffffffff;
        }
        int64_t v10 = *(int64_t *)(a1 + 96); // 0x4a0866
        int64_t v11 = *(int64_t *)(*(int64_t *)(*v6 + 104) + 336); // 0x4a087a
        int64_t v12 = function_4b92f0(v10 + 256, v11, 1, (int64_t)&g293); // 0x4a0881
        int64_t v13 = v12 & 0xffffffff; // 0x4a0888
        if ((int32_t)v12 != 0) {
            // 0x4a09a8
            function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g291, "mbedtls_ecdh_get_params", v13);
            // 0x4a09cb
            function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g295, "ssl_get_ecdh_params_from_cert", v13);
            // 0x4a07f9
            return v13 & 0xffffffff;
        }
        // 0x4a0890
        if ((int32_t)function_4a0650(a1) != 0) {
            // 0x4a0e7d
            function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g292, "bad server certificate (ECDH curve)", v2);
            // 0x4a09cb
            v8 = 0xffff8600;
            function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g295, "ssl_get_ecdh_params_from_cert", v8);
            // 0x4a07f9
            return v8 & 0xffffffff;
        }
        // 0x4a08a0
        function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g296, "<= skip parse server key exchange", v2);
        int32_t * v14 = (int32_t *)(a1 + 8); // 0x4a08c2
        *v14 = *v14 + 1;
        // 0x4a07f9
        return v13 & 0xffffffff;
    }
    int64_t v15 = function_49d220(a1); // 0x4a077e
    int64_t v16 = v15 & 0xffffffff; // 0x4a0785
    if ((int32_t)v15 != 0) {
        // 0x4a09f8
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g297, "mbedtls_ssl_read_record", v16);
        // 0x4a07f9
        return v16 & 0xffffffff;
    }
    // 0x4a078d
    int64_t v17; // 0x4a0710
    if (*(int32_t *)(a1 + 216) != 22) {
        // 0x4a0c3f
        v17 = (int64_t)&g298;
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", v17, "bad server key exchange message", v2);
        // 0x4a07f9
        return 0xffff8900;
    }
    int64_t * v18 = (int64_t *)(a1 + 200); // 0x4a07a6
    int64_t v19 = *v18; // 0x4a07a6
    int64_t v20; // 0x4a0710
    int64_t v21; // 0x4a0710
    int64_t v22; // 0x4a0710
    int64_t v23; // 0x4a0710
    int32_t v24; // 0x4a0710
    char * v25; // bp-352, 0x4a0710
    int64_t v26; // 0x4a0901
    uint64_t v27; // 0x4a0906
    int32_t v28; // 0x4a0921
    int32_t v29; // 0x4a0928
    if (*(char *)v19 == 12) {
        unsigned char v30 = *(char *)(a1 + 372) & 2;
        int64_t v31 = v30; // 0x4a08f5
        v26 = v19 + 12 + (v31 - ((int64_t)(v30 == 0) | v31) & -8);
        v27 = *(int64_t *)(a1 + 272) + v19;
        v25 = (char *)v26;
        function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g300, "server key exchange", v26, v27 - v26);
        v28 = *v3;
        v29 = v28 & -3;
        if (v28 < 9) {
            char * v32 = v25; // 0x4a0a50
            int64_t v33 = (int64_t)v32; // 0x4a0a50
            int64_t v34 = (int64_t)*(char *)(v33 + 1); // 0x4a0a58
            int64_t v35 = v33 + 2; // 0x4a0a5c
            v25 = (char *)v35;
            uint64_t v36 = (256 * (int64_t)*v32 | v34) + v35; // 0x4a0a6d
            if (v27 < v36) {
                // 0x4a0ee6
                function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g146, "bad server key exchange message (psk_identity_hint length)", v26);
                v22 = (int64_t)&g301;
                v21 = v26;
                goto lab_0x4a0b23;
            } else {
                // 0x4a0a79
                v25 = (char *)v36;
                v24 = v28;
                v23 = v34;
                v20 = v26;
                if (v29 != 5) {
                    goto lab_0x4a0946;
                } else {
                    goto lab_0x4a0a89;
                }
            }
        } else {
            goto lab_0x4a0946;
        }
    } else {
        // 0x4a07b8
        if ((*v3 & -3) != 5) {
            // 0x4a0c3f
            v17 = (int64_t)&g299;
            function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", v17, "bad server key exchange message", v2);
            // 0x4a07f9
            return 0xffff8900;
        }
        // 0x4a07c9
        *(int32_t *)(a1 + 284) = 1;
        goto lab_0x4a07d3;
    }
  lab_0x4a0946:;
    int64_t v37; // 0x4a0710
    int64_t v38; // 0x4a0710
    if ((v28 & -5) == 2) {
        int64_t * v39 = (int64_t *)(a1 + 96); // 0x4a0b78
        int64_t v40 = *v39; // 0x4a0b78
        int64_t v41 = function_4b8370(v40 + 8, (int64_t *)&v25, v27, v29); // 0x4a0b88
        if ((int32_t)v41 != 0) {
            int64_t v42 = v41 & 0xffffffff; // 0x4a0d7f
            function_49e8b0(a1, 2, "/home/richard/code/mbedtls/library/ssl_cli.c", &g139, "mbedtls_dhm_read_params", v42);
            v22 = (int64_t)&g302;
            v21 = v42;
            goto lab_0x4a0b23;
        } else {
            int64_t v43 = *v39; // 0x4a0b95
            int64_t v44 = 8 * *(int64_t *)(v43 + 8); // 0x4a0ba6
            if (v44 < (int64_t)*(int32_t *)(v40 + 372)) {
                // 0x4a116f
                function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g140, "DHM prime too short: %d < %d", v44);
                v22 = (int64_t)&g302;
                v21 = v44;
                goto lab_0x4a0b23;
            } else {
                // 0x4a0bb5
                function_49eba0(a1, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g141, "DHM: P ", v43 + 16);
                int64_t v45 = *v39; // 0x4a0bd9
                function_49eba0(a1, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t *)&g142, "DHM: G ", v45 + 40);
                int64_t v46 = *v39 + 112; // 0x4a0c20
                function_49eba0(a1, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g143, "DHM: GY", v46);
                v24 = *v3;
                v23 = a1;
                v20 = v46;
                goto lab_0x4a0a89;
            }
        }
    } else {
        switch (v28) {
            case 8: {
                goto lab_0x4a0967;
            }
            case 3: {
                goto lab_0x4a0967;
            }
            default: {
                // 0x4a095e
                v37 = v26;
                v38 = (int64_t)&g304;
                if (v28 != 4) {
                    goto lab_0x4a0b54;
                } else {
                    goto lab_0x4a0967;
                }
            }
        }
    }
  lab_0x4a07d3:;
    int32_t * v47 = (int32_t *)(a1 + 8); // 0x4a07d3
    *v47 = *v47 + 1;
    int64_t v48; // 0x4a0710
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g317, "<= parse server key exchange", v48);
    // 0x4a07f9
    return v16 & 0xffffffff;
  lab_0x4a0b23:
    // 0x4a0b23
    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", v22, "bad server key exchange message", v21);
    // 0x4a07f9
    return 0xffff8500;
  lab_0x4a0a89:
    // 0x4a0a89
    v48 = v20;
    int64_t v49; // 0x4a0710
    int64_t v50; // 0x4a0710
    int64_t v51; // 0x4a0a9c
    if (v24 < 5) {
        char * v52 = v25; // 0x4a0a9c
        v51 = (int64_t)v52;
        int32_t v53 = *(int32_t *)(a1 + 24); // 0x4a0ab5
        if (v53 == 3) {
            // 0x4a0da5
            v22 = (int64_t)&g305;
            v21 = v20;
            if (v27 < v51 + 2) {
                goto lab_0x4a0b23;
            } else {
                int64_t v54 = function_498b90(*v52); // 0x4a0db6
                int32_t v55 = v54; // 0x4a0dbb
                char * v56 = v25; // 0x4a0dc1
                if (v55 == 0) {
                    int64_t v57 = (int64_t)*v56; // 0x4a1199
                    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g181, "Server used unsupported HashAlgorithm %d", v57);
                    v22 = (int64_t)&g305;
                    v21 = v57;
                    goto lab_0x4a0b23;
                } else {
                    int64_t result = function_498b70(*(char *)((int64_t)v56 + 1)); // 0x4a0dd0
                    int32_t v58 = result; // 0x4a0dd5
                    if (v58 == 0) {
                        // 0x4a1221
                        return result;
                    }
                    // 0x4a0de1
                    if ((int32_t)function_498c10(a1, v55) != 0) {
                        // 0x4a1221
                        return 0;
                    }
                    unsigned char v59 = *(char *)((int64_t)v25 + 1); // 0x4a0e15
                    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g287, "Server used SignatureAlgorithm %d", (int64_t)v59);
                    int64_t v60 = (int64_t)*v25; // 0x4a0e41
                    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g288, "Server used HashAlgorithm %d", v60);
                    v25 = (char *)((int64_t)v25 + 2);
                    int64_t v61 = function_49f0c0(v1); // 0x4a0e55
                    v22 = (int64_t)&g306;
                    v21 = v60;
                    if (v58 != (int32_t)v61) {
                        goto lab_0x4a0b23;
                    } else {
                        // 0x4a0e70
                        v49 = v61;
                        v50 = v54 & 0xffffffff;
                        goto lab_0x4a0aea;
                    }
                }
            }
        } else {
            // 0x4a0acc
            v37 = v20;
            v38 = (int64_t)&g307;
            if (v53 > 2) {
                goto lab_0x4a0b54;
            } else {
                int64_t v62 = function_49f0c0(v1); // 0x4a0ad7
                v49 = v62;
                v50 = 4 * (int64_t)((int32_t)v62 == 4);
                goto lab_0x4a0aea;
            }
        }
    } else {
        goto lab_0x4a07d3;
    }
  lab_0x4a0967:;
    int64_t v63 = *(int64_t *)(a1 + 96); // 0x4a0967
    int64_t v64 = function_4b9280(v63 + 256, (int64_t *)&v25, v27, v29); // 0x4a097a
    if ((int32_t)v64 != 0) {
        int64_t v65 = v64 & 0xffffffff; // 0x4a0c6d
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g144, "mbedtls_ecdh_read_params", v65);
        v22 = (int64_t)&g303;
        v21 = v65;
        goto lab_0x4a0b23;
    } else {
        // 0x4a0987
        if ((int32_t)function_4a0650(a1) != 0) {
            // 0x4a11d0
            function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g145, "bad server key exchange message (ECDHE curve)", v26);
            v22 = (int64_t)&g303;
            v21 = v26;
            goto lab_0x4a0b23;
        } else {
            // 0x4a0997
            v24 = *v3;
            v23 = a1;
            v20 = v26;
            goto lab_0x4a0a89;
        }
    }
  lab_0x4a0b54:
    // 0x4a0b54
    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", v38, "should never happen", v37);
    // 0x4a07f9
    return 0xffff9400;
  lab_0x4a0aea:;
    char * v66 = v25; // 0x4a0aea
    int64_t v67 = (int64_t)v66; // 0x4a0aea
    int64_t v68 = v67 + 2; // 0x4a0af7
    v25 = (char *)v68;
    int64_t v69 = 256 * (int64_t)*v66 | (int64_t)*(char *)(v67 + 1); // 0x4a0b04
    v22 = (int64_t)&g308;
    v21 = v68;
    if (v27 == v69 + v68) {
        int64_t v70 = ((*(char *)(v23 + 372) & 2) == 0 ? 4 : 12) + *v18; // 0x4a0cbd
        function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g309, "signature", v68, v69);
        int64_t v71 = v51 - v70; // 0x4a0cf0
        int32_t v72 = v50; // 0x4a0cf3
        int64_t v73; // 0x4a0710
        int64_t v74; // 0x4a0710
        int64_t v75; // bp-312, 0x4a0710
        if (v72 == 0) {
            // 0x4a0f19
            int64_t v76; // bp-248, 0x4a0710
            function_4c1d60(&v76);
            int64_t v77; // bp-152, 0x4a0710
            function_4cb410(&v77);
            function_4c1e70(&v76);
            int64_t * v78 = (int64_t *)(a1 + 96); // 0x4a0f45
            function_4c28f0(&v76, *v78 + (int64_t)&g130, 64);
            function_4c28f0(&v76, v70, v71);
            function_4c2a20(&v76, &v75);
            function_4cb520(&v77);
            function_4cc7d0(&v77, *v78 + (int64_t)&g130, 64);
            function_4cc7d0(&v77, v70, v71);
            int64_t v79; // bp-296, 0x4a0710
            function_4cc900(&v77, &v79);
            function_4c1df0(&v76);
            function_4cb4a0(&v77);
            v74 = 36;
            v73 = 36;
        } else {
            // 0x4a0d06
            int64_t v80; // bp-344, 0x4a0710
            function_4c1690(&v80);
            int64_t v81 = function_4c1770((int64_t)&v80, function_4c14d0(v72), 0); // 0x4a0d2c
            if ((int32_t)v81 != 0) {
                int64_t v82 = v81 & 0xffffffff; // 0x4a0d33
                function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g311, "mbedtls_md_setup", v82);
                // 0x4a07f9
                return v82 & 0xffffffff;
            }
            // 0x4a10f0
            function_4c1820(&v80);
            int64_t v83 = *(int64_t *)(a1 + 96); // 0x4a1109
            function_4c1850(&v80, v83 + (int64_t)&g130, 64);
            function_4c1850(&v80, v70, v71);
            function_4c1880(&v80, &v75);
            function_4c16b0(&v80);
            v74 = function_4c1d00(function_4c14d0(v72)) % 256;
            v73 = 0;
        }
        int64_t v84 = (int64_t)&v75; // 0x4a1014
        function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g312, "parameters hash", v84, v74);
        int64_t * v85 = (int64_t *)(a1 + 88); // 0x4a1033
        int64_t v86 = *(int64_t *)(*v85 + 104); // 0x4a1041
        if (v86 == 0) {
            // 0x4a11f7
            function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g313, "certificate required", v84);
            // 0x4a07f9
            return 0xffff8900;
        }
        int64_t v87 = function_4c4450(v86 + 328, v49 & 0xffffffff, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g312); // 0x4a105d
        if ((int32_t)v87 == 0) {
            // 0x4a106b
            function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g314, "bad server key exchange message", v84);
            // 0x4a07f9
            return 0xffff9300;
        }
        int64_t v88 = *(int64_t *)(*v85 + 104); // 0x4a10aa
        int64_t v89 = function_4c4470(v88 + 328, v50 & 0xffffffff, &v75, v73, (int64_t)v25, v69); // 0x4a10b5
        v48 = v69;
        if ((int32_t)v89 != 0) {
            int64_t v90 = v89 & 0xffffffff; // 0x4a10bc
            function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g316, "mbedtls_pk_verify", v90);
            // 0x4a07f9
            return v90 & 0xffffffff;
        }
        goto lab_0x4a07d3;
    } else {
        goto lab_0x4a0b23;
    }
}

// Address range: 0x4a3d40 - 0x4a479b
int64_t function_4a3d40(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 328); // 0x4a3d87
    int64_t v2 = *v1; // 0x4a3d87
    int64_t v3; // 0x4a3d40
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", 2687, "=> write server key exchange", v3);
    int32_t * v4 = (int32_t *)(*(int64_t *)*(int64_t *)(a1 + 128) + 24); // 0x4a3d98
    int32_t v5 = *v4; // 0x4a3d98
    int64_t v6 = (int64_t)&g321; // 0x4a3d40
    int64_t v7; // 0x4a3d40
    int64_t v8; // 0x4a3d40
    int64_t v9; // 0x4a3d40
    int32_t v10; // 0x4a3d40
    int64_t v11; // 0x4a3d40
    int64_t v12; // 0x4a3d40
    int32_t v13; // 0x4a3d40
    int64_t v14; // 0x4a3d40
    int64_t v15; // 0x4a3d40
    int64_t v16; // 0x4a3db2
    int64_t * v17; // 0x4a4450
    int64_t v18; // 0x4a3dc1
    switch (v5) {
        case 7: {
            goto lab_0x4a408c;
        }
        case 5: {
            goto lab_0x4a408c;
        }
        case 1: {
            goto lab_0x4a408c;
        }
        default: {
            uint32_t v19 = v5 - 9; // 0x4a3db2
            v16 = v19;
            if (v19 < 2) {
                // 0x4a4450
                v17 = (int64_t *)(a1 + 96);
                int64_t v20 = *v17; // 0x4a4450
                if (v20 == 0) {
                    goto lab_0x4a4581;
                } else {
                    int64_t v21 = *(int64_t *)(v20 + (int64_t)&g84); // 0x4a4461
                    v11 = v21;
                    if (v21 == 0) {
                        goto lab_0x4a4581;
                    } else {
                        goto lab_0x4a4471;
                    }
                }
            } else {
                // 0x4a3dbe
                v18 = v2 + 4;
                switch (v5) {
                    case 8: {
                        goto lab_0x4a3dcc;
                    }
                    case 6: {
                        goto lab_0x4a3dcc;
                    }
                    default: {
                        // 0x4a3f61
                        v14 = 0;
                        v13 = 2;
                        v7 = v18;
                        v15 = 0;
                        v10 = v5;
                        v12 = 0;
                        v8 = v18;
                        v9 = v18;
                        if ((v5 & -5) == 2) {
                            goto lab_0x4a3df6;
                        } else {
                            goto lab_0x4a3f78;
                        }
                    }
                }
            }
        }
    }
  lab_0x4a408c:;
    // 0x4a408c
    int64_t v22; // 0x4a3d40
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", v6, "<= skip write server key exchange", v22);
    int32_t * v23 = (int32_t *)(a1 + 8); // 0x4a40a5
    *v23 = *v23 + 1;
    // 0x4a4043
    return 0;
  lab_0x4a4581:;
    int64_t v24 = *(int64_t *)(a1 + 208); // 0x4a4581
    v11 = v24;
    int64_t v25 = 0; // 0x4a458d
    if (v24 == 0) {
        goto lab_0x4a4475;
    } else {
        goto lab_0x4a4471;
    }
  lab_0x4a3dcc:
    // 0x4a3dcc
    *(char *)v18 = 0;
    *(char *)(v2 + 5) = 0;
    int64_t v26 = v2 + 6; // 0x4a3dd8
    int32_t v27 = *v4; // 0x4a3ddc
    int32_t v28 = v27 & -5; // 0x4a3dea
    v14 = 2;
    v13 = v28;
    v7 = v26;
    v15 = 2;
    v10 = v27;
    v12 = 0;
    v8 = v26;
    v9 = v18;
    if (v28 != 2) {
        goto lab_0x4a3f78;
    } else {
        goto lab_0x4a3df6;
    }
  lab_0x4a4475:;
    int64_t result = function_4c4450(v25, 2, a1, v16); // 0x4a447a
    if ((int32_t)result == 0) {
        // 0x4a4043
        return result;
    }
    int64_t v29 = *v17; // 0x4a4487
    int64_t v30; // 0x4a3d40
    if (v29 == 0) {
        goto lab_0x4a4743;
    } else {
        int64_t v31 = *(int64_t *)(v29 + (int64_t)&g84); // 0x4a4498
        v30 = v31;
        if (v31 == 0) {
            goto lab_0x4a4743;
        } else {
            goto lab_0x4a44a8;
        }
    }
  lab_0x4a4471:
    // 0x4a4471
    v25 = *(int64_t *)(v11 + 8);
    goto lab_0x4a4475;
  lab_0x4a3df6:
    // 0x4a3df6
    if (*(int64_t *)(a1 + 264) == 0 || *(int64_t *)(a1 + 288) == 0) {
        // 0x4a4762
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g324, "no DH parameters set", v3);
        // 0x4a4043
        return 0xffff8f00;
    }
    int64_t * v32 = (int64_t *)(a1 + 96); // 0x4a3e16
    int64_t v33 = *v32; // 0x4a3e16
    int64_t v34 = function_4b0ac0(v33 + 16, a1 + 248, v13, v16); // 0x4a3e25
    int64_t v35 = v34; // 0x4a3e2f
    int64_t v36; // 0x4a3d40
    int32_t v37; // bp-360, 0x4a3d40
    if ((int32_t)v34 != 0) {
        goto lab_0x4a4020;
    } else {
        int64_t v38 = function_4b0ac0(*v32 + 40, v33 + 288, v13, v16); // 0x4a3e48
        v35 = v38;
        if ((int32_t)v38 != 0) {
            goto lab_0x4a4020;
        } else {
            int64_t v39 = *v32; // 0x4a3e58
            int64_t v40 = *(int64_t *)(v39 + 56); // 0x4a3e64
            int64_t v41 = *(int64_t *)(v39 + 48); // 0x4a3e68
            int64_t v42 = function_4b0fa0(v39 + 16); // 0x4a3e6c
            int64_t v43 = *v32; // 0x4a3e71
            int64_t v44 = function_4b8430(v43 + 8, v42 & 0xffffffff, v7, (int64_t *)&v37, v41, v40); // 0x4a3e89
            if ((int32_t)v44 != 0) {
                int64_t v45 = v44 & 0xffffffff; // 0x4a3e90
                function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g327, "mbedtls_dhm_make_params", v45);
                int64_t v46 = v45; // 0x4a4519
                int64_t result2 = v46;
                return result2;
            }
            int64_t v47 = v37; // 0x4a3eb8
            function_49eba0(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g328, "DHM: X ", *v32 + 64);
            function_49eba0(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g329, "DHM: P ", *v32 + 16);
            function_49eba0(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g330, "DHM: G ", *v32 + 40);
            int64_t v48 = *v32 + 88; // 0x4a3f44
            function_49eba0(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g331, "DHM: GX", v48);
            v15 = v14 + v47;
            v10 = *v4;
            v12 = v47;
            v36 = v48;
            v8 = v7 + v47;
            v9 = v7;
            goto lab_0x4a3f78;
        }
    }
  lab_0x4a3f78:;
    int32_t v49 = v10;
    int64_t v50 = v15; // 0x4a3f7e
    int32_t v51 = v49; // 0x4a3f7e
    int64_t v52 = v12; // 0x4a3f7e
    int64_t v53 = v36; // 0x4a3f7e
    int64_t v54 = v8; // 0x4a3f7e
    int64_t v55 = v9; // 0x4a3f7e
    if (v49 > 4 != v49 != 8) {
        int64_t v56 = *(int64_t *)(a1 + 240); // 0x4a3f8d
        int32_t v57 = *(int32_t *)v56; // 0x4a3f94
        if (v57 == 0) {
            // 0x4a3fef
            function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g332, "no matching curve for ECDHE", v36);
            // 0x4a4043
            return 0xffff8c80;
        }
        int64_t * v58 = (int64_t *)(a1 + 96); // 0x4a3f9a
        int64_t v59 = *(int64_t *)(*v58 + (int64_t)&g80); // 0x4a3f9e
        int64_t * v60 = (int64_t *)v59;
        int64_t v61 = *v60; // 0x4a3fa5
        int64_t v62 = v56; // 0x4a3fa5
        int64_t v63 = v59; // 0x4a3fab
        int64_t * v64; // 0x4a3d40
        int64_t v65; // 0x4a3d40
        int64_t v66; // 0x4a3fc8
        int64_t * v67; // 0x4a3d40
        int64_t v68; // 0x4a3fcc
        if (v61 != 0) {
            // 0x4a3fb1
            v66 = v59;
            v64 = v60;
            v65 = v61;
            if (*(int32_t *)v61 == v57) {
                goto lab_0x4a40b8_2;
            }
            v66 += 8;
            v67 = (int64_t *)v66;
            v68 = *v67;
            v63 = v66;
            while (v68 != 0) {
                // 0x4a3fc0
                v64 = v67;
                v65 = v68;
                if (*(int32_t *)v68 == v57) {
                    goto lab_0x4a40b8_2;
                }
                v66 += 8;
                v67 = (int64_t *)v66;
                v68 = *v67;
                v63 = v66;
            }
        }
        // 0x4a3fd4
        v62 += 4;
        int32_t v69 = *(int32_t *)v62; // 0x4a3fd8
        while (v69 != 0) {
            // 0x4a3fa8
            v63 = v59;
            if (v61 != 0) {
                int32_t v70 = v69;
                v66 = v59;
                v64 = v60;
                v65 = v61;
                if (*(int32_t *)v61 == v70) {
                    goto lab_0x4a40b8_2;
                }
                v66 += 8;
                v67 = (int64_t *)v66;
                v68 = *v67;
                v63 = v66;
                while (v68 != 0) {
                    // 0x4a3fc0
                    v64 = v67;
                    v65 = v68;
                    if (*(int32_t *)v68 == v70) {
                        goto lab_0x4a40b8_2;
                    }
                    v66 += 8;
                    v67 = (int64_t *)v66;
                    v68 = *v67;
                    v63 = v66;
                }
            }
            // 0x4a3fd4
            v62 += 4;
            v69 = *(int32_t *)v62;
        }
        // 0x4a3fde
        if (v63 == 0) {
            // 0x4a3fef
            function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g332, "no matching curve for ECDHE", v36);
            // 0x4a4043
            return 0xffff8c80;
        }
        int64_t * v71 = (int64_t *)v63;
        int64_t v72 = *v71; // 0x4a3fe3
        v64 = v71;
        v65 = v72;
        if (v72 == 0) {
            // 0x4a3fef
            function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g332, "no matching curve for ECDHE", v36);
            // 0x4a4043
            return 0xffff8c80;
        }
      lab_0x4a40b8_2:;
        int64_t v73 = *(int64_t *)(v65 + 8); // 0x4a40b8
        function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g333, "ECDHE curve: %s", v73);
        int64_t v74 = *v58; // 0x4a40e1
        int64_t v75 = function_4bf0f0(v74 + 256, *(int32_t *)*v64); // 0x4a40ee
        if ((int32_t)v75 != 0) {
            int64_t result3 = v75 & 0xffffffff; // 0x4a40f5
            function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g334, "mbedtls_ecp_group_load", result3);
            // 0x4a4043
            return result3;
        }
        int64_t v76 = *v58; // 0x4a4102
        int64_t v77 = *(int64_t *)(v74 + 312); // 0x4a4118
        int64_t v78 = *(int64_t *)(v74 + 304); // 0x4a411c
        int64_t v79 = function_4b91b0(v76 + 256, (int64_t *)&v37, v8, (int64_t)"le" - v15, v78, v77); // 0x4a4127
        if ((int32_t)v79 != 0) {
            int64_t result4 = v79 & 0xffffffff; // 0x4a412e
            function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g335, "mbedtls_ecdh_make_params", result4);
            // 0x4a4043
            return result4;
        }
        int64_t v80 = v37; // 0x4a413b
        int64_t v81 = v15 + v80; // 0x4a415b
        int64_t v82 = *v58 + (int64_t)&g55; // 0x4a4163
        function_49ebd0(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g336, "ECDH: Q ", v82, v81);
        v50 = v81;
        v51 = *v4;
        v52 = v80;
        v53 = v82;
        v54 = v8 + v80;
        v55 = v8;
    }
    int64_t v83 = v50; // 0x4a417f
    int64_t v84 = v53; // 0x4a417f
    int64_t * v85; // 0x4a3d40
    int64_t v86; // 0x4a3d40
    int64_t v87; // bp-312, 0x4a3d40
    char v88; // bp-352, 0x4a3d40
    int32_t v89; // 0x4a3d40
    int32_t v90; // 0x4a3d40
    int64_t v91; // 0x4a3d40
    int32_t * v92; // 0x4a4185
    if (v51 < 5) {
        // 0x4a4185
        v92 = (int32_t *)(a1 + 24);
        v88 = 0;
        if (*v92 == 3) {
            int32_t v93 = function_498b90(*(char *)*(int64_t *)(a1 + 96)); // 0x4a46cf
            v90 = v93;
            if (v93 == 0) {
                // 0x4a46db
                function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g337, "should never happen", v53);
                // 0x4a4043
                return 0xffff9400;
            }
            goto lab_0x4a45a8;
        } else {
            // 0x4a4199
            v90 = 4;
            if (v51 == 4) {
                goto lab_0x4a45a8;
            } else {
                // 0x4a41a2
                int64_t v94; // bp-248, 0x4a3d40
                function_4c1d60(&v94);
                int64_t v95; // bp-152, 0x4a3d40
                function_4cb410(&v95);
                function_4c1e70(&v94);
                int64_t * v96 = (int64_t *)(a1 + 96);
                function_4c28f0(&v94, *v96 + (int64_t)&g130, 64);
                function_4c28f0(&v94, v55, v52);
                function_4c2a20(&v94, &v87);
                function_4cb520(&v95);
                function_4cc7d0(&v95, *v96 + (int64_t)&g130, 64);
                function_4cc7d0(&v95, v55, v52);
                int64_t v97; // bp-296, 0x4a3d40
                function_4cc900(&v95, &v97);
                function_4c1df0(&v94);
                function_4cb4a0(&v95);
                v85 = v96;
                v89 = 0;
                v86 = 36;
                v91 = 36;
                goto lab_0x4a4288;
            }
        }
    } else {
        goto lab_0x4a43b7;
    }
  lab_0x4a4743:;
    int64_t v98 = *(int64_t *)(v25 + 208); // 0x4a4743
    v30 = v98;
    int64_t v99 = 0; // 0x4a474f
    if (v98 == 0) {
        goto lab_0x4a44ac;
    } else {
        goto lab_0x4a44a8;
    }
  lab_0x4a4020:;
    int64_t result5 = v35 & 0xffffffff;
    function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g326, "mbedtls_mpi_copy", result5);
    // 0x4a4043
    return result5;
  lab_0x4a43b7:
    // 0x4a43b7
    *(int32_t *)(a1 + 336) = 22;
    *(int64_t *)(a1 + 344) = v83 + 4;
    *(char *)*v1 = 12;
    int32_t * v100 = (int32_t *)(a1 + 8); // 0x4a43df
    *v100 = *v100 + 1;
    int64_t v101 = function_498d40(a1); // 0x4a43e4
    int64_t result6 = v101 & 0xffffffff; // 0x4a43eb
    if ((int32_t)v101 != 0) {
        // 0x4a4600
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g342, "mbedtls_ssl_write_record", result6);
    } else {
        // 0x4a43f4
        function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g343, "<= write server key exchange", v84);
    }
    // 0x4a4043
    return result6;
  lab_0x4a44ac:;
    int64_t v102 = v99;
    int64_t v103 = function_4b92f0(v29 + 256, *(int64_t *)(v102 + 8), 0, v102); // 0x4a44b9
    v6 = (int64_t)&g323;
    if ((int32_t)v103 != 0) {
        int64_t v104 = v103 & 0xffffffff; // 0x4a44d0
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g319, "mbedtls_ecdh_get_params", v104);
        v22 = v104;
        v6 = (int64_t)&g323;
    }
    goto lab_0x4a408c;
  lab_0x4a44a8:
    // 0x4a44a8
    v99 = *(int64_t *)(v30 + 8);
    goto lab_0x4a44ac;
  lab_0x4a45a8:;
    int64_t v105 = function_4c14d0(v90); // 0x4a45ac
    int64_t v106; // bp-344, 0x4a3d40
    function_4c1690(&v106);
    int64_t v107 = function_4c1770((int64_t)&v106, v105, 0); // 0x4a45c8
    if ((int32_t)v107 != 0) {
        int64_t result7 = v107 & 0xffffffff; // 0x4a45cf
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)L" M", "mbedtls_md_setup", result7);
        // 0x4a4043
        return result7;
    }
    // 0x4a4658
    function_4c1820(&v106);
    int64_t * v108 = (int64_t *)(a1 + 96);
    function_4c1850(&v106, *v108 + (int64_t)&g130, 64);
    function_4c1850(&v106, v55, v52);
    function_4c1880(&v106, &v87);
    function_4c16b0(&v106);
    int64_t v109 = function_4c14d0(v90); // 0x4a46ae
    v85 = v108;
    v89 = v90;
    v86 = 0;
    v91 = 0x100000000000000 * function_4c1d00(v109) >> 56;
    goto lab_0x4a4288;
  lab_0x4a4288:;
    int64_t v110 = (int64_t)&v87; // 0x4a429a
    function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)2979, "parameters hash", v110, v91);
    int64_t v111 = *v85; // 0x4a42af
    int64_t v112; // 0x4a3d40
    if (v111 == 0) {
        goto lab_0x4a4706;
    } else {
        int64_t v113 = *(int64_t *)(v111 + (int64_t)&g84); // 0x4a42c0
        v112 = v113;
        if (v113 == 0) {
            goto lab_0x4a4706;
        } else {
            goto lab_0x4a42d0;
        }
    }
  lab_0x4a4706:;
    int64_t v114 = *(int64_t *)(a1 + 208); // 0x4a4706
    v112 = v114;
    if (v114 == 0) {
        // 0x4a4716
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g339, "got no private key", v110);
        // 0x4a4043
        return 0xffff8a00;
    }
    goto lab_0x4a42d0;
  lab_0x4a42d0:
    // 0x4a42d0
    if (*(int64_t *)(v112 + 8) == 0) {
        // 0x4a4716
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g339, "got no private key", v110);
        // 0x4a4043
        return 0xffff8a00;
    }
    int64_t v115 = v50; // 0x4a42e0
    int64_t v116 = v111; // 0x4a42e0
    int64_t v117 = a1; // 0x4a42e0
    int64_t v118 = v54; // 0x4a42e0
    if (*v92 == 3) {
        // 0x4a451e
        *(char *)v54 = (char)*(int32_t *)v111;
        int64_t v119 = *v85; // 0x4a4524
        if (v119 == 0) {
            // 0x4a478f
            return *(int64_t *)(a1 + 208);
        }
        int64_t v120 = *(int64_t *)(v119 + (int64_t)&g84); // 0x4a4535
        if (v120 == 0) {
            // 0x4a478f
            return *(int64_t *)(a1 + 208);
        }
        int64_t v121 = *(int64_t *)(v120 + 8); // 0x4a4545
        *(char *)(v54 + 1) = (char)function_498b30(v121);
        v115 = v50 + 2;
        v116 = *v85;
        v117 = v121;
        v118 = v54 + 2;
    }
    int64_t v122 = *(int64_t *)(v117 + 56); // 0x4a42e9
    int64_t v123 = *(int64_t *)(v117 + 48); // 0x4a42ed
    int64_t v124; // 0x4a3d40
    if (v116 == 0) {
        goto lab_0x4a456a;
    } else {
        int64_t v125 = *(int64_t *)(v116 + (int64_t)&g84); // 0x4a42fe
        v124 = v125;
        if (v125 == 0) {
            goto lab_0x4a456a;
        } else {
            goto lab_0x4a430e;
        }
    }
  lab_0x4a456a:;
    int64_t v126 = *(int64_t *)(v117 + 208); // 0x4a456a
    v124 = v126;
    int32_t v127 = 0; // 0x4a4576
    if (v126 == 0) {
        goto lab_0x4a4312;
    } else {
        goto lab_0x4a430e;
    }
  lab_0x4a4312:;
    int64_t v128 = v118 + 2; // 0x4a42f1
    int64_t v129 = function_4c4530(v127, v89, &v87, v86, v128, (int64_t *)&v88, 0x100000000000000 * v123 >> 56, v122); // 0x4a432a
    if ((int32_t)v129 != 0) {
        int64_t result8 = v129 & 0xffffffff; // 0x4a4331
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g340, "mbedtls_pk_sign", result8);
        // 0x4a4043
        return result8;
    }
    // 0x4a4360
    *(char *)v118 = v88 >> 7;
    *(char *)(v118 + 1) = v88;
    function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g341, "my signature", v128, (int64_t)v88);
    v83 = v115 + 2 + (int64_t)v88;
    v84 = v128;
    goto lab_0x4a43b7;
  lab_0x4a430e:
    // 0x4a430e
    v127 = (int32_t)*(int64_t *)(v124 + 8);
    goto lab_0x4a4312;
}

// Address range: 0x4a98b0 - 0x4aa335
int64_t function_4a98b0(int64_t str, uint64_t size, int64_t a3, int64_t a4) {
    if (a4 == 0) {
        int32_t chars_printed = snprintf((char *)str, (int32_t)size, "\nCertificate is uninitialised!\n"); // 0x4a9d39
        if (chars_printed >= 0) {
            int64_t result = chars_printed; // 0x4a9d42
            if (result < size) {
                // 0x4a9d55
                return result;
            }
        }
        // 0x4a9d55
        return 0xffffd680;
    }
    uint32_t v1 = *(int32_t *)(a4 + 48); // 0x4a98d0
    char * v2 = (char *)a3; // 0x4a98e3
    int32_t chars_printed2 = snprintf((char *)str, (int32_t)size, "%scert. version     : %d\n", v2, (int64_t)v1); // 0x4a98e3
    if (chars_printed2 < 0) {
        // 0x4a9d55
        return 0xffffd680;
    }
    uint64_t v3 = (int64_t)chars_printed2; // 0x4a98f0
    if (v3 >= size) {
        // 0x4a9d55
        return 0xffffd680;
    }
    int64_t str2 = v3 + str; // 0x4a98fe
    uint64_t size2 = size - v3; // 0x4a9908
    int32_t chars_printed3 = snprintf((char *)str2, (int32_t)size2, "%sserial number     : ", v2); // 0x4a9916
    if (chars_printed3 < 0) {
        // 0x4a9d55
        return 0xffffd680;
    }
    uint64_t v4 = (int64_t)chars_printed3; // 0x4a9923
    if (size2 <= v4) {
        // 0x4a9d55
        return 0xffffd680;
    }
    uint64_t v5 = size2 - v4; // 0x4a992f
    int64_t v6 = str2 + v4; // 0x4a9932
    int64_t v7 = function_4ad450(v6, v5, a4 + 56); // 0x4a993f
    if ((int32_t)v7 < 0) {
        // 0x4a9d55
        return 0xffffd680;
    }
    uint64_t v8 = 0x100000000 * v7 >> 32; // 0x4a994c
    if (v5 <= v8) {
        // 0x4a9d55
        return 0xffffd680;
    }
    uint64_t size3 = v5 - v8; // 0x4a9958
    int64_t str3 = v8 + v6; // 0x4a995b
    int32_t chars_printed4 = snprintf((char *)str3, (int32_t)size3, "\n%sissuer name       : ", v2); // 0x4a9970
    if (chars_printed4 < 0) {
        // 0x4a9d55
        return 0xffffd680;
    }
    uint64_t v9 = (int64_t)chars_printed4; // 0x4a997d
    if (size3 <= v9) {
        // 0x4a9d55
        return 0xffffd680;
    }
    uint64_t v10 = size3 - v9; // 0x4a9988
    int64_t v11 = str3 + v9; // 0x4a998b
    int64_t v12 = function_4ad2a0(v11, v10, a4 + 152); // 0x4a999b
    if ((int32_t)v12 < 0) {
        // 0x4a9d55
        return 0xffffd680;
    }
    uint64_t v13 = 0x100000000 * v12 >> 32; // 0x4a99a8
    if (v10 <= v13) {
        // 0x4a9d55
        return 0xffffd680;
    }
    uint64_t size4 = v10 - v13; // 0x4a99b4
    int64_t str4 = v13 + v11; // 0x4a99b7
    int32_t chars_printed5 = snprintf((char *)str4, (int32_t)size4, "\n%ssubject name      : ", v2); // 0x4a99cc
    if (chars_printed5 < 0) {
        // 0x4a9d55
        return 0xffffd680;
    }
    uint64_t v14 = (int64_t)chars_printed5; // 0x4a99d9
    if (size4 <= v14) {
        // 0x4a9d55
        return 0xffffd680;
    }
    uint64_t v15 = size4 - v14; // 0x4a99e5
    int64_t v16 = str4 + v14; // 0x4a99e8
    int64_t v17 = function_4ad2a0(v16, v15, a4 + 216); // 0x4a99f8
    if ((int32_t)v17 < 0) {
        // 0x4a9d55
        return 0xffffd680;
    }
    uint64_t v18 = 0x100000000 * v17 >> 32; // 0x4a9a05
    if (v15 <= v18) {
        // 0x4a9d55
        return 0xffffd680;
    }
    uint64_t size5 = v15 - v18; // 0x4a9a10
    int64_t str5 = v18 + v16; // 0x4a9a13
    int32_t v19 = *(int32_t *)(a4 + 300); // 0x4a9a16
    int32_t v20 = *(int32_t *)(a4 + 296); // 0x4a9a30
    int32_t v21 = *(int32_t *)(a4 + 292); // 0x4a9a3a
    int32_t v22 = *(int32_t *)(a4 + 288); // 0x4a9a44
    uint32_t v23 = *(int32_t *)(a4 + 284); // 0x4a9a4d
    uint32_t v24 = *(int32_t *)(a4 + 280); // 0x4a9a56
    int32_t chars_printed6 = snprintf((char *)str5, (int32_t)size5, "\n%sissued  on        : %04d-%02d-%02d %02d:%02d:%02d", v2, (int64_t)v24, (int64_t)v23, (int64_t)v22, (int64_t)v21, (int64_t)v20, (int64_t)v19); // 0x4a9a5d
    if (chars_printed6 < 0) {
        // 0x4a9d55
        return 0xffffd680;
    }
    uint64_t v25 = (int64_t)chars_printed6; // 0x4a9a6a
    if (size5 <= v25) {
        // 0x4a9d55
        return 0xffffd680;
    }
    int32_t v26 = *(int32_t *)(a4 + 324); // 0x4a9a76
    uint64_t size6 = size5 - v25; // 0x4a9a7c
    int64_t str6 = str5 + v25; // 0x4a9a7f
    int32_t v27 = *(int32_t *)(a4 + 320); // 0x4a9a96
    int32_t v28 = *(int32_t *)(a4 + 316); // 0x4a9aa0
    int32_t v29 = *(int32_t *)(a4 + 312); // 0x4a9aaa
    uint32_t v30 = *(int32_t *)(a4 + 308); // 0x4a9ab3
    uint32_t v31 = *(int32_t *)(a4 + 304); // 0x4a9abc
    int32_t chars_printed7 = snprintf((char *)str6, (int32_t)size6, "\n%sexpires on        : %04d-%02d-%02d %02d:%02d:%02d", v2, (int64_t)v31, (int64_t)v30, (int64_t)v29, (int64_t)v28, (int64_t)v27, (int64_t)v26); // 0x4a9ac3
    if (chars_printed7 < 0) {
        // 0x4a9d55
        return 0xffffd680;
    }
    uint64_t v32 = (int64_t)chars_printed7; // 0x4a9ad0
    if (size6 <= v32) {
        // 0x4a9d55
        return 0xffffd680;
    }
    uint64_t size7 = size6 - v32; // 0x4a9adc
    int64_t str7 = str6 + v32; // 0x4a9adf
    int32_t chars_printed8 = snprintf((char *)str7, (int32_t)size7, "\n%ssigned using      : ", v2); // 0x4a9af4
    if (chars_printed8 < 0) {
        // 0x4a9d55
        return 0xffffd680;
    }
    uint64_t v33 = (int64_t)chars_printed8; // 0x4a9b01
    if (size7 <= v33) {
        // 0x4a9d55
        return 0xffffd680;
    }
    int64_t v34 = str7 + v33; // 0x4a9b0c
    int32_t v35 = *(int32_t *)(a4 + (int64_t)&g56); // 0x4a9b10
    int64_t v36 = *(int64_t *)(a4 + (int64_t)&g57); // 0x4a9b16
    int32_t v37 = *(int32_t *)(a4 + (int64_t)&g55); // 0x4a9b1d
    uint64_t v38 = size7 - v33; // 0x4a9b24
    int64_t v39 = function_4ad570(v34, v38, a4 + 80, v35, v37, v36); // 0x4a9b31
    if ((int32_t)v39 < 0) {
        // 0x4a9d55
        return 0xffffd680;
    }
    uint64_t v40 = 0x100000000 * v39 >> 32; // 0x4a9b3e
    if (v38 <= v40) {
        // 0x4a9d55
        return 0xffffd680;
    }
    int64_t v41 = a4 + 328; // 0x4a9b4a
    int64_t v42; // bp-88, 0x4a98b0
    int64_t result2 = function_4ad6f0(&v42, 18, function_4c4900(v41)); // 0x4a9b6b
    if ((int32_t)result2 != 0) {
        // 0x4a9d55
        return result2;
    }
    uint64_t size8 = v38 - v40; // 0x4a9b80
    int64_t str8 = v40 + v34; // 0x4a9b83
    int64_t v43 = function_4c4700(v41); // 0x4a9b86
    int32_t chars_printed9 = snprintf((char *)str8, (int32_t)size8, "\n%s%-18s: %d bits", v2, &v42, v43 & 0xffffffff); // 0x4a9ba5
    if (chars_printed9 < 0) {
        // 0x4a9d55
        return 0xffffd680;
    }
    uint64_t v44 = (int64_t)chars_printed9; // 0x4a9bb2
    if (size8 <= v44) {
        // 0x4a9d55
        return 0xffffd680;
    }
    int64_t str9 = str8 + v44; // 0x4a9bc0
    int64_t size9 = size8 - v44; // 0x4a9bc4
    int32_t * v45 = (int32_t *)(a4 + 448); // 0x4a9bc7
    int32_t v46 = *v45; // 0x4a9bc7
    int32_t v47 = v46; // 0x4a9bd0
    int64_t str11 = str9; // 0x4a9bd0
    int64_t size11 = size9; // 0x4a9bd0
    if ((v46 & 256) != 0) {
        char * v48 = *(int32_t *)(a4 + 452) != 0 ? "true" : "false"; // 0x4a9c04
        int32_t chars_printed10 = snprintf((char *)str9, (int32_t)size9, "\n%sbasic constraints : CA=%s", v2, v48); // 0x4a9c04
        if (chars_printed10 < 0) {
            // 0x4a9d55
            return 0xffffd680;
        }
        uint64_t v49 = (int64_t)chars_printed10; // 0x4a9c11
        if (size9 <= v49) {
            // 0x4a9d55
            return 0xffffd680;
        }
        int64_t size10 = size9 - v49; // 0x4a9c1c
        int64_t str10 = str9 + v49; // 0x4a9c1f
        uint32_t v50 = *(int32_t *)(a4 + 456); // 0x4a9c22
        str11 = str10;
        size11 = size10;
        if (v50 >= 1) {
            int32_t chars_printed11 = snprintf((char *)str10, (int32_t)size10, ", max_pathlen=%d", (int64_t)(v50 - 1)); // 0x4a9c3e
            if (chars_printed11 < 0) {
                // 0x4a9d55
                return 0xffffd680;
            }
            uint64_t v51 = (int64_t)chars_printed11; // 0x4a9c4b
            if (size10 <= v51) {
                // 0x4a9d55
                return 0xffffd680;
            }
            // 0x4a9c56
            str11 = str10 + v51;
            size11 = size10 - v51;
        }
        // 0x4a9c5c
        v47 = *v45;
    }
    int64_t v52 = v47;
    int64_t v53 = v52; // 0x4a9c64
    int64_t str12 = str11; // 0x4a9c64
    int64_t size12 = size11; // 0x4a9c64
    if ((v52 & 32) != 0) {
        int32_t chars_printed12 = snprintf((char *)str11, (int32_t)size11, "\n%ssubject alt name  : ", v2); // 0x4a9e42
        if (chars_printed12 < 0) {
            // 0x4a9d55
            return 0xffffd680;
        }
        uint64_t v54 = (int64_t)chars_printed12; // 0x4a9e4f
        if (size11 <= v54) {
            // 0x4a9d55
            return 0xffffd680;
        }
        int64_t v55 = (int64_t)&g110; // 0x4a9e6e
        int64_t v56 = size11 - v54; // 0x4a9e6e
        int64_t v57 = 0;
        int64_t v58 = str11 + v54;
        int64_t v59 = a4 + 416;
        int64_t * v60 = (int64_t *)(v59 + 8); // 0x4a9e70
        int64_t v61 = *v60; // 0x4a9e70
        uint64_t v62 = v61 + v57; // 0x4a9e74
        while (v56 > v62) {
            int64_t v63 = v55;
            int64_t v64 = v61; // 0x4a9e87
            int64_t v65 = v58; // 0x4a9e87
            if (v57 != 0) {
                int64_t v66 = 0;
                *(char *)(v66 + v58) = *(char *)(v66 + v63);
                int64_t v67 = v66 + 1; // 0x4a9e97
                while (v67 != v57) {
                    // 0x4a9e90
                    v66 = v67;
                    *(char *)(v66 + v58) = *(char *)(v66 + v63);
                    v67 = v66 + 1;
                }
                // 0x4a9ea0
                v64 = *v60;
                v65 = v67 + v58;
            }
            int64_t v68 = v65;
            int64_t v69 = v68; // 0x4a9eaa
            if (v64 != 0) {
                int64_t v70 = v68; // 0x4a9ebe
                int64_t v71 = 0;
                int64_t v72 = *(int64_t *)(v59 + 16); // 0x4a9eb0
                int64_t v73 = v71 + 1; // 0x4a9eb8
                *(char *)v70 = *(char *)(v72 + v71);
                v70++;
                v69 = v70;
                while (v73 < *v60) {
                    // 0x4a9eb0
                    v71 = v73;
                    v72 = *(int64_t *)(v59 + 16);
                    v73 = v71 + 1;
                    *(char *)v70 = *(char *)(v72 + v71);
                    v70++;
                    v69 = v70;
                }
            }
            // 0x4a9ec8
            size12 = v56 - v62;
            str12 = v69;
            int64_t v74 = *(int64_t *)(v59 + 24); // 0x4a9ec8
            v55 = (int64_t)", ";
            v56 = size12;
            if (v74 == 0) {
                // 0x4a9edd
                *(char *)str12 = 0;
                v53 = (int64_t)*v45;
                goto lab_0x4a9c6a;
            }
            v57 = 2;
            v58 = str12;
            v59 = v74;
            v60 = (int64_t *)(v59 + 8);
            v61 = *v60;
            v62 = v61 + v57;
        }
        // 0x4a9f7c
        *(char *)v58 = 0;
        // 0x4a9d55
        return 0xffffd680;
    }
    goto lab_0x4a9c6a;
  lab_0x4a9c6a:;
    int64_t v75 = v53; // 0x4a9c6f
    int64_t str20 = str12; // 0x4a9c6f
    int64_t size20 = size12; // 0x4a9c6f
    if (((int32_t)v53 & (int32_t)&g1) != 0) {
        int32_t chars_printed13 = snprintf((char *)str12, (int32_t)size12, "\n%scert. type        : ", v2); // 0x4a9efd
        if (chars_printed13 < 0) {
            // 0x4a9d55
            return 0xffffd680;
        }
        uint64_t v76 = (int64_t)chars_printed13; // 0x4a9f0a
        if (size12 <= v76) {
            // 0x4a9d55
            return 0xffffd680;
        }
        unsigned char v77 = *(char *)(a4 + 496); // 0x4a9f15
        uint64_t size13 = size12 - v76; // 0x4a9f1d
        int64_t str13 = str12 + v76; // 0x4a9f20
        if (v77 < 0) {
            int32_t chars_printed14 = snprintf((char *)str13, (int32_t)size13, "%sSSL Client", (char *)&g110); // 0x4aa31a
            if (chars_printed14 < 0) {
                // 0x4a9d55
                return 0xffffd680;
            }
            int64_t result3 = chars_printed14; // 0x4aa327
            if (size13 > result3) {
                // 0x4a9d55
                return result3;
            }
            // 0x4a9d55
            return 0xffffd680;
        }
        uint64_t v78 = (int64_t)v77; // 0x4a9f15
        int64_t v79 = (int64_t)&g110; // 0x4a9f37
        int64_t str14 = str13; // 0x4a9f37
        int64_t size14 = size13; // 0x4a9f37
        if ((v78 & 64) != 0) {
            int32_t chars_printed15 = snprintf((char *)str13, (int32_t)size13, "%sSSL Server", (char *)&g110); // 0x4a9f98
            if (chars_printed15 < 0) {
                // 0x4a9d55
                return 0xffffd680;
            }
            uint64_t v80 = (int64_t)chars_printed15; // 0x4a9fa5
            if (size13 <= v80) {
                // 0x4a9d55
                return 0xffffd680;
            }
            // 0x4a9fb0
            v79 = (int64_t)", ";
            str14 = str13 + v80;
            size14 = size13 - v80;
        }
        int64_t v81 = v79; // 0x4a9f3d
        int64_t str15 = str14; // 0x4a9f3d
        int64_t size15 = size14; // 0x4a9f3d
        if ((v78 & 32) != 0) {
            int32_t chars_printed16 = snprintf((char *)str14, (int32_t)size14, "%sEmail", (char *)v79); // 0x4aa00a
            if (chars_printed16 < 0) {
                // 0x4a9d55
                return 0xffffd680;
            }
            uint64_t v82 = (int64_t)chars_printed16; // 0x4aa017
            if (size14 <= v82) {
                // 0x4a9d55
                return 0xffffd680;
            }
            // 0x4aa022
            v81 = (int64_t)", ";
            str15 = str14 + v82;
            size15 = size14 - v82;
        }
        int64_t v83 = v81; // 0x4a9f47
        int64_t str16 = str15; // 0x4a9f47
        int64_t size16 = size15; // 0x4a9f47
        if ((v78 & 16) != 0) {
            int32_t chars_printed17 = snprintf((char *)str15, (int32_t)size15, "%sObject Signing", (char *)v81); // 0x4a9fd1
            if (chars_printed17 < 0) {
                // 0x4a9d55
                return 0xffffd680;
            }
            uint64_t v84 = (int64_t)chars_printed17; // 0x4a9fde
            if (size15 <= v84) {
                // 0x4a9d55
                return 0xffffd680;
            }
            // 0x4a9fe9
            v83 = (int64_t)", ";
            str16 = str15 + v84;
            size16 = size15 - v84;
        }
        int64_t v85 = v83; // 0x4a9f4d
        int64_t str17 = str16; // 0x4a9f4d
        int64_t size17 = size16; // 0x4a9f4d
        if ((v78 & 8) != 0) {
            int32_t chars_printed18 = snprintf((char *)str16, (int32_t)size16, "%sReserved", (char *)v83); // 0x4aa043
            if (chars_printed18 < 0) {
                // 0x4a9d55
                return 0xffffd680;
            }
            uint64_t v86 = (int64_t)chars_printed18; // 0x4aa050
            if (size16 <= v86) {
                // 0x4a9d55
                return 0xffffd680;
            }
            // 0x4aa05b
            v85 = (int64_t)", ";
            str17 = str16 + v86;
            size17 = size16 - v86;
        }
        int64_t v87 = v85; // 0x4a9f57
        int64_t str18 = str17; // 0x4a9f57
        int64_t size18 = size17; // 0x4a9f57
        if ((v78 & 4) != 0) {
            int32_t chars_printed19 = snprintf((char *)str17, (int32_t)size17, "%sSSL CA", (char *)v85); // 0x4aa07c
            if (chars_printed19 < 0) {
                // 0x4a9d55
                return 0xffffd680;
            }
            uint64_t v88 = (int64_t)chars_printed19; // 0x4aa089
            if (size17 <= v88) {
                // 0x4a9d55
                return 0xffffd680;
            }
            // 0x4aa094
            v87 = (int64_t)", ";
            str18 = str17 + v88;
            size18 = size17 - v88;
        }
        int64_t v89 = v87; // 0x4a9f61
        int64_t str19 = str18; // 0x4a9f61
        int64_t size19 = size18; // 0x4a9f61
        if ((v78 & 2) != 0) {
            int32_t chars_printed20 = snprintf((char *)str18, (int32_t)size18, "%sEmail CA", (char *)v87); // 0x4aa0e7
            if (chars_printed20 < 0) {
                // 0x4a9d55
                return 0xffffd680;
            }
            uint64_t v90 = (int64_t)chars_printed20; // 0x4aa0f4
            if (size18 <= v90) {
                // 0x4a9d55
                return 0xffffd680;
            }
            // 0x4aa0ff
            v89 = (int64_t)", ";
            str19 = str18 + v90;
            size19 = size18 - v90;
        }
        int64_t v91 = str19; // 0x4a9f6b
        int64_t v92 = size19; // 0x4a9f6b
        if (v78 % 2 != 0) {
            int32_t chars_printed21 = snprintf((char *)str19, (int32_t)size19, "%sObject Signing CA", (char *)v89); // 0x4aa0b5
            if (chars_printed21 < 0) {
                // 0x4a9d55
                return 0xffffd680;
            }
            uint64_t v93 = (int64_t)chars_printed21; // 0x4aa0c2
            if (size19 <= v93) {
                // 0x4a9d55
                return 0xffffd680;
            }
            // 0x4aa0cd
            v91 = str19 + v93;
            v92 = size19 - v93;
        }
        // 0x4a9f71
        v75 = (int64_t)*v45;
        str20 = v91;
        size20 = v92;
    }
    int64_t v94 = v75; // 0x4a9c77
    int64_t str31 = str20; // 0x4a9c77
    int64_t size31 = size20; // 0x4a9c77
    if ((v75 & 4) != 0) {
        int32_t chars_printed22 = snprintf((char *)str20, (int32_t)size20, "\n%skey usage         : ", v2); // 0x4a9da4
        if (chars_printed22 < 0) {
            // 0x4a9d55
            return 0xffffd680;
        }
        uint64_t v95 = (int64_t)chars_printed22; // 0x4a9dad
        if (size20 <= v95) {
            // 0x4a9d55
            return 0xffffd680;
        }
        uint32_t v96 = *(int32_t *)(a4 + 460); // 0x4a9db4
        int64_t size21 = size20 - v95; // 0x4a9dbb
        int64_t str21 = str20 + v95; // 0x4a9dbe
        int64_t v97 = (int64_t)&g110; // 0x4a9dcc
        int64_t str22 = str21; // 0x4a9dcc
        int64_t size22 = size21; // 0x4a9dcc
        if ((char)v96 <= -1) {
            int32_t chars_printed23 = snprintf((char *)str21, (int32_t)size21, "%sDigital Signature", (char *)&g110); // 0x4aa159
            if (chars_printed23 < 0) {
                // 0x4a9d55
                return 0xffffd680;
            }
            uint64_t v98 = (int64_t)chars_printed23; // 0x4aa166
            if (size21 <= v98) {
                // 0x4a9d55
                return 0xffffd680;
            }
            // 0x4aa171
            v97 = (int64_t)", ";
            str22 = str21 + v98;
            size22 = size21 - v98;
        }
        uint64_t v99 = (int64_t)v96; // 0x4a9db4
        int64_t v100 = v97; // 0x4a9dd6
        int64_t str23 = str22; // 0x4a9dd6
        int64_t size23 = size22; // 0x4a9dd6
        if ((v99 & 64) != 0) {
            int32_t chars_printed24 = snprintf((char *)str22, (int32_t)size22, "%sNon Repudiation", (char *)v97); // 0x4aa120
            if (chars_printed24 < 0) {
                // 0x4a9d55
                return 0xffffd680;
            }
            uint64_t v101 = (int64_t)chars_printed24; // 0x4aa12d
            if (size22 <= v101) {
                // 0x4a9d55
                return 0xffffd680;
            }
            // 0x4aa138
            v100 = (int64_t)", ";
            str23 = str22 + v101;
            size23 = size22 - v101;
        }
        int64_t v102 = v100; // 0x4a9de0
        int64_t str24 = str23; // 0x4a9de0
        int64_t size24 = size23; // 0x4a9de0
        if ((v99 & 32) != 0) {
            int32_t chars_printed25 = snprintf((char *)str23, (int32_t)size23, "%sKey Encipherment", (char *)v100); // 0x4aa1cb
            if (chars_printed25 < 0) {
                // 0x4a9d55
                return 0xffffd680;
            }
            uint64_t v103 = (int64_t)chars_printed25; // 0x4aa1d8
            if (size23 <= v103) {
                // 0x4a9d55
                return 0xffffd680;
            }
            // 0x4aa1e3
            v102 = (int64_t)", ";
            str24 = str23 + v103;
            size24 = size23 - v103;
        }
        int64_t v104 = v102; // 0x4a9dea
        int64_t str25 = str24; // 0x4a9dea
        int64_t size25 = size24; // 0x4a9dea
        if ((v99 & 16) != 0) {
            int32_t chars_printed26 = snprintf((char *)str24, (int32_t)size24, "%sData Encipherment", (char *)v102); // 0x4aa192
            if (chars_printed26 < 0) {
                // 0x4a9d55
                return 0xffffd680;
            }
            uint64_t v105 = (int64_t)chars_printed26; // 0x4aa19f
            if (size24 <= v105) {
                // 0x4a9d55
                return 0xffffd680;
            }
            // 0x4aa1aa
            v104 = (int64_t)", ";
            str25 = str24 + v105;
            size25 = size24 - v105;
        }
        int64_t v106 = v104; // 0x4a9df4
        int64_t str26 = str25; // 0x4a9df4
        int64_t size26 = size25; // 0x4a9df4
        if ((v99 & 8) != 0) {
            int32_t chars_printed27 = snprintf((char *)str25, (int32_t)size25, "%sKey Agreement", (char *)v104); // 0x4aa23d
            if (chars_printed27 < 0) {
                // 0x4a9d55
                return 0xffffd680;
            }
            uint64_t v107 = (int64_t)chars_printed27; // 0x4aa24a
            if (size25 <= v107) {
                // 0x4a9d55
                return 0xffffd680;
            }
            // 0x4aa255
            v106 = (int64_t)", ";
            str26 = str25 + v107;
            size26 = size25 - v107;
        }
        int64_t v108 = v106; // 0x4a9dfe
        int64_t str27 = str26; // 0x4a9dfe
        int64_t size27 = size26; // 0x4a9dfe
        if ((v99 & 4) != 0) {
            int32_t chars_printed28 = snprintf((char *)str26, (int32_t)size26, "%sKey Cert Sign", (char *)v106); // 0x4aa204
            if (chars_printed28 < 0) {
                // 0x4a9d55
                return 0xffffd680;
            }
            uint64_t v109 = (int64_t)chars_printed28; // 0x4aa211
            if (size26 <= v109) {
                // 0x4a9d55
                return 0xffffd680;
            }
            // 0x4aa21c
            v108 = (int64_t)", ";
            str27 = str26 + v109;
            size27 = size26 - v109;
        }
        int64_t v110 = v108; // 0x4a9e08
        int64_t str28 = str27; // 0x4a9e08
        int64_t size28 = size27; // 0x4a9e08
        if ((v99 & 2) != 0) {
            int32_t chars_printed29 = snprintf((char *)str27, (int32_t)size27, "%sCRL Sign", (char *)v108); // 0x4aa2e1
            if (chars_printed29 < 0) {
                // 0x4a9d55
                return 0xffffd680;
            }
            uint64_t v111 = (int64_t)chars_printed29; // 0x4aa2ee
            if (size27 <= v111) {
                // 0x4a9d55
                return 0xffffd680;
            }
            // 0x4aa2f9
            v110 = (int64_t)", ";
            str28 = str27 + v111;
            size28 = size27 - v111;
        }
        int64_t v112 = v110; // 0x4a9e12
        int64_t str29 = str28; // 0x4a9e12
        int64_t size29 = size28; // 0x4a9e12
        if (v99 % 2 != 0) {
            int32_t chars_printed30 = snprintf((char *)str28, (int32_t)size28, "%sEncipher Only", (char *)v110); // 0x4aa2a8
            if (chars_printed30 < 0) {
                // 0x4a9d55
                return 0xffffd680;
            }
            uint64_t v113 = (int64_t)chars_printed30; // 0x4aa2b5
            if (size28 <= v113) {
                // 0x4a9d55
                return 0xffffd680;
            }
            // 0x4aa2c0
            v112 = (int64_t)", ";
            str29 = str28 + v113;
            size29 = size28 - v113;
        }
        int64_t v114 = str29; // 0x4a9e1f
        int64_t v115 = size29; // 0x4a9e1f
        if ((v96 & (int32_t)&g147) != 0) {
            int32_t chars_printed31 = snprintf((char *)str29, (int32_t)size29, "%sDecipher Only", (char *)v112); // 0x4aa276
            if (chars_printed31 < 0) {
                // 0x4a9d55
                return 0xffffd680;
            }
            uint64_t v116 = (int64_t)chars_printed31; // 0x4aa283
            if (size29 <= v116) {
                // 0x4a9d55
                return 0xffffd680;
            }
            // 0x4aa28e
            v114 = str29 + v116;
            v115 = size29 - v116;
        }
        // 0x4a9e25
        v94 = (int64_t)*v45;
        str31 = v114;
        size31 = v115;
    }
    int64_t str30 = str31; // 0x4a9c80
    int64_t size30 = size31; // 0x4a9c80
    if ((v94 & 2048) == 0) {
      lab_0x4a9d68:;
        int32_t chars_printed32 = snprintf((char *)str30, (int32_t)size30, "\n"); // 0x4a9d77
        if (chars_printed32 < 0) {
            // 0x4a9d55
            return 0xffffd680;
        }
        uint64_t v117 = (int64_t)chars_printed32; // 0x4a9d80
        if (size30 <= v117) {
            // 0x4a9d55
            return 0xffffd680;
        }
        // 0x4a9d55
        return size - size30 + v117 & 0xffffffff;
    }
    int32_t chars_printed33 = snprintf((char *)str31, (int32_t)size31, "\n%sext key usage     : ", v2); // 0x4a9c98
    if (chars_printed33 < 0) {
        // 0x4a9d55
        return 0xffffd680;
    }
    uint64_t v118 = (int64_t)chars_printed33; // 0x4a9ca5
    if (size31 <= v118) {
        // 0x4a9d55
        return 0xffffd680;
    }
    int64_t str32 = str31 + v118; // 0x4a9cc4
    int64_t v119 = a4 + 464; // 0x4a9cc4
    int64_t v120 = (int64_t)&g110; // 0x4a9cc4
    int64_t size32 = size31 - v118; // 0x4a9cc4
    char * v121; // bp-96, 0x4a98b0
    int64_t v122; // 0x4a98b0
    if ((int32_t)function_4c31c0(v119, (int64_t *)&v121) == 0) {
        // 0x4a9cd0
        v122 = (int64_t)v121;
    } else {
        // 0x4a9d1e
        v121 = "???";
        v122 = (int64_t)"???";
    }
    int32_t chars_printed34 = snprintf((char *)str32, (int32_t)size32, "%s%s", (char *)v120, (char *)v122); // 0x4a9ce7
    while (chars_printed34 >= 0) {
        uint64_t v123 = (int64_t)chars_printed34; // 0x4a9cf0
        if (size32 <= v123) {
            // break -> 0x4a9d50
            break;
        }
        int64_t v124 = *(int64_t *)(v119 + 24); // 0x4a9cf7
        int64_t v125 = size32 - v123; // 0x4a9cfb
        int64_t v126 = str32 + v123; // 0x4a9cfe
        str32 = v126;
        v119 = v124;
        size32 = v125;
        str30 = v126;
        size30 = v125;
        if (v124 == 0) {
            goto lab_0x4a9d68;
        }
        if ((int32_t)function_4c31c0(v119, (int64_t *)&v121) == 0) {
            // 0x4a9cd0
            v122 = (int64_t)v121;
        } else {
            // 0x4a9d1e
            v121 = "???";
            v122 = (int64_t)"???";
        }
        // 0x4a9cd5
        chars_printed34 = snprintf((char *)str32, (int32_t)size32, "%s%s", (char *)(int64_t)", ", (char *)v122);
    }
    // 0x4a9d55
    return 0xffffd680;
}

// Address range: 0x4ab520 - 0x4ac09f
int64_t function_4ab520(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4ab520
    if (a1 == 0 || a2 == 0) {
        // 0x4ab79c
        return 0xffffd800;
    }
    int64_t v1 = 0; // 0x4ab562
    int64_t v2 = a1; // 0x4ab562
    int64_t v3; // 0x4ab520
    int64_t v4; // 0x4ab520
    int64_t v5; // 0x4ab520
    int64_t v6; // 0x4ab520
    int64_t v7; // 0x4ab520
    int64_t v8; // bp-152, 0x4ab520
    int64_t v9; // bp-184, 0x4ab520
    int64_t v10; // bp-216, 0x4ab520
    if (*(int32_t *)(a1 + 48) == 0) {
        goto lab_0x4ab620;
    } else {
        int64_t v11 = a1;
        int64_t * v12 = (int64_t *)(v11 + (int64_t)&g58);
        int64_t v13 = *v12; // 0x4ab568
        while (v13 != 0) {
            // 0x4ab55b
            v1 = v11;
            v2 = v13;
            if (*(int32_t *)(v13 + 48) == 0) {
                goto lab_0x4ab620;
            }
            v11 = v13;
            v12 = (int64_t *)(v11 + (int64_t)&g58);
            v13 = *v12;
        }
        int64_t * mem = calloc(1, (int32_t)&g60); // 0x4ab581
        int64_t v14 = (int64_t)mem; // 0x4ab581
        *v12 = v14;
        if (mem == NULL) {
            // 0x4ab79c
            return 0xffffd780;
        }
        // 0x4ab596
        function_4ab2f0(v14);
        int64_t v15 = *v12; // 0x4ab59e
        v10 = 0;
        v9 = 0;
        v8 = 0;
        v6 = v11;
        v4 = v15;
        v3 = 0xffffd800;
        v7 = v11;
        v5 = 0;
        if (v15 != 0) {
            goto lab_0x4ab67d;
        } else {
            goto lab_0x4ab777;
        }
    }
  lab_0x4ab620:
    // 0x4ab620
    v10 = 0;
    v9 = 0;
    v8 = 0;
    v6 = v1;
    v4 = v2;
    goto lab_0x4ab67d;
  lab_0x4ab769_13:;
    // 0x4ab769
    int64_t v16; // 0x4ab520
    function_4ab380(v16);
    int64_t v32; // 0x4ab520
    v3 = v32 & 0xffffffff;
    v7 = v6;
    v5 = v16;
    goto lab_0x4ab777;
  lab_0x4abcef_2:
    // 0x4abcef
    v32 = 0xffffda9a;
    int64_t v62; // 0x4ab520
    uint64_t v30; // 0x4ab735
    if (v30 == v62) {
        goto lab_0x4ab988;
    } else {
        goto lab_0x4ab769_13;
    }
  lab_0x4abce3:;
    // 0x4abce3
    uint64_t v82; // 0x4abc2b
    v62 = v82;
    if (v30 <= v82) {
        goto lab_0x4abcef_2;
    }
    goto lab_0x4abbbc;
  lab_0x4abe6c:;
    // 0x4abe6c
    int64_t v88; // 0x4ab520
    int64_t v18; // bp-248, 0x4ab520
    int64_t v64; // 0x4ab520
    int32_t * v67; // 0x4ab520
    if (v82 != v18) {
        int64_t v110 = function_4aff10(&v18, v82, v64); // 0x4abe84
        v88 = v110;
        if ((int32_t)v110 != 0) {
            goto lab_0x4abe37_3;
        }
        // 0x4abe8d
        v32 = 0xffffda9a;
        if (v82 != v18) {
            goto lab_0x4ab769_13;
        }
        // 0x4abe98
        *v67 = *v67 + 1;
    }
    goto lab_0x4abce3;
  lab_0x4abee3:;
    // 0x4abee3
    int32_t v93; // 0x4ab520
    uint32_t v111 = v93 - (int32_t)&g65; // 0x4abee3
    if (v111 != 0) {
        // 0x4ab769
        v32 = v111;
        goto lab_0x4ab769_13;
    }
    goto lab_0x4abdc7;
  lab_0x4abdc7:
    // 0x4abdc7
    v62 = v18;
    if (v30 <= v18) {
        goto lab_0x4abcef_2;
    }
    goto lab_0x4abbbc_2;
  lab_0x4ab67d:
    // 0x4ab67d
    v16 = v4;
    int64_t v17 = a3 + a2; // 0x4ab67d
    v18 = a2;
    int64_t v19 = a3; // bp-256, 0x4ab696
    int64_t v20; // 0x4ab520
    int64_t v21; // bp-224, 0x4ab520
    int64_t v22; // 0x4ab711
    if ((int32_t)function_4afe70(&v18, v17, &v19, 48) != 0) {
        // 0x4aba8e
        function_4ab380(v16);
        v3 = 0xffffde80;
        v7 = v6;
        v5 = v16;
        goto lab_0x4ab777;
    } else {
        // 0x4ab6ab
        if (v17 - v18 < v19) {
            goto lab_0x4aba36;
        } else {
            int64_t v23 = v18 - a2 + v19; // 0x4ab6c9
            int64_t * v24 = (int64_t *)(v16 + 8); // 0x4ab6cc
            *v24 = v23;
            int32_t size = v23; // 0x4ab6d3
            int64_t * mem2 = calloc(1, size); // 0x4ab6d3
            int64_t v25 = (int64_t)mem2; // 0x4ab6d3
            v18 = v25;
            *(int64_t *)(v16 + 16) = v25;
            v3 = 0xffffd780;
            v7 = v6;
            v5 = v16;
            if (mem2 == NULL) {
                goto lab_0x4ab777;
            } else {
                // 0x4ab6ed
                memcpy(mem2, (int64_t *)a2, size);
                int64_t v26 = *v24; // 0x4ab6fe
                int64_t v27 = v26 + v25 - v19; // 0x4ab6fe
                v22 = v26 + v25;
                int64_t * v28 = (int64_t *)(v16 + 40); // 0x4ab714
                *v28 = v27;
                v18 = v27;
                int64_t v29 = function_4afe70(&v18, v22, &v19, 48); // 0x4ab720
                v20 = v29;
                if ((int32_t)v29 != 0) {
                    goto lab_0x4ab7b0;
                } else {
                    // 0x4ab730
                    v30 = v19 + v18;
                    *(int64_t *)(v16 + 32) = v30 - *v28;
                    int64_t v31 = function_4afe70(&v18, v30, &v21, 160); // 0x4ab757
                    v32 = v31;
                    switch ((int32_t)v31) {
                        case 0: {
                            int64_t v33 = v21 + v18; // 0x4ab7cd
                            int32_t v34 = function_4aff10(&v18, v33, v16 + 48); // 0x4ab7e3
                            if (v34 != 0) {
                                uint32_t v35 = v34 - (int32_t)&g59; // 0x4aba60
                                v32 = v35;
                                if (v35 == 0) {
                                    goto lab_0x4ab7f6;
                                } else {
                                    goto lab_0x4ab769_13;
                                }
                            } else {
                                // 0x4ab7eb
                                v32 = 0xffffdd9a;
                                if (v33 != v18) {
                                    goto lab_0x4ab769_13;
                                } else {
                                    goto lab_0x4ab7f6;
                                }
                            }
                        }
                        case -98: {
                            // 0x4aba50
                            *(int32_t *)(v16 + 48) = 0;
                            goto lab_0x4ab7f6;
                        }
                        default: {
                            goto lab_0x4ab769_13;
                        }
                    }
                }
            }
        }
    }
  lab_0x4ab777:
    // 0x4ab777
    if (v7 != 0) {
        // 0x4ab77c
        *(int64_t *)(v7 + (int64_t)&g58) = 0;
    }
    int64_t result = v3; // 0x4ab78c
    if (v5 != a1) {
        // 0x4ab78e
        free((int64_t *)v5);
        result = v3;
    }
  lab_0x4ab79c:
    // 0x4ab79c
    return result;
  lab_0x4aba36:
    // 0x4aba36
    function_4ab380(v16);
    v3 = 0xffffde1a;
    v7 = v6;
    v5 = v16;
    goto lab_0x4ab777;
  lab_0x4ab7b0:
    // 0x4ab7b0
    function_4ab380(v16);
    int64_t v36 = (v20 & 0xffffffff) + 0xffffde80; // 0x4ab7b8
    int64_t result2 = v36 & 0xffffffff; // 0x4ab7b8
    v3 = result2;
    v7 = v6;
    v5 = v16;
    if ((int32_t)v36 == 0) {
        // 0x4ab79c
        return result2;
    }
    goto lab_0x4ab777;
  lab_0x4ab7f6:;
    int64_t v37 = function_4ac570(&v18, v30, v16 + 56); // 0x4ab802
    v32 = v37;
    int64_t v38; // 0x4ab520
    int32_t * v39; // 0x4ab830
    if ((int32_t)v37 != 0) {
        goto lab_0x4ab769_13;
    } else {
        int64_t v40 = v16 + 80; // 0x4ab80f
        int64_t v41 = function_4ac610(&v18, v30, v40, &v10); // 0x4ab823
        v32 = v41;
        if ((int32_t)v41 != 0) {
            goto lab_0x4ab769_13;
        } else {
            // 0x4ab830
            v39 = (int32_t *)(v16 + 48);
            int32_t v42 = *v39 + 1; // 0x4ab833
            *v39 = v42;
            if (v42 > 3) {
                // 0x4abb01
                function_4ab380(v16);
                v3 = 0xffffda80;
                v7 = v6;
                v5 = v16;
                goto lab_0x4ab777;
            } else {
                int64_t v43 = function_4ad100(v40, &v10, v16 + (int64_t)&g55, v16 + (int64_t)&g56, v16 + (int64_t)&g57); // 0x4ab85f
                v32 = v43;
                if ((int32_t)v43 != 0) {
                    goto lab_0x4ab769_13;
                } else {
                    int64_t * v44 = (int64_t *)(v16 + 120); // 0x4ab883
                    *v44 = v18;
                    int64_t v45 = function_4afe70(&v18, v30, &v19, 48); // 0x4ab887
                    v20 = v45;
                    if ((int32_t)v45 != 0) {
                        goto lab_0x4ab7b0;
                    } else {
                        int64_t v46 = function_4ac9e0(&v18, v19 + v18, v16 + 152); // 0x4ab8ad
                        v32 = v46;
                        if ((int32_t)v46 != 0) {
                            goto lab_0x4ab769_13;
                        } else {
                            // 0x4ab8ba
                            *(int64_t *)(v16 + 112) = v18 - *v44;
                            int32_t v47 = function_4afe70(&v18, v30, &v21, 48); // 0x4ab8de
                            if (v47 == 0) {
                                int64_t v48 = v21 + v18; // 0x4abaaf
                                int64_t v49 = function_4acba0(&v18, v48, v16 + 280); // 0x4abac3
                                v32 = v49;
                                if ((int32_t)v49 != 0) {
                                    goto lab_0x4ab769_13;
                                } else {
                                    int64_t v50 = function_4acba0(&v18, v48, v16 + 304); // 0x4abadf
                                    v32 = v50;
                                    if ((int32_t)v50 != 0) {
                                        goto lab_0x4ab769_13;
                                    } else {
                                        // 0x4abaec
                                        v32 = 0xffffdb9a;
                                        v38 = v48;
                                        if (v48 == v18) {
                                            goto lab_0x4ab8f6;
                                        } else {
                                            goto lab_0x4ab769_13;
                                        }
                                    }
                                }
                            } else {
                                uint32_t v51 = v47 - (int32_t)&g62; // 0x4ab8e6
                                v32 = v51;
                                if (v51 != 0) {
                                    goto lab_0x4ab769_13;
                                } else {
                                    // 0x4ab8f1
                                    v38 = v18;
                                    goto lab_0x4ab8f6;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x4ab8f6:;
    int64_t * v52 = (int64_t *)(v16 + 144); // 0x4ab900
    *v52 = v38;
    int64_t v53 = function_4afe70(&v18, v30, &v19, 48); // 0x4ab90f
    v20 = v53;
    if ((int32_t)v53 != 0) {
        goto lab_0x4ab7b0;
    } else {
        int64_t v54 = v19; // 0x4ab91f
        if (v54 == 0) {
            goto lab_0x4ab94a;
        } else {
            int64_t v55 = function_4ac9e0(&v18, v18 + v54, v16 + 216); // 0x4ab93d
            v32 = v55;
            if ((int32_t)v55 != 0) {
                goto lab_0x4ab769_13;
            } else {
                goto lab_0x4ab94a;
            }
        }
    }
  lab_0x4ab94a:
    // 0x4ab94a
    *(int64_t *)(v16 + 136) = v18 - *v52;
    int64_t v56 = function_4c6100(&v18, v30, v16 + 328); // 0x4ab96c
    v32 = v56;
    int64_t v57; // 0x4ab520
    if ((int32_t)v56 != 0) {
        goto lab_0x4ab769_13;
    } else {
        // 0x4ab979
        if ((*v39 || 1) == 3) {
            int64_t v58 = function_20d1e(&v18, v30, v16 + 344, 1); // 0x4abb39
            v32 = v58;
            if ((int32_t)v58 != 0) {
                goto lab_0x4ab769_13;
            } else {
                // 0x4abb46
                if ((*v39 || 1) == 3) {
                    int64_t v59 = function_20d1e(&v18, v30, v16 + 368, 2); // 0x4abb69
                    v32 = v59;
                    if ((int32_t)v59 != 0) {
                        goto lab_0x4ab769_13;
                    } else {
                        // 0x4abb76
                        if (*v39 != 3) {
                            goto lab_0x4ab988;
                        } else {
                            int64_t v60 = function_4ad200(&v18, v30, v16 + 392, 3); // 0x4abb94
                            int32_t v61 = v60; // 0x4abb99
                            if (v61 != 0) {
                                // 0x4abd00
                                v32 = v60;
                                if (v61 != -98) {
                                    goto lab_0x4ab769_13;
                                } else {
                                    goto lab_0x4ab988;
                                }
                            } else {
                                // 0x4abbb3
                                v62 = v18;
                                if (v30 > v18) {
                                    int32_t * v63 = (int32_t *)(v16 + 448);
                                    v64 = v16 + 456;
                                    int64_t v65 = v16 + 452;
                                    int32_t * v66 = (int32_t *)v65;
                                    v67 = (int32_t *)v64;
                                    int32_t * v68 = (int32_t *)(v16 + 460);
                                    int64_t v69 = v16 + 464;
                                    int64_t * v70 = (int64_t *)(v16 + 480);
                                    int64_t v71; // 0x4ab520
                                    while (true) {
                                      lab_0x4abbbc_2:;
                                        int32_t v72; // 0x4abd16
                                        while (true) {
                                          lab_0x4abbbc:;
                                            int32_t v73 = 0; // bp-120, 0x4abbce
                                            int64_t v74 = 0; // bp-112, 0x4abbd9
                                            int32_t v75 = 0; // bp-264, 0x4abbf1
                                            int32_t v76 = 0; // bp-260, 0x4abbf9
                                            int64_t v77; // bp-240, 0x4ab520
                                            int64_t v78 = function_4afe70(&v18, v30, &v77, 48); // 0x4abc01
                                            v71 = v78;
                                            if ((int32_t)v78 != 0) {
                                                // break (via goto) -> 0x4abf0f
                                                goto lab_0x4abf0f_4;
                                            }
                                            int64_t v79 = v18; // 0x4abc0e
                                            v73 = (int32_t)*(char *)v79;
                                            int64_t v80 = function_4afe70(&v18, v30, &v74, 6); // 0x4abc37
                                            v71 = v80;
                                            if ((int32_t)v80 != 0) {
                                                // break (via goto) -> 0x4abf0f
                                                goto lab_0x4abf0f_4;
                                            }
                                            int64_t v81 = v74 + v18; // 0x4abc54
                                            v18 = v81;
                                            v32 = 0xffffdaa0;
                                            if (v30 - v81 < 1) {
                                                goto lab_0x4ab769_13;
                                            }
                                            // 0x4abc6d
                                            v82 = v77 + v79;
                                            int64_t v83 = function_4afeb0(&v18, v82, &v75); // 0x4abc7a
                                            int32_t v84 = v83; // 0x4abc7f
                                            v71 = v83;
                                            if (v84 != 0 == (v84 != -98)) {
                                                // break (via goto) -> 0x4abf0f
                                                goto lab_0x4abf0f_4;
                                            }
                                            int64_t v85 = function_4afe70(&v18, v82, &v77, 4); // 0x4abc9e
                                            v71 = v85;
                                            if ((int32_t)v85 != 0) {
                                                // break (via goto) -> 0x4abf0f
                                                goto lab_0x4abf0f_4;
                                            }
                                            // 0x4abcab
                                            v32 = 0xffffda9a;
                                            if (v82 != v77 + v18) {
                                                goto lab_0x4ab769_13;
                                            }
                                            // 0x4abcba
                                            if ((int32_t)function_4c3140(&v73, &v76) == 0) {
                                                int32_t v86 = *v63; // 0x4abd10
                                                v72 = v76;
                                                v32 = 0xffffdb00;
                                                if ((v72 & v86) != 0) {
                                                    goto lab_0x4ab769_13;
                                                }
                                                // 0x4abd22
                                                *v63 = v72 | v86;
                                                if (v72 != 256) {
                                                    // break -> 0x4abd35
                                                    break;
                                                }
                                                // 0x4abdd1
                                                *v66 = 0;
                                                *v67 = 0;
                                                int64_t v87 = function_4afe70(&v18, v82, &v21, 48); // 0x4abe0a
                                                v88 = v87;
                                                if ((int32_t)v87 != 0) {
                                                    goto lab_0x4abe37_3;
                                                }
                                                // 0x4abe13
                                                if (v82 == v18) {
                                                    goto lab_0x4abce3;
                                                } else {
                                                    int64_t v89 = function_4afeb0(&v18, v82, v66); // 0x4abe29
                                                    v88 = v89;
                                                    switch ((int32_t)v89) {
                                                        case 0: {
                                                            goto lab_0x4abe6c;
                                                        }
                                                        case -98: {
                                                            int64_t v90 = function_4aff10(&v18, v82, v65); // 0x4abe50
                                                            v88 = v90;
                                                            if ((int32_t)v90 != 0) {
                                                                goto lab_0x4abe37_3;
                                                            }
                                                            // 0x4abe59
                                                            if (*v66 != 0) {
                                                                // 0x4abe62
                                                                *v66 = 1;
                                                            }
                                                            goto lab_0x4abe6c;
                                                        }
                                                        default: {
                                                            goto lab_0x4abe37_3;
                                                        }
                                                    }
                                                }
                                            } else {
                                                // 0x4abcd0
                                                v18 = v82;
                                                v32 = 0xffffda9e;
                                                if (v75 != 0) {
                                                    goto lab_0x4ab769_13;
                                                }
                                                goto lab_0x4abce3;
                                            }
                                        }
                                        int64_t v91; // bp-88, 0x4ab520
                                        if (v72 > 256) {
                                            if (v72 == 2048) {
                                                int32_t v92 = function_4b00e0(&v18, v82, v69, 6);
                                                v93 = v92;
                                                if (v92 != 0) {
                                                    goto lab_0x4abee3;
                                                } else {
                                                    // 0x4abecb
                                                    v32 = 0xffffda9c;
                                                    if (*v70 == 0) {
                                                        goto lab_0x4ab769_13;
                                                    }
                                                    goto lab_0x4abdc7;
                                                }
                                            } else {
                                                // 0x4abd63
                                                v32 = 0xffffdf80;
                                                if (v72 != 0x10000) {
                                                    goto lab_0x4ab769_13;
                                                }
                                                // 0x4abd6a
                                                v91 = 0;
                                                int32_t v94 = function_4affe0(&v18, v82, &v91);
                                                v93 = v94;
                                                if (v94 == 0) {
                                                    // 0x4abda7
                                                    v32 = 0xffffda9c;
                                                    if (v91 == 1) {
                                                        // 0x4abdb6
                                                        abort();
                                                        // UNREACHABLE
                                                    }
                                                    goto lab_0x4ab769_13;
                                                }
                                                goto lab_0x4abee3;
                                            }
                                        } else {
                                            // 0x4abd37
                                            v32 = 0xffffdf80;
                                            switch (v72) {
                                                case 4: {
                                                    // 0x4abfc0
                                                    v91 = 0;
                                                    int32_t v95 = function_4affe0(&v18, v82, &v91);
                                                    v93 = v95;
                                                    if (v95 != 0) {
                                                        goto lab_0x4abee3;
                                                    } else {
                                                        // 0x4ac004
                                                        v32 = 0xffffda9c;
                                                        if (v91 == 0) {
                                                            goto lab_0x4ab769_13;
                                                        }
                                                        // 0x4ac015
                                                        *v68 = 0;
                                                        int32_t v96 = 0; // 0x4ac027
                                                        int64_t v97 = 0;
                                                        unsigned char v98 = *(char *)v97; // 0x4ac029
                                                        int64_t v99 = v97 + 1; // 0x4ac034
                                                        v96 |= (int32_t)v98 << (8 * (int32_t)v97 & 24);
                                                        *v68 = v96;
                                                        while (v91 != v99 == (v99 != 4)) {
                                                            // 0x4ac029
                                                            v97 = v99;
                                                            v98 = *(char *)v97;
                                                            v99 = v97 + 1;
                                                            v96 |= (int32_t)v98 << (8 * (int32_t)v97 & 24);
                                                            *v68 = v96;
                                                        }
                                                        goto lab_0x4abdc7;
                                                    }
                                                }
                                                case 32: {
                                                    // 0x4abf21
                                                    int64_t v100; // bp-232, 0x4ab520
                                                    int64_t v101 = function_4afe70(&v18, v82, &v100, 48); // 0x4abf3a
                                                    v88 = v101;
                                                    if ((int32_t)v101 == 0) {
                                                        // 0x4abf47
                                                        v32 = 0xffffda9a;
                                                        if (v82 != v100 + v18) {
                                                            goto lab_0x4ab769_13;
                                                        }
                                                        // 0x4abf5d
                                                        result = v18;
                                                        if (v82 <= v18) {
                                                            // 0x4ab79c
                                                            return result;
                                                        }
                                                        v32 = 0xffffdaa0;
                                                        if (v82 - v18 < 1) {
                                                            goto lab_0x4ab769_13;
                                                        }
                                                        char v102 = *(char *)v18; // 0x4abf71
                                                        v18++;
                                                        int64_t v103 = function_4afd30(&v18, v82, &v21, v102); // 0x4abf8d
                                                        v88 = v103;
                                                        while ((int32_t)v103 == 0) {
                                                            // 0x4abf9e
                                                            if (v102 >= 0) {
                                                                goto lab_0x4ab769_13;
                                                            }
                                                            if (v102 == -126) {
                                                                // 0x4ac051
                                                                v57 = v16 + 416;
                                                                if (*(int64_t *)(v16 + 432) == 0) {
                                                                    goto lab_0x4ac07e;
                                                                } else {
                                                                    int64_t * v104 = (int64_t *)(v16 + 440); // 0x4ac058
                                                                    v32 = 0xffffdb00;
                                                                    if (*v104 != 0) {
                                                                        goto lab_0x4ab769_13;
                                                                    } else {
                                                                        int64_t * mem3 = calloc(1, 32); // 0x4ac06d
                                                                        int64_t v105 = (int64_t)mem3; // 0x4ac06d
                                                                        *v104 = v105;
                                                                        result = v105;
                                                                        v57 = v105;
                                                                        if (mem3 == NULL) {
                                                                            goto lab_0x4ab79c;
                                                                        } else {
                                                                            goto lab_0x4ac07e;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            int64_t v106 = v18 + v21; // 0x4abfb4
                                                            v18 = v106;
                                                            result = v106;
                                                            if (v82 <= v106) {
                                                                // 0x4ab79c
                                                                return result;
                                                            }
                                                            v32 = 0xffffdaa0;
                                                            if (v82 - v106 < 1) {
                                                                goto lab_0x4ab769_13;
                                                            }
                                                            // 0x4abf71
                                                            v102 = *(char *)v106;
                                                            v18 = v106 + 1;
                                                            v103 = function_4afd30(&v18, v82, &v21, v102);
                                                            v88 = v103;
                                                        }
                                                    }
                                                  lab_0x4abe37_3:;
                                                    int64_t v107 = v88 - (int64_t)(int32_t)&g65; // 0x4abe37
                                                    if ((int32_t)v107 != 0) {
                                                        // 0x4ab769
                                                        v32 = v107 & 0xffffffff;
                                                        goto lab_0x4ab769_13;
                                                    }
                                                    goto lab_0x4abdc7;
                                                }
                                                default: {
                                                    goto lab_0x4ab769_13;
                                                }
                                            }
                                        }
                                    }
                                  lab_0x4abf0f_4:;
                                    int64_t v108 = v71 - (int64_t)(int32_t)&g65; // 0x4abf0f
                                    v32 = v108 & 0xffffffff;
                                    if ((int32_t)v108 == 0) {
                                        goto lab_0x4ab988;
                                    } else {
                                        goto lab_0x4ab769_13;
                                    }
                                } else {
                                    goto lab_0x4abcef_2;
                                }
                            }
                        }
                    }
                } else {
                    goto lab_0x4ab988;
                }
            }
        } else {
            goto lab_0x4ab988;
        }
    }
  lab_0x4ab988:
    // 0x4ab988
    if (v30 != v18) {
        goto lab_0x4aba36;
    } else {
        int64_t v109 = function_4ac610(&v18, v22, (int64_t)&v8, &v9); // 0x4ab9a8
        v32 = v109;
        if ((int32_t)v109 != 0) {
            goto lab_0x4ab769_13;
        } else {
            int64_t n = *(int64_t *)(v16 + 88); // 0x4ab9b5
            if (n != 0) {
                goto lab_0x4abb13;
            } else {
                int64_t str = *(int64_t *)(v16 + 96); // 0x4ab9c7
                if (memcmp((int64_t *)str, NULL, (int32_t)n) != 0) {
                    goto lab_0x4abb13;
                } else {
                    int64_t result3 = function_4ad070(&v18, v22, v16 + 504); // 0x4aba1e
                    v32 = result3;
                    if ((int32_t)result3 != 0) {
                        goto lab_0x4ab769_13;
                    } else {
                        // 0x4aba2b
                        if (v22 == v18) {
                            // 0x4ab79c
                            return result3;
                        }
                        goto lab_0x4aba36;
                    }
                }
            }
        }
    }
  lab_0x4abb13:
    // 0x4abb13
    function_4ab380(v16);
    v3 = 0xffffd980;
    v7 = v6;
    v5 = v16;
    goto lab_0x4ab777;
  lab_0x4ac07e:
    // 0x4ac07e
    *(int32_t *)v57 = 130;
    *(int64_t *)(v57 + 8) = v21;
    *(int64_t *)(v57 + 16) = v18;
    return v21 + v18;
}

// Address range: 0x4d4f10 - 0x4d5a23
int64_t function_4d4f10(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, uint32_t a5, int64_t * a6, uint64_t a7) {
    int64_t v1 = a3;
    int64_t v2 = (int64_t)a6; // bp-1624, 0x4d4f40
    __readfsqword(40);
    uint32_t v3 = a5 % 256;
    int128_t v4; // bp-1224, 0x4d4f10
    int128_t v5; // 0x4d4f10
    if (1024 * function_4d92b0() < a2) {
        uint64_t v6 = llvm_ctlz_i64((a2 - 1) / 1024 | 1, true) ^ 63; // 0x4d514a
        uint64_t v7 = v6 == 0 ? (int64_t)&g90 : (int64_t)&g90 << v6;
        int64_t v8 = function_4d92b0(); // 0x4d5172
        int64_t v9 = v7 <= (int64_t)&g90 | v8 != 1 ? 0x2000000000 * v8 >> 32 : 64;
        uint64_t v10 = a7 % 256; // 0x4d51a3
        int128_t v11; // bp-1096, 0x4d4f10
        int64_t v12 = (int64_t)&v11; // 0x4d51ad
        int64_t v13 = function_4d4f10(a1, v7, a3, a4, v3, (int64_t *)&v11, v10); // 0x4d51c5
        int64_t v14 = v9 + v12; // 0x4d51ec
        int64_t v15 = v14; // 0x4d51ec
        int64_t v16 = function_4d4f10(v7 + a1, 0x100000000000000 * (a2 - v7) / 0x100000000000000, a3, 0x100000000000000 * (v7 / 1024 + a4) / 0x100000000000000, v3, (int64_t *)v14, v10); // 0x4d51f0
        if (v13 == 1) {
            int128_t v17 = __asm_movdqa(0x8000000000000000 * v11 >> 64); // 0x4d59e2
            int128_t v18 = __asm_movdqa(v5); // 0x4d59ef
            int128_t v19 = __asm_movdqa(v5); // 0x4d59f8
            __asm_movups(*(int128_t *)&v15, v17);
            int128_t v20 = __asm_movdqa(v5); // 0x4d5a04
            __asm_movups(*(int128_t *)(v2 + 16), v18);
            __asm_movups(*(int128_t *)(v2 + 32), v19);
            __asm_movups(*(int128_t *)(v2 + 48), v20);
            // 0x4d5104
            __readfsqword(40);
            return 2;
        }
        uint64_t v21 = v16 + v13; // 0x4d5201
        int64_t v22 = 0; // 0x4d5208
        int64_t v23 = 0; // 0x4d5208
        if (v21 >= 2) {
            // 0x4d520e
            v4 = v12;
            v22 = v21 & -2;
            v23 = (v21 - 2) / 2 + 1;
        }
        // 0x4d53f2
        function_4d91a0(&v4, v23, 1, a3, 0, 0, (int64_t)(a5 & 251 | 4), 0, 0, v2);
        int64_t v24 = 0x100000000000000 * v23;
        int64_t v25 = v24 >> 56; // 0x4d542a
        int64_t result = v25; // 0x4d542f
        if (v21 > v22) {
            int64_t v26 = v2 + (v24 >> 51); // 0x4d5447
            int64_t v27 = (v24 >> 50) + v12; // 0x4d544b
            int128_t v28 = __asm_movdqa(*(int128_t *)v27); // 0x4d544e
            int128_t v29 = __asm_movdqa(*(int128_t *)(v27 + 16)); // 0x4d5453
            __asm_movups(*(int128_t *)v26, v28);
            __asm_movups(*(int128_t *)(v26 + 16), v29);
            result = v25 + 1;
        }
        // 0x4d5104
        __readfsqword(40);
        return result;
    }
    int64_t v30 = (int64_t)&v2; // 0x4d4f2d
    int64_t v31 = 0; // 0x4d4f7a
    int64_t result2 = 0; // 0x4d4f7a
    int64_t v32 = a2; // 0x4d4f7a
    int64_t v33; // 0x4d4f10
    int64_t v34; // 0x4d4f10
    int128_t v35; // 0x4d4f10
    int128_t v36; // 0x4d4f10
    if (a2 > (int64_t)&g89) {
        uint64_t v37 = a2 - 1024; // 0x4d4f80
        uint64_t v38 = v37 / 1024; // 0x4d4f8a
        result2 = v38 + 1;
        if (v37 > (int64_t)&g89) {
            int128_t v39 = __asm_movdqa(g113); // 0x4d4f9f
            int128_t v40 = __asm_movq(a1); // 0x4d4fa7
            int128_t v41 = __asm_punpcklqdq(v40, v40); // 0x4d4faf
            v1 = result2 / 2;
            v4 = __asm_movaps(__asm_paddq(v39, v41));
            int128_t v42 = v41; // 0x4d4fc6
            if (v38 >= 3) {
                // 0x4d4fcc
                __asm_movaps(__asm_paddq(__asm_movdqa(*(int128_t *)0x59b1b0), v41));
                v42 = v41;
                if (v38 >= 5) {
                    // 0x4d4fea
                    __asm_movaps(__asm_paddq(__asm_movdqa(*(int128_t *)0x59b1c0), v41));
                    v42 = v41;
                    if (v38 >= 7) {
                        // 0x4d5004
                        __asm_movaps(__asm_paddq(__asm_movdqa(*(int128_t *)0x59b1d0), v41));
                        v42 = v41;
                        if (v38 >= 9) {
                            // 0x4d501e
                            __asm_movaps(__asm_paddq(__asm_movdqa(*(int128_t *)0x59b1e0), v41));
                            v42 = v41;
                            if (v38 >= 11) {
                                // 0x4d5038
                                __asm_movaps(__asm_paddq(__asm_movdqa(*(int128_t *)0x59b1f0), v41));
                                v42 = v41;
                                if (v38 >= 13) {
                                    // 0x4d5052
                                    __asm_movaps(__asm_paddq(__asm_movdqa(*(int128_t *)&g114), v41));
                                    v42 = v41;
                                    if (v38 >= 15) {
                                        int128_t v43 = __asm_paddq(v41, *(int128_t *)&g115); // 0x4d506c
                                        __asm_movaps(v43);
                                        v42 = v43;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            int64_t v44 = result2 & 0x7ffffffffffffe; // 0x4d507f
            int64_t v45 = 1024 * v44; // 0x4d5086
            v1 = v45;
            v33 = v45;
            v35 = v42;
            v34 = v44;
            v36 = v42;
            if (v44 == result2) {
                goto lab_0x4d509a;
            } else {
                goto lab_0x4d508f;
            }
        } else {
            // 0x4d59d9
            v1 = 0;
            v33 = 0;
            v34 = 0;
            goto lab_0x4d508f;
        }
    } else {
        goto lab_0x4d50b6;
    }
  lab_0x4d50b6:
    // 0x4d50b6
    v1 = 16;
    function_4d91a0(&v4, result2, 16, a3, a4, 1, (int64_t)v3, 1, 2, v2);
    if (v31 >= a2) {
        // 0x4d5104
        __readfsqword(40);
        return result2;
    }
    // 0x4d5490
    int128_t v46; // 0x4d4f10
    int128_t v47 = v46;
    int128_t v48 = __asm_movdqu(*(int128_t *)&v1); // 0x4d5490
    int128_t v49 = __asm_pxor(v47, v47); // 0x4d5495
    int128_t v50 = __asm_movdqu(*(int128_t *)(a3 + 16)); // 0x4d54a7
    int128_t v51 = __asm_movaps(v48); // bp-1560, 0x4d54bf
    int64_t v52 = __asm_movaps(v50); // 0x4d54c7
    __asm_movups(v5, v49);
    __asm_movups(v5, v49);
    __asm_movups(v5, v49);
    __asm_movups(v5, v49);
    if (v32 < 65) {
        // 0x4d5a23
        return result2;
    }
    int64_t v53 = v31 + a1; // 0x4d54c4
    uint64_t v54 = v32 - 65; // 0x4d54f0
    v1 = 0;
    int64_t v55 = v54 & -64; // 0x4d5503
    int64_t v56 = v53;
    function_4d8f60(&v51, v56, 64);
    int64_t v57 = v56 + 64; // 0x4d5564
    while (v55 + v53 != v56) {
        // 0x4d5532
        v56 = v57;
        function_4d8f60(&v51, v56, 64);
        v57 = v56 + 64;
    }
    uint64_t v58 = v32 - 64 - v55; // 0x4d5584
    int64_t v59 = v30 + 104; // 0x4d558e
    int64_t v60 = v53 + 64 + 0x100000000000000 * v54 / 64 / 0x4000000000000; // 0x4d5597
    int64_t v61 = v58 < 64 ? v58 : 64; // 0x4d559d
    v1 = v61;
    uint32_t v62 = (int32_t)v61; // 0x4d55a1
    if (v62 >= 8) {
        // 0x4d5980
        *(int64_t *)v59 = *(int64_t *)v60;
        int64_t v63 = v1 & 0xffffffff; // 0x4d598e
        *(int64_t *)(v30 + 96 + v63) = *(int64_t *)(v60 - 8 + v63);
        uint32_t v64 = (int32_t)v1 - 8; // 0x4d59a5
        if (v64 >= 8) {
            int64_t v65 = 0; // 0x4d4f10
            int64_t v66 = v65 + 8;
            *(int64_t *)(v30 + 112 + v65) = *(int64_t *)(v66 + v60);
            v65 = v66 & 0xffffffff;
            while ((v64 & -8) > (int32_t)v66) {
                // 0x4d59b3
                v66 = v65 + 8;
                *(int64_t *)(v30 + 112 + v65) = *(int64_t *)(v66 + v60);
                v65 = v66 & 0xffffffff;
            }
        }
    } else {
        if ((v61 & 4) != 0) {
            // 0x4d5a23
            return result2;
        }
        if (v62 != 0) {
            // 0x4d55b7
            *(char *)v59 = *(char *)v60;
            if ((v1 & 2) != 0) {
                int64_t v67 = v1 & 0xffffffff; // 0x4d55c2
                *(int16_t *)(v30 + 102 + v67) = *(int16_t *)(v60 - 2 + v67);
            }
        }
    }
    int128_t v68 = __asm_movdqu(v5); // 0x4d55d0
    int128_t v69 = __asm_movdqu(v5); // 0x4d55d6
    int128_t v70 = __asm_movdqa(v51); // 0x4d5616
    int128_t v71 = __asm_movdqa((int128_t)v52); // 0x4d561c
    __asm_movups(v5, v68);
    int128_t v72 = __asm_movdqu(v5); // 0x4d5630
    __asm_movups(v5, v69);
    int128_t v73 = __asm_movdqu(v5); // 0x4d5644
    int128_t v74 = __asm_movdqa(v5); // 0x4d564d
    int128_t v75 = __asm_movdqa((int128_t)(result2 + a4)); // 0x4d565e
    __asm_movups(v5, v73);
    __asm_movups(v5, v72);
    int128_t v76 = __asm_movdqa(v5); // 0x4d5677
    int128_t v77 = __asm_movdqa(v5); // 0x4d5680
    int128_t v78 = __asm_movdqa(v5); // 0x4d5694
    __asm_movaps(v75);
    int32_t v79 = __asm_movaps(v70); // bp-1336, 0x4d56b3
    uint64_t v80 = __asm_movaps(v71); // 0x4d56bb
    __asm_movaps(v70);
    __asm_movaps(v71);
    __asm_movaps(v74);
    __asm_movaps(v76);
    __asm_movaps(v77);
    __asm_movaps(v78);
    int64_t v81 = v2 + 32 * result2; // 0x4d56f3
    int64_t v82; // bp-1408, 0x4d4f10
    function_4d8f60((int128_t *)&v79, (int64_t)&v82, v1 % 256);
    uint32_t v83 = v79; // 0x4d5704
    int32_t v84; // 0x4d4f10
    int64_t v85 = 256 * (256 * (256 * (256 * (int64_t)v84 | (int64_t)(v83 / 0x1000000)) | (int64_t)(v83 / 0x10000 % 256)) | (int64_t)(v83 / 256 % 256)) | (int64_t)(v83 % 256); // 0x4d5810
    v2 = v85;
    __asm_movups(*(int128_t *)v81, __asm_movdqa((int128_t)v85));
    int64_t v86 = v80 & 0xff000000 | 0x100000000 * (int64_t)v84 | v80 & 0xff0000 | v80 & 0xff00 | v80 % 256; // 0x4d592f
    v2 = v86;
    __asm_movups(*(int128_t *)(v81 + 16), __asm_movdqa((int128_t)v86));
    // 0x4d5104
    __readfsqword(40);
    return (0x100000000000000 * result2 >> 56) + 1;
  lab_0x4d509a:
    // 0x4d509a
    v31 = 0x100000000000000 * (int64_t)(int32_t)(char)&g90 / 0x100000000000000;
    v46 = v36;
    v32 = a2 & (int64_t)(int32_t)&g89;
    goto lab_0x4d50b6;
  lab_0x4d508f:
    // 0x4d508f
    *(int64_t *)(v30 + 400 + 8 * v34) = v33 + a1;
    v36 = v35;
    goto lab_0x4d509a;
}

// Address range: 0x4d7f50 - 0x4d8c59
int64_t blake3_hasher_finalize_seek(int64_t a1, uint64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a1;
    int64_t v2 = __readfsqword(40); // 0x4d7f6f
    if (a4 == 0) {
        // 0x4d857e
        return v2 - __readfsqword(40);
    }
    unsigned char v3 = *(char *)(a1 + 144); // 0x4d7f8e
    uint64_t v4 = a2 % 64; // 0x4d7f98
    int64_t v5 = a2 / 64; // 0x4d7f9b
    int64_t v6 = (int64_t)*(char *)(a1 + 138); // 0x4d7fa4
    v1 = v6;
    unsigned char v7 = *(char *)(a1 + 137); // 0x4d7fb0
    unsigned char v8 = *(char *)(a1 + 136); // 0x4d7fb8
    int128_t v9; // bp-136, 0x4d7f50
    int128_t v10; // bp-248, 0x4d7f50
    int128_t v11; // bp-320, 0x4d7f50
    int128_t v12; // bp-360, 0x4d7f50
    int16_t v13; // 0x4d7f50
    int128_t v14; // 0x4d7f50
    int32_t v15; // 0x4d7f50
    if (v3 == 0) {
        int128_t v16 = __asm_movdqu(*(int128_t *)(a1 + 48)); // 0x4d85b3
        int128_t v17 = __asm_movdqu(*(int128_t *)(a1 + 72)); // 0x4d85bc
        int128_t v18 = __asm_movdqu(*(int128_t *)(a1 + 32)); // 0x4d85c5
        int128_t v19 = __asm_movdqu(*(int128_t *)(a1 + 88)); // 0x4d85d2
        __asm_movups(v14, v17);
        int128_t v20 = __asm_movdqu(*(int128_t *)(a1 + 104)); // 0x4d85e4
        __asm_movaps(v16);
        __asm_movaps(v16);
        int128_t v21 = __asm_movdqa((int128_t)*(int64_t *)(a1 + 64)); // 0x4d8603
        __asm_movups(v14, v19);
        int128_t v22 = __asm_movdqu(*(int128_t *)(a1 + 120)); // 0x4d8614
        __asm_movups(v14, v20);
        v10 = __asm_movaps(v18);
        v12 = __asm_movaps(v18);
        int128_t v23 = __asm_movdqa(v14); // 0x4d8631
        __asm_movaps(v21);
        int128_t v24 = __asm_movdqa(v14); // 0x4d8642
        __asm_movups(v14, v22);
        __asm_movaps(v23);
        int128_t v25 = __asm_movdqa(v14); // 0x4d8663
        __asm_movaps(v24);
        int128_t v26 = __asm_movdqa(v14); // 0x4d8674
        __asm_movaps(v25);
        __asm_movaps(v26);
        int64_t v27 = v5; // 0x4d8690
        int64_t v28 = a4; // 0x4d8690
        int64_t v29 = a3; // 0x4d8690
        if (v4 != 0) {
            // 0x4d8828
            function_4d8ff0(&v12, &v11, (int16_t)v8, v5, v6 | (int64_t)(v7 == 0) | 10, (int64_t *)&v9);
            uint64_t v30 = 64 - v4; // 0x4d8867
            int64_t result = v30 > a4 ? a4 : v30; // 0x4d886d
            int64_t v31 = v4 + (int64_t)&v9; // 0x4d8871
            v1 = v31;
            if ((int32_t)result >= 8) {
                // 0x4d8b85
                *(int64_t *)a3 = *(int64_t *)v31;
                int64_t v32 = a3 + 8 & -8; // 0x4d8b9b
                *(int64_t *)(a3 - 8 + result) = *(int64_t *)(result - 8 + v1);
                int64_t v33 = a3 - v32; // 0x4d8ba4
                uint32_t v34 = (int32_t)(v33 + result); // 0x4d8bb2
                if (v34 >= 8) {
                    int64_t v35 = 0;
                    int64_t v36 = v35 + 8; // 0x4d8bc2
                    *(int64_t *)(v35 + v32) = *(int64_t *)(v31 - v33 + v35);
                    while ((v34 & -8) > (int32_t)v36) {
                        // 0x4d8bc0
                        v35 = v36 & 0xffffffff;
                        v36 = v35 + 8;
                        *(int64_t *)(v35 + v32) = *(int64_t *)(v31 - v33 + v35);
                    }
                }
            } else {
                if ((result & 4) != 0) {
                    // 0x4d8c67
                    return result;
                }
                // 0x4d888c
                *(char *)a3 = *(char *)v31;
                if ((result & 2) != 0) {
                    // 0x4d8c67
                    return result;
                }
            }
            // 0x4d889e
            v27 = v5 + 1;
            v28 = a4 - result;
            v29 = result + a3;
        }
        uint64_t v37 = v28 / 64; // 0x4d869e
        if (v28 >= 64) {
            // 0x4d87e0
            function_4d9090(&v12, &v11, v13 % 256, v27, (int64_t)(v15 & 247 | 8), v29, v37);
        }
        uint32_t v38 = (int32_t)v28 % 64; // 0x4d86b1
        if (v38 == 0) {
            // 0x4d857e
            return v2 - __readfsqword(40);
        }
        int64_t v39 = v38; // 0x4d86b1
        int64_t v40 = (int64_t)&v9; // 0x4d86c8
        function_4d8ff0(&v12, &v11, v13 % 256, v37 + v27, (int64_t)(v15 & 247 | 8), (int64_t *)&v9);
        int64_t result2 = (v28 & -64) + v29; // 0x4d8704
        if (v38 < 8) {
            // 0x4d8712
            if ((v39 & 4) != 0) {
                // 0x4d8c50
                *(int32_t *)result2 = (int32_t)v9;
                return result2;
            }
            // 0x4d8723
            *(char *)result2 = (char)v9;
            if ((v39 & 2) != 0) {
                // 0x4d8736
                *(int16_t *)(result2 + v39 - 2) = *(int16_t *)(v39 + v40 - 2);
            }
            // 0x4d857e
            return v2 - __readfsqword(40);
        }
        int64_t v41 = result2 + 8 & -8; // 0x4d8be2
        *(int64_t *)result2 = (int64_t)v9;
        *(int64_t *)(result2 + v39 - 8) = *(int64_t *)(v39 + v40 - 8);
        int64_t v42 = result2 - v41; // 0x4d8bf3
        uint32_t v43 = v38 + (int32_t)v42; // 0x4d8bfe
        if (v43 < 8) {
            // 0x4d857e
            return v2 - __readfsqword(40);
        }
        int64_t v44 = 0;
        int64_t v45 = v44 + 8; // 0x4d8c0e
        *(int64_t *)(v44 + v41) = *(int64_t *)(v40 - v42 + v44);
        while ((v43 & -8) > (int32_t)v45) {
            // 0x4d8c0c
            v44 = v45 & 0xffffffff;
            v45 = v44 + 8;
            *(int64_t *)(v44 + v41) = *(int64_t *)(v40 - v42 + v44);
        }
        // 0x4d857e
        return v2 - __readfsqword(40);
    }
    int64_t v46 = v3; // 0x4d7f8e
    int128_t * v47; // 0x4d7f50
    int64_t v48; // 0x4d7f50
    int64_t v49; // 0x4d7f50
    int128_t v50; // bp-472, 0x4d7f50
    if (64 * (int64_t)v7 == -(int64_t)v8) {
        int128_t v51 = __asm_movdqu(*(int128_t *)&v1); // 0x4d89ae
        int128_t * v52 = (int128_t *)(a1 + 16);
        int128_t v53 = __asm_movdqu(*v52); // 0x4d89b3
        int64_t v54 = 0x100000000 * v46 - 0x200000000;
        v12 = __asm_movaps(v51);
        int64_t v55 = (v54 >> 27) + a1; // 0x4d89d9
        __asm_movaps(v53);
        int128_t v56 = __asm_movdqu(*(int128_t *)(v55 + 145)); // 0x4d89e4
        int128_t v57 = __asm_movdqu(*(int128_t *)(v55 + 177)); // 0x4d89ec
        int128_t v58 = __asm_movdqu(*(int128_t *)(v55 + 193)); // 0x4d8a00
        v10 = __asm_movaps(v51);
        __asm_movups(v11, v56);
        int128_t v59 = __asm_movdqu(*(int128_t *)(v55 + 161)); // 0x4d8a18
        __asm_movups(v14, v57);
        __asm_movups(v14, v58);
        int128_t v60 = __asm_movdqa(0); // 0x4d8a30
        int128_t v61 = __asm_movdqa(v14); // 0x4d8a39
        int128_t v62 = __asm_movdqa(v14); // 0x4d8a42
        __asm_movups(v14, v59);
        int128_t v63 = __asm_movdqa(v14); // 0x4d8a53
        int128_t v64 = __asm_movdqa(v14); // 0x4d8a5c
        __asm_movaps(v53);
        __asm_movaps(v60);
        __asm_movaps(v63);
        __asm_movaps(v64);
        __asm_movaps(v62);
        __asm_movaps(v61);
        v50 = __asm_movaps(v51);
        int64_t v65 = __asm_movaps(v53); // 0x4d8a9a
        __asm_movaps(v60);
        __asm_movaps(v63);
        __asm_movaps(v64);
        __asm_movaps(v62);
        __asm_movaps(v61);
        v47 = v52;
        v49 = v65;
        v48 = v54 >> 32;
        if (v54 != 0) {
            goto lab_0x4d80e8;
        } else {
            goto lab_0x4d854e;
        }
    } else {
        int128_t v66 = __asm_movdqu(*(int128_t *)(a1 + 72)); // 0x4d7fe4
        int128_t v67 = __asm_movdqu(*(int128_t *)(a1 + 88)); // 0x4d7fe9
        int128_t v68 = __asm_movdqu(*(int128_t *)(a1 + 104)); // 0x4d7fee
        int128_t v69 = __asm_movdqu(*(int128_t *)(a1 + 32)); // 0x4d8000
        __asm_movups(v11, v66);
        int128_t v70 = __asm_movdqu(*(int128_t *)(a1 + 120)); // 0x4d800f
        int128_t v71 = __asm_movdqu(*(int128_t *)(a1 + 48)); // 0x4d8014
        __asm_movups(v14, v68);
        int128_t v72 = __asm_movdqa((int128_t)*(int64_t *)(a1 + 64)); // 0x4d8024
        __asm_movups(v14, v70);
        int128_t v73 = __asm_movdqa(v14); // 0x4d8037
        __asm_movups(v14, v67);
        int128_t v74 = __asm_movdqa(v14); // 0x4d8048
        int128_t v75 = __asm_movdqa(v14); // 0x4d8051
        int128_t v76 = __asm_movdqa(v14); // 0x4d8062
        v12 = __asm_movaps(v69);
        __asm_movaps(v71);
        v10 = __asm_movaps(v69);
        __asm_movaps(v71);
        __asm_movaps(v72);
        __asm_movaps(v74);
        __asm_movaps(v75);
        __asm_movaps(v73);
        __asm_movaps(v76);
        v50 = __asm_movaps(v69);
        int64_t v77 = __asm_movaps(v71); // 0x4d80b8
        __asm_movaps(v72);
        __asm_movaps(v74);
        __asm_movaps(v75);
        __asm_movaps(v73);
        __asm_movaps(v76);
        v47 = (int128_t *)(a1 + 16);
        v49 = v77;
        v48 = v46;
        goto lab_0x4d80e8;
    }
  lab_0x4d80e8:;
    int64_t v78 = v48 - 1; // 0x4d80e8
    int128_t * v79 = (int128_t *)((int64_t)&v9 + 16);
    int64_t v80 = 0x100000000 * (int64_t)v15;
    int128_t * v81 = (int128_t *)((int64_t)&v12 + 16);
    int64_t v82 = v78; // 0x4d8131
    int64_t v83 = a1 + 145 + 32 * v78; // 0x4d8131
    int128_t v84 = __asm_movdqu(*(int128_t *)v83); // 0x4d8146
    int128_t v85 = __asm_movdqa(v50); // 0x4d814a
    v9 = __asm_movaps(v84);
    int128_t v86 = __asm_movdqu(*(int128_t *)(v83 + 16)); // 0x4d8158
    int128_t v87 = __asm_movdqa((int128_t)v49); // 0x4d815d
    v10 = __asm_movaps(v85);
    *v79 = (int128_t)__asm_movaps(v86);
    int64_t v88 = __asm_movaps(v87); // 0x4d8190
    int64_t v89; // bp-432, 0x4d7f50
    function_4d8f60(&v10, (int64_t)&v89, (int64_t)(v13 % 256));
    uint64_t v90 = (int64_t)v10; // 0x4d81c2
    int128_t v91 = v90 & 0xff000000 | v80 | v90 & 0xff0000 | v90 & 0xff00 | v90 % 256; // 0x4d82dc
    __asm_movaps(__asm_movdqa(v91));
    int128_t v92 = __asm_movdqu(*(int128_t *)&v1); // 0x4d840f
    int128_t v93 = __asm_movdqu(*v47); // 0x4d841d
    int128_t v94 = __asm_movdqa(0x8000000000000000 * v9 >> 64); // 0x4d8431
    v10 = __asm_movaps(v92);
    int128_t v95 = __asm_movdqa(v91); // 0x4d8447
    int128_t v96 = v88; // 0x4d844c
    int128_t v97 = __asm_movdqa(v96); // 0x4d844c
    int128_t v98 = __asm_movdqa(v96); // 0x4d8452
    v12 = __asm_movaps(v92);
    int128_t v99 = __asm_movdqa(v14); // 0x4d845e
    *v81 = (int128_t)__asm_movaps(v93);
    __asm_movaps(v97);
    __asm_movups(v14, v95);
    __asm_movups(v11, v94);
    __asm_movups(v14, v99);
    int128_t v100 = __asm_movdqa(v14); // 0x4d8492
    int128_t v101 = __asm_movdqa(v14); // 0x4d849b
    __asm_movups(v14, v98);
    int128_t v102 = __asm_movdqa(v14); // 0x4d84ac
    int128_t v103 = __asm_movdqa(v14); // 0x4d84bd
    int128_t v104 = __asm_movdqa(0); // 0x4d84d2
    __asm_movaps(v93);
    __asm_movaps(v104);
    __asm_movaps(v100);
    __asm_movaps(v101);
    __asm_movaps(v102);
    __asm_movaps(v103);
    v50 = __asm_movaps(v92);
    int64_t v105 = __asm_movaps(v93); // 0x4d8515
    __asm_movaps(v104);
    __asm_movaps(v100);
    __asm_movaps(v101);
    __asm_movaps(v102);
    __asm_movaps(v103);
    while (v82 != 0) {
        // 0x4d8138
        v82--;
        v83 -= 32;
        v84 = __asm_movdqu(*(int128_t *)v83);
        v85 = __asm_movdqa(v50);
        v9 = __asm_movaps(v84);
        v86 = __asm_movdqu(*(int128_t *)(v83 + 16));
        v87 = __asm_movdqa((int128_t)v105);
        v10 = __asm_movaps(v85);
        *v79 = (int128_t)__asm_movaps(v86);
        v88 = __asm_movaps(v87);
        function_4d8f60(&v10, (int64_t)&v89, (int64_t)(v13 % 256));
        v90 = (int64_t)v10;
        v91 = v90 & 0xff000000 | v80 | v90 & 0xff0000 | v90 & 0xff00 | v90 % 256;
        __asm_movaps(__asm_movdqa(v91));
        v92 = __asm_movdqu(*(int128_t *)&v1);
        v93 = __asm_movdqu(*v47);
        v94 = __asm_movdqa(0x8000000000000000 * v9 >> 64);
        v10 = __asm_movaps(v92);
        v95 = __asm_movdqa(v91);
        v96 = v88;
        v97 = __asm_movdqa(v96);
        v98 = __asm_movdqa(v96);
        v12 = __asm_movaps(v92);
        v99 = __asm_movdqa(v14);
        *v81 = (int128_t)__asm_movaps(v93);
        __asm_movaps(v97);
        __asm_movups(v14, v95);
        __asm_movups(v11, v94);
        __asm_movups(v14, v99);
        v100 = __asm_movdqa(v14);
        v101 = __asm_movdqa(v14);
        __asm_movups(v14, v98);
        v102 = __asm_movdqa(v14);
        v103 = __asm_movdqa(v14);
        v104 = __asm_movdqa(0);
        __asm_movaps(v93);
        __asm_movaps(v104);
        __asm_movaps(v100);
        __asm_movaps(v101);
        __asm_movaps(v102);
        __asm_movaps(v103);
        v50 = __asm_movaps(v92);
        v105 = __asm_movaps(v93);
        __asm_movaps(v104);
        __asm_movaps(v100);
        __asm_movaps(v101);
        __asm_movaps(v102);
        __asm_movaps(v103);
    }
    goto lab_0x4d854e;
  lab_0x4d854e:;
    int64_t v106 = v5; // 0x4d8554
    int64_t v107 = a4; // 0x4d8554
    int64_t v108 = a3; // 0x4d8554
    if (v4 != 0) {
        // 0x4d8900
        function_4d8ff0(&v50, (int128_t *)&v89, v13 % 256, v5, (int64_t)(v15 & 247 | 8), (int64_t *)&v9);
        uint64_t v109 = 64 - v4; // 0x4d894a
        int64_t v110 = v109 > a4 ? a4 : v109; // 0x4d8950
        int64_t v111 = v4 + (int64_t)&v9; // 0x4d8954
        v1 = v111;
        if ((int32_t)v110 >= 8) {
            // 0x4d8ae0
            *(int64_t *)a3 = *(int64_t *)v111;
            int64_t v112 = a3 + 8 & -8; // 0x4d8af6
            *(int64_t *)(v110 + a3 - 8) = *(int64_t *)(v110 - 8 + v1);
            int64_t v113 = a3 - v112; // 0x4d8aff
            uint32_t v114 = (int32_t)(v113 + v110); // 0x4d8b0d
            if (v114 >= 8) {
                int64_t v115 = 0;
                int64_t v116 = v115 + 8; // 0x4d8b1d
                *(int64_t *)(v115 + v112) = *(int64_t *)(v111 - v113 + v115);
                while ((v114 & -8) > (int32_t)v116) {
                    // 0x4d8b1b
                    v115 = v116 & 0xffffffff;
                    v116 = v115 + 8;
                    *(int64_t *)(v115 + v112) = *(int64_t *)(v111 - v113 + v115);
                }
            }
        } else {
            if ((v110 & 4) != 0) {
                // 0x4d8c38
                *(int32_t *)a3 = *(int32_t *)v111;
                *(int32_t *)(v110 + a3 - 4) = *(int32_t *)(v110 - 4 + v1);
            } else {
                if (v110 != 0) {
                    // 0x4d896f
                    *(char *)a3 = *(char *)v111;
                    if ((v110 & 2) != 0) {
                        // 0x4d897d
                        *(int16_t *)(v110 + a3 - 2) = *(int16_t *)(v110 - 2 + v1);
                    }
                }
            }
        }
        // 0x4d8990
        v106 = v5 + 1;
        v107 = a4 - v110;
        v108 = v110 + a3;
    }
    uint64_t v117 = v107 / 64; // 0x4d8562
    if (v107 >= 64) {
        // 0x4d88b8
        function_4d9090(&v50, (int128_t *)&v89, v13 % 256, v106, (int64_t)(v15 & 247 | 8), v108, v117);
    }
    uint32_t v118 = (int32_t)v107 % 64; // 0x4d8575
    if (v118 == 0) {
        // 0x4d857e
        return v2 - __readfsqword(40);
    }
    int64_t v119 = v118; // 0x4d8575
    int64_t v120 = (int64_t)&v9; // 0x4d875e
    function_4d8ff0(&v50, (int128_t *)&v89, v13 % 256, v117 + v106, (int64_t)(v15 & 247 | 8), (int64_t *)&v9);
    int64_t v121 = (v107 & -64) + v108; // 0x4d8797
    if (v118 < 8) {
        // 0x4d87a5
        if ((v119 & 4) != 0) {
            // 0x4d8c22
            *(int32_t *)v121 = (int32_t)v9;
            *(int32_t *)(v121 + v119 - 4) = *(int32_t *)(v119 + v120 - 4);
            // 0x4d857e
            return v2 - __readfsqword(40);
        }
        // 0x4d87b6
        *(char *)v121 = (char)v9;
        if ((v119 & 2) != 0) {
            // 0x4d87c9
            *(int16_t *)(v121 + v119 - 2) = *(int16_t *)(v119 + v120 - 2);
        }
        // 0x4d857e
        return v2 - __readfsqword(40);
    }
    int64_t v122 = v121 + 8 & -8; // 0x4d8b44
    *(int64_t *)v121 = (int64_t)v9;
    *(int64_t *)(v121 + v119 - 8) = *(int64_t *)(v119 + v120 - 8);
    int64_t v123 = v121 - v122; // 0x4d8b55
    uint32_t v124 = v118 + (int32_t)v123; // 0x4d8b60
    if (v124 < 8) {
        // 0x4d857e
        return v2 - __readfsqword(40);
    }
    int64_t v125 = 0;
    int64_t v126 = v125 + 8; // 0x4d8b70
    *(int64_t *)(v125 + v122) = *(int64_t *)(v120 - v123 + v125);
    while ((v124 & -8) > (int32_t)v126) {
        // 0x4d8b6e
        v125 = v126 & 0xffffffff;
        v126 = v125 + 8;
        *(int64_t *)(v125 + v122) = *(int64_t *)(v120 - v123 + v125);
    }
    // 0x4d857e
    return v2 - __readfsqword(40);
}

// Address range: 0x4d9eb0 - 0x4daa69
int64_t function_4d9eb0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int32_t v1 = *(int32_t *)(a2 + 12); // 0x4d9ec4
    int32_t v2 = *(int32_t *)(a2 + 16); // 0x4d9ec7
    int32_t v3 = *(int32_t *)(a2 + 20); // 0x4d9eca
    int32_t v4 = *(int32_t *)(a2 + 24); // 0x4d9ece
    int32_t v5 = *(int32_t *)(a2 + 32); // 0x4d9ed2
    int32_t v6 = *(int32_t *)(a2 + 28); // 0x4d9edb
    int32_t v7 = *(int32_t *)(a2 + 48); // 0x4d9edf
    int32_t v8 = *(int32_t *)(a2 + 36); // 0x4d9ee7
    int64_t v9; // 0x4d9eb0
    int32_t v10 = v9;
    int32_t v11 = *(int32_t *)(a2 + 40); // 0x4d9ef1
    int32_t v12 = *(int32_t *)(a2 + 4); // 0x4d9ef4
    int32_t v13 = *(int32_t *)(a2 + 44); // 0x4d9efc
    int32_t v14 = *(int32_t *)(a2 + 8); // 0x4d9f00
    int32_t v15 = *(int32_t *)(a2 + 52); // 0x4d9f09
    int32_t v16 = *(int32_t *)(a2 + 56); // 0x4d9f31
    int32_t v17 = *(int32_t *)(a2 + 60); // 0x4d9f35
    int32_t * v18 = (int32_t *)(a1 + 16); // 0x4d9f38
    int32_t v19 = *v18; // 0x4d9f38
    int32_t * v20 = (int32_t *)(a1 + 20); // 0x4d9f40
    int32_t v21 = *v20; // 0x4d9f40
    int32_t * v22 = (int32_t *)(a1 + 28); // 0x4d9f44
    int32_t v23 = *v22; // 0x4d9f44
    int32_t * v24 = (int32_t *)(a1 + 24); // 0x4d9f50
    int32_t v25 = *v24; // 0x4d9f50
    int32_t v26 = v10 + (int32_t)v9 + v19; // 0x4d9f6a
    int32_t * v27 = (int32_t *)(a1 + 4); // 0x4d9f73
    uint32_t v28 = v26 ^ (int32_t)a4; // 0x4d9f76
    int32_t v29 = v28 / 0x10000 | 0x10000 * v28; // 0x4d9f7c
    int32_t v30 = v29 + 0x6a09e667; // 0x4d9f82
    int32_t * v31 = (int32_t *)(a1 + 12); // 0x4d9f8c
    uint32_t v32 = v30 ^ v19; // 0x4d9f8f
    int32_t v33 = v21 + v14 + *v27; // 0x4d9f92
    int32_t * v34 = (int32_t *)(a1 + 8); // 0x4d9f95
    int32_t v35 = v32 / 0x1000 | 0x100000 * v32; // 0x4d9f9d
    uint32_t v36 = v33 ^ (int32_t)(a4 / 0x100000000); // 0x4d9fa1
    int32_t v37 = v26 + v12 + v35; // 0x4d9fa9
    int32_t v38 = v36 / 0x10000 | 0x10000 * v36; // 0x4d9fac
    uint32_t v39 = v25 + v2 + *v34; // 0x4d9fb2
    uint32_t v40 = v37 ^ v29; // 0x4d9fb7
    int32_t v41 = v40 / 256 | 0x1000000 * v40; // 0x4d9fbd
    int32_t v42 = 0x10000 * (v39 ^ (int32_t)a3 % 256) | v39 / 0x10000; // 0x4d9fc0
    int32_t v43 = v41 + v30; // 0x4d9fc3
    uint32_t v44 = v43 ^ v35; // 0x4d9fc6
    int32_t v45 = v42 + 0x3c6ef372; // 0x4d9fcc
    int32_t v46 = v44 / 128 | 0x2000000 * v44; // 0x4d9fd3
    uint32_t v47 = v45 ^ v25; // 0x4d9fd7
    int32_t v48 = v38 - 0x4498517b; // 0x4d9fdf
    uint32_t v49 = v48 ^ v21; // 0x4d9fe6
    int32_t v50 = v49 / 0x1000 | 0x100000 * v49; // 0x4d9fe9
    int32_t v51 = v33 + v1 + v50; // 0x4d9fed
    uint32_t v52 = v51 ^ v38; // 0x4d9ff0
    int32_t v53 = v52 / 256 | 0x1000000 * v52; // 0x4d9ff3
    int32_t v54 = v53 + v48; // 0x4d9ff6
    uint32_t v55 = v54 ^ v50; // 0x4d9ff9
    int32_t v56 = v55 / 128 | 0x2000000 * v55; // 0x4d9ffc
    int32_t v57 = v47 / 0x1000 | 0x100000 * v47; // 0x4da000
    uint32_t v58 = v23 + v4 + *v31; // 0x4da005
    int32_t v59 = 0x10000 * (v58 ^ (int32_t)a5 % 256) | v58 / 0x10000; // 0x4da014
    int32_t v60 = v39 + v3 + v57; // 0x4da017
    int32_t v61 = v59 - 0x5ab00ac6; // 0x4da01f
    int32_t v62 = v37 + v5 + v56; // 0x4da026
    uint32_t v63 = v60 ^ v42; // 0x4da029
    uint32_t v64 = v61 ^ v23; // 0x4da02c
    int32_t v65 = v63 / 256 | 0x1000000 * v63; // 0x4da02f
    int32_t v66 = v64 / 0x1000 | 0x100000 * v64; // 0x4da032
    int32_t v67 = v65 + v45; // 0x4da035
    int32_t v68 = v58 + v6 + v66; // 0x4da038
    uint32_t v69 = v67 ^ v57; // 0x4da03a
    uint32_t v70 = v68 ^ v59; // 0x4da03d
    int32_t v71 = v69 / 128 | 0x2000000 * v69; // 0x4da03f
    int32_t v72 = v70 / 256 | 0x1000000 * v70; // 0x4da042
    int32_t v73 = v72 + v61; // 0x4da045
    uint32_t v74 = v62 ^ v72; // 0x4da048
    int32_t v75 = v74 / 0x10000 | 0x10000 * v74; // 0x4da050
    uint32_t v76 = v73 ^ v66; // 0x4da053
    int32_t v77 = v75 + v67; // 0x4da056
    int32_t v78 = v76 / 128 | 0x2000000 * v76; // 0x4da059
    uint32_t v79 = v77 ^ v56; // 0x4da05c
    int32_t v80 = v79 / 0x1000 | 0x100000 * v79; // 0x4da05f
    int32_t v81 = v62 + v8 + v80; // 0x4da063
    uint32_t v82 = v81 ^ v75; // 0x4da066
    int32_t v83 = v82 / 256 | 0x1000000 * v82; // 0x4da069
    int32_t v84 = v83 + v77; // 0x4da06c
    int32_t v85 = v51 + v11 + v71; // 0x4da081
    uint32_t v86 = v84 ^ v80; // 0x4da088
    int32_t v87 = v60 + v7 + v78; // 0x4da08b
    uint32_t v88 = v85 ^ v41; // 0x4da08e
    int32_t v89 = v86 / 128 | 0x2000000 * v86; // 0x4da096
    uint32_t v90 = v87 ^ v53; // 0x4da09a
    int32_t v91 = v88 / 0x10000 | 0x10000 * v88; // 0x4da09d
    int32_t v92 = v90 / 0x10000 | 0x10000 * v90; // 0x4da0a5
    int32_t v93 = v91 + v73; // 0x4da0a8
    int32_t v94 = v92 + v43; // 0x4da0ab
    uint32_t v95 = v93 ^ v71; // 0x4da0ae
    uint32_t v96 = v94 ^ v78; // 0x4da0b1
    int32_t v97 = v95 / 0x1000 | 0x100000 * v95; // 0x4da0b4
    int32_t v98 = v96 / 0x1000 | 0x100000 * v96; // 0x4da0b7
    int32_t v99 = v85 + v13 + v97; // 0x4da0ba
    int32_t v100 = v87 + v15 + v98; // 0x4da0bd
    uint32_t v101 = v99 ^ v91; // 0x4da0c0
    uint32_t v102 = v100 ^ v92; // 0x4da0c3
    int32_t v103 = v101 / 256 | 0x1000000 * v101; // 0x4da0c6
    int32_t v104 = v102 / 256 | 0x1000000 * v102; // 0x4da0c9
    int32_t v105 = v103 + v93; // 0x4da0cc
    int32_t v106 = v104 + v94; // 0x4da0cf
    uint32_t v107 = v105 ^ v97; // 0x4da0d2
    uint32_t v108 = v106 ^ v98; // 0x4da0d5
    int32_t v109 = v107 / 128 | 0x2000000 * v107; // 0x4da0d8
    int32_t v110 = v108 / 128 | 0x2000000 * v108; // 0x4da0db
    int32_t v111 = v68 + v16 + v46; // 0x4da0de
    uint32_t v112 = v111 ^ v65; // 0x4da0e0
    int32_t v113 = v112 / 0x10000 | 0x10000 * v112; // 0x4da0eb
    int32_t v114 = v113 + v54; // 0x4da0f3
    int32_t v115 = v99 + v1 + v89; // 0x4da0f6
    uint32_t v116 = v114 ^ v46; // 0x4da0f9
    uint32_t v117 = v115 ^ v104; // 0x4da0fc
    int32_t v118 = v116 / 0x1000 | 0x100000 * v116; // 0x4da0ff
    int32_t v119 = v117 / 0x10000 | 0x10000 * v117; // 0x4da102
    int32_t v120 = v111 + v17 + v118; // 0x4da105
    uint32_t v121 = v120 ^ v113; // 0x4da107
    int32_t v122 = v121 / 256 | 0x1000000 * v121; // 0x4da109
    int32_t v123 = v122 + v114; // 0x4da10c
    uint32_t v124 = v123 ^ v118; // 0x4da10f
    int32_t v125 = v119 + v123; // 0x4da112
    int32_t v126 = v124 / 128 | 0x2000000 * v124; // 0x4da115
    int32_t v127 = v81 + v14 + v126; // 0x4da118
    uint32_t v128 = v127 ^ v103; // 0x4da11b
    int32_t v129 = v128 / 0x10000 | 0x10000 * v128; // 0x4da123
    int32_t v130 = v129 + v106; // 0x4da126
    uint32_t v131 = v130 ^ v126; // 0x4da129
    int32_t v132 = v131 / 0x1000 | 0x100000 * v131; // 0x4da12c
    int32_t v133 = v127 + v4 + v132; // 0x4da12f
    uint32_t v134 = v133 ^ v129; // 0x4da132
    int32_t v135 = v134 / 256 | 0x1000000 * v134; // 0x4da135
    int32_t v136 = v135 + v130; // 0x4da138
    uint32_t v137 = v136 ^ v132; // 0x4da13b
    int32_t v138 = v137 / 128 | 0x2000000 * v137; // 0x4da13e
    uint32_t v139 = v125 ^ v89; // 0x4da141
    int32_t v140 = v100 + v6 + v109; // 0x4da14d
    int32_t v141 = v120 + v2 + v110; // 0x4da158
    uint32_t v142 = v140 ^ v122; // 0x4da15a
    int32_t v143 = v139 / 0x1000 | 0x100000 * v139; // 0x4da167
    int32_t v144 = v142 / 0x10000 | 0x10000 * v142; // 0x4da16b
    uint32_t v145 = v141 ^ v83; // 0x4da16e
    int32_t v146 = v115 + v11 + v143; // 0x4da170
    int32_t v147 = v144 + v84; // 0x4da177
    int32_t v148 = v145 / 0x10000 | 0x10000 * v145; // 0x4da17a
    uint32_t v149 = v146 ^ v119; // 0x4da17d
    uint32_t v150 = v147 ^ v109; // 0x4da180
    int32_t v151 = v148 + v105; // 0x4da183
    int32_t v152 = v149 / 256 | 0x1000000 * v149; // 0x4da186
    int32_t v153 = v150 / 0x1000 | 0x100000 * v150; // 0x4da189
    uint32_t v154 = v151 ^ v110; // 0x4da18c
    int32_t v155 = v152 + v125; // 0x4da18f
    int32_t v156 = v140 + v10 + v153; // 0x4da192
    int32_t v157 = v154 / 0x1000 | 0x100000 * v154; // 0x4da195
    uint32_t v158 = v155 ^ v143; // 0x4da198
    uint32_t v159 = v156 ^ v144; // 0x4da19b
    int32_t v160 = v141 + v15 + v157; // 0x4da19e
    int32_t v161 = v158 / 128 | 0x2000000 * v158; // 0x4da1a0
    int32_t v162 = v159 / 256 | 0x1000000 * v159; // 0x4da1a4
    int32_t v163 = v162 + v147; // 0x4da1a7
    uint32_t v164 = v163 ^ v153; // 0x4da1aa
    int32_t v165 = v164 / 128 | 0x2000000 * v164; // 0x4da1ad
    uint32_t v166 = v160 ^ v148; // 0x4da1b0
    int32_t v167 = v133 + v12 + v161; // 0x4da1bc
    int32_t v168 = v146 + v7 + v165; // 0x4da1bf
    int32_t v169 = v166 / 256 | 0x1000000 * v166; // 0x4da1c2
    int32_t v170 = v169 + v151; // 0x4da1c5
    uint32_t v171 = v168 ^ v135; // 0x4da1c8
    uint32_t v172 = v167 ^ v169; // 0x4da1cb
    int32_t v173 = v172 / 0x10000 | 0x10000 * v172; // 0x4da1d3
    int32_t v174 = v171 / 0x10000 | 0x10000 * v171; // 0x4da1d6
    uint32_t v175 = v170 ^ v157; // 0x4da1d9
    int32_t v176 = v173 + v163; // 0x4da1e1
    int32_t v177 = v174 + v170; // 0x4da1e4
    int32_t v178 = v175 / 128 | 0x2000000 * v175; // 0x4da1e7
    uint32_t v179 = v176 ^ v161; // 0x4da1ea
    uint32_t v180 = v177 ^ v165; // 0x4da1ed
    int32_t v181 = v179 / 0x1000 | 0x100000 * v179; // 0x4da1f0
    int32_t v182 = v180 / 0x1000 | 0x100000 * v180; // 0x4da1f4
    int32_t v183 = v167 + v13 + v181; // 0x4da1f7
    int32_t v184 = v168 + v3 + v182; // 0x4da1fa
    uint32_t v185 = v183 ^ v173; // 0x4da1fd
    uint32_t v186 = v184 ^ v174; // 0x4da200
    int32_t v187 = v185 / 256 | 0x1000000 * v185; // 0x4da203
    int32_t v188 = v186 / 256 | 0x1000000 * v186; // 0x4da206
    int32_t v189 = v187 + v176; // 0x4da209
    int32_t v190 = v188 + v177; // 0x4da20c
    uint32_t v191 = v189 ^ v181; // 0x4da217
    uint32_t v192 = v190 ^ v182; // 0x4da21a
    int32_t v193 = v191 / 128 | 0x2000000 * v191; // 0x4da21d
    int32_t v194 = v192 / 128 | 0x2000000 * v192; // 0x4da221
    int32_t v195 = v160 + v17 + v138; // 0x4da22d
    int32_t v196 = v156 + v8 + v178; // 0x4da22f
    uint32_t v197 = v195 ^ v162; // 0x4da237
    uint32_t v198 = v196 ^ v152; // 0x4da239
    int32_t v199 = v197 / 0x10000 | 0x10000 * v197; // 0x4da245
    int32_t v200 = v198 / 0x10000 | 0x10000 * v198; // 0x4da248
    int32_t v201 = v199 + v155; // 0x4da24b
    int32_t v202 = v200 + v136; // 0x4da24e
    uint32_t v203 = v201 ^ v138; // 0x4da251
    uint32_t v204 = v202 ^ v178; // 0x4da254
    int32_t v205 = v203 / 0x1000 | 0x100000 * v203; // 0x4da257
    int32_t v206 = v204 / 0x1000 | 0x100000 * v204; // 0x4da25a
    int32_t v207 = v195 + v5 + v205; // 0x4da25d
    int32_t v208 = v196 + v16 + v206; // 0x4da25f
    uint32_t v209 = v207 ^ v199; // 0x4da262
    uint32_t v210 = v208 ^ v200; // 0x4da264
    int32_t v211 = v209 / 256 | 0x1000000 * v209; // 0x4da267
    int32_t v212 = v210 / 256 | 0x1000000 * v210; // 0x4da26a
    int32_t v213 = v211 + v201; // 0x4da26d
    int32_t v214 = v212 + v202; // 0x4da270
    uint32_t v215 = v213 ^ v205; // 0x4da273
    uint32_t v216 = v214 ^ v206; // 0x4da276
    int32_t v217 = v215 / 128 | 0x2000000 * v215; // 0x4da279
    int32_t v218 = v216 / 128 | 0x2000000 * v216; // 0x4da27c
    int32_t v219 = v183 + v1 + v217; // 0x4da27f
    uint32_t v220 = v219 ^ v188; // 0x4da282
    int32_t v221 = v220 / 0x10000 | 0x10000 * v220; // 0x4da285
    int32_t v222 = v184 + v11 + v193; // 0x4da292
    int32_t v223 = v221 + v214; // 0x4da295
    uint32_t v224 = v222 ^ v212; // 0x4da29d
    uint32_t v225 = v223 ^ v217; // 0x4da2a0
    int32_t v226 = v208 + v15 + v194; // 0x4da2a8
    int32_t v227 = v224 / 0x10000 | 0x10000 * v224; // 0x4da2ab
    int32_t v228 = v225 / 0x1000 | 0x100000 * v225; // 0x4da2ae
    uint32_t v229 = v226 ^ v211; // 0x4da2b1
    int32_t v230 = v227 + v213; // 0x4da2b4
    int32_t v231 = v219 + v2 + v228; // 0x4da2b7
    int32_t v232 = v229 / 0x10000 | 0x10000 * v229; // 0x4da2ba
    uint32_t v233 = v230 ^ v193; // 0x4da2bd
    uint32_t v234 = v231 ^ v221; // 0x4da2c0
    int32_t v235 = v232 + v189; // 0x4da2c3
    int32_t v236 = v233 / 0x1000 | 0x100000 * v233; // 0x4da2c6
    int32_t v237 = v234 / 256 | 0x1000000 * v234; // 0x4da2ca
    uint32_t v238 = v235 ^ v194; // 0x4da2cd
    int32_t v239 = v222 + v7 + v236; // 0x4da2d0
    int32_t v240 = v237 + v223; // 0x4da2d3
    int32_t v241 = v238 / 0x1000 | 0x100000 * v238; // 0x4da2d6
    uint32_t v242 = v239 ^ v227; // 0x4da2d9
    uint32_t v243 = v240 ^ v228; // 0x4da2dc
    int32_t v244 = v242 / 256 | 0x1000000 * v242; // 0x4da2df
    int32_t v245 = v243 / 128 | 0x2000000 * v243; // 0x4da2e2
    int32_t v246 = v244 + v230; // 0x4da2e5
    uint32_t v247 = v246 ^ v236; // 0x4da2f0
    int32_t v248 = v247 / 128 | 0x2000000 * v247; // 0x4da2f3
    int32_t v249 = v207 + v6 + v218; // 0x4da300
    int32_t v250 = v226 + v14 + v241; // 0x4da302
    uint32_t v251 = v249 ^ v187; // 0x4da30a
    int32_t v252 = v231 + v4 + v248; // 0x4da310
    uint32_t v253 = v250 ^ v232; // 0x4da313
    int32_t v254 = v251 / 0x10000 | 0x10000 * v251; // 0x4da316
    int32_t v255 = v253 / 256 | 0x1000000 * v253; // 0x4da319
    int32_t v256 = v254 + v190; // 0x4da31c
    int32_t v257 = v255 + v235; // 0x4da31f
    uint32_t v258 = v256 ^ v218; // 0x4da322
    uint32_t v259 = v257 ^ v241; // 0x4da325
    int32_t v260 = v258 / 0x1000 | 0x100000 * v258; // 0x4da328
    int32_t v261 = v259 / 128 | 0x2000000 * v259; // 0x4da32b
    int32_t v262 = v249 + v16 + v260; // 0x4da32e
    uint32_t v263 = v262 ^ v254; // 0x4da330
    int32_t v264 = v263 / 256 | 0x1000000 * v263; // 0x4da332
    int32_t v265 = v264 + v256; // 0x4da335
    uint32_t v266 = v252 ^ v264; // 0x4da338
    int32_t v267 = v266 / 0x10000 | 0x10000 * v266; // 0x4da340
    uint32_t v268 = v265 ^ v260; // 0x4da343
    int32_t v269 = v267 + v257; // 0x4da346
    int32_t v270 = v268 / 128 | 0x2000000 * v268; // 0x4da349
    uint32_t v271 = v269 ^ v248; // 0x4da34c
    int32_t v272 = v271 / 0x1000 | 0x100000 * v271; // 0x4da34f
    int32_t v273 = v252 + v3 + v272; // 0x4da353
    uint32_t v274 = v273 ^ v267; // 0x4da356
    int32_t v275 = v274 / 256 | 0x1000000 * v274; // 0x4da359
    int32_t v276 = v275 + v269; // 0x4da360
    int32_t v277 = v239 + v8 + v261; // 0x4da36d
    uint32_t v278 = v276 ^ v272; // 0x4da374
    int32_t v279 = v250 + v13 + v270; // 0x4da377
    uint32_t v280 = v277 ^ v237; // 0x4da37a
    int32_t v281 = v280 / 0x10000 | 0x10000 * v280; // 0x4da386
    uint32_t v282 = v279 ^ v244; // 0x4da389
    int32_t v283 = v278 / 128 | 0x2000000 * v278; // 0x4da391
    int32_t v284 = v282 / 0x10000 | 0x10000 * v282; // 0x4da395
    int32_t v285 = v281 + v265; // 0x4da398
    int32_t v286 = v284 + v240; // 0x4da39b
    uint32_t v287 = v285 ^ v261; // 0x4da39e
    uint32_t v288 = v286 ^ v270; // 0x4da3a1
    int32_t v289 = v287 / 0x1000 | 0x100000 * v287; // 0x4da3a4
    int32_t v290 = v288 / 0x1000 | 0x100000 * v288; // 0x4da3a7
    int32_t v291 = v277 + v10 + v289; // 0x4da3aa
    int32_t v292 = v279 + v17 + v290; // 0x4da3ad
    uint32_t v293 = v291 ^ v281; // 0x4da3b0
    uint32_t v294 = v292 ^ v284; // 0x4da3b3
    int32_t v295 = v293 / 256 | 0x1000000 * v293; // 0x4da3b6
    int32_t v296 = v294 / 256 | 0x1000000 * v294; // 0x4da3b9
    int32_t v297 = v295 + v285; // 0x4da3bc
    int32_t v298 = v296 + v286; // 0x4da3bf
    uint32_t v299 = v297 ^ v289; // 0x4da3c2
    uint32_t v300 = v298 ^ v290; // 0x4da3c5
    int32_t v301 = v299 / 128 | 0x2000000 * v299; // 0x4da3c8
    int32_t v302 = v300 / 128 | 0x2000000 * v300; // 0x4da3cb
    int32_t v303 = v262 + v5 + v245; // 0x4da3ce
    uint32_t v304 = v303 ^ v255; // 0x4da3da
    int32_t v305 = v291 + v7 + v283; // 0x4da3e0
    int32_t v306 = v304 / 0x10000 | 0x10000 * v304; // 0x4da3e3
    uint32_t v307 = v305 ^ v296; // 0x4da3e6
    int32_t v308 = v306 + v246; // 0x4da3e9
    int32_t v309 = v307 / 0x10000 | 0x10000 * v307; // 0x4da3ec
    uint32_t v310 = v308 ^ v245; // 0x4da3ef
    int32_t v311 = v310 / 0x1000 | 0x100000 * v310; // 0x4da3f2
    int32_t v312 = v303 + v12 + v311; // 0x4da3f5
    uint32_t v313 = v312 ^ v306; // 0x4da3f7
    int32_t v314 = v313 / 256 | 0x1000000 * v313; // 0x4da3f9
    int32_t v315 = v314 + v308; // 0x4da3fc
    uint32_t v316 = v315 ^ v311; // 0x4da3ff
    int32_t v317 = v309 + v315; // 0x4da402
    int32_t v318 = v316 / 128 | 0x2000000 * v316; // 0x4da405
    int32_t v319 = v273 + v11 + v318; // 0x4da408
    uint32_t v320 = v319 ^ v295; // 0x4da40b
    int32_t v321 = v320 / 0x10000 | 0x10000 * v320; // 0x4da413
    int32_t v322 = v321 + v298; // 0x4da416
    uint32_t v323 = v322 ^ v318; // 0x4da419
    int32_t v324 = v323 / 0x1000 | 0x100000 * v323; // 0x4da41c
    int32_t v325 = v319 + v6 + v324; // 0x4da41f
    uint32_t v326 = v325 ^ v321; // 0x4da422
    int32_t v327 = v326 / 256 | 0x1000000 * v326; // 0x4da425
    int32_t v328 = v327 + v322; // 0x4da428
    uint32_t v329 = v328 ^ v324; // 0x4da42b
    int32_t v330 = v329 / 128 | 0x2000000 * v329; // 0x4da42e
    uint32_t v331 = v317 ^ v283; // 0x4da431
    int32_t v332 = v292 + v16 + v301; // 0x4da43d
    int32_t v333 = v312 + v15 + v302; // 0x4da448
    uint32_t v334 = v332 ^ v314; // 0x4da44a
    int32_t v335 = v331 / 0x1000 | 0x100000 * v331; // 0x4da457
    int32_t v336 = v334 / 0x10000 | 0x10000 * v334; // 0x4da45b
    uint32_t v337 = v333 ^ v275; // 0x4da45e
    int32_t v338 = v305 + v8 + v335; // 0x4da460
    int32_t v339 = v336 + v276; // 0x4da467
    int32_t v340 = v337 / 0x10000 | 0x10000 * v337; // 0x4da46a
    uint32_t v341 = v338 ^ v309; // 0x4da46d
    uint32_t v342 = v339 ^ v301; // 0x4da470
    int32_t v343 = v340 + v297; // 0x4da473
    int32_t v344 = v341 / 256 | 0x1000000 * v341; // 0x4da476
    int32_t v345 = v342 / 0x1000 | 0x100000 * v342; // 0x4da479
    uint32_t v346 = v343 ^ v302; // 0x4da47c
    int32_t v347 = v344 + v317; // 0x4da47f
    int32_t v348 = v332 + v1 + v345; // 0x4da482
    int32_t v349 = v346 / 0x1000 | 0x100000 * v346; // 0x4da485
    uint32_t v350 = v347 ^ v335; // 0x4da488
    uint32_t v351 = v348 ^ v336; // 0x4da48b
    int32_t v352 = v333 + v17 + v349; // 0x4da48e
    int32_t v353 = v350 / 128 | 0x2000000 * v350; // 0x4da490
    int32_t v354 = v351 / 256 | 0x1000000 * v351; // 0x4da494
    int32_t v355 = v354 + v339; // 0x4da497
    uint32_t v356 = v355 ^ v345; // 0x4da49a
    int32_t v357 = v356 / 128 | 0x2000000 * v356; // 0x4da49d
    uint32_t v358 = v352 ^ v340; // 0x4da4a0
    int32_t v359 = v325 + v2 + v353; // 0x4da4ac
    int32_t v360 = v338 + v13 + v357; // 0x4da4af
    int32_t v361 = v358 / 256 | 0x1000000 * v358; // 0x4da4b2
    int32_t v362 = v361 + v343; // 0x4da4b5
    uint32_t v363 = v360 ^ v327; // 0x4da4b8
    uint32_t v364 = v359 ^ v361; // 0x4da4bb
    int32_t v365 = v364 / 0x10000 | 0x10000 * v364; // 0x4da4c3
    int32_t v366 = v363 / 0x10000 | 0x10000 * v363; // 0x4da4c6
    uint32_t v367 = v362 ^ v349; // 0x4da4c9
    int32_t v368 = v365 + v355; // 0x4da4d1
    int32_t v369 = v366 + v362; // 0x4da4d4
    int32_t v370 = v367 / 128 | 0x2000000 * v367; // 0x4da4d7
    uint32_t v371 = v368 ^ v353; // 0x4da4da
    uint32_t v372 = v369 ^ v357; // 0x4da4dd
    int32_t v373 = v371 / 0x1000 | 0x100000 * v371; // 0x4da4e0
    int32_t v374 = v372 / 0x1000 | 0x100000 * v372; // 0x4da4e4
    int32_t v375 = v359 + v10 + v373; // 0x4da4e7
    int32_t v376 = v360 + v14 + v374; // 0x4da4ea
    uint32_t v377 = v375 ^ v365; // 0x4da4ed
    uint32_t v378 = v376 ^ v366; // 0x4da4f0
    int32_t v379 = v377 / 256 | 0x1000000 * v377; // 0x4da4f3
    int32_t v380 = v378 / 256 | 0x1000000 * v378; // 0x4da4f6
    int32_t v381 = v379 + v368; // 0x4da4f9
    int32_t v382 = v380 + v369; // 0x4da4fc
    uint32_t v383 = v381 ^ v373; // 0x4da507
    uint32_t v384 = v382 ^ v374; // 0x4da50a
    int32_t v385 = v383 / 128 | 0x2000000 * v383; // 0x4da50d
    int32_t v386 = v384 / 128 | 0x2000000 * v384; // 0x4da511
    int32_t v387 = v352 + v12 + v330; // 0x4da51d
    int32_t v388 = v348 + v3 + v370; // 0x4da51f
    uint32_t v389 = v387 ^ v354; // 0x4da527
    uint32_t v390 = v388 ^ v344; // 0x4da529
    int32_t v391 = v389 / 0x10000 | 0x10000 * v389; // 0x4da535
    int32_t v392 = v390 / 0x10000 | 0x10000 * v390; // 0x4da538
    int32_t v393 = v391 + v347; // 0x4da53b
    int32_t v394 = v392 + v328; // 0x4da53e
    uint32_t v395 = v393 ^ v330; // 0x4da541
    uint32_t v396 = v394 ^ v370; // 0x4da544
    int32_t v397 = v395 / 0x1000 | 0x100000 * v395; // 0x4da547
    int32_t v398 = v396 / 0x1000 | 0x100000 * v396; // 0x4da54a
    int32_t v399 = v387 + v4 + v397; // 0x4da54d
    int32_t v400 = v388 + v5 + v398; // 0x4da54f
    uint32_t v401 = v399 ^ v391; // 0x4da552
    uint32_t v402 = v400 ^ v392; // 0x4da554
    int32_t v403 = v401 / 256 | 0x1000000 * v401; // 0x4da557
    int32_t v404 = v402 / 256 | 0x1000000 * v402; // 0x4da55a
    int32_t v405 = v403 + v393; // 0x4da55d
    int32_t v406 = v404 + v394; // 0x4da560
    uint32_t v407 = v405 ^ v397; // 0x4da563
    uint32_t v408 = v406 ^ v398; // 0x4da566
    int32_t v409 = v407 / 128 | 0x2000000 * v407; // 0x4da569
    int32_t v410 = v408 / 128 | 0x2000000 * v408; // 0x4da56c
    int32_t v411 = v375 + v7 + v409; // 0x4da56f
    uint32_t v412 = v411 ^ v380; // 0x4da572
    int32_t v413 = v412 / 0x10000 | 0x10000 * v412; // 0x4da575
    int32_t v414 = v413 + v406; // 0x4da582
    int32_t v415 = v376 + v8 + v385; // 0x4da585
    uint32_t v416 = v414 ^ v409; // 0x4da588
    uint32_t v417 = v415 ^ v404; // 0x4da58b
    int32_t v418 = v416 / 0x1000 | 0x100000 * v416; // 0x4da593
    int32_t v419 = v417 / 0x10000 | 0x10000 * v417; // 0x4da596
    int32_t v420 = v411 + v15 + v418; // 0x4da599
    int32_t v421 = v419 + v405; // 0x4da59c
    uint32_t v422 = v420 ^ v413; // 0x4da59f
    uint32_t v423 = v421 ^ v385; // 0x4da5a2
    int32_t v424 = v422 / 256 | 0x1000000 * v422; // 0x4da5a5
    int32_t v425 = v423 / 0x1000 | 0x100000 * v423; // 0x4da5a8
    int32_t v426 = v424 + v414; // 0x4da5ac
    int32_t v427 = v415 + v13 + v425; // 0x4da5af
    uint32_t v428 = v426 ^ v418; // 0x4da5b2
    uint32_t v429 = v427 ^ v419; // 0x4da5b5
    int32_t v430 = v428 / 128 | 0x2000000 * v428; // 0x4da5b8
    int32_t v431 = v429 / 256 | 0x1000000 * v429; // 0x4da5bb
    int32_t v432 = v431 + v421; // 0x4da5c7
    int32_t v433 = v400 + v17 + v386; // 0x4da5ca
    uint32_t v434 = v432 ^ v425; // 0x4da5cd
    uint32_t v435 = v433 ^ v403; // 0x4da5d4
    int32_t v436 = v434 / 128 | 0x2000000 * v434; // 0x4da5d7
    int32_t v437 = v435 / 0x10000 | 0x10000 * v435; // 0x4da5db
    int32_t v438 = v437 + v381; // 0x4da5de
    uint32_t v439 = v438 ^ v386; // 0x4da5e1
    int32_t v440 = v439 / 0x1000 | 0x100000 * v439; // 0x4da5e4
    int32_t v441 = v399 + v16 + v410; // 0x4da5f0
    int32_t v442 = v433 + v11 + v440; // 0x4da5f2
    uint32_t v443 = v441 ^ v379; // 0x4da5fa
    int32_t v444 = v420 + v6 + v436; // 0x4da600
    uint32_t v445 = v442 ^ v437; // 0x4da603
    int32_t v446 = v443 / 0x10000 | 0x10000 * v443; // 0x4da606
    int32_t v447 = v445 / 256 | 0x1000000 * v445; // 0x4da609
    int32_t v448 = v446 + v382; // 0x4da60c
    int32_t v449 = v447 + v438; // 0x4da60f
    uint32_t v450 = v448 ^ v410; // 0x4da612
    uint32_t v451 = v449 ^ v440; // 0x4da615
    int32_t v452 = v450 / 0x1000 | 0x100000 * v450; // 0x4da618
    int32_t v453 = v451 / 128 | 0x2000000 * v451; // 0x4da61b
    int32_t v454 = v441 + v5 + v452; // 0x4da61e
    uint32_t v455 = v454 ^ v446; // 0x4da620
    int32_t v456 = v455 / 256 | 0x1000000 * v455; // 0x4da622
    int32_t v457 = v456 + v448; // 0x4da625
    uint32_t v458 = v444 ^ v456; // 0x4da628
    int32_t v459 = v458 / 0x10000 | 0x10000 * v458; // 0x4da630
    uint32_t v460 = v457 ^ v452; // 0x4da633
    int32_t v461 = v459 + v449; // 0x4da636
    int32_t v462 = v460 / 128 | 0x2000000 * v460; // 0x4da639
    uint32_t v463 = v461 ^ v436; // 0x4da63c
    int32_t v464 = v463 / 0x1000 | 0x100000 * v463; // 0x4da63f
    int32_t v465 = v444 + v14 + v464; // 0x4da643
    uint32_t v466 = v465 ^ v459; // 0x4da646
    int32_t v467 = v466 / 256 | 0x1000000 * v466; // 0x4da649
    int32_t v468 = v467 + v461; // 0x4da64c
    int32_t v469 = v427 + v3 + v453; // 0x4da661
    uint32_t v470 = v468 ^ v464; // 0x4da668
    int32_t v471 = v442 + v10 + v462; // 0x4da66b
    uint32_t v472 = v469 ^ v424; // 0x4da66e
    int32_t v473 = v470 / 128 | 0x2000000 * v470; // 0x4da676
    uint32_t v474 = v471 ^ v431; // 0x4da67a
    int32_t v475 = v472 / 0x10000 | 0x10000 * v472; // 0x4da67d
    int32_t v476 = v474 / 0x10000 | 0x10000 * v474; // 0x4da685
    int32_t v477 = v475 + v457; // 0x4da688
    int32_t v478 = v476 + v426; // 0x4da68b
    uint32_t v479 = v477 ^ v453; // 0x4da68e
    uint32_t v480 = v478 ^ v462; // 0x4da691
    int32_t v481 = v479 / 0x1000 | 0x100000 * v479; // 0x4da694
    int32_t v482 = v480 / 0x1000 | 0x100000 * v480; // 0x4da697
    int32_t v483 = v469 + v1 + v481; // 0x4da69a
    int32_t v484 = v471 + v12 + v482; // 0x4da69d
    uint32_t v485 = v483 ^ v475; // 0x4da6a0
    uint32_t v486 = v484 ^ v476; // 0x4da6a3
    int32_t v487 = v485 / 256 | 0x1000000 * v485; // 0x4da6a6
    int32_t v488 = v486 / 256 | 0x1000000 * v486; // 0x4da6a9
    int32_t v489 = v487 + v477; // 0x4da6ac
    int32_t v490 = v488 + v478; // 0x4da6af
    uint32_t v491 = v489 ^ v481; // 0x4da6b2
    uint32_t v492 = v490 ^ v482; // 0x4da6b5
    int32_t v493 = v491 / 128 | 0x2000000 * v491; // 0x4da6b8
    int32_t v494 = v492 / 128 | 0x2000000 * v492; // 0x4da6bb
    int32_t v495 = v454 + v4 + v430; // 0x4da6be
    uint32_t v496 = v495 ^ v447; // 0x4da6ca
    int32_t v497 = v483 + v13 + v473; // 0x4da6d0
    int32_t v498 = v496 / 0x10000 | 0x10000 * v496; // 0x4da6d3
    uint32_t v499 = v497 ^ v488; // 0x4da6d6
    int32_t v500 = v498 + v432; // 0x4da6d9
    int32_t v501 = v499 / 0x10000 | 0x10000 * v499; // 0x4da6dc
    uint32_t v502 = v500 ^ v430; // 0x4da6df
    int32_t v503 = v502 / 0x1000 | 0x100000 * v502; // 0x4da6e2
    int32_t v504 = v495 + v2 + v503; // 0x4da6e5
    uint32_t v505 = v504 ^ v498; // 0x4da6e7
    int32_t v506 = v505 / 256 | 0x1000000 * v505; // 0x4da6e9
    int32_t v507 = v506 + v500; // 0x4da6ec
    uint32_t v508 = v507 ^ v503; // 0x4da6ef
    int32_t v509 = v501 + v507; // 0x4da6f2
    int32_t v510 = v508 / 128 | 0x2000000 * v508; // 0x4da6f5
    int32_t v511 = v465 + v8 + v510; // 0x4da6f8
    uint32_t v512 = v511 ^ v487; // 0x4da6fb
    int32_t v513 = v512 / 0x10000 | 0x10000 * v512; // 0x4da703
    int32_t v514 = v513 + v490; // 0x4da706
    uint32_t v515 = v514 ^ v510; // 0x4da709
    int32_t v516 = v515 / 0x1000 | 0x100000 * v515; // 0x4da70c
    int32_t v517 = v511 + v16 + v516; // 0x4da70f
    uint32_t v518 = v517 ^ v513; // 0x4da712
    int32_t v519 = v518 / 256 | 0x1000000 * v518; // 0x4da715
    int32_t v520 = v519 + v514; // 0x4da718
    uint32_t v521 = v520 ^ v516; // 0x4da71b
    int32_t v522 = v521 / 128 | 0x2000000 * v521; // 0x4da71e
    uint32_t v523 = v509 ^ v473; // 0x4da721
    int32_t v524 = v484 + v5 + v493; // 0x4da72d
    int32_t v525 = v504 + v17 + v494; // 0x4da738
    uint32_t v526 = v524 ^ v506; // 0x4da73a
    int32_t v527 = v523 / 0x1000 | 0x100000 * v523; // 0x4da747
    int32_t v528 = v526 / 0x10000 | 0x10000 * v526; // 0x4da74b
    uint32_t v529 = v525 ^ v467; // 0x4da74e
    int32_t v530 = v497 + v3 + v527; // 0x4da750
    int32_t v531 = v528 + v468; // 0x4da757
    int32_t v532 = v529 / 0x10000 | 0x10000 * v529; // 0x4da75a
    uint32_t v533 = v530 ^ v501; // 0x4da75d
    uint32_t v534 = v531 ^ v493; // 0x4da760
    int32_t v535 = v532 + v489; // 0x4da763
    int32_t v536 = v533 / 256 | 0x1000000 * v533; // 0x4da766
    int32_t v537 = v534 / 0x1000 | 0x100000 * v534; // 0x4da769
    uint32_t v538 = v535 ^ v494; // 0x4da76c
    int32_t v539 = v536 + v509; // 0x4da76f
    int32_t v540 = v524 + v7 + v537; // 0x4da772
    int32_t v541 = v538 / 0x1000 | 0x100000 * v538; // 0x4da775
    uint32_t v542 = v539 ^ v527; // 0x4da778
    uint32_t v543 = v540 ^ v528; // 0x4da77b
    int32_t v544 = v525 + v12 + v541; // 0x4da77e
    int32_t v545 = v542 / 128 | 0x2000000 * v542; // 0x4da780
    int32_t v546 = v543 / 256 | 0x1000000 * v543; // 0x4da784
    int32_t v547 = v546 + v531; // 0x4da787
    uint32_t v548 = v547 ^ v537; // 0x4da78a
    int32_t v549 = v548 / 128 | 0x2000000 * v548; // 0x4da78d
    uint32_t v550 = v544 ^ v532; // 0x4da790
    int32_t v551 = v517 + v15 + v545; // 0x4da79c
    int32_t v552 = v530 + v10 + v549; // 0x4da79f
    int32_t v553 = v550 / 256 | 0x1000000 * v550; // 0x4da7a2
    int32_t v554 = v553 + v535; // 0x4da7a5
    uint32_t v555 = v552 ^ v519; // 0x4da7a8
    uint32_t v556 = v551 ^ v553; // 0x4da7ab
    int32_t v557 = v556 / 0x10000 | 0x10000 * v556; // 0x4da7b3
    int32_t v558 = v555 / 0x10000 | 0x10000 * v555; // 0x4da7b6
    uint32_t v559 = v554 ^ v541; // 0x4da7b9
    int32_t v560 = v557 + v547; // 0x4da7c1
    int32_t v561 = v558 + v554; // 0x4da7c4
    int32_t v562 = v559 / 128 | 0x2000000 * v559; // 0x4da7c7
    uint32_t v563 = v560 ^ v545; // 0x4da7ca
    uint32_t v564 = v561 ^ v549; // 0x4da7cd
    int32_t v565 = v563 / 0x1000 | 0x100000 * v563; // 0x4da7d0
    int32_t v566 = v564 / 0x1000 | 0x100000 * v564; // 0x4da7d4
    int32_t v567 = v551 + v1 + v565; // 0x4da7d7
    int32_t v568 = v552 + v11 + v566; // 0x4da7da
    uint32_t v569 = v567 ^ v557; // 0x4da7dd
    uint32_t v570 = v568 ^ v558; // 0x4da7e0
    int32_t v571 = v569 / 256 | 0x1000000 * v569; // 0x4da7e3
    int32_t v572 = v570 / 256 | 0x1000000 * v570; // 0x4da7e6
    int32_t v573 = v571 + v560; // 0x4da7e9
    int32_t v574 = v572 + v561; // 0x4da7ec
    uint32_t v575 = v573 ^ v565; // 0x4da7f3
    uint32_t v576 = v574 ^ v566; // 0x4da7f6
    int32_t v577 = v575 / 128 | 0x2000000 * v575; // 0x4da7f9
    int32_t v578 = v576 / 128 | 0x2000000 * v576; // 0x4da7fd
    int32_t v579 = v540 + v14 + v562; // 0x4da805
    uint32_t v580 = v579 ^ v536; // 0x4da808
    int32_t v581 = v580 / 0x10000 | 0x10000 * v580; // 0x4da818
    int32_t v582 = v581 + v520; // 0x4da820
    int32_t v583 = v544 + v2 + v522; // 0x4da823
    uint32_t v584 = v582 ^ v562; // 0x4da825
    uint32_t v585 = v583 ^ v546; // 0x4da828
    int32_t v586 = v584 / 0x1000 | 0x100000 * v584; // 0x4da82e
    int32_t v587 = v585 / 0x10000 | 0x10000 * v585; // 0x4da831
    int32_t v588 = v579 + v4 + v586; // 0x4da834
    int32_t v589 = v587 + v539; // 0x4da837
    uint32_t v590 = v588 ^ v581; // 0x4da83a
    uint32_t v591 = v589 ^ v522; // 0x4da83d
    int32_t v592 = v590 / 256 | 0x1000000 * v590; // 0x4da840
    int32_t v593 = v591 / 0x1000 | 0x100000 * v591; // 0x4da843
    int32_t v594 = v592 + v582; // 0x4da846
    int32_t v595 = v583 + v6 + v593; // 0x4da849
    uint32_t v596 = v594 ^ v586; // 0x4da84b
    uint32_t v597 = v595 ^ v587; // 0x4da84e
    int32_t v598 = v596 / 128 | 0x2000000 * v596; // 0x4da850
    int32_t v599 = v597 / 256 | 0x1000000 * v597; // 0x4da853
    int32_t v600 = v599 + v589; // 0x4da856
    uint32_t v601 = v600 ^ v593; // 0x4da859
    int32_t v602 = v601 / 128 | 0x2000000 * v601; // 0x4da85c
    int32_t v603 = v567 + v13 + v602; // 0x4da85f
    uint32_t v604 = v603 ^ v572; // 0x4da862
    int32_t v605 = v604 / 0x10000 | 0x10000 * v604; // 0x4da865
    int32_t v606 = v568 + v3 + v577; // 0x4da872
    int32_t v607 = v605 + v594; // 0x4da875
    uint32_t v608 = v606 ^ v592; // 0x4da87d
    uint32_t v609 = v607 ^ v602; // 0x4da880
    int32_t v610 = v588 + v12 + v578; // 0x4da888
    int32_t v611 = v608 / 0x10000 | 0x10000 * v608; // 0x4da88b
    int32_t v612 = v609 / 0x1000 | 0x100000 * v609; // 0x4da88e
    uint32_t v613 = v610 ^ v599; // 0x4da891
    int32_t v614 = v611 + v600; // 0x4da894
    int32_t v615 = v603 + v17 + v612; // 0x4da897
    int32_t v616 = v613 / 0x10000 | 0x10000 * v613; // 0x4da89a
    uint32_t v617 = v614 ^ v577; // 0x4da89d
    uint32_t v618 = v615 ^ v605; // 0x4da8a0
    int32_t v619 = v616 + v573; // 0x4da8a3
    int32_t v620 = v617 / 0x1000 | 0x100000 * v617; // 0x4da8a6
    int32_t v621 = v618 / 256 | 0x1000000 * v618; // 0x4da8aa
    uint32_t v622 = v619 ^ v578; // 0x4da8ad
    int32_t v623 = v606 + v10 + v620; // 0x4da8b0
    int32_t v624 = v621 + v607; // 0x4da8b3
    int32_t v625 = v622 / 0x1000 | 0x100000 * v622; // 0x4da8b6
    uint32_t v626 = v623 ^ v611; // 0x4da8b9
    uint32_t v627 = v624 ^ v612; // 0x4da8bc
    int32_t v628 = v626 / 256 | 0x1000000 * v626; // 0x4da8bf
    int32_t v629 = v627 / 128 | 0x2000000 * v627; // 0x4da8c2
    int32_t v630 = v628 + v614; // 0x4da8c5
    uint32_t v631 = v630 ^ v620; // 0x4da8d0
    int32_t v632 = v631 / 128 | 0x2000000 * v631; // 0x4da8d3
    int32_t v633 = v595 + v5 + v598; // 0x4da8e0
    int32_t v634 = v610 + v8 + v625; // 0x4da8e2
    uint32_t v635 = v633 ^ v571; // 0x4da8ea
    int32_t v636 = v615 + v16 + v632; // 0x4da8f0
    uint32_t v637 = v634 ^ v616; // 0x4da8f3
    int32_t v638 = v635 / 0x10000 | 0x10000 * v635; // 0x4da8f6
    int32_t v639 = v637 / 256 | 0x1000000 * v637; // 0x4da8f9
    int32_t v640 = v638 + v574; // 0x4da8fc
    int32_t v641 = v639 + v619; // 0x4da8ff
    uint32_t v642 = v640 ^ v598; // 0x4da902
    uint32_t v643 = v641 ^ v625; // 0x4da905
    int32_t v644 = v642 / 0x1000 | 0x100000 * v642; // 0x4da908
    int32_t v645 = v643 / 128 | 0x2000000 * v643; // 0x4da90b
    int32_t v646 = v633 + v4 + v644; // 0x4da90e
    uint32_t v647 = v646 ^ v638; // 0x4da910
    int32_t v648 = v647 / 256 | 0x1000000 * v647; // 0x4da912
    int32_t v649 = v648 + v640; // 0x4da915
    uint32_t v650 = v636 ^ v648; // 0x4da918
    int32_t v651 = v650 / 0x10000 | 0x10000 * v650; // 0x4da920
    uint32_t v652 = v649 ^ v644; // 0x4da923
    int32_t v653 = v651 + v641; // 0x4da926
    int32_t v654 = v652 / 128 | 0x2000000 * v652; // 0x4da929
    uint32_t v655 = v653 ^ v632; // 0x4da92c
    int32_t v656 = v655 / 0x1000 | 0x100000 * v655; // 0x4da92f
    int32_t v657 = v636 + v11 + v656; // 0x4da933
    uint32_t v658 = v657 ^ v651; // 0x4da93b
    int32_t v659 = v658 / 256 | 0x1000000 * v658; // 0x4da93e
    int32_t v660 = v659 + v653; // 0x4da941
    int32_t v661 = v623 + v14 + v645; // 0x4da94e
    int32_t v662 = v634 + v1 + v654; // 0x4da951
    uint32_t v663 = v661 ^ v621; // 0x4da958
    uint32_t v664 = v662 ^ v628; // 0x4da960
    int32_t v665 = v663 / 0x10000 | 0x10000 * v663; // 0x4da968
    int32_t v666 = v664 / 0x10000 | 0x10000 * v664; // 0x4da96b
    int32_t v667 = v665 + v649; // 0x4da96e
    int32_t v668 = v666 + v624; // 0x4da971
    uint32_t v669 = v667 ^ v645; // 0x4da974
    uint32_t v670 = v668 ^ v654; // 0x4da977
    int32_t v671 = v669 / 0x1000 | 0x100000 * v669; // 0x4da97a
    int32_t v672 = v670 / 0x1000 | 0x100000 * v670; // 0x4da97d
    int32_t v673 = v661 + v7 + v671; // 0x4da980
    int32_t v674 = v662 + v2 + v672; // 0x4da98b
    uint32_t v675 = v673 ^ v665; // 0x4da98e
    uint32_t v676 = v674 ^ v666; // 0x4da991
    int32_t v677 = v675 / 256 | 0x1000000 * v675; // 0x4da994
    int32_t v678 = v646 + v6 + v629; // 0x4da997
    int32_t v679 = v676 / 256 | 0x1000000 * v676; // 0x4da999
    uint32_t v680 = v678 ^ v639; // 0x4da99c
    int32_t v681 = v677 + v667; // 0x4da99e
    int32_t v682 = v679 + v668; // 0x4da9a1
    int32_t v683 = v680 / 0x10000 | 0x10000 * v680; // 0x4da9a4
    int32_t v684 = v683 + v630; // 0x4da9a7
    uint32_t v685 = v684 ^ v629; // 0x4da9aa
    int32_t v686 = v685 / 0x1000 | 0x100000 * v685; // 0x4da9b5
    int32_t v687 = v678 + v15 + v686; // 0x4da9c3
    *(int32_t *)a6 = v682 ^ v657;
    uint32_t v688 = v682 ^ v672; // 0x4da9c9
    uint32_t v689 = v687 ^ v683; // 0x4da9cf
    *(int32_t *)(a6 + 8) = v660 ^ v674;
    int32_t v690 = v689 / 256 | 0x1000000 * v689; // 0x4da9db
    *(int32_t *)(a6 + 12) = v681 ^ v687;
    int32_t v691 = v690 + v684; // 0x4da9e7
    uint32_t v692 = v691 ^ v686; // 0x4da9ea
    uint32_t v693 = v660 ^ v656; // 0x4da9ed
    *(int32_t *)(a6 + 4) = v673 ^ v691;
    *(int32_t *)(a6 + 16) = v677 ^ (v692 / 128 | 0x2000000 * v692);
    *(int32_t *)(a6 + 20) = (v693 / 128 | 0x2000000 * v693) ^ v679;
    *(int32_t *)(a6 + 28) = (v688 / 128 | 0x2000000 * v688) ^ v659;
    uint32_t v694 = v681 ^ v671; // 0x4daa17
    *(int32_t *)(a6 + 24) = (v694 / 128 | 0x2000000 * v694) ^ v690;
    int64_t v695; // 0x4d9eb0
    *(int32_t *)(a6 + 32) = v682 ^ *(int32_t *)&v695;
    *(int32_t *)(a6 + 36) = v691 ^ *v27;
    *(int32_t *)(a6 + 40) = v660 ^ *v34;
    *(int32_t *)(a6 + 44) = v681 ^ *v31;
    *(int32_t *)(a6 + 48) = v677 ^ *v18;
    uint32_t result = v679 ^ *v20; // 0x4daa49
    *(int32_t *)(a6 + 52) = result;
    *(int32_t *)(a6 + 56) = v690 ^ *v24;
    *(int32_t *)(a6 + 60) = v659 ^ *v22;
    return result;
}

// Address range: 0x4ed250 - 0x4ede78
int64_t ZydisDecoderDecodeOperands(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    if (a1 == 0) {
        // 0x4ed3b5
        int64_t result; // 0x4ed250
        return result;
    }
    // 0x4ed25d
    if (a2 == 0 || a3 == 0) {
        // 0x4ed3b5
        return 0x80100004;
    }
    unsigned char v2 = (char)a5; // 0x4ed295
    if (v2 < 11 != a4 == 0 != v2 != 0) {
        // 0x4ed3b5
        return 0x80100004;
    }
    // 0x4ed2b8
    if (*(char *)(a1 + 8) % 2 != 0) {
        // 0x4ed3b5
        return 0x8010000d;
    }
    unsigned char v3 = *(char *)(a3 + 24); // 0x4ed2c8
    uint64_t v4 = v3 < v2 ? (int64_t)v3 : a5; // 0x4ed2d3
    char v5 = v4; // 0x4ed2d9
    if (v5 == 0) {
        // 0x4ed3b5
        return 0x100000;
    }
    int64_t v6 = function_205e0(a2); // 0x4ed2e1
    *(int64_t *)a4 = 0;
    int64_t v7 = a4 + 8 & -8; // 0x4ed307
    int64_t v8 = 80 * (v4 % 256); // 0x4ed30b
    *(int64_t *)(a4 - 8 + v8) = 0;
    int64_t v9 = a4 - v7; // 0x4ed31c
    v1 = v9;
    __asm_rep_stosq_memset((char *)v7, 0, (v8 + v9) / 8 % 0x20000000);
    char * v10 = (char *)(a2 + 8);
    int32_t * v11 = (int32_t *)(a3 + 72);
    int16_t * v12 = (int16_t *)(a3 + 56);
    char * v13 = (char *)(a2 + 27);
    int32_t v14 = 0; // 0x4ed34e
    int64_t v15 = a4 + 24; // 0x4ed34e
    int64_t v16 = v6; // 0x4ed34e
    int64_t v17 = 0; // 0x4ed34e
    int32_t v18; // 0x4ed250
    int64_t v19; // 0x4ed250
    int16_t v20; // 0x4ed250
    int64_t v21; // 0x4ed250
    int32_t v22; // 0x4ed250
    int32_t v23; // 0x4ed250
    while (true) {
      lab_0x4ed350:
        // 0x4ed350
        v19 = v16;
        v21 = v15;
        v22 = v14;
        *(char *)(v21 - 24) = (char)v17;
        char * v24 = (char *)v19; // 0x4ed354
        *(int32_t *)(v21 - 20) = (int32_t)(*v24 / 64);
        *(char *)(v21 - 16) = *(char *)(v19 + 1) % 16;
        unsigned char v25 = *v24; // 0x4ed36e
        unsigned char v26 = v25 % 64;
        switch (v26) {
            case 2: {
                goto lab_0x4ed9d0;
            }
            case 3: {
                // 0x4ed9a8
                *(int32_t *)(v21 + 8) = 4;
                *(int16_t *)(v21 - 8) = 8;
                *(int64_t *)(v21 + 24) = 1;
                *(int16_t *)(v21 + 16) = 0;
                goto lab_0x4ed70e;
            }
            default: {
                if (v26 == 1) {
                    char v27 = *(char *)(v19 + 9); // 0x4ed38a
                    *(int32_t *)(v21 + 8) = 1;
                    int32_t v28 = *(int32_t *)((int64_t)(4 * v27 & 28) + (int64_t)&g116); // 0x4ed3a1
                    return (int64_t)v28 + (int64_t)&g116;
                }
                int32_t * v29 = (int32_t *)(v21 + 8); // 0x4ed400
                int32_t v30 = *v29; // 0x4ed400
                if (v30 != 0) {
                    switch (v30) {
                        case 2: {
                            // 0x4edb88
                            v1 = (int64_t)*(int32_t *)(a3 + 12);
                            if ((*(char *)(v19 + 12) & 2) == 0) {
                                uint64_t v31 = *(int64_t *)(a3 + 32); // 0x4edbfa
                                if (v31 % 0x2000000001 == 0) {
                                    if (v31 % 0x4000000001 != 0) {
                                        // 0x4edbc0
                                        *(int32_t *)(v21 + 20) = 200;
                                        goto lab_0x4edbc7;
                                    } else {
                                        if (v31 % 0x8000000001 == 0) {
                                            if (v31 % 0x10000000001 == 0) {
                                                if (v31 % 0x20000000001 == 0) {
                                                    if (v31 % 0x40000000001 == 0) {
                                                        goto lab_0x4edb93;
                                                    } else {
                                                        // 0x4edd33
                                                        *(int32_t *)(v21 + 20) = 203;
                                                        goto lab_0x4edbc7;
                                                    }
                                                } else {
                                                    // 0x4edd17
                                                    *(int32_t *)(v21 + 20) = 202;
                                                    goto lab_0x4edbc7;
                                                }
                                            } else {
                                                // 0x4edcff
                                                *(int32_t *)(v21 + 20) = 198;
                                                goto lab_0x4edbc7;
                                            }
                                        } else {
                                            // 0x4edc7a
                                            *(int32_t *)(v21 + 20) = 201;
                                            goto lab_0x4edbc7;
                                        }
                                    }
                                } else {
                                    // 0x4edc03
                                    *(int32_t *)(v21 + 20) = 199;
                                    int32_t v32 = v1; // 0x4edc0a
                                    v18 = v32;
                                    if (v32 != 4) {
                                        goto lab_0x4edbcc;
                                    } else {
                                        goto lab_0x4edc0f;
                                    }
                                }
                            } else {
                                goto lab_0x4edb93;
                            }
                        }
                        case 3: {
                            unsigned char v33 = *(char *)(a3 + 296); // 0x4edb68
                            unsigned char v34 = *(char *)(a3 + 320); // 0x4edb6f
                            v1 = v34;
                            *(int16_t *)(v21 - 8) = (int16_t)v34 + (int16_t)v33;
                            goto lab_0x4ed495;
                        }
                        default: {
                            if (v30 != 4) {
                                uint16_t v35 = *(int16_t *)(v19 + 2 + 2 * (int64_t)*v10); // 0x4ed475
                                int64_t v36; // 0x4ed250
                                if (v35 == 0) {
                                    // 0x4ed667
                                    v36 = function_20710(*(int32_t *)&v1, *(int32_t *)(v21 + 16));
                                } else {
                                    // 0x4ed484
                                    v36 = 8 * (int64_t)v35;
                                }
                                int16_t v37 = v36; // 0x4ed487
                                *(int16_t *)(v21 - 8) = v37;
                                *(int32_t *)(v21 - 4) = 3;
                                *(int16_t *)v21 = v37;
                                goto lab_0x4ed495;
                            } else {
                                goto lab_0x4ed70e;
                            }
                        }
                    }
                } else {
                    unsigned char v38 = *(char *)(v19 + 9) % 64;
                    *(int32_t *)(v21 - 12) = (int32_t)v38;
                    unsigned char v39 = v25 + 60;
                    if (v39 % 64 < 19) {
                        int32_t v40 = *(int32_t *)((int64_t)(4 * v39) + (int64_t)&g117); // 0x4ed43e
                        return (int64_t)v40 + (int64_t)&g117;
                    }
                    char v41 = v25 + 41;
                    if ((v41 & 62) < 10) {
                        int32_t v42 = *(int32_t *)((int64_t)(4 * v41) + (int64_t)&g120); // 0x4edd61
                        return (int64_t)v42 + (int64_t)&g120;
                    }
                    // 0x4edd9c
                    *v29 = 4;
                    int64_t v43 = (int64_t)(24 * (v22 % 256)) + a3;
                    uint64_t v44 = *(int64_t *)(v43 + 288); // 0x4eddb6
                    *(int64_t *)(v21 + 24) = v38 == 5 ? v44 % 16 : v44;
                    uint16_t v45 = *(int16_t *)(v43 + 280); // 0x4edde3
                    v1 = v45;
                    *(int16_t *)(v21 + 16) = v45;
                    v23 = 0x1000000 * v22 + 0x1000000 >> 24;
                    v20 = *(int16_t *)(v19 + 2 + 2 * (int64_t)*v10);
                    goto lab_0x4ed71c;
                }
            }
        }
    }
  lab_0x4ed9d0:
    // 0x4ed9d0
    *(int32_t *)(v21 + 8) = 2;
    *(int32_t *)(v21 + 16) = 1;
    unsigned char v46 = *(char *)(v19 + 9) / 8 % 16;
    int64_t v47 = v46; // 0x4ed9ec
    if (v46 >= 9) {
        v47 = function_20d68();
    }
    int32_t v48 = *(int32_t *)((4 * v47 & 1020) + (int64_t)&g118); // 0x4ed9fc
    return (int64_t)v48 + (int64_t)&g118;
  lab_0x4ed70e:
    // 0x4ed70e
    v23 = v22;
    v20 = *(int16_t *)(v19 + 2 + 2 * (int64_t)*v10);
    goto lab_0x4ed71c;
  lab_0x4ed71c:
    // 0x4ed71c
    *(int16_t *)(v21 - 8) = 8 * v20;
    char v49 = *(char *)(v19 + 8); // 0x4ed720
    int32_t v50 = v23; // 0x4ed72a
    int32_t v51 = v23; // 0x4ed72a
    char v52 = v49; // 0x4ed72a
    if ((v49 & 30) == 0) {
        goto lab_0x4ed4a5;
    } else {
        goto lab_0x4ed730;
    }
  lab_0x4edb93:;
    int32_t * v53 = (int32_t *)(v21 + 20);
    if (*v53 != 0) {
        goto lab_0x4edbc7;
    } else {
        uint32_t v54 = *(int32_t *)(v21 + 24); // 0x4edb9a
        int32_t * v55 = v53; // 0x4edba0
        if (v54 < 59) {
            int32_t * v56 = v53; // 0x4edbb4
            v55 = v53;
            if ((1 << (int64_t)(v54 % 64) & 0x600060006000000) == 0) {
                // 0x4edc7a
                *v55 = 201;
                goto lab_0x4edbc7;
            } else {
                // 0x4edbc0
                *v56 = 200;
                goto lab_0x4edbc7;
            }
        } else {
            // 0x4edc7a
            *v55 = 201;
            goto lab_0x4edbc7;
        }
    }
  lab_0x4ed495:;
    char v57 = *(char *)(v19 + 8); // 0x4ed495
    v50 = v22;
    v51 = v22;
    v52 = v57;
    if ((v57 & 30) != 0) {
        goto lab_0x4ed730;
    } else {
        goto lab_0x4ed4a5;
    }
  lab_0x4ed4a5:;
    int16_t v58 = *(int16_t *)v21; // 0x4ed4a5
    v14 = v50;
    int64_t v59 = 1; // 0x4ed4ab
    int32_t v60 = v50; // 0x4ed4ab
    int16_t v61 = v58; // 0x4ed4ab
    if (v58 != 0) {
        goto lab_0x4ed760;
    } else {
        goto lab_0x4ed4b6;
    }
  lab_0x4ed730:;
    int32_t v62 = v51;
    v1 = v21;
    function_20590((int32_t)(v52 % 32), v21 - 4, v21);
    int16_t * v63 = (int16_t *)v21; // 0x4ed73f
    int16_t v64 = *v63; // 0x4ed73f
    v60 = v62;
    v61 = v64;
    if (v64 != 0) {
        goto lab_0x4ed760;
    } else {
        int16_t v65 = *(int16_t *)(v21 - 8); // 0x4ed747
        *v63 = v65;
        v14 = v62;
        v59 = 1;
        v60 = v62;
        v61 = v65;
        if (v65 == 0) {
            goto lab_0x4ed4b6;
        } else {
            goto lab_0x4ed760;
        }
    }
  lab_0x4edbc7:;
    int32_t v66 = v1; // 0x4edbc7
    v18 = v66;
    if (v66 == 4) {
        goto lab_0x4edc0f;
    } else {
        goto lab_0x4edbcc;
    }
  lab_0x4ed760:;
    int32_t v67 = v60;
    uint16_t v68 = *(int16_t *)(v21 - 8); // 0x4ed760
    v14 = v67;
    v59 = 1;
    if (v68 != 0) {
        // 0x4ed76d
        v14 = v67;
        v59 = 1;
        if (*(int32_t *)(v21 - 4) != 10) {
            // 0x4ed777
            v1 = v68 % v61;
            v14 = v67;
            v59 = v68 / v61;
        }
    }
    goto lab_0x4ed4b6;
  lab_0x4ed4b6:;
    int64_t v69 = v59;
    int64_t v70 = v17 + 1; // 0x4ed4b6
    *(int16_t *)(v21 + 2) = (int16_t)v69;
    v15 = v21 + 80;
    v16 = v19 + 13;
    v17 = v70 & 0xffffffff;
    if (v5 == (char)v70) {
        // 0x4ed4cf
        return *(int32_t *)(a3 + 60) == 2 ? v69 : 0x100000;
    }
    goto lab_0x4ed350;
  lab_0x4edbcc:
    // 0x4edbcc
    if (v18 < 4) {
        // 0x4edbd2
        if (*(int32_t *)(v21 + 16) != 2) {
            goto lab_0x4ed70e;
        } else {
            // 0x4edbdc
            *(int32_t *)(v21 - 4) = 3;
            *(int16_t *)(v21 - 8) = (int16_t)*(char *)(a3 + 23);
            goto lab_0x4ed495;
        }
    } else {
        int16_t v71 = *(int16_t *)(v19 + 2 + 2 * (int64_t)*v10); // 0x4edcc5
        v23 = v22;
        v20 = v71;
        if (v71 == 0) {
            int32_t * v72 = (int32_t *)(a3 + 84); // 0x4edcd4
            uint32_t v73 = *v72; // 0x4edcd4
            uint32_t v74; // 0x4edce8
            if (v73 < 6) {
                // 0x4edcde
                v74 = *(int32_t *)(4 * (int64_t)v73 + (int64_t)&g119);
                return (int64_t)v74 + (int64_t)&g119;
            }
            function_20d68();
            // 0x4edcde
            v74 = *(int32_t *)(4 * (int64_t)*v72 + (int64_t)&g119);
            return (int64_t)v74 + (int64_t)&g119;
        }
        goto lab_0x4ed71c;
    }
  lab_0x4edc0f:;
    int16_t v75 = *(int16_t *)(v19 + 2 + 2 * (int64_t)*v10); // 0x4edc14
    v23 = v22;
    v20 = v75;
    if (v75 != 0) {
        goto lab_0x4ed71c;
    } else {
        char v76 = *(char *)(a2 + 26); // 0x4edc23
        if (v76 == 2) {
            // 0x4ede30
            if (*v11 != 0) {
                // 0x4edc43
                *(int16_t *)(v21 - 8) = (int16_t)*v13;
                goto lab_0x4ed495;
            } else {
                // 0x4ede3b
                *(int16_t *)(v21 - 8) = *v12 / 2;
                goto lab_0x4ed495;
            }
        } else {
            int32_t v77 = *v11;
            if (v76 == 16) {
                if (v77 != 0) {
                    // 0x4edc43
                    *(int16_t *)(v21 - 8) = (int16_t)*v13;
                    goto lab_0x4ed495;
                } else {
                    // 0x4ede1d
                    *(int16_t *)(v21 - 8) = *v12 / 4;
                    goto lab_0x4ed495;
                }
            } else {
                if (v77 == 0) {
                    // 0x4ede6b
                    *(int16_t *)(v21 - 8) = *v12;
                    goto lab_0x4ed495;
                } else {
                    // 0x4edc43
                    *(int16_t *)(v21 - 8) = (int16_t)*v13;
                    goto lab_0x4ed495;
                }
            }
        }
    }
}

// Address range: 0x4ede78 - 0x4edeb4
int64_t function_4ede78(void) {
    // 0x4ede78
    int64_t v1; // 0x4ede78
    int16_t * v2 = (int16_t *)(v1 - 8); // 0x4ede8c
    *v2 = 256;
    *(int32_t *)(v1 - 4) = 3;
    uint32_t v3 = *(int32_t *)(v1 + 72); // 0x4ede93
    int64_t result = v3; // 0x4ede93
    *(int16_t *)v1 = 16;
    if (v3 >= 5) {
        // 0x4ee0c0
        return result;
    }
    // 0x4edea2
    *v2 = 16;
    return result;
}

// Address range: 0x4edeb4 - 0x4edece
int64_t function_4edeb4(void) {
    // 0x4edeb4
    int64_t v1; // 0x4edeb4
    *(int16_t *)(v1 - 8) = 128;
    return 2;
}

// Address range: 0x4edece - 0x4edee8
int64_t function_4edece(void) {
    // 0x4edece
    int64_t v1; // 0x4edece
    *(int16_t *)(v1 - 8) = 128;
    return 3;
}

// Address range: 0x4edee8 - 0x4edf02
int64_t function_4edee8(void) {
    // 0x4edee8
    int64_t v1; // 0x4edee8
    *(int16_t *)(v1 - 8) = 256;
    return 4;
}

// Address range: 0x573920 - 0x5743bc
int64_t function_573920(int64_t a1, int64_t a2) {
    int64_t v1 = function_20730(); // 0x573948
    if (v1 != 0) {
        // 0x573955
        return *(int64_t *)v1;
    }
    // 0x573968
    if ((int64_t)g228 == a2) {
        int64_t v2 = function_4efd30(144, (int64_t)&g200, (int64_t)&g201, -2); // 0x573a85
        *(int32_t *)(v2 + 8) = 0;
        *(int64_t *)(v2 + 16) = 0;
        *(int64_t *)(v2 + 24) = 0;
        *(int16_t *)(v2 + 72) = 0;
        *(char *)(v2 + 32) = 0;
        *(int64_t *)(v2 + 40) = 0;
        *(int64_t *)(v2 + 48) = 0;
        *(int64_t *)v2 = (int64_t)&g199;
        *(int64_t *)(v2 + 56) = 0;
        *(int64_t *)(v2 + 64) = 0;
        *(char *)(v2 + 136) = 0;
        int64_t result = function_4efd30(40, (int64_t)&g200, (int64_t)&g201, -2); // 0x573af5
        *(int32_t *)(result + 8) = 0;
        *(int64_t *)(result + 16) = v2;
        int64_t * v3 = (int64_t *)result; // 0x573b18
        *v3 = (int64_t)&g178;
        function_5681f0(result, 0);
        *(int64_t *)(result + 24) = a1;
        int32_t * v4 = (int32_t *)(a1 + 8);
        *v4 = *v4 + 1;
        *(int64_t *)(result + 32) = v2;
        *v3 = (int64_t)&g202;
        function_5762d0(a1, v2);
        // 0x573955
        return result;
    }
    // 0x573975
    if ((int64_t)g220 == a2) {
        int64_t result2 = function_4efd30(32, (int64_t)&g200, (int64_t)&g201, -2); // 0x573c2d
        *(int32_t *)(result2 + 8) = 0;
        int64_t * v5 = (int64_t *)result2; // 0x573c47
        *v5 = (int64_t)&g177;
        *(int64_t *)(result2 + 16) = function_565f30();
        *(int64_t *)(result2 + 24) = a1;
        int32_t * v6 = (int32_t *)(a1 + 8);
        *v6 = *v6 + 1;
        *v5 = (int64_t)&g203;
        // 0x573955
        return result2;
    }
    // 0x573982
    if ((int64_t)g240 == a2) {
        int64_t result3 = function_4efd30(24, (int64_t)&g200, (int64_t)&g201, -2); // 0x573b75
        *(int32_t *)(result3 + 8) = 0;
        *(int64_t *)(result3 + 16) = a1;
        int64_t * v7 = (int64_t *)result3; // 0x573b9b
        *v7 = (int64_t)&g184;
        int32_t * v8 = (int32_t *)(a1 + 8);
        *v8 = *v8 + 1;
        *v7 = (int64_t)&g210;
        // 0x573955
        return result3;
    }
    // 0x57398f
    if ((int64_t)g229 == a2) {
        int64_t result4 = function_4efd30(24, (int64_t)&g200, (int64_t)&g201, -2); // 0x573c85
        *(int32_t *)(result4 + 8) = 0;
        *(int64_t *)(result4 + 16) = a1;
        int64_t * v9 = (int64_t *)result4; // 0x573cab
        *v9 = (int64_t)&g182;
        int32_t * v10 = (int32_t *)(a1 + 8);
        *v10 = *v10 + 1;
        *v9 = (int64_t)&g150;
        // 0x573955
        return result4;
    }
    // 0x57399c
    if ((int64_t)g225 == a2) {
        int64_t result5 = function_4efd30(24, (int64_t)&g200, (int64_t)&g201, -2); // 0x573cd5
        *(int32_t *)(result5 + 8) = 0;
        *(int64_t *)(result5 + 16) = a1;
        int64_t * v11 = (int64_t *)result5; // 0x573cfb
        *v11 = (int64_t)&g183;
        int32_t * v12 = (int32_t *)(a1 + 8);
        *v12 = *v12 + 1;
        *v11 = (int64_t)&g151;
        // 0x573955
        return result5;
    }
    // 0x5739a9
    if (*(int64_t *)0x848ce0 == a2) {
        int64_t v13 = function_4efd30(112, (int64_t)&g200, (int64_t)&g201, -2); // 0x573d35
        *(int32_t *)(v13 + 8) = 0;
        *(int64_t *)(v13 + 16) = 0;
        *(int16_t *)(v13 + 33) = 0;
        *(int64_t *)(v13 + 24) = 0;
        *(char *)(v13 + 32) = 0;
        *(int64_t *)(v13 + 40) = 0;
        *(int64_t *)v13 = (int64_t)&g165;
        *(int64_t *)(v13 + 48) = 0;
        *(int64_t *)(v13 + 56) = 0;
        *(int64_t *)(v13 + 64) = 0;
        *(int64_t *)(v13 + 72) = 0;
        *(int64_t *)(v13 + 80) = 0;
        *(int64_t *)(v13 + 88) = 0;
        *(int32_t *)(v13 + 96) = 0;
        *(char *)(v13 + 111) = 0;
        int64_t result6 = function_4efd30(40, 0, (int64_t)&g201, -2); // 0x573dc6
        *(int32_t *)(result6 + 8) = 0;
        *(int64_t *)(result6 + 16) = v13;
        int64_t * v14 = (int64_t *)result6; // 0x573deb
        *v14 = (int64_t)&g179;
        function_569370(result6, 0, 0);
        *(int64_t *)(result6 + 24) = a1;
        int32_t * v15 = (int32_t *)(a1 + 8);
        *v15 = *v15 + 1;
        *(int64_t *)(result6 + 32) = v13;
        *v14 = (int64_t)&g204;
        function_576a20(a1, v13);
        // 0x573955
        return result6;
    }
    // 0x5739b6
    if ((int64_t)g242 == a2) {
        int64_t v16 = function_4efd30(112, (int64_t)&g200, (int64_t)&g201, -2); // 0x573e4d
        *(int32_t *)(v16 + 8) = 0;
        *(int64_t *)(v16 + 16) = 0;
        *(int64_t *)(v16 + 24) = 0;
        *(char *)(v16 + 32) = 0;
        *(int16_t *)(v16 + 33) = 0;
        *(int64_t *)(v16 + 40) = 0;
        *(int64_t *)v16 = (int64_t)&g166;
        *(int64_t *)(v16 + 48) = 0;
        *(int64_t *)(v16 + 56) = 0;
        *(int64_t *)(v16 + 64) = 0;
        *(int64_t *)(v16 + 72) = 0;
        *(int64_t *)(v16 + 80) = 0;
        *(int64_t *)(v16 + 88) = 0;
        *(int32_t *)(v16 + 96) = 0;
        *(char *)(v16 + 111) = 0;
        int64_t result7 = function_4efd30(40, (int64_t)&g200, (int64_t)&g201, 0); // 0x573ede
        *(int32_t *)(result7 + 8) = 0;
        *(int64_t *)(result7 + 16) = v16;
        int64_t * v17 = (int64_t *)result7; // 0x573f03
        *v17 = (int64_t)&g180;
        function_569910(result7, 0, 0);
        *(int64_t *)(result7 + 24) = a1;
        int32_t * v18 = (int32_t *)(a1 + 8);
        *v18 = *v18 + 1;
        *(int64_t *)(result7 + 32) = v16;
        *v17 = (int64_t)&g205;
        function_576d70(a1, v16);
        // 0x573955
        return result7;
    }
    // 0x5739c3
    if ((int64_t)g239 == a2) {
        int64_t result8 = function_4efd30(40, (int64_t)&g200, (int64_t)&g201, -2); // 0x573f65
        function_523ad0(result8, 0);
        *(int64_t *)(result8 + 32) = a1;
        int32_t * v19 = (int32_t *)(a1 + 8);
        *v19 = *v19 + 1;
        *(int64_t *)result8 = (int64_t)&g152;
        // 0x573955
        return result8;
    }
    // 0x5739d0
    if ((int64_t)g238 == a2) {
        int64_t v20 = function_4efd30(336, (int64_t)&g200, (int64_t)&g201, -2); // 0x573fb5
        *(int32_t *)(v20 + 8) = 0;
        *(int64_t *)(v20 + 16) = 0;
        *(int64_t *)(v20 + 24) = 0;
        *(char *)(v20 + 32) = 0;
        *(int64_t *)(v20 + 40) = 0;
        *(int64_t *)(v20 + 48) = 0;
        *(int64_t *)(v20 + 56) = 0;
        *(int64_t *)v20 = (int64_t)&g176;
        *(int64_t *)(v20 + 64) = 0;
        *(int64_t *)(v20 + 72) = 0;
        *(char *)(v20 + 328) = 0;
        int64_t result9 = function_4efd30(40, (int64_t)&g200, (int64_t)&g201, -2); // 0x574026
        *(int32_t *)(result9 + 8) = 0;
        *(int64_t *)(result9 + 16) = v20;
        int64_t * v21 = (int64_t *)result9; // 0x574049
        *v21 = (int64_t)&g186;
        function_568500(result9, 0);
        *(int64_t *)(result9 + 24) = a1;
        int32_t * v22 = (int32_t *)(a1 + 8);
        *v22 = *v22 + 1;
        *(int64_t *)(result9 + 32) = v20;
        *v21 = (int64_t)&g206;
        function_576550(a1, v20);
        // 0x573955
        return result9;
    }
    // 0x5739dd
    if ((int64_t)g231 == a2) {
        int64_t result10 = function_4efd30(32, (int64_t)&g200, (int64_t)&g201, -2); // 0x573bd5
        *(int32_t *)(result10 + 8) = 0;
        int64_t * v23 = (int64_t *)result10; // 0x573bef
        *v23 = (int64_t)&g185;
        *(int64_t *)(result10 + 16) = function_565f30();
        *(int64_t *)(result10 + 24) = a1;
        int32_t * v24 = (int32_t *)(a1 + 8);
        *v24 = *v24 + 1;
        *v23 = (int64_t)&g207;
        // 0x573955
        return result10;
    }
    // 0x5739ea
    if ((int64_t)g227 == a2) {
        int64_t result11 = function_4efd30(24, (int64_t)&g200, (int64_t)&g201, -2); // 0x5740b3
        *(int32_t *)(result11 + 8) = 0;
        *(int64_t *)(result11 + 16) = a1;
        int64_t * v25 = (int64_t *)result11; // 0x5740d9
        *v25 = (int64_t)&g191;
        int32_t * v26 = (int32_t *)(a1 + 8);
        *v26 = *v26 + 1;
        *v25 = (int64_t)&g211;
        // 0x573955
        return result11;
    }
    // 0x5739f7
    int64_t result12; // 0x573920
    if ((int64_t)g233 == a2) {
        int64_t v27 = function_4efd30(24, (int64_t)&g200, (int64_t)&g201, -2); // 0x574106
        *(int32_t *)(v27 + 8) = 0;
        *(int64_t *)(v27 + 16) = a1;
        int64_t * v28 = (int64_t *)v27; // 0x57412c
        *v28 = (int64_t)&g189;
        int32_t * v29 = (int32_t *)(a1 + 8);
        *v29 = *v29 + 1;
        result12 = (int64_t)&g189;
        if (g246 != 0) {
            // 0x574135
            *v28 = (int64_t)&g153;
            result12 = v27;
        }
        // 0x573955
        return result12;
    }
    // 0x573a04
    if ((int64_t)g248 == a2) {
        int64_t v30 = function_4efd30(24, (int64_t)&g200, (int64_t)&g201, -2); // 0x57414f
        *(int32_t *)(v30 + 8) = 0;
        *(int64_t *)(v30 + 16) = a1;
        int64_t * v31 = (int64_t *)v30; // 0x574175
        *v31 = (int64_t)&g190;
        result12 = (int64_t)&g190;
        if (g246 != 0) {
            int32_t * v32 = (int32_t *)(a1 + 8); // 0x57417e
            *v32 = *v32 + 1;
            *v31 = (int64_t)&g154;
            result12 = v30;
        }
        // 0x573955
        return result12;
    }
    // 0x573a11
    if ((int64_t)g237 == a2) {
        int64_t v33 = function_4efd30(160, (int64_t)&g200, (int64_t)&g201, -2); // 0x5741ac
        *(int32_t *)(v33 + 8) = 0;
        *(int64_t *)(v33 + 16) = 0;
        *(int64_t *)(v33 + 24) = 0;
        *(char *)(v33 + 32) = 0;
        *(int64_t *)(v33 + 36) = 0;
        *(int64_t *)(v33 + 48) = 0;
        *(int64_t *)(v33 + 56) = 0;
        *(int64_t *)v33 = (int64_t)&g167;
        *(int64_t *)(v33 + 64) = 0;
        *(int64_t *)(v33 + 72) = 0;
        *(int64_t *)(v33 + 80) = 0;
        *(int64_t *)(v33 + 88) = 0;
        *(int64_t *)(v33 + 96) = 0;
        *(int32_t *)(v33 + 104) = 0;
        *(char *)(v33 + 152) = 0;
        int64_t v34 = function_4efd30(40, (int64_t)&g200, (int64_t)&g201, -2); // 0x574241
        *(int32_t *)(v34 + 8) = 0;
        *(int64_t *)(v34 + 16) = v33;
        int64_t * v35 = (int64_t *)v34; // 0x574266
        *v35 = (int64_t)&g187;
        int64_t v36 = function_56a0d0(v34, 0, 0); // 0x574269
        *(int64_t *)(v34 + 24) = a1;
        result12 = v36;
        if (g246 != 0) {
            int32_t * v37 = (int32_t *)(a1 + 8); // 0x574280
            *v37 = *v37 + 1;
            *(int64_t *)(v34 + 32) = v33;
            *v35 = (int64_t)&g208;
            function_5770c0(a1, v33);
            result12 = v34;
        }
        // 0x573955
        return result12;
    }
    // 0x573a1e
    if ((int64_t)g232 == a2) {
        int64_t v38 = function_4efd30(160, (int64_t)&g200, (int64_t)&g201, -2); // 0x5742b1
        *(int32_t *)(v38 + 8) = 0;
        *(int64_t *)(v38 + 16) = 0;
        *(int64_t *)(v38 + 24) = 0;
        *(char *)(v38 + 32) = 0;
        *(int64_t *)(v38 + 36) = 0;
        *(int64_t *)(v38 + 48) = 0;
        *(int64_t *)(v38 + 56) = 0;
        *(int64_t *)v38 = (int64_t)&g168;
        *(int64_t *)(v38 + 64) = 0;
        *(int64_t *)(v38 + 72) = 0;
        *(int64_t *)(v38 + 80) = 0;
        *(int64_t *)(v38 + 88) = 0;
        *(int64_t *)(v38 + 96) = 0;
        *(int32_t *)(v38 + 104) = 0;
        *(char *)(v38 + 152) = 0;
        int64_t v39 = function_4efd30(40, (int64_t)&g200, (int64_t)&g201, -2); // 0x574346
        *(int32_t *)(v39 + 8) = 0;
        *(int64_t *)(v39 + 16) = v38;
        int64_t * v40 = (int64_t *)v39; // 0x57436b
        *v40 = (int64_t)&g188;
        int64_t v41 = function_56a740(v39, 0, 0); // 0x57436e
        *(int64_t *)(v39 + 24) = a1;
        result12 = v41;
        if (g246 != 0) {
            int32_t * v42 = (int32_t *)(a1 + 8); // 0x574381
            *v42 = *v42 + 1;
            *(int64_t *)(v39 + 32) = v38;
            *v40 = (int64_t)&g209;
            function_577490(a1, v38);
            result12 = v39;
        }
    } else {
        // 0x573a2b
        result12 = 0;
        if ((int64_t)g247 == a2) {
            int64_t v43 = function_4efd30(40, (int64_t)&g200, (int64_t)&g201, -2); // 0x573a3d
            function_536e00(v43, 0);
            *(int64_t *)(v43 + 32) = a1;
            int32_t * v44 = (int32_t *)(a1 + 8);
            *v44 = *v44 + 1;
            *(int64_t *)v43 = (int64_t)&g155;
            result12 = v43;
        }
    }
    // 0x573955
    return result12;
}

// Address range: 0x5784e0 - 0x578f7c
int64_t function_5784e0(int64_t a1, int64_t a2) {
    int64_t v1 = function_20730(); // 0x578508
    if (v1 != 0) {
        // 0x578515
        return *(int64_t *)v1;
    }
    // 0x578528
    if ((int64_t)g236 == a2) {
        int64_t v2 = function_4efd30(144, (int64_t)&g200, (int64_t)&g201, -2); // 0x578645
        *(int32_t *)(v2 + 8) = 0;
        *(int64_t *)(v2 + 16) = 0;
        *(int64_t *)(v2 + 24) = 0;
        *(int16_t *)(v2 + 72) = 0;
        *(char *)(v2 + 32) = 0;
        *(int64_t *)(v2 + 40) = 0;
        *(int64_t *)(v2 + 48) = 0;
        *(int64_t *)v2 = (int64_t)&g199;
        *(int64_t *)(v2 + 56) = 0;
        *(int64_t *)(v2 + 64) = 0;
        *(char *)(v2 + 136) = 0;
        int64_t result = function_4efd30(40, (int64_t)&g200, (int64_t)&g201, -2); // 0x5786b5
        *(int32_t *)(result + 8) = 0;
        *(int64_t *)(result + 16) = v2;
        int64_t * v3 = (int64_t *)result; // 0x5786d8
        *v3 = (int64_t)&g193;
        function_56afb0(result, 0);
        *(int64_t *)(result + 24) = a1;
        int32_t * v4 = (int32_t *)(a1 + 8);
        *v4 = *v4 + 1;
        *(int64_t *)(result + 32) = v2;
        *v3 = (int64_t)&g212;
        function_5720a0(a1, v2);
        // 0x578515
        return result;
    }
    // 0x578535
    if ((int64_t)g241 == a2) {
        int64_t result2 = function_4efd30(32, (int64_t)&g200, (int64_t)&g201, -2); // 0x5787ed
        *(int32_t *)(result2 + 8) = 0;
        int64_t * v5 = (int64_t *)result2; // 0x578807
        *v5 = (int64_t)&g192;
        *(int64_t *)(result2 + 16) = function_565f30();
        *(int64_t *)(result2 + 24) = a1;
        int32_t * v6 = (int32_t *)(a1 + 8);
        *v6 = *v6 + 1;
        *v5 = (int64_t)&g213;
        // 0x578515
        return result2;
    }
    // 0x578542
    if ((int64_t)g235 == a2) {
        int64_t result3 = function_4efd30(24, (int64_t)&g200, (int64_t)&g201, -2); // 0x578735
        *(int32_t *)(result3 + 8) = 0;
        *(int64_t *)(result3 + 16) = a1;
        int64_t * v7 = (int64_t *)result3; // 0x57875b
        *v7 = (int64_t)&g198;
        int32_t * v8 = (int32_t *)(a1 + 8);
        *v8 = *v8 + 1;
        *v7 = (int64_t)&g162;
        // 0x578515
        return result3;
    }
    // 0x57854f
    if ((int64_t)g249 == a2) {
        int64_t result4 = function_4efd30(24, (int64_t)&g200, (int64_t)&g201, -2); // 0x578845
        *(int32_t *)(result4 + 8) = 0;
        *(int64_t *)(result4 + 16) = a1;
        int64_t * v9 = (int64_t *)result4; // 0x57886b
        *v9 = (int64_t)&g196;
        int32_t * v10 = (int32_t *)(a1 + 8);
        *v10 = *v10 + 1;
        *v9 = (int64_t)&g156;
        // 0x578515
        return result4;
    }
    // 0x57855c
    if ((int64_t)g226 == a2) {
        int64_t result5 = function_4efd30(24, (int64_t)&g200, (int64_t)&g201, -2); // 0x578895
        *(int32_t *)(result5 + 8) = 0;
        *(int64_t *)(result5 + 16) = a1;
        int64_t * v11 = (int64_t *)result5; // 0x5788bb
        *v11 = (int64_t)&g197;
        int32_t * v12 = (int32_t *)(a1 + 8);
        *v12 = *v12 + 1;
        *v11 = (int64_t)&g157;
        // 0x578515
        return result5;
    }
    // 0x578569
    if ((int64_t)g243 == a2) {
        int64_t v13 = function_4efd30(112, (int64_t)&g200, (int64_t)&g201, -2); // 0x5788f5
        *(int32_t *)(v13 + 8) = 0;
        *(int64_t *)(v13 + 16) = 0;
        *(int16_t *)(v13 + 33) = 0;
        *(int64_t *)(v13 + 24) = 0;
        *(char *)(v13 + 32) = 0;
        *(int64_t *)(v13 + 40) = 0;
        *(int64_t *)v13 = (int64_t)&g165;
        *(int64_t *)(v13 + 48) = 0;
        *(int64_t *)(v13 + 56) = 0;
        *(int64_t *)(v13 + 64) = 0;
        *(int64_t *)(v13 + 72) = 0;
        *(int64_t *)(v13 + 80) = 0;
        *(int64_t *)(v13 + 88) = 0;
        *(int32_t *)(v13 + 96) = 0;
        *(char *)(v13 + 111) = 0;
        int64_t result6 = function_4efd30(40, 0, (int64_t)&g201, -2); // 0x578986
        *(int32_t *)(result6 + 8) = 0;
        *(int64_t *)(result6 + 16) = v13;
        int64_t * v14 = (int64_t *)result6; // 0x5789ab
        *v14 = (int64_t)&g194;
        function_4f3410(result6, 0, 0);
        *(int64_t *)(result6 + 24) = a1;
        int32_t * v15 = (int32_t *)(a1 + 8);
        *v15 = *v15 + 1;
        *(int64_t *)(result6 + 32) = v13;
        *v14 = (int64_t)&g214;
        function_5725b0(a1, v13);
        // 0x578515
        return result6;
    }
    // 0x578576
    if ((int64_t)g223 == a2) {
        int64_t v16 = function_4efd30(112, (int64_t)&g200, (int64_t)&g201, -2); // 0x578a0d
        *(int32_t *)(v16 + 8) = 0;
        *(int64_t *)(v16 + 16) = 0;
        *(int64_t *)(v16 + 24) = 0;
        *(char *)(v16 + 32) = 0;
        *(int16_t *)(v16 + 33) = 0;
        *(int64_t *)(v16 + 40) = 0;
        *(int64_t *)v16 = (int64_t)&g166;
        *(int64_t *)(v16 + 48) = 0;
        *(int64_t *)(v16 + 56) = 0;
        *(int64_t *)(v16 + 64) = 0;
        *(int64_t *)(v16 + 72) = 0;
        *(int64_t *)(v16 + 80) = 0;
        *(int64_t *)(v16 + 88) = 0;
        *(int32_t *)(v16 + 96) = 0;
        *(char *)(v16 + 111) = 0;
        int64_t result7 = function_4efd30(40, (int64_t)&g200, (int64_t)&g201, 0); // 0x578a9e
        *(int32_t *)(result7 + 8) = 0;
        *(int64_t *)(result7 + 16) = v16;
        int64_t * v17 = (int64_t *)result7; // 0x578ac3
        *v17 = (int64_t)&g195;
        function_4f39b0(result7, 0, 0);
        *(int64_t *)(result7 + 24) = a1;
        int32_t * v18 = (int32_t *)(a1 + 8);
        *v18 = *v18 + 1;
        *(int64_t *)(result7 + 32) = v16;
        *v17 = (int64_t)&g215;
        function_5727c0(a1, v16);
        // 0x578515
        return result7;
    }
    // 0x578583
    if ((int64_t)g234 == a2) {
        int64_t result8 = function_4efd30(40, (int64_t)&g200, (int64_t)&g201, -2); // 0x578b25
        function_554420(result8, 0);
        *(int64_t *)(result8 + 32) = a1;
        int32_t * v19 = (int32_t *)(a1 + 8);
        *v19 = *v19 + 1;
        *(int64_t *)result8 = (int64_t)&g158;
        // 0x578515
        return result8;
    }
    // 0x578590
    if ((int64_t)g244 == a2) {
        int64_t v20 = function_4efd30(336, (int64_t)&g200, (int64_t)&g201, -2); // 0x578b75
        *(int32_t *)(v20 + 8) = 0;
        *(int64_t *)(v20 + 16) = 0;
        *(int64_t *)(v20 + 24) = 0;
        *(char *)(v20 + 32) = 0;
        *(int64_t *)(v20 + 40) = 0;
        *(int64_t *)(v20 + 48) = 0;
        *(int64_t *)(v20 + 56) = 0;
        *(int64_t *)v20 = (int64_t)&g176;
        *(int64_t *)(v20 + 64) = 0;
        *(int64_t *)(v20 + 72) = 0;
        *(char *)(v20 + 328) = 0;
        int64_t result9 = function_4efd30(40, (int64_t)&g200, (int64_t)&g201, -2); // 0x578be6
        *(int32_t *)(result9 + 8) = 0;
        *(int64_t *)(result9 + 16) = v20;
        int64_t * v21 = (int64_t *)result9; // 0x578c09
        *v21 = (int64_t)&g170;
        function_56b2c0(result9, 0);
        *(int64_t *)(result9 + 24) = a1;
        int32_t * v22 = (int32_t *)(a1 + 8);
        *v22 = *v22 + 1;
        *(int64_t *)(result9 + 32) = v20;
        *v21 = (int64_t)&g216;
        function_572230(a1, v20);
        // 0x578515
        return result9;
    }
    // 0x57859d
    if ((int64_t)g222 == a2) {
        int64_t result10 = function_4efd30(32, (int64_t)&g200, (int64_t)&g201, -2); // 0x578795
        *(int32_t *)(result10 + 8) = 0;
        int64_t * v23 = (int64_t *)result10; // 0x5787af
        *v23 = (int64_t)&g169;
        *(int64_t *)(result10 + 16) = function_565f30();
        *(int64_t *)(result10 + 24) = a1;
        int32_t * v24 = (int32_t *)(a1 + 8);
        *v24 = *v24 + 1;
        *v23 = (int64_t)&g217;
        // 0x578515
        return result10;
    }
    // 0x5785aa
    if ((int64_t)g251 == a2) {
        int64_t result11 = function_4efd30(24, (int64_t)&g200, (int64_t)&g201, -2); // 0x578c73
        *(int32_t *)(result11 + 8) = 0;
        *(int64_t *)(result11 + 16) = a1;
        int64_t * v25 = (int64_t *)result11; // 0x578c99
        *v25 = (int64_t)&g175;
        int32_t * v26 = (int32_t *)(a1 + 8);
        *v26 = *v26 + 1;
        *v25 = (int64_t)&g163;
        // 0x578515
        return result11;
    }
    // 0x5785b7
    int64_t result12; // 0x5784e0
    if ((int64_t)g245 == a2) {
        int64_t v27 = function_4efd30(24, (int64_t)&g200, (int64_t)&g201, -2); // 0x578cc6
        *(int32_t *)(v27 + 8) = 0;
        *(int64_t *)(v27 + 16) = a1;
        int64_t * v28 = (int64_t *)v27; // 0x578cec
        *v28 = (int64_t)&g173;
        int32_t * v29 = (int32_t *)(a1 + 8);
        *v29 = *v29 + 1;
        result12 = (int64_t)&g173;
        if (g246 != 0) {
            // 0x578cf5
            *v28 = (int64_t)&g159;
            result12 = v27;
        }
        // 0x578515
        return result12;
    }
    // 0x5785c4
    if ((int64_t)g250 == a2) {
        int64_t v30 = function_4efd30(24, (int64_t)&g200, (int64_t)&g201, -2); // 0x578d0f
        *(int32_t *)(v30 + 8) = 0;
        *(int64_t *)(v30 + 16) = a1;
        int64_t * v31 = (int64_t *)v30; // 0x578d35
        *v31 = (int64_t)&g174;
        result12 = (int64_t)&g174;
        if (g246 != 0) {
            int32_t * v32 = (int32_t *)(a1 + 8); // 0x578d3e
            *v32 = *v32 + 1;
            *v31 = (int64_t)&g160;
            result12 = v30;
        }
        // 0x578515
        return result12;
    }
    // 0x5785d1
    if ((int64_t)g224 == a2) {
        int64_t v33 = function_4efd30(160, (int64_t)&g200, (int64_t)&g201, -2); // 0x578d6c
        *(int32_t *)(v33 + 8) = 0;
        *(int64_t *)(v33 + 16) = 0;
        *(int64_t *)(v33 + 24) = 0;
        *(char *)(v33 + 32) = 0;
        *(int64_t *)(v33 + 36) = 0;
        *(int64_t *)(v33 + 48) = 0;
        *(int64_t *)(v33 + 56) = 0;
        *(int64_t *)v33 = (int64_t)&g167;
        *(int64_t *)(v33 + 64) = 0;
        *(int64_t *)(v33 + 72) = 0;
        *(int64_t *)(v33 + 80) = 0;
        *(int64_t *)(v33 + 88) = 0;
        *(int64_t *)(v33 + 96) = 0;
        *(int32_t *)(v33 + 104) = 0;
        *(char *)(v33 + 152) = 0;
        int64_t v34 = function_4efd30(40, (int64_t)&g200, (int64_t)&g201, -2); // 0x578e01
        *(int32_t *)(v34 + 8) = 0;
        *(int64_t *)(v34 + 16) = v33;
        int64_t * v35 = (int64_t *)v34; // 0x578e26
        *v35 = (int64_t)&g171;
        int64_t v36 = function_4f4170(v34, 0, 0); // 0x578e29
        *(int64_t *)(v34 + 24) = a1;
        result12 = v36;
        if (g246 != 0) {
            int32_t * v37 = (int32_t *)(a1 + 8); // 0x578e40
            *v37 = *v37 + 1;
            *(int64_t *)(v34 + 32) = v33;
            *v35 = (int64_t)&g218;
            function_5729d0(a1, v33);
            result12 = v34;
        }
        // 0x578515
        return result12;
    }
    // 0x5785de
    if ((int64_t)g230 == a2) {
        int64_t v38 = function_4efd30(160, (int64_t)&g200, (int64_t)&g201, -2); // 0x578e71
        *(int32_t *)(v38 + 8) = 0;
        *(int64_t *)(v38 + 16) = 0;
        *(int64_t *)(v38 + 24) = 0;
        *(char *)(v38 + 32) = 0;
        *(int64_t *)(v38 + 36) = 0;
        *(int64_t *)(v38 + 48) = 0;
        *(int64_t *)(v38 + 56) = 0;
        *(int64_t *)v38 = (int64_t)&g168;
        *(int64_t *)(v38 + 64) = 0;
        *(int64_t *)(v38 + 72) = 0;
        *(int64_t *)(v38 + 80) = 0;
        *(int64_t *)(v38 + 88) = 0;
        *(int64_t *)(v38 + 96) = 0;
        *(int32_t *)(v38 + 104) = 0;
        *(char *)(v38 + 152) = 0;
        int64_t v39 = function_4efd30(40, (int64_t)&g200, (int64_t)&g201, -2); // 0x578f06
        *(int32_t *)(v39 + 8) = 0;
        *(int64_t *)(v39 + 16) = v38;
        int64_t * v40 = (int64_t *)v39; // 0x578f2b
        *v40 = (int64_t)&g172;
        int64_t v41 = function_4f47e0(v39, 0, 0); // 0x578f2e
        *(int64_t *)(v39 + 24) = a1;
        result12 = v41;
        if (g246 != 0) {
            int32_t * v42 = (int32_t *)(a1 + 8); // 0x578f41
            *v42 = *v42 + 1;
            *(int64_t *)(v39 + 32) = v38;
            *v40 = (int64_t)&g219;
            function_572c50(a1, v38);
            result12 = v39;
        }
    } else {
        // 0x5785eb
        result12 = 0;
        if ((int64_t)g221 == a2) {
            int64_t v43 = function_4efd30(40, (int64_t)&g200, (int64_t)&g201, -2); // 0x5785fd
            function_50a420(v43, 0);
            *(int64_t *)(v43 + 32) = a1;
            int32_t * v44 = (int32_t *)(a1 + 8);
            *v44 = *v44 + 1;
            *(int64_t *)v43 = (int64_t)&g161;
            result12 = v43;
        }
    }
    // 0x578515
    return result12;
}
