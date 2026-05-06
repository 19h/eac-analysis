/*
 * Targeted RetDec C for native executable gap queue batch 729.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1bbbce-0x1bbdce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1bbdce-0x1bbfce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1bc1ce-0x1bc3ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1bc3ce-0x1bc5ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x51d1c0-0x51d3c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51d3c0-0x51d5c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51d5c0-0x51d7c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51d7c0-0x51d9c0 rank=- name=- kind=- bytes=- uncovered=-
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
void __asm_clts(void);
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

int64_t function_1bbbb2();
int64_t function_1bbbcc();
int64_t function_1bbbce(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bbc4c(void);
int64_t function_1bbca4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1bbdab(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bbecd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1bbedf(int64_t a1);
int64_t function_1bbeea(int64_t a1);
int64_t function_1bbefb(int64_t a1, int64_t a2);
int64_t function_1bbf44(void);
int64_t function_1bc1ce(void);
int64_t function_1bc296(void);
int64_t function_1bc2e3(void);
int64_t function_1bc331(void);
int64_t function_1bc353(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bc37a(void);
int64_t function_1bc4a4(void);
int64_t function_1bc532(int64_t a1);
int64_t function_1bc554(void);
int64_t function_1bc56c(void);
int64_t function_1bc59e(void);
int64_t function_4eeb50();
int64_t function_51d11f();
int64_t function_51d1c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6);
int64_t function_52b8e0();
int64_t function_567700();
int64_t function_e7edfde();
int64_t unknown_ffffffffbf273041();
int64_t unknown_ffffffffbf62c2ac();
int64_t unknown_ffffffffcbfe4023();

// Address range: 0x1bbbce - 0x1bbbe4
int64_t function_1bbbce(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bbbce
    bool v1; // 0x1bbbce
    if (v1 || v1) {
        function_1bbbcc();
    }
    // 0x1bbbd4
    return function_1bbbb2();
}

// Address range: 0x1bbc4c - 0x1bbc4d
int64_t function_1bbc4c(void) {
    // 0x1bbc4c
    int64_t result; // 0x1bbc4c
    return result;
}

// Address range: 0x1bbca4 - 0x1bbd53
int64_t function_1bbca4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1bbca4
    int64_t v1; // 0x1bbca4
    int64_t v2 = v1;
    unknown_ffffffffbf62c2ac();
    char v3 = v2;
    *(char *)0x4203d070 = v3;
    *(char *)0x2101e838 = *(char *)0x2101e838 + 43;
    int64_t v4 = a3 & -256; // 0x1bbd0a
    int64_t v5 = v4 | 75; // 0x1bbd0a
    *(int32_t *)0x6ed10f039001e8a6 = (int32_t)v1;
    bool v6; // 0x1bbca4
    int64_t v7 = v6 ? -1 : 1; // 0x1bbd15
    int64_t v8 = v7 + a1; // 0x1bbd15
    int64_t v9 = v7 + a2; // 0x1bbd15
    *(char *)v2 = (char)(v2 ^ v1);
    int64_t v10 = unknown_ffffffffcbfe4023(v8, v9, v5); // 0x1bbd1c
    char * v11 = (char *)((a4 & -256 | 55) - 88); // 0x1bbd22
    *v11 = *v11 + v3;
    char * v12 = (char *)v10; // 0x1bbd27
    unsigned char v13 = *v12; // 0x1bbd27
    *v12 = v13 / 128 | 2 * v13;
    __asm_out(-24, (int32_t)v10);
    int32_t v14 = *(int32_t *)-0x188dfe1b; // 0x1bbd2d
    int64_t v15; // bp-335, 0x1bbca4
    *(int32_t *)-0x188dfe1b = v14 + (int32_t)(int64_t)&v15;
    char * v16 = (char *)v5; // 0x1bbd36
    unsigned char v17 = *v16; // 0x1bbd36
    *v16 = v17 / 2 | 128 * v17;
    __asm_in((int16_t)v5);
    int64_t v18 = v9 + v7; // 0x1bbd39
    int64_t v19 = unknown_ffffffffbf273041(); // 0x1bbd3a
    *(char *)v8 = *(char *)v18;
    int64_t v20 = v18 + v7; // 0x1bbd40
    int64_t result = __asm_int1(v8 + v7, v20, (a3 / 256 + 75) % 256 | v4, v19 & 0xffffffff); // 0x1bbd4f
    char * v21 = (char *)v20; // 0x1bbd50
    *v21 = *v21 & (char)result;
    return result;
}

// Address range: 0x1bbdab - 0x1bbdc2
int64_t function_1bbdab(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 + 0x38b33d61 + 4 * a2); // 0x1bbdab
    int64_t v2; // 0x1bbdab
    *v1 = *v1 ^ (char)(v2 / 256);
    int64_t result = 2 * v2 & 0xffffffff; // 0x1bbdb4
    *(int32_t *)-0x17b61543 = *(int32_t *)-0x17b61543 + (int32_t)a1;
    __asm_rcl(*(int32_t *)result);
    return result;
}

// Address range: 0x1bbecd - 0x1bbed9
int64_t function_1bbecd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1bbecd
    int64_t result; // 0x1bbecd
    int32_t * v1 = (int32_t *)(result - 0x4cedc3c1); // 0x1bbecd
    *v1 = *v1 + (int32_t)a4;
    __asm_out_133(-79, (char)result);
    return result;
}

// Address range: 0x1bbedf - 0x1bbee0
int64_t function_1bbedf(int64_t a1) {
    // 0x1bbedf
    int64_t result; // 0x1bbedf
    return result;
}

// Address range: 0x1bbeea - 0x1bbeed
int64_t function_1bbeea(int64_t a1) {
    // 0x1bbeea
    int64_t result; // 0x1bbeea
    return result;
}

// Address range: 0x1bbefb - 0x1bbf04
int64_t function_1bbefb(int64_t a1, int64_t a2) {
    // 0x1bbefb
    int64_t v1; // 0x1bbefb
    return v1 & 0xffffffff;
}

// Address range: 0x1bbf44 - 0x1bbf47
int64_t function_1bbf44(void) {
    // 0x1bbf44
    int64_t result; // 0x1bbf44
    return result;
}

// Address range: 0x1bc1ce - 0x1bc1d1
int64_t function_1bc1ce(void) {
    // 0x1bc1ce
    int64_t result; // 0x1bc1ce
    return result;
}

// Address range: 0x1bc296 - 0x1bc297
int64_t function_1bc296(void) {
    // 0x1bc296
    int64_t result; // 0x1bc296
    return result;
}

// Address range: 0x1bc2e3 - 0x1bc2e5
int64_t function_1bc2e3(void) {
    // 0x1bc2e3
    return function_1bc296();
}

// Address range: 0x1bc331 - 0x1bc336
int64_t function_1bc331(void) {
    // 0x1bc331
    int64_t result; // 0x1bc331
    return result;
}

// Address range: 0x1bc353 - 0x1bc371
int64_t function_1bc353(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bc353
    int64_t v1; // 0x1bc353
    char * v2 = (char *)(v1 - 89); // 0x1bc359
    *v2 = *v2 / 2;
    int64_t result; // 0x1bc353
    int64_t v3 = result;
    *(int32_t *)v3 = *(int32_t *)&result + (int32_t)v3;
    char * v4 = (char *)(a3 - 117); // 0x1bc364
    *v4 = *v4 + (char)v1;
    int64_t v5 = result;
    *(char *)v5 = *(char *)&result + (char)v5;
    return result;
}

// Address range: 0x1bc37a - 0x1bc37f
int64_t function_1bc37a(void) {
    // 0x1bc37a
    return function_e7edfde();
}

// Address range: 0x1bc4a4 - 0x1bc4a7
int64_t function_1bc4a4(void) {
    // 0x1bc4a4
    int64_t result; // 0x1bc4a4
    return result;
}

// Address range: 0x1bc532 - 0x1bc533
int64_t function_1bc532(int64_t a1) {
    // 0x1bc532
    int64_t result; // 0x1bc532
    return result;
}

// Address range: 0x1bc554 - 0x1bc555
int64_t function_1bc554(void) {
    // 0x1bc554
    int64_t result; // 0x1bc554
    return result;
}

// Address range: 0x1bc56c - 0x1bc56f
int64_t function_1bc56c(void) {
    // 0x1bc56c
    int64_t v1; // 0x1bc56c
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x1bc59e - 0x1bc59f
int64_t function_1bc59e(void) {
    // 0x1bc59e
    int64_t result; // 0x1bc59e
    return result;
}

// Address range: 0x51d1c0 - 0x51d9bc
int64_t function_51d1c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x51d1c0
    int64_t result8; // 0x51d1c0
    int64_t v1 = result8;
    int64_t v2 = result8;
    int64_t v3 = a3; // 0x51d1c3
    int64_t v4 = a2; // 0x51d1c3
    int64_t v5 = a5; // 0x51d1c3
    int64_t result; // 0x51d1c0
    int64_t v6; // 0x51d1c0
    if ((int32_t)result8 == -1) {
        uint64_t v7 = *(int64_t *)(v2 + 16); // 0x51d440
        if (v7 >= *(int64_t *)(v2 + 24)) {
            // 0x51d920
            result = (int32_t)v2 == -1;
            v3 = a3 & 0xffffffff;
            v6 = (int32_t)v2 != -1 ? v2 : 0;
            v4 = a2 % 256;
            v5 = v2 & 0xffffffff;
        } else {
            // 0x51d44e
            result = 0;
            v3 = a3;
            v4 = a2;
            v5 = (int64_t)*(char *)v7;
        }
    }
    // 0x51d1c9
    int64_t v8; // 0x51d1c0
    int64_t v9; // 0x51d1c0
    char v10; // 0x51d1c0
    char v11; // 0x51d1c0
    if ((char)result != (char)v4) {
        // 0x51d3f0
        if (result8 == 0) {
            // 0x51d9e0
            return result;
        }
        int64_t v12; // 0x51d1c0
        if ((int32_t)result8 == -1) {
            uint64_t result2 = *(int64_t *)(result8 + 16); // 0x51d3ff
            if (result2 >= *(int64_t *)(result8 + 24)) {
                // 0x51d9e0
                return result2;
            }
            // 0x51d40f
            v12 = (int64_t)*(char *)result2;
        }
        int64_t v13 = v12 & 0xffffffff; // 0x51d413
        char v14 = *(char *)(v1 + 32); // 0x51d419
        v9 = v13;
        v10 = v14;
        v11 = 0;
        v8 = v12;
        if ((char)result8 != 0) {
            function_51d11f();
            v9 = v13;
            v10 = v14;
            v11 = 0;
            v8 = v12;
        }
    } else {
        // 0x51d1d2
        v10 = *(char *)(v1 + 32);
        v11 = 1;
    }
    char v15 = 0; // bp+112, 0x51d210
    int64_t v16; // bp+96, 0x51d1c0
    int64_t v17 = (int64_t)&v16; // 0x51d215
    v16 = (int64_t)&v15;
    if (v10 != 0) {
        // 0x51d960
        function_52b8e0(v17, 32);
    }
    uint64_t v18 = 0x100000000 * v3 >> 32;
    int64_t v19 = 0x100000000 * v5 >> 32;
    uint64_t n = (int32_t)v18 == 16 ? 22 : v18;
    uint16_t v20 = (int16_t)((0x100000000 * (int64_t)((int32_t)&g1 >> 31) | (int64_t)(int32_t)&g1) / (v18 & 0xffffffff)); // 0x51d234
    char v21 = *(char *)(v1 + 136); // 0x51d239
    int64_t result6 = v21; // 0x51d239
    char v22; // 0x51d1c0
    int64_t result3; // 0x51d1c0
    int64_t v23; // 0x51d1c0
    int64_t v24; // 0x51d1c0
    int64_t v25; // 0x51d1c0
    int64_t v26; // 0x51d1c0
    int64_t v27; // 0x51d1c0
    int64_t result7; // 0x51d1c0
    int64_t v28; // 0x51d1c0
    int64_t v29; // 0x51d1c0
    int64_t v30; // 0x51d1c0
    int64_t v31; // 0x51d1c0
    int32_t v32; // 0x51d1c0
    int64_t v33; // 0x51d1c0
    int64_t v34; // 0x51d1c0
    int64_t v35; // 0x51d1c0
    int64_t v36; // 0x51d1c0
    int32_t v37; // 0x51d1c0
    int32_t v38; // 0x51d1c0
    int32_t v39; // 0x51d1c0
    int64_t v40; // 0x51d1c0
    int64_t v41; // 0x51d1c0
    int64_t v42; // 0x51d1c0
    int64_t v43; // 0x51d1c0
    int32_t v44; // 0x51d1c0
    int32_t v45; // 0x51d1c0
    int32_t v46; // 0x51d1c0
    int32_t v47; // 0x51d1c0
    int32_t v48; // 0x51d1c0
    int32_t v49; // 0x51d1c0
    int32_t v50; // 0x51d1c0
    int32_t v51; // 0x51d1c0
    int32_t v52; // 0x51d1c0
    int32_t v53; // 0x51d1c0
    int32_t v54; // 0x51d1c0
    int32_t v55; // 0x51d1c0
    char v56; // 0x51d1c0
    char v57; // 0x51d1c0
    char v58; // 0x51d1c0
    char v59; // 0x51d1c0
    char v60; // 0x51d1c0
    char v61; // 0x51d1c0
    char v62; // 0x51d1c0
    char v63; // 0x51d1c0
    int64_t str; // 0x51d573
    int64_t * v64; // 0x51d1c0
    int64_t * v65; // 0x51d1c0
    int64_t v66; // 0x51d1c0
    if (v21 != 0) {
        // 0x51d568
        result3 = result6;
        if (v11 != 0) {
            // 0x51d9e0
            return result3;
        }
        // 0x51d573
        str = v1 + 114;
        int64_t v67 = v17 + 16;
        v64 = (int64_t *)(result8 + 16);
        v65 = (int64_t *)(result8 + 24);
        v66 = result8 & 0xffffffff;
        v62 = 0;
        v53 = 0;
        v48 = a6;
        v37 = 0;
        v30 = v9;
        v42 = v19;
        v23 = v8;
        while (true) {
          lab_0x51d58a_2:
            // 0x51d58a
            v24 = v23;
            v43 = v42;
            v31 = v30;
            v38 = v37;
            v49 = v48;
            v54 = v53;
            v63 = v62;
            unsigned char v68 = *(char *)(v1 + 32); // 0x51d58a
            if (v68 == 0) {
                // 0x51d58a
                v22 = v31;
                goto lab_0x51d59d;
            } else {
                char v69 = v31;
                v22 = v69;
                if (*(char *)(v1 + 73) == v69) {
                    if (v49 == 0) {
                        // 0x51d9e0
                        result3 = v68;
                        return result3;
                    }
                    int32_t v70 = v38 + 1; // 0x51d87e
                    int64_t v71 = v16 == v67 ? 15 : (int64_t)v15;
                    uint64_t v72 = (int64_t)v70; // 0x51d89b
                    result3 = v71;
                    if (v71 < v72) {
                        // 0x51d9e0
                        return result3;
                    }
                    // 0x51d8a6
                    *(char *)(v16 + (int64_t)v38) = (char)v49;
                    *(char *)(v16 + v72) = 0;
                    v57 = v63;
                    v55 = v54;
                    v50 = 0;
                    v39 = v70;
                    goto lab_0x51d607;
                } else {
                    goto lab_0x51d59d;
                }
            }
        }
      lab_0x51d663_5:
        // 0x51d663
        v59 = v58;
        v46 = v45;
        v35 = v16;
        if (v32 != 0) {
            int64_t v73 = v32;
            uint64_t v74 = v73 + 1; // 0x51d33e
            int64_t result4 = v16 == v67 ? 15 : (int64_t)v15;
            if (v74 > result4) {
                // 0x51d9e0
                return result4;
            }
            // 0x51d367
            *(char *)(v16 + v73) = (char)v45;
            *(char *)(v16 + v74) = 0;
            int64_t result5 = function_567700(*(int64_t *)(v1 + 16), *(int64_t *)(v1 + 24), v17); // 0x51d38a
            if ((char)result5 == 0) {
                // 0x51d9e0
                return result5;
            }
            // 0x51d397
            v61 = v58;
            result7 = result5;
            v34 = v16;
            if (v45 != 0) {
                goto lab_0x51d3b6;
            } else {
                // 0x51d3a4
                v61 = v58;
                result7 = result5;
                v34 = v16;
                v36 = v16;
                if ((char)result8 != 1 == (int32_t)v74 == 0) {
                    goto lab_0x51d69b;
                } else {
                    goto lab_0x51d3b6;
                }
            }
        } else {
            goto lab_0x51d670;
        }
    } else {
        // 0x51d24d
        if (v11 != 0) {
            // 0x51d9e0
            return result6;
        }
        int64_t v75 = 0x100000000000000 * v9 >> 56; // 0x51d26c
        v56 = 0;
        v51 = 0;
        v44 = a6;
        v27 = v75;
        v29 = v9;
        v41 = v19;
        v26 = v8;
        v60 = 0;
        v52 = 0;
        v47 = a6;
        v28 = v75;
        v33 = v9;
        v40 = v19;
        v25 = v8;
        if (n < 11) {
            goto lab_0x51d275;
        } else {
            goto lab_0x51d785;
        }
    }
  lab_0x51d59d:
    // 0x51d59d
    v58 = v63;
    v45 = v49;
    v32 = v38;
    if (*(char *)(v1 + 72) == v22) {
        // break -> 0x51d663
        goto lab_0x51d663_5;
    }
    int64_t * found_byte_pos = memchr((int64_t *)str, 0x1000000 * (int32_t)v31 >> 24, (int32_t)n); // 0x51d5b4
    v58 = v63;
    v45 = v49;
    v32 = v38;
    if (found_byte_pos == NULL) {
        // break -> 0x51d663
        goto lab_0x51d663_5;
    }
    int32_t v76; // 0x51d1c0
    int32_t v77; // 0x51d1c0
    int32_t v78; // 0x51d1c0
    int32_t v79; // 0x51d1c0
    int32_t v80; // 0x51d1c0
    int32_t v81; // 0x51d1c0
    char v82; // 0x51d1c0
    char v83; // 0x51d1c0
    if (v20 < (int16_t)v54) {
        // 0x51d7f8
        v82 = v21;
        v81 = v54;
        v78 = v49;
        v76 = v38;
        v83 = v21;
        v80 = v54;
        v79 = v49;
        v77 = v38;
        if (result8 != 0) {
            goto lab_0x51d610;
        } else {
            goto lab_0x51d80a;
        }
    } else {
        int64_t v84 = (int64_t)found_byte_pos - str; // 0x51d5c2
        int32_t v85 = v84; // 0x51d5cf
        int32_t v86 = v85 - 15; // 0x51d5cf
        int64_t v87 = v86 < 0 == (14 - v85 & v85) < 0 == (v86 != 0) ? v84 + 0xfffffffa : v84; // 0x51d5d2
        int64_t v88 = v18 % 0x10000 * (int64_t)(v54 % 0x10000); // 0x51d5ec
        int32_t v89 = (int32_t)&g1 - (int32_t)v87; // 0x51d5f2
        int32_t v90 = (int32_t)v88 % 0x10000 - v89; // 0x51d5f2
        v57 = v63 | (char)(v90 < 0 == (v90 & v89) < 0 == (v90 != 0));
        v55 = 0x10000 * (int32_t)(v87 + v88) >> 16;
        v50 = v49 + 1;
        v39 = v38;
        goto lab_0x51d607;
    }
  lab_0x51d607:
    // 0x51d607
    v82 = v57;
    v81 = v55;
    v78 = v50;
    v76 = v39;
    v83 = v57;
    v80 = v55;
    v79 = v50;
    v77 = v39;
    if (result8 == 0) {
        goto lab_0x51d80a;
    } else {
        goto lab_0x51d610;
    }
  lab_0x51d610:;
    int32_t v91 = v76;
    int32_t v92 = v78;
    int32_t v93 = v81;
    char v94 = v82;
    uint64_t v95 = *v64; // 0x51d610
    uint64_t v96 = *v65; // 0x51d615
    int64_t v97; // 0x51d1c0
    int64_t v98; // 0x51d1c0
    int32_t v99; // 0x51d1c0
    int32_t v100; // 0x51d1c0
    int64_t v101; // 0x51d1c0
    int32_t v102; // 0x51d1c0
    int32_t v103; // 0x51d1c0
    int32_t v104; // 0x51d1c0
    int32_t v105; // 0x51d1c0
    char v106; // 0x51d1c0
    char v107; // 0x51d1c0
    char v108; // 0x51d1c0
    if (v95 >= v96) {
        goto lab_0x51d998;
    } else {
        uint64_t v109 = v95 + 1; // 0x51d623
        *v64 = v109;
        if (v109 >= v96) {
            goto lab_0x51d998;
        } else {
            int64_t v110 = (int64_t)*(char *)v109; // 0x51d638
            v106 = v94;
            v105 = v93;
            v102 = v92;
            v99 = v91;
            v97 = v110;
            v108 = 0;
            v107 = v94;
            v104 = v93;
            v103 = v92;
            v100 = v91;
            v101 = v43;
            v98 = v110;
            if (v6 == 0) {
                goto lab_0x51d743;
            } else {
                goto lab_0x51d644;
            }
        }
    }
  lab_0x51d80a:
    // 0x51d80a
    v106 = v83;
    v105 = v80;
    v102 = v79;
    v99 = v77;
    v97 = v24;
    v108 = v21;
    v58 = v83;
    v45 = v79;
    v32 = v77;
    if (v6 == 0) {
        // break -> 0x51d663
        goto lab_0x51d663_5;
    }
    goto lab_0x51d644;
  lab_0x51d998:
    if ((int32_t)result8 == -1) {
        // 0x51d9e0
        return result3;
    }
    // 0x51d9ae
    v106 = v94;
    v105 = v93;
    v102 = v92;
    v99 = v91;
    v97 = v66;
    v108 = 0;
    v107 = v94;
    v104 = v93;
    v103 = v92;
    v100 = v91;
    v101 = v43;
    v98 = v66;
    if (v6 != 0) {
        goto lab_0x51d644;
    } else {
        goto lab_0x51d743;
    }
  lab_0x51d644:;
    int32_t v111 = v99;
    int32_t v112 = v102;
    int32_t v113 = v105;
    char v114 = v106;
    int64_t v115 = v43; // 0x51d64b
    if ((int32_t)v43 == -1) {
        uint64_t v116 = *(int64_t *)(v6 + 16); // 0x51d820
        result3 = v116;
        if (v116 >= *(int64_t *)(v6 + 24)) {
            // 0x51d9e0
            return result3;
        }
        // 0x51d82e
        v115 = (int64_t)*(char *)v116;
    }
    // 0x51d651
    v58 = v114;
    v45 = v112;
    v32 = v111;
    if (v108 == 0) {
        // break -> 0x51d663
        goto lab_0x51d663_5;
    }
    // 0x51d720
    result3 = 0;
    if (result8 == 0) {
        // 0x51d9e0
        return result3;
    }
    int64_t v117 = v115;
    v107 = v114;
    v104 = v113;
    v103 = v112;
    v100 = v111;
    v101 = v117;
    v98 = v97;
    if ((int32_t)v97 == -1) {
        uint64_t v118 = *v64; // 0x51d72f
        result3 = v118;
        if (v118 >= *v65) {
            // 0x51d9e0
            return result3;
        }
        // 0x51d73f
        v107 = v114;
        v104 = v113;
        v103 = v112;
        v100 = v111;
        v101 = v117;
        v98 = (int64_t)*(char *)v118;
    }
    goto lab_0x51d743;
  lab_0x51d743:
    // 0x51d743
    v62 = v107;
    v53 = v104;
    v48 = v103;
    v37 = v100;
    v30 = v98 & 0xffffffff;
    v42 = v101;
    v23 = v98;
    goto lab_0x51d58a_2;
  lab_0x51d670:
    // 0x51d670
    v61 = v59;
    result7 = v46;
    v34 = v35;
    v36 = v35;
    if ((char)result8 == 1 || v46 != 0) {
        goto lab_0x51d3b6;
    } else {
        goto lab_0x51d69b;
    }
  lab_0x51d275:;
    char v119 = v56; // 0x51d278
    int32_t v120 = v44; // 0x51d278
    int64_t v121; // 0x51d1c0
    int64_t v122; // 0x51d1c0
    int64_t v123; // 0x51d1c0
    int32_t v124; // 0x51d1c0
    int32_t v125; // 0x51d1c0
    char v126; // 0x51d1c0
    if ((char)v29 < 48) {
        goto lab_0x51d663;
    } else {
        // 0x51d27e
        v126 = v56;
        v125 = v51;
        v124 = v44;
        v122 = v27;
        v123 = v41;
        v121 = v26;
        v119 = v56;
        v120 = v44;
        if (n % 256 + 48 > v29) {
            goto lab_0x51d28e;
        } else {
            goto lab_0x51d663;
        }
    }
  lab_0x51d785:;
    int64_t v127 = v25;
    int64_t v128 = v40;
    int64_t v129 = v28;
    int32_t v130 = v47;
    int32_t v131 = v52;
    char v132 = v60;
    char v133 = v33;
    v126 = v132;
    v125 = v131;
    v124 = v130;
    v122 = v129;
    v123 = v128;
    v121 = v127;
    int64_t v134; // 0x51d1c0
    int64_t v135; // 0x51d1c0
    int64_t v136; // 0x51d1c0
    int64_t v137; // 0x51d1c0
    int64_t v138; // 0x51d1c0
    int32_t v139; // 0x51d1c0
    int32_t v140; // 0x51d1c0
    int32_t v141; // 0x51d1c0
    int32_t v142; // 0x51d1c0
    char v143; // 0x51d1c0
    char v144; // 0x51d1c0
    int64_t v145; // 0x51d1c0
    if (v133 < 58) {
        goto lab_0x51d28e;
    } else {
        if (v133 < 103) {
            // 0x51d8d0
            v143 = v132;
            v141 = v131;
            v139 = v130;
            v137 = v128;
            v134 = v127;
            v145 = v129 + 0xffffffa9;
            goto lab_0x51d291;
        } else {
            // 0x51d79d
            v119 = v132;
            v120 = v130;
            if (v133 < 71) {
                int64_t v146 = v129 + 0xffffffc9; // 0x51d7a5
                v144 = v132;
                v142 = v131;
                v140 = v130;
                v136 = v146;
                v138 = v128;
                v135 = v127;
                v119 = v132;
                v120 = v130;
                if ((int32_t)v146 != -1) {
                    goto lab_0x51d29a;
                } else {
                    goto lab_0x51d663;
                }
            } else {
                goto lab_0x51d663;
            }
        }
    }
  lab_0x51d3b6:
    // 0x51d3b6
    v36 = v34;
    if (v11 == 0) {
        // 0x51d3c1
        v36 = v34;
        if (v61 == 0) {
            // 0x51d9e0
            return result7;
        }
    }
    goto lab_0x51d69b;
  lab_0x51d69b:
    // 0x51d69b
    if (v36 != v17 + 16) {
        // 0x51d6cd
        function_4eeb50(v36);
    }
    // 0x51d6d2
    __readfsqword(40);
    return result8;
  lab_0x51d663:
    // 0x51d663
    v59 = v119;
    v46 = v120;
    v35 = v16;
    goto lab_0x51d670;
  lab_0x51d28e:
    // 0x51d28e
    v143 = v126;
    v141 = v125;
    v139 = v124;
    v137 = v123;
    v134 = v121;
    v145 = v122 + 0xffffffd0;
    goto lab_0x51d291;
  lab_0x51d291:
    // 0x51d291
    v144 = v143;
    v142 = v141;
    v140 = v139;
    v136 = v145;
    v138 = v137;
    v135 = v134;
    v119 = v143;
    v120 = v139;
    if ((int32_t)v145 == -1) {
        goto lab_0x51d663;
    } else {
        goto lab_0x51d29a;
    }
  lab_0x51d29a:;
    int64_t v147 = v135;
    int64_t v148 = v138;
    int32_t v149 = v140;
    int32_t v150 = v142;
    int32_t v151; // 0x51d1c0
    int32_t v152; // 0x51d1c0
    int32_t v153; // 0x51d1c0
    int32_t v154; // 0x51d1c0
    char v155; // 0x51d1c0
    char v156; // 0x51d1c0
    if (v20 < (int16_t)v150) {
        // 0x51d7d0
        v156 = 1;
        v154 = v150;
        v152 = v149;
        v155 = 1;
        v153 = v150;
        v151 = v149;
        if (result8 != 0) {
            goto lab_0x51d2d8;
        } else {
            goto lab_0x51d7de;
        }
    } else {
        uint32_t v157 = (0x10000 * v150 >> 16) * (0x10000 * (int32_t)v3 >> 16); // 0x51d2aa
        int32_t v158 = v136;
        int32_t v159 = (int32_t)&g1 - v158; // 0x51d2ba
        int32_t v160 = v157 % 0x10000 - v159; // 0x51d2ba
        char v161 = v144 | (char)(v160 < 0 == (v160 & v159) < 0 == (v160 != 0)); // 0x51d2c1
        int32_t v162 = v149 + 1; // 0x51d2c5
        int32_t v163 = 0x10000 * (v157 + v158) / 0x10000; // 0x51d2cd
        v156 = v161;
        v154 = v163;
        v152 = v162;
        v155 = v161;
        v153 = v163;
        v151 = v162;
        if (result8 == 0) {
            goto lab_0x51d7de;
        } else {
            goto lab_0x51d2d8;
        }
    }
  lab_0x51d2d8:;
    int64_t * v164 = (int64_t *)(result8 + 16); // 0x51d2d8
    uint64_t v165 = *v164; // 0x51d2d8
    uint64_t v166 = *(int64_t *)(result8 + 24); // 0x51d2dd
    result3 = v165;
    if (v165 >= v166) {
        // 0x51d9e0
        return result3;
    }
    int64_t v167 = v165 + 1; // 0x51d2eb
    *v164 = v167;
    result3 = v167;
    if (v166 <= v167) {
        // 0x51d9e0
        return result3;
    }
    int64_t v168 = (int64_t)*(char *)v167; // 0x51d300
    char v169 = v156; // 0x51d304
    int32_t v170 = v154; // 0x51d304
    int32_t v171 = v152; // 0x51d304
    int64_t v172 = v168; // 0x51d304
    char v173 = 0; // 0x51d304
    char v174 = v156; // 0x51d304
    int32_t v175 = v154; // 0x51d304
    int32_t v176 = v152; // 0x51d304
    int64_t v177 = v148; // 0x51d304
    int64_t v178 = v168; // 0x51d304
    if (v6 == 0) {
        goto lab_0x51d773;
    } else {
        goto lab_0x51d30c;
    }
  lab_0x51d7de:
    // 0x51d7de
    v169 = v155;
    v170 = v153;
    v171 = v151;
    v172 = v147;
    v173 = 1;
    char v179 = v155; // 0x51d7e1
    int32_t v180 = v151; // 0x51d7e1
    if (v6 == 0) {
        goto lab_0x51d321;
    } else {
        goto lab_0x51d30c;
    }
  lab_0x51d773:;
    int64_t v181 = v178 & 0xffffffff; // 0x51d779
    int64_t v182 = 0x100000000000000 * v178 >> 56; // 0x51d77c
    v56 = v174;
    v51 = v175;
    v44 = v176;
    v27 = v182;
    v29 = v181;
    v41 = v177;
    v26 = v178;
    v60 = v174;
    v52 = v175;
    v47 = v176;
    v28 = v182;
    v33 = v181;
    v40 = v177;
    v25 = v178;
    if (n < 11) {
        goto lab_0x51d275;
    } else {
        goto lab_0x51d785;
    }
  lab_0x51d30c:;
    int32_t v183 = v171;
    int32_t v184 = v170;
    char v185 = v169;
    int64_t v186 = v148; // 0x51d313
    if ((int32_t)v148 == -1) {
        uint64_t v187 = *(int64_t *)(v6 + 16); // 0x51d840
        result3 = v187;
        if (v187 >= *(int64_t *)(v6 + 24)) {
            // 0x51d9e0
            return result3;
        }
        // 0x51d84e
        v186 = (int64_t)*(char *)v187;
    }
    // 0x51d319
    v179 = v185;
    v180 = v183;
    if (v173 != 0) {
        // 0x51d750
        if (result8 == 0) {
            // 0x51d9e0
            return 0;
        }
        int64_t v188 = v186;
        v174 = v185;
        v175 = v184;
        v176 = v183;
        v177 = v188;
        v178 = v172;
        if ((int32_t)v172 == -1) {
            uint64_t v189 = *(int64_t *)(result8 + 16); // 0x51d75f
            result3 = v189;
            if (v189 >= *(int64_t *)(result8 + 24)) {
                // 0x51d9e0
                return result3;
            }
            // 0x51d76f
            v174 = v185;
            v175 = v184;
            v176 = v183;
            v177 = v188;
            v178 = (int64_t)*(char *)v189;
        }
        goto lab_0x51d773;
    } else {
        goto lab_0x51d321;
    }
  lab_0x51d321:
    // 0x51d321
    v59 = v179;
    v46 = v180;
    v35 = v16;
    goto lab_0x51d670;
}
