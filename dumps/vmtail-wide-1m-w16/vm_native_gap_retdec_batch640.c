/*
 * Targeted RetDec C for native executable gap queue batch 640.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2db70e-0x2db90e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2db90e-0x2dbb0e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2dbb0e-0x2dbd0e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2dbf0e-0x2dc10e rank=- name=- kind=- bytes=- uncovered=-
 *   0x380930-0x380b30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x380b30-0x380d30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x380d30-0x380f30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x381130-0x381330 rank=- name=- kind=- bytes=- uncovered=-
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
void __asm_clts(void);
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
int128_t __asm_vpunpckhdq(int128_t left, int128_t right);
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

int64_t function_2db70e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2db748(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2db756(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2db759(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2db794(void);
int64_t function_2db7c2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_2db859(int64_t a1, int64_t a2);
int64_t function_2db86d(void);
int64_t function_2db88a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2db8d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2db8f9(int64_t a1, int64_t a2);
int64_t function_2db90e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2db96c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2db98b(int64_t a1);
int64_t function_2db98f(void);
int64_t function_2db99a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2dbae5(int64_t a1);
int64_t function_2dbb39(int64_t a1);
int64_t function_2dbb44(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2dbbee(int64_t a1);
int64_t function_2dbbf7(int64_t a1);
int64_t function_2dbbfc(int64_t a1, int64_t a2);
int64_t function_2dbc12(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_2dbc90(int64_t a1);
int64_t function_2dbcb4(void);
int64_t function_2dbcbb(int64_t a1);
int64_t function_2dbcbf(int64_t a1, int64_t a2);
int64_t function_2dbccd(void);
int64_t function_2dbf0e(int64_t a1, uint64_t a2, int64_t a3, int64_t a4);
int64_t function_2dbf81(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2dbfdb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2dc085(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2dc0cb(void);
int64_t function_380930(void);
int64_t function_380981(void);
int64_t function_38098b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_380a20(int64_t a1, int64_t a2);
int64_t function_380a2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_380a6f(void);
int64_t function_380aa2(void);
int64_t function_380ab8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_380b1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_380c05(int64_t a1, int64_t a2, int64_t a3);
int64_t function_380c45(void);
int64_t function_380c72(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_380c99(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_380cea(void);
int64_t function_380d05(int64_t a1, int64_t a2, int64_t a3);
int64_t function_380d0f(void);
int64_t function_380d2b(int64_t a1);
int64_t function_380d2d(int64_t a1);
int64_t function_380d51(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_380e4d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_380ea3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_3810d0();
int64_t function_3810f2();
int64_t function_381112();
int64_t function_381130(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3811ad(int64_t a1);
int64_t function_381229(void);
int64_t function_381259(int64_t a1);
int64_t function_381280(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3812cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3cc80e39();
int64_t function_5a80cd6();
int64_t function_ffffffffe33bd9eb();
int64_t function_ffffffffe85c0680();
int64_t unknown_1aeafb14();
int64_t unknown_2e26f9d6();
int64_t unknown_3195970d();
int64_t unknown_33e09810();
int64_t unknown_38bfd0d7();
int64_t unknown_39a5cc53();
int64_t unknown_3a3436e1();
int64_t unknown_3a9b4898();
int64_t unknown_4642aa35();
int64_t unknown_522ce8bf();
int64_t unknown_56ad9090();
int64_t unknown_615d8c46();
int64_t unknown_62201d1d();
int64_t unknown_70eea172();
int64_t unknown_ffffffff8a2cec89();
int64_t unknown_ffffffff939f0e1f();
int64_t unknown_ffffffff98438737();
int64_t unknown_ffffffffabe3042e();
int64_t unknown_ffffffffb47539cc();
int64_t unknown_ffffffffc228fff7();
int64_t unknown_ffffffffc8385b5c();
int64_t unknown_ffffffffc8a2f717();
int64_t unknown_ffffffffca5e5c48();
int64_t unknown_ffffffffd0bcd65c();
int64_t unknown_ffffffffdb32b3cc();
int64_t unknown_ffffffffdf27153d();
int64_t unknown_fffffffffe384043();

// Address range: 0x2db70e - 0x2db747
int64_t function_2db70e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2db70e
    return unknown_ffffffffca5e5c48();
}

// Address range: 0x2db748 - 0x2db756
int64_t function_2db748(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2db748
    int64_t v1; // 0x2db748
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v1 - 39); // 0x2db752
    *v3 = *v3 + (int32_t)a3;
    bool v4; // 0x2db748
    return v2 & -256 | v2 - (v4 ? 101 : 100) & 233 | 22;
}

// Address range: 0x2db756 - 0x2db759
int64_t function_2db756(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2db756
    int64_t result; // 0x2db756
    *(char *)a1 = (char)result + (char)a4;
    return result;
}

// Address range: 0x2db759 - 0x2db76e
int64_t function_2db759(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2db759
    int64_t v1; // 0x2db759
    uint64_t v2 = v1;
    char v3 = *(char *)(v1 - 53 + 4 * v1); // 0x2db759
    int32_t * v4 = (int32_t *)(a4 - 10); // 0x2db75f
    *v4 = *v4 + (int32_t)a4;
    *(char *)(a3 - 0x408e033f) = (char)a3;
    return (v2 + a4 / 256) % 256 | v2 & -0x10000 | 256 * (int64_t)(v3 ^ (char)(v2 / 256));
}

// Address range: 0x2db794 - 0x2db796
int64_t function_2db794(void) {
    // 0x2db794
    int64_t result; // 0x2db794
    return result;
}

// Address range: 0x2db7c2 - 0x2db856
int64_t function_2db7c2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x2db7c2
    int64_t v1; // 0x2db7c2
    uint64_t v2 = v1;
    bool v3; // 0x2db7c2
    if (v3) {
        // 0x2db828
        *(int32_t *)a1 = (int32_t)a2;
        int64_t v4 = v3 ? -4 : 4; // 0x2db82d
        int64_t v5 = v4 + a2; // 0x2db82d
        int64_t result; // 0x2db7c2
        int64_t v6 = result;
        *(char *)v6 = *(char *)&result + (char)v6;
        int64_t v7 = result;
        *(int32_t *)v7 = *(int32_t *)&result & (int32_t)v7;
        char * v8 = (char *)(a4 + 28 + result); // 0x2db834
        *v8 = *v8 | -41;
        __asm_int3(v4 + a1, v5, 256 * a4 + a3 & 0xff00 | a3 & -0xff01);
        int64_t v9 = unknown_fffffffffe384043(); // 0x2db83d
        result = (v9 + 139) % 256 | v9 & -256;
        char * v10 = (char *)(v5 + 0xf615d1); // 0x2db847
        *v10 = *v10 + (char)(a4 / 256);
        return result;
    }
    // 0x2db7c4
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x2db859 - 0x2db86d
int64_t function_2db859(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 - 0x317b3e6b); // 0x2db866
    int64_t v2; // 0x2db859
    *v1 = *v1 + (int32_t)v2;
    return v2 + 0x3d005315 & 0xffffffff;
}

// Address range: 0x2db86d - 0x2db870
int64_t function_2db86d(void) {
    // 0x2db86d
    int64_t v1; // 0x2db86d
    return function_2db8d9(v1, v1, v1, v1);
}

// Address range: 0x2db88a - 0x2db8b7
int64_t function_2db88a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2db88a
    int64_t v1; // 0x2db88a
    *(char *)0x274ac698 = *(char *)0x274ac698 + (char)(v1 / 256);
    int64_t v2 = v1 + 0xe8d8f104; // 0x2db89b
    int32_t * v3 = (int32_t *)((v2 & 0xffffffff) + 18); // 0x2db8a0
    *v3 = *v3 + (int32_t)v2;
    uint64_t v4 = v2 + v1; // 0x2db8ab
    int64_t v5; // 0x2db88a
    *(int32_t *)-0x27389c4c = *(int32_t *)-0x27389c4c + 44 * *(int32_t *)&v5;
    char v6 = *(char *)(v4 & 0xffffffff); // 0x2db8b3
    return 256 * (int64_t)(v6 | (char)(v4 / 256)) | v4 & 0xffff00ff;
}

// Address range: 0x2db8d9 - 0x2db8f9
int64_t function_2db8d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2db8d9
    int64_t v1; // 0x2db8d9
    uint64_t v2 = v1;
    *(char *)(a2 - 0x7cfe1788) = (char)(v2 / 256);
    uint32_t v3 = (int32_t)a4; // 0x2db8df
    int64_t v4; // 0x2db8d9
    uint32_t v5 = *(int32_t *)&v4;
    uint32_t v6 = v5 + v3; // 0x2db8df
    uint32_t v7 = v5 - 25 + (int32_t)(v6 < v3); // 0x2db8e1
    int32_t * v8 = (int32_t *)a1; // 0x2db8e1
    *v8 = v7;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)v1;
    int64_t v9; // 0x2db8d9
    *v8 = *(int32_t *)&v9;
    bool v10; // 0x2db8d9
    int64_t v11 = v10 ? -4 : 4; // 0x2db8e8
    int64_t v12 = v11 + a1; // 0x2db8e8
    int64_t v13 = v11 + a2; // 0x2db8e8
    v4 = v12;
    v9 = v13;
    unsigned char v14 = (char)v6 % 32; // 0x2db8e9
    v4 = v12;
    v9 = v13;
    if (v14 != 0) {
        bool v15 = v6 < v3 ? v7 <= v5 : v5 > 24; // 0x2db8e1
        char * v16 = (char *)((v2 + v1 + (int64_t)v15 & 0xffffffff) + 76); // 0x2db8e9
        *v16 = *v16 >> v14;
    }
    int64_t v17 = a3 & -256 | 24; // 0x2db8ec
    int64_t v18 = 2 * v11;
    __asm_out((int16_t)v17, (char)v2);
    return function_2db96c(v4 + v18, v9 + v18, v17, (int64_t)v6);
}

// Address range: 0x2db8f9 - 0x2db90e
int64_t function_2db8f9(int64_t a1, int64_t a2) {
    // 0x2db8f9
    int64_t v1; // 0x2db8f9
    bool v2; // 0x2db8f9
    return (v1 & 0xffffff00 | 197) - (v2 ? 0x4b01e8e0 : 0x4b01e8df) & 0xffffffff;
}

// Address range: 0x2db90e - 0x2db936
int64_t function_2db90e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2db90e
    int64_t v1; // 0x2db90e
    int32_t * v2 = (int32_t *)(8 * v1 + a4); // 0x2db90e
    *v2 = *v2 ^ (int32_t)a3;
    int64_t v3 = unknown_ffffffffc8a2f717(); // 0x2db911
    __asm_out_133((int16_t)a3, (int32_t)v3);
    unsigned char v4 = *(char *)0x14047d9101e80800; // 0x2db919
    int64_t v5; // 0x2db90e
    int32_t v6 = *(int32_t *)&v5 & (int32_t)(v3 & 0xe8f61300 | (int64_t)v4); // 0x2db922
    int32_t * v7 = (int32_t *)(a1 - 95); // 0x2db92a
    uint32_t v8 = *v7; // 0x2db92a
    uint32_t v9 = v8 + (int32_t)a4; // 0x2db92a
    *v7 = v9;
    char * v10 = (char *)((int64_t)(v6 & -0x1709ec51) - 1); // 0x2db92d
    *v10 = *v10 + (char)a3 + (char)(v9 < v8);
    return v6 & -0x1fffffd6;
}

// Address range: 0x2db96c - 0x2db98a
int64_t function_2db96c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2db96c
    int64_t v1; // 0x2db96c
    uint64_t v2 = v1;
    *(int32_t *)a4 = (int32_t)(v1 | v2);
    int64_t v3; // 0x2db96c
    *(int32_t *)a3 = *(int32_t *)&v3 + (int32_t)v1;
    char * v4 = (char *)(a4 + 0x4db9619); // 0x2db97c
    *v4 = *v4 + (char)(v2 / 256);
    int64_t result = unknown_ffffffff8a2cec89(); // 0x2db982
    char * v5 = (char *)result; // 0x2db988
    *v5 = *v5 - 1;
    return result;
}

// Address range: 0x2db98b - 0x2db98e
int64_t function_2db98b(int64_t a1) {
    // 0x2db98b
    int64_t result; // 0x2db98b
    return result;
}

// Address range: 0x2db98f - 0x2db999
int64_t function_2db98f(void) {
    // 0x2db98f
    return unknown_3a9b4898();
}

// Address range: 0x2db99a - 0x2dbaa6
int64_t function_2db99a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    int64_t v2 = a1;
    __asm_outsd((int16_t)a3, (int32_t)a2);
    int64_t v3; // 0x2db99a
    int32_t * v4 = (int32_t *)(v3 + 0x16267b2 + 4 * v3); // 0x2db9fc
    *v4 = *v4 + (int32_t)a1;
    unknown_33e09810();
    char * v5 = (char *)(a5 + 52); // 0x2dba0f
    *v5 = *v5 | (char)v1;
    __asm_int(120);
    unsigned char v6 = (char)(v3 / 256); // 0x2dba17
    char v7 = v3;
    unsigned char v8 = v6 + v7; // 0x2dba17
    int64_t v9 = 256 * (int64_t)v8 | v3 & -0xff01; // 0x2dba17
    int64_t result = unknown_ffffffff939f0e1f(); // 0x2dba19
    uint32_t v10; // 0x2dba9f
    if (((v8 ^ v6) & (v8 ^ v7)) >= 0) {
        // 0x2dba9f
        v10 = *(int32_t *)(v9 + 0x19881700);
        return (result & 0xffffffff | 0x100000000 * v1) / (int64_t)v10 & 0xffffffff;
    }
    if (v8 < 0) {
        // 0x2db9f5
        return result;
    }
    unsigned char v11 = (char)result; // 0x2dba24
    unsigned char v12 = v8 < v6 ? -83 : -84; // 0x2dba24
    if (v12 > v11) {
        // 0x2dba85
        *(int32_t *)v1 = *(int32_t *)&v1 | (int32_t)v2;
        *(int32_t *)v2 = *(int32_t *)&v2 - (int32_t)a5;
        int64_t v13 = (char)(result / 256) < (char)(v1 / 256) ? 0x11b895c5 : 0x11b895c4; // 0x2dba98
        int64_t v14 = (result & 0xffffff00 | (int64_t)(v11 - v12)) - v13 & 0xffffffff;
        v10 = *(int32_t *)(v9 + 0x19881700);
        return (v14 & 0xffffffff | 0x100000000 * v1) / (int64_t)v10 & 0xffffffff;
    }
    int64_t v15 = unknown_ffffffffabe3042e(); // 0x2dba28
    int64_t v16 = v8 < v6 | v12 > v11 ? 225 : 224; // 0x2dba33
    __asm_outsb((int16_t)v1, *(char *)(a2 & 0xffffffff & v3));
    int32_t * v17 = (int32_t *)v9; // 0x2dba38
    *v17 = *v17 + (int32_t)((v15 + v16) % 256 | v15 & 0xffffff00);
    char * v18 = (char *)(a4 + 38); // 0x2dba40
    *v18 = *v18 - (char)((int64_t)&g3 >> 8);
    return v9 & 0xffffffff;
}

// Address range: 0x2dbae5 - 0x2dbae6
int64_t function_2dbae5(int64_t a1) {
    // 0x2dbae5
    int64_t result; // 0x2dbae5
    return result;
}

// Address range: 0x2dbb39 - 0x2dbb3a
int64_t function_2dbb39(int64_t a1) {
    // 0x2dbb39
    int64_t result; // 0x2dbb39
    return result;
}

// Address range: 0x2dbb44 - 0x2dbb98
int64_t function_2dbb44(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2dbb44
    int64_t result; // 0x2dbb44
    bool v1; // 0x2dbb44
    if (v1) {
        // 0x2dbb47
        *(int32_t *)0x158a711301e84d = (int32_t)result;
        return result;
    }
    if (v1) {
        char * v2 = (char *)(result + 0x1201e800); // 0x2dbb8d
        *v2 = *v2 + (char)(result / 256);
        char * v3 = (char *)(result + 6); // 0x2dbb93
        *v3 = *v3 + (char)result;
        return result;
    }
    int64_t v4 = unknown_ffffffffc8385b5c(); // 0x2dbb56
    *(char *)a5 = 0;
    *(int32_t *)a1 = (int32_t)(v4 & 0xffff00ff | 256 * (16 * (int64_t)v1 | 64 * (int64_t)v1 | (int64_t)v1)) | 512;
    int32_t * v5 = (int32_t *)(result + 107); // 0x2dbb62
    *v5 = *v5 + (int32_t)result;
    *(int32_t *)(a1 - 4) = __asm_insd((int16_t)a3);
    unknown_70eea172();
    return function_ffffffffe33bd9eb();
}

// Address range: 0x2dbbee - 0x2dbbf4
int64_t function_2dbbee(int64_t a1) {
    // 0x2dbbee
    return unknown_ffffffffc228fff7(a1);
}

// Address range: 0x2dbbf7 - 0x2dbbf8
int64_t function_2dbbf7(int64_t a1) {
    // 0x2dbbf7
    int64_t result; // 0x2dbbf7
    return result;
}

// Address range: 0x2dbbfc - 0x2dbc0e
int64_t function_2dbbfc(int64_t a1, int64_t a2) {
    // 0x2dbbfc
    int64_t result; // 0x2dbbfc
    int32_t * v1 = (int32_t *)(result - 0x173327d1); // 0x2dbbfc
    *v1 = *v1 + (int32_t)a1;
    int32_t * v2 = (int32_t *)(result + 18); // 0x2dbc0b
    *v2 = *v2 + (int32_t)a2;
    return result;
}

// Address range: 0x2dbc12 - 0x2dbc5f
int64_t function_2dbc12(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x2dbc12
    int64_t v1; // 0x2dbc12
    int64_t v2 = v1;
    int64_t v3 = a5;
    char * v4 = (char *)(v1 - 69); // 0x2dbc12
    *v4 = *v4 + (char)v2;
    uint64_t v5 = a3 / 256; // 0x2dbc1d
    int64_t v6 = v5 - a3; // 0x2dbc1d
    uint64_t v7 = (int64_t)((char)v5 < (char)a3) + a3 - unknown_62201d1d(); // 0x2dbc1f
    int64_t v8 = v7 % 256 | a3 & -0x10000;
    bool v9; // 0x2dbc12
    __asm_wait((v9 ? -4 : 4) + a1, v3, v8 | 256 * v6 & 0xff00);
    int64_t result = unknown_ffffffffdf27153d(); // 0x2dbc37
    char * v10 = (char *)((v8 | 256 * (v2 | v6) & 0xff00) - 0x1c47d5c0); // 0x2dbc3c
    *v10 = *v10 >> 1;
    int64_t v11; // 0x2dbc12
    v3 = (int64_t)&v11;
    uint64_t v12 = 256 * result & a4;
    int32_t * v13 = (int32_t *)((v12 & 0xff00 | a4 & -0xff01) - 14); // 0x2dbc45
    uint32_t v14 = *v13; // 0x2dbc45
    uint32_t v15 = v14 + (int32_t)(int64_t)&v3; // 0x2dbc45
    *v13 = v15;
    char * v16 = (char *)(((v7 + v2 + (int64_t)(v15 < v14)) % 256 | v2 & -256) - 0x176802b2); // 0x2dbc4e
    *v16 = *v16 + (char)(v12 / 256);
    char * v17 = (char *)(result + 0x62256003); // 0x2dbc56
    *v17 = -1 - *v17;
    return result;
}

// Address range: 0x2dbc90 - 0x2dbc92
int64_t function_2dbc90(int64_t a1) {
    // 0x2dbc90
    int64_t result; // 0x2dbc90
    return result;
}

// Address range: 0x2dbcb4 - 0x2dbcb5
int64_t function_2dbcb4(void) {
    // 0x2dbcb4
    int64_t result; // 0x2dbcb4
    return result;
}

// Address range: 0x2dbcbb - 0x2dbcbe
int64_t function_2dbcbb(int64_t a1) {
    // 0x2dbcbb
    int64_t result; // 0x2dbcbb
    return result;
}

// Address range: 0x2dbcbf - 0x2dbcc6
int64_t function_2dbcbf(int64_t a1, int64_t a2) {
    // 0x2dbcbf
    int64_t result; // 0x2dbcbf
    return result;
}

// Address range: 0x2dbccd - 0x2dbcd0
int64_t function_2dbccd(void) {
    // 0x2dbccd
    int64_t result; // 0x2dbccd
    return result;
}

// Address range: 0x2dbf0e - 0x2dbf26
int64_t function_2dbf0e(int64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    // 0x2dbf0e
    int64_t result; // 0x2dbf0e
    uint64_t v1 = result;
    bool v2; // 0x2dbf0e
    if (v2 || v2) {
        // 0x2dbf7f
        return result;
    }
    int64_t result2 = result + 0x13d00db & 0xffffff00 | a2 % 256; // 0x2dbf19
    char * v3 = (char *)(v1 + 103); // 0x2dbf1e
    int64_t v4; // 0x2dbf0e
    *v3 = *v3 + (char)(int64_t)&v4;
    *(char *)(result2 - 4) = (char)(v1 / 256);
    return result2;
}

// Address range: 0x2dbf81 - 0x2dbf89
int64_t function_2dbf81(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 24); // 0x2dbf81
    *v1 = *v1 - 0x1403c201;
    int64_t result; // 0x2dbf81
    return result;
}

// Address range: 0x2dbfdb - 0x2dbff0
int64_t function_2dbfdb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2dbfdb
    unknown_3a3436e1();
    return function_ffffffffe85c0680(a4);
}

// Address range: 0x2dc085 - 0x2dc093
int64_t function_2dc085(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 - 24); // 0x2dc085
    bool v2; // 0x2dc085
    *v1 = (int32_t)v2 - (int32_t)a4 + *v1;
    int64_t v3; // 0x2dc085
    int32_t * v4 = (int32_t *)(v3 + 2); // 0x2dc088
    uint32_t v5 = *v4; // 0x2dc088
    uint32_t v6 = v5 + (int32_t)a3; // 0x2dc088
    *v4 = v6;
    unsigned char v7 = (char)v3; // 0x2dc08b
    char v8 = v6 < v5; // 0x2dc08b
    unsigned char v9 = v8 + (char)v3; // 0x2dc08b
    unsigned char v10 = v7 - v9; // 0x2dc08b
    bool v11 = v6 < v5 ? v9 != -1 | v10 - v8 > v7 : v9 > v7; // 0x2dc08b
    int32_t * v12 = (int32_t *)(v3 & -256 | (int64_t)v10); // 0x2dc08f
    *v12 = *v12 - (int32_t)a1 + (int32_t)v11;
    int64_t v13; // 0x2dc085
    return v3 & -256 | (int64_t)*(char *)&v13;
}

// Address range: 0x2dc0cb - 0x2dc0dd
int64_t function_2dc0cb(void) {
    // 0x2dc0cb
    __asm_sti();
    return unknown_2e26f9d6() + 0x1d928f19 & 0xffffffff;
}

// Address range: 0x380930 - 0x380935
int64_t function_380930(void) {
    // 0x380930
    int64_t v1; // 0x380930
    int64_t v2 = v1;
    return (v2 + 154) % 256 | v2 & -256;
}

// Address range: 0x380981 - 0x380984
int64_t function_380981(void) {
    // 0x380981
    int64_t result; // 0x380981
    return result;
}

// Address range: 0x38098b - 0x3809bf
int64_t function_38098b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38098b
    __asm_in_134(-26);
    int64_t v1 = a2 & 0xffffffff; // 0x380996
    int64_t v2; // 0x38098b
    *(int32_t *)v1 = (int32_t)v2 + (int32_t)a2;
    char v3 = a2; // 0x3809a7
    *(char *)-0x5fff5c11022be19b = v3;
    *(char *)-0x600df743 = *(char *)-0x600df743 + (char)(v2 / 256);
    return a2 & 0xffffff00 | (int64_t)(*(char *)(v1 + 0x1308bc) | v3);
}

// Address range: 0x380a20 - 0x380a29
int64_t function_380a20(int64_t a1, int64_t a2) {
    // 0x380a20
    int64_t v1; // 0x380a20
    bool v2; // 0x380a20
    return 2 * v1 & 0xfffffffe | (int64_t)v2;
}

// Address range: 0x380a2b - 0x380a37
int64_t function_380a2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2 + a1; // 0x380a2b
    int64_t result = unknown_4642aa35((int32_t)v1); // 0x380a2f
    *(int32_t *)(v1 & 0xffffffff) = __asm_insd((int16_t)a3);
    return result;
}

// Address range: 0x380a6f - 0x380a70
int64_t function_380a6f(void) {
    // 0x380a6f
    int64_t result; // 0x380a6f
    return result;
}

// Address range: 0x380aa2 - 0x380aa3
int64_t function_380aa2(void) {
    // 0x380aa2
    int64_t result; // 0x380aa2
    return result;
}

// Address range: 0x380ab8 - 0x380aee
int64_t function_380ab8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x380ab8
    bool v1; // 0x380ab8
    bool v2 = v1;
    int64_t v3 = a4;
    if (v1) {
        function_380aa2();
    }
    int64_t v4 = unknown_ffffffffdb32b3cc(); // 0x380ac6
    int32_t v5 = *(int32_t *)&v3 & (int32_t)v4; // 0x380ad0
    int64_t result = v5; // 0x380ad2
    if (v5 >= 0 == (v5 != 0)) {
        result = function_380a6f();
    }
    // 0x380ad4
    int64_t v6; // 0x380ab8
    int64_t v7 = v6 + a3 + 0x1045; // 0x380ac4
    *(int32_t *)0x161a7124 = (int32_t)v7;
    int64_t v8 = (v2 ? -4 : 4) + a1 + (v2 ? -1 : 1); // 0x380ae0
    *(char *)(result + v8) = (char)v3 + (char)v7;
    __asm_out((int16_t)(v4 + (a3 & 0xff00) & 0xff00 | a3 % 256) + (int16_t)v8, (char)result);
    return result;
}

// Address range: 0x380b1b - 0x380b46
int64_t function_380b1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x380b1b
    __asm_int(29);
    int64_t v1; // 0x380b1b
    int32_t * v2 = (int32_t *)(v1 - 60); // 0x380b23
    *v2 = *v2 + (int32_t)a3;
    unknown_ffffffff98438737();
    return unknown_615d8c46();
}

// Address range: 0x380c05 - 0x380c22
int64_t function_380c05(int64_t a1, int64_t a2, int64_t a3) {
    // 0x380c05
    unknown_3195970d();
    *(int32_t *)0x4ca2281e = *(int32_t *)0x4ca2281e + (int32_t)a1;
    return function_5a80cd6();
}

// Address range: 0x380c45 - 0x380c48
int64_t function_380c45(void) {
    // 0x380c45
    int64_t result; // 0x380c45
    return result;
}

// Address range: 0x380c72 - 0x380c85
int64_t function_380c72(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x8846e16 + a3); // 0x380c72
    *v1 = *v1 ^ (int32_t)a4;
    int64_t v2; // 0x380c72
    return v2 & 0xffffffff;
}

// Address range: 0x380c99 - 0x380cbc
int64_t function_380c99(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x380c99
    int64_t result; // 0x380c99
    uint64_t v1 = result;
    int32_t v2 = a4; // 0x380c99
    *(int32_t *)v1 = v2;
    int32_t * v3 = (int32_t *)(a3 - 0x2c66ecc6); // 0x380ca0
    bool v4; // 0x380c99
    *v3 = (int32_t)v4 - (int32_t)a1 + *v3;
    int32_t * v5 = (int32_t *)(a4 + 35); // 0x380ca8
    *v5 = *v5 + v2;
    int64_t v6 = v1 / 256 % 256 | a4; // 0x380cab
    *(int32_t *)a1 = (int32_t)result;
    char * v7 = (char *)(v6 + 0x1e8af35); // 0x380cae
    *v7 = *v7 + (char)v6;
    return result;
}

// Address range: 0x380cea - 0x380ceb
int64_t function_380cea(void) {
    // 0x380cea
    int64_t result; // 0x380cea
    return result;
}

// Address range: 0x380d05 - 0x380d08
int64_t function_380d05(int64_t a1, int64_t a2, int64_t a3) {
    // 0x380d05
    return a2 & 0xffffffff;
}

// Address range: 0x380d0f - 0x380d16
int64_t function_380d0f(void) {
    // 0x380d0f
    return function_3cc80e39();
}

// Address range: 0x380d2b - 0x380d2c
int64_t function_380d2b(int64_t a1) {
    // 0x380d2b
    int64_t result; // 0x380d2b
    return result;
}

// Address range: 0x380d2d - 0x380d2e
int64_t function_380d2d(int64_t a1) {
    // 0x380d2d
    int64_t result; // 0x380d2d
    return result;
}

// Address range: 0x380d51 - 0x380d6a
int64_t function_380d51(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2; // 0x380d51
    int32_t v3 = v2; // 0x380d51
    int64_t v4 = unknown_ffffffffd0bcd65c(); // 0x380d56
    *(char *)a1 = (char)v2;
    int64_t v5 = v4; // 0x380d5c
    if (((v3 - 0x42a9e5e9 ^ v3) & v3 + 0x3d561a17) < 0) {
        v5 = function_380cea();
    }
    int64_t result = v5 | 216; // 0x380d5f
    int32_t * v6 = (int32_t *)(result + 8 * v2); // 0x380d61
    *v6 = *v6 | (int32_t)result;
    int32_t v7 = *(int32_t *)&v1; // 0x380d64
    bool v8; // 0x380d51
    *(int32_t *)v1 = v7 + (int32_t)((v8 ? 0xffffffff : 1) + a2);
    return result;
}

// Address range: 0x380e4d - 0x380e8a
int64_t function_380e4d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x380e4d
    unknown_39a5cc53();
    bool v1; // 0x380e4d
    int64_t v2 = (v1 ? -1 : 1) + a1; // 0x380e69
    char * v3 = (char *)(v2 + 0x1e83a19); // 0x380e7e
    *v3 = *v3 + (char)a4;
    return (int64_t)(0x380e7501 * *(int32_t *)(v2 - 0x17c14c0b));
}

// Address range: 0x380ea3 - 0x380f14
int64_t function_380ea3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a1 + 0x3a79765); // 0x380ea6
    int32_t v2 = a5; // 0x380ea6
    *v1 = *v1 + v2;
    int64_t v3; // 0x380ea3
    uint32_t v4 = (int32_t)v3; // 0x380eaf
    uint32_t v5 = v4 + v2; // 0x380eaf
    if (v5 >= v4) {
        // 0x380eec
        *(int32_t *)a1 = (int32_t)v3;
        char v6 = __asm_insb((int16_t)a3 % 256 | (int16_t)&g1); // 0x380f05
        bool v7; // 0x380ea3
        *(char *)((v7 ? -4 : 4) + a1) = v6;
        unknown_1aeafb14();
        return 0xf5245999;
    }
    char * v8 = (char *)(unknown_522ce8bf() - 117); // 0x380ebf
    *v8 = *v8 & (char)v3;
    *(int32_t *)(unknown_ffffffffb47539cc() + 104) = (int32_t)a6;
    __asm_outsb((int16_t)a3, *(char *)a6);
    int64_t v9 = unknown_38bfd0d7(); // 0x380ed1
    char * v10 = (char *)(v9 + 0x48de1400); // 0x380ed6
    *v10 = *v10 + (char)v9;
    int32_t * v11 = (int32_t *)((int64_t)v5 - 0x5fff2900); // 0x380ede
    *v11 = *v11 + (int32_t)(v3 / 2) % 0x80000000;
    return (v9 + a4 / 256) % 256 | v9 & -256;
}

// Address range: 0x381130 - 0x38116c
int64_t function_381130(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x381130
    int64_t v1; // 0x381130
    int64_t v2 = v1;
    int64_t v3; // 0x381130
    if (a4 == 0) {
        v3 = function_381112();
    }
    // 0x381134
    *(int32_t *)(a3 + 1) = (int32_t)a2;
    int32_t * v4 = (int32_t *)(a4 - 9); // 0x381143
    int32_t v5 = *v4 + ((int32_t)v3 >> 31); // 0x381143
    *v4 = v5;
    uint64_t v6 = a4 - 1; // 0x381146
    bool v7; // 0x381130
    int64_t v8 = (int64_t)v7 - v1 + v3 & 0xffffffff; // 0x381146
    if (v6 != 0 && v5 != 0) {
        v8 = function_3810d0();
    }
    char * v9 = (char *)v8; // 0x38114a
    *v9 = *v9 + 88;
    int32_t * v10 = (int32_t *)(v2 + 0x2d002b00); // 0x381151
    int32_t v11 = *v10 + (int32_t)v1; // 0x381151
    *v10 = v11;
    int64_t v12 = (v2 + v6 / 256) % 256 | v2 & 0xffffff00; // 0x381157
    if (v11 < 1) {
        v12 = function_3810f2();
    }
    char * v13 = (char *)(v12 + 60); // 0x381159
    *v13 = *v13 + (char)(v12 / 256);
    *(int32_t *)a1 = (int32_t)v12;
    return v12 & -256 | v6 % 256;
}

// Address range: 0x3811ad - 0x3811b3
int64_t function_3811ad(int64_t a1) {
    // 0x3811ad
    int64_t result; // 0x3811ad
    return result;
}

// Address range: 0x381229 - 0x38122a
int64_t function_381229(void) {
    // 0x381229
    int64_t result; // 0x381229
    return result;
}

// Address range: 0x381259 - 0x38125c
int64_t function_381259(int64_t a1) {
    // 0x381259
    int64_t result; // 0x381259
    return result;
}

// Address range: 0x381280 - 0x381295
int64_t function_381280(int64_t a1, int64_t a2, int64_t a3) {
    // 0x381280
    int64_t v1; // 0x381280
    uint32_t v2 = (int32_t)v1;
    uint32_t v3 = (int32_t)v1 + v2; // 0x381280
    *(int32_t *)v1 = v3;
    int32_t * v4 = (int32_t *)(v1 - 0x5e249cfd); // 0x381282
    uint32_t v5 = *v4; // 0x381282
    *v4 = v5 / 0x2000 | 0x100000 * v5 | 0x80000 * (int32_t)(v3 < v2);
    __asm_out((int16_t)a3, (char)v1);
    unknown_56ad9090();
    char * v6 = (char *)(a3 + 3); // 0x38128f
    *v6 = *v6 - ((v5 & 0x1000) == 0 ? 4 : 5);
    return function_381229();
}

// Address range: 0x3812cc - 0x3812d6
int64_t function_3812cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a4 % 32; // 0x3812cc
    if (v1 != 0) {
        char * v2 = (char *)(a2 - 24); // 0x3812cc
        *v2 = *v2 >> v1;
    }
    int64_t result; // 0x3812cc
    int32_t * v3 = (int32_t *)(result + 0x1c44110a); // 0x3812cf
    *v3 = *v3 + (int32_t)result;
    return result;
}
