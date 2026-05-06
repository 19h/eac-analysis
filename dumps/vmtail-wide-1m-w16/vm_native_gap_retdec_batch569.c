/*
 * Targeted RetDec C for native executable gap queue batch 569.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x112dbf-0x112fbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x112fbf-0x1131bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1131bf-0x1133bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1133bf-0x1135bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x47cc30-0x47ce30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47ce30-0x47d030 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47d230-0x47d430 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47d530-0x47d630 rank=- name=- kind=- bytes=- uncovered=-
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
typedef struct { uint8_t bytes[32]; } int256_t;
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
int64_t unknown_b6ccb9(void);
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
int128_t __asm_vdivpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pcmpgtb(int128_t left, int128_t right);
int256_t __asm_vpcmpeqw(int256_t left, int256_t right);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psadbw(int128_t left, int128_t right);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
int128_t __asm_pavgw(int128_t left, int128_t right);
int128_t __asm_pmaxub(int128_t left, int128_t right);
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

int64_t function_112dbf(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_112ec3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_112ee3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_112f05(void);
int64_t function_112f2d(void);
int64_t function_112f34(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_112f4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_112f5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_112f7d(void);
int64_t function_11308a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11310b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_113142(int64_t a1, int64_t a2, int64_t a3);
int64_t function_113156(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_113220(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1132b3(void);
int64_t function_1132d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1132dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_113433(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1135ad(void);
int64_t function_47cc30(void);
int64_t function_47cc58(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47cc74(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47ccd2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47ccf8(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_47cd95(void);
int64_t function_47ce10(void);
int64_t function_47ce19(int64_t a1);
int64_t function_47ce31(void);
int64_t function_47ce62(int64_t a1);
int64_t function_47ceb5(int64_t a1);
int64_t function_47ceba(void);
int64_t function_47ceea(void);
int64_t function_47cf40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_47cf6e(void);
int64_t function_47d230(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47d261(void);
int64_t function_47d285(void);
int64_t function_47d296(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47d2b8(void);
int64_t function_47d2bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_47d323(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_47d4b2();
int64_t function_47d530(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47d549(void);
int64_t function_47d5d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_576f90c4();
int64_t function_6dd7d59b();
int64_t function_cf3c7();
int64_t function_ffffffffd8771138();
int64_t unknown_12af329b();
int64_t unknown_1feb2d11();
int64_t unknown_2d05dec();
int64_t unknown_6887e498();
int64_t unknown_6aafd484();
int64_t unknown_ffffffff80a1123a();
int64_t unknown_ffffffff87a636bb();
int64_t unknown_ffffffff88dad3d5();
int64_t unknown_ffffffff9a2510c6();
int64_t unknown_ffffffff9e1230ec();
int64_t unknown_ffffffffca743bdc();
int64_t unknown_ffffffffcb15ea48();
int64_t unknown_ffffffffd009ab7b();
int64_t unknown_ffffffffef6aff86();

// Address range: 0x112dbf - 0x112e51
int64_t function_112dbf(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x112dbf
    int64_t v1; // 0x112dbf
    int32_t * v2 = (int32_t *)(a4 + 32 + 2 * v1); // 0x112dc2
    *v2 = *v2 + (int32_t)v1;
    int64_t v3 = a4 & -256 | (int64_t)(*(char *)(a2 - 11) | (char)a4); // 0x112dc6
    bool v4; // 0x112dbf
    int64_t v5 = (v4 ? -1 : 1) + a1; // 0x112dc9
    unknown_ffffffffef6aff86(v5);
    char v6 = v1 / 256; // 0x112dd0
    char v7 = *(char *)-0x7be5cb29 + v6; // 0x112dd0
    *(char *)-0x7be5cb29 = v7;
    if (v7 != 0) {
        int32_t * v8 = (int32_t *)(a2 + 0x1e8cf0a); // 0x112e45
        *v8 = *v8 | 0x10141742;
        return v3 & 0xffffffff;
    }
    char * v9 = (char *)v3; // 0x112dd8
    *v9 = *v9 + (char)(a4 / 256);
    int32_t v10 = __asm_in((int16_t)a3); // 0x112ddc
    *(char *)v5 = v6;
    return v10 - 0x63e77d91;
}

// Address range: 0x112ec3 - 0x112ee2
int64_t function_112ec3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x112ec3
    int64_t v1; // 0x112ec3
    int32_t * v2 = (int32_t *)(v1 + 0x70009b58); // 0x112ec3
    *v2 = *v2 + (int32_t)a2;
    int32_t * v3 = (int32_t *)(a3 - 0x5e9147aa); // 0x112ece
    uint32_t v4 = *v3; // 0x112ece
    uint32_t v5 = v4 + (int32_t)v1; // 0x112ece
    *v3 = v5;
    *(char *)a1 = (char)v1 + 48;
    bool v6; // 0x112ec3
    int64_t result = unknown_ffffffffca743bdc((v6 ? -1 : 1) + a1); // 0x112ed6
    int32_t * v7 = (int32_t *)result; // 0x112edc
    *v7 = (int32_t)result + (int32_t)(v5 < v4) + *v7;
    char * v8 = (char *)result; // 0x112ede
    *v8 = *v8 - 30;
    return result;
}

// Address range: 0x112ee3 - 0x112eec
int64_t function_112ee3(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 + 1); // 0x112ee3
    int64_t v2; // 0x112ee3
    *v1 = *v1 + (char)((uint64_t)v2 / 256);
    return unknown_ffffffff9e1230ec(a1, a2, a3);
}

// Address range: 0x112f05 - 0x112f08
int64_t function_112f05(void) {
    // 0x112f05
    int64_t result; // 0x112f05
    return result;
}

// Address range: 0x112f2d - 0x112f2e
int64_t function_112f2d(void) {
    // 0x112f2d
    int64_t result; // 0x112f2d
    return result;
}

// Address range: 0x112f34 - 0x112f4e
int64_t function_112f34(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x112f34
    int64_t v1; // 0x112f34
    int32_t * v2 = (int32_t *)(v1 - 0x65e80fcd + 4 * v1); // 0x112f34
    *v2 = *v2 + (int32_t)v1;
    __asm_in_133(118);
    __asm_in_134(7);
    int64_t result = unknown_ffffffffcb15ea48(); // 0x112f42
    char * v3 = (char *)(a3 + a1); // 0x112f47
    *v3 = *v3 + (char)result;
    return result;
}

// Address range: 0x112f4f - 0x112f5d
int64_t function_112f4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 - 24); // 0x112f4f
    int64_t v2; // 0x112f4f
    *v1 = *v1 - (char)v2;
    int32_t * v3 = (int32_t *)(a1 + 68); // 0x112f52
    *v3 = *v3 + (int32_t)v2;
    char * v4 = (char *)(a3 & -0xff01 | (int64_t)&g2); // 0x112f58
    *v4 = *v4 - (char)v2;
    return v2 & 0xffffffff ^ 0xffffffff;
}

// Address range: 0x112f5d - 0x112f67
int64_t function_112f5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 8); // 0x112f5f
    int64_t result; // 0x112f5d
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x112f7d - 0x112f85
int64_t function_112f7d(void) {
    // 0x112f7d
    __asm_int1();
    unknown_6aafd484();
    return function_112f2d();
}

// Address range: 0x11308a - 0x1130cf
int64_t function_11308a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = unknown_6887e498(); // 0x113092
    *(char *)a1 = ((char)v2 | (char)&g1) + (char)a1;
    int64_t v3; // 0x11308a
    *(int32_t *)a4 = *(int32_t *)&v3 + (int32_t)a4;
    unknown_ffffffff87a636bb();
    int64_t result = unknown_ffffffff9a2510c6(); // 0x1130c0
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)result;
    return result;
}

// Address range: 0x11310b - 0x11312a
int64_t function_11310b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x11310b
    unknown_1feb2d11();
    int32_t * v1 = (int32_t *)a5; // 0x113111
    bool v2; // 0x11310b
    *v1 = (int32_t)v2 + (int32_t)a5 + *v1;
    char * v3 = (char *)a5; // 0x113113
    *v3 = *v3 + 84;
    *(char *)a3 = 0;
    int64_t v4; // 0x11310b
    *(int32_t *)a1 = *(int32_t *)&v4;
    int64_t result = (a4 / 256 + a5) % 256 | a5 & -256; // 0x11311a
    int32_t * v5 = (int32_t *)(2 * result); // 0x11311c
    uint32_t v6 = *v5; // 0x11311c
    int64_t v7; // 0x11310b
    uint32_t v8 = v6 + (int32_t)v7; // 0x11311c
    *v5 = v8;
    char * v9 = (char *)(v7 - 118); // 0x113121
    *v9 = *v9 + (char)v7 + (char)(v8 < v6);
    return result;
}

// Address range: 0x113142 - 0x11314c
int64_t function_113142(int64_t a1, int64_t a2, int64_t a3) {
    // 0x113142
    int64_t v1; // 0x113142
    *(char *)a3 = (char)v1 + (char)a3;
    bool v2; // 0x113142
    return v1 - (v2 ? 0x89e7e3b5 : 0x89e7e3b4) & 0xffffffff;
}

// Address range: 0x113156 - 0x11321f
int64_t function_113156(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 - 0x41f9a7cf); // 0x113158
    int64_t v2; // 0x113156
    *v1 = *v1 + (int32_t)v2;
    bool v3; // 0x113156
    int64_t v4 = v3 ? -4 : 4; // 0x11315e
    int64_t v5 = v4 + a1; // 0x11315e
    int64_t v6 = v4 + a2; // 0x11315e
    int64_t v7 = v2 & 0xffffffff; // 0x11315f
    __asm_iretd(v5, v6, v7);
    int32_t * v8 = (int32_t *)(v2 + 35 + v7); // 0x113161
    int32_t v9 = v6; // 0x113161
    *v8 = *v8 + v9;
    if (v9 != -(int32_t)v5) {
        // 0x1131bc
        *(char *)(v7 - 0x51fe17aa) = (char)v2;
        return unknown_ffffffff88dad3d5();
    }
    int64_t v10 = unknown_ffffffffd009ab7b(); // 0x113175
    int64_t v11 = v5 & 0xffffffff; // 0x11317c
    int32_t v12 = *(int32_t *)0x764eee9c; // 0x11317d
    int64_t v13; // 0x113156
    int64_t v14 = *(int64_t *)(int64_t)(v12 & (int32_t)(int64_t)&v13); // 0x113184
    int32_t * v15 = (int32_t *)v11; // 0x113187
    *v15 = *v15 + (int32_t)v14;
    char * v16 = (char *)((v10 & 0xffffffff ^ 226) - 0x655958f9); // 0x11318f
    *v16 = *v16 - 100;
    uint64_t result = unknown_12af329b(v11, v14); // 0x113195
    char * v17 = (char *)(result - 124); // 0x11319a
    *v17 = *v17 + (char)(result / 256);
    return result;
}

// Address range: 0x113220 - 0x113288
int64_t function_113220(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x113224
    int64_t v1; // 0x113220
    return (int64_t)&v1;
}

// Address range: 0x1132b3 - 0x1132b4
int64_t function_1132b3(void) {
    // 0x1132b3
    int64_t result; // 0x1132b3
    return result;
}

// Address range: 0x1132d2 - 0x1132d9
int64_t function_1132d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1132d2
    int64_t v1; // 0x1132d2
    int64_t result = v1;
    bool v2; // 0x1132d2
    *(char *)result = (char)result + (char)a4 + (char)v2;
    *(int32_t *)a1 = (int32_t)a3;
    return result;
}

// Address range: 0x1132dd - 0x113433
int64_t function_1132dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_2d05dec(); // 0x1132e6
    char * v2 = (char *)(v1 + 0x37689c00); // 0x1132eb
    *v2 = *v2 + (char)v1;
    int64_t v3 = v1 & 0xffffffff; // 0x1132f1
    int64_t * v4 = (int64_t *)v3; // 0x1132f2
    int64_t * v5 = (int64_t *)(v3 + 8); // 0x113305
    *v5 = 169;
    int64_t v6 = v3 - 8; // 0x113313
    int64_t * v7 = (int64_t *)v6; // 0x11331a
    *v4 = 0x10e9e2;
    int64_t v8 = v3 - 16; // 0x113332
    *v7 = v6;
    *(int64_t *)v8 = 0x5d23652d;
    int64_t v9 = v3 - 24; // 0x113350
    int64_t * v10 = (int64_t *)v9; // 0x113350
    int64_t * v11 = (int64_t *)(v3 - 32); // 0x113354
    *v10 = *v4;
    *v11 = v8;
    int64_t v12 = *v5; // 0x113370
    *v11 = v12;
    int64_t * v13 = (int64_t *)(v3 - 40); // 0x113378
    *v13 = a2;
    int64_t * v14 = (int64_t *)(v3 - 48); // 0x113380
    *v14 = a1;
    *v13 = v9;
    int64_t v15 = *v7; // 0x113397
    *v11 = v15;
    *v13 = v12;
    int64_t v16; // 0x1132dd
    *v14 = (int64_t)(*(int32_t *)(v16 - 0x15e7877e) | (int32_t)v16);
    *v13 = 0x7745a38f;
    *(int64_t *)(v3 - 56) = *v13;
    *v10 = *v13;
    *v13 = v15;
    *v4 = *v11;
    *v11 = *v10;
    *v13 = v9;
    int64_t v17 = *v10; // 0x11341c
    *v11 = v17;
    *v13 = v17;
    return function_cf3c7(a1, *v13);
}

// Address range: 0x113433 - 0x113583
int64_t function_113433(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x113433
    int64_t v1; // bp-32, 0x113433
    int64_t v2 = (int64_t)&v1; // 0x1134a4
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x1134ac
    int64_t * v4 = (int64_t *)v3; // 0x1134ad
    *(int64_t *)(v2 - 16) = v3;
    *(int64_t *)(v2 - 24) = *v4;
    int64_t v5 = *v4; // 0x1134d3
    int64_t * v6 = (int64_t *)v5; // 0x1134d7
    int64_t v7 = *(int64_t *)(v5 + 32); // 0x1134db
    int64_t * v8 = (int64_t *)(v5 - 8); // 0x1134db
    *v8 = v7;
    int64_t * v9 = (int64_t *)(v5 - 16); // 0x1134df
    *v9 = v7;
    int64_t * v10 = (int64_t *)(v5 + 16); // 0x1134ee
    int64_t v11 = *v10; // 0x1134ee
    *v8 = v11;
    int64_t * v12 = (int64_t *)(v5 - 24); // 0x11351e
    *v6 = v7;
    *v12 = 0x1cbd8db;
    *(int64_t *)(v5 - 32) = v11;
    *v10 = *v9;
    int64_t v13 = *v8; // 0x113548
    *v9 = v13;
    *v12 = v13;
    *v8 = *v6;
    *v9 = v5;
    return function_cf3c7(a1, a2);
}

// Address range: 0x1135ad - 0x1135ae
int64_t function_1135ad(void) {
    // 0x1135ad
    int64_t result; // 0x1135ad
    return result;
}

// Address range: 0x47cc30 - 0x47cc31
int64_t function_47cc30(void) {
    // 0x47cc30
    int64_t result; // 0x47cc30
    return result;
}

// Address range: 0x47cc58 - 0x47cc5e
int64_t function_47cc58(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47cc58
    return function_6dd7d59b();
}

// Address range: 0x47cc74 - 0x47cc82
int64_t function_47cc74(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47cc74
    int64_t v1; // 0x47cc74
    int64_t result = v1;
    *(int32_t *)a2 = (int32_t)(v1 & a1);
    *(char *)(result - 110) = (char)result;
    return result;
}

// Address range: 0x47ccd2 - 0x47ccdf
int64_t function_47ccd2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47ccd2
    int64_t v1; // 0x47ccd2
    return v1 & 0xffffffff;
}

// Address range: 0x47ccf8 - 0x47cd7c
int64_t function_47ccf8(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x47ccf8
    int64_t v1; // 0x47ccf8
    int64_t result = v1 & 0xffffffff; // 0x47cd76
    if ((*(char *)(v1 + 0x47e83c84) & (char)(a3 / 256)) >= 0) {
        // 0x47cd79
        return result;
    }
    uint64_t v2 = result | 0x100000000 * a3; // 0x47cd2c
    uint64_t v3 = (int64_t)*(int32_t *)(a1 - 104); // 0x47cd2c
    uint64_t v4 = v2 / v3; // 0x47cd2c
    uint64_t v5 = v4 + 154; // 0x47cd2f
    int64_t v6 = v4 & 0xffffff00; // 0x47cd2f
    if ((char)v4 < 103) {
        // 0x47cd05
        return v5 % 256 | v6;
    }
    int64_t v7 = *(char *)(v2 % v3) > -1 - (char)(a4 / 256) ? 218 : 217; // 0x47cd35
    return (v5 - v7) % 256 | v6;
}

// Address range: 0x47cd95 - 0x47cd9d
int64_t function_47cd95(void) {
    // 0x47cd95
    int64_t result; // 0x47cd95
    return result;
}

// Address range: 0x47ce10 - 0x47ce19
int64_t function_47ce10(void) {
    // 0x47ce10
    int64_t result; // 0x47ce10
    char * v1 = (char *)(result + 0x211d74c1); // 0x47ce10
    *v1 = *v1 & (char)(result / 256);
    return result;
}

// Address range: 0x47ce19 - 0x47ce1d
int64_t function_47ce19(int64_t a1) {
    // 0x47ce19
    int64_t result; // 0x47ce19
    return result;
}

// Address range: 0x47ce31 - 0x47ce32
int64_t function_47ce31(void) {
    // 0x47ce31
    int64_t result; // 0x47ce31
    return result;
}

// Address range: 0x47ce62 - 0x47ce65
int64_t function_47ce62(int64_t a1) {
    // 0x47ce62
    int64_t result; // 0x47ce62
    return result;
}

// Address range: 0x47ceb5 - 0x47ceb6
int64_t function_47ceb5(int64_t a1) {
    // 0x47ceb5
    int64_t result; // 0x47ceb5
    return result;
}

// Address range: 0x47ceba - 0x47cec5
int64_t function_47ceba(void) {
    // 0x47ceba
    return function_ffffffffd8771138();
}

// Address range: 0x47ceea - 0x47ceed
int64_t function_47ceea(void) {
    // 0x47ceea
    int64_t result; // 0x47ceea
    return result;
}

// Address range: 0x47cf40 - 0x47cf5d
int64_t function_47cf40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x47cf40
    int64_t v1; // 0x47cf40
    *(int32_t *)a1 = (int32_t)v1;
    uint32_t v2 = *(int32_t *)-0x4dcd7a3b; // 0x47cf41
    *(int32_t *)-0x4dcd7a3b = v2 / 2;
    int16_t v3 = a3; // 0x47cf47
    bool v4; // 0x47cf40
    *(int32_t *)((v4 ? -4 : 4) + a1) = __asm_insd(v3);
    int64_t v5; // 0x47cf40
    uint32_t v6 = *(int32_t *)&v5; // 0x47cf48
    *(int32_t *)v5 = v6 / 128 | 0x2000000 * (int32_t)(v2 % 2 != 0) | 0x4000000 * v6;
    *(int32_t *)a7 = __asm_insd(v3);
    return v5 & -256 | (int64_t)*(char *)0x5e9dc73bbc251154;
}

// Address range: 0x47cf6e - 0x47cf73
int64_t function_47cf6e(void) {
    // 0x47cf6e
    return function_576f90c4();
}

// Address range: 0x47d230 - 0x47d23b
int64_t function_47d230(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47d230
    return __asm_int3();
}

// Address range: 0x47d261 - 0x47d262
int64_t function_47d261(void) {
    // 0x47d261
    int64_t result; // 0x47d261
    return result;
}

// Address range: 0x47d285 - 0x47d286
int64_t function_47d285(void) {
    // 0x47d285
    int64_t result; // 0x47d285
    return result;
}

// Address range: 0x47d296 - 0x47d2a6
int64_t function_47d296(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47d296
    int64_t v1; // 0x47d296
    int64_t v2 = v1;
    int64_t v3 = a1;
    unsigned char v4 = (char)a4 % 32; // 0x47d296
    int32_t v5 = a1;
    int32_t v6 = v5; // 0x47d296
    int64_t v7 = a1; // 0x47d296
    int32_t v8 = v5; // 0x47d296
    if (v4 != 0) {
        bool v9; // 0x47d296
        *(char *)v2 = (char)v9 << 8 - v4 | (char)v2 >> v4 | (char)((int16_t)v2 % 256 << (int16_t)(9 - v4));
        v7 = v3;
        v6 = v7;
        v8 = *(int32_t *)&v3;
    }
    int32_t v10 = *(int32_t *)(a4 + 77); // 0x47d298
    *(int32_t *)v7 = v8 | v6;
    *(int64_t *)((int64_t)(v10 ^ (int32_t)v1) - 8) = v3;
    return function_47d261();
}

// Address range: 0x47d2b8 - 0x47d2bb
int64_t function_47d2b8(void) {
    // 0x47d2b8
    int64_t result; // 0x47d2b8
    return result;
}

// Address range: 0x47d2bb - 0x47d322
int64_t function_47d2bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    int16_t v2 = a3; // 0x47d2bd
    int64_t v3; // 0x47d2bb
    __asm_out_135(v2, (int32_t)v3);
    char v4 = v3; // 0x47d2be
    __asm_out(v2, v4);
    char v5 = *(char *)(a6 - 0x1f99dacd); // 0x47d2c0
    int64_t v6 = v3 & -256; // 0x47d2c0
    bool v7; // 0x47d2bb
    char * v8 = (char *)((v6 | (int64_t)((char)v7 + v4 + v5)) + 97); // 0x47d2c6
    unsigned char v9 = *v8; // 0x47d2c6
    *v8 = v9 / 2;
    int64_t result = v6 | (int64_t)*(char *)0x4c8d473f7c2ed02c; // 0x47d2d3
    if (v9 % 2 != 0 || v9 < 2) {
        result = function_47d285();
    }
    char v10 = *(char *)&v1; // 0x47d2d5
    v1 += (v7 ? -1 : 1);
    if (v10 - *(char *)a6 < 0) {
        // 0x47d2d8
        return result;
    }
    int32_t * v11 = (int32_t *)result; // 0x47d307
    *v11 = *v11 + (int32_t)v3;
    char * v12 = (char *)(v3 + 36); // 0x47d309
    char v13 = *v12 | (char)a5; // 0x47d309
    *v12 = v13;
    __asm_in(v2);
    int64_t result2 = __asm_hlt(); // 0x47d30f
    if (v13 >= 0) {
        // 0x47d2d8
        return result2;
    }
    // 0x47d311
    int64_t v14; // bp+32, 0x47d2bb
    return (int64_t)&v14;
}

// Address range: 0x47d323 - 0x47d42e
int64_t function_47d323(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a3;
    int64_t result; // 0x47d323
    int32_t * v2 = (int32_t *)(result - 55); // 0x47d323
    uint32_t v3 = *v2; // 0x47d323
    bool v4; // 0x47d323
    int32_t v5 = v4; // 0x47d323
    uint32_t v6 = v5 + (int32_t)result; // 0x47d323
    int32_t v7 = v3 - v6; // 0x47d323
    bool v8 = v4 ? v6 != -1 | v3 < v7 - v5 : v3 < v6; // 0x47d323
    *v2 = v7;
    unsigned char v9 = (char)a5; // 0x47d32b
    char v10 = !v8; // 0x47d32b
    unsigned char v11 = v10 + (char)(a4 / 256); // 0x47d32b
    char v12 = v9 - v11; // 0x47d32b
    char v13 = !v8 ? v11 != -1 | v12 - v10 > v9 : v11 > v9; // 0x47d3a5
    char v14 = *(char *)&v1 + v13; // 0x47d3a5
    unsigned char v15 = v12 - v14; // 0x47d3a5
    if (((v15 - v13 ^ v12) & (v14 ^ v12)) < 0) {
        // 0x47d3a1
        return result;
    }
    int64_t v16 = a5 & -256 | (int64_t)v15; // 0x47d3a5
    int64_t v17 = v4 ? -4 : 4; // 0x47d3aa
    char * v18 = (char *)(v16 + 0x5f66b6bb); // 0x47d3ab
    unsigned char v19 = *v18; // 0x47d3ab
    unsigned char v20 = (char)(result / 256); // 0x47d3ab
    *v18 = v19 - v20;
    if (v19 < v20) {
        // 0x47d3b3
        return (int64_t)*(int32_t *)(v17 + a2);
    }
    int32_t * v21 = (int32_t *)(v1 - 3); // 0x47d41f
    *v21 = *v21 + (int32_t)result;
    char * v22 = (char *)(a1 + 35 + v17); // 0x47d422
    *v22 = *v22 + (char)(v1 / 256);
    return v16 & 0xffffffff;
}

// Address range: 0x47d530 - 0x47d532
int64_t function_47d530(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47d530
    int64_t result; // 0x47d530
    bool v1; // 0x47d530
    if (a4 != 1 == v1) {
        result = function_47d4b2(a1, a2, a3, a4);
    }
    // 0x47d532
    return result;
}

// Address range: 0x47d549 - 0x47d54c
int64_t function_47d549(void) {
    // 0x47d549
    int64_t result; // 0x47d549
    return result;
}

// Address range: 0x47d5d7 - 0x47d5f8
int64_t function_47d5d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x47d5d7
    int64_t v1; // 0x47d5d7
    uint32_t v2 = (int32_t)v1;
    bool v3; // 0x47d5d7
    int32_t v4 = v3; // 0x47d5d7
    uint32_t v5 = v4 + v2; // 0x47d5d7
    uint32_t v6 = (int32_t)v3; // 0x47d5d7
    char * v7 = (char *)(a3 + 90); // 0x47d5d9
    *v7 = *v7 - (v3 ? v5 != -1 | v6 - v4 > v2 : v5 > v2 ? 48 : 47);
    char * v8 = (char *)(4 * (int64_t)v6 + 0x2779fb53); // 0x47d5dd
    *v8 = *v8 ^ (char)v1;
    int64_t v9 = unknown_ffffffff80a1123a(); // 0x47d5e7
    uint32_t v10 = (int32_t)a4 % 32; // 0x47d5ed
    int64_t result = v9; // 0x47d5ed
    if (v10 != 0) {
        uint32_t v11 = (int32_t)v9; // 0x47d5ed
        result = v11 >> v10 | v11 << 32 - v10;
    }
    return result;
}
