/*
 * Targeted RetDec C for native executable gap queue batch 458.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1107bf-0x1109bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1109bf-0x110bbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x110bbf-0x110dbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x110dbf-0x110fbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x273841-0x273a41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42c093-0x42c293 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42c293-0x42c493 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42c693-0x42c893 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1107b0();
int64_t function_1107bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1107dc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_110802(int64_t a1);
int64_t function_110873(void);
int64_t function_1108aa(int64_t a1);
int64_t function_1108b7(void);
int64_t function_1108bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_110a33(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_110a86(int64_t a1);
int64_t function_110a9b(void);
int64_t function_110ab6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_110b3a(void);
int64_t function_110b6c(int64_t a1);
int64_t function_110bb0(void);
int64_t function_110c27(void);
int64_t function_110c72(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_110ce6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_110dde(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_110e6c(int64_t a1);
int64_t function_110eb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f90d2a();
int64_t function_2737df();
int64_t function_273827();
int64_t function_273841(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_273889(void);
int64_t function_2738c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2738f6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_273918(void);
int64_t function_2739e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5);
int64_t function_273a38(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42c093(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42c0a3(void);
int64_t function_42c0a4(int64_t a1);
int64_t function_42c0b5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_42c0e4(void);
int64_t function_42c0e6(int64_t a1);
int64_t function_42c0e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_42c18a(void);
int64_t function_42c18f(int64_t a1);
int64_t function_42c1b3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_42c1bc(void);
int64_t function_42c1fe(void);
int64_t function_42c220(int64_t a1);
int64_t function_42c226(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_42c280(void);
int64_t function_42c290(void);
int64_t function_42c364(void);
int64_t function_42c3b3(int64_t a1);
int64_t function_42c3e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_42c62f();
int64_t function_42c693(int64_t a1, int64_t a2, int64_t a3);
int64_t function_42c6d9(void);
int64_t function_42c727(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42c779(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42c7ca(int64_t a1, int64_t a2, int64_t a3);
int64_t function_42c7ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42c7fc(void);
int64_t function_42c80d(int64_t a1);
int64_t function_42c815(int64_t a1, int64_t a2);
int64_t function_42c87a(int64_t a1);
int64_t function_4312f4fd();
int64_t function_606ac3c9();
int64_t function_61e40dd6();
int64_t function_6f42b780();
int64_t function_ffffffff8fae6bbe();
int64_t function_ffffffffe90b37a2();
int64_t unknown_377c3e71();
int64_t unknown_37cd54de();
int64_t unknown_381bdcc6();
int64_t unknown_3a3d9b5d();
int64_t unknown_427114ec();
int64_t unknown_6947d5d6();
int64_t unknown_70468dca();
int64_t unknown_7305a839();
int64_t unknown_78e4f85();
int64_t unknown_7a711d39();
int64_t unknown_ffffffff8af639b5();
int64_t unknown_ffffffffa06541bd();
int64_t unknown_ffffffffb44e82c5();
int64_t unknown_ffffffffb49ea1bd();
int64_t unknown_ffffffffb5f78647();
int64_t unknown_ffffffffeaad40e4();
int64_t unknown_ffffffffeb05a61c();
int64_t unknown_ffffffffefc2d011();
int64_t unknown_fffffffff6d828f3();

// Address range: 0x1107bf - 0x1107db
int64_t function_1107bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1107bf
    bool v1; // 0x1107bf
    bool v2 = v1;
    int64_t v3; // 0x1107bf
    *(char *)a1 = (char)v3;
    uint32_t v4 = *(int32_t *)(v3 - 61); // 0x1107c0
    if (*(char *)((v3 & 0xffffffff | 0x100000000 * a3) % (int64_t)v4) > -54) {
        function_1107b0();
    }
    int64_t v5 = v2 ? -1 : 1; // 0x1107bf
    int64_t v6 = v5 + a1; // 0x1107bf
    int32_t * v7 = (int32_t *)(a4 + 127); // 0x1107c8
    *v7 = *v7 + (int32_t)v3;
    int64_t v8 = (int64_t)(42 * *(int32_t *)(v5 + a2)); // 0x1107cb
    *(int32_t *)v6 = *(int32_t *)v8;
    return unknown_6947d5d6(v6 + (v2 ? -5 : 5), (v2 ? -4 : 4) + v8);
}

// Address range: 0x1107dc - 0x1107f1
int64_t function_1107dc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1107dc
    int64_t v1; // 0x1107dc
    int64_t v2 = v1 + 0xbdadfe18; // 0x1107dc
    int64_t v3 = v2 & 0xffffffff; // 0x1107dc
    int32_t * v4 = (int32_t *)v3; // 0x1107e1
    *v4 = *v4 + (int32_t)v2 + (int32_t)((int32_t)v1 < 0x425201e8);
    char * v5 = (char *)v3; // 0x1107e3
    char v6 = *v5 - 114; // 0x1107e3
    *v5 = v6;
    int64_t v7; // 0x1107dc
    *(int32_t *)a1 = *(int32_t *)&v7;
    int32_t * v8 = (int32_t *)(v1 + 1); // 0x1107ec
    *v8 = *v8 + (int32_t)a4;
    return v2 & 0xffffff00 | (int64_t)((char)v2 + (char)(a4 / 256) + v6);
}

// Address range: 0x110802 - 0x110805
int64_t function_110802(int64_t a1) {
    // 0x110802
    int64_t result; // 0x110802
    return result;
}

// Address range: 0x110873 - 0x110876
int64_t function_110873(void) {
    // 0x110873
    int64_t result; // 0x110873
    return result;
}

// Address range: 0x1108aa - 0x1108ab
int64_t function_1108aa(int64_t a1) {
    // 0x1108aa
    int64_t result; // 0x1108aa
    return result;
}

// Address range: 0x1108b7 - 0x1108b8
int64_t function_1108b7(void) {
    // 0x1108b7
    int64_t result; // 0x1108b7
    return result;
}

// Address range: 0x1108bd - 0x1109d5
int64_t function_1108bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3 = unknown_ffffffffb44e82c5(); // 0x1108bf
    int64_t v4 = a3 & 0xffffffff; // 0x1108c8
    *(int64_t *)(v4 - 8) = -34;
    *(int32_t *)0x10fc9de7 = *(int32_t *)0x10fc9de7 + (int32_t)a1;
    *(int32_t *)a1 = *(int32_t *)&v2 + (int32_t)unknown_427114ec();
    int64_t v5; // 0x1108bd
    uint32_t v6 = *(int32_t *)&v5; // 0x1108ed
    uint32_t v7 = v6 + (int32_t)a4; // 0x1108ed
    *(int32_t *)v5 = v7;
    int64_t v8 = __asm_wait(); // 0x1108f0
    if (v7 < v6 || v7 == 0) {
        v8 = function_1108b7();
    }
    int64_t v9 = v3 & 0xffffffff; // 0x1108c5
    int64_t v10 = v8;
    *(char *)0xc32b125a = 9;
    *(char *)v2 = *(char *)&v1;
    bool v11; // 0x1108bd
    int64_t v12 = v11 ? -1 : 1; // 0x1108fb
    int64_t v13 = v2 + v12; // 0x1108fb
    *(int32_t *)v13 = (int32_t)v10;
    int64_t v14 = v11 ? -4 : 4; // 0x1108fc
    int64_t v15 = v13 + 2 * v14; // 0x110903
    int64_t v16 = v1 + (v11 ? -5 : 5); // 0x110903
    v5 |= 255;
    int64_t v17 = a4 & 0xffffff00 | 160; // 0x110906
    char * v18 = (char *)v17; // 0x110907
    *v18 = *v18 - 96;
    char v19 = *(char *)(v16 + 4 * v17); // 0x110909
    int64_t v20 = v15 + v14; // 0x11090e
    int64_t v21 = v16 + v14; // 0x11090e
    v2 = v20;
    v1 = v21;
    uint64_t v22 = __asm_hlt(v20, v21); // 0x11090f
    int64_t v23 = (v10 & 0xffffff00 | (int64_t)(v19 + (char)v10)) - 1; // 0x110910
    if (v23 != 0 != (*(int32_t *)v16 == *(int32_t *)v15)) {
        // 0x110912
        *(int32_t *)v20 = (int32_t)v22;
        char * v24 = (char *)v22; // 0x110915
        char v25 = v22; // 0x110915
        *v24 = *v24 + v25;
        *(char *)0x12501e881 = *(char *)0x12501e881 + (char)(v22 / 256);
        int32_t * v26 = (int32_t *)v9; // 0x11091d
        *v26 = (int32_t)a3 - 504 + *v26;
        char * v27 = (char *)v9; // 0x11091f
        *v27 = *v27 + v25;
        int64_t result = v22 & 0xffffffff ^ 0xb1c9743d; // 0x110921
        int32_t * v28 = (int32_t *)result; // 0x11092d
        *v28 = -0x17fe17a3 - (int32_t)result + *v28;
        return result;
    }
    int32_t * v29 = (int32_t *)v22; // 0x11094f
    uint32_t v30 = *v29; // 0x11094f
    uint32_t v31 = (int32_t)v22; // 0x11094f
    uint32_t v32 = v30 + v31; // 0x11094f
    *v29 = v32;
    uint32_t v33 = v31 - 0x6938f0d5 + (int32_t)(v32 < v30); // 0x110951
    int64_t v34 = v33; // 0x110951
    unsigned char v35 = (char)v23 % 32; // 0x110956
    if (v35 != 0) {
        char * v36 = (char *)(v34 + 94); // 0x110956
        unsigned char v37 = *v36; // 0x110956
        bool v38 = v32 < v30 ? v33 <= v31 : v31 > 0x6938f0d4; // 0x110951
        *v36 = v37 >> v35 | (char)((int16_t)v37 << (int16_t)(9 - v35)) | (char)v38 << 8 - v35;
    }
    int32_t * v39 = (int32_t *)(v5 + 0x13d0000); // 0x11095f
    *v39 = *v39 + (int32_t)v1;
    v5 = 0xe801e861;
    unsigned char v40 = *(char *)(v4 - 620 + 4 * v9); // 0x11096c
    *(char *)-0x277ffd81 = *(char *)-0x277ffd81 - 24;
    int64_t v41 = v9 + 0xe8d8d100; // 0x110983
    int64_t v42 = v41 & 0xffffffff; // 0x110983
    int32_t * v43 = (int32_t *)(v1 - 127); // 0x110989
    int64_t v44; // 0x1108bd
    *v43 = *v43 + (int32_t)v44;
    int64_t v45 = v44 & 0xffffffff ^ 0xe801e822; // 0x110991
    uint32_t v46 = *(int32_t *)0x5c7e259d; // 0x110996
    uint32_t v47 = (int32_t)v41; // 0x110996
    int32_t v48 = v46 + v47; // 0x110996
    unsigned char v49 = llvm_ctpop_i8((char)v48); // 0x110996
    *(int32_t *)0x5c7e259d = v48;
    *(int64_t *)((v34 & 0xffff0000 | (int64_t)&g1 & 0xffffff00 | (int64_t)v40) - 8) = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | (int64_t)(v48 < v46) | 64 * (int64_t)(v48 == 0) | 128 * (int64_t)(v48 < 0) | 16 * (int64_t)(v46 % 16 + v47 % 16 > 15) | 2048 * (int64_t)(((v48 ^ v46) & (v48 ^ v47)) < 0) | 4 * (int64_t)(v49 % 2 == 0) | 2;
    *(char *)v42 = (char)v45;
    v2 = v42 + v12;
    __asm_out(-24, (char)v45);
    int32_t * v50 = (int32_t *)v1; // 0x1109a3
    *v50 = *v50 + (int32_t)v45;
    char * v51 = (char *)v2; // 0x1109ad
    char v52 = *v51 - (char)v5; // 0x1109ad
    unsigned char v53 = llvm_ctpop_i8(v52); // 0x1109ad
    *v51 = v52;
    unknown_ffffffff8af639b5();
    int64_t * v54 = (int64_t *)0xe801e85d;
    int64_t v55 = *v54; // 0x1109b4
    int64_t v56 = __asm_int1(); // 0x1109b6
    while (v53 % 2 == 0) {
        // 0x1109a1
        __asm_out(-24, (char)v56);
        v50 = (int32_t *)v1;
        *v50 = *v50 + (int32_t)v56;
        v51 = (char *)v2;
        v52 = *v51 - (char)v5;
        v53 = llvm_ctpop_i8(v52);
        *v51 = v52;
        unknown_ffffffff8af639b5();
        v54 = (int64_t *)v55;
        v55 = *v54;
        v56 = __asm_int1();
    }
    // 0x1109b9
    *(int32_t *)0x3a1f9434 = *(int32_t *)0x3a1f9434 + (int32_t)v2;
    *v54 = v56;
    int64_t v57 = __asm_hlt(v2, v1); // 0x1109c2
    char * v58 = (char *)(v1 - 24); // 0x1109c3
    *v58 = *v58 / 2;
    return v57 + 0x62a09453 & 0xffffffff;
}

// Address range: 0x110a33 - 0x110a4a
int64_t function_110a33(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_7a711d39(); // 0x110a33
    __asm_out_133((int16_t)a3, (char)result);
    *(int32_t *)(a4 - 67) = (int32_t)a1;
    int64_t v1; // 0x110a33
    uint32_t v2 = *(int32_t *)&v1; // 0x110a40
    int64_t v3; // 0x110a33
    uint32_t v4 = *(int32_t *)&v3; // 0x110a40
    int64_t v5; // 0x110a33
    int32_t v6 = *(int32_t *)&v5; // 0x110a41
    *(int32_t *)a5 = v6 + (int32_t)result + (int32_t)(v2 < v4);
    char * v7 = (char *)result; // 0x110a44
    *v7 = *v7 - 46;
    return result;
}

// Address range: 0x110a86 - 0x110a87
int64_t function_110a86(int64_t a1) {
    // 0x110a86
    int64_t result; // 0x110a86
    return result;
}

// Address range: 0x110a9b - 0x110a9c
int64_t function_110a9b(void) {
    // 0x110a9b
    int64_t result; // 0x110a9b
    return result;
}

// Address range: 0x110ab6 - 0x110ad4
int64_t function_110ab6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x110ab6
    int64_t v1; // 0x110ab6
    __asm_out_134((int16_t)a3, (int32_t)v1);
    int64_t v2 = unknown_ffffffffb49ea1bd(); // 0x110ab7
    *(int32_t *)(a1 - 0xa9b8b7) = (int32_t)v2;
    int64_t v3; // 0x110ab6
    uint16_t v4 = (int16_t)v2 % 256 * (int16_t)*(char *)&v3; // 0x110ac7
    return (v2 & 0xffff0000 | (int64_t)v4) + 0x3da3e80d + (int64_t)(v4 > 255) & 0xffffffff;
}

// Address range: 0x110b3a - 0x110b42
int64_t function_110b3a(void) {
    // 0x110b3a
    return function_1f90d2a();
}

// Address range: 0x110b6c - 0x110b70
int64_t function_110b6c(int64_t a1) {
    // 0x110b6c
    return a1 & 0xffffffff;
}

// Address range: 0x110bb0 - 0x110bb1
int64_t function_110bb0(void) {
    // 0x110bb0
    int64_t result; // 0x110bb0
    return result;
}

// Address range: 0x110c27 - 0x110c2c
int64_t function_110c27(void) {
    // 0x110c27
    return function_4312f4fd();
}

// Address range: 0x110c72 - 0x110c8b
int64_t function_110c72(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x110c72
    int64_t v1; // 0x110c72
    int64_t v2 = v1;
    int64_t v3 = (v2 + a4 / 256) % 256 | v2 & -256; // 0x110c74
    int32_t * v4 = (int32_t *)v3; // 0x110c77
    uint32_t v5 = (int32_t)a3; // 0x110c77
    *v4 = *v4 + v5;
    bool v6; // 0x110c72
    char * v7 = (char *)(8 * a3 + 87 + ((int64_t)v6 & 0xffffffff)); // 0x110c79
    *v7 = *v7 | (char)v1;
    int64_t result = unknown_78e4f85(); // 0x110c7f
    int64_t v8; // 0x110c72
    int32_t v9 = *(int32_t *)&v8; // 0x110c84
    *(int32_t *)a5 = (int32_t)((int32_t)v3 < v5) + (int32_t)a5 + v9;
    char * v10 = (char *)result; // 0x110c87
    *v10 = *v10 + 64;
    return result;
}

// Address range: 0x110ce6 - 0x110da5
int64_t function_110ce6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x110ce6
    int64_t v1; // 0x110ce6
    if ((int32_t)v1 >= (int32_t)v1) {
        // 0x110ce9
        int64_t result; // 0x110ce6
        return result;
    }
    int32_t * v2 = (int32_t *)(v1 + 0x609d8dc + 4 * v1); // 0x110d0f
    *v2 = (int32_t)a3 + 1 + *v2;
    int64_t result2 = unknown_ffffffffeb05a61c(); // 0x110d16
    int32_t * v3 = (int32_t *)(a4 - 0x7ec6544b); // 0x110d1d
    int32_t v4 = *v3 + (int32_t)result2; // 0x110d1d
    *v3 = v4;
    if (a4 != 1 != (v4 == 0)) {
        // 0x110ce9
        return result2;
    }
    // 0x110d94
    *(char *)-0x19237ad2b8755d49 = (char)result2;
    return result2;
}

// Address range: 0x110dde - 0x110df5
int64_t function_110dde(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x110dde
    int64_t result; // 0x110dde
    *(char *)0x1c8fded = *(char *)0x1c8fded + (char)(result / 256);
    *(char *)a5 = 2 * (char)result;
    return result;
}

// Address range: 0x110e6c - 0x110e6d
int64_t function_110e6c(int64_t a1) {
    // 0x110e6c
    int64_t result; // 0x110e6c
    return result;
}

// Address range: 0x110eb0 - 0x110f42
int64_t function_110eb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a1 - 0x62fcb0c6); // 0x110eb0
    *v2 = *v2 | 112;
    int64_t v3 = unknown_ffffffffa06541bd(); // 0x110eb7
    int64_t v4 = a4 & -256 | (int64_t)(*(char *)(a1 + 0x89be8c) | (char)a4); // 0x110ebc
    int64_t v5 = unknown_70468dca(); // 0x110ec4
    int64_t v6 = v4 - 1; // 0x110ed4
    bool v7; // 0x110eb0
    int64_t result2; // 0x110eb0
    if (v6 == 0) {
        // 0x110ed6
        *(int32_t *)a1 = *(int32_t *)&v1;
        bool v8; // 0x110eb0
        int64_t v9 = v8 ? -4 : 4; // 0x110ed6
        int64_t v10 = v9 + a1; // 0x110ed6
        int64_t v11; // 0x110eb0
        result2 = unknown_37cd54de(v10 + (v8 ? -1 : 1), v1 + v9, &v11, 0);
        v7 = *(char *)v10 > (char)a3;
    } else {
        unsigned char v12 = *(char *)0x2c01e8e2b00e3cdd; // 0x110ec9
        int32_t * v13 = (int32_t *)(v4 - 0x17cb9601); // 0x110f12
        int32_t v14 = v6; // 0x110f12
        *v13 = v14 + (int32_t)((char)v3 < 24) + *v13;
        int64_t v15; // 0x110eb0
        int32_t * v16 = (int32_t *)(v15 - 0x14dfd47f); // 0x110f18
        *v16 = *v16 + v14;
        *(char *)0xc2fc8436 = *(char *)0xc2fc8436 - 54;
        *(int64_t *)((v5 & 0xffffff00 | (int64_t)v12) - 8) = -36;
        unknown_7305a839();
        int32_t * v17 = (int32_t *)(v15 + 69); // 0x110f38
        uint32_t v18 = *v17; // 0x110f38
        uint32_t v19 = v18 + (int32_t)v15; // 0x110f38
        unsigned char v20 = llvm_ctpop_i8((char)v19); // 0x110f38
        *v17 = v19;
        int64_t v21; // bp+15872, 0x110eb0
        int64_t result = __asm_in((int16_t)(int64_t)&v21); // 0x110f3e
        result2 = result;
        v7 = v19 < v18;
        if (v20 % 2 != 0) {
            // 0x110f42
            return result;
        }
    }
    int32_t * v22 = (int32_t *)result2; // 0x110edd
    *v22 = *v22 + (int32_t)a5 + (int32_t)v7;
    char * v23 = (char *)result2; // 0x110ee0
    *v23 = *v23 + 60;
    return result2;
}

// Address range: 0x273841 - 0x273870
int64_t function_273841(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3 = unknown_ffffffffb5f78647(); // 0x273846
    bool v4; // 0x273841
    if (v4) {
        v3 = function_273827();
    }
    uint32_t v5 = (int32_t)a2;
    int64_t v6; // 0x273841
    uint32_t v7 = (int32_t)v6 + v5; // 0x27384b
    *(int32_t *)a2 = v7;
    *(char *)a1 = *(char *)&v2;
    v2 += (v4 ? -1 : 1);
    __asm_out(-122, (char)v3);
    int64_t v8 = v3; // 0x273852
    if (v7 == 0) {
        v8 = function_2737df();
    }
    char * v9 = (char *)v8; // 0x273855
    *v9 = (char)(v7 < v5) - (char)a4 + *v9;
    unknown_3a3d9b5d();
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a4;
    return unknown_377c3e71();
}

// Address range: 0x273889 - 0x27388a
int64_t function_273889(void) {
    // 0x273889
    int64_t result; // 0x273889
    return result;
}

// Address range: 0x2738c0 - 0x2738f6
int64_t function_2738c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2738c0
    unknown_381bdcc6();
    __asm_in_135((int16_t)a3);
    unknown_ffffffffeaad40e4();
    return unknown_fffffffff6d828f3();
}

// Address range: 0x2738f6 - 0x273916
int64_t function_2738f6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2738f6
    int64_t v1; // 0x2738f6
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + (char)((uint64_t)v1 / 256);
    int32_t * v3 = (int32_t *)(a2 - 0x573f06b3); // 0x2738fd
    int32_t v4 = *v3; // 0x2738fd
    int32_t v5 = a3; // 0x2738fd
    int32_t v6 = v4 + v5; // 0x2738fd
    *v3 = v6;
    if (v6 < 0 == ((v6 ^ v4) & (v6 ^ v5)) < 0) {
        function_273889();
    }
    // 0x273909
    __asm_wait();
    unknown_ffffffffefc2d011();
    return function_6f42b780();
}

// Address range: 0x273918 - 0x273919
int64_t function_273918(void) {
    // 0x273918
    int64_t result; // 0x273918
    return result;
}

// Address range: 0x2739e2 - 0x273a00
int64_t function_2739e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5) {
    // 0x2739e2
    int64_t v1; // 0x2739e2
    unsigned char v2 = (char)v1;
    *(char *)v1 = v2 / 128 | 2 * v2;
    int32_t * v3 = (int32_t *)(a4 + 0x36f201e8); // 0x2739f3
    int64_t v4; // bp-24562, 0x2739e2
    *v3 = *v3 ^ (int32_t)(int64_t)&v4;
    return a3 & 0xffffff00 | 166;
}

// Address range: 0x273a38 - 0x273a3e
int64_t function_273a38(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x273a38
    int64_t result; // 0x273a38
    return result;
}

// Address range: 0x42c093 - 0x42c09e
int64_t function_42c093(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42c093
    int64_t v1; // 0x42c093
    int64_t v2 = v1;
    int64_t result = (v2 + 47) % 256 | v2 & -256; // 0x42c093
    char * v3 = (char *)result; // 0x42c097
    *v3 = *v3 - (char)a3;
    return result;
}

// Address range: 0x42c0a3 - 0x42c0a4
int64_t function_42c0a3(void) {
    // 0x42c0a3
    int64_t result; // 0x42c0a3
    return result;
}

// Address range: 0x42c0a4 - 0x42c0a8
int64_t function_42c0a4(int64_t a1) {
    // 0x42c0a4
    int64_t result; // 0x42c0a4
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x42c0b5 - 0x42c0cf
int64_t function_42c0b5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x42c0b5
    int64_t v1; // 0x42c0b5
    *(char *)a1 = (char)v1;
    bool v2; // 0x42c0b5
    int64_t v3 = v2 ? -1 : 1; // 0x42c0b8
    int64_t v4 = v3 + a1; // 0x42c0b8
    int32_t * v5 = (int32_t *)(v4 - 63); // 0x42c0ba
    *v5 = *v5 ^ (int32_t)a3;
    char * v6 = (char *)(v4 + v3); // 0x42c0c2
    *v6 = *v6 & 65;
    return v1 + 0xb29c8e6 & -0xff01 | (int64_t)&g3;
}

// Address range: 0x42c0e4 - 0x42c0e6
int64_t function_42c0e4(void) {
    // 0x42c0e4
    int64_t result; // 0x42c0e4
    return result;
}

// Address range: 0x42c0e6 - 0x42c0e7
int64_t function_42c0e6(int64_t a1) {
    // 0x42c0e6
    int64_t result; // 0x42c0e6
    return result;
}

// Address range: 0x42c0e9 - 0x42c179
int64_t function_42c0e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x42c0e9
    int64_t v1; // 0x42c0e9
    uint64_t v2 = v1;
    int64_t v3 = a4;
    int32_t v4 = v1; // 0x42c0e9
    *(int32_t *)-0x43e64dbe = *(int32_t *)-0x43e64dbe | v4;
    char * v5 = (char *)(v1 - 67); // 0x42c0f2
    *v5 = *v5 | 9;
    uint64_t v6 = *(int64_t *)(a6 - 1); // 0x42c0f6
    if (v2 != v6) {
        // 0x42c14a
        return (int64_t)*(int32_t *)-0x5472c3bc73fbf231;
    }
    int32_t * v7 = (int32_t *)(a1 + 0x3cff02f5); // 0x42c0fc
    *v7 = ((int32_t)v1 ^ 208) + (int32_t)(v2 < v6) + *v7;
    int64_t v8 = (int32_t)a2 > 0x51263acf ? -0x7cf51ce6 : -0x7cf51ce5; // 0x42c107
    uint64_t v9 = (a2 & 0xffffffff) + 0xaed9c530 + v8; // 0x42c107
    int64_t v10; // 0x42c0e9
    int64_t v11 = v10;
    *(char *)v11 = *(char *)&v10 & (char)v11;
    char v12 = *(char *)&v3; // 0x42c10f
    int64_t v13 = 256 * (int64_t)(v12 | (char)(v9 / 256)) | v9 & 0xffff00ff; // 0x42c10f
    int32_t v14 = v13; // 0x42c111
    int32_t v15 = v14 & 0x40240827; // 0x42c111
    if (llvm_ctpop_i8((char)v15) % 2 != 0) {
        // 0x42c173
        return (int64_t)(v14 - *(int32_t *)(v3 - 0x59fc38c6));
    }
    int64_t result = 0x4000 * v13 & 0xffffc000 | v9 / 0x80000 % 0x2000; // 0x42c11f
    if ((v9 & 0x40000) == 0 && v15 != 0) {
        result = function_42c0a3();
    }
    // 0x42c121
    *(char *)0x19fd8e01 = *(char *)0x19fd8e01 + (char)(v10 / 256);
    int32_t * v16 = (int32_t *)(result - 0x4c47c2b2); // 0x42c128
    *v16 = *v16 & v4;
    return result;
}

// Address range: 0x42c18a - 0x42c18f
int64_t function_42c18a(void) {
    // 0x42c18a
    return function_61e40dd6();
}

// Address range: 0x42c18f - 0x42c195
int64_t function_42c18f(int64_t a1) {
    // 0x42c18f
    int64_t v1; // 0x42c18f
    return v1 & 0x825c2fb8 | 0x7da3d047;
}

// Address range: 0x42c1b3 - 0x42c1bb
int64_t function_42c1b3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x42c1b3
    int64_t result; // 0x42c1b3
    *(char *)(result + 34) = (char)(a4 / 256);
    return result;
}

// Address range: 0x42c1bc - 0x42c1bf
int64_t function_42c1bc(void) {
    // 0x42c1bc
    int64_t result; // 0x42c1bc
    return result;
}

// Address range: 0x42c1fe - 0x42c1ff
int64_t function_42c1fe(void) {
    // 0x42c1fe
    int64_t result; // 0x42c1fe
    return result;
}

// Address range: 0x42c220 - 0x42c223
int64_t function_42c220(int64_t a1) {
    // 0x42c220
    int64_t result; // 0x42c220
    return result;
}

// Address range: 0x42c226 - 0x42c25f
int64_t function_42c226(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int16_t v1 = a3; // 0x42c237
    int64_t v2; // 0x42c226
    *(int16_t *)((0x100000000 * v2 >> 32) - 37) = v1;
    __asm_in_135(v1);
    char * v3 = (char *)(a2 + 69); // 0x42c255
    *v3 = *v3 + 40;
    return function_ffffffffe90b37a2();
}

// Address range: 0x42c280 - 0x42c286
int64_t function_42c280(void) {
    // 0x42c280
    int64_t result; // 0x42c280
    return result;
}

// Address range: 0x42c290 - 0x42c297
int64_t function_42c290(void) {
    // 0x42c290
    int64_t result; // 0x42c290
    return result;
}

// Address range: 0x42c364 - 0x42c36a
int64_t function_42c364(void) {
    // 0x42c364
    __asm_sti();
    return function_606ac3c9();
}

// Address range: 0x42c3b3 - 0x42c3bf
int64_t function_42c3b3(int64_t a1) {
    // 0x42c3b3
    int64_t v1; // 0x42c3b3
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a1 - 68 + v1); // 0x42c3b3
    *v3 = *v3 | (int32_t)v2;
    return ((v2 + 192) % 256 | v2 & 0xffffff00) + 0x275ec4b3 & 0xffffffff;
}

// Address range: 0x42c3e2 - 0x42c48f
int64_t function_42c3e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    char * v2 = (char *)(a2 - 0x7ed5d0db);
    unsigned char v3 = *v2; // 0x42c447
    int64_t v4; // 0x42c3e2
    unsigned char v5 = (char)v4; // 0x42c447
    char v6 = v3 - v5; // 0x42c447
    unsigned char v7 = llvm_ctpop_i8(v6); // 0x42c447
    *v2 = v6;
    int64_t result = v4 & -0xff01 | 256 * (64 * (int64_t)(v6 == 0) | (int64_t)(v3 < v5) | 128 * (int64_t)(v6 < 0) | 16 * (int64_t)(v3 % 16 - v5 % 16 > 15) | 4 * (int64_t)(v7 % 2 == 0)) | 512; // 0x42c450
    char * v8 = (char *)(v1 - 92); // 0x42c418
    char v9 = *v8 - 112; // 0x42c418
    *v8 = v9;
    if (v9 == 0) {
        // 0x42c424
        return result;
    }
    int64_t v10 = a4 & -0xff01; // 0x42c47c
    uint32_t v11 = -110 * *(int32_t *)(v10 + 0x7563f6b3); // 0x42c41b
    int64_t v12 = v11; // 0x42c41b
    int32_t * v13 = (int32_t *)v12; // 0x42c460
    *v13 = *v13 + 0x5d706112;
    int32_t v14 = v10; // 0x42c467
    int32_t v15 = v4; // 0x42c467
    uint32_t v16 = v15 + v14; // 0x42c467
    if (((v16 ^ v14) & (v16 ^ v15)) >= 0) {
        int64_t v17 = v1;
        char v18 = *(char *)(v17 + 0x62e530fc + 4 * v17); // 0x42c433
        char * v19 = (char *)(256 * (int64_t)(v18 & (char)(v16 / 256)) | (int64_t)(v16 & -0xff01)); // 0x42c43a
        *v19 = *v19 + (char)v11;
        return result;
    }
    int64_t v20 = v4 & 152 | 103; // 0x42c46e
    int64_t v21 = result & -256; // 0x42c46e
    __asm_outsd((int16_t)a5 & -256 | 112, *(int32_t *)&v1);
    char * v22 = (char *)((v21 | v20) + v12); // 0x42c474
    *v22 = *v22 + (char)v20;
    return v21 | v20 + 109 & 252;
}

// Address range: 0x42c693 - 0x42c697
int64_t function_42c693(int64_t a1, int64_t a2, int64_t a3) {
    // 0x42c693
    int64_t result; // 0x42c693
    bool v1; // 0x42c693
    if (v1 || false) {
        result = function_42c62f();
    }
    // 0x42c695
    return result;
}

// Address range: 0x42c6d9 - 0x42c6e3
int64_t function_42c6d9(void) {
    // 0x42c6d9
    int64_t result; // 0x42c6d9
    return result;
}

// Address range: 0x42c727 - 0x42c735
int64_t function_42c727(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42c727
    return function_ffffffff8fae6bbe();
}

// Address range: 0x42c779 - 0x42c78b
int64_t function_42c779(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42c779
    int64_t v1; // 0x42c779
    int64_t v2 = v1;
    *(char *)v2 = (char)(v2 ^ (uint64_t)v1 / 256);
    int32_t * v3 = (int32_t *)(a3 + 40); // 0x42c77e
    *v3 = *v3 | (int32_t)a2;
    int64_t v4; // 0x42c779
    return (int64_t)&v4;
}

// Address range: 0x42c7ca - 0x42c7d0
int64_t function_42c7ca(int64_t a1, int64_t a2, int64_t a3) {
    // 0x42c7ca
    int64_t result; // 0x42c7ca
    char * v1 = (char *)(result + a3); // 0x42c7ca
    *v1 = *v1 | (char)a3;
    return result;
}

// Address range: 0x42c7ef - 0x42c7f8
int64_t function_42c7ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 31); // 0x42c7ef
    int64_t result; // 0x42c7ef
    *v1 = *v1 | (char)result;
    int64_t v2; // 0x42c7ef
    uint32_t v3 = *(int32_t *)&v2; // 0x42c7f2
    *(int32_t *)a4 = v3 / 0x4000 | 0x80000 * v3;
    return result;
}

// Address range: 0x42c7fc - 0x42c7ff
int64_t function_42c7fc(void) {
    // 0x42c7fc
    int64_t result; // 0x42c7fc
    return result;
}

// Address range: 0x42c80d - 0x42c810
int64_t function_42c80d(int64_t a1) {
    // 0x42c80d
    int64_t result; // 0x42c80d
    return result;
}

// Address range: 0x42c815 - 0x42c81c
int64_t function_42c815(int64_t a1, int64_t a2) {
    // 0x42c815
    int64_t v1; // 0x42c815
    return v1 & 0xffffffff;
}

// Address range: 0x42c87a - 0x42c87d
int64_t function_42c87a(int64_t a1) {
    // 0x42c87a
    int64_t result; // 0x42c87a
    return result;
}
