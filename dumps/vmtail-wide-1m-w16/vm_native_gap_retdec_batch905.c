/*
 * Targeted RetDec C for native executable gap queue batch 905.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x29d2bf-0x29d4bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x29d4bf-0x29d6bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x29d6bf-0x29d8bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x358a45-0x358c45 rank=- name=- kind=- bytes=- uncovered=-
 *   0x358c45-0x358e45 rank=- name=- kind=- bytes=- uncovered=-
 *   0x358e45-0x359045 rank=- name=- kind=- bytes=- uncovered=-
 *   0x359045-0x359245 rank=- name=- kind=- bytes=- uncovered=-
 *   0x359245-0x359445 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_29d2bf(void);
int64_t function_29d2f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29d36c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29d38f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_29d49c(void);
int64_t function_29d4ac(void);
int64_t function_29d4c0(int64_t a1);
int64_t function_29d4d8(void);
int64_t function_29d4da(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29d545(void);
int64_t function_29d5f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29d605(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29d615(void);
int64_t function_29d65c(void);
int64_t function_29d66b(void);
int64_t function_29d67a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29d6f1(int64_t a1, int64_t a2);
int64_t function_29d780(int64_t a1);
int64_t function_29d7bd(int64_t a1);
int64_t function_29d7d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29d873(void);
int64_t function_29d89b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2c36c8f3();
int64_t function_358a45(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_358a94(void);
int64_t function_358a98(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_358ada(int64_t a1, int64_t a2, int64_t a3);
int64_t function_358afb(void);
int64_t function_358b5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_358be7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_358c70(int64_t a1);
int64_t function_358c79(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_358ca0(void);
int64_t function_358ce3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_358cee(int64_t a1);
int64_t function_358d06(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_358d2f(int64_t a1);
int64_t function_358d43(int64_t a1);
int64_t function_358d62(void);
int64_t function_358d95(int64_t a1, int64_t a2, int64_t a3);
int64_t function_358db2(int64_t a1);
int64_t function_358dd6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_358e2d(void);
int64_t function_358ec9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_358f2b(void);
int64_t function_358f55(void);
int64_t function_358f84(int64_t a1);
int64_t function_359092(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3590e9(int64_t a1);
int64_t function_359106(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_359205(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35921a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35924d(int64_t a1);
int64_t function_35926b(int64_t a1);
int64_t function_35928a(void);
int64_t function_3592d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3592fd(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_359347(void);
int64_t function_359349(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3593c9(void);
int64_t function_3593ef(void);
int64_t function_3593f1(void);
int64_t function_35941b(int64_t a1);
int64_t function_504b911e();
int64_t function_ffffffff9a589973();
int64_t unknown_26a96155();
int64_t unknown_2ced420c();
int64_t unknown_3d6e603();
int64_t unknown_3f407830();
int64_t unknown_474189a2();
int64_t unknown_4becdc5();
int64_t unknown_68330ac3();
int64_t unknown_6a5ee695();
int64_t unknown_ffffffff833df0b8();
int64_t unknown_ffffffffabfd94d6();
int64_t unknown_ffffffffb2392321();
int64_t unknown_ffffffffc036cf0e();
int64_t unknown_ffffffffc7dc0a5d();
int64_t unknown_ffffffffc836c99e();
int64_t unknown_ffffffffced385de();
int64_t unknown_ffffffffdcc9e826();
int64_t unknown_ffffffffe8b6c2c5();
int64_t unknown_fffffffff832b90e();

// Address range: 0x29d2bf - 0x29d2d1
int64_t function_29d2bf(void) {
    int64_t result = unknown_4becdc5(); // 0x29d2bf
    int32_t * v1 = (int32_t *)result; // 0x29d2cf
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x29d2f2 - 0x29d35a
int64_t function_29d2f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4 - 1; // 0x29d2f8
    int64_t * v2; // 0x29d2f2
    int64_t result; // 0x29d2f2
    bool v3; // 0x29d2f2
    if (v1 == 0 || (int32_t)v3 + (int32_t)result == (int32_t)result) {
        // 0x29d2fa
        int64_t v4; // bp-8, 0x29d2f2
        v2 = &v4;
        if ((char)result >= 0) {
            int32_t * v5 = (int32_t *)(a1 - 54); // 0x29d2fe
            *v5 = *v5 + (int32_t)v1;
            return result;
        }
    } else {
        int64_t v6 = result & -256; // 0x29d2f2
        int64_t v7 = v6; // bp-16, 0x29d306
        int32_t * v8 = (int32_t *)(a1 - 0x41459a6f); // 0x29d309
        uint32_t v9 = *v8 + (int32_t)v6; // 0x29d309
        *v8 = v9;
        v2 = &v7;
        if (v9 >= 1) {
            // 0x29d313
            return result | 232;
        }
    }
    // 0x29d33b
    unknown_26a96155(0xe76583c0);
    *(int64_t *)((int64_t)v2 - 8) = 0xe76583c0;
    return a3 & 0xffffffff;
}

// Address range: 0x29d36c - 0x29d38f
int64_t function_29d36c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29d36c
    int64_t v1; // 0x29d36c
    *(int32_t *)0x34992fb00d13c7bf = (int32_t)v1;
    __writegsbyte(0x5058fc7f, __readgsbyte(0x5058fc7f) + (char)(v1 / 256));
    int64_t v2 = __asm_iretd(); // 0x29d37e
    *(int32_t *)0x1bba532a = *(int32_t *)0x1bba532a - (int32_t)v1;
    __asm_out((int16_t)a3, (char)v2);
    return 0x10000 * (int32_t)v2 >> 16;
}

// Address range: 0x29d38f - 0x29d3e2
int64_t function_29d38f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x29d38f
    int64_t result; // 0x29d38f
    bool v1; // 0x29d38f
    if (v1) {
        if (v1) {
            // 0x29d3d7
            *(char *)0x2cf76fde = *(char *)0x2cf76fde + (char)(result / 256);
            *(char *)a1 = (char)result;
            return result;
        }
        // 0x29d3d0
        return result;
    }
    int32_t * v2 = (int32_t *)(result - 10); // 0x29d391
    *v2 = *v2 + (int32_t)result;
    int64_t v3 = result & 0xffffffff; // 0x29d39b
    __asm_wait();
    *(int64_t *)(v3 + -16 - (int64_t)"create") = v3 - 8;
    char v4; // bp-886846720, 0x29d38f
    int64_t v5 = (int64_t)&v4; // 0x29d3ba
    __asm_out_133(104, (char)v5);
    return v5 & 0xffffffff ^ 0xeb84e84d;
}

// Address range: 0x29d49c - 0x29d49e
int64_t function_29d49c(void) {
    // 0x29d49c
    return function_29d4d8();
}

// Address range: 0x29d4ac - 0x29d4ad
int64_t function_29d4ac(void) {
    // 0x29d4ac
    int64_t result; // 0x29d4ac
    return result;
}

// Address range: 0x29d4c0 - 0x29d4c3
int64_t function_29d4c0(int64_t a1) {
    // 0x29d4c0
    int64_t result; // 0x29d4c0
    return result;
}

// Address range: 0x29d4d8 - 0x29d4d9
int64_t function_29d4d8(void) {
    // 0x29d4d8
    int64_t result; // 0x29d4d8
    return result;
}

// Address range: 0x29d4da - 0x29d4fb
int64_t function_29d4da(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t result; // 0x29d4da
    bool v2; // 0x29d4da
    if (a4 != 1 && !v2) {
        // 0x29d4f7
        return result;
    }
    // 0x29d4dc
    *(int32_t *)0xcba7e3 = *(int32_t *)0xcba7e3 ^ (int32_t)a1;
    int64_t v3; // 0x29d4da
    int64_t * v4 = (int64_t *)(v3 + 0x3c8515a5); // 0x29d4e2
    *v4 = *v4 + v3;
    __asm_outsb((int16_t)a3, *(char *)&v1);
    int32_t v5 = *(int32_t *)&v1 + (int32_t)a3; // 0x29d4ed
    *(int32_t *)v1 = v5;
    if (a4 != 2 == v5 == 0) {
        result = function_29d4ac();
    }
    // 0x29d4f7
    return result;
}

// Address range: 0x29d545 - 0x29d54e
int64_t function_29d545(void) {
    // 0x29d545
    int64_t result; // 0x29d545
    return result;
}

// Address range: 0x29d5f7 - 0x29d605
int64_t function_29d5f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 0x7ee85094); // 0x29d5f7
    int64_t result; // 0x29d5f7
    *v1 = *v1 + (int32_t)result;
    int64_t v2; // 0x29d5f7
    *(char *)a2 = *(char *)&v2 & (char)result;
    return result;
}

// Address range: 0x29d605 - 0x29d613
int64_t function_29d605(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29d605
    int64_t v1; // 0x29d605
    int64_t v2 = v1;
    return (v2 + (uint64_t)v1 / 256) % 256 | v2 & -256;
}

// Address range: 0x29d615 - 0x29d616
int64_t function_29d615(void) {
    // 0x29d615
    int64_t result; // 0x29d615
    return result;
}

// Address range: 0x29d65c - 0x29d65d
int64_t function_29d65c(void) {
    // 0x29d65c
    int64_t result; // 0x29d65c
    return result;
}

// Address range: 0x29d66b - 0x29d67a
int64_t function_29d66b(void) {
    // 0x29d66b
    int64_t v1; // 0x29d66b
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return function_29d615();
}

// Address range: 0x29d67a - 0x29d68d
int64_t function_29d67a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x29d67a
    int64_t v1; // 0x29d67a
    bool v2; // 0x29d67a
    if (v2) {
        v1 = function_29d65c();
    }
    // 0x29d67c
    __asm_out_133(-44, (char)v1);
    return v1 + a4 & 0xffffffff;
}

// Address range: 0x29d6f1 - 0x29d6f3
int64_t function_29d6f1(int64_t a1, int64_t a2) {
    // 0x29d6f1
    int64_t result; // 0x29d6f1
    return result;
}

// Address range: 0x29d780 - 0x29d78c
int64_t function_29d780(int64_t a1) {
    char * v1 = (char *)(a1 - 0x6c7734d9); // 0x29d780
    int64_t v2; // 0x29d780
    bool v3; // 0x29d780
    *v1 = *v1 + (char)((uint64_t)v2 / 256) + (char)v3;
    return unknown_6a5ee695(a1);
}

// Address range: 0x29d7bd - 0x29d7c5
int64_t function_29d7bd(int64_t a1) {
    int64_t v1 = unknown_68330ac3(a1); // 0x29d7bd
    return (v1 & 0xff00) + v1 & 0xff00 | v1 & -0xff01;
}

// Address range: 0x29d7d5 - 0x29d833
int64_t function_29d7d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29d7d5
    int64_t v1; // 0x29d7d5
    __asm_out_133(-39, (char)v1);
    uint64_t v2 = v1 + 7; // 0x29d7e9
    char v3 = *(char *)0x47d309bc; // 0x29d7f1
    *(char *)0x47d309bc = (char)v2 + (char)((char)v1 < (char)v1) + v3;
    if (a4 == 0) {
        // 0x29d811
        return (v2 % 256 | v1 & 0xffffff00) ^ 0x4f013d00;
    }
    // 0x29d806
    bool v4; // 0x29d7d5
    int64_t v5 = v4 ? -1 : 1; // 0x29d7eb
    int64_t result = unknown_2ced420c(v5 + a1, v5 + a2, (int64_t *)&g1); // 0x29d806
    __asm_out_134(-13, (int32_t)result);
    *(char *)&g1 = (char)(v1 / 256);
    return result;
}

// Address range: 0x29d873 - 0x29d874
int64_t function_29d873(void) {
    // 0x29d873
    int64_t result; // 0x29d873
    return result;
}

// Address range: 0x29d89b - 0x29d8bd
int64_t function_29d89b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x29d89b
    int64_t result; // 0x29d89b
    int64_t v1; // 0x29d89b
    if ((char)(a3 / 256) - (char)v1 >= 0) {
        result = function_29d873();
    }
    // 0x29d8af
    return result;
}

// Address range: 0x358a45 - 0x358a7d
int64_t function_358a45(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x358a45
    int64_t v1; // 0x358a45
    bool v2; // 0x358a45
    if (v2) {
        int32_t * v3 = (int32_t *)(a1 - 96); // 0x358a47
        *v3 = *v3 ^ (int32_t)v1;
    }
    int32_t * v4 = (int32_t *)(v1 - 0x76664f8b); // 0x358a4d
    *v4 = *v4 + (int32_t)a1;
    int64_t v5; // 0x358a45
    *(char *)v5 = -*(char *)&v5;
    int64_t v6 = v5 & 0xe873da1a; // 0x358a55
    int32_t * v7 = (int32_t *)(a3 - 59); // 0x358a5a
    *v7 = *v7 + (int32_t)v6;
    return v6 + 154 & 190 | v5 & 0xe873da00;
}

// Address range: 0x358a94 - 0x358a97
int64_t function_358a94(void) {
    // 0x358a94
    int64_t result; // 0x358a94
    return result;
}

// Address range: 0x358a98 - 0x358ad1
int64_t function_358a98(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t v1 = *(int32_t *)(a1 + 0x35928f3a); // 0x358a9e
    int64_t result; // 0x358a98
    if (llvm_ctpop_i8((char)(v1 + (int32_t)a6)) % 2 == 0) {
        // 0x358ad3
        return result;
    }
    int32_t * v2 = (int32_t *)(a1 - 0x1f2ac190); // 0x358aad
    *v2 = *v2 + (int32_t)a1;
    int32_t * v3 = (int32_t *)(result + 0x33b4cc3a); // 0x358abd
    *v3 = *v3 | 8;
    int64_t result2 = function_358a94(); // 0x358ac4
    int32_t * v4 = (int32_t *)(a3 + 0x7304e831); // 0x358ac9
    *v4 = *v4 + (int32_t)a2;
    return result2;
}

// Address range: 0x358ada - 0x358ade
int64_t function_358ada(int64_t a1, int64_t a2, int64_t a3) {
    // 0x358ada
    int64_t result; // 0x358ada
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)v1 + (int32_t)a2;
    return result;
}

// Address range: 0x358afb - 0x358afe
int64_t function_358afb(void) {
    // 0x358afb
    int64_t v1; // 0x358afb
    bool v2; // 0x358afb
    return 2 * v1 & 0xfffffffe | (int64_t)v2;
}

// Address range: 0x358b5b - 0x358bad
int64_t function_358b5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a3;
    bool v3; // 0x358b5b
    int64_t v4 = v3 ? -4 : 4; // 0x358b5b
    int64_t v5 = v4 + a1; // 0x358b5b
    int64_t v6 = v4 + a2; // 0x358b5b
    int32_t * v7 = (int32_t *)(a3 + 85); // 0x358b62
    int64_t v8; // 0x358b5b
    *v7 = *v7 - (int32_t)v8;
    uint32_t v9 = (*(int32_t *)v6 | (int32_t)v8) & -0x1e8ff56 | 0x1e8d355;
    int32_t * v10 = (int32_t *)((int64_t)v9 - 0x7583efd2); // 0x358b78
    *v10 = *v10 + (int32_t)v5;
    *(int32_t *)v1 = *(int32_t *)&v1 + 1;
    *(char *)v5 = *(char *)v6;
    *(char *)(v5 + (v3 ? -1 : 1)) = (char)v9;
    int64_t v11 = v1 & -256 | 4; // 0x358b89
    *(char *)v2 = *(char *)&v2 - 24;
    int32_t * v12 = (int32_t *)(v11 + 0x13d00c1); // 0x358b8e
    *v12 = *v12 + (int32_t)v2;
    char * v13 = (char *)v11; // 0x358b94
    *v13 = *v13 & (char)(v1 / 256);
    *(int32_t *)-0x7a23916c = *(int32_t *)-0x7a23916c & 119;
    return v9 + 0x2a26e6ea;
}

// Address range: 0x358be7 - 0x358bf3
int64_t function_358be7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x358be7
    bool v1; // 0x358be7
    int64_t v2 = v1 ? -1 : 1; // 0x358be7
    int64_t v3; // 0x358be7
    *(char *)a1 = (char)v3;
    return function_2c36c8f3(v2 + a1, v2 + a2, (a3 + 1) % 256 | a3 & -256);
}

// Address range: 0x358c70 - 0x358c71
int64_t function_358c70(int64_t a1) {
    // 0x358c70
    int64_t result; // 0x358c70
    return result;
}

// Address range: 0x358c79 - 0x358c9f
int64_t function_358c79(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_sti(); // 0x358c7d
    int64_t v2 = (v1 + 24) % 256 | v1 & -256; // 0x358c8a
    int32_t * v3 = (int32_t *)(v2 + 51); // 0x358c8c
    *v3 = *v3 + (int32_t)v2;
    int32_t * v4 = (int32_t *)(2 * (int64_t)*(int32_t *)(a1 + 7) + a3); // 0x358c95
    int64_t v5; // 0x358c79
    *v4 = *v4 + (int32_t)v5;
    return unknown_ffffffffc836c99e();
}

// Address range: 0x358ca0 - 0x358caa
int64_t function_358ca0(void) {
    // 0x358ca0
    *(char *)0x6a37754a = *(char *)0x6a37754a - 55;
    int64_t result; // 0x358ca0
    return result;
}

// Address range: 0x358ce3 - 0x358cee
int64_t function_358ce3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x358ce3
    int64_t result; // 0x358ce3
    *(int32_t *)(a3 + 0x1e82407) = (int32_t)result;
    return result;
}

// Address range: 0x358cee - 0x358cf1
int64_t function_358cee(int64_t a1) {
    // 0x358cee
    int64_t result; // 0x358cee
    return result;
}

// Address range: 0x358d06 - 0x358d2f
int64_t function_358d06(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x358d06
    unknown_fffffffff832b90e();
    unknown_ffffffffdcc9e826();
    bool v1; // 0x358d06
    return (v1 ? 0xfffffffc : 4) + a2 & 0xffffffff;
}

// Address range: 0x358d2f - 0x358d32
int64_t function_358d2f(int64_t a1) {
    // 0x358d2f
    int64_t result; // 0x358d2f
    return result;
}

// Address range: 0x358d43 - 0x358d46
int64_t function_358d43(int64_t a1) {
    // 0x358d43
    int64_t result; // 0x358d43
    return result;
}

// Address range: 0x358d62 - 0x358d68
int64_t function_358d62(void) {
    // 0x358d62
    return function_ffffffff9a589973();
}

// Address range: 0x358d95 - 0x358da6
int64_t function_358d95(int64_t a1, int64_t a2, int64_t a3) {
    // 0x358d95
    int64_t v1; // 0x358d95
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x358d95
    int64_t v3 = v2 ? -4 : 4; // 0x358d9b
    return unknown_474189a2(v3 + a1, v3 + a2);
}

// Address range: 0x358db2 - 0x358db3
int64_t function_358db2(int64_t a1) {
    // 0x358db2
    int64_t result; // 0x358db2
    return result;
}

// Address range: 0x358dd6 - 0x358de3
int64_t function_358dd6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x358dd6
    unknown_ffffffffced385de();
    return __asm_in((int16_t)a3);
}

// Address range: 0x358e2d - 0x358e2e
int64_t function_358e2d(void) {
    // 0x358e2d
    int64_t result; // 0x358e2d
    return result;
}

// Address range: 0x358ec9 - 0x358ee5
int64_t function_358ec9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    unsigned char v2 = (char)a4 % 32; // 0x358ed2
    int64_t v3; // 0x358ec9
    int32_t v4; // 0x358ec9
    if (v2 == 0) {
        // 0x358ec9
        v3 = a1;
        v4 = a1;
    } else {
        char * v5 = (char *)(a4 + 0x3d004a94 + 2 * a3); // 0x358ed2
        *v5 = *v5 << v2;
        v3 = v1;
        v4 = *(int32_t *)&v1;
    }
    *(int32_t *)v3 = v4 + (int32_t)a2;
    int64_t result; // 0x358ec9
    *(char *)-0x7b97b3c82802dc25 = (char)result;
    return result;
}

// Address range: 0x358f2b - 0x358f36
int64_t function_358f2b(void) {
    // 0x358f2b
    return function_504b911e();
}

// Address range: 0x358f55 - 0x358f5a
int64_t function_358f55(void) {
    // 0x358f55
    int64_t v1; // 0x358f55
    return v1 | 125;
}

// Address range: 0x358f84 - 0x358f87
int64_t function_358f84(int64_t a1) {
    // 0x358f84
    int64_t result; // 0x358f84
    return result;
}

// Address range: 0x359092 - 0x3590e2
int64_t function_359092(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x359092
    bool v1; // 0x359092
    int64_t v2 = v1 ? -1 : 1; // 0x359092
    int64_t v3; // 0x359092
    int32_t * v4 = (int32_t *)(v3 + 10); // 0x359095
    *v4 = *v4 + (int32_t)v3;
    int64_t v5; // 0x359092
    int32_t v6 = *(int32_t *)&v5; // 0x359099
    int64_t v7 = -111 * v6; // 0x359099
    *(char *)a3 = (char)v6 + (char)v3;
    char v8 = *(char *)(v7 - 0x17599100); // 0x35909e
    int64_t v9 = a3 & -256 | (int64_t)(v8 & (char)a3); // 0x35909e
    int64_t v10 = v9 & -0xff01 | 256 * (int64_t)*(char *)(v9 - 0x6e0a403a); // 0x3590a6
    v5 = v10;
    char * v11 = (char *)((2 * v3 & 0xffffffff) - 124); // 0x3590ac
    *v11 = *v11 + (char)v3;
    char v12 = (int16_t)unknown_ffffffff833df0b8(v2 + a1, v2 + a2, v10, v7) / ((int16_t)(v3 / 256) % 256);
    __asm_out((int16_t)v10, v12);
    if (v12 < 73) {
        // 0x3590db
        return __asm_hlt();
    }
    int64_t v13 = unknown_ffffffffe8b6c2c5(); // 0x3590bf
    return (v13 + 228) % 256 | v13 & -256;
}

// Address range: 0x3590e9 - 0x3590ec
int64_t function_3590e9(int64_t a1) {
    // 0x3590e9
    int64_t result; // 0x3590e9
    return result;
}

// Address range: 0x359106 - 0x35911c
int64_t function_359106(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x359106
    int64_t v1; // 0x359106
    int32_t * v2 = (int32_t *)(v1 + 0x672f3921); // 0x35910b
    *v2 = *v2 | (int32_t)a2;
    int64_t v3; // 0x359106
    *(char *)a3 = *(char *)&v3 + (char)(v1 / 256);
    return v1 + 0xb7ea0508 & 0xffffffff;
}

// Address range: 0x359205 - 0x35920f
int64_t function_359205(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x359205
    return unknown_ffffffffc036cf0e(a1, a2, a3, a4);
}

// Address range: 0x35921a - 0x35923d
int64_t function_35921a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x35921a
    int64_t v1; // 0x35921a
    uint32_t v2 = (int32_t)v1;
    uint32_t v3 = v2 + (int32_t)a2; // 0x359221
    *(int32_t *)a1 = v3;
    int64_t v4 = __asm_iretd(); // 0x359223
    int64_t v5 = v4 - (v3 < v2 ? 148 : 147) & 175; // 0x359224
    int32_t * v6 = (int32_t *)(a3 + 0xd3cab8d); // 0x35922e
    *v6 = *v6 + (int32_t)v1;
    char * v7 = (char *)(a4 + 0xa0501e8); // 0x359234
    *v7 = *v7 - (char)v5;
    return v5 | v4 & 0xe8ed1300;
}

// Address range: 0x35924d - 0x359250
int64_t function_35924d(int64_t a1) {
    // 0x35924d
    int64_t result; // 0x35924d
    return result;
}

// Address range: 0x35926b - 0x35926c
int64_t function_35926b(int64_t a1) {
    // 0x35926b
    int64_t result; // 0x35926b
    return result;
}

// Address range: 0x35928a - 0x35928c
int64_t function_35928a(void) {
    // 0x35928a
    int64_t v1; // 0x35928a
    return function_3592fd(v1, v1, v1, v1, v1, v1, (int64_t)&g2);
}

// Address range: 0x3592d0 - 0x3592fd
int64_t function_3592d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffffabfd94d6(); // 0x3592d0
    char * v2 = (char *)(a2 + 0x66c43a8d); // 0x3592d5
    int64_t v3; // 0x3592d0
    *v2 = *v2 + (char)v3;
    int32_t * v4 = (int32_t *)a5; // 0x3592de
    *v4 = *v4 + (int32_t)v1;
    int32_t v5 = *(int32_t *)(a2 + 36); // 0x3592e0
    int64_t v6 = v1; // 0x3592e3
    if (llvm_ctpop_i8((char)(v5 & (int32_t)a1)) % 2 == 0) {
        v6 = function_359347();
    }
    // 0x3592e5
    int64_t v7; // 0x3592d0
    *(int32_t *)v7 = *(int32_t *)&v7 - (int32_t)v3;
    char * v8 = (char *)((a4 & 0xff00 & 256 * v1 | a4 & -0xff01) + 0x1e8144d); // 0x3592ea
    *v8 = *v8 & (char)a4;
    int32_t * v9 = (int32_t *)(a1 - 0x4b288c80); // 0x3592f0
    *v9 = -1 - *v9;
    return v6 & 0xffffffff ^ 0x9ac529a2;
}

// Address range: 0x3592fd - 0x35932f
int64_t function_3592fd(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = unknown_3d6e603(); // 0x3592fd
    int32_t * v2 = (int32_t *)(a1 - 0x31be106f); // 0x359302
    uint32_t v3 = *v2; // 0x359302
    int64_t v4; // 0x3592fd
    uint32_t v5 = v3 + (int32_t)v4; // 0x359302
    *v2 = v5;
    int64_t v6; // 0x3592fd
    *(int32_t *)a1 = *(int32_t *)&v6 + (int32_t)a1;
    *(int32_t *)0xd0287edad48127 = (int32_t)v1;
    unknown_ffffffffb2392321();
    char * v7 = (char *)(a4 - 256 * (v1 + (int64_t)(v5 < v3)) & 0xff00 | a4 & -0xff01); // 0x359325
    *v7 = *v7 - (char)(a3 / 256);
    *(char *)a1 = __asm_insb((int16_t)a3);
    return unknown_3f407830();
}

// Address range: 0x359347 - 0x359348
int64_t function_359347(void) {
    // 0x359347
    int64_t result; // 0x359347
    return result;
}

// Address range: 0x359349 - 0x35935e
int64_t function_359349(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x359349
    int64_t v1; // 0x359349
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a2 + 0x60019d4f); // 0x359349
    *v3 = *v3 + (int32_t)a4;
    char * v4 = (char *)(v2 + 0x2a010d0d); // 0x35934f
    *v4 = *v4 | (char)(v2 / 256);
    __asm_in_135(-101);
    return unknown_ffffffffc7dc0a5d();
}

// Address range: 0x3593c9 - 0x3593ca
int64_t function_3593c9(void) {
    // 0x3593c9
    int64_t result; // 0x3593c9
    return result;
}

// Address range: 0x3593ef - 0x3593f1
int64_t function_3593ef(void) {
    // 0x3593ef
    return function_3593c9();
}

// Address range: 0x3593f1 - 0x3593f4
int64_t function_3593f1(void) {
    // 0x3593f1
    int64_t result; // 0x3593f1
    return result;
}

// Address range: 0x35941b - 0x35941e
int64_t function_35941b(int64_t a1) {
    // 0x35941b
    int64_t result; // 0x35941b
    return result;
}
