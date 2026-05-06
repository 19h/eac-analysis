/*
 * Targeted RetDec C for native executable gap queue batch 856.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x204034-0x204234 rank=- name=- kind=- bytes=- uncovered=-
 *   0x204234-0x204434 rank=- name=- kind=- bytes=- uncovered=-
 *   0x204434-0x204634 rank=- name=- kind=- bytes=- uncovered=-
 *   0x323cbb-0x323ebb rank=- name=- kind=- bytes=- uncovered=-
 *   0x323ebb-0x3240bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3240bb-0x3242bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3242bb-0x3244bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d52a7-0x3d54a7 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_16f3f5a();
int64_t function_204034(void);
int64_t function_204035(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_204155(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2042b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_204412(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_20462d(void);
int64_t function_323cbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_323ce8(void);
int64_t function_323d04(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_323db9(int64_t a1);
int64_t function_323de5(void);
int64_t function_323e49(void);
int64_t function_323e8d(void);
int64_t function_323e94(void);
int64_t function_323ec0(void);
int64_t function_323edf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_323f26(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_323f40(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_323fbc(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_32401d(void);
int64_t function_324092(void);
int64_t function_324096(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3240be(void);
int64_t function_3240cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3240fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_324145(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_324181(void);
int64_t function_32418b(void);
int64_t function_324190(void);
int64_t function_324195(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32427f(int64_t a1);
int64_t function_324295(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3242ac(int64_t a1);
int64_t function_3242c2(void);
int64_t function_3242e9(void);
int64_t function_32433d(int64_t a1);
int64_t function_32435c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32439e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_324472(void);
int64_t function_32447e(int64_t a1);
int64_t function_3d52a5();
int64_t function_3d52a7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3d52f6(int64_t a1);
int64_t function_3d5318(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d534a(int64_t a1);
int64_t function_3d53a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_5227ab();
int64_t function_55dede86();
int64_t function_73d70941();
int64_t function_caf2a();
int64_t function_ffffffffdc673ecd();
int64_t function_ffffffffe91ce837();
int64_t unknown_38c5f411();
int64_t unknown_3aa77b3b();
int64_t unknown_4a337e9e();
int64_t unknown_61d056a1();
int64_t unknown_743a812e();
int64_t unknown_79373d3c();
int64_t unknown_b6dc20();
int64_t unknown_ffffffffac27e888();
int64_t unknown_ffffffffd38b63a8();
int64_t unknown_ffffffffec3e071c();
int64_t unknown_fffffffff3ae26de();

// Address range: 0x204034 - 0x204035
int64_t function_204034(void) {
    // 0x204034
    int64_t result; // 0x204034
    return result;
}

// Address range: 0x204035 - 0x204155
int64_t function_204035(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x204035
    int64_t v1; // 0x204035
    int64_t v2 = v1;
    int32_t v3 = *(int32_t *)0x90cc183; // 0x204035
    bool v4; // 0x204035
    *(int32_t *)0x90cc183 = (int32_t)v4 - (int32_t)v1 + v3;
    *(char *)v2 = 2 * (char)v2;
    char * v5 = (char *)(v2 - 119); // 0x20403d
    *v5 = *v5 + (char)a4;
    return function_caf2a(a1, a2, a3, a4, a5, v1, v1);
}

// Address range: 0x204155 - 0x2042b6
int64_t function_204155(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x204155
    int64_t v1; // bp-32, 0x204155
    int64_t v2 = (int64_t)&v1; // 0x2041df
    int64_t v3 = v2 - 8; // 0x2041eb
    int64_t * v4 = (int64_t *)v3; // 0x2041eb
    *v4 = 0x1e0fa2c4;
    int64_t * v5 = (int64_t *)(v2 - 24); // 0x2041f8
    int64_t * v6 = (int64_t *)(v2 + 24); // 0x2041fe
    int64_t v7 = *v6; // 0x2041fe
    int64_t v8 = v2 - 16; // 0x2041fe
    int64_t * v9 = (int64_t *)v8; // 0x2041fe
    *v9 = v7;
    *v5 = v3;
    int64_t v10 = v2 + 8; // 0x20421e
    int64_t * v11 = (int64_t *)v10; // 0x20421e
    int64_t v12 = *v11; // 0x20421e
    *v5 = v12;
    int64_t * v13 = (int64_t *)(v2 - 32); // 0x204225
    *v9 = 0x47c0304b;
    *v13 = v7;
    v1 = *v9;
    *v9 = v12;
    *v5 = v8;
    int64_t v14 = *v9; // 0x20425d
    *v13 = v14;
    *v6 = v14;
    *v4 = v10;
    v1 = *v11;
    *v4 = v10;
    int64_t v15; // 0x204155
    return function_caf2a(a1, a2, a3, a4, a5, a6, v15);
}

// Address range: 0x2042b6 - 0x204412
int64_t function_2042b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2042b6
    int64_t v1; // bp-32, 0x2042b6
    int64_t v2 = (int64_t)&v1; // 0x20435b
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x204363
    int64_t v4 = *v3; // 0x204363
    int64_t v5 = v2 - 8; // 0x204363
    int64_t * v6 = (int64_t *)v5; // 0x204363
    *v6 = v4;
    int64_t * v7 = (int64_t *)(v2 - 16); // 0x204367
    *v7 = a3;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x204392
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x2043a1
    *v9 = a5;
    v1 = a5;
    *v8 = v4;
    *v3 = *v7;
    *v7 = *v6;
    *v8 = *v7;
    *v9 = v5;
    int64_t v10 = *v8; // 0x2043d7
    *(int64_t *)(v2 - 40) = v10;
    *v7 = *v6;
    *v8 = a4;
    *v8 = v5;
    int64_t v11; // 0x2042b6
    return function_caf2a(a1, a2, v10, *v8, v11, v11, 0x2017e3);
}

// Address range: 0x204412 - 0x20455b
int64_t function_204412(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x204412
    int64_t v1; // 0x204412
    return function_caf2a(a1, a2, a3, 0x189fc230, a5, v1, 0x201b09);
}

// Address range: 0x20462d - 0x20462f
int64_t function_20462d(void) {
    // 0x20462d
    int64_t result; // 0x20462d
    return result;
}

// Address range: 0x323cbb - 0x323cd0
int64_t function_323cbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x323cbb
    *(int32_t *)0xc80dc2 = *(int32_t *)0xc80dc2 + (int32_t)a1;
    unsigned char v1 = *(char *)(a3 - 120); // 0x323cc1
    int32_t * v2 = (int32_t *)(a2 - 0x2efe17fd); // 0x323cc4
    int64_t v3; // 0x323cbb
    *v2 = *v2 - (int32_t)v3 + (int32_t)(v1 > -1 - (char)a4);
    return v3 & -0xff01 | (int64_t)&g2;
}

// Address range: 0x323ce8 - 0x323ce9
int64_t function_323ce8(void) {
    // 0x323ce8
    int64_t result; // 0x323ce8
    return result;
}

// Address range: 0x323d04 - 0x323d93
int64_t function_323d04(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x323d04
    int64_t v1; // 0x323d04
    uint64_t v2 = v1;
    int64_t v3 = a3;
    *(int32_t *)a4 = (int32_t)v1;
    if (*(char *)(v2 - 84) == (char)(v2 / 256)) {
        // 0x323d0b
        unknown_38c5f411();
        char * v4 = (char *)(a1 - 0x6367c561); // 0x323d10
        *v4 = *v4 + (char)v1;
        unknown_ffffffffec3e071c();
        *(int32_t *)-0x24a0d863 = *(int32_t *)-0x24a0d863 + (int32_t)v1;
        return function_323ce8();
    }
    char * v5 = (char *)(v3 - 0x5afff8b0); // 0x323d6a
    *v5 = *v5 + (char)(v3 / 256);
    int32_t v6 = *(int32_t *)&v3; // 0x323d72
    *(int32_t *)v3 = v6 + (int32_t)((v2 + a4 / 256) % 256 | v2 & 0xffffff00);
    uint64_t v7 = unknown_ffffffffac27e888(); // 0x323d82
    char * v8 = (char *)(v7 + 0xe04000a); // 0x323d87
    *v8 = *v8 + (char)a4;
    return v7 / 2 % 128 | v7 & -256;
}

// Address range: 0x323db9 - 0x323dbc
int64_t function_323db9(int64_t a1) {
    // 0x323db9
    int64_t result; // 0x323db9
    return result;
}

// Address range: 0x323de5 - 0x323de6
int64_t function_323de5(void) {
    // 0x323de5
    int64_t result; // 0x323de5
    return result;
}

// Address range: 0x323e49 - 0x323e54
int64_t function_323e49(void) {
    // 0x323e49
    int64_t v1; // 0x323e49
    __asm_out(112, (int32_t)v1);
    __asm_in(29);
    return function_ffffffffdc673ecd();
}

// Address range: 0x323e8d - 0x323e8e
int64_t function_323e8d(void) {
    // 0x323e8d
    int64_t result; // 0x323e8d
    return result;
}

// Address range: 0x323e94 - 0x323e9e
int64_t function_323e94(void) {
    // 0x323e94
    return function_16f3f5a();
}

// Address range: 0x323ec0 - 0x323ec1
int64_t function_323ec0(void) {
    // 0x323ec0
    int64_t result; // 0x323ec0
    return result;
}

// Address range: 0x323edf - 0x323ef3
int64_t function_323edf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x323edf
    int64_t v1; // 0x323edf
    int32_t * v2 = (int32_t *)(v1 - 0x31223183); // 0x323edf
    *v2 = *v2 + (int32_t)v1;
    if ((int32_t)v1 > -0x4fd4e4b) {
        function_323e8d();
    }
    // 0x323ef1
    return function_323ec0();
}

// Address range: 0x323f26 - 0x323f40
int64_t function_323f26(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x323f26
    unknown_743a812e();
    *(char *)0x7a9d6973 = *(char *)0x7a9d6973 | (char)a4;
    return unknown_3aa77b3b();
}

// Address range: 0x323f40 - 0x323fbb
int64_t function_323f40(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x323f40
    int64_t v1; // 0x323f40
    int64_t result = v1;
    int32_t * v2 = (int32_t *)(v1 + 0x1e8ea32); // 0x323fb5
    bool v3; // 0x323f40
    *v2 = (int32_t)v3 - (int32_t)a2 + *v2;
    return result;
}

// Address range: 0x323fbc - 0x323ff1
int64_t function_323fbc(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x323fbc
    int64_t result; // 0x323fbc
    bool v1; // 0x323fbc
    if (v1 || false) {
        // 0x323ff0
        return result;
    }
    char * v2 = (char *)(result + 0x4cd90000); // 0x323fbe
    *v2 = *v2 + (char)result;
    char * v3 = (char *)(result + 0x4201e800); // 0x323fc4
    *v3 = *v3 + (char)(result / 256);
    int64_t result2 = a3 & 0xffffffff; // 0x323fcf
    int64_t v4 = (v1 ? -1 : 1) + a1; // 0x323fcf
    int64_t * v5 = (int64_t *)result2; // 0x323fd2
    *v5 = *v5 % 4;
    int32_t v6 = (int32_t)result2 >> 31; // 0x323fd7
    result2 = unknown_fffffffff3ae26de(v4);
    *(int32_t *)v4 = (int32_t)result2;
    unsigned char v7 = (char)v6 + (char)(a3 / 256 + a4); // 0x323fe4
    v4 -= 4;
    while (llvm_ctpop_i8(v7) % 2 != 0) {
        // 0x323fd0
        v5 = (int64_t *)result2;
        *v5 = *v5 % 4;
        v6 = (int32_t)result2 >> 31;
        result2 = unknown_fffffffff3ae26de(v4);
        *(int32_t *)v4 = (int32_t)result2;
        v7 = (char)v6 + (char)(a3 / 256 + a4);
        v4 -= 4;
    }
    int32_t * v8 = (int32_t *)result2; // 0x323fe8
    *v8 = *v8 + (v6 & -256 | (int32_t)v7);
    return result2;
}

// Address range: 0x32401d - 0x324022
int64_t function_32401d(void) {
    // 0x32401d
    return function_55dede86();
}

// Address range: 0x324092 - 0x324095
int64_t function_324092(void) {
    // 0x324092
    int64_t result; // 0x324092
    return result;
}

// Address range: 0x324096 - 0x3240a2
int64_t function_324096(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x324096
    unknown_61d056a1(a1, a2, a3, a4, a5);
    return function_3240fa(a1, a2, a3, a4 & -0xff01 | (int64_t)&g3);
}

// Address range: 0x3240be - 0x3240bf
int64_t function_3240be(void) {
    // 0x3240be
    int64_t result; // 0x3240be
    return result;
}

// Address range: 0x3240cf - 0x3240f2
int64_t function_3240cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x3240cf
    uint32_t v3 = (int32_t)v2; // 0x3240cf
    int32_t v4 = v3 - 0x5338ef85; // 0x3240cf
    int64_t v5 = 256 * (16 * (int64_t)(v3 % 16 > 4) | (int64_t)(v3 > 0x5338ef84) | 64 * (int64_t)(v4 == 0) | 128 * (int64_t)(v4 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v4) % 2 == 0)) | (int64_t)(v4 & -0xff01 | 512); // 0x3240d4
    int32_t * v6 = (int32_t *)v5; // 0x3240d8
    uint32_t v7 = (int32_t)v5; // 0x3240d8
    *v6 = *v6 + v7;
    uint32_t v8 = (int32_t)a1; // 0x3240df
    bool v9 = v7 < 0x14b74701 ? v8 + 0x474b0131 + (int32_t)(v7 < 0x14b74701) <= v8 : v8 > 0xb8b4fece; // 0x3240e0
    int64_t v10; // 0x3240cf
    char v11 = *(char *)&v10; // 0x3240e5
    if ((256 * (int64_t)(v11 + (char)((a4 - 256 * (int64_t)v4) / 256) + (char)v9) || a4 & -0xff01) != 1) {
        function_3240be();
    }
    int64_t v12 = v5 & 0xffffffff; // 0x3240df
    *(int32_t *)v12 = *(int32_t *)&v1;
    bool v13; // 0x3240cf
    int64_t v14 = v13 ? -4 : 4; // 0x3240ea
    return __asm_sti(v12 + v14, v1 + v14);
}

// Address range: 0x3240fa - 0x3240fc
int64_t function_3240fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3240fa
    int64_t result; // 0x3240fa
    return result;
}

// Address range: 0x324145 - 0x32416d
int64_t function_324145(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x324145
    int64_t result; // 0x324145
    char v1 = result; // 0x32414b
    if ((char)result > v1) {
        // 0x32414d
        return result;
    }
    // 0x324155
    bool v2; // 0x324145
    char * v3 = (char *)(a1 + 0x2077399e + (v2 ? -1 : 1)); // 0x324155
    char v4 = result / 256; // 0x324155
    *v3 = *v3 ^ v4;
    char * v5 = (char *)(result + 8 * a2); // 0x32415b
    *v5 = *v5 | v1;
    char * v6 = (char *)(a2 + 0xa901d804); // 0x32415e
    *v6 = *v6 + (char)(result / 256);
    *(char *)0x47c636e = *(char *)0x47c636e + v4;
    return result;
}

// Address range: 0x324181 - 0x324186
int64_t function_324181(void) {
    // 0x324181
    return function_73d70941();
}

// Address range: 0x32418b - 0x32418e
int64_t function_32418b(void) {
    // 0x32418b
    int64_t result; // 0x32418b
    return result;
}

// Address range: 0x324190 - 0x324195
int64_t function_324190(void) {
    // 0x324190
    return function_ffffffffe91ce837();
}

// Address range: 0x324195 - 0x32419e
int64_t function_324195(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 24); // 0x324195
    *v1 = *v1 + (int32_t)a1;
    return unknown_4a337e9e(a1, a2, a3, a4);
}

// Address range: 0x32427f - 0x324286
int64_t function_32427f(int64_t a1) {
    // 0x32427f
    int64_t result; // 0x32427f
    *(int32_t *)0x5e0aec92 = *(int32_t *)0x5e0aec92 + (int32_t)result;
    return result;
}

// Address range: 0x324295 - 0x32429f
int64_t function_324295(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x324295
    int64_t v1; // 0x324295
    return v1 & 0xffffffff & v1;
}

// Address range: 0x3242ac - 0x3242b1
int64_t function_3242ac(int64_t a1) {
    // 0x3242ac
    int64_t v1; // 0x3242ac
    return 2 * v1 & 0xffffffff;
}

// Address range: 0x3242c2 - 0x3242c6
int64_t function_3242c2(void) {
    // 0x3242c2
    int64_t v1; // 0x3242c2
    bool v2; // 0x3242c2
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x3242e9 - 0x3242ea
int64_t function_3242e9(void) {
    // 0x3242e9
    int64_t result; // 0x3242e9
    return result;
}

// Address range: 0x32433d - 0x32433e
int64_t function_32433d(int64_t a1) {
    // 0x32433d
    int64_t result; // 0x32433d
    return result;
}

// Address range: 0x32435c - 0x324370
int64_t function_32435c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32435c
    int64_t v1; // 0x32435c
    int32_t * v2 = (int32_t *)(v1 + 0xd6c8b5); // 0x32435c
    *v2 = *v2 + (int32_t)v1;
    int64_t v3; // 0x32435c
    *(int32_t *)a3 = *(int32_t *)&v3 - (int32_t)a1;
    return v1 & -17;
}

// Address range: 0x32439e - 0x324409
int64_t function_32439e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x32439e
    bool v1; // 0x32439e
    if (v1 || v1) {
        // 0x3243a0
        function_5227ab(a5);
        int64_t v2 = (v1 ? -1 : 1) + a2; // 0x3243b6
        float80_t v3; // 0x32439e
        *(int32_t *)a5 = (int32_t)v3;
        __asm_wait();
        *(int32_t *)(v2 + (v1 ? -4 : 4)) = *(int32_t *)v2;
        return a4 & 0xffffff00 | (int64_t)(*(char *)0xfefdff9b ^ (char)a4);
    }
    // 0x324400
    int64_t v4; // 0x32439e
    return *(int64_t *)(a2 + (int64_t)&g1 + 2 * v4) * v4;
}

// Address range: 0x324472 - 0x324475
int64_t function_324472(void) {
    // 0x324472
    int64_t result; // 0x324472
    return result;
}

// Address range: 0x32447e - 0x324481
int64_t function_32447e(int64_t a1) {
    // 0x32447e
    int64_t v1; // 0x32447e
    return v1 & -228;
}

// Address range: 0x3d52a7 - 0x3d52c0
int64_t function_3d52a7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x3d52a7
    int64_t v1; // 0x3d52a7
    *(int32_t *)-0x4cc0c4f2 = *(int32_t *)-0x4cc0c4f2 + (int32_t)v1;
    char * v2 = (char *)(a1 - 53); // 0x3d52b8
    *v2 = *v2 + (char)(a3 / 256);
    if (a4 != 1) {
        function_3d52a5();
    }
    // 0x3d52bd
    return __asm_iretd();
}

// Address range: 0x3d52f6 - 0x3d52fc
int64_t function_3d52f6(int64_t a1) {
    // 0x3d52f6
    int64_t result; // 0x3d52f6
    return result;
}

// Address range: 0x3d5318 - 0x3d532a
int64_t function_3d5318(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_b6dc20(); // 0x3d531a
    int32_t * v1 = (int32_t *)(a3 + 46); // 0x3d5326
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x3d534a - 0x3d534d
int64_t function_3d534a(int64_t a1) {
    // 0x3d534a
    int64_t result; // 0x3d534a
    return result;
}

// Address range: 0x3d53a1 - 0x3d543b
int64_t function_3d53a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_ffffffffd38b63a8(); // 0x3d53a2
    unsigned char v1 = *(char *)(result + 0x69f81a0a) | (char)a4; // 0x3d53a7
    int64_t v2 = a4 & -256 | (int64_t)v1; // 0x3d53a7
    if (v2 != 1 != (v1 == 0)) {
        // 0x3d53af
        return result;
    }
    // 0x3d5424
    int64_t v3; // 0x3d53a1
    char v4 = *(char *)(v3 + 15); // 0x3d542a
    char v5 = ((int16_t)result | -38) * (int16_t)v4 / 256; // 0x3d542a
    int32_t * v6 = (int32_t *)(v2 + 0x51713a65); // 0x3d542e
    uint32_t v7 = *v6; // 0x3d542e
    *v6 = v7 / 0x2000000 | 256 * v7 | 128 * (int32_t)(v5 != 0 == (v5 != -1));
    return unknown_79373d3c();
}
