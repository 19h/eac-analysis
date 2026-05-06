/*
 * Targeted RetDec C for native executable gap queue batch 397.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2fb21e-0x2fb41e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fb41e-0x2fb61e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fb61e-0x2fb81e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fba1e-0x2fbc1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x43ba67-0x43bc67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x43be67-0x43c067 rank=- name=- kind=- bytes=- uncovered=-
 *   0x43c067-0x43c267 rank=- name=- kind=- bytes=- uncovered=-
 *   0x43c267-0x43c467 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_2fb21e(int64_t a1);
int64_t function_2fb2ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2fb42b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2fb56d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2fb70a(void);
int64_t function_2fb70c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2fb71b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2fba1e(int64_t a1, int64_t a2);
int64_t function_2fbaf6(void);
int64_t function_2fbb14(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2fbb61(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43ba67(void);
int64_t function_43ba9c(void);
int64_t function_43baa1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_43bb65(void);
int64_t function_43bb9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_43bc20(void);
int64_t function_43bc30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_43bc44(int64_t a1);
int64_t function_43be67(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_43bea3(int64_t a1, int64_t a2);
int64_t function_43bea9(void);
int64_t function_43bece(int64_t a1);
int64_t function_43bf52(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_43bf68(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_43bf96(int64_t a1);
int64_t function_43bfb1(int64_t a1, int64_t a2);
int64_t function_43c00a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43c01d(int64_t a1);
int64_t function_43c04b(void);
int64_t function_43c075(void);
int64_t function_43c0a9(int64_t a1);
int64_t function_43c0c5(void);
int64_t function_43c0fc(void);
int64_t function_43c128(int64_t a1);
int64_t function_43c17a(void);
int64_t function_43c1d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43c1f5(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_43c337(void);
int64_t function_43c396(void);
int64_t function_43c3a0(int64_t a1);
int64_t function_43c3cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_43c43a(int64_t a1);
int64_t function_43c452(void);
int64_t function_546dc0cd();
int64_t function_6f5eb304();
int64_t function_caf2a();
int64_t function_dedfe93();
int64_t function_ffffffffc42cd109();
int64_t function_ffffffffe1583624();
int64_t function_ffffffffe6667488();

// Address range: 0x2fb21e - 0x2fb2ad
int64_t function_2fb21e(int64_t a1) {
    // 0x2fb21e
    int64_t v1; // 0x2fb21e
    return function_caf2a(v1, v1, v1, v1, v1, v1, v1);
}

// Address range: 0x2fb2ad - 0x2fb42b
int64_t function_2fb2ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2; // bp-32, 0x2fb303
    int64_t v2 = a2 - 8; // 0x2fb32d
    int64_t * v3 = (int64_t *)v2; // 0x2fb32d
    *v3 = 0x4cd58a36;
    int64_t * v4 = (int64_t *)(a2 - 24); // 0x2fb33e
    int64_t v5 = *(int64_t *)(a2 + 24); // 0x2fb344
    int64_t * v6 = (int64_t *)(a2 - 16); // 0x2fb344
    *v6 = v5;
    *v4 = v5;
    int64_t v7 = a2 - 32; // 0x2fb34b
    int64_t * v8 = (int64_t *)v7; // 0x2fb34b
    *v8 = v5;
    int64_t v9 = a2 + 8; // 0x2fb35a
    int64_t v10 = *(int64_t *)v9; // 0x2fb35a
    *v6 = v10;
    *v3 = v5;
    *v8 = v7;
    *v4 = v10;
    *(int64_t *)(a2 + 16) = *v6;
    *v6 = *v3;
    *v4 = v2;
    *v3 = v9;
    return function_caf2a(a1, a2, a3, a4, a5, a6, (int64_t)&v1);
}

// Address range: 0x2fb42b - 0x2fb56d
int64_t function_2fb42b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2fb42b
    int64_t v1; // bp-32, 0x2fb42b
    int64_t v2 = (int64_t)&v1; // 0x2fb49a
    int64_t v3 = v2 + 16; // 0x2fb4ec
    int64_t * v4 = (int64_t *)(v2 + 8); // 0x2fb4fb
    *v4 = 0x42556887;
    v1 = 0x7521219e;
    *(int64_t *)(v2 + 24) = *v4;
    v1 = a7;
    *(int64_t *)(v2 + 40) = a7;
    int64_t * v5 = (int64_t *)v3; // 0x2fb52f
    *v4 = *v5;
    v1 = v3;
    int64_t v6 = *v5; // 0x2fb54f
    *v4 = v6;
    v1 = v6;
    int64_t v7; // 0x2fb42b
    return function_caf2a(a1, a2, a3, a4, a5, a6, v7);
}

// Address range: 0x2fb56d - 0x2fb6d5
int64_t function_2fb56d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2fb56d
    int64_t v1; // 0x2fb56d
    return function_caf2a(a1, a2, a3, a4, v1, v1, v1);
}

// Address range: 0x2fb70a - 0x2fb70c
int64_t function_2fb70a(void) {
    // 0x2fb70a
    int64_t v1; // 0x2fb70a
    return function_2fb71b(v1, v1, v1, v1, v1, v1, (int64_t)&g1);
}

// Address range: 0x2fb70c - 0x2fb71b
int64_t function_2fb70c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2fb70c
    int64_t result; // 0x2fb70c
    return result;
}

// Address range: 0x2fb71b - 0x2fb81c
int64_t function_2fb71b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2fb71b
    int64_t v1; // bp-16, 0x2fb71b
    int64_t v2 = (int64_t)&v1; // 0x2fb809
    *(int64_t *)(v2 - 8) = 0x39ac3a4c;
    *(int64_t *)(v2 - 16) = a6;
    int64_t result; // 0x2fb71b
    return result;
}

// Address range: 0x2fba1e - 0x2fbaf6
int64_t function_2fba1e(int64_t a1, int64_t a2) {
    // 0x2fba1e
    int64_t v1; // 0x2fba1e
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    return function_caf2a(a1, v1, v1, v1, v1, v1, v1);
}

// Address range: 0x2fbaf6 - 0x2fbafb
int64_t function_2fbaf6(void) {
    // 0x2fbaf6
    int64_t result; // 0x2fbaf6
    return result;
}

// Address range: 0x2fbb14 - 0x2fbb32
int64_t function_2fbb14(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2fbb14
    int64_t v1; // 0x2fbb14
    *(char *)a2 = (char)(v1 & v1);
    return __asm_iretd();
}

// Address range: 0x2fbb61 - 0x2fbb64
int64_t function_2fbb61(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2fbb61
    int64_t result; // 0x2fbb61
    return result;
}

// Address range: 0x43ba67 - 0x43ba68
int64_t function_43ba67(void) {
    // 0x43ba67
    int64_t result; // 0x43ba67
    return result;
}

// Address range: 0x43ba9c - 0x43ba9d
int64_t function_43ba9c(void) {
    // 0x43ba9c
    int64_t result; // 0x43ba9c
    return result;
}

// Address range: 0x43baa1 - 0x43bb63
int64_t function_43baa1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x43baa1
    int64_t v1; // 0x43baa1
    __asm_outsd((int16_t)a3, (int32_t)v1);
    int64_t v2; // 0x43baa1
    if (a4 != 1) {
        v2 = function_43ba9c();
    }
    int64_t result = v2;
    bool v3; // 0x43baa1
    if (!v3) {
        int64_t v4 = (char)result < 230 ? 248 : 247; // 0x43baab
        return (result + 26 + v4) % 256 | result & -256;
    }
    if ((int32_t)result > (int32_t)v1) {
        int32_t * v5 = (int32_t *)(a5 - 0x12b8a01); // 0x43bb48
        *v5 = 32 * *v5;
        return result;
    }
    if (a4 == 2) {
        // 0x43bb0a
        return result + 0x20ea049c & 0xffffffff;
    }
    // 0x43bb52
    return result;
}

// Address range: 0x43bb65 - 0x43bb68
int64_t function_43bb65(void) {
    // 0x43bb65
    int64_t result; // 0x43bb65
    return result;
}

// Address range: 0x43bb9f - 0x43bc00
int64_t function_43bb9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2; // 0x43bb9f
    uint32_t v3 = *(int32_t *)(v2 + 89); // 0x43bba9
    uint32_t v4 = *(int32_t *)-0x610f0d8e955259a8; // 0x43bbae
    int64_t v5 = v4; // 0x43bbae
    char * v6 = (char *)(a1 - 0x6fd71b93); // 0x43bbb7
    char v7 = *v6 + (char)(v2 / 256) + (char)(v3 >= (int32_t)v2); // 0x43bbb7
    *v6 = v7;
    int64_t v8; // bp-8, 0x43bb9f
    if (v7 != 0) {
        int16_t v9 = a3; // 0x43bbdd
        *(int32_t *)a1 = __asm_insd(v9);
        int64_t result = v5 & 0xffff0000 | (int64_t)((v4 + 196) % 256) | 256 * (int64_t)__readfsbyte(v1 - 0x5c43e0c1); // 0x43bbf4
        *(int32_t *)(result + a1) = (int32_t)(int64_t)&v8;
        __asm_outsd(v9 & -256 | 184, *(int32_t *)&v1);
        return result;
    }
    int64_t result2 = v5 | 0x5c5d77d2; // 0x43bbbf
    int32_t v10 = *(int32_t *)0x3eb73a43; // 0x43bbc5
    *(int32_t *)0x3eb73a43 = v10 >> 18;
    v8 = a1;
    int32_t * v11 = (int32_t *)(a3 - 0x3057ffd0); // 0x43bbcd
    *v11 = (int32_t)((v10 & 0x20000) != 0) - (int32_t)result2 + *v11;
    int32_t * v12 = (int32_t *)result2; // 0x43bbd3
    *v12 = *v12 & (int32_t)a4;
    return result2;
}

// Address range: 0x43bc20 - 0x43bc23
int64_t function_43bc20(void) {
    // 0x43bc20
    int64_t result; // 0x43bc20
    return result;
}

// Address range: 0x43bc30 - 0x43bc36
int64_t function_43bc30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x43bc30
    __asm_rcl(*(char *)((a4 & -256 | 61) + 15));
    int64_t result; // 0x43bc30
    return result;
}

// Address range: 0x43bc44 - 0x43bc4b
int64_t function_43bc44(int64_t a1) {
    // 0x43bc44
    int64_t v1; // 0x43bc44
    int64_t v2 = v1;
    char v3 = *(char *)(a1 - 114); // 0x43bc44
    bool v4; // 0x43bc44
    return v2 & -256 | (int64_t)((char)v4 + (char)v2 - v3);
}

// Address range: 0x43be67 - 0x43bea1
int64_t function_43be67(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x43be67
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x43be67
    uint32_t v2 = *(int32_t *)(v1 + 0x66a84426); // 0x43be74
    int64_t v3 = 0x100000000 * v1 >> 32; // 0x43be88
    int64_t v4 = -75 * v3; // 0x43be88
    int64_t v5; // 0x43be67
    char v6 = *(char *)&v5; // 0x43be8d
    int32_t * v7 = (int32_t *)(v4 & 0xffffffff); // 0x43be9b
    int32_t v8 = *v7; // 0x43be9b
    *v7 = (256 * (int32_t)(v6 + (char)(v4 != -0x4b00000000 * v3 >> 32) + (char)(v2 / 256) % 2) & 0xd500 | v2 & 0x1400000) + v8;
    return a2 & 0xffffffff;
}

// Address range: 0x43bea3 - 0x43bea7
int64_t function_43bea3(int64_t a1, int64_t a2) {
    // 0x43bea3
    int64_t result; // 0x43bea3
    return result;
}

// Address range: 0x43bea9 - 0x43beae
int64_t function_43bea9(void) {
    // 0x43bea9
    return function_dedfe93();
}

// Address range: 0x43bece - 0x43bed1
int64_t function_43bece(int64_t a1) {
    // 0x43bece
    int64_t result; // 0x43bece
    return result;
}

// Address range: 0x43bf52 - 0x43bf67
int64_t function_43bf52(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x43bf52
    *(char *)a3 = (char)(a3 / 256);
    return a4 & 0xffffffff;
}

// Address range: 0x43bf68 - 0x43bf8a
int64_t function_43bf68(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x43bf68
    int64_t v1; // 0x43bf68
    *(char *)a1 = (char)v1;
    return function_ffffffffe1583624(0x31ea8111, 0x7d375af);
}

// Address range: 0x43bf96 - 0x43bf99
int64_t function_43bf96(int64_t a1) {
    // 0x43bf96
    int64_t result; // 0x43bf96
    return result;
}

// Address range: 0x43bfb1 - 0x43bfba
int64_t function_43bfb1(int64_t a1, int64_t a2) {
    // 0x43bfb1
    int64_t v1; // 0x43bfb1
    uint64_t v2 = v1;
    char * v3 = (char *)(v1 + 2 * a2); // 0x43bfb1
    bool v4; // 0x43bfb1
    *v3 = *v3 - (v4 ? 99 : 98);
    __asm_int3(a1, a2);
    *(char *)(v2 + 65) = (char)(v2 / 256);
    return __asm_int3((int64_t)&g1, (int64_t)&g1);
}

// Address range: 0x43c00a - 0x43c012
int64_t function_43c00a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x604e4be0); // 0x43c00b
    int64_t result; // 0x43c00a
    *v1 = *v1 & (int32_t)result;
    return result;
}

// Address range: 0x43c01d - 0x43c020
int64_t function_43c01d(int64_t a1) {
    // 0x43c01d
    int64_t result; // 0x43c01d
    return result;
}

// Address range: 0x43c04b - 0x43c04c
int64_t function_43c04b(void) {
    // 0x43c04b
    int64_t result; // 0x43c04b
    return result;
}

// Address range: 0x43c075 - 0x43c077
int64_t function_43c075(void) {
    // 0x43c075
    return function_43c04b();
}

// Address range: 0x43c0a9 - 0x43c0af
int64_t function_43c0a9(int64_t a1) {
    // 0x43c0a9
    int64_t v1; // 0x43c0a9
    return v1 + 0xa3cb4cd5 & 0xffffffff;
}

// Address range: 0x43c0c5 - 0x43c0ca
int64_t function_43c0c5(void) {
    // 0x43c0c5
    return function_546dc0cd();
}

// Address range: 0x43c0fc - 0x43c0fd
int64_t function_43c0fc(void) {
    // 0x43c0fc
    int64_t result; // 0x43c0fc
    return result;
}

// Address range: 0x43c128 - 0x43c132
int64_t function_43c128(int64_t a1) {
    // 0x43c128
    int64_t v1; // 0x43c128
    return v1 & 0x27e81077 | 0xd817ef88;
}

// Address range: 0x43c17a - 0x43c181
int64_t function_43c17a(void) {
    // 0x43c17a
    return function_ffffffffe6667488();
}

// Address range: 0x43c1d2 - 0x43c1eb
int64_t function_43c1d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x43c1d2
    int64_t v1; // 0x43c1d2
    __asm_rcl(*(char *)(v1 - 75 + 2 * v1));
    return function_6f5eb304();
}

// Address range: 0x43c1f5 - 0x43c31e
int64_t function_43c1f5(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x43c1f5
    bool v1; // 0x43c1f5
    int64_t v2 = (v1 ? -4 : 4) + a1; // 0x43c1f8
    char * v3 = (char *)(a3 + 36); // 0x43c1fe
    int64_t v4; // 0x43c1f5
    *v3 = *v3 & (char)(v4 / 256);
    *(int32_t *)a3 = (int32_t)a2;
    int64_t v5; // 0x43c1f5
    uint32_t v6 = (int32_t)(int64_t)&v5 - *(int32_t *)v2; // 0x43c20a
    int64_t v7 = v4 & 0xffffffff; // 0x43c204
    uint32_t v8 = *(int32_t *)0xdbd7538e; // 0x43c21c
    int64_t result = v8; // 0x43c21c
    int32_t * v9 = (int32_t *)(a3 - 80); // 0x43c21f
    uint32_t v10 = *v9; // 0x43c21f
    uint32_t v11 = (int32_t)a3; // 0x43c21f
    int32_t v12 = v10 - v11; // 0x43c21f
    *v9 = v12;
    if ((int64_t)v10 <= a3) {
        // 0x43c224
        *(char *)(v7 + 0x5b593c50) = (char)(v4 / 256);
        *(int64_t *)((int64_t)v6 - 8) = 0xdbd7535d;
        *(char *)v2 = *(char *)0xdbd7535d;
        return result;
    }
    // 0x43c248
    *(char *)v2 = __asm_insb((int16_t)a3);
    int64_t v13; // 0x43c1f5
    int32_t v14; // 0x43c1f5
    bool v15; // 0x43c1f5
    if (v12 >= 0) {
        // 0x43c2c1
        v13 = result;
        v15 = v10 < v11;
        v14 = v10 < v11 ? -0x61ebef5c : -0x61ebef5d;
    } else {
        int64_t v16 = v7 ^ 0xc30d9424; // 0x43c20c
        char * v17 = (char *)(v16 - 128); // 0x43c2ba
        *v17 = *v17 | (char)(v8 / 256);
        if (v16 != 1) {
            char * v18 = (char *)(a3 - 94); // 0x43c31a
            *v18 = *v18 - 32;
            return result | 233;
        }
        // 0x43c2c1
        v13 = __asm_int1();
        v15 = false;
        v14 = -0x61ebef5d;
    }
    uint32_t v19 = (int32_t)v13;
    uint32_t v20 = v19 - v14; // 0x43c2c1
    int64_t v21 = v20; // 0x43c2c1
    __asm_int(92);
    int32_t v22 = *(int32_t *)(v4 + v21); // 0x43c2c8
    int64_t v23 = v6 - v22 + (int32_t)(v15 | v14 > v19); // 0x43c2c8
    *(int64_t *)(v23 - 8) = v23;
    return v21 & 0xffffff00 | (int64_t)((v20 + 145) % 256);
}

// Address range: 0x43c337 - 0x43c33e
int64_t function_43c337(void) {
    // 0x43c337
    return function_ffffffffc42cd109();
}

// Address range: 0x43c396 - 0x43c397
int64_t function_43c396(void) {
    // 0x43c396
    int64_t result; // 0x43c396
    return result;
}

// Address range: 0x43c3a0 - 0x43c3a3
int64_t function_43c3a0(int64_t a1) {
    // 0x43c3a0
    int64_t result; // 0x43c3a0
    return result;
}

// Address range: 0x43c3cd - 0x43c429
int64_t function_43c3cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x43c3cd
    int64_t v1; // 0x43c3cd
    uint32_t v2 = *(int32_t *)(a4 + 0x57319fb5 + 2 * v1) & (int32_t)a3; // 0x43c3cd
    char * v3 = (char *)(a1 - 72); // 0x43c3d4
    *v3 = *v3 | (char)v2;
    char * v4 = (char *)(v1 + 0x352ba242 + (int64_t)v2); // 0x43c3dd
    char v5 = *v4; // 0x43c3dd
    *v4 = 32 * v5;
    int32_t * v6 = (int32_t *)(v1 + 125); // 0x43c3e5
    *v6 = *v6 + 41 + (int32_t)((v5 & 8) != 0);
    return (int64_t)((int32_t)v1 - *(int32_t *)(a1 - 0x48f95b2b));
}

// Address range: 0x43c43a - 0x43c43b
int64_t function_43c43a(int64_t a1) {
    // 0x43c43a
    int64_t result; // 0x43c43a
    return result;
}

// Address range: 0x43c452 - 0x43c453
int64_t function_43c452(void) {
    // 0x43c452
    int64_t result; // 0x43c452
    return result;
}
