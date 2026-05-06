/*
 * Targeted RetDec C for native executable gap queue batch 421.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1d5c5a-0x1d5e5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x43d067-0x43d267 rank=- name=- kind=- bytes=- uncovered=-
 *   0x43d267-0x43d467 rank=- name=- kind=- bytes=- uncovered=-
 *   0x43d467-0x43d667 rank=- name=- kind=- bytes=- uncovered=-
 *   0x43d667-0x43d867 rank=- name=- kind=- bytes=- uncovered=-
 *   0x461c34-0x461e34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x461e34-0x462034 rank=- name=- kind=- bytes=- uncovered=-
 *   0x462234-0x462434 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g1;
extern int g3;
extern int g5;
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

int64_t function_1d5be9();
int64_t function_1d5c5a(void);
int64_t function_1d5c72(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_2a248539();
int64_t function_43d067(int64_t a1, int64_t a2);
int64_t function_43d078(void);
int64_t function_43d093(int64_t a1);
int64_t function_43d0cf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_43d0d7(void);
int64_t function_43d0ed(int64_t a1);
int64_t function_43d0f9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_43d134(int64_t a1, int64_t a2, int64_t a3);
int64_t function_43d154(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43d15b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_43d196(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_43d340(void);
int64_t function_43d34e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43d383(int64_t a1, int64_t a2, int64_t a3);
int64_t function_43d3b8(int64_t a1);
int64_t function_43d427(int64_t a1, int64_t a2);
int64_t function_43d434(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43d456(int64_t a1);
int64_t function_43d473(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_43d496(int64_t a1);
int64_t function_43d49d(int64_t a1);
int64_t function_43d49f(void);
int64_t function_43d4ac(int64_t a1);
int64_t function_43d4b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43d504(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_43d5c3(void);
int64_t function_43d60b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_43d626(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_43d704(void);
int64_t function_43d717(void);
int64_t function_43d71b(void);
int64_t function_43d728(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43d74f(void);
int64_t function_43d752(void);
int64_t function_43d76f(void);
int64_t function_43d775(int64_t a1, int64_t a2, int64_t a3);
int64_t function_43d7b8(void);
int64_t function_43d7fc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_43d84b(int64_t a1);
int64_t function_461bc8();
int64_t function_461c34(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_461c44(int64_t a1, int64_t a2, int64_t a3);
int64_t function_461c6c(int64_t a1, int64_t a2);
int64_t function_461c90(int64_t a1);
int64_t function_461cab(int64_t a1, int64_t a2);
int64_t function_461d5c(void);
int64_t function_461d78(int64_t a1);
int64_t function_461d9b(void);
int64_t function_461dc4(int64_t a1);
int64_t function_461dd9(int64_t a1);
int64_t function_461de6(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_461e02(void);
int64_t function_461e19(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_461f0a(void);
int64_t function_461f24(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7, int64_t a8);
int64_t function_461f88(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_462023(int64_t a1);
int64_t function_462234(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_46236b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4623d0(void);
int64_t function_4623d7(void);
int64_t function_593d5e7e();
int64_t function_c4258();
int64_t function_ffffffffa89de760();
int64_t function_ffffffffb7717df6();
int64_t function_ffffffffea908719();
int64_t unknown_36fc07b();
int64_t unknown_ffffffff9d4b2807();

// Address range: 0x1d5c5a - 0x1d5c5c
int64_t function_1d5c5a(void) {
    // 0x1d5c5a
    int64_t result; // 0x1d5c5a
    bool v1; // 0x1d5c5a
    if (!v1) {
        result = function_1d5be9();
    }
    // 0x1d5c5c
    return result;
}

// Address range: 0x1d5c72 - 0x1d5dc6
int64_t function_1d5c72(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x1d5c72
    __asm_int(119);
    int64_t v1 = unknown_36fc07b(); // 0x1d5c75
    char * v2 = (char *)(v1 + 0x48519c00); // 0x1d5c7a
    *v2 = *v2 + (char)v1;
    return function_c4258(a1, a2);
}

// Address range: 0x43d067 - 0x43d06a
int64_t function_43d067(int64_t a1, int64_t a2) {
    // 0x43d067
    int64_t result; // 0x43d067
    return result;
}

// Address range: 0x43d078 - 0x43d07a
int64_t function_43d078(void) {
    // 0x43d078
    int64_t v1; // 0x43d078
    return function_43d0cf(v1, v1, v1);
}

// Address range: 0x43d093 - 0x43d097
int64_t function_43d093(int64_t a1) {
    // 0x43d093
    int64_t result; // 0x43d093
    return result;
}

// Address range: 0x43d0cf - 0x43d0d5
int64_t function_43d0cf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x43d0cf
    int64_t result; // 0x43d0cf
    return result;
}

// Address range: 0x43d0d7 - 0x43d0d8
int64_t function_43d0d7(void) {
    // 0x43d0d7
    int64_t result; // 0x43d0d7
    return result;
}

// Address range: 0x43d0ed - 0x43d0f9
int64_t function_43d0ed(int64_t a1) {
    // 0x43d0ed
    return (int64_t)*(int32_t *)-0x29ff8170a59fb292;
}

// Address range: 0x43d0f9 - 0x43d10f
int64_t function_43d0f9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x43d0f9
    int64_t v1; // 0x43d0f9
    char * v2 = (char *)(a1 + 0x44ed15cb + v1); // 0x43d0fd
    char v3 = *v2; // 0x43d0fd
    *v2 = v3 - (char)a4;
    if ((int64_t)v3 <= a4) {
        function_43d0d7();
    }
    // 0x43d109
    return function_ffffffffea908719();
}

// Address range: 0x43d134 - 0x43d138
int64_t function_43d134(int64_t a1, int64_t a2, int64_t a3) {
    // 0x43d134
    int64_t v1; // 0x43d134
    *(char *)a3 = -1 - (char)v1;
    return function_43d15b(a1, a2, a3, v1, v1);
}

// Address range: 0x43d154 - 0x43d15b
int64_t function_43d154(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x43d154
    *(char *)(4 * a3 + 0x7f6175e) = (char)a4;
    int64_t result; // 0x43d154
    return result;
}

// Address range: 0x43d15b - 0x43d161
int64_t function_43d15b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x43d15b
    int64_t result; // 0x43d15b
    return result;
}

// Address range: 0x43d196 - 0x43d326
int64_t function_43d196(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x43d196
    int64_t result; // 0x43d196
    int64_t v1; // 0x43d196
    if (*(char *)(a2 - 2) == (char)v1) {
        // 0x43d1bc
        result = __asm_sti();
    } else {
        // 0x43d1a2
        *(int32_t *)(8 * a1 + a3) = -1;
        result = 0x10000 * (int32_t)v1 >> 16;
    }
    return result;
}

// Address range: 0x43d340 - 0x43d343
int64_t function_43d340(void) {
    // 0x43d340
    int64_t result; // 0x43d340
    return result;
}

// Address range: 0x43d34e - 0x43d35b
int64_t function_43d34e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x43d34e
    int64_t result; // 0x43d34e
    unsigned char v1 = (char)result;
    bool v2; // 0x43d34e
    *(char *)a1 = 128 * (char)v2 | v1 / 2;
    int32_t * v3 = (int32_t *)(result + 72); // 0x43d357
    *v3 = (int32_t)(v1 % 2 != 0) - (int32_t)a4 + *v3;
    return result;
}

// Address range: 0x43d383 - 0x43d387
int64_t function_43d383(int64_t a1, int64_t a2, int64_t a3) {
    // 0x43d383
    int64_t v1; // 0x43d383
    int64_t result = v1;
    *(char *)result = (char)(result & v1);
    __asm_out_135((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x43d3b8 - 0x43d3b9
int64_t function_43d3b8(int64_t a1) {
    // 0x43d3b8
    int64_t result; // 0x43d3b8
    return result;
}

// Address range: 0x43d427 - 0x43d433
int64_t function_43d427(int64_t a1, int64_t a2) {
    // 0x43d427
    return function_593d5e7e();
}

// Address range: 0x43d434 - 0x43d440
int64_t function_43d434(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x43d434
    float80_t v1; // 0x43d434
    *(float64_t *)a2 = (float64_t)v1;
    return function_43d4ac(a1);
}

// Address range: 0x43d456 - 0x43d457
int64_t function_43d456(int64_t a1) {
    // 0x43d456
    int64_t result; // 0x43d456
    return result;
}

// Address range: 0x43d473 - 0x43d48f
int64_t function_43d473(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x43d473
    int64_t v1; // 0x43d473
    int32_t * v2 = (int32_t *)(v1 + 8 * a2); // 0x43d476
    *v2 = *v2 - 82;
    __asm_int(113);
    unsigned char v3 = *(char *)(v1 + a3 % 256); // 0x43d47d
    int64_t v4 = a3 & 0xffffff00 | (int64_t)v3; // 0x43d47d
    int64_t v5 = v4; // 0x43d485
    if (v3 >= 60) {
        int32_t v6 = *(int32_t *)v4; // 0x43d47e
        v5 = function_43d504(a1, (int64_t)(v6 ^ (int32_t)a2), v1 & 0xffff0060, v1, (int64_t)&g5);
    }
    int64_t v7 = v5;
    uint32_t v8 = *(int32_t *)v7 & (int32_t)v7; // 0x43d487
    unsigned char v9 = *(char *)(v1 + (int64_t)(v8 % 256)); // 0x43d489
    return (int64_t)(v8 & -256) | (int64_t)v9;
}

// Address range: 0x43d496 - 0x43d497
int64_t function_43d496(int64_t a1) {
    // 0x43d496
    int64_t result; // 0x43d496
    return result;
}

// Address range: 0x43d49d - 0x43d49e
int64_t function_43d49d(int64_t a1) {
    // 0x43d49d
    int64_t result; // 0x43d49d
    return result;
}

// Address range: 0x43d49f - 0x43d4a0
int64_t function_43d49f(void) {
    // 0x43d49f
    int64_t result; // 0x43d49f
    return result;
}

// Address range: 0x43d4ac - 0x43d4ad
int64_t function_43d4ac(int64_t a1) {
    // 0x43d4ac
    int64_t result; // 0x43d4ac
    return result;
}

// Address range: 0x43d4b5 - 0x43d502
int64_t function_43d4b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x43d4b5
    int64_t v1; // 0x43d4b5
    bool v2; // 0x43d4b5
    uint32_t v3 = (int32_t)v1 + 0x21d760a8 + (int32_t)v2; // 0x43d4b5
    int64_t result = v3; // 0x43d4b5
    if (v3 == 0) {
        int32_t * v4 = (int32_t *)(2 * result + a2); // 0x43d4d1
        *v4 = *v4 ^ v3;
        int32_t * v5 = (int32_t *)(a1 - 14); // 0x43d4d4
        *v5 = *v5 & (int32_t)v1;
        return result;
    }
    // 0x43d4dd
    *(int32_t *)a3 = 0;
    int64_t v6 = a3 & -0xff01 | (int64_t)&g3; // 0x43d4ea
    int64_t v7 = (int64_t)*(int32_t *)(v6 + 100); // 0x43d4ee
    int64_t v8 = -0xcb9c571 * v7; // 0x43d4ee
    char * v9 = (char *)(v6 - 125); // 0x43d4f8
    char v10 = *v9; // 0x43d4f8
    *v9 = v10 - (char)v6 + (char)(v8 != -0xcb9c57100000000 * v7 >> 32);
    return result & 0x6b593e00 | (int64_t)*(char *)(v8 & 0xffffffff);
}

// Address range: 0x43d504 - 0x43d5c1
int64_t function_43d504(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x43d504
    int64_t v1; // 0x43d504
    int64_t v2 = v1 + 0x2424ef04; // 0x43d504
    *(char *)0x322303b288463845 = (char)v2;
    char v3 = (char)(v1 / 256) + (char)a1; // 0x43d512
    *(char *)a1 = v3;
    if (v3 < 1) {
        char * v4 = (char *)((8 * a4 & -2048 | 1080) + a1); // 0x43d534
        *v4 = *v4 + (char)v1;
        return v1 + 0x6de0bb74 & 0xffffffff;
    }
    // 0x43d518
    if (llvm_ctpop_i8(v3) % 2 == 0) {
        // 0x43d549
        return v2 & 0xffffffff;
    }
    uint32_t v5 = (int32_t)v2 + 0x739eb54a; // 0x43d51a
    int64_t v6 = (int64_t)*(int32_t *)(int64_t)v5; // 0x43d51f
    int64_t v7 = -22 * v6; // 0x43d51f
    if (v5 != 0) {
        int32_t * v8 = (int32_t *)(a2 + 0x117dd739); // 0x43d524
        *v8 = *v8 ^ (int32_t)v1;
        return v7 & 0xfffffffe;
    }
    int32_t * v9 = (int32_t *)(v1 - 0x17920f56); // 0x43d567
    *v9 = (int32_t)(v7 != -0x1600000000 * v6 >> 32) - (int32_t)a3 + *v9;
    *(char *)-0x1c960985917835da = (char)v7;
    return a1 & 0xffffffff;
}

// Address range: 0x43d5c3 - 0x43d5c4
int64_t function_43d5c3(void) {
    // 0x43d5c3
    int64_t result; // 0x43d5c3
    return result;
}

// Address range: 0x43d60b - 0x43d623
int64_t function_43d60b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = __asm_int1(); // 0x43d60d
    char v2 = *(char *)-0x6e5fe97f; // 0x43d610
    int64_t v3; // 0x43d60b
    *(char *)-0x6e5fe97f = v2 + (char)(v3 | a3 / 256);
    unsigned char v4 = (char)v1; // 0x43d616
    char v5 = v4 + 60; // 0x43d616
    return v1 & -0x10000 | (int64_t)v5 | 256 * (16 * (int64_t)((v4 & 12) != 0) | (int64_t)(v4 > 195) | 64 * (int64_t)(v5 == 0) | 128 * (int64_t)(v5 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v5) % 2 == 0)) | 512;
}

// Address range: 0x43d626 - 0x43d6de
int64_t function_43d626(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x43d626
    int64_t result; // 0x43d626
    bool v1; // 0x43d626
    if (v1) {
        // 0x43d628
        return result;
    }
    // 0x43d665
    *(int32_t *)(a3 + 0x47009b6b) = (int32_t)result;
    char * v2 = (char *)(result - 0x62138ba7); // 0x43d670
    *v2 = *v2 & (char)result;
    return result;
}

// Address range: 0x43d704 - 0x43d705
int64_t function_43d704(void) {
    // 0x43d704
    int64_t result; // 0x43d704
    return result;
}

// Address range: 0x43d717 - 0x43d718
int64_t function_43d717(void) {
    // 0x43d717
    int64_t result; // 0x43d717
    return result;
}

// Address range: 0x43d71b - 0x43d728
int64_t function_43d71b(void) {
    // 0x43d71b
    int64_t result; // 0x43d71b
    *(char *)-0x72a9872bb1b629f4 = (char)result;
    return result;
}

// Address range: 0x43d728 - 0x43d74f
int64_t function_43d728(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x43d728
    int64_t v1; // 0x43d728
    __asm_out_134((int16_t)a3, (char)v1 ^ 84);
    return function_ffffffffa89de760();
}

// Address range: 0x43d74f - 0x43d750
int64_t function_43d74f(void) {
    // 0x43d74f
    int64_t result; // 0x43d74f
    return result;
}

// Address range: 0x43d752 - 0x43d753
int64_t function_43d752(void) {
    // 0x43d752
    int64_t result; // 0x43d752
    return result;
}

// Address range: 0x43d76f - 0x43d772
int64_t function_43d76f(void) {
    // 0x43d76f
    return function_43d717();
}

// Address range: 0x43d775 - 0x43d787
int64_t function_43d775(int64_t a1, int64_t a2, int64_t a3) {
    // 0x43d775
    *(char *)(a3 + 51) = 69;
    int64_t result; // 0x43d775
    return result;
}

// Address range: 0x43d7b8 - 0x43d7ba
int64_t function_43d7b8(void) {
    // 0x43d7b8
    return function_43d74f();
}

// Address range: 0x43d7fc - 0x43d803
int64_t function_43d7fc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x43d7fc
    *(char *)(a1 + 120) = (char)(a4 / 256);
    int64_t result; // 0x43d7fc
    return result;
}

// Address range: 0x43d84b - 0x43d851
int64_t function_43d84b(int64_t a1) {
    // 0x43d84b
    int64_t result; // 0x43d84b
    return result;
}

// Address range: 0x461c34 - 0x461c3b
int64_t function_461c34(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = __asm_in(-84); // 0x461c35
    unsigned char v2 = (char)v1 + 116; // 0x461c37
    int64_t result = (int64_t)v2 | (int64_t)(v1 & -256); // 0x461c39
    if (v2 == 0) {
        result = function_461bc8();
    }
    // 0x461c3b
    return result;
}

// Address range: 0x461c44 - 0x461c6c
int64_t function_461c44(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2;
    int64_t v2; // 0x461c44
    int32_t * v3 = (int32_t *)(v2 + 98); // 0x461c44
    bool v4; // 0x461c44
    int32_t v5 = (int32_t)v4 + (int32_t)v2 + *v3; // 0x461c44
    *v3 = v5;
    if (v5 != 0) {
        // 0x461c68
        return v2 & -256 | (int64_t)*(char *)&v1;
    }
    // 0x461c49
    return function_461c90(a1);
}

// Address range: 0x461c6c - 0x461c6e
int64_t function_461c6c(int64_t a1, int64_t a2) {
    // 0x461c6c
    int64_t result; // 0x461c6c
    return result;
}

// Address range: 0x461c90 - 0x461c97
int64_t function_461c90(int64_t a1) {
    // 0x461c90
    int64_t result; // 0x461c90
    return result;
}

// Address range: 0x461cab - 0x461cb1
int64_t function_461cab(int64_t a1, int64_t a2) {
    // 0x461cab
    int64_t result; // 0x461cab
    return result;
}

// Address range: 0x461d5c - 0x461d61
int64_t function_461d5c(void) {
    // 0x461d5c
    return function_ffffffffb7717df6();
}

// Address range: 0x461d78 - 0x461d79
int64_t function_461d78(int64_t a1) {
    // 0x461d78
    int64_t result; // 0x461d78
    return result;
}

// Address range: 0x461d9b - 0x461da1
int64_t function_461d9b(void) {
    // 0x461d9b
    int64_t result; // 0x461d9b
    return result;
}

// Address range: 0x461dc4 - 0x461dcf
int64_t function_461dc4(int64_t a1) {
    // 0x461dc4
    int64_t v1; // 0x461dc4
    return v1 + 0xf1245940 & 0xffffffff;
}

// Address range: 0x461dd9 - 0x461ddc
int64_t function_461dd9(int64_t a1) {
    // 0x461dd9
    int64_t result; // 0x461dd9
    return result;
}

// Address range: 0x461de6 - 0x461dfa
int64_t function_461de6(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x461de6
    int64_t v1; // 0x461de6
    char * v2 = (char *)(v1 + 48); // 0x461de6
    bool v3; // 0x461de6
    *v2 = (char)v3 - (char)(a3 / 256) + *v2;
    *(char *)0x429e7e4ad8240357 = (char)v1;
    return v1 & 0x45a9c34b;
}

// Address range: 0x461e02 - 0x461e03
int64_t function_461e02(void) {
    // 0x461e02
    int64_t result; // 0x461e02
    return result;
}

// Address range: 0x461e19 - 0x461ee3
int64_t function_461e19(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x461e19
    int64_t v1; // 0x461e19
    bool v2; // 0x461e19
    if (!v2) {
        // 0x461e1b
        *(int32_t *)v1 = 0;
        return a2 & 0xffffff00 | (int64_t)__asm_in_137((int16_t)a3);
    }
    if (!v2) {
        function_461e02();
    }
    int64_t v3 = unknown_ffffffff9d4b2807(); // 0x461e25
    int16_t v4 = a3; // 0x461e2a
    __asm_outsd(v4, *(int32_t *)a5);
    int64_t v5 = v3 & 0xffffffff ^ 0xb559049d; // 0x461e2c
    if ((v3 & 256) != 0) {
        int32_t * v6 = (int32_t *)(v1 + 0x1cc582f3 + 2 * v1); // 0x461e35
        *v6 = *v6 - 0x6653468a;
        return v5 & 0xffffff00 | (int64_t)__asm_in_137(v4);
    }
    if (a4 == 1 || (int32_t)a1 == (int32_t)v5) {
        // 0x461e70
        return (int64_t)__asm_in_137(v4) | 0xdac0300;
    }
    // 0x461ed6
    return v5 + 0x17457400 & 0xffffffff;
}

// Address range: 0x461f0a - 0x461f0f
int64_t function_461f0a(void) {
    // 0x461f0a
    return function_2a248539();
}

// Address range: 0x461f24 - 0x461f86
int64_t function_461f24(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7, int64_t a8) {
    // 0x461f24
    int64_t v1; // 0x461f24
    uint64_t result = v1;
    int64_t v2 = a1;
    int32_t v3 = *(int32_t *)(a4 + 0x605f554b); // 0x461f24
    bool v4; // 0x461f24
    int64_t v5 = (int32_t)v4 + (int32_t)a2 - v3; // 0x461f24
    int32_t * v6 = (int32_t *)(v1 - 125); // 0x461f56
    *v6 = *v6 + (int32_t)v1;
    int32_t v7 = result; // 0x461f61
    __asm_out_133(-59, v7);
    *(char *)v2 = *(char *)&v2 | (char)a3;
    char * v8 = (char *)(a4 - 0x6fe52cc0); // 0x461f65
    unsigned char v9 = *v8; // 0x461f65
    *v8 = v9 - 113;
    int32_t * v10 = (int32_t *)(v2 - 0x6abcb6ef); // 0x461f6c
    *v10 = (int32_t)(v9 < 113) + v7 + *v10;
    uint32_t v11 = (int32_t)a4 % 32; // 0x461f72
    if (v11 != 0) {
        int32_t * v12 = (int32_t *)(v5 + 7); // 0x461f72
        uint32_t v13 = *v12; // 0x461f72
        *v12 = v13 >> 32 - v11 | v13 << v11;
    }
    *(char *)v2 = *(char *)v5;
    int64_t v14 = (a7 & (int64_t)&g1) == 0 ? 1 : -1; // 0x461f76
    int64_t v15 = v2 + v14; // 0x461f76
    v2 = v15;
    if ((a7 & 65) == 0) {
        // 0x461fe1
        return result;
    }
    int64_t v16 = v14 + v5; // 0x461f76
    *(char *)v15 = *(char *)v16;
    char * v17 = (char *)(v16 + v14); // 0x461f7a
    *v17 = (char)(result / 256) + (char)(a7 % 2 != 0) + *v17;
    return result & -256 | (int64_t)(*(char *)0x76395efb & (char)result);
}

// Address range: 0x461f88 - 0x461fab
int64_t function_461f88(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x461f88
    __asm_in(-124);
    int16_t v1 = a3; // 0x461f8b
    int64_t v2; // 0x461f88
    __asm_outsd(v1, (int32_t)v2);
    char * v3 = (char *)(a4 + 0x396cf42b + 8 * v2); // 0x461f8c
    *v3 = *v3 ^ 76;
    int64_t v4; // 0x461f88
    __asm_rcl(*(char *)&v4);
    __asm_sti();
    __asm_outsd(v1, *(int32_t *)&v4);
    return v2 & 0xffffff00 | (int64_t)*(char *)0x1be58a6ecdf194f;
}

// Address range: 0x462023 - 0x462029
int64_t function_462023(int64_t a1) {
    // 0x462023
    int64_t result; // 0x462023
    return result;
}

// Address range: 0x462234 - 0x462332
int64_t function_462234(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t v2; // 0x462234
    char * v3 = (char *)(v2 + 43); // 0x462235
    *v3 = *v3 ^ (char)(a4 / 256);
    int64_t v4; // 0x462234
    *(int32_t *)a1 = *(int32_t *)&v4;
    bool v5; // 0x462234
    int64_t v6 = v5 ? -4 : 4; // 0x462238
    v4 = v6 + a2;
    *(int32_t *)(a3 - 0x7127ffb9) = (int32_t)v2;
    int32_t result = (int32_t)a3 | 0x3b021f3f; // 0x462243
    if (result < 0) {
        // 0x462277
        return result;
    }
    int64_t result2 = (int64_t)&v1; // 0x462239
    int64_t v7 = __asm_int3(v6 + a1, v4); // 0x46224a
    int32_t * v8 = (int32_t *)(v2 - 55); // 0x46224e
    int32_t v9 = a4; // 0x46224e
    *v8 = *v8 & v9;
    int32_t * v10 = (int32_t *)(v2 - 104); // 0x462253
    *v10 = *v10 & v9;
    char v11 = *(char *)(8 * a3 - 41 + result2); // 0x46225f
    __asm_outsb((int16_t)a3, *(char *)(v4 + (v5 ? -8 : 8)));
    int64_t v12 = v7 & 0xffffff00 | (v2 + 4) % 256; // 0x462264
    if (v12 == 1) {
        // 0x462268
        return result2;
    }
    int64_t result3 = a4 & 0xffffff00 | (int64_t)(v11 | (char)a4); // 0x46225f
    int32_t * v13 = (int32_t *)(v12 + 63); // 0x46226f
    *v13 = *v13 ^ (int32_t)result3;
    return result3;
}

// Address range: 0x46236b - 0x462373
int64_t function_46236b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x396687); // 0x46236b
    int64_t result; // 0x46236b
    *v1 = *v1 & (int32_t)result;
    return result;
}

// Address range: 0x4623d0 - 0x4623d6
int64_t function_4623d0(void) {
    // 0x4623d0
    int64_t result; // 0x4623d0
    return result;
}

// Address range: 0x4623d7 - 0x4623dc
int64_t function_4623d7(void) {
    // 0x4623d7
    int64_t v1; // 0x4623d7
    return v1 & -48;
}
