/*
 * Targeted RetDec C for native executable gap queue batch 1558.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2af275-0x2af375 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2af375-0x2af575 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2af575-0x2af775 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2af775-0x2af975 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2af975-0x2afb75 rank=- name=- kind=- bytes=- uncovered=-
 *   0x326bbb-0x326dbb rank=- name=- kind=- bytes=- uncovered=-
 *   0x326dbb-0x326fbb rank=- name=- kind=- bytes=- uncovered=-
 *   0x326fbb-0x3271bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3273bb-0x3275b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e7bf9-0x4e7cf9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5758cd-0x575acd rank=- name=- kind=- bytes=- uncovered=-
 *   0x575acd-0x575ccd rank=- name=- kind=- bytes=- uncovered=-
 *   0x575ccd-0x575ecd rank=- name=- kind=- bytes=- uncovered=-
 *   0x575ecd-0x5760cd rank=- name=- kind=- bytes=- uncovered=-
 *   0x5760cd-0x5762cd rank=- name=- kind=- bytes=- uncovered=-
 *   0x5762cd-0x5762d0 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
extern int g4;
extern int g5;
extern int g6;
extern int g7;
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
extern int g27;
extern int g28;
extern int g29;
extern int g30;
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

int64_t function_20d68();
int64_t function_20d90();
int64_t function_2af25f();
int64_t function_2af275(int64_t a1, int64_t a2);
int64_t function_2af28c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2af32b(int64_t a1);
int64_t function_2af353(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2af368(int64_t a1);
int64_t function_2af39f(void);
int64_t function_2af3a1(void);
int64_t function_2af3ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2af3f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2af436(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2af4c9(void);
int64_t function_2af4fb(int64_t a1);
int64_t function_2af50f(int64_t a1);
int64_t function_2af518(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2af585(void);
int64_t function_2af58c(void);
int64_t function_2af594(void);
int64_t function_2af5c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2af62b(int64_t a1);
int64_t function_2af68a(void);
int64_t function_2af6a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2af720(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2af77e(void);
int64_t function_2af783(int64_t a1);
int64_t function_2af7a4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2af898(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2af89d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2af89f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2af907(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2af966(void);
int64_t function_2af975(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2afa59(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_326bbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_326ccf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_326e48(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_326f8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_327178(void);
int64_t function_327179(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_327184(void);
int64_t function_327186(int64_t a1);
int64_t function_3273bb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3273bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3274ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3274db(void);
int64_t function_327564(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_327572(void);
int64_t function_32757c(void);
int64_t function_4e7bf9(void);
int64_t function_4e7c1a(void);
int64_t function_4e7c30(void);
int64_t function_4e7c37(void);
int64_t function_4e7c45(void);
int64_t function_4e7c51(void);
int64_t function_4e7c54(void);
int64_t function_4e7c5a(void);
int64_t function_4e7c6f(void);
int64_t function_4e7ca7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4eeb50();
int64_t function_4f3f50();
int64_t function_4f4060();
int64_t function_4f4e50();
int64_t function_4f4f50();
int64_t function_542470();
int64_t function_547e30();
int64_t function_5509d0();
int64_t function_565970();
int64_t function_5679e0();
int64_t function_56b220();
int64_t function_573430();
int64_t function_573580();
int64_t function_5758cd(int64_t a1);
int64_t function_5758cf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_5758f0(int64_t a1);
int64_t function_575960(int64_t a1);
int64_t function_5759d0(int64_t a1);
int64_t function_575a40(int64_t a1);
int64_t function_575ab0(int64_t a1);
int64_t function_575b20(int64_t a1);
int64_t function_575b90(int64_t a1);
int64_t function_575c00(int64_t a1);
int64_t function_575c70(int64_t a1);
int64_t function_575d00(int64_t a1);
int64_t function_575d90(int64_t a1);
int64_t function_575e20(int64_t a1);
int64_t function_575eb0(int64_t a1);
int64_t function_575fb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_576140(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_5a23cd1d();
int64_t function_caf2a();
int64_t function_cbbbdcd();
int64_t function_ffffffffa32c33a9();
int64_t function_ffffffffb48085a9();
int64_t function_ffffffffd82b1b22();
int64_t function_ffffffffe1f3bce5();
int64_t function_ffffffffef5dc113();
int64_t unknown_2ce8eab3();
int64_t unknown_361d561e();
int64_t unknown_36602292();
int64_t unknown_6cd9425c();
int64_t unknown_77bb1168();
int64_t unknown_ffffffff8ad8853d();
int64_t unknown_ffffffffa69df42d();
int64_t unknown_ffffffffaba0bed2();
int64_t unknown_ffffffffb405b6c5();
int64_t unknown_ffffffffd8fe9cfb();
int64_t unknown_ffffffffe68b2d5c();
int64_t unknown_ffffffffeaab00d5();
int64_t unknown_fffffffffd3774b6();

// Address range: 0x2af275 - 0x2af289
int64_t function_2af275(int64_t a1, int64_t a2) {
    // 0x2af275
    int64_t v1; // 0x2af275
    bool v2; // 0x2af275
    if (v2) {
        v1 = function_2af25f();
    }
    // 0x2af277
    int64_t v3; // 0x2af275
    int32_t * v4 = (int32_t *)(v3 - 0x7db76be6); // 0x2af277
    *v4 = *v4 + (int32_t)v3;
    int32_t * v5 = (int32_t *)(a1 + 126); // 0x2af282
    *v5 = *v5 + (int32_t)v3;
    return v1 & 0xe89cc32e | 129;
}

// Address range: 0x2af28c - 0x2af2a9
int64_t function_2af28c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2af28c
    unknown_36602292();
    *(int32_t *)0x102cdb09 = *(int32_t *)0x102cdb09 + (int32_t)a2;
    char * v1 = (char *)(a4 + 103); // 0x2af29a
    *v1 = *v1 | (char)(a4 / 256);
    return function_ffffffffd82b1b22();
}

// Address range: 0x2af32b - 0x2af33a
int64_t function_2af32b(int64_t a1) {
    // 0x2af32b
    int64_t v1; // 0x2af32b
    int64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)v2;
    bool v3; // 0x2af32b
    char * v4 = (char *)(a1 - 44 + (v3 ? -4 : 4)); // 0x2af32c
    *v4 = *v4 - 1;
    return (v2 + 134) % 256 | v2 & -256;
}

// Address range: 0x2af353 - 0x2af363
int64_t function_2af353(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2af353
    int64_t v1; // 0x2af353
    unsigned char v2 = (char)v1;
    unsigned char v3 = (char)v1 + v2; // 0x2af353
    *(char *)a3 = v3;
    return unknown_ffffffffe68b2d5c(a1, a2, a3) + 0x134e0d + (int64_t)(v3 < v2) & 0xffffffff;
}

// Address range: 0x2af368 - 0x2af369
int64_t function_2af368(int64_t a1) {
    // 0x2af368
    int64_t result; // 0x2af368
    return result;
}

// Address range: 0x2af39f - 0x2af3a0
int64_t function_2af39f(void) {
    // 0x2af39f
    int64_t result; // 0x2af39f
    return result;
}

// Address range: 0x2af3a1 - 0x2af3a2
int64_t function_2af3a1(void) {
    // 0x2af3a1
    int64_t result; // 0x2af3a1
    return result;
}

// Address range: 0x2af3ac - 0x2af3e0
int64_t function_2af3ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2af3ac
    __asm_in(8);
    unknown_fffffffffd3774b6();
    int64_t v1; // 0x2af3ac
    uint64_t v2 = v1 / 256 & a3;
    char v3 = v2; // 0x2af3b5
    if (v3 >= 0) {
        function_2af3a1();
    }
    // 0x2af3bb
    __asm_in(-106);
    int64_t v4 = unknown_ffffffffb405b6c5(); // 0x2af3bf
    bool v5; // 0x2af3ac
    char * v6 = (char *)(a2 - 120 + (v5 ? -1 : 1)); // 0x2af3c4
    *v6 = *v6 + v3;
    char * v7 = (char *)(2 * v4 + a1); // 0x2af3c7
    *v7 = *v7 | (char)v4;
    *(int32_t *)-0x17d1b128 = *(int32_t *)-0x17d1b128 + (int32_t)a1;
    int32_t * v8 = (int32_t *)(v2 % 256 | a3 & -256); // 0x2af3d7
    uint32_t v9 = *v8; // 0x2af3d7
    uint32_t v10 = v9 + (int32_t)v1; // 0x2af3d7
    *v8 = v10;
    unsigned char v11 = (char)a4 % 32; // 0x2af3d9
    if (v11 != 0) {
        char * v12 = (char *)v4; // 0x2af3d9
        unsigned char v13 = *v12; // 0x2af3d9
        *v12 = (char)(v10 < v9) << v11 - 1 | v13 << v11 | (char)((int16_t)v13 >> (int16_t)(9 - v11));
    }
    return function_2af39f();
}

// Address range: 0x2af3f3 - 0x2af414
int64_t function_2af3f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 0x3f74ec5a); // 0x2af3fb
    int64_t v2; // 0x2af3f3
    *v1 = *v1 + (int32_t)v2;
    *(int32_t *)0x62a9530f = *(int32_t *)0x62a9530f + (int32_t)(a2 ^ a1);
    return v2 + 0xe8357cb4 + v2 & 0xffffffff;
}

// Address range: 0x2af436 - 0x2af445
int64_t function_2af436(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_ffffffff8ad8853d(a1, a2, a3, a4, a5); // 0x2af436
    char * v1 = (char *)(a4 + 0x1e8de16); // 0x2af43c
    int64_t v2; // 0x2af436
    *v1 = *v1 ^ (char)v2;
    return result;
}

// Address range: 0x2af4c9 - 0x2af4d9
int64_t function_2af4c9(void) {
    // 0x2af4c9
    return unknown_ffffffffeaab00d5();
}

// Address range: 0x2af4fb - 0x2af4fe
int64_t function_2af4fb(int64_t a1) {
    // 0x2af4fb
    int64_t result; // 0x2af4fb
    return result;
}

// Address range: 0x2af50f - 0x2af512
int64_t function_2af50f(int64_t a1) {
    // 0x2af50f
    int64_t result; // 0x2af50f
    return result;
}

// Address range: 0x2af518 - 0x2af570
int64_t function_2af518(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_361d561e(); // 0x2af518
    int64_t v2 = a4 - 1; // 0x2af51d
    bool v3; // 0x2af518
    if (v2 != 0 == v3) {
        // 0x2af54b
        __asm_out_133(44, (char)unknown_6cd9425c());
        return v2 & 0xffffffff;
    }
    // 0x2af51f
    *(int32_t *)a1 = (int32_t)v1;
    return v1 + 0x7832360 & 0xffffffff;
}

// Address range: 0x2af585 - 0x2af586
int64_t function_2af585(void) {
    // 0x2af585
    int64_t result; // 0x2af585
    return result;
}

// Address range: 0x2af58c - 0x2af58e
int64_t function_2af58c(void) {
    // 0x2af58c
    return function_2af585();
}

// Address range: 0x2af594 - 0x2af597
int64_t function_2af594(void) {
    // 0x2af594
    int64_t result; // 0x2af594
    return result;
}

// Address range: 0x2af5c4 - 0x2af5f7
int64_t function_2af5c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2af5c4
    int64_t v1; // 0x2af5c4
    int64_t v2 = v1 & -0xff01 | (int64_t)&g29; // 0x2af5c4
    int32_t v3 = v2; // 0x2af5c6
    __asm_out((int16_t)a3, v3);
    int32_t * v4 = (int32_t *)(a1 - 5); // 0x2af5ce
    int32_t v5 = v1; // 0x2af5ce
    *v4 = *v4 + v5;
    int32_t * v6 = (int32_t *)(2 * a1 + 62 + a4); // 0x2af5d3
    *v6 = *v6 + 117;
    bool v7; // 0x2af5c4
    uint32_t v8 = (int32_t)v7 + v3 + *(int32_t *)v2 | v5; // 0x2af5d8
    int64_t v9 = v8; // 0x2af5d8
    uint32_t v10 = (int32_t)a4 % 32; // 0x2af5e4
    if (v10 != 0) {
        int32_t * v11 = (int32_t *)(2 * v9); // 0x2af5e4
        uint32_t v12 = *v11; // 0x2af5e4
        *v11 = v12 >> v10 | v12 << 32 - v10;
    }
    int64_t v13; // 0x2af5c4
    return v9 & 0xffffff00 | (int64_t)(*(char *)&v13 & (char)v8);
}

// Address range: 0x2af62b - 0x2af637
int64_t function_2af62b(int64_t a1) {
    char v1 = *(char *)0x77d6f535; // 0x2af62d
    int64_t result; // 0x2af62b
    *(char *)0x77d6f535 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x2af68a - 0x2af68b
int64_t function_2af68a(void) {
    // 0x2af68a
    int64_t result; // 0x2af68a
    return result;
}

// Address range: 0x2af6a0 - 0x2af6fd
int64_t function_2af6a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2af6a0
    int64_t v1; // 0x2af6a0
    if ((int32_t)(v1 & a2) == 0) {
        // 0x2af6a4
        return function_ffffffffa32c33a9();
    }
    // 0x2af6d4
    *(int32_t *)a1 = (int32_t)a2;
    unsigned char v2 = (char)a4 % 32; // 0x2af6e5
    char * v3 = (char *)0x135bad630; // 0x2af6e5
    if (v2 != 0) {
        v3 = (char *)(((int64_t)(-86 << v2 | (char)(170 >> (int16_t)(9 - v2)) | (char)((int32_t)v1 < 0x8f58701) << v2 - 1) | 0xb6b99800) + 0x7f013d86);
    }
    // 0x2af6d4
    bool v4; // 0x2af6a0
    int64_t v5 = v4 ? -4 : 4; // 0x2af6e4
    char * v6 = v3; // 0x2af6e7
    *v6 = *v6 + (char)a3;
    *(char *)0x47aeadce = *(char *)0x47aeadce & -104;
    return unknown_ffffffffd8fe9cfb(v5 + a1, v5 + a2);
}

// Address range: 0x2af720 - 0x2af738
int64_t function_2af720(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x2af720
    int64_t v2; // 0x2af720
    if (v1 != 0) {
        char * v3 = (char *)(v2 - 76); // 0x2af720
        unsigned char v4 = *v3; // 0x2af720
        bool v5; // 0x2af720
        *v3 = v4 << v1 | (char)v5 << v1 - 1 | (char)((int16_t)v4 >> (int16_t)(9 - v1));
    }
    uint32_t v6 = (int32_t)a4 % 32; // 0x2af725
    if (v6 != 0) {
        int32_t * v7 = (int32_t *)(v2 ^ 14); // 0x2af725
        uint32_t v8 = *v7; // 0x2af725
        *v7 = v8 >> 32 - v6 | v8 << v6;
    }
    unknown_ffffffffa69df42d();
    int64_t v9; // 0x2af720
    int64_t result = (int64_t)&v9; // 0x2af72d
    __asm_out_133(-97, (char)result);
    return result;
}

// Address range: 0x2af77e - 0x2af780
int64_t function_2af77e(void) {
    // 0x2af77e
    int64_t v1; // 0x2af77e
    return function_2af7a4(v1, v1, v1, v1, (int64_t)&g30);
}

// Address range: 0x2af783 - 0x2af787
int64_t function_2af783(int64_t a1) {
    // 0x2af783
    int64_t result; // 0x2af783
    return result;
}

// Address range: 0x2af7a4 - 0x2af883
int64_t function_2af7a4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2af7a4
    int64_t v1; // 0x2af7a4
    int64_t v2 = v1;
    int64_t v3 = a2;
    int32_t v4 = *(int32_t *)(a1 + 0x1d0c990f); // 0x2af7a4
    *(int32_t *)v2 = (int32_t)v2 - 78;
    int64_t v5 = unknown_2ce8eab3(); // 0x2af7ad
    char * v6 = (char *)(v5 + 0x48e05e00); // 0x2af7b2
    *v6 = *v6 + (char)v5;
    uint64_t v7 = a4 / 256; // 0x2af7b8
    int32_t * v8 = (int32_t *)((int64_t)(v4 & (int32_t)v1) - 0x70ff3900); // 0x2af7ba
    int32_t v9 = v1; // 0x2af7ba
    *v8 = *v8 + v9;
    int32_t v10 = *(int32_t *)(((v5 + v7) % 256 | v5 & -256) - 27); // 0x2af7c4
    uint32_t v11 = (int32_t)((v5 & 256) != 0) + (int32_t)a3 + v10; // 0x2af7c4
    int64_t v12 = unknown_ffffffffaba0bed2(); // 0x2af7cc
    int32_t * v13 = (int32_t *)(int64_t)v11; // 0x2af7d1
    *v13 = *v13 + (int32_t)a4;
    int64_t v14 = v12 & 0x4eeeebab | 0xb1111454; // 0x2af7d3
    int64_t result = (v14 | v7) % 256 | v14 & 0xffffff00; // 0x2af7d8
    int32_t * v15 = (int32_t *)(a4 + 0xe0c9cfa); // 0x2af7da
    *v15 = *v15 + v9;
    if (*(int32_t *)&v3 < 0x250c491b) {
        // 0x2af846
        float80_t v16; // 0x2af7a4
        *(int16_t *)(a4 + 0x1e8428e) = (int16_t)v16;
        return result;
    }
    char * v17 = (char *)(result + 0x5e960c03); // 0x2af7ef
    unsigned char v18 = *v17; // 0x2af7ef
    unsigned char v19 = v18 + (char)v11; // 0x2af7ef
    *v17 = v19;
    int32_t * v20 = (int32_t *)result; // 0x2af7f5
    *v20 = v11;
    *(int32_t *)a1 = __asm_insd((int16_t)*v20);
    return result - (v19 < v18 ? 0xfafb01e9 : 0xfafb01e8) & 0xfffeffff;
}

// Address range: 0x2af898 - 0x2af89c
int64_t function_2af898(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2af898
    return function_2af89f(a1, a2, a3, a4);
}

// Address range: 0x2af89d - 0x2af89f
int64_t function_2af89d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2af89d
    int64_t result; // 0x2af89d
    *(int32_t *)a4 = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x2af89f - 0x2af8a6
int64_t function_2af89f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2af89f
    return a4 + 0x5365f3f5 & 0xffffffff;
}

// Address range: 0x2af907 - 0x2af918
int64_t function_2af907(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2af907
    __asm_in_135((int16_t)a3);
    return function_ffffffffb48085a9();
}

// Address range: 0x2af966 - 0x2af967
int64_t function_2af966(void) {
    // 0x2af966
    int64_t result; // 0x2af966
    return result;
}

// Address range: 0x2af975 - 0x2af97b
int64_t function_2af975(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2af975
    int64_t result; // 0x2af975
    int32_t * v1 = (int32_t *)(result + 18); // 0x2af975
    *v1 = *v1 + (int32_t)a4;
    return result;
}

// Address range: 0x2afa59 - 0x2afac0
int64_t function_2afa59(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2afa59
    *(int864_t *)(a2 - 0x22424ac9 + 2 * a1) = (int864_t)__asm_fnsave();
    uint64_t v1 = unknown_77bb1168(); // 0x2afa62
    uint64_t v2 = v1 + a4 / 256; // 0x2afa69
    int64_t v3; // 0x2afa59
    char * v4 = (char *)((v3 & -0xff01 | (int64_t)&g28) - 48); // 0x2afa6b
    unsigned char v5 = *v4; // 0x2afa6b
    *v4 = v5 / 128 | 2 * v5;
    int32_t v6 = (int32_t)(a4 - 256 * v2 & 0xff00 | a4 & 0xffff00ff) + (int32_t)v3; // 0x2afa70
    if (v6 >= 1) {
        // 0x2afa75
        return v2 % 256 | v1 & -256;
    }
    int64_t v7 = v6; // 0x2afa70
    int32_t * v8 = (int32_t *)((v1 / 256 + a3 + v7) % 256 | v7 & 0xffffff00); // 0x2afabb
    *v8 = *v8 + (int32_t)v3;
    return __asm_sti() & -0xff01 | (int64_t)&g27;
}

// Address range: 0x326bbb - 0x326ccf
int64_t function_326bbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x326bbb
    return function_caf2a(a1, a2, a3, a6, a5);
}

// Address range: 0x326ccf - 0x326e48
int64_t function_326ccf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x326ccf
    int64_t v1; // bp-24, 0x326ccf
    int64_t v2 = (int64_t)&v1; // 0x326d10
    v1 = 0x321ea2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x326d20
    int64_t v4 = v2 - 16; // 0x326d29
    int64_t * v5 = (int64_t *)v4; // 0x326d29
    *v5 = a2;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x326d42
    int64_t v7 = *(int64_t *)(v2 + 32); // 0x326d9f
    *v3 = v7;
    *v5 = v2;
    int64_t * v8 = (int64_t *)(v2 + 16); // 0x326dbe
    int64_t v9 = *v8; // 0x326dbe
    *v3 = v9;
    *v5 = v2;
    int64_t * v10 = (int64_t *)(v2 - 32); // 0x326df0
    *v10 = v7;
    v1 = *v5;
    *v6 = 0x10904c28;
    *v10 = v9;
    *v8 = *v5;
    *v5 = a4;
    *v6 = v4;
    *v5 = v2;
    int64_t v11 = *v3; // 0x326e2d
    *v5 = v11;
    *v6 = v11;
    int64_t v12; // 0x326ccf
    return function_caf2a(a1, *v5, a3, *v5, v12);
}

// Address range: 0x326e48 - 0x326f8c
int64_t function_326e48(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x326e48
    int64_t v1; // bp-32, 0x326e48
    int64_t v2 = (int64_t)&v1; // 0x326ed7
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x326ee3
    int64_t v4 = v2 - 8; // 0x326ee3
    int64_t * v5 = (int64_t *)v4; // 0x326ee3
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x326ee7
    *v6 = a1;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x326efa
    *v7 = v2;
    int64_t v8 = *v6; // 0x326efb
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x326efb
    *v9 = v8;
    int64_t * v10 = (int64_t *)(v2 + 8); // 0x326f04
    int64_t v11 = *v10; // 0x326f04
    *v6 = v11;
    *v7 = 0x69090e16;
    int64_t * v12 = (int64_t *)(v2 - 40); // 0x326f32
    *v12 = v3;
    *v5 = *v7;
    *v7 = 0x7ee7fe53;
    *v9 = 0x261d04c5;
    *v12 = v11;
    *v10 = *v7;
    int64_t v13 = *v6; // 0x326f51
    *v7 = v13;
    *v9 = v13;
    *v6 = *v5;
    *v7 = v4;
    return function_caf2a(v8, a2, a3, a4, a5);
}

// Address range: 0x326f8c - 0x327119
int64_t function_326f8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x326f8c
    return function_caf2a(a1, a2, a3, a4, a5);
}

// Address range: 0x327178 - 0x327179
int64_t function_327178(void) {
    // 0x327178
    int64_t result; // 0x327178
    return result;
}

// Address range: 0x327179 - 0x32717e
int64_t function_327179(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x327179
    int64_t v1; // 0x327179
    char * v2 = (char *)(v1 - 127); // 0x327179
    *v2 = *v2 | (char)a4;
    return function_327186((int64_t)&g30);
}

// Address range: 0x327184 - 0x327186
int64_t function_327184(void) {
    // 0x327184
    int64_t v1; // 0x327184
    return v1 & -184;
}

// Address range: 0x327186 - 0x3271bb
int64_t function_327186(int64_t a1) {
    int64_t v1 = a1 & 0xffffffff; // 0x327186
    int64_t result = *(int64_t *)(v1 + 32); // 0x32718d
    *(int64_t *)(v1 - 8) = result;
    int64_t v2 = v1 - 16; // 0x327195
    int64_t * v3 = (int64_t *)v2; // 0x327195
    int64_t * v4 = (int64_t *)(v1 - 24); // 0x327197
    *v4 = v2;
    *v3 = v1;
    int64_t v5 = *(int64_t *)(v1 + 8); // 0x3271b3
    *v3 = v5;
    *v4 = v5;
    return result;
}

// Address range: 0x3273bb - 0x3273bc
int64_t function_3273bb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3273bb
    int64_t result; // 0x3273bb
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x3273bd - 0x3274b7
int64_t function_3273bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3273bd
    int64_t v1; // 0x3273bd
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x3273bd
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return function_caf2a(a1, a2, a3, a7, a5);
}

// Address range: 0x3274ca - 0x3274d9
int64_t function_3274ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3274ca
    int64_t v1; // 0x3274ca
    int64_t v2 = v1 & 2 | 253; // 0x3274cb
    int64_t v3 = v2 | v1 & -256; // 0x3274cb
    char * v4 = (char *)v3; // 0x3274cf
    *v4 = *v4 + (char)v2;
    char * v5 = (char *)(v3 - 127); // 0x3274d1
    *v5 = *v5 + (char)a4;
    bool v6; // 0x3274ca
    return function_5a23cd1d((v6 ? -4 : 4) + a1);
}

// Address range: 0x3274db - 0x3274e0
int64_t function_3274db(void) {
    // 0x3274db
    return function_ffffffffe1f3bce5();
}

// Address range: 0x327564 - 0x32756e
int64_t function_327564(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x327564
    int64_t v1; // 0x327564
    char * v2 = (char *)((v1 & -256 | (int64_t)__asm_in_135((int16_t)a3)) - 101); // 0x327565
    *v2 = *v2 | (char)(a4 / 256);
    return function_cbbbdcd();
}

// Address range: 0x327572 - 0x327577
int64_t function_327572(void) {
    // 0x327572
    int64_t v1; // 0x327572
    int64_t v2 = v1;
    return (v2 + 220) % 256 | v2 & -256;
}

// Address range: 0x32757c - 0x32757f
int64_t function_32757c(void) {
    // 0x32757c
    int64_t result; // 0x32757c
    return result;
}

// Address range: 0x4e7bf9 - 0x4e7bfa
int64_t function_4e7bf9(void) {
    // 0x4e7bf9
    int64_t result; // 0x4e7bf9
    return result;
}

// Address range: 0x4e7c1a - 0x4e7c1b
int64_t function_4e7c1a(void) {
    // 0x4e7c1a
    int64_t result; // 0x4e7c1a
    return result;
}

// Address range: 0x4e7c30 - 0x4e7c32
int64_t function_4e7c30(void) {
    // 0x4e7c30
    return function_4e7c1a();
}

// Address range: 0x4e7c37 - 0x4e7c38
int64_t function_4e7c37(void) {
    // 0x4e7c37
    int64_t result; // 0x4e7c37
    return result;
}

// Address range: 0x4e7c45 - 0x4e7c47
int64_t function_4e7c45(void) {
    // 0x4e7c45
    return function_4e7c37();
}

// Address range: 0x4e7c51 - 0x4e7c52
int64_t function_4e7c51(void) {
    // 0x4e7c51
    int64_t result; // 0x4e7c51
    return result;
}

// Address range: 0x4e7c54 - 0x4e7c55
int64_t function_4e7c54(void) {
    // 0x4e7c54
    int64_t result; // 0x4e7c54
    return result;
}

// Address range: 0x4e7c5a - 0x4e7c5c
int64_t function_4e7c5a(void) {
    // 0x4e7c5a
    return function_4e7c54();
}

// Address range: 0x4e7c6f - 0x4e7c71
int64_t function_4e7c6f(void) {
    // 0x4e7c6f
    return function_4e7c51();
}

// Address range: 0x4e7ca7 - 0x4e7cad
int64_t function_4e7ca7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4e7ca7
    int64_t v1; // 0x4e7ca7
    __asm_out((int16_t)a3, (int32_t)v1);
    return function_ffffffffef5dc113();
}

// Address range: 0x5758cd - 0x5758ce
int64_t function_5758cd(int64_t a1) {
    // 0x5758cd
    int64_t result; // 0x5758cd
    return result;
}

// Address range: 0x5758cf - 0x5758ed
int64_t function_5758cf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x5758cf
    int64_t v1; // 0x5758cf
    int32_t * v2 = (int32_t *)(v1 + 0x508d0847); // 0x5758cf
    *v2 = *v2 - 1;
    int32_t * v3 = (int32_t *)(v1 + 0x578901f8); // 0x5758d5
    *v3 = *v3 + 1;
    char * v4 = (char *)(v1 - 23); // 0x5758db
    *v4 = *v4 | (char)(a3 / 256);
    return function_56b220(v1);
}

// Address range: 0x5758f0 - 0x575956
int64_t function_5758f0(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x575903
    *v1 = (int64_t)&g6;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 16) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g16;
    function_565970(a1);
    return function_4eeb50(a1);
}

// Address range: 0x575960 - 0x5759c6
int64_t function_575960(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x575973
    *v1 = (int64_t)&g17;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g13;
    function_5679e0(a1 + 16);
    return function_565970(a1);
}

// Address range: 0x5759d0 - 0x575a36
int64_t function_5759d0(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x5759e3
    *v1 = (int64_t)&g20;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g9;
    function_5679e0(a1 + 16);
    return function_565970(a1);
}

// Address range: 0x575a40 - 0x575aa6
int64_t function_575a40(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x575a53
    *v1 = (int64_t)&g2;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 16) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g14;
    function_565970(a1);
    return function_4eeb50(a1);
}

// Address range: 0x575ab0 - 0x575b16
int64_t function_575ab0(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x575ac3
    *v1 = (int64_t)&g4;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 16) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g10;
    function_565970(a1);
    return function_4eeb50(a1);
}

// Address range: 0x575b20 - 0x575b86
int64_t function_575b20(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x575b33
    *v1 = (int64_t)&g3;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 16) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g15;
    function_565970(a1);
    return function_4eeb50(a1);
}

// Address range: 0x575b90 - 0x575bf6
int64_t function_575b90(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x575ba3
    *v1 = (int64_t)&g7;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 16) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g12;
    function_565970(a1);
    return function_4eeb50(a1);
}

// Address range: 0x575c00 - 0x575c66
int64_t function_575c00(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x575c13
    *v1 = (int64_t)&g5;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 16) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g11;
    function_565970(a1);
    return function_4eeb50(a1);
}

// Address range: 0x575c70 - 0x575cf5
int64_t function_575c70(int64_t a1) {
    // 0x575c70
    *(int64_t *)a1 = (int64_t)&g19;
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x575c86
    *(int64_t *)(*v1 + 24) = 0;
    *(int64_t *)(*v1 + 48) = 0;
    *(int64_t *)(*v1 + 64) = 0;
    *(int64_t *)(*v1 + 80) = 0;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    int32_t v3 = *v2;
    int32_t v4 = v3 - 1;
    if (g25 == 0) {
        // 0x575cd8
        *v2 = v4;
        if (v3 != 1) {
            // 0x575ccb
            return function_4f4060(a1);
        }
    } else {
        // 0x575cbc
        *v2 = v4;
        if (v3 != 1) {
            // 0x575ccb
            return function_4f4060(a1);
        }
    }
    // 0x575ce6
    return function_4f4060(a1);
}

// Address range: 0x575d00 - 0x575d85
int64_t function_575d00(int64_t a1) {
    // 0x575d00
    *(int64_t *)a1 = (int64_t)&g22;
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x575d16
    *(int64_t *)(*v1 + 24) = 0;
    *(int64_t *)(*v1 + 56) = 0;
    *(int64_t *)(*v1 + 72) = 0;
    *(int64_t *)(*v1 + 88) = 0;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    int32_t v3 = *v2;
    int32_t v4 = v3 - 1;
    if (g25 == 0) {
        // 0x575d68
        *v2 = v4;
        if (v3 != 1) {
            // 0x575d5b
            return function_4f4f50(a1);
        }
    } else {
        // 0x575d4c
        *v2 = v4;
        if (v3 != 1) {
            // 0x575d5b
            return function_4f4f50(a1);
        }
    }
    // 0x575d76
    return function_4f4f50(a1);
}

// Address range: 0x575d90 - 0x575e15
int64_t function_575d90(int64_t a1) {
    // 0x575d90
    *(int64_t *)a1 = (int64_t)&g18;
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x575da6
    *(int64_t *)(*v1 + 24) = 0;
    *(int64_t *)(*v1 + 48) = 0;
    *(int64_t *)(*v1 + 64) = 0;
    *(int64_t *)(*v1 + 80) = 0;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    int32_t v3 = *v2;
    int32_t v4 = v3 - 1;
    if (g25 == 0) {
        // 0x575df8
        *v2 = v4;
        if (v3 != 1) {
            // 0x575deb
            return function_4f3f50(a1);
        }
    } else {
        // 0x575ddc
        *v2 = v4;
        if (v3 != 1) {
            // 0x575deb
            return function_4f3f50(a1);
        }
    }
    // 0x575e06
    return function_4f3f50(a1);
}

// Address range: 0x575e20 - 0x575ea5
int64_t function_575e20(int64_t a1) {
    // 0x575e20
    *(int64_t *)a1 = (int64_t)&g21;
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x575e36
    *(int64_t *)(*v1 + 24) = 0;
    *(int64_t *)(*v1 + 56) = 0;
    *(int64_t *)(*v1 + 72) = 0;
    *(int64_t *)(*v1 + 88) = 0;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    int32_t v3 = *v2;
    int32_t v4 = v3 - 1;
    if (g25 == 0) {
        // 0x575e88
        *v2 = v4;
        if (v3 != 1) {
            // 0x575e7b
            return function_4f4e50(a1);
        }
    } else {
        // 0x575e6c
        *v2 = v4;
        if (v3 != 1) {
            // 0x575e7b
            return function_4f4e50(a1);
        }
    }
    // 0x575e96
    return function_4f4e50(a1);
}

// Address range: 0x575eb0 - 0x575fb0
int64_t function_575eb0(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x575eb4
    int64_t v2 = a1 - 24; // 0x575ec7
    if (v2 != *(int64_t *)0x848c20) {
        int32_t * v3 = (int32_t *)(a1 - 8);
        int32_t v4 = *v3;
        *v3 = v4 - 1;
        if (v4 >= 0 != v4 != 0) {
            // 0x575f08
            int64_t v5; // bp-17, 0x575eb0
            function_5509d0(v2, &v5, v4);
        }
    }
    int64_t result = __readfsqword(40) ^ v1; // 0x575ed9
    if (result == 0) {
        // 0x575ee4
        return result;
    }
    // 0x575f23
    __stack_chk_fail();
    int64_t v6 = __readfsqword(40); // 0x575f34
    int64_t v7 = *(int64_t *)v2; // 0x575f44
    int64_t v8 = v7 - 24; // 0x575f47
    if (v8 != (int64_t)g23) {
        int32_t * v9 = (int32_t *)(v7 - 8);
        int32_t v10 = *v9;
        *v9 = v10 - 1;
        if (v10 >= 0 != v10 != 0) {
            // 0x575f88
            int64_t v11; // bp-41, 0x575eb0
            function_547e30(v8, &v11, v10);
        }
    }
    int64_t result2 = __readfsqword(40) ^ v6; // 0x575f59
    if (result2 == 0) {
        // 0x575ee4
        return result2;
    }
    // 0x575fa3
    __stack_chk_fail();
    return (int64_t)&g30;
}

// Address range: 0x575fb0 - 0x57613b
int64_t function_575fb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x575fb0
    __readfsqword(40);
    function_573580();
    int64_t v1; // 0x575fb0
    int64_t v2 = v1 - 24;
    int64_t v3 = function_542470("uninitialized __any_string"); // 0x576104
    while (true) {
        // 0x576107
        _Unwind_Resume((struct _Unwind_Exception *)v3);
        if (v2 != g24) {
            // 0x576131
            int64_t v4; // bp-117, 0x575fb0
            function_20d68(v2, &v4);
        }
        // 0x576107
        v3 = (int64_t)&g30;
    }
}

// Address range: 0x576140 - 0x5762cb
int64_t function_576140(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x576140
    __readfsqword(40);
    function_573430();
    int64_t v1; // 0x576140
    int64_t v2 = v1 - 24;
    int64_t v3 = function_542470("uninitialized __any_string"); // 0x576294
    while (true) {
        // 0x576297
        _Unwind_Resume((struct _Unwind_Exception *)v3);
        if (v2 != (int64_t)g23) {
            // 0x5762c1
            int64_t v4; // bp-117, 0x576140
            function_20d90(v2, &v4);
        }
        // 0x576297
        v3 = (int64_t)&g30;
    }
}
