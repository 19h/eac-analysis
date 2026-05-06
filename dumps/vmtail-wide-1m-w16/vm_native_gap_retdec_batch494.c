/*
 * Targeted RetDec C for native executable gap queue batch 494.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1b87ce-0x1b89ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b8bce-0x1b8dce rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b1975-0x2b1b75 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b1b75-0x2b1d75 rank=- name=- kind=- bytes=- uncovered=-
 *   0x463e34-0x464034 rank=- name=- kind=- bytes=- uncovered=-
 *   0x464234-0x464434 rank=- name=- kind=- bytes=- uncovered=-
 *   0x464434-0x464634 rank=- name=- kind=- bytes=- uncovered=-
 *   0x464634-0x464834 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1b87ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1b8808(int64_t a1);
int64_t function_1b8823(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1b8856(void);
int64_t function_1b88a9(int64_t a1);
int64_t function_1b88f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1b8970(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1b89a5(int64_t a1);
int64_t function_1b8bce(void);
int64_t function_1b8bef(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1b8c1a(void);
int64_t function_1b8c22(int64_t a1);
int64_t function_1b8c3e(int64_t a1);
int64_t function_1b8cbc(int64_t a1);
int64_t function_1b8cd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1b8d01(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1b8d9e(void);
int64_t function_1f6e6760();
int64_t function_2b1975(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2b1998(void);
int64_t function_2b199f(void);
int64_t function_2b19a9(void);
int64_t function_2b19af(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b19c9(int64_t a1);
int64_t function_2b19e9(void);
int64_t function_2b19f7(int64_t a1);
int64_t function_2b1a0e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2b1af5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b1b28(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2b1b44(void);
int64_t function_2b1ba7(int64_t a1);
int64_t function_2b1bbf(void);
int64_t function_2b1bc9(void);
int64_t function_2b1c1c(void);
int64_t function_2b1c44(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b1c74(void);
int64_t function_2b1cd8(void);
int64_t function_2b1cdb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b1ce9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_463e34(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_463ef0(void);
int64_t function_463ef6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_463f19(void);
int64_t function_463f2d(void);
int64_t function_463f30(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_464234(int64_t a1, int64_t a2);
int64_t function_464258(int64_t a1);
int64_t function_46429c(void);
int64_t function_4642f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_464351(void);
int64_t function_464366(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_464411(void);
int64_t function_464416(void);
int64_t function_46442a(void);
int64_t function_464461(void);
int64_t function_4644ad(void);
int64_t function_464521(int64_t a1);
int64_t function_464540(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_464600(void);
int64_t function_464614(void);
int64_t function_464628(int64_t a1, int64_t a2);
int64_t function_464656(int64_t a1);
int64_t function_46466e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_464672(void);
int64_t function_46469f(void);
int64_t function_4646c8(void);
int64_t function_4646f7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_46471c(void);
int64_t function_464786(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ffffffff90a9e66f();
int64_t function_ffffffffadb84315();
int64_t function_ffffffffca624d94();
int64_t function_ffffffffd66e0eb2();
int64_t function_ffffffffe8ccf982();
int64_t unknown_10e809d5();
int64_t unknown_2969a0b();
int64_t unknown_392e7039();
int64_t unknown_3a484e2e();
int64_t unknown_3d2d04ef();
int64_t unknown_69d1fabb();
int64_t unknown_831030d();
int64_t unknown_df1280();
int64_t unknown_ffffffffb230597f();
int64_t unknown_ffffffffbb08d2f9();
int64_t unknown_ffffffffc4b95e22();
int64_t unknown_ffffffffd7613717();
int64_t unknown_ffffffffed1258b8();
int64_t unknown_fffffffff821750c();

// Address range: 0x1b87ce - 0x1b87d7
int64_t function_1b87ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1b87ce
    unknown_10e809d5(a1, a2, a3, a4);
    return a4 & 0xffffffff;
}

// Address range: 0x1b8808 - 0x1b880b
int64_t function_1b8808(int64_t a1) {
    // 0x1b8808
    int64_t result; // 0x1b8808
    return result;
}

// Address range: 0x1b8823 - 0x1b8828
int64_t function_1b8823(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1b8823
    int64_t result; // 0x1b8823
    return result;
}

// Address range: 0x1b8856 - 0x1b8857
int64_t function_1b8856(void) {
    // 0x1b8856
    int64_t result; // 0x1b8856
    return result;
}

// Address range: 0x1b88a9 - 0x1b88bd
int64_t function_1b88a9(int64_t a1) {
    // 0x1b88a9
    int64_t v1; // 0x1b88a9
    int32_t v2 = v1 & 0xffffff00 | (int64_t)*(char *)0x1e8010744b41c0a; // 0x1b88b2
    int32_t v3 = v2 + 0x63081087; // 0x1b88b2
    if (v3 < 0 == (v3 & (v2 ^ -0x80000000)) < 0) {
        function_1b8856();
    }
    // 0x1b88b9
    return __asm_wait(v1, v1, v1);
}

// Address range: 0x1b88f0 - 0x1b8911
int64_t function_1b88f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1b88f0
    int64_t v1; // 0x1b88f0
    *(int32_t *)0x68688b01e8500127 = (int32_t)v1;
    bool v2; // 0x1b88f0
    if (v2) {
        // 0x1b88fb
        return function_ffffffffe8ccf982();
    }
    int32_t * v3 = (int32_t *)(v1 - 74); // 0x1b8909
    *v3 = *v3 + (int32_t)a2;
    return __asm_int3();
}

// Address range: 0x1b8970 - 0x1b8974
int64_t function_1b8970(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1b8970
    int64_t result; // 0x1b8970
    return result;
}

// Address range: 0x1b89a5 - 0x1b89a8
int64_t function_1b89a5(int64_t a1) {
    // 0x1b89a5
    int64_t result; // 0x1b89a5
    return result;
}

// Address range: 0x1b8bce - 0x1b8bcf
int64_t function_1b8bce(void) {
    // 0x1b8bce
    int64_t result; // 0x1b8bce
    return result;
}

// Address range: 0x1b8bef - 0x1b8c03
int64_t function_1b8bef(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1b8bef
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result = unknown_ffffffffbb08d2f9(); // 0x1b8bf3
    int32_t * v1 = (int32_t *)(result - 0x26939f98); // 0x1b8bfa
    int64_t v2; // 0x1b8bef
    bool v3; // 0x1b8bef
    *v1 = (int32_t)v3 - (int32_t)v2 + *v1;
    return result;
}

// Address range: 0x1b8c1a - 0x1b8c1b
int64_t function_1b8c1a(void) {
    // 0x1b8c1a
    int64_t result; // 0x1b8c1a
    return result;
}

// Address range: 0x1b8c22 - 0x1b8c23
int64_t function_1b8c22(int64_t a1) {
    // 0x1b8c22
    int64_t result; // 0x1b8c22
    return result;
}

// Address range: 0x1b8c3e - 0x1b8c55
int64_t function_1b8c3e(int64_t a1) {
    // 0x1b8c3e
    __asm_int(-1);
    int64_t result; // 0x1b8c3e
    bool v1; // 0x1b8c3e
    if (v1) {
        result = function_1b8c1a();
    }
    char * v2 = (char *)(result + 8); // 0x1b8c47
    *v2 = *v2 - 17;
    char v3 = *(char *)-0x132f84ae; // 0x1b8c4b
    int64_t v4; // 0x1b8c3e
    *(char *)-0x132f84ae = v3 + (char)((uint64_t)v4 / 256);
    return result;
}

// Address range: 0x1b8cbc - 0x1b8cbd
int64_t function_1b8cbc(int64_t a1) {
    // 0x1b8cbc
    int64_t result; // 0x1b8cbc
    return result;
}

// Address range: 0x1b8cd0 - 0x1b8cd3
int64_t function_1b8cd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1b8cd0
    int64_t v1; // 0x1b8cd0
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x1b8d01 - 0x1b8d66
int64_t function_1b8d01(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1b8d01
    *(char *)a3 = (char)a3 - (char)(a3 / 256);
    unknown_fffffffff821750c();
    int16_t v1 = a3; // 0x1b8d0b
    __asm_in_133(v1);
    unknown_392e7039();
    __asm_out(v1, (int32_t)unknown_ffffffffd7613717());
    int64_t result = unknown_ffffffffc4b95e22(); // 0x1b8d1c
    if (a4 != 0) {
        // 0x1b8d23
        return result;
    }
    // 0x1b8d5f
    *(char *)0x761f1e3c = 2 * *(char *)0x761f1e3c;
    return __asm_int1(a1, a2, a3, 0);
}

// Address range: 0x1b8d9e - 0x1b8d9f
int64_t function_1b8d9e(void) {
    // 0x1b8d9e
    int64_t result; // 0x1b8d9e
    return result;
}

// Address range: 0x2b1975 - 0x2b1985
int64_t function_2b1975(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a5 - 100); // 0x2b1975
    *v1 = *v1 + (int32_t)a5;
    return unknown_ffffffffb230597f(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x2b1998 - 0x2b199d
int64_t function_2b1998(void) {
    // 0x2b1998
    int64_t v1; // 0x2b1998
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)v1;
    return result;
}

// Address range: 0x2b199f - 0x2b19a1
int64_t function_2b199f(void) {
    // 0x2b199f
    int64_t v1; // 0x2b199f
    return function_2b19af(v1, v1, v1, v1);
}

// Address range: 0x2b19a9 - 0x2b19ac
int64_t function_2b19a9(void) {
    // 0x2b19a9
    int64_t result; // 0x2b19a9
    return result;
}

// Address range: 0x2b19af - 0x2b19bc
int64_t function_2b19af(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b19af
    int64_t v1; // 0x2b19af
    __asm_out_134((int16_t)a3, (char)v1);
    *(char *)a4 = (char)a4;
    return unknown_69d1fabb();
}

// Address range: 0x2b19c9 - 0x2b19d2
int64_t function_2b19c9(int64_t a1) {
    char * v1 = (char *)(a1 - 0x5671fddd); // 0x2b19c9
    bool v2; // 0x2b19c9
    *v1 = *v1 + 68 + (char)v2;
    int64_t result; // 0x2b19c9
    return result;
}

// Address range: 0x2b19e9 - 0x2b19ea
int64_t function_2b19e9(void) {
    // 0x2b19e9
    int64_t result; // 0x2b19e9
    return result;
}

// Address range: 0x2b19f7 - 0x2b1a0d
int64_t function_2b19f7(int64_t a1) {
    // 0x2b19f7
    int64_t v1; // 0x2b19f7
    int32_t * v2 = (int32_t *)(a1 + 0xa68f6ab + 2 * v1); // 0x2b1a01
    *v2 = *v2 - 0x17608100;
    return unknown_df1280();
}

// Address range: 0x2b1a0e - 0x2b1af4
int64_t function_2b1a0e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2b1a0e
    bool v1; // 0x2b1a0e
    bool v2 = v1;
    *(int32_t *)-0x17a5c8e7 = *(int32_t *)-0x17a5c8e7 + (int32_t)a1;
    int64_t v3; // 0x2b1a0e
    uint32_t v4 = (int32_t)v3;
    uint32_t v5 = v4 + (int32_t)v3 + ((int32_t)v3 | 232); // 0x2b1a18
    *(int32_t *)a3 = v5;
    char v6 = a3 / 256; // 0x2b1a1b
    int64_t v7; // 0x2b1a0e
    *(char *)a3 = (char)(v5 < v4) + v6 + *(char *)&v7;
    int64_t v8 = v2 ? -1 : 1; // 0x2b1a20
    int64_t v9 = v8 + a1; // 0x2b1a20
    int64_t v10 = 2 * v8 + a2; // 0x2b1a21
    __asm_int1(v9, v10, a3, a4);
    char v11 = *(char *)(8 * a6 - 0x563255aa + v10); // 0x2b1a26
    int64_t v12 = a3 & -256 | (int64_t)((char)a3 - v11); // 0x2b1a26
    v7 = v12;
    char * v13 = (char *)v12; // 0x2b1aae
    *v13 = *v13 + v6;
    *(int32_t *)v9 = *(int32_t *)v10;
    int64_t result = unknown_ffffffffed1258b8(v9 + (v2 ? -5 : 5), v10 + (v2 ? -4 : 4)); // 0x2b1ab2
    char v14 = *(char *)-0x5bd2fc66; // 0x2b1aba
    *(char *)-0x5bd2fc66 = v14 & (char)(((int32_t)result >> 31) / 256);
    return result;
}

// Address range: 0x2b1af5 - 0x2b1b1b
int64_t function_2b1af5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b1af5
    unknown_831030d();
    int32_t * v1 = (int32_t *)(a4 + 1); // 0x2b1b13
    bool v2; // 0x2b1af5
    *v1 = *v1 + (int32_t)((v2 ? 0xffffffff : 1) + a2);
    return function_ffffffffadb84315();
}

// Address range: 0x2b1b28 - 0x2b1b37
int64_t function_2b1b28(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t result = unknown_3a484e2e(a1, a2, a3, a4); // 0x2b1b28
    int64_t v1; // 0x2b1b28
    char * v2 = (char *)(4 * a4 - 0x79fe171f + v1); // 0x2b1b2d
    *v2 = *v2 + (char)(a3 / 256);
    return result;
}

// Address range: 0x2b1b44 - 0x2b1b47
int64_t function_2b1b44(void) {
    // 0x2b1b44
    int64_t result; // 0x2b1b44
    return result;
}

// Address range: 0x2b1ba7 - 0x2b1baa
int64_t function_2b1ba7(int64_t a1) {
    // 0x2b1ba7
    int64_t result; // 0x2b1ba7
    return result;
}

// Address range: 0x2b1bbf - 0x2b1bc0
int64_t function_2b1bbf(void) {
    // 0x2b1bbf
    int64_t result; // 0x2b1bbf
    return result;
}

// Address range: 0x2b1bc9 - 0x2b1bca
int64_t function_2b1bc9(void) {
    // 0x2b1bc9
    int64_t result; // 0x2b1bc9
    return result;
}

// Address range: 0x2b1c1c - 0x2b1c27
int64_t function_2b1c1c(void) {
    // 0x2b1c1c
    return function_2b1bbf();
}

// Address range: 0x2b1c44 - 0x2b1c49
int64_t function_2b1c44(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x2b1c44
    if (v1 != 0) {
        int64_t v2; // 0x2b1c44
        uint32_t v3 = (int32_t)v2;
        *(int32_t *)v2 = v3 >> 32 - v1 | v3 << v1;
    }
    return function_2b1bc9();
}

// Address range: 0x2b1c74 - 0x2b1c77
int64_t function_2b1c74(void) {
    // 0x2b1c74
    int64_t result; // 0x2b1c74
    return result;
}

// Address range: 0x2b1cd8 - 0x2b1cda
int64_t function_2b1cd8(void) {
    // 0x2b1cd8
    int64_t v1; // 0x2b1cd8
    return function_2b1ce9(v1, v1, v1, v1);
}

// Address range: 0x2b1cdb - 0x2b1ce9
int64_t function_2b1cdb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x5301e853); // 0x2b1cdb
    *v1 = *v1 ^ 15;
    return a4 + 0x8dfa6836 & 0xffffffff;
}

// Address range: 0x2b1ce9 - 0x2b1d2b
int64_t function_2b1ce9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b1ce9
    unknown_3d2d04ef();
    int32_t * v1 = (int32_t *)(a2 - 0x6b140ebd); // 0x2b1cfb
    *v1 = *v1 + (int32_t)a2;
    int64_t v2 = unknown_2969a0b() & -53; // 0x2b1d0a
    char v3 = v2; // 0x2b1d0c
    *(char *)-0x49a51406d2fe17c6 = v3;
    __asm_out_135(-61, v3);
    int32_t * v4 = (int32_t *)(a1 + 0x77810e98); // 0x2b1d1c
    *v4 = *v4 + (int32_t)v2;
    int64_t v5 = v2 + 0x7dfe17d6; // 0x2b1d22
    int16_t v6 = v5; // 0x2b1d27
    int16_t v7 = (int16_t)*(char *)(a4 & -256 | 232); // 0x2b1d27
    return v5 & 0xffff0000 | (int64_t)(v6 / v7 % 256) | (int64_t)(256 * (v6 % v7));
}

// Address range: 0x463e34 - 0x463e76
int64_t function_463e34(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_in(-47); // 0x463e34
    int64_t v2; // 0x463e34
    int64_t v3 = v2;
    uint64_t v4 = v1;
    int64_t v5 = v4 & 0xffffffff; // 0x463e36
    *(int64_t *)(v3 - 8) = 0x3ab64559;
    int64_t v6 = v3 - 16; // 0x463e46
    *(int64_t *)v6 = 108;
    int64_t v7; // 0x463e34
    int64_t v8 = v7 & a3;
    v1 = __asm_wait(a1, a2, v5);
    v7 = v8 & 0xffffffff;
    while ((int32_t)v8 < 1) {
        // 0x463e36
        v3 = v6;
        int64_t v9 = v5;
        v4 = v1;
        v5 = v4 & 0xffffffff;
        *(int64_t *)(v3 - 8) = 0x3ab64559;
        v6 = v3 - 16;
        *(int64_t *)v6 = 108;
        v8 = v7 & v9;
        v1 = __asm_wait(a1, a2, v5);
        v7 = v8 & 0xffffffff;
    }
    // 0x463e4d
    *(int32_t *)a1 = __asm_insd((int16_t)v4);
    char * v10 = (char *)(a1 + 0x4bc32c5d); // 0x463e50
    *v10 = *v10 + (char)(v4 / 256);
    int64_t v11 = v1 & 0xffffffff; // 0x463e58
    int64_t v12 = v3 - 24; // 0x463e5c
    *(int64_t *)v12 = v11;
    char * v13 = (char *)(2 * v11 + v12); // 0x463e69
    *v13 = *v13 + 45;
    return (int64_t)(*(int32_t *)v11 | (int32_t)a4);
}

// Address range: 0x463ef0 - 0x463ef1
int64_t function_463ef0(void) {
    // 0x463ef0
    int64_t result; // 0x463ef0
    return result;
}

// Address range: 0x463ef6 - 0x463f14
int64_t function_463ef6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x463ef6
    bool v1; // 0x463ef6
    int64_t v2 = v1 ? 0x4480307b : 0x4480307a; // 0x463f05
    int64_t v3; // 0x463ef6
    return (v3 & 0xffffff00 | (int64_t)*(char *)0x372ed60f0e073d20) + v2 & 0xffffffff;
}

// Address range: 0x463f19 - 0x463f1a
int64_t function_463f19(void) {
    // 0x463f19
    int64_t result; // 0x463f19
    return result;
}

// Address range: 0x463f2d - 0x463f2e
int64_t function_463f2d(void) {
    // 0x463f2d
    int64_t result; // 0x463f2d
    return result;
}

// Address range: 0x463f30 - 0x464017
int64_t function_463f30(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a2 + 0x7429dd77); // 0x463f35
    int32_t v3 = *v2; // 0x463f35
    int32_t v4 = a3; // 0x463f35
    int32_t v5 = v3 + v4; // 0x463f35
    *v2 = v5;
    if (((v5 ^ v3) & (v5 ^ v4)) >= 0) {
        function_463ef0();
    }
    int64_t v6 = __asm_iretd() & -256 | 22; // 0x463f48
    if (a4 != 1 && v5 != 0) {
        v6 = function_463f2d();
    }
    char v7 = v6; // 0x463f4c
    *(char *)a1 = v7;
    int64_t v8 = a4 - 2; // 0x463f4d
    bool v9 = ((v5 ^ v3) & (v5 ^ v4)) < 0; // 0x463f4d
    bool v10 = v5 < 0; // 0x463f4d
    bool v11 = v5 == 0; // 0x463f4d
    if (v8 == 0) {
        char v12 = v7 - 55; // 0x463f4f
        __asm_outsd((int16_t)a3, *(int32_t *)&v1);
        v9 = (54 - v7 & v7) < 0;
        v10 = v12 < 0;
        v11 = v12 == 0;
    }
    // 0x463f53
    bool v13; // 0x463f30
    int64_t v14 = (v13 ? -1 : 1) + a1; // 0x463f4c
    bool v15 = v10;
    int64_t v16; // 0x463f30
    *(int64_t *)(a3 + 32) = *(int64_t *)v16;
    v16 += 8;
    while (!v15) {
        // 0x463f53
        v15 = false;
        *(int64_t *)(a3 + 32) = *(int64_t *)v16;
        v16 += 8;
    }
    if (v8 != 1 && !v11) {
        // 0x463f8d
        return function_1f6e6760();
    }
    // 0x463f60
    *(int32_t *)0x42734203 = v4;
    int64_t v17 = v14; // 0x463f62
    if (v15 != v9) {
        // 0x463f64
        int64_t v18; // 0x463f30
        char * v19 = (char *)(v18 + 0x1944430d + v14); // 0x463f64
        *v19 = *v19 & 122;
        int64_t v20 = __asm_iretd(); // 0x463f6e
        uint32_t v21 = (int32_t)(v6 ^ v18) == 0 ? *(int32_t *)v20 : v4; // 0x463f6f
        int64_t v22 = v21; // 0x463f6f
        int64_t v23 = (int64_t)(*(int32_t *)(2 * v18 + 49 + v1) + (int32_t)v14); // 0x463f72
        int32_t * v24 = (int32_t *)(v22 + 0x36f16da8); // 0x463f78
        int32_t v25 = *v24 | (int32_t)v20; // 0x463f78
        *v24 = v25;
        if (v25 >= 0) {
            int32_t v26 = *(int32_t *)(v23 - 0x2aa20a72); // 0x463fff
            float80_t v27; // 0x463f30
            *(int32_t *)0x5f93f6e = (int32_t)v27;
            return function_ffffffffca624d94(v20 & 0xffffffff, (int64_t)(0x60538928 * v26));
        }
        // 0x463f81
        v17 = v23;
        if (v20 > v22) {
            function_463f19();
            v17 = v23;
        }
    }
    // 0x463f87
    *(char *)v17 = *(char *)&v1;
    // 0x463f8d
    return function_1f6e6760();
}

// Address range: 0x464234 - 0x464238
int64_t function_464234(int64_t a1, int64_t a2) {
    // 0x464234
    int64_t result; // 0x464234
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x464258 - 0x46425b
int64_t function_464258(int64_t a1) {
    // 0x464258
    int64_t result; // 0x464258
    return result;
}

// Address range: 0x46429c - 0x4642a2
int64_t function_46429c(void) {
    // 0x46429c
    int64_t result; // 0x46429c
    return result;
}

// Address range: 0x4642f9 - 0x46431e
int64_t function_4642f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2 = a5;
    int32_t * v3 = (int32_t *)(a4 + 0x11be1b69); // 0x46430d
    *v3 = *v3 | (int32_t)(int64_t)&v2;
    *(char *)a1 = *(char *)&v1;
    int64_t v4; // 0x4642f9
    return v4 & -0xff01 | 0xd300;
}

// Address range: 0x464351 - 0x464352
int64_t function_464351(void) {
    // 0x464351
    int64_t result; // 0x464351
    return result;
}

// Address range: 0x464366 - 0x4643f4
int64_t function_464366(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x464366
    bool v1; // 0x464366
    if (v1) {
        function_464351();
    }
    int64_t v2 = __asm_int3(); // 0x4643b5
    if (a4 != 0) {
        int64_t v3 = __asm_in_136(0); // 0x4643ba
        int64_t result = v2 & -256 | v3; // 0x4643ba
        char * v4 = (char *)result; // 0x4643bc
        char v5 = *v4 & (char)(a3 / 256); // 0x4643bc
        *v4 = v5;
        *(int32_t *)a1 = (int32_t)a4;
        if (v5 == 0) {
            // 0x4643ed
            return v3 & 131 | (int64_t)&g1 | 124 | result & -0x10000;
        }
        // 0x4643c4
        return result;
    }
    // 0x46438c
    int64_t v6; // 0x464366
    int32_t * v7 = (int32_t *)(v6 + 13); // 0x464396
    int32_t v8 = *v7; // 0x464396
    *v7 = v8 - (int32_t)a1;
    int64_t result2 = v2 & 0xcfe74f40;
    if ((int64_t)v8 > a1) {
        // 0x4643d8
        return result2 | 54;
    }
    char * v9 = (char *)(v6 + 0x4bd0be2c); // 0x4643a1
    *v9 = *v9 & (char)(a3 / 256);
    *(int64_t *)v6 = -74;
    return result2;
}

// Address range: 0x464411 - 0x464414
int64_t function_464411(void) {
    // 0x464411
    int64_t result; // 0x464411
    return result;
}

// Address range: 0x464416 - 0x464418
int64_t function_464416(void) {
    // 0x464416
    int64_t result; // 0x464416
    return result;
}

// Address range: 0x46442a - 0x46442b
int64_t function_46442a(void) {
    // 0x46442a
    int64_t result; // 0x46442a
    return result;
}

// Address range: 0x464461 - 0x464464
int64_t function_464461(void) {
    // 0x464461
    int64_t result; // 0x464461
    return result;
}

// Address range: 0x4644ad - 0x4644b0
int64_t function_4644ad(void) {
    // 0x4644ad
    int64_t result; // 0x4644ad
    return result;
}

// Address range: 0x464521 - 0x464524
int64_t function_464521(int64_t a1) {
    // 0x464521
    int64_t result; // 0x464521
    return result;
}

// Address range: 0x464540 - 0x4645f1
int64_t function_464540(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x464540
    int64_t v1; // 0x464540
    char v2 = v1; // 0x464540
    *(char *)0x482d77171a78e6e1 = v2;
    uint32_t v3 = (int32_t)v1; // 0x464549
    *(int32_t *)0x31781a322b5c061c = v3;
    uint32_t v4 = (int32_t)v1;
    int32_t v5 = v3 - v4; // 0x464554
    bool v6; // 0x464540
    int64_t v7 = (v6 ? -4 : 4) + a1; // 0x464554
    uint64_t v8 = 256 * (64 * (int64_t)(v5 == 0) | (int64_t)(v3 < v4) | 128 * (int64_t)(v5 < 0) | 16 * (int64_t)(v3 % 16 - v4 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8((char)v5) % 2 == 0)) | 512; // 0x464555
    int64_t v9 = v8 | v1 & -0xff01; // 0x464555
    unsigned char v10 = (char)a4; // 0x464557
    unsigned char v11 = *(char *)(v7 - 0x4da8045a); // 0x464557
    if (v11 <= v10) {
        // 0x4645ad
        *(char *)0x78e35cb4ddeb56a8 = v2;
        return v9 & -156;
    }
    unsigned char v12 = v10 - v11; // 0x464557
    int64_t v13 = a4 & -256 | (int64_t)v12; // 0x464557
    char * v14 = (char *)v9; // 0x464560
    *v14 = (char)(v8 / 256);
    int64_t result = 256 * (int64_t)*v14 | v9 & -0xff01; // 0x464560
    if (v13 != 1 != (v12 == 0)) {
        uint32_t v15 = *(int32_t *)0x625dd598; // 0x4645be
        *(int32_t *)0x625dd598 = v15 / 512 | 0x800000 * v15;
        __asm_int(125);
        return result;
    }
    char * v16 = (char *)(a5 + 21); // 0x464573
    *v16 = *v16 + (char)a6;
    int32_t * v17 = (int32_t *)(v13 + 0x73e5635d); // 0x4645c8
    *v17 = *v17 ^ 127;
    int16_t v18 = result; // 0x4645d2
    int16_t v19 = (int16_t)*(char *)((a3 & 0xff00) + a3 & 0xff00 | a3 & -0xff01); // 0x4645d2
    *(char *)v7 = (char)((int32_t)v9 < 0);
    *(int64_t *)(v1 - 8) = 0xfac40e8;
    *(int64_t *)(v1 - 16) = 0x141db8d1;
    *(char *)0x141db8f3 = *(char *)0x141db8f3 + (char)(v1 / 256);
    return v9 & -0x10000 | (int64_t)(v18 / v19 % 256) | (int64_t)(256 * (v18 % v19));
}

// Address range: 0x464600 - 0x464602
int64_t function_464600(void) {
    // 0x464600
    int64_t v1; // 0x464600
    return function_464656(v1);
}

// Address range: 0x464614 - 0x464617
int64_t function_464614(void) {
    // 0x464614
    int64_t result; // 0x464614
    return result;
}

// Address range: 0x464628 - 0x46463c
int64_t function_464628(int64_t a1, int64_t a2) {
    char v1 = 81; // 0x46462e
    int64_t v2; // 0x464628
    if ((v2 & 215) != 0) {
        v1 = (char)function_46466e(a1, a2, v2) + 81;
    }
    // 0x464630
    if (llvm_ctpop_i8(v1) % 2 == 0) {
        function_46469f();
    }
    // 0x46463a
    return function_464672();
}

// Address range: 0x464656 - 0x464657
int64_t function_464656(int64_t a1) {
    // 0x464656
    int64_t result; // 0x464656
    return result;
}

// Address range: 0x46466e - 0x464671
int64_t function_46466e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x46466e
    int64_t result; // 0x46466e
    int32_t * v1 = (int32_t *)(result + a3); // 0x46466e
    *v1 = *v1 ^ (int32_t)a2;
    return result;
}

// Address range: 0x464672 - 0x464673
int64_t function_464672(void) {
    // 0x464672
    int64_t result; // 0x464672
    return result;
}

// Address range: 0x46469f - 0x4646a0
int64_t function_46469f(void) {
    // 0x46469f
    int64_t result; // 0x46469f
    return result;
}

// Address range: 0x4646c8 - 0x4646cd
int64_t function_4646c8(void) {
    // 0x4646c8
    return function_ffffffffd66e0eb2();
}

// Address range: 0x4646f7 - 0x464704
int64_t function_4646f7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4646f7
    int64_t v1; // 0x4646f7
    uint64_t v2 = v1;
    uint64_t v3 = v1 / 256; // 0x4646fc
    uint64_t v4 = v2 / 256; // 0x4646fc
    int32_t * v5 = (int32_t *)(v2 - 120); // 0x4646fe
    int32_t v6 = *v5; // 0x4646fe
    *v5 = v6 + (int32_t)a3 + (int32_t)((char)v3 < (char)v4);
    return 256 * (v3 - v4) & 0xff00 | v1 & -0xff01;
}

// Address range: 0x46471c - 0x464721
int64_t function_46471c(void) {
    // 0x46471c
    return function_ffffffff90a9e66f();
}

// Address range: 0x464786 - 0x4647f5
int64_t function_464786(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x464786
    int64_t result; // 0x464786
    if (a4 == 1) {
        // 0x464788
        return result;
    }
    bool v1; // 0x464786
    if (true != !v1) {
        // 0x464799
        return __asm_in_137((int16_t)a3);
    }
    int32_t v2 = *(int32_t *)(a2 + 0x575eeacf); // 0x4647bf
    int64_t v3 = __asm_int3() + 0x6e7ddf93; // 0x4647cb
    *(int16_t *)0x15460044f6ba22e4 = (int16_t)v3;
    int64_t v4 = v1 ? -4 : 4; // 0x4647da
    int64_t v5 = v4 + a2; // 0x4647da
    int32_t * v6 = (int32_t *)((v3 & 0xffffffff) + 4 * v5); // 0x4647df
    *v6 = *v6 ^ (int32_t)result;
    int64_t v7 = __asm_wait(v4 + a1, v5, a3); // 0x4647e2
    int32_t v8 = *(int32_t *)v5; // 0x4647ef
    __asm_outsd((int16_t)a3 - (int16_t)(v2 & (int32_t)result), v8);
    return v7 + 0x594216b6 & 0xffffffff;
}
