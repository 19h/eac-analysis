/*
 * Targeted RetDec C for native executable gap queue batch 414.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1fca34-0x1fcc34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1fcc34-0x1fce34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1fce34-0x1fd034 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1fd034-0x1fd234 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25fac2-0x25fcc2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x461434-0x461634 rank=- name=- kind=- bytes=- uncovered=-
 *   0x461634-0x461834 rank=- name=- kind=- bytes=- uncovered=-
 *   0x461834-0x461a34 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_15ccefe();
int64_t function_1fca34(void);
int64_t function_1fca6c(void);
int64_t function_1fca92(void);
int64_t function_1fcab2(int64_t a1);
int64_t function_1fcb2f(int64_t a1);
int64_t function_1fcb4e(void);
int64_t function_1fcb71(void);
int64_t function_1fcb77(void);
int64_t function_1fcbc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1fcbd9(int64_t a1);
int64_t function_1fcbdc(int64_t a1);
int64_t function_1fcbf1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1fcc25(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fcc55(int64_t a1);
int64_t function_1fcc63(void);
int64_t function_1fcc8b(void);
int64_t function_1fccf7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1fcd9c(void);
int64_t function_1fcdba(void);
int64_t function_1fce2e(void);
int64_t function_1fce77(void);
int64_t function_1fce79(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1fce88(void);
int64_t function_1fceac(void);
int64_t function_1fceef(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fcf20(void);
int64_t function_1fcfec(int64_t a1);
int64_t function_1fd061(int64_t a1);
int64_t function_1fd0a5(void);
int64_t function_1fd0ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1fd102(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fd160(int64_t a1);
int64_t function_1fd161(int64_t a1);
int64_t function_1fd164(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fd188(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25fab4();
int64_t function_25fac2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_25fac5(int64_t a1);
int64_t function_25fb96(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25fbff(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25fc75(int64_t a1);
int64_t function_461413();
int64_t function_461434(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_461578(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4615e0(void);
int64_t function_461612(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46162d(int64_t a1);
int64_t function_461692(void);
int64_t function_4616a5(int64_t a1);
int64_t function_4616ca(int64_t a1);
int64_t function_461735(void);
int64_t function_46173f(int64_t a1);
int64_t function_461798(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4617d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_461898(void);
int64_t function_4618ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4618b1(void);
int64_t function_4618c4(void);
int64_t function_4618eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_461952(int64_t a1);
int64_t function_461954(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46197a(void);
int64_t function_4619b1(void);
int64_t function_4619be(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4619ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ffffffff816fdf2a();
int64_t function_ffffffffe7bc3883();
int64_t function_ffffffffe90ad7e6();
int64_t function_fffffffff648d24f();
int64_t function_fffffffffec23589();
int64_t unknown_1cdcda5c();
int64_t unknown_3a28f9a8();
int64_t unknown_4025b976();
int64_t unknown_732156a6();
int64_t unknown_e68c395();
int64_t unknown_ffffffffa04b9e9b();
int64_t unknown_ffffffffa879c169();
int64_t unknown_ffffffffafaf0a12();
int64_t unknown_ffffffffb92a572b();
int64_t unknown_ffffffffdb9d6da0();
int64_t unknown_ffffffffe90815ee();

// Address range: 0x1fca34 - 0x1fca35
int64_t function_1fca34(void) {
    // 0x1fca34
    int64_t result; // 0x1fca34
    return result;
}

// Address range: 0x1fca6c - 0x1fca6d
int64_t function_1fca6c(void) {
    // 0x1fca6c
    int64_t result; // 0x1fca6c
    return result;
}

// Address range: 0x1fca92 - 0x1fca9d
int64_t function_1fca92(void) {
    // 0x1fca92
    bool v1; // 0x1fca92
    if (!v1) {
        function_1fca6c();
    }
    // 0x1fca94
    return unknown_ffffffffa04b9e9b();
}

// Address range: 0x1fcab2 - 0x1fcab3
int64_t function_1fcab2(int64_t a1) {
    // 0x1fcab2
    int64_t result; // 0x1fcab2
    return result;
}

// Address range: 0x1fcb2f - 0x1fcb3d
int64_t function_1fcb2f(int64_t a1) {
    // 0x1fcb2f
    int64_t result; // 0x1fcb2f
    return result;
}

// Address range: 0x1fcb4e - 0x1fcb50
int64_t function_1fcb4e(void) {
    // 0x1fcb4e
    int64_t result; // 0x1fcb4e
    return result;
}

// Address range: 0x1fcb71 - 0x1fcb72
int64_t function_1fcb71(void) {
    // 0x1fcb71
    int64_t result; // 0x1fcb71
    return result;
}

// Address range: 0x1fcb77 - 0x1fcb79
int64_t function_1fcb77(void) {
    // 0x1fcb77
    return function_1fcb71();
}

// Address range: 0x1fcbc2 - 0x1fcbd4
int64_t function_1fcbc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1fcbc2
    int64_t v1; // 0x1fcbc2
    *(int32_t *)a3 = (int32_t)v1;
    char * v2 = (char *)(a4 + 0x5f013d00); // 0x1fcbc4
    *v2 = *v2 - (char)a3;
    int64_t v3 = __asm_wait(); // 0x1fcbca
    __asm_int(-113);
    return v3 & -256 | (int64_t)__asm_in(-32);
}

// Address range: 0x1fcbd9 - 0x1fcbda
int64_t function_1fcbd9(int64_t a1) {
    // 0x1fcbd9
    int64_t result; // 0x1fcbd9
    return result;
}

// Address range: 0x1fcbdc - 0x1fcbdf
int64_t function_1fcbdc(int64_t a1) {
    // 0x1fcbdc
    int64_t result; // 0x1fcbdc
    return result;
}

// Address range: 0x1fcbf1 - 0x1fcbfb
int64_t function_1fcbf1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1fcbf1
    int64_t result; // 0x1fcbf1
    return result;
}

// Address range: 0x1fcc25 - 0x1fcc36
int64_t function_1fcc25(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fcc25
    int64_t v1; // 0x1fcc25
    return v1 & 0xfe17fec2 | 0x1e8013d;
}

// Address range: 0x1fcc55 - 0x1fcc5d
int64_t function_1fcc55(int64_t a1) {
    // 0x1fcc55
    return unknown_1cdcda5c(a1);
}

// Address range: 0x1fcc63 - 0x1fcc66
int64_t function_1fcc63(void) {
    // 0x1fcc63
    int64_t result; // 0x1fcc63
    return result;
}

// Address range: 0x1fcc8b - 0x1fcc8c
int64_t function_1fcc8b(void) {
    // 0x1fcc8b
    int64_t result; // 0x1fcc8b
    return result;
}

// Address range: 0x1fccf7 - 0x1fcd92
int64_t function_1fccf7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a4;
    bool v2; // 0x1fccf7
    char v3 = v1 + (char)a3 + (char)v2; // 0x1fccf7
    int64_t v4; // 0x1fccf7
    *(char *)0x36f2a801e8d85fb9 = (char)v4;
    if (v3 >= 0) {
        function_1fcc8b();
    }
    int32_t * v5 = (int32_t *)(a2 - 0x5d994187); // 0x1fcd05
    *v5 = *v5 - (int32_t)a4;
    int64_t v6 = v2 ? -4 : 4; // 0x1fcd0b
    int64_t v7 = v6 + a1; // 0x1fcd0b
    unknown_ffffffffafaf0a12(v7, v6 + a2);
    char v8 = *(char *)(v7 - 0x6d280573); // 0x1fcd11
    unsigned char v9 = v8 + v1; // 0x1fcd11
    int64_t result = __asm_hlt((int64_t)&g1, (int64_t)&g1, (int64_t)&g1); // 0x1fcd17
    if (v9 < 0 != ((v9 ^ v1) & (v9 ^ v8)) < 0) {
        // 0x1fcd1a
        return result;
    }
    int64_t v10 = a3 & -256 | (int64_t)v3; // 0x1fccf7
    int32_t * v11 = (int32_t *)(v4 + 19 + 2 * v10); // 0x1fcd7c
    int32_t v12 = v10; // 0x1fcd7c
    *v11 = (int32_t)(v9 < v1) - v12 + *v11;
    int64_t result2 = result & 0x175c1a02 | 0xe8a3e5fd; // 0x1fcd80
    int32_t * v13 = (int32_t *)((a4 & -256 | (int64_t)v9) - 0x212b4906); // 0x1fcd85
    *v13 = *v13 + v12;
    char * v14 = (char *)result2; // 0x1fcd8e
    unsigned char v15 = *v14; // 0x1fcd8e
    *v14 = (v15 / 128 | 2 * v15) - (char)(v4 / 256);
    return result2;
}

// Address range: 0x1fcd9c - 0x1fcda8
int64_t function_1fcd9c(void) {
    // 0x1fcd9c
    return unknown_3a28f9a8();
}

// Address range: 0x1fcdba - 0x1fcdbf
int64_t function_1fcdba(void) {
    // 0x1fcdba
    return function_ffffffffe90ad7e6();
}

// Address range: 0x1fce2e - 0x1fce31
int64_t function_1fce2e(void) {
    // 0x1fce2e
    int64_t v1; // 0x1fce2e
    return function_1fce79(v1, v1, v1, v1, (int64_t)&g1);
}

// Address range: 0x1fce77 - 0x1fce79
int64_t function_1fce77(void) {
    // 0x1fce77
    int64_t v1; // 0x1fce77
    return v1 ^ 199;
}

// Address range: 0x1fce79 - 0x1fce84
int64_t function_1fce79(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1fce79
    int64_t v1; // 0x1fce79
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x1fce7a
    uint64_t result = v3 == 0 ? v2 : (int64_t)((int32_t)v2 >> v3);
    char * v4 = (char *)(a2 - 85); // 0x1fce7c
    *v4 = *v4 ^ (char)(result / 256);
    int64_t v5; // 0x1fce79
    *(char *)v5 = *(char *)&v5 - (char)result;
    return result;
}

// Address range: 0x1fce88 - 0x1fce89
int64_t function_1fce88(void) {
    // 0x1fce88
    int64_t result; // 0x1fce88
    return result;
}

// Address range: 0x1fceac - 0x1fcead
int64_t function_1fceac(void) {
    // 0x1fceac
    int64_t result; // 0x1fceac
    return result;
}

// Address range: 0x1fceef - 0x1fcefe
int64_t function_1fceef(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fceef
    bool v1; // 0x1fceef
    int64_t v2 = v1 ? -1 : 1; // 0x1fcef8
    return function_15ccefe(v2 + a1, v2 + a2);
}

// Address range: 0x1fcf20 - 0x1fcf2c
int64_t function_1fcf20(void) {
    // 0x1fcf20
    unknown_ffffffffb92a572b();
    return function_1fceac();
}

// Address range: 0x1fcfec - 0x1fcfed
int64_t function_1fcfec(int64_t a1) {
    // 0x1fcfec
    int64_t result; // 0x1fcfec
    return result;
}

// Address range: 0x1fd061 - 0x1fd067
int64_t function_1fd061(int64_t a1) {
    // 0x1fd061
    return function_fffffffff648d24f();
}

// Address range: 0x1fd0a5 - 0x1fd0a8
int64_t function_1fd0a5(void) {
    // 0x1fd0a5
    int64_t result; // 0x1fd0a5
    return result;
}

// Address range: 0x1fd0ca - 0x1fd101
int64_t function_1fd0ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1fd0ca
    int64_t v1; // 0x1fd0ca
    bool v2; // 0x1fd0ca
    unsigned char v3 = (char)v1 + 101 + (char)v2; // 0x1fd0ca
    int64_t result = v1 & -256 | (int64_t)v3; // 0x1fd0ca
    int64_t v4 = a4 - 1; // 0x1fd0cc
    if (v4 == 0 || v3 == 0) {
        // 0x1fd0ce
        return result;
    }
    // 0x1fd0e4
    *(int32_t *)-0x1ff97b8bcb4a788 = (int32_t)result;
    int32_t * v5 = (int32_t *)result; // 0x1fd0f7
    *v5 = *v5 | (int32_t)v4;
    int64_t result2 = __asm_wait(); // 0x1fd0fe
    *(int32_t *)a1 = (int32_t)result2;
    return result2;
}

// Address range: 0x1fd102 - 0x1fd104
int64_t function_1fd102(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fd102
    int64_t result; // 0x1fd102
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x1fd160 - 0x1fd161
int64_t function_1fd160(int64_t a1) {
    // 0x1fd160
    int64_t result; // 0x1fd160
    return result;
}

// Address range: 0x1fd161 - 0x1fd164
int64_t function_1fd161(int64_t a1) {
    // 0x1fd161
    int64_t result; // 0x1fd161
    return result;
}

// Address range: 0x1fd164 - 0x1fd188
int64_t function_1fd164(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fd164
    int64_t v1; // 0x1fd164
    *(int32_t *)-0x27cfd12b = *(int32_t *)-0x27cfd12b + (int32_t)v1;
    __asm_outsb((int16_t)a3, (char)v1);
    unknown_4025b976();
    int64_t result = unknown_ffffffffe90815ee(); // 0x1fd175
    int32_t * v2 = (int32_t *)(result - 0x362a7017); // 0x1fd17a
    *v2 = *v2 - 0x4514da90;
    int32_t * v3 = (int32_t *)(a2 - 20); // 0x1fd180
    *v3 = *v3 & (int32_t)a4;
    *(int32_t *)0xbaeb2570 = *(int32_t *)0xbaeb2570 - 0x4514da90;
    return result;
}

// Address range: 0x1fd188 - 0x1fd1a1
int64_t function_1fd188(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1fd188
    int64_t v1; // 0x1fd188
    uint64_t v2 = v1;
    int64_t v3 = a2;
    uint32_t v4 = (int32_t)a4 % 32; // 0x1fd188
    if (v4 != 0) {
        int32_t * v5 = (int32_t *)(a2 - 74);
        uint32_t v6 = *v5; // 0x1fd188
        bool v7; // 0x1fd188
        *v5 = v6 << v4 | (int32_t)v7 << v4 - 1 | (int32_t)((int64_t)v6 >> (int64_t)(33 - v4));
    }
    char * v8 = (char *)(unknown_e68c395(v1 & 0xffffffff) - 0x4c94bbaa); // 0x1fd194
    char v9 = *v8; // 0x1fd194
    *v8 = (char)(-1 - (char)v2 < (char)(v2 / 256)) - (char)(v1 / 256) + v9;
    return unknown_ffffffffdb9d6da0() & -256 | (int64_t)*(char *)&v3;
}

// Address range: 0x25fac2 - 0x25fac4
int64_t function_25fac2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x25fac2
    return __asm_hlt(a1, a2, a3);
}

// Address range: 0x25fac5 - 0x25face
int64_t function_25fac5(int64_t a1) {
    // 0x25fac5
    return function_25fab4();
}

// Address range: 0x25fb96 - 0x25fbb8
int64_t function_25fb96(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x25fb96
    int64_t v1; // 0x25fb96
    int64_t v2 = v1 & 0xff1deb9c | 0xe21463; // 0x25fb96
    int64_t v3 = v2 + 0xc1793adb; // 0x25fba1
    int64_t v4 = v3 & 0xff7ffffe | (int64_t)((int32_t)v2 < 0x71ff501); // 0x25fba1
    unsigned char v5 = (char)a4 % 32; // 0x25fbad
    int64_t result = v4; // 0x25fbad
    if (v5 != 0) {
        unsigned char v6 = (char)v4; // 0x25fbad
        result = v3 & 0xff7fff00 | (int64_t)(v6 >> v5 | v6 << 8 - v5);
    }
    char v7 = *(char *)0x3761e4b6; // 0x25fbaf
    *(char *)0x3761e4b6 = v7 + (char)((uint64_t)v1 / 256);
    return result;
}

// Address range: 0x25fbff - 0x25fc02
int64_t function_25fbff(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25fbff
    int64_t v1; // 0x25fbff
    int64_t result = v1;
    *(char *)result = (char)(result & a4);
    return result;
}

// Address range: 0x25fc75 - 0x25fc78
int64_t function_25fc75(int64_t a1) {
    // 0x25fc75
    int64_t result; // 0x25fc75
    return result;
}

// Address range: 0x461434 - 0x4614e5
int64_t function_461434(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x461434
    int64_t v1; // 0x461434
    int64_t result = v1 & 0xffffffff; // 0x461434
    bool v2; // 0x461434
    if (v2 || false) {
        // 0x461494
        return result;
    }
    uint64_t v3 = result & a4 / 256;
    int64_t v4 = v3 % 256 | v1 & 0xffffff00; // 0x46143a
    if ((char)v3 == 0) {
        v4 = function_461413();
    }
    char v5 = a3;
    unsigned char v6 = (char)a4; // 0x461484
    unsigned char v7 = *(char *)(4 * v1 + a4); // 0x461484
    char v8 = v7 > v6; // 0x461487
    unsigned char v9 = ((char)(v4 / 256) & 112) + v5 + v8; // 0x461487
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v10 = 256 * (int64_t)v9 | v4 & 0xc4a3002a; // 0x46148b
    if (v9 == 0) {
        v10 = function_461434(a1, a2, a3, a4 & -256 | (int64_t)(v6 - v7), a5, (int64_t)&g1);
    }
    int64_t result2 = v10;
    if ((v9 + v8 & (v5 ^ -128)) < 0) {
        // 0x461494
        return result2;
    }
    // 0x4614d5
    *(int32_t *)0xb0f7b7d67877375 = (int32_t)result2;
    char v11 = *(char *)result2; // 0x4614e3
    return result2 & -256 | (int64_t)(v11 + (char)result2);
}

// Address range: 0x461578 - 0x4615c1
int64_t function_461578(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x461578
    int64_t v1; // 0x461578
    if (v1 > a3) {
        // 0x461588
        int64_t result; // 0x461578
        return result;
    }
    uint32_t v2 = (int32_t)v1; // 0x46157e
    uint32_t v3 = (char)v1 < (char)a3 ? 0x3b1f5a0d : 0x3b1f5a0c; // 0x46157e
    uint32_t v4 = v2 - v3; // 0x46157e
    int64_t v5 = a4 - 1; // 0x461586
    if (v5 != 0 != (v4 == 0)) {
        // 0x461588
        return 0xd5709263;
    }
    bool v6 = (char)v1 < (char)a3 | v3 > v2; // 0x46157e
    uint32_t v7 = 2 * v4; // 0x4615ab
    uint32_t v8 = v7 | (int32_t)v6; // 0x4615ab
    bool v9 = v6 ? v8 <= v4 : v7 < v4; // 0x4615ab
    *(int32_t *)a4 = (int32_t)v5 - v8 + (int32_t)v9;
    int64_t result2 = unknown_732156a6(); // 0x4615b5
    *(int32_t *)0x32314092 = *(int32_t *)0x32314092 - ((int32_t)a3 & -256 | 72);
    *(char *)a1 = (char)result2;
    return result2;
}

// Address range: 0x4615e0 - 0x4615e1
int64_t function_4615e0(void) {
    // 0x4615e0
    int64_t result; // 0x4615e0
    return result;
}

// Address range: 0x461612 - 0x46161f
int64_t function_461612(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x461612
    __asm_int1();
    __asm_in_134((int16_t)a3);
    __asm_int1();
    return function_ffffffffe7bc3883();
}

// Address range: 0x46162d - 0x461631
int64_t function_46162d(int64_t a1) {
    // 0x46162d
    int64_t result; // 0x46162d
    bool v1; // 0x46162d
    if (!v1) {
        result = function_4615e0();
    }
    // 0x46162f
    return result;
}

// Address range: 0x461692 - 0x461695
int64_t function_461692(void) {
    // 0x461692
    int64_t result; // 0x461692
    return result;
}

// Address range: 0x4616a5 - 0x4616a6
int64_t function_4616a5(int64_t a1) {
    // 0x4616a5
    int64_t result; // 0x4616a5
    return result;
}

// Address range: 0x4616ca - 0x4616cd
int64_t function_4616ca(int64_t a1) {
    // 0x4616ca
    int64_t result; // 0x4616ca
    return result;
}

// Address range: 0x461735 - 0x461736
int64_t function_461735(void) {
    // 0x461735
    int64_t result; // 0x461735
    return result;
}

// Address range: 0x46173f - 0x461743
int64_t function_46173f(int64_t a1) {
    // 0x46173f
    int64_t result; // 0x46173f
    return result;
}

// Address range: 0x461798 - 0x4617c1
int64_t function_461798(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x461798
    int64_t v1; // 0x461798
    int64_t v2 = v1;
    unsigned char v3 = (char)a4 % 32; // 0x461798
    bool v4; // 0x461798
    if (v3 != 0) {
        char * v5 = (char *)(a3 - 121); // 0x461798
        unsigned char v6 = *v5; // 0x461798
        *v5 = v6 >> v3 | (char)v4 << 8 - v3 | (char)((int16_t)v6 << (int16_t)(9 - v3));
    }
    // 0x4617ad
    float80_t v7; // 0x461798
    *(int16_t *)a1 = (int16_t)v7;
    *(char *)(a3 + 0x66f9942f) = (char)v2;
    uint32_t v8 = (int32_t)a4 % 32; // 0x4617ad
    if (v8 != 0) {
        *(int32_t *)v2 = (int32_t)v2 << v8;
    }
    int16_t v9 = a3; // 0x4617b6
    char v10 = __asm_insb(v9); // 0x4617b6
    char * v11 = (char *)a1; // 0x4617b6
    *v11 = v10;
    int64_t result = __asm_wait(); // 0x4617bd
    *v11 = (char)result;
    *(char *)((v4 ? -1 : 1) + a1) = __asm_insb(v9);
    return result;
}

// Address range: 0x4617d4 - 0x4617db
int64_t function_4617d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4617d4
    int64_t result; // 0x4617d4
    return result;
}

// Address range: 0x461898 - 0x46189d
int64_t function_461898(void) {
    // 0x461898
    return function_ffffffff816fdf2a();
}

// Address range: 0x4618ab - 0x4618b0
int64_t function_4618ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4618ab
    int64_t result; // 0x4618ab
    return result;
}

// Address range: 0x4618b1 - 0x4618b3
int64_t function_4618b1(void) {
    // 0x4618b1
    int64_t result; // 0x4618b1
    return result;
}

// Address range: 0x4618c4 - 0x4618c9
int64_t function_4618c4(void) {
    // 0x4618c4
    return function_fffffffffec23589();
}

// Address range: 0x4618eb - 0x4618f3
int64_t function_4618eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4618eb
    return __asm_in_134((int16_t)a3);
}

// Address range: 0x461952 - 0x461953
int64_t function_461952(int64_t a1) {
    // 0x461952
    int64_t result; // 0x461952
    return result;
}

// Address range: 0x461954 - 0x461979
int64_t function_461954(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x461954
    bool v1; // 0x461954
    if (!v1) {
        // 0x461976
        return __asm_hlt((int64_t)&g1, (int64_t)&g1, (int64_t)&g1);
    }
    // 0x461958
    int64_t v2; // 0x461954
    return v2 & -0xff01 | 0x8c00;
}

// Address range: 0x46197a - 0x461989
int64_t function_46197a(void) {
    // 0x46197a
    bool v1; // 0x46197a
    if (v1 || false) {
        // 0x461984
        return unknown_ffffffffa879c169();
    }
    // 0x46197c
    int64_t result; // 0x46197a
    return result;
}

// Address range: 0x4619b1 - 0x4619b2
int64_t function_4619b1(void) {
    // 0x4619b1
    int64_t result; // 0x4619b1
    return result;
}

// Address range: 0x4619be - 0x4619cd
int64_t function_4619be(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4619be
    int64_t result; // 0x4619be
    *(int32_t *)((0x89b815a9 * result & 0xffffffff) + 107) = (int32_t)result;
    return result;
}

// Address range: 0x4619ec - 0x461a08
int64_t function_4619ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4619ec
    int64_t v1; // 0x4619ec
    bool v2; // 0x4619ec
    if (v2) {
        v1 = function_4619b1();
    }
    char v3 = __asm_in(33); // 0x4619ee
    int64_t v4; // 0x4619ec
    char * v5 = (char *)(v4 - 10); // 0x4619f2
    *v5 = 2 * *v5;
    int64_t v6; // 0x4619ec
    __asm_outsb((int16_t)a3, *(char *)&v6);
    __asm_out(-38, v3);
    return v1 & 0xe4a25700 | (int64_t)v3 & 0xe4a257ff | 0x1b5da800;
}
