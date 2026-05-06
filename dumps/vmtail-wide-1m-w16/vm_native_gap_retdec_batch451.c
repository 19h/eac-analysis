/*
 * Targeted RetDec C for native executable gap queue batch 451.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x198885-0x198a85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b0775-0x2b0975 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b0975-0x2b0b75 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fd61e-0x2fd81e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fd81e-0x2fda1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fda1e-0x2fdc1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fdc1e-0x2fde1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fde1e-0x2fe01e rank=- name=- kind=- bytes=- uncovered=-
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
void unknown_b6ccb9(void);
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
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pcmpgtb(int128_t left, int128_t right);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
int128_t __asm_pavgw(int128_t left, int128_t right);
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

int64_t function_19887c();
int64_t function_198885(void);
int64_t function_198888(int64_t a1);
int64_t function_1988a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1988cc(int64_t a1);
int64_t function_198911(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_198950(int64_t a1);
int64_t function_198a54(int64_t a1, int64_t a2, int64_t a3);
int64_t function_217d8c9();
int64_t function_2b0775(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b07b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b0832(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b0892(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2b0905(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2b0974(void);
int64_t function_2b09a5(void);
int64_t function_2b09aa(int64_t a1);
int64_t function_2b09e8(void);
int64_t function_2b09fc(void);
int64_t function_2b09fe(void);
int64_t function_2b0a34(int64_t a1);
int64_t function_2b0a4b(void);
int64_t function_2b0a6f(void);
int64_t function_2b0ab2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2b0b49(int64_t a1);
int64_t function_2b0b57(void);
int64_t function_2fd61e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2fd672(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2fd69a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2fd6a2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2fd7d5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2fd7e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2fd845(int64_t a1);
int64_t function_2fd871(void);
int64_t function_2fd87d(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_2fd8bf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2fda49(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2fdadd(void);
int64_t function_2fdb06(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2fdb13(int64_t a1);
int64_t function_2fdb7f(void);
int64_t function_2fdb88(int64_t a1);
int64_t function_2fdbd6(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_2fdc0d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2fdc36(void);
int64_t function_2fdc77(void);
int64_t function_2fdc80(void);
int64_t function_2fdc99(void);
int64_t function_2fdcdb(int64_t a1);
int64_t function_2fdcf2(void);
int64_t function_2fdcf9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2fdd17(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2fdd31(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2fdd7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2fdd7e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2fde0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2fde21(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2fde5b(int64_t a1);
int64_t function_2fde5e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2fe00d(int64_t a1);
int64_t function_553b6f();
int64_t function_712cf392();
int64_t function_ffffffffd73c09c5();
int64_t unknown_16cd703();
int64_t unknown_3adbb0b2();
int64_t unknown_3d98ec45();
int64_t unknown_4cebdb6();
int64_t unknown_69281c0e();
int64_t unknown_73fd3687();
int64_t unknown_7adcc043();
int64_t unknown_ffffffff84257774();
int64_t unknown_ffffffff88bc34aa();
int64_t unknown_ffffffff891ff85f();
int64_t unknown_ffffffff89f929d6();
int64_t unknown_ffffffff935a7813();
int64_t unknown_ffffffffc82ad5a1();
int64_t unknown_ffffffffefb92c59();
int64_t unknown_fffffffff59aa7b5();

// Address range: 0x198885 - 0x198886
int64_t function_198885(void) {
    // 0x198885
    int64_t result; // 0x198885
    return result;
}

// Address range: 0x198888 - 0x198889
int64_t function_198888(int64_t a1) {
    // 0x198888
    int64_t result; // 0x198888
    return result;
}

// Address range: 0x1988a5 - 0x1988b2
int64_t function_1988a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 - 0x35186521 + 8 * a2); // 0x1988a5
    *v1 = *v1 + (int32_t)a4;
    int64_t v2; // 0x1988a5
    return v2 ^ 246;
}

// Address range: 0x1988cc - 0x1988d2
int64_t function_1988cc(int64_t a1) {
    // 0x1988cc
    return function_19887c();
}

// Address range: 0x198911 - 0x19893d
int64_t function_198911(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x198911
    int64_t v1; // 0x198911
    int64_t v2 = v1;
    int64_t v3 = v1;
    uint64_t v4 = v1 & a3;
    *(int32_t *)v2 = (int32_t)(v2 & v1);
    int64_t v5; // 0x198911
    *(char *)(v3 & 0xffffffff) = *(char *)&v5 + (char)v3;
    char v6 = *(char *)((v4 & 0xffffffff) - 122); // 0x198920
    int64_t v7 = 256 * (int64_t)((char)(a3 / 256) - v6) | a3 & -0xff01; // 0x198920
    int64_t v8 = __asm_sti(a1, a2, v7, a4); // 0x198927
    int32_t * v9 = (int32_t *)(v7 + 0x6b5c86d7); // 0x198928
    *v9 = *v9 | (int32_t)v8;
    int64_t v10; // 0x198911
    *(char *)a2 = *(char *)&v10 - (char)a4;
    *(char *)0x1f37c437 = *(char *)0x1f37c437 + (char)(v4 / 256);
    return a1 & 0xffffffff;
}

// Address range: 0x198950 - 0x198953
int64_t function_198950(int64_t a1) {
    // 0x198950
    int64_t result; // 0x198950
    return result;
}

// Address range: 0x198a54 - 0x198a63
int64_t function_198a54(int64_t a1, int64_t a2, int64_t a3) {
    // 0x198a54
    int64_t v1; // 0x198a54
    int64_t result = v1 & -0xff01 | (int64_t)&g1; // 0x198a54
    int32_t * v2 = (int32_t *)(v1 - 0x66eed771); // 0x198a5c
    *v2 = *v2 + (int32_t)result;
    return result;
}

// Address range: 0x2b0775 - 0x2b0786
int64_t function_2b0775(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b0775
    bool v1; // 0x2b0775
    int64_t v2 = (v1 ? -4 : 4) + a1; // 0x2b0775
    __asm_wait(v2);
    __asm_wait(v2);
    return unknown_73fd3687();
}

// Address range: 0x2b07b5 - 0x2b0831
int64_t function_2b07b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a1;
    int64_t v3; // 0x2b07b5
    *(char *)-0x16fd5afd = *(char *)-0x16fd5afd | (char)v3;
    *(int32_t *)a1 = (int32_t)v3 + (int32_t)a1;
    int64_t v4; // 0x2b07b5
    int64_t v5 = v4 & -0xff01 | 256 * (int64_t)*(char *)&v4; // 0x2b07c0
    v4 = v5;
    int32_t v6 = a2; // 0x2b07c4
    int32_t v7 = a4; // 0x2b07c4
    int32_t v8 = v7 + v6; // 0x2b07c4
    if (v8 < 0 == ((v8 ^ v6) & (v8 ^ v7)) < 0) {
        // 0x2b0828
        return (int64_t)(2 * (int32_t)v3 + *(int32_t *)&v2);
    }
    int32_t * v9 = (int32_t *)(v5 + 0x287f5bb0); // 0x2b07c8
    *v9 = *v9 - (int32_t)v5;
    int64_t v10 = unknown_ffffffff89f929d6(); // 0x2b07d0
    char * v11 = (char *)v10; // 0x2b07d5
    *v11 = *v11 + 12;
    *(int32_t *)v1 = *(int32_t *)&v1 + v8;
    return v10 & 0x17886da5 | 0xe877925a;
}

// Address range: 0x2b0832 - 0x2b0856
int64_t function_2b0832(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)-0xa431221502a9109; // 0x2b0832
    int64_t v2 = unknown_7adcc043(); // 0x2b083d
    uint16_t v3 = (int16_t)v2 % (int16_t)*(char *)(a4 - 118); // 0x2b0842
    unsigned char v4 = *(char *)0x1001e801d338798e; // 0x2b0846
    int64_t v5; // 0x2b0832
    char * v6 = (char *)((v5 & -256 | (int64_t)v1) + 0x69750c03); // 0x2b084f
    *v6 = *v6 | (char)v3;
    return v2 & -0x10000 | (int64_t)(256 * v3) | (int64_t)v4;
}

// Address range: 0x2b0892 - 0x2b08ae
int64_t function_2b0892(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    unsigned char v1 = (char)a4;
    unsigned char v2 = v1 % 32; // 0x2b089d
    if (v2 != 0) {
        *(char *)a4 = v1 >> 8 - v2 | v1 << v2;
    }
    int64_t v3; // 0x2b0892
    int64_t result = v3 & -256 | (int64_t)*(char *)-0x2f99fe173eb9c5f4; // 0x2b0892
    char * v4 = (char *)result; // 0x2b08a2
    *v4 = *v4 | (char)(a4 / 256);
    return result;
}

// Address range: 0x2b0905 - 0x2b090d
int64_t function_2b0905(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2b0905
    int64_t result; // 0x2b0905
    *(int32_t *)a3 = (int32_t)result ^ 40;
    return result;
}

// Address range: 0x2b0974 - 0x2b0981
int64_t function_2b0974(void) {
    // 0x2b0974
    int64_t result; // 0x2b0974
    return result;
}

// Address range: 0x2b09a5 - 0x2b09a8
int64_t function_2b09a5(void) {
    // 0x2b09a5
    int64_t result; // 0x2b09a5
    return result;
}

// Address range: 0x2b09aa - 0x2b09b2
int64_t function_2b09aa(int64_t a1) {
    // 0x2b09aa
    return function_ffffffffd73c09c5();
}

// Address range: 0x2b09e8 - 0x2b09e9
int64_t function_2b09e8(void) {
    // 0x2b09e8
    int64_t result; // 0x2b09e8
    return result;
}

// Address range: 0x2b09fc - 0x2b09fd
int64_t function_2b09fc(void) {
    // 0x2b09fc
    int64_t result; // 0x2b09fc
    return result;
}

// Address range: 0x2b09fe - 0x2b0a00
int64_t function_2b09fe(void) {
    // 0x2b09fe
    return function_2b09e8();
}

// Address range: 0x2b0a34 - 0x2b0a35
int64_t function_2b0a34(int64_t a1) {
    // 0x2b0a34
    int64_t result; // 0x2b0a34
    return result;
}

// Address range: 0x2b0a4b - 0x2b0a4d
int64_t function_2b0a4b(void) {
    // 0x2b0a4b
    return function_2b09fc();
}

// Address range: 0x2b0a6f - 0x2b0a70
int64_t function_2b0a6f(void) {
    // 0x2b0a6f
    int64_t result; // 0x2b0a6f
    return result;
}

// Address range: 0x2b0ab2 - 0x2b0ae9
int64_t function_2b0ab2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a4 & 0xffffffff ^ 0xe8fd3817; // 0x2b0ab3
    char * v3 = (char *)v2; // 0x2b0abe
    *v3 = *v3 - (char)v2;
    bool v4; // 0x2b0ab2
    char v5 = *(char *)((v4 ? -1 : 1) + a2); // 0x2b0ac8
    char v6 = *(char *)(a3 + a1 & 0xffffffff); // 0x2b0ac8
    if (((v5 - v6 ^ v5) & (v6 ^ v5)) >= 0) {
        function_2b0a6f();
    }
    // 0x2b0acb
    int64_t v7; // 0x2b0ab2
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v7;
    char * v8 = (char *)(v7 - 54 + 2 * v1); // 0x2b0ada
    *v8 = *v8 / 2;
    return v7 & 0xffffffff;
}

// Address range: 0x2b0b49 - 0x2b0b4a
int64_t function_2b0b49(int64_t a1) {
    // 0x2b0b49
    int64_t result; // 0x2b0b49
    return result;
}

// Address range: 0x2b0b57 - 0x2b0b5d
int64_t function_2b0b57(void) {
    // 0x2b0b57
    return function_712cf392();
}

// Address range: 0x2fd61e - 0x2fd641
int64_t function_2fd61e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2fd61e
    int64_t v1; // 0x2fd61e
    int64_t result = v1;
    bool v2; // 0x2fd61e
    if (!v2) {
        // 0x2fd65a
        return result;
    }
    int32_t * v3 = (int32_t *)((v1 & -0xff01 | 256 * a4 & 0xff00) + 0x13d0062); // 0x2fd623
    uint32_t v4 = *v3; // 0x2fd623
    *v3 = v4 / 2;
    *(int64_t *)(a2 + 0x1800bb0) = a2;
    *(char *)0x7f315842 = *(char *)0x7f315842 + (char)a4;
    return ((result - (v4 % 2 == 0 ? 33 : 34)) % 256 | result & -256) ^ 9;
}

// Address range: 0x2fd672 - 0x2fd69a
int64_t function_2fd672(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2fd672
    int64_t v1; // 0x2fd672
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a1 + 0x71807950); // 0x2fd672
    int32_t v4 = a2; // 0x2fd672
    *v3 = *v3 & v4;
    uint64_t v5 = v2 / 256; // 0x2fd678
    int64_t v6 = (v5 + v2) % 256 | v2 & -256; // 0x2fd678
    int32_t * v7 = (int32_t *)(v1 + 0x1401f800); // 0x2fd67a
    *v7 = *v7 + v4 + (int32_t)(-1 - (char)v2 < (char)v5);
    uint32_t v8 = *(int32_t *)(v6 + 0x79d1044c); // 0x2fd687
    uint64_t v9 = (v6 & 0xffffffff | 0x100000000 * a3) % (int64_t)v8; // 0x2fd687
    __asm_in((int16_t)v9);
    int32_t * v10 = (int32_t *)(v9 - 123); // 0x2fd68e
    *v10 = *v10 + (int32_t)v1;
    char * v11 = (char *)(a2 - 0x62d33d29); // 0x2fd691
    *v11 = 2 * *v11;
    bool v12; // 0x2fd672
    int64_t v13 = v12 ? 0x13d0040 : 0x13d0048; // 0x2fd697
    int64_t result = function_2fd6a2(v13, a2, v9, v1, v1, (int64_t)&g2, (int64_t)&g2); // 0x2fd698
    return result;
}

// Address range: 0x2fd69a - 0x2fd6a2
int64_t function_2fd69a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2fd69a
    int64_t v1; // 0x2fd69a
    return v1 & -256 | (int64_t)__asm_in_134((int16_t)a3);
}

// Address range: 0x2fd6a2 - 0x2fd7c9
int64_t function_2fd6a2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a5;
    int64_t v2 = a6;
    int64_t v3; // 0x2fd6a2
    __asm_out((int16_t)a3, (char)v3);
    uint64_t v4 = a3 / 256; // 0x2fd6a6
    bool v5; // 0x2fd6a2
    uint64_t v6 = v4 + 104 + v3 + (int64_t)v5; // 0x2fd6a6
    unsigned char v7 = *(char *)(2 * a2 - 102 + (v6 % 256 | v3 & -256)) | (char)v4; // 0x2fd6a8
    int64_t v8 = 256 * (int64_t)v7 | a3 & -0xff01; // 0x2fd6a8
    __asm_out_133(63, (char)v6);
    unsigned char v9 = (char)v3;
    *(char *)a2 = v9 / 128 | 2 * v9;
    uint64_t v10 = unknown_4cebdb6(); // 0x2fd6b0
    unsigned char v11 = *(char *)0x7a55d5bd; // 0x2fd6b6
    unsigned char v12 = v11 + (char)(v3 / 256); // 0x2fd6b6
    *(char *)0x7a55d5bd = v12;
    char * v13 = (char *)v10; // 0x2fd6bc
    *v13 = *v13 + (char)a4 + (char)(v12 < v11);
    int64_t v14; // 0x2fd6a2
    __asm_outsb((int16_t)v8, *(char *)&v14);
    __asm_int(-48);
    char v15 = *(char *)0x449aa2; // 0x2fd6db
    int64_t v16 = v10 & 0xffffff00 | (int64_t)v15; // 0x2fd6db
    int64_t v17 = v5 ? 0x449aa1 : 0x449aa3; // 0x2fd6db
    uint64_t v18 = v10 / 256; // 0x2fd6dc
    int64_t v19 = v18 % 256 | v8 & -256; // 0x2fd6dc
    int64_t v20 = v15; // 0x2fd6df
    __asm_fbld(*(float80_t *)(v17 + 3));
    int64_t v21 = (int64_t)((int32_t)v17 - *(int32_t *)(a1 + 0x3ddf44af)); // 0x2fd6e3
    v14 = v21;
    int32_t v22 = a1; // 0x2fd6e9
    int32_t v23 = a4; // 0x2fd6e9
    int32_t v24 = v23 + v22; // 0x2fd6e9
    if (v24 < 0 == ((v24 ^ v22) & (v24 ^ v23)) < 0 != v24 != 0) {
        int32_t * v25 = (int32_t *)(v16 - 102); // 0x2fd6ef
        *v25 = *v25 + v23;
        char * v26 = (char *)(v16 + 0x44181ebf); // 0x2fd6f7
        *v26 = *v26 | (char)(v24 / 256);
        int64_t v27 = unknown_16cd703(v16, (int32_t)v14); // 0x2fd6fd
        int32_t * v28 = (int32_t *)((v20 & -0xff01) + 0x7c971ef3); // 0x2fd702
        *v28 = -*v28;
        __asm_outsd((int16_t)v19, *(int32_t *)v14);
        return v27 & 0x6ae500fb;
    }
    int32_t v29 = v24 ^ -0x2fd4af50; // 0x2fd727
    int64_t v30 = v29; // 0x2fd727
    if (v29 != 0) {
        int64_t v31 = v30 & 0xffff00ff | 0x8000 * (int64_t)(v29 < 0) | 1024 * (int64_t)(llvm_ctpop_i8((char)v29) % 2 == 0) | 512; // 0x2fd795
        *(int64_t *)v16 = v31;
        return v31 + 0xfe174798 & 0xffffcfff;
    }
    // 0x2fd72e
    *(char *)0xae5f35 = *(char *)0xae5f35 + (v15 >> 7);
    int64_t v32 = (int64_t)&v2; // 0x2fd735
    int64_t v33 = v5 ? -1 : 1; // 0x2fd739
    int64_t v34 = v16 + v33; // 0x2fd739
    int64_t v35 = v33 + v21; // 0x2fd739
    *(char *)v34 = *(char *)v35;
    v14 = v35 + v33;
    int64_t v36 = 256 * v20 + v30 & 0xff00 | v30 & 0xffff00ff; // 0x2fd73e
    int64_t v37; // bp+1178280294, 0x2fd6a2
    uint32_t v38 = (int32_t)(int64_t)&v37; // 0x2fd746
    *(int64_t *)(v36 - 8) = v32;
    if (v38 >= -0x665af0ff) {
        *(int32_t *)v1 = 2 * *(int32_t *)&v1 | (int32_t)(v38 < 0x99a50f01);
    }
    int64_t v39 = v34 + v33; // 0x2fd73a
    int64_t result = unknown_ffffffffefb92c59(v39, v14); // 0x2fd753
    char * v40 = (char *)(result + 5); // 0x2fd758
    char v41 = result; // 0x2fd758
    *v40 = *v40 + v41;
    *(char *)v39 = v7;
    *(int64_t *)(v36 - 16) = 0x800d086;
    if ((a4 & -256 || (int64_t)(v38 >= -0x665af0ff)) == 1) {
        int32_t * v42 = (int32_t *)(result - 0x3b75e619); // 0x2fd764
        *v42 = *v42 + (int32_t)result;
        __asm_out_133(7, v41);
        *(int32_t *)(2 * v32 - 1) = (int32_t)v39;
        return result;
    }
    char v43 = *(char *)0x3888398e; // 0x2fd7af
    int64_t v44 = v39 + v33; // 0x2fd7b9
    char v45; // 0x2fd6a2
    __asm_sti(v44, v14 + v33, 256 * (int64_t)(v7 & v45 & v43) | v19 & -0xff01, 0x800d086);
    int64_t result2 = __asm_wait(v44); // 0x2fd7c0
    *(char *)0x800d086 = *(char *)0x800d086 + (char)v18;
    return result2;
}

// Address range: 0x2fd7d5 - 0x2fd7e1
int64_t function_2fd7d5(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 - 0xf76c900 + a3); // 0x2fd7d5
    *v1 = *v1 + (int32_t)a1;
    return function_217d8c9();
}

// Address range: 0x2fd7e2 - 0x2fd7f8
int64_t function_2fd7e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2fd7e2
    __asm_int3();
    return a4 & 0xffffffff;
}

// Address range: 0x2fd845 - 0x2fd848
int64_t function_2fd845(int64_t a1) {
    // 0x2fd845
    int64_t result; // 0x2fd845
    return result;
}

// Address range: 0x2fd871 - 0x2fd873
int64_t function_2fd871(void) {
    // 0x2fd871
    int64_t v1; // 0x2fd871
    return function_2fd8bf(v1, v1, v1, v1, (int64_t)&g2, (int64_t)&g2);
}

// Address range: 0x2fd87d - 0x2fd8b4
int64_t function_2fd87d(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x2fd87d
    int64_t v1; // 0x2fd87d
    uint64_t v2 = v1;
    int64_t v3 = a6;
    *(int32_t *)a3 = (int32_t)a3 - ((int32_t)(int64_t)&v3 | (int32_t)((int32_t)v2 < 0x59352901));
    char v4 = v2 / 256; // 0x2fd88a
    char v5 = *(char *)0x7a3236b8; // 0x2fd88a
    int64_t result = (v2 + 143) % 256 | v2 & -0x10000 | 256 * (int64_t)(v4 - v5); // 0x2fd88a
    if (v5 < v4) {
        // 0x2fd8ad
        *(int32_t *)0x144683b1 = *(int32_t *)0x144683b1 + (int32_t)result;
        return result;
    }
    int32_t v6 = *(int32_t *)(v1 + 1); // 0x2fd887
    int32_t * v7 = (int32_t *)((int64_t)((int32_t)a2 - v6) - 0x1d42720); // 0x2fd899
    *v7 = -*v7;
    char v8 = a3 / 256; // 0x2fd8a3
    char v9 = a4 / 256; // 0x2fd8a3
    char v10 = v9 + v8; // 0x2fd8a3
    int64_t result2 = result; // 0x2fd8a7
    if (v10 < 0 == ((v10 ^ v8) & (v10 ^ v9)) < 0) {
        result2 = function_2fd871();
    }
    // 0x2fd8a9
    return result2;
}

// Address range: 0x2fd8bf - 0x2fda43
int64_t function_2fd8bf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a2 + 0x3a917bce); // 0x2fd8bf
    *v1 = *v1 + (int32_t)a4;
    if (-1 - (char)(a3 / 256) < (char)a4) {
        // 0x2fd8c9
        int64_t result; // 0x2fd8bf
        int32_t * v2 = (int32_t *)(result + 41); // 0x2fd8c9
        *v2 = *v2 + (int32_t)a2;
        return result;
    }
    int64_t result2 = unknown_69281c0e(); // 0x2fd908
    char * v3 = (char *)result2; // 0x2fd90d
    *v3 = *v3 + (char)result2;
    return result2;
}

// Address range: 0x2fda49 - 0x2fdabe
int64_t function_2fda49(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2fda49
    int64_t v1; // 0x2fda49
    int64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)v1;
    bool v3; // 0x2fda49
    int64_t v4 = v3 ? -4 : 4; // 0x2fda4e
    int64_t v5 = v4 + a1; // 0x2fda4e
    int64_t v6; // 0x2fda49
    int64_t v7 = v6;
    *(char *)v7 = *(char *)&v6 + (char)v7;
    char * v8 = (char *)(v5 + 5); // 0x2fda51
    *v8 = *v8 + (char)a3;
    char * v9 = (char *)(v6 + 0x153a0133); // 0x2fda54
    unsigned char v10 = *v9; // 0x2fda54
    unsigned char v11 = v10 + (char)v6; // 0x2fda54
    *v9 = v11;
    int64_t v12 = a3 & -256 | 25; // 0x2fda5a
    int64_t v13 = v6;
    char v14 = (char)v13 - (v11 < v10 ? 111 : 110); // 0x2fda5c
    *(char *)v5 = __asm_insb((int16_t)v12);
    v6 = v2 & 0xffffffff;
    if (v14 >= 0) {
        int32_t * v15 = (int32_t *)(a2 - 64 + v4); // 0x2fdab2
        *v15 = *v15 + (int32_t)(v13 & 0xffffff00 | (int64_t)v14);
        return ((v2 | a4 / 256) + 159) % 256 | v2 & 0xffffff00;
    }
    char * v16 = (char *)v12; // 0x2fda67
    int64_t v17; // 0x2fda49
    *v16 = *v16 | (char)(int64_t)&v17;
    return function_553b6f();
}

// Address range: 0x2fdadd - 0x2fdae0
int64_t function_2fdadd(void) {
    // 0x2fdadd
    int64_t result; // 0x2fdadd
    return result;
}

// Address range: 0x2fdb06 - 0x2fdb0d
int64_t function_2fdb06(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a5 + 118); // 0x2fdb08
    int64_t v2; // 0x2fdb06
    *v1 = *v1 + (char)v2;
    return v2 * v2 & 0xffffffff;
}

// Address range: 0x2fdb13 - 0x2fdb16
int64_t function_2fdb13(int64_t a1) {
    // 0x2fdb13
    int64_t result; // 0x2fdb13
    return result;
}

// Address range: 0x2fdb7f - 0x2fdb82
int64_t function_2fdb7f(void) {
    // 0x2fdb7f
    int64_t result; // 0x2fdb7f
    return result;
}

// Address range: 0x2fdb88 - 0x2fdb89
int64_t function_2fdb88(int64_t a1) {
    // 0x2fdb88
    int64_t result; // 0x2fdb88
    return result;
}

// Address range: 0x2fdbd6 - 0x2fdbed
int64_t function_2fdbd6(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x2fdbd6
    int64_t v1; // 0x2fdbd6
    int64_t v2 = v1 & 0xffffffff & v1; // 0x2fdbd6
    float80_t v3; // 0x2fdbd6
    *(float32_t *)(v2 - 24) = (float32_t)v3;
    int32_t * v4 = (int32_t *)(v2 - 0x7f7ed24d); // 0x2fdbdb
    *v4 = *v4 + (int32_t)v1;
    *(char *)(a4 + 58) = (char)(a3 / 256);
    return v1 & 0xffffffff;
}

// Address range: 0x2fdc0d - 0x2fdc1c
int64_t function_2fdc0d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2fdc0d
    int64_t v1; // 0x2fdc0d
    int64_t v2 = v1;
    char * v3 = (char *)(a2 - 0x5afff8ee); // 0x2fdc0d
    *v3 = *v3 + (char)a4;
    int32_t * v4 = (int32_t *)(a4 + 0x3aabab00); // 0x2fdc15
    *v4 = *v4 + (int32_t)a1;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x2fdc36 - 0x2fdc38
int64_t function_2fdc36(void) {
    // 0x2fdc36
    int64_t result; // 0x2fdc36
    return result;
}

// Address range: 0x2fdc77 - 0x2fdc78
int64_t function_2fdc77(void) {
    // 0x2fdc77
    int64_t result; // 0x2fdc77
    return result;
}

// Address range: 0x2fdc80 - 0x2fdc83
int64_t function_2fdc80(void) {
    // 0x2fdc80
    int64_t result; // 0x2fdc80
    return result;
}

// Address range: 0x2fdc99 - 0x2fdcb5
int64_t function_2fdc99(void) {
    int32_t * v1 = (int32_t *)(unknown_ffffffffc82ad5a1() - 88); // 0x2fdca5
    int64_t v2; // 0x2fdc99
    int32_t v3 = *v1 - (int32_t)v2; // 0x2fdca5
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x2fdca5
    *v1 = v3;
    if (v4 % 2 == 0) {
        function_2fdc77();
    }
    // 0x2fdcac
    unknown_3adbb0b2();
    return __asm_wait(v2);
}

// Address range: 0x2fdcdb - 0x2fdcde
int64_t function_2fdcdb(int64_t a1) {
    // 0x2fdcdb
    int64_t result; // 0x2fdcdb
    return result;
}

// Address range: 0x2fdcf2 - 0x2fdcf3
int64_t function_2fdcf2(void) {
    // 0x2fdcf2
    int64_t result; // 0x2fdcf2
    return result;
}

// Address range: 0x2fdcf9 - 0x2fdcfd
int64_t function_2fdcf9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2fdcf9
    return function_2fdcf2();
}

// Address range: 0x2fdd17 - 0x2fdd1e
int64_t function_2fdd17(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2fdd17
    return a3 & 0xffffffff;
}

// Address range: 0x2fdd31 - 0x2fdd60
int64_t function_2fdd31(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(8 * a2 + 0x37d744e7); // 0x2fdd31
    int64_t v2; // 0x2fdd31
    *v1 = *v1 + (int32_t)v2;
    uint64_t v3 = v2 + 40; // 0x2fdd38
    int64_t v4 = v3 % 256 | v2 & -256; // 0x2fdd38
    int32_t * v5 = (int32_t *)(v4 - 75); // 0x2fdd3c
    *v5 = *v5 + (int32_t)v4;
    int64_t v6 = unknown_3d98ec45(); // 0x2fdd3f
    uint64_t v7 = v2 + a3; // 0x2fdd44
    __asm_int(-27);
    int32_t * v8 = (int32_t *)((256 * v3 & 0xff00 ^ a4 & 0xffffffff) + 0x793538e3); // 0x2fdd4d
    *v8 = *v8 + (int32_t)v6;
    char * v9 = (char *)(4 * v2 + a1); // 0x2fdd53
    *v9 = *v9 + (char)(v7 / 256);
    unknown_ffffffff891ff85f();
    return function_2fdd7e(a1, a2, v7 & 0xffffffff, v6 & 0xffffffff);
}

// Address range: 0x2fdd7c - 0x2fdd7e
int64_t function_2fdd7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2fdd7c
    int64_t result; // 0x2fdd7c
    return result;
}

// Address range: 0x2fdd7e - 0x2fddde
int64_t function_2fdd7e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a3;
    *(int32_t *)a3 = 2 * (int32_t)a3;
    *(char *)a3 = *(char *)&v1 | 21;
    int32_t * v2 = (int32_t *)(a1 + 0x607e75a6); // 0x2fdd92
    int64_t v3; // 0x2fdd7e
    *v2 = *v2 + (((int32_t)v3 & -86 ^ -86) < 0x1e8ba42 ? 0x2901e832 : 0x2901e831);
    *(char *)(a1 + 0x528bb6ef + 8 * a1) = -61;
    unknown_ffffffff88bc34aa();
    int64_t v4 = unknown_fffffffff59aa7b5(); // 0x2fddaf
    uint64_t v5 = v4 + 22; // 0x2fddb5
    int64_t v6 = v5 % 256 | v4 & -256; // 0x2fddb5
    unsigned char v7 = (char)v5; // 0x2fddb7
    *(char *)-0x16f72d3b = *(char *)-0x16f72d3b | v7;
    int32_t * v8 = (int32_t *)(a1 + 14); // 0x2fddbd
    *v8 = *v8 + (int32_t)a1;
    char * v9 = (char *)v6; // 0x2fddc0
    unsigned char v10 = *v9; // 0x2fddc0
    *v9 = v10 - v7;
    unsigned char v11 = (char)a4 % 32; // 0x2fddc3
    bool v12 = v10 < v7; // 0x2fddc3
    if (v11 != 0) {
        uint64_t v13 = a3 / 256; // 0x2fddc3
        unsigned char v14 = (char)v13; // 0x2fddc3
        v1 = v1 & -0xff01 | 256 * (int64_t)(v14 >> v11 | (char)((int16_t)v13 % 256 << (int16_t)(9 - v11)) | (char)(v10 < v7) << 8 - v11);
        v12 = (1 << v11 - 1 & v14) != 0;
    }
    int32_t * v15 = (int32_t *)((v6 & 0xffffffff) - 24); // 0x2fddc5
    *v15 = *v15 + (int32_t)v6 + (int32_t)v12;
    int64_t result = (int64_t)((*(int32_t *)(a1 + 127) | (int32_t)a2) ^ 48); // 0x2fddca
    int32_t v16 = *(int32_t *)result & (int32_t)(256 * result & 0xff00 | a4); // 0x2fddd9
    unsigned char v17 = llvm_ctpop_i8((char)v16); // 0x2fddd9
    int64_t v18; // bp-8, 0x2fdd7e
    bool v19; // 0x2fdd7e
    *(int64_t *)((v1 + (int64_t)&v18 & 0xffffffff) - 8) = 0x4000 * (int64_t)v19 | 512 * (int64_t)v19 | 256 * (int64_t)v19 | 64 * (int64_t)(v16 == 0) | 128 * (int64_t)(v16 < 0) | 4 * (int64_t)(v17 % 2 == 0) | 1026;
    return result;
}

// Address range: 0x2fde0e - 0x2fde1a
int64_t function_2fde0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2fde0e
    int64_t v1; // 0x2fde0e
    bool v2; // 0x2fde0e
    return (v1 & 0xffff00ff | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512) + v1 & 0xffffffff;
}

// Address range: 0x2fde21 - 0x2fde3b
int64_t function_2fde21(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2fde21
    int64_t v1; // 0x2fde21
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2;
    __asm_in_135(8);
    int64_t result = (int64_t)*(int32_t *)0x2901e884; // 0x2fde2d
    char * v3 = (char *)(a4 - 24); // 0x2fde32
    *v3 = *v3 + (char)a4 + (char)(*(char *)(result + 21) < 86);
    int32_t * v4 = (int32_t *)(a1 + 0x7899ef98); // 0x2fde35
    *v4 = *v4 + (int32_t)a3;
    return result;
}

// Address range: 0x2fde5b - 0x2fde5e
int64_t function_2fde5b(int64_t a1) {
    // 0x2fde5b
    int64_t result; // 0x2fde5b
    return result;
}

// Address range: 0x2fde5e - 0x2fde74
int64_t function_2fde5e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2fde5e
    int64_t v1; // 0x2fde5e
    *(int32_t *)a4 = 2 * (int32_t)v1;
    *(char *)0x47e7285ac2a566dc = (char)__asm_int1();
    return unknown_ffffffff84257774();
}

// Address range: 0x2fe00d - 0x2fe015
int64_t function_2fe00d(int64_t a1) {
    // 0x2fe00d
    return unknown_ffffffff935a7813(a1);
}
