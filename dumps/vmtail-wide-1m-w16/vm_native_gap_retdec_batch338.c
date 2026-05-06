/*
 * Targeted RetDec C for native executable gap queue batch 338.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x10c1bf-0x10c3bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x10c3bf-0x10c5bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x10c5bf-0x10c7bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x10c7bf-0x10c9bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x439e67-0x43a067 rank=- name=- kind=- bytes=- uncovered=-
 *   0x43a067-0x43a267 rank=- name=- kind=- bytes=- uncovered=-
 *   0x43a467-0x43a667 rank=- name=- kind=- bytes=- uncovered=-
 *   0x43a667-0x43a867 rank=- name=- kind=- bytes=- uncovered=-
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
int64_t __asm_sldt(void);
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

int64_t function_10c1bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_10c20c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_10c39c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_10c4ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_10c67f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_10c7c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_10c945(void);
int64_t function_10c950(void);
int64_t function_2b6ecacb();
int64_t function_38596cba();
int64_t function_39a98ca7();
int64_t function_439e67(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_439f2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_439f4c(void);
int64_t function_43a04a(int64_t a1, int64_t a2);
int64_t function_43a06e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_43a1e9(int64_t a1);
int64_t function_43a1f5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_43a3f2();
int64_t function_43a467(void);
int64_t function_43a474(int64_t a1);
int64_t function_43a48d(int64_t a1);
int64_t function_43a48e(void);
int64_t function_43a510(void);
int64_t function_43a529(void);
int64_t function_43a536(void);
int64_t function_43a542(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_43a6d6(int64_t a1, int64_t a2);
int64_t function_43a751(void);
int64_t function_43a781(int64_t a1);
int64_t function_43a783(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_7adf6e57();
int64_t function_caf2a();
int64_t function_ffffffffcecaf05e();
int64_t unknown_78bdaf14();
int64_t unknown_ffffffff902fb7a8();
int64_t unknown_ffffffff91de66c5();
int64_t unknown_ffffffffabbc0a1f();
int64_t unknown_ffffffffbf7019d0();

// Address range: 0x10c1bf - 0x10c1ec
int64_t function_10c1bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x10c1bf
    unknown_ffffffff91de66c5();
    int32_t * v1 = (int32_t *)(a3 + 50); // 0x10c1c4
    bool v2; // 0x10c1bf
    *v1 = (int32_t)v2 + (int32_t)a1 + *v1;
    char v3 = unknown_ffffffffbf7019d0(); // 0x10c1cf
    *(char *)a1 = v3;
    int64_t v4 = v2 ? -1 : 1; // 0x10c1cf
    int64_t v5 = v4 + a1; // 0x10c1cf
    *(char *)-0x5fed5594 = *(char *)-0x5fed5594 - 3;
    *(char *)v5 = v3;
    return function_ffffffffcecaf05e(v5 + v4);
}

// Address range: 0x10c20c - 0x10c39c
int64_t function_10c20c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x10c20c
    int64_t v1; // 0x10c20c
    int32_t * v2 = (int32_t *)(v1 - 0x1fb52b11);
    char * v3 = (char *)(4 * a1 - 82 + v1);
    char v4 = a4 / 256;
    uint64_t v5 = a6; // 0x10c20c
    int64_t v6; // 0x10c20c
    int64_t v7 = (int64_t)&v6;
    int64_t v8 = v7 - 8; // 0x10c20d
    int64_t * v9 = (int64_t *)v8;
    *v9 = v7;
    v5 = (unknown_78bdaf14() & 0xffffffff | 0x100000000 * v5) % (int64_t)*v2;
    int64_t v10 = unknown_ffffffffabbc0a1f(); // 0x10c219
    char v11 = *v3; // 0x10c21e
    char v12 = v11 + v4; // 0x10c21e
    *v3 = v12;
    while (((v12 ^ v11) & (v12 ^ v4)) < 0) {
        // 0x10c20d
        v7 = v8;
        v8 = v7 - 8;
        v9 = (int64_t *)v8;
        *v9 = v7;
        v5 = (unknown_78bdaf14() & 0xffffffff | 0x100000000 * v5) % (int64_t)*v2;
        v10 = unknown_ffffffffabbc0a1f();
        v11 = *v3;
        v12 = v11 + v4;
        *v3 = v12;
    }
    int32_t * v13 = (int32_t *)(8 * a1 - 0x636df31c + a4); // 0x10c225
    *v13 = *v13 + (int32_t)a4;
    unsigned char v14 = (char)(v5 / 256); // 0x10c22c
    unsigned char v15 = *(char *)(v10 - 0x31fe1736); // 0x10c22c
    char v16 = v14 - v15; // 0x10c22c
    unsigned char v17 = llvm_ctpop_i8(v16); // 0x10c22c
    int64_t * v18 = (int64_t *)(v7 - 16); // 0x10c23a
    bool v19; // 0x10c20c
    *v18 = 0x4000 * (int64_t)v19 | 1024 * (int64_t)v19 | 256 * (int64_t)v19 | (int64_t)(v15 > v14) | 64 * (int64_t)(v16 == 0) | 128 * (int64_t)(v16 < 0) | 16 * (int64_t)(v14 % 16 - v15 % 16 > 15) | 4 * (int64_t)(v17 % 2 == 0) | 2048 * (int64_t)(((v16 ^ v14) & (v15 ^ v14)) < 0) | 2;
    int64_t * v20 = (int64_t *)(v7 - 32); // 0x10c23d
    *v20 = v10 & -256 | (int64_t)!((v15 > v14 | v16 == 0));
    *(int64_t *)(v7 - 24) = 310;
    int64_t v21 = v7 - 40; // 0x10c269
    int64_t * v22 = (int64_t *)v21; // 0x10c26a
    *v22 = 0x800002;
    *v20 = 0x1093ed;
    int64_t v23 = v7 - 48; // 0x10c28c
    int64_t * v24 = (int64_t *)v23; // 0x10c28c
    int64_t * v25 = (int64_t *)(v7 - 56); // 0x10c291
    int64_t * v26 = (int64_t *)(v7 - 64); // 0x10c296
    *v26 = *v20;
    *v24 = 0x3241f5f3;
    *v25 = *v22;
    int64_t v27 = *v9; // 0x10c2c1
    *v24 = v27;
    *v25 = v27;
    *v26 = v23;
    int64_t v28 = *v20; // 0x10c2e5
    *v25 = v28;
    *v26 = v28;
    int64_t * v29 = (int64_t *)(v7 - 72); // 0x10c30a
    *v29 = v27;
    *v24 = v27;
    *v26 = a5;
    *v18 = *v26;
    *v25 = a4;
    *v26 = v21;
    int64_t v30 = *v25; // 0x10c36a
    *v29 = v30;
    *v25 = *v24;
    *v26 = v5;
    *v29 = v23;
    int64_t v31 = *v26; // 0x10c38a
    *(int64_t *)(v7 - 80) = v31;
    return function_caf2a(a1, a2, v31, v30, *v25, v1);
}

// Address range: 0x10c39c - 0x10c4ea
int64_t function_10c39c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x10c39c
    int64_t v1; // bp-32, 0x10c39c
    int64_t v2 = (int64_t)&v1; // 0x10c3fe
    int64_t v3 = v2 - 8; // 0x10c406
    int64_t * v4 = (int64_t *)v3; // 0x10c40e
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x10c413
    *v5 = a2;
    *v4 = v3;
    int64_t v6 = *(int64_t *)(v2 + 32); // 0x10c454
    *v4 = v6;
    *v5 = v6;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x10c45b
    *v7 = v6;
    int64_t v8 = *(int64_t *)(v2 + 16); // 0x10c467
    *v4 = v8;
    *v7 = v8;
    *v5 = v6;
    int64_t * v9 = (int64_t *)(v2 + 8); // 0x10c486
    *v9 = v6;
    *v4 = 0x40179145;
    *v7 = v8;
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = v1;
    *v5 = v2;
    int64_t v10 = *v9; // 0x10c4cf
    v1 = v10;
    *v4 = v10;
    return function_caf2a(a1, *v4, a3, a4, a5, a6);
}

// Address range: 0x10c4ea - 0x10c67f
int64_t function_10c4ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x10c4ea
    int64_t v1; // 0x10c4ea
    return function_caf2a(a1, a2, a3, a4, a5, v1);
}

// Address range: 0x10c67f - 0x10c7c0
int64_t function_10c67f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x10c67f
    int64_t v1; // 0x10c67f
    return function_caf2a(v1, a2, a3, a4, a5, a6);
}

// Address range: 0x10c7c0 - 0x10c91a
int64_t function_10c7c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x10c7c0
    int64_t v1; // bp-40, 0x10c7c0
    int64_t v2 = (int64_t)&v1; // 0x10c831
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x10c854
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x10c854
    *v4 = v3;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x10c858
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x10c85b
    *v6 = v3;
    int64_t * v7 = (int64_t *)(v2 + 16); // 0x10c86a
    int64_t v8 = *v7; // 0x10c86a
    *v4 = v8;
    *v5 = 0x4349f24;
    *v6 = 0x3b498de1;
    *(int64_t *)(v2 - 32) = v3;
    v1 = *v5;
    *v5 = 0x689d6da0;
    *v6 = v8;
    *v7 = *v5;
    *v5 = a3;
    *v6 = 0x108591;
    *v5 = v2;
    *v6 = *v4;
    *v5 = v2;
    int64_t v9; // 0x10c7c0
    return function_caf2a(a1, a2, *v5, 0x108591, a5, v9);
}

// Address range: 0x10c945 - 0x10c94a
int64_t function_10c945(void) {
    // 0x10c945
    int64_t v1; // 0x10c945
    int64_t v2 = v1;
    return (v2 + 36) % 256 | v2 & -256;
}

// Address range: 0x10c950 - 0x10c953
int64_t function_10c950(void) {
    // 0x10c950
    int64_t result; // 0x10c950
    return result;
}

// Address range: 0x439e67 - 0x439ec1
int64_t function_439e67(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x439e67
    int64_t v1; // 0x439e67
    int64_t v2 = v1 & 0xffffffff; // 0x439e68
    int64_t v3; // 0x439e67
    int64_t result = (int64_t)&v3; // 0x439e69
    *(int32_t *)-0x2d4fa25f819fc6 = (int32_t)result;
    unsigned char v4 = (char)result; // 0x439e73
    uint32_t v5 = (int32_t)a2; // 0x439e75
    int32_t v6 = v4 < 132; // 0x439e75
    uint32_t v7 = *(int32_t *)(2 * a2 + a3) + v6; // 0x439e75
    int32_t v8 = v5 - v7; // 0x439e75
    int64_t result2 = result; // 0x439e7d
    char v9 = 91; // 0x439e7d
    int64_t v10 = v2; // 0x439e7d
    if (v8 < 0) {
        uint32_t v11 = v8 - v6; // 0x439e75
        unsigned char v12 = llvm_ctpop_i8((char)v8); // 0x439e75
        bool v13 = v4 < 132 ? v7 != -1 | v11 > v5 : v7 > v5; // 0x439e75
        bool v14; // 0x439e67
        *(int64_t *)(v2 - 8) = 0x4000 * (int64_t)v14 | 1024 * (int64_t)v14 | 512 * (int64_t)v14 | 256 * (int64_t)v14 | 64 * (int64_t)(v8 == 0) | 128 * (int64_t)(v8 < 0) | 16 * (int64_t)(v5 % 16 + v6 - v7 % 16 > 15) | (int64_t)v13 | 4 * (int64_t)(v12 % 2 == 0) | 2048 * (int64_t)(((v11 ^ v5) & (v7 ^ v5)) < 0) | 2;
        char * v15 = (char *)(v1 + 0x214ec52e); // 0x439e83
        *v15 = *v15 ^ (char)a3;
        int32_t * v16 = (int32_t *)(v2 + 0x19abab63b); // 0x439e89
        int32_t v17 = *v16 ^ 58; // 0x439e89
        *v16 = v17;
        if (v17 >= 0 == (v17 != 0)) {
            // 0x439eca
            return result;
        }
        // 0x439e91
        *(char *)-0x44fb03aac6b3a4ff = v4;
        char * v18 = (char *)((int64_t)v8 + 0xc6972c6); // 0x439e9b
        *v18 = *v18 - 91;
        char * v19 = (char *)(v1 + 0x6654a65); // 0x439ea3
        *v19 = *v19 ^ 44;
        *(char *)a4 = __asm_insb((int16_t)a3);
        result2 = __asm_wait();
        v9 = 65;
        v10 = v1 + 8;
    }
    // 0x439eba
    *(int64_t *)(v10 - 8) = a4;
    char * v20 = (char *)(a3 + 0x2e6bffad); // 0x439ebb
    *v20 = *v20 | v9;
    return result2;
}

// Address range: 0x439f2b - 0x439f43
int64_t function_439f2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x439f2b
    int64_t v1; // 0x439f2b
    int32_t v2 = *(int32_t *)(v1 + 63); // 0x439f35
    return function_7adf6e57(v2, (int32_t)v1 + (int32_t)a2);
}

// Address range: 0x439f4c - 0x439f4f
int64_t function_439f4c(void) {
    // 0x439f4c
    int64_t result; // 0x439f4c
    return result;
}

// Address range: 0x43a04a - 0x43a06d
int64_t function_43a04a(int64_t a1, int64_t a2) {
    // 0x43a04a
    bool v1; // 0x43a04a
    if (!v1) {
        // 0x43a06d
        int64_t result; // 0x43a04a
        return result;
    }
    int32_t * v2 = (int32_t *)(a2 + 72); // 0x43a062
    int64_t v3; // 0x43a04a
    int64_t v4 = v3;
    int64_t v5; // 0x43a04a
    int64_t result2 = (v4 + v5) % 256 | v4 & -256; // 0x43a060
    int32_t v6 = 2 * *v2; // 0x43a062
    *v2 = v6;
    int64_t v7; // 0x43a04a
    int64_t v8 = v7 - 8; // 0x43a066
    int64_t v9; // 0x43a04a
    *(int64_t *)v8 = v9;
    v9 = v8;
    v7 = v8 - (int64_t)&g1;
    while (v6 == 0) {
        // 0x43a060
        v4 = result2;
        result2 = (v4 + v5) % 256 | v4 & -256;
        v6 = 2 * *v2;
        *v2 = v6;
        v8 = v7 - 8;
        *(int64_t *)v8 = v9;
        v9 = v8;
        v7 = v8 - (int64_t)&g1;
    }
    // 0x43a06d
    return result2;
}

// Address range: 0x43a06e - 0x43a119
int64_t function_43a06e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2; // 0x43a06e
    int32_t * v3 = (int32_t *)(v2 + 4 * a3); // 0x43a073
    *v3 = *v3 & (int32_t)v2;
    bool v4; // 0x43a06e
    int64_t v5 = v4 ? 0xffffffff : 1; // 0x43a08a
    unsigned char v6 = (char)(a3 / 256); // 0x43a08e
    char * v7 = (char *)(v2 - 0x6e0e09dc); // 0x43a0a1
    int64_t v8 = v4 ? -1 : 1; // 0x43a0c3
    int64_t v9 = a2; // 0x43a077
    int64_t v10 = a1; // 0x43a077
    uint64_t v11 = v2 & 0xffffffff;
    int64_t v12; // 0x43a06e
    int64_t v13 = v12 - 8; // 0x43a07c
    *(int64_t *)v13 = v12;
    unsigned char v14 = *(char *)v9; // 0x43a08a
    *(int64_t *)(v12 - 16) = v13;
    char * v15 = (char *)(v11 + 15); // 0x43a08e
    unsigned char v16 = *v15; // 0x43a08e
    *v15 = v16 - v6;
    unsigned char v17 = v16 < v6 ? 119 : 118; // 0x43a091
    int64_t v18 = (v2 & 0xffffffff ^ 0x6aad28e7) & -256 | (int64_t)(v14 - v17); // 0x43a091
    *(int64_t *)(v12 - 24) = v18;
    int64_t v19 = v18 & 0xffffffff; // 0x43a094
    char v20 = *(char *)&v1; // 0x43a095
    int64_t v21 = v12 - 32; // 0x43a097
    *(int32_t *)0x13628e8a1365c58a = (int32_t)(256 * (int64_t)(v20 + (char)(v11 / 256) + (char)(v16 < v6 | v14 < v17)) | v11 & 0xffff00ff);
    unsigned char v22 = *v7; // 0x43a0a1
    *v7 = v22 / 64 | 4 * v22;
    int32_t v23 = *(int32_t *)(a3 + 0x56e9df2f + 4 * v2); // 0x43a0a8
    uint16_t v24 = *(int16_t *)0xe20432f9b13122e; // 0x43a0af
    char v25 = *(char *)(v19 - 0x3c22ffdb); // 0x43a0b9
    v10 = v8 + (int64_t)(*(int32_t *)(v10 + 0x47ff3b78) + (int32_t)v10);
    v9 = v8 + (int64_t)(v23 + (int32_t)(v9 + v5) + (int32_t)((v22 & 64) != 0));
    char v26 = v24;
    char v27 = v26 - 86; // 0x43a0c5
    int64_t v28 = v11 & 0xffff0000 | (int64_t)v27 | 256 * (int64_t)(v25 | (char)(v24 / 256)); // 0x43a0c5
    while (v26 >= 87) {
        // 0x43a0c9
        if (v27 < 0) {
            // 0x43a0cb
            *(int64_t *)v21 = 0xf18a44d;
            *(char *)(v10 + 127) = (char)v1;
            return function_2b6ecacb(v10, v9);
        }
        v11 = v19;
        v13 = v21 - 8;
        *(int64_t *)v13 = v21;
        v14 = *(char *)v9;
        *(int64_t *)(v21 - 16) = v13;
        v15 = (char *)(v11 + 15);
        v16 = *v15;
        *v15 = v16 - v6;
        v17 = v16 < v6 ? 119 : 118;
        v18 = v28 & -256 | (int64_t)(v14 - v17);
        *(int64_t *)(v21 - 24) = v18;
        v19 = v18 & 0xffffffff;
        v20 = *(char *)&v1;
        v21 -= 32;
        *(int32_t *)0x13628e8a1365c58a = (int32_t)(256 * (int64_t)(v20 + (char)(v11 / 256) + (char)(v16 < v6 | v14 < v17)) | v11 & 0xffff00ff);
        v22 = *v7;
        *v7 = v22 / 64 | 4 * v22;
        v23 = *(int32_t *)(a3 + 0x56e9df2f + 4 * v2);
        v24 = *(int16_t *)0xe20432f9b13122e;
        v25 = *(char *)(v19 - 0x3c22ffdb);
        v10 = v8 + (int64_t)(*(int32_t *)(v10 + 0x47ff3b78) + (int32_t)v10);
        v9 = v8 + (int64_t)(v23 + (int32_t)(v9 + v5) + (int32_t)((v22 & 64) != 0));
        v26 = v24;
        v27 = v26 - 86;
        v28 = v11 & 0xffff0000 | (int64_t)v27 | 256 * (int64_t)(v25 | (char)(v24 / 256));
    }
    int16_t v29 = a3; // 0x43a0f2
    __asm_out(v29, (int16_t)v28);
    *(char *)v10 = *(char *)v9;
    int64_t v30 = v10 + v8; // 0x43a0f6
    int32_t * v31 = (int32_t *)(v30 - 10); // 0x43a0f7
    *v31 = (int32_t)(v26 < 86) + (int32_t)v30 + *v31;
    char * v32 = (char *)v30; // 0x43a106
    *v32 = 2 * *v32;
    *(int32_t *)(*(int64_t *)0x71f02e8d5e8c4ffd + 121) = (int32_t)v21 + 2;
    *v32 = __asm_insb(v29);
    return v1 & 0xffffffff;
}

// Address range: 0x43a1e9 - 0x43a1ea
int64_t function_43a1e9(int64_t a1) {
    // 0x43a1e9
    int64_t result; // 0x43a1e9
    return result;
}

// Address range: 0x43a1f5 - 0x43a20d
int64_t function_43a1f5(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 70); // 0x43a1fe
    *v1 = *v1 ^ (int32_t)a2;
    int64_t v2; // 0x43a1f5
    __asm_out_133(-23, (char)v2);
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x43a203
    int64_t v4; // 0x43a1f5
    *(char *)a1 = *(char *)&v4;
    char v5 = *(char *)(v2 + 38); // 0x43a205
    return function_38596cba(a1 - 1, a2 - 1, v3 & -256 | (int64_t)(v5 ^ (char)v3));
}

// Address range: 0x43a467 - 0x43a473
int64_t function_43a467(void) {
    // 0x43a467
    int64_t result; // 0x43a467
    bool v1; // 0x43a467
    if (!v1) {
        result = function_43a3f2();
    }
    // 0x43a469
    return result;
}

// Address range: 0x43a474 - 0x43a477
int64_t function_43a474(int64_t a1) {
    // 0x43a474
    int64_t result; // 0x43a474
    return result;
}

// Address range: 0x43a48d - 0x43a48e
int64_t function_43a48d(int64_t a1) {
    // 0x43a48d
    int64_t result; // 0x43a48d
    return result;
}

// Address range: 0x43a48e - 0x43a491
int64_t function_43a48e(void) {
    // 0x43a48e
    int64_t result; // 0x43a48e
    return result;
}

// Address range: 0x43a510 - 0x43a511
int64_t function_43a510(void) {
    // 0x43a510
    int64_t result; // 0x43a510
    return result;
}

// Address range: 0x43a529 - 0x43a532
int64_t function_43a529(void) {
    // 0x43a529
    int64_t v1; // 0x43a529
    unsigned char v2 = *(char *)(v1 % 256 + v1); // 0x43a529
    int64_t result = v1 & -256 | (int64_t)v2; // 0x43a529
    char * v3 = (char *)result; // 0x43a52a
    *v3 = *v3 - v2;
    return result;
}

// Address range: 0x43a536 - 0x43a53b
int64_t function_43a536(void) {
    // 0x43a536
    return function_39a98ca7();
}

// Address range: 0x43a542 - 0x43a68f
int64_t function_43a542(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x43a542
    int64_t v1; // 0x43a542
    uint64_t v2 = v1;
    int64_t v3 = a7;
    char v4 = *(char *)(v2 + 113); // 0x43a542
    *(char *)-0x4185aeb1e1be2abf = (char)v2;
    if (*(int32_t *)(a1 + 104) != (int32_t)v1) {
        // 0x43a556
        return 0x10000 * (int32_t)(256 * (int64_t)(v4 & (char)(v2 / 256)) | v2 % 256) >> 16 ^ 32;
    }
    int32_t v5 = a4;
    uint32_t v6 = (int32_t)a2; // 0x43a5d7
    uint32_t v7 = *(int32_t *)(a4 + 69); // 0x43a5d7
    int64_t v8 = v6 - v7; // 0x43a5d7
    int32_t v9 = v1; // 0x43a5da
    int32_t v10 = v7 > v6; // 0x43a5da
    int32_t v11 = v9 + v5 + v10; // 0x43a5da
    int32_t v12 = v11 + v10; // 0x43a5da
    *(int32_t *)a4 = v11;
    int64_t v13; // 0x43a542
    if (((v12 ^ v5) & (v12 ^ v9)) >= 0) {
        // 0x43a64b
        __asm_outsd((int16_t)a3, *(int32_t *)v8);
        int64_t v14 = (a6 + 33) % 256 | a6 & -256; // 0x43a654
        int64_t v15 = 0x100000000 * v14 >> 32; // 0x43a657
        *(char *)v13 = *(char *)&v13 & (char)(a3 / 256);
        return v14 - (-14 * v15 == -0xe00000000 * v15 >> 32 ? 0x3cec6fc4 : 0x3cec6fc5) & 0xffffffff;
    }
    // 0x43a5de
    if (*(char *)(v13 - 0x27c489e7) != -(char)a4) {
        // 0x43a5f5
        return __asm_in((int16_t)a3);
    }
    int32_t v16 = 0x3bb0005c * *(int32_t *)((int64_t)&v3 - 57 + v8); // 0x43a5df
    char v17 = (char)v16 & 32; // 0x43a58f
    int64_t v18 = v17 == 0; // 0x43a592
    __asm_out_134((int16_t)a3, v17);
    return (int64_t)(v17 ^ 58) | (int64_t)(v16 & 0x40190000 | 512) | 0x4000 * v18 | 1024 * v18;
}

// Address range: 0x43a6d6 - 0x43a6db
int64_t function_43a6d6(int64_t a1, int64_t a2) {
    // 0x43a6d6
    int64_t result; // 0x43a6d6
    return result;
}

// Address range: 0x43a751 - 0x43a752
int64_t function_43a751(void) {
    // 0x43a751
    int64_t result; // 0x43a751
    return result;
}

// Address range: 0x43a781 - 0x43a783
int64_t function_43a781(int64_t a1) {
    // 0x43a781
    int64_t result; // 0x43a781
    return result;
}

// Address range: 0x43a783 - 0x43a847
int64_t function_43a783(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6;
    int64_t v2 = a4 - 1; // 0x43a784
    bool v3; // 0x43a783
    if (v2 == 0 || v3) {
        // 0x43a786
        *(char *)(a3 + 63) = (char)a3;
        return unknown_ffffffff902fb7a8();
    }
    int64_t v4 = v2; // 0x43a838
    int64_t v5 = (int64_t)&v1; // 0x43a836
    int64_t v6; // 0x43a783
    int32_t * v7 = (int32_t *)(v6 + 0xffffffa0 & 0xffffffff); // 0x43a7af
    uint32_t v8 = *v7 & (int32_t)a3; // 0x43a7af
    unsigned char v9 = llvm_ctpop_i8((char)v8); // 0x43a7af
    *v7 = v8;
    int64_t v10 = v6; // 0x43a7b3
    if (v9 % 2 == 0) {
        v10 = function_43a751();
    }
    int64_t result = v10;
    *(int64_t *)(v5 - 8) = v4;
    while (v8 < 0) {
        // 0x43a836
        v5 -= 16;
        int64_t * v11 = (int64_t *)v5;
        v4--;
        if (v4 == 0 || v8 == 0) {
            // 0x43a83a
            int64_t v12; // 0x43a783
            char * v13 = (char *)(v12 + 53); // 0x43a83a
            *v13 = *v13 ^ (char)a3;
            *v11 = -0xda73baa;
            return *v11;
        }
        // 0x43a81e
        v6 = result & -256 | (int64_t)__asm_in_135((int16_t)a3);
        v7 = (int32_t *)(v6 + 0xffffffa0 & 0xffffffff);
        v8 = *v7 & (int32_t)a3;
        v9 = llvm_ctpop_i8((char)v8);
        *v7 = v8;
        v10 = v6;
        if (v9 % 2 == 0) {
            v10 = function_43a751();
        }
        // 0x43a7b5
        result = v10;
        *(int64_t *)(v5 - 8) = v4;
    }
    // 0x43a7b8
    return result;
}
