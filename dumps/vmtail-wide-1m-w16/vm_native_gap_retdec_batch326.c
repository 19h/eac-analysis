/*
 * Targeted RetDec C for native executable gap queue batch 326.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x14cd13-0x14cf13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14cf13-0x14d113 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14d513-0x14d713 rank=- name=- kind=- bytes=- uncovered=-
 *   0x193685-0x193885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x193885-0x193a85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x193a85-0x193c85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x193c85-0x193e85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x193e85-0x194085 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
extern int g6;
extern int g7;
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
uint32_t __readfsdword(int64_t offset);
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
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
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

int64_t function_14cd13(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_14ce00(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14ce17(void);
int64_t function_14ce43(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14cf34(void);
int64_t function_14cf75(void);
int64_t function_14cf7a(void);
int64_t function_14cf89(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14cfa9(void);
int64_t function_14cfba(void);
int64_t function_14d01d(void);
int64_t function_14d054(int64_t a1);
int64_t function_14d089(int64_t a1);
int64_t function_14d0a1(int64_t a1);
int64_t function_14d513(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_14d563(int64_t a1);
int64_t function_14d573(void);
int64_t function_14d5b6(int64_t a1, int64_t a2);
int64_t function_14d5e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14d5f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14d62b(void);
int64_t function_14d640(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14d665(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14d69f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14d6d0(void);
int64_t function_19364f();
int64_t function_193685(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1936ab(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1936dd(int64_t a1);
int64_t function_19371f(int64_t a1, int64_t a2);
int64_t function_193782(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1937b3(void);
int64_t function_1937bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_193870(void);
int64_t function_193884(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1938b0(void);
int64_t function_193958(int64_t a1);
int64_t function_193a3d(void);
int64_t function_193aa3(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7, int64_t a8);
int64_t function_193b5a(int64_t a1);
int64_t function_193b67(int64_t a1);
int64_t function_193b85(void);
int64_t function_193c06(int64_t a1, int64_t a2, int64_t a3);
int64_t function_193cd0(int64_t a1);
int64_t function_193cd8(int64_t a1, int64_t a2);
int64_t function_193ce2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_193d29(void);
int64_t function_193dcb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_193deb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_193e76(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_193e91(int64_t a1);
int64_t function_193e9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_193f3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_193f6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_194000(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1fd50e7();
int64_t function_201cfc9();
int64_t function_2020ccc();
int64_t function_31168b33();
int64_t function_e60a5db();
int64_t function_ffffffff844cda42();
int64_t function_ffffffffa8ba0019();
int64_t function_ffffffffaeb23878();
int64_t function_ffffffffc12e4f63();
int64_t function_ffffffffd8802995();
int64_t function_fffffffff089d24c();
int64_t unknown_28bc63aa();
int64_t unknown_690e7d16();
int64_t unknown_6c2e78f();
int64_t unknown_ffffffffab571006();
int64_t unknown_ffffffffb6245eba();
int64_t unknown_ffffffffbe1a0f9e();
int64_t unknown_ffffffffc88cfb0c();
int64_t unknown_ffffffffdd70d0b2();
int64_t unknown_ffffffffe8ab47a1();

// Address range: 0x14cd13 - 0x14cd81
int64_t function_14cd13(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x14cd13
    int64_t result; // 0x14cd13
    bool v1; // 0x14cd13
    if (!v1) {
        // 0x14cd78
        *(char *)a1 = __asm_insb((int16_t)a3);
        return result;
    }
    int64_t v2 = (result & 0xffffff3b | 196) + result; // 0x14cd1c
    int64_t result2 = v2 & 0xffffffff; // 0x14cd1c
    if (llvm_ctpop_i8((char)(result | a1)) % 2 != 0) {
        // 0x14cd2d
        return result2;
    }
    // 0x14cd22
    __asm_out(2 * (int16_t)a3, (int32_t)v2);
    int32_t * v3 = (int32_t *)(result2 + 49); // 0x14cd23
    *v3 = *v3 | 0x6c0ee9f4;
    return result2;
}

// Address range: 0x14ce00 - 0x14ce06
int64_t function_14ce00(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 51); // 0x14ce00
    *v1 = *v1 + (char)a3;
    int64_t result; // 0x14ce00
    return result;
}

// Address range: 0x14ce17 - 0x14ce18
int64_t function_14ce17(void) {
    // 0x14ce17
    int64_t result; // 0x14ce17
    return result;
}

// Address range: 0x14ce43 - 0x14ceec
int64_t function_14ce43(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14ce43
    int64_t v1; // 0x14ce43
    int64_t v2 = v1;
    int64_t v3 = a2;
    int32_t * v4 = (int32_t *)(v2 + 91); // 0x14ce43
    int32_t v5 = *v4; // 0x14ce43
    int32_t v6 = a1; // 0x14ce43
    int32_t v7 = v5 + v6; // 0x14ce43
    *v4 = v7;
    *(char *)a2 = (char)(v7 == 0 | v7 < 0 != ((v7 ^ v5) & (v7 ^ v6)) < 0);
    int64_t v8 = (v2 + 66) % 256 | v2 & -256; // 0x14ce49
    uint32_t v9 = (int32_t)a3; // 0x14ce4b
    int32_t v10 = v1; // 0x14ce4b
    uint32_t v11 = v10 + v9; // 0x14ce4b
    bool v12; // 0x14ce43
    if (((v11 ^ v9) & (v11 ^ v10)) < 0) {
        char * v13 = (char *)(v8 - 30); // 0x14ce4f
        *v13 = *v13 | (char)v11;
        __asm_int1(a1, v3 + (v12 ? -1 : 1), v11);
        float80_t v14; // 0x14ce43
        *(int64_t *)0x4e8a7479 = (int64_t)v14;
        return 2 * v1 & 0xffffffff;
    }
    // 0x14ce80
    *(int32_t *)a1 = *(int32_t *)&v3;
    int64_t v15 = v3 + (v12 ? -4 : 4); // 0x14ce80
    v3 = v15;
    if (v11 >= v9) {
        int64_t v16 = v8 + v1; // 0x14ce83
        int64_t result = v16 & 0xffffffff; // 0x14ce83
        int32_t * v17 = (int32_t *)(result + 11); // 0x14ce85
        *v17 = *v17 + (int32_t)v16;
        return result;
    }
    // 0x14cec0
    int64_t v18; // 0x14ce43
    int64_t v19 = v18;
    __asm_out_133(84, (int32_t)v8);
    int64_t result2 = unknown_ffffffffdd70d0b2(); // 0x14cec5
    int64_t v20; // 0x14ce43
    int32_t v21 = v20; // 0x14cecb
    int32_t v22 = *(int32_t *)(a4 + 0x6debe96 + 2 * v20); // 0x14cecb
    uint32_t v23 = v22 + v21; // 0x14cecb
    while (((v23 ^ v21) & (v23 ^ v22)) >= 0) {
        uint32_t v24 = v23 + (int32_t)v19; // 0x14cebc
        unsigned char v25 = llvm_ctpop_i8((char)v24); // 0x14cebc
        v20 = v23;
        if (v25 % 2 == 0) {
            // 0x14cea3
            return result2;
        }
        v19 = v24;
        __asm_out_133(84, (int32_t)result2);
        result2 = unknown_ffffffffdd70d0b2();
        v21 = v20;
        v22 = *(int32_t *)(a4 + 0x6debe96 + 2 * v20);
        v23 = v22 + v21;
    }
    // 0x14ced4
    if (llvm_ctpop_i8((char)v23 + (char)a4) % 2 == 0) {
        // 0x14cee4
        *(int32_t *)0x3416b706 = *(int32_t *)0x3416b706 + (int32_t)v15;
        return result2;
    }
    int32_t * v26 = (int32_t *)((int64_t)v11 + 103); // 0x14cedf
    *v26 = *v26 + (int32_t)v19;
    return result2;
}

// Address range: 0x14cf34 - 0x14cf35
int64_t function_14cf34(void) {
    // 0x14cf34
    int64_t result; // 0x14cf34
    return result;
}

// Address range: 0x14cf75 - 0x14cf76
int64_t function_14cf75(void) {
    // 0x14cf75
    int64_t result; // 0x14cf75
    return result;
}

// Address range: 0x14cf7a - 0x14cf7f
int64_t function_14cf7a(void) {
    // 0x14cf7a
    return function_ffffffffaeb23878();
}

// Address range: 0x14cf89 - 0x14cfa9
int64_t function_14cf89(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)((unknown_6c2e78f() + 0xb8eea3ac & 0xffffffff) - 65); // 0x14cf95
    int32_t v2 = *v1 + ((int32_t)a4 & -256 | 125); // 0x14cf95
    *v1 = v2;
    unknown_ffffffffbe1a0f9e();
    if (v2 < 1) {
        function_14cf75();
    }
    // 0x14cfa1
    bool v3; // 0x14cf89
    int64_t v4 = v3 ? -1 : 1; // 0x14cfa2
    return function_1fd50e7(v4 + a1, v4 + a2);
}

// Address range: 0x14cfa9 - 0x14cfae
int64_t function_14cfa9(void) {
    // 0x14cfa9
    return function_31168b33();
}

// Address range: 0x14cfba - 0x14cfbd
int64_t function_14cfba(void) {
    // 0x14cfba
    int64_t result; // 0x14cfba
    return result;
}

// Address range: 0x14d01d - 0x14d01f
int64_t function_14d01d(void) {
    // 0x14d01d
    int64_t result; // 0x14d01d
    return result;
}

// Address range: 0x14d054 - 0x14d059
int64_t function_14d054(int64_t a1) {
    // 0x14d054
    int64_t result; // 0x14d054
    *(int32_t *)result = (int32_t)result;
    return result;
}

// Address range: 0x14d089 - 0x14d08c
int64_t function_14d089(int64_t a1) {
    // 0x14d089
    int64_t result; // 0x14d089
    return result;
}

// Address range: 0x14d0a1 - 0x14d0af
int64_t function_14d0a1(int64_t a1) {
    // 0x14d0a1
    bool v1; // 0x14d0a1
    unknown_28bc63aa((v1 ? -1 : 1) + a1);
    return function_fffffffff089d24c();
}

// Address range: 0x14d513 - 0x14d55c
int64_t function_14d513(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x14d513
    int64_t v1; // 0x14d513
    int64_t v2 = v1 & -0xff01 | (int64_t)&g1; // 0x14d513
    int32_t v3 = v2; // 0x14d515
    __asm_out_133(104, v3);
    char * v4 = (char *)v2; // 0x14d517
    *v4 = *v4 + (char)v2;
    if (v3 > -0x18a288ff) {
        // 0x14d552
        return a1 & 0xffffffff;
    }
    int32_t * v5 = (int32_t *)(a4 + 0x519a0068 + v1); // 0x14d522
    *v5 = *v5 + (int32_t)a4;
    int32_t v6 = *(int32_t *)((a1 & 0xffff00ff | (int64_t)".2") + 0xa80e31); // 0x14d52b
    uint32_t v7 = 121 * v6; // 0x14d52b
    char v8 = v7; // 0x14d532
    __asm_out_134(61, v8);
    int32_t * v9 = (int32_t *)((int64_t)v7 + 41); // 0x14d534
    *v9 = *v9 + (int32_t)v1;
    __asm_out_134(88, v8);
    int64_t result = (0x790000 * v6 >> 16) + 0x38f65058; // 0x14d53c
    char * v10 = (char *)result; // 0x14d546
    *v10 = *v10 + 1;
    return result;
}

// Address range: 0x14d563 - 0x14d56a
int64_t function_14d563(int64_t a1) {
    // 0x14d563
    int64_t v1; // 0x14d563
    int64_t v2 = v1;
    return (v2 + 59) % 256 | v2 & -256;
}

// Address range: 0x14d573 - 0x14d576
int64_t function_14d573(void) {
    // 0x14d573
    int64_t result; // 0x14d573
    return result;
}

// Address range: 0x14d5b6 - 0x14d5d2
int64_t function_14d5b6(int64_t a1, int64_t a2) {
    // 0x14d5b6
    int64_t v1; // 0x14d5b6
    unsigned char v2 = (char)v1; // 0x14d5b9
    bool v3; // 0x14d5b6
    unsigned char v4 = v2 - 40 + (char)v3; // 0x14d5b9
    bool v5 = v3 ? v4 <= v2 : v2 > 39; // 0x14d5b9
    char v6 = *(char *)-0x61196d39; // 0x14d5c0
    *(char *)-0x61196d39 = v6 + (char)((uint64_t)v1 / 256);
    return (v1 & 0xffffff00 | (int64_t)v4) + 0x9ac1c4d5 + (int64_t)v5 & 0xffffffff ^ 201;
}

// Address range: 0x14d5e4 - 0x14d5f9
int64_t function_14d5e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14d5e4
    int64_t v1; // 0x14d5e4
    float80_t v2; // 0x14d5e4
    *(int16_t *)v1 = (int16_t)v2;
    int32_t * v3 = (int32_t *)((a1 + 0xc2ffffcd & 0xffffffff) + 0x3c12a1c9); // 0x14d5ee
    *v3 = *v3 + (int32_t)v1;
    int64_t v4 = __asm_int1(v1 & 0xffffffff, a2, (int32_t)a3); // 0x14d5f4
    return v4 & -256 | (int64_t)__asm_in((int16_t)a3);
}

// Address range: 0x14d5f9 - 0x14d62b
int64_t function_14d5f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x14d5f9
    int64_t v1; // 0x14d5f9
    int32_t * v2 = (int32_t *)(v1 + 0x104c548f); // 0x14d5f9
    *v2 = *v2 | (int32_t)v1;
    uint32_t v3 = (int32_t)a1; // 0x14d5ff
    uint32_t v4 = (int32_t)v1 + v3; // 0x14d5ff
    int64_t v5 = v4; // 0x14d5ff
    int32_t * v6 = (int32_t *)(v1 + 112); // 0x14d601
    *v6 = *v6 + (int32_t)a3 + (int32_t)(v4 < v3);
    char v7 = v1 / 256; // 0x14d605
    *(char *)-0x5756e2f4 = *(char *)-0x5756e2f4 + v7;
    float80_t v8; // 0x14d5f9
    *(float32_t *)v5 = (float32_t)v8;
    int64_t v9 = unknown_690e7d16(v4); // 0x14d610
    char * v10 = (char *)(v1 - 123); // 0x14d615
    *v10 = *v10 + v7;
    int64_t v11; // 0x14d5f9
    *(int32_t *)a4 = *(int32_t *)&v11 + 1;
    uint32_t v12 = (int32_t)v9; // 0x14d622
    uint32_t v13 = *(int32_t *)v5; // 0x14d622
    int32_t v14 = v12 - v13; // 0x14d622
    return v9 & -0xff01 | 256 * (64 * (int64_t)(v14 == 0) | (int64_t)(v13 > v12) | 128 * (int64_t)(v14 < 0) | 16 * (int64_t)(v12 % 16 - v13 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8((char)v14) % 2 == 0)) | 512;
}

// Address range: 0x14d62b - 0x14d635
int64_t function_14d62b(void) {
    // 0x14d62b
    int64_t v1; // 0x14d62b
    return v1 ^ 168;
}

// Address range: 0x14d640 - 0x14d655
int64_t function_14d640(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14d640
    int64_t v1; // 0x14d640
    int64_t v2 = v1;
    __asm_out_133(-112, (int32_t)v2);
    __asm_int(-87);
    *(int32_t *)(a4 & 0xffffffff) = -0x1c61fec3;
    return function_14d69f(a1, (v2 + 23) % 256 | v2 & 0xffffff00, a3, a2 & 0xffffffff);
}

// Address range: 0x14d665 - 0x14d668
int64_t function_14d665(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x14d665
    int64_t result; // 0x14d665
    *(int32_t *)a4 = (int32_t)result + (int32_t)a1;
    return result;
}

// Address range: 0x14d69f - 0x14d6a5
int64_t function_14d69f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14d69f
    int64_t result; // 0x14d69f
    return result;
}

// Address range: 0x14d6d0 - 0x14d6d5
int64_t function_14d6d0(void) {
    // 0x14d6d0
    return function_e60a5db();
}

// Address range: 0x193685 - 0x19369a
int64_t function_193685(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x193685
    int64_t v1; // 0x193685
    int64_t v2; // 0x193685
    bool v3; // 0x193685
    if (!v3 && !v3) {
        int64_t v4 = function_19364f(); // 0x193685
        v2 = v4;
        v1 = v4;
    }
    // 0x193688
    int64_t v5; // 0x193685
    uint32_t v6 = (int32_t)v5;
    int64_t v7 = v1; // 0x19368d
    int32_t v8 = 2 * v6 < v6 ? 0x3d186a24 : 0x3d186a23; // 0x19368d
    *(int32_t *)v7 = (int32_t)v7 - v8;
    int64_t v9 = v2;
    *(int32_t *)v9 = *(int32_t *)&v2 + (int32_t)v9;
    return v5 & 0xffffffff;
}

// Address range: 0x1936ab - 0x1936c1
int64_t function_1936ab(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 0x56c6081d); // 0x1936ab
    uint32_t v2 = *v1; // 0x1936ab
    uint32_t v3 = v2 + (int32_t)a3; // 0x1936ab
    *v1 = v3;
    int64_t v4; // 0x1936ab
    int32_t * v5 = (int32_t *)(v4 + 35); // 0x1936b1
    *v5 = *v5 - (int32_t)v4 + (int32_t)(v3 < v2);
    unknown_ffffffffb6245eba();
    return function_ffffffffd8802995();
}

// Address range: 0x1936dd - 0x1936e2
int64_t function_1936dd(int64_t a1) {
    // 0x1936dd
    int64_t v1; // 0x1936dd
    *(int32_t *)a1 = 2 * (int32_t)v1;
    return __asm_wait(a1);
}

// Address range: 0x19371f - 0x19372a
int64_t function_19371f(int64_t a1, int64_t a2) {
    // 0x19371f
    int64_t v1; // 0x19371f
    return (int64_t)(*(int32_t *)-0x4c21e89b | (int32_t)v1);
}

// Address range: 0x193782 - 0x1937a7
int64_t function_193782(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x193782
    int64_t v1; // 0x193782
    bool v2; // 0x193782
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a4 + (int32_t)v2;
    *(char *)-0x70109e75 = *(char *)-0x70109e75 + (char)(v1 / 256);
    int64_t v3 = a2; // bp-8, 0x19378c
    char * v4 = (char *)(2 * a2 - 87); // 0x19378d
    int64_t v5; // 0x193782
    *v4 = *v4 & (*(char *)&v5 | (char)v1);
    int64_t v6 = __asm_wait((int64_t)&g7); // 0x193791
    char * v7 = (char *)(a1 + 0x68c18fc4 + 4 * v1); // 0x193792
    char v8 = v1; // 0x193792
    *v7 = *v7 ^ v8;
    char * v9 = (char *)v6; // 0x193799
    *v9 = *v9 + (char)v6;
    char * v10 = (char *)(a3 + 10); // 0x1937a0
    *v10 = *v10 - v8;
    return (int64_t)&v3;
}

// Address range: 0x1937b3 - 0x1937b4
int64_t function_1937b3(void) {
    // 0x1937b3
    int64_t result; // 0x1937b3
    return result;
}

// Address range: 0x1937bb - 0x193870
int64_t function_1937bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1937bb
    int64_t v1; // 0x1937bb
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    int64_t v3; // 0x1937bb
    char v4 = *(char *)&v3; // 0x1937c1
    *(char *)v3 = v4;
    unsigned char v5 = *(char *)a2; // 0x1937c4
    if (v4 >= 0) {
        // 0x19382f
        return (v2 & 0x13d0000 | (int64_t)(v5 - 110 & -24)) + 0xffffffff & 0xffffffff;
    }
    int64_t v6 = v2 & -256; // 0x1937bf
    int64_t v7 = v5; // 0x1937c4
    char * v8 = (char *)(v6 | v7); // 0x1937c7
    *v8 = *v8 + v5;
    char * v9 = (char *)(8 * v1 + 104 + v3); // 0x1937c9
    unsigned char v10 = *v9; // 0x1937c9
    unsigned char v11 = v10 + (char)((256 * a4 + a3) / 256); // 0x1937c9
    *v9 = v11;
    *(char *)a1 = v5;
    return ((v11 < v10 ? 152 : 151) + v7) % 256 | v6;
}

// Address range: 0x193870 - 0x193871
int64_t function_193870(void) {
    // 0x193870
    int64_t result; // 0x193870
    return result;
}

// Address range: 0x193884 - 0x1938aa
int64_t function_193884(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 0x3bc1e606); // 0x193884
    *v1 = *v1 + (int32_t)a2;
    int64_t v2; // 0x193884
    *(int32_t *)v2 = *(int32_t *)&v2 - 0x3baf2090;
    int64_t v3; // 0x193884
    char v4 = *(char *)(v3 + 61); // 0x19389a
    int32_t * v5 = (int32_t *)(a2 - 0x3b5f1d53); // 0x19389d
    int32_t v6 = *v5; // 0x19389d
    *v5 = v6 + (int32_t)(256 * (int64_t)(v4 + (char)(a3 / 256)) | a3 & 0xffff00ff);
    return function_2020ccc();
}

// Address range: 0x1938b0 - 0x1938b1
int64_t function_1938b0(void) {
    // 0x1938b0
    int64_t result; // 0x1938b0
    return result;
}

// Address range: 0x193958 - 0x193959
int64_t function_193958(int64_t a1) {
    // 0x193958
    int64_t result; // 0x193958
    return result;
}

// Address range: 0x193a3d - 0x193a40
int64_t function_193a3d(void) {
    // 0x193a3d
    int64_t result; // 0x193a3d
    return result;
}

// Address range: 0x193aa3 - 0x193b13
int64_t function_193aa3(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7, int64_t a8) {
    // 0x193aa3
    int64_t v1; // 0x193aa3
    uint64_t v2 = v1;
    int64_t v3 = a2;
    int32_t * v4 = (int32_t *)(a2 + 30); // 0x193aa3
    *v4 = *v4 ^ (int32_t)v2;
    int32_t v5 = a3; // 0x193aad
    int32_t * v6 = (int32_t *)a2; // 0x193aad
    *v6 = *(int32_t *)&v3 - v5;
    int32_t * v7 = (int32_t *)(v2 + 88); // 0x193ab0
    *v7 = *v7 ^ (int32_t)a2;
    int64_t result = unknown_ffffffffe8ab47a1(); // 0x193ab3
    uint32_t v8 = *(int32_t *)&v3; // 0x193ab9
    int32_t v9 = v8 + v5; // 0x193ab9
    *v6 = v9;
    if (v9 < 0 != ((v9 ^ v8) & (v9 ^ v5)) < 0) {
        // 0x193b13
        return result;
    }
    char v10 = *(char *)-0xee5883c; // 0x193abe
    int64_t v11 = 256 * (int64_t)((char)(v9 < v8) + (char)(a7 / 256) + v10) | a7 & -0xff01; // 0x193ac4
    if (a4 != 0) {
        int64_t v12 = v3; // 0x193ac4
        int64_t v13 = a4; // 0x193ac4
        uint32_t v14 = *(int32_t *)v12; // 0x193ac4
        bool v15; // 0x193aa3
        v12 += (v15 ? -4 : 4);
        v3 = v12;
        while (v13 != 1) {
            v13--;
            v14 = *(int32_t *)v12;
            v12 += (v15 ? -4 : 4);
            v3 = v12;
        }
        // ._crit_edge
        v11 = v14;
    }
    if ((int32_t)v11 >= 0x323a8d1f) {
        // 0x193acd
        return a1 & 0xffffffff;
    }
    // 0x193af1
    *(int32_t *)0x4710f1fa = *(int32_t *)0x4710f1fa - (int32_t)a1;
    *(char *)0x2ba5f614aedafb58 = (char)v11;
    int64_t v16 = unknown_ffffffffc88cfb0c(); // 0x193b06
    *(char *)0x2c23ff12 = *(char *)0x2c23ff12 + (char)(v2 / 256);
    // 0x193b13
    return v16 | a1 % 256;
}

// Address range: 0x193b5a - 0x193b5b
int64_t function_193b5a(int64_t a1) {
    // 0x193b5a
    int64_t result; // 0x193b5a
    return result;
}

// Address range: 0x193b67 - 0x193b6b
int64_t function_193b67(int64_t a1) {
    // 0x193b67
    return a1 & 0xffffffff;
}

// Address range: 0x193b85 - 0x193b86
int64_t function_193b85(void) {
    // 0x193b85
    int64_t result; // 0x193b85
    return result;
}

// Address range: 0x193c06 - 0x193c13
int64_t function_193c06(int64_t a1, int64_t a2, int64_t a3) {
    // 0x193c06
    __asm_in_136((int16_t)a3);
    return function_ffffffffc12e4f63();
}

// Address range: 0x193cd0 - 0x193cd3
int64_t function_193cd0(int64_t a1) {
    // 0x193cd0
    int64_t result; // 0x193cd0
    return result;
}

// Address range: 0x193cd8 - 0x193cda
int64_t function_193cd8(int64_t a1, int64_t a2) {
    // 0x193cd8
    int64_t result; // 0x193cd8
    return result;
}

// Address range: 0x193ce2 - 0x193d1b
int64_t function_193ce2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x193ce2
    int64_t v1; // 0x193ce2
    char * v2 = (char *)(v1 + 22); // 0x193ce2
    *v2 = *v2 + 1;
    int32_t v3 = *(int32_t *)0x34822f20ae85f12; // 0x193ce7
    char * v4 = (char *)(a4 - 48); // 0x193cf0
    *v4 = *v4 >> 1;
    int64_t v5; // 0x193ce2
    int32_t v6 = *(int32_t *)&v5; // 0x193cf3
    uint32_t v7 = v3 + 236;
    int64_t result = v7 % 256 | v3 & -256; // 0x193cf5
    char * v8 = (char *)result; // 0x193cfc
    unsigned char v9 = *v8; // 0x193cfc
    char v10 = v7; // 0x193cfc
    unsigned char v11 = v9 + v10; // 0x193cfc
    *v8 = v11;
    if (v11 < v9) {
        // 0x193d00
        *v8 = v11 + v10;
        return result;
    }
    int64_t v12 = __asm_int3(); // 0x193d05
    __asm_rcl(*(char *)0x5418fc1f);
    int32_t * v13 = (int32_t *)((int64_t)(v6 + (int32_t)a1) - 0x3149cb6f); // 0x193d12
    *v13 = *v13 + (int32_t)v1;
    __asm_int(-87);
    return v12 & 0xffffffff;
}

// Address range: 0x193d29 - 0x193d2c
int64_t function_193d29(void) {
    // 0x193d29
    int64_t result; // 0x193d29
    return result;
}

// Address range: 0x193dcb - 0x193de6
int64_t function_193dcb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x193dcb
    int64_t v1; // 0x193dcb
    *(char *)a4 = *(char *)(char *)&g6 & (char)v1;
    int32_t * v2 = (int32_t *)(a2 + 0x68c307a5); // 0x193dce
    *v2 = *v2 - (int32_t)a3;
    int64_t v3; // 0x193dcb
    *(char *)v3 = *(char *)&v3 + (char)(a3 / 256);
    int64_t v4; // 0x193dcb
    *(char *)a2 = 2 * *(char *)&v4;
    return function_ffffffff844cda42();
}

// Address range: 0x193deb - 0x193e23
int64_t function_193deb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x193deb
    int64_t v1; // 0x193deb
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v1 + 0x5075d4bd); // 0x193deb
    bool v4; // 0x193deb
    *v3 = *v3 + (int32_t)a3 + (int32_t)v4;
    char v5 = *(char *)(a4 + 0x3d002019); // 0x193df1
    int64_t v6 = v2 & -256 | (int64_t)(v5 ^ (char)v2); // 0x193df1
    int32_t * v7 = (int32_t *)(v6 + 47); // 0x193df7
    *v7 = *v7 + (int32_t)v1;
    int64_t v8 = v6 & -0xff01 | (int64_t)&g5; // 0x193dfa
    int32_t * v9 = (int32_t *)(2 * a3 + 0x6b6a8c8b + v8); // 0x193dfe
    *v9 = *v9 - 0x30b9b066;
    float80_t v10; // 0x193deb
    *(int32_t *)(v8 + 8 * v1) = (int32_t)v10;
    int32_t * v11 = (int32_t *)v8; // 0x193e0c
    int32_t v12 = v8; // 0x193e0c
    *v11 = *v11 + v12;
    *(int32_t *)a1 = v12 & -256 | 104;
    return function_ffffffffa8ba0019((v4 ? -4 : 4) + a1);
}

// Address range: 0x193e76 - 0x193e7c
int64_t function_193e76(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x193e76
    int64_t v1; // 0x193e76
    return (int64_t)(*(int32_t *)(a4 - 28) + (int32_t)v1);
}

// Address range: 0x193e91 - 0x193e93
int64_t function_193e91(int64_t a1) {
    // 0x193e91
    int64_t v1; // 0x193e91
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x193e9f - 0x193eb1
int64_t function_193e9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x193e9f
    int64_t v1; // 0x193e9f
    *(char *)a4 = (char)v1 + (char)a4 + (char)((int32_t)v1 < 0x813fe501);
    return function_201cfc9();
}

// Address range: 0x193f3e - 0x193f6a
int64_t function_193f3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = *(int32_t *)-0x7c0dbc40fec2873b; // 0x193f46
    *(char *)-0x61d2fe17f6ffc0fa = (char)v1;
    int64_t v2; // 0x193f3e
    char v3 = *(char *)(v2 + 1); // 0x193f5f
    int64_t result = 256 * (int64_t)(v3 + (char)(v1 / 256)) | (int64_t)(v1 & -0xff01); // 0x193f5f
    *(int32_t *)result = -0x7368fec3;
    return result;
}

// Address range: 0x193f6b - 0x193f6f
int64_t function_193f6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 + 76); // 0x193f6b
    int64_t result; // 0x193f6b
    *v1 = *v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x194000 - 0x19405c
int64_t function_194000(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1;
    int64_t v2 = unknown_ffffffffab571006(); // 0x194000
    unsigned char v3 = (char)v2; // 0x194005
    unsigned char v4 = v3 + (char)a3; // 0x194005
    int64_t v5; // 0x194000
    if (v4 >= v3) {
        int64_t v6 = __asm_wait((int64_t)&g7); // 0x194046
        *(char *)0x5fc30855 = *(char *)0x5fc30855 + (char)(v5 / 256);
        return v6 + 0x1e85b44 & 0xffffffff;
    }
    int32_t * v7 = (int32_t *)(a1 + 0x305a898b); // 0x194009
    *v7 = *v7 + (int32_t)v5;
    return v2 & -256 | (int64_t)(*(char *)&v1 | v4);
}
