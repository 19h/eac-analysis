/*
 * Targeted RetDec C for native executable gap queue batch 533.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x200234-0x200434 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2630c2-0x2632c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2632c2-0x2634c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2634c2-0x2636c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2636c2-0x2638c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2638c2-0x263ac2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x447b25-0x447d25 rank=- name=- kind=- bytes=- uncovered=-
 *   0x447d25-0x447f25 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
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

int64_t function_200234(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2630bd();
int64_t function_2630c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_263136(void);
int64_t function_26316b(void);
int64_t function_263179(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2631e8(int64_t a1, int64_t a2, int64_t a3, int32_t a4);
int64_t function_26325c(int64_t a1);
int64_t function_263278(int64_t a1);
int64_t function_263279(int64_t a1, int64_t a2);
int64_t function_2632ab(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_263372(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_26337a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_263397(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2633c5(void);
int64_t function_2633e9(int64_t a1);
int64_t function_2633f5(void);
int64_t function_2633ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_263419(int64_t a1);
int64_t function_263496(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2634c4(void);
int64_t function_263523(int64_t a1);
int64_t function_26353d(int64_t a1);
int64_t function_26357c(int64_t a1);
int64_t function_263622(int64_t a1);
int64_t function_2636ab(void);
int64_t function_2636c2(void);
int64_t function_2636e3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2636f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26375e(void);
int64_t function_263768(void);
int64_t function_26381f(void);
int64_t function_263859(int64_t a1);
int64_t function_2638d3(void);
int64_t function_2638dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2638ff(void);
int64_t function_26390a(int64_t a1, int64_t a2);
int64_t function_263986(int64_t a1);
int64_t function_2639fc(int64_t a1);
int64_t function_263a4b(void);
int64_t function_263a50(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_263aab(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31282169();
int64_t function_447b25(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_447b50(int64_t a1);
int64_t function_447b88(int64_t a1);
int64_t function_447bbc(int64_t a1);
int64_t function_447c7a(void);
int64_t function_447c82(void);
int64_t function_447c8c(void);
int64_t function_447ca5(void);
int64_t function_447cfb(int64_t a1, int64_t a2);
int64_t function_447d82(int64_t a1);
int64_t function_447dc1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_447ded(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_447e17(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_447e37(void);
int64_t function_447e51(int64_t a1, int64_t a2);
int64_t function_447e6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_447eb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_447f05(void);
int64_t function_c57b8();
int64_t function_ffffffff826bcc67();
int64_t function_ffffffff995b2e74();
int64_t function_ffffffffac517f5b();
int64_t function_ffffffffd3409608();
int64_t function_fffffffff4ff13e6();
int64_t function_fffffffffac13d08();
int64_t unknown_ffffffffa81e2432();
int64_t unknown_ffffffffc07dd3b2();
int64_t unknown_ffffffffc9227410();

// Address range: 0x200234 - 0x2002e3
int64_t function_200234(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x200234
    int64_t v1; // 0x200234
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x200234
    v3 = (int64_t)&v3 + 16;
    return function_c57b8();
}

// Address range: 0x2630c2 - 0x2630eb
int64_t function_2630c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2630c2
    int64_t result; // 0x2630c2
    int32_t * v1 = (int32_t *)(result + 0x4aab5368); // 0x2630c2
    int32_t v2 = result; // 0x2630c2
    *v1 = *v1 + v2;
    char v3 = result / 256; // 0x2630c9
    *(char *)0x69ebacd0 = *(char *)0x69ebacd0 + v3;
    *(char *)(a4 + 0x108b688 + result) = -1;
    if ((int32_t)result + v2 < 0) {
        // 0x26313b
        return result;
    }
    int32_t * v4 = (int32_t *)(result + 0x1af63aa0); // 0x2630db
    *v4 = *v4 + (int32_t)a2;
    *(char *)-0x207baf16 = *(char *)-0x207baf16 + v3;
    return result;
}

// Address range: 0x263136 - 0x26313a
int64_t function_263136(void) {
    // 0x263136
    return function_2630bd();
}

// Address range: 0x26316b - 0x26316c
int64_t function_26316b(void) {
    // 0x26316b
    int64_t result; // 0x26316b
    return result;
}

// Address range: 0x263179 - 0x2631e4
int64_t function_263179(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x263179
    __asm_out(14, (char)v2);
    int64_t v3; // 0x263179
    bool v4; // 0x263179
    if (!v4) {
        v3 = function_26316b();
    }
    int32_t * v5 = (int32_t *)(a3 + 13); // 0x263183
    int32_t v6 = a4; // 0x263183
    *v5 = *v5 + v6;
    int32_t v7 = 0x52f43202 * *(int32_t *)&v3; // 0x26318d
    int32_t v8 = v7 + 24;
    int64_t v9; // 0x263179
    *(int32_t *)v9 = *(int32_t *)&v9 + v6;
    int64_t v10 = v8 & 254 | v7 & -256; // bp-8, 0x263199
    int64_t v11 = (int64_t)(*(int32_t *)(a1 - 0x3cf7f409) + (int32_t)a1); // 0x26319b
    char v12 = v8; // 0x2631a1
    __asm_out(-24, v12);
    int32_t * v13 = (int32_t *)(a3 - 0x686e1386 + 2 * v2); // 0x2631a4
    *v13 = *v13 + v6;
    *(char *)v11 = v12;
    int64_t v14 = v4 ? -1 : 1; // 0x2631ab
    int64_t v15 = v14 + v11; // 0x2631ab
    v3 = unknown_ffffffffc07dd3b2(v15);
    *(char *)v1 = *(char *)&v1 - (char)a3;
    int64_t v16 = v15;
    *(int32_t *)-0x56f4c0ce = *(int32_t *)-0x56f4c0ce + (int32_t)v3;
    int64_t v17 = v3 & 0xe875829e; // 0x2631c0
    int32_t * v18 = (int32_t *)((int64_t)&v10 - 0x42d92c09 + 4 * v1); // 0x2631c5
    *v18 = *v18 + (int32_t)v2;
    int64_t v19 = v16 + v14; // 0x2631cc
    int64_t v20 = a3 & 0xffffffff; // 0x2631cd
    v3 = v20;
    while ((char)v17 - *(char *)v16 >= 0) {
        // 0x2631b8
        v16 = v19;
        int64_t v21 = v17;
        *(int32_t *)-0x56f4c0ce = *(int32_t *)-0x56f4c0ce + (int32_t)v20;
        v17 = v20 & 0xe875829e;
        v18 = (int32_t *)((int64_t)&v10 - 0x42d92c09 + 4 * v1);
        *v18 = *v18 + (int32_t)v2;
        v19 = v16 + v14;
        v20 = v21 & 0xffffffff;
        v3 = v20;
    }
    int32_t * v22 = (int32_t *)(v20 - 77); // 0x2631d0
    *v22 = *v22 + (int32_t)v1;
    int64_t result = __asm_wait(v19); // 0x2631d5
    int32_t * v23 = (int32_t *)(v1 - 0x19806953); // 0x2631db
    *v23 = *v23 + (int32_t)v17;
    return result;
}

// Address range: 0x2631e8 - 0x2631ee
int64_t function_2631e8(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    // 0x2631e8
    int64_t result; // 0x2631e8
    __asm_out_133((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x26325c - 0x26325d
int64_t function_26325c(int64_t a1) {
    // 0x26325c
    int64_t result; // 0x26325c
    return result;
}

// Address range: 0x263278 - 0x263279
int64_t function_263278(int64_t a1) {
    // 0x263278
    int64_t result; // 0x263278
    return result;
}

// Address range: 0x263279 - 0x263287
int64_t function_263279(int64_t a1, int64_t a2) {
    // 0x263279
    int64_t v1; // 0x263279
    char * v2 = (char *)(v1 - 117); // 0x263279
    *v2 = *v2 + (char)v1;
    return function_ffffffff995b2e74();
}

// Address range: 0x2632ab - 0x2632c6
int64_t function_2632ab(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2632ab
    int64_t v1; // 0x2632ab
    *(char *)(v1 + 0x3164b242) = (char)(a4 / 128);
    *(int32_t *)-0x6996fe17b3d1fc45 = (int32_t)v1;
    if ((v1 & 2) == 0) {
        function_2632ab(a1, a2, a3, 2 * a4 & 0xfffffffe);
    }
    // 0x2632c1
    return function_fffffffffac13d08();
}

// Address range: 0x263372 - 0x26337a
int64_t function_263372(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x263372
    int64_t result; // 0x263372
    return result;
}

// Address range: 0x26337a - 0x263389
int64_t function_26337a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x26337a
    int64_t result; // 0x26337a
    return result;
}

// Address range: 0x263397 - 0x2633b0
int64_t function_263397(int64_t a1, int64_t a2, int64_t a3) {
    // 0x263397
    int64_t result; // 0x263397
    *(int32_t *)0xf1b1c0298644a = (int32_t)result;
    return result;
}

// Address range: 0x2633c5 - 0x2633c6
int64_t function_2633c5(void) {
    // 0x2633c5
    int64_t result; // 0x2633c5
    return result;
}

// Address range: 0x2633e9 - 0x2633ec
int64_t function_2633e9(int64_t a1) {
    // 0x2633e9
    int64_t result; // 0x2633e9
    return result;
}

// Address range: 0x2633f5 - 0x2633f8
int64_t function_2633f5(void) {
    // 0x2633f5
    int64_t result; // 0x2633f5
    return result;
}

// Address range: 0x2633ff - 0x263404
int64_t function_2633ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2633ff
    int64_t result; // 0x2633ff
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x263419 - 0x263427
int64_t function_263419(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 0x437c7a49); // 0x26341f
    int64_t result; // 0x263419
    bool v2; // 0x263419
    *v1 = (int32_t)v2 - (int32_t)result + *v1;
    return result;
}

// Address range: 0x263496 - 0x26349a
int64_t function_263496(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 107); // 0x263496
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x263496
    return result;
}

// Address range: 0x2634c4 - 0x2634c5
int64_t function_2634c4(void) {
    // 0x2634c4
    int64_t result; // 0x2634c4
    return result;
}

// Address range: 0x263523 - 0x263534
int64_t function_263523(int64_t a1) {
    // 0x263523
    int64_t v1; // 0x263523
    int64_t v2 = v1 & -233; // 0x263523
    char * v3 = (char *)v2; // 0x263525
    char v4 = *v3 - (char)v2; // 0x263525
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x263525
    *v3 = v4;
    int64_t v6 = v2; // 0x263528
    if (v5 % 2 != 0) {
        v6 = function_2634c4();
    }
    // 0x26352a
    return unknown_ffffffffa81e2432(v6 & 0xffffffff);
}

// Address range: 0x26353d - 0x263540
int64_t function_26353d(int64_t a1) {
    // 0x26353d
    int64_t result; // 0x26353d
    return result;
}

// Address range: 0x26357c - 0x26357f
int64_t function_26357c(int64_t a1) {
    // 0x26357c
    int64_t result; // 0x26357c
    return result;
}

// Address range: 0x263622 - 0x263623
int64_t function_263622(int64_t a1) {
    // 0x263622
    int64_t result; // 0x263622
    return result;
}

// Address range: 0x2636ab - 0x2636ac
int64_t function_2636ab(void) {
    // 0x2636ab
    int64_t result; // 0x2636ab
    return result;
}

// Address range: 0x2636c2 - 0x2636c7
int64_t function_2636c2(void) {
    // 0x2636c2
    int64_t result; // 0x2636c2
    return result;
}

// Address range: 0x2636e3 - 0x2636e8
int64_t function_2636e3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2636e3
    int64_t result; // 0x2636e3
    return result;
}

// Address range: 0x2636f8 - 0x26371f
int64_t function_2636f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t result; // 0x2636f8
    bool v2; // 0x2636f8
    if (v2 || v2) {
        // 0x2636fa
        return result;
    }
    char * v3 = (char *)(a2 + (int64_t)&g1); // 0x26370b
    *v3 = *v3 + (char)result;
    *(int32_t *)v1 = *(int32_t *)&v1 & (int32_t)result;
    return 0x6a5ac797;
}

// Address range: 0x26375e - 0x26375f
int64_t function_26375e(void) {
    // 0x26375e
    int64_t result; // 0x26375e
    return result;
}

// Address range: 0x263768 - 0x26376a
int64_t function_263768(void) {
    // 0x263768
    return function_26375e();
}

// Address range: 0x26381f - 0x263820
int64_t function_26381f(void) {
    // 0x26381f
    int64_t result; // 0x26381f
    return result;
}

// Address range: 0x263859 - 0x26385a
int64_t function_263859(int64_t a1) {
    // 0x263859
    int64_t result; // 0x263859
    return result;
}

// Address range: 0x2638d3 - 0x2638d4
int64_t function_2638d3(void) {
    // 0x2638d3
    int64_t result; // 0x2638d3
    return result;
}

// Address range: 0x2638dc - 0x2638f0
int64_t function_2638dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2638dc
    int64_t v1; // 0x2638dc
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a5 + 0x7fe1d39c); // 0x2638e1
    *v3 = *v3 + (int32_t)(v2 / 2 % 128 | v2 & 0xffffff00);
    int32_t v4 = a3; // 0x2638ea
    int32_t v5 = 2 * v4; // 0x2638ea
    __asm_out_134((int16_t)v5, (int32_t)a6);
    int64_t result = a6; // 0x2638ed
    if ((v5 ^ v4) < 0) {
        result = function_2638d3();
    }
    // 0x2638ef
    return result;
}

// Address range: 0x2638ff - 0x263904
int64_t function_2638ff(void) {
    // 0x2638ff
    return function_31282169();
}

// Address range: 0x26390a - 0x263924
int64_t function_26390a(int64_t a1, int64_t a2) {
    int64_t result = unknown_ffffffffc9227410(); // 0x26390a
    *(int32_t *)0x3701e82642bf03d8 = (int32_t)result;
    return result;
}

// Address range: 0x263986 - 0x263987
int64_t function_263986(int64_t a1) {
    // 0x263986
    int64_t result; // 0x263986
    return result;
}

// Address range: 0x2639fc - 0x2639ff
int64_t function_2639fc(int64_t a1) {
    // 0x2639fc
    int64_t result; // 0x2639fc
    return result;
}

// Address range: 0x263a4b - 0x263a50
int64_t function_263a4b(void) {
    // 0x263a4b
    return function_ffffffff826bcc67();
}

// Address range: 0x263a50 - 0x263a97
int64_t function_263a50(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x263a50
    int64_t v1; // 0x263a50
    uint64_t v2 = v1;
    uint64_t v3 = v1;
    int64_t v4 = a2;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x263a50
    bool v5; // 0x263a50
    if (v5) {
        // 0x263ac7
        return result;
    }
    uint32_t v6 = (int32_t)result >> 31; // 0x263a53
    int64_t v7 = v6; // 0x263a53
    float80_t v8; // 0x263a50
    *(int32_t *)(result + 8 * v2) = (int32_t)v8;
    int64_t v9 = result;
    *(int32_t *)v9 = *(int32_t *)&result + (int32_t)v9;
    char v10 = *(char *)v7; // 0x263a68
    int64_t v11 = 256 * (int64_t)(v10 | (char)(v3 / 256)) | v3 & -0xff01; // 0x263a68
    char v12 = v6; // 0x263a6a
    *(char *)(8 * v11 + a4) = v12;
    unsigned char v13 = *(char *)(v11 + v2 % 256); // 0x263a6e
    *(char *)(v2 & 0xffffff00 | (int64_t)v13) = v13;
    *(char *)0xdba1f07 = *(char *)0xdba1f07 + (char)a4;
    char v14 = *(char *)&v4; // 0x263a7d
    int32_t v15 = *(int32_t *)v7; // 0x263a84
    uint32_t v16 = (int32_t)(256 * (int64_t)((char)(a4 / 256) - v14) | a4 & 0xffff00ff) - v15; // 0x263a84
    char * v17 = (char *)(int64_t)v16; // 0x263a8e
    *v17 = *v17 | v12;
    int64_t v18 = v5 ? -4 : 4; // 0x263a90
    return function_ffffffffd3409608(v18 + a1, v4 + v18, v6, v16);
}

// Address range: 0x263aab - 0x263abd
int64_t function_263aab(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x263aab
    float80_t v1; // 0x263aab
    *(int16_t *)(a3 + 0x9e57a55) = (int16_t)v1;
    int64_t v2; // 0x263aab
    uint32_t v3 = *(int32_t *)&v2; // 0x263ab1
    int64_t result = v3; // 0x263ab1
    char * v4 = (char *)(result + 61); // 0x263ab6
    *v4 = *v4 & (char)a4;
    *(int32_t *)result = *(int32_t *)&v2 + v3;
    return result;
}

// Address range: 0x447b25 - 0x447b3d
int64_t function_447b25(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x447b25
    int64_t v1; // 0x447b25
    uint64_t v2 = v1 + 0x1b23858f; // 0x447b31
    char v3 = *(char *)(a4 - 0x70ff354a); // 0x447b37
    return 256 * (int64_t)(v3 + (char)(v2 / 256) + (char)((int32_t)v1 < 0xe4dc7a71)) | v2 & 0xffff00ff;
}

// Address range: 0x447b50 - 0x447b51
int64_t function_447b50(int64_t a1) {
    // 0x447b50
    int64_t result; // 0x447b50
    return result;
}

// Address range: 0x447b88 - 0x447b91
int64_t function_447b88(int64_t a1) {
    // 0x447b88
    int64_t result; // 0x447b88
    return result;
}

// Address range: 0x447bbc - 0x447bc0
int64_t function_447bbc(int64_t a1) {
    // 0x447bbc
    int64_t result; // 0x447bbc
    return result;
}

// Address range: 0x447c7a - 0x447c7f
int64_t function_447c7a(void) {
    // 0x447c7a
    return function_fffffffff4ff13e6();
}

// Address range: 0x447c82 - 0x447c86
int64_t function_447c82(void) {
    // 0x447c82
    int64_t result; // 0x447c82
    return result;
}

// Address range: 0x447c8c - 0x447c8d
int64_t function_447c8c(void) {
    // 0x447c8c
    int64_t result; // 0x447c8c
    return result;
}

// Address range: 0x447ca5 - 0x447ca8
int64_t function_447ca5(void) {
    // 0x447ca5
    int64_t result; // 0x447ca5
    return result;
}

// Address range: 0x447cfb - 0x447d06
int64_t function_447cfb(int64_t a1, int64_t a2) {
    // 0x447cfb
    int64_t v1; // 0x447cfb
    *(int32_t *)a1 = (int32_t)v1 & 0x3faf116a;
    return function_447c8c();
}

// Address range: 0x447d82 - 0x447d85
int64_t function_447d82(int64_t a1) {
    // 0x447d82
    int64_t v1; // 0x447d82
    return v1 & -0xff01 | (int64_t)&g2;
}

// Address range: 0x447dc1 - 0x447ded
int64_t function_447dc1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = __asm_in((int16_t)a3); // 0x447dc1
    int64_t v2; // 0x447dc1
    int64_t result = v2 & -256 | (int64_t)v1; // 0x447dc1
    uint64_t v3 = (v2 + a3) % 256; // 0x447dc8
    char * v4 = (char *)(result + (v3 | a3 & -256)); // 0x447dcc
    *v4 = *v4 + (char)(v2 / 256);
    if (v1 < -69) {
        // 0x447e3c
        return result;
    }
    // 0x447dd4
    float80_t v5; // 0x447dc1
    *(int64_t *)a4 = (int64_t)v5;
    uint64_t v6 = result - (v1 < 187 ? 0x4d0bc34e : 0x4d0bc34d); // 0x447dd6
    int64_t result2 = v6 % 256 ^ v3 | v6 & 0xffffff00; // 0x447de1
    char * v7 = (char *)result2; // 0x447de5
    *v7 = *v7 - 1;
    return result2;
}

// Address range: 0x447ded - 0x447e17
int64_t function_447ded(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3; // bp-8, 0x447ded
    int32_t * v2 = (int32_t *)(a4 + 45); // 0x447dee
    int64_t v3; // 0x447ded
    bool v4; // 0x447ded
    int32_t v5 = (int32_t)v4 + (int32_t)v3 + *v2; // 0x447dee
    *v2 = v5;
    int64_t v6 = a4 - 1; // 0x447df4
    int64_t result = (int64_t)&v1; // 0x447df4
    if (v6 != 0 && v5 != 0) {
        result = function_447e6c(a1, a2, a3, v6, (int64_t)&g4);
    }
    // 0x447df7
    *(int64_t *)(v3 & 0xffffffff) = a2;
    *(int32_t *)-0x6492ad9e1175e00c = (int32_t)result;
    return result;
}

// Address range: 0x447e17 - 0x447e28
int64_t function_447e17(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x447e17
    int64_t v1; // 0x447e17
    bool v2; // 0x447e17
    *(int32_t *)((v2 ? -1 : 1) + a1) = (int32_t)v1;
    return v1 | 4;
}

// Address range: 0x447e37 - 0x447e3b
int64_t function_447e37(void) {
    // 0x447e37
    int64_t result; // 0x447e37
    return result;
}

// Address range: 0x447e51 - 0x447e5a
int64_t function_447e51(int64_t a1, int64_t a2) {
    // 0x447e51
    int64_t v1; // 0x447e51
    unsigned char v2 = (char)v1; // 0x447e53
    bool v3; // 0x447e51
    unsigned char v4 = v2 + 21 + (char)v3; // 0x447e53
    bool v5 = v3 ? v4 <= v2 : v2 > 234; // 0x447e53
    int64_t result = v1 & -256 | (int64_t)v4; // 0x447e53
    *(char *)a1 = (char)v1;
    char * v6 = (char *)result; // 0x447e57
    *v6 = *v6 - (char)(v1 / 256) + (char)v5;
    return result;
}

// Address range: 0x447e6c - 0x447e81
int64_t function_447e6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x447e6c
    int64_t v1; // 0x447e6c
    char * v2 = (char *)(2 * v1); // 0x447e6c
    *v2 = *v2 ^ (char)a4;
    int64_t result = __asm_iretd(a5); // 0x447e76
    *(int32_t *)0x614fa3ae28543535 = (int32_t)result;
    return result;
}

// Address range: 0x447eb8 - 0x447f02
int64_t function_447eb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x447eb8
    int64_t v1; // 0x447eb8
    bool v2; // 0x447eb8
    uint64_t v3 = v1 - (v2 ? 122 : 121); // 0x447eb8
    int64_t v4 = v1 & -256; // 0x447eb8
    int32_t v5 = *(int32_t *)(v3 % 256 | v4); // 0x447ebb
    char * v6 = (char *)((int64_t)((int32_t)a4 - v5) + 76); // 0x447ebf
    *v6 = *v6 ^ (char)a5;
    int64_t result = (v3 + 147) % 256 | v4; // 0x447ec3
    if ((char)v3 < 110) {
        // 0x447f04
        return result;
    }
    int32_t * v7 = (int32_t *)result; // 0x447ec8
    *v7 = *v7 / 2;
    return result;
}

// Address range: 0x447f05 - 0x447f0f
int64_t function_447f05(void) {
    // 0x447f05
    return function_ffffffffac517f5b();
}
