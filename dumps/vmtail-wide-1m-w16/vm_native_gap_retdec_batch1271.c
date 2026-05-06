/*
 * Targeted RetDec C for native executable gap queue batch 1271.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xde9c7-0xdebc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdebc7-0xdedc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdedc7-0xdefc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdefc7-0xdf1c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdf1c7-0xdf3c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdf3c7-0xdf5c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdf5c7-0xdf7c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdf7c7-0xdf9c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c1e00-0x2c2000 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c2200-0x2c2400 rank=- name=- kind=- bytes=- uncovered=-
 *   0x40d0df-0x40d2df rank=- name=- kind=- bytes=- uncovered=-
 *   0x40d2df-0x40d4df rank=- name=- kind=- bytes=- uncovered=-
 *   0x40d4df-0x40d6df rank=- name=- kind=- bytes=- uncovered=-
 *   0x40d6df-0x40d8df rank=- name=- kind=- bytes=- uncovered=-
 *   0x40d8df-0x40dadf rank=- name=- kind=- bytes=- uncovered=-
 *   0x40dadf-0x40dcdf rank=- name=- kind=- bytes=- uncovered=-
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
int128_t __asm_packsswb(int128_t left, int128_t right);
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

int64_t function_1f5ed1b();
int64_t function_2c1e00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2c1e62(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2c1fc6(void);
int64_t function_2c2200(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2c2267(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2c23d1(void);
int64_t function_2c23d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2c23d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2c23df(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40d0df(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7, int64_t a8);
int64_t function_40d206(int64_t a1);
int64_t function_40d25b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_40d4c8(int64_t a1);
int64_t function_40d4f2(int64_t a1, int64_t a2);
int64_t function_40d52c(void);
int64_t function_40d58a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_40d599(void);
int64_t function_40d5ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40d6b8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_40d718(void);
int64_t function_40d768(void);
int64_t function_40d776(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_40d788(int64_t a1);
int64_t function_40d7ba(int64_t a1, int64_t a2, int64_t a3);
int64_t function_40d7bf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_40d7d6(void);
int64_t function_40d7f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40d82d(void);
int64_t function_40d898(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_40d8df(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40d90d(void);
int64_t function_40d927(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_40d986(int64_t a1);
int64_t function_40d989(int64_t a1, int64_t a2, int64_t a3);
int64_t function_40d9c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40d9dd(int64_t a1, int64_t a2);
int64_t function_40d9f1(void);
int64_t function_40da5e(void);
int64_t function_40da60(int64_t a1);
int64_t function_40da65(void);
int64_t function_40da82(int64_t a1);
int64_t function_40da8f(void);
int64_t function_40db45(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40dbea(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_40dcd5(int64_t a1);
int64_t function_534d1174();
int64_t function_61d9fd9f();
int64_t function_6c64df7b();
int64_t function_70a787ef();
int64_t function_7fa13517();
int64_t function_cdc60();
int64_t function_cf3c7();
int64_t function_de9c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_dea7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_dea94(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_deace(int64_t a1, int64_t a2, int64_t a3);
int64_t function_deb8b(void);
int64_t function_debd8(void);
int64_t function_debdb(int64_t a1);
int64_t function_debe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_dec00(void);
int64_t function_dec54(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_dec61(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_dec92(int64_t a1);
int64_t function_decdd(int64_t a1);
int64_t function_ded05(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_ded46(int64_t a1, int64_t a2);
int64_t function_ded9f(void);
int64_t function_dedb6(void);
int64_t function_dede2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_dee36(int64_t a1);
int64_t function_dee6c(void);
int64_t function_dee73(int64_t a1, int64_t a2, int64_t a3);
int64_t function_dee80(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_def37(void);
int64_t function_def57(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_def84(int64_t a1, int64_t a2, int64_t a3);
int64_t function_defcb(void);
int64_t function_defd5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_df10b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_df26b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_df3f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_df58b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_df70e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_df852(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_ffffffff83083885();
int64_t function_ffffffff95b4f718();
int64_t function_ffffffff98ac7099();
int64_t function_ffffffff9e8a996c();
int64_t function_ffffffffbd0fd68b();
int64_t unknown_1015ffe6();
int64_t unknown_1a1856d2();
int64_t unknown_1f5ff14();
int64_t unknown_2871d2c3();
int64_t unknown_3afed28d();
int64_t unknown_4c9568b4();
int64_t unknown_5a050f80();
int64_t unknown_6018721c();
int64_t unknown_760fe9da();
int64_t unknown_ffffffff999a3e03();
int64_t unknown_ffffffffa0eb1dcd();
int64_t unknown_ffffffffab1b4896();
int64_t unknown_ffffffffc40f4c54();
int64_t unknown_ffffffffc877993c();
int64_t unknown_ffffffffd40f2a2c();
int64_t unknown_fffffffff764d727();

// Address range: 0xde9c7 - 0xdea5f
int64_t function_de9c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xde9c7
    int64_t v1; // 0xde9c7
    int64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = a6;
    int64_t v5 = unknown_ffffffffa0eb1dcd(); // 0xde9c7
    int64_t result = unknown_760fe9da(); // 0xde9d4
    __asm_out(73, (char)result);
    if ((int32_t)v5 != 0x5a4afef9) {
        // 0xde9dd
        return result;
    }
    // 0xdea05
    *(int32_t *)v2 = (int32_t)v2 + 0xaa224c5 + (int32_t)result;
    *(char *)a1 = *(char *)&v3;
    bool v6; // 0xde9c7
    int64_t v7 = v6 ? -1 : 1; // 0xdea0e
    int64_t v8 = v7 + a1; // 0xdea0e
    int64_t v9 = v3 + v7; // 0xdea0e
    v3 = v9;
    int64_t v10 = (int64_t)&v4; // 0xdea0f
    int32_t v11 = *(int32_t *)(v8 - 19); // 0xdea11
    unknown_6018721c(v8, v9);
    int64_t result2 = unknown_fffffffff764d727(); // 0xdea21
    if (v10 > (int64_t)v11) {
        // 0xdea28
        return result2 + 0xe878269a & 0xffffffff;
    }
    int32_t v12 = v10; // 0xdea11
    if (((v11 - v12 ^ v11) & (v11 ^ v12)) >= 0) {
        // 0xde9dd
        return result2;
    }
    // 0xdea39
    int64_t v13; // 0xde9c7
    *(int32_t *)v13 = *(int32_t *)&v13 + (int32_t)v9;
    int64_t result3 = unknown_ffffffffc40f4c54(); // 0xdea4e
    char * v14 = (char *)(v8 + 110); // 0xdea53
    unsigned char v15 = *v14; // 0xdea53
    *v14 = v15 - 122;
    char * v16 = (char *)(8 * v13 + v8); // 0xdea5c
    *v16 = *v16 + (v15 > 121 ? -121 : -122);
    return result3;
}

// Address range: 0xdea7e - 0xdea8a
int64_t function_dea7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xdea7e
    int64_t v1; // 0xdea7e
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a4 - 0x52749a06); // 0xdea7e
    *v3 = *v3 + (int32_t)v1;
    int64_t v4; // 0xdea7e
    return v2 & -256 | (int64_t)(*(char *)&v4 + (char)v2);
}

// Address range: 0xdea94 - 0xdeab8
int64_t function_dea94(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xdea94
    int64_t v1; // 0xdea94
    bool v2; // 0xdea94
    *(char *)a3 = 128 * (char)v2 | (char)v1 / 2;
    __asm_out(-8, (char)a1);
    int64_t v3 = a4 + 0xffffffff; // 0xdeaa2
    int32_t * v4 = (int32_t *)(v1 - 127); // 0xdeaa4
    *v4 = *v4 + (int32_t)v1;
    *(int32_t *)(v3 & 0xffffffff) = 0x1e86e66;
    return v3 & 0xffffff00 | (int64_t)__asm_in(-56);
}

// Address range: 0xdeace - 0xdeb0c
int64_t function_deace(int64_t a1, int64_t a2, int64_t a3) {
    // 0xdeace
    int64_t v1; // 0xdeace
    int32_t * v2 = (int32_t *)(v1 + 96); // 0xdeace
    *v2 = *v2 ^ -0x10f465f8;
    int64_t v3; // 0xdeace
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)a1;
    return a3 & 0xffffffff;
}

// Address range: 0xdeb8b - 0xdeb8c
int64_t function_deb8b(void) {
    // 0xdeb8b
    int64_t result; // 0xdeb8b
    return result;
}

// Address range: 0xdebd8 - 0xdebd9
int64_t function_debd8(void) {
    // 0xdebd8
    int64_t result; // 0xdebd8
    return result;
}

// Address range: 0xdebdb - 0xdebdc
int64_t function_debdb(int64_t a1) {
    // 0xdebdb
    int64_t result; // 0xdebdb
    return result;
}

// Address range: 0xdebe0 - 0xdebf8
int64_t function_debe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_1015ffe6(); // 0xdebe0
    char * v2 = (char *)(a2 - 126); // 0xdebe5
    *v2 = *v2 | (char)v1;
    int64_t v3; // 0xdebe0
    *(char *)a1 = *(char *)&v3 ^ (char)a3;
    __asm_hlt();
    function_deb8b();
    return function_1f5ed1b();
}

// Address range: 0xdec00 - 0xdec02
int64_t function_dec00(void) {
    // 0xdec00
    return function_debd8();
}

// Address range: 0xdec54 - 0xdec56
int64_t function_dec54(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xdec54
    int64_t result; // 0xdec54
    return result;
}

// Address range: 0xdec61 - 0xdec80
int64_t function_dec61(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xdec61
    int64_t v1; // 0xdec61
    int32_t * v2 = (int32_t *)((v1 & -256 | (int64_t)__asm_in(-24)) + 97); // 0xdec71
    *v2 = *v2 + (int32_t)a2;
    return a2 & 0xffffffff;
}

// Address range: 0xdec92 - 0xdec93
int64_t function_dec92(int64_t a1) {
    // 0xdec92
    int64_t result; // 0xdec92
    return result;
}

// Address range: 0xdecdd - 0xdece0
int64_t function_decdd(int64_t a1) {
    // 0xdecdd
    int64_t result; // 0xdecdd
    return result;
}

// Address range: 0xded05 - 0xded3a
int64_t function_ded05(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 0x7a0560f0); // 0xded05
    *v1 = *v1 + (int32_t)a3;
    uint32_t v2 = __asm_in_133((int16_t)a5); // 0xded0c
    int64_t v3; // 0xded05
    int64_t v4 = v3 + 0x79b1009; // 0xded17
    __writefsbyte(v4, __readfsbyte(v4) & (char)(v2 / 256));
    int32_t * v5 = (int32_t *)(a4 - 11); // 0xded23
    int32_t v6 = a4; // 0xded23
    *v5 = *v5 + v6;
    int64_t v7 = unknown_ffffffffd40f2a2c(); // 0xded26
    unsigned char v8 = (char)a4 % 32; // 0xded2b
    int64_t result = v7; // 0xded2b
    if (v8 != 0) {
        result = v7 & -256 | (int64_t)((char)v7 >> v8);
    }
    int32_t * v9 = (int32_t *)(a5 - 47); // 0xded2d
    uint32_t v10 = *v9; // 0xded2d
    uint32_t v11 = v10 + v6; // 0xded2d
    *v9 = v11;
    char * v12 = (char *)(2 * result + 0x9a3af38); // 0xded30
    *v12 = *v12 + (char)(a4 / 256) + (char)(v11 < v10);
    return result;
}

// Address range: 0xded46 - 0xded4a
int64_t function_ded46(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 - 115); // 0xded46
    *v1 = *v1 + (int32_t)a2;
    int64_t result; // 0xded46
    return result;
}

// Address range: 0xded9f - 0xdeda0
int64_t function_ded9f(void) {
    // 0xded9f
    int64_t result; // 0xded9f
    return result;
}

// Address range: 0xdedb6 - 0xdedb8
int64_t function_dedb6(void) {
    // 0xdedb6
    int64_t v1; // 0xdedb6
    return v1 & 0xffffffff;
}

// Address range: 0xdede2 - 0xdee0b
int64_t function_dede2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xdede2
    int64_t v1; // 0xdede2
    int32_t * v2 = (int32_t *)(v1 + 0x70988a32); // 0xdede8
    *v2 = *v2 + (int32_t)a3;
    int32_t * v3 = (int32_t *)(a3 + 12); // 0xdedf3
    uint32_t v4 = *v3; // 0xdedf3
    int64_t v5; // 0xdede2
    uint32_t v6 = v4 + (int32_t)v5; // 0xdedf3
    *v3 = v6;
    char * v7 = (char *)(v5 + 0x2d3a1677); // 0xdedf6
    *v7 = *v7 - (char)v5 + (char)(v6 < v4);
    unknown_ffffffff999a3e03();
    return function_ffffffffbd0fd68b();
}

// Address range: 0xdee36 - 0xdee47
int64_t function_dee36(int64_t a1) {
    // 0xdee36
    return unknown_ffffffffc877993c(a1);
}

// Address range: 0xdee6c - 0xdee6d
int64_t function_dee6c(void) {
    // 0xdee6c
    int64_t result; // 0xdee6c
    return result;
}

// Address range: 0xdee73 - 0xdee77
int64_t function_dee73(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 43); // 0xdee73
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0xdee73
    return result;
}

// Address range: 0xdee80 - 0xdef13
int64_t function_dee80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0xdee80
    int32_t * v3 = (int32_t *)(v2 + 0x2f053a91); // 0xdee82
    *v3 = *v3 + (int32_t)v2;
    int16_t v4 = a3; // 0xdee88
    __asm_out_134(v4, (int32_t)v2);
    int32_t * v5 = (int32_t *)(a1 + 0x5d9ac49f); // 0xdee89
    uint32_t v6 = *v5; // 0xdee89
    uint32_t v7 = (int32_t)v2; // 0xdee89
    *v5 = v6 - v7;
    int64_t v8 = unknown_ffffffffab1b4896(); // 0xdee90
    if (v2 < (int64_t)v6) {
        // 0xdef0e
        return unknown_1f5ff14();
    }
    uint32_t v9 = (int32_t)v8 + (int32_t)(v6 < v7) + *(int32_t *)v8; // 0xdee97
    int64_t result = v9; // 0xdee97
    int32_t * v10 = (int32_t *)(v1 + 109); // 0xdee9e
    uint32_t v11 = *v10; // 0xdee9e
    uint32_t v12 = v11 + v9; // 0xdee9e
    *v10 = v12;
    char * v13 = (char *)result; // 0xdeea1
    char v14 = *v13 + (char)a4 + (char)(v12 < v11); // 0xdeea1
    *v13 = v14;
    if (v14 == 0) {
        uint32_t v15 = (int32_t)a4 % 32; // 0xdeedd
        if (v15 != 0) {
            int32_t * v16 = (int32_t *)result; // 0xdeedd
            uint32_t v17 = *v16; // 0xdeedd
            *v16 = v17 >> 32 - v15 | v17 << v15;
        }
        return result;
    }
    int32_t v18 = __asm_insd(v4); // 0xdeea5
    int32_t * v19 = (int32_t *)a1; // 0xdeea5
    *v19 = v18;
    *v19 = *(int32_t *)&v1;
    bool v20; // 0xdee80
    int64_t v21 = v20 ? -4 : 4; // 0xdeea9
    int64_t v22 = v1 + v21; // 0xdeea9
    v1 = v22;
    int64_t v23 = unknown_4c9568b4(v21 + a1, v22, a3 & -256 | 182); // 0xdeeae
    int32_t * v24 = (int32_t *)(v23 - 94); // 0xdeeb3
    *v24 = (int32_t)v23 + (int32_t)(((char)v9 ^ -2) < 90) + *v24;
    char * v25 = (char *)(v2 + 0x7d28da08 + (8 * v2 & 0x7fffffff8)); // 0xdeeb6
    *v25 = -*v25;
    *(char *)0x550dab24233a1bff = (char)unknown_2871d2c3();
    return unknown_1a1856d2();
}

// Address range: 0xdef37 - 0xdef39
int64_t function_def37(void) {
    // 0xdef37
    int64_t result; // 0xdef37
    return result;
}

// Address range: 0xdef57 - 0xdef83
int64_t function_def57(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xdef57
    int64_t v1; // 0xdef57
    int32_t * v2 = (int32_t *)(v1 + 0x76c4c80a); // 0xdef5c
    int32_t v3 = a4; // 0xdef5c
    *v2 = *v2 + v3;
    __asm_int1(a1);
    int16_t v4; // 0xdef57
    int32_t * v5 = (int32_t *)((int64_t)v4 - 0x123bc5f6); // 0xdef67
    *v5 = *v5 + v3;
    __asm_wait();
    int32_t * v6 = (int32_t *)(v1 - 117); // 0xdef72
    *v6 = *v6 + (int32_t)a2;
    unknown_5a050f80(0xda55b102);
    return function_defcb();
}

// Address range: 0xdef84 - 0xdef95
int64_t function_def84(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_3afed28d(); // 0xdef87
    int32_t * v1 = (int32_t *)result; // 0xdef8c
    *v1 = *v1 | (int32_t)a3;
    return result;
}

// Address range: 0xdefcb - 0xdefd4
int64_t function_defcb(void) {
    // 0xdefcb
    int64_t v1; // 0xdefcb
    uint64_t v2 = v1;
    int64_t result = v2 % 256 ^ v1; // 0xdefcb
    char * v3 = (char *)(result - 0x6bf0c000); // 0xdefce
    *v3 = *v3 + (char)(v1 ^ v2);
    return result;
}

// Address range: 0xdefd5 - 0xdf10b
int64_t function_defd5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xdefd5
    int64_t v1; // bp-32, 0xdefd5
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0xdefd5
    return function_cdc60(a1, a2, a3, a4, a5, v2, 0x72a7d942);
}

// Address range: 0xdf10b - 0xdf26b
int64_t function_df10b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xdf10b
    bool v1; // 0xdf10b
    return function_cdc60(a1, a2, a3, a4, a5, 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2, 0xdd4a4);
}

// Address range: 0xdf26b - 0xdf3f8
int64_t function_df26b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xdf26b
    int64_t v1; // 0xdf26b
    return function_cdc60(a1, a2, 0x5349013b, v1, v1, a6, 0x5349013b);
}

// Address range: 0xdf3f8 - 0xdf58b
int64_t function_df3f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xdf3f8
    int64_t v1; // 0xdf3f8
    return function_cdc60(a1, 0xdd92c, a3, a4, a5, v1, a6);
}

// Address range: 0xdf58b - 0xdf70e
int64_t function_df58b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xdf58b
    int64_t v1; // bp-40, 0xdf58b
    int64_t v2 = (int64_t)&v1; // 0xdf5e6
    v1 = v2;
    int64_t v3 = v2 - 8; // 0xdf614
    int64_t v4 = *(int64_t *)(v2 + 32); // 0xdf618
    *(int64_t *)v3 = v4;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0xdf620
    int64_t * v6 = (int64_t *)(v2 - 24); // 0xdf629
    *v6 = v2;
    int64_t v7 = *v5; // 0xdf654
    int64_t * v8 = (int64_t *)(v2 - 32); // 0xdf654
    *v8 = v7;
    int64_t * v9 = (int64_t *)(v2 + 8); // 0xdf65e
    int64_t v10 = *v9; // 0xdf65e
    *v5 = v10;
    *v8 = a6;
    *v6 = a5;
    int64_t * v11 = (int64_t *)(v2 - 40); // 0xdf695
    *v11 = v4;
    int64_t v12 = *v8; // 0xdf698
    *v8 = v12 - 0x5fafdf01;
    v1 = v12;
    *v8 = 0x61353397;
    *v11 = v10;
    *v9 = *v6;
    *v6 = v7;
    *v8 = v3;
    *v11 = *v6;
    return function_cdc60(a1, 0xddbe9, a3, a4, *v6, a6, 0x3b349fa6);
}

// Address range: 0xdf70e - 0xdf852
int64_t function_df70e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xdf70e
    int64_t v1; // 0xdf70e
    return function_cdc60(a1, a2, a3, a4, v1, v1, 0xddfc6);
}

// Address range: 0xdf852 - 0xdf98e
int64_t function_df852(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xdf852
    int64_t v1; // 0xdf852
    return function_cdc60(a1, a2, a3, a4, a5, v1, a6);
}

// Address range: 0x2c1e00 - 0x2c1e62
int64_t function_2c1e00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2c1e00
    int64_t v1; // bp+16, 0x2c1e00
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x2c1e00
    return function_cf3c7(a1, a2, a3, a4, v2, v2, 0x100000000 * a6 >> 32);
}

// Address range: 0x2c1e62 - 0x2c1fae
int64_t function_2c1e62(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x100000000 * a3 >> 32; // 0x2c1e62
    int64_t v2 = v1 * 0x100000000 * (int64_t)&g2 / 0x100000000; // 0x2c1e62
    int64_t v3 = v1 * (int64_t)&g2 != v2; // 0x2c1e68
    int32_t v4; // bp-48, 0x2c1e62
    int64_t v5 = (0x100000000 * (int64_t)&v4 >> 32) + 16 ^ 0x100000000 * a5 >> 32; // 0x2c1f99
    int64_t v6 = v5 ^ a5;
    v4 = v6;
    int64_t v7; // 0x2c1e62
    bool v8; // 0x2c1e62
    return function_cf3c7(0x100000000 * a1 >> 32, a2, v2, a4, 0x100000000 * v6 >> 32 ^ v5, v7, 0x100000000 * (2048 * v3 | v3 | 0x4000 * (int64_t)v8 | 1024 * (int64_t)v8 | 512 * (int64_t)v8 | 256 * (int64_t)v8 | 128 * (int64_t)v8 | 64 * (int64_t)v8 | 16 * (int64_t)v8 | 4 * (int64_t)v8) >> 32 | 2);
}

// Address range: 0x2c1fc6 - 0x2c1fc9
int64_t function_2c1fc6(void) {
    // 0x2c1fc6
    int64_t result; // 0x2c1fc6
    return result;
}

// Address range: 0x2c2200 - 0x2c2267
int64_t function_2c2200(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2c2200
    int64_t v1; // 0x2c2200
    return function_cf3c7(a1, a2, a3, v1, v1, v1, a4);
}

// Address range: 0x2c2267 - 0x2c23c3
int64_t function_2c2267(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x100000000 * a3 >> 32; // 0x2c2267
    int64_t v2 = 0x343fd * v1; // 0x2c2267
    int64_t v3 = v2 & 0xffffffff; // 0x2c2267
    int64_t v4 = v2 != 0x343fd00000000 * v1 >> 32; // 0x2c226d
    int64_t v5; // bp-48, 0x2c2267
    int64_t v6 = (int64_t)&v5; // 0x2c2318
    v5 = v6;
    int64_t * v7 = (int64_t *)(v6 - 8); // 0x2c2357
    bool v8; // 0x2c2267
    *v7 = 2048 * v4 | v4 | 0x4000 * (int64_t)(bool)v8 | 1024 * (int64_t)v8 | 512 * (int64_t)v8 | 256 * (int64_t)v8 | 128 * (int64_t)v8 | 64 * (int64_t)v8 | 16 * (int64_t)v8 | 4 * (int64_t)v8 | 2;
    int64_t v9 = v6 + 16; // 0x2c235a
    *(int64_t *)v9 = v5;
    *v7 = a4;
    *(int64_t *)(v6 - 16) = 0x2a43b0;
    v5 = 0x2a43b0;
    *(int64_t *)(v6 + 32) = 0x2a43b0;
    *v7 = v6;
    v5 = v9;
    return function_cf3c7(a1, a2, v3, *v7, a5, a6, v3);
}

// Address range: 0x2c23d1 - 0x2c23d2
int64_t function_2c23d1(void) {
    // 0x2c23d1
    int64_t result; // 0x2c23d1
    return result;
}

// Address range: 0x2c23d2 - 0x2c23d7
int64_t function_2c23d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0x2c23d2
    *v1 = *v1 | (char)a4;
    return function_2c23df(a1, a2, a3, a4);
}

// Address range: 0x2c23d7 - 0x2c23df
int64_t function_2c23d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2c23d7
    int64_t v1; // 0x2c23d7
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(a1 + 28 + 4 * v2); // 0x2c23d9
    *v3 = *v3 + (char)a4;
    return v2 & -164;
}

// Address range: 0x2c23df - 0x2c23fb
int64_t function_2c23df(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2c23df
    int64_t result; // 0x2c23df
    return result;
}

// Address range: 0x40d0df - 0x40d1ae
int64_t function_40d0df(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7, int64_t a8) {
    // 0x40d0df
    bool v1; // 0x40d0df
    if (v1 || false) {
        char * v2 = (char *)(4 * a2 + (int64_t)(-0x1299d948 * *(int32_t *)-0x15900703)); // 0x40d15b
        unsigned char v3 = *v2; // 0x40d15b
        unsigned char v4 = v3 + (char)(a7 / 256); // 0x40d15b
        *v2 = v4;
        int32_t * v5 = (int32_t *)(9 * a3); // 0x40d162
        *v5 = *v5 - 117 + (int32_t)(v4 < v3);
        return function_ffffffff98ac7099();
    }
    // 0x40d0e1
    int64_t result; // 0x40d0df
    return result;
}

// Address range: 0x40d206 - 0x40d20d
int64_t function_40d206(int64_t a1) {
    // 0x40d206
    int64_t result; // 0x40d206
    return result;
}

// Address range: 0x40d25b - 0x40d3e6
int64_t function_40d25b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40d25b
    int64_t result; // 0x40d25b
    uint64_t v1 = result;
    int64_t v2 = a4;
    bool v3; // 0x40d25b
    if (!v3) {
        // 0x40d25d
        return result;
    }
    if (v3) {
        // 0x40d2c6
        *(int32_t *)a1 = (int32_t)a2;
        int64_t v4 = (int64_t)*(int32_t *)((v3 ? 0xfffffffc : 4) + a1 & 0xffffffff); // 0x40d2c8
        int64_t v5 = 0x64a95d3a * v4; // 0x40d2c8
        *(char *)0x2c2ff466c4ab312a = (char)result;
        *(char *)(v5 & 0xfffffffe) = (char)(v5 != 0x64a95d3a00000000 * v4 >> 32);
        return result;
    }
    char v6 = *(char *)(a2 - 0x51fe6710); // 0x40d2f6
    if ((v6 & (char)((result - (256 * (int64_t)v3 + a3 & 0xff00)) / 256)) != 0) {
        int64_t result2 = (int64_t)&v2; // 0x40d30d
        *(char *)(a3 - 33) = (char)result2;
        return result2;
    }
    // 0x40d300
    __asm_int1(a1);
    *(int32_t *)a2 = (int32_t)(__asm_int1(a1) ^ a2);
    *(int32_t *)a1 = (int32_t)v1;
    char v7 = *(char *)(a2 - 110); // 0x40d307
    return (256 * (int64_t)(v7 + (char)(v1 / 256)) | v1 & 0xffff00ff) ^ 102;
}

// Address range: 0x40d4c8 - 0x40d4cb
int64_t function_40d4c8(int64_t a1) {
    // 0x40d4c8
    int64_t result; // 0x40d4c8
    return result;
}

// Address range: 0x40d4f2 - 0x40d525
int64_t function_40d4f2(int64_t a1, int64_t a2) {
    // 0x40d4f2
    int64_t v1; // 0x40d4f2
    int32_t v2 = v1; // 0x40d4f2
    int64_t result = __asm_int3(a1); // 0x40d4f9
    if (((v2 + 0x6562ce99 ^ v2) & (v2 ^ -0x80000000)) < 0) {
        // 0x40d4fc
        return result;
    }
    // 0x40d51e
    __asm_wait();
    return __asm_iretd(a1);
}

// Address range: 0x40d52c - 0x40d53f
int64_t function_40d52c(void) {
    // 0x40d52c
    return function_ffffffff9e8a996c();
}

// Address range: 0x40d58a - 0x40d594
int64_t function_40d58a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40d58a
    int64_t v1; // 0x40d58a
    return v1 & 0x7b8b8cc1 | 0x8474733e;
}

// Address range: 0x40d599 - 0x40d59c
int64_t function_40d599(void) {
    // 0x40d599
    int64_t result; // 0x40d599
    return result;
}

// Address range: 0x40d5ad - 0x40d65d
int64_t function_40d5ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40d5ad
    int64_t v1; // 0x40d5ad
    bool v2; // 0x40d5ad
    int64_t v3 = 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | v1 & -0xff01; // 0x40d5ad
    int64_t v4 = v3 | 512; // 0x40d5ad
    *(char *)a1 = (char)v1;
    int64_t v5 = v2 ? -1 : 1; // 0x40d5ae
    int64_t v6 = v5 + a1; // 0x40d5ae
    int64_t v7 = v5 + a2; // 0x40d5ae
    *(int32_t *)0x212cb25eca178075 = (int32_t)v4;
    if (*(int32_t *)v7 - *(int32_t *)v6 < 0) {
        int64_t v8 = v2 ? -4 : 4; // 0x40d5b0
        return function_6c64df7b(v6 + v8, v7 + v8, a3 & -256 | 73);
    }
    // 0x40d625
    int64_t v9; // 0x40d5ad
    if ((*(char *)&v9 & (char)v1) == 0) {
        // 0x40d630
        return v3 & -0xff01 | 0x4600;
    }
    int32_t * v10 = (int32_t *)v4; // 0x40d640
    *v10 = *v10 - 0x19fab66;
    *(char *)0x785f5834b76c8115 = (char)v1;
    int64_t v11 = v4 & 0xbc92dbe6 | 0x436d2419; // 0x40d64f
    __asm_out(53, (char)v11);
    return v11 & 0xffffff00 | (int64_t)__asm_in(-89);
}

// Address range: 0x40d6b8 - 0x40d6d1
int64_t function_40d6b8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40d6b8
    int64_t result; // 0x40d6b8
    *(char *)0x1f263d8cfe2065a1 = (char)result;
    __asm_out_136(97, (int32_t)result);
    float80_t v1; // 0x40d6b8
    *(int16_t *)a2 = (int16_t)v1;
    return result;
}

// Address range: 0x40d718 - 0x40d71d
int64_t function_40d718(void) {
    // 0x40d718
    return function_534d1174();
}

// Address range: 0x40d768 - 0x40d76a
int64_t function_40d768(void) {
    // 0x40d768
    int64_t v1; // 0x40d768
    return function_40d7ba(v1, v1, v1);
}

// Address range: 0x40d776 - 0x40d785
int64_t function_40d776(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40d776
    if (a4 == 0) {
        // 0x40d7b7
        int64_t result; // 0x40d776
        return result;
    }
    // 0x40d778
    return a2 & 0xffffffff ^ 62;
}

// Address range: 0x40d788 - 0x40d78c
int64_t function_40d788(int64_t a1) {
    // 0x40d788
    int64_t v1; // 0x40d788
    return v1 & 0xffffffff;
}

// Address range: 0x40d7ba - 0x40d7be
int64_t function_40d7ba(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40d7ba
    int64_t v1; // 0x40d7ba
    __asm_out_135((int16_t)a3, (char)v1);
    return v1 & 0xffffffff;
}

// Address range: 0x40d7bf - 0x40d7cb
int64_t function_40d7bf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40d7bf
    int64_t result; // 0x40d7bf
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x40d7d6 - 0x40d7d7
int64_t function_40d7d6(void) {
    // 0x40d7d6
    int64_t result; // 0x40d7d6
    return result;
}

// Address range: 0x40d7f0 - 0x40d807
int64_t function_40d7f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40d7f0
    int64_t v1; // 0x40d7f0
    *(char *)a1 = 2 * (char)v1;
    return function_ffffffff83083885();
}

// Address range: 0x40d82d - 0x40d82f
int64_t function_40d82d(void) {
    // 0x40d82d
    return function_40d7d6();
}

// Address range: 0x40d898 - 0x40d8c1
int64_t function_40d898(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x40d898
    *(char *)a1 = __asm_insb((int16_t)a3);
    char * v1 = (char *)(a3 - 0x5e840cc3); // 0x40d8a1
    int64_t v2; // 0x40d898
    *v1 = *v1 & (char)v2 + 95;
    char * v3 = (char *)(a6 - 43); // 0x40d8a7
    *v3 = *v3 + (char)a3;
    return function_7fa13517();
}

// Address range: 0x40d8df - 0x40d8e3
int64_t function_40d8df(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40d8df
    int64_t result; // 0x40d8df
    return result;
}

// Address range: 0x40d90d - 0x40d910
int64_t function_40d90d(void) {
    // 0x40d90d
    int64_t result; // 0x40d90d
    return result;
}

// Address range: 0x40d927 - 0x40d946
int64_t function_40d927(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40d927
    int64_t v1; // 0x40d927
    *(int32_t *)a2 = (int32_t)v1 - (int32_t)a3;
    __asm_wait();
    int64_t v2; // 0x40d927
    *(char *)a3 = *(char *)&v2 ^ -66;
    *(char *)-0x6b70cc76 = *(char *)-0x6b70cc76 & (char)(v1 / 256);
    *(int32_t *)a3 = *(int32_t *)&v2 | (int32_t)a4;
    int64_t v3; // 0x40d927
    __asm_outsd((int16_t)a3, *(int32_t *)&v3);
    return function_61d9fd9f();
}

// Address range: 0x40d986 - 0x40d989
int64_t function_40d986(int64_t a1) {
    // 0x40d986
    __asm_int((char)a1);
    int64_t result; // 0x40d986
    return result;
}

// Address range: 0x40d989 - 0x40d996
int64_t function_40d989(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40d989
    *(char *)a1 = __asm_insb((int16_t)a3);
    return function_ffffffff95b4f718();
}

// Address range: 0x40d9c3 - 0x40d9c5
int64_t function_40d9c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40d9c3
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x40d9c3
    return result;
}

// Address range: 0x40d9dd - 0x40d9e3
int64_t function_40d9dd(int64_t a1, int64_t a2) {
    // 0x40d9dd
    return function_70a787ef();
}

// Address range: 0x40d9f1 - 0x40d9fb
int64_t function_40d9f1(void) {
    // 0x40d9f1
    return __asm_in_137(56);
}

// Address range: 0x40da5e - 0x40da60
int64_t function_40da5e(void) {
    // 0x40da5e
    int64_t result; // 0x40da5e
    return result;
}

// Address range: 0x40da60 - 0x40da63
int64_t function_40da60(int64_t a1) {
    // 0x40da60
    int64_t result; // 0x40da60
    return result;
}

// Address range: 0x40da65 - 0x40da70
int64_t function_40da65(void) {
    // 0x40da65
    int64_t result; // 0x40da65
    return result;
}

// Address range: 0x40da82 - 0x40da85
int64_t function_40da82(int64_t a1) {
    // 0x40da82
    int64_t result; // 0x40da82
    return result;
}

// Address range: 0x40da8f - 0x40da94
int64_t function_40da8f(void) {
    // 0x40da8f
    int64_t v1; // 0x40da8f
    int64_t v2 = v1;
    bool v3; // 0x40da8f
    return (v2 - (v3 ? 27 : 26)) % 256 | v2 & -256;
}

// Address range: 0x40db45 - 0x40db4b
int64_t function_40db45(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40db45
    int64_t result; // 0x40db45
    __asm_out_135((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x40dbea - 0x40dc81
int64_t function_40dbea(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6;
    int64_t v2; // 0x40dbea
    unsigned char v3 = (char)v2;
    char v4 = a3 / 256; // 0x40dbec
    unsigned char v5 = v3 + v4; // 0x40dbec
    *(char *)a1 = v5;
    int64_t v6 = v2 & 0xffffffff; // 0x40dbee
    int64_t v7 = a3 & -256 | 234; // 0x40dbf0
    int64_t v8 = a5 & 0xffffffff; // 0x40dbf2
    if (((v5 ^ v3) & (v5 ^ v4)) < 0) {
        int64_t v9 = (int64_t)&v1; // 0x40dbf2
        int64_t v10 = v6; // 0x40dbea
        int64_t v11 = v8; // 0x40dc51
        *(int32_t *)v10 = (int32_t)v9;
        v11 -= 8;
        *(int64_t *)v11 = v9;
        bool v12; // 0x40dbea
        v10 += (v12 ? -4 : 4);
        while (v5 == 0) {
            // 0x40dc4e
            *(int32_t *)v10 = (int32_t)v9;
            v11 -= 8;
            *(int64_t *)v11 = v9;
            v10 += (v12 ? -4 : 4);
        }
        // 0x40dc59
        *(int64_t *)(v8 - 16) = *(int64_t *)v7;
        int64_t v13; // bp+29, 0x40dbea
        return (int64_t)&v13;
    }
    int64_t * v14 = (int64_t *)(v8 - 8);
    if ((int32_t)(v2 ^ a4) == 0) {
        // 0x40dc6b
        *v14 = v7;
        int64_t v15 = __asm_iretd(v6); // 0x40dc6c
        float80_t v16; // 0x40dbea
        *(int32_t *)(v7 - 65 + 2 * v6) = (int32_t)v16;
        return v15 & -0x10000 | v15 - (256 * (int64_t)(v5 < v3) + v2 & 0xff00) & 0xff00 | 15;
    }
    // 0x40dbf8
    *v14 = 24;
    char * v17 = (char *)(v6 - 0x75ac322f); // 0x40dbff
    *v17 = *v17 - (v5 < v3 ? -21 : -22);
    *(int64_t *)(v8 - 16) = 34;
    __asm_int1(v6);
    int64_t result = __asm_in_137(42); // 0x40dc0a
    if ((result & 0x4000) == 0) {
        // 0x40dc36
        return result;
    }
    // 0x40dc10
    return v2 & 0xffffffff;
}

// Address range: 0x40dcd5 - 0x40dcd6
int64_t function_40dcd5(int64_t a1) {
    // 0x40dcd5
    int64_t result; // 0x40dcd5
    return result;
}
