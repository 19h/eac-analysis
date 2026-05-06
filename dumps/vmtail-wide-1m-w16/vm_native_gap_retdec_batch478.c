/*
 * Targeted RetDec C for native executable gap queue batch 478.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xd71c7-0xd73c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd75c7-0xd77c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd77c7-0xd79c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd79c7-0xd7bc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1276dc-0x1278dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x1278dc-0x127adc rank=- name=- kind=- bytes=- uncovered=-
 *   0x234ab6-0x234cb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2352b6-0x2354b6 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_127669();
int64_t function_1276dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_12770e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_127740(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_127791(int64_t a1, int64_t a2);
int64_t function_1277ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12781d(void);
int64_t function_127845(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int32_t a6);
int64_t function_12786f(void);
int64_t function_12788d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1278ee(void);
int64_t function_12791e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1279f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_127ada(void);
int64_t function_234ab6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_234acf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_234b90(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_234c09(void);
int64_t function_234c0d(void);
int64_t function_234c1f(int64_t a1);
int64_t function_2352b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23531e(void);
int64_t function_235398(int64_t a1);
int64_t function_2353d9(void);
int64_t function_235405(int64_t a1);
int64_t function_23542d(int64_t a1);
int64_t function_2354a0(void);
int64_t function_3bc6802();
int64_t function_d71c7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_d723d(void);
int64_t function_d7356(int64_t a1);
int64_t function_d737c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d75c7(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_d76b2(void);
int64_t function_d76b6(void);
int64_t function_d76bf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d76ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d7750(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_d77b5(void);
int64_t function_d77b7(void);
int64_t function_d7810(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d7844(int64_t a1);
int64_t function_d787a(void);
int64_t function_d78ba(void);
int64_t function_d7913(void);
int64_t function_d795d(void);
int64_t function_d798b(void);
int64_t function_d79ab(void);
int64_t function_d79f0(int64_t a1);
int64_t function_d7a9d(int64_t a1);
int64_t function_d7aa7(int64_t a1);
int64_t function_d7ab6(int64_t a1);
int64_t function_d7b49(void);
int64_t function_d7b6c(int64_t a1);
int64_t function_ffffffffb49ac3b8();
int64_t function_ffffffffda7a59ff();
int64_t function_ffffffffef6472d3();
int64_t unknown_1043eb4f();
int64_t unknown_13c5edc8();
int64_t unknown_1472cafe();
int64_t unknown_341e6aef();
int64_t unknown_3a13cf0e();
int64_t unknown_3a568e3d();
int64_t unknown_3d3501f5();
int64_t unknown_43d2726c();
int64_t unknown_4bbcfb91();
int64_t unknown_5817b799();
int64_t unknown_6107a839();
int64_t unknown_7340e070();
int64_t unknown_90f620e();
int64_t unknown_966fd25();
int64_t unknown_ffffffff80522c24();
int64_t unknown_ffffffff822e5df3();
int64_t unknown_ffffffff9c98e063();
int64_t unknown_ffffffffa0658930();
int64_t unknown_ffffffffa3185f2c();
int64_t unknown_ffffffffabc2b32a();
int64_t unknown_ffffffffaea47291();
int64_t unknown_ffffffffaf135ee6();
int64_t unknown_ffffffffb68c341f();
int64_t unknown_ffffffffc24d8d58();
int64_t unknown_ffffffffc70ed801();
int64_t unknown_ffffffffd4244408();
int64_t unknown_ffffffffdf854a7b();
int64_t unknown_ffffffffe3c4a6a5();
int64_t unknown_ffffffffe5723cf9();
int64_t unknown_ffffffffec0e2ad4();
int64_t unknown_fffffffff5086f12();
int64_t unknown_fffffffffa3d52cd();

// Address range: 0xd71c7 - 0xd7223
int64_t function_d71c7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0xd71c7
    int64_t v1; // 0xd71c7
    char * v2 = (char *)(v1 + 0x4a6b0c1f); // 0xd71c7
    *v2 = *v2 & 14;
    unknown_ffffffffec0e2ad4();
    int64_t v3 = __asm_sti(); // 0xd71d3
    unsigned char v4 = (char)(a3 / 256); // 0xd71d6
    if ((char)v1 <= v4) {
        int32_t * v5 = (int32_t *)(a4 - 10); // 0xd71dc
        *v5 = *v5 + (int32_t)a3;
        int64_t v6; // 0xd71c7
        return (int64_t)&v6;
    }
    char * v7 = (char *)(a3 + 0x1e8f626); // 0xd7206
    char v8 = *v7 + v4; // 0xd7206
    *v7 = v8;
    int64_t v9 = a4 & 0xffffffff; // 0xd720e
    if (v8 == 0) {
        v9 = function_3bc6802();
    }
    // 0xd7214
    __asm_out(30, (int32_t)v9);
    *(int64_t *)((v3 & 0xffffffff) - 8) = a3;
    return unknown_ffffffffb68c341f() & -0xff01 | (int64_t)&g2;
}

// Address range: 0xd723d - 0xd7242
int64_t function_d723d(void) {
    // 0xd723d
    return function_ffffffffef6472d3();
}

// Address range: 0xd7356 - 0xd7357
int64_t function_d7356(int64_t a1) {
    // 0xd7356
    int64_t result; // 0xd7356
    return result;
}

// Address range: 0xd737c - 0xd73ac
int64_t function_d737c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd737c
    bool v1; // 0xd737c
    bool v2 = v1;
    int32_t * v3 = (int32_t *)(a1 - 50); // 0xd7381
    *v3 = *v3 + (int32_t)a3;
    unknown_ffffffffaea47291();
    int64_t v4; // 0xd737c
    *(char *)-0x30d2fb03fdfffe18 = (char)*(int32_t *)&v4;
    return unknown_ffffffffe3c4a6a5((v2 ? -1 : 1) + a1, (v2 ? -4 : 4) + a2);
}

// Address range: 0xd75c7 - 0xd767a
int64_t function_d75c7(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2 = __asm_sti(); // 0xd75c7
    int64_t v3; // 0xd75c7
    int64_t v4 = ((v2 + 58) % 256 | v2 & 0xffffff00) - v3; // 0xd75cd
    int32_t * v5 = (int32_t *)(a1 - 16); // 0xd75cf
    *v5 = *v5 + (int32_t)v4;
    unsigned char v6 = *(char *)(v3 + 0x46e04c80) & (char)v4; // 0xd75d2
    int64_t result = v4 & 0xffffff00 | (int64_t)v6; // 0xd75d2
    int64_t v7 = 256 * (int64_t)(v6 ^ (char)(a4 / 256)) | a4 & -0xff01; // 0xd75d8
    int32_t * v8 = (int32_t *)(result + 11); // 0xd75da
    *v8 = *v8 + (int32_t)v3;
    unsigned char v9 = *(char *)(v3 - 71); // 0xd75dd
    int32_t * v10 = (int32_t *)v7; // 0xd75e0
    int32_t v11 = *v10 - 1; // 0xd75e0
    *v10 = v11;
    if (v11 != 0) {
        // 0xd75e4
        return result;
    }
    // 0xd75e7
    __asm_outsd((int16_t)a3, *(int32_t *)&v1);
    *(int32_t *)a1 = (int32_t)result;
    bool v12; // 0xd75c7
    int64_t v13 = v12 ? -4 : 4; // 0xd75e9
    int64_t v14 = v13 + a1; // 0xd75e9
    char v15 = v6 + 74; // 0xd75ea
    unknown_ffffffff822e5df3(v14);
    int64_t v16 = v7 - 1; // 0xd75f7
    if (v15 == (char)(v9 > (char)(a3 / 256)) || v16 == 0) {
        // 0xd75f9
        unknown_ffffffffc70ed801();
        char * v17 = (char *)(v16 & 0xffffffff); // 0xd7607
        *v17 = *v17 + (char)v16;
        *(char *)v1 = *(char *)&v1 & (char)unknown_fffffffff5086f12();
        // 0xd7632
        return *(int64_t *)(v3 + 8);
    }
    bool v18 = v9 > (char)(a3 / 256) ? v15 + (char)(v9 > (char)(a3 / 256)) <= v6 : v6 > 181; // 0xd75ea
    int64_t v19 = v3 + 8; // 0xd764b
    if (!v18) {
        // 0xd7632
        return *(int64_t *)v19;
    }
    int64_t v20 = a3 & -0xff01 | (int64_t)&g5; // 0xd764e
    char * v21 = (char *)(v3 + 0x4cc96956); // 0xd7650
    *v21 = (char)v18 - (char)(v3 / 256) + *v21;
    int32_t * v22 = (int32_t *)(v20 + 0x7c020079); // 0xd7658
    *v22 = *v22 + (int32_t)v19;
    int64_t v23 = v14 + v13; // 0xd7660
    *(char *)v23 = *(char *)&v1;
    int64_t v24 = v12 ? -1 : 1; // 0xd7661
    int64_t v25 = v23 + v24; // 0xd7661
    int64_t v26 = v24 + 1 + v1 & 0xffffffff; // 0xd7662
    *(int32_t *)v25 = *(int32_t *)v26;
    int64_t v27 = v25 + v13; // 0xd7664
    __asm_iretd(v27, v26 + v13, v20, v16);
    unknown_43d2726c();
    *(int64_t *)v3 = v27;
    char * v28 = (char *)(v3 - 72); // 0xd7672
    unsigned char v29 = *v28; // 0xd7672
    *v28 = v29 / 2 | 128 * v29;
    return unknown_ffffffffdf854a7b();
}

// Address range: 0xd76b2 - 0xd76b3
int64_t function_d76b2(void) {
    // 0xd76b2
    int64_t result; // 0xd76b2
    return result;
}

// Address range: 0xd76b6 - 0xd76b7
int64_t function_d76b6(void) {
    // 0xd76b6
    int64_t result; // 0xd76b6
    return result;
}

// Address range: 0xd76bf - 0xd76ec
int64_t function_d76bf(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd76bf
    *(char *)(unknown_13c5edc8() - 78) = -64;
    char * v1 = (char *)(a3 + 0x70d2686c); // 0xd76d4
    *v1 = *v1 | (char)a3;
    return unknown_ffffffffaf135ee6() + 0xc3985e44 & 0xffffffff;
}

// Address range: 0xd76ec - 0xd7750
int64_t function_d76ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd76ec
    bool v1; // 0xd76ec
    int64_t v2 = (v1 ? -8 : 8) + a1; // 0xd76ec
    int64_t v3; // 0xd76ec
    int32_t * v4 = (int32_t *)(unknown_3d3501f5(v2) + v3 & 0xffffffff); // 0xd76f6
    int32_t v5 = *v4; // 0xd76f6
    int32_t v6 = a3; // 0xd76f6
    int32_t v7 = v5 + v6; // 0xd76f6
    *v4 = v7;
    int64_t v8 = unknown_1472cafe(); // 0xd76fd
    if (((v7 ^ v5) & (v7 ^ v6)) < 0) {
        v8 = function_d76b2();
    }
    // 0xd76ff
    int64_t v9; // 0xd76ec
    *(char *)v9 = *(char *)&v9 + (char)v8;
    uint64_t v10 = a4 - 1; // 0xd7701
    if (v10 != 0) {
        function_d76b6();
    }
    char * v11 = (char *)(v3 - 0x4661adca); // 0xd7703
    *v11 = *v11 + (char)(v10 / 256);
    int64_t v12 = __asm_int3(v2, a2); // 0xd7709
    int64_t * v13 = (int64_t *)(v3 + 8); // 0xd770a
    int64_t v14 = *v13; // 0xd770a
    char * v15 = (char *)(v12 - 106); // 0xd770b
    unsigned char v16 = (char)v12; // 0xd770b
    *v15 = *v15 + v16;
    *v13 = v10;
    int16_t v17 = a3; // 0xd7716
    *(char *)v2 = __asm_insb(v17);
    *(int64_t *)v3 = v2;
    __asm_outsd(v17, *(int32_t *)v14);
    unsigned char v18 = v16 % 32; // 0xd7728
    if (v18 != 0) {
        unsigned char v19 = (char)a3;
        *(char *)a3 = v19 << 8 - v18 | v19 >> v18;
    }
    unknown_ffffffffa0658930();
    int64_t result = unknown_3a568e3d(); // 0xd7737
    int32_t * v20 = (int32_t *)(v14 - 70); // 0xd773d
    *v20 = *v20 - 0x1e858c4;
    char * v21 = (char *)(a3 & -0xff01 | (int64_t)"_MODE_CENTAUR"); // 0xd7744
    *v21 = *v21 + (char)result;
    return result;
}

// Address range: 0xd7750 - 0xd7764
int64_t function_d7750(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xd7750
    int64_t v1; // 0xd7750
    int32_t * v2 = (int32_t *)(a4 - 0x6ea0fe63 + (v1 & 0xffffffff)); // 0xd7759
    *v2 = *v2 + *(int32_t *)(v1 - 0x17c1c425);
    return a3 & 0xffffffff;
}

// Address range: 0xd77b5 - 0xd77b7
int64_t function_d77b5(void) {
    // 0xd77b5
    int64_t v1; // 0xd77b5
    return function_d7810(v1, v1, v1, v1);
}

// Address range: 0xd77b7 - 0xd77b8
int64_t function_d77b7(void) {
    // 0xd77b7
    int64_t result; // 0xd77b7
    return result;
}

// Address range: 0xd7810 - 0xd7829
int64_t function_d7810(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd7810
    int64_t v1; // 0xd7810
    *(char *)a1 = (char)(v1 / 256) + (char)v1;
    return unknown_ffffffffabc2b32a();
}

// Address range: 0xd7844 - 0xd7847
int64_t function_d7844(int64_t a1) {
    // 0xd7844
    int64_t result; // 0xd7844
    return result;
}

// Address range: 0xd787a - 0xd787d
int64_t function_d787a(void) {
    // 0xd787a
    int64_t result; // 0xd787a
    return result;
}

// Address range: 0xd78ba - 0xd78bf
int64_t function_d78ba(void) {
    // 0xd78ba
    return function_ffffffffb49ac3b8();
}

// Address range: 0xd7913 - 0xd7916
int64_t function_d7913(void) {
    // 0xd7913
    int64_t v1; // 0xd7913
    int64_t v2 = v1;
    return (v2 + 35) % 256 | v2 & -256;
}

// Address range: 0xd795d - 0xd7966
int64_t function_d795d(void) {
    // 0xd795d
    int64_t v1; // 0xd795d
    int64_t v2 = v1;
    int64_t v3 = v1;
    bool v4; // 0xd795d
    *(char *)v2 = 128 * (char)v4 | (char)v2 / 2;
    return (v3 + 3) % 256 | v3 & -256;
}

// Address range: 0xd798b - 0xd7990
int64_t function_d798b(void) {
    // 0xd798b
    return unknown_4bbcfb91();
}

// Address range: 0xd79ab - 0xd79ac
int64_t function_d79ab(void) {
    // 0xd79ab
    int64_t result; // 0xd79ab
    return result;
}

// Address range: 0xd79f0 - 0xd79f8
int64_t function_d79f0(int64_t a1) {
    // 0xd79f0
    return function_d79ab();
}

// Address range: 0xd7a9d - 0xd7a9e
int64_t function_d7a9d(int64_t a1) {
    // 0xd7a9d
    int64_t result; // 0xd7a9d
    return result;
}

// Address range: 0xd7aa7 - 0xd7aa8
int64_t function_d7aa7(int64_t a1) {
    // 0xd7aa7
    int64_t result; // 0xd7aa7
    return result;
}

// Address range: 0xd7ab6 - 0xd7ab7
int64_t function_d7ab6(int64_t a1) {
    // 0xd7ab6
    int64_t result; // 0xd7ab6
    return result;
}

// Address range: 0xd7b49 - 0xd7b53
int64_t function_d7b49(void) {
    // 0xd7b49
    unknown_1043eb4f();
    return function_ffffffffda7a59ff();
}

// Address range: 0xd7b6c - 0xd7b72
int64_t function_d7b6c(int64_t a1) {
    // 0xd7b6c
    int64_t result; // 0xd7b6c
    return result;
}

// Address range: 0x1276dc - 0x12770d
int64_t function_1276dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4;
    int64_t v2; // 0x1276dc
    *(int32_t *)a5 = (int32_t)v2 + (int32_t)a5;
    char v3 = v2; // 0x1276e2
    char v4 = v2 / 256; // 0x1276e2
    char v5 = v4 + v3; // 0x1276e2
    int64_t v6; // 0x1276dc
    if (((v5 ^ v3) & (v5 ^ v4)) < 0) {
        v6 = function_127669();
    }
    int32_t v7 = *(int32_t *)(v6 + 8 * v2) + (int32_t)a1; // 0x1276e6
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a3;
    char v8 = *(char *)0xa163ea91 | (char)(v1 / 256); // 0x1276f1
    int64_t v9 = 256 * (int64_t)v8 | v1 & -0xff01; // 0x1276f1
    v1 = v9;
    if (v8 >= 0 == (v8 != 0)) {
        // 0x127707
        return unknown_3a13cf0e(v7, a6, 0xa163eabf, v9);
    }
    int64_t result = v6 & -256 | (int64_t)__asm_in(-24); // 0x1276f8
    *(int32_t *)0x4b4da015 = *(int32_t *)0x4b4da015 + v7;
    char * v10 = (char *)result; // 0x127703
    unsigned char v11 = *v10; // 0x127703
    *v10 = v11 / 128 | 2 * v11;
    return result;
}

// Address range: 0x12770e - 0x127740
int64_t function_12770e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 0x600188fa); // 0x127716
    int64_t v2; // 0x12770e
    *v1 = *v1 + (int32_t)v2;
    int16_t v3 = a3; // 0x127723
    *(char *)a1 = __asm_insb(v3);
    unknown_ffffffffa3185f2c();
    unknown_90f620e();
    unknown_6107a839();
    __asm_outsd(v3, *(int32_t *)a5);
    return unknown_5817b799(a1, a5);
}

// Address range: 0x127740 - 0x12774d
int64_t function_127740(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x127740
    return __asm_sti() + 0xc5d001e8 & 0xffffffff;
}

// Address range: 0x127791 - 0x12779b
int64_t function_127791(int64_t a1, int64_t a2) {
    // 0x127791
    return unknown_5817b799(a1, a2);
}

// Address range: 0x1277ad - 0x127802
int64_t function_1277ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int64_t v2; // 0x1277ad
    char * v3 = (char *)(v2 - 0x4dff73b9); // 0x1277b4
    char v4 = *v3; // 0x1277b4
    char v5 = (uint64_t)v2 / 256; // 0x1277b4
    char v6 = v4 + v5; // 0x1277b4
    *v3 = v6;
    int64_t result; // 0x1277ad
    if (v6 < 0 != ((v6 ^ v4) & (v6 ^ v5)) < 0) {
        // 0x1277f9
        return result;
    }
    // 0x1277bc
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)(a2 - a3);
    uint32_t v7 = (int32_t)a4 % 32; // 0x1277c0
    if (v7 != 0) {
        uint32_t v8 = *(int32_t *)&result; // 0x1277c0
        *(int32_t *)result = v8 >> 32 - v7 | v8 << v7;
    }
    return result;
}

// Address range: 0x12781d - 0x12781f
int64_t function_12781d(void) {
    // 0x12781d
    int64_t result; // 0x12781d
    return result;
}

// Address range: 0x127845 - 0x127865
int64_t function_127845(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    char * v1 = (char *)(a4 + 0x55b996da); // 0x127845
    *v1 = *v1 + (char)(a3 / 256);
    char v2 = *(char *)-0x37e9b1ae; // 0x12784b
    int64_t v3; // 0x127845
    *(char *)-0x37e9b1ae = v2 + (char)((uint64_t)v3 / 256);
    *(int32_t *)a2 = (int32_t)a2;
    int32_t result = __asm_in_133((int16_t)((int32_t)v3 >> 31)); // 0x12785d
    char * v4 = (char *)(a5 - 0xffec27d); // 0x12785e
    *v4 = *v4 + (char)((int32_t)a4 + a6);
    return result;
}

// Address range: 0x12786f - 0x127870
int64_t function_12786f(void) {
    // 0x12786f
    int64_t result; // 0x12786f
    return result;
}

// Address range: 0x12788d - 0x1278e3
int64_t function_12788d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x12788d
    int64_t v1; // 0x12788d
    char v2 = v1 / 256; // 0x12788f
    char v3 = *(char *)0x57d45796 + v2; // 0x12788f
    *(char *)0x57d45796 = v3;
    if (v3 >= 0) {
        function_12786f();
    }
    char * v4 = (char *)(v1 + 0x132b73c8); // 0x12789d
    *v4 = (char)a1;
    *(char *)0xfbabb51a = *(char *)0xfbabb51a + (char)a3;
    int64_t v5 = __asm_int3(a1 & -256 | (int64_t)*v4, a2); // 0x1278a6
    *(char *)0xe9caae = *(char *)0xe9caae + v2;
    int32_t v6 = v5; // 0x1278b1
    *(int32_t *)-0x45bd379422fe175f = v6;
    int32_t * v7 = (int32_t *)(a2 + 0x3d01e8f8); // 0x1278bf
    *v7 = ((int32_t)(*(char *)(v5 - 116) + 26) | -0x4544b00) + *v7;
    int32_t * v8 = (int32_t *)(a2 - 76); // 0x1278c5
    *v8 = *v8 + v6;
    int64_t result = __asm_hlt(); // 0x1278d7
    *(int32_t *)0x640852c301e85289 = (int32_t)result;
    return result;
}

// Address range: 0x1278ee - 0x1278f1
int64_t function_1278ee(void) {
    // 0x1278ee
    int64_t result; // 0x1278ee
    return result;
}

// Address range: 0x12791e - 0x127932
int64_t function_12791e(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_ffffffff80522c24(); // 0x12791e
    *(int64_t *)((a3 & 0xffffffff) - 8) = a1;
    return result;
}

// Address range: 0x1279f3 - 0x127a23
int64_t function_1279f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1279f3
    unknown_ffffffffe5723cf9();
    __asm_wait();
    uint64_t v1 = unknown_ffffffffd4244408(); // 0x127a02
    *(char *)-0x17fbf627f3748c3a = (char)v1;
    int64_t v2; // 0x1279f3
    return v1 & -256 | (int64_t)*(char *)(v1 % 256 + v2);
}

// Address range: 0x127ada - 0x127adb
int64_t function_127ada(void) {
    // 0x127ada
    int64_t result; // 0x127ada
    return result;
}

// Address range: 0x234ab6 - 0x234ace
int64_t function_234ab6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x234ab6
    __asm_int1();
    return unknown_966fd25();
}

// Address range: 0x234acf - 0x234b85
int64_t function_234acf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x234ad4
    int64_t v1; // 0x234acf
    int64_t v2 = v1;
    int64_t v3 = a4;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)v1;
    unsigned char v4 = *(char *)-0x45dacc7a; // 0x234b44
    *(char *)-0x45dacc7a = v4 + 112;
    *(char *)a3 = (char)v3;
    char * v5 = (char *)(4 * v3 + a3); // 0x234b4d
    *v5 = (char)v3 + (char)(v4 > 143) + *v5;
    int16_t v6 = a3; // 0x234b57
    __asm_out_134(v6, (char)unknown_ffffffffc24d8d58());
    uint64_t v7 = v3;
    *(char *)v7 = *(char *)&v3 & (char)(v7 / 256);
    __asm_out_135(v6, (int32_t)unknown_ffffffff9c98e063() + 0x594900cb);
    return unknown_7340e070();
}

// Address range: 0x234b90 - 0x234bfc
int64_t function_234b90(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x234b90
    int64_t v1; // 0x234b90
    if ((char)v1 <= (char)(a3 / 256)) {
        int64_t result = v1 & -256; // 0x234bb0
        char * v2 = (char *)result; // 0x234bb2
        *v2 = *v2 - 92;
        return result;
    }
    int32_t * v3 = (int32_t *)(v1 + 0x1fad1b68); // 0x234bdf
    *v3 = *v3 + (int32_t)v1;
    bool v4; // 0x234b90
    int64_t v5 = v4 ? -1 : 1; // 0x234be5
    int64_t v6 = v5 + a1; // 0x234be5
    int64_t result2 = unknown_341e6aef(v6, v5 + a5); // 0x234be8
    char * v7 = (char *)(v6 - 0x38ecb441); // 0x234bee
    *v7 = *v7 | (char)v1;
    return result2;
}

// Address range: 0x234c09 - 0x234c0a
int64_t function_234c09(void) {
    // 0x234c09
    int64_t result; // 0x234c09
    return result;
}

// Address range: 0x234c0d - 0x234c0e
int64_t function_234c0d(void) {
    // 0x234c0d
    int64_t result; // 0x234c0d
    return result;
}

// Address range: 0x234c1f - 0x234c22
int64_t function_234c1f(int64_t a1) {
    // 0x234c1f
    int64_t result; // 0x234c1f
    bool v1; // 0x234c1f
    if (!v1) {
        result = function_234c09();
    }
    // 0x234c21
    return result;
}

// Address range: 0x2352b6 - 0x2352cc
int64_t function_2352b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2352b6
    int64_t v1; // 0x2352b6
    *(int32_t *)a2 = 2 * (int32_t)v1;
    int64_t v2; // 0x2352b6
    *(char *)a4 = *(char *)&v2 - (char)(v1 / 256);
    bool v3; // 0x2352b6
    __asm_int3(a1, (v3 ? -1 : 1) + a2);
    return unknown_fffffffffa3d52cd();
}

// Address range: 0x23531e - 0x235321
int64_t function_23531e(void) {
    // 0x23531e
    int64_t result; // 0x23531e
    return result;
}

// Address range: 0x235398 - 0x23539f
int64_t function_235398(int64_t a1) {
    // 0x235398
    int64_t result; // 0x235398
    return result;
}

// Address range: 0x2353d9 - 0x2353da
int64_t function_2353d9(void) {
    // 0x2353d9
    int64_t result; // 0x2353d9
    return result;
}

// Address range: 0x235405 - 0x23540a
int64_t function_235405(int64_t a1) {
    // 0x235405
    int64_t result; // 0x235405
    *(int32_t *)a1 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x23542d - 0x23542f
int64_t function_23542d(int64_t a1) {
    // 0x23542d
    int64_t result; // 0x23542d
    return result;
}

// Address range: 0x2354a0 - 0x2354a7
int64_t function_2354a0(void) {
    // 0x2354a0
    int64_t v1; // 0x2354a0
    return v1 + 0xa1bfe512 & 0xffffffff;
}
