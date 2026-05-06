/*
 * Targeted RetDec C for native executable gap queue batch 518.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x240a18-0x240c18 rank=- name=- kind=- bytes=- uncovered=-
 *   0x240c18-0x240e18 rank=- name=- kind=- bytes=- uncovered=-
 *   0x241018-0x241218 rank=- name=- kind=- bytes=- uncovered=-
 *   0x241218-0x241418 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e6c96-0x3e6e96 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4744ee-0x4746ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x4748ee-0x474aee rank=- name=- kind=- bytes=- uncovered=-
 *   0x474aee-0x474cee rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_240a18(int64_t a1, int64_t a2, int64_t a3);
int64_t function_240a2e(void);
int64_t function_240a4a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_240a8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_240ae1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_240b0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_240b73(int64_t a1, int64_t a2, int64_t a3);
int64_t function_240b94(int64_t a1, int64_t a2);
int64_t function_240bac(void);
int64_t function_240bf6(void);
int64_t function_240bfa(void);
int64_t function_240bfc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_240c13(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_240c34(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_240c3d(void);
int64_t function_240c42(void);
int64_t function_240c49(int64_t a1, int64_t a2, int64_t a3);
int64_t function_240c4b(void);
int64_t function_240c7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_240cda(int64_t a1);
int64_t function_240ce4(int64_t a1);
int64_t function_240cef(void);
int64_t function_240cf3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_240d00(void);
int64_t function_240d07(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_240d37(void);
int64_t function_240d7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_240d97(void);
int64_t function_240ddc(void);
int64_t function_240de7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_241018(void);
int64_t function_24102a(int64_t a1);
int64_t function_241059(void);
int64_t function_24105a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24108f(void);
int64_t function_2410bd(int64_t a1);
int64_t function_2410e0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_24113b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_241154(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2411ce(void);
int64_t function_2411d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_241242(void);
int64_t function_241259(void);
int64_t function_241271(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_241294(void);
int64_t function_2412fe(void);
int64_t function_241381(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33995b15();
int64_t function_3c5ea678();
int64_t function_3d321477();
int64_t function_3e6c96(int64_t a1, int64_t a2);
int64_t function_3e6d1e(void);
int64_t function_3e6d24(void);
int64_t function_3e6d6d(int64_t a1);
int64_t function_3e6d8f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_3e6e6d(void);
int64_t function_3e6e8e(int64_t a1);
int64_t function_4744b7();
int64_t function_4744ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_474550(int64_t a1);
int64_t function_47458c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_474628(int64_t a1);
int64_t function_474640(void);
int64_t function_47464d(void);
int64_t function_474651(int64_t a1);
int64_t function_474668(int64_t a1);
int64_t function_4746aa(void);
int64_t function_4746b8(void);
int64_t function_4746d1(int64_t a1, int64_t a2);
int64_t function_4748ee(void);
int64_t function_474953(void);
int64_t function_47496e(int64_t a1);
int64_t function_47497c(void);
int64_t function_474980(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_47498d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4749a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_474a5d(int64_t a1);
int64_t function_474ab0(void);
int64_t function_474b06(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_474b85(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_474b96(void);
int64_t function_474ba9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_474c8a(void);
int64_t function_474cce(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_474d09();
int64_t function_5b3a485();
int64_t function_6025f9e0();
int64_t function_ffffffff89d90caa();
int64_t function_ffffffffe86214a1();
int64_t function_fffffffff725f605();
int64_t unknown_1bbced5b();
int64_t unknown_23c97f34();
int64_t unknown_28d9e965();
int64_t unknown_3d25f21f();
int64_t unknown_3e4a45a();
int64_t unknown_74d860ce();
int64_t unknown_ffffffff98ca2750();
int64_t unknown_ffffffff9b2e841e();
int64_t unknown_ffffffffa51f0405();
int64_t unknown_ffffffffac327789();
int64_t unknown_ffffffffaecb23b4();
int64_t unknown_ffffffffbf267229();
int64_t unknown_ffffffffc0a4b690();
int64_t unknown_ffffffffd067b77f();
int64_t unknown_ffffffffdaecd405();
int64_t unknown_ffffffffdc85a225();
int64_t unknown_ffffffffe01f03e7();

// Address range: 0x240a18 - 0x240a21
int64_t function_240a18(int64_t a1, int64_t a2, int64_t a3) {
    // 0x240a18
    int64_t v1; // 0x240a18
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return unknown_3d25f21f();
}

// Address range: 0x240a2e - 0x240a2f
int64_t function_240a2e(void) {
    // 0x240a2e
    int64_t result; // 0x240a2e
    return result;
}

// Address range: 0x240a4a - 0x240a67
int64_t function_240a4a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    __asm_wait();
    unsigned char v2 = (char)a4 % 32; // 0x240a4d
    if (v2 != 0) {
        unsigned char v3 = (char)a2;
        *(char *)a2 = v3 << 8 - v2 | v3 >> v2;
    }
    // 0x240a5e
    int64_t v4; // 0x240a4a
    *(int32_t *)(a2 + 90) = (int32_t)(2 * v4);
    int64_t v5 = unknown_3e4a45a(); // 0x240a54
    *(char *)v1 = *(char *)&v1 | -114;
    *(int32_t *)v1 = (int32_t)v5;
    bool v6; // 0x240a4a
    int64_t v7 = v1 + (v6 ? -4 : 4); // 0x240a5e
    int64_t result = unknown_28d9e965(v7); // 0x240a5f
    *(int32_t *)v7 = (int32_t)a4;
    return result;
}

// Address range: 0x240a8a - 0x240a93
int64_t function_240a8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 0x78fe17ee); // 0x240a8a
    int64_t result; // 0x240a8a
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x240ae1 - 0x240b0b
int64_t function_240ae1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = unknown_ffffffffe01f03e7(); // 0x240ae1
    uint32_t v2 = (int32_t)v1 >> 31; // 0x240ae6
    int64_t v3 = v2; // 0x240ae6
    *(char *)-0x544ade17 = *(char *)-0x544ade17 | (char)(v2 / 256);
    int32_t * v4 = (int32_t *)(a4 + 0x4d0cedfa); // 0x240af1
    int64_t v5; // 0x240ae1
    *v4 = *v4 + (int32_t)v5;
    int32_t * v6 = (int32_t *)(v3 - 59); // 0x240af7
    *v6 = *v6 - 119;
    char * v7 = (char *)v3; // 0x240afd
    unsigned char v8 = *v7; // 0x240afd
    char v9 = -1 - (char)(v1 + a4 / 256) < (char)a4; // 0x240afd
    unsigned char v10 = v9 + (char)(v5 / 256); // 0x240afd
    char v11 = v8 - v10; // 0x240afd
    bool v12 = -1 - (char)(v1 + a4 / 256) < (char)a4 ? v10 != -1 | v8 < v11 - v9 : v8 < v10; // 0x240afd
    *v7 = v11;
    bool v13; // 0x240ae1
    int64_t result = unknown_ffffffffa51f0405((v13 ? -1 : 1) + a1); // 0x240aff
    int32_t * v14 = (int32_t *)(a2 + 0x76b69a60); // 0x240b04
    *v14 = *v14 - (int32_t)v5 + (int32_t)v12;
    return result;
}

// Address range: 0x240b0b - 0x240b48
int64_t function_240b0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x240b0b
    int64_t v1; // 0x240b0b
    int32_t * v2 = (int32_t *)(v1 - 0x17de24b4); // 0x240b0b
    int32_t v3 = v1; // 0x240b0b
    *v2 = *v2 - v3;
    int32_t * v4 = (int32_t *)(v1 + 75); // 0x240b11
    *v4 = *v4 + (int32_t)v1;
    bool v5; // 0x240b0b
    int64_t v6 = (v5 ? -4 : 4) + a1; // 0x240b15
    unknown_ffffffffdc85a225(v6);
    unknown_74d860ce();
    int64_t v7; // 0x240b0b
    *(char *)v6 = *(char *)&v7;
    int64_t v8 = v5 ? -1 : 1; // 0x240b29
    int32_t * v9 = (int32_t *)(a6 + 35); // 0x240b2a
    *v9 = *v9 + (int32_t)v1;
    int64_t result = unknown_23c97f34(v6 + v8, v8 + a2); // 0x240b2e
    int32_t * v10 = (int32_t *)((a4 - 256 * result & 0xff00 | a4 & -0xff01) - 0x42769a06); // 0x240b3c
    *v10 = *v10 + v3;
    char * v11 = (char *)(result + 1); // 0x240b42
    *v11 = *v11 + (char)v1;
    return result;
}

// Address range: 0x240b73 - 0x240b8b
int64_t function_240b73(int64_t a1, int64_t a2, int64_t a3) {
    int16_t v1 = a3; // 0x240b78
    *(int32_t *)a1 = __asm_insd(v1);
    int64_t result = unknown_ffffffffd067b77f(); // 0x240b79
    *(char *)a1 = __asm_insb(v1);
    return result;
}

// Address range: 0x240b94 - 0x240b9b
int64_t function_240b94(int64_t a1, int64_t a2) {
    // 0x240b94
    int64_t v1; // 0x240b94
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x240bac - 0x240bad
int64_t function_240bac(void) {
    // 0x240bac
    int64_t result; // 0x240bac
    return result;
}

// Address range: 0x240bf6 - 0x240bfa
int64_t function_240bf6(void) {
    // 0x240bf6
    int64_t v1; // 0x240bf6
    __asm_out(8, (int32_t)v1);
    return function_240bfc(v1, v1, v1, v1);
}

// Address range: 0x240bfa - 0x240bfc
int64_t function_240bfa(void) {
    // 0x240bfa
    int64_t result; // 0x240bfa
    return result;
}

// Address range: 0x240bfc - 0x240c12
int64_t function_240bfc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)-0x7c2d9bfb; // 0x240bfe
    int64_t v2; // 0x240bfc
    *(char *)-0x7c2d9bfb = v1 + (char)((uint64_t)v2 / 256);
    char * v3 = (char *)((v2 & 0xffffffff) + 0x66b1b2f0); // 0x240c06
    *v3 = *v3 + (char)a4;
    int64_t v4; // 0x240bfc
    *(int32_t *)a1 = *(int32_t *)&v4;
    return (a2 + 90) % 256 | a2 & 0xffffff00;
}

// Address range: 0x240c13 - 0x240c28
int64_t function_240c13(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x240c13
    int64_t v1; // 0x240c13
    *(int32_t *)0x79171a0b2200013d = (int32_t)v1;
    return __asm_in(-37);
}

// Address range: 0x240c34 - 0x240c3d
int64_t function_240c34(int64_t a1, int64_t a2, uint64_t a3) {
    char * v1 = (char *)(a3 - 0x4be28deb); // 0x240c36
    *v1 = *v1 - (char)(a3 / 256);
    int64_t result; // 0x240c34
    return result;
}

// Address range: 0x240c3d - 0x240c42
int64_t function_240c3d(void) {
    // 0x240c3d
    return function_ffffffff89d90caa();
}

// Address range: 0x240c42 - 0x240c44
int64_t function_240c42(void) {
    // 0x240c42
    return function_240c4b();
}

// Address range: 0x240c49 - 0x240c4b
int64_t function_240c49(int64_t a1, int64_t a2, int64_t a3) {
    // 0x240c49
    int64_t result; // 0x240c49
    return result;
}

// Address range: 0x240c4b - 0x240c4e
int64_t function_240c4b(void) {
    // 0x240c4b
    int64_t result; // 0x240c4b
    char * v1 = (char *)(result + 110); // 0x240c4b
    *v1 = *v1 >> 1;
    return result;
}

// Address range: 0x240c7f - 0x240cb5
int64_t function_240c7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int16_t v1 = a3; // 0x240c7f
    *(char *)a1 = __asm_insb(v1);
    // 0x240c82
    int64_t result; // 0x240c7f
    char * v2 = (char *)(result + 0x7f8615e8); // 0x240c82
    bool v3; // 0x240c7f
    *v2 = (char)v3 + (char)a4 + *v2;
    return result;
    int64_t result2 = unknown_ffffffffaecb23b4(); // 0x240cae
    int64_t v4; // 0x240c7f
    __asm_outsd(v1, *(int32_t *)&v4);
    return result2;
}

// Address range: 0x240cda - 0x240ce4
int64_t function_240cda(int64_t a1) {
    // 0x240cda
    int64_t v1; // 0x240cda
    return v1 & -256 | (int64_t)*(char *)0xc01e856b900d306;
}

// Address range: 0x240ce4 - 0x240ce7
int64_t function_240ce4(int64_t a1) {
    // 0x240ce4
    int64_t result; // 0x240ce4
    return result;
}

// Address range: 0x240cef - 0x240cf2
int64_t function_240cef(void) {
    // 0x240cef
    int64_t result; // 0x240cef
    return result;
}

// Address range: 0x240cf3 - 0x240cfd
int64_t function_240cf3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x240cf3
    int64_t v1; // 0x240cf3
    int64_t v2 = 2 * v1; // 0x240cf3
    int32_t * v3 = (int32_t *)(a4 + 0x1622b07f); // 0x240cf5
    *v3 = *v3 + (int32_t)v2;
    return v2 & 0xffffffff;
}

// Address range: 0x240d00 - 0x240d03
int64_t function_240d00(void) {
    // 0x240d00
    int64_t result; // 0x240d00
    return result;
}

// Address range: 0x240d07 - 0x240d0f
int64_t function_240d07(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x240d07
    int64_t v1; // 0x240d07
    *(char *)(v1 + 58) = (char)a4;
    return function_fffffffff725f605();
}

// Address range: 0x240d37 - 0x240d3a
int64_t function_240d37(void) {
    // 0x240d37
    int64_t result; // 0x240d37
    return result;
}

// Address range: 0x240d7c - 0x240d97
int64_t function_240d7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4; // 0x240d7c
    unsigned char v2 = v1 % 32; // 0x240d7c
    int64_t v3; // 0x240d7c
    if (v2 != 0) {
        char * v4 = (char *)(4 * a4 - 0x5eaf10f7 + v3); // 0x240d7c
        *v4 = *v4 << v2;
    }
    int64_t result = unknown_ffffffffac327789(); // 0x240d83
    char * v5 = (char *)(v3 - 0x414033b2); // 0x240d88
    *v5 = *v5 + v1;
    return result;
}

// Address range: 0x240d97 - 0x240d9a
int64_t function_240d97(void) {
    // 0x240d97
    int64_t result; // 0x240d97
    return result;
}

// Address range: 0x240ddc - 0x240de3
int64_t function_240ddc(void) {
    // 0x240ddc
    int64_t result; // 0x240ddc
    return result;
}

// Address range: 0x240de7 - 0x240de9
int64_t function_240de7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x240de7
    int64_t result; // 0x240de7
    return result;
}

// Address range: 0x241018 - 0x241028
int64_t function_241018(void) {
    // 0x241018
    return unknown_ffffffffbf267229();
}

// Address range: 0x24102a - 0x241031
int64_t function_24102a(int64_t a1) {
    // 0x24102a
    int64_t result; // 0x24102a
    return result;
}

// Address range: 0x241059 - 0x24105a
int64_t function_241059(void) {
    // 0x241059
    int64_t result; // 0x241059
    return result;
}

// Address range: 0x24105a - 0x241071
int64_t function_24105a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24105a
    int64_t v1; // 0x24105a
    *(char *)a1 = (char)v1;
    return function_241059();
}

// Address range: 0x24108f - 0x241090
int64_t function_24108f(void) {
    // 0x24108f
    int64_t result; // 0x24108f
    return result;
}

// Address range: 0x2410bd - 0x2410c2
int64_t function_2410bd(int64_t a1) {
    // 0x2410bd
    int64_t result; // 0x2410bd
    return result;
}

// Address range: 0x2410e0 - 0x2410e4
int64_t function_2410e0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2410e0
    int64_t v1; // 0x2410e0
    *(char *)a3 = (char)v1 + (char)(a4 / 256);
    return function_24108f();
}

// Address range: 0x24113b - 0x241154
int64_t function_24113b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x24113b
    __asm_iretd((int32_t)a2 + (int32_t)a1);
    char * v1 = (char *)(a3 + 0x420e05c0); // 0x241143
    int64_t v2; // 0x24113b
    *v1 = *v1 ^ (char)v2;
    unknown_ffffffff98ca2750();
    return function_3c5ea678();
}

// Address range: 0x241154 - 0x241167
int64_t function_241154(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x241154
    int64_t v1; // 0x241154
    __asm_outsb((int16_t)a3, (char)v1);
    int64_t result = unknown_1bbced5b() & 0xffffffff ^ 0xe82cbe09; // 0x24115a
    int32_t * v2 = (int32_t *)(result + 0x2e22a07f); // 0x24115f
    *v2 = *v2 + (int32_t)v1;
    return result;
}

// Address range: 0x2411ce - 0x2411d1
int64_t function_2411ce(void) {
    // 0x2411ce
    int64_t result; // 0x2411ce
    return result;
}

// Address range: 0x2411d3 - 0x2411da
int64_t function_2411d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2411d3
    int64_t v1; // 0x2411d3
    *(int32_t *)a4 = (int32_t)(v1 | a4);
    return function_6025f9e0();
}

// Address range: 0x241242 - 0x241245
int64_t function_241242(void) {
    // 0x241242
    int64_t result; // 0x241242
    return result;
}

// Address range: 0x241259 - 0x24125a
int64_t function_241259(void) {
    // 0x241259
    int64_t result; // 0x241259
    return result;
}

// Address range: 0x241271 - 0x24128f
int64_t function_241271(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x241271
    int64_t v1; // 0x241271
    *(int32_t *)a2 = (int32_t)v1 / 2;
    unknown_ffffffffc0a4b690();
    return function_3d321477();
}

// Address range: 0x241294 - 0x241299
int64_t function_241294(void) {
    // 0x241294
    return function_ffffffffe86214a1();
}

// Address range: 0x2412fe - 0x241301
int64_t function_2412fe(void) {
    // 0x2412fe
    int64_t result; // 0x2412fe
    return result;
}

// Address range: 0x241381 - 0x24140d
int64_t function_241381(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x241381
    int64_t v1; // 0x241381
    *(char *)a4 = (char)(v1 | a4);
    return unknown_ffffffffdaecd405();
}

// Address range: 0x3e6c96 - 0x3e6c97
int64_t function_3e6c96(int64_t a1, int64_t a2) {
    // 0x3e6c96
    int64_t result; // 0x3e6c96
    return result;
}

// Address range: 0x3e6d1e - 0x3e6d21
int64_t function_3e6d1e(void) {
    // 0x3e6d1e
    int64_t result; // 0x3e6d1e
    return result;
}

// Address range: 0x3e6d24 - 0x3e6d27
int64_t function_3e6d24(void) {
    // 0x3e6d24
    int64_t result; // 0x3e6d24
    return result;
}

// Address range: 0x3e6d6d - 0x3e6d6e
int64_t function_3e6d6d(int64_t a1) {
    // 0x3e6d6d
    int64_t result; // 0x3e6d6d
    return result;
}

// Address range: 0x3e6d8f - 0x3e6e52
int64_t function_3e6d8f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = __asm_wait(); // 0x3e6d9e
    int64_t v2; // 0x3e6d8f
    if ((*(char *)(v2 + 4 * a3) & (char)(v2 / 256)) == 0) {
        int32_t result = __asm_in_133((int16_t)a3); // 0x3e6e14
        *(char *)a3 = (char)(a4 / 256) + (char)a3;
        return result;
    }
    int64_t result2 = v1 & -256 | 72; // 0x3e6da0
    *(int32_t *)a1 = (int32_t)result2;
    return result2;
}

// Address range: 0x3e6e6d - 0x3e6e73
int64_t function_3e6e6d(void) {
    // 0x3e6e6d
    return unknown_ffffffff9b2e841e();
}

// Address range: 0x3e6e8e - 0x3e6e8f
int64_t function_3e6e8e(int64_t a1) {
    // 0x3e6e8e
    int64_t result; // 0x3e6e8e
    return result;
}

// Address range: 0x4744ee - 0x47450f
int64_t function_4744ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4744ee
    int64_t v1; // 0x4744ee
    bool v2; // 0x4744ee
    if (!v2) {
        v1 = function_4744b7();
    }
    int64_t v3 = v1;
    unsigned char v4 = (int32_t)v3 > 0x55f9f385 ? -12 : -13; // 0x4744f7
    int32_t v5 = a1; // 0x4744fa
    int64_t v6 = __asm_iretd(v5); // 0x4744fa
    char * v7 = (char *)(v6 - 10); // 0x4744fb
    char v8 = *v7; // 0x4744fb
    *v7 = v8 - (char)v6 + (char)((int32_t)v3 > 0x55f9f385 | (char)v3 + 122 < v4);
    char * v9 = (char *)(a2 - 85); // 0x47450b
    *v9 = *v9 | *(char *)(a2 + 9);
    return __asm_iretd(v5);
}

// Address range: 0x474550 - 0x474551
int64_t function_474550(int64_t a1) {
    // 0x474550
    int64_t result; // 0x474550
    return result;
}

// Address range: 0x47458c - 0x474591
int64_t function_47458c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47458c
    int64_t result; // 0x47458c
    return result;
}

// Address range: 0x474628 - 0x47462a
int64_t function_474628(int64_t a1) {
    // 0x474628
    int64_t result; // 0x474628
    return result;
}

// Address range: 0x474640 - 0x474642
int64_t function_474640(void) {
    // 0x474640
    return __asm_int3();
}

// Address range: 0x47464d - 0x47464e
int64_t function_47464d(void) {
    // 0x47464d
    int64_t result; // 0x47464d
    return result;
}

// Address range: 0x474651 - 0x474657
int64_t function_474651(int64_t a1) {
    // 0x474651
    int64_t result; // 0x474651
    return result;
}

// Address range: 0x474668 - 0x47466d
int64_t function_474668(int64_t a1) {
    // 0x474668
    int64_t result; // 0x474668
    bool v1; // 0x474668
    if (v1) {
        result = function_47464d();
    }
    // 0x47466a
    return result;
}

// Address range: 0x4746aa - 0x4746ab
int64_t function_4746aa(void) {
    // 0x4746aa
    int64_t result; // 0x4746aa
    return result;
}

// Address range: 0x4746b8 - 0x4746c3
int64_t function_4746b8(void) {
    // 0x4746b8
    int64_t v1; // 0x4746b8
    int32_t * v2 = (int32_t *)(v1 + 0x564844ec + v1); // 0x4746b8
    *v2 = *v2 / 2;
    return __asm_int3();
}

// Address range: 0x4746d1 - 0x4746db
int64_t function_4746d1(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 - 0x18658dad); // 0x4746d1
    int32_t v2 = *v1 + 1; // 0x4746d1
    *v1 = v2;
    int64_t result; // 0x4746d1
    bool v3; // 0x4746d1
    if (v3 || v2 == 0) {
        result = function_4746aa();
    }
    // 0x4746d9
    return result;
}

// Address range: 0x4748ee - 0x4748ef
int64_t function_4748ee(void) {
    // 0x4748ee
    int64_t result; // 0x4748ee
    return result;
}

// Address range: 0x474953 - 0x474954
int64_t function_474953(void) {
    // 0x474953
    int64_t result; // 0x474953
    return result;
}

// Address range: 0x47496e - 0x474971
int64_t function_47496e(int64_t a1) {
    // 0x47496e
    int64_t result; // 0x47496e
    return result;
}

// Address range: 0x47497c - 0x47497d
int64_t function_47497c(void) {
    // 0x47497c
    int64_t result; // 0x47497c
    return result;
}

// Address range: 0x474980 - 0x474987
int64_t function_474980(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x474980
    int64_t v1; // 0x474980
    *(int32_t *)a1 = 2 * (int32_t)v1;
    return a1 & 0xffffffff;
}

// Address range: 0x47498d - 0x47499d
int64_t function_47498d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x47498d
    *(char *)(a3 + 0x50608050) = (char)a4;
    int64_t v1; // 0x47498d
    return 0x10000 * (int32_t)v1 >> 16 | 74;
}

// Address range: 0x4749a6 - 0x474a3e
int64_t function_4749a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    char v1 = __asm_in_135((int16_t)a3); // 0x4749a9
    int64_t v2; // 0x4749a6
    bool v3; // 0x4749a6
    if ((char)v2 + 16 != (char)v3) {
        // 0x4749ad
        return function_47497c();
    }
    int64_t v4 = v1; // 0x4749a9
    return (v2 | v4) & 0xe6124b00 | (v4 & 245) + 1;
}

// Address range: 0x474a5d - 0x474a71
int64_t function_474a5d(int64_t a1) {
    // 0x474a5d
    int64_t v1; // 0x474a5d
    return (int64_t)(0x3bbb1a44 * *(int32_t *)(v1 + 102));
}

// Address range: 0x474ab0 - 0x474ab3
int64_t function_474ab0(void) {
    // 0x474ab0
    int64_t result; // 0x474ab0
    return result;
}

// Address range: 0x474b06 - 0x474b85
int64_t function_474b06(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x474b06
    int64_t v1; // 0x474b06
    int64_t v2 = v1;
    int16_t v3 = a3;
    __asm_outsb(v3, (char)a2);
    unsigned char v4 = (char)a4 % 32; // 0x474b0e
    if (v4 != 0) {
        unsigned char v5 = (char)v1;
        *(char *)v1 = v5 >> 8 - v4 | v5 << v4;
    }
    uint32_t v6 = (int32_t)a4 % 32; // 0x474b10
    int16_t v7 = v3; // 0x474b10
    if (v6 != 0) {
        uint32_t v8 = (int32_t)a3; // 0x474b10
        v7 = v8 << 32 - v6 | v8 >> v6;
    }
    int64_t v9 = (v2 + 101) % 256 | v2 & -256; // 0x474b12
    __asm_out_134(v7, (int32_t)v9);
    int64_t result = v9 + 0x2ea491a8 & 0x7ea2bd76 | 0x815d4289; // 0x474b20
    *(int32_t *)(result + 117) = (int32_t)result;
    return result;
}

// Address range: 0x474b85 - 0x474b96
int64_t function_474b85(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x474b85
    bool v1; // 0x474b85
    if (v1 || v1) {
        function_474ba9(a1, a2, a3, a4, (int64_t)&g1);
    }
    // 0x474b87
    __asm_in(-103);
    *(int32_t *)a2 = (int32_t)a2 - (int32_t)a1;
    return function_5b3a485();
}

// Address range: 0x474b96 - 0x474ba5
int64_t function_474b96(void) {
    // 0x474b96
    return (int64_t)(*(int32_t *)-0x7fdd1a913ed6c8c3 & -164);
}

// Address range: 0x474ba9 - 0x474c57
int64_t function_474ba9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = __asm_in_136(-52); // 0x474bb0
    int64_t v2; // 0x474ba9
    int64_t result = (256 * v2 | -0x10000) & v2 | (int64_t)v1; // 0x474bb0
    if ((v1 & 126) != 0) {
        // 0x474bb6
        __asm_out_137((int16_t)a3, v1);
        return result;
    }
    // 0x474bcb
    *(int32_t *)-0x27faba5dbfc6e50e = (int32_t)result & -0x581f7411 ^ 0x581f7437;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    __asm_out_138(-99, 125);
    return __asm_wait();
}

// Address range: 0x474c8a - 0x474c93
int64_t function_474c8a(void) {
    // 0x474c8a
    int64_t result; // 0x474c8a
    return result;
}

// Address range: 0x474cce - 0x474cd5
int64_t function_474cce(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x474cce
    bool v1; // 0x474cce
    if (a4 != 1 && !v1) {
        function_474d09();
    }
    // 0x474cd0
    return function_33995b15();
}
