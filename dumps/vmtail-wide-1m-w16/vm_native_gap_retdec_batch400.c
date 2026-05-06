/*
 * Targeted RetDec C for native executable gap queue batch 400.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x231cb6-0x231eb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x231eb6-0x2320b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2324b6-0x2326b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x271441-0x271641 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ae375-0x2ae575 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ae575-0x2ae775 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ae775-0x2ae975 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2aeb75-0x2aed75 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_20b27d6();
int64_t function_20b755a();
int64_t function_231cb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_231cdb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_231e4a(void);
int64_t function_231e89(void);
int64_t function_231e8c(void);
int64_t function_231e90(void);
int64_t function_231e95(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_231f44(int64_t a1, int64_t a2);
int64_t function_231f73(void);
int64_t function_2320a6(int64_t a1);
int64_t function_2324b6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2324d8(void);
int64_t function_23254a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_232613(void);
int64_t function_23262a(void);
int64_t function_23262c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_232642(void);
int64_t function_23267a(void);
int64_t function_23268c(void);
int64_t function_2342c0();
int64_t function_27141b();
int64_t function_271441(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_27147e(void);
int64_t function_27148b(void);
int64_t function_2714ab(void);
int64_t function_2714c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_271501(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_271574(int64_t a1);
int64_t function_2715f7(int64_t a1, int64_t a2);
int64_t function_2715fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_271620(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2ae375(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ae472(void);
int64_t function_2ae47f(void);
int64_t function_2ae480(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2ae4cf(int64_t a1);
int64_t function_2ae4ea(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2ae4f5(void);
int64_t function_2ae52c(void);
int64_t function_2ae548(void);
int64_t function_2ae554(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ae556(int64_t a1, int64_t a2);
int64_t function_2ae5a4(int64_t a1);
int64_t function_2ae637(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ae6b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ae6c8(void);
int64_t function_2ae7b1(void);
int64_t function_2ae7f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5);
int64_t function_2ae8f4(int64_t a1);
int64_t function_2ae908(void);
int64_t function_2aeb12();
int64_t function_2aeb75(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2aeb7d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2aebb8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2aecd2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2aed2a(void);
int64_t function_2aed33(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_caf2a();
int64_t unknown_1032fce6();
int64_t unknown_10fef9fe();
int64_t unknown_226a5fb0();
int64_t unknown_36977101();
int64_t unknown_3e278f46();
int64_t unknown_3fbaa32a();
int64_t unknown_74a1aa58();
int64_t unknown_782bb56();
int64_t unknown_ffffffff89575410();
int64_t unknown_ffffffff8e2c24f8();
int64_t unknown_ffffffff9d1c96d3();
int64_t unknown_ffffffffa119e7c4();
int64_t unknown_ffffffffc56547d4();
int64_t unknown_ffffffffd61d07a6();
int64_t unknown_ffffffffd8eede22();
int64_t unknown_ffffffffe8eb434b();
int64_t unknown_ffffffffe9350dd9();
int64_t unknown_fffffffff300e3e5();
int64_t unknown_fffffffffd2b17ff();
int64_t unknown_ffffffffffb6cc9a();

// Address range: 0x231cb6 - 0x231cdb
int64_t function_231cb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x231cb6
    return function_caf2a(a1);
}

// Address range: 0x231cdb - 0x231e4a
int64_t function_231cdb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x731ea6df; // bp-40, 0x231d63
    int64_t v2 = (int64_t)&v1; // 0x231d93
    int64_t v3 = v2 - 8; // 0x231d9b
    int64_t * v4 = (int64_t *)v3; // 0x231d9b
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x231d9f
    bool v6; // 0x231cdb
    v1 = 0x4000 * (int64_t)(bool)v6 | 2048 * (int64_t)v6 | 1024 * (int64_t)v6 | 512 * (int64_t)v6 | 256 * (int64_t)v6 | 128 * (int64_t)v6 | 64 * (int64_t)v6 | 16 * (int64_t)v6 | (int64_t)v6 | 4 * (int64_t)v6 | 2;
    *(int64_t *)(v2 + 24) = *(int64_t *)(v2 + 16);
    *v5 = v3;
    *v4 = v2 + 8;
    *v4 = v1;
    *v5 = v1;
    return function_caf2a(a1);
}

// Address range: 0x231e4a - 0x231e4f
int64_t function_231e4a(void) {
    // 0x231e4a
    return function_2342c0();
}

// Address range: 0x231e89 - 0x231e8a
int64_t function_231e89(void) {
    // 0x231e89
    int64_t result; // 0x231e89
    return result;
}

// Address range: 0x231e8c - 0x231e8d
int64_t function_231e8c(void) {
    // 0x231e8c
    int64_t result; // 0x231e8c
    return result;
}

// Address range: 0x231e90 - 0x231e95
int64_t function_231e90(void) {
    // 0x231e90
    return function_20b755a();
}

// Address range: 0x231e95 - 0x231ed2
int64_t function_231e95(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x231e95
    bool v1; // 0x231e95
    bool v2 = v1;
    int64_t v3; // 0x231e95
    unsigned char v4 = (char)v3; // 0x231e95
    char v5 = v4 - 89; // 0x231e95
    if (v5 != (char)v2 && !((v2 ? v5 + (char)v2 <= v4 : v4 > 88))) {
        int32_t * v6 = (int32_t *)unknown_ffffffffd8eede22(); // 0x231e9e
        *v6 = *v6 | (int32_t)a4;
        return unknown_ffffffffd61d07a6();
    }
    char v7 = *(char *)(unknown_ffffffffa119e7c4() + 0x384517); // 0x231ec3
    if (llvm_ctpop_i8(v7 | (char)a4) % 2 != 0) {
        function_231e8c();
    }
    // 0x231ecb
    return unknown_ffffffff9d1c96d3();
}

// Address range: 0x231f44 - 0x231f72
int64_t function_231f44(int64_t a1, int64_t a2) {
    // 0x231f44
    __asm_iretd();
    unknown_ffffffffe8eb434b();
    *(int32_t *)0x10530c51 = *(int32_t *)0x10530c51 + (int32_t)a1;
    unknown_782bb56();
    return 0x6e25f02;
}

// Address range: 0x231f73 - 0x231f74
int64_t function_231f73(void) {
    // 0x231f73
    int64_t result; // 0x231f73
    return result;
}

// Address range: 0x2320a6 - 0x2320a7
int64_t function_2320a6(int64_t a1) {
    // 0x2320a6
    int64_t result; // 0x2320a6
    return result;
}

// Address range: 0x2324b6 - 0x2324d1
int64_t function_2324b6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2324b6
    __asm_outsd((int16_t)a3, g1);
    int64_t v1; // 0x2324b6
    return (int64_t)(*(int32_t *)(a1 + 0x5a6b41b4) & (int32_t)v1);
}

// Address range: 0x2324d8 - 0x2324db
int64_t function_2324d8(void) {
    // 0x2324d8
    int64_t result; // 0x2324d8
    return result;
}

// Address range: 0x23254a - 0x232607
int64_t function_23254a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23254a
    bool v1; // 0x23254a
    if (!v1) {
        // 0x23254c
        int64_t result; // 0x23254a
        return result;
    }
    int32_t * v2 = (int32_t *)(a4 - 0x23d29700); // 0x2325c2
    uint32_t v3 = *v2; // 0x2325c2
    uint32_t v4 = v3 + (int32_t)a4; // 0x2325c2
    *v2 = v4;
    if (a4 == 0) {
        // 0x23254c
        return unknown_36977101();
    }
    // 0x2325ca
    int64_t v5; // 0x23254a
    int32_t * v6 = (int32_t *)(v5 - 114); // 0x2325ca
    *v6 = *v6 + (v4 < v3 ? 27 : 26);
    return unknown_ffffffffc56547d4();
}

// Address range: 0x232613 - 0x232614
int64_t function_232613(void) {
    // 0x232613
    int64_t result; // 0x232613
    return result;
}

// Address range: 0x23262a - 0x23262b
int64_t function_23262a(void) {
    // 0x23262a
    int64_t result; // 0x23262a
    return result;
}

// Address range: 0x23262c - 0x232632
int64_t function_23262c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x23262c
    int64_t result; // 0x23262c
    return result;
}

// Address range: 0x232642 - 0x232645
int64_t function_232642(void) {
    // 0x232642
    return function_23262a();
}

// Address range: 0x23267a - 0x23267b
int64_t function_23267a(void) {
    // 0x23267a
    int64_t result; // 0x23267a
    return result;
}

// Address range: 0x23268c - 0x232699
int64_t function_23268c(void) {
    // 0x23268c
    bool v1; // 0x23268c
    if (v1) {
        function_23267a();
    }
    // 0x232692
    return function_20b27d6();
}

// Address range: 0x271441 - 0x271464
int64_t function_271441(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x271441
    int64_t v1; // 0x271441
    int64_t v2 = v1;
    char * v3 = (char *)(v1 - 21); // 0x271445
    *v3 = *v3 ^ (char)a3;
    __asm_in(-24);
    int32_t * v4 = (int32_t *)(v2 + 0x25f700cb + 2 * v2); // 0x27144a
    *v4 = *v4 + (int32_t)v2;
    int64_t result = unknown_74a1aa58(); // 0x271452
    int32_t * v5 = (int32_t *)(a5 + 0x1e8de00); // 0x271458
    *v5 = *v5 + (int32_t)v1;
    *(char *)(a6 - 122) = (char)result;
    return result;
}

// Address range: 0x27147e - 0x27147f
int64_t function_27147e(void) {
    // 0x27147e
    int64_t result; // 0x27147e
    return result;
}

// Address range: 0x27148b - 0x27148f
int64_t function_27148b(void) {
    // 0x27148b
    __asm_in_133(114);
    return function_27141b();
}

// Address range: 0x2714ab - 0x2714ad
int64_t function_2714ab(void) {
    // 0x2714ab
    return function_27147e();
}

// Address range: 0x2714c0 - 0x2714db
int64_t function_2714c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2714c0
    bool v1; // 0x2714c0
    unsigned char v2 = (char)v1 + (char)a4 - __readfsbyte(a3); // 0x2714c5
    int64_t result; // 0x2714c0
    if ((a4 & -256 || (int64_t)v2) != 1 == v2 == 0) {
        // 0x2714e9
        return result;
    }
    uint32_t v3 = 30 * (int32_t)result; // 0x2714cc
    *(int32_t *)(int64_t)v3 = v3;
    return unknown_ffffffffe9350dd9();
}

// Address range: 0x271501 - 0x27151b
int64_t function_271501(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x271501
    int64_t v1; // 0x271501
    int64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a2;
    int32_t * v3 = (int32_t *)(v2 + 29); // 0x271503
    *v3 = *v3 | (int32_t)a1;
    int64_t v4; // 0x271501
    *(char *)a1 = *(char *)&v4;
    int64_t v5; // 0x271501
    *(int32_t *)a4 = *(int32_t *)&v5 + (int32_t)a3;
    return (v2 - v1) % 256 | v2 & -256;
}

// Address range: 0x271574 - 0x27157a
int64_t function_271574(int64_t a1) {
    // 0x271574
    int64_t result; // 0x271574
    return result;
}

// Address range: 0x2715f7 - 0x2715f9
int64_t function_2715f7(int64_t a1, int64_t a2) {
    // 0x2715f7
    return a1 & 0xffffffff;
}

// Address range: 0x2715fc - 0x271600
int64_t function_2715fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2715fc
    int64_t result; // 0x2715fc
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x271620 - 0x271641
int64_t function_271620(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t result = unknown_3fbaa32a(); // 0x271624
    char * v1 = (char *)(result + 0x360da08); // 0x271634
    *v1 = *v1 + (char)(a4 / 256);
    return result;
}

// Address range: 0x2ae375 - 0x2ae449
int64_t function_2ae375(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ae375
    int64_t v1; // 0x2ae375
    bool v2; // 0x2ae375
    if (true != !v2) {
        // 0x2ae377
        return v1 + 0xff1f348a & 0xffffffff;
    }
    uint64_t v3 = (0x100000000 * v1 >> 32) * (int64_t)__readfsdword(v1 + 0x6c733a0c) / 0x100000000; // 0x2ae3d4
    *(char *)(a1 & 0xffffffff) = (char)a2;
    int32_t v4 = v2 ? -1 : 1; // 0x2ae3db
    int64_t result = unknown_fffffffff300e3e5(v4 + (int32_t)a1, v4 + (int32_t)a2, v3); // 0x2ae3df
    float80_t v5; // 0x2ae375
    *(int64_t *)(v3 - 0x6000f005) = (int64_t)v5;
    return result;
}

// Address range: 0x2ae472 - 0x2ae473
int64_t function_2ae472(void) {
    // 0x2ae472
    int64_t result; // 0x2ae472
    return result;
}

// Address range: 0x2ae47f - 0x2ae480
int64_t function_2ae47f(void) {
    // 0x2ae47f
    int64_t result; // 0x2ae47f
    return result;
}

// Address range: 0x2ae480 - 0x2ae4b0
int64_t function_2ae480(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2ae480
    int64_t v1; // 0x2ae480
    char v2 = *(char *)(v1 + 0x547d81f6); // 0x2ae480
    __asm_out(-24, (char)v1);
    int32_t * v3 = (int32_t *)(a4 - 0x6d032ceb + 8 * v1); // 0x2ae488
    int32_t v4 = *v3; // 0x2ae488
    int32_t v5 = a4; // 0x2ae488
    int32_t v6 = v4 + v5; // 0x2ae488
    *v3 = v6;
    int64_t v7 = unknown_ffffffffffb6cc9a(); // 0x2ae499
    if (v6 < 0 == ((v6 ^ v4) & (v6 ^ v5)) < 0) {
        v7 = function_2ae47f();
    }
    int32_t * v8 = (int32_t *)(v7 & 0xe8d3d3af); // 0x2ae4a0
    int32_t v9 = *v8; // 0x2ae4a0
    bool v10; // 0x2ae480
    *v8 = v9 + (int32_t)(256 * (int64_t)((char)v10 + (char)(a3 / 256) - v2) | a3 & 0xffff00ff);
    char * v11 = (char *)(a2 + 2); // 0x2ae4a2
    *v11 = *v11 | (char)a4;
    return unknown_226a5fb0(0x783a93bb);
}

// Address range: 0x2ae4cf - 0x2ae4d0
int64_t function_2ae4cf(int64_t a1) {
    // 0x2ae4cf
    int64_t result; // 0x2ae4cf
    return result;
}

// Address range: 0x2ae4ea - 0x2ae4f2
int64_t function_2ae4ea(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2ae4ea
    return function_2ae472();
}

// Address range: 0x2ae4f5 - 0x2ae4f8
int64_t function_2ae4f5(void) {
    // 0x2ae4f5
    int64_t result; // 0x2ae4f5
    return result;
}

// Address range: 0x2ae52c - 0x2ae532
int64_t function_2ae52c(void) {
    // 0x2ae52c
    int64_t result; // 0x2ae52c
    return result;
}

// Address range: 0x2ae548 - 0x2ae553
int64_t function_2ae548(void) {
    // 0x2ae548
    int64_t v1; // 0x2ae548
    return function_2ae556(v1, v1);
}

// Address range: 0x2ae554 - 0x2ae556
int64_t function_2ae554(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ae554
    int64_t result; // 0x2ae554
    return result;
}

// Address range: 0x2ae556 - 0x2ae55e
int64_t function_2ae556(int64_t a1, int64_t a2) {
    // 0x2ae556
    int64_t v1; // 0x2ae556
    return (__asm_hlt() & -0xff01 | v1 & 0xff00) ^ 174;
}

// Address range: 0x2ae5a4 - 0x2ae5a7
int64_t function_2ae5a4(int64_t a1) {
    // 0x2ae5a4
    int64_t v1; // 0x2ae5a4
    bool v2; // 0x2ae5a4
    return 2 * v1 & 0xfffffffe | (int64_t)v2;
}

// Address range: 0x2ae637 - 0x2ae64c
int64_t function_2ae637(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 40); // 0x2ae637
    int64_t v2; // 0x2ae637
    *v1 = *v1 + (int32_t)v2;
    return unknown_3e278f46() + v2 & 0xffffffff;
}

// Address range: 0x2ae6b7 - 0x2ae6ba
int64_t function_2ae6b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ae6b7
    int64_t result; // 0x2ae6b7
    *(int32_t *)a1 = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x2ae6c8 - 0x2ae6c9
int64_t function_2ae6c8(void) {
    // 0x2ae6c8
    int64_t result; // 0x2ae6c8
    return result;
}

// Address range: 0x2ae7b1 - 0x2ae7b2
int64_t function_2ae7b1(void) {
    // 0x2ae7b1
    int64_t result; // 0x2ae7b1
    return result;
}

// Address range: 0x2ae7f2 - 0x2ae831
int64_t function_2ae7f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5) {
    // 0x2ae7f2
    unknown_ffffffff8e2c24f8();
    unknown_10fef9fe();
    int32_t v1; // 0x2ae7f2
    uint32_t v2 = v1 + (int32_t)a2; // 0x2ae802
    int32_t * v3 = (int32_t *)(a2 + 61); // 0x2ae80a
    *v3 = *v3 ^ (int32_t)a1;
    int64_t v4; // 0x2ae7f2
    int32_t * v5 = (int32_t *)(v4 + 37); // 0x2ae80d
    int64_t v6; // bp-18454, 0x2ae7f2
    int32_t v7 = (int64_t)&v6; // 0x2ae80d
    *v5 = *v5 + v7;
    int64_t v8; // 0x2ae7f2
    *(int32_t *)a1 = *(int32_t *)&v8;
    char * v9 = (char *)(int64_t)v2; // 0x2ae812
    *v9 = *v9 + (char)v2;
    char * v10 = (char *)(v4 + 0x3d00002d); // 0x2ae814
    *v10 = *v10 + (char)v4;
    int64_t v11; // 0x2ae7f2
    *(int32_t *)a3 = *(int32_t *)&v11 + v7;
    int32_t v12 = a3; // 0x2ae829
    int32_t v13 = a4; // 0x2ae829
    int32_t v14 = v13 + v12; // 0x2ae829
    int64_t result = v14; // 0x2ae82c
    if (v14 < 0 == ((v14 ^ v12) & (v14 ^ v13)) < 0) {
        result = function_2ae7b1();
    }
    // 0x2ae82e
    return result;
}

// Address range: 0x2ae8f4 - 0x2ae8f5
int64_t function_2ae8f4(int64_t a1) {
    // 0x2ae8f4
    int64_t result; // 0x2ae8f4
    return result;
}

// Address range: 0x2ae908 - 0x2ae909
int64_t function_2ae908(void) {
    // 0x2ae908
    int64_t result; // 0x2ae908
    return result;
}

// Address range: 0x2aeb75 - 0x2aeb77
int64_t function_2aeb75(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2aeb75
    int64_t v1; // 0x2aeb75
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x2aeb7d - 0x2aeba4
int64_t function_2aeb7d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2aeb7d
    int64_t v1; // 0x2aeb7d
    uint32_t v2 = *(int32_t *)(v1 + 0xc0ba746) | (int32_t)a4; // 0x2aeb84
    unsigned char v3 = (char)(v2 / 256); // 0x2aeb8a
    unsigned char v4 = (char)(a3 / 256); // 0x2aeb8a
    int64_t v5; // 0x2aeb7d
    if (v3 != v4) {
        v5 = function_2aeb12();
    }
    // 0x2aeb8e
    bool v6; // 0x2aeb7d
    int32_t v7 = *(int32_t *)((2 * v1 + (int64_t)v6 & 0xffffffff) - 0x19cc0da1); // 0x2aeb8e
    *(char *)a1 = (char)v5;
    char * v8 = (char *)(a3 + 0x3d005a5e); // 0x2aeb95
    *v8 = *v8 + (char)v2;
    int32_t * v9 = (int32_t *)((int64_t)v2 + 0x21a33c2c); // 0x2aeb9b
    *v9 = (int32_t)(v3 < v4) + (int32_t)v1 + v7 + *v9;
    return __asm_in(-121);
}

// Address range: 0x2aebb8 - 0x2aecaf
int64_t function_2aebb8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a3;
    *(char *)0x3249a123 = *(char *)0x3249a123 + (char)(a4 / 256);
    *(int32_t *)a4 = (int32_t)a4;
    int64_t result; // 0x2aebb8
    char v2 = result; // 0x2aebd6
    unsigned char v3 = *(char *)&v1 & v2; // 0x2aebd6
    *(char *)v1 = v3;
    int32_t v4 = result;
    v1 = v4 >> 31;
    if (v3 >= 0) {
        // 0x2aebdb
        return result;
    }
    // 0x2aec58
    *(int32_t *)result = v4 + (int32_t)result;
    __asm_out_134((int16_t)v1, v2);
    unsigned char v5 = *(char *)0x9bb6fba % 32;
    if (v5 != 0) {
        v1 = (int32_t)v1 << (int32_t)v5;
    }
    // 0x2aebdb
    return result;
}

// Address range: 0x2aecd2 - 0x2aed11
int64_t function_2aecd2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)a1; // 0x2aecd7
    int64_t v2; // 0x2aecd2
    *v1 = (int32_t)(v2 | a6);
    *v1 = *(int32_t *)a6;
    bool v3; // 0x2aecd2
    int64_t v4 = v3 ? -4 : 4; // 0x2aecd9
    int64_t v5 = v4 + a1; // 0x2aecd9
    int32_t * v6 = (int32_t *)((8 * (v2 + a1) & 0x7fffffff8) + a3); // 0x2aecdc
    uint32_t v7 = *v6; // 0x2aecdc
    *v6 = 0x40000 * v7 | v7 / 0x8000;
    int64_t v8 = unknown_1032fce6(v5, v4 + a6); // 0x2aece0
    uint64_t v9 = ((v8 + 217) % 256 | v8 & 0xffffff00) + 0x2cb81a; // 0x2aecec
    char * v10 = (char *)(v9 & 0xffffffff); // 0x2aecf1
    unsigned char v11 = *v10; // 0x2aecf1
    *v10 = v11 + 22;
    int32_t * v12 = (int32_t *)v5; // 0x2aecf4
    *v12 = *v12 + (int32_t)(v11 > 233) + (int32_t)v9;
    char * v13 = (char *)(a3 + 1); // 0x2aecf6
    *v13 = *v13 + (char)(v9 / 256);
    uint64_t v14 = unknown_fffffffffd2b17ff(); // 0x2aecf9
    char * v15 = (char *)(v5 - 108); // 0x2aed00
    *v15 = *v15 + (char)(v14 / 256);
    char * v16 = (char *)v14; // 0x2aed03
    *v16 = *v16 + (char)v14;
    char v17 = __asm_in_133(3); // 0x2aed05
    int64_t result = unknown_ffffffff89575410(); // 0x2aed0a
    *(int64_t *)(((int64_t)v17 & 0xffffffff | v14 & 0xffffff00) - 8) = result;
    return result;
}

// Address range: 0x2aed2a - 0x2aed2b
int64_t function_2aed2a(void) {
    // 0x2aed2a
    int64_t result; // 0x2aed2a
    return result;
}

// Address range: 0x2aed33 - 0x2aed5a
int64_t function_2aed33(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2aed33
    int64_t v1; // 0x2aed33
    *(char *)v1 = 0;
    int32_t * v2 = (int32_t *)(2 * a2 + 0x1477a8b + v1); // 0x2aed45
    *v2 = *v2 + (int32_t)a4;
    int64_t result = __asm_int1(); // 0x2aed57
    if (a4 == 0) {
        result = function_2aed2a();
    }
    // 0x2aed59
    return result;
}
