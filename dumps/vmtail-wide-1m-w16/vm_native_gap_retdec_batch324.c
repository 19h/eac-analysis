/*
 * Targeted RetDec C for native executable gap queue batch 324.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xd15c7-0xd17c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd17c7-0xd19c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd19c7-0xd1bc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x16d4aa-0x16d6aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16d6aa-0x16d8aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16d8aa-0x16daaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16daaa-0x16dcaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16dcaa-0x16deaa rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_153d809();
int64_t function_16d493();
int64_t function_16d4aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16d506(int64_t a1);
int64_t function_16d589(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16d59c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_16d655(void);
int64_t function_16d65d(void);
int64_t function_16d66a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_16d751(void);
int64_t function_16d759(void);
int64_t function_16d760(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16d793(void);
int64_t function_16d7a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16d7e0(void);
int64_t function_16d81e(void);
int64_t function_16d822(void);
int64_t function_16d835(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16d8aa(void);
int64_t function_16d8af(int64_t a1);
int64_t function_16d8f5(void);
int64_t function_16d9c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16d9d9(int64_t a1);
int64_t function_16d9dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16d9f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_16da2d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_16da77(int64_t a1);
int64_t function_16da84(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16daa1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_16dacb(void);
int64_t function_16daea(int64_t a1);
int64_t function_16db0a(int64_t a1);
int64_t function_16db26(void);
int64_t function_16db2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16db3c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_16dc2f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_16dc60(int64_t a1, int64_t a2);
int64_t function_16dcf9(void);
int64_t function_16dcfd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_16dd22(void);
int64_t function_16dd42(void);
int64_t function_16dd46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16dd5f(void);
int64_t function_16ddc1(int64_t a1, int64_t a2);
int64_t function_16ddf3(int64_t a1);
int64_t function_16de13(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16de76(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_204cdb30();
int64_t function_29a1d111();
int64_t function_c823b();
int64_t function_d15c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_d16d3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d181e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_d196d(void);
int64_t function_d1972(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_d19d1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d19f9(void);
int64_t function_d1a37(void);
int64_t function_d1a5b(void);
int64_t function_d1b01(int64_t a1);
int64_t function_d1b32(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d1b7e(int64_t a1);
int64_t function_d1b80(int64_t a1);
int64_t function_ffffffff833fd893();
int64_t unknown_153d681();
int64_t unknown_248c70d3();
int64_t unknown_273fd3fc();
int64_t unknown_2cc4dfe9();
int64_t unknown_3dcb9e89();
int64_t unknown_68956bbd();
int64_t unknown_68e114b8();
int64_t unknown_6cf76361();
int64_t unknown_ffffffff9b1971ce();
int64_t unknown_ffffffffb8a0c0f2();
int64_t unknown_ffffffffdf68ff69();

// Address range: 0xd15c7 - 0xd16d3
int64_t function_d15c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xd15c7
    int64_t v1; // 0xd15c7
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(a4 + 92 + 4 * a4); // 0xd15ce
    *v3 = *v3 + (char)a4;
    return function_c823b(a1, a2, a3, a4, a5, v1, 0xd100c);
}

// Address range: 0xd16d3 - 0xd181e
int64_t function_d16d3(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd16d3
    int64_t v1; // bp-48, 0xd16d3
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0xd16d3
    return function_c823b(a1, a2, v2, v2, v2, v2, a1);
}

// Address range: 0xd181e - 0xd196d
int64_t function_d181e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xd181e
    int64_t v1; // bp-56, 0xd181e
    int64_t v2 = (int64_t)&v1; // 0xd18fb
    v1 = v2;
    bool v3; // 0xd181e
    *(int64_t *)(v2 - 8) = 0x4000 * (int64_t)(bool)v3 | 2048 * (int64_t)v3 | 1024 * (int64_t)v3 | 512 * (int64_t)v3 | 256 * (int64_t)v3 | 128 * (int64_t)v3 | 64 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3 | 2;
    int64_t v4 = v2 + 16; // 0xd1907
    int64_t * v5 = (int64_t *)v4; // 0xd1907
    *v5 = v1;
    *(int64_t *)(v2 + 32) = v1;
    v1 = v4;
    v1 = *v5;
    *(int64_t *)(v2 + 8) = v2 + 24;
    return function_c823b(a1, a2, a3, a4, a5, a6, 0x173684e4);
}

// Address range: 0xd196d - 0xd1972
int64_t function_d196d(void) {
    // 0xd196d
    int64_t result; // 0xd196d
    return result;
}

// Address range: 0xd1972 - 0xd1980
int64_t function_d1972(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0xd1972
    int64_t v1; // 0xd1972
    int64_t v2 = v1;
    *(int32_t *)v2 = *(int32_t *)(int32_t *)&g2 + (int32_t)v2;
    int32_t * v3 = (int32_t *)(v1 + 0x46010200); // 0xd1977
    *v3 = *v3 + (int32_t)v1;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0xd19d1 - 0xd19f3
int64_t function_d19d1(int64_t a1, int64_t a2, int64_t a3) {
    unsigned char v1 = *(char *)0xa154ba650fc00cb; // 0xd19d7
    int64_t v2; // 0xd19d1
    unsigned char v3 = *(char *)(v2 - 0x2bfe17ed); // 0xd19e0
    return (v2 + 0xec01e812 & 0xffffff00 | (int64_t)v1) + 0xe1fb0038 + (int64_t)(v3 > (char)v2) & 0xffffffff;
}

// Address range: 0xd19f9 - 0xd19fa
int64_t function_d19f9(void) {
    // 0xd19f9
    int64_t result; // 0xd19f9
    return result;
}

// Address range: 0xd1a37 - 0xd1a38
int64_t function_d1a37(void) {
    // 0xd1a37
    int64_t result; // 0xd1a37
    return result;
}

// Address range: 0xd1a5b - 0xd1a66
int64_t function_d1a5b(void) {
    // 0xd1a5b
    return unknown_6cf76361();
}

// Address range: 0xd1b01 - 0xd1b04
int64_t function_d1b01(int64_t a1) {
    // 0xd1b01
    int64_t result; // 0xd1b01
    return result;
}

// Address range: 0xd1b32 - 0xd1b3d
int64_t function_d1b32(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd1b32
    int64_t v1; // 0xd1b32
    int64_t v2 = v1;
    char * v3 = (char *)(2 * v2 + v1); // 0xd1b32
    *v3 = *v3 + (char)(v1 / 256);
    int64_t v4 = -1 - (int32_t)a1 < (int32_t)a2 ? 166 : 165; // 0xd1b3a
    return (v2 + v4) % 256 | v2 & -256;
}

// Address range: 0xd1b7e - 0xd1b7f
int64_t function_d1b7e(int64_t a1) {
    // 0xd1b7e
    int64_t result; // 0xd1b7e
    return result;
}

// Address range: 0xd1b80 - 0xd1b89
int64_t function_d1b80(int64_t a1) {
    // 0xd1b80
    return unknown_3dcb9e89(a1);
}

// Address range: 0x16d4aa - 0x16d4b6
int64_t function_16d4aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16d4aa
    int64_t result; // 0x16d4aa
    return result;
}

// Address range: 0x16d506 - 0x16d50e
int64_t function_16d506(int64_t a1) {
    // 0x16d506
    int64_t v1; // 0x16d506
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x16d506
    return function_16d493((v2 ? -4 : 4) + a1);
}

// Address range: 0x16d589 - 0x16d59c
int64_t function_16d589(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16d589
    int64_t v1; // 0x16d589
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + (char)(v1 / 256);
    char * v3 = (char *)(v1 - 44); // 0x16d593
    *v3 = *v3 + (char)a3;
    return v1 + 0x3a182885 & 0xffffffff;
}

// Address range: 0x16d59c - 0x16d654
int64_t function_16d59c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x16d59c
    int64_t v1; // 0x16d59c
    int64_t v2 = v1 & 0xffffffff; // 0x16d59c
    int64_t v3 = a2 & 0xffffffff; // 0x16d59c
    int64_t result2 = v3; // 0x16d59c
    char v4 = *(char *)(v3 + 9); // 0x16d59d
    bool v5; // 0x16d59c
    int64_t v6 = 256 * (int64_t)((char)v5 + (char)(a4 / 256) + v4) | a4 & -0xff01; // 0x16d59d
    int64_t v7 = v6 - 1; // 0x16d5a0
    int32_t * v8 = (int32_t *)v7; // 0x16d5ad
    uint32_t v9 = *v8; // 0x16d5ad
    uint32_t v10 = (int32_t)a2 % 32; // 0x16d5ad
    *v8 = ((v9 >> v10) % 2 ^ 1) << v10 | v9 & (-1 << v10) - 1;
    if (v7 != 0) {
        int64_t result = unknown_68e114b8(); // 0x16d5b2
        char * v11 = (char *)result; // 0x16d5b7
        *v11 = *v11 + (char)v1;
        *(char *)v2 = *(char *)&result2 + (char)(v1 / 256);
        return result;
    }
    char v12 = *(char *)(v1 + 0x1582ef00) & (char)a3; // 0x16d5a7
    int64_t v13 = (int64_t)*(int32_t *)&v2; // 0x16d5bc
    int64_t v14 = -0x97dfec3 * v13; // 0x16d5bc
    int64_t v15 = v14 & 0xffffffff; // 0x16d5bc
    result2 = v15;
    int64_t v16 = 0x3ad9e500; // bp-8, 0x16d5c4
    uint32_t v17 = (int32_t)v14; // 0x16d5c9
    *(int32_t *)0x7ffb24b24ca55367 = v17;
    if (v12 != 0 && v14 == -0x97dfec300000000 * v13 >> 32) {
        char * v18 = (char *)(v15 + 0x367f034d); // 0x16d5e2
        *v18 = *v18 - (v17 < 0x59d78401 ? 60 : 59);
        unsigned char v19 = *(char *)0x77cd3cf1; // 0x16d5e9
        unsigned char v20 = v19 + (char)a1; // 0x16d5e9
        *(char *)0x77cd3cf1 = v20;
        char * v21 = (char *)((result2 & 0xffffffff) - 95); // 0x16d5f1
        *v21 = *v21 + (char)v1 + (char)(v20 < v19);
        return v1 & 0xffffffff;
    }
    if (v12 < 0 != v14 != -0x97dfec300000000 * v13 >> 32) {
        char * v22 = (char *)(v6 + 8); // 0x16d60a
        *v22 = *v22 + (char)v1;
        return result2;
    }
    int32_t * v23 = (int32_t *)(a3 & -256 | (int64_t)v12); // 0x16d64e
    *v23 = *v23 ^ (int32_t)(int64_t)&v16;
    int64_t v24 = result2;
    return (v24 + 99) % 256 | v24 & -256;
}

// Address range: 0x16d655 - 0x16d657
int64_t function_16d655(void) {
    // 0x16d655
    int64_t result; // 0x16d655
    return result;
}

// Address range: 0x16d65d - 0x16d660
int64_t function_16d65d(void) {
    // 0x16d65d
    int64_t result; // 0x16d65d
    return result;
}

// Address range: 0x16d66a - 0x16d6e1
int64_t function_16d66a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x16d66a
    __asm_in((int16_t)a3);
    int64_t v1; // 0x16d66a
    int64_t v2 = unknown_153d681() & -256 | v1 % 256; // 0x16d684
    char * v3 = (char *)a3; // 0x16d685
    *v3 = (char)(v1 | v1 / 256);
    bool v4; // 0x16d66a
    int64_t v5 = 0x100000000 * ((v4 ? 0xffffffff : 1) + a2) >> 32; // 0x16d687
    char * v6 = (char *)(v1 + 96); // 0x16d68c
    char v7 = *v6; // 0x16d68c
    *v6 = v7 + (char)v1 + (char)(-96 * v5 != -0x6000000000 * v5 >> 32);
    int64_t v8; // 0x16d66a
    *v3 = *(char *)&v8 | (char)(a3 / 256);
    int32_t v9 = *(int32_t *)v2; // 0x16d694
    int32_t v10 = *(int32_t *)((v1 & 0xffffffff) + 109); // 0x16d6a4
    int64_t v11 = __readgsdword(4 * (int64_t)((int32_t)v2 - v9 + v10) + 0x13d00bf); // 0x16d6a7
    uint64_t v12 = -9 * v11; // 0x16d6a7
    if (v12 == -0x900000000 * v11 >> 32) {
        // 0x16d6c8
        return v12 & 0xffffff00 | (int64_t)*(char *)(v12 % 256 + v1);
    }
    // 0x16d6b2
    return (v12 + 24 + (int64_t)(v12 != -0x900000000 * v11 >> 32)) % 256 | v12 & 0xffffff00;
}

// Address range: 0x16d751 - 0x16d756
int64_t function_16d751(void) {
    // 0x16d751
    return function_ffffffff833fd893();
}

// Address range: 0x16d759 - 0x16d75e
int64_t function_16d759(void) {
    // 0x16d759
    return function_29a1d111();
}

// Address range: 0x16d760 - 0x16d779
int64_t function_16d760(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffffdf68ff69(); // 0x16d760
    uint32_t v2 = (int32_t)a4 % 32; // 0x16d765
    if (v2 != 0) {
        int32_t * v3 = (int32_t *)v1; // 0x16d765
        uint32_t v4 = *v3; // 0x16d765
        *v3 = v4 >> 32 - v2 | v4 << v2;
    }
    int64_t v5; // 0x16d760
    *(char *)0x7ed0876e = *(char *)0x7ed0876e + (char)(v5 / 256);
    int32_t * v6 = (int32_t *)(v1 + 3); // 0x16d76d
    *v6 = *v6 - 47;
    char v7 = *(char *)(v5 + 2 * v5); // 0x16d772
    return a3 & 0xffffff00 | (int64_t)((char)a3 + 68 + v7);
}

// Address range: 0x16d793 - 0x16d798
int64_t function_16d793(void) {
    // 0x16d793
    return function_204cdb30();
}

// Address range: 0x16d7a0 - 0x16d7c0
int64_t function_16d7a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16d7a0
    int64_t result; // 0x16d7a0
    char * v1 = (char *)((result - a1 & 0xffffffff) + result); // 0x16d7b4
    *v1 = *v1 & (char)a3;
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x16d7e0 - 0x16d7e5
int64_t function_16d7e0(void) {
    // 0x16d7e0
    return function_153d809();
}

// Address range: 0x16d81e - 0x16d821
int64_t function_16d81e(void) {
    // 0x16d81e
    int64_t result; // 0x16d81e
    return result;
}

// Address range: 0x16d822 - 0x16d823
int64_t function_16d822(void) {
    // 0x16d822
    int64_t result; // 0x16d822
    return result;
}

// Address range: 0x16d835 - 0x16d88c
int64_t function_16d835(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16d835
    bool v1; // 0x16d835
    if (!v1) {
        int64_t v2 = __asm_sti(); // 0x16d87f
        *(int32_t *)a1 = (int32_t)a2;
        return v2 & -0xff01 | (int64_t)&g1;
    }
    if (a4 != 1) {
        function_16d822();
    }
    // 0x16d839
    int64_t v3; // 0x16d835
    return (int64_t)&v3;
}

// Address range: 0x16d8aa - 0x16d8ab
int64_t function_16d8aa(void) {
    // 0x16d8aa
    int64_t result; // 0x16d8aa
    return result;
}

// Address range: 0x16d8af - 0x16d8b2
int64_t function_16d8af(int64_t a1) {
    // 0x16d8af
    int64_t result; // 0x16d8af
    __asm_out(63, (int32_t)result);
    return result;
}

// Address range: 0x16d8f5 - 0x16d8f8
int64_t function_16d8f5(void) {
    // 0x16d8f5
    int64_t result; // 0x16d8f5
    return result;
}

// Address range: 0x16d9c8 - 0x16d9d9
int64_t function_16d9c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffff9b1971ce(); // 0x16d9c8
    int64_t v1; // 0x16d9c8
    bool v2; // 0x16d9c8
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)a3 + (int32_t)v2;
    char v3 = *(char *)-0xa44c02a; // 0x16d9cf
    *(char *)-0xa44c02a = v3 + (char)((uint64_t)v1 / 256);
    int64_t v4; // 0x16d9c8
    __asm_outsb((int16_t)a3, *(char *)&v4);
    return result;
}

// Address range: 0x16d9d9 - 0x16d9dd
int64_t function_16d9d9(int64_t a1) {
    // 0x16d9d9
    int64_t v1; // 0x16d9d9
    return function_16d9f2(a1, v1, v1, v1, v1, v1);
}

// Address range: 0x16d9dd - 0x16d9f1
int64_t function_16d9dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x16d9dd
    int64_t v1; // 0x16d9dd
    uint64_t v2 = v1;
    char v3 = *(char *)(a1 + 1 + v1); // 0x16d9e5
    return v2 + v1 / 256 & 219 | v2 & 0xb30000 | 256 * (int64_t)(v3 ^ (char)(v2 / 256)) & 0xa500;
}

// Address range: 0x16d9f2 - 0x16da0f
int64_t function_16d9f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x16d9f2
    int64_t v1; // 0x16d9f2
    uint64_t v2 = v1;
    uint64_t v3 = v2 / 256; // 0x16d9f2
    *(char *)0x1edbda04 = (char)((uint64_t)v1 / 256);
    bool v4; // 0x16d9f2
    char * v5 = (char *)(((v2 + 194 - v3 + (int64_t)v4) % 256 | v2 & -256) + 0x73f6f5a2); // 0x16da06
    *v5 = *v5 & (char)v3;
    __asm_iretd();
    return 0x10000 * (int32_t)a1 >> 16;
}

// Address range: 0x16da2d - 0x16da34
int64_t function_16da2d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x16da2d
    int64_t result; // 0x16da2d
    bool v1; // 0x16da2d
    *(char *)result = (char)v1;
    return result;
}

// Address range: 0x16da77 - 0x16da78
int64_t function_16da77(int64_t a1) {
    // 0x16da77
    int64_t result; // 0x16da77
    return result;
}

// Address range: 0x16da84 - 0x16da8d
int64_t function_16da84(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x16da84
    int64_t result; // 0x16da84
    int32_t * v1 = (int32_t *)(result - 0xa41c539); // 0x16da84
    *v1 = *v1 & (int32_t)a4;
    int64_t v2; // 0x16da84
    *(char *)a3 = *(char *)&v2 + (char)(result / 256);
    return result;
}

// Address range: 0x16daa1 - 0x16daa6
int64_t function_16daa1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x16daa1
    int64_t result; // 0x16daa1
    *(int32_t *)a2 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x16dacb - 0x16dacd
int64_t function_16dacb(void) {
    // 0x16dacb
    int64_t v1; // 0x16dacb
    return function_16db2b(v1, v1, v1, v1);
}

// Address range: 0x16daea - 0x16daf2
int64_t function_16daea(int64_t a1) {
    // 0x16daea
    int64_t v1; // 0x16daea
    unsigned char v2 = (char)v1;
    *(char *)v1 = v2 / 128 | 2 * v2;
    return unknown_ffffffffb8a0c0f2(a1);
}

// Address range: 0x16db0a - 0x16db19
int64_t function_16db0a(int64_t a1) {
    // 0x16db0a
    int64_t v1; // 0x16db0a
    char * v2 = (char *)(2 * v1); // 0x16db0a
    unsigned char v3 = *v2; // 0x16db0a
    *v2 = v3 / 2 | 128 * v3;
    *(char *)-0x18111eeb = *(char *)-0x18111eeb + (char)(v1 / 256);
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x16db26 - 0x16db27
int64_t function_16db26(void) {
    // 0x16db26
    int64_t result; // 0x16db26
    return result;
}

// Address range: 0x16db2b - 0x16db3b
int64_t function_16db2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16db2b
    int64_t v1; // 0x16db2b
    uint64_t result = v1;
    char * v2 = (char *)(a1 + 0x3d000004); // 0x16db2b
    *v2 = *v2 + (char)(result / 256);
    int32_t * v3 = (int32_t *)(a4 + 0xaf07a5b); // 0x16db31
    uint32_t v4 = (int32_t)a4; // 0x16db31
    *v3 = *v3 + v4;
    uint32_t v5 = v4 % 32; // 0x16db37
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)(a3 - 48); // 0x16db37
        *v6 = *v6 >> v5;
    }
    __asm_out_133((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x16db3c - 0x16dbf7
int64_t function_16db3c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x16db3c
    *(char *)a3 = (char)a3 - 24;
    *(int32_t *)0x17d6a327 = *(int32_t *)0x17d6a327 + (int32_t)a3;
    int64_t result; // 0x16db3c
    if (a4 == 1) {
        int32_t * v1 = (int32_t *)(a2 + 32); // 0x16db47
        *v1 = 2 * *v1;
        return result;
    }
    // 0x16dbbd
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    __asm_int(-30);
    if ((result & 0x4000) != 0) {
        // 0x16dbad
        return unknown_68956bbd();
    }
    // 0x16dbc5
    *(int32_t *)-0x5f4dd01c = *(int32_t *)-0x5f4dd01c + (int32_t)result;
    int64_t v2 = unknown_248c70d3(); // 0x16dbcd
    char v3 = ((char)(a3 / 256) ^ -8) < 104 ? 20 : 19; // 0x16dbd2
    *(char *)-0xfffd7e6e7fe172a = (char)v2 - v3;
    bool v4; // 0x16db3c
    unknown_2cc4dfe9((v4 ? -4 : 4) + a1);
    int32_t v5; // 0x16db3c
    *(int32_t *)(result - 27) = (int32_t)(int64_t)&v5;
    unsigned char v6 = *(char *)-0x172279b0; // 0x16dbeb
    *(char *)-0x172279b0 = v6 / 128 | 2 * v6;
    return unknown_273fd3fc();
}

// Address range: 0x16dc2f - 0x16dc38
int64_t function_16dc2f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x16dc2f
    int64_t result; // 0x16dc2f
    int32_t * v1 = (int32_t *)((result & 0xffffffff & result) - 0x48f29242); // 0x16dc31
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x16dc60 - 0x16dc64
int64_t function_16dc60(int64_t a1, int64_t a2) {
    // 0x16dc60
    int64_t result; // 0x16dc60
    return result;
}

// Address range: 0x16dcf9 - 0x16dcfa
int64_t function_16dcf9(void) {
    // 0x16dcf9
    int64_t result; // 0x16dcf9
    return result;
}

// Address range: 0x16dcfd - 0x16dd03
int64_t function_16dcfd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x16dcfd
    int64_t result; // 0x16dcfd
    return result;
}

// Address range: 0x16dd22 - 0x16dd23
int64_t function_16dd22(void) {
    // 0x16dd22
    int64_t result; // 0x16dd22
    return result;
}

// Address range: 0x16dd42 - 0x16dd45
int64_t function_16dd42(void) {
    // 0x16dd42
    int64_t result; // 0x16dd42
    return result;
}

// Address range: 0x16dd46 - 0x16dd5f
int64_t function_16dd46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x16dd46
    bool v1; // 0x16dd46
    if (!v1) {
        function_16dd22();
    }
    // 0x16dd49
    *(char *)(a2 + 28) = 0;
    return a4 & 0xffffffff;
}

// Address range: 0x16dd5f - 0x16dd64
int64_t function_16dd5f(void) {
    // 0x16dd5f
    int64_t result; // 0x16dd5f
    bool v1; // 0x16dd5f
    if (v1) {
        result = function_16dcf9();
    }
    // 0x16dd61
    return result;
}

// Address range: 0x16ddc1 - 0x16ddc6
int64_t function_16ddc1(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a2 - 16); // 0x16ddc1
    bool v2; // 0x16ddc1
    *v1 = *v1 - (v2 ? -44 : -45);
    int64_t result; // 0x16ddc1
    return result;
}

// Address range: 0x16ddf3 - 0x16ddf6
int64_t function_16ddf3(int64_t a1) {
    // 0x16ddf3
    int64_t result; // 0x16ddf3
    return result;
}

// Address range: 0x16de13 - 0x16de16
int64_t function_16de13(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16de13
    int64_t v1; // 0x16de13
    return v1 | 256 * a3 & 0xff00;
}

// Address range: 0x16de76 - 0x16de80
int64_t function_16de76(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16de76
    int64_t result; // 0x16de76
    return result;
}
