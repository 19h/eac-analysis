/*
 * Targeted RetDec C for native executable gap queue batch 447.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1ec0e8-0x1ec2e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ec2e8-0x1ec4e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ec6e8-0x1ec8e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3fc8d1-0x3fcad1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3fcad1-0x3fccd1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3fccd1-0x3fced1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3fced1-0x3fd0d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3fd0d1-0x3fd2d1 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1ec099();
int64_t function_1ec0b4();
int64_t function_1ec0e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ec121(void);
int64_t function_1ec142(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ec159(void);
int64_t function_1ec164(void);
int64_t function_1ec16a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ec18f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1ec19a(int64_t a1);
int64_t function_1ec1c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1ec231(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ec2ad(void);
int64_t function_1ec360(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1ec37c(void);
int64_t function_1ec3aa(void);
int64_t function_1ec3ad(int64_t a1, int64_t a2);
int64_t function_1ec3cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ec3d3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1ec3ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1ec476(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1ec4a2(int64_t a1, int64_t a2);
int64_t function_1ec4db(int64_t a1);
int64_t function_1ec6e8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1ec773(void);
int64_t function_1ec77c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1ec7fd(void);
int64_t function_1ec806(int64_t a1);
int64_t function_1ec813(int64_t a1);
int64_t function_1ec83a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1ec86a(int64_t a1, int64_t a2);
int64_t function_1ec8a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3fc8a0();
int64_t function_3fc8d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3fc8e8(void);
int64_t function_3fc8f6(void);
int64_t function_3fc911(void);
int64_t function_3fc919(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3fc9b7(void);
int64_t function_3fc9cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3fca0c(void);
int64_t function_3fca30(int64_t a1);
int64_t function_3fca4e(void);
int64_t function_3fcacf(int64_t a1);
int64_t function_3fcad6(void);
int64_t function_3fcaf3(int64_t a1, int64_t a2);
int64_t function_3fcb28(int64_t a1);
int64_t function_3fcb33(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3fcb55(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3fcbd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3fcbd4(int64_t a1, int64_t a2);
int64_t function_3fcc31(void);
int64_t function_3fcc42(int64_t a1, int64_t a2);
int64_t function_3fcc9d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3fcd4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3fcdf2(void);
int64_t function_3fcdf6(void);
int64_t function_3fce61(void);
int64_t function_3fce97(int64_t a1, int64_t a2);
int64_t function_3fceac(int64_t a1);
int64_t function_3fcef5(int64_t a1);
int64_t function_3fcf7a(void);
int64_t function_3fcfa4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3fd001(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3fd058(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3fd09c(void);
int64_t function_3fd0d4(void);
int64_t function_3fd0d8(void);
int64_t function_3fd117(int64_t a1);
int64_t function_3fd1d0(int64_t a1);
int64_t function_3fd21b(void);
int64_t function_3fd23d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3fd252(void);
int64_t function_3fd26e(void);
int64_t function_3fd28f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_566a11c2();
int64_t function_615b7c04();
int64_t function_7453e3db();
int64_t function_ffffffffda87951c();
int64_t function_ffffffffe19b2061();
int64_t unknown_13e3a3b3();
int64_t unknown_1f409588();
int64_t unknown_7c50aaa9();
int64_t unknown_7c7acdae();
int64_t unknown_ffffffff939747e8();
int64_t unknown_ffffffffa8299900();
int64_t unknown_ffffffffabd412ca();
int64_t unknown_ffffffffda172249();

// Address range: 0x1ec0e8 - 0x1ec100
int64_t function_1ec0e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int64_t v2; // 0x1ec0e8
    int32_t v3 = (int32_t)v2 + (int32_t)a2; // 0x1ec0ea
    *(int32_t *)a2 = v3;
    if (v3 == 0) {
        function_1ec099();
    }
    // 0x1ec0ee
    __asm_wait(v1, a2);
    if (*(char *)&v1 < (char)v2) {
        function_1ec0b4();
    }
    // 0x1ec0f4
    __asm_sti();
    return unknown_ffffffffa8299900();
}

// Address range: 0x1ec121 - 0x1ec122
int64_t function_1ec121(void) {
    // 0x1ec121
    int64_t result; // 0x1ec121
    return result;
}

// Address range: 0x1ec142 - 0x1ec157
int64_t function_1ec142(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffda172249(); // 0x1ec143
    int32_t v2 = v1; // 0x1ec148
    __asm_out(1, v2);
    int16_t v3 = a3; // 0x1ec14a
    __asm_out_133(v3, (char)v1);
    int64_t v4; // 0x1ec142
    uint32_t result = 2 * (int32_t)v4 + (0x10000 * v2 >> 16 & 0x7a78216); // 0x1ec153
    __asm_out_133(v3, (char)result);
    return result;
}

// Address range: 0x1ec159 - 0x1ec15a
int64_t function_1ec159(void) {
    // 0x1ec159
    int64_t result; // 0x1ec159
    return result;
}

// Address range: 0x1ec164 - 0x1ec165
int64_t function_1ec164(void) {
    // 0x1ec164
    int64_t result; // 0x1ec164
    return result;
}

// Address range: 0x1ec16a - 0x1ec18f
int64_t function_1ec16a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ec16a
    int64_t v1; // 0x1ec16a
    *(int32_t *)-0x3953fe17c9fa57f6 = (int32_t)v1;
    int64_t v2 = a4 - 1; // 0x1ec17c
    bool v3; // 0x1ec16a
    int64_t v4 = 256 * (64 * (int64_t)v3 | 128 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3) | (int64_t)(0x10000 * (int32_t)a1 >> 16 & -0xff01 | 512); // 0x1ec17c
    if (v2 != 0) {
        v4 = function_1ec121();
    }
    int64_t v5 = v1 & 0xffffffff; // 0x1ec174
    int32_t * v6 = (int32_t *)v2; // 0x1ec180
    *v6 = *v6 + (int32_t)v4;
    __asm_int1(v5);
    return function_1ec1c3(v5, 0xea1e39a0, a3, v2, v1);
}

// Address range: 0x1ec18f - 0x1ec19a
int64_t function_1ec18f(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = __asm_wait(0xa5e401e8, a2); // 0x1ec194
    __asm_out_134((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x1ec19a - 0x1ec1b2
int64_t function_1ec19a(int64_t a1) {
    // 0x1ec19a
    int64_t v1; // 0x1ec19a
    return unknown_7c7acdae(v1 & 0xffffffff) & 0xffffffff;
}

// Address range: 0x1ec1c3 - 0x1ec231
int64_t function_1ec1c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1ec1c3
    int64_t v1; // 0x1ec1c3
    int64_t v2 = v1;
    int64_t v3 = a4 - 1; // 0x1ec1c3
    bool v4; // 0x1ec1c3
    if (v3 != 0 && !v4) {
        // 0x1ec224
        int32_t v5; // 0x1ec1c3
        *(int32_t *)a3 = (int32_t)(int64_t)&v5;
        return v2 - ((int32_t)v2 < 0xf5af0001 ? 0x73a55010 : 0x73a5500f) & 0xffffffff;
    }
    uint64_t v6 = v1 & -0xff01 | (int64_t)&g1; // 0x1ec1c5
    char * v7 = (char *)(a4 + 0xaa42e37); // 0x1ec1c7
    *v7 = *v7 - (char)a3;
    int32_t v8; // 0x1ec1c3
    int64_t result; // 0x1ec1c3
    if (v6 / 256 < (int64_t)*(char *)(v6 + 0x4d0459f3)) {
        // 0x1ec1c5
        v8 = *(int32_t *)&result;
    } else {
        int64_t v9 = function_1ec164(); // 0x1ec1d3
        result = v9;
        v8 = v9;
    }
    uint32_t v10 = (int32_t)v3 % 32; // 0x1ec1d8
    if (v10 != 0) {
        uint32_t v11 = v8; // 0x1ec1d8
        *(int32_t *)result = v11 >> 32 - v10 | v11 << v10;
    }
    return result;
}

// Address range: 0x1ec231 - 0x1ec267
int64_t function_1ec231(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ec231
    int64_t v1; // 0x1ec231
    int64_t v2 = v1;
    int64_t v3 = a4 - 1; // 0x1ec233
    int32_t v4 = (int32_t)v2 >> 31; // 0x1ec239
    *(char *)a2 = (char)v4 + (char)v1;
    uint32_t result = (v4 & 0x3d9d47dd) - 0x237d3fa2 + (int32_t)(((int32_t)(256 * v2 & 0xff00 & v2 + (v3 & 0xff00) | v3 & 0xffff0000) ^ -89) < (int32_t)a2); // 0x1ec257
    *(char *)-0x65fc6f976a52c8e6 = (char)result;
    return result;
}

// Address range: 0x1ec2ad - 0x1ec2b0
int64_t function_1ec2ad(void) {
    // 0x1ec2ad
    int64_t result; // 0x1ec2ad
    return result;
}

// Address range: 0x1ec360 - 0x1ec36b
int64_t function_1ec360(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 - 0x79fe170f); // 0x1ec361
    *v1 = *v1 + (char)a4;
    int64_t v2; // 0x1ec360
    int64_t v3; // 0x1ec360
    return v3 & -256 | (int64_t)*(char *)&v2;
}

// Address range: 0x1ec37c - 0x1ec37d
int64_t function_1ec37c(void) {
    // 0x1ec37c
    int64_t result; // 0x1ec37c
    return result;
}

// Address range: 0x1ec3aa - 0x1ec3ab
int64_t function_1ec3aa(void) {
    // 0x1ec3aa
    int64_t result; // 0x1ec3aa
    return result;
}

// Address range: 0x1ec3ad - 0x1ec3b7
int64_t function_1ec3ad(int64_t a1, int64_t a2) {
    // 0x1ec3ad
    unknown_13e3a3b3();
    return __asm_int1(a1);
}

// Address range: 0x1ec3cf - 0x1ec3d3
int64_t function_1ec3cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ec3cf
    int64_t v1; // 0x1ec3cf
    bool v2; // 0x1ec3cf
    *(char *)a4 = (char)v1 + (char)a3 + (char)v2;
    return function_1ec3ea(a1, a2, a3, a4, (int64_t)&g3);
}

// Address range: 0x1ec3d3 - 0x1ec3ea
int64_t function_1ec3d3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 10); // 0x1ec3db
    uint32_t v2 = *v1; // 0x1ec3db
    uint32_t v3 = v2 + (int32_t)a3; // 0x1ec3db
    *v1 = v3;
    unsigned char v4 = (char)(a3 / 256); // 0x1ec3de
    int64_t v5; // 0x1ec3d3
    unsigned char v6 = *(char *)&v5 + (char)(v3 < v2); // 0x1ec3de
    bool v7 = v3 < v2 ? v6 != -1 | (char)(v3 < v2) + v4 - v6 > v4 : v6 > v4; // 0x1ec3de
    return (int64_t)__asm_in(1) - (v7 ? 0x8f8019e : 0x8f8019d);
}

// Address range: 0x1ec3ea - 0x1ec43a
int64_t function_1ec3ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 85); // 0x1ec3ec
    uint32_t v2 = *v1; // 0x1ec3ec
    int64_t v3; // 0x1ec3ea
    uint32_t v4 = v2 + (int32_t)v3; // 0x1ec3ec
    *v1 = v4;
    int64_t v5; // 0x1ec3ea
    int32_t * v6 = (int32_t *)(v5 + 68); // 0x1ec3ef
    *v6 = (int32_t)(v4 < v2) - (int32_t)a1 + *v6;
    int64_t v7; // 0x1ec3ea
    *(char *)a2 = *(char *)&v7 + (char)v5;
    v7 = a5;
    int64_t v8 = (int64_t)((int32_t)a4 < (int32_t)a2) + a3 - v3 & 0xffffff00 | 50; // 0x1ec406
    uint64_t v9 = v3 / 2 % 128; // 0x1ec408
    int64_t v10 = v3 & -256; // 0x1ec408
    char v11 = *(char *)&v5 + (char)v9; // 0x1ec40b
    unsigned char v12 = llvm_ctpop_i8(v11); // 0x1ec40b
    *(char *)v5 = v11;
    if (v12 % 2 == 0) {
        int32_t * v13 = (int32_t *)v8; // 0x1ec419
        *v13 = *v13 + (int32_t)(a4 - a2);
        return v9 | v10;
    }
    unsigned char v14 = *(char *)(v5 + v9); // 0x1ec40f
    int64_t result = v10 | (int64_t)v14; // 0x1ec40f
    if ((int32_t)(v3 & a1) < 0) {
        // 0x1ec418
        return result;
    }
    // 0x1ec41f
    *(char *)(a1 & 0xffffffff) = v14;
    int32_t * v15 = (int32_t *)v8; // 0x1ec435
    *v15 = *v15 + (int32_t)v7;
    return result;
}

// Address range: 0x1ec476 - 0x1ec488
int64_t function_1ec476(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1ec476
    __asm_int1(a1);
    return a1 & 0xffffffff;
}

// Address range: 0x1ec4a2 - 0x1ec4a6
int64_t function_1ec4a2(int64_t a1, int64_t a2) {
    // 0x1ec4a2
    int64_t result; // 0x1ec4a2
    return result;
}

// Address range: 0x1ec4db - 0x1ec4de
int64_t function_1ec4db(int64_t a1) {
    // 0x1ec4db
    int64_t result; // 0x1ec4db
    return result;
}

// Address range: 0x1ec6e8 - 0x1ec718
int64_t function_1ec6e8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1ec6e8
    int64_t v1; // 0x1ec6e8
    uint64_t v2 = v1;
    int64_t v3 = a2;
    uint32_t v4 = *(int32_t *)(a2 - 90); // 0x1ec6eb
    *(int32_t *)a3 = (int32_t)v1 - (int32_t)a1 + (int32_t)(v4 < (int32_t)a2);
    char * v5 = (char *)(v1 + 2); // 0x1ec6f4
    char v6 = v2 / 256; // 0x1ec6f4
    *v5 = *v5 + v6;
    int32_t v7 = a4; // 0x1ec6f7
    *(int32_t *)a1 = v7;
    int64_t v8 = a3 & 0xffffffff; // 0x1ec6f8
    *(char *)0x4eef4300 = *(char *)0x4eef4300 + v6;
    int32_t * v9 = (int32_t *)(v8 + 0x613a3c04); // 0x1ec6ff
    *v9 = *v9 | v7;
    bool v10; // 0x1ec6e8
    *(char *)((v10 ? -4 : 4) + a1) = *(char *)&v3;
    int64_t v11; // 0x1ec6e8
    *(char *)v8 = *(char *)&v11 + (char)(v1 / 256);
    return a3 & 0xffffff00 | (int64_t)*(char *)(v2 & -256 | a3 % 256);
}

// Address range: 0x1ec773 - 0x1ec776
int64_t function_1ec773(void) {
    // 0x1ec773
    int64_t result; // 0x1ec773
    return result;
}

// Address range: 0x1ec77c - 0x1ec784
int64_t function_1ec77c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1ec77c
    __asm_int(104);
    int64_t result; // 0x1ec77c
    return result;
}

// Address range: 0x1ec7fd - 0x1ec7fe
int64_t function_1ec7fd(void) {
    // 0x1ec7fd
    int64_t result; // 0x1ec7fd
    return result;
}

// Address range: 0x1ec806 - 0x1ec812
int64_t function_1ec806(int64_t a1) {
    // 0x1ec806
    int64_t result; // 0x1ec806
    *(int32_t *)-0x4e3aa6b27cfe17dd = (int32_t)result;
    return result;
}

// Address range: 0x1ec813 - 0x1ec828
int64_t function_1ec813(int64_t a1) {
    // 0x1ec813
    int64_t v1; // 0x1ec813
    int64_t v2 = v1 + 0x78eaadc8; // 0x1ec818
    *(char *)-0x5f25505ffe17878a = (char)v2;
    return v2 & 0xffffffff;
}

// Address range: 0x1ec83a - 0x1ec84c
int64_t function_1ec83a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1ec83a
    int64_t v1; // 0x1ec83a
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x1ec83a
    int64_t v3 = v2 ? -4 : 4; // 0x1ec843
    return function_1ec8a0(2 * v3 + a1, v3 + a2, a3, a4, 0x25661a8a);
}

// Address range: 0x1ec86a - 0x1ec874
int64_t function_1ec86a(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0x6fff66b8); // 0x1ec86c
    int64_t v2; // 0x1ec86a
    *v1 = *v1 + (int32_t)v2;
    return function_1ec7fd();
}

// Address range: 0x1ec8a0 - 0x1ec8e7
int64_t function_1ec8a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t v2; // 0x1ec8a0
    int64_t v3 = v2 & 0xffffffff; // 0x1ec8a2
    __asm_int(-64);
    int32_t * v4 = (int32_t *)(a1 + 0x798af88); // 0x1ec8ac
    *v4 = -1 - *v4;
    int32_t * v5 = (int32_t *)(v3 + 0x1a18600a); // 0x1ec8b6
    *v5 = *v5 + (int32_t)(int64_t)&v1;
    int64_t v6; // 0x1ec8a0
    *(char *)v3 = *(char *)&v6 - (char)v2;
    __asm_sti();
    unknown_ffffffffabd412ca();
    int64_t v7 = v1; // 0x1ec8c9
    bool v8; // 0x1ec8a0
    int64_t v9 = v8 ? -1 : 1; // 0x1ec8ca
    int64_t v10 = v9 + a2 + (v8 ? -8 : 8); // 0x1ec8ca
    v6 = v10;
    uint32_t v11 = (int32_t)(v9 + a1); // 0x1ec8d0
    uint32_t v12 = *(int32_t *)0x1269fead1 + v11; // 0x1ec8d0
    char v13 = *(char *)(a4 - 1); // 0x1ec8d8
    int32_t * v14 = (int32_t *)((v7 & -256 | (int64_t)(v13 + (char)v7 + (char)(v12 >= v11))) - 0x212e33b); // 0x1ec8db
    uint32_t v15 = *v14; // 0x1ec8db
    uint32_t v16 = (int32_t)a4 % 32; // 0x1ec8db
    v6 = v10;
    if (v16 != 0) {
        *v14 = v15 >> 32 - v16 | v15 << v16;
    }
    __asm_wait((int64_t)v12, v6);
    return unknown_ffffffff939747e8();
}

// Address range: 0x3fc8d1 - 0x3fc8e7
int64_t function_3fc8d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3fc8d1
    bool v1; // 0x3fc8d1
    int64_t v2 = v1 ? -4 : 4; // 0x3fc8d1
    int64_t v3 = v2 + a2; // 0x3fc8d1
    __asm_outsd((int16_t)a3, *(int32_t *)v3);
    char * v4 = (char *)(a4 - 27); // 0x3fc8d3
    *v4 = *v4 | (char)a4;
    uint32_t v5 = (int32_t)a4 % 32; // 0x3fc8d6
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)(a4 - 114); // 0x3fc8d6
        uint32_t v7 = *v6; // 0x3fc8d6
        *v6 = v7 << v5 | (int32_t)((int64_t)v7 >> (int64_t)(33 - v5));
    }
    int64_t v8; // 0x3fc8d1
    *(char *)0xed91221288a1969 = (char)v8;
    uint64_t v9 = __asm_wait(v2 + a1, v3); // 0x3fc8e2
    char v10 = *(char *)(a4 + 127); // 0x3fc8e3
    return 256 * (int64_t)(v10 | (char)(v9 / 256)) | v9 & -0xff01;
}

// Address range: 0x3fc8e8 - 0x3fc8ec
int64_t function_3fc8e8(void) {
    // 0x3fc8e8
    int64_t result; // 0x3fc8e8
    return result;
}

// Address range: 0x3fc8f6 - 0x3fc905
int64_t function_3fc8f6(void) {
    // 0x3fc8f6
    int64_t v1; // 0x3fc8f6
    uint64_t v2 = v1;
    *(char *)(v2 - 88) = (char)(v2 / 256);
    return __asm_in(-69);
}

// Address range: 0x3fc911 - 0x3fc913
int64_t function_3fc911(void) {
    // 0x3fc911
    return function_3fc8a0();
}

// Address range: 0x3fc919 - 0x3fc99d
int64_t function_3fc919(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3fc919
    bool v1; // 0x3fc919
    if (!v1) {
        // 0x3fc99a
        int64_t v2; // 0x3fc919
        return (int64_t)&v2;
    }
    // 0x3fc921
    int64_t v3; // 0x3fc919
    *(char *)0x44cb337acf3b133d = (char)v3;
    return function_566a11c2(v1 ? 0x37c405fe : 0x37c40600);
}

// Address range: 0x3fc9b7 - 0x3fc9b8
int64_t function_3fc9b7(void) {
    // 0x3fc9b7
    int64_t result; // 0x3fc9b7
    return result;
}

// Address range: 0x3fc9cb - 0x3fca0c
int64_t function_3fc9cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a4 - 14); // 0x3fc9cb
    int64_t v3; // 0x3fc9cb
    *v2 = *v2 + (int32_t)v3;
    __asm_int(127);
    unsigned char v4 = (char)a4 % 32; // 0x3fc9e3
    if (v4 != 0) {
        char * v5 = (char *)(v3 - 0x36a4bc86); // 0x3fc9e3
        unsigned char v6 = *v5; // 0x3fc9e3
        *v5 = v6 >> v4 | (char)((int16_t)v6 << (int16_t)(9 - v4));
    }
    int64_t v7 = function_3fc9b7(); // 0x3fc9ed
    *(char *)a1 = *(char *)&v1;
    bool v8; // 0x3fc9cb
    int64_t v9 = v8 ? -1 : 1; // 0x3fc9f4
    unsigned char v10 = *(char *)(a3 + 6); // 0x3fc9f5
    int32_t v11 = *(int32_t *)(v9 - 0x7fed339d + v1); // 0x3fc9fd
    int32_t v12 = ((int32_t)(256 * (int64_t)v10 | v7 + 0x4b2160ba & 0xffff00ff) ^ 0x59621d5a) - v11 & (int32_t)(v9 + a1); // 0x3fca03
    return (v12 + 184) % 256 | v12 & -256;
}

// Address range: 0x3fca0c - 0x3fca0f
int64_t function_3fca0c(void) {
    // 0x3fca0c
    int64_t result; // 0x3fca0c
    return result;
}

// Address range: 0x3fca30 - 0x3fca31
int64_t function_3fca30(int64_t a1) {
    // 0x3fca30
    int64_t result; // 0x3fca30
    return result;
}

// Address range: 0x3fca4e - 0x3fca4f
int64_t function_3fca4e(void) {
    // 0x3fca4e
    int64_t result; // 0x3fca4e
    return result;
}

// Address range: 0x3fcacf - 0x3fcad4
int64_t function_3fcacf(int64_t a1) {
    // 0x3fcacf
    int64_t result; // 0x3fcacf
    return result;
}

// Address range: 0x3fcad6 - 0x3fcad7
int64_t function_3fcad6(void) {
    // 0x3fcad6
    int64_t result; // 0x3fcad6
    return result;
}

// Address range: 0x3fcaf3 - 0x3fcb28
int64_t function_3fcaf3(int64_t a1, int64_t a2) {
    // 0x3fcaf3
    int64_t v1; // 0x3fcaf3
    bool v2; // 0x3fcaf3
    if (v2) {
        v1 = function_3fcad6();
    }
    // 0x3fcaf5
    *(int16_t *)a1 = (int16_t)a2;
    int32_t * v3 = (int32_t *)((int64_t)((int32_t)v1 >> 31) - 47); // 0x3fcb06
    *v3 = (int32_t)v2 - (int32_t)((v2 ? 0xfffffffe : 2) + a2) + *v3;
    int64_t v4; // 0x3fcaf3
    uint32_t v5 = *(int32_t *)&v4; // 0x3fcb22
    *(int32_t *)v4 = 0x200000 * v5 | v5 / 0x1000;
    return (int64_t)(*(int32_t *)-0x249b9f8ad8e3bf34 + 0x5fd1d85c ^ 0x7fbfc7e3);
}

// Address range: 0x3fcb28 - 0x3fcb2d
int64_t function_3fcb28(int64_t a1) {
    // 0x3fcb28
    int64_t result; // 0x3fcb28
    return result;
}

// Address range: 0x3fcb33 - 0x3fcb43
int64_t function_3fcb33(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3fcb33
    int64_t v1; // 0x3fcb33
    return v1 & -256 | (int64_t)*(char *)-0x65b22cc336c6c677;
}

// Address range: 0x3fcb55 - 0x3fcbcd
int64_t function_3fcb55(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3fcb55
    int64_t v1; // 0x3fcb55
    int64_t result = v1 & (256 * a3 | -0xff01); // 0x3fcb55
    __asm_fbld(*(float80_t *)(a3 + 0x24484be9 + result));
    __asm_out_134((int16_t)a3, (int32_t)result);
    uint32_t v2 = (int32_t)a4 % 32; // 0x3fcb69
    if (v2 != 0) {
        int32_t * v3 = (int32_t *)(2 * v1 + 79); // 0x3fcb69
        uint32_t v4 = *v3; // 0x3fcb69
        *v3 = v4 >> v2 | v4 << 32 - v2;
    }
    __asm_int(91);
    char * v5 = (char *)result; // 0x3fcb70
    char v6 = *v5; // 0x3fcb70
    char v7 = v6 - 1; // 0x3fcb70
    *v5 = v7;
    if (v6 != 0 || v7 == 0) {
        // 0x3fcbd3
        return result;
    }
    char v8 = *(char *)-0x1ca74b50 + (char)a3; // 0x3fcb63
    char * v9 = (char *)(v1 + 100); // 0x3fcb74
    char v10 = *v9; // 0x3fcb74
    char v11 = v10 + v8; // 0x3fcb74
    *v9 = v11;
    int64_t v12 = __asm_wait(a1, a2); // 0x3fcb77
    if (((v11 ^ v10) & (v11 ^ v8)) >= 0) {
        // 0x3fcbc8
        return unknown_1f409588();
    }
    if (v11 == 0) {
        int64_t v13 = __asm_int1(a5); // 0x3fcb92
        return (v13 + 32) % 256 | v13 & -256;
    }
    // 0x3fcb7f
    bool v14; // 0x3fcb55
    int64_t v15 = (v14 ? -1 : 1) + a2; // 0x3fcb7f
    int32_t v16 = (int32_t)v12 >> 31; // 0x3fcb81
    __asm_int3(a5, v15, v16);
    __asm_outsb((int16_t)v16, *(char *)v15);
    __asm_in(-22);
    return v1 & 0xffffffff;
}

// Address range: 0x3fcbd0 - 0x3fcbd3
int64_t function_3fcbd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3fcbd0
    int64_t v1; // 0x3fcbd0
    return v1 & 0xffffffff;
}

// Address range: 0x3fcbd4 - 0x3fcbd5
int64_t function_3fcbd4(int64_t a1, int64_t a2) {
    // 0x3fcbd4
    int64_t result; // 0x3fcbd4
    return result;
}

// Address range: 0x3fcc31 - 0x3fcc32
int64_t function_3fcc31(void) {
    // 0x3fcc31
    int64_t result; // 0x3fcc31
    return result;
}

// Address range: 0x3fcc42 - 0x3fcc49
int64_t function_3fcc42(int64_t a1, int64_t a2) {
    // 0x3fcc42
    int64_t result; // 0x3fcc42
    return result;
}

// Address range: 0x3fcc9d - 0x3fcd34
int64_t function_3fcc9d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3fcc9d
    int64_t v1; // 0x3fcc9d
    int64_t result = v1;
    int64_t v2 = a3;
    bool v3; // 0x3fcc9d
    if (v3) {
        // 0x3fcc9f
        *(char *)a2 = (char)a2 - (char)v1;
        return result;
    }
    int64_t v4 = 256 * result & 0xff00 ^ result; // 0x3fcd21
    char * v5 = (char *)v4; // 0x3fcd23
    *v5 = *v5 ^ (char)a3;
    *(int32_t *)v2 = *(int32_t *)&v2 & -31;
    return v4 + 0x7234b087 & 0xffffffff;
}

// Address range: 0x3fcd4e - 0x3fcdd9
int64_t function_3fcd4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t result = *(int32_t *)-0x1f198db908de9893; // 0x3fcd4e
    // 0x3fcd59
    return result;
    // 0x3fcdba
    *(int32_t *)a1 = __asm_insd((int16_t)a3 & -256 | 10);
    *(char *)0x1b98468f = *(char *)0x1b98468f + (char)result;
    uint32_t v1 = -34 * *(int32_t *)(a1 - 69); // 0x3fcdc6
    char * v2 = (char *)(a1 - 9); // 0x3fcdd4
    *v2 = *v2 + 10 + (char)(v1 > 0xa6858798);
    return v1 + 0x597a7867 & -256 | v1 + 160 & 254;
}

// Address range: 0x3fcdf2 - 0x3fcdf5
int64_t function_3fcdf2(void) {
    // 0x3fcdf2
    int64_t result; // 0x3fcdf2
    return result;
}

// Address range: 0x3fcdf6 - 0x3fcdf7
int64_t function_3fcdf6(void) {
    // 0x3fcdf6
    int64_t result; // 0x3fcdf6
    return result;
}

// Address range: 0x3fce61 - 0x3fce63
int64_t function_3fce61(void) {
    // 0x3fce61
    return function_3fcdf6();
}

// Address range: 0x3fce97 - 0x3fce9b
int64_t function_3fce97(int64_t a1, int64_t a2) {
    // 0x3fce97
    int64_t result; // 0x3fce97
    return result;
}

// Address range: 0x3fceac - 0x3fceae
int64_t function_3fceac(int64_t a1) {
    // 0x3fceac
    int64_t result; // 0x3fceac
    return result;
}

// Address range: 0x3fcef5 - 0x3fcefb
int64_t function_3fcef5(int64_t a1) {
    // 0x3fcef5
    int64_t v1; // 0x3fcef5
    return v1 + 0x4725f559 & 0xffffffff;
}

// Address range: 0x3fcf7a - 0x3fcf7b
int64_t function_3fcf7a(void) {
    // 0x3fcf7a
    int64_t result; // 0x3fcf7a
    return result;
}

// Address range: 0x3fcfa4 - 0x3fcffb
int64_t function_3fcfa4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3fcfa4
    int64_t v1; // 0x3fcfa4
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a4; // 0x3fcfa4
    bool v4; // 0x3fcfa4
    uint32_t v5 = (int32_t)v4 + (int32_t)v1; // 0x3fcfa4
    if (v5 <= v3) {
        // 0x3fcff0
        __asm_out(-88, (int32_t)a1);
        return a1 & 0xffffff00 | 11;
    }
    char * v6 = (char *)(a2 - 0x1345ac1e); // 0x3fcfac
    *v6 = *v6 & (char)((v3 - v5) / 256);
    __asm_out_136(92, (char)v2);
    int32_t v7 = *(int32_t *)(v2 + 107 + 4 * v2); // 0x3fcfb4
    if (llvm_ctpop_i8((char)(v7 & (int32_t)v1)) % 2 == 0) {
        function_3fcf7a();
    }
    // 0x3fcfba
    return function_ffffffffe19b2061((v4 ? -1 : 1) + a1);
}

// Address range: 0x3fd001 - 0x3fd009
int64_t function_3fd001(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 116); // 0x3fd001
    *v1 = *v1 + (int32_t)a4;
    return function_ffffffffda87951c();
}

// Address range: 0x3fd058 - 0x3fd07c
int64_t function_3fd058(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3fd058
    bool v1; // 0x3fd058
    bool v2 = v1;
    __asm_in_137(28);
    unsigned char v3 = (char)a4; // 0x3fd060
    unsigned char v4 = *(char *)0x27c33c06 + v3; // 0x3fd060
    bool v5 = v2 ? v4 + (char)v2 <= v3 : v4 < v3; // 0x3fd060
    int64_t v6; // 0x3fd058
    *(char *)a1 = (char)v6 - (char)(a4 / 256) + (char)v5;
    *(char *)0x72171533 = *(char *)0x72171533 + (char)v6;
    unknown_7c50aaa9();
    return v6 & 0xffffffff;
}

// Address range: 0x3fd09c - 0x3fd09f
int64_t function_3fd09c(void) {
    // 0x3fd09c
    int64_t result; // 0x3fd09c
    return result;
}

// Address range: 0x3fd0d4 - 0x3fd0d8
int64_t function_3fd0d4(void) {
    // 0x3fd0d4
    int64_t result; // 0x3fd0d4
    return result;
}

// Address range: 0x3fd0d8 - 0x3fd0de
int64_t function_3fd0d8(void) {
    // 0x3fd0d8
    int64_t result; // 0x3fd0d8
    return result;
}

// Address range: 0x3fd117 - 0x3fd119
int64_t function_3fd117(int64_t a1) {
    // 0x3fd117
    int64_t result; // 0x3fd117
    return result;
}

// Address range: 0x3fd1d0 - 0x3fd1d1
int64_t function_3fd1d0(int64_t a1) {
    // 0x3fd1d0
    int64_t result; // 0x3fd1d0
    return result;
}

// Address range: 0x3fd21b - 0x3fd223
int64_t function_3fd21b(void) {
    // 0x3fd21b
    int64_t v1; // 0x3fd21b
    bool v2; // 0x3fd21b
    return v1 - (v2 ? 0x13928fd2 : 0x13928fd1) & 0xffffffff;
}

// Address range: 0x3fd23d - 0x3fd247
int64_t function_3fd23d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(2 * a2 + 0x13a36750); // 0x3fd23d
    *v1 = *v1 ^ (char)a3;
    int64_t result; // 0x3fd23d
    return result;
}

// Address range: 0x3fd252 - 0x3fd253
int64_t function_3fd252(void) {
    // 0x3fd252
    int64_t result; // 0x3fd252
    return result;
}

// Address range: 0x3fd26e - 0x3fd276
int64_t function_3fd26e(void) {
    // 0x3fd26e
    return function_7453e3db();
}

// Address range: 0x3fd28f - 0x3fd29d
int64_t function_3fd28f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3fd28f
    return function_615b7c04();
}
