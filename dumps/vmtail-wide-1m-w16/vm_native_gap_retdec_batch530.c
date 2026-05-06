/*
 * Targeted RetDec C for native executable gap queue batch 530.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x410f42-0x411142 rank=- name=- kind=- bytes=- uncovered=-
 *   0x411142-0x411342 rank=- name=- kind=- bytes=- uncovered=-
 *   0x411342-0x411542 rank=- name=- kind=- bytes=- uncovered=-
 *   0x411542-0x411742 rank=- name=- kind=- bytes=- uncovered=-
 *   0x411742-0x411942 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42161f-0x42181f rank=- name=- kind=- bytes=- uncovered=-
 *   0x42181f-0x421a1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x421a1f-0x421c1f rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
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

int64_t function_10e6c56b();
int64_t function_1b5e6232();
int64_t function_410f2d();
int64_t function_410f42(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_410fb8(void);
int64_t function_410fe3(void);
int64_t function_411014(void);
int64_t function_411021(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41105b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_411068(void);
int64_t function_41107e(int64_t a1);
int64_t function_411093(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4110cc(void);
int64_t function_4110ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41115f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41119a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4111dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_41122a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4112e5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_4112ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4113a2(void);
int64_t function_4113b0(void);
int64_t function_4113b5(void);
int64_t function_4113c1(void);
int64_t function_411409(void);
int64_t function_411444(int64_t a1, int64_t a2, int64_t a3);
int64_t function_411472(void);
int64_t function_411490(int64_t a1);
int64_t function_41149a(void);
int64_t function_4114b5(int64_t a1);
int64_t function_4114ef(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4114f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4114fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41150a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41160e(int64_t a1);
int64_t function_411641(int64_t a1);
int64_t function_411659(void);
int64_t function_4116dc(void);
int64_t function_4116f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41181f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41184d(void);
int64_t function_411931(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4215da();
int64_t function_42161f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_421649(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4216d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_42174b(int64_t a1);
int64_t function_42175a(void);
int64_t function_421769(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4217d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4218b5(void);
int64_t function_4218b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4218cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4218f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_421904(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_421920(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_421995(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4219bc(int64_t a1);
int64_t function_4219d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_421a55(int64_t a1);
int64_t function_421aad(void);
int64_t function_421ada(void);
int64_t function_421adb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_421afb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_421b10(int64_t a1, int64_t a2, int64_t a3);
int64_t function_421b56(void);
int64_t function_421b80(void);
int64_t function_421b9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_421ba5(void);
int64_t function_421bbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_421bcc(void);
int64_t function_421bd5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4361657e();
int64_t function_699d54ae();
int64_t function_708a6f2e();
int64_t function_ffffffffd92eb262();
int64_t function_ffffffffe1779465();
int64_t function_ffffffffeafe5005();

// Address range: 0x410f42 - 0x410f8f
int64_t function_410f42(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x410f42
    int64_t v1; // 0x410f42
    bool v2; // 0x410f42
    int64_t result = v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512; // 0x410f42
    int64_t v3 = 96; // bp-8, 0x410f43
    int32_t v4 = (int64_t)&v3 | a2; // 0x410f45
    if (v4 < 0) {
        // 0x410f89
        return result;
    }
    int64_t v5 = result; // 0x410f49
    if (v4 == 0) {
        v5 = function_410f2d();
    }
    // 0x410f4b
    *(int32_t *)a1 = (int32_t)v5;
    return v5 & 0xd61a64fc | 0x29e59b03;
}

// Address range: 0x410fb8 - 0x410fbb
int64_t function_410fb8(void) {
    // 0x410fb8
    int64_t result; // 0x410fb8
    return result;
}

// Address range: 0x410fe3 - 0x410fe4
int64_t function_410fe3(void) {
    // 0x410fe3
    int64_t result; // 0x410fe3
    return result;
}

// Address range: 0x411014 - 0x411017
int64_t function_411014(void) {
    // 0x411014
    int64_t result; // 0x411014
    return result;
}

// Address range: 0x411021 - 0x41105a
int64_t function_411021(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x411021
    bool v1; // 0x411021
    if (v1) {
        // 0x411023
        return __asm_int1();
    }
    // 0x411057
    int64_t result; // 0x411021
    *(char *)a4 = (char)result + (char)a4;
    return result;
}

// Address range: 0x41105b - 0x41105e
int64_t function_41105b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41105b
    int64_t v1; // 0x41105b
    return v1 & 0xffffffff;
}

// Address range: 0x411068 - 0x411069
int64_t function_411068(void) {
    // 0x411068
    int64_t result; // 0x411068
    return result;
}

// Address range: 0x41107e - 0x411088
int64_t function_41107e(int64_t a1) {
    // 0x41107e
    bool v1; // 0x41107e
    if (v1) {
        function_411068();
    }
    char * v2 = (char *)(a1 + 75); // 0x411082
    int64_t v3; // 0x41107e
    *v2 = *v2 + (char)((uint64_t)v3 / 256);
    return function_4110cc();
}

// Address range: 0x411093 - 0x4110c1
int64_t function_411093(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x411093
    int64_t v1; // 0x411093
    int32_t * v2 = (int32_t *)((a3 & 0xff00 & 256 * v1 | a3 & -0xff01) - 0x33bb2734); // 0x411097
    *v2 = *v2 - (int32_t)a2;
    uint32_t v3 = (int32_t)v1; // 0x41109d
    uint32_t v4 = *(int32_t *)(a4 + 0x7d8c6d2f + 2 * v1); // 0x41109d
    while (v4 > v3) {
        // continue -> 0x4110a4
    }
    int32_t v5 = *(int32_t *)(v1 + 124); // 0x4110a6
    __asm_hlt();
    int32_t * v6 = (int32_t *)(a2 + 127 + 8 * (int64_t)((int32_t)(v4 > v3) + (int32_t)v1 - v5)); // 0x4110ac
    int32_t v7; // 0x411093
    *v6 = (int32_t)(int64_t)&v7;
    *(int64_t *)((int64_t)*v6 - 8) = 97;
    return function_4361657e();
}

// Address range: 0x4110cc - 0x4110d1
int64_t function_4110cc(void) {
    // 0x4110cc
    int64_t v1; // 0x4110cc
    bool v2; // 0x4110cc
    return v1 - (v2 ? 0xfb521827 : 0xfb521826) & 0xffffffff;
}

// Address range: 0x4110ff - 0x41111f
int64_t function_4110ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x4110ff
    if ((char)v2 - *(char *)(a2 - 0x3994a852) < 0) {
        // 0x41111e
        return __asm_sti();
    }
    int32_t * v3 = (int32_t *)(4 * a3 + a4); // 0x411107
    *v3 = *v3 + (int32_t)v2;
    *(char *)a1 = __readfsbyte(a2);
    return a4 & 0xffffff00 | (int64_t)(*(char *)&v1 ^ (char)a4);
}

// Address range: 0x41115f - 0x41116b
int64_t function_41115f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41115f
    int64_t result; // 0x41115f
    *(int32_t *)a2 = (int32_t)(result | result);
    int32_t * v1 = (int32_t *)(a4 - 58); // 0x411163
    *v1 = *v1 | (int32_t)a2;
    return result;
}

// Address range: 0x41119a - 0x4111a1
int64_t function_41119a(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(4 * a2 + a3); // 0x41119a
    bool v2; // 0x41119a
    *v1 = *v1 + 42 + (int32_t)v2;
    int64_t result; // 0x41119a
    return result;
}

// Address range: 0x4111dc - 0x41122a
int64_t function_4111dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2; // 0x4111dc
    int64_t v3 = v2 + 0x72c86dbc; // 0x4111dc
    if ((v3 & 256) != 0) {
        // 0x4111eb
        return function_ffffffffd92eb262();
    }
    int64_t v4 = v3 & 0xffffffff ^ 0x75d8e455; // 0x4111e3
    int32_t * v5 = (int32_t *)(((v4 + 221) % 256 | v4 & 0xffffff00) + 60); // 0x411216
    *v5 = *(int32_t *)(a1 - 98) | (int32_t)a1 | *v5;
    *(char *)0x71653635 = *(char *)0x71653635 & -100;
    return (int64_t)*(int32_t *)&v1;
}

// Address range: 0x41122a - 0x4112a1
int64_t function_41122a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x41122a
    bool v1; // 0x41122a
    if (!v1 && !v1) {
        // 0x411273
        int64_t result; // 0x41122a
        int32_t * v2 = (int32_t *)(result - 0x70e141e2); // 0x411273
        *v2 = *v2 + (int32_t)a1;
        int32_t * v3 = (int32_t *)(a1 + 126); // 0x411281
        *v3 = *v3 ^ (int32_t)a3 & -256;
        return result;
    }
    char v4 = *(char *)(a1 + 85); // 0x411235
    int32_t v5 = (int32_t)__asm_int3() - 0x2d8ff55d; // 0x411243
    int32_t result2 = v5; // 0x41124a
    if ((a4 & -256 || (int64_t)(v4 || (char)a4)) != 1 != (v5 == 0)) {
        // 0x41124c
        result2 = *(int32_t *)-0x4d1ec92fae15a72 ^ 113;
    }
    // 0x411257
    return result2;
}

// Address range: 0x4112e5 - 0x4112ff
int64_t function_4112e5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x4112e5
    int64_t v1; // 0x4112e5
    bool v2; // 0x4112e5
    if (v2) {
        uint64_t v3 = a4 / 256; // 0x4112ef
        char * v4 = (char *)((v1 & (v3 | -256)) + 46); // 0x4112f2
        unsigned char v5 = *v4; // 0x4112f2
        unsigned char v6 = (char)v3; // 0x4112f2
        *v4 = v5 - v6;
        char * v7 = (char *)(v1 + 22); // 0x4112f5
        *v7 = (char)(v5 < v6) - (char)a4 + *v7;
        return a2 & 0xffffffff;
    }
    // 0x4112ec
    return v1 & -256 | 156;
}

// Address range: 0x4112ff - 0x41130f
int64_t function_4112ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4112ff
    int64_t v1; // 0x4112ff
    uint32_t v2 = (int32_t)v1; // 0x4112ff
    int32_t * v3 = (int32_t *)(a4 - 0x235dc207); // 0x411304
    *v3 = *v3 + (int32_t)v1 + (int32_t)(v2 + (int32_t)a1 < v2);
    return function_708a6f2e();
}

// Address range: 0x4113a2 - 0x4113a7
int64_t function_4113a2(void) {
    // 0x4113a2
    return function_ffffffffeafe5005();
}

// Address range: 0x4113b0 - 0x4113b1
int64_t function_4113b0(void) {
    // 0x4113b0
    int64_t result; // 0x4113b0
    return result;
}

// Address range: 0x4113b5 - 0x4113b6
int64_t function_4113b5(void) {
    // 0x4113b5
    int64_t result; // 0x4113b5
    return result;
}

// Address range: 0x4113c1 - 0x4113c3
int64_t function_4113c1(void) {
    // 0x4113c1
    return function_4113b5();
}

// Address range: 0x411409 - 0x41140c
int64_t function_411409(void) {
    // 0x411409
    int64_t result; // 0x411409
    return result;
}

// Address range: 0x411444 - 0x411457
int64_t function_411444(int64_t a1, int64_t a2, int64_t a3) {
    // 0x411444
    int64_t v1; // 0x411444
    int32_t * v2 = (int32_t *)(v1 - 84); // 0x41144d
    bool v3; // 0x411444
    *v2 = (int32_t)v1 + (int32_t)a3 + (int32_t)v3 | *v2;
    return function_10e6c56b();
}

// Address range: 0x411472 - 0x411474
int64_t function_411472(void) {
    // 0x411472
    int64_t v1; // 0x411472
    return function_4114ef(v1, v1, v1);
}

// Address range: 0x411490 - 0x41149a
int64_t function_411490(int64_t a1) {
    // 0x411490
    return (int64_t)*(int32_t *)-0x2eb60a5efdfd0f18;
}

// Address range: 0x41149a - 0x41149d
int64_t function_41149a(void) {
    // 0x41149a
    int64_t result; // 0x41149a
    return result;
}

// Address range: 0x4114b5 - 0x4114b6
int64_t function_4114b5(int64_t a1) {
    // 0x4114b5
    int64_t result; // 0x4114b5
    return result;
}

// Address range: 0x4114ef - 0x4114f7
int64_t function_4114ef(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 0x5ac117e4); // 0x4114ef
    int64_t v2; // 0x4114ef
    int32_t v3 = v2; // 0x4114ef
    bool v4; // 0x4114ef
    *v1 = *v1 + v3 + (int32_t)v4;
    return 0x10000 * v3 >> 16;
}

// Address range: 0x4114f8 - 0x4114fb
int64_t function_4114f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4114f8
    return a3 & 0xffffffff;
}

// Address range: 0x4114fb - 0x411507
int64_t function_4114fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4114fb
    int64_t result; // 0x4114fb
    return result;
}

// Address range: 0x41150a - 0x411602
int64_t function_41150a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41150a
    int64_t v1; // 0x41150a
    int32_t v2 = v1; // 0x41150a
    __asm_out((int16_t)a3, v2);
    int32_t * v3 = (int32_t *)(2 * v1 - 0x37fbcb69); // 0x411557
    bool v4; // 0x41150a
    *v3 = (int32_t)v4 - v2 + *v3;
    int32_t * v5 = (int32_t *)(v1 - 112); // 0x41155e
    *v5 = *v5 | (int32_t)a1;
    int64_t result = __asm_int3(); // 0x411561
    int64_t v6; // 0x41150a
    int32_t * v7 = (int32_t *)(2 * (v1 & 0x7fffffffffff00ff | (int64_t)&g1) + (int64_t)&v6); // 0x411572
    *v7 = *v7 & 113;
    return result;
}

// Address range: 0x41160e - 0x41160f
int64_t function_41160e(int64_t a1) {
    // 0x41160e
    int64_t result; // 0x41160e
    return result;
}

// Address range: 0x411641 - 0x411647
int64_t function_411641(int64_t a1) {
    // 0x411641
    return function_699d54ae();
}

// Address range: 0x411659 - 0x41165f
int64_t function_411659(void) {
    // 0x411659
    int64_t result; // 0x411659
    return result;
}

// Address range: 0x4116dc - 0x4116dd
int64_t function_4116dc(void) {
    // 0x4116dc
    int64_t result; // 0x4116dc
    return result;
}

// Address range: 0x4116f0 - 0x411806
int64_t function_4116f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4116f0
    int64_t v1; // 0x4116f0
    uint64_t v2 = v1;
    bool v3; // 0x4116f0
    int64_t result4; // 0x4116f0
    int64_t v4; // 0x4116f0
    bool v5; // 0x4116f0
    if (v5) {
        // 0x4116f4
        int64_t result; // 0x4116f0
        return result;
    }
    // 0x41171b
    *(int32_t *)v2 = (int32_t)(v2 & a4);
    int64_t v6 = 2 * a1 & 0xfffffffe; // 0x41172f
    int16_t v7 = a3; // 0x411731
    *(char *)v6 = __asm_insb(v7);
    int64_t v8 = v1 & 210; // 0x411733
    __asm_out_134(99, (char)v8);
    int32_t v9 = *(int32_t *)(v2 + 0x7c20eb0 + 4 * v2); // 0x411737
    int3_t v10; // 0x4116f0
    __frontend_reg_store_fpr(v10 - 1, *(float80_t *)(a4 - 31));
    int32_t v11 = (v9 | (int32_t)(v1 & 0xff00 | v1 & 0xffff0000 | v8)) + 0x4bc14ff8; // 0x411741
    uint32_t v12 = v11 ^ 50;
    uint32_t v13 = *(int32_t *)v6; // 0x411749
    int32_t v14 = v12 - v13; // 0x411749
    int64_t v15 = a4 - 1; // 0x41174a
    int64_t result2 = v12; // 0x41174a
    if (v15 != 0 && v14 != 0) {
        result2 = function_4116dc();
    }
    int64_t v16 = 0x58199c * v1; // 0x41171b
    int64_t v17 = v16 & 0xfffffffc; // 0x41171b
    __asm_outsb(v7, *(char *)v17);
    if (((v14 ^ v11) & (v13 ^ v11)) < 0) {
        // 0x4117ad
        if (v12 >= v13) {
            // 0x4116f4
            return result2;
        }
        // 0x4117f0
        __frontend_reg_store_fpr(v10 - 2, *(float80_t *)result2);
        unsigned char v18 = *(char *)0x524c5f6c; // 0x4117f2
        *(char *)0x524c5f6c = v18 / 128 | 2 * v18;
        int32_t * v19 = (int32_t *)result2; // 0x4117f8
        uint32_t v20 = *v19; // 0x4117f8
        int32_t v21 = v15; // 0x4117f8
        uint32_t v22 = v20 + v21; // 0x4117f8
        *v19 = v22;
        int64_t result3 = result2 + 0x2c21c308 + (int64_t)(v22 < v20) & 0xffffffff; // 0x4117fb
        int32_t * v23 = (int32_t *)(result3 - 0x1ffd8e4c); // 0x411800
        *v23 = *v23 + v21;
        return result3;
    }
    // 0x411752
    __asm_out_134(3, (char)result2);
    uint64_t v24 = result2 - (v12 < v13 ? 0x1a054bfe : 0x1a054bfd); // 0x411754
    int64_t v25 = v24 & 0xffffffff; // 0x411754
    *(int32_t *)(v25 + 65) = (int32_t)v16;
    int32_t * v26 = (int32_t *)(a4 + 16); // 0x41175c
    uint32_t v27 = *v26; // 0x41175c
    *v26 = v27 / 2 | 0x80000000 * v27;
    char * v28 = (char *)(v17 - 0x463ac220); // 0x411760
    *v28 = *v28 & (char)(v24 / 256);
    v3 = false;
    result4 = v25;
    v4 = (v5 ? -4 : 4) + v6;
    int32_t * v29 = (int32_t *)v4; // 0x411766
    *v29 = (int32_t)v3 + (int32_t)v1 + *v29;
    return result4;
}

// Address range: 0x41181f - 0x411825
int64_t function_41181f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41181f
    int64_t v1; // 0x41181f
    *(char *)a4 = (char)(v1 | a3);
    int64_t v2; // 0x41181f
    return v1 & -256 | (int64_t)*(char *)&v2;
}

// Address range: 0x41184d - 0x411853
int64_t function_41184d(void) {
    // 0x41184d
    int64_t result; // 0x41184d
    return result;
}

// Address range: 0x411931 - 0x41193b
int64_t function_411931(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x411931
    int64_t v1; // 0x411931
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x411936
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)(a2 - 13); // 0x411936
        *v4 = *v4 << v3;
    }
    bool v5; // 0x411931
    return (v2 + 91 + (int64_t)v5) % 256 | v2 & -256;
}

// Address range: 0x42161f - 0x42163e
int64_t function_42161f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x42161f
    bool v1; // 0x42161f
    if (!v1) {
        function_4215da();
    }
    // 0x421622
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v2; // 0x42161f
    *(char *)a1 = (char)v2;
    *(char *)0x746f8f30 = *(char *)0x746f8f30 - (char)(a4 / 256);
    return a3 & 0xffff00ff | (int64_t)(int32_t)&g4;
}

// Address range: 0x421649 - 0x4216c9
int64_t function_421649(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x421649
    int64_t v1; // 0x421649
    int64_t v2 = v1;
    if (a4 != 1) {
        // 0x4216b1
        bool v3; // 0x421649
        return (v2 - (v3 ? 84 : 83)) % 256 | v2 & -256;
    }
    uint32_t v4 = (int32_t)v2; // 0x42164b
    uint32_t v5 = v4 - 0x1006e104; // 0x42164b
    uint32_t v6 = v4 - 0x79a3976e; // 0x421650
    uint32_t v7 = v6 + (int32_t)(v4 < 0x1006e104); // 0x421650
    bool v8 = v4 < 0x1006e104 ? v7 <= v5 : v6 < v5; // 0x421650
    *(char *)0x786e4262 = *(char *)0x786e4262 + (char)v8;
    return (v7 + 62) % 256 | v7 & -256;
}

// Address range: 0x4216d8 - 0x421735
int64_t function_4216d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int128_t v1 = (int128_t)*(int64_t *)(a1 + 38); // 0x4216d9
    int64_t v2; // 0x4216d8
    if (-16 * v1 == -0x100000000000000000 * v1 >> 64) {
        // 0x421720
        float80_t v3; // 0x4216d8
        *(int32_t *)(v2 - 0x6bda882c) = (int32_t)v3;
        return a3 & 0xffffffff;
    }
    // 0x4216e0
    __asm_wait();
    unsigned char v4 = (char)a4 % 32; // 0x4216e1
    if (v4 != 0) {
        char * v5 = (char *)(v2 + 81); // 0x4216e1
        *v5 = *v5 >> v4;
    }
    int64_t v6 = v2 & 0xffff00ff | (int64_t)(int32_t)&g2; // 0x4216e6
    uint64_t v7 = v6 & a5;
    __asm_out_134(-74, (char)v7);
    return v7 % 256 | v6 & 0xffffff00;
}

// Address range: 0x42174b - 0x421750
int64_t function_42174b(int64_t a1) {
    // 0x42174b
    int64_t v1; // 0x42174b
    return v1 & 0xffffffff;
}

// Address range: 0x42175a - 0x42175b
int64_t function_42175a(void) {
    // 0x42175a
    int64_t result; // 0x42175a
    return result;
}

// Address range: 0x421769 - 0x421791
int64_t function_421769(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x421769
    int64_t v1; // 0x421769
    bool v2; // 0x421769
    char v3 = *(char *)(a2 - v1 + (int64_t)v2 & 0xffffffff); // 0x42176b
    __asm_outsb((int16_t)a3, v3);
    int64_t v4 = v1 & 0x11e6cc20 | 0xee193341; // 0x42177b
    int16_t v5; // 0x421769
    int32_t * v6 = (int32_t *)((int64_t)v5 - 0x1beca4a8); // 0x421784
    *v6 = *v6 - (int32_t)v1;
    return v4 + 11 & 40 | v4 & 0x3d638800;
}

// Address range: 0x4217d4 - 0x4218b3
int64_t function_4217d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4217d4
    int64_t v1; // 0x4217d4
    int64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = a1;
    char * v5 = (char *)(v2 + 0x72805b6a + 8 * v2); // 0x4217d4
    *v5 = *v5 + (char)a4;
    *(char *)0x1c6a068 = -*(char *)0x1c6a068;
    int64_t result = v1 | 176; // 0x421861
    if ((char)v1 == 0) {
        // 0x421817
        return result;
    }
    // 0x42186b
    int64_t v6; // 0x4217d4
    *(int32_t *)v6 = *(int32_t *)&v6 & (int32_t)v1;
    if ((v1 & 0x11032c0f) == 0) {
        // 0x421817
        return result;
    }
    // 0x4218a1
    __asm_outsb((int16_t)a3, *(char *)&v3);
    *(char *)v4 = *(char *)&v4 & (char)(v1 / 256);
    return result - 0x51018d22;
}

// Address range: 0x4218b5 - 0x4218b8
int64_t function_4218b5(void) {
    // 0x4218b5
    int64_t result; // 0x4218b5
    return result;
}

// Address range: 0x4218b9 - 0x4218cc
int64_t function_4218b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a4 % 32; // 0x4218b9
    int64_t result; // 0x4218b9
    if (v1 != 0) {
        char * v2 = (char *)(result + 0x641db161); // 0x4218b9
        unsigned char v3 = *v2; // 0x4218b9
        *v2 = v3 >> 8 - v1 | v3 << v1;
    }
    *(int32_t *)(a3 + 41) = (int32_t)result;
    return result;
}

// Address range: 0x4218cc - 0x4218e3
int64_t function_4218cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v2; // 0x4218cc
    int64_t v3 = v2 & -256 | 127; // 0x4218ce
    unsigned char v4 = (char)a4 % 32; // 0x4218d2
    if (v4 != 0) {
        char * v5 = (char *)(v3 - 79); // 0x4218d2
        unsigned char v6 = *v5; // 0x4218d2
        *v5 = v6 << v4 | (char)((int16_t)v6 >> (int16_t)(9 - v4));
    }
    int32_t v7 = *(int32_t *)&v1 ^ (int32_t)v2; // 0x4218d0
    int64_t result = a3 & 0xffffffff; // 0x4218da
    if (v7 < 0) {
        result = __asm_iretd(v1, a2, v3 & 0xffffff7f, *(int64_t *)((int64_t)v7 + 8));
    }
    // 0x4218dd
    return result;
}

// Address range: 0x4218f0 - 0x421901
int64_t function_4218f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4218f0
    *(char *)(a4 + 0x7687657) = (char)true;
    int64_t result; // 0x4218f0
    return result;
}

// Address range: 0x421904 - 0x42190d
int64_t function_421904(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = __asm_iretd(a1, a2, a3, a4); // 0x421904
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    char v2 = *(char *)(4 * a2 + 42 + a4); // 0x421906
    unsigned char v3 = (char)a4 % 32; // 0x42190a
    if (v3 != 0) {
        char * v4 = (char *)(a4 + 71); // 0x42190a
        unsigned char v5 = *v4; // 0x42190a
        *v4 = v5 >> v3 | (char)((int16_t)v5 << (int16_t)(9 - v3));
    }
    return 256 * (int64_t)(v2 ^ (char)(v1 / 256)) | v1 & -0xff01;
}

// Address range: 0x421920 - 0x421994
int64_t function_421920(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x421920
    *(int32_t *)0x117ef48 = __asm_insd((int16_t)a5);
    __asm_int1();
    uint64_t result = __asm_int3(); // 0x421931
    unsigned char v1 = (char)result;
    unsigned char v2 = (char)(result / 256) + v1; // 0x421934
    *(char *)result = v2;
    if (v2 >= 0) {
        // 0x421938
        return result;
    }
    char * v3 = (char *)(a5 - 49); // 0x42198f
    unsigned char v4 = *v3; // 0x42198f
    char v5 = v2 < v1; // 0x42198f
    unsigned char v6 = v5 + (char)a5; // 0x42198f
    char v7 = v4 - v6; // 0x42198f
    *v3 = v7;
    int64_t v8 = v2 < v1 ? v6 != -1 | v4 < v7 - v5 : v4 < v6 ? 41 : 40; // 0x421992
    return (result - v8) % 256 | result & -256;
}

// Address range: 0x421995 - 0x4219ab
int64_t function_421995(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x421995
    int64_t v1; // 0x421995
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a3 - 0x7871c4cd); // 0x421995
    uint32_t v4 = *v3; // 0x421995
    bool v5; // 0x421995
    uint32_t v6 = v5 ? -0x300fefd6 : -0x300fefd7; // 0x421995
    *v3 = v4 - v6;
    char * v7 = (char *)(a4 - 107); // 0x4219a2
    *v7 = *v7 & (char)((uint64_t)v1 / 256);
    return (v2 - a4 + (int64_t)(v5 | v4 < v6)) % 256 | v2 & -256;
}

// Address range: 0x4219bc - 0x4219bd
int64_t function_4219bc(int64_t a1) {
    // 0x4219bc
    int64_t result; // 0x4219bc
    return result;
}

// Address range: 0x4219d4 - 0x4219db
int64_t function_4219d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4219d4
    return function_1b5e6232();
}

// Address range: 0x421a55 - 0x421a56
int64_t function_421a55(int64_t a1) {
    // 0x421a55
    int64_t result; // 0x421a55
    return result;
}

// Address range: 0x421aad - 0x421ab2
int64_t function_421aad(void) {
    // 0x421aad
    return function_ffffffffe1779465();
}

// Address range: 0x421ada - 0x421adb
int64_t function_421ada(void) {
    // 0x421ada
    int64_t result; // 0x421ada
    return result;
}

// Address range: 0x421adb - 0x421ae0
int64_t function_421adb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x421adb
    int64_t v1; // 0x421adb
    __asm_outsb((int16_t)a3, (char)v1);
    return function_421b10(a1, a2, a3);
}

// Address range: 0x421afb - 0x421b10
int64_t function_421afb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x421afb
    int64_t result; // 0x421afb
    __asm_outsb((int16_t)a3, (char)result);
    int32_t * v1 = (int32_t *)(result + 0x37cf24e4); // 0x421afc
    *v1 = *v1 & (int32_t)result;
    __asm_out_136(122, (int32_t)result);
    return result;
}

// Address range: 0x421b10 - 0x421b11
int64_t function_421b10(int64_t a1, int64_t a2, int64_t a3) {
    // 0x421b10
    int64_t result; // 0x421b10
    return result;
}

// Address range: 0x421b56 - 0x421b58
int64_t function_421b56(void) {
    // 0x421b56
    int64_t result; // 0x421b56
    return result;
}

// Address range: 0x421b80 - 0x421b81
int64_t function_421b80(void) {
    // 0x421b80
    int64_t result; // 0x421b80
    return result;
}

// Address range: 0x421b9b - 0x421ba5
int64_t function_421b9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x421b9b
    int64_t v1; // 0x421b9b
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x421ba5 - 0x421ba7
int64_t function_421ba5(void) {
    // 0x421ba5
    return function_421b80();
}

// Address range: 0x421bbf - 0x421bcc
int64_t function_421bbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x421bbf
    *(int32_t *)a4 = 0;
    return __asm_int3();
}

// Address range: 0x421bcc - 0x421bcf
int64_t function_421bcc(void) {
    // 0x421bcc
    int64_t result; // 0x421bcc
    return result;
}

// Address range: 0x421bd5 - 0x421bee
int64_t function_421bd5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x421bd5
    int64_t v1; // 0x421bd5
    bool v2; // 0x421bd5
    *(char *)a1 = (char)(v1 + 89 + (int64_t)v2);
    int64_t v3; // 0x421bd5
    *(int32_t *)a4 = *(int32_t *)&v3 - 121;
    int32_t * v4 = (int32_t *)(a1 + 0x6edb44b4); // 0x421be0
    *v4 = 2 * *v4;
    return a4 & 0xffffffff;
}
