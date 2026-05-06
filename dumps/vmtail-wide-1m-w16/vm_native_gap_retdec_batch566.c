/*
 * Targeted RetDec C for native executable gap queue batch 566.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x411b42-0x411d42 rank=- name=- kind=- bytes=- uncovered=-
 *   0x411d42-0x411f42 rank=- name=- kind=- bytes=- uncovered=-
 *   0x411f42-0x412142 rank=- name=- kind=- bytes=- uncovered=-
 *   0x412142-0x412342 rank=- name=- kind=- bytes=- uncovered=-
 *   0x440a67-0x440c67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x440c67-0x440e67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x440e67-0x441067 rank=- name=- kind=- bytes=- uncovered=-
 *   0x441267-0x441467 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g5;
extern int g9;
extern int g10;
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
int128_t __asm_vdivpd(int128_t left, int128_t right);
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
int128_t __asm_pmaxub(int128_t left, int128_t right);
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

int64_t function_257c5d59();
int64_t function_2864bea();
int64_t function_411b42(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_411b97(void);
int64_t function_411ba4(int64_t a1);
int64_t function_411ba9(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_411c41(int64_t a1, int64_t a2, int64_t a3);
int64_t function_411c5c(void);
int64_t function_411ca1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_411ca5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_411ca7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_411cfb(int64_t a1, int64_t a2);
int64_t function_411d0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_411d62(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_411d6a(int64_t a1);
int64_t function_411dae(int64_t a1);
int64_t function_411db4(void);
int64_t function_411ed5(void);
int64_t function_411f28(void);
int64_t function_411f51(void);
int64_t function_411f60(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_411fa1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_411fa9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_411fd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_411fe6(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_411ff9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41207c(void);
int64_t function_4120b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4120c1(void);
int64_t function_4120d8(int64_t a1);
int64_t function_4120f5(void);
int64_t function_412126(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_412249(int64_t a1);
int64_t function_41225a(void);
int64_t function_412274(void);
int64_t function_41228a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_412298(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4122b5(void);
int64_t function_4122bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4122c7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4122f4(void);
int64_t function_412300(void);
int64_t function_412305(int64_t a1);
int64_t function_440a67(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_440a75(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_440abe(int64_t a1, int64_t a2);
int64_t function_440b28(void);
int64_t function_440ba5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_440bbd(void);
int64_t function_440bbf(int64_t a1);
int64_t function_440bdc(void);
int64_t function_440bf1(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_440c1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_440c42(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_440c65(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_440cd7(void);
int64_t function_440d06(void);
int64_t function_440d31(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_440d3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_440d72(int64_t a1);
int64_t function_440e05(void);
int64_t function_440e11(void);
int64_t function_440e4b(int64_t a1, int64_t a2);
int64_t function_440e9d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_440ebb(int64_t a1);
int64_t function_440ee1(void);
int64_t function_440eeb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_440fa0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_440fd5(int64_t a1);
int64_t function_441009(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_441267(int64_t a1);
int64_t function_44126c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4412a8(void);
int64_t function_4412e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_44138d(void);
int64_t function_4413f7(int64_t a1);
int64_t function_441444(int64_t a1, int64_t a2);
int64_t function_5986785c();
int64_t function_5fa03f6d();
int64_t function_6d2c35e9();
int64_t function_70b52c8f();
int64_t function_ca093ca();
int64_t function_ffffffff84b804c0();
int64_t function_ffffffff9ad5a50b();
int64_t function_ffffffffdd265200();

// Address range: 0x411b42 - 0x411b56
int64_t function_411b42(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x411b42
    int64_t v1; // 0x411b42
    uint64_t v2 = v1;
    char * v3 = (char *)(v1 - 15); // 0x411b42
    *v3 = *v3 ^ (char)(v2 / 256);
    char * v4 = (char *)(v2 - 104); // 0x411b47
    *v4 = *v4 & (char)(a4 / 256);
    int64_t result = (int64_t)(__asm_in(36) & -256) | (int64_t)__asm_in_133((int16_t)a3); // 0x411b51
    __asm_out(-88, (int32_t)result);
    return result;
}

// Address range: 0x411b97 - 0x411b98
int64_t function_411b97(void) {
    // 0x411b97
    int64_t result; // 0x411b97
    return result;
}

// Address range: 0x411ba4 - 0x411ba7
int64_t function_411ba4(int64_t a1) {
    // 0x411ba4
    int64_t result; // 0x411ba4
    return result;
}

// Address range: 0x411ba9 - 0x411c3f
int64_t function_411ba9(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x411ba9
    int64_t v1; // 0x411ba9
    // 0x411bab
    *(char *)a1 = (char)(v1 ^ a1);
    return function_6d2c35e9();
    // 0x411c29
    *(char *)0x27413d94 = *(char *)0x27413d94 + (char)v1;
    char v2 = *(char *)(v1 - 52); // 0x411c36
    int32_t v3 = __asm_insd((int16_t)(256 * (int64_t)(v2 | (char)(a3 / 256)) | a3 % 256)); // 0x411c39
    *(int32_t *)a1 = v3;
    return v1 & 0xffffff00 ^ 0x5fa82645;
}

// Address range: 0x411c41 - 0x411c56
int64_t function_411c41(int64_t a1, int64_t a2, int64_t a3) {
    // 0x411c41
    int64_t v1; // 0x411c41
    uint32_t v2 = (int32_t)v1; // 0x411c41
    bool v3; // 0x411c41
    uint32_t v4 = v3 ? 0x1c440c7 : 0x1c440c6; // 0x411c41
    uint32_t v5 = v2 - v4; // 0x411c41
    bool v6 = v3 | v4 > v2; // 0x411c41
    int64_t v7 = v5; // 0x411c41
    unsigned char v8 = (char)v5; // 0x411c4b
    char v9 = v6; // 0x411c4b
    unsigned char v10 = *(char *)(v7 + 14 + 4 * v7) + v9; // 0x411c4b
    unsigned char v11 = v8 - v10; // 0x411c4b
    bool v12 = v6 ? v10 != -1 | v11 - v9 > v8 : v10 > v8; // 0x411c4b
    unsigned char v13 = v12 ? -1 : -2; // 0x411c4f
    bool v14 = v12 ? v11 < v11 - v13 + (char)v12 | !v12 : v11 < v13; // 0x411c4f
    *(char *)a2 = (char)v1 - (v14 ? 95 : 94);
    return a3 & 0xffffffff;
}

// Address range: 0x411c5c - 0x411c5d
int64_t function_411c5c(void) {
    // 0x411c5c
    int64_t result; // 0x411c5c
    return result;
}

// Address range: 0x411ca1 - 0x411ca5
int64_t function_411ca1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x411ca1
    float80_t v1; // 0x411ca1
    *(float32_t *)a2 = (float32_t)v1;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x411ca1
    return result;
}

// Address range: 0x411ca5 - 0x411ca7
int64_t function_411ca5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x411ca5
    return a2 & 0xffffffff;
}

// Address range: 0x411ca7 - 0x411cfb
int64_t function_411ca7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x411ca7
    __asm_int(-94);
    int64_t result; // 0x411ca7
    bool v1; // 0x411ca7
    if (v1 || false) {
        // 0x411d00
        return result;
    }
    // 0x411cad
    *(char *)a1 = (char)a2;
    int64_t v2 = v1 ? -1 : 1; // 0x411cad
    char * v3 = (char *)(v2 + a2); // 0x411cb8
    *v3 = *v3 - (char)(a4 / 256);
    int32_t v4 = *(int32_t *)0x366bf95db; // 0x411cc7
    if (llvm_ctpop_i8((char)(v4 - ((int32_t)result + 34 | 199))) % 2 == 0) {
        function_411c5c();
    }
    int16_t v5 = a3; // 0x411cdd
    *(int32_t *)(v2 + a1) = __asm_insd(v5);
    __asm_out_135(v5, *(char *)0x781e6b6a);
    __asm_int(-71);
    int64_t v6; // 0x411ca7
    int32_t * v7 = (int32_t *)(2 * (result & 0x7fffffffffff00ff | (int64_t)&g5) - 0x5e82a680 + (int64_t)&v6); // 0x411cef
    *v7 = *v7 + (int32_t)a3;
    return function_ffffffff9ad5a50b();
}

// Address range: 0x411cfb - 0x411d00
int64_t function_411cfb(int64_t a1, int64_t a2) {
    // 0x411cfb
    int64_t result; // 0x411cfb
    return result;
}

// Address range: 0x411d0e - 0x411d26
int64_t function_411d0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x411d0e
    int64_t result; // 0x411d0e
    bool v1; // 0x411d0e
    if (v1 || v1) {
        // 0x411d22
        float80_t v2; // 0x411d0e
        *(int64_t *)a2 = (int64_t)v2;
        return result & -0xff01 | (int64_t)&g2;
    }
    // 0x411d10
    __asm_outsd((int16_t)a3, (int32_t)a2);
    return result;
}

// Address range: 0x411d62 - 0x411d69
int64_t function_411d62(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x411d62
    int64_t result; // 0x411d62
    return result;
}

// Address range: 0x411d6a - 0x411d6b
int64_t function_411d6a(int64_t a1) {
    // 0x411d6a
    int64_t result; // 0x411d6a
    return result;
}

// Address range: 0x411dae - 0x411db4
int64_t function_411dae(int64_t a1) {
    // 0x411dae
    int64_t result; // 0x411dae
    return result;
}

// Address range: 0x411db4 - 0x411db6
int64_t function_411db4(void) {
    // 0x411db4
    int64_t result; // 0x411db4
    return result;
}

// Address range: 0x411ed5 - 0x411ee9
int64_t function_411ed5(void) {
    // 0x411ed5
    int64_t result; // 0x411ed5
    *(int32_t *)result = 0;
    return result;
}

// Address range: 0x411f28 - 0x411f2b
int64_t function_411f28(void) {
    // 0x411f28
    int64_t v1; // 0x411f28
    uint64_t result = v1;
    *(char *)result = (char)(result / 256) + (char)result;
    return result;
}

// Address range: 0x411f51 - 0x411f52
int64_t function_411f51(void) {
    // 0x411f51
    int64_t result; // 0x411f51
    return result;
}

// Address range: 0x411f60 - 0x411f71
int64_t function_411f60(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 - 41); // 0x411f67
    int64_t v2; // 0x411f60
    *v1 = *v1 - (char)v2;
    return function_ca093ca();
}

// Address range: 0x411fa1 - 0x411fa9
int64_t function_411fa1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x411fa1
    int32_t v1; // 0x411fa1
    *(int32_t *)a3 = (int32_t)(int64_t)&v1;
    int64_t result; // 0x411fa1
    return result;
}

// Address range: 0x411fa9 - 0x411fce
int64_t function_411fa9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x411fa9
    int64_t v1; // 0x411fa9
    int64_t v2 = v1;
    int64_t v3 = v1;
    *(char *)v2 = (char)v2 + 7;
    int32_t * v4 = (int32_t *)(v1 + 0x6f39e97c); // 0x411fbf
    *v4 = *v4 | (int32_t)v1;
    return (v3 + 211) % 256 | v3 & 0xffffff00;
}

// Address range: 0x411fd0 - 0x411fe6
int64_t function_411fd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x411fd0
    int64_t v1; // 0x411fd0
    *(char *)-0x6dc21bce21f1399f = (char)v1;
    int64_t v2 = a4 & -256 | (int64_t)(*(char *)(a2 - 0x773a8b4) | (char)a4); // 0x411fdc
    int32_t * v3 = (int32_t *)v2; // 0x411fe2
    *v3 = *v3 + (int32_t)a2;
    return function_411ff9(a1, a2, a3, v2);
}

// Address range: 0x411fe6 - 0x411fee
int64_t function_411fe6(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x411fe6
    int64_t v1; // 0x411fe6
    int64_t v2 = v1;
    *(char *)v2 = (char)(v2 ^ a3 / 256);
    return function_257c5d59();
}

// Address range: 0x411ff9 - 0x412012
int64_t function_411ff9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x411ff9
    int64_t v1; // 0x411ff9
    float80_t v2; // 0x411ff9
    *(int64_t *)(a1 + 0x61bf661d + v1) = (int64_t)v2;
    int64_t v3 = v1 & 0xffffffff ^ 0x3def9239; // 0x412002
    *(char *)a1 = __readgsbyte(a2);
    char * v4 = (char *)(256 * v1 + a4 & 0xff00 | a4 & -0xff01); // 0x412009
    *v4 = *v4 ^ (char)a3;
    char v5 = *(char *)(v1 - 0x15b2b6dc); // 0x41200b
    return v3 & 0xffffff00 | (int64_t)((char)v3 - v5);
}

// Address range: 0x41207c - 0x41207d
int64_t function_41207c(void) {
    // 0x41207c
    int64_t result; // 0x41207c
    return result;
}

// Address range: 0x4120b1 - 0x4120c1
int64_t function_4120b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4120b1
    int64_t v1; // 0x4120b1
    bool v2; // 0x4120b1
    if (v2) {
        v1 = function_41207c();
    }
    uint64_t v3 = v1;
    char v4 = *(char *)0x1fa865f; // 0x4120b6
    return 256 * (int64_t)((char)v2 - v4 + (char)(v3 / 256)) | v3 & -0xff01;
}

// Address range: 0x4120c1 - 0x4120c6
int64_t function_4120c1(void) {
    // 0x4120c1
    return function_5986785c();
}

// Address range: 0x4120d8 - 0x4120f1
int64_t function_4120d8(int64_t a1) {
    // 0x4120d8
    int64_t v1; // 0x4120d8
    int64_t result = v1 & -256 | (int64_t)*(char *)-0x4c94f127ca820e85; // 0x4120d8
    *(int32_t *)0xc1db22a0e835941 = (int32_t)result;
    return result;
}

// Address range: 0x4120f5 - 0x4120fa
int64_t function_4120f5(void) {
    // 0x4120f5
    return function_ffffffffdd265200();
}

// Address range: 0x412126 - 0x412200
int64_t function_412126(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x412126
    int64_t v1; // 0x412126
    uint64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = a2;
    __asm_out_136(98, (char)v1);
    char * v5 = (char *)(2 * v1 + a2); // 0x41212a
    uint64_t v6 = a3 / 256; // 0x41212a
    char v7 = v6; // 0x41212a
    *v5 = *v5 & v7;
    *(char *)a3 = *(char *)&v3 | v7;
    unsigned char v8 = *(char *)&v4; // 0x41212f
    __asm_outsb((int16_t)a3, v8);
    __asm_in_134(125);
    int64_t result = __asm_int3(); // 0x412141
    uint32_t v9 = (int32_t)((a4 | (int64_t)&g4) & 0xffff00ff | (a3 ^ 256 * (int64_t)(char)((int64_t)&g4 >> 8)) & 0xff00) - (int32_t)a3; // 0x412145
    if (v9 >= 0) {
        // 0x412149
        return result;
    }
    // 0x412170
    *(char *)0x70b3bdd3 = *(char *)0x70b3bdd3 - (char)(v2 / 256);
    unsigned char v10 = (char)v9 | (char)&g9; // 0x412179
    char v11 = v10 - (char)((int64_t)&g9 >> 8); // 0x41217b
    unsigned char v12 = v11 % 32; // 0x41217d
    char v13 = v11; // 0x41217d
    bool v14 = v10 < (char)((int64_t)&g9 >> 8); // 0x41217d
    if (v12 != 0) {
        v13 = v11 >> v12;
        v14 = (1 << v12 - 1 & v11) != 0;
    }
    int64_t result2 = result & -256 | (int64_t)v8; // 0x412172
    if (v14 || v13 == 0) {
        int32_t v15 = (int32_t)result2 > 0xb81e770c ? 0x203e1570 : 0x203e156f; // 0x4121fe
        *(int32_t *)v3 = *(int32_t *)&v3 + v15;
        return result2 + 0x47e188f3 & 0xffffffff;
    }
    int32_t * v16 = (int32_t *)((v2 + v6) % 256 | v2 & -256); // 0x412182
    *v16 = *v16 - (int32_t)v1;
    return result2;
}

// Address range: 0x412249 - 0x41224c
int64_t function_412249(int64_t a1) {
    // 0x412249
    int64_t result; // 0x412249
    return result;
}

// Address range: 0x41225a - 0x41225c
int64_t function_41225a(void) {
    // 0x41225a
    int64_t v1; // 0x41225a
    return function_412298(v1, v1, v1);
}

// Address range: 0x412274 - 0x412276
int64_t function_412274(void) {
    // 0x412274
    int64_t v1; // 0x412274
    return function_4122bb(v1, v1, v1, v1);
}

// Address range: 0x41228a - 0x412296
int64_t function_41228a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41228a
    int64_t v1; // 0x41228a
    return (uint64_t)v1 % 256 | a4 & 0xffffff00;
}

// Address range: 0x412298 - 0x4122a9
int64_t function_412298(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 0x687166ee); // 0x412299
    *v1 = *v1 ^ 77;
    int64_t v2; // 0x412298
    return v2 ^ 21;
}

// Address range: 0x4122b5 - 0x4122b6
int64_t function_4122b5(void) {
    // 0x4122b5
    int64_t result; // 0x4122b5
    return result;
}

// Address range: 0x4122bb - 0x4122c6
int64_t function_4122bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4122bb
    int64_t v1; // 0x4122bb
    int64_t v2 = v1;
    char v3 = *(char *)(v1 - 0x35f6ec2b); // 0x4122bb
    int32_t v4 = a1;
    int32_t v5 = v4 < 0; // 0x4122c1
    *(int32_t *)a1 = 2 * v4 | v5;
    bool v6; // 0x4122bb
    int64_t result = v2 & -256 | (int64_t)((char)v6 + (char)v2 - v3); // 0x4122c3
    if (v4 / 0x40000000 % 2 != v5) {
        result = function_41228a(a1, a2, a3, a4);
    }
    // 0x4122c5
    return result;
}

// Address range: 0x4122c7 - 0x4122d2
int64_t function_4122c7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4122c7
    int64_t v1; // 0x4122c7
    bool v2; // 0x4122c7
    if (v2 || false) {
        v1 = function_4122b5();
    }
    unsigned char v3 = (char)a3;
    *(char *)a3 = v3 / 64 | 8 * v3 | 4 * (char)v2;
    return function_5fa03f6d(v1 & 0xffffffff);
}

// Address range: 0x4122f4 - 0x4122f9
int64_t function_4122f4(void) {
    // 0x4122f4
    return function_ffffffff84b804c0();
}

// Address range: 0x412300 - 0x412303
int64_t function_412300(void) {
    // 0x412300
    int64_t result; // 0x412300
    return result;
}

// Address range: 0x412305 - 0x412308
int64_t function_412305(int64_t a1) {
    // 0x412305
    int64_t result; // 0x412305
    return result;
}

// Address range: 0x440a67 - 0x440a6f
int64_t function_440a67(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x440a67
    int64_t result; // 0x440a67
    *(char *)a4 = 2 * (char)result;
    return result;
}

// Address range: 0x440a75 - 0x440a7c
int64_t function_440a75(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x440a75
    int64_t result; // 0x440a75
    *(int32_t *)a3 = (int32_t)result | 111;
    return result;
}

// Address range: 0x440abe - 0x440acd
int64_t function_440abe(int64_t a1, int64_t a2) {
    // 0x440abe
    int64_t v1; // 0x440abe
    uint64_t v2 = v1;
    char v3 = *(char *)(a2 + 96); // 0x440abe
    return 256 * (int64_t)(v3 ^ (char)(v2 / 256)) | v2 & -0xff01;
}

// Address range: 0x440b28 - 0x440b2b
int64_t function_440b28(void) {
    // 0x440b28
    int64_t result; // 0x440b28
    return result;
}

// Address range: 0x440ba5 - 0x440bbd
int64_t function_440ba5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x440ba5
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int32_t v1 = *(int32_t *)-0xd91a1c2d195ab26; // 0x440bac
    return ((v1 & 256) == 0 ? 95 : 94) | (int64_t)(v1 & -256);
}

// Address range: 0x440bbd - 0x440bbf
int64_t function_440bbd(void) {
    // 0x440bbd
    return function_440bdc();
}

// Address range: 0x440bbf - 0x440bc8
int64_t function_440bbf(int64_t a1) {
    // 0x440bbf
    int64_t result; // 0x440bbf
    return result;
}

// Address range: 0x440bdc - 0x440beb
int64_t function_440bdc(void) {
    // 0x440bdc
    int64_t v1; // 0x440bdc
    return v1 + (int64_t)(int32_t)&g3 & 0xffffffff;
}

// Address range: 0x440bf1 - 0x440bfb
int64_t function_440bf1(int64_t a1, int64_t a2, uint64_t a3) {
    char v1 = *(char *)(a3 - 65); // 0x440bf3
    int64_t v2 = 256 * (int64_t)((char)(a3 / 256) - v1) | a3 & -0xff01; // 0x440bf3
    __asm_in_133((int16_t)v2);
    int64_t v3; // 0x440bf1
    return function_440c65(a1, a2, v2, v3);
}

// Address range: 0x440c1a - 0x440c26
int64_t function_440c1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x440c1a
    bool v1; // 0x440c1a
    return (a4 + 36 + (int64_t)(bool)v1) % 256 | a4 & -256;
}

// Address range: 0x440c42 - 0x440c53
int64_t function_440c42(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x440c42
    int64_t v1; // 0x440c42
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    return a4 & 0xffffffff;
}

// Address range: 0x440c65 - 0x440cd5
int64_t function_440c65(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x440c65
    int64_t result; // 0x440c65
    bool v1; // 0x440c65
    if (v1) {
        uint32_t v2 = (int32_t)a4;
        *(int32_t *)a4 = v2 / 0x10000000 | 16 * v2;
        return result;
    }
    unsigned char v3 = *(char *)(a3 + 0x66bb52e5); // 0x440c6c
    char v4 = *(char *)-0x6e835a2f; // 0x440c72
    *(char *)-0x6e835a2f = v4 + (char)a1 + (char)(v3 > -1 - (char)result);
    return (result ^ a3) & 0xffffffff;
}

// Address range: 0x440cd7 - 0x440cda
int64_t function_440cd7(void) {
    // 0x440cd7
    int64_t v1; // 0x440cd7
    int64_t v2 = v1;
    return 256 * v2 & 0xff00 | v2;
}

// Address range: 0x440d06 - 0x440d07
int64_t function_440d06(void) {
    // 0x440d06
    int64_t result; // 0x440d06
    return result;
}

// Address range: 0x440d31 - 0x440d3e
int64_t function_440d31(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x440d31
    int64_t v1; // 0x440d31
    if (((char)v1 & -55) < 1) {
        function_440d06();
    }
    // 0x440d35
    return __asm_hlt();
}

// Address range: 0x440d3e - 0x440d65
int64_t function_440d3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x440d3e
    int64_t v1; // 0x440d3e
    int64_t v2 = (v1 & 0xffffffff | 0x100000000 * a3) / (int64_t)*(int32_t *)0x71088767; // 0x440d3e
    uint32_t v3 = 65 * *(int32_t *)(v1 - 21); // 0x440d44
    int64_t v4 = (v2 + 104) % 256 | v2 & 0xffffff00; // 0x440d4a
    *(int32_t *)a1 = *(int32_t *)(int64_t)v3;
    bool v5; // 0x440d3e
    uint32_t v6 = v3 + (v5 ? -4 : 4); // 0x440d4e
    int32_t * v7 = (int32_t *)(v4 - 0x3b4191c8); // 0x440d58
    uint32_t v8 = *v7; // 0x440d58
    int32_t v9 = v8 + v6; // 0x440d58
    unsigned char v10 = llvm_ctpop_i8((char)v9); // 0x440d58
    *v7 = v9;
    return v4 & 0xffff00ff | 256 * (64 * (int64_t)(v9 == 0) | (int64_t)(v9 < v8) | 128 * (int64_t)(v9 < 0) | 16 * (int64_t)(v8 % 16 + v6 % 16 > 15) | 4 * (int64_t)(v10 % 2 == 0)) | 512;
}

// Address range: 0x440d72 - 0x440d75
int64_t function_440d72(int64_t a1) {
    // 0x440d72
    int64_t result; // 0x440d72
    return result;
}

// Address range: 0x440e05 - 0x440e0a
int64_t function_440e05(void) {
    // 0x440e05
    return function_2864bea();
}

// Address range: 0x440e11 - 0x440e12
int64_t function_440e11(void) {
    // 0x440e11
    int64_t result; // 0x440e11
    return result;
}

// Address range: 0x440e4b - 0x440e59
int64_t function_440e4b(int64_t a1, int64_t a2) {
    // 0x440e4b
    int64_t v1; // 0x440e4b
    return 0x10000 * (int32_t)v1 >> 16 & 0x3695bac2 ^ 183;
}

// Address range: 0x440e9d - 0x440ebb
int64_t function_440e9d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t result; // 0x440e9d
    char * v2 = (char *)(result - 0x16851193); // 0x440e9d
    unsigned char v3 = *v2; // 0x440e9d
    *v2 = v3 / 2 | 128 * v3;
    *(int32_t *)v1 = 2 * *(int32_t *)&v1;
    int32_t * v4 = (int32_t *)(a3 + 74); // 0x440eb3
    *v4 = *v4 ^ (int32_t)result;
    return result;
}

// Address range: 0x440ebb - 0x440ec3
int64_t function_440ebb(int64_t a1) {
    // 0x440ebb
    int64_t v1; // 0x440ebb
    return v1 + 0x4092f650 & 0xffffffff;
}

// Address range: 0x440ee1 - 0x440ee2
int64_t function_440ee1(void) {
    // 0x440ee1
    int64_t result; // 0x440ee1
    return result;
}

// Address range: 0x440eeb - 0x440f7f
int64_t function_440eeb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x440eeb
    bool v1; // 0x440eeb
    if (v1) {
        // 0x440eed
        return a2 & 0xffffffff;
    }
    // 0x440f4e
    int64_t v2; // 0x440eeb
    int64_t v3 = v2 & 0xffff00ff | (int64_t)&g10; // 0x440f58
    char v4 = __asm_insb((int16_t)a3); // 0x440f5a
    char * v5 = (char *)a1; // 0x440f5a
    *v5 = v4;
    int64_t * v6 = (int64_t *)v2; // 0x440f5b
    char * v7 = (char *)(v3 - 0x7db8ba7e); // 0x440f5c
    char v8 = *v7; // 0x440f5c
    char v9 = (char)v1 + (char)(v2 / 256); // 0x440f5c
    *v7 = v8 - v9;
    if (v8 < v9) {
        // 0x440f65
        return __asm_sti();
    }
    char * v10 = (char *)(v2 + 0x28753ee); // 0x440f40
    int64_t v11 = v3; // 0x440f58
    *v6 = a1;
    int64_t v12; // 0x440eeb
    uint64_t v13 = v12 & 0xb39c9e56 | 0x4c6361a9; // 0x440f3b
    int64_t v14 = v13 + 154 & 223 | v13 & 0xffffff00; // 0x440f49
    uint32_t v15 = *(int32_t *)(v11 - 55); // 0x440f4b
    v11 = v11 & 0xffff00ff | (int64_t)&g10;
    *v5 = __asm_insb((int16_t)(256 * (int64_t)*v10 | *v6 % 256));
    int64_t v16 = *v6; // 0x440f5b
    char * v17 = (char *)(v11 - 0x7db8ba7e); // 0x440f5c
    char v18 = *v17; // 0x440f5c
    char v19 = (char)(v15 < (int32_t)v14) + (char)(v13 / 256); // 0x440f5c
    *v17 = v18 - v19;
    while (v18 >= v19) {
        // 0x440f3a
        *v6 = a1;
        v13 = v14 & 0xb39c9e56 | 0x4c6361a9;
        v14 = v13 + 154 & 223 | v13 & 0xffffff00;
        v15 = *(int32_t *)(v11 - 55);
        v11 = v11 & 0xffff00ff | (int64_t)&g10;
        *v5 = __asm_insb((int16_t)(256 * (int64_t)*v10 | v16 % 256));
        v16 = *v6;
        v17 = (char *)(v11 - 0x7db8ba7e);
        v18 = *v17;
        v19 = (char)(v15 < (int32_t)v14) + (char)(v13 / 256);
        *v17 = v18 - v19;
    }
    // 0x440f65
    return __asm_sti();
}

// Address range: 0x440fa0 - 0x440fd4
int64_t function_440fa0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x440fa0
    int64_t v1; // 0x440fa0
    uint64_t v2 = v1;
    unsigned char v3 = *(char *)(v2 - 0x25a5e814) | (char)a3; // 0x440fa0
    int64_t v4 = a3 & -256; // 0x440fa0
    char * v5 = (char *)((v4 | (int64_t)v3) - 108); // 0x440fa6
    *v5 = *v5 + 70;
    int64_t v6 = 27; // bp-8, 0x440fac
    int32_t * v7 = (int32_t *)(a2 - 20); // 0x440fae
    *v7 = *v7 & (int32_t)a2;
    int64_t v8; // 0x440fa0
    int64_t v9 = v4 | (int64_t)(*(char *)&v8 + v3); // 0x440fb2
    int64_t v10; // 0x440fa0
    *(char *)a4 = (char)v2 & 116 & *(char *)&v10;
    char v11 = *(char *)(v9 + 82); // 0x440fba
    *(int64_t *)(((v1 ^ (int64_t)&v6) & 0xffffffff) - 8) = v9;
    char * v12 = (char *)(v8 - 53); // 0x440fc6
    *v12 = *v12 - (char)(a4 / 256);
    int16_t v13 = v9; // 0x440fcd
    int64_t v14; // 0x440fa0
    int32_t v15 = *(int32_t *)&v14;
    __asm_outsd(v13, v15);
    __asm_outsd(v13, v15);
    return 256 * (int64_t)((char)(v2 / 256) - v11) | v2 & -0xff8c;
}

// Address range: 0x440fd5 - 0x440fd8
int64_t function_440fd5(int64_t a1) {
    // 0x440fd5
    int64_t result; // 0x440fd5
    return result;
}

// Address range: 0x441009 - 0x441016
int64_t function_441009(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x441009
    __asm_in_138((int16_t)a3);
    int64_t v1; // 0x441009
    return 2 * v1 + a4 & 0xffffffff;
}

// Address range: 0x441267 - 0x44126a
int64_t function_441267(int64_t a1) {
    // 0x441267
    int64_t result; // 0x441267
    return result;
}

// Address range: 0x44126c - 0x44126f
int64_t function_44126c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44126c
    int64_t result; // 0x44126c
    return result;
}

// Address range: 0x4412a8 - 0x4412a9
int64_t function_4412a8(void) {
    // 0x4412a8
    int64_t result; // 0x4412a8
    return result;
}

// Address range: 0x4412e1 - 0x441337
int64_t function_4412e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char v1 = *(char *)(a2 - 0x2427e9c5); // 0x4412e1
    int32_t v2 = a4 & 0xffffff00 | (int64_t)(v1 ^ (char)a4); // 0x4412ea
    int64_t result; // 0x4412e1
    int32_t v3 = *(int32_t *)(result - 101); // 0x4412ea
    if (((v2 - v3 ^ v2) & (v3 ^ v2)) < 0) {
        // 0x441336
        return result;
    }
    // 0x4412f0
    return result | 194;
}

// Address range: 0x44138d - 0x441392
int64_t function_44138d(void) {
    // 0x44138d
    return function_70b52c8f();
}

// Address range: 0x4413f7 - 0x4413f9
int64_t function_4413f7(int64_t a1) {
    // 0x4413f7
    int64_t result; // 0x4413f7
    return result;
}

// Address range: 0x441444 - 0x44144b
int64_t function_441444(int64_t a1, int64_t a2) {
    // 0x441444
    int64_t result; // 0x441444
    return result;
}
