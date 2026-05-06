/*
 * Targeted RetDec C for native executable gap queue batch 286.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x149913-0x149b13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x149b13-0x149d13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x149d13-0x149f13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x149f13-0x14a113 rank=- name=- kind=- bytes=- uncovered=-
 *   0x45a634-0x45a834 rank=- name=- kind=- bytes=- uncovered=-
 *   0x45a834-0x45aa34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x45aa34-0x45ac34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x45ae34-0x45b034 rank=- name=- kind=- bytes=- uncovered=-
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
void __asm_out_139(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint32_t __readfsdword(int64_t offset);
uint64_t __readfsqword(int64_t offset);
uint8_t __readgsbyte(int64_t offset);
uint32_t __readgsdword(int64_t offset);
uint64_t __readgsqword(int64_t offset);
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
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
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
int128_t __asm_pmaxsw(int128_t left, int128_t right);
int128_t __asm_por(int128_t left, int128_t right);
int128_t __asm_pxor(int128_t left, int128_t right);
int128_t __asm_xorps(int128_t left, int128_t right);
int128_t __asm_addps(int128_t left, int128_t right);
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

int64_t function_149913(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_149974(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_149983(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1499bc(int64_t a1);
int64_t function_1499fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_149a1b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_149a3c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_149a7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_149ac5(void);
int64_t function_149ae2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_149c03(void);
int64_t function_149c49(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_149f05(void);
int64_t function_149f0a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14a005(int64_t a1);
int64_t function_14a041(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1519b5d();
int64_t function_3eca93b9();
int64_t function_416dd96c();
int64_t function_45a634(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_45a640(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45a6fa(void);
int64_t function_45a703(void);
int64_t function_45a708(void);
int64_t function_45a764(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_45a81e(void);
int64_t function_45a854(int64_t a1);
int64_t function_45a858(void);
int64_t function_45a882(void);
int64_t function_45a8a9(void);
int64_t function_45a8cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45a8e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_45a9ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45aa24(void);
int64_t function_45aa7d(int64_t a1, int64_t a2);
int64_t function_45aacc(void);
int64_t function_45aace(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_45abee(int64_t a1);
int64_t function_45ae34(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45ae62(void);
int64_t function_45af07(void);
int64_t function_45af44(void);
int64_t function_45af47(void);
int64_t function_45af72(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_45afd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ffffffff8e15dd8d();
int64_t function_ffffffffe1958108();
int64_t function_ffffffffe890a6a1();
int64_t unknown_18a4996f();
int64_t unknown_6b50c8();
int64_t unknown_ffffffff9379d65d();
int64_t unknown_ffffffffb348f615();

// Address range: 0x149913 - 0x149938
int64_t function_149913(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x149913
    int64_t v1; // 0x149913
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)a2;
    *(char *)-0x7fe97e0a = *(char *)-0x7fe97e0a + (char)(a3 / 256);
    int32_t * v2 = (int32_t *)((v1 & 0xffffffff) - 0x69c8222d); // 0x14992b
    *v2 = *v2 + (int32_t)a4;
    return a3 & 0xffffffff ^ 0x201e8af;
}

// Address range: 0x149974 - 0x149983
int64_t function_149974(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x149974
    return (int64_t)*(int32_t *)-0x6af0d9efe17714c;
}

// Address range: 0x149983 - 0x149999
int64_t function_149983(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x149983
    int64_t v1; // 0x149983
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 122 + 2 * v2); // 0x14998c
    *v3 = *v3 + (int32_t)v2;
    __asm_in((int16_t)a3);
    return function_ffffffffe890a6a1();
}

// Address range: 0x1499bc - 0x1499bd
int64_t function_1499bc(int64_t a1) {
    // 0x1499bc
    int64_t result; // 0x1499bc
    return result;
}

// Address range: 0x1499fc - 0x149a19
int64_t function_1499fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 2 * a3; // 0x1499fc
    int32_t * v2 = (int32_t *)(v1 & 0xfffffffe); // 0x1499fe
    *v2 = *v2 | -0x174b21ff;
    int32_t * v3 = (int32_t *)(a1 - 0x21ff6ef6); // 0x149a04
    int32_t v4 = v1; // 0x149a04
    *v3 = *v3 + v4;
    int32_t * v5 = (int32_t *)(a4 + 0x634dfe00); // 0x149a0a
    *v5 = *v5 & v4;
    int64_t result; // 0x1499fc
    return result;
}

// Address range: 0x149a1b - 0x149a3c
int64_t function_149a1b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x149a1b
    int64_t v1; // 0x149a1b
    char v2 = v1;
    *(char *)v1 = v2 + (char)(a3 / 256);
    int64_t v3 = a4 & 0xad20fe17 | 0x52df01e8; // 0x149a20
    int64_t v4 = (v3 + 73) % 128 | v3 & 0xffffff00; // 0x149a25
    uint32_t v5 = (int32_t)v1 % 32; // 0x149a28
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)v4; // 0x149a28
        uint32_t v7 = *v6; // 0x149a28
        *v6 = v7 >> 32 - v5 | v7 << v5;
    }
    char * v8 = (char *)(v1 - 0x936fe18); // 0x149a2c
    *v8 = *v8 - v2;
    return v4 & 0xffffff3c;
}

// Address range: 0x149a3c - 0x149a74
int64_t function_149a3c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char * v1 = (char *)(a6 - 24); // 0x149a3c
    *v1 = *v1 | (char)a5;
    int32_t * v2 = (int32_t *)(a1 - 0x3185606f); // 0x149a40
    int64_t v3; // 0x149a3c
    *v2 = *v2 + (int32_t)v3;
    *(char *)(v3 - 0x1769b200) = (char)(a3 / 256);
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)a2;
    unsigned char v4 = (char)unknown_ffffffff9379d65d(); // 0x149a5d
    char v5 = v4 + 106; // 0x149a5d
    bool v6; // 0x149a3c
    int32_t v7 = 0x4000 * (int32_t)(bool)v6 | 1024 * (int32_t)v6 | 512 * (int32_t)v6 | 256 * (int32_t)v6 | (int32_t)(v4 < 150) | 64 * (int32_t)(v5 == 0) | 128 * (int32_t)(v5 < 0) | 16 * (int32_t)(v4 % 16 > 21) | 4 * (int32_t)(llvm_ctpop_i8(v5) % 2 == 0) | 2048 * (int32_t)(((v5 ^ v4) & (v4 ^ -128)) < 0) | 2; // bp-12, 0x149a5f
    int32_t * v8 = (int32_t *)(a1 - 49); // 0x149a70
    *v8 = *v8 + (int32_t)(int64_t)&v7;
    return a2 & 0xffffffff;
}

// Address range: 0x149a7e - 0x149aa3
int64_t function_149a7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x149a7e
    int64_t v1; // 0x149a7e
    int64_t v2 = (0x100000000 * v1 ^ -0x1f4e3cf400000000) >> 32; // 0x149a83
    uint64_t v3 = v2 * v2; // 0x149a83
    uint64_t v4 = v3 / 0x100000000; // 0x149a83
    int32_t * v5 = (int32_t *)(v3 & 0xffffffff); // 0x149a85
    *v5 = *v5 + (int32_t)v3;
    int64_t v6 = __asm_iretd(); // 0x149a8d
    char * v7 = (char *)v4; // 0x149a9b
    *v7 = *v7 ^ (char)v6;
    __asm_in_133((int16_t)v4);
    return function_1519b5d();
}

// Address range: 0x149ac5 - 0x149ac6
int64_t function_149ac5(void) {
    // 0x149ac5
    int64_t result; // 0x149ac5
    return result;
}

// Address range: 0x149ae2 - 0x149bc3
int64_t function_149ae2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x149ae2
    int64_t v1; // 0x149ae2
    uint64_t result3 = v1;
    char v2 = (char)v1 & 111; // 0x149ae2
    int64_t v3 = v1 & -0xff7e | 0x4000 * (int64_t)(v2 == 0) | 1024 * (int64_t)(llvm_ctpop_i8(v2) % 2 == 0) | 512; // 0x149ae5
    int32_t v4 = 99 * *(int32_t *)(result3 - 0x4dc95b00); // 0x149aef
    int32_t v5 = *(int32_t *)(result3 + 0xaf95000); // 0x149af6
    int32_t v6 = v4 + v5; // 0x149af6
    int64_t v7 = v3; // bp-8, 0x149afc
    if (v6 < 0 == ((v6 ^ v4) & (v6 ^ v5)) < 0 == (v6 != 0)) {
        int64_t v8 = __asm_int1(); // 0x149b37
        int32_t * v9 = (int32_t *)(a1 + 0x343b0b8c); // 0x149b3a
        int32_t v10 = *v9; // 0x149b3a
        int32_t v11 = a3; // 0x149b3a
        int32_t v12 = v10 + v11; // 0x149b3a
        *v9 = v12;
        int64_t v13 = (v8 + 232) % 256 | v8 & -256; // 0x149b40
        if (v12 < 0 != ((v12 ^ v10) & (v12 ^ v11)) < 0) {
            v13 = function_149ac5();
        }
        int64_t v14 = result3 + (int64_t)&v7 & 0xffffffff; // 0x149b30
        *(int64_t *)-0x48fec2fff5f4cbf6 = v13;
        *(int64_t *)(v14 - 8) = 0x70322f8;
        *(int64_t *)(v14 - 16) = -0x21c59000;
        int64_t result = __asm_hlt(); // 0x149b56
        __asm_out((int16_t)a3, (int32_t)result);
        return result;
    }
    int64_t v15 = v6; // 0x149af6
    unsigned char v16 = *(char *)0x5c03b907; // 0x149b00
    uint64_t v17 = result3 / 256; // 0x149b00
    unsigned char v18 = v16 + (char)v17; // 0x149b00
    *(char *)0x5c03b907 = v18;
    char v19 = (char)v1 + 29 + (char)(v18 < v16); // 0x149b07
    unsigned char v20 = *(char *)-0x76ea27d5; // 0x149b13
    *(char *)-0x76ea27d5 = v20 / 128 | 2 * v20;
    if (v19 == 0) {
        int64_t v21 = 0x10000 * (int32_t)v1 >> 16 & -256; // 0x149b11
        int64_t v22 = v17 & 139 | v21 | 0x4c7f0074; // 0x149b95
        *(int32_t *)-0x74f89343c77523f6 = (int32_t)v22;
        int64_t result2 = __asm_int3(v22, v15, v21 & 0xff00 | a3); // 0x149baa
        *(char *)v22 = (char)result2;
        float80_t v23; // 0x149ae2
        bool v24; // 0x149ae2
        *(int32_t *)(v22 + 0x3d000079 + (v24 ? -1 : 1)) = (int32_t)v23;
        return result2;
    }
    uint64_t v25 = __asm_wait(); // 0x149b1c
    char * v26 = (char *)(a1 - 84); // 0x149b26
    *v26 = (char)(v25 / 256);
    if ((result3 / 0x8000 ^ v17) % 2 == 0) {
        // 0x149b2d
        return result3;
    }
    int64_t v27 = (v3 & 0xffff4682) - 1; // 0x149b1a
    uint64_t v28 = v25 + 62; // 0x149b1e
    int64_t v29 = v28 & 0xffffffff; // 0x149b1e
    int64_t v30 = 256 * (int64_t)*v26 | v25 & -0xff01; // 0x149b5c
    if (llvm_ctpop_i8(v19) % 2 != 0) {
        v30 = function_149ae2(a1, v15, v29, v27);
    }
    char * v31 = (char *)v29; // 0x149b5e
    *v31 = *v31 & (char)(v28 / 256);
    char v32 = *(char *)0x486f9c67; // 0x149b60
    *(char *)0x486f9c67 = v32 + (char)(result3 / 512 % 128 | result3 / 2 & 128);
    unsigned char v33 = *(char *)-0x333cff2cb9a761f6; // 0x149b66
    int32_t * v34 = (int32_t *)(v30 & -256 | (int64_t)v33); // 0x149b70
    uint32_t v35 = *v34; // 0x149b70
    uint32_t v36 = (int32_t)v27 % 32; // 0x149b70
    *v34 = v35 >> 32 - v36 | v35 << v36;
    return unknown_6b50c8();
}

// Address range: 0x149c03 - 0x149c04
int64_t function_149c03(void) {
    // 0x149c03
    int64_t result; // 0x149c03
    return result;
}

// Address range: 0x149c49 - 0x149e0d
int64_t function_149c49(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x149c49
    char v3 = v2 / 256; // 0x149c4b
    *(char *)-0x6cf484ae = *(char *)-0x6cf484ae + v3;
    int64_t result = v2 & -0xff01 | (int64_t)&g2; // 0x149c54
    int32_t * v4 = (int32_t *)(a1 - 0x339ca5c6); // 0x149c56
    *v4 = *v4 - 0x4e877b08;
    int32_t v5 = result; // 0x149c60
    __asm_out_134(61, v5);
    int32_t * v6 = (int32_t *)(v1 - 122); // 0x149c62
    int32_t v7 = *v6 + (int32_t)a1; // 0x149c62
    *v6 = v7;
    if (v7 < 0) {
        // 0x149c67
        return result;
    }
    int32_t result2 = v5 + 0x408000; // 0x149ce5
    if (result2 < 1) {
        // 0x149c96
        return result2;
    }
    unsigned char v8 = *(char *)(a3 - 91) | (char)(a3 / 256); // 0x149c51
    int64_t v9 = 256 * (int64_t)v8 | a3 & -0xff01; // 0x149c51
    uint32_t v10 = *(int32_t *)&v1 & result2; // 0x149cf7
    int64_t v11 = v10; // 0x149cf7
    char * v12 = (char *)v11; // 0x149cfc
    *v12 = *v12 + (char)v10;
    if (104 * *(int32_t *)v9 != 0) {
        // 0x149d05
        return (int64_t)(*(int32_t *)&v1 & -15);
    }
    if (v10 < 0x143cee02) {
        char * v13 = (char *)v9; // 0x149d7b
        *v13 = *v13 + v3;
        int64_t result3 = __asm_wait(); // 0x149d7d
        *(char *)a1 = (char)result3;
        *(char *)result3 = 0;
        char * v14 = (char *)(v2 + 0x63afbd0f); // 0x149d82
        *v14 = *v14 + (char)a3;
        return result3;
    }
    char * v15 = (char *)(a1 - 128); // 0x149df3
    *v15 = (char)(v10 / 256);
    int64_t v16 = 256 * (int64_t)*v15 | v11 & 0xffff00ff; // 0x149df3
    char v17 = *(char *)(v16 + 0x7b8e3ee2); // 0x149df6
    __asm_int(-81);
    int64_t v18 = v16 ^ 0x34ee1d1e; // 0x149dfe
    __writegsbyte(0x3a9acd0b, __readgsbyte(0x3a9acd0b) + v3);
    int32_t v19 = __asm_insd((int16_t)(256 * (int64_t)(v17 + v8) | a3 % 256)); // 0x149e0c
    *(int32_t *)a1 = v19;
    return (v18 + 216) % 256 | v18 & 0xffffff00;
}

// Address range: 0x149f05 - 0x149f06
int64_t function_149f05(void) {
    // 0x149f05
    int64_t result; // 0x149f05
    return result;
}

// Address range: 0x149f0a - 0x149f15
int64_t function_149f0a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x149f0a
    int64_t v1; // 0x149f0a
    int64_t v2 = v1 + a3; // 0x149f0a
    char * v3 = (char *)((int64_t)((int32_t)v2 >> 31) + 0xa68b71a); // 0x149f0d
    *v3 = *v3 | (char)v2;
    return function_149f05();
}

// Address range: 0x14a005 - 0x14a008
int64_t function_14a005(int64_t a1) {
    // 0x14a005
    int64_t result; // 0x14a005
    return result;
}

// Address range: 0x14a041 - 0x14a0ae
int64_t function_14a041(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x14a041
    int64_t v1; // 0x14a041
    *(int32_t *)0x1e83cd8 = (int32_t)v1;
    int64_t v2 = a3 & -0x10000 | 256 * v1 + a3 & 0xff00 | 244; // 0x14a058
    int16_t v3 = v2; // 0x14a05e
    bool v4; // 0x14a041
    int32_t * v5 = (int32_t *)((v4 ? -4 : 4) + a2); // 0x14a05e
    __asm_outsd(v3, *v5);
    char v6 = v1; // 0x14a05f
    char v7 = *(char *)(v2 - 0x354a487f); // 0x14a05f
    char v8 = v7 + v6; // 0x14a05f
    if (v8 < 0 == ((v8 ^ v6) & (v8 ^ v7)) < 0) {
        // 0x14a067
        return function_ffffffff8e15dd8d();
    }
    int64_t result = v1 & 0xffffff00 | (int64_t)*(char *)0x6eef3f013d00d4dc; // 0x14a04f
    char * v9 = (char *)result; // 0x14a0a6
    *v9 = *v9 - 12;
    __asm_outsd(v3, *v5);
    return result;
}

// Address range: 0x45a634 - 0x45a63f
int64_t function_45a634(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x45a634
    unknown_18a4996f();
    int64_t result = __asm_wait(); // 0x45a639
    *(char *)(result - 117) = (char)a4;
    return result;
}

// Address range: 0x45a640 - 0x45a64b
int64_t function_45a640(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45a640
    int64_t v1; // 0x45a640
    int64_t v2 = v1;
    return (v2 + 182) % 256 | v2 & -256;
}

// Address range: 0x45a6fa - 0x45a6fb
int64_t function_45a6fa(void) {
    // 0x45a6fa
    int64_t result; // 0x45a6fa
    return result;
}

// Address range: 0x45a703 - 0x45a704
int64_t function_45a703(void) {
    // 0x45a703
    int64_t result; // 0x45a703
    return result;
}

// Address range: 0x45a708 - 0x45a70b
int64_t function_45a708(void) {
    // 0x45a708
    int64_t result; // 0x45a708
    return result;
}

// Address range: 0x45a764 - 0x45a7f4
int64_t function_45a764(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x45a764
    bool v3; // 0x45a764
    if (!v3) {
        v2 = function_45a703();
    }
    // 0x45a766
    *(char *)a1 = (char)v2;
    uint64_t v4 = a4 / 256; // 0x45a76c
    int64_t v5 = v4 % 256 ^ a4; // 0x45a76c
    int16_t v6 = a3;
    char v7 = __asm_in_133(v6); // 0x45a76e
    char * v8 = (char *)(a1 + 20 + v5 + (v3 ? -1 : 1)); // 0x45a771
    char v9 = a3;
    char v10 = *v8 - v9; // 0x45a771
    *v8 = v10;
    int64_t v11 = v2 + (v3 ? 0x785c45fc : 0x785c45fb) & 0xffffff00 | (int64_t)v7; // 0x45a777
    if (v10 == 0) {
        v11 = function_45a6fa();
    }
    int64_t v12 = v11 & 0x4caf3dcf; // 0x45a779
    int64_t v13 = v1; // 0x45a77e
    *(int32_t *)0x5b66ca7 = *(int32_t *)0x5b66ca7 ^ (int32_t)v13;
    char v14 = v4; // 0x45a785
    char * v15 = (char *)v5;
    *(char *)v13 = (char)v13 + v14;
    __asm_out(v6, (int32_t)v12);
    char v16 = *v15 & v9; // 0x45a789
    *v15 = v16;
    char v17 = v12 / 256; // 0x45a78b
    if (v16 >= v17) {
        // 0x45a7a9
        return function_3eca93b9();
    }
    int64_t v18 = v12;
    int64_t v19 = a3;
    int64_t v20; // 0x45a764
    int32_t * v21 = (int32_t *)(v19 + 27 + v20); // 0x45a794
    *v21 = *v21 | (int32_t)v20;
    uint32_t v22 = (int32_t)((v18 + 156) % 256 | v18 & 0xffff0000 | 256 * (int64_t)(v17 - v16)) ^ 0x655da647; // 0x45a79b
    while (v22 < 0) {
        // 0x45a7d0
        *(int32_t *)-0x70a61fe786c4ffe6 = v22;
        unsigned char v23 = llvm_ctpop_i8((char)(v20 & (int64_t)v22)); // 0x45a7dc
        uint32_t v24 = *(int32_t *)0x774877d54853c398; // 0x45a7e4
        int64_t v25 = v24; // 0x45a7e4
        if (v23 % 2 != 0) {
            // 0x45a7ef
            return v25 & 0xffffff00 | (int64_t)__asm_in_135(85);
        }
        int64_t v26 = -255 * v19 & 0xff00 | v19 & -0xff01; // 0x45a7d0
        *(char *)v1 = *(char *)&v1 + v14;
        __asm_out((int16_t)v26, v24);
        char v27 = *v15 & (char)v19; // 0x45a789
        *v15 = v27;
        char v28 = v24 / 256; // 0x45a78b
        v20 = (int64_t)*(int32_t *)0x6dfa6f33;
        if (v27 >= v28) {
            // break -> 0x45a7a9
            break;
        }
        v18 = v25;
        v19 = v26;
        v21 = (int32_t *)(v19 + 27 + v20);
        *v21 = *v21 | (int32_t)v20;
        v22 = (int32_t)((v18 + 156) % 256 | v18 & 0xffff0000 | 256 * (int64_t)(v28 - v27)) ^ 0x655da647;
    }
    // 0x45a7a9
    return function_3eca93b9();
}

// Address range: 0x45a81e - 0x45a81f
int64_t function_45a81e(void) {
    // 0x45a81e
    int64_t result; // 0x45a81e
    return result;
}

// Address range: 0x45a854 - 0x45a857
int64_t function_45a854(int64_t a1) {
    // 0x45a854
    int64_t result; // 0x45a854
    return result;
}

// Address range: 0x45a858 - 0x45a85a
int64_t function_45a858(void) {
    // 0x45a858
    return function_45a81e();
}

// Address range: 0x45a882 - 0x45a883
int64_t function_45a882(void) {
    // 0x45a882
    int64_t result; // 0x45a882
    return result;
}

// Address range: 0x45a8a9 - 0x45a8b1
int64_t function_45a8a9(void) {
    // 0x45a8a9
    int64_t v1; // 0x45a8a9
    return v1 + 0x789038ff & 0xffffffff;
}

// Address range: 0x45a8cc - 0x45a8e2
int64_t function_45a8cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45a8cc
    int64_t v1; // 0x45a8cc
    int64_t v2; // 0x45a8cc
    if (*(char *)(v2 + 118) > (char)a3) {
        v1 = function_45a882();
    }
    int64_t v3 = v1;
    return (v3 + 202) % 256 | v3 & -256;
}

// Address range: 0x45a8e2 - 0x45a9bf
int64_t function_45a8e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a5;
    int64_t v2 = a4;
    *(char *)a1 = __asm_insb((int16_t)a3);
    char * v3 = (char *)(a4 - 0x4317c0d3); // 0x45a8ec
    char v4 = *v3 ^ (char)a3; // 0x45a8ec
    *v3 = v4;
    int64_t v5 = unknown_ffffffffb348f615(); // 0x45a8f2
    if (v4 == 0) {
        // 0x45a8f9
        *(char *)v1 = *(char *)&v1 + (char)v5;
        return function_416dd96c();
    }
    // 0x45a977
    int64_t v6; // 0x45a8e2
    *(char *)(v6 - 98) = 1;
    int32_t * v7 = (int32_t *)(a1 - 0x4ec49381); // 0x45a97b
    *v7 = *v7 & (int32_t)a1;
    *(int32_t *)v2 = 0x1000 * *(int32_t *)&v2;
    return v6 & 0xffffffff;
}

// Address range: 0x45a9ee - 0x45aa00
int64_t function_45a9ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45a9ee
    int64_t v1; // 0x45a9ee
    __asm_outsb((int16_t)a3, *(char *)&v1);
    return *(int64_t *)-0x47976ffd0b5e52ec;
}

// Address range: 0x45aa24 - 0x45aa27
int64_t function_45aa24(void) {
    // 0x45aa24
    int64_t result; // 0x45aa24
    return result;
}

// Address range: 0x45aa7d - 0x45aa81
int64_t function_45aa7d(int64_t a1, int64_t a2) {
    // 0x45aa7d
    int64_t result; // 0x45aa7d
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x45aacc - 0x45aacd
int64_t function_45aacc(void) {
    // 0x45aacc
    int64_t result; // 0x45aacc
    return result;
}

// Address range: 0x45aace - 0x45abd4
int64_t function_45aace(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = a9;
    *(char *)(a1 + 0x582755ad) = (char)a6;
    __asm_outsb((int16_t)a3, *(char *)a7);
    uint32_t v2 = *(int32_t *)0x35211ce204b52eba; // 0x45aadc
    int64_t v3 = v2; // 0x45aae6
    int64_t v4; // 0x45aace
    char v5 = *(char *)(v4 + 0x7717b246); // 0x45aaed
    int64_t v6 = __asm_int3(a1, v3, a3 & -256 | (int64_t)(v5 | (char)a3)); // 0x45aaf6
    uint32_t v7 = v2 + (int32_t)a4; // 0x45aaf7
    int32_t * v8 = (int32_t *)(2 * v4 + 47 + v3); // 0x45aafb
    *v8 = *v8 ^ v2;
    uint32_t v9 = (int32_t)v4; // 0x45aaff
    if (((v7 - v9 ^ v7) & (v7 ^ v9)) < 0) {
        // 0x45ab04
        return v4 & 0xffffffff;
    }
    if (v7 < v9 || (v6 & 0xed71fb0) == 0) {
        // 0x45ab77
        return function_ffffffffe1958108();
    }
    int32_t v10 = *(int32_t *)v3; // 0x45ab2a
    int64_t v11 = __asm_int1(); // 0x45ab46
    __asm_out_137(-118, (char)v11);
    char * v12 = (char *)(v11 + 0x1f0014d9); // 0x45ab4f
    *v12 = *v12 - (char)v4;
    return __asm_int3(a1, (int64_t)(v10 + v2), (int64_t)&v1);
}

// Address range: 0x45abee - 0x45abef
int64_t function_45abee(int64_t a1) {
    // 0x45abee
    int64_t result; // 0x45abee
    return result;
}

// Address range: 0x45ae34 - 0x45ae3e
int64_t function_45ae34(int64_t a1, int64_t a2, int64_t a3) {
    // 0x45ae34
    int64_t v1; // 0x45ae34
    int32_t * v2 = (int32_t *)(v1 + 8 * a2); // 0x45ae34
    bool v3; // 0x45ae34
    *v2 = *v2 + (v3 ? -0x394e32fc : -0x394e32fd);
    int64_t v4; // 0x45ae34
    return (int64_t)&v4;
}

// Address range: 0x45ae62 - 0x45ae63
int64_t function_45ae62(void) {
    // 0x45ae62
    int64_t result; // 0x45ae62
    return result;
}

// Address range: 0x45af07 - 0x45af08
int64_t function_45af07(void) {
    // 0x45af07
    int64_t result; // 0x45af07
    return result;
}

// Address range: 0x45af44 - 0x45af45
int64_t function_45af44(void) {
    // 0x45af44
    int64_t result; // 0x45af44
    return result;
}

// Address range: 0x45af47 - 0x45af4a
int64_t function_45af47(void) {
    // 0x45af47
    return function_45af07();
}

// Address range: 0x45af72 - 0x45afcd
int64_t function_45af72(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x45af72
    bool v1; // 0x45af72
    if (v1) {
        // 0x45afc9
        return __asm_in_136(-82);
    }
    // 0x45af74
    *(int64_t *)0xc6041907 = a3;
    int64_t v2 = *(int64_t *)0xc604190f; // 0x45af7b
    int32_t * v3 = (int32_t *)(a4 - 0x2a8e864e); // 0x45af7c
    uint32_t v4 = *v3; // 0x45af7c
    *v3 = v4 / 0x200000 | 2048 * (int32_t)(a3 % 2 != 0) | 0x1000 * v4;
    int32_t v5 = *(int32_t *)(v2 + 0x60620bd8) & -0x39fbe6e9; // 0x45af83
    int64_t result = v2 & -0xff01 | (int64_t)&g1; // 0x45af89
    int64_t v6; // 0x45af72
    if (v5 >= 0) {
        char * v7 = (char *)(a3 + 87); // 0x45afb7
        *v7 = *v7 - (char)(v6 / 256);
        return result;
    }
    int64_t v8 = v5; // 0x45af83
    int32_t * v9 = (int32_t *)(a2 - 38); // 0x45af93
    int32_t v10 = *v9; // 0x45af93
    int32_t v11 = ((char)result ^ -8) < 72; // 0x45af93
    int32_t v12 = v11 + (int32_t)v6; // 0x45af93
    int32_t v13 = v10 - v12; // 0x45af93
    *v9 = v13;
    int64_t result2 = __asm_in_136(44); // 0x45af96
    if (((v13 - v11 ^ v10) & (v10 ^ v12)) >= 0) {
        // 0x45af9c
        *(int64_t *)(v8 - 8) = v8;
        return result2;
    }
    int64_t result3 = result2; // 0x45afa9
    if (v10 < v12) {
        result3 = function_45af44();
    }
    // 0x45afab
    *(int64_t *)(v8 - 8) = a2;
    return result3;
}

// Address range: 0x45afd3 - 0x45afe5
int64_t function_45afd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 - 0x65beadd6); // 0x45afd3
    uint32_t v2 = *v1; // 0x45afd3
    int64_t v3; // 0x45afd3
    uint32_t v4 = v2 + (int32_t)v3; // 0x45afd3
    bool v5; // 0x45afd3
    uint32_t v6 = v4 + (int32_t)v5; // 0x45afd3
    *v1 = v6;
    int32_t * v7 = (int32_t *)a5; // 0x45afdb
    int64_t v8; // 0x45afd3
    *v7 = *v7 + (int32_t)v8 + (int32_t)(v5 ? v6 <= v2 : v4 < v2);
    __asm_outsb((int16_t)a5, *(char *)&v8);
    return a4 & 0xffffffff;
}
