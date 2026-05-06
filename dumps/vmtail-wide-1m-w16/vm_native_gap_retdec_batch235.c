/*
 * Targeted RetDec C for native executable gap queue batch 235.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x189485-0x189685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x189685-0x189885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x189885-0x189a85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x189a85-0x189c85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x189c85-0x189e85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x30eabb-0x30ecbb rank=- name=- kind=- bytes=- uncovered=-
 *   0x30ecbb-0x30eebb rank=- name=- kind=- bytes=- uncovered=-
 *   0x30eebb-0x30f0bb rank=- name=- kind=- bytes=- uncovered=-
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
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
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
int128_t __asm_pmaxsw(int128_t left, int128_t right);
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

int64_t function_189485(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_189569(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1896cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_18984b(void);
int64_t function_18987a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_189884(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_189886(int64_t a1, int64_t a2);
int64_t function_1898b8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_189935(int64_t a1);
int64_t function_18993d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1899ae(void);
int64_t function_1899e9(void);
int64_t function_189a13(void);
int64_t function_189a1a(void);
int64_t function_189a3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_189aa5(void);
int64_t function_189b10(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_189bff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_189c15(void);
int64_t function_189c56(void);
int64_t function_189c66(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_189c87(void);
int64_t function_189cb7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_189cd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_189d4c(void);
int64_t function_189d69(void);
int64_t function_189d6e(void);
int64_t function_189d85(void);
int64_t function_189d8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_189e73(int64_t a1);
int64_t function_213debf8();
int64_t function_218ebfe();
int64_t function_2197bc1();
int64_t function_30eabb(void);
int64_t function_30eb60(int64_t a1);
int64_t function_30eb7e(int64_t a1);
int64_t function_30eb80(void);
int64_t function_30ebec(int64_t a1);
int64_t function_30ec16(int64_t a1);
int64_t function_30ec3a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_30ec70(void);
int64_t function_30ed06(void);
int64_t function_30ed24(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_30ed7e(void);
int64_t function_30edcd(void);
int64_t function_30edea(void);
int64_t function_30edee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30eea4(void);
int64_t function_30eeca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30ef11(int64_t a1);
int64_t function_30ef1e(void);
int64_t function_30ef65(int64_t a1, int64_t a2);
int64_t function_30ef74(void);
int64_t function_30efa2(void);
int64_t function_30efb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30efd5(void);
int64_t function_6f44b9e();
int64_t function_73479e6f();
int64_t function_aa3bf9();
int64_t function_cdc60();
int64_t function_f19d718();
int64_t function_ffffffff81322c1d();
int64_t function_ffffffffd61f8b32();
int64_t function_ffffffffd89787ad();
int64_t function_fffffffff31a8453();
int64_t unknown_10ec9f93();
int64_t unknown_3d1a814e();
int64_t unknown_6291ae7b();
int64_t unknown_78aa1951();
int64_t unknown_7b28fbc6();
int64_t unknown_ffffffff8032291c();
int64_t unknown_ffffffff8f2ff207();
int64_t unknown_ffffffff981bad03();
int64_t unknown_ffffffffb4569988();
int64_t unknown_ffffffffd2001780();

// Address range: 0x189485 - 0x189569
int64_t function_189485(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x189485
    int64_t v1; // 0x189485
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t v3; // 0x189485
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    int64_t v5 = v3;
    *(char *)v5 = *(char *)&v3 + (char)v5;
    int64_t v6 = v3;
    *(char *)v6 = *(char *)&v3 + (char)v6;
    return function_cdc60(a1, a2, a3);
}

// Address range: 0x189569 - 0x1896cb
int64_t function_189569(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x185688; // bp-16, 0x1895c3
    int64_t v2; // bp-48, 0x189569
    v2 = (int64_t)&v2;
    int64_t v3 = (int64_t)&v1; // 0x189699
    *(int64_t *)(v3 - 8) = 0x185688;
    *(int64_t *)(v3 - 16) = 0x185688;
    return function_cdc60(a1, a2, a3);
}

// Address range: 0x1896cb - 0x18984b
int64_t function_1896cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1896cb
    int64_t v1; // bp-56, 0x1896cb
    v1 = (int64_t)&v1 + 16;
    return function_cdc60(a1, a2, a3);
}

// Address range: 0x18984b - 0x189850
int64_t function_18984b(void) {
    // 0x18984b
    int64_t result; // 0x18984b
    return result;
}

// Address range: 0x18987a - 0x189883
int64_t function_18987a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18987a
    return function_189886(a1, a2);
}

// Address range: 0x189884 - 0x189886
int64_t function_189884(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x189884
    int64_t result; // 0x189884
    *(int32_t *)a4 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x189886 - 0x189897
int64_t function_189886(int64_t a1, int64_t a2) {
    // 0x189886
    return __asm_int1();
}

// Address range: 0x1898b8 - 0x189902
int64_t function_1898b8(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int32_t v2 = (int32_t)a1 - *(int32_t *)&v1; // 0x1898b9
    if (v2 != 0) {
        // 0x1898fd
        return unknown_ffffffff981bad03(v2);
    }
    // 0x1898bd
    int64_t result; // 0x1898b8
    return result;
}

// Address range: 0x189935 - 0x18993d
int64_t function_189935(int64_t a1) {
    // 0x189935
    int64_t v1; // 0x189935
    *(int32_t *)a1 = 2 * (int32_t)v1;
    return v1 & 0xe8ac5b3a;
}

// Address range: 0x18993d - 0x18998f
int64_t function_18993d(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_3d1a814e(); // 0x189948
    int32_t * v2 = (int32_t *)(a2 - 0x4e98ffd2); // 0x189981
    *v2 = *v2 + (int32_t)a3;
    int64_t v3; // 0x18993d
    int64_t result = ((v1 + 24) % 256 | v1 & 0xffffff00) + (v3 & 0xffffff00) & 0xffffff00 | 100; // 0x189987
    *(int64_t *)0x2900b3dd = result;
    return result;
}

// Address range: 0x1899ae - 0x1899af
int64_t function_1899ae(void) {
    // 0x1899ae
    int64_t result; // 0x1899ae
    return result;
}

// Address range: 0x1899e9 - 0x1899ea
int64_t function_1899e9(void) {
    // 0x1899e9
    int64_t result; // 0x1899e9
    return result;
}

// Address range: 0x189a13 - 0x189a18
int64_t function_189a13(void) {
    // 0x189a13
    return function_f19d718();
}

// Address range: 0x189a1a - 0x189a1b
int64_t function_189a1a(void) {
    // 0x189a1a
    int64_t result; // 0x189a1a
    return result;
}

// Address range: 0x189a3f - 0x189a8a
int64_t function_189a3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int32_t * v2 = (int32_t *)(a2 - 0x2ce86389); // 0x189a3f
    int32_t v3 = a3; // 0x189a3f
    *v2 = *v2 + v3;
    int64_t v4; // 0x189a3f
    *(char *)a4 = *(char *)&v1 + (char)v4;
    uint64_t v5 = unknown_78aa1951(); // 0x189a4b
    int64_t v6; // 0x189a3f
    *(int32_t *)a2 = *(int32_t *)&v6 + v3;
    *(int32_t *)(a1 + 0x773d3af5) = (int32_t)a2;
    char * v7 = (char *)(v4 + 0x1e86d6a); // 0x189a5d
    *v7 = *v7 - (char)(v5 / 256);
    *(int64_t *)(a4 - 62) = (int64_t)1.0;
    unknown_6291ae7b();
    int64_t v8 = (int64_t)*(int32_t *)&v6; // 0x189a7c
    if ((a5 & 64) == 0) {
        v8 = function_189a1a();
    }
    int64_t result = v8; // 0x189a7f
    if (v1 != 0) {
        // 0x189a81
        result = unknown_ffffffffb4569988();
    }
    // 0x189a87
    *(char *)a1 = __asm_insb((int16_t)a3);
    return result;
}

// Address range: 0x189aa5 - 0x189aac
int64_t function_189aa5(void) {
    // 0x189aa5
    int64_t v1; // 0x189aa5
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 - (int32_t)v1;
    return function_ffffffffd61f8b32();
}

// Address range: 0x189b10 - 0x189b98
int64_t function_189b10(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    char * v1 = (char *)(a2 - 0x65756917 + 8 * a4); // 0x189b10
    *v1 = *v1 | (char)(a4 / 256);
    int64_t v2; // 0x189b10
    int32_t * v3 = (int32_t *)(v2 + 0x13d00f2); // 0x189b19
    *v3 = 2 * *v3;
    __asm_out(-127, (char)v2);
    *(char *)a1 = __asm_insb((int16_t)((int32_t)v2 >> 31));
    return function_6f44b9e();
}

// Address range: 0x189bff - 0x189c13
int64_t function_189bff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffff8f2ff207(); // 0x189c01
    unsigned char v2 = *(char *)-0x1764d1c8; // 0x189c06
    *(char *)-0x1764d1c8 = v2 / 128 | 2 * v2;
    return v1 & -0xff01 | (int64_t)">\r";
}

// Address range: 0x189c15 - 0x189c1a
int64_t function_189c15(void) {
    // 0x189c15
    return function_fffffffff31a8453();
}

// Address range: 0x189c56 - 0x189c57
int64_t function_189c56(void) {
    // 0x189c56
    int64_t result; // 0x189c56
    return result;
}

// Address range: 0x189c66 - 0x189c87
int64_t function_189c66(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x189c66
    bool v3; // 0x189c66
    if (v3) {
        v2 = function_189c56();
    }
    int64_t v4 = v2;
    *(int32_t *)v4 = (int32_t)v4;
    int64_t v5 = v4 & -256 | 244; // 0x189c6a
    int32_t * v6 = (int32_t *)(v5 + 0x70db6700); // 0x189c6e
    *v6 = *v6 + (int32_t)v5;
    *(char *)a1 = *(char *)&v1;
    int64_t v7 = v3 ? -1 : 1; // 0x189c74
    unknown_ffffffffd2001780(v7 + a1, v1 + v7);
    return function_73479e6f();
}

// Address range: 0x189c87 - 0x189c88
int64_t function_189c87(void) {
    // 0x189c87
    int64_t result; // 0x189c87
    return result;
}

// Address range: 0x189cb7 - 0x189ccd
int64_t function_189cb7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x189cb7
    __asm_outsb((int16_t)a3, (char)a2);
    return (int64_t)*(int32_t *)-0x2f20f0244caefe18;
}

// Address range: 0x189cd8 - 0x189cf2
int64_t function_189cd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x189cd8
    int64_t v1; // 0x189cd8
    int32_t v2 = v1; // 0x189cd9
    *(int32_t *)0x1e8982e0dab043b = v2;
    *(int32_t *)-0x28013e4f = *(int32_t *)-0x28013e4f | v2;
    uint32_t v3 = (int32_t)a4 % 32; // 0x189ce8
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)(a4 - 125); // 0x189ce8
        uint32_t v5 = *v4; // 0x189ce8
        *v4 = v5 >> 32 - v3 | v5 << v3;
    }
    return a3 & 0xffffffff;
}

// Address range: 0x189d4c - 0x189d4d
int64_t function_189d4c(void) {
    // 0x189d4c
    int64_t result; // 0x189d4c
    return result;
}

// Address range: 0x189d69 - 0x189d6a
int64_t function_189d69(void) {
    // 0x189d69
    int64_t result; // 0x189d69
    return result;
}

// Address range: 0x189d6e - 0x189d73
int64_t function_189d6e(void) {
    // 0x189d6e
    return function_ffffffffd89787ad();
}

// Address range: 0x189d85 - 0x189d86
int64_t function_189d85(void) {
    // 0x189d85
    int64_t result; // 0x189d85
    return result;
}

// Address range: 0x189d8d - 0x189da0
int64_t function_189d8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x189d8d
    unknown_10ec9f93();
    function_189d4c();
    char * v1 = (char *)(a1 - 18); // 0x189d99
    *v1 = *v1 + (char)a3;
    return function_189d85();
}

// Address range: 0x189e73 - 0x189e76
int64_t function_189e73(int64_t a1) {
    // 0x189e73
    int64_t result; // 0x189e73
    return result;
}

// Address range: 0x30eabb - 0x30eace
int64_t function_30eabb(void) {
    // 0x30eabb
    int64_t v1; // 0x30eabb
    int32_t * v2 = (int32_t *)(v1 + 100); // 0x30eabd
    bool v3; // 0x30eabb
    *v2 = (int32_t)v3 - (int32_t)v1 + *v2;
    int64_t result = unknown_7b28fbc6(); // 0x30eac0
    *(int32_t *)result = (int32_t)result;
    return result;
}

// Address range: 0x30eb60 - 0x30eb67
int64_t function_30eb60(int64_t a1) {
    // 0x30eb60
    return function_213debf8();
}

// Address range: 0x30eb7e - 0x30eb80
int64_t function_30eb7e(int64_t a1) {
    // 0x30eb7e
    int64_t result; // 0x30eb7e
    return result;
}

// Address range: 0x30eb80 - 0x30eb85
int64_t function_30eb80(void) {
    // 0x30eb80
    return function_218ebfe();
}

// Address range: 0x30ebec - 0x30ebef
int64_t function_30ebec(int64_t a1) {
    // 0x30ebec
    int64_t v1; // 0x30ebec
    int64_t v2 = v1;
    return (v2 + 99) % 256 | v2 & -256;
}

// Address range: 0x30ec16 - 0x30ec1c
int64_t function_30ec16(int64_t a1) {
    // 0x30ec16
    return unknown_ffffffff8032291c(a1);
}

// Address range: 0x30ec3a - 0x30ec57
int64_t function_30ec3a(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 0x42234b12); // 0x30ec3a
    int64_t v2; // 0x30ec3a
    *v1 = *v1 + (int32_t)v2;
    int32_t * v3 = (int32_t *)(a3 + 11); // 0x30ec47
    *v3 = *v3 + (int32_t)a1;
    *(int32_t *)(a3 - 0x5ffe175a) = (int32_t)v2;
    return v2 & -133;
}

// Address range: 0x30ec70 - 0x30ec71
int64_t function_30ec70(void) {
    // 0x30ec70
    int64_t result; // 0x30ec70
    return result;
}

// Address range: 0x30ed06 - 0x30ed07
int64_t function_30ed06(void) {
    // 0x30ed06
    int64_t result; // 0x30ed06
    return result;
}

// Address range: 0x30ed24 - 0x30ed35
int64_t function_30ed24(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x30ed24
    int64_t v1; // 0x30ed24
    int16_t v2 = 256 * v1 + a3 & 0xff00 | a3 % 256; // 0x30ed26
    __asm_outsb(v2, (char)v1);
    uint64_t v3 = 2 * v1; // 0x30ed2a
    __asm_out_133(v2, (char)v3);
    return v3 & 0xffffff00 | (int64_t)*(char *)(v3 % 256 + v1);
}

// Address range: 0x30ed7e - 0x30ed83
int64_t function_30ed7e(void) {
    // 0x30ed7e
    return function_2197bc1();
}

// Address range: 0x30edcd - 0x30edce
int64_t function_30edcd(void) {
    // 0x30edcd
    int64_t result; // 0x30edcd
    return result;
}

// Address range: 0x30edea - 0x30edeb
int64_t function_30edea(void) {
    // 0x30edea
    int64_t result; // 0x30edea
    return result;
}

// Address range: 0x30edee - 0x30ee6b
int64_t function_30edee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t v2; // 0x30edee
    int32_t v3 = *(int32_t *)(a3 - 0x4aeeca7e) + (int32_t)v2; // 0x30edf3
    unsigned char v4 = *(char *)0xb15aa00; // 0x30edf9
    char v5 = v2 / 256; // 0x30edf9
    unsigned char v6 = v4 + v5; // 0x30edf9
    *(char *)0xb15aa00 = v6;
    if (v6 < 0 != ((v6 ^ v4) & (v6 ^ v5)) < 0) {
        // 0x30ee61
        __asm_out(-68, (char)v3);
        return function_aa3bf9();
    }
    uint32_t v7 = (int32_t)a3;
    int64_t result = 0x10000 * v3 >> 16; // 0x30ee01
    int32_t v8 = v6 < v4; // 0x30ee02
    uint32_t v9 = v8 + v7; // 0x30ee02
    int32_t v10 = v6 < v4; // 0x30ee02
    bool v11 = v6 < v4 ? v9 != -1 | v10 - v8 > v7 : v9 > v7; // 0x30ee02
    *(int32_t *)a3 = v10;
    char * v12 = (char *)(v2 - 0x2329be46); // 0x30ee04
    unsigned char v13 = *v12; // 0x30ee04
    *v12 = v13 / 2 | 128 * (char)v11;
    if (a4 == 1 || v6 >= v4) {
        // 0x30ee0e
        return result;
    }
    int64_t v14 = result; // 0x30ee12
    if (v13 % 2 == 0) {
        v14 = function_30edcd();
    }
    int64_t v15 = v14;
    int64_t v16 = v13 % 2 != 0 ? 22 : 21; // 0x30ee14
    unsigned char v17 = *(char *)&v1; // 0x30ee16
    return (v15 & 0xffffff00 | 234) + 0x55e34884 & 0xffffff6e | (int64_t)(v17 > (char)(v15 + v16));
}

// Address range: 0x30eea4 - 0x30eea5
int64_t function_30eea4(void) {
    // 0x30eea4
    int64_t result; // 0x30eea4
    return result;
}

// Address range: 0x30eeca - 0x30eed4
int64_t function_30eeca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30eeca
    int64_t result; // 0x30eeca
    int32_t * v1 = (int32_t *)(result + 0xcc08001); // 0x30eeca
    *v1 = *v1 + (int32_t)result;
    __asm_out_134((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x30ef11 - 0x30ef1d
int64_t function_30ef11(int64_t a1) {
    // 0x30ef11
    int64_t v1; // 0x30ef11
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x30ef11
    return function_ffffffff81322c1d((v2 ? -4 : 4) + a1);
}

// Address range: 0x30ef1e - 0x30ef21
int64_t function_30ef1e(void) {
    // 0x30ef1e
    int64_t result; // 0x30ef1e
    return result;
}

// Address range: 0x30ef65 - 0x30ef6b
int64_t function_30ef65(int64_t a1, int64_t a2) {
    // 0x30ef65
    int64_t v1; // 0x30ef65
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x30ef74 - 0x30ef75
int64_t function_30ef74(void) {
    // 0x30ef74
    int64_t result; // 0x30ef74
    return result;
}

// Address range: 0x30efa2 - 0x30efa3
int64_t function_30efa2(void) {
    // 0x30efa2
    int64_t result; // 0x30efa2
    return result;
}

// Address range: 0x30efb6 - 0x30efbb
int64_t function_30efb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30efb6
    return function_30efa2();
}

// Address range: 0x30efd5 - 0x30efd6
int64_t function_30efd5(void) {
    // 0x30efd5
    int64_t result; // 0x30efd5
    return result;
}
