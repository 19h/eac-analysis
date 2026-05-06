/*
 * Targeted RetDec C for native executable gap queue batch 3223.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x33a3d-0x33be0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x370ef-0x372b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37e33-0x37fe6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44e94-0x45059 rank=- name=- kind=- bytes=- uncovered=-
 *   0x46f22-0x470d2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50310-0x504cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x58ea1-0x59078 rank=- name=- kind=- bytes=- uncovered=-
 *   0x684e8-0x686a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6b8bb-0x6b9b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6ba34-0x6bab2 rank=- name=- kind=- bytes=- uncovered=-
 *   0xcc3f7-0xcc5a1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e1680-0x3e185b rank=- name=- kind=- bytes=- uncovered=-
 *   0x48e981-0x48eb2b rank=- name=- kind=- bytes=- uncovered=-
 *   0x48eec5-0x48f087 rank=- name=- kind=- bytes=- uncovered=-
 *   0x492512-0x4926da rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ad77e-0x4ad930 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c410e-0x4c42d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c85e1-0x4c8790 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c9b79-0x4c9d40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cca91-0x4ccc30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cf1c2-0x4cf380 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d43a9-0x4d4560 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f6a52-0x4f6bf0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x504ef0-0x5050b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5077c0-0x507980 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52b9d4-0x52bb80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54b5d5-0x54b780 rank=- name=- kind=- bytes=- uncovered=-
 *   0x555dcb-0x555f90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x561e6b-0x562030 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5661bb-0x566390 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56e9b8-0x56eb80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x581463-0x581610 rank=- name=- kind=- bytes=- uncovered=-
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
typedef struct { uint8_t bytes[108]; } int864_t;
typedef struct { uint8_t bytes[32]; } int256_t;
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
extern int g24;
extern int g25;
extern int g26;
extern int g27;
extern int g28;
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
int64_t entry_point();
unsigned char llvm_ctpop_i8(unsigned char value);
uint16_t llvm_bswap_i16(uint16_t value);
uint32_t llvm_bswap_i32(uint32_t value);
uint64_t llvm_ctlz_i64(uint64_t value, bool is_zero_undef);
int __popcountdi2(uint64_t value);
void __asm_int(int32_t interrupt);
int64_t __asm_int1();
int64_t __asm_int3();
int32_t __asm_in(uint16_t port);
int32_t __asm_in_133(uint16_t port);
int32_t __asm_in_134(uint16_t port);
int32_t __asm_in_135(uint16_t port);
char __asm_in_136(uint16_t port);
char __asm_in_137(uint16_t port);
int32_t __asm_in_138(uint16_t port);
char __asm_insb(uint16_t port);
int32_t __asm_insd(uint16_t port);
void __asm_out(uint16_t port, char value);
void __asm_out_133(uint16_t port, int32_t value);
void __asm_out_134(uint16_t port, int32_t value);
void __asm_out_135(uint16_t port, int32_t value);
void __asm_out_136(uint16_t port, int32_t value);
void __asm_out_137(uint16_t port, char value);
void __asm_out_138(uint16_t port, char value);
void __asm_out_139(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint32_t __readfsdword(int64_t offset);
uint64_t __readfsqword(int64_t offset);
uint8_t __readgsbyte(int64_t offset);
uint32_t __readgsdword(int64_t offset);
uint64_t __readgsqword(int64_t offset);
void __writefsbyte(int64_t offset, uint8_t value);
void __writegsbyte(int64_t offset, uint8_t value);
void __writegsdword(int64_t offset, uint32_t value);
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
int64_t unknown_b6ccb9(void);
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
void __asm_rcl_133(int32_t value);
void __asm_rep_movsb_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_stosb_memset(char *dst, char value, int64_t count);
void __asm_rep_stosd_memset(char *dst, int32_t value, int64_t count);
void __asm_rep_stosq_memset(char *dst, int64_t value, int64_t count);
void __asm_rep_movsd_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_movsq_memcpy(char *dst, char *src, int64_t count);
int64_t __asm_hlt();
void __asm_clts(void);
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_rsm(void);
int64_t __asm_emms(void);
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
void __asm_fldenv(int224_t value);
int64_t __asm_fnstenv();
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
int128_t __asm_vdivpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pcmpgtb(int128_t left, int128_t right);
int256_t __asm_vpcmpeqw(int256_t left, int256_t right);
int256_t __asm_vprord(int256_t value, int count);
int256_t __asm_vpaddd(int256_t left, int256_t right);
int256_t __asm_vpxord(int256_t left, int256_t right);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psadbw(int128_t left, int128_t right);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_vpunpckhdq(int128_t left, int128_t right);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
int128_t __asm_pavgw(int128_t left, int128_t right);
int128_t __asm_pmaxub(int128_t left, int128_t right);
int128_t __asm_pmaxsw(int128_t left, int128_t right);
int128_t __asm_packsswb(int128_t left, int128_t right);
int128_t __asm_pmulhw(int128_t left, int128_t right);
int128_t __asm_por(int128_t left, int128_t right);
int128_t __asm_pxor(int128_t left, int128_t right);
int128_t __asm_xorps(int128_t left, int128_t right);
int128_t __asm_addps(int128_t left, int128_t right);
int128_t __asm_maxps(int128_t left, int128_t right);
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
struct _IO_FILE *popen(const char *command, const char *type);
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
void *__memcpy_chk(void *dest, const void *src, size_t len, size_t destlen);
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

int64_t function_1a9347();
int64_t function_1e153f();
int64_t function_1fd40();
int64_t function_20540();
int64_t function_20a50();
int64_t function_21a50();
int64_t function_24ded();
int64_t function_2508e();
int64_t function_2509a();
int64_t function_250b0();
int64_t function_251e8();
int64_t function_25622();
int64_t function_2562c();
int64_t function_256ba();
int64_t function_259ce();
int64_t function_25a28();
int64_t function_29c3a();
int64_t function_2aec0();
int64_t function_33a3d(void);
int64_t function_33a43(int64_t a1, int64_t a2, int64_t a3, int64_t result);
int64_t function_33a50(void);
int64_t function_33a83(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33aac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33ae2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_33b20(int64_t a1, int64_t a2, int64_t a3);
int64_t function_33b5a(void);
int64_t function_33b6b(int64_t a1);
int64_t function_33b77(void);
int64_t function_36712();
int64_t function_36966();
int64_t function_36990();
int64_t function_36b14();
int64_t function_370ef(int64_t a1);
int64_t function_37100(int64_t a1, int64_t a2);
int64_t function_37110(int64_t a1);
int64_t function_37164(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3719a(int64_t a1);
int64_t function_371bc(int64_t a1);
int64_t function_37207(int64_t a1);
int64_t function_37236(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37262(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_372a2(int64_t a1, int64_t a2);
int64_t function_37e33(int64_t result, int64_t a2);
int64_t function_37fe6();
int64_t function_38042();
int64_t function_380a0();
int64_t function_3e1680(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3e16e1(void);
int64_t function_3e1727(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e176d(void);
int64_t function_3e17b1(void);
int64_t function_3e17bc(void);
int64_t function_3e181e(void);
int64_t function_44e68();
int64_t function_44e94(int64_t a1);
int64_t function_44eac(int64_t a1);
int64_t function_44f6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44fb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44ff2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46d51();
int64_t function_46d75();
int64_t function_46e15();
int64_t function_46f22(int64_t a1, int64_t a2, int64_t a3);
int64_t function_46f7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46f96(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46fb0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_46fc8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_46fe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_47006(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, char a7);
int64_t function_47032(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12);
int64_t function_47074(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_47098(int64_t a1);
int64_t function_470c6(int64_t a1);
int64_t function_48d122();
int64_t function_48d302();
int64_t function_48d81b();
int64_t function_48dd5f();
int64_t function_48e347();
int64_t function_48e981(int64_t a1, int64_t a2);
int64_t function_48e9ed(int64_t a1, int64_t src);
int64_t function_48eaad(int64_t a1, int64_t a2);
int64_t function_48eec5(int64_t result, int64_t a2, int64_t a3);
int64_t function_48efc3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48f010(int64_t result);
int64_t function_48f7e4();
int64_t function_492512(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_4927ac();
int64_t function_492814();
int64_t function_4ab2c0();
int64_t function_4ab2f0();
int64_t function_4ab380();
int64_t function_4ac0d0();
int64_t function_4ad77e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4adc80();
int64_t function_4add30();
int64_t function_4ae080();
int64_t function_4aecc0();
int64_t function_4b5890();
int64_t function_4c14d0();
int64_t function_4c1690();
int64_t function_4c16b0();
int64_t function_4c1770();
int64_t function_4c410e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7);
int64_t function_4c42b0(int64_t a1);
int64_t function_4c8580();
int64_t function_4c85e1(int64_t a1);
int64_t function_4c8750(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4c8fa0();
int64_t function_4c9080();
int64_t function_4c99b0();
int64_t function_4c9b79(void);
int64_t function_4c9b80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, uint64_t a8);
int64_t function_4cb410();
int64_t function_4cb4a0();
int64_t function_4cb520();
int64_t function_4cc7d0();
int64_t function_4cc900();
int64_t function_4cca91(int64_t a1);
int64_t function_4cf010();
int64_t function_4cf0a0();
int64_t function_4cf0c0();
int64_t function_4cf150();
int64_t function_4cf1c2(int64_t a1);
int64_t function_4cf380();
int64_t function_4d3da0();
int64_t function_4d41d4();
int64_t function_4d43a9(void);
int64_t function_4d43d0(int64_t a1);
int64_t function_4eeb30();
int64_t function_4eeb40();
int64_t function_4eeb50();
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_4f1760();
int64_t function_4f20e();
int64_t function_4f5b50();
int64_t function_4f6a12();
int64_t function_4f6a52(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4fc010();
int64_t function_50252();
int64_t function_502870();
int64_t function_50310(int64_t a1, int64_t a2);
int64_t function_504c6(void);
int64_t function_504cb();
int64_t function_504ef0(int64_t a1, int64_t a2);
int64_t function_504f70(int64_t a1, int64_t a2);
int64_t function_504ff0(int64_t a1, int64_t a2);
int64_t function_505130();
int64_t function_5077c0(int64_t a1, int64_t a2);
int64_t function_507840(int64_t a1, int64_t a2);
int64_t function_5078c0(int64_t a1, int64_t a2);
int64_t function_5246d0();
int64_t function_52b400();
int64_t function_52b8e0();
int64_t function_52b942();
int64_t function_52b9d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_52b9e0(void);
int64_t function_52b9f0(int64_t a1, int64_t a2);
int64_t function_52ba20(int64_t a1);
int64_t function_52ba30(int64_t result);
int64_t function_52ba40(int64_t a1);
int64_t function_52ba50(int64_t a1, int64_t a2);
int64_t function_52ba60(int64_t a1, int64_t a2);
int64_t function_52ba70(int64_t a1, uint64_t a2);
int64_t function_52bae0(int64_t result);
int64_t function_52baf0(int64_t a1);
int64_t function_52bb00(int64_t a1);
int64_t function_52bb10(int64_t result, int64_t a2);
int64_t function_5423b0();
int64_t function_542470();
int64_t function_542590();
int64_t function_542650();
int64_t function_547e30();
int64_t function_54b560();
int64_t function_54b59e();
int64_t function_54b5d5(void);
int64_t function_54b5e0(int64_t a1, int64_t a2);
int64_t function_54b5f0(int64_t a1, int64_t a2);
int64_t function_54b600(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_552550();
int64_t function_555ca2();
int64_t function_555cb4();
int64_t function_555dcb(int64_t a1, uint32_t a2);
int64_t function_555e0f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_555ed0(void);
int64_t function_555ed5(void);
int64_t function_555ef7(int64_t a1);
int64_t function_555f27(void);
int64_t function_555f2c(void);
int64_t function_555f3e(void);
int64_t function_555f53(void);
int64_t function_555f55(void);
int64_t function_555f6a(void);
int64_t function_555f6c(void);
int64_t function_555f84(void);
int64_t function_555f89(void);
int64_t function_555f8b(void);
int64_t function_561683();
int64_t function_5616e8();
int64_t function_5616f7();
int64_t function_561801();
int64_t function_561833();
int64_t function_561840();
int64_t function_56187d();
int64_t function_5618a2();
int64_t function_5618e0();
int64_t function_561b38();
int64_t function_561c76();
int64_t function_561cc5();
int64_t function_561cf9();
int64_t function_561db1();
int64_t function_561e6b(int64_t a1);
int64_t function_561e80(char a1);
int64_t function_561ea0(int64_t a1);
int64_t function_561eb8(int64_t a1);
int64_t function_561ec8(void);
int64_t function_561ed8(int64_t a1);
int64_t function_561f00(int64_t a1);
int64_t function_561f28(void);
int64_t function_561f38(int64_t a1, int64_t a2, int64_t a3);
int64_t function_561f5c(void);
int64_t function_561f6e(void);
int64_t function_561f7d(void);
int64_t function_561f8b(void);
int64_t function_561f95(void);
int64_t function_561f9f(void);
int64_t function_561faa(void);
int64_t function_561fbb(char a1);
int64_t function_561fd0(void);
int64_t function_561fe6(char a1);
int64_t function_561fff(void);
int64_t function_566180();
int64_t function_5661bb(int64_t a1);
int64_t function_5661bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_566377(int64_t a1, int64_t a2);
int64_t function_56e9b8(void);
int64_t function_56e9d0(int64_t result);
int64_t function_56e9e0(int64_t a1);
int64_t function_56ea80(int64_t result);
int64_t function_56ea90(int64_t result, int64_t a2);
int64_t function_574600();
int64_t function_579960();
int64_t function_57cea();
int64_t function_57d920();
int64_t function_57d970();
int64_t function_57db22();
int64_t function_57f67a();
int64_t function_580247();
int64_t function_580290();
int64_t function_580b88();
int64_t function_5810df();
int64_t function_58130a();
int64_t function_58133c();
int64_t function_581463(void);
int64_t function_581466(void);
int64_t function_58146d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_581481(void);
int64_t function_5814e3(void);
int64_t function_581534(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_5815b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_5815c1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5815cd(void);
int64_t function_5815e6(void);
int64_t function_5815f9(void);
int64_t function_582980();
int64_t function_582a30();
int64_t function_58d40();
int64_t function_58ea1(int64_t a1);
int64_t function_58f2a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5f43e();
int64_t function_67c60();
int64_t function_67c66();
int64_t function_67c72();
int64_t function_67eb4232();
int64_t function_684e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_688b2();
int64_t function_68c1c();
int64_t function_6b6e6();
int64_t function_6b7a0();
int64_t function_6b8bb(int64_t a1, int64_t a2);
int64_t function_6b97c(void);
int64_t function_6ba34(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6ba45(int64_t a1);
int64_t function_6ba74(int64_t a1);
int64_t function_6bf2a();
int64_t function_729b6();
int64_t function_729ce();
int64_t function_cc3f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_ffffffffb7623ec8();

// Address range: 0x33a3d - 0x33a3e
int64_t function_33a3d(void) {
    // 0x33a3d
    int64_t result; // 0x33a3d
    return result;
}

// Address range: 0x33a43 - 0x33a50
int64_t function_33a43(int64_t a1, int64_t a2, int64_t a3, int64_t result) {
    // 0x33a43
    int64_t v1; // 0x33a43
    *(char *)a1 = (char)v1 + (char)a3;
    return result;
}

// Address range: 0x33a50 - 0x33a5e
int64_t function_33a50(void) {
    // 0x33a50
    int64_t v1; // 0x33a50
    int32_t * v2 = (int32_t *)(v1 - 0x1e34dd0); // 0x33a55
    int32_t v3 = *v2; // 0x33a55
    *v2 = 2 * v3 | (int32_t)(v3 < 0);
    return function_33aac(0xe1f35233, v1, v1, v1);
}

// Address range: 0x33a83 - 0x33a92
int64_t function_33a83(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 - 0x5362bca8); // 0x33a87
    int64_t v2; // 0x33a83
    *v1 = *v1 + (char)v2;
    return function_67eb4232();
}

// Address range: 0x33aac - 0x33aca
int64_t function_33aac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x33aac
    int64_t result; // 0x33aac
    int32_t * v1 = (int32_t *)(result + 0x415618c6); // 0x33aac
    *v1 = *v1 >> 1;
    int64_t v2; // 0x33aac
    *(char *)a1 = *(char *)&v2;
    unsigned char v3 = *(char *)0x8fe9f811; // 0x33ab8
    unsigned char v4 = (char)a4; // 0x33ab8
    unsigned char v5 = v3 + v4; // 0x33ab8
    *(char *)0x8fe9f811 = v5;
    unsigned char v6 = v4 % 32; // 0x33abb
    if (v6 != 0) {
        char * v7 = (char *)(a3 - 0x4844ca5b); // 0x33abb
        unsigned char v8 = *v7; // 0x33abb
        *v7 = (char)(v5 < v3) << v6 - 1 | v8 << v6 | (char)((int16_t)v8 >> (int16_t)(9 - v6));
    }
    return result;
}

// Address range: 0x33ae2 - 0x33b20
int64_t function_33ae2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    char * v1 = (char *)(a3 + 1); // 0x33ae2
    *v1 = *v1 + (char)a3;
    int64_t result = 0; // 0x33b13
    int64_t v2; // 0x33ae2
    if (v2 != __readfsqword(40)) {
        // 0x33b15
        __stack_chk_fail();
        result = (int64_t)&g45;
    }
    // 0x33b1a
    return result;
}

// Address range: 0x33b20 - 0x33b4f
int64_t function_33b20(int64_t a1, int64_t a2, int64_t a3) {
    // 0x33b20
    __readfsqword(40);
    return function_1a9347();
}

// Address range: 0x33b5a - 0x33b5d
int64_t function_33b5a(void) {
    // 0x33b5a
    int64_t result; // 0x33b5a
    return result;
}

// Address range: 0x33b6b - 0x33b6c
int64_t function_33b6b(int64_t a1) {
    // 0x33b6b
    int64_t result; // 0x33b6b
    return result;
}

// Address range: 0x33b77 - 0x33bd7
int64_t function_33b77(void) {
    int64_t result = 0; // 0x33bcb
    int64_t v1; // 0x33b77
    if (*(int32_t *)40 != (int32_t)v1) {
        // 0x33bcd
        __stack_chk_fail();
        result = (int64_t)&g45;
    }
    // 0x33bd2
    return result;
}

// Address range: 0x370ef - 0x370fe
int64_t function_370ef(int64_t a1) {
    // 0x370ef
    if (a1 == 0) {
        // 0x370fd
        int64_t result; // 0x370ef
        return result;
    }
    // 0x370f8
    return function_4eeb50(a1);
}

// Address range: 0x37100 - 0x3710e
int64_t function_37100(int64_t a1, int64_t a2) {
    struct eac_retdec_cpuid_regs v1; // 0x37103
    // 0x37100
    v1 = __asm_cpuid((int32_t)a1);
    if (a2 != 0) {
        // 0x3710a
        *(int32_t *)a2 = v1.e1;
    }
    // 0x3710c
    return v1.e0;
}

// Address range: 0x37110 - 0x37137
int64_t function_37110(int64_t a1) {
    // 0x37110
    __readfsqword(40);
    return function_1e153f();
}

// Address range: 0x37164 - 0x37188
int64_t function_37164(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37164
    int64_t v1; // 0x37164
    int64_t v2 = v1 & -0xff01 | (int64_t)&g44; // 0x37177
    *(char *)a1 = (char)v2;
    int32_t v3 = *(int32_t *)(v1 - 4); // 0x3717f
    bool v4; // 0x37164
    int64_t v5 = (int32_t)v4 - v3 + (int32_t)v2; // 0x3717f
    *(int64_t *)0xa7ba1df8 = v5;
    return v5 & 0xffff00ff;
}

// Address range: 0x3719a - 0x3719b
int64_t function_3719a(int64_t a1) {
    // 0x3719a
    int64_t result; // 0x3719a
    return result;
}

// Address range: 0x371bc - 0x371bd
int64_t function_371bc(int64_t a1) {
    // 0x371bc
    int64_t result; // 0x371bc
    return result;
}

// Address range: 0x37207 - 0x3720a
int64_t function_37207(int64_t a1) {
    // 0x37207
    int64_t result; // 0x37207
    return result;
}

// Address range: 0x37236 - 0x37260
int64_t function_37236(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37236
    int64_t v1; // 0x37236
    int64_t v2 = v1;
    unsigned char v3 = (char)(v1 / 256); // 0x37236
    unsigned char v4 = v3 + (char)v2; // 0x37236
    int64_t result = (v2 + 144 + (int64_t)(v4 < v3)) % 256 | v2 & -256; // 0x37238
    int64_t v5 = (int64_t)*(int32_t *)((256 * (int64_t)v4 | v1 & -0xff01) - 0x5f3a7cf); // 0x3723d
    int64_t v6 = 55 * v5; // 0x3723d
    int64_t v7 = v6 & 0xffffffff; // 0x3723d
    int32_t * v8 = (int32_t *)(v7 - 0x6864a36b); // 0x37244
    uint32_t v9 = *v8; // 0x37244
    *v8 = (int32_t)a2;
    int32_t * v10 = (int32_t *)(v7 - 98); // 0x3724a
    *v10 = *v10 + (int32_t)(v6 != 0x3700000000 * v5 >> 32) + (int32_t)result;
    *(char *)((int64_t)v9 - 93) = -1;
    int32_t * v11 = (int32_t *)(v1 - 0x4bd07b74); // 0x37251
    *v11 = *v11 + v9;
    *(int32_t *)-0x34d2e2e0 = *(int32_t *)-0x34d2e2e0 & (int32_t)v6;
    return result;
}

// Address range: 0x37262 - 0x372a1
int64_t function_37262(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x37262
    int64_t v1; // 0x37262
    int32_t * v2 = (int32_t *)(v1 + 0x47d0e26d); // 0x37262
    *v2 = *v2 ^ (int32_t)a1;
    int64_t result; // 0x37262
    if (v1 != __readfsqword(40)) {
        // 0x37296
        __stack_chk_fail();
        result = (int64_t)&g45;
    }
    // 0x3729b
    return result;
}

// Address range: 0x372a2 - 0x372a7
int64_t function_372a2(int64_t a1, int64_t a2) {
    // 0x372a2
    return a2 + a1;
}

// Address range: 0x37e33 - 0x37fe5
int64_t function_37e33(int64_t result, int64_t a2) {
    if (a2 == result) {
        // 0x37fd3
        return result;
    }
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x37e4e
    int64_t v2 = *v1; // 0x37e4e
    int64_t * v3 = (int64_t *)(result + 16); // 0x37e5b
    int64_t v4 = v2 - a2; // 0x37e62
    uint64_t v5 = v4 >> 6; // 0x37e6f
    if (*v3 - result >> 6 < v5) {
        int64_t v6 = result; // 0x37e7f
        int64_t v7 = 0; // 0x37e7f
        if (v5 != 0) {
            if (v5 >= 0x400000000000000) {
                // 0x37e90
                function_5423b0();
            }
            // 0x37e95
            v7 = function_4efd30(v4);
            v6 = v4;
        }
        int64_t v8 = v6; // 0x37eab
        if (v2 != a2) {
            int64_t v9 = a2 + 64; // 0x37eb3
            function_38042(v7, a2);
            int64_t v10 = v7 + 64; // 0x37eab
            int64_t v11 = v9; // 0x37eab
            v8 = v7;
            while (v2 != v9) {
                int64_t v12 = v10;
                v9 = v11 + 64;
                function_38042(v12, v11);
                v10 = v12 + 64;
                v11 = v9;
                v8 = v12;
            }
        }
        int64_t * v13 = (int64_t *)(result + 8);
        int64_t v14 = *v13; // 0x37ec2
        int64_t v15 = v8; // 0x37ecc
        if (v14 != v8) {
            function_2508e(v8 + 48);
            int64_t v16 = v8 + 40; // 0x37ed7
            int64_t v17 = v8 + 64; // 0x37edb
            function_2508e(v16);
            int64_t v18 = v17; // 0x37ecc
            v15 = v16;
            while (v14 != v17) {
                // 0x37ece
                function_2508e(v18 + 48);
                v16 = v18 + 40;
                v17 = v18 + 64;
                function_2508e(v16);
                v18 = v17;
                v15 = v16;
            }
        }
        // 0x37ee6
        if (v15 != 0) {
            // 0x37eee
            function_4eeb50(v15);
        }
        // 0x37ef3
        *(int64_t *)result = v7;
        *v3 = v7 + v4;
        // 0x37fcc
        *v13 = v15 + v4;
        // 0x37fd3
        return result;
    }
    int64_t * v19 = (int64_t *)(result + 8);
    int64_t v20 = *v19; // 0x37f02
    int64_t v21 = v20 - result;
    int64_t v22 = v21 >> 6; // 0x37f0c
    if (v5 <= v22) {
        int64_t v23 = result; // 0x37f1e
        int64_t v24 = a2; // 0x37f1e
        if (v4 >= 0 == (v5 != 0)) {
            int64_t v25 = result;
            int64_t v26 = v5 - 1; // 0x37f48
            function_37fe6(v25, v24, v5, v25);
            v23 = v25;
            int64_t v27 = v25 + 64; // 0x37f1e
            int64_t v28 = v26; // 0x37f1e
            v24 += 64;
            while (v26 >= 0 == (v26 != 0)) {
                // 0x37f35
                v25 = v27;
                v26 = v28 - 1;
                function_37fe6(v25, v24, v5, v25);
                v23 = v25;
                v27 = v25 + 64;
                v28 = v26;
                v24 += 64;
            }
        }
        int64_t v29 = (v4 >= 0 ? v4 & -64 : 0) + result; // 0x37f30
        int64_t v30 = v29; // 0x37f62
        if (v20 == v29) {
            // 0x37fcc
            *v19 = v23 + v4;
            // 0x37fd3
            return result;
        }
        function_2508e(v30 + 48);
        int64_t v31 = v30 + 40; // 0x37f6d
        v30 += 64;
        function_2508e(v31);
        while (v20 != v30) {
            // 0x37f64
            function_2508e(v30 + 48);
            v31 = v30 + 40;
            v30 += 64;
            function_2508e(v31);
        }
        // 0x37fcc
        *v19 = v31 + v4;
        // 0x37fd3
        return result;
    }
    int64_t v32 = a2; // 0x37f7f
    int64_t v33 = v21; // 0x37f7f
    int64_t v34 = v2; // 0x37f7f
    int64_t v35 = v20; // 0x37f7f
    int64_t v36 = result; // 0x37f7f
    if (v21 >= 64) {
        int64_t v37 = v22;
        v36 = result;
        function_37fe6(v36, v32, v5, a2);
        int64_t v38 = v36 + 64; // 0x37f7f
        int64_t v39 = v37 - 1; // 0x37f7f
        v32 += 64;
        while (v37 >= 2) {
            // 0x37f81
            v37 = v39;
            v36 = v38;
            function_37fe6(v36, v32, v5, a2);
            v38 = v36 + 64;
            v39 = v37 - 1;
            v32 += 64;
        }
        // 0x37f7c
        v35 = *v19;
        v33 = v35 - v36;
        v34 = *v1;
    }
    int64_t v40 = *(int64_t *)a2 + v33; // 0x37faf
    int64_t v41 = v36; // 0x37fb5
    if (v34 != v40) {
        int64_t v42 = v40 + 64; // 0x37fbd
        function_38042(v35, v40);
        int64_t v43 = v35 + 64; // 0x37fb5
        v41 = v35;
        while (v34 != v42) {
            int64_t v44 = v42;
            int64_t v45 = v43;
            v42 = v44 + 64;
            function_38042(v45, v44);
            v43 = v45 + 64;
            v41 = v45;
        }
    }
    // 0x37fcc
    *v19 = v41 + v4;
    // 0x37fd3
    return result;
}

// Address range: 0x44e94 - 0x44eab
int64_t function_44e94(int64_t a1) {
    // 0x44e94
    function_44e68();
    return function_4eeb30(a1, 328);
}

// Address range: 0x44eac - 0x44f6b
int64_t function_44eac(int64_t a1) {
    // 0x44eac
    *(int64_t *)a1 = (int64_t)&g26;
    int64_t * v1 = (int64_t *)(a1 + 304); // 0x44ec8
    *v1 = 0;
    int64_t * v2 = (int64_t *)(a1 + 312); // 0x44ed3
    *v2 = 0;
    int64_t * v3 = (int64_t *)(a1 + 320); // 0x44ede
    *v3 = 0;
    *(int32_t *)(a1 + 8) = 0;
    function_4adc80(a1 + 16);
    int64_t v4 = *v1; // 0x44ef5
    int64_t result; // 0x44eac
    if (*v3 - v4 >= 32) {
        // 0x44f63
        return result;
    }
    int64_t v5 = function_4efd30(32); // 0x44f18
    int64_t v6 = *v2 - v4; // 0x44f20
    if (v6 != 0) {
        // 0x44f28
        memmove((int64_t *)v5, (int64_t *)v4, (int32_t)v6);
    }
    int64_t v7 = *v1; // 0x44f36
    if (v7 != 0) {
        // 0x44f45
        function_4eeb50(v7);
    }
    // 0x44f4a
    *v1 = v5;
    *v2 = v6 + v5;
    *v3 = v5 + 32;
    // 0x44f63
    return result;
}

// Address range: 0x44f6c - 0x44fb0
int64_t function_44f6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44f6c
    int64_t result; // 0x44f6c
    if (*(int32_t *)(a1 + 8) == 1) {
        int64_t v1 = *(int64_t *)(a1 + 304); // 0x44f8a
        if ((int32_t)function_4aecc0(a1 + 16, 1, a4, v1, a2, a3, result, result) == 0) {
            // 0x44fac
            return result;
        }
    }
    // 0x44f7e
    __asm_rep_stosb_memset((char *)a3, 0, a4);
    // 0x44fac
    return result;
}

// Address range: 0x44fb0 - 0x44ff1
int64_t function_44fb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44fb0
    int64_t result; // 0x44fb0
    if (*(int32_t *)(a1 + 8) == 2) {
        int64_t v1 = *(int64_t *)(a1 + 304); // 0x44fce
        if ((int32_t)function_4aecc0(a1 + 16, 0, a4, v1, a2, a3, result, result) == 0) {
            // 0x44fed
            return result;
        }
    }
    // 0x44fc2
    __asm_rep_stosb_memset((char *)a3, 0, a4);
    // 0x44fed
    return result;
}

// Address range: 0x44ff2 - 0x45059
int64_t function_44ff2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = function_21a50(a1 + 304, a3); // 0x45009
    int32_t v1 = a4; // 0x4500e
    *(int32_t *)(a1 + 8) = v1;
    if (v1 == 1) {
        // 0x45018
        return function_4add30(a1 + 16, a3, 8 * (int32_t)(*(int64_t *)(a2 + 8) - a3));
    }
    if (v1 != 2) {
        // 0x45054
        return result;
    }
    // 0x45039
    return function_4ae080(a1 + 16, a3, 8 * (int32_t)(*(int64_t *)(a2 + 8) - a3));
}

// Address range: 0x46f22 - 0x46f7b
int64_t function_46f22(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x46f34
    function_46d51();
    function_46d75();
    int64_t v2; // bp-120, 0x46f22
    function_46e15(&v2, a3);
    int64_t result = 0; // 0x46f6d
    if (v1 != __readfsqword(40)) {
        // 0x46f6f
        __stack_chk_fail();
        result = (int64_t)&g45;
    }
    // 0x46f74
    return result;
}

// Address range: 0x46f7c - 0x46f95
int64_t function_46f7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x46f7c
    return 0;
}

// Address range: 0x46f96 - 0x46fb0
int64_t function_46f96(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x46f96
    return 0;
}

// Address range: 0x46fb0 - 0x46fc7
int64_t function_46fb0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x46fb0
    return 0;
}

// Address range: 0x46fc8 - 0x46fdf
int64_t function_46fc8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x46fc8
    return 0;
}

// Address range: 0x46fe0 - 0x47005
int64_t function_46fe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x46fe0
    return 0;
}

// Address range: 0x47006 - 0x47031
int64_t function_47006(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, char a7) {
    // 0x47006
    return 0;
}

// Address range: 0x47032 - 0x47074
int64_t function_47032(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12) {
    // 0x47032
    return 0;
}

// Address range: 0x47074 - 0x47098
int64_t function_47074(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x47074
    return 0;
}

// Address range: 0x47098 - 0x470c5
int64_t function_47098(int64_t a1) {
    // 0x47098
    *(char *)(a1 + (int64_t)&g25) = 0;
    int64_t v1 = *(int64_t *)(a1 + (int64_t)&g24) + 1; // 0x470ab
    *(int64_t *)(a1 + (int64_t)&g20 + 440) = v1 == 0 ? 1 : v1;
    return 1;
}

// Address range: 0x470c6 - 0x470d1
int64_t function_470c6(int64_t a1) {
    // 0x470c6
    if (a1 == 0) {
        // 0x470d0
        int64_t result; // 0x470c6
        return result;
    }
    // 0x470cb
    return function_4eeb50(a1);
}

// Address range: 0x50310 - 0x504c6
int64_t function_50310(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x5033c
    int64_t v2; // bp-72, 0x50310
    int64_t v3; // bp-96, 0x50310
    function_250b0(&v3, (int64_t)&g6, &v2);
    int64_t v4; // bp-88, 0x50310
    function_250b0(&v4, (int64_t)&g7, &v2);
    int64_t v5 = v4; // 0x50369
    int64_t v6 = *(int64_t *)(v5 - 24); // 0x50375
    int64_t v7 = (int64_t)&g42; // bp-80, 0x5037d
    if (v6 == 0) {
        // 0x5043a
        function_380a0(&v7, a2);
        *(int32_t *)(a1 + 12) = 0;
        goto lab_0x5044e;
    } else {
        // 0x5038b
        if (*(int64_t *)((int64_t)&g7 - 24) == 0) {
            // 0x5043a
            function_380a0(&v7, a2);
            *(int32_t *)(a1 + 12) = 0;
            goto lab_0x5044e;
        } else {
            int64_t v8 = (int64_t)&g7; // 0x50310
            int64_t v9 = 0;
            while (function_504cb(v5, v6, v9 + v8, v5, v6) == 0) {
                int64_t v10 = v9 + 1; // 0x503b4
                v8 = v6;
                if (*(int64_t *)(v6 - 24) <= v10) {
                    // 0x5043a
                    function_380a0(&v7, a2);
                    *(int32_t *)(a1 + 12) = 0;
                    goto lab_0x5044e;
                }
                v9 = v10;
            }
            // 0x503c8
            function_36712(&v2, a2, 0, v9);
            if (g41 < 0) {
                // 0x503e4
                g41 = 0;
            }
            int64_t v11 = v2; // 0x503eb
            int32_t * v12 = (int32_t *)(v11 - 8); // 0x503f0
            if (*v12 < 0) {
                // 0x503f7
                *v12 = 0;
            }
            int64_t v13 = (int64_t)&v2; // 0x503fe
            v2 = v7;
            v7 = v11;
            function_2508e(v13);
            function_36712(&v2, a2, (int32_t)v9 + 1, -1);
            *(int32_t *)(a1 + 12) = (int32_t)function_48dd5f(v2);
            function_2508e(v13);
            goto lab_0x5044e;
        }
    }
  lab_0x5044e:
    // 0x5044e
    function_50252(&v7, &v3, a1);
    function_50252(&v7, &v3, a1 + 4);
    function_50252(&v7, &v3, a1 + 8);
    function_2508e((int64_t)&v7);
    function_2508e((int64_t)&v4);
    int64_t v14 = function_2508e((int64_t)&v3); // 0x5049a
    int64_t v15; // 0x50310
    int64_t result = v14 & -256 | (int64_t)(*(int32_t *)&v15 != 0); // 0x504b0
    if (v1 != __readfsqword(40)) {
        // 0x504b2
        __stack_chk_fail();
        result = (int64_t)&g45;
    }
    // 0x504b7
    return result;
}

// Address range: 0x504c6 - 0x504cb
int64_t function_504c6(void) {
    // 0x504c6
    int64_t v1; // 0x504c6
    return function_50310(v1, v1);
}

// Address range: 0x58ea1 - 0x58f2a
int64_t function_58ea1(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x58eac
    int64_t v2 = (int64_t)&g42; // bp-48, 0x58ed4
    uint64_t v3 = function_58d40(&v2); // 0x58ed9
    int64_t v4; // bp-40, 0x58ea1
    function_48e347(&v4, &v2);
    function_36966(a1, &v4);
    function_29c3a(&v4);
    int64_t result = function_2508e((int64_t)&v2) & -256 | v3 % 256; // 0x58f1a
    if (v1 != __readfsqword(40)) {
        // 0x58f1c
        __stack_chk_fail();
        result = (int64_t)&g45;
    }
    // 0x58f21
    return result;
}

// Address range: 0x58f2a - 0x59078
int64_t function_58f2a(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x58f36
    if (a1 == 0) {
        goto lab_0x59056;
    } else {
        // 0x58f4f
        function_251e8(a2);
        function_251e8(a3);
        function_2aec0(a2, a1);
        int64_t v2 = *(int64_t *)(a1 - 24); // 0x58f77
        int64_t v3; // bp-56, 0x58f2a
        int64_t v4; // bp-57, 0x58f2a
        if (v2 == 0) {
            // 0x58fa1
            function_250b0(&v3, (int64_t)&g5, &v4);
            // 0x58fb7
            function_256ba(a3, &v3);
            function_2508e((int64_t)&v3);
            goto lab_0x59056;
        } else {
            int64_t v5 = v2 - 1; // 0x58f80
            uint64_t v6 = v5;
            while (*(char *)(v6 + a1) != 46) {
                // 0x58f97
                if (v6 == 0) {
                    // 0x58fa1
                    function_250b0(&v3, (int64_t)&g5, &v4);
                    // 0x58fb7
                    function_256ba(a3, &v3);
                    function_2508e((int64_t)&v3);
                    goto lab_0x59056;
                }
                v6--;
            }
            if (v5 > v6) {
                int64_t v7 = function_36b14(a2, function_36b14(a2, v6, "basic_string::substr"), "basic_string::basic_string"); // 0x58ff4
                int64_t v8 = v7 + a1; // 0x58ff9
                int64_t v9 = (int64_t)&g42; // 0x58fff
                if (v2 + a1 != v8) {
                    if (v8 == 0) {
                        // 0x59035
                        function_542470("basic_string::_S_construct null not valid");
                        v9 = (int64_t)&g42;
                    } else {
                        int64_t v10 = v2 - v7; // 0x59006
                        int64_t v11 = function_57cea(v10, 0); // 0x5900e
                        int64_t v12 = v11 + 24; // 0x59013
                        function_25a28(v12, v8, v10);
                        function_2562c(v11, v10, v10);
                        v9 = v12;
                    }
                }
                // 0x5904c
                v3 = v9;
                // 0x58fb7
                function_256ba(a3, &v3);
                function_2508e((int64_t)&v3);
                goto lab_0x59056;
            } else {
                // 0x58fa1
                function_250b0(&v3, (int64_t)&g5, &v4);
                // 0x58fb7
                function_256ba(a3, &v3);
                function_2508e((int64_t)&v3);
                goto lab_0x59056;
            }
        }
    }
  lab_0x59056:;
    int64_t result = 0; // 0x59064
    if (v1 != __readfsqword(40)) {
        // 0x59066
        __stack_chk_fail();
        result = (int64_t)&g45;
    }
    // 0x5906b
    return result;
}

// Address range: 0x684e8 - 0x6869f
int64_t function_684e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __readfsqword(40); // 0x684fc
    int32_t v2 = 0; // bp-76, 0x6850c
    int32_t v3 = 0; // bp-72, 0x68514
    int64_t v4 = (int64_t)&v2; // 0x6851d
    function_67c72(a2, 2, (int32_t)v4 < 0x100001 ? 0 : v4 & 0xfffffffc, 0, 0);
    function_68c1c((int64_t *)&v3);
    int64_t result = 0; // 0x6868b
    if (v1 != __readfsqword(40)) {
        // 0x6868d
        __stack_chk_fail();
        result = (int64_t)&g45;
    }
    // 0x68692
    return result;
}

// Address range: 0x6b8bb - 0x6b960
int64_t function_6b8bb(int64_t a1, int64_t a2) {
    // 0x6b8bb
    __readfsqword(40);
    int64_t v1; // bp-88, 0x6b8bb
    function_729b6((int64_t)&v1);
    int64_t v2 = a1 + 168; // 0x6b908
    int64_t result = function_6b6e6(a1, function_67c60(a1), function_67c66(a1) % 0x10000, v2); // 0x6b92c
    if ((char)result != 0) {
        // 0x6b9ba
        return result;
    }
    int64_t result2 = function_6b7a0(a1, function_67c60(a1), v2); // 0x6b94d
    if ((char)result2 != 0) {
        // 0x6b9ba
        return result2;
    }
    // 0x6b956
    return function_6ba45((int64_t)&g45);
}

// Address range: 0x6b97c - 0x6b97f
int64_t function_6b97c(void) {
    // 0x6b97c
    int64_t result; // 0x6b97c
    return result;
}

// Address range: 0x6ba34 - 0x6ba45
int64_t function_6ba34(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6ba34
    int64_t v1; // 0x6ba34
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(result - 119); // 0x6ba39
    *v2 = *v2 + (char)a4;
    float80_t v3; // 0x6ba34
    *(int64_t *)((v1 & -0xff01 | (int64_t)&g43) + 4) = (int64_t)v3;
    return result;
}

// Address range: 0x6ba45 - 0x6ba73
int64_t function_6ba45(int64_t a1) {
    // 0x6ba45
    int64_t v1; // 0x6ba45
    function_729ce(v1);
    int64_t result = v1 & 0xffffffff; // 0x6ba5d
    if (__readfsqword(40) != a1) {
        // 0x6ba5f
        __stack_chk_fail();
        result = (int64_t)&g45;
    }
    // 0x6ba64
    return result;
}

// Address range: 0x6ba74 - 0x6bab2
int64_t function_6ba74(int64_t a1) {
    // 0x6ba74
    function_688b2();
    *(int64_t *)a1 = (int64_t)&g31;
    int64_t result = function_6bf2a(a1 + 168); // 0x6ba8e
    *(int32_t *)(a1 + 160) = 0;
    *(int32_t *)(a1 + 248) = 0;
    *(int16_t *)(a1 + 252) = 0;
    return result;
}

// Address range: 0xcc3f7 - 0xcc5a1
int64_t function_cc3f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xcc3f7
    int64_t v1; // 0xcc3f7
    int64_t v2 = *(int64_t *)(v1 + 8); // 0xcc525
    *(int64_t *)v1 = v2;
    *(int64_t *)(v1 - 8) = v2;
    *(int64_t *)(v1 - 32) = a2;
    return v1 + a4 & 0xffffffff;
}

// Address range: 0x3e1680 - 0x3e16a5
int64_t function_3e1680(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)a4; // 0x3e1683
    int64_t v2; // 0x3e1680
    *v1 = *v1 | (char)(v2 / 256);
    int64_t v3 = v2 & -256; // 0x3e1685
    unsigned char v4 = *(char *)((v2 + 149) % 256 + v2); // 0x3e1689
    int32_t v5 = v3 | (int64_t)v4; // 0x3e168b
    *(int32_t *)-0xfa2b0ee = *(int32_t *)-0xfa2b0ee - v5;
    *(int32_t *)a1 = v5;
    bool v6; // 0x3e1680
    int64_t v7 = (v6 ? -4 : 4) + a1; // 0x3e1691
    int64_t v8; // 0x3e1680
    *(char *)v7 = *(char *)&v8;
    int64_t v9 = v6 ? -1 : 1; // 0x3e1694
    *(char *)-0x1f30b205 = *(char *)-0x1f30b205 + (char)(a4 / 256);
    *(char *)(v7 + v9) = *(char *)(v9 + a2);
    return (v3 | (int64_t)(v4 + 51)) + 0xbeade74a & 0xffffffff;
}

// Address range: 0x3e16e1 - 0x3e16ea
int64_t function_3e16e1(void) {
    // 0x3e16e1
    bool v1; // 0x3e16e1
    if (v1) {
        // 0x3e1735
        int64_t v2; // 0x3e16e1
        return (int64_t)&v2;
    }
    // 0x3e16e4
    return function_ffffffffb7623ec8();
}

// Address range: 0x3e1727 - 0x3e1735
int64_t function_3e1727(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e1727
    int64_t v1; // 0x3e1727
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + 88;
    int64_t result; // 0x3e1727
    if (llvm_ctpop_i8((char)((int32_t)(v2 & v1) + (int32_t)a4)) % 2 != 0) {
        result = function_3e176d();
    }
    // 0x3e1733
    return result;
}

// Address range: 0x3e176d - 0x3e1770
int64_t function_3e176d(void) {
    // 0x3e176d
    int64_t result; // 0x3e176d
    return result;
}

// Address range: 0x3e17b1 - 0x3e17b2
int64_t function_3e17b1(void) {
    // 0x3e17b1
    int64_t result; // 0x3e17b1
    return result;
}

// Address range: 0x3e17bc - 0x3e17bf
int64_t function_3e17bc(void) {
    // 0x3e17bc
    int64_t result; // 0x3e17bc
    return result;
}

// Address range: 0x3e181e - 0x3e1821
int64_t function_3e181e(void) {
    // 0x3e181e
    int64_t result; // 0x3e181e
    return result;
}

// Address range: 0x48e981 - 0x48e9ed
int64_t function_48e981(int64_t a1, int64_t a2) {
    // 0x48e981
    if (a2 == a1) {
        // 0x48e9e2
        return (int64_t)&g42;
    }
    int64_t result; // 0x48e981
    if (a1 == 0) {
        // 0x48e9cb
        function_542470("basic_string::_S_construct null not valid");
        result = (int64_t)&g42;
    } else {
        int64_t v1 = a2 - a1; // 0x48e99c
        int64_t v2 = function_48d122(v1, 0); // 0x48e9a4
        int64_t v3 = v2 + 24; // 0x48e9a9
        function_25a28(v3, a1, v1);
        function_2562c(v2, v1, v1);
        result = v3;
    }
    // 0x48e9e2
    return result;
}

// Address range: 0x48e9ed - 0x48eaad
int64_t function_48e9ed(int64_t a1, int64_t src) {
    int64_t v1 = __readfsqword(40); // 0x48e9fc
    int64_t v2 = *(int64_t *)(src - 24); // 0x48ea14
    int64_t v3; // bp-56, 0x48e9ed
    if (v2 != 0) {
        int64_t n = 4 * v2 + 4; // 0x48ea2e
        int64_t dest = function_4eec00(n); // 0x48ea3c
        wcstombs((char *)dest, (int32_t *)src, (int32_t)n);
        int64_t v4; // bp-57, 0x48e9ed
        function_250b0(&v3, dest, &v4);
        function_4eeb40(dest);
        *(int64_t *)a1 = v3;
        v3 = (int64_t)&g42;
        function_48d302(&g40);
    } else {
        // 0x48ea1d
        function_250b0((int64_t *)a1, (int64_t)&g5, &v3);
    }
    int64_t result = a1; // 0x48ea99
    if (v1 != __readfsqword(40)) {
        // 0x48ea9b
        __stack_chk_fail();
        result = (int64_t)&g45;
    }
    // 0x48eaa0
    return result;
}

// Address range: 0x48eaad - 0x48eb2b
int64_t function_48eaad(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x48eac0
    uint64_t v2 = function_48d81b(); // 0x48ead0
    int64_t v3 = a2; // 0x48ead8
    if (v2 >= 2) {
        int64_t v4 = v2 - 2; // 0x48eae0
        v3 = a2;
        if (v4 != a2) {
            int64_t v5 = v4;
            while (*(char *)v5 != 58) {
                int64_t v6 = v5 - 1; // 0x48eaf8
                v3 = a2;
                if (v6 == a2) {
                    goto lab_0x48eb05;
                }
                v5 = v6;
            }
            // 0x48eaee
            v3 = v5 + 1;
        }
    }
  lab_0x48eb05:;
    // 0x48eb05
    int64_t v7; // bp-17, 0x48eaad
    function_250b0((int64_t *)a1, v3, &v7);
    int64_t result = a1; // 0x48eb1e
    if (v1 != __readfsqword(40)) {
        // 0x48eb20
        __stack_chk_fail();
        result = (int64_t)&g45;
    }
    // 0x48eb25
    return result;
}

// Address range: 0x48eec5 - 0x48efc3
int64_t function_48eec5(int64_t result, int64_t a2, int64_t a3) {
    // 0x48eec5
    *(int64_t *)result = (int64_t)&g42;
    if (a3 == 0) {
        // 0x48efb1
        return result;
    }
    int64_t v1 = a2; // 0x48eefc
    int64_t v2; // 0x48eec5
    int64_t v3; // 0x48ef06
    uint64_t v4; // 0x48ef0d
    uint64_t v5; // 0x48ef43
    while (true) {
      lab_0x48ef02:;
        unsigned char v6 = *(char *)v1; // 0x48ef02
        v3 = *(int64_t *)(8 * (int64_t)v6 + (int64_t)&g27);
        v4 = function_24ded(v3);
        if (v4 == 0) {
            goto lab_0x48efa9;
        } else {
            int64_t v7 = *(int64_t *)(v3 - 24); // 0x48ef2b
            int64_t v8 = v3; // 0x48ef35
            if (v4 > 0x3ffffffffffffff9 - v7) {
                // 0x48ef37
                function_542590("basic_string::append");
                v8 = (int64_t)"basic_string::append";
            }
            int64_t v9 = v8;
            v5 = v7 + v4;
            if (v5 > *(int64_t *)(v9 - 16)) {
                goto lab_0x48ef4c;
            } else {
                int64_t v10 = v9 - 24; // 0x48ef68
                int64_t v11 = function_25622(v10); // 0x48ef6c
                v2 = v10;
                if ((char)v11 != 0) {
                    goto lab_0x48ef4c;
                } else {
                    goto lab_0x48ef88;
                }
            }
        }
    }
    // 0x48efb1
    return result;
  lab_0x48efa9:
    // 0x48efa9
    v1++;
    if (v1 == a3 + a2) {
        return result;
    }
    goto lab_0x48ef02;
  lab_0x48ef4c:
    // 0x48ef4c
    function_5f43e(result, v3);
    function_259ce(result, v5);
    v2 = result;
    goto lab_0x48ef88;
  lab_0x48ef88:;
    int64_t v12 = v2;
    int64_t v13 = *(int64_t *)(v12 - 24) + v12; // 0x48ef91
    function_25a28(v13, v3, v4);
    function_2562c(v13 - 24, v5, v4);
    goto lab_0x48efa9;
}

// Address range: 0x48efc3 - 0x48f010
int64_t function_48efc3(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_36990(); // 0x48efdf
    int64_t v2 = 0; // 0x48efea
    if (v1 != -1) {
        int64_t v3 = *(int64_t *)-24; // 0x48eff9
        v2 = function_4f20e(a1, v1, *(int64_t *)(a2 - 24), 0, v3) & -256;
    }
    // 0x48f002
    return v2 | (int64_t)(v1 != -1);
}

// Address range: 0x48f010 - 0x48f087
int64_t function_48f010(int64_t result) {
    int64_t v1 = result - 24;
    int64_t * v2 = (int64_t *)v1;
    if (*v2 == 0 || *(char *)function_48f7e4(result) == 92 || *(char *)function_48f7e4(result) == 47) {
        // 0x48f082
        return result;
    }
    uint64_t v3 = *v2 + 1; // 0x48f041
    int64_t * v4; // 0x48f010
    int64_t v5; // 0x48f010
    int64_t v6; // 0x48f010
    if (v3 > *(int64_t *)(result - 16)) {
        goto lab_0x48f04b;
    } else {
        // 0x48f058
        if ((char)function_25622(v1) != 0) {
            goto lab_0x48f04b;
        } else {
            int64_t v7 = result - 48; // 0x48f06b
            v4 = (int64_t *)v7;
            v5 = v7;
            v6 = v1;
            goto lab_0x48f065;
        }
    }
  lab_0x48f04b:
    // 0x48f04b
    function_259ce(result, v3);
    v4 = v2;
    v5 = v1;
    v6 = result;
    goto lab_0x48f065;
  lab_0x48f065:
    // 0x48f065
    *(char *)(*v4 + v6) = 47;
    int64_t v8; // 0x48f010
    return function_2562c(v5, v3, v8);
}

// Address range: 0x492512 - 0x4926d9
int64_t function_492512(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = a1 + 48; // 0x492529
    int64_t v2 = __readfsqword(40); // 0x492537
    int64_t v3; // bp-80, 0x492512
    int64_t v4 = (int64_t)&v3; // 0x492547
    function_729b6(v4);
    int64_t v5 = -0x6b2800abb2db126b * a2 - 0x71cf18fadd0407 ^ 0x1d8fd4b0f55dfcbb; // 0x492583
    int64_t v6 = v5; // bp-72, 0x49258c
    int64_t * v7 = (int64_t *)(a1 + 56); // 0x492591
    int64_t v8 = function_492814(v1, v5 % *v7, &v6, v5, &v6); // 0x49259c
    int64_t v9; // 0x492512
    int64_t v10; // 0x49261a
    int64_t * v11; // 0x492630
    int64_t v12; // 0x492630
    int64_t * v13; // 0x492637
    int64_t v14; // 0x492637
    int64_t * v15; // 0x49263a
    if (v8 == 0) {
        goto lab_0x4926ad;
    } else {
        int64_t v16 = *(int64_t *)v8; // 0x4925aa
        if (v16 == 0) {
            goto lab_0x4926ad;
        } else {
            int64_t v17 = *(int64_t *)(v16 + 16); // 0x4925c3
            if (a3 >= 64) {
                // 0x4925c5
                function_542650("%s: __position (which is %zu) >= _Nb (which is %zu)", "bitset::reset", a3, 64, (int64_t)&v6);
                v17 = a3;
            }
            uint64_t v18 = a3 % 64; // 0x4925ec
            int64_t v19 = -2; // 0x4925ec
            if (v18 != 0) {
                v19 = 0xfffffffffffffffe >> 64 - v18 | -2 << v18;
            }
            int64_t * v20 = (int64_t *)(v17 + 24); // 0x4925ef
            int64_t v21 = *v20 & v19; // 0x4925ef
            *v20 = v21;
            if (v21 != 0) {
                goto lab_0x4926ad;
            } else {
                uint64_t v22 = *v7; // 0x4925f9
                v6 = v5;
                uint64_t v23 = v5 % v22;
                v10 = function_492814(v1, v23, &v6, v5, &v6);
                if (v10 == 0) {
                    goto lab_0x4926ad;
                } else {
                    int64_t v24 = *(int64_t *)v1; // 0x49262b
                    v11 = (int64_t *)v10;
                    v12 = *v11;
                    v13 = (int64_t *)v12;
                    v14 = *v13;
                    v15 = (int64_t *)(v24 + 8 * v23);
                    int64_t v25 = *v15; // 0x49263a
                    if (v10 != v25) {
                        if (v14 != 0) {
                            uint64_t v26 = *(int64_t *)(v14 + 24) % v22;
                            if (v23 != v26) {
                                // 0x49268d
                                *(int64_t *)(8 * v26 + v24) = v10;
                            }
                        }
                        goto lab_0x492691;
                    } else {
                        // 0x49263f
                        v9 = v25;
                        if (v14 == 0) {
                            goto lab_0x492662;
                        } else {
                            uint64_t v27 = *(int64_t *)(v14 + 24) % v22;
                            if (v23 == v27) {
                                goto lab_0x492691;
                            } else {
                                // 0x49265e
                                *(int64_t *)(8 * v27 + v24) = v10;
                                v9 = *v15;
                                goto lab_0x492662;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x4926ad:
    // 0x4926ad
    function_729ce(v4);
    int64_t result = 0; // 0x4926c3
    if (v2 != __readfsqword(40)) {
        // 0x4926c5
        __stack_chk_fail();
        result = (int64_t)&g45;
    }
    // 0x4926ca
    return result;
  lab_0x492691:
    // 0x492691
    *v11 = *v13;
    function_4927ac(v12 + 16, v10);
    function_4eeb50(v12);
    int64_t * v28 = (int64_t *)(a1 + 72); // 0x4926a8
    *v28 = *v28 - 1;
    goto lab_0x4926ad;
  lab_0x492662:;
    int64_t v29 = a1 + 64; // 0x492662
    if (v9 == v29) {
        // 0x49266c
        *(int64_t *)v29 = v14;
    }
    // 0x492671
    *v15 = 0;
    goto lab_0x492691;
}

// Address range: 0x4ad77e - 0x4ad929
int64_t function_4ad77e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1; // bp-1144, 0x4ad77e
    int64_t v2; // bp-1148, 0x4ad77e
    int64_t v3; // bp-584, 0x4ad77e
    if ((int32_t)a1 == 0) {
        // 0x4ad79a
        function_4ab2f0(&v3);
        int64_t v4 = function_4ac0d0(&v3, *(int64_t *)&g38, g3); // 0x4ad7c1
        if ((int32_t)v4 != 0) {
            // 0x4ad7d0
            return v4 & 0xffffffff;
        }
        // 0x4ad8cb
        function_4ab2f0(&v1);
        int64_t v5 = function_4ac0d0(&v1, (int64_t)g39, 1307); // 0x4ad8ef
        if ((int32_t)v5 != 0) {
            // 0x4ad7d0
            return v5 & 0xffffffff;
        }
        int64_t v6 = function_4ab2c0(&v3, &v1, 0, 0, &v2, 0, 0); // 0x4ad918
        if ((int32_t)v6 != 0) {
            // 0x4ad7d0
            return v6 & 0xffffffff;
        }
        // 0x4ad8b4
        function_4ab380(&v1);
        function_4ab380(&v3);
        // 0x4ad7d0
        return 0;
    }
    // 0x4ad7f8
    printf("  X.509 certificate load: ");
    function_4ab2f0(&v3);
    int64_t v7 = function_4ac0d0(&v3, *(int64_t *)&g38, g3); // 0x4ad82d
    if ((int32_t)v7 != 0) {
        // 0x4ad838
        puts("failed");
        // 0x4ad7d0
        return v7 & 0xffffffff;
    }
    // 0x4ad846
    function_4ab2f0(&v1);
    int64_t v8 = function_4ac0d0(&v1, (int64_t)g39, 1307); // 0x4ad86a
    if ((int32_t)v8 != 0) {
        // 0x4ad838
        puts("failed");
        // 0x4ad7d0
        return v8 & 0xffffffff;
    }
    // 0x4ad875
    printf("passed\n  X.509 signature verify: ");
    int64_t v9 = function_4ab2c0(&v3, &v1, 0, 0, &v2, 0, 0); // 0x4ad89d
    if ((int32_t)v9 != 0) {
        // 0x4ad838
        puts("failed");
        // 0x4ad7d0
        return v9 & 0xffffffff;
    }
    // 0x4ad8a8
    puts("passed\n");
    // 0x4ad8b4
    function_4ab380(&v1);
    function_4ab380(&v3);
    // 0x4ad7d0
    return 0;
}

// Address range: 0x4c410e - 0x4c42a4
int64_t function_4c410e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    // 0x4c410e
    int32_t size; // bp-64, 0x4c410e
    function_4cf380(0, 0, (int64_t *)&size, a3, a4);
    char * str = (char *)a1; // 0x4c414b
    int32_t len = strlen(str); // 0x4c414b
    char * str2 = (char *)a2; // 0x4c4156
    uint64_t v1 = (int64_t)size; // 0x4c415b
    uint64_t v2 = (int64_t)len + 1 + (int64_t)strlen(str2) + v1 + v1 / 64; // 0x4c4174
    if (v2 > a6) {
        // 0x4c4288
        *(int64_t *)a7 = v2;
        // 0x4c4271
        return 0xffffffd6;
    }
    int64_t * mem = calloc(1, size); // 0x4c4188
    if (mem == NULL) {
        // 0x4c4271
        return 0xffffee80;
    }
    int64_t v3 = (int64_t)mem; // 0x4c4188
    int64_t v4 = function_4cf380((int32_t)v3, size, (int64_t *)&size, a3, a4); // 0x4c41aa
    if ((int32_t)v4 != 0) {
        // 0x4c4269
        free(mem);
        // 0x4c4271
        return v4 & 0xffffffff;
    }
    // 0x4c41bb
    memcpy((int64_t *)a5, (int64_t *)a1, strlen(str));
    int64_t v5 = (int64_t)strlen(str) + a5; // 0x4c41e5
    int64_t v6 = v5; // 0x4c41eb
    if (size != 0) {
        int64_t v7 = v3; // 0x4c41f5
        uint64_t v8 = (int64_t)size;
        int64_t v9 = v8 < 64 ? v8 : 64; // 0x4c4202
        memcpy((int64_t *)v5, (int64_t *)v7, (int32_t)v9);
        int64_t v10 = v5 + v9; // 0x4c4219
        *(char *)v10 = 10;
        int64_t v11 = v10 + 1; // 0x4c4221
        int64_t v12 = (int64_t)size - v9; // 0x4c4225
        size = v12;
        v7 += v9;
        v6 = v11;
        while (v12 != 0) {
            // 0x4c41f8
            v8 = v12;
            v9 = v8 < 64 ? v8 : 64;
            memcpy((int64_t *)v11, (int64_t *)v7, (int32_t)v9);
            v10 = v11 + v9;
            *(char *)v10 = 10;
            v11 = v10 + 1;
            v12 = (int64_t)size - v9;
            size = v12;
            v7 += v9;
            v6 = v11;
        }
    }
    // 0x4c4232
    memcpy((int64_t *)v6, (int64_t *)a2, strlen(str2));
    int64_t v13 = v6 + (int64_t)strlen(str2); // 0x4c4250
    *(char *)v13 = 0;
    *(int64_t *)a7 = 1 - a5 + v13;
    // 0x4c4269
    free(mem);
    // 0x4c4271
    return v4 & 0xffffffff;
}

// Address range: 0x4c42b0 - 0x4c42c6
int64_t function_4c42b0(int64_t a1) {
    // 0x4c42b0
    if (a1 != 0) {
        // 0x4c42b5
        *(int64_t *)a1 = 0;
        *(int64_t *)(a1 + 8) = 0;
    }
    // 0x4c42c4
    int64_t result; // 0x4c42b0
    return result;
}

// Address range: 0x4c85e1 - 0x4c8743
int64_t function_4c85e1(int64_t a1) {
    int64_t str2 = 0; // bp-88, 0x4c861d
    int64_t v1 = 1; // 0x4c8647
    int64_t v2 = 0; // 0x4c8647
    if ((int32_t)a1 != 0) {
        goto lab_0x4c869d;
    } else {
        goto lab_0x4c8649;
    }
  lab_0x4c869d:;
    int64_t v3 = 0x100000000 * v2;
    printf("  RIPEMD-160 test #%d: ", v1);
    int64_t str = *(int64_t *)((v3 >> 29) + (int64_t)&g28); // 0x4c86b0
    int32_t len = strlen((char *)str); // 0x4c86b7
    int64_t v4; // 0x4c85e1
    function_4c8580(str, (int64_t)len, (int64_t)&str2, v4);
    int32_t memcmp_rc = memcmp(&str2, (int64_t *)(4 * ((v3 >> 32) + (v3 >> 30)) + (int64_t)&g8), 20); // 0x4c86dc
    if (memcmp_rc != 0) {
        // 0x4c8730
        puts("failed");
        // 0x4c8702
        return 1;
    }
    // 0x4c86e5
    puts("passed");
    int64_t v5 = v4; // 0x4c86f4
    int64_t v6 = v1; // 0x4c86f4
    if (v1 == 8) {
        // 0x4c86f6
        putchar(10);
        // 0x4c8702
        return 0;
    }
    goto lab_0x4c8692;
  lab_0x4c8649:;
    int64_t v7 = 1;
    int64_t v8 = 0;
    int64_t v9 = v8 >> 32; // 0x4c8649
    int64_t v10 = *(int64_t *)((v8 >> 29) + (int64_t)&g28); // 0x4c8652
    int64_t v11 = -1; // 0x4c865c
    int64_t v12 = v10; // 0x4c865c
    int64_t v13 = 0; // 0x4c865c
    while (v11 != 0) {
        int64_t v14 = v12;
        int64_t v15 = v11 - 1; // 0x4c865c
        v11 = v15;
        bool v16; // 0x4c85e1
        v12 = v14 + (v16 ? -1 : 1);
        v13 = v15;
        if (*(char *)v14 == 0) {
            // break -> 
            break;
        }
        v13 = 0;
    }
    int64_t v17 = -1 - v13;
    function_4c8580(v10, -2 - v13, (int64_t)&str2, v17);
    int32_t memcmp_rc2 = memcmp(&str2, (int64_t *)(20 * v9 + (int64_t)&g8), 20); // 0x4c867c
    if (memcmp_rc2 != 0) {
        // 0x4c8702
        return 1;
    }
    // 0x4c8689
    v5 = v17;
    v6 = v7;
    if (v7 == 8) {
        // 0x4c8702
        return 0;
    }
    goto lab_0x4c8692;
  lab_0x4c8692:
    // 0x4c8692
    v1 = v6 + 1 & 0xffffffff;
    v2 = v6 & 0xffffffff;
    v4 = v5;
    if ((int32_t)a1 == 0) {
        goto lab_0x4c8649;
    } else {
        goto lab_0x4c869d;
    }
}

// Address range: 0x4c8750 - 0x4c8781
int64_t function_4c8750(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4c8750
    if (a3 == 0) {
        // 0x4c8778
        return 0;
    }
    int64_t v1 = a2; // 0x4c8760
    *(char *)v1 = (char)rand();
    v1++;
    while (v1 != a3 + a2) {
        // 0x4c8768
        *(char *)v1 = (char)rand();
        v1++;
    }
    // 0x4c8778
    return 0;
}

// Address range: 0x4c9b79 - 0x4c9b7e
int64_t function_4c9b79(void) {
    // 0x4c9b79
    return function_4c99b0();
}

// Address range: 0x4c9b80 - 0x4c9d3e
int64_t function_4c9b80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, uint64_t a8) {
    int32_t v1 = a4; // 0x4c9b95
    int64_t v2; // 0x4c9b80
    int64_t v3; // 0x4c9b80
    int64_t v4; // 0x4c9b80
    if (v1 == 1) {
        // 0x4c9c90
        if (*(int32_t *)(a1 + 328) != 0) {
            // 0x4c9c61
            return 0xffffbf80;
        }
        int64_t v5 = *(int64_t *)(a1 + 8); // 0x4c9c9a
        v2 = v5;
        if (v5 - 16 > (int64_t)&g2) {
            // 0x4c9c61
            return 0xffffbf80;
        }
        goto lab_0x4c9bba;
    } else {
        int64_t v6 = *(int64_t *)(a1 + 8); // 0x4c9b9e
        if (v6 - 16 > (int64_t)&g2) {
            // 0x4c9c61
            return 0xffffbf80;
        }
        // 0x4c9bb2
        v2 = v6;
        if (v1 == 0) {
            // 0x4c9c78
            v3 = v6;
            v4 = function_4c8fa0();
            goto lab_0x4c9bcb;
        } else {
            goto lab_0x4c9bba;
        }
    }
  lab_0x4c9bba:
    // 0x4c9bba
    v3 = v2;
    v4 = function_4c9080();
    goto lab_0x4c9bcb;
  lab_0x4c9bcb:;
    int64_t result = v4 & 0xffffffff;
    if ((int32_t)v4 != 0) {
        // 0x4c9c61
        return result;
    }
    // 0x4c9bd4
    int32_t v7; // bp-1064, 0x4c9b80
    int64_t v8 = v7 % 256; // 0x4c9bd8
    int32_t v9; // 0x4c9b80
    int64_t v10 = (uint32_t)v9 % 256; // 0x4c9bdc
    int64_t v11 = v3 - 3;
    int64_t v12; // bp-1062, 0x4c9b80
    int64_t v13 = (int64_t)&v12;
    int64_t v14 = 0; // 0x4c9be2
    int64_t v15 = 0; // 0x4c9be2
    int64_t v16 = 0; // 0x4c9be2
    int64_t v17; // 0x4c9b80
    char v18; // 0x4c9b80
    int64_t v19; // 0x4c9b80
    if (v1 == 1) {
        int64_t v20 = v15 + 1; // 0x4c9ce5
        int64_t v21 = (int64_t)*(char *)(v15 + v13); // 0x4c9ce9
        int64_t v22 = (-v21 | v21) / 128 % 2 ^ 1 | v16; // 0x4c9cf5
        int64_t v23 = (v16 | -v22) / 128 % 2 ^ 1; // 0x4c9d06
        v15 = v20;
        v16 = v22;
        int64_t v24 = v23; // 0x4c9d0c
        while (v20 != v11) {
            // 0x4c9ce0
            v20 = v15 + 1;
            v21 = (int64_t)*(char *)(v15 + v13);
            v22 = (-v21 | v21) / 128 % 2 ^ 1 | v16;
            v23 = ((v16 | -v22) / 128 % 2 ^ 1) + v24;
            v15 = v20;
            v16 = v22;
            v24 = v23;
        }
        int64_t v25 = v23 + v13; // 0x4c9d0e
        v17 = v23;
        v18 = *(char *)v25 | (char)(v10 ^ 2 | v8);
        v19 = v25;
    } else {
        int64_t v26 = v14 + 1; // 0x4c9c0d
        int64_t v27 = *(char *)(v14 + v13) != -1;
        int64_t v28 = 0x100000000000000 * v27 >> 56 ^ 1; // 0x4c9c1a
        v14 = v26;
        int64_t v29 = v27; // 0x4c9c20
        int64_t v30 = v28; // 0x4c9c20
        while (v26 != v11) {
            // 0x4c9c00
            v26 = v14 + 1;
            v27 = v29 | (int64_t)(*(char *)(v14 + v13) != -1);
            v28 = (0x100000000000000 * v27 >> 56 ^ 1) + v30;
            v14 = v26;
            v29 = v27;
            v30 = v28;
        }
        int64_t v31 = v28 + v13; // 0x4c9c22
        v17 = v28;
        v18 = *(char *)v31 | (char)(v10 ^ 1 | v8);
        v19 = v31;
    }
    // 0x4c9c33
    if ((v18 || (char)(v17 < 8)) != 0) {
        // 0x4c9c61
        return 0xffffbf00;
    }
    int64_t v32 = v19 + 1;
    uint64_t v33 = (int64_t)&v7 - v32 + v3; // 0x4c9c3f
    int64_t result2 = 0xffffbc00; // 0x4c9c4b
    if (v33 <= a8) {
        // 0x4c9c51
        *(int64_t *)a5 = v33;
        memcpy((int64_t *)a7, (int64_t *)v32, (int32_t)v33);
        result2 = result;
    }
    // 0x4c9c61
    return result2;
}

// Address range: 0x4cca91 - 0x4ccc2d
int64_t function_4cca91(int64_t a1) {
    // 0x4cca91
    int64_t v1; // bp-1176, 0x4cca91
    function_4cb410(&v1);
    int64_t v2 = 0; // 0x4ccadc
    int64_t v3 = 0; // 0x4ccadc
    int64_t v4 = 1; // 0x4ccadc
    int64_t v5 = 0; // 0x4ccadc
    int64_t v6 = 0; // 0x4ccadc
    int64_t v7 = 1; // 0x4ccadc
    if ((int32_t)a1 != 0) {
        goto lab_0x4ccb70;
    } else {
        goto lab_0x4ccae2;
    }
  lab_0x4ccb70:
    // 0x4ccb70
    printf("  SHA-1 test #%d: ", v7);
    function_4cb520(&v1);
    int64_t v8 = v5; // 0x4ccb8e
    int64_t v9 = v6; // 0x4ccb8e
    int64_t v10 = v7; // 0x4ccb8e
    int64_t v11 = v5; // 0x4ccb8e
    int64_t v12 = v6; // 0x4ccb8e
    int64_t v13 = v7; // 0x4ccb8e
    if ((int32_t)v5 != 2) {
        goto lab_0x4ccaf5;
    } else {
        goto lab_0x4ccb94;
    }
  lab_0x4ccae2:
    // 0x4ccae2
    function_4cb520(&v1);
    v8 = v2;
    v9 = v3;
    v10 = v4;
    v11 = v2;
    v12 = v3;
    v13 = v4;
    if ((int32_t)v2 == 2) {
        goto lab_0x4ccb94;
    } else {
        goto lab_0x4ccaf5;
    }
  lab_0x4ccaf5:;
    int32_t v14 = *(int32_t *)(4 * v8 + (int64_t)&g9); // 0x4ccb01
    function_4cc7d0(&v1, 57 * v8 + (int64_t)&g10, v14);
    int64_t v15 = v8; // 0x4ccb1e
    int64_t v16 = v9; // 0x4ccb1e
    int64_t v17 = v10; // 0x4ccb1e
  lab_0x4ccb23:;
    // 0x4ccb23
    int64_t str; // bp-1208, 0x4cca91
    function_4cc900(&v1, &str);
    int32_t memcmp_rc = memcmp(&str, (int64_t *)(20 * v15 + (int64_t)&g11), 20); // 0x4ccb40
    if (memcmp_rc != 0) {
        // 0x4ccc11
        if ((int32_t)a1 != 0) {
            // 0x4ccc1b
            puts("failed");
        }
        // 0x4ccbf3
        function_4cb4a0(&v1);
        return 1;
    }
    int64_t v18 = v17;
    int64_t v19 = v16;
    if ((int32_t)a1 != 0) {
        // 0x4ccbd1
        puts("passed");
        if ((int32_t)v18 == 3) {
            // 0x4ccbe7
            putchar(10);
            // 0x4ccbf3
            function_4cb4a0(&v1);
            return 0;
        }
        // 0x4ccb5c
        v6 = v19 + 1;
        v5 = 0x100000000 * v6 >> 32;
        v7 = v18 + 1 & 0xffffffff;
        goto lab_0x4ccb70;
    } else {
        // 0x4ccb52
        if ((int32_t)v18 == 3) {
            // 0x4ccbf3
            function_4cb4a0(&v1);
            return 0;
        }
        // 0x4ccb5c
        v3 = v19 + 1;
        v2 = 0x100000000 * v3 >> 32;
        v4 = v18 + 1 & 0xffffffff;
        goto lab_0x4ccae2;
    }
  lab_0x4ccb94:;
    // 0x4ccb94
    int64_t v20; // bp-1080, 0x4cca91
    __asm_rep_stosq_memset((char *)&v20, 0x6161616161616161, 125);
    int64_t v21 = (int64_t)&v20; // 0x4ccbba
    int64_t v22 = v11 & -0x10000 | (int64_t)&g1; // 0x4ccbad
    while (true) {
        // 0x4ccbb0
        function_4cc7d0(&v1, v21, (int32_t)&g1);
        uint32_t v23 = (int32_t)v22 - 1; // 0x4ccbc2
        v15 = 2;
        v16 = v12;
        v17 = v13;
        v22 = v23;
        if (v23 == 0) {
            goto lab_0x4ccb23;
        }
    }
}

// Address range: 0x4cf1c2 - 0x4cf373
int64_t function_4cf1c2(int64_t a1) {
    // 0x4cf1c2
    int64_t v1; // bp-328, 0x4cf1c2
    function_4cf010(&v1);
    int64_t v2 = 1; // 0x4cf221
    int64_t v3 = 0; // 0x4cf221
    if ((int32_t)a1 != 0) {
        goto lab_0x4cf28c;
    } else {
        goto lab_0x4cf223;
    }
  lab_0x4cf28c:;
    int64_t v4 = v2;
    printf("  ARC4 test #%d: ", v4);
    int64_t v5 = 0x100000000 * v3 >> 29; // 0x4cf29f
    int64_t v6 = *(int64_t *)(v5 + (int64_t)&g12); // bp-360, 0x4cf2b5
    function_4cf0c0(&v1, v5 + (int64_t)&g13, 8);
    int64_t str; // bp-344, 0x4cf1c2
    function_4cf150(&v1, 8, &v6, &str);
    int32_t memcmp_rc = memcmp(&str, (int64_t *)(v5 + (int64_t)&g14), 8); // 0x4cf2e4
    if (memcmp_rc != 0) {
        // 0x4cf360
        puts("failed");
        // 0x4cf312
        function_4cf0a0(&v1);
        return 1;
    }
    // 0x4cf2ed
    puts("passed");
    int64_t v7 = v4; // 0x4cf2fc
    if (v4 == 3) {
        // 0x4cf2fe
        putchar(10);
        // 0x4cf312
        function_4cf0a0(&v1);
        return v4 & 0xffffff00;
    }
    goto lab_0x4cf281;
  lab_0x4cf223:;
    int64_t v8 = 0; // 0x4cf230
    v6 = *(int64_t *)(v8 + (int64_t)&g12);
    function_4cf0c0(&v1, v8 + (int64_t)&g13, 8);
    function_4cf150(&v1, 8, &v6, &str);
    int32_t memcmp_rc2 = memcmp(&str, (int64_t *)(v8 + (int64_t)&g14), 8); // 0x4cf26b
    if (memcmp_rc2 != 0) {
        // 0x4cf312
        function_4cf0a0(&v1);
        return 1;
    }
    int64_t v9 = 1;
    v7 = v9;
    if (v9 == 3) {
        // 0x4cf312
        function_4cf0a0(&v1);
        return 0;
    }
    goto lab_0x4cf281;
  lab_0x4cf281:
    // 0x4cf281
    v2 = v7 + 1 & 0xffffffff;
    v3 = v7 & 0xffffffff;
    if ((int32_t)a1 == 0) {
        goto lab_0x4cf223;
    } else {
        goto lab_0x4cf28c;
    }
}

// Address range: 0x4d43a9 - 0x4d43c2
int64_t function_4d43a9(void) {
    // 0x4d43a9
    __asm_int1();
    function_4b5890();
    return function_4d41d4();
}

// Address range: 0x4d43d0 - 0x4d455e
int64_t function_4d43d0(int64_t a1) {
    // 0x4d43d0
    int64_t v1; // bp-152, 0x4d43d0
    function_4c1690(&v1);
    int64_t v2 = function_4c14d0(4); // 0x4d43f3
    if (v2 == 0 || (int32_t)function_4c1770(&v1, v2, 1) != 0) {
        // 0x4d44fd
        function_4c16b0(&v1);
        return 1;
    }
    int64_t v3 = 0;
    if ((int32_t)a1 != 0) {
        // 0x4d4520
        printf("  PBKDF2 (SHA1) #%d: ", v3 & 0xffffffff);
    }
    int64_t v4 = 0x100000000 * v3;
    int64_t v5 = 4 * v3; // 0x4d4458
    int32_t v6 = *(int32_t *)(v5 + (int64_t)&g16); // 0x4d4458
    int32_t n = *(int32_t *)(v5 + (int64_t)&g15); // 0x4d445c
    int64_t v7 = 8 * v3; // 0x4d4464
    int64_t v8 = *(int64_t *)(v7 + (int64_t)&g17); // 0x4d4464
    int64_t v9 = v4 >> 27; // 0x4d4468
    int64_t v10 = *(int64_t *)(v7 + (int64_t)&g18); // 0x4d447a
    int64_t v11 = n; // 0x4d4482
    int64_t str; // bp-120, 0x4d43d0
    int64_t v12 = function_4d3da0(&v1, v9 + (int64_t)"password", v10, 8 * ((v4 >> 32) + (v4 >> 30)) + (int64_t)"salt", v8, v6, v11, &str, v9, v11); // 0x4d4495
    int64_t result; // 0x4d43d0
    while ((int32_t)v12 == 0) {
        int32_t memcmp_rc = memcmp((int64_t *)(v9 + (int64_t)&g19), &str, n); // 0x4d44bc
        if (memcmp_rc != 0) {
            // break -> 0x4d44e0
            break;
        }
        if ((int32_t)a1 != 0) {
            // 0x4d4538
            puts("passed");
            if (v3 == 5) {
                // 0x4d4552
                putchar(10);
                result = v12 & 0xffffffff;
                goto lab_0x4d44fd_2;
            }
        } else {
            if (v3 == 5) {
                // 0x4d44fd
                result = v12 & 0xffffffff;
                goto lab_0x4d44fd_2;
            }
        }
        // 0x4d4432
        v3++;
        if ((int32_t)a1 != 0) {
            // 0x4d4520
            printf("  PBKDF2 (SHA1) #%d: ", v3 & 0xffffffff);
        }
        // 0x4d443d
        v4 = 0x100000000 * v3;
        v5 = 4 * v3;
        v6 = *(int32_t *)(v5 + (int64_t)&g16);
        n = *(int32_t *)(v5 + (int64_t)&g15);
        v7 = 8 * v3;
        v8 = *(int64_t *)(v7 + (int64_t)&g17);
        v9 = v4 >> 27;
        v10 = *(int64_t *)(v7 + (int64_t)&g18);
        v11 = n;
        v12 = function_4d3da0(&v1, v9 + (int64_t)"password", v10, 8 * ((v4 >> 32) + (v4 >> 30)) + (int64_t)"salt", v8, v6, v11, &str, v9, v11);
    }
    // 0x4d44e0
    result = 1;
    if ((int32_t)a1 != 0) {
        // 0x4d44e5
        puts("failed");
        result = 1;
    }
  lab_0x4d44fd_2:
    // 0x4d44fd
    function_4c16b0(&v1);
    return result;
}

// Address range: 0x4f6a52 - 0x4f6bf0
int64_t function_4f6a52(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4f6a52
    int64_t v1; // 0x4f6a52
    int64_t v2 = v1;
    __stack_chk_fail();
    int64_t v3; // 0x4f6a52
    if (a3 != 1) {
        goto lab_0x4f6a7b;
    } else {
        // 0x4f6a60
        function_1fd40((int64_t)&g45);
        int64_t v4 = *(int64_t *)(v2 - 24) + v2; // 0x4f6a68
        int32_t * v5 = (int32_t *)(v4 + 32); // 0x4f6a6c
        *v5 = *v5 | 1;
        function_20a50();
        v3 = v4;
        if (*(char *)(v4 + 28) % 2 == 0) {
            goto lab_0x4f6ab3;
        } else {
            goto lab_0x4f6a7b;
        }
    }
  lab_0x4f6a7b:;
    int64_t v6 = v3;
    function_1fd40((int64_t)&g45);
    int64_t v7 = *(int64_t *)(*(int64_t *)v6 - 24) + v6; // 0x4f6a87
    int32_t * v8 = (int32_t *)(v7 + 32); // 0x4f6a8a
    *v8 = *v8 | 1;
    if (*(char *)(v7 + 28) % 2 == 0) {
        // 0x4f6a94
        function_20540();
        return function_4f6a12();
    }
    goto lab_0x4f6ab3;
  lab_0x4f6ab3:;
    int64_t v9 = function_20a50(); // 0x4f6ab3
    function_20540();
    _Unwind_Resume((struct _Unwind_Exception *)v9);
    *(int64_t *)(v9 + 8) = 0;
    int64_t v10 = __readfsqword(40); // 0x4f6aed
    function_4f5b50();
    int64_t v11 = 1; // 0x4f6b07
    int64_t v12 = v9; // 0x4f6b07
    int64_t result; // 0x4f6a52
    int64_t v13; // 0x4f6a52
    int64_t v14; // 0x4f6a52
    char v15; // 0x4f6a52
    if (v15 == 0) {
        goto lab_0x4f6b88;
    } else {
        int64_t v16 = *(int64_t *)v9; // 0x4f6b09
        int64_t v17 = *(int64_t *)(v16 - 24) + v9;
        int64_t v18 = *(int64_t *)(v17 + 232); // 0x4f6b10
        uint64_t v19 = *(int64_t *)(v18 + 16); // 0x4f6b18
        if (*(int64_t *)(v18 + 24) > v19) {
            // 0x4f6b22
            result = (int64_t)*(char *)v19;
            v14 = 1;
            v13 = v9;
        } else {
            int64_t v20 = *(int64_t *)v18; // 0x4f6b40
            result = v20;
            v14 = 1;
            v13 = v9;
            if ((int32_t)v20 == -1) {
                // 0x4f6b4b
                function_4fc010(v17, *(int32_t *)(v17 + 32) | 2, v16);
                result = v20 & 0xffffffff;
                v14 = v16;
                v13 = v17;
            }
        }
        goto lab_0x4f6b25;
    }
  lab_0x4f6b88:
    // 0x4f6b88
    result = 0xffffffff;
    v14 = v11;
    v13 = v12;
    goto lab_0x4f6b25;
  lab_0x4f6b25:
    // 0x4f6b25
    if (v10 == __readfsqword(40)) {
        // 0x4f6b35
        return result;
    }
    int64_t v21 = v13;
    __stack_chk_fail();
    int64_t v22 = v14 - 1; // 0x4f6b94
    function_1fd40((int64_t)&g45);
    int64_t v23 = *(int64_t *)(*(int64_t *)v21 - 24) + v21;
    int32_t * v24 = (int32_t *)(v23 + 32);
    *v24 = *v24 | 1;
    unsigned char v25 = *(char *)(v23 + 28);
    int64_t v26; // 0x4f6bcd
    if (v22 == 0) {
        if (v25 % 2 != 0) {
            int64_t v27 = function_20a50(); // 0x4f6bb3
            function_20540();
            _Unwind_Resume((struct _Unwind_Exception *)v27);
        }
        // 0x4f6bc8
        function_20a50();
        // 0x4f6bcd
        v26 = function_20a50();
        function_20540();
        _Unwind_Resume((struct _Unwind_Exception *)v26);
        return (int64_t)&g45;
    }
    if (v25 % 2 != 0) {
        // 0x4f6bcd
        v26 = function_20a50();
        function_20540();
        _Unwind_Resume((struct _Unwind_Exception *)v26);
        return (int64_t)&g45;
    }
    // 0x4f6b80
    function_20540();
    v11 = v22;
    v12 = v23;
    goto lab_0x4f6b88;
}

// Address range: 0x504ef0 - 0x504f62
// From class:    std::basic_streambuf<char, std::char_traits<char> >
// Type:          constructor
int64_t function_504ef0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 8; // 0x504ef5
    int64_t * v2 = (int64_t *)a1; // 0x504f03
    *v2 = a2;
    *(int64_t *)(*(int64_t *)(a2 - 24) + a1) = *(int64_t *)(a2 + 24);
    int64_t * v3 = (int64_t *)v1; // 0x504f1f
    *v3 = (int64_t)&g32;
    function_502870(v1);
    function_4f1760(a1 + 112);
    *v3 = (int64_t)&g34;
    function_566180(a1 + 64);
    int64_t v4 = *(int64_t *)(a2 + 8); // 0x504f48
    *v2 = v4;
    int64_t result = *(int64_t *)(v4 - 24); // 0x504f4f
    *(int64_t *)(result + a1) = *(int64_t *)(a2 + 16);
    return result;
}

// Address range: 0x504f70 - 0x504fea
// From class:    std::basic_streambuf<char, std::char_traits<char> >
// Type:          constructor
int64_t function_504f70(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 16; // 0x504f75
    int64_t * v2 = (int64_t *)a1; // 0x504f83
    *v2 = a2;
    *(int64_t *)(*(int64_t *)(a2 - 24) + a1) = *(int64_t *)(a2 + 24);
    int64_t * v3 = (int64_t *)v1; // 0x504f9f
    *v3 = (int64_t)&g32;
    function_502870(v1);
    function_4f1760(a1 + 120);
    *v3 = (int64_t)&g34;
    function_566180(a1 + 72);
    int64_t v4 = *(int64_t *)(a2 + 8); // 0x504fc8
    *v2 = v4;
    int64_t result = *(int64_t *)(v4 - 24); // 0x504fcf
    *(int64_t *)(result + a1) = *(int64_t *)(a2 + 16);
    *(int64_t *)(a1 + 8) = 0;
    return result;
}

// Address range: 0x504ff0 - 0x5050a5
// From class:    std::basic_streambuf<char, std::char_traits<char> >
// Type:          constructor
int64_t function_504ff0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 24; // 0x504ff5
    int64_t * v2 = (int64_t *)a1; // 0x505003
    *v2 = a2;
    *(int64_t *)(*(int64_t *)(a2 - 24) + a1) = *(int64_t *)(a2 + 64);
    int64_t v3 = a1 + 16; // 0x505018
    int64_t * v4 = (int64_t *)v3; // 0x505018
    *v4 = *(int64_t *)(a2 + 72);
    int64_t * v5 = (int64_t *)v1; // 0x505027
    *v5 = (int64_t)&g32;
    function_502870(v1);
    function_4f1760(a1 + 128);
    *v5 = (int64_t)&g34;
    function_566180(a1 + 80);
    int64_t v6 = *(int64_t *)(a2 + 8); // 0x505053
    *v2 = v6;
    *(int64_t *)(*(int64_t *)(v6 - 24) + a1) = *(int64_t *)(a2 + 48);
    *v4 = *(int64_t *)(a2 + 56);
    int64_t v7 = *(int64_t *)(a2 + 32); // 0x50506e
    *v4 = v7;
    *(int64_t *)(*(int64_t *)(v7 - 24) + v3) = *(int64_t *)(a2 + 40);
    int64_t v8 = *(int64_t *)(a2 + 16); // 0x505083
    *v2 = v8;
    int64_t result = *(int64_t *)(v8 - 24); // 0x50508a
    *(int64_t *)(result + a1) = *(int64_t *)(a2 + 24);
    *(int64_t *)(a1 + 8) = 0;
    return result;
}

// Address range: 0x5077c0 - 0x507832
// From class:    std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_5077c0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 8; // 0x5077c5
    int64_t * v2 = (int64_t *)a1; // 0x5077d3
    *v2 = a2;
    *(int64_t *)(*(int64_t *)(a2 - 24) + a1) = *(int64_t *)(a2 + 24);
    int64_t * v3 = (int64_t *)v1; // 0x5077ef
    *v3 = (int64_t)&g33;
    function_505130(v1);
    function_4f1760(a1 + 112);
    *v3 = (int64_t)&g35;
    function_566180(a1 + 64);
    int64_t v4 = *(int64_t *)(a2 + 8); // 0x507818
    *v2 = v4;
    int64_t result = *(int64_t *)(v4 - 24); // 0x50781f
    *(int64_t *)(result + a1) = *(int64_t *)(a2 + 16);
    return result;
}

// Address range: 0x507840 - 0x5078ba
// From class:    std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_507840(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 16; // 0x507845
    int64_t * v2 = (int64_t *)a1; // 0x507853
    *v2 = a2;
    *(int64_t *)(*(int64_t *)(a2 - 24) + a1) = *(int64_t *)(a2 + 24);
    int64_t * v3 = (int64_t *)v1; // 0x50786f
    *v3 = (int64_t)&g33;
    function_505130(v1);
    function_4f1760(a1 + 120);
    *v3 = (int64_t)&g35;
    function_566180(a1 + 72);
    int64_t v4 = *(int64_t *)(a2 + 8); // 0x507898
    *v2 = v4;
    int64_t result = *(int64_t *)(v4 - 24); // 0x50789f
    *(int64_t *)(result + a1) = *(int64_t *)(a2 + 16);
    *(int64_t *)(a1 + 8) = 0;
    return result;
}

// Address range: 0x5078c0 - 0x507975
// From class:    std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_5078c0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 24; // 0x5078c5
    int64_t * v2 = (int64_t *)a1; // 0x5078d3
    *v2 = a2;
    *(int64_t *)(*(int64_t *)(a2 - 24) + a1) = *(int64_t *)(a2 + 64);
    int64_t v3 = a1 + 16; // 0x5078e8
    int64_t * v4 = (int64_t *)v3; // 0x5078e8
    *v4 = *(int64_t *)(a2 + 72);
    int64_t * v5 = (int64_t *)v1; // 0x5078f7
    *v5 = (int64_t)&g33;
    function_505130(v1);
    function_4f1760(a1 + 128);
    *v5 = (int64_t)&g35;
    function_566180(a1 + 80);
    int64_t v6 = *(int64_t *)(a2 + 8); // 0x507923
    *v2 = v6;
    *(int64_t *)(*(int64_t *)(v6 - 24) + a1) = *(int64_t *)(a2 + 48);
    *v4 = *(int64_t *)(a2 + 56);
    int64_t v7 = *(int64_t *)(a2 + 32); // 0x50793e
    *v4 = v7;
    *(int64_t *)(*(int64_t *)(v7 - 24) + v3) = *(int64_t *)(a2 + 40);
    int64_t v8 = *(int64_t *)(a2 + 16); // 0x507953
    *v2 = v8;
    int64_t result = *(int64_t *)(v8 - 24); // 0x50795a
    *(int64_t *)(result + a1) = *(int64_t *)(a2 + 24);
    *(int64_t *)(a1 + 8) = 0;
    return result;
}

// Address range: 0x52b9d4 - 0x52b9d9
int64_t function_52b9d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x52b9d4
    int64_t v1; // 0x52b9d4
    return v1 & -120;
}

// Address range: 0x52b9e0 - 0x52b9f0
int64_t function_52b9e0(void) {
    // 0x52b9e0
    int64_t v1; // 0x52b9e0
    memcpy((int64_t *)v1, (int64_t *)v1, (int32_t)v1);
    return function_52b942();
}

// Address range: 0x52b9f0 - 0x52ba20
int64_t function_52b9f0(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 16); // 0x52b9fe
    if (*(int64_t *)(a1 + 8) < result) {
        // 0x52ba10
        return function_52b8e0();
    }
    // 0x52ba08
    return result;
}

// Address range: 0x52ba20 - 0x52ba2e
int64_t function_52ba20(int64_t a1) {
    // 0x52ba20
    int64_t v1; // 0x52ba20
    function_1fd40(v1);
    return function_20540();
}

// Address range: 0x52ba30 - 0x52ba3f
int64_t function_52ba30(int64_t result) {
    // 0x52ba30
    *(int64_t *)(result + 8) = 0;
    *(char *)result = 0;
    return result;
}

// Address range: 0x52ba40 - 0x52ba49
int64_t function_52ba40(int64_t a1) {
    // 0x52ba40
    int64_t v1; // 0x52ba40
    return v1 & -256 | (int64_t)(*(int64_t *)(a1 + 8) == 0);
}

// Address range: 0x52ba50 - 0x52ba57
int64_t function_52ba50(int64_t a1, int64_t a2) {
    // 0x52ba50
    return a2 + a1;
}

// Address range: 0x52ba60 - 0x52ba67
int64_t function_52ba60(int64_t a1, int64_t a2) {
    // 0x52ba60
    return a2 + a1;
}

// Address range: 0x52ba70 - 0x52bad4
int64_t function_52ba70(int64_t a1, uint64_t a2) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x52ba70
    if (v1 > a2) {
        // 0x52ba79
        return a2 + a1;
    }
    char * v2 = (char *)a2; // 0x52ba8d
    int64_t v3; // 0x52ba70
    function_542650("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)", v2, v1, v3, v3);
    if (a2 < 0x74613a3a676e6972) {
        // 0x52baa9
        return a2 + 0x74735f6369736162;
    }
    // 0x52bab0
    function_542650("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)", v2, 0x74613a3a676e6972, v3, v3);
    return 0x74735f6369736162;
}

// Address range: 0x52bae0 - 0x52bae4
int64_t function_52bae0(int64_t result) {
    // 0x52bae0
    return result;
}

// Address range: 0x52baf0 - 0x52bafd
int64_t function_52baf0(int64_t a1) {
    // 0x52baf0
    return a1 - 1 + *(int64_t *)(a1 + 8);
}

// Address range: 0x52bb00 - 0x52bb0d
int64_t function_52bb00(int64_t a1) {
    // 0x52bb00
    return a1 - 1 + *(int64_t *)(a1 + 8);
}

// Address range: 0x52bb10 - 0x52bb7b
int64_t function_52bb10(int64_t result, int64_t a2) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x52bb2a
    int64_t v2 = *v1; // 0x52bb2a
    uint64_t v3 = v2 + 1; // 0x52bb31
    if (v3 > *(int64_t *)(result + 16)) {
        // 0x52bb40
        function_52b400(result, v2, 0, 0, 1);
    }
    int64_t v4 = v2 + result;
    *(char *)v4 = (char)a2;
    *v1 = v3;
    *(char *)(v4 + 1) = 0;
    return result;
}

// Address range: 0x54b5d5 - 0x54b5da
int64_t function_54b5d5(void) {
    // 0x54b5d5
    return function_54b59e();
}

// Address range: 0x54b5e0 - 0x54b5ec
int64_t function_54b5e0(int64_t a1, int64_t a2) {
    // 0x54b5e0
    int64_t v1; // 0x54b5e0
    return function_54b560(a1, a2, *(int64_t *)(a2 + 8), v1);
}

// Address range: 0x54b5f0 - 0x54b5fc
int64_t function_54b5f0(int64_t a1, int64_t a2) {
    // 0x54b5f0
    int64_t v1; // 0x54b5f0
    return function_54b560(a1, a2, *(int64_t *)(a2 + 8), v1);
}

// Address range: 0x54b600 - 0x54b780
int64_t function_54b600(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    uint64_t v1 = *(int64_t *)(a2 + 8); // 0x54b600
    if (v1 >= a3) {
        uint64_t v2 = v1 - a3; // 0x54b607
        return function_54b560(a1, 4 * a3 + a2, v2 > a4 ? a4 : v2, a2);
    }
    // 0x54b625
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::append", a3, v1, v1);
    if (a3 < 0xb79c969788d7df8d) {
        // 0x54b663
        return function_54b560((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int64_t)"basic_string::append", a3, v1);
    }
    // 0x54b668
    function_542590("basic_string::append");
    int32_t v3 = wcslen((int32_t *)"basic_string::append"); // 0x54b68f
    if (v3 > -1) {
        // 0x54b6a7
        return function_54b560((int64_t)"basic_string::append", (int64_t)"basic_string::append", (int64_t)v3, -0x50613a3a676e6973);
    }
    // 0x54b6bb
    function_542590("basic_string::append");
    int32_t v4 = wcslen((int32_t *)"basic_string::append"); // 0x54b6df
    if (v4 > -1) {
        // 0x54b6f7
        return function_54b560((int64_t)"basic_string::append", (int64_t)"basic_string::append", (int64_t)v4, -0x50613a3a676e6973);
    }
    // 0x54b738
    function_542590("basic_string::append");
    function_542590("basic_string::append");
    return function_542590("basic_string::append");
}

// Address range: 0x555dcb - 0x555e0f
int64_t function_555dcb(int64_t a1, uint32_t a2) {
    int64_t v1 = (int64_t)a2 - 24; // 0x555dcf
    int64_t v2; // 0x555dcb
    if (v1 == v2) {
        function_555ca2();
    }
    // 0x555ddc
    int64_t v3; // bp+23, 0x555dcb
    function_552550(v1, &v3);
    int64_t v4 = a1 - 24; // 0x555def
    if (v4 == v2) {
        function_555cb4();
    }
    // 0x555dfc
    function_552550(v4, &v3);
    return function_555cb4();
}

// Address range: 0x555e0f - 0x555ed0
int64_t function_555e0f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x555e0f
    __stack_chk_fail();
    function_1fd40((int64_t)&g45);
    int64_t v1 = a3 - 24;
    int64_t v2 = a2 - 24;
    int64_t v3 = a1 - 24;
    while (true) {
        int64_t v4 = function_20a50(); // 0x555e1c
        if (v1 != (int64_t)&g40) {
            // 0x555e39
            int64_t v5; // bp+22, 0x555e0f
            function_552550(v1, &v5);
        }
        if (v2 != (int64_t)&g40) {
            // 0x555e59
            int64_t v6; // bp+21, 0x555e0f
            function_552550(v2, &v6);
        }
        if (v3 != (int64_t)&g40) {
            // 0x555e79
            int64_t v7; // bp+20, 0x555e0f
            function_552550(v3, &v7);
        }
        // 0x555e8b
        function_1fd40(v4);
        int64_t v8; // 0x555e0f
        if (v8 != 0) {
            // 0x555e98
            function_4eeb40(v8);
        }
        if (v8 != 0) {
            // 0x555ea5
            function_4eeb40(v8);
        }
        if (v8 != 0) {
            // 0x555eb2
            function_4eeb40(v8);
        }
    }
}

// Address range: 0x555ed0 - 0x555ed5
int64_t function_555ed0(void) {
    // 0x555ed0
    int64_t result; // 0x555ed0
    return result;
}

// Address range: 0x555ed5 - 0x555ef7
int64_t function_555ed5(void) {
    // 0x555ed5
    function_20540();
    int64_t v1; // 0x555ed5
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g45;
}

// Address range: 0x555ef7 - 0x555f27
int64_t function_555ef7(int64_t a1) {
    // 0x555ef7
    int64_t v1; // bp+23, 0x555ef7
    function_552550(a1 - 24, &v1);
    int64_t result; // 0x555ef7
    return result;
}

// Address range: 0x555f27 - 0x555f2c
int64_t function_555f27(void) {
    // 0x555f27
    return function_555ef7((int64_t)&g45);
}

// Address range: 0x555f2c - 0x555f3e
int64_t function_555f2c(void) {
    // 0x555f2c
    int64_t result; // 0x555f2c
    return result;
}

// Address range: 0x555f3e - 0x555f53
int64_t function_555f3e(void) {
    // 0x555f3e
    int64_t result; // 0x555f3e
    return result;
}

// Address range: 0x555f53 - 0x555f55
int64_t function_555f53(void) {
    // 0x555f53
    return function_555f2c();
}

// Address range: 0x555f55 - 0x555f6a
int64_t function_555f55(void) {
    // 0x555f55
    int64_t result; // 0x555f55
    return result;
}

// Address range: 0x555f6a - 0x555f6c
int64_t function_555f6a(void) {
    // 0x555f6a
    return function_555f55();
}

// Address range: 0x555f6c - 0x555f84
int64_t function_555f6c(void) {
    // 0x555f6c
    int64_t result; // 0x555f6c
    return result;
}

// Address range: 0x555f84 - 0x555f89
int64_t function_555f84(void) {
    // 0x555f84
    int64_t result; // 0x555f84
    return result;
}

// Address range: 0x555f89 - 0x555f8b
int64_t function_555f89(void) {
    // 0x555f89
    return function_555f2c();
}

// Address range: 0x555f8b - 0x555f8d
int64_t function_555f8b(void) {
    // 0x555f8b
    return function_555f55();
}

// Address range: 0x561e6b - 0x561e7b
int64_t function_561e6b(int64_t a1) {
    // 0x561e6b
    return function_561801();
}

// Address range: 0x561e80 - 0x561e9c
int64_t function_561e80(char a1) {
    // 0x561e80
    int64_t v1; // 0x561e80
    int64_t v2 = v1;
    *(int64_t *)v1 = a1 != 0 ? -v2 : v2;
    return function_56187d();
}

// Address range: 0x561ea0 - 0x561eb4
int64_t function_561ea0(int64_t a1) {
    // 0x561ea0
    function_5246d0(a1);
    return function_5618e0();
}

// Address range: 0x561eb8 - 0x561ec8
int64_t function_561eb8(int64_t a1) {
    // 0x561eb8
    *(int32_t *)a1 = 4;
    return function_561c76();
}

// Address range: 0x561ec8 - 0x561ed3
int64_t function_561ec8(void) {
    // 0x561ec8
    return function_561683();
}

// Address range: 0x561ed8 - 0x561efa
int64_t function_561ed8(int64_t a1) {
    if ((int32_t)a1 != -1) {
        function_561db1();
    }
    // 0x561ee7
    return function_561b38();
}

// Address range: 0x561f00 - 0x561f22
int64_t function_561f00(int64_t a1) {
    if ((int32_t)a1 != -1) {
        function_561cf9();
    }
    // 0x561f0f
    return function_561833();
}

// Address range: 0x561f28 - 0x561f38
int64_t function_561f28(void) {
    // 0x561f28
    return function_5616e8();
}

// Address range: 0x561f38 - 0x561f5c
int64_t function_561f38(int64_t a1, int64_t a2, int64_t a3) {
    // 0x561f38
    int64_t v1; // bp+143, 0x561f38
    function_552550(a1, &v1);
    return function_5618a2();
}

// Address range: 0x561f5c - 0x561f6e
int64_t function_561f5c(void) {
    // 0x561f5c
    int64_t v1; // 0x561f5c
    *(int64_t *)v1 = 0x7fffffffffffffff;
    return function_561cc5();
}

// Address range: 0x561f6e - 0x561f7d
int64_t function_561f6e(void) {
    // 0x561f6e
    return function_5616f7();
}

// Address range: 0x561f7d - 0x561f8b
int64_t function_561f7d(void) {
    // 0x561f7d
    return function_5616e8();
}

// Address range: 0x561f8b - 0x561f95
int64_t function_561f8b(void) {
    // 0x561f8b
    return function_561b38();
}

// Address range: 0x561f95 - 0x561f9f
int64_t function_561f95(void) {
    // 0x561f95
    return function_561833();
}

// Address range: 0x561f9f - 0x561faa
int64_t function_561f9f(void) {
    // 0x561f9f
    return function_561840();
}

// Address range: 0x561faa - 0x561fbb
int64_t function_561faa(void) {
    // 0x561faa
    return function_561840();
}

// Address range: 0x561fbb - 0x561fd0
int64_t function_561fbb(char a1) {
    // 0x561fbb
    return function_561840();
}

// Address range: 0x561fd0 - 0x561fe6
int64_t function_561fd0(void) {
    // 0x561fd0
    return function_5616f7();
}

// Address range: 0x561fe6 - 0x561ffd
int64_t function_561fe6(char a1) {
    // 0x561fe6
    __stack_chk_fail();
    return function_561840();
}

// Address range: 0x561fff - 0x562000
int64_t function_561fff(void) {
    // 0x561fff
    int64_t result; // 0x561fff
    return result;
}

// Address range: 0x5661bb - 0x5661be
int64_t function_5661bb(int64_t a1) {
    // 0x5661bb
    int64_t result; // 0x5661bb
    *(int32_t *)a1 = (int32_t)result - 1;
    return result;
}

// Address range: 0x5661bf - 0x56636b
int64_t function_5661bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 + 86); // 0x5661bf
    int64_t v2; // 0x5661bf
    *v1 = *v1 + (char)v2;
    uint64_t v3 = *(int64_t *)(a2 + 16); // 0x5661ce
    *(int32_t *)a1 = (int32_t)a3;
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x5661d4
    *v4 = 0;
    int64_t * v5 = (int64_t *)(a1 + 24); // 0x5661e6
    *v5 = 0;
    int64_t * v6 = (int64_t *)(a1 + 32); // 0x5661ee
    *v6 = 0;
    int64_t * v7 = (int64_t *)(a1 + 16); // 0x5661f6
    *v7 = v3;
    int64_t v8 = function_4eec00(v3 < 0x1000000000000000 ? 8 * v3 : -1); // 0x566210
    int64_t v9 = *v7; // 0x566215
    *v4 = v8;
    int64_t v10 = 0; // 0x566223
    int64_t v11; // 0x5661bf
    int64_t v12; // 0x5661bf
    int64_t v13; // 0x5661bf
    int64_t v14; // 0x5661bf
    int64_t v15; // 0x5661bf
    int64_t v16; // 0x5661bf
    int64_t v17; // 0x5661bf
    int64_t v18; // 0x5661bf
    if (v9 != 0) {
        int64_t * v19 = (int64_t *)(a2 + 8); // 0x566246
        v11 = v8;
        v13 = 0;
        v17 = v9;
        while (true) {
          lab_0x566246:;
            int64_t v20 = v17;
            v14 = v13;
            int64_t v21 = 8 * v14; // 0x56624a
            int64_t v22 = *(int64_t *)(*v19 + v21); // 0x56624a
            *(int64_t *)(v21 + v11) = v22;
            v15 = v20;
            if (v22 == 0) {
                goto lab_0x566239;
            } else {
                // 0x566257
                if (g37 != 0) {
                    int32_t * v23 = (int32_t *)(v22 + 8); // 0x566230
                    *v23 = *v23 + 1;
                    v15 = *v7;
                    goto lab_0x566239;
                } else {
                    int64_t v24 = v14 + 1; // 0x566261
                    int32_t * v25 = (int32_t *)(v22 + 8); // 0x566265
                    *v25 = *v25 + 1;
                    v12 = v24;
                    v16 = v20;
                    v18 = v20;
                    if (v20 <= v24) {
                        // break -> 0x56626e
                        break;
                    }
                    goto lab_0x566242;
                }
            }
        }
      lab_0x56626e:;
        uint64_t v26 = v18;
        v10 = v26 < 0x1000000000000000 ? 8 * v26 : -1;
    }
    int64_t v27 = function_4eec00(v10); // 0x56628e
    *v5 = v27;
    int64_t v28; // 0x5661bf
    int64_t v29; // 0x5661bf
    int64_t v30; // 0x5661bf
    int64_t v31; // 0x5661bf
    if (*v7 != 0) {
        // 0x5662bb
        v28 = v27;
        v30 = 0;
        while (true) {
          lab_0x5662bb:
            // 0x5662bb
            v31 = v30;
            int64_t v32 = 8 * v31; // 0x5662bf
            int64_t v33 = *(int64_t *)(*(int64_t *)(a2 + 24) + v32); // 0x5662bf
            *(int64_t *)(v32 + v28) = v33;
            if (v33 == 0) {
                goto lab_0x5662ad;
            } else {
                int32_t * v34 = (int32_t *)(v33 + 8);
                *v34 = *v34 + 1;
                if (g37 != 0) {
                    goto lab_0x5662ad;
                } else {
                    int64_t v35 = v31 + 1; // 0x5662da
                    v29 = v35;
                    if (*v7 <= v35) {
                        // break -> 0x5662e4
                        break;
                    }
                    goto lab_0x5662b7;
                }
            }
        }
    }
  lab_0x5662e4:;
    int64_t v36 = function_4eec00(96); // 0x5662e9
    *v6 = v36;
    int64_t v37 = v36;
    *(int64_t *)v37 = 0;
    int64_t v38 = v37 + 8; // 0x56630e
    while (v36 + 88 != v37) {
        // 0x566300
        v37 = v38;
        *(int64_t *)v37 = 0;
        v38 = v37 + 8;
    }
    int64_t * v39 = (int64_t *)(a2 + 32); // 0x566318
    int64_t v40 = 0;
    int64_t v41 = *v39; // 0x566318
    int64_t str = *(int64_t *)(v41 + v40); // 0x56631c
    int64_t result = v41; // 0x566323
    while (str != 0) {
        int64_t v42 = (int64_t)strlen((char *)str) + 1; // 0x56632e
        *(int64_t *)(*v6 + v40) = function_4eec00(v42);
        int64_t v43 = *(int64_t *)(*v6 + v40); // 0x566347
        int64_t v44 = *(int64_t *)(*v39 + v40); // 0x56634f
        int64_t * dest_mem = memcpy((int64_t *)v43, (int64_t *)v44, (int32_t)v42); // 0x566357
        if (v40 == 88) {
            // 0x566362
            result = (int64_t)dest_mem;
            return result;
        }
        v40 += 8;
        v41 = *v39;
        str = *(int64_t *)(v41 + v40);
        result = v41;
    }
  lab_0x566362_2:
    // 0x566362
    return result;
  lab_0x5662ad:;
    int64_t v45 = v31 + 1; // 0x5662ad
    v29 = v45;
    if (*v7 <= v45) {
        // break -> 0x5662e4
        goto lab_0x5662e4;
    }
    goto lab_0x5662b7;
  lab_0x5662b7:
    // 0x5662b7
    v28 = *v5;
    v30 = v29;
    goto lab_0x5662bb;
  lab_0x566239:;
    int64_t v46 = v14 + 1; // 0x566239
    v12 = v46;
    v16 = v15;
    v18 = v15;
    if (v15 <= v46) {
        // break -> 0x56626e
        goto lab_0x56626e;
    }
    goto lab_0x566242;
  lab_0x566242:
    // 0x566242
    v11 = *v4;
    v13 = v12;
    v17 = v16;
    goto lab_0x566246;
}

// Address range: 0x566377 - 0x566383
int64_t function_566377(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a2 - 0x76b70055); // 0x56637c
    *v1 = 2 * *v1;
    int64_t v2; // 0x566377
    bool v3; // 0x566377
    return v2 + 0xe8fffffc + (int64_t)v3 & 0xffffffff;
}

// Address range: 0x56e9b8 - 0x56e9c5
int64_t function_56e9b8(void) {
    // 0x56e9b8
    return function_2509a();
}

// Address range: 0x56e9d0 - 0x56e9de
int64_t function_56e9d0(int64_t result) {
    // 0x56e9d0
    int64_t v1; // 0x56e9d0
    function_380a0((int64_t *)result, v1);
    return result;
}

// Address range: 0x56e9e0 - 0x56ea75
int64_t function_56e9e0(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x56e9e4
    int64_t v2 = a1 - 24; // 0x56e9f7
    int64_t v3; // bp-17, 0x56e9e0
    if (v2 != (int64_t)g36) {
        int32_t * v4 = (int32_t *)(a1 - 8);
        int32_t v5 = *v4;
        *v4 = v5 - 1;
        if (v5 >= 0 != v5 != 0) {
            // 0x56ea38
            function_547e30(v2, &v3, v5);
        }
    }
    int64_t result = __readfsqword(40) ^ v1; // 0x56ea09
    if (result == 0) {
        // 0x56ea14
        return result;
    }
    // 0x56ea53
    __stack_chk_fail();
    *(int64_t *)v2 = v3;
    return (int64_t)&g42;
}

// Address range: 0x56ea80 - 0x56ea8e
int64_t function_56ea80(int64_t result) {
    // 0x56ea80
    int64_t v1; // 0x56ea80
    function_256ba(result, (int64_t *)v1);
    return result;
}

// Address range: 0x56ea90 - 0x56eb75
int64_t function_56ea90(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x56ea98
    int64_t v2; // 0x56ea90
    int64_t v3 = v2 - 24; // 0x56eabb
    function_574600(result, v2, *(int64_t *)v3);
    int64_t v4; // bp-25, 0x56ea90
    if (v3 != (int64_t)g36) {
        int32_t * v5 = (int32_t *)(v2 - 8);
        int32_t v6 = *v5;
        *v5 = v6 - 1;
        if (v6 >= 0 != v6 != 0) {
            // 0x56eb08
            function_547e30(v3, &v4, v6);
        }
    }
    // 0x56ead6
    if (v1 == __readfsqword(40)) {
        // 0x56eae9
        return result;
    }
    // 0x56eb23
    __stack_chk_fail();
    int64_t v7 = v3; // 0x56eb3b
    if (v3 != (int64_t)g36) {
        goto lab_0x56eb45;
    } else {
        // 0x56eb3d
        _Unwind_Resume((struct _Unwind_Exception *)&g45);
        v7 = (int64_t)&g45;
        goto lab_0x56eb45;
    }
  lab_0x56eb45:;
    int64_t v8 = v7;
    int32_t v9; // 0x56ea90
    if (g37 == 0) {
        int32_t * v10 = (int32_t *)(v2 - 8); // 0x56eb6a
        int32_t v11 = *v10; // 0x56eb6a
        *v10 = v11 - 1;
        v9 = v11;
    } else {
        int32_t * v12 = (int32_t *)(v8 + 16); // 0x56eb56
        int32_t v13 = *v12; // 0x56eb56
        *v12 = v13 - 1;
        v9 = v13;
    }
    int32_t v14 = v9;
    if (v14 >= 0 != v14 != 0) {
        // 0x56eb5e
        function_547e30(v8, &v4, v14);
    }
    // 0x56eb3d
    _Unwind_Resume((struct _Unwind_Exception *)&g45);
    v7 = (int64_t)&g45;
    goto lab_0x56eb45;
}

// Address range: 0x581463 - 0x581465
int64_t function_581463(void) {
    // 0x581463
    int64_t result; // 0x581463
    return result;
}

// Address range: 0x581466 - 0x58146c
int64_t function_581466(void) {
    // 0x581466
    int64_t v1; // 0x581466
    bool v2; // 0x581466
    return v1 + 0x4ce90000 + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x58146d - 0x581481
int64_t function_58146d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 22 + 4 * a4); // 0x58146d
    *v1 = *v1 - 1;
    int64_t v2; // 0x58146d
    function_582980(v2, v2 & 0xffffffff, a3);
    return function_58133c();
}

// Address range: 0x581481 - 0x5814e3
int64_t function_581481(void) {
    // 0x581481
    int64_t v1; // 0x581481
    int64_t * v2 = (int64_t *)(v1 + 256); // 0x581481
    int64_t v3 = *v2; // 0x581481
    int64_t v4 = v3; // 0x58148c
    if (v3 == 255) {
        // 0x58148e
        *(char *)(v1 + 255) = 0;
        int64_t * v5 = (int64_t *)(v1 + 320); // 0x5814aa
        *v5 = *v5 + 1;
        *v2 = 0;
        v4 = 0;
    }
    // 0x5814bd
    *v2 = v4 + 1;
    *(char *)(v4 + v1) = 45;
    *(char *)(v1 + 264) = 45;
    return function_5810df();
}

// Address range: 0x5814e3 - 0x581534
int64_t function_5814e3(void) {
    // 0x5814e3
    int64_t v1; // 0x5814e3
    int64_t v2 = v1 & 0xffffffff; // 0x5814e6
    function_582a30(v1, v2, v1);
    function_582980(v1, v2, v1);
    function_582a30(v1, v2, v1);
    function_579960(v1, " : ", 3);
    function_582a30(v1, v2, v1);
    return function_57d920();
}

// Address range: 0x581534 - 0x5815b3
int64_t function_581534(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x581534
    int64_t v1; // 0x581534
    int64_t * v2 = (int64_t *)(v1 + 256); // 0x581537
    int64_t v3 = *v2; // 0x58153e
    if (v1 <= (uint64_t)v1) {
        v3 = function_580247();
    }
    int64_t v4 = v3; // 0x58154b
    if (a4 >= 256) {
        v4 = function_580247();
    }
    int64_t v5 = v4; // 0x581554
    if ((char)a3 != 95) {
        v5 = function_580247();
    }
    int64_t v6 = v5; // 0x581562
    if (v5 == 255) {
        // 0x581564
        *(char *)(v1 + 255) = 0;
        int64_t * v7 = (int64_t *)(v1 + 320); // 0x581580
        *v7 = *v7 + 1;
        *v2 = 0;
        v6 = 0;
    }
    // 0x581595
    *v2 = v6 + 1;
    char v8 = a4; // 0x5815a0
    *(char *)(v6 + v1) = v8;
    *(char *)(v1 + 264) = v8;
    return function_580290();
}

// Address range: 0x5815b3 - 0x5815c1
int64_t function_5815b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    if ((int32_t)a5 != 0) {
        function_58130a();
    }
    // 0x5815bc
    return function_57d970();
}

// Address range: 0x5815c1 - 0x5815cd
int64_t function_5815c1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5815c1
    int64_t v1; // 0x5815c1
    *(int64_t *)(v1 + 296) = a3;
    return function_57db22();
}

// Address range: 0x5815cd - 0x5815e6
int64_t function_5815cd(void) {
    // 0x5815cd
    int64_t v1; // 0x5815cd
    function_579960(v1, "false", 5);
    return function_57d920();
}

// Address range: 0x5815e6 - 0x5815f9
int64_t function_5815e6(void) {
    // 0x5815e6
    int64_t v1; // 0x5815e6
    function_582980(v1, v1 & 0xffffffff, v1);
    return function_57f67a();
}

// Address range: 0x5815f9 - 0x581602
int64_t function_5815f9(void) {
    // 0x5815f9
    return function_580b88();
}
