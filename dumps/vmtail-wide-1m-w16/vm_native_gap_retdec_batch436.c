/*
 * Targeted RetDec C for native executable gap queue batch 436.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1b67ce-0x1b69ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b69ce-0x1b6bce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b6bce-0x1b6dce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b6dce-0x1b6fce rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fcc1e-0x2fce1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fce1e-0x2fd01e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fd21e-0x2fd41e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fd41e-0x2fd61e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_12f1365();
int64_t function_1b67ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1b68c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1b6a09(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1b6b5e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1b6cdc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1b6e8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2fcc1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2fcc9f(void);
int64_t function_2fccb0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2fccfb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2fcd2e(int64_t a1);
int64_t function_2fcd3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2fcd69(int64_t a1);
int64_t function_2fcdc9(void);
int64_t function_2fcdea(void);
int64_t function_2fce04(int64_t a1);
int64_t function_2fce29(int64_t a1, int64_t a2);
int64_t function_2fce55(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2fce7a(int64_t a1, int64_t a2);
int64_t function_2fce90(void);
int64_t function_2fce98(void);
int64_t function_2fcea9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2fcf22(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2fcfa3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2fd21e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2fd240(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2fd2ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2fd30b(void);
int64_t function_2fd318(int64_t a1, int64_t a2);
int64_t function_2fd377(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2fd3bd(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2fd472(void);
int64_t function_2fd4a8(int64_t a1, int64_t a2);
int64_t function_2fd4b9(void);
int64_t function_2fd4bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_2fd4fb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2fd59a(void);
int64_t function_2fd5f4(void);
int64_t function_cf3c7();
int64_t function_ffffffffc933ce43();
int64_t function_fffffffff6c20788();
int64_t unknown_16cd276();
int64_t unknown_36a4ccb8();
int64_t unknown_3e31b661();
int64_t unknown_68f0b708();
int64_t unknown_6924a442();
int64_t unknown_ffffffff8a73bac1();
int64_t unknown_ffffffffcb30875b();

// Address range: 0x1b67ce - 0x1b68c5
int64_t function_1b67ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1b67ce
    int64_t v1; // 0x1b67ce
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t v3; // 0x1b67ce
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return function_cf3c7(a1, a5, a3, a4, v1, v1, v1);
}

// Address range: 0x1b68c5 - 0x1b6a09
int64_t function_1b68c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1b68c5
    int64_t v1; // 0x1b68c5
    return function_cf3c7(a1, a2, a3, a4, a5, a6, v1);
}

// Address range: 0x1b6a09 - 0x1b6b5e
int64_t function_1b6a09(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1b6a09
    int64_t v1; // 0x1b6a09
    bool v2; // 0x1b6a09
    return function_cf3c7(v1, a2, a3, a4, a5, a6, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x1b6b5e - 0x1b6cdc
int64_t function_1b6b5e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1b6b5e
    bool v1; // 0x1b6b5e
    int64_t v2 = 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x1b6b5e
    int64_t v3 = v2; // bp-48, 0x1b6be8
    int64_t v4 = (int64_t)&v3; // 0x1b6bf4
    int64_t * v5 = (int64_t *)(v4 + 24); // 0x1b6c2c
    int64_t v6 = *v5; // 0x1b6c2c
    *(int64_t *)(v4 - 16) = v6;
    v3 = v2;
    *(int64_t *)(v4 - 8) = a6;
    int64_t * v7 = (int64_t *)(v4 + 8); // 0x1b6c5c
    *v5 = v3;
    v3 = v4;
    *v7 = v6;
    int64_t * v8 = (int64_t *)(v4 + 16); // 0x1b6c84
    *(int64_t *)(v4 + 48) = *v8;
    *v7 = a4;
    *v8 = v4 + 32;
    return function_cf3c7(a1, a2, a3, a4, a5, a6, 0x22b9e217);
}

// Address range: 0x1b6cdc - 0x1b6e8c
int64_t function_1b6cdc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1b6cdc
    bool v1; // 0x1b6cdc
    return function_cf3c7(a1, a2, a3, a4, a5, a6, 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2);
}

// Address range: 0x1b6e8c - 0x1b6fc3
int64_t function_1b6e8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4; // bp-32, 0x1b6ec0
    int64_t v2 = (int64_t)&v1; // 0x1b6f88
    *(int64_t *)(v2 - 16) = a4;
    *(int64_t *)(v2 - 8) = v2 + 8;
    return function_cf3c7(a1, a2, a3, a4, a5, a6, a4);
}

// Address range: 0x2fcc1e - 0x2fcc31
int64_t function_2fcc1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 + 0x13d0087); // 0x2fcc1e
    *v1 = *v1 + (int32_t)a4;
    __asm_int(90);
    int64_t result; // 0x2fcc1e
    return result;
}

// Address range: 0x2fcc9f - 0x2fcca1
int64_t function_2fcc9f(void) {
    // 0x2fcc9f
    int64_t v1; // 0x2fcc9f
    return function_2fccfb(v1, v1, v1, v1);
}

// Address range: 0x2fccb0 - 0x2fccbe
int64_t function_2fccb0(int64_t a1, int64_t a2, int64_t a3) {
    char v1 = *(char *)-0x63b04a44; // 0x2fccb5
    int64_t result; // 0x2fccb0
    *(char *)-0x63b04a44 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x2fccfb - 0x2fcd24
int64_t function_2fccfb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2fccfb
    int64_t v1; // 0x2fccfb
    int32_t v2 = v1; // 0x2fccfd
    *(int32_t *)a1 = v2;
    __asm_out(94, (char)v1);
    int64_t v3; // 0x2fccfb
    __asm_outsd((int16_t)a3, *(int32_t *)&v3);
    int64_t v4 = unknown_ffffffffcb30875b(); // 0x2fcd07
    int64_t v5; // 0x2fccfb
    *(int32_t *)a4 = *(int32_t *)&v5 / 2 | 0x80000000 * (int32_t)(v2 < 0x82610001);
    int64_t v6 = v4 & -256 | 176; // 0x2fcd15
    int32_t * v7 = (int32_t *)v6; // 0x2fcd17
    int32_t v8 = v6; // 0x2fcd17
    *v7 = *v7 + v8;
    int32_t v9 = *(int32_t *)((v1 & -256 | 23) + 80 + (int64_t)(v2 >> 31)); // 0x2fcd1a
    return v9 & v8;
}

// Address range: 0x2fcd2e - 0x2fcd3c
int64_t function_2fcd2e(int64_t a1) {
    // 0x2fcd2e
    int64_t result; // 0x2fcd2e
    uint64_t v1 = result;
    *(char *)a1 = (char)result;
    *(char *)0x7a16eb36 = *(char *)0x7a16eb36 + (char)(v1 / 256);
    char * v2 = (char *)(result + 96); // 0x2fcd35
    *v2 = *v2 + (char)v1;
    return result;
}

// Address range: 0x2fcd3c - 0x2fcd58
int64_t function_2fcd3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2fcd3c
    unknown_6924a442();
    char * v1 = (char *)(a4 + 0x4faba8bc); // 0x2fcd41
    *v1 = *v1 + (char)a4;
    char * v2 = (char *)(a4 + 20); // 0x2fcd4d
    *v2 = *v2 | 61;
    int64_t v3; // 0x2fcd3c
    return v3 & 0xffffffff;
}

// Address range: 0x2fcd69 - 0x2fcd74
int64_t function_2fcd69(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 0x3aba061a); // 0x2fcd69
    int32_t v2 = *v1; // 0x2fcd69
    *v1 = 0x8000 * v2;
    int64_t v3 = __asm_int3(a1); // 0x2fcd70
    int64_t v4; // 0x2fcd69
    int32_t v5 = *(int32_t *)&v4; // 0x2fcd71
    return (int32_t)((v2 & 0x20000) != 0) - v5 + (int32_t)v3;
}

// Address range: 0x2fcdc9 - 0x2fcddb
int64_t function_2fcdc9(void) {
    // 0x2fcdc9
    __asm_in(-124);
    char v1 = *(char *)-0x23f4f029; // 0x2fcdd0
    int64_t v2; // 0x2fcdc9
    *(char *)-0x23f4f029 = v1 + (char)((uint64_t)v2 / 256);
    return function_ffffffffc933ce43();
}

// Address range: 0x2fcdea - 0x2fcdeb
int64_t function_2fcdea(void) {
    // 0x2fcdea
    int64_t result; // 0x2fcdea
    return result;
}

// Address range: 0x2fce04 - 0x2fce13
int64_t function_2fce04(int64_t a1) {
    // 0x2fce04
    int64_t v1; // 0x2fce04
    *(int32_t *)a1 = 2 * (int32_t)v1;
    int64_t v2 = __asm_int1(); // 0x2fce06
    __asm_rcl(*(char *)(v1 + 0x6e29ee3c));
    int64_t v3; // 0x2fce04
    *(char *)v2 = *(char *)&v3 + (char)v1;
    return function_2fcdea();
}

// Address range: 0x2fce29 - 0x2fce2e
int64_t function_2fce29(int64_t a1, int64_t a2) {
    // 0x2fce29
    int64_t result; // 0x2fce29
    *(char *)a2 = 2 * (char)result;
    return result;
}

// Address range: 0x2fce55 - 0x2fce78
int64_t function_2fce55(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2fce55
    int64_t v1; // 0x2fce55
    int32_t * v2 = (int32_t *)(v1 - 0x465be89c); // 0x2fce55
    *v2 = -*v2;
    int64_t v3 = unknown_3e31b661(); // 0x2fce5b
    char v4 = *(char *)-0x3d3fd298; // 0x2fce61
    *(char *)-0x3d3fd298 = v4 + (char)((uint64_t)v1 / 256);
    int32_t * v5 = (int32_t *)(a1 + 0x963c4af); // 0x2fce71
    *v5 = *v5 + (int32_t)a4;
    int64_t v6; // 0x2fce55
    return v3 & -256 | (int64_t)*(char *)&v6;
}

// Address range: 0x2fce7a - 0x2fce8d
int64_t function_2fce7a(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0x7df9ffd4); // 0x2fce7a
    int64_t v2; // 0x2fce7a
    *v1 = *v1 + (int32_t)v2;
    return function_fffffffff6c20788();
}

// Address range: 0x2fce90 - 0x2fce92
int64_t function_2fce90(void) {
    // 0x2fce90
    int64_t result; // 0x2fce90
    return result;
}

// Address range: 0x2fce98 - 0x2fce99
int64_t function_2fce98(void) {
    // 0x2fce98
    int64_t result; // 0x2fce98
    return result;
}

// Address range: 0x2fcea9 - 0x2fcf22
int64_t function_2fcea9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2fcea9
    int64_t result; // 0x2fcea9
    uint32_t v1 = (int32_t)result; // 0x2fcea9
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    uint32_t v2 = (int32_t)a3; // 0x2fceaf
    int32_t v3 = a2; // 0x2fceaf
    int32_t v4 = v1 < 0x6185201; // 0x2fceaf
    uint32_t v5 = v2 + v3; // 0x2fceaf
    int32_t v6 = v5 + v4; // 0x2fceaf
    int32_t v7 = v6 + v4; // 0x2fceaf
    if (v6 < 0 == ((v7 ^ v2) & (v7 ^ v3)) < 0 == (v6 != 0)) {
        // 0x2fcf19
        float80_t v8; // 0x2fcea9
        *(int32_t *)-0x6aab72e3 = (int32_t)v8;
        return result;
    }
    int64_t v9 = v6; // 0x2fceaf
    if (a4 == 1 || v6 == 0) {
        int32_t * v10 = (int32_t *)(v9 + 71); // 0x2fceb5
        *v10 = (int32_t)(v1 < 0x6185201 ? v6 <= v2 : v5 < v2) + v1 + *v10;
        int64_t v11 = unknown_ffffffff8a73bac1(); // 0x2fcebb
        int32_t * v12 = (int32_t *)v11; // 0x2fcec0
        *v12 = *v12 + (int32_t)result;
        *(char *)-0x1740ee37 = *(char *)-0x1740ee37 + (char)(result / 256);
        return 0x10000 * (int32_t)v11 - 0x22d90000 >> 16;
    }
    int64_t v13; // 0x2fcea9
    if (v6 < 0 != ((v7 ^ v2) & (v7 ^ v3)) < 0) {
        v13 = function_2fce98();
    }
    int32_t * v14 = (int32_t *)(v9 - 0x3ebf5475); // 0x2fcf01
    *v14 = *v14 + v3;
    int32_t * v15 = (int32_t *)(a2 - 111); // 0x2fcf07
    uint32_t v16 = *v15; // 0x2fcf07
    *v15 = v16 / 2 | 0x80000000 * v16;
    return (v13 & 0xffffffff ^ 0x7a09e043) + result;
}

// Address range: 0x2fcf22 - 0x2fcfa2
int64_t function_2fcf22(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2fcf22
    int64_t result; // 0x2fcf22
    if ((*(int32_t *)0x7effcf29 || (int32_t)a1) >= 1) {
        // 0x2fcf2b
        return result;
    }
    int32_t * v1 = (int32_t *)(8 * result - 0x278b42ed); // 0x2fcf9b
    *v1 = *v1 + (int32_t)a2;
    return result;
}

// Address range: 0x2fcfa3 - 0x2fcfaa
int64_t function_2fcfa3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2fcfa3
    int64_t result; // 0x2fcfa3
    int32_t * v1 = (int32_t *)(result + 96); // 0x2fcfa3
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x2fd21e - 0x2fd23c
int64_t function_2fd21e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(2 * a5 + a4); // 0x2fd223
    uint32_t v2 = *v1; // 0x2fd223
    *v1 = v2 + 0x2b9bfec3;
    char * v3 = (char *)(2 * a2 - 0x4b76eebd); // 0x2fd22c
    unsigned char v4 = *v3; // 0x2fd22c
    char v5 = v2 < 0xd464013d; // 0x2fd22c
    int64_t result; // 0x2fd21e
    unsigned char v6 = v5 + (char)result; // 0x2fd22c
    char v7 = v4 - v6; // 0x2fd22c
    bool v8 = v2 < 0xd464013d ? v6 != -1 | v4 < v7 - v5 : v4 < v6; // 0x2fd22c
    *v3 = v7;
    char * v9 = (char *)(a4 + 57); // 0x2fd234
    *v9 = *v9 + (char)a3 + (char)v8;
    return result;
}

// Address range: 0x2fd240 - 0x2fd2a2
int64_t function_2fd240(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2fd240
    int64_t v1; // 0x2fd240
    int32_t v2 = *(int32_t *)(v1 - 0x79d8cd68); // 0x2fd24d
    char * v3 = (char *)(v1 + 0xec66ff); // 0x2fd253
    *v3 = *v3 & 2 * (char)v1;
    int16_t v4 = a3; // 0x2fd26d
    __asm_in_133(v4);
    unknown_16cd276();
    int32_t v5 = *(int32_t *)0xfb520778 ^ -0x7326547e; // 0x2fd27d
    *(int32_t *)0xfb520778 = v5;
    uint32_t v6 = -0x1ec349d0 * v5; // 0x2fd284
    __asm_out_134(v4, (char)v6);
    float80_t v7; // 0x2fd240
    *(int16_t *)(v1 - 117) = (int16_t)v7;
    char * v8 = (char *)((int64_t)(v2 + (int32_t)a2) - 64); // 0x2fd29c
    *v8 = *v8 & (char)(v6 / 256);
    return (int64_t)(v6 & -256) | (int64_t)*(char *)-0x6f6e79dff1f5483;
}

// Address range: 0x2fd2ac - 0x2fd2c8
int64_t function_2fd2ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2fd2ac
    int64_t v1; // 0x2fd2ac
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 - 0x1701ff4f;
    return (int64_t)*(int32_t *)0xe8fe00b1;
}

// Address range: 0x2fd30b - 0x2fd30c
int64_t function_2fd30b(void) {
    // 0x2fd30b
    int64_t result; // 0x2fd30b
    return result;
}

// Address range: 0x2fd318 - 0x2fd31f
int64_t function_2fd318(int64_t a1, int64_t a2) {
    // 0x2fd318
    int64_t result; // 0x2fd318
    return result;
}

// Address range: 0x2fd377 - 0x2fd394
int64_t function_2fd377(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = function_2fd30b(); // 0x2fd379
    unsigned char v2 = *(char *)0x727900687253600a; // 0x2fd388
    int64_t v3; // 0x2fd377
    int32_t v4 = *(int32_t *)(256 * v3 & 0xff00 | a4); // 0x2fd391
    return v4 + (int32_t)((int32_t)v1 < 0xc3bc0001) + (int32_t)(v1 & 0xffffff00 | (int64_t)v2);
}

// Address range: 0x2fd3bd - 0x2fd40f
int64_t function_2fd3bd(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2fd3bd
    bool v1; // 0x2fd3bd
    int64_t v2 = v1 ? -4 : 4; // 0x2fd3bd
    int64_t v3; // 0x2fd3bd
    int64_t v4 = (int64_t)*(int32_t *)(v3 - 32); // 0x2fd3c1
    unsigned char v5 = (char)v3 + (char)a4; // 0x2fd3c4
    char v6 = __asm_insb((int16_t)a3); // 0x2fd3c6
    char * v7 = (char *)(v2 + a1 & -256 | 198); // 0x2fd3c6
    *v7 = v6;
    char * v8 = (char *)(a3 - 47); // 0x2fd3c7
    int64_t v9; // 0x2fd3bd
    *v8 = *v8 + (char)(v9 / 256);
    int64_t v10 = v9;
    *(int32_t *)v10 = (int32_t)v10;
    uint32_t v11 = (int32_t)v9; // 0x2fd3cd
    unsigned char v12 = v5 % 32; // 0x2fd3df
    if (v12 != 0) {
        unsigned char v13 = *(char *)&v9; // 0x2fd3df
        *(char *)v9 = (char)(v11 < 0x95f8f801) << 8 - v12 | v13 >> v12 | (char)((int16_t)v13 << (int16_t)(9 - v12));
    }
    unsigned char v14 = *v7; // 0x2fd3e3
    unsigned char v15 = v14 + (char)(a3 / 256); // 0x2fd3e3
    *v7 = v15;
    int64_t v16 = v9; // 0x2fd3e5
    int64_t result = v16 & -256 | (int64_t)(v15 < v14) | 2 * v16 & 254; // 0x2fd3e5
    v9 = result;
    if ((a4 & -256 || (int64_t)v5) < v4) {
        // 0x2fd3fb
        return result;
    }
    uint32_t v17 = v11 != -0x6a0707ff ? *(int32_t *)(v4 + 0x1e80753) : (int32_t)(v2 + a2); // 0x2fd3d2
    uint32_t v18 = *(int32_t *)(int64_t)v17; // 0x2fd40b
    unsigned char v19 = *(char *)((int64_t)(v18 % 256) + v4); // 0x2fd40c
    return (int64_t)(v18 & -256) | (int64_t)v19;
}

// Address range: 0x2fd472 - 0x2fd475
int64_t function_2fd472(void) {
    // 0x2fd472
    int64_t result; // 0x2fd472
    return result;
}

// Address range: 0x2fd4a8 - 0x2fd4b9
int64_t function_2fd4a8(int64_t a1, int64_t a2) {
    // 0x2fd4a8
    int64_t v1; // 0x2fd4a8
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    float80_t v3; // 0x2fd4a8
    *(int16_t *)(a2 - 0x35382b64) = (int16_t)v3;
    unknown_36a4ccb8();
    return function_2fd4bf(a1, a2, v1, v1, (int64_t)&g1);
}

// Address range: 0x2fd4b9 - 0x2fd4bf
int64_t function_2fd4b9(void) {
    // 0x2fd4b9
    return __asm_hlt();
}

// Address range: 0x2fd4bf - 0x2fd4e8
int64_t function_2fd4bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    int64_t v1 = a4 - 1; // 0x2fd4d1
    int64_t v2; // 0x2fd4bf
    if (v1 == 0) {
        // 0x2fd4e6
        return v2 & -0x10000;
    }
    char * v3 = (char *)(int64_t)((int32_t)v2 >> 31); // 0x2fd4d5
    *v3 = *v3 + (char)v1;
    *(char *)0x47ae10de = *(char *)0x47ae10de + (char)(a5 / 256);
    return 0x3a83ec00;
}

// Address range: 0x2fd4fb - 0x2fd517
int64_t function_2fd4fb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t result = unknown_68f0b708(); // 0x2fd502
    char * v1 = (char *)(a3 + 0x9ad802); // 0x2fd507
    *v1 = *v1 + (char)(a3 / 256);
    return result;
}

// Address range: 0x2fd59a - 0x2fd5a4
int64_t function_2fd59a(void) {
    // 0x2fd59a
    __asm_in(-20);
    return function_12f1365();
}

// Address range: 0x2fd5f4 - 0x2fd5f6
int64_t function_2fd5f4(void) {
    // 0x2fd5f4
    int64_t result; // 0x2fd5f4
    return result;
}
