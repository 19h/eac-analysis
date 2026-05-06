/*
 * Targeted RetDec C for native executable gap queue batch 504.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1119bf-0x111bbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x111bbf-0x111dbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x111fbf-0x1121bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1121bf-0x1123bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b1d75-0x2b1f75 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b1f75-0x2b2175 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b2175-0x2b2375 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b2375-0x2b2575 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_10820c2();
int64_t function_1119bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1119e3(void);
int64_t function_111a24(void);
int64_t function_111a41(void);
int64_t function_111a5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_111a6c(void);
int64_t function_111a70(void);
int64_t function_111aa9(void);
int64_t function_111ad3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_111bad(int64_t a1, int64_t a2, int64_t a3);
int64_t function_111bd1(void);
int64_t function_111c2e(void);
int64_t function_111c3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_111c99(int64_t a1);
int64_t function_111cf7(int64_t a1);
int64_t function_111d04(void);
int64_t function_111d98(void);
int64_t function_111dad(int64_t a1, int64_t a2, int64_t a3);
int64_t function_111fbf(void);
int64_t function_111fe8(int64_t a1);
int64_t function_111fed(int64_t a1, int64_t a2, int64_t a3);
int64_t function_11200b(int64_t a1);
int64_t function_11206d(void);
int64_t function_112075(void);
int64_t function_112081(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11211a(void);
int64_t function_11211c(int64_t a1);
int64_t function_1121b7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1121d8(void);
int64_t function_1121e0(void);
int64_t function_1121e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1121ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1122dc(int64_t a1);
int64_t function_1122ef(int64_t a1, int64_t a2, int64_t a3);
int64_t function_11232e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14e1b35();
int64_t function_21323fd();
int64_t function_2b1d75(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2b1d7a(int64_t a1);
int64_t function_2b1de0(void);
int64_t function_2b1deb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2b1e02(int64_t a1);
int64_t function_2b1e28(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b1e36(void);
int64_t function_2b1e3a(void);
int64_t function_2b1e3b(void);
int64_t function_2b1e5e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2b1eb0(void);
int64_t function_2b1ec4(void);
int64_t function_2b1f46(void);
int64_t function_2b1fbd(void);
int64_t function_2b205c(void);
int64_t function_2b2060(int64_t a1, int64_t a2);
int64_t function_2b20ff(void);
int64_t function_2b211b(void);
int64_t function_2b212c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2b21c8(int64_t a1, int64_t a2);
int64_t function_2b2202(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b2240(void);
int64_t function_2b2245(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2b22e4(int64_t a1);
int64_t function_2b22e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2b2351(void);
int64_t function_2b2352(int64_t a1);
int64_t function_2b2392(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2b23a5(void);
int64_t function_2b23f8(void);
int64_t function_2b2423(int64_t a1);
int64_t function_2b245b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b2482(void);
int64_t function_2b24d5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2b2504(int64_t a1, int64_t a2);
int64_t function_2b2515(void);
int64_t function_2b2539(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b2553(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3f31adc8();
int64_t function_7642b90();
int64_t function_86544c0();
int64_t function_cc4c2e2();
int64_t function_ffffffff83e3ffa5();
int64_t function_ffffffffa54e216a();
int64_t function_ffffffffaf20daf6();
int64_t function_ffffffffd0dbb44c();
int64_t function_fffffffff92c5e21();
int64_t unknown_116124ad();
int64_t unknown_1415aec5();
int64_t unknown_23c1eef1();
int64_t unknown_301b88cc();
int64_t unknown_3a7d88e4();
int64_t unknown_64314359();
int64_t unknown_7b17c1ba();
int64_t unknown_7d6a16f5();
int64_t unknown_ac48f31();
int64_t unknown_ffffffff89fd2d07();
int64_t unknown_ffffffff9300a0a2();
int64_t unknown_ffffffff93125954();
int64_t unknown_ffffffff94b2acf5();
int64_t unknown_ffffffff9e6d6280();
int64_t unknown_ffffffffaf130802();
int64_t unknown_ffffffffc81ef0d9();
int64_t unknown_ffffffffe8227095();
int64_t unknown_ffffffffea83f9fc();

// Address range: 0x1119bf - 0x1119ca
int64_t function_1119bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1119bf
    int64_t v1; // 0x1119bf
    unsigned char v2 = 2 * (char)v1 & 30; // 0x1119c4
    int64_t result = a4 & 0xffffffff; // 0x1119c4
    if (v2 != 0) {
        result = a4 & 0xffffff00 | (int64_t)((char)a4 >> v2);
    }
    return result;
}

// Address range: 0x1119e3 - 0x1119e5
int64_t function_1119e3(void) {
    // 0x1119e3
    int64_t result; // 0x1119e3
    return result;
}

// Address range: 0x111a24 - 0x111a27
int64_t function_111a24(void) {
    // 0x111a24
    int64_t v1; // 0x111a24
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x111a41 - 0x111a42
int64_t function_111a41(void) {
    // 0x111a41
    int64_t result; // 0x111a41
    return result;
}

// Address range: 0x111a5a - 0x111a6c
int64_t function_111a5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x111a5a
    int64_t v1; // bp-8, 0x111a5a
    int64_t v2; // 0x111a5a
    int32_t * v3 = (int32_t *)(v2 + 0x42825724 + 8 * (int64_t)&v1); // 0x111a5e
    int64_t v4; // bp-132, 0x111a5a
    *v3 = *v3 + (int32_t)(int64_t)&v4;
    *(char *)a3 = (char)a4;
    return function_111a41();
}

// Address range: 0x111a6c - 0x111a6f
int64_t function_111a6c(void) {
    // 0x111a6c
    int64_t result; // 0x111a6c
    return result;
}

// Address range: 0x111a70 - 0x111a75
int64_t function_111a70(void) {
    // 0x111a70
    return function_14e1b35();
}

// Address range: 0x111aa9 - 0x111aae
int64_t function_111aa9(void) {
    // 0x111aa9
    return function_86544c0();
}

// Address range: 0x111ad3 - 0x111ae6
int64_t function_111ad3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x111ad3
    unknown_ffffffffc81ef0d9(a1, a2, a3);
    return unknown_3a7d88e4();
}

// Address range: 0x111bad - 0x111bbe
int64_t function_111bad(int64_t a1, int64_t a2, int64_t a3) {
    // 0x111bad
    return unknown_7b17c1ba();
}

// Address range: 0x111bd1 - 0x111bdb
int64_t function_111bd1(void) {
    // 0x111bd1
    return function_10820c2();
}

// Address range: 0x111c2e - 0x111c31
int64_t function_111c2e(void) {
    // 0x111c2e
    int64_t v1; // 0x111c2e
    return v1 & -123;
}

// Address range: 0x111c3d - 0x111c94
int64_t function_111c3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t result; // 0x111c3d
    // 0x111c3f
    return result;
    int64_t v3 = unknown_ffffffff93125954(); // 0x111c4e
    int32_t * v4 = (int32_t *)(a3 - 0x35baefcd); // 0x111c55
    *v4 = *v4 + (int32_t)v3;
    int64_t v5 = __asm_int3(); // 0x111c5b
    int16_t v6 = *(int16_t *)&v2; // 0x111c60
    *(int16_t *)(int64_t)((int32_t)a1 - *(int32_t *)&v1) = v6;
    bool v7; // 0x111c3d
    v2 += (v7 ? -2 : 2);
    char * v8 = (char *)(v5 + 104); // 0x111c64
    unsigned char v9 = (char)a4 % 32; // 0x111c64
    char * v10 = (char *)v5; // 0x111c67
    int32_t * v11 = (int32_t *)(result - 0x28a0c9ca); // 0x111c6e
    uint32_t v12 = (int32_t)a4 % 32; // 0x111c6e
    unsigned char v13; // 0x111c64
    if (v9 != 0) {
        v13 = *v8;
        *v8 = v13 >> 8 - v9 | v13 << v9;
    }
    *v10 = *v10 + (char)v5;
    uint32_t v14; // 0x111c6e
    if (v12 != 0) {
        v14 = *v11;
        *v11 = v14 >> v12 | v14 << 32 - v12;
    }
    uint64_t v15 = v1; // 0x111c78
    char v16 = *(char *)(v2 + 0x9c90068); // 0x111c78
    v1 = 256 * (int64_t)(v16 ^ (char)(v15 / 256)) | v15 & -0xff01;
    int64_t v17; // 0x111c3d
    int32_t * v18 = (int32_t *)(2 * result + 0x13d00fb + v17); // 0x111c7e
    int32_t v19 = *v18 - (int32_t)v5; // 0x111c7e
    unsigned char v20 = llvm_ctpop_i8((char)v19); // 0x111c7e
    *v18 = v19;
    int64_t v21 = v17 - 8; // 0x111c85
    v2 = v17;
    *(int64_t *)v21 = v17;
    v17 = v21;
    while (v20 % 2 != 0) {
        // 0x111c64
        if (v9 != 0) {
            v13 = *v8;
            *v8 = v13 >> 8 - v9 | v13 << v9;
        }
        *v10 = *v10 + (char)v5;
        if (v12 != 0) {
            v14 = *v11;
            *v11 = v14 >> v12 | v14 << 32 - v12;
        }
        v15 = v1;
        v16 = *(char *)(v2 + 0x9c90068);
        v1 = 256 * (int64_t)(v16 ^ (char)(v15 / 256)) | v15 & -0xff01;
        v18 = (int32_t *)(2 * result + 0x13d00fb + v17);
        v19 = *v18 - (int32_t)v5;
        v20 = llvm_ctpop_i8((char)v19);
        *v18 = v19;
        v21 = v17 - 8;
        v2 = v17;
        *(int64_t *)v21 = v17;
        v17 = v21;
    }
    // 0x111c8b
    return __asm_int1() ^ 30;
}

// Address range: 0x111c99 - 0x111c9b
int64_t function_111c99(int64_t a1) {
    // 0x111c99
    int64_t result; // 0x111c99
    return result;
}

// Address range: 0x111cf7 - 0x111cf9
int64_t function_111cf7(int64_t a1) {
    // 0x111cf7
    int64_t result; // 0x111cf7
    return result;
}

// Address range: 0x111d04 - 0x111d07
int64_t function_111d04(void) {
    // 0x111d04
    int64_t result; // 0x111d04
    return result;
}

// Address range: 0x111d98 - 0x111d99
int64_t function_111d98(void) {
    // 0x111d98
    int64_t result; // 0x111d98
    return result;
}

// Address range: 0x111dad - 0x111db6
int64_t function_111dad(int64_t a1, int64_t a2, int64_t a3) {
    // 0x111dad
    int64_t v1; // 0x111dad
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a1 - 39); // 0x111db0
    uint32_t v4 = *v3; // 0x111db0
    uint32_t v5 = v4 + (int32_t)a3; // 0x111db0
    *v3 = v5;
    return (v2 - (v5 < v4 ? 222 : 221)) % 256 | v2 & -256;
}

// Address range: 0x111fbf - 0x111fc7
int64_t function_111fbf(void) {
    // 0x111fbf
    int64_t result; // 0x111fbf
    int32_t * v1 = (int32_t *)(result + 0x6f3a3766); // 0x111fbf
    uint32_t v2 = *v1; // 0x111fbf
    bool v3; // 0x111fbf
    *v1 = v2 / 0x200000 | 0x1000 * v2 | 2048 * (int32_t)v3;
    return result;
}

// Address range: 0x111fe8 - 0x111fec
int64_t function_111fe8(int64_t a1) {
    // 0x111fe8
    int64_t result; // 0x111fe8
    // 0x111fea
    return result;
}

// Address range: 0x111fed - 0x112008
int64_t function_111fed(int64_t a1, int64_t a2, int64_t a3) {
    // 0x111fed
    unknown_7d6a16f5();
    int64_t result = unknown_ffffffffaf130802(); // 0x111ffc
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return result;
}

// Address range: 0x11200b - 0x11200e
int64_t function_11200b(int64_t a1) {
    // 0x11200b
    int64_t result; // 0x11200b
    return result;
}

// Address range: 0x11206d - 0x11206e
int64_t function_11206d(void) {
    // 0x11206d
    int64_t result; // 0x11206d
    return result;
}

// Address range: 0x112075 - 0x11207e
int64_t function_112075(void) {
    // 0x112075
    int64_t result; // 0x112075
    return result;
}

// Address range: 0x112081 - 0x1120cd
int64_t function_112081(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 - 1; // 0x112083
    if (v1 != 0) {
        function_11206d();
    }
    int32_t * v2 = (int32_t *)(a1 + 126); // 0x112085
    int64_t v3; // 0x112081
    *v2 = *v2 + (int32_t)v3;
    int32_t * v4 = (int32_t *)(v3 - 55); // 0x11208c
    *v4 = (int32_t)((char)(v3 ^ a2) < 28) - (int32_t)a1 + *v4;
    __asm_out(-3, (int32_t)unknown_ffffffffe8227095() - 0x3f6a9b9f);
    unknown_ffffffff9300a0a2();
    char * v5 = (char *)v1; // 0x1120a4
    *v5 = *v5 + (char)(v3 / 256);
    int64_t v6; // 0x112081
    int64_t v7 = (int64_t)&v6; // bp-8, 0x1120a6
    int64_t v8 = unknown_116124ad(); // 0x1120a7
    char * v9 = (char *)(v8 + 0x29d9400); // 0x1120ac
    *v9 = *v9 + (char)v8;
    int32_t * v10 = (int32_t *)(v3 + 0x1700cb00); // 0x1120b4
    *v10 = *v10 + (int32_t)(int64_t)&v7;
    return unknown_301b88cc();
}

// Address range: 0x11211a - 0x11211b
int64_t function_11211a(void) {
    // 0x11211a
    int64_t result; // 0x11211a
    return result;
}

// Address range: 0x11211c - 0x11211d
int64_t function_11211c(int64_t a1) {
    // 0x11211c
    int64_t result; // 0x11211c
    return result;
}

// Address range: 0x1121b7 - 0x1121c0
int64_t function_1121b7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1121b7
    int64_t v1; // 0x1121b7
    __asm_out(104, (int32_t)v1);
    return function_cc4c2e2();
}

// Address range: 0x1121d8 - 0x1121d9
int64_t function_1121d8(void) {
    // 0x1121d8
    int64_t result; // 0x1121d8
    return result;
}

// Address range: 0x1121e0 - 0x1121e1
int64_t function_1121e0(void) {
    // 0x1121e0
    int64_t result; // 0x1121e0
    return result;
}

// Address range: 0x1121e3 - 0x1121e6
int64_t function_1121e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1121e3
    int64_t result; // 0x1121e3
    *(int32_t *)a4 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x1121ea - 0x112204
int64_t function_1121ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2 & 0xffffffff; // 0x1121ed
    bool v2; // 0x1121ea
    if (v2) {
        v1 = function_1121e0();
    }
    // 0x1121ef
    int64_t v3; // 0x1121ea
    *(int32_t *)((v3 & 0xffffffff) - 0x58c58970) = (int32_t)v3 & -256;
    int64_t result = v1 + 0xc2ffb013 & 0xffffffff; // 0x1121f5
    int32_t * v4 = (int32_t *)result; // 0x1121fa
    *v4 = *v4 + (int32_t)a4;
    int32_t * v5 = (int32_t *)(result + 21); // 0x1121fc
    *v5 = *v5 / 2;
    return result;
}

// Address range: 0x1122dc - 0x1122e7
int64_t function_1122dc(int64_t a1) {
    // 0x1122dc
    int64_t result; // 0x1122dc
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x1122ef - 0x1122f6
int64_t function_1122ef(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1122ef
    int64_t v1; // 0x1122ef
    int64_t v2 = v1;
    return (v2 + 251) % 256 | v2 & -256;
}

// Address range: 0x11232e - 0x11233f
int64_t function_11232e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11232e
    return function_7642b90();
}

// Address range: 0x2b1d75 - 0x2b1d78
int64_t function_2b1d75(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2b1d75
    int64_t result; // 0x2b1d75
    bool v1; // 0x2b1d75
    *(char *)a3 = (char)result - (char)((uint64_t)result / 256) + (char)v1;
    return result;
}

// Address range: 0x2b1d7a - 0x2b1d81
int64_t function_2b1d7a(int64_t a1) {
    // 0x2b1d7a
    int64_t result; // 0x2b1d7a
    char * v1 = (char *)(result + 0x73a201e8); // 0x2b1d7a
    *v1 = *v1 ^ (char)result;
    return result;
}

// Address range: 0x2b1de0 - 0x2b1deb
int64_t function_2b1de0(void) {
    // 0x2b1de0
    return function_ffffffffd0dbb44c();
}

// Address range: 0x2b1deb - 0x2b1dfb
int64_t function_2b1deb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2b1deb
    unknown_ffffffff94b2acf5();
    return unknown_ac48f31(a1, a2, a3, a3 / 256 % 256 | a4);
}

// Address range: 0x2b1e02 - 0x2b1e03
int64_t function_2b1e02(int64_t a1) {
    // 0x2b1e02
    int64_t result; // 0x2b1e02
    return result;
}

// Address range: 0x2b1e28 - 0x2b1e30
int64_t function_2b1e28(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b1e28
    return unknown_ac48f31(a1, a2, a3, a4);
}

// Address range: 0x2b1e36 - 0x2b1e38
int64_t function_2b1e36(void) {
    // 0x2b1e36
    return function_2b1e3b();
}

// Address range: 0x2b1e3a - 0x2b1e3b
int64_t function_2b1e3a(void) {
    // 0x2b1e3a
    int64_t result; // 0x2b1e3a
    return result;
}

// Address range: 0x2b1e3b - 0x2b1e3c
int64_t function_2b1e3b(void) {
    // 0x2b1e3b
    int64_t result; // 0x2b1e3b
    return result;
}

// Address range: 0x2b1e5e - 0x2b1e67
int64_t function_2b1e5e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2b1e5e
    int64_t result; // 0x2b1e5e
    return result;
}

// Address range: 0x2b1eb0 - 0x2b1eb1
int64_t function_2b1eb0(void) {
    // 0x2b1eb0
    int64_t result; // 0x2b1eb0
    return result;
}

// Address range: 0x2b1ec4 - 0x2b1ec6
int64_t function_2b1ec4(void) {
    // 0x2b1ec4
    return function_2b1eb0();
}

// Address range: 0x2b1f46 - 0x2b1f47
int64_t function_2b1f46(void) {
    // 0x2b1f46
    int64_t result; // 0x2b1f46
    return result;
}

// Address range: 0x2b1fbd - 0x2b1fc2
int64_t function_2b1fbd(void) {
    // 0x2b1fbd
    return function_ffffffffa54e216a();
}

// Address range: 0x2b205c - 0x2b205d
int64_t function_2b205c(void) {
    // 0x2b205c
    int64_t result; // 0x2b205c
    return result;
}

// Address range: 0x2b2060 - 0x2b206c
int64_t function_2b2060(int64_t a1, int64_t a2) {
    // 0x2b2060
    int64_t v1; // 0x2b2060
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + 1;
    return function_2b205c();
}

// Address range: 0x2b20ff - 0x2b2100
int64_t function_2b20ff(void) {
    // 0x2b20ff
    int64_t result; // 0x2b20ff
    return result;
}

// Address range: 0x2b211b - 0x2b2121
int64_t function_2b211b(void) {
    // 0x2b211b
    return function_fffffffff92c5e21();
}

// Address range: 0x2b212c - 0x2b2193
int64_t function_2b212c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    unsigned char v2 = (char)a4 % 32; // 0x2b212c
    int64_t v3; // 0x2b212c
    if (v2 != 0) {
        char * v4 = (char *)(v3 - 28); // 0x2b212c
        unsigned char v5 = *v4; // 0x2b212c
        bool v6; // 0x2b212c
        *v4 = v5 << v2 | (char)v6 << v2 - 1 | (char)((int16_t)v5 >> (int16_t)(9 - v2));
    }
    uint32_t v7 = *(int32_t *)0x57030800013d4b82 + 0x68f99b28; // 0x2b213a
    int64_t v8 = v7; // 0x2b213a
    char * v9 = (char *)(v3 + 77); // 0x2b213f
    *v9 = *v9 + (char)a3;
    float80_t v10; // 0x2b212c
    *(int32_t *)(8 * v3 + v8) = (int32_t)v10;
    int32_t * v11 = (int32_t *)v8; // 0x2b214b
    *v11 = *v11 + v7;
    int32_t * v12 = (int32_t *)(a1 + 0x32f5bce7); // 0x2b2152
    *v12 = *v12 + (int32_t)v3;
    int32_t v13 = *(int32_t *)&v1 + v7; // 0x2b2158
    unsigned char v14 = llvm_ctpop_i8((char)v13); // 0x2b2158
    *(int32_t *)v1 = v13;
    int64_t v15 = v8; // 0x2b215b
    if (v14 % 2 == 0) {
        v15 = function_2b20ff();
    }
    uint64_t v16 = v15;
    char v17 = *(char *)(a3 - 0x7906ffb0); // 0x2b215d
    int64_t result = 256 * (int64_t)(v17 ^ (char)(v16 / 256)) | v16 & -0xff01; // 0x2b215d
    char * v18 = (char *)(a3 + 61); // 0x2b2165
    *v18 = *v18 & (char)v3;
    int32_t * v19 = (int32_t *)(a1 + 0x5093c581); // 0x2b2168
    uint32_t v20 = *v19; // 0x2b2168
    uint32_t v21 = v20 + (int32_t)a1; // 0x2b2168
    *v19 = v21;
    int32_t * v22 = (int32_t *)(a3 - 97); // 0x2b216e
    *v22 = *v22 + 0x5009e8cc + (int32_t)(v21 < v20);
    *(int32_t *)-0x17fe18f1e225e9c4 = (int32_t)result;
    return result;
}

// Address range: 0x2b21c8 - 0x2b21d5
int64_t function_2b21c8(int64_t a1, int64_t a2) {
    // 0x2b21c8
    int64_t v1; // 0x2b21c8
    int32_t * v2 = (int32_t *)(v1 + 0x1140159f); // 0x2b21c8
    *v2 = *v2 + (int32_t)v1;
    return function_21323fd();
}

// Address range: 0x2b2202 - 0x2b2213
int64_t function_2b2202(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b2202
    int64_t v1; // 0x2b2202
    int64_t v2 = v1;
    unsigned char v3 = (char)a4 % 32; // 0x2b2205
    if (v3 != 0) {
        char * v4 = (char *)(a3 - 93); // 0x2b2205
        unsigned char v5 = *v4; // 0x2b2205
        *v4 = v5 << v3 | (char)((a2 & 8) != 0) << v3 - 1 | (char)((int16_t)v5 >> (int16_t)(9 - v3));
    }
    *(int32_t *)a1 = (int32_t)v2;
    uint64_t v6 = (v2 & 0xffffffff) * (int64_t)*(int32_t *)(v2 + 46); // 0x2b2209
    char * v7 = (char *)(v6 / 0x100000000); // 0x2b220e
    int64_t v8; // 0x2b2202
    *v7 = *v7 + (char)(v8 / 256);
    unsigned char v9 = *(char *)&v8; // 0x2b2210
    *(char *)v8 = v9 / 128 | 2 * v9;
    return v1 & 0xffffffff & v6;
}

// Address range: 0x2b2240 - 0x2b2241
int64_t function_2b2240(void) {
    // 0x2b2240
    int64_t result; // 0x2b2240
    return result;
}

// Address range: 0x2b2245 - 0x2b22e3
int64_t function_2b2245(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x60966600; // bp-8, 0x2b2245
    int64_t v2 = (int64_t)&v1; // bp-16, 0x2b224a
    int64_t v3 = unknown_ffffffff9e6d6280(); // 0x2b2255
    bool v4; // 0x2b2245
    if (v4 || false) {
        v3 = function_2b2240();
    }
    // 0x2b2257
    *(char *)a1 = (char)a3;
    int64_t v5; // 0x2b2245
    int32_t v6 = v5;
    int32_t v7 = a2;
    int64_t v8 = (int64_t)&v2; // 0x2b2257
    int64_t v9 = v8 - 8; // 0x2b2259
    *(int64_t *)v9 = v3;
    int64_t v10 = v3 | 149; // 0x2b225a
    int64_t v11; // 0x2b2245
    int64_t v12 = v11 & -256 | 208; // 0x2b225e
    int32_t * v13 = (int32_t *)(v10 + 117); // 0x2b2261
    uint32_t v14 = *v13; // 0x2b2261
    *v13 = 16 * v14 | v14 / 0x20000000 | 8 * (int32_t)((int32_t)v9 < 0x13d00e4);
    int64_t v15 = (__readfsdword(a1) | (int32_t)v10) + v6; // 0x2b22b1
    *(int32_t *)-0x61afb2a7 = *(int32_t *)-0x61afb2a7 + v6;
    int32_t * v16 = (int32_t *)(v15 + 5); // 0x2b22b9
    int32_t v17 = *v16; // 0x2b22b9
    int32_t v18 = v17 + v7; // 0x2b22b9
    *v16 = v18;
    v8 = (v8 + 0xfec2ff14 & 0xffffffff) + 8;
    while (v18 < 0 != ((v18 ^ v17) & (v18 ^ v7)) < 0) {
        // 0x2b2259
        v9 = v8 - 8;
        *(int64_t *)v9 = v15;
        v10 = v15 | 149;
        v12 = v12 & -256 | 208;
        v13 = (int32_t *)(v10 + 117);
        v14 = *v13;
        *v13 = 16 * v14 | v14 / 0x20000000 | 8 * (int32_t)((int32_t)v9 < 0x13d00e4);
        v15 = (__readfsdword(a1) | (int32_t)v10) + v6;
        *(int32_t *)-0x61afb2a7 = *(int32_t *)-0x61afb2a7 + v6;
        v16 = (int32_t *)(v15 + 5);
        v17 = *v16;
        v18 = v17 + v7;
        *v16 = v18;
        v8 = (v8 + 0xfec2ff14 & 0xffffffff) + 8;
    }
    int64_t v19 = unknown_1415aec5(); // 0x2b22bf
    int16_t v20 = 256 * (int16_t)v19 - 0x3000 >> 8; // 0x2b22c9
    int64_t result = v19 & -0x10000 | (int64_t)(v20 * v20); // 0x2b22c9
    int32_t * v21 = (int32_t *)v12; // 0x2b22cb
    *v21 = *v21 + v7;
    int32_t * v22 = (int32_t *)(a2 - 0x17d03cbf + 4 * result); // 0x2b22da
    *v22 = *v22 | *(int32_t *)(a2 + 37) + 0x13d00e4;
    return result;
}

// Address range: 0x2b22e4 - 0x2b22e7
int64_t function_2b22e4(int64_t a1) {
    // 0x2b22e4
    int64_t result; // 0x2b22e4
    return result;
}

// Address range: 0x2b22e9 - 0x2b2317
int64_t function_2b22e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2b22e9
    unknown_23c1eef1();
    int32_t * v1 = (int32_t *)(a4 + 0x3ad3af25); // 0x2b22f0
    *v1 = *v1 + (int32_t)a3;
    unknown_ffffffffea83f9fc();
    int64_t v2 = unknown_ffffffff89fd2d07() & 0xe86acbaf; // 0x2b2308
    int32_t * v3 = (int32_t *)v2; // 0x2b230d
    *v3 = *v3 + (int32_t)v2;
    return function_ffffffff83e3ffa5();
}

// Address range: 0x2b2351 - 0x2b2352
int64_t function_2b2351(void) {
    // 0x2b2351
    int64_t result; // 0x2b2351
    return result;
}

// Address range: 0x2b2352 - 0x2b235b
int64_t function_2b2352(int64_t a1) {
    // 0x2b2352
    return unknown_64314359(a1);
}

// Address range: 0x2b2392 - 0x2b23a1
int64_t function_2b2392(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a2 - 0x346af4f8 + 8 * a3); // 0x2b2392
    *v1 = *v1 / 2;
    int64_t result; // 0x2b2392
    return result;
}

// Address range: 0x2b23a5 - 0x2b23b1
int64_t function_2b23a5(void) {
    // 0x2b23a5
    __asm_int(-66);
    return function_2b2351();
}

// Address range: 0x2b23f8 - 0x2b23fd
int64_t function_2b23f8(void) {
    // 0x2b23f8
    return function_ffffffffaf20daf6();
}

// Address range: 0x2b2423 - 0x2b2424
int64_t function_2b2423(int64_t a1) {
    // 0x2b2423
    int64_t result; // 0x2b2423
    return result;
}

// Address range: 0x2b245b - 0x2b245f
int64_t function_2b245b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b245b
    __asm_int(-87);
    return a4 & 0xffffffff;
}

// Address range: 0x2b2482 - 0x2b2485
int64_t function_2b2482(void) {
    // 0x2b2482
    int64_t result; // 0x2b2482
    return result;
}

// Address range: 0x2b24d5 - 0x2b24e0
int64_t function_2b24d5(int64_t a1, int64_t a2, int64_t a3) {
    char v1 = *(char *)-0x171ae024; // 0x2b24d5
    int64_t result; // 0x2b24d5
    *(char *)-0x171ae024 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x2b2504 - 0x2b2509
int64_t function_2b2504(int64_t a1, int64_t a2) {
    // 0x2b2504
    int64_t v1; // 0x2b2504
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    int64_t v3; // 0x2b2504
    return v2 & -256 | (int64_t)*(char *)&v3;
}

// Address range: 0x2b2515 - 0x2b2516
int64_t function_2b2515(void) {
    // 0x2b2515
    int64_t result; // 0x2b2515
    return result;
}

// Address range: 0x2b2539 - 0x2b2542
int64_t function_2b2539(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b2539
    return function_3f31adc8();
}

// Address range: 0x2b2553 - 0x2b2557
int64_t function_2b2553(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2b2553
    int64_t result; // 0x2b2553
    __asm_out_133((int16_t)a3, (int32_t)result);
    return result;
}
