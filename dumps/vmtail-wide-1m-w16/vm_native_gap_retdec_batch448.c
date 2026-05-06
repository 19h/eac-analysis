/*
 * Targeted RetDec C for native executable gap queue batch 448.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x36b11b-0x36b31b rank=- name=- kind=- bytes=- uncovered=-
 *   0x36b31b-0x36b51b rank=- name=- kind=- bytes=- uncovered=-
 *   0x36b51b-0x36b71b rank=- name=- kind=- bytes=- uncovered=-
 *   0x462834-0x462a34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x462a34-0x462c34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x462c34-0x462e34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x462e34-0x463034 rank=- name=- kind=- bytes=- uncovered=-
 *   0x463034-0x463234 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
extern int g7;
extern int g8;
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

int64_t function_1f4e919c();
int64_t function_36b11b(void);
int64_t function_36b155(void);
int64_t function_36b17d(void);
int64_t function_36b187(int64_t a1);
int64_t function_36b19d(void);
int64_t function_36b203(int64_t a1);
int64_t function_36b205(int64_t a1, int64_t a2);
int64_t function_36b22b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_36b28f(void);
int64_t function_36b293(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36b2bc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_36b2fa(int64_t a1);
int64_t function_36b2fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36b322(int64_t a1, int64_t a2);
int64_t function_36b331(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_36b37b(void);
int64_t function_36b380(void);
int64_t function_36b406(void);
int64_t function_36b45c(void);
int64_t function_36b469(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36b491(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36b4eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36b519(void);
int64_t function_36b51a(int64_t a1);
int64_t function_36b588(int64_t a1, uint64_t a2, int64_t a3, int64_t a4);
int64_t function_36b5e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36b67d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e1cbb90();
int64_t function_462834(int64_t a1, int64_t a2);
int64_t function_462848(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_462862(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4628cf(void);
int64_t function_462988(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_46299c(void);
int64_t function_4629ab(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t result);
int64_t function_4629e9(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_462a0d(void);
int64_t function_462a15(void);
int64_t function_462a30(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_462b70(void);
int64_t function_462b9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_462cfb(int64_t a1);
int64_t function_462d29(void);
int64_t function_462d5a(void);
int64_t function_462e37(int64_t a1, int64_t a2, int64_t a3);
int64_t function_462e54(void);
int64_t function_462e60(void);
int64_t function_462e69(void);
int64_t function_462e6d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_462e7d(int64_t a1, int64_t a2, int64_t result);
int64_t function_462ed5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_462ef0(void);
int64_t function_462f21(int64_t a1, int64_t a2, int64_t a3);
int64_t function_462f53(int64_t a1, int64_t a2);
int64_t function_462f5e(int64_t a1);
int64_t function_462f70(void);
int64_t function_462f8d(void);
int64_t function_462fca(void);
int64_t function_462fd8(int64_t a1);
int64_t function_462fde(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_462fff(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4631d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46320c(int64_t a1, int64_t a2);
int64_t function_664d4cd8();
int64_t function_c581c82();
int64_t function_ffffffffa54cb5d6();
int64_t function_ffffffffb3981529();
int64_t function_ffffffffb48bf480();
int64_t function_ffffffffc38b4cd3();
int64_t function_ffffffffdeb7e200();
int64_t unknown_10b04374();
int64_t unknown_21eb2c9();
int64_t unknown_3a93fd08();
int64_t unknown_6bb5d811();
int64_t unknown_6bcc1da6();
int64_t unknown_7a33ddfd();
int64_t unknown_ffffffff8838095b();
int64_t unknown_ffffffff9e60080f();
int64_t unknown_ffffffffbb31931c();
int64_t unknown_ffffffffbfc70297();
int64_t unknown_ffffffffdc85c68c();
int64_t unknown_ffffffffe196c627();

// Address range: 0x36b11b - 0x36b120
int64_t function_36b11b(void) {
    // 0x36b11b
    int64_t result; // 0x36b11b
    return result;
}

// Address range: 0x36b155 - 0x36b15c
int64_t function_36b155(void) {
    // 0x36b155
    return unknown_ffffffff8838095b();
}

// Address range: 0x36b17d - 0x36b187
int64_t function_36b17d(void) {
    // 0x36b17d
    unknown_21eb2c9();
    return function_ffffffffb48bf480();
}

// Address range: 0x36b187 - 0x36b18a
int64_t function_36b187(int64_t a1) {
    // 0x36b187
    int64_t result; // 0x36b187
    return result;
}

// Address range: 0x36b19d - 0x36b1a9
int64_t function_36b19d(void) {
    // 0x36b19d
    return unknown_6bcc1da6();
}

// Address range: 0x36b203 - 0x36b204
int64_t function_36b203(int64_t a1) {
    // 0x36b203
    int64_t result; // 0x36b203
    return result;
}

// Address range: 0x36b205 - 0x36b22b
int64_t function_36b205(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)unknown_ffffffff9e60080f(); // 0x36b20e
    int32_t * v2 = (int32_t *)a2; // 0x36b213
    *v2 = 0x200000 * *v2;
    bool v3; // 0x36b205
    unknown_ffffffffbb31931c((v3 ? -4 : 4) + (int64_t)(v1 ^ (int32_t)a1));
    unknown_ffffffffe196c627();
    return function_ffffffffa54cb5d6();
}

// Address range: 0x36b22b - 0x36b27e
int64_t function_36b22b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x36b22b
    int64_t v1; // 0x36b22b
    bool v2; // 0x36b22b
    if (v2) {
        // 0x36b274
        *(int32_t *)0x1e8df56aa0602bb = (int32_t)v1;
        int64_t v3; // 0x36b22b
        return (int64_t)&v3;
    }
    int64_t v4 = v1 | a4 / 256 % 256; // 0x36b231
    int64_t v5; // bp-8, 0x36b22b
    int32_t * v6 = (int32_t *)(2 * a2 + 24 + (int64_t)&v5); // 0x36b233
    *v6 = *v6 + (int32_t)v4;
    int64_t v7 = v4 - v1 & 0xffffffff; // 0x36b242
    *(int32_t *)a1 = *(int32_t *)v7;
    int64_t v8 = v2 ? -4 : 4; // 0x36b244
    int64_t v9 = v7 + v8; // 0x36b244
    int64_t v10 = a3 & -0xff01 | (int64_t)&g7; // 0x36b247
    int64_t result = __asm_fnstenv(v8 + a1, v9, v10, a4 & -256 | 88); // 0x36b249
    *(int224_t *)(v1 + 0x506656ab) = (int224_t)result;
    char * v11 = (char *)(2 * v9 + v10); // 0x36b250
    *v11 = *v11 + (char)v10;
    return result;
}

// Address range: 0x36b28f - 0x36b292
int64_t function_36b28f(void) {
    // 0x36b28f
    int64_t result; // 0x36b28f
    return result;
}

// Address range: 0x36b293 - 0x36b2bc
int64_t function_36b293(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t result = __asm_in((int16_t)a3); // 0x36b296
    char * v1 = (char *)(a4 - 0x7e9fec3); // 0x36b29c
    *v1 = *v1 + 1;
    *(int64_t *)0x3a1544 = a2;
    int64_t v2; // 0x36b293
    char * v3 = (char *)(v2 + 33); // 0x36b2a9
    char v4 = *v3 + (char)result; // 0x36b2a9
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x36b2a9
    *v3 = v4;
    if (v5 % 2 == 0) {
        // 0x36b2cd
        return result;
    }
    // 0x36b2b0
    return function_ffffffffc38b4cd3();
}

// Address range: 0x36b2bc - 0x36b2c3
int64_t function_36b2bc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x36b2bc
    int64_t result; // 0x36b2bc
    return result;
}

// Address range: 0x36b2fa - 0x36b2fb
int64_t function_36b2fa(int64_t a1) {
    // 0x36b2fa
    int64_t result; // 0x36b2fa
    return result;
}

// Address range: 0x36b2fb - 0x36b305
int64_t function_36b2fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36b2fb
    int64_t v1; // 0x36b2fb
    char * v2 = (char *)(v1 - 0x4fec28e); // 0x36b2fb
    *v2 = *v2 + (char)a4;
    return function_36b331(a1, a2, v1, a4, (int64_t)&g8);
}

// Address range: 0x36b322 - 0x36b32f
int64_t function_36b322(int64_t a1, int64_t a2) {
    // 0x36b322
    int64_t v1; // 0x36b322
    int64_t result = 2 * v1 & 0xfffffffe; // 0x36b324
    int32_t * v2 = (int32_t *)(result + 0x13d0022); // 0x36b326
    *v2 = -*v2;
    return result;
}

// Address range: 0x36b331 - 0x36b351
int64_t function_36b331(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x36b331
    __asm_in_133((int16_t)a3);
    int64_t v1 = __asm_int3(); // 0x36b334
    char * v2 = (char *)(a3 - 0x10019528); // 0x36b335
    *v2 = *v2 >> 1;
    int64_t result = v1 & 0x4f013d00; // 0x36b340
    int32_t * v3 = (int32_t *)(result + 0x7209423c); // 0x36b347
    *v3 = *v3 + (int32_t)a2;
    return result;
}

// Address range: 0x36b37b - 0x36b37c
int64_t function_36b37b(void) {
    // 0x36b37b
    int64_t result; // 0x36b37b
    return result;
}

// Address range: 0x36b380 - 0x36b383
int64_t function_36b380(void) {
    // 0x36b380
    int64_t result; // 0x36b380
    return result;
}

// Address range: 0x36b406 - 0x36b407
int64_t function_36b406(void) {
    // 0x36b406
    int64_t result; // 0x36b406
    return result;
}

// Address range: 0x36b45c - 0x36b45d
int64_t function_36b45c(void) {
    // 0x36b45c
    int64_t result; // 0x36b45c
    return result;
}

// Address range: 0x36b469 - 0x36b491
int64_t function_36b469(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36b469
    int64_t v1; // 0x36b469
    uint64_t v2 = v1;
    char * v3 = (char *)(a3 + 0x4316f90a); // 0x36b469
    char v4 = *v3 + (char)a4; // 0x36b469
    *v3 = v4;
    int64_t v5; // 0x36b469
    if (v4 != 0) {
        v5 = function_36b406();
    }
    int32_t * v6 = (int32_t *)(v5 + 0x7c01e8fc); // 0x36b473
    *v6 = *v6 + (int32_t)a2;
    *(int32_t *)a1 = (int32_t)v5;
    *(char *)0x503b1e86 = *(char *)0x503b1e86 + (char)(v2 / 256);
    char * v7 = (char *)(a1 - 0x3141cb6b); // 0x36b485
    *v7 = *v7 | (char)v2;
    return function_36b4eb(a1 + 4, a2 + 4, a3, a4);
}

// Address range: 0x36b491 - 0x36b4c0
int64_t function_36b491(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x36b491
    int32_t v3 = *(int32_t *)(v2 + 5); // 0x36b491
    int64_t v4 = (int64_t)(*(int32_t *)(a1 + 110) + (int32_t)a1); // 0x36b494
    char * v5 = (char *)(a3 + 84); // 0x36b497
    *v5 = *v5 + (char)a4;
    char v6; // 0x36b491
    int64_t result; // 0x36b491
    if (llvm_ctpop_i8((char)v2 - 1) % 2 == 0) {
        int64_t v7 = function_36b491(v4, a2, v1, a4); // 0x36b49f
        v6 = v1;
        result = v7;
    } else {
        // 0x36b491
        v6 = *(char *)&v1;
    }
    char v8 = v2 / 256; // 0x36b4a1
    char v9 = v6 + v8; // 0x36b4a1
    *(char *)v1 = v9;
    if (v9 < 0 == ((v9 ^ v6) & (v9 ^ v8)) < 0 != v9 != 0) {
        // 0x36b4a5
        return result;
    }
    int32_t * v10 = (int32_t *)(v4 - 6); // 0x36b4ba
    int32_t v11 = *v10 + (int32_t)v2; // 0x36b4ba
    unsigned char v12 = llvm_ctpop_i8((char)v11); // 0x36b4ba
    *v10 = v11;
    int64_t result2 = result + (int64_t)(v3 & (int32_t)v2) & 0xffffffff; // 0x36b4bd
    if (v12 % 2 == 0) {
        result2 = function_36b45c();
    }
    // 0x36b4a5
    return result2;
}

// Address range: 0x36b4eb - 0x36b50d
int64_t function_36b4eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_hlt(); // 0x36b4ec
    char * v2 = (char *)(a2 + 28); // 0x36b4f0
    bool v3; // 0x36b4eb
    *v2 = (char)v3 - (char)a3 + *v2;
    int64_t v4; // 0x36b4eb
    *(int32_t *)v1 = *(int32_t *)&v4 + (int32_t)v1;
    return (int64_t)*(int32_t *)-0x5183654f55e466d6;
}

// Address range: 0x36b519 - 0x36b51a
int64_t function_36b519(void) {
    // 0x36b519
    int64_t result; // 0x36b519
    return result;
}

// Address range: 0x36b51a - 0x36b520
int64_t function_36b51a(int64_t a1) {
    // 0x36b51a
    int64_t result; // 0x36b51a
    return result;
}

// Address range: 0x36b588 - 0x36b597
int64_t function_36b588(int64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_int3(); // 0x36b58b
    int64_t v2; // 0x36b588
    if (a4 != 1 && (int32_t)v2 != -(int32_t)a3) {
        v1 = function_36b519();
    }
    char * v3 = (char *)(v2 - 81); // 0x36b593
    *v3 = *v3 + (char)a2;
    return v1 & -256 | a2 % 256;
}

// Address range: 0x36b5e4 - 0x36b67c
int64_t function_36b5e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    char v2 = __asm_in_134(-24); // 0x36b5e5
    *(int32_t *)-0x2fc76212 = *(int32_t *)-0x2fc76212 + (int32_t)a1;
    int64_t v3; // 0x36b5e4
    int64_t v4 = (int64_t)v2 & 0xffffffff | v3 & 0xffffff00; // 0x36b5ed
    char * v5 = (char *)(v3 + 113); // 0x36b5f4
    *v5 = *v5 + (char)a3;
    unknown_7a33ddfd(v4);
    unknown_3a93fd08();
    bool v6; // 0x36b5e4
    int64_t v7 = v4 + (v6 ? -4 : 4); // 0x36b607
    int64_t v8 = unknown_6bb5d811(v7); // 0x36b60b
    int32_t * v9 = (int32_t *)((-((256 * v8)) & 0xff00 | 0xa450009) + 0x2cfbcfd6); // 0x36b617
    *v9 = *v9 + (int32_t)v8;
    unsigned char v10 = *(char *)&v1; // 0x36b61d
    int64_t v11 = v6 ? -1 : 1; // 0x36b61d
    v1 += v11;
    int64_t v12 = (v8 & -256 | (int64_t)v10) & v3;
    int32_t * v13 = (int32_t *)(v3 - 0x78b4672f); // 0x36b645
    *v13 = *v13 + (int32_t)v12;
    int32_t * v14 = (int32_t *)((v12 & 0xffffffff) - 61); // 0x36b650
    *v14 = *v14 + (int32_t)v1;
    uint64_t v15 = __asm_iretd(); // 0x36b65c
    uint32_t v16 = (int32_t)v15 >> 31; // 0x36b65d
    int64_t v17 = v16; // 0x36b65d
    char * v18 = (char *)(v1 - 96); // 0x36b65e
    char v19 = *v18; // 0x36b65e
    *v18 = (char)(v3 / 256);
    char * v20 = (char *)(v15 + (8 * v12 + 0xf423a30 & 0x7fffffff8 | 1)); // 0x36b661
    *v20 = *v20 + (char)(v15 / 256);
    *(char *)v7 = *(char *)v1;
    char * v21 = (char *)v17; // 0x36b66c
    *v21 = *v21 | v19;
    int64_t result = unknown_10b04374(v7 + v11, v1 + v11, v16); // 0x36b66e
    char * v22 = (char *)(8 * v17 - 0x17d74500); // 0x36b673
    *v22 = *v22 | v19;
    return result;
}

// Address range: 0x36b67d - 0x36b6a8
int64_t function_36b67d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x36b67d
    bool v1; // 0x36b67d
    bool v2 = v1;
    uint32_t v3 = (int32_t)unknown_ffffffffdc85c68c(); // 0x36b68b
    bool v4 = v2 ? (v2 ? -0x26c5032c : -0x26c5032d) + v3 <= v3 : v3 > 0x26c5032c; // 0x36b68b
    int64_t result = unknown_ffffffffbfc70297(); // 0x36b690
    *(int32_t *)-0x24d6244d = 0x80000000 * (int32_t)v4 | *(int32_t *)-0x24d6244d / 2;
    char * v5 = (char *)(result - 0x5afe1800); // 0x36b69c
    *v5 = *v5 + (char)result;
    char * v6 = (char *)(a4 + 120 + a5); // 0x36b6a3
    *v6 = *v6 + (char)a4;
    return result;
}

// Address range: 0x462834 - 0x46283b
int64_t function_462834(int64_t a1, int64_t a2) {
    // 0x462834
    int64_t v1; // 0x462834
    return v1 & 0xffffffff;
}

// Address range: 0x462848 - 0x462851
int64_t function_462848(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x462848
    int64_t v1; // 0x462848
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 >> 1;
    bool v3; // 0x462848
    return v1 & -0xff01 | 256 * (64 * (int64_t)v3 | 128 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3) | 512;
}

// Address range: 0x462862 - 0x462879
int64_t function_462862(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t result = 0x6025a483 * *(int32_t *)0xb6c7a9d; // 0x462862
    *(int32_t *)-0x3dd79f5db2b6d63b = result;
    return result;
}

// Address range: 0x4628cf - 0x4628de
int64_t function_4628cf(void) {
    // 0x4628cf
    return function_1f4e919c();
}

// Address range: 0x462988 - 0x46298d
int64_t function_462988(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x462988
    int64_t v1; // 0x462988
    int64_t v2 = v1;
    return (v2 - a3 / 256) % 256 | v2 & -256;
}

// Address range: 0x46299c - 0x46299e
int64_t function_46299c(void) {
    // 0x46299c
    int64_t v1; // 0x46299c
    return function_4629e9(v1, v1, v1);
}

// Address range: 0x4629ab - 0x4629c1
int64_t function_4629ab(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t result) {
    int64_t v1 = a2 + 25; // 0x4629ab
    __writefsbyte(v1, __readfsbyte(v1) + (char)(a3 / 256));
    int64_t v2; // 0x4629ab
    char * v3 = (char *)(v2 - 0x133bf64c); // 0x4629b0
    *v3 = *v3 | (char)(a4 / 256);
    __asm_out((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x4629e9 - 0x4629ff
int64_t function_4629e9(int64_t a1, int64_t a2, uint64_t a3) {
    char v1 = *(char *)(a1 - 39); // 0x4629ea
    int32_t * v2 = (int32_t *)(a2 - 79); // 0x4629f8
    uint32_t v3 = *v2; // 0x4629f8
    bool v4; // 0x4629e9
    uint32_t v5 = v3 + (int32_t)(256 * (int64_t)((char)v4 + (char)(a3 / 256) - v1) | a3 & 0xffff00ff); // 0x4629f8
    *v2 = v5;
    int64_t result; // 0x4629e9
    char * v6 = (char *)(result + 46 + 2 * result); // 0x4629fb
    *v6 = *v6 + (char)result + (char)(v5 < v3);
    return result;
}

// Address range: 0x462a0d - 0x462a0e
int64_t function_462a0d(void) {
    // 0x462a0d
    int64_t result; // 0x462a0d
    return result;
}

// Address range: 0x462a15 - 0x462a17
int64_t function_462a15(void) {
    // 0x462a15
    int64_t result; // 0x462a15
    return result;
}

// Address range: 0x462a30 - 0x462b6a
int64_t function_462a30(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2; // 0x462a30
    bool v3; // 0x462a30
    if (v3) {
        v2 = function_462a0d();
    }
    int64_t v4 = a3; // 0x462a32
    int64_t v5 = a1; // 0x462a32
    int64_t v6; // 0x462a30
    int64_t v7; // 0x462a30
    int64_t v8; // 0x462a30
    int64_t v9 = v6;
    *(char *)v5 = __asm_insb((int16_t)v4);
    float80_t v10; // 0x462a30
    *(int64_t *)(v1 + 28) = (int64_t)v10;
    int32_t * v11 = (int32_t *)v4; // 0x462a8b
    *v11 = *v11 - (int32_t)v1;
    int64_t v12 = __asm_hlt(); // 0x462a96
    int32_t v13 = *(int32_t *)(v8 + 48 + v5); // 0x462a9a
    int32_t v14 = v13 + (int32_t)v5 + (int32_t)((char)v12 > 28); // 0x462a9a
    if (v14 != 0) {
        // 0x462aa1
        return function_664d4cd8(v14);
    }
    int64_t v15 = v1 + v7; // 0x462a94
    int32_t v16 = *(int32_t *)-0x466d37e1; // 0x462b25
    int32_t v17 = 2 * v16; // 0x462b25
    *(int32_t *)-0x466d37e1 = v17;
    if (v16 >= 0 && v17 != 0) {
        // 0x462b5f
        return v15 + 16 & 0xffffffff;
    }
    uint32_t v18 = (int32_t)a4 % 32; // 0x462b2d
    if (v18 != 0) {
        int32_t * v19 = (int32_t *)(v9 - 0x42a83900); // 0x462b2d
        *v19 = *v19 >> v18;
    }
    int64_t v20 = v4 & -0xff01 | (int64_t)&g3; // 0x462a8d
    *(int64_t *)(v15 & 0xffffffff) = a4;
    int32_t result = __asm_in((int16_t)v20); // 0x462b36
    int32_t v21 = *(int32_t *)(v20 - 0x2bbd7cf7); // 0x462b37
    *(int32_t *)v9 = (int32_t)v9;
    char * v22 = (char *)((int64_t)((int32_t)v20 - v21) - 0x14800473); // 0x462b3f
    *v22 = *v22 + (char)(a4 / 256);
    return result;
}

// Address range: 0x462b70 - 0x462b71
int64_t function_462b70(void) {
    // 0x462b70
    int64_t result; // 0x462b70
    return result;
}

// Address range: 0x462b9c - 0x462bbb
int64_t function_462b9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x462b9c
    int64_t v1; // 0x462b9c
    int32_t * v2 = (int32_t *)(v1 - 0x7745b38b); // 0x462b9c
    *v2 = *v2 | 1 << (int32_t)a4 % 32;
    int64_t v3; // 0x462b9c
    int32_t v4 = *(int32_t *)&v3 & 22; // 0x462ba5
    *(int32_t *)a1 = v4;
    int64_t result; // 0x462b9c
    if (v4 == 0) {
        // 0x462bb9
        return result;
    }
    int32_t v5 = *(int32_t *)((256 * v1 + a4 & 0xff00 | a4 & -0xff01) + 121); // 0x462bb4
    result = v1 + 0x619abc52 & 0xffffffff;
    if ((v5 & (int32_t)v1) == 0) {
        result = function_462b70();
    }
    // 0x462bb9
    return result;
}

// Address range: 0x462cfb - 0x462cfd
int64_t function_462cfb(int64_t a1) {
    // 0x462cfb
    int64_t result; // 0x462cfb
    return result;
}

// Address range: 0x462d29 - 0x462d2a
int64_t function_462d29(void) {
    // 0x462d29
    int64_t result; // 0x462d29
    return result;
}

// Address range: 0x462d5a - 0x462d5f
int64_t function_462d5a(void) {
    // 0x462d5a
    return function_c581c82();
}

// Address range: 0x462e37 - 0x462e44
int64_t function_462e37(int64_t a1, int64_t a2, int64_t a3) {
    // 0x462e37
    int64_t v1; // 0x462e37
    bool v2; // 0x462e37
    uint32_t result = (int32_t)v1 + 0x374791bb + (int32_t)v2; // 0x462e37
    if (result == 0) {
        // 0x462eb7
        return 0;
    }
    // 0x462e3e
    *(int32_t *)a1 = (int32_t)(a3 | a1);
    return result;
}

// Address range: 0x462e54 - 0x462e5b
int64_t function_462e54(void) {
    // 0x462e54
    return function_3e1cbb90();
}

// Address range: 0x462e60 - 0x462e63
int64_t function_462e60(void) {
    // 0x462e60
    int64_t result; // 0x462e60
    return result;
}

// Address range: 0x462e69 - 0x462e6a
int64_t function_462e69(void) {
    // 0x462e69
    int64_t result; // 0x462e69
    return result;
}

// Address range: 0x462e6d - 0x462e7d
int64_t function_462e6d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x462e6d
    int64_t v1; // 0x462e6d
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a3 - 33); // 0x462e6f
    *v3 = *v3 ^ (int32_t)a1;
    char v4 = *(char *)0x47b05f6d; // 0x462e74
    return v2 & -256 | (int64_t)((char)v2 - (char)v1 + v4);
}

// Address range: 0x462e7d - 0x462eaf
int64_t function_462e7d(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = __asm_hlt(); // 0x462e7d
    uint32_t v2 = (int32_t)((v1 + 69) % 256 | v1 & 0xffffff00); // 0x462e81
    uint32_t v3 = (char)v1 > 186 ? -0x14d8aaa : -0x14d8aab; // 0x462e81
    uint32_t v4 = v2 - v3; // 0x462e81
    int64_t v5 = v4; // 0x462e86
    if ((char)v1 <= 186 && v3 <= v2 && v4 != 0) {
        int64_t v6; // 0x462e7d
        v5 = function_462ed5(a1, a2, result, v6);
    }
    // 0x462e88
    __asm_out_136(-80, (char)v5);
    uint32_t v7 = (int32_t)a1; // 0x462e8f
    uint32_t v8 = *(int32_t *)0x80444c4 + v7; // 0x462e8f
    if (v8 < v7) {
        // 0x462ea8
        return result;
    }
    // 0x462e98
    return function_ffffffffdeb7e200(v8);
}

// Address range: 0x462ed5 - 0x462ee3
int64_t function_462ed5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x462ed5
    int64_t v1; // 0x462ed5
    uint64_t v2 = v1;
    return ((v2 & 89) - v2 / 256) % 256 | v2 & -256;
}

// Address range: 0x462ef0 - 0x462ef1
int64_t function_462ef0(void) {
    // 0x462ef0
    int64_t result; // 0x462ef0
    return result;
}

// Address range: 0x462f21 - 0x462f43
int64_t function_462f21(int64_t a1, int64_t a2, int64_t a3) {
    // 0x462f21
    *(char *)a1 = __asm_insb((int16_t)a3);
    return (int64_t)*(int32_t *)0x5cf84a4a6f039f42;
}

// Address range: 0x462f53 - 0x462f58
int64_t function_462f53(int64_t a1, int64_t a2) {
    // 0x462f53
    return a1 & 0xffffffff;
}

// Address range: 0x462f5e - 0x462f5f
int64_t function_462f5e(int64_t a1) {
    // 0x462f5e
    int64_t result; // 0x462f5e
    return result;
}

// Address range: 0x462f70 - 0x462f76
int64_t function_462f70(void) {
    // 0x462f70
    int64_t result; // 0x462f70
    return result;
}

// Address range: 0x462f8d - 0x462f8e
int64_t function_462f8d(void) {
    // 0x462f8d
    int64_t result; // 0x462f8d
    return result;
}

// Address range: 0x462fca - 0x462fcf
int64_t function_462fca(void) {
    // 0x462fca
    return function_ffffffffb3981529();
}

// Address range: 0x462fd8 - 0x462fdd
int64_t function_462fd8(int64_t a1) {
    // 0x462fd8
    __asm_rcl((int32_t)a1);
    int64_t result; // 0x462fd8
    return result;
}

// Address range: 0x462fde - 0x462fff
int64_t function_462fde(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x462fde
    int64_t v1; // 0x462fde
    *(int32_t *)0x606b925d43860060 = (int32_t)v1;
    float80_t v2; // 0x462fde
    *(int32_t *)a3 = (int32_t)v2;
    char * v3 = (char *)(v1 + 0x3852df35); // 0x462fef
    *v3 = *v3 + (char)(a3 / 256);
    char * v4 = (char *)(a4 - 0x2859c0fd); // 0x462ff5
    char v5 = *v4 & (char)(a4 / 256); // 0x462ff5
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x462ff5
    *v4 = v5;
    return v1 & -0xff01 | 0x4000 * (int64_t)(v5 == 0) | 0x8000 * (int64_t)(v5 < 0) | 1024 * (int64_t)(v6 % 2 == 0) | 512;
}

// Address range: 0x462fff - 0x4631cf
int64_t function_462fff(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x462fff
    int64_t v1; // 0x462fff
    int64_t v2 = v1;
    char * v3 = (char *)(a1 + 78); // 0x462fff
    char v4 = v1; // 0x462fff
    *v3 = *v3 | v4;
    int64_t v5; // 0x462fff
    uint64_t v6 = (int64_t)*(char *)&v5; // 0x463002
    uint64_t v7 = v1 & -256 | v6; // 0x463002
    bool v8; // 0x462fff
    v5 = (v8 ? -1 : 1) + a2;
    int64_t v9 = v7 - a1; // 0x463003
    unsigned char v10 = llvm_ctpop_i8((char)v9); // 0x463003
    int64_t result = v1 & -0x10000 | (int64_t)__asm_in_134(96) | 256 * (16 * (int64_t)(v6 % 16 - a1 % 16 > 15) | (int64_t)(v7 < a1) | 64 * (int64_t)(v9 == 0) | 128 * (int64_t)(v9 < 0) | 4 * (int64_t)(v10 % 2 == 0)) | 512; // 0x46300d
    char * v11 = (char *)(v1 + 64); // 0x46300f
    char v12 = *v11; // 0x46300f
    char v13 = result / 256; // 0x46300f
    char v14 = v12 + v13; // 0x46300f
    *v11 = v14;
    if (((v14 ^ v12) & (v14 ^ v13)) < 0) {
        // 0x463015
        return result;
    }
    int64_t v15 = a5 + 0x57415eee & 0xffffffff; // 0x463018
    uint32_t v16 = (int32_t)v5; // 0x46301e
    uint32_t v17 = 2 * v16; // 0x46301e
    uint32_t v18 = v17 | (int32_t)((int32_t)a5 > 0xa8bea111); // 0x46301e
    bool v19 = (int32_t)a5 > 0xa8bea111 ? v18 <= v16 : v17 < v16; // 0x46301e
    int64_t v20 = v18; // 0x46301e
    v5 = v20;
    uint32_t v21 = *(int32_t *)0xfae7650ffb54d6a + 0x25a3d668 + (int32_t)v19; // 0x46302f
    unsigned char v22 = llvm_ctpop_i8((char)v21); // 0x46302f
    int64_t result2 = v21; // 0x46302f
    if (v22 % 2 != 0) {
        goto lab_0x463089;
      lab_0x463085_2:;
        // 0x463085
        bool v23; // 0x462fff
        bool v24 = v23;
        bool v25; // 0x462fff
        bool v26 = v25;
        bool v27; // 0x462fff
        bool v28 = v27;
        if (v28 || v24 != v26) {
            goto lab_0x463015;
        } else {
            // 0x463085
            goto lab_0x463089;
        }
      lab_0x463089:
        // 0x463089
        *(int32_t *)v15 = *(int32_t *)v20;
        return result2;
    }
    uint32_t v29 = -64 * *(int32_t *)(v1 + 11); // 0x46303d
    unsigned char v30 = (char)v29; // 0x463047
    unsigned char v31 = v30 + v4; // 0x463047
    int64_t result3 = v1 & 0xffffff00 | 86; // 0x463049
    if (llvm_ctpop_i8(v31) % 2 != 0) {
        // 0x463015
        return result3;
    }
    int64_t v32 = (int64_t)*(int32_t *)v20 - 8; // 0x4630a3
    *(int64_t *)v32 = 0xe9200dd5;
    if (v31 >= v30 && v31 != 0) {
        // 0x463015
        return result3;
    }
    int64_t v33 = (result2 | 76) + 166 & 247 | (int64_t)(v21 & -0x6cc97b00 | 0x6cc97a00); // 0x46303b
    unsigned char v34 = *(char *)(result3 - 0x5de2b7b7) ^ (char)(v29 / 256); // 0x4630a6
    int64_t v35 = (int64_t)v31 | (int64_t)(v29 & -0x10000) | 256 * (int64_t)v34; // 0x4630a6
    int64_t v36 = v8 ? -4 : 4;
    char * v37 = (char *)(v33 + 13 + 2 * v15); // 0x4630ae
    unsigned char v38 = *v37; // 0x4630ae
    *v37 = v38 + 64;
    int64_t v39 = *(int64_t *)-0x785eae8c; // 0x4630b3
    *(int64_t *)-0x785eae8c = v39 + v1 + (int64_t)(v38 > 191);
    __asm_rcl(*(int32_t *)((v32 & 0xffffffff) + 47));
    *(int32_t *)v15 = *(int32_t *)v5;
    int64_t v40 = v15 + v36; // 0x4630c4
    int64_t v41 = v5 + v36; // 0x4630c4
    v5 = v41;
    int64_t v42 = __asm_int1(v40, v41); // 0x4630ca
    while (((int32_t)v32 ^ 0x633ff08f) < 0xfac90422) {
        // 0x4630ad
        v37 = (char *)(v33 + 13 + 2 * v15);
        v38 = *v37;
        *v37 = v38 + 64;
        v39 = *(int64_t *)-0x785eae8c;
        *(int64_t *)-0x785eae8c = v39 + v1 + (int64_t)(v38 > 191);
        __asm_rcl(*(int32_t *)((v32 & 0xffffffff) + 47));
        *(int32_t *)v15 = *(int32_t *)v5;
        v40 = v15 + v36;
        v41 = v5 + v36;
        v5 = v41;
        v42 = __asm_int1(v40, v41);
    }
    char * v43 = (char *)v33; // 0x4630ce
    *v43 = *v43 / 2;
    int64_t v44 = __asm_int1(v40, v5); // 0x4630d0
    char v45 = v44; // 0x4630d1
    *(char *)-0xe202eb484ca0de9 = v45;
    int64_t v46 = v44 & -256; // 0x4630db
    unsigned char v47 = v45 - 127; // 0x4630df
    unsigned char v48 = (char)a3; // 0x4630df
    unsigned char v49 = v47 - v48; // 0x4630df
    unsigned char v50 = llvm_ctpop_i8(v49); // 0x4630df
    int64_t result4 = v46 | (int64_t)v49; // 0x4630df
    if (v50 % 2 != 0) {
        // 0x463015
        return result4;
    }
    uint64_t v51 = result4 - (v47 < v48 ? 219 : 218); // 0x463107
    int64_t result5 = v51 % 256 | v46; // 0x463107
    unsigned char v52 = (char)v51; // 0x46310b
    char * v53 = (char *)result5; // 0x46310b
    unsigned char v54 = *v53; // 0x46310b
    char v55 = v52 - v54; // 0x46310b
    if (llvm_ctpop_i8(v55) % 2 != 0) {
        if (v54 > v52 || v55 == 0) {
            // 0x463111
            *(int64_t *)(result3 - 8) = 0x52fc0119;
            // 0x463015
            return result5;
        }
        char * v56 = (char *)(a3 - 0x183ecccc); // 0x463125
        *v56 = *v56 | v48;
        return result5;
    }
    int32_t * v57 = (int32_t *)v5; // 0x46318c
    *v57 = *v57 >> 1;
    unsigned char v58 = *(char *)0x317a86d1; // 0x46318e
    char v59 = v58 + v31; // 0x46318e
    *(char *)0x317a86d1 = v59;
    if (v59 >= v58 && v59 != 0) {
        // 0x4631cd
        return v46 | v51 & 141 | 114;
    }
    if (v59 < 0 == ((v59 ^ v58) & (v59 ^ v31)) < 0) {
        char * v60 = (char *)(v5 - 0x6eb8c728); // 0x463198
        char v61 = *v60 + v34; // 0x463198
        *v60 = v61;
        if (v61 == 0) {
          lab_0x463015:
            // 0x463015
            return result5;
        }
        uint32_t v62 = *(int32_t *)v5; // 0x4631a2
        char v63 = *(char *)((v42 & 0xffffffff) - 75); // 0x4631a3
        return 256 * (int64_t)((char)(v62 / 256) - v63) | (int64_t)(v62 & -0xff01);
    }
    // 0x4631ad
    *(int64_t *)v2 = result5 & v2;
    char * v64 = (char *)(a3 + 87); // 0x4631b0
    *v64 = *v64 ^ v52;
    *v53 = *v53 - v52;
    int64_t v65 = result3 - 8; // 0x4631b5
    *(int64_t *)v65 = v5;
    *(int64_t *)(result3 - 16) = v65;
    *(int64_t *)(result3 - 24) = v35;
    return result5;
}

// Address range: 0x4631d0 - 0x4631ea
int64_t function_4631d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4631d0
    int64_t v1; // 0x4631d0
    *(char *)a2 = (char)(v1 / 256) + (char)v1;
    uint64_t v2 = (0x100000000 * v1 >> 32) * (int64_t)*(int32_t *)(a3 - 93); // 0x4631d2
    uint64_t v3 = v2 / 0x100000000; // 0x4631d2
    *(int32_t *)(a4 + 64) = (int32_t)v3;
    int32_t * v4 = (int32_t *)((a2 & 0xffffffff) + 0x49a640a2); // 0x4631dc
    *v4 = *v4 | -0x267ea6d3;
    __asm_out((int16_t)v3, (char)v2);
    return v2 & 0xffffffff;
}

// Address range: 0x46320c - 0x46321f
int64_t function_46320c(int64_t a1, int64_t a2) {
    // 0x46320c
    *(int32_t *)a1 = __asm_insd(-0x1a78);
    int64_t v1; // 0x46320c
    int64_t v2 = v1 & -0xff01 | (int64_t)&g1; // 0x463214
    v2 = function_46320c(a1, (int64_t)&g8);
    // 0x463216
    return v2 | 65;
}
