/*
 * Targeted RetDec C for native executable gap queue batch 632.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xf919c-0xf939c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf939c-0xf949c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf959c-0xf979c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf979c-0xf999c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf999c-0xf9b9c rank=- name=- kind=- bytes=- uncovered=-
 *   0x449425-0x449525 rank=- name=- kind=- bytes=- uncovered=-
 *   0x449525-0x449725 rank=- name=- kind=- bytes=- uncovered=-
 *   0x449825-0x449925 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1ebef752();
int64_t function_235ef36a();
int64_t function_3c8ab6b4();
int64_t function_4493eb();
int64_t function_449425(int64_t a1);
int64_t function_44944d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_449471(void);
int64_t function_449483(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_44955b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_4495cc(void);
int64_t function_4495dc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4495eb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4495fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44961d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_449679(void);
int64_t function_44968d(int64_t a1);
int64_t function_4496d3(void);
int64_t function_4496fd(void);
int64_t function_449706(int64_t a1);
int64_t function_449707(int64_t a1, int64_t a2, int64_t a3);
int64_t function_449825(void);
int64_t function_449895(void);
int64_t function_4498ae(int64_t a1);
int64_t function_4498fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_77d33f0e();
int64_t function_cdc60();
int64_t function_dacddb();
int64_t function_f919c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f91e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f9216(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f9238(int64_t a1);
int64_t function_f92a3(int64_t a1);
int64_t function_f92f0(void);
int64_t function_f92fe(void);
int64_t function_f9302(void);
int64_t function_f9310(void);
int64_t function_f9352(void);
int64_t function_f9372(void);
int64_t function_f938d(void);
int64_t function_f938f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_f9441(int64_t a1);
int64_t function_f959c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_f9680(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_f969e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f96a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f96d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f96eb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f97cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f9859(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_f988b(int64_t a1);
int64_t function_f9894(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f98d1(int64_t a1);
int64_t function_f9940(void);
int64_t function_f9973(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f9993(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f99bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f9b02(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f9b0b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f9b2d(void);
int64_t function_f9b58(void);
int64_t function_ffffffffa4eb37ce();
int64_t function_ffffffffd0e6bbc2();
int64_t function_ffffffffe856bb5f();
int64_t unknown_1f08cd05();
int64_t unknown_755f9e1();
int64_t unknown_7e41fc5();
int64_t unknown_ffffffffad54b1a9();
int64_t unknown_ffffffffcc1d3a89();
int64_t unknown_ffffffffd075a7c8();
int64_t unknown_ffffffffd35d4dba();
int64_t unknown_ffffffffe88bb886();
int64_t unknown_fffffffff31cc0d3();

// Address range: 0xf919c - 0xf91b0
int64_t function_f919c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xf919c
    int64_t v1; // 0xf919c
    int64_t v2 = v1;
    char v3 = *(char *)-0x7f3dcb54; // 0xf91a5
    *(char *)-0x7f3dcb54 = v3 + (char)((uint64_t)v1 / 256);
    return (v2 + 168) % 256 | v2 & -256;
}

// Address range: 0xf91e4 - 0xf920d
int64_t function_f91e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf91e4
    int64_t v1; // bp-95, 0xf91e4
    int64_t v2; // 0xf91e4
    uint32_t v3 = (int32_t)(int64_t)&v1 - (int32_t)v2; // 0xf91ea
    int64_t v4 = v3; // 0xf91ea
    char v5 = v2 / 256; // 0xf91f7
    *(char *)a3 = v5;
    *(int64_t *)(v4 - 8) = 0x4d117060;
    int64_t v6; // 0xf91e4
    *(char *)v6 = *(char *)&v6 | v5;
    int64_t v7; // 0xf91e4
    *(char *)a2 = *(char *)&v7 + (char)v6;
    *(int32_t *)-0x55ef30f4 = *(int32_t *)-0x55ef30f4 | v3 + 8;
    return *(int64_t *)v4;
}

// Address range: 0xf9216 - 0xf921a
int64_t function_f9216(int64_t a1, int64_t a2, int64_t a3) {
    // 0xf9216
    int64_t v1; // 0xf9216
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0xf9238 - 0xf923a
int64_t function_f9238(int64_t a1) {
    // 0xf9238
    int64_t result; // 0xf9238
    return result;
}

// Address range: 0xf92a3 - 0xf92a6
int64_t function_f92a3(int64_t a1) {
    // 0xf92a3
    int64_t result; // 0xf92a3
    return result;
}

// Address range: 0xf92f0 - 0xf92f1
int64_t function_f92f0(void) {
    // 0xf92f0
    int64_t result; // 0xf92f0
    return result;
}

// Address range: 0xf92fe - 0xf9300
int64_t function_f92fe(void) {
    // 0xf92fe
    return function_f92f0();
}

// Address range: 0xf9302 - 0xf9307
int64_t function_f9302(void) {
    // 0xf9302
    return function_235ef36a();
}

// Address range: 0xf9310 - 0xf9313
int64_t function_f9310(void) {
    // 0xf9310
    int64_t result; // 0xf9310
    return result;
}

// Address range: 0xf9352 - 0xf9353
int64_t function_f9352(void) {
    // 0xf9352
    int64_t result; // 0xf9352
    return result;
}

// Address range: 0xf9372 - 0xf9373
int64_t function_f9372(void) {
    // 0xf9372
    int64_t result; // 0xf9372
    return result;
}

// Address range: 0xf938d - 0xf938f
int64_t function_f938d(void) {
    // 0xf938d
    return function_f9372();
}

// Address range: 0xf938f - 0xf9409
int64_t function_f938f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0xf938f
    int64_t v1; // 0xf938f
    uint32_t v2 = (int32_t)v1 + (int32_t)a1; // 0xf938f
    char * v3 = (char *)(v1 + 14); // 0xf9397
    unsigned char v4 = *v3; // 0xf9397
    *v3 = (char)v1;
    int64_t v5 = v1 & -256; // 0xf9397
    int64_t v6; // 0xf938f
    __asm_outsd((int16_t)a3, *(int32_t *)&v6);
    int64_t v7; // 0xf938f
    int32_t v8 = v7; // 0xf939b
    *(int32_t *)0x7e3a9bbaac9b01e8 = v8;
    char * v9 = (char *)(v5 | (int64_t)v4); // 0xf93ad
    *v9 = *v9 + (char)(v7 / 256);
    int32_t v10 = *(int32_t *)&v7; // 0xf93af
    char v11 = v7; // 0xf93b1
    unsigned char v12 = v4 + v11; // 0xf93b1
    v7 = unknown_ffffffffd35d4dba();
    *(char *)(int64_t)v2 = *(char *)&v6;
    bool v13; // 0xf938f
    v6 = (v13 ? -1 : 1) + a2;
    int64_t v14; // 0xf938f
    if (v12 < 0 == ((v12 ^ v4) & (v12 ^ v11)) < 0) {
        // 0xf938f
        v14 = v7;
    } else {
        int64_t v15 = function_f9352(); // 0xf93c0
        v7 = v15;
        v14 = v15;
    }
    int64_t v16 = v5 | (int64_t)v12; // 0xf93b1
    unsigned char v17 = *(char *)(a4 + 104); // 0xf93c3
    uint32_t v18 = (int32_t)v14; // 0xf93c6
    uint32_t v19 = v17 > v12 ? 0x1e8e2d5 : 0x1e8e2d4; // 0xf93c6
    char * v20 = (char *)(int64_t)(v18 - v19); // 0xf93cc
    char v21 = a4; // 0xf93cc
    *v20 = *v20 + v21 + (char)(v17 > v12 | v19 > v18);
    *(char *)(2 * v16 + (int64_t)(v2 + (int32_t)a3)) = v12;
    *(int32_t *)v16 = (int32_t)v16;
    int64_t v22 = __asm_sldt(); // 0xf93d9
    *(int16_t *)(v22 - 0x5aff9800) = (int16_t)v22;
    int32_t * v23 = (int32_t *)(((v22 + a4 / 256) % 256 | v22 & -256) + a4); // 0xf93e2
    *v23 = *v23 + (int32_t)a4;
    int32_t v24 = *(int32_t *)((int64_t)(0xad801e8 * (int32_t)v1 + v8 + v10) + 125); // 0xf93e8
    v6 = -126 * (int64_t)v24 & 0xfffffffe;
    char * v25 = (char *)((int64_t)__asm_in(-85) + 0xd14000a); // 0xf93f7
    *v25 = *v25 + v21;
    unknown_1f08cd05();
    return function_77d33f0e();
}

// Address range: 0xf9441 - 0xf9442
int64_t function_f9441(int64_t a1) {
    // 0xf9441
    int64_t result; // 0xf9441
    return result;
}

// Address range: 0xf959c - 0xf967f
int64_t function_f959c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xf959c
    bool v1; // 0xf959c
    if (!v1) {
        // 0xf95ae
        int64_t v2; // 0xf959c
        return v2 & -256 | (int64_t)*(char *)0x1e80091472e670a;
    }
    // 0xf959e
    int64_t result; // 0xf959c
    char * v3 = (char *)(8 * result - 0x17d75401); // 0xf959e
    *v3 = *v3 | (char)(result / 256);
    if (a4 == 1) {
        // 0xf95ae
        return (result & 0xffffffff ^ 0x50800d3) & -256 | (int64_t)*(char *)0x1e80091472e670a;
    }
    int32_t * v4 = (int32_t *)(result - 1); // 0xf9615
    *v4 = *v4 + (int32_t)a3;
    *(char *)a1 = __asm_insb((int16_t)a3);
    return result;
}

// Address range: 0xf9680 - 0xf969e
int64_t function_f9680(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xf9680
    int64_t result; // 0xf9680
    int64_t v1 = result;
    int32_t * v2 = (int32_t *)(v1 + 114 + 4 * v1); // 0xf9682
    *v2 = *v2 + (int32_t)result;
    int32_t * v3 = (int32_t *)(a6 + a2); // 0xf9689
    *v3 = *v3 - (int32_t)v1;
    return result;
}

// Address range: 0xf969e - 0xf96a4
int64_t function_f969e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf969e
    int64_t v1; // 0xf969e
    int64_t result = (v1 | v1) & 0xffffffff; // 0xf969e
    int32_t * v2 = (int32_t *)(result + a3); // 0xf96a0
    *v2 = *v2 + (int32_t)a2;
    return result;
}

// Address range: 0xf96a5 - 0xf96b6
int64_t function_f96a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a3; // 0xf96a5
    *(char *)a2 = v1 + (char)a2;
    if ((char)a4 <= v1) {
        function_f96d7(a1, a2, a3, a4);
    }
    // 0xf96ab
    return __asm_iretd();
}

// Address range: 0xf96d7 - 0xf96e4
int64_t function_f96d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_755f9e1(); // 0xf96db
    int64_t v2; // 0xf96d7
    int32_t * v3 = (int32_t *)(v2 + 54); // 0xf96e0
    *v3 = *v3 + (int32_t)v2;
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0xf96eb - 0xf96f5
int64_t function_f96eb(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 0x245a470a); // 0xf96eb
    int64_t result; // 0xf96eb
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0xf97cd - 0xf97f4
int64_t function_f97cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xf97cd
    int64_t v1; // 0xf97cd
    int32_t * v2 = (int32_t *)(v1 + 0x726fb572 + v1); // 0xf97cd
    *v2 = *v2 + (int32_t)a3;
    *(char *)-0x17781217 = *(char *)-0x17781217 | (char)v1 & -24;
    int32_t * v3 = (int32_t *)(a2 - 91 + 2 * a2); // 0xf97e3
    *v3 = *v3 + (int32_t)a4;
    return a4 & 0xffffffff;
}

// Address range: 0xf9859 - 0xf988b
int64_t function_f9859(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = __asm_hlt(); // 0xf9859
    int64_t v2; // 0xf9859
    *(char *)v1 = (char)v2 - (char)v1;
    __asm_out(57, *(char *)0x1e8c9dbe5a93aef);
    *(int32_t *)0x70895973 = 0x60970c87;
    int64_t v3; // 0xf9859
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)a4;
    int32_t * v4 = (int32_t *)(a5 + 0x62e48d0a); // 0xf9878
    *v4 = *v4 + (int32_t)a6;
    __asm_wait();
    __asm_in(-67);
    int64_t result = unknown_ffffffffcc1d3a89(); // 0xf9883
    int64_t v5; // 0xf9859
    *(char *)a1 = *(char *)&v5 + (char)a4;
    return result;
}

// Address range: 0xf988b - 0xf988c
int64_t function_f988b(int64_t a1) {
    // 0xf988b
    int64_t result; // 0xf988b
    return result;
}

// Address range: 0xf9894 - 0xf98c6
int64_t function_f9894(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xf9894
    int64_t result; // 0xf9894
    // 0xf9896
    return result;
    int64_t v1 = a2 + 0xe8825802 & 0xffffffff; // 0xf98a9
    int32_t * v2 = (int32_t *)(a4 - 0x11fea710); // 0xf98af
    *v2 = *v2 + (int32_t)a3;
    *(int32_t *)a1 = *(int32_t *)v1;
    bool v3; // 0xf9894
    int64_t v4 = v3 ? -4 : 4; // 0xf98b5
    int64_t v5 = v4 + v1; // 0xf98b5
    char * v6 = (char *)(v5 - 94); // 0xf98bc
    *v6 = *v6 - 1;
    return unknown_7e41fc5(v4 + a1, v5, 256 * result + a3 & 0xff00 | a3 & -0xff01);
}

// Address range: 0xf98d1 - 0xf98d2
int64_t function_f98d1(int64_t a1) {
    // 0xf98d1
    int64_t result; // 0xf98d1
    return result;
}

// Address range: 0xf9940 - 0xf9941
int64_t function_f9940(void) {
    // 0xf9940
    int64_t result; // 0xf9940
    return result;
}

// Address range: 0xf9973 - 0xf9993
int64_t function_f9973(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf9973
    int64_t v1; // 0xf9973
    if (llvm_ctpop_i8((char)v1 ^ -81) % 2 == 0) {
        function_f9940();
    }
    // 0xf997b
    unknown_ffffffffe88bb886();
    return function_dacddb();
}

// Address range: 0xf9993 - 0xf99ad
int64_t function_f9993(int64_t a1, int64_t a2, int64_t a3) {
    // 0xf9993
    int64_t result; // 0xf9993
    bool v1; // 0xf9993
    if (v1) {
        char v2 = result; // 0xf999a
        __asm_out_133((int16_t)a3, v2);
        *(char *)a1 = (char)a2;
        __asm_out(-10, v2);
        unknown_ffffffffad54b1a9();
        return function_ffffffffa4eb37ce();
    }
    // 0xf9995
    return result;
}

// Address range: 0xf99bf - 0xf9af5
int64_t function_f99bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xf99bf
    int64_t v1; // 0xf99bf
    int32_t * v2 = (int32_t *)(v1 - 86); // 0xf99bf
    *v2 = *v2 ^ (int32_t)a3;
    unknown_ffffffffd075a7c8();
    int64_t v3 = unknown_fffffffff31cc0d3(); // 0xf99cd
    char v4 = *(char *)-0x37ee7d58 + 97; // 0xf99d5
    *(char *)-0x37ee7d58 = v4;
    if (v4 == 0) {
        // 0xf9a1f
        float80_t v5; // 0xf99bf
        *(int16_t *)(v1 + 15) = (int16_t)v5;
        char * v6 = (char *)v3; // 0xf9a25
        *v6 = *v6 + (char)v3;
        return function_cdc60();
    }
    int64_t result = v3 & -256 | (int64_t)(*(char *)v3 + (char)v3); // 0xf99de
    char * v7 = (char *)result; // 0xf99e0
    *v7 = *v7 - 100;
    return result;
}

// Address range: 0xf9b02 - 0xf9b08
int64_t function_f9b02(int64_t a1, int64_t a2, int64_t a3) {
    // 0xf9b02
    int64_t v1; // 0xf9b02
    return v1 ^ 36;
}

// Address range: 0xf9b0b - 0xf9b10
int64_t function_f9b0b(int64_t a1, int64_t a2, int64_t a3) {
    // 0xf9b0b
    return __asm_int1(a1, a2, a3);
}

// Address range: 0xf9b2d - 0xf9b30
int64_t function_f9b2d(void) {
    // 0xf9b2d
    int64_t result; // 0xf9b2d
    return result;
}

// Address range: 0xf9b58 - 0xf9b5b
int64_t function_f9b58(void) {
    // 0xf9b58
    int64_t result; // 0xf9b58
    return result;
}

// Address range: 0x449425 - 0x449433
int64_t function_449425(int64_t a1) {
    // 0x449425
    int64_t v1; // 0x449425
    uint64_t v2 = v1;
    bool v3; // 0x449425
    unsigned char v4 = (char)(v2 / 256) + (char)v3 - *(char *)(v2 - 0x56ad25a3); // 0x449425
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x449425
    int64_t v6 = 256 * (int64_t)v4 | v2 & -0xff01; // 0x44942b
    if (v5 % 2 == 0) {
        v6 = function_4493eb();
    }
    int64_t v7 = v6;
    return (v7 + 254) % 256 | v7 & -256;
}

// Address range: 0x44944d - 0x44945a
int64_t function_44944d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44944d
    int64_t v1; // 0x44944d
    int64_t v2 = v1;
    return (v2 + 71) % 256 | v2 & -256;
}

// Address range: 0x449471 - 0x449483
int64_t function_449471(void) {
    // 0x449471
    int64_t v1; // 0x449471
    bool v2; // 0x449471
    return v1 + 0x2f017703 + (int64_t)v2 & 0xffffffff ^ 59;
}

// Address range: 0x449483 - 0x44952e
int64_t function_449483(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x449483
    int64_t v1; // 0x449483
    uint64_t v2 = v1;
    int64_t result = v1;
    bool v3; // 0x449483
    if (v3) {
        // 0x4494af
        *(char *)(v2 + 105) = (char)(v2 / 256);
        return (result + 86) % 256 | result & -256;
    }
    // 0x449488
    return result;
}

// Address range: 0x44955b - 0x4495aa
int64_t function_44955b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int16_t v1 = a3; // 0x44955b
    int32_t v2 = __asm_insd(v1); // 0x44955b
    int32_t * v3 = (int32_t *)a1; // 0x44955b
    *v3 = v2;
    int64_t v4; // 0x44955b
    int64_t v5 = v4 ^ a3 % 256; // 0x449562
    int64_t v6; // 0x44955b
    *(char *)a3 = *(char *)&v6 + 126;
    __asm_hlt();
    *(int64_t *)(v5 - 8) = v5;
    int64_t v7 = __asm_sti(a1); // 0x449589
    int32_t * v8 = (int32_t *)(*(int64_t *)v5 - 0x19c56069); // 0x44958f
    int32_t v9 = *v8 + (int32_t)v4; // 0x44958f
    *v8 = v9;
    *v3 = __asm_insd(v1);
    return v9 < 0 ? v7 : 0x388b;
}

// Address range: 0x4495cc - 0x4495cf
int64_t function_4495cc(void) {
    // 0x4495cc
    int64_t result; // 0x4495cc
    return result;
}

// Address range: 0x4495dc - 0x4495ea
int64_t function_4495dc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4495dc
    return function_ffffffffd0e6bbc2();
}

// Address range: 0x4495eb - 0x4495fb
int64_t function_4495eb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4495eb
    int64_t v1; // 0x4495eb
    char * v2 = (char *)(v1 + 0x97342a89 & 0xffffffff); // 0x4495eb
    *v2 = *v2 + (char)v1;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    char * v3 = (char *)(a2 - 0x7d82e80); // 0x4495f3
    *v3 = *v3 & (char)a3;
    return function_44961d(a1, a2, a3, v1);
}

// Address range: 0x4495fb - 0x449603
int64_t function_4495fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4495fb
    return function_1ebef752();
}

// Address range: 0x44961d - 0x449630
int64_t function_44961d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44961d
    int64_t result; // 0x44961d
    __asm_punpckldq(result, *(int32_t *)(a1 + 0x555469dc));
    int32_t * v1 = (int32_t *)(a4 + 0x9593958); // 0x449628
    int32_t v2 = *v1; // 0x449628
    *v1 = (int32_t)((int32_t)result > (int32_t)a1) - (int32_t)result + v2;
    return result;
}

// Address range: 0x449679 - 0x44967c
int64_t function_449679(void) {
    // 0x449679
    int64_t result; // 0x449679
    return result;
}

// Address range: 0x44968d - 0x44968e
int64_t function_44968d(int64_t a1) {
    // 0x44968d
    int64_t result; // 0x44968d
    return result;
}

// Address range: 0x4496d3 - 0x4496d4
int64_t function_4496d3(void) {
    // 0x4496d3
    int64_t result; // 0x4496d3
    return result;
}

// Address range: 0x4496fd - 0x449705
int64_t function_4496fd(void) {
    // 0x4496ff
    return function_ffffffffe856bb5f();
}

// Address range: 0x449706 - 0x449707
int64_t function_449706(int64_t a1) {
    // 0x449706
    int64_t result; // 0x449706
    return result;
}

// Address range: 0x449707 - 0x44970d
int64_t function_449707(int64_t a1, int64_t a2, int64_t a3) {
    // 0x449707
    int64_t v1; // 0x449707
    int64_t v2 = v1;
    __asm_outsb((int16_t)a3, (char)v1);
    bool v3; // 0x449707
    return (v2 - (v3 ? 123 : 122)) % 256 | v2 & -256;
}

// Address range: 0x449825 - 0x449826
int64_t function_449825(void) {
    // 0x449825
    int64_t result; // 0x449825
    return result;
}

// Address range: 0x449895 - 0x44989a
int64_t function_449895(void) {
    // 0x449895
    return function_3c8ab6b4();
}

// Address range: 0x4498ae - 0x4498af
int64_t function_4498ae(int64_t a1) {
    // 0x4498ae
    int64_t result; // 0x4498ae
    return result;
}

// Address range: 0x4498fc - 0x4498fe
int64_t function_4498fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4498fc
    return a3 & 0xffffffff;
}
