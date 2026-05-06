/*
 * Targeted RetDec C for native executable gap queue batch 1555.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x283eee-0x2840ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x2840ee-0x2842ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x2842ee-0x2844ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x2846ee-0x2848ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x2848ee-0x28494c rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bdba9-0x2bdda9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bdda9-0x2bdfa9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bdfa9-0x2be1a9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2be1a9-0x2be3a9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2be3a9-0x2be5a9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2be5a9-0x2be60e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3086af-0x3088af rank=- name=- kind=- bytes=- uncovered=-
 *   0x3088af-0x308aaf rank=- name=- kind=- bytes=- uncovered=-
 *   0x308aaf-0x308caf rank=- name=- kind=- bytes=- uncovered=-
 *   0x308caf-0x308eaf rank=- name=- kind=- bytes=- uncovered=-
 *   0x3090af-0x309106 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g5;
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

int64_t function_210b987();
int64_t function_21452de();
int64_t function_21520827();
int64_t function_283eee(int64_t a1, int64_t a2, int64_t a3);
int64_t function_283f14(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_283fa2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_284058(int64_t a1);
int64_t function_2840ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2840b5(int64_t a1, int64_t a2);
int64_t function_2840eb(int64_t a1, int64_t a2);
int64_t function_28411e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_28416b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2841f5(void);
int64_t function_2841ff(void);
int64_t function_284239(void);
int64_t function_284250(void);
int64_t function_28425f(void);
int64_t function_2842ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2842c7(int64_t a1);
int64_t function_28437e(int64_t a1);
int64_t function_284384(void);
int64_t function_2843a3(void);
int64_t function_2843c4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2843e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2846ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28479c(int64_t a1);
int64_t function_2847c6(void);
int64_t function_284801(void);
int64_t function_284807(void);
int64_t function_284836(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2848af(void);
int64_t function_2848b8(int64_t a1);
int64_t function_284910(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2bdba9(void);
int64_t function_2bdc48(void);
int64_t function_2bdc51(void);
int64_t function_2bdc57(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bdc72(int64_t a1);
int64_t function_2bdc81(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bde1c(int64_t a1);
int64_t function_2bde69(int64_t a1, int64_t a2);
int64_t function_2bde99(void);
int64_t function_2bdea4(void);
int64_t function_2bdebe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bdecd(void);
int64_t function_2bdf62(void);
int64_t function_2bdfac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2be01b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2be024(void);
int64_t function_2be048(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2be070(void);
int64_t function_2be087(void);
int64_t function_2be0b4(void);
int64_t function_2be0ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2be110(int64_t a1);
int64_t function_2be12a(void);
int64_t function_2be15f(void);
int64_t function_2be17c(void);
int64_t function_2be192(int64_t a1);
int64_t function_2be195(void);
int64_t function_2be1d8(void);
int64_t function_2be20c(void);
int64_t function_2be22f(int64_t a1);
int64_t function_2be23e(int32_t a1);
int64_t function_2be283(void);
int64_t function_2be289(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_2be2c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2be34d(void);
int64_t function_2be352(void);
int64_t function_2be38c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2be3b4(int64_t a1);
int64_t function_2be407(int64_t a1);
int64_t function_2be4c1(void);
int64_t function_2be4ce(int64_t a1);
int64_t function_2be4e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2be4ff(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2be5c9(int64_t a1);
int64_t function_3086af(int64_t a1, int64_t a2);
int64_t function_308773(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3088b9(void);
int64_t function_3088be(void);
int64_t function_3088cc(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_308a24(int64_t a1);
int64_t function_308a85(void);
int64_t function_308afc(int64_t a1, int64_t a2);
int64_t function_308b15(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_308b9a(void);
int64_t function_308bb5(int64_t a1);
int64_t function_308c6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_308c8f(void);
int64_t function_308ccf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_308cfd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_308d69(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_308e15(void);
int64_t function_308e33(void);
int64_t function_308e72(void);
int64_t function_308e9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3090a7();
int64_t function_3090af(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30bcf7();
int64_t function_76f17128();
int64_t function_c823b();
int64_t function_ff449f4();
int64_t function_ffffffffaf4d6a2b();
int64_t function_ffffffffb56a4988();
int64_t function_ffffffffca3238e7();
int64_t function_ffffffffe3ace597();
int64_t unknown_13ec5900();
int64_t unknown_140425ad();
int64_t unknown_23676db8();
int64_t unknown_2736b0d3();
int64_t unknown_2a1a35c7();
int64_t unknown_318de54e();
int64_t unknown_35c9b40a();
int64_t unknown_36a6152b();
int64_t unknown_3ac6098f();
int64_t unknown_3d96f3d5();
int64_t unknown_417c7be2();
int64_t unknown_44a3b702();
int64_t unknown_612e2927();
int64_t unknown_68c64b05();
int64_t unknown_6fc25836();
int64_t unknown_70298118();
int64_t unknown_70652d7c();
int64_t unknown_c3c58db();
int64_t unknown_ffffffff9c32a958();
int64_t unknown_ffffffffa2d434f1();
int64_t unknown_ffffffffb40392f5();
int64_t unknown_ffffffffbb2235ea();
int64_t unknown_ffffffffcd3efa35();
int64_t unknown_ffffffffde2a3fc1();
int64_t unknown_ffffffffe5a623bc();

// Address range: 0x283eee - 0x283f13
int64_t function_283eee(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2;
    int64_t result = unknown_ffffffffb40392f5(); // 0x283eef
    int64_t v2; // 0x283eee
    char * v3 = (char *)(v2 - 55); // 0x283ef4
    char v4 = *v3 + (char)a3; // 0x283ef4
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x283ef4
    *v3 = v4;
    if (v5 % 2 != 0) {
        // 0x283f12
        *(int32_t *)a1 = *(int32_t *)&v1;
        return result;
    }
    int64_t result2 = unknown_44a3b702(); // 0x283efb
    *(int32_t *)-0x17d5d8f8 = *(int32_t *)-0x17d5d8f8 >> 1;
    int32_t * v6 = (int32_t *)(a3 + 0xedb10d1); // 0x283f07
    *v6 = *v6 + (int32_t)a1;
    return result2;
}

// Address range: 0x283f14 - 0x283f44
int64_t function_283f14(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x283f14
    int64_t v1; // 0x283f14
    int64_t v2 = v1;
    int64_t v3 = a1;
    *(char *)v2 = (char)(v2 | v1);
    *(char *)-0x84e1cfec2ff9b74 = (char)unknown_36a6152b();
    int64_t result = __asm_int3((int64_t)&g5, (int64_t)&g5, (int64_t)&g5, (int64_t)&g5, (int64_t)&g5, (int64_t)&g5); // 0x283f3d
    *(char *)v3 = *(char *)&v3 & (char)(a4 / 256);
    return result;
}

// Address range: 0x283fa2 - 0x283fe4
int64_t function_283fa2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 0x142e2b28 + 2 * a1); // 0x283fa4
    *v1 = *v1 + (int32_t)a1;
    int64_t v2; // 0x283fa2
    uint64_t v3 = (v2 & 0xffffffff) * (int64_t)*(int32_t *)(a4 - 22); // 0x283fab
    int32_t * v4 = (int32_t *)(a1 + 27); // 0x283fb1
    *v4 = *v4 + (int32_t)v2;
    __asm_out((int16_t)(v3 / 0x100000000), (char)unknown_ffffffffde2a3fc1());
    __asm_int(-76);
    int64_t result = (int64_t)*(int32_t *)-0x71c747f85cfe170a; // 0x283fc4
    int32_t * v5 = (int32_t *)(result - 0x77d5c58a); // 0x283fdd
    *v5 = *v5 + (int32_t)v3;
    return result;
}

// Address range: 0x284058 - 0x284059
int64_t function_284058(int64_t a1) {
    // 0x284058
    int64_t result; // 0x284058
    return result;
}

// Address range: 0x2840ad - 0x2840b5
int64_t function_2840ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2840ad
    return unknown_23676db8(a1, a2, a3, a4);
}

// Address range: 0x2840b5 - 0x2840c5
int64_t function_2840b5(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a2 + 0x3901e858); // 0x2840b5
    int64_t result; // 0x2840b5
    *v1 = *v1 + (char)((uint64_t)result / 256);
    __asm_int(-114);
    return result;
}

// Address range: 0x2840eb - 0x2840f1
int64_t function_2840eb(int64_t a1, int64_t a2) {
    // 0x2840eb
    int64_t result; // 0x2840eb
    return result;
}

// Address range: 0x28411e - 0x28416b
int64_t function_28411e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x28411e
    int64_t v1; // 0x28411e
    __asm_outsb((int16_t)a3, (char)v1);
    __asm_in(-32);
    unknown_612e2927();
    __asm_int1();
    unknown_6fc25836();
    *(int32_t *)0x10582649 = *(int32_t *)0x10582649 + (int32_t)a1;
    unknown_318de54e();
    int64_t v2 = unknown_ffffffff9c32a958(); // 0x284152
    int64_t v3 = a3 & 0xffffff00 | 255; // 0x284157
    *(int64_t *)(v3 - 8) = 0x17847600;
    int64_t v4; // 0x28411e
    *(char *)a2 = 2 * *(char *)&v4;
    *(int64_t *)(v3 - 341) = a1;
    return v2 & -256 | 217;
}

// Address range: 0x28416b - 0x2841bf
int64_t function_28416b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x28416b
    int64_t v1; // 0x28416b
    *(int32_t *)a1 = (int32_t)v1 & -72;
    int64_t v2 = a3 & -0xff01 | (int64_t)&g2; // 0x284175
    char * v3 = (char *)(v2 + 20); // 0x284177
    *v3 = *v3 + (char)(v1 / 256);
    int16_t v4 = v2; // 0x28417f
    char v5 = (char)v1 & -72; // 0x28417f
    __asm_out(v4, v5);
    char * v6 = (char *)v2; // 0x284184
    *v6 = *v6 + v5;
    uint64_t v7 = (v1 & -256 | (int64_t)__asm_in_133(42)) + 0xeed9c219; // 0x28418a
    int32_t * v8 = (int32_t *)(v7 & 0xffffffff); // 0x28418f
    *v8 = *v8 & (int32_t)v7;
    char * v9 = (char *)(a2 + 0x3e01e838); // 0x284196
    *v9 = *v9 + (char)(v7 / 256);
    int32_t * v10 = (int32_t *)(v1 + 0x3c02980c); // 0x2841a2
    *v10 = *v10 & ((int32_t)a4 & -0xff01 | (int32_t)&g1);
    __asm_wait();
    int64_t v11; // 0x28416b
    *(char *)a6 = *(char *)&v11 ^ -10;
    return __asm_in_134(v4);
}

// Address range: 0x2841f5 - 0x2841f6
int64_t function_2841f5(void) {
    // 0x2841f5
    int64_t result; // 0x2841f5
    return result;
}

// Address range: 0x2841ff - 0x284203
int64_t function_2841ff(void) {
    // 0x2841ff
    return function_2841f5();
}

// Address range: 0x284239 - 0x28423a
int64_t function_284239(void) {
    // 0x284239
    int64_t result; // 0x284239
    return result;
}

// Address range: 0x284250 - 0x284252
int64_t function_284250(void) {
    // 0x284250
    return function_284239();
}

// Address range: 0x28425f - 0x284260
int64_t function_28425f(void) {
    // 0x28425f
    int64_t result; // 0x28425f
    return result;
}

// Address range: 0x2842ae - 0x2842c1
int64_t function_2842ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2842ae
    int64_t v1; // 0x2842ae
    int32_t * v2 = (int32_t *)(v1 + 46); // 0x2842ae
    *v2 = *v2 + (int32_t)a4;
    int32_t * v3 = (int32_t *)(2 * a2 + a1); // 0x2842b7
    uint32_t v4 = *v3; // 0x2842b7
    uint32_t v5 = v4 + (int32_t)a1; // 0x2842b7
    *v3 = v5;
    if (v5 < v4) {
        function_28425f();
    }
    // 0x2842bc
    return function_ffffffffaf4d6a2b();
}

// Address range: 0x2842c7 - 0x2842c8
int64_t function_2842c7(int64_t a1) {
    // 0x2842c7
    int64_t result; // 0x2842c7
    return result;
}

// Address range: 0x28437e - 0x28437f
int64_t function_28437e(int64_t a1) {
    // 0x28437e
    int64_t result; // 0x28437e
    return result;
}

// Address range: 0x284384 - 0x284385
int64_t function_284384(void) {
    // 0x284384
    int64_t result; // 0x284384
    return result;
}

// Address range: 0x2843a3 - 0x2843a9
int64_t function_2843a3(void) {
    // 0x2843a3
    return function_210b987();
}

// Address range: 0x2843c4 - 0x2843c9
int64_t function_2843c4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2843c4
    int64_t result; // 0x2843c4
    *(int32_t *)a3 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x2843e1 - 0x284421
int64_t function_2843e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2843e1
    bool v1; // 0x2843e1
    if (v1 || false) {
        int64_t result = unknown_70298118(); // 0x284412
        *(int32_t *)result = (int32_t)a3;
        return result;
    }
    // 0x28441f
    int64_t result2; // 0x2843e1
    return result2;
}

// Address range: 0x2846ee - 0x284708
int64_t function_2846ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 33); // 0x2846ee
    *v1 = *v1 & (int32_t)a1;
    int32_t * v2 = (int32_t *)(a1 + 0x3d002731); // 0x2846fc
    *v2 = *v2 / 2;
    int64_t v3; // 0x2846ee
    int64_t v4; // 0x2846ee
    return v4 & -256 | (int64_t)*(char *)&v3;
}

// Address range: 0x28479c - 0x28479f
int64_t function_28479c(int64_t a1) {
    // 0x28479c
    int64_t result; // 0x28479c
    return result;
}

// Address range: 0x2847c6 - 0x2847c9
int64_t function_2847c6(void) {
    // 0x2847c6
    int64_t result; // 0x2847c6
    return result;
}

// Address range: 0x284801 - 0x284802
int64_t function_284801(void) {
    // 0x284801
    int64_t result; // 0x284801
    return result;
}

// Address range: 0x284807 - 0x28480c
int64_t function_284807(void) {
    // 0x284807
    return function_ff449f4();
}

// Address range: 0x284836 - 0x28486d
int64_t function_284836(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x284836
    int64_t result; // 0x284836
    int32_t * v1 = (int32_t *)(8 * result + a3); // 0x284838
    uint32_t v2 = *v1; // 0x284838
    uint32_t v3 = (int32_t)result + (int32_t)a1 + v2; // 0x284838
    *v1 = v3;
    char * v4 = (char *)(4 * a4 + a2); // 0x284867
    int64_t v5; // 0x284836
    *v4 = (char)a3 - *(char *)&v5 + (char)(v3 < v2) + *v4;
    return result;
}

// Address range: 0x2848af - 0x2848b5
int64_t function_2848af(void) {
    // 0x2848af
    return function_ffffffffb56a4988();
}

// Address range: 0x2848b8 - 0x2848b9
int64_t function_2848b8(int64_t a1) {
    // 0x2848b8
    int64_t result; // 0x2848b8
    return result;
}

// Address range: 0x284910 - 0x28491c
int64_t function_284910(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x284910
    int64_t v1; // 0x284910
    int64_t v2 = v1;
    *(int64_t *)v2 = v2 + a5;
    return __asm_int3(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x2bdba9 - 0x2bdbaa
int64_t function_2bdba9(void) {
    // 0x2bdba9
    int64_t result; // 0x2bdba9
    return result;
}

// Address range: 0x2bdc48 - 0x2bdc49
int64_t function_2bdc48(void) {
    // 0x2bdc48
    int64_t result; // 0x2bdc48
    return result;
}

// Address range: 0x2bdc51 - 0x2bdc56
int64_t function_2bdc51(void) {
    // 0x2bdc51
    return function_21520827();
}

// Address range: 0x2bdc57 - 0x2bdc64
int64_t function_2bdc57(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bdc57
    int64_t result; // 0x2bdc57
    *(int32_t *)a1 = (int32_t)result + (int32_t)a1;
    int64_t v1; // 0x2bdc57
    *(int32_t *)a4 = *(int32_t *)&v1 & (int32_t)result;
    return result;
}

// Address range: 0x2bdc72 - 0x2bdc75
int64_t function_2bdc72(int64_t a1) {
    // 0x2bdc72
    int64_t result; // 0x2bdc72
    return result;
}

// Address range: 0x2bdc81 - 0x2bdc91
int64_t function_2bdc81(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 0x6eb502ab); // 0x2bdc85
    int64_t result; // 0x2bdc81
    *v1 = *v1 & (int32_t)result;
    *(int32_t *)0x57d292 = (int32_t)a1;
    return result;
}

// Address range: 0x2bde1c - 0x2bde1f
int64_t function_2bde1c(int64_t a1) {
    // 0x2bde1c
    int64_t result; // 0x2bde1c
    return result;
}

// Address range: 0x2bde69 - 0x2bde6c
int64_t function_2bde69(int64_t a1, int64_t a2) {
    // 0x2bde69
    int64_t v1; // 0x2bde69
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x2bde99 - 0x2bde9a
int64_t function_2bde99(void) {
    // 0x2bde99
    int64_t result; // 0x2bde99
    return result;
}

// Address range: 0x2bdea4 - 0x2bdea6
int64_t function_2bdea4(void) {
    // 0x2bdea4
    return function_2bde99();
}

// Address range: 0x2bdebe - 0x2bdec3
int64_t function_2bdebe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bdebe
    int64_t result; // 0x2bdebe
    *(int32_t *)a3 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x2bdecd - 0x2bdece
int64_t function_2bdecd(void) {
    // 0x2bdecd
    int64_t result; // 0x2bdecd
    return result;
}

// Address range: 0x2bdf62 - 0x2bdf63
int64_t function_2bdf62(void) {
    // 0x2bdf62
    int64_t result; // 0x2bdf62
    return result;
}

// Address range: 0x2bdfac - 0x2bdfb4
int64_t function_2bdfac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bdfac
    int64_t result; // 0x2bdfac
    return result;
}

// Address range: 0x2be01b - 0x2be024
int64_t function_2be01b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2be01b
    int64_t result; // 0x2be01b
    int32_t * v1 = (int32_t *)(8 * a4 - 0x75c57765 + result); // 0x2be01b
    *v1 = *v1 + (int32_t)a2;
    int64_t v2; // 0x2be01b
    *(char *)a1 = *(char *)&v2;
    return result;
}

// Address range: 0x2be024 - 0x2be029
int64_t function_2be024(void) {
    // 0x2be024
    return function_76f17128();
}

// Address range: 0x2be048 - 0x2be06e
int64_t function_2be048(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2be048
    int64_t v1; // 0x2be048
    int64_t v2 = v1 + 0x6001e800; // 0x2be056
    char * v3 = (char *)((v2 & 0xffffffff) + 0x64491788); // 0x2be05b
    *v3 = *v3 | (char)a3;
    return (v2 - a4 / 256) % 256 | v2 & 0xffffff00;
}

// Address range: 0x2be070 - 0x2be078
int64_t function_2be070(void) {
    // 0x2be070
    return function_21452de();
}

// Address range: 0x2be087 - 0x2be088
int64_t function_2be087(void) {
    // 0x2be087
    int64_t result; // 0x2be087
    return result;
}

// Address range: 0x2be0b4 - 0x2be0b5
int64_t function_2be0b4(void) {
    // 0x2be0b4
    int64_t result; // 0x2be0b4
    return result;
}

// Address range: 0x2be0ba - 0x2be0c9
int64_t function_2be0ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 0x30612315); // 0x2be0ba
    *v1 = *v1 - (int32_t)a4;
    bool v2; // 0x2be0ba
    return unknown_2a1a35c7((v2 ? -1 : 1) + a1);
}

// Address range: 0x2be110 - 0x2be113
int64_t function_2be110(int64_t a1) {
    // 0x2be110
    int64_t result; // 0x2be110
    return result;
}

// Address range: 0x2be12a - 0x2be12b
int64_t function_2be12a(void) {
    // 0x2be12a
    int64_t result; // 0x2be12a
    return result;
}

// Address range: 0x2be15f - 0x2be160
int64_t function_2be15f(void) {
    // 0x2be15f
    int64_t result; // 0x2be15f
    return result;
}

// Address range: 0x2be17c - 0x2be17e
int64_t function_2be17c(void) {
    // 0x2be17c
    return function_2be12a();
}

// Address range: 0x2be192 - 0x2be193
int64_t function_2be192(int64_t a1) {
    // 0x2be192
    int64_t result; // 0x2be192
    return result;
}

// Address range: 0x2be195 - 0x2be196
int64_t function_2be195(void) {
    // 0x2be195
    int64_t result; // 0x2be195
    return result;
}

// Address range: 0x2be1d8 - 0x2be1da
int64_t function_2be1d8(void) {
    // 0x2be1d8
    return function_2be195();
}

// Address range: 0x2be20c - 0x2be20d
int64_t function_2be20c(void) {
    // 0x2be20c
    int64_t result; // 0x2be20c
    return result;
}

// Address range: 0x2be22f - 0x2be230
int64_t function_2be22f(int64_t a1) {
    // 0x2be22f
    int64_t result; // 0x2be22f
    return result;
}

// Address range: 0x2be23e - 0x2be242
int64_t function_2be23e(int32_t a1) {
    // 0x2be23e
    int64_t result; // 0x2be23e
    return result;
}

// Address range: 0x2be283 - 0x2be285
int64_t function_2be283(void) {
    // 0x2be283
    return function_2be20c();
}

// Address range: 0x2be289 - 0x2be2c8
int64_t function_2be289(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x2be289
    unknown_3ac6098f();
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x2be289
    unsigned char v2 = (char)v1; // 0x2be28f
    *(char *)(2 * v1 + a2) = v2;
    char * v3 = (char *)(a4 - 0x6c720bd6); // 0x2be29a
    *v3 = *v3 | v2;
    uint32_t v4 = *(int32_t *)(a4 - 0x4923ffc8) ^ (int32_t)a2; // 0x2be2a1
    unknown_140425ad();
    char * v5 = (char *)(v1 - 65 + 4 * (int64_t)v4); // 0x2be2ac
    *v5 = *v5 + (char)(a3 / 256);
    float80_t v6; // 0x2be289
    *(float80_t *)-0x64b66487 = (float80_t)*(float64_t *)(a2 + 0x1e89bb6) / v6;
    int64_t result = unknown_ffffffffe5a623bc(); // 0x2be2b6
    bool v7; // 0x2be289
    int64_t v8 = v7 ? -4 : 4; // 0x2be2bd
    unsigned char v9 = *(char *)(a1 - 112 + v8); // 0x2be2be
    char * v10 = (char *)(v1 - 24); // 0x2be2c1
    *v10 = *v10 - (char)a3 + (char)(v9 > v2);
    int64_t v11; // 0x2be289
    int32_t v12 = *(int32_t *)&v11; // 0x2be2c4
    *(int32_t *)a4 = v4 + (int32_t)v8 + *(int32_t *)result + v12;
    return result;
}

// Address range: 0x2be2c8 - 0x2be2ef
int64_t function_2be2c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x2be2c8
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(a4 - 48); // 0x2be2c8
        uint32_t v3 = *v2; // 0x2be2c8
        bool v4; // 0x2be2c8
        *v2 = v3 >> v1 | (int32_t)v4 << 32 - v1 | (int32_t)((int64_t)v3 << (int64_t)(33 - v1));
    }
    int32_t * v5 = (int32_t *)(a4 - 0x3bd5100b); // 0x2be2d3
    int64_t result; // 0x2be2c8
    *v5 = *v5 + (int32_t)result;
    return result;
}

// Address range: 0x2be34d - 0x2be34e
int64_t function_2be34d(void) {
    // 0x2be34d
    int64_t result; // 0x2be34d
    return result;
}

// Address range: 0x2be352 - 0x2be353
int64_t function_2be352(void) {
    // 0x2be352
    int64_t result; // 0x2be352
    return result;
}

// Address range: 0x2be38c - 0x2be3a5
int64_t function_2be38c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2be38c
    int64_t v1; // 0x2be38c
    int32_t * v2 = (int32_t *)(v1 + 95); // 0x2be38f
    *v2 = *v2 - (int32_t)v1;
    unsigned char v3 = *(char *)0x595684a2; // 0x2be39b
    unsigned char v4 = v3 + (char)(v1 / 256); // 0x2be39b
    *(char *)0x595684a2 = v4;
    if (v4 >= v3 && v4 != 0) {
        function_2be34d();
    }
    // 0x2be3a3
    return function_2be352();
}

// Address range: 0x2be3b4 - 0x2be3b8
int64_t function_2be3b4(int64_t a1) {
    // 0x2be3b4
    int64_t result; // 0x2be3b4
    return result;
}

// Address range: 0x2be407 - 0x2be40a
int64_t function_2be407(int64_t a1) {
    // 0x2be407
    int64_t result; // 0x2be407
    return result;
}

// Address range: 0x2be4c1 - 0x2be4c2
int64_t function_2be4c1(void) {
    // 0x2be4c1
    int64_t result; // 0x2be4c1
    return result;
}

// Address range: 0x2be4ce - 0x2be4cf
int64_t function_2be4ce(int64_t a1) {
    // 0x2be4ce
    int64_t result; // 0x2be4ce
    return result;
}

// Address range: 0x2be4e4 - 0x2be4fa
int64_t function_2be4e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2be4e4
    int64_t v1; // 0x2be4e4
    return unknown_ffffffffbb2235ea() + v1 & 0xffffffff;
}

// Address range: 0x2be4ff - 0x2be51e
int64_t function_2be4ff(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_35c9b40a(); // 0x2be504
    __asm_out_135((int16_t)a3, (int32_t)v1);
    uint32_t v2 = *(int32_t *)0x65d23a45; // 0x2be514
    int64_t v3; // 0x2be4ff
    uint32_t v4 = v2 + (int32_t)v3; // 0x2be514
    *(int32_t *)0x65d23a45 = v4;
    int64_t result = a3 & 0xffffffff; // 0x2be518
    if (v4 >= v2 && v4 != 0) {
        result = function_2be4c1();
    }
    // 0x2be51a
    *(int64_t *)v3 = v1 & 0xffffffff;
    return result;
}

// Address range: 0x2be5c9 - 0x2be5cc
int64_t function_2be5c9(int64_t a1) {
    // 0x2be5c9
    int64_t result; // 0x2be5c9
    return result;
}

// Address range: 0x3086af - 0x308773
int64_t function_3086af(int64_t a1, int64_t a2) {
    // 0x3086af
    int64_t v1; // bp-24, 0x3086af
    int64_t v2 = (int64_t)&v1; // 0x3086fd
    v1 = 0x56e453;
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x308722
    int64_t * v4 = (int64_t *)(v2 + 24); // 0x308722
    *v4 = *v3;
    v1 = v2;
    *v3 = a2;
    int64_t * v5 = (int64_t *)(v2 + 16); // 0x308745
    *(int64_t *)(v2 + 48) = *v5;
    int64_t v6 = *v4; // 0x308749
    *v5 = v6;
    *v3 = v6;
    int64_t v7 = *(int64_t *)(v2 + 32); // 0x30875f
    *v4 = v7;
    *v5 = v7;
    return function_c823b();
}

// Address range: 0x308773 - 0x3088b9
int64_t function_308773(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x308773
    int64_t v1; // bp-56, 0x308773
    v1 = (int64_t)&v1 + 8;
    return function_c823b();
}

// Address range: 0x3088b9 - 0x3088be
int64_t function_3088b9(void) {
    // 0x3088b9
    return function_30bcf7();
}

// Address range: 0x3088be - 0x3088bf
int64_t function_3088be(void) {
    // 0x3088be
    int64_t result; // 0x3088be
    return result;
}

// Address range: 0x3088cc - 0x30898c
int64_t function_3088cc(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3088cc
    bool v1; // 0x3088cc
    int64_t v2 = (v1 ? -1 : 1) + a1; // 0x3088cc
    *(char *)v2 = __asm_insb((int16_t)a3);
    unsigned char v3 = (char)(a3 / 256) & -97; // 0x3088d2
    int64_t v4 = unknown_c3c58db(); // 0x3088d5
    if (v3 >= 1) {
        // 0x3088dc
        return v4 & 0x1bf80764 | 0xe407f89b;
    }
    unsigned char v5 = llvm_ctpop_i8(*(char *)(256 * (int64_t)v3 | a3 & -0xff01) - 110); // 0x30892d
    int64_t v6 = unknown_ffffffffcd3efa35(); // 0x308934
    if (v5 % 2 == 0) {
        v6 = function_3088be();
    }
    char v7 = *(char *)((v2 + a2 & 0xffffffff) - 12); // 0x308936
    int64_t v8; // 0x3088cc
    char v9 = v7 | (char)((uint64_t)v8 / 256); // 0x308936
    int64_t v10 = v6 & 0xffff00ff | (int64_t)">\r"; // 0x30893b
    *(char *)-0x7c4fe176d32d779 = -41;
    uint64_t result = __asm_wait(); // 0x308954
    char * v11 = (char *)(result + 0x730a2c35); // 0x308955
    *v11 = (char)v10;
    *(int32_t *)-0x7abc0d55276fe18 = (int32_t)result;
    if ((v9 || (char)(result / 256)) < 0) {
        // 0x308976
        __asm_fldenv(*(int224_t *)result);
        return result;
    }
    unsigned char v12 = *v11 - v9; // 0x308967
    char * v13 = (char *)(4 * (v10 & 0x3fffffffffffff00 | (int64_t)v12) + 0xd80f01e8); // 0x308984
    *v13 = *v13 + v12;
    return 0x8f01e876;
}

// Address range: 0x308a24 - 0x308a25
int64_t function_308a24(int64_t a1) {
    // 0x308a24
    int64_t result; // 0x308a24
    return result;
}

// Address range: 0x308a85 - 0x308a88
int64_t function_308a85(void) {
    // 0x308a85
    int64_t result; // 0x308a85
    return result;
}

// Address range: 0x308afc - 0x308b06
int64_t function_308afc(int64_t a1, int64_t a2) {
    // 0x308afc
    int64_t result; // 0x308afc
    return result;
}

// Address range: 0x308b15 - 0x308b33
int64_t function_308b15(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    char * v2 = (char *)(a2 + 0x56001e8); // 0x308b17
    *v2 = *v2 & -4;
    int64_t result; // 0x308b15
    *(int32_t *)-0x17e7e24652f986f7 = (int32_t)result;
    int32_t * v3 = (int32_t *)(a4 - 0x439cacea); // 0x308b29
    *v3 = *v3 + (int32_t)a4;
    *(char *)a1 = *(char *)&v1;
    return result;
}

// Address range: 0x308b9a - 0x308b9b
int64_t function_308b9a(void) {
    // 0x308b9a
    int64_t result; // 0x308b9a
    return result;
}

// Address range: 0x308bb5 - 0x308bb8
int64_t function_308bb5(int64_t a1) {
    // 0x308bb5
    int64_t result; // 0x308bb5
    return result;
}

// Address range: 0x308c6b - 0x308c82
int64_t function_308c6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x308c6b
    int64_t result; // 0x308c6b
    *(char *)0x7fafbb73 = *(char *)0x7fafbb73 + (char)(result / 256);
    uint32_t v1 = (int32_t)result;
    *(int32_t *)a3 = v1 + 0x6908605f + (int32_t)(v1 > -1 - (int32_t)result);
    return result;
}

// Address range: 0x308c8f - 0x308c90
int64_t function_308c8f(void) {
    // 0x308c8f
    int64_t result; // 0x308c8f
    return result;
}

// Address range: 0x308ccf - 0x308cfb
int64_t function_308ccf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(unknown_3d96f3d5() - 0x5f70a0bd); // 0x308cd4
    *v1 = *v1 + (int32_t)a3;
    char * v2 = (char *)((unknown_417c7be2() & -0xff01 | (int64_t)&g4) + 0x1e80700); // 0x308ce3
    *v2 = *v2 | (char)((int64_t)&g4 >> 8);
    int64_t v3 = __asm_sti(); // 0x308ce9
    int64_t result = a4 & 0xffffffff; // 0x308cf8
    *(char *)result = (char)v3 + (char)a4;
    return result;
}

// Address range: 0x308cfd - 0x308d07
int64_t function_308cfd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x308cfd
    return unknown_68c64b05(a1, a2, a3, a4);
}

// Address range: 0x308d69 - 0x308da3
int64_t function_308d69(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x1e8597a); // 0x308d69
    *v1 = *v1 + 1;
    int64_t v2 = unknown_70652d7c(); // 0x308d76
    int64_t v3; // 0x308d69
    unsigned char v4 = *(char *)&v3; // 0x308d7b
    char * v5 = (char *)(v2 & -256 | (int64_t)v4); // 0x308d7c
    *v5 = (*v5 ^ v4) + 48;
    int64_t v6; // 0x308d69
    char * v7 = (char *)(v6 - 0x53fe1800); // 0x308d83
    int64_t v8; // 0x308d69
    *v7 = *v7 + (char)((*(int32_t *)&v8 | (int32_t)v2) / 256);
    char * v9 = (char *)(a3 + 0x2709a3af); // 0x308d89
    *v9 = *v9 + (char)(a3 / 256);
    return function_ffffffffe3ace597();
}

// Address range: 0x308e15 - 0x308e1d
int64_t function_308e15(void) {
    // 0x308e15
    int64_t result; // 0x308e15
    *(char *)(result - 0x257d41ff) = (char)result;
    return result;
}

// Address range: 0x308e33 - 0x308e38
int64_t function_308e33(void) {
    // 0x308e33
    return function_ffffffffca3238e7();
}

// Address range: 0x308e72 - 0x308e74
int64_t function_308e72(void) {
    // 0x308e72
    int64_t result; // 0x308e72
    return result;
}

// Address range: 0x308e9c - 0x308ead
int64_t function_308e9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x308e9c
    int64_t result; // 0x308e9c
    int32_t * v1 = (int32_t *)(result - 0x3869afd6); // 0x308e9c
    int32_t v2 = *v1; // 0x308e9c
    int32_t v3 = a3; // 0x308e9c
    int32_t v4 = v2 + v3; // 0x308e9c
    *v1 = v4;
    if (v4 < 0 != ((v4 ^ v2) & (v4 ^ v3)) < 0) {
        // 0x308ec4
        return result;
    }
    uint32_t v5 = *(int32_t *)(a4 + 58); // 0x308ea9
    return (result & 0xffffffff | 0x100000000 * a3) / (int64_t)v5 & 0xffffffff;
}

// Address range: 0x3090af - 0x309103
int64_t function_3090af(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3090af
    int64_t v1; // 0x3090af
    int64_t v2 = v1;
    int64_t v3 = a4; // bp-8, 0x3090af
    char v4 = *(char *)(a1 + 0xd0414c); // 0x3090b5
    int64_t v5 = a4 & -256 | (int64_t)((char)((char)v2 < 225) + (char)a4 - v4); // 0x3090b5
    int64_t v6 = v5 - 1; // 0x3090bd
    if (v6 != 0 == (int32_t)((v2 + 31) % 256 || v2 & 0xffffff00) == (int32_t)v1) {
        function_3090a7();
    }
    int32_t * v7 = (int32_t *)(v5 - 94); // 0x3090bf
    *v7 = *v7 + (int32_t)a3;
    int64_t v8 = unknown_2736b0d3(); // 0x3090cd
    if (v6 == 1) {
        int32_t * v9 = (int32_t *)((v8 + 0xab7e5124 & 0xffffffff) - 84); // 0x3090dd
        *v9 = *v9 + (int32_t)(int64_t)&v3;
        return unknown_ffffffffa2d434f1();
    }
    // 0x3090f9
    bool v10; // 0x3090af
    int64_t v11 = v10 ? -1 : 1; // 0x3090f9
    uint64_t result = unknown_13ec5900(v11 + a1, v11 + a2); // 0x3090fa
    char * v12 = (char *)(v1 - 82 + 4 * v1); // 0x3090ff
    *v12 = *v12 + (char)(result / 256);
    return result;
}
