/*
 * Targeted RetDec C for native executable gap queue batch 583.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1ef4e8-0x1ef6e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ef6e8-0x1ef8e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ef8e8-0x1efae8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1efae8-0x1efce8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x236eb6-0x2370b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2372b6-0x2374b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2374b6-0x2376b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2376b6-0x2378b6 rank=- name=- kind=- bytes=- uncovered=-
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
typedef struct { uint8_t bytes[32]; } int256_t;
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
int256_t __asm_vpcmpeqw(int256_t left, int256_t right);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psadbw(int128_t left, int128_t right);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_vpunpckhdq(int128_t left, int128_t right);
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

int64_t function_1ef4e6();
int64_t function_1ef4e8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1ef537(void);
int64_t function_1ef53f(void);
int64_t function_1ef546(void);
int64_t function_1ef567(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1ef58e(int64_t a1, int64_t a2);
int64_t function_1ef5a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ef706(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ef759(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_1ef776(int64_t a1);
int64_t function_1ef78d(void);
int64_t function_1ef7db(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ef81c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1ef860(void);
int64_t function_1ef8e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ef91d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1ef9c8(int64_t a1);
int64_t function_1ef9da(void);
int64_t function_1ef9fb(int64_t a1);
int64_t function_1efa0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1efbfe(void);
int64_t function_1efc38(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_20b70e4();
int64_t function_20b827f();
int64_t function_236eb6(int64_t a1);
int64_t function_236f13(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_236f30(void);
int64_t function_236f9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_236fad(void);
int64_t function_236fda(int64_t a1, int64_t a2);
int64_t function_236ff0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_236ff6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23704c(void);
int64_t function_2372b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_237362(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_237398(void);
int64_t function_2373bf(int64_t a1, int64_t a2);
int64_t function_2373df(void);
int64_t function_2373fe(int64_t a1);
int64_t function_237417(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_237445(void);
int64_t function_237448(int64_t a1);
int64_t function_237464(int64_t a1);
int64_t function_2374a7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2374d5(void);
int64_t function_23751a(int64_t a1, int64_t a2);
int64_t function_23753c(int64_t a1);
int64_t function_237581(void);
int64_t function_2375fd(int64_t a1);
int64_t function_237686(void);
int64_t function_2376b4(int64_t a1);
int64_t function_2376c1(void);
int64_t function_23771f(void);
int64_t function_237867(void);
int64_t function_23786b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23786c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_237876(void);
int64_t function_24b64ddd();
int64_t function_4f295fe8();
int64_t function_59ff4072();
int64_t function_611d3d();
int64_t function_c4258();
int64_t function_ffffffff97ed7412();
int64_t function_ffffffffb3001172();
int64_t function_ffffffffc2b37584();
int64_t function_ffffffffc996aede();
int64_t function_ffffffffe8609c3a();
int64_t function_ffffffffe8b0a38d();
int64_t unknown_10e75c46();
int64_t unknown_18297e28();
int64_t unknown_1eb7ad33();
int64_t unknown_3929612e();
int64_t unknown_3aaa8620();
int64_t unknown_3d592414();
int64_t unknown_3f84111d();
int64_t unknown_68b67cff();
int64_t unknown_6d6c503c();
int64_t unknown_70c9c3f6();
int64_t unknown_79b8925d();
int64_t unknown_7ec8321d();
int64_t unknown_ffffffff8294c1fa();
int64_t unknown_ffffffff8d39ac23();
int64_t unknown_ffffffff94eee47e();
int64_t unknown_ffffffffa429ce12();
int64_t unknown_ffffffffc24e99ef();
int64_t unknown_ffffffffc8f20ee6();
int64_t unknown_ffffffffc913f27e();
int64_t unknown_ffffffffe2571f13();
int64_t unknown_ffffffffe8a1c859();
int64_t unknown_fffffffff24a48d3();
int64_t unknown_fffffffff377272b();
int64_t unknown_fffffffff4211f1e();

// Address range: 0x1ef4e8 - 0x1ef536
int64_t function_1ef4e8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1ef4e8
    int64_t v1; // 0x1ef4e8
    *(int32_t *)v1 = (int32_t)v1;
    char * v2 = (char *)(a1 - 0x60c9fd35); // 0x1ef4ea
    *v2 = *v2 - (char)((int32_t)v1 / 256);
    int64_t v3 = unknown_70c9c3f6(); // 0x1ef4f0
    int16_t v4 = a3; // 0x1ef4f5
    __asm_out(v4, (int32_t)v3);
    int64_t v5 = v3; // 0x1ef4fc
    if (*(char *)0x15b804ac >= (char)a4) {
        v5 = function_1ef4e6();
    }
    int32_t * v6 = (int32_t *)(9 * a4); // 0x1ef4fe
    *v6 = *v6 + (int32_t)a4;
    __asm_int(-26);
    char * v7 = (char *)(v5 + 2 * v1); // 0x1ef509
    *v7 = *v7 | (char)(a3 / 256);
    *(int64_t *)0xb48d65ef = a3;
    int32_t * v8 = (int32_t *)(unknown_3d592414() + v1 & 0xffffffff); // 0x1ef515
    int32_t v9 = a3; // 0x1ef515
    *v8 = *v8 + v9;
    int32_t * v10 = (int32_t *)unknown_3f84111d(); // 0x1ef51c
    *v10 = *v10 | (int32_t)v1;
    __asm_int(127);
    int32_t * v11 = (int32_t *)(v1 - 2); // 0x1ef521
    *v11 = *v11 + v9;
    int64_t v12 = unknown_fffffffff377272b() & 0xffffffff; // 0x1ef52b
    *(char *)v12 = __asm_insb(v4);
    *(char *)-0x2dca2bcb = *(char *)-0x2dca2bcb + (char)(v1 / 256);
    return function_1ef567(v12, v5 & 0xffffffff, a3);
}

// Address range: 0x1ef537 - 0x1ef53c
int64_t function_1ef537(void) {
    // 0x1ef537
    return function_611d3d();
}

// Address range: 0x1ef53f - 0x1ef540
int64_t function_1ef53f(void) {
    // 0x1ef53f
    int64_t result; // 0x1ef53f
    return result;
}

// Address range: 0x1ef546 - 0x1ef547
int64_t function_1ef546(void) {
    // 0x1ef546
    int64_t result; // 0x1ef546
    return result;
}

// Address range: 0x1ef567 - 0x1ef579
int64_t function_1ef567(int64_t a1, int64_t a2, int64_t a3) {
    int16_t v1 = a3; // 0x1ef56d
    int64_t v2; // 0x1ef567
    __asm_out(v1, (int32_t)v2);
    int32_t * v3 = (int32_t *)(a1 - 80); // 0x1ef574
    *v3 = *v3 + (int32_t)v2;
    int64_t v4; // 0x1ef567
    __asm_outsd(v1, *(int32_t *)&v4);
    bool v5; // 0x1ef567
    return v2 - (v5 ? 0x3d0087f7 : 0x3d0087f6) & 0xffffffff;
}

// Address range: 0x1ef58e - 0x1ef59a
int64_t function_1ef58e(int64_t a1, int64_t a2) {
    // 0x1ef58e
    *(char *)0x1820dd96 = *(char *)0x1820dd96 >> 7;
    int64_t result; // 0x1ef58e
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x1ef5a0 - 0x1ef663
int64_t function_1ef5a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x1ef5a0
    *(int32_t *)a1 = (int32_t)v2;
    bool v3; // 0x1ef5a0
    int64_t v4 = (v3 ? -4 : 4) + a1; // 0x1ef5a0
    unknown_7ec8321d(v4);
    if (!v3) {
        // 0x1ef5f4
        unknown_ffffffff8294c1fa();
        int32_t * v5 = (int32_t *)(v1 - 125); // 0x1ef5f9
        uint32_t v6 = *v5; // 0x1ef5f9
        uint32_t v7 = v6 + (int32_t)a4; // 0x1ef5f9
        *v5 = v7;
        char * v8 = (char *)(v4 + 20); // 0x1ef5fc
        *v8 = *v8 - (char)v2 + (char)(v7 < v6);
        int32_t * v9 = (int32_t *)((v2 & 0xffffffff) - 0x10e9fe18); // 0x1ef5ff
        *v9 = *v9 + (int32_t)v2;
        return unknown_ffffffffa429ce12();
    }
    int16_t v10 = v2; // 0x1ef61e
    *(char *)v4 = __asm_insb(v10);
    __asm_in(-78);
    __asm_outsd(v10, *(int32_t *)&v1);
    int64_t v11 = unknown_18297e28(); // 0x1ef622
    int64_t v12; // 0x1ef5a0
    char v13 = *(char *)&v12; // 0x1ef628
    unknown_1eb7ad33();
    uint32_t v14 = (int32_t)a4 % 32; // 0x1ef632
    if (v14 != 0) {
        int32_t * v15 = (int32_t *)v4; // 0x1ef632
        *v15 = *v15 << v14;
    }
    uint64_t v16 = v2 & 0xffffff00; // 0x1ef628
    int64_t v17 = v16 | (int64_t)((char)v3 + (char)v2 - v13); // 0x1ef628
    int32_t * v18 = (int32_t *)v17; // 0x1ef634
    *v18 = *v18 - (int32_t)v12;
    int64_t v19 = unknown_6d6c503c(); // 0x1ef636
    char * v20 = (char *)(v19 + 0x729ce00); // 0x1ef63d
    *v20 = *v20 + (char)v19;
    int32_t * v21 = (int32_t *)(v17 + 1); // 0x1ef645
    *v21 = *v21 + (int32_t)v11;
    char * v22 = (char *)(v17 - 0x76f7dc51); // 0x1ef649
    *v22 = *v22 + (char)(v16 / 256);
    int64_t result = unknown_79b8925d(); // 0x1ef656
    *(int64_t *)(v11 & 0xffffffff) = 0x3ebbd9ae;
    return result;
}

// Address range: 0x1ef706 - 0x1ef759
int64_t function_1ef706(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x1ef706
    uint32_t v3 = (int32_t)v2;
    *(int32_t *)-0x3fd7fe176bdffd35 = v3;
    uint32_t v4 = (int32_t)a4 % 32; // 0x1ef70f
    int64_t v5; // 0x1ef706
    bool v6; // 0x1ef706
    int64_t v7; // 0x1ef706
    if (v4 == 0) {
        // .thread
        v5 = a3 & -256 | (int64_t)*(char *)(a4 + 44);
        v6 = true;
    } else {
        uint32_t v8 = 32 - v4; // 0x1ef70f
        *(int32_t *)v2 = v3 >> v8 | v3 << v4;
        uint32_t v9 = *(int32_t *)&v7;
        uint32_t v10 = v9 >> v8 | v9 << v4; // 0x1ef716
        *(int32_t *)v7 = v10;
        v5 = a3 & -256 | (int64_t)*(char *)(a4 + 44);
        v6 = v10 % 2 != 0;
    }
    __asm_in(12);
    uint32_t v11 = (int32_t)unknown_3aaa8620(); // 0x1ef71f
    uint32_t v12 = *(int32_t *)(a1 + 12) + v11; // 0x1ef71f
    uint32_t v13 = v12 + (int32_t)v6; // 0x1ef71f
    unsigned char v14 = llvm_ctpop_i8((char)v13); // 0x1ef71f
    v7 = v13;
    while (v14 % 2 != 0) {
        // continue -> 0x1ef722
    }
    // 0x1ef726
    *(int32_t *)a1 = *(int32_t *)&v1;
    bool v15; // 0x1ef706
    int64_t v16 = v15 ? -4 : 4; // 0x1ef726
    int64_t v17 = v16 + a1; // 0x1ef726
    int64_t v18 = v1 + v16; // 0x1ef726
    int32_t v19 = __asm_insd((int16_t)v5); // 0x1ef727
    int32_t * v20 = (int32_t *)v17; // 0x1ef727
    *v20 = v19;
    int64_t v21 = v7;
    int64_t v22 = v6 ? v13 <= v11 : v12 < v11 ? 233 : 232; // 0x1ef728
    int32_t * v23 = (int32_t *)(v17 - 39); // 0x1ef72a
    *v23 = *v23 + (int32_t)v18;
    int32_t * v24 = (int32_t *)(v5 - 0x17fe1765); // 0x1ef735
    int32_t v25 = *v24; // 0x1ef735
    *v24 = v25 + 0x56013d01 + (int32_t)((v21 - v22 & 254 | v21 & -256) < 0xffffffffdc012a46);
    int64_t v26 = unknown_10e75c46(); // 0x1ef740
    char * v27 = (char *)v18; // 0x1ef745
    *v27 = *v27 + (char)v17;
    *v20 = (int32_t)v26;
    int64_t v28 = v17 + (v15 ? -5 : 5); // 0x1ef750
    int64_t v29 = v18 + (v15 ? -1 : 1); // 0x1ef750
    v1 = v29;
    *(int32_t *)v28 = *(int32_t *)v29;
    return function_ffffffffe8609c3a(v28 + v16, v1 + v16);
}

// Address range: 0x1ef759 - 0x1ef76e
int64_t function_1ef759(int64_t a1, int64_t a2, uint64_t a3) {
    int32_t v1 = a1; // 0x1ef759
    int64_t v2; // 0x1ef759
    *(int32_t *)a2 = (int32_t)v2 + v1;
    int64_t v3 = __asm_wait(v1 - *(int32_t *)-0x14a5089e); // 0x1ef761
    char * v4 = (char *)(v3 + 6); // 0x1ef768
    *v4 = *v4 + (char)v3;
    return v3 & -256 | a3 / 256 % 256;
}

// Address range: 0x1ef776 - 0x1ef779
int64_t function_1ef776(int64_t a1) {
    // 0x1ef776
    int64_t result; // 0x1ef776
    return result;
}

// Address range: 0x1ef78d - 0x1ef792
int64_t function_1ef78d(void) {
    // 0x1ef78d
    return function_4f295fe8();
}

// Address range: 0x1ef7db - 0x1ef800
int64_t function_1ef7db(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffc8f20ee6(); // 0x1ef7e0
    *(char *)(v1 - 97) = (char)v1;
    int64_t v2 = unknown_ffffffffc24e99ef(); // 0x1ef7e9
    int64_t v3; // 0x1ef7db
    *(int64_t *)v3 = a1;
    *(int64_t *)(v3 - 8) = 106;
    *(int64_t *)(v3 - 16) = -0xc7d9ff5;
    return v2 & 0x1e85089 | 54;
}

// Address range: 0x1ef81c - 0x1ef85d
int64_t function_1ef81c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    int64_t result; // 0x1ef81c
    bool v2; // 0x1ef81c
    if (v2) {
        int32_t v3 = result; // 0x1ef841
        *(int32_t *)-0x5f8a0f96a0fe1752 = v3;
        char * v4 = (char *)((8 * result | 1) + result); // 0x1ef84a
        *v4 = *v4 + (char)(a3 / 256);
        int32_t v5 = *(int32_t *)(a6 - 0x1a59c57f) ^ v3; // 0x1ef84f
        *(char *)((v2 ? -4 : 4) + a1) = __asm_insb((int16_t)a3);
        __asm_out_134(90, v5);
        return (int64_t)*(char *)&v1 | (int64_t)(v5 & -256);
    }
    // 0x1ef81e
    return result;
}

// Address range: 0x1ef860 - 0x1ef865
int64_t function_1ef860(void) {
    // 0x1ef860
    return function_ffffffffe8b0a38d();
}

// Address range: 0x1ef8e3 - 0x1ef8f6
int64_t function_1ef8e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ef8e3
    __asm_in(-49);
    int64_t result = unknown_ffffffffc913f27e(); // 0x1ef8e5
    unsigned char v1 = (char)a4; // 0x1ef8ea
    unsigned char v2 = v1 % 32; // 0x1ef8ea
    if (v2 != 0) {
        char * v3 = (char *)(a1 - 24); // 0x1ef8ea
        *v3 = *v3 >> v2;
    }
    int32_t * v4 = (int32_t *)result; // 0x1ef8ed
    *v4 = *v4 + (int32_t)a3;
    char * v5 = (char *)(a1 - 0x651c2012); // 0x1ef8ef
    *v5 = *v5 | v1;
    return result;
}

// Address range: 0x1ef91d - 0x1ef93b
int64_t function_1ef91d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1ef91d
    int64_t v1; // 0x1ef91d
    int64_t v2 = v1;
    int64_t v3 = v2 & -256 | (int64_t)(*(char *)(a2 - 0x3b6d3b9f) | (char)v2); // 0x1ef91d
    char * v4 = (char *)(a2 - 48); // 0x1ef925
    *v4 = *v4 / 2 | 128 * (char)((char)v1 < 94);
    unknown_3929612e();
    int32_t v5 = v3; // bp-8, 0x1ef92d
    char * v6 = (char *)v3; // 0x1ef930
    *v6 = *v6 + (char)(a4 / 256);
    return (int64_t)&v5;
}

// Address range: 0x1ef9c8 - 0x1ef9d5
int64_t function_1ef9c8(int64_t a1) {
    // 0x1ef9c8
    return unknown_fffffffff24a48d3(a1);
}

// Address range: 0x1ef9da - 0x1ef9df
int64_t function_1ef9da(void) {
    // 0x1ef9da
    return function_59ff4072();
}

// Address range: 0x1ef9fb - 0x1ef9fe
int64_t function_1ef9fb(int64_t a1) {
    // 0x1ef9fb
    int64_t result; // 0x1ef9fb
    return result;
}

// Address range: 0x1efa0d - 0x1efbcd
int64_t function_1efa0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1efa0d
    unknown_ffffffffe2571f13();
    unknown_fffffffff4211f1e();
    bool v1; // 0x1efa0d
    int64_t v2 = (v1 ? -1 : 1) + a1; // 0x1efa23
    int64_t v3; // 0x1efa0d
    int32_t * v4 = (int32_t *)(v3 + 0x800003 + 2 * v2); // 0x1efa26
    *v4 = *v4 + (int32_t)v2;
    return function_c4258(0x1eec79);
}

// Address range: 0x1efbfe - 0x1efc01
int64_t function_1efbfe(void) {
    // 0x1efbfe
    int64_t result; // 0x1efbfe
    return result;
}

// Address range: 0x1efc38 - 0x1efc3e
int64_t function_1efc38(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1efc38
    int64_t v1; // 0x1efc38
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(result - 58); // 0x1efc3a
    *v2 = *v2 + (char)(a4 / 256);
    return result;
}

// Address range: 0x236eb6 - 0x236eb7
int64_t function_236eb6(int64_t a1) {
    // 0x236eb6
    int64_t result; // 0x236eb6
    return result;
}

// Address range: 0x236f13 - 0x236f2d
int64_t function_236f13(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 - 71); // 0x236f13
    *v1 = *v1 + (int32_t)a4;
    bool v2; // 0x236f13
    int64_t v3 = v2 ? -1 : 1; // 0x236f1c
    int64_t result = unknown_ffffffff8d39ac23(v3 + a1, v3 + a2); // 0x236f1d
    *(char *)-0x1706279b = *(char *)-0x1706279b | (char)a5;
    int64_t v4; // 0x236f13
    int32_t * v5 = (int32_t *)(v4 - 42); // 0x236f29
    *v5 = *v5 + (int32_t)result;
    return result;
}

// Address range: 0x236f30 - 0x236f3f
int64_t function_236f30(void) {
    // 0x236f30
    int64_t result; // 0x236f30
    return result;
}

// Address range: 0x236f9e - 0x236faa
int64_t function_236f9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x308e9efa); // 0x236f9e
    int64_t result; // 0x236f9e
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x236fad - 0x236fae
int64_t function_236fad(void) {
    // 0x236fad
    int64_t result; // 0x236fad
    return result;
}

// Address range: 0x236fda - 0x236fe5
int64_t function_236fda(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0x4e3aa10b); // 0x236fda
    int64_t result; // 0x236fda
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x236ff0 - 0x236ff6
int64_t function_236ff0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x236ff0
    int64_t result; // 0x236ff0
    bool v1; // 0x236ff0
    if (true == !v1) {
        result = function_236fad();
    }
    // 0x236ff2
    return result;
}

// Address range: 0x236ff6 - 0x23701e
int64_t function_236ff6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x236ff6
    int64_t v1; // 0x236ff6
    uint64_t v2 = v1;
    char * v3 = (char *)(a2 + 99); // 0x236ff6
    *v3 = *v3 + (char)(v2 / 256);
    unknown_68b67cff();
    int32_t v4 = a1; // 0x236ffe
    int64_t v5 = __asm_wait(v4); // 0x236ffe
    unsigned char v6 = (char)v5; // 0x237001
    int32_t * v7 = (int32_t *)v5; // 0x237003
    *v7 = *v7 - v4 + (int32_t)(-1 - (char)v2 < v6);
    int64_t v8; // 0x236ff6
    *(char *)a3 = *(char *)&v8 + v6;
    int64_t v9; // 0x236ff6
    unsigned char v10 = *(char *)&v9; // 0x23700c
    bool v11; // 0x236ff6
    int64_t v12 = __asm_sti((v11 ? -1 : 1) + a1); // 0x23700d
    __asm_out_135((int16_t)a3 + (int16_t)a2, (char)v12);
    int32_t v13 = *(int32_t *)v12; // 0x237013
    return (int32_t)(256 * v5 + a4 & 0xff00 | a4 & 0xffff00ff) - (int32_t)v12 + (int32_t)(v10 > v6) - v13;
}

// Address range: 0x23704c - 0x237053
int64_t function_23704c(void) {
    // 0x23704c
    return function_20b70e4();
}

// Address range: 0x2372b6 - 0x237360
int64_t function_2372b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    char v2 = __asm_insb((int16_t)a3); // 0x2372b6
    char * v3 = (char *)a1; // 0x2372b6
    *v3 = v2;
    int64_t v4; // 0x2372b6
    int64_t v5 = v4 & 0xfda9f78c | 0x2560873; // 0x2372b8
    int64_t v6; // 0x2372b6
    char v7 = *(char *)&v6 & (char)v5; // 0x2372be
    unsigned char v8 = llvm_ctpop_i8(v7); // 0x2372be
    *(char *)v6 = v7;
    int64_t v9 = v5; // 0x2372c1
    bool v10; // 0x2372b6
    int64_t v11 = 0x4000 * (int64_t)v10 | 256 * (int64_t)v10 | 64 * (int64_t)(v7 == 0) | 128 * (int64_t)(v7 < 0) | 4 * (int64_t)(v8 % 2 == 0) | 1026; // bp-8, 0x2372c3
    int64_t v12; // 0x2372b6
    *v3 = *(char *)&v12;
    int64_t v13 = a2 - 1; // 0x2372c7
    v12 = v13;
    int32_t v14 = a3; // 0x2372c8
    if (v14 >= -0x61c0ffff) {
        if (v14 >= 0x9e3f0001) {
            // 0x2372d6
            return __asm_int3(a1 - 1, v13, v9);
        }
        int64_t v15 = v4 & 0xfef4002c; // 0x237338
        uint32_t v16 = (int32_t)v1 % 32; // 0x237349
        int64_t v17 = v16 == 0 ? v15 : (int64_t)((int32_t)v15 >> v16);
        int32_t * v18 = (int32_t *)(a2 - 113); // 0x23734b
        *v18 = *v18 + v14;
        int64_t v19 = a1 - 2; // 0x237351
        int64_t result = unknown_ffffffffe8a1c859(v19, v12 - 1, (int32_t)v1 >> 31, v17); // 0x237353
        *(int32_t *)-0x33d9fca1 = *(int32_t *)-0x33d9fca1 + (int32_t)v19;
        return result;
    }
    char * v20 = (char *)(v9 + 61); // 0x2372e0
    *v20 = *v20 & (char)a3;
    uint32_t v21 = *(int32_t *)&v9; // 0x2372e3
    uint32_t v22 = v21 + v14; // 0x2372e3
    *(int32_t *)(a3 & 0xffffffff) = v22;
    char * v23 = (char *)(a1 - 0x1ff52c47); // 0x2372ea
    *v23 = *v23 + (char)v4;
    uint64_t v24 = 0xc7772f01 * (int64_t)&v11; // 0x2372f2
    char v25 = (char)((v22 < v21 ? 115 : 116) + v14 + *(int32_t *)&v1); // 0x2372ff
    __asm_out_133(13, v25);
    char * v26 = (char *)(v4 - 0x5ae6d242); // 0x237301
    *v26 = *v26 | v25;
    char * v27 = (char *)((int64_t)*(int32_t *)(v24 & 0xfffffff8) + 0x13d0099); // 0x23730d
    unsigned char v28 = *v27; // 0x23730d
    unsigned char v29 = v28 + (char)(v24 / 256); // 0x23730d
    *v27 = v29;
    uint32_t v30 = __asm_in(123); // 0x237313
    uint32_t v31 = v30 + 0x7fc7b1b4 + (int32_t)(v29 < v28); // 0x237316
    bool v32 = v29 < v28 ? v31 <= v30 : v30 > 0x80384e4b; // 0x237316
    int64_t result2 = ((int64_t)v31 + 20 + (int64_t)v32) % 256 | (int64_t)(v31 & -256); // 0x237320
    int32_t * v33 = (int32_t *)result2; // 0x237323
    *v33 = *v33 + (int32_t)result2;
    return result2;
}

// Address range: 0x237362 - 0x23737b
int64_t function_237362(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x237362
    int64_t v1; // 0x237362
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x237362
    int64_t v3 = v2 ? -4 : 4; // 0x237373
    return function_ffffffff97ed7412(v3 + a1, v3 + a2);
}

// Address range: 0x237398 - 0x23739b
int64_t function_237398(void) {
    // 0x237398
    int64_t result; // 0x237398
    return result;
}

// Address range: 0x2373bf - 0x2373c7
int64_t function_2373bf(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0x4ca6c5eb); // 0x2373bf
    *v1 = *v1 + (int32_t)a1;
    int64_t result; // 0x2373bf
    return result;
}

// Address range: 0x2373df - 0x2373e0
int64_t function_2373df(void) {
    // 0x2373df
    int64_t result; // 0x2373df
    return result;
}

// Address range: 0x2373fe - 0x2373ff
int64_t function_2373fe(int64_t a1) {
    // 0x2373fe
    int64_t result; // 0x2373fe
    return result;
}

// Address range: 0x237417 - 0x237424
int64_t function_237417(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x237417
    int64_t result; // 0x237417
    *(int32_t *)a3 = (int32_t)(result | a1);
    return result;
}

// Address range: 0x237445 - 0x237447
int64_t function_237445(void) {
    // 0x237445
    return function_2373df();
}

// Address range: 0x237448 - 0x237449
int64_t function_237448(int64_t a1) {
    // 0x237448
    int64_t result; // 0x237448
    return result;
}

// Address range: 0x237464 - 0x237467
int64_t function_237464(int64_t a1) {
    // 0x237464
    int64_t result; // 0x237464
    return result;
}

// Address range: 0x2374a7 - 0x2374b4
int64_t function_2374a7(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 114); // 0x2374a7
    int64_t v2; // 0x2374a7
    *v1 = *v1 + (int32_t)v2;
    return function_ffffffffc2b37584();
}

// Address range: 0x2374d5 - 0x2374da
int64_t function_2374d5(void) {
    // 0x2374d5
    return function_ffffffffc996aede();
}

// Address range: 0x23751a - 0x23752b
int64_t function_23751a(int64_t a1, int64_t a2) {
    uint32_t v1 = __asm_in(35); // 0x23751a
    int64_t v2; // 0x23751a
    unsigned char v3 = *(char *)(v2 + (int64_t)(v1 % 256)); // 0x237523
    int32_t * v4 = (int32_t *)(a2 + 35); // 0x237524
    *v4 = 0x40000000 * *v4;
    return (int64_t)(v1 & -256) | (int64_t)v3;
}

// Address range: 0x23753c - 0x23753f
int64_t function_23753c(int64_t a1) {
    // 0x23753c
    int64_t result; // 0x23753c
    return result;
}

// Address range: 0x237581 - 0x237584
int64_t function_237581(void) {
    // 0x237581
    int64_t result; // 0x237581
    return result;
}

// Address range: 0x2375fd - 0x237601
int64_t function_2375fd(int64_t a1) {
    // 0x2375fd
    return __asm_sti(a1);
}

// Address range: 0x237686 - 0x23768b
int64_t function_237686(void) {
    // 0x237686
    return function_24b64ddd();
}

// Address range: 0x2376b4 - 0x2376b5
int64_t function_2376b4(int64_t a1) {
    // 0x2376b4
    int64_t result; // 0x2376b4
    return result;
}

// Address range: 0x2376c1 - 0x2376c6
int64_t function_2376c1(void) {
    // 0x2376c1
    return function_ffffffffb3001172();
}

// Address range: 0x23771f - 0x237724
int64_t function_23771f(void) {
    // 0x23771f
    return function_20b827f();
}

// Address range: 0x237867 - 0x237869
int64_t function_237867(void) {
    // 0x237867
    int64_t v1; // 0x237867
    return function_23786c(v1, v1, v1, v1);
}

// Address range: 0x23786b - 0x23786c
int64_t function_23786b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23786b
    int64_t result; // 0x23786b
    return result;
}

// Address range: 0x23786c - 0x23786e
int64_t function_23786c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23786c
    int64_t result; // 0x23786c
    *(char *)a4 = -(char)result;
    return result;
}

// Address range: 0x237876 - 0x23787f
int64_t function_237876(void) {
    // 0x237876
    int16_t v1; // 0x237876
    return unknown_ffffffff94eee47e(v1);
}
