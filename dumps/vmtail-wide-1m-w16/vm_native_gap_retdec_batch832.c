/*
 * Targeted RetDec C for native executable gap queue batch 832.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x38e2a0-0x38e4a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38e4a0-0x38e6a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38e6a0-0x38e8a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38e8a0-0x38eaa0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38eaa0-0x38eca0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d9db9-0x3d9fb9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d9fb9-0x3da1b9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3da1b9-0x3da3b9 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1c3aceb1();
int64_t function_221268b();
int64_t function_221de03();
int64_t function_38e2a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38e36d(void);
int64_t function_38e3e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38e474(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38e4d0(void);
int64_t function_38e52b(int64_t a1);
int64_t function_38e58e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38e5b8(int64_t a1);
int64_t function_38e603(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38e630(void);
int64_t function_38e648(void);
int64_t function_38e651(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38e6b5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_38e6e5(void);
int64_t function_38e730(void);
int64_t function_38e741(void);
int64_t function_38e75d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_38e789(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38e7a0(void);
int64_t function_38e7e1(void);
int64_t function_38e808(int64_t a1);
int64_t function_38e87f(void);
int64_t function_38e880(void);
int64_t function_38e8a7(int64_t a1);
int64_t function_38e8c5(int64_t a1);
int64_t function_38e8e4(void);
int64_t function_38e8ed(void);
int64_t function_38e97f(void);
int64_t function_38ea14(void);
int64_t function_38ea37(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38eacb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38eba8(void);
int64_t function_38ebd7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38ebf2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38ec19(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38ec30(void);
int64_t function_38ec57(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39f0ea37();
int64_t function_3d9da4();
int64_t function_3d9db9(void);
int64_t function_3d9dde(int64_t a1);
int64_t function_3d9df6(void);
int64_t function_3d9e04(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d9e1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d9f3c(void);
int64_t function_3d9f9e(void);
int64_t function_3d9fa4(void);
int64_t function_3da08d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3da09d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3da0c2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3da0e8(void);
int64_t function_3da131(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3da195(void);
int64_t function_3da1a2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3da20c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3da226(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3da2ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3da330(void);
int64_t function_3da33d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3da394(void);
int64_t function_3da3b0(void);
int64_t function_bda12a();
int64_t function_cf3c7();
int64_t function_ffffffff92189eb4();
int64_t function_ffffffffd40fdd54();
int64_t unknown_10988b07();
int64_t unknown_1412d1f8();
int64_t unknown_17a0e86();
int64_t unknown_17c009e1();
int64_t unknown_19a263bf();
int64_t unknown_1ec54e9();
int64_t unknown_2038b137();
int64_t unknown_3a87ce66();
int64_t unknown_3e2354e8();
int64_t unknown_585eaba1();
int64_t unknown_68b71dd8();
int64_t unknown_704601be();
int64_t unknown_71132eb2();
int64_t unknown_72d58f8c();
int64_t unknown_773a239d();
int64_t unknown_7c3224ee();
int64_t unknown_bd9e6c();
int64_t unknown_f4ba0f();
int64_t unknown_ffffffff9202417d();
int64_t unknown_ffffffffafdab60c();
int64_t unknown_ffffffffb1feea02();
int64_t unknown_ffffffffb3db096e();
int64_t unknown_ffffffffb476cef7();
int64_t unknown_ffffffffbb4841a0();
int64_t unknown_ffffffffbd3fed93();
int64_t unknown_ffffffffd67c6191();
int64_t unknown_ffffffffdc3e4650();
int64_t unknown_ffffffffea04bac8();
int64_t unknown_fffffffffe1ca236();

// Address range: 0x38e2a0 - 0x38e36d
int64_t function_38e2a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x38e2a0
    *(int64_t *)(a4 - 8) = a4;
    *(int64_t *)(a4 - 16) = a4;
    return function_cf3c7(a1);
}

// Address range: 0x38e36d - 0x38e372
int64_t function_38e36d(void) {
    // 0x38e36d
    int64_t result; // 0x38e36d
    return result;
}

// Address range: 0x38e3e1 - 0x38e40c
int64_t function_38e3e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(unknown_1ec54e9() + 8); // 0x38e3e8
    int64_t v2; // 0x38e3e1
    *v1 = *v1 - (int32_t)v2;
    char * v3 = (char *)unknown_1412d1f8(); // 0x38e3f7
    *v3 = *v3 + (char)a3;
    char * v4 = (char *)(v2 + 0x53073b6e); // 0x38e3f9
    *v4 = *v4 | (char)a4;
    unknown_10988b07();
    return function_ffffffff92189eb4();
}

// Address range: 0x38e474 - 0x38e481
int64_t function_38e474(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a3; // 0x38e474
    unsigned char v2 = 2 * v1; // 0x38e474
    bool v3; // 0x38e474
    unsigned char v4 = v2 | (char)v3; // 0x38e474
    char * v5 = (char *)((a3 & -256 | (int64_t)v4) + 0x32bab4b8); // 0x38e476
    *v5 = v4 + *v5 + (char)(v3 ? v4 <= v1 : v2 < v1);
    int64_t result; // 0x38e474
    return result;
}

// Address range: 0x38e4d0 - 0x38e4d1
int64_t function_38e4d0(void) {
    // 0x38e4d0
    int64_t result; // 0x38e4d0
    return result;
}

// Address range: 0x38e52b - 0x38e52e
int64_t function_38e52b(int64_t a1) {
    // 0x38e52b
    int64_t result; // 0x38e52b
    return result;
}

// Address range: 0x38e58e - 0x38e59a
int64_t function_38e58e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38e58e
    __asm_frstor(*(int864_t *)(a3 + 0x1e8f0f8));
    int64_t result; // 0x38e58e
    return result;
}

// Address range: 0x38e5b8 - 0x38e5bd
int64_t function_38e5b8(int64_t a1) {
    // 0x38e5b8
    int64_t result; // 0x38e5b8
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x38e603 - 0x38e60b
int64_t function_38e603(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38e603
    int64_t result; // 0x38e603
    return result;
}

// Address range: 0x38e630 - 0x38e631
int64_t function_38e630(void) {
    // 0x38e630
    int64_t result; // 0x38e630
    return result;
}

// Address range: 0x38e648 - 0x38e651
int64_t function_38e648(void) {
    // 0x38e648
    unknown_ffffffffdc3e4650();
    int64_t v1; // 0x38e648
    return function_38e6b5(v1, v1, v1, v1);
}

// Address range: 0x38e651 - 0x38e6a1
int64_t function_38e651(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38e651
    int64_t v1; // 0x38e651
    *(int32_t *)-0x17b98d55cf9920f7 = (int32_t)v1;
    int32_t * v2 = (int32_t *)(a4 - 0x4af177ec + v1); // 0x38e65a
    uint32_t v3 = *v2; // 0x38e65a
    uint32_t v4 = v3 + (int32_t)a2; // 0x38e65a
    *v2 = v4;
    char * v5 = (char *)(a1 - 0x3ac4c261); // 0x38e661
    *v5 = *v5 + (char)v1 + (char)(v4 < v3);
    char * v6 = (char *)(unknown_ffffffffb3db096e() + 5); // 0x38e66d
    *v6 = *v6 + 1;
    __asm_iretd(a1);
    int64_t v7 = a4 - 1; // 0x38e675
    if (v7 != 0) {
        function_38e630();
    }
    uint64_t v8 = unknown_ffffffff9202417d(); // 0x38e677
    int64_t v9 = v8 / 256 % 256 | v7 & -256; // 0x38e67c
    *(char *)a1 = (char)v8;
    bool v10; // 0x38e651
    unknown_72d58f8c((v10 ? -1 : 1) + a1);
    char * v11 = (char *)v9; // 0x38e68b
    *v11 = *v11 + (char)a3;
    int32_t * v12 = (int32_t *)(v9 - 11); // 0x38e694
    *v12 = *v12 + (int32_t)v9;
    unknown_773a239d();
    return function_1c3aceb1();
}

// Address range: 0x38e6b5 - 0x38e6e3
int64_t function_38e6b5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x38e6b5
    int64_t v1; // 0x38e6b5
    uint64_t v2 = v1;
    char v3 = v2 / 256; // 0x38e6b5
    *(char *)-0x1205bf44 = *(char *)-0x1205bf44 + v3;
    char * v4 = (char *)(v2 + 0x68049f & 0xffffffff); // 0x38e6bd
    *v4 = *v4 - (char)(a3 / 256);
    unsigned char v5 = *(char *)0x197dc6d4; // 0x38e6cd
    unsigned char v6 = v5 + v3; // 0x38e6cd
    *(char *)0x197dc6d4 = v6;
    unsigned char v7 = *(char *)-0x6a0854d22437c5e7 + 110 + (char)(v6 < v5); // 0x38e6d3
    char v8 = *(char *)((v1 & -256 | (int64_t)v7) - 105); // 0x38e6d6
    int64_t v9; // 0x38e6b5
    return a4 == 1 | v7 == v8 ? (int64_t)&v9 : unknown_3e2354e8();
}

// Address range: 0x38e6e5 - 0x38e6e8
int64_t function_38e6e5(void) {
    // 0x38e6e5
    int64_t result; // 0x38e6e5
    return result;
}

// Address range: 0x38e730 - 0x38e733
int64_t function_38e730(void) {
    // 0x38e730
    int64_t result; // 0x38e730
    return result;
}

// Address range: 0x38e741 - 0x38e742
int64_t function_38e741(void) {
    // 0x38e741
    int64_t result; // 0x38e741
    return result;
}

// Address range: 0x38e75d - 0x38e787
int64_t function_38e75d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 120); // 0x38e75d
    int64_t v2; // 0x38e75d
    *v1 = *v1 | (int32_t)v2;
    unknown_3a87ce66();
    __asm_wait();
    char * v3 = (char *)(a2 - 0x17fe1792); // 0x38e768
    *v3 = *v3 + (char)(a4 / 256);
    *(int32_t *)-0x176db28b = *(int32_t *)-0x176db28b + (int32_t)a1;
    int32_t * v4 = (int32_t *)(a2 + 0xc0a8845); // 0x38e77b
    *v4 = *v4 + (int32_t)a3;
    return function_ffffffffd40fdd54();
}

// Address range: 0x38e789 - 0x38e7a0
int64_t function_38e789(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(2 * a4 + 0x1e81e1e); // 0x38e78b
    char v2 = *v1 - 40; // 0x38e78b
    *v1 = v2;
    int64_t v3; // 0x38e789
    if (v2 != 0) {
        v3 = function_38e741();
    }
    int64_t v4 = v3;
    return (v4 + 255) % 256 | v4 & -256;
}

// Address range: 0x38e7a0 - 0x38e7a8
int64_t function_38e7a0(void) {
    // 0x38e7a0
    __asm_int3();
    return function_221de03();
}

// Address range: 0x38e7e1 - 0x38e7e4
int64_t function_38e7e1(void) {
    // 0x38e7e1
    int64_t result; // 0x38e7e1
    return result;
}

// Address range: 0x38e808 - 0x38e820
int64_t function_38e808(int64_t a1) {
    // 0x38e808
    bool v1; // 0x38e808
    int64_t v2 = unknown_f4ba0f((v1 ? -4 : 4) + a1); // 0x38e809
    int64_t result = v2 & -256 | (int64_t)(*(char *)(v2 + 0x448c60d9) + (char)v2); // 0x38e80e
    char * v3 = (char *)result; // 0x38e81c
    *v3 = *v3 - 52;
    return result;
}

// Address range: 0x38e87f - 0x38e880
int64_t function_38e87f(void) {
    // 0x38e87f
    int64_t result; // 0x38e87f
    return result;
}

// Address range: 0x38e880 - 0x38e887
int64_t function_38e880(void) {
    // 0x38e880
    unknown_17a0e86();
    return function_38e87f();
}

// Address range: 0x38e8a7 - 0x38e8aa
int64_t function_38e8a7(int64_t a1) {
    // 0x38e8a7
    int64_t result; // 0x38e8a7
    return result;
}

// Address range: 0x38e8c5 - 0x38e8d6
int64_t function_38e8c5(int64_t a1) {
    // 0x38e8c5
    int64_t v1; // 0x38e8c5
    char * v2 = (char *)(v1 - 42); // 0x38e8d2
    *v2 = *v2 & (char)v1;
    return -0x1143fe17ac93a31e;
}

// Address range: 0x38e8e4 - 0x38e8e7
int64_t function_38e8e4(void) {
    // 0x38e8e4
    int64_t result; // 0x38e8e4
    return result;
}

// Address range: 0x38e8ed - 0x38e8ee
int64_t function_38e8ed(void) {
    // 0x38e8ed
    int64_t result; // 0x38e8ed
    return result;
}

// Address range: 0x38e97f - 0x38e984
int64_t function_38e97f(void) {
    // 0x38e97f
    return function_39f0ea37();
}

// Address range: 0x38ea14 - 0x38ea17
int64_t function_38ea14(void) {
    // 0x38ea14
    int64_t result; // 0x38ea14
    return result;
}

// Address range: 0x38ea37 - 0x38eaca
int64_t function_38ea37(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x38ea37
    int64_t v1; // 0x38ea37
    // 0x38ea39
    *(char *)a3 = (char)(v1 / 256) + (char)a3;
    *(char *)-0x28828cb5 = *(char *)-0x28828cb5 - 32;
    return (int64_t)(*(int32_t *)a5 ^ (int32_t)a5);
    uint32_t v2 = (int32_t)v1;
    int32_t v3 = 2 * v2;
    bool v4; // 0x38ea37
    unsigned char v5 = *(char *)(v1 + (int64_t)(v3 & 254 | (int32_t)v4)); // 0x38eab3
    char * v6 = (char *)(((int64_t)v5 | (int64_t)(v3 & -256)) - 0x5632a5fb); // 0x38eab4
    *v6 = *v6 | (char)(v2 / 128);
    int32_t * v7 = (int32_t *)(0x37013d00 * a2 & 0xffffff00); // 0x38eac0
    *v7 = *v7 | (int32_t)a4;
    int64_t result = __asm_iretd(a1); // 0x38eac2
    int32_t * v8 = (int32_t *)(a2 + 0x1e8e3a8); // 0x38eac4
    *v8 = *v8 | (int32_t)v1;
    return result;
}

// Address range: 0x38eacb - 0x38eb12
int64_t function_38eacb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x38eacb
    int64_t v2; // 0x38eacb
    if (v1 != 0) {
        int32_t * v3 = (int32_t *)(v2 + 0x44c0db0a); // 0x38eacb
        *v3 = *v3 << v1;
    }
    int32_t * v4 = (int32_t *)(a4 - 24); // 0x38ead3
    *v4 = *v4 | (int32_t)a2;
    int32_t v5 = v2; // 0x38ead6
    uint32_t v6 = *(int32_t *)0x6057adf; // 0x38ead8
    uint32_t v7 = v6 + (int32_t)a1; // 0x38ead8
    *(int32_t *)0x6057adf = v7;
    int64_t v8; // 0x38eacb
    int32_t v9 = *(int32_t *)&v8 + v5 + (int32_t)(v7 < v6); // 0x38eade
    *(int32_t *)-0x5b56f200ef817370 = (int32_t)v2 + v5;
    int64_t result = unknown_ffffffffb476cef7(); // 0x38eaf9
    if (a4 == 1 || v9 == 0) {
        // 0x38eafb
        result = unknown_ffffffffb1feea02();
    }
    int32_t * v10 = (int32_t *)((int64_t)(v9 + 0x1e84696) + 107); // 0x38eb08
    *v10 = *v10 - 0x17f3ffac;
    return result;
}

// Address range: 0x38eba8 - 0x38eba9
int64_t function_38eba8(void) {
    // 0x38eba8
    int64_t result; // 0x38eba8
    return result;
}

// Address range: 0x38ebd7 - 0x38ebf2
int64_t function_38ebd7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x38ebd7
    unknown_17c009e1(a2 & 0xffffffff);
    __asm_in(-4);
    return unknown_7c3224ee();
}

// Address range: 0x38ebf2 - 0x38ebf6
int64_t function_38ebf2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x38ebf2
    int64_t result; // 0x38ebf2
    char * v1 = (char *)(result - 26); // 0x38ebf2
    *v1 = *v1 + (char)a4;
    return result;
}

// Address range: 0x38ec19 - 0x38ec2a
int64_t function_38ec19(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38ec19
    int64_t v1; // 0x38ec19
    int64_t v2 = v1;
    return (v2 + 148) % 256 | v2 & -256;
}

// Address range: 0x38ec30 - 0x38ec35
int64_t function_38ec30(void) {
    // 0x38ec30
    return function_221268b();
}

// Address range: 0x38ec57 - 0x38ec5c
int64_t function_38ec57(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38ec57
    int64_t result; // 0x38ec57
    return result;
}

// Address range: 0x3d9db9 - 0x3d9dbe
int64_t function_3d9db9(void) {
    // 0x3d9db9
    return unknown_19a263bf();
}

// Address range: 0x3d9dde - 0x3d9de1
int64_t function_3d9dde(int64_t a1) {
    // 0x3d9dde
    int64_t result; // 0x3d9dde
    return result;
}

// Address range: 0x3d9df6 - 0x3d9df9
int64_t function_3d9df6(void) {
    // 0x3d9df6
    int64_t result; // 0x3d9df6
    return result;
}

// Address range: 0x3d9e04 - 0x3d9e1b
int64_t function_3d9e04(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d9e04
    bool v1; // 0x3d9e04
    if (!v1) {
        function_3d9da4();
    }
    // 0x3d9e06
    unknown_ffffffffafdab60c();
    int32_t * v2 = (int32_t *)(a4 + 0x322eea4c); // 0x3d9e0b
    *v2 = *v2 | -0x7320fe18;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v3; // 0x3d9e04
    return v3 & 0xffffffff;
}

// Address range: 0x3d9e1e - 0x3d9e5f
int64_t function_3d9e1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d9e1e
    unknown_bd9e6c();
    *(int32_t *)a1 = (int32_t)a2;
    int64_t v1; // 0x3d9e1e
    int32_t * v2 = (int32_t *)(v1 - 0x662a9100); // 0x3d9e36
    *v2 = *v2 + (int32_t)v1;
    __asm_in_133(-24);
    int32_t * v3 = (int32_t *)(v1 + 0x77bd6c55); // 0x3d9e47
    *v3 = *v3 + (int32_t)a3;
    bool v4; // 0x3d9e1e
    char * v5 = (char *)((v4 ? -4 : 4) + a2); // 0x3d9e5a
    *v5 = *v5 + (char)(v1 / 256);
    return 0x63d2f442;
}

// Address range: 0x3d9f3c - 0x3d9f3d
int64_t function_3d9f3c(void) {
    // 0x3d9f3c
    int64_t result; // 0x3d9f3c
    return result;
}

// Address range: 0x3d9f9e - 0x3d9f9f
int64_t function_3d9f9e(void) {
    // 0x3d9f9e
    int64_t result; // 0x3d9f9e
    return result;
}

// Address range: 0x3d9fa4 - 0x3d9fa6
int64_t function_3d9fa4(void) {
    // 0x3d9fa4
    return function_3d9f9e();
}

// Address range: 0x3da08d - 0x3da09d
int64_t function_3da08d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffffbd3fed93(); // 0x3da08d
    int32_t * v2 = (int32_t *)(a3 + a2); // 0x3da099
    int64_t v3; // 0x3da08d
    *v2 = *v2 + (int32_t)v3;
    return v1 + 0xe8d91568 & 0xffffffff;
}

// Address range: 0x3da09d - 0x3da0b7
int64_t function_3da09d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3da09d
    int64_t v1; // 0x3da09d
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 & 0xe894dbaf); // 0x3da0a4
    *v3 = *v3 + (int32_t)a3;
    char * v4 = (char *)(a2 + 122); // 0x3da0a6
    *v4 = *v4 | (char)(v2 / 256 + a4);
    __asm_sti();
    int64_t v5; // 0x3da09d
    return unknown_71132eb2() & -256 | (int64_t)*(char *)&v5;
}

// Address range: 0x3da0c2 - 0x3da0e6
int64_t function_3da0c2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t result = unknown_ffffffffea04bac8(); // 0x3da0c2
    // 0x3da0de
    return (result + a4 / 256) % 256 | result & -256;
    // 0x3da0d4
    return result;
}

// Address range: 0x3da0e8 - 0x3da0ed
int64_t function_3da0e8(void) {
    // 0x3da0e8
    return function_bda12a();
}

// Address range: 0x3da131 - 0x3da193
int64_t function_3da131(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_2038b137(); // 0x3da131
    bool v2; // 0x3da131
    if (!v2 && !v2) {
        char * v3 = (char *)(a1 - 0x2bfe1793); // 0x3da13d
        *v3 = *v3 | (char)v1;
        __asm_wait();
        int32_t * v4 = (int32_t *)(a2 + 67); // 0x3da147
        *v4 = *v4 + (int32_t)a1;
        return *(int64_t *)0xd0c6a6;
    }
    // 0x3da174
    int64_t v5; // 0x3da131
    int64_t v6 = (int64_t)((int32_t)a1 - *(int32_t *)(v5 + 0x98c019d)); // 0x3da181
    *(int32_t *)v6 = (int32_t)a2;
    int64_t v7 = v2 ? -4 : 4; // 0x3da18a
    int64_t v8 = v7 + v6; // 0x3da18a
    int64_t result = unknown_ffffffffd67c6191(v8, v7 + a2); // 0x3da18b
    *(char *)v8 = __asm_insb((int16_t)a3);
    return result;
}

// Address range: 0x3da195 - 0x3da1a2
int64_t function_3da195(void) {
    // 0x3da195
    return unknown_ffffffffbb4841a0();
}

// Address range: 0x3da1a2 - 0x3da1be
int64_t function_3da1a2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x3da1a4
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(a4 - 0x3ffe1800); // 0x3da1a4
        uint32_t v3 = *v2; // 0x3da1a4
        int64_t v4; // 0x3da1a2
        *v2 = v3 << v1 | (int32_t)(-1 - (char)v4 < (char)(a3 / 256)) << v1 - 1 | (int32_t)((int64_t)v3 >> (int64_t)(33 - v1));
    }
    return unknown_704601be();
}

// Address range: 0x3da20c - 0x3da226
int64_t function_3da20c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3da20c
    int64_t v1; // 0x3da20c
    *(char *)-0x3ec0d7efd30da289 = (char)v1;
    int32_t v2 = v1;
    __asm_out((int16_t)a3, v2);
    *(int32_t *)v1 = 2 * v2;
    return a1 & 0xffffffff;
}

// Address range: 0x3da226 - 0x3da2da
int64_t function_3da226(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x3da226
    int64_t v1; // 0x3da226
    uint64_t v2 = v1;
    char v3 = __asm_in_134((int16_t)a3); // 0x3da22a
    if (a4 != 0) {
        // 0x3da22d
        unknown_fffffffffe1ca236();
        *(char *)0x57fbd93b = *(char *)0x57fbd93b + (char)(v2 / 256);
        __asm_wait();
        __asm_int(-119);
        return __asm_int3();
    }
    int32_t * v4 = (int32_t *)(a1 - 63); // 0x3da298
    uint32_t v5 = *v4; // 0x3da298
    uint32_t v6 = v5 + (int32_t)a3; // 0x3da298
    *v4 = v6;
    if (v6 < v5 || v6 == 0) {
        int64_t result = unknown_68b71dd8(); // 0x3da2d2
        char * v7 = (char *)(v2 - 47); // 0x3da2d7
        *v7 = *v7 + (char)(a3 / 256);
        return result;
    }
    // 0x3da29d
    return (int64_t)v3 & -256 | 2 * v1 & 0xffffff00 | (int64_t)__asm_in(70);
}

// Address range: 0x3da2ed - 0x3da330
int64_t function_3da2ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x3da2ed
    int64_t v3 = (v2 & 0xffffffbe) + 0x6406ff4f; // 0x3da2f5
    int64_t v4 = (v3 & 0xffffff00 | (int64_t)((char)v3 / 2 | -128)) + 0x653a1a20; // 0x3da301
    int32_t v5 = v4; // 0x3da306
    *(int32_t *)0x3a06e0ce081ebb = v5;
    char * v6 = (char *)(a2 + 12); // 0x3da314
    *v6 = *v6 | (char)a4;
    *(int32_t *)v1 = *(int32_t *)&v1 + v5;
    return v4 & 0xffffff00 | (int64_t)__asm_in(-87);
}

// Address range: 0x3da330 - 0x3da339
int64_t function_3da330(void) {
    // 0x3da330
    int64_t v1; // 0x3da330
    int64_t v2 = v1;
    return (v2 + 105) % 256 | v2 & -256;
}

// Address range: 0x3da33d - 0x3da390
int64_t function_3da33d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3da33d
    int64_t v1; // 0x3da33d
    *(char *)a2 = (char)v1 + (char)a2;
    int64_t result; // 0x3da33d
    uint32_t v2 = *(int32_t *)&result; // 0x3da343
    uint32_t v3 = v2 + (int32_t)result; // 0x3da343
    *(int32_t *)result = v3;
    int32_t v4 = *(int32_t *)(2 * a3 - 0x9bb71f7 + result); // 0x3da345
    uint64_t v5 = (int64_t)((int32_t)a4 - v4 + (int32_t)(v3 < v2)) - 1; // 0x3da350
    uint64_t v6 = v5 / 256; // 0x3da353
    *(char *)-0x727030fec2ffdaf7 = (char)result;
    if ((char)(2 * v6 ^ v6) < 0) {
        // 0x3da3e2
        return result;
    }
    char v7 = *(char *)0x3423bd7a; // 0x3da373
    *(char *)0x3423bd7a = v7 + (char)((uint64_t)v1 / 256);
    int64_t result2 = unknown_585eaba1(); // 0x3da379
    char * v8 = (char *)(a2 - 0x75f903c4); // 0x3da37e
    *v8 = *v8 | (char)v5;
    return result2;
}

// Address range: 0x3da394 - 0x3da396
int64_t function_3da394(void) {
    // 0x3da394
    int64_t result; // 0x3da394
    return result;
}

// Address range: 0x3da3b0 - 0x3da3b1
int64_t function_3da3b0(void) {
    // 0x3da3b0
    int64_t result; // 0x3da3b0
    return result;
}
