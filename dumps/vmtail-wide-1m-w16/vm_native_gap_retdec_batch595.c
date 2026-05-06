/*
 * Targeted RetDec C for native executable gap queue batch 595.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x276641-0x276841 rank=- name=- kind=- bytes=- uncovered=-
 *   0x276841-0x276a41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x276a41-0x276c41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x276c41-0x276e41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x276e41-0x277041 rank=- name=- kind=- bytes=- uncovered=-
 *   0x475cee-0x475eee rank=- name=- kind=- bytes=- uncovered=-
 *   0x475eee-0x4760ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x4760ee-0x4762ee rank=- name=- kind=- bytes=- uncovered=-
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
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_rsm(void);
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
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
int128_t __asm_vdivpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pcmpgtb(int128_t left, int128_t right);
int256_t __asm_vpcmpeqw(int256_t left, int256_t right);
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

int64_t function_21065c1();
int64_t function_276641(int64_t a1, int64_t a2, int64_t a3);
int64_t function_276678(void);
int64_t function_27667a(int64_t a1, int64_t a2);
int64_t function_27669c(void);
int64_t function_2766a7(void);
int64_t function_2766b4(int64_t a1);
int64_t function_276783(void);
int64_t function_2767d7(int64_t a1, int64_t a2);
int64_t function_2767e0(int64_t a1);
int64_t function_27684b(int64_t a1);
int64_t function_27685f(int64_t a1);
int64_t function_276885(int64_t a1);
int64_t function_2768ce(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_276979(int64_t a1);
int64_t function_27698f(void);
int64_t function_2769ce(int64_t a1);
int64_t function_276a2d(void);
int64_t function_276a86(void);
int64_t function_276ab2(int64_t a1);
int64_t function_276aff(void);
int64_t function_276b0c(void);
int64_t function_276b0e(int64_t a1);
int64_t function_276b13(void);
int64_t function_276b6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_276bc4(int64_t a1);
int64_t function_276bdd(int64_t a1, int64_t a2);
int64_t function_276c40(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_276c69(void);
int64_t function_276c79(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_276cb9(void);
int64_t function_276cc3(void);
int64_t function_276ccf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_276e02(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_276e94(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_276ec3(int64_t a1);
int64_t function_276f4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_276f60(void);
int64_t function_276f69(void);
int64_t function_276f82(void);
int64_t function_276fa4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_276fbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_276fe8(void);
int64_t function_276fed(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27702f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_475cee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_475cfb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_475d0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_475d40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_475d4e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_475d78(int64_t a1);
int64_t function_475d80(void);
int64_t function_475d83(int64_t a1);
int64_t function_475da8(void);
int64_t function_475db3(int64_t a1);
int64_t function_475db9(int64_t a1, int64_t a2);
int64_t function_475dc4(int64_t a1);
int64_t function_475dcc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_475e79(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_475eeb(void);
int64_t function_475f39(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4760cc(void);
int64_t function_47610d(int64_t a1);
int64_t function_476141(void);
int64_t function_47618f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_47622a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_476239(int64_t a1);
int64_t function_476260(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_476289(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_476290(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4d796c4b();
int64_t function_585a0ccb();
int64_t function_734a7dd6();
int64_t function_8377a8a();
int64_t function_fffffffffa6b8a97();
int64_t function_fffffffffb9d7e92();
int64_t unknown_18bdf468();
int64_t unknown_51c80b3();
int64_t unknown_683207e6();
int64_t unknown_68f0bb94();
int64_t unknown_7af324dd();
int64_t unknown_ffffffff8c91d33c();
int64_t unknown_ffffffffb4448988();
int64_t unknown_fffffffff7b62fdb();

// Address range: 0x276641 - 0x276667
int64_t function_276641(int64_t a1, int64_t a2, int64_t a3) {
    char v1 = *(char *)-0x5191a7a7; // 0x276652
    int64_t v2; // 0x276641
    *(char *)-0x5191a7a7 = v1 + (char)((uint64_t)v2 / 256);
    __asm_out(16, (int32_t)(256 * a3 & 0xff00 | a3));
    return unknown_18bdf468();
}

// Address range: 0x276678 - 0x276679
int64_t function_276678(void) {
    // 0x276678
    int64_t result; // 0x276678
    return result;
}

// Address range: 0x27667a - 0x276681
int64_t function_27667a(int64_t a1, int64_t a2) {
    // 0x27667a
    int64_t v1; // 0x27667a
    return v1 & 0xeaf83808 | 0x1507c7f7;
}

// Address range: 0x27669c - 0x27669e
int64_t function_27669c(void) {
    // 0x27669c
    return function_276678();
}

// Address range: 0x2766a7 - 0x2766b0
int64_t function_2766a7(void) {
    char v1 = *(char *)-0xa567750; // 0x2766a9
    int64_t result; // 0x2766a7
    *(char *)-0xa567750 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x2766b4 - 0x2766b7
int64_t function_2766b4(int64_t a1) {
    // 0x2766b4
    int64_t result; // 0x2766b4
    return result;
}

// Address range: 0x276783 - 0x276786
int64_t function_276783(void) {
    // 0x276783
    return unknown_683207e6((int64_t)&g1);
}

// Address range: 0x2767d7 - 0x2767e0
int64_t function_2767d7(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a2 + 0x5c08e61); // 0x2767d7
    *v1 = 64 * *v1;
    int64_t result; // 0x2767d7
    return result;
}

// Address range: 0x2767e0 - 0x2767e6
int64_t function_2767e0(int64_t a1) {
    // 0x2767e0
    return unknown_683207e6(a1);
}

// Address range: 0x27684b - 0x27684d
int64_t function_27684b(int64_t a1) {
    // 0x27684b
    int64_t result; // 0x27684b
    return result;
}

// Address range: 0x27685f - 0x276861
int64_t function_27685f(int64_t a1) {
    // 0x27685f
    int64_t result; // 0x27685f
    return result;
}

// Address range: 0x276885 - 0x27688c
int64_t function_276885(int64_t a1) {
    // 0x276885
    int64_t result; // 0x276885
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x2768ce - 0x2768e5
int64_t function_2768ce(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2768ce
    *(int32_t *)a1 = *(int32_t *)0xd40268ce;
    int16_t v1; // 0x2768ce
    bool v2; // 0x2768ce
    char * v3 = (char *)(unknown_7af324dd(v1, v2 ? 0xd40268ca : 0xd40268d2) + 10); // 0x2768de
    *v3 = *v3 + (char)(a4 / 256);
    return __asm_iretd();
}

// Address range: 0x276979 - 0x27697c
int64_t function_276979(int64_t a1) {
    // 0x276979
    int64_t result; // 0x276979
    return result;
}

// Address range: 0x27698f - 0x276993
int64_t function_27698f(void) {
    // 0x27698f
    int64_t result; // 0x27698f
    return result;
}

// Address range: 0x2769ce - 0x2769d0
int64_t function_2769ce(int64_t a1) {
    // 0x2769ce
    int64_t result; // 0x2769ce
    return result;
}

// Address range: 0x276a2d - 0x276a30
int64_t function_276a2d(void) {
    // 0x276a2d
    int64_t result; // 0x276a2d
    return result;
}

// Address range: 0x276a86 - 0x276a87
int64_t function_276a86(void) {
    // 0x276a86
    int64_t result; // 0x276a86
    return result;
}

// Address range: 0x276ab2 - 0x276ab6
int64_t function_276ab2(int64_t a1) {
    // 0x276ab2
    int64_t result; // 0x276ab2
    return result;
}

// Address range: 0x276aff - 0x276b01
int64_t function_276aff(void) {
    // 0x276aff
    return function_276a86();
}

// Address range: 0x276b0c - 0x276b0d
int64_t function_276b0c(void) {
    // 0x276b0c
    int64_t result; // 0x276b0c
    return result;
}

// Address range: 0x276b0e - 0x276b0f
int64_t function_276b0e(int64_t a1) {
    // 0x276b0e
    int64_t result; // 0x276b0e
    return result;
}

// Address range: 0x276b13 - 0x276b14
int64_t function_276b13(void) {
    // 0x276b13
    int64_t result; // 0x276b13
    return result;
}

// Address range: 0x276b6b - 0x276b78
int64_t function_276b6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 + (int32_t)a3; // 0x276b6b
    int64_t v2 = (int64_t)v1 - 1; // 0x276b6e
    int64_t v3; // 0x276b6b
    if (v1 != 0 && v2 != 0) {
        v3 = function_276b13();
    }
    uint32_t v4 = (int32_t)v2 % 32; // 0x276b70
    int64_t v5; // 0x276b6b
    int32_t v6 = v5; // 0x276b70
    if (v4 != 0) {
        uint32_t v7 = (int32_t)v3; // 0x276b70
        *(int32_t *)v3 = v7 >> 32 - v4 | v7 << v4;
        int64_t v8; // 0x276b6b
        v6 = *(int32_t *)&v8;
    }
    // 0x276b70
    __asm_outsd((int16_t)a3, v6);
    return function_4d796c4b();
}

// Address range: 0x276bc4 - 0x276bc7
int64_t function_276bc4(int64_t a1) {
    // 0x276bc4
    int64_t result; // 0x276bc4
    return result;
}

// Address range: 0x276bdd - 0x276be6
int64_t function_276bdd(int64_t a1, int64_t a2) {
    char * v1 = (char *)(8 * a1 - 0x3d3db67f); // 0x276bdd
    *v1 = -1 - *v1;
    int64_t result; // 0x276bdd
    return result;
}

// Address range: 0x276c40 - 0x276c4d
int64_t function_276c40(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x276c40
    float80_t v1; // 0x276c40
    *(int16_t *)(a3 + 0x8657a24) = (int16_t)v1;
    int64_t v2; // 0x276c40
    return (int64_t)*(int32_t *)&v2;
}

// Address range: 0x276c69 - 0x276c6b
int64_t function_276c69(void) {
    // 0x276c69
    int64_t result; // 0x276c69
    return result;
}

// Address range: 0x276c79 - 0x276c9d
int64_t function_276c79(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3; // 0x276c79
    float80_t v4; // 0x276c79
    *(float64_t *)(4 * a2 + 11 + v3) = (float64_t)v4;
    __asm_out_133(1, (char)v3);
    int64_t result = unknown_68f0bb94(); // 0x276c8e
    *(char *)v2 = *(char *)&v2 + (char)(v3 / 256);
    *(char *)v1 = *(char *)&v1 + (char)((a4 + 0xffff) / 256);
    return result;
}

// Address range: 0x276cb9 - 0x276cba
int64_t function_276cb9(void) {
    // 0x276cb9
    int64_t result; // 0x276cb9
    return result;
}

// Address range: 0x276cc3 - 0x276ccc
int64_t function_276cc3(void) {
    char v1 = *(char *)0x5fe753ca; // 0x276cc3
    int64_t result; // 0x276cc3
    *(char *)0x5fe753ca = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x276ccf - 0x276daf
int64_t function_276ccf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_fffffffff7b62fdb(); // 0x276cd5
    char * v2 = (char *)v1; // 0x276cdc
    *v2 = *v2 + (char)v1;
    int32_t * v3 = (int32_t *)(a1 - 101); // 0x276ce1
    int64_t v4; // 0x276ccf
    *v3 = *v3 + (int32_t)v4;
    int32_t * v5 = (int32_t *)(v4 - 52); // 0x276ce4
    *v5 = *v5 - (int32_t)a1;
    float80_t v6; // 0x276ccf
    *(int16_t *)(a4 - 0x4aa0e582) = (int16_t)v6;
    return __asm_sti();
}

// Address range: 0x276e02 - 0x276e20
int64_t function_276e02(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 - 0x5e1b17ac + 4 * a2); // 0x276e02
    uint32_t v2 = *v1; // 0x276e02
    int64_t v3; // 0x276e02
    uint32_t v4 = v2 + (int32_t)v3; // 0x276e02
    *v1 = v4;
    unsigned char v5 = (char)a4; // 0x276e0a
    unsigned char v6 = *(char *)(v3 + 30) + v5; // 0x276e0a
    bool v7 = v4 < v2 ? v6 + (char)(v4 < v2) <= v5 : v6 < v5; // 0x276e0a
    return v3 + 0x92d288a8 + (int64_t)v7 & 0xffffffff;
}

// Address range: 0x276e94 - 0x276e9c
int64_t function_276e94(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x276e94
    int64_t result; // 0x276e94
    return result;
}

// Address range: 0x276ec3 - 0x276ec4
int64_t function_276ec3(int64_t a1) {
    // 0x276ec3
    int64_t result; // 0x276ec3
    return result;
}

// Address range: 0x276f4b - 0x276f4f
int64_t function_276f4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x276f4b
    return a4 & 0xffffffff;
}

// Address range: 0x276f60 - 0x276f61
int64_t function_276f60(void) {
    // 0x276f60
    int64_t result; // 0x276f60
    return result;
}

// Address range: 0x276f69 - 0x276f6a
int64_t function_276f69(void) {
    // 0x276f69
    int64_t result; // 0x276f69
    return result;
}

// Address range: 0x276f82 - 0x276f89
int64_t function_276f82(void) {
    // 0x276f82
    unknown_ffffffffb4448988();
    return function_276f69();
}

// Address range: 0x276fa4 - 0x276fb7
int64_t function_276fa4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x276fa4
    __asm_hlt();
    bool v1; // 0x276fa4
    if (a4 != 1 == v1) {
        function_276f60();
    }
    // 0x276fad
    unknown_51c80b3();
    return function_8377a8a();
}

// Address range: 0x276fbf - 0x276fd4
int64_t function_276fbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 75); // 0x276fbf
    int64_t v2; // 0x276fbf
    *v1 = *v1 + (int32_t)v2;
    int64_t v3 = -0x1784f628; // bp-8, 0x276fc7
    int32_t * v4 = (int32_t *)(a4 - 8); // 0x276fcc
    *v4 = *v4 + (int32_t)(int64_t)&v3;
    return function_fffffffffb9d7e92();
}

// Address range: 0x276fe8 - 0x276fed
int64_t function_276fe8(void) {
    // 0x276fe8
    return function_21065c1();
}

// Address range: 0x276fed - 0x276ffe
int64_t function_276fed(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_iretd(); // 0x276fee
    float80_t v2; // 0x276fed
    *(int32_t *)a1 = (int32_t)v2;
    int64_t v3; // 0x276fed
    __asm_outsb((int16_t)a3, *(char *)&v3);
    return (v1 & 0xffffff17 ^ 0x1089aec) + a2 & 0xffffffff;
}

// Address range: 0x27702f - 0x277040
int64_t function_27702f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x27702f
    if (v1 != 0) {
        int64_t v2; // 0x27702f
        uint32_t v3 = (int32_t)v2;
        *(int32_t *)v2 = v3 >> 32 - v1 | v3 << v1;
    }
    int64_t v4 = unknown_ffffffff8c91d33c() & -256; // 0x27703b
    return v4 | (int64_t)(*(char *)((v4 | 104) - 69) | 104);
}

// Address range: 0x475cee - 0x475cfa
int64_t function_475cee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x475cee
    return (uint64_t)(a5 + 32) % 256 | a5 & -256;
}

// Address range: 0x475cfb - 0x475d0d
int64_t function_475cfb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x475cfb
    int64_t v1; // 0x475cfb
    bool v2; // 0x475cfb
    return v1 + 0xb2fa219 + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x475d0d - 0x475d2a
int64_t function_475d0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 25); // 0x475d0e
    int64_t v2; // 0x475d0d
    *v1 = *v1 & (int32_t)v2;
    *(int32_t *)a1 = *(int32_t *)a5;
    bool v3; // 0x475d0d
    int64_t v4 = v3 ? -4 : 4; // 0x475d1c
    *(int32_t *)a4 = (int32_t)a3;
    int64_t v5; // 0x475d0d
    return function_fffffffffa6b8a97(v4 + a1, v4 + a5, *(int32_t *)&v5);
}

// Address range: 0x475d40 - 0x475d4c
int64_t function_475d40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x475d40
    int64_t result; // 0x475d40
    return result;
}

// Address range: 0x475d4e - 0x475d5a
int64_t function_475d4e(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = __asm_hlt(); // 0x475d4e
    unsigned char v2 = *(char *)(a2 + 110); // 0x475d4f
    int32_t * v3 = (int32_t *)(a2 - 106); // 0x475d52
    int64_t v4; // 0x475d4e
    *v3 = *v3 - (int32_t)v4 + (int32_t)(v2 > (char)(v1 / 256));
    int64_t v5; // 0x475d4e
    return (int64_t)*(int32_t *)&v5;
}

// Address range: 0x475d78 - 0x475d7b
int64_t function_475d78(int64_t a1) {
    // 0x475d78
    int64_t result; // 0x475d78
    return result;
}

// Address range: 0x475d80 - 0x475d82
int64_t function_475d80(void) {
    // 0x475d80
    int64_t result; // 0x475d80
    return result;
}

// Address range: 0x475d83 - 0x475d99
int64_t function_475d83(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 0x62169a47); // 0x475d83
    int64_t v2; // 0x475d83
    *v1 = *v1 + (int32_t)v2;
    int32_t v3 = __asm_in(50); // 0x475d89
    int64_t v4; // 0x475d83
    *(int32_t *)v4 = *(int32_t *)&v4 | (int32_t)a1;
    return (int64_t)*(char *)-0x13e4ef01b1a0dc1f | (int64_t)(v3 & -256);
}

// Address range: 0x475da8 - 0x475da9
int64_t function_475da8(void) {
    // 0x475da8
    int64_t result; // 0x475da8
    return result;
}

// Address range: 0x475db3 - 0x475db9
int64_t function_475db3(int64_t a1) {
    // 0x475db3
    return function_585a0ccb(a1);
}

// Address range: 0x475db9 - 0x475dc4
int64_t function_475db9(int64_t a1, int64_t a2) {
    // 0x475db9
    int64_t result; // 0x475db9
    return result;
}

// Address range: 0x475dc4 - 0x475dc7
int64_t function_475dc4(int64_t a1) {
    // 0x475dc4
    int64_t result; // 0x475dc4
    return result;
}

// Address range: 0x475dcc - 0x475e4f
int64_t function_475dcc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x475dcc
    int64_t v1; // 0x475dcc
    int16_t v2 = v1; // 0x475dcc
    int16_t v3 = (int16_t)a2 % 256; // 0x475dcc
    int64_t v4 = (v1 & 0xffff0000 | (int64_t)(v2 / v3 % 256) | (int64_t)(256 * (v2 % v3))) ^ 0x367174d4; // 0x475dcf
    char v5 = *(char *)(v1 + 71); // 0x475de1
    unsigned char v6 = (char)v4; // 0x475de9
    unsigned char v7 = v6 + 4; // 0x475de9
    unsigned char v8 = llvm_ctpop_i8(v7); // 0x475de9
    int64_t v9 = (v4 & 0xffffff00 | 0x100000000 * a3 | (int64_t)v7) / (a2 & 0xffffffff) & 0xffffff00 | (int64_t)__asm_in_135(77); // 0x475df1
    if (v8 % 2 == 0) {
        v9 = function_475da8();
    }
    uint64_t v10 = a4 & 0xffffff00 | (int64_t)(v5 & (char)a4) | v4;
    float80_t v11; // 0x475dcc
    __writegsdword(v9, (int32_t)v11);
    uint32_t v12 = (int32_t)v9; // 0x475e03
    uint32_t v13 = (v6 > 251 ? 0xd53dcab : 0xd53dcaa) + v12; // 0x475e03
    int64_t result = v13; // 0x475e03
    *(char *)(a2 - 0x35a7b754) = (char)(v10 / 256);
    if ((v13 + (int32_t)(v6 > 251) & (v12 ^ -0x80000000)) >= 0) {
        // 0x475e4d
        return result;
    }
    int32_t * v14 = (int32_t *)v10; // 0x475e10
    *v14 = *v14 + (v6 > 251 ? v13 <= v12 : v12 > 0xf2ac2355 ? 0x3c110eaa : 0x3c110ea9);
    return result;
}

// Address range: 0x475e79 - 0x475ea9
int64_t function_475e79(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int16_t v1 = a3; // 0x475e8a
    int64_t v2; // 0x475e79
    __asm_out_134(v1, (char)v2);
    __asm_in_136(v1);
    float80_t v3; // 0x475e79
    *(float80_t *)(a1 + 0x6f4fe20b) = __asm_fbstp(v3);
    return (int64_t)*(int32_t *)-0xe068ebb00f9c3a2;
}

// Address range: 0x475eeb - 0x475eec
int64_t function_475eeb(void) {
    // 0x475eeb
    int64_t result; // 0x475eeb
    return result;
}

// Address range: 0x475f39 - 0x4760bb
int64_t function_475f39(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x475f39
    int64_t v1; // 0x475f39
    int64_t v2 = v1;
    int64_t v3; // 0x475f39
    uint64_t v4 = (v3 + 92) % 256; // 0x475f3b
    int64_t v5 = v3 & -256; // 0x475f3b
    int32_t * v6 = (int32_t *)(a4 + 0x223e81cb + (v4 | v5)); // 0x475f3d
    uint32_t v7 = *v6; // 0x475f3d
    uint32_t v8 = (int32_t)a1; // 0x475f3d
    *v6 = v7 - v8;
    int64_t result = v5 | (int64_t)*(char *)(v4 + v1); // 0x475f44
    if (v7 >= v8) {
        char * v9 = (char *)(v2 - 0x4b1ffdcd + 4 * v2); // 0x475f48
        *v9 = *v9 - 20;
        return (result & 0xffffffff) * (v2 & 0xffffffff) & 0xffffffff;
    }
    if (a4 == 1) {
        // 0x475f8c
        return result;
    }
    // 0x475fce
    return result + 0xe2b32fe0 & 0xffffffff;
}

// Address range: 0x4760cc - 0x4760d3
int64_t function_4760cc(void) {
    // 0x4760cc
    return function_734a7dd6();
}

// Address range: 0x47610d - 0x476110
int64_t function_47610d(int64_t a1) {
    // 0x47610d
    int64_t result; // 0x47610d
    return result;
}

// Address range: 0x476141 - 0x476142
int64_t function_476141(void) {
    // 0x476141
    int64_t result; // 0x476141
    return result;
}

// Address range: 0x47618f - 0x4761ca
int64_t function_47618f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x47618f
    *(char *)a3 = (char)(a4 / 256) + (char)a3;
    int64_t result; // 0x47618f
    return result;
}

// Address range: 0x47622a - 0x47622e
int64_t function_47622a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47622a
    int64_t result; // 0x47622a
    *(int32_t *)a4 = (int32_t)result - 4;
    return result;
}

// Address range: 0x476239 - 0x476242
int64_t function_476239(int64_t a1) {
    // 0x476239
    int64_t v1; // 0x476239
    unsigned char v2 = (char)v1; // 0x476239
    bool v3; // 0x476239
    unsigned char v4 = v2 - 96 + (char)v3; // 0x476239
    bool v5 = v3 ? v4 <= v2 : v2 > 95; // 0x476239
    uint32_t v6 = (int32_t)(v1 & 0xffffff00 | (int64_t)v4); // 0x47623b
    uint32_t v7 = v5 ? 0x2c80f9af : 0x2c80f9ae; // 0x47623b
    int32_t v8 = v6 - v7; // 0x47623b
    return 256 * (64 * (int64_t)(v8 == 0) | (int64_t)(v5 | v7 > v6) | 128 * (int64_t)(v8 < 0) | 16 * (int64_t)((int32_t)v5 - v7 % 16 + v6 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8((char)v8) % 2 == 0)) | (int64_t)(v8 & -0xff01 | 512);
}

// Address range: 0x476260 - 0x47627b
int64_t function_476260(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x476260
    int64_t v1; // 0x476260
    char * v2 = (char *)(v1 + 0xbca665e); // 0x476260
    *v2 = *v2 + (char)(a3 / 256);
    char v3 = __asm_in_135(125); // 0x476266
    uint64_t v4 = v1 & -256 | (int64_t)v3; // 0x476266
    char * v5 = (char *)(2 * a2 + 66 + v4); // 0x476268
    *v5 = (char)(v4 / 256);
    __asm_out_134((int16_t)a3, v3);
    return v4 & -0xff01 | 256 * (int64_t)*v5;
}

// Address range: 0x476289 - 0x476290
int64_t function_476289(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x476289
    int64_t result; // 0x476289
    return result;
}

// Address range: 0x476290 - 0x4762bb
int64_t function_476290(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x476290
    int64_t v1; // 0x476290
    int64_t result = v1 & 0xffffffff; // 0x476296
    bool v2; // 0x476290
    int64_t v3 = v2 ? -4 : 4; // 0x476296
    __asm_psllq(v1, *(int64_t *)(a2 + 122 + v3));
    char * v4 = (char *)(a1 - 0x3bd184ab + v3 + (v2 ? -1 : 1)); // 0x4762a4
    unsigned char v5 = *v4; // 0x4762a4
    unsigned char v6 = v5 + (char)((int32_t)v1 / 256); // 0x4762a4
    *v4 = v6;
    char * v7 = (char *)(result - 45); // 0x4762aa
    unsigned char v8 = *v7; // 0x4762aa
    unsigned char v9 = (char)a4 % 32; // 0x4762aa
    bool v10 = v6 < v5; // 0x4762aa
    if (v9 != 0) {
        unsigned char v11 = v8 >> 8 - v9 | v8 << v9; // 0x4762aa
        *v7 = v11;
        v10 = v11 % 2 != 0;
    }
    if (!v10) {
        // 0x4762f0
        return result;
    }
    // 0x4762b0
    return a3 & 0x1e3f1360;
}
