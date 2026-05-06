/*
 * Targeted RetDec C for native executable gap queue batch 1076.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x23d8c9-0x23dac9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23dac9-0x23dcc9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23dcc9-0x23dec9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23dec9-0x23e0c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23e2c9-0x23e4c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23e4c9-0x23e6c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23e6c9-0x23e8c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x27d19f-0x27d39f rank=- name=- kind=- bytes=- uncovered=-
 *   0x27d39f-0x27d59f rank=- name=- kind=- bytes=- uncovered=-
 *   0x27d59f-0x27d79f rank=- name=- kind=- bytes=- uncovered=-
 *   0x27d79f-0x27d99f rank=- name=- kind=- bytes=- uncovered=-
 *   0x27d99f-0x27db9f rank=- name=- kind=- bytes=- uncovered=-
 *   0x27db9f-0x27dc9f rank=- name=- kind=- bytes=- uncovered=-
 *   0x27dd9f-0x27df9f rank=- name=- kind=- bytes=- uncovered=-
 *   0x27df9f-0x27e19f rank=- name=- kind=- bytes=- uncovered=-
 *   0x348ed8-0x3490d8 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g6;
extern int g7;
extern int g8;
extern int g9;
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

int64_t function_160e025();
int64_t function_23c10be0();
int64_t function_23d8c9(int64_t a1, int64_t a2);
int64_t function_23d8e7(int64_t a1);
int64_t function_23d8f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23d9a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23d9ef(int64_t result);
int64_t function_23da1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23da36(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23da7c(int64_t a1);
int64_t function_23da88(void);
int64_t function_23dab0(void);
int64_t function_23dabf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23db84(void);
int64_t function_23db86(void);
int64_t function_23db88(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23dbb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23dbe0(void);
int64_t function_23dbf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23dc15(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23dc1b(int64_t a1, int64_t a2);
int64_t function_23dc22(void);
int64_t function_23dc6e(void);
int64_t function_23dc7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23dc8a(void);
int64_t function_23dca8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_23dcc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23dcfc(void);
int64_t function_23dd3e(void);
int64_t function_23dd4d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23dd67(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23dd7d(void);
int64_t function_23dd82(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_23de5d(void);
int64_t function_23de82(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23defa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23df8b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23dfc5(void);
int64_t function_23dfcd(int64_t a1);
int64_t function_23dfd4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_23e003(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23e054(void);
int64_t function_23e063(void);
int64_t function_23e065(void);
int64_t function_23e067(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23e0b7(void);
int64_t function_23e2c9(void);
int64_t function_23e2d6(void);
int64_t function_23e2ed(int64_t a1);
int64_t function_23e34a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23e373(void);
int64_t function_23e37f(void);
int64_t function_23e3ae(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_23e46f(void);
int64_t function_23e475(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t result, int64_t a6);
int64_t function_23e487(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23e536(int64_t a1);
int64_t function_23e540(int64_t a1);
int64_t function_23e5a7(int64_t a1, int64_t a2);
int64_t function_23e5c5(int64_t a1, int64_t a2);
int64_t function_23e645(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23e651(void);
int64_t function_23e6bd(void);
int64_t function_23e6da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23e738(void);
int64_t function_23e73b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23e840(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_27d19f(void);
int64_t function_27d1a1(int64_t a1);
int64_t function_27d1c0(int64_t a1, int64_t a2);
int64_t function_27d1d0(void);
int64_t function_27d2c0(void);
int64_t function_27d2c8(void);
int64_t function_27d2de(void);
int64_t function_27d385(int64_t a1);
int64_t function_27d417(int64_t a1);
int64_t function_27d428(void);
int64_t function_27d440(int64_t a1);
int64_t function_27d483(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27d4e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27d50b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_27d548(void);
int64_t function_27d567(void);
int64_t function_27d570(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27d58f(int64_t a1);
int64_t function_27d591(int64_t a1);
int64_t function_27d613(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27d64e(int64_t a1);
int64_t function_27d659(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_27d727(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_27d76e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27d7ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27d7e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27d806(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_27d84d(int64_t a1, int64_t a2);
int64_t function_27d872(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27d973(int64_t a1);
int64_t function_27d999(int64_t a1, int64_t a2);
int64_t function_27d9f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_27dae6(int64_t a1, int64_t a2);
int64_t function_27db4b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27db80(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_27dbaa(int64_t a1);
int64_t function_27dc0a(void);
int64_t function_27dc39(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_27dc64(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_27dc6b(void);
int64_t function_27dc9b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27dd52();
int64_t function_27dd9f(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_27ddbd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_27dded(void);
int64_t function_27de12(void);
int64_t function_27de18(void);
int64_t function_27de2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27de75(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27dec1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_27df68(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27df86(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_27e03b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27e04a(int64_t a1);
int64_t function_27e063(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27e0c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27e11a(int64_t a1);
int64_t function_27e147(void);
int64_t function_27e14d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_348ed8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_348f94(void);
int64_t function_348fd2(void);
int64_t function_348ff7(int64_t a1);
int64_t function_348fff(int64_t a1);
int64_t function_349030(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3490aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_352ae6ef();
int64_t function_3d23de17();
int64_t function_438a8fed();
int64_t function_5fffd9aa();
int64_t function_6b16ed48();
int64_t function_73f7dd27();
int64_t function_7a2d702e();
int64_t function_ffffffff84e80de6();
int64_t function_ffffffff8579d6d1();
int64_t function_ffffffff9c269e58();
int64_t function_ffffffffe8ecf57f();
int64_t unknown_1122af8d();
int64_t unknown_118b990();
int64_t unknown_14197f54();
int64_t unknown_1bfef119();
int64_t unknown_20cbc08();
int64_t unknown_249319b4();
int64_t unknown_3021f19f();
int64_t unknown_345af538();
int64_t unknown_34a70df5();
int64_t unknown_34fcd677();
int64_t unknown_3a330881();
int64_t unknown_3a75cdab();
int64_t unknown_3ae53628();
int64_t unknown_3cecc9fb();
int64_t unknown_3e6a8d4e();
int64_t unknown_4b21c118();
int64_t unknown_551d661a();
int64_t unknown_5c7d6d7b();
int64_t unknown_6024b871();
int64_t unknown_62af209f();
int64_t unknown_666766cc();
int64_t unknown_671a21fa();
int64_t unknown_69fa2662();
int64_t unknown_6b341bbd();
int64_t unknown_783dd12f();
int64_t unknown_7a4060b5();
int64_t unknown_9a2ad3a();
int64_t unknown_e80095e();
int64_t unknown_ffffffff8b957756();
int64_t unknown_ffffffff90292795();
int64_t unknown_ffffffff9124be6e();
int64_t unknown_ffffffff929ca111();
int64_t unknown_ffffffff93ee0ce7();
int64_t unknown_ffffffff9f9c895e();
int64_t unknown_ffffffffa82480be();
int64_t unknown_ffffffffac260844();
int64_t unknown_ffffffffb4795858();
int64_t unknown_ffffffffba35bf93();
int64_t unknown_ffffffffbc20aa33();
int64_t unknown_ffffffffcbf71447();
int64_t unknown_ffffffffd26f2677();
int64_t unknown_ffffffffd7cceefe();
int64_t unknown_ffffffffd9b31aca();
int64_t unknown_ffffffffe42e610b();
int64_t unknown_ffffffffe528f9d0();
int64_t unknown_ffffffffe858714e();
int64_t unknown_fffffffffdeaefb0();
int64_t unknown_ffffffffff2b1074();

// Address range: 0x23d8c9 - 0x23d8d6
int64_t function_23d8c9(int64_t a1, int64_t a2) {
    int64_t v1 = unknown_ffffffffe528f9d0(a1, a2); // 0x23d8c9
    return (int64_t)(*(int32_t *)(a1 - 0x3c3a2d3e) & (int32_t)v1);
}

// Address range: 0x23d8e7 - 0x23d8e8
int64_t function_23d8e7(int64_t a1) {
    // 0x23d8e7
    int64_t result; // 0x23d8e7
    return result;
}

// Address range: 0x23d8f2 - 0x23d9a4
int64_t function_23d8f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23d8f2
    bool v1; // 0x23d8f2
    *(char *)a1 = (char)a3 + (char)a1 + (char)v1;
    int64_t v2 = unknown_671a21fa(); // 0x23d8f4
    uint64_t v3 = unknown_ffffffffe42e610b(); // 0x23d905
    int64_t v4 = v1 ? -4 : 4; // 0x23d980
    int64_t v5 = v4 + a1; // 0x23d980
    int64_t v6 = v4 + a2; // 0x23d980
    *(int32_t *)v5 = *(int32_t *)v6;
    int64_t v7 = v5 + v4; // 0x23d981
    int64_t v8; // 0x23d8f2
    char * v9 = (char *)(v8 - 123 + 8 * v3); // 0x23d984
    *v9 = *v9 | (char)(v3 / 256);
    int64_t v10 = v2 + v8 & 0xffffff00 | 232; // 0x23d989
    int32_t * v11 = (int32_t *)((8 * v7 & 0x7fffffff8) + 96 + v10); // 0x23d98b
    *v11 = *v11 + (int32_t)v3;
    int64_t result = __asm_hlt(v3 & 0xffffffff, v6 + v4); // 0x23d991
    if ((char)v7 < 55) {
        // 0x23d925
        return result;
    }
    char * v12 = (char *)(v10 - 0x17ff6e27); // 0x23d994
    *v12 = *v12 - 24;
    int32_t * v13 = (int32_t *)(a4 - 0x4324600b); // 0x23d99a
    *v13 = *v13 + (int32_t)v10;
    if (a4 != 0) {
        // 0x23d925
        return result;
    }
    // 0x23d927
    unknown_345af538();
    int32_t * v14 = (int32_t *)(v8 - 0x72f92ff5); // 0x23d939
    *v14 = *v14 + (int32_t)v8;
    return unknown_ffffffffcbf71447();
}

// Address range: 0x23d9a6 - 0x23d9b0
int64_t function_23d9a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23d9a6
    int64_t v1; // 0x23d9a6
    *(char *)a3 = (char)v1 + (char)((uint64_t)v1 / 256);
    return unknown_fffffffffdeaefb0(a1, a2, a3, a4);
}

// Address range: 0x23d9ef - 0x23d9f9
int64_t function_23d9ef(int64_t result) {
    // 0x23d9ef
    unknown_34a70df5(result);
    int64_t v1; // 0x23d9ef
    int32_t * v2 = (int32_t *)(v1 - 2); // 0x23d9f4
    *v2 = *v2 + 1;
    return result;
}

// Address range: 0x23da1e - 0x23da36
int64_t function_23da1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23da1e
    int64_t v1; // 0x23da1e
    int64_t * v2 = (int64_t *)(v1 + 39); // 0x23da24
    *v2 = *v2 | a3;
    return 0x3876bc9a;
}

// Address range: 0x23da36 - 0x23da5e
int64_t function_23da36(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 - 0x7066f1c2); // 0x23da46
    int64_t v2; // 0x23da36
    *v1 = *v1 + (int32_t)v2;
    return (0x10000 * (int32_t)v2 >> 16) - 0x3d000cd3;
}

// Address range: 0x23da7c - 0x23da7f
int64_t function_23da7c(int64_t a1) {
    // 0x23da7c
    int64_t result; // 0x23da7c
    return result;
}

// Address range: 0x23da88 - 0x23da8b
int64_t function_23da88(void) {
    // 0x23da88
    int64_t result; // 0x23da88
    return result;
}

// Address range: 0x23dab0 - 0x23dabc
int64_t function_23dab0(void) {
    // 0x23dab0
    int64_t v1; // 0x23dab0
    int64_t v2 = v1;
    *(char *)(4 * v2 + 0x269e25c5) = (char)v2;
    return function_3d23de17();
}

// Address range: 0x23dabf - 0x23dae0
int64_t function_23dabf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23dabf
    int64_t v1; // 0x23dabf
    *(char *)a3 = (char)v1 - 44;
    int64_t v2; // 0x23dabf
    int32_t v3 = *(int32_t *)&v2; // 0x23dac3
    *(int32_t *)v2 = 2 * v3 | (int32_t)(v3 < 0);
    int32_t v4 = a1; // 0x23dad4
    uint64_t v5 = a4 & -256 | 44;
    int32_t v6 = v5 % 256 % 256 | v5 & 0xffffff00; // 0x23dad4
    uint32_t v7 = v6 + v4; // 0x23dad4
    while (((v7 ^ v6) & (v7 ^ v4)) < 0) {
        // 0x23dac5
        v5 = (int64_t)v7;
        v6 = v5 % 256 % 256 | v5 & 0xffffff00;
        v7 = v6 + v4;
    }
    // 0x23dad8
    return __asm_int1();
}

// Address range: 0x23db84 - 0x23db86
int64_t function_23db84(void) {
    // 0x23db84
    int64_t v1; // 0x23db84
    return function_23db88(v1, v1, v1, v1);
}

// Address range: 0x23db86 - 0x23db88
int64_t function_23db86(void) {
    // 0x23db86
    int64_t result; // 0x23db86
    return result;
}

// Address range: 0x23db88 - 0x23dba6
int64_t function_23db88(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23db88
    int64_t v1; // 0x23db88
    int32_t * v2 = (int32_t *)((256 * v1 & 0xff00 ^ a4) - 108); // 0x23db8c
    *v2 = *v2 + (int32_t)v1;
    char * v3 = (char *)(a3 - 24); // 0x23db94
    *v3 = *v3 >> 1;
    int32_t * v4 = (int32_t *)(a1 + 0x3d8d2eb + 4 * a3); // 0x23db97
    *v4 = *v4 + (int32_t)a2;
    int64_t result = unknown_20cbc08(); // 0x23db9e
    char * v5 = (char *)(a2 - 118); // 0x23dba3
    *v5 = *v5 + (char)a3;
    return result;
}

// Address range: 0x23dbb8 - 0x23dbd9
int64_t function_23dbb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23dbb8
    unknown_ffffffffa82480be();
    char * v1 = (char *)(a4 - 0x76265a00); // 0x23dbbd
    int64_t v2; // 0x23dbb8
    *v1 = *v1 + (char)v2;
    int64_t result = __asm_iretd(); // 0x23dbd3
    *(char *)result = (char)a4;
    return result;
}

// Address range: 0x23dbe0 - 0x23dbe5
int64_t function_23dbe0(void) {
    // 0x23dbe0
    return function_ffffffff84e80de6();
}

// Address range: 0x23dbf8 - 0x23dc07
int64_t function_23dbf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffffd7cceefe(a1, a2, a3, a4); // 0x23dbf8
    char * v1 = (char *)(a3 - 0x38547fd0); // 0x23dbfd
    bool v2; // 0x23dbf8
    *v1 = *v1 / 2 | 128 * (char)(bool)v2;
    *(char *)a2 = -1;
    return result;
}

// Address range: 0x23dc15 - 0x23dc1b
int64_t function_23dc15(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 15); // 0x23dc17
    int64_t result; // 0x23dc15
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x23dc1b - 0x23dc1e
int64_t function_23dc1b(int64_t a1, int64_t a2) {
    // 0x23dc1b
    int64_t result; // 0x23dc1b
    *(char *)a2 = 2 * (char)result;
    return result;
}

// Address range: 0x23dc22 - 0x23dc23
int64_t function_23dc22(void) {
    // 0x23dc22
    int64_t result; // 0x23dc22
    return result;
}

// Address range: 0x23dc6e - 0x23dc71
int64_t function_23dc6e(void) {
    // 0x23dc6e
    int64_t result; // 0x23dc6e
    return result;
}

// Address range: 0x23dc7a - 0x23dc81
int64_t function_23dc7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23dc7a
    int64_t result; // 0x23dc7a
    *(char *)a4 = (char)(result | result);
    int64_t v1; // 0x23dc7a
    *(int32_t *)a2 = *(int32_t *)&v1 + (int32_t)a1;
    return result;
}

// Address range: 0x23dc8a - 0x23dc8b
int64_t function_23dc8a(void) {
    // 0x23dc8a
    int64_t result; // 0x23dc8a
    return result;
}

// Address range: 0x23dca8 - 0x23dcbf
int64_t function_23dca8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x23dca8
    int64_t v1; // 0x23dca8
    char * v2 = (char *)((v1 ^ 222) + 8 * v1); // 0x23dcaa
    unsigned char v3 = *v2; // 0x23dcaa
    unsigned char v4 = (char)a4 % 32; // 0x23dcaa
    int64_t v5; // 0x23dca8
    int64_t v6; // 0x23dca8
    if (v4 != 0) {
        *v2 = v3 >> v4 | (char)((int16_t)v3 << (int16_t)(9 - v4));
        v5 = v6;
    }
    *(int32_t *)-0x17773b4a = *(int32_t *)-0x17773b4a + (int32_t)a1;
    int32_t * v7 = (int32_t *)(v5 - 6); // 0x23dcb5
    uint32_t v8 = *v7; // 0x23dcb5
    uint32_t v9 = v8 + (int32_t)a2; // 0x23dcb5
    *v7 = v9;
    char v10 = *(char *)&v6; // 0x23dcb8
    *(char *)v6 = v10 + (char)(a3 / 256) + (char)(v9 < v8);
    return function_73f7dd27();
}

// Address range: 0x23dcc2 - 0x23dcfc
int64_t function_23dcc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23dcc2
    unknown_ffffffffd9b31aca();
    int64_t v1 = a4 + a2 & 0xffffffff; // 0x23dcd0
    char * v2 = (char *)v1; // 0x23dcd4
    *v2 = *v2 + 47;
    __asm_hlt(a1, v1);
    char v3 = *(char *)-0x51563413; // 0x23dce6
    int64_t v4; // 0x23dcc2
    *(char *)-0x51563413 = v3 + (char)((uint64_t)v4 / 256);
    return (int64_t)(__asm_in(-4) & -256) | (int64_t)*(char *)-0x1f46d534c3a9fb00;
}

// Address range: 0x23dcfc - 0x23dd03
int64_t function_23dcfc(void) {
    // 0x23dcfc
    int64_t v1; // 0x23dcfc
    return function_23dd4d(v1, v1, v1, v1);
}

// Address range: 0x23dd3e - 0x23dd40
int64_t function_23dd3e(void) {
    // 0x23dd3e
    int64_t v1; // 0x23dd3e
    int64_t result = function_23dd82(v1, v1, v1, v1, v1, v1, (int64_t)&g9, (int64_t)&g9); // 0x23dd3e
    return result;
}

// Address range: 0x23dd4d - 0x23dd64
int64_t function_23dd4d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x23dd4d
    if (v1 != 0) {
        *(int32_t *)a2 = (int32_t)a2 >> v1;
    }
    unknown_ffffffffb4795858();
    char v2 = *(char *)0x4e25c5b4; // 0x23dd5a
    int64_t v3; // 0x23dd4d
    *(char *)0x4e25c5b4 = v2 + (char)((v3 + a4) / 256);
    return a3 & 0xffffffff;
}

// Address range: 0x23dd67 - 0x23dd7c
int64_t function_23dd67(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_ffffffff9124be6e(); // 0x23dd67
    int64_t v2; // 0x23dd67
    bool v3; // 0x23dd67
    int64_t result = ((int64_t)v3 - v2 + v1) % 256 | v1 & -256; // 0x23dd70
    int32_t * v4 = (int32_t *)(result - 0x29ffecf6); // 0x23dd74
    *v4 = *v4 + (int32_t)a3;
    *(char *)a1 = __asm_insb((int16_t)a3);
    return result;
}

// Address range: 0x23dd7d - 0x23dd7f
int64_t function_23dd7d(void) {
    // 0x23dd7d
    int64_t result; // 0x23dd7d
    bool v1; // 0x23dd7d
    if (v1) {
        int64_t v2; // 0x23dd7d
        result = function_23dd67(v2, v2, v2);
    }
    // 0x23dd7f
    return result;
}

// Address range: 0x23dd82 - 0x23de53
int64_t function_23dd82(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x23dd82
    int64_t v1; // 0x23dd82
    int64_t v2 = v1;
    uint64_t v3 = v1;
    int16_t v4 = a3; // 0x23dd82
    __asm_out_133(v4, (int32_t)v3);
    char v5 = v1;
    char v6 = v5 - (char)a5; // 0x23dd84
    char * v7 = (char *)(a4 - 0x519afe18); // 0x23dd87
    unsigned char v8 = *v7; // 0x23dd87
    unsigned char v9 = (char)a4 % 32; // 0x23dd87
    bool v10 = ((v6 ^ v5) & (char)(v1 ^ a5)) < 0; // 0x23dd87
    if (v9 != 0) {
        unsigned char v11 = v8 >> v9 | v8 << 8 - v9; // 0x23dd87
        *v7 = v11;
        v10 = v9 == 1 ? v11 / 128 != v11 / 64 % 2 : ((v6 ^ v5) & (char)(v1 ^ a5)) < 0;
    }
    if (v6 < 0 != v10) {
        int64_t result = v3 & -256 | (int64_t)*(char *)(v3 % 256 + v2); // 0x23dd91
        if (v6 != 0) {
            result = function_23dd7d();
        }
        // 0x23dd95
        *(int32_t *)v2 = (int32_t)v2 + (int32_t)a3;
        return result;
    }
    int64_t v12 = unknown_1bfef119(); // 0x23de13
    char * v13 = (char *)v12; // 0x23de1b
    unsigned char v14 = *v13; // 0x23de1b
    unsigned char v15 = (char)v12; // 0x23de1b
    char v16 = v14 - v15; // 0x23de1b
    unsigned char v17 = llvm_ctpop_i8(v16); // 0x23de1b
    *v13 = v16;
    __asm_out_133(v4, (int32_t)unknown_3ae53628());
    int32_t * v18 = (int32_t *)(v2 - 0x674d2f41); // 0x23de28
    uint32_t v19 = *v18; // 0x23de28
    *v18 = v19 / 2 | 0x80000000 * v19;
    unknown_ffffffffac260844();
    bool v20; // 0x23dd82
    *(int64_t *)0x9801e814 = 0x4000 * (int64_t)v20 | 1024 * (int64_t)v20 | 512 * (int64_t)v20 | 256 * (int64_t)v20 | 64 * (int64_t)(v16 == 0) | 128 * (int64_t)(v16 < 0) | 16 * (int64_t)(v14 % 16 - v15 % 16 > 15) | 4 * (int64_t)(v17 % 2 == 0) | 2048 * (int64_t)(v19 % 2 != (int32_t)(v19 < 0)) | 3;
    int64_t result2 = unknown_3cecc9fb(); // 0x23ddf5
    *(int64_t *)0x9801e80c = 0x93aef5d6;
    int32_t * v21 = (int32_t *)((v2 & -256 | 219) - 46); // 0x23de05
    *v21 = *v21 + (int32_t)a2;
    return result2;
}

// Address range: 0x23de5d - 0x23de5f
int64_t function_23de5d(void) {
    // 0x23de5d
    int64_t result; // 0x23de5d
    return result;
}

// Address range: 0x23de82 - 0x23de8f
int64_t function_23de82(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23de82
    int64_t v1; // 0x23de82
    *(char *)a3 = 2 * (char)v1;
    int64_t result; // 0x23de82
    *(char *)result = *(char *)&result - (char)v1;
    return result;
}

// Address range: 0x23defa - 0x23df89
int64_t function_23defa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x23defa
    uint32_t v3 = (int32_t)v2;
    uint32_t v4 = (int32_t)v2 + v3; // 0x23defa
    int32_t * v5 = (int32_t *)a1; // 0x23defa
    *v5 = v4;
    char * v6 = (char *)(v2 + 0x4358fe07); // 0x23defc
    *v6 = *v6 - (v4 < v3 ? 82 : 81);
    *(int32_t *)a2 = *(int32_t *)&v1 & (int32_t)a3;
    *v5 = (int32_t)v2;
    bool v7; // 0x23defa
    unsigned char v8 = *(char *)((v7 ? -4 : 4) + a1) | (char)(v2 / 256); // 0x23df09
    int64_t v9 = v2 & -0xff01; // 0x23df09
    unsigned char v10 = *(char *)((256 * (int64_t)v8 | v9) + (v2 + 208) % 256); // 0x23df0b
    int64_t v11 = -0x5f500000; // bp-8, 0x23df0c
    *(char *)0x6532eb5034f44482 = v10;
    int64_t v12; // 0x23defa
    *(int32_t *)a4 = *(int32_t *)&v12 ^ (int32_t)a2;
    __asm_out_134((int16_t)a3, v10);
    char * v13 = (char *)(v2 & -256 | (int64_t)v10); // 0x23df28
    *v13 = *v13 ^ (char)a4;
    int64_t v14 = (int64_t)&v11;
    int64_t v15 = unknown_9a2ad3a(); // 0x23df33
    int32_t v16 = v15;
    __asm_out_133(50, v16);
    int32_t v17; // 0x23defa
    int64_t v18; // 0x23defa
    int64_t v19; // 0x23defa
    int64_t v20; // 0x23defa
    int32_t v21; // 0x23df3e
    int32_t * v22; // 0x23df63
    if ((*(int32_t *)(a3 + 110) | (int32_t)a4) >= 0) {
        // 0x23df3d
        v21 = *(int32_t *)v15 + v16;
        v17 = v21;
        v18 = v21;
        v19 = *(int64_t *)v14;
        v20 = v14 + 8;
    } else {
        // 0x23df63
        v22 = (int32_t *)(v1 + 0x5ac2e6b8);
        *v22 = *v22 + (int32_t)v1;
        v17 = v16;
        v18 = v15;
        v19 = 256 * (int64_t)(*(char *)(a4 + 0x4f400e9) | v8) | v9;
        v20 = v14;
    }
    int32_t * v23 = (int32_t *)v18; // 0x23df6f
    *v23 = *v23 + v17;
    uint32_t result = 0x10000 * v17 >> 16; // 0x23df71
    int64_t v24 = v20 - 8; // 0x23df79
    *(int64_t *)v24 = -0x70fe6100;
    *(int32_t *)v1 = *(int32_t *)&v1 | -24;
    int32_t * v25 = (int32_t *)(v19 + 2 * v2); // 0x23df82
    uint32_t v26 = *v25; // 0x23df82
    int32_t v27 = v26 + result; // 0x23df82
    *v25 = v27;
    bool v28 = ((v27 ^ v26) & (v27 ^ result)) < 0; // 0x23df85
    int64_t v29 = v19; // 0x23df85
    while (v27 < v26 || v27 == 0) {
        // 0x23df33
        v14 = v24;
        v15 = unknown_9a2ad3a();
        v16 = v15;
        __asm_out_133(50, v16);
        if (v27 < 0 == v28) {
            // 0x23df3d
            v21 = *(int32_t *)v15 + v16;
            v17 = v21;
            v18 = v21;
            v19 = *(int64_t *)v14;
            v20 = v14 + 8;
        } else {
            // 0x23df63
            v22 = (int32_t *)(v1 + 0x5ac2e6b8);
            *v22 = *v22 + (int32_t)v1;
            v17 = v16;
            v18 = v15;
            v19 = v29;
            v20 = v14;
        }
        // 0x23df6f
        v23 = (int32_t *)v18;
        *v23 = *v23 + v17;
        result = 0x10000 * v17 >> 16;
        v24 = v20 - 8;
        *(int64_t *)v24 = -0x70fe6100;
        *(int32_t *)v1 = *(int32_t *)&v1 | -24;
        v25 = (int32_t *)(v19 + 2 * v2);
        v26 = *v25;
        v27 = v26 + result;
        *v25 = v27;
        v28 = ((v27 ^ v26) & (v27 ^ result)) < 0;
        v29 = v19;
    }
    // 0x23df88
    return result;
}

// Address range: 0x23df8b - 0x23dfbb
int64_t function_23df8b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23df8b
    bool v1; // 0x23df8b
    bool v2 = v1;
    __asm_sti();
    *(char *)a3 = 2 * (char)a3;
    *(int32_t *)a4 = __asm_insd((int16_t)a3);
    return function_160e025((v2 ? -4 : 4) + a4 + (v2 ? -1 : 1));
}

// Address range: 0x23dfc5 - 0x23dfcc
int64_t function_23dfc5(void) {
    // 0x23dfc5
    int64_t v1; // 0x23dfc5
    __asm_out(35, (int32_t)v1);
    return function_ffffffff9c269e58();
}

// Address range: 0x23dfcd - 0x23dfd1
int64_t function_23dfcd(int64_t a1) {
    // 0x23dfcd
    int64_t v1; // 0x23dfcd
    int64_t v2 = v1;
    return 257 * v2 & 0xff00 | v2 & -0xff01;
}

// Address range: 0x23dfd4 - 0x23dffd
int64_t function_23dfd4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2; // 0x23dfd4
    int32_t v3 = v2; // 0x23dfd4
    int32_t * v4 = (int32_t *)a1; // 0x23dfd4
    *v4 = v3 + (int32_t)a1;
    unsigned char v5 = (char)a3 - (char)(a3 / 256); // 0x23dfd7
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x23dfd7
    int64_t v7 = a3 & -256 | (int64_t)v5; // 0x23dfd7
    int64_t v8; // 0x23dfd4
    uint32_t v9 = *(int32_t *)&v8; // 0x23dfd9
    int64_t v10 = v9; // 0x23dfd9
    bool v11; // 0x23dfd4
    int64_t v12 = v11 ? -4 : 4; // 0x23dfd9
    int64_t v13 = v12 + a2; // 0x23dfd9
    v8 = v13;
    v8 = v13;
    int64_t result = v10; // 0x23dfda
    if (v6 % 2 == 0) {
        int64_t v14 = (int64_t)(*(int32_t *)(v10 + 0x20aa2afd) & v3); // 0x23dfdc
        *(char *)v1 = *(char *)&v1 + (char)v9;
        *v4 = *(int32_t *)&v8;
        int64_t v15 = v12 + v10; // 0x23dfe5
        int64_t v16 = __asm_wait(v12 + a1, v15, v7); // 0x23dfe6
        int64_t * v17 = (int64_t *)v14; // 0x23dfe7
        *v17 = (int64_t)&g6;
        v8 = v15 + (v11 ? -1 : 1);
        *(int64_t *)(v14 - 8) = *v17;
        result = v16 + 0x2e9be7ce + (int64_t)((int32_t)v16 < 0x12df5301) & 0xffffffff;
    }
    // 0x23dff9
    __asm_outsd((int16_t)v7, *(int32_t *)v8);
    return result;
}

// Address range: 0x23e003 - 0x23e03e
int64_t function_23e003(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x23e003
    *(int32_t *)a3 = (int32_t)(int64_t)&v2 + (int32_t)a3;
    if (a4 != 1) {
        // 0x23e02c
        return (int64_t)*(int32_t *)&v1;
    }
    // 0x23e00e
    int64_t result; // 0x23e003
    __asm_fldenv(*(int224_t *)(result + 5));
    return result;
}

// Address range: 0x23e054 - 0x23e05d
int64_t function_23e054(void) {
    // 0x23e054
    return unknown_e80095e();
}

// Address range: 0x23e063 - 0x23e064
int64_t function_23e063(void) {
    // 0x23e063
    int64_t result; // 0x23e063
    return result;
}

// Address range: 0x23e065 - 0x23e066
int64_t function_23e065(void) {
    // 0x23e065
    int64_t result; // 0x23e065
    return result;
}

// Address range: 0x23e067 - 0x23e0b7
int64_t function_23e067(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23e067
    int64_t v1; // 0x23e067
    __asm_outsd((int16_t)a3, (int32_t)v1);
    unknown_ffffffffff2b1074();
    __asm_sti();
    char v2 = *(char *)(v1 + 0xa8801e8); // 0x23e082
    bool v3; // 0x23e067
    unknown_ffffffff90292795((v3 ? -4 : 4) + a1);
    uint32_t v4 = *(int32_t *)-0x5ffe172027d1c13b ^ 69;
    unsigned char v5 = *(char *)(int64_t)v4; // 0x23e0a1
    unsigned char v6 = (char)v4; // 0x23e0a1
    __asm_outsb((int16_t)(a3 & 0xff00 | (int64_t)(v2 ^ 117)), __readgsbyte(a5));
    int64_t v7 = unknown_3a75cdab(); // 0x23e0aa
    if (v5 - v6 >= 0) {
        v7 = function_23e065();
    }
    char * v8 = (char *)(v1 + 0x5d3a01e8); // 0x23e0ac
    *v8 = *v8 + (char)(v5 < v6) + (char)(v7 / 256);
    return function_23e063();
}

// Address range: 0x23e0b7 - 0x23e0b8
int64_t function_23e0b7(void) {
    // 0x23e0b7
    int64_t result; // 0x23e0b7
    return result;
}

// Address range: 0x23e2c9 - 0x23e2ca
int64_t function_23e2c9(void) {
    // 0x23e2c9
    int64_t result; // 0x23e2c9
    return result;
}

// Address range: 0x23e2d6 - 0x23e2d7
int64_t function_23e2d6(void) {
    // 0x23e2d6
    int64_t result; // 0x23e2d6
    return result;
}

// Address range: 0x23e2ed - 0x23e2f9
int64_t function_23e2ed(int64_t a1) {
    // 0x23e2ed
    bool v1; // 0x23e2ed
    int64_t v2 = (v1 ? -4 : 4) + a1; // 0x23e2ed
    int32_t * v3 = (int32_t *)(v2 - 0x47f50d9); // 0x23e2ee
    int64_t v4; // 0x23e2ed
    *v3 = *v3 + (int32_t)v4;
    return function_ffffffffe8ecf57f(v2);
}

// Address range: 0x23e34a - 0x23e35c
int64_t function_23e34a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23e34a
    int64_t v1; // 0x23e34a
    int32_t * v2 = (int32_t *)(v1 + 52); // 0x23e34c
    *v2 = *v2 + (int32_t)v1;
    int64_t result = function_23e2d6(); // 0x23e351
    int32_t * v3 = (int32_t *)(result + 0x27b4f9fe); // 0x23e355
    *v3 = *v3 + (int32_t)a2;
    return result;
}

// Address range: 0x23e373 - 0x23e374
int64_t function_23e373(void) {
    // 0x23e373
    int64_t result; // 0x23e373
    return result;
}

// Address range: 0x23e37f - 0x23e386
int64_t function_23e37f(void) {
    // 0x23e37f
    return function_23e373();
}

// Address range: 0x23e3ae - 0x23e3d5
int64_t function_23e3ae(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x23e3ae
    int64_t v1; // 0x23e3ae
    uint64_t v2 = v1;
    int64_t v3 = unknown_249319b4(); // 0x23e3ae
    char * v4 = (char *)(v3 + 0x360e000); // 0x23e3b3
    *v4 = *v4 + (char)v3;
    char * v5 = (char *)(v2 + 0x5101e800); // 0x23e3b9
    *v5 = *v5 + (char)(a4 / 256);
    int32_t * v6 = (int32_t *)v3; // 0x23e3bf
    int32_t v7 = a1; // 0x23e3bf
    *v6 = *v6 + v7;
    int64_t result = 0x10000 * (int32_t)v3 >> 16; // 0x23e3c1
    char * v8 = (char *)(a1 + 37); // 0x23e3c3
    *v8 = *v8 + (char)(v2 / 256);
    int32_t * v9 = (int32_t *)(result - 0x3d747903); // 0x23e3cc
    *v9 = *v9 + v7;
    return result;
}

// Address range: 0x23e46f - 0x23e471
int64_t function_23e46f(void) {
    // 0x23e46f
    int64_t v1; // 0x23e46f
    bool v2; // 0x23e46f
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x23e475 - 0x23e486
int64_t function_23e475(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t result, int64_t a6) {
    char * v1 = (char *)(a1 - 0x1dc8c587 + 8 * a4); // 0x23e476
    bool v2; // 0x23e475
    *v1 = (char)v2 - (char)(a4 / 256) + *v1;
    return result;
}

// Address range: 0x23e487 - 0x23e503
int64_t function_23e487(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23e487
    int64_t result; // 0x23e487
    return result;
}

// Address range: 0x23e536 - 0x23e53e
int64_t function_23e536(int64_t a1) {
    // 0x23e536
    return unknown_6024b871(a1);
}

// Address range: 0x23e540 - 0x23e541
int64_t function_23e540(int64_t a1) {
    // 0x23e540
    int64_t result; // 0x23e540
    return result;
}

// Address range: 0x23e5a7 - 0x23e5ac
int64_t function_23e5a7(int64_t a1, int64_t a2) {
    // 0x23e5a7
    int64_t result; // 0x23e5a7
    return result;
}

// Address range: 0x23e5c5 - 0x23e5ca
int64_t function_23e5c5(int64_t a1, int64_t a2) {
    // 0x23e5c5
    int64_t result; // 0x23e5c5
    *(int32_t *)result = (int32_t)a1;
    return result;
}

// Address range: 0x23e645 - 0x23e64e
int64_t function_23e645(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23e645
    int64_t v1; // 0x23e645
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return unknown_3e6a8d4e();
}

// Address range: 0x23e651 - 0x23e652
int64_t function_23e651(void) {
    // 0x23e651
    int64_t result; // 0x23e651
    return result;
}

// Address range: 0x23e6bd - 0x23e6c7
int64_t function_23e6bd(void) {
    // 0x23e6bd
    int64_t v1; // 0x23e6bd
    int32_t * v2 = (int32_t *)(v1 + 10); // 0x23e6bd
    int32_t v3 = *v2 + (int32_t)v1; // 0x23e6bd
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x23e6bd
    *v2 = v3;
    if (v4 % 2 == 0) {
        function_23e651();
    }
    // 0x23e6c2
    return function_352ae6ef();
}

// Address range: 0x23e6da - 0x23e6e8
int64_t function_23e6da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23e6da
    int64_t result; // 0x23e6da
    return result;
}

// Address range: 0x23e738 - 0x23e73b
int64_t function_23e738(void) {
    // 0x23e738
    int64_t result; // 0x23e738
    return result;
}

// Address range: 0x23e73b - 0x23e756
int64_t function_23e73b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23e73b
    int64_t v1; // 0x23e73b
    *(char *)a1 = ((char)v1 & -87) + 24;
    int64_t v2; // 0x23e73b
    *(char *)a3 = *(char *)&v2 & 100;
    bool v3; // 0x23e73b
    return unknown_ffffffff8b957756((v3 ? -1 : 1) + a1);
}

// Address range: 0x23e840 - 0x23e8be
int64_t function_23e840(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23e840
    int64_t v1; // 0x23e840
    int64_t result = v1;
    bool v2; // 0x23e840
    if (!v2) {
        // 0x23e8bb
        return result;
    }
    // 0x23e842
    *(char *)result = 2 * (char)result;
    *(char *)a1 = __asm_insb((int16_t)a3);
    return 2 * result & 0xde2b3800;
}

// Address range: 0x27d19f - 0x27d1a0
int64_t function_27d19f(void) {
    // 0x27d19f
    int64_t result; // 0x27d19f
    return result;
}

// Address range: 0x27d1a1 - 0x27d1a2
int64_t function_27d1a1(int64_t a1) {
    // 0x27d1a1
    int64_t result; // 0x27d1a1
    return result;
}

// Address range: 0x27d1c0 - 0x27d1cf
int64_t function_27d1c0(int64_t a1, int64_t a2) {
    // 0x27d1c0
    return __asm_hlt(a1, a2);
}

// Address range: 0x27d1d0 - 0x27d1d9
int64_t function_27d1d0(void) {
    // 0x27d1d0
    return function_23c10be0();
}

// Address range: 0x27d2c0 - 0x27d2c1
int64_t function_27d2c0(void) {
    // 0x27d2c0
    int64_t result; // 0x27d2c0
    return result;
}

// Address range: 0x27d2c8 - 0x27d2c9
int64_t function_27d2c8(void) {
    // 0x27d2c8
    int64_t result; // 0x27d2c8
    return result;
}

// Address range: 0x27d2de - 0x27d2e0
int64_t function_27d2de(void) {
    // 0x27d2de
    return function_27d2c8();
}

// Address range: 0x27d385 - 0x27d388
int64_t function_27d385(int64_t a1) {
    // 0x27d385
    int64_t result; // 0x27d385
    return result;
}

// Address range: 0x27d417 - 0x27d41a
int64_t function_27d417(int64_t a1) {
    // 0x27d417
    int64_t result; // 0x27d417
    return result;
}

// Address range: 0x27d428 - 0x27d42d
int64_t function_27d428(void) {
    // 0x27d428
    return function_6b16ed48();
}

// Address range: 0x27d440 - 0x27d441
int64_t function_27d440(int64_t a1) {
    // 0x27d440
    int64_t result; // 0x27d440
    return result;
}

// Address range: 0x27d483 - 0x27d488
int64_t function_27d483(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27d483
    int64_t result; // 0x27d483
    bool v1; // 0x27d483
    *(char *)a3 = (char)result - (char)((uint64_t)result / 256) + (char)v1;
    return result;
}

// Address range: 0x27d4e7 - 0x27d4ec
int64_t function_27d4e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27d4e7
    int64_t result; // 0x27d4e7
    *(int32_t *)a3 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x27d50b - 0x27d542
int64_t function_27d50b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffff929ca111(); // 0x27d50b
    int64_t v2; // 0x27d50b
    char * v3 = (char *)(a3 + 58 + 4 * v2); // 0x27d510
    unsigned char v4 = *v3; // 0x27d510
    unsigned char v5 = (char)v1; // 0x27d510
    *v3 = v4 - v5;
    uint64_t result = unknown_551d661a(); // 0x27d514
    int32_t * v6 = (int32_t *)(a4 + 0x3a84d800); // 0x27d519
    *v6 = (int32_t)(v4 < v5) - (int32_t)v2 + *v6;
    int64_t v7; // 0x27d50b
    *(int32_t *)a1 = *(int32_t *)&v7 + (int32_t)v2;
    char * v8 = (char *)result; // 0x27d524
    *v8 = (char)(a4 / 256);
    char * v9 = (char *)(result + 0x2514000); // 0x27d526
    char v10 = result; // 0x27d526
    *v9 = *v9 + v10;
    char * v11 = (char *)(v2 + 0x2901e800); // 0x27d52c
    *v11 = *v11 + (char)(result / 256);
    int32_t * v12 = (int32_t *)(256 * (int64_t)*v8 | a4 & -0xff01); // 0x27d532
    *v12 = *v12 + (int32_t)a2;
    __asm_out_135(-30, v10);
    *(int32_t *)0x5b022c82d40099d9 = (int32_t)result;
    return result;
}

// Address range: 0x27d548 - 0x27d552
int64_t function_27d548(void) {
    // 0x27d548
    int64_t result; // 0x27d548
    *(int32_t *)0x1e8a08276bc510a = (int32_t)result;
    return result;
}

// Address range: 0x27d567 - 0x27d56d
int64_t function_27d567(void) {
    // 0x27d567
    int64_t result; // 0x27d567
    return result;
}

// Address range: 0x27d570 - 0x27d578
int64_t function_27d570(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27d570
    int64_t result; // 0x27d570
    return result;
}

// Address range: 0x27d58f - 0x27d590
int64_t function_27d58f(int64_t a1) {
    // 0x27d58f
    int64_t result; // 0x27d58f
    return result;
}

// Address range: 0x27d591 - 0x27d594
int64_t function_27d591(int64_t a1) {
    // 0x27d591
    int64_t v1; // 0x27d591
    int64_t v2 = v1;
    bool v3; // 0x27d591
    return (v2 + 221 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x27d613 - 0x27d61e
int64_t function_27d613(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x77848bb2); // 0x27d613
    *v1 = *v1 + (int32_t)a4;
    return function_ffffffff8579d6d1();
}

// Address range: 0x27d64e - 0x27d650
int64_t function_27d64e(int64_t a1) {
    // 0x27d64e
    int64_t result; // 0x27d64e
    return result;
}

// Address range: 0x27d659 - 0x27d711
int64_t function_27d659(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a3;
    int64_t v2 = a1;
    int64_t v3; // 0x27d659
    char v4 = v3 / 256; // 0x27d65b
    *(char *)0x603c4662 = v4;
    int32_t * v5 = (int32_t *)(2 * a1 + 0x8cdc534 + v3); // 0x27d661
    *v5 = *v5 | (int32_t)v3;
    int16_t v6 = a3; // 0x27d668
    __asm_out_134(v6, (char)v3);
    int64_t v7 = unknown_ffffffffd26f2677() & -256; // 0x27d66e
    *(char *)-0x783d9e89 = *(char *)-0x783d9e89 + v4;
    *(char *)a3 = *(char *)&v1 | (char)a4;
    __asm_out(79, (int32_t)v7 | 206);
    char v8 = __asm_in_136(v6); // 0x27d67a
    int32_t * v9 = (int32_t *)(2 * a3 - 0x4c8406dc + (256 * v3 + a4 & 0xff00 | a4 & -0xff01)); // 0x27d67e
    uint32_t v10 = *v9; // 0x27d67e
    uint32_t v11 = v10 + (int32_t)v3; // 0x27d67e
    *v9 = v11;
    uint32_t v12 = (int32_t)a4 % 32; // 0x27d685
    bool v13 = v11 < v10; // 0x27d685
    if (v12 != 0) {
        int32_t v14 = *(int32_t *)(9 * a3); // 0x27d685
        *(int32_t *)(9 * v1) = v14 << v12;
        v13 = (v14 & 0x80000000 >> v12 - 1) != 0;
    }
    int64_t v15 = v7 | (int64_t)v8; // 0x27d67a
    int32_t v16 = *(int32_t *)&v2; // 0x27d68a
    *(int32_t *)v2 = v16 + (int32_t)v15 + (int32_t)v13;
    char v17 = *(char *)-0x8b5d16d; // 0x27d68c
    char v18 = v17 + v4; // 0x27d68c
    *(char *)-0x8b5d16d = v18;
    if (v18 < 0 != ((v18 ^ v17) & (v18 ^ v4)) < 0) {
        char * v19 = (char *)(8 * v3 - 0x6a30fec3 + v15); // 0x27d702
        *v19 = *v19 + (char)v1;
        return __asm_in_137((int16_t)v1);
    }
    uint32_t result = *(int32_t *)0x3d3a70d30068bbc7; // 0x27d696
    *(char *)v2 = *(char *)&v2 - 61;
    int32_t * v20 = (int32_t *)(a2 + 109); // 0x27d6a3
    *v20 = *v20 + result;
    char * v21 = (char *)(v2 + 0x14396f1); // 0x27d6a6
    *v21 = *v21 + (char)(v1 / 256);
    return result;
}

// Address range: 0x27d727 - 0x27d76d
int64_t function_27d727(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x27d727
    int64_t v1; // 0x27d727
    uint32_t result = (int32_t)v1 ^ -0x46b838ef; // 0x27d727
    if (a4 == 1 || result == 0) {
        // 0x27d72e
        return result;
    }
    // 0x27d734
    *(int32_t *)-0x4772a1d729fe17b5 = result;
    int64_t v2 = unknown_ffffffffe858714e(); // 0x27d748
    uint32_t v3 = *(int32_t *)-0x7341c0ac; // 0x27d74d
    uint32_t v4 = (int32_t)a1; // 0x27d74d
    int32_t v5 = v3 + v4; // 0x27d74d
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x27d74d
    *(int32_t *)-0x7341c0ac = v5;
    *(char *)a1 = (char)v2;
    return v2 & -0xff01 | 256 * (64 * (int64_t)(v5 == 0) | (int64_t)(v5 < v3) | 128 * (int64_t)(v5 < 0) | 16 * (int64_t)(v3 % 16 + v4 % 16 > 15) | 4 * (int64_t)(v6 % 2 == 0)) | 512;
}

// Address range: 0x27d76e - 0x27d7ac
int64_t function_27d76e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27d76e
    int64_t v1; // 0x27d76e
    int32_t v2 = (int64_t)&v1; // bp-8, 0x27d770
    unknown_34fcd677();
    char v3 = __asm_wait(a1, a2, a3); // 0x27d777
    *(char *)-0x17083985 = *(char *)-0x17083985 | v3;
    int32_t * v4 = (int32_t *)a3; // 0x27d77d
    int64_t v5; // 0x27d76e
    *v4 = (int32_t)(int64_t)&v2 + (int32_t)v5;
    *(char *)a1 = v3;
    bool v6; // 0x27d76e
    int64_t v7 = (v6 ? -1 : 1) + a1; // 0x27d781
    int64_t v8; // 0x27d76e
    *(int32_t *)a4 = *(int32_t *)&v8 - (int32_t)v7;
    int32_t * v9 = (int32_t *)(a2 - 24); // 0x27d785
    uint32_t v10 = *v9; // 0x27d785
    *v9 = v10 / 2 | 0x80000000 * v10;
    int64_t v11 = a4 - 1; // 0x27d78f
    v8 = v11;
    int64_t v12; // 0x27d76e
    *v4 = *(int32_t *)&v12 + (int32_t)a2;
    int64_t v13 = v2; // 0x27d793
    v12 = v13;
    int64_t v14 = unknown_ffffffff9f9c895e(v7); // 0x27d794
    unsigned char v15 = (char)v11 % 32; // 0x27d79b
    v12 = v13;
    if (v15 != 0) {
        char * v16 = (char *)(v14 - 24); // 0x27d79b
        *v16 = *v16 >> v15;
    }
    int32_t * v17 = (int32_t *)(v5 - 0x5ffd3876); // 0x27d79e
    *v17 = *v17 + (int32_t)v12;
    char * v18 = (char *)(v14 + 0x710d01e8); // 0x27d7a4
    *v18 = *v18 + (char)v12;
    return function_27d806(v7, a2, v12, v8);
}

// Address range: 0x27d7ac - 0x27d7b0
int64_t function_27d7ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27d7ac
    int64_t result; // 0x27d7ac
    __asm_outsd((int16_t)a3 % 256 | (int16_t)&g8, (int32_t)result);
    return result;
}

// Address range: 0x27d7e9 - 0x27d7f3
int64_t function_27d7e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 38); // 0x27d7e9
    uint32_t v2 = *v1; // 0x27d7e9
    int64_t result; // 0x27d7e9
    uint32_t v3 = v2 + (int32_t)result; // 0x27d7e9
    *v1 = v3;
    char * v4 = (char *)(result - 0x72279346); // 0x27d7ec
    *v4 = *v4 + (char)a3 + (char)(v3 < v2);
    return result;
}

// Address range: 0x27d806 - 0x27d828
int64_t function_27d806(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    unsigned char v2 = (char)(a3 / 256); // 0x27d806
    int64_t v3; // 0x27d806
    *(char *)a4 = (char)v3 + v2;
    uint32_t v4 = 0x10000 * (int32_t)v3 >> 16; // 0x27d808
    int32_t v5 = v4 + (int32_t)((char)(v4 / 256) < v2);
    bool v6 = (char)(v4 / 256) < v2 ? v5 + 0xda80099 <= v4 : v4 > 0xf257ff66; // 0x27d80b
    unsigned char v7 = v6 ? 113 : 112; // 0x27d810
    int64_t v8 = unknown_4b21c118() + 0x33af80af + (int64_t)(v6 | v7 > (char)v5 - 103); // 0x27d817
    if (llvm_ctpop_i8((char)a3 - (char)a1) % 2 != 0) {
        // 0x27d854
        return v8 & 0xffffffff;
    }
    uint32_t v9 = *(int32_t *)&v1; // 0x27d824
    uint32_t v10 = v9 + (int32_t)a1; // 0x27d824
    *(int32_t *)v1 = v10;
    return ((v8 | a4 / 256) - (v10 < v9 ? 251 : 250)) % 256 | v8 & 0xffffff00;
}

// Address range: 0x27d84d - 0x27d853
int64_t function_27d84d(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 3); // 0x27d84f
    *v1 = *v1 + (int32_t)a1;
    int64_t v2; // 0x27d84d
    return 2 * v2 & 0xffffffff;
}

// Address range: 0x27d872 - 0x27d8a3
int64_t function_27d872(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27d872
    int64_t v1; // 0x27d872
    *(int32_t *)-0x55fef71554622df7 = (int32_t)v1;
    unknown_3a330881();
    int32_t * v2 = (int32_t *)(v1 - 0x72e2ffed + 4 * v1); // 0x27d882
    uint32_t v3 = *v2; // 0x27d882
    *v2 = v3 / 0x2000 | 0x80000 * v3;
    int64_t v4 = unknown_118b990(); // 0x27d88a
    *(int32_t *)a1 = (int32_t)v4;
    __asm_out_135(-42, (char)v4);
    unknown_3021f19f();
    return function_5fffd9aa();
}

// Address range: 0x27d973 - 0x27d984
int64_t function_27d973(int64_t a1) {
    char v1 = *(char *)-0x4d39ff81; // 0x27d978
    int64_t result; // 0x27d973
    *(char *)-0x4d39ff81 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x27d999 - 0x27d9ae
int64_t function_27d999(int64_t a1, int64_t a2) {
    int16_t * v1 = (int16_t *)unknown_62af209f(); // 0x27d99e
    int64_t v2; // 0x27d999
    bool v3; // 0x27d999
    *v1 = (int16_t)v3 - (int16_t)v2 + *v1;
    *(int16_t *)a1 = (int16_t)v2;
    int64_t v4; // 0x27d999
    *(int32_t *)a1 = *(int32_t *)&v4 + (int32_t)a1;
    return __asm_wait(a1, v2, v2);
}

// Address range: 0x27d9f3 - 0x27d9f9
int64_t function_27d9f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x27d9f3
    int64_t v1; // 0x27d9f3
    bool v2; // 0x27d9f3
    return 2 * v1 & 0xfffffffe | (int64_t)v2;
}

// Address range: 0x27dae6 - 0x27daef
int64_t function_27dae6(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0x57f4c555); // 0x27dae6
    *v1 = *v1 + (int32_t)a2;
    int64_t result; // 0x27dae6
    return result;
}

// Address range: 0x27db4b - 0x27db5a
int64_t function_27db4b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27db4b
    int64_t v1; // 0x27db4b
    char * v2 = (char *)(v1 + 13); // 0x27db4b
    *v2 = *v2 + (char)v1;
    unknown_14197f54(a1, a2, a3);
    return function_7a2d702e();
}

// Address range: 0x27db80 - 0x27db85
int64_t function_27db80(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x27db80
    int64_t result; // 0x27db80
    *(char *)a3 = (char)(result | a4 / 256);
    return result;
}

// Address range: 0x27dbaa - 0x27dbab
int64_t function_27dbaa(int64_t a1) {
    // 0x27dbaa
    int64_t result; // 0x27dbaa
    return result;
}

// Address range: 0x27dc0a - 0x27dc0b
int64_t function_27dc0a(void) {
    // 0x27dc0a
    int64_t result; // 0x27dc0a
    return result;
}

// Address range: 0x27dc39 - 0x27dc52
int64_t function_27dc39(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    bool v2; // 0x27dc39
    if (!v2) {
        // 0x27dc3b
        *(char *)v1 = *(char *)&v1 ^ (char)a4;
    }
    int64_t result; // 0x27dc39
    int64_t v3; // 0x27dc39
    if ((int32_t)v3 < -0x3808ffff) {
        result = function_27dc0a();
    }
    // 0x27dc4f
    return result;
}

// Address range: 0x27dc64 - 0x27dc69
int64_t function_27dc64(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x27dc64
    *(char *)a3 = (char)a4;
    int64_t result; // 0x27dc64
    return result;
}

// Address range: 0x27dc6b - 0x27dc70
int64_t function_27dc6b(void) {
    // 0x27dc6b
    int64_t v1; // 0x27dc6b
    __asm_out_135(22, (char)v1);
    return function_27dc0a();
}

// Address range: 0x27dc9b - 0x27dc9e
int64_t function_27dc9b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27dc9b
    int64_t result; // 0x27dc9b
    return result;
}

// Address range: 0x27dd9f - 0x27ddbc
int64_t function_27dd9f(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x27dd9f
    int64_t v1; // 0x27dd9f
    char * v2 = (char *)(a4 + 4 + 8 * v1); // 0x27dd9f
    *v2 = *v2 + (char)(a3 / 256);
    char * v3 = (char *)(v1 + 0x2901e800); // 0x27dda3
    *v3 = *v3 + (char)(a4 / 256);
    int64_t v4; // 0x27dd9f
    *(int32_t *)a4 = *(int32_t *)&v4 + (int32_t)a2;
    int64_t v5 = a4 - 1; // 0x27ddac
    v4 = v5;
    if (v5 != 0) {
        function_27dd52();
    }
    // 0x27ddae
    __asm_fldenv(*(int224_t *)(v5 + a2));
    return unknown_6b341bbd();
}

// Address range: 0x27ddbd - 0x27ddea
int64_t function_27ddbd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x27ddbd
    int64_t v1; // 0x27ddbd
    int64_t v2 = v1;
    bool v3; // 0x27ddbd
    *(char *)v2 = (char)v2 + (char)a4 + (char)v3;
    int64_t v4; // 0x27ddbd
    int64_t v5 = v1 | (int64_t)&v4;
    int64_t v6 = *(int64_t *)(v5 & 0xffffffff); // 0x27ddc5
    int64_t v7 = unknown_666766cc(); // 0x27ddc6
    int64_t v8 = a4; // 0x27ddcd
    if ((int32_t)v5 >= 0) {
        int32_t * v9 = (int32_t *)v7; // 0x27ddd6
        *v9 = *v9 + (int32_t)v6;
        v8 = ((a4 & 0xff00) + a5 & 0xff00 | a4 & -0xff01) - 1;
    }
    uint64_t v10 = v8;
    char v11 = *(char *)(v6 + 0x4b1871e9); // 0x27ddd8
    int64_t v12 = 256 * (int64_t)((char)(v10 / 256) - v11) | v10 & -0xff01; // 0x27ddd8
    int32_t * v13 = (int32_t *)(v12 - 10); // 0x27dde3
    *v13 = *v13 + (int32_t)v12;
    return v7 + 0xe86bfaad & 0xffffffff;
}

// Address range: 0x27dded - 0x27ddee
int64_t function_27dded(void) {
    // 0x27dded
    int64_t result; // 0x27dded
    return result;
}

// Address range: 0x27de12 - 0x27de13
int64_t function_27de12(void) {
    // 0x27de12
    int64_t result; // 0x27de12
    return result;
}

// Address range: 0x27de18 - 0x27de1a
int64_t function_27de18(void) {
    // 0x27de18
    int64_t result; // 0x27de18
    return result;
}

// Address range: 0x27de2b - 0x27de66
int64_t function_27de2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27de2b
    int64_t v1; // 0x27de2b
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a2;
    int64_t v2 = unknown_ffffffffbc20aa33(); // 0x27de2d
    int32_t * v3 = (int32_t *)(v1 - 0x1763b9ff); // 0x27de39
    *v3 = *v3 | (int32_t)v1;
    uint32_t v4 = (int32_t)v2 + (int32_t)v1; // 0x27de3f
    int32_t v5 = v4 - 0x3bd9df91; // 0x27de41
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x27de41
    bool v7; // 0x27de2b
    *(int64_t *)0x3f57ea6c = 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | (int64_t)(v4 > 0x3bd9df90) | 16 * (int64_t)(v4 % 16 != 0) | 64 * (int64_t)(v5 == 0) | 128 * (int64_t)(v5 < 0) | 2048 * (int64_t)(((v5 ^ v4) & v4 + 0x4426206f) < 0) | 4 * (int64_t)(v6 % 2 == 0) | 2;
    unknown_69fa2662();
    return function_438a8fed();
}

// Address range: 0x27de75 - 0x27dec1
int64_t function_27de75(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    function_27de12();
    // 0x27de77
    int64_t v3; // 0x27de75
    *(int32_t *)a4 = (int32_t)v3 + (int32_t)a4;
    int16_t v4 = a3; // 0x27de7c
    __asm_outsd(v4, *(int32_t *)&v2);
    bool v5; // 0x27de75
    int64_t v6 = v5 ? -4 : 4; // 0x27de80
    int64_t v7 = v6 + (int64_t)(*(int32_t *)&v1 + (int32_t)a1); // 0x27de80
    int64_t v8 = unknown_1122af8d(v7, v2 + v6); // 0x27de87
    *(char *)v7 = __asm_insb(v4);
    *(int32_t *)0x4cd7c01e8cfd658 = (int32_t)v8;
    *(int32_t *)-0x17d6395e = *(int32_t *)-0x17d6395e >> 1;
    int32_t * v9 = (int32_t *)(v8 + 58); // 0x27dea1
    *v9 = *v9 + (int32_t)(v7 + (v5 ? 0xffffffff : 1));
    int64_t v10; // 0x27de75
    int64_t v11 = v10 - 8; // 0x27dea7
    *(int64_t *)v11 = 0x73b0f000;
    char * v12 = (char *)(v8 + 2); // 0x27deac
    *v12 = (char)v1;
    int64_t v13 = v1 & -256 | (int64_t)*v12; // 0x27deac
    v1 = v13;
    int64_t result = unknown_7a4060b5() & -0xff01 | (int64_t)&g7; // 0x27deb4
    while (v13 == 0) {
        // 0x27dea7
        v11 -= 8;
        *(int64_t *)v11 = 0x73b0f000;
        v12 = (char *)(result + 2);
        *v12 = (char)v1;
        v13 = v1 & -256 | (int64_t)*v12;
        v1 = v13;
        result = unknown_7a4060b5() & -0xff01 | (int64_t)&g7;
    }
    // 0x27dec0
    return result;
}

// Address range: 0x27dec1 - 0x27df2b
int64_t function_27dec1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    uint64_t v1 = unknown_783dd12f(); // 0x27dec1
    int64_t result = v1 % 256 % 256 | v1 & -256; // 0x27dec6
    char * v2 = (char *)result; // 0x27dec9
    unsigned char v3 = (char)a4; // 0x27dec9
    char v4 = *v2 + v3 + (char)((char)v1 < (char)0); // 0x27dec9
    *v2 = v4;
    if (v4 < 0) {
        // 0x27df2a
        return result;
    }
    // 0x27decd
    *(char *)-0x89d5129 = *(char *)-0x89d5129 + (char)a6;
    unsigned char v5 = v3 % 32; // 0x27ded8
    if (v5 != 0) {
        int64_t v6; // 0x27dec1
        *(char *)v6 = *(char *)&v6 >> v5;
    }
    char * v7 = (char *)a5; // 0x27deda
    *v7 = *v7 - 1;
    return 0x10000 * (int32_t)a7 >> 16;
}

// Address range: 0x27df68 - 0x27df7e
int64_t function_27df68(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 - 0xf251763); // 0x27df6d
    *v1 = *v1 + (int32_t)a3;
    int64_t v2; // 0x27df68
    *(char *)a1 = (char)v2 + 100;
    bool v3; // 0x27df68
    unknown_5c7d6d7b((v3 ? -1 : 1) + a1);
    return v2 & 0xffffffff;
}

// Address range: 0x27df86 - 0x27dff2
int64_t function_27df86(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t result = unknown_ffffffffba35bf93(); // 0x27df8d
    int64_t v1; // 0x27df86
    if ((v1 & a2) >= 0) {
        // 0x27df94
        return result;
    }
    char * v2 = (char *)(result + 0x360e000); // 0x27dfdf
    *v2 = *v2 + (char)result;
    char * v3 = (char *)(v1 + 0x1201e800); // 0x27dfe5
    *v3 = *v3 + (char)(a4 / 256);
    char * v4 = (char *)(result + 1); // 0x27dfeb
    *v4 = *v4 + (char)v1;
    return result;
}

// Address range: 0x27e03b - 0x27e04a
int64_t function_27e03b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27e03b
    int64_t result; // 0x27e03b
    return result;
}

// Address range: 0x27e04a - 0x27e05d
int64_t function_27e04a(int64_t a1) {
    // 0x27e04a
    int64_t v1; // 0x27e04a
    int64_t v2 = (int64_t)&v1; // 0x27e04a
    int32_t * v3 = (int32_t *)(4 * a1 - 0x5141af3e + v2); // 0x27e04b
    uint32_t v4 = *v3; // 0x27e04b
    uint32_t v5 = v4 + (int32_t)a1; // 0x27e04b
    *v3 = v5;
    int64_t v6; // 0x27e04a
    int32_t * v7 = (int32_t *)(v6 + 0x5ddadccc); // 0x27e054
    *v7 = *v7 + (int32_t)v2;
    return (a1 - (v5 < v4 ? 233 : 232)) % 256 | a1 & -256;
}

// Address range: 0x27e063 - 0x27e06e
int64_t function_27e063(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 0x7666593f); // 0x27e063
    int64_t result; // 0x27e063
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x27e0c7 - 0x27e0cc
int64_t function_27e0c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27e0c7
    int64_t result; // 0x27e0c7
    return result;
}

// Address range: 0x27e11a - 0x27e11d
int64_t function_27e11a(int64_t a1) {
    // 0x27e11a
    int64_t result; // 0x27e11a
    __asm_out(127, (int32_t)result);
    return result;
}

// Address range: 0x27e147 - 0x27e14d
int64_t function_27e147(void) {
    // 0x27e147
    int64_t v1; // 0x27e147
    return v1 | 166;
}

// Address range: 0x27e14d - 0x27e19f
int64_t function_27e14d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x27e14d
    int64_t result; // 0x27e14d
    int32_t * v1 = (int32_t *)(a2 + 0x472300b3 + 8 * result & 0xffffffff); // 0x27e14d
    int32_t v2 = *v1 ^ -102; // 0x27e14d
    *v1 = v2;
    if (a4 != 1 != (v2 == 0)) {
        // 0x27e158
        return result;
    }
    int32_t * v3 = (int32_t *)(a3 - 0x6df452bb); // 0x27e199
    *v3 = *v3 + (int32_t)a1;
    return result;
}

// Address range: 0x348ed8 - 0x348f63
int64_t function_348ed8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2; // 0x348ed8
    bool v3; // 0x348ed8
    if (v3) {
        int64_t result = unknown_ffffffff93ee0ce7(); // 0x348edb
        char * v4 = (char *)(a1 + 0x506ba4e7); // 0x348ee0
        *v4 = *v4 & (char)(v2 / 256);
        *(char *)-0x654c2e11 = *(char *)-0x654c2e11 + (char)v2;
        return result;
    }
    // 0x348f02
    *(char *)-0x408f38f7 = *(char *)-0x408f38f7 + (char)(v2 / 256);
    int32_t * v5 = (int32_t *)(a1 - 0x511c7369); // 0x348f08
    uint32_t v6 = *v5; // 0x348f08
    *v5 = v6 / 0x40000 | 0x4000 * v6;
    int64_t v7 = v1;
    *(int32_t *)v7 = *(int32_t *)&v1 + (int32_t)v7;
    int64_t v8 = v2 & 0xffffffff ^ 68; // 0x348f14
    *(char *)a1 = *(char *)v8;
    int64_t v9 = (v3 ? -1 : 1) + v8; // 0x348f15
    __asm_out(-54, (int32_t)a2);
    int32_t * v10 = (int32_t *)v9; // 0x348f23
    *v10 = *v10 + 1;
    __asm_outsd((int16_t)a3, *(int32_t *)v9);
    char * v11 = (char *)(a3 + 1); // 0x348f34
    char v12 = *v11; // 0x348f34
    char v13 = (char)(*(int32_t *)(v2 + 0x13d8508) ^ (int32_t)v1); // 0x348f34
    char v14 = v12 + v13; // 0x348f34
    *v11 = v14;
    if (v14 < 0 != ((v14 ^ v12) & (v14 ^ v13)) < 0) {
        int64_t result2 = __asm_int1(); // 0x348f4e
        __asm_out(19, (int32_t)result2);
        return result2;
    }
    int64_t v15 = a2 + 0x8ac20ae7; // 0x348f29
    char * v16 = (char *)v9; // 0x348f40
    *v16 = (char)(((v2 & 0xff00) + a3) / 256);
    char * v17 = (char *)(8 * v2 + (v15 & 0xffffffff)); // 0x348f42
    *v17 = *v17 & (char)v15;
    return v15 & 0xffffff00 | (int64_t)*v16;
}

// Address range: 0x348f94 - 0x348f95
int64_t function_348f94(void) {
    // 0x348f94
    int64_t result; // 0x348f94
    return result;
}

// Address range: 0x348fd2 - 0x348fd3
int64_t function_348fd2(void) {
    // 0x348fd2
    int64_t result; // 0x348fd2
    return result;
}

// Address range: 0x348ff7 - 0x348ffa
int64_t function_348ff7(int64_t a1) {
    // 0x348ff7
    int64_t result; // 0x348ff7
    return result;
}

// Address range: 0x348fff - 0x349008
int64_t function_348fff(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 0x61dbaf90); // 0x348fff
    *v1 = *v1 >> 27;
    return function_348f94();
}

// Address range: 0x349030 - 0x349033
int64_t function_349030(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x349030
    int64_t result; // 0x349030
    bool v1; // 0x349030
    if (a4 != 1 && !v1) {
        result = function_348fd2();
    }
    // 0x349032
    return result;
}

// Address range: 0x3490aa - 0x3490af
int64_t function_3490aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3490aa
    int64_t result; // 0x3490aa
    return result;
}
