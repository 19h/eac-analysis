/*
 * Targeted RetDec C for native executable gap queue batch 608.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1347a4-0x1349a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1349a4-0x134ba4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x134ba4-0x134da4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x134da4-0x134fa4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4519e3-0x451be3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x451ce3-0x451de3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x451de3-0x451fe3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x451fe3-0x4521e3 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
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

int64_t function_134773();
int64_t function_134788();
int64_t function_1347a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_134864(void);
int64_t function_1348a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1348be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13493f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_134947(void);
int64_t function_1349f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_134a5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_134ac8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_134aed(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_134b75(int64_t a1, int64_t a2, int64_t a3);
int64_t function_134bbc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_134bf6(int64_t a1);
int64_t function_134c4f(int64_t a1);
int64_t function_134cc4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_134d6e(void);
int64_t function_134d84(void);
int64_t function_134da7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_134e0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_134e67(int64_t a1, int64_t a2);
int64_t function_134e72(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_134eae(int64_t a1);
int64_t function_134ec0(void);
int64_t function_134edd(int64_t a1, int64_t a2);
int64_t function_134ee4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_134f35(void);
int64_t function_134f36(int64_t a1);
int64_t function_134f3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_134f7d(void);
int64_t function_134f83(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_4519da();
int64_t function_4519e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_451a12(int64_t a1);
int64_t function_451a13(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_451a66(int64_t a1);
int64_t function_451a79(void);
int64_t function_451a7f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_451b37(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_451b91(void);
int64_t function_451cdf();
int64_t function_451ce3(void);
int64_t function_451d47(void);
int64_t function_451d57(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_451d94(int64_t a1);
int64_t function_451dbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_451e0a(void);
int64_t function_451e12(void);
int64_t function_451e52(void);
int64_t function_451e66(void);
int64_t function_451ebd(void);
int64_t function_451eca(int64_t a1, uint64_t a2, int64_t a3, int64_t a4);
int64_t function_451efc(void);
int64_t function_451f29(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_451f3c(int64_t a1);
int64_t function_451f7b(int64_t a1);
int64_t function_451fae(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_451fbe(void);
int64_t function_45202f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4520e1(int64_t a1);
int64_t function_452125(void);
int64_t function_45213d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45214d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_5f07df51();
int64_t function_79709409();
int64_t function_939563b();
int64_t function_ffffffffcf202af3();
int64_t function_ffffffffd948449b();
int64_t function_fffffffff7764efb();
int64_t unknown_13a4f0dc();
int64_t unknown_14016ef5();
int64_t unknown_242cc447();
int64_t unknown_2d975190();
int64_t unknown_3d15361e();
int64_t unknown_3d717b60();
int64_t unknown_49235145();
int64_t unknown_92d7fb4();
int64_t unknown_fb47d2b();
int64_t unknown_ffffffff8dc6665b();
int64_t unknown_ffffffff9c6f427f();
int64_t unknown_ffffffffaf1db6fa();
int64_t unknown_ffffffffc0062751();
int64_t unknown_ffffffffcaa1d854();
int64_t unknown_ffffffffce475333();
int64_t unknown_ffffffffd7929c9d();

// Address range: 0x1347a4 - 0x1347bb
int64_t function_1347a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)a4; // 0x1347a5
    *v1 = *v1 + 1;
    int32_t * v2 = (int32_t *)(a3 + 38); // 0x1347ac
    int32_t v3 = *v2; // 0x1347ac
    int64_t v4; // 0x1347a4
    int32_t v5 = v4; // 0x1347ac
    int32_t v6 = v3 - v5; // 0x1347ac
    *v2 = v6;
    if (((v6 ^ v3) & (v3 ^ v5)) < 0) {
        function_134788();
    }
    if (v4 < (int64_t)v3) {
        function_134773();
    }
    int64_t result = __asm_hlt(a1); // 0x1347b3
    int32_t * v7 = (int32_t *)(result - 1); // 0x1347b4
    *v7 = *v7 + 0xf7802d;
    return result;
}

// Address range: 0x134864 - 0x134865
int64_t function_134864(void) {
    // 0x134864
    int64_t result; // 0x134864
    return result;
}

// Address range: 0x1348a7 - 0x1348be
int64_t function_1348a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1348a7
    int64_t v1; // 0x1348a7
    char * v2 = (char *)(v1 + 61 + 8 * v1); // 0x1348a7
    *v2 = *v2 | 1;
    unknown_92d7fb4();
    int32_t * v3 = (int32_t *)(a4 - 81); // 0x1348b3
    *v3 = *v3 + (int32_t)a3;
    return function_134864();
}

// Address range: 0x1348be - 0x13493e
int64_t function_1348be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __asm_iretd(); // 0x1348be
    int64_t v2; // 0x1348be
    unsigned char v3 = (char)v2;
    *(char *)v1 = v3 / 128 | 2 * v3;
    int64_t v4 = __asm_iretd(); // 0x1348cf
    int16_t v5 = a3; // 0x1348d0
    float80_t v6; // 0x1348be
    *(int16_t *)((v4 & -256 | (int64_t)__asm_in(v5)) + 2) = (int16_t)v6;
    int64_t v7 = unknown_13a4f0dc();
    char v8 = (uint64_t)v2 / 256; // 0x1348db
    *(char *)-0x4ebf001e = *(char *)-0x4ebf001e + v8;
    int64_t v9; // 0x1348be
    __asm_outsd(v5, *(int32_t *)&v9);
    int64_t result = (a4 + 162) % 256 | a4 & 0xffffff00; // 0x134922
    *(char *)-0x7cf2a7d5 = *(char *)-0x7cf2a7d5 + v8;
    char * v10 = (char *)((4 * v7 & 0x3fffffffc) + 0x318e09b4); // 0x13492a
    *v10 = *v10 & v8;
    int32_t * v11 = (int32_t *)(result + 56); // 0x134931
    *v11 = 2 * *v11;
    return result;
}

// Address range: 0x13493f - 0x134947
int64_t function_13493f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13493f
    int64_t result; // 0x13493f
    return result;
}

// Address range: 0x134947 - 0x13494d
int64_t function_134947(void) {
    // 0x134947
    bool v1; // 0x134947
    return __asm_sti() & -0xff01 | 256 * (64 * (int64_t)v1 | 128 * (int64_t)(bool)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1) | 512;
}

// Address range: 0x1349f4 - 0x134a5b
int64_t function_1349f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1349f4
    int64_t result; // 0x1349f4
    char v1 = result;
    char * v2 = (char *)(256 * result & 0xff00 | a3); // 0x1349f6
    unsigned char v3 = *v2; // 0x1349f6
    char v4 = v3 + v1; // 0x1349f6
    *v2 = v4;
    if (v4 < 0 == ((v4 ^ v3) & (v4 ^ v1)) < 0) {
        // 0x1349fa
        return result;
    }
    int32_t * v5 = (int32_t *)(a4 + 0x3a808000); // 0x134a39
    *v5 = (int32_t)(v4 < v3) - (int32_t)a4 + *v5;
    unknown_242cc447();
    __asm_hlt(0xf901e88c);
    return unknown_ffffffff8dc6665b();
}

// Address range: 0x134a5b - 0x134a8d
int64_t function_134a5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = *(int32_t *)0x1567b2465a87b9; // 0x134a5b
    char * v2 = (char *)(int64_t)v1; // 0x134a64
    *v2 = *v2 + 98;
    int64_t v3; // 0x134a5b
    int32_t v4 = v3; // 0x134a67
    int64_t v5; // 0x134a5b
    *(int32_t *)a3 = v1 + v4 + *(int32_t *)&v5;
    int64_t v6 = __asm_int1(); // 0x134a6c
    v5 = v6 & 0xffffffff;
    char * v7 = (char *)(a3 & 0xffffff00 | (int64_t)__asm_in((int16_t)v6)); // 0x134a74
    *v7 = *v7 % 4;
    bool v8; // 0x134a5b
    *(int32_t *)((v8 ? -1 : 1) + a1) = (int32_t)unknown_ffffffff9c6f427f();
    *(int32_t *)0xd9d3ffde = *(int32_t *)0xd9d3ffde + v4;
    return v3 & 0xffffffff;
}

// Address range: 0x134ac8 - 0x134aeb
int64_t function_134ac8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 0x65e7feae); // 0x134aca
    *v1 = (char)a4;
    int32_t * v2 = (int32_t *)(a4 & -256 | (int64_t)*v1); // 0x134ad2
    *v2 = *v2 + (int32_t)a1;
    int64_t v3; // 0x134ac8
    __asm_out_133((int16_t)a3, (int32_t)v3);
    return a3 & 0xffffff00 & v3 | (int64_t)*(char *)0x2501e8d115e9eaf2;
}

// Address range: 0x134aed - 0x134b73
int64_t function_134aed(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x134aed
    *(int32_t *)a3 = (int32_t)a3 + (int32_t)a1;
    int64_t v1 = unknown_14016ef5(); // 0x134aef
    int64_t v2 = a1; // bp-8, 0x134af4
    int32_t * v3 = (int32_t *)(v1 - 0x173b08ff); // 0x134afb
    *v3 = (int32_t)(int64_t)&v2;
    int32_t * v4 = (int32_t *)(v1 - 122); // 0x134b01
    int64_t v5; // 0x134aed
    int32_t v6 = *v4 + (int32_t)v5; // 0x134b01
    *v4 = v6;
    if (a4 != 1 == v6 == 0) {
        // 0x134b64
        return function_939563b();
    }
    // 0x134b08
    *(int32_t *)0x1e88e060107cabb = (int32_t)v1;
    uint64_t v7 = __asm_int3(); // 0x134b11
    int64_t v8 = v5 | a1;
    int64_t v9 = v8 & 0xffffffff; // 0x134b19
    *(int64_t *)((int64_t)*v3 - 8) = -34;
    __asm_int(-24);
    int32_t * v10 = (int32_t *)(v9 - 7); // 0x134b1f
    *v10 = *v10 + (int32_t)v8;
    int64_t v11; // 0x134aed
    int64_t v12 = v11;
    int64_t v13 = *(int64_t *)v12; // 0x134b2c
    uint64_t v14 = (unknown_ffffffffce475333() & 0xffffffff) * (a2 & 0xffffffff) / 0x100000000; // 0x134b32
    unsigned char v15 = *(char *)-0x73eacc9f; // 0x134b39
    unsigned char v16 = v15 + (char)(v7 / 256); // 0x134b39
    *(char *)-0x73eacc9f = v16;
    int32_t v17 = *(int32_t *)(v7 & 0xffffffff); // 0x134b3f
    uint32_t v18 = (int32_t)v9 - v17 + (int32_t)(v16 < v15); // 0x134b3f
    int64_t v19 = v18; // 0x134b3f
    *(char *)v19 = __asm_insb((int16_t)v14);
    while (v18 != 0) {
        // 0x134b22
        v12 = v13;
        v13 = *(int64_t *)v12;
        v14 = (unknown_ffffffffce475333() & 0xffffffff) * (a2 & 0xffffffff) / 0x100000000;
        v15 = *(char *)-0x73eacc9f;
        v16 = v15 + (char)(v7 / 256);
        *(char *)-0x73eacc9f = v16;
        v17 = *(int32_t *)(v7 & 0xffffffff);
        v18 = (int32_t)v19 - v17 + (int32_t)(v16 < v15);
        v19 = v18;
        *(char *)v19 = __asm_insb((int16_t)v14);
    }
    // 0x134b45
    *(int64_t *)v19 = *(int64_t *)(v12 + 8);
    unknown_ffffffffc0062751();
    char * v20 = (char *)v14; // 0x134b55
    unsigned char v21 = *v20; // 0x134b55
    *v20 = v21 / 2 | 128 * v21;
    __asm_int3();
    return unknown_3d717b60() + 2 * v13 & 0xffffffff;
}

// Address range: 0x134b75 - 0x134b9a
int64_t function_134b75(int64_t a1, int64_t a2, int64_t a3) {
    // 0x134b75
    int64_t v1; // 0x134b75
    int64_t v2 = v1;
    bool v3; // 0x134b75
    int32_t v4 = *(int32_t *)(v1 + 0xe8b1e20f + (int64_t)v3 & 0xffffffff); // 0x134b86
    *(char *)v2 = (char)v4 >> 1 ^ (char)v2;
    *(int32_t *)0x6086eb013d003b67 = (int32_t)a1;
    return a1 & 0xffffffff;
}

// Address range: 0x134bbc - 0x134bdd
int64_t function_134bbc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x134bbc
    bool v1; // 0x134bbc
    if (true != !v1) {
        // 0x134bbe
        return __asm_int3();
    }
    int32_t * v2 = (int32_t *)(a2 - 0x4b72a615); // 0x134bc5
    int32_t v3 = *v2 + (int32_t)a4; // 0x134bc5
    *v2 = v3;
    int64_t result; // 0x134bbc
    if (a4 != 1 == v3 == 0) {
        // 0x134bdc
        return result;
    }
    // 0x134bcd
    *(int64_t *)((int64_t)(0x1e80ae3 * *(int32_t *)(result + 0x7e6b9c4)) - 8) = a1;
    return result;
}

// Address range: 0x134bf6 - 0x134bf7
int64_t function_134bf6(int64_t a1) {
    // 0x134bf6
    int64_t result; // 0x134bf6
    return result;
}

// Address range: 0x134c4f - 0x134c50
int64_t function_134c4f(int64_t a1) {
    // 0x134c4f
    int64_t result; // 0x134c4f
    return result;
}

// Address range: 0x134cc4 - 0x134cd3
int64_t function_134cc4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x134cc4
    int64_t result; // 0x134cc4
    return result;
}

// Address range: 0x134d6e - 0x134d6f
int64_t function_134d6e(void) {
    // 0x134d6e
    int64_t result; // 0x134d6e
    return result;
}

// Address range: 0x134d84 - 0x134d86
int64_t function_134d84(void) {
    // 0x134d84
    return function_134d6e();
}

// Address range: 0x134da7 - 0x134dac
int64_t function_134da7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x134da7
    int64_t result; // 0x134da7
    return result;
}

// Address range: 0x134e0a - 0x134e22
int64_t function_134e0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = *(char *)-0x39ca49ef; // 0x134e0a
    int64_t v2; // 0x134e0a
    *(char *)-0x39ca49ef = v1 + (char)((uint64_t)v2 / 256);
    return unknown_3d15361e(*(int32_t *)(a3 - 0x5142057e) + (int32_t)a1);
}

// Address range: 0x134e67 - 0x134e6c
int64_t function_134e67(int64_t a1, int64_t a2) {
    // 0x134e67
    int64_t result; // 0x134e67
    return result;
}

// Address range: 0x134e72 - 0x134e9f
int64_t function_134e72(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x134e74
    if (v1 != 0) {
        char * v2 = (char *)(a2 - 24); // 0x134e74
        *v2 = *v2 >> v1;
    }
    int64_t v3; // 0x134e72
    int32_t * v4 = (int32_t *)(v3 + 0x758c600a); // 0x134e77
    *v4 = *v4 + (int32_t)a4;
    *(int32_t *)-0x6b49517388fe1712 = (int32_t)v3;
    *(int64_t *)(((v3 ^ (a3 & 0xffff00ff | (int64_t)&g2)) & 0xffffffff) - 8) = a4;
    return unknown_ffffffffd7929c9d();
}

// Address range: 0x134eae - 0x134eaf
int64_t function_134eae(int64_t a1) {
    // 0x134eae
    int64_t result; // 0x134eae
    return result;
}

// Address range: 0x134ec0 - 0x134ec2
int64_t function_134ec0(void) {
    // 0x134ec0
    int64_t v1; // 0x134ec0
    return function_134ee4(v1, v1, v1, v1, (int64_t)&g4);
}

// Address range: 0x134edd - 0x134ee4
int64_t function_134edd(int64_t a1, int64_t a2) {
    // 0x134edd
    int64_t v1; // 0x134edd
    uint64_t result = v1;
    char * v2 = (char *)(a2 - 0x6e02ef4c); // 0x134edd
    *v2 = *v2 & (char)(result / 256);
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x134ee4 - 0x134f00
int64_t function_134ee4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x134ee4
    int64_t v1; // 0x134ee4
    *(int32_t *)-0x3bac65ff54f3ffff = (int32_t)v1 ^ 0x7fdf01e8;
    int64_t result = unknown_ffffffffaf1db6fa(); // 0x134ef4
    unsigned char v2 = (char)a4 % 32; // 0x134efa
    if (v2 != 0) {
        char * v3 = (char *)(a4 + 0x68b21700); // 0x134efa
        unsigned char v4 = *v3; // 0x134efa
        *v3 = v4 >> v2 | v4 << 8 - v2;
    }
    return result;
}

// Address range: 0x134f35 - 0x134f36
int64_t function_134f35(void) {
    // 0x134f35
    int64_t result; // 0x134f35
    return result;
}

// Address range: 0x134f36 - 0x134f3c
int64_t function_134f36(int64_t a1) {
    // 0x134f36
    int64_t result; // 0x134f36
    return result;
}

// Address range: 0x134f3c - 0x134f55
int64_t function_134f3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x134f3c
    unknown_ffffffffcaa1d854(unknown_49235145() & 0xffffffff);
    return function_134f35();
}

// Address range: 0x134f7d - 0x134f80
int64_t function_134f7d(void) {
    // 0x134f7d
    int64_t result; // 0x134f7d
    return result;
}

// Address range: 0x134f83 - 0x134f92
int64_t function_134f83(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x134f83
    int64_t v1; // 0x134f83
    *(char *)v1 = (char)(a3 / 256);
    return unknown_2d975190(a1, a2, a3, a4, a5);
}

// Address range: 0x4519e3 - 0x4519f7
int64_t function_4519e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4519e3
    int64_t v1; // 0x4519e3
    bool v2; // 0x4519e3
    if (v2) {
        v1 = function_4519da();
    }
    // 0x4519e5
    int64_t v3; // 0x4519e3
    *(char *)a2 = (char)(v3 | a2);
    __asm_out((int16_t)a3, (char)v1);
    return function_79709409();
}

// Address range: 0x451a12 - 0x451a13
int64_t function_451a12(int64_t a1) {
    // 0x451a12
    int64_t result; // 0x451a12
    return result;
}

// Address range: 0x451a13 - 0x451a3b
int64_t function_451a13(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = *(int32_t *)(a4 - 0x1babe74f); // 0x451a1f
    int64_t v2 = __asm_hlt(a1); // 0x451a26
    int64_t v3; // 0x451a13
    char * v4 = (char *)(v3 + 0x12ccc441); // 0x451a27
    *v4 = 2 * *v4;
    char * v5 = (char *)((int64_t)((int32_t)v3 & 0x779bf3b4 & v1) - 121); // 0x451a32
    *v5 = *v5 & ((char)a3 | 1);
    return v2 & 0xccc47028;
}

// Address range: 0x451a66 - 0x451a69
int64_t function_451a66(int64_t a1) {
    // 0x451a66
    int64_t result; // 0x451a66
    return result;
}

// Address range: 0x451a79 - 0x451a7a
int64_t function_451a79(void) {
    // 0x451a79
    int64_t result; // 0x451a79
    return result;
}

// Address range: 0x451a7f - 0x451aff
int64_t function_451a7f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x451a7f
    int64_t v1; // 0x451a7f
    int64_t v2 = v1 + 0x68f35f82; // 0x451a81
    char * v3 = (char *)(a2 - 26); // 0x451a87
    char v4 = *v3 & (char)(a4 / 256); // 0x451a87
    *v3 = v4;
    *(int64_t *)v1 = a2;
    if (v4 == 0) {
        // 0x451b0e
        return v2 & 0xffffffff;
    }
    int64_t result = 0x100000000 * v2 >> 32; // 0x451a94
    __writegsbyte(-0x18c8d85b9e51b31f, (char)result);
    return result;
}

// Address range: 0x451b37 - 0x451b5a
int64_t function_451b37(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x451b37
    bool v1; // 0x451b37
    *(int64_t *)0x9827bcb4 = 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2;
    *(char *)a1 = __asm_insb((int16_t)a3);
    return function_ffffffffd948449b(*(int64_t *)0x9827bcb4);
}

// Address range: 0x451b91 - 0x451b95
int64_t function_451b91(void) {
    // 0x451b91
    int64_t result; // 0x451b91
    float80_t v1; // 0x451b91
    *(int32_t *)(result + 107) = (int32_t)v1;
    return result;
}

// Address range: 0x451ce3 - 0x451ce8
int64_t function_451ce3(void) {
    // 0x451ce3
    int64_t v1; // 0x451ce3
    return v1 + 0xd2309810 & 0xffffffff;
}

// Address range: 0x451d47 - 0x451d4b
int64_t function_451d47(void) {
    // 0x451d47
    bool v1; // 0x451d47
    if (v1) {
        function_451d47();
    }
    // 0x451d49
    return function_451cdf();
}

// Address range: 0x451d57 - 0x451d5e
int64_t function_451d57(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x451d57
    int64_t v1; // 0x451d57
    int64_t v2 = v1;
    return v2 & -256 | (int64_t)((char)v2 - __readgsbyte(v1));
}

// Address range: 0x451d94 - 0x451d9c
int64_t function_451d94(int64_t a1) {
    // 0x451d94
    return unknown_fb47d2b(a1);
}

// Address range: 0x451dbf - 0x451de0
int64_t function_451dbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x451dbf
    int64_t v1; // 0x451dbf
    unsigned char v2 = (char)v1 & -47; // 0x451dbf
    int64_t v3 = a4 - 1; // 0x451dc6
    if (v3 == 0 || v2 == 0) {
        // 0x451dc8
        return v1 & -256 | (int64_t)v2;
    }
    char * v4 = (char *)(a3 - 37); // 0x451dd2
    *v4 = *v4 + (char)v3;
    return 43 * v1 & -256 | (int64_t)__asm_in_134(61);
}

// Address range: 0x451e0a - 0x451e0f
int64_t function_451e0a(void) {
    // 0x451e0a
    int64_t result; // 0x451e0a
    return result;
}

// Address range: 0x451e12 - 0x451e1c
int64_t function_451e12(void) {
    // 0x451e12
    int64_t v1; // 0x451e12
    bool v2; // 0x451e12
    return v1 + 0x28354773 + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x451e52 - 0x451e55
int64_t function_451e52(void) {
    // 0x451e52
    int64_t result; // 0x451e52
    return result;
}

// Address range: 0x451e66 - 0x451e68
int64_t function_451e66(void) {
    // 0x451e66
    int64_t v1; // 0x451e66
    return function_451eca(v1, v1, v1, v1);
}

// Address range: 0x451ebd - 0x451ec2
int64_t function_451ebd(void) {
    // 0x451ebd
    return function_ffffffffcf202af3();
}

// Address range: 0x451eca - 0x451ef3
int64_t function_451eca(int64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    // 0x451eca
    int64_t v1; // 0x451eca
    uint64_t v2 = v1;
    bool v3; // 0x451eca
    int64_t v4 = 256 * (v2 / 256 + v1 + (int64_t)v3) & 0xff00 | v2 & -0xff01; // 0x451eca
    uint64_t v5 = *(int64_t *)v4; // 0x451ecc
    uint32_t v6 = (int32_t)a2; // 0x451ecf
    uint32_t v7 = *(int32_t *)(a2 + 0x66629109) + (int32_t)(v5 > a2); // 0x451ecf
    bool v8 = v5 > a2 ? v7 != -1 | (int32_t)(v5 > a2) + v6 - v7 > v6 : v7 > v6; // 0x451ecf
    float80_t v9; // 0x451eca
    *(int32_t *)(a1 - 25) = (int32_t)v9;
    return (v8 ? 159 : 158) | v4 & -256;
}

// Address range: 0x451efc - 0x451efd
int64_t function_451efc(void) {
    // 0x451efc
    int64_t result; // 0x451efc
    return result;
}

// Address range: 0x451f29 - 0x451f2f
int64_t function_451f29(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x451f29
    int64_t result; // 0x451f29
    return result;
}

// Address range: 0x451f3c - 0x451f3f
int64_t function_451f3c(int64_t a1) {
    // 0x451f3c
    int64_t result; // 0x451f3c
    return result;
}

// Address range: 0x451f7b - 0x451f7d
int64_t function_451f7b(int64_t a1) {
    // 0x451f7b
    int64_t result; // 0x451f7b
    return result;
}

// Address range: 0x451fae - 0x451fba
int64_t function_451fae(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x451fae
    int64_t result; // 0x451fae
    return result;
}

// Address range: 0x451fbe - 0x451fbf
int64_t function_451fbe(void) {
    // 0x451fbe
    int64_t result; // 0x451fbe
    return result;
}

// Address range: 0x45202f - 0x4520df
int64_t function_45202f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x45202f
    int64_t v1; // 0x45202f
    if ((int64_t)*(char *)(a1 - 0x5f9ca10f + 8 * v1) < a4) {
        // 0x4520af
        return function_5f07df51();
    }
    // 0x452038
    return function_451fbe();
}

// Address range: 0x4520e1 - 0x4520e2
int64_t function_4520e1(int64_t a1) {
    // 0x4520e1
    int64_t result; // 0x4520e1
    return result;
}

// Address range: 0x452125 - 0x452128
int64_t function_452125(void) {
    // 0x452125
    int64_t result; // 0x452125
    return result;
}

// Address range: 0x45213d - 0x45214d
int64_t function_45213d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x3854ce8a); // 0x45213d
    int64_t v2; // 0x45213d
    bool v3; // 0x45213d
    *v1 = *v1 + (int32_t)v2 + (int32_t)v3;
    return function_fffffffff7764efb();
}

// Address range: 0x45214d - 0x4521e2
int64_t function_45214d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6;
    int64_t v2; // 0x45214d
    int32_t * v3 = (int32_t *)(v2 + 92); // 0x452158
    *v3 = *v3 | -0x7ca34fe1;
    unsigned char v4 = (char)v2; // 0x452163
    char v5 = v4 > 170; // 0x452165
    unsigned char v6 = v4 - 51 + v5; // 0x452165
    if ((v6 + v5 & -86 - v4) < 0) {
        // 0x452169
        return v2 & -256 | (int64_t)v6;
    }
    int64_t v7 = *(int64_t *)(v2 + (int64_t)&v1 & 0xffffffff); // 0x452162
    char v8 = __asm_insb((int16_t)a3 % 256 | (int16_t)&g1); // 0x4521df
    *(char *)a5 = v8;
    return (int64_t)*(int32_t *)v7;
}
