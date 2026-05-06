/*
 * Targeted RetDec C for native executable gap queue batch 906.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1ce001-0x1ce201 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ce201-0x1ce401 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ce401-0x1ce601 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f2ae8-0x1f2ce8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f2ce8-0x1f2ee8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f2ee8-0x1f30e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f30e8-0x1f32e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f32e8-0x1f34e8 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1b6d354e();
int64_t function_1ce001(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_1ce064(void);
int64_t function_1ce097(void);
int64_t function_1ce0d6(int64_t a1);
int64_t function_1ce0f5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1ce106(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ce109(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1ce179(void);
int64_t function_1ce17f(void);
int64_t function_1ce181(int64_t a1);
int64_t function_1ce188(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1ce1ac(int64_t a1);
int64_t function_1ce1f5(void);
int64_t function_1ce207(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ce21d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ce24a(int64_t a1, int64_t a2);
int64_t function_1ce27d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1ce2c8(int64_t a1, int64_t a2);
int64_t function_1ce300(void);
int64_t function_1ce30f(int64_t a1);
int64_t function_1ce33a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ce37b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1ce428(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ce43e(void);
int64_t function_1ce47b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1ce496(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ce555(int64_t a1, int64_t a2);
int64_t function_1ce57f(void);
int64_t function_1ce5a8(int64_t a1);
int64_t function_1ce5ee(int64_t a1);
int64_t function_1f2ae8(int64_t a1);
int64_t function_1f2b09(void);
int64_t function_1f2b42(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f2bad(void);
int64_t function_1f2bb4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f2c05(int64_t a1);
int64_t function_1f2c25(void);
int64_t function_1f2c4e(int64_t a1);
int64_t function_1f2d21(int64_t a1);
int64_t function_1f2d49(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f2d81(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f2dad(void);
int64_t function_1f2db0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f2de4(void);
int64_t function_1f2df9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f2e13(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f2e91(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_1f2ee8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f2f46(void);
int64_t function_1f2fa4(void);
int64_t function_1f2ff0(void);
int64_t function_1f300a(void);
int64_t function_1f3030(int64_t a1);
int64_t function_1f3032(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f3057(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f3117(int64_t a1);
int64_t function_1f312e(int64_t a1);
int64_t function_1f3177(int64_t a1);
int64_t function_1f3238(void);
int64_t function_1f326d(void);
int64_t function_1f3278(void);
int64_t function_1f32b7(int64_t a1);
int64_t function_1f32cb(int64_t a1);
int64_t function_1f32ff(void);
int64_t function_1f3339(void);
int64_t function_1f333d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f3425(void);
int64_t function_1f342f(int64_t a1);
int64_t function_1f347b(int64_t a1);
int64_t function_259b458();
int64_t function_381ee425();
int64_t function_cc59c();
int64_t function_ffffffff8f103370();
int64_t function_ffffffff98b41664();
int64_t function_ffffffff9ee37306();
int64_t function_ffffffffe81e21f7();
int64_t unknown_1ab4dec1();
int64_t unknown_3126d8c3();
int64_t unknown_31984e3a();
int64_t unknown_331d8ed3();
int64_t unknown_34d1e6f5();
int64_t unknown_38a5e645();
int64_t unknown_3b00e1b8();
int64_t unknown_3e87773b();
int64_t unknown_3f2f8e93();
int64_t unknown_3f76489b();
int64_t unknown_404c1bed();
int64_t unknown_47e3f1ab();
int64_t unknown_5b0639e6();
int64_t unknown_79fa63a9();
int64_t unknown_7a206cff();
int64_t unknown_ffffffff857b82fe();
int64_t unknown_ffffffff8a64c08c();
int64_t unknown_ffffffff9d0fc2b6();
int64_t unknown_ffffffffa81fae7f();
int64_t unknown_ffffffffcbe995ba();
int64_t unknown_ffffffffd286a2e2();
int64_t unknown_ffffffffd795d55e();
int64_t unknown_ffffffffe40897d7();
int64_t unknown_ffffffffe8926519();

// Address range: 0x1ce001 - 0x1ce064
int64_t function_1ce001(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x1ce001
    int64_t v1; // 0x1ce001
    v1 = (int64_t)&v1 + 8;
    return function_cc59c();
}

// Address range: 0x1ce064 - 0x1ce069
int64_t function_1ce064(void) {
    // 0x1ce064
    int64_t result; // 0x1ce064
    return result;
}

// Address range: 0x1ce097 - 0x1ce099
int64_t function_1ce097(void) {
    // 0x1ce097
    int64_t result; // 0x1ce097
    return result;
}

// Address range: 0x1ce0d6 - 0x1ce0d7
int64_t function_1ce0d6(int64_t a1) {
    // 0x1ce0d6
    int64_t result; // 0x1ce0d6
    return result;
}

// Address range: 0x1ce0f5 - 0x1ce105
int64_t function_1ce0f5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1ce0f5
    __asm_wait();
    int64_t v1; // 0x1ce0f5
    return unknown_ffffffff857b82fe() & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x1ce106 - 0x1ce108
int64_t function_1ce106(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ce106
    int64_t result; // 0x1ce106
    return result;
}

// Address range: 0x1ce109 - 0x1ce113
int64_t function_1ce109(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1ce109
    bool v1; // 0x1ce109
    int64_t v2 = v1 ? -4 : 4; // 0x1ce10a
    return __asm_hlt(v2 + a1, v2 + a2);
}

// Address range: 0x1ce179 - 0x1ce17a
int64_t function_1ce179(void) {
    // 0x1ce179
    int64_t result; // 0x1ce179
    return result;
}

// Address range: 0x1ce17f - 0x1ce181
int64_t function_1ce17f(void) {
    // 0x1ce17f
    int64_t v1; // 0x1ce17f
    return function_1ce188(v1, v1, v1);
}

// Address range: 0x1ce181 - 0x1ce188
int64_t function_1ce181(int64_t a1) {
    // 0x1ce181
    int64_t result; // 0x1ce181
    return result;
}

// Address range: 0x1ce188 - 0x1ce194
int64_t function_1ce188(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1ce188
    int64_t v1; // 0x1ce188
    return (v1 + a3) % 256 | a3 & 0xffffff00;
}

// Address range: 0x1ce1ac - 0x1ce1be
int64_t function_1ce1ac(int64_t a1) {
    char v1 = *(char *)0x7ce2f8b9; // 0x1ce1b2
    int64_t v2; // 0x1ce1ac
    *(char *)0x7ce2f8b9 = v1 + (char)((uint64_t)v2 / 256);
    return 0x3d96c73c;
}

// Address range: 0x1ce1f5 - 0x1ce1fc
int64_t function_1ce1f5(void) {
    // 0x1ce1f5
    return __asm_sti();
}

// Address range: 0x1ce207 - 0x1ce215
int64_t function_1ce207(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ce207
    int64_t result; // 0x1ce207
    return result;
}

// Address range: 0x1ce21d - 0x1ce24a
int64_t function_1ce21d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ce21d
    int64_t v1; // 0x1ce21d
    *(char *)-0x4c953c0bd15c12a1 = (char)(v1 & v1);
    char v2 = v1 / 256; // 0x1ce22a
    *(char *)0x6605dc31 = *(char *)0x6605dc31 + v2;
    int64_t result = __asm_wait(); // 0x1ce238
    uint32_t v3 = (int32_t)a4 % 32; // 0x1ce23c
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)result; // 0x1ce23c
        uint32_t v5 = *v4; // 0x1ce23c
        *v4 = v5 >> 32 - v3 | v5 << v3;
    }
    *(char *)0x7ef3d945 = *(char *)0x7ef3d945 + v2;
    return result;
}

// Address range: 0x1ce24a - 0x1ce253
int64_t function_1ce24a(int64_t a1, int64_t a2) {
    // 0x1ce24a
    int64_t v1; // 0x1ce24a
    *(int32_t *)a2 = (int32_t)v1 | 62;
    return function_1ce2c8(a1, a2);
}

// Address range: 0x1ce27d - 0x1ce29b
int64_t function_1ce27d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1ce27d
    unknown_ffffffffd795d55e();
    int32_t v1; // 0x1ce27d
    int64_t v2; // 0x1ce27d
    *(int32_t *)v2 = (int32_t)(int64_t)&v1;
    return unknown_3f76489b();
}

// Address range: 0x1ce2c8 - 0x1ce2d1
int64_t function_1ce2c8(int64_t a1, int64_t a2) {
    // 0x1ce2c8
    int64_t v1; // 0x1ce2c8
    int32_t * v2 = (int32_t *)(v1 - 0x31c7ec00); // 0x1ce2c8
    *v2 = *v2 & (int32_t)a2;
    return a2 & 0xffffffff;
}

// Address range: 0x1ce300 - 0x1ce301
int64_t function_1ce300(void) {
    // 0x1ce300
    int64_t result; // 0x1ce300
    return result;
}

// Address range: 0x1ce30f - 0x1ce312
int64_t function_1ce30f(int64_t a1) {
    // 0x1ce30f
    int64_t result; // 0x1ce30f
    return result;
}

// Address range: 0x1ce33a - 0x1ce360
int64_t function_1ce33a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x544af922); // 0x1ce33c
    int64_t v2; // 0x1ce33a
    *v1 = *v1 + (int32_t)v2;
    int32_t * v3 = (int32_t *)(a2 - 0x3837082c); // 0x1ce347
    uint32_t v4 = *v3; // 0x1ce347
    uint32_t v5 = v4 + (int32_t)a1; // 0x1ce347
    *v3 = v5;
    char * v6 = (char *)(a2 + 10); // 0x1ce34d
    *v6 = *v6 - (char)(v2 / 256) + (char)(v5 < v4);
    *(int32_t *)-0x1f88835d = *(int32_t *)-0x1f88835d + (int32_t)a3;
    int64_t v7; // 0x1ce33a
    *(int32_t *)a2 = *(int32_t *)&v7 + (int32_t)v2;
    return v2 + 0x1717b692 & 0xffffffff;
}

// Address range: 0x1ce37b - 0x1ce427
int64_t function_1ce37b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1ce37b
    __asm_int(-24);
    int64_t v1; // 0x1ce37b
    int32_t * v2 = (int32_t *)(v1 + a4); // 0x1ce38b
    *v2 = *v2 + (int32_t)a4;
    int64_t v3 = v1 / 2 % 0x80000000 ^ v1;
    int64_t result2 = v3 & 0xffffffff; // 0x1ce394
    int32_t * v4 = (int32_t *)(result2 + 0x6c423a03); // 0x1ce396
    int32_t v5 = *v4; // 0x1ce396
    int32_t v6 = a3; // 0x1ce396
    int32_t v7 = v5 + v6; // 0x1ce396
    *v4 = v7;
    if (a4 != 0) {
        int32_t result = (int32_t)v3 - 0x27ddddcd & -0x6ffe17b0; // 0x1ce3b2
        if (result < 1) {
            // 0x1ce421
            return result;
        }
        // 0x1ce3b9
        return (int64_t)*(int32_t *)0xc40b2abd;
    }
    uint32_t v8 = -0x1b72902 * *(int32_t *)(v1 - 0x6ed9f9e5); // 0x1ce37f
    int64_t v9 = v8; // 0x1ce37f
    if (v7 < 0 == ((v5 ^ v7) & (v7 ^ v6)) < 0) {
        // 0x1ce422
        return result2;
    }
    uint32_t v10 = v6; // 0x1ce3be
    int64_t v11 = result2 + v9; // 0x1ce3c2
    char * v12 = (char *)((v11 + 255) % 256 | v11 & 0xffffff00); // 0x1ce3c7
    *v12 = *v12 - 10;
    int64_t v13 = unknown_331d8ed3(); // 0x1ce3cd
    int32_t * v14 = (int32_t *)a3; // 0x1ce3d2
    *v14 = *v14 + v8;
    char * v15 = (char *)(a5 + 0x26fe0099 + a3); // 0x1ce3d9
    *v15 = *v15 + ((char)v13 | -85);
    unknown_5b0639e6();
    v10 |= *(int32_t *)(a3 - 65);
    unknown_34d1e6f5();
    int64_t result4 = __asm_sti(); // 0x1ce3f4
    while (v10 < 0) {
        int64_t v16 = (result4 ^ v1) & 0xffffffff; // 0x1ce394
        int32_t * v17 = (int32_t *)(v16 + 0x6c423a03); // 0x1ce396
        int32_t v18 = *v17; // 0x1ce396
        int32_t v19 = v18 + v10; // 0x1ce396
        *v17 = v19;
        int64_t v20 = v10; // 0x1ce3be
        int64_t result3 = v16; // 0x1ce3be
        if (v19 < 0 == ((v18 ^ v19) & (v10 ^ v19)) < 0) {
            // 0x1ce422
            return result3;
        }
        v11 = v16 + v9;
        v12 = (char *)((v11 + 255) % 256 | v11 & 0xffffff00);
        *v12 = *v12 - 10;
        v13 = unknown_331d8ed3();
        v14 = (int32_t *)v20;
        *v14 = *v14 + v8;
        v15 = (char *)(a5 + 0x26fe0099 + v20);
        *v15 = *v15 + ((char)v13 | -85);
        unknown_5b0639e6();
        v10 |= *(int32_t *)(v20 - 65);
        unknown_34d1e6f5();
        result4 = __asm_sti();
    }
    int32_t * v21 = (int32_t *)(v9 + 0x701e804); // 0x1ce3fb
    *v21 = *v21 + (int32_t)a5;
    return result4;
}

// Address range: 0x1ce428 - 0x1ce436
int64_t function_1ce428(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ce428
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x1ce428
    return result;
}

// Address range: 0x1ce43e - 0x1ce443
int64_t function_1ce43e(void) {
    // 0x1ce43e
    return function_381ee425();
}

// Address range: 0x1ce47b - 0x1ce490
int64_t function_1ce47b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1ce47b
    *(char *)0xe4e0ede = 2 * *(char *)0xe4e0ede;
    int64_t v1; // 0x1ce47b
    *(int32_t *)0x293a7bb8c4f401e8 = (int32_t)v1;
    return v1 & -256 | (int64_t)__asm_in((int16_t)a3);
}

// Address range: 0x1ce496 - 0x1ce4c8
int64_t function_1ce496(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x1ce496
    char * v3 = (char *)(a2 - 0x1cc79157 + 8 * v2); // 0x1ce496
    *v3 = *v3 + 59;
    uint32_t v4 = (int32_t)a4 % 32; // 0x1ce49f
    if (v4 != 0) {
        int64_t v5; // 0x1ce496
        uint32_t v6 = *(int32_t *)&v5; // 0x1ce49f
        *(int32_t *)v5 = v6 >> 32 - v4 | v6 << v4;
    }
    __asm_outsb((int16_t)a3, *(char *)&v1);
    unknown_79fa63a9();
    char * v7 = (char *)(a3 + 122); // 0x1ce4a8
    *v7 = *v7 + (char)(v2 / 256);
    int64_t v8 = unknown_3b00e1b8(); // 0x1ce4b2
    *(char *)a1 = *(char *)&v1;
    bool v9; // 0x1ce496
    int64_t v10 = v9 ? -1 : 1; // 0x1ce4b9
    *(int32_t *)0x1e83ccad97e6786 = (int32_t)v8;
    return function_ffffffffe81e21f7(v10 + a1, v1 + v10);
}

// Address range: 0x1ce555 - 0x1ce564
int64_t function_1ce555(int64_t a1, int64_t a2) {
    // 0x1ce555
    int64_t v1; // 0x1ce555
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a2;
    char * v3 = (char *)(v1 - 26); // 0x1ce557
    *v3 = *v3 + (char)v1;
    return function_ffffffff98b41664();
}

// Address range: 0x1ce57f - 0x1ce580
int64_t function_1ce57f(void) {
    // 0x1ce57f
    int64_t result; // 0x1ce57f
    return result;
}

// Address range: 0x1ce5a8 - 0x1ce5ab
int64_t function_1ce5a8(int64_t a1) {
    // 0x1ce5a8
    int64_t result; // 0x1ce5a8
    return result;
}

// Address range: 0x1ce5ee - 0x1ce5f2
int64_t function_1ce5ee(int64_t a1) {
    // 0x1ce5ee
    int64_t result; // 0x1ce5ee
    return result;
}

// Address range: 0x1f2ae8 - 0x1f2aeb
int64_t function_1f2ae8(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 111); // 0x1f2ae8
    int64_t result; // 0x1f2ae8
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1f2b09 - 0x1f2b0a
int64_t function_1f2b09(void) {
    // 0x1f2b09
    int64_t result; // 0x1f2b09
    return result;
}

// Address range: 0x1f2b42 - 0x1f2b9a
int64_t function_1f2b42(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f2b42
    int64_t v1; // 0x1f2b42
    uint64_t v2 = v1;
    int64_t v3 = a2;
    int32_t v4 = *(int32_t *)(a3 + 0xd16bbbd); // 0x1f2b4a
    uint32_t v5 = v4 & (int32_t)((a4 | a3) % 256 | a4 & 0xffffff00); // 0x1f2b4a
    int64_t v6 = v5; // 0x1f2b4a
    char v7 = v1; // 0x1f2b50
    char v8 = *(char *)(v6 + 0x1e856c1); // 0x1f2b50
    if (((v7 - v8 ^ v7) & (v8 ^ v7)) < 0) {
        // 0x1f2b96
        return v1 & 0xffffffff;
    }
    int32_t * v9 = (int32_t *)v6; // 0x1f2b5e
    uint32_t v10 = *v9; // 0x1f2b5e
    uint32_t v11 = v10 + v5; // 0x1f2b5e
    *v9 = v11;
    unsigned char v12 = (char)v5 % 32; // 0x1f2b60
    bool v13 = v11 < v10; // 0x1f2b60
    if (v12 != 0) {
        char v14 = *(char *)0x78211367; // 0x1f2b60
        *(char *)0x78211367 = v14 >> v12;
        v13 = (v14 & 1 << v12 - 1) != 0;
    }
    char * v15 = (char *)(v3 + 8); // 0x1f2b66
    *v15 = (char)v13 + (char)(v1 / 256) + *v15;
    uint32_t v16 = (int32_t)v1; // 0x1f2b72
    int32_t v17 = -1 - (int32_t)v1 < (int32_t)v2; // 0x1f2b72
    uint32_t v18 = *(int32_t *)(v2 - 72) + v17; // 0x1f2b72
    int32_t v19 = v16 - v18; // 0x1f2b72
    if (v19 < 0) {
        // 0x1f2b84
        unknown_ffffffff8a64c08c();
        return __asm_in_133(-123);
    }
    // 0x1f2b77
    if (llvm_ctpop_i8((char)v19) % 2 == 0) {
        function_1f2b09();
    }
    bool v20 = -1 - (int32_t)v1 < (int32_t)v2 ? v18 != -1 | v19 - v17 > v16 : v18 > v16; // 0x1f2b72
    int64_t result = unknown_ffffffffa81fae7f(); // 0x1f2b79
    char v21 = *(char *)&v3; // 0x1f2b7e
    *(char *)v3 = (char)v20 + (char)(v2 / 256) + v21;
    return result;
}

// Address range: 0x1f2bad - 0x1f2bae
int64_t function_1f2bad(void) {
    // 0x1f2bad
    int64_t result; // 0x1f2bad
    return result;
}

// Address range: 0x1f2bb4 - 0x1f2c05
int64_t function_1f2bb4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t v2 = a2;
    int64_t v3; // 0x1f2bb4
    int32_t v4 = v3;
    bool v5; // 0x1f2bb4
    *(int32_t *)v3 = 2 * v4 | (int32_t)v5;
    int32_t * v6 = (int32_t *)(a4 + 0x3af2548); // 0x1f2bb6
    *v6 = *v6 + v4;
    *(int32_t *)a1 = v4;
    int64_t v7 = (v5 ? -4 : 4) + a1; // 0x1f2bbc
    int64_t v8 = unknown_3126d8c3(v7); // 0x1f2bbd
    unsigned char v9 = *(char *)0x5e8304701e8c800; // 0x1f2bc2
    int64_t v10 = unknown_ffffffffe40897d7(); // 0x1f2bd1
    if ((int32_t)(v8 & 0xffffff00 || (int64_t)v9) < -0x17af6b78) {
        // 0x1f2bfb
        return (int64_t)(*(int32_t *)(a4 - 0x22fe178e + 8 * a4) + (int32_t)v10);
    }
    int32_t * v11 = (int32_t *)(a3 + 44 + v2); // 0x1f2bd8
    int32_t v12 = a3; // 0x1f2bd8
    *v11 = *v11 & v12;
    unknown_ffffffffd286a2e2();
    __asm_outsd((int16_t)a3, *(int32_t *)&v2);
    int64_t v13 = v1;
    *(char *)v13 = *(char *)&v1 - (char)v13;
    int64_t result = unknown_404c1bed(); // 0x1f2be7
    *(char *)v7 = (char)result;
    *(int32_t *)v2 = *(int32_t *)&v2 + v12;
    return result;
}

// Address range: 0x1f2c05 - 0x1f2c0a
int64_t function_1f2c05(int64_t a1) {
    // 0x1f2c05
    int64_t result; // 0x1f2c05
    bool v1; // 0x1f2c05
    if (v1) {
        result = function_1f2bad();
    }
    // 0x1f2c07
    return result;
}

// Address range: 0x1f2c25 - 0x1f2c28
int64_t function_1f2c25(void) {
    // 0x1f2c25
    int64_t result; // 0x1f2c25
    return result;
}

// Address range: 0x1f2c4e - 0x1f2c4f
int64_t function_1f2c4e(int64_t a1) {
    // 0x1f2c4e
    int64_t result; // 0x1f2c4e
    return result;
}

// Address range: 0x1f2d21 - 0x1f2d22
int64_t function_1f2d21(int64_t a1) {
    // 0x1f2d21
    int64_t result; // 0x1f2d21
    return result;
}

// Address range: 0x1f2d49 - 0x1f2d56
int64_t function_1f2d49(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x26213ae8); // 0x1f2d49
    *v1 = *v1 - 1;
    int64_t v2; // 0x1f2d49
    return v2 - 0xf5bc82f;
}

// Address range: 0x1f2d81 - 0x1f2d86
int64_t function_1f2d81(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f2d81
    bool v1; // 0x1f2d81
    *(char *)a4 = (char)!v1;
    int64_t result; // 0x1f2d81
    return result;
}

// Address range: 0x1f2dad - 0x1f2dae
int64_t function_1f2dad(void) {
    // 0x1f2dad
    int64_t result; // 0x1f2dad
    return result;
}

// Address range: 0x1f2db0 - 0x1f2dc5
int64_t function_1f2db0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f2db0
    unknown_ffffffff9d0fc2b6();
    *(int32_t *)a1 = (int32_t)unknown_1ab4dec1();
    return function_1f2dad();
}

// Address range: 0x1f2de4 - 0x1f2de5
int64_t function_1f2de4(void) {
    // 0x1f2de4
    int64_t result; // 0x1f2de4
    return result;
}

// Address range: 0x1f2df9 - 0x1f2e02
int64_t function_1f2df9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f2df9
    int64_t v1; // 0x1f2df9
    __asm_outsd((int16_t)a3, (int32_t)v1);
    int64_t result; // 0x1f2df9
    bool v2; // 0x1f2df9
    if (v2 || false) {
        result = function_1f2de4();
    }
    int32_t * v3 = (int32_t *)(4 * a4 - 116 + v1); // 0x1f2dfc
    *v3 = *v3 + (int32_t)result;
    return result;
}

// Address range: 0x1f2e13 - 0x1f2e29
int64_t function_1f2e13(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f2e13
    unknown_ffffffffe8926519();
    int64_t v1; // 0x1f2e13
    int64_t result = v1 & 0xffffffff; // 0x1f2e18
    unsigned char v2 = (char)a4 % 32; // 0x1f2e1c
    if (v2 != 0) {
        char * v3 = (char *)(result - 24); // 0x1f2e1c
        *v3 = *v3 >> v2;
    }
    int32_t * v4 = (int32_t *)(v1 - 119); // 0x1f2e1f
    *v4 = *v4 + (int32_t)v1;
    return result;
}

// Address range: 0x1f2e91 - 0x1f2ecd
int64_t function_1f2e91(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4; // 0x1f2e95
    int64_t v2; // 0x1f2e91
    uint32_t v3 = (int32_t)v2 + v1; // 0x1f2e95
    char * v4 = (char *)((int64_t)v3 - 38); // 0x1f2e97
    char v5 = a3 / 256; // 0x1f2e97
    *v4 = (char)(v3 < v1) - v5 + *v4;
    bool v6; // 0x1f2e91
    char * v7 = (char *)((v6 ? -4 : 4) + a1); // 0x1f2ea0
    *v7 = *v7 & (char)a3;
    int32_t * v8 = (int32_t *)(unknown_47e3f1ab(a5) - 78); // 0x1f2eaa
    int64_t v9; // 0x1f2e91
    *v8 = *v8 + (int32_t)(int64_t)&v9;
    unknown_ffffffffcbe995ba();
    char * v10 = (char *)(v2 + 0x798a50c + v2); // 0x1f2eb9
    *v10 = *v10 + v5;
    *(int64_t *)((int64_t)(43 * *(int32_t *)0x115383c) - 8) = 0x1e892fd;
    return __asm_wait();
}

// Address range: 0x1f2ee8 - 0x1f2ef7
int64_t function_1f2ee8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f2ee8
    int64_t result; // 0x1f2ee8
    return result;
}

// Address range: 0x1f2f46 - 0x1f2f47
int64_t function_1f2f46(void) {
    // 0x1f2f46
    int64_t result; // 0x1f2f46
    return result;
}

// Address range: 0x1f2fa4 - 0x1f2fa6
int64_t function_1f2fa4(void) {
    // 0x1f2fa4
    return function_1f2fa4();
}

// Address range: 0x1f2ff0 - 0x1f3000
int64_t function_1f2ff0(void) {
    unsigned char v1 = *(char *)-0x17b1cd83; // 0x1f2ff2
    *(char *)-0x17b1cd83 = v1 / 128 | 2 * v1;
    unknown_7a206cff();
    int64_t v2; // 0x1f2ff0
    return function_1f3030(v2);
}

// Address range: 0x1f300a - 0x1f300b
int64_t function_1f300a(void) {
    // 0x1f300a
    int64_t result; // 0x1f300a
    return result;
}

// Address range: 0x1f3030 - 0x1f3031
int64_t function_1f3030(int64_t a1) {
    // 0x1f3030
    int64_t result; // 0x1f3030
    return result;
}

// Address range: 0x1f3032 - 0x1f3049
int64_t function_1f3032(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f3032
    unknown_31984e3a();
    unknown_38a5e645(0x86325d6f);
    return function_259b458();
}

// Address range: 0x1f3057 - 0x1f305e
int64_t function_1f3057(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f3057
    *(char *)a3 = (char)a4;
    int64_t v1; // 0x1f3057
    *(int32_t *)a1 = *(int32_t *)&v1;
    int64_t result; // 0x1f3057
    return result;
}

// Address range: 0x1f3117 - 0x1f3118
int64_t function_1f3117(int64_t a1) {
    // 0x1f3117
    int64_t result; // 0x1f3117
    return result;
}

// Address range: 0x1f312e - 0x1f3133
int64_t function_1f312e(int64_t a1) {
    // 0x1f312e
    int64_t v1; // 0x1f312e
    return v1 & -256 | 192;
}

// Address range: 0x1f3177 - 0x1f3188
int64_t function_1f3177(int64_t a1) {
    // 0x1f3177
    return function_ffffffff8f103370();
}

// Address range: 0x1f3238 - 0x1f323f
int64_t function_1f3238(void) {
    // 0x1f3238
    int64_t v1; // 0x1f3238
    uint64_t v2 = v1;
    char v3 = *(char *)(v1 + 0xf09c20); // 0x1f3238
    bool v4; // 0x1f3238
    return 256 * (int64_t)((char)v4 - v3 + (char)(v2 / 256)) | v2 & -0xff01;
}

// Address range: 0x1f326d - 0x1f326e
int64_t function_1f326d(void) {
    // 0x1f326d
    int64_t result; // 0x1f326d
    return result;
}

// Address range: 0x1f3278 - 0x1f327d
int64_t function_1f3278(void) {
    // 0x1f3278
    return function_1f326d();
}

// Address range: 0x1f32b7 - 0x1f32bb
int64_t function_1f32b7(int64_t a1) {
    // 0x1f32b7
    int64_t result; // 0x1f32b7
    return result;
}

// Address range: 0x1f32cb - 0x1f32e0
int64_t function_1f32cb(int64_t a1) {
    // 0x1f32cb
    int64_t v1; // 0x1f32cb
    *(char *)a1 = (char)v1;
    bool v2; // 0x1f32cb
    return function_ffffffff9ee37306((v2 ? -1 : 1) + a1);
}

// Address range: 0x1f32ff - 0x1f3300
int64_t function_1f32ff(void) {
    // 0x1f32ff
    int64_t result; // 0x1f32ff
    return result;
}

// Address range: 0x1f3339 - 0x1f333a
int64_t function_1f3339(void) {
    // 0x1f3339
    int64_t result; // 0x1f3339
    return result;
}

// Address range: 0x1f333d - 0x1f3366
int64_t function_1f333d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 - 1; // 0x1f333d
    int64_t v2; // 0x1f333d
    bool v3; // 0x1f333d
    if (v1 != 0 && !v3) {
        v2 = function_1f32ff();
    }
    unsigned char v4 = *(char *)-0x1734900bfef8e44c; // 0x1f3344
    int32_t v5 = (int32_t)(v2 & 0xffffff00 | (int64_t)v4) ^ -0x2dfe1800; // 0x1f334d
    int32_t v6 = v1; // 0x1f334d
    int32_t v7 = v5 + v6; // 0x1f334d
    int64_t v8 = v7; // 0x1f334f
    if (v7 < 0 == ((v7 ^ v5) & (v7 ^ v6)) < 0 == (v7 != 0)) {
        v8 = function_1f3339();
    }
    int32_t * v9 = (int32_t *)((v8 + 0x94b216 & 0xffffff00 | (int64_t)__asm_in_134(-24)) + 0x2e2b287f); // 0x1f3358
    int64_t v10; // 0x1f333d
    *v9 = *v9 + (int32_t)v10;
    __asm_int1();
    __asm_sti();
    return function_1b6d354e();
}

// Address range: 0x1f3425 - 0x1f342f
int64_t function_1f3425(void) {
    // 0x1f3425
    int64_t v1; // 0x1f3425
    int32_t * v2 = (int32_t *)(v1 & -256 | 232); // 0x1f3427
    *v2 = *v2 + (int32_t)v1;
    return unknown_3f2f8e93();
}

// Address range: 0x1f342f - 0x1f344e
int64_t function_1f342f(int64_t a1) {
    // 0x1f342f
    int64_t v1; // 0x1f342f
    char * v2 = (char *)(v1 - 0x38fd23fc); // 0x1f342f
    *v2 = 2 * *v2;
    int64_t v3 = -0x5c423726; // bp-8, 0x1f343a
    __asm_out(78, (int32_t)unknown_3e87773b());
    int64_t v4; // 0x1f342f
    int32_t * v5 = (int32_t *)((v4 & 0xffffffff) + 0x4c94680a); // 0x1f3445
    uint32_t v6 = *v5; // 0x1f3445
    uint32_t v7 = v6 + (int32_t)(int64_t)&v3; // 0x1f3445
    *v5 = v7;
    int32_t v8 = *(int32_t *)&v4; // 0x1f344b
    return v8 + (int32_t)v4 + (int32_t)(v7 < v6);
}

// Address range: 0x1f347b - 0x1f347c
int64_t function_1f347b(int64_t a1) {
    // 0x1f347b
    int64_t result; // 0x1f347b
    return result;
}
