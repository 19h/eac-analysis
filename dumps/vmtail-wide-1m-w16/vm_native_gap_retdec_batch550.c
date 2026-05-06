/*
 * Targeted RetDec C for native executable gap queue batch 550.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x200634-0x200834 rank=- name=- kind=- bytes=- uncovered=-
 *   0x200834-0x200a34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x200a34-0x200c34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x200c34-0x200e34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x200e34-0x201034 rank=- name=- kind=- bytes=- uncovered=-
 *   0x327655-0x327855 rank=- name=- kind=- bytes=- uncovered=-
 *   0x327855-0x327a55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x327a55-0x327c55 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_200634(int64_t a1);
int64_t function_2006f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_20084d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2009b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_200b07(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_200c3a(void);
int64_t function_200c5a(int64_t a1, int64_t a2);
int64_t function_200c64(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_200c84(int64_t a1);
int64_t function_200ca2(int64_t a1, int64_t a2);
int64_t function_200cb5(int64_t a1);
int64_t function_200ce9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_200cfc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_200d37(int64_t a1, int64_t a2, int64_t a3);
int64_t function_200d5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_200d92(void);
int64_t function_200dbd(void);
int64_t function_200dd2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_200e0e(void);
int64_t function_200e27(void);
int64_t function_200e3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_200e54(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_200e6c(int64_t a1, int64_t a2);
int64_t function_200edf(void);
int64_t function_200ee7(int64_t a1);
int64_t function_200f1e(int64_t a1);
int64_t function_200f3b(int64_t a1);
int64_t function_200f8a(int64_t a1);
int64_t function_200f98(void);
int64_t function_200fb9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_327655(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_327796(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3278dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_327a70(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_327bdc(int64_t a1);
int64_t function_327c06(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_327c14(int64_t a1);
int64_t function_327c16(int64_t a1);
int64_t function_c57b8();
int64_t function_caf2a();
int64_t function_ffffffff921d4165();
int64_t function_ffffffffa6a82e48();
int64_t function_ffffffffe91bba58();
int64_t unknown_3d4de03d();
int64_t unknown_4580e146();
int64_t unknown_ffffffff916ff879();
int64_t unknown_ffffffffbc111c65();
int64_t unknown_ffffffffcccd7878();

// Address range: 0x200634 - 0x2006f3
int64_t function_200634(int64_t a1) {
    // 0x200634
    int64_t v1; // 0x200634
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x20063c
    int64_t v4 = *v3; // 0x20063c
    int64_t v5 = v2 - 8; // 0x20063c
    int64_t * v6 = (int64_t *)v5; // 0x20063c
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x200643
    *v7 = v4;
    *v6 = a1;
    *(int64_t *)(v2 - 16) = v5;
    int64_t v8 = *v6; // 0x200661
    *v7 = v8;
    *v3 = v8;
    *(int64_t *)v2 = v4;
    *(int64_t *)(v2 + 40) = *(int64_t *)(v2 + 8);
    *v3 = v2 + 32;
    return function_c57b8(v1, v1, v1, v1, v1, v1);
}

// Address range: 0x2006f3 - 0x20084d
int64_t function_2006f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2006f3
    return function_c57b8(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x20084d - 0x2009b4
int64_t function_20084d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a3; // bp-32, 0x20094a
    int64_t v2 = (int64_t)&v1; // 0x200987
    *(int64_t *)(v2 - 8) = a3;
    *(int64_t *)(v2 - 16) = v2;
    return function_c57b8(a1, 0x1fd1f5, a3, a4, 0x4d500be0, a6);
}

// Address range: 0x2009b4 - 0x200b07
int64_t function_2009b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2009b4
    return function_c57b8(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x200b07 - 0x200c3a
int64_t function_200b07(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x200b07
    int64_t v1; // 0x200b07
    return function_c57b8(a1, a2, a3, a4, v1, v1);
}

// Address range: 0x200c3a - 0x200c3f
int64_t function_200c3a(void) {
    // 0x200c3a
    int64_t result; // 0x200c3a
    return result;
}

// Address range: 0x200c5a - 0x200c5d
int64_t function_200c5a(int64_t a1, int64_t a2) {
    // 0x200c5a
    int64_t v1; // 0x200c5a
    *(char *)a1 = (char)v1;
    return function_200c84((int64_t)&g3);
}

// Address range: 0x200c64 - 0x200c84
int64_t function_200c64(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x200c64
    int64_t v1; // 0x200c64
    int64_t v2 = v1 + a1; // 0x200c66
    int64_t v3 = ((a5 & (int64_t)&g1) == 0 ? 4 : -4) + a2; // 0x200c6b
    int32_t v4 = v2; // 0x200c6d
    __asm_hlt(v4, v3);
    __asm_in(8);
    int32_t * v5 = (int32_t *)v3; // 0x200c70
    int32_t v6 = *v5 & v4; // 0x200c70
    *v5 = v6;
    int64_t v7 = unknown_ffffffffcccd7878(); // 0x200c77
    if (v6 != 0) {
        v7 = function_200ce9(v2 & 0xffffffff, v3, a3, a4);
    }
    uint64_t v8 = v7 + v1; // 0x200c79
    char v9 = *(char *)(a3 + 0x6f08a22); // 0x200c7b
    *(int64_t *)((a2 & 0xffffffff) - 8) = a4;
    return (256 * (int64_t)(v9 | (char)(v8 / 256)) | v8 & 0xffff00ff) - v1 & 0xffffffff;
}

// Address range: 0x200c84 - 0x200c89
int64_t function_200c84(int64_t a1) {
    // 0x200c84
    int64_t v1; // 0x200c84
    int32_t v2 = v1;
    *(int32_t *)v1 = v2 + (int32_t)v1;
    int64_t v3; // 0x200c84
    return (int64_t)(*(int32_t *)&v3 & v2);
}

// Address range: 0x200ca2 - 0x200cad
int64_t function_200ca2(int64_t a1, int64_t a2) {
    // 0x200ca2
    int64_t v1; // 0x200ca2
    int32_t * v2 = (int32_t *)(v1 + 0x400cbf4); // 0x200ca2
    *v2 = *v2 + (int32_t)a1;
    int32_t v3 = v1; // 0x200ca8
    __asm_out((char)a1, v3);
    return 0x10000 * v3 >> 16;
}

// Address range: 0x200cb5 - 0x200cb8
int64_t function_200cb5(int64_t a1) {
    // 0x200cb5
    int64_t result; // 0x200cb5
    return result;
}

// Address range: 0x200ce9 - 0x200cfa
int64_t function_200ce9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x200ce9
    int64_t v1; // 0x200ce9
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a4;
    return __asm_in_133(-111);
}

// Address range: 0x200cfc - 0x200d03
int64_t function_200cfc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x200cfc
    return function_ffffffff921d4165((int32_t)a4 + (int32_t)a1);
}

// Address range: 0x200d37 - 0x200d4f
int64_t function_200d37(int64_t a1, int64_t a2, int64_t a3) {
    // 0x200d37
    int64_t v1; // 0x200d37
    int32_t * v2 = (int32_t *)(unknown_3d4de03d() + v1 & 0xffffffff); // 0x200d3e
    *v2 = *v2 + (int32_t)a3;
    unknown_4580e146();
    return function_ffffffffe91bba58();
}

// Address range: 0x200d5a - 0x200d6f
int64_t function_200d5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x200d5a
    int64_t v1; // 0x200d5a
    int64_t v2 = v1 & -0xff01 | (int64_t)&g2; // 0x200d5a
    __asm_int(-119);
    *(int32_t *)a1 = (int32_t)v1;
    return v2 + 30 & 165 | v2 & 0x5aa4c900;
}

// Address range: 0x200d92 - 0x200d93
int64_t function_200d92(void) {
    // 0x200d92
    int64_t result; // 0x200d92
    return result;
}

// Address range: 0x200dbd - 0x200dc1
int64_t function_200dbd(void) {
    // 0x200dbd
    int64_t v1; // 0x200dbd
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x200dd2 - 0x200dfd
int64_t function_200dd2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x200dd2
    int64_t v1; // 0x200dd2
    *(char *)a6 = 2 * (char)v1;
    int64_t v2 = v1 + 0x2ebbc55c; // 0x200de2
    int32_t v3 = v2; // 0x200de7
    *(int32_t *)a1 = v3;
    *(char *)-0x77cb8211 = *(char *)-0x77cb8211 + (char)(v1 / 256);
    int64_t v4 = 256 * v1 & 0xff00 | a3; // 0x200dee
    int16_t v5 = v4; // 0x200df0
    bool v6; // 0x200dd2
    *(int32_t *)((v6 ? -4 : 4) + a1) = __asm_insd(v5);
    int32_t * v7 = (int32_t *)(v4 + 0x1a2d42d); // 0x200df5
    *v7 = *v7 + v3;
    __asm_out_134(v5, (char)v2);
    return v2 & 0xffffffff;
}

// Address range: 0x200e0e - 0x200e19
int64_t function_200e0e(void) {
    // 0x200e0e
    int64_t v1; // 0x200e0e
    *(int32_t *)0x4d2fb4e03f01e8c6 = (int32_t)v1;
    return unknown_ffffffff916ff879(v1, v1);
}

// Address range: 0x200e27 - 0x200e28
int64_t function_200e27(void) {
    // 0x200e27
    int64_t result; // 0x200e27
    return result;
}

// Address range: 0x200e3b - 0x200e44
int64_t function_200e3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x200e3b
    int64_t v1; // 0x200e3b
    *(int32_t *)a1 = 2 * (int32_t)v1;
    int64_t result; // 0x200e3b
    if (a4 == 0) {
        result = function_200e27();
    }
    // 0x200e3f
    return result;
}

// Address range: 0x200e54 - 0x200e66
int64_t function_200e54(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x200e54
    return unknown_ffffffffbc111c65(a1, a2, a3, a4);
}

// Address range: 0x200e6c - 0x200e78
int64_t function_200e6c(int64_t a1, int64_t a2) {
    // 0x200e6c
    int64_t v1; // 0x200e6c
    char * v2 = (char *)(v1 - 0x50ca1b90); // 0x200e6c
    *v2 = *v2 | (char)a2;
    return unknown_ffffffff916ff879(a1, a2);
}

// Address range: 0x200edf - 0x200ee4
int64_t function_200edf(void) {
    // 0x200edf
    return function_ffffffffa6a82e48();
}

// Address range: 0x200ee7 - 0x200ee8
int64_t function_200ee7(int64_t a1) {
    // 0x200ee7
    int64_t result; // 0x200ee7
    return result;
}

// Address range: 0x200f1e - 0x200f1f
int64_t function_200f1e(int64_t a1) {
    // 0x200f1e
    int64_t result; // 0x200f1e
    return result;
}

// Address range: 0x200f3b - 0x200f3f
int64_t function_200f3b(int64_t a1) {
    // 0x200f3b
    int64_t result; // 0x200f3b
    return result;
}

// Address range: 0x200f8a - 0x200f8b
int64_t function_200f8a(int64_t a1) {
    // 0x200f8a
    int64_t result; // 0x200f8a
    return result;
}

// Address range: 0x200f98 - 0x200f9b
int64_t function_200f98(void) {
    // 0x200f98
    int64_t result; // 0x200f98
    return result;
}

// Address range: 0x200fb9 - 0x200fbe
int64_t function_200fb9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x200fb9
    int64_t result; // 0x200fb9
    return result;
}

// Address range: 0x327655 - 0x327796
int64_t function_327655(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x74b18065; // bp-32, 0x327695
    int64_t v2; // bp-64, 0x327655
    v2 = (int64_t)&v2;
    int64_t v3 = (int64_t)&v1; // 0x327764
    int64_t v4 = v3 - 8; // 0x327770
    *(int64_t *)(v3 - 16) = v4;
    *(int64_t *)v4 = v3 + 8;
    return function_caf2a(a1, 0x153b35f4, a3, a4, a5, a6, 0x74b18065);
}

// Address range: 0x327796 - 0x3278dd
int64_t function_327796(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x3233f2; // bp-32, 0x3277f7
    int64_t * v2 = (int64_t *)(a4 - 8); // 0x327849
    *v2 = 0x75dad46a;
    *(int64_t *)(a4 - 24) = a7;
    *(int64_t *)(a4 + 8) = *v2;
    *v2 = a6;
    int64_t * v3 = (int64_t *)a4; // 0x327881
    *(int64_t *)(a4 + 32) = *v3;
    *v3 = a4;
    int64_t v4 = a4 + 16; // 0x327891
    *v2 = v4;
    int64_t v5 = *v3; // 0x327899
    int64_t * v6 = (int64_t *)(a4 - 16); // 0x327899
    *v6 = v5;
    *v2 = v4;
    *v6 = *v3;
    return function_caf2a(a1, a2, a3, v5, a5, a6, (int64_t)&v1);
}

// Address range: 0x3278dd - 0x327a70
int64_t function_3278dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3278dd
    int64_t v1; // 0x3278dd
    return function_caf2a(v1, a2, a3, 0x323634, a5, v1, 0x1b31c010);
}

// Address range: 0x327a70 - 0x327b9f
int64_t function_327a70(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x327a70
    int64_t v1; // 0x327a70
    return function_caf2a(a1, 0x4cf48fce, a3, a4, v1, v1, 0x587b3f7);
}

// Address range: 0x327bdc - 0x327bdf
int64_t function_327bdc(int64_t a1) {
    // 0x327bdc
    int64_t result; // 0x327bdc
    return result;
}

// Address range: 0x327c06 - 0x327c0e
int64_t function_327c06(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x327c06
    int64_t v1; // 0x327c06
    char * v2 = (char *)(v1 - 127); // 0x327c06
    *v2 = *v2 | (char)a4;
    return function_327c16((int64_t)&g3);
}

// Address range: 0x327c14 - 0x327c16
int64_t function_327c14(int64_t a1) {
    // 0x327c14
    int64_t result; // 0x327c14
    return result;
}

// Address range: 0x327c16 - 0x327c55
int64_t function_327c16(int64_t a1) {
    // 0x327c16
    int64_t result; // 0x327c16
    return result;
}
