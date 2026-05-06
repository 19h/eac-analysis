/*
 * Targeted RetDec C for native executable gap queue batch 208.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x17c085-0x17c285 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e301e-0x2e321e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e321e-0x2e341e rank=- name=- kind=- bytes=- uncovered=-
 *   0x140713-0x140913 rank=- name=- kind=- bytes=- uncovered=-
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
char __asm_in_136(uint16_t port);
char __asm_in_137(uint16_t port);
int32_t __asm_in_138(uint16_t port);
char __asm_insb(uint16_t port);
int32_t __asm_insd(uint16_t port);
void __asm_out(uint16_t port, char value);
void __asm_out_133(uint16_t port, int32_t value);
void __asm_out_134(uint16_t port, int32_t value);
void __asm_out_135(uint16_t port, int32_t value);
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
int64_t __asm_wait(void);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
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

int64_t function_140713(int64_t a1);
int64_t function_1407a4(void);
int64_t function_1407cd(int64_t a1, int64_t a2);
int64_t function_1407ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14080e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_140846(int64_t a1);
int64_t function_1408a5(int64_t a1, int64_t a2);
int64_t function_1408aa(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_17c085(void);
int64_t function_17c0e6(int64_t a1);
int64_t function_17c0fe(void);
int64_t function_17c114(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17c17e(void);
int64_t function_17c1b2(void);
int64_t function_17c1c8(int64_t a1);
int64_t function_17c241(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17c266(int64_t a1);
int64_t function_1fff1fa();
int64_t function_20096b9();
int64_t function_2e301e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e30e2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_2e3100(void);
int64_t function_2e3103(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e3115(void);
int64_t function_2e3130(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e31c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e3220(void);
int64_t function_2e324a(int64_t a1);
int64_t function_2e3299(int64_t a1);
int64_t function_2e329c(int64_t a1);
int64_t function_2e32cc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2e3341(void);
int64_t function_2e33b2(void);
int64_t function_2e33c6(void);
int64_t function_2e341a(int64_t a1);
int64_t function_426f6e2d();
int64_t function_6fe9c3a1();
int64_t function_ffffffffa37093fa();
int64_t function_ffffffffad738413();
int64_t unknown_1e1493f7();
int64_t unknown_21cf23fd();
int64_t unknown_24135bee();
int64_t unknown_471f59dd();
int64_t unknown_6d88ef10();
int64_t unknown_7a38134f();
int64_t unknown_887f0d9();
int64_t unknown_ffffffff8f0c4bd2();
int64_t unknown_ffffffff9e23bf39();
int64_t unknown_ffffffffac2013c1();
int64_t unknown_ffffffffbcb2885b();
int64_t unknown_ffffffffffb41add();

// Address range: 0x140713 - 0x140714
int64_t function_140713(int64_t a1) {
    // 0x140713
    int64_t result; // 0x140713
    return result;
}

// Address range: 0x1407a4 - 0x1407a5
int64_t function_1407a4(void) {
    // 0x1407a4
    int64_t result; // 0x1407a4
    return result;
}

// Address range: 0x1407cd - 0x1407e2
int64_t function_1407cd(int64_t a1, int64_t a2) {
    // 0x1407cd
    unknown_887f0d9();
    return function_1407a4();
}

// Address range: 0x1407ed - 0x140809
int64_t function_1407ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(unknown_1e1493f7() + 0x5063f417); // 0x1407f6
    int64_t v2; // 0x1407ed
    *v1 = *v1 | (char)v2;
    return function_ffffffffa37093fa();
}

// Address range: 0x14080e - 0x14081b
int64_t function_14080e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 + 115); // 0x14080e
    *v1 = *v1 + (int32_t)a1;
    int64_t v2; // 0x14080e
    float80_t v3; // 0x14080e
    *(int16_t *)v2 = (int16_t)v3;
    char * v4 = (char *)(a2 + 0x7d33d878); // 0x140814
    *v4 = *v4 + (char)v2;
    return a4 & 0xffffffff;
}

// Address range: 0x140846 - 0x140847
int64_t function_140846(int64_t a1) {
    // 0x140846
    int64_t result; // 0x140846
    return result;
}

// Address range: 0x1408a5 - 0x1408aa
int64_t function_1408a5(int64_t a1, int64_t a2) {
    // 0x1408a5
    int64_t result; // 0x1408a5
    *(char *)a2 = 2 * (char)result;
    return result;
}

// Address range: 0x1408aa - 0x140911
int64_t function_1408aa(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1408aa
    int64_t v1; // 0x1408aa
    uint64_t v2 = v1;
    if (*(char *)(v1 - 0x2d387138) > (char)(v2 / 256)) {
        char * v3 = (char *)(v1 + 0x71f5405a); // 0x140903
        *v3 = *v3 + -1 - (char)(a3 / 256);
        return unknown_6d88ef10();
    }
    int64_t result = __asm_int3(); // 0x1408c0
    uint32_t v4 = (int32_t)result; // 0x1408c6
    *(int32_t *)0x443dccb10d0013b2 = v4;
    __asm_movd(v1);
    int32_t * v5 = (int32_t *)(v2 - 0x71f09d00); // 0x1408dd
    *v5 = (int32_t)(v4 < 0xb49e3701) - (int32_t)a2 + *v5;
    return result;
}

// Address range: 0x17c085 - 0x17c08a
int64_t function_17c085(void) {
    // 0x17c085
    int64_t result; // 0x17c085
    return result;
}

// Address range: 0x17c0e6 - 0x17c0e9
int64_t function_17c0e6(int64_t a1) {
    // 0x17c0e6
    int64_t result; // 0x17c0e6
    return result;
}

// Address range: 0x17c0fe - 0x17c0ff
int64_t function_17c0fe(void) {
    // 0x17c0fe
    int64_t result; // 0x17c0fe
    return result;
}

// Address range: 0x17c114 - 0x17c17e
int64_t function_17c114(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17c114
    int64_t v1; // 0x17c114
    unsigned char v2 = (char)v1;
    *(char *)a3 = v2 / 2 | 128 * v2;
    int64_t v3 = v1 & -256 | 126; // 0x17c118
    int64_t v4 = v1 + a3; // 0x17c11a
    int32_t * v5 = (int32_t *)v3; // 0x17c122
    *v5 = *v5 + (int32_t)a1;
    int64_t v6 = v4 & 0xffffffff; // bp-8, 0x17c124
    char * v7 = (char *)(v3 + 0xcf374b47 & 0xffffffc5); // 0x17c132
    unsigned char v8 = *v7; // 0x17c132
    *v7 = v8 / 128 | 2 * v8;
    uint32_t v9 = __asm_in_133(-24); // 0x17c135
    int32_t * v10 = (int32_t *)((int64_t)v9 + 0xa229c0a); // 0x17c138
    int32_t v11 = (int64_t)&v6; // 0x17c138
    *v10 = *v10 + v11;
    int64_t v12; // 0x17c114
    char v13 = *(char *)&v12; // 0x17c13f
    *(char *)v12 = *(char *)0xda01e892 + (char)a4 + v13;
    uint64_t v14 = __asm_int1(); // 0x17c141
    int64_t v15 = ((v14 / 256 + (int64_t)v9) % 256 | (int64_t)(v9 & -256)) + v4; // 0x17c145
    int32_t * v16 = (int32_t *)((v15 & 0xffffffff) + 0x5c015827); // 0x17c149
    *v16 = *v16 | v11;
    uint64_t v17 = (v14 & 0xffffffff) - 1; // 0x17c15a
    int64_t result = unknown_ffffffffbcb2885b(); // 0x17c15a
    if (v17 != 0) {
        result = function_17c0fe();
    }
    char v18 = v9 / 256; // 0x17c154
    if (v18 >= 0 != ((v18 & 64) == 0)) {
        // 0x17c15e
        return result;
    }
    int32_t * v19 = (int32_t *)(4 * v17 + 0xef21550); // 0x17c165
    *v19 = *v19 + (int32_t)v15;
    *(char *)0x56001e8af86b485 = (char)(v17 / 256 + (int64_t)((v9 & 256) != 0) + result);
    return function_6fe9c3a1();
}

// Address range: 0x17c17e - 0x17c184
int64_t function_17c17e(void) {
    // 0x17c17e
    return function_20096b9();
}

// Address range: 0x17c1b2 - 0x17c1b3
int64_t function_17c1b2(void) {
    // 0x17c1b2
    int64_t result; // 0x17c1b2
    return result;
}

// Address range: 0x17c1c8 - 0x17c1c9
int64_t function_17c1c8(int64_t a1) {
    // 0x17c1c8
    int64_t result; // 0x17c1c8
    return result;
}

// Address range: 0x17c241 - 0x17c265
int64_t function_17c241(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17c241
    int64_t v1; // 0x17c241
    char * v2 = (char *)(v1 - 120); // 0x17c241
    *v2 = *v2 + (char)(v1 / 256);
    int64_t v3; // 0x17c241
    unsigned char v4 = *(char *)&v3; // 0x17c246
    int64_t v5 = unknown_7a38134f(); // 0x17c248
    int32_t v6 = *(int32_t *)v5; // 0x17c24e
    *(int32_t *)-0x493216e = *(int32_t *)-0x493216e + (int32_t)v1;
    return (int32_t)v5 - 0xcfe173d + v6 + (int32_t)(v4 > (char)a4);
}

// Address range: 0x17c266 - 0x17c26c
int64_t function_17c266(int64_t a1) {
    // 0x17c266
    return function_1fff1fa();
}

// Address range: 0x2e301e - 0x2e30e1
int64_t function_2e301e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    uint64_t v2 = a4 - 1; // 0x2e301f
    bool v3; // 0x2e301e
    if (v2 != 0 != v3) {
        // 0x2e3021
        return __asm_int3();
    }
    int64_t v4 = a3 & -256 | 85; // 0x2e308e
    if (v3) {
        // 0x2e307a
        *(int32_t *)a1 = (int32_t)v4 + (int32_t)a1;
        int32_t result = __asm_in_133(-1); // 0x2e307e
        uint32_t v5 = (int32_t)v2 % 32; // 0x2e3081
        if (v5 != 0) {
            *(int32_t *)v1 = *(int32_t *)&v1 >> v5;
        }
        return result;
    }
    // 0x2e3092
    int64_t v6; // 0x2e301e
    int64_t v7 = v6 & 0xffffffff; // 0x2e308d
    int64_t v8 = a2 & 0xffffffff; // 0x2e308d
    int32_t * v9 = (int32_t *)(a1 + 0x5809b50 + v7); // 0x2e3092
    int32_t v10 = v6; // 0x2e3092
    *v9 = *v9 + v10;
    int32_t * v11 = (int32_t *)(v8 + 116); // 0x2e309b
    *v11 = *v11 + (int32_t)v6;
    char * v12 = (char *)(v8 + 0x201e000); // 0x2e30a1
    *v12 = *v12 + (char)a2;
    char * v13 = (char *)(v6 - 0x42fe1800); // 0x2e30a7
    *v13 = *v13 + (char)(v2 / 256);
    char * v14 = (char *)(a4 + 0x58e913ff); // 0x2e30ad
    *v14 = *v14 + (char)v6;
    __asm_in((int16_t)v4);
    unknown_ffffffffac2013c1();
    int32_t * v15 = (int32_t *)((256 * v6 + v2 & 0xff00 | v2 & -0xff01) - 0x76d2e40c); // 0x2e30c9
    *v15 = *v15 + v10;
    char * v16 = (char *)(v7 + 101); // 0x2e30cf
    *v16 = *v16 + (char)v2;
    return unknown_471f59dd();
}

// Address range: 0x2e30e2 - 0x2e30ff
int64_t function_2e30e2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x2e30e2
    int64_t v1; // 0x2e30e2
    *(char *)a1 = (char)(v1 / 256) + (char)v1;
    *(char *)(a3 - 112) = (char)(a3 / 256);
    unknown_24135bee();
    int32_t * v2 = (int32_t *)(a1 + 0x355022e9); // 0x2e30ed
    *v2 = *v2 + (int32_t)v1;
    return unknown_21cf23fd();
}

// Address range: 0x2e3100 - 0x2e3103
int64_t function_2e3100(void) {
    // 0x2e3100
    int64_t result; // 0x2e3100
    return result;
}

// Address range: 0x2e3103 - 0x2e3112
int64_t function_2e3103(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e3103
    int64_t result; // 0x2e3103
    return result;
}

// Address range: 0x2e3115 - 0x2e311a
int64_t function_2e3115(void) {
    // 0x2e3115
    return function_ffffffffad738413();
}

// Address range: 0x2e3130 - 0x2e3140
int64_t function_2e3130(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(unknown_ffffffff9e23bf39() + 1); // 0x2e3138
    int64_t v2; // 0x2e3130
    *v1 = *v1 + (int32_t)v2;
    return function_426f6e2d();
}

// Address range: 0x2e31c8 - 0x2e31f7
int64_t function_2e31c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e31c8
    int64_t v1; // 0x2e31c8
    char v2 = v1 / 256; // 0x2e31da
    *(char *)0x6042a1e1 = *(char *)0x6042a1e1 + v2;
    bool v3; // 0x2e31c8
    int64_t v4 = v3 ? -4 : 4; // 0x2e31e6
    char * v5 = (char *)(v1 + 4); // 0x2e31e7
    *v5 = *v5 + v2;
    int32_t * v6 = (int32_t *)(a2 + 0x2cb10065 + (v3 ? -1 : 1) + v4); // 0x2e31f1
    *v6 = *v6 + (int32_t)(v4 + a1);
    return v1 & -256 | (v1 + 133) % 256;
}

// Address range: 0x2e3220 - 0x2e3223
int64_t function_2e3220(void) {
    // 0x2e3220
    int64_t result; // 0x2e3220
    return result;
}

// Address range: 0x2e324a - 0x2e324b
int64_t function_2e324a(int64_t a1) {
    // 0x2e324a
    int64_t result; // 0x2e324a
    return result;
}

// Address range: 0x2e3299 - 0x2e329c
int64_t function_2e3299(int64_t a1) {
    // 0x2e3299
    int64_t result; // 0x2e3299
    return result;
}

// Address range: 0x2e329c - 0x2e329d
int64_t function_2e329c(int64_t a1) {
    // 0x2e329c
    int64_t result; // 0x2e329c
    return result;
}

// Address range: 0x2e32cc - 0x2e32f8
int64_t function_2e32cc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a3;
    unknown_ffffffff8f0c4bd2();
    int64_t v2; // 0x2e32cc
    *(int32_t *)a1 = (int32_t)v2;
    bool v3; // 0x2e32cc
    int64_t v4 = v3 ? -4 : 4; // 0x2e32d1
    int64_t v5 = v4 + a1; // 0x2e32d1
    int64_t v6 = v4 + a2; // 0x2e32d1
    int64_t v7 = unknown_ffffffffffb41add(v5, v6); // 0x2e32d6
    *(char *)v5 = __asm_insb((int16_t)a3);
    unsigned char v8 = (char)a4 % 32; // 0x2e32e2
    if (v8 != 0) {
        *(char *)v1 = *(char *)&v1 >> v8;
    }
    int64_t v9 = v7 + 0x1e8a364; // 0x2e32dd
    int64_t result = v9 & 0xffffffff; // 0x2e32dd
    char * v10 = (char *)(result + 0x2508e00); // 0x2e32e7
    *v10 = *v10 + (char)v9;
    char * v11 = (char *)(v2 + 0x201e800); // 0x2e32ed
    *v11 = *v11 + (char)(a4 / 256);
    int32_t * v12 = (int32_t *)v6; // 0x2e32f3
    *v12 = *v12 + (int32_t)v2;
    return result;
}

// Address range: 0x2e3341 - 0x2e3342
int64_t function_2e3341(void) {
    // 0x2e3341
    int64_t result; // 0x2e3341
    return result;
}

// Address range: 0x2e33b2 - 0x2e33b4
int64_t function_2e33b2(void) {
    // 0x2e33b2
    return function_2e3341();
}

// Address range: 0x2e33c6 - 0x2e33c7
int64_t function_2e33c6(void) {
    // 0x2e33c6
    int64_t result; // 0x2e33c6
    return result;
}

// Address range: 0x2e341a - 0x2e341b
int64_t function_2e341a(int64_t a1) {
    // 0x2e341a
    int64_t result; // 0x2e341a
    return result;
}
