/*
 * Targeted RetDec C for native executable gap queue batch 170.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4cdef0-0x4ce437 rank=58 name=fcn.004cdef0 kind=r2_discovered bytes=1351 uncovered=1351
 *   0x4c53c0-0x4c5904 rank=59 name=fcn.004c53c0 kind=r2_discovered bytes=1348 uncovered=1348
 *   0x5a9e4-0x5af26 rank=60 name=fcn.0005a9e4 kind=r2_discovered bytes=1346 uncovered=1346
 *   0x4c3b30-0x4c4072 rank=61 name=fcn.004c3b30 kind=r2_discovered bytes=1346 uncovered=1346
 *   0x57b480-0x57b9b4 rank=62 name=fcn.0057b480 kind=r2_discovered bytes=1332 uncovered=1332
 *   0x3d788-0x3dcac rank=63 name=fcn.0003d788 kind=r2_discovered bytes=1316 uncovered=1316
 *   0x4f0eb0-0x4f13b6 rank=64 name=fcn.004f0eb0 kind=r2_discovered bytes=1286 uncovered=1286
 *   0x50b7d0-0x50bcce rank=65 name=fcn.0050b7d0 kind=r2_discovered bytes=1278 uncovered=1278
 *   0x50bde0-0x50c2de rank=66 name=fcn.0050bde0 kind=r2_discovered bytes=1278 uncovered=1278
 *   0x625dc-0x62ad7 rank=67 name=fcn.000625dc kind=r2_discovered bytes=1275 uncovered=1275
 *   0x5574b0-0x5579aa rank=68 name=fcn.005574b0 kind=r2_discovered bytes=1274 uncovered=1274
 *   0x4ae220-0x4ae718 rank=69 name=fcn.004ae220 kind=r2_discovered bytes=1272 uncovered=1272
 *   0x4b3cf0-0x4b41e8 rank=70 name=fcn.004b3cf0 kind=r2_discovered bytes=1272 uncovered=1272
 *   0x4ae720-0x4aec13 rank=71 name=fcn.004ae720 kind=r2_discovered bytes=1267 uncovered=1267
 *   0x557b60-0x55804f rank=72 name=fcn.00557b60 kind=r2_discovered bytes=1263 uncovered=1263
 *   0x564652-0x564b56 rank=73 name=fcn.00564652 kind=r2_discovered bytes=1284 uncovered=1262
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
extern int g50;
extern int g51;
extern int64_t Hash_constant_words_K_for_SHA_384_and_SHA_512_at_598800;
int64_t entry_point();
unsigned char llvm_ctpop_i8(unsigned char value);
uint16_t llvm_bswap_i16(uint16_t value);
void __asm_int(int32_t interrupt);
int64_t __asm_int1();
int64_t __asm_int3(void);
int32_t __asm_in(uint16_t port);
int32_t __asm_in_133(uint16_t port);
int32_t __asm_in_134(uint16_t port);
char __asm_in_136(uint16_t port);
char __asm_insb(uint16_t port);
int32_t __asm_insd(uint16_t port);
void __asm_out(uint16_t port, char value);
void __asm_out_133(uint16_t port, int32_t value);
void __asm_out_135(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint64_t __readfsqword(int64_t offset);
uint8_t __readgsbyte(int64_t offset);
uint32_t __readgsdword(int64_t offset);
uint64_t __readgsqword(int64_t offset);
int64_t __asm_iretd();
int64_t __asm_sti(int64_t value, ...);
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
int64_t __asm_hlt(void);
int64_t __asm_mfence();
void __asm_wait(void);
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
int128_t __asm_movss(int32_t value);
int64_t __asm_movss_133(int128_t value);
int128_t __asm_movdqa(int128_t value);
void __asm_movq(int64_t value, int128_t dst);
int128_t __asm_aesimc(int128_t value);
int128_t __asm_aeskeygenassist(int128_t value, int imm);
int128_t __asm_movdqu(int128_t value);
int128_t __asm_movdqu_133(int128_t value);
int128_t __asm_movapd(int128_t value);
int128_t __asm_andpd(int128_t left, int128_t right);
int128_t __asm_andnpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_por(int128_t left, int128_t right);
int128_t __asm_pxor(int128_t left, int128_t right);
int128_t __asm_xorps(int128_t left, int128_t right);
int128_t __asm_cmpnlesd(int128_t left, int128_t right);
int128_t __asm_cvtsi2sd(int64_t value);
int128_t __asm_subsd(int128_t left, int128_t right);
int64_t __asm_cvttsd2si(int128_t value);
void __asm_ucomisd(int128_t left, int128_t right);
void __asm_ucomiss(int128_t left, int64_t right);
void __asm_ucomiss_134(int128_t left, int128_t right);
int128_t __asm_movups();
void __asm_movups_133();
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
int64_t memset2(void *s, int c, size_t n);
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

int64_t function_1fcc0();
int64_t function_1fd40();
int64_t function_208a0();
int64_t function_20a50();
int64_t function_24e1e();
int64_t function_2508e();
int64_t function_2509a();
int64_t function_250b0();
int64_t function_254fe();
int64_t function_255da();
int64_t function_25622();
int64_t function_2562c();
int64_t function_256ba();
int64_t function_259ce();
int64_t function_25c34();
int64_t function_25cec();
int64_t function_27bbe();
int64_t function_29c3a();
int64_t function_29d10();
int64_t function_35c52();
int64_t function_35ef6();
int64_t function_360a0();
int64_t function_36840();
int64_t function_36966();
int64_t function_36b3c();
int64_t function_36cda();
int64_t function_380a0();
int64_t function_3aeea();
int64_t function_3d42c();
int64_t function_3d788(int64_t a1, int64_t a2, int64_t a3);
int64_t function_451f2();
int64_t function_455ee();
int64_t function_48e347();
int64_t function_48e641();
int64_t function_48eb2b();
int64_t function_4a8c6();
int64_t function_4ae220(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4ae720(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4afe70();
int64_t function_4aff10();
int64_t function_4aff90();
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4b0ac0();
int64_t function_4b0d80();
int64_t function_4b0df0();
int64_t function_4b0f10();
int64_t function_4b0fa0();
int64_t function_4b0fc0();
int64_t function_4b1220();
int64_t function_4b1590();
int64_t function_4b1680();
int64_t function_4b1900();
int64_t function_4b19a0();
int64_t function_4b26c0();
int64_t function_4b36d0();
int64_t function_4b3cf0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b6b10();
int64_t function_4b6ba0();
int64_t function_4b7340();
int64_t function_4b7730();
int64_t function_4ba450();
int64_t function_4ba5b0();
int64_t function_4ba6e0();
int64_t function_4bba20();
int64_t function_4bf0f0();
int64_t function_4c33c0();
int64_t function_4c3770();
int64_t function_4c3810();
int64_t function_4c3970();
int64_t function_4c3a10();
int64_t function_4c3b30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_4c53c0(int64_t a1, int64_t a2);
int64_t function_4cdef0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4cf560();
int64_t function_4eeb40();
int64_t function_4eeb50();
int64_t function_4eec00();
int64_t function_4efc80();
int64_t function_4efd30();
int64_t function_4f0eb0(int64_t result, int64_t a2);
int64_t function_4fbd10();
int64_t function_508450();
int64_t function_508620();
int64_t function_50ab00();
int64_t function_50b780();
int64_t function_50b7d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_50bd90();
int64_t function_50bde0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_527fe();
int64_t function_5423b0();
int64_t function_547670();
int64_t function_547fb0();
int64_t function_54ff00();
int64_t function_554b00();
int64_t function_556cf0();
int64_t function_557390();
int64_t function_5574b0(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11);
int64_t function_557a40();
int64_t function_557b60(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11);
int64_t function_564301();
int64_t function_56447a();
int64_t function_564652(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_564874(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_564de0();
int64_t function_5797e0();
int64_t function_579850();
int64_t function_579b00();
int64_t function_579b50();
int64_t function_579d80();
int64_t function_579f90();
int64_t function_57b2f0();
int64_t function_57b450();
int64_t function_57b480(int64_t a1, int64_t a2, char a3, int64_t a4);
int64_t function_57ba10();
int64_t function_57c770();
int64_t function_57caa0();
int64_t function_57cf40();
int64_t function_58947();
int64_t function_599ba();
int64_t function_5a3ba();
int64_t function_5a828();
int64_t function_5a9e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_5b030();
int64_t function_5b0cc();
int64_t function_5b204();
int64_t function_5be1a();
int64_t function_61c0a();
int64_t function_61f32();
int64_t function_62460();
int64_t function_625dc(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_6304a();
int64_t function_631a2();
int64_t function_63286();
int64_t function_63514();
int64_t function_729b6();
int64_t function_729ce();

// Address range: 0x3d788 - 0x3dcac
int64_t function_3d788(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a1 + 18); // 0x3d79e
    char v2 = 0; // 0x3d7a2
    if ((*v1 & 8) != 0) {
        int32_t v3 = *(int32_t *)(a1 + 88); // 0x3d7a7
        uint32_t v4 = *(int32_t *)(a1 + 44); // 0x3d7aa
        v2 = *(int32_t *)(a1 + 36) - v3 <= v4;
    }
    // 0x3d7b0
    int64_t v5; // 0x3d788
    if (a1 != 0) {
        // 0x3d7db
        v5 = a1 + 0x392aa;
        goto lab_0x3d7e2;
    } else {
        int64_t v6 = *(int64_t *)(a1 + 160); // 0x3d7b6
        int64_t v7 = *(int64_t *)(a1 + 192); // 0x3d7bd
        if (*(int64_t *)v6 - v7 > (int64_t)&g2) {
            // 0x3d7d2
            v5 = *(int64_t *)(a1 + 144) + v7;
            goto lab_0x3d7e2;
        } else {
            // 0x3d7db
            v5 = a1 + 0x392aa;
            goto lab_0x3d7e2;
        }
    }
  lab_0x3d7e2:;
    int64_t * v8 = (int64_t *)(a1 + 56); // 0x3d7e2
    int64_t * v9 = (int64_t *)(a1 + 64); // 0x3d7ed
    *v9 = v5;
    int64_t v10 = a1 + 112; // 0x3d7f1
    *(int64_t *)v10 = 0;
    int32_t * v11 = (int32_t *)(a1 + 80); // 0x3d7f9
    int64_t * v12 = (int64_t *)(a1 + 72); // 0x3d7fc
    *v12 = v5 + 0x14cbc;
    char * v13 = (char *)*v8; // 0x3d800
    unsigned char v14 = *v13; // 0x3d800
    uint32_t v15 = *v11 % 32; // 0x3d803
    *v13 = v15 == 0 ? v14 : (char)((int32_t)v14 >> v15);
    int64_t * v16 = (int64_t *)(a1 + 48); // 0x3d810
    *v16 = *v16 - (int64_t)(*v11 == 8);
    char * v17 = (char *)(a1 + 17); // 0x3d814
    if ((*v17 & 16) != 0) {
        // 0x3d81a
        if (*(int32_t *)(a1 + 124) == 0) {
            int32_t * v18 = (int32_t *)(a1 + 92); // 0x3d820
            uint32_t v19 = *v18; // 0x3d820
            int32_t * v20 = (int32_t *)(a1 + 96); // 0x3d82a
            *v20 = 120 << v19 % 32 | *v20;
            int32_t v21 = v19 + 8; // 0x3d82d
            *v18 = v21;
            int32_t v22 = *v20; // 0x3d83a
            int32_t v23 = v21; // 0x3d840
            int32_t v24 = v22; // 0x3d840
            if (v21 >= 8) {
                uint64_t v25 = *v9;
                int32_t v26 = v22; // 0x3d846
                if (*v12 > v25) {
                    // 0x3d848
                    *v9 = v25 + 1;
                    *(char *)v25 = (char)v22;
                    v26 = *v20;
                }
                // 0x3d853
                *v20 = v26 / 256;
                int32_t v27 = *v18 - 8; // 0x3d857
                *v18 = v27;
                int32_t v28 = *v20; // 0x3d83a
                v23 = v27;
                v24 = v28;
                while (v27 >= 8) {
                    int32_t v29 = v28;
                    v25 = *v9;
                    v26 = v29;
                    if (*v12 > v25) {
                        // 0x3d848
                        *v9 = v25 + 1;
                        *(char *)v25 = (char)v29;
                        v26 = *v20;
                    }
                    // 0x3d853
                    *v20 = v26 / 256;
                    v27 = *v18 - 8;
                    *v18 = v27;
                    v28 = *v20;
                    v23 = v27;
                    v24 = v28;
                }
            }
            // 0x3d85d
            *v18 = v23 + 8;
            *v20 = 1 << v23 % 32 | v24;
            if (*v18 >= 8) {
                uint64_t v30 = *v9;
                if (*v12 > v30) {
                    // 0x3d87f
                    *v9 = v30 + 1;
                    *(char *)v30 = (char)*v20;
                }
                // 0x3d88c
                *v20 = *v20 / 256;
                uint32_t v31 = *v18 - 8; // 0x3d890
                *v18 = v31;
                while (v31 >= 8) {
                    // 0x3d879
                    v30 = *v9;
                    if (*v12 > v30) {
                        // 0x3d87f
                        *v9 = v30 + 1;
                        *(char *)v30 = (char)*v20;
                    }
                    // 0x3d88c
                    *v20 = *v20 / 256;
                    v31 = *v18 - 8;
                    *v18 = v31;
                }
            }
        }
    }
    int32_t * v32 = (int32_t *)(a1 + 92); // 0x3d896
    uint32_t v33 = *v32; // 0x3d896
    int32_t v34 = a2; // 0x3d89b
    int32_t * v35 = (int32_t *)(a1 + 96); // 0x3d8a4
    *v35 = (int32_t)(v34 == 4) << v33 % 32 | *v35;
    int32_t v36 = v33 + 1; // 0x3d8a7
    *v32 = v36;
    int64_t v37 = *v9; // 0x3d8b0
    int32_t v38 = *v35; // 0x3d8b4
    int32_t v39 = v36; // 0x3d8bc
    int64_t v40 = v37; // 0x3d8bc
    int32_t v41 = v38; // 0x3d8bc
    if (v36 >= 8) {
        int32_t v42 = v38; // 0x3d8c2
        if (*v12 > v37) {
            // 0x3d8c4
            *v9 = v37 + 1;
            *(char *)v37 = (char)v38;
            v42 = *v35;
        }
        // 0x3d8d1
        *v35 = v42 / 256;
        int32_t v43 = *v32 - 8; // 0x3d8d5
        *v32 = v43;
        int64_t v44 = *v9; // 0x3d8b0
        int32_t v45 = *v35; // 0x3d8b4
        v39 = v43;
        v40 = v44;
        v41 = v45;
        while (v43 >= 8) {
            uint64_t v46 = v44;
            int32_t v47 = v45;
            v42 = v47;
            if (*v12 > v46) {
                // 0x3d8c4
                *v9 = v46 + 1;
                *(char *)v46 = (char)v47;
                v42 = *v35;
            }
            // 0x3d8d1
            *v35 = v42 / 256;
            v43 = *v32 - 8;
            *v32 = v43;
            v44 = *v9;
            v45 = *v35;
            v39 = v43;
            v40 = v44;
            v41 = v45;
        }
    }
    int64_t v48 = 0; // 0x3d8dd
    int64_t v49; // 0x3d788
    if (v2 != 0) {
        goto lab_0x3d91e;
    } else {
        int32_t * v50 = (int32_t *)(a1 + 84);
        int64_t v51 = 1; // 0x3d8e6
        if ((*v1 & 4) == 0) {
            // 0x3d8e8
            v51 = *v50 < 48;
        }
        int64_t v52 = function_3d42c(a1, v51); // 0x3d8f7
        uint32_t v53 = *v50; // 0x3d8fc
        v49 = v52;
        if (v53 == 0) {
            goto lab_0x3da3b;
        } else {
            // 0x3d907
            v48 = v52;
            v49 = v52;
            if (1 - v40 + *v9 < (int64_t)v53) {
                goto lab_0x3da3b;
            } else {
                goto lab_0x3d91e;
            }
        }
    }
  lab_0x3d91e:;
    int32_t * v54 = (int32_t *)(a1 + 88); // 0x3d921
    v49 = v48;
    int32_t v55; // 0x3d788
    if (*(int32_t *)(a1 + 36) - *v54 > *(int32_t *)(a1 + 44)) {
        goto lab_0x3da3b;
    } else {
        uint32_t v56 = v39 + 2; // 0x3d92d
        *v9 = v40;
        *v35 = v41;
        *v32 = v56;
        if (v56 < 8) {
            goto lab_0x3d971;
        } else {
            uint64_t v57 = *v9; // 0x3d945
            if (v57 < *v12) {
                // 0x3d94f
                *v9 = v57 + 1;
                *(char *)v57 = (char)*v35;
            }
            // 0x3d95c
            *v35 = *v35 / 256;
            uint32_t v58 = *v32 - 8; // 0x3d960
            *v32 = v58;
            while (v58 >= 8) {
                // 0x3d945
                v57 = *v9;
                if (v57 < *v12) {
                    // 0x3d94f
                    *v9 = v57 + 1;
                    *(char *)v57 = (char)*v35;
                }
                // 0x3d95c
                *v35 = *v35 / 256;
                v58 = *v32 - 8;
                *v32 = v58;
            }
            // 0x3d966
            v55 = 0;
            if (v58 == 0) {
                goto lab_0x3d998;
            } else {
                goto lab_0x3d971;
            }
        }
    }
  lab_0x3da3b:
    // 0x3da3b
    if ((int32_t)v49 == 0) {
        // 0x3da3f
        *v9 = v40;
        *v35 = v41;
        *v32 = v39;
        function_3d42c(a1, 1);
    }
    goto lab_0x3da58;
  lab_0x3da58:
    if (v34 != 0) {
        int32_t v59 = *v32; // 0x3da65
        if (v34 != 4) {
            int32_t v60 = v59 + 3; // 0x3daf9
            *v32 = v60;
            int32_t v61 = v60; // 0x3db05
            if (v60 >= 8) {
                uint64_t v62 = *v9; // 0x3db07
                if (v62 < *v12) {
                    // 0x3db11
                    *v9 = v62 + 1;
                    *(char *)v62 = (char)*v35;
                }
                // 0x3db1e
                *v35 = *v35 / 256;
                int32_t v63 = *v32 - 8; // 0x3db22
                *v32 = v63;
                v61 = v63;
                while (v63 >= 8) {
                    // 0x3db07
                    v62 = *v9;
                    if (v62 < *v12) {
                        // 0x3db11
                        *v9 = v62 + 1;
                        *(char *)v62 = (char)*v35;
                    }
                    // 0x3db1e
                    *v35 = *v35 / 256;
                    v63 = *v32 - 8;
                    *v32 = v63;
                    v61 = v63;
                }
            }
            int32_t v64 = 0; // 0x3db2a
            if (v61 != 0) {
                // 0x3db33
                *v32 = 8;
                uint64_t v65 = *v9; // 0x3db39
                if (v65 < *v12) {
                    // 0x3db43
                    *v9 = v65 + 1;
                    *(char *)v65 = (char)*v35;
                }
                // 0x3db50
                *v35 = *v35 / 256;
                int32_t v66 = *v32 - 8; // 0x3db54
                *v32 = v66;
                v64 = v66;
                while (v66 >= 8) {
                    // 0x3db39
                    v65 = *v9;
                    if (v65 < *v12) {
                        // 0x3db43
                        *v9 = v65 + 1;
                        *(char *)v65 = (char)*v35;
                    }
                    // 0x3db50
                    *v35 = *v35 / 256;
                    v66 = *v32 - 8;
                    *v32 = v66;
                    v64 = v66;
                }
            }
            int32_t v67 = 2;
            int64_t v68 = 0;
            uint32_t v69 = v64 % 32; // 0x3db66
            int64_t v70 = v69 == 0 ? v68 : (int64_t)((int32_t)v68 << v69);
            *v35 = *v35 | (int32_t)v70;
            int32_t v71 = v64 + 16; // 0x3db6b
            *v32 = v71;
            int32_t v72 = v71; // 0x3db75
            uint64_t v73; // 0x3db77
            int32_t v74; // 0x3db92
            if (v71 >= 8) {
                v73 = *v9;
                if (v73 < *v12) {
                    // 0x3db81
                    *v9 = v73 + 1;
                    *(char *)v73 = (char)*v35;
                }
                // 0x3db8e
                *v35 = *v35 / 256;
                v74 = *v32 - 8;
                *v32 = v74;
                v72 = v74;
                while (v74 >= 8) {
                    // 0x3db77
                    v73 = *v9;
                    if (v73 < *v12) {
                        // 0x3db81
                        *v9 = v73 + 1;
                        *(char *)v73 = (char)*v35;
                    }
                    // 0x3db8e
                    *v35 = *v35 / 256;
                    v74 = *v32 - 8;
                    *v32 = v74;
                    v72 = v74;
                }
            }
            int32_t v75 = v72;
            int64_t v76 = v68 ^ (int64_t)(int32_t)&g50; // 0x3db9f
            while (v67 != 1) {
                // 0x3db61
                v67 = 1;
                v68 = v76;
                v69 = v75 % 32;
                v70 = v69 == 0 ? v68 : (int64_t)((int32_t)v68 << v69);
                *v35 = *v35 | (int32_t)v70;
                v71 = v75 + 16;
                *v32 = v71;
                v72 = v71;
                if (v71 >= 8) {
                    v73 = *v9;
                    if (v73 < *v12) {
                        // 0x3db81
                        *v9 = v73 + 1;
                        *(char *)v73 = (char)*v35;
                    }
                    // 0x3db8e
                    *v35 = *v35 / 256;
                    v74 = *v32 - 8;
                    *v32 = v74;
                    v72 = v74;
                    while (v74 >= 8) {
                        // 0x3db77
                        v73 = *v9;
                        if (v73 < *v12) {
                            // 0x3db81
                            *v9 = v73 + 1;
                            *(char *)v73 = (char)*v35;
                        }
                        // 0x3db8e
                        *v35 = *v35 / 256;
                        v74 = *v32 - 8;
                        *v32 = v74;
                        v72 = v74;
                    }
                }
                // 0x3db98
                v75 = v72;
                v76 = v68 ^ (int64_t)(int32_t)&g50;
            }
        } else {
            int32_t v77 = 0; // 0x3da70
            if (v59 != 0) {
                // 0x3da79
                *v32 = 8;
                uint64_t v78 = *v9; // 0x3da7f
                if (v78 < *v12) {
                    // 0x3da89
                    *v9 = v78 + 1;
                    *(char *)v78 = (char)*v35;
                }
                // 0x3da96
                *v35 = *v35 / 256;
                int32_t v79 = *v32 - 8; // 0x3da9a
                *v32 = v79;
                v77 = v79;
                while (v79 >= 8) {
                    // 0x3da7f
                    v78 = *v9;
                    if (v78 < *v12) {
                        // 0x3da89
                        *v9 = v78 + 1;
                        *(char *)v78 = (char)*v35;
                    }
                    // 0x3da96
                    *v35 = *v35 / 256;
                    v79 = *v32 - 8;
                    *v32 = v79;
                    v77 = v79;
                }
            }
            // 0x3daa0
            if ((*v17 & 16) != 0) {
                int32_t v80 = 4; // 0x3daad
                int64_t v81 = (int64_t)*(int32_t *)(a1 + 32); // 0x3daad
                uint64_t v82 = v81 / 0x1000000; // 0x3dab7
                uint32_t v83 = v77 % 32; // 0x3daba
                int64_t v84 = v83 == 0 ? v82 : (int64_t)((int32_t)v82 << v83);
                *v35 = *v35 | (int32_t)v84;
                int32_t v85 = v77 + 8; // 0x3dabf
                *v32 = v85;
                int32_t v86 = v85; // 0x3dac9
                uint64_t v87; // 0x3dacb
                int32_t v88; // 0x3dae7
                if (v85 >= 8) {
                    v87 = *v9;
                    if (v87 < *v12) {
                        // 0x3dad5
                        *v9 = v87 + 1;
                        *(char *)v87 = (char)*v35;
                    }
                    // 0x3dae3
                    *v35 = *v35 / 256;
                    v88 = *v32 - 8;
                    *v32 = v88;
                    v86 = v88;
                    while (v88 >= 8) {
                        // 0x3dacb
                        v87 = *v9;
                        if (v87 < *v12) {
                            // 0x3dad5
                            *v9 = v87 + 1;
                            *(char *)v87 = (char)*v35;
                        }
                        // 0x3dae3
                        *v35 = *v35 / 256;
                        v88 = *v32 - 8;
                        *v32 = v88;
                        v86 = v88;
                    }
                }
                int32_t v89 = v86;
                v80--;
                v81 = 256 * v81 & 0xffffff00;
                while (v80 != 0) {
                    // 0x3dab2
                    v82 = v81 / 0x1000000;
                    v83 = v89 % 32;
                    v84 = v83 == 0 ? v82 : (int64_t)((int32_t)v82 << v83);
                    *v35 = *v35 | (int32_t)v84;
                    v85 = v89 + 8;
                    *v32 = v85;
                    v86 = v85;
                    if (v85 >= 8) {
                        v87 = *v9;
                        if (v87 < *v12) {
                            // 0x3dad5
                            *v9 = v87 + 1;
                            *(char *)v87 = (char)*v35;
                        }
                        // 0x3dae3
                        *v35 = *v35 / 256;
                        v88 = *v32 - 8;
                        *v32 = v88;
                        v86 = v88;
                        while (v88 >= 8) {
                            // 0x3dacb
                            v87 = *v9;
                            if (v87 < *v12) {
                                // 0x3dad5
                                *v9 = v87 + 1;
                                *(char *)v87 = (char)*v35;
                            }
                            // 0x3dae3
                            *v35 = *v35 / 256;
                            v88 = *v32 - 8;
                            *v32 = v88;
                            v86 = v88;
                        }
                    }
                    // 0x3daed
                    v89 = v86;
                    v80--;
                    v81 = 256 * v81 & 0xffffff00;
                }
            }
        }
    }
    int64_t v90 = a1 + (int64_t)&g8; // 0x3dbb9
    __asm_rep_stosd_memset((char *)(a1 + (int64_t)&g7), 0, 144);
    __asm_rep_stosd_memset((char *)v90, 0, 16);
    *v11 = 8;
    *v16 = a1 + (int64_t)&g49;
    int32_t * v91 = (int32_t *)(a1 + 124); // 0x3dbe5
    *v91 = *v91 + 1;
    *v8 = a1 + (int64_t)&g48;
    int32_t * v92 = (int32_t *)(a1 + 84); // 0x3dbec
    int32_t * v93 = (int32_t *)(a1 + 88); // 0x3dbef
    *v93 = *v93 + *v92;
    *v92 = 0;
    int64_t v94 = *v9 - v5; // 0x3dbfd
    int32_t v95 = v94; // 0x3dc00
    if (v95 == 0) {
        // 0x3dca0
        return (int64_t)*(int32_t *)(a1 + 116);
    }
    // 0x3dc08
    bool v96; // 0x3d788
    if (v90 != (v96 ? 64 : -64)) {
        int64_t v97 = *(int64_t *)(a1 + 152); // 0x3dc25
        *(int64_t *)v97 = *(int64_t *)(a1 + 176) - *(int64_t *)(a1 + 136);
        // 0x3dca0
        return (int64_t)*(int32_t *)(a1 + 116);
    }
    int64_t * v98 = (int64_t *)(a1 + 192); // 0x3dc4b
    int64_t v99 = *v98; // 0x3dc4b
    uint64_t v100 = 0x100000000 * v94 >> 32; // 0x3dc52
    if (v5 != a1 + 0x392aa) {
        // 0x3dc93
        *v98 = v99 + v100;
        // 0x3dca0
        return (int64_t)*(int32_t *)(a1 + 116);
    }
    uint64_t v101 = *(int64_t *)*(int64_t *)(a1 + 160) - v99; // 0x3dc61
    int64_t v102 = v101 > v100 ? v100 : v101; // 0x3dc67
    int64_t v103 = *(int64_t *)(a1 + 144); // 0x3dc6b
    int64_t v104 = 0x100000000 * v102 >> 32; // 0x3dc75
    __asm_rep_movsb_memcpy((char *)(v103 + v99), (char *)v5, v104);
    *v98 = v104 + *v98;
    int32_t v105 = v102; // 0x3dc87
    int32_t v106 = v95 - v105; // 0x3dc87
    if (v106 != 0) {
        // 0x3dc8b
        *(int32_t *)v10 = v105;
        *(int32_t *)(a1 + 116) = v106;
    }
    // 0x3dca0
    return (int64_t)*(int32_t *)(a1 + 116);
  lab_0x3d971:
    // 0x3d971
    *v32 = 8;
    uint64_t v107 = *v9; // 0x3d977
    if (v107 < *v12) {
        // 0x3d981
        *v9 = v107 + 1;
        *(char *)v107 = (char)*v35;
    }
    // 0x3d98e
    *v35 = *v35 / 256;
    int32_t v108 = *v32 - 8; // 0x3d992
    *v32 = v108;
    v55 = v108;
    while (v108 >= 8) {
        // 0x3d977
        v107 = *v9;
        if (v107 < *v12) {
            // 0x3d981
            *v9 = v107 + 1;
            *(char *)v107 = (char)*v35;
        }
        // 0x3d98e
        *v35 = *v35 / 256;
        v108 = *v32 - 8;
        *v32 = v108;
        v55 = v108;
    }
    goto lab_0x3d998;
  lab_0x3d998:;
    int64_t v109 = a1 + 84;
    int32_t * v110 = (int32_t *)v109;
    int32_t v111 = 2; // 0x3d998
    *v35 = (int32_t)*(int16_t *)v109 << v55 % 32 | *v35;
    uint32_t v112 = v55 + 16; // 0x3d9a9
    *v32 = v112;
    uint64_t v113; // 0x3d9b5
    uint32_t v114; // 0x3d9d0
    if (v112 >= 8) {
        v113 = *v9;
        if (v113 < *v12) {
            // 0x3d9bf
            *v9 = v113 + 1;
            *(char *)v113 = (char)*v35;
        }
        // 0x3d9cc
        *v35 = *v35 / 256;
        v114 = *v32 - 8;
        *v32 = v114;
        while (v114 >= 8) {
            // 0x3d9b5
            v113 = *v9;
            if (v113 < *v12) {
                // 0x3d9bf
                *v9 = v113 + 1;
                *(char *)v113 = (char)*v35;
            }
            // 0x3d9cc
            *v35 = *v35 / 256;
            v114 = *v32 - 8;
            *v32 = v114;
        }
    }
    int32_t v115 = *v110 ^ (int32_t)&g50; // 0x3d9d6
    *v110 = v115;
    while (v111 != 1) {
        int32_t v116 = *v32; // 0x3d788
        v111 = 1;
        *v35 = (int32_t)*(int16_t *)v109 << v116 % 32 | *v35;
        v112 = v116 + 16;
        *v32 = v112;
        if (v112 >= 8) {
            v113 = *v9;
            if (v113 < *v12) {
                // 0x3d9bf
                *v9 = v113 + 1;
                *(char *)v113 = (char)*v35;
            }
            // 0x3d9cc
            *v35 = *v35 / 256;
            v114 = *v32 - 8;
            *v32 = v114;
            while (v114 >= 8) {
                // 0x3d9b5
                v113 = *v9;
                if (v113 < *v12) {
                    // 0x3d9bf
                    *v9 = v113 + 1;
                    *(char *)v113 = (char)*v35;
                }
                // 0x3d9cc
                *v35 = *v35 / 256;
                v114 = *v32 - 8;
                *v32 = v114;
            }
        }
        // 0x3d9d6
        v115 = *v110 ^ (int32_t)&g50;
        *v110 = v115;
    }
    if (v115 != 0) {
        int64_t v117 = a1 + 200; // 0x3d9fd
        int32_t v118 = *v32;
        int32_t v119 = *v54; // 0x3d9ef
        unsigned char v120 = *(char *)(v117 + (int64_t)(v119 & (int32_t)&g6)); // 0x3d9fd
        *v35 = (int32_t)v120 << v118 % 32 | *v35;
        int32_t v121 = v118 + 8; // 0x3da0a
        *v32 = v121;
        int32_t v122 = v121; // 0x3da14
        uint64_t v123; // 0x3da16
        int32_t v124; // 0x3da31
        if (v121 >= 8) {
            v123 = *v9;
            if (v123 < *v12) {
                // 0x3da20
                *v9 = v123 + 1;
                *(char *)v123 = (char)*v35;
            }
            // 0x3da2d
            *v35 = *v35 / 256;
            v124 = *v32 - 8;
            *v32 = v124;
            v122 = v124;
            while (v124 >= 8) {
                // 0x3da16
                v123 = *v9;
                if (v123 < *v12) {
                    // 0x3da20
                    *v9 = v123 + 1;
                    *(char *)v123 = (char)*v35;
                }
                // 0x3da2d
                *v35 = *v35 / 256;
                v124 = *v32 - 8;
                *v32 = v124;
                v122 = v124;
            }
        }
        // 0x3da37
        v118 = v122;
        int64_t v125 = 1; // 0x3da37
        int32_t v126 = v125; // 0x3d9ea
        int64_t v127 = v125 & 0xffffffff; // 0x3d9ed
        while (*v110 > v126) {
            // 0x3d9ef
            v119 = *v54;
            v120 = *(char *)(v117 + (int64_t)(v119 + v126 & (int32_t)&g6));
            *v35 = (int32_t)v120 << v118 % 32 | *v35;
            v121 = v118 + 8;
            *v32 = v121;
            v122 = v121;
            if (v121 >= 8) {
                v123 = *v9;
                if (v123 < *v12) {
                    // 0x3da20
                    *v9 = v123 + 1;
                    *(char *)v123 = (char)*v35;
                }
                // 0x3da2d
                *v35 = *v35 / 256;
                v124 = *v32 - 8;
                *v32 = v124;
                v122 = v124;
                while (v124 >= 8) {
                    // 0x3da16
                    v123 = *v9;
                    if (v123 < *v12) {
                        // 0x3da20
                        *v9 = v123 + 1;
                        *(char *)v123 = (char)*v35;
                    }
                    // 0x3da2d
                    *v35 = *v35 / 256;
                    v124 = *v32 - 8;
                    *v32 = v124;
                    v122 = v124;
                }
            }
            // 0x3da37
            v118 = v122;
            v125 = v127 + 1;
            v126 = v125;
            v127 = v125 & 0xffffffff;
        }
    }
    goto lab_0x3da58;
}

// Address range: 0x5a9e4 - 0x5af26
int64_t function_5a9e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = __readfsqword(40); // 0x5aa10
    int64_t v2; // bp-160, 0x5a9e4
    function_2509a(&v2, a3);
    int64_t v3; // bp-152, 0x5a9e4
    function_2509a(&v3, a4);
    int64_t v4; // bp-144, 0x5a9e4
    function_360a0(&v4, a2);
    int64_t v5 = 0; // bp-88, 0x5aa57
    int64_t v6 = (int64_t)&g47; // bp-136, 0x5aa7f
    int64_t v7 = a5 - 24; // 0x5aa88
    if ((char)function_25622(v7) == 0) {
        // 0x5aab3
        function_2562c(v7, 0);
    } else {
        // 0x5aa99
        function_5a3ba(v7);
        *(int64_t *)a5 = (int64_t)&g45;
    }
    // 0x5aabe
    function_29d10(a6);
    int64_t v8; // 0x5a9e4
    int64_t v9; // 0x5a9e4
    int64_t v10; // 0x5a9e4
    int64_t v11; // 0x5a9e4
    int64_t v12; // 0x5a9e4
    int64_t v13; // 0x5a9e4
    int64_t v14; // 0x5a9e4
    int64_t v15; // 0x5a9e4
    int64_t v16; // 0x5a9e4
    int64_t v17; // 0x5a9e4
    int64_t v18; // 0x5a9e4
    int64_t v19; // 0x5a9e4
    int64_t v20; // 0x5a9e4
    int64_t v21; // 0x5a9e4
    int64_t v22; // bp-104, 0x5a9e4
    int64_t v23; // bp-120, 0x5a9e4
    int64_t v24; // 0x5a9e4
    int64_t v25; // 0x5a9e4
    int64_t v26; // 0x5a9e4
    if (*(int64_t *)(v4 - 24) != 0) {
        // 0x5aafb
        if (*(int64_t *)(v2 - 24) == 0) {
            // 0x5ab07
            function_380a0(&v2, &g30);
        }
        // 0x5ab16
        function_48e641(&v4);
        int32_t v27; // bp-96, 0x5a9e4
        function_48e347((int64_t *)&v27, &v2);
        int64_t v28; // bp-128, 0x5a9e4
        int64_t v29 = (int64_t)&v28; // 0x5ab40
        function_5b030(&v28, (int64_t *)&v27, &g31, a4);
        function_29c3a((int64_t *)&v27);
        int64_t v30 = (int64_t)&v4;
        function_360a0((int64_t *)&v27, v30);
        function_527fe((int64_t *)&v27, v29);
        uint64_t v31 = function_58947((int64_t *)&v27, &v5); // 0x5ab75
        int64_t v32 = v31 % 256; // 0x5ab7f
        if ((char)v31 != 0) {
            // 0x5ab81
            v32 = v5 != 0;
        }
        int64_t v33 = (int64_t)&v27; // 0x5ab16
        function_29c3a((int64_t *)&v27);
        int64_t v34; // bp-112, 0x5a9e4
        int64_t v35 = (int64_t)&v34; // 0x5aba0
        if (v32 == 0) {
            // 0x5add7
            function_48e347(&v34, &g29);
            int64_t v36 = function_36b3c(&v4, (int32_t)&g29 ^ (int32_t)&g29, "basic_string::insert"); // 0x5adf7
            int64_t v37 = *(int64_t *)(v4 - 24); // 0x5adfc
            int64_t v38 = function_5b0cc(&v34, (int32_t)&g29 ^ (int32_t)&g29 ^ (int32_t)&g29 ^ (int32_t)&g29, 4 * v36 + v4, v37); // 0x5ae0e
            int64_t * v39 = (int64_t *)v38; // 0x5ae1a
            v22 = *v39;
            *v39 = (int64_t)&g47;
            function_5b030((int64_t *)&v27, &v22, &g32, (int64_t)&g46);
            function_36966(&v6, v33);
            function_29c3a((int64_t *)&v27);
            function_29c3a(&v22);
            function_29c3a(&v34);
            function_380a0((int64_t *)a5, &g29);
            v25 = v29;
            v16 = v35;
            v13 = (int64_t)&v22;
            goto lab_0x5ae6f;
        } else {
            // 0x5abab
            function_2509a(&v23, (int64_t)&v2);
            if (*(int64_t *)(v3 - 24) != 0) {
                // branch -> 0x5ac36
            }
            // 0x5ac36
            function_48eb2b((int64_t *)&v27, &g32);
            function_4a8c6(&v23, v33);
            function_2508e((int64_t *)&v27);
            function_48e347((int64_t *)&v27, &v23);
            int64_t v40 = function_5b204(v5, 0, (int64_t *)&v27); // 0x5ac7c
            function_29c3a((int64_t *)&v27);
            v8 = v30;
            v26 = v29;
            v20 = v33;
            v18 = v35;
            v11 = a5;
            v14 = v40;
            if (v40 != 0) {
                goto lab_0x5af04;
            } else {
                // 0x5ac9c
                function_48e347((int64_t *)&v27, &v2);
                function_5b030(&v22, (int64_t *)&v27, &g32, a4);
                function_29c3a((int64_t *)&v27);
                int64_t v41 = function_5b204(v5, 0, &v22); // 0x5acdf
                function_29c3a(&v22);
                function_5a828(&v34, a1, &v23, v41 != 0 ? v41 : v5);
                v9 = v30;
                v24 = v29;
                v19 = v33;
                v15 = v35;
                v10 = a5;
                v12 = (int64_t)&v22;
                goto lab_0x5ad1f;
            }
        }
    } else {
        // 0x5aad4
        function_36cda(a6, L"No localization directory specified", function_35c52(L"No localization directory specified"));
        v17 = 0;
        v21 = (int64_t)L"No localization directory specified";
        goto lab_0x5ae90;
    }
  lab_0x5ae90:;
    int64_t v42 = v21;
    int64_t v43 = v17;
    if (v5 != 0) {
        int64_t v44 = v5 + 8; // 0x5aea8
        function_29c3a((int64_t *)v5);
        int64_t v45 = v44; // 0x5aea3
        while (v44 != 0) {
            // 0x5aea5
            v44 = v45 + 8;
            function_29c3a((int64_t *)v45);
            v45 = v44;
        }
        // 0x5aeb3
        if (v5 != 0) {
            // 0x5aec0
            function_4eeb50(v5, v42);
        }
    }
    // 0x5aec5
    function_29c3a(&v6);
    function_29c3a(&v4);
    function_2508e(&v3);
    int64_t v46 = function_2508e(&v2); // 0x5aee4
    if (v1 == __readfsqword(40)) {
        // 0x5af14
        return v46 & -256 | v43 % 256;
    }
    // 0x5aeff
    __stack_chk_fail();
    v8 = (int64_t)&v4;
    int64_t v47; // 0x5a9e4
    v26 = v47;
    v20 = 0;
    v18 = v43;
    v11 = 0;
    int64_t v48; // 0x5a9e4
    v14 = v48;
    goto lab_0x5af04;
  lab_0x5ae6f:;
    uint64_t v58 = function_5be1a(a1, &v6, a6); // 0x5ae7e
    function_29c3a((int64_t *)v25);
    v47 = v25;
    v17 = v58 % 256 | v16 & -256;
    v21 = (int64_t)&v6;
    v48 = v13;
    goto lab_0x5ae90;
  lab_0x5af04:
    // 0x5af04
    function_360a0((int64_t *)v18, v14);
    v9 = v8;
    v24 = v26;
    v19 = v20;
    v15 = v18;
    v10 = v11;
    v12 = v14;
    goto lab_0x5ad1f;
  lab_0x5ad1f:;
    int64_t v49 = v10;
    int64_t v50 = v15;
    int64_t v51 = v19;
    int64_t * v52 = (int64_t *)v51; // 0x5ad25
    function_360a0(v52, v9);
    function_527fe(v52, v50);
    function_36966(&v6, v51);
    function_29c3a(v52);
    int64_t v53 = g32; // 0x5ad4a
    int64_t v54 = function_599ba(v50, v53, 0, *(int64_t *)(v53 - 24)); // 0x5ad5a
    int64_t * v55; // 0x5a9e4
    int64_t v56; // 0x5a9e4
    if (v54 == -1) {
        int64_t * v57 = (int64_t *)v50;
        function_48eb2b(v52, v57);
        function_256ba(v49, v51);
        function_2508e(v52);
        v55 = v57;
        v56 = v12;
    } else {
        // 0x5ad65
        function_36840(&v22, v50, 0, v54);
        function_48eb2b(v52, &v22);
        function_256ba(v49, v51);
        function_2508e(v52);
        function_29c3a(&v22);
        v55 = (int64_t *)v50;
        v56 = (int64_t)&v22;
    }
    // 0x5adc0
    function_29c3a(v55);
    function_2508e(&v23);
    v25 = v24;
    v16 = v50;
    v13 = v56;
    goto lab_0x5ae6f;
}

// Address range: 0x625dc - 0x62ad7
int64_t function_625dc(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x625fd
    int64_t v2; // bp-208, 0x625dc
    function_729b6(&v2);
    int64_t v3 = 0; // bp-136, 0x62630
    int64_t v4; // 0x625dc
    int64_t v5; // 0x625dc
    char * v6; // 0x62684
    int64_t v7; // 0x6265b
    int64_t * v8; // 0x62662
    int64_t v9; // 0x6263c
    int64_t * v10; // 0x62672
    if ((char)function_61f32(a1, a2, a3, &v3) != 0) {
        // 0x62653
        function_62460(a1);
        v7 = *(int64_t *)(a1 + 280);
        v8 = (int64_t *)(a1 + 288);
        v5 = 0;
        if (v7 != *v8) {
            // 0x62672
            v9 = (int64_t)&v3;
            v10 = (int64_t *)(a1 + 56);
            int64_t v11 = *v10; // 0x62672
            uint64_t v12 = *(int64_t *)(a1 + 64) - v11; // 0x6267a
            uint64_t v13 = v12 > a3 ? a3 : v12; // 0x62680
            v6 = (char *)(v7 + 56);
            if (*v6 == 0) {
                // 0x626d8
                v5 = 0;
                if (v13 < 25) {
                    goto lab_0x62aa0;
                } else {
                    int64_t * v14 = (int64_t *)v7; // 0x626de
                    int64_t v15 = *v14; // 0x626de
                    int64_t * v16 = (int64_t *)(v7 + 8); // 0x626e1
                    int64_t * v17 = (int64_t *)(v7 + 24); // 0x626e5
                    int64_t v18 = *v17; // 0x626e5
                    uint64_t v19 = *v16 - v15 - v18; // 0x626ec
                    v5 = 0;
                    if (v19 == 0) {
                        goto lab_0x62aa0;
                    } else {
                        uint64_t v20 = v13 - 24; // 0x626f8
                        int64_t v21 = v20 > v19 ? v19 : v20; // 0x6270e
                        __asm_rep_movsb_memcpy((char *)(v11 + 24), (char *)(v18 + v15), v21);
                        __asm_movups_133(*(int128_t *)v11, __asm_movups(*(int128_t *)(v7 + 32)));
                        *(int64_t *)(v11 + 4) = *(int64_t *)(a1 + 40);
                        *(int64_t *)(v11 + 16) = *(int64_t *)(v7 + 48);
                        int64_t v22 = *v17; // 0x62730
                        *(int64_t *)(v11 + 12) = *(int64_t *)(a1 + 80);
                        if (v22 == 0) {
                            int16_t * v23 = (int16_t *)(v11 + 2); // 0x6273d
                            *v23 = *v23 | 1;
                        }
                        int64_t v24 = v22 + v21; // 0x6274a
                        *v17 = v24;
                        if (v24 == *v16 - *v14) {
                            // 0x62756
                            v3 = 0;
                            v3 = *v14;
                            *v14 = 0;
                            *v16 = 0;
                            *(int64_t *)(v7 + 16) = 0;
                            function_254fe(v9);
                            *v17 = 0;
                            int16_t * v25 = (int16_t *)(v11 + 2); // 0x627be
                            *v25 = *v25 | 2;
                        }
                        int64_t v26 = v21 + 24; // 0x627c4
                        int32_t * v27 = (int32_t *)(v11 + 20); // 0x627c8
                        *v27 = 0;
                        *v27 = (int32_t)function_455ee(v11, v26, 0);
                        v4 = v26;
                        goto lab_0x627e1;
                    }
                }
            } else {
                int64_t * v28 = (int64_t *)(v7 + 8); // 0x6268b
                int64_t * v29 = (int64_t *)v7; // 0x6268f
                v5 = 0;
                if (*v28 + 24 - *v29 > v13) {
                    goto lab_0x62aa0;
                } else {
                    // 0x6269b
                    __asm_movups_133(*(int128_t *)v11, __asm_movups(*(int128_t *)(v7 + 32)));
                    *(int64_t *)(v11 + 16) = *(int64_t *)(v7 + 48);
                    int64_t v30 = *v28; // 0x626ad
                    int64_t v31 = *v29; // 0x626b1
                    int64_t v32 = v30; // 0x626b7
                    int64_t v33 = v30; // 0x626b7
                    if (v30 != v31) {
                        // 0x626b9
                        __asm_rep_movsb_memcpy((char *)(v11 + 24), (char *)v31, v30 - v31);
                        v32 = *v29;
                        v33 = *v28;
                    }
                    int64_t v34 = v33 - v32 + 24; // 0x626cc
                    v4 = v34;
                    v5 = 0;
                    if (v34 != 0) {
                        goto lab_0x627e1;
                    } else {
                        goto lab_0x62aa0;
                    }
                }
            }
        } else {
            goto lab_0x62aa0;
        }
    } else {
        // 0x62649
        v5 = v3;
        goto lab_0x62aa0;
    }
  lab_0x62aa0:
    // 0x62aa0
    function_729ce((int64_t)&v2);
    int64_t result = v5; // 0x62abe
    if (v1 != __readfsqword(40)) {
        // 0x62ac0
        __stack_chk_fail();
        result = (int64_t)&g51;
    }
    // 0x62ac5
    return result;
  lab_0x627e1:
    // 0x627e1
    *(int64_t *)a2 = *v10;
    int64_t v35; // bp-200, 0x625dc
    int64_t * v36; // 0x62808
    int64_t v37; // 0x62818
    int64_t v38; // 0x62829
    int64_t * v39; // 0x62831
    uint64_t v40; // 0x62861
    int64_t * v41; // 0x62865
    uint64_t v42; // 0x62865
    int64_t v43; // 0x6286e
    int64_t v44; // 0x625dc
    if (*v6 != 0) {
        goto lab_0x62a42;
    } else {
        // 0x627f4
        function_631a2(&v35, *v10, v4);
        v36 = (int64_t *)(a1 + 80);
        v3 = *v36;
        v37 = v9 + 8;
        function_63286(v37, &v35);
        v38 = function_4efd30(88);
        v39 = (int64_t *)v38;
        *v39 = 0;
        int64_t v45 = v38 + 16; // 0x6283d
        int64_t v46 = v38 + 8; // 0x62841
        int64_t * v47 = (int64_t *)v46; // 0x62841
        *v47 = v3;
        function_6304a(v45);
        *(int64_t *)(v38 + 80) = function_24e1e();
        function_63514(v45, v37);
        v40 = *v47;
        v41 = (int64_t *)(a1 + 168);
        v42 = *v41;
        v43 = a1 + 160;
        *(char *)(v38 + 72) = 1;
        v44 = v40 % v42;
        int64_t v48 = function_61c0a(v43, v44, v46); // 0x6288b
        if (v48 == 0) {
            goto lab_0x628b0;
        } else {
            // 0x62895
            if (*(int64_t *)v48 == 0) {
                goto lab_0x628b0;
            } else {
                // 0x6289b
                function_254fe(v45);
                function_4eeb50(v38, v44);
                goto lab_0x62a27;
            }
        }
    }
  lab_0x62a42:;
    int64_t v49 = *(int64_t *)(v7 + 24); // 0x62a49
    if (v49 == *(int64_t *)(v7 + 8) - *(int64_t *)v7) {
        goto lab_0x62a56;
    } else {
        // 0x62a4f
        v5 = v4;
        if (*v6 == 0) {
            goto lab_0x62aa0;
        } else {
            goto lab_0x62a56;
        }
    }
  lab_0x62a56:;
    int64_t v50 = *v8; // 0x62a56
    int64_t v51 = v7 + 64; // 0x62a5d
    int64_t v52 = v50; // 0x62a64
    if (v50 != v51) {
        uint64_t v53 = v50 - v51; // 0x62a66
        v52 = v50;
        if (v53 >= 64) {
            int64_t v54 = v53 / 64;
            int64_t v55 = v7 + 64;
            function_63514(v7, v55);
            int64_t v56 = v54 - 1; // 0x62a74
            while (v54 >= 2) {
                // 0x62a76
                v54 = v56;
                int64_t v57 = v55;
                v55 = v57 + 64;
                function_63514(v57, v55);
                v56 = v54 - 1;
            }
            // 0x62a6d
            v52 = *v8;
        }
    }
    int64_t v58 = v52 - 64; // 0x62a90
    *v8 = v58;
    function_254fe(v58);
    v5 = v4;
    goto lab_0x62aa0;
  lab_0x628b0:;
    int64_t * v59 = (int64_t *)(a1 + 184); // 0x628b0
    uint64_t v60 = *v59; // 0x628b0
    int64_t * v61; // 0x625dc
    int64_t v62; // 0x625dc
    if ((char)function_4fbd10(a1 + 192, v42, v60, 1) == 0) {
        // 0x628b0
        v61 = (int64_t *)v43;
        v62 = v44;
    } else {
        int64_t v63; // 0x625dc
        if (v60 != 1) {
            if (v60 >= 0x2000000000000000) {
                // 0x628ff
                function_5423b0();
            }
            int64_t v64 = 8 * v60; // 0x62904
            int64_t v65 = function_4efd30(v64); // 0x62914
            __asm_rep_stosb_memset((char *)v65, 0, v64);
            v63 = v65;
        } else {
            int64_t v66 = a1 + 208; // 0x628dc
            *(int64_t *)v66 = 0;
            v63 = v66;
        }
        int64_t v67 = a1 + 176; // 0x62928
        int64_t * v68 = (int64_t *)v67; // 0x6292f
        int64_t v69 = *v68; // 0x6292f
        *v68 = 0;
        int64_t v70 = 0; // 0x62946
        if (v69 != 0) {
            int64_t v71 = 0;
            int64_t * v72 = (int64_t *)v69; // 0x6294e
            int64_t v73 = *v72; // 0x6294e
            int64_t v74 = *(int64_t *)(v69 + 8) % v60;
            int64_t * v75 = (int64_t *)(8 * v74 + v63); // 0x62958
            int64_t v76 = *v75; // 0x62958
            int64_t v77; // 0x625dc
            if (v76 != 0) {
                // 0x62988
                *v72 = *(int64_t *)v76;
                *(int64_t *)*v75 = v69;
                v77 = v71;
            } else {
                // 0x62960
                *v72 = *v68;
                *v68 = v69;
                *v75 = v67;
                v77 = v74;
                if (*v72 != 0) {
                    // 0x62982
                    *(int64_t *)(8 * v71 + v63) = v69;
                    v77 = v74;
                }
            }
            // 0x6297a
            v70 = v77;
            while (v73 != 0) {
                int64_t v78 = v73;
                v71 = v77;
                v72 = (int64_t *)v78;
                v73 = *v72;
                v74 = *(int64_t *)(v78 + 8) % v60;
                v75 = (int64_t *)(8 * v74 + v63);
                v76 = *v75;
                if (v76 != 0) {
                    // 0x62988
                    *v72 = *(int64_t *)v76;
                    *(int64_t *)*v75 = v78;
                    v77 = v71;
                } else {
                    // 0x62960
                    *v72 = *v68;
                    *v68 = v78;
                    *v75 = v67;
                    v77 = v74;
                    if (*v72 != 0) {
                        // 0x62982
                        *(int64_t *)(8 * v71 + v63) = v78;
                        v77 = v74;
                    }
                }
                // 0x6297a
                v70 = v77;
            }
        }
        int64_t * v79 = (int64_t *)v43;
        int64_t v80 = *v79; // 0x62999
        if (v80 != a1 + 208) {
            // 0x629ac
            function_4eeb50(v80, v70);
        }
        // 0x629b1
        *v79 = v63;
        *v41 = v60;
        v61 = v79;
        v62 = v40 % v60;
    }
    int64_t v81 = *v61; // 0x629cc
    int64_t * v82 = (int64_t *)(v81 + 8 * v62); // 0x629d7
    int64_t v83 = *v82; // 0x629d7
    if (v83 == 0) {
        int64_t v84 = a1 + 176; // 0x629ee
        int64_t * v85 = (int64_t *)v84; // 0x629ee
        int64_t v86 = *v85; // 0x629ee
        *v85 = v38;
        *v39 = v86;
        if (v86 != 0) {
            // 0x62a05
            *(int64_t *)(8 * (*(int64_t *)(v86 + 8) % *v41) + v81) = v38;
        }
        // 0x62a16
        *v82 = v84;
    } else {
        // 0x629df
        *v39 = *(int64_t *)v83;
        *(int64_t *)*v82 = v38;
    }
    // 0x62a20
    *v59 = *v59 + 1;
    goto lab_0x62a27;
  lab_0x62a27:
    // 0x62a27
    function_254fe(v37);
    function_254fe((int64_t)&v35);
    *v36 = *v36 + 1;
    goto lab_0x62a42;
}

// Address range: 0x4ae220 - 0x4ae718
int64_t function_4ae220(int64_t a1, int64_t a2, int64_t a3) {
    unsigned char v1 = *(char *)(a2 + 1); // 0x4ae249
    unsigned char v2 = *(char *)(a2 + 2); // 0x4ae24d
    unsigned char v3 = *(char *)(a2 + 6); // 0x4ae251
    unsigned char v4 = *(char *)(a2 + 9); // 0x4ae255
    unsigned char v5 = *(char *)(a2 + 14); // 0x4ae259
    int64_t v6 = *(int64_t *)(a1 + 8); // 0x4ae25e
    int64_t v7; // 0x4ae220
    int32_t v8 = v7;
    int32_t v9 = v8 >> 1; // 0x4ae27d
    unsigned char v10 = *(char *)(a2 + 3); // 0x4ae288
    int32_t v11 = v9 - 1; // 0x4ae28c
    unsigned char v12 = *(char *)(a2 + 5); // 0x4ae295
    int32_t v13 = *(int32_t *)v6; // 0x4ae299
    int32_t v14 = (256 * (int32_t)v1 | (int32_t)v7 % 256 | 0x10000 * (int32_t)v2 | 0x1000000 * (int32_t)v10) ^ v13; // 0x4ae299
    unsigned char v15 = *(char *)(a2 + 4); // 0x4ae2a1
    unsigned char v16 = *(char *)(a2 + 7); // 0x4ae2a7
    unsigned char v17 = *(char *)(a2 + 10); // 0x4ae2b0
    int32_t v18 = *(int32_t *)(v6 + 4); // 0x4ae2b4
    int64_t v19 = (256 * (int32_t)v12 | 0x10000 * (int32_t)v3 | (int32_t)v15 | 0x1000000 * (int32_t)v16) ^ v18; // 0x4ae2b4
    unsigned char v20 = *(char *)(a2 + 8); // 0x4ae2bd
    unsigned char v21 = *(char *)(a2 + 11); // 0x4ae2c3
    unsigned char v22 = *(char *)(a2 + 13); // 0x4ae2cc
    int32_t v23 = *(int32_t *)(v6 + 8); // 0x4ae2d0
    int64_t v24 = (0x10000 * (int32_t)v17 | 256 * (int32_t)v4 | (int32_t)v20 | 0x1000000 * (int32_t)v21) ^ v23; // 0x4ae2d0
    unsigned char v25 = *(char *)(a2 + 12); // 0x4ae2da
    unsigned char v26 = *(char *)(a2 + 15); // 0x4ae2df
    int32_t v27 = *(int32_t *)(v6 + 12); // 0x4ae2eb
    int64_t v28 = (256 * (int32_t)v22 | 0x10000 * (int32_t)v5 | (int32_t)v25 | 0x1000000 * (int32_t)v26) ^ v27; // 0x4ae2eb
    int64_t v29 = v6 + 16; // 0x4ae2ef
    int64_t v30 = v29; // 0x4ae2fb
    int32_t v31 = v11; // 0x4ae2fb
    int64_t v32 = v29; // 0x4ae2fb
    int64_t v33 = v19; // 0x4ae2fb
    int32_t v34 = v14; // 0x4ae2fb
    int64_t v35 = v28; // 0x4ae2fb
    int64_t v36 = v24; // 0x4ae2fb
    if (v8 >= 2 && v11 != 0) {
        int32_t v37 = *(int32_t *)((int64_t)(4 * v34 & 1020) + (int64_t)&g35); // 0x4ae34e
        int32_t v38 = *(int32_t *)((v35 / 0x400000 & 1020) + (int64_t)&g38); // 0x4ae352
        int32_t v39 = *(int32_t *)((v33 / 64 & 1020) + (int64_t)&g36); // 0x4ae35f
        int32_t v40 = *(int32_t *)((v36 / 0x4000 & 1020) + (int64_t)&g37); // 0x4ae36c
        uint32_t v41 = v38 ^ v37 ^ *(int32_t *)v30 ^ v39 ^ v40; // 0x4ae36c
        int32_t v42 = *(int32_t *)((4 * v33 & 1020) + (int64_t)&g35); // 0x4ae376
        int32_t v43 = *(int32_t *)((int64_t)(4 * v34 / 0x1000000) + (int64_t)&g38); // 0x4ae37a
        int32_t v44 = *(int32_t *)((v36 / 64 & 1020) + (int64_t)&g36); // 0x4ae38c
        int32_t v45 = *(int32_t *)((v35 / 0x4000 & 1020) + (int64_t)&g37); // 0x4ae398
        uint32_t v46 = v43 ^ v42 ^ *(int32_t *)(v30 + 4) ^ v44 ^ v45; // 0x4ae398
        int32_t v47 = *(int32_t *)((4 * v36 & 1020) + (int64_t)&g35); // 0x4ae3a3
        int32_t v48 = *(int32_t *)((v33 / 0x400000 & 1020) + (int64_t)&g38); // 0x4ae3a7
        int32_t v49 = *(int32_t *)((v35 / 64 & 1020) + (int64_t)&g36); // 0x4ae3ba
        int32_t v50 = *(int32_t *)((4 * v35 & 1020) + (int64_t)&g35); // 0x4ae3c3
        int32_t v51 = *(int32_t *)((v36 / 0x400000 & 1020) + (int64_t)&g38); // 0x4ae3cb
        int32_t v52 = *(int32_t *)((int64_t)(v34 / 0x4000 & 1020) + (int64_t)&g37); // 0x4ae3da
        uint32_t v53 = v48 ^ v47 ^ *(int32_t *)(v30 + 8) ^ v49 ^ v52; // 0x4ae3da
        int32_t v54 = *(int32_t *)((int64_t)(v34 / 64 & 1020) + (int64_t)&g36); // 0x4ae3e9
        int32_t v55 = *(int32_t *)((v33 / 0x4000 & 1020) + (int64_t)&g37); // 0x4ae3f1
        uint32_t v56 = v51 ^ v50 ^ *(int32_t *)(v30 + 12) ^ v54 ^ v55; // 0x4ae3f1
        int32_t v57 = *(int32_t *)((int64_t)(4 * v41 & 1020) + (int64_t)&g35); // 0x4ae3f5
        int32_t v58 = *(int32_t *)((int64_t)(4 * v56 / 0x1000000) + (int64_t)&g38); // 0x4ae3fe
        int32_t v59 = *(int32_t *)((int64_t)(v46 / 64 & 1020) + (int64_t)&g36); // 0x4ae40f
        int32_t v60 = *(int32_t *)((int64_t)(v53 / 0x4000 & 1020) + (int64_t)&g37); // 0x4ae425
        v34 = v57 ^ *(int32_t *)(v30 + 16) ^ v58 ^ v59 ^ v60;
        int32_t v61 = *(int32_t *)((int64_t)(4 * v46 & 1020) + (int64_t)&g35); // 0x4ae439
        int32_t v62 = *(int32_t *)((int64_t)(4 * v41 / 0x1000000) + (int64_t)&g38); // 0x4ae43d
        int32_t v63 = *(int32_t *)((int64_t)(v53 / 64 & 1020) + (int64_t)&g36); // 0x4ae44c
        int32_t v64 = *(int32_t *)((int64_t)(v56 / 0x4000 & 1020) + (int64_t)&g37); // 0x4ae462
        v33 = (int64_t)(v62 ^ v61 ^ *(int32_t *)(v30 + 20) ^ v63 ^ v64);
        int32_t v65 = *(int32_t *)((int64_t)(4 * v53 & 1020) + (int64_t)&g35); // 0x4ae46e
        int32_t v66 = *(int32_t *)((int64_t)(4 * v56 & 1020) + (int64_t)&g35); // 0x4ae472
        int32_t v67 = *(int32_t *)((int64_t)(4 * v46 / 0x1000000) + (int64_t)&g38); // 0x4ae479
        int32_t v68 = *(int32_t *)((int64_t)(4 * v53 / 0x1000000) + (int64_t)&g38); // 0x4ae47d
        int32_t v69 = *(int32_t *)((int64_t)(v56 / 64 & 1020) + (int64_t)&g36); // 0x4ae496
        int32_t v70 = *(int32_t *)((int64_t)(v41 / 64 & 1020) + (int64_t)&g36); // 0x4ae49a
        int32_t v71 = *(int32_t *)((int64_t)(v41 / 0x4000 & 1020) + (int64_t)&g37); // 0x4ae4a6
        v36 = (int64_t)(v67 ^ v65 ^ *(int32_t *)(v30 + 24) ^ v69 ^ v71);
        int32_t v72 = *(int32_t *)((int64_t)(v46 / 0x4000 & 1020) + (int64_t)&g37); // 0x4ae4aa
        v35 = (int64_t)(v68 ^ v66 ^ *(int32_t *)(v30 + 28) ^ v70 ^ v72);
        v31--;
        v30 += 32;
        while (v31 != 0) {
            // 0x4ae330
            v37 = *(int32_t *)((int64_t)(4 * v34 & 1020) + (int64_t)&g35);
            v38 = *(int32_t *)((v35 / 0x400000 & 1020) + (int64_t)&g38);
            v39 = *(int32_t *)((v33 / 64 & 1020) + (int64_t)&g36);
            v40 = *(int32_t *)((v36 / 0x4000 & 1020) + (int64_t)&g37);
            v41 = v38 ^ v37 ^ *(int32_t *)v30 ^ v39 ^ v40;
            v42 = *(int32_t *)((4 * v33 & 1020) + (int64_t)&g35);
            v43 = *(int32_t *)((int64_t)(4 * v34 / 0x1000000) + (int64_t)&g38);
            v44 = *(int32_t *)((v36 / 64 & 1020) + (int64_t)&g36);
            v45 = *(int32_t *)((v35 / 0x4000 & 1020) + (int64_t)&g37);
            v46 = v43 ^ v42 ^ *(int32_t *)(v30 + 4) ^ v44 ^ v45;
            v47 = *(int32_t *)((4 * v36 & 1020) + (int64_t)&g35);
            v48 = *(int32_t *)((v33 / 0x400000 & 1020) + (int64_t)&g38);
            v49 = *(int32_t *)((v35 / 64 & 1020) + (int64_t)&g36);
            v50 = *(int32_t *)((4 * v35 & 1020) + (int64_t)&g35);
            v51 = *(int32_t *)((v36 / 0x400000 & 1020) + (int64_t)&g38);
            v52 = *(int32_t *)((int64_t)(v34 / 0x4000 & 1020) + (int64_t)&g37);
            v53 = v48 ^ v47 ^ *(int32_t *)(v30 + 8) ^ v49 ^ v52;
            v54 = *(int32_t *)((int64_t)(v34 / 64 & 1020) + (int64_t)&g36);
            v55 = *(int32_t *)((v33 / 0x4000 & 1020) + (int64_t)&g37);
            v56 = v51 ^ v50 ^ *(int32_t *)(v30 + 12) ^ v54 ^ v55;
            v57 = *(int32_t *)((int64_t)(4 * v41 & 1020) + (int64_t)&g35);
            v58 = *(int32_t *)((int64_t)(4 * v56 / 0x1000000) + (int64_t)&g38);
            v59 = *(int32_t *)((int64_t)(v46 / 64 & 1020) + (int64_t)&g36);
            v60 = *(int32_t *)((int64_t)(v53 / 0x4000 & 1020) + (int64_t)&g37);
            v34 = v57 ^ *(int32_t *)(v30 + 16) ^ v58 ^ v59 ^ v60;
            v61 = *(int32_t *)((int64_t)(4 * v46 & 1020) + (int64_t)&g35);
            v62 = *(int32_t *)((int64_t)(4 * v41 / 0x1000000) + (int64_t)&g38);
            v63 = *(int32_t *)((int64_t)(v53 / 64 & 1020) + (int64_t)&g36);
            v64 = *(int32_t *)((int64_t)(v56 / 0x4000 & 1020) + (int64_t)&g37);
            v33 = (int64_t)(v62 ^ v61 ^ *(int32_t *)(v30 + 20) ^ v63 ^ v64);
            v65 = *(int32_t *)((int64_t)(4 * v53 & 1020) + (int64_t)&g35);
            v66 = *(int32_t *)((int64_t)(4 * v56 & 1020) + (int64_t)&g35);
            v67 = *(int32_t *)((int64_t)(4 * v46 / 0x1000000) + (int64_t)&g38);
            v68 = *(int32_t *)((int64_t)(4 * v53 / 0x1000000) + (int64_t)&g38);
            v69 = *(int32_t *)((int64_t)(v56 / 64 & 1020) + (int64_t)&g36);
            v70 = *(int32_t *)((int64_t)(v41 / 64 & 1020) + (int64_t)&g36);
            v71 = *(int32_t *)((int64_t)(v41 / 0x4000 & 1020) + (int64_t)&g37);
            v36 = (int64_t)(v67 ^ v65 ^ *(int32_t *)(v30 + 24) ^ v69 ^ v71);
            v72 = *(int32_t *)((int64_t)(v46 / 0x4000 & 1020) + (int64_t)&g37);
            v35 = (int64_t)(v68 ^ v66 ^ *(int32_t *)(v30 + 28) ^ v70 ^ v72);
            v31--;
            v30 += 32;
        }
        // 0x4ae4bc
        v32 = 32 * (int64_t)(v9 - 2) + 48 + v6;
    }
    uint64_t v73 = (int64_t)v34;
    int32_t v74 = *(int32_t *)((4 * v73 & 1020) + (int64_t)&g35); // 0x4ae4e6
    int32_t v75 = *(int32_t *)((v35 / 0x400000 & 1020) + (int64_t)&g38); // 0x4ae4ed
    int32_t v76 = *(int32_t *)((v33 / 64 & 1020) + (int64_t)&g36); // 0x4ae506
    int32_t v77 = *(int32_t *)((v36 / 0x4000 & 1020) + (int64_t)&g37); // 0x4ae513
    uint32_t v78 = v75 ^ v74 ^ *(int32_t *)v32 ^ v76 ^ v77; // 0x4ae513
    int32_t v79 = *(int32_t *)((4 * v33 & 1020) + (int64_t)&g35); // 0x4ae51d
    int32_t v80 = *(int32_t *)((v73 / 0x400000 & 1020) + (int64_t)&g38); // 0x4ae521
    int32_t v81 = *(int32_t *)((v36 / 64 & 1020) + (int64_t)&g36); // 0x4ae532
    int32_t v82 = *(int32_t *)((v35 / 0x4000 & 1020) + (int64_t)&g37); // 0x4ae53d
    uint32_t v83 = v80 ^ v79 ^ *(int32_t *)(v32 + 4) ^ v81 ^ v82; // 0x4ae53d
    int32_t v84 = *(int32_t *)((4 * v36 & 1020) + (int64_t)&g35); // 0x4ae548
    int32_t v85 = *(int32_t *)((v33 / 0x400000 & 1020) + (int64_t)&g38); // 0x4ae54c
    int32_t v86 = *(int32_t *)((4 * v35 & 1020) + (int64_t)&g35); // 0x4ae558
    int32_t v87 = *(int32_t *)((v36 / 0x400000 & 1020) + (int64_t)&g38); // 0x4ae55f
    int32_t v88 = *(int32_t *)((v35 / 64 & 1020) + (int64_t)&g36); // 0x4ae574
    int32_t v89 = *(int32_t *)((v73 / 0x4000 & 1020) + (int64_t)&g37); // 0x4ae581
    uint32_t v90 = v85 ^ v84 ^ *(int32_t *)(v32 + 8) ^ v88 ^ v89; // 0x4ae581
    int32_t v91 = *(int32_t *)((v73 / 64 & 1020) + (int64_t)&g36); // 0x4ae58e
    int32_t v92 = *(int32_t *)((v33 / 0x4000 & 1020) + (int64_t)&g37); // 0x4ae599
    uint32_t v93 = v87 ^ v86 ^ *(int32_t *)(v32 + 12) ^ v91 ^ v92; // 0x4ae599
    char v94 = *(char *)((int64_t)(v78 % 256) + (int64_t)&g33); // 0x4ae5a4
    int32_t v95 = *(int32_t *)(v32 + 16); // 0x4ae5a9
    unsigned char v96 = *(char *)((int64_t)(v93 / 0x1000000) + (int64_t)&g33); // 0x4ae5b2
    unsigned char v97 = *(char *)((int64_t)(v83 / 256 % 256) + (int64_t)&g33); // 0x4ae5c2
    unsigned char v98 = *(char *)((int64_t)(v90 / 0x10000 % 256) + (int64_t)&g33); // 0x4ae5d5
    char v99 = *(char *)((int64_t)(v83 % 256) + (int64_t)&g33); // 0x4ae5e3
    int32_t v100 = *(int32_t *)(v32 + 20); // 0x4ae5ea
    unsigned char v101 = *(char *)((int64_t)(v78 / 0x1000000) + (int64_t)&g33); // 0x4ae5f5
    unsigned char v102 = *(char *)((int64_t)(v83 / 0x1000000) + (int64_t)&g33); // 0x4ae5f9
    unsigned char v103 = *(char *)((int64_t)(v90 / 256 % 256) + (int64_t)&g33); // 0x4ae615
    unsigned char v104 = *(char *)((int64_t)(v93 % 256) + (int64_t)&g33); // 0x4ae627
    int32_t v105 = *(int32_t *)(v32 + 28); // 0x4ae62e
    int32_t v106 = v105 ^ (int32_t)v104; // 0x4ae62e
    unsigned char v107 = *(char *)((int64_t)(v93 / 0x10000 % 256) + (int64_t)&g33); // 0x4ae631
    char v108 = *(char *)((int64_t)(v90 % 256) + (int64_t)&g33); // 0x4ae643
    unsigned char v109 = *(char *)((int64_t)(v90 / 0x1000000) + (int64_t)&g33); // 0x4ae647
    int32_t v110 = *(int32_t *)(v32 + 24); // 0x4ae64c
    unsigned char v111 = *(char *)((int64_t)(v93 / 256 % 256) + (int64_t)&g33); // 0x4ae656
    uint32_t v112 = 0x1000000 * (int32_t)v109 ^ v106; // 0x4ae65e
    unsigned char v113 = *(char *)((int64_t)(v78 / 256 % 256) + (int64_t)&g33); // 0x4ae672
    unsigned char v114 = *(char *)((int64_t)(v78 / 0x10000 % 256) + (int64_t)&g33); // 0x4ae67a
    unsigned char v115 = *(char *)((int64_t)(v83 / 0x10000 % 256) + (int64_t)&g33); // 0x4ae67f
    *(char *)a3 = v94 ^ (char)v95;
    *(char *)(a3 + 4) = v99 ^ (char)v100;
    *(char *)(a3 + 8) = v108 ^ (char)v110;
    *(char *)(a3 + 12) = (char)v106;
    *(char *)(a3 + 1) = (char)((256 * (int32_t)v97 ^ v95) / 256);
    *(char *)(a3 + 3) = (char)((0x1000000 * (int32_t)v96 ^ v95) / 0x1000000);
    *(char *)(a3 + 2) = (char)((0x10000 * (int32_t)v98 ^ v95) / 0x10000);
    *(char *)(a3 + 5) = (char)((256 * (int32_t)v103 ^ v100) / 256);
    *(char *)(a3 + 7) = (char)((0x1000000 * (int32_t)v101 ^ v100) / 0x1000000);
    *(char *)(a3 + 6) = (char)((0x10000 * (int32_t)v107 ^ v100) / 0x10000);
    *(char *)(a3 + 9) = (char)((256 * (int32_t)v111 ^ v110) / 256);
    *(char *)(a3 + 11) = (char)((v110 ^ 0x1000000 * (int32_t)v102) / 0x1000000);
    *(char *)(a3 + 10) = (char)((0x10000 * (int32_t)v114 ^ v110) / 0x10000);
    *(char *)(a3 + 13) = (char)((256 * (int32_t)v113 ^ v105) / 256);
    uint32_t result = (0x10000 * (int32_t)v115 ^ v112) / 0x10000; // 0x4ae708
    *(char *)(a3 + 15) = (char)(v112 / 0x1000000);
    *(char *)(a3 + 14) = (char)result;
    return result;
}

// Address range: 0x4ae720 - 0x4aec13
int64_t function_4ae720(int64_t a1, int64_t a2, int64_t a3) {
    unsigned char v1 = *(char *)(a2 + 1); // 0x4ae749
    unsigned char v2 = *(char *)(a2 + 2); // 0x4ae74d
    unsigned char v3 = *(char *)(a2 + 6); // 0x4ae751
    unsigned char v4 = *(char *)(a2 + 9); // 0x4ae755
    unsigned char v5 = *(char *)(a2 + 14); // 0x4ae759
    int64_t v6 = *(int64_t *)(a1 + 8); // 0x4ae75e
    int64_t v7; // 0x4ae720
    int32_t v8 = v7;
    int32_t v9 = v8 >> 1; // 0x4ae779
    int32_t v10 = v9 - 1; // 0x4ae782
    unsigned char v11 = *(char *)(a2 + 3); // 0x4ae788
    unsigned char v12 = *(char *)(a2 + 5); // 0x4ae791
    int32_t v13 = *(int32_t *)v6; // 0x4ae795
    int64_t v14 = (256 * (int32_t)v1 | (int32_t)v7 % 256 | 0x10000 * (int32_t)v2 | 0x1000000 * (int32_t)v11) ^ v13; // 0x4ae795
    unsigned char v15 = *(char *)(a2 + 4); // 0x4ae79d
    unsigned char v16 = *(char *)(a2 + 7); // 0x4ae7a3
    unsigned char v17 = *(char *)(a2 + 10); // 0x4ae7ac
    int32_t v18 = *(int32_t *)(v6 + 4); // 0x4ae7b0
    int32_t v19 = (256 * (int32_t)v12 | 0x10000 * (int32_t)v3 | (int32_t)v15 | 0x1000000 * (int32_t)v16) ^ v18; // 0x4ae7b0
    unsigned char v20 = *(char *)(a2 + 8); // 0x4ae7b9
    unsigned char v21 = *(char *)(a2 + 11); // 0x4ae7bf
    unsigned char v22 = *(char *)(a2 + 13); // 0x4ae7c8
    int32_t v23 = *(int32_t *)(v6 + 8); // 0x4ae7cc
    int64_t v24 = (0x10000 * (int32_t)v17 | 256 * (int32_t)v4 | (int32_t)v20 | 0x1000000 * (int32_t)v21) ^ v23; // 0x4ae7cc
    unsigned char v25 = *(char *)(a2 + 12); // 0x4ae7d6
    unsigned char v26 = *(char *)(a2 + 15); // 0x4ae7db
    int32_t v27 = *(int32_t *)(v6 + 12); // 0x4ae7e7
    int64_t v28 = (256 * (int32_t)v22 | 0x10000 * (int32_t)v5 | (int32_t)v25 | 0x1000000 * (int32_t)v26) ^ v27; // 0x4ae7e7
    int64_t v29 = v6 + 16; // 0x4ae7eb
    int64_t v30 = v29; // 0x4ae7f7
    int32_t v31 = v10; // 0x4ae7f7
    int64_t v32 = v29; // 0x4ae7f7
    int32_t v33 = v19; // 0x4ae7f7
    int64_t v34 = v24; // 0x4ae7f7
    int64_t v35 = v28; // 0x4ae7f7
    int64_t v36 = v14; // 0x4ae7f7
    if (v8 >= 2 && v10 != 0) {
        int32_t v37 = *(int32_t *)((4 * v36 & 1020) + (int64_t)&g39); // 0x4ae83c
        int32_t v38 = *(int32_t *)((int64_t)(4 * v33 / 0x1000000) + (int64_t)&g42); // 0x4ae84f
        int32_t v39 = *(int32_t *)((v35 / 64 & 1020) + (int64_t)&g40); // 0x4ae859
        int32_t v40 = *(int32_t *)((v34 / 0x4000 & 1020) + (int64_t)&g41); // 0x4ae866
        uint32_t v41 = v38 ^ v37 ^ *(int32_t *)v30 ^ v39 ^ v40; // 0x4ae866
        int32_t v42 = *(int32_t *)((int64_t)(4 * v33 & 1020) + (int64_t)&g39); // 0x4ae86f
        int32_t v43 = *(int32_t *)((v34 / 0x400000 & 1020) + (int64_t)&g42); // 0x4ae873
        int32_t v44 = *(int32_t *)((v36 / 64 & 1020) + (int64_t)&g40); // 0x4ae87d
        int32_t v45 = *(int32_t *)((4 * v35 & 1020) + (int64_t)&g39); // 0x4ae889
        int32_t v46 = *(int32_t *)((v35 / 0x4000 & 1020) + (int64_t)&g41); // 0x4ae896
        uint32_t v47 = v43 ^ v42 ^ *(int32_t *)(v30 + 4) ^ v44 ^ v46; // 0x4ae896
        int32_t v48 = *(int32_t *)((4 * v34 & 1020) + (int64_t)&g39); // 0x4ae8a0
        int32_t v49 = *(int32_t *)((v35 / 0x400000 & 1020) + (int64_t)&g42); // 0x4ae8a4
        int32_t v50 = *(int32_t *)((v36 / 0x400000 & 1020) + (int64_t)&g42); // 0x4ae8b6
        int32_t v51 = *(int32_t *)((v34 / 64 & 1020) + (int64_t)&g40); // 0x4ae8c8
        int32_t v52 = *(int32_t *)((int64_t)(v33 / 64 & 1020) + (int64_t)&g40); // 0x4ae8d0
        int32_t v53 = *(int32_t *)((v36 / 0x4000 & 1020) + (int64_t)&g41); // 0x4ae8d8
        uint32_t v54 = v49 ^ v48 ^ *(int32_t *)(v30 + 8) ^ v52 ^ v53; // 0x4ae8d8
        int32_t v55 = *(int32_t *)((int64_t)(4 * v41 & 1020) + (int64_t)&g39); // 0x4ae8dc
        int32_t v56 = *(int32_t *)((int64_t)(v33 / 0x4000 & 1020) + (int64_t)&g41); // 0x4ae8e6
        uint32_t v57 = v50 ^ v45 ^ *(int32_t *)(v30 + 12) ^ v51 ^ v56; // 0x4ae8e6
        int32_t v58 = *(int32_t *)((int64_t)(4 * v47 / 0x1000000) + (int64_t)&g42); // 0x4ae8ef
        int32_t v59 = *(int32_t *)((int64_t)(v57 / 64 & 1020) + (int64_t)&g40); // 0x4ae901
        int32_t v60 = *(int32_t *)((int64_t)(4 * v54 / 0x1000000) + (int64_t)&g42); // 0x4ae90d
        int32_t v61 = *(int32_t *)((int64_t)(v54 / 0x4000 & 1020) + (int64_t)&g41); // 0x4ae917
        v36 = (int64_t)(v58 ^ v55 ^ *(int32_t *)(v30 + 16) ^ v59 ^ v61);
        int32_t v62 = *(int32_t *)((int64_t)(4 * v47 & 1020) + (int64_t)&g39); // 0x4ae91f
        int32_t v63 = *(int32_t *)((int64_t)(v41 / 64 & 1020) + (int64_t)&g40); // 0x4ae936
        int32_t v64 = *(int32_t *)((int64_t)(v57 / 0x4000 & 1020) + (int64_t)&g41); // 0x4ae94a
        v33 = *(int32_t *)(v30 + 20) ^ v60 ^ v62 ^ v63 ^ v64;
        int32_t v65 = *(int32_t *)((int64_t)(4 * v54 & 1020) + (int64_t)&g39); // 0x4ae95c
        int32_t v66 = *(int32_t *)((int64_t)(4 * v57 / 0x1000000) + (int64_t)&g42); // 0x4ae960
        int32_t v67 = *(int32_t *)((int64_t)(v47 / 64 & 1020) + (int64_t)&g40); // 0x4ae972
        int32_t v68 = *(int32_t *)((int64_t)(4 * v57 & 1020) + (int64_t)&g39); // 0x4ae98b
        int32_t v69 = *(int32_t *)((int64_t)(v41 / 0x4000 & 1020) + (int64_t)&g41); // 0x4ae98f
        v34 = (int64_t)(v66 ^ v65 ^ *(int32_t *)(v30 + 24) ^ v67 ^ v69);
        int32_t v70 = *(int32_t *)((int64_t)(4 * v41 / 0x1000000) + (int64_t)&g42); // 0x4ae993
        int32_t v71 = *(int32_t *)((int64_t)(v54 / 64 & 1020) + (int64_t)&g40); // 0x4ae9a5
        int32_t v72 = *(int32_t *)((int64_t)(v47 / 0x4000 & 1020) + (int64_t)&g41); // 0x4ae9a9
        v35 = (int64_t)(v70 ^ v68 ^ *(int32_t *)(v30 + 28) ^ v71 ^ v72);
        v31--;
        v30 += 32;
        while (v31 != 0) {
            // 0x4ae830
            v37 = *(int32_t *)((4 * v36 & 1020) + (int64_t)&g39);
            v38 = *(int32_t *)((int64_t)(4 * v33 / 0x1000000) + (int64_t)&g42);
            v39 = *(int32_t *)((v35 / 64 & 1020) + (int64_t)&g40);
            v40 = *(int32_t *)((v34 / 0x4000 & 1020) + (int64_t)&g41);
            v41 = v38 ^ v37 ^ *(int32_t *)v30 ^ v39 ^ v40;
            v42 = *(int32_t *)((int64_t)(4 * v33 & 1020) + (int64_t)&g39);
            v43 = *(int32_t *)((v34 / 0x400000 & 1020) + (int64_t)&g42);
            v44 = *(int32_t *)((v36 / 64 & 1020) + (int64_t)&g40);
            v45 = *(int32_t *)((4 * v35 & 1020) + (int64_t)&g39);
            v46 = *(int32_t *)((v35 / 0x4000 & 1020) + (int64_t)&g41);
            v47 = v43 ^ v42 ^ *(int32_t *)(v30 + 4) ^ v44 ^ v46;
            v48 = *(int32_t *)((4 * v34 & 1020) + (int64_t)&g39);
            v49 = *(int32_t *)((v35 / 0x400000 & 1020) + (int64_t)&g42);
            v50 = *(int32_t *)((v36 / 0x400000 & 1020) + (int64_t)&g42);
            v51 = *(int32_t *)((v34 / 64 & 1020) + (int64_t)&g40);
            v52 = *(int32_t *)((int64_t)(v33 / 64 & 1020) + (int64_t)&g40);
            v53 = *(int32_t *)((v36 / 0x4000 & 1020) + (int64_t)&g41);
            v54 = v49 ^ v48 ^ *(int32_t *)(v30 + 8) ^ v52 ^ v53;
            v55 = *(int32_t *)((int64_t)(4 * v41 & 1020) + (int64_t)&g39);
            v56 = *(int32_t *)((int64_t)(v33 / 0x4000 & 1020) + (int64_t)&g41);
            v57 = v50 ^ v45 ^ *(int32_t *)(v30 + 12) ^ v51 ^ v56;
            v58 = *(int32_t *)((int64_t)(4 * v47 / 0x1000000) + (int64_t)&g42);
            v59 = *(int32_t *)((int64_t)(v57 / 64 & 1020) + (int64_t)&g40);
            v60 = *(int32_t *)((int64_t)(4 * v54 / 0x1000000) + (int64_t)&g42);
            v61 = *(int32_t *)((int64_t)(v54 / 0x4000 & 1020) + (int64_t)&g41);
            v36 = (int64_t)(v58 ^ v55 ^ *(int32_t *)(v30 + 16) ^ v59 ^ v61);
            v62 = *(int32_t *)((int64_t)(4 * v47 & 1020) + (int64_t)&g39);
            v63 = *(int32_t *)((int64_t)(v41 / 64 & 1020) + (int64_t)&g40);
            v64 = *(int32_t *)((int64_t)(v57 / 0x4000 & 1020) + (int64_t)&g41);
            v33 = *(int32_t *)(v30 + 20) ^ v60 ^ v62 ^ v63 ^ v64;
            v65 = *(int32_t *)((int64_t)(4 * v54 & 1020) + (int64_t)&g39);
            v66 = *(int32_t *)((int64_t)(4 * v57 / 0x1000000) + (int64_t)&g42);
            v67 = *(int32_t *)((int64_t)(v47 / 64 & 1020) + (int64_t)&g40);
            v68 = *(int32_t *)((int64_t)(4 * v57 & 1020) + (int64_t)&g39);
            v69 = *(int32_t *)((int64_t)(v41 / 0x4000 & 1020) + (int64_t)&g41);
            v34 = (int64_t)(v66 ^ v65 ^ *(int32_t *)(v30 + 24) ^ v67 ^ v69);
            v70 = *(int32_t *)((int64_t)(4 * v41 / 0x1000000) + (int64_t)&g42);
            v71 = *(int32_t *)((int64_t)(v54 / 64 & 1020) + (int64_t)&g40);
            v72 = *(int32_t *)((int64_t)(v47 / 0x4000 & 1020) + (int64_t)&g41);
            v35 = (int64_t)(v70 ^ v68 ^ *(int32_t *)(v30 + 28) ^ v71 ^ v72);
            v31--;
            v30 += 32;
        }
        // 0x4ae9b7
        v32 = 32 * (int64_t)(v9 - 2) + 48 + v6;
    }
    uint64_t v73 = (int64_t)v33;
    int32_t v74 = *(int32_t *)((4 * v36 & 1020) + (int64_t)&g39); // 0x4ae9e1
    int32_t v75 = *(int32_t *)((v73 / 0x400000 & 1020) + (int64_t)&g42); // 0x4ae9e7
    int32_t v76 = *(int32_t *)((v35 / 64 & 1020) + (int64_t)&g40); // 0x4aea00
    int32_t v77 = *(int32_t *)((v34 / 0x4000 & 1020) + (int64_t)&g41); // 0x4aea0d
    uint32_t v78 = v75 ^ v74 ^ *(int32_t *)v32 ^ v76 ^ v77; // 0x4aea0d
    int32_t v79 = *(int32_t *)((4 * v73 & 1020) + (int64_t)&g39); // 0x4aea14
    int32_t v80 = *(int32_t *)((v34 / 0x400000 & 1020) + (int64_t)&g42); // 0x4aea18
    int32_t v81 = *(int32_t *)((v36 / 64 & 1020) + (int64_t)&g40); // 0x4aea27
    int32_t v82 = *(int32_t *)((4 * v35 & 1020) + (int64_t)&g39); // 0x4aea33
    int32_t v83 = *(int32_t *)((v35 / 0x4000 & 1020) + (int64_t)&g41); // 0x4aea3b
    uint32_t v84 = v80 ^ v79 ^ *(int32_t *)(v32 + 4) ^ v81 ^ v83; // 0x4aea3b
    int32_t v85 = *(int32_t *)((4 * v34 & 1020) + (int64_t)&g39); // 0x4aea45
    int32_t v86 = *(int32_t *)((v35 / 0x400000 & 1020) + (int64_t)&g42); // 0x4aea49
    int32_t v87 = *(int32_t *)((v73 / 64 & 1020) + (int64_t)&g40); // 0x4aea5a
    int32_t v88 = *(int32_t *)((v36 / 0x4000 & 1020) + (int64_t)&g41); // 0x4aea65
    uint32_t v89 = v86 ^ v85 ^ *(int32_t *)(v32 + 8) ^ v87 ^ v88; // 0x4aea65
    int32_t v90 = *(int32_t *)((v36 / 0x400000 & 1020) + (int64_t)&g42); // 0x4aea71
    int32_t v91 = *(int32_t *)((v34 / 64 & 1020) + (int64_t)&g40); // 0x4aea7f
    int32_t v92 = *(int32_t *)((v73 / 0x4000 & 1020) + (int64_t)&g41); // 0x4aea8c
    uint32_t v93 = v90 ^ v82 ^ *(int32_t *)(v32 + 12) ^ v91 ^ v92; // 0x4aea8c
    char v94 = *(char *)((int64_t)(v78 % 256) + (int64_t)&g34); // 0x4aea97
    int32_t v95 = *(int32_t *)(v32 + 16); // 0x4aeaa1
    unsigned char v96 = *(char *)((int64_t)(v84 / 0x1000000) + (int64_t)&g34); // 0x4aeaa5
    unsigned char v97 = *(char *)((int64_t)(v93 / 256 % 256) + (int64_t)&g34); // 0x4aeab2
    unsigned char v98 = *(char *)((int64_t)(v89 / 0x10000 % 256) + (int64_t)&g34); // 0x4aeac4
    char v99 = *(char *)((int64_t)(v84 % 256) + (int64_t)&g34); // 0x4aead2
    int32_t v100 = *(int32_t *)(v32 + 20); // 0x4aead9
    unsigned char v101 = *(char *)((int64_t)(v89 / 0x1000000) + (int64_t)&g34); // 0x4aeae0
    unsigned char v102 = *(char *)((int64_t)(v78 / 256 % 256) + (int64_t)&g34); // 0x4aeaf0
    unsigned char v103 = *(char *)((int64_t)(v93 / 0x10000 % 256) + (int64_t)&g34); // 0x4aeb0f
    char v104 = *(char *)((int64_t)(v89 % 256) + (int64_t)&g34); // 0x4aeb20
    unsigned char v105 = *(char *)((int64_t)(v89 / 256 % 256) + (int64_t)&g34); // 0x4aeb24
    int32_t v106 = *(int32_t *)(v32 + 24); // 0x4aeb28
    unsigned char v107 = *(char *)((int64_t)(v93 % 256) + (int64_t)&g34); // 0x4aeb36
    unsigned char v108 = *(char *)((int64_t)(v93 / 0x1000000) + (int64_t)&g34); // 0x4aeb3a
    unsigned char v109 = *(char *)((int64_t)(v84 / 256 % 256) + (int64_t)&g34); // 0x4aeb49
    int32_t v110 = *(int32_t *)(v32 + 28); // 0x4aeb53
    int32_t v111 = v110 ^ (int32_t)v107; // 0x4aeb53
    unsigned char v112 = *(char *)((int64_t)(v78 / 0x1000000) + (int64_t)&g34); // 0x4aeb64
    unsigned char v113 = *(char *)((int64_t)(v78 / 0x10000 % 256) + (int64_t)&g34); // 0x4aeb71
    unsigned char v114 = *(char *)((int64_t)(v84 / 0x10000 % 256) + (int64_t)&g34); // 0x4aeb76
    *(char *)a3 = v94 ^ (char)v95;
    *(char *)(a3 + 4) = v99 ^ (char)v100;
    uint32_t v115 = 0x1000000 * (int32_t)v112 ^ v111; // 0x4aeb85
    *(char *)(a3 + 8) = v104 ^ (char)v106;
    *(char *)(a3 + 12) = (char)v111;
    *(char *)(a3 + 1) = (char)((256 * (int32_t)v97 ^ v95) / 256);
    *(char *)(a3 + 3) = (char)((0x1000000 * (int32_t)v96 ^ v95) / 0x1000000);
    *(char *)(a3 + 2) = (char)((0x10000 * (int32_t)v98 ^ v95) / 0x10000);
    *(char *)(a3 + 5) = (char)((256 * (int32_t)v102 ^ v100) / 256);
    *(char *)(a3 + 7) = (char)((0x1000000 * (int32_t)v101 ^ v100) / 0x1000000);
    *(char *)(a3 + 6) = (char)((0x10000 * (int32_t)v103 ^ v100) / 0x10000);
    *(char *)(a3 + 9) = (char)((256 * (int32_t)v109 ^ v106) / 256);
    *(char *)(a3 + 11) = (char)((0x1000000 * (int32_t)v108 ^ v106) / 0x1000000);
    *(char *)(a3 + 10) = (char)((0x10000 * (int32_t)v113 ^ v106) / 0x10000);
    *(char *)(a3 + 13) = (char)((v110 ^ 256 * (int32_t)v105) / 256);
    uint32_t result = (0x10000 * (int32_t)v114 ^ v115) / 0x10000; // 0x4aec03
    *(char *)(a3 + 15) = (char)(v115 / 0x1000000);
    *(char *)(a3 + 14) = (char)result;
    return result;
}

// Address range: 0x4b3cf0 - 0x4b41e1
int64_t function_4b3cf0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b3cf0
    if ((int32_t)function_4b1680(a3, 0) < 1) {
        // 0x4b3dfa
        return 0xfffffffc;
    }
    // 0x4b3d18
    int64_t v1; // bp-296, 0x4b3cf0
    function_4b0870(&v1);
    int64_t v2; // bp-264, 0x4b3cf0
    function_4b0870(&v2);
    int64_t v3; // bp-232, 0x4b3cf0
    function_4b0870(&v3);
    int64_t v4; // bp-200, 0x4b3cf0
    function_4b0870(&v4);
    int64_t v5; // bp-328, 0x4b3cf0
    function_4b0870(&v5);
    int64_t v6; // bp-168, 0x4b3cf0
    function_4b0870(&v6);
    int64_t v7; // bp-136, 0x4b3cf0
    function_4b0870(&v7);
    int64_t v8; // bp-104, 0x4b3cf0
    function_4b0870(&v8);
    int64_t v9; // bp-72, 0x4b3cf0
    function_4b0870(&v9);
    int64_t v10 = function_4b36d0(&v5, a2, a3); // 0x4b3d88
    int64_t v11 = v10 & 0xffffffff; // 0x4b3d91
    int64_t v12; // 0x4b3cf0
    int64_t v13; // 0x4b3cf0
    int64_t v14; // 0x4b3cf0
    int64_t v15; // 0x4b3cf0
    int64_t v16; // 0x4b3cf0
    int64_t v17; // 0x4b3cf0
    int64_t v18; // 0x4b3cf0
    int64_t * v19; // 0x4b3e68
    int64_t v20; // 0x4b3cf0
    int64_t v21; // 0x4b406e
    if ((int32_t)v10 == 0) {
        int64_t v22 = function_4b1680((int64_t)&v5, 1); // 0x4b3e1d
        v11 = 0xfffffff2;
        if ((int32_t)v22 == 0) {
            int64_t v23 = function_4b26c0(&v1, a2, a3); // 0x4b3e35
            v11 = v23 & 0xffffffff;
            if ((int32_t)v23 == 0) {
                int64_t v24 = function_4b0ac0(&v2, &v1); // 0x4b3e4e
                v11 = v24 & 0xffffffff;
                if ((int32_t)v24 == 0) {
                    // 0x4b3e5d
                    v19 = (int64_t *)a3;
                    int64_t v25 = function_4b0ac0(&v6, v19); // 0x4b3e68
                    v11 = v25 & 0xffffffff;
                    if ((int32_t)v25 == 0) {
                        int64_t v26 = function_4b0ac0(&v7, v19); // 0x4b3e82
                        v11 = v26 & 0xffffffff;
                        if ((int32_t)v26 == 0) {
                            int64_t v27 = function_4b0d80(&v3, 1); // 0x4b3e9b
                            v11 = v27 & 0xffffffff;
                            if ((int32_t)v27 == 0) {
                                int64_t v28 = function_4b0d80(&v4, 0); // 0x4b3eb4
                                v11 = v28 & 0xffffffff;
                                if ((int32_t)v28 == 0) {
                                    int64_t v29 = function_4b0d80(&v8, 0); // 0x4b3ecd
                                    v11 = v29 & 0xffffffff;
                                    if ((int32_t)v29 == 0) {
                                        int64_t v30 = function_4b0d80(&v9, 1); // 0x4b3ee9
                                        v11 = v30 & 0xffffffff;
                                        if ((int32_t)v30 == 0) {
                                            // 0x4b3ef8
                                            v20 = (int64_t)&v1;
                                            v14 = a3;
                                            while (true) {
                                              lab_0x4b3ef8_2:;
                                                int64_t v31 = v14;
                                                v15 = v31;
                                                char * v32; // 0x4b3cf0
                                                if (*v32 % 2 == 0) {
                                                    int64_t v33 = function_4b1220(&v2, 1); // 0x4b40ad
                                                    v12 = v33;
                                                    if ((int32_t)v33 != 0) {
                                                        // break -> 0x4b3d93
                                                        break;
                                                    }
                                                    // 0x4b40bc
                                                    if (*v32 % 2 != 0) {
                                                        goto lab_0x4b419e;
                                                    } else {
                                                        // 0x4b40ca
                                                        v17 = v31;
                                                        if (*v32 % 2 != 0) {
                                                            goto lab_0x4b419e;
                                                        } else {
                                                            goto lab_0x4b40db;
                                                        }
                                                    }
                                                } else {
                                                    int64_t v34; // 0x4b3cf0
                                                    while (true) {
                                                      lab_0x4b3f06:
                                                        // 0x4b3f06
                                                        v34 = v15;
                                                        if (*v32 % 2 != 0) {
                                                            // break -> 0x4b3fe0
                                                            break;
                                                        }
                                                        int64_t v35 = function_4b1220(&v7, 1); // 0x4b3f24
                                                        v13 = v35;
                                                        if ((int32_t)v35 != 0) {
                                                            // 0x4b3d93
                                                            v11 = v13 & 0xffffffff;
                                                            goto lab_0x4b3d93_6;
                                                        }
                                                        // 0x4b3f33
                                                        if (*v32 % 2 != 0) {
                                                            goto lab_0x4b3f9a;
                                                        } else {
                                                            // 0x4b3f40
                                                            v16 = v34;
                                                            if (*v32 % 2 != 0) {
                                                                goto lab_0x4b3f9a;
                                                            } else {
                                                                goto lab_0x4b3f4d;
                                                            }
                                                        }
                                                    }
                                                    // 0x4b3fe0
                                                    int64_t * v36; // 0x4b3cf0
                                                    int64_t * v37; // 0x4b3cf0
                                                    if ((int32_t)function_4b1590(&v2, &v7, v34) < 0) {
                                                        int64_t v38 = function_4b19a0(&v7, &v7, &v2); // 0x4b415b
                                                        v12 = v38;
                                                        if ((int32_t)v38 != 0) {
                                                            // break -> 0x4b3d93
                                                            break;
                                                        }
                                                        int64_t v39 = function_4b19a0(&v8, &v8, &v3); // 0x4b417a
                                                        v12 = v39;
                                                        v36 = &v4;
                                                        v37 = &v9;
                                                        if ((int32_t)v39 != 0) {
                                                            // break -> 0x4b3d93
                                                            break;
                                                        }
                                                    } else {
                                                        int64_t v40 = function_4b19a0(&v2, &v2, &v7); // 0x4b400a
                                                        v12 = v40;
                                                        if ((int32_t)v40 != 0) {
                                                            // break -> 0x4b3d93
                                                            break;
                                                        }
                                                        int64_t v41 = function_4b19a0(&v3, &v3, &v8); // 0x4b4029
                                                        v12 = v41;
                                                        v36 = &v9;
                                                        v37 = &v4;
                                                        if ((int32_t)v41 != 0) {
                                                            // break -> 0x4b3d93
                                                            break;
                                                        }
                                                    }
                                                    int64_t * v42 = v37;
                                                    int64_t v43 = function_4b19a0(v42, v42, v36); // 0x4b404b
                                                    v12 = v43;
                                                    if ((int32_t)v43 != 0) {
                                                        // break -> 0x4b3d93
                                                        break;
                                                    }
                                                    int64_t v44 = (int64_t)v36;
                                                    if ((int32_t)function_4b1680((int64_t)&v2, 0) == 0) {
                                                        // 0x4b406e
                                                        v21 = (int64_t)&v8;
                                                        if ((int32_t)function_4b1680(v21, 0) >= 0) {
                                                            // 0x4b4115
                                                            v18 = v44;
                                                            goto lab_0x4b4115_2;
                                                        } else {
                                                            goto lab_0x4b4085;
                                                        }
                                                    }
                                                    // 0x4b3ef8
                                                    v14 = v44;
                                                    goto lab_0x4b3ef8_2;
                                                }
                                            }
                                          lab_0x4b3d93_12:
                                            // 0x4b3d93
                                            v11 = v12 & 0xffffffff;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    goto lab_0x4b3d93_6;
  lab_0x4b3f9a:;
    int64_t v47 = function_4b1900(&v8, &v8, &v6); // 0x4b3fad
    v13 = v47;
    if ((int32_t)v47 != 0) {
        // 0x4b3d93
        v11 = v13 & 0xffffffff;
        goto lab_0x4b3d93_6;
    }
    int64_t v48 = function_4b19a0(&v9, &v9, &v1); // 0x4b3fcc
    v13 = v48;
    v16 = v20;
    if ((int32_t)v48 != 0) {
        // 0x4b3d93
        v11 = v13 & 0xffffffff;
        goto lab_0x4b3d93_6;
    }
    goto lab_0x4b3f4d;
  lab_0x4b3f4d:;
    int64_t v49 = function_4b1220(&v8, 1); // 0x4b3f5a
    v13 = v49;
    if ((int32_t)v49 != 0) {
        // 0x4b3d93
        v11 = v13 & 0xffffffff;
        goto lab_0x4b3d93_6;
    }
    int64_t v50 = function_4b1220(&v9, 1); // 0x4b3f76
    v13 = v50;
    v15 = v16;
    if ((int32_t)v50 != 0) {
        // 0x4b3d93
        v11 = v13 & 0xffffffff;
        goto lab_0x4b3d93_6;
    }
    goto lab_0x4b3f06;
  lab_0x4b419e:;
    int64_t v51 = function_4b1900(&v3, &v3, &v6); // 0x4b41ae
    v12 = v51;
    if ((int32_t)v51 != 0) {
        // break -> 0x4b3d93
        goto lab_0x4b3d93_12;
    }
    int64_t v52 = function_4b19a0(&v4, &v4, &v1); // 0x4b41cd
    v12 = v52;
    v17 = v20;
    if ((int32_t)v52 != 0) {
        // break -> 0x4b3d93
        goto lab_0x4b3d93_12;
    }
    goto lab_0x4b40db;
  lab_0x4b40db:;
    int64_t v53 = function_4b1220(&v3, 1); // 0x4b40e5
    v12 = v53;
    if ((int32_t)v53 != 0) {
        // break -> 0x4b3d93
        goto lab_0x4b3d93_12;
    }
    int64_t v54 = function_4b1220(&v4, 1); // 0x4b4101
    v12 = v54;
    if ((int32_t)v54 != 0) {
        // break -> 0x4b3d93
        goto lab_0x4b3d93_12;
    }
    // 0x4b3ef8
    v14 = v17;
    goto lab_0x4b3ef8_2;
  lab_0x4b3d93_6:
    // 0x4b3d93
    function_4b0890(&v1);
    function_4b0890(&v2);
    function_4b0890(&v3);
    function_4b0890(&v4);
    function_4b0890(&v5);
    function_4b0890(&v6);
    function_4b0890(&v7);
    function_4b0890(&v8);
    function_4b0890(&v9);
    // 0x4b3dfa
    return v11 & 0xffffffff;
  lab_0x4b4085:;
    int64_t v45 = function_4b1900(&v8, &v8, v19); // 0x4b4093
    if ((int32_t)v45 == 0) {
        // 0x4b406e
        if ((int32_t)function_4b1680(v21, 0) >= 0) {
            // 0x4b4115
            v18 = a3;
            goto lab_0x4b4115_2;
        } else {
            goto lab_0x4b4085;
        }
    } else {
        // 0x4b3d93
        v11 = v45 & 0xffffffff;
        goto lab_0x4b3d93_6;
    }
  lab_0x4b4115_2:
    // 0x4b4115
    if ((int32_t)function_4b1590(&v8, v19, v18) < 0) {
        // 0x4b41e1
        int64_t result; // 0x4b4120
        return result;
    }
    int64_t v46 = function_4b19a0(&v8, &v8, v19); // 0x4b413b
    v18 = a3;
    if ((int32_t)v46 == 0) {
        goto lab_0x4b4115_2;
    } else {
        // 0x4b3d93
        v11 = v46 & 0xffffffff;
        goto lab_0x4b3d93_6;
    }
}

// Address range: 0x4c3b30 - 0x4c406f
int64_t function_4c3b30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    if (a1 == 0) {
        // 0x4c3d08
        int64_t result; // 0x4c3b30
        return result;
    }
    char * str = (char *)a4; // 0x4c3b63
    char * str2 = (char *)a2; // 0x4c3b63
    char * substr_pos = strstr(str, str2); // 0x4c3b63
    if (substr_pos == NULL) {
        // 0x4c3d08
        return 0xffffef80;
    }
    char * str3 = (char *)a3; // 0x4c3b7a
    char * substr_pos2 = strstr(str, str3); // 0x4c3b7a
    if (substr_pos >= substr_pos2) {
        // 0x4c3d08
        return 0xffffef80;
    }
    int64_t v1 = (int64_t)strlen(str2) + (int64_t)substr_pos; // 0x4c3b9c
    char v2 = *(char *)v1; // 0x4c3b9f
    char v3 = v2; // 0x4c3ba6
    int64_t v4 = v1; // 0x4c3ba6
    if (v2 == 32) {
        // 0x4c3db0
        v4 = v1 + 1;
        v3 = *(char *)v4;
    }
    char v5 = v3; // 0x4c3baf
    int64_t v6 = v4; // 0x4c3baf
    if (v3 == 13) {
        // 0x4c3da0
        v6 = v4 + 1;
        v5 = *(char *)v6;
    }
    // 0x4c3bb5
    if (v5 != 10) {
        // 0x4c3d08
        return 0xffffef80;
    }
    int64_t v7 = (int64_t)substr_pos2; // 0x4c3b7a
    int64_t v8 = (int64_t)strlen(str3) + v7; // 0x4c3bcf
    char v9 = *(char *)v8; // 0x4c3bd2
    int64_t v10 = v8; // 0x4c3bd8
    char v11 = v9; // 0x4c3bd8
    if (v9 == 32) {
        // 0x4c3dd0
        v10 = v8 + 1;
        v11 = *(char *)v10;
    }
    int64_t v12 = v10; // 0x4c3be1
    char v13 = v11; // 0x4c3be1
    if (v11 == 13) {
        // 0x4c3dc0
        v12 = v10 + 1;
        v13 = *(char *)v12;
    }
    int64_t str4 = v6 + 1; // 0x4c3bc6
    *(int64_t *)a7 = v12 - a4 + (int64_t)(v13 == 10);
    int32_t memcmp_rc = memcmp((int64_t *)str4, (int64_t *)"Proc-Type: 4,ENCRYPTED", 22); // 0x4c3c10
    int32_t v14 = 0; // 0x4c3c17
    int64_t v15 = str4; // 0x4c3c17
    int32_t v16 = 0; // 0x4c3c17
    int64_t * str7; // 0x4c3b30
    int64_t v17; // 0x4c3b30
    int64_t v18; // 0x4c3b30
    int32_t v19; // 0x4c3b30
    int64_t v20; // bp-200, 0x4c3b30
    if (memcmp_rc == 0) {
        int64_t v21 = v6 + 23; // 0x4c3d20
        char v22 = *(char *)v21; // 0x4c3d20
        char v23 = v22; // 0x4c3d2a
        int64_t v24 = v21; // 0x4c3d2a
        if (v22 == 13) {
            // 0x4c3ed0
            v24 = v6 + 24;
            v23 = *(char *)v24;
        }
        // 0x4c3d30
        if (v23 != 10) {
            // 0x4c3d08
            return 0xffffef00;
        }
        int64_t v25 = v24 + 1; // 0x4c3d38
        int64_t * str5 = (int64_t *)v25;
        if (memcmp(str5, (int64_t *)"DEK-Info: DES-EDE3-CBC,", 23) == 0) {
            int64_t v26 = function_4c3770(v24 + 24, &v20, 8); // 0x4c3ef9
            v19 = 37;
            v17 = v24 + 40;
            if ((int32_t)v26 != 0) {
                // 0x4c3d08
                return 0xffffee00;
            }
            goto lab_0x4c3e1e;
        } else {
            // 0x4c3d59
            if (memcmp(str5, (int64_t *)"DEK-Info: DES-CBC,", 18) == 0) {
                // 0x4c3df8
                if ((int32_t)function_4c3770(v24 + 19, &v20, 8) != 0) {
                    // 0x4c3d08
                    return 0xffffee00;
                }
                // 0x4c3e14
                v19 = 33;
                v17 = v24 + 35;
                goto lab_0x4c3e1e;
            } else {
                int32_t memcmp_rc2 = memcmp(str5, (int64_t *)"DEK-Info: AES-", 14); // 0x4c3d84
                str7 = str5;
                v18 = v25;
                if (memcmp_rc2 != 0) {
                    // 0x4c3d08
                    return 0xffffed80;
                }
                goto lab_0x4c3e36;
            }
        }
    } else {
        goto lab_0x4c3c22;
    }
  lab_0x4c3c22:
    // 0x4c3c22
    if (v15 == v7) {
        // 0x4c3d08
        return 0xffffef00;
    }
    int64_t v27 = v7 - v15; // 0x4c3c2b
    int32_t v28; // bp-208, 0x4c3b30
    int64_t v29 = function_4cf560(0, 0, (int64_t *)&v28, v15, v27, a6); // 0x4c3c3d
    if ((int32_t)v29 == -44) {
        // 0x4c3d08
        return 0xffffeed4;
    }
    int32_t size = v28; // 0x4c3c52
    int64_t * mem = calloc(1, size); // 0x4c3c64
    int64_t result2 = (int64_t)mem; // 0x4c3c64
    if (mem == NULL) {
        // 0x4c3d08
        return result2;
    }
    int64_t result3 = function_4cf560((int32_t)result2, size, (int64_t *)&v28, v15, v27, (int64_t)size); // 0x4c3c8b
    if ((int32_t)result3 != 0) {
        // 0x4c3f20
        free(mem);
        // 0x4c3d08
        return result3 - (int64_t)(int32_t)&g1 & 0xffffffff;
    }
    // 0x4c3c98
    if (v16 == 0) {
        // branch -> 0x4c3de5
    } else {
        // 0x4c3ca1
        if (a5 == 0) {
            // 0x4c3d08
            return result3;
        }
        // 0x4c3cad
        switch (v14) {
            case 37: {
                // 0x4c3fb0
                function_4c3970(&v20, result2, (int64_t)v28, a5, a6);
                // break -> 0x4c3cda
                break;
            }
            case 33: {
                // 0x4c3fd8
                int64_t v30; // bp-184, 0x4c3b30
                function_4b6b10(&v30);
                int64_t v31; // bp-216, 0x4c3b30
                function_4c3810(&v31, 8, &v20, a5, a6);
                function_4b7340(&v30, &v31);
                function_4b7730(&v30, 0, (int64_t)v28, &v20, result2, result2);
                function_4b6ba0(&v30);
                int64_t v32 = (int64_t)&v31; // 0x4c4042
                *(char *)v32 = 0;
                v32++;
                while (v32 != (int64_t)&v28) {
                    // 0x4c4048
                    *(char *)v32 = 0;
                    v32++;
                }
                // break -> 0x4c3cda
                break;
            }
            case 5: {
                // 0x4c3f80
                function_4c3a10(&v20, 16, result2, (int64_t)v28, a5, a6);
                // break -> 0x4c3cda
                break;
            }
            case 6: {
            }
            case 7: {
                // 0x4c3d08
                return result3;
            }
        }
        // 0x4c3cda
        if (v28 < 3 || *(char *)mem != 48 || *(char *)(result2 + 1) >= 132) {
            // 0x4c3cf6
            free(mem);
            // 0x4c3d08
            return 0xffffec80;
        }
    }
    // 0x4c3de5
    *(int64_t *)(a1 + 8) = (int64_t)v28;
    *(int64_t *)a1 = result2;
    // 0x4c3d08
    return 0;
  lab_0x4c3e1e:;
    int64_t * str6 = (int64_t *)v17;
    int32_t memcmp_rc3 = memcmp(str6, (int64_t *)"DEK-Info: AES-", 14); // 0x4c3e2d
    str7 = str6;
    v18 = v17;
    v14 = v19;
    int64_t v33 = v17; // 0x4c3e34
    if (memcmp_rc3 != 0) {
        goto lab_0x4c3eaa;
    } else {
        goto lab_0x4c3e36;
    }
  lab_0x4c3eaa:;
    char v34 = *(char *)v33; // 0x4c3eaa
    char v35 = v34; // 0x4c3eb1
    int64_t v36 = v33; // 0x4c3eb1
    if (v34 == 13) {
        int64_t v37 = v33 + 1; // 0x4c3f10
        v35 = *(char *)v37;
        v36 = v37;
    }
    // 0x4c3eb3
    if (v35 != 10) {
        // 0x4c3d08
        return 0xffffef00;
    }
    // 0x4c3ebb
    v15 = v36 + 1;
    v16 = 1;
    goto lab_0x4c3c22;
  lab_0x4c3e36:;
    int32_t v38 = 5; // 0x4c3e4c
    if (memcmp(str7, (int64_t *)"DEK-Info: AES-128-CBC,", 22) != 0) {
        // 0x4c3e52
        v38 = 6;
        if (memcmp(str7, (int64_t *)"DEK-Info: AES-192-CBC,", 22) != 0) {
            // 0x4c3e6e
            v38 = 7;
            if (memcmp(str7, (int64_t *)"DEK-Info: AES-256-CBC,", 22) != 0) {
                // 0x4c3d08
                return 0xffffed80;
            }
        }
    }
    // 0x4c3e8f
    if ((int32_t)function_4c3770(v18 + 22, &v20, 16) != 0) {
        // 0x4c3d08
        return 0xffffee00;
    }
    // 0x4c3ea6
    v14 = v38;
    v33 = v18 + 54;
    goto lab_0x4c3eaa;
}

// Address range: 0x4c53c0 - 0x4c5904
int64_t function_4c53c0(int64_t a1, int64_t a2) {
    // 0x4c53c0
    int64_t v1; // 0x4c53c0
    int32_t v2 = v1;
    int32_t v3; // 0x4c53c0
    int64_t v4; // 0x4c53c0
    int64_t v5; // 0x4c53c0
    int64_t v6; // 0x4c53c0
    int64_t v7; // 0x4c53c0
    int64_t v8; // bp-416, 0x4c53c0
    int64_t v9; // bp-440, 0x4c53c0
    int64_t v10; // bp-464, 0x4c53c0
    int64_t v11; // bp-488, 0x4c53c0
    int64_t v12; // bp-512, 0x4c53c0
    int64_t v13; // bp-536, 0x4c53c0
    int64_t v14; // bp-560, 0x4c53c0
    int64_t v15; // bp-568, 0x4c53c0
    if ((int32_t)v1 == 6) {
        int64_t result = function_4c33c0(); // 0x4c5695
        if ((int32_t)result != 0) {
            // 0x4c5450
            return result;
        }
        // 0x4c56a2
        v3 = v2;
        if (v2 == 0) {
            // 0x4c5450
            int32_t v16; // 0x4c53c0
            return function_4bf0f0((int64_t *)a2, v16);
        }
        goto lab_0x4c56a9;
    } else {
        // 0x4c53e0
        function_4ba5b0(&v15);
        int64_t v17 = *(int64_t *)(a1 + 16); // 0x4c53ee
        int64_t v18 = v17 + *(int64_t *)(a1 + 8); // 0x4c53f7
        int64_t str = v17; // bp-584, 0x4c5400
        int32_t v19; // bp-588, 0x4c53c0
        int64_t v20 = function_4aff10(&str, v18, (int64_t *)&v19); // 0x4c5408
        v4 = v20;
        if ((int32_t)v20 != 0) {
            goto lab_0x4c54e0;
        } else {
            // 0x4c5415
            if (v19 >= 4) {
                // 0x4c5440
                function_4ba6e0(&v15);
                // 0x4c5450
                return 0xffffc300;
            }
            // 0x4c5425
            int64_t v21; // bp-576, 0x4c53c0
            int64_t v22 = function_4afe70(&str, v18, &v21, 48); // 0x4c5437
            if ((int32_t)v22 != 0) {
                // 0x4c5440
                function_4ba6e0(&v15);
                // 0x4c5450
                return v22 & 0xffffffff;
            }
            int64_t v23 = v21 + str; // 0x4c546d
            int64_t v24 = function_4afe70(&str, v23, &v21, 6); // 0x4c5484
            if ((int32_t)v24 != 0) {
                // 0x4c5440
                function_4ba6e0(&v15);
                // 0x4c5450
                return v24 & 0xffffffff;
            }
            // 0x4c548d
            if (v21 != 7 || memcmp((int64_t *)str, &g3, 7) != 0) {
                // 0x4c5440
                function_4ba6e0(&v15);
                // 0x4c5450
                return 0xffffc680;
            }
            // 0x4c54ba
            str += 7;
            int64_t v25 = function_4aff90(&str, v23, &v14); // 0x4c54d3
            v4 = v25;
            if ((int32_t)v25 == 0) {
                int64_t result2 = function_4b0f10(&v14); // 0x4c56e9
                if (v23 != str) {
                    // 0x4c5450
                    return result2;
                }
                int64_t v26 = function_4afe70(&str, v18, &v21, 48); // 0x4c5713
                if ((int32_t)v26 != 0) {
                    // 0x4c5440
                    function_4ba6e0(&v15);
                    // 0x4c5450
                    return v26 & 0xffffffff;
                }
                int64_t v27 = v21 + str; // 0x4c5725
                int64_t v28 = function_4afe70(&str, v27, &v21, 4); // 0x4c573c
                v6 = result2;
                v4 = v28;
                if ((int32_t)v28 != 0) {
                    goto lab_0x4c54e0;
                } else {
                    int64_t v29 = function_4b0fc0(&v13, str, v21); // 0x4c5758
                    v6 = result2;
                    v4 = v29;
                    if ((int32_t)v29 != 0) {
                        goto lab_0x4c54e0;
                    } else {
                        // 0x4c5765
                        str += v21;
                        int64_t v30 = function_4afe70(&str, v27, &v21, 4); // 0x4c5781
                        v6 = result2;
                        v4 = v30;
                        if ((int32_t)v30 != 0) {
                            goto lab_0x4c54e0;
                        } else {
                            int64_t v31 = function_4b0fc0(&v12, str, v21); // 0x4c579d
                            v6 = result2;
                            v4 = v31;
                            if ((int32_t)v31 != 0) {
                                goto lab_0x4c54e0;
                            } else {
                                // 0x4c57aa
                                str += v21;
                                int64_t v32 = function_4afe70(&str, v27, &v21, 3); // 0x4c57c6
                                int64_t v33; // 0x4c53c0
                                int64_t result3; // 0x4c53c0
                                if ((int32_t)v32 != 0) {
                                    // 0x4c57aa
                                    v33 = str;
                                    result3 = v32;
                                } else {
                                    int64_t v34 = str + v21; // 0x4c57d4
                                    str = v34;
                                    v33 = v34;
                                    result3 = v21;
                                }
                                // 0x4c57d9
                                if (v27 != v33) {
                                    // 0x4c5450
                                    return result3;
                                }
                                int64_t v35 = function_4afe70(&str, v18, &v21, 4); // 0x4c57f6
                                v6 = result2;
                                v4 = v35;
                                if ((int32_t)v35 != 0) {
                                    goto lab_0x4c54e0;
                                } else {
                                    int64_t v36 = function_4bba20(&v15, &v11, str, v21); // 0x4c581d
                                    int32_t v37 = v36; // 0x4c5822
                                    if (v37 != 0) {
                                        // 0x4c582a
                                        if (v37 != -0x4e80 || (*(char *)str || 1) != 3) {
                                            // 0x4c5440
                                            function_4ba6e0(&v15);
                                            // 0x4c5450
                                            return 0xffffc300;
                                        }
                                        int64_t v38 = function_4b0fa0(&v14); // 0x4c584d
                                        if (v38 + 1 != v21 || (int32_t)function_4b0fc0(&v11, str + 1, v38) != 0) {
                                            // 0x4c5440
                                            function_4ba6e0(&v15);
                                            // 0x4c5450
                                            return 0xffffc300;
                                        }
                                        int64_t v39 = function_4b0d80(&v10, (int64_t)*(char *)str - 2); // 0x4c588f
                                        if ((int32_t)v39 != 0 || (int32_t)function_4b0d80(&v9, 1) != 0) {
                                            // 0x4c5440
                                            function_4ba6e0(&v15);
                                            // 0x4c5450
                                            return 0xffffc300;
                                        }
                                    }
                                    // 0x4c58ae
                                    str += v21;
                                    int64_t v40 = function_4aff90(&str, v18, &v8); // 0x4c58cb
                                    v6 = result2;
                                    v4 = v40;
                                    if ((int32_t)v40 != 0) {
                                        goto lab_0x4c54e0;
                                    } else {
                                        int64_t v41 = function_4b0f10(&v8); // 0x4c58db
                                        v7 = result2;
                                        v5 = v41;
                                        goto lab_0x4c54ed;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x4c54e0;
            }
        }
    }
  lab_0x4c56a9:;
    // 0x4c56a9
    int32_t v42; // 0x4c53c0
    if (v42 != v3) {
        // 0x4c5450
        return 0xffffc300;
    }
    // 0x4c5450
    return function_4bf0f0((int64_t *)a2, v3);
  lab_0x4c54e0:;
    int64_t v43 = v4 - (int64_t)(int32_t)"cxa_get_globals_fast"; // 0x4c54e0
    v7 = v6;
    if ((int32_t)v43 != 0) {
        // 0x4c5440
        function_4ba6e0(&v15);
        // 0x4c5450
        return v43 & 0xffffffff & 0xffffffff;
    }
    goto lab_0x4c54ed;
  lab_0x4c54ed:;
    // 0x4c54ed
    int64_t v44; // bp-312, 0x4c53c0
    function_4ba5b0(&v44);
    int64_t v45 = function_4ba450(); // 0x4c54fa
    int32_t * v46 = (int32_t *)v45;
    int32_t * v47 = v46; // 0x4c5506
    int32_t v48 = v2; // 0x4c5506
    if (*v46 != 0) {
        // 0x4c553e
        int64_t v49; // bp-184, 0x4c53c0
        int32_t v50 = (int64_t)&v49;
        int32_t v51 = v2;
        int64_t v52 = v45; // 0x4c5530
        function_4ba6e0(&v44);
        int32_t * v53 = (int32_t *)v52;
        int64_t v54 = function_4bf0f0(&v44, *v53); // 0x4c5555
        while ((int32_t)v54 == 0) {
            int32_t v55 = v51;
            int32_t v56 = v55; // 0x4c5572
            if (v7 == v1 == v5 == v1) {
                // 0x4c5586
                int64_t v57; // bp-304, 0x4c53c0
                int64_t v58 = function_4b1590(&v14, &v57, v1); // 0x4c558c
                v56 = v55;
                if ((int32_t)v58 == 0) {
                    // 0x4c5595
                    int64_t v59; // bp-280, 0x4c53c0
                    int64_t v60 = function_4b1590(&v13, &v59, v1); // 0x4c559b
                    v56 = v55;
                    if ((int32_t)v60 == 0) {
                        // 0x4c55a4
                        int64_t v61; // bp-256, 0x4c53c0
                        int64_t v62 = function_4b1590(&v12, &v61, v1); // 0x4c55b1
                        v56 = v55;
                        if ((int32_t)v62 == 0) {
                            // 0x4c55be
                            int64_t v63; // bp-160, 0x4c53c0
                            int64_t v64 = function_4b1590(&v8, &v63, v1); // 0x4c55ce
                            v56 = v55;
                            if ((int32_t)v64 == 0) {
                                // 0x4c55db
                                int64_t v65; // bp-232, 0x4c53c0
                                int64_t v66 = function_4b1590(&v11, &v65, v1); // 0x4c55eb
                                v56 = v55;
                                if ((int32_t)v66 == 0) {
                                    int64_t v67 = function_4b1590(&v9, &v49, v1); // 0x4c5608
                                    v56 = v50;
                                    if ((int32_t)v67 == 0) {
                                        int64_t v68 = function_4b0df0(&v10, 0); // 0x4c561f
                                        int64_t v69; // bp-208, 0x4c53c0
                                        int64_t v70 = function_4b0df0(&v69, 0); // 0x4c5632
                                        v56 = v50;
                                        v47 = v53;
                                        v48 = v50;
                                        if ((int32_t)v68 == (int32_t)v70) {
                                            goto lab_0x4c5648_2;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            // 0x4c5530
            v51 = v56;
            v52 += 4;
            int32_t * v71 = (int32_t *)v52;
            v47 = v71;
            v48 = v51;
            if (*v71 == 0) {
                goto lab_0x4c5648_2;
            }
            function_4ba6e0(&v44);
            v53 = (int32_t *)v52;
            v54 = function_4bf0f0(&v44, *v53);
        }
        // 0x4c56c8
        function_4ba6e0(&v44);
        // 0x4c5440
        function_4ba6e0(&v15);
        // 0x4c5450
        return v54 & 0xffffffff & 0xffffffff;
    }
  lab_0x4c5648_2:
    // 0x4c5648
    function_4ba6e0(&v44);
    int32_t v72 = *v47;
    if (v72 == 0) {
        // 0x4c5450
        return 0;
    }
    // 0x4c5665
    function_4ba6e0(&v15);
    v3 = v48;
    v42 = v72;
    if (v48 == 0) {
        // 0x4c5450
        return function_4bf0f0((int64_t *)a2, v72);
    }
    goto lab_0x4c56a9;
}

// Address range: 0x4cdef0 - 0x4ce437
// Used cryptographic patterns:
//  - Hash_constant_words_K_for_SHA_384_and_SHA_512 (64-bit, little endian)
//  - padding_used_in_hashing_algorithms__0x80_0_____0_ (8-bit)
int64_t function_4cdef0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4cdef0
    int64_t v1; // bp-640, 0x4cdef0
    int64_t v2 = (int64_t)&v1 - 56; // 0x4cdf72
    for (int64_t i = 0; i < 16; i++) {
        int64_t v3 = (int64_t)(8 * (int32_t)i) + a2;
        unsigned char v4 = *(char *)v3; // 0x4cdf1a
        unsigned char v5 = *(char *)(v3 + 7); // 0x4cdf1e
        unsigned char v6 = *(char *)(v3 + 1); // 0x4cdf2a
        unsigned char v7 = *(char *)(v3 + 2); // 0x4cdf36
        unsigned char v8 = *(char *)(v3 + 3); // 0x4cdf42
        unsigned char v9 = *(char *)(v3 + 4); // 0x4cdf4e
        unsigned char v10 = *(char *)(v3 + 5); // 0x4cdf5a
        unsigned char v11 = *(char *)(v3 + 6); // 0x4cdf5f
        *(int64_t *)(v2 + 8 * i) = 0x100000000000000 * (int64_t)v4 | (int64_t)v5 | 0x1000000000000 * (int64_t)v6 | 0x10000000000 * (int64_t)v7 | 0x100000000 * (int64_t)v8 | 0x1000000 * (int64_t)v9 | 0x10000 * (int64_t)v10 | 256 * (int64_t)v11;
    }
    // 0x4cdf81
    int64_t v12; // bp-584, 0x4cdef0
    int64_t v13 = (int64_t)&v12; // 0x4cdf8e
    uint64_t v14 = *(int64_t *)v13; // 0x4cdf90
    int64_t v15 = *(int64_t *)(v13 - 112); // 0x4cdf93
    int64_t v16 = *(int64_t *)(v13 - 40); // 0x4cdf97
    uint64_t v17 = *(int64_t *)(v13 - 104); // 0x4cdf9b
    *(int64_t *)(v13 + 16) = v16 + v15 + ((v14 / 0x80000 | 0x200000000000 * v14) ^ v14 / 64 ^ (v14 / 0x2000000000000000 | 8 * v14)) + ((v17 / 2 | 0x8000000000000000 * v17) ^ v17 / 128 ^ (v17 / 256 | 0x100000000000000 * v17));
    v13 += 8;
    int64_t v18; // bp-72, 0x4cdef0
    while (v13 != (int64_t)&v18) {
        // 0x4cdf90
        v14 = *(int64_t *)v13;
        v15 = *(int64_t *)(v13 - 112);
        v16 = *(int64_t *)(v13 - 40);
        v17 = *(int64_t *)(v13 - 104);
        *(int64_t *)(v13 + 16) = v16 + v15 + ((v14 / 0x80000 | 0x200000000000 * v14) ^ v14 / 64 ^ (v14 / 0x2000000000000000 | 8 * v14)) + ((v17 / 2 | 0x8000000000000000 * v17) ^ v17 / 128 ^ (v17 / 256 | 0x100000000000000 * v17));
        v13 += 8;
    }
    int64_t * v19 = (int64_t *)(a1 + 16); // 0x4cdfe2
    int64_t v20 = *v19; // 0x4cdfe2
    int64_t * v21 = (int64_t *)(a1 + 24); // 0x4cdffa
    int64_t v22 = *v21; // 0x4cdffa
    int64_t * v23 = (int64_t *)(a1 + 32); // 0x4ce008
    int64_t v24 = *v23; // 0x4ce008
    int64_t * v25 = (int64_t *)(a1 + 40); // 0x4ce016
    int64_t v26 = *v25; // 0x4ce016
    int64_t * v27 = (int64_t *)(a1 + 48); // 0x4ce024
    int64_t v28 = *v27; // 0x4ce024
    int64_t * v29 = (int64_t *)(a1 + 56); // 0x4ce032
    int64_t v30 = *v29; // 0x4ce032
    int64_t * v31 = (int64_t *)(a1 + 64); // 0x4ce040
    int64_t v32 = *v31; // 0x4ce040
    int64_t * v33 = (int64_t *)(a1 + 72); // 0x4ce04e
    int64_t v34 = *v33; // 0x4ce04e
    int64_t v35 = (int64_t)&Hash_constant_words_K_for_SHA_384_and_SHA_512_at_598800; // 0x4ce06e
    int64_t v36; // bp-696, 0x4cdef0
    int64_t v37 = (int64_t)&v36; // 0x4ce06e
    int64_t v38 = v32;
    int64_t v39 = v30;
    uint64_t v40 = v28;
    uint64_t v41 = v20;
    int64_t v42 = v22;
    int64_t v43 = *(int64_t *)v37; // 0x4ce076
    int64_t v44 = *(int64_t *)v35; // 0x4ce07e
    int64_t v45 = *(int64_t *)(v35 | 8); // 0x4ce0a8
    int64_t v46 = *(int64_t *)(v37 + 8); // 0x4ce0b2
    int64_t v47 = v43 + v34 + ((v40 / 0x40000 | 0x400000000000 * v40) ^ (v40 / 0x4000 | 0x4000000000000 * v40) ^ (v40 / 0x20000000000 | 0x800000 * v40)) + v44 + ((v38 ^ v39) & v40 ^ v38); // 0x4ce0b6
    uint64_t v48 = v47 + v26; // 0x4ce0c5
    uint64_t v49 = ((v41 / 0x400000000 | 0x40000000 * v41) ^ (v41 / 0x10000000 | 0x1000000000 * v41) ^ (v41 / 0x8000000000 | 0x2000000 * v41)) + ((v41 | v42) & v24 | v41 & v42) + v47; // 0x4ce0e5
    int64_t v50 = *(int64_t *)(v35 + 16); // 0x4ce113
    int64_t v51 = *(int64_t *)(v37 + 16); // 0x4ce11d
    int64_t v52 = v45 + v38 + v46 + (v48 & (v39 ^ v40) ^ v39) + ((v48 / 0x40000 | 0x400000000000 * v48) ^ (v48 / 0x4000 | 0x4000000000000 * v48) ^ (v48 / 0x20000000000 | 0x800000 * v48)); // 0x4ce121
    uint64_t v53 = v52 + v24; // 0x4ce130
    uint64_t v54 = ((v49 / 0x400000000 | 0x40000000 * v49) ^ (v49 / 0x10000000 | 0x1000000000 * v49) ^ (v49 / 0x8000000000 | 0x2000000 * v49)) + ((v49 | v41) & v42 | v49 & v41) + v52; // 0x4ce150
    int64_t v55 = v50 + v39 + v51 + (v53 & (v48 ^ v40) ^ v40) + ((v53 / 0x40000 | 0x400000000000 * v53) ^ (v53 / 0x4000 | 0x4000000000000 * v53) ^ (v53 / 0x20000000000 | 0x800000 * v53)); // 0x4ce180
    uint64_t v56 = v55 + v42; // 0x4ce18f
    int64_t v57 = *(int64_t *)(v35 + 24); // 0x4ce1a0
    int64_t v58 = *(int64_t *)(v37 + 24); // 0x4ce1aa
    uint64_t v59 = ((v54 / 0x400000000 | 0x40000000 * v54) ^ (v54 / 0x10000000 | 0x1000000000 * v54) ^ (v54 / 0x8000000000 | 0x2000000 * v54)) + ((v54 | v49) & v41 | v54 & v49) + v55; // 0x4ce1be
    int64_t v60 = *(int64_t *)(v37 + 32); // 0x4ce1d4
    int64_t v61 = *(int64_t *)(v35 + 32); // 0x4ce1e5
    int64_t v62 = v57 + v40 + v58 + (v56 & (v53 ^ v48) ^ v48) + ((v56 / 0x40000 | 0x400000000000 * v56) ^ (v56 / 0x4000 | 0x4000000000000 * v56) ^ (v56 / 0x20000000000 | 0x800000 * v56)); // 0x4ce1fc
    uint64_t v63 = v62 + v41; // 0x4ce210
    uint64_t v64 = ((v59 / 0x400000000 | 0x40000000 * v59) ^ (v59 / 0x10000000 | 0x1000000000 * v59) ^ (v59 / 0x8000000000 | 0x2000000 * v59)) + ((v59 | v54) & v49 | v59 & v54) + v62; // 0x4ce227
    int64_t v65 = *(int64_t *)(v37 + 40); // 0x4ce247
    int64_t v66 = *(int64_t *)(v35 + 40); // 0x4ce24f
    int64_t v67 = v60 + v48 + v61 + (v63 & (v56 ^ v53) ^ v53) + ((v63 / 0x40000 | 0x400000000000 * v63) ^ (v63 / 0x4000 | 0x4000000000000 * v63) ^ (v63 / 0x20000000000 | 0x800000 * v63)); // 0x4ce263
    uint64_t v68 = v67 + v49; // 0x4ce272
    uint64_t v69 = ((v64 / 0x400000000 | 0x40000000 * v64) ^ (v64 / 0x10000000 | 0x1000000000 * v64) ^ (v64 / 0x8000000000 | 0x2000000 * v64)) + ((v64 | v59) & v54 | v64 & v59) + v67; // 0x4ce292
    int64_t v70 = v66 + v65 + v53 + (v68 & (v63 ^ v56) ^ v56) + ((v68 / 0x40000 | 0x400000000000 * v68) ^ (v68 / 0x4000 | 0x4000000000000 * v68) ^ (v68 / 0x20000000000 | 0x800000 * v68)); // 0x4ce2c2
    uint64_t v71 = v70 + v54; // 0x4ce2c8
    int64_t v72 = *(int64_t *)(v37 + 48); // 0x4ce2d8
    int64_t v73 = *(int64_t *)(v35 + 48); // 0x4ce2e2
    uint64_t v74 = ((v69 / 0x400000000 | 0x40000000 * v69) ^ (v69 / 0x10000000 | 0x1000000000 * v69) ^ (v69 / 0x8000000000 | 0x2000000 * v69)) + ((v69 | v64) & v59 | v69 & v64) + v70; // 0x4ce2fd
    int64_t v75 = v73 + v72 + v56 + (v71 & (v68 ^ v63) ^ v63) + ((v71 / 0x40000 | 0x400000000000 * v71) ^ (v71 / 0x4000 | 0x4000000000000 * v71) ^ (v71 / 0x20000000000 | 0x800000 * v71)); // 0x4ce331
    uint64_t v76 = v75 + v59; // 0x4ce340
    int64_t v77 = *(int64_t *)(v37 + 56); // 0x4ce35d
    uint64_t v78 = ((v74 / 0x400000000 | 0x40000000 * v74) ^ (v74 / 0x10000000 | 0x1000000000 * v74) ^ (v74 / 0x8000000000 | 0x2000000 * v74)) + ((v74 | v69) & v64 | v74 & v69) + v75; // 0x4ce364
    int64_t v79 = *(int64_t *)(v35 + 56); // 0x4ce367
    v35 += 64;
    int64_t v80 = v79 + v77 + v63 + (v76 & (v71 ^ v68) ^ v68) + ((v76 / 0x40000 | 0x400000000000 * v76) ^ (v76 / 0x4000 | 0x4000000000000 * v76) ^ (v76 / 0x20000000000 | 0x800000 * v76)); // 0x4ce3a4
    int64_t v81 = v80 + v64; // 0x4ce3aa
    int64_t result = ((v78 / 0x400000000 | 0x40000000 * v78) ^ (v78 / 0x10000000 | 0x1000000000 * v78) ^ (v78 / 0x8000000000 | 0x2000000 * v78)) + ((v78 | v74) & v69 | v78 & v74); // 0x4ce3ce
    int64_t v82 = v80 + result; // 0x4ce3d1
    v37 += 64;
    while (v35 != (int64_t)"\x80\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00") {
        // 0x4ce070
        v38 = v71;
        v39 = v76;
        v40 = v81;
        v41 = v82;
        v42 = v78;
        v43 = *(int64_t *)v37;
        v44 = *(int64_t *)v35;
        v45 = *(int64_t *)(v35 | 8);
        v46 = *(int64_t *)(v37 + 8);
        v47 = v43 + v68 + ((v40 / 0x40000 | 0x400000000000 * v40) ^ (v40 / 0x4000 | 0x4000000000000 * v40) ^ (v40 / 0x20000000000 | 0x800000 * v40)) + v44 + ((v38 ^ v39) & v40 ^ v38);
        v48 = v47 + v69;
        v49 = ((v41 / 0x400000000 | 0x40000000 * v41) ^ (v41 / 0x10000000 | 0x1000000000 * v41) ^ (v41 / 0x8000000000 | 0x2000000 * v41)) + ((v41 | v42) & v74 | v41 & v42) + v47;
        v50 = *(int64_t *)(v35 + 16);
        v51 = *(int64_t *)(v37 + 16);
        v52 = v45 + v38 + v46 + (v48 & (v39 ^ v40) ^ v39) + ((v48 / 0x40000 | 0x400000000000 * v48) ^ (v48 / 0x4000 | 0x4000000000000 * v48) ^ (v48 / 0x20000000000 | 0x800000 * v48));
        v53 = v52 + v74;
        v54 = ((v49 / 0x400000000 | 0x40000000 * v49) ^ (v49 / 0x10000000 | 0x1000000000 * v49) ^ (v49 / 0x8000000000 | 0x2000000 * v49)) + ((v49 | v41) & v42 | v49 & v41) + v52;
        v55 = v50 + v39 + v51 + (v53 & (v48 ^ v40) ^ v40) + ((v53 / 0x40000 | 0x400000000000 * v53) ^ (v53 / 0x4000 | 0x4000000000000 * v53) ^ (v53 / 0x20000000000 | 0x800000 * v53));
        v56 = v55 + v42;
        v57 = *(int64_t *)(v35 + 24);
        v58 = *(int64_t *)(v37 + 24);
        v59 = ((v54 / 0x400000000 | 0x40000000 * v54) ^ (v54 / 0x10000000 | 0x1000000000 * v54) ^ (v54 / 0x8000000000 | 0x2000000 * v54)) + ((v54 | v49) & v41 | v54 & v49) + v55;
        v60 = *(int64_t *)(v37 + 32);
        v61 = *(int64_t *)(v35 + 32);
        v62 = v57 + v40 + v58 + (v56 & (v53 ^ v48) ^ v48) + ((v56 / 0x40000 | 0x400000000000 * v56) ^ (v56 / 0x4000 | 0x4000000000000 * v56) ^ (v56 / 0x20000000000 | 0x800000 * v56));
        v63 = v62 + v41;
        v64 = ((v59 / 0x400000000 | 0x40000000 * v59) ^ (v59 / 0x10000000 | 0x1000000000 * v59) ^ (v59 / 0x8000000000 | 0x2000000 * v59)) + ((v59 | v54) & v49 | v59 & v54) + v62;
        v65 = *(int64_t *)(v37 + 40);
        v66 = *(int64_t *)(v35 + 40);
        v67 = v60 + v48 + v61 + (v63 & (v56 ^ v53) ^ v53) + ((v63 / 0x40000 | 0x400000000000 * v63) ^ (v63 / 0x4000 | 0x4000000000000 * v63) ^ (v63 / 0x20000000000 | 0x800000 * v63));
        v68 = v67 + v49;
        v69 = ((v64 / 0x400000000 | 0x40000000 * v64) ^ (v64 / 0x10000000 | 0x1000000000 * v64) ^ (v64 / 0x8000000000 | 0x2000000 * v64)) + ((v64 | v59) & v54 | v64 & v59) + v67;
        v70 = v66 + v65 + v53 + (v68 & (v63 ^ v56) ^ v56) + ((v68 / 0x40000 | 0x400000000000 * v68) ^ (v68 / 0x4000 | 0x4000000000000 * v68) ^ (v68 / 0x20000000000 | 0x800000 * v68));
        v71 = v70 + v54;
        v72 = *(int64_t *)(v37 + 48);
        v73 = *(int64_t *)(v35 + 48);
        v74 = ((v69 / 0x400000000 | 0x40000000 * v69) ^ (v69 / 0x10000000 | 0x1000000000 * v69) ^ (v69 / 0x8000000000 | 0x2000000 * v69)) + ((v69 | v64) & v59 | v69 & v64) + v70;
        v75 = v73 + v72 + v56 + (v71 & (v68 ^ v63) ^ v63) + ((v71 / 0x40000 | 0x400000000000 * v71) ^ (v71 / 0x4000 | 0x4000000000000 * v71) ^ (v71 / 0x20000000000 | 0x800000 * v71));
        v76 = v75 + v59;
        v77 = *(int64_t *)(v37 + 56);
        v78 = ((v74 / 0x400000000 | 0x40000000 * v74) ^ (v74 / 0x10000000 | 0x1000000000 * v74) ^ (v74 / 0x8000000000 | 0x2000000 * v74)) + ((v74 | v69) & v64 | v74 & v69) + v75;
        v79 = *(int64_t *)(v35 + 56);
        v35 += 64;
        v80 = v79 + v77 + v63 + (v76 & (v71 ^ v68) ^ v68) + ((v76 / 0x40000 | 0x400000000000 * v76) ^ (v76 / 0x4000 | 0x4000000000000 * v76) ^ (v76 / 0x20000000000 | 0x800000 * v76));
        v81 = v80 + v64;
        result = ((v78 / 0x400000000 | 0x40000000 * v78) ^ (v78 / 0x10000000 | 0x1000000000 * v78) ^ (v78 / 0x8000000000 | 0x2000000 * v78)) + ((v78 | v74) & v69 | v78 & v74);
        v82 = v80 + result;
        v37 += 64;
    }
    // 0x4ce3dd
    *v19 = v82 + v20;
    *v21 = v78 + v22;
    *v23 = v74 + v24;
    *v25 = v69 + v26;
    *v27 = v81 + v28;
    *v29 = v76 + v30;
    *v31 = v71 + v32;
    *v33 = v68 + v34;
    return result;
}

// Address range: 0x4f0eb0 - 0x4f13b4
int64_t function_4f0eb0(int64_t result, int64_t a2) {
    int64_t * v1 = (int64_t *)(result + 16); // 0x4f0eb3
    int64_t v2 = *v1; // 0x4f0eb3
    int64_t v3 = v2; // 0x4f0eb3
    int64_t * v4 = (int64_t *)(result + 24); // 0x4f0eb7
    int64_t v5 = *v4; // 0x4f0eb7
    int64_t v6 = v5; // 0x4f0ebe
    int64_t v7; // 0x4f0eb0
    int64_t v8; // 0x4f0eb0
    int64_t v9; // 0x4f0eb0
    int64_t v10; // 0x4f0eb0
    if (v2 == 0) {
        goto lab_0x4f1258;
    } else {
        // 0x4f0ec4
        if (v5 != 0) {
            int64_t v11 = v5;
            int64_t * v12 = (int64_t *)(v11 + 16);
            int64_t v13 = *v12; // 0x4f0f3b
            while (v13 != 0) {
                // 0x4f0f3b
                v11 = v13;
                v12 = (int64_t *)(v11 + 16);
                v13 = *v12;
            }
            int64_t * v14 = (int64_t *)(v11 + 24); // 0x4f0f47
            v6 = *v14;
            if (v11 == result) {
                goto lab_0x4f1258;
            } else {
                // 0x4f0f51
                *(int64_t *)(v2 + 8) = v11;
                *v12 = v3;
                int64_t v15 = v5; // 0x4f0f5f
                if (v11 != v5) {
                    int64_t * v16 = (int64_t *)(v11 + 8); // 0x4f0f61
                    int64_t v17 = *v16; // 0x4f0f61
                    v3 = v17;
                    int64_t v18 = v17; // 0x4f0f6b
                    if (v6 != 0) {
                        // 0x4f0f6d
                        *(int64_t *)(v6 + 8) = v17;
                        v18 = *v16;
                        v3 = v18;
                    }
                    // 0x4f0f75
                    *(int64_t *)(v18 + 16) = v6;
                    *v14 = v5;
                    *(int64_t *)(*v4 + 8) = v11;
                    v15 = v17;
                }
                int64_t * v19 = (int64_t *)(a2 + 8); // 0x4f0f85
                if (*v19 == result) {
                    // 0x4f1210
                    *v19 = v11;
                    v3 = *(int64_t *)(result + 8);
                } else {
                    int64_t v20 = *(int64_t *)(result + 8); // 0x4f0f8f
                    v3 = v20;
                    int64_t * v21 = (int64_t *)(v20 + 16); // 0x4f0f93
                    if (*v21 == result) {
                        // 0x4f1230
                        *v21 = v11;
                    } else {
                        // 0x4f0f9d
                        *(int64_t *)(v20 + 24) = v11;
                    }
                }
                // 0x4f0fa1
                *(int64_t *)(v11 + 8) = v3;
                int32_t v22 = *(int32_t *)&v3; // 0x4f0fa5
                int32_t * v23 = (int32_t *)v11; // 0x4f0fa8
                uint32_t v24 = *v23; // 0x4f0fa8
                v3 = v24;
                *v23 = v22;
                *(int32_t *)result = v24;
                v10 = v15;
                v8 = v6;
                goto lab_0x4f0faf;
            }
        } else {
            int64_t v25 = *(int64_t *)(result + 8); // 0x4f0ecc
            *(int64_t *)(v2 + 8) = v25;
            v9 = v25;
            v7 = v3;
            goto lab_0x4f0ed7;
        }
    }
  lab_0x4f1320:;
    // 0x4f1320
    int64_t v26; // 0x4f0eb0
    int32_t * v27 = (int32_t *)v26; // 0x4f1320
    int64_t * v28; // 0x4f0eb0
    v3 = *v28;
    int64_t v29; // 0x4f0eb0
    *(int32_t *)v29 = *v27;
    *v27 = 1;
    // 0x4f1330
    int64_t v30; // 0x4f0eb0
    *(int32_t *)v30 = 1;
    goto lab_0x4f1337;
  lab_0x4f11e0:;
    // 0x4f11e0
    int64_t v44; // 0x4f0eb0
    int64_t v46 = v44;
    if (v46 != 0) {
        // 0x4f11e5
        *(int32_t *)v46 = 1;
        return result;
    }
  lab_0x4f1128:
    // 0x4f1128
    return result;
  lab_0x4f1258:
    // 0x4f1258
    v9 = *(int64_t *)(result + 8);
    v7 = 0;
    if (v6 != 0) {
        // 0x4f1128
        return result;
    }
    goto lab_0x4f0ed7;
  lab_0x4f0ed7:;
    int64_t v47 = v7; // 0x4f1293
    int64_t v48 = v9;
    int64_t * v49 = (int64_t *)(a2 + 8); // 0x4f0ed7
    if (*v49 == result) {
        // 0x4f1270
        *v49 = v47;
    } else {
        int64_t v50 = *(int64_t *)(result + 8); // 0x4f0ee1
        int64_t * v51 = (int64_t *)(v50 + 16); // 0x4f0ee5
        if (*v51 == result) {
            // 0x4f121d
            *v51 = v47;
        } else {
            // 0x4f0eef
            *(int64_t *)(v50 + 24) = v47;
        }
    }
    int64_t * v52 = (int64_t *)(a2 + 16); // 0x4f0ef3
    if (*v52 == result) {
        // 0x4f1280
        v3 = v47;
        if (*v4 == 0) {
            // 0x4f1128
            return result;
        }
        int64_t v53 = *(int64_t *)(v47 + 16); // 0x4f1293
        int64_t v54 = v53; // 0x4f129a
        int64_t v55 = v47; // 0x4f129a
        if (v53 != 0) {
            v3 = v54;
            int64_t v56 = *(int64_t *)(v54 + 16); // 0x4f1293
            v55 = v54;
            while (v56 != 0) {
                int64_t v57 = v56;
                v3 = v57;
                v56 = *(int64_t *)(v57 + 16);
                v55 = v57;
            }
        }
        // 0x4f129c
        *v52 = v55;
    }
    int64_t * v58 = (int64_t *)(a2 + 24); // 0x4f0efd
    v3 = (int64_t)*(int32_t *)&v3;
    v10 = v48;
    v8 = v47;
    if (*v58 == result) {
        int64_t v59 = v47; // 0x4f0f11
        if (*v1 != 0) {
            int64_t v60 = v59;
            int64_t v61 = *(int64_t *)(v60 + 24); // 0x4f0f23
            while (v61 != 0) {
                // 0x4f0f23
                v60 = v61;
                v61 = *(int64_t *)(v60 + 24);
            }
            // 0x4f0f2c
            *v58 = v60;
            v10 = v48;
            v8 = v47;
        } else {
            // 0x4f13a7
            *v58 = *(int64_t *)(result + 8);
            v10 = v48;
            v8 = v47;
        }
    }
    goto lab_0x4f0faf;
  lab_0x4f0faf:
    // 0x4f0faf
    if ((int32_t)v3 == 0) {
        // 0x4f1128
        return result;
    }
    int64_t * v33 = (int64_t *)(a2 + 8); // 0x4f104c
    int64_t v62 = v8; // 0x4f1053
    int64_t v63 = v10; // 0x4f1053
    v44 = v8;
    int32_t * v64; // 0x4f0eb0
    int64_t v45; // 0x4f0eb0
    int64_t v40; // 0x4f0eb0
    int64_t v65; // 0x4f0eb0
    int64_t v66; // 0x4f0eb0
    int64_t v67; // 0x4f1068
    int64_t * v68; // 0x4f0eb0
    int32_t * v69; // 0x4f0eb0
    if (*v33 != v8) {
        int32_t * v70; // 0x4f0eb0
        while (true) {
            // 0x4f1059
            v26 = v63;
            v45 = v62;
            if (v45 != 0) {
                // 0x4f105e
                v70 = (int32_t *)v45;
                if (*v70 != 1) {
                    // break -> 0x4f1248
                    break;
                }
            }
            // 0x4f1068
            v28 = (int64_t *)(v26 + 16);
            v67 = *v28;
            if (v67 != v45) {
                int32_t * v71 = (int32_t *)v67; // 0x4f0fc0
                int64_t * v72 = (int64_t *)(v67 + 24); // 0x4f0fc2
                int64_t v73 = *v72; // 0x4f0fc2
                int64_t v74 = v67; // 0x4f0fc8
                int64_t v75 = v73; // 0x4f0fc8
                if (*v71 == 0) {
                    // 0x4f0fca
                    *v71 = 1;
                    *(int32_t *)v26 = 0;
                    *v28 = v73;
                    if (v73 != 0) {
                        // 0x4f0fdf
                        *(int64_t *)(v73 + 8) = v26;
                    }
                    int64_t * v76 = (int64_t *)(v26 + 8); // 0x4f0fe3
                    *(int64_t *)(v67 + 8) = *v76;
                    if (v26 == *v33) {
                        // 0x4f1108
                        *v33 = v67;
                        v3 = *v28;
                    } else {
                        int64_t v77 = *v76; // 0x4f0ff5
                        v3 = v77;
                        int64_t * v78 = (int64_t *)(v77 + 24); // 0x4f0ff9
                        if (v26 == *v78) {
                            // 0x4f1118
                            *v78 = v67;
                            v3 = v73;
                        } else {
                            // 0x4f1003
                            *(int64_t *)(v77 + 16) = v67;
                            v3 = *v28;
                        }
                    }
                    // 0x4f100b
                    *v72 = v26;
                    v75 = *(int64_t *)(v3 + 24);
                    *v76 = v67;
                    v74 = v3;
                }
                // 0x4f101a
                v40 = v75;
                v29 = v74;
                if (v40 != 0) {
                    // 0x4f101f
                    v69 = (int32_t *)v40;
                    if (*v69 != 1) {
                        int64_t v79 = *(int64_t *)(v29 + 16); // 0x4f12a8
                        if (v79 != 0) {
                            // 0x4f1314
                            v30 = v79;
                            if (*(int32_t *)v79 == 1) {
                                goto lab_0x4f12b1;
                            } else {
                                goto lab_0x4f1320;
                            }
                        } else {
                            goto lab_0x4f12b1;
                        }
                    }
                }
                int64_t v80 = *(int64_t *)(v29 + 16); // 0x4f1029
                if (v80 != 0) {
                    // 0x4f1032
                    v30 = v80;
                    if (*(int32_t *)v80 != 1) {
                        goto lab_0x4f1320;
                    }
                }
                // 0x4f103c
                *(int32_t *)v29 = 0;
            } else {
                // 0x4f1075
                v68 = (int64_t *)(v26 + 24);
                int64_t v81 = *v68; // 0x4f1075
                int32_t * v82 = (int32_t *)v81; // 0x4f1079
                int64_t * v83 = (int64_t *)(v81 + 16); // 0x4f107c
                int64_t v84 = *v83; // 0x4f107c
                v3 = v84;
                int64_t v85 = v84; // 0x4f1083
                int64_t v86 = v81; // 0x4f1083
                if (*v82 == 0) {
                    // 0x4f1085
                    *v82 = 1;
                    *(int32_t *)v26 = 0;
                    *v68 = v3;
                    if (v84 != 0) {
                        // 0x4f109b
                        *(int64_t *)(v3 + 8) = v26;
                    }
                    int64_t * v87 = (int64_t *)(v26 + 8); // 0x4f109f
                    *(int64_t *)(v81 + 8) = *v87;
                    int64_t * v88; // 0x4f0eb0
                    if (v26 == *v33) {
                        // 0x4f11f0
                        *v33 = v81;
                        v88 = v68;
                    } else {
                        int64_t v89 = *v87; // 0x4f10b1
                        int64_t * v90 = (int64_t *)(v89 + 16); // 0x4f10b5
                        if (v26 == *v90) {
                            // 0x4f1200
                            *v90 = v81;
                            v88 = &v3;
                        } else {
                            // 0x4f10bf
                            *(int64_t *)(v89 + 24) = v81;
                            v88 = v68;
                        }
                    }
                    // 0x4f10c7
                    v86 = *v88;
                    *v83 = v26;
                    v3 = *(int64_t *)(v86 + 16);
                    *v87 = v81;
                    v85 = v3;
                }
                // 0x4f10d6
                v65 = v86;
                int64_t v91 = v85; // 0x4f10d6
                if (v91 != 0) {
                    int32_t * v92 = (int32_t *)v91;
                    if (*v92 != 1) {
                        // 0x4f112a
                        if (*(int64_t *)(v65 + 24) != 0) {
                            goto lab_0x4f1128;
                        } else {
                            int64_t v93 = *(int64_t *)(v91 + 24); // 0x4f1137
                            *v92 = 1;
                            *(int32_t *)v65 = 0;
                            *(int64_t *)(v65 + 16) = v93;
                            if (v93 == 0) {
                                goto lab_0x4f1155;
                            } else {
                                // 0x4f1151
                                *(int64_t *)(v93 + 8) = v65;
                                goto lab_0x4f1155;
                            }
                        }
                    }
                }
                int64_t v94 = *(int64_t *)(v65 + 24); // 0x4f10e0
                if (v94 != 0) {
                    int32_t * v95 = (int32_t *)v94;
                    if (*v95 != 1) {
                        int32_t * v96 = (int32_t *)v26; // 0x4f1383
                        v3 = *v68;
                        *(int32_t *)v65 = *v96;
                        *v96 = 1;
                        v64 = v95;
                        v66 = v45;
                        goto lab_0x4f1395;
                    }
                }
                // 0x4f10f3
                *(int32_t *)v65 = 0;
            }
            // 0x4f1046
            v62 = v26;
            v63 = *(int64_t *)(v26 + 8);
            v44 = v26;
            if (*v33 == v26) {
                goto lab_0x4f11e0;
            }
        }
        // 0x4f1248
        *v70 = 1;
        return result;
    }
    goto lab_0x4f11e0;
  lab_0x4f12b1:;
    int64_t * v37 = (int64_t *)(v40 + 16); // 0x4f12b1
    int64_t v97 = *v37; // 0x4f12b1
    v3 = v97;
    *v69 = 1;
    *(int32_t *)v29 = 0;
    *(int64_t *)(v29 + 24) = v97;
    if (v97 == 0) {
        goto lab_0x4f12cf;
    } else {
        // 0x4f12cb
        *(int64_t *)(v3 + 8) = v29;
        goto lab_0x4f12cf;
    }
  lab_0x4f12cf:;
    int64_t * v39 = (int64_t *)(v29 + 8); // 0x4f12cf
    *(int64_t *)(v40 + 8) = *v39;
    if (v29 == *v33) {
        goto lab_0x4f1128;
    } else {
        int64_t v98 = *v39; // 0x4f12e1
        v3 = v98;
        int64_t * v99 = (int64_t *)(v98 + 16); // 0x4f12e5
        if (v29 == *v99) {
            // 0x4f137a
            *v99 = v40;
            goto lab_0x4f12f3;
        } else {
            // 0x4f12ef
            *(int64_t *)(v98 + 24) = v40;
            goto lab_0x4f12f3;
        }
    }
  lab_0x4f1337:;
    int64_t v31 = *(int64_t *)(v3 + 24); // 0x4f1337
    *v28 = v31;
    if (v31 == 0) {
        goto lab_0x4f1348;
    } else {
        // 0x4f1344
        *(int64_t *)(v31 + 8) = v26;
        goto lab_0x4f1348;
    }
  lab_0x4f1348:;
    int64_t * v32 = (int64_t *)(v26 + 8); // 0x4f1348
    *(int64_t *)(v3 + 8) = *v32;
    if (v26 == *v33) {
        // 0x4f1374
        *v33 = v3;
        goto lab_0x4f1364;
    } else {
        int64_t v34 = *v32; // 0x4f1356
        int64_t * v35 = (int64_t *)(v34 + 24); // 0x4f135a
        int64_t v36 = v3;
        if (v26 == *v35) {
            // 0x4f13a1
            *v35 = v36;
            goto lab_0x4f1364;
        } else {
            // 0x4f1360
            *(int64_t *)(v34 + 16) = v36;
            goto lab_0x4f1364;
        }
    }
  lab_0x4f12f3:
    // 0x4f12f3
    *v37 = v29;
    int64_t v38 = *v28; // 0x4f12f7
    v3 = v38;
    *v39 = v40;
    int32_t * v41 = (int32_t *)v26; // 0x4f12ff
    int64_t v42 = *(int64_t *)(v38 + 16); // 0x4f1301
    *(int32_t *)v38 = *v41;
    *v41 = 1;
    int64_t v43 = v42; // 0x4f1310
    if (v42 == 0) {
        goto lab_0x4f1337;
    } else {
        // 0x4f1330
        *(int32_t *)v43 = 1;
        goto lab_0x4f1337;
    }
  lab_0x4f1364:
    // 0x4f1364
    *(int64_t *)(v3 + 24) = v26;
    *v32 = v3;
    v44 = v45;
    goto lab_0x4f11e0;
  lab_0x4f1155:;
    int64_t * v100 = (int64_t *)(v65 + 8); // 0x4f1155
    *(int64_t *)(v3 + 8) = *v100;
    int64_t v101; // 0x4f0eb0
    if (v65 == *v33) {
        goto lab_0x4f1128;
    } else {
        int64_t v102 = *v100; // 0x4f1167
        if (v65 == *(int64_t *)(v102 + 24)) {
            goto lab_0x4f1128;
        } else {
            // 0x4f1175
            *(int64_t *)(v102 + 16) = v3;
            *(int64_t *)(v3 + 24) = v65;
            *v100 = v3;
            int64_t v103 = *v68; // 0x4f1181
            v3 = v103;
            int32_t * v104 = (int32_t *)v26; // 0x4f1185
            int64_t v105 = *(int64_t *)(v103 + 24); // 0x4f1188
            *(int32_t *)v103 = *v104;
            *v104 = 1;
            v101 = v67;
            if (v105 != 0) {
                // 0x4f1175
                v64 = (int32_t *)v105;
                v66 = v67;
                goto lab_0x4f1395;
            } else {
                goto lab_0x4f119e;
            }
        }
    }
  lab_0x4f119e:;
    int64_t v106 = v101;
    int64_t v107 = *(int64_t *)(v3 + 16); // 0x4f119e
    *v68 = v107;
    if (v107 == 0) {
        goto lab_0x4f11af;
    } else {
        // 0x4f11ab
        *(int64_t *)(v107 + 8) = v26;
        goto lab_0x4f11af;
    }
  lab_0x4f1395:
    // 0x4f1395
    *v64 = 1;
    v101 = v66;
    goto lab_0x4f119e;
  lab_0x4f11af:;
    int64_t * v108 = (int64_t *)(v26 + 8); // 0x4f11af
    *(int64_t *)(v3 + 8) = *v108;
    if (v26 == *v33) {
        goto lab_0x4f1128;
    } else {
        int64_t v109 = *v108; // 0x4f11c1
        if (v26 == *(int64_t *)(v109 + 16)) {
            goto lab_0x4f1128;
        } else {
            // 0x4f11cf
            *(int64_t *)(v109 + 24) = v3;
            *(int64_t *)(v3 + 16) = v26;
            *v108 = v3;
            v44 = v106;
            goto lab_0x4f11e0;
        }
    }
}

// Address range: 0x50b7d0 - 0x50bcc8
int64_t function_50b7d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x50b7e4
    int64_t v2 = function_50b780(); // 0x50b7f8
    int64_t * v3 = (int64_t *)v2; // 0x50b800
    int64_t v4 = *(int64_t *)(*v3 + 16); // 0x50b803
    int64_t v5 = v4; // 0x50b80e
    if (v4 == g24) {
        // 0x50b814
        v5 = (int64_t)*(int32_t *)(*(int64_t *)(v2 + 16) + 36);
    }
    // 0x50b81b
    *(int32_t *)(a1 + 36) = (int32_t)v5;
    int64_t v6 = *(int64_t *)(*v3 + 24); // 0x50b822
    int64_t v7 = v6; // 0x50b82d
    if (v6 == g16) {
        // 0x50b833
        v7 = (int64_t)*(int32_t *)(*(int64_t *)(v2 + 16) + 40);
    }
    // 0x50b83a
    *(int32_t *)(a1 + 40) = (int32_t)v7;
    int64_t v8 = *(int64_t *)(*v3 + 64); // 0x50b841
    int64_t v9 = v8; // 0x50b84c
    if (v8 == g10) {
        // 0x50b852
        v9 = (int64_t)*(int32_t *)(*(int64_t *)(v2 + 16) + 96);
    }
    // 0x50b859
    *(int32_t *)(a1 + 96) = (int32_t)v9;
    int64_t v10; // bp-72, 0x50b7d0
    int64_t v11; // bp-96, 0x50b7d0
    if (*(int64_t *)(*v3 + 32) == g20) {
        int64_t v12 = *(int64_t *)(*(int64_t *)(v2 + 16) + 16); // 0x50b882
        function_250b0(&v11, v12, &v10);
    }
    int64_t v13 = *(int64_t *)(v11 - 24); // 0x50b890
    int64_t * v14 = (int64_t *)(a1 + 24); // 0x50b894
    *v14 = v13;
    int64_t v15 = function_4eec00(v13); // 0x50b898
    function_547670(&v11, v15, *v14, 0);
    char v16 = 0; // 0x50b8b8
    if (*v14 != 0) {
        // 0x50b8ba
        v16 = *(char *)v15 < 127;
    }
    // 0x50b8c7
    *(char *)(a1 + 32) = v16;
    int64_t v17; // bp-88, 0x50b7d0
    int64_t v18; // bp-99, 0x50b7d0
    if (*(int64_t *)(*v3 + 40) == g26) {
        int64_t v19 = *(int64_t *)(*(int64_t *)(v2 + 16) + 48); // 0x50b8f0
        function_35ef6(&v17, v19, &v18);
    }
    uint64_t v20 = *(int64_t *)(v17 - 24); // 0x50b8fe
    int64_t * v21 = (int64_t *)(a1 + 56); // 0x50b90f
    *v21 = v20;
    if (v20 >= 0x1fffffffffffffff) {
        // 0x50baf6
        return 0x1ffffffffffffffe;
    }
    int64_t v22 = function_4eec00(4 * v20); // 0x50b91d
    int64_t v23 = *v21; // 0x50b922
    function_54ff00(&v17, v22, v23, 0);
    int64_t v24 = v23; // 0x50b945
    int64_t v25; // bp-80, 0x50b7d0
    int64_t v26; // bp-98, 0x50b7d0
    if (*(int64_t *)(*v3 + 48) == g25) {
        int64_t v27 = *(int64_t *)(*(int64_t *)(v2 + 16) + 64); // 0x50b95c
        function_35ef6(&v25, v27, &v26);
        v24 = (int64_t)&v26;
    }
    uint64_t v28 = *(int64_t *)(v25 - 24); // 0x50b96a
    int64_t * v29 = (int64_t *)(a1 + 72); // 0x50b97b
    *v29 = v28;
    int64_t v30 = v24; // 0x50b97f
    int64_t v31; // 0x50b7d0
    if (v28 < 0x1fffffffffffffff) {
        int64_t v32 = function_4eec00(4 * v28); // 0x50b989
        function_54ff00(&v25, v32, *v29, 0);
        int64_t v33; // bp-97, 0x50b7d0
        if (*(int64_t *)(*v3 + 56) == g22) {
            int64_t v34 = *(int64_t *)(*(int64_t *)(v2 + 16) + 80); // 0x50b9c0
            function_35ef6(&v10, v34, &v33);
        }
        uint64_t v35 = *(int64_t *)(v10 - 24); // 0x50b9db
        int64_t * v36 = (int64_t *)(a1 + 88); // 0x50b9ec
        *v36 = v35;
        if (v35 >= 0x1fffffffffffffff) {
            // 0x50bcbb
            return function_208a0();
        }
        int64_t v37 = function_4eec00(4 * v35); // 0x50b9fa
        function_54ff00(&v10, v37, *v36, 0);
        int64_t v38 = *(int64_t *)(*v3 + 72); // 0x50ba19
        int64_t v39 = v38; // 0x50ba24
        if (v38 == g17) {
            // 0x50ba2a
            v39 = (int64_t)*(int32_t *)(*(int64_t *)(v2 + 16) + 100);
        }
        // 0x50ba31
        *(int32_t *)(a1 + 100) = (int32_t)v39;
        int64_t v40 = *(int64_t *)(*v3 + 80); // 0x50ba38
        int64_t v41 = v40; // 0x50ba43
        if (v40 == g27) {
            // 0x50ba49
            v41 = (int64_t)*(int32_t *)(*(int64_t *)(v2 + 16) + 104);
        }
        // 0x50ba50
        *(int32_t *)(a1 + 104) = (int32_t)v41;
        int64_t v42 = *(int64_t *)function_50ab00(a2); // 0x50ba63
        int64_t v43 = a1 + 108; // 0x50ba66
        *(int64_t *)(a1 + 16) = v15;
        *(int64_t *)(a1 + 48) = v22;
        *(int64_t *)(a1 + 64) = v32;
        *(int64_t *)(a1 + 80) = v37;
        *(char *)(a1 + 152) = 1;
        int64_t v44 = v10 - 24; // 0x50ba9b
        if (v44 != (int64_t)&g46) {
            // 0x50bbd0
            function_508450(v44, &v33, &g28, v43, v42);
        }
        int64_t v45 = v25 - 24; // 0x50baad
        if (v45 != (int64_t)&g46) {
            // 0x50bbe0
            function_508450(v45, &v33, &g28, v43, v42);
        }
        int64_t v46 = v17 - 24; // 0x50babf
        if (v46 != (int64_t)&g46) {
            // 0x50bbf0
            function_508450(v46, &v33, &g28, v43, v42);
        }
        int64_t v47 = v11 - 24; // 0x50bad1
        if (v47 != (int64_t)g15) {
            // 0x50bbc0
            function_508620(v47, &v33);
        }
        int64_t result = __readfsqword(40) ^ v1; // 0x50bae7
        if (result == 0) {
            // 0x50baf6
            return result;
        }
        // 0x50bbff
        __stack_chk_fail();
        v30 = (int64_t)&g28;
        v31 = v42;
    }
    int64_t v48 = function_208a0(); // 0x50bc04
    int64_t v49 = v25 - 24; // 0x50bc1b
    if (v49 != (int64_t)&g46) {
        // 0x50bc24
        function_508450(v49, &v26, (int64_t *)v30, v25, v31);
    }
    int64_t v50 = v17 - 24; // 0x50bc3b
    if (v50 != (int64_t)&g46) {
        // 0x50bc44
        function_508450(v50, &v18, (int64_t *)v30, v17, v31);
    }
    int64_t v51 = v11 - 24; // 0x50bc5b
    if (v51 != (int64_t)g15) {
        // 0x50bc68
        int64_t v52; // bp-100, 0x50b7d0
        function_508620(v51, &v52);
    }
    // 0x50bc7a
    function_1fd40(v48);
    if (v15 != 0) {
        // 0x50bc87
        function_4eeb40(v15);
    }
    if (v22 != 0) {
        // 0x50bc94
        function_4eeb40(v22);
    }
    // 0x50bcb6
    function_20a50();
    // 0x50bcbb
    return function_208a0();
}

// Address range: 0x50bde0 - 0x50c2d8
int64_t function_50bde0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x50bdf4
    int64_t v2 = function_50bd90(); // 0x50be08
    int64_t * v3 = (int64_t *)v2; // 0x50be10
    int64_t v4 = *(int64_t *)(*v3 + 16); // 0x50be13
    int64_t v5 = v4; // 0x50be1e
    if (v4 == g11) {
        // 0x50be24
        v5 = (int64_t)*(int32_t *)(*(int64_t *)(v2 + 16) + 36);
    }
    // 0x50be2b
    *(int32_t *)(a1 + 36) = (int32_t)v5;
    int64_t v6 = *(int64_t *)(*v3 + 24); // 0x50be32
    int64_t v7 = v6; // 0x50be3d
    if (v6 == g13) {
        // 0x50be43
        v7 = (int64_t)*(int32_t *)(*(int64_t *)(v2 + 16) + 40);
    }
    // 0x50be4a
    *(int32_t *)(a1 + 40) = (int32_t)v7;
    int64_t v8 = *(int64_t *)(*v3 + 64); // 0x50be51
    int64_t v9 = v8; // 0x50be5c
    if (v8 == g14) {
        // 0x50be62
        v9 = (int64_t)*(int32_t *)(*(int64_t *)(v2 + 16) + 96);
    }
    // 0x50be69
    *(int32_t *)(a1 + 96) = (int32_t)v9;
    int64_t v10; // bp-72, 0x50bde0
    int64_t v11; // bp-96, 0x50bde0
    if (*(int64_t *)(*v3 + 32) == g21) {
        int64_t v12 = *(int64_t *)(*(int64_t *)(v2 + 16) + 16); // 0x50be92
        function_250b0(&v11, v12, &v10);
    }
    int64_t v13 = *(int64_t *)(v11 - 24); // 0x50bea0
    int64_t * v14 = (int64_t *)(a1 + 24); // 0x50bea4
    *v14 = v13;
    int64_t v15 = function_4eec00(v13); // 0x50bea8
    function_547670(&v11, v15, *v14, 0);
    char v16 = 0; // 0x50bec8
    if (*v14 != 0) {
        // 0x50beca
        v16 = *(char *)v15 < 127;
    }
    // 0x50bed7
    *(char *)(a1 + 32) = v16;
    int64_t v17; // bp-88, 0x50bde0
    int64_t v18; // bp-99, 0x50bde0
    if (*(int64_t *)(*v3 + 40) == g18) {
        int64_t v19 = *(int64_t *)(*(int64_t *)(v2 + 16) + 48); // 0x50bf00
        function_35ef6(&v17, v19, &v18);
    }
    uint64_t v20 = *(int64_t *)(v17 - 24); // 0x50bf0e
    int64_t * v21 = (int64_t *)(a1 + 56); // 0x50bf1f
    *v21 = v20;
    if (v20 >= 0x1fffffffffffffff) {
        // 0x50c106
        return 0x1ffffffffffffffe;
    }
    int64_t v22 = function_4eec00(4 * v20); // 0x50bf2d
    int64_t v23 = *v21; // 0x50bf32
    function_54ff00(&v17, v22, v23, 0);
    int64_t v24 = v23; // 0x50bf55
    int64_t v25; // bp-80, 0x50bde0
    int64_t v26; // bp-98, 0x50bde0
    if (*(int64_t *)(*v3 + 48) == g19) {
        int64_t v27 = *(int64_t *)(*(int64_t *)(v2 + 16) + 64); // 0x50bf6c
        function_35ef6(&v25, v27, &v26);
        v24 = (int64_t)&v26;
    }
    uint64_t v28 = *(int64_t *)(v25 - 24); // 0x50bf7a
    int64_t * v29 = (int64_t *)(a1 + 72); // 0x50bf8b
    *v29 = v28;
    int64_t v30 = v24; // 0x50bf8f
    int64_t v31; // 0x50bde0
    if (v28 < 0x1fffffffffffffff) {
        int64_t v32 = function_4eec00(4 * v28); // 0x50bf99
        function_54ff00(&v25, v32, *v29, 0);
        int64_t v33; // bp-97, 0x50bde0
        if (*(int64_t *)(*v3 + 56) == g12) {
            int64_t v34 = *(int64_t *)(*(int64_t *)(v2 + 16) + 80); // 0x50bfd0
            function_35ef6(&v10, v34, &v33);
        }
        uint64_t v35 = *(int64_t *)(v10 - 24); // 0x50bfeb
        int64_t * v36 = (int64_t *)(a1 + 88); // 0x50bffc
        *v36 = v35;
        if (v35 >= 0x1fffffffffffffff) {
            // 0x50c2cb
            return function_208a0();
        }
        int64_t v37 = function_4eec00(4 * v35); // 0x50c00a
        function_54ff00(&v10, v37, *v36, 0);
        int64_t v38 = *(int64_t *)(*v3 + 72); // 0x50c029
        int64_t v39 = v38; // 0x50c034
        if (v38 == g9) {
            // 0x50c03a
            v39 = (int64_t)*(int32_t *)(*(int64_t *)(v2 + 16) + 100);
        }
        // 0x50c041
        *(int32_t *)(a1 + 100) = (int32_t)v39;
        int64_t v40 = *(int64_t *)(*v3 + 80); // 0x50c048
        int64_t v41 = v40; // 0x50c053
        if (v40 == g23) {
            // 0x50c059
            v41 = (int64_t)*(int32_t *)(*(int64_t *)(v2 + 16) + 104);
        }
        // 0x50c060
        *(int32_t *)(a1 + 104) = (int32_t)v41;
        int64_t v42 = *(int64_t *)function_50ab00(a2); // 0x50c073
        int64_t v43 = a1 + 108; // 0x50c076
        *(int64_t *)(a1 + 16) = v15;
        *(int64_t *)(a1 + 48) = v22;
        *(int64_t *)(a1 + 64) = v32;
        *(int64_t *)(a1 + 80) = v37;
        *(char *)(a1 + 152) = 1;
        int64_t v44 = v10 - 24; // 0x50c0ab
        if (v44 != (int64_t)&g46) {
            // 0x50c1e0
            function_508450(v44, &v33, &g28, v43, v42);
        }
        int64_t v45 = v25 - 24; // 0x50c0bd
        if (v45 != (int64_t)&g46) {
            // 0x50c1f0
            function_508450(v45, &v33, &g28, v43, v42);
        }
        int64_t v46 = v17 - 24; // 0x50c0cf
        if (v46 != (int64_t)&g46) {
            // 0x50c200
            function_508450(v46, &v33, &g28, v43, v42);
        }
        int64_t v47 = v11 - 24; // 0x50c0e1
        if (v47 != (int64_t)g15) {
            // 0x50c1d0
            function_508620(v47, &v33);
        }
        int64_t result = __readfsqword(40) ^ v1; // 0x50c0f7
        if (result == 0) {
            // 0x50c106
            return result;
        }
        // 0x50c20f
        __stack_chk_fail();
        v30 = (int64_t)&g28;
        v31 = v42;
    }
    int64_t v48 = function_208a0(); // 0x50c214
    int64_t v49 = v25 - 24; // 0x50c22b
    if (v49 != (int64_t)&g46) {
        // 0x50c234
        function_508450(v49, &v26, (int64_t *)v30, v25, v31);
    }
    int64_t v50 = v17 - 24; // 0x50c24b
    if (v50 != (int64_t)&g46) {
        // 0x50c254
        function_508450(v50, &v18, (int64_t *)v30, v17, v31);
    }
    int64_t v51 = v11 - 24; // 0x50c26b
    if (v51 != (int64_t)g15) {
        // 0x50c278
        int64_t v52; // bp-100, 0x50bde0
        function_508620(v51, &v52);
    }
    // 0x50c28a
    function_1fd40(v48);
    if (v15 != 0) {
        // 0x50c297
        function_4eeb40(v15);
    }
    if (v22 != 0) {
        // 0x50c2a4
        function_4eeb40(v22);
    }
    // 0x50c2c6
    function_20a50();
    // 0x50c2cb
    return function_208a0();
}

// Address range: 0x5574b0 - 0x5579a8
int64_t function_5574b0(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11) {
    // 0x5574b0
    __readfsqword(40);
    int64_t v1 = function_554b00(); // 0x5574f7
    int64_t v2; // bp-90, 0x5574b0
    int64_t v3 = function_557390(&v2, a4 + 208); // 0x557507
    int64_t v4; // 0x5574b0
    int64_t v5; // 0x5574b0
    int64_t v6; // 0x5574b0
    int64_t v7; // 0x5574b0
    int32_t v8; // bp-68, 0x5574b0
    int64_t v9; // 0x5574b0
    if (*(char *)(v3 + 100) == (char)v9) {
        int64_t v10 = *(int64_t *)(a6 - 24); // 0x5578e5
        v8 = *(int32_t *)(v3 + 96);
        if (v10 == 0) {
            // 0x5577f8
            *(int64_t *)(a4 + 16) = 0;
            __readfsqword(40);
            return result;
        }
        // 0x55790a
        v6 = v3 + 72;
        v7 = v3 + 80;
        v5 = v10;
        v4 = a6 + 1;
    } else {
        // 0x557520
        v8 = *(int32_t *)(v3 + 92);
        v6 = v3 + 56;
        v7 = v3 + 64;
        v5 = *(int64_t *)(a6 - 24);
        v4 = a6;
    }
    uint64_t v11 = v4;
    uint64_t v12 = v11 + v5; // 0x557541
    if (v5 == 0 || v12 < v11) {
        // 0x5577f8
        *(int64_t *)(a4 + 16) = 0;
        __readfsqword(40);
        return result;
    }
    int64_t v13 = *(int64_t *)(v1 + 48) + 1; // 0x557555
    if ((*(char *)(v13 + 2 * (int64_t)*(char *)v11) & 8) == 0) {
        // 0x5577f8
        *(int64_t *)(a4 + 16) = 0;
        __readfsqword(40);
        return result;
    }
    uint64_t v14 = *(int64_t *)v7;
    int64_t v15 = *(int64_t *)v6;
    int64_t v16 = v11 + 1; // 0x557576
    int64_t v17 = v5; // 0x55757d
    int64_t v18 = a3; // 0x55757d
    if (v12 != v16) {
        int64_t v19 = v16;
        v18 = (int64_t)*(char *)v19;
        int64_t v20; // 0x5574b0
        while ((*(char *)(2 * v18 + v13) & 8) != 0) {
            int64_t v21 = v19 + 1; // 0x557576
            v20 = v5;
            if (v12 == v21) {
                goto lab_0x557582;
            }
            v19 = v21;
            v18 = (int64_t)*(char *)v19;
        }
        // 0x557838
        v20 = v19 - v11;
      lab_0x557582:
        // 0x557582
        v17 = v20;
        if (v17 == 0) {
          lab_0x5577f8:
            // 0x5577f8
            *(int64_t *)(a4 + 16) = 0;
            __readfsqword(40);
            return result;
        }
    }
    int32_t v22 = (int64_t)&g45; // bp-88, 0x55759a
    int64_t v23 = (int64_t)&v22; // 0x5575a7
    function_259ce((int64_t *)&v22, 2 * v17, v18);
    int32_t * v24 = (int32_t *)(v3 + 88); // 0x5575b1
    int32_t v25 = *v24; // 0x5575b1
    int64_t v26 = v25; // 0x5575b1
    int64_t v27 = v17 - v26; // 0x5575b9
    int32_t v28 = v25; // 0x5575c2
    int64_t v29 = v26; // 0x5575c2
    int64_t v30 = v27; // 0x5575c2
    int64_t v31; // 0x5574b0
    int64_t v32; // 0x5574b0
    if (v27 < 1) {
        goto lab_0x557679;
    } else {
        // 0x5575c8
        v30 = v25 < 0 ? v17 : v27;
        int64_t * v33 = (int64_t *)(v3 + 24); // 0x5575ce
        if (*v33 == 0) {
            // 0x557978
            function_25c34(v23, v11, v30);
            v32 = v30;
            v31 = v30;
            if (*v24 < 1) {
                goto lab_0x557681;
            } else {
                goto lab_0x557930;
            }
        } else {
            // 0x5575da
            function_547fb0(v23, 0, g43, 2 * v30, 0);
            int64_t v34 = *v33; // 0x5575f6
            int64_t v35 = *(int64_t *)(v3 + 16); // 0x557605
            char v36 = *(char *)(v3 + 34); // 0x55760f
            if (g44 >= 0) {
                // 0x557620
                function_27bbe(v23);
            }
            int64_t v37 = function_556cf0((int64_t)v22, (int32_t)v36, v35, v34, v11, v30 + v11); // 0x557645
            function_255da(v23);
            function_3aeea(v23, v37 - (int64_t)v22, -1);
            v28 = *v24;
            v29 = -1;
            goto lab_0x557679;
        }
    }
  lab_0x557679:;
    int32_t v38 = v28;
    v32 = v29;
    v31 = v30;
    if (v38 >= 0 == (v38 != 0)) {
        goto lab_0x557930;
    } else {
        goto lab_0x557681;
    }
  lab_0x557930:;
    int64_t result2 = function_451f2(v23, *(char *)(v3 + 33), v32); // 0x557943
    if (v31 < 0) {
      lab_0x5579a0:
        // 0x5579a0
        return result2;
    }
    int32_t v39 = *v24; // 0x557945
    function_25cec((int64_t *)&v22, (int64_t *)(v31 + v11), (int64_t)v39);
    goto lab_0x557681;
  lab_0x557681:;
    int32_t v40 = *(int32_t *)(a4 + 24); // 0x557681
    int64_t v41 = g43 + v14; // 0x55769b
    int64_t v42 = v41; // 0x5576a7
    if ((v40 & 512) != 0) {
        // 0x557918
        v42 = *(int64_t *)(v3 + 48) + v41;
    }
    int64_t v43 = 0x100000000 * v42;
    int32_t v44 = (int64_t)&g45; // bp-80, 0x5576c1
    int64_t v45 = (int64_t)&v44; // 0x5576ce
    function_259ce((int64_t *)&v44, v43 >> 31, (int64_t)v22);
    uint64_t v46 = *(int64_t *)(a4 + 16); // 0x5576dd
    int64_t v47 = 0;
    unsigned char v48 = *(char *)(v47 + (int64_t)&v8); // 0x557703
    int64_t v49; // 0x557759
    while (v48 >= 5) {
        // 0x557730
        if (v47 == 3) {
            // 0x55773a
            v49 = v46 & -256 | (int64_t)(v46 > v43 >> 32);
            if (v14 < 2) {
                goto lab_0x55775e;
            } else {
                // 0x557742
                v49 = function_25cec((int64_t *)&v44, (int64_t *)(v15 + 1), v14 - 1);
                goto lab_0x55775e;
            }
        }
        v47++;
        v48 = *(char *)(v47 + (int64_t)&v8);
    }
    int32_t v50 = *(int32_t *)(4 * (int64_t)v48 + (int64_t)&g4); // 0x55770f
    return (int64_t)v50 + (int64_t)&g4;
  lab_0x55775e:;
    int64_t v51 = v49; // 0x55776c
    if (v46 > g43) {
        // 0x55776e
        result2 = v49;
        if ((v40 & 176) == 32) {
            goto lab_0x5579a0;
        } else {
            // 0x557787
            v51 = function_547fb0(v45, 0, 0, v46 - g43, (int32_t)(0x100000000000000 * a5 >> 56));
            goto lab_0x55779f;
        }
    } else {
        goto lab_0x55779f;
    }
  lab_0x55779f:
    // 0x55779f
    result2 = (char)a3 != 0 ? v51 : (int64_t)v44;
    if (g15 != &g43) {
        goto lab_0x5579a0;
    } else {
        goto lab_0x5577f8;
    }
}

// Address range: 0x557b60 - 0x55804b
int64_t function_557b60(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11) {
    // 0x557b60
    __readfsqword(40);
    int64_t v1 = function_554b00(); // 0x557ba7
    int64_t v2; // bp-90, 0x557b60
    int64_t v3 = function_557a40(&v2, a4 + 208); // 0x557bb7
    int64_t v4; // 0x557b60
    int64_t v5; // 0x557b60
    int64_t v6; // 0x557b60
    int64_t v7; // 0x557b60
    int32_t v8; // bp-68, 0x557b60
    int64_t v9; // 0x557b60
    if (*(char *)(v3 + 100) == (char)v9) {
        int64_t v10 = *(int64_t *)(a6 - 24); // 0x557f85
        v8 = *(int32_t *)(v3 + 96);
        if (v10 == 0) {
            // 0x557e98
            *(int64_t *)(a4 + 16) = 0;
            __readfsqword(40);
            return result;
        }
        // 0x557faa
        v6 = v3 + 72;
        v7 = v3 + 80;
        v5 = v10;
        v4 = a6 + 1;
    } else {
        // 0x557bd0
        v8 = *(int32_t *)(v3 + 92);
        v6 = v3 + 56;
        v7 = v3 + 64;
        v5 = *(int64_t *)(a6 - 24);
        v4 = a6;
    }
    uint64_t v11 = v4;
    uint64_t v12 = v11 + v5; // 0x557bf1
    if (v5 == 0 || v12 < v11) {
        // 0x557e98
        *(int64_t *)(a4 + 16) = 0;
        __readfsqword(40);
        return result;
    }
    int64_t v13 = *(int64_t *)(v1 + 48) + 1; // 0x557c05
    if ((*(char *)(v13 + 2 * (int64_t)*(char *)v11) & 8) == 0) {
        // 0x557e98
        *(int64_t *)(a4 + 16) = 0;
        __readfsqword(40);
        return result;
    }
    uint64_t v14 = *(int64_t *)v7;
    int64_t v15 = *(int64_t *)v6;
    int64_t v16 = v11 + 1; // 0x557c26
    int64_t v17 = v5; // 0x557c2d
    int64_t v18 = a3; // 0x557c2d
    if (v12 != v16) {
        int64_t v19 = v16;
        v18 = (int64_t)*(char *)v19;
        int64_t v20; // 0x557b60
        while ((*(char *)(2 * v18 + v13) & 8) != 0) {
            int64_t v21 = v19 + 1; // 0x557c26
            v20 = v5;
            if (v12 == v21) {
                goto lab_0x557c32;
            }
            v19 = v21;
            v18 = (int64_t)*(char *)v19;
        }
        // 0x557ed8
        v20 = v19 - v11;
      lab_0x557c32:
        // 0x557c32
        v17 = v20;
        if (v17 == 0) {
          lab_0x557e98:
            // 0x557e98
            *(int64_t *)(a4 + 16) = 0;
            __readfsqword(40);
            return result;
        }
    }
    int32_t v22 = (int64_t)&g45; // bp-88, 0x557c4a
    int64_t v23 = (int64_t)&v22; // 0x557c57
    function_259ce((int64_t *)&v22, 2 * v17, v18);
    int32_t * v24 = (int32_t *)(v3 + 88); // 0x557c61
    int32_t v25 = *v24; // 0x557c61
    int64_t v26 = v25; // 0x557c61
    int64_t v27 = v17 - v26; // 0x557c69
    int32_t v28 = v25; // 0x557c72
    int64_t v29 = v26; // 0x557c72
    int64_t v30 = v27; // 0x557c72
    int64_t v31; // 0x557b60
    int64_t v32; // 0x557b60
    if (v27 < 1) {
        goto lab_0x557d1e;
    } else {
        // 0x557c78
        v30 = v25 < 0 ? v17 : v27;
        int64_t * v33 = (int64_t *)(v3 + 24); // 0x557c7e
        if (*v33 == 0) {
            // 0x558018
            function_25c34(v23, v11, v30);
            v32 = v30;
            v31 = v30;
            if (*v24 < 1) {
                goto lab_0x557d26;
            } else {
                goto lab_0x557fd0;
            }
        } else {
            // 0x557c8a
            function_547fb0(v23, 0, g43, 2 * v30, 0);
            int64_t v34 = *v33; // 0x557ca6
            char v35 = *(char *)(v3 + 34); // 0x557cab
            int64_t v36 = *(int64_t *)(v3 + 16); // 0x557cb1
            function_255da(v23);
            int64_t v37 = function_556cf0((int64_t)v22, (int32_t)v35, v36, v34, v11, v30 + v11); // 0x557cea
            function_255da(v23);
            function_3aeea(v23, v37 - (int64_t)v22, -1);
            v28 = *v24;
            v29 = -1;
            goto lab_0x557d1e;
        }
    }
  lab_0x557d1e:;
    int32_t v38 = v28;
    v32 = v29;
    v31 = v30;
    if (v38 >= 0 == (v38 != 0)) {
        goto lab_0x557fd0;
    } else {
        goto lab_0x557d26;
    }
  lab_0x557fd0:;
    int64_t result2 = function_451f2(v23, *(char *)(v3 + 33), v32); // 0x557fe3
    if (v31 < 0) {
      lab_0x558040:
        // 0x558040
        return result2;
    }
    int32_t v39 = *v24; // 0x557fe5
    function_25cec((int64_t *)&v22, (int64_t *)(v31 + v11), (int64_t)v39);
    goto lab_0x557d26;
  lab_0x557d26:;
    int32_t v40 = *(int32_t *)(a4 + 24); // 0x557d26
    int64_t v41 = g43 + v14; // 0x557d40
    int64_t v42 = v41; // 0x557d4c
    if ((v40 & 512) != 0) {
        // 0x557fb8
        v42 = *(int64_t *)(v3 + 48) + v41;
    }
    int64_t v43 = 0x100000000 * v42;
    int32_t v44 = (int64_t)&g45; // bp-80, 0x557d66
    int64_t v45 = (int64_t)&v44; // 0x557d73
    function_259ce((int64_t *)&v44, v43 >> 31, (int64_t)v22);
    uint64_t v46 = *(int64_t *)(a4 + 16); // 0x557d82
    int64_t v47 = 0;
    unsigned char v48 = *(char *)(v47 + (int64_t)&v8); // 0x557da8
    int64_t v49; // 0x557df9
    while (v48 >= 5) {
        // 0x557dd0
        if (v47 == 3) {
            // 0x557dda
            v49 = v46 & -256 | (int64_t)(v46 > v43 >> 32);
            if (v14 < 2) {
                goto lab_0x557dfe;
            } else {
                // 0x557de2
                v49 = function_25cec((int64_t *)&v44, (int64_t *)(v15 + 1), v14 - 1);
                goto lab_0x557dfe;
            }
        }
        v47++;
        v48 = *(char *)(v47 + (int64_t)&v8);
    }
    int32_t v50 = *(int32_t *)(4 * (int64_t)v48 + (int64_t)&g5); // 0x557db4
    return (int64_t)v50 + (int64_t)&g5;
  lab_0x557dfe:;
    int64_t v51 = v49; // 0x557e0c
    if (v46 > g43) {
        // 0x557e0e
        result2 = v49;
        if ((v40 & 176) == 32) {
            goto lab_0x558040;
        } else {
            // 0x557e27
            v51 = function_547fb0(v45, 0, 0, v46 - g43, (int32_t)(0x100000000000000 * a5 >> 56));
            goto lab_0x557e3f;
        }
    } else {
        goto lab_0x557e3f;
    }
  lab_0x557e3f:
    // 0x557e3f
    result2 = (char)a3 != 0 ? v51 : (int64_t)v44;
    if (g15 != &g43) {
        goto lab_0x558040;
    } else {
        goto lab_0x557e98;
    }
}

// Address range: 0x564652 - 0x564874
int64_t function_564652(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x564652
    int64_t v1; // 0x564652
    if ((v1 & -248) + a2 == a8) {
        // 0x56485f
        return function_564301();
    }
    // 0x564663
    return function_56447a();
}

// Address range: 0x564874 - 0x564b40
int64_t function_564874(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x564874
    __stack_chk_fail();
    int64_t v1 = __readfsqword(40); // 0x564897
    int64_t v2 = function_564de0(); // 0x5648b1
    int64_t v3 = v2 & 0xffffffff; // 0x5648b8
    int64_t v4 = v3; // 0x5648ba
    int64_t v5 = a2; // 0x5648ba
    int32_t * v6; // 0x564874
    int64_t v7; // 0x564874
    int64_t v8; // 0x564874
    int64_t v9; // 0x564874
    int64_t v10; // 0x564874
    int64_t v11; // 0x564874
    int64_t v12; // 0x564874
    int64_t v13; // 0x564874
    int64_t v14; // 0x5648d7
    int64_t v15; // 0x5648f3
    int64_t * v16; // 0x564874
    int32_t * v17; // 0x564874
    char * v18; // 0x564874
    int64_t v19; // 0x564874
    if ((char)v2 == 0) {
        int32_t v20 = *(int32_t *)(a4 + 12); // 0x5648c0
        int32_t v21 = v20; // 0x5648c9
        if ((v20 & 16) != 0) {
            // 0x564ac0
            v21 = *(int32_t *)(a1 + 16);
        }
        uint32_t v22 = *(int32_t *)(a1 + 20); // 0x5648d7
        if (v22 == 0) {
            // 0x5648cf
            v6 = (int32_t *)(a4 + 8);
            v11 = v3;
            v13 = a2;
        } else {
            // 0x56492e
            v14 = v22;
            int128_t v23; // bp-88, 0x564874
            v15 = (int64_t)&v23;
            int64_t v24 = v21; // 0x564931
            v16 = (int64_t *)(a4 + 16);
            v17 = (int32_t *)(a4 + 8);
            v18 = (char *)(a1 + 16);
            v7 = 0;
            v10 = v3;
            while (true) {
              lab_0x56492e:
                // 0x56492e
                v8 = v24;
                v23 = 0;
                v19 = 16 * v14 + a1 + 16 * v7;
                uint32_t v25 = (int32_t)*(int64_t *)(v19 + 16) & 2; // 0x564965
                if (v25 != 0) {
                    goto lab_0x564973;
                } else {
                    // 0x56496e
                    v9 = v10;
                    v12 = v25;
                    if (v24 % 2 == 0) {
                        goto lab_0x56491f;
                    } else {
                        goto lab_0x564973;
                    }
                }
            }
        }
      lab_0x564ad0:
        // 0x564ad0
        v4 = v11 & -256 | (int64_t)(*v6 != 0);
        v5 = v13;
    }
    goto lab_0x564a20_4;
  lab_0x564a20_4:;
    int64_t v26 = __readfsqword(40) ^ v1; // 0x564a25
    if (v26 == 0) {
        // 0x564a36
        return v4 & 0xffffffff;
    }
    // 0x564af1
    __stack_chk_fail();
    if ((int32_t)v26 >= 2) {
        // 0x564b32
        return function_4efc80(*(int64_t *)(v5 - 56));
    }
    int32_t * v27 = (int32_t *)(v5 - 96); // 0x564b06
    int32_t v28 = *v27 - 1; // 0x564b06
    *v27 = v28;
    if (v28 != 0) {
        // 0x564b30
        return (int64_t)&g51;
    }
    // 0x564b0d
    return function_1fcc0(v5 + 32);
  lab_0x564973:
    // 0x564973
    v8 = v15;
    int64_t v29 = *(int64_t *)*(int64_t *)(v19 + 8); // 0x5649a0
    int64_t v30 = v29 & 0xffffffff; // 0x5649a8
    v9 = v30;
    v12 = a2;
    if ((char)v29 != 0) {
        // 0x5649d8
        if (*v16 != 0) {
            // 0x564add
            *(int64_t *)a4 = 0;
            *v17 = 2;
            v4 = v30;
            v5 = a2;
            goto lab_0x564a20_4;
        }
        int128_t v31 = __asm_movdqa(0); // 0x5649ea
        *v16 = 0;
        __asm_movups_133(*(int128_t *)&v8, v31);
        uint32_t v32 = *v17; // 0x5649f8
        v4 = v30;
        v5 = a2;
        if (v32 < 4) {
            goto lab_0x564a20_4;
        }
        uint64_t v33 = (int64_t)v32; // 0x5649f8
        if ((v33 & 2) == 0) {
            // 0x564aa0
            v4 = v30;
            v5 = a2;
            if (v33 % 2 == 0) {
                goto lab_0x564a20_4;
            }
            // 0x564aa8
            v9 = v30;
            v12 = a2;
            v4 = v30;
            v5 = a2;
            if ((*v18 & 2) == 0) {
                goto lab_0x564a20_4;
            }
        } else {
            // 0x564a08
            v9 = v30;
            v12 = a2;
            v4 = v30;
            v5 = a2;
            if (*v18 % 2 == 0) {
                goto lab_0x564a20_4;
            }
        }
    }
    goto lab_0x56491f;
  lab_0x56491f:;
    int64_t v34 = v7 - 1; // 0x56491f
    v7 = v34;
    v10 = v9;
    v6 = v17;
    v11 = v9;
    v13 = v12;
    if (v34 == -v14) {
        // break -> 0x564ad0
        goto lab_0x564ad0;
    }
    goto lab_0x56492e;
}

// Address range: 0x564b40 - 0x564b53
int64_t __cxa_init_primary_exception(int64_t a1, int64_t a2, int64_t a3) {
    // 0x564b40
    *(int32_t *)(a1 - 128) = 0;
    *(int64_t *)(a1 - 112) = a2;
    *(int64_t *)(a1 - 104) = a3;
    int64_t result; // 0x564b40
    return result;
}

// Address range: 0x57b480 - 0x57b9b0
int64_t function_57b480(int64_t a1, int64_t a2, char a3, int64_t a4) {
    // 0x57b480
    __readfsqword(40);
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x57b4a1
    int64_t v2 = *v1; // 0x57b4a1
    unsigned char v3 = *(char *)v2; // 0x57b4a5
    int64_t v4; // 0x57b480
    int64_t v5; // 0x57b480
    int64_t v6; // 0x57b480
    int64_t v7; // 0x57b480
    int64_t v8; // 0x57b480
    int64_t v9; // 0x57b480
    int64_t v10; // 0x57b480
    int64_t v11; // 0x57b480
    int64_t result3; // 0x57b480
    char v12; // 0x57b480
    char v13; // 0x57b480
    int64_t v14; // 0x57b480
    int64_t v15; // 0x57b480
    int64_t v16; // 0x57b480
    int64_t v17; // 0x57b480
    int64_t v18; // 0x57b480
    int64_t v19; // 0x57b480
    int64_t v20; // 0x57b480
    int64_t v21; // 0x57b480
    int64_t v22; // 0x57b480
    int64_t v23; // 0x57b480
    int64_t v24; // 0x57b480
    int64_t v25; // 0x57b5fb
    int64_t v26; // 0x57b4d3
    int32_t * v27; // 0x57b480
    int64_t result4; // 0x57b657
    if (v3 == 83) {
        // 0x57b710
        if (*(char *)(v2 + 1) == 116) {
            // 0x57b750
            *v1 = v2 + 2;
            int64_t v28 = function_57caa0(a1); // 0x57b758
            int32_t * v29 = (int32_t *)(a1 + 40); // 0x57b75d
            int32_t v30 = *v29; // 0x57b75d
            int64_t v31 = 0; // 0x57b765
            if (v30 < *(int32_t *)(a1 + 44)) {
                int64_t v32 = *(int64_t *)(a1 + 32); // 0x57b8d1
                *v29 = v30 + 1;
                v31 = v32 + 8 * ((0x100000000 * (int64_t)v30 >> 31) + (int64_t)v30);
                *(int32_t *)(v31 + 4) = 0;
                *(int32_t *)v31 = 0;
                *(int64_t *)(v31 + 8) = (int64_t)"std";
                *(int32_t *)(v31 + 16) = 3;
            }
            int64_t result = function_5797e0(a1, 1, v31, (int32_t)v28); // 0x57b776
            int32_t * v33 = (int32_t *)(a1 + 80); // 0x57b782
            *v33 = *v33 + 3;
            v15 = result;
            if (*(char *)*v1 != 73) {
                // 0x57b5b0
                __readfsqword(40);
                return result;
            }
            goto lab_0x57b6e8;
        } else {
            int64_t result2 = function_579d80(a1, 0, (int64_t)v3, a4); // 0x57b718
            v16 = result2;
            if (*(char *)*v1 != 73) {
                // 0x57b5b0
                __readfsqword(40);
                return result2;
            }
            goto lab_0x57b72d;
        }
    } else {
        if (v3 > 83) {
            if (v3 == 85) {
                // 0x57b5b0
                result3 = function_57caa0(a1);
                __readfsqword(40);
                return result3;
            }
            if (v3 != 90) {
                goto lab_0x57b6d0;
            } else {
                // 0x57b4c9
                *v1 = v2 + 1;
                v26 = function_57cf40();
                int64_t v34 = *v1; // 0x57b4db
                if (*(char *)v34 != 69) {
                    // 0x57b5b0
                    __readfsqword(40);
                    return 0;
                }
                int64_t v35 = v34 + 1; // 0x57b4e8
                *v1 = v35;
                char v36 = *(char *)v35; // 0x57b4f0
                switch (v36) {
                    case 115: {
                        // 0x57b967
                        *v1 = v34 + 2;
                        if ((int32_t)function_579f90(a1) == 0) {
                            // 0x57b5b0
                            __readfsqword(40);
                            return 0;
                        }
                        int32_t * v37 = (int32_t *)(a1 + 40); // 0x57b97f
                        int32_t v38 = *v37; // 0x57b97f
                        v21 = 0;
                        if (v38 < *(int32_t *)(a1 + 44)) {
                            int64_t v39 = *(int64_t *)(a1 + 32); // 0x57b997
                            *v37 = v38 + 1;
                            *(int32_t *)(v39 + (8 * ((0x100000000 * (int64_t)v38 >> 31) + (int64_t)v38) | 4)) = 0;
                            return (int64_t)"string literal";
                        }
                        goto lab_0x57b581;
                    }
                    case 100: {
                        // 0x57b910
                        *v1 = v34 + 2;
                        int64_t v40 = function_579b00(a1); // 0x57b91b
                        if ((int32_t)v40 < 0) {
                            // 0x57b5b0
                            __readfsqword(40);
                            return 0;
                        }
                        int64_t v41 = v40 & 0xffffffff; // 0x57b922
                        int64_t v42 = function_57b480(a1, 0, 100, a4); // 0x57b92e
                        v20 = 0;
                        v6 = v41;
                        if (v42 == 0) {
                            goto lab_0x57b548;
                        } else {
                            // 0x57b93f
                            v18 = v42;
                            v4 = v41;
                            v19 = v42;
                            v5 = v41;
                            switch (*(int32_t *)v42) {
                                case 69: {
                                    goto lab_0x57b542;
                                }
                                case 71: {
                                    goto lab_0x57b542;
                                }
                                default: {
                                    goto lab_0x57b528;
                                }
                            }
                        }
                    }
                    default: {
                        int64_t v43 = function_57b480(a1, 0, v36, a4); // 0x57b509
                        v21 = 0;
                        if (v43 == 0) {
                            goto lab_0x57b581;
                        } else {
                            // 0x57b516
                            v18 = v43;
                            v4 = 0xffffffff;
                            v21 = v43;
                            switch (*(int32_t *)v43) {
                                case 69: {
                                    goto lab_0x57b581;
                                }
                                case 71: {
                                    goto lab_0x57b581;
                                }
                                default: {
                                    goto lab_0x57b528;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (v3 == 78) {
                // 0x57b5e9
                *v1 = v2 + 1;
                v25 = function_57c770();
                if (v25 == 0) {
                    // 0x57b5b0
                    __readfsqword(40);
                    return 0;
                }
                // 0x57b60c
                function_579850(a1, 0);
                int64_t v44 = *v1; // 0x57b619
                char v45 = *(char *)v44; // 0x57b62a
                if (v45 == 0) {
                  lab_0x57b6b8:
                    // 0x57b6b8
                    *(int64_t *)v25 = 0;
                    // 0x57b5b0
                    __readfsqword(40);
                    return 0;
                }
                // 0x57b639
                v27 = (int32_t *)(a1 + 56);
                v7 = 0;
                v12 = v45;
                v22 = v44;
                while (true) {
                  lab_0x57b639_2:
                    // 0x57b639
                    v23 = v22;
                    v13 = v12;
                    v8 = v7;
                    while (true) {
                      lab_0x57b639:;
                        int64_t v46 = v8;
                        int64_t v47 = v23;
                        v24 = v47;
                        v14 = v13;
                        v9 = v46;
                        if (v13 == 68) {
                            // 0x57b7f0
                            if ((*(char *)(v47 + 1) & -33) != 84) {
                                // 0x57b8a0
                                v11 = function_57caa0(a1);
                                v17 = 68;
                                v10 = v46;
                            } else {
                                // 0x57b802
                                v11 = function_57ba10(a1);
                                v17 = 68;
                                v10 = v46;
                            }
                            goto lab_0x57b807;
                        } else {
                            goto lab_0x57b643;
                        }
                    }
                    goto lab_0x57b630_3;
                }
                // 0x57b9c6
                return result4;
            }
            goto lab_0x57b6d0;
        }
    }
  lab_0x57b7c2_2:;
    // 0x57b7c2
    int64_t v48; // 0x57b480
    int64_t v49; // 0x57b480
    char v50; // 0x57b480
    int64_t v51; // 0x57b480
    int64_t v52; // 0x57b480
    if (v49 == 0) {
        goto lab_0x57b6b8;
    } else {
        uint32_t v53 = *v27; // 0x57b7cb
        if (v53 < *(int32_t *)(a1 + 60)) {
            int64_t v54 = *(int64_t *)(a1 + 48); // 0x57b7d7
            *(int64_t *)(v54 + (0x100000000 * (int64_t)v53 >> 29)) = v49;
            *v27 = v53 + 1;
            v51 = v52;
            v50 = *(char *)v52;
            v48 = v49;
            goto lab_0x57b630_3;
        } else {
            goto lab_0x57b6b8;
        }
    }
  lab_0x57b643:;
    int64_t v55 = v9;
    int64_t v56 = v14;
    uint64_t v57 = v56 + 0xffffffd0; // 0x57b643
    result4 = (char)v57 >= 38 ? 0 : (0x20100803ff >> v57 % 64) % 2;
    int64_t v58 = v56 + 0xffffff9f; // 0x57b65a
    int64_t v59; // 0x57b480
    int64_t v60; // 0x57b480
    int64_t v61; // 0x57b480
    int64_t v62; // 0x57b480
    int64_t v63; // 0x57b480
    char v64; // 0x57b480
    int64_t v65; // 0x57b480
    int64_t v66; // 0x57b480
    if ((char)v58 < 26 || result4 != 0) {
        int64_t v67 = function_57caa0(a1); // 0x57b79b
        v62 = v67;
        if (v55 != 0) {
            goto lab_0x57b898;
        } else {
            int64_t v68 = *v1; // 0x57b7a9
            v64 = *(char *)v68;
            v65 = v68;
            v59 = v67;
            if (v56 == 83) {
                // break -> 0x57b630
                goto lab_0x57b630_3;
            }
            goto lab_0x57b7bd;
        }
    } else {
        int64_t v69 = v24;
        char v70 = v56; // 0x57b66e
        switch (v70) {
            case 83: {
                int64_t v71 = function_579d80(a1, 1, v69, v58 & 0xffffffff); // 0x57b888
                v62 = v71;
                if (v55 == 0) {
                    int64_t v72 = *v1; // 0x57b8b0
                    v51 = v72;
                    v50 = *(char *)v72;
                    v48 = v71;
                    goto lab_0x57b630_3;
                }
                goto lab_0x57b898;
            }
            case 73: {
                if (v55 == 0) {
                    // 0x57b6b8
                    *(int64_t *)v25 = 0;
                    // 0x57b5b0
                    __readfsqword(40);
                    return 0;
                }
                // 0x57b839
                *v1 = v69 + 1;
                v61 = function_57b2f0(a1);
                v63 = v56;
                v66 = 4;
                v60 = v55;
                goto lab_0x57b850;
            }
            case 84: {
                // 0x57b900
                v11 = function_579b50(a1);
                v17 = v56;
                v10 = v55;
                goto lab_0x57b807;
            }
            case 69: {
                return result4;
            }
            default: {
                if (v55 == 0 || v70 != 77) {
                    // 0x57b6b8
                    *(int64_t *)v25 = 0;
                    // 0x57b5b0
                    __readfsqword(40);
                    return 0;
                }
                int64_t v73 = v69 + 1; // 0x57b6a1
                *v1 = v73;
                char v74 = *(char *)v73; // 0x57b6a9
                v23 = v73;
                v13 = v74;
                v8 = v55;
                if (v74 == 0) {
                    // 0x57b6b8
                    *(int64_t *)v25 = 0;
                    // 0x57b5b0
                    __readfsqword(40);
                    return 0;
                }
                goto lab_0x57b639;
            }
        }
    }
  lab_0x57b807:;
    int64_t v75 = v11;
    v61 = v75;
    v63 = v17;
    v66 = 1;
    v60 = v10;
    if (v10 != 0) {
        goto lab_0x57b850;
    } else {
        int64_t v76 = *v1; // 0x57b811
        v24 = v76;
        v14 = 69;
        v9 = v75;
        v52 = v76;
        v49 = v75;
        if (*(char *)v76 != 69) {
            goto lab_0x57b7c2_2;
        }
        goto lab_0x57b643;
    }
  lab_0x57b850:;
    int64_t v77 = function_5797e0(a1, v66, v60, (int32_t)v61); // 0x57b859
    int64_t v78 = *v1; // 0x57b85e
    char v79 = *(char *)v78; // 0x57b869
    v64 = v79;
    v65 = v78;
    v59 = v77;
    v51 = v78;
    v50 = v79;
    v48 = v77;
    if ((char)v63 == 83) {
        // break -> 0x57b630
        goto lab_0x57b630_3;
    }
    goto lab_0x57b7bd;
  lab_0x57b898:
    // 0x57b898
    v61 = v62;
    v63 = v56;
    v66 = 1;
    v60 = v55;
    goto lab_0x57b850;
  lab_0x57b7bd:
    // 0x57b7bd
    v24 = v65;
    v14 = 69;
    v9 = v59;
    v52 = v65;
    v49 = v59;
    if (v64 != 69) {
        goto lab_0x57b7c2_2;
    }
    goto lab_0x57b643;
  lab_0x57b630_3:
    // 0x57b630
    v7 = v48;
    v12 = v50;
    v22 = v51;
    if (v50 == 0) {
        // 0x57b6b8
        *(int64_t *)v25 = 0;
        // 0x57b5b0
        __readfsqword(40);
        return 0;
    }
    goto lab_0x57b639_2;
  lab_0x57b6e8:
    // 0x57b6e8
    if (v15 == 0) {
        // 0x57b5b0
        __readfsqword(40);
        return 0;
    }
    int32_t * v80 = (int32_t *)(a1 + 56); // 0x57b6ed
    uint32_t v81 = *v80; // 0x57b6ed
    if (v81 >= *(int32_t *)(a1 + 60)) {
        // 0x57b5b0
        __readfsqword(40);
        return 0;
    }
    int64_t v82 = *(int64_t *)(a1 + 48); // 0x57b6f5
    *(int64_t *)(v82 + (0x100000000 * (int64_t)v81 >> 29)) = v15;
    *v80 = v81 + 1;
    v16 = v15;
    goto lab_0x57b72d;
  lab_0x57b72d:
    // 0x57b5b0
    result3 = function_5797e0(a1, 4, v16, (int32_t)function_57b450(a1));
    __readfsqword(40);
    return result3;
  lab_0x57b6d0:;
    int64_t result5 = function_57caa0(a1); // 0x57b6d3
    v15 = result5;
    if (*(char *)*v1 != 73) {
        // 0x57b5b0
        __readfsqword(40);
        return result5;
    }
    goto lab_0x57b6e8;
  lab_0x57b581:
    // 0x57b5b0
    result3 = function_5797e0(a1, 2, v26, (int32_t)v21);
    __readfsqword(40);
    return result3;
  lab_0x57b548:;
    int32_t * v83 = (int32_t *)(a1 + 40); // 0x57b548
    int32_t v84 = *v83; // 0x57b548
    v21 = 0;
    if (v84 < *(int32_t *)(a1 + 44)) {
        int64_t v85 = *(int64_t *)(a1 + 32); // 0x57b55e
        int64_t v86 = v85 + 8 * ((0x100000000 * (int64_t)v84 >> 31) + (int64_t)v84); // 0x57b562
        *(int32_t *)(v86 + 4) = 0;
        *v83 = v84 + 1;
        *(int64_t *)(v86 + 8) = v20;
        *(int32_t *)v86 = 70;
        *(int32_t *)(v86 + 16) = (int32_t)v6;
        v21 = v86;
    }
    goto lab_0x57b581;
  lab_0x57b528:
    // 0x57b528
    v19 = v18;
    v5 = v4;
    if ((int32_t)function_579f90(a1) == 0) {
        // 0x57b5b0
        __readfsqword(40);
        return 0;
    }
    goto lab_0x57b542;
  lab_0x57b542:
    // 0x57b542
    v20 = v19;
    v6 = v5;
    v21 = v19;
    if ((int32_t)v5 == -1) {
        goto lab_0x57b581;
    } else {
        goto lab_0x57b548;
    }
}
