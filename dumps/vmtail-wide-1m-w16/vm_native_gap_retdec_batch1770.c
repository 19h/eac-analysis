/*
 * Targeted RetDec C for native executable gap queue batch 1770.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x72e5d-0x7305d rank=- name=- kind=- bytes=- uncovered=-
 *   0x7305d-0x7325d rank=- name=- kind=- bytes=- uncovered=-
 *   0x7325d-0x7343e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d8bd6-0x3d8dd6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d8fd6-0x3d91ad rank=- name=- kind=- bytes=- uncovered=-
 *   0x505298-0x505498 rank=- name=- kind=- bytes=- uncovered=-
 *   0x505498-0x505698 rank=- name=- kind=- bytes=- uncovered=-
 *   0x505698-0x505870 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50a606-0x50a706 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50a706-0x50a906 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50a906-0x50ab00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53fda4-0x53ffa4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53ffa4-0x5401a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5401a4-0x540380 rank=- name=- kind=- bytes=- uncovered=-
 *   0x554706-0x554906 rank=- name=- kind=- bytes=- uncovered=-
 *   0x554906-0x554b00 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g36;
extern int g37;
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

int64_t function_3d8bd6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d8cdb(void);
int64_t function_3d8d0c(int64_t a1);
int64_t function_3d8d22(void);
int64_t function_3d8d34(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d8fd6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d9001(int64_t a1, int64_t a2, int64_t a3, int64_t result);
int64_t function_3d90d2(void);
int64_t function_3d90dc(void);
int64_t function_3d90e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d9112(int64_t a1, int64_t a2);
int64_t function_3d9181(int64_t a1, int64_t a2);
int64_t function_4eeb40();
int64_t function_4eeb50();
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_4f2d50();
int64_t function_4f50c0();
int64_t function_4f5150();
int64_t function_4f51e0();
int64_t function_4f5280();
int64_t function_4fd0d0();
int64_t function_5009e0();
int64_t function_505260();
int64_t function_505298(int64_t a1, int64_t a2);
int64_t function_505315(void);
int64_t function_505350(int64_t a1, int64_t a2);
int64_t function_505412(void);
int64_t function_505455(void);
int64_t function_505460(int64_t a1, int64_t a2);
int64_t function_5054c8(void);
int64_t function_505500(int64_t a1, int64_t a2);
int64_t function_5055ba(void);
int64_t function_5055f5(void);
int64_t function_505600(int64_t a1, int64_t a2);
int64_t function_5056b7(void);
int64_t function_50571a(void);
int64_t function_505720(int64_t a1, int64_t a2);
int64_t function_505816(void);
int64_t function_50585d(void);
int64_t function_50585f(void);
int64_t function_508360();
int64_t function_50a5c6();
int64_t function_50a5e0();
int64_t function_50a606(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_50a6d4(int64_t a1, int64_t a2);
int64_t function_50a700(int64_t a1, int64_t a2);
int64_t function_50a710(int64_t a1, int64_t a2, int64_t a3);
int64_t function_50a78e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_50a82e(int64_t a1, int64_t a2);
int64_t function_50a882(int64_t a1, int64_t a2, int64_t a3);
int64_t function_50a8e0(int64_t result);
int64_t function_50a8f0(int64_t result, int64_t a2);
int64_t function_50a940(int64_t a1, int64_t a2, int64_t a3);
int64_t function_50a9e4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_53fd2a();
int64_t function_53fd7a();
int64_t function_53fda4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_53fdb3(void);
int64_t function_53fdc0(int64_t result, int64_t a2, int64_t a3);
int64_t function_53fe1a(int64_t a1, int64_t a2);
int64_t function_53fe50(int64_t a1);
int64_t function_53fe70(int64_t a1, int64_t a2, int64_t a3);
int64_t function_53ff70(int64_t a1);
int64_t function_53ffa0(int64_t a1);
int64_t function_540050(int64_t result);
int64_t function_5400d0(int64_t a1);
int64_t function_540110(int64_t result);
int64_t function_540120(int64_t a1, int64_t a2);
int64_t function_540160(int64_t a1);
int64_t function_5401b0(int64_t a1, uint64_t a2);
int64_t function_540200(int64_t result);
int64_t function_540210(int64_t a1);
int64_t function_540260(int64_t a1);
int64_t function_540270(int64_t a1);
int64_t function_540280(int64_t a1);
int64_t function_540290(int64_t a1, int64_t a2);
int64_t function_5402a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5402b0(int64_t a1);
int64_t function_5402c0(int64_t a1);
int64_t function_5402d0(int64_t a1);
int64_t function_5402e0(int64_t a1, int64_t a2);
int64_t function_5402f0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_540300(int64_t result2);
int64_t function_540360(int64_t a1, int64_t a2);
int64_t function_540370(int64_t a1, int64_t a2);
int64_t function_542590();
int64_t function_54cb80();
int64_t function_54cf10();
int64_t function_54d790();
int64_t function_554706(int64_t a1, int64_t a2, int64_t a3);
int64_t function_55478e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_55482e(int64_t a1, int64_t a2);
int64_t function_554882(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5548e0(int64_t result);
int64_t function_5548f0(int64_t result, int64_t a2);
int64_t function_554940(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5549e4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_565970();
int64_t function_5659d0();
int64_t function_565f30();
int64_t function_566100();
int64_t function_566180();
int64_t function_5679b0();
int64_t function_5679e0();
int64_t function_567a10();
int64_t function_72e5d(int64_t a1);
int64_t function_72e8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_72ee4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_72f19(void);
int64_t function_72f2b(void);
int64_t function_72fdf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_73044(void);
int64_t function_730b7(void);
int64_t function_730c3(int64_t a1);
int64_t function_730cf(void);
int64_t function_730fe(void);
int64_t function_73115(void);
int64_t function_73157(void);
int64_t function_7321e(void);
int64_t function_73255(int64_t a1);
int64_t function_73275(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_73290(void);
int64_t function_732a7(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result2);
int64_t function_7333c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_733c8(uint64_t a1, uint64_t a2);
int64_t function_7ad89d92();
int64_t function_c0097df();
int64_t function_ffffffff88d0bc0f();
int64_t unknown_68f027f4();
int64_t unknown_ffffffffa58ad03d();

// Address range: 0x72e5d - 0x72e8d
int64_t function_72e5d(int64_t a1) {
    // 0x72e5d
    __readfsqword(40);
    return 0;
}

// Address range: 0x72e8d - 0x72e9b
int64_t function_72e8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result = a5 & -0xff01 | (int64_t)&g2; // 0x72e90
    int64_t v1; // 0x72e8d
    char * v2 = (char *)(4 * result - 78 + v1); // 0x72e92
    *v2 = *v2 / 2;
    return result;
}

// Address range: 0x72ee4 - 0x72eec
int64_t function_72ee4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x72ee4
    int64_t v1; // 0x72ee4
    int64_t result = (uint64_t)v1 % 256 ^ v1; // 0x72ee4
    __asm_out_133(-91, (int32_t)result);
    return result;
}

// Address range: 0x72f19 - 0x72f1b
int64_t function_72f19(void) {
    // 0x72f19
    int64_t result; // 0x72f19
    return result;
}

// Address range: 0x72f2b - 0x72f2e
int64_t function_72f2b(void) {
    // 0x72f2b
    int64_t result; // 0x72f2b
    return result;
}

// Address range: 0x72fdf - 0x72ff5
int64_t function_72fdf(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = __asm_int3(); // 0x72fec
    *(char *)result = -4;
    int32_t * v1 = (int32_t *)(result + 4); // 0x72ff0
    *v1 = *v1 | (int32_t)a3;
    return result;
}

// Address range: 0x73044 - 0x73047
int64_t function_73044(void) {
    // 0x73044
    int64_t result; // 0x73044
    return result;
}

// Address range: 0x730b7 - 0x730b8
int64_t function_730b7(void) {
    // 0x730b7
    int64_t result; // 0x730b7
    return result;
}

// Address range: 0x730c3 - 0x730c6
int64_t function_730c3(int64_t a1) {
    // 0x730c3
    int64_t result; // 0x730c3
    return result;
}

// Address range: 0x730cf - 0x730d2
int64_t function_730cf(void) {
    // 0x730cf
    int64_t result; // 0x730cf
    return result;
}

// Address range: 0x730fe - 0x73100
int64_t function_730fe(void) {
    // 0x730fe
    return function_730b7();
}

// Address range: 0x73115 - 0x73118
int64_t function_73115(void) {
    // 0x73115
    int64_t result; // 0x73115
    return result;
}

// Address range: 0x73157 - 0x73160
int64_t function_73157(void) {
    // 0x73157
    int64_t v1; // 0x73157
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x7321e - 0x7321f
int64_t function_7321e(void) {
    // 0x7321e
    int64_t result; // 0x7321e
    return result;
}

// Address range: 0x73255 - 0x73256
int64_t function_73255(int64_t a1) {
    // 0x73255
    int64_t result; // 0x73255
    return result;
}

// Address range: 0x73275 - 0x73289
int64_t function_73275(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x73275
    int64_t v1; // 0x73275
    int64_t v2 = v1 & 0x1357b537; // 0x73275
    int64_t v3 = v1 | a2;
    char * v4 = (char *)((v3 & 0xffffffff) - 119); // 0x7327c
    *v4 = *v4 + (char)v2;
    __asm_out_133(0, (int32_t)v2);
    return v3 + a3 & 0xffffffff;
}

// Address range: 0x73290 - 0x73291
int64_t function_73290(void) {
    // 0x73290
    int64_t result; // 0x73290
    return result;
}

// Address range: 0x732a7 - 0x7333b
int64_t function_732a7(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result2) {
    int64_t v1 = a2;
    int64_t v2 = __asm_hlt(); // 0x732a8
    bool v3; // 0x732a7
    if (a4 != 1 == v3) {
        v2 = function_73290();
    }
    // 0x732aa
    *(int32_t *)(a2 + 56) = (int32_t)v2;
    char * v4 = (char *)(a4 - 0x22b553db); // 0x732bb
    unsigned char v5 = *v4; // 0x732bb
    int64_t v6; // 0x732a7
    *v4 = (char)((uint64_t)v6 / 256);
    if (v3) {
        unsigned char v7 = *(char *)-0x2ecb0cfa; // 0x73300
        char v8 = v7 + v5; // 0x73300
        unsigned char v9 = llvm_ctpop_i8(v8); // 0x73300
        *(char *)-0x2ecb0cfa = v8;
        int32_t v10 = *(int32_t *)&v1; // 0x73306
        uint64_t v11 = a1 / 0x800000 % 512; // 0x7330d
        char v12 = *(char *)(0x4000 * (int64_t)v3 | 1024 * (int64_t)v3 | 512 * (int64_t)v3 | 256 * (int64_t)v3 | (int64_t)(v8 < v7) | 64 * (int64_t)(v8 == 0) | 128 * (int64_t)(v8 < 0) | 16 * (int64_t)(v7 % 16 + v5 % 16 > 15) | 4 * (int64_t)(v9 % 2 == 0) | 2048 * (int64_t)(((v8 ^ v7) & (v8 ^ v5)) < 0) | 2); // 0x73319
        *(char *)v11 = v12;
        int64_t v13 = v3 ? 0xffffffff : 1; // 0x73319
        int64_t result = (int64_t)*(int32_t *)-0x71ae4805aaefffd6; // 0x7331a
        int32_t * v14 = (int32_t *)(result - 28); // 0x73324
        *v14 = (int32_t)((char)v10 < 93) + (int32_t)(v13 + v11) + *v14;
        return result;
    }
    // 0x732c5
    *(char *)0x507334e6 = *(char *)0x507334e6 + (char)a3;
    __asm_iretd(a1);
    return result2;
}

// Address range: 0x7333c - 0x733c7
int64_t function_7333c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a3 - 110); // 0x7333c
    int64_t v2; // 0x7333c
    *v1 = *v1 & (char)v2;
    int64_t v3; // 0x7333c
    *(char *)a1 = *(char *)&v3;
    bool v4; // 0x7333c
    v3 = (v4 ? -1 : 1) + a2;
    uint32_t result = (int32_t)v2 ^ 0x5af103c9; // 0x73340
    __asm_out((int16_t)a3, result);
    if (result >= 1) {
        // 0x73349
        return function_ffffffff88d0bc0f();
    }
    int32_t * v5 = (int32_t *)(a4 - 0x3f7aefa9); // 0x733b9
    int32_t v6 = *v5; // 0x733b9
    *v5 = v6 - 1;
    if (v6 > 1) {
        // 0x733c6
        return result;
    }
    // 0x733c1
    return function_4eeb50();
}

// Address range: 0x733c8 - 0x7343e
int64_t function_733c8(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x733d6
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x733d8
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x733ea
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x733ec
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x733f7
    int64_t v6 = v3; // 0x73401
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g36); // 0x73414
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x7342c
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x3d8bd6 - 0x3d8be4
int64_t function_3d8bd6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d8bd6
    int64_t result; // 0x3d8bd6
    uint64_t v1 = result;
    *(int32_t *)a4 = (int32_t)result + (int32_t)a2;
    int32_t * v2 = (int32_t *)(v1 - 0x685a1141); // 0x3d8bda
    *v2 = *v2 - 13 + (int32_t)((char)(result / 256) < (char)(v1 / 256));
    return result;
}

// Address range: 0x3d8cdb - 0x3d8cdc
int64_t function_3d8cdb(void) {
    // 0x3d8cdb
    int64_t result; // 0x3d8cdb
    return result;
}

// Address range: 0x3d8d0c - 0x3d8d0f
int64_t function_3d8d0c(int64_t a1) {
    // 0x3d8d0c
    int64_t result; // 0x3d8d0c
    return result;
}

// Address range: 0x3d8d22 - 0x3d8d27
int64_t function_3d8d22(void) {
    // 0x3d8d22
    return function_c0097df();
}

// Address range: 0x3d8d34 - 0x3d8d94
int64_t function_3d8d34(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d8d34
    float80_t v1; // 0x3d8d34
    *(int32_t *)-0x7b85b0c8 = (int32_t)v1;
    int64_t result; // 0x3d8d34
    if ((int32_t)result > -0x50c4c781) {
        // 0x3d8d82
        *(char *)-0x170b7b77 = *(char *)-0x170b7b77 + (char)(result / 256);
        return result;
    }
    // 0x3d8d45
    *(int32_t *)a2 = (int32_t)result + (int32_t)a2;
    *(char *)(a2 + 0x7da84cf2 + a4) = (char)result;
    return function_7ad89d92();
}

// Address range: 0x3d8fd6 - 0x3d9001
int64_t function_3d8fd6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d8fd6
    int64_t v1; // 0x3d8fd6
    char * v2 = (char *)(v1 + 0x70d837); // 0x3d8fd6
    *v2 = *v2 - (char)v1;
    int32_t * v3 = (int32_t *)(v1 + 0x5d000000); // 0x3d8fe1
    *v3 = *v3 & 5;
    char * v4 = (char *)(v1 - 0x5751ffc0); // 0x3d8fe8
    *v4 = *v4 + (char)v1;
    __asm_out((int16_t)a3, (int32_t)v1);
    int32_t * v5 = (int32_t *)(a1 - 112); // 0x3d8ffa
    *v5 = *v5 + (int32_t)v1;
    return v1 | 232;
}

// Address range: 0x3d9001 - 0x3d900e
int64_t function_3d9001(int64_t a1, int64_t a2, int64_t a3, int64_t result) {
    int32_t * v1 = (int32_t *)(a1 - 74); // 0x3d9001
    *v1 = *v1 + (int32_t)a2;
    float80_t v2; // 0x3d9001
    *(int16_t *)(a3 - 0x9abffb5) = (int16_t)v2;
    return result;
}

// Address range: 0x3d90d2 - 0x3d90d3
int64_t function_3d90d2(void) {
    // 0x3d90d2
    int64_t result; // 0x3d90d2
    return result;
}

// Address range: 0x3d90dc - 0x3d90de
int64_t function_3d90dc(void) {
    // 0x3d90dc
    int64_t v1; // 0x3d90dc
    return function_3d9112(v1, v1);
}

// Address range: 0x3d90e5 - 0x3d90f0
int64_t function_3d90e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_68f027f4(a1, a2, a3, a4, a5); // 0x3d90e5
    char * v1 = (char *)(a4 + 101); // 0x3d90ea
    *v1 = *v1 + (char)a4;
    return result;
}

// Address range: 0x3d9112 - 0x3d914b
int64_t function_3d9112(int64_t a1, int64_t a2) {
    // 0x3d9112
    int64_t v1; // 0x3d9112
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    int64_t v3 = __asm_iretd(2 * a1 & 0xfffffffe); // 0x3d912b
    unknown_ffffffffa58ad03d();
    if ((char)v3 < 0) {
        function_3d90d2();
    }
    int32_t result = __asm_in(-23); // 0x3d9140
    *(char *)0x7e70567f233b6364 = (char)result;
    return result;
}

// Address range: 0x3d9181 - 0x3d9193
int64_t function_3d9181(int64_t a1, int64_t a2) {
    // 0x3d9181
    int64_t v1; // 0x3d9181
    *(char *)-0x68834e78 = *(char *)-0x68834e78 + (char)(v1 / 256);
    int64_t v2; // 0x3d9181
    return (0x10000 * (int32_t)((int64_t)&v2 & 0xff00 | (uint64_t)v1 % 256) >> 16) + 0x7b79b959;
}

// Address range: 0x505298 - 0x505315
int64_t function_505298(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 16; // 0x5052ac
    int64_t v2 = *(int64_t *)(a2 + 8); // 0x5052b4
    int64_t * v3 = (int64_t *)a1; // 0x5052b8
    *v3 = v2;
    int64_t * v4 = (int64_t *)(v2 - 24); // 0x5052bb
    int64_t v5 = *v4; // 0x5052bb
    *(int64_t *)(v5 + a1) = *(int64_t *)(a2 + 16);
    *(int64_t *)(a1 + 8) = 0;
    function_4fd0d0(*v4 + a1, 0, v5);
    *v3 = 0;
    int64_t v6 = *(int64_t *)(a2 + 24); // 0x5052e7
    *(int64_t *)(*(int64_t *)-24 + a1) = v6;
    function_5009e0(v1);
    return function_4fd0d0(*(int64_t *)(a1 - 8) + a1, (int32_t)v1, v6);
}

// Address range: 0x505315 - 0x505348
int64_t function_505315(void) {
    // 0x505315
    int64_t v1; // 0x505315
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x505315
    *(int64_t *)v1 = v2;
    *(int64_t *)(*(int64_t *)(v2 - 24) + v1) = *(int64_t *)(v1 + 16);
    *(int64_t *)(v1 + 8) = 0;
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    function_505260(v1);
    return function_505315();
}

// Address range: 0x505350 - 0x505412
// From class:    std::basic_ifstream<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_505350(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 256; // 0x50535e
    function_54cb80(v1);
    *(int64_t *)(a1 + 472) = 0;
    *(int32_t *)(a1 + 480) = 0;
    *(char *)(a1 + 484) = 0;
    *(int64_t *)(a1 + 488) = 0;
    *(int64_t *)(a1 + 496) = 0;
    *(int64_t *)(a1 + 504) = 0;
    *(int64_t *)(a1 + (int64_t)&g3) = 0;
    int64_t * v2 = (int64_t *)a1; // 0x5053c2
    *v2 = (int64_t)&g7;
    int64_t * v3 = (int64_t *)v1; // 0x5053c5
    *v3 = (int64_t)&g8;
    *(int64_t *)(a1 + 8) = 0;
    int64_t v4; // 0x505350
    function_4fd0d0(v1, 0, v4);
    int64_t v5 = a1 + 16; // 0x5053e0
    *v3 = (int64_t)&g10;
    *v2 = (int64_t)&g9;
    function_5009e0(v5);
    return function_4fd0d0(v1, (int32_t)v5, (int64_t)&g9);
}

// Address range: 0x505412 - 0x505455
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_505412(void) {
    // 0x505412
    while (true) {
        // 0x505415
        int64_t v1; // 0x505412
        *(int64_t *)(v1 + 256) = (int64_t)&g6;
        function_54cf10(v1);
        int64_t v2; // 0x505412
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        function_505260(v2);
        *(int64_t *)(v1 + 8) = 0;
        v2 = (int64_t)&g37;
    }
}

// Address range: 0x505455 - 0x505457
int64_t function_505455(void) {
    // 0x505455
    int64_t result; // 0x505455
    return result;
}

// Address range: 0x505460 - 0x5054c8
int64_t function_505460(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 8; // 0x50546c
    int64_t v2 = *(int64_t *)(a2 + 8); // 0x505474
    int64_t * v3 = (int64_t *)a1; // 0x505478
    *v3 = v2;
    int64_t v4 = *(int64_t *)(v2 - 24) + a1; // 0x505485
    *(int64_t *)v4 = *(int64_t *)(a2 + 16);
    int64_t v5; // 0x505460
    function_4fd0d0(v4, 0, v5);
    *v3 = 0;
    int64_t v6 = *(int64_t *)(a2 + 24); // 0x50549a
    *(int64_t *)(*(int64_t *)-24 + a1) = v6;
    function_5009e0(v1);
    return function_4fd0d0(*(int64_t *)(a1 - 16) + a1, (int32_t)v1, v6);
}

// Address range: 0x5054c8 - 0x5054f3
int64_t function_5054c8(void) {
    // 0x5054c8
    int64_t v1; // 0x5054c8
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x5054c8
    *(int64_t *)v1 = v2;
    *(int64_t *)(*(int64_t *)(v2 - 24) + v1) = *(int64_t *)(v1 + 16);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    function_505260(v1);
    return function_5054c8();
}

// Address range: 0x505500 - 0x5055ba
// From class:    std::basic_ofstream<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_505500(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 248; // 0x50550e
    function_54cb80(v1);
    *(int64_t *)(a1 + 464) = 0;
    *(int32_t *)(a1 + 472) = 0;
    *(char *)(a1 + 476) = 0;
    *(int64_t *)(a1 + 480) = 0;
    *(int64_t *)(a1 + 488) = 0;
    *(int64_t *)(a1 + 496) = 0;
    *(int64_t *)(a1 + 504) = 0;
    int64_t * v2 = (int64_t *)a1; // 0x505572
    *v2 = (int64_t)&g11;
    int64_t * v3 = (int64_t *)v1; // 0x505575
    *v3 = (int64_t)&g12;
    int64_t v4; // 0x505500
    function_4fd0d0(v1, 0, v4);
    int64_t v5 = a1 + 8; // 0x505588
    *v3 = (int64_t)&g14;
    *v2 = (int64_t)&g13;
    function_5009e0(v5);
    return function_4fd0d0(v1, (int32_t)v5, (int64_t)&g13);
}

// Address range: 0x5055ba - 0x5055f5
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_5055ba(void) {
    // 0x5055ba
    while (true) {
        // 0x5055bd
        int64_t v1; // 0x5055ba
        *(int64_t *)(v1 + 248) = (int64_t)&g6;
        function_54cf10(v1);
        int64_t v2; // 0x5055ba
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        function_505260(v2);
        v2 = (int64_t)&g37;
    }
}

// Address range: 0x5055f5 - 0x5055f7
int64_t function_5055f5(void) {
    // 0x5055f5
    int64_t result; // 0x5055f5
    return result;
}

// Address range: 0x505600 - 0x5056b7
int64_t function_505600(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 16); // 0x505610
    int64_t * v2 = (int64_t *)a1; // 0x505614
    *v2 = v1;
    int64_t * v3 = (int64_t *)(v1 - 24); // 0x505617
    int64_t v4 = *v3; // 0x505617
    *(int64_t *)(v4 + a1) = *(int64_t *)(a2 + 24);
    *(int64_t *)(a1 + 8) = 0;
    function_4fd0d0(*v3 + a1, 0, v4);
    int64_t v5 = *(int64_t *)(a2 + 32); // 0x505639
    int64_t v6 = a1 + 16; // 0x50563f
    int64_t * v7 = (int64_t *)v6; // 0x50563f
    *v7 = v5;
    int64_t v8 = *(int64_t *)(v5 - 24) + v6; // 0x505647
    *(int64_t *)v8 = *(int64_t *)(a2 + 40);
    function_4fd0d0(v8, 0, v4);
    int64_t v9 = *(int64_t *)(a2 + 8); // 0x505658
    int64_t v10 = a1 + 24; // 0x50565c
    *v2 = v9;
    *(int64_t *)(*(int64_t *)(v9 - 24) + a1) = *(int64_t *)(a2 + 48);
    *v7 = *(int64_t *)(a2 + 56);
    *v2 = 0;
    int64_t v11 = *(int64_t *)(a2 + 64); // 0x505685
    *(int64_t *)(*(int64_t *)-24 + a1) = v11;
    *v7 = *(int64_t *)(a2 + 72);
    function_5009e0(v10);
    return function_4fd0d0(*v2 + a1, (int32_t)v10, v11);
}

// Address range: 0x5056b7 - 0x50571a
int64_t function_5056b7(void) {
    // 0x5056b7
    int64_t v1; // 0x5056b7
    int64_t v2 = *(int64_t *)(v1 + 16); // 0x5056b7
    int64_t * v3 = (int64_t *)v1; // 0x5056be
    *v3 = v2;
    *(int64_t *)(*(int64_t *)(v2 - 24) + v1) = *(int64_t *)(v1 + 24);
    *(int64_t *)(v1 + 8) = 0;
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    function_505260(v1);
    int64_t v4 = *(int64_t *)(v1 + 8); // 0x5056e8
    *v3 = v4;
    *(int64_t *)(*(int64_t *)(v4 - 24) + v1) = *(int64_t *)(v1 + 48);
    int64_t v5 = v1 + 16; // 0x5056ff
    int64_t * v6 = (int64_t *)v5; // 0x5056ff
    *v6 = *(int64_t *)(v1 + 56);
    int64_t v7 = *(int64_t *)(v1 + 32); // 0x505703
    *v6 = v7;
    *(int64_t *)(*(int64_t *)(v7 - 24) + v5) = *(int64_t *)(v1 + 40);
    return function_5056b7();
}

// Address range: 0x50571a - 0x50571c
int64_t function_50571a(void) {
    // 0x50571a
    int64_t result; // 0x50571a
    return result;
}

// Address range: 0x505720 - 0x505816
// From class:    std::basic_fstream<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_505720(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 264; // 0x505730
    function_54cb80(v1);
    *(int64_t *)(a1 + 480) = 0;
    *(int32_t *)(a1 + 488) = 0;
    *(char *)(a1 + 492) = 0;
    *(int64_t *)(a1 + 496) = 0;
    *(int64_t *)(a1 + 504) = 0;
    *(int64_t *)(a1 + (int64_t)&g3) = 0;
    *(int64_t *)(a1 + (int64_t)&g4) = 0;
    int64_t * v2 = (int64_t *)a1; // 0x505798
    *v2 = (int64_t)&g17;
    int64_t * v3 = (int64_t *)v1; // 0x50579b
    *v3 = (int64_t)&g18;
    *(int64_t *)(a1 + 8) = 0;
    int64_t v4; // 0x505720
    function_4fd0d0(v1, 0, v4);
    int64_t * v5 = (int64_t *)(a1 + 16); // 0x5057bf
    *v5 = (int64_t)&g15;
    *v3 = (int64_t)&g16;
    function_4fd0d0(v1, 0, v4);
    int64_t v6 = a1 + 24; // 0x5057d6
    *v2 = (int64_t)&g19;
    *v5 = (int64_t)&g20;
    *v3 = (int64_t)&g21;
    function_5009e0(v6);
    return function_4fd0d0(v1, (int32_t)v6, (int64_t)&g21);
}

// Address range: 0x505816 - 0x50585d
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_505816(void) {
    // 0x505816
    while (true) {
        // 0x505819
        int64_t v1; // 0x505816
        *(int64_t *)(v1 + 264) = (int64_t)&g6;
        function_54cf10(v1);
        int64_t v2; // 0x505816
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        function_505260(v2);
        *(int64_t *)(v1 + 8) = 0;
        v2 = (int64_t)&g37;
    }
}

// Address range: 0x50585d - 0x50585f
int64_t function_50585d(void) {
    // 0x50585d
    int64_t result; // 0x50585d
    return result;
}

// Address range: 0x50585f - 0x505861
int64_t function_50585f(void) {
    // 0x50585f
    int64_t result; // 0x50585f
    return result;
}

// Address range: 0x50a606 - 0x50a6d4
int64_t function_50a606(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x50a606
    int64_t v1; // 0x50a606
    char * v2 = (char *)(v1 - 119); // 0x50a606
    bool v3; // 0x50a606
    *v2 = (char)v3 + (char)a4 + *v2;
    int32_t v4 = v1; // 0x50a609
    int32_t v5 = v1;
    uint32_t v6 = v5 + v4; // 0x50a609
    int32_t v7 = v5; // 0x50a60b
    if (((v6 ^ v4) & (v6 ^ v5)) >= 0) {
        v7 = function_50a5c6();
    }
    int64_t v8 = v6; // 0x50a609
    uint32_t v9 = v7 - 0x3ac6b700; // 0x50a60d
    int64_t v10 = 0; // 0x50a612
    if (v9 != 0) {
        if (v1 != 0) {
            // 0x50a61c
            function_4eeb40(v1);
        }
        int64_t str2 = v9; // 0x50a60d
        char * str = (char *)v8; // 0x50a62a
        int32_t strcmp_rc = strcmp(str, (char *)str2); // 0x50a62a
        if (strcmp_rc != 0) {
            int64_t v11 = (int64_t)strlen(str) + 1; // 0x50a688
            int64_t v12 = function_4eec00(v11); // 0x50a68f
            int64_t dest_mem = (int64_t)memcpy((int64_t *)v12, (int64_t *)v8, (int32_t)v11); // 0x50a69d
            *(int64_t *)(v1 + 24) = dest_mem;
            v10 = dest_mem;
        } else {
            // 0x50a633
            *(int64_t *)(v1 + 24) = str2;
            v10 = strcmp_rc;
        }
    }
    int64_t v13 = v3 ? -1 : 1;
    int64_t v14 = (int64_t)&g5; // 0x50a606
    int64_t v15 = v8; // 0x50a606
    int64_t v16 = 2; // 0x50a646
    unsigned char v17 = *(char *)v15; // 0x50a646
    char v18 = *(char *)v14; // 0x50a646
    char v19 = v18; // 0x50a646
    bool v20 = false; // 0x50a646
    while (v17 == v18) {
        v16--;
        v14 += v13;
        v15 += v13;
        v19 = v17;
        v20 = true;
        if (v16 == 0) {
            // break -> 
            break;
        }
        v17 = *(char *)v15;
        v18 = *(char *)v14;
        v19 = v18;
        v20 = false;
    }
    unsigned char v21 = v19;
    int64_t v22 = (int64_t)!((v17 < v21 | v20)) - (int64_t)(v17 < v21); // 0x50a64b
    int64_t v23 = (int64_t)"POSIX"; // 0x50a64f
    int64_t v24 = v8; // 0x50a64f
    if ((char)v22 == 0) {
        // 0x50a66b
        return v22 % 256 | v10 & -256;
    }
    int64_t v25 = 6; // 0x50a64f
    unsigned char v26 = *(char *)v24; // 0x50a660
    char v27 = *(char *)v23; // 0x50a660
    v24 += v13;
    char v28 = v27; // 0x50a660
    bool v29 = false; // 0x50a660
    while (v26 == v27) {
        // 0x50a651
        v25--;
        v23 += v13;
        v28 = v26;
        v29 = true;
        if (v25 == 0) {
            // break -> 
            break;
        }
        v26 = *(char *)v24;
        v27 = *(char *)v23;
        v24 += v13;
        v28 = v27;
        v29 = false;
    }
    unsigned char v30 = v28;
    int64_t v31 = (int64_t)!((v26 < v30 | v29)) - (int64_t)(v26 < v30); // 0x50a665
    if ((char)v31 == 0) {
        // 0x50a66b
        return v31 % 256 | v10 & -256;
    }
    int64_t v32 = v1 + 16; // 0x50a6b0
    function_5679e0(v32, v24);
    return function_5679b0(v32, v8, 0);
}

// Address range: 0x50a6d4 - 0x50a6f8
int64_t function_50a6d4(int64_t a1, int64_t a2) {
    // 0x50a6d4
    int64_t v1; // 0x50a6d4
    function_508360(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return function_50a5e0();
}

// Address range: 0x50a700 - 0x50a708
int64_t function_50a700(int64_t a1, int64_t a2) {
    // 0x50a700
    return function_54d790();
}

// Address range: 0x50a710 - 0x50a78e
// From class:    std::codecvt_byname<wchar_t, char, __mbstate_t>
// Type:          constructor
int64_t function_50a710(int64_t a1, int64_t a2, int64_t a3) {
    // 0x50a710
    function_4f5280();
    *(int64_t *)a1 = (int64_t)&g24;
    bool v1; // 0x50a710
    int64_t v2 = v1 ? -1 : 1;
    int64_t v3 = (int64_t)&g5; // 0x50a710
    int64_t v4 = a2; // 0x50a710
    int64_t v5 = 2; // 0x50a73f
    unsigned char v6 = *(char *)v4; // 0x50a73f
    char v7 = *(char *)v3; // 0x50a73f
    char v8 = v7; // 0x50a73f
    bool v9 = false; // 0x50a73f
    while (v6 == v7) {
        v5--;
        v3 += v2;
        v4 += v2;
        v8 = v6;
        v9 = true;
        if (v5 == 0) {
            // break -> 
            break;
        }
        v6 = *(char *)v4;
        v7 = *(char *)v3;
        v8 = v7;
        v9 = false;
    }
    unsigned char v10 = v8;
    int64_t v11 = (int64_t)!((v6 < v10 | v9)) - (int64_t)(v6 < v10); // 0x50a744
    int64_t v12 = (int64_t)"POSIX"; // 0x50a748
    int64_t v13 = a2; // 0x50a748
    if ((char)v11 == 0) {
        // 0x50a764
        return v11 % 256 | (int64_t)&g24 & -256;
    }
    int64_t v14 = 6; // 0x50a748
    unsigned char v15 = *(char *)v13; // 0x50a759
    char v16 = *(char *)v12; // 0x50a759
    v13 += v2;
    char v17 = v16; // 0x50a759
    bool v18 = false; // 0x50a759
    while (v15 == v16) {
        // 0x50a74a
        v14--;
        v12 += v2;
        v17 = v15;
        v18 = true;
        if (v14 == 0) {
            // break -> 
            break;
        }
        v15 = *(char *)v13;
        v16 = *(char *)v12;
        v13 += v2;
        v17 = v16;
        v18 = false;
    }
    unsigned char v19 = v17;
    int64_t v20 = (int64_t)!((v15 < v19 | v18)) - (int64_t)(v15 < v19); // 0x50a75e
    if ((char)v20 == 0) {
        // 0x50a764
        return v20 % 256 | (int64_t)&g24 & -256;
    }
    int64_t v21 = a1 + 16; // 0x50a770
    function_5679e0(v21, v13);
    return function_5679b0(v21, a2, 0);
}

// Address range: 0x50a78e - 0x50a82e
// From class:    std::codecvt_byname<wchar_t, char, __mbstate_t>
// Type:          constructor
int64_t function_50a78e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x50a78e
    int64_t v1; // 0x50a78e
    function_4f5150(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    function_4f5280();
    *(int64_t *)v1 = (int64_t)&g24;
    bool v2; // 0x50a78e
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g5; // 0x50a78e
    int64_t v5 = a2; // 0x50a78e
    int64_t v6 = 2; // 0x50a7df
    unsigned char v7 = *(char *)v5; // 0x50a7df
    char v8 = *(char *)v4; // 0x50a7df
    char v9 = v8; // 0x50a7df
    bool v10 = false; // 0x50a7df
    while (v7 == v8) {
        v6--;
        v4 += v3;
        v5 += v3;
        v9 = v7;
        v10 = true;
        if (v6 == 0) {
            // break -> 
            break;
        }
        v7 = *(char *)v5;
        v8 = *(char *)v4;
        v9 = v8;
        v10 = false;
    }
    unsigned char v11 = v9;
    int64_t v12 = (int64_t)!((v7 < v11 | v10)) - (int64_t)(v7 < v11); // 0x50a7e4
    int64_t v13 = (int64_t)"POSIX"; // 0x50a7e8
    int64_t v14 = a2; // 0x50a7e8
    if ((char)v12 == 0) {
        // 0x50a804
        return v12 % 256 | (int64_t)&g24 & -256;
    }
    int64_t v15 = 6; // 0x50a7e8
    unsigned char v16 = *(char *)v14; // 0x50a7f9
    char v17 = *(char *)v13; // 0x50a7f9
    v14 += v3;
    char v18 = v17; // 0x50a7f9
    bool v19 = false; // 0x50a7f9
    while (v16 == v17) {
        // 0x50a7ea
        v15--;
        v13 += v3;
        v18 = v16;
        v19 = true;
        if (v15 == 0) {
            // break -> 
            break;
        }
        v16 = *(char *)v14;
        v17 = *(char *)v13;
        v14 += v3;
        v18 = v17;
        v19 = false;
    }
    unsigned char v20 = v18;
    int64_t v21 = (int64_t)!((v16 < v20 | v19)) - (int64_t)(v16 < v20); // 0x50a7fe
    if ((char)v21 == 0) {
        // 0x50a804
        return v21 % 256 | (int64_t)&g24 & -256;
    }
    int64_t v22 = v1 + 16; // 0x50a810
    function_5679e0(v22, v14);
    return function_5679b0(v22, a2, 0);
}

// Address range: 0x50a82e - 0x50a882
// From class:    std::collate<wchar_t>
// Type:          constructor
int64_t function_50a82e(int64_t a1, int64_t a2) {
    // 0x50a82e
    int64_t v1; // 0x50a82e
    function_4f5150(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int32_t *)(v1 + 8) = (int32_t)(a2 != 0) | ((int32_t)&g37 ^ (int32_t)&g37) & -256;
    *(int64_t *)v1 = (int64_t)&g22;
    int64_t result = function_565f30(); // 0x50a872
    *(int64_t *)(v1 + 16) = result;
    return result;
}

// Address range: 0x50a882 - 0x50a8da
// From class:    std::collate<wchar_t>
// Type:          constructor
int64_t function_50a882(int64_t a1, int64_t a2, int64_t a3) {
    // 0x50a882
    int64_t v1; // 0x50a882
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t v2 = a2; // bp-16, 0x50a8b0
    *(int32_t *)(v1 + 8) = (int32_t)(a3 != 0) | ((int32_t)&g37 ^ (int32_t)&g37) & -256;
    *(int64_t *)v1 = (int64_t)&g22;
    int64_t result = function_567a10(&v2); // 0x50a8cb
    *(int64_t *)(v1 + 16) = result;
    return result;
}

// Address range: 0x50a8e0 - 0x50a8e6
int64_t function_50a8e0(int64_t result) {
    // 0x50a8e0
    return result;
}

// Address range: 0x50a8f0 - 0x50a936
int64_t function_50a8f0(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40) ^ __readfsqword(40); // 0x50a913
    if (v1 == 0) {
        // 0x50a91e
        return result;
    }
    // 0x50a927
    __stack_chk_fail();
    return *(int64_t *)v1;
}

// Address range: 0x50a940 - 0x50a9e4
// From class:    std::collate_byname<wchar_t>
// Type:          constructor
int64_t function_50a940(int64_t a1, int64_t a2, int64_t a3) {
    // 0x50a940
    *(int32_t *)(a1 + 8) = (int32_t)(a3 != 0);
    int64_t * v1 = (int64_t *)a1; // 0x50a966
    *v1 = (int64_t)&g22;
    int64_t v2 = function_565f30(); // 0x50a969
    int64_t v3 = a1 + 16; // 0x50a96e
    *(int64_t *)v3 = v2;
    *v1 = (int64_t)&g23;
    bool v4; // 0x50a940
    int64_t v5 = v4 ? -1 : 1;
    int64_t v6 = (int64_t)&g5; // 0x50a940
    int64_t v7 = a2; // 0x50a940
    int64_t v8 = 2; // 0x50a98f
    unsigned char v9 = *(char *)v7; // 0x50a98f
    char v10 = *(char *)v6; // 0x50a98f
    char v11 = v10; // 0x50a98f
    bool v12 = false; // 0x50a98f
    while (v9 == v10) {
        v8--;
        v6 += v5;
        v7 += v5;
        v11 = v9;
        v12 = true;
        if (v8 == 0) {
            // break -> 
            break;
        }
        v9 = *(char *)v7;
        v10 = *(char *)v6;
        v11 = v10;
        v12 = false;
    }
    unsigned char v13 = v11;
    int64_t v14 = (int64_t)!((v9 < v13 | v12)) - (int64_t)(v9 < v13); // 0x50a994
    int64_t v15 = (int64_t)"POSIX"; // 0x50a998
    int64_t v16 = a2; // 0x50a998
    if ((char)v14 == 0) {
        // 0x50a9b4
        return v14 % 256 | (int64_t)&g23 & -256;
    }
    int64_t v17 = 6; // 0x50a998
    unsigned char v18 = *(char *)v16; // 0x50a9a9
    char v19 = *(char *)v15; // 0x50a9a9
    v16 += v5;
    char v20 = v19; // 0x50a9a9
    bool v21 = false; // 0x50a9a9
    while (v18 == v19) {
        // 0x50a99a
        v17--;
        v15 += v5;
        v20 = v18;
        v21 = true;
        if (v17 == 0) {
            // break -> 
            break;
        }
        v18 = *(char *)v16;
        v19 = *(char *)v15;
        v16 += v5;
        v20 = v19;
        v21 = false;
    }
    unsigned char v22 = v20;
    int64_t v23 = (int64_t)!((v18 < v22 | v21)) - (int64_t)(v18 < v22); // 0x50a9ae
    if ((char)v23 == 0) {
        // 0x50a9b4
        return v23 % 256 | (int64_t)&g23 & -256;
    }
    // 0x50a9c0
    function_5679e0(v3, v16);
    return function_5679b0(v3, a2, 0);
}

// Address range: 0x50a9e4 - 0x50aac4
// From class:    std::collate_byname<wchar_t>
// Type:          constructor
int64_t function_50a9e4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x50a9e4
    int64_t v1; // 0x50a9e4
    *(int64_t *)v1 = v1 + 16;
    function_5679e0(v1, a2);
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)&g37);
    *(int32_t *)((int64_t)&g37 + 8) = (int32_t)(a3 != 0) | ((int32_t)&g37 ^ (int32_t)&g37) & -256;
    *(int64_t *)&g37 = (int64_t)&g22;
    *(int64_t *)((int64_t)&g37 + 16) = function_565f30();
    *(int64_t *)&g37 = (int64_t)&g23;
    bool v2; // 0x50a9e4
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g5; // 0x50a9e4
    int64_t v5 = a2; // 0x50a9e4
    int64_t v6 = 2; // 0x50aa6f
    unsigned char v7 = *(char *)v5; // 0x50aa6f
    char v8 = *(char *)v4; // 0x50aa6f
    char v9 = v8; // 0x50aa6f
    bool v10 = false; // 0x50aa6f
    while (v7 == v8) {
        v6--;
        v4 += v3;
        v5 += v3;
        v9 = v7;
        v10 = true;
        if (v6 == 0) {
            // break -> 
            break;
        }
        v7 = *(char *)v5;
        v8 = *(char *)v4;
        v9 = v8;
        v10 = false;
    }
    unsigned char v11 = v9;
    int64_t v12 = (int64_t)!((v7 < v11 | v10)) - (int64_t)(v7 < v11); // 0x50aa74
    int64_t v13 = (int64_t)"POSIX"; // 0x50aa78
    int64_t v14 = a2; // 0x50aa78
    if ((char)v12 == 0) {
        // 0x50aa94
        return v12 % 256 | (int64_t)&g23 & -256;
    }
    int64_t v15 = 6; // 0x50aa78
    unsigned char v16 = *(char *)v14; // 0x50aa89
    char v17 = *(char *)v13; // 0x50aa89
    v14 += v3;
    char v18 = v17; // 0x50aa89
    bool v19 = false; // 0x50aa89
    while (v16 == v17) {
        // 0x50aa7a
        v15--;
        v13 += v3;
        v18 = v16;
        v19 = true;
        if (v15 == 0) {
            // break -> 
            break;
        }
        v16 = *(char *)v14;
        v17 = *(char *)v13;
        v14 += v3;
        v18 = v17;
        v19 = false;
    }
    unsigned char v20 = v18;
    int64_t v21 = (int64_t)!((v16 < v20 | v19)) - (int64_t)(v16 < v20); // 0x50aa8e
    if ((char)v21 == 0) {
        // 0x50aa94
        return v21 % 256 | (int64_t)&g23 & -256;
    }
    // 0x50aaa0
    function_5679e0((int64_t)&g37 + 16, v14);
    return function_5679b0((int64_t)&g37 + 16, a2, 0);
}

// Address range: 0x53fda4 - 0x53fdb3
int64_t function_53fda4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x53fda4
    int64_t v1; // 0x53fda4
    bool v2; // 0x53fda4
    *(char *)a1 = (char)v1 + (char)a4 + (char)v2;
    *(int64_t *)(v1 + 16) = (a3 & -0xff01 | (int64_t)&g3) + 1;
    return function_53fd7a();
}

// Address range: 0x53fdb3 - 0x53fdba
int64_t function_53fdb3(void) {
    // 0x53fdb3
    return function_53fd2a();
}

// Address range: 0x53fdc0 - 0x53fe1a
int64_t function_53fdc0(int64_t result, int64_t a2, int64_t a3) {
    // 0x53fdc0
    function_5659d0();
    function_566100(a2 + 56, a3);
    return result;
}

// Address range: 0x53fe1a - 0x53fe42
int64_t function_53fe1a(int64_t a1, int64_t a2) {
    // 0x53fe1a
    int64_t result; // 0x53fe1a
    function_566180(result);
    _Unwind_Resume((struct _Unwind_Exception *)result);
    function_5659d0();
    return result;
}

// Address range: 0x53fe50 - 0x53fe6a
int64_t function_53fe50(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x53fe53
    return v1 != g32 ? v1 : a1;
}

// Address range: 0x53fe70 - 0x53ff6a
int64_t function_53fe70(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x53fe74
    int64_t v2 = *(int64_t *)(a1 + 32); // 0x53fe87
    if (v1 == __readfsqword(40)) {
        // 0x53fead
        return v2 != g29 ? v2 : -1;
    }
    // 0x53fece
    __stack_chk_fail();
    int64_t v3 = __readfsqword(40); // 0x53fee4
    int64_t v4 = *(int64_t *)(a1 + 40); // 0x53fef7
    int64_t result = v4 != g31 ? v4 : -1; // 0x53ff36
    if (v3 != __readfsqword(40)) {
        // 0x53ff3e
        __stack_chk_fail();
        int64_t v5 = *(int64_t *)(a1 + 48); // 0x53ff53
        result = v5 != g34 ? v5 : 0;
    }
    // 0x53fead
    return result;
}

// Address range: 0x53ff70 - 0x53ff92
int64_t function_53ff70(int64_t a1) {
    // 0x53ff70
    return *(int64_t *)(a1 + 24) - *(int64_t *)(a1 + 16);
}

// Address range: 0x53ffa0 - 0x540044
int64_t function_53ffa0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x53ffa1
    uint64_t v2 = *v1; // 0x53ffa1
    uint64_t v3 = *(int64_t *)(a1 + 24); // 0x53ffa8
    int64_t v4; // 0x53ffa0
    if (v2 >= v3) {
        // 0x53ffc8
        if (*(int64_t *)(a1 + 80) != g30) {
            // 0x540010
            v4 = v2;
            if ((int32_t)a1 == -1) {
                // 0x53ffe5
                return 0xffffffff;
            }
        } else {
            int64_t v5 = *(int64_t *)(a1 + 72); // 0x53ffd8
            if (v5 == g33 || (int32_t)v5 == -1) {
                // 0x53ffe5
                return 0xffffffff;
            }
            int64_t v6 = v2 + 1; // 0x540037
            *v1 = v6;
            v4 = v6;
        }
    } else {
        int64_t v7 = v2 + 1; // 0x53ffb1
        *v1 = v7;
        v4 = v7;
    }
    // 0x53ffb9
    if (v4 < v3) {
        // 0x53ffbe
        return (int64_t)*(char *)v4;
    }
    int64_t v8 = *(int64_t *)(a1 + 72); // 0x53fff3
    return v8 == g33 ? 0xffffffff : v8;
}

// Address range: 0x540050 - 0x5400c3
int64_t function_540050(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 16); // 0x540050
    uint64_t v2 = *v1; // 0x540050
    if (v2 < *(int64_t *)(result + 24)) {
        // 0x54005a
        *v1 = v2 + 1;
        return (int64_t)*(char *)v2;
    }
    // 0x540070
    if (*(int64_t *)(result + 80) != g30) {
        // 0x54008d
        return result;
    }
    int64_t v3 = *(int64_t *)(result + 72); // 0x540080
    if (v3 == g33 || (int32_t)v3 == -1) {
        // 0x54008d
        return 0xffffffff;
    }
    // 0x5400ab
    *v1 = v2 + 1;
    return (int64_t)*(char *)v2;
}

// Address range: 0x5400d0 - 0x540102
int64_t function_5400d0(int64_t a1) {
    uint64_t v1 = *(int64_t *)(a1 + 16); // 0x5400d0
    if (v1 >= *(int64_t *)(a1 + 24)) {
        // 0x5400e0
        return 0xffffffff;
    }
    // 0x5400da
    return (int64_t)*(char *)v1;
}

// Address range: 0x540110 - 0x540116
int64_t function_540110(int64_t result) {
    // 0x540110
    return result;
}

// Address range: 0x540120 - 0x54015b
int64_t function_540120(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x540120
    uint64_t v2 = *v1; // 0x540120
    if (*(int64_t *)(a1 + 8) >= v2) {
        // 0x540140
        return 0xffffffff;
    }
    int64_t v3 = v2 - 1; // 0x54012a
    char * v4 = (char *)v3; // 0x54012a
    if (*v4 != (char)a2) {
        // 0x540140
        return 0xffffffff;
    }
    // 0x540130
    *v1 = v3;
    return (int64_t)*v4;
}

// Address range: 0x540160 - 0x5401a4
int64_t function_540160(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x540160
    uint64_t v2 = *v1; // 0x540160
    if (*(int64_t *)(a1 + 8) >= v2) {
        // 0x540180
        return 0xffffffff;
    }
    int64_t v3 = v2 - 1; // 0x54016a
    *v1 = v3;
    return (int64_t)*(char *)v3;
}

// Address range: 0x5401b0 - 0x5401f4
int64_t function_5401b0(int64_t a1, uint64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 40); // 0x5401b0
    uint64_t v2 = *v1; // 0x5401b0
    uint64_t result = a2 % 256; // 0x5401b8
    if (*(int64_t *)(a1 + 48) <= v2) {
        // 0x5401d0
        return *(int64_t *)(a1 + 104) != g35 ? result : 0xffffffff;
    }
    // 0x5401be
    *(char *)v2 = (char)a2;
    *v1 = *v1 + 1;
    return result;
}

// Address range: 0x540200 - 0x540206
int64_t function_540200(int64_t result) {
    // 0x540200
    return result;
}

// Address range: 0x540210 - 0x540258
// From class:    std::basic_streambuf<char, std::char_traits<char> >
// Type:          constructor
int64_t function_540210(int64_t a1) {
    // 0x540210
    *(int64_t *)(a1 + 8) = 0;
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 48) = 0;
    *(int64_t *)a1 = (int64_t)&g25;
    return function_4f2d50(a1 + 56);
}

// Address range: 0x540260 - 0x540265
int64_t function_540260(int64_t a1) {
    // 0x540260
    return *(int64_t *)(a1 + 8);
}

// Address range: 0x540270 - 0x540275
int64_t function_540270(int64_t a1) {
    // 0x540270
    return *(int64_t *)(a1 + 16);
}

// Address range: 0x540280 - 0x540285
int64_t function_540280(int64_t a1) {
    // 0x540280
    return *(int64_t *)(a1 + 24);
}

// Address range: 0x540290 - 0x540298
int64_t function_540290(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x540293
    *v1 = *v1 + (0x100000000 * a2 >> 32);
    int64_t result; // 0x540290
    return result;
}

// Address range: 0x5402a0 - 0x5402ad
int64_t function_5402a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5402a0
    *(int64_t *)(a1 + 8) = a2;
    *(int64_t *)(a1 + 16) = a3;
    *(int64_t *)(a1 + 24) = a4;
    int64_t result; // 0x5402a0
    return result;
}

// Address range: 0x5402b0 - 0x5402b5
int64_t function_5402b0(int64_t a1) {
    // 0x5402b0
    return *(int64_t *)(a1 + 32);
}

// Address range: 0x5402c0 - 0x5402c5
int64_t function_5402c0(int64_t a1) {
    // 0x5402c0
    return *(int64_t *)(a1 + 40);
}

// Address range: 0x5402d0 - 0x5402d5
int64_t function_5402d0(int64_t a1) {
    // 0x5402d0
    return *(int64_t *)(a1 + 48);
}

// Address range: 0x5402e0 - 0x5402e8
int64_t function_5402e0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 40); // 0x5402e3
    *v1 = *v1 + (0x100000000 * a2 >> 32);
    int64_t result; // 0x5402e0
    return result;
}

// Address range: 0x5402f0 - 0x5402fd
int64_t function_5402f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5402f0
    *(int64_t *)(a1 + 40) = a2;
    *(int64_t *)(a1 + 32) = a2;
    *(int64_t *)(a1 + 48) = a3;
    int64_t result; // 0x5402f0
    return result;
}

// Address range: 0x540300 - 0x54035a
int64_t function_540300(int64_t result2) {
    int64_t * v1 = (int64_t *)(result2 + 16); // 0x540300
    uint64_t v2 = *v1; // 0x540300
    if (v2 < *(int64_t *)(result2 + 24)) {
        int64_t result = v2 + 1; // 0x54030a
        *v1 = result;
        return result;
    }
    // 0x540318
    if (*(int64_t *)(result2 + 80) != g30) {
        // 0x540335
        return result2;
    }
    int64_t result3 = *(int64_t *)(result2 + 72); // 0x540328
    if (result3 != g33 && (int32_t)result3 != -1) {
        // 0x540353
        *v1 = v2 + 1;
    }
    // 0x540335
    return result3;
}

// Address range: 0x540360 - 0x540365
int64_t function_540360(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x540360
    *v1 = *v1 + a2;
    int64_t result; // 0x540360
    return result;
}

// Address range: 0x540370 - 0x540375
int64_t function_540370(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 40); // 0x540370
    *v1 = *v1 + a2;
    int64_t result; // 0x540370
    return result;
}

// Address range: 0x554706 - 0x55478e
int64_t function_554706(int64_t a1, int64_t a2, int64_t a3) {
    // 0x554706
    int64_t v1; // 0x554706
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    function_4f51e0();
    *(int64_t *)a1 = (int64_t)&g28;
    bool v3; // 0x554706
    int64_t v4 = v3 ? -1 : 1;
    int64_t v5 = (int64_t)&g5; // 0x554706
    int64_t v6 = a2; // 0x554706
    int64_t v7 = 2; // 0x55473f
    unsigned char v8 = *(char *)v6; // 0x55473f
    char v9 = *(char *)v5; // 0x55473f
    char v10 = v9; // 0x55473f
    bool v11 = false; // 0x55473f
    while (v8 == v9) {
        v7--;
        v5 += v4;
        v6 += v4;
        v10 = v8;
        v11 = true;
        if (v7 == 0) {
            // break -> 
            break;
        }
        v8 = *(char *)v6;
        v9 = *(char *)v5;
        v10 = v9;
        v11 = false;
    }
    unsigned char v12 = v10;
    int64_t v13 = (int64_t)!((v8 < v12 | v11)) - (int64_t)(v8 < v12); // 0x554744
    int64_t v14 = (int64_t)"POSIX"; // 0x554748
    int64_t v15 = a2; // 0x554748
    if ((char)v13 == 0) {
        // 0x554764
        return v13 % 256 | (int64_t)&g28 & -256;
    }
    int64_t v16 = 6; // 0x554748
    unsigned char v17 = *(char *)v15; // 0x554759
    char v18 = *(char *)v14; // 0x554759
    v15 += v4;
    char v19 = v18; // 0x554759
    bool v20 = false; // 0x554759
    while (v17 == v18) {
        // 0x55474a
        v16--;
        v14 += v4;
        v19 = v17;
        v20 = true;
        if (v16 == 0) {
            // break -> 
            break;
        }
        v17 = *(char *)v15;
        v18 = *(char *)v14;
        v15 += v4;
        v19 = v18;
        v20 = false;
    }
    unsigned char v21 = v19;
    int64_t v22 = (int64_t)!((v17 < v21 | v20)) - (int64_t)(v17 < v21); // 0x55475e
    if ((char)v22 == 0) {
        // 0x554764
        return v22 % 256 | (int64_t)&g28 & -256;
    }
    int64_t v23 = a1 + 16; // 0x554770
    function_5679e0(v23, v15);
    return function_5679b0(v23, a2, 0);
}

// Address range: 0x55478e - 0x55482e
int64_t function_55478e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x55478e
    int64_t v1; // 0x55478e
    function_4f50c0(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    function_4f51e0();
    *(int64_t *)v1 = (int64_t)&g28;
    bool v2; // 0x55478e
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g5; // 0x55478e
    int64_t v5 = a2; // 0x55478e
    int64_t v6 = 2; // 0x5547df
    unsigned char v7 = *(char *)v5; // 0x5547df
    char v8 = *(char *)v4; // 0x5547df
    char v9 = v8; // 0x5547df
    bool v10 = false; // 0x5547df
    while (v7 == v8) {
        v6--;
        v4 += v3;
        v5 += v3;
        v9 = v7;
        v10 = true;
        if (v6 == 0) {
            // break -> 
            break;
        }
        v7 = *(char *)v5;
        v8 = *(char *)v4;
        v9 = v8;
        v10 = false;
    }
    unsigned char v11 = v9;
    int64_t v12 = (int64_t)!((v7 < v11 | v10)) - (int64_t)(v7 < v11); // 0x5547e4
    int64_t v13 = (int64_t)"POSIX"; // 0x5547e8
    int64_t v14 = a2; // 0x5547e8
    if ((char)v12 == 0) {
        // 0x554804
        return v12 % 256 | (int64_t)&g28 & -256;
    }
    int64_t v15 = 6; // 0x5547e8
    unsigned char v16 = *(char *)v14; // 0x5547f9
    char v17 = *(char *)v13; // 0x5547f9
    v14 += v3;
    char v18 = v17; // 0x5547f9
    bool v19 = false; // 0x5547f9
    while (v16 == v17) {
        // 0x5547ea
        v15--;
        v13 += v3;
        v18 = v16;
        v19 = true;
        if (v15 == 0) {
            // break -> 
            break;
        }
        v16 = *(char *)v14;
        v17 = *(char *)v13;
        v14 += v3;
        v18 = v17;
        v19 = false;
    }
    unsigned char v20 = v18;
    int64_t v21 = (int64_t)!((v16 < v20 | v19)) - (int64_t)(v16 < v20); // 0x5547fe
    if ((char)v21 == 0) {
        // 0x554804
        return v21 % 256 | (int64_t)&g28 & -256;
    }
    int64_t v22 = v1 + 16; // 0x554810
    function_5679e0(v22, v14);
    return function_5679b0(v22, a2, 0);
}

// Address range: 0x55482e - 0x554882
// From class:    std::collate<char>
// Type:          constructor
int64_t function_55482e(int64_t a1, int64_t a2) {
    // 0x55482e
    int64_t v1; // 0x55482e
    function_4f50c0(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int32_t *)(v1 + 8) = (int32_t)(a2 != 0) | ((int32_t)&g37 ^ (int32_t)&g37) & -256;
    *(int64_t *)v1 = (int64_t)&g26;
    int64_t result = function_565f30(); // 0x554872
    *(int64_t *)(v1 + 16) = result;
    return result;
}

// Address range: 0x554882 - 0x5548da
// From class:    std::collate<char>
// Type:          constructor
int64_t function_554882(int64_t a1, int64_t a2, int64_t a3) {
    // 0x554882
    int64_t v1; // 0x554882
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t v2 = a2; // bp-16, 0x5548b0
    *(int32_t *)(v1 + 8) = (int32_t)(a3 != 0) | ((int32_t)&g37 ^ (int32_t)&g37) & -256;
    *(int64_t *)v1 = (int64_t)&g26;
    int64_t result = function_567a10(&v2); // 0x5548cb
    *(int64_t *)(v1 + 16) = result;
    return result;
}

// Address range: 0x5548e0 - 0x5548e6
int64_t function_5548e0(int64_t result) {
    // 0x5548e0
    return result;
}

// Address range: 0x5548f0 - 0x554936
int64_t function_5548f0(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40) ^ __readfsqword(40); // 0x554913
    if (v1 == 0) {
        // 0x55491e
        return result;
    }
    // 0x554927
    __stack_chk_fail();
    return *(int64_t *)v1;
}

// Address range: 0x554940 - 0x5549e4
// From class:    std::collate_byname<char>
// Type:          constructor
int64_t function_554940(int64_t a1, int64_t a2, int64_t a3) {
    // 0x554940
    *(int32_t *)(a1 + 8) = (int32_t)(a3 != 0);
    int64_t * v1 = (int64_t *)a1; // 0x554966
    *v1 = (int64_t)&g26;
    int64_t v2 = function_565f30(); // 0x554969
    int64_t v3 = a1 + 16; // 0x55496e
    *(int64_t *)v3 = v2;
    *v1 = (int64_t)&g27;
    bool v4; // 0x554940
    int64_t v5 = v4 ? -1 : 1;
    int64_t v6 = (int64_t)&g5; // 0x554940
    int64_t v7 = a2; // 0x554940
    int64_t v8 = 2; // 0x55498f
    unsigned char v9 = *(char *)v7; // 0x55498f
    char v10 = *(char *)v6; // 0x55498f
    char v11 = v10; // 0x55498f
    bool v12 = false; // 0x55498f
    while (v9 == v10) {
        v8--;
        v6 += v5;
        v7 += v5;
        v11 = v9;
        v12 = true;
        if (v8 == 0) {
            // break -> 
            break;
        }
        v9 = *(char *)v7;
        v10 = *(char *)v6;
        v11 = v10;
        v12 = false;
    }
    unsigned char v13 = v11;
    int64_t v14 = (int64_t)!((v9 < v13 | v12)) - (int64_t)(v9 < v13); // 0x554994
    int64_t v15 = (int64_t)"POSIX"; // 0x554998
    int64_t v16 = a2; // 0x554998
    if ((char)v14 == 0) {
        // 0x5549b4
        return v14 % 256 | (int64_t)&g27 & -256;
    }
    int64_t v17 = 6; // 0x554998
    unsigned char v18 = *(char *)v16; // 0x5549a9
    char v19 = *(char *)v15; // 0x5549a9
    v16 += v5;
    char v20 = v19; // 0x5549a9
    bool v21 = false; // 0x5549a9
    while (v18 == v19) {
        // 0x55499a
        v17--;
        v15 += v5;
        v20 = v18;
        v21 = true;
        if (v17 == 0) {
            // break -> 
            break;
        }
        v18 = *(char *)v16;
        v19 = *(char *)v15;
        v16 += v5;
        v20 = v19;
        v21 = false;
    }
    unsigned char v22 = v20;
    int64_t v23 = (int64_t)!((v18 < v22 | v21)) - (int64_t)(v18 < v22); // 0x5549ae
    if ((char)v23 == 0) {
        // 0x5549b4
        return v23 % 256 | (int64_t)&g27 & -256;
    }
    // 0x5549c0
    function_5679e0(v3, v16);
    return function_5679b0(v3, a2, 0);
}

// Address range: 0x5549e4 - 0x554ac4
// From class:    std::collate_byname<char>
// Type:          constructor
int64_t function_5549e4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5549e4
    int64_t v1; // 0x5549e4
    *(int64_t *)v1 = v1 + 16;
    function_5679e0(v1, a2);
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)&g37);
    *(int32_t *)((int64_t)&g37 + 8) = (int32_t)(a3 != 0) | ((int32_t)&g37 ^ (int32_t)&g37) & -256;
    *(int64_t *)&g37 = (int64_t)&g26;
    *(int64_t *)((int64_t)&g37 + 16) = function_565f30();
    *(int64_t *)&g37 = (int64_t)&g27;
    bool v2; // 0x5549e4
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g5; // 0x5549e4
    int64_t v5 = a2; // 0x5549e4
    int64_t v6 = 2; // 0x554a6f
    unsigned char v7 = *(char *)v5; // 0x554a6f
    char v8 = *(char *)v4; // 0x554a6f
    char v9 = v8; // 0x554a6f
    bool v10 = false; // 0x554a6f
    while (v7 == v8) {
        v6--;
        v4 += v3;
        v5 += v3;
        v9 = v7;
        v10 = true;
        if (v6 == 0) {
            // break -> 
            break;
        }
        v7 = *(char *)v5;
        v8 = *(char *)v4;
        v9 = v8;
        v10 = false;
    }
    unsigned char v11 = v9;
    int64_t v12 = (int64_t)!((v7 < v11 | v10)) - (int64_t)(v7 < v11); // 0x554a74
    int64_t v13 = (int64_t)"POSIX"; // 0x554a78
    int64_t v14 = a2; // 0x554a78
    if ((char)v12 == 0) {
        // 0x554a94
        return v12 % 256 | (int64_t)&g27 & -256;
    }
    int64_t v15 = 6; // 0x554a78
    unsigned char v16 = *(char *)v14; // 0x554a89
    char v17 = *(char *)v13; // 0x554a89
    v14 += v3;
    char v18 = v17; // 0x554a89
    bool v19 = false; // 0x554a89
    while (v16 == v17) {
        // 0x554a7a
        v15--;
        v13 += v3;
        v18 = v16;
        v19 = true;
        if (v15 == 0) {
            // break -> 
            break;
        }
        v16 = *(char *)v14;
        v17 = *(char *)v13;
        v14 += v3;
        v18 = v17;
        v19 = false;
    }
    unsigned char v20 = v18;
    int64_t v21 = (int64_t)!((v16 < v20 | v19)) - (int64_t)(v16 < v20); // 0x554a8e
    if ((char)v21 == 0) {
        // 0x554a94
        return v21 % 256 | (int64_t)&g27 & -256;
    }
    // 0x554aa0
    function_5679e0((int64_t)&g37 + 16, v14);
    return function_5679b0((int64_t)&g37 + 16, a2, 0);
}
