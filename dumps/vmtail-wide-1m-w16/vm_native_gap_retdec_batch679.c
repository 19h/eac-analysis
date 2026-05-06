/*
 * Targeted RetDec C for native executable gap queue batch 679.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3222bb-0x3224bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3224bb-0x3226bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3226bb-0x3228bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x413542-0x413742 rank=- name=- kind=- bytes=- uncovered=-
 *   0x413742-0x413942 rank=- name=- kind=- bytes=- uncovered=-
 *   0x413942-0x413b42 rank=- name=- kind=- bytes=- uncovered=-
 *   0x413b42-0x413d42 rank=- name=- kind=- bytes=- uncovered=-
 *   0x413d42-0x413f42 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_15caf68();
int64_t function_21e47589();
int64_t function_3222bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3222d6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_322349(void);
int64_t function_322368(int64_t a1);
int64_t function_32237b(void);
int64_t function_3223b3(void);
int64_t function_3223bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_322475(void);
int64_t function_32248f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_322491(int64_t a1);
int64_t function_3224fa(int64_t a1);
int64_t function_322539(void);
int64_t function_3225e9(void);
int64_t function_32263d(void);
int64_t function_32263f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_322716(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_322740(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32274d(void);
int64_t function_3227bd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_32281b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_322838(int64_t a1);
int64_t function_40b1e021();
int64_t function_413542(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_413566(void);
int64_t function_41358b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4135ff(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_4136a5(void);
int64_t function_4136a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_4136e5(int64_t a1);
int64_t function_4136f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4136f9(void);
int64_t function_413700(void);
int64_t function_41370e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_413714(int64_t a1, int64_t a2);
int64_t function_41379d(void);
int64_t function_4137b4(void);
int64_t function_4137d7(void);
int64_t function_413808(void);
int64_t function_413824(int64_t a1);
int64_t function_41386d(void);
int64_t function_413888(void);
int64_t function_4138a0(void);
int64_t function_4138a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4138b2(int64_t a1);
int64_t function_4138b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4138c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_413901(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41391a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_413969(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4139fa(void);
int64_t function_413a38(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_413aa1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_413ae2(void);
int64_t function_413b05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_413c8c(void);
int64_t function_413ca8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_413d00(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_413e10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_74340ca4();
int64_t function_7897de();
int64_t function_c6eebdd();
int64_t function_ffffffff94771abb();
int64_t function_ffffffffc7fe5831();
int64_t function_ffffffffd4341082();
int64_t function_ffffffffed936aa5();
int64_t unknown_28c49603();
int64_t unknown_4fcd9ccb();
int64_t unknown_61bcbef();
int64_t unknown_ffffffffb42b4222();

// Address range: 0x3222bb - 0x3222d4
int64_t function_3222bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x454d0202); // 0x3222bb
    int64_t v2; // 0x3222bb
    *v1 = *v1 + (int32_t)v2;
    float80_t v3; // 0x3222bb
    *(float80_t *)(a2 - 4 + 8 * a3) = __asm_fbstp(v3);
    return unknown_4fcd9ccb() & -256 | (int64_t)__asm_in((int16_t)a3);
}

// Address range: 0x3222d6 - 0x3222fa
int64_t function_3222d6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3222d6
    int64_t v1; // 0x3222d6
    char * v2 = (char *)(v1 + 0xbc52c6a); // 0x3222d6
    *v2 = *v2 | (char)v1;
    int64_t v3 = v1 ^ a4 / 256 % 256; // 0x3222dc
    uint64_t v4 = v1 + 0x2e0570e7; // 0x3222e0
    char * v5 = (char *)((v4 & 0xffffffff) - 0x610ffe18); // 0x3222e6
    *v5 = *v5 & (char)(v4 / 256);
    __asm_out(17, *(int32_t *)v3 + (int32_t)v3);
    return function_c6eebdd();
}

// Address range: 0x322349 - 0x32234a
int64_t function_322349(void) {
    // 0x322349
    int64_t result; // 0x322349
    return result;
}

// Address range: 0x322368 - 0x32236b
int64_t function_322368(int64_t a1) {
    // 0x322368
    int64_t result; // 0x322368
    return result;
}

// Address range: 0x32237b - 0x322385
int64_t function_32237b(void) {
    // 0x32237b
    return (int64_t)*(int32_t *)-0x4bff76f6e4214306;
}

// Address range: 0x3223b3 - 0x3223b8
int64_t function_3223b3(void) {
    // 0x3223b3
    return function_74340ca4();
}

// Address range: 0x3223bc - 0x3223d1
int64_t function_3223bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 0x1ec59e); // 0x3223c5
    *v1 = *v1 + (int32_t)a1;
    int64_t v2; // 0x3223bc
    char v3 = v2;
    unsigned char v4 = v3 & -24; // 0x3223cb
    unsigned char v5 = *(char *)(4 * v2 + a3); // 0x3223cb
    unsigned char v6 = v5 + v4; // 0x3223cb
    unsigned char v7 = llvm_ctpop_i8(v6); // 0x3223cb
    int64_t v8; // 0x3223bc
    *(int32_t *)a1 = *(int32_t *)&v8;
    return v2 & -0x10000 | (int64_t)v6 | 256 * (64 * (int64_t)(v6 == 0) | (int64_t)(v6 < v4) | 128 * (int64_t)(v6 < 0) | 16 * (int64_t)(v5 % 16 + (v3 & 8) > 15) | 4 * (int64_t)(v7 % 2 == 0)) | 512;
}

// Address range: 0x322475 - 0x322479
int64_t function_322475(void) {
    // 0x322475
    int64_t v1; // 0x322475
    uint64_t v2 = v1;
    *(char *)v2 = (char)(v2 / 256) + (char)v2;
    return function_322491(v1);
}

// Address range: 0x32248f - 0x322491
int64_t function_32248f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32248f
    int64_t result; // 0x32248f
    return result;
}

// Address range: 0x322491 - 0x322499
int64_t function_322491(int64_t a1) {
    // 0x322491
    int64_t result; // 0x322491
    return result;
}

// Address range: 0x3224fa - 0x3224fd
int64_t function_3224fa(int64_t a1) {
    // 0x3224fa
    int64_t result; // 0x3224fa
    return result;
}

// Address range: 0x322539 - 0x32253c
int64_t function_322539(void) {
    // 0x322539
    int64_t result; // 0x322539
    return result;
}

// Address range: 0x3225e9 - 0x3225fa
int64_t function_3225e9(void) {
    // 0x3225e9
    unknown_61bcbef();
    return function_15caf68();
}

// Address range: 0x32263d - 0x32263e
int64_t function_32263d(void) {
    // 0x32263d
    int64_t result; // 0x32263d
    return result;
}

// Address range: 0x32263f - 0x322646
int64_t function_32263f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x32263f
    int64_t result; // 0x32263f
    char * v1 = (char *)(a4 - 62 + result); // 0x322641
    char v2 = *v1; // 0x322641
    *v1 = (char)((char)a3 < (char)(a4 / 256)) - (char)a4 + v2;
    return result;
}

// Address range: 0x322716 - 0x32272b
int64_t function_322716(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x322716
    int64_t v1; // 0x322716
    char * v2 = (char *)(v1 - 0x6d11abf9); // 0x322716
    *v2 = *v2 + (char)v1;
    int64_t result = unknown_ffffffffb42b4222(a1, a2, a3, a4); // 0x32271c
    char * v3 = (char *)(v1 - 0x6cb8d87a + 8 * v1); // 0x322721
    *v3 = *v3 + (char)(a3 / 256);
    return result;
}

// Address range: 0x322740 - 0x322745
int64_t function_322740(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x322740
    int64_t result; // 0x322740
    *(int32_t *)a1 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x32274d - 0x322757
int64_t function_32274d(void) {
    // 0x32274d
    return function_ffffffff94771abb();
}

// Address range: 0x3227bd - 0x3227d0
int64_t function_3227bd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3227bd
    int64_t result; // 0x3227bd
    int32_t * v1 = (int32_t *)(result + 0x73658803); // 0x3227c7
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x32281b - 0x32282a
int64_t function_32281b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32281b
    int64_t v1; // 0x32281b
    *(int32_t *)a2 = 2 * (int32_t)v1;
    return function_ffffffffd4341082();
}

// Address range: 0x322838 - 0x32283b
int64_t function_322838(int64_t a1) {
    // 0x322838
    int64_t result; // 0x322838
    return result;
}

// Address range: 0x413542 - 0x413546
int64_t function_413542(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x413542
    int64_t result; // 0x413542
    return result;
}

// Address range: 0x413566 - 0x413568
int64_t function_413566(void) {
    // 0x413566
    int64_t result; // 0x413566
    return result;
}

// Address range: 0x41358b - 0x413596
int64_t function_41358b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 116); // 0x41358e
    unsigned char v2 = *v1; // 0x41358e
    *v1 = v2 / 2 | 128 * v2;
    return function_ffffffffed936aa5();
}

// Address range: 0x4135ff - 0x413604
int64_t function_4135ff(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x4135ff
    int64_t v1; // 0x4135ff
    return v1 ^ a4 % 256;
}

// Address range: 0x4136a5 - 0x4136a7
int64_t function_4136a5(void) {
    // 0x4136a5
    return function_4136e5((int64_t)&g1);
}

// Address range: 0x4136a7 - 0x4136e5
int64_t function_4136a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x4136a7
    char * v3 = (char *)(v2 + 0x75172146); // 0x4136a9
    unsigned char v4 = *v3; // 0x4136a9
    char v5 = a3; // 0x4136a9
    char v6 = a5 % 2 != 0; // 0x4136a9
    unsigned char v7 = v6 + v5; // 0x4136a9
    char v8 = v4 - v7; // 0x4136a9
    bool v9 = a5 % 2 != 0 ? v7 != -1 | v4 < v8 - v6 : v4 < v7; // 0x4136a9
    *v3 = v8;
    int64_t v10 = __asm_iretd(); // 0x4136b4
    __asm_outsb((int16_t)a3, *(char *)&v1);
    int64_t v11 = v10; // 0x4136b6
    if (a4 != 1 && (int32_t)v2 + 0x12450b75 != (int32_t)v9) {
        v11 = function_4136f9();
    }
    char * v12 = (char *)(a1 - 0x73cd2b8a + 4 * v2); // 0x4136b8
    unsigned char v13 = *v12; // 0x4136b8
    unsigned char v14 = v13 + v5; // 0x4136b8
    *v12 = v14;
    int64_t v15; // 0x4136a7
    char * v16 = (char *)(4 * v11 + (int64_t)&v15); // 0x4136bf
    char v17 = v2; // 0x4136bf
    *v16 = *v16 + v17 + (char)(v14 < v13);
    *(char *)0x7937698e = *(char *)0x7937698e ^ v17;
    uint64_t v18 = v11 & v2;
    int64_t v19 = a4 - 2; // 0x4136ca
    int64_t v20 = v18 % 256; // 0x4136ca
    if (v19 != 0) {
        v20 = function_413700();
    }
    // 0x4136cc
    *(char *)0x3d2fc425af7b2a84 = (char)v20;
    int64_t v21; // 0x4136a7
    if ((char)v18 != 0) {
        function_4136f3(a1, v1, a3, v19 & -256 | 19);
        v21 = v1;
    } else {
        // 0x4136cc
        v21 = v1;
    }
    // 0x4136d9
    return function_41370e(a1, v21, a3);
}

// Address range: 0x4136e5 - 0x4136ea
int64_t function_4136e5(int64_t a1) {
    // 0x4136e5
    int64_t v1; // 0x4136e5
    int64_t v2 = v1;
    return (v2 + 218 + ((char)v2 < 38 ? 166 : 167)) % 256 | v2 & -256;
}

// Address range: 0x4136f3 - 0x4136f9
int64_t function_4136f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4136f3
    int64_t v1; // 0x4136f3
    int64_t v2 = v1;
    return (v2 + 157) % 256 | v2 & -256;
}

// Address range: 0x4136f9 - 0x413700
int64_t function_4136f9(void) {
    // 0x4136f9
    int64_t v1; // 0x4136f9
    return v1 & 0x30608067;
}

// Address range: 0x413700 - 0x413701
int64_t function_413700(void) {
    // 0x413700
    int64_t result; // 0x413700
    return result;
}

// Address range: 0x41370e - 0x413713
int64_t function_41370e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41370e
    int64_t result; // 0x41370e
    return result;
}

// Address range: 0x413714 - 0x413751
int64_t function_413714(int64_t a1, int64_t a2) {
    // 0x413714
    *(char *)a1 = __asm_insb(3598);
    int64_t v1; // 0x413714
    int32_t * v2 = (int32_t *)(v1 - 0x2c61dd8f); // 0x41371c
    *v2 = *v2 + (int32_t)v1;
    unsigned char v3 = (char)v1; // 0x413724
    __asm_out_133(104, v3);
    int64_t v4; // 0x413714
    int64_t v5 = v4;
    *(int32_t *)v5 = *(int32_t *)&v4 | (int32_t)v5;
    __asm_out_134(3598, (int32_t)v1);
    *(char *)v1 = v3 / 2 | 128 * v3;
    unsigned char v6 = (char)(v4 / 256) > 241 ? 19 : 18; // 0x41373a
    bool v7; // 0x413714
    int32_t * v8 = (int32_t *)((v7 ? -4 : 4) + a2); // 0x41373e
    uint32_t v9 = *v8; // 0x41373e
    *v8 = v9 / 0x80000 | 0x4000 * v9 | 0x2000 * (int32_t)((char)(v4 / 256) > 241 | v6 > v3);
    return __asm_int1();
}

// Address range: 0x41379d - 0x41379e
int64_t function_41379d(void) {
    // 0x41379d
    int64_t result; // 0x41379d
    return result;
}

// Address range: 0x4137b4 - 0x4137b6
int64_t function_4137b4(void) {
    // 0x4137b4
    int64_t result; // 0x4137b4
    return result;
}

// Address range: 0x4137d7 - 0x4137de
int64_t function_4137d7(void) {
    // 0x4137d7
    bool v1; // 0x4137d7
    if (!v1) {
        function_41379d();
    }
    // 0x4137d9
    return function_21e47589();
}

// Address range: 0x413808 - 0x413809
int64_t function_413808(void) {
    // 0x413808
    int64_t result; // 0x413808
    return result;
}

// Address range: 0x413824 - 0x413825
int64_t function_413824(int64_t a1) {
    // 0x413824
    int64_t result; // 0x413824
    return result;
}

// Address range: 0x41386d - 0x413873
int64_t function_41386d(void) {
    // 0x41386d
    int64_t v1; // 0x41386d
    int32_t * v2 = (int32_t *)(v1 + 2 * v1); // 0x41386d
    *v2 = *v2 - 60;
    return function_413808();
}

// Address range: 0x413888 - 0x413889
int64_t function_413888(void) {
    // 0x413888
    int64_t result; // 0x413888
    return result;
}

// Address range: 0x4138a0 - 0x4138a1
int64_t function_4138a0(void) {
    // 0x4138a0
    int64_t result; // 0x4138a0
    return result;
}

// Address range: 0x4138a1 - 0x4138b2
int64_t function_4138a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4138a1
    int64_t v1; // 0x4138a1
    int64_t v2 = a3 - 256 * v1 & 0xff00 | a3 & -0xff01; // 0x4138a1
    *(int32_t *)a1 = __asm_insd((int16_t)v2);
    return function_413901(a1, a4, v2, v1);
}

// Address range: 0x4138b2 - 0x4138b5
int64_t function_4138b2(int64_t a1) {
    // 0x4138b2
    int64_t result; // 0x4138b2
    return result;
}

// Address range: 0x4138b6 - 0x4138bb
int64_t function_4138b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4138b6
    int64_t result; // 0x4138b6
    return result;
}

// Address range: 0x4138c9 - 0x4138d7
int64_t function_4138c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (uint32_t)(int32_t)a4 % 32; // 0x4138c9
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(a4 + 12); // 0x4138c9
        *v2 = *v2 >> v1;
    }
    if (a4 == 0) {
        function_413888();
    }
    // 0x4138ce
    return function_40b1e021();
}

// Address range: 0x413901 - 0x413912
int64_t function_413901(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x413901
    bool v1; // 0x413901
    if (v1 || false) {
        function_4138a0();
    }
    // 0x413905
    int64_t v2; // 0x413901
    return v2 & 0xffffffff;
}

// Address range: 0x41391a - 0x413929
int64_t function_41391a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41391a
    int64_t v1; // 0x41391a
    *(char *)a1 = -(char)v1;
    int32_t * v2 = (int32_t *)(4 * v1 + a3); // 0x413922
    *v2 = *v2 ^ (int32_t)v1 & -0x1884f8d2;
    return v1 & 0xe77b072e | 1;
}

// Address range: 0x413969 - 0x413981
int64_t function_413969(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x432ffe90); // 0x413969
    *v1 = *v1 - (int32_t)a1;
    bool v2; // 0x413969
    return (int64_t)*(int32_t *)((v2 ? -4 : 4) + a2);
}

// Address range: 0x4139fa - 0x413a01
int64_t function_4139fa(void) {
    // 0x4139fa
    int64_t result; // 0x4139fa
    return result;
}

// Address range: 0x413a38 - 0x413a89
int64_t function_413a38(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x413a38
    int64_t v1; // 0x413a38
    bool v2; // 0x413a38
    if (v2) {
        // 0x413a7e
        *(char *)a2 = (char)(a3 / 256 & a2);
        *(int32_t *)0x63cc6bcb = *(int32_t *)0x63cc6bcb + 37;
        return v1 & 0xffffffff;
    }
    // 0x413a41
    __asm_out_133(5, (char)v1);
    __asm_out_133(67, (char)v1 + 8);
    return function_7897de();
}

// Address range: 0x413aa1 - 0x413ab7
int64_t function_413aa1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x413aa1
    return function_ffffffffc7fe5831();
}

// Address range: 0x413ae2 - 0x413ae3
int64_t function_413ae2(void) {
    // 0x413ae2
    int64_t result; // 0x413ae2
    return result;
}

// Address range: 0x413b05 - 0x413c82
int64_t function_413b05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x413b05
    int64_t v1; // 0x413b05
    uint64_t v2 = v1;
    char v3 = *(char *)(2 * a4 + 0x49f0a40e + v2) + (char)(v2 / 256); // 0x413b05
    int64_t result = 256 * (int64_t)v3 | v2 & -0xff01; // 0x413b05
    if (v3 >= 0) {
        // 0x413b18
        return result;
    }
    char * v4 = (char *)(a2 + 0x30284d1f); // 0x413b10
    char v5 = *v4; // 0x413b10
    char v6 = v1; // 0x413b10
    char v7 = v5 + v6; // 0x413b10
    *v4 = v7;
    if (v7 == 0) {
        // 0x413b18
        return result;
    }
    int64_t result2 = result; // 0x413b48
    if (((v7 ^ v5) & (v7 ^ v6)) < 0) {
        result2 = function_413ae2();
    }
    // 0x413b4a
    *(int32_t *)result2 = (int32_t)v1;
    return result2;
}

// Address range: 0x413c8c - 0x413c8e
int64_t function_413c8c(void) {
    // 0x413c8c
    int64_t v1; // 0x413c8c
    return function_413d00(v1, v1, v1, v1, (int64_t)&g1);
}

// Address range: 0x413ca8 - 0x413ccf
int64_t function_413ca8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x413ca8
    int64_t v1; // 0x413ca8
    int64_t v2 = v1 & -256 | 246; // 0x413ca8
    int32_t * v3 = (int32_t *)(v2 + 0xa615eb42 & 0xffffff38); // 0x413caa
    *v3 = *v3 & (int32_t)v2;
    uint64_t v4 = __asm_wait(); // 0x413cb1
    *(char *)0x5a0cf01a = *(char *)0x5a0cf01a | (char)v4;
    *(char *)a1 = __asm_insb((int16_t)a3);
    return v4 & -256 | (int64_t)*(char *)((v4 % 256 ^ 102) + v2);
}

// Address range: 0x413d00 - 0x413de6
int64_t function_413d00(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x413d00
    int64_t v1; // 0x413d00
    int64_t v2 = v1;
    int64_t v3 = a1;
    uint32_t v4 = (int32_t)a4 % 32; // 0x413d00
    if (v4 != 0) {
        int32_t * v5 = (int32_t *)(a4 + 87); // 0x413d00
        uint32_t v6 = *v5; // 0x413d00
        bool v7; // 0x413d00
        *v5 = v6 << v4 | (int32_t)v7 << v4 - 1 | (int32_t)((int64_t)v6 >> (int64_t)(33 - v4));
    }
    int32_t * v8 = (int32_t *)(a5 + 105); // 0x413d06
    int32_t v9 = a3; // 0x413d06
    int32_t v10 = *v8 | v9; // 0x413d06
    unsigned char v11 = llvm_ctpop_i8((char)v10); // 0x413d06
    *v8 = v10;
    int64_t v12; // 0x413d00
    int64_t v13 = (int64_t)*(int32_t *)&v12; // 0x413d09
    int64_t v14 = -0x489329b1 * v13; // 0x413d09
    if (v11 % 2 == 0) {
        // 0x413d11
        return (v2 + 103 + (int64_t)(v14 != -0x489329b100000000 * v13 >> 32)) % 256 | v2 & -256;
    }
    int32_t v15 = *(int32_t *)&v3 & v9; // 0x413d4a
    *(int32_t *)v3 = v15;
    int64_t v16 = a4 - 1; // 0x413d4c
    if (v16 != 0 && v15 != 0) {
        // 0x413d73
        return v2 | 128;
    }
    unsigned char v17 = llvm_ctpop_i8((char)v15); // 0x413d4a
    int16_t v18 = a3; // 0x413d4e
    __asm_out_136(v18, (char)v2);
    if (v17 % 2 == 0) {
        // 0x413d51
        int64_t result; // 0x413d00
        return result;
    }
    int32_t * v19 = (int32_t *)(v3 - 0xb9ab029); // 0x413d7f
    int32_t v20 = *v19; // 0x413d7f
    int32_t v21 = v20 - (int32_t)v3; // 0x413d7f
    unsigned char v22 = llvm_ctpop_i8((char)v21); // 0x413d7f
    *v19 = v21;
    if (v22 % 2 == 0) {
        unsigned char v23 = *(char *)(a3 - 45) & 29; // 0x413dbb
        *(char *)v3 = *(char *)a5;
        char v24 = *(char *)(256 * (int64_t)v23 | 0x5240004d); // 0x413dbf
        return (256 * (int64_t)(v23 - v24) | 0xd3740c7f) ^ 0xe3d4720a;
    }
    // 0x413dcc
    if (v16 == 1 || v3 < (int64_t)v20) {
        // 0x413d51
        return v1 & 0xffffffff;
    }
    int64_t v25 = v14 & 0xffffffff; // 0x413d09
    char * v26 = (char *)(v3 - 0x3bd3871); // 0x413dd7
    char v27 = *v26 - (char)(a3 / 256); // 0x413dd7
    *v26 = v27;
    char v28 = __asm_in(v18); // 0x413ddd
    int64_t v29 = v25; // 0x413dde
    if (v27 < 0) {
        // 0x413de0
        *(int64_t *)(v25 - 8) = v12;
        v29 = v25 - 16;
        *(int64_t *)v29 = a3;
    }
    int32_t v30 = *(int32_t *)(v3 + 127); // 0x413de2
    *(int64_t *)((int64_t)(v30 + (int32_t)v29) - 8) = v12;
    return v1 & 0xffffff00 | (int64_t)v28;
}

// Address range: 0x413e10 - 0x413f26
int64_t function_413e10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x413e10
    int3_t v1; // 0x413e10
    int64_t v2; // 0x413e10
    int64_t v3; // 0x413e10
    if (a4 != 0) {
        // 0x413e23
        bool v4; // 0x413e10
        int64_t v5 = v4 ? -4 : 4; // 0x413e23
        int64_t v6 = v5 + a1; // 0x413e23
        int3_t v7; // 0x413e10
        __frontend_reg_load_fpr(v7);
        int3_t v8 = v7 + 1; // 0x413e25
        char * v9 = (char *)(a4 + 69 + 2 * v6); // 0x413e28
        unsigned char v10 = *v9; // 0x413e28
        unsigned char v11 = v10 + (char)(v3 / 256); // 0x413e28
        unsigned char v12 = v11 + (char)((int32_t)a2 < (int32_t)a1); // 0x413e28
        bool v13 = (int32_t)a2 < (int32_t)a1 ? v12 <= v10 : v11 < v10; // 0x413e28
        *v9 = v12;
        if (v12 != 0 && !v13) {
            char * v14 = (char *)(v6 - 118); // 0x413e78
            *v14 = *v14 | (char)a3;
            int64_t result = unknown_28c49603(); // 0x413e81
            *(float80_t *)(result + 2 * v3) = __asm_fbstp(__frontend_reg_load_fpr(v8));
            return result;
        }
        int64_t v15 = v3 & 0xffffffff ^ 0x6f8a4df0; // 0x413e2e
        char * v16 = (char *)(v6 + 0x6fb67df); // 0x413e34
        char v17 = *v16; // 0x413e34
        char v18 = a3; // 0x413e34
        char v19 = v17 + v18; // 0x413e34
        *v16 = v19;
        v2 = v15;
        v1 = v8;
        if (v19 < 0 != ((v19 ^ v17) & (v19 ^ v18)) < 0) {
            char v20 = *(char *)(v5 + a2); // 0x413e3e
            return v15 & 0xffffff00 | (int64_t)(v20 & (char)v15);
        }
    }
    float80_t v21 = __frontend_reg_load_fpr(v1); // 0x413e5b
    int16_t v22 = *(int16_t *)(v3 - 83); // 0x413e5b
    __frontend_reg_store_fpr(v1, v21 + (float80_t)v22);
    return v2 ^ 124;
}
