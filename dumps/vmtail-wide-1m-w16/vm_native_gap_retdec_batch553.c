/*
 * Targeted RetDec C for native executable gap queue batch 553.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x11f746-0x11f946 rank=- name=- kind=- bytes=- uncovered=-
 *   0x11f946-0x11fb46 rank=- name=- kind=- bytes=- uncovered=-
 *   0x11fb46-0x11fd46 rank=- name=- kind=- bytes=- uncovered=-
 *   0x11fd46-0x11ff46 rank=- name=- kind=- bytes=- uncovered=-
 *   0x11ff46-0x120146 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ff4d1-0x3ff6d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ff6d1-0x3ff8d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ff8d1-0x3ffad1 rank=- name=- kind=- bytes=- uncovered=-
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
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
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

int64_t function_11f746(int64_t a1, int64_t a2);
int64_t function_11f764(void);
int64_t function_11f76c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11f7fe(void);
int64_t function_11f82c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11f862(void);
int64_t function_11f86f(void);
int64_t function_11f88c(void);
int64_t function_11f90b(void);
int64_t function_11f933(void);
int64_t function_11f9f4(int64_t a1);
int64_t function_11fa0b(int64_t a1);
int64_t function_11fa33(void);
int64_t function_11fa4a(int64_t a1);
int64_t function_11fa67(int64_t a1);
int64_t function_11fa7a(void);
int64_t function_11fa88(void);
int64_t function_11fad4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_11fb34(void);
int64_t function_11fb42(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11fb78(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11fb83(int64_t a1, int64_t a2, int64_t a3);
int64_t function_11fbb9(void);
int64_t function_11fc01(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_11fcb2(void);
int64_t function_11fcea(int64_t a1, int64_t a2);
int64_t function_11fcef(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11fd23(void);
int64_t function_11fd62(int64_t a1, int64_t a2);
int64_t function_11fd71(void);
int64_t function_11fda1(void);
int64_t function_11fdaf(void);
int64_t function_11fdd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11fe11(int64_t a1);
int64_t function_11fe54(int64_t a1);
int64_t function_11fe5a(void);
int64_t function_11fe65(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11ff55(void);
int64_t function_11ff89(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12007d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1200d5(void);
int64_t function_1200fa(int64_t a1);
int64_t function_3ff49c();
int64_t function_3ff4d1(void);
int64_t function_3ff4d2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3ff4f9(void);
int64_t function_3ff500(int64_t a1);
int64_t function_3ff50a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ff535(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, uint64_t a5);
int64_t function_3ff68f(int64_t a1);
int64_t function_3ff6bc(int64_t a1);
int64_t function_3ff6d6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ff6fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ff708(void);
int64_t function_3ff722(void);
int64_t function_3ff73f(void);
int64_t function_3ff748(void);
int64_t function_3ff763(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_3ff774(int64_t a1, int64_t a2);
int64_t function_3ff794(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ff7a5(void);
int64_t function_3ff7ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ff88f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ff8eb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ff92a(void);
int64_t function_3ff977(void);
int64_t function_3ff9f2(void);
int64_t function_3ff9f5(void);
int64_t function_3ffa1e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3ffa55(void);
int64_t function_3ffa78(void);
int64_t function_3ffa7a(void);
int64_t function_3ffa8e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_58aa9dc();
int64_t function_7460dc7e();
int64_t function_ffffffff8413e380();
int64_t function_ffffffff8d787765();
int64_t function_ffffffff99000250();
int64_t function_ffffffff9e5d240e();
int64_t function_ffffffffadb4fc67();
int64_t function_ffffffffbfaae3f5();
int64_t function_ffffffffdb54b9be();
int64_t function_fffffffff69d90d7();
int64_t unknown_3a1d67b1();
int64_t unknown_3a959709();
int64_t unknown_3aa617ae();
int64_t unknown_3f89383e();
int64_t unknown_46531530();
int64_t unknown_4808a327();
int64_t unknown_4bdb208e();
int64_t unknown_6a13e86e();
int64_t unknown_ffffffffa30ca534();
int64_t unknown_ffffffffae16e49f();
int64_t unknown_ffffffffd9ccee82();
int64_t unknown_ffffffffdbd82791();

// Address range: 0x11f746 - 0x11f74c
int64_t function_11f746(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0xb0a720f); // 0x11f746
    int64_t result; // 0x11f746
    bool v2; // 0x11f746
    *v1 = (int32_t)v2 - (int32_t)result + *v1;
    return result;
}

// Address range: 0x11f764 - 0x11f765
int64_t function_11f764(void) {
    // 0x11f764
    int64_t result; // 0x11f764
    return result;
}

// Address range: 0x11f76c - 0x11f78f
int64_t function_11f76c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x170725a3); // 0x11f76c
    bool v2; // 0x11f76c
    *v1 = (int32_t)v2 - (int32_t)a4 + *v1;
    int64_t v3; // 0x11f76c
    int32_t * v4 = (int32_t *)(4 * v3 + 0x27e422a3); // 0x11f772
    *v4 = *v4 + (int32_t)v3;
    unsigned char v5 = *(char *)(a3 - 2) ^ (char)a4; // 0x11f779
    int64_t v6 = unknown_ffffffffd9ccee82(); // 0x11f781
    if (v5 == 0) {
        v6 = function_11f764();
    }
    char * v7 = (char *)(a4 & -256 | (int64_t)v5); // 0x11f784
    *v7 = *v7 - v5;
    return v6 & -256 | (int64_t)__asm_in((int16_t)a3);
}

// Address range: 0x11f7fe - 0x11f7ff
int64_t function_11f7fe(void) {
    // 0x11f7fe
    int64_t result; // 0x11f7fe
    return result;
}

// Address range: 0x11f82c - 0x11f84e
int64_t function_11f82c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11f82c
    int64_t v1; // 0x11f82c
    int32_t * v2 = (int32_t *)(v1 + 0x48d05ef8); // 0x11f82c
    *v2 = *v2 + (int32_t)v1;
    char * v3 = (char *)(a2 + 0x3edd888f); // 0x11f832
    *v3 = *v3 ^ (char)a3;
    int64_t v4 = unknown_3f89383e(); // 0x11f838
    if (a4 == 0) {
        function_11f7fe();
    }
    int64_t v5 = __asm_wait(); // 0x11f840
    bool v6; // 0x11f82c
    *(int64_t *)0x8a028e20 = 0x4000 * (int64_t)v6 | 1024 * (int64_t)v6 | 512 * (int64_t)v6 | 256 * (int64_t)v6 | 2182;
    return v5 & -256 | ((v4 & 256) == 0 ? 158 : 159);
}

// Address range: 0x11f862 - 0x11f863
int64_t function_11f862(void) {
    // 0x11f862
    int64_t result; // 0x11f862
    return result;
}

// Address range: 0x11f86f - 0x11f872
int64_t function_11f86f(void) {
    // 0x11f86f
    return function_11f862();
}

// Address range: 0x11f88c - 0x11f88e
int64_t function_11f88c(void) {
    // 0x11f88c
    int64_t result; // 0x11f88c
    return result;
}

// Address range: 0x11f90b - 0x11f910
int64_t function_11f90b(void) {
    // 0x11f90b
    return function_ffffffff99000250();
}

// Address range: 0x11f933 - 0x11f936
int64_t function_11f933(void) {
    // 0x11f933
    int64_t result; // 0x11f933
    return result;
}

// Address range: 0x11f9f4 - 0x11f9f5
int64_t function_11f9f4(int64_t a1) {
    // 0x11f9f4
    int64_t result; // 0x11f9f4
    return result;
}

// Address range: 0x11fa0b - 0x11fa0c
int64_t function_11fa0b(int64_t a1) {
    // 0x11fa0b
    int64_t result; // 0x11fa0b
    return result;
}

// Address range: 0x11fa33 - 0x11fa36
int64_t function_11fa33(void) {
    // 0x11fa33
    int64_t result; // 0x11fa33
    return result;
}

// Address range: 0x11fa4a - 0x11fa4b
int64_t function_11fa4a(int64_t a1) {
    // 0x11fa4a
    int64_t result; // 0x11fa4a
    return result;
}

// Address range: 0x11fa67 - 0x11fa68
int64_t function_11fa67(int64_t a1) {
    // 0x11fa67
    int64_t result; // 0x11fa67
    return result;
}

// Address range: 0x11fa7a - 0x11fa7f
int64_t function_11fa7a(void) {
    // 0x11fa7a
    return function_ffffffffadb4fc67();
}

// Address range: 0x11fa88 - 0x11fa8d
int64_t function_11fa88(void) {
    // 0x11fa88
    return function_ffffffff8413e380();
}

// Address range: 0x11fad4 - 0x11fad9
int64_t function_11fad4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x11fad4
    int64_t result; // 0x11fad4
    *(int32_t *)a2 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x11fb34 - 0x11fb35
int64_t function_11fb34(void) {
    // 0x11fb34
    int64_t result; // 0x11fb34
    return result;
}

// Address range: 0x11fb42 - 0x11fb78
int64_t function_11fb42(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int64_t v2; // 0x11fb42
    *(char *)0x3188f9c7a5e6950 = (char)v2;
    uint32_t v3 = *(int32_t *)(a3 - 24); // 0x11fb4b
    int32_t * v4 = (int32_t *)(a4 + 75); // 0x11fb4e
    *v4 = *v4 + (int32_t)v2;
    int32_t v5 = v2; // 0x11fb55
    uint32_t v6 = *(int32_t *)0x5217f3b4; // 0x11fb57
    uint32_t v7 = v6 + (int32_t)a3; // 0x11fb57
    *(int32_t *)0x5217f3b4 = v7;
    int64_t v8 = (int64_t)(v3 + v5 + *(int32_t *)&v1); // 0x11fb5e
    if (((int64_t)(v3 / 256 % 256) || a4) == 0) {
        v8 = function_11fb34();
    }
    // 0x11fb60
    *(char *)0x44a8d59301e85a29 = (char)v8;
    int32_t v9 = *(int32_t *)v8; // 0x11fb6a
    int32_t * v10 = (int32_t *)(int64_t)((int32_t)v8 + (int32_t)(v7 < v6) + v9); // 0x11fb6f
    *v10 = *v10 + v5;
    bool v11; // 0x11fb42
    int64_t v12 = v11 ? -1 : 1; // 0x11fb71
    return function_ffffffff9e5d240e(v1 + v12, v12 + a2);
}

// Address range: 0x11fb78 - 0x11fb7e
int64_t function_11fb78(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11fb78
    int64_t result; // 0x11fb78
    return result;
}

// Address range: 0x11fb83 - 0x11fb88
int64_t function_11fb83(int64_t a1, int64_t a2, int64_t a3) {
    // 0x11fb83
    int64_t result; // 0x11fb83
    *(int32_t *)a3 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x11fbb9 - 0x11fbbd
int64_t function_11fbb9(void) {
    // 0x11fbb9
    int64_t result; // 0x11fbb9
    return result;
}

// Address range: 0x11fc01 - 0x11fcb2
int64_t function_11fc01(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x11fc01
    int64_t v1; // 0x11fc01
    bool v2; // 0x11fc01
    if (!v2) {
        int64_t v3 = unknown_3a959709(); // 0x11fc03
        float80_t v4; // 0x11fc01
        *(int32_t *)(4 * v1 + 0x750028bd) = (int32_t)v4;
        int32_t * v5 = (int32_t *)(4 * v3 + a1); // 0x11fc11
        *v5 = *v5 + (int32_t)a1;
        int32_t * v6 = (int32_t *)(unknown_4808a327() + 0xd18000a); // 0x11fc26
        *v6 = *v6 + (int32_t)a4;
        return unknown_ffffffffa30ca534() & 0xb5807e73 | 0x4a7f818c;
    }
    unsigned char v7 = (char)a4 % 32; // 0x11fc68
    if (v7 != 0) {
        char * v8 = (char *)(v1 + 0x784a01e8); // 0x11fc68
        unsigned char v9 = *v8; // 0x11fc68
        *v8 = v9 >> v7 | v9 << 8 - v7;
    }
    int32_t * v10 = (int32_t *)((v1 ^ a4 & 0xff00) + 0x408fea74); // 0x11fc6e
    *v10 = *v10 >> 1;
    char v11 = *(char *)(a4 - 108); // 0x11fc74
    *(char *)(v1 + 123) = (char)(*(char *)-0x6c574b4774dfe18 >= 0);
    unknown_4bdb208e();
    int64_t v12 = ((a5 & (int64_t)&g1) == 0 ? 1 : -1) + a1; // 0x11fc8e
    char * v13 = (char *)v12; // 0x11fc96
    *v13 = *v13 + (char)(a4 / 256);
    int64_t v14 = unknown_ffffffffae16e49f(v12, a6); // 0x11fc98
    int16_t v15 = 256 * (int64_t)(v11 | (char)(a3 / 256)) | a3 % 256; // 0x11fc9e
    int32_t v16 = __asm_insd(v15); // 0x11fc9e
    int32_t * v17 = (int32_t *)v12; // 0x11fc9e
    *v17 = v16;
    uint32_t v18 = (int32_t)a4 % 32; // 0x11fca0
    if (v18 != 0) {
        int32_t * v19 = (int32_t *)v14; // 0x11fca0
        uint32_t v20 = *v19; // 0x11fca0
        *v19 = v20 >> 32 - v18 | v20 << v18;
    }
    __asm_in_133(123);
    *v17 = __asm_insd(v15);
    unknown_3aa617ae();
    return function_ffffffffdb54b9be();
}

// Address range: 0x11fcb2 - 0x11fcb4
int64_t function_11fcb2(void) {
    // 0x11fcb2
    int64_t v1; // 0x11fcb2
    return function_11fcef(v1, v1, v1, v1);
}

// Address range: 0x11fcea - 0x11fcef
int64_t function_11fcea(int64_t a1, int64_t a2) {
    // 0x11fcea
    int64_t result; // 0x11fcea
    *(int32_t *)a1 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x11fcef - 0x11fd09
int64_t function_11fcef(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11fcef
    int64_t v1; // 0x11fcef
    int64_t result = v1;
    int64_t v2 = a4;
    int64_t v3 = a3;
    *(int32_t *)result = (int32_t)result - 0x7e5c59f2;
    uint32_t v4 = (int32_t)a4 % 32; // 0x11fcf5
    if (v4 != 0) {
        uint32_t v5 = *(int32_t *)&v3; // 0x11fcf5
        *(int32_t *)v3 = v5 >> v4 | v5 << 32 - v4;
    }
    *(char *)v2 = *(char *)&v2 | (char)(v3 / 256);
    int32_t * v6 = (int32_t *)(v1 - 112); // 0x11fcfb
    *v6 = *v6 + (int32_t)v1;
    unsigned char v7 = *(char *)&v3; // 0x11fd05
    *(char *)v3 = v7 / 128 | 2 * v7;
    return result;
}

// Address range: 0x11fd23 - 0x11fd2b
int64_t function_11fd23(void) {
    // 0x11fd23
    int64_t result; // 0x11fd23
    __asm_fbld(*(float80_t *)(result - 0x11942eed));
    return result;
}

// Address range: 0x11fd62 - 0x11fd69
int64_t function_11fd62(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a1 - 0x1844ea4a); // 0x11fd62
    int64_t result; // 0x11fd62
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x11fd71 - 0x11fd74
int64_t function_11fd71(void) {
    // 0x11fd71
    int64_t v1; // 0x11fd71
    return v1 | 162;
}

// Address range: 0x11fda1 - 0x11fda2
int64_t function_11fda1(void) {
    // 0x11fda1
    int64_t result; // 0x11fda1
    return result;
}

// Address range: 0x11fdaf - 0x11fdb0
int64_t function_11fdaf(void) {
    // 0x11fdaf
    int64_t result; // 0x11fdaf
    return result;
}

// Address range: 0x11fdd4 - 0x11fdf6
int64_t function_11fdd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x11fdd4
    bool v3; // 0x11fdd4
    if (v3) {
        v2 = function_11fdaf();
    }
    // 0x11fdd6
    *(int32_t *)a2 = (int32_t)v2 + (int32_t)a2;
    __asm_outsd((int16_t)a3, *(int32_t *)&v1);
    return function_11fe54((int64_t)&g3);
}

// Address range: 0x11fe11 - 0x11fe14
int64_t function_11fe11(int64_t a1) {
    // 0x11fe11
    int64_t result; // 0x11fe11
    return result;
}

// Address range: 0x11fe54 - 0x11fe55
int64_t function_11fe54(int64_t a1) {
    // 0x11fe54
    int64_t result; // 0x11fe54
    return result;
}

// Address range: 0x11fe5a - 0x11fe5b
int64_t function_11fe5a(void) {
    // 0x11fe5a
    int64_t result; // 0x11fe5a
    return result;
}

// Address range: 0x11fe65 - 0x11ff0e
int64_t function_11fe65(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int32_t * v2 = (int32_t *)(a2 - 43); // 0x11fe65
    int64_t v3; // 0x11fe65
    *v2 = *v2 + (int32_t)v3;
    int32_t * v4 = (int32_t *)(a3 - 0x595fa39e); // 0x11fe6a
    int32_t v5 = *v4 - (int32_t)a1; // 0x11fe6a
    *v4 = v5;
    int64_t v6; // 0x11fe65
    if (v5 == 0) {
        v6 = function_11fe5a();
    }
    int64_t v7 = v1;
    *(int32_t *)v7 = *(int32_t *)&v1 + (int32_t)v7;
    char v8 = *(char *)((v6 + 0x4101e8e4 & 0xffffffff) + (8 * v3 | 1)); // 0x11fe85
    char * v9 = (char *)(int64_t)((int32_t)a2 - *(int32_t *)0x76cb3d6a); // 0x11fe8a
    __asm_outsb((int16_t)a5, *v9);
    int64_t result = v3 & 0xffffffff; // 0x11fe8c
    char v10 = v3; // 0x11fe8e
    *(char *)-0x133febfe17908220 = v10;
    if (v8 != (char)a3) {
        // 0x11fe9a
        return result;
    }
    // 0x11ff0c
    *v9 = *v9 & v10;
    return result;
}

// Address range: 0x11ff55 - 0x11ff56
int64_t function_11ff55(void) {
    // 0x11ff55
    int64_t result; // 0x11ff55
    return result;
}

// Address range: 0x11ff89 - 0x12007c
int64_t function_11ff89(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x11ff89
    int64_t v1; // 0x11ff89
    uint64_t v2 = v1;
    int64_t v3 = a2;
    bool v4; // 0x11ff89
    if (!v4) {
        uint32_t v5 = *(int32_t *)(unknown_ffffffffdbd82791() - 0x54e1208c); // 0x11ff92
        __asm_outsb((int16_t)a3, (char)a2);
        __asm_int(-72);
        char * v6 = (char *)(v1 - 108); // 0x11ffa8
        *v6 = *v6 + (char)(v5 / 256);
        int64_t result = unknown_3a1d67b1(); // 0x11ffab
        int32_t * v7 = (int32_t *)(result + 0x15037b2f); // 0x11ffb0
        *v7 = *v7 + (int32_t)a4;
        int32_t * v8 = (int32_t *)((a3 & -256 | 233) + 0x2a550bf2); // 0x11ffb9
        uint32_t v9 = *v8; // 0x11ffb9
        uint32_t v10 = v9 + -45 * (int32_t)a1; // 0x11ffb9
        *v8 = v10;
        char v11 = *(char *)-0x6b75d411; // 0x11ffbf
        *(char *)-0x6b75d411 = v11 - (char)v5 + (char)(v10 < v9);
        return result;
    }
    char * v12 = (char *)v1;
    unsigned char v13 = (char)v1;
    char v14 = v2 / 256; // 0x120009
    char * v15 = (char *)(v1 + 0x46c91307);
    unsigned char v16 = (char)(v1 / 256);
    int64_t v17; // 0x11ff89
    int64_t v18 = v17;
    int64_t v19; // 0x11ff89
    int64_t v20 = v19;
    uint64_t v21 = a3;
    int64_t v22 = a4;
    bool v23; // 0x11ff89
    bool v24 = v23;
    char v25 = *v12 + v13; // 0x120004
    *v12 = v25;
    int64_t * v26 = (int64_t *)v20;
    int64_t v27 = *v26; // 0x120006
    *v12 = v25 + v13;
    char v28 = *(char *)-0x93dddf0; // 0x120009
    char v29 = v28 + v14; // 0x120009
    *(char *)-0x93dddf0 = v29;
    while (v29 < 0 == ((v29 ^ v28) & (v29 ^ v14)) < 0 == (v29 != 0)) {
        // 0x11ffe2
        *v26 = v18;
        int64_t v30 = v20 - (int64_t)&g2; // 0x11ffe2
        unsigned char v31 = *(char *)v22 | (char)v21; // 0x11ffee
        unsigned char v32 = *v15; // 0x11fff0
        *v15 = v32 - v16;
        int64_t v33 = v22 & -256 | (int64_t)((char)v22 - v31 + (char)(v32 < v16)); // 0x11fff6
        *(int16_t *)(v33 - 61) = *(int16_t *)(v30 + 8);
        v18 = v20;
        v20 = v30 + 10;
        v21 = v21 & -256 | (int64_t)v31;
        v22 = v33 - 1;
        v24 = (*(int64_t *)v30 & (int64_t)&g1) != 0;
        v25 = *v12 + v13;
        *v12 = v25;
        v26 = (int64_t *)v20;
        v27 = *v26;
        *v12 = v25 + v13;
        v28 = *(char *)-0x93dddf0;
        v29 = v28 + v14;
        *(char *)-0x93dddf0 = v29;
    }
    // 0x120011
    *v26 = 0x3abfed00;
    int64_t v34 = (v1 + v2) % 256 | v2 & -256; // 0x120016
    __asm_frstor(*(int864_t *)(v34 + 0x13d0010));
    if (v13 < 178) {
        // 0x120025
        int64_t result2; // 0x11ff89
        return result2;
    }
    // 0x120059
    *(int32_t *)v27 = (int32_t)v1;
    int64_t v35 = v24 ? -4 : 4; // 0x120059
    int64_t v36 = v27 + v35; // 0x120059
    *v12 = *v12 + v13;
    char * v37 = (char *)v34; // 0x120060
    *v37 = *v37 + (char)(v21 / 256);
    int32_t * v38 = (int32_t *)v21; // 0x120062
    *v38 = *v38 + (int32_t)v36;
    *(int32_t *)v36 = *(int32_t *)&v3;
    int64_t v39 = v36 + v35; // 0x120064
    *(char *)v39 = v13;
    unknown_6a13e86e(v39 + (v24 ? -1 : 1), v3 + v35);
    int32_t v40 = __asm_in_134(86); // 0x12006f
    *(int64_t *)(v20 - 8) = 0x13d0000;
    int32_t * v41 = (int32_t *)(v18 + 22); // 0x120079
    uint32_t v42 = *v41; // 0x120079
    uint32_t v43 = v40 * (int32_t)v34 % 32; // 0x120079
    if (v43 != 0) {
        *v41 = v42 << 32 - v43 | v42 >> v43;
    }
    // 0x120025
    return 256 * v21 + v22 & 0xff00 | v22 & 0xffff00ff;
}

// Address range: 0x12007d - 0x120089
int64_t function_12007d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12007d
    int64_t v1; // 0x12007d
    unsigned char v2 = (char)v1;
    unsigned char v3 = (char)v1;
    char v4 = v2 - v3; // 0x12007d
    return (256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v2 < v3) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v2 % 16 - v3 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v4) % 2 == 0)) & 0xfffffd00 | v1 & 0xffff00ff) ^ 0x5e3a99ef;
}

// Address range: 0x1200d5 - 0x1200d6
int64_t function_1200d5(void) {
    // 0x1200d5
    int64_t result; // 0x1200d5
    return result;
}

// Address range: 0x1200fa - 0x1200fc
int64_t function_1200fa(int64_t a1) {
    // 0x1200fa
    int64_t result; // 0x1200fa
    return result;
}

// Address range: 0x3ff4d1 - 0x3ff4d2
int64_t function_3ff4d1(void) {
    // 0x3ff4d1
    int64_t result; // 0x3ff4d1
    return result;
}

// Address range: 0x3ff4d2 - 0x3ff4e9
int64_t function_3ff4d2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3ff4d2
    int64_t v1; // 0x3ff4d2
    __asm_outsb((int16_t)a3, (char)v1);
    *(int32_t *)(v1 + 0x628a72bf) = (int32_t)a3;
    int64_t v2; // 0x3ff4d2
    char v3 = *(char *)&v2; // 0x3ff4e2
    bool v4; // 0x3ff4d2
    *(char *)a3 = (char)v4 + (char)(a3 / 256) + v3;
    return function_ffffffffbfaae3f5();
}

// Address range: 0x3ff4f9 - 0x3ff4fc
int64_t function_3ff4f9(void) {
    // 0x3ff4f9
    int64_t result; // 0x3ff4f9
    return result;
}

// Address range: 0x3ff500 - 0x3ff503
int64_t function_3ff500(int64_t a1) {
    // 0x3ff500
    int64_t result; // 0x3ff500
    bool v1; // 0x3ff500
    if (!v1) {
        result = function_3ff49c();
    }
    // 0x3ff502
    return result;
}

// Address range: 0x3ff50a - 0x3ff527
int64_t function_3ff50a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(2 * a4 + 0x3b94c536); // 0x3ff512
    int64_t v2; // 0x3ff50a
    bool v3; // 0x3ff50a
    *v1 = (char)v3 - (char)v2 + *v1;
    return 0x133922f8874fc42;
}

// Address range: 0x3ff535 - 0x3ff68e
int64_t function_3ff535(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, uint64_t a5) {
    // 0x3ff535
    int64_t v1; // 0x3ff535
    int32_t v2 = v1; // 0x3ff580
    bool v3; // 0x3ff535
    int32_t v4 = v3 ? 0x7734651c : 0x7734651b; // 0x3ff580
    if (v4 > v2) {
        // 0x3ff589
        return v2 - v4;
    }
    char * v5 = (char *)(a3 + 49); // 0x3ff598
    char v6 = *v5; // 0x3ff598
    char v7 = a4 / 256; // 0x3ff598
    char v8 = v6 + v7; // 0x3ff598
    *v5 = v8;
    if (a4 == 1 || v8 == 0) {
        char v9 = *(char *)(a5 - 0x39bdfff8); // 0x3ff5a0
        return 256 * (int64_t)(v9 ^ (char)(a5 / 256)) | a5 & -0xff01;
    }
    int64_t v10 = a4 - 2; // 0x3ff5da
    int64_t result; // 0x3ff535
    if (v10 == 0) {
        // 0x3ff5e5
        __asm_outsb((int16_t)a3, *(char *)0xe2f5c86);
        result = 0;
        if ((a5 & 0xffffffff) != 1) {
            int32_t * v11 = (int32_t *)(a1 + 0x70f28f9); // 0x3ff634
            *v11 = 0xe2f5c86;
            result = (int64_t)*v11;
        }
    } else {
        // 0x3ff651
        result = a5;
        if (v8 < 0 != ((v8 ^ v6) & (v8 ^ v7)) < 0) {
            // 0x3ff653
            unknown_46531530();
            return v10 & 0xffffffff;
        }
    }
    // 0x3ff5e8
    return result;
}

// Address range: 0x3ff68f - 0x3ff69b
int64_t function_3ff68f(int64_t a1) {
    // 0x3ff68f
    int64_t v1; // 0x3ff68f
    return *(int64_t *)(int64_t)(*(int32_t *)(v1 - 85) & -0x51893e2);
}

// Address range: 0x3ff6bc - 0x3ff6bf
int64_t function_3ff6bc(int64_t a1) {
    // 0x3ff6bc
    int64_t result; // 0x3ff6bc
    return result;
}

// Address range: 0x3ff6d6 - 0x3ff6dd
int64_t function_3ff6d6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ff6d6
    *(char *)a1 = __asm_insb((int16_t)a3);
    return function_fffffffff69d90d7();
}

// Address range: 0x3ff6fb - 0x3ff6ff
int64_t function_3ff6fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ff6fb
    int64_t result; // 0x3ff6fb
    int64_t v1 = result;
    *(char *)v1 = (char)(v1 ^ a4);
    return result;
}

// Address range: 0x3ff708 - 0x3ff70d
int64_t function_3ff708(void) {
    // 0x3ff708
    return function_7460dc7e();
}

// Address range: 0x3ff722 - 0x3ff724
int64_t function_3ff722(void) {
    // 0x3ff722
    int64_t v1; // 0x3ff722
    return function_3ff774(v1, v1);
}

// Address range: 0x3ff73f - 0x3ff740
int64_t function_3ff73f(void) {
    // 0x3ff73f
    int64_t result; // 0x3ff73f
    return result;
}

// Address range: 0x3ff748 - 0x3ff749
int64_t function_3ff748(void) {
    // 0x3ff748
    int64_t result; // 0x3ff748
    return result;
}

// Address range: 0x3ff763 - 0x3ff76c
int64_t function_3ff763(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x3ff763
    int64_t v1; // 0x3ff763
    bool v2; // 0x3ff763
    if (!v2) {
        v1 = function_3ff748();
    }
    char * v3 = (char *)(256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | v1 & -0xff01 | 512); // 0x3ff768
    *v3 = *v3 + (char)(a3 / 256);
    int64_t v4; // 0x3ff763
    return function_3ff7ac(a1, a2, a3 & -256 | 39, v4, (int64_t)&g3);
}

// Address range: 0x3ff774 - 0x3ff776
int64_t function_3ff774(int64_t a1, int64_t a2) {
    // 0x3ff774
    int64_t result; // 0x3ff774
    return result;
}

// Address range: 0x3ff794 - 0x3ff79e
int64_t function_3ff794(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ff794
    int64_t result; // 0x3ff794
    return result;
}

// Address range: 0x3ff7a5 - 0x3ff7a6
int64_t function_3ff7a5(void) {
    // 0x3ff7a5
    int64_t result; // 0x3ff7a5
    return result;
}

// Address range: 0x3ff7ac - 0x3ff880
int64_t function_3ff7ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ff7ac
    int64_t v1; // 0x3ff7ac
    uint64_t v2 = v1;
    int64_t result; // 0x3ff7ac
    bool v3; // 0x3ff7ac
    if (v3 || v3) {
        result = function_3ff794(a1, a2, a3);
    }
    // 0x3ff7ae
    if (v3) {
        // 0x3ff7bd
        return result;
    }
    // 0x3ff7b0
    *(char *)a1 = (char)a2;
    int64_t v4 = a4 - 1; // 0x3ff7b9
    if (v4 != 0 != v3) {
        int64_t result2 = result & -256 | v2 / 256 % 256; // 0x3ff7bb
        if (v3) {
            result2 = function_3ff73f();
        }
        // 0x3ff7bd
        return result2;
    }
    int64_t v5 = 256 * result & 0xff00 | v2 & -0xff01; // 0x3ff7b0
    int64_t v6 = v3 ? -1 : 1; // 0x3ff7b2
    int64_t result3 = (int64_t)*(int32_t *)0x77159b68767a8b8d; // 0x3ff820
    int64_t v7 = (int64_t)*(int32_t *)(result3 + 82); // 0x3ff82e
    int64_t v8 = -0x178aabfd * v7; // 0x3ff82e
    char * v9 = (char *)(v6 + a1 + v8 + (int64_t)(v8 != -0x178aabfd00000000 * v7 >> 32) & 0xffffffff); // 0x3ff83a
    unsigned char v10 = *v9; // 0x3ff83a
    unsigned char v11 = (char)v4 % 32; // 0x3ff83a
    bool v12 = false; // 0x3ff83a
    if (v11 != 0) {
        char v13 = v10 >> v11 | v10 << 8 - v11; // 0x3ff83a
        *v9 = v13;
        v12 = v13 < 0;
    }
    if ((*(int32_t *)(v5 - 128) & (int32_t)v5) == 0 || v12) {
        // 0x3ff809
        return v8 & 0xffffffff;
    }
    int32_t * v14 = (int32_t *)(a2 - 47 + v6); // 0x3ff83e
    *v14 = *v14 - 0x5455eb33;
    return result3;
}

// Address range: 0x3ff88f - 0x3ff894
int64_t function_3ff88f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ff88f
    int64_t result; // 0x3ff88f
    return result;
}

// Address range: 0x3ff8eb - 0x3ff8f8
int64_t function_3ff8eb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ff8eb
    int64_t v1; // 0x3ff8eb
    return v1 & 0xffffffff ^ 0x54879907;
}

// Address range: 0x3ff92a - 0x3ff92d
int64_t function_3ff92a(void) {
    // 0x3ff92a
    int64_t result; // 0x3ff92a
    return result;
}

// Address range: 0x3ff977 - 0x3ff97d
int64_t function_3ff977(void) {
    // 0x3ff977
    int64_t result; // 0x3ff977
    return result;
}

// Address range: 0x3ff9f2 - 0x3ff9f4
int64_t function_3ff9f2(void) {
    // 0x3ff9f2
    int64_t result; // 0x3ff9f2
    return result;
}

// Address range: 0x3ff9f5 - 0x3ff9ff
int64_t function_3ff9f5(void) {
    // 0x3ff9f5
    int64_t v1; // 0x3ff9f5
    return v1 & -256 | (int64_t)*(char *)-0x4c4282e68348fa9a;
}

// Address range: 0x3ffa1e - 0x3ffa24
int64_t function_3ffa1e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3ffa1e
    *(char *)(a4 - 32) = (char)(a4 / 256);
    int64_t result; // 0x3ffa1e
    return result;
}

// Address range: 0x3ffa55 - 0x3ffa5a
int64_t function_3ffa55(void) {
    // 0x3ffa55
    return function_ffffffff8d787765();
}

// Address range: 0x3ffa78 - 0x3ffa79
int64_t function_3ffa78(void) {
    // 0x3ffa78
    int64_t result; // 0x3ffa78
    return result;
}

// Address range: 0x3ffa7a - 0x3ffa87
int64_t function_3ffa7a(void) {
    // 0x3ffa7a
    int64_t v1; // 0x3ffa7a
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x3ffa8e - 0x3ffa95
int64_t function_3ffa8e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ffa8e
    return function_58aa9dc();
}
