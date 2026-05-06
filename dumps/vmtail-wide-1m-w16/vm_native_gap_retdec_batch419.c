/*
 * Targeted RetDec C for native executable gap queue batch 419.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xf439c-0xf459c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf459c-0xf479c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf479c-0xf499c rank=- name=- kind=- bytes=- uncovered=-
 *   0x25fcc2-0x25fec2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25fec2-0x2600c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2600c2-0x2602c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2602c2-0x2604c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2604c2-0x2606c2 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
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

int64_t function_1172164();
int64_t function_20e020d();
int64_t function_25fcb3();
int64_t function_25fcba();
int64_t function_25fcc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_25fd02(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25fd20(int64_t a1);
int64_t function_25fd71(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_25fde6(void);
int64_t function_25fdf8(void);
int64_t function_25fe10(void);
int64_t function_25fe13(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25fe35(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25fe3b(void);
int64_t function_25fe6c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_25fe97(int64_t a1, int64_t a2, int64_t a3);
int64_t function_25ff09(void);
int64_t function_25ff12(void);
int64_t function_25ff83(int64_t a1);
int64_t function_25ffc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25fff8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2600ad(int64_t a1);
int64_t function_2600bd(int64_t a1, int64_t a2);
int64_t function_2600c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2600d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2600d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2600e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2600f6(void);
int64_t function_26010e(int64_t a1);
int64_t function_260152(int64_t a1, int64_t a2, int64_t a3);
int64_t function_260179(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2601e6(void);
int64_t function_260264(int64_t a1, int64_t a2);
int64_t function_260291(void);
int64_t function_2602b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2602c1(int64_t a1, int64_t a2);
int64_t function_2602d5(void);
int64_t function_2602dd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2602ef(void);
int64_t function_260329(void);
int64_t function_2603e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26041e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_260440(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26049e(int64_t a1);
int64_t function_2604a3(int64_t a1);
int64_t function_260509(int64_t a1);
int64_t function_2605c8(void);
int64_t function_26061a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_260663(int64_t a1);
int64_t function_260684(void);
int64_t function_2606ac(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f439c(void);
int64_t function_f43ab(int64_t a1);
int64_t function_f43c7(void);
int64_t function_f43fa(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f4458(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f44e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_f4514(void);
int64_t function_f451a(void);
int64_t function_f453a(void);
int64_t function_f454b(void);
int64_t function_f457f(void);
int64_t function_f458a(void);
int64_t function_f45a9(int64_t a1);
int64_t function_f45d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f461e(int64_t a1);
int64_t function_f4646(int64_t a1);
int64_t function_f467a(int64_t a1);
int64_t function_f4695(int64_t a1, int64_t a2);
int64_t function_f46b1(int64_t a1);
int64_t function_f46ce(int64_t a1);
int64_t function_f46e8(void);
int64_t function_f4732(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f47b7(void);
int64_t function_f47f0(void);
int64_t function_f4869(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f488e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f48c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f493a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_ffffffff85f5c4c6();
int64_t function_ffffffff888746de();
int64_t function_ffffffff8971c1e6();
int64_t function_ffffffff9ed5ab03();
int64_t function_ffffffffb46461ee();
int64_t function_ffffffffdf4c05fd();
int64_t unknown_1186f1f();
int64_t unknown_26415a60();
int64_t unknown_308a2351();
int64_t unknown_3a2a9f2d();
int64_t unknown_3a594b6e();
int64_t unknown_3c9e08b();
int64_t unknown_3dffdb0c();
int64_t unknown_43764682();
int64_t unknown_4ccc01e();
int64_t unknown_576cd230();
int64_t unknown_58261646();
int64_t unknown_78058e85();
int64_t unknown_ffffffff87fdaebb();
int64_t unknown_ffffffff8f113096();
int64_t unknown_ffffffffc2161863();
int64_t unknown_ffffffffcbef08ca();
int64_t unknown_ffffffffcf6e5f09();
int64_t unknown_ffffffffe844669b();

// Address range: 0xf439c - 0xf43a5
int64_t function_f439c(void) {
    // 0xf439c
    int64_t result; // 0xf439c
    return result;
}

// Address range: 0xf43ab - 0xf43b3
int64_t function_f43ab(int64_t a1) {
    // 0xf43ab
    int64_t v1; // 0xf43ab
    return function_f43fa(a1, v1, v1);
}

// Address range: 0xf43c7 - 0xf43c9
int64_t function_f43c7(void) {
    // 0xf43c7
    int64_t result; // 0xf43c7
    return result;
}

// Address range: 0xf43fa - 0xf4417
int64_t function_f43fa(int64_t a1, int64_t a2, int64_t a3) {
    // 0xf43fa
    int64_t v1; // 0xf43fa
    int64_t v2 = v1;
    bool v3; // 0xf43fa
    *(char *)v2 = (char)v1 + (char)v2 + (char)v3;
    int64_t v4 = (int64_t)*(int32_t *)(a2 + 0x35f3883a); // 0xf43fc
    int64_t v5; // 0xf43fa
    *(char *)v4 = *(char *)&v5;
    int64_t v6 = v3 ? -1 : 1; // 0xf4402
    int64_t v7 = v6 + v4; // 0xf4402
    int64_t v8 = unknown_ffffffffcf6e5f09(v7, v6 + a2); // 0xf4403
    int32_t * v9 = (int32_t *)(a3 - 24 + 8 * v7); // 0xf440d
    *v9 = *v9 | 1;
    return v8 & 0x5c040d0;
}

// Address range: 0xf4458 - 0xf4485
int64_t function_f4458(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf4458
    unknown_ffffffffc2161863();
    int64_t v1 = __asm_int3(); // 0xf4465
    unknown_3a594b6e();
    __asm_in(58);
    char * v2 = (char *)(v1 & 0xffffffff); // 0xf447a
    while (true) {
        // 0xf447a
        *v2 = *v2 ^ (char)a3;
        unknown_43764682();
    }
}

// Address range: 0xf44e7 - 0xf450e
int64_t function_f44e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int32_t * v1 = (int32_t *)(a3 - 24); // 0xf44e7
    *v1 = *v1 | (int32_t)a4;
    int64_t v2; // 0xf44e7
    *(int32_t *)a4 = *(int32_t *)&v2 + (int32_t)a3;
    float80_t v3; // 0xf44e7
    *(int32_t *)a1 = (int32_t)v3;
    int64_t v4; // 0xf44e7
    int32_t * v5 = (int32_t *)(2 * v4); // 0xf44f1
    *v5 = -*v5;
    int32_t * v6 = (int32_t *)(a6 - 0x60a7feb9 + 4 * v4); // 0xf44fe
    *v6 = *v6 + (int32_t)v4;
    int32_t * v7 = (int32_t *)(v4 - 45); // 0xf450a
    *v7 = *v7 + (int32_t)a1;
    return v4 & -256 | 232;
}

// Address range: 0xf4514 - 0xf4515
int64_t function_f4514(void) {
    // 0xf4514
    int64_t result; // 0xf4514
    return result;
}

// Address range: 0xf451a - 0xf451b
int64_t function_f451a(void) {
    // 0xf451a
    int64_t result; // 0xf451a
    return result;
}

// Address range: 0xf453a - 0xf4541
int64_t function_f453a(void) {
    // 0xf453a
    return function_ffffffff888746de();
}

// Address range: 0xf454b - 0xf454f
int64_t function_f454b(void) {
    // 0xf454b
    return function_f451a();
}

// Address range: 0xf457f - 0xf4589
int64_t function_f457f(void) {
    // 0xf457f
    unknown_78058e85();
    return function_ffffffff9ed5ab03();
}

// Address range: 0xf458a - 0xf458c
int64_t function_f458a(void) {
    // 0xf458a
    return function_f4514();
}

// Address range: 0xf45a9 - 0xf45ac
int64_t function_f45a9(int64_t a1) {
    // 0xf45a9
    int64_t result; // 0xf45a9
    return result;
}

// Address range: 0xf45d0 - 0xf45e7
int64_t function_f45d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf45d0
    int64_t v1; // 0xf45d0
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 - 102); // 0xf45d2
    *v3 = *v3 ^ (int32_t)v1;
    *(char *)-0x31b7d724 = *(char *)-0x31b7d724 + (char)(v2 / 256);
    uint64_t v4 = v1 & 0x6c52f59a | 0x93ad0a65; // 0xf45db
    unsigned char v5 = *(char *)(v4 % 256 + v2); // 0xf45e0
    __asm_out(-54, v5);
    return v4 & 0xffffff00 | (int64_t)v5;
}

// Address range: 0xf461e - 0xf4626
int64_t function_f461e(int64_t a1) {
    // 0xf461e
    int64_t result; // 0xf461e
    return result;
}

// Address range: 0xf4646 - 0xf464a
int64_t function_f4646(int64_t a1) {
    // 0xf4646
    int64_t result; // 0xf4646
    return result;
}

// Address range: 0xf467a - 0xf467d
int64_t function_f467a(int64_t a1) {
    // 0xf467a
    int64_t result; // 0xf467a
    return result;
}

// Address range: 0xf4695 - 0xf469c
int64_t function_f4695(int64_t a1, int64_t a2) {
    // 0xf4695
    return unknown_ffffffffe844669b(a1, a2);
}

// Address range: 0xf46b1 - 0xf46b2
int64_t function_f46b1(int64_t a1) {
    // 0xf46b1
    int64_t result; // 0xf46b1
    return result;
}

// Address range: 0xf46ce - 0xf46da
int64_t function_f46ce(int64_t a1) {
    // 0xf46ce
    int64_t v1; // 0xf46ce
    return v1 & -256 | (int64_t)*(char *)0x1e801477204800a;
}

// Address range: 0xf46e8 - 0xf46e9
int64_t function_f46e8(void) {
    // 0xf46e8
    int64_t result; // 0xf46e8
    return result;
}

// Address range: 0xf4732 - 0xf4753
int64_t function_f4732(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf4732
    int64_t v1; // 0xf4732
    bool v2; // 0xf4732
    int32_t v3 = (int32_t)v1 - (v2 ? 0x3720e7f : 0x3720e7e); // 0xf4732
    int32_t * v4 = (int32_t *)(a3 - 0x17c36fc6); // 0xf4737
    *v4 = *v4 - 1;
    int32_t * v5 = (int32_t *)(v1 + 96); // 0xf473d
    int32_t v6 = *v5; // 0xf473d
    int32_t v7 = v6 + v3; // 0xf473d
    *v5 = v7;
    if (v7 < 0 != ((v7 ^ v6) & (v7 ^ v3)) < 0) {
        function_f46e8();
    }
    // 0xf4742
    __asm_wait();
    return unknown_308a2351();
}

// Address range: 0xf47b7 - 0xf47c1
int64_t function_f47b7(void) {
    // 0xf47b7
    return function_1172164();
}

// Address range: 0xf47f0 - 0xf47f5
int64_t function_f47f0(void) {
    // 0xf47f0
    return function_ffffffffb46461ee();
}

// Address range: 0xf4869 - 0xf4877
int64_t function_f4869(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf4869
    int64_t v1; // 0xf4869
    int64_t v2 = v1 & -256 | (uint64_t)v1 % 256; // 0xf4869
    int32_t * v3 = (int32_t *)(a3 + 0x77882a4d); // 0xf486d
    *v3 = *v3 >> 1;
    bool v4; // 0xf4869
    return (int64_t)(*(int32_t *)v2 + (int32_t)v4 + (int32_t)v2);
}

// Address range: 0xf488e - 0xf48c3
int64_t function_f488e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xf488e
    bool v1; // 0xf488e
    bool v2 = v1;
    unknown_ffffffff8f113096();
    int64_t v3 = (int64_t)(-0x337509d9 * *(int32_t *)-0x1beeb760); // 0xf4895
    int64_t v4; // 0xf488e
    *(char *)v3 = (char)v4;
    int64_t v5 = v2 ? -1 : 1; // 0xf489f
    int64_t v6 = v5 + v3; // 0xf489f
    int64_t v7 = v5 + a2; // 0xf489f
    int32_t * v8 = (int32_t *)(a3 - 0x7f7cabfe); // 0xf48ad
    *v8 = *v8 + (int32_t)v6;
    *(int32_t *)v6 = *(int32_t *)v7;
    int64_t result = unknown_ffffffff87fdaebb(v6 + (v2 ? -5 : 5), v7 + (v2 ? -4 : 4)); // 0xf48b5
    *(char *)-0x44ca29d0 = (char)result;
    return result;
}

// Address range: 0xf48c3 - 0xf4939
int64_t function_f48c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf48c3
    int64_t v1; // 0xf48c3
    int64_t v2 = v1;
    *(int32_t *)a3 = 2 * (int32_t)v1;
    int32_t * v3 = (int32_t *)(a2 - 0x665067fd); // 0xf48c5
    *v3 = *v3 | -54;
    int32_t * v4 = (int32_t *)(a3 - 3); // 0xf48ce
    *v4 = *v4 + (int32_t)a4;
    int32_t * v5 = (int32_t *)(a2 + 0x3a1e3fd2); // 0xf48d7
    uint32_t v6 = *v5 + (int32_t)a3; // 0xf48d7
    *v5 = v6;
    *(char *)(v2 + 0x1e82a27) = (char)v2;
    int64_t v7; // 0xf48c3
    if (v6 >= 1) {
        // 0xf48e5
        v7 = v1 & -256 | (int64_t)*(char *)0x35ceff2101e8ee00;
    }
    // 0xf4937
    return v7 | 122;
}

// Address range: 0xf493a - 0xf4959
int64_t function_f493a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0xf493a
    int64_t v1; // 0xf493a
    int64_t v2 = v1;
    int32_t v3 = v2;
    int32_t v4 = v1; // 0xf493c
    int32_t v5 = v3 + v4; // 0xf493c
    *(int32_t *)v2 = v5;
    if (v5 < 0 == ((v5 ^ v3) & (v5 ^ v4)) < 0) {
        char * v6 = (char *)(v2 + 0x729ce00); // 0xf4940
        *v6 = *v6 + (char)v2;
        int32_t * v7 = (int32_t *)(v1 - 0x42ffd500); // 0xf4948
        *v7 = *v7 + v4;
        return (v2 + a4 / 256) % 256 | v2 & -256;
    }
    int64_t result = v3 >> 31; // 0xf494f
    char * v8 = (char *)(result - 11); // 0xf4950
    *v8 = *v8 + (char)v1;
    int64_t v9; // 0xf493a
    __asm_outsb((int16_t)(v2 & 0xff00 | (int64_t)__asm_in(-47)), *(char *)&v9);
    return result;
}

// Address range: 0x25fcc2 - 0x25fcf9
int64_t function_25fcc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x25fcc2
    bool v1; // 0x25fcc2
    if (!v1) {
        // 0x25fcc5
        int64_t v2; // 0x25fcc2
        if (*(char *)(v2 + 4 * a2) <= (char)a4) {
            function_25fcb3();
        }
        int32_t * v3 = (int32_t *)(a3 - 52); // 0x25fccb
        *v3 = *v3 + (int32_t)v2;
        *(char *)(a1 + 3) = (char)v2;
    }
    int32_t * v4 = (int32_t *)(a2 + 0x80b831a); // 0x25fcd8
    *v4 = *v4 + (int32_t)a1;
    int32_t v5 = a3; // 0x25fce3
    int64_t v6; // bp-388681316, 0x25fcc2
    int64_t v7 = (int64_t)&v6; // 0x25fce9
    if (v5 + a5 < 0) {
        v7 = function_25fcba();
    }
    // 0x25fceb
    *(int32_t *)(a1 - 0x6846fe18) = v5;
    return v7 & 0xffffffff ^ 0x3afdef48;
}

// Address range: 0x25fd02 - 0x25fd0a
int64_t function_25fd02(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x4235956); // 0x25fd02
    *v1 = *v1 + (int32_t)a4;
    return function_25fd71(a1, a2, a3, a4, (int64_t)&g4);
}

// Address range: 0x25fd20 - 0x25fd21
int64_t function_25fd20(int64_t a1) {
    // 0x25fd20
    int64_t result; // 0x25fd20
    return result;
}

// Address range: 0x25fd71 - 0x25fdda
int64_t function_25fd71(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x25fd71
    int64_t v1; // 0x25fd71
    char * v2 = (char *)(v1 + 0x1201e800); // 0x25fd71
    *v2 = *v2 + (char)(a4 / 256);
    char * v3 = (char *)(v1 + 1); // 0x25fd77
    *v3 = *v3 + (char)v1;
    char v4 = *(char *)(((a2 ^ a1) & 0xffffffff) - 42); // 0x25fd82
    int64_t result = unknown_3c9e08b(); // 0x25fd85
    int64_t v5 = (int64_t)*(int32_t *)-0x76d819d3; // 0x25fd91
    int64_t v6 = 0xe9ebf5e * v5; // 0x25fd91
    if (v6 == 0xe9ebf5e00000000 * v5 >> 32) {
        // 0x25fd9e
        *(char *)a1 = (char)result;
        return result;
    }
    int64_t v7 = result | (int64_t)&g3; // 0x25fdd5
    __asm_out_133((int16_t)(v1 + (int64_t)(v4 + 104)) % 256 | (int16_t)"_MODE_CENTAUR", (char)v7);
    return ((v6 | a1) & 0xff00) + (int64_t)&g3 & 0xff00 | v7 & -0xff01;
}

// Address range: 0x25fde6 - 0x25fde9
int64_t function_25fde6(void) {
    // 0x25fde6
    int64_t result; // 0x25fde6
    return result;
}

// Address range: 0x25fdf8 - 0x25fdfa
int64_t function_25fdf8(void) {
    // 0x25fdf8
    int64_t v1; // 0x25fdf8
    return function_25fe35(v1, v1, v1, v1);
}

// Address range: 0x25fe10 - 0x25fe11
int64_t function_25fe10(void) {
    // 0x25fe10
    int64_t result; // 0x25fe10
    return result;
}

// Address range: 0x25fe13 - 0x25fe31
int64_t function_25fe13(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25fe13
    int64_t v1; // 0x25fe13
    *(int32_t *)a3 = (int32_t)v1;
    int64_t v2 = unknown_1186f1f(); // 0x25fe19
    unsigned char v3 = (char)a4 % 32; // 0x25fe1e
    if (v3 != 0) {
        char * v4 = (char *)(v2 - 52); // 0x25fe1e
        *v4 = *v4 << v3;
    }
    __asm_iretd();
    unknown_576cd230();
    return function_25fe97(a1, a2, (int64_t)&g4);
}

// Address range: 0x25fe35 - 0x25fe38
int64_t function_25fe35(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25fe35
    int64_t v1; // 0x25fe35
    *(char *)a3 = (char)v1 + (char)((uint64_t)v1 / 256);
    return a4 & 0xffffffff;
}

// Address range: 0x25fe3b - 0x25fe40
int64_t function_25fe3b(void) {
    // 0x25fe3b
    return function_ffffffff85f5c4c6();
}

// Address range: 0x25fe6c - 0x25fe7e
int64_t function_25fe6c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x25fe6c
    bool v1; // 0x25fe6c
    bool v2 = v1;
    char * v3 = (char *)(a3 - 0x296dfe18); // 0x25fe6c
    unsigned char v4 = *v3; // 0x25fe6c
    unsigned char v5 = v4 + (char)(a3 / 256); // 0x25fe6c
    unsigned char v6 = v5 + (char)v2; // 0x25fe6c
    bool v7 = v2 ? v6 <= v4 : v5 < v4; // 0x25fe6c
    *v3 = v6;
    int64_t v8; // 0x25fe6c
    *(char *)v8 = *(char *)&v8 + (char)a4 + (char)v7;
    int64_t v9; // 0x25fe6c
    return (int64_t)*(int32_t *)&v9;
}

// Address range: 0x25fe97 - 0x25fe9e
int64_t function_25fe97(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 122); // 0x25fe97
    *v1 = *v1 | 68;
    int64_t result; // 0x25fe97
    return result;
}

// Address range: 0x25ff09 - 0x25ff0a
int64_t function_25ff09(void) {
    // 0x25ff09
    int64_t result; // 0x25ff09
    return result;
}

// Address range: 0x25ff12 - 0x25ff14
int64_t function_25ff12(void) {
    // 0x25ff12
    return function_25ff09();
}

// Address range: 0x25ff83 - 0x25ff86
int64_t function_25ff83(int64_t a1) {
    // 0x25ff83
    int64_t result; // 0x25ff83
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x25ffc7 - 0x25ffcf
int64_t function_25ffc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25ffc7
    int64_t result; // 0x25ffc7
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x25fff8 - 0x26008e
int64_t function_25fff8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x25fff8
    int64_t v1; // 0x25fff8
    int32_t * v2 = (int32_t *)(v1 - 0x2fd8b1ce); // 0x25fff8
    *v2 = *v2 + (int32_t)a2;
    int64_t result = __asm_sti(); // 0x26000e
    char v3 = a3 / 256; // 0x260010
    int64_t v4; // 0x25fff8
    char v5 = *(char *)(v4 - 0x5142fdb0); // 0x260010
    if (a4 != 1 && v5 >= v3) {
        // 0x26008e
        return result;
    }
    unsigned char v6 = v3 - v5; // 0x260010
    unknown_4ccc01e();
    int64_t v7 = __asm_wait(); // 0x26001d
    if (((v6 ^ v3) & (v5 ^ v3)) < 0) {
        uint64_t result2 = unknown_26415a60(); // 0x26005a
        char * v8 = (char *)(result2 + 0x4c099000); // 0x26005f
        *v8 = *v8 + (char)result2;
        char * v9 = (char *)(v1 + 0x7201e800); // 0x260065
        char v10 = result2 / 256; // 0x260065
        *v9 = *v9 + v10;
        *(char *)v4 = *(char *)&v4 + v10;
        return result2;
    }
    unsigned char v11 = *(char *)(a2 + 0x759501e8) & (char)a3; // 0x25fffe
    char * v12 = (char *)(a4 - 0x7cbfe19); // 0x260020
    *v12 = *v12 & v11;
    int32_t * v13 = (int32_t *)(a2 - 96); // 0x260027
    uint32_t v14 = *v13; // 0x260027
    *v13 = (int32_t)(a3 & 0xffff0000 | (int64_t)v11 | 256 * (int64_t)v6);
    char * v15 = (char *)(v7 + 8 * v1); // 0x26002a
    *v15 = *v15 + (char)v7;
    int32_t * v16 = (int32_t *)(v1 - 2); // 0x26002d
    *v16 = *v16 + (int32_t)a1;
    int32_t * v17 = (int32_t *)((v1 + 0xd70c5d0b & 0xffffffff) + 100); // 0x260038
    *v17 = *v17 + (int32_t)v1;
    *(char *)(int64_t)v14 = (char)a6;
    __asm_in_134((int16_t)v14);
    return __asm_hlt();
}

// Address range: 0x2600ad - 0x2600ae
int64_t function_2600ad(int64_t a1) {
    // 0x2600ad
    int64_t result; // 0x2600ad
    return result;
}

// Address range: 0x2600bd - 0x2600c2
int64_t function_2600bd(int64_t a1, int64_t a2) {
    // 0x2600bd
    int64_t v1; // 0x2600bd
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x2600c2 - 0x2600d1
int64_t function_2600c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2600c2
    unknown_ffffffffcbef08ca();
    int64_t v1; // 0x2600c2
    char * v2 = (char *)(a3 - 81 + v1); // 0x2600c9
    *v2 = *v2 + (char)v1;
    return function_2600d4(a1, a2, a3, a4 - 1);
}

// Address range: 0x2600d2 - 0x2600d4
int64_t function_2600d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2600d2
    int64_t result; // 0x2600d2
    return result;
}

// Address range: 0x2600d4 - 0x2600d9
int64_t function_2600d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2600d4
    int64_t v1; // 0x2600d4
    int64_t v2 = v1;
    char v3 = *(char *)(2 * a4 + a3); // 0x2600d6
    return v2 & -256 | (int64_t)(v3 | -(char)v2);
}

// Address range: 0x2600e3 - 0x2600ea
int64_t function_2600e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2600e3
    return function_ffffffff8971c1e6();
}

// Address range: 0x2600f6 - 0x260107
int64_t function_2600f6(void) {
    // 0x2600f6
    int64_t result; // 0x2600f6
    char * v1 = (char *)(result - 0x4024a959); // 0x260101
    *v1 = -1 - *v1;
    return result;
}

// Address range: 0x26010e - 0x260113
int64_t function_26010e(int64_t a1) {
    // 0x26010e
    int64_t v1; // 0x26010e
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)a1;
    return result;
}

// Address range: 0x260152 - 0x26015a
int64_t function_260152(int64_t a1, int64_t a2, int64_t a3) {
    // 0x260152
    return function_20e020d();
}

// Address range: 0x260179 - 0x260199
int64_t function_260179(int64_t a1, int64_t a2, int64_t a3) {
    // 0x260179
    int64_t v1; // 0x260179
    uint64_t v2 = v1;
    int64_t v3 = v1;
    bool v4; // 0x260179
    uint32_t v5 = (int32_t)v4 + (int32_t)v3 + *(int32_t *)(v3 + 98); // 0x260179
    int64_t v6 = v5; // 0x260179
    int32_t * v7 = (int32_t *)v6; // 0x26017c
    *v7 = v5 + *v7;
    *(char *)0x3d260184 = *(char *)0x3d260184 + (char)(v5 / 256);
    int32_t * v8 = (int32_t *)(a3 - 0x4ef5b8f5); // 0x260184
    *v8 = *v8 + (int32_t)v2;
    __asm_int(-65);
    uint32_t v9 = v5 + 179;
    char * v10 = (char *)((v6 & 0xffffff00 | (int64_t)(v9 % 256)) + 30); // 0x26018f
    *v10 = *v10 + (char)v9;
    int64_t result = __asm_int1(); // 0x260193
    *(char *)a1 = __asm_insb((int16_t)a3);
    char * v11 = (char *)(a2 + 63); // 0x260195
    *v11 = *v11 ^ (char)(v2 / 256);
    return result;
}

// Address range: 0x2601e6 - 0x2601ed
int64_t function_2601e6(void) {
    // 0x2601e6
    int64_t result; // 0x2601e6
    return result;
}

// Address range: 0x260264 - 0x26027b
int64_t function_260264(int64_t a1, int64_t a2) {
    // 0x260264
    int64_t v1; // 0x260264
    char * v2 = (char *)(v1 + 0x3d80ef37); // 0x260267
    *v2 = *v2 + (char)(v1 / 256);
    int32_t * v3 = (int32_t *)(a2 + 0x30e6007e); // 0x26026d
    *v3 = *v3 + (int32_t)a1;
    __asm_int3();
    return v1 & 0xffffffff;
}

// Address range: 0x260291 - 0x260293
int64_t function_260291(void) {
    // 0x260291
    int64_t v1; // 0x260291
    return function_2602dd(v1, v1, v1);
}

// Address range: 0x2602b0 - 0x2602c1
int64_t function_2602b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2602b0
    int64_t v1; // 0x2602b0
    uint64_t v2 = v1;
    int64_t v3 = a2;
    unsigned char v4 = (char)a4 % 32; // 0x2602b0
    if (v4 != 0) {
        char * v5 = (char *)(v2 + 0x13d00d8); // 0x2602b0
        *v5 = *v5 >> v4;
    }
    char * v6 = (char *)(v1 - 0x74a6c0c2); // 0x2602b6
    *v6 = *v6 | (char)(v2 / 256);
    return (int64_t)*(int32_t *)&v3;
}

// Address range: 0x2602c1 - 0x2602c5
int64_t function_2602c1(int64_t a1, int64_t a2) {
    // 0x2602c1
    int64_t v1; // 0x2602c1
    return v1 & -256 | (int64_t)*(char *)(a2 - 46);
}

// Address range: 0x2602d5 - 0x2602d6
int64_t function_2602d5(void) {
    // 0x2602d5
    int64_t result; // 0x2602d5
    return result;
}

// Address range: 0x2602dd - 0x2602ee
int64_t function_2602dd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2602dd
    int64_t v1; // 0x2602dd
    int64_t v2 = v1;
    uint32_t v3 = *(int32_t *)(a2 + 53); // 0x2602df
    *(int32_t *)v2 = (int32_t)(v3 > -1 - (int32_t)a1);
    return (v2 + 114) % 256 | v2 & -256;
}

// Address range: 0x2602ef - 0x2602f0
int64_t function_2602ef(void) {
    // 0x2602ef
    int64_t result; // 0x2602ef
    return result;
}

// Address range: 0x260329 - 0x260334
int64_t function_260329(void) {
    // 0x260329
    int64_t v1; // 0x260329
    if ((int32_t)v1 >= 0x15080702) {
        function_2602d5();
    }
    // 0x260332
    return function_2602ef();
}

// Address range: 0x2603e3 - 0x260415
int64_t function_2603e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2603e3
    int64_t v1; // 0x2603e3
    *(char *)0x585e020001e858f9 = (char)v1 + 42;
    int64_t v2 = v1 & -0xff01 | (int64_t)&g1; // 0x2603f6
    int32_t * v3 = (int32_t *)(__asm_hlt() + 0x7b3be191); // 0x2603fc
    *v3 = *v3 + (int32_t)v2;
    bool v4; // 0x2603e3
    int64_t v5 = v4 ? -1 : 1; // 0x260405
    int64_t v6 = v5 + a1; // 0x260405
    unknown_3dffdb0c(v6, v5 + a2);
    return function_ffffffffdf4c05fd(*(int32_t *)(v2 + 1) + (int32_t)v6);
}

// Address range: 0x26041e - 0x260432
int64_t function_26041e(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a2 + 0xb9400ab); // 0x26041e
    int64_t v2; // 0x26041e
    *v1 = *v1 | (char)((uint64_t)v2 / 256);
    __asm_hlt();
    return 0x10000 * (int32_t)unknown_3a2a9f2d() >> 16;
}

// Address range: 0x260440 - 0x26045a
int64_t function_260440(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_58261646(); // 0x260440
    int64_t v1; // 0x260440
    *(int32_t *)a3 = (int32_t)v1 + (int32_t)a1;
    return result;
}

// Address range: 0x26049e - 0x2604a1
int64_t function_26049e(int64_t a1) {
    // 0x26049e
    int64_t result; // 0x26049e
    return result;
}

// Address range: 0x2604a3 - 0x2604a4
int64_t function_2604a3(int64_t a1) {
    // 0x2604a3
    int64_t result; // 0x2604a3
    return result;
}

// Address range: 0x260509 - 0x26050a
int64_t function_260509(int64_t a1) {
    // 0x260509
    int64_t result; // 0x260509
    return result;
}

// Address range: 0x2605c8 - 0x2605c9
int64_t function_2605c8(void) {
    // 0x2605c8
    int64_t result; // 0x2605c8
    return result;
}

// Address range: 0x26061a - 0x260633
int64_t function_26061a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 48); // 0x26062e
    *v1 = *v1 / 2;
    return function_2605c8();
}

// Address range: 0x260663 - 0x260666
int64_t function_260663(int64_t a1) {
    // 0x260663
    int64_t result; // 0x260663
    return result;
}

// Address range: 0x260684 - 0x260685
int64_t function_260684(void) {
    // 0x260684
    int64_t result; // 0x260684
    return result;
}

// Address range: 0x2606ac - 0x2606b1
int64_t function_2606ac(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2606ac
    int64_t result; // 0x2606ac
    return result;
}
