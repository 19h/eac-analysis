/*
 * Targeted RetDec C for native executable gap queue batch 349.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1d3a5a-0x1d3c5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d3c5a-0x1d3e5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d3e5a-0x1d405a rank=- name=- kind=- bytes=- uncovered=-
 *   0x2acf75-0x2ad175 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ad375-0x2ad575 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ad775-0x2ad975 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ef99e-0x3efb9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3efd9e-0x3eff9e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_101ec26f();
int64_t function_1d3a5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1d3ae2(void);
int64_t function_1d3b11(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d3b55(void);
int64_t function_1d3b66(void);
int64_t function_1d3b9d(void);
int64_t function_1d3ba2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d3bca(void);
int64_t function_1d3c1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1d3c8e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1d3cc4(int64_t a1);
int64_t function_1d3cdc(void);
int64_t function_1d3cf5(void);
int64_t function_1d3d02(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d3d8f(void);
int64_t function_1d3d9d(void);
int64_t function_1d3da9(void);
int64_t function_1d3e4d(int64_t a1);
int64_t function_1d3e5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d3e66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d3eb0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d3eb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d3f2f(int64_t a1);
int64_t function_1d3f56(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d3f76(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2054a70();
int64_t function_2a468c();
int64_t function_2acf75(int64_t a1, int64_t a2);
int64_t function_2acfde(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ad015(void);
int64_t function_2ad041(void);
int64_t function_2ad056(int64_t a1, int64_t a2);
int64_t function_2ad08d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2ad15e(void);
int64_t function_2ad375(void);
int64_t function_2ad3a6(void);
int64_t function_2ad3d8(int64_t a1);
int64_t function_2ad438(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ad454(void);
int64_t function_2ad473(int64_t a1);
int64_t function_2ad488(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ad50a(int64_t a1);
int64_t function_2ad74f();
int64_t function_2ad775(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ad7cb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2ad7d1(void);
int64_t function_2ad7d6(void);
int64_t function_2ad7d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ad905(void);
int64_t function_2ad921(void);
int64_t function_2ad92c(void);
int64_t function_2ad93e(void);
int64_t function_2ad954(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ad965(int64_t a1);
int64_t function_34c91389();
int64_t function_3ef99e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3ef9d1(void);
int64_t function_3efa37(void);
int64_t function_3efa50(int64_t a1, int64_t a2);
int64_t function_3efa73(int64_t a1);
int64_t function_3efa79(int64_t a1);
int64_t function_3efa90(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3efafc(void);
int64_t function_3efb11(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3efb20(void);
int64_t function_3efb22(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3efb6f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3efb75(void);
int64_t function_3efb95(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3efd9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3efdb8(int64_t a1);
int64_t function_3efdc1(void);
int64_t function_3efde8(int64_t a1);
int64_t function_3efded(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3efe36(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3efe85(int64_t a1, int64_t a2);
int64_t function_3eff3a(int64_t a1);
int64_t function_6c02604e();
int64_t function_de529f();
int64_t function_ffffffffb504f9b5();
int64_t unknown_10365455();
int64_t unknown_26111b64();
int64_t unknown_2a20cc41();
int64_t unknown_52e5c291();
int64_t unknown_6dbb2c26();
int64_t unknown_7f88808();
int64_t unknown_ffffffff8aecbce4();
int64_t unknown_ffffffffb46819a4();
int64_t unknown_ffffffffbc84388e();
int64_t unknown_ffffffffe038e847();
int64_t unknown_ffffffffe8b68c7b();
int64_t unknown_ffffffffeb4f0b75();

// Address range: 0x1d3a5a - 0x1d3a6c
int64_t function_1d3a5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1d3a5a
    int64_t v1; // 0x1d3a5a
    int64_t v2 = v1;
    int64_t v3 = a3;
    uint32_t v4 = (int32_t)a4 % 32; // 0x1d3a5a
    int64_t v5; // 0x1d3a5a
    int32_t v6; // 0x1d3a5a
    if (v4 == 0) {
        // 0x1d3a5a
        v5 = a3;
        v6 = a3;
    } else {
        bool v7; // 0x1d3a5a
        *(int32_t *)v2 = (int32_t)v2 >> v4 | (int32_t)((v2 & 0xffffffff) << (int64_t)(33 - v4)) | (int32_t)v7 << 32 - v4;
        v5 = v3;
        v6 = *(int32_t *)&v3;
    }
    *(int32_t *)v5 = v6 & (int32_t)a1;
    int64_t result = unknown_26111b64(); // 0x1d3a5e
    int32_t * v8 = (int32_t *)(v1 + 0x700d04b1); // 0x1d3a63
    *v8 = *v8 - (int32_t)a6;
    unsigned char v9 = *(char *)&v3; // 0x1d3a6a
    *(char *)v3 = v9 / 2 | 128 * v9;
    return result;
}

// Address range: 0x1d3ae2 - 0x1d3ae3
int64_t function_1d3ae2(void) {
    // 0x1d3ae2
    int64_t result; // 0x1d3ae2
    return result;
}

// Address range: 0x1d3b11 - 0x1d3b40
int64_t function_1d3b11(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1d3b11
    int64_t v1; // 0x1d3b11
    *(char *)-0x4f3adad85ef4c228 = (char)v1;
    bool v2; // 0x1d3b11
    return a4 != 1 == v2 ? 0x38eb33ae : v1;
}

// Address range: 0x1d3b55 - 0x1d3b56
int64_t function_1d3b55(void) {
    // 0x1d3b55
    int64_t result; // 0x1d3b55
    return result;
}

// Address range: 0x1d3b66 - 0x1d3b68
int64_t function_1d3b66(void) {
    // 0x1d3b66
    int64_t v1; // 0x1d3b66
    return function_1d3ba2(v1, v1, v1);
}

// Address range: 0x1d3b9d - 0x1d3b9e
int64_t function_1d3b9d(void) {
    // 0x1d3b9d
    int64_t result; // 0x1d3b9d
    return result;
}

// Address range: 0x1d3ba2 - 0x1d3bc0
int64_t function_1d3ba2(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 0x8fb831a); // 0x1d3ba7
    *v1 = *v1 + (int32_t)a3;
    *(int32_t *)-0x54e0dc47 = *(int32_t *)-0x54e0dc47 + (int32_t)a1;
    int64_t v2; // 0x1d3ba2
    *(char *)a1 = *(char *)&v2;
    int64_t v3; // 0x1d3ba2
    return v3 + 0x35e38b95 & 0xffffffff;
}

// Address range: 0x1d3bca - 0x1d3bcc
int64_t function_1d3bca(void) {
    // 0x1d3bca
    return function_1d3b55();
}

// Address range: 0x1d3c1d - 0x1d3c5b
int64_t function_1d3c1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3; // bp-8, 0x1d3c1d
    int64_t v2; // 0x1d3c1d
    int32_t * v3 = (int32_t *)(a2 + 0x70c32a88 + 2 * v2); // 0x1d3c25
    *v3 = 2 * *v3;
    char v4 = a3; // 0x1d3c35
    *(char *)-0x712a2bab = *(char *)-0x712a2bab + v4;
    unknown_2a20cc41();
    int32_t v5 = *(int32_t *)(2 * v2 + 33 + (int64_t)&v1); // 0x1d3c40
    bool v6; // 0x1d3c1d
    int64_t v7 = v6 ? -1 : 1; // 0x1d3c44
    int64_t v8 = v7 + a2; // 0x1d3c44
    int32_t * v9 = (int32_t *)(v8 + 0x2c013286); // 0x1d3c47
    *v9 = v5 + (int32_t)v2 + *v9;
    int64_t v10 = unknown_10365455(v7 + a1, v8); // 0x1d3c4f
    char * v11 = (char *)(a3 - 124); // 0x1d3c54
    *v11 = *v11 | v4;
    return (v10 + 119) % 256 | v10 & -256;
}

// Address range: 0x1d3c8e - 0x1d3cc3
int64_t function_1d3c8e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a4 - 0x1759e900); // 0x1d3c94
    unsigned char v2 = *v1; // 0x1d3c94
    *v1 = v2 / 2 | 128 * v2;
    int32_t v3 = a3; // 0x1d3c9a
    int64_t result2; // 0x1d3c8e
    *(int32_t *)result2 = *(int32_t *)&result2 + v3;
    char * v4 = (char *)(result2 - 0x7523e0a6); // 0x1d3c9c
    *v4 = *v4 | (char)(result2 / 256);
    int64_t result = __asm_iretd(); // 0x1d3cac
    result2 = result;
    int64_t v5; // 0x1d3c8e
    if (a4 != 1 == *(char *)&v5 == (char)(a4 / 256)) {
        // 0x1d3d2b
        return result;
    }
    // 0x1d3caf
    int64_t v6; // 0x1d3c8e
    uint32_t v7 = *(int32_t *)&v6; // 0x1d3cb1
    uint32_t v8 = v7 + v3; // 0x1d3cb1
    *(int32_t *)v6 = v8;
    int64_t v9 = __asm_int3(); // 0x1d3cb3
    result2 = v9;
    int64_t v10; // 0x1d3c8e
    char * v11 = (char *)(v10 + 0x340e1dfe); // 0x1d3cba
    *v11 = (char)(v8 < v7) - (char)(v9 / 256) + *v11;
    return result2;
}

// Address range: 0x1d3cc4 - 0x1d3cd8
int64_t function_1d3cc4(int64_t a1) {
    // 0x1d3cc4
    return -0x7b050f7aee03fe18;
}

// Address range: 0x1d3cdc - 0x1d3cdd
int64_t function_1d3cdc(void) {
    // 0x1d3cdc
    int64_t result; // 0x1d3cdc
    return result;
}

// Address range: 0x1d3cf5 - 0x1d3cfa
int64_t function_1d3cf5(void) {
    // 0x1d3cf5
    return function_101ec26f();
}

// Address range: 0x1d3d02 - 0x1d3d2b
int64_t function_1d3d02(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)unknown_7f88808(); // 0x1d3d07
    uint32_t v2 = 2 * v1; // 0x1d3d07
    uint64_t v3 = (int64_t)v2 - (v2 < v1 ? 243 : 242); // 0x1d3d09
    int64_t v4 = v3 % 256 | (int64_t)(v2 & -256); // 0x1d3d09
    int64_t v5; // 0x1d3d02
    *(char *)a4 = (char)(v3 | v5);
    int32_t * v6 = (int32_t *)v4; // 0x1d3d10
    *v6 = *v6 + (int32_t)a1;
    char * v7 = (char *)(a2 + 57); // 0x1d3d16
    *v7 = *v7 + (char)a3;
    char * v8 = (char *)(v4 - 0x6101eff9); // 0x1d3d1a
    unsigned char v9 = *v8; // 0x1d3d1a
    unsigned char v10 = v9 + (char)v5; // 0x1d3d1a
    *v8 = v10;
    int64_t v11 = unknown_6dbb2c26(); // 0x1d3d25
    if (v10 < v9 || v10 == 0) {
        v11 = function_1d3cdc();
    }
    int64_t result = v11; // 0x1d3d27
    if (v10 == 0) {
        result = function_1d3d9d();
    }
    // 0x1d3d29
    __asm_out(93, (int32_t)result);
    return result;
}

// Address range: 0x1d3d8f - 0x1d3d90
int64_t function_1d3d8f(void) {
    // 0x1d3d8f
    int64_t result; // 0x1d3d8f
    return result;
}

// Address range: 0x1d3d9d - 0x1d3d9f
int64_t function_1d3d9d(void) {
    // 0x1d3d9d
    int64_t v1; // 0x1d3d9d
    return v1 & 0xffffffff;
}

// Address range: 0x1d3da9 - 0x1d3db3
int64_t function_1d3da9(void) {
    // 0x1d3da9
    int64_t v1; // 0x1d3da9
    uint64_t v2 = v1 & 0x4fba1d30; // 0x1d3da9
    char * v3 = (char *)(v2 - 74); // 0x1d3dae
    *v3 = *v3 - (char)(v2 / 256);
    return function_1d3d8f();
}

// Address range: 0x1d3e4d - 0x1d3e50
int64_t function_1d3e4d(int64_t a1) {
    // 0x1d3e4d
    int64_t result; // 0x1d3e4d
    return result;
}

// Address range: 0x1d3e5b - 0x1d3e66
int64_t function_1d3e5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d3e5b
    int64_t result; // 0x1d3e5b
    *(int32_t *)a3 = (int32_t)result + (int32_t)a1;
    return result;
}

// Address range: 0x1d3e66 - 0x1d3e77
int64_t function_1d3e66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1d3e66
    int64_t v1; // 0x1d3e66
    int64_t v2 = v1 & 0xc5bf9499 | 0x3a406b66; // 0x1d3e66
    __asm_outsd((int16_t)a3, (int32_t)v1);
    uint64_t v3 = v2 + 255; // 0x1d3e6c
    *(char *)a1 = (char)v3;
    return v3 % 256 | v2 & 0xffffff00;
}

// Address range: 0x1d3eb0 - 0x1d3eb6
int64_t function_1d3eb0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1d3eb0
    int64_t result; // 0x1d3eb0
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)result + (int32_t)v1;
    return result;
}

// Address range: 0x1d3eb8 - 0x1d3ec2
int64_t function_1d3eb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 - 0x68fc544b); // 0x1d3ebb
    *v1 = *v1 + (int32_t)a1;
    int64_t v2; // 0x1d3eb8
    return 0x10000 * (int32_t)v2 >> 16;
}

// Address range: 0x1d3f2f - 0x1d3f35
int64_t function_1d3f2f(int64_t a1) {
    // 0x1d3f2f
    return function_2054a70();
}

// Address range: 0x1d3f56 - 0x1d3f76
int64_t function_1d3f56(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d3f56
    int64_t v1; // 0x1d3f56
    *(char *)-0x225fccc5f79f1045 = (char)v1;
    int64_t v2 = (int64_t)*(int32_t *)(v1 - 0x9fe176e); // 0x1d3f5f
    int64_t v3 = 0x4007c800 * v2; // 0x1d3f5f
    int32_t * v4 = (int32_t *)((v3 & 0xfffff800 | 118) + 2 * v1); // 0x1d3f69
    *v4 = *v4 - (int32_t)a3 + (int32_t)(v3 != 0x4007c80000000000 * v2 >> 32);
    __asm_sti();
    unknown_ffffffffeb4f0b75();
    return __asm_int3();
}

// Address range: 0x1d3f76 - 0x1d3f7d
int64_t function_1d3f76(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1d3f76
    int64_t v1; // 0x1d3f76
    int64_t v2 = v1;
    return (v2 + a4) % 256 | v2 & -0x10000 | (v2 & 0xff00) + a3 & 0xff00;
}

// Address range: 0x2acf75 - 0x2acfa9
int64_t function_2acf75(int64_t a1, int64_t a2) {
    // 0x2acf75
    unknown_ffffffffe8b68c7b();
    int32_t v1 = a1; // 0x2acf7a
    *(int32_t *)-0x6555987f = *(int32_t *)-0x6555987f + v1;
    __asm_hlt();
    unknown_ffffffffbc84388e();
    unknown_52e5c291();
    int64_t v2; // 0x2acf75
    *(int32_t *)a2 = (int32_t)v2 + v1;
    char v3 = v2; // 0x2acf96
    *(char *)0xfb131a13 = *(char *)0xfb131a13 | v3;
    int64_t result = unknown_ffffffffb46819a4(); // 0x2acf9e
    *(char *)0xfcfb1b13 = *(char *)0xfcfb1b13 & v3;
    return result;
}

// Address range: 0x2acfde - 0x2acff5
int64_t function_2acfde(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_ffffffff8aecbce4(); // 0x2acfde
    unsigned char v1 = (char)a4 % 32; // 0x2acfec
    if (v1 != 0) {
        char * v2 = (char *)(result - 0x68e237fd); // 0x2acfec
        unsigned char v3 = *v2; // 0x2acfec
        int64_t v4; // 0x2acfde
        uint32_t v5 = *(int32_t *)(v4 + 0x1e82cc5); // 0x2acfe5
        *v2 = v3 << v1 | (char)((int16_t)v3 >> (int16_t)(9 - v1)) | (char)(v5 < 104) << v1 - 1;
    }
    return result;
}

// Address range: 0x2ad015 - 0x2ad018
int64_t function_2ad015(void) {
    // 0x2ad015
    int64_t result; // 0x2ad015
    return result;
}

// Address range: 0x2ad041 - 0x2ad04a
int64_t function_2ad041(void) {
    // 0x2ad041
    return unknown_ffffffffe038e847();
}

// Address range: 0x2ad056 - 0x2ad058
int64_t function_2ad056(int64_t a1, int64_t a2) {
    // 0x2ad056
    int64_t result; // 0x2ad056
    return result;
}

// Address range: 0x2ad08d - 0x2ad094
int64_t function_2ad08d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2ad08d
    int64_t result; // 0x2ad08d
    int32_t * v1 = (int32_t *)(result + 0x77170a04); // 0x2ad08d
    *v1 = *v1 + (int32_t)a2;
    return result;
}

// Address range: 0x2ad15e - 0x2ad168
int64_t function_2ad15e(void) {
    // 0x2ad15e
    return (int64_t)*(int32_t *)0x149d3f9c9a9e01c7;
}

// Address range: 0x2ad375 - 0x2ad376
int64_t function_2ad375(void) {
    // 0x2ad375
    int64_t result; // 0x2ad375
    return result;
}

// Address range: 0x2ad3a6 - 0x2ad3ab
int64_t function_2ad3a6(void) {
    // 0x2ad3a6
    return function_de529f();
}

// Address range: 0x2ad3d8 - 0x2ad3db
int64_t function_2ad3d8(int64_t a1) {
    // 0x2ad3d8
    int64_t result; // 0x2ad3d8
    return result;
}

// Address range: 0x2ad438 - 0x2ad43a
int64_t function_2ad438(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ad438
    int64_t result; // 0x2ad438
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x2ad454 - 0x2ad45b
int64_t function_2ad454(void) {
    // 0x2ad454
    int64_t v1; // 0x2ad454
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return function_34c91389();
}

// Address range: 0x2ad473 - 0x2ad474
int64_t function_2ad473(int64_t a1) {
    // 0x2ad473
    int64_t result; // 0x2ad473
    return result;
}

// Address range: 0x2ad488 - 0x2ad48c
int64_t function_2ad488(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ad488
    int64_t v1; // 0x2ad488
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return result;
}

// Address range: 0x2ad50a - 0x2ad50b
int64_t function_2ad50a(int64_t a1) {
    // 0x2ad50a
    int64_t result; // 0x2ad50a
    return result;
}

// Address range: 0x2ad775 - 0x2ad7c9
int64_t function_2ad775(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ad775
    bool v1; // 0x2ad775
    int64_t v2 = v1 ? -1 : 1; // 0x2ad777
    int64_t v3 = v2 + a5; // 0x2ad777
    __asm_int(21);
    int64_t v4; // 0x2ad775
    int64_t result; // 0x2ad775
    unsigned char v5 = *(char *)(2 * result - 0x52f30799 + (int64_t)&v4); // 0x2ad780
    int64_t v6; // 0x2ad775
    if (*(char *)v3 == (char)result) {
        v6 = function_2ad74f();
    }
    uint32_t v7 = (int32_t)v6;
    __asm_out(-12, v7);
    uint32_t v8 = (int32_t)a4 % 32; // 0x2ad78c
    if (v8 != 0) {
        *(int32_t *)v6 = v7 >> 32 - v8 | v7 << v8;
    }
    int32_t * v9 = (int32_t *)(v2 + 0x62e53585 + v3); // 0x2ad793
    *v9 = -*v9;
    *(int64_t *)((v6 & 0xffffffff) - 8) = 0x68d96f00;
    char * v10 = (char *)((256 * (int64_t)v5 | a3 & -0xff01) + 125); // 0x2ad7b6
    *v10 = *v10 + (char)a3;
    function_2a468c();
    return result;
}

// Address range: 0x2ad7cb - 0x2ad7d0
int64_t function_2ad7cb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2ad7cb
    *(char *)a1 = (char)a2;
    int64_t result; // 0x2ad7cb
    return result;
}

// Address range: 0x2ad7d1 - 0x2ad7d2
int64_t function_2ad7d1(void) {
    // 0x2ad7d1
    int64_t result; // 0x2ad7d1
    return result;
}

// Address range: 0x2ad7d6 - 0x2ad7d7
int64_t function_2ad7d6(void) {
    // 0x2ad7d6
    int64_t result; // 0x2ad7d6
    return result;
}

// Address range: 0x2ad7d9 - 0x2ad86f
int64_t function_2ad7d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 40); // 0x2ad7de
    uint32_t v2 = *v1; // 0x2ad7de
    *v1 = v2 / 0x80000 | 0x2000 * v2;
    int64_t result; // 0x2ad7d9
    int64_t v3; // 0x2ad7d9
    if ((int32_t)v3 != -0x6538feff) {
        result = function_2ad7d6();
    }
    // 0x2ad7ee
    return result;
}

// Address range: 0x2ad905 - 0x2ad906
int64_t function_2ad905(void) {
    // 0x2ad905
    int64_t result; // 0x2ad905
    return result;
}

// Address range: 0x2ad921 - 0x2ad927
int64_t function_2ad921(void) {
    // 0x2ad921
    int64_t result; // 0x2ad921
    *(char *)(2 * result + 29) = -90;
    return result;
}

// Address range: 0x2ad92c - 0x2ad935
int64_t function_2ad92c(void) {
    // 0x2ad92c
    return function_2ad905();
}

// Address range: 0x2ad93e - 0x2ad940
int64_t function_2ad93e(void) {
    // 0x2ad93e
    int64_t result; // 0x2ad93e
    return result;
}

// Address range: 0x2ad954 - 0x2ad965
int64_t function_2ad954(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ad954
    int64_t v1; // 0x2ad954
    return (int64_t)(0x10000 * (int32_t)v1 * *(int32_t *)(a4 - 25) >> 16);
}

// Address range: 0x2ad965 - 0x2ad967
int64_t function_2ad965(int64_t a1) {
    // 0x2ad965
    int64_t result; // 0x2ad965
    return result;
}

// Address range: 0x3ef99e - 0x3ef9af
int64_t function_3ef99e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char v1 = *(char *)0x3f9d31ad; // 0x3ef99e
    bool v2; // 0x3ef99e
    *(char *)0x3f9d31ad = v1 + (char)(a4 / 256) + (char)v2;
    int64_t v3; // 0x3ef99e
    int32_t * v4 = (int32_t *)(v3 - 0x1fcdd1cd); // 0x3ef9a4
    *v4 = *v4 + (int32_t)v3;
    return function_ffffffffb504f9b5();
}

// Address range: 0x3ef9d1 - 0x3ef9de
int64_t function_3ef9d1(void) {
    // 0x3ef9d1
    int64_t result; // 0x3ef9d1
    return result;
}

// Address range: 0x3efa37 - 0x3efa38
int64_t function_3efa37(void) {
    // 0x3efa37
    int64_t result; // 0x3efa37
    return result;
}

// Address range: 0x3efa50 - 0x3efa5f
int64_t function_3efa50(int64_t a1, int64_t a2) {
    // 0x3efa50
    int64_t v1; // 0x3efa50
    int64_t v2 = v1 & -256 | (uint64_t)v1 % 256; // 0x3efa51
    bool v3; // 0x3efa50
    if (!v3) {
        v2 = function_3efa37();
    }
    int64_t v4 = (v3 ? -1 : 1) + a2; // 0x3efa50
    int32_t * v5 = (int32_t *)(v4 + 96); // 0x3efa55
    *v5 = *v5 - (int32_t)v2;
    return v4 & 0xffffffff;
}

// Address range: 0x3efa73 - 0x3efa77
int64_t function_3efa73(int64_t a1) {
    // 0x3efa73
    int64_t result; // 0x3efa73
    return result;
}

// Address range: 0x3efa79 - 0x3efa7c
int64_t function_3efa79(int64_t a1) {
    // 0x3efa79
    int64_t result; // 0x3efa79
    return result;
}

// Address range: 0x3efa90 - 0x3efad5
int64_t function_3efa90(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3efa90
    int64_t v1; // 0x3efa90
    uint32_t v2 = (int32_t)v1; // 0x3efa91
    uint32_t v3 = *(int32_t *)(v1 - 0x45e112cc) + v2; // 0x3efa91
    bool v4; // 0x3efa90
    uint32_t v5 = v3 + (int32_t)v4; // 0x3efa91
    int64_t v6 = v5; // 0x3efa91
    bool v7 = v4 ? v5 <= v2 : v3 < v2; // 0x3efa91
    int64_t v8 = a1; // 0x3efa91
    int64_t v9 = a2;
    while (!v7) {
        int64_t v10 = v6;
        uint32_t v11 = (int32_t)v9; // 0x3efa99
        uint32_t v12 = *(int32_t *)(v10 + 0x5edea12f) + v11; // 0x3efa99
        unsigned char v13 = llvm_ctpop_i8((char)v12); // 0x3efa99
        *(int32_t *)v8 = v12;
        v8 += (v4 ? -4 : 4);
        int64_t v14; // 0x3efa90
        v6 = v14 & 0xffffffff;
        v14 = v12;
        v7 = v12 < v11;
        if (v13 % 2 != 0) {
            // 0x3efaa9
            return function_6c02604e(v8, v10);
        }
        v9 = v10;
    }
    // 0x3efacb
    __asm_out(-86, 0);
    char * v15 = (char *)(v9 + 90); // 0x3efad2
    *v15 = *v15 | (char)(a3 / 256);
    return 0;
}

// Address range: 0x3efafc - 0x3efafd
int64_t function_3efafc(void) {
    // 0x3efafc
    int64_t result; // 0x3efafc
    return result;
}

// Address range: 0x3efb11 - 0x3efb1c
int64_t function_3efb11(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3efb11
    int64_t v1; // 0x3efb11
    *(char *)a3 = (char)((uint64_t)v1 / 256);
    int64_t v2 = v1 & 0xf9a48690 | 0x65b796f; // 0x3efb13
    return v2 + 124 & 251 | v2 & 0xffffff00;
}

// Address range: 0x3efb20 - 0x3efb21
int64_t function_3efb20(void) {
    // 0x3efb20
    int64_t result; // 0x3efb20
    return result;
}

// Address range: 0x3efb22 - 0x3efb53
int64_t function_3efb22(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = (int64_t)*(int32_t *)(a3 + 0x2e1f7671); // 0x3efb25
    v1 = a2;
    int64_t v3 = (int64_t)&v1; // bp-8, 0x3efb30
    char * v4 = (char *)((784 * v2 & 0x7fffffff0) + ((int64_t)&v3 | 5)); // 0x3efb32
    char v5 = *v4; // 0x3efb32
    *v4 = v5 - (char)(a4 / 256) + (char)(98 * v2 != 0x6200000000 * v2 >> 32);
    int64_t v6; // 0x3efb22
    int32_t * v7 = (int32_t *)(v6 - 76); // 0x3efb38
    *v7 = (int32_t)v6;
    int64_t result = __asm_in_133((int16_t)a3); // 0x3efb41
    if ((*v7 & 0x3c868cfa) != 0) {
        result = function_3efb20();
    }
    if ((a4 & -0xff01 || (int64_t)&g1) == 0) {
        // 0x3efb72
        return result;
    }
    // 0x3efb47
    return function_3efafc();
}

// Address range: 0x3efb6f - 0x3efb72
int64_t function_3efb6f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3efb6f
    int64_t result; // 0x3efb6f
    return result;
}

// Address range: 0x3efb75 - 0x3efb76
int64_t function_3efb75(void) {
    // 0x3efb75
    int64_t result; // 0x3efb75
    return result;
}

// Address range: 0x3efb95 - 0x3efb9b
int64_t function_3efb95(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3efb95
    if (a4 == 0) {
        function_3efb75();
    }
    // 0x3efb97
    int64_t v1; // 0x3efb95
    return v1 & 0xffffffff;
}

// Address range: 0x3efd9e - 0x3efda3
int64_t function_3efd9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3efd9e
    __asm_in(98);
    int64_t result = __asm_int3(); // 0x3efda1
    *(char *)a1 = __asm_insb((int16_t)a3);
    return result;
}

// Address range: 0x3efdb8 - 0x3efdbb
int64_t function_3efdb8(int64_t a1) {
    // 0x3efdb8
    int64_t result; // 0x3efdb8
    return result;
}

// Address range: 0x3efdc1 - 0x3efdc2
int64_t function_3efdc1(void) {
    // 0x3efdc1
    int64_t result; // 0x3efdc1
    return result;
}

// Address range: 0x3efde8 - 0x3efdeb
int64_t function_3efde8(int64_t a1) {
    // 0x3efde8
    int64_t result; // 0x3efde8
    return result;
}

// Address range: 0x3efded - 0x3efe09
int64_t function_3efded(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3efded
    float80_t v1; // 0x3efded
    *(float64_t *)(a2 - 0x2df2d5fe) = (float64_t)v1;
    int64_t v2; // 0x3efded
    *(int32_t *)(v2 + 4 * v2) = (int32_t)a2;
    int64_t v3; // 0x3efded
    return (int64_t)*(int32_t *)&v3;
}

// Address range: 0x3efe36 - 0x3efe3e
int64_t function_3efe36(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3efe36
    return __asm_in_133((int16_t)a3);
}

// Address range: 0x3efe85 - 0x3efe8b
int64_t function_3efe85(int64_t a1, int64_t a2) {
    // 0x3efe85
    int64_t v1; // 0x3efe85
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2; // 0x3efe85
    return (int64_t)((int32_t)v1 - *(int32_t *)&v2);
}

// Address range: 0x3eff3a - 0x3eff3d
int64_t function_3eff3a(int64_t a1) {
    // 0x3eff3a
    int64_t result; // 0x3eff3a
    return result;
}
