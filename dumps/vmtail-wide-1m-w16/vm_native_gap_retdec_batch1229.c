/*
 * Targeted RetDec C for native executable gap queue batch 1229.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x26d624-0x26d824 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26d824-0x26da24 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26da24-0x26dc24 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26dc24-0x26de24 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26de24-0x26e024 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26e024-0x26e224 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26e224-0x26e424 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26e424-0x26e624 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a6a5e-0x4a6c5e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a6c5e-0x4a6e5e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a6e5e-0x4a705e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a705e-0x4a725e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a725e-0x4a745e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a745e-0x4a765e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a765e-0x4a785e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a785e-0x4a7a5e rank=- name=- kind=- bytes=- uncovered=-
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
extern int g34;
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

int64_t function_26d624(uint64_t a1, int64_t a2, int64_t a3, uint64_t a4, int32_t a5, int64_t a6);
int64_t function_26d879(void);
int64_t function_26d8a7(int64_t a1);
int64_t function_26d8c9(int64_t a1);
int64_t function_26d8d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26d92d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_26d959(void);
int64_t function_26d9af(void);
int64_t function_26d9be(void);
int64_t function_26d9c6(void);
int64_t function_26d9dc(int64_t a1);
int64_t function_26da07(int64_t a1, int64_t a2, int64_t a3);
int64_t function_26da20(void);
int64_t function_26da27(int64_t a1, int64_t a2, int64_t a3);
int64_t function_26da87(void);
int64_t function_26da8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26dadf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_26dbdb(void);
int64_t function_26dbf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26dc08(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_26dc83(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_26dcf5(int64_t a1);
int64_t function_26dd0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_26de5e(int64_t a1);
int64_t function_26de73(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_26df4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_26dfea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_26e07e(void);
int64_t function_26e10a(void);
int64_t function_26e145(void);
int64_t function_26e171(int64_t a1);
int64_t function_26e1ba(void);
int64_t function_26e1ca(int64_t a1);
int64_t function_26e1fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26e20f(void);
int64_t function_26e21d(void);
int64_t function_26e271(void);
int64_t function_26e28b(int64_t a1);
int64_t function_26e291(int64_t a1, int64_t a2);
int64_t function_26e2af(void);
int64_t function_26e2ca(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_26e312(void);
int64_t function_26e31f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_26e3d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26e404(void);
int64_t function_26e409(int64_t a1);
int64_t function_26e410(int64_t a1);
int64_t function_26e436(int64_t a1);
int64_t function_26e43b(void);
int64_t function_26e458(int64_t a1, int64_t a2, int64_t a3);
int64_t function_26e46f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_26e4a2(void);
int64_t function_26e4ca(int32_t a1);
int64_t function_26e4f1(void);
int64_t function_26e4f5(void);
int64_t function_26e4f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26e596(int64_t a1);
int64_t function_26e5c9(int64_t a1);
int64_t function_495700();
int64_t function_496540();
int64_t function_496860();
int64_t function_498440();
int64_t function_498d40();
int64_t function_49a050();
int64_t function_49a730();
int64_t function_49a910();
int64_t function_49b370();
int64_t function_49baf0();
int64_t function_49d220();
int64_t function_49d8b0();
int64_t function_49daf0();
int64_t function_49dd10();
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_49e960();
int64_t function_49f070();
int64_t function_4a3d40();
int64_t function_4a48f0();
int64_t function_4a4be0();
int64_t function_4a4ecf();
int64_t function_4a5810();
int64_t function_4a5ed4();
int64_t function_4a61e0();
int64_t function_4a67e8();
int64_t function_4a6a5e(void);
int64_t function_4a6a81(void);
int64_t function_4a6a8e(void);
int64_t function_4a6ac1(int32_t a1);
int64_t function_4a6af0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4a6b80(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4a6ba0(int64_t a1);
int64_t function_4a6cd0(void);
int64_t function_4a6d60(void);
int64_t function_4a6d70(void);
int64_t function_4a6d80(void);
int64_t function_4a6d90(void);
int64_t function_4a6dc0(void);
int64_t function_4a6dd0(void);
int64_t function_4a6ff8(void);
int64_t function_4a7008(void);
int64_t function_4a7020(void);
int64_t function_4a7140(void);
int64_t function_4a7300(void);
int64_t function_4a7310(void);
int64_t function_4a7320(int64_t a1);
int64_t function_4a7460(void);
int64_t function_4a74ca(void);
int64_t function_4a75ab(void);
int64_t function_4a75ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4a75b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4a7b70();
int64_t function_4a7b88();
int64_t function_4a7bb8();
int64_t function_4a7bd0();
int64_t function_4a7c00();
int64_t function_4a7cbe();
int64_t function_4a7ccb();
int64_t function_4a7ce0();
int64_t function_4a7d08();
int64_t function_4a7d30();
int64_t function_4a7d79();
int64_t function_4a7d7c();
int64_t function_4a7da3();
int64_t function_4a7fa1();
int64_t function_4a8044();
int64_t function_4a806c();
int64_t function_4a8098();
int64_t function_4a80c8();
int64_t function_4a816d();
int64_t function_4a81fa();
int64_t function_4a8222();
int64_t function_4a824a();
int64_t function_4a8276();
int64_t function_4a82cb();
int64_t function_4a82e3();
int64_t function_4a837b();
int64_t function_4a838e();
int64_t function_4a8396();
int64_t function_4a8410();
int64_t function_4a8421();
int64_t function_4a8449();
int64_t function_4a84d3();
int64_t function_4a857d();
int64_t function_4a861d();
int64_t function_4a8740();
int64_t function_4a8804();
int64_t function_4c4450();
int64_t function_4c4470();
int64_t function_4fc95f6c();
int64_t function_75ffe669();
int64_t function_910f0df();
int64_t function_d726ae6();
int64_t function_ffffffff82bf7633();
int64_t function_ffffffff83ddde98();
int64_t function_ffffffff9ed2d831();
int64_t function_ffffffffcb85d349();
int64_t unknown_10a6cbbd();
int64_t unknown_10fae1f0();
int64_t unknown_14151618();
int64_t unknown_2899ec94();
int64_t unknown_38ee4bc2();
int64_t unknown_3d8a4a25();
int64_t unknown_40448c8();
int64_t unknown_41d2d53f();
int64_t unknown_4e2e2723();
int64_t unknown_662afaa1();
int64_t unknown_68313fd3();
int64_t unknown_722b63ad();
int64_t unknown_7543f55();
int64_t unknown_7ca5ffdb();
int64_t unknown_7fd2501();
int64_t unknown_ca13ca0();
int64_t unknown_ffffffff88c169a7();
int64_t unknown_ffffffff946d5fd0();
int64_t unknown_ffffffff9d75f365();
int64_t unknown_ffffffffa05adb79();
int64_t unknown_ffffffffa1fedf87();
int64_t unknown_ffffffffb996a452();
int64_t unknown_ffffffffc8d3297a();
int64_t unknown_ffffffffdc99b926();
int64_t unknown_ffffffffed882c5b();
int64_t unknown_fffffffff9dbc397();

// Address range: 0x26d624 - 0x26d82a
int64_t function_26d624(uint64_t a1, int64_t a2, int64_t a3, uint64_t a4, int32_t a5, int64_t a6) {
    int64_t v1 = a2;
    int32_t v2 = a5;
    char v3 = *(char *)(a3 - 0x2da3a98a); // 0x26d626
    char v4 = a3; // 0x26d626
    int64_t result; // 0x26d624
    if (((v3 - v4 ^ v3) & (v3 ^ v4)) < 0) {
        // 0x26d62e
        *(int32_t *)result = (int32_t)(int64_t)&v2;
        *(char *)-0x284bfac4 = *(char *)-0x284bfac4 + (char)(a1 / 256);
        return result;
    }
    int32_t * v5 = (int32_t *)(a1 - 0x73cdc5a4); // 0x26d68e
    uint32_t v6 = (int32_t)a3; // 0x26d68e
    *v5 = *v5 + v6;
    uint64_t v7 = a4 / 256;
    int64_t v8 = unknown_ffffffff88c169a7(); // 0x26d6a1
    while ((char)(v8 || v7) < 0) {
        // 0x26d69f
        v8 = unknown_ffffffff88c169a7();
    }
    // 0x26d6aa
    *(int32_t *)a1 = *(int32_t *)&v1;
    bool v9; // 0x26d624
    int64_t v10 = v9 ? -4 : 4; // 0x26d6aa
    int64_t v11 = v1 + v10; // 0x26d6aa
    v1 = v11;
    int32_t v12 = 2 * v6; // 0x26d6ad
    if (v12 >= 0) {
        // 0x26d6da
        return v8 | v7 % 256;
    }
    int64_t v13 = v10 + a1; // 0x26d6aa
    int64_t v14 = a4 - 1; // 0x26d6ab
    int64_t v15 = __asm_iretd(v13, v11, v12, v14); // 0x26d6b1
    if (v14 != 0) {
        // 0x26d6b4
        *(char *)v13 = *(char *)v11;
        int64_t v16 = v9 ? -1 : 1; // 0x26d6b4
        unknown_10a6cbbd(v13 + v16, v1 + v16);
        *(char *)0x3cb443e2 = *(char *)0x3cb443e2 | (char)a1;
        int64_t result2 = unknown_40448c8(); // 0x26d6c2
        *(char *)0x3890b915bf01e8 = (char)result2;
        return result2;
    }
    int64_t v17 = v12; // 0x26d6ad
    int32_t * v18 = (int32_t *)(v17 - 0x7fffd90c); // 0x26d728
    char v19 = v12;
    int32_t * v20 = (int32_t *)(result - 0x8ff3900); // 0x26d734
    int64_t v21 = 8 * result | 1; // 0x26d742
    int64_t v22 = 0; // 0x26d760
    uint64_t v23 = a1;
    int64_t v24 = v15;
    *(char *)v24 = *(char *)v15 - (char)(v6 / 128);
    uint64_t v25 = 256 * v24 & 0xff00 | v22; // 0x26d726
    *v18 = *v18 + (int32_t)v25;
    char * v26 = (char *)(v24 - 0x17ffb356); // 0x26d72e
    *v26 = *v26 + v19;
    *v20 = *v20 + (int32_t)result;
    char v27 = *(char *)((256 * v22 + v24 & 0xff00 | v24 & 0xffff00ff) + v21); // 0x26d742
    int64_t v28 = (256 * (int64_t)(v27 + (char)(v25 / 256)) | v22 & 0xffff00ff) - v1; // 0x26d746
    int64_t v29 = 256 * (v23 / 512 % 128 | v23 / 2 & 128) | v23 & 0xffff00ff; // 0x26d74a
    int32_t * v30 = (int32_t *)(v29 + 0x278019ea); // 0x26d74c
    *v30 = (int32_t)(*v30 < 0);
    int64_t v31 = unknown_ffffffffed882c5b(); // 0x26d755
    char * v32 = (char *)(v1 - 0x6da6c5b6); // 0x26d75a
    char v33 = *v32 >> 1; // 0x26d75a
    *v32 = v33;
    v22 = (v28 & 0xffffffff) - 1;
    while (v22 != 0 && v33 != 0) {
        char * v34 = (char *)v31; // 0x26d71e
        char v35 = (char)v22 + 1 + *v34; // 0x26d71e
        *v34 = v35;
        v23 = v29 + 0xffffffff;
        v24 = v31;
        *(char *)v24 = v35 - (char)(v6 / 128);
        v25 = 256 * v24 & 0xff00 | v22;
        *v18 = *v18 + (int32_t)v25;
        v26 = (char *)(v24 - 0x17ffb356);
        *v26 = *v26 + v19;
        *v20 = *v20 + (int32_t)result;
        v27 = *(char *)((256 * v22 + v24 & 0xff00 | v24 & 0xffff00ff) + v21);
        v28 = (256 * (int64_t)(v27 + (char)(v25 / 256)) | v22 & 0xffff00ff) - v1;
        v29 = 256 * (v23 / 512 % 128 | v23 / 2 & 128) | v23 & 0xffff00ff;
        v30 = (int32_t *)(v29 + 0x278019ea);
        *v30 = (int32_t)(*v30 < 0);
        v31 = unknown_ffffffffed882c5b();
        v32 = (char *)(v1 - 0x6da6c5b6);
        v33 = *v32 >> 1;
        *v32 = v33;
        v22 = (v28 & 0xffffffff) - 1;
    }
    uint64_t v36 = v28 + 0xfea7fe17; // 0x26d762
    int64_t v37 = v36 & 0xffffffff; // 0x26d762
    char * v38 = (char *)(v37 - 0x2793b966); // 0x26d76b
    *v38 = *v38 >> 1;
    unknown_ffffffffa05adb79();
    int64_t v39 = (int64_t)(*(char *)(v13 - 49) ^ v19); // 0x26d785
    int64_t v40 = v17 & 0xffffff00 | v39; // 0x26d785
    int64_t result3 = unknown_fffffffff9dbc397(); // 0x26d791
    if (*(int32_t *)(v40 + 0x1ef7a9b) != -(int32_t)v29) {
        // 0x26d6da
        return result3;
    }
    char * v41 = (char *)(v1 + 0x1e83c3c); // 0x26d79c
    *v41 = *v41 + (char)(v36 / 256);
    uint64_t v42 = (result3 + v39) % 256 | result3 & 0xffffff00 | 0x100000000 * v40; // 0x26d7a2
    uint64_t v43 = v1 & 0xffffffff; // 0x26d7a2
    uint64_t v44 = v42 / v43; // 0x26d7a2
    uint64_t v45 = v42 % v43; // 0x26d7a2
    unsigned char v46 = *(char *)(8 * v37 - 0x775dfe18 + v45); // 0x26d7ac
    unsigned char v47 = (char)v44; // 0x26d7b3
    unsigned char v48 = v46 > (char)(v45 / 256) ? -56 : -57; // 0x26d7b3
    unsigned char v49 = v47 - v48; // 0x26d7b3
    int64_t v50 = v37 - 1; // 0x26d7b5
    if (v50 != 0 && v49 != 0) {
        // 0x26d829
        return v44 & 0xffffff00 | (int64_t)v49;
    }
    if (v46 > (char)(v45 / 256) || v48 > v47) {
        // 0x26d7cb
        unknown_68313fd3();
        return __asm_sti();
    }
    int32_t * v51 = (int32_t *)v45; // 0x26d7ba
    *v51 = *v51 ^ (int32_t)v50;
    return unknown_38ee4bc2();
}

// Address range: 0x26d879 - 0x26d87a
int64_t function_26d879(void) {
    // 0x26d879
    int64_t result; // 0x26d879
    return result;
}

// Address range: 0x26d8a7 - 0x26d8b0
int64_t function_26d8a7(int64_t a1) {
    // 0x26d8a7
    int64_t v1; // 0x26d8a7
    __asm_out(49, (int32_t)v1);
    return v1 + 0xffffffff & 0xffffffff;
}

// Address range: 0x26d8c9 - 0x26d8cc
int64_t function_26d8c9(int64_t a1) {
    // 0x26d8c9
    int64_t result; // 0x26d8c9
    return result;
}

// Address range: 0x26d8d8 - 0x26d92b
int64_t function_26d8d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x26d8d8
    int64_t v1; // 0x26d8d8
    int64_t v2 = v1;
    int64_t v3 = a3;
    int32_t v4 = a2; // 0x26d8da
    int32_t v5 = a3; // 0x26d8da
    uint32_t v6 = v5 + v4; // 0x26d8da
    uint64_t v7 = unknown_ffffffffa1fedf87(); // 0x26d8dc
    if (((v6 ^ v4) & (v6 ^ v5)) >= 0) {
        // 0x26d8e3
        return v7 / 2 % 128 | v7 & -256;
    }
    int64_t v8 = v1 | v1;
    int64_t v9 = 257 * v2 & 0xff00 | v2 & -0xff01; // 0x26d8e8
    int32_t v10 = *(int32_t *)-0x242fe1701ff5fc5; // 0x26d8ea
    int32_t v11 = *(int32_t *)-0x457e2518 & (int32_t)v8; // 0x26d8fa
    *(int32_t *)-0x457e2518 = v11;
    int64_t v12 = a4; // bp-8, 0x26d900
    if (v11 < 0) {
        int32_t * v13 = (int32_t *)((int64_t)v6 + 69); // 0x26d913
        *v13 = *v13 + v10;
        *(int32_t *)v9 = (int32_t)(int64_t)&v12;
        __asm_int(-125);
        int64_t result = unknown_4e2e2723(); // 0x26d91d
        int32_t * v14 = (int32_t *)(8 * v9 + a1); // 0x26d922
        *v14 = *v14 | -0x1751e2ea;
        bool v15; // 0x26d8d8
        *(int32_t *)v3 = (v15 ? -4 : 4) + v6 + *(int32_t *)&v3;
        return result;
    }
    int32_t * v16 = (int32_t *)(a3 - 24); // 0x26d903
    *v16 = *v16 + (int32_t)v9;
    int32_t * v17 = (int32_t *)(a4 - 10); // 0x26d906
    uint32_t v18 = *v17; // 0x26d906
    uint32_t v19 = v18 + (int32_t)a1; // 0x26d906
    *v17 = v19;
    int32_t * v20 = (int32_t *)((v8 & 0xffffffff) - 28); // 0x26d909
    uint32_t v21 = *v20; // 0x26d909
    uint32_t v22 = v19 < v18 ? -0x251c703f : -0x251c7040; // 0x26d909
    int32_t v23 = v21 - v22; // 0x26d909
    unsigned char v24 = llvm_ctpop_i8((char)v23); // 0x26d909
    *v20 = v23;
    return 256 * (64 * (int64_t)(v23 == 0) | (int64_t)(v19 < v18 | v21 < v22) | 128 * (int64_t)(v23 < 0) | 16 * (int64_t)(v21 % 16 + (int32_t)(v19 < v18) - v22 % 2 > 15) | 4 * (int64_t)(v24 % 2 == 0)) | (int64_t)(v10 & -0xff01 | 512);
}

// Address range: 0x26d92d - 0x26d942
int64_t function_26d92d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x26d92d
    int64_t v1; // 0x26d92d
    int32_t * v2 = (int32_t *)(v1 + 0x2201236f); // 0x26d934
    *v2 = *v2 + (int32_t)a3;
    return v1 & 0x27fe176b | 0xd801e894;
}

// Address range: 0x26d959 - 0x26d95a
int64_t function_26d959(void) {
    // 0x26d959
    int64_t result; // 0x26d959
    return result;
}

// Address range: 0x26d9af - 0x26d9b1
int64_t function_26d9af(void) {
    // 0x26d9af
    int64_t v1; // 0x26d9af
    return function_26da07(v1, v1, v1);
}

// Address range: 0x26d9be - 0x26d9c5
int64_t function_26d9be(void) {
    // 0x26d9be
    return function_26d959();
}

// Address range: 0x26d9c6 - 0x26d9d3
int64_t function_26d9c6(void) {
    // 0x26d9c6
    int64_t v1; // 0x26d9c6
    int32_t * v2 = (int32_t *)(v1 - 0x6ffeb81a); // 0x26d9c6
    *v2 = *v2 + (int32_t)v1;
    return function_ffffffff9ed2d831();
}

// Address range: 0x26d9dc - 0x26d9dd
int64_t function_26d9dc(int64_t a1) {
    // 0x26d9dc
    int64_t result; // 0x26d9dc
    return result;
}

// Address range: 0x26da07 - 0x26da0a
int64_t function_26da07(int64_t a1, int64_t a2, int64_t a3) {
    // 0x26da07
    int64_t result; // 0x26da07
    bool v1; // 0x26da07
    *(int32_t *)a1 = (int32_t)result - (int32_t)a3 + (int32_t)v1;
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x26da20 - 0x26da27
int64_t function_26da20(void) {
    // 0x26da20
    int64_t v1; // 0x26da20
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return function_ffffffff82bf7633();
}

// Address range: 0x26da27 - 0x26da2d
int64_t function_26da27(int64_t a1, int64_t a2, int64_t a3) {
    // 0x26da27
    bool v1; // 0x26da27
    int64_t v2 = v1 ? -1 : 1; // 0x26da27
    int32_t v3; // 0x26da27
    *(int32_t *)(a2 + 59 + v2) = (int32_t)(int64_t)&v3;
    int64_t v4; // 0x26da27
    return (uint64_t)v4 % 256 | v4 & -0x10000 | 256 * (64 * (int64_t)v1 | 128 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1) | 512;
}

// Address range: 0x26da87 - 0x26da8c
int64_t function_26da87(void) {
    // 0x26da87
    return function_ffffffffcb85d349();
}

// Address range: 0x26da8e - 0x26da9c
int64_t function_26da8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x26da8e
    int64_t result; // 0x26da8e
    char * v1 = (char *)(a4 + 0x18c40a88 + result); // 0x26da8e
    unsigned char v2 = *v1; // 0x26da8e
    unsigned char v3 = v2 + (char)a3; // 0x26da8e
    *v1 = v3;
    int32_t * v4 = (int32_t *)(result - 0x4d4719cf); // 0x26da95
    *v4 = *v4 - (int32_t)result + (int32_t)(v3 < v2);
    return result;
}

// Address range: 0x26dadf - 0x26db71
int64_t function_26dadf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x26dadf
    int64_t v1; // 0x26dadf
    char * v2 = (char *)(v1 - 112); // 0x26db62
    *v2 = *v2 - (char)((int64_t)&g11 >> 8);
    int32_t v3 = *(int32_t *)(a3 + 1); // 0x26db6b
    int32_t v4 = (int32_t)v1 & -0xff01 | (int32_t)&g11 | v3; // 0x26db6b
    if (v4 >= 0 == (v4 != 0)) {
        // 0x26db0f
        return a4 + 0xd4b401e8 & 0xffffffff;
    }
    // 0x26db70
    return a4 & 0xffffffff;
}

// Address range: 0x26dbdb - 0x26dbdc
int64_t function_26dbdb(void) {
    // 0x26dbdb
    int64_t result; // 0x26dbdb
    return result;
}

// Address range: 0x26dbf0 - 0x26dc04
int64_t function_26dbf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x26dbf0
    int64_t v1; // 0x26dbf0
    int32_t v2 = *(int32_t *)(a4 + 26) * (int32_t)v1; // 0x26dbf0
    int32_t * v3 = (int32_t *)(a1 - 0xae3fc70 + 2 * v1); // 0x26dbf5
    *v3 = *v3 + (int32_t)v1;
    return (v2 + 24) % 256 | v2 & -256;
}

// Address range: 0x26dc08 - 0x26dc54
int64_t function_26dc08(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x26dc08
    int64_t v1; // 0x26dc08
    int32_t * v2 = (int32_t *)(v1 + 4 * v1); // 0x26dc0b
    *v2 = *v2 + (int32_t)v1;
    int32_t * v3 = (int32_t *)(v1 + 0x1b0cf8a7); // 0x26dc18
    *v3 = *v3 + (int32_t)v1;
    int64_t v4 = unknown_ffffffffdc99b926(); // 0x26dc20
    unsigned char v5 = (char)v4 + 25; // 0x26dc26
    int64_t v6 = v4 & -256 | (int64_t)v5; // 0x26dc26
    *(int32_t *)0x810e57d01e83a01 = (int32_t)v6;
    int128_t v7 = (int128_t)*(int64_t *)0x20fd96a; // 0x26dc31
    int64_t v8 = v6; // 0x26dc39
    if (v5 != 0 && -104 * v7 == -0x680000000000000000 * v7 >> 64) {
        v8 = function_26dbdb();
    }
    uint64_t v9 = v8 + 205; // 0x26dc3d
    int64_t result = v9 % 256 | v8 & -256; // 0x26dc3d
    *(char *)a1 = (char)v9;
    char * v10 = (char *)result; // 0x26dc49
    int64_t v11; // 0x26dc08
    *v10 = *(char *)&v11 & (char)(a4 / 256) & *v10;
    return result;
}

// Address range: 0x26dc83 - 0x26dcb0
int64_t function_26dc83(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 - 17); // 0x26dc84
    int64_t v2; // 0x26dc83
    *v1 = *v1 + (char)((uint64_t)v2 / 256);
    uint32_t v3 = (int32_t)v2 >> 31; // 0x26dc87
    unsigned char v4 = *(char *)(int64_t)v3; // 0x26dc8a
    int64_t v5; // 0x26dc83
    *(char *)a1 = *(char *)&v5;
    bool v6; // 0x26dc83
    int64_t v7 = v6 ? -1 : 1; // 0x26dc8c
    int64_t v8 = unknown_2899ec94(v7 + a1, v7 + a2, v3, 256 * (int64_t)v4 | a4 & -0xff01); // 0x26dc8e
    int64_t v9 = v8 & -256 | (int64_t)__asm_in(-48); // 0x26dc96
    *(int32_t *)v9 = (int32_t)v9;
    *(int64_t *)v9 = v9;
    char * v10 = (char *)a5; // 0x26dca7
    unsigned char v11 = *v10; // 0x26dca7
    *v10 = v11 / 2 | 128 * v11;
    __asm_int1();
    return function_ffffffff83ddde98();
}

// Address range: 0x26dcf5 - 0x26dcf6
int64_t function_26dcf5(int64_t a1) {
    // 0x26dcf5
    int64_t result; // 0x26dcf5
    return result;
}

// Address range: 0x26dd0e - 0x26dd4c
int64_t function_26dd0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x26dd0e
    int64_t result; // 0x26dd0e
    bool v1; // 0x26dd0e
    if (v1) {
        int64_t * v2 = (int64_t *)(result + 0xd3d07b); // 0x26dd45
        *v2 = *v2 + a5;
        return result;
    }
    // 0x26dd10
    return result;
}

// Address range: 0x26de5e - 0x26de61
int64_t function_26de5e(int64_t a1) {
    // 0x26de5e
    int64_t result; // 0x26de5e
    return result;
}

// Address range: 0x26de73 - 0x26deee
int64_t function_26de73(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a3;
    __asm_outsd((int16_t)a3, (int32_t)a2);
    int64_t v2 = unknown_ffffffffc8d3297a(); // 0x26de74
    int64_t v3; // 0x26de73
    *(char *)a2 = (char)v3 + (char)a2;
    int32_t * v4 = (int32_t *)(a4 + 0x13922c7d); // 0x26de7e
    *v4 = *v4 + (int32_t)a1;
    char * v5 = (char *)(v2 | a4 / 256 % 256); // 0x26de84
    *v5 = *v5 + 1;
    bool v6; // 0x26de73
    int64_t v7 = v6 ? -1 : 1; // 0x26de90
    int64_t v8 = a2; // 0x26de8b
    int64_t v9 = a4; // 0x26de8b
    int32_t v10 = v3; // 0x26de8b
    int64_t v11 = a1; // 0x26de8b
    int64_t v12 = 0xf93a0c6b; // 0x26de8b
    int64_t result; // 0x26de73
    while (true) {
      lab_0x26de90:
        // 0x26de90
        *(char *)v11 = *(char *)v8;
        v11 += v7;
        v8 += v7;
        int64_t v13; // 0x26de73
        int64_t v14 = v13 - 8; // 0x26de91
        *(int64_t *)v14 = v12;
        int32_t * v15 = (int32_t *)v8; // 0x26de94
        uint32_t v16 = *v15; // 0x26de94
        uint32_t v17 = v16 + v10 - (int32_t)v12; // 0x26de94
        *v15 = v17;
        int64_t v18 = unknown_662afaa1(v11, v8); // 0x26de96
        int32_t v19 = v14;
        int64_t v20 = v9; // 0x26de9c
        int64_t v21; // 0x26de73
        int64_t v22 = v21; // 0x26de9c
        int64_t v23 = (v18 + 163 + (int64_t)(v17 < v16)) % 256 | v18 & -256; // 0x26de9c
        while (true) {
            int64_t v24 = v22;
            int32_t * v25 = (int32_t *)v23; // 0x26dea1
            *v25 = *v25 + (int32_t)v1;
            int64_t v26 = v20; // 0x26dea5
            int64_t v27 = v23 | 58; // 0x26dea5
            int64_t v28; // 0x26deb1
            while (true) {
              lab_0x26deaa:
                // 0x26deaa
                result = v27;
                int32_t * v29 = (int32_t *)(v1 + 0x14b5a11d); // 0x26deaa
                int32_t v30 = *v29 + (int32_t)v11; // 0x26deaa
                *v29 = v30;
                *(char *)v11 = __asm_insb((int16_t)v1);
                v28 = v26 - 1;
                if (v28 != 0 && v30 != 0) {
                    // break (via goto) -> 0x26dee9
                    goto lab_0x26dee9;
                }
                // 0x26deb3
                v9 = v28;
                v21 = v24;
                v13 = v14;
                v10 = -0x17fcfdb9;
                v12 = 0x991701e8;
                if (-(int32_t)result < 0) {
                    goto lab_0x26de90;
                } else {
                    // 0x26debd
                    v26 = v28;
                    v27 = 0x991701e8;
                    if (*(int32_t *)&v1 >= 0xffffffab) {
                        // break -> 0x26dec2
                        break;
                    }
                    goto lab_0x26deaa;
                }
            }
            char v31 = *(char *)((v24 + 0x991701e8 & 0xffffffff) + 121); // 0x26dec4
            v22 = 256 * (int64_t)(v31 | (char)(v24 / 256)) | v24 & -0xff01;
            unknown_ffffffff946d5fd0();
            int32_t * v32 = (int32_t *)(v22 - 0x44ef0408); // 0x26decf
            *v32 = *v32 - v19;
            v20 = v28;
            v23 = unknown_7ca5ffdb() ^ 45;
        }
    }
  lab_0x26dee9:;
    char * v33 = (char *)result; // 0x26dee9
    *v33 = *v33 + (char)result;
    int32_t * v34 = (int32_t *)result; // 0x26deec
    *v34 = *v34 + (int32_t)result;
    return result;
}

// Address range: 0x26df4c - 0x26df55
int64_t function_26df4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_ffffffffb996a452(a1, a2, a3, a4, a5); // 0x26df4c
    int64_t v1; // 0x26df4c
    int32_t * v2 = (int32_t *)(v1 + a4); // 0x26df51
    bool v3; // 0x26df4c
    *v2 = (int32_t)v3 + (int32_t)a2 + *v2;
    return result;
}

// Address range: 0x26dfea - 0x26e060
int64_t function_26dfea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_10fae1f0(); // 0x26dfea
    if (a4 != 1) {
        // 0x26e05e
        return __asm_hlt(0, v1 & 0xffffffff);
    }
    // 0x26dff6
    abort();
    // UNREACHABLE
}

// Address range: 0x26e07e - 0x26e083
int64_t function_26e07e(void) {
    // 0x26e07e
    return function_d726ae6();
}

// Address range: 0x26e10a - 0x26e10f
int64_t function_26e10a(void) {
    // 0x26e10a
    return function_4fc95f6c();
}

// Address range: 0x26e145 - 0x26e14b
int64_t function_26e145(void) {
    // 0x26e145
    int64_t result; // 0x26e145
    return result;
}

// Address range: 0x26e171 - 0x26e174
int64_t function_26e171(int64_t a1) {
    // 0x26e171
    int64_t result; // 0x26e171
    return result;
}

// Address range: 0x26e1ba - 0x26e1bb
int64_t function_26e1ba(void) {
    // 0x26e1ba
    int64_t result; // 0x26e1ba
    return result;
}

// Address range: 0x26e1ca - 0x26e1cb
int64_t function_26e1ca(int64_t a1) {
    // 0x26e1ca
    int64_t result; // 0x26e1ca
    return result;
}

// Address range: 0x26e1fb - 0x26e20f
int64_t function_26e1fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_7fd2501(); // 0x26e1fb
    int32_t * v2 = (int32_t *)(a4 - 8); // 0x26e209
    int64_t v3; // 0x26e1fb
    *v2 = *v2 + (int32_t)v3;
    return v1 + 0x3866ee3a & 0xffffffff;
}

// Address range: 0x26e20f - 0x26e211
int64_t function_26e20f(void) {
    // 0x26e20f
    int64_t result; // 0x26e20f
    return result;
}

// Address range: 0x26e21d - 0x26e21f
int64_t function_26e21d(void) {
    // 0x26e21d
    return function_26e1ba();
}

// Address range: 0x26e271 - 0x26e272
int64_t function_26e271(void) {
    // 0x26e271
    int64_t result; // 0x26e271
    return result;
}

// Address range: 0x26e28b - 0x26e28e
int64_t function_26e28b(int64_t a1) {
    // 0x26e28b
    int64_t result; // 0x26e28b
    return result;
}

// Address range: 0x26e291 - 0x26e2a4
int64_t function_26e291(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 - 105); // 0x26e291
    int64_t v2; // 0x26e291
    *v1 = *v1 + (int32_t)v2;
    int64_t v3; // 0x26e291
    int64_t result = (int64_t)(0x7d63573a * *(int32_t *)&v3); // 0x26e2a0
    if ((int32_t)v2 == 0x78352a86) {
        result = function_26e271();
    }
    // 0x26e2a2
    return result;
}

// Address range: 0x26e2af - 0x26e2b2
int64_t function_26e2af(void) {
    // 0x26e2af
    int64_t result; // 0x26e2af
    return result;
}

// Address range: 0x26e2ca - 0x26e2d4
int64_t function_26e2ca(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x26e2ca
    int64_t v1; // 0x26e2ca
    *(char *)a2 = (char)(v1 | a4 / 256);
    return v1 + 0x33d4a55e & 0xffffffff;
}

// Address range: 0x26e312 - 0x26e313
int64_t function_26e312(void) {
    // 0x26e312
    int64_t result; // 0x26e312
    return result;
}

// Address range: 0x26e31f - 0x26e3b5
int64_t function_26e31f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a5;
    int64_t v3 = unknown_3d8a4a25(); // 0x26e31f
    int64_t v4; // 0x26e31f
    uint32_t v5 = (int32_t)v4;
    uint32_t v6 = v5 + (int32_t)v4; // 0x26e324
    *(int32_t *)a3 = v6;
    int64_t v7 = v2; // 0x26e329
    unsigned char v8 = (char)((v6 < v5 ? 31 : 30) + v3); // 0x26e330
    int64_t v9; // 0x26e31f
    *(char *)a3 = *(char *)&v9 + v8;
    char v10 = v8 - 18; // 0x26e332
    int64_t v11 = v3 & -256 | (int64_t)v10; // 0x26e334
    if (v10 >= 0) {
        v11 = function_26e312();
    }
    // 0x26e336
    v2 = v11;
    v9 = v11;
    int64_t result2 = unknown_41d2d53f(); // 0x26e338
    if (v8 >= 18 && v10 != 0) {
        int32_t * v12 = (int32_t *)(a4 + 0x38ab29bf); // 0x26e343
        *v12 = *v12 + (int32_t)(result2 ^ v4);
        __asm_outsb((int16_t)v9, *(char *)&v1);
        v2 = a4;
        unknown_7543f55();
        int32_t * v13 = (int32_t *)v9; // 0x26e354
        *v13 = *v13 + (int32_t)v7;
        int64_t result = (int64_t)&v2; // 0x26e356
        *(char *)-0x2b9160fdfffe1741 = (char)result;
        return result;
    }
    int64_t v14 = a4 - 1; // 0x26e3b3
    if (v14 == 0) {
        // 0x26e3b5
        return result2;
    }
    char v15 = *(char *)&v1;
    uint64_t v16 = v14;
    unknown_ca13ca0();
    *(int64_t *)0x5f01e891 = 0x555b9c1a;
    int64_t v17 = (256 * (int64_t)(v15 & (char)(v16 / 256)) | v16 & -0xff01) - 1; // 0x26e3b3
    int64_t result3 = unknown_722b63ad(); // 0x26e3b3
    while (v17 != 0) {
        // 0x26e39a
        v16 = v17;
        unknown_ca13ca0();
        *(int64_t *)0x5f01e891 = 0x555b9c1a;
        v17 = (256 * (int64_t)(v15 & (char)(v16 / 256)) | v16 & -0xff01) - 1;
        result3 = unknown_722b63ad();
    }
    // 0x26e3b5
    return result3;
}

// Address range: 0x26e3d8 - 0x26e3de
int64_t function_26e3d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x26e3d8
    *(int32_t *)a4 = 0;
    int64_t v1; // 0x26e3d8
    *(int32_t *)a2 = *(int32_t *)&v1 ^ (int32_t)a4;
    int64_t result; // 0x26e3d8
    return result;
}

// Address range: 0x26e404 - 0x26e409
int64_t function_26e404(void) {
    // 0x26e404
    int64_t v1; // 0x26e404
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x26e409 - 0x26e410
int64_t function_26e409(int64_t a1) {
    // 0x26e409
    float80_t v1; // 0x26e409
    *(int32_t *)a1 = (int32_t)v1;
    return function_910f0df();
}

// Address range: 0x26e410 - 0x26e41d
int64_t function_26e410(int64_t a1) {
    // 0x26e410
    return unknown_14151618() & -256 | 19;
}

// Address range: 0x26e436 - 0x26e437
int64_t function_26e436(int64_t a1) {
    // 0x26e436
    int64_t result; // 0x26e436
    return result;
}

// Address range: 0x26e43b - 0x26e443
int64_t function_26e43b(void) {
    // 0x26e43b
    int64_t result; // 0x26e43b
    float80_t v1; // 0x26e43b
    *(int32_t *)(result + 0x1e83e11) = (int32_t)v1;
    return result;
}

// Address range: 0x26e458 - 0x26e46f
int64_t function_26e458(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_ffffffff9d75f365(); // 0x26e45f
    int64_t v1; // 0x26e458
    int32_t * v2 = (int32_t *)(result - 0x186cfe63 + 2 * v1); // 0x26e464
    *v2 = *v2 + (int32_t)v1;
    return result;
}

// Address range: 0x26e46f - 0x26e481
int64_t function_26e46f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x26e46f
    int64_t v1; // 0x26e46f
    int32_t * v2 = (int32_t *)((2 * v1 & 0xffffff00 | (int64_t)__asm_in(7)) - 115); // 0x26e476
    *v2 = *v2 + (int32_t)a2;
    return function_75ffe669();
}

// Address range: 0x26e4a2 - 0x26e4a3
int64_t function_26e4a2(void) {
    // 0x26e4a2
    int64_t result; // 0x26e4a2
    return result;
}

// Address range: 0x26e4ca - 0x26e4cc
int64_t function_26e4ca(int32_t a1) {
    // 0x26e4ca
    int64_t result; // 0x26e4ca
    return result;
}

// Address range: 0x26e4f1 - 0x26e4f3
int64_t function_26e4f1(void) {
    // 0x26e4f1
    int64_t v1; // 0x26e4f1
    return function_26e4f9(v1, v1, v1, v1);
}

// Address range: 0x26e4f5 - 0x26e4f9
int64_t function_26e4f5(void) {
    // 0x26e4f5
    int64_t result; // 0x26e4f5
    return result;
}

// Address range: 0x26e4f9 - 0x26e586
int64_t function_26e4f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x26e4f9
    int64_t v1; // 0x26e4f9
    int64_t v2 = v1;
    int64_t v3 = a2;
    bool v4; // 0x26e4f9
    if (v4) {
        // 0x26e4fb
        return v2 & -0xff01 | (int64_t)&g20;
    }
    int32_t v5; // 0x26e4f9
    if (v4) {
        // 0x26e538
        v5 = v1;
    } else {
        int32_t * v6 = (int32_t *)(v1 - 0x3c74e52a); // 0x26e53d
        int32_t v7 = *v6; // 0x26e53d
        int32_t v8 = v1;
        int32_t v9 = v7 + v8; // 0x26e53d
        *v6 = v9;
        if (v9 < 0 == ((v9 ^ v7) & (v9 ^ v8)) < 0) {
            // 0x26e546
            *(int32_t *)a1 = (int32_t)v2;
            return (v2 + v1 / 256) % 256 | v2 & -256;
        }
        // 0x26e583
        *(char *)a1 = *(char *)&v3;
        v5 = v8;
    }
    int32_t * v10 = (int32_t *)(a4 - 84); // 0x26e577
    *v10 = *v10 + v5;
    return v2 & -256 | (int64_t)*(char *)0x52e23a05;
}

// Address range: 0x26e596 - 0x26e597
int64_t function_26e596(int64_t a1) {
    // 0x26e596
    int64_t result; // 0x26e596
    return result;
}

// Address range: 0x26e5c9 - 0x26e5ce
int64_t function_26e5c9(int64_t a1) {
    // 0x26e5c9
    int64_t result; // 0x26e5c9
    return result;
}

// Address range: 0x4a6a5e - 0x4a6a81
int64_t function_4a6a5e(void) {
    // 0x4a6a5e
    int64_t v1; // 0x4a6a5e
    function_49e770(v1, v1, v1, v1, v1, v1);
    function_49a730(v1, 2, 86);
    return function_4a4ecf();
}

// Address range: 0x4a6a81 - 0x4a6a8e
int64_t function_4a6a81(void) {
    // 0x4a6a81
    return function_4a5ed4();
}

// Address range: 0x4a6a8e - 0x4a6ac1
int64_t function_4a6a8e(void) {
    // 0x4a6a8e
    int64_t v1; // 0x4a6a8e
    function_49e770(v1, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g2, (int64_t)"server has no certificate", v1);
    return function_4a61e0();
}

// Address range: 0x4a6ac1 - 0x4a6ae8
int64_t function_4a6ac1(int32_t a1) {
    // 0x4a6ac1
    int64_t v1; // 0x4a6ac1
    if (*(int32_t *)(v1 + 12) != 1) {
        function_4a67e8();
    }
    if (a1 != 0) {
        function_4a67e8();
    }
    // 0x4a6ae3
    return function_4a5810();
}

// Address range: 0x4a6af0 - 0x4a6b77
int64_t function_4a6af0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4a6af0
    if (*(char *)(a1 + 372) % 2 == 0) {
        // 0x4a6b59
        return 0xffff8f00;
    }
    int64_t * v1 = (int64_t *)(a1 + 384); // 0x4a6b1a
    free((int64_t *)*v1);
    int32_t size = a3; // 0x4a6b31
    int64_t * mem = calloc(1, size); // 0x4a6b31
    *v1 = (int64_t)mem;
    int64_t result = 0xffff8100; // 0x4a6b40
    if (mem != NULL) {
        // 0x4a6b42
        memcpy(mem, (int64_t *)a2, size);
        *(int64_t *)(a1 + 392) = a3;
        result = 0;
    }
    // 0x4a6b59
    return result;
}

// Address range: 0x4a6b80 - 0x4a6b96
int64_t function_4a6b80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4a6b80
    *(int64_t *)(a1 + 136) = a2;
    *(int64_t *)(a1 + 144) = a3;
    *(int64_t *)(a1 + 152) = a4;
    int64_t result; // 0x4a6b80
    return result;
}

// Address range: 0x4a6ba0 - 0x4a6ccc
int64_t function_4a6ba0(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 8); // 0x4a6bc8
    uint32_t v2 = *v1; // 0x4a6bc8
    int64_t result; // 0x4a6ba0
    if (v2 == 16) {
        // 0x4a6c60
        return result;
    }
    int64_t * v3 = (int64_t *)(a1 + 96); // 0x4a6bd6
    if (*v3 == 0) {
        // 0x4a6c60
        return result;
    }
    // 0x4a6be1
    function_49e770(a1, 2, (int64_t)"/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g33, (int64_t)"server state: %d", (int64_t)v2);
    int64_t v4 = function_496540(a1); // 0x4a6c03
    if ((int32_t)v4 != 0) {
        // 0x4a6c60
        return v4 & 0xffffffff;
    }
    // 0x4a6c0e
    if ((*(char *)(a1 + 372) & 2) != 0) {
        // 0x4a6c1a
        if (*(char *)(*v3 + (int64_t)&g5) == 1) {
            int64_t v5 = function_49a910(a1); // 0x4a6cbb
            if ((int32_t)v5 != 0) {
                // 0x4a6c60
                return v5 & 0xffffffff;
            }
        }
    }
    uint32_t v6 = *v1; // 0x4a6c2b
    int64_t v7 = v6; // 0x4a6c2b
    if (v6 < 19) {
        int32_t v8 = *(int32_t *)(4 * v7 + (int64_t)&g7); // 0x4a6caa
        return (int64_t)v8 + (int64_t)&g7;
    }
    // 0x4a6c35
    function_49e770(a1, 1, (int64_t)"/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g35, (int64_t)"invalid state %d", v7);
    // 0x4a6c60
    return 0xffff8f00;
}

// Address range: 0x4a6cd0 - 0x4a6d5e
int64_t function_4a6cd0(void) {
    // 0x4a6cd0
    int64_t v1; // 0x4a6cd0
    function_49e770(v1, 2, (int64_t)"/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g27, (int64_t)"=> write server hello done", v1);
    *(int64_t *)(v1 + 344) = 4;
    *(int32_t *)(v1 + 336) = 22;
    *(char *)*(int64_t *)(v1 + 328) = 14;
    int32_t * v2 = (int32_t *)(v1 + 8); // 0x4a6d14
    *v2 = *v2 + 1;
    if ((*(char *)(v1 + 372) & 2) != 0) {
        function_4a7cbe();
    }
    // 0x4a6d25
    if ((int32_t)function_498d40(v1) != 0) {
        function_4a7bd0();
    }
    int64_t result = function_49e770(v1, 2, (int64_t)"/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g28, (int64_t)"<= write server hello done", v1); // 0x4a6d54
    return result;
}

// Address range: 0x4a6d60 - 0x4a6d6f
int64_t function_4a6d60(void) {
    // 0x4a6d60
    int64_t v1; // 0x4a6d60
    return function_49dd10(v1);
}

// Address range: 0x4a6d70 - 0x4a6d7d
int64_t function_4a6d70(void) {
    // 0x4a6d70
    int64_t v1; // 0x4a6d70
    return function_498440(v1);
}

// Address range: 0x4a6d80 - 0x4a6d8a
int64_t function_4a6d80(void) {
    // 0x4a6d80
    int64_t result; // 0x4a6d80
    return result;
}

// Address range: 0x4a6d90 - 0x4a6dbe
int64_t function_4a6d90(void) {
    // 0x4a6d90
    int64_t v1; // 0x4a6d90
    int64_t result = function_49e770(v1, 2, (int64_t)"/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g34, (int64_t)"handshake: done", v1); // 0x4a6dad
    *(int32_t *)(v1 + 8) = 15;
    return result;
}

// Address range: 0x4a6dc0 - 0x4a6dcf
int64_t function_4a6dc0(void) {
    // 0x4a6dc0
    int64_t v1; // 0x4a6dc0
    return function_4a3d40(v1);
}

// Address range: 0x4a6dd0 - 0x4a6ff1
int64_t function_4a6dd0(void) {
    // 0x4a6dd0
    int64_t v1; // 0x4a6dd0
    int64_t * v2 = (int64_t *)(v1 + 328); // 0x4a6df2
    function_49e770(v1, 2, (int64_t)"/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g21, (int64_t)"=> write certificate request", v1);
    int64_t * v3 = (int64_t *)(v1 + 96); // 0x4a6e03
    int32_t * v4 = (int32_t *)(v1 + 8); // 0x4a6e07
    *v4 = *v4 + 1;
    int32_t v5 = *(int32_t *)(*v3 + (int64_t)&g3); // 0x4a6e0b
    if (v5 == 3) {
        function_4a7ccb();
    }
    uint32_t v6 = *(int32_t *)(*(int64_t *)*(int64_t *)(v1 + 128) + 24); // 0x4a6e1a
    int64_t v7 = v6; // 0x4a6e27
    if ((v6 & -3) == 5) {
        v7 = function_4a7b70();
    }
    int64_t v8 = v7; // 0x4a6e30
    if ((int32_t)v7 == 6) {
        v8 = function_4a7b70();
    }
    int64_t v9 = v8; // 0x4a6e39
    if ((int32_t)v8 == 8) {
        v9 = function_4a7b70();
    }
    // 0x4a6e3f
    if ((int32_t)v9 == 11) {
        function_4a7b70();
    }
    if (v5 == 0) {
        function_4a7b70();
    }
    int64_t v10 = *v2; // 0x4a6e50
    *(char *)(v10 + 5) = 1;
    *(char *)(v10 + 6) = 64;
    *(char *)(v10 + 4) = 2;
    if (*(int32_t *)(v1 + 24) == 3) {
        function_4a816d();
    }
    int64_t v11 = *(int64_t *)(*v3 + (int64_t)&g4); // 0x4a6e93
    if (v11 == 0) {
        function_4a837b();
    }
    // 0x4a6ea3
    if (*(int32_t *)(v11 + 48) == 0) {
        function_4a838e();
    }
    int64_t v12 = v10 + 9; // 0x4a6e8f
    uint64_t v13 = *v2 + (int64_t)"le"; // 0x4a6eaf
    uint64_t v14 = *(int64_t *)(v11 + 136); // 0x4a6eb6
    if (v13 < v12) {
        function_4a7d79();
    }
    int64_t v15 = v13 - v12; // 0x4a6ed0
    int64_t v16 = v15; // 0x4a6ed6
    if (v14 > v15) {
        v16 = function_4a7d79();
    }
    int64_t v17 = v14 + 2; // 0x4a6edc
    int64_t v18 = 0; // 0x4a6ee6
    int64_t v19 = v11; // 0x4a6ee6
    if (v16 < v17) {
        // 0x4a6ee8
        return function_4a7d7c();
    }
    *(char *)(v12 + 1) = (char)v14;
    v18 += v17;
    *(char *)v12 = (char)(v14 / 256);
    int64_t v20 = *(int64_t *)(v19 + 144); // 0x4a6f40
    int64_t v21 = v12 + 2; // 0x4a6f47
    int64_t v22 = v14 + v21; // 0x4a6f4e
    memcpy((int64_t *)v21, (int64_t *)v20, (int32_t)v14);
    function_49e960(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g22, "requested DN", v21, v14);
    v19 += (int64_t)&g1;
    while (v19 != 0) {
        // 0x4a6ef0
        if (*(int32_t *)(v19 + 48) == 0) {
            // break -> 0x4a6f90
            break;
        }
        uint64_t v23 = *(int64_t *)(v19 + 136); // 0x4a6f01
        if (v13 < v22) {
            function_4a7d7c();
        }
        int64_t v24 = v13 - v22; // 0x4a6f13
        int64_t v25 = v24; // 0x4a6f19
        if (v23 > v24) {
            v25 = function_4a7d7c();
        }
        int64_t v26 = v23 + 2; // 0x4a6f1f
        if (v25 < v26) {
            function_4a7d7c();
        }
        *(char *)(v22 + 1) = (char)v23;
        v18 += v26;
        *(char *)v22 = (char)(v23 / 256);
        v20 = *(int64_t *)(v19 + 144);
        v21 = v22 + 2;
        v22 = v23 + v21;
        memcpy((int64_t *)v21, (int64_t *)v20, (int32_t)v23);
        function_49e960(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g22, "requested DN", v21, v23);
        v19 += (int64_t)&g1;
    }
    // 0x4a6f90
    *(int32_t *)(v1 + 336) = 22;
    *(int64_t *)(v1 + 344) = v22 - v10;
    *(char *)*v2 = 13;
    *(char *)(*v2 + 7) = (char)(v18 / 256);
    *(char *)(*v2 + 8) = (char)v18;
    return function_498d40(v1);
}

// Address range: 0x4a6ff8 - 0x4a7004
int64_t function_4a6ff8(void) {
    // 0x4a6ff8
    int64_t result; // 0x4a6ff8
    *(int32_t *)(result + 8) = 1;
    return result;
}

// Address range: 0x4a7008 - 0x4a7017
int64_t function_4a7008(void) {
    // 0x4a7008
    int64_t v1; // 0x4a7008
    return function_4a4be0(v1);
}

// Address range: 0x4a7020 - 0x4a713d
int64_t function_4a7020(void) {
    // 0x4a7020
    int64_t v1; // 0x4a7020
    function_49e770(v1, 2, (int64_t)"/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g29, (int64_t)"=> parse client key exchange", v1);
    if ((int32_t)function_49d220(v1) != 0) {
        function_4a7d08();
    }
    // 0x4a705e
    if (*(int32_t *)(v1 + 216) != 22) {
        function_4a8410();
    }
    // 0x4a709c
    if (*(char *)*(int64_t *)(v1 + 200) != 16) {
        function_4a806c();
    }
    uint32_t v2 = *(int32_t *)(*(int64_t *)*(int64_t *)(v1 + 128) + 24); // 0x4a70a5
    int64_t v3 = v2; // 0x4a70ad
    if (v2 == 2) {
        v3 = function_4a7fa1();
    }
    int64_t v4 = v3; // 0x4a70b9
    if ((int32_t)v3 < 5) {
        v4 = function_4a7c00();
    }
    int64_t v5 = v4; // 0x4a70c2
    if ((int32_t)v4 == 9) {
        v5 = function_4a7c00();
    }
    int64_t v6 = v5; // 0x4a70cb
    if ((int32_t)v5 == 10) {
        v6 = function_4a7c00();
    }
    int64_t v7 = v6; // 0x4a70d4
    if ((int32_t)v6 == 5) {
        v7 = function_4a82e3();
    }
    int64_t v8 = v7; // 0x4a70dd
    if ((int32_t)v7 == 7) {
        v8 = function_4a8396();
    }
    int64_t v9 = v8; // 0x4a70e6
    if ((int32_t)v8 == 6) {
        v9 = function_4a8449();
    }
    int32_t v10 = v9;
    int32_t v11 = v10; // 0x4a70f0
    if (v10 == 8) {
        v11 = function_4a84d3();
    }
    // 0x4a70f6
    if (v11 != 1) {
        function_4a861d();
    }
    // 0x4a70ff
    if ((int32_t)function_4a48f0(v1) != 0) {
        function_4a8421();
    }
    int64_t v12 = function_495700(v1); // 0x4a7119
    int64_t result = v12; // 0x4a7122
    if ((int32_t)v12 != 0) {
        result = function_4a7ce0();
    }
    int32_t * v13 = (int32_t *)(v1 + 8); // 0x4a7128
    *v13 = *v13 + 1;
    return result;
}

// Address range: 0x4a7140 - 0x4a72fe
int64_t function_4a7140(void) {
    // 0x4a7140
    int64_t v1; // 0x4a7140
    function_49e770(v1, 2, (int64_t)"/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g30, (int64_t)"=> parse certificate verify", v1);
    uint32_t v2 = *(int32_t *)(*(int64_t *)*(int64_t *)(v1 + 128) + 24); // 0x4a716c
    int64_t v3 = v2; // 0x4a7179
    if ((v2 & -3) == 5) {
        v3 = function_4a7b88();
    }
    int64_t v4 = v3; // 0x4a7182
    if ((int32_t)v3 == 8) {
        v4 = function_4a7b88();
    }
    int64_t v5 = v4; // 0x4a718b
    if ((int32_t)v4 == 6) {
        v5 = function_4a7b88();
    }
    // 0x4a7191
    if ((int32_t)v5 == 11) {
        function_4a7b88();
    }
    int64_t * v6 = (int64_t *)(v1 + 88); // 0x4a719a
    if (*(int64_t *)(*v6 + 104) == 0) {
        function_4a7b88();
    }
    if ((int32_t)function_49baf0(v1) != 0) {
        function_4a8044();
    }
    int32_t v7 = function_49b370(v1);
    while (v7 == -0x6680) {
        // 0x4a71b0
        if ((int32_t)function_49baf0(v1) != 0) {
            function_4a8044();
        }
        // 0x4a71c2
        v7 = function_49b370(v1);
    }
    if (v7 != 0) {
        function_4a8222();
    }
    int32_t * v8 = (int32_t *)(v1 + 8); // 0x4a71db
    *v8 = *v8 + 1;
    if (*(int32_t *)(v1 + 216) != 22) {
        function_4a857d();
    }
    int64_t * v9 = (int64_t *)(v1 + 200); // 0x4a71ec
    if (*(char *)*v9 != 15) {
        function_4a857d();
    }
    char v10 = *(char *)(v1 + 372); // 0x4a71ff
    if (*(int32_t *)(v1 + 24) == 3) {
        function_4a80c8();
    }
    // 0x4a722d
    if ((int32_t)function_4c4450(*(int64_t *)(*v6 + 104) + 328, 4) == 0) {
        function_4a82cb();
    }
    uint64_t v11 = (v10 & 2) == 0 ? 6 : 14; // 0x4a7212
    uint64_t v12 = *(int64_t *)(v1 + 272); // 0x4a7268
    if (v12 < v11) {
        function_4a8804();
    }
    int64_t v13 = *v9; // 0x4a7278
    int64_t v14 = v13 + ((v10 & 2) == 0 ? 4 : 12);
    unsigned char v15 = *(char *)v14; // 0x4a7285
    int64_t v16 = 256 * (int64_t)v15 | (int64_t)*(char *)(v14 + 1); // 0x4a728d
    int64_t v17 = v13; // 0x4a7299
    if (v12 != v16 + v11) {
        function_4a824a();
        v17 = *v9;
    }
    int64_t v18 = *(int64_t *)(*v6 + 104); // 0x4a72c8
    int64_t v19; // bp+112, 0x4a7140
    int64_t v20 = function_4c4470(v18 + 328, 4, (int64_t)&v19, 20, v17 + v11, v16); // 0x4a72d6
    if ((int32_t)v20 != 0) {
        function_4a81fa();
    }
    // 0x4a72e5
    return function_496860(v1);
}

// Address range: 0x4a7300 - 0x4a730f
int64_t function_4a7300(void) {
    // 0x4a7300
    int64_t v1; // 0x4a7300
    return function_49daf0(v1);
}

// Address range: 0x4a7310 - 0x4a731f
int64_t function_4a7310(void) {
    // 0x4a7310
    int64_t v1; // 0x4a7310
    return function_49d8b0(v1);
}

// Address range: 0x4a7320 - 0x4a745a
int64_t function_4a7320(int64_t a1) {
    // 0x4a7320
    int64_t v1; // 0x4a7320
    int64_t * v2 = (int64_t *)(v1 + 96); // 0x4a7320
    if (*(int32_t *)(*v2 + (int64_t)&g25) == 0) {
        function_4a7bb8();
    }
    // 0x4a7332
    function_49e770(v1, 2, (int64_t)"/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g31, (int64_t)"=> write new session ticket", v1);
    int64_t * v3 = (int64_t *)(v1 + 328); // 0x4a7354
    *(int32_t *)(v1 + 336) = 22;
    *(char *)*v3 = 4;
    if ((int32_t)v1 != 0) {
        function_4a7da3();
    }
    uint32_t v4 = (int32_t)a1; // 0x4a73ae
    *(char *)(*v3 + 4) = (char)(v4 / 0x1000000);
    *(char *)(*v3 + 5) = (char)(v4 / 0x10000);
    *(char *)(*v3 + 6) = (char)(v4 / 256);
    *(char *)(*v3 + 7) = (char)a1;
    char v5; // 0x4a7320
    *(char *)(*v3 + 8) = v5 >> 7;
    *(int64_t *)(v1 + 344) = (int64_t)v5 + 10;
    *(int32_t *)(*v2 + (int64_t)&g25) = 0;
    int64_t v6 = function_498d40(v1); // 0x4a7417
    int64_t result = function_49e8b0(v1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g32, "mbedtls_ssl_write_record", v6 & 0xffffffff); // 0x4a7450
    return result;
}

// Address range: 0x4a7460 - 0x4a746f
int64_t function_4a7460(void) {
    // 0x4a7460
    int64_t v1; // 0x4a7460
    return function_49a050(v1);
}

// Address range: 0x4a74ca - 0x4a74cf
int64_t function_4a74ca(void) {
    // 0x4a74ca
    int64_t v1; // 0x4a74ca
    int64_t v2 = v1;
    bool v3; // 0x4a74ca
    return (v2 + 137 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x4a75ab - 0x4a75ad
int64_t function_4a75ab(void) {
    // 0x4a75ab
    int64_t v1; // 0x4a75ab
    return function_4a75b5(v1, v1, v1, v1);
}

// Address range: 0x4a75ae - 0x4a75b5
int64_t function_4a75ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4a75ae
    int64_t result; // 0x4a75ae
    char * v1 = (char *)(result - 119); // 0x4a75ae
    char v2 = a4; // 0x4a75ae
    *v1 = *v1 + v2;
    char * v3 = (char *)(a4 - 117); // 0x4a75b2
    *v3 = *v3 | v2;
    return result;
}

// Address range: 0x4a75b5 - 0x4a7a5b
int64_t function_4a75b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4a75b5
    int64_t v1; // 0x4a75b5
    char * v2 = (char *)(v1 - 119); // 0x4a75b6
    unsigned char v3 = *v2; // 0x4a75b6
    char v4 = a4; // 0x4a75b6
    unsigned char v5 = v3 + v4; // 0x4a75b6
    bool v6; // 0x4a75b5
    unsigned char v7 = v5 + (char)v6; // 0x4a75b6
    bool v8 = v6 ? v7 <= v3 : v5 < v3; // 0x4a75b6
    *v2 = v7;
    char * v9 = (char *)(a4 - 117); // 0x4a75ba
    unsigned char v10 = *v9; // 0x4a75ba
    unsigned char v11 = v10 + v4; // 0x4a75ba
    unsigned char v12 = v11 + (char)v8; // 0x4a75ba
    bool v13 = v8 ? v12 <= v10 : v11 < v10; // 0x4a75ba
    *v9 = v12;
    unsigned char v14 = *v2; // 0x4a75be
    char v15 = v13; // 0x4a75be
    unsigned char v16 = v15 + v4; // 0x4a75be
    char v17 = v14 - v16; // 0x4a75be
    bool v18 = v13 ? v16 != -1 | v14 < v17 - v15 : v14 < v16; // 0x4a75be
    *v2 = v17;
    char * v19 = (char *)(v1 - 115); // 0x4a75c2
    *v19 = *v19 - v4 + (char)v18;
    function_49e960(a1, a2, (char *)a3, (int64_t *)a4, (char *)v1, v1, 32);
    int64_t * v20 = (int64_t *)(v1 + 96); // 0x4a75d7
    if (*(int32_t *)(*v20 + (int64_t)&g23) != 0) {
        function_4a7d30();
    }
    int64_t * v21 = (int64_t *)(v1 + 88); // 0x4a75ef
    int64_t v22 = *v21; // 0x4a75ef
    int64_t v23 = v22; // 0x4a75f6
    if (*(int32_t *)(v1 + 12) == 0) {
        // 0x4a75f8
        v23 = v22;
        if (*(int64_t *)(v22 + 16) != 0) {
            int64_t v24 = *(int64_t *)(v1 + 64); // 0x4a7602
            v23 = v22;
            if (v24 != 0) {
                if ((int32_t)v24 == 0) {
                    function_4a8740();
                }
                // 0x4a761c
                if (*(int32_t *)(*v20 + (int64_t)&g23) != 0) {
                    function_4a7d30();
                }
                // 0x4a7630
                v23 = *v21;
            }
        }
    }
    int32_t * v25 = (int32_t *)(v1 + 8); // 0x4a7634
    *v25 = *v25 + 1;
    *(int64_t *)v23 = (int64_t)time(NULL);
    int64_t v26 = *v21; // 0x4a7647
    if (*(int32_t *)(*v20 + (int64_t)&g25) == 0) {
        function_4a8098();
    }
    // 0x4a7659
    *(int64_t *)(v26 + 16) = 0;
    *(int64_t *)(v26 + 24) = 0;
    *(int64_t *)(v26 + 32) = 0;
    *(int64_t *)(v26 + 40) = 0;
    *(int64_t *)(v26 + 48) = 0;
    int64_t v27 = v1 + 39; // 0x4a7688
    *(char *)(v1 + 38) = (char)*(int64_t *)(*v21 + 16);
    int64_t v28 = *v21; // 0x4a769c
    int64_t v29 = *(int64_t *)(v28 + 16); // 0x4a76a0
    memcpy((int64_t *)v27, (int64_t *)(v28 + 24), (int32_t)v29);
    int64_t v30 = *(int64_t *)(*v21 + 16) + v27; // 0x4a76cf
    function_49e770(v1, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g15, (int64_t)"server hello, session id len.: %d", 0);
    function_49e960(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g16, "server hello, session id", v27, 0);
    int32_t v31 = *(int32_t *)(*v20 + (int64_t)&g23); // 0x4a772b
    int64_t v32 = v31 != 0 ? (int64_t)&g6 : (int64_t)"no"; // 0x4a773c
    function_49e770(v1, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g17, (int64_t)"%s session has been resumed", v32);
    *(char *)v30 = (char)(*(int32_t *)(*v21 + 8) / 256);
    *(char *)(v30 + 1) = (char)*(int32_t *)(*v21 + 8);
    *(char *)(v30 + 2) = (char)*(int32_t *)(*v21 + 12);
    int64_t v33 = function_49f070(*(int32_t *)(*v21 + 8)); // 0x4a7772
    function_49e770(v1, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g18, (int64_t)"server hello, chosen ciphersuite: %s", v33);
    uint32_t v34 = *(int32_t *)(*v21 + 12); // 0x4a77bb
    function_49e770(v1, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g19, (int64_t)"server hello, compress alg.: 0x%02X", (int64_t)v34);
    if (*(int32_t *)(v1 + 400) == 1) {
        function_4a8276();
    }
    int64_t v35 = *v21; // 0x4a77e2
    int64_t v36 = 0; // 0x4a77ef
    int64_t v37 = v35; // 0x4a77ef
    if (*(char *)(v35 + 140) != 0) {
        // 0x4a77f1
        function_49e770(v1, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g12, (int64_t)"server hello, max_fragment_length extension", 2);
        *(char *)(v30 + 5) = 0;
        *(char *)(v30 + 6) = 1;
        *(char *)(v30 + 7) = 0;
        *(char *)(v30 + 8) = 1;
        *(char *)(v30 + 9) = *(char *)(*v21 + 140);
        v37 = *v21;
        v36 = 5;
    }
    uint32_t v38 = *(int32_t *)(v37 + 144); // 0x4a7842
    int64_t v39 = v38; // 0x4a7842
    int64_t v40 = 0; // 0x4a7851
    int64_t result = v37; // 0x4a7851
    if (v38 != 0) {
        int64_t v41 = v30 + 5 + v36; // 0x4a7853
        function_49e770(v1, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g8, (int64_t)"server hello, adding truncated hmac extension", v39);
        *(char *)v41 = 0;
        *(char *)(v41 + 1) = 4;
        *(char *)(v41 + 2) = 0;
        *(char *)(v41 + 3) = 0;
        result = *v21;
        v40 = 4;
    }
    // 0x4a7896
    if (*(int32_t *)(result + 148) != 0) {
        // 0x4a78a5
        if (*(int32_t *)(v1 + 24) != 0) {
            // 0x4a7a5b
            return result;
        }
    }
    int64_t v42 = v40 + v36; // 0x4a789d
    int64_t v43 = *v20; // 0x4a78b5
    int64_t v44 = 0; // 0x4a78c3
    int64_t v45 = v43; // 0x4a78c3
    if (*(int32_t *)(v43 + (int64_t)&g26) != 0) {
        // 0x4a78c5
        v44 = 0;
        v45 = v43;
        if (*(int32_t *)(v1 + 24) != 0) {
            int64_t v46 = v30 + 5 + v42; // 0x4a78cc
            function_49e770(v1, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g9, (int64_t)"server hello, adding extended master secret extension", v39);
            *(char *)v46 = 0;
            *(char *)(v46 + 1) = 23;
            *(char *)(v46 + 2) = 0;
            *(char *)(v46 + 3) = 0;
            v44 = 4;
            v45 = *v20;
        }
    }
    int64_t v47 = v30 + 5 + v44 + v42;
    int64_t v48 = 0; // 0x4a791d
    int64_t v49 = v45; // 0x4a791d
    if (*(int32_t *)(v45 + (int64_t)&g25) != 0) {
        // 0x4a791f
        function_49e770(v1, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g10, (int64_t)"server hello, adding session ticket extension", 0);
        *(char *)v47 = 0;
        *(char *)(v47 + 1) = 35;
        *(char *)(v47 + 2) = 0;
        *(char *)(v47 + 3) = 0;
        v49 = *v20;
        v48 = 4;
    }
    int64_t v50 = v47 + v48;
    int64_t v51 = 0; // 0x4a7970
    int64_t v52 = v49; // 0x4a7970
    if (*(char *)(v49 + (int64_t)&g24) % 2 != 0) {
        // 0x4a7972
        v52 = function_49e770(v1, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g13, (int64_t)"server hello, supported_point_formats extension", v48);
        *(char *)v50 = 0;
        *(char *)(v50 + 1) = 11;
        *(char *)(v50 + 2) = 0;
        *(char *)(v50 + 3) = 2;
        *(char *)(v50 + 4) = 1;
        *(char *)(v50 + 5) = 0;
        v51 = 6;
    }
    int64_t * str = (int64_t *)(v1 + 376); // 0x4a79c1
    int64_t dest_mem = v52; // 0x4a79ce
    if (*str != 0) {
        int64_t v53 = v51 + v50; // 0x4a79c9
        function_49e770(v1, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g14, (int64_t)"server hello, adding alpn extension", v48);
        *(char *)v53 = 0;
        *(char *)(v53 + 1) = 16;
        int32_t len = strlen((char *)*str); // 0x4a7a06
        int64_t v54 = len; // 0x4a7a06
        *(char *)(v53 + 2) = (char)((v54 + 3) / 256);
        char v55 = len;
        *(char *)(v53 + 3) = v55 + 3;
        *(char *)(v53 + 4) = (char)((v54 + 1) / 256);
        *(char *)(v53 + 6) = v55;
        *(char *)(v53 + 5) = v55 + 1;
        int64_t v56 = *str; // 0x4a7a45
        dest_mem = (int64_t)memcpy((int64_t *)(v53 + 7), (int64_t *)v56, len);
    }
    // 0x4a7a5b
    return dest_mem;
}
