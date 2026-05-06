/*
 * Targeted RetDec C for native executable gap queue batch 532.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1123bf-0x1124bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1125bf-0x1127bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1127bf-0x1129bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1129bf-0x112bbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x112bbf-0x112dbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b93ce-0x1b95ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b95ce-0x1b97ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b97ce-0x1b99ce rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1123bf(void);
int64_t function_112405(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11248e(int64_t a1);
int64_t function_1125bf(void);
int64_t function_1125ec(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_112614(void);
int64_t function_112657(void);
int64_t function_11267f(int64_t a1);
int64_t function_1126be(void);
int64_t function_11279d(int64_t a1);
int64_t function_1127e5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1127fe(int64_t a1);
int64_t function_11288e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1128ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1128de(int64_t a1);
int64_t function_112954(void);
int64_t function_112990(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1129bc(int64_t a1, int64_t a2);
int64_t function_112a31(void);
int64_t function_112a3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_112a80(void);
int64_t function_112afc(void);
int64_t function_112b3d(void);
int64_t function_112b50(void);
int64_t function_112b5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_112b6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_112b7a(int64_t a1);
int64_t function_112baf(void);
int64_t function_112be3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_112ca8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_112ceb(int64_t a1);
int64_t function_112d1a(int64_t a1);
int64_t function_112d1c(int64_t a1);
int64_t function_112d64(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_112d9b(int64_t a1);
int64_t function_1b93ce(void);
int64_t function_1b93da(int64_t a1);
int64_t function_1b9429(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1b947e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1b9629(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1b977d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1b98b9(int64_t a1);
int64_t function_1b999e(void);
int64_t function_1f92c35();
int64_t function_cc59c();
int64_t function_ffffffff8b5728ab();
int64_t unknown_238f3822();
int64_t unknown_31b46204();
int64_t unknown_3227c286();
int64_t unknown_35da39c();
int64_t unknown_62077ea1();
int64_t unknown_6c1b585c();
int64_t unknown_ffffffff8e1c0230();
int64_t unknown_ffffffffe475064c();

// Address range: 0x1123bf - 0x1123c0
int64_t function_1123bf(void) {
    // 0x1123bf
    int64_t result; // 0x1123bf
    return result;
}

// Address range: 0x112405 - 0x11246a
int64_t function_112405(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x112405
    int64_t v1; // 0x112405
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x112405
    int64_t v3 = v2 ? -4 : 4; // 0x112405
    int64_t v4 = v3 + a2; // 0x112405
    int32_t * v5 = (int32_t *)v4; // 0x112417
    int32_t v6 = *v5; // 0x112417
    *v5 = v6 >> 3;
    if (a4 != 1) {
        // 0x112461
        int64_t v7; // 0x112405
        return v7 & -256 | (int64_t)__asm_in((int16_t)a3);
    }
    int32_t v8 = v1; // 0x11240c
    int64_t v9 = unknown_238f3822(v3 + a1, v4); // 0x11241c
    if (v6 < 0 != ((v8 + 0x78d00eff ^ v8) & (v8 ^ -0x80000000)) < 0) {
        // 0x112461
        return v9 & -256 | (int64_t)__asm_in((int16_t)a3);
    }
    char v10 = __readgsbyte(v9); // 0x112423
    char v11 = v9; // 0x112423
    __writegsbyte(v9, (char)((v6 & 4) != 0) - v11 + v10);
    char * v12 = (char *)v9; // 0x112430
    *v12 = *v12 - v11;
    int32_t * v13 = (int32_t *)v9; // 0x112432
    *v13 = *v13 + 0x823f5d7;
    return (v9 - ((int32_t)v9 < 0x6fc9dc01 ? 183 : 182)) % 256 | v9 & -256;
}

// Address range: 0x11248e - 0x112497
int64_t function_11248e(int64_t a1) {
    // 0x11248e
    int64_t v1; // 0x11248e
    int64_t v2 = v1;
    return v2 - ((int32_t)v1 > (int32_t)v2 ? 0x176000d4 : 0x176000d3) & 0xffffffff;
}

// Address range: 0x1125bf - 0x1125c7
int64_t function_1125bf(void) {
    // 0x1125bf
    int64_t v1; // 0x1125bf
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 | -0x17fe17e9;
    return (v2 + 132) % 256 | v2 & -256;
}

// Address range: 0x1125ec - 0x1125f1
int64_t function_1125ec(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x1125ec
    int64_t result; // 0x1125ec
    *(char *)a4 = (char)result + (char)(a3 / 256);
    return result;
}

// Address range: 0x112614 - 0x112615
int64_t function_112614(void) {
    // 0x112614
    int64_t result; // 0x112614
    return result;
}

// Address range: 0x112657 - 0x112658
int64_t function_112657(void) {
    // 0x112657
    int64_t result; // 0x112657
    return result;
}

// Address range: 0x11267f - 0x112680
int64_t function_11267f(int64_t a1) {
    // 0x11267f
    int64_t result; // 0x11267f
    return result;
}

// Address range: 0x1126be - 0x1126c3
int64_t function_1126be(void) {
    // 0x1126be
    return function_ffffffff8b5728ab();
}

// Address range: 0x11279d - 0x1127a0
int64_t function_11279d(int64_t a1) {
    // 0x11279d
    int64_t result; // 0x11279d
    return result;
}

// Address range: 0x1127e5 - 0x1127e7
int64_t function_1127e5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1127e5
    int64_t result; // 0x1127e5
    return result;
}

// Address range: 0x1127fe - 0x112805
int64_t function_1127fe(int64_t a1) {
    // 0x1127fe
    return unknown_31b46204(a1);
}

// Address range: 0x11288e - 0x1128a2
int64_t function_11288e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x11288e
    int64_t v1; // 0x11288e
    bool v2; // 0x11288e
    int32_t * v3 = (int32_t *)(a2 + 0x3d972b7e + 4 * v1 + (v2 ? -1 : 1)); // 0x112897
    *v3 = *v3 + (int32_t)a1;
    return v1 & 0xe8d60000 | (int64_t)&g1 | v1 + 127 & 232;
}

// Address range: 0x1128ba - 0x1128c0
int64_t function_1128ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1128ba
    int64_t v1; // 0x1128ba
    int64_t result = v1;
    bool v2; // 0x1128ba
    *(char *)result = (char)result + (char)a4 + (char)v2;
    return result;
}

// Address range: 0x1128de - 0x1128e1
int64_t function_1128de(int64_t a1) {
    // 0x1128de
    int64_t result; // 0x1128de
    return result;
}

// Address range: 0x112954 - 0x112955
int64_t function_112954(void) {
    // 0x112954
    int64_t result; // 0x112954
    return result;
}

// Address range: 0x112990 - 0x1129a3
int64_t function_112990(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x112990
    __asm_hlt((int64_t)&g2, (int64_t)&g2, (int64_t)&g2, (int64_t)&g2, (int64_t)&g2);
    int64_t v1; // 0x112990
    int64_t v2; // 0x112990
    int32_t * v3 = (int32_t *)(8 * v2 + 0x6953f474 + (int64_t)&v1); // 0x11299a
    *v3 = *v3 + (int32_t)a4;
    return function_112954();
}

// Address range: 0x1129bc - 0x112a2f
int64_t function_1129bc(int64_t a1, int64_t a2) {
    char v1 = *(char *)-0x3bc5b63b; // 0x1129be
    int64_t result; // 0x1129bc
    char v2 = result / 256; // 0x1129be
    char v3 = v1 + v2; // 0x1129be
    *(char *)-0x3bc5b63b = v3;
    if (v3 < 0 == ((v3 ^ v1) & (v3 ^ v2)) < 0 != v3 != 0) {
        // 0x1129c6
        return result;
    }
    // 0x112a29
    bool v4; // 0x1129bc
    int64_t v5 = 2 * result + (int64_t)v4 & 0xffffffff; // 0x1129bc
    *(int64_t *)(v5 - 8) = v5;
    return unknown_ffffffff8e1c0230();
}

// Address range: 0x112a31 - 0x112a35
int64_t function_112a31(void) {
    // 0x112a31
    int64_t result; // 0x112a31
    return result;
}

// Address range: 0x112a3f - 0x112a60
int64_t function_112a3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 + 0x7abb61ad); // 0x112a3f
    int64_t v2; // 0x112a3f
    *v1 = *v1 + (int32_t)v2;
    __asm_wait();
    unknown_6c1b585c();
    return v2 & 0xffffffff;
}

// Address range: 0x112a80 - 0x112a8c
int64_t function_112a80(void) {
    // 0x112a80
    int64_t v1; // 0x112a80
    int64_t v2 = v1;
    bool v3; // 0x112a80
    *(int32_t *)v2 = 2 * (int32_t)v2 | (int32_t)v3;
    int64_t result; // 0x112a80
    *(char *)result = *(char *)&result + 22;
    return result;
}

// Address range: 0x112afc - 0x112afd
int64_t function_112afc(void) {
    // 0x112afc
    int64_t result; // 0x112afc
    return result;
}

// Address range: 0x112b3d - 0x112b4e
int64_t function_112b3d(void) {
    // 0x112b3d
    unknown_ffffffffe475064c();
    bool v1; // 0x112b3d
    return 2 * __asm_wait() & 0xfffffffe | (int64_t)(bool)v1;
}

// Address range: 0x112b50 - 0x112b52
int64_t function_112b50(void) {
    // 0x112b50
    int64_t v1; // 0x112b50
    return function_112b6e(v1, v1, v1, v1);
}

// Address range: 0x112b5d - 0x112b61
int64_t function_112b5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x112b5d
    return __asm_hlt(a1, a2, a3, a4, a5);
}

// Address range: 0x112b6e - 0x112b72
int64_t function_112b6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x112b6e
    int64_t result; // 0x112b6e
    __asm_out(29, (char)result);
    return result;
}

// Address range: 0x112b7a - 0x112b82
int64_t function_112b7a(int64_t a1) {
    // 0x112b7a
    __asm_in_133((char)a1);
    return function_1f92c35();
}

// Address range: 0x112baf - 0x112bb0
int64_t function_112baf(void) {
    // 0x112baf
    int64_t result; // 0x112baf
    return result;
}

// Address range: 0x112be3 - 0x112bfe
int64_t function_112be3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x112be3
    int64_t v1; // 0x112be3
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a2 - 103 + v2); // 0x112be3
    *v3 = *v3 ^ 0x13d0027;
    int64_t v4; // 0x112be3
    *(char *)a3 = *(char *)&v4 - (char)(v2 / 256);
    return (v2 & 0xfffffff8) + 0x7101e8e4 & 0xfffffffc;
}

// Address range: 0x112ca8 - 0x112cb8
int64_t function_112ca8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x112ca8
    int64_t v1; // 0x112ca8
    int32_t * v2 = (int32_t *)(v1 + 85); // 0x112cad
    uint32_t v3 = *v2; // 0x112cad
    uint32_t v4 = v3 + (int32_t)a4; // 0x112cad
    *v2 = v4;
    int64_t result; // 0x112ca8
    int32_t v5 = *(int32_t *)&result; // 0x112cb0
    int64_t v6 = result;
    *(int32_t *)v6 = v5 + (int32_t)(v4 < v3) + (int32_t)v6;
    *(char *)result = *(char *)&result - 6;
    return result;
}

// Address range: 0x112ceb - 0x112cf4
int64_t function_112ceb(int64_t a1) {
    // 0x112ceb
    int64_t v1; // 0x112ceb
    return function_112d64(a1, v1, v1, v1, v1, v1, (int64_t)&g2);
}

// Address range: 0x112d1a - 0x112d1b
int64_t function_112d1a(int64_t a1) {
    // 0x112d1a
    int64_t result; // 0x112d1a
    return result;
}

// Address range: 0x112d1c - 0x112d22
int64_t function_112d1c(int64_t a1) {
    // 0x112d1c
    int64_t result; // 0x112d1c
    return result;
}

// Address range: 0x112d64 - 0x112d72
int64_t function_112d64(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    char * v1 = (char *)(a4 - 0x2bf92a7d); // 0x112d66
    *v1 = *v1 + (char)a6;
    return a6 & 0xffffffff;
}

// Address range: 0x112d9b - 0x112da6
int64_t function_112d9b(int64_t a1) {
    // 0x112d9b
    unknown_62077ea1(a1);
    return 0x6faa045;
}

// Address range: 0x1b93ce - 0x1b93d6
int64_t function_1b93ce(void) {
    // 0x1b93ce
    int64_t v1; // 0x1b93ce
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x1b93da - 0x1b93e4
int64_t function_1b93da(int64_t a1) {
    // 0x1b93da
    int64_t v1; // 0x1b93da
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    *(char *)a1 = -1;
    return v2 + v1 & 0xffffffff;
}

// Address range: 0x1b9429 - 0x1b9438
int64_t function_1b9429(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 0x7f64fbaf); // 0x1b9429
    int64_t result; // 0x1b9429
    *v1 = *v1 + (int32_t)result;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return result;
}

// Address range: 0x1b947e - 0x1b9629
int64_t function_1b947e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = unknown_3227c286(); // 0x1b9480
    int32_t * v2 = (int32_t *)(a7 + a1); // 0x1b9485
    *v2 = *v2 ^ -0x17fca5c6;
    int64_t v3; // 0x1b947e
    *(int32_t *)a3 = *(int32_t *)&v3 + (int32_t)a7;
    int64_t v4; // 0x1b947e
    *(char *)a1 = *(char *)&v4;
    bool v5; // 0x1b947e
    int64_t v6 = v5 ? -1 : 1; // 0x1b948e
    int64_t v7 = v6 + a1; // 0x1b948e
    int64_t v8 = v6 + a2; // 0x1b948e
    char v9 = *(char *)(v1 + 5); // 0x1b9490
    int64_t v10; // 0x1b947e
    int64_t v11 = (uint64_t)v10 % 256 | a3 & -0x10000 | 256 * (int64_t)(v9 | (char)(a3 / 256)); // 0x1b9493
    int64_t v12 = unknown_35da39c(v7, v8, v11); // 0x1b9496
    char * v13 = (char *)(v12 - 0x7eb76400); // 0x1b949b
    *v13 = *v13 + (char)v12;
    char v14 = __asm_in((int16_t)v11); // 0x1b94a1
    char * v15 = (char *)(v12 & -256 | (int64_t)v14); // 0x1b94a2
    *v15 = (*v15 | v14) + v14;
    int64_t v16 = 0x360d262e; // bp-8, 0x1b951b
    int64_t v17 = (int64_t)&v16; // 0x1b9575
    int64_t v18 = *(int64_t *)(v17 + 16); // 0x1b957d
    int64_t * v19 = (int64_t *)(v17 - 8); // 0x1b957d
    int64_t * v20 = (int64_t *)(v17 - 16); // 0x1b9581
    *v19 = 0xd9cd6df;
    *v20 = 0x5d7f24ef;
    int64_t v21 = v17 + 8; // 0x1b95a4
    int64_t * v22 = (int64_t *)v21; // 0x1b95a4
    *v22 = *v19;
    *v20 = v7;
    *(int64_t *)(v17 - 24) = v18 ^ 0x5bbb582a;
    *v19 = v18;
    *(int64_t *)(v17 + 24) = v18;
    *v19 = v11;
    *v19 = v21;
    v16 = *v22;
    *v19 = v21;
    return function_cc59c(*v20, v8, *v19, a7, a5, a6, v16, 0x1b8457, 169);
}

// Address range: 0x1b9629 - 0x1b977d
int64_t function_1b9629(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1b9629
    int64_t v1; // 0x1b9629
    int64_t result = function_cc59c(a1, a2, a3, a4, v1, v1, a5, (int64_t)&g2, (int64_t)&g2); // 0x1b9778
    return result;
}

// Address range: 0x1b977d - 0x1b98b0
int64_t function_1b977d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1b977d
    bool v1; // 0x1b977d
    int64_t result = function_cc59c(a1, a2, a3, a4, a5, a6, 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2, (int64_t)&g2, (int64_t)&g2); // 0x1b98ab
    return result;
}

// Address range: 0x1b98b9 - 0x1b98ba
int64_t function_1b98b9(int64_t a1) {
    // 0x1b98b9
    int64_t result; // 0x1b98b9
    return result;
}

// Address range: 0x1b999e - 0x1b99a1
int64_t function_1b999e(void) {
    // 0x1b999e
    int64_t result; // 0x1b999e
    return result;
}
