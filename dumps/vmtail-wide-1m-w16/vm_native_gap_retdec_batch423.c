/*
 * Targeted RetDec C for native executable gap queue batch 423.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xd57c7-0xd59c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd59c7-0xd5bc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd5dc7-0xd5fc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd5fc7-0xd61c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1716aa-0x1718aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x171aaa-0x171caa rank=- name=- kind=- bytes=- uncovered=-
 *   0x171caa-0x171eaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x171eaa-0x1720aa rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g5;
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

int64_t function_17168a();
int64_t function_1716aa(int64_t a1, int64_t a2, uint64_t a3, int64_t result, int64_t a5);
int64_t function_1716b8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1716d3(void);
int64_t function_1716e6(void);
int64_t function_171aaa(void);
int64_t function_171ad9(void);
int64_t function_171add(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_171bc0(void);
int64_t function_171bc1(void);
int64_t function_171bc8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_171cb1(int64_t a1);
int64_t function_171cd4(int64_t a1, int64_t a2);
int64_t function_171ced(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_171cfc(int64_t a1);
int64_t function_171d37(void);
int64_t function_171d85(int64_t a1);
int64_t function_171da5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_171e29(void);
int64_t function_171e5e(int64_t a1);
int64_t function_171e77(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_171ee0(int64_t a1);
int64_t function_171f06(void);
int64_t function_171f85(void);
int64_t function_171f8b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_171fa0(int64_t a1);
int64_t function_171fa6(void);
int64_t function_171fe9(void);
int64_t function_172066(void);
int64_t function_1f6450f();
int64_t function_2cd88ab1();
int64_t function_3c7d20a8();
int64_t function_c823b();
int64_t function_d57c7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d5824(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d5850(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_d586b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_d5980(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d5a03(void);
int64_t function_d5a1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d5a57(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d5a69(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_d5afe(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d5b52(int64_t a1, int64_t a2);
int64_t function_d5b65(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t result);
int64_t function_d5b8c(int64_t a1, int64_t a2);
int64_t function_d5dc7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_d5dda(void);
int64_t function_d5dfb(void);
int64_t function_d5e26(void);
int64_t function_d5e5d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d5e89(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d5eb1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_d5ef5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_d6076(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_d61b5(void);
int64_t function_ffffffffe87da55b();
int64_t function_ffffffffe8df2a29();
int64_t function_fffffffff7f4bdb9();
int64_t unknown_104e1d01();
int64_t unknown_1717b953();
int64_t unknown_22b7cc0();
int64_t unknown_24156b58();
int64_t unknown_33ce14e9();
int64_t unknown_3a13d17e();
int64_t unknown_3aa48c17();
int64_t unknown_3aa8a194();
int64_t unknown_420e03c8();
int64_t unknown_569843d2();
int64_t unknown_7ad2bb76();
int64_t unknown_afe3c92();
int64_t unknown_c3959e0();
int64_t unknown_c537864();
int64_t unknown_cde0cda();
int64_t unknown_daa8481();
int64_t unknown_ffffffff890d51d5();
int64_t unknown_ffffffff90129b85();
int64_t unknown_ffffffff9184928a();
int64_t unknown_ffffffff999b7eb2();
int64_t unknown_ffffffff99ea8e2d();
int64_t unknown_ffffffffa1cd9087();
int64_t unknown_ffffffffa296c558();
int64_t unknown_ffffffffb217ca7d();
int64_t unknown_ffffffffc11342fa();
int64_t unknown_fffffffff304ddba();
int64_t unknown_fffffffff412178c();
int64_t unknown_fffffffff47ff106();
int64_t unknown_fffffffff8539c71();

// Address range: 0xd57c7 - 0xd57e1
int64_t function_d57c7(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a3 - 0x309bf9a9); // 0xd57cb
    int64_t v2; // 0xd57c7
    bool v3; // 0xd57c7
    uint32_t v4 = v1 ^ 0x162013d ^ (2 * (int32_t)v2 | (int32_t)v3); // 0xd57d1
    int64_t v5 = v4; // 0xd57d1
    char * v6 = (char *)v5; // 0xd57d6
    char v7 = v4; // 0xd57d6
    char v8 = *v6 + v7; // 0xd57d6
    *v6 = v8;
    char v9 = *(char *)0x56179e2; // 0xd57db
    *(char *)0x56179e2 = v9 + (char)((uint64_t)v2 / 256);
    return v5 & 0xffffff00 | (int64_t)(v8 + v7);
}

// Address range: 0xd5824 - 0xd5831
int64_t function_d5824(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd5824
    unknown_ffffffff99ea8e2d(a1, a2, a3);
    return function_ffffffffe87da55b();
}

// Address range: 0xd5850 - 0xd5856
int64_t function_d5850(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0xd5850
    int64_t v1; // 0xd5850
    int64_t v2 = v1;
    *(int32_t *)a4 = 2 * (int32_t)v1;
    return (v2 - a4 / 256) % 256 | v2 & -256;
}

// Address range: 0xd586b - 0xd592a
int64_t function_d586b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    unsigned char v2 = (char)a3;
    int64_t v3; // 0xd586b
    unsigned char v4 = (char)v3 + v2; // 0xd586b
    *(char *)a3 = v4;
    uint32_t v5 = (int32_t)a4 % 32; // 0xd5876
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)((v3 & -256 | (int64_t)*(char *)0x124b01e8f3bf824c) - 2); // 0xd5876
        uint32_t v7 = *v6; // 0xd5876
        *v6 = v7 << v5 | (int32_t)(v4 < v2) << v5 - 1 | (int32_t)((int64_t)v7 >> (int64_t)(33 - v5));
    }
    // 0xd58e9
    *(char *)a1 = *(char *)&v1;
    bool v8; // 0xd586b
    int64_t v9 = v8 ? -1 : 1; // 0xd5879
    v1 += v9;
    int32_t v10 = __asm_in(-87); // 0xd58e9
    int32_t * v11 = (int32_t *)(v3 + 0x6f01e8a0); // 0xd58ef
    int32_t v12 = v3; // 0xd58ef
    *v11 = *v11 - v12;
    int64_t v13 = a4 + 0xfe00 & 0xff00 | a4 & -0xff01; // 0xd58f9
    int64_t result = v10; // 0xd58fc
    if (v13 != 0) {
        int16_t v14 = a3;
        __asm_out(v14, (char)v10);
        int64_t v15 = 2 * v9 + a1; // 0xd58ff
        v1 = unknown_fffffffff47ff106(v15) & 0xffffffff ^ 26;
        *(int32_t *)v15 = __asm_insd(v14);
        char * v16 = (char *)(v13 - 0x6262c584); // 0xd590b
        *v16 = *v16 >> 1;
        uint64_t v17 = unknown_3aa48c17(); // 0xd5911
        char v18 = v17 / 256; // 0xd58a4
        char v19 = *(char *)(v15 + 0x10f9be94); // 0xd58a4
        unsigned char v20 = v18 - v19; // 0xd58a4
        result = 256 * (int64_t)v20 | v17 & -0xff01;
        if (((v20 ^ v18) & (v19 ^ v18)) >= 0) {
            int32_t * v21 = (int32_t *)(v13 + 0x3c0aa0f9); // 0xd5894
            uint32_t v22 = *v21; // 0xd5894
            uint32_t v23 = v22 + v12; // 0xd5894
            *v21 = v23;
            if (v23 >= v22) {
                // 0xd589c
                *(int32_t *)result = (int32_t)result;
            }
            // 0xd589e
            return result;
        }
    }
    int32_t * v24 = (int32_t *)result; // 0xd58ac
    *v24 = *v24 + (int32_t)v3;
    unknown_fffffffff304ddba();
    return unknown_420e03c8();
}

// Address range: 0xd5980 - 0xd5998
int64_t function_d5980(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd5980
    int64_t v1; // 0xd5980
    int32_t * v2 = (int32_t *)(4 * a1 + 87 + v1); // 0xd5980
    *v2 = *v2 | (int32_t)v1;
    int64_t v3; // 0xd5980
    unsigned char v4 = *(char *)&v3; // 0xd598c
    *(char *)a4 = (char)a4;
    *(char *)(a4 & -256 | (int64_t)v4) = v4;
    return 0x10000 * (int32_t)v1 + 0x63a0000 >> 16;
}

// Address range: 0xd5a03 - 0xd5a04
int64_t function_d5a03(void) {
    // 0xd5a03
    int64_t result; // 0xd5a03
    return result;
}

// Address range: 0xd5a1e - 0xd5a39
int64_t function_d5a1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd5a1e
    int64_t v1; // 0xd5a1e
    int64_t v2 = v1 + 0x3a758cfe; // 0xd5a1e
    char * v3 = (char *)(v1 + 0x17013db0); // 0xd5a23
    *v3 = *v3 + (char)v2;
    return v2 & 0xffffffff;
}

// Address range: 0xd5a57 - 0xd5a69
int64_t function_d5a57(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = (a3 & 0xfffffff9 | 6) + 0xba3a31ff; // 0xd5a5c
    int64_t v2; // 0xd5a57
    unsigned char v3 = llvm_ctpop_i8((char)v1 - (char)v2); // 0xd5a62
    int64_t result = v1 & 0xffffffff; // 0xd5a63
    if (v3 % 2 == 0) {
        result = function_d5a03();
    }
    // 0xd5a65
    return result;
}

// Address range: 0xd5a69 - 0xd5afc
int64_t function_d5a69(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xd5a69
    int64_t v1; // 0xd5a69
    int32_t * v2 = (int32_t *)(v1 - 0x17fec2d6); // 0xd5a69
    *v2 = *v2 + (int32_t)a2;
    char v3 = a3;
    int32_t * v4 = (int32_t *)(a3 - 24);
    int64_t v5 = a2; // 0xd5a69
    int64_t v6 = 2 * a1; // 0xd5a6f
    int64_t v7 = v6 & 0xfffffffe; // 0xd5a6f
    char * v8 = (char *)(v7 - 0x35f3e200); // 0xd5a72
    *v8 = *v8 & v3;
    uint64_t v9 = unknown_daa8481((int32_t)v6); // 0xd5a7b
    __asm_outsd((int16_t)a3, *(int32_t *)v5);
    unknown_ffffffff9184928a();
    unsigned char v10 = (char)v9; // 0xd5a8d
    unsigned char v11 = *(char *)(a6 - 0x7dfe1731); // 0xd5a8d
    int64_t v12 = unknown_ffffffffa296c558(); // 0xd5a95
    unsigned char v13 = (v10 - v11) % 32;
    uint32_t v14; // 0xd5a9a
    uint32_t v15; // 0xd5a9a
    if (v13 != 0) {
        v14 = *v4;
        v15 = (int32_t)v13;
        *v4 = (int32_t)(v11 > v10) << v15 - 1 | v14 << v15 | (int32_t)((int64_t)v14 >> (int64_t)(33 - v15));
    }
    int64_t v16; // 0xd5a69
    int64_t v17 = v16 & 0xffffffff; // 0xd5a71
    bool v18; // 0xd5a69
    v5 += (v18 ? -4 : 4);
    int32_t * v19 = (int32_t *)(v17 + 0x4ff20107); // 0xd5a9d
    uint32_t v20 = *v19; // 0xd5a9d
    uint32_t v21 = v20 + (int32_t)v12; // 0xd5a9d
    *v19 = v21;
    v16 = v12;
    while (v21 >= v20 && v21 != 0) {
        // 0xd5a6f
        v6 = 2 * v7;
        v7 = v6 & 0xfffffffe;
        v8 = (char *)(v7 - 0x35f3e200);
        *v8 = *v8 & v3;
        v9 = unknown_daa8481((int32_t)v6);
        __asm_outsd((int16_t)a3, *(int32_t *)v5);
        unknown_ffffffff9184928a();
        v10 = (char)v9;
        v11 = *(char *)(a6 - 0x7dfe1731);
        v12 = unknown_ffffffffa296c558();
        v13 = (v10 - v11) % 32;
        if (v13 != 0) {
            v14 = *v4;
            v15 = (int32_t)v13;
            *v4 = (int32_t)(v11 > v10) << v15 - 1 | v14 << v15 | (int32_t)((int64_t)v14 >> (int64_t)(33 - v15));
        }
        v17 = v16 & 0xffffffff;
        v5 += (v18 ? -4 : 4);
        v19 = (int32_t *)(v17 + 0x4ff20107);
        v20 = *v19;
        v21 = v20 + (int32_t)v12;
        *v19 = v21;
        v16 = v12;
    }
    char v22 = *(char *)(v12 - 118); // 0xd5aab
    *(char *)0x64cbd601e84c2101 = (char)v12;
    unsigned char v23 = *(char *)v5; // 0xd5ab7
    unsigned char v24 = *(char *)v7; // 0xd5ab7
    int32_t v25 = *(int32_t *)(v17 - 0x17cf6186); // 0xd5ab8
    uint32_t v26 = v25 + (int32_t)(a3 & 0xffffff00 | (int64_t)(v22 + v3)) + (int32_t)(v23 < v24); // 0xd5ab8
    int32_t * v27 = (int32_t *)(v12 + 0x52e60e03); // 0xd5abe
    uint32_t v28 = *v27; // 0xd5abe
    uint32_t v29 = v26 + v28; // 0xd5abe
    *v27 = v29;
    unsigned char v30 = *(char *)-0x22bfb2ddfe1788b2; // 0xd5ad0
    *(char *)-0x17244699 = *(char *)-0x17244699 | v30;
    int32_t * v31 = (int32_t *)(int64_t)v26; // 0xd5adf
    *v31 = *v31 + v26;
    int32_t * v32 = (int32_t *)(8 * v1 - 1 + (((v12 - v9 / 256 + (int64_t)(v29 < v28)) % 256 | v12 & 0xffffff00) + 0x4c63447c & 0xffffff00 | (int64_t)v30)); // 0xd5ae1
    *v32 = *v32 | v26;
    return unknown_ffffffffc11342fa(0x1b01e80d, v5 + (v18 ? -1 : 1), v26);
}

// Address range: 0xd5afe - 0xd5b08
int64_t function_d5afe(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 39); // 0xd5afe
    *v1 = *v1 + (int32_t)a2;
    return 0x400abf4;
}

// Address range: 0xd5b52 - 0xd5b5e
int64_t function_d5b52(int64_t a1, int64_t a2) {
    // 0xd5b52
    return unknown_24156b58(a1, a2);
}

// Address range: 0xd5b65 - 0xd5b87
int64_t function_d5b65(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t result) {
    // 0xd5b65
    int64_t v1; // 0xd5b65
    int64_t v2 = v1;
    char * v3 = (char *)(v1 - 0x5d3bfac0); // 0xd5b65
    char v4 = *v3 | (char)(a4 / 256); // 0xd5b65
    *v3 = v4;
    uint32_t v5 = (int32_t)a4; // 0xd5b6c
    uint32_t v6 = v5 % 32; // 0xd5b6c
    int64_t v7; // 0xd5b65
    if (v6 != 0) {
        v7 = (int32_t)v2 << v6 | (int32_t)((v2 & 0xffffffff) >> (int64_t)(33 - v6));
    }
    if (v4 != 0) {
        // 0xd5bc8
        return result;
    }
    int64_t v8 = unknown_7ad2bb76(); // 0xd5b70
    uint64_t v9 = v8 + 46; // 0xd5b75
    char * v10 = (char *)(v9 % 256 | v8 & -256); // 0xd5b79
    *v10 = (char)v9;
    *(char *)a1 = *v10;
    int32_t * v11 = (int32_t *)(v7 - 107); // 0xd5b7c
    *v11 = *v11 + v5;
    bool v12; // 0xd5b65
    return unknown_ffffffff90129b85((v12 ? -1 : 1) + a1);
}

// Address range: 0xd5b8c - 0xd5b9a
int64_t function_d5b8c(int64_t a1, int64_t a2) {
    int64_t v1 = unknown_afe3c92(); // 0xd5b8c
    bool v2; // 0xd5b8c
    return (v1 + 234 + (int64_t)(bool)v2) % 256 | v1 & -256;
}

// Address range: 0xd5dc7 - 0xd5dd4
int64_t function_d5dc7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 + 54); // 0xd5dc9
    *v1 = *v1 + (char)(a3 / 256);
    int64_t result = unknown_569843d2(); // 0xd5dcc
    char * v2 = (char *)(result + 1); // 0xd5dd1
    int64_t v3; // 0xd5dc7
    *v2 = *v2 | (char)v3;
    return result;
}

// Address range: 0xd5dda - 0xd5de1
int64_t function_d5dda(void) {
    // 0xd5dda
    int64_t v1; // 0xd5dda
    int64_t v2 = v1;
    int64_t result; // 0xd5dda
    // 0xd5ddc
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)v1;
    return result;
}

// Address range: 0xd5dfb - 0xd5dfd
int64_t function_d5dfb(void) {
    // 0xd5dfb
    int64_t v1; // 0xd5dfb
    return (int64_t)&v1;
}

// Address range: 0xd5e26 - 0xd5e2b
int64_t function_d5e26(void) {
    // 0xd5e26
    return function_1f6450f();
}

// Address range: 0xd5e5d - 0xd5e89
int64_t function_d5e5d(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd5e5d
    int64_t v1; // 0xd5e5d
    int32_t v2 = v1; // 0xd5e61
    int32_t v3 = a2; // 0xd5e61
    int32_t v4 = v2 + v3; // 0xd5e61
    int64_t v5; // 0xd5e5d
    int64_t v6; // 0xd5e5d
    if (v4 < 0 != ((v4 ^ v2) & (v4 ^ v3)) < 0) {
        // 0xd5e65
        *(int32_t *)a1 = 0;
        *(char *)a1 = (char)v1;
        bool v7; // 0xd5e5d
        v5 = unknown_fffffffff8539c71((v7 ? -1 : 1) + a1);
        v6 = 256 * (v1 | a3) & 0xff00 | v1 & -0xff01;
    }
    int64_t v8 = v1 % 256 | a3; // 0xd5e5d
    __asm_out_133((int16_t)v8, (int32_t)v5);
    unknown_3a13d17e();
    int32_t * v9 = (int32_t *)v8; // 0xd5e7d
    *v9 = *v9 - (int32_t)v6;
    return unknown_ffffffffa1cd9087();
}

// Address range: 0xd5e89 - 0xd5e9b
int64_t function_d5e89(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd5e89
    unknown_3aa8a194(a1, a2, a3, a4);
    char v1 = *(char *)(a2 + 0x1e8db1b); // 0xd5e93
    int64_t v2; // 0xd5e89
    int64_t result = function_d5ef5(a1, a2, a3, a4 & -256 | (int64_t)(v1 & (char)a4), v2, (int64_t)&g5); // 0xd5e99
    return result;
}

// Address range: 0xd5eb1 - 0xd5ef5
int64_t function_d5eb1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_22b7cc0(); // 0xd5eba
    char * v1 = (char *)(result + 0x489c9900); // 0xd5ebf
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0xd5ef5 - 0xd6076
int64_t function_d5ef5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xd5ef5
    int64_t v1; // bp-24, 0xd5ef5
    int64_t v2 = (int64_t)&v1; // 0xd5fa9
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 + 16); // 0xd5fdf
    int64_t v4 = v2 + 32; // 0xd5fdf
    int64_t * v5 = (int64_t *)v4; // 0xd5fdf
    *v5 = *v3;
    *v3 = a1;
    v1 = a6;
    *(int64_t *)(v2 + 56) = a6;
    *v3 = a3;
    v1 = a2;
    *v3 = v4;
    *(int64_t *)(v2 + 24) = *v5;
    *v3 = v4;
    int64_t v6; // 0xd5ef5
    return function_c823b(*v3, a2, *v3, a4, a5, v6, 0xd4218);
}

// Address range: 0xd6076 - 0xd61b4
int64_t function_d6076(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xd6076
    int64_t v1; // 0xd6076
    bool v2; // 0xd6076
    return function_c823b(a1, a2, (v1 & 0xffffffff | 0x100000000 * a3) % (a1 & 0xffffffff) & 0xffffffff, a4, a5, a6, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0xd61b5 - 0xd61b9
int64_t function_d61b5(void) {
    // 0xd61b5
    int64_t v1; // 0xd61b5
    return (int64_t)&v1;
}

// Address range: 0x1716aa - 0x1716b7
int64_t function_1716aa(int64_t a1, int64_t a2, uint64_t a3, int64_t result, int64_t a5) {
    // 0x1716aa
    int64_t v1; // 0x1716aa
    char * v2 = (char *)(v1 + 43); // 0x1716ac
    *v2 = *v2 + (char)(a3 / 256);
    int64_t v3; // 0x1716aa
    *(int32_t *)a2 = *(int32_t *)&v3 ^ (int32_t)a3;
    return result;
}

// Address range: 0x1716b8 - 0x1716d2
int64_t function_1716b8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1716b8
    int64_t v1; // 0x1716b8
    bool v2; // 0x1716b8
    if (a4 != 1 == v2) {
        v1 = function_17168a();
    }
    int64_t v3 = v1;
    __asm_out_134(-39, (char)v3);
    if (a4 != 2 != v2) {
        // 0x1716be
        int3_t v4; // 0x1716b8
        __frontend_reg_store_fpr(v4 - 1, (float80_t)*(float64_t *)(a2 - 11));
        char * v5 = (char *)(a4 + 0x188007e); // 0x1716c3
        *v5 = *v5 + (char)(a3 / 256);
    }
    // 0x1716c9
    int64_t v6; // 0x1716b8
    return (v3 & 0xff00) + v6 & 0xff00 | v3 & -0xff01;
}

// Address range: 0x1716d3 - 0x1716dd
int64_t function_1716d3(void) {
    // 0x1716d3
    int64_t result; // 0x1716d3
    return result;
}

// Address range: 0x1716e6 - 0x1716eb
int64_t function_1716e6(void) {
    // 0x1716e6
    return function_fffffffff7f4bdb9();
}

// Address range: 0x171aaa - 0x171ab1
int64_t function_171aaa(void) {
    // 0x171aaa
    return unknown_ffffffff999b7eb2();
}

// Address range: 0x171ad9 - 0x171adc
int64_t function_171ad9(void) {
    // 0x171ad9
    int64_t result; // 0x171ad9
    return result;
}

// Address range: 0x171add - 0x171ae3
int64_t function_171add(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x171add
    return a4 & 0xffffffff;
}

// Address range: 0x171bc0 - 0x171bc1
int64_t function_171bc0(void) {
    // 0x171bc0
    int64_t result; // 0x171bc0
    return result;
}

// Address range: 0x171bc1 - 0x171bc8
int64_t function_171bc1(void) {
    // 0x171bc1
    int64_t result; // 0x171bc1
    return result;
}

// Address range: 0x171bc8 - 0x171c58
int64_t function_171bc8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x171bc8
    int64_t v1; // 0x171bc8
    uint64_t v2 = v1;
    int64_t v3 = a3;
    uint32_t v4 = 0x10000 * (int32_t)v1 >> 16; // 0x171bc8
    unsigned char v5 = (char)v4 & 26; // 0x171bc9
    int64_t v6 = a4 - 1; // 0x171bcb
    if (v6 != 0 && v5 != 0) {
        int64_t v7 = (int64_t)v5 | (int64_t)(v4 & -256); // 0x171bc9
        int32_t * v8 = (int32_t *)(a3 + 0x17503077); // 0x171c3e
        *v8 = *v8 + (int32_t)v7;
        char * v9 = (char *)(v7 + 0x2501800); // 0x171c44
        *v9 = *v9 + v5;
        char * v10 = (char *)(v3 + 1); // 0x171c4a
        unsigned char v11 = *v10; // 0x171c4a
        unsigned char v12 = v11 + (char)(v4 / 256); // 0x171c4a
        *v10 = v12;
        int64_t result = unknown_1717b953(); // 0x171c4d
        int32_t * v13 = (int32_t *)(a4 - 0xfc7001); // 0x171c52
        uint32_t v14 = *v13; // 0x171c52
        uint32_t v15 = (int32_t)v6 % 32; // 0x171c52
        if (v15 != 0) {
            *v13 = (int32_t)(v12 < v11) << 32 - v15 | v14 >> v15 | (int32_t)((int64_t)v14 << (int64_t)(33 - v15));
        }
        // 0x171c3c
        return result;
    }
    if (v5 != 0) {
        function_171bc0();
    }
    // 0x171bcf
    unknown_ffffffff890d51d5();
    unknown_c3959e0();
    *(int32_t *)v2 = -1 - (int32_t)v2;
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)a1;
    int64_t v16 = (a5 & (int64_t)&g2) == 0 ? 4 : -4; // 0x171beb
    int64_t v17 = v16 + a1; // 0x171beb
    __asm_hlt(v17);
    __asm_in_135((int16_t)v3);
    int64_t result2 = unknown_104e1d01(); // 0x171bfb
    int64_t v18; // 0x171bc8
    unsigned char v19 = *(char *)&v18 ^ (char)(v2 / 256); // 0x171c00
    if (v19 == 0) {
        // 0x171c3c
        return result2;
    }
    int32_t * v20 = (int32_t *)(v3 - 0x810ba2a); // 0x171c07
    *v20 = *v20 + (int32_t)v17;
    int64_t v21 = v17 + v16; // 0x171c0d
    *(char *)-0x16f301ca = *(char *)-0x16f301ca | (char)result2 | -24;
    int32_t * v22 = (int32_t *)(v21 + 0xf0b1c7a); // 0x171c14
    *v22 = *v22 + (int32_t)(256 * (int64_t)v19 | v2 & 0xffff00ff);
    return function_ffffffffe8df2a29(v21);
}

// Address range: 0x171cb1 - 0x171cb5
int64_t function_171cb1(int64_t a1) {
    // 0x171cb1
    return __asm_iretd(a1);
}

// Address range: 0x171cd4 - 0x171ceb
int64_t function_171cd4(int64_t a1, int64_t a2) {
    uint64_t v1 = unknown_cde0cda(); // 0x171cd4
    int64_t v2; // 0x171cd4
    *(char *)a2 = (char)((uint64_t)v2 / 256);
    char v3 = *(char *)(v1 + 0x6439ab0d); // 0x171cdb
    float80_t v4; // 0x171cd4
    *(float64_t *)(256 * (int64_t)(v3 & (char)(v1 / 256)) | v1 & -0xff01) = (float64_t)v4;
    return unknown_33ce14e9();
}

// Address range: 0x171ced - 0x171cfc
int64_t function_171ced(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x171ced
    int64_t result; // 0x171ced
    int32_t * v1 = (int32_t *)((a4 - 256 * result & 0xff00 | a4 & -0xff01) - 10); // 0x171cf3
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x171cfc - 0x171cfe
int64_t function_171cfc(int64_t a1) {
    // 0x171cfc
    int64_t result; // 0x171cfc
    return result;
}

// Address range: 0x171d37 - 0x171d38
int64_t function_171d37(void) {
    // 0x171d37
    int64_t result; // 0x171d37
    return result;
}

// Address range: 0x171d85 - 0x171d87
int64_t function_171d85(int64_t a1) {
    // 0x171d85
    int64_t result; // 0x171d85
    return result;
}

// Address range: 0x171da5 - 0x171db1
int64_t function_171da5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x171da5
    int64_t v1; // 0x171da5
    uint32_t v2 = (int32_t)v1;
    uint32_t v3 = v2 + (int32_t)a3; // 0x171da5
    *(int32_t *)a1 = v3;
    int64_t v4; // 0x171da5
    uint32_t v5 = *(int32_t *)&v4; // 0x171da7
    int64_t v6 = v3 < v2 ? 220 : 219; // 0x171da8
    int64_t v7 = (v6 + (int64_t)v5) % 256 | (int64_t)(v5 & -256); // 0x171daa
    if (a4 != 1) {
        v7 = function_171d37();
    }
    // 0x171dac
    return v7 & -0xff01 | (int64_t)&g1;
}

// Address range: 0x171e29 - 0x171e2c
int64_t function_171e29(void) {
    // 0x171e29
    int64_t result; // 0x171e29
    return result;
}

// Address range: 0x171e5e - 0x171e66
int64_t function_171e5e(int64_t a1) {
    // 0x171e5e
    return unknown_c537864(a1);
}

// Address range: 0x171e77 - 0x171edf
int64_t function_171e77(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffb217ca7d(); // 0x171e77
    bool v2; // 0x171e77
    int64_t v3 = (v2 ? -4 : 4) + a1; // 0x171e7c
    *(int32_t *)-0x34b6304385736bf6 = (int32_t)v1;
    unknown_fffffffff412178c(v3);
    int64_t v4; // 0x171e77
    *(char *)a3 = (char)(v4 / 256);
    *(char *)0xabe51f31 = *(char *)0xabe51f31 + 24;
    int64_t v5 = a4 & -0xff01 | (int64_t)&g3; // 0x171ea1
    int32_t * v6 = (int32_t *)(a3 + 4); // 0x171ea5
    *v6 = *v6 + (int32_t)v5;
    int64_t v7 = v3 + (v2 ? -1 : 1); // 0x171ea8
    int64_t v8 = a3 & -0xff01 | (int64_t)&g4; // 0x171ea9
    int32_t * v9 = (int32_t *)(v8 + 0x157ca3e85); // 0x171eb6
    *v9 = *v9 + (int32_t)v7;
    int64_t v10 = *(int64_t *)v8; // 0x171eba
    *(int64_t *)v4 = v10;
    int64_t * v11 = (int64_t *)(v4 + 8); // 0x171ec7
    int64_t v12 = *v11; // 0x171ec7
    char * v13 = (char *)(v10 - 123); // 0x171ece
    *v13 = *v13 | (char)v5;
    *v11 = v5;
    *(char *)0xd3adf1c1fcb01e8 = (char)v12;
    *(int32_t *)v7 = (int32_t)v12;
    return v12 & 0xffffffff;
}

// Address range: 0x171ee0 - 0x171ee6
int64_t function_171ee0(int64_t a1) {
    // 0x171ee0
    int64_t result; // 0x171ee0
    *(int32_t *)a1 = (int32_t)result + (int32_t)a1;
    return result;
}

// Address range: 0x171f06 - 0x171f0b
int64_t function_171f06(void) {
    // 0x171f06
    return function_3c7d20a8();
}

// Address range: 0x171f85 - 0x171f88
int64_t function_171f85(void) {
    // 0x171f85
    int64_t result; // 0x171f85
    return result;
}

// Address range: 0x171f8b - 0x171f9e
int64_t function_171f8b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x171f8b
    int64_t result; // 0x171f8b
    __asm_out_134(17, (char)result);
    *(char *)a2 = (char)result + (char)(a4 / 256);
    return result;
}

// Address range: 0x171fa0 - 0x171fa3
int64_t function_171fa0(int64_t a1) {
    // 0x171fa0
    int64_t result; // 0x171fa0
    return result;
}

// Address range: 0x171fa6 - 0x171fad
int64_t function_171fa6(void) {
    // 0x171fa6
    int64_t result; // 0x171fa6
    return result;
}

// Address range: 0x171fe9 - 0x171ff1
int64_t function_171fe9(void) {
    // 0x171fe9
    int64_t result; // 0x171fe9
    return result;
}

// Address range: 0x172066 - 0x172081
int64_t function_172066(void) {
    // 0x172066
    return function_2cd88ab1();
}
