/*
 * Targeted RetDec C for native executable gap queue batch 1440.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x5f8a5-0x5faa5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5faa5-0x5fca5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5fca5-0x5fea5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5fea5-0x600a5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x600a5-0x602a5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x602a5-0x604a5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x606a5-0x607e2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33e1c0-0x33e3c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33e3c0-0x33e5c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33e5c0-0x33e7c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33e7c0-0x33e9c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33e9c0-0x33ebc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33ebc0-0x33edc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33edc0-0x33efc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33efc0-0x33f109 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fabd6-0x4fadd6 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g5;
extern int g6;
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

int64_t function_162dd4a2();
int64_t function_20540();
int64_t function_20a50();
int64_t function_23418a();
int64_t function_2492f2();
int64_t function_287f25();
int64_t function_33e1c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33e229(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_33e292(int64_t a1);
int64_t function_33e2f0(void);
int64_t function_33e31b(void);
int64_t function_33e33a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33e35e(void);
int64_t function_33e367(void);
int64_t function_33e36c(void);
int64_t function_33e373(int64_t a1, int64_t a2, int64_t a3);
int64_t function_33e3b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33e3c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33e435(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, char a5);
int64_t function_33e4e1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_33e58f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33e5a8(void);
int64_t function_33e5c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33e5e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33e61f(void);
int64_t function_33e655(int64_t a1, int64_t a2, int64_t a3);
int64_t function_33e66a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_33e6a2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_33e7f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33e83e(void);
int64_t function_33e8b1(int64_t a1);
int64_t function_33e8b9(int64_t a1);
int64_t function_33e8f3(void);
int64_t function_33e900(int64_t a1);
int64_t function_33e95d(void);
int64_t function_33e966(void);
int64_t function_33e96d(void);
int64_t function_33e970(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_33e9e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_33eb40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_33ecb4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_33ee1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33ef72(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_36a2a5();
int64_t function_3e8510e8();
int64_t function_4eeb50();
int64_t function_4f0eb0();
int64_t function_4f8cc0();
int64_t function_4faad5();
int64_t function_4faae4();
int64_t function_4fabd6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4fabef(int64_t a1, int64_t a2);
int64_t function_4faca0(int64_t result, int64_t a2);
int64_t function_4facc0(int64_t result, int64_t a2);
int64_t function_4fad00(int64_t result, int64_t a2);
int64_t function_4fad20(int64_t result, int64_t a2);
int64_t function_4fad40(int64_t result, int64_t a2, int64_t a3);
int64_t function_5423f0();
int64_t function_5f860();
int64_t function_5f8a5(int64_t a1, uint64_t a2);
int64_t function_5f8fa(int64_t a1, uint64_t a2);
int64_t function_5f950(int64_t a1, int64_t a2);
int64_t function_5fa10(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5fa44(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_5facc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5faf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5fafe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_5fb18(void);
int64_t function_5fb1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_5fb60(int64_t a1, int64_t a2);
int64_t function_5fb92(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5fbca(void);
int64_t function_5fbd5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5fc45(void);
int64_t function_5fc5b(void);
int64_t function_5fcba(void);
int64_t function_5fcec(int64_t a1);
int64_t function_5fd01(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5fd25(void);
int64_t function_5fd4d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5fd6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5fd95(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5fd9c(int64_t a1, int64_t a2);
int64_t function_5fded(void);
int64_t function_5fdf2(int64_t a1);
int64_t function_5fe28(void);
int64_t function_5fe39(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5fe40(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5fe42(void);
int64_t function_5fe99(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5feb2(void);
int64_t function_5ff01(void);
int64_t function_5ff51(int64_t a1);
int64_t function_5ff70(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5ff73(void);
int64_t function_5ff74(void);
int64_t function_5ffb8(void);
int64_t function_5ffba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_600bb(int64_t a1);
int64_t function_6011f(void);
int64_t function_60160(int64_t a1, int64_t a2, int64_t a3);
int64_t function_601c3(void);
int64_t function_601c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_601f8(void);
int64_t function_60223(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_602c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_602cc(void);
int64_t function_602e1(int64_t a1);
int64_t function_602e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_603ae(void);
int64_t function_603d4(uint64_t a1, int64_t a2);
int64_t function_60413(void);
int64_t function_60426(void);
int64_t function_6042b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_60462(int64_t a1);
int64_t function_60484(void);
int64_t function_606a5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6071a(int64_t a1, uint64_t a2);
int64_t function_607b6(int64_t result);
int64_t function_607ba(int64_t a1);
int64_t function_608d2();
int64_t function_60c84();
int64_t function_60db0();
int64_t function_60eae();
int64_t function_703aa836();
int64_t function_729b6();
int64_t function_729ce();
int64_t function_caf2a();
int64_t function_ffffffff8ba899eb();
int64_t function_ffffffffa0f6f499();
int64_t function_ffffffffc80be37f();
int64_t function_ffffffffd04286fd();
int64_t function_ffffffffd1a06151();
int64_t function_ffffffffd4d266df();
int64_t function_ffffffffdf3601a9();
int64_t function_ffffffffe973fc0f();
int64_t unknown_163bf983();
int64_t unknown_21c58be();
int64_t unknown_403bf6a8();
int64_t unknown_41f1b43();
int64_t unknown_4cbb5318();
int64_t unknown_592656da();
int64_t unknown_64e418ba();
int64_t unknown_69587e7();
int64_t unknown_7c82da00();
int64_t unknown_ffffffff87afec64();
int64_t unknown_ffffffff982a36e9();
int64_t unknown_ffffffff9b3e6f69();
int64_t unknown_ffffffffa84f7659();
int64_t unknown_ffffffffa8f61dbb();
int64_t unknown_ffffffffac1db32d();
int64_t unknown_ffffffffb1f92378();
int64_t unknown_ffffffffb9f9fdcb();
int64_t unknown_ffffffffc12e8ef8();
int64_t unknown_ffffffffc9325d52();
int64_t unknown_ffffffffd3c5f209();
int64_t unknown_ffffffffdc9db3af();
int64_t unknown_ffffffffe86735dc();
int64_t unknown_ffffffffe925ccd1();

// Address range: 0x5f8a5 - 0x5f8fa
int64_t function_5f8a5(int64_t a1, uint64_t a2) {
    int64_t result = function_5f860(); // 0x5f8ac
    if ((char)result == 0) {
        // 0x5f8f9
        return result;
    }
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x5f8b5
    int64_t result2 = 0; // 0x5f8e6
    if (0x39879829e16013bd * (v1 + 0x5e0a76393bfeda2b ^ -0x716204840bfb3545) <= a2) {
        int64_t v2 = *(int64_t *)(a1 + 16); // 0x5f8e8
        result2 = 0x39879829e16013bd * (v2 + 0x5e0a76393bfeda2b ^ -0x716204840bfb3545) >= a2;
    }
    // 0x5f8f9
    return result2;
}

// Address range: 0x5f8fa - 0x5f942
int64_t function_5f8fa(int64_t a1, uint64_t a2) {
    int64_t result = function_5f860(); // 0x5f8fd
    if ((char)result == 0) {
        // 0x5f941
        return result;
    }
    uint64_t v1 = 0x39879829e16013bd * (a1 + 0x5e0a76393bfeda2b ^ -0x716204840bfb3545); // 0x5f92a
    int64_t result2 = 0; // 0x5f933
    if (v1 <= a2) {
        int64_t v2 = (int64_t)*(int32_t *)(a1 + 56); // 0x5f935
        result2 = v2 & 0xffffff00 | (int64_t)(v1 + v2 > a2);
    }
    // 0x5f941
    return result2;
}

// Address range: 0x5f950 - 0x5fa05
int64_t function_5f950(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x5f969
    int64_t v2; // bp-56, 0x5f950
    function_729b6((int64_t)&v2, a1);
    int64_t * v3 = (int64_t *)(a1 + 48); // 0x5f97e
    int64_t v4 = *v3; // 0x5f97e
    if (v4 == *(int64_t *)(a1 + 56)) {
        // 0x5f9ce
        function_60c84(a1 + 40, v4, a2);
    } else {
        // 0x5f988
        *(int64_t *)v4 = a1;
        *(int64_t *)(v4 + 8) = *(int64_t *)(a2 + 8);
        *(int64_t *)(v4 + 16) = *(int64_t *)(a2 + 16);
        function_60eae(v4 + 24, a2 + 24);
        *(int32_t *)(v4 + 48) = *(int32_t *)(a2 + 48);
        *(int32_t *)(v4 + 52) = *(int32_t *)(a2 + 52);
        *(int32_t *)(v4 + 56) = *(int32_t *)(a2 + 56);
        *v3 = *v3 + 64;
    }
    // 0x5f9dd
    function_729ce(&v2);
    int64_t result = 0; // 0x5f9f3
    if (v1 != __readfsqword(40)) {
        // 0x5f9f5
        __stack_chk_fail();
        result = (int64_t)&g6;
    }
    // 0x5f9fa
    return result;
}

// Address range: 0x5fa10 - 0x5fa44
int64_t function_5fa10(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5fa10
    __readfsqword(40);
    return function_23418a();
}

// Address range: 0x5fa44 - 0x5fab8
int64_t function_5fa44(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x5fa44
    int64_t result; // 0x5fa44
    int32_t * v1 = (int32_t *)(result + 125); // 0x5fa48
    int32_t v2 = *v1; // 0x5fa48
    *v1 = v2 >> 29;
    char * v3 = (char *)(a5 + 0x6d66c1a4); // 0x5fa4f
    *v3 = *v3 + (char)result + (char)((v2 & 0x10000000) != 0);
    __asm_frstor(*(int864_t *)(result + 0x201c0011));
    return result;
}

// Address range: 0x5facc - 0x5faf0
int64_t function_5facc(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)-0x1123e8a70d92e75e; // 0x5fad7
    return (0x10000 * v1 >> 16 & -256 | (int32_t)__asm_in(-77)) + 0x64cd00af;
}

// Address range: 0x5faf4 - 0x5fafe
int64_t function_5faf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5faf4
    return function_ffffffffd1a06151();
}

// Address range: 0x5fafe - 0x5fb18
int64_t function_5fafe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x5fafe
    __asm_sti();
    int64_t * v1 = (int64_t *)(a6 - 15); // 0x5fb0b
    *v1 = *v1 | -0x7d1f8bd0;
    return function_162dd4a2();
}

// Address range: 0x5fb18 - 0x5fb1d
int64_t function_5fb18(void) {
    // 0x5fb18
    return function_ffffffffe973fc0f();
}

// Address range: 0x5fb1d - 0x5fb5a
int64_t function_5fb1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x5fb1d
    int64_t v1; // 0x5fb1d
    unsigned char v2 = (char)a4 % 32 & *(char *)(v1 - 0x772d7725); // 0x5fb23
    if (v2 != 0) {
        char * v3 = (char *)(v1 - 0x773f772e); // 0x5fb23
        unsigned char v4 = *v3; // 0x5fb23
        unsigned char v5 = 8 - v2;
        *v3 = v4 << v5 | v4 >> v2;
        char * v6 = (char *)(v1 - 0x773f7725); // 0x5fb29
        unsigned char v7 = *v6; // 0x5fb29
        *v6 = v7 >> v2 | v7 << v5;
    }
    char * v8 = (char *)(v1 - 0x38dbdbac); // 0x5fb2f
    unsigned char v9 = *v8; // 0x5fb2f
    *v8 = v9 / 16 | 16 * v9;
    int64_t v10 = v1 & -220; // 0x5fb36
    char * v11 = (char *)v10; // 0x5fb38
    *v11 = *v11 + 2 * (char)v10;
    int64_t result = 0; // 0x5fb4e
    if (__readfsqword(40) != a5) {
        // 0x5fb50
        __stack_chk_fail();
        result = (int64_t)&g6;
    }
    // 0x5fb55
    return result;
}

// Address range: 0x5fb60 - 0x5fb92
int64_t function_5fb60(int64_t a1, int64_t a2) {
    // 0x5fb60
    __readfsqword(40);
    return function_2492f2();
}

// Address range: 0x5fb92 - 0x5fba7
int64_t function_5fb92(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5fb92
    int64_t v1; // 0x5fb92
    *(int32_t *)a4 = (int32_t)v1 - (int32_t)a2;
    while (true) {
        // continue -> 0x5fb9c
    }
}

// Address range: 0x5fbca - 0x5fbcb
int64_t function_5fbca(void) {
    // 0x5fbca
    int64_t result; // 0x5fbca
    return result;
}

// Address range: 0x5fbd5 - 0x5fbe3
int64_t function_5fbd5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5fbd5
    int64_t result; // 0x5fbd5
    __asm_psrlq(result, 126);
    return result;
}

// Address range: 0x5fc45 - 0x5fc48
int64_t function_5fc45(void) {
    // 0x5fc45
    int64_t result; // 0x5fc45
    return result;
}

// Address range: 0x5fc5b - 0x5fc5c
int64_t function_5fc5b(void) {
    // 0x5fc5b
    int64_t result; // 0x5fc5b
    return result;
}

// Address range: 0x5fcba - 0x5fcbc
int64_t function_5fcba(void) {
    // 0x5fcba
    int64_t result; // 0x5fcba
    return result;
}

// Address range: 0x5fcec - 0x5fcf0
int64_t function_5fcec(int64_t a1) {
    // 0x5fcec
    return __asm_wait(a1);
}

// Address range: 0x5fd01 - 0x5fd03
int64_t function_5fd01(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5fd01
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x5fd01
    return result;
}

// Address range: 0x5fd25 - 0x5fd27
int64_t function_5fd25(void) {
    // 0x5fd25
    int64_t result; // 0x5fd25
    return result;
}

// Address range: 0x5fd4d - 0x5fd6b
int64_t function_5fd4d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5fd4d
    int64_t v1; // 0x5fd4d
    uint64_t result = v1;
    bool v2; // 0x5fd4d
    if (v2 || false) {
        // 0x5fd66
        *(char *)a1 = (char)a2;
        return result & -256 | (int64_t)*(char *)(result % 256 + v1);
    }
    // 0x5fd4f
    return result;
}

// Address range: 0x5fd6c - 0x5fd95
int64_t function_5fd6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5fd6c
    int64_t v1; // 0x5fd6c
    float80_t v2; // 0x5fd6c
    *(int16_t *)(v1 + 0x646b59b5) = (int16_t)v2;
    int64_t v3; // 0x5fd6c
    bool v4; // 0x5fd6c
    if (!v4) {
        v3 = function_5fded();
    }
    char v5 = v3; // 0x5fd7a
    *(char *)-0x35a9f440eb3b3e9f = v5;
    __writegsbyte(0x1c17c8d5415361b2, v5);
    return __asm_int3();
}

// Address range: 0x5fd95 - 0x5fd9b
int64_t function_5fd95(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5fd95
    int64_t result; // 0x5fd95
    return result;
}

// Address range: 0x5fd9c - 0x5fdda
int64_t function_5fd9c(int64_t a1, int64_t a2) {
    int64_t v1 = a2;
    int32_t v2 = *(int32_t *)0x3d06906e; // 0x5fd9c
    bool v3; // 0x5fd9c
    *(int32_t *)0x3d06906e = (int32_t)v3 + (int32_t)a1 + v2;
    int64_t v4; // 0x5fd9c
    *(int32_t *)-0xb6efa1adcb54331 = (int32_t)v4;
    int64_t v5 = v4 & 0xffffffff; // 0x5fdae
    int64_t v6 = __asm_wait(v5); // 0x5fdb6
    char * v7 = (char *)(4 * a2 - 87 + v6); // 0x5fdb7
    *v7 = *v7 + (char)v4;
    *(char *)v5 = *(char *)&v1;
    int64_t v8 = (v3 ? -1 : 1) + v5; // 0x5fdbd
    char * v9 = (char *)(v6 - 0x780e2cb1); // 0x5fdc3
    *v9 = *v9 & (char)v6;
    int64_t v10 = function_5fe42(); // 0x5fdcb
    int64_t v11; // 0x5fd9c
    int32_t v12 = *(int32_t *)&v11 - 13; // 0x5fdce
    *(int32_t *)v10 = v12;
    v1 = 0x50b60122;
    if (v12 >= 0) {
        function_5fe40(v8, 0x50b60122, v4);
    }
    // 0x5fdd8
    return function_5fe39(v8, 0x50b60122, v4);
}

// Address range: 0x5fded - 0x5fdf1
int64_t function_5fded(void) {
    // 0x5fded
    int64_t result; // 0x5fded
    char * v1 = (char *)(result - 6); // 0x5fded
    *v1 = *v1 ^ -85;
    return result;
}

// Address range: 0x5fdf2 - 0x5fdf5
int64_t function_5fdf2(int64_t a1) {
    // 0x5fdf2
    int64_t result; // 0x5fdf2
    return result;
}

// Address range: 0x5fe28 - 0x5fe2e
int64_t function_5fe28(void) {
    // 0x5fe28
    int64_t v1; // 0x5fe28
    __asm_int1(v1, v1, v1, v1);
    return function_ffffffffd04286fd();
}

// Address range: 0x5fe39 - 0x5fe3f
int64_t function_5fe39(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5fe39
    int64_t result; // 0x5fe39
    return result;
}

// Address range: 0x5fe40 - 0x5fe41
int64_t function_5fe40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5fe40
    return a3 & 0xffffffff;
}

// Address range: 0x5fe42 - 0x5fe43
int64_t function_5fe42(void) {
    // 0x5fe42
    int64_t result; // 0x5fe42
    return result;
}

// Address range: 0x5fe99 - 0x5fea2
int64_t function_5fe99(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5fe99
    int64_t result; // 0x5fe99
    return result;
}

// Address range: 0x5feb2 - 0x5feb3
int64_t function_5feb2(void) {
    // 0x5feb2
    int64_t result; // 0x5feb2
    return result;
}

// Address range: 0x5ff01 - 0x5ff03
int64_t function_5ff01(void) {
    // 0x5ff01
    return function_5feb2();
}

// Address range: 0x5ff51 - 0x5ff52
int64_t function_5ff51(int64_t a1) {
    // 0x5ff51
    int64_t result; // 0x5ff51
    return result;
}

// Address range: 0x5ff70 - 0x5ff73
int64_t function_5ff70(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5ff70
    int64_t v1; // 0x5ff70
    __asm_outsb((int16_t)a3, (char)v1);
    return function_5ff74();
}

// Address range: 0x5ff73 - 0x5ff74
int64_t function_5ff73(void) {
    // 0x5ff73
    int64_t v1; // 0x5ff73
    return __asm_int1(v1, v1, v1, v1);
}

// Address range: 0x5ff74 - 0x5ff77
int64_t function_5ff74(void) {
    // 0x5ff74
    int64_t v1; // 0x5ff74
    return __asm_int1(v1, v1, v1, v1);
}

// Address range: 0x5ffb8 - 0x5ffb9
int64_t function_5ffb8(void) {
    // 0x5ffb8
    int64_t result; // 0x5ffb8
    return result;
}

// Address range: 0x5ffba - 0x6008e
int64_t function_5ffba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x5ffba
    int64_t v1; // 0x5ffba
    char * v2 = (char *)(v1 - 107); // 0x5ffba
    *v2 = 2 * *v2;
    char * v3 = (char *)(a4 + 5 + v1); // 0x5ffbd
    unsigned char v4 = *v3; // 0x5ffbd
    unsigned char v5 = v4 + (char)v1; // 0x5ffbd
    *v3 = v5;
    int64_t v6; // 0x5ffba
    *(int32_t *)a1 = *(int32_t *)&v6;
    bool v7; // 0x5ffba
    int64_t v8 = v7 ? -4 : 4; // 0x5ffc2
    int64_t v9 = v8 + a1; // 0x5ffc2
    v6 = v8 + a2;
    char v10 = *(char *)(v1 - 120); // 0x5ffc3
    char v11 = (char)(v5 < v4) + (char)(v1 / 256) + v10; // 0x5ffc3
    *(char *)v9 = (char)v1;
    int64_t v12 = a4 - 1; // 0x5ffc8
    if (v12 != 0 != (v11 == 0)) {
        // 0x5ffca
        int64_t result; // 0x5ffba
        return result;
    }
    int64_t v13 = v9 + (v7 ? -1 : 1); // 0x5ffc6
    if (v11 > 0) {
        // 0x60022
        return __asm_int1(v13, v6, a5, v12);
    }
    int64_t v14 = v1 & -256; // 0x6006c
    if (v11 == 0) {
        // 0x6006f
        return v14 | (int64_t)__asm_in(36);
    }
    // 0x60055
    if (v11 < 0 | llvm_ctpop_i8(v11) % 2 != 0) {
        // 0x5ffca
        return v14 | (int64_t)*(char *)v6;
    }
    // 0x6005a
    return function_ffffffffd4d266df(v13);
}

// Address range: 0x600bb - 0x600be
int64_t function_600bb(int64_t a1) {
    // 0x600bb
    int64_t result; // 0x600bb
    return result;
}

// Address range: 0x6011f - 0x60122
int64_t function_6011f(void) {
    // 0x6011f
    int64_t result; // 0x6011f
    return result;
}

// Address range: 0x60160 - 0x60163
int64_t function_60160(int64_t a1, int64_t a2, int64_t a3) {
    // 0x60160
    int64_t v1; // 0x60160
    return function_601c5(a1, a2, a3, v1);
}

// Address range: 0x601c3 - 0x601c5
int64_t function_601c3(void) {
    // 0x601c3
    int64_t result; // 0x601c3
    return result;
}

// Address range: 0x601c5 - 0x601c8
int64_t function_601c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x601c5
    int64_t result; // 0x601c5
    return result;
}

// Address range: 0x601f8 - 0x60204
int64_t function_601f8(void) {
    // 0x601f8
    int64_t result; // 0x601f8
    int32_t * v1 = (int32_t *)(result - 0x799ed9bc); // 0x601fa
    *v1 = *v1 | 21;
    return result;
}

// Address range: 0x60223 - 0x602b6
int64_t function_60223(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x60223
    int64_t v1; // 0x60223
    int32_t * v2 = (int32_t *)(v1 + 8 * v1); // 0x60223
    bool v3; // 0x60223
    *v2 = *v2 + (v3 ? 0x54c7142f : 0x54c7142e);
    __asm_out_134((int16_t)a3, -0x1b60c4cc);
    return function_36a2a5();
}

// Address range: 0x602c0 - 0x602c8
int64_t function_602c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x602c0
    *(char *)a2 = 2 * (char)a2;
    return a4 & 0xffffffff;
}

// Address range: 0x602cc - 0x602d5
int64_t function_602cc(void) {
    int64_t result = unknown_ffffffffa84f7659(); // 0x602cc
    __asm_out(-29, (char)result);
    return result;
}

// Address range: 0x602e1 - 0x602e2
int64_t function_602e1(int64_t a1) {
    // 0x602e1
    int64_t result; // 0x602e1
    return result;
}

// Address range: 0x602e4 - 0x6039f
int64_t function_602e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    char * v2 = (char *)(a1 - 127); // 0x602e4
    int64_t v3; // 0x602e4
    unsigned char v4 = *v2 + (char)((uint64_t)v3 / 256); // 0x602e4
    *v2 = v4;
    int64_t result = a3 & 0xffffffff; // 0x602e7
    if (v4 >= 1) {
        // 0x602ea
        *(int64_t *)(result + 2075) = 95;
        return (int64_t)*(int32_t *)-0x239c53fff5361fe;
    }
    // 0x6034a
    *(char *)a1 = *(char *)&v1;
    bool v5; // 0x602e4
    int64_t v6 = v5 ? -1 : 1; // 0x6034c
    int64_t v7 = v1 + v6; // 0x6034c
    v1 = v7;
    uint32_t v8 = (int32_t)a4 % 32; // 0x6034d
    if (v8 != 0) {
        int32_t * v9 = (int32_t *)(v7 + 0x2ab6bc68); // 0x6034d
        *v9 = *v9 << v8;
    }
    int32_t * v10 = (int32_t *)(a1 + 0x41038b5d + v6); // 0x60353
    *v10 = *v10 >> 1;
    return result;
}

// Address range: 0x603ae - 0x603af
int64_t function_603ae(void) {
    // 0x603ae
    int64_t result; // 0x603ae
    return result;
}

// Address range: 0x603d4 - 0x603de
int64_t function_603d4(uint64_t a1, int64_t a2) {
    // 0x603d4
    __asm_int(-14);
    char * v1 = (char *)((a2 & 0xffffffff) - 26); // 0x603db
    *v1 = *v1 + (char)(a1 / 256);
    return a1 & 0xffffffff;
}

// Address range: 0x60413 - 0x60418
int64_t function_60413(void) {
    // 0x60413
    return function_ffffffffdf3601a9();
}

// Address range: 0x60426 - 0x6042b
int64_t function_60426(void) {
    // 0x60426
    return function_3e8510e8();
}

// Address range: 0x6042b - 0x60432
int64_t function_6042b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x6042b
    int64_t result; // 0x6042b
    return result;
}

// Address range: 0x60462 - 0x6046a
int64_t function_60462(int64_t a1) {
    // 0x60462
    int64_t result; // 0x60462
    *(int32_t *)a1 = (int32_t)(result ^ result);
    return result;
}

// Address range: 0x60484 - 0x6048a
int64_t function_60484(void) {
    // 0x60484
    int64_t result; // 0x60484
    return result;
}

// Address range: 0x606a5 - 0x60719
int64_t function_606a5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x606a5
    int64_t v1; // 0x606a5
    function_729b6(v1, v1);
    int64_t v2; // 0x606a5
    int64_t v3 = function_60db0(v1 + 64, &v2); // 0x606c5
    int64_t v4 = v1 + 72; // 0x606ca
    if (v3 != v4) {
        int64_t v5 = function_4f0eb0(v3, v4); // 0x606d6
        function_608d2(v5 + 40);
        function_4eeb50(v5);
        int64_t * v6 = (int64_t *)(v1 + 104); // 0x606ef
        *v6 = *v6 - 1;
    }
    // 0x606f3
    function_729ce((int64_t *)v1);
    int64_t result = 0; // 0x60709
    if (*(int64_t *)40 != __readfsqword(40)) {
        // 0x6070b
        __stack_chk_fail();
        result = (int64_t)&g6;
    }
    // 0x60710
    return result;
}

// Address range: 0x6071a - 0x607b5
int64_t function_6071a(int64_t a1, uint64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x60727
    int64_t v2 = 0; // 0x6073a
    int64_t v3 = 0; // 0x6073a
    if (a2 != 0) {
        // 0x6073c
        int64_t v4; // bp-56, 0x6071a
        function_729b6((int64_t)&v4, a1);
        int64_t v5 = a1 + 72; // 0x60750
        int64_t v6 = *(int64_t *)(a1 + 80);
        int64_t v7 = v5; // 0x6075e
        if (v6 != 0) {
            int64_t v8 = v6;
            int64_t v9; // 0x6071a
            int64_t v10; // 0x6071a
            while (*(int64_t *)(v8 + 32) < a2) {
                // 0x6076f
                v9 = *(int64_t *)(v8 + 24);
                v10 = v5;
                if (v9 == 0) {
                    // break (via goto) -> 0x60775
                    goto lab_0x60775;
                }
                v8 = v9;
            }
            int64_t v11 = *(int64_t *)(v8 + 16);
            v10 = v8;
            while (v11 != 0) {
                int64_t v12 = v8;
                v8 = v11;
                while (*(int64_t *)(v8 + 32) < a2) {
                    // 0x6076f
                    v9 = *(int64_t *)(v8 + 24);
                    v10 = v12;
                    if (v9 == 0) {
                        // break (via goto) -> 0x60775
                        goto lab_0x60775;
                    }
                    v8 = v9;
                }
                // 0x60766
                v11 = *(int64_t *)(v8 + 16);
                v10 = v8;
            }
          lab_0x60775:;
            int64_t v13 = v10;
            v7 = v5;
            if (v5 != v13) {
                // 0x6077a
                v7 = *(int64_t *)(v13 + 32) > a2 ? v5 : v13;
            }
        }
        // 0x60783
        v2 = function_729ce(&v4) & -256;
        v3 = v5 != v7;
    }
    int64_t result = v3 | v2; // 0x607a3
    if (v1 != __readfsqword(40)) {
        // 0x607a5
        __stack_chk_fail();
        result = (int64_t)&g6;
    }
    // 0x607aa
    return result;
}

// Address range: 0x607b6 - 0x607ba
int64_t function_607b6(int64_t result) {
    // 0x607b6
    return result;
}

// Address range: 0x607ba - 0x607e1
int64_t function_607ba(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result = *v1;
    *v1 = result - 1;
    if (result >= 0 == (result != 0)) {
        // 0x607e0
        return result;
    }
    // 0x607db
    return function_4eeb50(a1);
}

// Address range: 0x33e1c0 - 0x33e1d7
int64_t function_33e1c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = *(int32_t *)(a1 - 0x74a38232); // 0x33e1c5
    char * v2 = (char *)(a1 + 0x3d00cb87); // 0x33e1cb
    int64_t v3; // 0x33e1c0
    *v2 = *v2 ^ (char)((uint64_t)v3 / 256);
    int32_t * v4 = (int32_t *)(a4 - 0x36ca2933); // 0x33e1d1
    *v4 = *v4 + (int32_t)a2;
    return (v3 & 0xffffffff | 0x100000000 * a3) / (int64_t)v1 & 0xffffffff;
}

// Address range: 0x33e229 - 0x33e24a
int64_t function_33e229(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x33e229
    int64_t v1; // 0x33e229
    int64_t v2 = v1 + 0xe816b73c + v1; // 0x33e22e
    int32_t * v3 = (int32_t *)(a1 - 0x61fec293); // 0x33e230
    *v3 = *v3 + (int32_t)v1;
    char * v4 = (char *)(v2 & 0xffffffff); // 0x33e236
    *v4 = *v4 | (char)(v1 / 256);
    int64_t result = v2 & 0xffff00ff | (int64_t)&g5; // 0x33e23b
    int32_t * v5 = (int32_t *)result; // 0x33e23d
    uint32_t v6 = *v5; // 0x33e23d
    uint32_t v7 = v6 + (int32_t)a1; // 0x33e23d
    *v5 = v7;
    float80_t v8; // 0x33e229
    *(int64_t *)(a1 + 0x13b2006e) = (int64_t)v8;
    int64_t v9; // 0x33e229
    char v10 = *(char *)&v9; // 0x33e245
    *(char *)a2 = v10 + (char)(a4 / 256) + (char)(v7 < v6);
    return result;
}

// Address range: 0x33e292 - 0x33e293
int64_t function_33e292(int64_t a1) {
    // 0x33e292
    int64_t result; // 0x33e292
    return result;
}

// Address range: 0x33e2f0 - 0x33e2f2
int64_t function_33e2f0(void) {
    // 0x33e2f0
    return function_33e35e();
}

// Address range: 0x33e31b - 0x33e31e
int64_t function_33e31b(void) {
    // 0x33e31b
    int64_t result; // 0x33e31b
    return result;
}

// Address range: 0x33e33a - 0x33e34e
int64_t function_33e33a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x33e33a
    int64_t v1; // 0x33e33a
    *(char *)a1 = (char)v1 - 48 + (char)((int32_t)a4 < (int32_t)v1);
    bool v2; // 0x33e33a
    return unknown_ffffffffc9325d52((v2 ? -1 : 1) + a1, a5);
}

// Address range: 0x33e35e - 0x33e362
int64_t function_33e35e(void) {
    // 0x33e35e
    int64_t v1; // 0x33e35e
    return (uint64_t)v1 / 2 % 0x80000000;
}

// Address range: 0x33e367 - 0x33e36c
int64_t function_33e367(void) {
    // 0x33e367
    return function_ffffffffc80be37f();
}

// Address range: 0x33e36c - 0x33e370
int64_t function_33e36c(void) {
    // 0x33e36c
    int64_t result; // 0x33e36c
    return result;
}

// Address range: 0x33e373 - 0x33e381
int64_t function_33e373(int64_t a1, int64_t a2, int64_t a3) {
    // 0x33e373
    int64_t v1; // 0x33e373
    int64_t result = v1 & -0xff01 | (int64_t)&g1; // 0x33e375
    int32_t * v2 = (int32_t *)(result + (8 * v1 | 1)); // 0x33e37a
    *v2 = *v2 | (int32_t)result;
    return result;
}

// Address range: 0x33e3b5 - 0x33e3c2
int64_t function_33e3b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_21c58be(); // 0x33e3b7
    int64_t v1; // 0x33e3b5
    *(char *)a3 = (char)result + (char)v1;
    return result;
}

// Address range: 0x33e3c2 - 0x33e3ec
int64_t function_33e3c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x33e3c2
    __asm_int(5);
    int32_t * v1 = (int32_t *)(4 * a3 - 0x374c4f25); // 0x33e3ca
    *v1 = *v1 + (int32_t)a4;
    int64_t v2; // 0x33e3c2
    char v3 = *(char *)&v2; // 0x33e3d3
    int64_t v4; // 0x33e3c2
    bool v5; // 0x33e3c2
    *(char *)a4 = v3 | (char)v4 - 62 + (char)v5;
    unknown_ffffffffe86735dc();
    *(int32_t *)0x105fe0e2 = *(int32_t *)0x105fe0e2 + (int32_t)a1;
    return unknown_69587e7();
}

// Address range: 0x33e435 - 0x33e4e0
int64_t function_33e435(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, char a5) {
    // 0x33e435
    int64_t v1; // bp-8, 0x33e435
    int64_t v2; // 0x33e435
    bool v3; // 0x33e435
    if (v3) {
        char * v4 = (char *)((a4 & 0xffffffff) + 0x2e3e89eb); // 0x33e4af
        *v4 = *v4 + (char)a3;
        unknown_ffffffffa8f61dbb();
        int32_t * v5 = (int32_t *)(a2 - 0x5080ffed + a3); // 0x33e4ce
        *v5 = *v5 + (int32_t)v2;
        return (int64_t)&v1;
    }
    int64_t result = v2 | 58; // 0x33e438
    int16_t v6 = a3; // 0x33e43c
    __asm_out_134(v6, (int32_t)result);
    unsigned char v7 = *(char *)-0x34b61cbb; // 0x33e43e
    unsigned char v8 = v7 + (char)((int64_t)&g2 >> 8); // 0x33e43e
    *(char *)-0x34b61cbb = v8;
    if (v8 < v7) {
        // 0x33e46c
        *(char *)a1 = __asm_insb(v6);
        return result;
    }
    int64_t v9 = v2 & -0xff01 | (int64_t)&g2; // 0x33e43a
    v1 = a4;
    int32_t * v10 = (int32_t *)(v9 - 0x77ff9230 + result); // 0x33e44f
    int32_t v11 = *v10 ^ -0x8fec27e; // 0x33e44f
    *v10 = v11;
    if (v11 >= 0) {
        // 0x33e46f
        return a4 & 0xffffffff;
    }
    // 0x33e45e
    return a4 & 0xffffff00 | (int64_t)*(char *)(v9 + a4 % 256);
}

// Address range: 0x33e4e1 - 0x33e584
int64_t function_33e4e1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x33e4e1
    int64_t v1; // 0x33e4e1
    int64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = a2;
    int64_t result = (v2 - a4 / 256) % 256 | v2 & -256; // 0x33e4e1
    int32_t * v5 = (int32_t *)result; // 0x33e4e4
    *v5 = *v5 + (int32_t)v1;
    if ((*(int32_t *)&v3 || (int32_t)a1) >= 0) {
        // 0x33e4ea
        return result;
    }
    int16_t v6 = 256 * (int16_t)v1 >> 8; // 0x33e52f
    int64_t v7 = v1 & 0xffff0000 | (int64_t)(v6 * v6); // 0x33e52f
    int32_t * v8 = (int32_t *)(v3 - 17); // 0x33e531
    *v8 = *v8 + (int32_t)v4;
    char * v9 = (char *)(int64_t)(*(int32_t *)v7 ^ (int32_t)v7); // 0x33e536
    *v9 = *v9 - 55;
    int32_t * v10 = (int32_t *)(v1 + 0x4f00c400); // 0x33e53d
    *v10 = *v10 + (int32_t)result;
    __asm_outsb((int16_t)v3, *(char *)&v4);
    *(int224_t *)(v3 + 0xf6a30293) = (int224_t)__asm_fnstenv();
    uint64_t result2 = unknown_ffffffff87afec64(); // 0x33e55e
    char * v11 = (char *)result2; // 0x33e563
    *v11 = *v11 + (char)(result2 / 256);
    return result2;
}

// Address range: 0x33e58f - 0x33e596
int64_t function_33e58f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x33e58f
    return function_ffffffff8ba899eb();
}

// Address range: 0x33e5a8 - 0x33e5b1
int64_t function_33e5a8(void) {
    // 0x33e5a8
    return unknown_ffffffffdc9db3af();
}

// Address range: 0x33e5c5 - 0x33e5e1
int64_t function_33e5c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x33e5c5
    unknown_ffffffffb9f9fdcb();
    unknown_41f1b43();
    return unknown_592656da() & 0x896e7a2a;
}

// Address range: 0x33e5e1 - 0x33e619
int64_t function_33e5e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x33e5e1
    bool v3; // 0x33e5e1
    *(char *)a3 = (char)a3 - (char)((uint64_t)v2 / 256) + (char)v3;
    unknown_ffffffff982a36e9();
    __asm_fldenv(*(int224_t *)0x363bf6ed);
    unknown_ffffffffc12e8ef8();
    *(int32_t *)a3 = *(int32_t *)&v1 | (int32_t)a3;
    int64_t v4 = v3 ? -4 : 4;
    int64_t v5 = a2; // 0x33e5f9
    int64_t v6 = a1; // 0x33e5f9
    while (true) {
        // 0x33e5fc
        __asm_outsb((int16_t)v1, *(char *)v5);
        *(int32_t *)v6 = *(int32_t *)v5;
        v6 += v4;
        v5 += v4;
        unknown_ffffffffd3c5f209(v6, v5);
        unknown_4cbb5318();
    }
}

// Address range: 0x33e61f - 0x33e627
int64_t function_33e61f(void) {
    // 0x33e61f
    return function_287f25();
}

// Address range: 0x33e655 - 0x33e663
int64_t function_33e655(int64_t a1, int64_t a2, int64_t a3) {
    // 0x33e655
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x33e655
    int32_t v1 = result;
    *(int32_t *)0x3d01e801e85229e6 = v1;
    *(int32_t *)result = v1 + (int32_t)result;
    return result;
}

// Address range: 0x33e66a - 0x33e674
int64_t function_33e66a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x33e66a
    int64_t v1; // 0x33e66a
    return (v1 ^ a4 / 256 % 256) + v1 & 0xffffffff;
}

// Address range: 0x33e6a2 - 0x33e7ee
int64_t function_33e6a2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x33e6a2
    int64_t v1; // 0x33e6a2
    uint64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = a1;
    unknown_403bf6a8();
    int32_t v5 = (int32_t)a4 - 0x1e892a7; // 0x33e6a7
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x33e6a7
    *(int32_t *)a4 = v5;
    if (v6 % 2 != 0) {
        // 0x33e6af
        return function_703aa836();
    }
    // 0x33e71f
    __asm_in_135(1);
    int64_t v7 = unknown_ffffffffac1db32d(); // 0x33e727
    char * v8 = (char *)(v7 - 127); // 0x33e72c
    *v8 = *v8 + (char)(a4 / 256);
    *(char *)0x2cf90cbf3a8d2b72 = (char)v7;
    int64_t v9 = a4 - 1; // 0x33e73f
    if (v9 == 0 | (*(int32_t *)&v3 & 0x1e87e13) == 0) {
        // 0x33e76a
        return __asm_hlt();
    }
    char * v10 = (char *)(a4 - 55); // 0x33e6f7
    unsigned char v11 = *v10; // 0x33e6f7
    unsigned char v12 = (char)v2; // 0x33e6f7
    char v13 = v11 + v12; // 0x33e6f7
    unsigned char v14 = llvm_ctpop_i8(v13); // 0x33e6f7
    *v10 = v13;
    unknown_7c82da00();
    bool v15; // 0x33e6a2
    *(int64_t *)0xabfa2073 = 0x4000 * (int64_t)v15 | 1024 * (int64_t)v15 | 256 * (int64_t)v15 | (int64_t)(v13 < v11) | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v13 < 0) | 16 * (int64_t)(v11 % 16 + v12 % 16 > 15) | 4 * (int64_t)(v14 % 2 == 0) | 2048 * (int64_t)(((v13 ^ v11) & (v13 ^ v12)) < 0) | 2;
    int64_t result = __asm_int3(); // 0x33e702
    unsigned char v16 = (char)result; // 0x33e703
    *(char *)0x335e3d6cca01e82a = v16;
    unsigned char v17 = *(char *)&v4; // 0x33e70c
    int64_t v18 = v15 ? -1 : 1; // 0x33e70c
    int64_t v19 = v4 + v18; // 0x33e70c
    v4 = v19;
    if (v17 >= v16) {
        // 0x33e70f
        return result;
    }
    char * v20 = (char *)(v19 & 0xffffffff); // 0x33e750
    *v20 = *v20 & (char)v19;
    *(char *)v3 = *(char *)&v3 | (char)(v2 / 256);
    int64_t v21 = v9; // 0x33e75c
    __asm_outsd((int16_t)v3, *(int32_t *)(v18 + a2));
    while (v21 != 1) {
        v21--;
        __asm_outsd((int16_t)v3, *(int32_t *)(v18 + a2));
    }
    int64_t v22 = unknown_ffffffff9b3e6f69(); // 0x33e763
    if ((v19 & 1024) != 0) {
        // 0x33e76a
        return __asm_hlt();
    }
    int32_t * v23 = (int32_t *)(v22 + 0x7f800); // 0x33e7e9
    *v23 = *v23 - 0x5405df85;
    __asm_hlt();
    return *(int64_t *)0xabfa207b;
}

// Address range: 0x33e7f0 - 0x33e82d
int64_t function_33e7f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x33e7f0
    int64_t v1; // 0x33e7f0
    int64_t result = v1;
    // 0x33e826
    *(char *)result = 2 * (char)result;
    return result;
    // 0x33e7f5
    unknown_ffffffffe925ccd1();
    __readgsbyte(a2);
    bool v2; // 0x33e7f0
    int64_t v3 = v2 ? -1 : 1; // 0x33e7fc
    return function_ffffffffa0f6f499(v3 + a1, 2 * v3 + a2);
}

// Address range: 0x33e83e - 0x33e840
int64_t function_33e83e(void) {
    // 0x33e83e
    int64_t result; // 0x33e83e
    return result;
}

// Address range: 0x33e8b1 - 0x33e8b2
int64_t function_33e8b1(int64_t a1) {
    // 0x33e8b1
    int64_t result; // 0x33e8b1
    return result;
}

// Address range: 0x33e8b9 - 0x33e8bd
int64_t function_33e8b9(int64_t a1) {
    // 0x33e8b9
    int64_t result; // 0x33e8b9
    return result;
}

// Address range: 0x33e8f3 - 0x33e8f5
int64_t function_33e8f3(void) {
    // 0x33e8f3
    int64_t result; // 0x33e8f3
    return result;
}

// Address range: 0x33e900 - 0x33e908
int64_t function_33e900(int64_t a1) {
    // 0x33e900
    int64_t result; // 0x33e900
    return result;
}

// Address range: 0x33e95d - 0x33e95e
int64_t function_33e95d(void) {
    // 0x33e95d
    int64_t result; // 0x33e95d
    return result;
}

// Address range: 0x33e966 - 0x33e967
int64_t function_33e966(void) {
    // 0x33e966
    int64_t result; // 0x33e966
    return result;
}

// Address range: 0x33e96d - 0x33e96e
int64_t function_33e96d(void) {
    // 0x33e96d
    int64_t result; // 0x33e96d
    return result;
}

// Address range: 0x33e970 - 0x33e9e1
int64_t function_33e970(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = a3 & -0xff01 | (int64_t)&g4; // 0x33e970
    unknown_ffffffffb1f92378();
    uint32_t v3 = *(int32_t *)(a1 - 119) | (int32_t)a1; // 0x33e979
    int64_t v4 = v3; // 0x33e979
    int64_t v5 = unknown_163bf983(v3); // 0x33e97d
    if (v3 == 0) {
        uint32_t v6 = (int32_t)a4;
        uint32_t v7 = v6 + (int32_t)a2; // 0x33e989
        *(int32_t *)a4 = v7;
        int64_t result = v5; // 0x33e98b
        if (v7 < v6) {
            result = function_33e96d();
        }
        // 0x33e98d
        if (a4 == 1 | *(int32_t *)&v1 == *(int32_t *)v4) {
            // 0x33e990
            __asm_in_136((int16_t)v2);
            return function_33e966();
        }
        // 0x33e9d7
        return result;
    }
    if (a4 == 0) {
        function_33e95d();
    }
    int64_t v8 = unknown_64e418ba(); // 0x33e9b4
    char v9 = __asm_in(-87); // 0x33e9b9
    int32_t * v10 = (int32_t *)(v2 + 44); // 0x33e9bb
    *v10 = *v10 ^ v3;
    int32_t * v11 = (int32_t *)(v2 - 0x76724fc6 + 2 * v1); // 0x33e9c0
    int64_t v12; // 0x33e970
    int32_t v13 = v12; // 0x33e9c0
    *v11 = *v11 + v13;
    int64_t v14 = (v8 | (int64_t)v9) & -256; // 0x33e9c7
    int32_t * v15 = (int32_t *)(v12 - 105); // 0x33e9c9
    *v15 = *v15 + v13;
    unsigned char v16 = v9 + (char)(a4 / 256) & -126; // 0x33e9cc
    *(int32_t *)v4 = (int32_t)(v14 | (int64_t)v16);
    return v14 | (int64_t)(v16 + (char)((int64_t)&g4 >> 8) - 120);
}

// Address range: 0x33e9e5 - 0x33eb40
int64_t function_33e9e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x33e9e5
    int64_t v1; // 0x33e9e5
    char * v2 = (char *)(v1 - 0x3f6df100); // 0x33e9e5
    *v2 = *v2 + (char)v1;
    int64_t v3; // bp-32, 0x33e9e5
    v3 = (int64_t)&v3;
    return function_caf2a(v1, a2, a3, a4, a5, a6, 169);
}

// Address range: 0x33eb40 - 0x33ecb4
int64_t function_33eb40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x33eb40
    int64_t v1; // 0x33eb40
    bool v2; // 0x33eb40
    return function_caf2a(a1, a2, a3, v1, a5, a6, v1 & -256 | (int64_t)!v2);
}

// Address range: 0x33ecb4 - 0x33ee1a
int64_t function_33ecb4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x33ecb4
    int64_t v1; // bp-48, 0x33ecb4
    v1 = (int64_t)&v1;
    int64_t v2; // 0x33ecb4
    return function_caf2a(a1, v2, a3, a4, a5, a6, 310);
}

// Address range: 0x33ee1a - 0x33ef72
int64_t function_33ee1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x33ee1a
    int64_t v1; // 0x33ee1a
    int64_t v2 = v1;
    int64_t v3; // bp-48, 0x33ee1a
    int64_t v4 = (int64_t)&v3; // 0x33ef31
    int64_t * v5 = (int64_t *)(v4 + 8); // 0x33ef45
    *v5 = a2;
    *v5 = v4 + 24;
    return function_caf2a(0x33e2e4, *v5, v2, v2, v1, v1, v1);
}

// Address range: 0x33ef72 - 0x33f109
int64_t function_33ef72(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x33ef72
    int64_t v1; // 0x33ef72
    return function_caf2a(a1, a2, a3, a4, a5, v1, 0x33e53c);
}

// Address range: 0x4fabd6 - 0x4fabef
int64_t function_4fabd6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4fabd6
    int64_t v1; // 0x4fabd6
    if (v1 != 0) {
        function_4faae4();
    }
    // 0x4fabe2
    return function_4faad5();
}

// Address range: 0x4fabef - 0x4fac91
int64_t function_4fabef(int64_t a1, int64_t a2) {
    int64_t result = function_20a50(); // 0x4fabef
    function_20540();
    _Unwind_Resume((struct _Unwind_Exception *)result);
    int64_t v1 = *(int64_t *)(*(int64_t *)result - 24) + result; // 0x4fac21
    char * v2 = (char *)(v1 + 228); // 0x4fac24
    if (*v2 != 0) {
        // 0x4fac2d
        *(int32_t *)(v1 + 224) = (int32_t)a2;
        return result;
    }
    // 0x4fac40
    if (*(int64_t *)(v1 + 240) == 0) {
        // 0x4fac6d
        function_5423f0(0);
        abort();
        // UNREACHABLE
    }
    // 0x4fac4c
    *v2 = 1;
    *(int32_t *)(v1 + 224) = (int32_t)a2;
    return result;
}

// Address range: 0x4faca0 - 0x4facb3
int64_t function_4faca0(int64_t result, int64_t a2) {
    int32_t * v1 = (int32_t *)(result + 24 + *(int64_t *)(result - 24)); // 0x4facaf
    *v1 = *v1 & -1 - (int32_t)a2;
    return result;
}

// Address range: 0x4facc0 - 0x4facf8
int64_t function_4facc0(int64_t result, int64_t a2) {
    int32_t v1 = a2; // 0x4facd2
    int32_t v2 = 64; // 0x4facc0
    switch (v1) {
        case 10: {
            // 0x4facec
            v2 = 2;
        }
        case 8: {
          lab_0x4facec:;
            int32_t * v3 = (int32_t *)(result + 24 + *(int64_t *)(result - 24)); // 0x4facec
            *v3 = *v3 & -75 | v2;
            return result;
        }
        default: {
            // 0x4face1
            v2 = 8 * (int32_t)(v1 == 16);
            // branch (via goto) -> 0x4facec
            goto lab_0x4facec;
        }
    }
}

// Address range: 0x4fad00 - 0x4fad13
int64_t function_4fad00(int64_t result, int64_t a2) {
    // 0x4fad00
    *(int64_t *)(result + 8 + *(int64_t *)(result - 24)) = 0x100000000 * a2 >> 32;
    return result;
}

// Address range: 0x4fad20 - 0x4fad33
int64_t function_4fad20(int64_t result, int64_t a2) {
    // 0x4fad20
    *(int64_t *)(result + 16 + *(int64_t *)(result - 24)) = 0x100000000 * a2 >> 32;
    return result;
}

// Address range: 0x4fad40 - 0x4fadd3
int64_t function_4fad40(int64_t result, int64_t a2, int64_t a3) {
    // 0x4fad40
    __readfsqword(40);
    function_4f8cc0();
    char v1; // bp-37, 0x4fad40
    if (v1 == 0) {
        // 0x4fadb8
        __readfsqword(40);
        return result;
    }
    int64_t result2 = (int64_t)&v1; // 0x4fad4c
    if (*(int64_t *)(result + 256 + *(int64_t *)(result2 - 24)) == 0) {
        // 0x4fadf1
        return result2;
    }
    // 0x4fadb8
    __readfsqword(40);
    return result;
}
