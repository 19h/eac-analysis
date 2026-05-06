/*
 * Targeted RetDec C for native executable gap queue batch 516.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x235ab6-0x235cb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2362b6-0x2364b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f479e-0x3f499e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f499e-0x3f4b9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f4b9e-0x3f4d9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f4d9e-0x3f4f9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f4f9e-0x3f519e rank=- name=- kind=- bytes=- uncovered=-
 *   0x410d42-0x410f42 rank=- name=- kind=- bytes=- uncovered=-
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
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pcmpgtb(int128_t left, int128_t right);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
int128_t __asm_pavgw(int128_t left, int128_t right);
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

int64_t function_1c01cdfc();
int64_t function_235ab6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_235b0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_235b36(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_235bd5(int64_t a1, int64_t a2);
int64_t function_235bfb(int64_t a1, int64_t a2, int64_t a3, int64_t result);
int64_t function_235c13(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2362a7();
int64_t function_2362b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_236341(void);
int64_t function_236354(void);
int64_t function_236366(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23638b(void);
int64_t function_236396(void);
int64_t function_2363dc(void);
int64_t function_2363fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_236407(void);
int64_t function_236447(int64_t a1);
int64_t function_236479(void);
int64_t function_3f479e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3f47b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f47f4(void);
int64_t function_3f487f(void);
int64_t function_3f48a8(int64_t a1, int64_t a2);
int64_t function_3f48da(void);
int64_t function_3f48e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3f4954(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3f49bf(int64_t a1);
int64_t function_3f49dc(void);
int64_t function_3f49f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f4a3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f4ad6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3f4b89(void);
int64_t function_3f4b9a(void);
int64_t function_3f4bd8(void);
int64_t function_3f4c18(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3f4de0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f4e2d(void);
int64_t function_3f4e46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3f4f1f(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_3f4f79(void);
int64_t function_3f4ff5(void);
int64_t function_3f5039(void);
int64_t function_3f5075(void);
int64_t function_3f509f(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_3f511f(int64_t a1);
int64_t function_3f5125(void);
int64_t function_3f516d(void);
int64_t function_410d42(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_410db8(int64_t a1);
int64_t function_410dcc(void);
int64_t function_410dda(int64_t a1, int64_t a2);
int64_t function_410de4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_410e03(int64_t a1);
int64_t function_410e3c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_410ec9(void);
int64_t function_410ed6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_61f8bc27();
int64_t function_8c32a8();
int64_t function_f02af45();
int64_t function_ffffffffdd2ef69c();
int64_t unknown_6d9796f9();
int64_t unknown_76cbc41c();
int64_t unknown_ffffffffa02a0791();

// Address range: 0x235ab6 - 0x235adb
int64_t function_235ab6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4; // 0x235ab6
    unsigned char v2 = v1 % 32; // 0x235ab6
    bool v3; // 0x235ab6
    bool v4; // 0x235ab6
    int64_t v5; // 0x235ab6
    bool v6; // 0x235ab6
    if (v2 != 0) {
        char v7 = v5;
        unsigned char v8 = v2 - 1; // 0x235ab6
        unsigned char v9 = v7 << v2 | (char)((int16_t)v5 % 256 >> (int16_t)(9 - v2)) | (char)v6 << v8; // 0x235ab6
        *(char *)v5 = v9;
        char v10 = (v7 << v8) / 128; // 0x235ab6
        v4 = v2 == 1 ? v9 / 128 != v10 : v6;
        v3 = v10 != 0;
    }
    int32_t v11 = v5;
    if (v6 == v4) {
        char * v12 = (char *)(a4 + a3); // 0x235ad8
        *v12 = *v12 + v1;
        return 0x10000 * v11 >> 16 & 0x689ec316;
    }
    int32_t * v13 = (int32_t *)(v5 - 113); // 0x235aca
    *v13 = *v13 + v11;
    return (v5 + a2 + (int64_t)v3) % 256 | a2 & 0xffffff00;
}

// Address range: 0x235b0c - 0x235b17
int64_t function_235b0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x235b0c
    int64_t v1; // 0x235b0c
    char * v2 = (char *)(v1 + a4); // 0x235b0f
    *v2 = *v2 ^ (char)(v1 / 256);
    return function_ffffffffdd2ef69c();
}

// Address range: 0x235b36 - 0x235bb1
int64_t function_235b36(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x235b36
    int64_t v1; // 0x235b36
    int64_t v2 = v1;
    *(char *)a4 = (char)v2;
    int64_t v3 = v2 + 0x6811eb56 + (int64_t)((int32_t)v2 < 0x58142001); // 0x235b43
    int64_t result = v3 & 0xffffffff; // 0x235b43
    char * v4 = (char *)(a2 + 3); // 0x235b48
    *v4 = *v4 + (char)((v1 + 256 * a3) / 256);
    int32_t * v5 = (int32_t *)(v1 + 96 + result); // 0x235b4b
    *v5 = *v5 ^ (int32_t)v3;
    return result;
}

// Address range: 0x235bd5 - 0x235be6
int64_t function_235bd5(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a2 + 0x434916c4); // 0x235bd5
    int64_t result; // 0x235bd5
    char v2 = result; // 0x235bd5
    *v1 = *v1 + v2;
    char * v3 = (char *)(result + 6); // 0x235bdb
    *v3 = *v3 + v2;
    return result;
}

// Address range: 0x235bfb - 0x235c02
int64_t function_235bfb(int64_t a1, int64_t a2, int64_t a3, int64_t result) {
    // 0x235bfb
    return result;
}

// Address range: 0x235c13 - 0x235c94
int64_t function_235c13(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x235c13
    int64_t v1; // 0x235c13
    *(char *)a1 = (char)v1;
    int64_t v2; // 0x235c13
    int32_t v3 = *(int32_t *)&v2; // 0x235c14
    bool v4; // 0x235c13
    unsigned char v5 = llvm_ctpop_i8((char)((int32_t)v4 + (int32_t)v1 - v3)); // 0x235c14
    int64_t result = unknown_76cbc41c((v4 ? -1 : 1) + a1); // 0x235c16
    if (v5 % 2 != 0) {
        // 0x235c93
        return __asm_in((int16_t)a3);
    }
    // 0x235c1d
    return result;
}

// Address range: 0x2362b6 - 0x2362f5
int64_t function_2362b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t result; // 0x2362b6
    int64_t v2; // 0x2362b6
    bool v3; // 0x2362b6
    if (v3) {
        int64_t v4 = a4 & 0xffffffff; // 0x2362d2
        char v5 = (uint64_t)v2 / 256; // 0x2362d3
        *(char *)-0x17b8ef25 = *(char *)-0x17b8ef25 + v5;
        char v6 = *(char *)-0x66fa75dc; // 0x2362dc
        int64_t v7; // 0x2362b6
        *(char *)-0x66fa75dc = v6 + (char)(int64_t)&v7;
        int32_t * v8 = (int32_t *)(v4 - 44); // 0x2362e2
        int32_t v9 = *v8 | (int32_t)a3; // 0x2362e2
        *v8 = v9;
        result = v4;
        if (v9 == 0) {
            // 0x2362e7
            __asm_int(-87);
            *(int32_t *)v1 = *(int32_t *)&v1 - (int32_t)v2;
            *(char *)0x25bed9f2 = *(char *)0x25bed9f2 + v5;
            int64_t v10 = a4 & 99 | 156; // 0x2362f1
            __asm_out((int16_t)v1, (char)v10);
            return v10 | a4 & 0xffffff00;
        }
    } else {
        // 0x2362b8
        *(char *)a2 = (char)v2 + (char)a2;
        if (a4 == 0) {
            result = function_2362a7();
        }
    }
    // 0x2362bc
    return result;
}

// Address range: 0x236341 - 0x236342
int64_t function_236341(void) {
    // 0x236341
    int64_t result; // 0x236341
    return result;
}

// Address range: 0x236354 - 0x236355
int64_t function_236354(void) {
    // 0x236354
    int64_t result; // 0x236354
    return result;
}

// Address range: 0x236366 - 0x236388
int64_t function_236366(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(4 * a2 - 0x5c9c0138 + a4); // 0x236366
    uint32_t v2 = *v1; // 0x236366
    int64_t v3; // 0x236366
    uint32_t v4 = v2 + (int32_t)v3; // 0x236366
    *v1 = v4;
    uint32_t v5 = (int32_t)v3; // 0x23636e
    uint32_t v6 = v5 - 0x70afff10 + (int32_t)(v4 < v2); // 0x23636e
    int64_t v7 = v6; // 0x236373
    if (v6 != 0 && !((v4 < v2 ? v6 <= v5 : v5 > 0x70afff0f))) {
        v7 = function_236341();
    }
    int64_t v8 = v7;
    int64_t result = (v8 + 213) % 256 | v8 & -256; // 0x236377
    int32_t * v9 = (int32_t *)result; // 0x236379
    *v9 = *v9 + 61 + (int32_t)((char)v8 < 43);
    return result;
}

// Address range: 0x23638b - 0x236395
int64_t function_23638b(void) {
    // 0x23638b
    unknown_ffffffffa02a0791();
    return function_8c32a8();
}

// Address range: 0x236396 - 0x236399
int64_t function_236396(void) {
    // 0x236396
    int64_t result; // 0x236396
    return result;
}

// Address range: 0x2363dc - 0x2363dd
int64_t function_2363dc(void) {
    // 0x2363dc
    int64_t result; // 0x2363dc
    return result;
}

// Address range: 0x2363fc - 0x236404
int64_t function_2363fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2363fc
    int64_t result; // 0x2363fc
    __asm_outsb((int16_t)a3, (char)result);
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x236407 - 0x23640b
int64_t function_236407(void) {
    // 0x236407
    return function_2363dc();
}

// Address range: 0x236447 - 0x23644a
int64_t function_236447(int64_t a1) {
    // 0x236447
    int64_t result; // 0x236447
    return result;
}

// Address range: 0x236479 - 0x23647a
int64_t function_236479(void) {
    // 0x236479
    int64_t result; // 0x236479
    return result;
}

// Address range: 0x3f479e - 0x3f47a2
int64_t function_3f479e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3f479e
    int64_t result; // 0x3f479e
    return result;
}

// Address range: 0x3f47b3 - 0x3f47be
int64_t function_3f47b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3f47b3
    return function_f02af45();
}

// Address range: 0x3f47f4 - 0x3f47f5
int64_t function_3f47f4(void) {
    // 0x3f47f4
    int64_t result; // 0x3f47f4
    return result;
}

// Address range: 0x3f487f - 0x3f4880
int64_t function_3f487f(void) {
    // 0x3f487f
    int64_t result; // 0x3f487f
    return result;
}

// Address range: 0x3f48a8 - 0x3f48b3
int64_t function_3f48a8(int64_t a1, int64_t a2) {
    // 0x3f48a8
    int64_t v1; // 0x3f48a8
    bool v2; // 0x3f48a8
    if (v2) {
        v1 = function_3f487f();
    }
    // 0x3f48ad
    return v1 + 0x8587201f & 0xffffffff;
}

// Address range: 0x3f48da - 0x3f48db
int64_t function_3f48da(void) {
    // 0x3f48da
    int64_t result; // 0x3f48da
    return result;
}

// Address range: 0x3f48e1 - 0x3f492e
int64_t function_3f48e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3f48e1
    float80_t v1; // 0x3f48e1
    *(int32_t *)(a4 + 116) = (int32_t)v1;
    int64_t v2 = a4; // 0x3f48e4
    int64_t v3; // 0x3f48e1
    int64_t v4; // 0x3f48e1
    bool v5; // 0x3f48e1
    if (!v5) {
        // 0x3f48e7
        int64_t v6; // 0x3f48e1
        if (*(int32_t *)&v4 >= (int32_t)a2) {
            // 0x3f48ec
            return v6 + 0x1f68d690 & 0xffffffff;
        }
        // 0x3f4909
        *(int64_t *)((v6 & 0xffffffff) - 8) = v4;
        v3 = a4 & 0xffffffff;
        v2 = v6 & 0xffffffff;
    }
    int64_t v7 = v3;
    char * v8 = (char *)((v5 ? -4 : 4) + a1); // 0x3f491e
    *v8 = *v8 + (char)v2;
    char v9 = *(char *)(v2 + 0x5ec42503) & (char)v4; // 0x3f4921
    int64_t v10 = (v7 + 20) % 256 | v7 & -256; // 0x3f4927
    if (v9 >= 0 == (v9 != 0)) {
        v10 = function_3f48da();
    }
    // 0x3f4929
    return 0x10000 * (int32_t)v10 >> 16;
}

// Address range: 0x3f4954 - 0x3f496a
int64_t function_3f4954(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a4 != 0) {
        char v1 = *(char *)(a2 - 0x293ee096); // 0x3f4954
        int16_t v2 = 256 * (int64_t)(v1 ^ (char)(a3 / 256)) | a3 % 256; // 0x3f495d
        int64_t v3 = a4; // 0x3f495d
        *(int32_t *)a1 = __asm_insd(v2);
        while (v3 != 1) {
            v3--;
            *(int32_t *)a1 = __asm_insd(v2);
        }
    }
    int64_t result = a2 & 0xffffffff; // 0x3f495a
    int32_t * v4 = (int32_t *)(result + 85); // 0x3f4961
    *v4 = *v4 - (int32_t)a1;
    int64_t v5; // 0x3f4954
    *(int32_t *)(a5 + 118) = (int32_t)(int64_t)&v5;
    return result;
}

// Address range: 0x3f49bf - 0x3f49c4
int64_t function_3f49bf(int64_t a1) {
    // 0x3f49bf
    int64_t v1; // 0x3f49bf
    bool v2; // 0x3f49bf
    return function_3f4a3e((v2 ? -4 : 4) + a1, v1, v1, v1);
}

// Address range: 0x3f49dc - 0x3f49dd
int64_t function_3f49dc(void) {
    // 0x3f49dc
    int64_t result; // 0x3f49dc
    return result;
}

// Address range: 0x3f49f9 - 0x3f4a0f
int64_t function_3f49f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3f49f9
    int64_t v1; // 0x3f49f9
    int64_t v2 = v1;
    __asm_out((int16_t)a3, (char)v2);
    return (v2 + 51) % 256 | v2 & -256;
}

// Address range: 0x3f4a3e - 0x3f4a95
int64_t function_3f4a3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3f4a3e
    int64_t v1; // 0x3f4a3e
    uint64_t result = v1;
    bool v2; // 0x3f4a3e
    if (v2) {
        // 0x3f4a94
        return result & -256 | (int64_t)*(char *)(result % 256 + v1);
    }
    // 0x3f4a40
    return result;
}

// Address range: 0x3f4ad6 - 0x3f4b51
int64_t function_3f4ad6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3f4ad6
    int64_t v1; // 0x3f4ad6
    uint64_t v2 = v1;
    int64_t v3 = v1 & -256; // 0x3f4ad6
    int64_t result = v3 | v2 % 256; // 0x3f4ad6
    uint32_t v4 = (int32_t)v1 - (int32_t)result; // 0x3f4ad7
    if (v4 != 0) {
        // 0x3f4b4f
        return v3 | (v2 + 26) % 256;
    }
    // 0x3f4adb
    *(int64_t *)((int64_t)v4 - 8) = result;
    return result;
}

// Address range: 0x3f4b89 - 0x3f4b8a
int64_t function_3f4b89(void) {
    // 0x3f4b89
    int64_t result; // 0x3f4b89
    return result;
}

// Address range: 0x3f4b9a - 0x3f4bad
int64_t function_3f4b9a(void) {
    // 0x3f4b9a
    int64_t v1; // 0x3f4b9a
    int64_t v2 = v1;
    bool v3; // 0x3f4b9a
    int64_t v4 = v3; // 0x3f4b9a
    int64_t result = v2 & -0x10000 | v2 + 104 + v4 & 228 | 256 * (64 * (int64_t)v3 | 128 * (int64_t)v3 | 16 * (int64_t)v3 | v4 | 4 * (int64_t)v3) | 539; // 0x3f4ba6
    __asm_out_133(-50, (int32_t)result);
    return result;
}

// Address range: 0x3f4bd8 - 0x3f4bda
int64_t function_3f4bd8(void) {
    // 0x3f4bd8
    return function_3f4b89();
}

// Address range: 0x3f4c18 - 0x3f4dbe
int64_t function_3f4c18(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3f4c18
    int64_t result; // 0x3f4c18
    bool v1; // 0x3f4c18
    if (v1) {
        int64_t v2 = __asm_hlt(a1); // 0x3f4c4d
        *(char *)a1 = (char)(v2 / 256 | a1);
        result = v2;
    }
    // 0x3f4c1a
    return result;
}

// Address range: 0x3f4de0 - 0x3f4df1
int64_t function_3f4de0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3f4de0
    int64_t v1; // 0x3f4de0
    int32_t v2 = (int32_t)v1 & 0x701fdbe0; // 0x3f4de0
    return v1 & -0xff01 | 0x4000 * (int64_t)(v2 == 0) | 1024 * (int64_t)(llvm_ctpop_i8((char)v2) % 2 == 0) | 512;
}

// Address range: 0x3f4e2d - 0x3f4e32
int64_t function_3f4e2d(void) {
    // 0x3f4e2d
    return function_1c01cdfc();
}

// Address range: 0x3f4e46 - 0x3f4f17
int64_t function_3f4e46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3f4e46
    int64_t result; // 0x3f4e46
    unsigned char v1 = (char)(result / 256); // 0x3f4e46
    if (v1 < 0) {
        if ((v1 & 64) == 0) {
            // 0x3f4e7a
            return result;
        }
        // 0x3f4f12
        return __asm_sti() + 0xa3d1ff82 & 0xffffffff;
    }
    char * v2 = (char *)(result - 0x1648fabc); // 0x3f4e59
    *v2 = -14 * (char)*(int32_t *)(result + 6) + *v2;
    int64_t v3; // 0x3f4e46
    *(char *)v3 = *(char *)&v3 + (char)a6;
    return result & 0xffffffff;
}

// Address range: 0x3f4f1f - 0x3f4f3c
int64_t function_3f4f1f(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = a1;
    int64_t v2; // 0x3f4f1f
    int32_t v3 = v2;
    int32_t v4; // 0x3f4f1f
    int64_t v5; // 0x3f4f1f
    int32_t v6; // 0x3f4f1f
    int64_t v7; // 0x3f4f1f
    if ((0x24a0fe0 - v3 & v3) < 0) {
        // 0x3f4f1f
        v4 = v3;
        v5 = a1;
        v6 = a1;
    } else {
        int64_t v8 = __asm_int3(a1, a2, a3); // 0x3f4f29
        *(char *)(8 * a3 - 63 + v2) = (char)(a3 / 256);
        v4 = v8;
        v5 = v1;
        v6 = *(int32_t *)&v1;
        v7 = v2 & 0xffffffff & v2;
    }
    // 0x3f4f2e
    *(int64_t *)(v7 - 8) = v5;
    return (int64_t)__asm_in_134(-108) | (int64_t)((v6 ^ v4) & -256);
}

// Address range: 0x3f4f79 - 0x3f4f7a
int64_t function_3f4f79(void) {
    // 0x3f4f79
    int64_t result; // 0x3f4f79
    return result;
}

// Address range: 0x3f4ff5 - 0x3f4ff8
int64_t function_3f4ff5(void) {
    // 0x3f4ff5
    int64_t result; // 0x3f4ff5
    return result;
}

// Address range: 0x3f5039 - 0x3f503a
int64_t function_3f5039(void) {
    // 0x3f5039
    int64_t result; // 0x3f5039
    return result;
}

// Address range: 0x3f5075 - 0x3f5076
int64_t function_3f5075(void) {
    // 0x3f5075
    int64_t result; // 0x3f5075
    return result;
}

// Address range: 0x3f509f - 0x3f50bb
int64_t function_3f509f(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = *(int64_t *)(int64_t)(42 * *(int32_t *)(a2 - 102 + 4 * a1)) - 1; // 0x3f50a9
    int64_t v2; // 0x3f509f
    int64_t result; // 0x3f509f
    int64_t v3; // 0x3f509f
    if (v1 != 0 == (char)v3 == 22) {
        int64_t v4 = function_3f5039(); // 0x3f50a9
        result = v4;
        v2 = v4;
    }
    char * v5 = (char *)(v2 + v3); // 0x3f50ab
    *v5 = *v5 + (char)(a3 / 256);
    *(int32_t *)result = *(int32_t *)&result ^ (int32_t)v3;
    int64_t v6 = __asm_wait(); // 0x3f50b0
    unsigned char v7 = (char)v6 & 93; // 0x3f50b1
    result = v6 & -256 | (int64_t)v7;
    if (v1 != 1 == v7 == 0) {
        result = function_3f5075();
    }
    // 0x3f50b6
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return result;
}

// Address range: 0x3f511f - 0x3f5123
int64_t function_3f511f(int64_t a1) {
    // 0x3f511f
    int64_t result; // 0x3f511f
    return result;
}

// Address range: 0x3f5125 - 0x3f5126
int64_t function_3f5125(void) {
    // 0x3f5125
    int64_t result; // 0x3f5125
    return result;
}

// Address range: 0x3f516d - 0x3f5172
int64_t function_3f516d(void) {
    // 0x3f516d
    return function_61f8bc27();
}

// Address range: 0x410d42 - 0x410d91
int64_t function_410d42(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x410d42
    int64_t result; // 0x410d42
    if (a4 != 1) {
        // 0x410da6
        return result;
    }
    char * v1 = (char *)(4 * result + 16 + result); // 0x410d44
    unsigned char v2 = *v1; // 0x410d44
    unsigned char v3 = v2 + (char)a3; // 0x410d44
    *v1 = v3;
    if (v3 < v2 || v3 == 0) {
        // 0x410d73
        bool v4; // 0x410d42
        int64_t v5 = v4 ? -4 : 4; // 0x410d78
        int64_t v6 = v5 + a1; // 0x410d78
        int64_t v7 = v5 + a2; // 0x410d78
        int64_t v8 = __asm_iretd(v6, v7, (int32_t)a3, 0); // 0x410d79
        *(char *)0x2e9aac051ac94b74 = (char)v8;
        *(char *)v6 = __asm_insb((int16_t)a3);
        char * v9 = (char *)(v7 + 112); // 0x410d84
        unsigned char v10 = *v9; // 0x410d84
        *v9 = v10 - 38;
        uint32_t result2 = *(int32_t *)(v8 + 46) + (int32_t)v8 + (int32_t)(v10 < 38); // 0x410d88
        char * v11 = (char *)(v6 - 0x29a9169c); // 0x410d8b
        *v11 = *v11 - (char)(result2 / 256);
        return result2;
    }
    // 0x410d54
    return result & 0xffffffff;
}

// Address range: 0x410db8 - 0x410dbb
int64_t function_410db8(int64_t a1) {
    // 0x410db8
    int64_t v1; // 0x410db8
    int64_t v2 = v1;
    return (v2 + 35) % 256 | v2 & -256;
}

// Address range: 0x410dcc - 0x410dce
int64_t function_410dcc(void) {
    // 0x410dcc
    int64_t result; // 0x410dcc
    return result;
}

// Address range: 0x410dda - 0x410de4
int64_t function_410dda(int64_t a1, int64_t a2) {
    // 0x410dda
    int64_t v1; // 0x410dda
    *(char *)a1 = (char)v1;
    return function_410e03(a1 + 1);
}

// Address range: 0x410de4 - 0x410e03
int64_t function_410de4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x410de4
    int64_t v1; // 0x410de4
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2 = 0x3377675c * a4 & 0xfffffffc; // 0x410de7
    char * v3 = (char *)(v1 + 75); // 0x410ded
    *v3 = *v3 - 1;
    int32_t * v4 = (int32_t *)(a4 + 28); // 0x410df3
    *v4 = *v4 - (int32_t)v1;
    int64_t v5 = __asm_hlt(v2); // 0x410df6
    float80_t v6; // 0x410de4
    *(int64_t *)v2 = (int64_t)v6;
    __asm_sti();
    return __asm_in((int16_t)((int32_t)v5 >> 31));
}

// Address range: 0x410e03 - 0x410e1f
int64_t function_410e03(int64_t a1) {
    uint32_t result = *(int32_t *)0x1aa27ed60c367414; // 0x410e09
    *(char *)0x21db515c3ee4073a = (char)result;
    __asm_rcl(*(char *)(a1 + 66));
    return result;
}

// Address range: 0x410e3c - 0x410e63
int64_t function_410e3c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x410e3c
    int64_t result; // 0x410e3c
    bool v1; // 0x410e3c
    if (!v1) {
        // 0x410e62
        *(char *)a1 = __asm_insb((int16_t)a3);
        return result;
    }
    int64_t v2 = a2;
    int64_t v3; // 0x410e3c
    uint64_t v4 = v3;
    int64_t v5; // 0x410e3c
    int64_t v6 = v5 & result;
    int64_t v7 = v4 & -256; // 0x410e41
    int64_t v8 = v2 + (v1 ? -1 : 1); // 0x410e45
    while ((v6 & 0xffffffff) == 0) {
        // 0x410e3f
        v2 = v8;
        v4 = v7;
        v6 = 0;
        v7 = v4 & -256;
        v8 = v2 - 1;
    }
    unsigned char v9 = *(char *)v2; // 0x410e41
    unsigned char v10 = v9 - *(char *)(v7 | (int64_t)v9); // 0x410e43
    char * v11 = (char *)((v6 + result & 0xffffffff) - 0x74956cef); // 0x410e49
    *v11 = *v11 + (char)(v4 / 256);
    uint32_t v12 = (int32_t)(v4 & 0xffffff00 | (int64_t)(v10 - 44)); // 0x410e54
    uint32_t v13 = (v10 > 43 ? 0x73101559 : 0x73101558) + v12; // 0x410e54
    __asm_out_133(-91, v13);
    int64_t v14 = v10 > 43 ? v13 <= v12 : v12 > 0x8cefeaa7 ? 83 : 82; // 0x410e5b
    return ((int64_t)v13 - v14) % 256 | (int64_t)(v13 & -256);
}

// Address range: 0x410ec9 - 0x410ecb
int64_t function_410ec9(void) {
    // 0x410ec9
    int64_t result; // 0x410ec9
    return result;
}

// Address range: 0x410ed6 - 0x410f42
int64_t function_410ed6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x410ed6
    int64_t v1; // 0x410ed6
    unsigned char v2 = (char)v1; // 0x410ed6
    __asm_out((int16_t)a3, v2);
    char * v3 = (char *)(v1 - 0x59f93eb3); // 0x410edb
    unsigned char v4 = (char)(a4 / 256); // 0x410edb
    *v3 = *v3 ^ v4;
    uint32_t v5 = (int32_t)a4 % 32; // 0x410ee5
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)(2 * a5 + 0x6fc2190b); // 0x410ee5
        uint32_t v7 = *v6; // 0x410ee5
        *v6 = v7 << v5 | (int32_t)(v4 < v2) << v5 - 1 | (int32_t)((int64_t)v7 >> (int64_t)(33 - v5));
    }
    int32_t v8 = v1; // 0x410eec
    int32_t v9 = v8 - 0x78ad332; // 0x410eec
    int64_t result = unknown_6d9796f9() & -256 | 134; // 0x410efe
    if (v9 < 0 == ((v9 ^ v8) & v8 + 0x78752cce) < 0 != v9 != 0) {
        // 0x410f04
        return result + 0x1eeb1012;
    }
    int32_t * v10 = (int32_t *)(a1 + 0x4cd7379b); // 0x410f3b
    *v10 = *v10 ^ 0x4cd7379b;
    *(int32_t *)a1 = (int32_t)result;
    return result;
}
