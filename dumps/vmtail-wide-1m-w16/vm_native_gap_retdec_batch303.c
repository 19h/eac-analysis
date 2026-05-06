/*
 * Targeted RetDec C for native executable gap queue batch 303.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xee99c-0xeeb9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xeeb9c-0xeed9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xeed9c-0xeef9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xeef9c-0xef19c rank=- name=- kind=- bytes=- uncovered=-
 *   0xef19c-0xef39c rank=- name=- kind=- bytes=- uncovered=-
 *   0x14b113-0x14b313 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14b313-0x14b513 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14b513-0x14b713 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_14b113(int64_t a1);
int64_t function_14b137(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14b183(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14b199(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14b1a8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14b1c6(void);
int64_t function_14b1de(void);
int64_t function_14b223(void);
int64_t function_14b28f(void);
int64_t function_14b2b2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14b2f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14b38d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14b3ce(void);
int64_t function_14b3f9(void);
int64_t function_14b415(int64_t a1);
int64_t function_14b424(void);
int64_t function_14b44c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14b49a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14b4d7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14b50d(int64_t a1);
int64_t function_14b537(void);
int64_t function_14b541(void);
int64_t function_14b567(void);
int64_t function_14b57b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14b5a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14b5b5(void);
int64_t function_14b619(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14b6c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1623b5bb();
int64_t function_5f8e12f7();
int64_t function_6818116c();
int64_t function_7d2f19();
int64_t function_b503140();
int64_t function_cdc60();
int64_t function_ee99c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_ee99e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_eeac1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_eebe5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_eed32(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_eee8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_ef00b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_ef1b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ef308(void);
int64_t function_ef33c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_ffffffffb5deb724();
int64_t unknown_1fd4fcf();
int64_t unknown_20037dc9();
int64_t unknown_5c09c731();
int64_t unknown_69b19393();
int64_t unknown_81cc3ca();
int64_t unknown_ffffffff9e8790a9();
int64_t unknown_ffffffffa0f00d89();
int64_t unknown_ffffffffb01f1cab();
int64_t unknown_ffffffffb3ec4dc9();
int64_t unknown_ffffffffcbb4dd42();
int64_t unknown_ffffffffd5424d9e();
int64_t unknown_fffffffff4199cba();
int64_t unknown_fffffffff675dcae();

// Address range: 0xee99c - 0xee99d
int64_t function_ee99c(int64_t a1, int64_t a2, int64_t a3) {
    // 0xee99c
    int64_t result; // 0xee99c
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0xee99e - 0xeeac1
int64_t function_ee99e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xee99e
    int64_t v1; // 0xee99e
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0xee99e
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    char * v5 = (char *)(a4 + 108 + 4 * a4); // 0xee9a2
    *v5 = *v5 + (char)a4;
    return function_cdc60(a1, a2, a3, a4, v3 & -248, v1, a7);
}

// Address range: 0xeeac1 - 0xeebe5
int64_t function_eeac1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xeeac1
    int64_t v1; // 0xeeac1
    return function_cdc60(a1, a2, a3, a4, v1, v1, a3);
}

// Address range: 0xeebe5 - 0xeed32
int64_t function_eebe5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xeebe5
    int64_t v1; // bp-32, 0xeebe5
    int64_t v2 = (int64_t)&v1; // 0xeec38
    int64_t v3 = v2 - 8; // 0xeec52
    int64_t * v4 = (int64_t *)v3; // 0xeec52
    *v4 = 0x7f7fd66;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0xeec57
    *v5 = 0x74a0ce1e;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0xeec67
    int64_t v7 = *(int64_t *)(v2 + 24); // 0xeec6d
    *v5 = v7;
    *v6 = v7;
    int64_t * v8 = (int64_t *)(v2 - 32); // 0xeec74
    *v8 = v7;
    int64_t v9 = *(int64_t *)(v2 + 8); // 0xeec80
    *v5 = v9;
    *v6 = 0x3ea1e449;
    *v8 = v7;
    v1 = *v5;
    *v8 = a4;
    *v6 = v9;
    *(int64_t *)(v2 + 16) = *v5;
    *v5 = v2;
    *v5 = *v4;
    *v6 = v3;
    int64_t v10; // 0xeebe5
    return function_cdc60(a1, a2, a3, *v8, v10, v10, 0xe765f);
}

// Address range: 0xeed32 - 0xeee8d
int64_t function_eed32(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xeed32
    int64_t v1; // bp-24, 0xeed32
    int64_t v2; // 0xeed32
    return function_cdc60(a1, a2, 0x2434c7b1, a4, 0xe78ac, v2, (int64_t)&v1);
}

// Address range: 0xeee8d - 0xef00b
int64_t function_eee8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xeee8d
    int64_t v1; // 0xeee8d
    return function_cdc60(a1, a2, a3, a4, a5, v1, 0x9954222);
}

// Address range: 0xef00b - 0xef1b6
int64_t function_ef00b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xef00b
    bool v1; // 0xef00b
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // bp-40, 0xef13b
    int64_t v3; // bp-72, 0xef00b
    v3 = (int64_t)&v3;
    int64_t v4 = (int64_t)&v2; // 0xef182
    *(int64_t *)(v4 - 8) = v4 + 8;
    int64_t v5; // 0xef00b
    return function_cdc60(a1, a2, a3, a4, a5, a6, v5);
}

// Address range: 0xef1b6 - 0xef2e1
int64_t function_ef1b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xef1b6
    int64_t v1; // 0xef1b6
    int64_t * v2 = (int64_t *)(v1 - 8); // 0xef224
    int64_t v3 = v1 - 16; // 0xef22b
    int64_t * v4 = (int64_t *)v3; // 0xef23a
    int64_t v5 = *(int64_t *)(v1 + 32); // 0xef246
    *v2 = v5;
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v1 + 16); // 0xef259
    int64_t v7 = *v6; // 0xef259
    *v2 = v7;
    *v4 = a1;
    int64_t * v8 = (int64_t *)(v1 - 24); // 0xef262
    *v8 = v3;
    *v4 = a3;
    *v8 = v5;
    int64_t * v9 = (int64_t *)v1; // 0xef28d
    *v9 = v5;
    *(int64_t *)(v1 - 32) = v7;
    *v8 = v7;
    *v6 = *v4;
    int64_t v10 = *v2; // 0xef2ae
    *v4 = v10;
    *v8 = v10;
    int64_t v11 = *v9; // 0xef2ca
    *v2 = v11;
    *v4 = v11;
    int64_t v12; // bp-32, 0xef1b6
    return function_cdc60(*v4, a2, *v4, v7, a5, v1, (int64_t)&v12);
}

// Address range: 0xef308 - 0xef30d
int64_t function_ef308(void) {
    // 0xef308
    return function_5f8e12f7();
}

// Address range: 0xef33c - 0xef399
int64_t function_ef33c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a8;
    int64_t v2; // 0xef33c
    char * v3 = (char *)(v2 - 127); // 0xef33c
    *v3 = *v3 | (char)a4;
    int64_t v4 = (int64_t)&v1; // 0xef36d
    int64_t result = *(int64_t *)(v4 + 32); // 0xef385
    *(int64_t *)(v4 - 8) = result;
    *(int64_t *)(v4 - 16) = result;
    *(int64_t *)(v4 - 24) = a6;
    return result;
}

// Address range: 0x14b113 - 0x14b124
int64_t function_14b113(int64_t a1) {
    // 0x14b113
    int64_t v1; // 0x14b113
    return v1 & 0xfa6d7764 | 0x592889b;
}

// Address range: 0x14b137 - 0x14b13f
int64_t function_14b137(int64_t a1, int64_t a2, int64_t a3) {
    // 0x14b137
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return function_7d2f19();
}

// Address range: 0x14b183 - 0x14b188
int64_t function_14b183(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x14b183
    int64_t result; // 0x14b183
    return result;
}

// Address range: 0x14b199 - 0x14b1a8
int64_t function_14b199(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 + 25); // 0x14b199
    int64_t v2; // 0x14b199
    *v1 = *v1 + (char)(v2 / 256);
    *(char *)v2 = 61;
    int64_t v3; // 0x14b199
    *(int32_t *)a2 = *(int32_t *)&v3 + (int32_t)v2;
    return function_b503140();
}

// Address range: 0x14b1a8 - 0x14b1c2
int64_t function_14b1a8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x14b1a8
    unknown_fffffffff675dcae();
    char * v1 = (char *)(a3 - 0x4bc02b99); // 0x14b1ad
    *v1 = 2 * *v1;
    return function_6818116c();
}

// Address range: 0x14b1c6 - 0x14b1c9
int64_t function_14b1c6(void) {
    // 0x14b1c6
    int64_t result; // 0x14b1c6
    return result;
}

// Address range: 0x14b1de - 0x14b1e0
int64_t function_14b1de(void) {
    // 0x14b1de
    int64_t result; // 0x14b1de
    return result;
}

// Address range: 0x14b223 - 0x14b224
int64_t function_14b223(void) {
    // 0x14b223
    int64_t result; // 0x14b223
    return result;
}

// Address range: 0x14b28f - 0x14b291
int64_t function_14b28f(void) {
    // 0x14b28f
    return function_14b223();
}

// Address range: 0x14b2b2 - 0x14b2b4
int64_t function_14b2b2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x14b2b2
    int64_t result; // 0x14b2b2
    return result;
}

// Address range: 0x14b2f1 - 0x14b37b
int64_t function_14b2f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x14b2f1
    bool v3; // 0x14b2f1
    if (!v3 && !v3) {
        uint32_t result = 0x10000 * (int32_t)v2 >> 16 | -0x1717fb10; // 0x14b350
        __asm_out_134(122, result);
        return result;
    }
    if (v3) {
        // 0x14b2fa
        __asm_out((int16_t)a3, (char)v2);
        int64_t result2 = v2 & 0xffffffff; // 0x14b303
        int32_t v4 = *(int32_t *)(result2 - 0x4c5ce7c6); // 0x14b305
        char * v5 = (char *)(result2 - 0x12fdec01); // 0x14b30b
        *v5 = *v5 - 51;
        uint32_t v6 = (int32_t)a1;
        *(int32_t *)-0x13de4ce9 = *(int32_t *)-0x13de4ce9 | v6;
        uint32_t v7 = *(int32_t *)&v1; // 0x14b322
        int64_t v8 = v3 ? -4 : 4; // 0x14b322
        __asm_out_133((int16_t)v4, (int32_t)a3);
        *(char *)(v8 + a1) = *(char *)(v1 + v8);
        int64_t v9; // 0x14b2f1
        int32_t v10 = *(int32_t *)&v9; // 0x14b327
        char v11 = *(char *)0xbf040e88; // 0x14b329
        *(char *)0xbf040e88 = v11 + (char)(v4 + (int32_t)(v7 < v6) + v10);
        return result2;
    }
    // 0x14b36f
    return v2 & -256 | (int64_t)*(char *)-0x36e3fe17c1f921a4;
}

// Address range: 0x14b38d - 0x14b3ce
int64_t function_14b38d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14b38d
    int64_t v1; // 0x14b38d
    uint64_t v2 = v1;
    unknown_69b19393();
    char v3 = *(char *)0x6294dc51; // 0x14b392
    bool v4; // 0x14b38d
    *(char *)0x6294dc51 = (char)v4 + (char)(v2 / 256) + v3;
    unknown_ffffffffd5424d9e();
    int64_t v5 = unknown_ffffffff9e8790a9(); // 0x14b3a3
    unsigned char v6 = *(char *)-0x4a3a27fe1791df15; // 0x14b3aa
    int32_t * v7 = (int32_t *)(a1 - 24); // 0x14b3b7
    int32_t v8 = *v7; // 0x14b3b7
    *v7 = v8 - (int32_t)a3 + (int32_t)((int16_t)(v5 & 0xff00 | (int64_t)v6) < 0x8c46);
    int32_t * v9 = (int32_t *)(v2 - 0x55f369f3 + 8 * v2); // 0x14b3ba
    *v9 = *v9 + (int32_t)a4;
    int64_t v10; // 0x14b38d
    *(int32_t *)a4 = *(int32_t *)&v10 + 108;
    return unknown_81cc3ca();
}

// Address range: 0x14b3ce - 0x14b3d3
int64_t function_14b3ce(void) {
    // 0x14b3ce
    return function_1623b5bb();
}

// Address range: 0x14b3f9 - 0x14b3fa
int64_t function_14b3f9(void) {
    // 0x14b3f9
    int64_t result; // 0x14b3f9
    return result;
}

// Address range: 0x14b415 - 0x14b416
int64_t function_14b415(int64_t a1) {
    // 0x14b415
    int64_t result; // 0x14b415
    return result;
}

// Address range: 0x14b424 - 0x14b425
int64_t function_14b424(void) {
    // 0x14b424
    int64_t result; // 0x14b424
    return result;
}

// Address range: 0x14b44c - 0x14b466
int64_t function_14b44c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14b44c
    int64_t v1; // 0x14b44c
    int32_t * v2 = (int32_t *)(v1 + 0x7907aef5); // 0x14b44c
    uint32_t v3 = *v2; // 0x14b44c
    uint32_t v4 = v3 + (int32_t)v1; // 0x14b44c
    *v2 = v4;
    char v5 = *(char *)((v1 & -0xff01 | (int64_t)"MCloneTable") + 0x1e87d40); // 0x14b456
    int32_t * v6 = (int32_t *)(v1 + 75); // 0x14b45d
    int32_t v7 = *v6 + (int32_t)a4; // 0x14b45d
    *v6 = v7;
    if (v7 == 0) {
        function_14b3f9();
    }
    // 0x14b462
    int64_t v8; // 0x14b44c
    int64_t result = *(int64_t *)((a3 & 0xffffff00 | (int64_t)(v5 | (char)(a3 - v1 + (int64_t)(v4 < v3)))) + (int64_t)&v8 & 0xffffffff); // 0x14b464
    return result;
}

// Address range: 0x14b49a - 0x14b4d6
int64_t function_14b49a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x14b49a
    int64_t v1; // 0x14b49a
    uint64_t v2 = v1;
    int64_t v3 = a3;
    char * v4 = (char *)(a3 + 0x58010754); // 0x14b49a
    unsigned char v5 = *v4; // 0x14b49a
    unsigned char v6 = v5 + (char)v2; // 0x14b49a
    bool v7; // 0x14b49a
    unsigned char v8 = v6 + (char)v7; // 0x14b49a
    *v4 = v8;
    if (v8 != 0 && !((v7 ? v8 <= v5 : v6 < v5))) {
        // 0x14b4b4
        unknown_fffffffff4199cba();
        *(char *)v3 = *(char *)&v3 + (char)(v2 / 256);
        int64_t v9 = unknown_20037dc9(); // 0x14b4c3
        int32_t * v10 = (int32_t *)(v3 + 0x3ad7846e); // 0x14b4cb
        *v10 = *v10 ^ *(int32_t *)(a4 - 0x5836ff6f) + 8;
        int32_t * v11 = (int32_t *)(a1 - 16); // 0x14b4d3
        *v11 = *v11 + (int32_t)a2;
        return v9 ^ 232;
    }
    int64_t v12 = a4 & -0xff01 | (int64_t)&g5; // 0x14b4a2
    int64_t result = unknown_ffffffffb01f1cab(); // 0x14b4a5
    unsigned char v13 = (char)v12 % 32; // 0x14b4ab
    if (v13 != 0) {
        char * v14 = (char *)(v12 + 0x64ba2300); // 0x14b4ab
        unsigned char v15 = *v14; // 0x14b4ab
        *v14 = v15 << v13 | (char)((v1 & 256) != 0) << v13 - 1 | (char)((int16_t)v15 >> (int16_t)(9 - v13));
    }
    return result;
}

// Address range: 0x14b4d7 - 0x14b4eb
int64_t function_14b4d7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x14b4d7
    return __asm_in((int16_t)a3);
}

// Address range: 0x14b50d - 0x14b515
int64_t function_14b50d(int64_t a1) {
    // 0x14b50d
    int64_t v1; // 0x14b50d
    return v1 + 0xc7013d00 & 0xffffffff;
}

// Address range: 0x14b537 - 0x14b53c
int64_t function_14b537(void) {
    // 0x14b537
    return function_ffffffffb5deb724();
}

// Address range: 0x14b541 - 0x14b542
int64_t function_14b541(void) {
    // 0x14b541
    int64_t result; // 0x14b541
    return result;
}

// Address range: 0x14b567 - 0x14b56a
int64_t function_14b567(void) {
    // 0x14b567
    int64_t result; // 0x14b567
    return result;
}

// Address range: 0x14b57b - 0x14b58d
int64_t function_14b57b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x14b57b
    int64_t v1; // 0x14b57b
    return unknown_ffffffffa0f00d89((int32_t)v1 + (int32_t)a1);
}

// Address range: 0x14b5a8 - 0x14b5aa
int64_t function_14b5a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14b5a8
    return a4 & 0xffffffff;
}

// Address range: 0x14b5b5 - 0x14b5b6
int64_t function_14b5b5(void) {
    // 0x14b5b5
    int64_t result; // 0x14b5b5
    return result;
}

// Address range: 0x14b619 - 0x14b6be
int64_t function_14b619(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    unsigned char v2 = (char)a4; // 0x14b61e
    bool v3; // 0x14b619
    char v4 = v3; // 0x14b61e
    int64_t v5; // 0x14b619
    unsigned char v6 = v4 + (char)v5; // 0x14b61e
    unsigned char v7 = v2 - v6; // 0x14b61e
    bool v8 = v3 ? v6 != -1 | v7 - v4 > v2 : v6 > v2; // 0x14b61e
    __asm_wait();
    __asm_outsd((int16_t)a3, (int32_t)a2);
    uint32_t v9 = (int32_t)a1; // 0x14b622
    uint32_t v10 = (int32_t)(a4 & 0xffffff00 | (int64_t)v7);
    uint32_t v11 = (int32_t)v8 + v10; // 0x14b622
    if (!((v8 ? v11 != -1 || (int32_t)v8 + v9 - v11 > v9 : v11 > v9))) {
        function_14b5b5();
    }
    uint64_t v12 = unknown_5c09c731(); // 0x14b62b
    int32_t v13 = v5; // 0x14b632
    uint32_t v14 = v10 / 0x1000000 | 256 * v13; // 0x14b632
    if (v14 == 1) {
        int64_t v15 = unknown_ffffffffcbb4dd42(); // 0x14b63b
        return v15 + 256 * (a3 | (int64_t)(char)&g1) & 0xff00 | v15 & -0xff01;
    }
    int32_t * v16 = (int32_t *)((int64_t)v14 + 0x79a977f3); // 0x14b6b3
    *v16 = *v16 + v13;
    *(char *)v1 = *(char *)&v1 + (char)(v12 / 256);
    return (v12 + 37) % 256 | v12 & -256;
}

// Address range: 0x14b6c0 - 0x14b706
int64_t function_14b6c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14b6c0
    int64_t v1; // 0x14b6c0
    *(char *)(v1 - 100) = (char)v1;
    int64_t v2 = unknown_ffffffffb3ec4dc9(); // 0x14b6c3
    int64_t v3; // 0x14b6c0
    unsigned char v4 = *(char *)&v3; // 0x14b6c8
    unsigned char v5 = v4 + (char)v3; // 0x14b6c8
    *(char *)v3 = v5;
    uint32_t v6 = *(int32_t *)(a2 - 80) + (int32_t)v1; // 0x14b6ca
    *(char *)0x13d01e801e8f1cc = (char)v2;
    int64_t v7 = unknown_1fd4fcf(); // 0x14b6e3
    int64_t * v8 = (int64_t *)(int64_t)(v6 + (int32_t)(v5 < v4)); // 0x14b6ee
    __asm_int(-122);
    *(char *)0x419641fb = *(char *)0x419641fb + (char)(*v8 / 256);
    int64_t v9; // 0x14b6c0
    bool v10; // 0x14b6c0
    *(char *)v9 = *(char *)&v9 + (char)((v10 ? 255 : 1) + a2);
    *v8 = 0x792fd800;
    int64_t v11; // 0x14b6c0
    return v7 & -256 | (int64_t)*(char *)&v11;
}
