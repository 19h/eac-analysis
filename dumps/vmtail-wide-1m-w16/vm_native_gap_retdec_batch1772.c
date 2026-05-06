/*
 * Targeted RetDec C for native executable gap queue batch 1772.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xcee60-0xcf060 rank=- name=- kind=- bytes=- uncovered=-
 *   0xcf060-0xcf260 rank=- name=- kind=- bytes=- uncovered=-
 *   0xcf260-0xcf3c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a4119-0x2a4319 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a4319-0x2a4519 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a4519-0x2a468f rank=- name=- kind=- bytes=- uncovered=-
 *   0x434e93-0x435093 rank=- name=- kind=- bytes=- uncovered=-
 *   0x435093-0x435293 rank=- name=- kind=- bytes=- uncovered=-
 *   0x435293-0x4353f8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48ca52-0x48cc52 rank=- name=- kind=- bytes=- uncovered=-
 *   0x494833-0x494a33 rank=- name=- kind=- bytes=- uncovered=-
 *   0x494a33-0x494c33 rank=- name=- kind=- bytes=- uncovered=-
 *   0x494c33-0x494d90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c885e-0x4c8a5e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c8a5e-0x4c8c5e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c8c5e-0x4c8db0 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_24ded();
int64_t function_2a4119(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a417a(void);
int64_t function_2a4189(int64_t a1);
int64_t function_2a419e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a41c7(int64_t a1);
int64_t function_2a4254(int64_t a1, int64_t a2);
int64_t function_2a4272(void);
int64_t function_2a4288(void);
int64_t function_2a4289(void);
int64_t function_2a42ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a42c2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2a42db(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a431a(void);
int64_t function_2a4343(void);
int64_t function_2a43bf(void);
int64_t function_2a43c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a43c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a445e(void);
int64_t function_2a4464(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a4471(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2a44b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a4512(int64_t a1);
int64_t function_2a4539(void);
int64_t function_2a454e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a4579(void);
int64_t function_2a45dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a4675(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a4fa2ba();
int64_t function_434e93(int64_t a1);
int64_t function_434f46(int64_t a1);
int64_t function_434f86(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_435032(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_435102(void);
int64_t function_43510f(void);
int64_t function_435121(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_435239(int64_t a1);
int64_t function_435274(void);
int64_t function_435292(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_435320(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_435331(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_435372(void);
int64_t function_435387(void);
int64_t function_43539a(int64_t a1);
int64_t function_4353a3(void);
int64_t function_4353c4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4353f0(void);
int64_t function_435413();
int64_t function_435415();
int64_t function_48ca52(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_490032();
int64_t function_4901b3();
int64_t function_494725();
int64_t function_494833(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_494866(int64_t a1);
int64_t function_494870(int64_t a1, int64_t a2);
int64_t function_494930(int64_t a1, int64_t a2, int64_t a3);
int64_t function_494aa0(int64_t a1, int64_t a2);
int64_t function_494ba0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_49e770();
int64_t function_49e960();
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4b1590();
int64_t function_4b1680();
int64_t function_4b1a80();
int64_t function_4b1ac0();
int64_t function_4b1fc0();
int64_t function_4b26c0();
int64_t function_4b36d0();
int64_t function_4b3cf0();
int64_t function_4c1d60();
int64_t function_4c1df0();
int64_t function_4c1e10();
int64_t function_4c2a20();
int64_t function_4c885e(int64_t a1);
int64_t function_4c8da0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4cb410();
int64_t function_4cb4a0();
int64_t function_4cb4c0();
int64_t function_4cc900();
int64_t function_4cdd20();
int64_t function_4cddb0();
int64_t function_4cddd0();
int64_t function_4ce580();
int64_t function_52a5a();
int64_t function_5f453();
int64_t function_5f47b();
int64_t function_616359cd();
int64_t function_69e876ef();
int64_t function_cede5();
int64_t function_cee60(void);
int64_t function_cee61(int64_t a1, int64_t a2, int64_t a3);
int64_t function_cef10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_cf155(void);
int64_t function_cf1f1(void);
int64_t function_cf1f9(void);
int64_t function_cf237(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_cf249(void);
int64_t function_cf252(void);
int64_t function_cf272(void);
int64_t function_cf278(void);
int64_t function_cf289(void);
int64_t function_cf28b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_cf2cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_ffffffffc2314699();
int64_t function_fffffffff4777188();
int64_t unknown_ffffffffbb34aab4();
int64_t unknown_ffffffffe1c49c52();

// Address range: 0xcee60 - 0xcee61
int64_t function_cee60(void) {
    // 0xcee60
    int64_t result; // 0xcee60
    return result;
}

// Address range: 0xcee61 - 0xcef10
int64_t function_cee61(int64_t a1, int64_t a2, int64_t a3) {
    // 0xcee61
    int64_t v1; // 0xcee61
    *(int32_t *)__asm_hlt() = (int32_t)v1 - 0x7ffd0d29;
    return function_cede5();
}

// Address range: 0xcef10 - 0xcf14c
int64_t function_cef10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xcef10
    int64_t v1; // bp-2004783145, 0xcef10
    int64_t v2 = (int64_t)&v1; // 0xcefc5
    int64_t * v3 = (int64_t *)(v2 + 0x777e9029); // 0xcefe3
    *(int64_t *)(v2 + 0x777e9021) = a5 + 0x7ff767ba;
    *v3 = a5 ^ 0x7fdda352;
    int64_t v4; // 0xcef10
    *(int64_t *)(v4 + a5) = a5;
    int64_t * v5 = (int64_t *)(v2 + 0x777e9031); // 0xcf04c
    *v3 = *v5;
    int64_t v6 = *(int64_t *)(v2 + 0x777e90c1); // 0xcf057
    *v5 = v6;
    *v3 = *v3 ^ v2 + 0x777e9039 ^ *v3;
    return 8 * v6 + a5;
}

// Address range: 0xcf155 - 0xcf158
int64_t function_cf155(void) {
    // 0xcf155
    int64_t result; // 0xcf155
    return result;
}

// Address range: 0xcf1f1 - 0xcf1f3
int64_t function_cf1f1(void) {
    // 0xcf1f1
    int64_t result; // 0xcf1f1
    return result;
}

// Address range: 0xcf1f9 - 0xcf1fc
int64_t function_cf1f9(void) {
    // 0xcf1f9
    int64_t result; // 0xcf1f9
    return result;
}

// Address range: 0xcf237 - 0xcf249
int64_t function_cf237(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 1); // 0xcf237
    int64_t result; // 0xcf237
    bool v2; // 0xcf237
    *v1 = (int32_t)v2 + (int32_t)result + *v1;
    return result;
}

// Address range: 0xcf249 - 0xcf24b
int64_t function_cf249(void) {
    // 0xcf249
    int64_t result; // 0xcf249
    return result;
}

// Address range: 0xcf252 - 0xcf254
int64_t function_cf252(void) {
    // 0xcf252
    int64_t result; // 0xcf252
    return result;
}

// Address range: 0xcf272 - 0xcf275
int64_t function_cf272(void) {
    // 0xcf272
    int64_t result; // 0xcf272
    return result;
}

// Address range: 0xcf278 - 0xcf279
int64_t function_cf278(void) {
    // 0xcf278
    int64_t result; // 0xcf278
    return result;
}

// Address range: 0xcf289 - 0xcf28b
int64_t function_cf289(void) {
    // 0xcf289
    int64_t v1; // 0xcf289
    return function_cf2cc(v1, v1, v1, v1, v1, (int64_t)&g23);
}

// Address range: 0xcf28b - 0xcf2cc
int64_t function_cf28b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0xcf28b
    int64_t result; // 0xcf28b
    return result;
}

// Address range: 0xcf2cc - 0xcf3c7
int64_t function_cf2cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a6 - 8); // 0xcf2df
    *(int64_t *)(a6 - 24) = a2;
    int64_t * v2 = (int64_t *)(a6 - 40); // 0xcf333
    *v2 = 0x2e367d6b;
    *(int64_t *)(a6 - 32) = a5;
    *v1 = (0x6bcf7f6a - (*v2 + 0x5dd74149) / 2048 ^ 0x6bbdfdbb) + a6;
    return *v1;
}

// Address range: 0x2a4119 - 0x2a4131
int64_t function_2a4119(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t v2; // 0x2a4119
    // 0x2a411b
    *(char *)a1 = (char)a2;
    int64_t v3 = v1;
    *(char *)v3 = *(char *)&v1 - (char)v3;
    return v2 & -65;
}

// Address range: 0x2a417a - 0x2a417d
int64_t function_2a417a(void) {
    // 0x2a417a
    int64_t result; // 0x2a417a
    return result;
}

// Address range: 0x2a4189 - 0x2a418c
int64_t function_2a4189(int64_t a1) {
    // 0x2a4189
    int64_t result; // 0x2a4189
    int64_t v1 = result;
    *(char *)v1 = (char)v1;
    return result;
}

// Address range: 0x2a419e - 0x2a41b2
int64_t function_2a419e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a419e
    int64_t v1; // 0x2a419e
    return v1 + 0xea6829eb & 0xffffffff;
}

// Address range: 0x2a41c7 - 0x2a41ca
int64_t function_2a41c7(int64_t a1) {
    // 0x2a41c7
    int64_t result; // 0x2a41c7
    return result;
}

// Address range: 0x2a4254 - 0x2a4259
int64_t function_2a4254(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 57); // 0x2a4254
    int64_t v2; // 0x2a4254
    *v1 = *v1 + (int32_t)v2;
    return function_2a42ac(a1, a2, v2, v2);
}

// Address range: 0x2a4272 - 0x2a4278
int64_t function_2a4272(void) {
    // 0x2a4272
    int64_t result; // 0x2a4272
    return result;
}

// Address range: 0x2a4288 - 0x2a4289
int64_t function_2a4288(void) {
    // 0x2a4288
    int64_t result; // 0x2a4288
    return result;
}

// Address range: 0x2a4289 - 0x2a428c
int64_t function_2a4289(void) {
    // 0x2a4289
    int64_t result; // 0x2a4289
    return result;
}

// Address range: 0x2a42ac - 0x2a42c1
int64_t function_2a42ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffbb34aab4(); // 0x2a42ae
    uint32_t v2 = *(int32_t *)(v1 & 0xffffffff) * (int32_t)v1; // 0x2a42b3
    unsigned char v3 = *(char *)-0x13896642; // 0x2a42b7
    int64_t v4; // 0x2a42ac
    unsigned char v5 = v3 + (char)((uint64_t)v4 / 256); // 0x2a42b7
    *(char *)-0x13896642 = v5;
    return ((int64_t)v2 + 97 + (int64_t)(v5 < v3)) % 256 | (int64_t)(v2 & -256);
}

// Address range: 0x2a42c2 - 0x2a42da
int64_t function_2a42c2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2a42c2
    int64_t v1; // 0x2a42c2
    unsigned char v2 = (char)v1; // 0x2a42c2
    bool v3; // 0x2a42c2
    unsigned char v4 = (char)v3 + (char)v1; // 0x2a42c2
    int64_t v5 = v1 & -256 | (int64_t)(v2 - v4); // 0x2a42c4
    if (v4 >= v2) {
        v5 = function_2a4288();
    }
    // 0x2a42c6
    *(char *)a6 = (char)v1 + (char)a6;
    int64_t result = v5 & 0xffffffff ^ 0x13d3629; // 0x2a42ce
    char * v6 = (char *)result; // 0x2a42d3
    *v6 = *v6 + (char)(a4 / 256);
    return result;
}

// Address range: 0x2a42db - 0x2a42e2
int64_t function_2a42db(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a42db
    return function_69e876ef();
}

// Address range: 0x2a431a - 0x2a431b
int64_t function_2a431a(void) {
    // 0x2a431a
    int64_t result; // 0x2a431a
    return result;
}

// Address range: 0x2a4343 - 0x2a4345
int64_t function_2a4343(void) {
    // 0x2a4343
    return function_2a431a();
}

// Address range: 0x2a43bf - 0x2a43c1
int64_t function_2a43bf(void) {
    // 0x2a43bf
    int64_t v1; // 0x2a43bf
    return function_2a43c4(v1, v1, v1, v1);
}

// Address range: 0x2a43c3 - 0x2a43c4
int64_t function_2a43c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a43c3
    return a4 & 0xffffffff;
}

// Address range: 0x2a43c4 - 0x2a43d9
int64_t function_2a43c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a43c4
    int64_t v1; // 0x2a43c4
    char v2 = v1;
    bool v3; // 0x2a43c4
    char v4 = v2 + (char)a4 + (char)v3; // 0x2a43c4
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x2a43c4
    *(char *)v1 = v4;
    __asm_out(62, v2);
    while (v5 % 2 != 0) {
        // 0x2a43c7
        int64_t v6; // 0x2a43c4
        v6 -= 8;
        __asm_out(62, v2);
    }
    // 0x2a43cc
    *(int32_t *)a1 = (int32_t)v1;
    int128_t v7 = v1; // 0x2a43ce
    uint128_t result = v7 * v7; // 0x2a43ce
    int32_t * v8 = (int32_t *)(int64_t)(result / 0x8000000000000000); // 0x2a43d1
    *v8 = *v8 + (int32_t)a2;
    return result;
}

// Address range: 0x2a445e - 0x2a4463
int64_t function_2a445e(void) {
    // 0x2a445e
    return __asm_in(-9);
}

// Address range: 0x2a4464 - 0x2a446b
int64_t function_2a4464(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a4464
    int64_t result; // 0x2a4464
    return result;
}

// Address range: 0x2a4471 - 0x2a447c
int64_t function_2a4471(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    char * v1 = (char *)(a6 - 0x1713fc00); // 0x2a4471
    bool v2; // 0x2a4471
    *v1 = 2 * *v1 | (char)v2;
    int64_t result; // 0x2a4471
    return result;
}

// Address range: 0x2a44b0 - 0x2a44c9
int64_t function_2a44b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a44b0
    int64_t v1; // 0x2a44b0
    bool v2; // 0x2a44b0
    *(char *)a2 = 2 * (char)v1 + (char)v2;
    *(char *)(a4 - 0x55e2dc9) = (char)a3;
    return v1 | 89;
}

// Address range: 0x2a4512 - 0x2a4515
int64_t function_2a4512(int64_t a1) {
    // 0x2a4512
    int64_t result; // 0x2a4512
    return result;
}

// Address range: 0x2a4539 - 0x2a453a
int64_t function_2a4539(void) {
    // 0x2a4539
    int64_t result; // 0x2a4539
    return result;
}

// Address range: 0x2a454e - 0x2a455c
int64_t function_2a454e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a454e
    int64_t v1; // 0x2a454e
    int32_t * v2 = (int32_t *)(v1 + 39); // 0x2a454e
    int32_t v3 = *v2 | (int32_t)a3; // 0x2a454e
    *v2 = v3;
    if (v3 >= 0 == (v3 != 0)) {
        function_2a4539();
    }
    // 0x2a4553
    return function_ffffffffc2314699();
}

// Address range: 0x2a4579 - 0x2a457e
int64_t function_2a4579(void) {
    // 0x2a4579
    return function_fffffffff4777188();
}

// Address range: 0x2a45dc - 0x2a4617
int64_t function_2a45dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_hlt(); // 0x2a45e6
    int32_t * v2 = (int32_t *)v1; // 0x2a45e7
    uint32_t v3 = *v2; // 0x2a45e7
    uint32_t v4 = (int32_t)a4 % 32; // 0x2a45e7
    int64_t v5 = 1; // 0x2a45e7
    if (v4 != 0) {
        uint32_t v6 = v3 >> 32 - v4 | v3 << v4; // 0x2a45e7
        *v2 = v6;
        v5 = v6 % 2 != 0;
    }
    // 0x2a4610
    return (v5 + v1) % 256 | v1 & -256;
}

// Address range: 0x2a4675 - 0x2a468b
int64_t function_2a4675(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a4675
    int64_t v1; // 0x2a4675
    *(char *)0x1acc018a = *(char *)0x1acc018a + (char)(v1 / 256);
    int64_t v2; // 0x2a4675
    __asm_frstor(*(int864_t *)&v2);
    return v1 & 0xffffffff;
}

// Address range: 0x434e93 - 0x434e98
int64_t function_434e93(int64_t a1) {
    // 0x434e93
    int64_t result; // 0x434e93
    *(int64_t *)result = a1;
    return result;
}

// Address range: 0x434f46 - 0x434f49
int64_t function_434f46(int64_t a1) {
    // 0x434f46
    int64_t result; // 0x434f46
    return result;
}

// Address range: 0x434f86 - 0x435028
int64_t function_434f86(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x434f86
    int64_t v1; // 0x434f86
    int64_t v2 = v1;
    int64_t v3 = a1; // bp-8, 0x434f87
    int32_t * v4 = (int32_t *)(a2 - 0x48e7ed39); // 0x434f88
    *v4 = *v4 ^ (int32_t)a3;
    int32_t v5 = __asm_in(112); // 0x434f8e
    uint32_t v6 = (int32_t)(int64_t)&v3; // 0x434f92
    uint32_t v7 = *(int32_t *)((int64_t)v5 + 76) + v6; // 0x434f92
    unsigned char v8 = *(char *)0x7c62d3dd; // 0x434f96
    *(char *)0x7c62d3dd = 4 * v8 | v8 / 128 | 2 * (char)(v7 < v6);
    char v9 = *(char *)(a2 - 58); // 0x434f9e
    int64_t v10; // 0x434f86
    unsigned char v11 = *(char *)(v10 + 33); // 0x434fa1
    int64_t result = a3 & 0xffffff00 | (int64_t)v11; // 0x434fa1
    int32_t v12 = *(int32_t *)((int64_t)v7 + 80 + 4 * v10); // 0x434fa2
    unsigned char v13 = llvm_ctpop_i8((char)(v12 ^ v7)); // 0x434fa2
    *(char *)0x4798a57d768dd402 = v11;
    if (v13 % 2 == 0) {
        // 0x434fb1
        return result;
    }
    int64_t v14 = v2 & 0xff00 & 256 * (int64_t)v5 | v2 & 0xffff00ff; // 0x434fed
    char * v15 = (char *)v14; // 0x434fef
    *v15 = *v15 + (char)v10;
    uint32_t v16 = *(int32_t *)(result - 0x72d60585) & (int32_t)result; // 0x434ff1
    int64_t result2 = v16; // 0x434ff1
    if (v16 >= 1) {
        // 0x434fb1
        return result2;
    }
    int16_t v17 = v14; // 0x435004
    *(int32_t *)a1 = __asm_insd(v17);
    char * v18 = (char *)(result2 + 0x13222267); // 0x435005
    *v18 = *v18 ^ (char)(v16 / 256);
    *(int32_t *)v10 = *(int32_t *)&v10 & (int32_t)v14;
    __asm_out_133(46, v16);
    __asm_in_134(v17);
    int32_t * v19 = (int32_t *)(a1 + 126); // 0x435025
    *v19 = *v19 - v5;
    return ((256 * (int64_t)(v9 & (char)(a4 / 256)) | a4 & 0xffff00ff) ^ 0x34aaa633) + 0xb9e8865 & 0xffffffff;
}

// Address range: 0x435032 - 0x4350bf
int64_t function_435032(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a5;
    *(char *)a3 = (char)a3 >> 7;
    int64_t v3 = __asm_wait(); // 0x435036
    unsigned char v4 = (char)v3; // 0x435037
    unsigned char v5 = v4 - 3; // 0x435037
    int64_t v6 = v3 & 0xffffff00 | (int64_t)v5; // 0x435037
    uint64_t result = (int64_t)&v2; // 0x435039
    int64_t v7; // 0x435032
    if (v4 <= 2) {
        // 0x43503c
        *(char *)0x2158bb19c13685e1 = (char)result;
        *(int64_t *)(v6 - 8) = v7;
        return result;
    }
    if (v5 == 0) {
        // 0x4350c3
        return result & -256 | (int64_t)*(char *)(v7 + (result & 248));
    }
    char * v8 = (char *)(a3 + 81); // 0x43507d
    *v8 = *v8 - (char)(result / 256);
    uint32_t v9 = *(int32_t *)&v1; // 0x435082
    int64_t v10 = v9; // 0x435082
    bool v11; // 0x435032
    v1 += (v11 ? -4 : 4);
    int64_t v12; // 0x435032
    __asm_rcl(*(char *)(8 * v12 - 99 + v10));
    char v13 = *(char *)&v7 ^ (char)v9; // 0x4350b8
    unsigned char v14 = llvm_ctpop_i8(v13); // 0x4350b8
    *(int64_t *)(v6 - 8) = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v13 < 0) | 4 * (int64_t)(v14 % 2 == 0) | 2;
    __asm_outsd((int16_t)a3, *(int32_t *)v1);
    return v10 & 0xffffff00 | (int64_t)v13;
}

// Address range: 0x435102 - 0x435103
int64_t function_435102(void) {
    // 0x435102
    int64_t result; // 0x435102
    return result;
}

// Address range: 0x43510f - 0x435110
int64_t function_43510f(void) {
    // 0x43510f
    int64_t result; // 0x43510f
    return result;
}

// Address range: 0x435121 - 0x435237
int64_t function_435121(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    // 0x435121
    int64_t v1; // 0x435121
    bool v2; // 0x435121
    if (!v2) {
        v1 = function_43510f();
    }
    int64_t v3 = v1 - (v2 ? 0x728e5994 : 0x728e5993); // 0x435123
    int64_t v4 = v3 & 0xffffffff; // 0x435123
    int64_t v5; // 0x435121
    char * v6 = (char *)(8 * v5 - 0x17ef1200 + v4); // 0x435128
    *v6 = *v6 + (char)(a4 / 256);
    int64_t v7 = (v2 ? -8 : 8) + a1; // 0x43512f
    int64_t v8 = a4 + 0x99b1c439; // 0x435197
    unsigned char v9 = *(char *)(v8 & 0xffffffff); // 0x4351a3
    int64_t v10 = __asm_sti(v7, 0xc5491e08); // 0x4351a5
    int32_t v11 = -48; // bp-8, 0x4351a7
    uint32_t v12 = (int32_t)(int64_t)&v11; // 0x4351a9
    int32_t v13 = v9 > (char)v8; // 0x4351a9
    uint32_t v14 = v13 + (int32_t)v3; // 0x4351a9
    uint32_t v15 = v12 - v14; // 0x4351a9
    bool v16 = v9 > (char)v8 ? v14 != -1 | v15 - v13 > v12 : v14 > v12; // 0x4351a9
    int64_t v17; // 0x435121
    uint32_t v18 = (int32_t)v7 - *(int32_t *)&v17 + (int32_t)v16; // 0x4351ab
    unsigned char v19 = llvm_ctpop_i8((char)v18); // 0x4351ab
    int64_t v20 = v18; // 0x4351ab
    if (v19 % 2 == 0) {
        int64_t v21 = v20; // 0x43517d
        if (v4 != 1) {
            v21 = function_435102();
        }
        // 0x43517f
        return v21 & -0x10000 | (int64_t)*(int16_t *)-0x6c05d2f3e846c896;
    }
    int64_t v22 = v10 & 0xffffffff; // 0x4351a6
    int64_t v23 = v15; // 0x4351a9
    uint32_t v24 = *(int32_t *)0xc5491e08; // 0x4351b5
    int64_t v25 = v2 ? -4 : 4; // 0x4351b5
    int64_t v26 = v22 + v25; // 0x4351b5
    int64_t * v27 = (int64_t *)(v23 - 8); // 0x4351b6
    *v27 = v20;
    int32_t v28 = *(int32_t *)v20; // 0x4351b7
    int16_t v29 = a3; // 0x4351b9
    int32_t * v30 = (int32_t *)(v25 + 0xc5491e08); // 0x4351b9
    __asm_outsd(v29, *v30);
    *(char *)v26 = __asm_insb(v29);
    uint32_t v31 = (v28 + v18 + (int32_t)(v24 < *(int32_t *)v22) & 0x32117f1e) + 0x57ffe206; // 0x4351c1
    int64_t result = v31; // 0x4351c1
    v17 = (int64_t)((int32_t)v17 - *v30);
    char * v32 = (char *)(v5 - 27); // 0x4351c8
    *v32 = *v32 + (char)(a3 / 256);
    *v27 = 0x3afc0bba;
    *(int32_t *)(v26 + 71) = (int32_t)*(int64_t *)(v7 + 0xce6d256);
    if (v4 != 1 == (v31 & -0x30c6cc) == 0) {
        // 0x435235
        return result ^ 188;
    }
    // 0x4351e0
    *(int64_t *)(v23 - 16) = v17;
    return result;
}

// Address range: 0x435239 - 0x435241
int64_t function_435239(int64_t a1) {
    // 0x435239
    return unknown_ffffffffe1c49c52(a1);
}

// Address range: 0x435274 - 0x435279
int64_t function_435274(void) {
    // 0x435274
    int64_t result; // 0x435274
    int32_t * v1 = (int32_t *)(result - 11); // 0x435276
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x435292 - 0x4352be
int64_t function_435292(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x435292
    bool v1; // 0x435292
    int64_t v2 = v1 ? -4 : 4; // 0x435292
    int64_t v3 = (int64_t)*(int32_t *)(a2 - 0xcb39d01 + v2); // 0x435293
    float80_t v4; // 0x435292
    *(int16_t *)(a1 - 0x1ea49e8d + v2) = (int16_t)v4;
    int64_t v5; // 0x435292
    int64_t result = v5 & -0xff01 | (int64_t)"ERS_MODE_CLDEMOTE"; // 0x4352a4
    if ((int32_t)v5 == (int32_t)v5 || -0x6faab80b * v3 == -0x6faab80b00000000 * v3 >> 32) {
        // 0x4352a8
        return result;
    }
    int64_t v6 = -0x6faab80b * v3 != -0x6faab80b00000000 * v3 >> 32 ? 0xce3a9287 : 0xce3a9286; // 0x4352b4
    return result - v6 & 0xffffffff;
}

// Address range: 0x435320 - 0x435328
int64_t function_435320(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x435320
    int64_t v1; // 0x435320
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + (char)(a4 / 256);
    return (int64_t)(*(int32_t *)(a1 - 114) & (int32_t)v1);
}

// Address range: 0x435331 - 0x43535b
int64_t function_435331(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x435331
    int64_t v1; // 0x435331
    uint64_t v2 = (0x100000000 * v1 >> 32) * (0x100000000 * v1 >> 32); // 0x435331
    uint64_t v3 = v2 / 0x100000000; // 0x435331
    int32_t v4 = v3; // 0x435331
    char * v5 = (char *)(a2 + 0x74834825); // 0x435334
    unsigned char v6 = *v5; // 0x435334
    *v5 = 128 * (char)(v4 != 0 == (v4 != -1)) | v6 / 2;
    __asm_out_133(37, (int32_t)v2);
    *(char *)a1 = __asm_insb((int16_t)v3);
    int64_t v7; // 0x435331
    unsigned char v8 = *(char *)&v7; // 0x435346
    char v9 = v6 % 2 != 0; // 0x435346
    unsigned char v10 = v9 + (char)v1; // 0x435346
    char v11 = v8 - v10; // 0x435346
    bool v12 = v6 % 2 != 0 ? v10 != -1 | v8 < v11 - v9 : v8 < v10; // 0x435346
    *(char *)a4 = v11;
    unsigned char v13 = (char)(v1 / 256); // 0x435349
    unsigned char v14 = *(char *)(v1 - 0x5333639a) + (char)v12; // 0x435349
    bool v15 = v12 ? v14 != -1 | (char)v12 + v13 - v14 > v13 : v14 > v13; // 0x435349
    return (int64_t)(*(int32_t *)0x84bcb62587431f0 - (v15 ? 0x2b9028ad : 0x2b9028ac));
}

// Address range: 0x435372 - 0x435375
int64_t function_435372(void) {
    // 0x435372
    int64_t result; // 0x435372
    return result;
}

// Address range: 0x435387 - 0x43538a
int64_t function_435387(void) {
    // 0x435387
    int64_t result; // 0x435387
    return result;
}

// Address range: 0x43539a - 0x4353a2
int64_t function_43539a(int64_t a1) {
    // 0x43539a
    int64_t result; // 0x43539a
    int64_t v1; // 0x43539a
    if ((int32_t)v1 == (int32_t)v1) {
        result = function_435413();
    }
    // 0x43539d
    return result;
}

// Address range: 0x4353a3 - 0x4353aa
int64_t function_4353a3(void) {
    // 0x4353a3
    return function_616359cd();
}

// Address range: 0x4353c4 - 0x4353ca
int64_t function_4353c4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4353c4
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return function_2a4fa2ba();
}

// Address range: 0x4353f0 - 0x4353f2
int64_t function_4353f0(void) {
    // 0x4353f0
    return function_435415();
}

// Address range: 0x48ca52 - 0x48cc50
int64_t function_48ca52(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x48ca52
    int64_t v1; // 0x48ca52
    if ((char)v1 != 0) {
        // 0x48ca81
        int128_t v2; // 0x48ca52
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    // 0x48cac1
    __readfsqword(40);
    if (a1 == 0 || *(int32_t *)(a1 + 8) < (int32_t)a2) {
        // 0x48cf61
        return 0;
    }
    // 0x48cae7
    int64_t v3; // bp-1496, 0x48ca52
    function_4901b3(&v3);
    int64_t v4; // bp-1528, 0x48ca52
    function_490032(&v4);
    int64_t v5 = function_24ded((int64_t *)"["); // 0x48cb5f
    int64_t v6 = function_52a5a((int64_t)&v4, 0, (int64_t *)"[", v5); // 0x48cb75
    int64_t * v7 = (int64_t *)v6; // 0x48cb81
    int64_t v8 = *v7; // bp-1520, 0x48cb88
    *v7 = (int64_t)&g22;
    int64_t v9; // bp-1512, 0x48ca52
    function_5f453((int64_t)&v9, &v8, "] ", &g21);
    int64_t v10; // bp-1504, 0x48ca52
    int64_t v11 = (int64_t)&v10; // 0x48cbcf
    function_5f453(v11, &v9, "[", &g21);
    int64_t v12; // bp-1488, 0x48ca52
    function_5f47b(&v12, v11, (int64_t)&v3);
    int64_t v13; // bp-1480, 0x48ca52
    function_5f453((int64_t)&v13, &v12, "] ", &g21);
    int64_t v14; // bp-1472, 0x48ca52
    function_5f453((int64_t)&v14, &v13, "[EAC ", &g21);
    int64_t v15; // bp-1464, 0x48ca52
    return (int64_t)&v15;
}

// Address range: 0x494833 - 0x494866
int64_t function_494833(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x494833
    __asm_hlt();
    int64_t v1; // 0x494833
    return function_49e770(v1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g7, "<= calc  finished");
}

// Address range: 0x494866 - 0x49486f
int64_t function_494866(int64_t a1) {
    // 0x494866
    return function_494725();
}

// Address range: 0x494870 - 0x49492e
int64_t function_494870(int64_t a1, int64_t a2) {
    // 0x494870
    int64_t v1; // bp-248, 0x494870
    function_4cdd20(&v1);
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g16, "=> calc verify sha384");
    int64_t v2 = *(int64_t *)(a1 + 96); // 0x4948ab
    function_4cddd0(&v1, v2 + (int64_t)&g20);
    function_4ce580(&v1, a2);
    function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g17, "calculated verify result", a2, 48);
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g18, "<= calc verify");
    return function_4cddb0(&v1);
}

// Address range: 0x494930 - 0x494a9f
int64_t function_494930(int64_t a1, int64_t a2, int64_t a3) {
    // 0x494930
    int64_t v1; // bp-264, 0x494930
    function_4cdd20(&v1);
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g8, "=> calc  finished tls sha384");
    int64_t v2 = *(int64_t *)(a1 + 96); // 0x494988
    function_4cddd0(&v1, v2 + (int64_t)&g20);
    int64_t v3; // bp-248, 0x494930
    function_49e960(a1, 4, "/home/richard/code/mbedtls/library/ssl_tls.c", &g9, "finished sha512 state", (int64_t)&v3, 64);
    int64_t v4; // bp-312, 0x494930
    int64_t v5 = (int64_t)&v4; // 0x4949d1
    function_4ce580(&v1, v5);
    function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g10, "calc finished result", a2, 12);
    function_4cddb0(&v1);
    int64_t v6 = v5; // 0x494a53
    *(char *)v6 = 0;
    v6++;
    while (v6 != (int64_t)&v1) {
        // 0x494a58
        *(char *)v6 = 0;
        v6++;
    }
    // 0x494a64
    return function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g11, "<= calc  finished");
}

// Address range: 0x494aa0 - 0x494b92
int64_t function_494aa0(int64_t a1, int64_t a2) {
    // 0x494aa0
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g13, "=> calc verify tls");
    int64_t v1; // bp-216, 0x494aa0
    function_4c1d60(&v1);
    int64_t v2; // bp-120, 0x494aa0
    function_4cb410(&v2);
    int64_t * v3 = (int64_t *)(a1 + 96); // 0x494ae2
    function_4c1e10(&v1, *v3 + (int64_t)&g12);
    function_4cb4c0(&v2, *v3 + (int64_t)&g19);
    function_4c2a20(&v1, a2);
    function_4cc900(&v2, a2 + 16);
    function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g14, "calculated verify result", a2, 36);
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g15, "<= calc verify");
    function_4c1df0(&v1);
    return function_4cb4a0(&v2);
}

// Address range: 0x494ba0 - 0x494d87
int64_t function_494ba0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x494ba0
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g2, "=> calc  finished tls");
    int64_t v1; // bp-232, 0x494ba0
    function_4c1d60(&v1);
    int64_t v2; // bp-136, 0x494ba0
    function_4cb410(&v2);
    int64_t * v3 = (int64_t *)(a1 + 96); // 0x494c05
    function_4c1e10(&v1, *v3 + (int64_t)&g12);
    function_4cb4c0(&v2, *v3 + (int64_t)&g19);
    int64_t v4; // bp-224, 0x494ba0
    function_49e960(a1, 4, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)&g3, "finished  md5 state", (int64_t)&v4, 16);
    int64_t v5; // bp-128, 0x494ba0
    function_49e960(a1, 4, "/home/richard/code/mbedtls/library/ssl_tls.c", &g4, "finished sha1 state", (int64_t)&v5, 20);
    int64_t v6; // bp-280, 0x494ba0
    int64_t v7 = (int64_t)&v6; // 0x494c96
    function_4c2a20(&v1, v7);
    int64_t v8; // bp-264, 0x494ba0
    function_4cc900(&v2, (int64_t)&v8);
    function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g5, "calc finished result", a2, 12);
    function_4c1df0(&v1);
    function_4cb4a0(&v2);
    int64_t v9 = v7; // 0x494d37
    *(char *)v9 = 0;
    v9++;
    int64_t v10; // bp-244, 0x494ba0
    while (v9 != (int64_t)&v10) {
        // 0x494d40
        *(char *)v9 = 0;
        v9++;
    }
    // 0x494d4c
    return function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g6, "<= calc  finished");
}

// Address range: 0x4c885e - 0x4c8d94
int64_t function_4c885e(int64_t a1) {
    int64_t v1 = a1 + 88; // 0x4c8877
    int64_t v2 = a1 + 112; // 0x4c888f
    int64_t v3; // bp-472, 0x4c885e
    function_4b0870(&v3);
    int64_t v4; // bp-440, 0x4c885e
    function_4b0870(&v4);
    int64_t v5; // bp-408, 0x4c885e
    function_4b0870(&v5);
    int64_t v6; // bp-376, 0x4c885e
    function_4b0870(&v6);
    int64_t v7; // bp-344, 0x4c885e
    function_4b0870(&v7);
    int64_t v8; // bp-312, 0x4c885e
    function_4b0870(&v8);
    int64_t v9; // bp-280, 0x4c885e
    function_4b0870(&v9);
    int64_t v10; // bp-248, 0x4c885e
    function_4b0870(&v10);
    int64_t v11; // bp-216, 0x4c885e
    function_4b0870(&v11);
    int64_t v12; // bp-184, 0x4c885e
    function_4b0870(&v12);
    int64_t v13; // bp-152, 0x4c885e
    function_4b0870(&v13);
    int64_t v14; // bp-120, 0x4c885e
    function_4b0870(&v14);
    int64_t v15; // bp-88, 0x4c885e
    function_4b0870(&v15);
    int64_t v16 = function_4b1ac0(&v3, v1, v2); // 0x4c8934
    int64_t v17 = v16 & 0xffffffff; // 0x4c893d
    if ((int32_t)v16 == 0) {
        int64_t v18 = a1 + 40; // 0x4c8a30
        int64_t v19 = a1 + 64; // 0x4c8a34
        int64_t v20 = function_4b1ac0(&v4, v19, v18); // 0x4c8a43
        v17 = v20 & 0xffffffff;
        if ((int32_t)v20 == 0) {
            int64_t v21 = function_4b1a80(&v5, v1, 1); // 0x4c8a5f
            v17 = v21 & 0xffffffff;
            if ((int32_t)v21 == 0) {
                int64_t v22 = function_4b1a80(&v6, v2, 1); // 0x4c8a7b
                v17 = v22 & 0xffffffff;
                if ((int32_t)v22 == 0) {
                    int64_t v23 = (int64_t)&v5; // 0x4c8a8f
                    int64_t v24 = function_4b1ac0(&v7, v23, (int64_t)&v6); // 0x4c8a9c
                    v17 = v24 & 0xffffffff;
                    if ((int32_t)v24 == 0) {
                        int64_t v25 = function_4b36d0(&v9, v18, &v7); // 0x4c8abe
                        v17 = v25 & 0xffffffff;
                        if ((int32_t)v25 == 0) {
                            int64_t v26 = function_4b36d0(&v10, v23, &v6); // 0x4c8adf
                            v17 = v26 & 0xffffffff;
                            if ((int32_t)v26 == 0) {
                                int64_t v27 = function_4b1fc0(&v11, &v12, &v7, &v10); // 0x4c8b0e
                                v17 = v27 & 0xffffffff;
                                if ((int32_t)v27 == 0) {
                                    int64_t v28 = function_4b26c0(&v8, &v4, &v11); // 0x4c8b32
                                    v17 = v28 & 0xffffffff;
                                    if ((int32_t)v28 == 0) {
                                        int64_t * v29 = (int64_t *)v19; // 0x4c8b51
                                        int64_t v30 = function_4b26c0(&v13, v29, &v5); // 0x4c8b51
                                        v17 = v30 & 0xffffffff;
                                        if ((int32_t)v30 == 0) {
                                            int64_t v31 = function_4b26c0(&v14, v29, &v6); // 0x4c8b70
                                            v17 = v31 & 0xffffffff;
                                            if ((int32_t)v31 == 0) {
                                                int64_t v32 = function_4b3cf0(&v15, v2, v1); // 0x4c8b8d
                                                int64_t result = v32 & 0xffffffff; // 0x4c8b94
                                                v17 = result;
                                                if ((int32_t)v32 == 0) {
                                                    // 0x4c8b9c
                                                    if ((int32_t)function_4b1590(&v3, a1 + 16) == 0) {
                                                        // 0x4c8c55
                                                        if ((int32_t)function_4b1590(&v13, a1 + 136) == 0) {
                                                            // 0x4c8c71
                                                            if ((int32_t)function_4b1590(&v14, a1 + 160) == 0) {
                                                                // 0x4c8c8d
                                                                if ((int32_t)function_4b1590(&v15, a1 + 184) == 0) {
                                                                    // 0x4c8ca9
                                                                    if ((int32_t)function_4b1680(&v12, 0) == 0) {
                                                                        // 0x4c8cc0
                                                                        if ((int32_t)function_4b1680(&v8, 1) == 0) {
                                                                            // 0x4c8cda
                                                                            if ((int32_t)function_4b1680(&v9, 1) == 0) {
                                                                                // 0x4c8cf4
                                                                                function_4b0890(&v3);
                                                                                function_4b0890(&v4);
                                                                                function_4b0890(&v5);
                                                                                function_4b0890(&v6);
                                                                                function_4b0890(&v7);
                                                                                function_4b0890(&v8);
                                                                                function_4b0890(&v9);
                                                                                function_4b0890(&v10);
                                                                                function_4b0890(&v11);
                                                                                function_4b0890(&v12);
                                                                                function_4b0890(&v13);
                                                                                function_4b0890(&v14);
                                                                                function_4b0890(&v15);
                                                                                // 0x4c89ed
                                                                                return result;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                    // 0x4c8bb0
                                                    function_4b0890(&v3);
                                                    function_4b0890(&v4);
                                                    function_4b0890(&v5);
                                                    function_4b0890(&v6);
                                                    function_4b0890(&v7);
                                                    function_4b0890(&v8);
                                                    function_4b0890(&v9);
                                                    function_4b0890(&v10);
                                                    function_4b0890(&v11);
                                                    function_4b0890(&v12);
                                                    function_4b0890(&v13);
                                                    function_4b0890(&v14);
                                                    function_4b0890(&v15);
                                                    // 0x4c89ed
                                                    return 0xffffbe00;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    int64_t v33 = v17;
    function_4b0890(&v3);
    function_4b0890(&v4);
    function_4b0890(&v5);
    function_4b0890(&v6);
    function_4b0890(&v7);
    function_4b0890(&v8);
    function_4b0890(&v9);
    function_4b0890(&v10);
    function_4b0890(&v11);
    function_4b0890(&v12);
    function_4b0890(&v13);
    function_4b0890(&v14);
    function_4b0890(&v15);
    // 0x4c89ed
    return (v33 != 0xffffbe00 ? v33 + 0xffffbe00 : v33) & 0xffffffff;
}

// Address range: 0x4c8da0 - 0x4c8dad
int64_t function_4c8da0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4c8da0
    *(int32_t *)(a1 + 328) = (int32_t)a2;
    *(int32_t *)(a1 + 332) = (int32_t)a3;
    int64_t result; // 0x4c8da0
    return result;
}
