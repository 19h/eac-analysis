/*
 * Targeted RetDec C for native executable gap queue batch 242.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xe799c-0xe7b9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xe7b9c-0xe7d9c rank=- name=- kind=- bytes=- uncovered=-
 *   0x1646aa-0x1648aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x164aaa-0x164caa rank=- name=- kind=- bytes=- uncovered=-
 *   0x164caa-0x164eaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x18ac85-0x18ae85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18ae85-0x18b085 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18b085-0x18b285 rank=- name=- kind=- bytes=- uncovered=-
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
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
void __asm_out_139(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint64_t __readfsqword(int64_t offset);
uint8_t __readgsbyte(int64_t offset);
uint32_t __readgsdword(int64_t offset);
uint64_t __readgsqword(int64_t offset);
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
void __asm_rep_movsb_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_stosb_memset(char *dst, char value, int64_t count);
void __asm_rep_stosd_memset(char *dst, int32_t value, int64_t count);
void __asm_rep_stosq_memset(char *dst, int64_t value, int64_t count);
void __asm_rep_movsd_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_movsq_memcpy(char *dst, char *src, int64_t count);
int64_t __asm_hlt();
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
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
int128_t __asm_pmaxsw(int128_t left, int128_t right);
int128_t __asm_por(int128_t left, int128_t right);
int128_t __asm_pxor(int128_t left, int128_t right);
int128_t __asm_xorps(int128_t left, int128_t right);
int128_t __asm_addps(int128_t left, int128_t right);
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

int64_t function_159d64ad();
int64_t function_1646aa(void);
int64_t function_1646c0(void);
int64_t function_1646c1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_16470d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_164718(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_164834(void);
int64_t function_164848(int64_t a1, int64_t a2, int64_t a3);
int64_t function_16489a(int64_t a1);
int64_t function_164a9c();
int64_t function_164aaa(void);
int64_t function_164ae2(int64_t a1);
int64_t function_164aed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_164bbe(int64_t a1);
int64_t function_164bf0(void);
int64_t function_164c20(void);
int64_t function_164c46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_164c5c(int64_t a1);
int64_t function_164c68(void);
int64_t function_164c6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_164d1e(int64_t a1);
int64_t function_164d64(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_164d83(int64_t a1);
int64_t function_164dce(int64_t a1);
int64_t function_164e23(int64_t a1);
int64_t function_164e45(int64_t a1);
int64_t function_164e90(void);
int64_t function_1707b18();
int64_t function_18ac85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_18ad01(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18ae0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_18ae60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_18afc3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_18b0cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_c4258();
int64_t function_e799c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e7a3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e7b10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e7b59(void);
int64_t function_e7b87(int64_t a1, int64_t a2);
int64_t function_e7b9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e7c47(int64_t a1, int64_t a2);
int64_t function_e7cb7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_e7d3f(void);
int64_t function_e7d48(void);
int64_t function_e7d7c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_ffffffff9222528b();
int64_t unknown_3319f99b();
int64_t unknown_33ac266();
int64_t unknown_53fcad38();
int64_t unknown_68e4e1fe();
int64_t unknown_ffffffff846ef5af();
int64_t unknown_ffffffffb4338a4c();
int64_t unknown_ffffffffc873678e();

// Address range: 0xe799c - 0xe79e6
int64_t function_e799c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe799c
    int64_t v1; // 0xe799c
    char v2 = *(char *)((v1 & -256) - 24); // 0xe799e
    *(int32_t *)0x10f287aa = *(int32_t *)0x10f287aa + (int32_t)a1;
    int64_t result = unknown_ffffffff846ef5af(); // 0xe79a9
    unsigned char v3 = *(char *)(result - 121) | (char)a3; // 0xe79ae
    unsigned char v4 = llvm_ctpop_i8(v3); // 0xe79ae
    __asm_out((int16_t)(a3 & 0xff00 | (int64_t)v3), (char)result);
    if (v4 % 2 == 0) {
        // 0xe79be
        return result;
    }
    char v5 = __asm_in((int16_t)v3 | (int16_t)&g2); // 0xe79c7
    int64_t v6 = result & -256 | (int64_t)v5; // 0xe79c7
    int64_t result2 = v6; // 0xe79d5
    if (llvm_ctpop_i8(*(char *)(v6 + 0xea06c25) ^ v2) % 2 != 0) {
        result2 = function_1707b18();
    }
    char * v7 = (char *)result2; // 0xe79db
    char v8 = result2; // 0xe79db
    *v7 = *v7 + v8;
    *(char *)-0x1642ddfec2fffffe = v8;
    return result2;
}

// Address range: 0xe7a3c - 0xe7a63
int64_t function_e7a3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe7a3c
    int64_t v1; // 0xe7a3c
    uint32_t v2 = 0x10000 * (int32_t)v1 >> 16; // 0xe7a3c
    bool v3; // 0xe7a3c
    uint64_t v4 = (int64_t)v2 - (v3 ? 205 : 204); // 0xe7a3d
    int64_t result = v4 % 256 | (int64_t)(v2 & -256); // 0xe7a3d
    char * v5 = (char *)(v1 - 35); // 0xe7a4b
    *v5 = *v5 - (char)a3;
    char * v6 = (char *)result; // 0xe7a4e
    *v6 = *v6 >> 1;
    uint32_t v7 = *(int32_t *)0x9aad4509; // 0xe7a50
    *(int32_t *)0x9aad4509 = v7 / 512 | 0x800000 * v7;
    *(char *)0x8b43b23e52f24c = (char)v4;
    return result;
}

// Address range: 0xe7b10 - 0xe7b19
int64_t function_e7b10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xe7b10
    int64_t result; // 0xe7b10
    char v1 = result; // 0xe7b10
    *(char *)a3 = v1 + (char)result;
    *(char *)a4 = v1;
    return result;
}

// Address range: 0xe7b59 - 0xe7b5a
int64_t function_e7b59(void) {
    // 0xe7b59
    int64_t result; // 0xe7b59
    return result;
}

// Address range: 0xe7b87 - 0xe7b92
int64_t function_e7b87(int64_t a1, int64_t a2) {
    // 0xe7b87
    int64_t v1; // 0xe7b87
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0xe7b87
    *(int32_t *)((v2 ? -4 : 4) + a1) = (int32_t)v1;
    return function_e7b59();
}

// Address range: 0xe7b9a - 0xe7bab
int64_t function_e7b9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe7b9a
    int64_t result; // 0xe7b9a
    unsigned char v1 = (char)result;
    *(char *)a3 = v1 / 2 | 128 * v1;
    int32_t * v2 = (int32_t *)(a3 - 33); // 0xe7ba4
    *v2 = *v2 + (int32_t)a1;
    return result;
}

// Address range: 0xe7c47 - 0xe7c4d
int64_t function_e7c47(int64_t a1, int64_t a2) {
    // 0xe7c47
    int64_t result; // 0xe7c47
    return result;
}

// Address range: 0xe7cb7 - 0xe7cbd
int64_t function_e7cb7(int64_t a1, int64_t a2, int64_t a3) {
    // 0xe7cb7
    return __asm_int1(a1, a2, a3);
}

// Address range: 0xe7d3f - 0xe7d42
int64_t function_e7d3f(void) {
    // 0xe7d3f
    int64_t result; // 0xe7d3f
    return result;
}

// Address range: 0xe7d48 - 0xe7d4b
int64_t function_e7d48(void) {
    // 0xe7d48
    int64_t result; // 0xe7d48
    return result;
}

// Address range: 0xe7d7c - 0xe7d9b
int64_t function_e7d7c(int64_t a1, int64_t a2, int64_t a3) {
    // 0xe7d7c
    int64_t result; // 0xe7d7c
    uint32_t v1 = (int32_t)result;
    int32_t v2 = a3; // 0xe7d7c
    uint32_t v3 = v1 + v2; // 0xe7d7c
    *(int32_t *)a2 = v3;
    if ((v3 < v1 || v3 == 0) != v3 < 0 == ((v3 ^ v1) & (v3 ^ v2)) < 0 != v3 != 0) {
        // 0xe7daf
        return result;
    }
    int64_t v4 = unknown_ffffffffc873678e(); // 0xe7d88
    int32_t * v5 = (int32_t *)(a1 - 0x2d756953); // 0xe7d92
    *v5 = *v5 + (int32_t)a1;
    return (v4 - (v3 < v1 ? 233 : 232)) % 256 | v4 & -256;
}

// Address range: 0x1646aa - 0x1646ad
int64_t function_1646aa(void) {
    // 0x1646aa
    int64_t result; // 0x1646aa
    return result;
}

// Address range: 0x1646c0 - 0x1646c1
int64_t function_1646c0(void) {
    // 0x1646c0
    int64_t result; // 0x1646c0
    return result;
}

// Address range: 0x1646c1 - 0x16470b
int64_t function_1646c1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1646c1
    int64_t v1; // 0x1646c1
    int64_t result = v1;
    int64_t v2 = a3;
    int64_t v3 = a2;
    bool v4; // 0x1646c1
    *(char *)result = (char)result - (char)(a4 / 256) + (char)v4;
    int32_t * v5 = (int32_t *)(a4 - 8); // 0x1646c7
    int32_t v6 = *v5; // 0x1646c7
    int64_t v7; // 0x1646c1
    int32_t v8 = (int64_t)&v7; // 0x1646c7
    int32_t v9 = v6 + v8; // 0x1646c7
    *v5 = v9;
    if (v9 < 0 == ((v9 ^ v6) & (v9 ^ v8)) < 0) {
        uint64_t v10 = v2;
        *(char *)v10 = *(char *)&v2 + (char)(v10 / 256);
        return result;
    }
    // 0x1646cc
    *(int32_t *)a1 = *(int32_t *)&v3;
    *(char *)((v4 ? -4 : 4) + a1) = __asm_insb((int16_t)v2);
    return function_ffffffff9222528b();
}

// Address range: 0x16470d - 0x164718
int64_t function_16470d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16470d
    int64_t result; // 0x16470d
    return result;
}

// Address range: 0x164718 - 0x1647ce
int64_t function_164718(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    char * v2 = (char *)(4 * a3 + 0xf571333); // 0x164718
    int64_t v3; // 0x164718
    *v2 = *v2 + (char)v3;
    unsigned char v4 = *(char *)(v3 + 0x901e81a); // 0x16471f
    int64_t v5; // 0x164718
    char v6 = *(char *)&v5; // 0x164725
    *(char *)a3 = v6 - (char)(a4 / 256) + (char)(v4 > (char)(a3 / 256));
    int64_t v7 = 0x100000000 * v3 | a3 & 0xffffffff; // 0x16472c
    int64_t v8 = (int64_t)*(int32_t *)&v5; // 0x16472c
    int64_t v9 = v7 / v8; // 0x16472c
    v5 = v7 % v8 & 0xffffffff;
    char v10 = *(char *)-0x78e7d032 + (char)v3; // 0x16472e
    unsigned char v11 = llvm_ctpop_i8(v10); // 0x16472e
    *(char *)-0x78e7d032 = v10;
    if (v11 % 2 != 0) {
        // 0x164736
        return v9 & 0xffffffff;
    }
    int32_t * v12 = (int32_t *)(v3 - 0x17426d4e); // 0x1647a4
    *v12 = *v12 - (int32_t)v3;
    int64_t result = (v9 & 0xffffff00 | (int64_t)*(char *)&v1) + v3 & 0xffffffff; // 0x1647aa
    int32_t v13 = a1; // 0x1647ac
    *(int32_t *)-0x1772224d = *(int32_t *)-0x1772224d + v13;
    int32_t * v14 = (int32_t *)(v5 - 42); // 0x1647b2
    uint32_t v15 = *v14; // 0x1647b2
    uint32_t v16 = v15 + v13; // 0x1647b2
    *v14 = v16;
    char * v17 = (char *)(result - 0x684ed788); // 0x1647b5
    char v18 = a4; // 0x1647b5
    *v17 = *v17 + v18 + (char)(v16 < v15);
    char * v19 = (char *)(v5 + 124); // 0x1647c6
    *v19 = *v19 + v18;
    return result;
}

// Address range: 0x164834 - 0x16483a
int64_t function_164834(void) {
    // 0x164834
    int64_t v1; // 0x164834
    bool v2; // 0x164834
    return v1 - (v2 ? 0x9a17b816 : 0x9a17b815) & 0xffffffff;
}

// Address range: 0x164848 - 0x164850
int64_t function_164848(int64_t a1, int64_t a2, int64_t a3) {
    // 0x164848
    int64_t v1; // 0x164848
    *(int32_t *)v1 = (int32_t)a2;
    return v1 + 0x13d0000 & 0xffffffff;
}

// Address range: 0x16489a - 0x16489f
int64_t function_16489a(int64_t a1) {
    // 0x16489a
    int64_t v1; // 0x16489a
    return v1 & -102;
}

// Address range: 0x164aaa - 0x164aac
int64_t function_164aaa(void) {
    // 0x164aaa
    int64_t result; // 0x164aaa
    bool v1; // 0x164aaa
    if (v1) {
        result = function_164a9c();
    }
    // 0x164aac
    return result;
}

// Address range: 0x164ae2 - 0x164ae3
int64_t function_164ae2(int64_t a1) {
    // 0x164ae2
    int64_t result; // 0x164ae2
    return result;
}

// Address range: 0x164aed - 0x164b69
int64_t function_164aed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x164aed
    int64_t v1; // 0x164aed
    __asm_out_133((int16_t)a3, (int32_t)v1);
    int64_t v2 = v1 & -256; // 0x164aee
    char v3 = (v1 | a3) / 256; // 0x164af0
    if (v3 != 0) {
        int64_t v4 = (v1 + 51) % 256 | v2; // 0x164b03
        *(int64_t *)a5 = 0;
        return (int64_t)(*(int32_t *)v4 * (int32_t)v4);
    }
    int64_t result = (v1 + 192) % 256 | v2; // 0x164aee
    if (v3 >= 0) {
        int32_t * v5 = (int32_t *)(a4 - 0x7feb69a4); // 0x164b54
        *v5 = *v5 + (int32_t)a4;
        int32_t * v6 = (int32_t *)(v1 + 0x6daf01e8 + 2 * v1); // 0x164b5d
        *v6 = *v6 + (int32_t)v1;
        return result + (v1 | a3 & 0xff00) & 0xffffffff;
    }
    if (a4 == 0) {
        // 0x164b02
        return result;
    }
    int64_t result2 = unknown_68e4e1fe(); // 0x164af8
    char * v7 = (char *)(a2 - 125); // 0x164afd
    *v7 = *v7 + (char)v1;
    return result2;
}

// Address range: 0x164bbe - 0x164bbf
int64_t function_164bbe(int64_t a1) {
    // 0x164bbe
    int64_t result; // 0x164bbe
    return result;
}

// Address range: 0x164bf0 - 0x164bf3
int64_t function_164bf0(void) {
    // 0x164bf0
    int64_t result; // 0x164bf0
    return result;
}

// Address range: 0x164c20 - 0x164c21
int64_t function_164c20(void) {
    // 0x164c20
    int64_t result; // 0x164c20
    return result;
}

// Address range: 0x164c46 - 0x164c57
int64_t function_164c46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_ffffffffb4338a4c(); // 0x164c4b
    bool v1; // 0x164c46
    if (!v1) {
        result = function_164c20();
    }
    char * v2 = (char *)result; // 0x164c4d
    *v2 = *v2 - (char)result;
    return result;
}

// Address range: 0x164c5c - 0x164c5d
int64_t function_164c5c(int64_t a1) {
    // 0x164c5c
    int64_t result; // 0x164c5c
    return result;
}

// Address range: 0x164c68 - 0x164c6b
int64_t function_164c68(void) {
    // 0x164c68
    int64_t result; // 0x164c68
    return result;
}

// Address range: 0x164c6c - 0x164c7b
int64_t function_164c6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x164c6c
    int64_t v1; // 0x164c6c
    int64_t v2 = v1;
    *(char *)a4 = (char)a4;
    int64_t v3 = (((v2 + 184) % 256 | v2 & 0xffffff00) ^ 232) + v1; // 0x164c74
    return (v3 + 240) % 256 | v3 & 0xffff0000 | (v3 | a3) & 0xff00;
}

// Address range: 0x164d1e - 0x164d1f
int64_t function_164d1e(int64_t a1) {
    // 0x164d1e
    int64_t result; // 0x164d1e
    return result;
}

// Address range: 0x164d64 - 0x164d83
int64_t function_164d64(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x164d64
    int64_t v1; // 0x164d64
    *(int32_t *)0x1310f5e8096084ee = (int32_t)v1;
    *(int32_t *)(a1 + 0x45dcfe) = (int32_t)v1;
    __asm_out_133((int16_t)a3, (int32_t)v1);
    return v1 & 0xffffffff;
}

// Address range: 0x164d83 - 0x164d97
int64_t function_164d83(int64_t a1) {
    // 0x164d83
    int64_t v1; // 0x164d83
    return function_159d64ad((v1 & 0xffffff00 | (int64_t)__asm_in_134(-98)) + 0xb46ffec3 & 0xffffffff);
}

// Address range: 0x164dce - 0x164dcf
int64_t function_164dce(int64_t a1) {
    // 0x164dce
    int64_t result; // 0x164dce
    return result;
}

// Address range: 0x164e23 - 0x164e26
int64_t function_164e23(int64_t a1) {
    // 0x164e23
    int64_t result; // 0x164e23
    return result;
}

// Address range: 0x164e45 - 0x164e48
int64_t function_164e45(int64_t a1) {
    // 0x164e45
    int64_t result; // 0x164e45
    return result;
}

// Address range: 0x164e90 - 0x164e91
int64_t function_164e90(void) {
    // 0x164e90
    int64_t result; // 0x164e90
    return result;
}

// Address range: 0x18ac85 - 0x18acff
int64_t function_18ac85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18ac85
    int64_t v1; // 0x18ac85
    int32_t * v2 = (int32_t *)(v1 - 0x4c66fe18); // 0x18ac85
    *v2 = *v2 ^ (int32_t)v1;
    int64_t v3; // 0x18ac85
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 - (char)v4;
    *(char *)v3 = *(char *)&v3 + 15;
    int64_t v5 = v3; // 0x18ac90
    unknown_3319f99b();
    int64_t result = unknown_53fcad38(); // 0x18ac9a
    v3 = result;
    if ((int32_t)v5 <= 0x1620006) {
        // 0x18aca1
        return result;
    }
    // 0x18aca6
    *(char *)a1 = (char)result;
    bool v6; // 0x18ac85
    *(char *)((v6 ? -1 : 1) + a1) = __asm_insb((int16_t)a3);
    int64_t v7 = v3; // 0x18aca9
    v3 = a3 & 0xffffffff;
    *(char *)(v1 + 0x3a2cce11) = (char)v1;
    uint64_t v8 = v3 - (v7 & 0xffffffff); // 0x18acbe
    char * v9 = (char *)((v1 & -256) - 24); // 0x18acc0
    *v9 = *v9 + (char)(v8 / 256);
    return v8 & 0xffffffff;
}

// Address range: 0x18ad01 - 0x18ad06
int64_t function_18ad01(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 124); // 0x18ad01
    int64_t result; // 0x18ad01
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x18ae0b - 0x18ae2d
int64_t function_18ae0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 + 0x3a831b77); // 0x18ae0b
    *v1 = *v1 ^ 0x1e8ee81;
    int64_t v2; // 0x18ae0b
    unsigned char v3 = (char)v2; // 0x18ae15
    int64_t v4; // 0x18ae0b
    unsigned char v5 = *(char *)&v4; // 0x18ae15
    *(char *)0x325401e87182a28c = v3 - 58 - v5 + (char)(v5 > v3);
    char * v6 = (char *)(a4 - 24); // 0x18ae27
    *v6 = (char)a4;
    int32_t * v7 = (int32_t *)(a4 & -256 | (int64_t)*v6); // 0x18ae2a
    *v7 = *v7 + (int32_t)a1;
    return a5 & -130;
}

// Address range: 0x18ae60 - 0x18afc3
int64_t function_18ae60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = unknown_33ac266(); // 0x18ae60
    char * v2 = (char *)(v1 - 0x3f6bf100); // 0x18ae65
    *v2 = *v2 + (char)v1;
    int64_t v3 = 0x1126477f; // bp-40, 0x18af5c
    int64_t v4 = (int64_t)&v3; // 0x18af97
    *(int64_t *)(v4 - 8) = 0x1126477f;
    *(int64_t *)(v4 - 16) = v4;
    return function_c4258(a1);
}

// Address range: 0x18afc3 - 0x18b0cc
int64_t function_18afc3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x18afc3
    return function_c4258(a1);
}

// Address range: 0x18b0cc - 0x18b212
int64_t function_18b0cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x18b0cc
    int64_t v1; // bp-32, 0x18b0cc
    v1 = (int64_t)&v1;
    return function_c4258(a1);
}
