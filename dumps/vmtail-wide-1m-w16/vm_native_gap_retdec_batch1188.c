/*
 * Targeted RetDec C for native executable gap queue batch 1188.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1a92bb-0x1a94bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x36959e-0x36979e rank=- name=- kind=- bytes=- uncovered=-
 *   0x36979e-0x36999e rank=- name=- kind=- bytes=- uncovered=-
 *   0x36999e-0x369b9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x369b9e-0x369d9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x369d9e-0x369f9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x369f9e-0x36a19e rank=- name=- kind=- bytes=- uncovered=-
 *   0x36a19e-0x36a39e rank=- name=- kind=- bytes=- uncovered=-
 *   0x36a39e-0x36a59e rank=- name=- kind=- bytes=- uncovered=-
 *   0x41cbcb-0x41cdcb rank=- name=- kind=- bytes=- uncovered=-
 *   0x41cdcb-0x41cfcb rank=- name=- kind=- bytes=- uncovered=-
 *   0x41cfcb-0x41d1cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x41d1cb-0x41d3cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x41d3cb-0x41d5cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x41d5cb-0x41d7cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x41d9cb-0x41dbcb rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
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
int64_t __asm_fnstenv();
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
int128_t __asm_packsswb(int128_t left, int128_t right);
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

int64_t function_14ade586();
int64_t function_1a92bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1a93ee(void);
int64_t function_1a9407(void);
int64_t function_1ce6d3b8();
int64_t function_26453bc1();
int64_t function_2a37079b();
int64_t function_2f6b44ec();
int64_t function_36958c();
int64_t function_36959e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3695cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_36976e(int64_t a1, int64_t a2);
int64_t function_369847(int64_t a1);
int64_t function_369901(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3699ad(void);
int64_t function_3699c0(int64_t a1);
int64_t function_369a0d(int64_t a1);
int64_t function_369a74(int64_t a1, int64_t a2);
int64_t function_369a95(int64_t a1, int64_t a2);
int64_t function_369ad1(void);
int64_t function_369ae2(void);
int64_t function_369bc4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_369be1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_369c3c(void);
int64_t function_369c4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_369c7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_369c94(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_369d4e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_369d74(void);
int64_t function_369e29(int64_t a1);
int64_t function_369e52(int64_t a1);
int64_t function_369e5e(void);
int64_t function_369e67(void);
int64_t function_369e9f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_369f9d(void);
int64_t function_369fa0(void);
int64_t function_369fab(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_369fbb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_36a02e(void);
int64_t function_36a06b(void);
int64_t function_36a070(void);
int64_t function_36a09a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_36a23d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_36a3e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_36a57c(void);
int64_t function_41cbcb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41cc0e(int64_t a1);
int64_t function_41cc4d(void);
int64_t function_41cd0f(void);
int64_t function_41cd30(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41cd74(void);
int64_t function_41cd78(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41cd9b(void);
int64_t function_41cdb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41cded(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41ce03(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41ce45(void);
int64_t function_41ce6a(void);
int64_t function_41ce6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41ceae(void);
int64_t function_41ceb2(void);
int64_t function_41ceba(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41cee7(void);
int64_t function_41ceec(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41cef8(void);
int64_t function_41cf02(void);
int64_t function_41cf0a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_41d08b(void);
int64_t function_41d0a1(int64_t a1);
int64_t function_41d0ab(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41d0cd(void);
int64_t function_41d10a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_41d19c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41d222(void);
int64_t function_41d229(int64_t a1);
int64_t function_41d256(void);
int64_t function_41d26a(void);
int64_t function_41d26c(int64_t a1, int64_t a2);
int64_t function_41d274(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41d292(int64_t a1, int32_t a2, int64_t a3, int64_t a4);
int64_t function_41d2a0(void);
int64_t function_41d2cf(void);
int64_t function_41d2d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_41d475(void);
int64_t function_41d4cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41d4ea(void);
int64_t function_41d50b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_41d680(int64_t a1);
int64_t function_41d6ce(void);
int64_t function_41d6ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41d711(int64_t a1);
int64_t function_41d720(int64_t a1);
int64_t function_41d79a(void);
int64_t function_41d7c4(int64_t a1);
int64_t function_41d9cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41d9dd(void);
int64_t function_41da5e(void);
int64_t function_41da69(int64_t a1);
int64_t function_41da91(int64_t a1);
int64_t function_41dae7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41db83(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5a258();
int64_t function_c57b8();
int64_t function_cc59c();
int64_t function_ffffffff864bf174();
int64_t function_ffffffffaed41fab();
int64_t function_ffffffffba559e3d();
int64_t function_fffffffff3c697ad();
int64_t unknown_1ac0ff0b();
int64_t unknown_1fe03aca();
int64_t unknown_24181b1a();
int64_t unknown_32c5b89a();
int64_t unknown_36e24b80();
int64_t unknown_3a6061b3();
int64_t unknown_6837e88e();
int64_t unknown_7b2f1a0();
int64_t unknown_83bfc8b();
int64_t unknown_ffffffff8e41281c();
int64_t unknown_ffffffffa643d7af();
int64_t unknown_ffffffffac6efffc();
int64_t unknown_ffffffffb3c8e33e();
int64_t unknown_ffffffffbea79fc1();
int64_t unknown_ffffffffc77f02c2();
int64_t unknown_ffffffffd3387ef6();
int64_t unknown_ffffffffe58a6d13();
int64_t unknown_ffffffffe90c7505();
int64_t unknown_fffffffff33af90f();
int64_t unknown_fffffffffbdb08a9();

// Address range: 0x1a92bb - 0x1a9347
int64_t function_1a92bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1a92bb
    int64_t v1; // 0x1a92bb
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t v3; // 0x1a92bb
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return function_cc59c();
}

// Address range: 0x1a93ee - 0x1a93f4
int64_t function_1a93ee(void) {
    // 0x1a93ee
    int64_t result; // 0x1a93ee
    return result;
}

// Address range: 0x1a9407 - 0x1a9408
int64_t function_1a9407(void) {
    // 0x1a9407
    int64_t result; // 0x1a9407
    return result;
}

// Address range: 0x36959e - 0x3695bc
int64_t function_36959e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36959e
    bool v1; // 0x36959e
    if (!v1) {
        function_36958c();
    }
    int64_t v2 = unknown_ffffffffa643d7af(*(int32_t *)(a1 + 0x106e8982) + (int32_t)a1); // 0x3695a9
    int64_t v3; // 0x36959e
    *(char *)(v3 & 0xffffffff) = 0;
    return v2 & 0x6e60ffd5 | 0x919f002a;
}

// Address range: 0x3695cb - 0x369712
int64_t function_3695cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3695cb
    int64_t v1; // 0x3695cb
    int64_t v2 = v1;
    bool v3; // 0x3695cb
    int64_t v4 = 256 * (int64_t)v3; // 0x3695cc
    int64_t v5 = 512 * (int64_t)v3; // 0x3695cc
    int64_t v6 = 1024 * (int64_t)v3; // 0x3695cc
    int64_t v7 = 0x4000 * (int64_t)v3; // 0x3695cc
    int64_t v8 = v7 | 2048 * (int64_t)v3 | v6 | v5 | v4 | 128 * (int64_t)v3 | 64 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3 | 2; // 0x3695cc
    uint64_t v9 = __asm_sti(a1); // 0x3695d2
    int64_t v10 = (int32_t)a3 >> 1; // 0x3695d8
    char * v11 = (char *)v10; // 0x3695da
    char v12 = v1; // 0x3695da
    *v11 = *v11 | v12;
    char * v13 = (char *)(v10 + 24); // 0x3695dd
    unsigned char v14 = *v13; // 0x3695dd
    unsigned char v15 = v14 + (char)(v9 / 256); // 0x3695dd
    *v13 = v15;
    int64_t v16 = (int64_t)&v8; // bp-8, 0x3695e0
    if (v15 < v14) {
        // 0x3695e3
        return v9 & 0xffffffff;
    }
    int64_t v17 = (int64_t)&v16; // 0x3695e0
    uint32_t v18 = *(int32_t *)(v10 + 0x1e80107); // 0x3695eb
    char * v19 = (char *)(2 * v1); // 0x3695ee
    *v19 = *v19 | 7;
    int64_t v20 = unknown_ffffffffd3387ef6(); // 0x3695f4
    char * v21 = (char *)(v2 + 111 + 8 * v2); // 0x3695f9
    *v21 = *v21 | (char)(v18 / 256);
    char * v22 = (char *)(v20 + 0x1856ad07); // 0x3695ff
    char v23 = *v22; // 0x3695ff
    char v24 = v23 + v12; // 0x3695ff
    *v22 = v24;
    int64_t v25 = unknown_1ac0ff0b(); // 0x369605
    uint32_t v26 = v18 % 32; // 0x36960a
    bool v27 = ((v24 ^ v23) & (v24 ^ v12)) < 0; // 0x36960a
    int64_t v28 = v17; // 0x36960a
    if (v26 != 0) {
        int32_t v29 = v17; // 0x36960a
        uint32_t v30 = v29 << v26; // 0x36960a
        v27 = v26 == 1 ? (v29 << v26 - 1 ^ v30) < 0 : ((v24 ^ v23) & (v24 ^ v12)) < 0;
        v28 = v30;
    }
    int64_t v31 = v1 & 0xffffffff ^ v10; // 0x3695fd
    char v32 = v25 / 256; // 0x36960e
    int64_t v33 = v28 - 8; // 0x36960f
    int64_t * v34 = (int64_t *)v33; // 0x36960f
    *v34 = v7 | v6 | v5 | v4 | (int64_t)((v25 & 256) != 0) | 128 * (int64_t)(v32 < 0) | 4 * (int64_t)((v32 & 4) != 0) | 16 * (int64_t)((v32 & 16) != 0) | 64 * (int64_t)((v32 & 64) != 0) | 2048 * (int64_t)v27 | 2;
    char v35 = __asm_insb((int16_t)v31); // 0x369610
    char * v36 = (char *)a1; // 0x369610
    *v36 = v35;
    int64_t v37 = (int64_t)v18 - 1; // 0x369612
    if (v37 == 0) {
        // 0x369614
        return unknown_24181b1a() ^ 74;
    }
    // 0x36964f
    *v34 = -0x4561f800;
    int32_t * v38 = (int32_t *)v31;
    uint32_t v39 = (int32_t)v37 % 32; // 0x369669
    char * v40 = (char *)v31; // 0x36966b
    int64_t v41 = v25; // 0x36964f
    int64_t v42 = v33; // 0x36964f
    int32_t v43 = *v38 - 0x20fa9fa0; // 0x369662
    int32_t v44 = v43; // 0x369669
    if (v39 != 0) {
        v44 = v43 >> v39 | v43 << 32 - v39;
    }
    v41 &= 0xb1801e8;
    *v38 = v44;
    char v45 = v41;
    unsigned char v46 = *v40 + v45; // 0x36966b
    *v40 = v46;
    *(int64_t *)(v42 - 8) = v41;
    v42 -= 16;
    while (v46 < 0) {
        // 0x369655
        v43 = *v38 - 0x20fa9fa0;
        v44 = v43;
        if (v39 != 0) {
            v44 = v43 >> v39 | v43 << 32 - v39;
        }
        v41 &= 0xb1801e8;
        *v38 = v44;
        v45 = v41;
        v46 = *v40 + v45;
        *v40 = v46;
        *(int64_t *)(v42 - 8) = v41;
        v42 -= 16;
    }
    // 0x369671
    *v36 = v45;
    *v38 = *v38 - 0x17866552;
    char * v47 = (char *)(v1 & -256 | 121); // 0x3696e5
    *v47 = *v47 + 121;
    *(int32_t *)-0x7fe9c56e8cfe17b8 = (int32_t)v41;
    __asm_iretd(((*v34 & (int64_t)&g1) == 0 ? 1 : -1) + a1);
    unknown_ffffffffac6efffc();
    int64_t v48 = unknown_ffffffffe90c7505(); // 0x3696ff
    return v48 + 0x5c136184 & 0xffffff00 | (int64_t)*(char *)0x4a28867c01e87c1e;
}

// Address range: 0x36976e - 0x3697a3
int64_t function_36976e(int64_t a1, int64_t a2) {
    // 0x36976e
    int32_t v1; // 0x36976e
    int64_t v2; // 0x36976e
    *(int32_t *)(v2 - 0x374e0164) = (int32_t)(int64_t)&v1;
    char * v3 = (char *)(a1 - 82);
    while (true) {
        // 0x369777
        int64_t v4; // 0x36976e
        int64_t v5 = v4;
        int32_t v6 = __asm_in_133(-29); // 0x369777
        int64_t v7; // 0x36976e
        int64_t v8 = v7 - 8; // 0x369779
        *(int64_t *)v8 = (int64_t)v6;
        uint64_t v9 = unknown_36e24b80(); // 0x36977a
        char * v10 = (char *)(v9 + 0x48d7c900); // 0x36977f
        *v10 = *v10 + (char)v9;
        int64_t v11; // 0x36976e
        char * v12 = (char *)(v11 + 1); // 0x369785
        *v12 = *v12 + (char)(v9 / 256);
        int64_t v13 = unknown_6837e88e(); // 0x369788
        int64_t v14; // 0x36976e
        char v15 = v14; // 0x36978f
        *v3 = *v3 + v15;
        int64_t v16 = 2 * v5 & 254 | v5 & -256; // 0x369793
        *(char *)0x3a2ca601e858923a = v15;
        v11 = (int32_t)v14 >> 31;
        v4 = v16;
        v7 = (int64_t)(*(int32_t *)(v16 + 69) | (int32_t)v8);
        v14 = v13 & 0xffffffff;
    }
}

// Address range: 0x369847 - 0x36984b
int64_t function_369847(int64_t a1) {
    // 0x369847
    int64_t result; // 0x369847
    return result;
}

// Address range: 0x369901 - 0x36990a
int64_t function_369901(int64_t a1, int64_t a2, int64_t a3) {
    // 0x369901
    int64_t v1; // 0x369901
    return v1 & 0xffffffff;
}

// Address range: 0x3699ad - 0x3699b2
int64_t function_3699ad(void) {
    // 0x3699ad
    return function_ffffffffaed41fab();
}

// Address range: 0x3699c0 - 0x3699c1
int64_t function_3699c0(int64_t a1) {
    // 0x3699c0
    int64_t result; // 0x3699c0
    return result;
}

// Address range: 0x369a0d - 0x369a0e
int64_t function_369a0d(int64_t a1) {
    // 0x369a0d
    int64_t result; // 0x369a0d
    return result;
}

// Address range: 0x369a74 - 0x369a95
int64_t function_369a74(int64_t a1, int64_t a2) {
    // 0x369a74
    int64_t v1; // 0x369a74
    int64_t v2 = v1;
    int64_t v3 = a2;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    int64_t v4; // 0x369a74
    uint64_t v5 = v4;
    *(char *)v5 = *(char *)&v4 + (char)(v5 / 256);
    int64_t v6 = v4;
    *(char *)v6 = *(char *)&v4 + (char)v6;
    if ((int32_t)v4 < 0x3902201) {
        // 0x369a92
        return v4 & -256 | (int64_t)*(char *)&v3;
    }
    int32_t * v7 = (int32_t *)(a1 - 0x311dab6f); // 0x369a8b
    *v7 = *v7 + (int32_t)v1;
    return v4 | 232;
}

// Address range: 0x369a95 - 0x369aa6
int64_t function_369a95(int64_t a1, int64_t a2) {
    // 0x369a95
    int64_t result; // 0x369a95
    return result;
}

// Address range: 0x369ad1 - 0x369ad2
int64_t function_369ad1(void) {
    // 0x369ad1
    int64_t result; // 0x369ad1
    return result;
}

// Address range: 0x369ae2 - 0x369ae4
int64_t function_369ae2(void) {
    // 0x369ae2
    return function_369ad1();
}

// Address range: 0x369bc4 - 0x369bcb
int64_t function_369bc4(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_1fe03aca(a1, a2, a3); // 0x369bc4
    *(char *)a1 = __asm_insb((int16_t)a3);
    return result;
}

// Address range: 0x369be1 - 0x369be5
int64_t function_369be1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x369be1
    int64_t result; // 0x369be1
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x369c3c - 0x369c3d
int64_t function_369c3c(void) {
    // 0x369c3c
    int64_t result; // 0x369c3c
    return result;
}

// Address range: 0x369c4e - 0x369c5c
int64_t function_369c4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x369c4e
    int64_t v1; // 0x369c4e
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 ^ -128;
    int64_t v3; // 0x369c4e
    int64_t v4 = v3;
    *(int32_t *)v4 = *(int32_t *)&v3 + (int32_t)v4;
    int64_t v5; // 0x369c4e
    *(int32_t *)a1 = *(int32_t *)&v5;
    int32_t * v6 = (int32_t *)(v1 + 1); // 0x369c57
    *v6 = *v6 + (int32_t)a4;
    return function_369c3c();
}

// Address range: 0x369c7e - 0x369c93
int64_t function_369c7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x369c7e
    unknown_83bfc8b();
    return function_2a37079b(a7);
}

// Address range: 0x369c94 - 0x369cbb
int64_t function_369c94(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x369c94
    __asm_out((int16_t)a3, (int32_t)unknown_32c5b89a());
    __asm_iretd(a1);
    int64_t result = unknown_fffffffffbdb08a9(); // 0x369ca3
    int64_t v1; // 0x369c94
    __asm_packsswb(v1, *(int64_t *)(a1 + 0x625c7d44 + a3));
    *(int32_t *)-0xb4467c9953efe18 = (int32_t)result;
    return result;
}

// Address range: 0x369d4e - 0x369d56
int64_t function_369d4e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x369d4e
    int64_t v1; // 0x369d4e
    int64_t v2 = v1;
    bool v3; // 0x369d4e
    return (v2 + a4 / 256 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x369d74 - 0x369d80
int64_t function_369d74(void) {
    // 0x369d74
    return function_fffffffff3c697ad();
}

// Address range: 0x369e29 - 0x369e2a
int64_t function_369e29(int64_t a1) {
    // 0x369e29
    int64_t result; // 0x369e29
    return result;
}

// Address range: 0x369e52 - 0x369e53
int64_t function_369e52(int64_t a1) {
    // 0x369e52
    int64_t result; // 0x369e52
    return result;
}

// Address range: 0x369e5e - 0x369e62
int64_t function_369e5e(void) {
    // 0x369e5e
    int64_t v1; // 0x369e5e
    return v1 & 0xffffffff;
}

// Address range: 0x369e67 - 0x369e73
int64_t function_369e67(void) {
    // 0x369e67
    int64_t v1; // 0x369e67
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return v1 + 0xe80dc76a & 0xffffffff;
}

// Address range: 0x369e9f - 0x369efd
int64_t function_369e9f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = unknown_3a6061b3(); // 0x369ead
    char v2 = *(char *)0x548a01e84e8128db; // 0x369eb2
    int64_t v3; // 0x369e9f
    uint32_t v4 = *(int32_t *)(a2 + 54 + 4 * v3); // 0x369eda
    int64_t v5 = ((v1 & 0xffffff00 | (int64_t)(v2 ^ 24)) ^ -0x8253a10fe175c2c) / (int64_t)v4; // 0x369eda
    char * v6 = (char *)((v5 & 0xffffffff) + 0x24dff00); // 0x369ede
    *v6 = *v6 + (char)v5;
    uint64_t v7 = a4 / 256; // 0x369ee4
    uint64_t v8 = v5 + v7; // 0x369ee4
    int64_t v9 = v5 & 0xffffff00; // 0x369ee4
    int32_t * v10 = (int32_t *)(v3 + 0x75004000); // 0x369ee6
    *v10 = *v10 + (int32_t)v3;
    *(int32_t *)-0x662bc8f79022ff67 = (int32_t)(v8 % 256 | v9);
    int32_t * v11 = (int32_t *)((a4 - a2) % 256 | a4 & -256); // 0x369ef7
    *v11 = *v11 + (int32_t)a2;
    return (v8 + v7) % 256 | v9;
}

// Address range: 0x369f9d - 0x369f9e
int64_t function_369f9d(void) {
    // 0x369f9d
    int64_t result; // 0x369f9d
    return result;
}

// Address range: 0x369fa0 - 0x369fa1
int64_t function_369fa0(void) {
    // 0x369fa0
    int64_t result; // 0x369fa0
    return result;
}

// Address range: 0x369fab - 0x369fbb
int64_t function_369fab(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 2); // 0x369fad
    *v1 = *v1 + (int32_t)a2;
    unsigned char v2 = (char)a4; // 0x369fb0
    unsigned char v3 = *(char *)(a4 + 101); // 0x369fb0
    char v4 = v2 - v3; // 0x369fb0
    if (((v4 ^ v2) & (v3 ^ v2)) < 0) {
        function_369f9d();
    }
    if (v3 <= v2 && v4 != 0) {
        function_369fa0();
    }
    // 0x369fb7
    return __asm_hlt();
}

// Address range: 0x369fbb - 0x36a024
int64_t function_369fbb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a1;
    float80_t v3; // 0x369fbb
    *(float32_t *)(unknown_ffffffffbea79fc1() + 3) = (float32_t)v3;
    bool v4; // 0x369fbb
    if (v4) {
        // 0x36a008
        unknown_fffffffff33af90f();
        __asm_wait();
        int64_t v5 = unknown_ffffffff8e41281c(); // 0x36a015
        *(char *)0x21f05fa = *(char *)0x21f05fa & (char)a4;
        return v5 & -256 | (int64_t)(*(char *)(v5 - 52) + (char)v5);
    }
    // 0x369fc7
    int64_t v6; // 0x369fbb
    int32_t v7 = v6; // 0x369fcb
    *(int32_t *)v2 = *(int32_t *)&v2 + v7;
    uint32_t v8 = *(int32_t *)-0x77f99ff1426cec6; // 0x369fcd
    char v9 = *(char *)(v6 - 0x17fe1763); // 0x369fd6
    *(int32_t *)-0x179efb1d = *(int32_t *)-0x179efb1d + (int32_t)v2;
    int32_t * v10 = (int32_t *)(v1 + 0x5e810d2); // 0x369fe2
    uint32_t v11 = *v10; // 0x369fe2
    uint32_t v12 = v11 + v7; // 0x369fe2
    *v10 = v12;
    int64_t v13 = ((int64_t)v8 - (v12 < v11 ? 157 : 156)) % 256 | (int64_t)(v8 & -256); // 0x369fe8
    int64_t result = v13; // 0x369fec
    if ((256 * (int64_t)(v9 + (char)(a4 / 256)) || a4 & -0xff01) != 0) {
        // 0x369fee
        *(int32_t *)-0x386cf607 = *(int32_t *)-0x386cf607 + (int32_t)v2;
        *(int32_t *)v1 = *(int32_t *)&v1 + v7;
        result = v13 + v6 & 0xffffffff;
    }
    // 0x36a000
    return result;
}

// Address range: 0x36a02e - 0x36a031
int64_t function_36a02e(void) {
    // 0x36a02e
    int64_t result; // 0x36a02e
    return result;
}

// Address range: 0x36a06b - 0x36a070
int64_t function_36a06b(void) {
    // 0x36a06b
    return function_5a258();
}

// Address range: 0x36a070 - 0x36a07f
int64_t function_36a070(void) {
    // 0x36a070
    int64_t result; // 0x36a070
    return result;
}

// Address range: 0x36a09a - 0x36a23d
int64_t function_36a09a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = unknown_7b2f1a0(); // 0x36a09a
    char * v2 = (char *)(v1 - 0x3f6df100); // 0x36a09f
    *v2 = *v2 + (char)v1;
    return function_c57b8();
}

// Address range: 0x36a23d - 0x36a3e9
int64_t function_36a23d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x36a23d
    return function_c57b8();
}

// Address range: 0x36a3e9 - 0x36a519
int64_t function_36a3e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x36a3e9
    return function_c57b8();
}

// Address range: 0x36a57c - 0x36a584
int64_t function_36a57c(void) {
    int64_t v1 = unknown_ffffffffc77f02c2(); // 0x36a57c
    return (v1 + 36) % 256 | v1 & -256;
}

// Address range: 0x41cbcb - 0x41cbce
int64_t function_41cbcb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41cbcb
    int64_t result; // 0x41cbcb
    return result;
}

// Address range: 0x41cc0e - 0x41cc11
int64_t function_41cc0e(int64_t a1) {
    // 0x41cc0e
    int64_t result; // 0x41cc0e
    return result;
}

// Address range: 0x41cc4d - 0x41cc4e
int64_t function_41cc4d(void) {
    // 0x41cc4d
    int64_t result; // 0x41cc4d
    return result;
}

// Address range: 0x41cd0f - 0x41cd10
int64_t function_41cd0f(void) {
    // 0x41cd0f
    int64_t result; // 0x41cd0f
    return result;
}

// Address range: 0x41cd30 - 0x41cd4d
int64_t function_41cd30(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41cd30
    int64_t v1; // 0x41cd30
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2; // 0x41cd30
    if (*(char *)(v1 - 0x50d7fd2) != -(char)(v1 / 256)) {
        v2 = function_41cd0f();
    }
    int64_t v3 = v2;
    return v3 + 23 & 94 | v3 & -256;
}

// Address range: 0x41cd74 - 0x41cd77
int64_t function_41cd74(void) {
    // 0x41cd74
    int64_t result; // 0x41cd74
    return result;
}

// Address range: 0x41cd78 - 0x41cd81
int64_t function_41cd78(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41cd78
    int64_t v1; // 0x41cd78
    int64_t v2 = v1;
    bool v3; // 0x41cd78
    *(char *)v2 = (char)v1 + (char)v2 + (char)v3;
    return function_26453bc1();
}

// Address range: 0x41cd9b - 0x41cda6
int64_t function_41cd9b(void) {
    // 0x41cd9b
    int64_t v1; // 0x41cd9b
    return v1 + 0x24fed0ae & 0xffffffff;
}

// Address range: 0x41cdb8 - 0x41cdc7
int64_t function_41cdb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    unsigned char v2 = (char)a4 % 32; // 0x41cdbe
    int64_t v3; // 0x41cdb8
    int32_t v4; // 0x41cdb8
    int64_t result; // 0x41cdb8
    if (v2 == 0) {
        // 0x41cdb8
        v4 = result;
    } else {
        char * v5 = (char *)(a3 - 64);
        unsigned char v6 = *v5; // 0x41cdbe
        *v5 = v6 >> 8 - v2 | v6 << v2;
        int64_t v7; // 0x41cdb8
        v3 = v7;
        v4 = *(int32_t *)&v7;
    }
    uint32_t v8 = (int32_t)result; // 0x41cdc1
    *(int32_t *)v3 = v4 - v8;
    char v9 = *(char *)&v1; // 0x41cdc3
    int64_t v10 = v1;
    *(char *)v10 = v9 + (char)(v4 < v8) - (char)v10;
    return result;
}

// Address range: 0x41cded - 0x41cdf6
int64_t function_41cded(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41cded
    int64_t v1; // 0x41cded
    char v2 = __asm_insb((int16_t)((v1 & 0xffffffff | 0x100000000 * a3) % (v1 & 0xffffffff))); // 0x41cdf2
    *(char *)a1 = v2;
    return __asm_wait();
}

// Address range: 0x41ce03 - 0x41ce27
int64_t function_41ce03(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41ce03
    int64_t v1; // 0x41ce03
    uint64_t v2 = v1;
    char v3 = *(char *)(a3 + 7); // 0x41ce03
    uint32_t result = 0x10000 * (int32_t)(256 * ((int64_t)(v3 | (char)(v2 / 256)) - v2) | v2 % 256) >> 16; // 0x41ce09
    *(char *)0x47b7bd1c008e323e = (char)result;
    uint32_t v4 = *(int32_t *)0x456a8b89; // 0x41ce13
    uint32_t v5 = (int32_t)a3; // 0x41ce13
    *(int32_t *)0x456a8b89 = v4 - v5;
    int32_t * v6 = (int32_t *)(a1 + 62); // 0x41ce1d
    *v6 = *v6 + (int32_t)(v4 < v5) + result;
    char * v7 = (char *)(a1 - 99); // 0x41ce20
    *v7 = *v7 + (char)a4;
    return result;
}

// Address range: 0x41ce45 - 0x41ce4a
int64_t function_41ce45(void) {
    // 0x41ce45
    return function_1ce6d3b8();
}

// Address range: 0x41ce6a - 0x41ce6b
int64_t function_41ce6a(void) {
    // 0x41ce6a
    int64_t result; // 0x41ce6a
    return result;
}

// Address range: 0x41ce6e - 0x41ce79
int64_t function_41ce6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41ce6e
    int64_t v1; // 0x41ce6e
    int64_t result = v1;
    int64_t v2 = a3;
    int64_t v3 = a2;
    uint32_t v4 = (int32_t)a4 % 32; // 0x41ce6e
    int64_t v5; // 0x41ce6e
    char v6; // 0x41ce6e
    if (v4 == 0) {
        // 0x41ce6e
        v5 = a2;
        v6 = a2;
    } else {
        bool v7; // 0x41ce6e
        *(int32_t *)result = (int32_t)v7 << v4 - 1 | (int32_t)result << v4 | (int32_t)((result & 0xffffffff) >> (int64_t)(33 - v4));
        v5 = v3;
        v6 = *(char *)&v3;
    }
    *(char *)v5 = v6 + (char)a5;
    *(int32_t *)v2 = *(int32_t *)&v2 + (int32_t)v3;
    return result;
}

// Address range: 0x41ceae - 0x41ceb0
int64_t function_41ceae(void) {
    // 0x41ceae
    return function_41cee7();
}

// Address range: 0x41ceb2 - 0x41ceb3
int64_t function_41ceb2(void) {
    // 0x41ceb2
    int64_t result; // 0x41ceb2
    return result;
}

// Address range: 0x41ceba - 0x41cee7
int64_t function_41ceba(int64_t a1, int64_t a2, int64_t a3) {
    int16_t v1 = a3; // 0x41ceba
    char v2 = a2;
    __asm_outsb(v1, v2);
    int64_t v3; // 0x41ceba
    bool v4; // 0x41ceba
    if (v4) {
        function_41ceec(a1, a2, a3, v3);
    }
    int64_t result = a2; // bp-16, 0x41cebf
    if (!v4) {
        function_41cf02();
    }
    // 0x41cec2
    __asm_outsb(v1, v2);
    int64_t v5 = (int64_t)&result; // bp-24, 0x41cec3
    if (*(int32_t *)0x255f22fb > (int32_t)(int64_t)&v5) {
        function_41ceb2();
    }
    int32_t * v6 = (int32_t *)(v3 - 0xbdd249c); // 0x41cecd
    int32_t v7 = *v6; // 0x41cecd
    *v6 = v7 >> 1;
    if (v7 < 0) {
        function_41cf0a(a1, a2, a3, v3, v3, (int64_t)&g4, (int64_t)&g4);
    }
    // 0x41ced5
    return result;
}

// Address range: 0x41cee7 - 0x41cee8
int64_t function_41cee7(void) {
    // 0x41cee7
    int64_t result; // 0x41cee7
    return result;
}

// Address range: 0x41ceec - 0x41cef8
int64_t function_41ceec(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41ceec
    int64_t v1; // 0x41ceec
    bool v2; // 0x41ceec
    if (!v2) {
        v1 = function_2f6b44ec();
    }
    uint64_t result = v1;
    *(char *)result = (char)(result / 256 ^ result);
    return result;
}

// Address range: 0x41cef8 - 0x41cef9
int64_t function_41cef8(void) {
    // 0x41cef8
    int64_t result; // 0x41cef8
    return result;
}

// Address range: 0x41cf02 - 0x41cf04
int64_t function_41cf02(void) {
    // 0x41cf02
    int64_t result; // 0x41cf02
    return result;
}

// Address range: 0x41cf0a - 0x41d044
int64_t function_41cf0a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x41cf0a
    int64_t v1; // 0x41cf0a
    if (a4 == 0) {
        uint32_t v2 = (int32_t)v1;
        *(int32_t *)v1 = v2 / 0x4000000 | 64 * v2;
        return v1 & -256 | (int64_t)*(char *)-0x75e0993863ff954e;
    }
    int128_t v3 = v1; // 0x41cf0d
    char * v4 = (char *)(v1 - 0x58c3a500); // 0x41cf15
    unsigned char v5 = *v4; // 0x41cf15
    unsigned char v6 = v5 + (char)(a4 / 256); // 0x41cf15
    unsigned char v7 = v6 + (char)(0x1870a719 * v3 != 0x1870a7190000000000000000 * v3 >> 64); // 0x41cf15
    *v4 = v7;
    int64_t result; // 0x41cf0a
    if (0x1870a719 * v3 != 0x1870a7190000000000000000 * v3 >> 64 ? v7 <= v5 : v6 < v5) {
        result = function_41cef8();
    }
    // 0x41cf1d
    return result;
}

// Address range: 0x41d08b - 0x41d08c
int64_t function_41d08b(void) {
    // 0x41d08b
    int64_t result; // 0x41d08b
    return result;
}

// Address range: 0x41d0a1 - 0x41d0a2
int64_t function_41d0a1(int64_t a1) {
    // 0x41d0a1
    int64_t result; // 0x41d0a1
    return result;
}

// Address range: 0x41d0ab - 0x41d0ae
int64_t function_41d0ab(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41d0ab
    *(char *)a1 = __asm_insb((int16_t)a3);
    return function_41d08b();
}

// Address range: 0x41d0cd - 0x41d0d2
int64_t function_41d0cd(void) {
    // 0x41d0cd
    return function_14ade586();
}

// Address range: 0x41d10a - 0x41d18a
int64_t function_41d10a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6;
    int64_t result; // 0x41d10a
    if ((256 * result & 0xff00 ^ a4) != 1) {
        // 0x41d168
        return result;
    }
    uint32_t v2 = (int32_t)result; // 0x41d10c
    int32_t v3 = v2 - 0x3fcc1f9f; // 0x41d10c
    if (llvm_ctpop_i8((char)v3) % 2 == 0) {
        // 0x41d168
        return result;
    }
    if (v2 < 0x3fcc1f9f || v3 == 0) {
        int64_t result2 = result & -0xff01 | (int64_t)&g3; // 0x41d120
        __asm_out_134(126, (int32_t)result2);
        char * v4 = (char *)(result & -256 | 106); // 0x41d124
        *v4 = *v4 + (char)((int64_t)&g3 >> 8);
        return result2;
    }
    // 0x41d169
    *(int32_t *)-0x627fb797623d07a = (int32_t)result;
    int32_t * v5 = (int32_t *)(a5 + 63); // 0x41d179
    *v5 = *v5 & (int32_t)(int64_t)&v1;
    return __asm_hlt();
}

// Address range: 0x41d19c - 0x41d1ac
int64_t function_41d19c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41d19c
    int64_t result; // 0x41d19c
    *(int16_t *)(a3 - 0xa683ed1) = (int16_t)result;
    return result;
}

// Address range: 0x41d222 - 0x41d229
int64_t function_41d222(void) {
    // 0x41d222
    return function_ffffffffba559e3d();
}

// Address range: 0x41d229 - 0x41d22a
int64_t function_41d229(int64_t a1) {
    // 0x41d229
    int64_t result; // 0x41d229
    return result;
}

// Address range: 0x41d256 - 0x41d258
int64_t function_41d256(void) {
    // 0x41d256
    return function_41d2a0();
}

// Address range: 0x41d26a - 0x41d26b
int64_t function_41d26a(void) {
    // 0x41d26a
    int64_t result; // 0x41d26a
    return result;
}

// Address range: 0x41d26c - 0x41d274
int64_t function_41d26c(int64_t a1, int64_t a2) {
    // 0x41d26c
    int64_t v1; // 0x41d26c
    int32_t * v2 = (int32_t *)(v1 - 0x7037c039); // 0x41d26c
    *v2 = (int32_t)a2;
    return function_41d292(a1, *v2, v1, v1);
}

// Address range: 0x41d274 - 0x41d292
int64_t function_41d274(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t v3; // 0x41d274
    bool v4; // 0x41d274
    int64_t v5 = v3 & -0xff01 | 256 * (64 * (int64_t)v4 | 128 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4) | 512; // 0x41d274
    char v6 = *(char *)(v3 + 103); // 0x41d275
    int64_t v7 = a3 & -256 | (int64_t)((char)v4 + (char)a3 + v6); // 0x41d275
    char * v8 = (char *)(v5 + 25 + v7); // 0x41d278
    *v8 = *v8 + (char)(v3 / 256);
    uint32_t v9 = (int32_t)v3; // 0x41d27c
    uint32_t v10 = *(int32_t *)&v1 + v9; // 0x41d27c
    int64_t result = v5; // 0x41d27e
    if (v10 < v9) {
        result = function_41d2d2(a1, v2, v7, v1, (int64_t)&g4, (int64_t)&g4);
    }
    // 0x41d280
    if (llvm_ctpop_i8((char)v10) % 2 == 0) {
        // 0x41d28b
        *(int32_t *)a1 = __asm_insd((int16_t)v7);
        return result;
    }
    int64_t v11 = v2;
    *(int32_t *)v11 = *(int32_t *)&v2 & (int32_t)v11;
    float80_t v12; // 0x41d274
    *(int32_t *)(result - 0x18fffb24) = (int32_t)v12;
    return result;
}

// Address range: 0x41d292 - 0x41d29c
int64_t function_41d292(int64_t a1, int32_t a2, int64_t a3, int64_t a4) {
    // 0x41d292
    int64_t result; // 0x41d292
    char * v1 = (char *)(result + 17); // 0x41d292
    bool v2; // 0x41d292
    *v1 = (char)v2 + (char)a3 + *v1;
    int32_t * v3 = (int32_t *)(a4 + 0x5571fb3b); // 0x41d295
    *v3 = *v3 ^ a2;
    return result;
}

// Address range: 0x41d2a0 - 0x41d2ad
int64_t function_41d2a0(void) {
    // 0x41d2a0
    int64_t v1; // 0x41d2a0
    while ((v1 & 86) != 0) {
        // continue -> 0x41d2a2
    }
    int64_t result = unknown_ffffffffb3c8e33e(); // 0x41d2a5
    char * v2 = (char *)(result + 65); // 0x41d2aa
    *v2 = *v2 + (char)result;
    return result;
}

// Address range: 0x41d2cf - 0x41d2d0
int64_t function_41d2cf(void) {
    // 0x41d2cf
    int64_t result; // 0x41d2cf
    return result;
}

// Address range: 0x41d2d2 - 0x41d44c
int64_t function_41d2d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3; // 0x41d2d2
    uint32_t v4 = (int32_t)a4;
    int16_t v5 = a3; // 0x41d2d5
    char v6 = __asm_in_135(v5); // 0x41d2d5
    int64_t result = v3 & -256 | (int64_t)v6; // 0x41d2d5
    int64_t v7; // 0x41d2d2
    int3_t v8; // 0x41d2d2
    bool v9; // 0x41d2d2
    if (v9) {
        // 0x41d2d8
        v2 = (v9 ? -1 : 1) + a1;
        if ((2 * v4 || (int32_t)(v6 < (char)a1)) != 1) {
            // 0x41d320
            *(float64_t *)(result - 127) = (float64_t)__frontend_reg_load_fpr(v8);
            return result;
        }
        // 0x41d2e8
        __asm_out_136(1, v6);
        int64_t v10 = result & 0xffffffff ^ 0xf2880471; // 0x41d2ea
        char * v11 = (char *)(v7 - 40); // 0x41d2ef
        unsigned char v12 = (char)v10; // 0x41d2ef
        *v11 = *v11 ^ v12;
        __frontend_reg_store_fpr(v8 - 1, (float80_t)*(float32_t *)v2);
        return (v10 + 49 + (v12 > 206 ? 2 : 3)) % 256 | v10 & 0xffffff00;
    }
    int32_t v13 = v9 ? 0x38206d75 : 0x38206d74; // 0x41d33f
    int64_t v14 = 0; // 0x41d349
    if ((v13 + (int32_t)(result & 0x7fffff00 | (int64_t)__asm_in_135(v5)) & 0x7f3da120) != 0) {
        v14 = function_41d2cf();
    }
    // 0x41d34b
    __asm_outsb(v5, (char)a2);
    int32_t * v15 = (int32_t *)(v14 - 0x3dc087ef); // 0x41d34f
    int32_t v16 = *v15 + 100; // 0x41d34f
    unsigned char v17 = llvm_ctpop_i8((char)v16); // 0x41d34f
    *v15 = v16;
    int64_t v18; // 0x41d2d2
    bool v19; // 0x41d2d2
    int64_t result2; // 0x41d2d2
    if (v17 % 2 != 0) {
        // 0x41d39e
        __asm_outsd(v5, *(int32_t *)&v1);
        int64_t v20 = v2 + (v9 ? -1 : 1); // 0x41d3a0
        v2 = v20;
        uint32_t v21 = (int32_t)v7; // 0x41d3a1
        v18 = v20;
        result2 = v7 & 0xffffffff;
        v19 = v21 < 0x59f8297c;
        if (v21 >= 0x59f8297d) {
            int32_t v22 = a3; // 0x41d3b0
            int32_t v23 = *(int32_t *)0x392f2413 ^ v22; // 0x41d3b0
            *(int32_t *)0x392f2413 = v23;
            if (v23 >= 0) {
                // 0x41d40e
                return a4 & 0xffffffff;
            }
            // 0x41d3b9
            return 0x10000 * v22 >> 16;
        }
    } else {
        // 0x41d359
        *(int32_t *)v2 = __asm_insd(v5);
        int32_t * v24 = (int32_t *)(v7 + 50); // 0x41d35b
        *v24 = *v24 & (int32_t)a3;
        *(float32_t *)a4 = (float32_t)__frontend_reg_load_fpr(v8);
        uint32_t v25 = v4 % 32; // 0x41d360
        if (v25 != 0) {
            v1 = (int32_t)v1 << v25;
        }
        *(int32_t *)v2 = *(int32_t *)&v2 + 88;
        *(int32_t *)v2 = *(int32_t *)v1;
        int64_t v26 = v9 ? -5 : 5;
        v2 += v26;
        v1 += v26;
        int32_t * v27 = (int32_t *)(v14 - 9); // 0x41d367
        int32_t v28 = *v27 ^ (int32_t)v14; // 0x41d367
        *v27 = v28;
        v18 = v2;
        result2 = v14;
        v19 = false;
        if (a4 == 1 || v28 == 0) {
            // 0x41d36c
            return unknown_ffffffffe58a6d13(v2, v1);
        }
    }
    int32_t * v29 = (int32_t *)(a3 + 0x3847941c); // 0x41d37b
    *v29 = (int32_t)v19 + (int32_t)v18 + *v29;
    return result2;
}

// Address range: 0x41d475 - 0x41d476
int64_t function_41d475(void) {
    // 0x41d475
    int64_t result; // 0x41d475
    return result;
}

// Address range: 0x41d4cb - 0x41d4d1
int64_t function_41d4cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41d4cb
    int64_t result; // 0x41d4cb
    bool v1; // 0x41d4cb
    if (a4 != 1 == v1) {
        result = function_41d475();
    }
    // 0x41d4ce
    return result;
}

// Address range: 0x41d4ea - 0x41d4ed
int64_t function_41d4ea(void) {
    // 0x41d4ea
    int64_t result; // 0x41d4ea
    return result;
}

// Address range: 0x41d50b - 0x41d635
int64_t function_41d50b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3 = a6;
    int64_t v4; // 0x41d50b
    int32_t * v5 = (int32_t *)(8 * a2 + (int64_t)&v3); // 0x41d530
    *v5 = *v5 ^ (int32_t)v4;
    int64_t result = a1 & 0xffffff00 | (int64_t)((char)a1 - *(char *)&v1); // 0x41d514
    char * v6 = (char *)result; // 0x41d516
    *v6 = *v6 + 1;
    *(int32_t *)(a5 & 0xffffffff) = *(int32_t *)&v2;
    return result;
}

// Address range: 0x41d680 - 0x41d681
int64_t function_41d680(int64_t a1) {
    // 0x41d680
    int64_t result; // 0x41d680
    return result;
}

// Address range: 0x41d6ce - 0x41d6cf
int64_t function_41d6ce(void) {
    // 0x41d6ce
    int64_t result; // 0x41d6ce
    return result;
}

// Address range: 0x41d6ec - 0x41d700
int64_t function_41d6ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41d6ec
    int64_t v1; // 0x41d6ec
    bool v2; // 0x41d6ec
    if (a4 != 1 && !v2) {
        v1 = function_41d6ce();
    }
    // 0x41d6ee
    return v1 & -256 | (int64_t)*(char *)0xda32f7ad0e01038;
}

// Address range: 0x41d711 - 0x41d717
int64_t function_41d711(int64_t a1) {
    // 0x41d711
    int64_t result; // 0x41d711
    return result;
}

// Address range: 0x41d720 - 0x41d725
int64_t function_41d720(int64_t a1) {
    // 0x41d720
    int64_t result; // 0x41d720
    __asm_out_134(-88, (int32_t)result);
    return result;
}

// Address range: 0x41d79a - 0x41d79b
int64_t function_41d79a(void) {
    // 0x41d79a
    int64_t result; // 0x41d79a
    return result;
}

// Address range: 0x41d7c4 - 0x41d7ca
int64_t function_41d7c4(int64_t a1) {
    // 0x41d7c4
    int64_t result; // 0x41d7c4
    return result;
}

// Address range: 0x41d9cb - 0x41d9da
int64_t function_41d9cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41d9cb
    int64_t v1; // 0x41d9cb
    bool v2; // 0x41d9cb
    *(char *)((v2 ? -4 : 4) + a1) = (char)v1;
    return v1 ^ 37;
}

// Address range: 0x41d9dd - 0x41d9df
int64_t function_41d9dd(void) {
    // 0x41d9dd
    int64_t result; // 0x41d9dd
    return result;
}

// Address range: 0x41da5e - 0x41da5f
int64_t function_41da5e(void) {
    // 0x41da5e
    int64_t result; // 0x41da5e
    return result;
}

// Address range: 0x41da69 - 0x41da6c
int64_t function_41da69(int64_t a1) {
    // 0x41da69
    int64_t result; // 0x41da69
    return result;
}

// Address range: 0x41da91 - 0x41da92
int64_t function_41da91(int64_t a1) {
    // 0x41da91
    int64_t result; // 0x41da91
    return result;
}

// Address range: 0x41dae7 - 0x41db06
int64_t function_41dae7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41dae7
    return function_ffffffff864bf174(a4);
}

// Address range: 0x41db83 - 0x41db8f
int64_t function_41db83(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41db83
    int64_t result; // 0x41db83
    __asm_outsb((int16_t)a3, (char)result);
    int32_t * v1 = (int32_t *)(a4 + 39); // 0x41db88
    *v1 = 0x10000000 * *v1;
    return result;
}
