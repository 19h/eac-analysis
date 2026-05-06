/*
 * Targeted RetDec C for native executable gap queue batch 833.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x354c8a-0x354e8a rank=- name=- kind=- bytes=- uncovered=-
 *   0x354e8a-0x35508a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35508a-0x35528a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35528a-0x35548a rank=- name=- kind=- bytes=- uncovered=-
 *   0x5318ac-0x531aac rank=- name=- kind=- bytes=- uncovered=-
 *   0x531aac-0x531cac rank=- name=- kind=- bytes=- uncovered=-
 *   0x531cac-0x531eac rank=- name=- kind=- bytes=- uncovered=-
 *   0x531eac-0x5320ac rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_354c8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_354c97(void);
int64_t function_354cfd(int64_t a1);
int64_t function_354d04(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_354d52(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_354db0(void);
int64_t function_354dd0(void);
int64_t function_354df1(int64_t a1, int64_t a2);
int64_t function_354dfa(int64_t a1);
int64_t function_354f2f(void);
int64_t function_354f72(void);
int64_t function_354fcb(void);
int64_t function_354fe2(void);
int64_t function_35504a(void);
int64_t function_355061(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_355075(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3550be(void);
int64_t function_355129(int64_t a1);
int64_t function_355191(void);
int64_t function_3551a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3551cb(void);
int64_t function_3551d2(void);
int64_t function_3551d4(int64_t a1);
int64_t function_3552aa(void);
int64_t function_355315(void);
int64_t function_3553e5(void);
int64_t function_3553e9(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_3553ee(void);
int64_t function_35545c(int64_t a1, int64_t a2);
int64_t function_5314fb();
int64_t function_531520();
int64_t function_5318ac(void);
int64_t function_5318b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int32_t a6, int32_t a7, int16_t a8);
int64_t function_ffffffff82d192c4();
int64_t unknown_ffffffffb56911b6();
int64_t unknown_fffffffffcb2db03();

// Address range: 0x354c8a - 0x354c93
int64_t function_354c8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x354c8a
    int64_t result; // 0x354c8a
    return result;
}

// Address range: 0x354c97 - 0x354c9a
int64_t function_354c97(void) {
    // 0x354c97
    int64_t result; // 0x354c97
    return result;
}

// Address range: 0x354cfd - 0x354d04
int64_t function_354cfd(int64_t a1) {
    // 0x354cfd
    return function_ffffffff82d192c4();
}

// Address range: 0x354d04 - 0x354d1d
int64_t function_354d04(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a3;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    uint32_t v2 = (int32_t)a4 % 32; // 0x354d0f
    int64_t result; // 0x354d04
    if (v2 != 0) {
        uint32_t v3 = *(int32_t *)&result; // 0x354d0f
        *(int32_t *)result = v3 >> 32 - v2 | v3 << v2;
    }
    *(char *)v1 = *(char *)&v1 ^ (char)(a4 / 256);
    return result;
}

// Address range: 0x354d52 - 0x354d5e
int64_t function_354d52(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 + 0x16473f01); // 0x354d52
    *v1 = *v1 + (char)a4;
    int64_t result; // 0x354d52
    return result;
}

// Address range: 0x354db0 - 0x354db8
int64_t function_354db0(void) {
    // 0x354db0
    return unknown_ffffffffb56911b6();
}

// Address range: 0x354dd0 - 0x354dd2
int64_t function_354dd0(void) {
    // 0x354dd0
    int64_t v1; // 0x354dd0
    return function_354dfa(v1);
}

// Address range: 0x354df1 - 0x354dfa
int64_t function_354df1(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(2 * a2 - 0x71c5eead); // 0x354df3
    int64_t result; // 0x354df1
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x354dfa - 0x354e0d
int64_t function_354dfa(int64_t a1) {
    // 0x354dfa
    int64_t v1; // 0x354dfa
    *(char *)v1 = (char)v1;
    uint64_t result = unknown_fffffffffcb2db03(); // 0x354dfd
    char * v2 = (char *)(result + 0x1e89a20); // 0x354e04
    *v2 = *v2 + (char)(result / 256);
    return result;
}

// Address range: 0x354f2f - 0x354f30
int64_t function_354f2f(void) {
    // 0x354f2f
    int64_t result; // 0x354f2f
    return result;
}

// Address range: 0x354f72 - 0x354f74
int64_t function_354f72(void) {
    // 0x354f72
    return function_354f2f();
}

// Address range: 0x354fcb - 0x354fd8
int64_t function_354fcb(void) {
    // 0x354fcb
    int64_t result; // 0x354fcb
    return result;
}

// Address range: 0x354fe2 - 0x354fe4
int64_t function_354fe2(void) {
    // 0x354fe2
    int64_t result; // 0x354fe2
    return result;
}

// Address range: 0x35504a - 0x35504b
int64_t function_35504a(void) {
    // 0x35504a
    int64_t result; // 0x35504a
    return result;
}

// Address range: 0x355061 - 0x355072
int64_t function_355061(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x355061
    int64_t v1; // 0x355061
    return v1 & 0xffffffff;
}

// Address range: 0x355075 - 0x35507c
int64_t function_355075(int64_t a1, int64_t a2, int64_t a3) {
    // 0x355075
    int64_t v1; // 0x355075
    uint64_t result = v1;
    char v2 = __asm_insb((int16_t)(2 * a3 & 254 | a3 & 0xff00 | (int64_t)((char)result > (char)(result / 256)))); // 0x355079
    *(char *)a1 = v2;
    return result;
}

// Address range: 0x3550be - 0x3550c0
int64_t function_3550be(void) {
    // 0x3550be
    return function_35504a();
}

// Address range: 0x355129 - 0x35512c
int64_t function_355129(int64_t a1) {
    // 0x355129
    int64_t result; // 0x355129
    return result;
}

// Address range: 0x355191 - 0x355192
int64_t function_355191(void) {
    // 0x355191
    int64_t result; // 0x355191
    return result;
}

// Address range: 0x3551a6 - 0x3551ad
int64_t function_3551a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3551a6
    int64_t v1; // 0x3551a6
    return v1 & -0xff01 | (int64_t)&g2;
}

// Address range: 0x3551cb - 0x3551cf
int64_t function_3551cb(void) {
    // 0x3551cb
    int64_t result; // 0x3551cb
    return result;
}

// Address range: 0x3551d2 - 0x3551d4
int64_t function_3551d2(void) {
    // 0x3551d2
    return function_355191();
}

// Address range: 0x3551d4 - 0x3551d5
int64_t function_3551d4(int64_t a1) {
    // 0x3551d4
    int64_t result; // 0x3551d4
    return result;
}

// Address range: 0x3552aa - 0x3552ab
int64_t function_3552aa(void) {
    // 0x3552aa
    int64_t result; // 0x3552aa
    return result;
}

// Address range: 0x355315 - 0x355317
int64_t function_355315(void) {
    // 0x355315
    return function_3552aa();
}

// Address range: 0x3553e5 - 0x3553e7
int64_t function_3553e5(void) {
    // 0x3553e5
    return function_3553ee();
}

// Address range: 0x3553e9 - 0x3553ee
int64_t function_3553e9(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x3553e9
    int64_t result; // 0x3553e9
    char * v1 = (char *)(result + 6 + result); // 0x3553e9
    *v1 = *v1 + (char)(a3 / 256);
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x3553ee - 0x355400
int64_t function_3553ee(void) {
    // 0x3553ee
    int64_t v1; // 0x3553ee
    int64_t v2 = v1 & 200 | 55; // 0x3553f4
    *(char *)-0x48d416fec2ff1778 = (char)v2;
    return v2 | v1 & -256;
}

// Address range: 0x35545c - 0x35546b
int64_t function_35545c(int64_t a1, int64_t a2) {
    // 0x35545c
    int64_t v1; // 0x35545c
    return v1 + 0x7a4f928f & 0xffffffff;
}

// Address range: 0x5318ac - 0x5318b4
int64_t function_5318ac(void) {
    // 0x5318ac
    int64_t result; // 0x5318ac
    char v1 = result;
    *(char *)result = 2 * v1;
    char * v2 = (char *)(result + 0xf49fff9); // 0x5318ae
    *v2 = *v2 + v1;
    return result;
}

// Address range: 0x5318b6 - 0x5320ac
int64_t function_5318b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int32_t a6, int32_t a7, int16_t a8) {
    // 0x5318b6
    int64_t v1; // 0x5318b6
    bool v2; // 0x5318b6
    if ((char)v2 == (char)v1) {
        function_5314fb();
    }
    int64_t v3 = 0xffffffff; // 0x5318cd
    if (v1 != 0) {
        if (a5 == -1) {
            uint64_t v4 = *(int64_t *)(v1 + 16); // 0x532088
            // 0x532096
            return v4 >= *(int64_t *)(v1 + 24) ? v4 : 0;
        }
        // 0x5318d8
        v3 = a5;
    }
    uint32_t v5 = *(int32_t *)(v1 + 224); // 0x5318db
    int64_t result = v5; // 0x5318db
    char * v6 = (char *)(v1 + 32); // 0x5318e2
    char v7 = *v6; // 0x5318e2
    int32_t v8 = v3; // 0x5318e7
    if (v5 != v8) {
        // 0x5318f0
        if (*(int32_t *)(v1 + 228) != v8) {
            // 0x532096
            return result;
        }
    }
    int32_t * v9; // 0x5318b6
    int64_t v10; // 0x5318b6
    int64_t v11; // 0x5318b6
    char v12; // 0x5318b6
    int32_t v13; // 0x5318b6
    int32_t v14; // 0x5318b6
    if (v7 == 0) {
        goto lab_0x53190c;
    } else {
        // 0x531902
        if (*(int32_t *)(v1 + 76) == v8) {
            // 0x531902
            v9 = (int32_t *)(v1 + 72);
            v14 = a6;
            v10 = result;
            v11 = v3;
            v12 = v7;
            v13 = a5;
            goto lab_0x531b6a;
        } else {
            goto lab_0x53190c;
        }
    }
  lab_0x531bac:;
    // 0x531bac
    int64_t v15; // 0x5318b6
    int64_t v16 = v15;
    int32_t v17; // 0x5318b6
    int64_t result2; // 0x5318b6
    if (*(int32_t *)(v1 + 232) != v17) {
        // 0x531bb5
        result2 = v16;
        if (*(int32_t *)(v1 + 236) != v17) {
            // 0x532096
            return result2;
        }
    }
    // 0x531bc2
    int64_t v18; // 0x5318b6
    int64_t v19; // 0x5318b6
    bool v20 = (int32_t)v19 == 0 | (int32_t)v18 == 16;
    int64_t v21 = v16 & -256 | (int64_t)v20; // 0x531bcf
    int64_t v22 = v21; // 0x531bd2
    int64_t v23 = 0; // 0x531bd2
    int64_t v24 = 16; // 0x531bd2
    result2 = v21;
    if (!v20) {
        // 0x532096
        return result2;
    }
    goto lab_0x531be9;
  lab_0x531be9:;
    int64_t v25 = v23; // 0x531bec
    int64_t v26 = v24; // 0x531bec
    int64_t v27 = v22; // 0x531bec
    int64_t v28 = v23; // 0x531bec
    int64_t v29 = v24; // 0x531bec
    int64_t v30; // 0x5318b6
    if (v30 == 0) {
        goto lab_0x531c98;
    } else {
        goto lab_0x531bf2;
    }
  lab_0x531c98:;
    int64_t v31 = v27; // 0x531c9b
    int64_t v32; // 0x5318b6
    int64_t v33 = v32; // 0x531c9b
    int64_t v34 = v19; // 0x531c9b
    int64_t v35; // 0x5318b6
    int64_t v36 = v35; // 0x531c9b
    int64_t v37 = v28; // 0x531c9b
    int64_t v38 = v29; // 0x531c9b
    result2 = v27;
    int64_t v39; // 0x5318b6
    if (v39 == 0) {
        // 0x532096
        return result2;
    }
    goto lab_0x531ca1;
  lab_0x531bf2:;
    int64_t v145 = v26;
    int64_t v144 = v25;
    int64_t * v147 = (int64_t *)(v30 + 16); // 0x531bf2
    uint64_t v148 = *v147; // 0x531bf2
    uint64_t v149 = *(int64_t *)(v30 + 24); // 0x531bf6
    int64_t v94; // 0x5318b6
    int64_t v91; // 0x5318b6
    int64_t v92; // 0x5318b6
    int64_t v88; // 0x5318b6
    int64_t v93; // 0x5318b6
    int64_t v90; // 0x5318b6
    if (v148 >= v149) {
        // 0x531e80
        v88 = v32 & 0xffffffff;
        v90 = v19 & 0xffffffff;
        goto lab_0x531eb0;
    } else {
        int64_t v150 = v148 + 4; // 0x531c03
        *v147 = v150;
        v88 = v32;
        v90 = v19;
        if (v149 > v150) {
            uint32_t v151 = *(int32_t *)v150; // 0x531c14
            v91 = v150;
            v92 = v32;
            v93 = v19;
            v94 = v151;
            if (v151 == -1) {
                goto lab_0x531ed8;
            } else {
                goto lab_0x531c21;
            }
        } else {
            goto lab_0x531eb0;
        }
    }
  lab_0x531ca1:;
    int64_t v40 = v38;
    int64_t v41 = v37;
    int64_t v42 = v36;
    int64_t v43 = v34;
    int64_t v44 = v31; // 0x531ca4
    int64_t v45 = v33; // 0x531ca4
    int64_t v46 = v43; // 0x531ca4
    int64_t v47 = 0; // 0x531ca4
    int64_t v48 = 0xffffffff; // 0x531ca4
    int64_t v49 = v42; // 0x531ca4
    int64_t v50 = v39; // 0x531ca4
    int64_t v51 = v41; // 0x531ca4
    int64_t v52 = v40; // 0x531ca4
    int64_t v53; // 0x5318b6
    int64_t v54; // 0x5318b6
    int64_t v55; // 0x5318b6
    int64_t v56; // 0x5318b6
    int64_t v57; // 0x5318b6
    int64_t v58; // 0x5318b6
    int64_t v59; // 0x5318b6
    int64_t v60; // 0x5318b6
    int64_t v61; // 0x5318b6
    int64_t v62; // 0x5318b6
    int64_t v63; // 0x5318b6
    char v64; // 0x5318b6
    char v65; // 0x5318b6
    if ((int32_t)v33 != -1) {
        goto lab_0x531d46;
    } else {
        uint64_t v66 = *(int64_t *)(v39 + 16); // 0x531cac
        v62 = v43;
        v60 = 0;
        v64 = 1;
        v57 = v42;
        v53 = v41;
        v55 = v40;
        v59 = v66;
        v63 = v43;
        v61 = 0;
        v65 = 1;
        v58 = v42;
        v54 = v41;
        v56 = v40;
        if (v66 < *(int64_t *)(v39 + 24)) {
            goto lab_0x531cf6;
        } else {
            goto lab_0x531cbd;
        }
    }
  lab_0x531d46:;
    int64_t v67 = v44; // 0x531d4e
    int64_t v68 = v45; // 0x531d4e
    int64_t v69 = v46; // 0x531d4e
    int64_t v70 = v47; // 0x531d4e
    int64_t v71 = v48; // 0x531d4e
    char v72 = *v6; // 0x531d4e
    int64_t v73 = v49; // 0x531d4e
    int64_t v74 = v50; // 0x531d4e
    int64_t v75 = v51; // 0x531d4e
    int64_t v76 = v52; // 0x531d4e
    if ((char)v51 == 0) {
        // break -> 0x531d58
        goto lab_0x531d58;
    }
    goto lab_0x531b7d;
  lab_0x531eb0:;
    int64_t v85 = *(int64_t *)v30; // 0x531eb0
    int64_t v86 = v85 & 0xffffffff; // 0x531ec0
    int64_t v87 = v88 & 0xffffffff; // 0x531ec3
    int64_t v89 = v90 & 0xffffffff; // 0x531ec7
    v91 = v85;
    v92 = v87;
    v93 = v89;
    v94 = v86;
    int64_t v95 = v85; // 0x531ece
    int64_t v96 = v87; // 0x531ece
    int64_t v97 = v89; // 0x531ece
    int64_t v98 = v86; // 0x531ece
    if ((int32_t)v85 != -1) {
        goto lab_0x531c21;
    } else {
        goto lab_0x531ed8;
    }
  lab_0x531cf6:;
    int64_t v99 = (int64_t)*(int32_t *)v59; // 0x531cf6
    int64_t v100 = v63; // 0x531cf6
    int64_t v101 = v61; // 0x531cf6
    char v102 = v65; // 0x531cf6
    int64_t v103 = v58; // 0x531cf6
    int64_t v104 = v54; // 0x531cf6
    int64_t v105 = v56; // 0x531cf6
    goto lab_0x531cf8;
  lab_0x531cbd:
    // 0x531cbd
    v99 = *(int64_t *)v39 & 0xffffffff;
    v100 = v62 & 0xffffffff;
    v101 = v60;
    v102 = v64;
    v103 = 0x10000 * (int32_t)v57 >> 16;
    v104 = v53;
    v105 = v55;
    goto lab_0x531cf8;
  lab_0x531c21:;
    int64_t v141 = v94;
    int64_t v142 = v93;
    int64_t v143 = v92;
    int64_t v113 = v91; // 0x531c24
    int64_t v114 = v143; // 0x531c24
    int64_t v115 = v142; // 0x531c24
    int64_t v116 = v30; // 0x531c24
    int64_t v117 = v141; // 0x531c24
    int64_t v118 = 0; // 0x531c24
    int64_t v119 = v144; // 0x531c24
    int64_t v120 = v145; // 0x531c24
    if (v39 == 0) {
        goto lab_0x531d70;
    } else {
        if ((int32_t)v143 != -1) {
            // 0x531c33
            return function_531520();
        }
        uint64_t v146 = *(int64_t *)(v39 + 16); // 0x531cea
        v62 = v142;
        v60 = v30;
        v64 = 0;
        v57 = v141;
        v53 = v144;
        v55 = v145;
        v59 = v146;
        v63 = v142;
        v61 = v30;
        v65 = 0;
        v58 = v141;
        v54 = v144;
        v56 = v145;
        if (v146 >= *(int64_t *)(v39 + 24)) {
            goto lab_0x531cbd;
        } else {
            goto lab_0x531cf6;
        }
    }
  lab_0x531ed8:
    // 0x531ed8
    v31 = v95;
    v33 = v96;
    v34 = v97;
    v36 = v98;
    v37 = v144;
    v38 = v145;
    if (v39 == 0) {
        // 0x531ee1
        return function_531520();
    }
    goto lab_0x531ca1;
  lab_0x531cf8:;
    int64_t v106 = v99;
    if (v102 == (char)(v106 == 0xffffffff)) {
        // 0x531c33
        return function_531520();
    }
    int64_t v107 = v101;
    int64_t v108 = v106 == 0xffffffff;
    result2 = v108;
    if (v107 == 0) {
        // 0x532096
        return result2;
    }
    int64_t v109 = v105;
    int64_t v110 = v104;
    int64_t v111 = v100;
    int64_t v112 = v106 == 0xffffffff ? 0 : v39; // 0x531d00
    v113 = v108;
    v114 = v106;
    v115 = v111;
    v116 = v107;
    v117 = v103;
    v118 = v112;
    v119 = v110;
    v120 = v109;
    if ((int32_t)v103 != -1) {
        goto lab_0x531d70;
    } else {
        uint64_t v121 = *(int64_t *)(v107 + 16); // 0x531d1f
        result2 = v121;
        if (v121 >= *(int64_t *)(v107 + 24)) {
            // 0x532096
            return result2;
        }
        uint32_t v122 = *(int32_t *)v121; // 0x531d2d
        int64_t v123 = v122; // 0x531d2d
        v44 = 0;
        v45 = v106;
        v46 = v111;
        v47 = v122 == -1 ? 0 : v107;
        v48 = v122 != -1 ? v123 : 0xffffffff;
        v49 = v123;
        v50 = v112;
        v51 = v110;
        v52 = v109;
        goto lab_0x531d46;
    }
  lab_0x531d70:
    // 0x531d70
    v44 = v113;
    v45 = v114;
    v46 = v115;
    v47 = v116;
    v48 = v117 & 0xffffffff;
    v49 = v117;
    v50 = v118;
    v51 = v119;
    v52 = v120;
    goto lab_0x531d46;
  lab_0x53190c:;
    int32_t * v124 = (int32_t *)(v1 + 72);
    v9 = v124;
    v14 = a6;
    v10 = result;
    v11 = v3;
    v12 = v7;
    v13 = a5;
    char v125; // 0x5318b6
    int64_t v126; // 0x5318b6
    int32_t v127; // 0x5318b6
    int32_t v128; // 0x5318b6
    if (*v124 == v8) {
        goto lab_0x531b6a;
    } else {
        // 0x531916
        v126 = result;
        v127 = a5;
        if (v1 == 0) {
            goto lab_0x531ae0;
        } else {
            int64_t * v129 = (int64_t *)(v1 + 16); // 0x53191f
            uint64_t v130 = *v129; // 0x53191f
            uint64_t v131 = *(int64_t *)(v1 + 24); // 0x531923
            result2 = v130;
            if (v130 >= v131) {
                // 0x532096
                return result2;
            }
            int64_t v132 = v130 + 4; // 0x531930
            *v129 = v132;
            result2 = v132;
            if (v132 >= v131) {
                // 0x532096
                return result2;
            }
            uint32_t v133 = *(int32_t *)v132; // 0x531941
            v126 = 0xffffffff;
            v127 = -1;
            if (v133 == -1) {
                goto lab_0x531ae0;
            } else {
                // 0x531950
                result2 = v133;
                if (v1 == 0) {
                    // 0x532096
                    return result2;
                }
                // 0x531959
                v125 = 0;
                v128 = v133;
                if (a6 != -1) {
                    // 0x531967
                    return function_531520();
                }
                goto lab_0x531afc;
            }
        }
    }
  lab_0x531b6a:
    // 0x531b6a
    v67 = v10;
    v68 = v14;
    v69 = a3;
    int64_t v134; // 0x5318b6
    v70 = v134;
    v71 = v11;
    v72 = v12;
    v73 = v13;
    int64_t v135; // 0x5318b6
    v74 = v135;
    v75 = 0;
    while (true) {
      lab_0x531b7d:
        // 0x531b7d
        v18 = v76;
        int64_t v77 = v75;
        v39 = v74;
        v35 = v73;
        int64_t v78 = v71;
        v30 = v70;
        v19 = v69;
        v32 = v68;
        int64_t v79 = v67;
        int32_t v80; // 0x5318b6
        if (v72 == 0) {
            // 0x531b7d
            v80 = v78;
        } else {
            int32_t v81 = v78;
            v80 = v81;
            if (*(int32_t *)(v1 + 76) == v81) {
                // break -> 0x531d58
                break;
            }
        }
        // 0x531b8c
        v17 = v80;
        if (*v9 == v17) {
            // break -> 0x531d58
            break;
        }
        // 0x531b96
        if (*(int32_t *)(v1 + 240) == v17) {
            int32_t v82 = v18; // 0x531c54
            unsigned char v83 = (char)v77 ^ 1 | (char)(v82 == 10); // 0x531c5b
            int64_t v84 = v79 & -256 | (int64_t)v83; // 0x531c5b
            v15 = v84;
            if (v83 == 0) {
                goto lab_0x531bac;
            } else {
                if ((int32_t)v19 != 0 && v82 != 8) {
                    // 0x531f00
                    v22 = v84;
                    v23 = v84 & 0xffffffff;
                    v24 = v18;
                    goto lab_0x531be9;
                } else {
                    // 0x531c7b
                    v25 = 1;
                    v26 = 8;
                    v27 = v84;
                    v28 = 1;
                    v29 = 8;
                    if (v30 != 0) {
                        goto lab_0x531bf2;
                    } else {
                        goto lab_0x531c98;
                    }
                }
            }
        } else {
            // 0x531ba3
            v15 = v79;
            if ((char)v77 == 0) {
                // break -> 0x531d58
                break;
            }
            goto lab_0x531bac;
        }
    }
  lab_0x531d58:
    // 0x531d58
    return function_531520();
  lab_0x531ae0:;
    int64_t v136 = 0; // 0x531ae3
    v125 = 1;
    v128 = v127;
    result2 = v126;
    if (a6 != -1 || v1 == 0) {
        // 0x532096
        return result2;
    }
    goto lab_0x531afc;
  lab_0x531afc:;
    uint64_t v137 = *(int64_t *)(v1 + 16); // 0x531afc
    result2 = v137;
    if (v137 >= *(int64_t *)(v1 + 24)) {
        // 0x532096
        return result2;
    }
    int32_t v138 = *(int32_t *)v137; // 0x531b0c
    if (v125 == (char)(v138 == -1)) {
        // 0x531967
        return function_531520();
    }
    // 0x531b2e
    result2 = v138 == -1;
    if (v136 == 0 || v128 != -1) {
        // 0x532096
        return result2;
    }
    uint64_t v139 = *(int64_t *)(v136 + 16); // 0x531b41
    result2 = v139;
    if (v139 >= *(int64_t *)(v136 + 24)) {
        // 0x532096
        return result2;
    }
    uint32_t v140 = *(int32_t *)v139; // 0x531b4f
    v9 = v124;
    v14 = v138;
    v10 = 0;
    v134 = v140 == -1 ? 0 : v136;
    v11 = v140;
    v12 = *v6;
    v135 = v138 == -1 ? 0 : v1;
    v13 = v140;
    goto lab_0x531b6a;
}
