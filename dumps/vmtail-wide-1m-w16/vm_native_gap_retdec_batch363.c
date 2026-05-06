/*
 * Targeted RetDec C for native executable gap queue batch 363.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xf239c-0xf259c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf259c-0xf279c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf279c-0xf299c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf299c-0xf2b9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf2b9c-0xf2d9c rank=- name=- kind=- bytes=- uncovered=-
 *   0x43b267-0x43b467 rank=- name=- kind=- bytes=- uncovered=-
 *   0x43b467-0x43b667 rank=- name=- kind=- bytes=- uncovered=-
 *   0x43b867-0x43ba67 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1111ab63();
int64_t function_3175f937();
int64_t function_43b267(int64_t a1, int64_t a2, int64_t a3);
int64_t function_43b29d(void);
int64_t function_43b2d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43b2fb(int64_t a1, int64_t result2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_43b377(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_43b3bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_43b867(int64_t a1, int64_t a2, int64_t a3);
int64_t function_43b90d(void);
int64_t function_43b90f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_43b9ef(int64_t a1, int64_t a2, int64_t a3);
int64_t function_43ba20(int64_t a1, int64_t a2);
int64_t function_43ba52(void);
int64_t function_44aec4e1();
int64_t function_ae7b8c4();
int64_t function_c6d58();
int64_t function_f239c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f2408(void);
int64_t function_f2429(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f2492(void);
int64_t function_f24b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f24e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f256a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f2588(void);
int64_t function_f2626(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f2637(void);
int64_t function_f264d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_f280e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_f2967(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_f2aa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_f2be7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_f2d41(void);
int64_t function_ffffffffb952f1c9();
int64_t function_ffffffffe8abac88();
int64_t unknown_1f804f8();
int64_t unknown_3412c833();
int64_t unknown_34dbe3a5();
int64_t unknown_38a9b051();
int64_t unknown_3a19fc46();
int64_t unknown_64150ce6();
int64_t unknown_ffffffff885a9939();
int64_t unknown_ffffffffb81741f3();
int64_t unknown_ffffffffef27fde1();

// Address range: 0xf239c - 0xf23f6
int64_t function_f239c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_34dbe3a5(); // 0xf239d
    bool v2; // 0xf239c
    char * v3 = (char *)(((v1 - (v2 ? 122 : 121)) % 256 | v1 & -256) - 0x6b22f91); // 0xf23a6
    int64_t v4; // 0xf239c
    *v3 = *v3 + (char)(v4 / 256);
    __asm_int3();
    int64_t v5 = unknown_1f804f8(); // 0xf23ad
    uint64_t v6 = v4 & 0xffffff00; // 0xf23b7
    int32_t * v7 = (int32_t *)(a1 - 24); // 0xf23bd
    *v7 = *v7 | (int32_t)a3;
    int64_t v8 = (v5 | 0xd18a7965) + v4 & 0xffffffff; // 0xf23c0
    *(int32_t *)-0x17c3e937 = *(int32_t *)-0x17c3e937 + (int32_t)a1;
    int32_t v9 = v6; // 0xf23c8
    int64_t v10; // 0xf239c
    *(int32_t *)a3 = *(int32_t *)&v10 + v9;
    __asm_rcl(*(int32_t *)v8);
    int32_t * v11 = (int32_t *)(v8 + 0x2436175f); // 0xf23cd
    *v11 = *v11 + v9;
    *(char *)-0x4af3c51c = *(char *)-0x4af3c51c + (char)(v6 / 256);
    return unknown_ffffffffb81741f3(0x57fa8a0f, (v2 ? -1 : 1) + a5);
}

// Address range: 0xf2408 - 0xf2409
int64_t function_f2408(void) {
    // 0xf2408
    int64_t result; // 0xf2408
    return result;
}

// Address range: 0xf2429 - 0xf2468
int64_t function_f2429(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 118); // 0xf2429
    int64_t v2; // 0xf2429
    *v1 = *v1 + (int32_t)v2;
    int32_t * v3 = (int32_t *)(v2 - 18); // 0xf242c
    *v3 = *v3 | 0x2a5e2d96;
    unknown_ffffffff885a9939();
    __asm_hlt();
    __asm_in(18);
    unknown_3a19fc46();
    int64_t v4 = unknown_38a9b051(*(int32_t *)(v2 - 0x524bf699) + (int32_t)a1); // 0xf244b
    char * v5 = (char *)v4; // 0xf2450
    *v5 = *v5 + (char)a4;
    int32_t * v6 = (int32_t *)(a4 + 0x7a723cec + (v4 + 0xe86f7d03 & 0xffffffff)); // 0xf2457
    int32_t v7 = a2; // 0xf2457
    *v6 = *v6 + v7;
    int32_t * v8 = (int32_t *)(a3 + 0x2f9fe874); // 0xf2460
    *v8 = *v8 + v7;
    return function_f2408();
}

// Address range: 0xf2492 - 0xf2493
int64_t function_f2492(void) {
    // 0xf2492
    int64_t result; // 0xf2492
    return result;
}

// Address range: 0xf24b3 - 0xf24d1
int64_t function_f24b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(2 * a3 + 0x61600099); // 0xf24b4
    int32_t v2 = *v1; // 0xf24b4
    int64_t v3; // 0xf24b3
    int32_t v4 = v3; // 0xf24b4
    int32_t v5 = v2 + v4; // 0xf24b4
    *v1 = v5;
    if (v5 < 0 == ((v5 ^ v2) & (v5 ^ v4)) < 0) {
        function_f2492();
    }
    int32_t * v6 = (int32_t *)(a4 - 0x1ff0bc0b); // 0xf24c1
    *v6 = *v6 + (int32_t)v3;
    return (int64_t)*(int32_t *)-0x16ff5436c5d9b2f8;
}

// Address range: 0xf24e0 - 0xf24fb
int64_t function_f24e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xf24e0
    unknown_64150ce6();
    return 0xc4a88463;
}

// Address range: 0xf256a - 0xf2571
int64_t function_f256a(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a2 + 0x2571403d); // 0xf256a
    *v1 = *v1 | (char)a3;
    int64_t result; // 0xf256a
    return result;
}

// Address range: 0xf2588 - 0xf258d
int64_t function_f2588(void) {
    // 0xf2588
    return function_ae7b8c4();
}

// Address range: 0xf2626 - 0xf2637
int64_t function_f2626(int64_t a1, int64_t a2, int64_t a3) {
    // 0xf2626
    __asm_outsd((int16_t)a3, *(int32_t *)*(int64_t *)0xa3686be3);
    unknown_3412c833();
    return function_ffffffffe8abac88();
}

// Address range: 0xf2637 - 0xf2638
int64_t function_f2637(void) {
    // 0xf2637
    int64_t result; // 0xf2637
    return result;
}

// Address range: 0xf264d - 0xf280e
int64_t function_f264d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xf264d
    int64_t v1; // 0xf264d
    bool v2; // 0xf264d
    if (!v2) {
        v1 = function_f2637();
    }
    char v3 = (char)(v1 + a2) | (char)"zydis_decoder_tree_root"; // 0xf2653
    *(char *)-0x7efe17aa9ec5d50d = v3;
    *(char *)-0x177cd32b = v3 | *(char *)-0x177cd32b;
    int64_t v4; // bp-24, 0xf264d
    v4 = (int64_t)&v4 + 16;
    int64_t v5; // 0xf264d
    return function_c6d58(a1, a2, v5 + a3 & 0xffffffff, a4, a5, a6, a7);
}

// Address range: 0xf280e - 0xf2967
int64_t function_f280e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xf280e
    int64_t v1; // bp-72, 0xf280e
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0xf280e
    return function_c6d58(a1, a2, a3, a4, a5, a6, v2);
}

// Address range: 0xf2967 - 0xf2aa0
int64_t function_f2967(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xf2967
    int64_t v1; // bp-56, 0xf2967
    int64_t v2 = (int64_t)&v1; // 0xf2a22
    int64_t v3 = v2 + 16; // 0xf2a3c
    int64_t * v4 = (int64_t *)v3; // 0xf2a3c
    bool v5; // 0xf2967
    *v4 = 0x4000 * (int64_t)(bool)v5 | 2048 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | 128 * (int64_t)v5 | 64 * (int64_t)v5 | 16 * (int64_t)v5 | (int64_t)v5 | 4 * (int64_t)v5 | 2;
    *(int64_t *)(v2 + 32) = a3;
    *(int64_t *)(v2 - 8) = v2;
    v1 = v3;
    int64_t v6 = *v4; // 0xf2a85
    *(int64_t *)(v2 + 8) = v6;
    v1 = v6;
    return function_c6d58(a1, a2, a3, a4, a5, a6, a1);
}

// Address range: 0xf2aa0 - 0xf2be7
int64_t function_f2aa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xf2aa0
    int64_t v1; // bp-32, 0xf2aa0
    int64_t v2 = (int64_t)&v1; // 0xf2b3c
    int64_t * v3 = (int64_t *)(v2 + 32); // 0xf2b48
    int64_t v4 = *v3; // 0xf2b48
    int64_t * v5 = (int64_t *)(v2 - 8); // 0xf2b48
    *v5 = v4;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0xf2b4c
    *v6 = v2;
    int64_t * v7 = (int64_t *)(v2 + 16); // 0xf2b68
    int64_t v8 = *v7; // 0xf2b68
    *v6 = v8;
    *v5 = 0x6428cef2;
    *(int64_t *)(v2 - 24) = v4;
    int64_t * v9 = (int64_t *)(v2 + 8); // 0xf2b91
    *v9 = *v5;
    *v5 = v8;
    *v3 = v1;
    int64_t v10 = *v9; // 0xf2bba
    v1 = v10;
    *v5 = v10;
    int64_t v11 = *v7; // 0xf2bcc
    *v9 = v11;
    v1 = v11;
    int64_t v12; // 0xf2aa0
    return function_c6d58(a1, a2, a3, a4, a5, a6, v12);
}

// Address range: 0xf2be7 - 0xf2d41
int64_t function_f2be7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xf2be7
    int64_t v1; // bp-40, 0xf2be7
    v1 = (int64_t)&v1;
    return function_c6d58(a1, a2, a3, a4, a5, a6, a7);
}

// Address range: 0xf2d41 - 0xf2d46
int64_t function_f2d41(void) {
    // 0xf2d41
    int64_t result; // 0xf2d41
    return result;
}

// Address range: 0x43b267 - 0x43b26b
int64_t function_43b267(int64_t a1, int64_t a2, int64_t a3) {
    // 0x43b267
    int64_t result; // 0x43b267
    return result;
}

// Address range: 0x43b29d - 0x43b2a2
int64_t function_43b29d(void) {
    // 0x43b29d
    return function_ffffffffb952f1c9();
}

// Address range: 0x43b2d9 - 0x43b2e2
int64_t function_43b2d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x43b2d9
    *(int32_t *)a3 = (int32_t)a2;
    return function_44aec4e1();
}

// Address range: 0x43b2fb - 0x43b376
int64_t function_43b2fb(int64_t a1, int64_t result2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x43b2fb
    bool v1; // 0x43b2fb
    if (true != !v1 && v1) {
        // 0x43b31d
        int64_t result; // 0x43b2fb
        return result;
    }
    unsigned char v2 = (char)a4 % 32; // 0x43b308
    if (v2 != 0) {
        *(char *)a1 = (char)a1 << v2;
    }
    int64_t v3; // 0x43b2fb
    int32_t * v4 = (int32_t *)(v3 + 77); // 0x43b311
    *v4 = *v4 - (int32_t)v3;
    char v5 = a4 / 256; // 0x43b314
    char v6 = v3 / 256; // 0x43b314
    char v7 = v6 + v5; // 0x43b314
    if (((v7 ^ v5) & (v7 ^ v6)) >= 0) {
        // 0x43b31d
        return result2;
    }
    // 0x43b319
    if (v7 < 0 == ((v7 ^ v5) & (v7 ^ v6)) < 0 == (v7 != 0)) {
        // 0x43b320
        *(int64_t *)(2 * v3 + v3) = result2;
        char * v8 = (char *)(v3 - 0x35de86e4); // 0x43b324
        *v8 = *v8 | (char)a3;
    }
    // 0x43b31d
    return result2;
}

// Address range: 0x43b377 - 0x43b3b8
int64_t function_43b377(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = ((char)a5 ^ -22) + 116; // 0x43b384
    __asm_out((int16_t)a3, v1);
    *(char *)0x39fdcf52 = *(char *)0x39fdcf52 + v1;
    int64_t v2 = unknown_ffffffffef27fde1() & 0xffffffff ^ 0x1e5e1011; // 0x43b3a6
    return (v2 + 183) % 256 | v2 & 0xffffff00;
}

// Address range: 0x43b3bf - 0x43b63b
int64_t function_43b3bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x43b3bf
    int64_t v1; // 0x43b3bf
    int64_t v2 = v1;
    int64_t v3 = a1;
    int64_t v4 = a7;
    int64_t v5 = a8;
    bool v6; // 0x43b3bf
    if (v6) {
        // 0x43b3c1
        int64_t result; // 0x43b3bf
        return result;
    }
    // 0x43b43d
    if (v6) {
        // 0x43b436
        return a2 & 0xd959e814;
    }
    int64_t v7 = (v6 ? 248 : 8) + a2; // 0x43b43d
    int64_t v8 = a2 & -256 | 111; // 0x43b442
    char v9 = v7;
    char v10 = v9; // bp-8, 0x43b444
    int16_t v11 = a3; // 0x43b445
    __asm_out(v11, 111);
    int64_t v12 = 0x100000000000000 * v7 >> 56; // 0x43b446
    int64_t v13 = (int64_t)(-51 * *(int32_t *)(v12 + 0x264b0723)); // 0x43b447
    *(char *)a1 = __asm_insb(v11);
    char * v14 = (char *)v8; // 0x43b44f
    char v15 = *v14 ^ v9; // 0x43b44f
    *(int64_t *)0x7d3dcc7054c0002f = v8;
    int64_t v16; // 0x43b3bf
    int64_t v17; // 0x43b3bf
    int64_t v18; // 0x43b3bf
    if (v15 < 1) {
        // 0x43b40d
        v10 = (int64_t)&v4;
        v17 = 0;
        v16 = v1 & -256 | (int64_t)*(char *)&v3;
        v18 = (int64_t)&v10;
        if ((v12 & -256 | (int64_t)(*(char *)(v8 + 0x38c26d2e) | v15)) != 1) {
            int32_t * v19 = (int32_t *)v13; // 0x43b41d
            *v19 = *v19 & (int32_t)v3;
            char * v20 = (char *)(a6 + 22); // 0x43b422
            *v20 = *v20 >> 1;
            int64_t v21 = __asm_int3(); // 0x43b429
            *(int32_t *)v3 = *v19;
            // 0x43b436
            return v21 & 0xd959e814;
        }
    } else {
        // 0x43b45d
        *v14 = *v14 | (char)(v4 / 256);
        v17 = v4;
        v18 = (int64_t)&v5;
    }
    uint64_t v22 = v16;
    v3 = *(int64_t *)v18;
    int32_t * v23 = (int32_t *)(v22 + 102); // 0x43b4b8
    uint32_t v24 = (int32_t)a3; // 0x43b4b8
    *v23 = *v23 + v24;
    int64_t v25 = v18; // 0x43b4ce
    int64_t v26 = v8; // 0x43b4ce
    int64_t v27 = a3; // 0x43b4ce
    int64_t v28 = v13; // 0x43b4ce
    if (*(int32_t *)(a3 - 0xeffa932) >= v24) {
        int64_t v29 = v28;
        v27 = v27 & -256 | 114;
        int64_t v30 = v3 + 1; // 0x43b4dd
        v28 = v29 + 5;
        v3 = v30;
        uint32_t v31 = *(int32_t *)v29 ^ -0x28c591a2; // 0x43b4de
        while (llvm_ctpop_i8((char)v31) % 2 != 0) {
            // 0x43b4b7
            v25 += 24;
            int32_t v32 = *(int32_t *)(int64_t)v31; // 0x43b4e3
            v3 = *(int64_t *)v25;
            uint32_t v33 = (int32_t)v27; // 0x43b4b8
            *v23 = *v23 + v33;
            if (*(int32_t *)(v27 - 0xeffa932) < v33) {
                // 0x43b4b7
                v26 = -70 * v32;
                goto lab_0x43b525;
            }
            v29 = v28;
            v27 = v27 & -256 | 114;
            v30 = v3 + 1;
            v28 = v29 + 5;
            v3 = v30;
            v31 = *(int32_t *)v29 ^ -0x28c591a2;
        }
        // 0x43b4e9
        __asm_int1(v30, v28, v27);
        int32_t v34 = *(int32_t *)0x259bf30a8198e24c; // 0x43b4ea
        __asm_outsb((int16_t)v27, *(char *)v28);
        int32_t * v35 = (int32_t *)(v27 - 0x68a34fe3); // 0x43b4f7
        *v35 = (int32_t)((char)v34 < 181) - (int32_t)v22 + *v35;
        return function_3175f937();
    }
    goto lab_0x43b525;
  lab_0x43b525:;
    int64_t v36 = v28;
    unsigned char v37 = *(char *)0x580014e23b4a168f - 17;
    int64_t result2 = v26 & -256 | (int64_t)v37; // 0x43b525
    uint32_t v38 = *(int32_t *)0x5ce56ab2; // 0x43b532
    uint32_t v39 = v38 + (int32_t)v3; // 0x43b532
    *(int32_t *)0x5ce56ab2 = v39;
    if (v17 != 2 != (v39 == 0)) {
        // 0x43b53a
        __writegsbyte(v36, (char)(v39 < v38) + (char)(v27 / 256) + __readgsbyte(v36));
        return result2;
    }
    int64_t v40 = (int64_t)*(int32_t *)(v36 + 0x390eae15); // 0x43b5b7
    int64_t v41 = 49 * v40; // 0x43b5b7
    if (v41 != 0x3100000000 * v40 >> 32 || v39 != 0) {
        // 0x43b3c1
        return result2;
    }
    uint32_t v42 = (int32_t)v41; // 0x43b5c2
    uint32_t v43 = *(int32_t *)(v2 + 30 + 8 * v2); // 0x43b5c2
    int64_t v44 = v42 - v43; // 0x43b5c2
    int64_t v45 = v44 - 8; // 0x43b5c6
    *(int64_t *)v45 = result2;
    *(int64_t *)(v44 - 16) = v45;
    int32_t * v46 = (int32_t *)v3; // 0x43b5ca
    *v46 = *v46 ^ (int32_t)v2;
    int64_t v47 = v17 - 3; // 0x43b5d2
    if (v47 == 0 || (256 * (v27 / 256 + v26 / 256 + (int64_t)(v43 > v42)) & 0x1000 || result2 & 0xf36100ef) == 0) {
        char v48 = *(char *)(v2 - 0x304fc478); // 0x43b5d8
        int32_t v49 = *(int32_t *)(v36 + 81); // 0x43b5de
        return v49 ^ (int32_t)(256 * (int64_t)(v48 ^ (char)(v22 / 256)) | v22 & 0xffff00ff);
    }
    // 0x43b5f6
    *(char *)v3 = v37;
    int64_t * v50 = (int64_t *)(v22 - 126); // 0x43b5f7
    *v50 = *v50 | v1;
    return 0xfffffffe * v47 & 0xfffffffe ^ 0x19c59000;
}

// Address range: 0x43b867 - 0x43b8df
int64_t function_43b867(int64_t a1, int64_t a2, int64_t a3) {
    // 0x43b867
    int64_t v1; // 0x43b867
    return v1 & 0xffffff7f ^ 0x94339677;
}

// Address range: 0x43b90d - 0x43b90f
int64_t function_43b90d(void) {
    // 0x43b90d
    int64_t v1; // 0x43b90d
    int64_t v2 = v1;
    bool v3; // 0x43b90d
    return ((v2 ^ 128) + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x43b90f - 0x43b916
int64_t function_43b90f(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 0x4ac7c64c); // 0x43b90f
    int64_t result; // 0x43b90f
    *v1 = *v1 & (int32_t)result;
    return result;
}

// Address range: 0x43b9ef - 0x43ba10
int64_t function_43b9ef(int64_t a1, int64_t a2, int64_t a3) {
    // 0x43b9ef
    int64_t v1; // 0x43b9ef
    *(int32_t *)-0x31ee72c0d50a0ddc = (int32_t)v1;
    __asm_in(46);
    bool v2; // 0x43b9ef
    return (v2 ? 0xfffffffc : 4) + a1 & 0xffffffff;
}

// Address range: 0x43ba20 - 0x43ba23
int64_t function_43ba20(int64_t a1, int64_t a2) {
    // 0x43ba20
    int64_t result; // 0x43ba20
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x43ba52 - 0x43ba57
int64_t function_43ba52(void) {
    // 0x43ba52
    return function_1111ab63();
}
