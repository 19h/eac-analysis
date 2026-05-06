/*
 * Targeted RetDec C for native executable gap queue batch 1005.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2de90e-0x2deb0e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2dec0e-0x2ded0e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ded0e-0x2def0e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2def0e-0x2df10e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2df10e-0x2df30e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2df30e-0x2df50e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2df50e-0x2df70e rank=- name=- kind=- bytes=- uncovered=-
 *   0x359a45-0x359c45 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b9859-0x3b9a59 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b9a59-0x3b9c59 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b9c59-0x3b9e59 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b9e59-0x3ba059 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ba059-0x3ba259 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ba259-0x3ba459 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ba459-0x3ba659 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ba659-0x3ba859 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
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
int64_t __asm_emms(void);
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
void __asm_fldenv(int224_t value);
int64_t __asm_fnstenv();
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
int256_t __asm_vprord(int256_t value, int count);
int256_t __asm_vpaddd(int256_t left, int256_t right);
int256_t __asm_vpxord(int256_t left, int256_t right);
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
int128_t __asm_pmulhw(int128_t left, int128_t right);
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

int64_t function_1fccb784();
int64_t function_28970fb2();
int64_t function_2de90e(void);
int64_t function_2de986(int64_t a1);
int64_t function_2dea44(void);
int64_t function_2dea52(void);
int64_t function_2dea6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2deab4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2deac5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2debc9();
int64_t function_2dec0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2dec52(void);
int64_t function_2dec6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2dec9a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2decf7(int64_t a1);
int64_t function_2decfb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ded10(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2ded2f(void);
int64_t function_2ded78(void);
int64_t function_2dee06(void);
int64_t function_2dee33(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2dee3d(void);
int64_t function_2dee55(void);
int64_t function_2dee68(void);
int64_t function_2dee6f(int64_t a1);
int64_t function_2dee71(int64_t a1);
int64_t function_2dee7b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2deee8(void);
int64_t function_2deeea(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2def2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2defc9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2df024(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2df0bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2df0fa(void);
int64_t function_2df19f(void);
int64_t function_2df1c0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2df204(int64_t a1);
int64_t function_2df22b(int64_t a1);
int64_t function_2df23f(int64_t a1, int64_t a2);
int64_t function_2df2f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2df318(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2df395(void);
int64_t function_2df39f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2df3d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2df4f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2df541(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2df59e(void);
int64_t function_2df5a0(void);
int64_t function_2df5be(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, uint64_t a5);
int64_t function_2df6d3(void);
int64_t function_359a45(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_359b23(void);
int64_t function_359b87(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_359bf5(int64_t a1);
int64_t function_359bfc(int64_t a1);
int64_t function_397bf4a0();
int64_t function_3b9859(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3b98f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3b9986(void);
int64_t function_3b99a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3b99dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b9a9e(void);
int64_t function_3b9aa4(int64_t a1);
int64_t function_3b9ad8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3b9cac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b9e1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b9faa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ba0ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ba207(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3ba337(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3ba490(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ba5e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3ba782(void);
int64_t function_3ba79b(int64_t a1);
int64_t function_3ba7bc(void);
int64_t function_47c8fa82();
int64_t function_582f33cb();
int64_t function_c823b();
int64_t function_ffffffffa8d6b539();
int64_t unknown_343cd6af();
int64_t unknown_3d37824b();
int64_t unknown_3d790df0();
int64_t unknown_48f93a2e();
int64_t unknown_5ed8e1d7();
int64_t unknown_712f84a1();
int64_t unknown_774c7aa3();
int64_t unknown_7e93edbc();
int64_t unknown_b151fc();
int64_t unknown_ffffffff8040d8d4();
int64_t unknown_ffffffff91b82143();
int64_t unknown_ffffffff9b30c9ff();
int64_t unknown_ffffffffb44b1add();
int64_t unknown_ffffffffc6ba8666();
int64_t unknown_ffffffffd54c0200();
int64_t unknown_ffffffffe0388a83();
int64_t unknown_ffffffffe32d9c44();
int64_t unknown_ffffffffe8b8a1c9();
int64_t unknown_fffffffff3a9ca94();

// Address range: 0x2de90e - 0x2de90f
int64_t function_2de90e(void) {
    // 0x2de90e
    int64_t result; // 0x2de90e
    return result;
}

// Address range: 0x2de986 - 0x2de989
int64_t function_2de986(int64_t a1) {
    // 0x2de986
    int64_t result; // 0x2de986
    return result;
}

// Address range: 0x2dea44 - 0x2dea45
int64_t function_2dea44(void) {
    // 0x2dea44
    int64_t result; // 0x2dea44
    return result;
}

// Address range: 0x2dea52 - 0x2dea54
int64_t function_2dea52(void) {
    // 0x2dea52
    return function_2dea44();
}

// Address range: 0x2dea6d - 0x2dea85
int64_t function_2dea6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x1a81480b); // 0x2dea6f
    *v1 = *v1 + (int32_t)a3;
    int64_t v2; // 0x2dea6d
    *(char *)(a1 + 29) = (char)v2;
    unknown_ffffffffe0388a83();
    return __asm_int3();
}

// Address range: 0x2deab4 - 0x2deac4
int64_t function_2deab4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2deab4
    *(int32_t *)0x3f5d0529 = *(int32_t *)0x3f5d0529 + (int32_t)a3;
    int64_t v1; // 0x2deab4
    return (int64_t)*(int32_t *)(v1 - 0x1785fac6);
}

// Address range: 0x2deac5 - 0x2deace
int64_t function_2deac5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2deac5
    int64_t result; // 0x2deac5
    __asm_out(-24, (int32_t)result);
    return result;
}

// Address range: 0x2dec0e - 0x2dec52
int64_t function_2dec0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a3 + 65); // 0x2dec10
    int64_t v2; // 0x2dec0e
    uint32_t v3 = *(int32_t *)(4 * v2 + ((a3 & 0xff00) + a3 & 0xff00 | a3 & -0xff01)); // 0x2dec22
    *(char *)(2 * v2 - 126) = (char)a3;
    bool v4; // 0x2dec0e
    int32_t v5 = *(int32_t *)(8 * v2 + (int64_t)((int32_t)v4 + (int32_t)a4 - v1)); // 0x2dec29
    function_2debc9();
    int64_t result = __asm_wait(); // 0x2dec4b
    int32_t * v6 = (int32_t *)(v2 & 0xffffffff | (int64_t)(v5 + (int32_t)a2 + (int32_t)(v3 > -1 - (int32_t)v2))); // 0x2dec4e
    uint32_t v7 = *v6; // 0x2dec4e
    *v6 = v7 / 0x4000 | 0x40000 * v7;
    return result;
}

// Address range: 0x2dec52 - 0x2dec53
int64_t function_2dec52(void) {
    // 0x2dec52
    int64_t result; // 0x2dec52
    return result;
}

// Address range: 0x2dec6d - 0x2dec71
int64_t function_2dec6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2dec6d
    int64_t result; // 0x2dec6d
    *(int32_t *)a3 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x2dec9a - 0x2deca7
int64_t function_2dec9a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2dec9a
    __asm_outsd((int16_t)a3, (int32_t)a2);
    int64_t result = unknown_774c7aa3(); // 0x2deca2
    int64_t v1; // 0x2dec9a
    if ((char)(v1 ^ a3 / 256) != 0) {
        result = function_2dec52();
    }
    // 0x2deca4
    return result;
}

// Address range: 0x2decf7 - 0x2decfa
int64_t function_2decf7(int64_t a1) {
    // 0x2decf7
    int64_t result; // 0x2decf7
    return result;
}

// Address range: 0x2decfb - 0x2ded0a
int64_t function_2decfb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2decfb
    return function_28970fb2();
}

// Address range: 0x2ded10 - 0x2ded18
int64_t function_2ded10(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 0x68359d22); // 0x2ded10
    *v1 = *v1 + (int32_t)a2;
    return function_2ded78();
}

// Address range: 0x2ded2f - 0x2ded30
int64_t function_2ded2f(void) {
    // 0x2ded2f
    int64_t result; // 0x2ded2f
    return result;
}

// Address range: 0x2ded78 - 0x2ded9c
int64_t function_2ded78(void) {
    // 0x2ded78
    int64_t v1; // 0x2ded78
    int64_t v2 = v1;
    unsigned char v3 = *(char *)-0x6efec2ff3dbe5633; // 0x2ded82
    int64_t v4 = (v2 + 0x7d903484 + (int64_t)((int32_t)v2 < 0xd801e8eb) & 0xffffff00 | (int64_t)v3) + 0x5045dd47; // 0x2ded8d
    *(char *)-0x776b3f48d9f02ddf = (char)v4;
    return 0x10000 * (int32_t)v4 >> 16;
}

// Address range: 0x2dee06 - 0x2dee09
int64_t function_2dee06(void) {
    // 0x2dee06
    int64_t v1; // 0x2dee06
    return (uint64_t)v1 % 256 | v1;
}

// Address range: 0x2dee33 - 0x2dee3a
int64_t function_2dee33(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 0x780088f0); // 0x2dee33
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x2dee33
    return result;
}

// Address range: 0x2dee3d - 0x2dee3e
int64_t function_2dee3d(void) {
    // 0x2dee3d
    int64_t result; // 0x2dee3d
    return result;
}

// Address range: 0x2dee55 - 0x2dee56
int64_t function_2dee55(void) {
    // 0x2dee55
    int64_t result; // 0x2dee55
    return result;
}

// Address range: 0x2dee68 - 0x2dee6b
int64_t function_2dee68(void) {
    // 0x2dee68
    int64_t result; // 0x2dee68
    return result;
}

// Address range: 0x2dee6f - 0x2dee70
int64_t function_2dee6f(int64_t a1) {
    // 0x2dee6f
    int64_t result; // 0x2dee6f
    return result;
}

// Address range: 0x2dee71 - 0x2dee77
int64_t function_2dee71(int64_t a1) {
    // 0x2dee71
    return function_47c8fa82();
}

// Address range: 0x2dee7b - 0x2dee90
int64_t function_2dee7b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2; // 0x2dee7b
    int64_t v3 = v2; // 0x2dee7d
    bool v4; // 0x2dee7b
    if (v4 || v4) {
        v3 = function_2dee55();
    }
    int32_t * v5 = (int32_t *)(v3 - 0x3eb82df9); // 0x2dee7f
    *v5 = (int32_t)v4 + (int32_t)a4 + *v5;
    *(char *)v1 = *(char *)&v1 - 125;
    return function_2deeea(a1, a2, a3, v1);
}

// Address range: 0x2deee8 - 0x2deeea
int64_t function_2deee8(void) {
    // 0x2deee8
    int64_t result; // 0x2deee8
    return result;
}

// Address range: 0x2deeea - 0x2def15
int64_t function_2deeea(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2deeea
    int64_t v1; // 0x2deeea
    int64_t v2 = unknown_3d790df0() + v1; // 0x2deeef
    int32_t * v3 = (int32_t *)((v2 & 0xffffffff) + 0x1d020005); // 0x2deef1
    *v3 = *v3 + (int32_t)v2;
    int64_t v4 = unknown_ffffffffe8b8a1c9(); // 0x2deef7
    uint64_t v5 = v1 + a4; // 0x2deefc
    int32_t * v6 = (int32_t *)(a2 - 14); // 0x2def09
    *v6 = (int32_t)((v4 + 0x29c50eb3) / 64) % 0x4000000 + *v6;
    return v5 & 0xffffff00 | (int64_t)*(char *)(v5 % 256 + v1);
}

// Address range: 0x2def2f - 0x2def39
int64_t function_2def2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2def2f
    *(int32_t *)(a2 - 0x17b40e90) = (int32_t)a3;
    int64_t result; // 0x2def2f
    int32_t * v1 = (int32_t *)(result - 113); // 0x2def35
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x2defc9 - 0x2deff1
int64_t function_2defc9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2defc9
    int64_t v1; // 0x2defc9
    int32_t * v2 = (int32_t *)(v1 + 7); // 0x2defc9
    *v2 = *v2 + (int32_t)a1;
    int64_t v3; // 0x2defc9
    int32_t v4 = *(int32_t *)(v1 & -256 | (int64_t)*(char *)&v3); // 0x2defd0
    uint32_t v5 = v4 & (int32_t)a4; // 0x2defd0
    unknown_ffffffffb44b1add();
    char * v6 = (char *)(int64_t)(40 * v5); // 0x2defdf
    *v6 = *v6 + (char)v5;
    uint32_t v7 = __asm_in(40); // 0x2defe1
    int64_t v8 = v7 & -256; // 0x2defe3
    int32_t * v9 = (int32_t *)(2 * (int64_t)v5 - 0x117b4403 + (((int64_t)v7 + (int64_t)(v5 / 256)) % 256 | v8)); // 0x2defe5
    *v9 = *v9 + (int32_t)a3;
    return (int64_t)__asm_in_133((int16_t)a3) | v8;
}

// Address range: 0x2df024 - 0x2df02d
int64_t function_2df024(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2df024
    int64_t result; // 0x2df024
    return result;
}

// Address range: 0x2df0bb - 0x2df0c7
int64_t function_2df0bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2df0bb
    int64_t result; // 0x2df0bb
    int32_t * v1 = (int32_t *)(result - 0x256c4ed9); // 0x2df0bb
    *v1 = *v1 + (int32_t)a4;
    return result;
}

// Address range: 0x2df0fa - 0x2df0fc
int64_t function_2df0fa(void) {
    // 0x2df0fa
    int64_t v1; // 0x2df0fa
    return v1 & 0xffffffff;
}

// Address range: 0x2df19f - 0x2df1a0
int64_t function_2df19f(void) {
    // 0x2df19f
    int64_t result; // 0x2df19f
    return result;
}

// Address range: 0x2df1c0 - 0x2df1f5
int64_t function_2df1c0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3;
    int64_t v2; // 0x2df1c0
    char * v3 = (char *)(2 * v2 - 85); // 0x2df1c9
    *v3 = *v3 + (char)v2;
    int64_t v4; // 0x2df1c0
    __asm_outsd((int16_t)a3, *(int32_t *)&v4);
    *(char *)-0x6f517f29 = *(char *)-0x6f517f29 + (char)(v2 / 256);
    *(int32_t *)v1 = *(int32_t *)&v1 ^ (int32_t)v2;
    __asm_wait();
    return function_2df19f();
}

// Address range: 0x2df204 - 0x2df207
int64_t function_2df204(int64_t a1) {
    // 0x2df204
    int64_t result; // 0x2df204
    return result;
}

// Address range: 0x2df22b - 0x2df23c
int64_t function_2df22b(int64_t a1) {
    char v1 = *(char *)0x361f1037; // 0x2df230
    int64_t v2; // 0x2df22b
    *(char *)0x361f1037 = v1 + (char)((uint64_t)v2 / 256);
    return function_1fccb784();
}

// Address range: 0x2df23f - 0x2df268
int64_t function_2df23f(int64_t a1, int64_t a2) {
    // 0x2df23f
    int64_t v1; // 0x2df23f
    int32_t * v2 = (int32_t *)((v1 | 255) - 62); // 0x2df247
    *v2 = *v2 + (int32_t)a2;
    int64_t v3; // bp-31613, 0x2df23f
    return (int64_t)&v3;
}

// Address range: 0x2df2f2 - 0x2df303
int64_t function_2df2f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x553e66d6); // 0x2df2f2
    int64_t v2; // 0x2df2f2
    *v1 = *v1 + (int32_t)v2;
    return function_397bf4a0();
}

// Address range: 0x2df318 - 0x2df38d
int64_t function_2df318(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2df318
    int64_t v1; // 0x2df318
    int64_t v2 = v1 & -0xff01; // 0x2df322
    int32_t * v3 = (int32_t *)((int64_t)(0x23a8013d * *(int32_t *)(v1 + 101)) + 0x5928ca34); // 0x2df32b
    *v3 = *v3 - (int32_t)a3;
    char v4 = *(char *)0x74f1639; // 0x2df332
    char v5 = v4 + (char)((int64_t)&g4 >> 8); // 0x2df332
    *(char *)0x74f1639 = v5;
    if (((v5 ^ v4) & (v5 ^ (char)((int64_t)&g4 >> 8))) >= 0) {
        unsigned char v6 = *(char *)-0x24cde725e3f53cd0; // 0x2df384
        return (v2 | (int64_t)&g1) & -256 | (int64_t)v6;
    }
    // 0x2df33b
    *(char *)(v2 | (int64_t)&g1 | 121) = (char)((int64_t)&g4 >> 8);
    return unknown_ffffffff91b82143();
}

// Address range: 0x2df395 - 0x2df396
int64_t function_2df395(void) {
    // 0x2df395
    int64_t result; // 0x2df395
    return result;
}

// Address range: 0x2df39f - 0x2df3d9
int64_t function_2df39f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2df39f
    bool v1; // 0x2df39f
    if (v1 || false) {
        // 0x2df3d1
        return unknown_5ed8e1d7();
    }
    // 0x2df3a1
    return function_2df395();
}

// Address range: 0x2df3d9 - 0x2df3f3
int64_t function_2df3d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __asm_iretd(); // 0x2df3d9
    *(int32_t *)-0x8fec2ffd9e6c5da = (int32_t)((v1 + 31) % 256 | v1 & 0xffffff00);
    return function_ffffffffa8d6b539();
}

// Address range: 0x2df4f6 - 0x2df4fe
int64_t function_2df4f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2df4f6
    int64_t result; // 0x2df4f6
    return result;
}

// Address range: 0x2df541 - 0x2df546
int64_t function_2df541(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2df541
    int64_t result; // 0x2df541
    *(int32_t *)a1 = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x2df59e - 0x2df59f
int64_t function_2df59e(void) {
    // 0x2df59e
    int64_t result; // 0x2df59e
    return result;
}

// Address range: 0x2df5a0 - 0x2df5a1
int64_t function_2df5a0(void) {
    // 0x2df5a0
    int64_t result; // 0x2df5a0
    return result;
}

// Address range: 0x2df5be - 0x2df6c7
int64_t function_2df5be(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, uint64_t a5) {
    // 0x2df5be
    int64_t v1; // 0x2df5be
    int64_t v2 = v1;
    __asm_out(103, (int32_t)v2);
    unsigned char v3 = (char)a3;
    unsigned char v4 = (char)(v1 / 256) + v3; // 0x2df5c8
    char * v5 = (char *)a3; // 0x2df5c8
    *v5 = v4;
    int32_t v6 = *(int32_t *)(a2 + 8); // 0x2df5ca
    int32_t v7 = *(int32_t *)(a3 + 0x378b0c16); // 0x2df5cd
    int64_t v8 = (int32_t)(v4 < v3) + (int32_t)a1 + v6 | v7; // 0x2df5cd
    unsigned char v9 = *(char *)(v1 + 0x13d05bf + v2) | (char)v2; // 0x2df5d3
    int64_t v10 = v2 & -256 | (int64_t)v9; // 0x2df5d3
    int64_t v11; // 0x2df5be
    *(int32_t *)v8 = *(int32_t *)&v11;
    bool v12; // 0x2df5be
    int64_t v13 = v12 ? -4 : 4; // 0x2df5da
    v11 = v13 + a2;
    char * v14 = (char *)v10; // 0x2df5db
    *v14 = *v14 + v9;
    int64_t v15; // 0x2df5be
    char * v16 = (char *)(v15 + 0x3d000002); // 0x2df5dd
    char v17 = a4; // 0x2df5dd
    *v16 = *v16 + v17;
    int32_t * v18 = (int32_t *)v10; // 0x2df5e3
    int32_t v19 = *v18 + (int32_t)v10; // 0x2df5e3
    *v18 = v19;
    *v5 = v17;
    int64_t v20 = v10; // 0x2df5e7
    if (v19 < 0) {
        v20 = function_2df5a0();
    }
    uint64_t v21 = a4 - 1; // 0x2df5f2
    if (v21 != 0 != ((v20 + 29 & 140) == 0)) {
        int64_t v22 = unknown_b151fc(); // 0x2df5f5
        uint64_t v23 = v22 + 151; // 0x2df600
        *(char *)v15 = *(char *)&v15 ^ (char)a5;
        char * v24 = (char *)(v23 % 256 | v22 & -256); // 0x2df605
        *v24 = *v24 & (char)v21;
        int64_t v25; // 0x2df5be
        *(char *)v25 = *(char *)&v25 + (char)v23;
        int32_t * v26 = (int32_t *)(v15 - 11); // 0x2df60e
        *v26 = *v26 - (int32_t)v15;
        return function_582f33cb();
    }
    int64_t v27 = v13 + v8; // 0x2df5da
    v15 = a5;
    int64_t v28; // 0x2df5be
    int32_t v29 = (int64_t)&v28; // 0x2df65f
    int32_t v30 = v27; // 0x2df65f
    int32_t v31 = v30 + v29; // 0x2df65f
    int64_t v32 = __asm_int1(); // 0x2df661
    if (v31 < 0 != ((v31 ^ v29) & (v31 ^ v30)) < 0) {
        // 0x2df665
        return v32 & -256 | (int64_t)__asm_in_133((int16_t)a3);
    }
    int64_t v33 = (v32 + 221) % 256 | v32 & 0xffffff00; // 0x2df619
    char v34 = *(char *)v21; // 0x2df61e
    int64_t v35 = v11; // 0x2df628
    int64_t v36 = v27 & 0xffffffff ^ 0x5f9ee71c; // 0x2df628
    v11 = v36;
    unsigned char v37 = *(char *)0x1b4c3530; // 0x2df629
    char v38 = a5 / 256;
    unsigned char v39 = v37 + v38; // 0x2df629
    *(char *)0x1b4c3530 = v39;
    if (v39 != 0) {
        // 0x2df6af
        __asm_hlt(v33, v36);
        uint64_t v40 = unknown_7e93edbc(); // 0x2df6b6
        *(char *)0x4fedddc3 = *(char *)0x4fedddc3 + v38;
        return v40 & -256 | (int64_t)*(char *)(v40 % 256 + a5);
    }
    int32_t * v41 = (int32_t *)(v33 + 101); // 0x2df631
    int32_t v42 = (int32_t)(v39 < v37) - (int32_t)a5 + *v41; // 0x2df631
    *v41 = v42;
    int64_t v43 = (256 * (int64_t)((char)(v21 / 256) - v34) | v21 & -0xff01) - 1; // 0x2df634
    if (v43 == 0 || v42 == 0) {
        // 0x2df636
        __asm_outsd((int16_t)a3, *(int32_t *)v11);
        int64_t v44 = v35 & 0x502fe17 | 0xfafd01e8; // 0x2df637
        *(char *)0x20a1caed = *(char *)0x20a1caed - (char)v43;
        char * v45 = (char *)v43; // 0x2df642
        *v45 = *v45 + (char)(a3 / 256);
        return (int64_t)(*(int32_t *)v44 & (int32_t)v44);
    }
    // 0x2df693
    return v35 & 0xffffffff;
}

// Address range: 0x2df6d3 - 0x2df6d6
int64_t function_2df6d3(void) {
    // 0x2df6d3
    int64_t result; // 0x2df6d3
    return result;
}

// Address range: 0x359a45 - 0x359a50
int64_t function_359a45(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_3d37824b(a1, a2, a3, a4); // 0x359a45
    int32_t * v1 = (int32_t *)(a1 + 0x7a01e8f3); // 0x359a4a
    *v1 = *v1 + (int32_t)a4;
    return result;
}

// Address range: 0x359b23 - 0x359b24
int64_t function_359b23(void) {
    // 0x359b23
    int64_t result; // 0x359b23
    return result;
}

// Address range: 0x359b87 - 0x359be5
int64_t function_359b87(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x359b87
    bool v1; // 0x359b87
    if (v1 || v1) {
        function_359b23();
    }
    int64_t v2 = unknown_fffffffff3a9ca94(); // 0x359b8e
    int32_t * v3 = (int32_t *)(v2 + 0x4600aba4); // 0x359b93
    uint32_t v4 = *v3; // 0x359b93
    uint32_t v5 = v4 + (int32_t)a3; // 0x359b93
    *v3 = v5;
    int64_t v6 = v2 & 0xffffffff; // 0x359b99
    __asm_int1();
    int64_t result = unknown_712f84a1() & -0xff01 | (int64_t)&g3; // 0x359ba1
    char * v7 = (char *)(v6 + 0x1581bc00); // 0x359ba3
    unsigned char v8 = *v7; // 0x359ba3
    unsigned char v9 = v8 + (char)v2; // 0x359ba3
    unsigned char v10 = v9 + (char)(v5 < v4); // 0x359ba3
    *v7 = v10;
    int64_t v11 = v6 - 1; // 0x359ba9
    int64_t v12 = v6; // 0x359ba9
    bool v13 = v5 < v4 ? v10 <= v8 : v9 < v8; // 0x359ba9
    int64_t v14 = v11; // 0x359ba9
    if (v11 != 0 != (v10 == 0)) {
        goto lab_0x359bab;
      lab_0x359bab:;
        int64_t v15 = (result + 232 + (int64_t)v13) % 256 | result & -256; // 0x359bab
        int32_t * v16 = (int32_t *)(v12 - 114); // 0x359bad
        *v16 = *v16 + (int32_t)v15;
        unsigned char v17 = (char)v14; // 0x359bb0
        int64_t v18; // 0x359b87
        unsigned char v19 = *(char *)(v18 + 0x1d0028d9); // 0x359bb0
        char v20 = v19 + v17; // 0x359bb0
        return v15 & -0xff01 | 256 * (64 * (int64_t)(v20 == 0) | (int64_t)(v20 < v17) | 128 * (int64_t)(v20 < 0) | 16 * (int64_t)(v19 % 16 + v17 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v20) % 2 == 0)) | 512;
    }
    int64_t v21 = v6; // 0x359b87
    int64_t v22; // 0x359b87
    uint32_t v23 = (int32_t)v22;
    uint32_t v24 = (int32_t)v11 + v23; // 0x359bda
    v12 = v21 - 2;
    while (v12 != 0 && v24 != 0) {
        // 0x359ba9
        v14 = v21 - 3;
        v21 = v12;
        if (v14 != 0) {
            // 0x359ba9
            v13 = v24 < v23;
            goto lab_0x359bab;
        }
        v23 = (int32_t)(int64_t)v24;
        v24 = v23;
        v12 = v21 - 2;
    }
    char * v25 = (char *)(result + 0x62088c0a); // 0x359bde
    *v25 = *v25 + (char)((int64_t)&g3 >> 8);
    return result;
}

// Address range: 0x359bf5 - 0x359bf8
int64_t function_359bf5(int64_t a1) {
    // 0x359bf5
    int64_t result; // 0x359bf5
    return result;
}

// Address range: 0x359bfc - 0x359c02
int64_t function_359bfc(int64_t a1) {
    // 0x359bfc
    int64_t result; // 0x359bfc
    return result;
}

// Address range: 0x3b9859 - 0x3b98d5
int64_t function_3b9859(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x3b9859
    int64_t v1; // 0x3b9859
    char v2 = *(char *)-0x61e1667e + (char)(v1 / 256); // 0x3b9859
    *(char *)-0x61e1667e = v2;
    unknown_ffffffffc6ba8666();
    if (v2 < 1) {
        // 0x3b98cb
        *(char *)a3 = (char)(a3 / 256) + (char)a3;
        return unknown_ffffffff8040d8d4();
    }
    int64_t v3 = unknown_ffffffffe32d9c44(); // 0x3b9867
    int32_t * v4 = (int32_t *)(a3 - 51); // 0x3b986e
    *v4 = *v4 + (int32_t)v1;
    return (v3 ^ v1) & 0xffffffff;
}

// Address range: 0x3b98f9 - 0x3b997a
int64_t function_3b98f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_ffffffff9b30c9ff(); // 0x3b98f9
    bool v1; // 0x3b98f9
    if (v1) {
        unsigned char v2 = (char)a3;
        int64_t v3 = __asm_iretd(); // 0x3b9900
        unsigned char v4 = (char)v3 + v2; // 0x3b9901
        *(char *)a3 = v4;
        return 2 * v3 & 254 | v3 & -256 | (int64_t)(v4 < v2);
    }
    // 0x3b9974
    int64_t v5; // 0x3b98f9
    *(int32_t *)a2 = (int32_t)v5 + (int32_t)a2;
    int16_t v6 = a3; // 0x3b9978
    char v7 = result; // 0x3b9978
    __asm_out_134(v6, v7);
    __asm_out_134(v6, v7);
    return result;
}

// Address range: 0x3b9986 - 0x3b9987
int64_t function_3b9986(void) {
    // 0x3b9986
    int64_t result; // 0x3b9986
    return result;
}

// Address range: 0x3b99a7 - 0x3b99b7
int64_t function_3b99a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3b99a7
    bool v1; // 0x3b99a7
    if (a4 != 1 && !v1) {
        function_3b9986();
    }
    // 0x3b99a9
    return unknown_343cd6af();
}

// Address range: 0x3b99dd - 0x3b9a0c
int64_t function_3b99dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b99dd
    bool v1; // 0x3b99dd
    int64_t v2 = (v1 ? -4 : 4) + a1; // 0x3b99e0
    int32_t * v3 = (int32_t *)(v2 - 0x6a6f2b31); // 0x3b99e3
    int64_t result; // 0x3b99dd
    *v3 = *v3 + (int32_t)result;
    if ((v2 & 0x40000000) == 0) {
        // 0x3b99ed
        return result;
    }
    // 0x3b9a09
    return __asm_iretd();
}

// Address range: 0x3b9a9e - 0x3b9a9f
int64_t function_3b9a9e(void) {
    // 0x3b9a9e
    int64_t result; // 0x3b9a9e
    return result;
}

// Address range: 0x3b9aa4 - 0x3b9aa7
int64_t function_3b9aa4(int64_t a1) {
    // 0x3b9aa4
    int64_t result; // 0x3b9aa4
    return result;
}

// Address range: 0x3b9ad8 - 0x3b9cac
int64_t function_3b9ad8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3b9ad8
    int64_t v1; // 0x3b9ad8
    int64_t v2 = v1;
    *(char *)(a2 + 0x7122bb741) = -1;
    uint64_t v3 = v1 & 0xffffffff; // 0x3b9ae9
    uint64_t v4 = v3 | 0x100000000 * a3; // 0x3b9ae9
    uint64_t v5 = v4 % v3; // 0x3b9ae9
    int64_t v6 = (v4 / v3 + v2) % 256 | v2 & -256; // 0x3b9aeb
    int32_t v7 = *(int32_t *)(8 * v6 + 0xa176eaca); // 0x3b9aed
    uint32_t v8 = (int32_t)v1 + (int32_t)a2 + v7; // 0x3b9aed
    int64_t v9 = v8; // 0x3b9aed
    *(char *)a1 = (char)__asm_sti() & -32;
    bool v10; // 0x3b9ad8
    int64_t v11 = (v10 ? -1 : 1) + a1; // 0x3b9af9
    unknown_ffffffffd54c0200(v11);
    __asm_in_135((int16_t)v5);
    int64_t * v12 = (int64_t *)v9; // 0x3b9b00
    *v12 = -89;
    int32_t * v13 = (int32_t *)(a2 - 0x4c44116a); // 0x3b9b06
    int32_t v14 = *v13 + v8; // 0x3b9b06
    *v13 = v14;
    int64_t v15 = *v12; // 0x3b9b0c
    if (v14 == 0) {
        v15 = function_3b9a9e();
    }
    int64_t v16 = unknown_48f93a2e(); // 0x3b9b28
    char * v17 = (char *)(v16 + 0x67c06900); // 0x3b9b2d
    unsigned char v18 = (char)v16; // 0x3b9b2d
    *v17 = *v17 + v18;
    char * v19 = (char *)v16; // 0x3b9b33
    unsigned char v20 = *v19; // 0x3b9b33
    char v21 = v20 + v18; // 0x3b9b33
    unsigned char v22 = llvm_ctpop_i8(v21); // 0x3b9b33
    *v19 = v21;
    int64_t * v23 = (int64_t *)(v9 - 8); // 0x3b9b36
    *v23 = 0x4000 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | (int64_t)(v21 < v20) | 64 * (int64_t)(v21 == 0) | 128 * (int64_t)(v21 < 0) | 16 * (int64_t)(v20 % 16 + v18 % 16 > 15) | 4 * (int64_t)(v22 % 2 == 0) | 2048 * (int64_t)(((v21 ^ v20) & (v21 ^ v18)) < 0) | 1026;
    int64_t * v24 = (int64_t *)(v9 - 16); // 0x3b9b3b
    int64_t * v25 = (int64_t *)(v9 - 24); // 0x3b9b44
    *v25 = a5;
    *v24 = 310;
    int64_t * v26 = (int64_t *)(v9 - 32); // 0x3b9b61
    *v26 = *v25;
    *v25 = 0x3aed35;
    int64_t * v27 = (int64_t *)(v9 - 48); // 0x3b9b8c
    int64_t v28 = v9 - 40; // 0x3b9b92
    int64_t * v29 = (int64_t *)v28; // 0x3b9ba1
    *v29 = v28;
    *v27 = v6;
    int64_t v30 = *v12; // 0x3b9bb4
    *v29 = v30;
    *v27 = v30;
    int64_t * v31 = (int64_t *)(v9 - 56); // 0x3b9bbb
    *v31 = v30;
    int64_t v32 = *v24; // 0x3b9bc7
    *v29 = v32;
    *v27 = a6;
    *v27 = 0x1486347f;
    *v31 = v30;
    *v26 = *v27;
    *v31 = v30;
    *v23 = v32;
    int64_t * v33 = (int64_t *)(v9 - 72); // 0x3b9c5c
    *v33 = *v31;
    *(int64_t *)(v9 - 64) = v28;
    *v33 = *v31;
    return function_c823b(v11, a2, v5, v15 & 0x30010036 | 0xfa00, *v26, *v27);
}

// Address range: 0x3b9cac - 0x3b9e1a
int64_t function_3b9cac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b9cac
    int32_t v1; // bp-64, 0x3b9cac
    v1 = (int64_t)&v1;
    int32_t v2; // bp-48, 0x3b9cac
    v2 = (int32_t)(int64_t)&v2 + 16;
    int64_t v3; // 0x3b9cac
    return function_c823b(a1, a2, (0x100000000 * a3 - 0x2cbc2a2b00000000 >> 32) + 0x2cbc2a2b, 0x100000000 * v3 >> 32, v3, v3);
}

// Address range: 0x3b9e1a - 0x3b9faa
int64_t function_3b9e1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x533928ba; // bp-40, 0x3b9ea0
    int64_t v2 = (int64_t)&v1; // 0x3b9f34
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x3b9f58
    *(int64_t *)(v2 + 24) = a1;
    *v3 = v2 + 8;
    *v3 = v1;
    *(int64_t *)(v2 - 16) = v1;
    int64_t v4; // 0x3b9e1a
    return function_c823b(a1, a2, a3, a4, v4, v4);
}

// Address range: 0x3b9faa - 0x3ba0ed
int64_t function_3b9faa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3b9faa
    int64_t v1; // bp-32, 0x3b9faa
    int64_t v2 = (int64_t)&v1; // 0x3ba034
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x3ba04c
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x3ba04c
    *v4 = v3;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x3ba050
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x3ba053
    *v6 = v3;
    int64_t v7 = *(int64_t *)(v2 + 16); // 0x3ba05f
    *v4 = v7;
    *v6 = v7;
    *v5 = v3;
    int64_t v8 = v2 + 8; // 0x3ba081
    int64_t * v9 = (int64_t *)v8; // 0x3ba081
    *v9 = *v4;
    *v4 = 0x5b14ac2;
    *v6 = a3;
    *v5 = v7;
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = v1;
    *v5 = v1;
    v1 = *v9;
    *v4 = v8;
    int64_t v10; // 0x3b9faa
    return function_c823b(a1, a2, *v6, a4, a5, v10);
}

// Address range: 0x3ba0ed - 0x3ba207
int64_t function_3ba0ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ba0ed
    int64_t v1; // bp-40, 0x3ba0ed
    int64_t v2 = (int64_t)&v1; // 0x3ba15c
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x3ba172
    int64_t v4 = *(int64_t *)(v2 + 32); // 0x3ba175
    *v3 = v4;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x3ba179
    *v5 = v4;
    *v3 = 0x740f94ec;
    *v5 = v4;
    *(int64_t *)(v2 + 8) = *v3;
    *v5 = *(int64_t *)(v2 + 16);
    *(int64_t *)(v2 + 24) = *v3;
    *v3 = v1;
    *v5 = v2;
    *v3 = v1;
    *v5 = v1;
    int64_t v6; // 0x3ba0ed
    return function_c823b(a1, a2, a3, a4, a5, v6);
}

// Address range: 0x3ba207 - 0x3ba337
int64_t function_3ba207(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3ba207
    int64_t v1; // bp-56, 0x3ba207
    v1 = (int64_t)&v1 + 8;
    return function_c823b(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x3ba337 - 0x3ba490
int64_t function_3ba337(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3ba337
    int64_t v1; // 0x3ba337
    return function_c823b(a1, a2, a3, a4, a5, v1);
}

// Address range: 0x3ba490 - 0x3ba5e6
int64_t function_3ba490(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ba490
    int64_t v1; // 0x3ba490
    return function_c823b(a1, a2, a3, v1, v1, v1);
}

// Address range: 0x3ba5e6 - 0x3ba702
int64_t function_3ba5e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3ba5e6
    int64_t v1; // bp-56, 0x3ba5e6
    v1 = (int64_t)&v1;
    int64_t v2; // 0x3ba5e6
    return function_c823b(a1, a2, v2, a4, a5, a6);
}

// Address range: 0x3ba782 - 0x3ba783
int64_t function_3ba782(void) {
    // 0x3ba782
    int64_t result; // 0x3ba782
    return result;
}

// Address range: 0x3ba79b - 0x3ba79c
int64_t function_3ba79b(int64_t a1) {
    // 0x3ba79b
    int64_t result; // 0x3ba79b
    return result;
}

// Address range: 0x3ba7bc - 0x3ba7bf
int64_t function_3ba7bc(void) {
    // 0x3ba7bc
    int64_t result; // 0x3ba7bc
    return result;
}
