/*
 * Targeted RetDec C for native executable gap queue batch 473.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xf5d9c-0xf5f9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf5f9c-0xf619c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf619c-0xf639c rank=- name=- kind=- bytes=- uncovered=-
 *   0x273a41-0x273c41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x273c41-0x273e41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x273e41-0x274041 rank=- name=- kind=- bytes=- uncovered=-
 *   0x274041-0x274241 rank=- name=- kind=- bytes=- uncovered=-
 *   0x274241-0x274441 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
extern int g6;
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

int64_t function_20f5ff0();
int64_t function_257e715();
int64_t function_273a41(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_273a5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_273ad3(void);
int64_t function_273adc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_273b19(int64_t a1);
int64_t function_273b65(int64_t a1);
int64_t function_273b6c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_273b80(int64_t a1);
int64_t function_273b99(void);
int64_t function_273bda(void);
int64_t function_273be4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_273c5a(void);
int64_t function_273c75(int64_t a1, int64_t a2);
int64_t function_273c7d(int64_t a1);
int64_t function_273c83(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_273ce7(int64_t a1);
int64_t function_273d42(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_273dfa(void);
int64_t function_273e0d(int64_t a1);
int64_t function_273e34(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_273ebf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_273f13(int64_t a1, int64_t a2, int64_t a3);
int64_t function_273f91(void);
int64_t function_273fb1(void);
int64_t function_273fd8(void);
int64_t function_274068(void);
int64_t function_27406e(void);
int64_t function_2740b1(int64_t a1, int64_t a2);
int64_t function_2740c5(void);
int64_t function_2740c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2740f4(int64_t a1);
int64_t function_274110(void);
int64_t function_274112(void);
int64_t function_274121(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_274165(int64_t a1);
int64_t function_2741fc(int64_t a1);
int64_t function_27427b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_274285(int64_t a1);
int64_t function_2742d8(void);
int64_t function_274308(int64_t a1, int64_t a2, int64_t a3);
int64_t function_274324(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_27433e(int64_t a1);
int64_t function_27438f(void);
int64_t function_33a14262();
int64_t function_4e49eff8();
int64_t function_f5d9c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f5e47(void);
int64_t function_f5e52(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f5e7f(int64_t a1);
int64_t function_f5f0d(int64_t a1, int64_t a2);
int64_t function_f5f75(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f5fe2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f6026(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f60b7(void);
int64_t function_f60cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f6125(void);
int64_t function_f613f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f615f(void);
int64_t function_f6160(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f61ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f623f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f6279(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f628f(int64_t a1);
int64_t function_f6299(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f62b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f62cf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f62e7(void);
int64_t function_f62f1(void);
int64_t function_f62f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ffffffff8e014037();
int64_t function_ffffffffaee53248();
int64_t function_ffffffffc3d4430c();
int64_t function_ffffffffe864ae33();
int64_t function_ffffffffe8a2478a();
int64_t unknown_2200ae83();
int64_t unknown_277db431();
int64_t unknown_28e2e850();
int64_t unknown_34bb9226();
int64_t unknown_3f682a33();
int64_t unknown_4757309b();
int64_t unknown_47b89050();
int64_t unknown_56c83597();
int64_t unknown_5761c3b4();
int64_t unknown_753a0ec5();
int64_t unknown_79142c5b();
int64_t unknown_7ff6400();
int64_t unknown_d30314();
int64_t unknown_ffffffff88220901();
int64_t unknown_ffffffff9d45c3ab();
int64_t unknown_ffffffff9f3218ce();
int64_t unknown_ffffffffa192fd7d();
int64_t unknown_ffffffffa297fb74();
int64_t unknown_ffffffffab1d0ce3();
int64_t unknown_ffffffffac97d6d9();
int64_t unknown_ffffffffb315686a();
int64_t unknown_ffffffffba6bc6f5();
int64_t unknown_ffffffffd82d2b0e();
int64_t unknown_ffffffffe2ff4660();
int64_t unknown_fffffffff2de2419();
int64_t unknown_fffffffffa17e0f2();
int64_t unknown_fffffffffb1a8e8c();
int64_t unknown_fffffffffd50c034();

// Address range: 0xf5d9c - 0xf5db3
int64_t function_f5d9c(int64_t a1, int64_t a2, int64_t a3) {
    // 0xf5d9c
    unknown_ffffffff9d45c3ab();
    int64_t v1; // 0xf5d9c
    int32_t * v2 = (int32_t *)(v1 - 82 + 4 * v1); // 0xf5daa
    *v2 = *v2 + (int32_t)v1;
    return unknown_5761c3b4();
}

// Address range: 0xf5e47 - 0xf5e4f
int64_t function_f5e47(void) {
    // 0xf5e47
    int64_t v1; // 0xf5e47
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result;
    return result;
}

// Address range: 0xf5e52 - 0xf5e76
int64_t function_f5e52(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf5e52
    unknown_ffffffffe2ff4660();
    int64_t v1; // 0xf5e52
    int32_t * v2 = (int32_t *)(v1 - 48); // 0xf5e60
    *v2 = *v2 + (int32_t)a1;
    __asm_int(35);
    int32_t * v3 = (int32_t *)(a3 + 47); // 0xf5e6b
    *v3 = *v3 + (int32_t)a3;
    return unknown_ffffffffa297fb74();
}

// Address range: 0xf5e7f - 0xf5e80
int64_t function_f5e7f(int64_t a1) {
    // 0xf5e7f
    int64_t result; // 0xf5e7f
    return result;
}

// Address range: 0xf5f0d - 0xf5f0f
int64_t function_f5f0d(int64_t a1, int64_t a2) {
    // 0xf5f0d
    return a2 & 0xffffffff;
}

// Address range: 0xf5f75 - 0xf5f7f
int64_t function_f5f75(int64_t a1, int64_t a2, int64_t a3) {
    // 0xf5f75
    return unknown_ffffffffa192fd7d((int32_t)(a2 ^ a1));
}

// Address range: 0xf5fe2 - 0xf6019
int64_t function_f5fe2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xf5fe2
    unknown_ffffffffba6bc6f5();
    unknown_7ff6400();
    int32_t * v1 = (int32_t *)(a3 - 115); // 0xf5fff
    *v1 = *v1 + (int32_t)a4;
    int64_t v2; // 0xf5fe2
    *(char *)a1 = *(char *)&v2;
    bool v3; // 0xf5fe2
    int64_t v4 = v3 ? -1 : 1; // 0xf6007
    return unknown_d30314(v4 + a1, v4 + a2);
}

// Address range: 0xf6026 - 0xf602b
int64_t function_f6026(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf6026
    int64_t v1; // 0xf6026
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)a4;
    return result;
}

// Address range: 0xf60b7 - 0xf60b8
int64_t function_f60b7(void) {
    // 0xf60b7
    int64_t result; // 0xf60b7
    return result;
}

// Address range: 0xf60cd - 0xf6122
int64_t function_f60cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0xf60cd
    int64_t v3 = 0x100000000 * v2 >> 32; // 0xf60cd
    uint64_t v4 = v3 * v3; // 0xf60cd
    int32_t * v5 = (int32_t *)(v4 & 0xffffffff); // 0xf60cf
    int32_t v6 = v4; // 0xf60cf
    *v5 = *v5 + v6;
    int32_t v7 = *(int32_t *)&v1 | (int32_t)v2; // 0xf60d1
    unsigned char v8 = llvm_ctpop_i8((char)v7); // 0xf60d1
    *(int32_t *)a2 = v7;
    int64_t result = v2 & 0xffffffff; // 0xf60d4
    if (v8 % 2 == 0) {
        result = function_f60b7();
    }
    int16_t v9 = v4 / 0x100000000; // 0xf60d6
    *(char *)a1 = __asm_insb(v9);
    if (v8 % 2 != 0) {
        // 0xf6121
        return result;
    }
    int32_t * v10 = (int32_t *)(v1 + 9); // 0xf60da
    *v10 = *v10 + v6;
    int32_t * v11 = (int32_t *)(unknown_ffffffffab1d0ce3() - 0x4b5a8800); // 0xf60e6
    *v11 = -1 - *v11;
    bool v12; // 0xf60cd
    unknown_fffffffffa17e0f2((v12 ? -4 : 4) + a1);
    __asm_outsb(v9, __readfsbyte(v1));
    return unknown_ffffffff88220901();
}

// Address range: 0xf6125 - 0xf6126
int64_t function_f6125(void) {
    // 0xf6125
    int64_t result; // 0xf6125
    return result;
}

// Address range: 0xf613f - 0xf615f
int64_t function_f613f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 & 0xffffffff; // 0xf613f
    int64_t v2; // 0xf613f
    *(char *)v1 = 2 * (char)v2;
    int32_t * v3 = (int32_t *)(8 * v2 + v1); // 0xf6142
    *v3 = *v3 + (int32_t)a1;
    int32_t * v4 = (int32_t *)(a2 + 0x3c062073); // 0xf6145
    *v4 = *v4 + (int32_t)a4;
    int32_t v5 = *(int32_t *)(a1 - 59) & (int32_t)a2; // 0xf614b
    int64_t v6 = (v2 & 0xffffffff) - 1; // 0xf614e
    if (v6 != 0 && v5 != 0) {
        function_f61ac(a1, a2, a3, v6);
    }
    // 0xf6150
    if (llvm_ctpop_i8((char)v5) % 2 != 0) {
        function_f6125();
    }
    char * v7 = (char *)(v2 + 21); // 0xf6152
    *v7 = *v7 + (char)a3;
    return unknown_79142c5b();
}

// Address range: 0xf615f - 0xf6160
int64_t function_f615f(void) {
    // 0xf615f
    int64_t result; // 0xf615f
    return result;
}

// Address range: 0xf6160 - 0xf6172
int64_t function_f6160(int64_t a1, int64_t a2, int64_t a3) {
    // 0xf6160
    bool v1; // 0xf6160
    int64_t v2 = v1 ? -1 : 1; // 0xf6163
    int64_t v3 = v2 + a1; // 0xf6163
    unknown_ffffffffb315686a(v3, (v1 ? -4 : 4) + a2 + v2, a3 & -256 | 250);
    char * v4 = (char *)v3; // 0xf6169
    int64_t v5; // 0xf6160
    *v4 = *v4 + (char)v5;
    __asm_int(50);
    return function_4e49eff8();
}

// Address range: 0xf61ac - 0xf61f7
int64_t function_f61ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf61ac
    int64_t v1; // 0xf61ac
    uint64_t result = v1;
    bool v2; // 0xf61ac
    if (v2) {
        int32_t v3 = *(int32_t *)(v1 - 0x17fcdf54); // 0xf61ec
        int32_t * v4 = (int32_t *)(int64_t)((int32_t)v2 + (int32_t)a4 - v3); // 0xf61f2
        *v4 = (int32_t)v1 + 8 + *v4;
        return result & -256 | (int64_t)*(char *)(result % 256 + v1);
    }
    // 0xf61ae
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0xf623f - 0xf626d
int64_t function_f623f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x83bfa); // 0xf6262
    int64_t v2; // 0xf623f
    *v1 = *v1 + (int32_t)v2;
    return v2 & -0xff01 | (int64_t)&g2;
}

// Address range: 0xf6279 - 0xf628f
int64_t function_f6279(int64_t a1, int64_t a2, int64_t a3) {
    // 0xf6279
    unknown_fffffffffb1a8e8c();
    int64_t v1; // 0xf6279
    return function_f6299(a1, 0x2a87372f, a3 & 0xff00 & v1 | a3 & -0xff01, (int64_t)&g6);
}

// Address range: 0xf628f - 0xf6299
int64_t function_f628f(int64_t a1) {
    int64_t result = unknown_56c83597(a1); // 0xf6296
    int64_t v1; // 0xf628f
    if ((char)v1 < -89) {
        result = function_f62cf(a1, v1, v1);
    }
    // 0xf6298
    return result;
}

// Address range: 0xf6299 - 0xf62b5
int64_t function_f6299(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf6299
    int64_t v1; // 0xf6299
    __asm_out(-46, (char)v1);
    char v2 = *(char *)0x74cc71a9; // 0xf62a2
    *(char *)0x74cc71a9 = v2 + (char)((uint64_t)v1 / 256);
    bool v3; // 0xf6299
    int64_t v4 = v3 ? -1 : 1; // 0xf62ae
    *(int32_t *)(v4 + a1) = *(int32_t *)(v4 + a2);
    *(int64_t *)0x29911d7a = -39;
    return a3 & 0xfffffff9 | 6;
}

// Address range: 0xf62b6 - 0xf62c5
int64_t function_f62b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf62b6
    int64_t v1; // 0xf62b6
    int64_t result = v1 & 0xffff00ff | (int64_t)(int32_t)&g3; // 0xf62b8
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)a2;
    int32_t * v2 = (int32_t *)result; // 0xf62bb
    *v2 = *v2 + 1;
    return result;
}

// Address range: 0xf62cf - 0xf62e3
int64_t function_f62cf(int64_t a1, int64_t a2, int64_t a3) {
    // 0xf62cf
    int64_t v1; // 0xf62cf
    *(int32_t *)a3 = 2 * (int32_t)v1;
    char * v2 = (char *)(a3 - 0x4dc24495); // 0xf62dc
    *v2 = *v2 & 16;
    return v1 & -0x8401;
}

// Address range: 0xf62e7 - 0xf62e8
int64_t function_f62e7(void) {
    // 0xf62e7
    int64_t result; // 0xf62e7
    return result;
}

// Address range: 0xf62f1 - 0xf62f2
int64_t function_f62f1(void) {
    // 0xf62f1
    int64_t result; // 0xf62f1
    return result;
}

// Address range: 0xf62f2 - 0xf6337
int64_t function_f62f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf62f2
    __asm_int1();
    __asm_in((int16_t)a3);
    int64_t v1 = a4 - 1; // 0xf62f4
    int3_t v2; // 0xf62f2
    float80_t v3 = __frontend_reg_load_fpr(v2);
    bool v4; // 0xf62f2
    if (v1 == 0 || v4) {
        // 0xf62f6
        __frontend_reg_store_fpr(v2, v3 * (float80_t)*(float32_t *)(a4 + 126));
        int32_t v5 = __asm_in_133(-66); // 0xf6301
        __frontend_reg_store_fpr(v2 - 1, (float80_t)*(float64_t *)(int64_t)v5);
        int64_t v6 = (v1 & -256 | 175) + a3 & -0xff01 | (int64_t)&g5; // 0xf630e
        uint32_t result = *(int32_t *)v6 & v5; // 0xf6312
        char * v7 = (char *)(v6 + 0xcd991a); // 0xf6315
        *v7 = *v7 & (char)(result / 256);
        return result;
    }
    // 0xf631d
    __asm_iretd();
    unknown_fffffffffd50c034();
    return function_f62e7();
}

// Address range: 0x273a41 - 0x273a58
int64_t function_273a41(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x273a41
    int64_t v1; // 0x273a41
    int32_t * v2 = (int32_t *)(v1 + 84); // 0x273a47
    *v2 = *v2 + (int32_t)v1;
    unknown_28e2e850(a1, a2, a3, a4);
    return (int64_t)*(int32_t *)0x5c956d01e86804f0;
}

// Address range: 0x273a5a - 0x273ac7
int64_t function_273a5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x273a5a
    int64_t v1; // 0x273a5a
    __asm_out_134(112, (int32_t)v1);
    int64_t v2 = v1 + 0xe808480a; // 0x273a5c
    int64_t v3 = v2 & 0xffffffff; // 0x273a5c
    int32_t * v4 = (int32_t *)(v3 - 0x6145a9b8); // 0x273a61
    *v4 = *v4 + (int32_t)a3;
    int32_t v5 = a4; // 0x273a6c
    int32_t v6 = v2; // 0x273a6c
    int32_t v7 = v6 + v5; // 0x273a6c
    if (v7 < 0 == ((v7 ^ v5) & (v7 ^ v6)) < 0) {
        int32_t * v8 = (int32_t *)(a2 - 0x3f55f29); // 0x273a75
        *v8 = *v8 + (int32_t)v1;
        *(int32_t *)-0x415d5885 = *(int32_t *)-0x415d5885 + (int32_t)a2;
        return 0xe801236d;
    }
    uint64_t v9 = (int64_t)v7; // 0x273a6c
    int32_t * v10 = (int32_t *)(v3 + 84); // 0x273aa3
    uint32_t v11 = *v10; // 0x273aa3
    *v10 = v11 - 0x17c94893;
    char v12 = *(char *)v9; // 0x273aa6
    uint64_t v13 = v9 / 256; // 0x273aaa
    uint64_t v14 = v13 + v3; // 0x273aaa
    int64_t result = v14 % 256 | v2 & 0xffffff00; // 0x273aaa
    char * v15 = (char *)(result + 0x2508e00); // 0x273ab2
    *v15 = *v15 + (char)v14;
    *(char *)0xf4389f6d = *(char *)0xf4389f6d + (char)v13;
    int32_t * v16 = (int32_t *)(a3 + 28); // 0x273abe
    int32_t v17 = *v16; // 0x273abe
    *v16 = v17 + (v7 & -256 | (int32_t)((char)(v11 > 0x17c94892) + (char)v7 - v12));
    return result;
}

// Address range: 0x273ad3 - 0x273ad4
int64_t function_273ad3(void) {
    // 0x273ad3
    int64_t result; // 0x273ad3
    return result;
}

// Address range: 0x273adc - 0x273aeb
int64_t function_273adc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 0x4dc4038d); // 0x273add
    bool v2; // 0x273adc
    *v1 = (int32_t)v2 - (int32_t)a4 + *v1;
    return function_273ad3();
}

// Address range: 0x273b19 - 0x273b1c
int64_t function_273b19(int64_t a1) {
    // 0x273b19
    int64_t result; // 0x273b19
    return result;
}

// Address range: 0x273b65 - 0x273b68
int64_t function_273b65(int64_t a1) {
    // 0x273b65
    int64_t result; // 0x273b65
    return result;
}

// Address range: 0x273b6c - 0x273b76
int64_t function_273b6c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x273b6c
    int64_t result; // 0x273b6c
    return result;
}

// Address range: 0x273b80 - 0x273b82
int64_t function_273b80(int64_t a1) {
    // 0x273b80
    int64_t result; // 0x273b80
    return result;
}

// Address range: 0x273b99 - 0x273b9b
int64_t function_273b99(void) {
    // 0x273b99
    int64_t result; // 0x273b99
    return result;
}

// Address range: 0x273bda - 0x273be4
int64_t function_273bda(void) {
    // 0x273bda
    return function_257e715();
}

// Address range: 0x273be4 - 0x273bf9
int64_t function_273be4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x273be4
    return function_273c75(a1, a2);
}

// Address range: 0x273c5a - 0x273c5f
int64_t function_273c5a(void) {
    // 0x273c5a
    return function_ffffffffe8a2478a();
}

// Address range: 0x273c75 - 0x273c7c
int64_t function_273c75(int64_t a1, int64_t a2) {
    // 0x273c75
    int64_t v1; // 0x273c75
    int32_t * v2 = (int32_t *)(v1 - 0x348e99e8); // 0x273c75
    *v2 = *v2 + (int32_t)v1;
    int64_t v3; // 0x273c75
    return (int64_t)*(int32_t *)&v3;
}

// Address range: 0x273c7d - 0x273c83
int64_t function_273c7d(int64_t a1) {
    // 0x273c7d
    return unknown_2200ae83(a1);
}

// Address range: 0x273c83 - 0x273caa
int64_t function_273c83(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x273c83
    int64_t v1; // 0x273c83
    uint64_t v2 = v1;
    unsigned char v3 = *(char *)(v1 + v2 % 256); // 0x273c86
    __asm_out_135((int16_t)a3, (int32_t)v2 & -256 | (int32_t)v3);
    __asm_sti();
    unknown_4757309b();
    return function_ffffffffc3d4430c();
}

// Address range: 0x273ce7 - 0x273ce8
int64_t function_273ce7(int64_t a1) {
    // 0x273ce7
    int64_t result; // 0x273ce7
    return result;
}

// Address range: 0x273d42 - 0x273d4d
int64_t function_273d42(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x273d42
    int64_t v1; // 0x273d42
    int64_t v2 = v1;
    return (v2 + 105) % 256 | v2 & -256;
}

// Address range: 0x273dfa - 0x273e00
int64_t function_273dfa(void) {
    // 0x273dfa
    int64_t result; // 0x273dfa
    return result;
}

// Address range: 0x273e0d - 0x273e0e
int64_t function_273e0d(int64_t a1) {
    // 0x273e0d
    int64_t result; // 0x273e0d
    return result;
}

// Address range: 0x273e34 - 0x273e4f
int64_t function_273e34(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x273e34
    int64_t v1; // 0x273e34
    uint64_t v2 = v1;
    *(char *)a1 = __asm_insb((int16_t)a3);
    char * v3 = (char *)(v2 + (int64_t)&g1); // 0x273e35
    char v4 = v2 / 256; // 0x273e35
    bool v5; // 0x273e34
    *v3 = (char)v5 + v4 + *v3;
    unsigned char v6 = *(char *)0x33c00542; // 0x273e3b
    unsigned char v7 = v6 + v4; // 0x273e3b
    *(char *)0x33c00542 = v7;
    int32_t * v8 = (int32_t *)(a1 + 0x3d8f8b3 + 4 * a3); // 0x273e41
    *v8 = *v8 - 28 + (int32_t)(v7 < v6);
    return function_ffffffff8e014037();
}

// Address range: 0x273ebf - 0x273ed3
int64_t function_273ebf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_753a0ec5(); // 0x273ebf
    bool v1; // 0x273ebf
    if (!v1) {
        // 0x273f26
        return result;
    }
    int32_t * v2 = (int32_t *)(a1 - 78); // 0x273ecb
    *v2 = *v2 + (int32_t)a4;
    return function_ffffffffaee53248();
}

// Address range: 0x273f13 - 0x273f26
int64_t function_273f13(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a1 + 0x3621f871); // 0x273f19
    *v1 = *v1 + (char)a3;
    int64_t v2; // 0x273f13
    *(char *)a1 = *(char *)&v2;
    bool v3; // 0x273f13
    int64_t v4 = v3 ? -1 : 1; // 0x273f1f
    unknown_34bb9226(v4 + a1, v4 + a2);
    return __asm_wait();
}

// Address range: 0x273f91 - 0x273f94
int64_t function_273f91(void) {
    // 0x273f91
    int64_t result; // 0x273f91
    return result;
}

// Address range: 0x273fb1 - 0x273fb4
int64_t function_273fb1(void) {
    // 0x273fb1
    int64_t result; // 0x273fb1
    return result;
}

// Address range: 0x273fd8 - 0x273fd9
int64_t function_273fd8(void) {
    // 0x273fd8
    int64_t result; // 0x273fd8
    return result;
}

// Address range: 0x274068 - 0x274069
int64_t function_274068(void) {
    // 0x274068
    int64_t result; // 0x274068
    return result;
}

// Address range: 0x27406e - 0x27406f
int64_t function_27406e(void) {
    // 0x27406e
    int64_t result; // 0x27406e
    return result;
}

// Address range: 0x2740b1 - 0x2740c5
int64_t function_2740b1(int64_t a1, int64_t a2) {
    // 0x2740b1
    int64_t v1; // 0x2740b1
    int32_t * v2 = (int32_t *)(a1 + 0x153a9df3 + 8 * v1); // 0x2740b1
    *v2 = *v2 + (int32_t)a2;
    float80_t v3; // 0x2740b1
    *(int32_t *)(a1 + 0x3c01e89d) = (int32_t)v3;
    return function_33a14262();
}

// Address range: 0x2740c5 - 0x2740c6
int64_t function_2740c5(void) {
    // 0x2740c5
    int64_t result; // 0x2740c5
    return result;
}

// Address range: 0x2740c8 - 0x2740f1
int64_t function_2740c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2740c8
    unknown_ffffffff9f3218ce();
    unknown_ffffffffac97d6d9();
    int64_t v1 = __asm_iretd(); // 0x2740de
    int64_t v2; // 0x2740c8
    char * v3 = (char *)(v2 + 70); // 0x2740e4
    *v3 = *v3 | (char)v1;
    if (a4 != 1) {
        function_27406e();
    }
    // 0x2740ed
    return function_2740c5();
}

// Address range: 0x2740f4 - 0x2740f7
int64_t function_2740f4(int64_t a1) {
    // 0x2740f4
    int64_t result; // 0x2740f4
    return result;
}

// Address range: 0x274110 - 0x274111
int64_t function_274110(void) {
    // 0x274110
    int64_t result; // 0x274110
    return result;
}

// Address range: 0x274112 - 0x274113
int64_t function_274112(void) {
    // 0x274112
    int64_t result; // 0x274112
    return result;
}

// Address range: 0x274121 - 0x274152
int64_t function_274121(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x274121
    int64_t v1; // 0x274121
    int32_t v2 = v1; // 0x274121
    int32_t v3 = a2; // 0x274121
    int32_t v4 = v2 + v3; // 0x274121
    if (((v4 ^ v2) & (v4 ^ v3)) < 0) {
        function_274110();
    }
    int64_t v5 = unknown_277db431(); // 0x27412b
    char * v6 = (char *)(v5 + 0x2513a00); // 0x274130
    *v6 = *v6 + (char)v5;
    int32_t * v7 = (int32_t *)(v1 - 0x42ffc000); // 0x274138
    int64_t v8; // 0x274121
    *v7 = *v7 + (int32_t)(int64_t)&v8;
    *(char *)0x235c6fab128f0099 = (char)(v5 + a4 / 256);
    return unknown_47b89050();
}

// Address range: 0x274165 - 0x274168
int64_t function_274165(int64_t a1) {
    // 0x274165
    int64_t result; // 0x274165
    return result;
}

// Address range: 0x2741fc - 0x2741fd
int64_t function_2741fc(int64_t a1) {
    // 0x2741fc
    int64_t result; // 0x2741fc
    return result;
}

// Address range: 0x27427b - 0x27427f
int64_t function_27427b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 7); // 0x27427b
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x27427b
    return result;
}

// Address range: 0x274285 - 0x274288
int64_t function_274285(int64_t a1) {
    // 0x274285
    int64_t v1; // 0x274285
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x2742d8 - 0x2742dd
int64_t function_2742d8(void) {
    // 0x2742d8
    return function_ffffffffe864ae33();
}

// Address range: 0x274308 - 0x274320
int64_t function_274308(int64_t a1, int64_t a2, int64_t a3) {
    // 0x274308
    unknown_ffffffffd82d2b0e();
    __asm_int3();
    unknown_3f682a33();
    unknown_fffffffff2de2419();
    return function_20f5ff0();
}

// Address range: 0x274324 - 0x27432e
int64_t function_274324(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x274324
    int64_t result; // 0x274324
    char * v1 = (char *)(result + 0x1e88813); // 0x274325
    *v1 = *v1 - (char)a4;
    return result;
}

// Address range: 0x27433e - 0x274345
int64_t function_27433e(int64_t a1) {
    // 0x27433e
    int64_t result; // 0x27433e
    int32_t * v1 = (int32_t *)(result - 0x48109666); // 0x27433e
    *v1 = *v1 + (int32_t)a1;
    return result;
}

// Address range: 0x27438f - 0x274392
int64_t function_27438f(void) {
    // 0x27438f
    int64_t result; // 0x27438f
    return result;
}
