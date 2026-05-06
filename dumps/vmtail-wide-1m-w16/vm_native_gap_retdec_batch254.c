/*
 * Targeted RetDec C for native executable gap queue batch 254.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1668aa-0x166aaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x166aaa-0x166caa rank=- name=- kind=- bytes=- uncovered=-
 *   0x166eaa-0x1670aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x2552c2-0x2554c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2554c2-0x2556c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2556c2-0x2558c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a4975-0x2a4b75 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a4d75-0x2a4f75 rank=- name=- kind=- bytes=- uncovered=-
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
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
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
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

int64_t function_1668aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_166957(int64_t a1);
int64_t function_166a00(void);
int64_t function_166a0f(void);
int64_t function_166a3d(int64_t a1, int64_t a2);
int64_t function_166a74(void);
int64_t function_166a95(void);
int64_t function_166ab3(void);
int64_t function_166b92(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_166bd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_166c1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_166c49(int64_t a1, int64_t a2, int64_t a3);
int64_t function_166c5d(void);
int64_t function_166c7a(int64_t a1, int64_t a2);
int64_t function_166eaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_166ec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_166efc(void);
int64_t function_166f02(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_166f1a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_166fd2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_166ff8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_167053(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2126937();
int64_t function_2552c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25531f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_25537f(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_255418(void);
int64_t function_255468(void);
int64_t function_2554a2(int64_t a1);
int64_t function_2554aa(int64_t a1);
int64_t function_2554d7(int64_t a1);
int64_t function_25550b(void);
int64_t function_255531(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25554f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2555af(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2555d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25570c(void);
int64_t function_25570e(int64_t a1, int64_t a2);
int64_t function_255754(int64_t a1);
int64_t function_25577c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2557b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25580a(int64_t a1);
int64_t function_255824(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_255849(void);
int64_t function_2a4975(int64_t a1, int64_t a2);
int64_t function_2a49d5(void);
int64_t function_2a4af7(int64_t a1);
int64_t function_2a4b1d(void);
int64_t function_2a4b1f(void);
int64_t function_2a4b2e(void);
int64_t function_2a4d75(void);
int64_t function_2a4d82(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a4e69(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_2a4ef2(int64_t a1, int64_t a2);
int64_t function_2a4f05(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a4f3a(int64_t a1);
int64_t function_2b74a8();
int64_t function_7aee8820();
int64_t function_ffffffffafec02ff();
int64_t function_ffffffffb11bf760();
int64_t function_ffffffffb462c209();
int64_t function_ffffffffccf044c9();
int64_t unknown_14be3ed5();
int64_t unknown_16071dcd();
int64_t unknown_16a8d498();
int64_t unknown_28189f61();
int64_t unknown_2a59239d();
int64_t unknown_2b1667cb();
int64_t unknown_3a2b3c73();
int64_t unknown_3a4bf011();
int64_t unknown_44c1609a();
int64_t unknown_47459c2();
int64_t unknown_482c4e86();
int64_t unknown_522143ae();
int64_t unknown_81b588b();
int64_t unknown_ffffffff896bfb7e();
int64_t unknown_ffffffff913ca2e0();
int64_t unknown_ffffffffafc2932f();
int64_t unknown_ffffffffafc2bf3e();
int64_t unknown_ffffffffb649fc8f();
int64_t unknown_ffffffffb72c3580();
int64_t unknown_ffffffffd3cbf902();
int64_t unknown_ffffffffd4b9fd0d();
int64_t unknown_ffffffffdd94961c();
int64_t unknown_ffffffffe2ae903e();

// Address range: 0x1668aa - 0x166937
int64_t function_1668aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1668aa
    int64_t v1; // 0x1668aa
    int32_t * v2 = (int32_t *)(v1 + 0x13d00d7); // 0x1668ad
    int32_t v3 = *v2; // 0x1668ad
    int32_t v4 = 2 * v3; // 0x1668ad
    *v2 = v4;
    uint32_t v5 = (int32_t)v1 >> 31; // 0x1668b4
    int64_t v6 = v1 & -256 | (int64_t)(v5 % 256); // 0x1668b5
    if (v3 < 0 || v4 == 0) {
        // 0x16692f
        return (int64_t)(*(int32_t *)v6 | (int32_t)v6);
    }
    uint64_t v7 = v6 + 58; // 0x1668c0
    __asm_out(103, (int32_t)(v7 % 256 | v1 & 0xffffff00));
    __asm_out_133((int16_t)v5 & -256 | (int16_t)v1 % 256, (char)v7);
    uint32_t result = *(int32_t *)-0x51bbc9cbcf2c9029; // 0x1668cb
    __asm_out_134(55, (char)result);
    return result;
}

// Address range: 0x166957 - 0x16695a
int64_t function_166957(int64_t a1) {
    // 0x166957
    int64_t result; // 0x166957
    return result;
}

// Address range: 0x166a00 - 0x166a03
int64_t function_166a00(void) {
    // 0x166a00
    int64_t result; // 0x166a00
    return result;
}

// Address range: 0x166a0f - 0x166a13
int64_t function_166a0f(void) {
    // 0x166a0f
    int64_t result; // 0x166a0f
    return result;
}

// Address range: 0x166a3d - 0x166a42
int64_t function_166a3d(int64_t a1, int64_t a2) {
    // 0x166a3d
    int64_t result; // 0x166a3d
    *(int32_t *)a2 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x166a74 - 0x166a75
int64_t function_166a74(void) {
    // 0x166a74
    int64_t result; // 0x166a74
    return result;
}

// Address range: 0x166a95 - 0x166a9f
int64_t function_166a95(void) {
    // 0x166a95
    int64_t v1; // 0x166a95
    return v1 & -256 | (int64_t)*(char *)0xf15b1d5c6ac2968;
}

// Address range: 0x166ab3 - 0x166abe
int64_t function_166ab3(void) {
    // 0x166ab3
    int64_t v1; // 0x166ab3
    __asm_out_134(-122, (char)v1);
    unsigned char v2 = (char)v1; // 0x166ab5
    unsigned char v3 = (char)v1; // 0x166ab5
    char v4 = v3 + v2; // 0x166ab5
    return v1 & -0xff01 | 256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v4 < v2) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v3 % 16 + v2 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v4) % 2 == 0)) | 512;
}

// Address range: 0x166b92 - 0x166bd3
int64_t function_166b92(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_16a8d498(); // 0x166b92
    unknown_522143ae();
    int64_t v2 = a4 - 1; // 0x166bad
    int64_t v3 = a1; // 0x166bad
    if (v2 == 0) {
        // 0x166baf
        int64_t v4; // 0x166b92
        int16_t * v5 = (int16_t *)(a1 - 24 + 4 * v4); // 0x166baf
        int16_t v6 = (int32_t)v1 > 0xe3fe178d ? (int16_t)&g1 + 1 : (int16_t)&g1; // 0x166baf
        *v5 = *v5 + v6;
        v3 = (int64_t)(*(int32_t *)0x29dbdb2a | (int32_t)a1);
    }
    // 0x166bba
    *(char *)0x29dbdb2a = *(char *)0x29dbdb2a ^ (char)v2;
    uint64_t v7 = unknown_47459c2(); // 0x166bbc
    *(char *)v3 = (char)v7;
    __asm_out_135(-0x24d6, (int32_t)v7);
    int64_t result = v7 / 2 % 128 | v7 & -256; // 0x166bc8
    int32_t * v8 = (int32_t *)result; // 0x166bca
    *v8 = *v8 + (int32_t)result;
    return result;
}

// Address range: 0x166bd3 - 0x166c06
int64_t function_166bd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x166bd3
    int64_t v1; // 0x166bd3
    int64_t v2 = v1 ^ v1;
    int32_t * v3 = (int32_t *)(4 * a4 + a1); // 0x166bd5
    int32_t v4 = v1; // 0x166bd5
    *v3 = *v3 + v4;
    int16_t v5 = 256 * (int16_t)v2 >> 8; // 0x166bdc
    uint16_t v6 = v5 * v5; // 0x166bdc
    int32_t * v7 = (int32_t *)(a3 - 0x29fe0469); // 0x166bde
    *v7 = *v7 + v4;
    char * v8 = (char *)((v2 & 0xffff0000 | (int64_t)v6) - 0x17fe9e00); // 0x166beb
    *v8 = *v8 + (char)v6;
    int32_t * v9 = (int32_t *)(a4 + 1); // 0x166bf1
    *v9 = *v9 + (int32_t)a3;
    *(char *)(a4 + 0x3a017300 + 4 * v1) = (char)a3;
    return function_ffffffffafec02ff();
}

// Address range: 0x166c1e - 0x166c22
int64_t function_166c1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 14); // 0x166c1e
    int64_t result; // 0x166c1e
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x166c49 - 0x166c54
int64_t function_166c49(int64_t a1, int64_t a2, int64_t a3) {
    // 0x166c49
    int64_t v1; // 0x166c49
    uint64_t v2 = v1;
    char v3 = *(char *)(a2 - 24 + 4 * a1); // 0x166c49
    int64_t result = 256 * (int64_t)(v3 | (char)(v2 / 256)) | v2 & -0xff01; // 0x166c49
    int32_t * v4 = (int32_t *)(result + 0x69d4470a); // 0x166c4d
    *v4 = *v4 + (int32_t)v1;
    return result;
}

// Address range: 0x166c5d - 0x166c5e
int64_t function_166c5d(void) {
    // 0x166c5d
    int64_t result; // 0x166c5d
    return result;
}

// Address range: 0x166c7a - 0x166ca9
int64_t function_166c7a(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)(unknown_2a59239d() - 0x4d0f07dc); // 0x166c9c
    int64_t v2; // 0x166c7a
    *(int32_t *)a2 = (int32_t)v2 + (int32_t)a2 - v1;
    return 0xe890c523;
}

// Address range: 0x166eaa - 0x166eb1
int64_t function_166eaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_hlt(); // 0x166eab
    uint32_t v2 = (int32_t)a4 % 32; // 0x166eac
    if (v2 != 0) {
        int64_t v3; // 0x166eaa
        uint32_t v4 = (int32_t)v3;
        *(int32_t *)v1 = v4 >> 32 - v2 | v4 << v2;
    }
    // 0x166f01
    int64_t v5; // 0x166eaa
    return (int64_t)&v5;
}

// Address range: 0x166ec0 - 0x166ed9
int64_t function_166ec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 58); // 0x166ec0
    bool v2; // 0x166ec0
    *v1 = *v1 + (char)a3 + (char)(bool)v2;
    return function_7aee8820();
}

// Address range: 0x166efc - 0x166f01
int64_t function_166efc(void) {
    // 0x166efc
    return unknown_28189f61();
}

// Address range: 0x166f02 - 0x166f13
int64_t function_166f02(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x166f02
    int64_t result; // 0x166f02
    *(char *)-0x1fc668f6 = *(char *)-0x1fc668f6 + (char)(result / 256);
    int32_t * v1 = (int32_t *)(result + 0x149f508d); // 0x166f0b
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x166f1a - 0x166f66
int64_t function_166f1a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x166f1a
    int64_t v1; // 0x166f1a
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a1; // 0x166f1a
    uint32_t v4 = 2 * v3; // 0x166f1a
    int32_t * v5 = (int32_t *)((int64_t)v4 - 0x462ab14f); // 0x166f1c
    uint32_t v6 = *v5; // 0x166f1c
    *v5 = v6 / 0x400000 | 1024 * (int32_t)(v4 < v3) | 2048 * v6;
    *(char *)0x9c007904 = __asm_insb((int16_t)a3);
    char * v7 = (char *)(a4 + 107); // 0x166f2e
    *v7 = *v7 + (char)(a4 / 256);
    int64_t v8; // 0x166f1a
    *(char *)v8 = *(char *)&v8 - 84;
    int32_t result = *(int32_t *)0x11370149b & (int32_t)((v2 + 72) % 256 | v2 & 0xffffff00); // 0x166f49
    *(char *)0x211f4e61 = *(char *)0x211f4e61 + 4;
    int32_t * v9 = (int32_t *)(int64_t)(result >> 31 & -256 | 10); // 0x166f60
    *v9 = *v9 - 0x9cc35f3;
    return result;
}

// Address range: 0x166fd2 - 0x166fdd
int64_t function_166fd2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x13d0026); // 0x166fd2
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x166fd2
    return result;
}

// Address range: 0x166ff8 - 0x167003
int64_t function_166ff8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x166ff8
    int64_t v1; // 0x166ff8
    return v1 & -0xff01 | (int64_t)&g3;
}

// Address range: 0x167053 - 0x1670a6
int64_t function_167053(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x167053
    int64_t result; // 0x167053
    int64_t v1 = result;
    if (a4 != 1) {
        // 0x1670b5
        return result;
    }
    // 0x167078
    *(int32_t *)v1 = (int32_t)v1 - 1;
    __asm_in(-117);
    int64_t v2 = unknown_81b588b(); // 0x167085
    char * v3 = (char *)v2; // 0x16708d
    unsigned char v4 = *v3; // 0x16708d
    unsigned char v5 = v4 + (char)v2; // 0x16708d
    *v3 = v5;
    int64_t v6; // 0x167053
    uint32_t v7 = *(int32_t *)&v6; // 0x167094
    int64_t v8 = (v2 + 0x5f013d82 + (int64_t)(v5 < v4) & 0xffffffff | 0x100000000 * a3) / (int64_t)v7; // 0x167094
    unsigned char v9 = *(char *)((v8 & 0xffffffff) + 0x60a76629) | (char)v8; // 0x167096
    *(char *)0x9cd10724 = *(char *)0x9cd10724 | v9;
    return v8 & 0xcc188800 | (int64_t)(v9 % 8);
}

// Address range: 0x2552c2 - 0x2552d9
int64_t function_2552c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2552c2
    int64_t v1; // 0x2552c2
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x2552c2
    if (v3 != 0) {
        bool v4; // 0x2552c2
        *(int32_t *)v2 = (int32_t)v4 << 32 - v3 | (int32_t)v2 >> v3 | (int32_t)((v2 & 0xffffffff) << (int64_t)(33 - v3));
    }
    return unknown_2b1667cb();
}

// Address range: 0x25531f - 0x25532c
int64_t function_25531f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x25531f
    int64_t v1; // 0x25531f
    char * v2 = (char *)(v1 + 0x328257e8); // 0x25531f
    *v2 = *v2 + (char)v1;
    return v1 & -256 | (int64_t)__asm_in(-91);
}

// Address range: 0x25537f - 0x25538e
int64_t function_25537f(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x25537f
    int64_t v1; // 0x25537f
    int64_t result = v1;
    *(char *)result = (char)result + (char)(a3 / 256);
    char * v2 = (char *)(v1 + 0x6347dac1); // 0x255385
    *v2 = *v2 + (char)(a4 / 256);
    return result;
}

// Address range: 0x255418 - 0x255419
int64_t function_255418(void) {
    // 0x255418
    int64_t result; // 0x255418
    return result;
}

// Address range: 0x255468 - 0x25547e
int64_t function_255468(void) {
    // 0x255468
    unknown_3a2b3c73();
    // 0x255476
    int64_t v1; // 0x255468
    __asm_outsd(-0x767b, (int32_t)v1);
    return unknown_ffffffff896bfb7e();
}

// Address range: 0x2554a2 - 0x2554aa
int64_t function_2554a2(int64_t a1) {
    // 0x2554a2
    return function_2b74a8();
}

// Address range: 0x2554aa - 0x2554ae
int64_t function_2554aa(int64_t a1) {
    // 0x2554aa
    int64_t result; // 0x2554aa
    return result;
}

// Address range: 0x2554d7 - 0x2554dc
int64_t function_2554d7(int64_t a1) {
    // 0x2554d7
    int64_t result; // 0x2554d7
    return result;
}

// Address range: 0x25550b - 0x255510
int64_t function_25550b(void) {
    // 0x25550b
    return function_ffffffffb462c209();
}

// Address range: 0x255531 - 0x25554e
int64_t function_255531(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffffafc2bf3e(); // 0x255538
    int64_t v2; // 0x255531
    char * v3 = (char *)(v2 + 0x4101e80d); // 0x255544
    *v3 = *v3 + (char)v1;
    return function_2555af(a1, 0xe1e86b49, a3, v1 & 0xffffffff);
}

// Address range: 0x25554f - 0x25556c
int64_t function_25554f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25554f
    int64_t v1; // 0x25554f
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a3 - 57); // 0x255555
    *v3 = *v3 + (int32_t)a2;
    *(int32_t *)((v2 - 256 * a4 & 0xff00 | v2 & -0xff01) + 8) = -0x3ffe17f7;
    return v1 & 0x4fc84c7 | 0xfb037b38;
}

// Address range: 0x2555af - 0x2555cf
int64_t function_2555af(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a4 - 1; // 0x2555af
    bool v2; // 0x2555af
    if (v1 == 0 || v2) {
        // 0x2555b1
        return unknown_16071dcd();
    }
    // 0x2555c1
    *(char *)a1 = (char)a2;
    unsigned char v3 = *(char *)v1; // 0x2555c9
    return (a3 - (int64_t)(v3 > (char)(a3 / 256))) % 256 | a3 & 0xffffff00;
}

// Address range: 0x2555d0 - 0x255709
int64_t function_2555d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2555d0
    int64_t v1; // 0x2555d0
    uint64_t v2 = v1;
    int64_t v3 = a2;
    uint32_t v4 = (int32_t)a4; // 0x2555d0
    uint32_t v5 = v4 % 32; // 0x2555d0
    int64_t v6; // 0x2555d0
    int64_t v7; // 0x2555d0
    if (v5 != 0) {
        uint32_t v8 = (int32_t)v1;
        *(int32_t *)v1 = v8 >> 32 - v5 | v8 << v5;
        v6 = v7;
    }
    unsigned char v9 = *(char *)0x77e2bcd9; // 0x2555d2
    unsigned char v10 = v9 + (char)(v2 / 256); // 0x2555d2
    *(char *)0x77e2bcd9 = v10;
    int64_t result = v6 & 0xffffffff; // 0x2555d8
    char * v11 = (char *)(a1 - 7); // 0x2555d9
    *v11 = *v11 + (char)v2 + (char)(v10 < v9);
    char v12 = __asm_insb((int16_t)a3); // 0x2555dc
    char * v13 = (char *)a1; // 0x2555dc
    *v13 = v12;
    int32_t * v14 = (int32_t *)(a3 - 100); // 0x2555e0
    *v14 = *v14 + (*(int32_t *)(result + (8 * v1 & 0x7fffffff8)) ^ v4);
    uint32_t v15 = *(int32_t *)&v7; // 0x2555ef
    uint32_t v16 = v15 + (int32_t)v6; // 0x2555ef
    *(int32_t *)result = v16;
    if (v16 < v15 || v16 == 0) {
        // 0x255619
        return result;
    }
    // 0x2555f3
    *v13 = *(char *)&v3;
    return *(int64_t *)0x3da860d8;
}

// Address range: 0x25570c - 0x25570d
int64_t function_25570c(void) {
    // 0x25570c
    int64_t result; // 0x25570c
    return result;
}

// Address range: 0x25570e - 0x255711
int64_t function_25570e(int64_t a1, int64_t a2) {
    // 0x25570e
    int64_t result; // 0x25570e
    return result;
}

// Address range: 0x255754 - 0x255757
int64_t function_255754(int64_t a1) {
    // 0x255754
    int64_t result; // 0x255754
    return result;
}

// Address range: 0x25577c - 0x25578b
int64_t function_25577c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x25577c
    bool v1; // 0x25577c
    if (!v1) {
        function_25570c();
    }
    // 0x25577e
    return unknown_3a4bf011(0xe82a0210);
}

// Address range: 0x2557b7 - 0x255806
int64_t function_2557b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = llvm_ctpop_i8((char)a3 & 85); // 0x2557c4
    while (v1 % 2 == 0) {
        // continue -> 0x2557cb
    }
    int64_t v2 = unknown_14be3ed5(); // 0x2557cf
    unsigned char v3 = (char)a4 % 32; // 0x2557db
    int64_t v4; // 0x2557b7
    if (v3 != 0) {
        char * v5 = (char *)(8 * a2 + 0x36c501e8 + (v4 & 0xffffffff)); // 0x2557db
        unsigned char v6 = *v5; // 0x2557db
        *v5 = v6 >> v3 | (char)((int16_t)v6 << (int16_t)(9 - v3)) | (char)((int32_t)v2 > 0x177aa013) << 8 - v3;
    }
    char v7 = __asm_in(124); // 0x2557e2
    int64_t v8 = v2 + 0xe8855fec & 0xffffff00 | (int64_t)v7; // 0x2557e2
    char v9 = *(char *)(v8 + a4); // 0x2557e5
    int64_t v10 = v8 & 0xffffff00 | (int64_t)(v7 - v9 + (char)((v8 & 256) != 0)); // 0x2557e5
    *(int32_t *)a1 = __asm_insd((int16_t)v4);
    __asm_out_135((int16_t)v10, (int32_t)v4);
    uint64_t v11 = unknown_ffffffffd3cbf902(); // 0x2557fc
    char v12 = *(char *)(v10 + v4 & 0xffffffff); // 0x255803
    return 256 * (int64_t)(v12 | (char)(v11 / 256)) | v11 & -0xff01;
}

// Address range: 0x25580a - 0x255810
int64_t function_25580a(int64_t a1) {
    // 0x25580a
    return unknown_3a4bf011(a1);
}

// Address range: 0x255824 - 0x255842
int64_t function_255824(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x255824
    int64_t v1; // 0x255824
    char v2 = v1; // 0x255826
    __asm_out_134(62, v2);
    unknown_ffffffffafc2932f();
    uint32_t v3 = (int32_t)a4;
    uint32_t v4 = v3 % 32; // 0x25582e
    if (v4 != 0) {
        *(int32_t *)a4 = v3 >> 32 - v4 | v3 << v4;
    }
    __asm_in(-20);
    char * v5 = (char *)(4 * v1 + a1); // 0x255835
    *v5 = *v5 + v2;
    return unknown_ffffffffe2ae903e();
}

// Address range: 0x255849 - 0x25584b
int64_t function_255849(void) {
    // 0x255849
    int64_t result; // 0x255849
    return result;
}

// Address range: 0x2a4975 - 0x2a498c
int64_t function_2a4975(int64_t a1, int64_t a2) {
    // 0x2a4975
    int64_t v1; // 0x2a4975
    int64_t v2 = v1 + 0xd911191e; // 0x2a497c
    int32_t * v3 = (int32_t *)(v1 - 0x17e2332a); // 0x2a4986
    *v3 = *v3 - (int32_t)a2 + (int32_t)((int32_t)v2 < 0x14200001);
    return v2 & 0xffffffff;
}

// Address range: 0x2a49d5 - 0x2a49dd
int64_t function_2a49d5(void) {
    // 0x2a49d5
    return function_ffffffffccf044c9();
}

// Address range: 0x2a4af7 - 0x2a4b04
int64_t function_2a4af7(int64_t a1) {
    // 0x2a4af7
    int64_t result; // 0x2a4af7
    char * v1 = (char *)(result + 0x42604092); // 0x2a4af7
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x2a4b1d - 0x2a4b1f
int64_t function_2a4b1d(void) {
    // 0x2a4b1d
    return function_2a4b1d();
}

// Address range: 0x2a4b1f - 0x2a4b20
int64_t function_2a4b1f(void) {
    // 0x2a4b1f
    int64_t result; // 0x2a4b1f
    return result;
}

// Address range: 0x2a4b2e - 0x2a4b35
int64_t function_2a4b2e(void) {
    // 0x2a4b2e
    int64_t v1; // 0x2a4b2e
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return function_ffffffffb11bf760();
}

// Address range: 0x2a4d75 - 0x2a4d7f
int64_t function_2a4d75(void) {
    // 0x2a4d75
    return unknown_ffffffffb72c3580();
}

// Address range: 0x2a4d82 - 0x2a4d9a
int64_t function_2a4d82(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a4d82
    int64_t v1; // 0x2a4d82
    *(char *)a3 = 2 * (char)v1;
    *(int32_t *)(a2 + 87) = (int32_t)v1;
    unknown_ffffffffb649fc8f();
    __asm_wait();
    return unknown_44c1609a();
}

// Address range: 0x2a4e69 - 0x2a4ee6
int64_t function_2a4e69(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x2a4e69
    int64_t v1; // 0x2a4e69
    char v2 = *(char *)(v1 + 4 * v1); // 0x2a4e69
    int32_t * v3 = (int32_t *)(a4 & -256 | (int64_t)(v2 | (char)a4)); // 0x2a4e70
    *v3 = *v3 + (int32_t)(v1 & v1);
    unsigned char v4 = *(char *)(a1 - 0x4b00d06e); // 0x2a4e72
    uint16_t v5 = (int16_t)(v1 + a4 / 256) % 256 * (int16_t)v4; // 0x2a4e72
    int64_t v6 = v1 & -0x10000 | (int64_t)v5; // 0x2a4e72
    int64_t v7; // 0x2a4e69
    int32_t v8 = *(int32_t *)&v7; // 0x2a4e78
    int32_t * v9 = (int32_t *)v6; // 0x2a4e7a
    uint32_t v10 = *v9; // 0x2a4e7a
    uint32_t v11 = v10 + (int32_t)a1; // 0x2a4e7a
    *v9 = v11;
    int64_t v12 = unknown_482c4e86(v6 & 0xffffffff); // 0x2a4e80
    if (v11 < 0) {
        int32_t v13 = *(int32_t *)v12; // 0x2a4eb8
        return (int32_t)(v11 < v10) + (int32_t)v12 + v13;
    }
    if (v11 < v10 || v11 == 0) {
        int32_t * v14 = (int32_t *)(a6 - 0x74fe17f4); // 0x2a4e8b
        *v14 = *v14 + (int32_t)a6;
        __asm_out_133((int16_t)a3, 60);
        *(int64_t *)(int64_t)((int32_t)v1 - v8 + (int32_t)(v5 > 255)) = -0x73c77f6;
        return v12 & -256 | 60;
    }
    uint32_t v15 = *(int32_t *)0x7945600d; // 0x2a4ecc
    uint32_t v16 = v15 + (int32_t)a3; // 0x2a4ecc
    *(int32_t *)0x7945600d = v16;
    *(int32_t *)(a3 + 5) = (int32_t)v7;
    unknown_ffffffff913ca2e0();
    char * v17 = (char *)(v7 - 61); // 0x2a4edf
    *v17 = *v17 + (char)v7;
    uint64_t v18 = a4 & 0xffffff00;
    char * v19 = (char *)(((v12 - (v16 < v15 ? 87 : 86)) % 256 | v12 & 0xffffff00) - 114); // 0x2a4ee3
    *v19 = *v19 + (char)(v18 / 256);
    return v18 | 171;
}

// Address range: 0x2a4ef2 - 0x2a4ef8
int64_t function_2a4ef2(int64_t a1, int64_t a2) {
    // 0x2a4ef2
    bool v1; // 0x2a4ef2
    int64_t v2 = v1 ? -4 : 4; // 0x2a4ef2
    return function_2126937(v2 + a1, v2 + a2);
}

// Address range: 0x2a4f05 - 0x2a4f1e
int64_t function_2a4f05(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a4f05
    unknown_ffffffffd4b9fd0d();
    return unknown_ffffffffdd94961c();
}

// Address range: 0x2a4f3a - 0x2a4f62
int64_t function_2a4f3a(int64_t a1) {
    // 0x2a4f3a
    return a1 & 0xffffffff;
}
