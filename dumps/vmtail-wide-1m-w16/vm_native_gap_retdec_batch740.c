/*
 * Targeted RetDec C for native executable gap queue batch 740.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3a3b39-0x3a3d39 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a3d39-0x3a3f39 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a3f39-0x3a4139 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a4139-0x3a4339 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a4339-0x3a4539 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44a325-0x44a525 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44a725-0x44a825 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44ab25-0x44ad25 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1774261();
int64_t function_21c4888();
int64_t function_313c2cee();
int64_t function_3a3ae2();
int64_t function_3a3b39(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a3b9e(void);
int64_t function_3a3bad(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a3be4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a3c04(void);
int64_t function_3a3c33(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a3c95(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a3d20(int64_t a1);
int64_t function_3a3d33(void);
int64_t function_3a3dbc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a3e4c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a3e6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a3e83(void);
int64_t function_3a3efe(int64_t a1);
int64_t function_3a3f63(void);
int64_t function_3a3f78(void);
int64_t function_3a3f96(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a3fb7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a404b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3a4099(void);
int64_t function_3a40aa(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3a40c6(void);
int64_t function_3a40e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a4110(int64_t a1);
int64_t function_3a4126(int64_t a1);
int64_t function_3a4133(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a415e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3a416a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a419c(void);
int64_t function_3a41ac(void);
int64_t function_3a4213(void);
int64_t function_3a4236(void);
int64_t function_3a4278(void);
int64_t function_3a4283(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3a429f(void);
int64_t function_3a42a8(void);
int64_t function_3a42be(void);
int64_t function_3a42ca(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_3a434f(void);
int64_t function_3a437a(void);
int64_t function_3a4396(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a43b1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a444d(void);
int64_t function_3a4476(void);
int64_t function_3a4492(void);
int64_t function_3a44c6(int64_t a1);
int64_t function_44a325(void);
int64_t function_44a35b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44a3f6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44a431(void);
int64_t function_44a442(int64_t a1);
int64_t function_44a454(void);
int64_t function_44a465(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44a490(void);
int64_t function_44a4a1(int64_t a1);
int64_t function_44a4e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44a513(int64_t a1);
int64_t function_44a725(void);
int64_t function_44a739(void);
int64_t function_44a79b(void);
int64_t function_44a7a7(void);
int64_t function_44a7d2(void);
int64_t function_44a7fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44ab25(int64_t a1, int64_t a2, int16_t a3);
int64_t function_44ab5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44ac6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44ac7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44acd9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_68f344ea();
int64_t function_b53c0863();
int64_t function_ffffffffd43b7cb3();
int64_t function_ffffffffdd650c8b();
int64_t function_ffffffffde9d8d0e();
int64_t function_ffffffffe53b7e8c();
int64_t function_fffffffffa2344ae();
int64_t function_fffffffffd3b7e51();
int64_t unknown_1841a8c3();
int64_t unknown_3aac5a7e();
int64_t unknown_3da7f2b7();
int64_t unknown_4d80f36();
int64_t unknown_78679a5c();
int64_t unknown_ffffffffc0985ecf();

// Address range: 0x3a3b39 - 0x3a3b4e
int64_t function_3a3b39(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a3b39
    bool v1; // 0x3a3b39
    if (v1) {
        function_3a3ae2();
    }
    uint32_t v2 = __asm_in(-11); // 0x3a3b40
    int32_t * v3 = (int32_t *)(a3 + 0x550ad803); // 0x3a3b44
    *v3 = *v3 - (int32_t)a3 + (int32_t)(v2 < (int32_t)a1);
    return 0x10000 * (int32_t)a4 >> 16;
}

// Address range: 0x3a3b9e - 0x3a3b9f
int64_t function_3a3b9e(void) {
    // 0x3a3b9e
    int64_t result; // 0x3a3b9e
    return result;
}

// Address range: 0x3a3bad - 0x3a3bc5
int64_t function_3a3bad(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a3bad
    int64_t v1; // 0x3a3bad
    int32_t * v2 = (int32_t *)(v1 - 0x7438bbfa); // 0x3a3bb4
    *v2 = (int32_t)a2;
    int64_t v3 = (int64_t)*v2; // 0x3a3bb4
    *(char *)a1 = *(char *)v3;
    bool v4; // 0x3a3bad
    int64_t v5 = v4 ? -1 : 1; // 0x3a3bba
    __asm_hlt(v5 + a1, v5 + v3);
    return function_3a3b9e();
}

// Address range: 0x3a3be4 - 0x3a3beb
int64_t function_3a3be4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a3be4
    int64_t v1; // 0x3a3be4
    *(int32_t *)a3 = 2 * (int32_t)v1;
    return function_21c4888();
}

// Address range: 0x3a3c04 - 0x3a3c05
int64_t function_3a3c04(void) {
    // 0x3a3c04
    int64_t result; // 0x3a3c04
    return result;
}

// Address range: 0x3a3c33 - 0x3a3c70
int64_t function_3a3c33(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a3c33
    int64_t v1; // 0x3a3c33
    int64_t v2 = v1;
    int64_t v3 = a2;
    *(char *)-0x3f9cd7edb4f01aa3 = (char)v1;
    int64_t v4; // 0x3a3c33
    if (a4 == 0) {
        v4 = function_3a3c04();
    }
    uint64_t v5 = v4;
    uint32_t v6 = (int32_t)v5;
    *(int32_t *)v5 = 2 * v6;
    __asm_outsd(0x436f, *(int32_t *)&v3);
    int64_t v7 = v6 < 0xe43f9701 ? 105 : 104; // 0x3a3c4f
    char * v8 = (char *)((v5 - v7) % 256 | v5 & -256); // 0x3a3c51
    *v8 = *v8 & (char)(v5 / 256);
    char * v9 = (char *)(a4 - 47); // 0x3a3c5b
    *v9 = *v9 + (char)(((v2 & 0xff00) + v2) / 256);
    char * v10 = (char *)(a1 - 71); // 0x3a3c63
    *v10 = *v10 | (char)a4;
    *(int32_t *)a1 = *(int32_t *)&v3;
    __asm_in_133(0x436f);
    return function_ffffffffde9d8d0e();
}

// Address range: 0x3a3c95 - 0x3a3cab
int64_t function_3a3c95(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a3c95
    int64_t v1; // 0x3a3c95
    __asm_outsb((int16_t)a3, (char)v1);
    int32_t * v2 = (int32_t *)(v1 - 0x386884f0); // 0x3a3c9d
    uint32_t v3 = *v2; // 0x3a3c9d
    uint32_t v4 = (int32_t)a2; // 0x3a3c9d
    int32_t v5 = v3 + v4; // 0x3a3c9d
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x3a3c9d
    *v2 = v5;
    return v1 & -0xff01 | 256 * (64 * (int64_t)(v5 == 0) | (int64_t)(v5 < v3) | 128 * (int64_t)(v5 < 0) | 16 * (int64_t)(v3 % 16 + v4 % 16 > 15) | 4 * (int64_t)(v6 % 2 == 0)) | 512;
}

// Address range: 0x3a3d20 - 0x3a3d23
int64_t function_3a3d20(int64_t a1) {
    // 0x3a3d20
    int64_t result; // 0x3a3d20
    return result;
}

// Address range: 0x3a3d33 - 0x3a3d36
int64_t function_3a3d33(void) {
    // 0x3a3d33
    int64_t result; // 0x3a3d33
    return result;
}

// Address range: 0x3a3dbc - 0x3a3dc6
int64_t function_3a3dbc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a3dbc
    return __asm_in_133((int16_t)a3);
}

// Address range: 0x3a3e4c - 0x3a3e6a
int64_t function_3a3e4c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a3e4c
    int64_t v1; // 0x3a3e4c
    char * v2 = (char *)(a3 + 0x5a2f16e3 + 8 * v1); // 0x3a3e4e
    *v2 = *v2 & (char)a3;
    int64_t v3; // 0x3a3e4c
    return unknown_78679a5c() & -256 | (int64_t)*(char *)&v3;
}

// Address range: 0x3a3e6b - 0x3a3e83
int64_t function_3a3e6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a3e6b
    int64_t v1; // 0x3a3e6b
    int64_t result = v1 & 0xd0a0040; // 0x3a3e73
    int32_t * v2 = (int32_t *)result; // 0x3a3e78
    *v2 = *v2 + (int32_t)result;
    float80_t v3; // 0x3a3e6b
    *(int16_t *)(a3 - 0x9abae1b) = (int16_t)v3;
    return result;
}

// Address range: 0x3a3e83 - 0x3a3e84
int64_t function_3a3e83(void) {
    // 0x3a3e83
    int64_t result; // 0x3a3e83
    return result;
}

// Address range: 0x3a3efe - 0x3a3f18
int64_t function_3a3efe(int64_t a1) {
    // 0x3a3efe
    __asm_int3();
    int64_t v1; // 0x3a3efe
    *(char *)a1 = 2 * (char)v1;
    int32_t * v2 = (int32_t *)(v1 + 0x4499ebec); // 0x3a3f09
    *v2 = *v2 + (int32_t)v1;
    return function_b53c0863();
}

// Address range: 0x3a3f63 - 0x3a3f68
int64_t function_3a3f63(void) {
    // 0x3a3f63
    int64_t result; // 0x3a3f63
    return result;
}

// Address range: 0x3a3f78 - 0x3a3f7d
int64_t function_3a3f78(void) {
    // 0x3a3f78
    return function_68f344ea();
}

// Address range: 0x3a3f96 - 0x3a3fb3
int64_t function_3a3f96(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a3f96
    return function_ffffffffd43b7cb3();
}

// Address range: 0x3a3fb7 - 0x3a403c
int64_t function_3a3fb7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a3fb7
    int64_t v1; // 0x3a3fb7
    bool v2; // 0x3a3fb7
    if (v2) {
        int64_t result; // 0x3a3fb7
        // 0x3a3fc4
        return result;
        unsigned char v3 = llvm_ctpop_i8((char)(v1 | a4)); // 0x3a3fbb
        result = unknown_1841a8c3();
        if (v3 % 2 == 0) {
            // 0x3a3fc4
            return result;
        }
        int64_t result2 = unknown_4d80f36(); // 0x3a4030
        __asm_out(52, (char)result2);
        return result2;
    }
    int64_t v4 = v1 + 35; // 0x3a3fce
    char * v5 = (char *)(v1 + v4); // 0x3a3fce
    unsigned char v6 = *v5; // 0x3a3fce
    unsigned char v7 = v6 + (char)v1; // 0x3a3fce
    *v5 = v7;
    int64_t result3 = v1 & -256 | (int64_t)__asm_in_134(-14); // 0x3a3fd3
    if (v7 < v6 || v7 == 0) {
        // 0x3a3fc4
        return result3;
    }
    // 0x3a3fd7
    *(char *)-0x57bbab18 = *(char *)-0x57bbab18 + (char)(v1 / 256);
    int64_t v8 = result3 & 0x21c0 | 0x3b6cd83f; // 0x3a3fe7
    char * v9 = (char *)(v8 + v4); // 0x3a3fce
    unsigned char v10 = *v9; // 0x3a3fce
    unsigned char v11 = v10 + (char)v8; // 0x3a3fce
    *v9 = v11;
    int64_t result4 = v8 & 0x3b6cf900 | (int64_t)__asm_in_134(-14); // 0x3a3fd3
    while (v11 >= v10 && v11 != 0) {
        // 0x3a3fd7
        *(char *)-0x57bbab18 = *(char *)-0x57bbab18 + (char)(v1 / 256);
        v8 = result4 & 0x21c0 | 0x3b6cd83f;
        v9 = (char *)(v8 + v4);
        v10 = *v9;
        v11 = v10 + (char)v8;
        *v9 = v11;
        result4 = v8 & 0x3b6cf900 | (int64_t)__asm_in_134(-14);
    }
    // 0x3a3fc4
    return result4;
}

// Address range: 0x3a404b - 0x3a405b
int64_t function_3a404b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3a404b
    int64_t v1; // 0x3a404b
    char * v2 = (char *)(v1 - 7); // 0x3a4051
    *v2 = *v2 + (char)(a3 / 256);
    return function_fffffffffd3b7e51();
}

// Address range: 0x3a4099 - 0x3a409a
int64_t function_3a4099(void) {
    // 0x3a4099
    int64_t result; // 0x3a4099
    return result;
}

// Address range: 0x3a40aa - 0x3a40af
int64_t function_3a40aa(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3a40aa
    *(char *)a3 = (char)(a3 / 256);
    int64_t result; // 0x3a40aa
    return result;
}

// Address range: 0x3a40c6 - 0x3a40cd
int64_t function_3a40c6(void) {
    // 0x3a40c6
    int64_t result; // 0x3a40c6
    char * v1 = (char *)(result + 0xc350104); // 0x3a40c6
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x3a40e0 - 0x3a4107
int64_t function_3a40e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a40e0
    int64_t result; // 0x3a40e0
    if (a4 == 0) {
        result = function_3a4099();
    }
    // 0x3a40e2
    bool v1; // 0x3a40e0
    if (v1) {
        // 0x3a40f8
        *(char *)-0x142bbf234b9c6ec6 = (char)result;
        return result;
    }
    // 0x3a40e4
    *(char *)a3 = (char)a4;
    *(char *)a1 = __asm_insb((int16_t)a3);
    return result;
}

// Address range: 0x3a4110 - 0x3a4113
int64_t function_3a4110(int64_t a1) {
    // 0x3a4110
    int64_t result; // 0x3a4110
    return result;
}

// Address range: 0x3a4126 - 0x3a4129
int64_t function_3a4126(int64_t a1) {
    // 0x3a4126
    int64_t result; // 0x3a4126
    return result;
}

// Address range: 0x3a4133 - 0x3a414e
int64_t function_3a4133(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a4133
    int64_t v1; // 0x3a4133
    char * v2 = (char *)(v1 + 14); // 0x3a4133
    unsigned char v3 = *v2; // 0x3a4133
    unsigned char v4 = v3 + (char)v1; // 0x3a4133
    *v2 = v4;
    uint32_t v5 = *(int32_t *)(v1 + 0x1d4abd7f) + (int32_t)v1 + (int32_t)(v4 < v3); // 0x3a4136
    int64_t v6 = (int64_t)*(int32_t *)(a1 + 0x5b95ff01); // 0x3a413e
    return ((int64_t)v5 + 85 + (int64_t)(0x3a0210f2 * v6 != 0x3a0210f200000000 * v6 >> 32)) % 256 | (int64_t)(v5 & -256);
}

// Address range: 0x3a415e - 0x3a4167
int64_t function_3a415e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3a415e
    int64_t v1; // 0x3a415e
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a2 + 0x749a07ed); // 0x3a4160
    *v3 = *v3 + (int32_t)a4;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x3a416a - 0x3a418c
int64_t function_3a416a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a416a
    int64_t v1; // 0x3a416a
    uint32_t v2 = 0x10000 * (int32_t)v1 >> 16; // 0x3a416a
    *(char *)a1 = (char)v2;
    bool v3; // 0x3a416a
    int64_t v4 = (v3 ? 0xffffffff : 1) + a1; // 0x3a4174
    int64_t v5 = v2; // 0x3a4175
    char v6 = *(char *)(v5 - 0x46d9c4ad); // 0x3a417c
    int64_t v7 = v4 & 0xffffff00 | (int64_t)(v6 ^ (char)v4); // 0x3a417c
    int32_t * v8 = (int32_t *)v7; // 0x3a4183
    *v8 = *v8 & (int32_t)v7;
    return function_ffffffffe53b7e8c(v5, (int32_t)a3 + (int32_t)a2);
}

// Address range: 0x3a419c - 0x3a41a1
int64_t function_3a419c(void) {
    // 0x3a419c
    return function_1774261();
}

// Address range: 0x3a41ac - 0x3a41ae
int64_t function_3a41ac(void) {
    // 0x3a41ac
    int64_t result; // 0x3a41ac
    return result;
}

// Address range: 0x3a4213 - 0x3a4216
int64_t function_3a4213(void) {
    // 0x3a4213
    int64_t result; // 0x3a4213
    return result;
}

// Address range: 0x3a4236 - 0x3a4238
int64_t function_3a4236(void) {
    // 0x3a4236
    int64_t v1; // 0x3a4236
    return function_3a4283(v1, v1, v1, v1);
}

// Address range: 0x3a4278 - 0x3a4283
int64_t function_3a4278(void) {
    int64_t result = unknown_3aac5a7e(); // 0x3a4278
    char * v1 = (char *)(result + 0x48c6be00); // 0x3a427d
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x3a4283 - 0x3a428f
int64_t function_3a4283(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3a4283
    int64_t v1; // 0x3a4283
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v1 - 0x66ff4300); // 0x3a4285
    *v3 = *v3 + (int32_t)v1;
    char * v4 = (char *)(a4 + 88 + 8 * v1); // 0x3a428b
    *v4 = *v4 + (char)(v2 / 256);
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x3a429f - 0x3a42a0
int64_t function_3a429f(void) {
    // 0x3a429f
    int64_t result; // 0x3a429f
    return result;
}

// Address range: 0x3a42a8 - 0x3a42a9
int64_t function_3a42a8(void) {
    // 0x3a42a8
    int64_t result; // 0x3a42a8
    return result;
}

// Address range: 0x3a42be - 0x3a42c6
int64_t function_3a42be(void) {
    // 0x3a42be
    return function_fffffffffa2344ae();
}

// Address range: 0x3a42ca - 0x3a42fc
int64_t function_3a42ca(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x3a42ca
    int64_t v1; // 0x3a42ca
    if (0x100000000 * v1 >> 32 <= a3) {
        function_3a42a8();
    }
    // 0x3a42ce
    *(char *)-0x1c32dd75 = *(char *)-0x1c32dd75 - 1;
    int64_t v2 = function_3a429f(); // 0x3a42db
    int32_t * v3 = (int32_t *)(v1 + 0x1e89681 + 4 * v2); // 0x3a42dd
    int64_t v4; // 0x3a42ca
    *v3 = *v3 + (int32_t)v4;
    __asm_out_135(126, (int32_t)v2);
    uint64_t v5 = __asm_wait(); // 0x3a42e6
    char * v6 = (char *)(v5 + 0x1500cb0c); // 0x3a42e7
    unsigned char v7 = *v6; // 0x3a42e7
    unsigned char v8 = v7 + (char)(v5 / 256); // 0x3a42e7
    *v6 = v8;
    uint32_t v9 = (int32_t)a1 - (int32_t)v5 + (int32_t)(v8 < v7); // 0x3a42ed
    unsigned char v10 = llvm_ctpop_i8((char)v9); // 0x3a42ed
    *(char *)0x3e013a8bd401e8ab = (char)v5;
    __asm_in_136((int16_t)a3);
    while (v10 % 2 == 0) {
        // 0x3a42d2
        v4 = v4 + v1 & 0xffffffff;
        *(char *)-0x1c32dd75 = *(char *)-0x1c32dd75 - 1;
        v2 = function_3a429f();
        v3 = (int32_t *)(v1 + 0x1e89681 + 4 * v2);
        *v3 = *v3 + (int32_t)v4;
        __asm_out_135(126, (int32_t)v2);
        v5 = __asm_wait();
        v6 = (char *)(v5 + 0x1500cb0c);
        v7 = *v6;
        v8 = v7 + (char)(v5 / 256);
        *v6 = v8;
        v9 = (int32_t)(int64_t)v9 - (int32_t)v5 + (int32_t)(v8 < v7);
        v10 = llvm_ctpop_i8((char)v9);
        *(char *)0x3e013a8bd401e8ab = (char)v5;
        __asm_in_136((int16_t)a3);
    }
    // 0x3a42fb
    return a3 & 0xffffffff;
}

// Address range: 0x3a434f - 0x3a4352
int64_t function_3a434f(void) {
    // 0x3a434f
    int64_t result; // 0x3a434f
    return result;
}

// Address range: 0x3a437a - 0x3a437b
int64_t function_3a437a(void) {
    // 0x3a437a
    int64_t result; // 0x3a437a
    return result;
}

// Address range: 0x3a4396 - 0x3a43ab
int64_t function_3a4396(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a4396
    int64_t result; // 0x3a4396
    int64_t v1; // 0x3a4396
    if ((a4 & -0xff01 || (int64_t)"addrinfo") != 1 && (int32_t)v1 != -0x13ccffff) {
        result = function_3a437a();
    }
    // 0x3a439f
    return result;
}

// Address range: 0x3a43b1 - 0x3a43d0
int64_t function_3a43b1(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_3da7f2b7(); // 0x3a43b1
    int32_t * v2 = (int32_t *)(a3 - 0x3f6e0bf9); // 0x3a43b6
    int64_t v3; // 0x3a43b1
    *v2 = *v2 + (int32_t)v3;
    int64_t result = v1 & 0xe89ed3af; // 0x3a43bc
    int32_t * v4 = (int32_t *)(result + 0x40213a80); // 0x3a43c1
    *v4 = *v4 + (int32_t)v3;
    return result;
}

// Address range: 0x3a444d - 0x3a4452
int64_t function_3a444d(void) {
    // 0x3a444d
    return function_313c2cee();
}

// Address range: 0x3a4476 - 0x3a4477
int64_t function_3a4476(void) {
    // 0x3a4476
    int64_t result; // 0x3a4476
    return result;
}

// Address range: 0x3a4492 - 0x3a4493
int64_t function_3a4492(void) {
    // 0x3a4492
    int64_t result; // 0x3a4492
    return result;
}

// Address range: 0x3a44c6 - 0x3a44cc
int64_t function_3a44c6(int64_t a1) {
    // 0x3a44c6
    return unknown_ffffffffc0985ecf(a1);
}

// Address range: 0x44a325 - 0x44a327
int64_t function_44a325(void) {
    // 0x44a325
    int64_t v1; // 0x44a325
    return v1 & -248;
}

// Address range: 0x44a35b - 0x44a364
int64_t function_44a35b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44a35b
    int64_t v1; // 0x44a35b
    int64_t v2 = v1;
    char v3 = *(char *)(a2 - 67); // 0x44a35b
    bool v4; // 0x44a35b
    return v2 & -256 | (int64_t)(v3 + (char)v2 + (char)v4);
}

// Address range: 0x44a3f6 - 0x44a3f9
int64_t function_44a3f6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44a3f6
    int64_t result; // 0x44a3f6
    return result;
}

// Address range: 0x44a431 - 0x44a433
int64_t function_44a431(void) {
    // 0x44a431
    return function_44a490();
}

// Address range: 0x44a442 - 0x44a443
int64_t function_44a442(int64_t a1) {
    // 0x44a442
    int64_t result; // 0x44a442
    return result;
}

// Address range: 0x44a454 - 0x44a457
int64_t function_44a454(void) {
    // 0x44a454
    int64_t result; // 0x44a454
    return result;
}

// Address range: 0x44a465 - 0x44a475
int64_t function_44a465(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a4 % 32; // 0x44a465
    int64_t result; // 0x44a465
    if (v1 != 0) {
        char * v2 = (char *)(result - 96); // 0x44a465
        *v2 = *v2 >> v1;
    }
    return result;
}

// Address range: 0x44a490 - 0x44a498
int64_t function_44a490(void) {
    // 0x44a490
    int64_t v1; // 0x44a490
    float80_t v2; // 0x44a490
    *(float80_t *)v1 = __asm_fbstp(v2);
    return v1 & 0x6d6ca11e;
}

// Address range: 0x44a4a1 - 0x44a4a4
int64_t function_44a4a1(int64_t a1) {
    // 0x44a4a1
    int64_t result; // 0x44a4a1
    return result;
}

// Address range: 0x44a4e5 - 0x44a512
int64_t function_44a4e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t result = *(int32_t *)0x768191379f40978; // 0x44a4e5
    char * v1 = (char *)(a4 - 78); // 0x44a4f0
    *v1 = *v1 | (char)(result / 256);
    return result;
}

// Address range: 0x44a513 - 0x44a519
int64_t function_44a513(int64_t a1) {
    // 0x44a513
    int64_t result; // 0x44a513
    char * v1 = (char *)(result - 42); // 0x44a513
    bool v2; // 0x44a513
    *v1 = (char)v2 - (char)result + *v1;
    return result;
}

// Address range: 0x44a725 - 0x44a727
int64_t function_44a725(void) {
    // 0x44a725
    int64_t v1; // 0x44a725
    int64_t v2 = v1;
    bool v3; // 0x44a725
    return (v2 - (v3 ? 70 : 69)) % 256 | v2 & -256;
}

// Address range: 0x44a739 - 0x44a73e
int64_t function_44a739(void) {
    // 0x44a739
    return function_ffffffffdd650c8b();
}

// Address range: 0x44a79b - 0x44a79c
int64_t function_44a79b(void) {
    // 0x44a79b
    int64_t result; // 0x44a79b
    return result;
}

// Address range: 0x44a7a7 - 0x44a7a8
int64_t function_44a7a7(void) {
    // 0x44a7a7
    int64_t result; // 0x44a7a7
    return result;
}

// Address range: 0x44a7d2 - 0x44a7d3
int64_t function_44a7d2(void) {
    // 0x44a7d2
    int64_t result; // 0x44a7d2
    return result;
}

// Address range: 0x44a7fb - 0x44a80b
int64_t function_44a7fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 0x2ddce697); // 0x44a7fb
    int64_t result; // 0x44a7fb
    int32_t v2 = *v1 ^ (int32_t)result; // 0x44a7fb
    unsigned char v3 = llvm_ctpop_i8((char)v2); // 0x44a7fb
    *v1 = v2;
    if (v3 % 2 == 0) {
        // 0x44a87b
        return result;
    }
    if (a4 != 1) {
        function_44a7a7();
    }
    // 0x44a806
    __asm_clts();
    return function_44a79b();
}

// Address range: 0x44ab25 - 0x44ab32
int64_t function_44ab25(int64_t a1, int64_t a2, int16_t a3) {
    // 0x44ab25
    bool v1; // 0x44ab25
    int64_t v2 = v1 ? -1 : 1; // 0x44ab25
    int32_t v3 = __asm_in(53); // 0x44ab26
    unsigned char v4 = *(char *)(v2 + a2); // 0x44ab28
    int64_t v5 = v2 + a1 + (v1 ? 0xfffffffc : 4); // 0x44ab29
    char v6 = *(char *)((int64_t)(v3 & -256 | (int32_t)v4) + 48); // 0x44ab2f
    return v5 & 0xffffff00 | (int64_t)((char)v5 - v6);
}

// Address range: 0x44ab5a - 0x44ab60
int64_t function_44ab5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44ab5a
    return a4 & 0xffffffff;
}

// Address range: 0x44ac6d - 0x44ac74
int64_t function_44ac6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44ac6d
    int64_t v1; // 0x44ac6d
    return v1 ^ 128;
}

// Address range: 0x44ac7f - 0x44ac81
int64_t function_44ac7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44ac7f
    int64_t result; // 0x44ac7f
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x44acd9 - 0x44ad23
int64_t function_44acd9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x44acd9
    int64_t v1; // 0x44acd9
    uint64_t result = v1;
    int64_t v2 = a2;
    char * v3 = (char *)(a2 - 0x2d1fc128); // 0x44acdc
    char v4 = *v3 - (char)(result / 256); // 0x44acdc
    *v3 = v4;
    if (a4 != 1 == v4 == 0) {
        // 0x44ad5d
        return result;
    }
    // 0x44ace4
    if (llvm_ctpop_i8(v4) % 2 == 0) {
        // 0x44ace7
        return (result + 213) % 256 | result & -256;
    }
    // 0x44ad0b
    *(int64_t *)(a4 - 0x79b8ea84) = 0x6f3ea318;
    return result & -256 | (int64_t)*(char *)&v2;
}
