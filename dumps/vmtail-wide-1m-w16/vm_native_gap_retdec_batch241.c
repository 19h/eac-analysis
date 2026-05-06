/*
 * Targeted RetDec C for native executable gap queue batch 241.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2ef61e-0x2ef81e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ef81e-0x2efa1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2efa1e-0x2efc1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x30fabb-0x30fcbb rank=- name=- kind=- bytes=- uncovered=-
 *   0x30fcbb-0x30febb rank=- name=- kind=- bytes=- uncovered=-
 *   0x30febb-0x3100bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3100bb-0x3102bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3102bb-0x3104bb rank=- name=- kind=- bytes=- uncovered=-
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
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
void __asm_out_139(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
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
void __asm_rep_movsb_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_stosb_memset(char *dst, char value, int64_t count);
void __asm_rep_stosd_memset(char *dst, int32_t value, int64_t count);
void __asm_rep_stosq_memset(char *dst, int64_t value, int64_t count);
void __asm_rep_movsd_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_movsq_memcpy(char *dst, char *src, int64_t count);
int64_t __asm_hlt();
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
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

int64_t function_202602d6();
int64_t function_2ef61e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint32_t a5);
int64_t function_2ef726(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2ef866(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ef9c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2efb15(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2efb21(void);
int64_t function_2efb45(void);
int64_t function_2efb49(void);
int64_t function_30faa5();
int64_t function_30fabb(int64_t a1, int64_t a2);
int64_t function_30faf5(int64_t a1, int64_t a2);
int64_t function_30fb08(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30fb2c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_30fb53(int64_t a1);
int64_t function_30fb68(void);
int64_t function_30fb74(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_30fbf5(void);
int64_t function_30fbfb(void);
int64_t function_30fc08(void);
int64_t function_30fc1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_30fc46(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30fcba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_30fd66(void);
int64_t function_30fd75(void);
int64_t function_30fdae(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30fdc9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_30fe77(int64_t a1);
int64_t function_30fe7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30fea2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30fefc(void);
int64_t function_30ff63(int64_t a1);
int64_t function_30ff8b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_310030(void);
int64_t function_310034(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3100a3(void);
int64_t function_3100ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3100fe(void);
int64_t function_31010c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_310246(void);
int64_t function_310269(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_310283(int64_t a1);
int64_t function_3102c5(void);
int64_t function_3102d8(void);
int64_t function_3102e5(int64_t a1);
int64_t function_3103ee(int64_t a1);
int64_t function_31043a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31048f(void);
int64_t function_310494(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_310496(int64_t a1, int64_t a2);
int64_t function_310499(int64_t a1, int64_t a2);
int64_t function_3104a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3104b9(int64_t a1);
int64_t function_741b1728();
int64_t function_7e31072e();
int64_t function_b32e738();
int64_t function_c4258();
int64_t function_ffffffff81ae33db();
int64_t unknown_2ce5182d();
int64_t unknown_3a51483c();
int64_t unknown_3ac18f97();
int64_t unknown_3ad45571();
int64_t unknown_3e06d546();
int64_t unknown_452be2b0();
int64_t unknown_4746c23b();
int64_t unknown_5432584e();
int64_t unknown_61218dd1();
int64_t unknown_7ea6e851();
int64_t unknown_82818c2();
int64_t unknown_c8de5c();
int64_t unknown_ffffffff921a801e();
int64_t unknown_ffffffffb2467b28();
int64_t unknown_ffffffffbabc2904();
int64_t unknown_ffffffffc3c1140f();

// Address range: 0x2ef61e - 0x2ef726
int64_t function_2ef61e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint32_t a5) {
    // 0x2ef61e
    int64_t v1; // 0x2ef61e
    char * v2 = (char *)(a1 + 20 + 4 * v1); // 0x2ef61e
    *v2 = *v2 + (char)a4;
    int64_t v3 = a5; // 0x2ef624
    int64_t v4 = v3 - 8; // 0x2ef627
    int64_t * v5 = (int64_t *)v4; // 0x2ef628
    *v5 = 0x557b5f7e;
    int64_t * v6 = (int64_t *)(v3 - 16); // 0x2ef640
    int64_t v7 = *(int64_t *)(v3 + 32); // 0x2ef64c
    *v5 = v7;
    *v6 = v7;
    int64_t * v8 = (int64_t *)(v3 + 16); // 0x2ef658
    int64_t v9 = *v8; // 0x2ef658
    *v5 = v9;
    *v6 = a4;
    int64_t * v10 = (int64_t *)(v3 - 24); // 0x2ef66f
    *v10 = v7;
    *v6 = 0x4be40d3;
    int64_t * v11 = (int64_t *)(v3 - 32); // 0x2ef690
    *v11 = v7;
    *(int64_t *)v3 = *v6;
    *v11 = v9;
    *v6 = v9;
    *v8 = v9;
    *v6 = *v5;
    *v10 = v4;
    int64_t v12 = *v5; // 0x2ef708
    *v6 = v12;
    *v10 = v12;
    return function_c4258(a1, a2, a3, *v6, v1, v1);
}

// Address range: 0x2ef726 - 0x2ef866
int64_t function_2ef726(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2ef726
    return function_c4258(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x2ef866 - 0x2ef9c7
int64_t function_2ef866(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ef866
    int64_t v1; // 0x2ef866
    return function_c4258(a1, a2, a3, a4, a5, v1);
}

// Address range: 0x2ef9c7 - 0x2efb01
int64_t function_2ef9c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2ef9c7
    int64_t v1; // bp-48, 0x2ef9c7
    int64_t v2 = (int64_t)&v1; // 0x2efa76
    int64_t v3 = v2 + 16; // 0x2efa7c
    int64_t * v4 = (int64_t *)(v2 + 8); // 0x2efa8b
    *v4 = 0x7b865472;
    v1 = a7;
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = a3;
    v1 = a4;
    *(int64_t *)(v2 - 8) = 169;
    int64_t v5 = v1; // 0x2efaad
    *(int64_t *)(v2 + 48) = 169;
    int64_t * v6 = (int64_t *)v3; // 0x2efabb
    v1 = *v6;
    *v4 = v3;
    *v6 = v2 + 32;
    int64_t v7; // 0x2ef9c7
    return function_c4258(v7, a2, *v4, v5, a5, a6);
}

// Address range: 0x2efb15 - 0x2efb1d
int64_t function_2efb15(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2efb15
    int64_t v1; // 0x2efb15
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(result - 127); // 0x2efb17
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x2efb21 - 0x2efb24
int64_t function_2efb21(void) {
    // 0x2efb21
    int64_t result; // 0x2efb21
    return result;
}

// Address range: 0x2efb45 - 0x2efb48
int64_t function_2efb45(void) {
    // 0x2efb45
    int64_t result; // 0x2efb45
    return result;
}

// Address range: 0x2efb49 - 0x2efb4c
int64_t function_2efb49(void) {
    // 0x2efb49
    int64_t result; // 0x2efb49
    return result;
}

// Address range: 0x30fabb - 0x30fabe
int64_t function_30fabb(int64_t a1, int64_t a2) {
    int64_t result = a2 & 0xffffffff; // 0x30fabc
    bool v1; // 0x30fabb
    if (!v1 && !v1) {
        result = function_30faa5();
    }
    // 0x30fabe
    return result;
}

// Address range: 0x30faf5 - 0x30fb06
int64_t function_30faf5(int64_t a1, int64_t a2) {
    // 0x30faf5
    int64_t v1; // 0x30faf5
    *(char *)a2 = (char)(v1 & v1);
    return unknown_ffffffffbabc2904();
}

// Address range: 0x30fb08 - 0x30fb1f
int64_t function_30fb08(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30fb08
    float80_t v1; // 0x30fb08
    *(int32_t *)((a4 & 0xffffffff) + 0x4401e801) = (int32_t)v1;
    int64_t v2 = __asm_iretd(); // 0x30fb10
    int64_t v3; // 0x30fb08
    uint32_t v4 = *(int32_t *)&v3; // 0x30fb16
    uint32_t v5 = v4 + (int32_t)a3; // 0x30fb16
    *(int32_t *)a3 = v5;
    int64_t v6; // 0x30fb08
    unsigned char v7 = (char)v6 % 32; // 0x30fb18
    if (v7 != 0) {
        int64_t v8; // 0x30fb08
        unsigned char v9 = *(char *)&v8; // 0x30fb18
        *(char *)v2 = (char)(v5 < v4) << v7 - 1 | v9 << v7 | (char)((int16_t)v9 >> (int16_t)(9 - v7));
    }
    return function_741b1728();
}

// Address range: 0x30fb2c - 0x30fb2f
int64_t function_30fb2c(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = __asm_wait(a1, a2, a3); // 0x30fb2c
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x30fb53 - 0x30fb5a
int64_t function_30fb53(int64_t a1) {
    // 0x30fb53
    int64_t v1; // 0x30fb53
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result & -0x7ef45a12;
    return result;
}

// Address range: 0x30fb68 - 0x30fb73
int64_t function_30fb68(void) {
    // 0x30fb68
    return function_7e31072e();
}

// Address range: 0x30fb74 - 0x30fba1
int64_t function_30fb74(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a7;
    int64_t v2; // 0x30fb74
    *(int32_t *)(a3 + 76) = (int32_t)v2;
    int64_t v3; // 0x30fb74
    *(int32_t *)a1 = *(int32_t *)&v3 + (int32_t)a1;
    int32_t * v4 = (int32_t *)((v2 ^ 35) + 0x18712a03); // 0x30fb83
    *v4 = *v4 + (int32_t)(int64_t)&v1;
    char v5 = *(char *)-0x46bae470; // 0x30fb89
    *(char *)-0x46bae470 = v5 + (char)((uint64_t)v2 / 256);
    __asm_out_133(0x7676, 1);
    *(int32_t *)0xbb7e6f42 = *(int32_t *)0xbb7e6f42 + (int32_t)a4;
    return 0xbb7e6f01;
}

// Address range: 0x30fbf5 - 0x30fbf8
int64_t function_30fbf5(void) {
    // 0x30fbf5
    int64_t result; // 0x30fbf5
    return result;
}

// Address range: 0x30fbfb - 0x30fbfc
int64_t function_30fbfb(void) {
    // 0x30fbfb
    int64_t result; // 0x30fbfb
    return result;
}

// Address range: 0x30fc08 - 0x30fc09
int64_t function_30fc08(void) {
    // 0x30fc08
    int64_t result; // 0x30fc08
    return result;
}

// Address range: 0x30fc1e - 0x30fc46
int64_t function_30fc1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    bool v2; // 0x30fc1e
    if (v2) {
        function_30fc08();
    }
    int32_t * v3 = (int32_t *)(a2 - 0x3f55f49); // 0x30fc20
    int64_t v4; // 0x30fc1e
    *v3 = *v3 + (int32_t)v4;
    int32_t * v5 = (int32_t *)(a1 + 125); // 0x30fc2b
    *v5 = *v5 + (int32_t)v4;
    int64_t result = unknown_4746c23b(); // 0x30fc34
    *(char *)v1 = *(char *)&v1 - (char)a4;
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x30fc46 - 0x30fcb8
int64_t function_30fc46(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30fc46
    __asm_in((int16_t)a3);
    bool v1; // 0x30fc46
    if (v1) {
        // 0x30fc4b
        unknown_7ea6e851();
        return unknown_c8de5c();
    }
    int64_t v2 = a3 & -0xff01 | (int64_t)&g1; // 0x30fc47
    int32_t v3 = 0x10000 * (int32_t)unknown_3ac18f97() >> 16; // 0x30fc9b
    uint32_t v4 = v3 & -0x1760f569; // 0x30fc9c
    int32_t * v5 = (int32_t *)(a1 + 35); // 0x30fca1
    *v5 = *v5 + (int32_t)v2;
    char v6 = *(char *)(a1 + 0x64a2c492) > (char)(v4 / 256) ? 41 : 40; // 0x30fcaa
    char * v7 = (char *)(v2 + 0x2b01e8b8); // 0x30fcac
    *v7 = *v7 + (char)((int64_t)&g1 >> 8);
    char v8 = *(char *)(a4 - 0x11a61ded); // 0x30fcb2
    return (int64_t)((char)v4 - v6 | v8) | (int64_t)(v3 & -0x1760f600);
}

// Address range: 0x30fcba - 0x30fd61
int64_t function_30fcba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x30fcba
    int64_t v1; // 0x30fcba
    int64_t v2 = v1;
    int64_t v3 = a2;
    int32_t v4 = v2; // 0x30fcba
    uint32_t v5 = (int32_t)v1 + v4; // 0x30fcba
    *(int32_t *)a3 = v5;
    unknown_82818c2();
    if (v5 >= 0) {
        // 0x30fcc3
        return unknown_61218dd1();
    }
    int64_t v6; // 0x30fcba
    int64_t v7 = v6;
    __asm_iretd();
    int64_t v8; // 0x30fcba
    uint32_t v9 = *(int32_t *)&v8; // 0x30fd06
    uint32_t v10 = v9 + (int32_t)a4; // 0x30fd06
    *(int32_t *)v8 = v10;
    int64_t v11 = unknown_ffffffffc3c1140f(); // 0x30fd08
    v6 = v7 + 8;
    // 0x30fd04
    while (v10 < v9 || v10 == 0) {
        // 0x30fd04
        v7 = v6;
        __asm_iretd();
        v9 = *(int32_t *)&v8;
        v10 = v9 + (int32_t)a4;
        *(int32_t *)v8 = v10;
        v11 = unknown_ffffffffc3c1140f();
        v6 = v7 + 8;
    }
    // 0x30fd10
    *(int64_t *)v7 = v11;
    __asm_int1((int64_t)&g2, (int64_t)&g2);
    int64_t v12 = unknown_ffffffff921a801e(); // 0x30fd18
    *(char *)0x10000003c = *(char *)0x10000003c + (char)v12;
    int64_t v13 = __asm_int1((int64_t)&g2, (int64_t)&g2); // 0x30fd22
    int64_t v14 = v7 - 8; // 0x30fd24
    int64_t * v15 = (int64_t *)v14; // 0x30fd24
    *v15 = *(int64_t *)0xffffffff;
    unknown_2ce5182d();
    unsigned char v16 = llvm_ctpop_i8((char)v1 - *(char *)-0x5bcd7956); // 0x30fd2e
    uint64_t result = unknown_3a51483c(); // 0x30fd36
    *v15 = v7;
    *(int64_t *)(v7 - 16) = v14;
    *(char *)(v13 & 0xffffffff) = (char)(result / 256);
    if (v16 % 2 != 0) {
        // 0x30fcf9
        return result;
    }
    uint32_t v17 = (int32_t)v13 % 32; // 0x30fd41
    if (v17 != 0) {
        *(int32_t *)v3 = *(int32_t *)&v3 >> v17;
    }
    int32_t * v18 = (int32_t *)((v2 & 0xffffffff) + 5); // 0x30fd46
    *v18 = *v18 + v4;
    *(int64_t *)(v7 - 24) = v3;
    char v19 = *(char *)(v8 + 0x69e801e8); // 0x30fd52
    *(int64_t *)(v7 - 32) = v3;
    int32_t * v20 = (int32_t *)(v8 - 0x16544b00); // 0x30fd5a
    *v20 = 2 * *v20;
    return v8 & 0xff00 | v2 & 0xffff0000 | (int64_t)(v19 + (char)v2);
}

// Address range: 0x30fd66 - 0x30fd67
int64_t function_30fd66(void) {
    // 0x30fd66
    int64_t result; // 0x30fd66
    return result;
}

// Address range: 0x30fd75 - 0x30fd76
int64_t function_30fd75(void) {
    // 0x30fd75
    int64_t result; // 0x30fd75
    return result;
}

// Address range: 0x30fdae - 0x30fdc9
int64_t function_30fdae(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30fdae
    int64_t v1; // 0x30fdae
    uint64_t v2 = v1;
    char * v3 = (char *)(v2 + 5); // 0x30fdc2
    char v4 = *v3 | (char)(v2 / 256); // 0x30fdc2
    *v3 = v4;
    int64_t result = __asm_iretd(); // 0x30fdc6
    if (a4 != 1 && v4 != 0) {
        result = function_30fd75();
    }
    // 0x30fdc8
    return result;
}

// Address range: 0x30fdc9 - 0x30fe0b
int64_t function_30fdc9(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2;
    int64_t v2; // 0x30fdc9
    *(char *)0x577040d9 = *(char *)0x577040d9 + (char)(v2 / 256);
    int32_t v3 = v2; // 0x30fdd8
    int32_t v4 = *(int32_t *)((v2 & 0xb3d5a829 | 0x4c2a57d6) + 96); // 0x30fdd8
    int32_t v5 = v4 + v3; // 0x30fdd8
    __asm_hlt();
    if (v5 < 0 != ((v5 ^ v3) & (v5 ^ v4)) < 0) {
        function_30fd66();
    }
    int64_t v6 = (v2 | a2) & 0xffffffff; // 0x30fdd0
    int64_t * v7 = (int64_t *)v6; // 0x30fde3
    *v7 = (int64_t)v5;
    int64_t result = *v7 + 0xe273722e & 0xffffff00 | (int64_t)*(char *)-0x7259bc02d18dff98; // 0x30fdf4
    int32_t * v8 = (int32_t *)(result + 0x69475c1); // 0x30fdfd
    *v8 = (int32_t)a3;
    *(int64_t *)(v6 - 8) = 0x13d0cc8;
    *(char *)v1 = *(char *)&v1 + (char)*v8;
    return result;
}

// Address range: 0x30fe77 - 0x30fe7b
int64_t function_30fe77(int64_t a1) {
    // 0x30fe77
    int64_t result; // 0x30fe77
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x30fe7e - 0x30fe84
int64_t function_30fe7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 32); // 0x30fe7e
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x30fe7e
    return result;
}

// Address range: 0x30fea2 - 0x30fea8
int64_t function_30fea2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30fea2
    int64_t result; // 0x30fea2
    *(int32_t *)a3 = (int32_t)result + 8 + (int32_t)result;
    return result;
}

// Address range: 0x30fefc - 0x30ff01
int64_t function_30fefc(void) {
    // 0x30fefc
    return function_b32e738();
}

// Address range: 0x30ff63 - 0x30ff68
int64_t function_30ff63(int64_t a1) {
    // 0x30ff63
    int64_t v1; // 0x30ff63
    int64_t v2 = v1;
    return (v2 + 28) % 256 | v2 & -256;
}

// Address range: 0x30ff8b - 0x310029
int64_t function_30ff8b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x30ff8b
    int64_t v1; // 0x30ff8b
    int32_t * v2 = (int32_t *)(v1 - 78); // 0x30ff8b
    *v2 = *v2 + (int32_t)v1;
    *(int32_t *)-0x65c8e871c5bc571 = (int32_t)v1;
    int32_t * v3 = (int32_t *)(a1 - 0x61b2736c); // 0x30ffa4
    *v3 = *v3 + (int32_t)a4;
    int64_t v4 = unknown_452be2b0(); // 0x30ffaa
    while (a4 == 0) {
        // 0x30ff99
        *v3 = *v3 + (int32_t)a4;
        v4 = unknown_452be2b0();
    }
    int64_t result = (v4 + 144) % 256 | v4 & -256; // 0x30ffb1
    int64_t v5 = a4 - 1; // 0x30ffb3
    if (v5 == 0) {
        // 0x30ffb5
        return result;
    }
    // 0x31000f
    *(char *)a1 = __asm_insb((int16_t)a3);
    char v6 = *(char *)0x1e8ba8e; // 0x310016
    *(char *)0x1e8ba8e = (char)((char)v4 > 111) - (char)(a3 / 256) + v6;
    uint32_t v7 = (int32_t)v5 % 32; // 0x31001a
    if (v7 != 0) {
        int32_t * v8 = (int32_t *)(int64_t)(0x10000 * (int32_t)result >> 16); // 0x31001a
        uint32_t v9 = *v8; // 0x31001a
        *v8 = v9 >> 32 - v7 | v9 << v7;
    }
    return unknown_ffffffffb2467b28();
}

// Address range: 0x310030 - 0x310032
int64_t function_310030(void) {
    // 0x310030
    int64_t result; // 0x310030
    return result;
}

// Address range: 0x310034 - 0x310051
int64_t function_310034(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x310034
    int64_t v1; // 0x310034
    uint32_t v2 = (int32_t)v1 + (int32_t)a1; // 0x310034
    int32_t v3 = *(int32_t *)(a2 + 33 + 8 * (int64_t)v2); // 0x310036
    int64_t result = 0x167abee * v3 + (int32_t)unknown_3e06d546(v2, v1 & 0xffffffff); // 0x310047
    int32_t * v4 = (int32_t *)(a3 - 44); // 0x310049
    uint32_t v5 = *v4; // 0x310049
    uint32_t v6 = v5 + v2; // 0x310049
    *v4 = v6;
    char * v7 = (char *)result; // 0x31004c
    *v7 = *v7 + (char)a4 + (char)(v6 < v5);
    return result;
}

// Address range: 0x3100a3 - 0x3100a4
int64_t function_3100a3(void) {
    // 0x3100a3
    int64_t result; // 0x3100a3
    return result;
}

// Address range: 0x3100ac - 0x3100d7
int64_t function_3100ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a3; // 0x3100ac
    uint32_t v2 = v1 + (int32_t)a2; // 0x3100ac
    float80_t v3; // 0x3100ac
    *(float32_t *)(a1 + 0x8d75498) = (float32_t)v3;
    int64_t v4; // 0x3100ac
    char v5 = *(char *)&v4; // 0x3100b4
    int64_t v6; // 0x3100ac
    *(char *)a2 = (char)(v2 < v1) - (char)v6 + v5;
    int32_t * v7 = (int32_t *)(a4 - 0x5854c9d0); // 0x3100b7
    *v7 = *v7 & v2;
    *(char *)a1 = __asm_insb((int16_t)v2);
    *(int32_t *)-0x1ce1b2ff2c06ac35 = (int32_t)v6;
    return function_ffffffff81ae33db();
}

// Address range: 0x3100fe - 0x3100ff
int64_t function_3100fe(void) {
    // 0x3100fe
    int64_t result; // 0x3100fe
    return result;
}

// Address range: 0x31010c - 0x310158
int64_t function_31010c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    char * v1 = (char *)(a3 + 0x79c77b5b); // 0x31010c
    unsigned char v2 = (char)(a4 / 256); // 0x31010c
    *v1 = *v1 + v2;
    int64_t v3; // 0x31010c
    unsigned char v4 = (char)v3 + v2; // 0x310112
    int64_t result = a3 & 0xffffffff; // 0x310114
    if (llvm_ctpop_i8(v4) % 2 != 0) {
        // 0x310118
        return result;
    }
    int32_t * v5 = (int32_t *)(256 * (int64_t)v4 | a4 & -0xff01); // 0x310154
    *v5 = (int32_t)(v4 < v2) - (int32_t)v3 + *v5;
    __asm_int(85);
    return result;
}

// Address range: 0x310246 - 0x31024d
int64_t function_310246(void) {
    // 0x310246
    return function_202602d6();
}

// Address range: 0x310269 - 0x310275
int64_t function_310269(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x310269
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result = unknown_3ad45571(); // 0x31026b
    __asm_int(-104);
    return result;
}

// Address range: 0x310283 - 0x310284
int64_t function_310283(int64_t a1) {
    // 0x310283
    int64_t result; // 0x310283
    return result;
}

// Address range: 0x3102c5 - 0x3102c6
int64_t function_3102c5(void) {
    // 0x3102c5
    int64_t result; // 0x3102c5
    return result;
}

// Address range: 0x3102d8 - 0x3102dc
int64_t function_3102d8(void) {
    // 0x3102d8
    return function_3102c5();
}

// Address range: 0x3102e5 - 0x3102e8
int64_t function_3102e5(int64_t a1) {
    // 0x3102e5
    int64_t result; // 0x3102e5
    return result;
}

// Address range: 0x3103ee - 0x3103f2
int64_t function_3103ee(int64_t a1) {
    // 0x3103ee
    int64_t v1; // 0x3103ee
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)v1;
    return result;
}

// Address range: 0x31043a - 0x310466
int64_t function_31043a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31043a
    int64_t v1; // 0x31043a
    uint64_t v2 = v1;
    char * v3 = (char *)(v1 + 0x2508e00); // 0x31043f
    *v3 = *v3 + (char)v1;
    char * v4 = (char *)(a3 + 1); // 0x310445
    unsigned char v5 = *v4; // 0x310445
    unsigned char v6 = v5 + (char)(v1 / 256); // 0x310445
    *v4 = v6;
    unknown_5432584e();
    char v7 = *(char *)(a4 - 0x6641c500); // 0x31044d
    unsigned char v8 = (char)(v2 / 256); // 0x310453
    unsigned char v9 = v8 + (char)v2 + v7 + (char)(v6 < v5); // 0x310453
    int64_t v10; // 0x31043a
    *(char *)a3 = *(char *)&v10 - v9 + (char)(v9 < v8);
    return __asm_wait((int64_t)&g2, (int64_t)&g2, (int64_t)&g2);
}

// Address range: 0x31048f - 0x310493
int64_t function_31048f(void) {
    // 0x31048f
    int64_t v1; // 0x31048f
    return __asm_int1(v1, v1);
}

// Address range: 0x310494 - 0x310496
int64_t function_310494(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x310494
    int64_t result; // 0x310494
    *(int32_t *)a4 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x310496 - 0x310498
int64_t function_310496(int64_t a1, int64_t a2) {
    // 0x310496
    return __asm_int1(a1, a2);
}

// Address range: 0x310499 - 0x3104a0
int64_t function_310499(int64_t a1, int64_t a2) {
    // 0x310499
    int64_t result; // 0x310499
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x3104a0 - 0x3104b6
int64_t function_3104a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3104a0
    int64_t v1; // 0x3104a0
    int32_t * v2 = (int32_t *)(v1 - 24); // 0x3104a0
    *v2 = *v2 | (int32_t)a4;
    int32_t * v3 = (int32_t *)(a4 - 0x3f309c0b); // 0x3104a3
    *v3 = *v3 + (int32_t)v1;
    int64_t v4; // 0x3104a0
    *(int32_t *)a1 = *(int32_t *)&v4;
    return v1 & 0xffffffff ^ 0x1703abb9;
}

// Address range: 0x3104b9 - 0x3104ba
int64_t function_3104b9(int64_t a1) {
    // 0x3104b9
    int64_t result; // 0x3104b9
    return result;
}
