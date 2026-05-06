/*
 * Targeted RetDec C for native executable gap queue batch 552.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xf7d9c-0xf7f9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf7f9c-0xf819c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf819c-0xf839c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf839c-0xf859c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf859c-0xf879c rank=- name=- kind=- bytes=- uncovered=-
 *   0x447f25-0x448125 rank=- name=- kind=- bytes=- uncovered=-
 *   0x448525-0x448725 rank=- name=- kind=- bytes=- uncovered=-
 *   0x448725-0x448925 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_11f97ed9();
int64_t function_447f25(int64_t a1, int64_t a2);
int64_t function_447f37(int64_t a1, int64_t a2, int64_t a3);
int64_t function_447fc1(int64_t a1);
int64_t function_448079(void);
int64_t function_448080(int64_t a1);
int64_t function_448086(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4480ca(int64_t a1);
int64_t function_4480e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_448525(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44853e(int64_t a1);
int64_t function_448540(int64_t a1);
int64_t function_448546(void);
int64_t function_44857c(void);
int64_t function_44858c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4485a1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4485a6(void);
int64_t function_4485c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_448631(void);
int64_t function_44869e(int64_t a1);
int64_t function_4486be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_448764(void);
int64_t function_4487a0(void);
int64_t function_4487a9(void);
int64_t function_4487be(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4487fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_448851(void);
int64_t function_4488f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_448916(void);
int64_t function_448918(int64_t a1, int64_t a2);
int64_t function_44891f(void);
int64_t function_44897c();
int64_t function_cc59c();
int64_t function_f7d9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_f7eae(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f7feb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_f81a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f82d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_f8463(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f863e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);

// Address range: 0xf7d9c - 0xf7eae
int64_t function_f7d9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xf7d9c
    int64_t v1; // bp-32, 0xf7d9c
    int64_t v2 = (int64_t)&v1; // 0xf7e50
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0xf7e59
    *v3 = 0xf4cb5;
    *(int64_t *)(v2 + 32) = v1;
    v1 = a6;
    *v3 = v2;
    int64_t v4 = v1; // 0xf7e7b
    v1 = v2 + 16;
    return function_cc59c(a1, a2, a3, a4, a5, v4, a7);
}

// Address range: 0xf7eae - 0xf7feb
int64_t function_f7eae(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x6ae32f47; // bp-56, 0xf7f4a
    int64_t v2; // 0xf7eae
    return function_cc59c(a1, a2, a3, v2, v2, v2, (int64_t)&v1);
}

// Address range: 0xf7feb - 0xf81a6
int64_t function_f7feb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xf7feb
    return function_cc59c(a1, a2, a3, a4, 0xf5728, a6, 0x6903d485);
}

// Address range: 0xf81a6 - 0xf82d0
int64_t function_f81a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5; // bp-40, 0xf8209
    int64_t v2 = (int64_t)&v1; // 0xf8239
    int64_t v3 = *(int64_t *)(v2 + 16); // 0xf8241
    int64_t * v4 = (int64_t *)(v2 - 8); // 0xf8241
    *v4 = v3;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0xf8245
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0xf8266
    bool v7; // 0xf81a6
    *v6 = 0x4000 * (int64_t)v7 | 2048 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | 128 * (int64_t)v7 | 64 * (int64_t)v7 | 16 * (int64_t)v7 | (int64_t)v7 | 4 * (int64_t)v7 | 2;
    *(int64_t *)(v2 + 8) = *v4;
    *v4 = 0x12c2c5ad;
    *v5 = 0x2b4b0946;
    *v6 = v3;
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = v1;
    *v5 = v2;
    int64_t v8 = *v4; // 0xf82b5
    *v5 = v8;
    *v6 = v8;
    int64_t v9; // 0xf81a6
    return function_cc59c(a1, a2, a3, a4, a5, v9, v1);
}

// Address range: 0xf82d0 - 0xf8463
int64_t function_f82d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xf82d0
    int64_t v1; // bp-48, 0xf82d0
    int64_t v2 = (int64_t)&v1; // 0xf83b1
    int64_t v3 = v2 + 16; // 0xf83b8
    v1 = v3;
    int64_t v4 = v2 + 32; // 0xf83c7
    int64_t v5 = *(int64_t *)v4; // 0xf83c7
    int64_t v6 = v2 + 8; // 0xf83c7
    int64_t * v7 = (int64_t *)v6; // 0xf83c7
    int64_t * v8 = (int64_t *)(v2 - 8); // 0xf83ce
    *v8 = v5;
    *v7 = v6;
    v1 = a6;
    *(int64_t *)(v2 + 24) = *v7;
    *v7 = 0xae50a20;
    *v8 = a5;
    v1 = v5;
    v1 = v5;
    *(int64_t *)(v2 + 40) = *v7;
    int64_t * v9 = (int64_t *)v3; // 0xf841c
    *v9 = *v8;
    *v7 = v3;
    *v9 = v4;
    int64_t v10; // 0xf82d0
    return function_cc59c(a1, a2, a3, a4, *v9, v10, v10);
}

// Address range: 0xf8463 - 0xf863e
int64_t function_f8463(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf8463
    int64_t v1; // bp-72, 0xf8463
    v1 = (int64_t)&v1;
    int64_t v2; // 0xf8463
    return function_cc59c(v2, a2, 310, a4, v2, v2, 0xf0afa72);
}

// Address range: 0xf863e - 0xf878d
int64_t function_f863e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xf863e
    int64_t v1; // bp-48, 0xf863e
    int64_t v2 = (int64_t)&v1; // 0xf86e6
    int64_t v3 = v2 + 16; // 0xf86ec
    v1 = v3;
    int64_t v4 = *(int64_t *)(v2 + 32); // 0xf86fa
    int64_t * v5 = (int64_t *)(v2 + 8); // 0xf86fa
    *v5 = v4;
    v1 = a7;
    int64_t * v6 = (int64_t *)(v2 + 24); // 0xf8741
    *v6 = *v5;
    *v5 = 0x416ba2c8;
    *(int64_t *)(v2 - 8) = v4;
    *(int64_t *)(v2 + 40) = *v5;
    int64_t * v7 = (int64_t *)v3; // 0xf8759
    int64_t v8 = *v7; // 0xf8759
    *v5 = v8;
    v1 = v8;
    int64_t v9 = *v6; // 0xf876f
    *v7 = v9;
    *v5 = v9;
    int64_t v10; // 0xf863e
    return function_cc59c(v10, a2, a3, a4, a5, a6, 0x32a3e008);
}

// Address range: 0x447f25 - 0x447f2f
int64_t function_447f25(int64_t a1, int64_t a2) {
    // 0x447f25
    return (int64_t)*(int32_t *)-0x15f67e4e52b1edc;
}

// Address range: 0x447f37 - 0x447f49
int64_t function_447f37(int64_t a1, int64_t a2, int64_t a3) {
    // 0x447f37
    *(char *)0x3734638cdb2702d7 = (char)a2;
    return a2 & 0xffffffff;
}

// Address range: 0x447fc1 - 0x447fc4
int64_t function_447fc1(int64_t a1) {
    // 0x447fc1
    int64_t result; // 0x447fc1
    return result;
}

// Address range: 0x448079 - 0x44807b
int64_t function_448079(void) {
    // 0x448079
    int64_t v1; // 0x448079
    return function_448086(v1, v1, v1, v1);
}

// Address range: 0x448080 - 0x448083
int64_t function_448080(int64_t a1) {
    // 0x448080
    int64_t result; // 0x448080
    return result;
}

// Address range: 0x448086 - 0x4480b5
int64_t function_448086(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x448086
    int64_t v1; // 0x448086
    int64_t v2 = v1;
    int64_t result = v1 & 0xffffffff ^ 0x7dda3130; // 0x448086
    *(int32_t *)v2 = (int32_t)(v2 ^ a1);
    int32_t v3 = a4; // 0x44809f
    int32_t v4 = *(int32_t *)(a4 - 0x3ecc4aee); // 0x44809f
    uint32_t v5 = v3 - v4; // 0x44809f
    if (((v5 ^ v3) & (v4 ^ v3)) < 0) {
        // 0x4480b1
        return result;
    }
    int64_t result2 = result & 0xffffff00 | (int64_t)*(char *)(result % 256 + v2); // 0x4480ac
    if (v4 >= v3) {
        // 0x4480b1
        return result2;
    }
    // 0x4480b2
    bool v6; // 0x448086
    int64_t v7 = v6 ? -1 : 1; // 0x44809e
    __asm_rcl(*(char *)(int64_t)v5);
    *(int32_t *)(v7 + a1) = *(int32_t *)(v7 + a2);
    return result2;
}

// Address range: 0x4480ca - 0x4480cd
int64_t function_4480ca(int64_t a1) {
    // 0x4480ca
    int64_t result; // 0x4480ca
    return result;
}

// Address range: 0x4480e0 - 0x4480e7
int64_t function_4480e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4480e0
    int64_t result; // 0x4480e0
    return result;
}

// Address range: 0x448525 - 0x44852b
int64_t function_448525(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a3 + 97); // 0x448525
    *v1 = *v1 - (char)a5;
    int64_t result; // 0x448525
    return result;
}

// Address range: 0x44853e - 0x44853f
int64_t function_44853e(int64_t a1) {
    // 0x44853e
    int64_t result; // 0x44853e
    return result;
}

// Address range: 0x448540 - 0x448543
int64_t function_448540(int64_t a1) {
    // 0x448540
    int64_t result; // 0x448540
    return result;
}

// Address range: 0x448546 - 0x448547
int64_t function_448546(void) {
    // 0x448546
    int64_t result; // 0x448546
    return result;
}

// Address range: 0x44857c - 0x44857f
int64_t function_44857c(void) {
    // 0x44857c
    int64_t result; // 0x44857c
    return result;
}

// Address range: 0x44858c - 0x44858e
int64_t function_44858c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44858c
    return a3 & 0xffffffff;
}

// Address range: 0x4485a1 - 0x4485a3
int64_t function_4485a1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4485a1
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x4485a1
    return result;
}

// Address range: 0x4485a6 - 0x4485a7
int64_t function_4485a6(void) {
    // 0x4485a6
    int64_t result; // 0x4485a6
    return result;
}

// Address range: 0x4485c7 - 0x448616
int64_t function_4485c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = a3 | a2; // 0x4485c7
    unsigned char v2 = llvm_ctpop_i8(v1); // 0x4485c7
    *(char *)a2 = v1;
    float80_t v3; // 0x4485c7
    *(int32_t *)a3 = (int32_t)(v2 % 2 == 0 ? v3 : v3);
    int64_t v4; // 0x4485c7
    return v4 & 0xffffffff ^ 0x735b5dfd;
}

// Address range: 0x448631 - 0x44863c
int64_t function_448631(void) {
    // 0x448631
    return __asm_iretd() + 0xb0d08e7a & 0xffffffff;
}

// Address range: 0x44869e - 0x44869f
int64_t function_44869e(int64_t a1) {
    // 0x44869e
    int64_t result; // 0x44869e
    return result;
}

// Address range: 0x4486be - 0x448763
int64_t function_4486be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2; // 0x4486be
    int64_t v3; // 0x4486be
    bool v4; // 0x4486be
    if (v4) {
        // 0x448726
        *(int32_t *)(a4 + 76) = (int32_t)(int64_t)&v2;
        __asm_outsb((int16_t)a3, *(char *)&v1);
        char v5 = __asm_in(43); // 0x448731
        int64_t v6 = v3 & -256 | (int64_t)v5; // 0x448731
        char * v7 = (char *)(v6 + 0x38705f62); // 0x448734
        unsigned char v8 = *v7; // 0x448734
        unsigned char v9 = v8 + (char)v3; // 0x448734
        *v7 = v9;
        return v6 & -256 | (int64_t)(v5 - (v9 < v8 ? 72 : 71));
    }
    int64_t result = v3 & 0xffffffff; // 0x4486c8
    __asm_out_133(34, (char)v3);
    char * v10 = (char *)(result - 107); // 0x4486d0
    *v10 = *v10 - (char)a3;
    int64_t v11 = (int64_t)&v2; // 0x4486d3
    int64_t v12 = v1;
    v1 = (int64_t)(*(int32_t *)(4 * v12 + v11) + (int32_t)v12);
    *(int32_t *)a1 = (int32_t)v3;
    unsigned char v13 = *(char *)(v3 - 92) ^ (char)v11; // 0x4486da
    int64_t v14 = v11 & -256 | (int64_t)v13; // 0x4486da
    *(int64_t *)(v14 - 8) = v3 & 0xffffffff;
    if (a4 == 1 || v13 == 0) {
        // 0x4486e4
        return result;
    }
    // 0x448756
    *(int64_t *)(v14 + 0x399d) = 109;
    return function_11f97ed9();
}

// Address range: 0x448764 - 0x448767
int64_t function_448764(void) {
    // 0x448764
    int64_t result; // 0x448764
    return result;
}

// Address range: 0x4487a0 - 0x4487a1
int64_t function_4487a0(void) {
    // 0x4487a0
    int64_t result; // 0x4487a0
    return result;
}

// Address range: 0x4487a9 - 0x4487aa
int64_t function_4487a9(void) {
    // 0x4487a9
    int64_t result; // 0x4487a9
    return result;
}

// Address range: 0x4487be - 0x4487ef
int64_t function_4487be(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 0x6d62d865); // 0x4487c3
    *v1 = *v1 ^ (int32_t)a3;
    int64_t v2; // 0x4487be
    uint32_t v3 = *(int32_t *)(v2 + 2 * a3); // 0x4487c9
    int32_t * v4 = (int32_t *)(v2 & 0x2c81491c); // 0x4487cc
    *v4 = *v4 + (int32_t)a2 + (int32_t)(v3 < (int32_t)v2);
    int64_t v5 = v2 & 28 | 32; // 0x4487ce
    if ((char)v5 > 47) {
        // 0x4487ee
        return v5 + 208 & 252 | v2 & 0x2c814900;
    }
    // 0x4487df
    return function_4487a0();
}

// Address range: 0x4487fa - 0x448829
int64_t function_4487fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4487fa
    int64_t v1; // 0x4487fa
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)v1; // 0x4487fa
    uint32_t v4 = *(int32_t *)(v1 + 75); // 0x4487fa
    int64_t result = v3 - v4; // 0x4487fa
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    uint32_t v5 = (int32_t)(v4 > v3) + (int32_t)a4 + *(int32_t *)0x6a6827a2; // 0x4487ff
    int64_t v6 = v5; // 0x4487ff
    *(int64_t *)(result - 8) = 51;
    int32_t * v7 = (int32_t *)(v6 + 0x53683a51); // 0x44880f
    *v7 = *v7 & v5;
    char * v8 = (char *)(a1 - 52); // 0x44881b
    *v8 = *v8 & (char)v5;
    int32_t * v9 = (int32_t *)(4 * a1 - 80 + v6); // 0x44881f
    *v9 = *v9 ^ v5;
    *(int64_t *)(((v2 + 138) % 256 | v2 & 0xffffff00) - 16) = v6;
    return result;
}

// Address range: 0x448851 - 0x448854
int64_t function_448851(void) {
    // 0x448851
    int64_t result; // 0x448851
    return result;
}

// Address range: 0x4488f2 - 0x44890c
int64_t function_4488f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4488f2
    int64_t v1; // 0x4488f2
    char * v2 = (char *)(v1 + 39); // 0x4488f4
    *v2 = *v2 + (char)v1;
    return (int64_t)(-66 * *(int32_t *)(a4 - 0x1795929d));
}

// Address range: 0x448916 - 0x448918
int64_t function_448916(void) {
    // 0x448916
    return function_44897c();
}

// Address range: 0x448918 - 0x44891c
int64_t function_448918(int64_t a1, int64_t a2) {
    // 0x448918
    int64_t v1; // 0x448918
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x44891f - 0x448922
int64_t function_44891f(void) {
    // 0x44891f
    return function_44897c();
}
