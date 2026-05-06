/*
 * Targeted RetDec C for native executable gap queue batch 420.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x150f13-0x151113 rank=- name=- kind=- bytes=- uncovered=-
 *   0x151113-0x151313 rank=- name=- kind=- bytes=- uncovered=-
 *   0x151313-0x151513 rank=- name=- kind=- bytes=- uncovered=-
 *   0x151513-0x151713 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e4096-0x3e4296 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e4296-0x3e4496 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e4496-0x3e4696 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e4696-0x3e4896 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g2;
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

int64_t function_150eb6();
int64_t function_150f13(void);
int64_t function_150f17(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_150fa2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_150fe2(int64_t a1, int64_t a2);
int64_t function_15106c(int64_t a1);
int64_t function_1510b3(void);
int64_t function_1510ce(void);
int64_t function_1510d3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_151116(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_15112d(void);
int64_t function_151168(int64_t a1, int64_t a2, int64_t a3, int32_t a4);
int64_t function_1511bc(int64_t a1);
int64_t function_1511cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_15129b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1512e1(void);
int64_t function_1512e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_151314(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_151324(void);
int64_t function_151350(void);
int64_t function_15136e(void);
int64_t function_15143a(int64_t a1);
int64_t function_151467(void);
int64_t function_15150a(void);
int64_t function_151526(void);
int64_t function_15153f(void);
int64_t function_15154c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_151614(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c110194();
int64_t function_2499b2c7();
int64_t function_3ac8e7a8();
int64_t function_3c2cbc48();
int64_t function_3e4096(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3e4279(void);
int64_t function_3e427d(void);
int64_t function_3e429a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e429d(int64_t a1, int64_t a2);
int64_t function_3e42bb(void);
int64_t function_3e42c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3e4408(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e44fd(int64_t a1);
int64_t function_3e4549(void);
int64_t function_3e454c(int64_t a1, int64_t a2);
int64_t function_3e45b5(int64_t a1);
int64_t function_3e45bc(void);
int64_t function_3e45cc(void);
int64_t function_3e45e3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e45e9(void);
int64_t function_3e4605(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e467f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e46cc(void);
int64_t function_3e4714(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e47f2(int64_t a1);
int64_t function_3e47f9(void);
int64_t function_3e4842(void);
int64_t function_3e4846(int64_t a1);
int64_t function_3e4868(void);
int64_t function_3e4869(void);
int64_t function_3e4886(int64_t a1);
int64_t function_ffffffffaed23b7f();
int64_t function_ffffffffc3419f42();
int64_t function_ffffffffc6551590();
int64_t function_ffffffffcfed11ee();
int64_t unknown_1d1d8af2();
int64_t unknown_1fdedd0();
int64_t unknown_3a1f9ac4();
int64_t unknown_42fbaadc();
int64_t unknown_4a1c57d1();
int64_t unknown_5c86d093();
int64_t unknown_b711375();
int64_t unknown_ffffffff81efcd6e();
int64_t unknown_ffffffff8a8eca07();
int64_t unknown_ffffffff8b1c1727();
int64_t unknown_ffffffff907681ab();
int64_t unknown_ffffffffb4a29bac();
int64_t unknown_ffffffffc6b92bd3();
int64_t unknown_fffffffff8171184();
int64_t unknown_fffffffffae2ce59();

// Address range: 0x150f13 - 0x150f16
int64_t function_150f13(void) {
    // 0x150f13
    return __asm_int3();
}

// Address range: 0x150f17 - 0x150f2a
int64_t function_150f17(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x150f17
    bool v1; // 0x150f17
    int64_t v2 = (v1 ? -4 : 4) + a1; // 0x150f17
    int64_t v3; // 0x150f17
    uint32_t v4 = (int32_t)v3;
    uint32_t v5 = (int32_t)(256 * v3 + a4 & 0xff00 | a4 & 0xffff00ff) + v4; // 0x150f1a
    *(int32_t *)a3 = v5;
    unknown_ffffffff8b1c1727(v2);
    char * v6 = (char *)(v2 + 0x72e401e8); // 0x150f22
    *v6 = *v6 + (char)v3 + (char)(v5 < v4);
    return function_150eb6();
}

// Address range: 0x150fa2 - 0x150fb2
int64_t function_150fa2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x150fa2
    return unknown_ffffffffb4a29bac(a1, a2, a3, a4, a5);
}

// Address range: 0x150fe2 - 0x150fe7
int64_t function_150fe2(int64_t a1, int64_t a2) {
    // 0x150fe2
    int64_t v1; // 0x150fe2
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x15106c - 0x151072
int64_t function_15106c(int64_t a1) {
    // 0x15106c
    int64_t result; // 0x15106c
    return result;
}

// Address range: 0x1510b3 - 0x1510c1
int64_t function_1510b3(void) {
    // 0x1510b3
    int64_t v1; // 0x1510b3
    return function_151116(v1, v1, v1, v1);
}

// Address range: 0x1510ce - 0x1510d3
int64_t function_1510ce(void) {
    // 0x1510ce
    return function_ffffffffc3419f42();
}

// Address range: 0x1510d3 - 0x1510e6
int64_t function_1510d3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x1510d3
    *(int32_t *)0x15bbda = *(int32_t *)0x15bbda + (int32_t)a1;
    char * v1 = (char *)(a2 + 0x3d000005); // 0x1510d9
    *v1 = *v1 + (char)(a3 / 256);
    int32_t * v2 = (int32_t *)(a4 + 0x16e0f4e4); // 0x1510df
    *v2 = *v2 + (int32_t)a4;
    int64_t result; // 0x1510d3
    return result;
}

// Address range: 0x151116 - 0x15111b
int64_t function_151116(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x151116
    int64_t result; // 0x151116
    return result;
}

// Address range: 0x15112d - 0x15113b
int64_t function_15112d(void) {
    // 0x15112d
    __asm_in(-50);
    return function_ffffffffcfed11ee();
}

// Address range: 0x151168 - 0x151192
int64_t function_151168(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    int64_t v1 = unknown_ffffffff81efcd6e(); // 0x151168
    *(char *)-0x20fe17a765119de5 = (char)v1;
    int32_t v2; // 0x151168
    *(int32_t *)(v1 - 0x5fa1f94) = (int32_t)(int64_t)&v2;
    int64_t v3 = unknown_fffffffff8171184() & -256 | (int64_t)__asm_in(-39); // 0x151183
    int32_t * v4 = (int32_t *)v3; // 0x151185
    *v4 = *v4 | (int32_t)v3;
    return unknown_b711375();
}

// Address range: 0x1511bc - 0x1511bd
int64_t function_1511bc(int64_t a1) {
    // 0x1511bc
    int64_t result; // 0x1511bc
    return result;
}

// Address range: 0x1511cb - 0x151268
int64_t function_1511cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    int64_t v2 = unknown_4a1c57d1(); // 0x1511cb
    unsigned char v3 = *(char *)a6; // 0x1511d3
    int64_t v4 = unknown_42fbaadc(); // 0x1511d6
    int32_t v5 = v4; // 0x1511db
    *(int32_t *)a5 = v5;
    int32_t v6 = *(int32_t *)(a2 - 0x607bfe18); // 0x1511df
    *(int32_t *)a1 = v5;
    char * v7 = (char *)(v4 + 0x28683afa); // 0x1511e6
    *v7 = *v7 + (char)v4;
    bool v8; // 0x1511cb
    int64_t v9 = unknown_1d1d8af2((v8 ? -4 : 4) + a1); // 0x1511ec
    int64_t v10; // bp+16, 0x1511cb
    char v11; // bp+21, 0x1511cb
    if (llvm_ctpop_i8((char)(int64_t)&v10 | 5) % 2 == 0) {
        // 0x1511f6
        *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v9;
        return (int64_t)&v11;
    }
    // 0x15124c
    v11 += (char)a6;
    __asm_in_133((int16_t)a7);
    int64_t v12 = unknown_fffffffffae2ce59(); // 0x151253
    int32_t * v13 = (int32_t *)(v12 - 78); // 0x15125a
    *v13 = *v13 + (int32_t)v12;
    int64_t v14; // 0x1511cb
    int64_t result = v12 & (int64_t)((int32_t)(v3 > (char)v2) + (int32_t)v14 - v6);
    int32_t * v15 = (int32_t *)(result + 67); // 0x151265
    *v15 = *v15 + ((int32_t)v14 & -256 | 104);
    return result;
}

// Address range: 0x15129b - 0x1512d4
int64_t function_15129b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3; // bp-8, 0x15129b
    int32_t * v2 = (int32_t *)(a2 - 82); // 0x1512a8
    uint32_t v3 = *v2; // 0x1512a8
    uint32_t v4 = v3 + (int32_t)a4; // 0x1512a8
    *v2 = v4;
    int64_t v5; // 0x15129b
    uint64_t v6 = a4 - 256 * (v5 + (int64_t)(v4 < v3));
    int32_t * v7 = (int32_t *)((v6 & 0xff00 | a4 & -0xff01) - 0x6498e5f1); // 0x1512b0
    *v7 = *v7 + (int32_t)(int64_t)&v1;
    unknown_3a1f9ac4();
    char * v8 = (char *)(v5 - 42); // 0x1512ca
    *v8 = *v8 + (char)(v6 / 256);
    return unknown_ffffffffc6b92bd3();
}

// Address range: 0x1512e1 - 0x1512e2
int64_t function_1512e1(void) {
    // 0x1512e1
    int64_t result; // 0x1512e1
    return result;
}

// Address range: 0x1512e4 - 0x1512f9
int64_t function_1512e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1512e4
    int64_t v1; // 0x1512e4
    *(int32_t *)-0xed6fe17ff863bbd = (int32_t)v1;
    return function_1512e1();
}

// Address range: 0x151314 - 0x15131e
int64_t function_151314(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x151314
    *(char *)(a3 + 61) = 1;
    int64_t result; // 0x151314
    return result;
}

// Address range: 0x151324 - 0x151325
int64_t function_151324(void) {
    // 0x151324
    int64_t result; // 0x151324
    return result;
}

// Address range: 0x151350 - 0x151351
int64_t function_151350(void) {
    // 0x151350
    int64_t result; // 0x151350
    return result;
}

// Address range: 0x15136e - 0x151370
int64_t function_15136e(void) {
    // 0x15136e
    return function_151350();
}

// Address range: 0x15143a - 0x15144d
int64_t function_15143a(int64_t a1) {
    // 0x15143a
    __asm_in_134(37);
    int32_t * v1 = (int32_t *)(a1 - 72); // 0x151445
    *v1 = *v1 + (int32_t)a1;
    return function_ffffffffaed23b7f();
}

// Address range: 0x151467 - 0x15146d
int64_t function_151467(void) {
    // 0x151467
    return function_ffffffffc6551590();
}

// Address range: 0x15150a - 0x15150d
int64_t function_15150a(void) {
    // 0x15150a
    int64_t v1; // 0x15150a
    int64_t v2 = v1;
    return (v2 + 33) % 256 | v2 & -256;
}

// Address range: 0x151526 - 0x15152b
int64_t function_151526(void) {
    // 0x151526
    return function_1c110194();
}

// Address range: 0x15153f - 0x151540
int64_t function_15153f(void) {
    // 0x15153f
    int64_t result; // 0x15153f
    return result;
}

// Address range: 0x15154c - 0x151607
int64_t function_15154c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3; // 0x15154c
    bool v4; // 0x15154c
    if (true != !v4) {
        // 0x15154e
        v3 = unknown_1fdedd0();
    }
    // 0x151553
    *(char *)a2 = (char)a4 + (char)a2;
    int64_t v5 = a3; // bp-8, 0x151555
    int16_t v6 = a3;
    int64_t v7 = v3; // 0x151555
    int64_t v8 = a4; // 0x151555
    *(int32_t *)v2 = *(int32_t *)&v2 | 0x22b2aed3;
    int64_t v9; // 0x15154c
    v7 = (int64_t)(*(int32_t *)(v9 - 0x10fff6c) + (int32_t)v7);
    __asm_outsb(v6, *(char *)&v1);
    while (!((v8 == 1 | *(char *)v7 == (char)a3))) {
        // 0x151556
        v8--;
        *(int32_t *)v2 = *(int32_t *)&v2 | 0x22b2aed3;
        v7 = (int64_t)(*(int32_t *)(v9 - 0x10fff6c) + (int32_t)v7);
        __asm_outsb(v6, *(char *)&v1);
    }
    // 0x15156e
    *(int32_t *)a3 = (int32_t)v1 + (int32_t)a3;
    int64_t v10 = __asm_int3(); // 0x151570
    *(int32_t *)v1 = *(int32_t *)&v1 - 0x45f47eac;
    int32_t v11 = *(int32_t *)&v2; // 0x15157f
    int32_t v12 = v9; // 0x15157f
    int32_t v13 = v11 + v12; // 0x15157f
    *(int32_t *)v2 = v13;
    if (((v13 ^ v11) & (v13 ^ v12)) < 0) {
        // 0x1515ed
        return unknown_ffffffff8a8eca07();
    }
    // 0x151583
    float80_t v14; // 0x15154c
    *(int64_t *)a3 = (int64_t)v14;
    char v15 = __asm_in_133(v6); // 0x151587
    char * v16 = (char *)((v10 | (int64_t)&v5) & 0xffffff00 | (int64_t)v15); // 0x151588
    *v16 = *v16 & (char)(v9 / 256);
    v5 = v1;
    unknown_5c86d093();
    return unknown_ffffffff907681ab();
}

// Address range: 0x151614 - 0x1516fb
int64_t function_151614(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2; // 0x151614
    int32_t * v3 = (int32_t *)(2 * v2 + 0xf9cd99e + v2); // 0x151614
    *v3 = *v3 - (int32_t)v2;
    uint32_t v4 = (int32_t)v2; // 0x151620
    int32_t v5 = v4 + 0x68d116ff; // 0x151620
    bool v6; // 0x151614
    int64_t v7 = 64 * (int64_t)(v5 == 0) | (int64_t)(v4 < 0x972ee901) | 128 * (int64_t)(v5 < 0) | 16 * (int64_t)(v4 % 16 > 16) | 0x4000 * (int64_t)v6 | 2048 * (int64_t)(((v5 ^ v4) & (v4 ^ -0x80000000)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v5) % 2 == 0) | 1024 * (int64_t)v6 | 512 * (int64_t)v6 | 256 * (int64_t)v6 | 2; // bp-16, 0x151625
    int64_t v8; // 0x151614
    int64_t * v9; // 0x151614
    if (v4 > -0x68d116ff) {
        // 0x15163e
        v8 = a3;
        v9 = &v7;
        if (v5 == 0) {
            char * v10 = (char *)(v2 + 63); // 0x151640
            unsigned char v11 = *v10; // 0x151640
            unsigned char v12 = v11 + (char)v1; // 0x151640
            *v10 = v12;
            int32_t v13 = *(int32_t *)0x68c39f01e81183; // 0x151645
            char v14 = *(char *)0x1c19ed55; // 0x15164e
            char v15 = v2 / 256; // 0x15164e
            char v16 = v14 + v15; // 0x15164e
            *(char *)0x1c19ed55 = v16;
            int64_t v17 = (int64_t)__asm_in_133((int16_t)a3) | (int64_t)(v13 & -256); // 0x151654
            int64_t result; // 0x151614
            if (v16 < 0 == ((v16 ^ v14) & (v16 ^ v15)) < 0 == (v16 != 0)) {
                // 0x1516ae
                result = v17;
                if (v16 < 0) {
                    int64_t v18 = a2 + a1 + (int64_t)(v12 < v11) & 0xffffffff; // 0x151643
                    *(char *)v1 = (char)v2;
                    int64_t v19 = v17 + 0x55fec300; // 0x1516d0
                    char v20 = *(char *)(v18 + 104); // 0x1516d8
                    char * v21 = (char *)(v18 - 103); // 0x1516dc
                    *v21 = (char)((v19 & 256) != 0) + (char)v19 - v20 + *v21;
                    int64_t v22 = v18 + (v6 ? -1 : 1); // 0x1516df
                    int32_t * v23 = (int32_t *)(v22 - 116); // 0x1516e2
                    *v23 = *v23 + (int32_t)v1;
                    return a3 & 0xffffff00 | (int64_t)*(char *)(v22 + (v6 ? -8 : 8));
                }
            } else {
                int64_t v24 = v17 | 128; // 0x151659
                char * v25 = (char *)(v1 + 2 * v2); // 0x15165b
                unsigned char v26 = *v25; // 0x15165b
                unsigned char v27 = (char)v1 % 32; // 0x15165b
                result = v24;
                if (v27 != 0) {
                    *v25 = v26 >> 8 - v27 | v26 << v27;
                    result = v24;
                }
            }
            // 0x1516b0
            return result;
        }
    } else {
        unsigned char v28 = *(char *)&v1; // 0x151628
        int64_t v29 = (a3 - v2 / 256 + (int64_t)(v28 > (char)(v2 / 256))) % 256 | a3 & -256; // 0x15162a
        *(char *)v29 = (char)v1;
        v8 = v29;
        int64_t v30; // bp-24, 0x151614
        v9 = &v30;
    }
    int64_t result2 = v2 & -132; // 0x151630
    char * v31 = (char *)result2; // 0x151689
    *v31 = *v31 + (char)result2;
    char * v32 = (char *)(v2 + 1); // 0x15168b
    char v33 = *v32 + (char)v1; // 0x15168b
    unsigned char v34 = llvm_ctpop_i8(v33); // 0x15168b
    *v32 = v33;
    if (v34 % 2 == 0) {
        // 0x151690
        *(int64_t *)((int64_t)v9 - 8) = 0xba53a00;
        __asm_out((int16_t)v8, (int32_t)result2);
        return result2;
    }
    uint64_t v35 = result2 + 0xfec27a42; // 0x15167c
    char * v36 = (char *)(a1 + (int64_t)&g1); // 0x151681
    *v36 = *v36 + (char)(v35 / 256);
    return v35 & 0xfffffffe;
}

// Address range: 0x3e4096 - 0x3e40cb
int64_t function_3e4096(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3e4096
    bool v1; // 0x3e4096
    int64_t v2 = (v1 ? -4 : 4) + a1; // 0x3e4096
    int32_t v3 = __asm_insd((int16_t)a3); // 0x3e4097
    int32_t * v4 = (int32_t *)v2; // 0x3e4097
    int64_t v5; // 0x3e4096
    *v4 = v3 & (int32_t)v5;
    int64_t v6 = 2 * a3 & 0xfffffe00 | 162; // 0x3e40a5
    int32_t * v7 = (int32_t *)(v2 - 0x7522a67f); // 0x3e40ac
    int64_t v8 = (int64_t)*(int32_t *)-0x59da742c61bb2396 + 0xb95c3246; // 0x3e40a7
    uint32_t v9 = *v7 & (int32_t)v5; // 0x3e40ac
    *v7 = v9;
    *v4 = __asm_insd((int16_t)v6);
    int64_t v10 = v8 & 0xffffffff; // 0x3e40b3
    while (v9 < 1) {
        // 0x3e40a7
        v8 = v10 + 0xb95c3246;
        v9 = *v7 & (int32_t)v5;
        *v7 = v9;
        *v4 = __asm_insd((int16_t)v6);
        v10 = v8 & 0xffffffff;
    }
    unsigned char v11 = (char)v8; // 0x3e40b5
    unsigned char v12 = (char)(a4 / 256); // 0x3e40b5
    char v13 = v11 - v12; // 0x3e40b5
    uint32_t v14 = (int32_t)(v11 < v12) + (int32_t)a4 + *(int32_t *)v6; // 0x3e40b7
    *(int32_t *)(2 * (int64_t)v14 + 0x4cf0f23b) = v14;
    *(char *)0x62a1bee22101ba3 = v13;
    return v8 & 0xffffff00 | (int64_t)(v13 | -78);
}

// Address range: 0x3e4279 - 0x3e427a
int64_t function_3e4279(void) {
    // 0x3e4279
    int64_t result; // 0x3e4279
    return result;
}

// Address range: 0x3e427d - 0x3e427f
int64_t function_3e427d(void) {
    // 0x3e427d
    int64_t v1; // 0x3e427d
    return function_3e429d(v1, v1);
}

// Address range: 0x3e429a - 0x3e429d
int64_t function_3e429a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e429a
    int64_t result; // 0x3e429a
    return result;
}

// Address range: 0x3e429d - 0x3e42ad
int64_t function_3e429d(int64_t a1, int64_t a2) {
    // 0x3e429d
    int64_t v1; // 0x3e429d
    uint64_t v2 = v1;
    *(char *)v2 = (char)v2 - (char)(v2 / 256) + (char)((int32_t)v1 > (int32_t)a2);
    return (int64_t)*(int32_t *)(v1 - 96);
}

// Address range: 0x3e42bb - 0x3e42bc
int64_t function_3e42bb(void) {
    // 0x3e42bb
    int64_t result; // 0x3e42bb
    return result;
}

// Address range: 0x3e42c1 - 0x3e4371
int64_t function_3e42c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    char v1 = a3; // 0x3e42c1
    char v2 = *(char *)(a3 + 111); // 0x3e42c1
    if (((v1 - v2 ^ v1) & (v2 ^ v1)) < 0) {
        function_3e4279();
    }
    // 0x3e42c6
    return a6 & 0xffffffff ^ 0xe60e266d;
}

// Address range: 0x3e4408 - 0x3e4472
int64_t function_3e4408(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e4408
    int64_t v1; // 0x3e4408
    int64_t v2 = v1 & -256 | 105; // 0x3e440b
    int64_t v3 = v1 & -256; // 0x3e440e
    int64_t v4 = v3 | (int64_t)*(char *)(v1 % 256 + v2); // 0x3e440e
    *(int32_t *)a1 = (int32_t)v4;
    int32_t * v5 = (int32_t *)v4; // 0x3e4414
    int32_t v6 = *v5; // 0x3e4414
    int32_t v7 = a3; // 0x3e4414
    int32_t v8 = v6 + v7; // 0x3e4414
    *v5 = v8;
    if (((v8 ^ v6) & (v8 ^ v7)) >= 0) {
        // 0x3e4418
        return v3 | (int64_t)__asm_in(1);
    }
    // 0x3e4467
    *(int32_t *)(a2 + 0x4cef0079) = (int32_t)v2;
    return v4 + 0x6705cf2 & 0xffffffff;
}

// Address range: 0x3e44fd - 0x3e4505
int64_t function_3e44fd(int64_t a1) {
    // 0x3e44fd
    int64_t result; // 0x3e44fd
    return result;
}

// Address range: 0x3e4549 - 0x3e454c
int64_t function_3e4549(void) {
    // 0x3e4549
    int64_t result; // 0x3e4549
    return result;
}

// Address range: 0x3e454c - 0x3e4553
int64_t function_3e454c(int64_t a1, int64_t a2) {
    // 0x3e454c
    return function_3ac8e7a8();
}

// Address range: 0x3e45b5 - 0x3e45b6
int64_t function_3e45b5(int64_t a1) {
    // 0x3e45b5
    int64_t result; // 0x3e45b5
    return result;
}

// Address range: 0x3e45bc - 0x3e45be
int64_t function_3e45bc(void) {
    // 0x3e45bc
    return function_3e45e9();
}

// Address range: 0x3e45cc - 0x3e45cd
int64_t function_3e45cc(void) {
    // 0x3e45cc
    int64_t result; // 0x3e45cc
    return result;
}

// Address range: 0x3e45e3 - 0x3e45e9
int64_t function_3e45e3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e45e3
    int64_t result; // 0x3e45e3
    return result;
}

// Address range: 0x3e45e9 - 0x3e45ea
int64_t function_3e45e9(void) {
    // 0x3e45e9
    int64_t result; // 0x3e45e9
    return result;
}

// Address range: 0x3e4605 - 0x3e4617
int64_t function_3e4605(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e4605
    __asm_iretd((int64_t)&g2);
    int32_t * v1 = (int32_t *)(a2 - 0x748b71e6); // 0x3e4607
    int32_t v2 = *v1; // 0x3e4607
    int32_t v3 = a2; // 0x3e4607
    int32_t v4 = v2 + v3; // 0x3e4607
    *v1 = v4;
    if (((v4 ^ v2) & (v4 ^ v3)) >= 0) {
        function_3e45cc();
    }
    // 0x3e4612
    return function_3c2cbc48();
}

// Address range: 0x3e467f - 0x3e4688
int64_t function_3e467f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e467f
    int64_t v1; // 0x3e467f
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)(v2 ^ a3);
    return 0x10000 * (int32_t)v2 >> 16;
}

// Address range: 0x3e46cc - 0x3e46ce
int64_t function_3e46cc(void) {
    // 0x3e46cc
    int64_t result; // 0x3e46cc
    return result;
}

// Address range: 0x3e4714 - 0x3e47d4
int64_t function_3e4714(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e4714
    int64_t v1; // 0x3e4714
    bool v2; // 0x3e4714
    if (true == !v2) {
        char * v3 = (char *)(3 * a1); // 0x3e47d0
        *v3 = *v3 ^ (char)((uint64_t)v1 / 256);
        return v1 & -56 | 7;
    }
    char * v4 = (char *)(v1 + 0x1cbb7677); // 0x3e4789
    *v4 = *v4 - (char)(v1 / 256);
    int64_t v5 = a5 & 0xffffff10 | 239; // 0x3e4790
    int64_t v6 = v5 + 0xbacf5d64; // 0x3e4797
    int64_t result = v6 & 0xffffff73; // 0x3e4797
    if ((int32_t)v5 >= 0x4530a29c) {
        // 0x3e479e
        int64_t v7; // 0x3e4714
        *(char *)v7 = *(char *)&v7 - 34;
        return result;
    }
    // 0x3e4770
    __asm_int(67);
    *(char *)a1 = (char)v6;
    return result;
}

// Address range: 0x3e47f2 - 0x3e47f3
int64_t function_3e47f2(int64_t a1) {
    // 0x3e47f2
    int64_t result; // 0x3e47f2
    return result;
}

// Address range: 0x3e47f9 - 0x3e47fb
int64_t function_3e47f9(void) {
    // 0x3e47f9
    int64_t result; // 0x3e47f9
    return result;
}

// Address range: 0x3e4842 - 0x3e4845
int64_t function_3e4842(void) {
    // 0x3e4842
    int64_t result; // 0x3e4842
    return result;
}

// Address range: 0x3e4846 - 0x3e484a
int64_t function_3e4846(int64_t a1) {
    int64_t v1 = __asm_iretd(a1); // 0x3e4846
    bool v2; // 0x3e4846
    return (v1 + 134 + (int64_t)(bool)v2) % 256 | v1 & -256;
}

// Address range: 0x3e4868 - 0x3e4869
int64_t function_3e4868(void) {
    // 0x3e4868
    int64_t result; // 0x3e4868
    return result;
}

// Address range: 0x3e4869 - 0x3e486e
int64_t function_3e4869(void) {
    // 0x3e4869
    return function_2499b2c7();
}

// Address range: 0x3e4886 - 0x3e4889
int64_t function_3e4886(int64_t a1) {
    // 0x3e4886
    int64_t result; // 0x3e4886
    return result;
}
