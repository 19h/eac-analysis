/*
 * Targeted RetDec C for native executable gap queue batch 657.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xda7c7-0xda9c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xda9c7-0xdabc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdabc7-0xdadc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdafc7-0xdb1c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c6755-0x1c6955 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c6955-0x1c6b55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c6b55-0x1c6d55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c6f55-0x1c7155 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_14218b1c();
int64_t function_1c6755(void);
int64_t function_1c675d(int64_t a1, int64_t a2);
int64_t function_1c676e(void);
int64_t function_1c67d5(void);
int64_t function_1c6878(void);
int64_t function_1c6891(void);
int64_t function_1c68c9(void);
int64_t function_1c6926(void);
int64_t function_1c6965(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1c6990(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c6a2d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1c6a6d(int64_t a1);
int64_t function_1c6a75(int64_t a1);
int64_t function_1c6a9e(void);
int64_t function_1c6aed(void);
int64_t function_1c6b2f(void);
int64_t function_1c6b47(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1c6c10(int64_t a1);
int64_t function_1c6c26(int64_t a1);
int64_t function_1c6c83(void);
int64_t function_1c6cb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1c6d4a(int64_t a1);
int64_t function_1c6f55(void);
int64_t function_1c6f57(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c6fa8(int64_t a1);
int64_t function_1c6ffd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1c7012(int64_t a1);
int64_t function_1c704f(void);
int64_t function_1c70ee(int64_t a1, int64_t a2, int64_t a3);
int64_t function_204ecd5();
int64_t function_4987c24();
int64_t function_5b4ed8ff();
int64_t function_6dddab07();
int64_t function_cf3c7();
int64_t function_da7c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_da7db(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_da7fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_da864(void);
int64_t function_da890(int64_t a1, int64_t a2, int64_t a3);
int64_t function_da89c(void);
int64_t function_da91a(void);
int64_t function_da964(void);
int64_t function_da966(void);
int64_t function_da995(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_daa43(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_dab08(int64_t a1);
int64_t function_dab46(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_dab9c(int64_t a1);
int64_t function_dabb5(int64_t a1, int64_t a2);
int64_t function_dabf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_daca9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_dad19(int64_t a1);
int64_t function_dad84(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_dafc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_db130(void);
int64_t function_db131(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ffffffffa8857105();
int64_t function_ffffffffb1e26424();
int64_t function_ffffffffb7c9249e();
int64_t unknown_10e48c60();
int64_t unknown_1199fb01();
int64_t unknown_1cf16233();
int64_t unknown_1f215536();
int64_t unknown_361719e4();
int64_t unknown_4013ca49();
int64_t unknown_41365f26();
int64_t unknown_44ec6404();
int64_t unknown_4ccf8b1b();
int64_t unknown_510ee75a();
int64_t unknown_720435f6();
int64_t unknown_73156e97();
int64_t unknown_ddbc250();
int64_t unknown_ff020ca();
int64_t unknown_ffffffffa516f05f();
int64_t unknown_ffffffffa5caa449();
int64_t unknown_ffffffffaac465ea();
int64_t unknown_ffffffffb1e1e3d0();
int64_t unknown_ffffffffd40f6a17();

// Address range: 0xda7c7 - 0xda7da
int64_t function_da7c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xda7c7
    int64_t v1; // 0xda7c7
    int32_t * v2 = (int32_t *)(v1 + 0x5fabb0a); // 0xda7c7
    *v2 = *v2 + (int32_t)v1;
    char * v3 = (char *)((a4 & 0xffffffff) + 112); // 0xda7ce
    unsigned char v4 = *v3; // 0xda7ce
    unsigned char v5 = v4 + (char)a3; // 0xda7ce
    *v3 = v5;
    return a4 + 0xe8fe44ef + (int64_t)(v5 < v4) & 0xffffffff;
}

// Address range: 0xda7db - 0xda7fe
int64_t function_da7db(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    char * v1 = (char *)((int64_t)__asm_in(-111) - 12); // 0xda7de
    *v1 = *v1 + (char)a4;
    unknown_ffffffffaac465ea();
    int64_t result = __asm_int3(); // 0xda7e9
    if (*(char *)(3 * a3) < (char)a3) {
        // 0xda7fa
        int64_t v2; // 0xda7db
        *(char *)v2 = *(char *)&v2 + (char)result;
        return result;
    }
    // 0xda7ec
    bool v3; // 0xda7db
    int64_t v4 = v3 ? -4 : 4; // 0xda7db
    unsigned char v5 = *(char *)(a1 + 0x2a9f34f6 + v4); // 0xda7ec
    int32_t * v6 = (int32_t *)(a4 + 118); // 0xda7f4
    *v6 = *v6 + (int32_t)(v4 + a2);
    return (result - a4 / 256 + (int64_t)(v5 > (char)(a3 / 256))) % 256 | result & -256;
}

// Address range: 0xda7fe - 0xda80d
int64_t function_da7fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 71); // 0xda803
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0xda7fe
    return result;
}

// Address range: 0xda864 - 0xda865
int64_t function_da864(void) {
    // 0xda864
    int64_t result; // 0xda864
    return result;
}

// Address range: 0xda890 - 0xda898
int64_t function_da890(int64_t a1, int64_t a2, int64_t a3) {
    // 0xda890
    int64_t result; // 0xda890
    return result;
}

// Address range: 0xda89c - 0xda8a1
int64_t function_da89c(void) {
    // 0xda89c
    return function_ffffffffb7c9249e();
}

// Address range: 0xda91a - 0xda91f
int64_t function_da91a(void) {
    // 0xda91a
    return function_6dddab07();
}

// Address range: 0xda964 - 0xda965
int64_t function_da964(void) {
    // 0xda964
    int64_t result; // 0xda964
    return result;
}

// Address range: 0xda966 - 0xda967
int64_t function_da966(void) {
    // 0xda966
    int64_t result; // 0xda966
    return result;
}

// Address range: 0xda995 - 0xdaa1a
int64_t function_da995(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int16_t v1 = a3; // 0xda995
    *(int32_t *)a1 = __asm_insd(v1);
    int32_t result = __asm_in_133(v1); // 0xda998
    int64_t v2; // 0xda995
    *(char *)(a3 + 0x2961fdce) = (char)v2;
    *(int32_t *)-0x1760fa2234e414f7 = result;
    int32_t * v3 = (int32_t *)(a4 - 1); // 0xdaa17
    *v3 = *v3 + (int32_t)a2;
    return result;
}

// Address range: 0xdaa43 - 0xdaad4
int64_t function_daa43(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a1;
    int32_t * v2 = (int32_t *)(a4 - 0xab6fe18 + unknown_4013ca49()); // 0xdaa4d
    *v2 = (int32_t)a2;
    unknown_510ee75a();
    int64_t v3 = unknown_10e48c60(); // 0xdaa59
    char * v4 = (char *)(a3 - 21); // 0xdaa72
    *v4 = *v4 + (char)v3;
    __asm_sti();
    return function_5b4ed8ff();
    int32_t * v5 = (int32_t *)((int64_t)*v2 - 0x55eeddc6); // 0xdaa61
    uint32_t v6 = *v5; // 0xdaa61
    int64_t v7; // 0xdaa43
    uint32_t v8 = (int32_t)v7; // 0xdaa61
    uint32_t v9 = v6 + v8; // 0xdaa61
    *v5 = v9;
    int64_t result = v3 & -256 | (int64_t)__asm_in_134((int16_t)a3); // 0xdaa69
    uint32_t v10 = *(int32_t *)&v1 + (int32_t)(v9 < v6); // 0xdaa6a
    int64_t v11; // 0xdaa43
    if (v10 <= (int32_t)(int64_t)&v11) {
        // 0xdaa6e
        *(char *)a3 = (char)(a4 / 256 & a3);
        return result;
    }
    bool v12 = v9 < v6 ? v10 != -1 | (int32_t)(v9 < v6) + v8 - v10 > v8 : v10 > v8; // 0xdaa6a
    int64_t v13 = a4; // 0xdaaba
    int64_t v14 = result; // 0xdaab8
    uint64_t v15 = v14 + 155 + (int64_t)v12; // 0xdaab8
    v14 = v15 % 256 | v14 & -256;
    int32_t * v16 = (int32_t *)(v14 - 0x5a829ffd); // 0xdaabc
    uint32_t v17 = *v16; // 0xdaabc
    uint32_t v18 = v17 + (int32_t)a3; // 0xdaabc
    unsigned char v19 = llvm_ctpop_i8((char)v18); // 0xdaabc
    *v16 = v18;
    while (v19 % 2 == 0) {
        // 0xdaab3
        v13 = 256 * v15 + v13 & 0xff00 | v13 & -0xff01;
        *(char *)v13 = (char)(v7 / 256);
        v15 = v14 + 155 + (int64_t)(v18 < v17);
        v14 = v15 % 256 | v14 & -256;
        v16 = (int32_t *)(v14 - 0x5a829ffd);
        v17 = *v16;
        v18 = v17 + (int32_t)a3;
        v19 = llvm_ctpop_i8((char)v18);
        *v16 = v18;
    }
    int64_t v20 = unknown_ff020ca(); // 0xdaac4
    return (v20 + 14) % 256 | v20 & -256;
}

// Address range: 0xdab08 - 0xdab0b
int64_t function_dab08(int64_t a1) {
    // 0xdab08
    int64_t result; // 0xdab08
    return result;
}

// Address range: 0xdab46 - 0xdab79
int64_t function_dab46(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    int64_t v1 = unknown_ddbc250(); // 0xdab4a
    char * v2 = (char *)(v1 + 0x24dff00); // 0xdab4f
    *v2 = *v2 + (char)v1;
    int64_t v3 = v1 & -256; // 0xdab55
    int64_t v4; // 0xdab46
    int32_t * v5 = (int32_t *)(v4 + 0x6800d700); // 0xdab57
    *v5 = *v5 + (int32_t)v4;
    uint64_t v6 = (v1 + a4 / 256 ^ 142) + 248; // 0xdab65
    *(int32_t *)a1 = (int32_t)(v6 % 256 | v3);
    int64_t v7 = v6 / 2 % 128 | v3; // 0xdab68
    char * v8 = (char *)(v7 - 127); // 0xdab6c
    *v8 = *v8 + (char)(a3 / 256);
    return v7 & -0xff81 | (int64_t)&g2;
}

// Address range: 0xdab9c - 0xdab9f
int64_t function_dab9c(int64_t a1) {
    // 0xdab9c
    int64_t result; // 0xdab9c
    return result;
}

// Address range: 0xdabb5 - 0xdabb9
int64_t function_dabb5(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 - 37); // 0xdabb5
    int64_t result; // 0xdabb5
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0xdabf8 - 0xdac08
int64_t function_dabf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xdabf8
    return function_ffffffffa8857105();
}

// Address range: 0xdaca9 - 0xdad18
int64_t function_daca9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 70); // 0xdacb2
    int32_t v2 = a2; // 0xdacb2
    *v1 = *v1 + v2;
    int64_t v3; // 0xdaca9
    int64_t v4 = (v3 & 0xffffff00 | (int64_t)*(char *)0x3d0000134898a40a) + v3; // 0xdacbd
    int32_t * v5 = (int32_t *)(v4 & 0xffffffff); // 0xdacbf
    *v5 = *v5 + v2;
    *(char *)a4 = (char)(a4 / 256);
    int64_t v6 = v4 + v3; // 0xdaccc
    *(int32_t *)-0x2792b92b = *(int32_t *)-0x2792b92b + (int32_t)a1;
    unsigned char v7 = *(char *)(v6 & 0xffffffff); // 0xdacd4
    __asm_out(-119, (int32_t)v6);
    *(int32_t *)0x2b0de4ec = *(int32_t *)0x2b0de4ec + (int32_t)a3;
    char v8 = *(char *)(((int64_t)v7 | 0xe700df8f) + 0x3af2d4f7); // 0xdacea
    unknown_720435f6();
    uint64_t v9 = unknown_1199fb01(); // 0xdacfa
    int64_t v10; // 0xdaca9
    char v11 = *(char *)&v10; // 0xdad05
    int32_t * v12 = (int32_t *)(4 * (256 * (int64_t)((char)(v9 / 256) - v11) | v9 & 0x3fffffffffff00ff) + (a3 & -256 | (int64_t)(v8 | (char)a3))); // 0xdad0e
    int32_t v13 = *v12 | v2; // 0xdad0e
    unsigned char v14 = llvm_ctpop_i8((char)v13); // 0xdad0e
    *v12 = v13;
    return unknown_ffffffffd40f6a17() & -0xff01 | 0x4000 * (int64_t)(v13 == 0) | 0x8000 * (int64_t)(v13 < 0) | 1024 * (int64_t)(v14 % 2 == 0) | 512;
}

// Address range: 0xdad19 - 0xdad2f
int64_t function_dad19(int64_t a1) {
    // 0xdad19
    int64_t result; // 0xdad19
    *(int32_t *)-0x24ba2c7a93fe17c6 = (int32_t)result;
    return result;
}

// Address range: 0xdad84 - 0xdad90
int64_t function_dad84(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xdad84
    int64_t v1; // 0xdad84
    *(int32_t *)a1 = (int32_t)v1;
    char * v2 = (char *)(a4 + 0x3aab1b00); // 0xdad85
    *v2 = *v2 + (char)((uint64_t)v1 / 256);
    bool v3; // 0xdad84
    return function_14218b1c((v3 ? -4 : 4) + a1);
}

// Address range: 0xdafc7 - 0xdb0a9
int64_t function_dafc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a7;
    int64_t v2 = (int64_t)&v1; // 0xdb048
    int64_t v3 = v2 + 8; // 0xdb075
    v1 = *(int64_t *)v3;
    *(int64_t *)(v2 - 8) = v3;
    return function_cf3c7();
}

// Address range: 0xdb130 - 0xdb131
int64_t function_db130(void) {
    // 0xdb130
    int64_t result; // 0xdb130
    return result;
}

// Address range: 0xdb131 - 0xdb135
int64_t function_db131(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0xdb131
    *v1 = *v1 | (char)a4;
    int64_t result; // 0xdb131
    return result;
}

// Address range: 0x1c6755 - 0x1c6759
int64_t function_1c6755(void) {
    // 0x1c6755
    __asm_iretd();
    int64_t v1; // 0x1c6755
    return v1 & 0xffffffff;
}

// Address range: 0x1c675d - 0x1c6762
int64_t function_1c675d(int64_t a1, int64_t a2) {
    // 0x1c675d
    int64_t result; // 0x1c675d
    return result;
}

// Address range: 0x1c676e - 0x1c6771
int64_t function_1c676e(void) {
    // 0x1c676e
    int64_t result; // 0x1c676e
    return result;
}

// Address range: 0x1c67d5 - 0x1c67d6
int64_t function_1c67d5(void) {
    // 0x1c67d5
    int64_t result; // 0x1c67d5
    return result;
}

// Address range: 0x1c6878 - 0x1c6881
int64_t function_1c6878(void) {
    // 0x1c6878
    int64_t v1; // 0x1c6878
    return v1 & -185;
}

// Address range: 0x1c6891 - 0x1c6894
int64_t function_1c6891(void) {
    // 0x1c6891
    int64_t result; // 0x1c6891
    return result;
}

// Address range: 0x1c68c9 - 0x1c68ce
int64_t function_1c68c9(void) {
    // 0x1c68c9
    return function_204ecd5();
}

// Address range: 0x1c6926 - 0x1c692b
int64_t function_1c6926(void) {
    // 0x1c6926
    return function_ffffffffb1e26424();
}

// Address range: 0x1c6965 - 0x1c6990
int64_t function_1c6965(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1c6965
    *(char *)0x6fff096e = *(char *)0x6fff096e + (char)(a3 / 256);
    float80_t v1; // 0x1c6965
    *(float64_t *)a3 = (float64_t)v1;
    int64_t v2; // 0x1c6965
    __asm_wait(v2 & 0xffffffff);
    int32_t v3 = __asm_in(-24); // 0x1c6981
    *(int32_t *)0x3966828c = *(int32_t *)0x3966828c + (int32_t)v2;
    return v3 + (int32_t)v2;
}

// Address range: 0x1c6990 - 0x1c6a25
int64_t function_1c6990(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int16_t v1 = a3; // 0x1c6990
    int64_t v2; // 0x1c6990
    int32_t v3 = v2;
    __asm_outsd(v1, v3);
    int64_t v4 = unknown_73156e97(); // 0x1c6991
    *(int32_t *)a1 = v3;
    bool v5; // 0x1c6990
    int64_t v6 = v5 ? -4 : 4; // 0x1c699e
    int64_t v7 = v6 + a2; // 0x1c699e
    char * v8 = (char *)(v4 & -256 | 112); // 0x1c69d1
    *v8 = *v8 + (v5 ? -23 : -24);
    int64_t v9 = v2 + a1 + v6 & 0xffffffff; // 0x1c69d6
    uint32_t v10 = __asm_in_133(v1); // 0x1c69d8
    int64_t v11 = v5 ? -1 : 1; // 0x1c69d9
    int64_t v12 = v9 + v11; // 0x1c69d9
    int64_t v13 = v7 + v11; // 0x1c69d9
    char * v14 = (char *)(v13 & 0xffffffff); // 0x1c69da
    char v15 = *v14; // 0x1c69da
    char v16 = v10 / 256; // 0x1c69da
    char v17 = *(char *)v7 < *(char *)v9; // 0x1c69da
    char v18 = v15 + v16 + v17; // 0x1c69da
    char v19 = v18 + v17; // 0x1c69da
    *v14 = v18;
    int64_t v20 = unknown_361719e4(v12, v13); // 0x1c69dd
    if (((v19 ^ v15) & (v19 ^ v16)) < 0) {
        // 0x1c69b3
        __asm_out_135(v1, (int32_t)v20 & -0xff01 | (int32_t)&g3);
        char * v21 = (char *)(4 * a4 + 0x13af25fa + v2); // 0x1c69c2
        *v21 = *v21 ^ (char)(*(int32_t *)-0x778217fe17872053 / 256);
        return unknown_ffffffffb1e1e3d0();
    }
    int64_t v22 = v12 + a3; // 0x1c69f7
    *(int32_t *)-0x49d833fe = *(int32_t *)-0x49d833fe - 0x1e8345e;
    unsigned char v23 = (char)v22; // 0x1c6a03
    unsigned char v24 = v23 + (char)a3; // 0x1c6a03
    *(int32_t *)(v13 - 0x2130fe18) = (int32_t)*(float64_t *)0x20477ba;
    char * v25 = (char *)(v13 - 119); // 0x1c6a0e
    *v25 = *v25 + (char)(v24 < v23);
    unknown_4ccf8b1b(v22 & 0xffffff00 | (int64_t)v24);
    return unknown_41365f26();
}

// Address range: 0x1c6a2d - 0x1c6a69
int64_t function_1c6a2d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = unknown_1cf16233(); // 0x1c6a2d
    char * v2 = (char *)(v1 + 0x48db2600); // 0x1c6a32
    *v2 = *v2 + (char)v1;
    uint64_t v3 = v1 + a4 / 256; // 0x1c6a38
    int32_t * v4 = (int32_t *)(a3 + 1); // 0x1c6a3a
    uint32_t v5 = *v4; // 0x1c6a3a
    int64_t v6; // 0x1c6a2d
    uint32_t v7 = v5 + (int32_t)v6; // 0x1c6a3a
    *v4 = v7;
    char v8 = *(char *)(v3 % 256 | v1 & -256); // 0x1c6a3d
    unknown_ffffffffa5caa449();
    uint64_t v9 = __asm_int3(); // 0x1c6a44
    int64_t v10; // 0x1c6a2d
    *(int32_t *)a1 = *(int32_t *)&v10;
    *(char *)-0x5be1acdd = (char)(v8 + (char)v3 + (char)(v7 < v5) >= 0);
    *(int64_t *)v6 = -0xca4fbf6;
    bool v11; // 0x1c6a2d
    *(int32_t *)((v11 ? -4 : 4) + a1) = (int32_t)v9;
    *(int32_t *)0x861601e8 = __asm_insd((int16_t)a3);
    return v9 & -256 | (int64_t)*(char *)(v9 % 256 + v6);
}

// Address range: 0x1c6a6d - 0x1c6a70
int64_t function_1c6a6d(int64_t a1) {
    // 0x1c6a6d
    int64_t result; // 0x1c6a6d
    return result;
}

// Address range: 0x1c6a75 - 0x1c6a76
int64_t function_1c6a75(int64_t a1) {
    // 0x1c6a75
    int64_t result; // 0x1c6a75
    return result;
}

// Address range: 0x1c6a9e - 0x1c6a9f
int64_t function_1c6a9e(void) {
    // 0x1c6a9e
    int64_t result; // 0x1c6a9e
    return result;
}

// Address range: 0x1c6aed - 0x1c6aef
int64_t function_1c6aed(void) {
    // 0x1c6aed
    return function_1c6a9e();
}

// Address range: 0x1c6b2f - 0x1c6b32
int64_t function_1c6b2f(void) {
    // 0x1c6b2f
    int64_t result; // 0x1c6b2f
    return result;
}

// Address range: 0x1c6b47 - 0x1c6b67
int64_t function_1c6b47(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1c6b47
    *(char *)0x3d1c6b57 = *(char *)0x3d1c6b57 + (char)(a4 / 256);
    int64_t v1; // 0x1c6b47
    *(int32_t *)a3 = 2 * (int32_t)v1;
    __asm_int(94);
    int64_t v2 = __asm_iretd(); // 0x1c6b5e
    int64_t v3; // 0x1c6b47
    *(int32_t *)a1 = *(int32_t *)&v3;
    return v2 & -256 | 116;
}

// Address range: 0x1c6c10 - 0x1c6c11
int64_t function_1c6c10(int64_t a1) {
    // 0x1c6c10
    int64_t result; // 0x1c6c10
    return result;
}

// Address range: 0x1c6c26 - 0x1c6c29
int64_t function_1c6c26(int64_t a1) {
    // 0x1c6c26
    int64_t result; // 0x1c6c26
    return result;
}

// Address range: 0x1c6c83 - 0x1c6c84
int64_t function_1c6c83(void) {
    // 0x1c6c83
    int64_t result; // 0x1c6c83
    return result;
}

// Address range: 0x1c6cb6 - 0x1c6d3c
int64_t function_1c6cb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a6;
    int64_t v2 = a7;
    float80_t v3; // 0x1c6cb6
    *(float64_t *)0x47b54470 = (float64_t)v3;
    int64_t result; // 0x1c6cb6
    int32_t v4 = result; // 0x1c6d05
    __asm_out_135((int16_t)a3, v4);
    bool v5; // 0x1c6cb6
    if (v5) {
        // 0x1c6d08
        return 0x10000 * v4 >> 16;
    }
    int32_t * v6 = (int32_t *)(4 * a1 - 0xfc57675 + result); // 0x1c6d20
    uint32_t v7 = *v6; // 0x1c6d20
    uint32_t v8 = (int32_t)a2; // 0x1c6d20
    int32_t v9 = v7 + v8; // 0x1c6d20
    *v6 = v9;
    if (((v9 ^ v7) & (v9 ^ v8)) >= 0) {
        int64_t v10 = (result & 0xffff00ff | 256 * (64 * (int64_t)(v9 == 0) | (int64_t)(v9 < v7) | 128 * (int64_t)(v9 < 0) | 16 * (int64_t)(v7 % 16 + v8 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8((char)v9) % 2 == 0)) | 512) + 0x17abf5aa; // 0x1c6cc6
        int32_t * v11 = (int32_t *)(a1 - 99); // 0x1c6ccb
        *v11 = *v11 + (int32_t)(int64_t)&v2;
        *(char *)0x1e8562e2d0175d4 = (char)v10;
        return v10 & 0xffffffff;
    }
    if (v9 != 0) {
        // 0x1c6d69
        return result;
    }
    int64_t result2 = unknown_1f215536(); // 0x1c6d30
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)result;
    return result2;
}

// Address range: 0x1c6d4a - 0x1c6d4b
int64_t function_1c6d4a(int64_t a1) {
    // 0x1c6d4a
    int64_t result; // 0x1c6d4a
    return result;
}

// Address range: 0x1c6f55 - 0x1c6f56
int64_t function_1c6f55(void) {
    // 0x1c6f55
    int64_t result; // 0x1c6f55
    return result;
}

// Address range: 0x1c6f57 - 0x1c6f63
int64_t function_1c6f57(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c6f57
    int64_t v1; // 0x1c6f57
    __asm_outsb((int16_t)a3, (char)v1);
    unknown_ffffffffa516f05f();
    return function_4987c24();
}

// Address range: 0x1c6fa8 - 0x1c6fa9
int64_t function_1c6fa8(int64_t a1) {
    // 0x1c6fa8
    int64_t result; // 0x1c6fa8
    return result;
}

// Address range: 0x1c6ffd - 0x1c7012
int64_t function_1c6ffd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)((unknown_44ec6404() & 0xffffffff) - 14); // 0x1c700c
    *v1 = *v1 + (int32_t)a2;
    return __asm_int1();
}

// Address range: 0x1c7012 - 0x1c7019
int64_t function_1c7012(int64_t a1) {
    // 0x1c7012
    int64_t result; // 0x1c7012
    return result;
}

// Address range: 0x1c704f - 0x1c7053
int64_t function_1c704f(void) {
    // 0x1c704f
    int64_t v1; // 0x1c704f
    uint64_t v2 = v1;
    return v2 % 256 * (int64_t)*(char *)(v1 - 24) | v2 & -0x10000;
}

// Address range: 0x1c70ee - 0x1c710a
int64_t function_1c70ee(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = __asm_in_133((int16_t)a3); // 0x1c70ef
    int64_t result = v1; // 0x1c70ef
    bool v2; // 0x1c70ee
    if (v2) {
        // 0x1c70f6
        *(int32_t *)a1 = (int32_t)a2;
        return result + 0x8e27019d + (int64_t)(v1 < 0x28790001) & 0xffffffff;
    }
    // 0x1c70f4
    return result;
}
