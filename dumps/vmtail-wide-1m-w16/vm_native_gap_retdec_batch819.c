/*
 * Targeted RetDec C for native executable gap queue batch 819.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x19e085-0x19e285 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19e285-0x19e485 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19e485-0x19e685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19e885-0x19ea85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33f473-0x33f673 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33f673-0x33f873 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33f873-0x33fa73 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33fa73-0x33fc73 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g8;
extern int g9;
extern int g10;
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

int64_t function_10cfb93e();
int64_t function_170f71c();
int64_t function_19e085(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19e09b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_19e17b(void);
int64_t function_19e1b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19e1ca(void);
int64_t function_19e1e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19e2ea(void);
int64_t function_19e2f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19e305(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19e33e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19e394(void);
int64_t function_19e39c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_19e3d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19e423(void);
int64_t function_19e47f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_19e566(void);
int64_t function_19e57e(int64_t a1);
int64_t function_19e618(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19e885(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19e89c(void);
int64_t function_19e8b4(void);
int64_t function_19e8c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19e8d9(void);
int64_t function_19e916(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19e93a(void);
int64_t function_19e93c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_19e970(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19e99c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19e9b8(int64_t a1);
int64_t function_19ea07(void);
int64_t function_19ea49(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2025947();
int64_t function_33f42c();
int64_t function_33f473(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33f52c(void);
int64_t function_33f542(void);
int64_t function_33f548(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_33f5d6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_33f656(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33f67b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33f6e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33f743(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33f7b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33f826(void);
int64_t function_33f834(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33f83e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33f983(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33f994(void);
int64_t function_33f9be(int64_t a1);
int64_t function_33fa22(int64_t a1, int64_t a2);
int64_t function_33fa48(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33fa88(void);
int64_t function_33fad0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33fb16(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33fbc1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33fc05(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d4a8e6b();
int64_t function_421b202a();
int64_t function_57121cdd();
int64_t function_6435e057();
int64_t function_69f93862();
int64_t function_95224bc();
int64_t function_f1af65f();
int64_t function_ffffffffab6d08d4();
int64_t function_ffffffffad2e767e();
int64_t function_ffffffffd0d1dfd5();
int64_t unknown_160beb84();
int64_t unknown_169731f4();
int64_t unknown_28f1efe1();
int64_t unknown_2d11f34f();
int64_t unknown_2ffb106();
int64_t unknown_348c1feb();
int64_t unknown_38e3f793();
int64_t unknown_3ab01afc();
int64_t unknown_3b0e2cbd();
int64_t unknown_3de36da4();
int64_t unknown_40d69ed0();
int64_t unknown_53ecfda6();
int64_t unknown_5d148831();
int64_t unknown_5e54998e();
int64_t unknown_5ebea5ba();
int64_t unknown_634569b();
int64_t unknown_6514e239();
int64_t unknown_65880c15();
int64_t unknown_75ab3d41();
int64_t unknown_7c304520();
int64_t unknown_acbbe37();
int64_t unknown_ffffffff8324849f();
int64_t unknown_ffffffff8ea96286();
int64_t unknown_ffffffffa0a343e8();
int64_t unknown_ffffffffa480a17d();
int64_t unknown_ffffffffad36e24a();
int64_t unknown_ffffffffb8a3859c();
int64_t unknown_ffffffffbf1bc9ca();
int64_t unknown_ffffffffc45d6cd5();
int64_t unknown_ffffffffc57070bb();
int64_t unknown_ffffffffc7dc7d29();
int64_t unknown_ffffffffcab3e1f7();
int64_t unknown_ffffffffd42ae6b1();
int64_t unknown_ffffffffd67e01dc();
int64_t unknown_ffffffffe6200690();
int64_t unknown_ffffffffe8ecc11e();

// Address range: 0x19e085 - 0x19e09a
int64_t function_19e085(int64_t a1, int64_t a2, int64_t a3) {
    // 0x19e085
    int64_t v1; // 0x19e085
    int32_t * v2 = (int32_t *)(a3 - 83 + v1); // 0x19e085
    *v2 = *v2 & (int32_t)a3;
    __asm_in((int16_t)a3);
    *(char *)0x16d8d79b = *(char *)0x16d8d79b + (char)(v1 / 256);
    return a3 & 0xffffffff;
}

// Address range: 0x19e09b - 0x19e178
int64_t function_19e09b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x19e09b
    int64_t v1; // 0x19e09b
    uint64_t v2 = v1;
    int64_t v3 = v1;
    int64_t v4 = a3;
    *(int32_t *)a1 = (int32_t)((v3 + 149) % 256 | v3 & 0xffffff00);
    bool v5; // 0x19e09b
    int64_t v6 = v5 ? -4 : 4; // 0x19e09d
    int64_t v7 = v6 + a1; // 0x19e09d
    int64_t v8 = v6 + a2; // 0x19e0a7
    int32_t v9 = *(int32_t *)0x491bc8b7 + (int32_t)v7; // 0x19e0b0
    *(int32_t *)0x491bc8b7 = v9;
    uint64_t v10 = __asm_wait(v7, v8); // 0x19e0b6
    if (v9 == 0) {
        // 0x19e0bb
        __asm_out((int16_t)v4, (int32_t)v10);
        return (int64_t)*(int32_t *)0x7800f301e88d123a;
    }
    char v11 = *(char *)&v4; // 0x19e0a0
    int64_t v12 = 256 * (int64_t)(v11 + -1 - (char)(v2 / 256)) | v2 & -0xff01; // 0x19e0a0
    int64_t v13 = a5 & -256 | 115; // 0x19e0b7
    char * v14 = (char *)v12; // 0x19e0e7
    char v15 = *v14 & 115; // 0x19e0e7
    *v14 = v15;
    if (v15 == 0) {
        int32_t * v16 = (int32_t *)(v12 - 86); // 0x19e0d7
        *v16 = *v16 + (int32_t)v12;
        unsigned char v17 = *(char *)v8; // 0x19e0db
        char v18 = *(char *)(v13 - 1); // 0x19e0dd
        return v10 & -256 | (int64_t)(v18 + (char)v10 + (char)(v17 < 114));
    }
    uint32_t v19 = (int32_t)v1; // 0x19e0eb
    int32_t v20 = v4; // 0x19e0eb
    int32_t v21 = v20 + v19; // 0x19e0eb
    if (v21 < 0 == ((v21 ^ v19) & (v21 ^ v20)) < 0 != v21 != 0) {
        // 0x19e0f3
        *(int32_t *)v7 = __asm_insd((int16_t)v4);
        uint64_t v22 = v10 / 2; // 0x19e0f6
        return (v4 / 256 | v22) % 256 | v22 & 0x7fffff00;
    }
    uint32_t v23 = (int32_t)(unknown_2ffb106() & 0xffff0000 | (v21 < v19 ? 255 : 0)) - 0x17c54ba5; // 0x19e109
    uint32_t result = v23 + (int32_t)v8; // 0x19e10e
    char * v24 = (char *)(v13 + 118); // 0x19e110
    *v24 = *v24 + 115 + (char)(result < v23);
    return result;
}

// Address range: 0x19e17b - 0x19e17c
int64_t function_19e17b(void) {
    // 0x19e17b
    int64_t result; // 0x19e17b
    return result;
}

// Address range: 0x19e1b3 - 0x19e1c9
int64_t function_19e1b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19e1b3
    unknown_ffffffffc57070bb();
    uint64_t v1 = unknown_ffffffffbf1bc9ca(); // 0x19e1c2
    int64_t v2; // 0x19e1b3
    return v1 & -256 | (int64_t)*(char *)(v1 % 256 + v2);
}

// Address range: 0x19e1ca - 0x19e1cf
int64_t function_19e1ca(void) {
    // 0x19e1ca
    return function_ffffffffd0d1dfd5();
}

// Address range: 0x19e1e0 - 0x19e250
int64_t function_19e1e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19e1e0
    int64_t v1; // 0x19e1e0
    char v2 = v1 ^ a4; // 0x19e1e0
    *(char *)a4 = v2;
    unknown_ffffffffa0a343e8();
    if (v2 != 0) {
        // 0x19e249
        return unknown_2d11f34f();
    }
    int32_t * v3 = (int32_t *)(a2 + 0x7df42a41); // 0x19e1eb
    *v3 = *v3 >> 1;
    int64_t v4 = unknown_ffffffffcab3e1f7(); // 0x19e1f1
    __asm_fldenv(*(int224_t *)(v4 + 5));
    *(int32_t *)a1 = (int32_t)v4;
    int32_t * v5 = (int32_t *)(a2 - 0x1b6d2032); // 0x19e202
    bool v6; // 0x19e1e0
    *v5 = *v5 | (int32_t)((v6 ? 0xfffffffc : 4) + a1);
    *(int32_t *)(a4 - 34 + (2 * v4 & 0x1fc2ecfa4 | 0x3d1305a)) = (int32_t)a4;
    __asm_in(((int16_t)a3 % 256 | (int16_t)&g2) - (int16_t)a4);
    *(int32_t *)0x5c0091c2973ede3d = (int32_t)unknown_65880c15();
    return unknown_5d148831();
}

// Address range: 0x19e2ea - 0x19e2eb
int64_t function_19e2ea(void) {
    // 0x19e2ea
    int64_t result; // 0x19e2ea
    return result;
}

// Address range: 0x19e2f6 - 0x19e304
int64_t function_19e2f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 - 0x277cc92e); // 0x19e2f6
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x19e2f6
    int32_t * v2 = (int32_t *)(result + 8 * a1); // 0x19e2fe
    *v2 = *v2 + (int32_t)a3;
    return result;
}

// Address range: 0x19e305 - 0x19e32a
int64_t function_19e305(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19e305
    int64_t v1; // 0x19e305
    int32_t v2 = v1;
    *(int32_t *)v1 = v2 - (int32_t)v1;
    int64_t v3; // 0x19e305
    *(int32_t *)a2 = *(int32_t *)&v3 ^ v2;
    return function_421b202a();
}

// Address range: 0x19e33e - 0x19e37d
int64_t function_19e33e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x19e33e
    bool v3; // 0x19e33e
    int64_t v4 = v2 & -0xff01 | 256 * (64 * (int64_t)v3 | 128 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3) | 512; // 0x19e33e
    int64_t v5 = 0x17bdb53f; // bp-8, 0x19e344
    int32_t * v6 = (int32_t *)(a1 + 39); // 0x19e345
    uint32_t v7 = *v6; // 0x19e345
    *v6 = v7 / 2 | 0x80000000 * v7;
    *(char *)(v2 - 100 + v2) = -75;
    char * v8 = (char *)((int64_t)&v5 + 0x17bdb53f); // 0x19e34f
    *v8 = (char)(v2 / 256);
    unsigned char v9 = *(char *)v4 + (char)v2; // 0x19e352
    for (int64_t i = 0x17bdb53f; i > 0; i--) {
        __asm_outsd((int16_t)a3, *(int32_t *)&v1);
    }
    int64_t v10 = v4 & -256 | (int64_t)v9; // 0x19e352
    if ((int32_t)v10 < -0x1a611eff) {
        int64_t v11 = 256 * (int64_t)*v8 | v2 & -0xff01; // 0x19e34f
        int32_t * v12 = (int32_t *)v11; // 0x19e35d
        *v12 = *v12 + (int32_t)v11;
        return function_19e39c(a1, v1, a3, 0, (int64_t)&g10);
    }
    char * v13 = (char *)v10; // 0x19e368
    *v13 = *v13 + v9;
    unknown_ffffffffa480a17d();
    return a3 & 0xffffffff;
}

// Address range: 0x19e394 - 0x19e395
int64_t function_19e394(void) {
    // 0x19e394
    int64_t result; // 0x19e394
    return result;
}

// Address range: 0x19e39c - 0x19e3bb
int64_t function_19e39c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x19e39c
    unknown_53ecfda6();
    char * v1 = (char *)(a1 + 0x7a7f0a47); // 0x19e3a5
    bool v2; // 0x19e39c
    *v1 = (char)(bool)v2 + (char)(a4 / 256) + *v1;
    unknown_ffffffffd42ae6b1();
    int64_t result = __asm_wait(a1, a2); // 0x19e3b9
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x19e3d9 - 0x19e3fd
int64_t function_19e3d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x19e3d9
    int64_t v1; // 0x19e3d9
    uint64_t v2 = v1;
    int64_t v3 = a4 - 1; // 0x19e3d9
    bool v4; // 0x19e3d9
    if (v3 == 0 || v4) {
        unsigned char v5 = (char)v1; // 0x19e3db
        char v6 = v1 / 256; // 0x19e3db
        char v7 = v4; // 0x19e3db
        unsigned char v8 = v7 + v6; // 0x19e3db
        unsigned char v9 = v5 - v8; // 0x19e3db
        bool v10 = v4 ? v8 != -1 | v9 - v7 > v5 : v8 > v5; // 0x19e3db
        int64_t v11 = v1 & -256 | (int64_t)v9; // 0x19e3db
        char * v12 = (char *)v11; // 0x19e3dd
        *v12 = (char)v10 - (char)(v2 / 256) + *v12;
        *(char *)-0x5fe43389 = *(char *)-0x5fe43389 + (char)a3;
        char * v13 = (char *)v3; // 0x19e3e7
        *v13 = *v13 ^ (char)v2;
        return v11 & -0xff01 | 256 * (int64_t)(v9 | v6);
    }
    int64_t result = unknown_3ab01afc(); // 0x19e3f6
    *(int32_t *)a3 = (int32_t)a1;
    return result;
}

// Address range: 0x19e423 - 0x19e424
int64_t function_19e423(void) {
    // 0x19e423
    int64_t result; // 0x19e423
    return result;
}

// Address range: 0x19e47f - 0x19e4e8
int64_t function_19e47f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x19e47f
    int64_t v1; // 0x19e47f
    uint64_t v2 = v1;
    uint32_t v3 = (int32_t)a4;
    uint32_t v4 = v3 % 32; // 0x19e481
    int64_t v5 = a4; // 0x19e481
    int32_t v6 = v1 & a4; // 0x19e481
    bool v7 = false; // 0x19e481
    bool v8 = false; // 0x19e481
    if (v4 != 0) {
        v6 = v3 << v4;
        v5 = v6;
        v7 = v4 == 1 == (v6 < 0 != v3 << v4 - 1 < 0);
        v8 = v3 << v4 - 1 < 0;
    }
    int32_t v9 = v6;
    int64_t result = unknown_ffffffffe6200690(0x9fec0123); // 0x19e48a
    if (v9 < 0 == v7 == (v9 != 0)) {
        // 0x19e4b2
        if (v9 != 0 && !v8) {
            // 0x19e4e5
            return result;
        }
        char v10 = *(char *)(a2 - 67); // 0x19e4b4
        unknown_3b0e2cbd();
        int32_t * v11 = (int32_t *)((256 * (int64_t)(v10 ^ (char)(v2 / 256)) | v2 & -0xff01) + 0x501140d20); // 0x19e4c5
        *v11 = *v11 - 0x6013fedd;
        // 0x19e4d1
        return unknown_ffffffffc45d6cd5() + v1 & 0xffffffff;
    }
    // 0x19e491
    *(int32_t *)result = (int32_t)v1;
    if ((char)a5 < 0 == ((a5 & (int64_t)L"\n2") != 0)) {
        // 0x19e4d1
        return result + v1 & 0xffffffff;
    }
    int64_t result2 = unknown_ffffffff8324849f(); // 0x19e499
    int64_t v12; // 0x19e47f
    *(char *)(v12 + 8 * (result % 256 ^ v5)) = (char)result2;
    int64_t v13 = v12;
    *(char *)v13 = *(char *)&v12 + (char)v13;
    return result2;
}

// Address range: 0x19e566 - 0x19e56b
int64_t function_19e566(void) {
    // 0x19e566
    return function_3d4a8e6b();
}

// Address range: 0x19e57e - 0x19e581
int64_t function_19e57e(int64_t a1) {
    // 0x19e57e
    int64_t result; // 0x19e57e
    return result;
}

// Address range: 0x19e618 - 0x19e64b
int64_t function_19e618(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x19e618
    unknown_ffffffffe8ecc11e();
    bool v1; // 0x19e618
    int64_t v2 = v1 ? -1 : 1; // 0x19e622
    int64_t v3 = unknown_ffffffffc7dc7d29(v2 + a1, v2 + a2); // 0x19e623
    int64_t v4; // 0x19e618
    unsigned char v5 = llvm_ctpop_i8((char)(*(int32_t *)(v4 + 0x1e8dfc3) + (int32_t)v3)); // 0x19e62a
    int64_t v6 = a3 & -256 | 150; // 0x19e630
    int64_t v7; // 0x19e618
    int64_t v8 = (int64_t)&v7; // 0x19e633
    *(int64_t *)v6 = *(int64_t *)v8;
    v8 += 8;
    while (v5 % 2 != 0) {
        // 0x19e634
        *(int64_t *)v6 = *(int64_t *)v8;
        v8 += 8;
    }
    // 0x19e638
    unknown_75ab3d41();
    __asm_int(127);
    int64_t v9; // 0x19e618
    int64_t v10 = v9;
    *(int32_t *)v10 = *(int32_t *)&v9 + (int32_t)v10;
    return __asm_in_133((int16_t)v6);
}

// Address range: 0x19e885 - 0x19e890
int64_t function_19e885(int64_t a1, int64_t a2, int64_t a3) {
    // 0x19e885
    int64_t v1; // 0x19e885
    bool v2; // 0x19e885
    *(char *)v1 = (char)v2;
    int64_t v3 = unknown_5e54998e(a1, a2, a3); // 0x19e887
    uint32_t v4 = *(int32_t *)(v3 + 5); // 0x19e88d
    return (v3 & 0xffffffff | 0x100000000 * a3) / (int64_t)v4 & 0xffffffff;
}

// Address range: 0x19e89c - 0x19e89d
int64_t function_19e89c(void) {
    // 0x19e89c
    int64_t result; // 0x19e89c
    return result;
}

// Address range: 0x19e8b4 - 0x19e8b9
int64_t function_19e8b4(void) {
    // 0x19e8b4
    return function_57121cdd();
}

// Address range: 0x19e8c8 - 0x19e8d9
int64_t function_19e8c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_40d69ed0(); // 0x19e8d3
    int64_t v1; // 0x19e8c8
    if ((int32_t)(v1 & a1) != 0) {
        result = function_19e89c();
    }
    // 0x19e8d6
    return result;
}

// Address range: 0x19e8d9 - 0x19e8ea
int64_t function_19e8d9(void) {
    int64_t v1 = unknown_28f1efe1(); // 0x19e8d9
    int64_t v2; // 0x19e8d9
    char * v3 = (char *)(v2 - 113); // 0x19e8e0
    *v3 = *v3 + (char)v1;
    return function_2025947();
}

// Address range: 0x19e916 - 0x19e93a
int64_t function_19e916(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19e916
    unknown_6514e239();
    int64_t v1; // 0x19e916
    return (int64_t)&v1;
}

// Address range: 0x19e93a - 0x19e93b
int64_t function_19e93a(void) {
    // 0x19e93a
    int64_t result; // 0x19e93a
    return result;
}

// Address range: 0x19e93c - 0x19e957
int64_t function_19e93c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x19e93c
    int64_t v1; // 0x19e93c
    int32_t * v2 = (int32_t *)(v1 - 0x6f39dd78); // 0x19e93e
    *v2 = *v2 + (int32_t)v1;
    unknown_ffffffffad36e24a();
    char * v3 = (char *)(a1 + 0x623d3aa7); // 0x19e949
    char v4 = *v3 + (char)(a3 / 256); // 0x19e949
    *v3 = v4;
    int64_t v5 = a5; // 0x19e950
    if (a4 != 2 == v4 == 0) {
        v5 = function_19e93a();
    }
    // 0x19e952
    int64_t v6; // 0x19e93c
    return v5 + (int64_t)&v6 & 0xffffffff;
}

// Address range: 0x19e970 - 0x19e987
int64_t function_19e970(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int32_t * v2 = (int32_t *)(a4 - 0x2c3b100c); // 0x19e970
    int64_t v3; // 0x19e970
    *v2 = *v2 + (int32_t)v3;
    int64_t v4; // 0x19e970
    char * v5 = (char *)(v4 + a2); // 0x19e976
    *v5 = *v5 + (char)(v4 / 256);
    uint32_t v6 = (int32_t)a4 % 32; // 0x19e979
    if (v6 != 0) {
        uint32_t v7 = *(int32_t *)&v4; // 0x19e979
        *(int32_t *)v4 = v7 >> 32 - v6 | v7 << v6;
    }
    *(char *)v1 = *(char *)&v1 | (char)v4;
    unknown_160beb84();
    int64_t v8 = __asm_int3(); // 0x19e983
    return (v8 + 25) % 256 | v8 & -256;
}

// Address range: 0x19e99c - 0x19e9b6
int64_t function_19e99c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19e99c
    int64_t v1; // 0x19e99c
    bool v2; // 0x19e99c
    *(char *)a3 = (char)v1 + (char)a4 + (char)v2;
    uint64_t v3 = unknown_3de36da4() + 2 * v1; // 0x19e9a5
    int64_t result = v3 & 0xffffffff; // 0x19e9a5
    int32_t * v4 = (int32_t *)(result + 56); // 0x19e9a7
    uint32_t v5 = *v4; // 0x19e9a7
    uint32_t v6 = v5 + (int32_t)a2; // 0x19e9a7
    *v4 = v6;
    char * v7 = (char *)(result + 0x1158fe0a); // 0x19e9aa
    *v7 = *v7 + (char)(v3 / 256) + (char)(v6 < v5);
    return result;
}

// Address range: 0x19e9b8 - 0x19e9b9
int64_t function_19e9b8(int64_t a1) {
    // 0x19e9b8
    int64_t result; // 0x19e9b8
    return result;
}

// Address range: 0x19ea07 - 0x19ea14
int64_t function_19ea07(void) {
    // 0x19ea07
    int64_t v1; // 0x19ea07
    int32_t * v2 = (int32_t *)(v1 - 0x1fe099fe); // 0x19ea07
    *v2 = *v2 + (int32_t)v1;
    return function_95224bc();
}

// Address range: 0x19ea49 - 0x19ea83
int64_t function_19ea49(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 - 119); // 0x19ea4d
    *v1 = *v1 & -102;
    int64_t v2; // 0x19ea49
    char * v3 = (char *)(v2 + 14); // 0x19ea51
    *v3 = *v3 + (char)(v2 / 256);
    uint32_t v4 = (int32_t)v2; // 0x19ea54
    if (v4 < 0xa801ee02) {
        // 0x19ea5b
        __asm_out((int16_t)a3, v4);
        return v2 & 0xffffffff;
    }
    // 0x19ea6f
    int64_t v5; // 0x19ea49
    int16_t v6 = *(int16_t *)&v5; // 0x19ea72
    int64_t result = __asm_hlt(); // 0x19ea79
    __asm_out((int16_t)a3, (int32_t)result);
    *(float32_t *)(a2 + 0x321cf47b) = (float32_t)(float80_t)v6;
    return result;
}

// Address range: 0x33f473 - 0x33f50d
int64_t function_33f473(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x33f473
    *(int32_t *)0x4039001e825bf33 = (int32_t)v2;
    int64_t v3; // 0x33f473
    bool v4; // 0x33f473
    if (!v4 && !v4) {
        v3 = function_33f42c();
    }
    // 0x33f47e
    unknown_ffffffff8ea96286();
    if (!v4) {
        // 0x33f505
        return __asm_hlt();
    }
    uint64_t v5 = unknown_38e3f793(); // 0x33f48d
    int64_t result = unknown_ffffffffb8a3859c(); // 0x33f496
    if ((char)result >= 248) {
        // 0x33f49f
        return result;
    }
    int32_t * v6 = (int32_t *)(v2 - 0x3a4a114f); // 0x33f4db
    int32_t v7 = *v6; // 0x33f4db
    int32_t v8 = v2; // 0x33f4db
    int32_t v9 = v7 + v8; // 0x33f4db
    *v6 = v9;
    if (v9 < 0 != ((v9 ^ v7) & (v9 ^ v8)) < 0) {
        int32_t * v10 = (int32_t *)(v2 - 24 + v1); // 0x33f4c1
        *v10 = *v10 + (int32_t)v1;
        int32_t * v11 = (int32_t *)(v1 + result); // 0x33f4c5
        *v11 = *v11 + (int32_t)v5;
        int64_t v12 = __asm_int3(); // 0x33f4ca
        *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a1;
        return v12 & 0x7270ff00 | (int64_t)__asm_in((int16_t)v3) | 0x8d8f0000;
    }
    int64_t v13 = (int64_t)*(int32_t *)(a3 - 0x53faf7fe); // 0x33f485
    uint64_t v14 = unknown_348c1feb(); // 0x33f4e5
    char * v15 = (char *)(v14 + 0x75d3200); // 0x33f4ea
    *v15 = *v15 + (char)v14;
    int32_t * v16 = (int32_t *)(v13 + 0x2d004000); // 0x33f4f2
    *v16 = *v16 + v8;
    char * v17 = (char *)(v13 + 26); // 0x33f4fa
    *v17 = *v17 + (char)(v14 / 256);
    *(int32_t *)(a1 + 4) = *(int32_t *)(v1 + 4);
    return (v14 + v5 / 256) % 256 | v14 & -256;
}

// Address range: 0x33f52c - 0x33f53c
int64_t function_33f52c(void) {
    // 0x33f52c
    unknown_acbbe37(0x9ad50dab);
    return function_f1af65f();
}

// Address range: 0x33f542 - 0x33f543
int64_t function_33f542(void) {
    // 0x33f542
    int64_t result; // 0x33f542
    return result;
}

// Address range: 0x33f548 - 0x33f5c2
int64_t function_33f548(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    int64_t v2; // 0x33f548
    *(int32_t *)a4 = (int32_t)v2 + (int32_t)a4;
    int64_t v3 = __asm_int3(); // 0x33f582
    int64_t v4 = ((a5 & (int64_t)&g1) == 0 ? 1 : -1) + a1; // 0x33f584
    int64_t v5 = a4 + a2; // 0x33f585
    int64_t v6; // bp+16, 0x33f548
    int64_t v7 = v4 + (int64_t)&v6 & 0xffffffff; // 0x33f588
    uint32_t v8 = *(int32_t *)&v1; // 0x33f58c
    uint32_t v9 = v8 + (int32_t)v4; // 0x33f58c
    *(int32_t *)v1 = v9;
    unsigned char v10 = *(char *)-0x149b12fe1777568f; // 0x33f596
    char * v11 = (char *)(v4 + 24 + v2); // 0x33f59f
    unsigned char v12 = *v11; // 0x33f59f
    unsigned char v13 = v12 + (char)(v2 / 256); // 0x33f59f
    *v11 = v13;
    int64_t v14 = v13 < v12 ? 13 : 12; // 0x33f5a3
    int64_t v15 = ((v3 & 0xffff00ff | (int64_t)(int32_t)&g9) + 0xf0c0107 + (int64_t)(v9 < v8) & 0xffffff00 | (int64_t)v10) - v14; // 0x33f5a3
    int32_t * v16 = (int32_t *)((v5 & 0xffffffff) - 10); // 0x33f5a8
    uint32_t v17 = *v16; // 0x33f5a8
    uint32_t v18 = v17 + (int32_t)v1; // 0x33f5a8
    *v16 = v18;
    *(char *)(v15 & 0xffffffff) = (char)v5;
    int32_t * v19 = (int32_t *)(v2 - 0x116ba7c0); // 0x33f5af
    *v19 = *v19 | (int32_t)v1;
    *(int64_t *)(v7 - 16) = v4 + a2 & 0xffffffff;
    return (v15 - (v18 < v17 ? 11 : 10)) % 256 | v15 & 0xffffff00;
}

// Address range: 0x33f5d6 - 0x33f5f8
int64_t function_33f5d6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x33f5d6
    unknown_ffffffffd67e01dc();
    int64_t v1; // 0x33f5d6
    unsigned char v2 = (char)v1;
    *(char *)a3 = v2 / 2 | 128 * v2;
    *(int32_t *)0x10f53bef = *(int32_t *)0x10f53bef + (int32_t)a1;
    unknown_169731f4();
    return function_10cfb93e();
}

// Address range: 0x33f656 - 0x33f663
int64_t function_33f656(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x33f656
    return function_ffffffffad2e767e();
}

// Address range: 0x33f67b - 0x33f682
int64_t function_33f67b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x33f67b
    if (v1 != 0) {
        int64_t v2; // 0x33f67b
        uint32_t v3 = (int32_t)v2;
        *(int32_t *)v2 = v3 >> 32 - v1 | v3 << v1;
    }
    return function_170f71c();
}

// Address range: 0x33f6e9 - 0x33f6ec
int64_t function_33f6e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x33f6e9
    int64_t result; // 0x33f6e9
    *(int32_t *)a3 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x33f743 - 0x33f76d
int64_t function_33f743(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = __asm_int3(); // 0x33f75b
    bool v1; // 0x33f743
    if (v1 || v1) {
        // 0x33f758
        return result;
    }
    if (!v1) {
        // 0x33f74a
        int64_t v2; // 0x33f743
        *(char *)a3 = (char)((int32_t)v2 > 0xffffffaa) + (char)a3 + (char)result;
        *(int32_t *)(a4 - 23) = (int32_t)a2;
        return result;
    }
    int32_t * v3 = (int32_t *)(a2 - 121); // 0x33f762
    *v3 = *v3 + (int32_t)result;
    return result;
}

// Address range: 0x33f7b4 - 0x33f7f9
int64_t function_33f7b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x33f7b4
    *(int32_t *)a1 = (int32_t)unknown_5ebea5ba();
    bool v1; // 0x33f7b4
    int64_t v2 = (v1 ? -4 : 4) + a1; // 0x33f7b9
    int64_t v3; // 0x33f7b4
    *(int32_t *)a2 = *(int32_t *)&v3 - (int32_t)a4;
    unknown_634569b(v2);
    uint32_t v4 = __asm_in_134(-15); // 0x33f7dd
    *(char *)v2 = (char)v4;
    int32_t * v5 = (int32_t *)((int64_t)v4 - 0x46a0fed9); // 0x33f7ed
    *v5 = *v5 + 105;
    return function_6435e057(v2 + (v1 ? -1 : 1));
}

// Address range: 0x33f826 - 0x33f827
int64_t function_33f826(void) {
    // 0x33f826
    int64_t result; // 0x33f826
    return result;
}

// Address range: 0x33f834 - 0x33f83e
int64_t function_33f834(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int32_t * v2 = (int32_t *)(a1 - 0x519d1865); // 0x33f834
    *v2 = *v2 + (int32_t)a3;
    unsigned char v3 = (char)a4 % 32; // 0x33f83a
    if (v3 != 0) {
        *(char *)v1 = *(char *)&v1 << v3;
    }
    int64_t result; // 0x33f834
    return result;
}

// Address range: 0x33f83e - 0x33f913
int64_t function_33f83e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x33f83e
    unsigned char v3 = (char)(v2 / 256) - *(char *)(a1 - 66); // 0x33f83e
    int32_t * v4 = (int32_t *)(a2 + 0x3d0065e5); // 0x33f846
    *v4 = *v4 + (int32_t)(256 * (int64_t)v3 | v2 & 0xffff00ff);
    int32_t v5 = v2; // 0x33f84c
    *(int32_t *)0xe80f42f4 = *(int32_t *)0xe80f42f4 + v5;
    char * v6 = (char *)(v2 - 84); // 0x33f85e
    *v6 = *v6 + v3;
    char v7 = v2 / 256; // 0x33f864
    char v8 = *(char *)-0x1be10a95 + v7; // 0x33f864
    *(char *)-0x1be10a95 = v8;
    if (v8 != 0) {
        function_33f826();
    }
    // 0x33f86c
    __asm_wait(a1, a2);
    unsigned char v9 = (char)a2;
    unsigned char v10 = (char)a1;
    char v11 = v9 - v10; // 0x33f86d
    unsigned char v12 = llvm_ctpop_i8(v11); // 0x33f86d
    bool v13; // 0x33f83e
    int64_t v14 = v13 ? -1 : 1; // 0x33f86d
    int64_t v15 = v14 + a2; // 0x33f86d
    __asm_in((int16_t)v1);
    int64_t v16 = __asm_wait(v14 + a1, v15); // 0x33f870
    if (v12 % 2 == 0) {
        // 0x33f877
        *(char *)-0x1b082f80 = *(char *)-0x1b082f80 + v7;
        return function_ffffffffab6d08d4();
    }
    int32_t * v17 = (int32_t *)(4 * v1 + 0x9a03469b); // 0x33f8f6
    *v17 = *v17 + v5;
    unsigned char v18 = *(char *)&v1; // 0x33f903
    unsigned char v19 = v18 + (char)v2; // 0x33f903
    *(char *)v1 = v19;
    int32_t * v20 = (int32_t *)v15; // 0x33f905
    *v20 = (v19 < v18 ? 25 : 24) + *v20;
    *(char *)-0x175d7fec = *(char *)-0x175d7fec + v7;
    return 256 * (64 * (int64_t)(v11 == 0) | (int64_t)(v9 < v10) | 128 * (int64_t)(v11 < 0) | 16 * (int64_t)(v9 % 16 - v10 % 16 > 15)) | v16 & -0xfff2 | 753;
}

// Address range: 0x33f983 - 0x33f98e
int64_t function_33f983(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x33f983
    *(char *)a2 = 0;
    int64_t result; // 0x33f983
    return result;
}

// Address range: 0x33f994 - 0x33f99c
int64_t function_33f994(void) {
    // 0x33f994
    int64_t result; // 0x33f994
    return result;
}

// Address range: 0x33f9be - 0x33f9c1
int64_t function_33f9be(int64_t a1) {
    // 0x33f9be
    int64_t result; // 0x33f9be
    return result;
}

// Address range: 0x33fa22 - 0x33fa29
int64_t function_33fa22(int64_t a1, int64_t a2) {
    // 0x33fa22
    int64_t v1; // 0x33fa22
    return (int64_t)(*(int32_t *)(a2 + 0x77d401ba) * (int32_t)v1);
}

// Address range: 0x33fa48 - 0x33fa5d
int64_t function_33fa48(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x33fa48
    int64_t v1; // 0x33fa48
    uint64_t v2 = v1;
    *(char *)v2 = (char)(v2 / 256) + (char)v2;
    return v2 % 256 * (int64_t)*(char *)(a4 - 0x1947a79) | v2 & -0x10000;
}

// Address range: 0x33fa88 - 0x33fa89
int64_t function_33fa88(void) {
    // 0x33fa88
    int64_t result; // 0x33fa88
    return result;
}

// Address range: 0x33fad0 - 0x33fb15
int64_t function_33fad0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x33fad0
    int64_t result; // 0x33fad0
    *(char *)a2 = (char)(result & a4);
    int64_t v1; // 0x33fad0
    *(char *)a3 = *(char *)&v1 - (char)result;
    __asm_out((int16_t)a3, (int32_t)result);
    *(int32_t *)a3 = *(int32_t *)&v1 + (int32_t)result;
    *(int32_t *)(result + 80) = (int32_t)a3;
    if ((result & 182) != 0) {
        // 0x33fb14
        return result;
    }
    // 0x33faeb
    *(char *)a1 = *(char *)(result % 256 + result);
    return function_33fa88() + 0x4eed9212 & 0xffffffff;
}

// Address range: 0x33fb16 - 0x33fb2a
int64_t function_33fb16(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x33fb16
    return unknown_7c304520();
}

// Address range: 0x33fbc1 - 0x33fc03
int64_t function_33fbc1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x33fbc1
    int64_t result; // 0x33fbc1
    if (a4 == 1) {
        // 0x33fbc3
        return result;
    }
    char v1 = *(char *)-0x68b16a01; // 0x33fbf8
    *(char *)-0x68b16a01 = v1 + (char)((uint64_t)result / 256);
    int32_t v2; // 0x33fbc1
    *(int32_t *)(a3 + 71 + 2 * result) = (int32_t)(int64_t)&v2;
    return result;
}

// Address range: 0x33fc05 - 0x33fc55
int64_t function_33fc05(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x33fc05
    int64_t v3 = 0x100000000 * v2 >> 32; // 0x33fc07
    int64_t v4 = -0x157df33c * v3; // 0x33fc07
    if (v4 != -0x157df33c00000000 * v3 >> 32) {
        // 0x33fc0f
        *(char *)0x54376318 = *(char *)0x54376318 + (char)(v2 / 256);
        return function_69f93862();
    }
    int64_t v5 = v2 & -0xff01 | (int64_t)&g8; // 0x33fc20
    char * v6 = (char *)((a4 & 0xffffffff) + 59); // 0x33fc23
    unsigned char v7 = (char)v5; // 0x33fc23
    *v6 = *v6 & v7;
    *(char *)v1 = *(char *)&v1 + (char)v2;
    int64_t v8 = 0x100000000 * v5 >> 32; // 0x33fc34
    if (0x513f7200 * v8 == 0x513f720000000000 * v8 >> 32) {
        // 0x33fc76
        return 0x60a9fff3;
    }
    int32_t * v9 = (int32_t *)(v2 - 0x79ff0793); // 0x33fc3c
    uint32_t v10 = (int32_t)v2; // 0x33fc3c
    *v9 = *v9 | v10;
    int32_t * v11 = (int32_t *)(a1 - 108); // 0x33fc44
    uint32_t v12 = *v11; // 0x33fc44
    uint32_t v13 = v12 + (int32_t)a1; // 0x33fc44
    *v11 = v13;
    uint32_t v14 = v10 % 32; // 0x33fc47
    bool v15 = v13 < v12; // 0x33fc47
    if (v14 != 0) {
        uint32_t v16 = *(int32_t *)0x60a9fff3; // 0x33fc47
        uint32_t v17 = v16 >> 32 - v14 | v16 << v14; // 0x33fc47
        *(int32_t *)0x60a9fff3 = v17;
        v15 = v17 % 2 != 0;
    }
    int64_t v18 = v4 & 0xfffffffc; // 0x33fc07
    char v19 = v15; // 0x33fc4b
    unsigned char v20 = *(char *)(v18 + 0x617d6d17) + v19; // 0x33fc4b
    char v21 = v7 - v20; // 0x33fc4b
    unsigned char v22 = v21 - v19; // 0x33fc4b
    bool v23 = v15 ? v20 != -1 | v22 > v7 : v20 > v7; // 0x33fc4b
    unsigned char v24 = llvm_ctpop_i8(v21); // 0x33fc4b
    *(int64_t *)(v18 - 8) = 0x60a9fff3;
    bool v25; // 0x33fc05
    *(int64_t *)(v18 - 16) = 0x4000 * (int64_t)v25 | 1024 * (int64_t)v25 | 512 * (int64_t)v25 | 256 * (int64_t)v25 | 64 * (int64_t)(v21 == 0) | 128 * (int64_t)(v21 < 0) | 16 * (int64_t)(v7 % 16 + v19 - v20 % 16 > 15) | (int64_t)v23 | 4 * (int64_t)(v24 % 2 == 0) | 2048 * (int64_t)(((v22 ^ v7) & (v20 ^ v7)) < 0) | 2;
    return 0x60a9fff3;
}
