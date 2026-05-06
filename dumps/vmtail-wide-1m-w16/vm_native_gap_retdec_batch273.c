/*
 * Targeted RetDec C for native executable gap queue batch 273.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1067bf-0x1069bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1069bf-0x106bbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x106bbf-0x106dbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x106dbf-0x106fbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x106fbf-0x1071bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x18ec85-0x18ee85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18f285-0x18f485 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18f485-0x18f685 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1067bf(int64_t a1, int64_t a2);
int64_t function_1067dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_10693c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_106aac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_106bfc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_106d51(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_106eb0(int64_t a1, int64_t a2);
int64_t function_107012(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_18ec85(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_18ecb3(void);
int64_t function_18ed0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18ed2c(void);
int64_t function_18ed6f(void);
int64_t function_18ed7a(void);
int64_t function_18ed85(void);
int64_t function_18ed9d(void);
int64_t function_18edd1(int64_t a1, int64_t a2);
int64_t function_18edd6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18ee81(void);
int64_t function_18f285(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_18f301(int64_t a1);
int64_t function_18f30a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_18f404(int64_t a1, int64_t a2);
int64_t function_18f41e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_18f42b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18f437(void);
int64_t function_18f43a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18f495(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_18f4a5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18f561(void);
int64_t function_18f56b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18f5ae(void);
int64_t function_18f5b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18f618(void);
int64_t function_18f619(void);
int64_t function_18f626(void);
int64_t function_18f63d(int64_t a1);
int64_t function_18f644(void);
int64_t function_18f65b(uint32_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f92fc8e();
int64_t function_caf2a();
int64_t function_fffffffffaa87b03();
int64_t unknown_2c2dfd07();
int64_t unknown_6db04566();
int64_t unknown_ffffffffdffc0091();
int64_t unknown_fffffffffffffff0();

// Address range: 0x1067bf - 0x1067dd
int64_t function_1067bf(int64_t a1, int64_t a2) {
    // 0x1067bf
    int64_t v1; // 0x1067bf
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x1067bf
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return function_caf2a(v1, v1, v1, v1, v1, v1);
}

// Address range: 0x1067dd - 0x10693c
int64_t function_1067dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1067dd
    int64_t v1; // bp-48, 0x1067dd
    v1 = (int64_t)&v1;
    int64_t v2; // 0x1067dd
    return function_caf2a(a1, a2, a3, a4, 0x3a066571, v2);
}

// Address range: 0x10693c - 0x106aac
int64_t function_10693c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 169; // bp-40, 0x1069ef
    int64_t v2 = (int64_t)&v1; // 0x106a18
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x106a4f
    int64_t v4 = v2 + 8; // 0x106a53
    int64_t * v5 = (int64_t *)v4; // 0x106a53
    *v5 = a5;
    *v3 = 0x34388200;
    *(int64_t *)(v2 - 24) = 169;
    *(int64_t *)(v2 + 24) = *v3;
    *v3 = v1;
    *(int64_t *)(v2 - 16) = v1;
    v1 = *v5;
    *v3 = v4;
    int64_t v6; // 0x10693c
    return function_caf2a(a1, a2, a3, a4, v6, v6);
}

// Address range: 0x106aac - 0x106bfc
int64_t function_106aac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x106aac
    int64_t v1; // bp-56, 0x106aac
    int64_t v2 = (int64_t)&v1; // 0x106b4b
    int64_t v3 = v2 + 16; // 0x106b52
    v1 = v3;
    int64_t * v4 = (int64_t *)(v2 + 32); // 0x106b61
    int64_t v5 = *v4; // 0x106b61
    int64_t * v6 = (int64_t *)(v2 + 8); // 0x106b61
    *v6 = v5;
    int64_t * v7 = (int64_t *)(v2 - 8); // 0x106b79
    v1 = 0x6f3cbeac;
    bool v8; // 0x106aac
    *v7 = 0x4000 * (int64_t)(bool)v8 | 2048 * (int64_t)v8 | 1024 * (int64_t)v8 | 512 * (int64_t)v8 | 256 * (int64_t)v8 | 128 * (int64_t)v8 | 64 * (int64_t)v8 | 16 * (int64_t)v8 | (int64_t)v8 | 4 * (int64_t)v8 | 2;
    *(int64_t *)v3 = v1;
    *v7 = 0x70eb3595;
    *(int64_t *)(v2 - 16) = v5;
    *v4 = v1;
    v1 = v3;
    int64_t v9 = *v6; // 0x106bde
    v1 = v9;
    *v7 = v9;
    return function_caf2a(a1, a2, a3, a4, a5, 310);
}

// Address range: 0x106bfc - 0x106d51
int64_t function_106bfc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x106bfc
    bool v1; // 0x106bfc
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x106bfc
    int64_t v3 = 0x21258098; // bp-40, 0x106c73
    int64_t v4 = (int64_t)&v3; // 0x106c9b
    int64_t v5 = v4 + 16; // 0x106ca3
    int64_t * v6 = (int64_t *)v5; // 0x106ca3
    int64_t v7 = *v6; // 0x106ca3
    int64_t * v8 = (int64_t *)(v4 - 8); // 0x106ca3
    int64_t * v9 = (int64_t *)(v4 - 16); // 0x106ca7
    *v8 = a6;
    *v9 = v2;
    *(int64_t *)(v4 - 24) = v2;
    int64_t * v10 = (int64_t *)(v4 + 8); // 0x106ce8
    *v10 = *v9;
    *v9 = v7;
    *v8 = v7;
    *(int64_t *)(v4 + 32) = v3;
    int64_t v11 = *v10; // 0x106d13
    v3 = v11;
    *v8 = v11;
    *v10 = *v6;
    v3 = v5;
    int64_t v12; // 0x106bfc
    return function_caf2a(a1, a2, v12, a4, a5, *v8);
}

// Address range: 0x106d51 - 0x106eb0
int64_t function_106d51(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x106d51
    int64_t v1; // 0x106d51
    bool v2; // 0x106d51
    return function_caf2a(a1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2, a3, a4, a5, v1);
}

// Address range: 0x106eb0 - 0x107012
int64_t function_106eb0(int64_t a1, int64_t a2) {
    // 0x106eb0
    bool v1; // 0x106eb0
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x106eb0
    int64_t v3 = v2; // bp-48, 0x106f36
    int64_t v4 = (int64_t)&v3; // 0x106f71
    int64_t * v5 = (int64_t *)(v4 - 8); // 0x106f79
    *v5 = 0x6e7aedcc;
    *(int64_t *)(v4 - 16) = 0x623f3d68;
    *(int64_t *)(v4 - 24) = v2;
    int64_t * v6 = (int64_t *)(v4 + 8); // 0x106f8a
    *v6 = *v5;
    *v5 = a2;
    *v5 = 0x5bf46728;
    *(int64_t *)(v4 + 32) = v3;
    int64_t v7 = *v6; // 0x106fd2
    v3 = v7;
    *v5 = v7;
    v3 = *(int64_t *)(v4 + 16);
    *v6 = v4 + 24;
    int64_t v8; // 0x106eb0
    return function_caf2a(a1, *v5, v8, v8, v8, v8);
}

// Address range: 0x107012 - 0x10715e
int64_t function_107012(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x4f55ff22; // bp-40, 0x107088
    int64_t v2 = 0x105028; // bp-48, 0x1070b9
    int64_t v3 = (int64_t)&v2; // 0x107118
    int64_t v4 = *(int64_t *)(v3 + 8); // 0x107143
    v2 = v4;
    *(int64_t *)(v3 - 8) = v4;
    int64_t v5; // 0x107012
    return function_caf2a(a1, a2, a3, a4, (int64_t)&v1, v5);
}

// Address range: 0x18ec85 - 0x18ecae
int64_t function_18ec85(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 20); // 0x18ec85
    *v1 = *v1 + (char)(a3 / 256);
    uint64_t v2 = unknown_ffffffffdffc0091() & 0xffffffff ^ 0x2dd68f07; // 0x18ec95
    int64_t v3; // 0x18ec85
    unsigned char v4 = *(char *)(v2 % 256 + v3); // 0x18eca1
    int64_t v5 = v2 & 0xffffff00; // 0x18eca1
    *(char *)(v5 | (int64_t)v4) = (char)(v2 / 256);
    return v5 | (int64_t)(*(char *)(v3 - 0x1f1ba743) ^ v4);
}

// Address range: 0x18ecb3 - 0x18ecb4
int64_t function_18ecb3(void) {
    // 0x18ecb3
    int64_t result; // 0x18ecb3
    return result;
}

// Address range: 0x18ed0c - 0x18ed19
int64_t function_18ed0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18ed0c
    return (int64_t)(-40 * *(int32_t *)(2 * a1 + 0x639b249e));
}

// Address range: 0x18ed2c - 0x18ed2d
int64_t function_18ed2c(void) {
    // 0x18ed2c
    int64_t result; // 0x18ed2c
    return result;
}

// Address range: 0x18ed6f - 0x18ed70
int64_t function_18ed6f(void) {
    // 0x18ed6f
    int64_t result; // 0x18ed6f
    return result;
}

// Address range: 0x18ed7a - 0x18ed7b
int64_t function_18ed7a(void) {
    // 0x18ed7a
    int64_t result; // 0x18ed7a
    return result;
}

// Address range: 0x18ed85 - 0x18ed87
int64_t function_18ed85(void) {
    // 0x18ed85
    return function_18ed7a();
}

// Address range: 0x18ed9d - 0x18ed9f
int64_t function_18ed9d(void) {
    // 0x18ed9d
    return function_18ed6f();
}

// Address range: 0x18edd1 - 0x18edd4
int64_t function_18edd1(int64_t a1, int64_t a2) {
    // 0x18edd1
    int64_t result; // 0x18edd1
    return result;
}

// Address range: 0x18edd6 - 0x18ee03
int64_t function_18edd6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18edd6
    int64_t v1; // 0x18edd6
    char v2 = v1; // 0x18edd6
    __asm_out_134(-52, v2);
    unsigned char v3 = *(char *)-0x174e8f4f; // 0x18edd8
    *(char *)-0x174e8f4f = v3 / 128 | 2 * v3;
    char v4 = v1;
    char v5 = v2 + v4; // 0x18eddf
    *(char *)a3 = v5;
    int64_t result = unknown_6db04566(); // 0x18ede1
    if (v5 < 0 == ((v5 ^ v4) & (v5 ^ v2)) < 0) {
        // 0x18edec
        return result;
    }
    // 0x18ee01
    return result & -0xff01 | (int64_t)&g2;
}

// Address range: 0x18ee81 - 0x18ee82
int64_t function_18ee81(void) {
    // 0x18ee81
    int64_t result; // 0x18ee81
    return result;
}

// Address range: 0x18f285 - 0x18f2fd
int64_t function_18f285(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int16_t v1 = a3; // 0x18f286
    int64_t v2; // 0x18f285
    __asm_out(v1, (char)v2);
    bool v3; // 0x18f285
    if (a4 != 1 == v3) {
        // 0x18f2f0
        return function_fffffffffaa87b03(v2 & 0xffffffff);
    }
    // 0x18f28c
    *(char *)0x7ddae993 = *(char *)0x7ddae993 + (char)(v2 / 256);
    __asm_out_133(v1, (int32_t)v2);
    *(char *)a2 = (char)a3;
    return v2 ^ 142;
}

// Address range: 0x18f301 - 0x18f304
int64_t function_18f301(int64_t a1) {
    // 0x18f301
    int64_t result; // 0x18f301
    return result;
}

// Address range: 0x18f30a - 0x18f3c6
int64_t function_18f30a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a3;
    *(char *)a3 = v1 / 128 | 2 * v1;
    int64_t v2 = 0x532a3000; // bp-8, 0x18f38f
    int64_t v3; // 0x18f30a
    int32_t * v4 = (int32_t *)(v3 - 104 + v3); // 0x18f3a1
    uint32_t v5 = *v4; // 0x18f3a1
    uint32_t v6 = v5 + (int32_t)a2; // 0x18f3a1
    *v4 = v6;
    v2 = a2;
    int64_t v7 = unknown_fffffffffffffff0(); // 0x18f3a6
    char v8 = v7; // 0x18f3a8
    *(char *)a1 = v8;
    if (a4 == 0) {
        if ((256 * ((int64_t)(v6 < v5) + a3) & 0xff00 || v3 % 256) == 1) {
            // 0x18f35e
            return v7 & -256 | 159;
        }
        // 0x18f36b
        __asm_out_135(70, (int32_t)((v7 + 228) % 256 | v7 & 0xffffff00));
        return __asm_wait();
    }
    int16_t v9 = a3; // 0x18f3ab
    __asm_out(v9, v8);
    int64_t result = (int64_t)*(int32_t *)0x32f4ca00013d94a0; // 0x18f3ac
    int32_t v10 = *(int32_t *)(v3 + 0x50091811); // 0x18f3b5
    int64_t * v11 = (int64_t *)(int64_t)((int32_t)(int64_t)&v2 - v10); // 0x18f3bb
    *v11 = result;
    __asm_outsd(v9, *(int32_t *)*v11);
    return result;
}

// Address range: 0x18f404 - 0x18f409
int64_t function_18f404(int64_t a1, int64_t a2) {
    // 0x18f404
    int64_t v1; // 0x18f404
    *(char *)a1 = (char)(v1 / 256 | v1);
    return v1 ^ 253;
}

// Address range: 0x18f41e - 0x18f423
int64_t function_18f41e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18f41e
    int64_t result; // 0x18f41e
    bool v1; // 0x18f41e
    *(char *)a3 = (char)result + (char)a4 + (char)v1;
    return result;
}

// Address range: 0x18f42b - 0x18f436
int64_t function_18f42b(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 - 0x492bbb42); // 0x18f42b
    *v1 = *v1 + (int32_t)a2;
    int64_t result; // 0x18f42b
    return result;
}

// Address range: 0x18f437 - 0x18f438
int64_t function_18f437(void) {
    // 0x18f437
    int64_t result; // 0x18f437
    return result;
}

// Address range: 0x18f43a - 0x18f466
int64_t function_18f43a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18f43a
    bool v1; // 0x18f43a
    if (v1) {
        // 0x18f43c
        return __asm_hlt();
    }
    char v2 = *(char *)0x68a9bb61; // 0x18f45a
    int64_t result; // 0x18f43a
    *(char *)0x68a9bb61 = v2 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x18f495 - 0x18f4a3
int64_t function_18f495(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x18f495
    int64_t v1; // 0x18f495
    float80_t v2; // 0x18f495
    *(float32_t *)(8 * v1 + a2) = (float32_t)v2;
    *(char *)(2 * a1 + a3) = (char)v1;
    int64_t result; // 0x18f495
    if ((char)(a4 / 256) == (char)(a3 / 256)) {
        result = function_18f437();
    }
    // 0x18f49f
    return result;
}

// Address range: 0x18f4a5 - 0x18f4aa
int64_t function_18f4a5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18f4a5
    int64_t result; // 0x18f4a5
    *(char *)a2 = 2 * (char)result;
    return result;
}

// Address range: 0x18f561 - 0x18f562
int64_t function_18f561(void) {
    // 0x18f561
    int64_t result; // 0x18f561
    return result;
}

// Address range: 0x18f56b - 0x18f59b
int64_t function_18f56b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18f56b
    int64_t result; // 0x18f56b
    bool v1; // 0x18f56b
    if (a4 != 1 != v1) {
        // 0x18f56d
        return result;
    }
    int32_t * v2 = (int32_t *)(result + 0x4e033e00); // 0x18f594
    *v2 = *v2 - 1;
    return result;
}

// Address range: 0x18f5ae - 0x18f5af
int64_t function_18f5ae(void) {
    // 0x18f5ae
    int64_t result; // 0x18f5ae
    return result;
}

// Address range: 0x18f5b1 - 0x18f616
int64_t function_18f5b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18f5b1
    int64_t v1; // 0x18f5b1
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a1 + 0x22f8013d); // 0x18f5f1
    *v3 = *v3 ^ (int32_t)a3;
    if (a4 == 0) {
        if ((int32_t)((v2 + 182) % 256 || v2 & 0xffffff00) + 0x5702ad0c != (int32_t)((char)v2 > 73)) {
            function_18f561();
        }
        // 0x18f5d1
        return a3 & 0xffffffff;
    }
    int64_t result = unknown_2c2dfd07(); // 0x18f601
    char v4 = *(char *)0x53aac13; // 0x18f60c
    *(char *)0x53aac13 = v4 + (char)((uint64_t)v1 / 256);
    return result;
}

// Address range: 0x18f618 - 0x18f619
int64_t function_18f618(void) {
    // 0x18f618
    int64_t result; // 0x18f618
    return result;
}

// Address range: 0x18f619 - 0x18f61a
int64_t function_18f619(void) {
    // 0x18f619
    int64_t result; // 0x18f619
    return result;
}

// Address range: 0x18f626 - 0x18f636
int64_t function_18f626(void) {
    // 0x18f626
    int64_t v1; // 0x18f626
    uint64_t v2 = v1;
    unsigned char v3 = (char)(v2 / 256); // 0x18f626
    unsigned char v4 = v3 + (char)v1; // 0x18f626
    int64_t v5 = __asm_wait(); // 0x18f628
    char v6 = __asm_in(96); // 0x18f62a
    char v7 = *(char *)((256 * (int64_t)v4 | v2 & -0xff01) + 47); // 0x18f62c
    if ((char)(v4 < v3) + (char)v2 - v7 >= 0) {
        // 0x18f687
        return v5 & -256 | (int64_t)v6;
    }
    // 0x18f631
    return function_1f92fc8e();
}

// Address range: 0x18f63d - 0x18f644
int64_t function_18f63d(int64_t a1) {
    // 0x18f63d
    int64_t v1; // 0x18f63d
    return function_18f65b((int32_t)v1 + (int32_t)a1, v1, v1, v1);
}

// Address range: 0x18f644 - 0x18f645
int64_t function_18f644(void) {
    // 0x18f644
    int64_t result; // 0x18f644
    return result;
}

// Address range: 0x18f65b - 0x18f66a
int64_t function_18f65b(uint32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18f65b
    int64_t v1; // 0x18f65b
    int64_t v2; // 0x18f65b
    if ((int64_t)*(char *)((v2 & 0xffffffff) - 0x4160ba6f) >= (int64_t)a1) {
        v1 = function_18f619();
    }
    // 0x18f665
    return v1 & -256 | 137;
}
