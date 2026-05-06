/*
 * Targeted RetDec C for native executable gap queue batch 1422.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2b8f75-0x2b9075 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b9175-0x2b9375 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b9475-0x2b9575 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b9575-0x2b9775 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b9775-0x2b9975 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b9975-0x2b9b75 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b9d75-0x2b9f30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44f045-0x44f245 rank=- name=- kind=- bytes=- uncovered=-
 *   0x540f3d-0x54113d rank=- name=- kind=- bytes=- uncovered=-
 *   0x54113d-0x54133d rank=- name=- kind=- bytes=- uncovered=-
 *   0x54133d-0x54153d rank=- name=- kind=- bytes=- uncovered=-
 *   0x54153d-0x54173d rank=- name=- kind=- bytes=- uncovered=-
 *   0x54173d-0x54193d rank=- name=- kind=- bytes=- uncovered=-
 *   0x54193d-0x541b3d rank=- name=- kind=- bytes=- uncovered=-
 *   0x541b3d-0x541d3d rank=- name=- kind=- bytes=- uncovered=-
 *   0x541d3d-0x541ef0 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
extern int g6;
extern int g7;
extern int g8;
extern int g9;
extern int g10;
extern int g11;
extern int g12;
extern int g13;
extern int g14;
extern int g15;
extern int g16;
extern int g17;
extern int g18;
extern int g19;
extern int g20;
extern int g21;
extern int g22;
extern int g23;
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

int64_t function_10ef882();
int64_t function_2b8f75(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b9175(void);
int64_t function_2b91a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b9217(void);
int64_t function_2b922f(void);
int64_t function_2b924c(int64_t a1);
int64_t function_2b9299(int64_t a1);
int64_t function_2b92c9(int64_t a1);
int64_t function_2b92d9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2b9331(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b9475(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2b948b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result, int64_t a6);
int64_t function_2b951b(void);
int64_t function_2b9551(void);
int64_t function_2b9556(void);
int64_t function_2b9571(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b9597(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b9647(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b96c4(int64_t a1);
int64_t function_2b96eb(int64_t a1);
int64_t function_2b96ed(int64_t a1);
int64_t function_2b96f3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2b9756(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b978a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b9834(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_2b98d2(void);
int64_t function_2b98ea(int64_t a1);
int64_t function_2b992f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2b99b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b99c5(void);
int64_t function_2b99cd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2b99ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2b9b35(void);
int64_t function_2b9d75(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b9dbb(int64_t a1);
int64_t function_2b9ddd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b9e92(void);
int64_t function_2b9ed9(void);
int64_t function_2b9ee0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3574ef13();
int64_t function_3d6d9724();
int64_t function_44f045(void);
int64_t function_44f0f0(void);
int64_t function_44f11d(void);
int64_t function_44f143(int64_t a1);
int64_t function_44f1bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44f1c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44f1d8(void);
int64_t function_44f23b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_49b0559f();
int64_t function_4fc010();
int64_t function_4fc7e0();
int64_t function_4fca70();
int64_t function_4fd0d0();
int64_t function_4feb80();
int64_t function_5009e0();
int64_t function_5029a0();
int64_t function_5033d0();
int64_t function_505260();
int64_t function_505ca0();
int64_t function_540f3d(void);
int64_t function_540f50(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_540ffc(void);
int64_t function_541030(int64_t a1, int64_t a2, int64_t a3);
int64_t function_54115a(void);
int64_t function_54119b(void);
int64_t function_5411a0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5411f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5412e4(void);
int64_t function_541347(void);
int64_t function_541350(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5414da(int64_t a1, int64_t a2, int64_t a3);
int64_t function_54154b(void);
int64_t function_54154d(void);
int64_t function_541560(int64_t a1, int64_t a2);
int64_t function_5415b0(int64_t a1, int64_t a2);
int64_t function_5415c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_541674(void);
int64_t function_5416b0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5417ea(void);
int64_t function_541832(void);
int64_t function_541840(int64_t a1, int64_t a2, int64_t a3);
int64_t function_541890(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_54193c(void);
int64_t function_541970(int64_t a1, int64_t a2, int64_t a3);
int64_t function_541a9a(void);
int64_t function_541adb(void);
int64_t function_541ae0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_541b30(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_541c24(void);
int64_t function_541c87(void);
int64_t function_541c90(int64_t a1, int64_t a2, int64_t a3);
int64_t function_541e1a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_541e8b(void);
int64_t function_541e8d(void);
int64_t function_541ea0(int64_t a1, int64_t a2);
int64_t function_54cb80();
int64_t function_54cf10();
int64_t function_56e59abf();
int64_t function_57a22c4();
int64_t function_ffffffff839317bc();
int64_t function_ffffffffc3369a4c();
int64_t function_ffffffffd7484935();
int64_t function_ffffffffff91a739();
int64_t unknown_22413e55();
int64_t unknown_3b28110c();
int64_t unknown_3d2d8046();
int64_t unknown_3f2c9281();
int64_t unknown_5a025c62();
int64_t unknown_65027df0();
int64_t unknown_798153d3();
int64_t unknown_ffffffffc64d0b4c();
int64_t unknown_ffffffffdc52b4f6();

// Address range: 0x2b8f75 - 0x2b9006
int64_t function_2b8f75(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b8f75
    bool v1; // 0x2b8f75
    int64_t v2 = v1 ? -1 : 1; // 0x2b8f75
    int64_t v3 = v2 + a1; // 0x2b8f75
    int64_t v4 = a4 & -256 | 249; // 0x2b8f76
    int64_t v5; // 0x2b8f75
    *(char *)(v3 + 55) = (char)v5;
    *(int32_t *)v3 = __asm_insd((int16_t)a3);
    int64_t result2; // 0x2b8f75
    char v6 = result2;
    *(char *)0x1e1784a = *(char *)0x1e1784a + v6;
    char * v7 = (char *)(v4 + 5); // 0x2b8f8f
    *v7 = *v7 + v6;
    int64_t v8 = result2;
    *(char *)v8 = *(char *)&result2 + (char)v8;
    *(char *)a3 = (char)a3;
    int64_t v9 = v4 - 1; // 0x2b9004
    int64_t v10; // 0x2b8f75
    int64_t v11 = a3 & -256 | (int64_t)*(char *)&v10; // 0x2b8f75
    int64_t v12; // 0x2b8f75
    int64_t v13 = (int64_t)&v12; // 0x2b8ff0
    result2 = result2 + v5 & 0xffffffff;
    v13 -= 8;
    *(int64_t *)v13 = 61;
    int32_t * v14 = (int32_t *)(a2 - 79 + v2 + 2 * v9); // 0x2b8ff2
    uint32_t v15 = *v14; // 0x2b8ff2
    int32_t v16 = v11; // 0x2b8ff2
    uint32_t v17 = v15 + v16; // 0x2b8ff2
    *v14 = v17;
    while (((v17 ^ v15) & (v17 ^ v16)) < 0) {
        int64_t result = result2;
        if (v17 < v15) {
            // 0x2b9006
            return result;
        }
        // 0x2b9000
        v9--;
        v11 = v11 & -0xff01 | (int64_t)&g22;
        if (v9 == 0 || (result & 75) == 0) {
            // 0x2b9006
            return result;
        }
        result2 = result + v5 & 0xffffffff;
        v13 -= 8;
        *(int64_t *)v13 = 61;
        v14 = (int32_t *)(a2 - 79 + v2 + 2 * v9);
        v15 = *v14;
        v16 = v11;
        v17 = v15 + v16;
        *v14 = v17;
    }
    // 0x2b8ff9
    return result2;
}

// Address range: 0x2b9175 - 0x2b9181
int64_t function_2b9175(void) {
    // 0x2b9175
    bool v1; // 0x2b9175
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x2b91a9 - 0x2b9213
int64_t function_2b91a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b91a9
    int64_t result; // 0x2b91a9
    if (a4 == 0) {
        // 0x2b91e7
        *(char *)a3 = (char)(result ^ a3);
        __asm_out((int16_t)a3, (int32_t)result);
        return result;
    }
    // 0x2b91ab
    *(char *)a2 = (char)a4 + (char)a2;
    char * v1 = (char *)((int64_t)(-96 * *(int32_t *)0x1cacec51) - 0x1fec24d); // 0x2b91b4
    *v1 = *v1 / 2;
    char * v2 = (char *)(a4 - 0x77a86541); // 0x2b91ba
    *v2 = *v2 - (char)result;
    return result | 242;
}

// Address range: 0x2b9217 - 0x2b9218
int64_t function_2b9217(void) {
    // 0x2b9217
    int64_t result; // 0x2b9217
    return result;
}

// Address range: 0x2b922f - 0x2b9231
int64_t function_2b922f(void) {
    // 0x2b922f
    return function_2b9217();
}

// Address range: 0x2b924c - 0x2b924f
int64_t function_2b924c(int64_t a1) {
    // 0x2b924c
    int64_t result; // 0x2b924c
    return result;
}

// Address range: 0x2b9299 - 0x2b929b
int64_t function_2b9299(int64_t a1) {
    // 0x2b9299
    int64_t result; // 0x2b9299
    return result;
}

// Address range: 0x2b92c9 - 0x2b92cd
int64_t function_2b92c9(int64_t a1) {
    // 0x2b92c9
    int64_t result; // 0x2b92c9
    return result;
}

// Address range: 0x2b92d9 - 0x2b92f3
int64_t function_2b92d9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2b92d9
    int64_t v1; // 0x2b92d9
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    return 0xae13d4dd;
}

// Address range: 0x2b9331 - 0x2b9368
int64_t function_2b9331(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b9331
    int64_t v1; // 0x2b9331
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x2b9331
    int64_t v4 = v3 == 0 ? v2 : (int64_t)((int32_t)v2 << v3);
    int64_t v5 = __asm_wait((int64_t)&g23, (int64_t)&g23, (int64_t)&g23, (int64_t)&g23); // 0x2b9338
    int32_t * v6 = (int32_t *)(v1 - 0x5fff80fe); // 0x2b933e
    *v6 = *v6 + (int32_t)v4;
    char v7 = *(char *)0xf9006882; // 0x2b934b
    char v8 = *(char *)0xf9006822; // 0x2b9354
    int64_t v9; // 0x2b9331
    *(char *)0xf9006822 = (*(char *)&v9 | (char)v1) + v7 + v8;
    uint32_t v10 = *(int32_t *)0x5c4dc35d; // 0x2b9356
    unsigned char v11 = *(char *)-0x3daf41b59d8eff4d; // 0x2b935c
    return (v5 + 0xd5b4746 & 0xffffffff | 0x3d00b09500000000) / (int64_t)v10 & 0xffffff00 | (int64_t)v11;
}

// Address range: 0x2b9475 - 0x2b948a
int64_t function_2b9475(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a2 - 0x40fec2f6); // 0x2b9475
    *v1 = *v1 + (char)(a4 / 256);
    int32_t * v2 = (int32_t *)(a3 + 0x63840b8b); // 0x2b947b
    *v2 = *v2 | -0x40fe17f0;
    int64_t v3; // 0x2b9475
    return v3 + 0x7bb10068 & 0xffffffff;
}

// Address range: 0x2b948b - 0x2b9517
int64_t function_2b948b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result, int64_t a6) {
    // 0x2b948b
    int64_t v1; // 0x2b948b
    int64_t v2 = v1;
    __asm_out_133(109, (char)v1);
    bool v3; // 0x2b948b
    if (v3 || false) {
        // 0x2b950a
        float80_t v4; // 0x2b948b
        *(int64_t *)v1 = (int64_t)v4;
        *(char *)0x372b1417 = *(char *)0x372b1417 + (char)a1;
        return result;
    }
    uint32_t v5 = *(int32_t *)(v2 - 31) + (int32_t)v2; // 0x2b9495
    char * v6 = (char *)((int64_t)v5 + 11); // 0x2b9498
    *v6 = *v6 + (char)v5;
    return v1 + 0x88fec300 & 0xffffffff;
}

// Address range: 0x2b951b - 0x2b9520
int64_t function_2b951b(void) {
    // 0x2b951b
    return function_ffffffffd7484935();
}

// Address range: 0x2b9551 - 0x2b9552
int64_t function_2b9551(void) {
    // 0x2b9551
    int64_t result; // 0x2b9551
    return result;
}

// Address range: 0x2b9556 - 0x2b9559
int64_t function_2b9556(void) {
    // 0x2b9556
    int64_t result; // 0x2b9556
    return result;
}

// Address range: 0x2b9571 - 0x2b958e
int64_t function_2b9571(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 0x3d00c5c9); // 0x2b9571
    *v1 = *v1 - 1;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v2; // 0x2b9571
    int32_t * v3 = (int32_t *)(2 * v2 - 28); // 0x2b957e
    *v3 = *v3 + 83;
    int32_t * v4 = (int32_t *)((a4 + a3 & 0xffffffff) - 0x39ee0ae); // 0x2b9583
    *v4 = *v4 | (int32_t)a2;
    return function_10ef882();
}

// Address range: 0x2b9597 - 0x2b95c0
int64_t function_2b9597(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b9597
    int64_t v1; // 0x2b9597
    char * v2 = (char *)(v1 - 126); // 0x2b9597
    *v2 = *v2 | (char)a4;
    int64_t v3; // 0x2b9597
    __asm_outsd((int16_t)a3, *(int32_t *)&v3);
    char v4 = *(char *)0x600bbca8 + (char)((uint64_t)v1 / 256); // 0x2b95a1
    *(char *)0x600bbca8 = v4;
    int64_t result = a2 & 0xca4f8628; // 0x2b95a7
    if (a4 != 1 == v4 == 0) {
        result = function_2b9551();
    }
    // 0x2b95a9
    return result;
}

// Address range: 0x2b9647 - 0x2b9662
int64_t function_2b9647(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 0xf629f6c); // 0x2b9647
    *v1 = *v1 + (int32_t)a3;
    unknown_22413e55();
    return unknown_5a025c62();
}

// Address range: 0x2b96c4 - 0x2b96c7
int64_t function_2b96c4(int64_t a1) {
    // 0x2b96c4
    int64_t result; // 0x2b96c4
    return result;
}

// Address range: 0x2b96eb - 0x2b96ec
int64_t function_2b96eb(int64_t a1) {
    // 0x2b96eb
    int64_t result; // 0x2b96eb
    return result;
}

// Address range: 0x2b96ed - 0x2b96f3
int64_t function_2b96ed(int64_t a1) {
    // 0x2b96ed
    return unknown_ffffffffdc52b4f6(a1);
}

// Address range: 0x2b96f3 - 0x2b9711
int64_t function_2b96f3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2b96f3
    int64_t v1; // 0x2b96f3
    uint64_t v2 = v1;
    uint64_t v3 = v1 + a4 / 256; // 0x2b96f3
    int64_t v4 = v1 & 0xffffff00; // 0x2b96f3
    int32_t * v5 = (int32_t *)(a4 - 8); // 0x2b96f5
    *v5 = *v5 + (int32_t)v1;
    char * v6 = (char *)((v3 % 256 | v4) - 33); // 0x2b96fa
    *v6 = *v6 - (char)(v2 / 256);
    int64_t v7 = v2 & 0xffffffa3; // 0x2b96fd
    char v8 = *(char *)v7; // 0x2b96ff
    int32_t * v9 = (int32_t *)(a4 - 14); // 0x2b9704
    *v9 = *v9 + (int32_t)v7;
    unsigned char v10 = (char)a4 % 32; // 0x2b9707
    if (v10 != 0) {
        char * v11 = (char *)((v4 | (int64_t)(v8 | (char)v3)) + 46); // 0x2b9707
        *v11 = *v11 << v10;
    }
    __asm_out_134((int16_t)a3 % 256 | (int16_t)&g21, (char)a2);
    return function_3d6d9724();
}

// Address range: 0x2b9756 - 0x2b9778
int64_t function_2b9756(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int16_t v1 = a3; // 0x2b9756
    int64_t v2; // 0x2b9756
    __asm_out(v1, (int32_t)v2);
    int32_t v3 = a4;
    *(int32_t *)a4 = (int32_t)v2 + v3;
    int64_t result = __asm_int3(); // 0x2b976a
    int32_t * v4 = (int32_t *)(result - 125); // 0x2b976d
    uint32_t v5 = *v4; // 0x2b976d
    uint32_t v6 = v5 + v3; // 0x2b976d
    *v4 = v6;
    int64_t v7; // 0x2b9756
    char v8 = *(char *)&v7; // 0x2b9770
    *(char *)result = v8 + (char)a4 + (char)(v6 < v5);
    __asm_outsd(v1, *(int32_t *)(a3 + 0xe827fc8a + 4 * v2 & 0xffffffff));
    return result;
}

// Address range: 0x2b978a - 0x2b9830
int64_t function_2b978a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b978a
    int64_t result; // 0x2b978a
    int64_t v1 = result;
    bool v2; // 0x2b978a
    if (v2) {
        // 0x2b9799
        *(char *)-0x59a4e960 = *(char *)-0x59a4e960 + (char)(result / 256);
        return function_ffffffffff91a739();
    }
    // 0x2b978c
    if (v2) {
        // 0x2b9797
        *(int64_t *)v1 = v1 + 8;
        return result;
    }
    unsigned char v3 = (char)a1;
    unsigned char v4 = (char)result; // 0x2b97fe
    char v5 = v4 - v3; // 0x2b97fe
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x2b97fe
    int64_t v7 = (v2 ? -1 : 1) + a1; // 0x2b97fe
    *(char *)(a3 - 114) = (char)result;
    *(int64_t *)v1 = 0x4000 * (int64_t)v2 | (int64_t)(v4 < v3) | 1024 * (int64_t)v2 | 64 * (int64_t)(v5 == 0) | 128 * (int64_t)(v5 < 0) | 512 * (int64_t)v2 | 16 * (int64_t)(v4 % 16 - v3 % 16 > 15) | 256 * (int64_t)v2 | 4 * (int64_t)(v6 % 2 == 0) | 2048 * (int64_t)(((v5 ^ v4) & (char)(result ^ a1)) < 0) | 2;
    if ((*(char *)v7 & 29) == 0) {
        // 0x2b9808
        int64_t v8; // 0x2b978a
        *(int32_t *)v8 = *(int32_t *)&v8 + 35;
        *(char *)-0x29bfea = *(char *)-0x29bfea + (char)(v8 / 256);
        return result & -251;
    }
    // 0x2b981b
    __asm_int1(v7);
    int64_t result2 = __asm_int3(); // 0x2b982b
    __asm_int(-40);
    return result2;
}

// Address range: 0x2b9834 - 0x2b9880
int64_t function_2b9834(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    *(int32_t *)a4 = (int32_t)a4 + (int32_t)a2;
    if ((char)(a3 / 256 & a4) != 0) {
        // 0x2b987a
        return unknown_3f2c9281(0xb31ef0);
    }
    // 0x2b983f
    unknown_3d2d8046(a5);
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a5;
    return __asm_int3();
}

// Address range: 0x2b98d2 - 0x2b98d7
int64_t function_2b98d2(void) {
    // 0x2b98d2
    return function_56e59abf();
}

// Address range: 0x2b98ea - 0x2b98eb
int64_t function_2b98ea(int64_t a1) {
    // 0x2b98ea
    int64_t result; // 0x2b98ea
    return result;
}

// Address range: 0x2b992f - 0x2b99b3
int64_t function_2b992f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2b992f
    if (llvm_ctpop_i8(*(char *)(a2 + 29) | (char)a3) % 2 == 0) {
        // 0x2b99b2
        int64_t result; // 0x2b992f
        return result;
    }
    // 0x2b9934
    bool v1; // 0x2b992f
    int64_t v2 = unknown_ffffffffc64d0b4c((v1 ? -4 : 4) + a1); // 0x2b9946
    return (v2 + 250) % 256 | v2 & -256;
}

// Address range: 0x2b99b3 - 0x2b99bb
int64_t function_2b99b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b99b3
    return function_ffffffffc3369a4c();
}

// Address range: 0x2b99c5 - 0x2b99c6
int64_t function_2b99c5(void) {
    // 0x2b99c5
    int64_t result; // 0x2b99c5
    return result;
}

// Address range: 0x2b99cd - 0x2b99dd
int64_t function_2b99cd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2b99cd
    int64_t v1; // 0x2b99cd
    uint64_t v2 = v1;
    unknown_798153d3(a1, a2, a3);
    char * v3 = (char *)(a3 + 58 + v2); // 0x2b99d2
    *v3 = *v3 + (char)(v2 / 256);
    return function_2b99c5();
}

// Address range: 0x2b99ff - 0x2b9a13
int64_t function_2b99ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a2 + 0xc948fff + a3); // 0x2b99ff
    int64_t v2; // 0x2b99ff
    *v1 = *v1 + (char)v2;
    int64_t result = unknown_3b28110c(); // 0x2b9a06
    char * v3 = (char *)(result + 61); // 0x2b9a0b
    *v3 = *v3 | (char)result;
    int32_t * v4 = (int32_t *)result; // 0x2b9a0e
    *v4 = *v4 + (int32_t)result;
    return result;
}

// Address range: 0x2b9b35 - 0x2b9b3a
int64_t function_2b9b35(void) {
    // 0x2b9b35
    return function_57a22c4();
}

// Address range: 0x2b9d75 - 0x2b9da2
int64_t function_2b9d75(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b9d75
    int64_t v1; // 0x2b9d75
    int64_t result = v1;
    int32_t v2 = *(int32_t *)(result - 0x357e7b26); // 0x2b9d75
    int64_t v3 = (int64_t)*(int32_t *)(a1 - 111); // 0x2b9d7b
    int64_t v4 = 95 * v3; // 0x2b9d7b
    if (v2 - (int32_t)a4 < 0 == (v4 != 0x5f00000000 * v3 >> 32)) {
        // 0x2b9d98
        return result;
    }
    int32_t * v5 = (int32_t *)(a2 + 0x7f58f38f); // 0x2b9d8c
    *v5 = *v5 - 0x20fec300;
    int32_t v6 = *(int32_t *)((v4 & 0xffffffff) + 104); // 0x2b9d92
    return (int32_t)((v4 + result) % 0x10000 | result & 0xffff0000) - v6;
}

// Address range: 0x2b9dbb - 0x2b9dc7
int64_t function_2b9dbb(int64_t a1) {
    // 0x2b9dbb
    int64_t v1; // 0x2b9dbb
    return v1 & -256 | (int64_t)*(char *)-0x4aa2ea2809a8501b;
}

// Address range: 0x2b9ddd - 0x2b9de0
int64_t function_2b9ddd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b9ddd
    int64_t result; // 0x2b9ddd
    return result;
}

// Address range: 0x2b9e92 - 0x2b9e93
int64_t function_2b9e92(void) {
    // 0x2b9e92
    int64_t result; // 0x2b9e92
    return result;
}

// Address range: 0x2b9ed9 - 0x2b9edc
int64_t function_2b9ed9(void) {
    // 0x2b9ed9
    int64_t result; // 0x2b9ed9
    return result;
}

// Address range: 0x2b9ee0 - 0x2b9f1b
int64_t function_2b9ee0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b9ee0
    int64_t result; // 0x2b9ee0
    unsigned char v1 = (char)((uint64_t)result / 256); // 0x2b9ee6
    unsigned char v2 = v1 + (char)a4; // 0x2b9ee6
    if (v2 < v1 || v2 == 0) {
        // 0x2b9f45
        return result;
    }
    // 0x2b9eea
    unknown_65027df0();
    float80_t v3; // 0x2b9ee0
    *(float64_t *)(a4 + 0x5e0c7a2f) = (float64_t)v3;
    bool v4; // 0x2b9ee0
    int64_t v5 = v4 ? -1 : 1; // 0x2b9ef5
    int64_t result2 = __asm_iretd(v5 + a1, v5 + a2); // 0x2b9ef6
    *(char *)0x2911d6020001e8bb = (char)result2;
    return result2;
}

// Address range: 0x44f045 - 0x44f047
int64_t function_44f045(void) {
    // 0x44f045
    int64_t v1; // 0x44f045
    return v1 & -0xff01 | (int64_t)&g1;
}

// Address range: 0x44f0f0 - 0x44f0f1
int64_t function_44f0f0(void) {
    // 0x44f0f0
    int64_t result; // 0x44f0f0
    return result;
}

// Address range: 0x44f11d - 0x44f122
int64_t function_44f11d(void) {
    // 0x44f11d
    return function_49b0559f();
}

// Address range: 0x44f143 - 0x44f151
int64_t function_44f143(int64_t a1) {
    // 0x44f143
    int64_t v1; // 0x44f143
    char v2 = v1; // 0x44f143
    bool v3; // 0x44f143
    char v4 = v3 ? -70 : -71; // 0x44f143
    int64_t v5 = v1 & -256 | (int64_t)(v2 - v4); // 0x44f145
    if (v4 < v2) {
        v5 = function_44f0f0();
    }
    // 0x44f147
    return v5 - (v3 | v4 > v2 ? 0x376eac82 : 0x376eac81) & 0xffffffff;
}

// Address range: 0x44f1bf - 0x44f1c8
int64_t function_44f1bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x44f1bf
    int64_t v1; // 0x44f1bf
    return v1 & -256;
}

// Address range: 0x44f1c9 - 0x44f1cf
int64_t function_44f1c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x44f1c9
    if (v1 != 0) {
        int64_t v2; // 0x44f1c9
        int32_t * v3 = (int32_t *)(v2 + 108); // 0x44f1c9
        *v3 = *v3 << v1;
    }
    // 0x44f1eb
    return __asm_wait(a1, a2, a3, a4);
}

// Address range: 0x44f1d8 - 0x44f1dd
int64_t function_44f1d8(void) {
    // 0x44f1d8
    return function_3574ef13();
}

// Address range: 0x44f23b - 0x44f242
int64_t function_44f23b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44f23b
    return function_ffffffff839317bc();
}

// Address range: 0x540f3d - 0x540f45
int64_t function_540f3d(void) {
    // 0x540f3d
    __asm_int(-80);
    return __asm_sti();
}

// Address range: 0x540f50 - 0x540ffc
int64_t function_540f50(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a2 + 8); // 0x540f5e
    int64_t v2 = a1 + 8; // 0x540f68
    int64_t * v3 = (int64_t *)a1; // 0x540f6c
    *v3 = v1;
    int64_t v4 = *(int64_t *)(v1 - 24) + a1; // 0x540f79
    *(int64_t *)v4 = *(int64_t *)(a2 + 16);
    function_4fc7e0(v4, 0, a3);
    *v3 = 0;
    int64_t v5 = *(int64_t *)(a2 + 24); // 0x540f8e
    *(int64_t *)(*(int64_t *)-24 + a1) = v5;
    function_4feb80(v2);
    int64_t * v6 = (int64_t *)(a1 - 16); // 0x540fa5
    function_4fc7e0(*v6 + a1, (int32_t)v2, v5);
    int64_t v7 = function_5033d0(v2, v5, (int32_t)a4 | 16); // 0x540fbd
    int64_t v8 = *v6 + a1; // 0x540fc9
    if (v7 == 0) {
        // 0x540fe8
        return function_4fc010(v8, *(int32_t *)(v8 + 32) | 4, v2);
    }
    // 0x540fd1
    return function_4fc010(v8, 0, v2);
}

// Address range: 0x540ffc - 0x541027
int64_t function_540ffc(void) {
    // 0x540ffc
    int64_t v1; // 0x540ffc
    function_5029a0(v1);
    while (true) {
        int64_t v2 = *(int64_t *)(v1 + 8); // 0x54100a
        *(int64_t *)v1 = v2;
        *(int64_t *)(*(int64_t *)(v2 - 24) + v1) = *(int64_t *)(v1 + 16);
        int64_t v3; // 0x540ffc
        _Unwind_Resume((struct _Unwind_Exception *)v3);
        v3 = (int64_t)&g23;
    }
}

// Address range: 0x541030 - 0x54115a
// From class:    std::basic_ofstream<char, std::char_traits<char> >
// Type:          constructor
int64_t function_541030(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 248; // 0x541039
    function_54cb80(v1);
    *(char *)(a1 + 472) = 0;
    *(int64_t *)(a1 + 464) = 0;
    *(char *)(a1 + 473) = 0;
    *(int64_t *)(a1 + 480) = 0;
    *(int64_t *)(a1 + 488) = 0;
    *(int64_t *)(a1 + 496) = 0;
    *(int64_t *)(a1 + 504) = 0;
    int64_t * v2 = (int64_t *)v1; // 0x5410a9
    *v2 = (int64_t)&g5;
    int64_t v3 = *(int64_t *)0x843b30; // 0x5410b7
    int64_t * v4 = (int64_t *)a1; // 0x5410c4
    *v4 = v3;
    int64_t v5 = *(int64_t *)(v3 - 24) + a1; // 0x5410c7
    *(int64_t *)v5 = *(int64_t *)0x843b38;
    function_4fc7e0(v5, 0, a3);
    int64_t v6 = a1 + 8; // 0x5410d9
    *v2 = (int64_t)&g8;
    *v4 = (int64_t)&g7;
    function_4feb80(v6);
    function_4fc7e0(v1, (int32_t)v6, (int64_t)&g7);
    int64_t v7 = function_5033d0(v6, v6, (int32_t)a3 | 16); // 0x54110f
    int64_t v8 = *(int64_t *)(a1 - 16) + a1; // 0x54111b
    if (v7 == 0) {
        // 0x541140
        return function_4fc010(v8, *(int32_t *)(v8 + 32) | 4, v6);
    }
    // 0x541123
    return function_4fc010(v8, 0, v6);
}

// Address range: 0x54115a - 0x54119b
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_54115a(void) {
    // 0x54115a
    int64_t v1; // 0x54115a
    function_5029a0(v1);
    while (true) {
        // 0x541168
        *(int64_t *)(v1 + 248) = (int64_t)&g5;
        function_54cf10(v1);
        int64_t v2; // 0x54115a
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        v2 = (int64_t)&g23;
    }
}

// Address range: 0x54119b - 0x5411a0
int64_t function_54119b(void) {
    // 0x54119b
    int64_t result; // 0x54119b
    return result;
}

// Address range: 0x5411a0 - 0x5411e3
int64_t function_5411a0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 & 0xffffffef | 16; // 0x5411a7
    int64_t v2 = function_5033d0(a1 + 8, a2, (int32_t)v1); // 0x5411ae
    int64_t v3 = *(int64_t *)(a1 - 16) + a1;
    if (v2 == 0) {
        // 0x5411d0
        return function_4fc010(v3, *(int32_t *)(v3 + 32) | 4, v1);
    }
    // 0x5411bb
    return function_4fc010(v3, 0, v1);
}

// Address range: 0x5411f0 - 0x5412e4
int64_t function_5411f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a2 + 16); // 0x5411fe
    int64_t * v2 = (int64_t *)a1; // 0x541208
    *v2 = v1;
    int64_t * v3 = (int64_t *)(v1 - 24); // 0x54120b
    int64_t v4 = *v3; // 0x54120b
    *(int64_t *)(v4 + a1) = *(int64_t *)(a2 + 24);
    *(int64_t *)(a1 + 8) = 0;
    function_4fc7e0(*v3 + a1, 0, v4);
    int64_t v5 = *(int64_t *)(a2 + 32); // 0x54122d
    int64_t v6 = a1 + 16; // 0x541233
    int64_t * v7 = (int64_t *)v6; // 0x541233
    *v7 = v5;
    int64_t v8 = *(int64_t *)(v5 - 24) + v6; // 0x54123b
    *(int64_t *)v8 = *(int64_t *)(a2 + 40);
    function_4fc7e0(v8, 0, v4);
    int64_t v9 = *(int64_t *)(a2 + 8); // 0x54124c
    int64_t v10 = a1 + 24; // 0x541250
    *v2 = v9;
    *(int64_t *)(*(int64_t *)(v9 - 24) + a1) = *(int64_t *)(a2 + 48);
    *v7 = *(int64_t *)(a2 + 56);
    *v2 = 0;
    int64_t v11 = *(int64_t *)(a2 + 64); // 0x541279
    *(int64_t *)(*(int64_t *)-24 + a1) = v11;
    *v7 = *(int64_t *)(a2 + 72);
    function_4feb80(v10);
    function_4fc7e0(*v2 + a1, (int32_t)v10, v11);
    int64_t v12 = function_5033d0(v10, v11, (int32_t)a4); // 0x5412aa
    int64_t v13 = *v2 + a1; // 0x5412b6
    if (v12 == 0) {
        // 0x5412d0
        return function_4fc010(v13, *(int32_t *)(v13 + 32) | 4, v10);
    }
    // 0x5412be
    return function_4fc010(v13, 0, v10);
}

// Address range: 0x5412e4 - 0x541347
int64_t function_5412e4(void) {
    // 0x5412e4
    int64_t v1; // 0x5412e4
    function_5029a0(v1);
    int64_t * v2 = (int64_t *)v1; // 0x5412f6
    int64_t v3 = v1 + 16; // 0x541309
    int64_t * v4 = (int64_t *)v3; // 0x541309
    while (true) {
        int64_t v5 = *(int64_t *)(v1 + 8); // 0x5412f2
        *v2 = v5;
        *(int64_t *)(*(int64_t *)(v5 - 24) + v1) = *(int64_t *)(v1 + 48);
        *v4 = *(int64_t *)(v1 + 56);
        int64_t v6 = *(int64_t *)(v1 + 32); // 0x54130d
        *v4 = v6;
        *(int64_t *)(*(int64_t *)(v6 - 24) + v3) = *(int64_t *)(v1 + 40);
        int64_t v7 = *(int64_t *)(v1 + 16); // 0x541322
        *v2 = v7;
        *(int64_t *)(*(int64_t *)(v7 - 24) + v1) = *(int64_t *)(v1 + 24);
        *(int64_t *)(v1 + 8) = 0;
        int64_t v8; // 0x5412e4
        _Unwind_Resume((struct _Unwind_Exception *)v8);
        v8 = (int64_t)&g23;
    }
}

// Address range: 0x541347 - 0x541349
int64_t function_541347(void) {
    // 0x541347
    int64_t result; // 0x541347
    return result;
}

// Address range: 0x541350 - 0x5414da
// From class:    std::basic_fstream<char, std::char_traits<char> >
// Type:          constructor
int64_t function_541350(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 264; // 0x541354
    function_54cb80(v1);
    *(char *)(a1 + 488) = 0;
    *(int64_t *)(a1 + 480) = 0;
    *(char *)(a1 + 489) = 0;
    *(int64_t *)(a1 + 496) = 0;
    int64_t v2 = *(int64_t *)0x843cc0; // 0x5413b1
    *(int64_t *)(a1 + 504) = 0;
    int64_t * v3 = (int64_t *)v1; // 0x5413c0
    *v3 = (int64_t)&g5;
    *(int64_t *)(a1 + (int64_t)&g2) = 0;
    *(int64_t *)(a1 + (int64_t)&g3) = 0;
    int64_t * v4 = (int64_t *)a1; // 0x5413e1
    *v4 = v2;
    int64_t * v5 = (int64_t *)(v2 - 24); // 0x5413ec
    *(int64_t *)(*v5 + a1) = *(int64_t *)0x843cc8;
    *(int64_t *)(a1 + 8) = 0;
    function_4fc7e0(*v5 + a1, 0, a3);
    int64_t v6 = *(int64_t *)0x843cd0; // 0x54140a
    int64_t v7 = a1 + 16; // 0x541414
    int64_t * v8 = (int64_t *)v7; // 0x541414
    *v8 = v6;
    int64_t v9 = *(int64_t *)(v6 - 24) + v7; // 0x541418
    *(int64_t *)v9 = *(int64_t *)0x843cd8;
    function_4fc7e0(v9, 0, a3);
    int64_t v10 = a1 + 24; // 0x541436
    *(int64_t *)(g9 + a1) = *(int64_t *)0x843ce0;
    *v4 = (int64_t)&g10;
    *v8 = (int64_t)&g11;
    *v3 = (int64_t)&g12;
    function_4feb80(v10);
    function_4fc7e0(v1, (int32_t)v10, (int64_t)&g12);
    int64_t v11 = function_5033d0(v10, v10, (int32_t)a3); // 0x54148d
    int64_t v12 = *v4 + a1; // 0x541499
    if (v11 == 0) {
        // 0x5414c0
        return function_4fc010(v12, *(int32_t *)(v12 + 32) | 4, v10);
    }
    // 0x5414a1
    return function_4fc010(v12, 0, v10);
}

// Address range: 0x5414da - 0x54154b
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_5414da(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5414da
    int64_t v1; // 0x5414da
    function_5029a0(v1);
    while (true) {
        // 0x5414ec
        *(int64_t *)(*(int64_t *)(v1 - 24) + v1) = a3;
        *(int64_t *)(*(int64_t *)(v1 - 24) + v1 + 16) = a2;
        *(int64_t *)(*(int64_t *)(v1 - 24) + v1) = a1;
        *(int64_t *)(v1 + 8) = 0;
        *(int64_t *)(v1 + 264) = (int64_t)&g5;
        function_54cf10(v1);
        int64_t v2; // 0x5414da
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        v2 = (int64_t)&g23;
    }
}

// Address range: 0x54154b - 0x54154d
int64_t function_54154b(void) {
    // 0x54154b
    int64_t result; // 0x54154b
    return result;
}

// Address range: 0x54154d - 0x541552
int64_t function_54154d(void) {
    // 0x54154d
    int64_t result; // 0x54154d
    return result;
}

// Address range: 0x541560 - 0x5415a3
int64_t function_541560(int64_t a1, int64_t a2) {
    // 0x541560
    int64_t v1; // 0x541560
    int64_t v2 = function_5033d0(a1 + 24, a2, (int32_t)v1); // 0x54156b
    int64_t v3 = *(int64_t *)a1 + a1;
    if (v2 == 0) {
        // 0x541590
        return function_4fc010(v3, *(int32_t *)(v3 + 32) | 4, v1);
    }
    // 0x541578
    return function_4fc010(v3, 0, v1);
}

// Address range: 0x5415b0 - 0x5415b8
int64_t function_5415b0(int64_t a1, int64_t a2) {
    // 0x5415b0
    int64_t v1; // 0x5415b0
    return function_505ca0(a1, a2, v1);
}

// Address range: 0x5415c0 - 0x541674
int64_t function_5415c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a2 + 8); // 0x5415ce
    int64_t v2 = a1 + 16; // 0x5415d8
    int64_t * v3 = (int64_t *)a1; // 0x5415dc
    *v3 = v1;
    int64_t * v4 = (int64_t *)(v1 - 24); // 0x5415df
    int64_t v5 = *v4; // 0x5415df
    *(int64_t *)(v5 + a1) = *(int64_t *)(a2 + 16);
    *(int64_t *)(a1 + 8) = 0;
    function_4fd0d0(*v4 + a1, 0, v5);
    *v3 = 0;
    int64_t v6 = *(int64_t *)(a2 + 24); // 0x54160b
    *(int64_t *)(*(int64_t *)-24 + a1) = v6;
    function_5009e0(v2);
    int64_t * v7 = (int64_t *)(a1 - 8); // 0x541622
    function_4fd0d0(*v7 + a1, (int32_t)v2, v6);
    int64_t v8 = function_505ca0(v2, v6, a4 & 0xfffffff7 | 8); // 0x54163a
    int64_t v9 = *v7 + a1; // 0x541646
    if (v8 == 0) {
        // 0x541660
        return function_4fca70(v9, *(int32_t *)(v9 + 32) | 4, v2);
    }
    // 0x54164e
    return function_4fca70(v9, 0, v2);
}

// Address range: 0x541674 - 0x5416a7
int64_t function_541674(void) {
    // 0x541674
    int64_t v1; // 0x541674
    function_505260(v1);
    while (true) {
        int64_t v2 = *(int64_t *)(v1 + 8); // 0x541682
        *(int64_t *)v1 = v2;
        *(int64_t *)(*(int64_t *)(v2 - 24) + v1) = *(int64_t *)(v1 + 16);
        *(int64_t *)(v1 + 8) = 0;
        int64_t v3; // 0x541674
        _Unwind_Resume((struct _Unwind_Exception *)v3);
        v3 = (int64_t)&g23;
    }
}

// Address range: 0x5416b0 - 0x5417ea
// From class:    std::basic_ifstream<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_5416b0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 256; // 0x5416b9
    function_54cb80(v1);
    *(int64_t *)(a1 + 472) = 0;
    *(int32_t *)(a1 + 480) = 0;
    *(char *)(a1 + 484) = 0;
    *(int64_t *)(a1 + 488) = 0;
    *(int64_t *)(a1 + 496) = 0;
    *(int64_t *)(a1 + 504) = 0;
    *(int64_t *)(a1 + (int64_t)&g2) = 0;
    int64_t * v2 = (int64_t *)v1; // 0x54172c
    *v2 = (int64_t)&g6;
    int64_t v3 = *(int64_t *)0x843e50; // 0x54173a
    int64_t * v4 = (int64_t *)(v3 - 24); // 0x541742
    int64_t * v5 = (int64_t *)a1; // 0x541746
    *v5 = v3;
    *(int64_t *)(*v4 + a1) = *(int64_t *)0x843e58;
    *(int64_t *)(a1 + 8) = 0;
    function_4fd0d0(*v4 + a1, 0, a3);
    int64_t v6 = a1 + 16; // 0x541768
    *v2 = (int64_t)&g14;
    *v5 = (int64_t)&g13;
    function_5009e0(v6);
    function_4fd0d0(v1, (int32_t)v6, (int64_t)&g13);
    int64_t v7 = function_505ca0(v6, v6, a3 & 0xfffffff7 | 8); // 0x54179e
    int64_t v8 = *(int64_t *)(a1 - 8) + a1; // 0x5417aa
    if (v7 == 0) {
        // 0x5417d0
        return function_4fca70(v8, *(int32_t *)(v8 + 32) | 4, v6);
    }
    // 0x5417b2
    return function_4fca70(v8, 0, v6);
}

// Address range: 0x5417ea - 0x541832
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_5417ea(void) {
    // 0x5417ea
    int64_t v1; // 0x5417ea
    function_505260(v1);
    while (true) {
        // 0x5417f8
        int64_t v2; // 0x5417ea
        *(int64_t *)v1 = v2;
        *(int64_t *)(v1 + 8) = 0;
        *(int64_t *)(v1 + 256) = (int64_t)&g6;
        function_54cf10(v1);
        int64_t v3; // 0x5417ea
        _Unwind_Resume((struct _Unwind_Exception *)v3);
        v2 = v3;
        v3 = (int64_t)&g23;
    }
}

// Address range: 0x541832 - 0x541837
int64_t function_541832(void) {
    // 0x541832
    int64_t result; // 0x541832
    return result;
}

// Address range: 0x541840 - 0x541883
int64_t function_541840(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 & 0xfffffff7 | 8; // 0x541847
    int64_t v2 = function_505ca0(a1 + 16, a2, v1); // 0x54184e
    int64_t v3 = *(int64_t *)(a1 - 8) + a1;
    if (v2 == 0) {
        // 0x541870
        return function_4fca70(v3, *(int32_t *)(v3 + 32) | 4, v1);
    }
    // 0x54185b
    return function_4fca70(v3, 0, v1);
}

// Address range: 0x541890 - 0x54193c
int64_t function_541890(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a2 + 8); // 0x54189e
    int64_t v2 = a1 + 8; // 0x5418a8
    int64_t * v3 = (int64_t *)a1; // 0x5418ac
    *v3 = v1;
    int64_t v4 = *(int64_t *)(v1 - 24) + a1; // 0x5418b9
    *(int64_t *)v4 = *(int64_t *)(a2 + 16);
    function_4fd0d0(v4, 0, a3);
    *v3 = 0;
    int64_t v5 = *(int64_t *)(a2 + 24); // 0x5418ce
    *(int64_t *)(*(int64_t *)-24 + a1) = v5;
    function_5009e0(v2);
    int64_t * v6 = (int64_t *)(a1 - 16); // 0x5418e5
    function_4fd0d0(*v6 + a1, (int32_t)v2, v5);
    int64_t v7 = function_505ca0(v2, v5, a4 & 0xffffffef | 16); // 0x5418fd
    int64_t v8 = *v6 + a1; // 0x541909
    if (v7 == 0) {
        // 0x541928
        return function_4fca70(v8, *(int32_t *)(v8 + 32) | 4, v2);
    }
    // 0x541911
    return function_4fca70(v8, 0, v2);
}

// Address range: 0x54193c - 0x541967
int64_t function_54193c(void) {
    // 0x54193c
    int64_t v1; // 0x54193c
    function_505260(v1);
    while (true) {
        int64_t v2 = *(int64_t *)(v1 + 8); // 0x54194a
        *(int64_t *)v1 = v2;
        *(int64_t *)(*(int64_t *)(v2 - 24) + v1) = *(int64_t *)(v1 + 16);
        int64_t v3; // 0x54193c
        _Unwind_Resume((struct _Unwind_Exception *)v3);
        v3 = (int64_t)&g23;
    }
}

// Address range: 0x541970 - 0x541a9a
// From class:    std::basic_ofstream<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_541970(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 248; // 0x541979
    function_54cb80(v1);
    *(int64_t *)(a1 + 464) = 0;
    *(int32_t *)(a1 + 472) = 0;
    *(char *)(a1 + 476) = 0;
    *(int64_t *)(a1 + 480) = 0;
    *(int64_t *)(a1 + 488) = 0;
    *(int64_t *)(a1 + 496) = 0;
    *(int64_t *)(a1 + 504) = 0;
    int64_t * v2 = (int64_t *)v1; // 0x5419ec
    *v2 = (int64_t)&g6;
    int64_t v3 = *(int64_t *)0x843f10; // 0x5419fa
    int64_t * v4 = (int64_t *)a1; // 0x541a07
    *v4 = v3;
    int64_t v5 = *(int64_t *)(v3 - 24) + a1; // 0x541a0a
    *(int64_t *)v5 = *(int64_t *)0x843f18;
    function_4fd0d0(v5, 0, a3);
    int64_t v6 = a1 + 8; // 0x541a1c
    *v2 = (int64_t)&g16;
    *v4 = (int64_t)&g15;
    function_5009e0(v6);
    function_4fd0d0(v1, (int32_t)v6, (int64_t)&g15);
    int64_t v7 = function_505ca0(v6, v6, a3 & 0xffffffef | 16); // 0x541a52
    int64_t v8 = *(int64_t *)(a1 - 16) + a1; // 0x541a5e
    if (v7 == 0) {
        // 0x541a80
        return function_4fca70(v8, *(int32_t *)(v8 + 32) | 4, v6);
    }
    // 0x541a66
    return function_4fca70(v8, 0, v6);
}

// Address range: 0x541a9a - 0x541adb
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_541a9a(void) {
    // 0x541a9a
    int64_t v1; // 0x541a9a
    function_505260(v1);
    while (true) {
        // 0x541aa8
        *(int64_t *)(v1 + 248) = (int64_t)&g6;
        function_54cf10(v1);
        int64_t v2; // 0x541a9a
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        v2 = (int64_t)&g23;
    }
}

// Address range: 0x541adb - 0x541ae0
int64_t function_541adb(void) {
    // 0x541adb
    int64_t result; // 0x541adb
    return result;
}

// Address range: 0x541ae0 - 0x541b23
int64_t function_541ae0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 & 0xffffffef | 16; // 0x541ae7
    int64_t v2 = function_505ca0(a1 + 8, a2, v1); // 0x541aee
    int64_t v3 = *(int64_t *)(a1 - 16) + a1;
    if (v2 == 0) {
        // 0x541b10
        return function_4fca70(v3, *(int32_t *)(v3 + 32) | 4, v1);
    }
    // 0x541afb
    return function_4fca70(v3, 0, v1);
}

// Address range: 0x541b30 - 0x541c24
int64_t function_541b30(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a2 + 16); // 0x541b3e
    int64_t * v2 = (int64_t *)a1; // 0x541b48
    *v2 = v1;
    int64_t * v3 = (int64_t *)(v1 - 24); // 0x541b4b
    int64_t v4 = *v3; // 0x541b4b
    *(int64_t *)(v4 + a1) = *(int64_t *)(a2 + 24);
    *(int64_t *)(a1 + 8) = 0;
    function_4fd0d0(*v3 + a1, 0, v4);
    int64_t v5 = *(int64_t *)(a2 + 32); // 0x541b6d
    int64_t v6 = a1 + 16; // 0x541b73
    int64_t * v7 = (int64_t *)v6; // 0x541b73
    *v7 = v5;
    int64_t v8 = *(int64_t *)(v5 - 24) + v6; // 0x541b7b
    *(int64_t *)v8 = *(int64_t *)(a2 + 40);
    function_4fd0d0(v8, 0, v4);
    int64_t v9 = *(int64_t *)(a2 + 8); // 0x541b8c
    int64_t v10 = a1 + 24; // 0x541b90
    *v2 = v9;
    *(int64_t *)(*(int64_t *)(v9 - 24) + a1) = *(int64_t *)(a2 + 48);
    *v7 = *(int64_t *)(a2 + 56);
    *v2 = 0;
    int64_t v11 = *(int64_t *)(a2 + 64); // 0x541bb9
    *(int64_t *)(*(int64_t *)-24 + a1) = v11;
    *v7 = *(int64_t *)(a2 + 72);
    function_5009e0(v10);
    function_4fd0d0(*v2 + a1, (int32_t)v10, v11);
    int64_t v12 = function_505ca0(v10, v11, a4 & 0xffffffff); // 0x541bea
    int64_t v13 = *v2 + a1; // 0x541bf6
    if (v12 == 0) {
        // 0x541c10
        return function_4fca70(v13, *(int32_t *)(v13 + 32) | 4, v10);
    }
    // 0x541bfe
    return function_4fca70(v13, 0, v10);
}

// Address range: 0x541c24 - 0x541c87
int64_t function_541c24(void) {
    // 0x541c24
    int64_t v1; // 0x541c24
    function_505260(v1);
    int64_t * v2 = (int64_t *)v1; // 0x541c36
    int64_t v3 = v1 + 16; // 0x541c49
    int64_t * v4 = (int64_t *)v3; // 0x541c49
    while (true) {
        int64_t v5 = *(int64_t *)(v1 + 8); // 0x541c32
        *v2 = v5;
        *(int64_t *)(*(int64_t *)(v5 - 24) + v1) = *(int64_t *)(v1 + 48);
        *v4 = *(int64_t *)(v1 + 56);
        int64_t v6 = *(int64_t *)(v1 + 32); // 0x541c4d
        *v4 = v6;
        *(int64_t *)(*(int64_t *)(v6 - 24) + v3) = *(int64_t *)(v1 + 40);
        int64_t v7 = *(int64_t *)(v1 + 16); // 0x541c62
        *v2 = v7;
        *(int64_t *)(*(int64_t *)(v7 - 24) + v1) = *(int64_t *)(v1 + 24);
        *(int64_t *)(v1 + 8) = 0;
        int64_t v8; // 0x541c24
        _Unwind_Resume((struct _Unwind_Exception *)v8);
        v8 = (int64_t)&g23;
    }
}

// Address range: 0x541c87 - 0x541c89
int64_t function_541c87(void) {
    // 0x541c87
    int64_t result; // 0x541c87
    return result;
}

// Address range: 0x541c90 - 0x541e1a
// From class:    std::basic_fstream<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_541c90(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 264; // 0x541c94
    function_54cb80(v1);
    *(int64_t *)(a1 + 480) = 0;
    *(int32_t *)(a1 + 488) = 0;
    *(char *)(a1 + 492) = 0;
    *(int64_t *)(a1 + 496) = 0;
    int64_t v2 = *(int64_t *)0x8440a0; // 0x541cf4
    *(int64_t *)(a1 + 504) = 0;
    int64_t * v3 = (int64_t *)v1; // 0x541d03
    *v3 = (int64_t)&g6;
    *(int64_t *)(a1 + (int64_t)&g2) = 0;
    *(int64_t *)(a1 + (int64_t)&g3) = 0;
    int64_t * v4 = (int64_t *)a1; // 0x541d24
    *v4 = v2;
    int64_t * v5 = (int64_t *)(v2 - 24); // 0x541d2f
    *(int64_t *)(*v5 + a1) = *(int64_t *)0x8440a8;
    *(int64_t *)(a1 + 8) = 0;
    function_4fd0d0(*v5 + a1, 0, a3);
    int64_t v6 = *(int64_t *)0x8440b0; // 0x541d4d
    int64_t v7 = a1 + 16; // 0x541d57
    int64_t * v8 = (int64_t *)v7; // 0x541d57
    *v8 = v6;
    int64_t v9 = *(int64_t *)(v6 - 24) + v7; // 0x541d5b
    *(int64_t *)v9 = *(int64_t *)0x8440b8;
    function_4fd0d0(v9, 0, a3);
    int64_t v10 = a1 + 24; // 0x541d79
    *(int64_t *)(g17 + a1) = *(int64_t *)0x8440c0;
    *v4 = (int64_t)&g18;
    *v8 = (int64_t)&g19;
    *v3 = (int64_t)&g20;
    function_5009e0(v10);
    function_4fd0d0(v1, (int32_t)v10, (int64_t)&g20);
    int64_t v11 = function_505ca0(v10, v10, a3 & 0xffffffff); // 0x541dd0
    int64_t v12 = *v4 + a1; // 0x541ddc
    if (v11 == 0) {
        // 0x541e00
        return function_4fca70(v12, *(int32_t *)(v12 + 32) | 4, v10);
    }
    // 0x541de4
    return function_4fca70(v12, 0, v10);
}

// Address range: 0x541e1a - 0x541e8b
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_541e1a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x541e1a
    int64_t v1; // 0x541e1a
    function_505260(v1);
    while (true) {
        // 0x541e2c
        *(int64_t *)(*(int64_t *)(v1 - 24) + v1) = a3;
        *(int64_t *)(*(int64_t *)(v1 - 24) + v1 + 16) = a2;
        *(int64_t *)(*(int64_t *)(v1 - 24) + v1) = a1;
        *(int64_t *)(v1 + 8) = 0;
        *(int64_t *)(v1 + 264) = (int64_t)&g6;
        function_54cf10(v1);
        int64_t v2; // 0x541e1a
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        v2 = (int64_t)&g23;
    }
}

// Address range: 0x541e8b - 0x541e8d
int64_t function_541e8b(void) {
    // 0x541e8b
    int64_t result; // 0x541e8b
    return result;
}

// Address range: 0x541e8d - 0x541e92
int64_t function_541e8d(void) {
    // 0x541e8d
    int64_t result; // 0x541e8d
    return result;
}

// Address range: 0x541ea0 - 0x541ee3
int64_t function_541ea0(int64_t a1, int64_t a2) {
    // 0x541ea0
    int64_t v1; // 0x541ea0
    int64_t v2 = function_505ca0(a1 + 24, a2, v1); // 0x541eab
    int64_t v3 = *(int64_t *)a1 + a1;
    if (v2 == 0) {
        // 0x541ed0
        return function_4fca70(v3, *(int32_t *)(v3 + 32) | 4, v1);
    }
    // 0x541eb8
    return function_4fca70(v3, 0, v1);
}
