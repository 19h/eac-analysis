/*
 * Targeted RetDec C for native executable gap queue batch 1189.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1f880a-0x1f8a0a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f8a0a-0x1f8c0a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f8c0a-0x1f8e0a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f8e0a-0x1f900a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f900a-0x1f920a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f920a-0x1f940a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f940a-0x1f960a rank=- name=- kind=- bytes=- uncovered=-
 *   0x44ffdf-0x4501df rank=- name=- kind=- bytes=- uncovered=-
 *   0x5748cd-0x574acd rank=- name=- kind=- bytes=- uncovered=-
 *   0x574acd-0x574ccd rank=- name=- kind=- bytes=- uncovered=-
 *   0x574ccd-0x574ecd rank=- name=- kind=- bytes=- uncovered=-
 *   0x574ecd-0x5750cd rank=- name=- kind=- bytes=- uncovered=-
 *   0x5750cd-0x5752cd rank=- name=- kind=- bytes=- uncovered=-
 *   0x5752cd-0x5754cd rank=- name=- kind=- bytes=- uncovered=-
 *   0x5754cd-0x5756cd rank=- name=- kind=- bytes=- uncovered=-
 *   0x5756cd-0x5758cd rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1ad3bc5();
int64_t function_1f880a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1f882b(int64_t a1);
int64_t function_1f8836(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f884d(void);
int64_t function_1f88ab(void);
int64_t function_1f8911(void);
int64_t function_1f8971(void);
int64_t function_1f8989(void);
int64_t function_1f8999(void);
int64_t function_1f89a3(void);
int64_t function_1f89db(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f8a0c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1f8a3c(void);
int64_t function_1f8a52(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1f8ac6(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1f8c1d(int64_t a1, int64_t a2);
int64_t function_1f8c84(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f8cf8(int64_t a1);
int64_t function_1f8d04(int64_t a1);
int64_t function_1f8d53(void);
int64_t function_1f8da3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f8e4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f8eae(void);
int64_t function_1f8efc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f8f76(void);
int64_t function_1f8ffa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1f912b(int64_t a1);
int64_t function_1f9132(int64_t a1);
int64_t function_1f9137(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f917c(void);
int64_t function_1f9193(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1f919a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f91f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f9211(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f922b(int64_t a1);
int64_t function_1f9231(int64_t a1);
int64_t function_1f923c(void);
int64_t function_1f923f(void);
int64_t function_1f9248(int64_t a1);
int64_t function_1f9283(int64_t a1);
int64_t function_1f92f5(void);
int64_t function_1f941f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f94b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f94db(void);
int64_t function_1f94de(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f94e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f95f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23ebf136();
int64_t function_2509a();
int64_t function_360a0();
int64_t function_3e593f6c();
int64_t function_44ff8b();
int64_t function_44ffdf(int64_t a1, int64_t a2);
int64_t function_44ffef(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45007e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4500a2(int64_t a1);
int64_t function_45010a(void);
int64_t function_450140(int64_t a1);
int64_t function_4501c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4501cd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4501d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4eeb50();
int64_t function_4f3f50();
int64_t function_4f4060();
int64_t function_4f4e50();
int64_t function_4f4f50();
int64_t function_508360();
int64_t function_542470();
int64_t function_552460();
int64_t function_565970();
int64_t function_5679e0();
int64_t function_56b220();
int64_t function_56b4f0();
int64_t function_572420();
int64_t function_572430();
int64_t function_5724e0();
int64_t function_572ed0();
int64_t function_572f70();
int64_t function_573010();
int64_t function_573140();
int64_t function_573290();
int64_t function_5732a0();
int64_t function_5732c0();
int64_t function_573380();
int64_t function_573580();
int64_t function_5736e0();
int64_t function_573800();
int64_t function_5748cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_574900(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_574930(int64_t a1);
int64_t function_574950(int64_t a1, int64_t a2, int64_t a3);
int64_t function_574980(int64_t a1);
int64_t function_5749a0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5749c0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5749e0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_574a00(int64_t a1, int64_t a2, int64_t a3);
int64_t function_574a20(int64_t a1, int64_t a2, int64_t a3);
int64_t function_574a40(int64_t a1);
int64_t function_574a60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_574b10(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_574b40(int64_t a1);
int64_t function_574b60(int64_t a1, int64_t a2, int64_t a3);
int64_t function_574b90(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_574c90(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_574d90(int64_t a1, int64_t a2);
int64_t function_574e40(int64_t a1, int64_t a2);
int64_t function_574ef0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_574fb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_575070(int64_t a1);
int64_t function_575100(int64_t a1);
int64_t function_575170(int64_t a1);
int64_t function_575200(int64_t a1);
int64_t function_575270(int64_t a1);
int64_t function_575300(int64_t a1);
int64_t function_575390(int64_t a1);
int64_t function_575400(int64_t a1);
int64_t function_575470(int64_t a1);
int64_t function_5754d0(int64_t a1);
int64_t function_575530(int64_t a1);
int64_t function_575590(int64_t a1);
int64_t function_5755f0(int64_t a1);
int64_t function_575650(int64_t a1);
int64_t function_5756b0(int64_t a1);
int64_t function_575710(int64_t a1);
int64_t function_575770(int64_t a1);
int64_t function_5757d0(int64_t a1);
int64_t function_575830(int64_t a1);
int64_t function_575890(int64_t a1);
int64_t function_6d2aafb7();
int64_t function_ffffffff8b230155();
int64_t function_ffffffffaebd3274();
int64_t function_ffffffffe8c5e889();
int64_t unknown_3ac9358b();
int64_t unknown_7afd8a28();
int64_t unknown_7f49f3e();
int64_t unknown_80ff345();
int64_t unknown_b81791d();
int64_t unknown_c1425b2();
int64_t unknown_ffffffff840349f1();
int64_t unknown_ffffffff8a2701f0();
int64_t unknown_ffffffff91165366();
int64_t unknown_ffffffff91ef0703();
int64_t unknown_ffffffff92856417();
int64_t unknown_ffffffff92d5adfe();
int64_t unknown_ffffffff97c2cadc();
int64_t unknown_ffffffff9815b3a2();
int64_t unknown_ffffffffa820e4ff();
int64_t unknown_ffffffffbab472b1();
int64_t unknown_ffffffffbbf9339b();
int64_t unknown_ffffffffece88659();
int64_t unknown_fffffffff0bdb0a1();
int64_t unknown_fffffffff4f45435();

// Address range: 0x1f880a - 0x1f881f
int64_t function_1f880a(int64_t a1, int64_t a2, int64_t a3) {
    unsigned char v1 = *(char *)0x551850a8062001e8; // 0x1f880a
    int64_t v2; // 0x1f880a
    *(char *)a3 = (char)((uint64_t)v2 / 256);
    return *(int64_t *)(v2 & 0xffffff00 | (int64_t)v1);
}

// Address range: 0x1f882b - 0x1f882c
int64_t function_1f882b(int64_t a1) {
    // 0x1f882b
    int64_t result; // 0x1f882b
    return result;
}

// Address range: 0x1f8836 - 0x1f884b
int64_t function_1f8836(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f8836
    int64_t v1; // 0x1f8836
    __asm_outsb((int16_t)a3, (char)v1);
    return a4 + 0x8c51d184 + unknown_7f49f3e() & 0xffffffff;
}

// Address range: 0x1f884d - 0x1f884e
int64_t function_1f884d(void) {
    // 0x1f884d
    int64_t result; // 0x1f884d
    return result;
}

// Address range: 0x1f88ab - 0x1f88ae
int64_t function_1f88ab(void) {
    // 0x1f88ab
    int64_t result; // 0x1f88ab
    return result;
}

// Address range: 0x1f8911 - 0x1f8912
int64_t function_1f8911(void) {
    // 0x1f8911
    int64_t result; // 0x1f8911
    return result;
}

// Address range: 0x1f8971 - 0x1f8972
int64_t function_1f8971(void) {
    // 0x1f8971
    int64_t result; // 0x1f8971
    return result;
}

// Address range: 0x1f8989 - 0x1f898d
int64_t function_1f8989(void) {
    // 0x1f8989
    bool v1; // 0x1f8989
    if (v1) {
        function_1f8971();
    }
    // 0x1f898b
    int64_t v2; // 0x1f8989
    return function_1f89db(v2, v2, v2, v2, (int64_t)&g28);
}

// Address range: 0x1f8999 - 0x1f89a2
int64_t function_1f8999(void) {
    // 0x1f8999
    bool v1; // 0x1f8999
    if (v1 || false) {
        int64_t v2; // 0x1f8999
        function_1f8a0c(v2, v2, v2);
    }
    // 0x1f899b
    return unknown_fffffffff0bdb0a1();
}

// Address range: 0x1f89a3 - 0x1f89a7
int64_t function_1f89a3(void) {
    // 0x1f89a3
    int64_t result; // 0x1f89a3
    return result;
}

// Address range: 0x1f89db - 0x1f89ef
int64_t function_1f89db(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f89db
    return unknown_ffffffff8a2701f0();
}

// Address range: 0x1f8a0c - 0x1f8a20
int64_t function_1f8a0c(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 100); // 0x1f8a0c
    bool v2; // 0x1f8a0c
    *v1 = *v1 + (int32_t)a2 + (int32_t)(bool)v2;
    int64_t result = unknown_b81791d(); // 0x1f8a16
    int64_t v3; // 0x1f8a0c
    *(char *)v3 = *(char *)&v3 - (char)result;
    return result;
}

// Address range: 0x1f8a3c - 0x1f8a3d
int64_t function_1f8a3c(void) {
    // 0x1f8a3c
    int64_t result; // 0x1f8a3c
    return result;
}

// Address range: 0x1f8a52 - 0x1f8ab4
int64_t function_1f8a52(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1f8a52
    bool v1; // 0x1f8a52
    if (v1) {
        function_1f8a3c();
    }
    // 0x1f8a54
    int64_t v2; // 0x1f8a52
    int32_t * v3 = (int32_t *)(v2 + 0x37eabcfc); // 0x1f8a54
    *v3 = *v3 + (int32_t)v2;
    unknown_ffffffff91165366();
    uint32_t v4 = *(int32_t *)(v2 - 126 + 4 * v2) + (int32_t)a1; // 0x1f8a65
    __asm_sti(v4);
    int64_t v5 = a4 - 1; // 0x1f8a6c
    if (v5 == 0 || v4 == 0) {
        int64_t v6 = v4; // 0x1f8a65
        *(char *)v6 = (char)__asm_iretd();
        char * v7 = (char *)((v5 & 0xffffffff) + 0x11f4960c); // 0x1f8a76
        *v7 = *v7 + (char)(v2 / 256);
        return function_ffffffffe8c5e889((v1 ? -1 : 1) + v6, 0xebcb01e8);
    }
    // 0x1f8a96
    *(char *)(v2 - 0x279a193d) = (char)(v2 / 256);
    uint32_t v8 = 0x10000 * (int32_t)unknown_ffffffff9815b3a2() >> 16; // 0x1f8aa1
    int64_t v9 = (int64_t)v8 + 0x62461e33; // 0x1f8aa2
    __writegsbyte(v9, -1 - __readgsbyte(v9));
    int64_t v10; // 0x1f8a52
    __asm_rcl(*(char *)&v10);
    return v8 | 0x4301e8e3;
}

// Address range: 0x1f8ac6 - 0x1f8ae5
int64_t function_1f8ac6(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1f8ac6
    int64_t v1; // 0x1f8ac6
    bool v2; // 0x1f8ac6
    *(char *)a4 = (char)v1 + (char)(a3 / 256) + (char)v2;
    __asm_out(-109, (int32_t)unknown_80ff345());
    int64_t result = unknown_ffffffff97c2cadc(); // 0x1f8ad6
    int64_t v3; // 0x1f8ac6
    __asm_outsd((int16_t)a3, *(int32_t *)&v3);
    char v4 = *(char *)-0x6820b61d; // 0x1f8adc
    *(char *)-0x6820b61d = v4 + (char)((int64_t)&g27 >> 8);
    return result;
}

// Address range: 0x1f8c1d - 0x1f8c28
int64_t function_1f8c1d(int64_t a1, int64_t a2) {
    // 0x1f8c1d
    int64_t v1; // 0x1f8c1d
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a2;
    return function_1ad3bc5();
}

// Address range: 0x1f8c84 - 0x1f8cb9
int64_t function_1f8c84(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f8c84
    bool v1; // 0x1f8c84
    if (a4 != 1 != v1) {
        // 0x1f8c86
        int64_t result; // 0x1f8c84
        return result;
    }
    char * v2 = (char *)(int64_t)((int32_t)a3 >> 31); // 0x1f8ca7
    *v2 = *v2 + (char)a3;
    return unknown_c1425b2();
}

// Address range: 0x1f8cf8 - 0x1f8d00
int64_t function_1f8cf8(int64_t a1) {
    // 0x1f8cf8
    return unknown_ffffffffa820e4ff(a1);
}

// Address range: 0x1f8d04 - 0x1f8d05
int64_t function_1f8d04(int64_t a1) {
    // 0x1f8d04
    int64_t result; // 0x1f8d04
    return result;
}

// Address range: 0x1f8d53 - 0x1f8d5d
int64_t function_1f8d53(void) {
    // 0x1f8d53
    unknown_ffffffffece88659();
    return function_6d2aafb7();
}

// Address range: 0x1f8da3 - 0x1f8e4d
int64_t function_1f8da3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f8da3
    int64_t v1; // 0x1f8da3
    *(int32_t *)0x18822d6ba78dd92 = (int32_t)v1;
    int32_t * v2 = (int32_t *)(a3 - 25 + v1); // 0x1f8db3
    int32_t v3 = *v2 + (int32_t)a1; // 0x1f8db3
    *v2 = v3;
    uint64_t result2 = v1 & 0xffff00ff ^ 0x3d410000 | (int64_t)&g26; // 0x1f8db8
    if (v3 == 0) {
        char * v4 = (char *)(a4 - 115); // 0x1f8dbc
        *v4 = *v4 + (char)((int64_t)&g26 >> 8);
        __asm_out_133(118, (char)result2);
        __asm_out_134((int16_t)a3, *(char *)(result2 % 256 + v1));
        __asm_iretd();
        unknown_ffffffff840349f1();
        int64_t result = __asm_iretd(); // 0x1f8df5
        char * v5 = (char *)(8 * v1 + a1); // 0x1f8e03
        *v5 = *v5 + (char)result;
        return result;
    }
    if (a4 == 1) {
        // 0x1f8e26
        return result2;
    }
    // 0x1f8e2c
    __asm_out(-104, (int32_t)result2);
    int64_t v6 = (result2 + 123) % 256 | result2 & -256; // 0x1f8e34
    int64_t v7; // bp-8, 0x1f8da3
    char * v8 = (char *)(8 * v1 + (int64_t)&v7); // 0x1f8e36
    unsigned char v9 = *v8; // 0x1f8e36
    *v8 = v9 / 128 | 2 * v9;
    int32_t * v10 = (int32_t *)(v1 - 0x3746eb91); // 0x1f8e39
    *v10 = *v10 - (int32_t)v6;
    *(char *)0x62d4e846 = *(char *)0x62d4e846 + (char)(v1 / 256);
    *(int32_t *)a1 = *(int32_t *)(2 * a2 & 0xfffffffe);
    return v6 + 0x7e95d94f & 0xffffffff;
}

// Address range: 0x1f8e4e - 0x1f8e59
int64_t function_1f8e4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f8e4e
    int64_t result; // 0x1f8e4e
    __asm_rcl((char)result);
    int32_t * v1 = (int32_t *)(a4 - 0x428a24ee); // 0x1f8e50
    int32_t v2 = *v1; // 0x1f8e50
    *v1 = 2 * v2 | (int32_t)(v2 < 0);
    return result;
}

// Address range: 0x1f8eae - 0x1f8eb1
int64_t function_1f8eae(void) {
    // 0x1f8eae
    int64_t result; // 0x1f8eae
    return result;
}

// Address range: 0x1f8efc - 0x1f8f36
int64_t function_1f8efc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a1 - 0x435caa1f + 2 * a1); // 0x1f8efc
    int64_t v3; // 0x1f8efc
    *v2 = *v2 + (int32_t)v3;
    int64_t v4 = unknown_ffffffff92856417(); // 0x1f8f11
    *(char *)a1 = *(char *)&v1;
    bool v5; // 0x1f8efc
    int64_t v6 = v5 ? -1 : 1; // 0x1f8f16
    unsigned char v7 = *(char *)-0x16f32e40; // 0x1f8f17
    *(char *)-0x16f32e40 = v7 / 128 | 2 * v7;
    char * v8 = (char *)v4; // 0x1f8f23
    *v8 = *v8 - (char)v4;
    int64_t v9 = __asm_fnstenv(v6 + a1, v1 + v6); // 0x1f8f25
    *(int224_t *)(v3 - 24) = (int224_t)v9;
    unsigned char v10 = *(char *)(int64_t)(*(int32_t *)v9 | (int32_t)a3); // 0x1f8f2f
    return v9 + 0xa8801e8 + (int64_t)(v10 > (char)v9) & 0xffffffff;
}

// Address range: 0x1f8f76 - 0x1f8f7b
int64_t function_1f8f76(void) {
    // 0x1f8f76
    return function_ffffffffaebd3274();
}

// Address range: 0x1f8ffa - 0x1f90a6
int64_t function_1f8ffa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1f8ffa
    int64_t v1; // 0x1f8ffa
    int64_t v2 = v1;
    int64_t v3 = a2;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a2;
    uint64_t v4 = unknown_ffffffff91ef0703(); // 0x1f8ffc
    char * v5 = (char *)v4; // 0x1f9002
    char v6 = *v5 + (char)(v4 / 256); // 0x1f9002
    *v5 = v6;
    *(char *)a3 = (char)a3;
    char v7 = __asm_in_135((int16_t)a3); // 0x1f9006
    int64_t result = v4 & -256 | (int64_t)v7; // 0x1f9006
    int64_t v8 = a4 - 1; // 0x1f9007
    if (v8 == 0 || v6 == 0) {
        // 0x1f9009
        return result;
    }
    unsigned char v9 = v7 + 47; // 0x1f906e
    unsigned char v10 = llvm_ctpop_i8(v9); // 0x1f906e
    int64_t v11 = result & -256 | (int64_t)v9; // 0x1f906e
    int3_t v12; // 0x1f8ffa
    *(int16_t *)(v11 + 35) = (int16_t)__frontend_reg_load_fpr(v12);
    *(char *)a1 = *(char *)&v3;
    int64_t result2 = v11; // 0x1f9074
    if (v10 % 2 == 0) {
        // 0x1f9076
        bool v13; // 0x1f8ffa
        int64_t v14 = v13 ? -1 : 1; // 0x1f9073
        int64_t v15 = v14 + a1; // 0x1f9073
        int64_t v16 = v11 + v8; // 0x1f9076
        char v17 = *(char *)((v16 & 0xffffffff) - 0x2f31f45f); // 0x1f9078
        char v18 = v16; // 0x1f907e
        *(char *)v15 = v18;
        int64_t v19 = v15 + v14; // 0x1f907e
        *(char *)-0x176a48fec2fff42d = v18;
        result2 = __asm_hlt(v19);
        *(int32_t *)((v8 & -256 | (int64_t)(v17 | (char)v8)) + 0x24d6000a) = -0x60c5fd30;
        char * v20 = (char *)(2 * v19 - 0x40f0ff98 + (v19 + v2 & 0xffffffff)); // 0x1f909f
        *v20 = *v20 + (char)result2;
    }
    // 0x1f9009
    return result2;
}

// Address range: 0x1f912b - 0x1f9130
int64_t function_1f912b(int64_t a1) {
    // 0x1f912b
    int64_t v1; // 0x1f912b
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a1;
    return function_1f9137(a1, v1, v1, (int64_t)&g28);
}

// Address range: 0x1f9132 - 0x1f9135
int64_t function_1f9132(int64_t a1) {
    // 0x1f9132
    int64_t result; // 0x1f9132
    return result;
}

// Address range: 0x1f9137 - 0x1f915d
int64_t function_1f9137(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f9137
    return (int64_t)*(int32_t *)-0x31ff7487cc25396a;
}

// Address range: 0x1f917c - 0x1f917e
int64_t function_1f917c(void) {
    // 0x1f917c
    int64_t v1; // 0x1f917c
    return function_1f919a(v1, v1, v1, v1);
}

// Address range: 0x1f9193 - 0x1f919a
int64_t function_1f9193(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1f9193
    __asm_in_137((int16_t)a3);
    return unknown_ffffffffbbf9339b();
}

// Address range: 0x1f919a - 0x1f91b0
int64_t function_1f919a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f919a
    int64_t v1; // 0x1f919a
    *(char *)-0x178ea1b3faf711dc = (char)v1;
    int32_t * v2 = (int32_t *)(a4 - 0x32031151); // 0x1f91a3
    *v2 = *v2 + (int32_t)a2;
    bool v3; // 0x1f919a
    int64_t v4 = v3 ? -4 : 4; // 0x1f91a9
    return unknown_ffffffffbab472b1(v4 + a1, v4 + a2);
}

// Address range: 0x1f91f6 - 0x1f9204
int64_t function_1f91f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f91f6
    __asm_in_136(10);
    int64_t v1 = unknown_ffffffff92d5adfe(); // 0x1f91f8
    int32_t * v2 = (int32_t *)(a3 + 37); // 0x1f91fd
    uint32_t v3 = *v2; // 0x1f91fd
    *v2 = v3 / 2 | 0x80000000 * v3;
    return v1 & 0xffffffff;
}

// Address range: 0x1f9211 - 0x1f921c
int64_t function_1f9211(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f9211
    int64_t v1; // 0x1f9211
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a4;
    int64_t v3; // bp-24871, 0x1f9211
    return (int64_t)&v3;
}

// Address range: 0x1f922b - 0x1f922c
int64_t function_1f922b(int64_t a1) {
    // 0x1f922b
    int64_t result; // 0x1f922b
    return result;
}

// Address range: 0x1f9231 - 0x1f923a
int64_t function_1f9231(int64_t a1) {
    // 0x1f9231
    int64_t result; // 0x1f9231
    return result;
}

// Address range: 0x1f923c - 0x1f923d
int64_t function_1f923c(void) {
    // 0x1f923c
    int64_t result; // 0x1f923c
    return result;
}

// Address range: 0x1f923f - 0x1f9241
int64_t function_1f923f(void) {
    // 0x1f923f
    return function_1f923c();
}

// Address range: 0x1f9248 - 0x1f924b
int64_t function_1f9248(int64_t a1) {
    // 0x1f9248
    int64_t result; // 0x1f9248
    return result;
}

// Address range: 0x1f9283 - 0x1f928e
int64_t function_1f9283(int64_t a1) {
    // 0x1f9283
    return unknown_3ac9358b(a1);
}

// Address range: 0x1f92f5 - 0x1f92f8
int64_t function_1f92f5(void) {
    // 0x1f92f5
    int64_t result; // 0x1f92f5
    return result;
}

// Address range: 0x1f941f - 0x1f9435
int64_t function_1f941f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f941f
    int64_t v1; // 0x1f941f
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x1f941f
    int64_t v3 = v2 ? -4 : 4; // 0x1f9420
    unknown_7afd8a28(v3 + a1 + (v2 ? -1 : 1), v3 + a2);
    return unknown_fffffffff4f45435();
}

// Address range: 0x1f94b3 - 0x1f94be
int64_t function_1f94b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f94b3
    *(int32_t *)0x6b55d6e = *(int32_t *)0x6b55d6e + (int32_t)a4;
    return function_23ebf136();
}

// Address range: 0x1f94db - 0x1f94dd
int64_t function_1f94db(void) {
    // 0x1f94db
    int64_t v1; // 0x1f94db
    return function_1f94e0(v1, v1, v1, v1);
}

// Address range: 0x1f94de - 0x1f94e0
int64_t function_1f94de(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f94de
    int64_t result; // 0x1f94de
    *(int32_t *)a4 = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x1f94e0 - 0x1f953a
int64_t function_1f94e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f94e0
    int64_t v1; // 0x1f94e0
    uint64_t v2 = v1;
    bool v3; // 0x1f94e0
    if (v3) {
        // 0x1f9523
        *(char *)a1 = (char)(v2 / 256) + (char)a1;
        *(int32_t *)a1 = 0x603246e;
        char * v4 = (char *)((8 * a4 & 0x7fffffff8) - 0x5b56fe18 + v2); // 0x1f9527
        *v4 = *v4 + (char)v2;
        uint32_t v5 = *(int32_t *)0x3927a00d; // 0x1f952e
        *(int32_t *)0x3927a00d = v5 / 2048 | 0x200000 * v5;
        return a4 + 0xe101e80a + (int64_t)((v5 & 2048) != 0) & 0xffffffff;
    }
    // 0x1f94eb
    return 0x603246e;
}

// Address range: 0x1f95f8 - 0x1f9604
int64_t function_1f95f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f95f8
    *(int32_t *)0x7fcfb8 = *(int32_t *)0x7fcfb8 >> 29;
    int64_t result; // 0x1f95f8
    *(int32_t *)a2 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x44ffdf - 0x44ffe3
int64_t function_44ffdf(int64_t a1, int64_t a2) {
    // 0x44ffdf
    return function_44ff8b();
}

// Address range: 0x44ffef - 0x450074
int64_t function_44ffef(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a2 + 21); // 0x44ffef
    bool v2; // 0x44ffef
    char v3 = (char)v2 - (char)a3 + *v1; // 0x44ffef
    *v1 = v3;
    int64_t result; // 0x44ffef
    if (v3 == 0) {
        // 0x44fff4
        return result;
    }
    int32_t v4 = *(int32_t *)(result + 112) | (int32_t)result; // 0x45006c
    return (v4 + 249) % 256 | v4 & -256;
}

// Address range: 0x45007e - 0x450087
int64_t function_45007e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x45007e
    int64_t result; // 0x45007e
    return result;
}

// Address range: 0x4500a2 - 0x4500a5
int64_t function_4500a2(int64_t a1) {
    // 0x4500a2
    int64_t result; // 0x4500a2
    return result;
}

// Address range: 0x45010a - 0x450127
int64_t function_45010a(void) {
    int32_t v1 = *(int32_t *)0x6194313432e4972b; // 0x45010a
    *(char *)0x542647bdd4034039 = (char)v1 + 35;
    return function_ffffffff8b230155();
}

// Address range: 0x450140 - 0x450143
int64_t function_450140(int64_t a1) {
    // 0x450140
    int64_t result; // 0x450140
    return result;
}

// Address range: 0x4501c4 - 0x4501cb
int64_t function_4501c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 12); // 0x4501c4
    uint32_t v2 = *v1; // 0x4501c4
    *v1 = v2 / 8 | 0x20000000 * v2;
    int64_t result; // 0x4501c4
    return result;
}

// Address range: 0x4501cd - 0x4501d1
int64_t function_4501cd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4501cd
    int64_t result; // 0x4501cd
    return result;
}

// Address range: 0x4501d2 - 0x4501dd
int64_t function_4501d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4501d2
    __asm_int3();
    int64_t v1; // 0x4501d2
    __asm_outsb((int16_t)a3, (char)v1);
    return function_3e593f6c();
}

// Address range: 0x5748cd - 0x574900
int64_t function_5748cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x5748cd
    int64_t v1; // 0x5748cd
    char * v2 = (char *)(v1 - 117); // 0x5748cd
    char v3 = *v2 + (char)a4; // 0x5748cd
    *v2 = v3;
    if (v3 == 0) {
        // 0x5748de
        int64_t result; // 0x5748cd
        return result;
    }
    int64_t result2 = v1 ^ 37; // 0x5748d6
    if (*(char *)result2 == 0) {
        // 0x5748de
        return result2;
    }
    // 0x5748fa
    __stack_chk_fail();
    return (int64_t)&g28;
}

// Address range: 0x574900 - 0x574929
int64_t function_574900(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x574904
    return function_5736e0(v1, a2, a3, a4 % 256, a5, 0x100000000000000 * a6 >> 56, 0);
}

// Address range: 0x574930 - 0x574944
int64_t function_574930(int64_t a1) {
    // 0x574930
    return function_573290(*(int64_t *)(a1 + 32));
}

// Address range: 0x574950 - 0x574971
int64_t function_574950(int64_t a1, int64_t a2, int64_t a3) {
    // 0x574950
    return function_572ed0(*(int64_t *)(a1 + 32), a2, *(int64_t *)(a2 - 24), a3);
}

// Address range: 0x574980 - 0x574994
int64_t function_574980(int64_t a1) {
    // 0x574980
    return function_572420(*(int64_t *)(a1 + 24));
}

// Address range: 0x5749a0 - 0x5749be
int64_t function_5749a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5749a0
    return function_573380(*(int64_t *)(a1 + 16));
}

// Address range: 0x5749c0 - 0x5749de
int64_t function_5749c0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5749c0
    return function_573380(*(int64_t *)(a1 + 16));
}

// Address range: 0x5749e0 - 0x5749fe
int64_t function_5749e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5749e0
    return function_573380(*(int64_t *)(a1 + 16));
}

// Address range: 0x574a00 - 0x574a1e
int64_t function_574a00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x574a00
    return function_573380(*(int64_t *)(a1 + 16));
}

// Address range: 0x574a20 - 0x574a3e
int64_t function_574a20(int64_t a1, int64_t a2, int64_t a3) {
    // 0x574a20
    return function_573380(*(int64_t *)(a1 + 16));
}

// Address range: 0x574a40 - 0x574a54
int64_t function_574a40(int64_t a1) {
    // 0x574a40
    return function_5732c0(*(int64_t *)(a1 + 16));
}

// Address range: 0x574a60 - 0x574b10
int64_t function_574a60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = __readfsqword(40); // 0x574a73
    int64_t result = function_573580(); // 0x574aac
    if (v1 == __readfsqword(40)) {
        // 0x574aee
        return result;
    }
    // 0x574b0a
    __stack_chk_fail();
    return (int64_t)&g28;
}

// Address range: 0x574b10 - 0x574b35
int64_t function_574b10(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x574b10
    int64_t v1; // 0x574b10
    return function_573800(*(int64_t *)(a1 + 16), a2, a3, a4 % 256, v1, v1, 0);
}

// Address range: 0x574b40 - 0x574b54
int64_t function_574b40(int64_t a1) {
    // 0x574b40
    return function_5732a0(*(int64_t *)(a1 + 32));
}

// Address range: 0x574b60 - 0x574b81
int64_t function_574b60(int64_t a1, int64_t a2, int64_t a3) {
    // 0x574b60
    return function_572f70(*(int64_t *)(a1 + 32), a2, *(int64_t *)(a2 - 24), a3);
}

// Address range: 0x574b90 - 0x574c90
int64_t function_574b90(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = __readfsqword(40); // 0x574bc8
    function_360a0();
    int64_t result = function_573800(*(int64_t *)(a1 + 16), a2, a3, a4 % 256, a5, a6 & 0xffffffff, 0); // 0x574c22
    if (v1 == __readfsqword(40)) {
        // 0x574c58
        return result;
    }
    // 0x574c67
    __stack_chk_fail();
    _Unwind_Resume((struct _Unwind_Exception *)&g28);
    return (int64_t)&g28;
}

// Address range: 0x574c90 - 0x574d90
int64_t function_574c90(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = __readfsqword(40); // 0x574cc8
    function_2509a();
    int64_t v2 = *(int64_t *)(a1 + 16); // 0x574ceb
    int64_t result = function_5736e0(v2, a2, a3, a4 % 256, a5, 0x100000000000000 * a6 >> 56, 0); // 0x574d23
    if (v1 == __readfsqword(40)) {
        // 0x574d59
        return result;
    }
    // 0x574d68
    __stack_chk_fail();
    _Unwind_Resume((struct _Unwind_Exception *)&g28);
    return (int64_t)&g28;
}

// Address range: 0x574d90 - 0x574e40
int64_t function_574d90(int64_t a1, int64_t a2) {
    // 0x574d90
    __readfsqword(40);
    function_572430();
    _Unwind_Resume((struct _Unwind_Exception *)function_542470("uninitialized __any_string"));
    __stack_chk_fail();
    return (int64_t)&g28;
}

// Address range: 0x574e40 - 0x574ef0
int64_t function_574e40(int64_t a1, int64_t a2) {
    // 0x574e40
    __readfsqword(40);
    function_5724e0();
    _Unwind_Resume((struct _Unwind_Exception *)function_542470("uninitialized __any_string"));
    __stack_chk_fail();
    return (int64_t)&g28;
}

// Address range: 0x574ef0 - 0x574fb0
int64_t function_574ef0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x574ef0
    __readfsqword(40);
    function_573010();
    _Unwind_Resume((struct _Unwind_Exception *)function_542470("uninitialized __any_string"));
    __stack_chk_fail();
    return (int64_t)&g28;
}

// Address range: 0x574fb0 - 0x575070
int64_t function_574fb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x574fb0
    __readfsqword(40);
    function_573140();
    _Unwind_Resume((struct _Unwind_Exception *)function_542470("uninitialized __any_string"));
    __stack_chk_fail();
    return (int64_t)&g28;
}

// Address range: 0x575070 - 0x5750f6
int64_t function_575070(int64_t a1) {
    // 0x575070
    *(int64_t *)a1 = (int64_t)&g23;
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x575086
    *(int64_t *)(*v1 + 24) = 0;
    *(int64_t *)(*v1 + 56) = 0;
    *(int64_t *)(*v1 + 72) = 0;
    *(int64_t *)(*v1 + 88) = 0;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    *v2 = *v2 - 1;
    function_4f4e50(a1);
    return function_4eeb50(a1);
}

// Address range: 0x575100 - 0x57516e
int64_t function_575100(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x575113
    *v1 = (int64_t)&g22;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g9;
    function_5679e0(a1 + 16);
    function_565970(a1);
    return function_4eeb50(a1);
}

// Address range: 0x575170 - 0x5751f6
int64_t function_575170(int64_t a1) {
    // 0x575170
    *(int64_t *)a1 = (int64_t)&g20;
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x575186
    *(int64_t *)(*v1 + 24) = 0;
    *(int64_t *)(*v1 + 48) = 0;
    *(int64_t *)(*v1 + 64) = 0;
    *(int64_t *)(*v1 + 80) = 0;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    *v2 = *v2 - 1;
    function_4f4060(a1);
    return function_4eeb50(a1);
}

// Address range: 0x575200 - 0x57526e
int64_t function_575200(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x575213
    *v1 = (int64_t)&g18;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g13;
    function_5679e0(a1 + 16);
    function_565970(a1);
    return function_4eeb50(a1);
}

// Address range: 0x575270 - 0x5752f6
int64_t function_575270(int64_t a1) {
    // 0x575270
    *(int64_t *)a1 = (int64_t)&g19;
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x575286
    *(int64_t *)(*v1 + 24) = 0;
    *(int64_t *)(*v1 + 48) = 0;
    *(int64_t *)(*v1 + 64) = 0;
    *(int64_t *)(*v1 + 80) = 0;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    *v2 = *v2 - 1;
    function_4f3f50(a1);
    return function_4eeb50(a1);
}

// Address range: 0x575300 - 0x575386
int64_t function_575300(int64_t a1) {
    // 0x575300
    *(int64_t *)a1 = (int64_t)&g24;
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x575316
    *(int64_t *)(*v1 + 24) = 0;
    *(int64_t *)(*v1 + 56) = 0;
    *(int64_t *)(*v1 + 72) = 0;
    *(int64_t *)(*v1 + 88) = 0;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    *v2 = *v2 - 1;
    function_4f4f50(a1);
    return function_4eeb50(a1);
}

// Address range: 0x575390 - 0x5753f6
int64_t function_575390(int64_t a1) {
    // 0x575390
    *(int64_t *)a1 = (int64_t)&g17;
    *(int64_t *)(*(int64_t *)(a1 + 32) + 24) = 0;
    int32_t * v1 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    *v1 = *v1 - 1;
    function_56b220(a1);
    return function_4eeb50(a1);
}

// Address range: 0x575400 - 0x575466
int64_t function_575400(int64_t a1) {
    // 0x575400
    *(int64_t *)a1 = (int64_t)&g21;
    *(int64_t *)(*(int64_t *)(a1 + 32) + 24) = 0;
    int32_t * v1 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    *v1 = *v1 - 1;
    function_56b4f0(a1);
    return function_4eeb50(a1);
}

// Address range: 0x575470 - 0x5754c5
int64_t function_575470(int64_t a1) {
    // 0x575470
    *(int64_t *)a1 = (int64_t)&g6;
    int32_t * v1 = (int32_t *)(*(int64_t *)(a1 + 32) + 8);
    int32_t v2 = *v1;
    int32_t v3 = v2 - 1;
    if (g25 == 0) {
        // 0x5754a8
        *v1 = v3;
        if (v2 != 1) {
            // 0x57549b
            return function_508360(a1);
        }
    } else {
        // 0x57548c
        *v1 = v3;
        if (v2 != 1) {
            // 0x57549b
            return function_508360(a1);
        }
    }
    // 0x5754b6
    return function_508360(a1);
}

// Address range: 0x5754d0 - 0x575525
int64_t function_5754d0(int64_t a1) {
    // 0x5754d0
    *(int64_t *)a1 = (int64_t)&g3;
    int32_t * v1 = (int32_t *)(*(int64_t *)(a1 + 32) + 8);
    int32_t v2 = *v1;
    int32_t v3 = v2 - 1;
    if (g25 == 0) {
        // 0x575508
        *v1 = v3;
        if (v2 != 1) {
            // 0x5754fb
            return function_552460(a1);
        }
    } else {
        // 0x5754ec
        *v1 = v3;
        if (v2 != 1) {
            // 0x5754fb
            return function_552460(a1);
        }
    }
    // 0x575516
    return function_552460(a1);
}

// Address range: 0x575530 - 0x57558e
int64_t function_575530(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x575543
    *v1 = (int64_t)&g5;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 16) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g11;
    return function_565970(a1);
}

// Address range: 0x575590 - 0x5755ee
int64_t function_575590(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x5755a3
    *v1 = (int64_t)&g1;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 16) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g14;
    return function_565970(a1);
}

// Address range: 0x5755f0 - 0x57564e
int64_t function_5755f0(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x575603
    *v1 = (int64_t)&g4;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 16) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g10;
    return function_565970(a1);
}

// Address range: 0x575650 - 0x5756ae
int64_t function_575650(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x575663
    *v1 = (int64_t)&g2;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 16) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g15;
    return function_565970(a1);
}

// Address range: 0x5756b0 - 0x57570e
int64_t function_5756b0(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x5756c3
    *v1 = (int64_t)&g8;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 16) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g12;
    return function_565970(a1);
}

// Address range: 0x575710 - 0x57576e
int64_t function_575710(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x575723
    *v1 = (int64_t)&g7;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 16) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g16;
    return function_565970(a1);
}

// Address range: 0x575770 - 0x5757cd
int64_t function_575770(int64_t a1) {
    // 0x575770
    *(int64_t *)a1 = (int64_t)&g21;
    *(int64_t *)(*(int64_t *)(a1 + 32) + 24) = 0;
    int32_t * v1 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    int32_t v2 = *v1;
    int32_t v3 = v2 - 1;
    if (g25 == 0) {
        // 0x5757b0
        *v1 = v3;
        if (v2 != 1) {
            // 0x5757a7
            return function_56b4f0(a1);
        }
    } else {
        // 0x575798
        *v1 = v3;
        if (v2 != 1) {
            // 0x5757a7
            return function_56b4f0(a1);
        }
    }
    // 0x5757be
    return function_56b4f0(a1);
}

// Address range: 0x5757d0 - 0x575826
int64_t function_5757d0(int64_t a1) {
    // 0x5757d0
    *(int64_t *)a1 = (int64_t)&g6;
    int32_t * v1 = (int32_t *)(*(int64_t *)(a1 + 32) + 8);
    *v1 = *v1 - 1;
    function_508360(a1);
    return function_4eeb50(a1);
}

// Address range: 0x575830 - 0x575886
int64_t function_575830(int64_t a1) {
    // 0x575830
    *(int64_t *)a1 = (int64_t)&g3;
    int32_t * v1 = (int32_t *)(*(int64_t *)(a1 + 32) + 8);
    *v1 = *v1 - 1;
    function_552460(a1);
    return function_4eeb50(a1);
}

// Address range: 0x575890 - 0x5758cb
int64_t function_575890(int64_t a1) {
    // 0x575890
    *(int64_t *)a1 = (int64_t)&g17;
    int64_t result = *(int64_t *)(a1 + 32); // 0x5758a6
    *(int64_t *)(result + 24) = 0;
    if (g25 == 0) {
        // 0x5758d0
        return result;
    }
    int32_t * v1 = (int32_t *)(*(int64_t *)(a1 + 24) + 8); // 0x5758bd
    uint32_t result2 = *v1; // 0x5758bd
    *v1 = result2 - 1;
    return result2;
}
