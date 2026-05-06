/*
 * Targeted RetDec C for native executable gap queue batch 1485.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x133ba5-0x133da5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x20ee40-0x20f040 rank=- name=- kind=- bytes=- uncovered=-
 *   0x20f040-0x20f240 rank=- name=- kind=- bytes=- uncovered=-
 *   0x20f440-0x20f640 rank=- name=- kind=- bytes=- uncovered=-
 *   0x20f640-0x20f840 rank=- name=- kind=- bytes=- uncovered=-
 *   0x20f840-0x20fa39 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d2107-0x2d2307 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d2307-0x2d2507 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d2507-0x2d2707 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d2707-0x2d2907 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d2907-0x2d2b07 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d2b07-0x2d2cf4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x482e30-0x483030 rank=- name=- kind=- bytes=- uncovered=-
 *   0x483030-0x483230 rank=- name=- kind=- bytes=- uncovered=-
 *   0x483230-0x483330 rank=- name=- kind=- bytes=- uncovered=-
 *   0x483430-0x483630 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_133b6f();
int64_t function_133ba5(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_133beb(void);
int64_t function_133c16(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_133cd6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_133d0a(void);
int64_t function_133d20(void);
int64_t function_133d3f(void);
int64_t function_133d49(int64_t a1);
int64_t function_133d6e(void);
int64_t function_20edeb();
int64_t function_20ee20();
int64_t function_20ee40(int64_t a1, int64_t a2, int64_t a3);
int64_t function_20ee58(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_20eed9(void);
int64_t function_20eedc(void);
int64_t function_20eee3(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_20ef1c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_20ef4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20ef74(void);
int64_t function_20ef7f(int64_t a1, int64_t a2);
int64_t function_20efa9(int64_t a1, int64_t a2);
int64_t function_20efca(void);
int64_t function_20efe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20f046(int64_t a1);
int64_t function_20f0da(int64_t a1);
int64_t function_20f1a6(void);
int64_t function_20f440(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20f457(int64_t a1, int64_t a2, int64_t a3);
int64_t function_20f470(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20f4fd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_20f50a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20f56e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20f594(void);
int64_t function_20f59d(void);
int64_t function_20f5bd(void);
int64_t function_20f5cd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_20f63d(int64_t a1);
int64_t function_20f64c(int64_t a1);
int64_t function_20f71f(void);
int64_t function_20f76d(void);
int64_t function_20f7a4(int64_t a1);
int64_t function_20f7b4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_20f7e9(void);
int64_t function_20f805(void);
int64_t function_20f81a(void);
int64_t function_20f85c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20f879(void);
int64_t function_20f886(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20f8e8(int64_t a1);
int64_t function_20f90a(int64_t a1, int64_t a2);
int64_t function_20f995(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d2107(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d224c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2d2389(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d24ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d25f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d2782(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2d28d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d2a79(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d2ba0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c1c3292();
int64_t function_461ff0f9();
int64_t function_482dd3();
int64_t function_482dfb();
int64_t function_482e30(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_482e75(void);
int64_t function_482eb1(void);
int64_t function_482eb8(void);
int64_t function_482f1d(void);
int64_t function_482f39(int64_t a1, int64_t a2, int64_t a3);
int64_t function_482f70(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_482f85(void);
int64_t function_482f9f(void);
int64_t function_482fdc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_483018(int64_t a1);
int64_t function_483066(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4830a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_48315c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_483193(void);
int64_t function_48319d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4831ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48321d(int64_t a1);
int64_t function_48321e(int64_t result);
int64_t function_48322a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48322d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_48325e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_483278(void);
int64_t function_4832ba(void);
int64_t function_4832e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_483414();
int64_t function_483430(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_483612(void);
int64_t function_483621(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6bd561a5();
int64_t function_7c84ee05();
int64_t function_82cbe70();
int64_t function_cf3c7();
int64_t function_ffffffff84463d4f();
int64_t function_ffffffff8908609a();
int64_t function_ffffffff9f931326();
int64_t function_ffffffffa0acfe0c();
int64_t function_ffffffffa2c58264();
int64_t function_ffffffffb35e445b();
int64_t function_ffffffffcb88b084();
int64_t function_ffffffffdc7c6b00();
int64_t unknown_15df59b();
int64_t unknown_162cf803();
int64_t unknown_1810aa50();
int64_t unknown_219c3c85();
int64_t unknown_3a8787ca();
int64_t unknown_3cdf52e2();
int64_t unknown_4714d5a7();
int64_t unknown_4c6ea243();
int64_t unknown_557d342d();
int64_t unknown_63c18eae();
int64_t unknown_7022f49a();
int64_t unknown_7645b8c7();
int64_t unknown_7822ef7c();
int64_t unknown_ffffffff84359103();
int64_t unknown_ffffffff88f42438();
int64_t unknown_ffffffff8e41038b();
int64_t unknown_ffffffff9a354c43();
int64_t unknown_ffffffff9c4434c8();
int64_t unknown_ffffffffa2f2e559();
int64_t unknown_ffffffffad591725();
int64_t unknown_ffffffffb3d089c6();
int64_t unknown_ffffffffbef9d271();
int64_t unknown_ffffffffc911cf6a();
int64_t unknown_ffffffffc9e9c96c();
int64_t unknown_ffffffffd8f87b58();
int64_t unknown_ffffffffdb2232d3();
int64_t unknown_ffffffffded7530e();
int64_t unknown_ffffffffe28d956b();
int64_t unknown_ffffffffe428d122();

// Address range: 0x133ba5 - 0x133bc6
int64_t function_133ba5(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x133ba5
    unknown_63c18eae();
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    unsigned char v1 = *(char *)-0x45eadb9d + (char)(a3 / 256); // 0x133bae
    uint32_t v2 = *(int32_t *)((256 * (int64_t)v1 | a3 & -0xff01) - 24); // 0x133bba
    int64_t result = v2; // 0x133bbe
    if (v1 == 0) {
        result = function_133b6f();
    }
    // 0x133bc0
    return result;
}

// Address range: 0x133beb - 0x133bf0
int64_t function_133beb(void) {
    // 0x133beb
    return function_ffffffff84463d4f();
}

// Address range: 0x133c16 - 0x133cd6
int64_t function_133c16(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    // 0x133c16
    int64_t v1; // 0x133c16
    *(char *)-0x62e99305d83dc8eb = (char)v1;
    *(int32_t *)a1 = (int32_t)unknown_ffffffffad591725();
    bool v2; // 0x133c16
    int64_t v3 = v2 ? -4 : 4; // 0x133c2a
    int64_t v4 = v3 + a1; // 0x133c2a
    char * v5 = (char *)(a4 - 0x38fe172d); // 0x133c2b
    *v5 = *v5 + (char)a3;
    char * v6 = (char *)(v1 - 0x2150c39d); // 0x133c36
    *v6 = *v6 + (char)(a3 / 256);
    uint64_t v7; // 0x133c16
    unsigned char v8 = llvm_ctpop_i8((char)(*(int32_t *)&v7 - *(int32_t *)v4)); // 0x133c3c
    int64_t v9 = v4 + v3; // 0x133c3c
    int64_t result = unknown_ffffffff9a354c43(v9, v3 + (int64_t)*(int32_t *)&v7); // 0x133c3d
    if (v8 % 2 != 0) {
        // 0x133cbc
        return result;
    }
    uint64_t v10 = (0x100000000 * result >> 32) * (0x100000000 * v9 >> 32); // 0x133c46
    int64_t v11 = v10 & 0xffffffff; // 0x133c46
    v7 = v10 / 0x100000000;
    char * v12 = (char *)v11; // 0x133c48
    unsigned char v13 = *v12; // 0x133c48
    unsigned char v14 = (char)v10; // 0x133c48
    *v12 = v13 - v14;
    uint64_t result2 = unknown_1810aa50(); // 0x133c4a
    if (v11 < (int64_t)v13) {
        char * v15 = (char *)(v9 - 0x2fff4f69); // 0x133c51
        *v15 = *v15 + (char)(result2 / 256);
        return result2;
    }
    int64_t v16 = unknown_3a8787ca(); // 0x133cc4
    char * v17 = (char *)(v16 + 109); // 0x133cc9
    uint64_t v18 = a4 / 256; // 0x133cc9
    *v17 = (char)(v13 < v14) + (char)v18 + *v17;
    return (v16 + v18) % 256 | v16 & -256;
}

// Address range: 0x133cd6 - 0x133cdf
int64_t function_133cd6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x133cd6
    return function_ffffffffcb88b084();
}

// Address range: 0x133d0a - 0x133d0b
int64_t function_133d0a(void) {
    // 0x133d0a
    int64_t result; // 0x133d0a
    return result;
}

// Address range: 0x133d20 - 0x133d22
int64_t function_133d20(void) {
    // 0x133d20
    return function_133d0a();
}

// Address range: 0x133d3f - 0x133d44
int64_t function_133d3f(void) {
    // 0x133d3f
    return function_7c84ee05();
}

// Address range: 0x133d49 - 0x133d59
int64_t function_133d49(int64_t a1) {
    // 0x133d49
    int64_t v1; // 0x133d49
    int32_t v2 = *(int32_t *)(v1 + 24); // 0x133d49
    bool v3; // 0x133d49
    int64_t v4 = v3 ? -1 : 1; // 0x133d4c
    int64_t v5 = v4 + a1; // 0x133d4c
    *(char *)v5 = (char)(v2 + (int32_t)v1);
    char v6 = *(char *)-0x232716ab; // 0x133d4e
    *(char *)-0x232716ab = v6 + (char)((uint64_t)v1 / 256);
    return function_ffffffffa2c58264(v5 + v4);
}

// Address range: 0x133d6e - 0x133d74
int64_t function_133d6e(void) {
    // 0x133d6e
    int64_t result; // 0x133d6e
    return result;
}

// Address range: 0x20ee40 - 0x20ee44
int64_t function_20ee40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x20ee40
    bool v1; // 0x20ee40
    if (v1) {
        function_20edeb();
    }
    // 0x20ee42
    return a3 & 0xffffffff;
}

// Address range: 0x20ee58 - 0x20ee90
int64_t function_20ee58(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x20ee58
    int64_t v1; // 0x20ee58
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)v1;
    *(char *)a1 = __asm_insb((int16_t)a3);
    __readfsbyte(unknown_ffffffffc911cf6a() + 112);
    int64_t v3; // 0x20ee58
    *(int32_t *)a1 = *(int32_t *)&v3 & (int32_t)v1;
    char v4 = 76 * (char)v2; // 0x20ee87
    char v5 = a3; // 0x20ee87
    char v6 = v4 + v5; // 0x20ee87
    if (((v6 ^ v4) & (v6 ^ v5)) < 0) {
        function_20ee20();
    }
    // 0x20ee8b
    return function_3c1c3292();
}

// Address range: 0x20eed9 - 0x20eeda
int64_t function_20eed9(void) {
    // 0x20eed9
    int64_t result; // 0x20eed9
    return result;
}

// Address range: 0x20eedc - 0x20eee0
int64_t function_20eedc(void) {
    // 0x20eedc
    int64_t result; // 0x20eedc
    return result;
}

// Address range: 0x20eee3 - 0x20ef19
int64_t function_20eee3(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x20eee3
    if (llvm_ctpop_i8(0) % 2 == 0) {
        function_20eed9();
    }
    int64_t v1 = a1 - 4; // 0x20eeec
    int64_t v2 = 2 * a2 & 0xfffffffe; // 0x20eef1
    char v3 = *(char *)(a1 - 85 + a3) + (char)(a3 / 256); // 0x20eef7
    int64_t v4; // 0x20eee3
    if (v3 < 1) {
        function_20ef4c(v1, v2, 256 * (int64_t)v3 | a3 & -0xff01, v4, (int64_t)&g5);
    }
    // 0x20eefd
    unknown_ffffffff84359103();
    int32_t v5 = __asm_in(-24); // 0x20ef04
    int32_t * v6 = (int32_t *)(8 * v4 + v2); // 0x20ef07
    *v6 = *v6 + v5;
    int64_t result = function_20ef7f(v1, v2); // 0x20ef0e
    *(int32_t *)0x4c3e8aa0f86201e8 = (int32_t)result;
    return result;
}

// Address range: 0x20ef1c - 0x20ef49
int64_t function_20ef1c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x20ef1c
    unknown_ffffffffe428d122();
    unknown_557d342d();
    int32_t * v1 = (int32_t *)(a4 + 71); // 0x20ef2e
    *v1 = (int32_t)(((char)(a3 / 256) ^ -8) < 72) + (int32_t)a2 + *v1;
    unknown_ffffffff88f42438();
    unknown_4c6ea243();
    int64_t v2; // 0x20ef1c
    return (int64_t)&v2;
}

// Address range: 0x20ef4c - 0x20ef73
int64_t function_20ef4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20ef4c
    int64_t v1; // 0x20ef4c
    int64_t v2 = v1;
    bool v3; // 0x20ef4c
    *(char *)v2 = (char)v2 + (char)a4 + (char)v3;
    int64_t v4 = unknown_ffffffffa2f2e559(); // 0x20ef53
    char v5 = v4; // 0x20ef5a
    *(char *)a1 = v5;
    *(char *)-0x1708ab57 = *(char *)-0x1708ab57 | v5;
    int32_t * v6 = (int32_t *)(v1 - 72); // 0x20ef61
    *v6 = *v6 + (int32_t)v4;
    return unknown_ffffffffbef9d271((v3 ? -1 : 1) + a1);
}

// Address range: 0x20ef74 - 0x20ef7e
int64_t function_20ef74(void) {
    // 0x20ef74
    return unknown_7822ef7c();
}

// Address range: 0x20ef7f - 0x20ef97
int64_t function_20ef7f(int64_t a1, int64_t a2) {
    uint64_t v1 = unknown_219c3c85(); // 0x20ef7f
    char v2 = *(char *)(a2 + 0x35f04ef0); // 0x20ef84
    int64_t result = 256 * (int64_t)(v2 ^ (char)(v1 / 256)) | v1 & -0xff01; // 0x20ef84
    float80_t v3; // 0x20ef7f
    *(int16_t *)a1 = (int16_t)v3;
    int32_t * v4 = (int32_t *)result; // 0x20ef8c
    *v4 = *v4 & (int32_t)result;
    char * v5 = (char *)result; // 0x20ef8e
    *v5 = *v5 - 24;
    int64_t v6; // 0x20ef7f
    int32_t * v7 = (int32_t *)(v6 - 0x11fefe00); // 0x20ef91
    *v7 = *v7 + (int32_t)v6;
    return result;
}

// Address range: 0x20efa9 - 0x20efb3
int64_t function_20efa9(int64_t a1, int64_t a2) {
    // 0x20efa9
    float80_t v1; // 0x20efa9
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2; // 0x20efa9
    return (256 * v2 | -0xff01) & v2;
}

// Address range: 0x20efca - 0x20efcb
int64_t function_20efca(void) {
    // 0x20efca
    int64_t result; // 0x20efca
    return result;
}

// Address range: 0x20efe0 - 0x20f008
int64_t function_20efe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x20efe0
    *(int32_t *)a2 = 2 * (int32_t)v2;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    *(int32_t *)a3 = *(int32_t *)&v1 + (int32_t)a2;
    if (*(int32_t *)(v2 + 67) == -65) {
        function_20efca();
    }
    char * v3 = (char *)(v1 - 92); // 0x20eff9
    *v3 = *v3 | (char)(v2 / 256);
    return function_ffffffff8908609a();
}

// Address range: 0x20f046 - 0x20f049
int64_t function_20f046(int64_t a1) {
    // 0x20f046
    int64_t result; // 0x20f046
    return result;
}

// Address range: 0x20f0da - 0x20f0db
int64_t function_20f0da(int64_t a1) {
    // 0x20f0da
    int64_t result; // 0x20f0da
    return result;
}

// Address range: 0x20f1a6 - 0x20f1ab
int64_t function_20f1a6(void) {
    // 0x20f1a6
    return function_6bd561a5();
}

// Address range: 0x20f440 - 0x20f452
int64_t function_20f440(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20f440
    int64_t v1; // 0x20f440
    *(int16_t *)(a4 + 0x553a01e8) = (int16_t)v1;
    int64_t v2; // 0x20f440
    int32_t v3 = *(int32_t *)&v2; // 0x20f44f
    bool v4; // 0x20f440
    uint32_t result = v4 | v4 ? (int32_t)v1 & -0xff01 | (int32_t)&g4 : v3; // 0x20f44f
    return result;
}

// Address range: 0x20f457 - 0x20f45d
int64_t function_20f457(int64_t a1, int64_t a2, int64_t a3) {
    // 0x20f457
    int64_t v1; // 0x20f457
    int32_t * v2 = (int32_t *)(v1 - 22); // 0x20f459
    *v2 = *v2 + (int32_t)a2;
    return (v1 | v1) & 0xffffffff;
}

// Address range: 0x20f470 - 0x20f4d7
int64_t function_20f470(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20f470
    float80_t v1; // 0x20f470
    *(int16_t *)(a4 + 0x1e8dad5) = (int16_t)v1;
    int64_t v2; // 0x20f470
    int64_t v3 = v2 & 0xd0300093; // 0x20f479
    uint32_t v4 = *(int32_t *)v3 + (int32_t)v3; // 0x20f47e
    char * v5 = (char *)(int64_t)v4; // 0x20f480
    unsigned char v6 = *v5; // 0x20f480
    *v5 = v6 / 128 | 2 * v6;
    unknown_ffffffff8e41038b(a5);
    if ((char)v4 >= 161) {
        int64_t v7 = unknown_7022f49a(); // 0x20f494
        return (v7 + 88) % 256 | v7 & -256;
    }
    // 0x20f4a1
    unknown_4714d5a7();
    bool v8; // 0x20f470
    int64_t v9 = *(int64_t *)(v2 + a2 + (int64_t)v8 & 0xffffffff); // 0x20f4a7
    int32_t * v10 = (int32_t *)(8 * a5 - 40 + v9); // 0x20f4b1
    *v10 = *v10 + (int32_t)a5;
    while (true) {
        // 0x20f4ba
        unknown_7645b8c7();
        __readgsbyte(0x9a9803d);
    }
}

// Address range: 0x20f4fd - 0x20f509
int64_t function_20f4fd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x20f4fd
    int64_t v1; // 0x20f4fd
    *(char *)a1 = (char)v1;
    bool v2; // 0x20f4fd
    int64_t v3 = v2 ? -1 : 1; // 0x20f4fd
    unknown_ffffffffd8f87b58(v3 + a1, v3 + a2);
    return function_82cbe70();
}

// Address range: 0x20f50a - 0x20f512
int64_t function_20f50a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20f50a
    int64_t v1; // 0x20f50a
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a4;
    return unknown_15df59b(a1, a2, a3, a4);
}

// Address range: 0x20f56e - 0x20f576
int64_t function_20f56e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20f56e
    int64_t result; // 0x20f56e
    char * v1 = (char *)(a1 - 0x64e0fec3 + 8 * result); // 0x20f56e
    *v1 = *v1 + (char)a4;
    return result;
}

// Address range: 0x20f594 - 0x20f595
int64_t function_20f594(void) {
    // 0x20f594
    int64_t result; // 0x20f594
    return result;
}

// Address range: 0x20f59d - 0x20f5a8
int64_t function_20f59d(void) {
    // 0x20f59d
    int64_t v1; // 0x20f59d
    return v1 & -256 | (int64_t)*(char *)-0x42f88089bb439150;
}

// Address range: 0x20f5bd - 0x20f5cd
int64_t function_20f5bd(void) {
    // 0x20f5bd
    int64_t v1; // 0x20f5bd
    float80_t v2; // 0x20f5bd
    *(int64_t *)(v1 - 79) = (int64_t)v2;
    uint64_t v3 = unknown_ffffffffb3d089c6(); // 0x20f5c0
    char * v4 = (char *)(v3 + 0x1e81600); // 0x20f5c5
    *v4 = *v4 + (char)(v3 / 256);
    return __asm_iretd();
}

// Address range: 0x20f5cd - 0x20f60f
int64_t function_20f5cd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x20f5cd
    unknown_ffffffffdb2232d3();
    char v1 = *(char *)(a3 + 123); // 0x20f5d4
    bool v2; // 0x20f5cd
    int64_t v3 = a3 & -256 | (int64_t)((char)v2 + (char)a3 - v1); // 0x20f5d4
    *(char *)-0x1ffe175bc6c582f5 = (char)unknown_3cdf52e2();
    *(int32_t *)a1 = __asm_insd((int16_t)v3);
    int16_t v4; // 0x20f5cd
    char * v5 = (char *)((int64_t)v4 - 0x7dc5d840); // 0x20f5f5
    int64_t v6; // 0x20f5cd
    *v5 = *v5 + ((int32_t)v6 > 0xfa7bf638 ? 10 : 9);
    unknown_162cf803();
    int32_t * v7 = (int32_t *)(a1 - 0x13498d73); // 0x20f602
    *v7 = *v7 + (int32_t)v3;
    unknown_ffffffffded7530e();
    return function_20f594();
}

// Address range: 0x20f63d - 0x20f640
int64_t function_20f63d(int64_t a1) {
    // 0x20f63d
    int64_t result; // 0x20f63d
    return result;
}

// Address range: 0x20f64c - 0x20f64d
int64_t function_20f64c(int64_t a1) {
    // 0x20f64c
    int64_t result; // 0x20f64c
    return result;
}

// Address range: 0x20f71f - 0x20f724
int64_t function_20f71f(void) {
    // 0x20f71f
    return function_ffffffffdc7c6b00();
}

// Address range: 0x20f76d - 0x20f76e
int64_t function_20f76d(void) {
    // 0x20f76d
    int64_t result; // 0x20f76d
    return result;
}

// Address range: 0x20f7a4 - 0x20f7a8
int64_t function_20f7a4(int64_t a1) {
    // 0x20f7a4
    return __asm_wait(a1);
}

// Address range: 0x20f7b4 - 0x20f7ce
int64_t function_20f7b4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x20f7b4
    int64_t v1; // 0x20f7b4
    char * v2 = (char *)(v1 + 0x3a926000); // 0x20f7ba
    *v2 = *v2 | (char)(a4 / 256);
    *(int32_t *)0x16f3013d006b4da9 = (int32_t)v1 | 0x683680;
    return function_461ff0f9();
}

// Address range: 0x20f7e9 - 0x20f7eb
int64_t function_20f7e9(void) {
    // 0x20f7e9
    return function_20f76d();
}

// Address range: 0x20f805 - 0x20f806
int64_t function_20f805(void) {
    // 0x20f805
    int64_t result; // 0x20f805
    return result;
}

// Address range: 0x20f81a - 0x20f81b
int64_t function_20f81a(void) {
    // 0x20f81a
    int64_t result; // 0x20f81a
    return result;
}

// Address range: 0x20f85c - 0x20f86d
int64_t function_20f85c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20f85c
    int64_t v1; // 0x20f85c
    int32_t * v2 = (int32_t *)(v1 + 0x6044b90a);
    *v2 = *v2 + (int32_t)v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x20f862
    if (v3 != 0) {
        int64_t v4; // 0x20f85c
        uint32_t v5 = *(int32_t *)&v4; // 0x20f862
        *(int32_t *)v4 = v5 >> 32 - v3 | v5 << v3;
    }
    return unknown_ffffffffc9e9c96c();
}

// Address range: 0x20f879 - 0x20f87a
int64_t function_20f879(void) {
    // 0x20f879
    int64_t result; // 0x20f879
    return result;
}

// Address range: 0x20f886 - 0x20f89c
int64_t function_20f886(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20f886
    int64_t v1; // 0x20f886
    if (-1 - (int32_t)a3 >= (int32_t)v1) {
        function_20f81a();
    }
    char v2 = a4; // 0x20f88b
    char v3 = *(char *)(8 * v1 + 24 + v1); // 0x20f88b
    if (((v2 - v3 ^ v2) & (v3 ^ v2)) < 0) {
        function_20f879();
    }
    int32_t * v4 = (int32_t *)(a2 + 0x40fff828); // 0x20f891
    *v4 = *v4 + (int32_t)a1;
    return function_ffffffffa0acfe0c();
}

// Address range: 0x20f8e8 - 0x20f8e9
int64_t function_20f8e8(int64_t a1) {
    // 0x20f8e8
    int64_t result; // 0x20f8e8
    return result;
}

// Address range: 0x20f90a - 0x20f90f
int64_t function_20f90a(int64_t a1, int64_t a2) {
    // 0x20f90a
    int64_t result; // 0x20f90a
    *(int32_t *)a1 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x20f995 - 0x20fa38
int64_t function_20f995(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20f995
    int64_t v1; // 0x20f995
    int64_t v2 = v1;
    int64_t v3 = a4;
    int32_t * v4 = (int32_t *)(v2 + a3); // 0x20f997
    uint32_t v5 = *v4; // 0x20f997
    uint32_t v6 = (int32_t)v1; // 0x20f997
    int32_t v7 = v5 - v6; // 0x20f997
    *v4 = v7;
    if (v5 < v6 || v7 == 0) {
        uint32_t v8 = (int32_t)a3; // 0x20fa13
        uint32_t v9 = *(int32_t *)((v1 & -256 | 30) + 0x5588cac7) + v8; // 0x20fa13
        uint32_t v10 = v9 + (int32_t)(v5 < v6); // 0x20fa13
        *(char *)(int64_t)v10 = (char)v3;
        int64_t v11 = v2 - (v5 < v6 ? v10 <= v8 : v9 < v8 ? 0x8b0c0bb4 : 0x8b0c0bb3); // 0x20fa1b
        char v12 = *(char *)(a2 + 0x4900013d); // 0x20fa22
        int64_t v13 = v3;
        *(char *)v13 = *(char *)&v3 - (char)v13;
        int32_t * v14 = (int32_t *)(a2 + 0x3f6e8a23 + 4 * a2); // 0x20fa2d
        *v14 = *v14 | 0x188abd8;
        return v11 & 0xffffff00 | (int64_t)(v12 | (char)v11);
    }
    // 0x20f99c
    return (v2 + 138) % 256 | v2 & -256;
}

// Address range: 0x2d2107 - 0x2d224c
int64_t function_2d2107(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d2107
    int64_t v1; // 0x2d2107
    return function_cf3c7(a1, a2, a3, a4, v1, v1, 0x2c023a);
}

// Address range: 0x2d224c - 0x2d2389
int64_t function_2d224c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2d224c
    int64_t v1; // bp-56, 0x2d224c
    v1 = (int64_t)&v1;
    return function_cf3c7(a1, a2, a3, 0x2c0464, a5, a6, 169);
}

// Address range: 0x2d2389 - 0x2d24ad
int64_t function_2d2389(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d2389
    int64_t v1; // 0x2d2389
    return function_cf3c7(a1, a2, a3, v1, v1, v1, a2);
}

// Address range: 0x2d24ad - 0x2d25f6
int64_t function_2d24ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d24ad
    int64_t v1; // 0x2d24ad
    bool v2; // 0x2d24ad
    return function_cf3c7(a1, a2, a3, a4, a5, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x2d25f6 - 0x2d2782
int64_t function_2d25f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d25f6
    int64_t v1; // bp-40, 0x2d25f6
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x2d25f6
    return function_cf3c7(a1, a2, a3, a4, v2, v2, 0x2c0b16);
}

// Address range: 0x2d2782 - 0x2d28d7
int64_t function_2d2782(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2d2782
    return function_cf3c7(a1, 0x326df1b9, a3, a4, a5, a6, 0x2c0de7);
}

// Address range: 0x2d28d7 - 0x2d2a79
int64_t function_2d28d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x73b5a2c1; // bp-48, 0x2d29c2
    int64_t v2 = (int64_t)&v1; // 0x2d29f2
    int64_t v3 = v2 + 8; // 0x2d2a4a
    v1 = *(int64_t *)v3;
    int64_t v4 = v2 - 8; // 0x2d2a5d
    int64_t * v5 = (int64_t *)v4; // 0x2d2a5d
    *v5 = a2;
    *(int64_t *)(v2 - 16) = v4;
    *v5 = v3;
    int64_t v6; // 0x2d28d7
    return function_cf3c7(a1, *v5, a3, a4, a5, v6, 0x7dbbbfd0);
}

// Address range: 0x2d2a79 - 0x2d2ba0
int64_t function_2d2a79(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d2a79
    int64_t v1; // bp-56, 0x2d2a79
    int64_t v2 = (int64_t)&v1; // 0x2d2b2c
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x2d2b46
    bool v4; // 0x2d2a79
    *v3 = 0x4000 * (int64_t)v4 | 2048 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4 | 2;
    v1 = v2;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x2d2b6e
    *v5 = 0x2c1281;
    *(int64_t *)(v2 + 40) = 0x2c1281;
    int64_t v6 = *v3; // 0x2d2b76
    *v5 = v6;
    v1 = v6;
    int64_t v7 = *(int64_t *)(v2 + 24); // 0x2d2b8c
    *v3 = v7;
    *v5 = v7;
    int64_t v8; // 0x2d2a79
    return function_cf3c7(a1, a2, a3, a4, v8, v8, v8);
}

// Address range: 0x2d2ba0 - 0x2d2cf4
int64_t function_2d2ba0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4; // bp-24, 0x2d2bf3
    int64_t * v2 = (int64_t *)(a4 - 16); // 0x2d2c1d
    int64_t v3 = *(int64_t *)(a4 + 24); // 0x2d2c41
    *v2 = v3;
    int64_t * v4 = (int64_t *)(a4 - 24); // 0x2d2c45
    *v4 = v3;
    int64_t * v5 = (int64_t *)(a4 - 32); // 0x2d2c48
    *v5 = v3;
    int64_t * v6 = (int64_t *)(a4 + 8); // 0x2d2c57
    int64_t v7 = *v6; // 0x2d2c57
    *v2 = v7;
    *v4 = 0x82060f4;
    *(int64_t *)(a4 - 40) = v3;
    *(int64_t *)(a4 - 8) = *v4;
    *v5 = a5;
    *v4 = v7;
    *v6 = v7;
    int64_t v8 = *v2; // 0x2d2cad
    *v4 = v8;
    *v5 = v8;
    *v2 = a4;
    int64_t v9; // 0x2d2ba0
    return function_cf3c7(0x2c1578, a2, a3, a4, *v5, v9, (int64_t)&v1);
}

// Address range: 0x482e30 - 0x482e5e
int64_t function_482e30(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a3;
    int64_t result; // 0x482e30
    bool v3; // 0x482e30
    if (true == !v3) {
        // 0x482e7e
        return result;
    }
    char * v4 = (char *)(result + 6); // 0x482e3d
    *v4 = 2 * *v4;
    int32_t v5 = *(int32_t *)&v1 | 66; // 0x482e42
    *(int32_t *)v1 = v5;
    int64_t v6; // 0x482e30
    if (v5 < 0) {
        v6 = function_482dd3();
    }
    int32_t v7 = *(int32_t *)&v2 & (int32_t)v2; // 0x482e47
    *(int32_t *)v2 = v7;
    int64_t v8 = v6; // 0x482e49
    if (v7 < 1) {
        v8 = function_482dfb();
    }
    int64_t v9 = unknown_ffffffff9c4434c8(); // 0x482e55
    return (v9 + 92 + (int64_t)(((int32_t)v8 & -256) < 0x214a5940)) % 256 | v9 & -256;
}

// Address range: 0x482e75 - 0x482e7e
int64_t function_482e75(void) {
    // 0x482e75
    return (int64_t)*(int32_t *)0x441a4bcdb2b0168f;
}

// Address range: 0x482eb1 - 0x482eb4
int64_t function_482eb1(void) {
    // 0x482eb1
    int64_t result; // 0x482eb1
    return result;
}

// Address range: 0x482eb8 - 0x482ebc
int64_t function_482eb8(void) {
    // 0x482eb8
    int64_t v1; // 0x482eb8
    return function_482f39(v1, v1, v1);
}

// Address range: 0x482f1d - 0x482f22
int64_t function_482f1d(void) {
    // 0x482f1d
    return function_ffffffffb35e445b();
}

// Address range: 0x482f39 - 0x482f42
int64_t function_482f39(int64_t a1, int64_t a2, int64_t a3) {
    // 0x482f39
    int64_t result; // 0x482f39
    return result;
}

// Address range: 0x482f70 - 0x482f80
int64_t function_482f70(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x482f70
    int64_t result; // 0x482f70
    char * v1 = (char *)(result + 65); // 0x482f70
    *v1 = *v1 & (char)(result / 256);
    char * v2 = (char *)(a4 + 0x2f3b0123); // 0x482f74
    *v2 = *v2 + (char)(a4 / 256);
    return result;
}

// Address range: 0x482f85 - 0x482f88
int64_t function_482f85(void) {
    // 0x482f85
    int64_t result; // 0x482f85
    return result;
}

// Address range: 0x482f9f - 0x482fa0
int64_t function_482f9f(void) {
    // 0x482f9f
    int64_t result; // 0x482f9f
    return result;
}

// Address range: 0x482fdc - 0x48300e
int64_t function_482fdc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x482fdc
    int64_t v1; // 0x482fdc
    float80_t v2; // 0x482fdc
    bool v3; // 0x482fdc
    *(int64_t *)(v1 + 0x270be410 + (int64_t)v3 & 0xffffffff ^ 121) = (int64_t)v2;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return (int64_t)(*(int32_t *)-0x2584b21a0d97d157 ^ 47);
}

// Address range: 0x483018 - 0x48301b
int64_t function_483018(int64_t a1) {
    // 0x483018
    int64_t result; // 0x483018
    return result;
}

// Address range: 0x483066 - 0x483069
int64_t function_483066(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x483066
    int64_t result; // 0x483066
    bool v1; // 0x483066
    *(int32_t *)a4 = (int32_t)result + (int32_t)a3 + (int32_t)v1;
    return result;
}

// Address range: 0x4830a3 - 0x4830e7
int64_t function_4830a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4830a3
    __asm_outsb((int16_t)a3, (char)a2);
    int64_t result; // 0x4830a3
    bool v1; // 0x4830a3
    if (v1) {
        // 0x4830a6
        return result;
    }
    // 0x4830bb
    *(int864_t *)(a4 + 0x23f1c145 & 0xffffffff) = (int864_t)__asm_fnsave();
    char * v2 = (char *)(result + 0x1cc029d7); // 0x4830c3
    *v2 = *v2 | 86;
    float80_t v3; // 0x4830a3
    *(float64_t *)(result - 32) = (float64_t)v3;
    return __asm_iretd();
}

// Address range: 0x48315c - 0x48316f
int64_t function_48315c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x48315c
    return __asm_int3();
}

// Address range: 0x483193 - 0x483194
int64_t function_483193(void) {
    // 0x483193
    int64_t result; // 0x483193
    return result;
}

// Address range: 0x48319d - 0x4831ea
int64_t function_48319d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x48319d
    int64_t v1; // 0x48319d
    uint64_t v2 = v1;
    int64_t v3 = a2;
    char v4 = *(char *)(a2 + 47); // 0x48319d
    bool v5; // 0x48319d
    int64_t v6 = 256 * (int64_t)((char)v5 + (char)(v2 / 256) - v4) | v2 & -0xff01; // 0x48319d
    __asm_out((int16_t)a3, (int32_t)v6);
    int32_t * v7 = (int32_t *)(v6 + 0x4e834feb); // 0x4831b0
    uint32_t v8 = *v7; // 0x4831b0
    *v7 = v8 / 8 | 0x20000000 * v8;
    *(int32_t *)a2 = 2 * *(int32_t *)&v3;
    int32_t v9 = *(int32_t *)(a2 + 81); // 0x4831c6
    unsigned char v10 = llvm_ctpop_i8((char)((int32_t)a3 | (int32_t)&g1 | v9)); // 0x4831c6
    int64_t v11 = v6 & -256; // 0x4831c9
    if (v10 % 2 == 0) {
        v11 = function_483193();
    }
    int32_t * v12 = (int32_t *)(a1 - 108); // 0x4831cc
    *v12 = *v12 ^ (int32_t)v1;
    return v11 & -256 | 22;
}

// Address range: 0x4831ea - 0x4831fc
int64_t function_4831ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4831ea
    int64_t v1; // 0x4831ea
    int32_t * v2 = (int32_t *)(v1 - 61); // 0x4831ea
    *v2 = *v2 / 2;
    __asm_out_134(9, (char)v1);
    float80_t v3; // 0x4831ea
    *(float64_t *)v1 = (float64_t)v3;
    return function_48321e((int64_t)&g5);
}

// Address range: 0x48321d - 0x48321e
int64_t function_48321d(int64_t a1) {
    // 0x48321d
    int64_t result; // 0x48321d
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x48321e - 0x483229
int64_t function_48321e(int64_t result) {
    // 0x48321e
    return result;
}

// Address range: 0x48322a - 0x48322d
int64_t function_48322a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x48322a
    int64_t result; // 0x48322a
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x48322d - 0x483244
int64_t function_48322d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x48322d
    int64_t v1; // 0x48322d
    *(char *)(v1 + 70) = (char)((char)(a4 / 256 & a4) != 0);
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v2 = (int64_t)*(int32_t *)(a2 + 0x7eba17cf); // 0x483234
    int64_t v3 = -22 * v2; // 0x483234
    int64_t result = a5; // 0x483241
    if ((char)(a4 / 256 & a4) == 0 || v3 != -0x1600000000 * v2 >> 32) {
        result = function_48325e(a1, a2, v3 & 0xfffffffe, a4);
    }
    // 0x483243
    return result;
}

// Address range: 0x48325e - 0x483273
int64_t function_48325e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x48325e
    int64_t v1; // 0x48325e
    int64_t v2 = v1 & 0xffffffff ^ 0xa28afa15; // 0x48325e
    return v2 & 0xffffff00 | (int64_t)(*(char *)(a1 + 55) & (char)v2);
}

// Address range: 0x483278 - 0x483279
int64_t function_483278(void) {
    // 0x483278
    int64_t result; // 0x483278
    return result;
}

// Address range: 0x4832ba - 0x4832bf
int64_t function_4832ba(void) {
    // 0x4832ba
    return function_ffffffff9f931326();
}

// Address range: 0x4832e4 - 0x48332f
int64_t function_4832e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4832e4
    int64_t v1; // 0x4832e4
    *(char *)-0x2dceccce92a3d3e9 = (char)v1;
    if ((int32_t)v1 < (int32_t)v1) {
        // 0x48332e
        return a2 & 0xffffffff;
    }
    // 0x4832f0
    return v1 + 0x6d96540e & 0xffffffff;
}

// Address range: 0x483430 - 0x48360a
int64_t function_483430(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x483430
    int64_t v1; // 0x483430
    int64_t v2 = v1;
    int64_t v3 = a3;
    int64_t result; // 0x483430
    // 0x483486
    return result;
    uint32_t v4 = (int32_t)a2;
    uint32_t v5 = (int32_t)v1; // 0x483437
    bool v6; // 0x483430
    int32_t v7 = v6; // 0x483437
    uint32_t v8 = v5 + v4; // 0x483437
    int32_t v9 = v8 + v7; // 0x483437
    bool v10 = v6 ? v9 <= v5 : v8 < v5; // 0x483437
    if (v9 != 0 && !v10) {
        // 0x48343b
        __asm_outsb((int16_t)a3, (char)a2);
        *(char *)(a1 - 92) = (char)a3;
        return (v2 + a3 / 256) % 256 | v2 & -256;
    }
    if (!v10) {
        char v11 = *(char *)(v1 + 0x574ff405) & -92; // 0x483469
        int64_t v12 = a4 & 0xffffff00 | 10; // 0x48346f
        if (llvm_ctpop_i8(v11) % 2 != 0) {
            v12 = function_483414();
        }
        // 0x483471
        result = v12;
        if (v11 != 0) {
          lab_0x483486:
            // 0x483486
            return result;
        }
        // 0x483477
        __asm_in(85);
        __asm_in(124);
        return __asm_int1() & -256 | (int64_t)__asm_in_133(-121);
    }
    int32_t v13 = v9 + v7; // 0x483437
    int64_t result2 = v2 & -0xff01 | 256 * (64 * (int64_t)(v9 == 0) | (int64_t)v10 | 128 * (int64_t)(v9 < 0) | 16 * (int64_t)(v5 % 16 + v4 % 16 + v7 > 15) | 4 * (int64_t)(llvm_ctpop_i8((char)v9) % 2 == 0)) | 512; // 0x4834b6
    __asm_out((int16_t)a3, (int32_t)result2);
    if (v9 < 0 != ((v13 ^ v5) & (v13 ^ v4)) < 0) {
        // 0x483486
        return result2;
    }
    int64_t v14 = (v6 ? -4 : 4) + a2; // 0x483512
    char * v15 = (char *)v14; // 0x483515
    char v16 = *v15 | (char)a3; // 0x483515
    *v15 = v16;
    int64_t v17 = a6; // 0x483517
    int64_t v18 = a1; // 0x483517
    if (v16 != 0) {
      lab_0x483595:;
        int64_t result3 = unknown_ffffffffe28d956b(); // 0x483599
        if ((char)v17 != 0) {
            int32_t * v19 = (int32_t *)v18; // 0x483602
            *v19 = *v19 | (int32_t)v3;
            return result3;
        }
        // 0x4835a0
        __asm_rcl(*(char *)v18);
        int64_t v20 = __asm_int3(); // 0x4835a4
        return (v20 + 200) % 256 | v20 & -256;
    }
    int64_t v21 = v6 ? -1 : 1;
    int64_t v22 = v14; // 0x48354c
    int64_t v23 = a1; // 0x48354c
    int64_t v24; // 0x483430
    int64_t v25 = (int64_t)&v24; // 0x483430
    int64_t v26 = a7; // 0x48354d
    int64_t * v27 = (int64_t *)v25; // 0x48351b
    int64_t v28 = *v27; // 0x48351b
    int64_t v29; // 0x483430
    int64_t v30 = v29 - v28; // 0x48351f
    uint64_t v31 = v30 & 0xffffffff; // 0x48351f
    uint32_t v32 = __asm_in(-73); // 0x483521
    uint64_t v33 = v26 / 256; // 0x483523
    uint64_t v34 = v31 / 256; // 0x483523
    while (v33 > v34) {
        int64_t v35 = v33 - v34; // 0x483523
        *v27 = v28;
        unsigned char v36 = *(char *)(v31 - 84) ^ (char)v30; // 0x483546
        int64_t v37 = v36; // 0x483546
        int32_t * v38 = (int32_t *)(v28 + 11); // 0x483549
        *v38 = *v38 / 2;
        *(char *)v23 = *(char *)v22;
        v23 += v21;
        v22 += v21;
        v26 = 256 * v35 & 0xff00 | v26 & -0x10000 | v37;
        *(int64_t *)(v25 - 8) = v26;
        *(int64_t *)(v25 - 16) = v3;
        char * v39 = (char *)v23; // 0x483551
        *v39 = *v39 - (char)v32;
        uint32_t v40 = *(int32_t *)(v23 + (int64_t)&g2) + v32; // 0x483553
        uint32_t v41 = v40 < v32 ? 0x7bcf7b86 : 0x7bcf7b85; // 0x483559
        uint32_t v42 = v40 - v41; // 0x483559
        int64_t v43 = v42; // 0x483559
        char * v44 = (char *)(v43 + 5); // 0x48355e
        *v44 = *v44 + v36 + (char)(v40 < v32 | v40 < v41);
        *(int64_t *)(v25 - 24) = v22;
        *(int64_t *)(v25 - 32) = v28;
        char v45 = v42; // 0x48356c
        *(char *)-0x5df79103 = *(char *)-0x5df79103 + v45;
        char * v46 = (char *)v43; // 0x483572
        *v46 = *v46 + (char)v35;
        char v47 = v45 ^ 35; // 0x483576
        int64_t v48 = 0x100000000 * v26 >> 32; // 0x483578
        int64_t v49 = -121 * v48; // 0x483578
        int64_t v50 = __asm_sti(v23); // 0x48357b
        if (v47 < 0 == (v49 != -0x7900000000 * v48 >> 32) != v47 != 0) {
            // 0x483581
            __asm_wait((int64_t)&g5);
            uint32_t v51 = *(int32_t *)&v3; // 0x483582
            uint32_t v52 = (int32_t)v23; // 0x483582
            int32_t v53 = v51 - v52; // 0x483582
            *(int32_t *)v3 = v53;
            int64_t result4 = v22 & 0xffffffff; // 0x483584
            result = result4;
            if (v53 == 0) {
                int32_t * v54 = (int32_t *)(result4 + 0x78375179); // 0x483588
                *v54 = (int32_t)(v51 < v52) - (int32_t)v49 + *v54;
                return result4;
            }
            return result;
        }
        char * v55 = (char *)v22; // 0x483515
        char v56 = *v55 | (char)v3; // 0x483515
        *v55 = v56;
        v25 = v49 & 0xffffffff;
        v17 = v50;
        v18 = v23;
        if (v56 != 0) {
            goto lab_0x483595;
        }
        v27 = (int64_t *)v25;
        v28 = *v27;
        v30 = (v30 & 0xffffff00 | v37) - v28;
        v31 = v30 & 0xffffffff;
        v32 = __asm_in(-73);
        v33 = v26 / 256;
        v34 = v31 / 256;
    }
    uint64_t v57 = (int64_t)v32; // 0x483521
    char v58 = *(char *)(8 * v1 + 90 + v57); // 0x48352e
    return 256 * (int64_t)(v58 ^ (char)(v57 / 256)) | v57 & -0xff01;
}

// Address range: 0x483612 - 0x483613
int64_t function_483612(void) {
    // 0x483612
    int64_t result; // 0x483612
    return result;
}

// Address range: 0x483621 - 0x483630
int64_t function_483621(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x483621
    int64_t v1; // 0x483621
    uint64_t v2 = v1 & 0x98117d5e | 0x67ee82a1; // 0x483623
    return v2 & 0xffffff00 | (int64_t)*(char *)(v2 % 256 + v1);
}
