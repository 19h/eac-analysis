/*
 * Targeted RetDec C for native executable gap queue batch 1030.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xdd9c7-0xddbc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xddbc7-0xdddc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdddc7-0xddfc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xddfc7-0xde1c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xde1c7-0xde3c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xde3c7-0xde5c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xde5c7-0xde7c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xde7c7-0xde9c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c1000-0x2c1200 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c1200-0x2c1400 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c1400-0x2c1600 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c1600-0x2c1800 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c1800-0x2c1a00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c1a00-0x2c1c00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c1c00-0x2c1e00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c5064-0x2c5264 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_10e9e8fd();
int64_t function_1f60627();
int64_t function_2c1000(int64_t a1);
int64_t function_2c1026(int64_t a1);
int64_t function_2c1079(void);
int64_t function_2c10b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_2c10f5(int64_t a1);
int64_t function_2c122c(int64_t a1);
int64_t function_2c1230(void);
int64_t function_2c1245(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2c126c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2c127a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2c12ad(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2c1305(int64_t a1);
int64_t function_2c131d(void);
int64_t function_2c1333(int64_t a1);
int64_t function_2c1346(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2c1357(void);
int64_t function_2c13a2(int64_t a1);
int64_t function_2c13bd(int64_t a1);
int64_t function_2c149a(void);
int64_t function_2c14a2(int64_t a1, int64_t a2);
int64_t function_2c1563(int64_t a1);
int64_t function_2c1567(int64_t a1);
int64_t function_2c1596(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2c15aa(void);
int64_t function_2c15f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2c1633(void);
int64_t function_2c168b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2c1745(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2c189c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2c1a05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2c1b6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2c1cd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2c1d21(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2c1d38(void);
int64_t function_2c1d3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2c5064(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2c51e5(void);
int64_t function_2c5222(void);
int64_t function_2c522a(int64_t a1);
int64_t function_2c525b(int64_t a1);
int64_t function_2cf68916();
int64_t function_4555ee9e();
int64_t function_4ffd4638();
int64_t function_7fe0a56();
int64_t function_b800886();
int64_t function_cf3c7();
int64_t function_dd9c7(void);
int64_t function_dda33(void);
int64_t function_dda5b(void);
int64_t function_ddaad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ddb86(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ddbbc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ddbeb(void);
int64_t function_ddc3a(void);
int64_t function_ddc3f(int64_t a1, int64_t a2);
int64_t function_ddc83(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ddcc3(int64_t a1);
int64_t function_ddcde(int64_t a1, int64_t a2, int64_t a3);
int64_t function_ddd6e(int64_t a1);
int64_t function_ddd93(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ddded(int64_t a1, int64_t a2);
int64_t function_dde59(void);
int64_t function_dde73(int64_t a1);
int64_t function_dde9b(void);
int64_t function_ddeb3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_ddf68(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ddf7e(int64_t a1);
int64_t function_de06d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_de14a(void);
int64_t function_de155(int64_t a1);
int64_t function_de176(void);
int64_t function_de18e(void);
int64_t function_de19d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_de26f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_de2a8(int64_t a1);
int64_t function_de31f(void);
int64_t function_de34a(void);
int64_t function_de34d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_de364(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_de388(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_de3a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_de3cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_de41d(void);
int64_t function_de42e(void);
int64_t function_de456(int64_t a1, int64_t a2, int64_t a3);
int64_t function_de477(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_de48c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_de4c5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_de583(int64_t a1);
int64_t function_de585(int64_t a1, int64_t a2, int64_t a3);
int64_t function_de5f0(int64_t a1);
int64_t function_de5f7(int64_t a1);
int64_t function_de628(void);
int64_t function_de63a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_de65a(int64_t a1);
int64_t function_de689(void);
int64_t function_de6ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_de6ec(int64_t a1, int64_t a2, int64_t a3);
int64_t function_de718(void);
int64_t function_de71d(void);
int64_t function_de78b(void);
int64_t function_de7d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_de81d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_de839(void);
int64_t function_de85c(void);
int64_t function_de872(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_de887(int64_t a1, int64_t a2, int64_t a3);
int64_t function_de8aa(void);
int64_t function_de900(void);
int64_t function_de949(void);
int64_t function_de96a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ffffffff8f21ff73();
int64_t function_ffffffffb463221b();
int64_t function_ffffffffcb91bc0a();
int64_t function_ffffffffec574a94();
int64_t function_fffffffff5c6ea7b();
int64_t function_fffffffffdde6b7b();
int64_t unknown_104624eb();
int64_t unknown_10dbe2c8();
int64_t unknown_169a88a3();
int64_t unknown_1aeb5666();
int64_t unknown_1c4ec171();
int64_t unknown_2a2e905b();
int64_t unknown_389e1a8d();
int64_t unknown_3aff1205();
int64_t unknown_3d0fc8c0();
int64_t unknown_460eddf1();
int64_t unknown_4c144bea();
int64_t unknown_5a0e873c();
int64_t unknown_5f0fe0a2();
int64_t unknown_62e6f3d2();
int64_t unknown_6813cbe5();
int64_t unknown_689f1534();
int64_t unknown_7064bc68();
int64_t unknown_71ab64b();
int64_t unknown_79d1995d();
int64_t unknown_ffffffff8373a76a();
int64_t unknown_ffffffffa32d0bb1();
int64_t unknown_ffffffffa3782b52();
int64_t unknown_ffffffffa3a6cb94();
int64_t unknown_ffffffffa69cf6da();
int64_t unknown_ffffffffb3522af6();
int64_t unknown_ffffffffb85ef33f();
int64_t unknown_ffffffffc76a62da();
int64_t unknown_ffffffffce154462();
int64_t unknown_ffffffffdbf214fa();
int64_t unknown_ffffffffe9032dec();
int64_t unknown_fffffffffc780784();
int64_t unknown_fffffffffe314075();

// Address range: 0xdd9c7 - 0xdd9ca
int64_t function_dd9c7(void) {
    // 0xdd9c7
    int64_t result; // 0xdd9c7
    int32_t * v1 = (int32_t *)(result + 10); // 0xdd9c7
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0xdda33 - 0xdda34
int64_t function_dda33(void) {
    // 0xdda33
    int64_t result; // 0xdda33
    return result;
}

// Address range: 0xdda5b - 0xdda5c
int64_t function_dda5b(void) {
    // 0xdda5b
    int64_t result; // 0xdda5b
    return result;
}

// Address range: 0xddaad - 0xddb25
int64_t function_ddaad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xddaad
    if (a4 == 0) {
        // 0xddb1b
        return a1 & 0xffffff00 | (int64_t)(*(char *)(a3 + 92) | (char)a1);
    }
    // 0xddab3
    *(char *)a3 = (char)a4 + (char)a3;
    int64_t result; // 0xddaad
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0xddb86 - 0xddbbc
int64_t function_ddb86(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_389e1a8d(); // 0xddb87
    int64_t v2; // 0xddb86
    char v3 = (char)v1 + (char)v2; // 0xddb8c
    *(char *)a2 = v3;
    if (v3 >= 1) {
        // 0xddb90
        return __asm_in((int16_t)a3);
    }
    int16_t v4 = v1; // 0xddbb3
    int16_t v5 = (int16_t)*(char *)(v2 + 0x57b1c53a); // 0xddbb3
    return v1 & -0x10000 | (int64_t)(v4 / v5 % 256) | (int64_t)(256 * (v4 % v5));
}

// Address range: 0xddbbc - 0xddbc5
int64_t function_ddbbc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xddbbc
    int64_t v1; // 0xddbbc
    uint64_t result = v1;
    *(char *)(a3 - 0x3a45fe18) = (char)(result / 256);
    return result;
}

// Address range: 0xddbeb - 0xddbf3
int64_t function_ddbeb(void) {
    // 0xddbeb
    return unknown_460eddf1();
}

// Address range: 0xddc3a - 0xddc3f
int64_t function_ddc3a(void) {
    // 0xddc3a
    return function_2cf68916();
}

// Address range: 0xddc3f - 0xddc4c
int64_t function_ddc3f(int64_t a1, int64_t a2) {
    // 0xddc3f
    int64_t v1; // 0xddc3f
    uint64_t result = v1 & 0x1aa10cd8; // 0xddc3f
    char * v2 = (char *)(a1 - 0x69cfe18); // 0xddc45
    *v2 = *v2 + (char)(result / 256);
    return result;
}

// Address range: 0xddc83 - 0xddc8c
int64_t function_ddc83(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xddc83
    int64_t result; // 0xddc83
    return result;
}

// Address range: 0xddcc3 - 0xddcc6
int64_t function_ddcc3(int64_t a1) {
    // 0xddcc3
    int64_t v1; // 0xddcc3
    int64_t v2 = v1;
    return (v2 + 25) % 256 | v2 & -256;
}

// Address range: 0xddcde - 0xddcf1
int64_t function_ddcde(int64_t a1, int64_t a2, int64_t a3) {
    // 0xddcde
    int64_t v1; // 0xddcde
    int32_t * v2 = (int32_t *)(8 * a3 + 0x1e8013d + v1); // 0xddcde
    *v2 = *v2 + (int32_t)v1;
    unknown_104624eb(a1, a2, a3);
    return function_ffffffff8f21ff73();
}

// Address range: 0xddd6e - 0xddd8e
int64_t function_ddd6e(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 114); // 0xddd7a
    int64_t v2; // 0xddd6e
    *v1 = *v1 + (int32_t)v2;
    int32_t * v3 = (int32_t *)(v2 + 0x1dbe22ab); // 0xddd7f
    int32_t v4 = *v3; // 0xddd7f
    *v3 = 2 * v4 | (int32_t)(v4 < 0);
    return (int64_t)*(int32_t *)-0x175a5f7b63596baa;
}

// Address range: 0xddd93 - 0xddd98
int64_t function_ddd93(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xddd93
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0xddd93
    return result;
}

// Address range: 0xddded - 0xdde0d
int64_t function_ddded(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 0x3aff6e90); // 0xddded
    *v1 = *v1 + (int32_t)a2;
    int64_t v2; // 0xddded
    *(int32_t *)v2 = *(int32_t *)&v2 + 1;
    return function_10e9e8fd();
}

// Address range: 0xdde59 - 0xdde5a
int64_t function_dde59(void) {
    // 0xdde59
    int64_t result; // 0xdde59
    return result;
}

// Address range: 0xdde73 - 0xdde74
int64_t function_dde73(int64_t a1) {
    // 0xdde73
    int64_t result; // 0xdde73
    return result;
}

// Address range: 0xdde9b - 0xdde9c
int64_t function_dde9b(void) {
    // 0xdde9b
    int64_t result; // 0xdde9b
    return result;
}

// Address range: 0xddeb3 - 0xddf66
int64_t function_ddeb3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = a1;
    int64_t v3; // 0xddeb3
    *(int32_t *)a1 = (int32_t)v3 + (int32_t)a1;
    char v4 = *(char *)(a4 - 0x13e09069) | (char)a3; // 0xddeb5
    int64_t v5; // 0xddeb3
    if (v4 == 0) {
        v5 = function_dde59();
    }
    // 0xddebd
    if (llvm_ctpop_i8(v4) % 2 != 0) {
        v5 = function_dde9b();
    }
    char * v6 = (char *)(v3 - 57); // 0xddec5
    *v6 = *v6 + (char)(a3 / 256);
    *(char *)v1 = *(char *)&v1 & (char)v5;
    uint64_t v7 = v5; // 0xdded1
    if (v7 % 2 != 0) {
        // 0xddefc
        return 0x10000 * (int32_t)v7 >> 16;
    }
    int64_t v8 = a3 & -256 | 100; // 0xdded8
    *(char *)v7 = 2 * (char)v7;
    v1 = 0x36422800;
    char * v9 = (char *)v8; // 0xddee7
    *v9 = *v9 + (char)(v3 / 256);
    uint32_t v10 = *(int32_t *)&v2; // 0xddeef
    v2 += ((a5 & (int64_t)&g2) == 0 ? 4 : -4);
    char * v11 = (char *)(v5 - 0x77ff18f4); // 0xddef0
    char v12 = *v11 + (char)(v10 > (int32_t)v5) - (char)v1; // 0xddef0
    *v11 = v12;
    int64_t v13 = v1 - 1; // 0xddef6
    v1 = v13;
    if (v12 == 0 || v13 == 0) {
        int32_t v14 = *(int32_t *)&v5; // 0xddef8
        int64_t v15; // 0xddeb3
        *(int32_t *)v5 = v14 + (int32_t)(int64_t)&v15;
        int64_t v16 = v2;
        *(char *)0x77da3a0ef8830e0d = (char)v5;
        unknown_ffffffffa3782b52(v16, (int32_t)v16 + (int32_t)(v3 & a2), v8, v1);
        unknown_1aeb5666();
        return v3 & 0xffffffff;
    }
    // 0xddf35
    __asm_out_133((int16_t)v8, (char)v5);
    return unknown_5a0e873c();
}

// Address range: 0xddf68 - 0xddf71
int64_t function_ddf68(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xddf68
    __asm_int1(a1, a2, a3, a4);
    return unknown_1c4ec171();
}

// Address range: 0xddf7e - 0xddf85
int64_t function_ddf7e(int64_t a1) {
    // 0xddf7e
    int64_t v1; // 0xddf7e
    return v1 + 0x1e82e3e & 0xffffffff;
}

// Address range: 0xde06d - 0xde12f
int64_t function_de06d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xde06d
    int64_t v1; // 0xde06d
    int64_t v2 = v1;
    bool v3; // 0xde06d
    *(char *)a2 = 128 * (char)v3 | (char)a2 / 2;
    *(int32_t *)-0x7ad5da5c14496753 = (int32_t)unknown_fffffffffe314075();
    unknown_fffffffffc780784();
    int32_t * v4 = (int32_t *)(v1 + 0x6f01e89e); // 0xde08a
    uint32_t v5 = *v4; // 0xde08a
    uint32_t v6 = v5 + (int32_t)a1; // 0xde08a
    *v4 = v6;
    char v7 = a3; // 0xde090
    char v8 = v6 < v5; // 0xde090
    char v9 = *(char *)(v1 - 118) + v8; // 0xde090
    char v10 = v7 - v9; // 0xde090
    uint32_t v11 = (int32_t)a4; // 0xde098
    uint32_t v12 = v11 % 32; // 0xde098
    bool v13 = ((v10 - v8 ^ v7) & (v9 ^ v7)) < 0; // 0xde098
    if (v12 != 0) {
        int64_t v14; // 0xde06d
        uint32_t v15 = *(int32_t *)&v14; // 0xde098
        int32_t v16 = v15 >> 32 - v12 | v15 << v12; // 0xde098
        *(int32_t *)(a1 & 0xffffffff) = v16;
        v13 = v12 == 1 ? v16 % 2 != (int32_t)(v16 < 0) : ((v10 - v8 ^ v7) & (v9 ^ v7)) < 0;
    }
    // 0xde0a9
    *(int32_t *)unknown_5f0fe0a2() = v11;
    int64_t v17 = unknown_ffffffffa32d0bb1(); // 0xde0ab
    if (v10 < 0 == v13 != v10 != 0) {
        int64_t v18 = v2 & -0xff01 | (int64_t)&g1; // 0xde0b4
        unknown_3d0fc8c0(a2);
        *(int32_t *)0x7731bcce = *(int32_t *)0x7731bcce + (int32_t)a2;
        unknown_10dbe2c8();
        __asm_hlt();
        int32_t * v19 = (int32_t *)(a2 - 0x4e90c24e); // 0xde0cb
        *v19 = -1 - *(int32_t *)(4 * v1 - 42 + v18) + (int32_t)v18 + *v19;
        return function_fffffffffdde6b7b();
    }
    int32_t * v20 = (int32_t *)(a4 - 41); // 0xde10a
    *v20 = *v20 + (int32_t)v1;
    unsigned char v21 = *(char *)(v2 + 0x2f00680a + 2 * v2) | (char)v2; // 0xde114
    char v22 = *(char *)v17; // 0xde11b
    int64_t result = v17 & -0x10000 | (int64_t)((256 * (int16_t)v17 >> 8) * (int16_t)v22); // 0xde11b
    char * v23 = (char *)result; // 0xde11e
    *v23 = *v23 + v21;
    *(char *)0x3d542b28 = *(char *)0x3d542b28 >> 3;
    int32_t * v24 = (int32_t *)(4 * (v2 & 0x3fffffffffffff00 | (int64_t)v21) + a4); // 0xde12c
    *v24 = *v24 | -0x5f2440b7;
    return result;
}

// Address range: 0xde14a - 0xde14c
int64_t function_de14a(void) {
    // 0xde14a
    int64_t result; // 0xde14a
    return result;
}

// Address range: 0xde155 - 0xde15d
int64_t function_de155(int64_t a1) {
    // 0xde155
    return unknown_2a2e905b(a1);
}

// Address range: 0xde176 - 0xde177
int64_t function_de176(void) {
    // 0xde176
    int64_t result; // 0xde176
    return result;
}

// Address range: 0xde18e - 0xde18f
int64_t function_de18e(void) {
    // 0xde18e
    int64_t result; // 0xde18e
    return result;
}

// Address range: 0xde19d - 0xde26e
int64_t function_de19d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xde19d
    int64_t v1; // 0xde19d
    bool v2; // 0xde19d
    if (!v2) {
        v1 = function_de18e();
    }
    // 0xde19f
    int64_t v3; // 0xde19d
    char * v4 = (char *)(v3 + 0x6701e88f); // 0xde1aa
    int64_t v5 = v2 ? -4 : 4;
    int64_t v6 = v2 ? -1 : 1;
    int64_t v7 = a2; // 0xde1d6
    int64_t v8 = a1; // 0xde19d
    int64_t v9 = a3; // 0xde1f4
    int64_t v10; // 0xde19d
    *(int64_t *)(v10 - 8) = 0x7d1d01e8;
    char v11 = *(char *)(a4 - 0x34de8bc6); // 0xde1a4
    *v4 = *v4 + (char)(a4 / 256);
    int64_t v12 = a4 - 1; // 0xde1b0
    int64_t result2 = v1; // 0xde1b0
    while (v12 != 0) {
        // 0xde1cc
        bool v13; // 0xde19d
        int64_t v14 = v9 & -256 | (int64_t)((char)v13 + (char)v9 - v11); // 0xde1a4
        unknown_62e6f3d2();
        int64_t v15 = v7 + v5; // 0xde1d1
        int64_t v16; // 0xde19d
        uint32_t v17 = *(int32_t *)(v16 + 116); // 0xde1d3
        unsigned char v18 = *(char *)v15; // 0xde1d6
        int64_t v19 = (int64_t)v18 | (int64_t)(*(int32_t *)v7 & -256); // 0xde1d6
        v7 = v15 + v6;
        int32_t * v20 = (int32_t *)v8; // 0xde1da
        uint32_t v21 = *v20; // 0xde1da
        uint32_t v22 = v21 + (int32_t)v14; // 0xde1da
        *v20 = v22;
        int32_t * v23 = (int32_t *)v14; // 0xde1dc
        uint32_t v24 = (int32_t)v8 - *v23 + (int32_t)(v22 < v21); // 0xde1dc
        int64_t v25 = v24; // 0xde1dc
        if (v24 == 0) {
            // 0xde246
            *(int32_t *)(v19 - 0x1742613a) = (int32_t)v12;
            int32_t * v26 = (int32_t *)(v19 + 0x6ad33af9); // 0xde24e
            *v26 = *v26 + v17;
            *(int32_t *)0x1551a66 = *(int32_t *)0x1551a66 & (int32_t)v3;
            char * v27 = (char *)v7; // 0xde25a
            __asm_outsb((int16_t)v14, *v27);
            int64_t v28 = v6 + v25; // 0xde25b
            int64_t result = unknown_ffffffffce154462(v28, v7 + v6); // 0xde25c
            int32_t * v29 = (int32_t *)(v28 + 0x5200cbf8); // 0xde261
            *v29 = *v29 + 0x1deab2ad + (int32_t)(*v27 < *(char *)v25);
            return result;
        }
        uint32_t v30 = *(int32_t *)(v14 - 24) ^ (int32_t)v16; // 0xde1d7
        int64_t v31 = v30; // 0xde1d7
        *(int32_t *)v25 = (int32_t)v19;
        uint64_t v32 = v5 + v25; // 0xde1e0
        *(int32_t *)v32 = __asm_insd((int16_t)v14);
        uint64_t v33 = unknown_4c144bea(); // 0xde1e4
        char * v34 = (char *)(v31 + 0x1e8a364); // 0xde1e9
        *v34 = *v34 - (char)(v33 / 256);
        int64_t v35 = __asm_hlt(); // 0xde1ef
        int32_t v36 = *v23 & v30; // 0xde1f0
        *v23 = v36;
        result2 = v35;
        if (v36 < 0) {
            // break -> 0xde1b2
            break;
        }
        // 0xde1f4
        result2 = v35;
        if ((v19 + (v12 & 0xff00) & 0xff00 || v12 & -0xff01) != 1) {
            // break -> 0xde1b2
            break;
        }
        int64_t v37 = v17; // 0xde1d3
        v9 = (v9 & 0xff00) + v31 & 0xff00 | v14 & -0xff01;
        int64_t v38 = v35 & 0x54ff7fff | 0xab008000; // 0xde1ff
        uint32_t v39 = *(int32_t *)1; // 0xde201
        uint32_t v40 = v39 + (int32_t)v9; // 0xde201
        *(int32_t *)1 = v40;
        int64_t v41 = -1; // 0xde204
        v16 = v31;
        v13 = v40 < v39;
        v8 = v32 / 2 % 0x80000000;
        if (v40 == 0) {
            char * v42 = (char *)(v38 + 38); // 0xde207
            unsigned char v43 = *v42; // 0xde207
            unsigned char v44 = (char)v35; // 0xde207
            char v45 = v43 + v44; // 0xde207
            unsigned char v46 = llvm_ctpop_i8(v45); // 0xde207
            *v42 = v45;
            *(int64_t *)(v37 - 8) = 0x4000 * (int64_t)v2 | 1024 * (int64_t)v2 | 256 * (int64_t)v2 | (int64_t)(v45 < v43) | 64 * (int64_t)(v45 == 0) | 128 * (int64_t)(v45 < 0) | 16 * (int64_t)(v43 % 16 + v44 % 16 > 15) | 4 * (int64_t)(v46 % 2 == 0) | 2048 * (int64_t)(((v45 ^ v43) & (v45 ^ v44)) < 0) | 2;
            abort();
            // UNREACHABLE
        }
        *(int64_t *)(v37 - 8) = 0x7d1d01e8;
        v11 = *(char *)(v41 - 0x34de8bc6);
        *v4 = *v4 + (char)(v41 / 256);
        v12 = v41 - 1;
        result2 = v38;
    }
    // 0xde1b2
    return result2;
}

// Address range: 0xde26f - 0xde284
int64_t function_de26f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xde26f
    int64_t v1; // 0xde26f
    int32_t * v2 = (int32_t *)(v1 + 8 * v1); // 0xde276
    *v2 = *v2 | (int32_t)a4;
    int32_t * v3 = (int32_t *)(a4 - 10); // 0xde279
    *v3 = *v3 + (int32_t)a3;
    unsigned char v4 = (char)a4 % 32; // 0xde27c
    if (v4 != 0) {
        char * v5 = (char *)(a2 - 0x36f40ac); // 0xde27c
        *v5 = *v5 >> v4;
    }
    int64_t v6; // 0xde26f
    return (int64_t)(*(int32_t *)&v6 + (int32_t)v1);
}

// Address range: 0xde2a8 - 0xde2a9
int64_t function_de2a8(int64_t a1) {
    // 0xde2a8
    int64_t result; // 0xde2a8
    return result;
}

// Address range: 0xde31f - 0xde320
int64_t function_de31f(void) {
    // 0xde31f
    int64_t result; // 0xde31f
    return result;
}

// Address range: 0xde34a - 0xde34c
int64_t function_de34a(void) {
    // 0xde34a
    return function_de31f();
}

// Address range: 0xde34d - 0xde352
int64_t function_de34d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xde34d
    int64_t result; // 0xde34d
    return result;
}

// Address range: 0xde364 - 0xde373
int64_t function_de364(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xde364
    unknown_ffffffff8373a76a(a1, a2, a3, a4);
    return function_1f60627();
}

// Address range: 0xde388 - 0xde38f
int64_t function_de388(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x135babb5); // 0xde388
    *v1 = *v1 + (int32_t)a2;
    int64_t result; // 0xde388
    return result;
}

// Address range: 0xde3a5 - 0xde3c8
int64_t function_de3a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xde3a5
    int64_t v1; // 0xde3a5
    *(int32_t *)a4 = 2 * (int32_t)v1;
    *(int64_t *)(v1 - 95) = a5;
    return (int64_t)*(int32_t *)0x1e8e65ead8df476;
}

// Address range: 0xde3cb - 0xde3f9
int64_t function_de3cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(unknown_ffffffffa69cf6da() - 38); // 0xde3db
    *v1 = *v1 - (int32_t)a2;
    int64_t v2; // 0xde3cb
    __asm_outsb((int16_t)a3, *(char *)&v2);
    uint64_t v3 = unknown_6813cbe5(); // 0xde3df
    char * v4 = (char *)(a4 - 44); // 0xde3e4
    unsigned char v5 = *v4; // 0xde3e4
    *v4 = (char)(v3 / 256);
    int32_t * v6 = (int32_t *)(a3 - 8); // 0xde3eb
    *v6 = *v6 + (int32_t)a3;
    int32_t * v7 = (int32_t *)(a3 + 1); // 0xde3f5
    int64_t v8; // 0xde3cb
    *v7 = *v7 + (int32_t)v8;
    return v3 & 0xc7ff0000 | (v3 + (a4 + 0xffff) / 256) % 256 | 256 * (int64_t)v5 | 0x38008000;
}

// Address range: 0xde41d - 0xde41e
int64_t function_de41d(void) {
    // 0xde41d
    int64_t result; // 0xde41d
    return result;
}

// Address range: 0xde42e - 0xde43b
int64_t function_de42e(void) {
    // 0xde42e
    int64_t v1; // 0xde42e
    int64_t v2 = v1;
    bool v3; // 0xde42e
    return (v2 - (v3 ? 234 : 233)) % 256 | v2 & -256;
}

// Address range: 0xde456 - 0xde45e
int64_t function_de456(int64_t a1, int64_t a2, int64_t a3) {
    // 0xde456
    int64_t v1; // 0xde456
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0xde477 - 0xde47a
int64_t function_de477(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xde477
    int64_t result; // 0xde477
    return result;
}

// Address range: 0xde48c - 0xde4c1
int64_t function_de48c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xde48c
    unknown_ffffffffa3a6cb94();
    bool v1; // 0xde48c
    if (v1 || v1) {
        function_de41d();
    }
    // 0xde495
    int64_t v2; // 0xde48c
    int64_t v3 = (int64_t)&v2; // bp-8, 0xde497
    int64_t v4 = unknown_169a88a3(); // 0xde49d
    int32_t * v5 = (int32_t *)(a2 - 0x5fccb669); // 0xde4a2
    *v5 = *v5 + (int32_t)(int64_t)&v3;
    int32_t * v6 = (int32_t *)(v4 & 0xffffffff); // 0xde4ab
    int64_t v7; // 0xde48c
    *v6 = *v6 + (int32_t)v7;
    char * v8 = (char *)(a1 - 0x4140726f); // 0xde4ad
    *v8 = -*v8;
    int64_t v9 = v4 & 0xffff00ff | (int64_t)(int32_t)&g3; // 0xde4b7
    return (v9 + 255) % 256 | v9 & 0xffffff00;
}

// Address range: 0xde4c5 - 0xde4fa
int64_t function_de4c5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0xde4c5
    bool v1; // 0xde4c5
    bool v2 = v1;
    int64_t v3; // 0xde4c5
    int64_t v4 = (v3 + a3 + (int64_t)v1) % 256 | a3 & -256; // 0xde4c5
    unsigned char v5 = (char)(a4 / 256); // 0xde4c7
    unsigned char v6 = (char)v3 + v5; // 0xde4c7
    int64_t v7 = 256 * (v3 + (int64_t)v6 + (int64_t)(v6 < v5)) & 0xff00 | a4 & -0xff01; // 0xde4c9
    int32_t * v8 = (int32_t *)(v3 + 0x740079fa); // 0xde4cb
    uint32_t v9 = *v8; // 0xde4cb
    int32_t v10 = v3; // 0xde4cb
    uint32_t v11 = v9 + v10; // 0xde4cb
    *v8 = v11;
    *(char *)(2 * v3) = (char)a4;
    char * v12 = (char *)(v4 - 0x17d8e792); // 0xde4d4
    *v12 = 128 * (char)(v11 < v9) | *v12 / 2;
    int32_t * v13 = (int32_t *)(a2 - 128); // 0xde4da
    *v13 = *v13 + v10;
    int64_t v14 = (v2 ? -1 : 1) + a1 + (v2 ? -4 : 4); // 0xde4e0
    int64_t result = unknown_ffffffffe9032dec(v14, 0xb38dd76b, v4, v7); // 0xde4e6
    *(int32_t *)-0x1720c70e = *(int32_t *)-0x1720c70e + (int32_t)v14;
    int32_t * v15 = (int32_t *)v14; // 0xde4f1
    *v15 = *v15 + (int32_t)v7;
    return result;
}

// Address range: 0xde583 - 0xde584
int64_t function_de583(int64_t a1) {
    // 0xde583
    int64_t result; // 0xde583
    return result;
}

// Address range: 0xde585 - 0xde58f
int64_t function_de585(int64_t a1, int64_t a2, int64_t a3) {
    // 0xde585
    *(int32_t *)0x5d246d8d = *(int32_t *)0x5d246d8d - (int32_t)a1;
    return a2 & 0xffffffff;
}

// Address range: 0xde5f0 - 0xde5f6
int64_t function_de5f0(int64_t a1) {
    // 0xde5f0
    return unknown_ffffffffb3522af6(a1);
}

// Address range: 0xde5f7 - 0xde5fa
int64_t function_de5f7(int64_t a1) {
    // 0xde5f7
    int64_t result; // 0xde5f7
    return result;
}

// Address range: 0xde628 - 0xde629
int64_t function_de628(void) {
    // 0xde628
    int64_t result; // 0xde628
    return result;
}

// Address range: 0xde63a - 0xde640
int64_t function_de63a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xde63a
    return function_de628();
}

// Address range: 0xde65a - 0xde65b
int64_t function_de65a(int64_t a1) {
    // 0xde65a
    int64_t result; // 0xde65a
    return result;
}

// Address range: 0xde689 - 0xde68a
int64_t function_de689(void) {
    // 0xde689
    int64_t result; // 0xde689
    return result;
}

// Address range: 0xde6ae - 0xde6ec
int64_t function_de6ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0xde6ae
    uint64_t v3 = 0xa701e8 * (int64_t)*(int32_t *)(v2 + 0xed17f09); // 0xde6ae
    int32_t v4 = *(int32_t *)(a2 + 0x5e0ad021); // 0xde6bb
    uint32_t v5 = (0x10000 * (int32_t)v2 >> 16) + 0x2ea1c8d4; // 0xde6c8
    *(char *)a3 = (char)a3 - 58;
    int32_t * v6 = (int32_t *)((v3 & 0xfffffff8) - 0x4d0bedf7); // 0xde6d3
    *v6 = *v6 + (int32_t)a3;
    int32_t v7 = (v5 % 256 & (int32_t)(v3 / 256) | v5 & -256) - 0x17f51c50; // 0xde6db
    int16_t v8 = 256 * (int16_t)v7 >> 8; // 0xde6e0
    *(int32_t *)v1 = 0x1e888bc * v4 + (int32_t)v2 + *(int32_t *)&v1;
    return (int64_t)(v8 * v8) | (int64_t)(v7 & -0x10000);
}

// Address range: 0xde6ec - 0xde709
int64_t function_de6ec(int64_t a1, int64_t a2, int64_t a3) {
    // 0xde6ec
    float80_t v1; // 0xde6ec
    *(int64_t *)(a3 - 0x227cb5f7) = (int64_t)v1;
    int32_t * v2 = (int32_t *)(3 * a2); // 0xde6fb
    *v2 = *v2 / 0x2000;
    unknown_3aff1205();
    return function_ffffffffcb91bc0a();
}

// Address range: 0xde718 - 0xde719
int64_t function_de718(void) {
    // 0xde718
    int64_t result; // 0xde718
    return result;
}

// Address range: 0xde71d - 0xde722
int64_t function_de71d(void) {
    // 0xde71d
    return function_ffffffffb463221b();
}

// Address range: 0xde78b - 0xde790
int64_t function_de78b(void) {
    // 0xde78b
    return function_4ffd4638();
}

// Address range: 0xde7d4 - 0xde7e8
int64_t function_de7d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xde7d4
    return unknown_ffffffffc76a62da();
}

// Address range: 0xde81d - 0xde829
int64_t function_de81d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0xde81d
    int64_t v1; // 0xde81d
    int64_t v2 = v1;
    char * v3 = (char *)(v2 + 0x24e1e00); // 0xde81d
    *v3 = *v3 + (char)v2;
    int32_t * v4 = (int32_t *)(a3 + 1); // 0xde825
    *v4 = *v4 + (int32_t)v1;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0xde839 - 0xde83a
int64_t function_de839(void) {
    // 0xde839
    int64_t result; // 0xde839
    return result;
}

// Address range: 0xde85c - 0xde85d
int64_t function_de85c(void) {
    // 0xde85c
    int64_t result; // 0xde85c
    return result;
}

// Address range: 0xde872 - 0xde887
int64_t function_de872(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xde872
    int64_t v1; // 0xde872
    v1 = function_de85c();
    int64_t v2 = v1;
    int64_t v3; // 0xde872
    int32_t * v4 = (int32_t *)(2 * a3 - 0x2300d3a8 + v3); // 0xde874
    *v4 = *v4 + (int32_t)v3;
    int32_t * v5 = (int32_t *)(a3 + 0x1e81de6); // 0xde87e
    *v5 = *v5 ^ (int32_t)a1;
    return 0x10000 * (int32_t)((v2 + 221) % 256 | v2 & 0xff00) >> 16;
}

// Address range: 0xde887 - 0xde893
int64_t function_de887(int64_t a1, int64_t a2, int64_t a3) {
    // 0xde887
    int64_t v1; // 0xde887
    __asm_fldenv(*(int224_t *)(a3 - 0x23d1ff35 + v1));
    return function_fffffffff5c6ea7b();
}

// Address range: 0xde8aa - 0xde8ad
int64_t function_de8aa(void) {
    // 0xde8aa
    int64_t result; // 0xde8aa
    return result;
}

// Address range: 0xde900 - 0xde905
int64_t function_de900(void) {
    // 0xde900
    return function_b800886();
}

// Address range: 0xde949 - 0xde94a
int64_t function_de949(void) {
    // 0xde949
    int64_t result; // 0xde949
    return result;
}

// Address range: 0xde96a - 0xde971
int64_t function_de96a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xde96a
    int64_t result; // 0xde96a
    return result;
}

// Address range: 0x2c1000 - 0x2c1001
int64_t function_2c1000(int64_t a1) {
    // 0x2c1000
    int64_t result; // 0x2c1000
    return result;
}

// Address range: 0x2c1026 - 0x2c1029
int64_t function_2c1026(int64_t a1) {
    // 0x2c1026
    int64_t result; // 0x2c1026
    return result;
}

// Address range: 0x2c1079 - 0x2c107e
int64_t function_2c1079(void) {
    // 0x2c1079
    return function_ffffffffec574a94();
}

// Address range: 0x2c10b1 - 0x2c10b8
int64_t function_2c10b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x2c10b1
    int64_t v1; // 0x2c10b1
    int32_t * v2 = (int32_t *)(v1 - 32); // 0x2c10b4
    *v2 = *v2 + (int32_t)v1;
    return result;
}

// Address range: 0x2c10f5 - 0x2c10f6
int64_t function_2c10f5(int64_t a1) {
    // 0x2c10f5
    int64_t result; // 0x2c10f5
    return result;
}

// Address range: 0x2c122c - 0x2c1230
int64_t function_2c122c(int64_t a1) {
    // 0x2c122c
    int64_t v1; // 0x2c122c
    int64_t v2 = v1;
    return 256 * v2 & 0xff00 | v2;
}

// Address range: 0x2c1230 - 0x2c1231
int64_t function_2c1230(void) {
    // 0x2c1230
    int64_t result; // 0x2c1230
    return result;
}

// Address range: 0x2c1245 - 0x2c126a
int64_t function_2c1245(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2c1245
    bool v1; // 0x2c1245
    if (v1) {
        function_2c1230();
    }
    // 0x2c1248
    *(int32_t *)a1 = 2 * (int32_t)a1;
    uint32_t v2 = *(int32_t *)-0x7f51bea6 & (int32_t)a3; // 0x2c124a
    int64_t v3 = unknown_7064bc68(); // 0x2c1255
    int32_t * v4 = (int32_t *)((int64_t)v2 - 0x17d17fe6); // 0x2c125a
    int64_t v5; // 0x2c1245
    *v4 = *v4 - (int32_t)v5;
    int32_t * v6 = (int32_t *)(v3 + 0x6d0cc80a); // 0x2c1260
    *v6 = *v6 + (int32_t)v5;
    return v3 & -256 | (int64_t)__asm_in_134((int16_t)v2);
}

// Address range: 0x2c126c - 0x2c1271
int64_t function_2c126c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2c126c
    int64_t result; // 0x2c126c
    return result;
}

// Address range: 0x2c127a - 0x2c1289
int64_t function_2c127a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2c127a
    int64_t v1; // 0x2c127a
    int64_t v2 = v1;
    char * v3 = (char *)(v2 + 0x2513a00); // 0x2c127a
    *v3 = *v3 + (char)v2;
    int32_t * v4 = (int32_t *)(v1 - 0x61fefe00); // 0x2c1282
    *v4 = *v4 + (int32_t)v1;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x2c12ad - 0x2c12b7
int64_t function_2c12ad(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2c12ad
    int64_t v1; // 0x2c12ad
    int64_t v2 = v1;
    __asm_int(-119);
    return ((v2 + a4 / 256) % 256 | v2 & 0xffffff00) + a2 & 0xffffffff;
}

// Address range: 0x2c1305 - 0x2c1306
int64_t function_2c1305(int64_t a1) {
    // 0x2c1305
    int64_t result; // 0x2c1305
    return result;
}

// Address range: 0x2c131d - 0x2c1324
int64_t function_2c131d(void) {
    // 0x2c131f
    return function_7fe0a56();
}

// Address range: 0x2c1333 - 0x2c1340
int64_t function_2c1333(int64_t a1) {
    // 0x2c1333
    int64_t v1; // 0x2c1333
    unknown_ffffffffb85ef33f(v1 & 0xffffffff, 0x30009163);
    return unknown_79d1995d();
}

// Address range: 0x2c1346 - 0x2c1351
int64_t function_2c1346(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2c1346
    int64_t v1; // 0x2c1346
    __asm_outsb((int16_t)a3, (char)v1);
    int64_t result = unknown_689f1534(); // 0x2c1347
    __asm_out_135(3, (char)result);
    return result;
}

// Address range: 0x2c1357 - 0x2c1361
int64_t function_2c1357(void) {
    uint64_t v1 = unknown_79d1995d(); // 0x2c1357
    int64_t v2; // 0x2c1357
    char * v3 = (char *)(v2 - 109); // 0x2c135c
    char v4 = v1 / 256; // 0x2c135c
    *v3 = *v3 + v4;
    int64_t v5; // 0x2c1357
    return 256 * (int64_t)(v4 - *(char *)&v5) | v1 & -0xff01;
}

// Address range: 0x2c13a2 - 0x2c13a5
int64_t function_2c13a2(int64_t a1) {
    // 0x2c13a2
    int64_t result; // 0x2c13a2
    return result;
}

// Address range: 0x2c13bd - 0x2c13be
int64_t function_2c13bd(int64_t a1) {
    // 0x2c13bd
    int64_t result; // 0x2c13bd
    return result;
}

// Address range: 0x2c149a - 0x2c149c
int64_t function_2c149a(void) {
    // 0x2c149a
    int64_t result; // 0x2c149a
    return result;
}

// Address range: 0x2c14a2 - 0x2c14ad
int64_t function_2c14a2(int64_t a1, int64_t a2) {
    // 0x2c14a2
    int32_t v1; // 0x2c14a2
    *(int32_t *)(a2 + 110) = (int32_t)(int64_t)&v1;
    int64_t result; // 0x2c14a2
    return result;
}

// Address range: 0x2c1563 - 0x2c1566
int64_t function_2c1563(int64_t a1) {
    // 0x2c1563
    int64_t result; // 0x2c1563
    return result;
}

// Address range: 0x2c1567 - 0x2c156e
int64_t function_2c1567(int64_t a1) {
    // 0x2c1567
    int64_t result; // 0x2c1567
    return result;
}

// Address range: 0x2c1596 - 0x2c159e
int64_t function_2c1596(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = *(int32_t *)(a3 + 0x1e82135); // 0x2c1596
    int64_t v2; // 0x2c1596
    return function_2c15f1(a1, a2, (v2 & 0xffffffff | 0x100000000 * a3) % (int64_t)v1 & 0xffffffff, v2);
}

// Address range: 0x2c15aa - 0x2c15ab
int64_t function_2c15aa(void) {
    // 0x2c15aa
    int64_t result; // 0x2c15aa
    return result;
}

// Address range: 0x2c15f1 - 0x2c1615
int64_t function_2c15f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    __asm_int3();
    int64_t v2 = unknown_ffffffffdbf214fa(); // 0x2c15f4
    char * v3 = (char *)(a4 - 0x2fbfe978); // 0x2c15f9
    unsigned char v4 = *v3; // 0x2c15f9
    unsigned char v5 = (char)a4 % 32; // 0x2c15f9
    v1 = a2;
    if (v5 != 0) {
        bool v6; // 0x2c15f1
        *v3 = v4 >> v5 | (char)v6 << 8 - v5 | (char)((int16_t)v4 << (int16_t)(9 - v5));
    }
    char * v7 = (char *)(v1 + 0x1e832be); // 0x2c15ff
    char v8 = *v7 + (char)v2; // 0x2c15ff
    unsigned char v9 = llvm_ctpop_i8(v8); // 0x2c15ff
    *v7 = v8;
    *(char *)v2 = (char)(v9 % 2 != 0);
    int64_t v10; // 0x2c15f1
    char * v11 = (char *)(a4 - 0x1783441f + 2 * v10); // 0x2c160a
    *v11 = *v11 | (char)(v10 / 256);
    return v2 & -256 | (int64_t)*(char *)&v1;
}

// Address range: 0x2c1633 - 0x2c1638
int64_t function_2c1633(void) {
    // 0x2c1633
    return function_4555ee9e();
}

// Address range: 0x2c168b - 0x2c168d
int64_t function_2c168b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2c168b
    int64_t result; // 0x2c168b
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x2c1745 - 0x2c189c
int64_t function_2c1745(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_71ab64b(); // 0x2c1745
    char * v2 = (char *)(v1 - 0x3f63f100); // 0x2c174a
    unsigned char v3 = *v2; // 0x2c174a
    unsigned char v4 = (char)v1; // 0x2c174a
    char v5 = v3 + v4; // 0x2c174a
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x2c174a
    *v2 = v5;
    bool v7; // 0x2c1745
    int64_t v8 = 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | (int64_t)(v5 < v3) | 64 * (int64_t)(v5 == 0) | 128 * (int64_t)(v5 < 0) | 16 * (int64_t)(v3 % 16 + v4 % 16 > 15) | 4 * (int64_t)(v6 % 2 == 0) | 2048 * (int64_t)(((v5 ^ v3) & (v5 ^ v4)) < 0) | 2; // 0x2c1750
    int64_t v9; // bp-40, 0x2c1745
    int64_t v10 = (int64_t)&v9; // 0x2c17e6
    int64_t * v11 = (int64_t *)(v10 + 16); // 0x2c17ee
    int64_t v12 = *v11; // 0x2c17ee
    int64_t v13 = v10 - 8; // 0x2c17ee
    int64_t * v14 = (int64_t *)v13; // 0x2c17ee
    *v14 = v12;
    int64_t * v15 = (int64_t *)(v10 - 16); // 0x2c17f2
    int64_t * v16 = (int64_t *)(v10 - 24); // 0x2c1808
    *v15 = a4;
    *v16 = v8;
    v9 = v8;
    *(int64_t *)(v10 - 32) = v12;
    *v11 = *v15;
    *v15 = *v14;
    *v16 = v13;
    *v14 = v9;
    *v15 = v10;
    int64_t v17; // 0x2c1745
    return function_cf3c7(a1, a2, a3, *v15, v17, v17, v9);
}

// Address range: 0x2c189c - 0x2c1a05
int64_t function_2c189c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2c189c
    int64_t v1; // bp-32, 0x2c189c
    int64_t v2 = (int64_t)&v1; // 0x2c1919
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x2c1930
    int64_t * v4 = (int64_t *)v3; // 0x2c1931
    *v4 = a3;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x2c1943
    *v5 = v3;
    int64_t v6 = *v4; // 0x2c1944
    int64_t v7 = v2 - 24; // 0x2c1944
    int64_t * v8 = (int64_t *)v7; // 0x2c1944
    *v8 = v6;
    int64_t v9 = *(int64_t *)(v2 + 32); // 0x2c1960
    *v4 = v9;
    *v5 = v2;
    int64_t * v10 = (int64_t *)(v2 + 8); // 0x2c1985
    int64_t v11 = *v10; // 0x2c1985
    *v5 = v11;
    *v8 = a2;
    int64_t * v12 = (int64_t *)(v2 - 32); // 0x2c1996
    *v12 = v7;
    *v8 = 0x76de7ce4;
    *v12 = v9;
    *v4 = *v8;
    *(int64_t *)(v2 - 40) = v11;
    *v12 = v11;
    *v10 = *v8;
    int64_t v13 = *v5; // 0x2c19db
    *v8 = v13;
    *v12 = v13;
    int64_t v14 = *v4; // 0x2c19ea
    *v5 = v14;
    *v8 = v14;
    int64_t v15; // 0x2c189c
    return function_cf3c7(a1, *v8, v6, a4, a5, v11, v15);
}

// Address range: 0x2c1a05 - 0x2c1b6c
int64_t function_2c1a05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2c1a05
    int64_t v1; // 0x2c1a05
    return function_cf3c7(a1, a2, a3, a4, v1, v1, a5);
}

// Address range: 0x2c1b6c - 0x2c1cbb
int64_t function_2c1b6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2c1b6c
    int64_t v1; // 0x2c1b6c
    bool v2; // 0x2c1b6c
    return function_cf3c7(a1, a2, a3, a4, 169, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x2c1cd4 - 0x2c1cdf
int64_t function_2c1cd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2c1cd4
    int64_t v1; // 0x2c1cd4
    int64_t v2 = v1;
    int64_t result = v2 + 256 * a3 & 0xff00 | v2 & -0xff01; // 0x2c1cd4
    char * v3 = (char *)result; // 0x2c1cd9
    *v3 = *v3 + (char)v2;
    char * v4 = (char *)(v1 + 49); // 0x2c1cdb
    *v4 = *v4 + (char)a4;
    return result;
}

// Address range: 0x2c1d21 - 0x2c1d26
int64_t function_2c1d21(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0x2c1d21
    *v1 = *v1 | (char)a4;
    int64_t v2; // 0x2c1d21
    return function_2c1d3a(a1, a2, a3, a4, v2, v2, (int64_t)&g4);
}

// Address range: 0x2c1d38 - 0x2c1d3a
int64_t function_2c1d38(void) {
    // 0x2c1d38
    int64_t v1; // 0x2c1d38
    return v1 & -184;
}

// Address range: 0x2c1d3a - 0x2c1dff
int64_t function_2c1d3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t * v1 = (int64_t *)(a7 - 24); // 0x2c1d60
    int64_t v2 = a7 - 32; // 0x2c1d65
    int64_t * v3 = (int64_t *)v2; // 0x2c1d65
    int64_t result = *(int64_t *)(a7 + 24); // 0x2c1d70
    *(int64_t *)(a7 - 16) = result;
    int64_t v4 = a7 - 8; // 0x2c1d8a
    *v1 = v4;
    *v1 = *(int64_t *)a7;
    *v3 = result;
    *(int64_t *)v4 = *v1;
    *v1 = 0x21bf0acf;
    *v3 = v2;
    return result;
}

// Address range: 0x2c5064 - 0x2c51ab
int64_t function_2c5064(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2c5064
    return function_cf3c7(a1, a2, a3, a4, a5, a6, 0x29b3ed);
}

// Address range: 0x2c51e5 - 0x2c51e7
int64_t function_2c51e5(void) {
    // 0x2c51e5
    int64_t v1; // 0x2c51e5
    bool v2; // 0x2c51e5
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x2c5222 - 0x2c522a
int64_t function_2c5222(void) {
    // 0x2c5222
    return function_2c525b((int64_t)&g4);
}

// Address range: 0x2c522a - 0x2c525b
int64_t function_2c522a(int64_t a1) {
    // 0x2c522a
    int64_t v1; // 0x2c522a
    return 0x100000000 * v1 >> 32;
}

// Address range: 0x2c525b - 0x2c5263
int64_t function_2c525b(int64_t a1) {
    // 0x2c525b
    int64_t result; // 0x2c525b
    return result;
}
