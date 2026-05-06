/*
 * Targeted RetDec C for native executable gap queue batch 415.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x226666-0x226866 rank=- name=- kind=- bytes=- uncovered=-
 *   0x226a66-0x226c66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x271c41-0x271e41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x271e41-0x272041 rank=- name=- kind=- bytes=- uncovered=-
 *   0x272041-0x272241 rank=- name=- kind=- bytes=- uncovered=-
 *   0x272441-0x272641 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f199e-0x3f1b9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f1d9e-0x3f1f9e rank=- name=- kind=- bytes=- uncovered=-
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
extern int g2;
extern int g3;
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

int64_t function_226649();
int64_t function_226666(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2266ab(int64_t a1);
int64_t function_226711(void);
int64_t function_226735(int64_t a1);
int64_t function_22675f(int64_t a1);
int64_t function_22677d(void);
int64_t function_2267a4(void);
int64_t function_226815(void);
int64_t function_226a66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_226b38(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_226b62(int64_t a1, int64_t a2, int64_t a3);
int64_t function_226b9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_271c41(int64_t a1);
int64_t function_271c68(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_271dda(void);
int64_t function_271e7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_271ea9(int64_t a1, int64_t a2);
int64_t function_271eae(void);
int64_t function_271ed5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_271f6f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_271f84(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_271fdc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27204c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_272157(int64_t a1);
int64_t function_272197(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2721ac(int64_t a1, int64_t a2, int64_t a3);
int64_t function_272234(void);
int64_t function_272441(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_272513(int64_t a1, int64_t a2, int64_t a3);
int64_t function_272538(int64_t a1);
int64_t function_272561(int64_t a1, int64_t a2, int64_t a3);
int64_t function_272595(int64_t a1, uint64_t a2, int64_t a3);
int64_t function_2725b8(void);
int64_t function_2725c2(void);
int64_t function_2725eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_272607(int64_t a1, int64_t a2, int64_t a3);
int64_t function_272615(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_272627(int64_t a1);
int64_t function_27262b(int64_t a1, int64_t a2);
int64_t function_275a72();
int64_t function_3f198d();
int64_t function_3f199e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f19c5(void);
int64_t function_3f19f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3f1a26(void);
int64_t function_3f1a4a(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_3f1a90(void);
int64_t function_3f1a92(int64_t a1);
int64_t function_3f1aed(void);
int64_t function_3f1b01(void);
int64_t function_3f1b03(void);
int64_t function_3f1b1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f1b33(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f1b6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f1d9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3f1e44(void);
int64_t function_3f1e55(void);
int64_t function_3f1e88(void);
int64_t function_3f1e8e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3f1ea5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3f1ec7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f1ee1(void);
int64_t function_3f1f05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_695e60cc();
int64_t function_cf3c7();
int64_t function_ffffffffbb575dcb();
int64_t function_ffffffffd07d2938();
int64_t function_ffffffffd26f1ffd();
int64_t unknown_10888ae6();
int64_t unknown_1d21c5a1();
int64_t unknown_28493179();
int64_t unknown_3abf55ef();
int64_t unknown_4db870ac();
int64_t unknown_66ded9d();
int64_t unknown_831fd26();
int64_t unknown_ffffffff914969f1();
int64_t unknown_ffffffffaec4726a();
int64_t unknown_ffffffffaf17b4ea();
int64_t unknown_ffffffffc921f70d();
int64_t unknown_ffffffffe91f12e2();

// Address range: 0x226666 - 0x22667d
int64_t function_226666(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x226666
    int64_t result; // 0x226666
    if (a4 == 0) {
        result = function_226666(a1, a2, a3, 0);
    }
    char v1 = *(char *)-0x4bcdfe88; // 0x226671
    int64_t v2; // 0x226666
    *(char *)-0x4bcdfe88 = v1 + (char)((uint64_t)v2 / 256);
    return result;
}

// Address range: 0x2266ab - 0x2266ae
int64_t function_2266ab(int64_t a1) {
    // 0x2266ab
    int64_t result; // 0x2266ab
    bool v1; // 0x2266ab
    if (v1) {
        result = function_226649();
    }
    // 0x2266ad
    return result;
}

// Address range: 0x226711 - 0x226712
int64_t function_226711(void) {
    // 0x226711
    int64_t result; // 0x226711
    return result;
}

// Address range: 0x226735 - 0x226736
int64_t function_226735(int64_t a1) {
    // 0x226735
    int64_t result; // 0x226735
    return result;
}

// Address range: 0x22675f - 0x226760
int64_t function_22675f(int64_t a1) {
    // 0x22675f
    int64_t result; // 0x22675f
    return result;
}

// Address range: 0x22677d - 0x22677e
int64_t function_22677d(void) {
    // 0x22677d
    int64_t result; // 0x22677d
    return result;
}

// Address range: 0x2267a4 - 0x2267a5
int64_t function_2267a4(void) {
    // 0x2267a4
    int64_t result; // 0x2267a4
    return result;
}

// Address range: 0x226815 - 0x22681f
int64_t function_226815(void) {
    int64_t result = __asm_int1(); // 0x22681b
    int64_t v1; // 0x226815
    if ((int32_t)v1 < 0x8070002) {
        result = function_2267a4();
    }
    // 0x226897
    return result;
}

// Address range: 0x226a66 - 0x226aea
int64_t function_226a66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x226a66
    int64_t v1; // 0x226a66
    uint64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = a1;
    bool v5; // 0x226a66
    if (!v5) {
        // 0x226a69
        return v2 & 0xfaa901e8;
    }
    int32_t * v6 = (int32_t *)(a3 - 0x6e19fe63 + v1);
    int64_t v7 = 0x4000 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5; // 0x226ab0
    bool v8; // 0x226a66
    bool v9; // 0x226a66
    bool v10; // 0x226a66
    bool v11; // 0x226a66
    int64_t v12 = v7 | 2048 | 128 * (int64_t)v10 | 64 * (int64_t)v11 | 16 * (int64_t)v8 | (int64_t)false | 4 * (int64_t)v9 | 2; // 0x226ab0
    *(int64_t *)(v1 - 8) = v12;
    while (!v10) {
        uint32_t v13 = *v6; // 0x226aa9
        uint32_t v14 = (int32_t)v4; // 0x226aa9
        int32_t v15 = v13 + v14; // 0x226aa9
        unsigned char v16 = llvm_ctpop_i8((char)v15); // 0x226aa9
        *v6 = v15;
        bool v17 = ((v15 ^ v13) & (v15 ^ v14)) < 0; // 0x226aa9
        v10 = v15 < 0;
        v11 = v15 == 0;
        v8 = v14 % 16 + v13 % 16 > 15;
        v9 = v16 % 2 == 0;
        bool v18 = v15 < v13; // 0x226aa9
        v12 = v7 | 2048 * (int64_t)v17 | 128 * (int64_t)v10 | 64 * (int64_t)v11 | 16 * (int64_t)v8 | (int64_t)v18 | 4 * (int64_t)v9 | 2;
        *(int64_t *)(v1 - 8) = v12;
    }
    // 0x226ab4
    *(char *)v4 = *(char *)&v4 | (char)(v2 / 256);
    int64_t result = (v2 + 255) % 256 | v2 & -256; // 0x226ab6
    int64_t v19 = *(int64_t *)v1; // 0x226abb
    char * v20 = (char *)(v3 + result); // 0x226abc
    unsigned char v21 = *v20; // 0x226abc
    char v22 = v21 / 2; // 0x226abc
    *v20 = v22;
    *(int32_t *)0x33737a2d9e3f01e8 = (int32_t)result;
    if (v21 % 2 != 0 || v22 == 0) {
        int32_t v23 = *(int32_t *)&v3; // 0x226ad7
        *(int32_t *)v3 = (int32_t)v19 & -0xff01 | (int32_t)&g2 | v23;
        int64_t v24 = __asm_iretd(); // 0x226ad9
        char * v25 = (char *)(8 * v24 - 0x6e85db18); // 0x226ada
        *v25 = *v25 + (char)v24;
        char * v26 = (char *)(v1 - 111); // 0x226ae1
        *v26 = *v26 + (char)v12;
        return unknown_ffffffffaf17b4ea();
    }
    // 0x226ad2
    return result;
}

// Address range: 0x226b38 - 0x226b48
int64_t function_226b38(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x226b44
    int64_t v2; // 0x226b38
    if (v1 != 0) {
        unsigned char v3 = *(char *)(v2 + 0x1e8f850); // 0x226b38
        char * v4 = (char *)(256 * (int64_t)v3 | a3 & -0xff01); // 0x226b44
        unsigned char v5 = *v4; // 0x226b44
        *v4 = v5 << v1 | (char)((int32_t)v2 > 0x796367f7) << v1 - 1 | (char)((int16_t)v5 >> (int16_t)(9 - v1));
    }
    return v2 + 0x869c9808 & 0xffffffff;
}

// Address range: 0x226b62 - 0x226b82
int64_t function_226b62(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 0x2f59002b); // 0x226b62
    int64_t v2; // 0x226b62
    *v1 = *v1 + (int32_t)v2;
    int32_t * v3 = (int32_t *)(v2 + 127); // 0x226b72
    *v3 = *v3 & 19;
    int64_t v4; // 0x226b62
    *(char *)a1 = *(char *)&v4 | (char)(v2 / 256);
    return *(int64_t *)0x5009e84bf2b42650;
}

// Address range: 0x226b9b - 0x226b9f
int64_t function_226b9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x226b9b
    int64_t result; // 0x226b9b
    *(char *)a4 = (char)(result ^ result);
    return result;
}

// Address range: 0x271c41 - 0x271c68
int64_t function_271c41(int64_t a1) {
    // 0x271c41
    int64_t v1; // 0x271c41
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t v3; // 0x271c41
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    *(int64_t *)(v1 - 8) = a1;
    *(int64_t *)(v1 - 16) = a1;
    return function_cf3c7();
}

// Address range: 0x271c68 - 0x271dda
int64_t function_271c68(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x271c68
    int64_t v1; // bp-72, 0x271c68
    int64_t v2 = (int64_t)&v1; // 0x271d75
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x271d7e
    *(int64_t *)(v2 + 32) = v1;
    *v3 = v2;
    v1 = v2 + 16;
    int64_t v4 = v2 + 8; // 0x271da3
    v1 = *(int64_t *)v4;
    *v3 = v4;
    return function_cf3c7();
}

// Address range: 0x271dda - 0x271ddf
int64_t function_271dda(void) {
    // 0x271dda
    return function_275a72();
}

// Address range: 0x271e7e - 0x271ea5
int64_t function_271e7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x271e7e
    int64_t v1; // 0x271e7e
    int32_t * v2 = (int32_t *)(v1 + 14); // 0x271e7e
    *v2 = *v2 + (int32_t)v1;
    __asm_iretd();
    unknown_1d21c5a1();
    return function_ffffffffd26f1ffd();
}

// Address range: 0x271ea9 - 0x271ead
int64_t function_271ea9(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 7); // 0x271ea9
    int64_t result; // 0x271ea9
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x271eae - 0x271eaf
int64_t function_271eae(void) {
    // 0x271eae
    int64_t result; // 0x271eae
    return result;
}

// Address range: 0x271ed5 - 0x271f36
int64_t function_271ed5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x271ed5
    int64_t v1; // 0x271ed5
    int64_t v2 = v1;
    int64_t v3 = a4 & -256 | (int64_t)*(char *)(v2 - 24); // 0x271ed5
    int32_t * v4 = (int32_t *)(v3 - 0x17fec228); // 0x271ed8
    *v4 = *v4 + (int32_t)v3;
    int64_t v5; // 0x271ed5
    *(int32_t *)v5 = *(int32_t *)&v5 + (int32_t)a3;
    int64_t v6 = unknown_10888ae6(); // 0x271ee0
    v5 = v6;
    char * v7 = (char *)(4 * v2 + a3); // 0x271ee5
    *v7 = *v7 | (char)v6;
    int64_t v8 = v1 - 0x17cc46f1; // 0x271eed
    __writefsbyte(v8, -__readfsbyte(v8));
    int32_t * v9 = (int32_t *)(a2 + 0x13d0090); // 0x271ef4
    uint32_t v10 = *v9; // 0x271ef4
    uint32_t v11 = v10 + (int32_t)v2; // 0x271ef4
    *v9 = v11;
    int32_t * v12 = (int32_t *)v6; // 0x271efa
    uint32_t v13 = *v12; // 0x271efa
    uint32_t v14 = v11 < v10 ? 0x41b1e819 : 0x41b1e818; // 0x271efa
    *v12 = v13 - v14;
    char v15 = *(char *)(a1 - 112); // 0x271f00
    int32_t v16 = *(int32_t *)(a2 - 0x676c39a5); // 0x271f03
    uint32_t v17 = v16 + (int32_t)(v2 & 0xffffff00 | (int64_t)(v15 + (char)v2 + (char)(v11 < v10 | v13 < v14))); // 0x271f03
    int64_t v18; // 0x271ed5
    if (v17 == 0) {
        int64_t v19 = function_271eae(); // 0x271f09
        v5 = v19;
        v18 = v19;
    } else {
        // 0x271ed5
        v18 = v5;
    }
    char v20 = *(char *)(a3 + 0x358e88c0e); // 0x271f0b
    int32_t v21 = *(int32_t *)((int64_t)v17 - 0x26fec300); // 0x271f0f
    char v22 = *(char *)(v18 + 88); // 0x271f19
    int32_t * v23 = (int32_t *)(v18 + 9); // 0x271f1c
    *v23 = *v23 | -0x29c5dce9;
    int32_t v24 = __asm_insd(256 * (int16_t)(v20 | (char)(a3 / 256)) | (int16_t)(v22 | (char)a3)); // 0x271f1f
    *(int32_t *)a1 = v24;
    uint64_t v25 = v5; // 0x271f22
    char v26 = *(char *)(int64_t)(-0x178ab8d7 * v21); // 0x271f22
    int64_t result = 256 * (int64_t)((char)(v25 / 256) - v26) | v25 & -0xff01; // 0x271f22
    *(char *)0xd63a2317 = 2 * *(char *)0xd63a2317;
    *(int32_t *)0x4c41e100013dc09e = (int32_t)result;
    return result;
}

// Address range: 0x271f6f - 0x271f71
int64_t function_271f6f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x271f6f
    int64_t result; // 0x271f6f
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x271f84 - 0x271f9b
int64_t function_271f84(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x271f84
    int64_t v1; // 0x271f84
    *(char *)-0x184cd66a = *(char *)-0x184cd66a + (char)(v1 / 256);
    *(int32_t *)a1 = (int32_t)v1;
    return v1 & -231;
}

// Address range: 0x271fdc - 0x271fe5
int64_t function_271fdc(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 0x440ad8e2); // 0x271fdc
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x271fdc
    return result;
}

// Address range: 0x27204c - 0x27204e
int64_t function_27204c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27204c
    int64_t result; // 0x27204c
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x272157 - 0x272158
int64_t function_272157(int64_t a1) {
    // 0x272157
    int64_t result; // 0x272157
    return result;
}

// Address range: 0x272197 - 0x2721ac
int64_t function_272197(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x272197
    unknown_66ded9d();
    int64_t v1 = a3 & -0xff01; // 0x27219c
    char * v2 = (char *)v1; // 0x27219e
    int64_t v3; // 0x272197
    *v2 = *v2 + (char)((uint64_t)v3 / 256);
    *(int32_t *)a1 = __asm_insd((int16_t)v1);
    return unknown_4db870ac();
}

// Address range: 0x2721ac - 0x2721b2
int64_t function_2721ac(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2721ac
    int64_t v1; // 0x2721ac
    return v1 & 0xffffffff;
}

// Address range: 0x272234 - 0x272237
int64_t function_272234(void) {
    // 0x272234
    int64_t result; // 0x272234
    return result;
}

// Address range: 0x272441 - 0x2724f1
int64_t function_272441(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2 = a6;
    int64_t v3; // 0x272441
    bool v4; // 0x272441
    uint64_t v5 = v3 - (v4 ? 0x13d003b : 0x13d003a); // 0x272441
    int64_t v6 = (int64_t)&v2; // 0x272447
    int32_t * v7 = (int32_t *)(a1 - 101); // 0x272448
    *v7 = -*v7;
    int64_t result = v6 & 0xfff8 | v5 & 0xffff0000; // 0x27244c
    uint64_t v8 = a4 - 1; // 0x27244e
    if (v8 == 0) {
        // 0x272450
        return result;
    }
    int64_t v9 = v6 & -0x10000 | v5 % 0x10000; // 0x27244c
    int32_t * v10 = (int32_t *)a3; // 0x2724bc
    int32_t v11 = v9; // 0x2724bc
    *v10 = *v10 + v11;
    char v12 = *(char *)result + (char)v6; // 0x2724c0
    int32_t * v13 = (int32_t *)(v3 - 86); // 0x2724c2
    int32_t v14 = *v13 | (int32_t)a3; // 0x2724c2
    char v15 = v12; // 0x2724c5
    if (v14 == 0) {
      lab_0x2724db:;
        int64_t v16 = (v4 ? -4 : 4) + a1; // 0x27244b
        __asm_out(0, v15 | (char)&g3);
        float80_t v17; // 0x272441
        *(int16_t *)(unknown_ffffffffe91f12e2() + 0x24e5a75e & 0xffffffff) = (int16_t)v17;
        *(char *)v16 = *(char *)&v1;
        int64_t v18 = v4 ? -1 : 1; // 0x2724e8
        int64_t v19 = unknown_3abf55ef(v16 + v18, v1 + v18); // 0x2724e9
        return (v19 + 235) % 256 | v19 & -256;
    }
    int64_t v20 = result & 0xffffff00; // 0x2724c0
    int32_t v21 = v14; // 0x2724c2
    char v22 = v12; // 0x2724c0
    int32_t v23 = v11; // 0x2724bc
    int64_t v24 = v9;
    int64_t v25 = v22;
    while (v21 < 0) {
        int64_t v26 = v21;
        int64_t v27 = v1;
        int32_t * v28 = (int32_t *)(v27 + 121 + 2 * v27); // 0x2724b1
        *v28 = *v28 + v23;
        __asm_out((int16_t)v21, v22);
        int64_t v29 = v24 - 8; // 0x2724b6
        *(int64_t *)v29 = v26;
        uint64_t v30 = (v25 & 145) + v8 / 256; // 0x2724ba
        int32_t * v31 = (int32_t *)v26; // 0x2724bc
        v23 = v29;
        *v31 = *v31 + v23;
        v22 = *(char *)(v30 % 256 | v20) + (char)v30;
        v21 |= *v13;
        v15 = v22;
        if (v21 == 0) {
            goto lab_0x2724db;
        }
        v24 = v29;
        v25 = v22;
    }
    int64_t result2 = v20 | v25;
    int32_t * v32 = (int32_t *)v8; // 0x2724c9
    uint32_t v33 = *v32; // 0x2724c9
    uint32_t v34 = v33 + (int32_t)v1; // 0x2724c9
    *v32 = v34;
    *(int64_t *)(v24 - 8) = v1;
    char * v35 = (char *)(result2 + 0x1382240a); // 0x2724cc
    *v35 = *v35 + 77 + (char)(v34 < v33);
    return result2;
}

// Address range: 0x272513 - 0x272535
int64_t function_272513(int64_t a1, int64_t a2, int64_t a3) {
    // 0x272513
    int64_t v1; // 0x272513
    char v2 = *(char *)((8 * v1 | 1) + v1); // 0x272513
    __asm_out_133((int16_t)(a3 & 0xff00 | (int64_t)(v2 | (char)a3)), (int32_t)v1);
    unknown_831fd26();
    return v1 & 0xffffff00 | 92;
}

// Address range: 0x272538 - 0x27253b
int64_t function_272538(int64_t a1) {
    // 0x272538
    int64_t result; // 0x272538
    return result;
}

// Address range: 0x272561 - 0x272588
int64_t function_272561(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = __asm_insd((int16_t)a3); // 0x272563
    int32_t * v2 = (int32_t *)a1; // 0x272563
    *v2 = v1;
    int64_t v3 = unknown_ffffffffaec4726a(); // 0x272564
    *(int32_t *)v3 = (int32_t)v3;
    bool v4; // 0x272561
    int64_t v5 = (v4 ? -1 : 1) + a2; // 0x27256d
    int64_t v6; // 0x272561
    *v2 = (int32_t)(v3 & 0xffffff00 | (int64_t)*(char *)&v6);
    int64_t v7 = a1 + 4; // 0x272570
    *(int32_t *)-0xf1efe1750b5dff6 = (int32_t)unknown_28493179(v7, v5);
    int64_t v8; // 0x272561
    return unknown_ffffffff914969f1(v7, v5, a3, v8);
}

// Address range: 0x272595 - 0x2725ac
int64_t function_272595(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x272595
    int64_t result; // 0x272595
    bool v1; // 0x272595
    if (v1) {
        // 0x2725a7
        return result & -256 | a2 % 256;
    }
    // 0x272599
    return result;
}

// Address range: 0x2725b8 - 0x2725b9
int64_t function_2725b8(void) {
    // 0x2725b8
    int64_t result; // 0x2725b8
    return result;
}

// Address range: 0x2725c2 - 0x2725c3
int64_t function_2725c2(void) {
    // 0x2725c2
    int64_t result; // 0x2725c2
    return result;
}

// Address range: 0x2725eb - 0x2725f7
int64_t function_2725eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffff914969f1(a1, a2, a3, a4); // 0x2725eb
    int64_t v2; // 0x2725eb
    char * v3 = (char *)(a3 - 78 + v2); // 0x2725f0
    *v3 = *v3 + (char)a4;
    return (v1 + 242) % 256 | v1 & -256;
}

// Address range: 0x272607 - 0x272615
int64_t function_272607(int64_t a1, int64_t a2, int64_t a3) {
    // 0x272607
    unknown_ffffffffc921f70d();
    return function_2725c2();
}

// Address range: 0x272615 - 0x27261c
int64_t function_272615(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x272615
    int64_t result; // 0x272615
    *(int32_t *)a3 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x272627 - 0x27262a
int64_t function_272627(int64_t a1) {
    // 0x272627
    int64_t result; // 0x272627
    return result;
}

// Address range: 0x27262b - 0x27262e
int64_t function_27262b(int64_t a1, int64_t a2) {
    // 0x27262b
    int64_t v1; // 0x27262b
    *(char *)a1 = (char)v1;
    return function_2725b8();
}

// Address range: 0x3f199e - 0x3f19a7
int64_t function_3f199e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = __asm_in((int16_t)a3); // 0x3f199e
    int64_t v2; // 0x3f199e
    int32_t * v3 = (int32_t *)(v2 + 0x2435f23e); // 0x3f199f
    *v3 = *v3 ^ (int32_t)a4;
    return v2 & -256 | (int64_t)v1;
}

// Address range: 0x3f19c5 - 0x3f19c7
int64_t function_3f19c5(void) {
    // 0x3f19c5
    int64_t result; // 0x3f19c5
    return result;
}

// Address range: 0x3f19f3 - 0x3f1a26
int64_t function_3f19f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3f19f3
    int64_t v1; // 0x3f19f3
    int64_t v2; // 0x3f19f3
    if ((int32_t)v2 >= 0x7a5bc747) {
        v1 = function_3f198d();
    }
    int64_t v3 = v1 + 0xd475e545 & 0xffffffff; // 0x3f1a01
    *(int32_t *)a4 = (int32_t)a4 >> 1;
    function_3f1a4a(a5, a2, a3);
    __asm_outsd((int16_t)a3, (int32_t)a2);
    int64_t v4 = v3 - 8; // 0x3f1a0c
    *(int64_t *)v4 = v3;
    *(char *)(a2 + 24 + 4 * v2) = 122;
    *(int64_t *)(v3 - 16) = v4;
    return function_ffffffffbb575dcb();
}

// Address range: 0x3f1a26 - 0x3f1a29
int64_t function_3f1a26(void) {
    // 0x3f1a26
    int64_t result; // 0x3f1a26
    return result;
}

// Address range: 0x3f1a4a - 0x3f1a73
int64_t function_3f1a4a(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = a1;
    int64_t result; // 0x3f1a4a
    char v2 = result & a3 / 256; // 0x3f1a4b
    unsigned char v3 = llvm_ctpop_i8(v2); // 0x3f1a4b
    *(char *)result = v2;
    if (v3 % 2 == 0) {
        // 0x3f1a50
        return result;
    }
    int32_t * v4 = (int32_t *)(result + 72); // 0x3f1a67
    *v4 = *v4 & (int32_t)v1;
    *(int32_t *)v1 = *(int32_t *)&v1 + 1;
    return result;
}

// Address range: 0x3f1a90 - 0x3f1a92
int64_t function_3f1a90(void) {
    // 0x3f1a90
    int64_t result; // 0x3f1a90
    return result;
}

// Address range: 0x3f1a92 - 0x3f1a93
int64_t function_3f1a92(int64_t a1) {
    // 0x3f1a92
    int64_t result; // 0x3f1a92
    return result;
}

// Address range: 0x3f1aed - 0x3f1af4
int64_t function_3f1aed(void) {
    // 0x3f1aed
    int64_t v1; // 0x3f1aed
    return function_3f1b6e(v1, v1, v1, v1);
}

// Address range: 0x3f1b01 - 0x3f1b02
int64_t function_3f1b01(void) {
    // 0x3f1b01
    int64_t result; // 0x3f1b01
    return result;
}

// Address range: 0x3f1b03 - 0x3f1b04
int64_t function_3f1b03(void) {
    // 0x3f1b03
    int64_t result; // 0x3f1b03
    return result;
}

// Address range: 0x3f1b1a - 0x3f1b33
int64_t function_3f1b1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3f1b1a
    int64_t v1; // 0x3f1b1a
    bool v2; // 0x3f1b1a
    if (!v2) {
        v1 = function_3f1b01();
    }
    // 0x3f1b21
    __asm_out_134(33, (int32_t)v1);
    int64_t result = __asm_sti(); // 0x3f1b29
    *(char *)a1 = (char)a1 - (char)a4;
    return result;
}

// Address range: 0x3f1b33 - 0x3f1b50
int64_t function_3f1b33(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)(a2 + 0x380124a9 + 8 * a3); // 0x3f1b33
    int64_t v2; // 0x3f1b33
    int32_t * v3 = (int32_t *)(v2 - 0x3fe73d7c); // 0x3f1b3b
    *v3 = *v3 + (int32_t)a3 + (int32_t)(v1 > (char)(v2 / 256));
    int64_t result; // 0x3f1b33
    int64_t v4; // 0x3f1b33
    if (*(int32_t *)&v4 >= (int32_t)v2) {
        result = function_3f1b03();
    }
    // 0x3f1b4e
    return result;
}

// Address range: 0x3f1b6e - 0x3f1b9d
int64_t function_3f1b6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3f1b6e
    int64_t v1; // 0x3f1b6e
    int64_t result = v1 & 0xffffffff; // 0x3f1b6e
    if (a4 == 1) {
        // 0x3f1b72
        return result;
    }
    bool v2; // 0x3f1b6e
    if (v2 || v2) {
        // 0x3f1b95
        return a3 & 0xffffffff;
    }
    char * v3 = (char *)(2 * a1 + 0x13177aaf + a4); // 0x3f1b7f
    *v3 = *v3 + (char)((int32_t)v1 / 256);
    return result;
}

// Address range: 0x3f1d9e - 0x3f1e40
int64_t function_3f1d9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    char v1 = 0; // 0x3f1d9e
    int16_t v2 = a3; // 0x3f1d9f
    int64_t result; // 0x3f1d9e
    __asm_outsb(v2, (char)result);
    if (v1 == 0) {
        int64_t v3 = result & 0xffffffff ^ 0x1193bb56; // 0x3f1da2
        return (v3 + 5) % 256 | v3 & 0xffffff00;
    }
    // 0x3f1ddb
    if (llvm_ctpop_i8(v1) % 2 == 0) {
        // 0x3f1ddd
        return result;
    }
    char v4 = __asm_in(v2); // 0x3f1e31
    uint64_t v5 = result | (int64_t)v4; // 0x3f1e31
    char v6 = *(char *)(a3 + 107); // 0x3f1e3d
    return v5 & -0x10000 | (int64_t)(v4 - 30) | 256 * (int64_t)(v6 + (char)(v4 > 29) + (char)(v5 / 256));
}

// Address range: 0x3f1e44 - 0x3f1e47
int64_t function_3f1e44(void) {
    // 0x3f1e44
    int64_t result; // 0x3f1e44
    return result;
}

// Address range: 0x3f1e55 - 0x3f1e57
int64_t function_3f1e55(void) {
    // 0x3f1e55
    int64_t result; // 0x3f1e55
    return result;
}

// Address range: 0x3f1e88 - 0x3f1e8b
int64_t function_3f1e88(void) {
    // 0x3f1e88
    int64_t result; // 0x3f1e88
    return result;
}

// Address range: 0x3f1e8e - 0x3f1e95
int64_t function_3f1e8e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3f1e8e
    int64_t v1; // 0x3f1e8e
    __asm_outsb((int16_t)a3, (char)v1);
    return function_695e60cc();
}

// Address range: 0x3f1ea5 - 0x3f1ead
int64_t function_3f1ea5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(2 * ((a4 / 256 + a4) % 256 | a4 & 0x7fffffffffffff00) - 2); // 0x3f1ea7
    int64_t result; // 0x3f1ea5
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x3f1ec7 - 0x3f1eca
int64_t function_3f1ec7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3f1ec7
    int64_t result; // 0x3f1ec7
    return result;
}

// Address range: 0x3f1ee1 - 0x3f1ee6
int64_t function_3f1ee1(void) {
    // 0x3f1ee1
    return function_ffffffffd07d2938();
}

// Address range: 0x3f1f05 - 0x3f1f89
int64_t function_3f1f05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3f1f05
    if (a4 != 1) {
        // 0x3f1f3d
        return __asm_int3();
    }
    // 0x3f1f07
    int64_t result; // 0x3f1f05
    int32_t v1 = result; // 0x3f1f07
    __asm_out_134(82, v1);
    if (v1 - *(int32_t *)(4 * a3 - 126 + result) < 0) {
        // 0x3f1f85
        return a2 & 0xffffffff;
    }
    // 0x3f1f10
    return result;
}
