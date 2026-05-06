/*
 * Targeted RetDec C for native executable gap queue batch 1206.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x11abc1-0x11adc1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x11adc1-0x11afc1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x11b1c1-0x11b3c1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x11b3c1-0x11b5c1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x11b5c1-0x11b7c1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x11b7c1-0x11b9c1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x339a7b-0x339c7b rank=- name=- kind=- bytes=- uncovered=-
 *   0x339c7b-0x339e7b rank=- name=- kind=- bytes=- uncovered=-
 *   0x339e7b-0x33a07b rank=- name=- kind=- bytes=- uncovered=-
 *   0x33a07b-0x33a27b rank=- name=- kind=- bytes=- uncovered=-
 *   0x33a27b-0x33a47b rank=- name=- kind=- bytes=- uncovered=-
 *   0x33a47b-0x33a67b rank=- name=- kind=- bytes=- uncovered=-
 *   0x33a67b-0x33a87b rank=- name=- kind=- bytes=- uncovered=-
 *   0x385030-0x385230 rank=- name=- kind=- bytes=- uncovered=-
 *   0x385230-0x385430 rank=- name=- kind=- bytes=- uncovered=-
 *   0x385430-0x385630 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_106d654();
int64_t function_11abc1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_11ac55(void);
int64_t function_11ac60(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11ac9b(void);
int64_t function_11aca5(int64_t a1);
int64_t function_11acb7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11acc8(void);
int64_t function_11ad26(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_11ad83(void);
int64_t function_11ad84(void);
int64_t function_11adbf(int64_t a1);
int64_t function_11addf(int64_t a1, int64_t a2);
int64_t function_11ae1d(void);
int64_t function_11ae42(void);
int64_t function_11ae6d(void);
int64_t function_11aef8(void);
int64_t function_11af06(void);
int64_t function_11af07(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11af7a(void);
int64_t function_11af86(int64_t a1, int64_t a2);
int64_t function_11afa2(void);
int64_t function_11afa6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11b1be();
int64_t function_11b1c1(void);
int64_t function_11b1c4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_11b24d(int64_t a1);
int64_t function_11b25c(int64_t a1);
int64_t function_11b274(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11b2d1(int64_t a1);
int64_t function_11b31c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11b33e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_11b352(void);
int64_t function_11b360(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_11b4b7(void);
int64_t function_11b4c2(void);
int64_t function_11b4d0(void);
int64_t function_11b4e1(int64_t a1, int64_t a2);
int64_t function_11b4f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11b504(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11b5b4(int64_t a1);
int64_t function_11b5dd(void);
int64_t function_11b5e5(int64_t a1);
int64_t function_11b5f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11b610(int64_t a1);
int64_t function_11b613(int64_t a1);
int64_t function_11b643(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11b65c(int64_t a1);
int64_t function_11b6bf(void);
int64_t function_11b72b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11b754(int64_t a1);
int64_t function_11b76b(void);
int64_t function_11b77b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11b798(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11b7d6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_11b829(int64_t a1);
int64_t function_11b82a(void);
int64_t function_11b831(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11b84f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11b851(void);
int64_t function_11b86f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_11b88a(int64_t a1);
int64_t function_11b89b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_11b91b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11b957(void);
int64_t function_12724c();
int64_t function_13d5b889();
int64_t function_182da083();
int64_t function_1fa12a2();
int64_t function_21bd0cd();
int64_t function_21c18b2();
int64_t function_2e162278();
int64_t function_339a7b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_339ac9(void);
int64_t function_339af4(void);
int64_t function_339afe(int64_t a1);
int64_t function_339b57(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_339b9a(void);
int64_t function_339b9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_339c8e(int64_t a1);
int64_t function_339cfb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_339d0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6);
int64_t function_339de0(int64_t a1);
int64_t function_339e35(int64_t a1, int64_t a2, int64_t a3);
int64_t function_339e3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_339e7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_339eeb(int64_t a1);
int64_t function_339f04(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_339f3b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_339f5c(void);
int64_t function_339f65(int64_t a1);
int64_t function_339fcd(void);
int64_t function_339feb(void);
int64_t function_33a011(void);
int64_t function_33a020(void);
int64_t function_33a02c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_33a12d(void);
int64_t function_33a1dc(int64_t a1);
int64_t function_33a1f4(void);
int64_t function_33a25d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33a280(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33a35a(int64_t a1);
int64_t function_33a377(int64_t a1);
int64_t function_33a3a1(int64_t a1);
int64_t function_33a404(int64_t a1);
int64_t function_33a45a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33a517(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33a5e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33a635(void);
int64_t function_33a642(void);
int64_t function_33a64c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_33a6cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_385030(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_385078(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3851a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_385318(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38548d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3855e6(void);
int64_t function_3855e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3855ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3855f4(void);
int64_t function_5ae40cb9();
int64_t function_63095642();
int64_t function_817d757();
int64_t function_c4258();
int64_t function_cc59c();
int64_t function_cdc60();
int64_t function_ffffffffb01f8548();
int64_t function_ffffffffe4ed59d9();
int64_t function_ffffffffe847c329();
int64_t unknown_11ce6150();
int64_t unknown_124652ec();
int64_t unknown_14ccdec5();
int64_t unknown_2006e02e();
int64_t unknown_2234fd6a();
int64_t unknown_2a6764a4();
int64_t unknown_3816a0b0();
int64_t unknown_3a37cae1();
int64_t unknown_3a473975();
int64_t unknown_3d84f9fd();
int64_t unknown_71d2942a();
int64_t unknown_7abaf53b();
int64_t unknown_7b95e292();
int64_t unknown_7cb409fe();
int64_t unknown_80e9dcc();
int64_t unknown_c65033b();
int64_t unknown_d77a977();
int64_t unknown_ffffffff81fdc92c();
int64_t unknown_ffffffff892c7386();
int64_t unknown_ffffffff8a6998c0();
int64_t unknown_ffffffff9bd3cd43();
int64_t unknown_ffffffffb2125866();
int64_t unknown_ffffffffb234511d();
int64_t unknown_ffffffffb42ec599();
int64_t unknown_ffffffffb50a75e2();
int64_t unknown_ffffffffbb34dc0a();
int64_t unknown_ffffffffc4ba4799();
int64_t unknown_ffffffffd08f7e15();
int64_t unknown_ffffffffd4874245();
int64_t unknown_ffffffffd69c30a1();
int64_t unknown_ffffffffd6a9e9d7();
int64_t unknown_ffffffffdf0a14df();
int64_t unknown_ffffffffe09b8726();
int64_t unknown_ffffffffe880a917();
int64_t unknown_fffffffff4ca561b();
int64_t unknown_fffffffff836910e();
int64_t unknown_fffffffffd10d194();
int64_t unknown_ffffffffff3e7fc9();

// Address range: 0x11abc1 - 0x11ac55
int64_t function_11abc1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x11abc1
    int64_t v1; // bp-8, 0x11abc1
    int64_t v2 = (int64_t)&v1; // 0x11ac18
    v1 = a6;
    *(int64_t *)(v2 + 32) = a6;
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x11ac28
    int64_t v4 = *v3; // 0x11ac28
    v1 = v4;
    *(int64_t *)(v2 - 8) = v4;
    *v3 = *(int64_t *)(v2 + 16);
    return function_cdc60(a1);
}

// Address range: 0x11ac55 - 0x11ac5a
int64_t function_11ac55(void) {
    // 0x11ac55
    return function_12724c();
}

// Address range: 0x11ac60 - 0x11ac7e
int64_t function_11ac60(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11ac60
    unknown_ffffffffb2125866();
    int32_t v1 = *(int32_t *)(a2 + 32); // 0x11ac6d
    bool v2; // 0x11ac60
    int64_t result = unknown_d77a977((v2 ? -4 : 4) + a1); // 0x11ac70
    char * v3 = (char *)(a4 + 68 + (int64_t)(v1 + (int32_t)a3)); // 0x11ac76
    int64_t v4; // 0x11ac60
    *v3 = *v3 ^ (char)v4;
    return result;
}

// Address range: 0x11ac9b - 0x11ac9e
int64_t function_11ac9b(void) {
    // 0x11ac9b
    int64_t result; // 0x11ac9b
    return result;
}

// Address range: 0x11aca5 - 0x11aca7
int64_t function_11aca5(int64_t a1) {
    // 0x11aca5
    int64_t result; // 0x11aca5
    return result;
}

// Address range: 0x11acb7 - 0x11acc2
int64_t function_11acb7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11acb7
    int64_t result; // 0x11acb7
    return result;
}

// Address range: 0x11acc8 - 0x11acd1
int64_t function_11acc8(void) {
    // 0x11acc8
    int64_t result; // 0x11acc8
    return result;
}

// Address range: 0x11ad26 - 0x11ad30
int64_t function_11ad26(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x11ad26
    int64_t v1; // 0x11ad26
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + v1); // 0x11ad26
    *v3 = *v3 + (int32_t)v1;
    return v2 & -256 | v2 - a4 / 256 & 197 | 58;
}

// Address range: 0x11ad83 - 0x11ad84
int64_t function_11ad83(void) {
    // 0x11ad83
    int64_t result; // 0x11ad83
    return result;
}

// Address range: 0x11ad84 - 0x11ad87
int64_t function_11ad84(void) {
    // 0x11ad84
    int64_t result; // 0x11ad84
    return result;
}

// Address range: 0x11adbf - 0x11adc0
int64_t function_11adbf(int64_t a1) {
    // 0x11adbf
    int64_t result; // 0x11adbf
    return result;
}

// Address range: 0x11addf - 0x11adf1
int64_t function_11addf(int64_t a1, int64_t a2) {
    // 0x11addf
    int64_t result; // 0x11addf
    *(int32_t *)-0x292bfffc1fff971a = (int32_t)result;
    int32_t * v1 = (int32_t *)(a1 + 0x3d00cb47); // 0x11ade8
    *v1 = *v1 + (int32_t)a2;
    return result;
}

// Address range: 0x11ae1d - 0x11ae24
int64_t function_11ae1d(void) {
    // 0x11ae1d
    int64_t v1; // 0x11ae1d
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 - (char)(v1 / 256);
    return function_ffffffffe4ed59d9();
}

// Address range: 0x11ae42 - 0x11ae43
int64_t function_11ae42(void) {
    // 0x11ae42
    int64_t result; // 0x11ae42
    return result;
}

// Address range: 0x11ae6d - 0x11ae6e
int64_t function_11ae6d(void) {
    // 0x11ae6d
    int64_t result; // 0x11ae6d
    return result;
}

// Address range: 0x11aef8 - 0x11aef9
int64_t function_11aef8(void) {
    // 0x11aef8
    int64_t result; // 0x11aef8
    return result;
}

// Address range: 0x11af06 - 0x11af07
int64_t function_11af06(void) {
    // 0x11af06
    int64_t result; // 0x11af06
    return result;
}

// Address range: 0x11af07 - 0x11af51
int64_t function_11af07(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x11af07
    int64_t v1; // 0x11af07
    int32_t v2 = v1; // 0x11af07
    __asm_out_133((int16_t)a3, v2);
    *(int32_t *)a1 = v2;
    int64_t v3; // 0x11af07
    char * v4 = (char *)(v3 + 0x1001e8a9); // 0x11af09
    *v4 = *v4 + (char)(v3 / 256);
    int32_t * v5 = (int32_t *)(a4 - 0x17fe3900); // 0x11af16
    *v5 = *v5 | 0x3a489f01;
    int64_t v6 = v3;
    *(char *)v6 = *(char *)&v3 - (char)v6;
    bool v7; // 0x11af07
    __asm_out_134(109, (int32_t)unknown_2006e02e((v7 ? -4 : 4) + a1));
    int64_t v8; // 0x11af07
    unsigned char v9 = *(char *)&v8; // 0x11af2f
    *(char *)a2 = v9 / 2 | 128 * v9;
    v3 = __asm_wait();
    if (a4 == 0) {
        v3 = function_11aef8();
    }
    // 0x11af3f
    return v1 & 0xffffffff;
}

// Address range: 0x11af7a - 0x11af7b
int64_t function_11af7a(void) {
    // 0x11af7a
    int64_t result; // 0x11af7a
    return result;
}

// Address range: 0x11af86 - 0x11af9a
int64_t function_11af86(int64_t a1, int64_t a2) {
    // 0x11af86
    *(char *)(a1 + 0x8ba4d36 + 2 * a1) = -1;
    int64_t v1; // 0x11af86
    int32_t v2 = v1; // 0x11af8e
    int64_t v3; // 0x11af86
    *(int32_t *)a1 = *(int32_t *)&v3 | v2;
    int32_t * v4 = (int32_t *)(a2 - 96); // 0x11af90
    *v4 = *v4 + v2;
    unknown_ffffffffb42ec599();
    return function_11af7a();
}

// Address range: 0x11afa2 - 0x11afa3
int64_t function_11afa2(void) {
    // 0x11afa2
    int64_t result; // 0x11afa2
    return result;
}

// Address range: 0x11afa6 - 0x11afbf
int64_t function_11afa6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = a4 & 0xffffffff; // 0x11afa6
    char * v1 = (char *)(result + 103); // 0x11afa7
    char v2 = *v1; // 0x11afa7
    int64_t v3; // 0x11afa6
    char v4 = v3; // 0x11afa7
    char v5 = v2 + v4; // 0x11afa7
    *v1 = v5;
    if (v5 < 0 == ((v5 ^ v2) & (v5 ^ v4)) < 0) {
        // 0x11b009
        return result;
    }
    if ((v3 & 0xffffffff) != 1) {
        function_11afa2();
    }
    // 0x11afae
    int64_t v6; // 0x11afa6
    __asm_outsb((int16_t)a3, *(char *)&v6);
    int32_t * v7 = (int32_t *)(v3 + 0x6feec7f0); // 0x11afb2
    *v7 = *v7 + (int32_t)a3;
    return function_5ae40cb9();
}

// Address range: 0x11b1c1 - 0x11b1c2
int64_t function_11b1c1(void) {
    // 0x11b1c1
    int64_t result; // 0x11b1c1
    return result;
}

// Address range: 0x11b1c4 - 0x11b1ef
int64_t function_11b1c4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x11b1c4
    int64_t v1; // 0x11b1c4
    int64_t v2 = v1 & -0xff01 | 256 * a4 & 0xff00; // 0x11b1c4
    unknown_80e9dcc();
    int32_t * v3 = (int32_t *)(v1 - 0x1b64d3ed); // 0x11b1cb
    *v3 = *v3 + (int32_t)v2;
    int64_t v4 = __asm_hlt(); // 0x11b1d4
    if (-(char)(a3 / 256) >= 0) {
        v4 = function_11b1be();
    }
    int32_t * v5 = (int32_t *)(a2 + 0x3c8c5997); // 0x11b1d6
    *v5 = *v5 + (int32_t)v1;
    int64_t v6 = v2; // bp-8, 0x11b1de
    int32_t * v7 = (int32_t *)(v2 - 75); // 0x11b1e5
    *v7 = *v7 + (int32_t)(int64_t)&v6;
    *(int32_t *)a1 = (int32_t)v4;
    bool v8; // 0x11b1c4
    return function_2e162278((v8 ? -4 : 4) + a1);
}

// Address range: 0x11b24d - 0x11b250
int64_t function_11b24d(int64_t a1) {
    // 0x11b24d
    int64_t result; // 0x11b24d
    return result;
}

// Address range: 0x11b25c - 0x11b25f
int64_t function_11b25c(int64_t a1) {
    // 0x11b25c
    int64_t result; // 0x11b25c
    return result;
}

// Address range: 0x11b274 - 0x11b27b
int64_t function_11b274(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x11b274
    int64_t result; // 0x11b274
    return result;
}

// Address range: 0x11b2d1 - 0x11b2ea
int64_t function_11b2d1(int64_t a1) {
    // 0x11b2d1
    unknown_ffffffffd6a9e9d7();
    unknown_ffffffffd08f7e15();
    int64_t result = unknown_ffffffffb50a75e2(); // 0x11b2dc
    int64_t v1; // 0x11b2d1
    char * v2 = (char *)(v1 & -256 | 145); // 0x11b2e3
    *v2 = *v2 + (char)result;
    return result;
}

// Address range: 0x11b31c - 0x11b327
int64_t function_11b31c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x11b31c
    int64_t v1; // 0x11b31c
    return (uint64_t)v1 % 256 ^ v1;
}

// Address range: 0x11b33e - 0x11b352
int64_t function_11b33e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x11b33e
    int64_t v1; // 0x11b33e
    __asm_out_133((int16_t)a3, (int32_t)v1);
    uint64_t v2 = unknown_ffffffffd4874245(); // 0x11b33f
    bool v3; // 0x11b33e
    int64_t result = (v2 - (v3 ? 138 : 137)) % 256 | v2 & -256; // 0x11b344
    char * v4 = (char *)(result - 121); // 0x11b346
    unsigned char v5 = *v4; // 0x11b346
    unsigned char v6 = v5 + (char)v1; // 0x11b346
    *v4 = v6;
    char * v7 = (char *)(result + 0x1b01e803); // 0x11b349
    *v7 = *v7 + (char)(v2 / 256) + (char)(v6 < v5);
    return result;
}

// Address range: 0x11b352 - 0x11b355
int64_t function_11b352(void) {
    // 0x11b352
    int64_t result; // 0x11b352
    return result;
}

// Address range: 0x11b360 - 0x11b430
int64_t function_11b360(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x11b360
    int64_t v1; // 0x11b360
    int64_t v2 = v1;
    int64_t v3 = a1;
    int64_t v4 = a6;
    bool v5; // 0x11b360
    if (v5 || v5) {
        int64_t v6 = (int64_t)&v4; // 0x11b3d5
        int64_t result = a2 & 0xffffffff; // 0x11b3b1
        *(int32_t *)(2 * v2 + 114 + v6) = (int32_t)v2;
        if (a4 == 1 || (int32_t)(v1 ^ v6) == 0) {
            int32_t * v7 = (int32_t *)(v1 + 8); // 0x11b3c4
            *v7 = *v7 + (int32_t)v1;
            return result;
        }
        // 0x11b3d2
        return result;
    }
    // 0x11b3d9
    unknown_ffffffffdf0a14df();
    __asm_int3();
    int64_t v8 = __asm_wait(); // 0x11b3ef
    float80_t v9; // 0x11b360
    *(float32_t *)(v8 & 0xffffffff) = (float32_t)v9;
    char * v10 = (char *)((a3 & -256 | 51) - 123); // 0x11b3f3
    *v10 = *v10 + 51;
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)v8;
    int64_t v11 = v8 & 0xffffff00 | (int64_t)(*(char *)&v3 & (char)v8); // 0x11b3fd
    unknown_fffffffff836910e();
    uint32_t v12 = *(int32_t *)&v3; // 0x11b412
    *(int32_t *)v3 = v12 / 0x1000000 | 256 * v12;
    int32_t * v13 = (int32_t *)(a2 - 24 + v11); // 0x11b414
    int32_t v14 = *v13; // 0x11b414
    *v13 = (((int32_t)v1 | (int32_t)&g1) >> 31) + (int32_t)v11 + v14;
    int32_t v15 = *(int32_t *)0xe8bbfb30; // 0x11b418
    int64_t v16; // bp+16, 0x11b360
    *(int32_t *)0xe8bbfb30 = v15 + (int32_t)(int64_t)&v16;
    int64_t v17 = unknown_71d2942a(); // 0x11b424
    return v17 & -256 | (int64_t)((char)v17 - *(char *)0x7e9f8bbd);
}

// Address range: 0x11b4b7 - 0x11b4b8
int64_t function_11b4b7(void) {
    // 0x11b4b7
    int64_t result; // 0x11b4b7
    return result;
}

// Address range: 0x11b4c2 - 0x11b4c5
int64_t function_11b4c2(void) {
    // 0x11b4c2
    int64_t result; // 0x11b4c2
    return result;
}

// Address range: 0x11b4d0 - 0x11b4d1
int64_t function_11b4d0(void) {
    // 0x11b4d0
    int64_t result; // 0x11b4d0
    return result;
}

// Address range: 0x11b4e1 - 0x11b4e6
int64_t function_11b4e1(int64_t a1, int64_t a2) {
    // 0x11b4e1
    int64_t v1; // 0x11b4e1
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    bool v3; // 0x11b4e1
    return function_11b504(a1, (v3 ? -1 : 1) + a2, v1, v1);
}

// Address range: 0x11b4f2 - 0x11b504
int64_t function_11b4f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_3d84f9fd(); // 0x11b4f7
    int64_t v2; // 0x11b4f2
    *(int32_t *)a1 = 2 * (int32_t)v2;
    return v1 + v2 & 0xffffffff;
}

// Address range: 0x11b504 - 0x11b591
int64_t function_11b504(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a3;
    __asm_iretd();
    int32_t * v3 = (int32_t *)(a4 + 0x3c0ad879); // 0x11b509
    *v3 = *v3 + (int32_t)a4;
    int64_t v4; // 0x11b504
    *(char *)-0x513bbf1f = *(char *)-0x513bbf1f - (char)(v4 / 256);
    int64_t v5 = unknown_fffffffff4ca561b(); // 0x11b515
    int64_t v6; // 0x11b504
    int32_t v7 = *(int32_t *)&v6; // 0x11b51a
    int64_t v8; // 0x11b504
    int32_t v9 = *(int32_t *)&v8; // 0x11b51a
    bool v10; // 0x11b504
    int64_t v11 = v10 ? -4 : 4; // 0x11b51a
    int64_t v12 = v11 + a1; // 0x11b51a
    int64_t v13 = v11 + a2; // 0x11b51a
    v8 = v12;
    v6 = v13;
    int64_t v14 = v5; // 0x11b51b
    if (((v7 - v9 ^ v7) & (v9 ^ v7)) >= 0) {
        int64_t v15 = unknown_ffffffffe09b8726(v12, v13); // 0x11b525
        if (v1 == 0) {
            v15 = function_11b4b7();
        }
        uint32_t v16 = (int32_t)v4 - *(int32_t *)(v13 + 0x1e8be68); // 0x11b527
        int32_t * v17 = (int32_t *)(v15 + 91); // 0x11b531
        *v17 = *v17 - (*(int32_t *)(v4 - 73 + v13) < (int32_t)v13 ? 36 : 35);
        int32_t v18 = *(int32_t *)&v2; // 0x11b537
        int32_t v19 = v18 + v16; // 0x11b537
        *(int32_t *)v2 = v19;
        v14 = v15;
        if (v19 < 0 == ((v19 ^ v18) & (v19 ^ v16)) < 0) {
            v14 = function_11b4d0();
        }
        // 0x11b53b
        *(int64_t *)((int64_t)v16 - 8) = v1;
    }
    int32_t v20 = *(int32_t *)&v1 + (int32_t)v14; // 0x11b542
    unsigned char v21 = llvm_ctpop_i8((char)v20); // 0x11b542
    *(int32_t *)v1 = v20;
    int32_t v22 = __asm_in((int16_t)v2); // 0x11b544
    int64_t result = v22; // 0x11b544
    if (v21 % 2 == 0) {
        // 0x11b547
        return result;
    }
    // 0x11b583
    __asm_out_135(-14, (char)v22);
    *(int32_t *)result = v22;
    return unknown_7b95e292();
}

// Address range: 0x11b5b4 - 0x11b5b5
int64_t function_11b5b4(int64_t a1) {
    // 0x11b5b4
    int64_t result; // 0x11b5b4
    return result;
}

// Address range: 0x11b5dd - 0x11b5e3
int64_t function_11b5dd(void) {
    // 0x11b5dd
    return function_1fa12a2();
}

// Address range: 0x11b5e5 - 0x11b5eb
int64_t function_11b5e5(int64_t a1) {
    // 0x11b5e5
    int64_t v1; // 0x11b5e5
    bool v2; // 0x11b5e5
    return v1 - (v2 ? 0x98b962c : 0x98b962b) & 0xffffffff;
}

// Address range: 0x11b5f2 - 0x11b610
int64_t function_11b5f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11b5f2
    int64_t v1; // 0x11b5f2
    int64_t v2 = v1;
    unsigned char v3 = *(char *)-0x156cfedcb06bddf5; // 0x11b5f2
    int32_t * v4 = (int32_t *)(v2 + 0x5d5a7a5c); // 0x11b600
    *v4 = *v4 + (int32_t)a3;
    return v2 - 256 * (v1 & (int64_t)v3) & 0xff00 | v2 & 0xffff00ff;
}

// Address range: 0x11b610 - 0x11b613
int64_t function_11b610(int64_t a1) {
    // 0x11b610
    int64_t result; // 0x11b610
    return result;
}

// Address range: 0x11b613 - 0x11b617
int64_t function_11b613(int64_t a1) {
    // 0x11b613
    int64_t v1; // 0x11b613
    int64_t v2 = v1;
    return v2 & -0x10000 | (int64_t)((256 * (int16_t)v2 >> 8) * (256 * (int16_t)v1 >> 8));
}

// Address range: 0x11b643 - 0x11b64f
int64_t function_11b643(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11b643
    float80_t v1; // 0x11b643
    *(int16_t *)(a4 + 0x1e8da29) = (int16_t)v1;
    return function_ffffffffb01f8548();
}

// Address range: 0x11b65c - 0x11b662
int64_t function_11b65c(int64_t a1) {
    // 0x11b65c
    int64_t v1; // 0x11b65c
    return function_817d757(v1 & 0xffffffff);
}

// Address range: 0x11b6bf - 0x11b6c0
int64_t function_11b6bf(void) {
    // 0x11b6bf
    int64_t result; // 0x11b6bf
    return result;
}

// Address range: 0x11b72b - 0x11b752
int64_t function_11b72b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x11b72b
    *(int32_t *)-0x6ee78dbb = *(int32_t *)-0x6ee78dbb + (int32_t)a1;
    return unknown_11ce6150();
}

// Address range: 0x11b754 - 0x11b755
int64_t function_11b754(int64_t a1) {
    // 0x11b754
    int64_t result; // 0x11b754
    return result;
}

// Address range: 0x11b76b - 0x11b76c
int64_t function_11b76b(void) {
    // 0x11b76b
    int64_t result; // 0x11b76b
    return result;
}

// Address range: 0x11b77b - 0x11b781
int64_t function_11b77b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11b77b
    int64_t result; // 0x11b77b
    return result;
}

// Address range: 0x11b798 - 0x11b7d4
int64_t function_11b798(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x11b798
    int64_t result; // 0x11b798
    int32_t * v1 = (int32_t *)(result - 1); // 0x11b798
    int32_t v2 = *v1 + (int32_t)a3; // 0x11b798
    *v1 = v2;
    if (v2 >= 0) {
        // 0x11b79d
        return result;
    }
    // 0x11b7a8
    *(char *)(result + 29) = (char)result;
    char * v3 = (char *)((result | a4 & 0xff00) + 37); // 0x11b7b4
    *v3 = *v3 | (char)a4;
    bool v4; // 0x11b798
    unknown_ffffffff8a6998c0((v4 ? -4 : 4) + a1);
    unknown_ffffffffff3e7fc9();
    int32_t v5 = __asm_in_136(99); // 0x11b7c9
    return (int64_t)(v5 & -256) | (int64_t)*(char *)0x2bf8031f01e88300;
}

// Address range: 0x11b7d6 - 0x11b808
int64_t function_11b7d6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x11b7d6
    unknown_3a37cae1();
    int64_t v1 = unknown_124652ec(); // 0x11b7e6
    char * v2 = (char *)(v1 + 0x3601c00); // 0x11b7eb
    *v2 = *v2 + (char)v1;
    uint64_t v3 = v1 + a4 / 256; // 0x11b7f1
    int64_t v4 = v3 % 256 | v1 & -256; // 0x11b7f1
    int64_t v5; // 0x11b7d6
    int32_t * v6 = (int32_t *)(v5 - 0x1ffeaf00); // 0x11b7f3
    *v6 = *v6 + 0x38724b3f;
    char * v7 = (char *)(v4 - 0x4c0d05db); // 0x11b7fb
    *v7 = *v7 + (char)v3;
    *(int32_t *)a1 = (int32_t)v4;
    return v4 & 0xfe17dc72 | 0x1e8238d;
}

// Address range: 0x11b829 - 0x11b82a
int64_t function_11b829(int64_t a1) {
    // 0x11b829
    int64_t result; // 0x11b829
    return result;
}

// Address range: 0x11b82a - 0x11b831
int64_t function_11b82a(void) {
    // 0x11b82a
    return function_ffffffffe847c329();
}

// Address range: 0x11b831 - 0x11b84e
int64_t function_11b831(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x234c6ef4); // 0x11b831
    int64_t v2; // 0x11b831
    *v1 = *v1 + (int32_t)v2;
    int32_t * v3 = (int32_t *)(v2 + 21); // 0x11b845
    *v3 = *v3 + (int32_t)v2;
    return function_11b851();
}

// Address range: 0x11b84f - 0x11b851
int64_t function_11b84f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11b84f
    int64_t result; // 0x11b84f
    *(int32_t *)a4 = (int32_t)result + (int32_t)a1;
    return result;
}

// Address range: 0x11b851 - 0x11b852
int64_t function_11b851(void) {
    // 0x11b851
    int64_t result; // 0x11b851
    return result;
}

// Address range: 0x11b86f - 0x11b876
int64_t function_11b86f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x11b86f
    int64_t v1; // 0x11b86f
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a3;
    return function_13d5b889();
}

// Address range: 0x11b88a - 0x11b88e
int64_t function_11b88a(int64_t a1) {
    // 0x11b88a
    int64_t result; // 0x11b88a
    return result;
}

// Address range: 0x11b89b - 0x11b8b3
int64_t function_11b89b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x11b89b
    unknown_ffffffffd69c30a1();
    int64_t result = unknown_3816a0b0(); // 0x11b8aa
    __asm_out_133((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x11b91b - 0x11b92d
int64_t function_11b91b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x11b91b
    int64_t v1; // 0x11b91b
    unsigned char v2 = (char)v1; // 0x11b91b
    bool v3; // 0x11b91b
    char v4 = v3; // 0x11b91b
    unsigned char v5 = *(char *)(v1 + 0x13d00b1) + v4; // 0x11b91b
    char v6 = v2 - v5; // 0x11b91b
    float80_t v7; // 0x11b91b
    *(int16_t *)((v1 & -256 | (int64_t)v6) + 0x2db183f7) = (int16_t)v7;
    int64_t v8 = a4 - 1; // 0x11b927
    int64_t v9; // 0x11b91b
    if (v8 != 0 && v6 != 0) {
        v9 = function_11b91b(a1, a2, a3, v8, (int64_t)&g4);
    }
    bool v10 = v3 ? v5 != -1 | v6 - v4 > v2 : v5 > v2; // 0x11b91b
    return 256 * (128 * (int64_t)(v6 < 0) | 64 * (int64_t)(v6 == 0) | 16 * (int64_t)(v2 % 16 + v4 - v5 % 16 > 15) | (int64_t)v10 | 4 * (int64_t)(llvm_ctpop_i8(v6) % 2 == 0)) | v9 & -0xff01 | 512;
}

// Address range: 0x11b957 - 0x11b95c
int64_t function_11b957(void) {
    // 0x11b957
    int64_t result; // 0x11b957
    return result;
}

// Address range: 0x339a7b - 0x339ab1
int64_t function_339a7b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2; // 0x339a7b
    unsigned char v3 = (char)v2;
    *(char *)v2 = v3 / 128 | 2 * v3;
    int64_t v4 = __asm_int1(); // 0x339a82
    int64_t v5 = v4; // 0x339a82
    *(int32_t *)a1 = (int32_t)v4;
    *(char *)v4 = *(char *)&v5 + (char)v4;
    char * v6 = (char *)(v2 + 0x3d000008); // 0x339a86
    *v6 = *v6 + (char)(a3 / 256);
    *(int32_t *)a3 = *(int32_t *)&v1 + (int32_t)v2;
    uint32_t v7 = (int32_t)a4 % 32; // 0x339a92
    if (v7 != 0) {
        int64_t v8 = 8 * v2 | 1;
        *(int32_t *)(v5 + v8) = *(int32_t *)(v4 + v8) << v7;
    }
    __asm_out((int16_t)v1, (char)v5);
    *(char *)0x6f581aa = *(char *)0x6f581aa + (char)(v5 / 256);
    return v2 & 0xd6b19dfd;
}

// Address range: 0x339ac9 - 0x339acf
int64_t function_339ac9(void) {
    // 0x339ac9
    bool v1; // 0x339ac9
    if (true == !v1) {
        // 0x339acf
        int64_t result; // 0x339ac9
        return result;
    }
    // 0x339acb
    return function_339afe((int64_t)&g4);
}

// Address range: 0x339af4 - 0x339afe
int64_t function_339af4(void) {
    // 0x339af4
    int64_t v1; // 0x339af4
    return v1 & -256 | (int64_t)*(char *)-0xfa9e837fe567617;
}

// Address range: 0x339afe - 0x339b0c
int64_t function_339afe(int64_t a1) {
    // 0x339afe
    int64_t v1; // 0x339afe
    return v1 & -0xff01;
}

// Address range: 0x339b57 - 0x339b9a
int64_t function_339b57(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x339b57
    int64_t v1; // 0x339b57
    *(char *)-0x18a7d9b = *(char *)-0x18a7d9b + (char)(v1 / 256);
    uint32_t v2 = (int32_t)__asm_int3() | 0x3d8db7a; // 0x339b76
    *(int32_t *)0x13d01e801e8e331 = v2;
    int32_t v3 = *(int32_t *)(v1 - 0x240b27f5); // 0x339b7f
    *(char *)-0x177371bb = *(char *)-0x177371bb | (char)(a4 / 256);
    int32_t * v4 = (int32_t *)(a3 + 0x900798e); // 0x339b8b
    uint32_t v5 = *v4; // 0x339b8b
    int32_t v6 = v5 + v2; // 0x339b8b
    unsigned char v7 = llvm_ctpop_i8((char)v6); // 0x339b8b
    *v4 = v6;
    return unknown_ffffffffc4ba4799((int32_t)a1 - v3) & -0xff01 | 256 * (64 * (int64_t)(v6 == 0) | (int64_t)(v6 < v5) | 128 * (int64_t)(v6 < 0) | 16 * (int64_t)(v5 % 16 + v2 % 16 > 15) | 4 * (int64_t)(v7 % 2 == 0)) | 512;
}

// Address range: 0x339b9a - 0x339b9c
int64_t function_339b9a(void) {
    // 0x339b9a
    int64_t result; // 0x339b9a
    return result;
}

// Address range: 0x339b9c - 0x339c0a
int64_t function_339b9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = unknown_2a6764a4(); // 0x339b9e
    bool v3; // 0x339b9c
    int64_t v4 = (v3 ? -1 : 1) + a1; // 0x339ba8
    int64_t v5; // 0x339b9c
    int32_t v6 = v5;
    *(int32_t *)v5 = (int32_t)v2 + v6;
    int32_t * v7 = (int32_t *)(a2 - 67 + 2 * a3); // 0x339bae
    *v7 = -1 - *v7;
    __asm_sti(v4);
    int32_t * v8 = (int32_t *)(a2 + 55); // 0x339bb5
    uint32_t v9 = *v8; // 0x339bb5
    uint32_t v10 = v9 + v6; // 0x339bb5
    *v8 = v10;
    int32_t * v11 = (int32_t *)(v5 - 0x57fb0fff); // 0x339bb8
    int32_t v12 = *v11; // 0x339bb8
    int32_t v13 = (int32_t)(v10 < v9) + (int32_t)v5; // 0x339bb8
    *v11 = v12 - v13;
    int64_t v14 = unknown_14ccdec5(); // 0x339bbf
    if (v12 >= v13) {
        char * v15 = (char *)v14; // 0x339bc6
        *v15 = *v15 + (char)a4;
        int32_t * v16 = (int32_t *)(a3 + 0x80f8332); // 0x339bcd
        *v16 = *v16 + (int32_t)v4;
        return v14 + 0xd1262385 & 0xffffffff;
    }
    // 0x339bd9
    *(int32_t *)(v5 - 0x17e9c7fe) = (int32_t)a4;
    int32_t * v17 = (int32_t *)(v5 + 0x75a090a6); // 0x339bee
    *v17 = *v17 + 10 * *(int32_t *)(v5 - 0x27fe1754);
    *(int32_t *)v1 = *(int32_t *)&v1 - 0x124ab03a;
    int32_t * v18 = (int32_t *)(v5 - 0x26f16925); // 0x339c02
    *v18 = *v18 + (int32_t)v5;
    return v14 & -0xff01 | (int64_t)&g3;
}

// Address range: 0x339c8e - 0x339c9a
int64_t function_339c8e(int64_t a1) {
    // 0x339c8e
    return unknown_fffffffffd10d194(a1) & 0xa9945b19;
}

// Address range: 0x339cfb - 0x339cfe
int64_t function_339cfb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x339cfb
    int64_t result; // 0x339cfb
    if (v1 != 0) {
        uint32_t v2 = (int32_t)result;
        *(int32_t *)result = v2 >> 32 - v1 | v2 << v1;
    }
    return result;
}

// Address range: 0x339d0f - 0x339dab
int64_t function_339d0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2 = (int64_t)*(int32_t *)0x21c9b17; // 0x339d7b
    int64_t v3 = -0x193d1a41 * v2; // 0x339d7b
    int64_t v4; // 0x339d0f
    if ((int32_t)v4 == -0x5a6c0bff || v3 != -0x193d1a4100000000 * v2 >> 32) {
        // 0x339d45
        *(char *)a2 = (char)(a5 ^ a2);
        __asm_out_133((int16_t)a3, (int32_t)v3);
        int64_t v5 = __asm_int3(); // 0x339d5d
        char v6 = *(char *)0x68881965; // 0x339d5e
        *(char *)0x68881965 = v6 + (char)((v4 | a5) / 256);
        *(char *)0xbd3d784 = *(char *)0xbd3d784 + (char)(a5 / 256);
        unsigned char v7 = *(char *)&v1; // 0x339d6a
        return ((v5 & 0xff00) + a5 & 0xff00 | v5 & -0x10000 | (int64_t)v7) + 0xaea137;
    }
    // 0x339d88
    *(char *)(2 * a4 + 0x77013d00) = -59;
    __asm_in_136(59);
    return 0xdef41dad;
}

// Address range: 0x339de0 - 0x339de3
int64_t function_339de0(int64_t a1) {
    // 0x339de0
    int64_t result; // 0x339de0
    return result;
}

// Address range: 0x339e35 - 0x339e3a
int64_t function_339e35(int64_t a1, int64_t a2, int64_t a3) {
    // 0x339e35
    int64_t result; // 0x339e35
    return result;
}

// Address range: 0x339e3a - 0x339e4e
int64_t function_339e3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x339e3a
    int64_t v1; // 0x339e3a
    int64_t v2 = v1;
    int64_t v3 = v2 - ((int32_t)v2 < (int32_t)a3 ? 0xfb498e6e : 0xfb498e6d); // 0x339e3e
    return (v3 + a4) % 256 | v3 & 0xffffff00;
}

// Address range: 0x339e7c - 0x339e94
int64_t function_339e7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x339e7c
    int64_t v1; // 0x339e7c
    uint64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)a3;
    if (a4 == 1 || (int32_t)v1 == 0x640277a) {
        // 0x339e89
        *(char *)0x54db4290 = *(char *)0x54db4290 + (char)(v2 / 256);
    }
    // 0x339e8f
    return function_63095642();
}

// Address range: 0x339eeb - 0x339ef2
int64_t function_339eeb(int64_t a1) {
    // 0x339eeb
    int64_t result; // 0x339eeb
    int32_t * v1 = (int32_t *)(result + 0x34b99e52); // 0x339eeb
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x339f04 - 0x339f24
int64_t function_339f04(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x339f04
    unknown_ffffffffbb34dc0a();
    unknown_ffffffffe880a917();
    return function_106d654();
}

// Address range: 0x339f3b - 0x339f54
int64_t function_339f3b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x339f3b
    return unknown_ffffffff9bd3cd43();
}

// Address range: 0x339f5c - 0x339f5d
int64_t function_339f5c(void) {
    // 0x339f5c
    int64_t result; // 0x339f5c
    return result;
}

// Address range: 0x339f65 - 0x339f68
int64_t function_339f65(int64_t a1) {
    // 0x339f65
    int64_t v1; // 0x339f65
    int64_t v2 = v1;
    return (v2 + 141) % 256 | v2 & -256;
}

// Address range: 0x339fcd - 0x339fd8
int64_t function_339fcd(void) {
    // 0x339fcd
    int64_t v1; // 0x339fcd
    *(int32_t *)0x3c3432de = *(int32_t *)0x3c3432de + (int32_t)v1;
    return function_182da083();
}

// Address range: 0x339feb - 0x339fec
int64_t function_339feb(void) {
    // 0x339feb
    int64_t result; // 0x339feb
    return result;
}

// Address range: 0x33a011 - 0x33a012
int64_t function_33a011(void) {
    // 0x33a011
    int64_t result; // 0x33a011
    return result;
}

// Address range: 0x33a020 - 0x33a021
int64_t function_33a020(void) {
    // 0x33a020
    int64_t result; // 0x33a020
    return result;
}

// Address range: 0x33a02c - 0x33a0ed
int64_t function_33a02c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    unsigned char v2 = (char)a4; // 0x33a02c
    *(char *)a3 = v2;
    // 0x33a030
    return unknown_7abaf53b();
    unsigned char v3 = v2 % 32; // 0x33a0b0
    if (v3 != 0) {
        *(char *)-0x17ca7749 = *(char *)-0x17ca7749 >> v3;
    }
    int64_t v4 = v1;
    *(int32_t *)v4 = *(int32_t *)&v1 + (int32_t)v4;
    int64_t v5; // 0x33a02c
    bool v6; // 0x33a02c
    return v5 + 0x4f27a274 + (int64_t)v6 & 0xffffffff;
}

// Address range: 0x33a12d - 0x33a133
int64_t function_33a12d(void) {
    // 0x33a12d
    int64_t result; // 0x33a12d
    return result;
}

// Address range: 0x33a1dc - 0x33a1dd
int64_t function_33a1dc(int64_t a1) {
    // 0x33a1dc
    int64_t result; // 0x33a1dc
    return result;
}

// Address range: 0x33a1f4 - 0x33a1fa
int64_t function_33a1f4(void) {
    // 0x33a1f4
    int64_t v1; // 0x33a1f4
    return v1 & 0xffffffff ^ 0x1e85007;
}

// Address range: 0x33a25d - 0x33a280
int64_t function_33a25d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x33a25d
    __asm_iretd();
    __asm_out_133((int16_t)((a4 + a3) % 256 | a3 & 0xff00), (int32_t)unknown_3a473975());
    return function_21c18b2(0x349c47a2);
}

// Address range: 0x33a280 - 0x33a2f1
int64_t function_33a280(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x33a280
    return a4 & 0xffffffff;
}

// Address range: 0x33a35a - 0x33a35b
int64_t function_33a35a(int64_t a1) {
    // 0x33a35a
    int64_t result; // 0x33a35a
    return result;
}

// Address range: 0x33a377 - 0x33a378
int64_t function_33a377(int64_t a1) {
    // 0x33a377
    int64_t result; // 0x33a377
    return result;
}

// Address range: 0x33a3a1 - 0x33a3a4
int64_t function_33a3a1(int64_t a1) {
    // 0x33a3a1
    int64_t result; // 0x33a3a1
    return result;
}

// Address range: 0x33a404 - 0x33a407
int64_t function_33a404(int64_t a1) {
    // 0x33a404
    int64_t result; // 0x33a404
    return result;
}

// Address range: 0x33a45a - 0x33a487
int64_t function_33a45a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x33a45a
    *(int32_t *)-0x4d267b98 = *(int32_t *)-0x4d267b98 + (int32_t)a1;
    __asm_in_137((int16_t)a3);
    __asm_in_138(-93);
    int64_t v1; // 0x33a45a
    int32_t * v2 = (int32_t *)(v1 - 0x50628e8a); // 0x33a479
    *v2 = *v2 + (int32_t)v1;
    return function_21bd0cd();
}

// Address range: 0x33a517 - 0x33a5e3
int64_t function_33a517(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x33a517
    unknown_ffffffffb234511d();
    bool v1; // 0x33a517
    int64_t v2 = v1 ? -4 : 4; // 0x33a51c
    int64_t v3 = v2 + a1; // 0x33a51c
    char * v4 = (char *)(2 * a3 + a2); // 0x33a523
    char v5 = a4; // 0x33a523
    unsigned char v6 = *v4 | v5; // 0x33a523
    *v4 = v6;
    int64_t v7 = unknown_ffffffff81fdc92c(); // 0x33a526
    if (v6 >= 0) {
        int32_t v8 = v7; // 0x33a530
        *(int32_t *)v3 = v8;
        char * v9 = (char *)v7; // 0x33a531
        *v9 = *v9 + v5;
        int32_t * v10 = (int32_t *)v7; // 0x33a533
        *v10 = *v10 + v8;
        return unknown_c65033b(v3 + v2);
    }
    int64_t v11 = v3 + (v1 ? -1 : 1); // 0x33a55b
    uint32_t v12 = a2; // 0x33a55b
    int64_t v13; // 0x33a517
    *(int64_t *)(v13 - 8) = 0x4025d04b;
    unknown_2234fd6a();
    *(int64_t *)(v13 - 16) = v11;
    int64_t v14; // 0x33a517
    v13 = v14 + 8;
    v14 = *(int64_t *)v14;
    while (v12 < 0) {
        // 0x33a55c
        v12 = (int64_t)v12;
        *(int64_t *)(v13 - 8) = 0x4025d04b;
        unknown_2234fd6a();
        *(int64_t *)(v13 - 16) = v11;
        v13 = v14 + 8;
        v14 = *(int64_t *)v14;
    }
    int64_t v15 = a4 - 1; // 0x33a578
    if (v15 != 0 == v12 == 0) {
        // 0x33a5e2
        return v15 & 0xffffffff;
    }
    // 0x33a57a
    unknown_ffffffff892c7386((int32_t)v11 - *(int32_t *)(a3 + 0xcbf0f7), v12);
    return __asm_int1();
}

// Address range: 0x33a5e6 - 0x33a619
int64_t function_33a5e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x33a5e6
    *(char *)a4 = (char)a4;
    int64_t v1; // 0x33a5e6
    __asm_out_135(-116, (char)v1);
    int32_t * v2 = (int32_t *)(v1 - 0x17fece8b); // 0x33a5ec
    *v2 = *v2 + (int32_t)a4;
    __asm_wait();
    unknown_7cb409fe();
    float80_t v3; // 0x33a5e6
    *(int16_t *)(a4 + 0x1e8768f) = (int16_t)v3;
    int64_t v4 = __asm_fnstenv(); // 0x33a60b
    bool v5; // 0x33a5e6
    *(int224_t *)(a2 + 61 + (v5 ? -1 : 1)) = (int224_t)v4;
    __asm_int(16);
    return v4 + 2 * v1 & 0xffffffff;
}

// Address range: 0x33a635 - 0x33a637
int64_t function_33a635(void) {
    // 0x33a635
    int64_t result; // 0x33a635
    return result;
}

// Address range: 0x33a642 - 0x33a643
int64_t function_33a642(void) {
    // 0x33a642
    int64_t result; // 0x33a642
    return result;
}

// Address range: 0x33a64c - 0x33a658
int64_t function_33a64c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x33a64c
    int64_t result; // 0x33a64c
    return result;
}

// Address range: 0x33a6cf - 0x33a85a
int64_t function_33a6cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x33a6cf
    int64_t v1; // 0x33a6cf
    char * v2 = (char *)(v1 + 0x29c06900); // 0x33a6cf
    *v2 = *v2 + (char)v1;
    int64_t v3; // 0x33a6cf
    unsigned char v4 = *(char *)&v3; // 0x33a6d5
    int64_t v5 = v3;
    *(char *)v5 = (char)v5;
    char * v6 = (char *)(2 * v1 + 0x4caa61b3 + (v3 & -256 | (int64_t)v4)); // 0x33a6d7
    *v6 = *v6 + (char)v1;
    int64_t v7; // bp-32, 0x33a6cf
    int64_t v8 = (int64_t)&v7; // 0x33a791
    *(int64_t *)(v8 - 16) = a3;
    *(int64_t *)(v8 - 24) = v8;
    int64_t * v9 = (int64_t *)(v8 + 16); // 0x33a7e9
    *v9 = a7;
    *(int64_t *)(v8 - 8) = v8;
    v7 = 0x32ba9280;
    int64_t * v10 = (int64_t *)(v8 + 8); // 0x33a806
    *(int64_t *)(v8 + 40) = *v10;
    *v10 = a6;
    v7 = a4;
    *v9 = v8 + 32;
    return function_c4258();
}

// Address range: 0x385030 - 0x385078
int64_t function_385030(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x385030
    int64_t v1; // 0x385030
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    return function_cc59c(a1, a5, a3, a4, v1, v1);
}

// Address range: 0x385078 - 0x3851a1
int64_t function_385078(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x7569710d; // bp-40, 0x38513e
    int64_t v2 = (int64_t)&v1; // 0x385165
    *(int64_t *)(v2 - 8) = 0x7569710d;
    *(int64_t *)(v2 - 16) = v2;
    bool v3; // 0x385078
    return function_cc59c(a1, a2, 310, 0x4000 * (int64_t)(bool)v3 | 2048 * (int64_t)v3 | 1024 * (int64_t)v3 | 512 * (int64_t)v3 | 256 * (int64_t)v3 | 128 * (int64_t)v3 | 64 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3 | 2, a5, 0x228b8ccb);
}

// Address range: 0x3851a1 - 0x385318
int64_t function_3851a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3851a1
    int64_t v1; // 0x3851a1
    return function_cc59c(a1, a2, a3, a4, a5, v1);
}

// Address range: 0x385318 - 0x38548d
int64_t function_385318(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x385318
    int64_t v1; // bp-40, 0x385318
    int64_t v2 = (int64_t)&v1; // 0x3853a5
    int64_t v3 = v2 + 16; // 0x3853d3
    v1 = v3;
    int64_t v4 = v2 + 32; // 0x3853e2
    int64_t v5 = *(int64_t *)v4; // 0x3853e2
    int64_t * v6 = (int64_t *)(v2 + 8); // 0x3853e2
    *v6 = a4;
    *(int64_t *)(v2 + 24) = a4;
    *(int64_t *)(v2 - 8) = v5;
    v1 = v5;
    *(int64_t *)(v2 + 40) = *v6;
    v1 = a3;
    *(int64_t *)v3 = v4;
    int64_t v7; // 0x385318
    return function_cc59c(v5, a2, a3, v7, v7, v7);
}

// Address range: 0x38548d - 0x3855de
int64_t function_38548d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x38548d
    int64_t v1; // 0x38548d
    return function_cc59c(a1, v1, a3, a4, v1, v1);
}

// Address range: 0x3855e6 - 0x3855e7
int64_t function_3855e6(void) {
    // 0x3855e6
    int64_t result; // 0x3855e6
    return result;
}

// Address range: 0x3855e7 - 0x3855ec
int64_t function_3855e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3855e7
    int64_t v1; // 0x3855e7
    char * v2 = (char *)(v1 - 127); // 0x3855e7
    *v2 = *v2 | (char)a4;
    return function_3855f4();
}

// Address range: 0x3855ec - 0x3855f4
int64_t function_3855ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3855ec
    int64_t v1; // 0x3855ec
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(v2 - 121); // 0x3855ee
    unsigned char v4 = *v3; // 0x3855ee
    unsigned char v5 = v4 + (char)a4; // 0x3855ee
    *v3 = v5;
    return (v2 - (v5 < v4 ? 37 : 36)) % 256 | v2 & -256;
}

// Address range: 0x3855f4 - 0x38562a
int64_t function_3855f4(void) {
    // 0x3855f4
    int64_t result; // 0x3855f4
    return result;
}
