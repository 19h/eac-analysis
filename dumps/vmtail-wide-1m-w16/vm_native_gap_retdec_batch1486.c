/*
 * Targeted RetDec C for native executable gap queue batch 1486.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x23fe34-0x240034 rank=- name=- kind=- bytes=- uncovered=-
 *   0x240234-0x240434 rank=- name=- kind=- bytes=- uncovered=-
 *   0x240434-0x240634 rank=- name=- kind=- bytes=- uncovered=-
 *   0x240634-0x240834 rank=- name=- kind=- bytes=- uncovered=-
 *   0x240834-0x240a05 rank=- name=- kind=- bytes=- uncovered=-
 *   0x35ea21-0x35ec21 rank=- name=- kind=- bytes=- uncovered=-
 *   0x35ec21-0x35ee21 rank=- name=- kind=- bytes=- uncovered=-
 *   0x35ee21-0x35f021 rank=- name=- kind=- bytes=- uncovered=-
 *   0x35f021-0x35f221 rank=- name=- kind=- bytes=- uncovered=-
 *   0x35f221-0x35f421 rank=- name=- kind=- bytes=- uncovered=-
 *   0x35f421-0x35f5bc rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a9474-0x3a9674 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a9674-0x3a9874 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a9874-0x3a9a74 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a9a74-0x3a9c74 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a9e74-0x3aa011 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
extern int g6;
extern int g7;
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

int64_t function_14d18c34();
int64_t function_1829f6bc();
int64_t function_23fe34(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_23fecd(int64_t a1);
int64_t function_23fefa(void);
int64_t function_23ff04(void);
int64_t function_23ff0a(void);
int64_t function_23ff0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23ff20(void);
int64_t function_23ff49(void);
int64_t function_23ff59(void);
int64_t function_23ff83(void);
int64_t function_23ff8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23ffc3(void);
int64_t function_240234(int64_t a1, int64_t a2);
int64_t function_24023d(int64_t a1);
int64_t function_24024f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_240354(int64_t a1, int64_t a2, int64_t a3);
int64_t function_24038e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2403b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_240478(void);
int64_t function_240483(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_2404ba(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2406c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_240753(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_240756(int64_t a1);
int64_t function_2407ba(int64_t a1);
int64_t function_2407e6(int64_t a1);
int64_t function_24084a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_240897(int64_t a1);
int64_t function_2408bd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2408cc(int64_t a1);
int64_t function_2408d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_240924(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t result2);
int64_t function_2409c0(void);
int64_t function_2409db(void);
int64_t function_35ea21(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_35ea4c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_35ea77(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35ec3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35ecea(int64_t a1);
int64_t function_35ed0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_35ed83(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_35ee11(int64_t a1, int64_t a2, int64_t a3);
int64_t function_35ee8c(void);
int64_t function_35eee8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_35ef00(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_35ef3f(void);
int64_t function_35efa1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35f064(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35f073(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35f0ca(int64_t a1);
int64_t function_35f146(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_35f1bd(void);
int64_t function_35f1d4(void);
int64_t function_35f21c(int64_t a1);
int64_t function_35f2de(int64_t a1);
int64_t function_35f32d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35f345(int64_t a1);
int64_t function_35f381(int64_t a1);
int64_t function_35f38a(int64_t a1);
int64_t function_35f3a5(void);
int64_t function_35f3bd(void);
int64_t function_35f43f(void);
int64_t function_35f468(void);
int64_t function_35f492(void);
int64_t function_35f4bb(int64_t a1);
int64_t function_35f4d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35f4f4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_35f501(void);
int64_t function_35f532(int64_t a1, int64_t a2, int64_t a3);
int64_t function_35f55f(void);
int64_t function_3a9474(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a947f(int64_t a1, int64_t a2);
int64_t function_3a949d(void);
int64_t function_3a94af(int64_t a1);
int64_t function_3a94cc(int64_t a1);
int64_t function_3a94d8(void);
int64_t function_3a94ff(void);
int64_t function_3a9513(int64_t a1, int64_t a2);
int64_t function_3a951d(void);
int64_t function_3a95e4(void);
int64_t function_3a9658(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a968e(void);
int64_t function_3a96b1(void);
int64_t function_3a96bb(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_3a96f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a970f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a9781(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a9792(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a97b9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a97e8(void);
int64_t function_3a980f(void);
int64_t function_3a9824(void);
int64_t function_3a9827(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3a982f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_3a983c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a9863(int64_t a1);
int64_t function_3a988e(void);
int64_t function_3a9891(void);
int64_t function_3a98c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a9930(void);
int64_t function_3a9931(void);
int64_t function_3a99a0(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_3a99c2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a9a03(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a9a33(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a9a55(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a9a75(void);
int64_t function_3a9a8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a9aec(void);
int64_t function_3a9b33(void);
int64_t function_3a9b3a(void);
int64_t function_3a9b49(void);
int64_t function_3a9b4d(void);
int64_t function_3a9b63(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a9bb0(int64_t a1);
int64_t function_3a9c4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a9c6a(int64_t a1);
int64_t function_3a9e74(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a9e89(void);
int64_t function_3a9eba(void);
int64_t function_3a9eda(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a9f21(void);
int64_t function_3a9f42(void);
int64_t function_3a9f90(void);
int64_t function_3a9fa2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a9fb5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a9feb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3a9ffc(void);
int64_t function_4225e82b();
int64_t function_4d1d1e2();
int64_t function_573d1793();
int64_t function_6c0260ad();
int64_t function_7165c40();
int64_t function_7f8004f9();
int64_t function_8bcf37a();
int64_t function_bcf5df();
int64_t function_f69418();
int64_t function_ffffffff9a41d12b();
int64_t function_ffffffff9c25fada();
int64_t function_ffffffffa4f4c6f9();
int64_t function_ffffffffa9e399dd();
int64_t function_ffffffffaa47eb1a();
int64_t function_ffffffffb3799b96();
int64_t function_ffffffffc66da048();
int64_t function_ffffffffd6df4427();
int64_t function_ffffffffe1373200();
int64_t function_ffffffffe18fff37();
int64_t function_ffffffffed80984f();
int64_t function_fffffffffe936bce();
int64_t unknown_173bf68();
int64_t unknown_2319d695();
int64_t unknown_2364b6e4();
int64_t unknown_2664a7df();
int64_t unknown_2b41d7ef();
int64_t unknown_2fb03cea();
int64_t unknown_303fda3f();
int64_t unknown_31309c46();
int64_t unknown_32f0c94f();
int64_t unknown_373753b5();
int64_t unknown_3a453c70();
int64_t unknown_3d25ea55();
int64_t unknown_3d37d95e();
int64_t unknown_47429f5b();
int64_t unknown_4e2edd5e();
int64_t unknown_641a7ab();
int64_t unknown_6ea5bb97();
int64_t unknown_7f9aaecf();
int64_t unknown_a410061();
int64_t unknown_ffffffff89452682();
int64_t unknown_ffffffff931ea77a();
int64_t unknown_ffffffffb0751527();
int64_t unknown_ffffffffc1486f3b();
int64_t unknown_ffffffffc3a1a593();
int64_t unknown_ffffffffc46b7f52();
int64_t unknown_ffffffffded21ea8();
int64_t unknown_ffffffffe65e0f70();
int64_t unknown_ffffffffe82ed451();
int64_t unknown_ffffffffe902bec4();
int64_t unknown_ffffffffe91ac7b6();
int64_t unknown_fffffffffd459b8a();

// Address range: 0x23fe34 - 0x23fec9
int64_t function_23fe34(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2; // 0x23fe34
    char * v3 = (char *)(v2 + 0x5701e8da); // 0x23fe37
    unsigned char v4 = *v3; // 0x23fe37
    *v3 = v4 - 85;
    int64_t v5 = -0x17246525; // bp-8, 0x23fe45
    int64_t v6; // 0x23fe34
    char v7 = *(char *)&v6; // 0x23fe51
    bool v8; // 0x23fe34
    v6 = (v8 ? -1 : 1) + a1;
    if (v7 > (char)((int32_t)(int16_t)&g7 + 0xaa0714e)) {
        int32_t * v9 = (int32_t *)(a4 + 0x2f16088b); // 0x23fea7
        *v9 = *v9 | (int32_t)v1;
        uint32_t v10 = (int32_t)a4 % 32; // 0x23feae
        if (v10 != 0) {
            uint32_t v11 = *(int32_t *)((int32_t)(int16_t)&g7 + 0xaa0714e); // 0x23feae
            *(int32_t *)((int32_t)(int16_t)&g7 + 0xaa0714e) = v11 >> 32 - v10 | v11 << v10;
        }
        int64_t v12 = unknown_ffffffffe91ac7b6(v6); // 0x23feb0
        uint32_t v13 = (int32_t)v12; // 0x23feb5
        *(int32_t *)v6 = *(int32_t *)&v1;
        *(char *)-0x73da1843 = (char)(v13 >= 0x2327287c);
        __asm_int(-4);
        return v12 + 0xe73ad837 + (int64_t)(v13 > 0x2327287b) & 0xffffffff;
    }
    unsigned char v14 = *(char *)((int32_t)(int16_t)&g7 + 0xaa0714e); // 0x23fe54
    int32_t * v15 = (int32_t *)(v1 - 0x7d66fe18); // 0x23fe56
    int32_t v16 = *v15; // 0x23fe56
    *v15 = v16 + (int32_t)(int64_t)&v5 + (int32_t)(v14 < (char)((int32_t)(int16_t)&g7 + 0xaa0714e));
    char * v17 = (char *)((a3 + a2 & 0xffffffff) + 30); // 0x23fe5f
    *v17 = *v17 | (char)(v2 + a4 + (int64_t)(v4 < 85));
    uint32_t v18 = (int32_t)a4 % 32; // 0x23fe62
    if (v18 != 0) {
        int32_t * v19 = (int32_t *)(v6 - 0x17faa7b6); // 0x23fe62
        *v19 = *v19 << v18;
    }
    int32_t * v20 = (int32_t *)(v1 + 0x230ffbae); // 0x23fe68
    *v20 = *v20 + (int32_t)v1;
    return unknown_ffffffff931ea77a(v6);
}

// Address range: 0x23fecd - 0x23fed0
int64_t function_23fecd(int64_t a1) {
    // 0x23fecd
    int64_t result; // 0x23fecd
    return result;
}

// Address range: 0x23fefa - 0x23fefb
int64_t function_23fefa(void) {
    // 0x23fefa
    int64_t result; // 0x23fefa
    return result;
}

// Address range: 0x23ff04 - 0x23ff05
int64_t function_23ff04(void) {
    // 0x23ff04
    int64_t result; // 0x23ff04
    return result;
}

// Address range: 0x23ff0a - 0x23ff0c
int64_t function_23ff0a(void) {
    // 0x23ff0a
    return function_23ff04();
}

// Address range: 0x23ff0c - 0x23ff1f
int64_t function_23ff0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23ff0c
    int64_t v1; // 0x23ff0c
    int32_t * v2 = (int32_t *)(8 * v1 + v1); // 0x23ff0c
    *v2 = *v2 + (int32_t)v1;
    return function_ffffffffe18fff37();
}

// Address range: 0x23ff20 - 0x23ff29
int64_t function_23ff20(void) {
    char v1 = *(char *)0x66ebde27; // 0x23ff20
    int64_t result; // 0x23ff20
    *(char *)0x66ebde27 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x23ff49 - 0x23ff4c
int64_t function_23ff49(void) {
    // 0x23ff49
    int64_t result; // 0x23ff49
    bool v1; // 0x23ff49
    if (!v1) {
        result = function_23ff04();
    }
    // 0x23ff4c
    return result;
}

// Address range: 0x23ff59 - 0x23ff5e
int64_t function_23ff59(void) {
    // 0x23ff59
    return function_8bcf37a();
}

// Address range: 0x23ff83 - 0x23ff84
int64_t function_23ff83(void) {
    // 0x23ff83
    int64_t result; // 0x23ff83
    return result;
}

// Address range: 0x23ff8f - 0x23ff9b
int64_t function_23ff8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23ff8f
    unknown_2319d695(a1, a2, a3, a4);
    return function_23ff83();
}

// Address range: 0x23ffc3 - 0x23ffc9
int64_t function_23ffc3(void) {
    // 0x23ffc3
    return function_4225e82b();
}

// Address range: 0x240234 - 0x24023c
int64_t function_240234(int64_t a1, int64_t a2) {
    // 0x240234
    int64_t v1; // 0x240234
    *(char *)-0x404756c5 = *(char *)-0x404756c5 + (char)(v1 / 256);
    return v1 & 0xffffffff;
}

// Address range: 0x24023d - 0x24024f
int64_t function_24023d(int64_t a1) {
    // 0x24023d
    int64_t result; // 0x24023d
    return result;
}

// Address range: 0x24024f - 0x2402d6
int64_t function_24024f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_3d25ea55(); // 0x24024f
    int64_t v1; // 0x24024f
    uint32_t v2 = (int32_t)v1;
    int32_t v3 = v2 + (int32_t)a2; // 0x240254
    *(int32_t *)a4 = v3;
    if (v3 < 0) {
        int64_t v4 = unknown_ffffffffded21ea8(); // 0x2402a2
        char v5 = __asm_in_134((int16_t)a3); // 0x2402a9
        return v4 & -0x10000 | (int64_t)&g1 & -256 | (int64_t)v5;
    }
    int32_t * v6 = (int32_t *)(a1 + 1); // 0x2402bb
    *v6 = (int32_t)result + (int32_t)(v3 < v2) + *v6;
    *(char *)0x7225eb61 = *(char *)0x7225eb61 + 72;
    char * v7 = (char *)(result - 0x8a7c966); // 0x2402c5
    *v7 = *v7 & (char)a3;
    __asm_out_133((int16_t)(v1 + a3), (char)result);
    return result;
}

// Address range: 0x240354 - 0x24036b
int64_t function_240354(int64_t a1, int64_t a2, int64_t a3) {
    // 0x240354
    unknown_47429f5b();
    int32_t * v1 = (int32_t *)(a2 - 0x2728fa27); // 0x24035a
    int64_t v2; // 0x240354
    int32_t v3 = v2; // 0x24035a
    *v1 = *v1 + v3;
    int32_t * v4 = (int32_t *)(a2 - 0xc1efe18); // 0x240360
    *v4 = *v4 | v3;
    return function_ffffffffa9e399dd();
}

// Address range: 0x24038e - 0x240397
int64_t function_24038e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24038e
    int64_t v1; // 0x24038e
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + (char)a4;
    return unknown_6ea5bb97(a1, a2, a3, a4);
}

// Address range: 0x2403b8 - 0x240444
int64_t function_2403b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2403b8
    int64_t v1; // 0x2403b8
    int64_t v2 = (v1 & 0xffffff00 | (int64_t)*(char *)0x13d01e801e8182f) ^ 0x1e81062; // 0x240400
    int32_t * v3 = (int32_t *)(a2 + 0x1580068 + v1); // 0x24040e
    *v3 = *v3 + (int32_t)a2;
    char * v4 = (char *)((v2 + 101) % 256 | v2 & 0xffff0000); // 0x240427
    *v4 = *v4 + (char)a4;
    *(int64_t *)0xfecb8897 = 0x7dec4afc;
    int64_t v5; // 0x2403b8
    int64_t v6 = v5;
    *(int32_t *)v6 = *(int32_t *)&v5 | (int32_t)v6;
    *(int32_t *)(a2 - 0x4deaf01b) = (int32_t)v1 + 0x1347761;
    return 0x10000 * (int32_t)a1 >> 16 & -256 | 230;
}

// Address range: 0x240478 - 0x24047d
int64_t function_240478(void) {
    // 0x240478
    return function_7f8004f9();
}

// Address range: 0x240483 - 0x2404af
int64_t function_240483(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x240483
    int64_t v1; // 0x240483
    *(char *)a1 = (char)v1;
    *(int32_t *)0x3d006ba481593a0e = (int32_t)v1;
    char v2 = *(char *)((2 * v1 & 0xfffffffe) + 27); // 0x24049a
    char * v3 = (char *)(256 * (int64_t)((char)(a3 / 256) - v2) | a3 & -0xff01); // 0x24049f
    *v3 = *v3 + (char)((int64_t)&g5 >> 8);
    int32_t v4 = *(int32_t *)0xd0208a06; // 0x2404a6
    *(int32_t *)0xd0208a06 = (int32_t)v1 & -0xff01 | (int32_t)&g5 | v4;
    return 0x68104503;
}

// Address range: 0x2404ba - 0x240594
int64_t function_2404ba(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2404ba
    int64_t v1; // 0x2404ba
    uint64_t v2 = v1;
    bool v3; // 0x2404ba
    if (!v3 && true) {
        uint64_t v4 = v2 / 256; // 0x2404c0
        *(char *)0x27f9d2c7 = *(char *)0x27f9d2c7 + (char)v4;
        if ((char)(v4 & a1) != 0) {
            int64_t v5 = unknown_2fb03cea(); // 0x2404e4
            char v6 = *(char *)(a4 - 24); // 0x2404eb
            return v5 & -256 | (int64_t)((char)v5 - 116 & v6);
        }
        unsigned char v7 = *(char *)0x53640e4baa22d12a; // 0x2404d9
        char v8 = *(char *)((v2 & -256 | 150) + (int64_t)v7); // 0x24050f
        unsigned char v9 = *(char *)-0x17bc20c0; // 0x240511
        *(char *)-0x17bc20c0 = v9 / 128 | 2 * v9;
        char v10 = *(char *)(a2 - 92); // 0x240518
        return (int64_t)(v10 & v8) | (int64_t)(*(int32_t *)0x7a9013d00ab0e65 & -256);
    }
    // 0x240520
    unknown_ffffffffb0751527();
    __asm_hlt();
    int64_t v11 = unknown_ffffffffc1486f3b(); // 0x240535
    int16_t v12 = 256 * (v2 & (int64_t)(char)((int64_t)&g6 >> 8)) | (a3 | (int64_t)&g6) % 256; // 0x24053a
    __asm_out_133(v12, (char)v11);
    int32_t v13 = v11; // 0x24053e
    uint32_t v14 = *(int32_t *)v11; // 0x24053e
    unknown_31309c46();
    uint64_t v15 = a4 % 64; // 0x240545
    bool v16 = v14 == -v13; // 0x240545
    bool v17 = v14 > -1 - v13; // 0x240545
    if (v15 != 0) {
        int64_t v18 = a1 << v15; // 0x240545
        *(int64_t *)a1 = v18;
        v16 = v18 == 0;
        v17 = (0x8000000000000000 >> v15 - 1 & a1) != 0;
    }
    int64_t v19 = (int64_t)(*(int32_t *)(v11 + 49) ^ (int32_t)a2); // 0x24053b
    __asm_outsd(v12, *(int32_t *)v19);
    if (v16 || v17) {
        // 0x24054b
        unknown_ffffffffe82ed451();
        __asm_in(-37);
        return unknown_4e2edd5e();
    }
    int32_t * v20 = (int32_t *)(a4 - 0x1506ff55 + v19); // 0x240585
    *v20 = *v20 + (int32_t)a1;
    return unknown_ffffffffc3a1a593() & -256 | 145;
}

// Address range: 0x2406c4 - 0x2406c7
int64_t function_2406c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2406c4
    int64_t result; // 0x2406c4
    return result;
}

// Address range: 0x240753 - 0x240756
int64_t function_240753(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x240753
    int64_t v1; // 0x240753
    uint32_t result = 0x10000 * (int32_t)v1 >> 16; // 0x240753
    __asm_out_133((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x240756 - 0x240759
int64_t function_240756(int64_t a1) {
    // 0x240756
    int64_t result; // 0x240756
    return result;
}

// Address range: 0x2407ba - 0x2407c1
int64_t function_2407ba(int64_t a1) {
    // 0x2407ba
    int64_t result; // 0x2407ba
    *(char *)0x6d9401e8 = (char)result;
    return result;
}

// Address range: 0x2407e6 - 0x2407e7
int64_t function_2407e6(int64_t a1) {
    // 0x2407e6
    int64_t result; // 0x2407e6
    return result;
}

// Address range: 0x24084a - 0x240862
int64_t function_24084a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x24084a
    int64_t v1; // 0x24084a
    char v2 = *(char *)(v1 - 0x1714414b + 4 * v1); // 0x240855
    int64_t result = v1 & 0x9d6fe00 | (int64_t)(v2 + ((char)v1 | -24)) | 0xf6290100; // 0x240855
    int32_t * v3 = (int32_t *)(v1 + 2 * a4); // 0x24085c
    *v3 = *v3 + (int32_t)result;
    return result;
}

// Address range: 0x240897 - 0x240898
int64_t function_240897(int64_t a1) {
    // 0x240897
    int64_t result; // 0x240897
    return result;
}

// Address range: 0x2408bd - 0x2408c1
int64_t function_2408bd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2408bd
    int64_t result; // 0x2408bd
    return result;
}

// Address range: 0x2408cc - 0x2408cf
int64_t function_2408cc(int64_t a1) {
    // 0x2408cc
    int64_t result; // 0x2408cc
    return result;
}

// Address range: 0x2408d1 - 0x2408d6
int64_t function_2408d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x2408d1
    int64_t result; // 0x2408d1
    if (v1 != 0) {
        uint32_t v2 = (int32_t)result;
        *(int32_t *)result = v2 >> 32 - v1 | v2 << v1;
    }
    return result;
}

// Address range: 0x240924 - 0x24096f
int64_t function_240924(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t result2) {
    char * v1 = (char *)(a2 - 0x31f4e858); // 0x240924
    char v2 = *v1 | (char)(a3 / 256); // 0x240924
    *v1 = v2;
    int64_t v3; // 0x240924
    int64_t v4; // 0x240924
    if (v2 == 0) {
        // 0x24092c
        *(char *)0x4807c434 = *(char *)0x4807c434 + (char)(v4 / 256);
        int64_t result = unknown_ffffffffe65e0f70(); // 0x240933
        *(int32_t *)((v3 & 0xffffffff) - 0x199b8e89) = (int32_t)a3;
        return result;
    }
    // 0x240958
    float80_t v5; // 0x240924
    *(int32_t *)(v3 + 8 * v4) = (int32_t)v5;
    int64_t v6 = v3;
    *(int32_t *)v6 = *(int32_t *)&v3 + (int32_t)v6;
    return result2;
}

// Address range: 0x2409c0 - 0x2409c1
int64_t function_2409c0(void) {
    // 0x2409c0
    int64_t result; // 0x2409c0
    return result;
}

// Address range: 0x2409db - 0x2409dc
int64_t function_2409db(void) {
    // 0x2409db
    int64_t result; // 0x2409db
    return result;
}

// Address range: 0x35ea21 - 0x35ea44
int64_t function_35ea21(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x35ea21
    int64_t v1; // 0x35ea21
    uint64_t v2 = v1;
    int64_t v3 = 256 * (int64_t)((char)(a4 / 256) - __readfsbyte((a6 & 0xffffffff) + 0x410bf481)) | a4 & -0xff01; // 0x35ea23
    char v4 = *(char *)(v3 + 6); // 0x35ea2c
    *(char *)0x2e7ae536 = *(char *)0x2e7ae536 + (char)(v2 / 256);
    char * v5 = (char *)(2 * v2 + 0x440ad889 + (v3 & -256 | (int64_t)(v4 & (char)a4))); // 0x35ea35
    *v5 = *v5 + 90;
    return (256 * v1 ^ a6) & 0xff00 | a6 & 0xffff00ff;
}

// Address range: 0x35ea4c - 0x35ea75
int64_t function_35ea4c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x35ea4c
    int64_t v1; // 0x35ea4c
    uint64_t v2 = v1;
    int32_t v3 = v1; // 0x35ea52
    *(int32_t *)a1 = v3;
    bool v4; // 0x35ea4c
    uint32_t result = *(int32_t *)((v4 ? -4 : 4) + a1) + v3 ^ 0x18633ab0; // 0x35ea55
    if (result != 0) {
        // 0x35ea74
        return result;
    }
    // 0x35ea5c
    *(char *)0x372e6a63 = *(char *)0x372e6a63 + (char)(v2 / 256);
    int32_t result2 = __asm_in_135(-125); // 0x35ea62
    __asm_out_136(-77, result2);
    *(char *)v2 = (char)v2 + (char)(a3 / 256);
    return result2;
}

// Address range: 0x35ea77 - 0x35eb19
int64_t function_35ea77(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x35ea77
    int64_t v1; // 0x35ea77
    uint64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)v1;
    bool v3; // 0x35ea77
    int64_t v4 = v3 ? -4 : 4; // 0x35ea77
    int64_t v5 = v4 + a1; // 0x35ea77
    int64_t v6 = v4 + a2; // 0x35ea77
    int64_t result; // 0x35ea77
    int64_t v7 = result;
    *(char *)v7 = *(char *)&result + (char)v7;
    int64_t v8; // 0x35ea77
    *(char *)a4 = *(char *)&v8 + (char)a4;
    int64_t v9 = result & 0xfec2ffff; // 0x35ea7c
    int64_t v10 = v9 | 0x13d0000; // 0x35ea7c
    result = v10;
    unsigned char v11 = *(char *)(v2 + 0x4aa390c7) & (char)v2; // 0x35ea81
    if (a4 == 1 || v11 == 0) {
        char * v12 = (char *)((v9 ^ 0x5f073a8b) - 0x60fec23e); // 0x35ea94
        *v12 = *v12 + (char)(v2 / 256);
        return function_ffffffffed80984f(0x4000 * (int32_t)v5, v6);
    }
    uint32_t v13 = (int32_t)v10 - *(int32_t *)v10; // 0x35eac3
    result = v13;
    *(int16_t *)a3 = (int16_t)v1;
    int64_t v14 = result;
    if (v13 < 0x3ad64c01) {
        // 0x35eace
        return (v14 + 7) % 256 | v14 & -256;
    }
    // 0x35eb03
    *(int32_t *)0xd31b43aa8068001 = (int32_t)v14;
    int32_t * v15 = (int32_t *)((v2 & -256 | (int64_t)v11) + 0x3da35e00); // 0x35eb0e
    *v15 = *v15 & (int32_t)v6;
    int32_t * v16 = (int32_t *)result; // 0x35eb14
    int32_t v17 = *v16 + (int32_t)result; // 0x35eb14
    *v16 = v17;
    if (v17 != 0) {
        // 0x35eb19
        return result;
    }
    int32_t * v18 = (int32_t *)v5; // 0x35eaac
    *v18 = *v18 + (int32_t)v5;
    return function_4d1d1e2();
}

// Address range: 0x35ec3d - 0x35ec41
int64_t function_35ec3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x35ec3d
    int64_t result; // 0x35ec3d
    return result;
}

// Address range: 0x35ecea - 0x35eceb
int64_t function_35ecea(int64_t a1) {
    // 0x35ecea
    int64_t result; // 0x35ecea
    return result;
}

// Address range: 0x35ed0a - 0x35ed80
int64_t function_35ed0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    bool v2; // 0x35ed0a
    if (!v2) {
        // 0x35ed0c
        int64_t result; // 0x35ed0a
        return result;
    }
    // 0x35ed34
    int64_t v3; // 0x35ed0a
    int64_t v4 = v3 & -256; // 0x35ed34
    char * v5 = (char *)(v3 + 0x7f013d3f); // 0x35ed36
    unsigned char v6 = *v5; // 0x35ed36
    char v7 = v6 + (char)v3; // 0x35ed36
    *v5 = v7;
    unsigned char v8 = *(char *)((v3 + 50 + (int64_t)v2) % 256 + v3); // 0x35ed3c
    int64_t result2 = v4 | (int64_t)v8; // 0x35ed3c
    if (v7 >= 1) {
        // 0x35ed0c
        return result2;
    }
    char * v9 = (char *)(a3 - 0x604e8fe9 + 4 * a3); // 0x35ed61
    *v9 = *v9 / 2 | 128 * (char)(v7 < v6);
    char * v10 = (char *)(a4 - 70); // 0x35ed68
    *v10 = *v10 + (char)(v3 / 256);
    int32_t v11 = (int32_t)result2 < 0x50043f01 ? 0x757c8068 : 0x757c8067; // 0x35ed70
    *(int32_t *)v1 = *(int32_t *)&v1 + v11;
    return v4 | (int64_t)(v8 - 48);
}

// Address range: 0x35ed83 - 0x35ee0a
int64_t function_35ed83(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a1 + 0x64137384); // 0x35ed83
    *v1 = *v1 + (int32_t)a2;
    char v2 = *(char *)(a1 - 0x5afec2b9); // 0x35ed95
    int64_t v3 = 256 * (int64_t)(v2 + (char)(a4 / 256)) | a4 & -0xff01; // 0x35ed95
    int64_t result; // 0x35ed83
    int64_t v4 = result;
    *(char *)v4 = *(char *)&result + (char)v4;
    char * v5 = (char *)(result + v3); // 0x35ed9d
    *v5 = *v5 + (char)a3;
    int64_t v6; // 0x35ed83
    *(char *)-0x1be81058 = *(char *)-0x1be81058 + (char)(v6 / 256);
    int32_t * v7 = (int32_t *)(v6 + 0x1ba5e266); // 0x35eda7
    *v7 = *v7 + (int32_t)v3;
    return result;
}

// Address range: 0x35ee11 - 0x35ee14
int64_t function_35ee11(int64_t a1, int64_t a2, int64_t a3) {
    // 0x35ee11
    return a3 & 0xffffffff;
}

// Address range: 0x35ee8c - 0x35ee91
int64_t function_35ee8c(void) {
    // 0x35ee8c
    return function_573d1793();
}

// Address range: 0x35eee8 - 0x35ef00
int64_t function_35eee8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x35eee8
    int64_t result; // 0x35eee8
    *(char *)0x80615f6 = *(char *)0x80615f6 + (char)result;
    char * v1 = (char *)(2 * result + a3); // 0x35eef5
    *v1 = *v1 | (char)(a4 / 256);
    char * v2 = (char *)(result + 55); // 0x35eef8
    *v2 = *v2 + (char)a3;
    int32_t * v3 = (int32_t *)(result + 5); // 0x35eefb
    *v3 = 128 * *v3;
    return result;
}

// Address range: 0x35ef00 - 0x35ef25
int64_t function_35ef00(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x35ef00
    int64_t v1; // 0x35ef00
    uint64_t v2 = v1;
    int64_t v3 = a4;
    char v4 = *(char *)(v1 + 0x27737e09); // 0x35ef00
    *(char *)a1 = (char)v1 + (char)(a3 / 256);
    int32_t v5 = *(int32_t *)(8 * a2 + 76 + v1); // 0x35ef0f
    unsigned char v6 = (char)a4 % 32; // 0x35ef13
    if (v6 != 0) {
        unsigned char v7 = *(char *)&v3; // 0x35ef13
        *(char *)v3 = v7 >> 8 - v6 | v7 << v6;
    }
    uint32_t result = v5 + (int32_t)(256 * (int64_t)(v4 | (char)(v2 / 256)) | v2 & 0xffff00ff); // 0x35ef0f
    int64_t v8; // 0x35ef00
    unsigned char v9 = *(char *)&v8; // 0x35ef15
    int32_t * v10 = (int32_t *)(v1 - 0xe918aeb); // 0x35ef17
    *v10 = *v10 - (int32_t)v1 + (int32_t)(v9 > (char)(result / 256));
    *(char *)-0x2b21b9db = *(char *)-0x2b21b9db - 14;
    return result;
}

// Address range: 0x35ef3f - 0x35ef40
int64_t function_35ef3f(void) {
    // 0x35ef3f
    int64_t result; // 0x35ef3f
    return result;
}

// Address range: 0x35efa1 - 0x35efa5
int64_t function_35efa1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x35efa1
    int64_t v1; // 0x35efa1
    *(int32_t *)a4 = 2 * (int32_t)v1;
    return function_35ef3f();
}

// Address range: 0x35f064 - 0x35f072
int64_t function_35f064(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x35f064
    int64_t v1; // 0x35f064
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x35f064
    int64_t v3 = (v2 ? -4 : 4) + a1; // 0x35f064
    int32_t * v4 = (int32_t *)(v1 + 0x64009900); // 0x35f067
    *v4 = *v4 + (int32_t)v3;
    return function_ffffffff9c25fada(v3);
}

// Address range: 0x35f073 - 0x35f079
int64_t function_35f073(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x35f073
    int64_t result; // 0x35f073
    return result;
}

// Address range: 0x35f0ca - 0x35f0ce
int64_t function_35f0ca(int64_t a1) {
    // 0x35f0ca
    int64_t result; // 0x35f0ca
    return result;
}

// Address range: 0x35f146 - 0x35f179
int64_t function_35f146(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x35f146
    int64_t v1; // 0x35f146
    char * v2 = (char *)(v1 - 43); // 0x35f146
    *v2 = *v2 + (char)a4;
    unknown_32f0c94f();
    unknown_3d37d95e();
    int64_t result = unknown_173bf68(); // 0x35f171
    float80_t v3; // 0x35f146
    *(int64_t *)(a2 - 125) = (int64_t)v3;
    return result;
}

// Address range: 0x35f1bd - 0x35f1c7
int64_t function_35f1bd(void) {
    // 0x35f1bd
    return function_bcf5df();
}

// Address range: 0x35f1d4 - 0x35f1d5
int64_t function_35f1d4(void) {
    // 0x35f1d4
    int64_t result; // 0x35f1d4
    return result;
}

// Address range: 0x35f21c - 0x35f225
int64_t function_35f21c(int64_t a1) {
    // 0x35f21c
    int64_t result; // 0x35f21c
    bool v1; // 0x35f21c
    if (!v1) {
        result = function_35f1d4();
    }
    // 0x35f21e
    int64_t v2; // 0x35f21c
    char * v3 = (char *)(v2 - 0x3645d7e4); // 0x35f21e
    *v3 = (char)v1 + (char)v2 + *v3;
    return result;
}

// Address range: 0x35f2de - 0x35f2fb
int64_t function_35f2de(int64_t a1) {
    int64_t result = unknown_2364b6e4(); // 0x35f2de
    int32_t v1 = (int32_t)result + (int32_t)a1; // 0x35f2e3
    if (llvm_ctpop_i8((char)v1) % 2 == 0) {
        // 0x35f35b
        return result;
    }
    // 0x35f2e9
    unknown_2b41d7ef(v1);
    return function_ffffffffc66da048();
}

// Address range: 0x35f32d - 0x35f341
int64_t function_35f32d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int16_t * v1 = (int16_t *)(a3 - 0x3721aa80); // 0x35f33a
    *v1 = *v1 | 488;
    int64_t result; // 0x35f32d
    return result;
}

// Address range: 0x35f345 - 0x35f348
int64_t function_35f345(int64_t a1) {
    // 0x35f345
    int64_t result; // 0x35f345
    return result;
}

// Address range: 0x35f381 - 0x35f387
int64_t function_35f381(int64_t a1) {
    // 0x35f381
    return unknown_fffffffffd459b8a(a1);
}

// Address range: 0x35f38a - 0x35f38b
int64_t function_35f38a(int64_t a1) {
    // 0x35f38a
    int64_t result; // 0x35f38a
    return result;
}

// Address range: 0x35f3a5 - 0x35f3a7
int64_t function_35f3a5(void) {
    // 0x35f3a5
    int64_t result; // 0x35f3a5
    return result;
}

// Address range: 0x35f3bd - 0x35f3c0
int64_t function_35f3bd(void) {
    // 0x35f3bd
    int64_t result; // 0x35f3bd
    return result;
}

// Address range: 0x35f43f - 0x35f440
int64_t function_35f43f(void) {
    // 0x35f43f
    int64_t result; // 0x35f43f
    return result;
}

// Address range: 0x35f468 - 0x35f469
int64_t function_35f468(void) {
    // 0x35f468
    int64_t result; // 0x35f468
    return result;
}

// Address range: 0x35f492 - 0x35f494
int64_t function_35f492(void) {
    // 0x35f492
    return function_35f43f();
}

// Address range: 0x35f4bb - 0x35f4c4
int64_t function_35f4bb(int64_t a1) {
    // 0x35f4bb
    return function_35f468();
}

// Address range: 0x35f4d8 - 0x35f4db
int64_t function_35f4d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x35f4d8
    int64_t v1; // 0x35f4d8
    return v1 | 256 * a3 & 0xff00;
}

// Address range: 0x35f4f4 - 0x35f500
int64_t function_35f4f4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x35f4f4
    int64_t v1; // 0x35f4f4
    int32_t * v2 = (int32_t *)(2 * a1 + 0x265505b0 + v1); // 0x35f4f4
    *v2 = *v2 + (int32_t)a3;
    return function_ffffffffe1373200();
}

// Address range: 0x35f501 - 0x35f506
int64_t function_35f501(void) {
    // 0x35f501
    return function_14d18c34();
}

// Address range: 0x35f532 - 0x35f540
int64_t function_35f532(int64_t a1, int64_t a2, int64_t a3) {
    // 0x35f532
    int64_t v1; // 0x35f532
    *(int32_t *)a1 = (int32_t)v1;
    int64_t result; // 0x35f532
    int64_t v2 = result;
    *(char *)v2 = *(char *)&result + (char)v2;
    char * v3 = (char *)(2 * result + 0x1020000); // 0x35f535
    *v3 = *v3 + (char)(v1 / 256);
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x35f55f - 0x35f564
int64_t function_35f55f(void) {
    // 0x35f55f
    return function_1829f6bc();
}

// Address range: 0x3a9474 - 0x3a947f
int64_t function_3a9474(int64_t a1, int64_t a2, int64_t a3) {
    char v1 = *(char *)0x6b2d827b; // 0x3a9474
    int64_t result; // 0x3a9474
    *(char *)0x6b2d827b = v1 + (char)((uint64_t)result / 256);
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x3a947f - 0x3a9484
int64_t function_3a947f(int64_t a1, int64_t a2) {
    // 0x3a947f
    int64_t result; // 0x3a947f
    return result;
}

// Address range: 0x3a949d - 0x3a94a0
int64_t function_3a949d(void) {
    // 0x3a949d
    int64_t result; // 0x3a949d
    return result;
}

// Address range: 0x3a94af - 0x3a94b0
int64_t function_3a94af(int64_t a1) {
    // 0x3a94af
    int64_t result; // 0x3a94af
    return result;
}

// Address range: 0x3a94cc - 0x3a94cd
int64_t function_3a94cc(int64_t a1) {
    // 0x3a94cc
    int64_t result; // 0x3a94cc
    return result;
}

// Address range: 0x3a94d8 - 0x3a94d9
int64_t function_3a94d8(void) {
    // 0x3a94d8
    int64_t result; // 0x3a94d8
    return result;
}

// Address range: 0x3a94ff - 0x3a9508
int64_t function_3a94ff(void) {
    // 0x3a94ff
    int64_t v1; // 0x3a94ff
    bool v2; // 0x3a94ff
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x3a9513 - 0x3a951b
int64_t function_3a9513(int64_t a1, int64_t a2) {
    // 0x3a9513
    return function_f69418();
}

// Address range: 0x3a951d - 0x3a951f
int64_t function_3a951d(void) {
    // 0x3a951d
    return function_3a94d8();
}

// Address range: 0x3a95e4 - 0x3a95e7
int64_t function_3a95e4(void) {
    // 0x3a95e4
    int64_t result; // 0x3a95e4
    return result;
}

// Address range: 0x3a9658 - 0x3a9680
int64_t function_3a9658(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a9658
    *(char *)(a3 + 108) = 11;
    int64_t v1; // 0x3a9658
    *(int32_t *)a4 = *(int32_t *)&v1 + 0x1fdfa6d6;
    int64_t v2; // 0x3a9658
    *(char *)0x7096c374 = *(char *)0x7096c374 + (char)(v2 / 256);
    int32_t * v3 = (int32_t *)(8 * a1 + 72 + v2); // 0x3a9673
    *v3 = *v3 ^ (int32_t)a3;
    int64_t result = v2 & -245; // 0x3a967a
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x3a968e - 0x3a9698
int64_t function_3a968e(void) {
    // 0x3a968e
    return function_ffffffff9a41d12b();
}

// Address range: 0x3a96b1 - 0x3a96b3
int64_t function_3a96b1(void) {
    // 0x3a96b1
    int64_t result; // 0x3a96b1
    return result;
}

// Address range: 0x3a96bb - 0x3a96cb
int64_t function_3a96bb(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x3a96bb
    int64_t result; // 0x3a96bb
    char * v1 = (char *)(result - 114 + 4 * result); // 0x3a96bb
    bool v2; // 0x3a96bb
    *v1 = *v1 + (char)(a3 / 256) + (char)v2;
    return result;
}

// Address range: 0x3a96f3 - 0x3a9700
int64_t function_3a96f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 0x5eaf9fd3); // 0x3a96f5
    *v1 = *v1 + (char)a3;
    return function_ffffffffd6df4427((int32_t)a3 + (int32_t)a1);
}

// Address range: 0x3a970f - 0x3a9725
int64_t function_3a970f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a970f
    int64_t v1; // 0x3a970f
    __asm_out((int16_t)a3, (int32_t)v1);
    return v1 & -256 | (int64_t)*(char *)0x5a4add2c2f42ea;
}

// Address range: 0x3a9781 - 0x3a978e
int64_t function_3a9781(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 127); // 0x3a9781
    int64_t v2; // 0x3a9781
    *v1 = *v1 + (int32_t)v2;
    __asm_out_137(17, (char)v2);
    int64_t v3; // 0x3a9781
    return (int64_t)(*(int32_t *)&v3 | (int32_t)v2);
}

// Address range: 0x3a9792 - 0x3a979e
int64_t function_3a9792(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a9792
    int64_t v1; // 0x3a9792
    *(char *)a1 = (char)(v1 / 256) + (char)v1;
    return (int64_t)*(int32_t *)(a2 + 0x7696013d + 2 * v1);
}

// Address range: 0x3a97b9 - 0x3a97c6
int64_t function_3a97b9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a97b9
    int64_t v1; // 0x3a97b9
    char * v2 = (char *)(v1 - 24); // 0x3a97bc
    *v2 = 2 * *v2;
    return function_fffffffffe936bce();
}

// Address range: 0x3a97e8 - 0x3a97e9
int64_t function_3a97e8(void) {
    // 0x3a97e8
    int64_t result; // 0x3a97e8
    return result;
}

// Address range: 0x3a980f - 0x3a9812
int64_t function_3a980f(void) {
    // 0x3a980f
    int64_t result; // 0x3a980f
    return result;
}

// Address range: 0x3a9824 - 0x3a9827
int64_t function_3a9824(void) {
    // 0x3a9824
    int64_t result; // 0x3a9824
    return result;
}

// Address range: 0x3a9827 - 0x3a982f
int64_t function_3a9827(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3a9827
    int64_t v1; // 0x3a9827
    char * v2 = (char *)(a1 + 1 + v1); // 0x3a9829
    *v2 = *v2 - (char)(a3 / 256);
    return function_3a983c(a1, a2, a3);
}

// Address range: 0x3a982f - 0x3a983c
int64_t function_3a982f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    char * v1 = (char *)(a4 - 127); // 0x3a9839
    *v1 = -*v1;
    return result;
}

// Address range: 0x3a983c - 0x3a9846
int64_t function_3a983c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a983c
    *(int32_t *)0x647346 = *(int32_t *)0x647346 | (int32_t)a1;
    int64_t result; // 0x3a983c
    return result;
}

// Address range: 0x3a9863 - 0x3a9864
int64_t function_3a9863(int64_t a1) {
    // 0x3a9863
    int64_t result; // 0x3a9863
    return result;
}

// Address range: 0x3a988e - 0x3a988f
int64_t function_3a988e(void) {
    // 0x3a988e
    int64_t result; // 0x3a988e
    return result;
}

// Address range: 0x3a9891 - 0x3a9892
int64_t function_3a9891(void) {
    // 0x3a9891
    int64_t result; // 0x3a9891
    return result;
}

// Address range: 0x3a98c2 - 0x3a9909
int64_t function_3a98c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x3a98c2
    bool v3; // 0x3a98c2
    if (v3) {
        char * v4 = (char *)(4 * v2 - 0x7cd6fd8e + v2); // 0x3a98c5
        *v4 = *v4 | (char)a3;
        return v2 & -256 | (int64_t)(*(char *)&v1 + (char)(v2 / 256));
    }
    int32_t * v5 = (int32_t *)(a3 + 0x56df600b); // 0x3a98d2
    *v5 = *v5 + (int32_t)v2;
    int64_t v6 = v2 + 0x2bae80f0; // 0x3a98de
    int64_t v7 = (int64_t)(*(char *)(a4 + 0x13d0006) | (char)v2); // 0x3a98e3
    int64_t v8 = v2 & -256 | v7; // 0x3a98e3
    int32_t * v9 = (int32_t *)(v8 - 56); // 0x3a98ee
    uint32_t v10 = *v9; // 0x3a98ee
    uint32_t v11 = v10 + (int32_t)a3; // 0x3a98ee
    *v9 = v11;
    int32_t v12 = *(int32_t *)(v6 & 0xffffffff); // 0x3a98f1
    uint32_t v13 = v12 + (int32_t)v6 + (int32_t)(v11 < v10); // 0x3a98f1
    int64_t v14 = a4 - 1; // 0x3a98f3
    int64_t result = v13; // 0x3a98f3
    if (v14 != 0 && v13 != 0) {
        result = function_3a988e();
    }
    // 0x3a98f5
    if (v14 == 1 || v13 == 0) {
        // 0x3a98f9
        return result;
    }
    // 0x3a98ff
    *(char *)v8 = -1;
    unsigned char v15 = *(char *)(result % 256 + v8); // 0x3a9906
    return result & -0x10000 | 256 * v7 | (int64_t)v15;
}

// Address range: 0x3a9930 - 0x3a9931
int64_t function_3a9930(void) {
    // 0x3a9930
    int64_t result; // 0x3a9930
    return result;
}

// Address range: 0x3a9931 - 0x3a9934
int64_t function_3a9931(void) {
    // 0x3a9931
    int64_t result; // 0x3a9931
    return result;
}

// Address range: 0x3a99a0 - 0x3a99ae
int64_t function_3a99a0(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x3a99a0
    int64_t v1; // 0x3a99a0
    if (llvm_ctpop_i8((char)v1 & -64) % 2 == 0) {
        function_3a9930();
    }
    // 0x3a99a7
    *(char *)a3 = (char)(a3 / 256) + (char)a3;
    return function_ffffffffb3799b96();
}

// Address range: 0x3a99c2 - 0x3a99cb
int64_t function_3a99c2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a99c2
    int64_t result; // 0x3a99c2
    return result;
}

// Address range: 0x3a9a03 - 0x3a9a29
int64_t function_3a9a03(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a9a03
    int64_t v1; // 0x3a9a03
    uint64_t v2 = v1;
    unsigned char v3 = (char)v1;
    char * v4 = (char *)a3; // 0x3a9a07
    *v4 = v3 / 2 | 128 * v3;
    int64_t v5 = v2 + a1; // 0x3a9a0d
    int64_t v6; // 0x3a9a03
    *v4 = *(char *)&v6 & (char)(v2 / 256);
    float80_t v7; // 0x3a9a03
    *(int32_t *)(v5 & 0xffffffff) = (int32_t)v7;
    uint32_t v8 = *(int32_t *)0x5f799b842801e8; // 0x3a9a18
    char * v9 = (char *)(int64_t)v8; // 0x3a9a22
    *v9 = *v9 | (char)v8;
    return function_ffffffffa4f4c6f9((int32_t)v5);
}

// Address range: 0x3a9a33 - 0x3a9a3f
int64_t function_3a9a33(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 42); // 0x3a9a33
    int64_t v2; // 0x3a9a33
    bool v3; // 0x3a9a33
    *v1 = (int32_t)v3 - (int32_t)v2 + *v1;
    return unknown_303fda3f(a1, a2, a3, a4, a5);
}

// Address range: 0x3a9a55 - 0x3a9a66
int64_t function_3a9a55(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a9a55
    int64_t v1; // 0x3a9a55
    __asm_out_133((int16_t)a3, (char)v1);
    return (int64_t)(*(int32_t *)-0x197cf3f45bddfe18 | 0xec78d81);
}

// Address range: 0x3a9a75 - 0x3a9a76
int64_t function_3a9a75(void) {
    // 0x3a9a75
    int64_t result; // 0x3a9a75
    return result;
}

// Address range: 0x3a9a8e - 0x3a9ae5
int64_t function_3a9a8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a9a8e
    int64_t v1; // 0x3a9a8e
    bool v2; // 0x3a9a8e
    if (!v2) {
        v1 = function_3a9a75();
    }
    int64_t v3 = v1;
    uint32_t v4 = (int32_t)a4 % 32; // 0x3a9a92
    int64_t v5; // 0x3a9a8e
    int32_t * v6 = (int32_t *)(8 * v5 + 0x1e66612); // 0x3a9a94
    uint32_t v7 = *v6; // 0x3a9a94
    uint32_t v8 = v7 + (int32_t)v5; // 0x3a9a94
    *v6 = v8;
    int64_t v9 = v8 < v7 ? 10 : 9; // 0x3a9a9c
    uint64_t v10 = (v4 == 0 ? v3 : (int64_t)((int32_t)v3 >> v4)) - v9; // 0x3a9a9c
    unsigned char v11 = *(char *)((v10 & 0xffffffff) + 5); // 0x3a9aa3
    int64_t v12; // 0x3a9a8e
    char * v13 = (char *)(v12 - 0x19f7cc14); // 0x3a9aa6
    *v13 = *v13 - (char)v12;
    int32_t v14 = *(int32_t *)&v12; // 0x3a9ab2
    *(int32_t *)v12 = v14 + (int32_t)(v10 % 256 * (int64_t)v11 | v10 & 0xffff0000);
    __asm_iretd();
    unknown_ffffffffe902bec4();
    *(int32_t *)0x106a87ca = *(int32_t *)0x106a87ca + (int32_t)a1;
    unknown_7f9aaecf();
    __asm_in(-61);
    return __asm_int1();
}

// Address range: 0x3a9aec - 0x3a9af1
int64_t function_3a9aec(void) {
    // 0x3a9aec
    return function_7165c40();
}

// Address range: 0x3a9b33 - 0x3a9b34
int64_t function_3a9b33(void) {
    // 0x3a9b33
    int64_t result; // 0x3a9b33
    return result;
}

// Address range: 0x3a9b3a - 0x3a9b3b
int64_t function_3a9b3a(void) {
    // 0x3a9b3a
    int64_t result; // 0x3a9b3a
    return result;
}

// Address range: 0x3a9b49 - 0x3a9b4b
int64_t function_3a9b49(void) {
    // 0x3a9b49
    return function_3a9b33();
}

// Address range: 0x3a9b4d - 0x3a9b4e
int64_t function_3a9b4d(void) {
    // 0x3a9b4d
    int64_t result; // 0x3a9b4d
    return result;
}

// Address range: 0x3a9b63 - 0x3a9b83
int64_t function_3a9b63(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a9b63
    int64_t v1; // 0x3a9b63
    bool v2; // 0x3a9b63
    if (v2) {
        v1 = function_3a9b4d();
    }
    int64_t v3 = v1;
    *(int32_t *)v3 = 2 * (int32_t)v3;
    __readgsbyte(a4 + 112);
    return function_3a9b3a();
}

// Address range: 0x3a9bb0 - 0x3a9bb3
int64_t function_3a9bb0(int64_t a1) {
    // 0x3a9bb0
    int64_t result; // 0x3a9bb0
    return result;
}

// Address range: 0x3a9c4c - 0x3a9c6a
int64_t function_3a9c4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffffc46b7f52(); // 0x3a9c4c
    bool v1; // 0x3a9c4c
    if (a4 != 1 == v1) {
        // 0x3a9ca7
        return result;
    }
    int64_t v2 = 0xce367f08 * result & 0xfffffff8; // 0x3a9c55
    int64_t result2 = unknown_a410061(v2) & -110; // 0x3a9c60
    *(char *)v2 = (char)result2;
    return result2;
}

// Address range: 0x3a9c6a - 0x3a9c72
int64_t function_3a9c6a(int64_t a1) {
    // 0x3a9c6a
    unknown_3a453c70(a1);
    return __asm_int3();
}

// Address range: 0x3a9e74 - 0x3a9e81
int64_t function_3a9e74(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a9e74
    int64_t v1; // 0x3a9e74
    char * v2 = (char *)(v1 - 18); // 0x3a9e79
    *v2 = *v2 + (char)a3;
    return unknown_ffffffff89452682();
}

// Address range: 0x3a9e89 - 0x3a9e8a
int64_t function_3a9e89(void) {
    // 0x3a9e89
    int64_t result; // 0x3a9e89
    return result;
}

// Address range: 0x3a9eba - 0x3a9ebb
int64_t function_3a9eba(void) {
    // 0x3a9eba
    int64_t result; // 0x3a9eba
    return result;
}

// Address range: 0x3a9eda - 0x3a9eee
int64_t function_3a9eda(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a9eda
    int64_t v1; // 0x3a9eda
    __asm_out_137(-24, (char)v1);
    int32_t * v2 = (int32_t *)(a2 - 0x5f9d1934); // 0x3a9ede
    *v2 = *v2 + (int32_t)v1;
    return 0x8a00ab21;
}

// Address range: 0x3a9f21 - 0x3a9f22
int64_t function_3a9f21(void) {
    // 0x3a9f21
    int64_t result; // 0x3a9f21
    return result;
}

// Address range: 0x3a9f42 - 0x3a9f43
int64_t function_3a9f42(void) {
    // 0x3a9f42
    int64_t result; // 0x3a9f42
    return result;
}

// Address range: 0x3a9f90 - 0x3a9f91
int64_t function_3a9f90(void) {
    // 0x3a9f90
    int64_t result; // 0x3a9f90
    return result;
}

// Address range: 0x3a9fa2 - 0x3a9fb5
int64_t function_3a9fa2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a9fa2
    bool v1; // 0x3a9fa2
    bool v2 = v1;
    unknown_641a7ab();
    uint32_t v3 = (int32_t)a4; // 0x3a9faa
    int64_t v4; // 0x3a9fa2
    uint32_t v5 = (int32_t)v2 + (int32_t)v4; // 0x3a9faa
    if (v2 ? v5 != -1 || (int32_t)v2 + v3 - v5 > v3 : v5 > v3) {
        function_3a9f42();
    }
    // 0x3a9faf
    return unknown_373753b5();
}

// Address range: 0x3a9fb5 - 0x3a9fea
int64_t function_3a9fb5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 + 0x3dcfd4cc); // 0x3a9fbd
    int64_t v2; // 0x3a9fb5
    *v1 = *v1 + (int32_t)v2;
    __asm_int(16);
    int32_t v3 = *(int32_t *)(2 * a1 + 23 + a5); // 0x3a9fcc
    char * v4 = (char *)(int64_t)(v3 | 2 * (int32_t)v2 + (int32_t)v2); // 0x3a9fd7
    int64_t v5; // 0x3a9fb5
    *v4 = *v4 | (char)(int64_t)&v5;
    unknown_2664a7df();
    *(char *)0x345c5be5 = *(char *)0x345c5be5 + (char)(v2 / 256);
    return function_ffffffffaa47eb1a();
}

// Address range: 0x3a9feb - 0x3a9ff6
int64_t function_3a9feb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3a9feb
    int64_t v1; // 0x3a9feb
    unsigned char v2 = (char)v1;
    unsigned char v3 = v2 + (char)(a4 / 256); // 0x3a9feb
    bool v4; // 0x3a9feb
    char v5 = v3 + (char)v4; // 0x3a9feb
    *(char *)v1 = v5;
    int64_t v6; // 0x3a9feb
    char v7; // 0x3a9feb
    int64_t v8; // 0x3a9feb
    if (v5 < 1) {
        int64_t v9 = function_3a9f90(); // 0x3a9fed
        v8 = v9;
        v6 = v9;
        v7 = v9;
    } else {
        // 0x3a9feb
        v6 = v8;
        v7 = *(char *)&v8;
    }
    bool v10 = v4 ? v5 <= v2 : v3 < v2; // 0x3a9feb
    *(char *)v6 = (char)v10 + (char)a4 + v7;
    return __asm_int3();
}

// Address range: 0x3a9ffc - 0x3aa001
int64_t function_3a9ffc(void) {
    // 0x3a9ffc
    return function_6c0260ad();
}
