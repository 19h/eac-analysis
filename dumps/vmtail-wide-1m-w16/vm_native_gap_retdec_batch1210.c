/*
 * Targeted RetDec C for native executable gap queue batch 1210.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x13ef68-0x13f068 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13f268-0x13f468 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13f468-0x13f668 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13fa68-0x13fc68 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13fc68-0x13fe68 rank=- name=- kind=- bytes=- uncovered=-
 *   0x28b2cb-0x28b4cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x28b6cb-0x28b8cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x28bacb-0x28bccb rank=- name=- kind=- bytes=- uncovered=-
 *   0x4561e3-0x4563e3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4564e3-0x4565e3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4565e3-0x4567e3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4567e3-0x4569e3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4569e3-0x456be3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x456be3-0x456de3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x456de3-0x456fe3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x456fe3-0x4571e3 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
extern int g6;
extern int g7;
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

int64_t function_130f77f7();
int64_t function_13ef68(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_13efde(void);
int64_t function_13efe5(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_13effb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13f016(void);
int64_t function_13f02b(void);
int64_t function_13f054(int64_t a1, int64_t a2, int64_t a3);
int64_t function_13f268(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13f2f4(int64_t a1);
int64_t function_13f388(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13f3c0(void);
int64_t function_13f3db(void);
int64_t function_13f449(void);
int64_t function_13f44f(int64_t a1);
int64_t function_13f4c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_13f567(void);
int64_t function_13f5a7(void);
int64_t function_13f5ad(int64_t a1, int64_t a2, int64_t a3);
int64_t function_13f5bf(void);
int64_t function_13f5ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13f615(void);
int64_t function_13f63f(int64_t a1);
int64_t function_13fa12();
int64_t function_13fa68(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_13faff(void);
int64_t function_13fb65(void);
int64_t function_13fb6e(void);
int64_t function_13fb9b(void);
int64_t function_13fb9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13fbae(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13fbca(int64_t a1);
int64_t function_13fbda(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_13fcfb(void);
int64_t function_13fd24(void);
int64_t function_13fd3f(int64_t a1);
int64_t function_13fd58(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13fe44(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13fe4a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_28b2cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_28b490(void);
int64_t function_28b6cb(void);
int64_t function_28b6cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_28b8a6(void);
int64_t function_28b8a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28b8ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_28b8b4(int64_t a1);
int64_t function_28bacb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_28bc9d(void);
int64_t function_4561bc();
int64_t function_4561e3(void);
int64_t function_4561eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45621e(int64_t a1);
int64_t function_45622c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_456259(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4562af(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_4562b4(void);
int64_t function_4562bf(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_456390(void);
int64_t function_4563cd(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_4564b2();
int64_t function_4564e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4565ba(int64_t a1);
int64_t function_4565bd(int64_t a1);
int64_t function_4565c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4565d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4566ed(void);
int64_t function_456702(int64_t a1);
int64_t function_45677e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4567bd(void);
int64_t function_4567f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4568b6(int64_t a1);
int64_t function_4568d3(int64_t a1, int64_t a2);
int64_t function_4568fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_456942(int64_t a1, int64_t a2);
int64_t function_456994(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45699a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_456a07(int64_t a1);
int64_t function_456a0d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t result, int64_t a6);
int64_t function_456ac2(void);
int64_t function_456ad9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_456ae6(int64_t a1);
int64_t function_456b42(void);
int64_t function_456b68(int64_t a1);
int64_t function_456b92(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_456c35(void);
int64_t function_456c78(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_456cb2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_456d31(int64_t a1, int64_t a2);
int64_t function_456d60(int64_t a1);
int64_t function_456d6a(void);
int64_t function_456d71(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_456d80(int64_t a1);
int64_t function_456d8c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_456e9c(void);
int64_t function_456ecd(void);
int64_t function_456f0a(void);
int64_t function_456f0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_456f32(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_456f5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_456f6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_456f7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_456fd8(int64_t a1);
int64_t function_456fe3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_456ff9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4570b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_4570e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4570f7(int64_t a1);
int64_t function_457148(void);
int64_t function_457166(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_5230c820();
int64_t function_6bb5a262();
int64_t function_73b7f5ca();
int64_t function_78372e46();
int64_t function_c46f6b5();
int64_t function_caf2a();
int64_t function_ffffffff995eed59();
int64_t function_ffffffff9e9186c3();
int64_t function_ffffffffb0b473f8();
int64_t function_ffffffffceb80142();
int64_t function_ffffffffefb6a147();
int64_t unknown_1532c827();
int64_t unknown_3e637e6b();
int64_t unknown_3ea61bfc();
int64_t unknown_3f0a459f();
int64_t unknown_40e291a4();
int64_t unknown_4214e0e7();
int64_t unknown_64c99fc1();
int64_t unknown_6684cc60();
int64_t unknown_68c07cd9();
int64_t unknown_9d1b86();
int64_t unknown_e3ad81();
int64_t unknown_ffffffff8b3f0c1a();
int64_t unknown_ffffffffad83768e();
int64_t unknown_ffffffffcdfc4a22();

// Address range: 0x13ef68 - 0x13efb6
int64_t function_13ef68(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char v1 = (char)(a3 / 128) & -2; // 0x13ef68
    int64_t v2 = 256 * (int64_t)v1 | a3 & -0xff01; // 0x13ef68
    int64_t v3; // 0x13ef68
    if (v1 < 0) {
        // 0x13efae
        *(int32_t *)a1 = __asm_insd((int16_t)v2);
        return v3 & 0x11406100 | 5;
    }
    uint32_t v4 = (int32_t)a4 % 32; // 0x13ef6d
    if (v4 != 0) {
        uint32_t v5 = (int32_t)v3;
        *(int32_t *)(v3 & 0xffffffff) = v5 >> 32 - v4 | v5 << v4;
    }
    __asm_out(-96, (int32_t)v3);
    uint32_t v6 = *(int32_t *)-0x40fec2df18ff6854; // 0x13ef78
    int64_t result = v6; // 0x13ef78
    __asm_out_133((int16_t)(*(int32_t *)result + (int32_t)v2), v6);
    return result;
}

// Address range: 0x13efde - 0x13efdf
int64_t function_13efde(void) {
    // 0x13efde
    int64_t result; // 0x13efde
    return result;
}

// Address range: 0x13efe5 - 0x13effa
int64_t function_13efe5(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x13efe5
    int64_t v1; // 0x13efe5
    int16_t v2 = v1; // 0x13efea
    int16_t v3 = (int16_t)*(char *)(v1 - 80); // 0x13efea
    char * v4 = (char *)(v1 & -0x10000 | (int64_t)(v2 / v3 % 256) | (int64_t)(256 * (v2 % v3))); // 0x13efed
    *v4 = *v4 + (char)(a3 / 256);
    return function_c46f6b5(0xb31d04);
}

// Address range: 0x13effb - 0x13f013
int64_t function_13effb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 0x20b2161c); // 0x13effb
    *v1 = *v1 + (int32_t)a3;
    int32_t * v2 = (int32_t *)(a4 + 0x68f465); // 0x13f001
    int64_t v3; // 0x13effb
    *v2 = *v2 ^ (int32_t)v3;
    *(char *)-0x10bcaef2 = *(char *)-0x10bcaef2 + (char)(v3 / 256);
    return v3 & 0x2aa98a97 | 0xd5567568;
}

// Address range: 0x13f016 - 0x13f01e
int64_t function_13f016(void) {
    // 0x13f016
    int64_t result; // 0x13f016
    return result;
}

// Address range: 0x13f02b - 0x13f02e
int64_t function_13f02b(void) {
    // 0x13f02b
    int64_t result; // 0x13f02b
    return result;
}

// Address range: 0x13f054 - 0x13f059
int64_t function_13f054(int64_t a1, int64_t a2, int64_t a3) {
    // 0x13f054
    int64_t result; // 0x13f054
    *(int32_t *)a1 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x13f268 - 0x13f2df
int64_t function_13f268(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13f268
    int64_t result; // 0x13f268
    return result;
}

// Address range: 0x13f2f4 - 0x13f2f5
int64_t function_13f2f4(int64_t a1) {
    // 0x13f2f4
    int64_t result; // 0x13f2f4
    return result;
}

// Address range: 0x13f388 - 0x13f3b8
int64_t function_13f388(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13f388
    *(int32_t *)a1 = (int32_t)unknown_ffffffffad83768e();
    bool v1; // 0x13f388
    int64_t v2 = v1 ? -4 : 4; // 0x13f38d
    int64_t v3 = v2 + a1; // 0x13f38d
    int32_t * v4 = (int32_t *)(a3 + 0x70810fd); // 0x13f392
    int64_t v5; // 0x13f388
    *v4 = *v4 + (int32_t)v5;
    int32_t * v6 = (int32_t *)(a2 + 0x707a11db); // 0x13f398
    *v6 = *v6 | (int32_t)v5;
    int64_t v7 = unknown_40e291a4(v3); // 0x13f39e
    int64_t v8 = v7 + 0x449b858e; // 0x13f3a3
    char v9 = *(char *)-0x17eb8c51; // 0x13f3a8
    *(char *)-0x17eb8c51 = v9 + 1 + (char)((int32_t)v7 < 0xbb647a72);
    *(int32_t *)v3 = (int32_t)v8;
    int64_t v10; // 0x13f388
    *(char *)a3 = *(char *)&v10 + (char)v8;
    return function_78372e46(v3 + v2);
}

// Address range: 0x13f3c0 - 0x13f3c3
int64_t function_13f3c0(void) {
    // 0x13f3c0
    int64_t result; // 0x13f3c0
    return result;
}

// Address range: 0x13f3db - 0x13f3e2
int64_t function_13f3db(void) {
    // 0x13f3db
    return function_73b7f5ca();
}

// Address range: 0x13f449 - 0x13f44b
int64_t function_13f449(void) {
    // 0x13f449
    int64_t result; // 0x13f449
    return result;
}

// Address range: 0x13f44f - 0x13f453
int64_t function_13f44f(int64_t a1) {
    // 0x13f44f
    int64_t result; // 0x13f44f
    return result;
}

// Address range: 0x13f4c1 - 0x13f541
int64_t function_13f4c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x13f4c1
    bool v2; // 0x13f4c1
    if (v1 != 0) {
        *(int32_t *)0x3faedbc8 = *(int32_t *)0x3faedbc8 >> v1;
        bool v3; // 0x13f4c1
        v2 = v1 != 1 == v3;
    }
    __asm_wait(a1, a2);
    char * v4 = (char *)(a2 - 0x288028e4); // 0x13f4cb
    char v5 = *v4; // 0x13f4cb
    unsigned char v6 = (char)a4 % 32; // 0x13f4cb
    bool v7 = v2; // 0x13f4cb
    int64_t v8; // 0x13f4c1
    bool v9 = (int16_t)v8 < 0; // 0x13f4cb
    if (v6 != 0) {
        char v10 = v5 << v6; // 0x13f4cb
        *v4 = v10;
        v7 = v6 == 1 ? (v10 ^ v5 << v6 - 1) < 0 : v2;
        v9 = v10 < 0;
    }
    if (v9 != v7) {
        int64_t * v11 = (int64_t *)(a2 - 2); // 0x13f532
        *v11 = *v11 ^ -113;
        return __asm_int1((int64_t)&g7);
    }
    int64_t result = unknown_68c07cd9(); // 0x13f4d3
    char * v12 = (char *)(a1 + 62); // 0x13f4d8
    *v12 = *v12 + (char)a3;
    *(char *)0x66a38be2 = *(char *)0x66a38be2 + (char)(a5 / 256);
    return result;
}

// Address range: 0x13f567 - 0x13f569
int64_t function_13f567(void) {
    // 0x13f567
    int64_t v1; // 0x13f567
    return function_13f5ca(v1, v1, v1, v1);
}

// Address range: 0x13f5a7 - 0x13f5a8
int64_t function_13f5a7(void) {
    // 0x13f5a7
    int64_t result; // 0x13f5a7
    return result;
}

// Address range: 0x13f5ad - 0x13f5b3
int64_t function_13f5ad(int64_t a1, int64_t a2, int64_t a3) {
    // 0x13f5ad
    int64_t result; // 0x13f5ad
    return result;
}

// Address range: 0x13f5bf - 0x13f5c3
int64_t function_13f5bf(void) {
    // 0x13f5bf
    int64_t result; // 0x13f5bf
    return result;
}

// Address range: 0x13f5ca - 0x13f5ee
int64_t function_13f5ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13f5ca
    int64_t v1; // 0x13f5ca
    bool v2; // 0x13f5ca
    *(int32_t *)a1 = (int32_t)a1 - (int32_t)v1 + (int32_t)v2;
    *(char *)0x26aff4d3 = *(char *)0x26aff4d3 + (char)(v1 / 256);
    *(int32_t *)0x79a3f830a6f40a = (int32_t)v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x13f5dc
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)(2 * a3 + 0x13d00d3 + v1); // 0x13f5dc
        uint32_t v5 = *v4; // 0x13f5dc
        *v4 = v5 >> v3 | v5 << 32 - v3;
    }
    uint64_t v6 = __asm_wait(a1, a2); // 0x13f5e3
    float80_t v7; // 0x13f5ca
    *(float32_t *)a1 = (float32_t)v7;
    unsigned char v8 = *(char *)(v6 - 19); // 0x13f5e6
    return v6 & 0x3b7f0000 | v6 % 256 * (int64_t)v8 | 0xc4801adc;
}

// Address range: 0x13f615 - 0x13f61c
int64_t function_13f615(void) {
    // 0x13f615
    return function_13f5a7();
}

// Address range: 0x13f63f - 0x13f642
int64_t function_13f63f(int64_t a1) {
    // 0x13f63f
    int64_t result; // 0x13f63f
    return result;
}

// Address range: 0x13fa68 - 0x13fa96
int64_t function_13fa68(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x13fa68
    *(int32_t *)-0x60511683 = *(int32_t *)-0x60511683 ^ (int32_t)a1;
    int64_t v1 = __asm_wait(a6, 0xf5f14030); // 0x13fa7e
    int64_t v2; // 0x13fa68
    if (!((a4 == 1 | *(char *)(v2 - 0x4823ce26) == (char)v1))) {
        function_13fa12();
    }
    // 0x13fa87
    return unknown_e3ad81();
}

// Address range: 0x13faff - 0x13fb00
int64_t function_13faff(void) {
    // 0x13faff
    int64_t result; // 0x13faff
    return result;
}

// Address range: 0x13fb65 - 0x13fb6b
int64_t function_13fb65(void) {
    // 0x13fb65
    return unknown_3e637e6b();
}

// Address range: 0x13fb6e - 0x13fb6f
int64_t function_13fb6e(void) {
    // 0x13fb6e
    int64_t result; // 0x13fb6e
    return result;
}

// Address range: 0x13fb9b - 0x13fb9c
int64_t function_13fb9b(void) {
    // 0x13fb9b
    int64_t result; // 0x13fb9b
    return result;
}

// Address range: 0x13fb9e - 0x13fbae
int64_t function_13fb9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13fb9e
    bool v1; // 0x13fb9e
    int64_t v2 = v1 ? -1 : 1; // 0x13fba3
    int64_t v3; // 0x13fb9e
    int64_t v4 = 256 * v3 & 0xff00 | a4 & -0xff01; // 0x13fba4
    int32_t * v5 = (int32_t *)(a1 - 0xa3c352a); // 0x13fba6
    *v5 = *v5 + (int32_t)v4;
    int64_t result = function_13fbda(a1, v2 + a2, a3, v4, 0x3d3efa8c, (int64_t)&g7, (int64_t)&g7); // 0x13fbac
    return result;
}

// Address range: 0x13fbae - 0x13fbc7
int64_t function_13fbae(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13fbae
    int64_t v1; // 0x13fbae
    uint64_t v2 = (0x100000000 * v1 >> 32) * (int64_t)*(int32_t *)(a1 - 95); // 0x13fbae
    uint64_t v3 = v2 / 0x100000000; // 0x13fbae
    int32_t v4 = v3; // 0x13fbae
    bool v5; // 0x13fbae
    if (!v5 && v4 != 0 != v4 != -1) {
        function_13fb9b();
    }
    // 0x13fbb3
    *(char *)v3 = (char)(v2 / 0x10000000000);
    int32_t * v6 = (int32_t *)(v1 + 88); // 0x13fbb7
    *v6 = (int32_t)v1 + (int32_t)a2 + *v6;
    return unknown_64c99fc1();
}

// Address range: 0x13fbca - 0x13fbcd
int64_t function_13fbca(int64_t a1) {
    // 0x13fbca
    int64_t result; // 0x13fbca
    return result;
}

// Address range: 0x13fbda - 0x13fca2
int64_t function_13fbda(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x13fbda
    int64_t v1; // 0x13fbda
    uint64_t v2 = v1;
    int64_t v3; // 0x13fbda
    int64_t result; // 0x13fbda
    bool v4; // 0x13fbda
    if (!v4) {
        int64_t v5 = function_13fb6e(); // 0x13fbda
        result = v5;
        v3 = v5;
    }
    uint32_t v6 = (int32_t)v3 >> 31; // 0x13fbdf
    *(char *)a1 = (char)(v2 / 256) + (char)a1;
    char * v7 = (char *)(result + 0x2c01e852); // 0x13fbe2
    *v7 = *v7 | (char)(v6 / 256);
    int64_t v8 = result;
    *(int32_t *)v8 = *(int32_t *)&result - (int32_t)v8;
    int64_t v9 = result;
    *(int32_t *)a1 = (int32_t)(v9 - 256 * v2 & 0xff00 | v9 & 0xffff00ff);
    int64_t v10 = (v4 ? -4 : 4) + a1; // 0x13fbee
    unknown_3ea61bfc(v10);
    unknown_4214e0e7();
    int32_t v11 = *(int32_t *)(a4 - 0x17ff0c00); // 0x13fc00
    int32_t v12 = (int32_t)(-1 - (char)v9 < (char)v6) + (int32_t)a4 - v11; // 0x13fc00
    int32_t * v13 = (int32_t *)(int64_t)v6; // 0x13fc06
    *v13 = *v13 + 0x6b6a434;
    result = unknown_ffffffff8b3f0c1a();
    if ((a6 & 64) != 0 || v12 == 1) {
        // 0x13fc1e
        int64_t v14; // 0x13fbda
        *(int32_t *)v14 = *(int32_t *)&v14 + (int32_t)v10;
        return result;
    }
    int64_t v15 = (a6 & (int64_t)&g1) == 0 ? 1 : -1; // 0x13fc98
    return unknown_3f0a459f(v10 + v15, v15 + a2) & -0x10000 | (int64_t)((v12 + 0xffff) % 0x10000);
}

// Address range: 0x13fcfb - 0x13fcfc
int64_t function_13fcfb(void) {
    // 0x13fcfb
    int64_t result; // 0x13fcfb
    return result;
}

// Address range: 0x13fd24 - 0x13fd26
int64_t function_13fd24(void) {
    // 0x13fd24
    return function_13fcfb();
}

// Address range: 0x13fd3f - 0x13fd51
int64_t function_13fd3f(int64_t a1) {
    // 0x13fd3f
    int64_t v1; // 0x13fd3f
    int64_t v2 = v1 + 0x93680e; // 0x13fd3f
    __asm_out(96, (int32_t)v2);
    return v2 & 0xffffffff;
}

// Address range: 0x13fd58 - 0x13fe26
int64_t function_13fd58(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x13fd58
    int64_t v1; // 0x13fd58
    int64_t v2 = v1 + 0x81d407f0; // 0x13fd58
    int64_t v3 = v2 & 0xffffffff; // 0x13fd58
    int64_t v4 = v3; // 0x13fd5d
    int64_t v5; // 0x13fd58
    if ((int32_t)v1 <= 0x7e2bf80f) {
        char * v6 = (char *)v3; // 0x13fd66
        *v6 = *v6 + 2 * (char)v2;
        uint64_t v7 = unknown_9d1b86(); // 0x13fd80
        int32_t v8 = v7; // 0x13fd85
        char v9 = v7 / 256; // 0x13fd8a
        int32_t v10 = __asm_in_135((int16_t)a3); // 0x13fd92
        if ((v9 & 64) != 0 || v9 < 0 != ((v8 + 0x20b00eff ^ v8) & (v8 ^ -0x80000000)) < 0) {
            // 0x13fe0f
            __asm_out_136(-24, (char)v10);
            int32_t * v11 = (int32_t *)(a2 - 107); // 0x13fe15
            *v11 = *v11 + (int32_t)a3;
            unknown_ffffffffcdfc4a22();
            return unknown_1532c827();
        }
        // 0x13fd9b
        v5 = v1 + 8;
        v4 = v10;
    }
    int32_t * v12 = (int32_t *)(a2 + 0x3d01e854); // 0x13fde3
    *v12 = *v12 + -24 * *(int32_t *)(v4 & 0xffffffff);
    int32_t * v13 = (int32_t *)(v1 - 110); // 0x13fde9
    *v13 = *v13 + (int32_t)a2;
    *(int64_t *)(v5 - 8) = -0x3f2713f3;
    return a3 & 0xffffffff;
}

// Address range: 0x13fe44 - 0x13fe47
int64_t function_13fe44(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x13fe44
    int64_t result; // 0x13fe44
    return result;
}

// Address range: 0x13fe4a - 0x13fe5e
int64_t function_13fe4a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x13fe4a
    int64_t v1; // 0x13fe4a
    int64_t result = v1 ^ 2; // 0x13fe4a
    int32_t * v2 = (int32_t *)(result + 0x4b756003); // 0x13fe4e
    uint32_t v3 = *v2; // 0x13fe4e
    uint32_t v4 = v3 + (int32_t)a3; // 0x13fe4e
    *v2 = v4;
    int32_t * v5 = (int32_t *)(a5 + 0x7e800106); // 0x13fe57
    *v5 = (int32_t)result + (int32_t)v1 + *v5 + (int32_t)(v4 < v3);
    return result;
}

// Address range: 0x28b2cb - 0x28b42a
int64_t function_28b2cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x28b2cb
    bool v1; // 0x28b2cb
    int64_t v2 = 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x28b2cb
    int64_t v3 = v2; // bp-48, 0x28b362
    int64_t v4 = (int64_t)&v3; // 0x28b3a5
    int64_t * v5 = (int64_t *)(v4 - 16); // 0x28b3b4
    *v5 = 0x7234962a;
    int64_t * v6 = (int64_t *)(v4 - 24); // 0x28b3ba
    *v6 = v2;
    int64_t v7 = v4 - 8; // 0x28b3bd
    int64_t * v8 = (int64_t *)v7; // 0x28b3c0
    int64_t v9 = v4 + 8; // 0x28b3c0
    *(int64_t *)v9 = *v8;
    *v8 = 0x1dc295a1;
    *(int64_t *)(v4 + 24) = *v8;
    *v8 = v3;
    *v5 = a6;
    *v6 = v4;
    *(int64_t *)(v4 - 32) = *v5;
    *v5 = v7;
    *v8 = v9;
    return function_caf2a();
}

// Address range: 0x28b490 - 0x28b491
int64_t function_28b490(void) {
    // 0x28b490
    int64_t result; // 0x28b490
    return result;
}

// Address range: 0x28b6cb - 0x28b6ce
int64_t function_28b6cb(void) {
    // 0x28b6cb
    int64_t result; // 0x28b6cb
    char * v1 = (char *)(result + 104); // 0x28b6cb
    *v1 = *v1 | (char)result;
    return result;
}

// Address range: 0x28b6cf - 0x28b7eb
int64_t function_28b6cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x28b6cf
    int64_t v1; // 0x28b6cf
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 - (int32_t)a2;
    int64_t v3; // bp-32, 0x28b6cf
    v3 = (int64_t)&v3 + 16;
    return function_caf2a();
}

// Address range: 0x28b8a6 - 0x28b8a7
int64_t function_28b8a6(void) {
    // 0x28b8a6
    int64_t result; // 0x28b8a6
    return result;
}

// Address range: 0x28b8a7 - 0x28b8ac
int64_t function_28b8a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x28b8a7
    int64_t v1; // 0x28b8a7
    char * v2 = (char *)(v1 - 127); // 0x28b8a7
    *v2 = *v2 | (char)a4;
    return function_28b8b4((int64_t)&g7);
}

// Address range: 0x28b8ac - 0x28b8b4
int64_t function_28b8ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x28b8ac
    int64_t v1; // 0x28b8ac
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(v2 - 121); // 0x28b8ae
    unsigned char v4 = *v3; // 0x28b8ae
    unsigned char v5 = v4 + (char)a4; // 0x28b8ae
    *v3 = v5;
    return (v2 - (v5 < v4 ? 37 : 36)) % 256 | v2 & -256;
}

// Address range: 0x28b8b4 - 0x28b8ca
int64_t function_28b8b4(int64_t a1) {
    // 0x28b8b4
    int64_t result; // 0x28b8b4
    return result;
}

// Address range: 0x28bacb - 0x28bc38
int64_t function_28bacb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x28bacb
    int64_t v1; // bp-16, 0x28bacb
    int64_t v2 = (int64_t)&v1; // 0x28bb41
    v1 = 0x25196e8b;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x28bb55
    *v3 = 0x43c8f4f2;
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x28bb65
    int64_t v5 = *(int64_t *)(v2 + 32); // 0x28bb6b
    *v3 = v5;
    *v4 = v2;
    int64_t * v6 = (int64_t *)(v2 + 16); // 0x28bb91
    int64_t v7 = *v6; // 0x28bb91
    *v3 = v7;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x28bba9
    *v4 = v5;
    v1 = v5;
    *v8 = 0x2172051d;
    *(int64_t *)(v2 - 32) = v7;
    *v6 = *v4;
    int64_t v9 = *v3; // 0x28bbfa
    *v4 = v9;
    *v8 = v9;
    *v3 = v1;
    *v4 = v2;
    return function_caf2a();
}

// Address range: 0x28bc9d - 0x28bca3
int64_t function_28bc9d(void) {
    // 0x28bc9d
    int64_t result; // 0x28bc9d
    return result;
}

// Address range: 0x4561e3 - 0x4561ea
int64_t function_4561e3(void) {
    // 0x4561e3
    int64_t v1; // 0x4561e3
    uint32_t v2 = (int32_t)v1; // 0x4561e3
    uint32_t v3 = v2 - 0x1f4289ca; // 0x4561e3
    int64_t result = v3; // 0x4561e8
    if (v2 < 0x1f4289ca || v3 == 0) {
        result = function_4561bc();
    }
    // 0x4561ea
    return result;
}

// Address range: 0x4561eb - 0x456213
int64_t function_4561eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4561eb
    int64_t v1; // 0x4561eb
    *(int32_t *)0x2990cd83e457735 = (int32_t)v1;
    return 0x107fca50 * a1 & 0xfffffff0;
}

// Address range: 0x45621e - 0x456229
int64_t function_45621e(int64_t a1) {
    uint64_t v1 = __asm_int1(a1); // 0x45621e
    int64_t v2; // 0x45621e
    bool v3; // 0x45621e
    *(char *)v1 = (char)v3 + (char)v2 - (char)(v1 / 256);
    return v1 & 0xffffffff ^ 0xe040329d;
}

// Address range: 0x45622c - 0x45624e
int64_t function_45622c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x45622c
    bool v1; // 0x45622c
    int64_t v2 = v1 ? -4 : 4; // 0x45622c
    char * v3 = (char *)((v2 + a2 & 0xffffffff) - 89); // 0x45623a
    *v3 = *(char *)(a3 + 0x543f7440) | (char)a3 | *v3;
    int32_t v4 = *(int32_t *)(a1 + 41 + v2); // 0x456240
    unsigned char v5 = (char)v4 | -121; // 0x456245
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x456245
    int64_t result = (int64_t)v5 | (int64_t)(v4 & -256); // 0x456245
    if (v6 % 2 == 0) {
        // 0x4562ba
        return result;
    }
    // 0x456249
    int64_t v7; // 0x45622c
    *(char *)(v7 + 125) = (char)v7;
    return result;
}

// Address range: 0x456259 - 0x45629a
int64_t function_456259(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x456259
    *(char *)a4 = (char)a5 + (char)a4;
    return a5 ^ 21;
}

// Address range: 0x4562af - 0x4562b7
int64_t function_4562af(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x4562af
    int64_t v1; // 0x4562af
    __asm_outsb((int16_t)a3, (char)v1);
    return result;
}

// Address range: 0x4562b4 - 0x4562b5
int64_t function_4562b4(void) {
    // 0x4562b4
    int64_t result; // 0x4562b4
    return result;
}

// Address range: 0x4562bf - 0x45634e
int64_t function_4562bf(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)*(int32_t *)(a2 - 0x52d36dcf); // 0x4562bf
    int64_t v2 = 40 * v1; // 0x4562bf
    int64_t v3; // 0x4562bf
    __asm_out(54, (int32_t)v3);
    unknown_6684cc60();
    int64_t result = __asm_in_135((int16_t)a3); // 0x4562ce
    if (v2 == 0x2800000000 * v1 >> 32) {
        // 0x4562d1
        return result;
    }
    unsigned char v4 = *(char *)(result % 256 + (v2 & 0xfffffff8)); // 0x45631c
    char v5 = *(char *)((result & -256 | (int64_t)v4) - 0x4c29c095); // 0x45631d
    uint64_t v6 = (int64_t)v5 * (int64_t)v4; // 0x45631d
    int64_t v7 = result & -0x10000; // 0x45631d
    int64_t result2 = v6 % 0x10000 | v7; // 0x45631d
    bool v8; // 0x4562bf
    if (v8) {
        char * v9 = (char *)(result2 - 28); // 0x456326
        *v9 = *v9 ^ (char)a4;
        int64_t v10 = a3 & -256 | (int64_t)(*(char *)result2 ^ (char)a3); // 0x456332
        *(char *)(v10 + 64) = (char)(a4 / 256);
        char * v11 = (char *)(v3 - 46); // 0x456347
        *v11 = *v11 + (char)a5;
        char v12 = *(char *)(v10 + 79); // 0x45634b
        return v7 | 256 * (int64_t)(v12 ^ (char)(v6 / 256)) | 255;
    }
    // 0x4562d1
    return result2;
}

// Address range: 0x456390 - 0x456395
int64_t function_456390(void) {
    // 0x456390
    return function_ffffffff9e9186c3();
}

// Address range: 0x4563cd - 0x4563e2
int64_t function_4563cd(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x4563cd
    int64_t v1; // 0x4563cd
    uint64_t v2 = v1;
    *(char *)a1 = (char)(a3 / 256);
    bool v3; // 0x4563cd
    char v4 = (char)(v2 / 256) + (char)v3 - *(char *)(a4 + 20); // 0x4563cf
    int64_t result = 256 * (int64_t)v4 | v2 & -0xff01; // 0x4563cf
    if (v4 < 0) {
        // 0x456426
        return result;
    }
    int32_t * v5 = (int32_t *)result; // 0x4563d9
    *v5 = *v5 / 2;
    return result;
}

// Address range: 0x4564e3 - 0x4565a2
int64_t function_4564e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4564e3
    int64_t v1; // 0x4564e3
    bool v2; // 0x4564e3
    if (!v2) {
        v1 = function_4564b2();
    }
    int64_t v3 = v1 + 0x7be4130a; // 0x4564e5
    char v4 = *(char *)-0x4680799; // 0x4564eb
    int64_t v5; // 0x4564e3
    char v6 = v5 / 256; // 0x4564eb
    char v7 = v4 - v6 + (char)((int32_t)v1 > 0x841becf5); // 0x4564eb
    *(char *)-0x4680799 = v7;
    if (v7 != 0) {
        // 0x4564f5
        return v3 & 0xffffffff;
    }
    char * v8 = (char *)(a3 - 31 + 8 * v5); // 0x456542
    *v8 = *v8 & v6;
    int64_t v9 = v3 & 0xffff00ff | (int64_t)"cxa_get_globals_fast"; // 0x456546
    __asm_out_134((int16_t)a3, (char)v9);
    int32_t * v10 = (int32_t *)v9; // 0x456599
    *v10 = *v10 | (int32_t)a3;
    return function_130f77f7();
}

// Address range: 0x4565ba - 0x4565bd
int64_t function_4565ba(int64_t a1) {
    // 0x4565ba
    int64_t result; // 0x4565ba
    return result;
}

// Address range: 0x4565bd - 0x4565be
int64_t function_4565bd(int64_t a1) {
    // 0x4565bd
    int64_t result; // 0x4565bd
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x4565c2 - 0x4565ca
int64_t function_4565c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4565c2
    int64_t v1; // 0x4565c2
    int64_t result = v1 & -231; // 0x4565c4
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x4565d1 - 0x4566c9
int64_t function_4565d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4565d1
    int64_t v1; // 0x4565d1
    int64_t v2; // 0x4565d1
    bool v3; // 0x4565d1
    if (a4 == 1 || v3) {
        int64_t v4 = __asm_sti(); // 0x4565e8
        *(char *)-0x5cdda0d847856b5a = (char)v4;
        v1 = v4 & 0xffff00ff | 0x5400;
        v2 = 0xff2267ce;
    } else {
        // 0x456614
        *(char *)-0x5cdda0d847856b5a = 53;
        v1 = 0x6dbf5435;
        v2 = v3 ? 0xff2267cf : 0xff2267ce;
    }
    __asm_outsb((int16_t)a3 % 256 | (int16_t)&g6, (char)a2);
    return v2 + v1 & 0xffffbfff;
}

// Address range: 0x4566ed - 0x4566f2
int64_t function_4566ed(void) {
    // 0x4566ed
    return function_5230c820();
}

// Address range: 0x456702 - 0x456706
int64_t function_456702(int64_t a1) {
    // 0x456702
    int64_t result; // 0x456702
    return result;
}

// Address range: 0x45677e - 0x456786
int64_t function_45677e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x45677e
    int64_t result; // 0x45677e
    return result;
}

// Address range: 0x4567bd - 0x4567c2
int64_t function_4567bd(void) {
    // 0x4567bd
    return function_6bb5a262();
}

// Address range: 0x4567f4 - 0x456876
int64_t function_4567f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4567f4
    int64_t v1; // 0x4567f4
    int64_t v2 = v1;
    int64_t v3 = a4 - 1; // 0x4567fa
    if (v3 == 0) {
        // 0x4567fc
        return (int64_t)(*(int32_t *)(a4 + 0x36910544) + (int32_t)v2);
    }
    // 0x456863
    *(int32_t *)a1 = (int32_t)(a3 & a1);
    int64_t v4 = v2 & -256 | (int64_t)(*(char *)(a2 + 0x29954150) | (char)v2); // 0x456869
    int32_t v5 = v4; // 0x45686f
    uint32_t v6 = *(int32_t *)v4; // 0x45686f
    char * v7 = (char *)v3; // 0x456871
    *v7 = *v7 + 59 + (char)(v6 > -1 - v5);
    return v6 + v5;
}

// Address range: 0x4568b6 - 0x4568b7
int64_t function_4568b6(int64_t a1) {
    // 0x4568b6
    int64_t result; // 0x4568b6
    return result;
}

// Address range: 0x4568d3 - 0x4568e2
int64_t function_4568d3(int64_t a1, int64_t a2) {
    // 0x4568d3
    return function_ffffffffb0b473f8();
}

// Address range: 0x4568fe - 0x456908
int64_t function_4568fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int16_t v1 = a3; // 0x4568fe
    *(char *)a1 = __asm_insb(v1);
    int64_t v2; // 0x4568fe
    __asm_outsd(v1, *(int32_t *)&v2);
    int64_t result; // 0x4568fe
    return result;
}

// Address range: 0x456942 - 0x45695b
int64_t function_456942(int64_t a1, int64_t a2) {
    // 0x456942
    int64_t v1; // 0x456942
    *(int32_t *)0x2f667eb41c74f018 = (int32_t)v1;
    char * v2 = (char *)(v1 + 126); // 0x45694d
    *v2 = *v2 + (char)(v1 / 256);
    return function_45699a(a1, v1, v1, v1, a1, (int64_t)&g7);
}

// Address range: 0x456994 - 0x45699a
int64_t function_456994(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x456994
    float80_t v1; // 0x456994
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2; // 0x456994
    int64_t v3; // 0x456994
    return v3 & -256 | (int64_t)*(char *)&v2;
}

// Address range: 0x45699a - 0x4569e6
int64_t function_45699a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x45699a
    if (a4 != 1) {
        // 0x4569e1
        return result & -256 | (int64_t)*(char *)&v1;
    }
    // 0x45699e
    __asm_out_136(93, (char)result);
    *(int32_t *)0x5cdd57e1e1e8717 = (int32_t)result;
    return result;
}

// Address range: 0x456a07 - 0x456a0d
int64_t function_456a07(int64_t a1) {
    // 0x456a07
    int64_t v1; // 0x456a07
    return v1 & 0xa8fee1b2 | 0x57011e4d;
}

// Address range: 0x456a0d - 0x456a89
int64_t function_456a0d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t result, int64_t a6) {
    char * v1 = (char *)((a3 & -256 | 62) + 0x45c529bb); // 0x456a14
    *v1 = *v1 + (char)(a3 / 256);
    int32_t v2 = a2; // 0x456a1a
    int32_t v3 = *(int32_t *)(a4 - 112); // 0x456a1a
    if (v3 >= v2) {
        // 0x456a24
        return v2 - v3;
    }
    // 0x456a79
    int64_t v4; // 0x456a0d
    char * v5 = (char *)(v4 - 22); // 0x456a7f
    *v5 = *v5 | (char)v4;
    int32_t * v6 = (int32_t *)(v4 - 36); // 0x456a86
    int32_t v7 = *v6; // 0x456a86
    *v6 = 2 * v7 | (int32_t)(v7 < 0);
    return result;
}

// Address range: 0x456ac2 - 0x456ac5
int64_t function_456ac2(void) {
    // 0x456ac2
    int64_t result; // 0x456ac2
    return result;
}

// Address range: 0x456ad9 - 0x456ae0
int64_t function_456ad9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x456ad9
    bool v1; // 0x456ad9
    int64_t v2 = v1 ? 0xfffffffc : 4; // 0x456ad9
    int64_t v3; // 0x456ad9
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)v3 - (int32_t)(v2 + a2);
    return __asm_in_135((int16_t)a3);
}

// Address range: 0x456ae6 - 0x456ae9
int64_t function_456ae6(int64_t a1) {
    // 0x456ae6
    int64_t result; // 0x456ae6
    return result;
}

// Address range: 0x456b42 - 0x456b45
int64_t function_456b42(void) {
    // 0x456b42
    int64_t result; // 0x456b42
    return result;
}

// Address range: 0x456b68 - 0x456b69
int64_t function_456b68(int64_t a1) {
    // 0x456b68
    int64_t result; // 0x456b68
    return result;
}

// Address range: 0x456b92 - 0x456bf1
int64_t function_456b92(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x456b92
    int64_t v1; // 0x456b92
    uint64_t v2 = v1;
    uint32_t v3 = (int32_t)a4; // 0x456b92
    uint32_t v4 = *(int32_t *)(a3 + 53) + v3; // 0x456b92
    bool v5; // 0x456b92
    uint32_t v6 = v4 + (int32_t)v5; // 0x456b92
    int64_t result = v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1); // 0x456b95
    if (v6 == 0 || (v5 ? v6 <= v3 : v4 < v3)) {
        // 0x456bec
        *(char *)a1 = (char)a2;
        return result;
    }
    // 0x456b98
    return result;
}

// Address range: 0x456c35 - 0x456c41
int64_t function_456c35(void) {
    // 0x456c35
    *(int32_t *)0x41bcdd90 = *(int32_t *)0x41bcdd90 >> 16;
    return function_ffffffffceb80142();
}

// Address range: 0x456c78 - 0x456ca9
int64_t function_456c78(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x456c78
    int64_t v1; // 0x456c78
    char * v2 = (char *)(4 * a1 + 39 + v1); // 0x456c78
    char v3 = *v2 + (char)(a3 / 256); // 0x456c78
    *v2 = v3;
    int64_t result; // 0x456c78
    if (v3 != 0) {
        // 0x456ca2
        return result;
    }
    // 0x456c7e
    if (llvm_ctpop_i8(v3) % 2 == 0) {
        // 0x456c90
        return (int64_t)(*(int32_t *)0x1b291929de305b76 ^ 52);
    }
    int64_t v4 = result;
    *(char *)v4 = *(char *)&result + (char)v4;
    return result;
}

// Address range: 0x456cb2 - 0x456cbc
int64_t function_456cb2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x456cb2
    int64_t v1; // 0x456cb2
    int64_t v2 = v1;
    __asm_outsb((int16_t)a3, (char)v1);
    return (v2 + 231) % 256 | v2 & -256;
}

// Address range: 0x456d31 - 0x456d37
int64_t function_456d31(int64_t a1, int64_t a2) {
    // 0x456d31
    int64_t v1; // 0x456d31
    *(char *)a1 = (char)v1;
    bool v2; // 0x456d31
    int64_t v3 = v2 ? -1 : 1; // 0x456d31
    return function_ffffffff995eed59(v3 + a1, v3 + a2);
}

// Address range: 0x456d60 - 0x456d63
int64_t function_456d60(int64_t a1) {
    // 0x456d60
    int64_t result; // 0x456d60
    return result;
}

// Address range: 0x456d6a - 0x456d70
int64_t function_456d6a(void) {
    // 0x456d6a
    int64_t v1; // 0x456d6a
    char * v2 = (char *)(v1 - 28); // 0x456d6a
    *v2 = *v2 - 92;
    return function_456d8c(v1, v1, v1, v1, v1, (int64_t)&g7);
}

// Address range: 0x456d71 - 0x456d79
int64_t function_456d71(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x456d71
    int64_t result; // 0x456d71
    return result;
}

// Address range: 0x456d80 - 0x456d81
int64_t function_456d80(int64_t a1) {
    // 0x456d80
    int64_t result; // 0x456d80
    return result;
}

// Address range: 0x456d8c - 0x456e53
int64_t function_456d8c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4;
    int64_t v2; // 0x456d8c
    *(char *)-0x7fd1ef7fa1d1dcac = (char)v2;
    char * v3 = (char *)(a3 + 59); // 0x456d95
    *v3 = *v3 + (char)a4;
    int64_t v4 = (int64_t)*(char *)0x53117597e45ba337; // 0x456d98
    int64_t v5 = v2 & -256; // 0x456d98
    int3_t v6; // 0x456d8c
    float80_t v7 = __frontend_reg_load_fpr(v6); // 0x456da1
    __frontend_reg_store_fpr(v6, v7 + (float80_t)*(float32_t *)(v2 + 0x48e37775));
    uint64_t v8 = 0; // 0x456dab
    *(char *)a1 = __asm_insb((int16_t)a3);
    char v9 = v8 / 256; // 0x456db4
    char v10 = *(char *)(2 * a2 + 0xc093767); // 0x456db4
    if (v10 > v9) {
        // 0x456e37
        *(char *)v1 = *(char *)&v1 + (char)(a3 / 256);
        return v5 | v4;
    }
    unsigned char v11 = *(char *)((256 * (int64_t)(v9 - v10) | v8 & 0xffff00ff) + v4); // 0x456dbe
    return v5 | (int64_t)v11;
}

// Address range: 0x456e9c - 0x456ea2
int64_t function_456e9c(void) {
    // 0x456e9c
    return function_ffffffffefb6a147();
}

// Address range: 0x456ecd - 0x456ed0
int64_t function_456ecd(void) {
    // 0x456ecd
    int64_t result; // 0x456ecd
    return result;
}

// Address range: 0x456f0a - 0x456f0c
int64_t function_456f0a(void) {
    // 0x456f0a
    int64_t v1; // 0x456f0a
    return function_456f32(v1, v1, v1, (int64_t)&g7);
}

// Address range: 0x456f0e - 0x456f32
int64_t function_456f0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 23); // 0x456f0e
    uint32_t v2 = *v1; // 0x456f0e
    int64_t v3; // 0x456f0e
    uint32_t v4 = v2 + (int32_t)v3; // 0x456f0e
    bool v5; // 0x456f0e
    uint32_t v6 = v4 + (int32_t)v5; // 0x456f0e
    *v1 = v6;
    uint64_t v7 = a4 - 1; // 0x456f11
    int64_t v8; // 0x456f0e
    if (v7 != 0 == v6 == 0) {
        v8 = function_456f5f(a1, a2, a3, v7);
    }
    uint64_t v9 = v8 - (v5 ? v6 <= v2 : v4 < v2 ? 21 : 20); // 0x456f13
    unsigned char v10 = (char)v7 - *(char *)(a1 - 0x1d36bdcc); // 0x456f15
    int64_t v11 = v7 & -256 | (int64_t)v10; // 0x456f15
    unsigned char v12 = (char)v9; // 0x456f1b
    *(char *)a1 = v12;
    int64_t v13 = (v5 ? -1 : 1) + a1; // 0x456f1d
    int32_t v14 = *(int32_t *)0x5bb9c41; // 0x456f1e
    int64_t v15 = v14 + (int32_t)a2 + (int32_t)(v12 < (char)a3); // 0x456f1e
    int64_t v16 = a3 & -256 | 158; // 0x456f24
    __asm_outsb((int16_t)v16, *(char *)v15);
    int64_t result = (v9 % 256 | v8 & -256) ^ 63; // 0x456f2c
    if ((*(char *)v11 & (char)(v7 / 256)) == 0) {
        result = function_456f6a(v13, v15, v16, v11 & -0xff01);
    }
    unsigned char v17 = v10 % 32;
    if (v17 != 0) {
        int32_t * v18 = (int32_t *)(v13 - 44); // 0x456f2e
        uint32_t v19 = *v18; // 0x456f2e
        uint32_t v20 = (int32_t)v17; // 0x456f2e
        *v18 = v19 >> v20 | (int32_t)((int64_t)v19 << (int64_t)(33 - v20));
    }
    return result;
}

// Address range: 0x456f32 - 0x456f46
int64_t function_456f32(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x456f32
    int64_t v1; // 0x456f32
    return v1 & -0xff01 | (int64_t)&g2;
}

// Address range: 0x456f5f - 0x456f69
int64_t function_456f5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x456f5f
    int64_t v1; // 0x456f5f
    uint32_t v2 = (int32_t)v1 - *(int32_t *)(a3 - 0x6ad0184e); // 0x456f5f
    int64_t result = v2; // 0x456f65
    if (a4 != 1 == v2 == 0) {
        result = function_456fe3(a1, a2, a3, (int64_t)&g7);
    }
    // 0x456f67
    return result;
}

// Address range: 0x456f6a - 0x456f7a
int64_t function_456f6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x456f6a
    int64_t result; // 0x456f6a
    int64_t v1 = result;
    *(char *)v1 = (char)v1 - 1;
    return result;
}

// Address range: 0x456f7c - 0x456f91
int64_t function_456f7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 + 0x50ac5b47); // 0x456f85
    *v1 = -*v1;
    int64_t v2; // 0x456f7c
    return (int64_t)*(int32_t *)&v2;
}

// Address range: 0x456fd8 - 0x456fd9
int64_t function_456fd8(int64_t a1) {
    // 0x456fd8
    int64_t result; // 0x456fd8
    return result;
}

// Address range: 0x456fe3 - 0x456ff9
int64_t function_456fe3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x456fe3
    int64_t result; // 0x456fe3
    int64_t v1 = result;
    bool v2; // 0x456fe3
    if (v2) {
        // 0x456ff6
        *(char *)v1 = (char)(result / 256) + (char)v1 + (char)v2;
        return result;
    }
    // 0x456fe5
    return result & -0xff01 | (int64_t)&g5;
}

// Address range: 0x456ff9 - 0x457007
int64_t function_456ff9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x456ff9
    return __asm_iretd(a1);
}

// Address range: 0x4570b5 - 0x4570c7
int64_t function_4570b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    char * v1 = (char *)(a6 + 92); // 0x4570b8
    *v1 = *v1 ^ 50;
    return __asm_iretd((int64_t)(*(int32_t *)(a4 + 23) & (int32_t)a1));
}

// Address range: 0x4570e5 - 0x4570f6
int64_t function_4570e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a3 + 0x3c1b5434); // 0x4570e5
    int64_t result; // 0x4570e5
    int32_t v2 = result; // 0x4570f3
    *(int32_t *)a1 = (int32_t)result - v2 + (int32_t)((char)(v1 | (int32_t)result) < (char)a4);
    __asm_out_133((int16_t)a3, v2);
    return result;
}

// Address range: 0x4570f7 - 0x457105
int64_t function_4570f7(int64_t a1) {
    // 0x4570f7
    int64_t v1; // 0x4570f7
    return a1 + 0x37940533 + (int64_t)((int32_t)v1 < 0xd29bb15) & 0xffffffff;
}

// Address range: 0x457148 - 0x45714a
int64_t function_457148(void) {
    // 0x457148
    int64_t result; // 0x457148
    return result;
}

// Address range: 0x457166 - 0x4571ad
int64_t function_457166(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x457166
    bool v1; // 0x457166
    bool v2 = v1;
    int64_t result; // 0x457166
    if (v2 || !v1 || a4 != 1 == v2) {
        // 0x457168
        return result;
    }
    int32_t * v3 = (int32_t *)(a2 - 72); // 0x4571a8
    *v3 = *v3 & (int32_t)a1;
    return result;
}
