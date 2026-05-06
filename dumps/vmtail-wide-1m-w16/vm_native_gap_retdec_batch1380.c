/*
 * Targeted RetDec C for native executable gap queue batch 1380.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x305e1e-0x30601e rank=- name=- kind=- bytes=- uncovered=-
 *   0x30601e-0x30621e rank=- name=- kind=- bytes=- uncovered=-
 *   0x30621e-0x30641e rank=- name=- kind=- bytes=- uncovered=-
 *   0x30641e-0x30661e rank=- name=- kind=- bytes=- uncovered=-
 *   0x30661e-0x30681e rank=- name=- kind=- bytes=- uncovered=-
 *   0x30681e-0x306a1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x306a1e-0x306c1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x306c1e-0x306e1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x5528f6-0x552af6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x552af6-0x552cf6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x552cf6-0x552ef6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x552ef6-0x5530f6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5530f6-0x5532f6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5532f6-0x5534f6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5534f6-0x5536f6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5536f6-0x5538f6 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g24;
extern int g25;
extern int g26;
extern int g27;
extern int g28;
extern int g29;
extern int g30;
extern int g31;
extern int g32;
extern int g33;
extern int g35;
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

int64_t function_1fd40();
int64_t function_20540();
int64_t function_20a50();
int64_t function_250b0();
int64_t function_305e1e(int64_t a1, int64_t a2);
int64_t function_305f22(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_306075(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3061b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3062e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_306453(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3065dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_306735(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3068b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3069e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_306b2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_306c74(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4eeb40();
int64_t function_4f3410();
int64_t function_4f39b0();
int64_t function_4f3f50();
int64_t function_4f4060();
int64_t function_552550();
int64_t function_5528c9();
int64_t function_5528f6(void);
int64_t function_5528f9(void);
int64_t function_5528fb(void);
int64_t function_552944(void);
int64_t function_552963(void);
int64_t function_552970(int64_t a1, int64_t a2);
int64_t function_5529f0(int64_t a1, int64_t a2);
int64_t function_552a70(int64_t a1, int64_t a2, int64_t a3);
int64_t function_552aaa(int64_t a1, int64_t a2, int64_t a3);
int64_t function_552af6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_552b46(void);
int64_t function_552b90(int64_t a1);
int64_t function_552bc0(int64_t result, int64_t a2);
int64_t function_552db0(int64_t a1, int64_t a2);
int64_t function_552eaa(int64_t a1, int64_t a2, int64_t a3);
int64_t function_552ef6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_552f46(void);
int64_t function_552f90(int64_t a1);
int64_t function_552fc0(int64_t result, int64_t a2);
int64_t function_5531b0(int64_t a1, int64_t a2);
int64_t function_553690(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_5536a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_5536b0(int64_t a1, int64_t a2);
int64_t function_5536d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_5536e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_5536f0(int64_t a1, int64_t a2);
int64_t function_553750(int64_t a1, int64_t a2);
int64_t function_553788(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5537d4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_553826(void);
int64_t function_553870(int64_t a1);
int64_t function_5538a0(int64_t result2, int64_t a2);
int64_t function_565970();
int64_t function_5679b0();
int64_t function_5679e0();
int64_t function_56afb0();
int64_t function_c823b();

// Address range: 0x305e1e - 0x305f22
int64_t function_305e1e(int64_t a1, int64_t a2) {
    // 0x305e1e
    bool v1; // 0x305e1e
    int64_t result; // 0x305e1e
    if (v1) {
        // 0x305e23
        return result;
    }
    // 0x305e8b
    float80_t v2; // 0x305e1e
    *(int64_t *)(result - 117) = (int64_t)v2;
    int64_t v3; // bp+16, 0x305e1e
    int64_t v4 = (int64_t)&v3; // 0x305ed3
    int64_t v5 = v4 + 16; // 0x305eda
    v3 = v5;
    int64_t v6 = *(int64_t *)v5; // 0x305ee9
    *(int64_t *)(v4 + 8) = v6;
    *(int64_t *)(v4 - 8) = v6;
    v3 = v5;
    return function_c823b(a1, result, a2, result, result, result, result, result ^ 0xff00);
}

// Address range: 0x305f22 - 0x306075
int64_t function_305f22(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x305f22
    int64_t v1; // bp-32, 0x305f22
    int64_t v2 = (int64_t)&v1; // 0x305fae
    v1 = 310;
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x305fba
    int64_t v4 = v2 - 8; // 0x305fba
    int64_t * v5 = (int64_t *)v4; // 0x305fba
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x305fbe
    *v6 = v3;
    int64_t v7 = v2 - 24; // 0x305fc5
    int64_t * v8 = (int64_t *)v7; // 0x305fd4
    *v8 = v4;
    int64_t v9 = *(int64_t *)(v2 + 8); // 0x305fdd
    *v6 = v9;
    *v8 = a6;
    int64_t * v10 = (int64_t *)(v2 - 32); // 0x305fe7
    *v10 = v7;
    *v8 = a5;
    *v6 = v3;
    v1 = v3;
    *v6 = v9;
    *v10 = *v8;
    *(int64_t *)(v2 + 16) = *v6;
    *v6 = *v5;
    *v8 = v2;
    *v10 = *v6;
    int64_t v11 = *v5; // 0x306061
    *v6 = v11;
    *v8 = v11;
    int64_t v12; // 0x305f22
    return function_c823b(a1, a2, a3, a4, *v8, *v8, v12, (int64_t)&g35);
}

// Address range: 0x306075 - 0x3061b9
int64_t function_306075(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x306075
    int64_t v1; // bp-32, 0x306075
    int64_t v2 = (int64_t)&v1; // 0x3060d7
    int64_t * v3 = (int64_t *)(v2 - 16); // 0x3060fe
    *v3 = 0x1ab1917c;
    int64_t * v4 = (int64_t *)(v2 - 24); // 0x30610c
    int64_t v5 = *(int64_t *)(v2 + 24); // 0x306112
    *v3 = v5;
    *v4 = v5;
    int64_t v6 = v2 - 32; // 0x306119
    int64_t * v7 = (int64_t *)v6; // 0x306119
    *v7 = v5;
    int64_t v8 = *(int64_t *)(v2 + 8); // 0x306125
    *v3 = v8;
    int64_t v9 = v2 - 8; // 0x306140
    *v4 = v9;
    *v7 = 0x709d52ba;
    *(int64_t *)(v2 - 40) = v5;
    int64_t * v10 = (int64_t *)v9; // 0x30615c
    *v10 = *v4;
    *v7 = v6;
    *v4 = v8;
    *(int64_t *)(v2 + 16) = *v3;
    int64_t v11 = *v10; // 0x306185
    *v3 = v11;
    *v4 = v11;
    *v10 = v1;
    *v3 = v1;
    int64_t v12; // 0x306075
    return function_c823b(a1, 0x2ffe39, a3, a4, a5, a6, v12, 169);
}

// Address range: 0x3061b9 - 0x3062e9
int64_t function_3061b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3061b9
    int64_t v1; // 0x3061b9
    return function_c823b(a1, a2, a3, a4, a5, v1, 0x107288de, (int64_t)&g35);
}

// Address range: 0x3062e9 - 0x306453
int64_t function_3062e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3062e9
    int64_t v1; // bp-48, 0x3062e9
    int64_t v2 = (int64_t)&v1; // 0x30636a
    int64_t v3 = *(int64_t *)(v2 + 40); // 0x306379
    v1 = v3;
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x30637d
    int64_t v5 = v2 + 8; // 0x306393
    *v4 = v5;
    int64_t v6 = *(int64_t *)(v2 + 16); // 0x30639f
    *v4 = v6;
    int64_t v7 = v2 - 16; // 0x3063a3
    int64_t * v8 = (int64_t *)v7; // 0x3063a3
    *v8 = v3;
    *(int64_t *)(v2 - 24) = v7;
    int64_t * v9 = (int64_t *)v5; // 0x3063d8
    *v9 = *v4;
    *v8 = a6;
    *(int64_t *)(v2 + 32) = v6;
    *v4 = a4;
    *v9 = v2 + 24;
    return function_c823b(a1, a2, a3, a4, a5, *v4, 0x1eac8c3f, 0x5eb250de);
}

// Address range: 0x306453 - 0x3065dc
int64_t function_306453(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x306453
    int64_t v1; // bp-40, 0x306453
    int64_t v2 = (int64_t)&v1; // 0x3064c6
    int64_t v3 = v2 + 8; // 0x3064ca
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x3064f1
    *v4 = a4;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x3064f5
    int64_t v6 = *(int64_t *)(v2 + 32); // 0x306504
    *v4 = v6;
    *v5 = v6;
    int64_t v7 = v2 - 24; // 0x30650b
    int64_t * v8 = (int64_t *)v7; // 0x30650b
    *v8 = v6;
    int64_t v9 = *(int64_t *)(v2 + 16); // 0x30651d
    *v4 = v9;
    *v8 = v7;
    *v5 = v6;
    *(int64_t *)v3 = *v4;
    *(int64_t *)(v2 + 24) = v9;
    *v5 = v3;
    int64_t v10 = *v4; // 0x3065ce
    *v8 = v10;
    return function_c823b(a1, a2, a3, v10, a5, a6, 0x3005a1, 169);
}

// Address range: 0x3065dc - 0x306735
int64_t function_3065dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3065dc
    int64_t v1; // bp-32, 0x3065dc
    int64_t v2 = (int64_t)&v1; // 0x306669
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 16); // 0x3066d4
    *v3 = a6;
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x3066d7
    *(int64_t *)(v2 + 8) = *v4;
    *v4 = 0x40ffd6;
    *v3 = 169;
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = v1;
    *v3 = v2;
    int64_t v5 = *v4; // 0x306721
    *v3 = v5;
    *(int64_t *)(v2 - 24) = v5;
    int64_t v6; // 0x3065dc
    return function_c823b(a1, a2, a3, a4, a5, v6, v6, (int64_t)&g35);
}

// Address range: 0x306735 - 0x3068b7
int64_t function_306735(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x532ad921; // bp-48, 0x306811
    int64_t v2; // 0x306735
    int64_t result = function_c823b(a1, a2, a3, a4, a5, v2, (int64_t)&v1, (int64_t)&g35); // 0x3068b2
    return result;
}

// Address range: 0x3068b7 - 0x3069e9
int64_t function_3068b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3068b7
    int64_t v1; // bp-48, 0x3068b7
    int64_t v2 = (int64_t)&v1; // 0x306946
    v1 = a4;
    *(int64_t *)(v2 + 32) = a4;
    int64_t v3 = v2 + 8; // 0x3069aa
    int64_t * v4 = (int64_t *)v3; // 0x3069ae
    *(int64_t *)(v2 - 8) = *v4;
    *v4 = a5;
    v1 = v3;
    *v4 = v2 + 24;
    int64_t v5; // 0x3068b7
    return function_c823b(a1, a2, a3, a4, *v4, v5, a6, (int64_t)&g35);
}

// Address range: 0x3069e9 - 0x306b2f
int64_t function_3069e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x300f77; // bp-32, 0x306ab7
    int64_t v2 = (int64_t)&v1; // 0x306ae6
    int64_t v3 = v2 - 8; // 0x306b01
    int64_t * v4 = (int64_t *)v3; // 0x306b01
    *v4 = a1;
    *(int64_t *)(v2 - 16) = v3;
    *v4 = v2 + 8;
    return function_c823b(*v4, a2, a3, a4, a5, a6, 0x300f77, 0x32a83360);
}

// Address range: 0x306b2f - 0x306c74
int64_t function_306b2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x306b2f
    int64_t v1; // bp-64, 0x306b2f
    v1 = (int64_t)&v1;
    int64_t v2; // 0x306b2f
    return function_c823b(a1, a2, 0x168564c1, a4, v2, v2, 169, 0x4a8aa5d3);
}

// Address range: 0x306c74 - 0x306dc0
int64_t function_306c74(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x306c74
    bool v1; // 0x306c74
    int64_t result = function_c823b(a1, a2, a3, a4, a5, 0x3013f7, 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2, (int64_t)&g35); // 0x306dbb
    return result;
}

// Address range: 0x5528f6 - 0x5528f7
int64_t function_5528f6(void) {
    // 0x5528f6
    int64_t result; // 0x5528f6
    return result;
}

// Address range: 0x5528f9 - 0x5528fb
int64_t function_5528f9(void) {
    // 0x5528f9
    return function_5528c9();
}

// Address range: 0x5528fb - 0x552944
int64_t function_5528fb(void) {
    // 0x5528fb
    __stack_chk_fail();
    int64_t v1; // 0x5528fb
    int64_t v2 = v1 - 24; // 0x552907
    if (v2 != (int64_t)g20) {
        // 0x552914
        function_552550(v2, *(int64_t *)(v1 - 104));
    }
    // 0x55291d
    _Unwind_Resume((struct _Unwind_Exception *)&g35);
    function_1fd40((int64_t)&g35);
    while (true) {
        // 0x55292d
        function_1fd40(function_20a50());
        function_4eeb40(v1);
    }
}

// Address range: 0x552944 - 0x552963
int64_t function_552944(void) {
    // 0x552944
    int64_t v1; // 0x552944
    int64_t v2 = v1;
    return function_552550(*(int64_t *)(v2 - 96) - 24, *(int64_t *)(v2 - 104));
}

// Address range: 0x552963 - 0x55296d
int64_t function_552963(void) {
    // 0x552963
    return function_20540();
}

// Address range: 0x552970 - 0x5529e7
// From class:    std::__moneypunct_cache<char, false>
// Type:          constructor
int64_t function_552970(int64_t a1, int64_t a2) {
    // 0x552970
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 24) = 0;
    *(char *)(a1 + 32) = 0;
    *(int32_t *)(a1 + 8) = (int32_t)(a2 != 0);
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 48) = 0;
    *(int64_t *)(a1 + 56) = 0;
    *(int64_t *)(a1 + 64) = 0;
    *(int64_t *)(a1 + 72) = 0;
    *(int64_t *)(a1 + 80) = 0;
    *(int64_t *)a1 = (int64_t)&g3;
    *(int64_t *)(a1 + 88) = 0;
    *(int16_t *)(a1 + 33) = (int16_t)((int32_t)&g3 ^ (int32_t)&g3);
    *(int32_t *)(a1 + 96) = 0;
    *(char *)(a1 + 111) = 0;
    return (int32_t)&g3 ^ (int32_t)&g3;
}

// Address range: 0x5529f0 - 0x552a67
// From class:    std::__moneypunct_cache<char, true>
// Type:          constructor
int64_t function_5529f0(int64_t a1, int64_t a2) {
    // 0x5529f0
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 24) = 0;
    *(char *)(a1 + 32) = 0;
    *(int32_t *)(a1 + 8) = (int32_t)(a2 != 0);
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 48) = 0;
    *(int64_t *)(a1 + 56) = 0;
    *(int64_t *)(a1 + 64) = 0;
    *(int64_t *)(a1 + 72) = 0;
    *(int64_t *)(a1 + 80) = 0;
    *(int64_t *)a1 = (int64_t)&g2;
    *(int64_t *)(a1 + 88) = 0;
    *(int16_t *)(a1 + 33) = (int16_t)((int32_t)&g2 ^ (int32_t)&g2);
    *(int32_t *)(a1 + 96) = 0;
    *(char *)(a1 + 111) = 0;
    return (int32_t)&g2 ^ (int32_t)&g2;
}

// Address range: 0x552a70 - 0x552aaa
// From class:    std::moneypunct<char, false>
// Type:          constructor
int64_t function_552a70(int64_t a1, int64_t a2, int64_t a3) {
    // 0x552a70
    *(int64_t *)(a1 + 16) = 0;
    *(int32_t *)(a1 + 8) = (int32_t)(a2 != 0);
    *(int64_t *)a1 = (int64_t)&g6;
    return function_4f39b0(a1, 0, 0);
}

// Address range: 0x552aaa - 0x552af6
// From class:    std::moneypunct<char, false>
// Type:          constructor
int64_t function_552aaa(int64_t a1, int64_t a2, int64_t a3) {
    // 0x552aaa
    int64_t v1; // 0x552aaa
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)(v1 + 16) = a2;
    *(int32_t *)(v1 + 8) = (int32_t)(a3 != 0) | ((int32_t)&g35 ^ (int32_t)&g35) & -256;
    *(int64_t *)v1 = (int64_t)&g6;
    return function_4f39b0(v1, 0, 0);
}

// Address range: 0x552af6 - 0x552b46
// From class:    std::moneypunct<char, false>
// Type:          constructor
int64_t function_552af6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x552af6
    int64_t v1; // 0x552af6
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)(v1 + 16) = 0;
    *(int32_t *)(v1 + 8) = (int32_t)(a4 != 0) | ((int32_t)&g35 ^ (int32_t)&g35) & -256;
    *(int64_t *)v1 = (int64_t)&g6;
    return function_4f39b0(v1, (int32_t)a2, (int32_t)a3);
}

// Address range: 0x552b46 - 0x552b82
int64_t function_552b46(void) {
    // 0x552b46
    int64_t v1; // 0x552b46
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t result = *(int64_t *)((int64_t)&g35 + 16); // 0x552b63
    if (result != g15) {
        // 0x552b80
        return result;
    }
    // 0x552b70
    return (int64_t)*(char *)(*(int64_t *)(v1 + 16) + 33);
}

// Address range: 0x552b90 - 0x552bb2
int64_t function_552b90(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 24); // 0x552b93
    if (result != g19) {
        // 0x552bb0
        return result;
    }
    // 0x552ba0
    return (int64_t)*(char *)(*(int64_t *)(a1 + 16) + 34);
}

// Address range: 0x552bc0 - 0x552da2
int64_t function_552bc0(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x552bc8
    int64_t v2 = a2; // 0x552be6
    if (*(int64_t *)(a2 + 32) == g29) {
        // 0x552be8
        v2 = *(int64_t *)(*(int64_t *)(a2 + 16) + 16);
        function_250b0();
    }
    // 0x552bfa
    if (v1 == __readfsqword(40)) {
        // 0x552c0d
        return result;
    }
    // 0x552c1c
    __stack_chk_fail();
    int64_t v3 = __readfsqword(40); // 0x552c38
    int64_t v4 = v2; // 0x552c56
    if (*(int64_t *)(*(int64_t *)v2 + 40) == g17) {
        // 0x552c58
        v4 = *(int64_t *)(*(int64_t *)(v2 + 16) + 40);
        function_250b0();
    }
    // 0x552c6a
    if (v3 == __readfsqword(40)) {
        // 0x552c0d
        return result;
    }
    // 0x552c8c
    __stack_chk_fail();
    int64_t v5 = __readfsqword(40); // 0x552ca8
    int64_t v6 = v4; // 0x552cc6
    if (*(int64_t *)(*(int64_t *)v4 + 48) == g33) {
        // 0x552cc8
        v6 = *(int64_t *)(*(int64_t *)(v4 + 16) + 56);
        function_250b0();
    }
    // 0x552cda
    if (v5 == __readfsqword(40)) {
        // 0x552c0d
        return result;
    }
    // 0x552cfc
    __stack_chk_fail();
    int64_t v7 = __readfsqword(40); // 0x552d18
    if (*(int64_t *)(*(int64_t *)v6 + 56) == g13) {
        // 0x552d38
        function_250b0();
    }
    // 0x552d4a
    if (v7 == __readfsqword(40)) {
        // 0x552c0d
        return result;
    }
    // 0x552d6c
    __stack_chk_fail();
    int64_t result2 = *(int64_t *)(result + 64); // 0x552d83
    if (result2 != g18) {
        // 0x552c0d
        return result2;
    }
    // 0x552d90
    return (int64_t)*(int32_t *)(*(int64_t *)(result + 16) + 88);
}

// Address range: 0x552db0 - 0x552eaa
// From class:    std::moneypunct<char, true>
// Type:          constructor
int64_t function_552db0(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x552db4
    int64_t result = *(int64_t *)(a1 + 72); // 0x552dc7
    if (result != g12) {
        // 0x552df0
        if (v1 == __readfsqword(40)) {
            // 0x552e00
            return result;
        }
    } else {
        // 0x552dd4
        if (v1 == __readfsqword(40)) {
            // 0x552deb
            return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 92);
        }
    }
    // 0x552e06
    __stack_chk_fail();
    int64_t v2 = __readfsqword(40); // 0x552e14
    int64_t result2 = *(int64_t *)(a1 + 80); // 0x552e27
    int64_t * v3; // 0x552db0
    if (result2 != g24) {
        // 0x552e50
        if (v2 == __readfsqword(40)) {
            // 0x552e00
            return result2;
        }
        // 0x552e50
        v3 = (int64_t *)(a1 + 16);
    } else {
        int64_t * v4 = (int64_t *)(a1 + 16);
        v3 = v4;
        if (v2 == __readfsqword(40)) {
            // 0x552e4b
            return (int64_t)*(int32_t *)(*v4 + 96);
        }
    }
    // 0x552e66
    __stack_chk_fail();
    *v3 = 0;
    *(int32_t *)(a1 + 8) = (int32_t)(a2 != 0) | ((int32_t)&g35 ^ (int32_t)&g35) & -256;
    *(int64_t *)a1 = (int64_t)&g5;
    return function_4f3410(a1, 0, 0);
}

// Address range: 0x552eaa - 0x552ef6
// From class:    std::moneypunct<char, true>
// Type:          constructor
int64_t function_552eaa(int64_t a1, int64_t a2, int64_t a3) {
    // 0x552eaa
    int64_t v1; // 0x552eaa
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)(v1 + 16) = a2;
    *(int32_t *)(v1 + 8) = (int32_t)(a3 != 0) | ((int32_t)&g35 ^ (int32_t)&g35) & -256;
    *(int64_t *)v1 = (int64_t)&g5;
    return function_4f3410(v1, 0, 0);
}

// Address range: 0x552ef6 - 0x552f46
// From class:    std::moneypunct<char, true>
// Type:          constructor
int64_t function_552ef6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x552ef6
    int64_t v1; // 0x552ef6
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)(v1 + 16) = 0;
    *(int32_t *)(v1 + 8) = (int32_t)(a4 != 0) | ((int32_t)&g35 ^ (int32_t)&g35) & -256;
    *(int64_t *)v1 = (int64_t)&g5;
    return function_4f3410(v1, (int32_t)a2, (int32_t)a3);
}

// Address range: 0x552f46 - 0x552f82
int64_t function_552f46(void) {
    // 0x552f46
    int64_t v1; // 0x552f46
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t result = *(int64_t *)((int64_t)&g35 + 16); // 0x552f63
    if (result != g32) {
        // 0x552f80
        return result;
    }
    // 0x552f70
    return (int64_t)*(char *)(*(int64_t *)(v1 + 16) + 33);
}

// Address range: 0x552f90 - 0x552fb2
int64_t function_552f90(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 24); // 0x552f93
    if (result != g23) {
        // 0x552fb0
        return result;
    }
    // 0x552fa0
    return (int64_t)*(char *)(*(int64_t *)(a1 + 16) + 34);
}

// Address range: 0x552fc0 - 0x5531a2
int64_t function_552fc0(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x552fc8
    int64_t v2 = a2; // 0x552fe6
    if (*(int64_t *)(a2 + 32) == g26) {
        // 0x552fe8
        v2 = *(int64_t *)(*(int64_t *)(a2 + 16) + 16);
        function_250b0();
    }
    // 0x552ffa
    if (v1 == __readfsqword(40)) {
        // 0x55300d
        return result;
    }
    // 0x55301c
    __stack_chk_fail();
    int64_t v3 = __readfsqword(40); // 0x553038
    int64_t v4 = v2; // 0x553056
    if (*(int64_t *)(*(int64_t *)v2 + 40) == g31) {
        // 0x553058
        v4 = *(int64_t *)(*(int64_t *)(v2 + 16) + 40);
        function_250b0();
    }
    // 0x55306a
    if (v3 == __readfsqword(40)) {
        // 0x55300d
        return result;
    }
    // 0x55308c
    __stack_chk_fail();
    int64_t v5 = __readfsqword(40); // 0x5530a8
    int64_t v6 = v4; // 0x5530c6
    if (*(int64_t *)(*(int64_t *)v4 + 48) == g28) {
        // 0x5530c8
        v6 = *(int64_t *)(*(int64_t *)(v4 + 16) + 56);
        function_250b0();
    }
    // 0x5530da
    if (v5 == __readfsqword(40)) {
        // 0x55300d
        return result;
    }
    // 0x5530fc
    __stack_chk_fail();
    int64_t v7 = __readfsqword(40); // 0x553118
    if (*(int64_t *)(*(int64_t *)v6 + 56) == g14) {
        // 0x553138
        function_250b0();
    }
    // 0x55314a
    if (v7 == __readfsqword(40)) {
        // 0x55300d
        return result;
    }
    // 0x55316c
    __stack_chk_fail();
    int64_t result2 = *(int64_t *)(result + 64); // 0x553183
    if (result2 != g16) {
        // 0x55300d
        return result2;
    }
    // 0x553190
    return (int64_t)*(int32_t *)(*(int64_t *)(result + 16) + 88);
}

// Address range: 0x5531b0 - 0x55368a
// From class:    std::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          constructor
int64_t function_5531b0(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x5531b4
    int64_t result = *(int64_t *)(a1 + 72); // 0x5531c7
    int64_t v2; // 0x5531b0
    if (result != g25) {
        // 0x5531f0
        if (v1 == __readfsqword(40)) {
            // 0x553200
            return result;
        }
    } else {
        int64_t v3 = __readfsqword(40) ^ v1; // 0x5531dd
        v2 = v3;
        if (v3 == 0) {
            // 0x5531eb
            return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 92);
        }
    }
    // 0x553206
    __stack_chk_fail();
    int64_t v4 = __readfsqword(40); // 0x553214
    int64_t result2 = *(int64_t *)(a1 + 80); // 0x553227
    int64_t * v5; // 0x5531b0
    int64_t v6; // 0x5531b0
    if (result2 != g22) {
        // 0x553250
        if (v4 == __readfsqword(40)) {
            // 0x553200
            return result2;
        }
        // 0x553250
        v5 = (int64_t *)(a1 + 16);
        v6 = v2;
    } else {
        int64_t * v7 = (int64_t *)(a1 + 16);
        int64_t v8 = __readfsqword(40) ^ v4; // 0x55323d
        v5 = v7;
        v6 = v8;
        if (v8 == 0) {
            // 0x55324b
            return (int64_t)*(int32_t *)(*v7 + 96);
        }
    }
    // 0x553266
    __stack_chk_fail();
    *v5 = 0;
    int64_t v9 = __readfsqword(40); // 0x553286
    *(int32_t *)(a1 + 8) = (int32_t)(v6 != 0);
    int64_t * v10 = (int64_t *)a1; // 0x5532b0
    *v10 = (int64_t)&g6;
    function_4f39b0(a1, 0, 0);
    *v10 = (int64_t)&g7;
    bool v11; // 0x5531b0
    int64_t v12 = v11 ? -1 : 1;
    int64_t v13 = (int64_t)&g1; // 0x5531b0
    int64_t v14 = a2; // 0x5532d5
    int64_t v15 = 2; // 0x5532d5
    unsigned char v16 = *(char *)v14; // 0x5532d5
    char v17 = *(char *)v13; // 0x5532d5
    v14 += v12;
    char v18 = v17; // 0x5532d5
    bool v19 = false; // 0x5532d5
    while (v16 == v17) {
        v15--;
        v13 += v12;
        v18 = v16;
        v19 = true;
        if (v15 == 0) {
            // break -> 
            break;
        }
        v16 = *(char *)v14;
        v17 = *(char *)v13;
        v14 += v12;
        v18 = v17;
        v19 = false;
    }
    unsigned char v20 = v18;
    int64_t v21 = (int64_t)"POSIX"; // 0x5532de
    int64_t v22 = a2; // 0x5532de
    int64_t v23 = 6; // 0x5532de
    int64_t v24 = v14; // 0x5532de
    if ((v16 >= v20 && !v19) != v16 < v20) {
        unsigned char v25 = *(char *)v22; // 0x5532ef
        char v26 = *(char *)v21; // 0x5532ef
        v22 += v12;
        v23--;
        char v27 = v26; // 0x5532ef
        bool v28 = false; // 0x5532ef
        while (v25 == v26) {
            // 0x5532e0
            v21 += v12;
            v27 = v25;
            v28 = true;
            if (v23 == 0) {
                // break -> 
                break;
            }
            v25 = *(char *)v22;
            v26 = *(char *)v21;
            v22 += v12;
            v23--;
            v27 = v26;
            v28 = false;
        }
        unsigned char v29 = v27;
        v24 = v22;
        if ((v25 >= v29 && !v28) != v25 < v29) {
            // 0x553318
            int32_t v30; // bp-88, 0x5531b0
            function_5679b0((int64_t *)&v30, a2, 0, v23);
            function_4f39b0(a1, v30, 0);
            function_5679e0((int64_t *)&v30);
            v24 = v30;
        }
    }
    int64_t result3 = __readfsqword(40) ^ v9; // 0x5532ff
    if (result3 == 0) {
        // 0x553200
        return result3;
    }
    // 0x553340
    __stack_chk_fail();
    function_4f4060(a1);
    _Unwind_Resume((struct _Unwind_Exception *)&g35);
    function_565970(a1);
    _Unwind_Resume((struct _Unwind_Exception *)&g35);
    int64_t v31 = *(int64_t *)v24; // 0x55337b
    *(int64_t *)((int64_t)&g35 + 16) = 0;
    int64_t v32 = __readfsqword(40); // 0x553386
    *(int32_t *)((int64_t)&g35 + 8) = 0;
    *(int64_t *)&g35 = (int64_t)&g6;
    function_4f39b0((int64_t)&g35, 0, 0);
    *(int64_t *)&g35 = (int64_t)&g7;
    int64_t v33 = (int64_t)&g1; // 0x5531b0
    int64_t v34 = v31; // 0x5533d5
    int64_t v35 = 2; // 0x5533d5
    unsigned char v36 = *(char *)v34; // 0x5533d5
    char v37 = *(char *)v33; // 0x5533d5
    v34 += v12;
    char v38 = v37; // 0x5533d5
    bool v39 = false; // 0x5533d5
    while (v36 == v37) {
        v35--;
        v33 += v12;
        v38 = v36;
        v39 = true;
        if (v35 == 0) {
            // break -> 
            break;
        }
        v36 = *(char *)v34;
        v37 = *(char *)v33;
        v34 += v12;
        v38 = v37;
        v39 = false;
    }
    unsigned char v40 = v38;
    int64_t v41 = (int64_t)"POSIX"; // 0x5533de
    int64_t v42 = v31; // 0x5533de
    int64_t v43 = 6; // 0x5533de
    int64_t v44 = v34; // 0x5533de
    if ((v36 >= v40 && !v39) != v36 < v40) {
        unsigned char v45 = *(char *)v42; // 0x5533ef
        char v46 = *(char *)v41; // 0x5533ef
        v42 += v12;
        v43--;
        char v47 = v46; // 0x5533ef
        bool v48 = false; // 0x5533ef
        while (v45 == v46) {
            // 0x5533e0
            v41 += v12;
            v47 = v45;
            v48 = true;
            if (v43 == 0) {
                // break -> 
                break;
            }
            v45 = *(char *)v42;
            v46 = *(char *)v41;
            v42 += v12;
            v43--;
            v47 = v46;
            v48 = false;
        }
        unsigned char v49 = v47;
        v44 = v42;
        if ((v45 >= v49 && !v48) != v45 < v49) {
            // 0x553418
            char * v50; // bp-128, 0x5531b0
            function_5679b0((int64_t *)&v50, v31, 0, v43);
            int64_t v51 = (int64_t)v50; // 0x553428
            function_4f39b0((int64_t)&g35, (int32_t)v51, 0);
            function_5679e0((int64_t *)&v50);
            v44 = v51;
        }
    }
    int64_t result4 = __readfsqword(40) ^ v32; // 0x5533ff
    if (result4 == 0) {
        // 0x553200
        return result4;
    }
    // 0x553440
    __stack_chk_fail();
    function_4f4060((int64_t)&g35);
    _Unwind_Resume((struct _Unwind_Exception *)&g35);
    function_565970((int64_t)&g35);
    _Unwind_Resume((struct _Unwind_Exception *)&g35);
    *(int64_t *)((int64_t)&g35 + 16) = 0;
    int64_t v52 = __readfsqword(40); // 0x553486
    *(int32_t *)((int64_t)&g35 + 8) = 0;
    *(int64_t *)&g35 = (int64_t)&g5;
    function_4f3410((int64_t)&g35, 0, 0);
    *(int64_t *)&g35 = (int64_t)&g8;
    int64_t v53 = (int64_t)&g1; // 0x5531b0
    int64_t v54 = v44; // 0x5534d5
    int64_t v55 = 2; // 0x5534d5
    unsigned char v56 = *(char *)v54; // 0x5534d5
    char v57 = *(char *)v53; // 0x5534d5
    v54 += v12;
    char v58 = v57; // 0x5534d5
    bool v59 = false; // 0x5534d5
    while (v56 == v57) {
        v55--;
        v53 += v12;
        v58 = v56;
        v59 = true;
        if (v55 == 0) {
            // break -> 
            break;
        }
        v56 = *(char *)v54;
        v57 = *(char *)v53;
        v54 += v12;
        v58 = v57;
        v59 = false;
    }
    unsigned char v60 = v58;
    int64_t v61 = (int64_t)"POSIX"; // 0x5534de
    int64_t v62 = v44; // 0x5534de
    int64_t v63 = 6; // 0x5534de
    int64_t v64 = v54; // 0x5534de
    if ((v56 >= v60 && !v59) != v56 < v60) {
        unsigned char v65 = *(char *)v62; // 0x5534ef
        char v66 = *(char *)v61; // 0x5534ef
        v62 += v12;
        v63--;
        char v67 = v66; // 0x5534ef
        bool v68 = false; // 0x5534ef
        while (v65 == v66) {
            // 0x5534e0
            v61 += v12;
            v67 = v65;
            v68 = true;
            if (v63 == 0) {
                // break -> 
                break;
            }
            v65 = *(char *)v62;
            v66 = *(char *)v61;
            v62 += v12;
            v63--;
            v67 = v66;
            v68 = false;
        }
        unsigned char v69 = v67;
        v64 = v62;
        if ((v65 >= v69 && !v68) != v65 < v69) {
            // 0x553518
            int64_t v70; // bp-168, 0x5531b0
            function_5679b0(&v70, v44, 0, v63);
            function_4f3410((int64_t)&g35, (int32_t)v70, 0);
            function_5679e0(&v70);
            v64 = v70;
        }
    }
    int64_t result5 = __readfsqword(40) ^ v52; // 0x5534ff
    if (result5 == 0) {
        // 0x553200
        return result5;
    }
    // 0x553540
    __stack_chk_fail();
    function_4f3f50((int64_t)&g35);
    _Unwind_Resume((struct _Unwind_Exception *)&g35);
    function_565970((int64_t)&g35);
    _Unwind_Resume((struct _Unwind_Exception *)&g35);
    int64_t v71 = *(int64_t *)v64; // 0x55357b
    *(int64_t *)((int64_t)&g35 + 16) = 0;
    int64_t v72 = __readfsqword(40); // 0x553586
    *(int32_t *)((int64_t)&g35 + 8) = 0;
    *(int64_t *)&g35 = (int64_t)&g5;
    function_4f3410((int64_t)&g35, 0, 0);
    *(int64_t *)&g35 = (int64_t)&g8;
    int64_t v73 = (int64_t)&g1; // 0x5531b0
    int64_t v74 = v71; // 0x5535d5
    int64_t v75 = 2; // 0x5535d5
    unsigned char v76 = *(char *)v74; // 0x5535d5
    char v77 = *(char *)v73; // 0x5535d5
    v74 += v12;
    char v78 = v77; // 0x5535d5
    bool v79 = false; // 0x5535d5
    while (v76 == v77) {
        v75--;
        v73 += v12;
        v78 = v76;
        v79 = true;
        if (v75 == 0) {
            // break -> 
            break;
        }
        v76 = *(char *)v74;
        v77 = *(char *)v73;
        v74 += v12;
        v78 = v77;
        v79 = false;
    }
    unsigned char v80 = v78;
    int64_t v81 = (int64_t)"POSIX"; // 0x5535de
    int64_t v82 = v71; // 0x5535de
    int64_t v83 = 6; // 0x5535de
    int64_t v84 = v74; // 0x5535de
    if ((v76 >= v80 && !v79) != v76 < v80) {
        unsigned char v85 = *(char *)v82; // 0x5535ef
        char v86 = *(char *)v81; // 0x5535ef
        v82 += v12;
        v83--;
        char v87 = v86; // 0x5535ef
        bool v88 = false; // 0x5535ef
        while (v85 == v86) {
            // 0x5535e0
            v81 += v12;
            v87 = v85;
            v88 = true;
            if (v83 == 0) {
                // break -> 
                break;
            }
            v85 = *(char *)v82;
            v86 = *(char *)v81;
            v82 += v12;
            v83--;
            v87 = v86;
            v88 = false;
        }
        unsigned char v89 = v87;
        v84 = v82;
        if ((v85 >= v89 && !v88) != v85 < v89) {
            // 0x553618
            int32_t v90; // bp-208, 0x5531b0
            function_5679b0((int64_t *)&v90, v71, 0, v83);
            function_4f3410((int64_t)&g35, v90, 0);
            function_5679e0((int64_t *)&v90);
            v84 = v90;
        }
    }
    int64_t result6 = __readfsqword(40) ^ v72; // 0x5535ff
    if (result6 == 0) {
        // 0x553200
        return result6;
    }
    // 0x553640
    __stack_chk_fail();
    function_4f3f50((int64_t)&g35);
    _Unwind_Resume((struct _Unwind_Exception *)&g35);
    function_565970((int64_t)&g35);
    _Unwind_Resume((struct _Unwind_Exception *)&g35);
    *(int32_t *)((int64_t)&g35 + 8) = (int32_t)(v84 != 0) | ((int32_t)&g35 ^ (int32_t)&g35) & -256;
    *(int64_t *)&g35 = (int64_t)&g9;
    return (int64_t)&g9;
}

// Address range: 0x553690 - 0x55369d
int64_t function_553690(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x553690
    return *(int64_t *)(a1 + 16);
}

// Address range: 0x5536a0 - 0x5536ad
int64_t function_5536a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x5536a0
    return *(int64_t *)(a1 + 24);
}

// Address range: 0x5536b0 - 0x5536ca
// From class:    std::money_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
// Type:          constructor
int64_t function_5536b0(int64_t a1, int64_t a2) {
    // 0x5536b0
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a2 != 0);
    *(int64_t *)a1 = (int64_t)&g10;
    return (int64_t)&g10;
}

// Address range: 0x5536d0 - 0x5536e0
int64_t function_5536d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x5536d0
    return *(int64_t *)(a1 + 16);
}

// Address range: 0x5536e0 - 0x5536f0
int64_t function_5536e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x5536e0
    return *(int64_t *)(a1 + 24);
}

// Address range: 0x5536f0 - 0x55374b
// From class:    std::__numpunct_cache<char>
// Type:          constructor
int64_t function_5536f0(int64_t a1, int64_t a2) {
    // 0x5536f0
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 24) = 0;
    *(char *)(a1 + 32) = 0;
    *(int32_t *)(a1 + 8) = (int32_t)(a2 != 0);
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 48) = 0;
    *(int64_t *)(a1 + 56) = 0;
    *(int64_t *)(a1 + 64) = 0;
    *(char *)(a1 + 136) = 0;
    *(int64_t *)a1 = (int64_t)&g11;
    *(int16_t *)(a1 + 72) = (int16_t)((int32_t)&g11 ^ (int32_t)&g11);
    return (int32_t)&g11 ^ (int32_t)&g11;
}

// Address range: 0x553750 - 0x553788
// From class:    std::numpunct<char>
// Type:          constructor
int64_t function_553750(int64_t a1, int64_t a2) {
    // 0x553750
    *(int64_t *)(a1 + 16) = 0;
    *(int32_t *)(a1 + 8) = (int32_t)(a2 != 0);
    *(int64_t *)a1 = (int64_t)&g4;
    return function_56afb0();
}

// Address range: 0x553788 - 0x5537d4
// From class:    std::numpunct<char>
// Type:          constructor
int64_t function_553788(int64_t a1, int64_t a2, int64_t a3) {
    // 0x553788
    int64_t v1; // 0x553788
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)(v1 + 16) = a2;
    *(int32_t *)(v1 + 8) = (int32_t)(a3 != 0) | ((int32_t)&g35 ^ (int32_t)&g35) & -256;
    *(int64_t *)v1 = (int64_t)&g4;
    return function_56afb0();
}

// Address range: 0x5537d4 - 0x553826
// From class:    std::numpunct<char>
// Type:          constructor
int64_t function_5537d4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5537d4
    int64_t v1; // 0x5537d4
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)(v1 + 16) = 0;
    *(int32_t *)(v1 + 8) = (int32_t)(a3 != 0) | ((int32_t)&g35 ^ (int32_t)&g35) & -256;
    *(int64_t *)v1 = (int64_t)&g4;
    return function_56afb0();
}

// Address range: 0x553826 - 0x553862
int64_t function_553826(void) {
    // 0x553826
    int64_t v1; // 0x553826
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t result = *(int64_t *)((int64_t)&g35 + 16); // 0x553843
    if (result != g27) {
        // 0x553860
        return result;
    }
    // 0x553850
    return (int64_t)*(char *)(*(int64_t *)(v1 + 16) + 72);
}

// Address range: 0x553870 - 0x553892
int64_t function_553870(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 24); // 0x553873
    if (result != g21) {
        // 0x553890
        return result;
    }
    // 0x553880
    return (int64_t)*(char *)(*(int64_t *)(a1 + 16) + 73);
}

// Address range: 0x5538a0 - 0x5538f3
int64_t function_5538a0(int64_t result2, int64_t a2) {
    // 0x5538a0
    __readfsqword(40);
    int64_t result = *(int64_t *)(a2 + 32); // 0x5538bb
    if (result != g30) {
        // 0x5538f8
        return result;
    }
    // 0x5538c8
    function_250b0();
    __readfsqword(40);
    return result2;
}
