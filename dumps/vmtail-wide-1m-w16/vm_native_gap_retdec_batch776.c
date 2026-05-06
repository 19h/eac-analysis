/*
 * Targeted RetDec C for native executable gap queue batch 776.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x51d9c0-0x51dbc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51dbc0-0x51ddc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51ddc0-0x51dfc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x530eac-0x5310ac rank=- name=- kind=- bytes=- uncovered=-
 *   0x5310ac-0x5312ac rank=- name=- kind=- bytes=- uncovered=-
 *   0x5312ac-0x5314ac rank=- name=- kind=- bytes=- uncovered=-
 *   0x5314ac-0x5316ac rank=- name=- kind=- bytes=- uncovered=-
 *   0x5316ac-0x5318ac rank=- name=- kind=- bytes=- uncovered=-
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
extern int g2;
extern int g3;
extern int g4;
extern int g5;
extern int g6;
extern int g7;
extern int g8;
extern int g9;
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
int64_t __asm_emms(void);
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
void __asm_fldenv(int224_t value);
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
int256_t __asm_vprord(int256_t value, int count);
int256_t __asm_vpaddd(int256_t left, int256_t right);
int256_t __asm_vpxord(int256_t left, int256_t right);
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
int128_t __asm_pmulhw(int128_t left, int128_t right);
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

int64_t function_51d041();
int64_t function_51d044();
int64_t function_51d9c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, int64_t a8, int16_t a9, int64_t a10);
int64_t function_51df82(int64_t a1);
int64_t function_52b020();
int64_t function_52fb30();
int64_t function_530eac(void);
int64_t function_530ec0(int64_t a1, int64_t a2);
int64_t function_530ef8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_530f44(int64_t a1, int64_t a2, int64_t a3);
int64_t function_530f96(void);
int64_t function_530fe0(int64_t a1);
int64_t function_531010(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_542470();
int64_t function_54c860();
int64_t function_565970();
int64_t function_566390();
int64_t function_5679b0();
int64_t function_5679e0();
int64_t function_568500();
int64_t function_568730();

// Address range: 0x51d9c0 - 0x51df6c
int64_t function_51d9c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, int64_t a8, int16_t a9, int64_t a10) {
    // 0x51d9c0
    int64_t v1; // 0x51d9c0
    int64_t v2 = v1;
    if (*(int64_t *)(v2 + 16) < *(int64_t *)(v2 + 24)) {
        // 0x51d9d0
        return function_51d041();
    }
    if ((int32_t)v2 != -1) {
        function_51d041();
    }
    // 0x51ddb7
    return function_51d044();
}

// Address range: 0x51df82 - 0x51df83
int64_t function_51df82(int64_t a1) {
    // 0x51df82
    int64_t result; // 0x51df82
    return result;
}

// Address range: 0x530eac - 0x530eb5
int64_t function_530eac(void) {
    // 0x530eac
    int64_t v1; // 0x530eac
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x530eac
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return function_52fb30();
}

// Address range: 0x530ec0 - 0x530ef8
// From class:    std::__cxx11::numpunct<wchar_t>
// Type:          constructor
int64_t function_530ec0(int64_t a1, int64_t a2) {
    // 0x530ec0
    *(int64_t *)(a1 + 16) = 0;
    *(int32_t *)(a1 + 8) = (int32_t)(a2 != 0);
    *(int64_t *)a1 = (int64_t)&g2;
    return function_568500(a1, 0);
}

// Address range: 0x530ef8 - 0x530f44
// From class:    std::__cxx11::numpunct<wchar_t>
// Type:          constructor
int64_t function_530ef8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x530ef8
    int64_t v1; // 0x530ef8
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)(v1 + 16) = a2;
    *(int32_t *)(v1 + 8) = (int32_t)(a3 != 0) | ((int32_t)&g9 ^ (int32_t)&g9) & -256;
    *(int64_t *)v1 = (int64_t)&g2;
    return function_568500(v1, 0);
}

// Address range: 0x530f44 - 0x530f96
// From class:    std::__cxx11::numpunct<wchar_t>
// Type:          constructor
int64_t function_530f44(int64_t a1, int64_t a2, int64_t a3) {
    // 0x530f44
    int64_t v1; // 0x530f44
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)(v1 + 16) = 0;
    *(int32_t *)(v1 + 8) = (int32_t)(a3 != 0) | ((int32_t)&g9 ^ (int32_t)&g9) & -256;
    *(int64_t *)v1 = (int64_t)&g2;
    return function_568500(v1, (int32_t)a2);
}

// Address range: 0x530f96 - 0x530fd2
int64_t function_530f96(void) {
    // 0x530f96
    int64_t v1; // 0x530f96
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t result = *(int64_t *)((int64_t)&g9 + 16); // 0x530fb3
    if (result != g6) {
        // 0x530fd0
        return result;
    }
    // 0x530fc0
    return (int64_t)*(int32_t *)(*(int64_t *)(v1 + 16) + 72);
}

// Address range: 0x530fe0 - 0x531002
int64_t function_530fe0(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 24); // 0x530fe3
    if (result != g5) {
        // 0x531000
        return result;
    }
    // 0x530ff0
    return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 76);
}

// Address range: 0x531010 - 0x5318aa
int64_t function_531010(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = __readfsqword(40); // 0x53101d
    int64_t v2 = a3; // 0x53103b
    int64_t v3 = a2; // 0x53103b
    int64_t v4; // 0x531010
    int64_t v5; // 0x531010
    int64_t v6; // 0x531010
    int64_t v7; // 0x531010
    int64_t v8; // 0x531010
    int64_t v9; // bp-56, 0x531010
    int32_t len; // 0x53105c
    int64_t v10; // 0x53105c
    int64_t v11; // 0x531049
    if (*(int64_t *)(a2 + 32) != g8) {
        goto lab_0x531085;
    } else {
        int64_t v12 = result + 16; // 0x531045
        v11 = *(int64_t *)(*(int64_t *)(a2 + 16) + 16);
        int64_t * v13 = (int64_t *)result; // 0x53104d
        *v13 = v12;
        v7 = a3;
        v8 = a2;
        if (v11 == 0) {
            goto lab_0x5310f4;
        } else {
            char * str = (char *)v11; // 0x53105c
            len = strlen(str);
            v10 = len;
            v9 = v10;
            if (len < 16) {
                if (len != 1) {
                    // 0x5310e8
                    v4 = 0;
                    v2 = a3;
                    v5 = v12;
                    v3 = a2;
                    v6 = v12;
                    if (len == 0) {
                        goto lab_0x53107c;
                    } else {
                        goto lab_0x5310c3;
                    }
                } else {
                    unsigned char v14 = *str; // 0x531074
                    *(char *)v12 = v14;
                    v4 = v10;
                    v2 = v14;
                    v5 = v12;
                    v3 = a2;
                    goto lab_0x53107c;
                }
            } else {
                int64_t v15 = function_52b020(result, &v9, 0); // 0x5310b0
                *v13 = v15;
                *(int64_t *)v12 = v9;
                v6 = v15;
                goto lab_0x5310c3;
            }
        }
    }
  lab_0x531085:
    // 0x531085
    if (v1 == __readfsqword(40)) {
        // 0x531098
        return result;
    }
    // 0x5310ef
    __stack_chk_fail();
    v7 = v2;
    v8 = v3;
    goto lab_0x5310f4;
  lab_0x5310f4:
    // 0x5310f4
    function_542470("basic_string::_M_construct null not valid");
    int64_t v16 = __readfsqword(40); // 0x531109
    int64_t v17 = v8; // 0x531127
    if (*(int64_t *)(*(int64_t *)v8 + 40) == g4) {
        int64_t wstr = *(int64_t *)(*(int64_t *)(v8 + 16) + 40); // 0x531134
        *(int64_t *)"basic_string::_M_construct null not valid" = (int64_t)"_construct null not valid";
        int64_t v18 = -4; // 0x531142
        if (wstr != 0) {
            // 0x531144
            v18 = 4 * (int64_t)wcslen((int32_t *)wstr) + wstr;
        }
        // 0x531151
        function_54c860((int64_t)"basic_string::_M_construct null not valid", wstr, v18);
        v17 = wstr;
    }
    // 0x531164
    if (v16 == __readfsqword(40)) {
        // 0x531098
        return (int64_t)"basic_string::_M_construct null not valid";
    }
    // 0x531184
    __stack_chk_fail();
    int64_t v19 = __readfsqword(40); // 0x531199
    int64_t v20 = v17; // 0x5311b7
    if (*(int64_t *)(*(int64_t *)v17 + 48) == g7) {
        int64_t wstr2 = *(int64_t *)(*(int64_t *)(v17 + 16) + 56); // 0x5311c4
        *(int64_t *)"basic_string::_M_construct null not valid" = (int64_t)"_construct null not valid";
        int64_t v21 = -4; // 0x5311d2
        if (wstr2 != 0) {
            // 0x5311d4
            v21 = 4 * (int64_t)wcslen((int32_t *)wstr2) + wstr2;
        }
        // 0x5311e1
        function_54c860((int64_t)"basic_string::_M_construct null not valid", wstr2, v21);
        v20 = wstr2;
    }
    // 0x5311f4
    if (v19 == __readfsqword(40)) {
        // 0x531098
        return (int64_t)"basic_string::_M_construct null not valid";
    }
    // 0x531214
    __stack_chk_fail();
    *(int64_t *)"_construct null not valid" = 0;
    int64_t v22 = __readfsqword(40); // 0x531236
    *(int32_t *)"ring::_M_construct null not valid" = (int32_t)(v7 != 0);
    *(int64_t *)"basic_string::_M_construct null not valid" = (int64_t)&g2;
    function_568500((int64_t)"basic_string::_M_construct null not valid", 0);
    *(int64_t *)"basic_string::_M_construct null not valid" = (int64_t)&g3;
    bool v23; // 0x531010
    int64_t v24 = v23 ? -1 : 1;
    int64_t v25 = (int64_t)&g1; // 0x531010
    int64_t v26 = 2; // 0x531010
    unsigned char v27 = *(char *)v20; // 0x531283
    char v28 = *(char *)v25; // 0x531283
    int64_t v29 = v20 + v24; // 0x531283
    char v30 = v28; // 0x531283
    bool v31 = false; // 0x531283
    while (v27 == v28) {
        int64_t v32 = v26 - 1; // 0x531283
        v25 += v24;
        v26 = v32;
        v30 = v27;
        v31 = true;
        if (v32 == 0) {
            // break -> 
            break;
        }
        v27 = *(char *)v29;
        v28 = *(char *)v25;
        v29 += v24;
        v30 = v28;
        v31 = false;
    }
    unsigned char v33 = v30;
    int64_t v34 = (int64_t)"POSIX"; // 0x53128c
    int64_t v35 = v7; // 0x53128c
    int64_t v36 = v29; // 0x53128c
    if ((v27 >= v33 && !v31) != v27 < v33) {
        unsigned char v37 = *(char *)v20; // 0x53129d
        char v38 = *(char *)v34; // 0x53129d
        int64_t v39 = v20 + v24; // 0x53129d
        int64_t v40 = 5; // 0x53129d
        char v41 = v38; // 0x53129d
        bool v42 = false; // 0x53129d
        while (v37 == v38) {
            // 0x53128e
            v34 += v24;
            v41 = v37;
            v42 = true;
            if (v40 == 0) {
                // break -> 
                break;
            }
            v37 = *(char *)v39;
            v38 = *(char *)v34;
            v39 += v24;
            v40--;
            v41 = v38;
            v42 = false;
        }
        unsigned char v43 = v41;
        v35 = v7;
        v36 = v39;
        if ((v37 >= v43 && !v42) != v37 < v43) {
            // 0x5312c8
            int32_t v44; // bp-176, 0x531010
            function_5679b0((int64_t *)&v44, v20, 0, v40);
            function_568500((int64_t)"basic_string::_M_construct null not valid", v44);
            function_5679e0((int64_t *)&v44);
            v35 = 0;
            v36 = v44;
        }
    }
    int64_t result2 = __readfsqword(40) ^ v22; // 0x5312ad
    if (result2 == 0) {
        // 0x531098
        return result2;
    }
    // 0x5312ee
    __stack_chk_fail();
    function_568730((int64_t)"basic_string::_M_construct null not valid");
    _Unwind_Resume((struct _Unwind_Exception *)&g9);
    function_565970((int64_t)"basic_string::_M_construct null not valid");
    _Unwind_Resume((struct _Unwind_Exception *)&g9);
    int64_t v45 = *(int64_t *)v36; // 0x53132b
    *(int64_t *)((int64_t)&g9 + 16) = 0;
    int64_t v46 = __readfsqword(40); // 0x531336
    *(int32_t *)((int64_t)&g9 + 8) = (int32_t)(v35 != 0);
    *(int64_t *)&g9 = (int64_t)&g2;
    function_568500((int64_t)&g9, 0);
    *(int64_t *)&g9 = (int64_t)&g3;
    int64_t v47 = (int64_t)&g1; // 0x531010
    unsigned char v48 = *(char *)v45; // 0x531383
    char v49 = *(char *)v47; // 0x531383
    int64_t v50 = v45 + v24; // 0x531383
    int64_t v51 = 1; // 0x531383
    char v52 = v49; // 0x531383
    bool v53 = false; // 0x531383
    while (v48 == v49) {
        v47 += v24;
        v52 = v48;
        v53 = true;
        if (v51 == 0) {
            // break -> 
            break;
        }
        v48 = *(char *)v50;
        v49 = *(char *)v47;
        v50 += v24;
        v51--;
        v52 = v49;
        v53 = false;
    }
    unsigned char v54 = v52;
    int64_t v55 = (int64_t)"POSIX"; // 0x53138c
    int64_t v56 = v51; // 0x53138c
    int64_t v57 = v35; // 0x53138c
    int64_t v58 = v50; // 0x53138c
    if ((v48 >= v54 && !v53) != v48 < v54) {
        unsigned char v59 = *(char *)v45; // 0x53139d
        char v60 = *(char *)v55; // 0x53139d
        int64_t v61 = v45 + v24; // 0x53139d
        int64_t v62 = 5; // 0x53139d
        char v63 = v60; // 0x53139d
        bool v64 = false; // 0x53139d
        while (v59 == v60) {
            // 0x53138e
            v55 += v24;
            v63 = v59;
            v64 = true;
            if (v62 == 0) {
                // break -> 
                break;
            }
            v59 = *(char *)v61;
            v60 = *(char *)v55;
            v61 += v24;
            v62--;
            v63 = v60;
            v64 = false;
        }
        unsigned char v65 = v63;
        v56 = v62;
        v57 = v35;
        v58 = v61;
        if ((v59 >= v65 && !v64) != v59 < v65) {
            // 0x5313c8
            int32_t v66; // bp-216, 0x531010
            function_5679b0((int64_t *)&v66, v45, 0, v62);
            function_568500((int64_t)&g9, v66);
            function_5679e0((int64_t *)&v66);
            v56 = v62;
            v57 = 0;
            v58 = v66;
        }
    }
    int64_t result3 = __readfsqword(40) ^ v46; // 0x5313ad
    if (result3 == 0) {
        // 0x531098
        return result3;
    }
    // 0x5313ee
    __stack_chk_fail();
    function_568730((int64_t)&g9);
    _Unwind_Resume((struct _Unwind_Exception *)&g9);
    function_565970((int64_t)&g9);
    _Unwind_Resume((struct _Unwind_Exception *)&g9);
    __readfsqword(40);
    int64_t result4 = *(int64_t *)(*(int64_t *)(a6 + 208) + 24) + 8 * function_566390(); // 0x53149b
    int64_t v67 = *(int64_t *)result4; // 0x53149f
    if (v67 == 0) {
        // 0x531098
        return result4;
    }
    // 0x5314b0
    if (v56 == 0 || v58 == 0 || (int32_t)v57 == -1) {
        // 0x531098
        return (*(int32_t *)(a6 + 24) & 74) == 64 ? result4 : 10;
    }
    if ((int32_t)a5 == -1) {
        uint64_t result5 = *(int64_t *)(v56 + 16); // 0x531892
        if (result5 < *(int64_t *)(v56 + 24)) {
            // 0x5318a0
            return (int64_t)*(int32_t *)result5;
        }
        // 0x531098
        return result5;
    }
    char v68 = 0; // bp-304, 0x531548
    if (*(char *)(v67 + 32) != 0) {
        // 0x531f68
        return (int64_t)&v68;
    }
    // 0x531562
    return (int64_t)*(char *)(v67 + 328);
  lab_0x5310c3:
    // 0x5310c3
    memcpy((int64_t *)v6, (int64_t *)v11, len);
    v4 = v9;
    v2 = v10;
    v5 = v6;
    v3 = v11;
    goto lab_0x53107c;
  lab_0x53107c:
    // 0x53107c
    *(int64_t *)(result + 8) = v4;
    *(char *)(v5 + v4) = 0;
    goto lab_0x531085;
}
