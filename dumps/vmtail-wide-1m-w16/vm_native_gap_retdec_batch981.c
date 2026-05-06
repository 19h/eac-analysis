/*
 * Targeted RetDec C for native executable gap queue batch 981.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x12d6dc-0x12d8dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f760a-0x1f780a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f780a-0x1f7a0a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f7a0a-0x1f7c0a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f7c0a-0x1f7e0a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f7e0a-0x1f800a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f800a-0x1f820a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f820a-0x1f840a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f840a-0x1f860a rank=- name=- kind=- bytes=- uncovered=-
 *   0x3bdfb5-0x3be1b5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3be1b5-0x3be3b5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3be3b5-0x3be5b5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3be5b5-0x3be7b5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3be7b5-0x3be9b5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3be9b5-0x3bebb5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3bebb5-0x3bedb5 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_100dd7c5();
int64_t function_12d673();
int64_t function_12d6dc(int64_t a1);
int64_t function_12d6e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12d735(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12d7ab(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_12d7fd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_12d85e(int64_t a1);
int64_t function_12d8a8(void);
int64_t function_12d8c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_167b3434();
int64_t function_1f760a(void);
int64_t function_1f7676(void);
int64_t function_1f76e0(void);
int64_t function_1f76e4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1f7709(void);
int64_t function_1f773c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f7817(int64_t result);
int64_t function_1f7888(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f7899(int64_t a1, int64_t a2);
int64_t function_1f78b5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1f78c7(void);
int64_t function_1f7915(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1f794f(void);
int64_t function_1f7966(void);
int64_t function_1f796d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f79e2(int64_t a1);
int64_t function_1f79e5(void);
int64_t function_1f79fc(int64_t a1);
int64_t function_1f7a85(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f7b3f(int64_t a1, int64_t a2);
int64_t function_1f7b50(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1f7b73(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1f7b86(void);
int64_t function_1f7bdc(void);
int64_t function_1f7bfc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f7d31(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f7d94(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f7dd2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f7e7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f7ee6(int64_t a1, int64_t a2);
int64_t function_1f7eff(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1f7f0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f7faf(int64_t a1, int64_t a2);
int64_t function_1f7ff9(int64_t a1, int64_t a2);
int64_t function_1f801d(int64_t a1);
int64_t function_1f802f(int64_t a1);
int64_t function_1f8040(int64_t a1);
int64_t function_1f8063(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f80c1(int64_t a1);
int64_t function_1f8128(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f8172(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f8178(int64_t a1, int32_t a2, int64_t a3, int64_t a4);
int64_t function_1f81fe(void);
int64_t function_1f820c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f8231(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1f8269(void);
int64_t function_1f8271(void);
int64_t function_1f8275(void);
int64_t function_1f8279(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f8281(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f82da(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1f82f3(int64_t a1, int64_t a2);
int64_t function_1f82f7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1f8337(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f83bb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1f8411(void);
int64_t function_1f8427(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1f845d(int64_t a1);
int64_t function_1f8497(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f850e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f85bc(int64_t a1);
int64_t function_1f85cc(void);
int64_t function_1f85e5(int64_t a1);
int64_t function_3bdfb5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3bdfbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_3be112(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3be259(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3be3aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3be4eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3be65e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3be7ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3be940(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3bea79(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3bebdb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3bed6f(void);
int64_t function_3bed82(int64_t a1);
int64_t function_70098227();
int64_t function_887779();
int64_t function_c031b0b();
int64_t function_c823b();
int64_t function_ffffffffe8d37e4f();
int64_t function_ffffffffe8d9a5fa();
int64_t unknown_10449d3();
int64_t unknown_176d4863();
int64_t unknown_1dadb4e2();
int64_t unknown_1f2e6e37();
int64_t unknown_3d241f3e();
int64_t unknown_4569f786();
int64_t unknown_58a6ceda();
int64_t unknown_618b975();
int64_t unknown_ffffffff83f8a4a5();
int64_t unknown_ffffffffa2a4b2b4();
int64_t unknown_ffffffffa8261ccb();
int64_t unknown_ffffffffb2281615();
int64_t unknown_ffffffffb320bbec();
int64_t unknown_ffffffffb66cffff();
int64_t unknown_ffffffffb855384d();
int64_t unknown_ffffffffd35e3039();
int64_t unknown_ffffffffd435a271();
int64_t unknown_ffffffffd4d16642();

// Address range: 0x12d6dc - 0x12d6e2
int64_t function_12d6dc(int64_t a1) {
    // 0x12d6dc
    return unknown_1dadb4e2(a1);
}

// Address range: 0x12d6e3 - 0x12d712
int64_t function_12d6e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x12d6e3
    bool v1; // 0x12d6e3
    if (!v1) {
        // 0x12d705
        return function_100dd7c5(a5);
    }
    char * v2 = (char *)(a4 + 0x13d0021); // 0x12d6e5
    unsigned char v3 = *v2; // 0x12d6e5
    unsigned char v4 = v3 + (char)a4; // 0x12d6e5
    *v2 = v4;
    int64_t v5; // 0x12d6e3
    if (v4 >= v3 && v4 != 0) {
        v5 = function_12d673();
    }
    // 0x12d6ed
    return v5 & -256 | (int64_t)*(char *)0x294c6ea133d90f3a;
}

// Address range: 0x12d735 - 0x12d74e
int64_t function_12d735(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)-0x1767add8; // 0x12d735
    *(char *)-0x1767add8 = v1 / 128 | 2 * v1;
    int64_t result; // 0x12d735
    *(int32_t *)0x1e8296631133a9b = (int32_t)result;
    return result;
}

// Address range: 0x12d7ab - 0x12d7bb
int64_t function_12d7ab(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x12d7ab
    unknown_ffffffffa2a4b2b4();
    char v1 = *(char *)-0x43eb3f4c; // 0x12d7b4
    bool v2; // 0x12d7ab
    *(char *)-0x43eb3f4c = (char)(bool)v2 + (char)(a4 / 256) + v1;
    return a1 & 0xffffffff;
}

// Address range: 0x12d7fd - 0x12d821
int64_t function_12d7fd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x12d7fd
    int64_t v1; // 0x12d7fd
    int64_t v2 = 2 * v1; // 0x12d7fd
    *(int32_t *)a3 = (int32_t)v1 + (int32_t)a3;
    char * v3 = (char *)((v2 & 0xffffffff) + 6); // 0x12d801
    *v3 = *v3 + (char)v1;
    *(int32_t *)(v1 + a1) = (int32_t)v2;
    int64_t v4 = unknown_ffffffffb2281615(); // 0x12d80f
    char * v5 = (char *)(2 * a4 + 120 + v4); // 0x12d816
    *v5 = (char)(a4 / 256);
    int64_t v6 = (int64_t)*v5; // 0x12d816
    *(int32_t *)a1 = (int32_t)v4;
    int32_t * v7 = (int32_t *)(256 * v6 | a4 & -0xff01); // 0x12d81d
    *v7 = *v7 + (int32_t)v1;
    return (v4 + v6) % 256 | v4 & -256;
}

// Address range: 0x12d85e - 0x12d85f
int64_t function_12d85e(int64_t a1) {
    // 0x12d85e
    int64_t result; // 0x12d85e
    return result;
}

// Address range: 0x12d8a8 - 0x12d8ab
int64_t function_12d8a8(void) {
    // 0x12d8a8
    int64_t result; // 0x12d8a8
    return result;
}

// Address range: 0x12d8c9 - 0x12d8cd
int64_t function_12d8c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12d8c9
    int64_t result; // 0x12d8c9
    return result;
}

// Address range: 0x1f760a - 0x1f760f
int64_t function_1f760a(void) {
    // 0x1f760a
    int64_t v1; // 0x1f760a
    return v1 + 0xef26ff4d & 0xffffffff;
}

// Address range: 0x1f7676 - 0x1f7678
int64_t function_1f7676(void) {
    // 0x1f7676
    int64_t result; // 0x1f7676
    return result;
}

// Address range: 0x1f76e0 - 0x1f76e1
int64_t function_1f76e0(void) {
    // 0x1f76e0
    int64_t result; // 0x1f76e0
    return result;
}

// Address range: 0x1f76e4 - 0x1f76fa
int64_t function_1f76e4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1f76e4
    int64_t v1; // 0x1f76e4
    bool v2; // 0x1f76e4
    return v1 + 0xab6a33d + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x1f7709 - 0x1f770b
int64_t function_1f7709(void) {
    // 0x1f7709
    return function_1f76e0();
}

// Address range: 0x1f773c - 0x1f77a7
int64_t function_1f773c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a2 + 0x6f8fedab); // 0x1f773e
    int64_t result; // 0x1f773c
    int32_t v3 = result; // 0x1f773e
    *v2 = *v2 | v3;
    int64_t v4; // 0x1f773c
    *(char *)a3 = *(char *)&v4 + (char)((uint64_t)result / 256);
    if ((a5 & 4) == 0) {
        // 0x1f7750
        return result;
    }
    // 0x1f7798
    v4 = v3 >> 31;
    __asm_int(16);
    *(int32_t *)a1 = *(int32_t *)&v1;
    int64_t v5 = (a5 & (int64_t)&g2) == 0 ? 4 : -4; // 0x1f7767
    int64_t v6 = v5 + a1; // 0x1f7767
    int64_t v7 = v1 + v5; // 0x1f7767
    v1 = v7;
    int64_t result2 = __asm_hlt(v6, v7); // 0x1f7774
    *(int32_t *)-0x6860fec2ffff972a = (int32_t)result2;
    *(char *)v6 = *(char *)v7;
    return result2;
}

// Address range: 0x1f7817 - 0x1f7819
int64_t function_1f7817(int64_t result) {
    // 0x1f7817
    return result;
}

// Address range: 0x1f7888 - 0x1f7897
int64_t function_1f7888(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f7888
    int64_t v1; // 0x1f7888
    int64_t result = v1;
    int64_t v2 = a4;
    bool v3; // 0x1f7888
    *(int32_t *)result = (int32_t)result - (v3 ? 18 : 17);
    *(char *)v2 = *(char *)&v2 - 19;
    return result;
}

// Address range: 0x1f7899 - 0x1f78b5
int64_t function_1f7899(int64_t a1, int64_t a2) {
    // 0x1f7899
    int64_t v1; // 0x1f7899
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a2;
    char * v3 = (char *)(v2 - 0x6697af02); // 0x1f789b
    *v3 = *v3 & -60;
    *(char *)a1 = (char)*(int32_t *)-0x64fec2ffe6fc3bf7;
    return function_1f78c7();
}

// Address range: 0x1f78b5 - 0x1f78bc
int64_t function_1f78b5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1f78b5
    int64_t result; // 0x1f78b5
    char * v1 = (char *)(result + 0x59d3d4f1); // 0x1f78b5
    bool v2; // 0x1f78b5
    *v1 = (char)v2 - (char)(a4 / 256) + *v1;
    return result;
}

// Address range: 0x1f78c7 - 0x1f78d1
int64_t function_1f78c7(void) {
    // 0x1f78c7
    int64_t result; // 0x1f78c7
    bool v1; // 0x1f78c7
    *(int32_t *)result = (int32_t)v1;
    return result;
}

// Address range: 0x1f7915 - 0x1f7921
int64_t function_1f7915(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a2 + 0x2a7a8f39); // 0x1f7915
    int64_t result; // 0x1f7915
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x1f794f - 0x1f7950
int64_t function_1f794f(void) {
    // 0x1f794f
    int64_t result; // 0x1f794f
    return result;
}

// Address range: 0x1f7966 - 0x1f7969
int64_t function_1f7966(void) {
    // 0x1f7966
    int64_t result; // 0x1f7966
    return result;
}

// Address range: 0x1f796d - 0x1f79bf
int64_t function_1f796d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f796d
    int64_t v1; // 0x1f796d
    uint64_t v2 = v1;
    uint64_t v3 = v1;
    int64_t v4 = a1;
    char * v5 = (char *)(a2 + (int64_t)"8\b"); // 0x1f796d
    *v5 = *v5 & (char)a3;
    *(int32_t *)a1 = (int32_t)a3 + 1 + *(int32_t *)&v4;
    int32_t * v6 = (int32_t *)(v3 + 0x214523f); // 0x1f797b
    int32_t v7 = *v6; // 0x1f797b
    int32_t v8 = v2; // 0x1f797b
    int32_t v9 = v7 - v8; // 0x1f797b
    *v6 = v9;
    if (((v9 ^ v7) & (v7 ^ v8)) < 0) {
        // 0x1f79b3
        return __asm_wait();
    }
    // 0x1f7989
    *(char *)0x2b16a090 = *(char *)0x2b16a090 + (char)(v2 / 256);
    char v10 = *(char *)(a3 + 1); // 0x1f798f
    char * v11 = (char *)(256 * (int64_t)(v10 | (char)(v3 / 256)) | v3 & -0xff01); // 0x1f7992
    *v11 = *v11 + (char)v3;
    return function_c031b0b();
}

// Address range: 0x1f79e2 - 0x1f79e5
int64_t function_1f79e2(int64_t a1) {
    // 0x1f79e2
    int64_t result; // 0x1f79e2
    return result;
}

// Address range: 0x1f79e5 - 0x1f79ea
int64_t function_1f79e5(void) {
    // 0x1f79e5
    return function_167b3434();
}

// Address range: 0x1f79fc - 0x1f7a05
int64_t function_1f79fc(int64_t a1) {
    // 0x1f79fc
    int64_t result; // 0x1f79fc
    char * v1 = (char *)(result - 0x5d97a1f8); // 0x1f79fc
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x1f7a85 - 0x1f7aa9
int64_t function_1f7a85(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x4e2000f6); // 0x1f7a85
    *v1 = *v1 + (int32_t)a1;
    int64_t result = (int64_t)*(int32_t *)-0x5e21ee7ed49bff98; // 0x1f7a90
    char * v2 = (char *)(result + 0x4f013dc5); // 0x1f7aa0
    *v2 = *v2 + (char)a3;
    return result;
}

// Address range: 0x1f7b3f - 0x1f7b4b
int64_t function_1f7b3f(int64_t a1, int64_t a2) {
    uint32_t v1 = *(int32_t *)(a2 + 56); // 0x1f7b43
    int64_t v2; // 0x1f7b3f
    uint32_t v3 = (int32_t)v2;
    uint32_t v4 = 2 * v3; // 0x1f7b46
    int32_t v5 = v4 | (int32_t)(v1 > (int32_t)v2); // 0x1f7b46
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x1f7b46
    bool v7 = v1 > (int32_t)v2 ? v5 <= v3 : v4 < v3; // 0x1f7b46
    return 256 * (16 * (int64_t)((v3 & 8) != 0) | (int64_t)v7 | 64 * (int64_t)(v5 == 0) | 128 * (int64_t)(v5 < 0) | 4 * (int64_t)(v6 % 2 == 0)) | (int64_t)(v5 & -0xff01 | 512);
}

// Address range: 0x1f7b50 - 0x1f7b73
int64_t function_1f7b50(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1f7b50
    int64_t v1; // 0x1f7b50
    int64_t v2 = v1;
    int64_t v3 = v1;
    *(char *)v3 = 2 * (char)v3;
    int64_t v4; // 0x1f7b50
    uint32_t v5 = *(int32_t *)&v4; // 0x1f7b58
    int64_t v6 = v5; // 0x1f7b58
    *(char *)v6 = 2 * (char)v5;
    char * v7 = (char *)(a3 + 104 + v1); // 0x1f7b64
    *v7 = *v7 + (char)a4;
    char * v8 = (char *)(v6 + 23); // 0x1f7b6a
    *v8 = *v8 + (char)a3;
    return (v2 + a3 / 256) % 256 | v2 & 0xffffff00;
}

// Address range: 0x1f7b73 - 0x1f7b82
int64_t function_1f7b73(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1f7b73
    int64_t v1; // 0x1f7b73
    uint32_t v2 = (int32_t)v1;
    *(int32_t *)v1 = 2 * v2;
    char v3 = __asm_in((int16_t)a3); // 0x1f7b7a
    int32_t * v4 = (int32_t *)(v1 - 83); // 0x1f7b7b
    int32_t v5 = *v4; // 0x1f7b7b
    *v4 = v5 + (int32_t)(v2 < 0x4e8cb101) + (int32_t)(v1 & 0xffffff00 | (int64_t)v3);
    return function_1f7bfc(a1, a2, a3 & -256 | 51, v1, (int64_t)&g5);
}

// Address range: 0x1f7b86 - 0x1f7b88
int64_t function_1f7b86(void) {
    // 0x1f7b86
    int64_t result; // 0x1f7b86
    return result;
}

// Address range: 0x1f7bdc - 0x1f7be1
int64_t function_1f7bdc(void) {
    // 0x1f7bdc
    int64_t result; // 0x1f7bdc
    return result;
}

// Address range: 0x1f7bfc - 0x1f7cf7
int64_t function_1f7bfc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t result; // 0x1f7bfc
    bool v2; // 0x1f7bfc
    if (v2) {
        // 0x1f7c44
        *(char *)a1 = (char)a2;
        return result;
    }
    if (a4 != 0) {
        // 0x1f7c41
        return result;
    }
    int32_t * v3 = (int32_t *)(a2 + 0x1fc7b46); // 0x1f7cbb
    *v3 = -*v3;
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)result;
    return result;
}

// Address range: 0x1f7d31 - 0x1f7d39
int64_t function_1f7d31(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t result = __asm_in_133((int16_t)a3); // 0x1f7d31
    int64_t v1; // 0x1f7d31
    float80_t v2; // 0x1f7d31
    *(float32_t *)v1 = (float32_t)v2;
    *(int32_t *)a2 = (int32_t)a4;
    return result;
}

// Address range: 0x1f7d94 - 0x1f7d9c
int64_t function_1f7d94(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f7d94
    int64_t result; // 0x1f7d94
    int32_t * v1 = (int32_t *)(2 * a3 - 0x4be200f5 + result); // 0x1f7d94
    *v1 = *v1 - (int32_t)result;
    return result;
}

// Address range: 0x1f7dd2 - 0x1f7de7
int64_t function_1f7dd2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f7dd2
    int64_t v1; // 0x1f7dd2
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2; // 0x1f7dd2
    int64_t v3 = v2;
    *(char *)v3 = *(char *)&v2 + (char)v3;
    char * v4 = (char *)(v1 + 1); // 0x1f7dde
    *v4 = *v4 | 115;
    bool v5; // 0x1f7dd2
    return function_ffffffffe8d37e4f((v5 ? -4 : 4) + a1);
}

// Address range: 0x1f7e7c - 0x1f7e7f
int64_t function_1f7e7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f7e7c
    int64_t result; // 0x1f7e7c
    *(int32_t *)a3 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x1f7ee6 - 0x1f7eef
int64_t function_1f7ee6(int64_t a1, int64_t a2) {
    // 0x1f7ee6
    unknown_ffffffffb320bbec(a1, a2);
    return a1 & 0xffffffff;
}

// Address range: 0x1f7eff - 0x1f7f0a
int64_t function_1f7eff(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 0x1400d398); // 0x1f7eff
    int64_t v2; // 0x1f7eff
    *v1 = *v1 + (int32_t)v2;
    return function_ffffffffe8d9a5fa();
}

// Address range: 0x1f7f0a - 0x1f7f10
int64_t function_1f7f0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f7f0a
    int64_t result; // 0x1f7f0a
    int32_t * v1 = (int32_t *)(result + 8 * a2); // 0x1f7f0a
    *v1 = *v1 + (int32_t)a4;
    return result;
}

// Address range: 0x1f7faf - 0x1f7fb3
int64_t function_1f7faf(int64_t a1, int64_t a2) {
    // 0x1f7faf
    int64_t result; // 0x1f7faf
    *(int32_t *)a1 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x1f7ff9 - 0x1f8004
int64_t function_1f7ff9(int64_t a1, int64_t a2) {
    // 0x1f7ff9
    unknown_ffffffffb66cffff(a1, a2);
    int64_t v1; // 0x1f7ff9
    *(char *)a1 = (char)v1;
    bool v2; // 0x1f7ff9
    int64_t v3 = v2 ? -1 : 1; // 0x1f7ffe
    return function_70098227(v3 + a1, v3 + a2);
}

// Address range: 0x1f801d - 0x1f802b
int64_t function_1f801d(int64_t a1) {
    // 0x1f801d
    int64_t result; // 0x1f801d
    int32_t * v1 = (int32_t *)(result - 0x6184a644); // 0x1f801d
    *v1 = *v1 - (int32_t)result;
    return result;
}

// Address range: 0x1f802f - 0x1f8032
int64_t function_1f802f(int64_t a1) {
    // 0x1f802f
    int64_t result; // 0x1f802f
    return result;
}

// Address range: 0x1f8040 - 0x1f8041
int64_t function_1f8040(int64_t a1) {
    // 0x1f8040
    int64_t result; // 0x1f8040
    return result;
}

// Address range: 0x1f8063 - 0x1f80b1
int64_t function_1f8063(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f8063
    int64_t v1; // 0x1f8063
    int32_t v2 = v1; // 0x1f8063
    uint32_t v3 = (int32_t)a4; // 0x1f8063
    int32_t v4 = v2 + v3; // 0x1f8063
    int64_t v5 = __asm_int1(); // 0x1f8065
    if (v4 < 0 == ((v4 ^ v2) & (v4 ^ v3)) < 0) {
        int64_t v6 = unknown_ffffffffd435a271(); // 0x1f8068
        uint32_t v7 = v3 % 32; // 0x1f806d
        if (v7 != 0) {
            int32_t * v8 = (int32_t *)v6; // 0x1f806d
            uint32_t v9 = *v8; // 0x1f806d
            *v8 = v9 >> 32 - v7 | v9 << v7;
        }
        return unknown_618b975();
    }
    uint32_t v10 = v3 % 32; // 0x1f80a5
    int64_t result; // 0x1f8063
    if (v10 == 0) {
        // .thread
        result = __asm_int1();
    } else {
        uint32_t v11 = (int32_t)v5;
        uint32_t v12 = 32 - v10;
        *(int32_t *)v5 = v11 >> v12 | v11 << v10;
        int64_t v13 = __asm_int1(); // 0x1f80a7
        uint32_t v14 = (int32_t)v13;
        *(int32_t *)v13 = v14 >> v12 | v14 << v10;
        result = v13;
    }
    __asm_outsd((int16_t)a3, g1);
    return result;
}

// Address range: 0x1f80c1 - 0x1f8127
int64_t function_1f80c1(int64_t a1) {
    // 0x1f80c1
    int64_t result; // 0x1f80c1
    bool v1; // 0x1f80c1
    if (v1 || v1) {
        // 0x1f8122
        return result;
    }
    // 0x1f80c4
    return result & -256 | (int64_t)*(char *)0x789a4f181f013d00;
}

// Address range: 0x1f8128 - 0x1f8171
int64_t function_1f8128(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f8128
    int64_t v1; // 0x1f8128
    int32_t * v2 = (int32_t *)(2 * a1 + 81 + v1); // 0x1f812e
    *v2 = *v2 + (int32_t)a4;
    int64_t v3 = a4 & -0xff01 | (int64_t)&g3; // 0x1f8132
    int32_t * v4 = (int32_t *)((unknown_3d241f3e(a5) + v1 & 0xffffffff) + 0x16233001); // 0x1f813f
    *v4 = *v4 + (int32_t)a2;
    __asm_int3();
    int64_t v5; // 0x1f8128
    int32_t v6 = *(int32_t *)&v5; // 0x1f814d
    bool v7; // 0x1f8128
    int64_t v8 = v7 ? 0xfffffffc : 4; // 0x1f814d
    char v9 = (char)v6 | -24; // 0x1f8151
    *(char *)-0x17078961 = v9 | *(char *)-0x17078961;
    int32_t * v10 = (int32_t *)(v3 - 45 + v1); // 0x1f8157
    *v10 = *v10 + (int32_t)a3;
    unsigned char v11 = v9 + -2 - *(char *)(v3 + 0x1e894b9); // 0x1f815b
    int32_t v12 = *(int32_t *)(((int64_t)v11 | (int64_t)(v6 & -256)) + 0x104d77); // 0x1f8164
    *(char *)a5 = v11;
    int64_t v13 = v7 ? -1 : 1; // 0x1f816a
    int64_t result = function_1f8178(v13 + a5, v12 + (int32_t)(v8 + a2), a3, (int64_t)&g5); // 0x1f816f
    return result;
}

// Address range: 0x1f8172 - 0x1f8178
int64_t function_1f8172(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x1f8172
    int64_t result; // 0x1f8172
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(result - 0x176825c6); // 0x1f8172
        uint32_t v3 = *v2; // 0x1f8172
        bool v4; // 0x1f8172
        *v2 = (int32_t)v4 << v1 - 1 | v3 << v1 | (int32_t)((int64_t)v3 >> (int64_t)(33 - v1));
    }
    return result;
}

// Address range: 0x1f8178 - 0x1f81d2
int64_t function_1f8178(int64_t a1, int32_t a2, int64_t a3, int64_t a4) {
    // 0x1f8178
    int64_t v1; // 0x1f8178
    int64_t v2 = v1 + a1 & 0xffffffff; // 0x1f8178
    uint32_t v3 = (int32_t)a3 - *(int32_t *)(v2 - 86); // 0x1f817d
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x1f817d
    int64_t result = unknown_4569f786(); // 0x1f8180
    if (v4 % 2 != 0) {
        // 0x1f8187
        return result;
    }
    int32_t * v5 = (int32_t *)(v2 + 0xc8a0c95); // 0x1f81c3
    *v5 = *v5 + (int32_t)v1;
    int32_t * v6 = (int32_t *)(int64_t)v3; // 0x1f81cb
    *v6 = *v6 + (int32_t)a1;
    return unknown_10449d3();
}

// Address range: 0x1f81fe - 0x1f81ff
int64_t function_1f81fe(void) {
    // 0x1f81fe
    int64_t result; // 0x1f81fe
    return result;
}

// Address range: 0x1f820c - 0x1f8224
int64_t function_1f820c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 - 28); // 0x1f820c
    bool v2; // 0x1f820c
    *v1 = (int32_t)v2 - (int32_t)a2 + *v1;
    int64_t v3; // 0x1f820c
    return v3 & -41;
}

// Address range: 0x1f8231 - 0x1f8258
int64_t function_1f8231(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1f8231
    unknown_1f2e6e37();
    int64_t v1; // 0x1f8231
    *(int32_t *)a1 = 2 * (int32_t)v1;
    int64_t v2 = __asm_int1() + 0xbd28216c; // 0x1f8246
    int32_t * v3 = (int32_t *)(a1 - 0x4365986e); // 0x1f8250
    *v3 = *v3 + (int32_t)a4;
    return (v2 - a4 / 256) % 256 | v2 & 0xffffff00;
}

// Address range: 0x1f8269 - 0x1f826a
int64_t function_1f8269(void) {
    // 0x1f8269
    int64_t result; // 0x1f8269
    return result;
}

// Address range: 0x1f8271 - 0x1f8274
int64_t function_1f8271(void) {
    // 0x1f8271
    int64_t v1; // 0x1f8271
    return v1 ^ 213;
}

// Address range: 0x1f8275 - 0x1f8278
int64_t function_1f8275(void) {
    // 0x1f8275
    int64_t v1; // 0x1f8275
    return function_1f8281(v1, v1, v1, v1, (int64_t)&g5);
}

// Address range: 0x1f8279 - 0x1f8281
int64_t function_1f8279(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f8279
    int64_t result; // 0x1f8279
    *(int32_t *)a2 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x1f8281 - 0x1f82d9
int64_t function_1f8281(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f8281
    int64_t v1; // 0x1f8281
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)v1;
    int64_t v3; // 0x1f8281
    unsigned char v4 = llvm_ctpop_i8((char)*(int32_t *)&v3 - 22); // 0x1f8283
    v3 = 0x1e80b3b;
    int64_t result = v2 & -256 | (int64_t)__asm_in_134(-77); // 0x1f828b
    if (v4 % 2 != 0) {
        // 0x1f82f6
        return result;
    }
    char v5 = a4; // 0x1f828f
    uint64_t v6 = v1 / 256; // 0x1f828f
    *(char *)0x1e80b3b = v5;
    int64_t v7 = result; // 0x1f8293
    if (((v5 - (char)v6 ^ v5) & (char)(v6 ^ a4)) >= 0) {
        v7 = function_1f8269();
    }
    // 0x1f8295
    *(int32_t *)a1 = __asm_insd(2875);
    int16_t v8 = 256 * (int16_t)v7 >> 8; // 0x1f8297
    int32_t * v9 = (int32_t *)(a2 + 0x80ad87d); // 0x1f8299
    uint32_t v10 = *v9; // 0x1f8299
    uint32_t v11 = v10 + (int32_t)a1; // 0x1f8299
    *v9 = v11;
    __asm_int(-117);
    int32_t * v12 = (int32_t *)v3; // 0x1f82a1
    int64_t v13; // 0x1f8281
    int32_t v14 = (int64_t)&v13; // 0x1f82a1
    *v12 = *v12 - ((int32_t)(v11 < v10) | v14);
    int32_t v15 = __asm_int3(); // 0x1f82a6
    __asm_out(-106, v15);
    int32_t * v16 = (int32_t *)(v1 + 21); // 0x1f82aa
    *v16 = *v16 + v15;
    *(int32_t *)-0x17ae013cf7f090f7 = v15;
    int32_t * v17 = (int32_t *)(v3 & -0x10000 | (int64_t)(v8 * v8 & 0x7f00 | 231)); // 0x1f82b9
    *v17 = *v17 + v14;
    bool v18; // 0x1f8281
    unknown_ffffffffa8261ccb((v18 ? -4 : 4) + a1);
    __asm_in_133(-0x3005);
    __asm_int1();
    return unknown_58a6ceda();
}

// Address range: 0x1f82da - 0x1f82e1
int64_t function_1f82da(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1f82da
    return a3 & 0xffffffff;
}

// Address range: 0x1f82f3 - 0x1f82f6
int64_t function_1f82f3(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 63); // 0x1f82f3
    int64_t result; // 0x1f82f3
    *v1 = *v1 - (int32_t)result;
    return result;
}

// Address range: 0x1f82f7 - 0x1f832c
int64_t function_1f82f7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1f82f7
    int64_t result; // 0x1f82f7
    char * v1 = (char *)(a1 - 0x29fec28c); // 0x1f8326
    *v1 = *v1 + (char)(a3 / 256);
    return result;
}

// Address range: 0x1f8337 - 0x1f83b4
int64_t function_1f8337(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f8337
    int64_t v1; // 0x1f8337
    char v2 = (uint64_t)v1 / 256; // 0x1f833e
    *(char *)0x6f117745 = *(char *)0x6f117745 + v2;
    int16_t v3 = a3; // 0x1f8344
    int64_t v4 = (int64_t)__asm_in(v3) + a1; // 0x1f8348
    int64_t v5 = a4 & -0xff01 | (int64_t)&g4; // 0x1f834a
    *(int32_t *)a1 = __asm_insd(v3);
    char * v6 = (char *)((v4 & 0xffffffff) - 35); // 0x1f8354
    *v6 = *v6 + v2;
    int64_t result = v4 & 0xff972dc9 | 0x68d234; // 0x1f835e
    *(int32_t *)0xfefddfc7 = *(int32_t *)0xfefddfc7 | -0x1022021;
    int32_t * v7 = (int32_t *)v5; // 0x1f836a
    int32_t v8 = *v7; // 0x1f836a
    int32_t v9 = v5; // 0x1f836a
    int32_t v10 = v8 + v9; // 0x1f836a
    *v7 = v10;
    if (v10 < 0 == ((v10 ^ v8) & (v10 ^ v9)) < 0) {
        // 0x1f8397
        return result;
    }
    // 0x1f83af
    return (result + 139) % 256 | result & 0xffffff00;
}

// Address range: 0x1f83bb - 0x1f83c6
int64_t function_1f83bb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1f83bb
    return function_887779();
}

// Address range: 0x1f8411 - 0x1f8412
int64_t function_1f8411(void) {
    // 0x1f8411
    int64_t result; // 0x1f8411
    return result;
}

// Address range: 0x1f8427 - 0x1f8453
int64_t function_1f8427(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x1f8427
    bool v3; // 0x1f8427
    if (v3) {
        v2 = function_1f8411();
    }
    int32_t * v4 = (int32_t *)(a3 + 19); // 0x1f8429
    int64_t v5; // 0x1f8427
    *v4 = *v4 + (int32_t)v5;
    char * v6 = (char *)((v2 & 0xffffffff) - 126); // 0x1f842e
    *v6 = *v6 | (char)a4;
    *(char *)a1 = *(char *)&v1;
    int64_t v7 = v3 ? -1 : 1; // 0x1f8431
    int64_t v8 = v7 + a1; // 0x1f8431
    int64_t v9 = v1 + v7; // 0x1f8431
    unknown_ffffffffd35e3039(v8, v9);
    char * v10 = (char *)(v5 + 40); // 0x1f8438
    *v10 = *v10 + (char)(a4 / 256);
    int64_t v11 = v8 + v7; // 0x1f843b
    int64_t v12 = v9 + v7; // 0x1f843b
    int64_t v13 = unknown_ffffffffd4d16642(v11, v12); // 0x1f843c
    char * v14 = (char *)(v11 + 2 * v5); // 0x1f8443
    *v14 = (char)v13 + 111 + *v14;
    __asm_int1();
    unknown_ffffffffb855384d();
    char v15 = *(char *)v12; // 0x1f844c
    int64_t result = function_1f8497(a5, v12, a3 & -256 | (int64_t)((char)a3 - v15), a4, (int64_t)&g5); // 0x1f8451
    return result;
}

// Address range: 0x1f845d - 0x1f8465
int64_t function_1f845d(int64_t a1) {
    // 0x1f845d
    return unknown_176d4863(a1);
}

// Address range: 0x1f8497 - 0x1f850e
int64_t function_1f8497(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f8497
    *(int32_t *)-0x53c0d47 = *(int32_t *)-0x53c0d47 + (int32_t)a4;
    __asm_in((int16_t)a3);
    return unknown_ffffffff83f8a4a5();
}

// Address range: 0x1f850e - 0x1f851b
int64_t function_1f850e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f850e
    int64_t result; // 0x1f850e
    return result;
}

// Address range: 0x1f85bc - 0x1f85bd
int64_t function_1f85bc(int64_t a1) {
    // 0x1f85bc
    int64_t result; // 0x1f85bc
    return result;
}

// Address range: 0x1f85cc - 0x1f85cf
int64_t function_1f85cc(void) {
    // 0x1f85cc
    int64_t result; // 0x1f85cc
    return result;
}

// Address range: 0x1f85e5 - 0x1f85e9
int64_t function_1f85e5(int64_t a1) {
    // 0x1f85e5
    int64_t result; // 0x1f85e5
    return result;
}

// Address range: 0x3bdfb5 - 0x3bdfba
int64_t function_3bdfb5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3bdfb5
    int64_t v1; // 0x3bdfb5
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(a4 - 71); // 0x3bdfb7
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x3bdfbb - 0x3be112
int64_t function_3bdfbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x3bdfbb
    int64_t v1; // 0x3bdfbb
    int64_t v2 = v1 ^ a3 & 0xff00; // 0x3bdfbb
    unsigned char v3 = *(char *)v2 + (char)v1; // 0x3bdfbd
    char * v4 = (char *)(v2 & -256 | (int64_t)v3); // 0x3bdfbf
    *v4 = *v4 + v3;
    char * v5 = (char *)(a4 + 1); // 0x3bdfc1
    *v5 = *v5 + (char)a4;
    __asm_int1();
    int64_t v6 = *(int64_t *)a7; // 0x3be0f1
    *(int64_t *)(a7 - 8) = v6;
    *(int64_t *)(a7 - 16) = v6;
    int64_t v7; // bp+24, 0x3bdfbb
    return function_c823b(a1, a7, a3, a4, a5, a8, (int64_t)&v7);
}

// Address range: 0x3be112 - 0x3be259
int64_t function_3be112(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3be112
    return function_c823b(a1, a2, a3, a4, a5, a6, a5);
}

// Address range: 0x3be259 - 0x3be3aa
int64_t function_3be259(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3be259
    int64_t v1; // 0x3be259
    return function_c823b(a1, a2, a3, a4, a5, a6, v1);
}

// Address range: 0x3be3aa - 0x3be4eb
int64_t function_3be3aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a7; // bp-40, 0x3be430
    int64_t v2 = (int64_t)&v1; // 0x3be465
    int64_t v3 = v2 - 8; // 0x3be46d
    int64_t * v4 = (int64_t *)v3; // 0x3be46d
    *v4 = 0x45b18a4c;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x3be47d
    *v5 = a7;
    int64_t v6 = v2 + 8; // 0x3be480
    int64_t * v7 = (int64_t *)v6; // 0x3be480
    *v7 = *v4;
    *v5 = v3;
    *v4 = 0x3b8a4f;
    *(int64_t *)(v2 + 32) = v1;
    v1 = *v7;
    *v4 = a3;
    *v5 = v6;
    int64_t v8 = *v4; // 0x3be4b5
    *(int64_t *)(v2 - 24) = v8;
    *v4 = v8;
    v1 = v2 + 16;
    return function_c823b(a1, a2, v8, a4, a5, a6, 0x5fa1473a);
}

// Address range: 0x3be4eb - 0x3be65e
int64_t function_3be4eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3be4eb
    int64_t v1; // 0x3be4eb
    return function_c823b(a1, a2, 310, a4, a5, v1, v1);
}

// Address range: 0x3be65e - 0x3be7ef
int64_t function_3be65e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3be65e
    return function_c823b(a1, a2, a3, a4, a5, a6, a7);
}

// Address range: 0x3be7ef - 0x3be940
int64_t function_3be7ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3be7ef
    return function_c823b(a1, a2, a3, a4, a5, 310, 0x3b918e);
}

// Address range: 0x3be940 - 0x3bea79
int64_t function_3be940(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3be940
    int64_t v1; // bp-72, 0x3be940
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x3be940
    return function_c823b(a1, a2, a3, a4, v2, v2, 0x5bc46926);
}

// Address range: 0x3bea79 - 0x3bebdb
int64_t function_3bea79(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3bea79
    bool v1; // 0x3bea79
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x3bea79
    int64_t v3; // bp-40, 0x3bea79
    int64_t v4 = (int64_t)&v3; // 0x3beb38
    int64_t * v5 = (int64_t *)(v4 + 16); // 0x3beb40
    int64_t v6 = *v5; // 0x3beb40
    int64_t * v7 = (int64_t *)(v4 - 8); // 0x3beb40
    *v7 = v6;
    int64_t * v8 = (int64_t *)(v4 - 16); // 0x3beb44
    *v8 = 0xce4875b;
    int64_t * v9 = (int64_t *)(v4 - 24); // 0x3beb69
    int64_t * v10 = (int64_t *)(v4 - 32); // 0x3beb6e
    *v10 = v2;
    *v9 = v2;
    v3 = *v8;
    *v9 = a3;
    *v10 = a4;
    *(int64_t *)(v4 - 40) = v6 ^ 0x3f266319;
    *v8 = v6;
    *v5 = v6;
    *v8 = *v7;
    *v7 = v3;
    *v8 = v4;
    int64_t v11; // 0x3bea79
    return function_c823b(0x2ccf952f, a2, *v9, *v10, v11, v11, v3);
}

// Address range: 0x3bebdb - 0x3bed6f
int64_t function_3bebdb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3bebdb
    return function_c823b(a1, a2, a3, a4, a5, a6, 0x3acaba);
}

// Address range: 0x3bed6f - 0x3bed74
int64_t function_3bed6f(void) {
    // 0x3bed6f
    int64_t result; // 0x3bed6f
    return result;
}

// Address range: 0x3bed82 - 0x3bed83
int64_t function_3bed82(int64_t a1) {
    // 0x3bed82
    int64_t result; // 0x3bed82
    return result;
}
