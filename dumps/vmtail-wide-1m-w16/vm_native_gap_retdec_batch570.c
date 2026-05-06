/*
 * Targeted RetDec C for native executable gap queue batch 570.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x263ac2-0x263cc2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x263cc2-0x263ec2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x263ec2-0x2640c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x351c8a-0x351e8a rank=- name=- kind=- bytes=- uncovered=-
 *   0x351e8a-0x35208a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35208a-0x35228a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35228a-0x35248a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35248a-0x35268a rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_186ecda();
int64_t function_263ac2(void);
int64_t function_263ad0(int64_t a1);
int64_t function_263ae2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_263b1f(int64_t a1);
int64_t function_263b93(void);
int64_t function_263bf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_263cbf(int64_t a1);
int64_t function_263cf2(int64_t a1);
int64_t function_263cf8(void);
int64_t function_263d02(int64_t a1, int64_t a2, int64_t a3);
int64_t function_263d32(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_263d95(int64_t a1);
int64_t function_263df1(int64_t a1);
int64_t function_263e1b(int64_t a1);
int64_t function_263e2c(void);
int64_t function_263e3b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_263e51(int64_t a1, int64_t a2, int64_t a3);
int64_t function_263f47(int64_t a1, int64_t a2, int64_t a3);
int64_t function_263fac(int64_t a1);
int64_t function_263fc1(int64_t a1, int64_t a2);
int64_t function_263fef(void);
int64_t function_263ff5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26403d(int64_t a1);
int64_t function_2640a2(int64_t a1);
int64_t function_351c8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_351d8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_351eda(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_352044(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3521d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_352309(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_352485(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3525f2(void);
int64_t function_352619(void);
int64_t function_352627(void);
int64_t function_352628(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_60272fb5();
int64_t function_cb235f8();
int64_t function_cf3c7();
int64_t function_ffffffffcc25b21d();
int64_t function_ffffffffd606aa37();
int64_t unknown_11a89c7();
int64_t unknown_5bbf0316();
int64_t unknown_ffffffffc4c62401();

// Address range: 0x263ac2 - 0x263ac3
int64_t function_263ac2(void) {
    // 0x263ac2
    int64_t result; // 0x263ac2
    return result;
}

// Address range: 0x263ad0 - 0x263ad1
int64_t function_263ad0(int64_t a1) {
    // 0x263ad0
    int64_t result; // 0x263ad0
    return result;
}

// Address range: 0x263ae2 - 0x263af2
int64_t function_263ae2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x263ae2
    int64_t v1; // 0x263ae2
    bool v2; // 0x263ae2
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)a1 + (int32_t)v2;
    return function_ffffffffcc25b21d();
}

// Address range: 0x263b1f - 0x263b20
int64_t function_263b1f(int64_t a1) {
    // 0x263b1f
    int64_t result; // 0x263b1f
    return result;
}

// Address range: 0x263b93 - 0x263b94
int64_t function_263b93(void) {
    // 0x263b93
    int64_t result; // 0x263b93
    return result;
}

// Address range: 0x263bf8 - 0x263caa
int64_t function_263bf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffc4c62401(); // 0x263bf8
    *(int32_t *)v1 = (int32_t)v1;
    int64_t v2; // 0x263bf8
    int32_t * v3 = (int32_t *)(4 * v2 + a2); // 0x263c02
    int32_t v4 = *v3 + (int32_t)a3; // 0x263c02
    *v3 = v4;
    if (v4 != 0) {
        int64_t v5 = v1 & -256 | (int64_t)(*(char *)(a1 - 24) & (char)v1); // 0x263bff
        *(int32_t *)-0x33fe17b0fe7798c7 = (int32_t)v5;
        return v5 & 0xffffffff ^ 0x702c019d;
    }
    int64_t result = unknown_5bbf0316(); // 0x263c10
    int64_t v6; // bp-8, 0x263bf8
    char * v7 = (char *)(2 * a3 + (int64_t)&v6); // 0x263c15
    *v7 = 2 * *v7;
    return result;
}

// Address range: 0x263cbf - 0x263cc0
int64_t function_263cbf(int64_t a1) {
    // 0x263cbf
    int64_t result; // 0x263cbf
    return result;
}

// Address range: 0x263cf2 - 0x263cf5
int64_t function_263cf2(int64_t a1) {
    // 0x263cf2
    int64_t result; // 0x263cf2
    return result;
}

// Address range: 0x263cf8 - 0x263cfd
int64_t function_263cf8(void) {
    // 0x263cf8
    return function_ffffffffd606aa37();
}

// Address range: 0x263d02 - 0x263d10
int64_t function_263d02(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a2 + 0x6f8f62c4); // 0x263d02
    unsigned char v2 = *v1; // 0x263d02
    int64_t v3; // 0x263d02
    unsigned char v4 = (char)v3; // 0x263d02
    char v5 = v2 - v4; // 0x263d02
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x263d02
    *v1 = v5;
    int64_t result = a1 & 0xffff00ff | 0x4000 * (int64_t)(v5 == 0) | 0x8000 * (int64_t)(v5 < 0) | 0x1000 * (int64_t)(v2 % 16 - v4 % 16 > 15) | 1024 * (int64_t)(v6 % 2 == 0) | 512; // 0x263d0b
    *(int32_t *)(v3 & 0xffffffff) = (int32_t)result;
    return result;
}

// Address range: 0x263d32 - 0x263d3d
int64_t function_263d32(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x263d32
    int64_t v1; // 0x263d32
    *(char *)a1 = (char)v1 / 2;
    return function_186ecda();
}

// Address range: 0x263d95 - 0x263d98
int64_t function_263d95(int64_t a1) {
    // 0x263d95
    int64_t result; // 0x263d95
    return result;
}

// Address range: 0x263df1 - 0x263dfd
int64_t function_263df1(int64_t a1) {
    // 0x263df1
    return __asm_int1(a1);
}

// Address range: 0x263e1b - 0x263e1e
int64_t function_263e1b(int64_t a1) {
    // 0x263e1b
    int64_t result; // 0x263e1b
    return result;
}

// Address range: 0x263e2c - 0x263e2d
int64_t function_263e2c(void) {
    // 0x263e2c
    int64_t result; // 0x263e2c
    return result;
}

// Address range: 0x263e3b - 0x263e4f
int64_t function_263e3b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x263e3b
    __asm_iretd();
    unknown_11a89c7();
    return function_cb235f8();
}

// Address range: 0x263e51 - 0x263e8c
int64_t function_263e51(int64_t a1, int64_t a2, int64_t a3) {
    // 0x263e51
    int64_t v1; // 0x263e51
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 99 + 4 * v2); // 0x263e53
    *v3 = *v3 & -0x17c6794d;
    int32_t * v4 = (int32_t *)(a2 - 123); // 0x263e5b
    *v4 = *v4 + (int32_t)v1;
    bool v5; // 0x263e51
    int64_t v6 = (v5 ? 0xffffffff : 1) + a2; // 0x263e6a
    *(int64_t *)v1 = 0x3fcdaa00;
    *(char *)a1 = (char)v6;
    return v6 & 0xffffffff;
}

// Address range: 0x263f47 - 0x263f55
int64_t function_263f47(int64_t a1, int64_t a2, int64_t a3) {
    // 0x263f47
    int64_t v1; // 0x263f47
    return function_60272fb5(*(int32_t *)(8 * a3 - 65 + v1) & (int32_t)a1);
}

// Address range: 0x263fac - 0x263fad
int64_t function_263fac(int64_t a1) {
    // 0x263fac
    int64_t result; // 0x263fac
    return result;
}

// Address range: 0x263fc1 - 0x263fc4
int64_t function_263fc1(int64_t a1, int64_t a2) {
    // 0x263fc1
    int64_t result; // 0x263fc1
    return result;
}

// Address range: 0x263fef - 0x263ff3
int64_t function_263fef(void) {
    // 0x263fef
    int64_t result; // 0x263fef
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)result + (int32_t)v1;
    return result;
}

// Address range: 0x263ff5 - 0x264003
int64_t function_263ff5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x263ff5
    *(int32_t *)-0x7a91fe1766736084 = (int32_t)a3;
    return a3 & 0xffffffff;
}

// Address range: 0x26403d - 0x26403e
int64_t function_26403d(int64_t a1) {
    // 0x26403d
    int64_t result; // 0x26403d
    return result;
}

// Address range: 0x2640a2 - 0x2640a8
int64_t function_2640a2(int64_t a1) {
    // 0x2640a2
    int64_t v1; // 0x2640a2
    return v1 & 0xe7de8e6c;
}

// Address range: 0x351c8a - 0x351d8e
int64_t function_351c8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x351c8a
    int64_t v1; // bp-24, 0x351c8a
    int64_t v2 = (int64_t)&v1; // 0x351cdd
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x351d10
    *(int64_t *)(v2 + 48) = a5;
    v1 = a4;
    *(int64_t *)(v2 - 8) = a2;
    int64_t v4 = v1; // 0x351d6a
    *v3 = v2 + 24;
    int64_t v5 = *(int64_t *)(v2 + 16); // 0x351d70
    *v3 = v5;
    v1 = v5;
    int64_t v6; // 0x351c8a
    return function_cf3c7(a1, a2, a3, v4, v6, v6, 0x67e24fa7);
}

// Address range: 0x351d8e - 0x351eda
int64_t function_351d8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x351d8e
    int64_t v1; // 0x351d8e
    return function_cf3c7(a1, 0x269b19aa, a3, a2, a5, v1, 0x34bee7);
}

// Address range: 0x351eda - 0x352044
int64_t function_351eda(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x351eda
    int64_t v1; // bp-40, 0x351eda
    int64_t v2 = (int64_t)&v1; // 0x351f47
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x351f5f
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x351f5f
    *v4 = v3;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x351f63
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x351f97
    int64_t v7 = v2 + 8; // 0x351fa1
    *(int64_t *)v7 = v3;
    *v4 = 0x20146e28;
    *v6 = v3;
    *v5 = *(int64_t *)(v2 + 16);
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = a4;
    *v5 = a2;
    *v6 = a3;
    *v4 = v7;
    *v4 = v1;
    *v5 = a3;
    *v6 = v1;
    *v5 = v2;
    int64_t v8; // 0x351eda
    return function_cf3c7(a1, *v5, *v5, *v4, v8, v8, 0x453f8214);
}

// Address range: 0x352044 - 0x3521d8
int64_t function_352044(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 169; // bp-24, 0x352165
    int64_t v2 = (int64_t)&v1; // 0x3521b2
    *(int64_t *)(v2 - 8) = 169;
    *(int64_t *)(v2 - 16) = 169;
    int64_t v3; // 0x352044
    return function_cf3c7(a1, a2, a3, a4, a5, v3, v1);
}

// Address range: 0x3521d8 - 0x352309
int64_t function_3521d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3521d8
    int64_t v1; // bp-48, 0x3521d8
    int64_t v2 = (int64_t)&v1 + 16; // bp-32, 0x3522a6
    v1 = (int64_t)&v2;
    return function_cf3c7(a1, a2, a3, a4, a5, a6, a7);
}

// Address range: 0x352309 - 0x352485
int64_t function_352309(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x352309
    int64_t v1; // bp-32, 0x352309
    int64_t v2 = (int64_t)&v1; // 0x352371
    v1 = v2;
    return function_cf3c7(a1, a2, a3, a4, a5, a6, v2);
}

// Address range: 0x352485 - 0x3525d6
int64_t function_352485(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x352485
    int64_t v1; // bp-56, 0x352485
    v1 = (int64_t)&v1 + 8;
    int64_t v2; // 0x352485
    return function_cf3c7(a1, a2, a3, 0x34c9e6, a5, a6, v2);
}

// Address range: 0x3525f2 - 0x3525f5
int64_t function_3525f2(void) {
    // 0x3525f2
    int64_t result; // 0x3525f2
    return result;
}

// Address range: 0x352619 - 0x35261c
int64_t function_352619(void) {
    // 0x352619
    int64_t result; // 0x352619
    return result;
}

// Address range: 0x352627 - 0x352628
int64_t function_352627(void) {
    // 0x352627
    int64_t result; // 0x352627
    return result;
}

// Address range: 0x352628 - 0x35262c
int64_t function_352628(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x352628
    int64_t result; // 0x352628
    char * v1 = (char *)(result - 127); // 0x352628
    *v1 = *v1 | (char)a4;
    return result;
}
