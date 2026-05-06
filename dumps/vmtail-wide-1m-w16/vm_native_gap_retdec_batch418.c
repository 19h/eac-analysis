/*
 * Targeted RetDec C for native executable gap queue batch 418.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x232cb6-0x232eb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x232eb6-0x2330b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2330b6-0x2332b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2332b6-0x2334b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2334b6-0x2336b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c8107-0x2c8307 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c8307-0x2c8507 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c8507-0x2c8707 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_160328f();
int64_t function_232cb6(void);
int64_t function_232cdb(void);
int64_t function_232cf4(int64_t a1);
int64_t function_232cfc(int64_t a1, int64_t a2);
int64_t function_232d3f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_232d62(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_232de6(int64_t a1, int64_t a2);
int64_t function_232de7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_232e75(int64_t a1);
int64_t function_232eac(void);
int64_t function_232edc(void);
int64_t function_232ee2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_232eec(int64_t a1);
int64_t function_232f16(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_232f29(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_232f6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_233074(int64_t a1, int64_t a2, int64_t a3);
int64_t function_233088(int64_t a1);
int64_t function_233127(void);
int64_t function_23312e(void);
int64_t function_23318b(void);
int64_t function_233197(void);
int64_t function_2331b5(int64_t a1);
int64_t function_233230(void);
int64_t function_233270(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23328b(void);
int64_t function_2332e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_233305(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23331e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_233344(void);
int64_t function_233357(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2333f2(int64_t a1, int64_t a2);
int64_t function_233444(int64_t a1);
int64_t function_233446(void);
int64_t function_233451(int64_t a1, uint64_t a2, int64_t a3, int64_t a4);
int64_t function_233462(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_233492(void);
int64_t function_2334a1(void);
int64_t function_2334d4(void);
int64_t function_233507(void);
int64_t function_23350e(void);
int64_t function_233513(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23357f(void);
int64_t function_2335f6(void);
int64_t function_233617(int64_t a1, int64_t a2);
int64_t function_2c8107(void);
int64_t function_2c8108(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2c81ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2c833f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2c848c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2c85e0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_67113915();
int64_t function_cf3c7();
int64_t function_ffffffffcf1e579b();
int64_t function_ffffffffe8fc649c();
int64_t unknown_22279124();
int64_t unknown_534223f7();
int64_t unknown_ffffffff88288d87();
int64_t unknown_ffffffff99061abc();
int64_t unknown_ffffffffb254fb30();
int64_t unknown_ffffffffbecf03c7();

// Address range: 0x232cb6 - 0x232cc6
int64_t function_232cb6(void) {
    // 0x232cb6
    unknown_ffffffff99061abc();
    return unknown_ffffffffbecf03c7();
}

// Address range: 0x232cdb - 0x232cdc
int64_t function_232cdb(void) {
    // 0x232cdb
    int64_t result; // 0x232cdb
    return result;
}

// Address range: 0x232cf4 - 0x232cfc
int64_t function_232cf4(int64_t a1) {
    // 0x232cf4
    int64_t result; // 0x232cf4
    return result;
}

// Address range: 0x232cfc - 0x232d04
int64_t function_232cfc(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 0x7e4ce5b8); // 0x232cfc
    int64_t v2; // 0x232cfc
    *v1 = *v1 - (int32_t)v2;
    return function_232cdb();
}

// Address range: 0x232d3f - 0x232d4a
int64_t function_232d3f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x232d3f
    int64_t result; // 0x232d3f
    char * v1 = (char *)(result + 0x1e8936e); // 0x232d3f
    *v1 = *v1 | (char)(a4 / 256);
    return result;
}

// Address range: 0x232d62 - 0x232d88
int64_t function_232d62(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 & -0xff01; // 0x232d62
    int64_t v2; // 0x232d62
    int32_t * v3 = (int32_t *)((256 * v2 & 0xff00 | v1) - 0x772b7d37); // 0x232d64
    *v3 = *v3 + (int32_t)v2;
    char v4 = *(char *)(v2 + 39); // 0x232d6a
    int32_t * v5 = (int32_t *)(a2 + 78); // 0x232d6d
    *v5 = *v5 - 0xed6fe18;
    int64_t v6; // 0x232d62
    int64_t v7 = (int64_t)&v6; // 0x232d77
    *(char *)a1 = (char)v7;
    int64_t v8 = a1 - 1; // 0x232d78
    int64_t v9 = v7 & -256 | (int64_t)*(char *)((v7 & 248) + v2); // 0x232d79
    unknown_ffffffff88288d87(v8, v9);
    int64_t result = function_232de7(v8, v9, a3, v2 & 0xffffffff & (256 * (int64_t)(v4 | (char)v2) | v1), (int64_t)&g1); // 0x232d86
    return result;
}

// Address range: 0x232de6 - 0x232de7
int64_t function_232de6(int64_t a1, int64_t a2) {
    // 0x232de6
    int64_t result; // 0x232de6
    return result;
}

// Address range: 0x232de7 - 0x232e73
int64_t function_232de7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x232de7
    int64_t v1; // 0x232de7
    uint64_t v2 = v1;
    char * v3 = (char *)(2 * a3 + a2); // 0x232de8
    *v3 = *v3 + (char)(v2 / 256);
    uint32_t v4 = (int32_t)v1; // 0x232deb
    if (v4 >= 0xfcc90f02) {
        // 0x232df5
        int64_t result; // 0x232de7
        return result;
    }
    int64_t v5 = v1 - (v4 == -0x336f0ff ? 0x13d00b2 : 0x13d00b3); // 0x232e45
    int32_t v6 = (int32_t)v5 & 0xfa36ccf; // 0x232e51
    char v7 = llvm_ctpop_i8((char)v6); // 0x232e51
    char * v8 = (char *)((v2 & -0xff01 | 0xce00) + 0x2ae9263b); // 0x232e58
    char v9 = *v8; // 0x232e58
    unsigned char v10 = (char)a4 % 32; // 0x232e58
    int64_t v11 = 0; // 0x232e58
    char v12 = v7; // 0x232e58
    bool v13 = v6 == 0; // 0x232e58
    int64_t v14 = 0; // 0x232e58
    if (v10 != 0) {
        char v15 = v9 << v10; // 0x232e58
        v12 = llvm_ctpop_i8(v15);
        *v8 = v15;
        v11 = (v9 & 128 >> v10 - 1) != 0;
        v13 = v15 == 0;
        v14 = 128 * (int64_t)(v15 < 0);
    }
    uint64_t v16 = 256 * (v14 | v11 | 64 * (int64_t)v13 | 4 * (int64_t)(v12 % 2 == 0)) | 512; // 0x232e5e
    int64_t result2 = v16 | v5 & 0xffff00ff; // 0x232e5e
    char v17 = v5; // 0x232e5f
    *(char *)0x91b43fb9 = v17;
    __asm_out(0, v17);
    char * v18 = (char *)result2; // 0x232e69
    char v19 = v16 / 256; // 0x232e69
    *v18 = *v18 ^ v19;
    char * v20 = (char *)(result2 - 73); // 0x232e6b
    char v21 = *v20 | (char)a5; // 0x232e6b
    *v20 = v21;
    if (v21 >= 0 == (v21 != 0)) {
        // 0x232df5
        return result2;
    }
    // 0x232e70
    return 256 * (int64_t)(*(char *)(2 * result2) + v19) | result2 & -0xff01;
}

// Address range: 0x232e75 - 0x232e7e
int64_t function_232e75(int64_t a1) {
    // 0x232e75
    int64_t v1; // 0x232e75
    *(int32_t *)a1 = 2 * (int32_t)v1;
    return __asm_wait(a1);
}

// Address range: 0x232eac - 0x232eb1
int64_t function_232eac(void) {
    // 0x232eac
    int64_t v1; // 0x232eac
    return function_232f16(v1, v1, v1, (int64_t)&g1);
}

// Address range: 0x232edc - 0x232edd
int64_t function_232edc(void) {
    // 0x232edc
    int64_t result; // 0x232edc
    return result;
}

// Address range: 0x232ee2 - 0x232eeb
int64_t function_232ee2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t result = __asm_fnstenv(a1, a2, a3, a4); // 0x232ee2
    *(int224_t *)a1 = (int224_t)result;
    int64_t v1 = a4 - 1; // 0x232ee4
    bool v2; // 0x232ee2
    if (v1 == 0 || v2) {
        // 0x232ee6
        int64_t v3; // 0x232ee2
        return result + 256 * v3 & 0xff00 | result & -0xff01;
    }
    char * v4 = (char *)v1; // 0x232ee9
    *v4 = *v4 + (char)(a3 / 256);
    return result;
}

// Address range: 0x232eec - 0x232eed
int64_t function_232eec(int64_t a1) {
    // 0x232eec
    int64_t result; // 0x232eec
    return result;
}

// Address range: 0x232f16 - 0x232f25
int64_t function_232f16(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x232f16
    int64_t result; // 0x232f16
    __asm_out_133((int16_t)a3, (int32_t)result);
    char * v1 = (char *)(result + a3); // 0x232f22
    *v1 = *v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x232f29 - 0x232f4a
int64_t function_232f29(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x232f29
    int64_t v1; // 0x232f29
    *(char *)a1 = (char)v1;
    bool v2; // 0x232f29
    int64_t v3 = (v2 ? -1 : 1) + a1; // 0x232f2c
    int64_t v4; // 0x232f29
    __asm_outsd((int16_t)a3, *(int32_t *)&v4);
    int64_t v5; // 0x232f29
    *(char *)v5 = *(char *)&v5 | (char)v3;
    char * v6 = (char *)(v3 + 0x25b87f3a); // 0x232f3b
    *v6 = (char)(v1 / 256);
    *(int64_t *)v1 = a4;
    int64_t v7 = (int32_t)v1 < 0x833a0001 ? 0x9401e877 : 0x9401e876; // 0x232f42
    return (256 * (int64_t)*v6 | v1 & 0xffff00ff) + v7 & 0xffffffff;
}

// Address range: 0x232f6d - 0x232f74
int64_t function_232f6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x232f6d
    int64_t result; // 0x232f6d
    return result;
}

// Address range: 0x233074 - 0x233080
int64_t function_233074(int64_t a1, int64_t a2, int64_t a3) {
    // 0x233074
    int64_t v1; // 0x233074
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a3;
    __asm_wait((int64_t)&g1);
    return __asm_in((int16_t)a3);
}

// Address range: 0x233088 - 0x23308e
int64_t function_233088(int64_t a1) {
    // 0x233088
    int64_t result; // 0x233088
    return result;
}

// Address range: 0x233127 - 0x23312d
int64_t function_233127(void) {
    // 0x233127
    return function_67113915();
}

// Address range: 0x23312e - 0x23312f
int64_t function_23312e(void) {
    // 0x23312e
    int64_t result; // 0x23312e
    return result;
}

// Address range: 0x23318b - 0x233190
int64_t function_23318b(void) {
    // 0x23318b
    return function_160328f();
}

// Address range: 0x233197 - 0x233198
int64_t function_233197(void) {
    // 0x233197
    int64_t result; // 0x233197
    return result;
}

// Address range: 0x2331b5 - 0x2331b6
int64_t function_2331b5(int64_t a1) {
    // 0x2331b5
    int64_t result; // 0x2331b5
    return result;
}

// Address range: 0x233230 - 0x233231
int64_t function_233230(void) {
    // 0x233230
    int64_t result; // 0x233230
    return result;
}

// Address range: 0x233270 - 0x233287
int64_t function_233270(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = __asm_hlt(); // 0x23327c
    int64_t v1; // 0x233270
    float80_t v2; // 0x233270
    *(int32_t *)(v1 - 24) = (int32_t)v2;
    return result;
}

// Address range: 0x23328b - 0x23328d
int64_t function_23328b(void) {
    // 0x23328b
    return function_233230();
}

// Address range: 0x2332e8 - 0x233305
int64_t function_2332e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2332e8
    __asm_wait((int64_t)&g1);
    return unknown_534223f7() & -256 | (int64_t)__asm_in_134(19);
}

// Address range: 0x233305 - 0x23331c
int64_t function_233305(int64_t a1, int64_t a2, int64_t a3) {
    // 0x233305
    int64_t v1; // 0x233305
    char v2 = v1;
    char v3 = v1 / 256; // 0x233305
    char v4 = v2 + v3; // 0x233305
    *(char *)v1 = v4;
    int32_t v5 = *(int32_t *)(a3 - 118); // 0x233307
    uint32_t v6 = v4 < 0 == ((v4 ^ v2) & (v4 ^ v3)) < 0 ? (int32_t)a2 : v5; // 0x233307
    int64_t result; // 0x233305
    *(int32_t *)result = *(int32_t *)&result + (int32_t)a1;
    char * v7 = (char *)(8 * v1 + a1); // 0x233312
    *v7 = *v7 + v3;
    char * v8 = (char *)(int64_t)v6; // 0x233315
    *v8 = *v8 & (char)result;
    *(char *)result = (char)a3;
    return result;
}

// Address range: 0x23331e - 0x233334
int64_t function_23331e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23331e
    return unknown_22279124(a1, a2, a3);
}

// Address range: 0x233344 - 0x23334c
int64_t function_233344(void) {
    // 0x233344
    int64_t result; // 0x233344
    return result;
}

// Address range: 0x233357 - 0x2333f1
int64_t function_233357(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x233357
    __asm_wait((int64_t)&g1);
    char * v1 = (char *)(a4 + 41); // 0x2333d2
    int64_t v2; // 0x233357
    *v1 = *v1 + (char)v2;
    return 0x1e80e0b;
}

// Address range: 0x2333f2 - 0x2333f6
int64_t function_2333f2(int64_t a1, int64_t a2) {
    // 0x2333f2
    int64_t v1; // 0x2333f2
    uint64_t v2 = v1;
    return v2 & 0xffffff00 | (int64_t)*(char *)(v1 + v2 % 256);
}

// Address range: 0x233444 - 0x233445
int64_t function_233444(int64_t a1) {
    // 0x233444
    int64_t result; // 0x233444
    return result;
}

// Address range: 0x233446 - 0x233447
int64_t function_233446(void) {
    // 0x233446
    int64_t result; // 0x233446
    return result;
}

// Address range: 0x233451 - 0x233462
int64_t function_233451(int64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    // 0x233451
    int64_t v1; // 0x233451
    return a2 % 256 | v1 & 0xfa7f7d00 | 0x5808200;
}

// Address range: 0x233462 - 0x233474
int64_t function_233462(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x233462
    __asm_out(-95, -82 * (char)*(int32_t *)(a3 - 0x7fe1787));
    return function_ffffffffe8fc649c();
}

// Address range: 0x233492 - 0x233495
int64_t function_233492(void) {
    // 0x233492
    int64_t result; // 0x233492
    return result;
}

// Address range: 0x2334a1 - 0x2334a3
int64_t function_2334a1(void) {
    // 0x2334a1
    return function_233446();
}

// Address range: 0x2334d4 - 0x2334d5
int64_t function_2334d4(void) {
    // 0x2334d4
    int64_t result; // 0x2334d4
    return result;
}

// Address range: 0x233507 - 0x233508
int64_t function_233507(void) {
    // 0x233507
    int64_t result; // 0x233507
    return result;
}

// Address range: 0x23350e - 0x233513
int64_t function_23350e(void) {
    // 0x23350e
    return function_ffffffffcf1e579b();
}

// Address range: 0x233513 - 0x23354f
int64_t function_233513(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x233513
    return unknown_ffffffffb254fb30();
}

// Address range: 0x23357f - 0x233584
int64_t function_23357f(void) {
    // 0x23357f
    int64_t result; // 0x23357f
    return result;
}

// Address range: 0x2335f6 - 0x2335f7
int64_t function_2335f6(void) {
    // 0x2335f6
    int64_t result; // 0x2335f6
    return result;
}

// Address range: 0x233617 - 0x23362b
int64_t function_233617(int64_t a1, int64_t a2) {
    // 0x233617
    int64_t v1; // 0x233617
    bool v2; // 0x233617
    if (!v2) {
        v1 = function_2335f6();
    }
    int32_t * v3 = (int32_t *)(a2 + 0x734777d); // 0x23361f
    int64_t v4; // 0x233617
    *v3 = *v3 + (int32_t)v4;
    int64_t v5; // bp-8, 0x233617
    return (v1 | (int64_t)&v5) & 0xffffffff;
}

// Address range: 0x2c8107 - 0x2c8108
int64_t function_2c8107(void) {
    // 0x2c8107
    int64_t result; // 0x2c8107
    return result;
}

// Address range: 0x2c8108 - 0x2c81ef
int64_t function_2c8108(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2c8108
    int64_t v1; // 0x2c8108
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t v3; // 0x2c8108
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    int64_t * v5 = (int64_t *)(v1 + 16); // 0x2c8114
    int64_t v6 = *v5; // 0x2c8114
    int64_t v7 = v1 - 8; // 0x2c8114
    *(int64_t *)v7 = v6;
    int64_t * v8 = (int64_t *)(v1 - 16); // 0x2c8118
    int64_t * v9 = (int64_t *)(v1 - 24); // 0x2c812f
    *v9 = v7;
    int64_t * v10 = (int64_t *)(v1 - 32); // 0x2c8149
    *v10 = v3;
    *(int64_t *)v1 = *v9;
    *v8 = 0x41a664f4;
    *v9 = 0x7539e2a2;
    *v10 = v6;
    *v5 = *v8;
    *v8 = a5;
    *v9 = a3;
    *v10 = a2;
    *v9 = a4;
    return function_cf3c7(a1, a2, *v9, a4, *v8, v1);
}

// Address range: 0x2c81ef - 0x2c833f
int64_t function_2c81ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2c81ef
    int64_t v1; // bp-40, 0x2c81ef
    int64_t v2 = (int64_t)&v1; // 0x2c8250
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x2c826a
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x2c826a
    *v4 = v3;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x2c826e
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x2c8271
    *v6 = v3;
    int64_t v7 = *(int64_t *)(v2 + 16); // 0x2c827d
    *v4 = v7;
    *v5 = 0x315fae9e;
    *v6 = v3;
    int64_t v8 = v2 + 8; // 0x2c82b3
    *(int64_t *)v8 = *v4;
    *v4 = 0x64fc2600;
    *v6 = v7;
    *v5 = v7;
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = v7;
    *v4 = v8;
    return function_cf3c7(a1, a2, a3, *v4, a5, 0x2a58ad);
}

// Address range: 0x2c833f - 0x2c848c
int64_t function_2c833f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2c833f
    int64_t v1; // 0x2c833f
    return function_cf3c7(a1, a2, a3, a4, v1, v1);
}

// Address range: 0x2c848c - 0x2c85be
int64_t function_2c848c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2c848c
    int64_t v1; // bp-40, 0x2c848c
    int64_t v2 = (int64_t)&v1; // 0x2c84ff
    int64_t v3 = v2 + 8; // 0x2c8503
    v1 = v3;
    int64_t v4 = *(int64_t *)(v2 + 40); // 0x2c8521
    v1 = v4;
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x2c8540
    *v5 = v3;
    int64_t v6 = *(int64_t *)(v2 + 24); // 0x2c8548
    int64_t * v7 = (int64_t *)(v2 - 16); // 0x2c854f
    *v7 = v6;
    v1 = 0x61040ea6;
    *v5 = v4;
    int64_t v8 = v2 + 16; // 0x2c8564
    int64_t * v9 = (int64_t *)v8; // 0x2c8564
    *v9 = v1;
    v1 = 0x9c3080a;
    *v5 = 0x54f23c59;
    *v7 = v6;
    *(int64_t *)(v2 + 32) = v1;
    v1 = a4;
    int64_t v10 = v1;
    v1 = v8;
    int64_t v11 = *v9; // 0x2c85aa
    *(int64_t *)v3 = v11;
    v1 = v11;
    int64_t v12; // 0x2c848c
    return function_cf3c7(a1, a2, a3, v10, a5, v12);
}

// Address range: 0x2c85e0 - 0x2c8707
int64_t function_2c85e0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x2c85e0
    bool v1; // 0x2c85e0
    if (v1) {
        char * v2 = (char *)(a2 + 124 + 4 * a1); // 0x2c85ee
        *v2 = *v2 + (char)(a3 / 256);
        int64_t v3; // bp-16, 0x2c85e0
        int64_t v4 = (int64_t)&v3; // 0x2c8643
        int64_t result = *(int64_t *)(v4 + 40); // 0x2c8652
        v3 = result;
        int64_t v5 = v4 - 8; // 0x2c8656
        int64_t * v6 = (int64_t *)v5; // 0x2c8656
        *v6 = result;
        int64_t * v7 = (int64_t *)(v4 - 16); // 0x2c866d
        *v7 = v4;
        int64_t * v8 = (int64_t *)(v4 + 16); // 0x2c8679
        int64_t v9 = *v8; // 0x2c8679
        *v6 = v9;
        *v7 = v4;
        int64_t * v10 = (int64_t *)(v4 - 24); // 0x2c86a6
        *v10 = 0x2679daa6;
        *(int64_t *)(v4 - 32) = result;
        v3 = *v7;
        *v10 = a2;
        *v7 = v9;
        *v8 = v9;
        *v7 = *v6;
        *v10 = v5;
        *v7 = *v6;
        return result;
    }
    // 0x2c85e2
    int64_t result2; // 0x2c85e0
    return result2;
}
