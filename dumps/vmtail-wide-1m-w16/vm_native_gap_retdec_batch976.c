/*
 * Targeted RetDec C for native executable gap queue batch 976.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xfc39c-0xfc59c rank=- name=- kind=- bytes=- uncovered=-
 *   0xfc59c-0xfc79c rank=- name=- kind=- bytes=- uncovered=-
 *   0xfc79c-0xfc99c rank=- name=- kind=- bytes=- uncovered=-
 *   0xfc99c-0xfcb9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xfcb9c-0xfcd9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xfcd9c-0xfcf9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xfcf9c-0xfd19c rank=- name=- kind=- bytes=- uncovered=-
 *   0xfd19c-0xfd39c rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f9b9e-0x3f9d9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f9d9e-0x3f9f9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f9f9e-0x3fa09e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3fa19e-0x3fa39e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3fa39e-0x3fa59e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3fa59e-0x3fa79e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3fa79e-0x3fa99e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3fa99e-0x3fab9e rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
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

int64_t function_1a579f70();
int64_t function_1f85e5a();
int64_t function_3d3ca5b();
int64_t function_3f9b9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f9bc4(void);
int64_t function_3f9bd9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f9be1(int64_t a1);
int64_t function_3f9c1f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3f9c38(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3f9e7c(int64_t a1);
int64_t function_3f9ea4(int64_t a1);
int64_t function_3f9ed5(void);
int64_t function_3f9f64(void);
int64_t function_3f9fd8(void);
int64_t function_3fa030(void);
int64_t function_3fa193();
int64_t function_3fa19e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3fa22f(int64_t a1);
int64_t function_3fa244(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3fa297(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3fa35a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3fa365(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3fa384(void);
int64_t function_3fa3a5(void);
int64_t function_3fa3c5(int64_t a1, int64_t a2);
int64_t function_3fa3da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3fa3e4(void);
int64_t function_3fa447(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3fa491(int64_t a1);
int64_t function_3fa4c6(void);
int64_t function_3fa4d0(void);
int64_t function_3fa4eb(void);
int64_t function_3fa4f7(void);
int64_t function_3fa510(void);
int64_t function_3fa516(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3fa5f6(void);
int64_t function_3fa60c(void);
int64_t function_3fa611(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3fa6b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3fa71e(void);
int64_t function_3fa78d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3fa7fc(void);
int64_t function_3fa83f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3fa879(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3fa87d(void);
int64_t function_3fa8d1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3fa906(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3fa968(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3fa998(int64_t a1);
int64_t function_3fa9a2(int64_t a1, int32_t a2, int64_t a3);
int64_t function_3fa9e8(int64_t a1);
int64_t function_3fa9ee(int64_t a1);
int64_t function_3fa9fa(void);
int64_t function_3fa9fd(void);
int64_t function_3faa0a(void);
int64_t function_3faa11(void);
int64_t function_3faa1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3faa2e(void);
int64_t function_3faa5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3faaa9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3faad1(void);
int64_t function_3faae1(void);
int64_t function_3fab34(int64_t a1);
int64_t function_3fab44(void);
int64_t function_3fab51(void);
int64_t function_3fab6d(int64_t a1);
int64_t function_4b9f09a8();
int64_t function_5511b0ef();
int64_t function_caf2a();
int64_t function_fc39c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fc3ec(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_fc494(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_fc4ce(void);
int64_t function_fc4df(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fc50f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fc52f(int64_t a1);
int64_t function_fc54a(void);
int64_t function_fc58b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fc5a6(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_fc5c2(void);
int64_t function_fc5eb(int64_t a1);
int64_t function_fc601(int64_t a1);
int64_t function_fc65b(void);
int64_t function_fc660(int64_t a1, int64_t a2, int64_t a3);
int64_t function_fc6be(void);
int64_t function_fc6fa(int64_t a1);
int64_t function_fc72c(void);
int64_t function_fc75a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_fc795(int64_t a1);
int64_t function_fc7ae(int64_t a1);
int64_t function_fc7b1(void);
int64_t function_fc7b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fc7ee(void);
int64_t function_fc813(void);
int64_t function_fc834(int64_t a1);
int64_t function_fc85c(void);
int64_t function_fc86f(void);
int64_t function_fc880(void);
int64_t function_fc89e(void);
int64_t function_fc8d6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_fc92e(void);
int64_t function_fc992(int64_t a1, int64_t a2, int64_t a3);
int64_t function_fc9cd(void);
int64_t function_fca2e(void);
int64_t function_fca43(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_fcc0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_fcd30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_fce9c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_fcfcb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_fd118(int64_t a1, int64_t a2, int64_t a3);
int64_t function_fd282(int64_t a1);
int64_t function_fd2bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fd386(void);
int64_t function_ffffffff8282fe83();
int64_t function_ffffffff89e3c330();
int64_t function_ffffffff8c265842();
int64_t function_ffffffff9c981924();
int64_t unknown_1d96dff1();
int64_t unknown_20d38fae();
int64_t unknown_38c5e3a();
int64_t unknown_5111048d();
int64_t unknown_7633e75();
int64_t unknown_ffffffff8011c910();
int64_t unknown_ffffffff8c661874();
int64_t unknown_ffffffffdc0581f0();
int64_t unknown_ffffffffe8700418();

// Address range: 0xfc39c - 0xfc3ad
int64_t function_fc39c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xfc39c
    bool v1; // 0xfc39c
    int64_t v2 = v1 ? -4 : 4; // 0xfc39c
    int64_t v3; // 0xfc39c
    unsigned char v4 = (char)v3;
    *(char *)v3 = v4 / 16 | 32 * v4 | 16 * (char)((int32_t)v3 < (int32_t)v3);
    return unknown_20d38fae(v2 + a1, v2 + a2);
}

// Address range: 0xfc3ec - 0xfc403
int64_t function_fc3ec(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0xfc3ec
    __asm_sti();
    __asm_hlt();
    char * v1 = (char *)(a1 - 8); // 0xfc3ef
    *v1 = *v1 + (char)(a3 / 256);
    int64_t v2; // 0xfc3ec
    int32_t v3 = *(int32_t *)&v2; // 0xfc3f9
    return v3 & (int32_t)((a3 & 0xff00 | 0x7fff00ff) & a4) + 0x6282fe18 | -0x4c137251;
}

// Address range: 0xfc494 - 0xfc4a3
int64_t function_fc494(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xfc494
    int64_t v1; // 0xfc494
    uint64_t v2 = v1;
    char * v3 = (char *)(a1 - 115); // 0xfc499
    *v3 = *v3 + (char)a4;
    char * v4 = (char *)(v1 - 97); // 0xfc49e
    *v4 = *v4 + (char)v1;
    int64_t v5; // 0xfc494
    return 256 * (int64_t)(*(char *)&v5 ^ (char)(v2 / 256)) | v2 & -0xff01;
}

// Address range: 0xfc4ce - 0xfc4cf
int64_t function_fc4ce(void) {
    // 0xfc4ce
    int64_t result; // 0xfc4ce
    return result;
}

// Address range: 0xfc4df - 0xfc4f5
int64_t function_fc4df(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xfc4df
    int64_t v1; // 0xfc4df
    char * v2 = (char *)(v1 + (a4 & -0xff01 | (int64_t)&g4)); // 0xfc4e1
    *v2 = *v2 + (char)((int64_t)&g4 >> 8);
    *(int32_t *)0x79a2ee = *(int32_t *)0x79a2ee | (int32_t)a1;
    __asm_in_133((int16_t)a3);
    return function_fc4ce();
}

// Address range: 0xfc50f - 0xfc52f
int64_t function_fc50f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xfc50f
    if (a4 != 0) {
        // 0xfc512
        return unknown_ffffffffe8700418();
    }
    // 0xfc51d
    int64_t v1; // 0xfc50f
    int64_t result = v1 & -256; // 0xfc50f
    result |= (uint64_t)v1 % 256;
    bool v2; // 0xfc50f
    if (!v2) {
        // 0xfc521
        *(int32_t *)a1 = *(int32_t *)((v2 ? -1 : 1) + a2);
    }
    char * v3 = (char *)(result + 0x5bd2d2a6); // 0xfc528
    *v3 = *v3 & (char)result;
    return result;
}

// Address range: 0xfc52f - 0xfc538
int64_t function_fc52f(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 105); // 0xfc534
    *v1 = *v1 + (int32_t)a1;
    int64_t v2; // 0xfc52f
    bool v3; // 0xfc52f
    return v2 + 0x3d005255 + (int64_t)v3 & 0xffffffff;
}

// Address range: 0xfc54a - 0xfc54b
int64_t function_fc54a(void) {
    // 0xfc54a
    int64_t result; // 0xfc54a
    return result;
}

// Address range: 0xfc58b - 0xfc5a5
int64_t function_fc58b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xfc58b
    int64_t v1; // 0xfc58b
    *(int32_t *)(v1 + 122) = (int32_t)a3;
    char v2 = *(char *)0x52b4249a; // 0xfc593
    char v3 = v1 / 256; // 0xfc593
    char v4 = v2 + v3; // 0xfc593
    *(char *)0x52b4249a = v4;
    if (v4 < 0 == ((v4 ^ v2) & (v4 ^ v3)) < 0) {
        function_fc54a();
    }
    // 0xfc59d
    bool v5; // 0xfc58b
    int64_t v6 = v5 ? -4 : 4; // 0xfc59f
    return function_ffffffff9c981924(v6 + a1, v6 + a4);
}

// Address range: 0xfc5a6 - 0xfc5bd
int64_t function_fc5a6(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0xfc5a6
    int64_t result; // 0xfc5a6
    uint64_t v1 = result;
    char * v2 = (char *)(v1 + 3); // 0xfc5a6
    *v2 = *v2 ^ (char)v1;
    *(char *)0x6200ecb0 = *(char *)0x6200ecb0 + (char)(v1 / 256);
    int64_t v3; // 0xfc5a6
    *(char *)a1 = *(char *)&v3 - (char)(a3 / 256);
    int32_t * v4 = (int32_t *)(a1 - 88); // 0xfc5b7
    *v4 = *v4 - 1;
    return result;
}

// Address range: 0xfc5c2 - 0xfc5c6
int64_t function_fc5c2(void) {
    // 0xfc5c2
    int64_t v1; // 0xfc5c2
    bool v2; // 0xfc5c2
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0xfc5eb - 0xfc5f1
int64_t function_fc5eb(int64_t a1) {
    // 0xfc5eb
    return unknown_1d96dff1(a1);
}

// Address range: 0xfc601 - 0xfc604
int64_t function_fc601(int64_t a1) {
    // 0xfc601
    int64_t result; // 0xfc601
    return result;
}

// Address range: 0xfc65b - 0xfc65c
int64_t function_fc65b(void) {
    // 0xfc65b
    int64_t result; // 0xfc65b
    return result;
}

// Address range: 0xfc660 - 0xfc677
int64_t function_fc660(int64_t a1, int64_t a2, int64_t a3) {
    // 0xfc660
    *(char *)a1 = __asm_insb((int16_t)a3);
    unknown_7633e75();
    int64_t v1; // 0xfc660
    return __asm_in_133((int16_t)v1);
}

// Address range: 0xfc6be - 0xfc6c4
int64_t function_fc6be(void) {
    // 0xfc6be
    return function_1f85e5a();
}

// Address range: 0xfc6fa - 0xfc6fb
int64_t function_fc6fa(int64_t a1) {
    // 0xfc6fa
    int64_t result; // 0xfc6fa
    return result;
}

// Address range: 0xfc72c - 0xfc72d
int64_t function_fc72c(void) {
    // 0xfc72c
    int64_t result; // 0xfc72c
    return result;
}

// Address range: 0xfc75a - 0xfc794
int64_t function_fc75a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a2;
    unsigned char v2 = (char)a4 % 32; // 0xfc75a
    int64_t v3; // 0xfc75a
    char v4; // 0xfc75a
    if (v2 == 0) {
        // 0xfc75a
        v3 = a2;
        v4 = a2;
    } else {
        char * v5 = (char *)(a3 + 0x602f1236); // 0xfc75a
        unsigned char v6 = *v5; // 0xfc75a
        *v5 = v6 >> v2 | v6 << 8 - v2;
        v3 = v1;
        v4 = *(char *)&v1;
    }
    unsigned char v7 = v4; // 0xfc761
    int64_t v8 = __asm_wait(a1); // 0xfc760
    *(char *)v3 = v7 / 128 | 2 * v7;
    int32_t * v9 = (int32_t *)((a4 - 256 * v8 & 0xff00 | a4 & -0xff01) - 0x72fabf10); // 0xfc766
    *v9 = *v9 + (int32_t)a3;
    int64_t v10; // 0xfc75a
    char * v11 = (char *)(v10 - 0x176df9fa); // 0xfc771
    *v11 = *v11 | (char)(v10 / 256);
    char * v12 = (char *)(v10 + 0x7150a500); // 0xfc779
    *v12 = *v12 & (char)(a3 / 256);
    unknown_5111048d();
    return function_fc72c();
}

// Address range: 0xfc795 - 0xfc798
int64_t function_fc795(int64_t a1) {
    // 0xfc795
    int64_t result; // 0xfc795
    return result;
}

// Address range: 0xfc7ae - 0xfc7b1
int64_t function_fc7ae(int64_t a1) {
    // 0xfc7ae
    int64_t result; // 0xfc7ae
    return result;
}

// Address range: 0xfc7b1 - 0xfc7b3
int64_t function_fc7b1(void) {
    // 0xfc7b1
    int64_t result; // 0xfc7b1
    return result;
}

// Address range: 0xfc7b3 - 0xfc7be
int64_t function_fc7b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xfc7b3
    int64_t v1; // 0xfc7b3
    int64_t v2 = v1;
    bool v3; // 0xfc7b3
    return (v2 - (uint64_t)v1 / 256 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0xfc7ee - 0xfc7ef
int64_t function_fc7ee(void) {
    // 0xfc7ee
    int64_t result; // 0xfc7ee
    return result;
}

// Address range: 0xfc813 - 0xfc818
int64_t function_fc813(void) {
    // 0xfc813
    return function_5511b0ef();
}

// Address range: 0xfc834 - 0xfc83a
int64_t function_fc834(int64_t a1) {
    // 0xfc834
    return unknown_38c5e3a(a1);
}

// Address range: 0xfc85c - 0xfc85d
int64_t function_fc85c(void) {
    // 0xfc85c
    int64_t result; // 0xfc85c
    return result;
}

// Address range: 0xfc86f - 0xfc874
int64_t function_fc86f(void) {
    // 0xfc86f
    return function_ffffffff89e3c330();
}

// Address range: 0xfc880 - 0xfc881
int64_t function_fc880(void) {
    // 0xfc880
    int64_t result; // 0xfc880
    return result;
}

// Address range: 0xfc89e - 0xfc89f
int64_t function_fc89e(void) {
    // 0xfc89e
    int64_t result; // 0xfc89e
    return result;
}

// Address range: 0xfc8d6 - 0xfc911
int64_t function_fc8d6(int64_t a1, int64_t a2, int64_t a3) {
    // 0xfc8d6
    bool v1; // 0xfc8d6
    if (!v1) {
        function_fc880();
    }
    if (v1) {
        function_fc85c();
    }
    // 0xfc8da
    int64_t v2; // 0xfc8d6
    int32_t * v3 = (int32_t *)(v2 + 0x5f01e8a0); // 0xfc8da
    *v3 = *v3 - (int32_t)v2;
    float80_t v4; // 0xfc8d6
    *(float80_t *)(v2 + 102) = __asm_fbstp(v4);
    int64_t v5 = unknown_ffffffffdc0581f0(); // 0xfc8ea
    char * v6 = (char *)v5; // 0xfc8f1
    *v6 = *v6 - (char)v5;
    __asm_out(-24, (char)*(int32_t *)(v2 + (4 * v2 | 2)));
    *(int32_t *)0x7ba4f4ee = *(int32_t *)0x7ba4f4ee + (int32_t)a3;
    unknown_ffffffff8011c910();
    return function_fc89e();
}

// Address range: 0xfc92e - 0xfc92f
int64_t function_fc92e(void) {
    // 0xfc92e
    int64_t result; // 0xfc92e
    return result;
}

// Address range: 0xfc992 - 0xfc9a8
int64_t function_fc992(int64_t a1, int64_t a2, int64_t a3) {
    // 0xfc992
    int64_t v1; // 0xfc992
    int64_t v2 = v1;
    uint64_t v3 = v1;
    int64_t v4 = (char)(v3 / 256) < (char)v2 ? 46 : 45; // 0xfc997
    *(int32_t *)v2 = (int32_t)((v3 - v4) % 256 | v3 & 0xffffff00) + (int32_t)v2;
    return function_3d3ca5b((int32_t)a1 - (int32_t)a3 - (int32_t)v3);
}

// Address range: 0xfc9cd - 0xfc9d2
int64_t function_fc9cd(void) {
    // 0xfc9cd
    return function_ffffffff8c265842();
}

// Address range: 0xfca2e - 0xfca33
int64_t function_fca2e(void) {
    // 0xfca2e
    return function_4b9f09a8();
}

// Address range: 0xfca43 - 0xfcc0e
int64_t function_fca43(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xfca43
    *(int32_t *)-0x5dd18dda = *(int32_t *)-0x5dd18dda + (int32_t)a4;
    int64_t v1 = 2 * a4; // 0xfca4e
    int64_t v2 = v1 & 0xfffffffe; // 0xfca4e
    int32_t * v3 = (int32_t *)v2; // 0xfca50
    int32_t v4 = *v3; // 0xfca50
    *v3 = -v4;
    char * v5 = (char *)(v2 + 0x4a01e800); // 0xfca55
    *v5 = *v5 - ((char)(v4 != 0) | (char)v1);
    int64_t v6; // 0xfca43
    int64_t v7; // 0xfca43
    *(int32_t *)a3 = *(int32_t *)&v6 + (int32_t)v7;
    int64_t v8 = unknown_ffffffff8c661874(); // 0xfca6e
    int64_t v9; // 0xfca43
    char v10 = *(char *)&v9; // 0xfca73
    char * v11 = (char *)(v8 & -256 | (int64_t)(v10 + (char)v8)); // 0xfca76
    *v11 = *v11 - 100;
    int64_t v12 = a6; // bp-40, 0xfcb58
    int64_t v13 = (int64_t)&v12; // 0xfcb8f
    int64_t * v14 = (int64_t *)(v13 - 16); // 0xfcbaa
    *v14 = 0x2e1f82e;
    *(int64_t *)(v13 - 24) = a6;
    int64_t * v15 = (int64_t *)(v13 - 8); // 0xfcbb6
    *(int64_t *)(v13 + 8) = *v15;
    *v15 = a6;
    *(int64_t *)(v13 + 32) = v2;
    *v15 = v12;
    *v14 = v12;
    v12 = v13 + 16;
    return function_caf2a(a1, a2, a3, v2, a5, v7, 0x4aa230c5);
}

// Address range: 0xfcc0e - 0xfcd30
int64_t function_fcc0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 310; // bp-48, 0xfcd15
    return function_caf2a(a1, a2, a3, a4, a5, a6, (int64_t)&v1 + 16);
}

// Address range: 0xfcd30 - 0xfce9c
int64_t function_fcd30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xfcd30
    return function_caf2a(a1, a2, a3, a4, a5, a6, a7);
}

// Address range: 0xfce9c - 0xfcfcb
int64_t function_fce9c(int64_t a1, int64_t a2, int64_t a3) {
    // 0xfce9c
    int64_t v1; // bp-64, 0xfce9c
    v1 = (int64_t)&v1;
    int64_t v2; // 0xfce9c
    bool v3; // 0xfce9c
    return function_caf2a(a1, a2, a3, v2, v2, v2, 0x4000 * (int64_t)v3 | 2048 * (int64_t)v3 | 1024 * (int64_t)v3 | 512 * (int64_t)v3 | 256 * (int64_t)v3 | 128 * (int64_t)v3 | 64 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3 | 2);
}

// Address range: 0xfcfcb - 0xfd118
int64_t function_fcfcb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xfcfcb
    int64_t v1; // bp-64, 0xfcfcb
    int64_t v2 = (int64_t)&v1; // 0xfd0a3
    int64_t * v3 = (int64_t *)(v2 + 16); // 0xfd0af
    bool v4; // 0xfcfcb
    *v3 = 0x4000 * (int64_t)(bool)v4 | 2048 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4 | 2;
    v1 = 0x24935c51;
    int64_t v5 = v2 + 8; // 0xfd0d2
    int64_t * v6 = (int64_t *)v5; // 0xfd0d5
    *(int64_t *)(v2 + 40) = *v6;
    v1 = v5;
    *v6 = v2 + 24;
    int64_t v7 = *v3; // 0xfd0fa
    *v6 = v7;
    v1 = v7;
    return function_caf2a(a1, a2, a3, a4, a5, a6, 0x4a87f9dc);
}

// Address range: 0xfd118 - 0xfd27c
int64_t function_fd118(int64_t a1, int64_t a2, int64_t a3) {
    // 0xfd118
    int64_t v1; // 0xfd118
    return function_caf2a(a1, a2, a3, v1, v1, v1, 0x2906500);
}

// Address range: 0xfd282 - 0xfd283
int64_t function_fd282(int64_t a1) {
    // 0xfd282
    int64_t result; // 0xfd282
    return result;
}

// Address range: 0xfd2bb - 0xfd2bf
int64_t function_fd2bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 1); // 0xfd2bb
    *v1 = *v1 - 1;
    int64_t result; // 0xfd2bb
    return result;
}

// Address range: 0xfd386 - 0xfd387
int64_t function_fd386(void) {
    // 0xfd386
    int64_t result; // 0xfd386
    return result;
}

// Address range: 0x3f9b9e - 0x3f9baf
int64_t function_3f9b9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 58); // 0x3f9b9e
    bool v2; // 0x3f9b9e
    *v1 = (char)v2 - (char)a4 + *v1;
    int64_t result = __asm_wait((v2 ? -4 : 4) + a1); // 0x3f9ba2
    int64_t v3; // 0x3f9b9e
    *(int32_t *)a4 = *(int32_t *)&v3 ^ (int32_t)a4;
    return result;
}

// Address range: 0x3f9bc4 - 0x3f9bc6
int64_t function_3f9bc4(void) {
    // 0x3f9bc4
    int64_t result; // 0x3f9bc4
    return result;
}

// Address range: 0x3f9bd9 - 0x3f9bdf
int64_t function_3f9bd9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3f9bd9
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x3f9bd9
    return result;
}

// Address range: 0x3f9be1 - 0x3f9be4
int64_t function_3f9be1(int64_t a1) {
    // 0x3f9be1
    int64_t result; // 0x3f9be1
    return result;
}

// Address range: 0x3f9c1f - 0x3f9c27
int64_t function_3f9c1f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3f9c1f
    int64_t v1; // 0x3f9c1f
    uint64_t v2 = v1;
    char v3 = *(char *)(4 * a3 + 121 + v2); // 0x3f9c20
    return 256 * (int64_t)((char)(v2 / 256) - v3) | v2 & -0xff01;
}

// Address range: 0x3f9c38 - 0x3f9d2c
int64_t function_3f9c38(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t v2; // 0x3f9c38
    uint32_t v3 = (int32_t)a3 - (int32_t)v2; // 0x3f9c38
    if ((v3 ^ (int32_t)v2) < 0) {
        unsigned char v4 = (char)v2 + 27; // 0x3f9cb7
        if (llvm_ctpop_i8(v4) % 2 != 0) {
            // 0x3f9d2a
            return (int64_t)&v1;
        }
        // 0x3f9cbb
        return v2 & -256 | (int64_t)v4;
    }
    int64_t result = v3; // 0x3f9c38
    int16_t v5 = v3; // 0x3f9c45
    __asm_in_134(v5);
    uint32_t v6 = *(int32_t *)(a1 - 0x71da5f78); // 0x3f9c4b
    uint32_t v7 = (int32_t)v2; // 0x3f9c4b
    *(int64_t *)v2 = result;
    *(int64_t *)(v2 - 8) = result;
    *(char *)a1 = __asm_insb(v5);
    if (v6 - v7 >= 0) {
        // 0x3f9c58
        return result;
    }
    // 0x3f9c5e
    *(int64_t *)(v2 - 16) = a4;
    if (v6 >= v7) {
        // 0x3f9cbf
        return result & 0xffff00ff | (int64_t)&g1;
    }
    // 0x3f9c64
    return function_1a579f70();
}

// Address range: 0x3f9e7c - 0x3f9e7f
int64_t function_3f9e7c(int64_t a1) {
    // 0x3f9e7c
    int64_t result; // 0x3f9e7c
    return result;
}

// Address range: 0x3f9ea4 - 0x3f9ea9
int64_t function_3f9ea4(int64_t a1) {
    // 0x3f9ea4
    int64_t v1; // 0x3f9ea4
    return v1 & -0xff01 | (int64_t)"OW";
}

// Address range: 0x3f9ed5 - 0x3f9ed6
int64_t function_3f9ed5(void) {
    // 0x3f9ed5
    int64_t result; // 0x3f9ed5
    return result;
}

// Address range: 0x3f9f64 - 0x3f9f67
int64_t function_3f9f64(void) {
    // 0x3f9f64
    int64_t result; // 0x3f9f64
    return result;
}

// Address range: 0x3f9fd8 - 0x3f9fd9
int64_t function_3f9fd8(void) {
    // 0x3f9fd8
    int64_t result; // 0x3f9fd8
    return result;
}

// Address range: 0x3fa030 - 0x3fa031
int64_t function_3fa030(void) {
    // 0x3fa030
    int64_t result; // 0x3fa030
    return result;
}

// Address range: 0x3fa19e - 0x3fa21d
int64_t function_3fa19e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6;
    int64_t result; // 0x3fa19e
    bool v2; // 0x3fa19e
    if (v2) {
        // 0x3fa1a0
        return result;
    }
    int64_t v3 = a1 & 0xffffffff; // 0x3fa1eb
    v3 = function_3fa193();
    char v4 = __asm_in(-108); // 0x3fa1ed
    int64_t result2 = v3 & -256 | (int64_t)v4; // 0x3fa1ed
    int64_t v5 = (int64_t)&v1; // 0x3fa1ff
    int64_t v6 = (v2 ? -1 : 1) + (result & 0xffffffff); // 0x3fa1ff
    v6 = (int64_t)((int32_t)v6 - *(int32_t *)result2);
    *(char *)0x3158ed7049a4203f = v4;
    v5 -= 8;
    *(int64_t *)v5 = result2;
    while (*(char *)(v6 - 0x26f2c8f8) == (char)((uint64_t)result / 256)) {
        // 0x3fa200
        v6 = (int64_t)((int32_t)v6 - *(int32_t *)result2);
        *(char *)0x3158ed7049a4203f = v4;
        v5 -= 8;
        *(int64_t *)v5 = result2;
    }
    // 0x3fa215
    *(int32_t *)v6 = __asm_insd(0x4d7c);
    return result2;
}

// Address range: 0x3fa22f - 0x3fa237
int64_t function_3fa22f(int64_t a1) {
    // 0x3fa22f
    int64_t result; // 0x3fa22f
    return result;
}

// Address range: 0x3fa244 - 0x3fa24f
int64_t function_3fa244(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3fa244
    int64_t v1; // 0x3fa244
    return v1 & -256 | (int64_t)*(char *)0x6228b77a404be892;
}

// Address range: 0x3fa297 - 0x3fa348
int64_t function_3fa297(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3fa297
    int64_t v1; // 0x3fa297
    int64_t result = v1;
    bool v2; // 0x3fa297
    if (v2) {
        // 0x3fa299
        return result;
    }
    unsigned char v3 = *(char *)(a3 + 13); // 0x3fa319
    return (result + a4 / 256 + (int64_t)(v3 > (char)a3)) % 256 | result & -256;
}

// Address range: 0x3fa35a - 0x3fa35f
int64_t function_3fa35a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3fa35a
    int64_t result; // 0x3fa35a
    uint32_t v1 = (int32_t)result;
    *(int32_t *)a3 = v1 / 2 | 0x80000000 * v1;
    return result;
}

// Address range: 0x3fa365 - 0x3fa37a
int64_t function_3fa365(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3fa365
    int64_t v1; // 0x3fa365
    uint64_t v2 = v1;
    char v3 = v2 / 256 ^ v2; // 0x3fa365
    int64_t v4 = __asm_iretd(a1, a2, a3, v1, (int64_t)&g7); // 0x3fa36e
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result = v4; // 0x3fa372
    if (v3 >= 0 == (v3 != 0)) {
        result = function_3fa3a5();
    }
    // 0x3fa374
    return result;
}

// Address range: 0x3fa384 - 0x3fa387
int64_t function_3fa384(void) {
    // 0x3fa384
    int64_t result; // 0x3fa384
    return result;
}

// Address range: 0x3fa3a5 - 0x3fa3a6
int64_t function_3fa3a5(void) {
    // 0x3fa3a5
    int64_t result; // 0x3fa3a5
    return result;
}

// Address range: 0x3fa3c5 - 0x3fa3cc
int64_t function_3fa3c5(int64_t a1, int64_t a2) {
    // 0x3fa3c8
    return __asm_int3();
}

// Address range: 0x3fa3da - 0x3fa3e3
int64_t function_3fa3da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3fa3da
    return __asm_iretd(a1, a2, a3, a4, a5) & -256 | (int64_t)__asm_in(14);
}

// Address range: 0x3fa3e4 - 0x3fa3e7
int64_t function_3fa3e4(void) {
    // 0x3fa3e4
    int64_t result; // 0x3fa3e4
    return result;
}

// Address range: 0x3fa447 - 0x3fa452
int64_t function_3fa447(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3fa447
    *(int64_t *)a1 = a2;
    int64_t v1; // 0x3fa447
    return (v1 | 84) + 0xac31047b & 0xffffffff;
}

// Address range: 0x3fa491 - 0x3fa492
int64_t function_3fa491(int64_t a1) {
    // 0x3fa491
    int64_t result; // 0x3fa491
    return result;
}

// Address range: 0x3fa4c6 - 0x3fa4c8
int64_t function_3fa4c6(void) {
    // 0x3fa4c6
    return function_3fa510();
}

// Address range: 0x3fa4d0 - 0x3fa4d1
int64_t function_3fa4d0(void) {
    // 0x3fa4d0
    int64_t result; // 0x3fa4d0
    return result;
}

// Address range: 0x3fa4eb - 0x3fa4ec
int64_t function_3fa4eb(void) {
    // 0x3fa4eb
    int64_t result; // 0x3fa4eb
    return result;
}

// Address range: 0x3fa4f7 - 0x3fa4f8
int64_t function_3fa4f7(void) {
    // 0x3fa4f7
    int64_t result; // 0x3fa4f7
    return result;
}

// Address range: 0x3fa510 - 0x3fa511
int64_t function_3fa510(void) {
    // 0x3fa510
    int64_t result; // 0x3fa510
    return result;
}

// Address range: 0x3fa516 - 0x3fa5ab
int64_t function_3fa516(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3fa516
    int64_t v1; // 0x3fa516
    v1 = function_3fa4d0();
    int64_t v2; // 0x3fa516
    bool v3; // 0x3fa516
    if (!v3) {
        unsigned char v4 = llvm_ctpop_i8((char)(v1 | v2 / 256)); // 0x3fa51b
        *(int64_t *)v1 = a1;
        *(int32_t *)a1 = __asm_insd((int16_t)a3);
        int64_t v5 = v1; // 0x3fa523
        if (v4 % 2 != 0) {
            v5 = function_3fa4eb();
        }
        // 0x3fa525
        __asm_out(97, (char)v5);
        return v5 & 0xffffffff ^ 0x6e13a0e6;
    }
    int64_t v6 = __asm_wait(a1); // 0x3fa54e
    if (*(int32_t *)(v6 + 0x2ecca6) + (int32_t)a4 >= 0) {
        // 0x3fa5a4
        return a3 & 0xffffffff;
    }
    int64_t v7 = __asm_wait(a1); // 0x3fa558
    char * v8 = (char *)(v2 + 0x1e4e814e); // 0x3fa559
    char v9 = *v8 - 36; // 0x3fa559
    *v8 = v9;
    char * v10 = (char *)(v7 + 36); // 0x3fa560
    *v10 = (char)v6;
    if (v9 != 0) {
        function_3fa4f7();
    }
    // 0x3fa565
    __asm_in_133((int16_t)(v6 & 0xff00 | (int64_t)*v10));
    int64_t result = __asm_hlt(); // 0x3fa56d
    int32_t * v11 = (int32_t *)(a2 - 42); // 0x3fa570
    *v11 = *v11 - ((int32_t)v6 & -256 | 99);
    return result;
}

// Address range: 0x3fa5f6 - 0x3fa5f7
int64_t function_3fa5f6(void) {
    // 0x3fa5f6
    int64_t result; // 0x3fa5f6
    return result;
}

// Address range: 0x3fa60c - 0x3fa610
int64_t function_3fa60c(void) {
    // 0x3fa60c
    int64_t result; // 0x3fa60c
    return result;
}

// Address range: 0x3fa611 - 0x3fa61c
int64_t function_3fa611(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3fa611
    int64_t result; // 0x3fa611
    bool v1; // 0x3fa611
    if (a4 != 1 && !v1) {
        result = function_3fa5f6();
    }
    // 0x3fa613
    return result;
}

// Address range: 0x3fa6b0 - 0x3fa6df
int64_t function_3fa6b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2 - 114; // 0x3fa6b3
    int64_t v2; // 0x3fa6b0
    char * v3 = (char *)(4 * v2 + v1); // 0x3fa6b3
    char v4 = v2 / 256; // 0x3fa6b3
    *v3 = *v3 + v4;
    char v5 = *(char *)(v2 - 28); // 0x3fa6b7
    *(char *)0xa8c825f = *(char *)0xa8c825f + (char)a3;
    int64_t v6; // 0x3fa6b0
    uint32_t v7 = *(int32_t *)&v6; // 0x3fa6c7
    uint32_t v8 = (int32_t)v2; // 0x3fa6c7
    *(int32_t *)a1 = v7 - v8;
    unsigned char v9 = (char)v2; // 0x3fa6ca
    unsigned char v10 = v9 + 61 + (char)(v7 < v8); // 0x3fa6ca
    bool v11 = v7 < v8 ? v10 <= v9 : v9 > 194; // 0x3fa6ca
    int32_t * v12 = (int32_t *)v1; // 0x3fa6cc
    *v12 = *v12 + (int32_t)a3 + (int32_t)v11;
    int32_t * v13 = (int32_t *)(a2 - 44); // 0x3fa6da
    *v13 = *v13 / 0x20000000;
    return 256 * (int64_t)(v4 - v5) | v2 & -0x10000 | (int64_t)(v10 - 9);
}

// Address range: 0x3fa71e - 0x3fa72a
int64_t function_3fa71e(void) {
    while (true) {
        // 0x3fa720
        int64_t v1; // 0x3fa71e
        int64_t v2 = v1 - 8; // 0x3fa720
        *(int64_t *)v2 = v1;
        v1 = v2;
    }
}

// Address range: 0x3fa78d - 0x3fa7f5
int64_t function_3fa78d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3fa78d
    int64_t v1; // 0x3fa78d
    int64_t result = v1 ^ 144; // 0x3fa78f
    bool v2; // 0x3fa78d
    int32_t v3 = *(int32_t *)(((v1 + a3 + (int64_t)v2) % 256 | a3 & -256) + 127); // 0x3fa791
    if (v3 != (int32_t)v1) {
        // 0x3fa796
        return result;
    }
    // 0x3fa7f2
    *(int32_t *)a4 = (int32_t)(v1 ^ a4);
    return result;
}

// Address range: 0x3fa7fc - 0x3fa7fd
int64_t function_3fa7fc(void) {
    // 0x3fa7fc
    int64_t result; // 0x3fa7fc
    return result;
}

// Address range: 0x3fa83f - 0x3fa84b
int64_t function_3fa83f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    uint32_t v2 = (int32_t)a4 % 32; // 0x3fa841
    int32_t v3; // 0x3fa83f
    if (v2 == 0) {
        // 0x3fa83f
        v3 = a2;
    } else {
        int64_t v4; // 0x3fa83f
        int32_t * v5 = (int32_t *)(2 * a4 + 0x3357cdc + v4); // 0x3fa841
        uint32_t v6 = *v5; // 0x3fa841
        *v5 = v6 >> 32 - v2 | v6 << v2;
        v3 = *(int32_t *)&v1;
    }
    *(int32_t *)a1 = v3;
    return function_3fa7fc();
}

// Address range: 0x3fa879 - 0x3fa87d
int64_t function_3fa879(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3fa879
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x3fa879
    return result;
}

// Address range: 0x3fa87d - 0x3fa87f
int64_t function_3fa87d(void) {
    // 0x3fa87d
    int64_t v1; // 0x3fa87d
    return function_3fa879(v1, v1, v1);
}

// Address range: 0x3fa8d1 - 0x3fa8f5
int64_t function_3fa8d1(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 50); // 0x3fa8dd
    *v1 = -*v1;
    int16_t v2 = a3; // 0x3fa8e0
    char v3 = __asm_in_134(v2); // 0x3fa8e0
    int64_t v4; // 0x3fa8d1
    __asm_outsd(v2, *(int32_t *)&v4);
    int64_t v5; // 0x3fa8d1
    int32_t * v6 = (int32_t *)(v5 + 0x5372bd); // 0x3fa8e3
    *v6 = *v6 | (int32_t)v5 + (int32_t)a1;
    return (v5 & 0x82a10200 | (int64_t)v3) + 0x57e0218a & 0xffffffff;
}

// Address range: 0x3fa906 - 0x3fa963
int64_t function_3fa906(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3fa906
    bool v1; // 0x3fa906
    if (v1) {
        // 0x3fa95b
        return a4 & 0xffffffff;
    }
    // 0x3fa908
    int64_t v2; // 0x3fa906
    char * v3 = (char *)(4 * v2 + 0x244f5b33 + v2); // 0x3fa908
    *v3 = *v3 + (char)(v2 / 256);
    return a1 & 0xffffffff;
}

// Address range: 0x3fa968 - 0x3fa96e
int64_t function_3fa968(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3fa968
    return function_3fa9a2(a1, *(int32_t *)(a2 + 2) ^ (int32_t)a2, a3);
}

// Address range: 0x3fa998 - 0x3fa999
int64_t function_3fa998(int64_t a1) {
    // 0x3fa998
    int64_t result; // 0x3fa998
    return result;
}

// Address range: 0x3fa9a2 - 0x3fa9be
int64_t function_3fa9a2(int64_t a1, int32_t a2, int64_t a3) {
    // 0x3fa9a2
    int64_t v1; // 0x3fa9a2
    *(int32_t *)a1 = (int32_t)v1 & 0x65704311;
    return (v1 ^ a1) & 0xffffffff;
}

// Address range: 0x3fa9e8 - 0x3fa9e9
int64_t function_3fa9e8(int64_t a1) {
    // 0x3fa9e8
    int64_t result; // 0x3fa9e8
    return result;
}

// Address range: 0x3fa9ee - 0x3fa9f1
int64_t function_3fa9ee(int64_t a1) {
    // 0x3fa9ee
    int64_t result; // 0x3fa9ee
    return result;
}

// Address range: 0x3fa9fa - 0x3fa9fd
int64_t function_3fa9fa(void) {
    // 0x3fa9fa
    int64_t result; // 0x3fa9fa
    return result;
}

// Address range: 0x3fa9fd - 0x3fa9fe
int64_t function_3fa9fd(void) {
    // 0x3fa9fd
    int64_t result; // 0x3fa9fd
    return result;
}

// Address range: 0x3faa0a - 0x3faa0e
int64_t function_3faa0a(void) {
    // 0x3faa0a
    int64_t result; // 0x3faa0a
    return result;
}

// Address range: 0x3faa11 - 0x3faa12
int64_t function_3faa11(void) {
    // 0x3faa11
    int64_t result; // 0x3faa11
    return result;
}

// Address range: 0x3faa1e - 0x3faa2e
int64_t function_3faa1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3faa1e
    int64_t result; // 0x3faa1e
    int32_t * v1 = (int32_t *)(result + 85); // 0x3faa1e
    bool v2; // 0x3faa1e
    *v1 = *v1 + (int32_t)result + (int32_t)v2;
    int64_t v3; // 0x3faa1e
    *(char *)a1 = *(char *)&v3 | (char)result;
    int32_t * v4 = (int32_t *)(a2 + 33); // 0x3faa25
    *v4 = *v4 - (int32_t)result;
    uint32_t v5 = *(int32_t *)&v3; // 0x3faa28
    uint32_t v6 = (int32_t)a4; // 0x3faa28
    uint32_t v7 = v5 + v6; // 0x3faa28
    *(int32_t *)a1 = v7;
    uint32_t v8 = v6 % 32; // 0x3faa2a
    if (v8 != 0) {
        int32_t * v9 = (int32_t *)(a4 + 3); // 0x3faa2a
        uint32_t v10 = *v9; // 0x3faa2a
        *v9 = (int32_t)(v7 < v5) << 32 - v8 | v10 >> v8 | (int32_t)((int64_t)v10 << (int64_t)(33 - v8));
    }
    return result;
}

// Address range: 0x3faa2e - 0x3faa35
int64_t function_3faa2e(void) {
    // 0x3faa2e
    int64_t v1; // 0x3faa2e
    int64_t result = v1;
    bool v2; // 0x3faa2e
    *(int32_t *)result = (int32_t)result + 0x6e3c4a8e + (int32_t)v2;
    return result;
}

// Address range: 0x3faa5b - 0x3faa83
int64_t function_3faa5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = (int64_t)*(int32_t *)(a4 - 0xcd6b6ff); // 0x3faa5b
    int64_t v2 = -0xd0ba08 * v1; // 0x3faa5b
    int64_t v3; // 0x3faa5b
    uint32_t v4 = (int32_t)v3; // 0x3faa65
    int32_t v5 = v2 != -0xd0ba0800000000 * v1 >> 32; // 0x3faa65
    uint32_t v6 = v5 + v4; // 0x3faa65
    bool v7 = v2 != -0xd0ba0800000000 * v1 >> 32 ? (int32_t)(v2 != -0xd0ba0800000000 * v1 >> 32) - v5 > v4 | v6 != -1 : v6 > v4; // 0x3faa65
    int64_t v8; // 0x3faa5b
    if (v2 != -0xd0ba0800000000 * v1 >> 32 && !v7) {
        v8 = function_3fa9fd();
    }
    int64_t v9 = v2 & 0xfffffff8; // 0x3faa5b
    uint64_t v10 = v8;
    int64_t * v11 = (int64_t *)(v3 + 2 * v3); // 0x3faa6b
    *v11 = 0x4000000 * *v11;
    uint64_t v12 = v10 / 256; // 0x3faa70
    char * v13 = (char *)v9; // 0x3faa72
    *v13 = *v13 + (char)v12;
    int64_t result = (v12 + v10) % 256 | v10 & -256; // 0x3faa78
    if (v9 == 0) {
        result = function_3faa11();
    }
    // 0x3faa7a
    return result;
}

// Address range: 0x3faaa9 - 0x3faab1
int64_t function_3faaa9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3faaa9
    return a1 & 0xffffffff;
}

// Address range: 0x3faad1 - 0x3faad6
int64_t function_3faad1(void) {
    // 0x3faad1
    return function_ffffffff8282fe83();
}

// Address range: 0x3faae1 - 0x3faaec
int64_t function_3faae1(void) {
    // 0x3faae1
    int64_t v1; // 0x3faae1
    return v1 & 0xadb218ca;
}

// Address range: 0x3fab34 - 0x3fab44
int64_t function_3fab34(int64_t a1) {
    // 0x3fab34
    int64_t v1; // 0x3fab34
    __asm_wait(v1);
    return __asm_sti() + 0x822e1fbe & 0xffffffff;
}

// Address range: 0x3fab44 - 0x3fab47
int64_t function_3fab44(void) {
    // 0x3fab44
    int64_t result; // 0x3fab44
    return result;
}

// Address range: 0x3fab51 - 0x3fab54
int64_t function_3fab51(void) {
    // 0x3fab51
    int64_t result; // 0x3fab51
    return result;
}

// Address range: 0x3fab6d - 0x3fab6e
int64_t function_3fab6d(int64_t a1) {
    // 0x3fab6d
    int64_t result; // 0x3fab6d
    return result;
}
