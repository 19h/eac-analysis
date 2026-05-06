/*
 * Targeted RetDec C for native executable gap queue batch 1274.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2c3a4e-0x2c3c4e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c3c4e-0x2c3e4e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3973e1-0x3975e1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3975e1-0x3977e1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3979e1-0x397be1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x397be1-0x397de1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x397de1-0x397fe1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x397fe1-0x3981e1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d34ff-0x3d36ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d36ff-0x3d38ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d38ff-0x3d3aff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d3aff-0x3d3cff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d3cff-0x3d3eff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d3eff-0x3d40ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d40ff-0x3d42ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d42ff-0x3d44ff rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
extern int g7;
extern int g8;
extern int g9;
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

int64_t function_17b0441();
int64_t function_2256452();
int64_t function_22609a7();
int64_t function_2c3a4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2c3baf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2c3d82(void);
int64_t function_2c3e17(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32c975fe();
int64_t function_3973e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_397410(void);
int64_t function_397430(int64_t a1, int64_t a2);
int64_t function_397469(void);
int64_t function_397488(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39751f(void);
int64_t function_397539(void);
int64_t function_397548(void);
int64_t function_397565(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39759c(void);
int64_t function_3975ab(void);
int64_t function_3975e7(int64_t a1);
int64_t function_397659(int64_t a1);
int64_t function_3976c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3976de(void);
int64_t function_397708(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_397740(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_397779(int64_t a1);
int64_t function_3979e1(void);
int64_t function_3979f0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_397a21(void);
int64_t function_397a2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_397abc(int64_t a1);
int64_t function_397ae1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_397baf(void);
int64_t function_397bb1(int64_t a1);
int64_t function_397bbc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_397c08(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_397cad(int64_t a1, int64_t a2, int64_t a3);
int64_t function_397cbb(void);
int64_t function_397cc0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_397ce6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_397d0b(int64_t a1);
int64_t function_397d36(void);
int64_t function_397d45(void);
int64_t function_397d5d(void);
int64_t function_397dbb(int64_t a1);
int64_t function_397dc2(int64_t a1, int64_t a2);
int64_t function_397dd4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_397df4(void);
int64_t function_397e10(void);
int64_t function_397e35(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_397e6b(void);
int64_t function_397eb8(void);
int64_t function_397ef0(void);
int64_t function_397f03(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_397fb4(int64_t a1);
int64_t function_397fe1(void);
int64_t function_398000(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_398055(void);
int64_t function_3980ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3980e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39810b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_39818c(void);
int64_t function_398190(int64_t a1, int64_t a2);
int64_t function_3981d2(void);
int64_t function_3ab9f0();
int64_t function_3d34ff(void);
int64_t function_3d3502(void);
int64_t function_3d3558(int64_t a1);
int64_t function_3d3576(void);
int64_t function_3d3579(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d35bf(int64_t a1);
int64_t function_3d35d0(void);
int64_t function_3d35d8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d3622(void);
int64_t function_3d3658(void);
int64_t function_3d36a6(int64_t a1);
int64_t function_3d36b4(int64_t a1);
int64_t function_3d36b6(void);
int64_t function_3d36c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d3719(int64_t a1);
int64_t function_3d3754(void);
int64_t function_3d3763(void);
int64_t function_3d377b(void);
int64_t function_3d3796(int64_t a1);
int64_t function_3d37ee(void);
int64_t function_3d3812(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3d38a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d38de(int64_t a1);
int64_t function_3d3965(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3d3975(int64_t a1);
int64_t function_3d3992(int64_t a1);
int64_t function_3d39dd(void);
int64_t function_3d39fa(void);
int64_t function_3d3a19(void);
int64_t function_3d3a4d(void);
int64_t function_3d3a54(void);
int64_t function_3d3ad4(int64_t a1);
int64_t function_3d3b09(int64_t a1);
int64_t function_3d3b1b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d3bb3(void);
int64_t function_3d3bc9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d3beb(void);
int64_t function_3d3bf1(void);
int64_t function_3d3bf6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d3c61(void);
int64_t function_3d3c68(int64_t a1);
int64_t function_3d3c80(int64_t a1);
int64_t function_3d3cbc(void);
int64_t function_3d3ce1(void);
int64_t function_3d3d01(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d3d39(void);
int64_t function_3d3db5(void);
int64_t function_3d3de7(void);
int64_t function_3d3e27(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d3e3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d3e4f(int64_t a1);
int64_t function_3d3e51(void);
int64_t function_3d3e69(int64_t a1);
int64_t function_3d3e82(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d3eb0(void);
int64_t function_3d3eb2(int64_t a1);
int64_t function_3d3ec1(void);
int64_t function_3d3ec4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3d3fb3(int64_t a1);
int64_t function_3d4029(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d4077(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d409b(int64_t a1, int64_t a2);
int64_t function_3d40b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d40f4(void);
int64_t function_3d418e(int64_t a1, int64_t a2);
int64_t function_3d41ac(int64_t a1);
int64_t function_3d41b1(void);
int64_t function_3d4201(void);
int64_t function_3d4217(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d4302(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d4305(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d4415(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d442f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d4473(void);
int64_t function_3d44b0(void);
int64_t function_3d44b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d697bff();
int64_t function_45456b65();
int64_t function_53b54733();
int64_t function_6a820ef5();
int64_t function_7ccb91e2();
int64_t function_7f3c416c();
int64_t function_cf3c7();
int64_t function_ffffffff930481a2();
int64_t function_ffffffffc7357ba9();
int64_t unknown_10f4ce5f();
int64_t unknown_1e7ae799();
int64_t unknown_247676ae();
int64_t unknown_320b213();
int64_t unknown_36ce567d();
int64_t unknown_393d5285();
int64_t unknown_3c30fccc();
int64_t unknown_53ba7433();
int64_t unknown_5a5caef3();
int64_t unknown_6854da51();
int64_t unknown_6a2be0e7();
int64_t unknown_754c83();
int64_t unknown_7941a402();
int64_t unknown_7c8b34aa();
int64_t unknown_7db1037f();
int64_t unknown_7ef72df3();
int64_t unknown_ffffffff82cc3ad3();
int64_t unknown_ffffffffa335a12f();
int64_t unknown_ffffffffa7435fb9();
int64_t unknown_ffffffffabf0576e();
int64_t unknown_ffffffffac86ebf6();
int64_t unknown_ffffffffaf32a613();
int64_t unknown_ffffffffb8a4dcdf();
int64_t unknown_ffffffffb9bf3dd5();
int64_t unknown_ffffffffbad0a250();
int64_t unknown_ffffffffbc98a799();
int64_t unknown_ffffffffc843202a();
int64_t unknown_ffffffffc8c8b5c9();
int64_t unknown_ffffffffeda0e995();
int64_t unknown_fffffffff31bf057();
int64_t unknown_ffffffffffcd7f0c();

// Address range: 0x2c3a4e - 0x2c3baf
int64_t function_2c3a4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x295e1e; // bp-24, 0x2c3aac
    int64_t v2 = (int64_t)&v1; // 0x2c3b85
    *(int64_t *)(v2 - 8) = 0x295e1e;
    int64_t v3 = v2 - 16; // 0x2c3b94
    *(int64_t *)(v2 - 24) = v3;
    *(int64_t *)v3 = v2;
    return function_cf3c7(a1);
}

// Address range: 0x2c3baf - 0x2c3d1c
int64_t function_2c3baf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2c3baf
    int64_t v1; // bp-48, 0x2c3baf
    int64_t v2 = (int64_t)&v1; // 0x2c3cb4
    v1 = a7;
    *(int64_t *)(v2 + 16) = a7;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x2c3cc8
    *v3 = 0x5e693718;
    *(int64_t *)(v2 - 16) = 169;
    *(int64_t *)(v2 + 32) = v1;
    int64_t * v4 = (int64_t *)(v2 + 8); // 0x2c3cd8
    *v3 = *v4;
    *v4 = a1;
    *v4 = v2 + 24;
    return function_cf3c7(*v4);
}

// Address range: 0x2c3d82 - 0x2c3d85
int64_t function_2c3d82(void) {
    // 0x2c3d82
    int64_t result; // 0x2c3d82
    return result;
}

// Address range: 0x2c3e17 - 0x2c3e2c
int64_t function_2c3e17(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2c3e17
    int64_t v1; // 0x2c3e17
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(v2 - 127); // 0x2c3e1c
    *v3 = *v3 + (char)a4;
    return (int64_t)(*(int32_t *)(a2 - 31) * (int32_t)v2);
}

// Address range: 0x3973e1 - 0x3973f4
int64_t function_3973e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3973e1
    int64_t v1; // 0x3973e1
    int64_t v2 = v1;
    char * v3 = (char *)(a4 + 0x13d00c2); // 0x3973e7
    unsigned char v4 = *v3; // 0x3973e7
    unsigned char v5 = v4 + (char)((uint64_t)v1 / 256); // 0x3973e7
    *v3 = v5;
    int64_t result; // 0x3973e1
    if (a4 != 1 != (v5 == 0)) {
        int64_t v6 = (v2 - (int64_t)(v5 < v4)) % 256 | v2 & -256; // 0x3973ef
        char * v7 = (char *)(v6 + a3); // 0x3973f1
        unsigned char v8 = *v7; // 0x3973f1
        *v7 = v8 / 128 | 2 * v8;
        result = v6;
    }
    // 0x3973f4
    return result;
}

// Address range: 0x397410 - 0x397411
int64_t function_397410(void) {
    // 0x397410
    int64_t result; // 0x397410
    return result;
}

// Address range: 0x397430 - 0x397443
int64_t function_397430(int64_t a1, int64_t a2) {
    // 0x397430
    return function_397410();
}

// Address range: 0x397469 - 0x39746c
int64_t function_397469(void) {
    // 0x397469
    int64_t result; // 0x397469
    return result;
}

// Address range: 0x397488 - 0x3974f4
int64_t function_397488(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x397488
    int64_t v1; // 0x397488
    uint64_t v2 = v1;
    float80_t v3; // 0x397488
    float80_t v4 = v3;
    char v5 = (char)v1 - 64; // 0x397489
    int32_t v6 = a2;
    if (a4 != 1 != (v5 == 0)) {
        if (v5 < 0) {
            // 0x39748f
            return a1 & 0xffffffff;
        }
        int32_t * v7 = (int32_t *)(v2 + 0x4c0068e7); // 0x3974a5
        *v7 = *v7 + v6;
        return __asm_in(-86);
    }
    // 0x3974c7
    __asm_outsd((int16_t)a3, v6);
    char v8 = v4 != v4 || 0.0L != 0.0L ? 93 : 92; // 0x3974cf
    char * v9 = (char *)(a1 - 0xf56fdc8); // 0x3974d7
    *v9 = (char)(v5 - v8 < 191) + (char)v2 + *v9;
    *(char *)-0x5823041c = *(char *)-0x5823041c + (char)(v2 / 256);
    int16_t v10; // 0x397488
    return unknown_7ef72df3(v10) & -16;
}

// Address range: 0x39751f - 0x397527
int64_t function_39751f(void) {
    // 0x39751f
    int64_t result; // 0x39751f
    return result;
}

// Address range: 0x397539 - 0x397546
int64_t function_397539(void) {
    // 0x397539
    int64_t v1; // 0x397539
    return v1 + 0xb35d1d & 0xffffffff;
}

// Address range: 0x397548 - 0x397551
int64_t function_397548(void) {
    // 0x397548
    int64_t result; // 0x397548
    return result;
}

// Address range: 0x397565 - 0x39756a
int64_t function_397565(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x397565
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v1; // 0x397565
    bool v2; // 0x397565
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x39759c - 0x39759d
int64_t function_39759c(void) {
    // 0x39759c
    int64_t result; // 0x39759c
    return result;
}

// Address range: 0x3975ab - 0x3975b0
int64_t function_3975ab(void) {
    // 0x3975ab
    int64_t result; // 0x3975ab
    bool v1; // 0x3975ab
    if (v1 || false) {
        result = function_39759c();
    }
    // 0x3975ad
    return result;
}

// Address range: 0x3975e7 - 0x3975e8
int64_t function_3975e7(int64_t a1) {
    // 0x3975e7
    int64_t result; // 0x3975e7
    return result;
}

// Address range: 0x397659 - 0x39765c
int64_t function_397659(int64_t a1) {
    // 0x397659
    int64_t result; // 0x397659
    __asm_out(43, (char)result);
    return result;
}

// Address range: 0x3976c1 - 0x3976c6
int64_t function_3976c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3976c1
    int64_t result; // 0x3976c1
    *(int32_t *)a4 = (int32_t)result + (int32_t)a4;
    return result;
}

// Address range: 0x3976de - 0x3976df
int64_t function_3976de(void) {
    // 0x3976de
    int64_t result; // 0x3976de
    return result;
}

// Address range: 0x397708 - 0x39771c
int64_t function_397708(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x397708
    int64_t v1; // 0x397708
    *(char *)-0x8e3159d0bfec23b = (char)v1;
    int64_t result; // 0x397708
    bool v2; // 0x397708
    if (v2) {
        result = function_3976de();
    }
    char * v3 = (char *)(a2 - 0x6b5b6678); // 0x397713
    *v3 = *v3 + (char)(a4 / 256);
    return result;
}

// Address range: 0x397740 - 0x397761
int64_t function_397740(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    if (a4 == 0) {
        // 0x397755
        return function_6a820ef5();
    }
    int64_t result = unknown_6854da51(); // 0x39774b
    char * v1 = (char *)result; // 0x397750
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x397779 - 0x39777c
int64_t function_397779(int64_t a1) {
    // 0x397779
    int64_t result; // 0x397779
    return result;
}

// Address range: 0x3979e1 - 0x3979e3
int64_t function_3979e1(void) {
    // 0x3979e1
    int64_t v1; // 0x3979e1
    int64_t v2 = v1;
    return (v2 + 224) % 256 | v2 & -256;
}

// Address range: 0x3979f0 - 0x3979fa
int64_t function_3979f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3979f0
    int64_t result; // 0x3979f0
    return result;
}

// Address range: 0x397a21 - 0x397a22
int64_t function_397a21(void) {
    // 0x397a21
    int64_t result; // 0x397a21
    return result;
}

// Address range: 0x397a2f - 0x397a3f
int64_t function_397a2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = __asm_iretd(a1, a2, a3, a4); // 0x397a2f
    unsigned char v1 = *(char *)-0x6ba46cc9; // 0x397a30
    int64_t v2; // 0x397a2f
    unsigned char v3 = v1 + (char)((uint64_t)v2 / 256); // 0x397a30
    *(char *)-0x6ba46cc9 = v3;
    int32_t v4 = *(int32_t *)-0x3c15e64e; // 0x397a36
    *(int32_t *)-0x3c15e64e = v4 + (int32_t)a3 + (int32_t)(v3 < v1);
    return result;
}

// Address range: 0x397abc - 0x397ac2
int64_t function_397abc(int64_t a1) {
    // 0x397abc
    int64_t v1; // 0x397abc
    return function_3d697bff(v1 & 0xffffffff);
}

// Address range: 0x397ae1 - 0x397b5a
int64_t function_397ae1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x397ae1
    int64_t v1; // 0x397ae1
    uint64_t result = v1;
    bool v2; // 0x397ae1
    if (true == !v2) {
        // 0x397b34
        return result;
    }
    char * v3 = (char *)(a3 + 1); // 0x397b55
    *v3 = (char)(result / 256);
    int64_t result2 = 256 * (int64_t)*v3 | result & -0xff01; // 0x397b55
    char * v4 = (char *)result2; // 0x397b58
    *v4 = *v4 + (char)result;
    return result2;
}

// Address range: 0x397baf - 0x397bb0
int64_t function_397baf(void) {
    // 0x397baf
    int64_t result; // 0x397baf
    return result;
}

// Address range: 0x397bb1 - 0x397bb2
int64_t function_397bb1(int64_t a1) {
    // 0x397bb1
    int64_t result; // 0x397bb1
    return result;
}

// Address range: 0x397bbc - 0x397bde
int64_t function_397bbc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x397bbc
    char * v3 = (char *)(v2 - 0x2893fec3); // 0x397bbc
    *v3 = *v3 + (char)(a4 / 256);
    int64_t v4 = a2; // 0x397bd2
    while (true) {
        // 0x397bc8
        *(char *)v1 = *(char *)&v1 ^ (char)a4 - 1;
        int64_t v5; // 0x397bbc
        int64_t v6 = v5 & -0xff01 | (int64_t)&g7; // 0x397bca
        float80_t v7; // 0x397bbc
        *(int16_t *)(v1 - 0x76b221cc) = (int16_t)v7;
        bool v8; // 0x397bbc
        v4 += (v8 ? -4 : 4);
        char * v9 = (char *)v4; // 0x397bd3
        *v9 = *v9 + (char)v6;
        char v10 = *(char *)-0x383c0523; // 0x397bd5
        *(char *)-0x383c0523 = v10 + (char)((int64_t)&g7 >> 8);
        v5 = v6;
    }
}

// Address range: 0x397c08 - 0x397c29
int64_t function_397c08(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x397c08
    int64_t v1; // 0x397c08
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    __asm_in_133(121);
    char * v3 = (char *)(a4 - 0x59fec206); // 0x397c1d
    *v3 = *v3 - 57;
    int64_t result; // 0x397c08
    if (a4 == 1) {
        // 0x397c08
        int64_t v4; // bp+31, 0x397c08
        result = (int64_t)&v4;
    } else {
        result = function_397baf();
    }
    // 0x397c25
    return result;
}

// Address range: 0x397cad - 0x397cb3
int64_t function_397cad(int64_t a1, int64_t a2, int64_t a3) {
    // 0x397cad
    return function_3ab9f0();
}

// Address range: 0x397cbb - 0x397cbc
int64_t function_397cbb(void) {
    // 0x397cbb
    int64_t result; // 0x397cbb
    return result;
}

// Address range: 0x397cc0 - 0x397ce2
int64_t function_397cc0(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a1 - 102); // 0x397cc0
    int64_t v2; // 0x397cc0
    bool v3; // 0x397cc0
    *v1 = (char)v3 - (char)((uint64_t)v2 / 256) + *v1;
    int64_t v4; // 0x397cc0
    int64_t v5 = v4;
    *(int32_t *)v5 = *(int32_t *)&v4 + (int32_t)v5;
    return a2 & 0xffffffff;
}

// Address range: 0x397ce6 - 0x397d0a
int64_t function_397ce6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x397ce6
    bool v1; // 0x397ce6
    if (v1) {
        // 0x397ce8
        int64_t v2; // 0x397ce6
        return v2 & 0xffffffff;
    }
    int64_t v3 = unknown_ffffffffac86ebf6(); // 0x397cf0
    char * v4 = (char *)(v3 - 0x31fec300); // 0x397cf5
    unsigned char v5 = *v4; // 0x397cf5
    unsigned char v6 = (char)v3; // 0x397cf5
    char v7 = v5 - v6; // 0x397cf5
    *v4 = v7;
    int64_t v8 = v3; // 0x397cfd
    if (v5 < v6 || v7 == 0) {
        v8 = function_397cbb();
    }
    int32_t v9 = *(int32_t *)(a4 + 0x1108aff5) * (int32_t)v8; // 0x397cff
    unsigned char v10 = (char)v9; // 0x397d05
    int64_t v11; // 0x397ce6
    unsigned char v12 = *(char *)&v11 + v10; // 0x397d05
    int64_t result = (int64_t)v12 | (int64_t)(v9 & -256); // 0x397d05
    char * v13 = (char *)result; // 0x397d07
    *v13 = *v13 + (char)a4 + (char)(v12 < v10);
    return result;
}

// Address range: 0x397d0b - 0x397d0d
int64_t function_397d0b(int64_t a1) {
    // 0x397d0b
    int64_t result; // 0x397d0b
    return result;
}

// Address range: 0x397d36 - 0x397d38
int64_t function_397d36(void) {
    // 0x397d36
    int64_t v1; // 0x397d36
    return (int64_t)&v1;
}

// Address range: 0x397d45 - 0x397d48
int64_t function_397d45(void) {
    // 0x397d45
    int64_t result; // 0x397d45
    return result;
}

// Address range: 0x397d5d - 0x397d60
int64_t function_397d5d(void) {
    // 0x397d5d
    int64_t v1; // 0x397d5d
    return function_397dc2(v1, v1);
}

// Address range: 0x397dbb - 0x397dbf
int64_t function_397dbb(int64_t a1) {
    // 0x397dbb
    int64_t result; // 0x397dbb
    int64_t v1; // 0x397dbb
    result = function_397e35(v1, v1, v1, v1);
    // 0x397dbd
    return result;
}

// Address range: 0x397dc2 - 0x397dc8
int64_t function_397dc2(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 114); // 0x397dc4
    uint32_t v2 = *v1; // 0x397dc4
    int64_t v3; // 0x397dc2
    uint32_t v4 = (int32_t)v3; // 0x397dc4
    int32_t v5 = v2 + v4; // 0x397dc4
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x397dc4
    *v1 = v5;
    return v3 & -0xff01 | 256 * (64 * (int64_t)(v5 == 0) | (int64_t)(v5 < v2) | 128 * (int64_t)(v5 < 0) | 16 * (int64_t)(v2 % 16 + v4 % 16 > 15) | 4 * (int64_t)(v6 % 2 == 0)) | 512;
}

// Address range: 0x397dd4 - 0x397dda
int64_t function_397dd4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x397dd4
    int64_t result; // 0x397dd4
    int64_t v1 = result;
    *(char *)v1 = (char)(v1 ^ a3);
    return result;
}

// Address range: 0x397df4 - 0x397df5
int64_t function_397df4(void) {
    // 0x397df4
    int64_t result; // 0x397df4
    return result;
}

// Address range: 0x397e10 - 0x397e11
int64_t function_397e10(void) {
    // 0x397e10
    int64_t result; // 0x397e10
    return result;
}

// Address range: 0x397e35 - 0x397e49
int64_t function_397e35(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x397e35
    int64_t v1; // 0x397e35
    unsigned char v2 = (char)v1; // 0x397e35
    bool v3; // 0x397e35
    unsigned char v4 = v2 - 24 + (char)v3; // 0x397e35
    bool v5 = v3 ? v4 <= v2 : v2 > 23; // 0x397e35
    char * v6 = (char *)(4 * a1 + a3); // 0x397e37
    unsigned char v7 = *v6; // 0x397e37
    unsigned char v8 = v7 + (char)a4; // 0x397e37
    unsigned char v9 = v8 + (char)v5; // 0x397e37
    bool v10 = v5 ? v9 <= v7 : v8 < v7; // 0x397e37
    *v6 = v9;
    int64_t v11; // 0x397e35
    __asm_outsb((int16_t)a3, *(char *)&v11);
    return v1 & -256 | (int64_t)(v4 - 118 + (char)v10);
}

// Address range: 0x397e6b - 0x397e6c
int64_t function_397e6b(void) {
    // 0x397e6b
    int64_t result; // 0x397e6b
    return result;
}

// Address range: 0x397eb8 - 0x397eb9
int64_t function_397eb8(void) {
    // 0x397eb8
    int64_t result; // 0x397eb8
    return result;
}

// Address range: 0x397ef0 - 0x397ef1
int64_t function_397ef0(void) {
    // 0x397ef0
    int64_t result; // 0x397ef0
    return result;
}

// Address range: 0x397f03 - 0x397fad
int64_t function_397f03(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x397f03
    int64_t v1; // 0x397f03
    char v2 = v1 & v1; // 0x397f03
    *(char *)a2 = v2;
    unknown_ffffffffffcd7f0c();
    int64_t v3; // 0x397f03
    if (v2 < 0) {
        // 0x397f47
        __asm_outsd((int16_t)a3, *(int32_t *)&v3);
        return unknown_ffffffffbad0a250();
    }
    int64_t result = __asm_sti(); // 0x397f0d
    __asm_outsd((int16_t)a3, *(int32_t *)&v3);
    return result;
}

// Address range: 0x397fb4 - 0x397fba
int64_t function_397fb4(int64_t a1) {
    // 0x397fb4
    return function_ffffffff930481a2();
}

// Address range: 0x397fe1 - 0x397fe7
int64_t function_397fe1(void) {
    // 0x397fe1
    return unknown_6a2be0e7();
}

// Address range: 0x398000 - 0x398028
int64_t function_398000(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x398000
    int64_t v1; // 0x398000
    *(int32_t *)a2 = 2 * (int32_t)v1;
    char * v2 = (char *)(a4 + 0x605f302a); // 0x398018
    *v2 = *v2 + (char)a4;
    int32_t * v3 = (int32_t *)(a1 - 10); // 0x398020
    *v3 = *v3 + (int32_t)a3;
    return function_53b54733();
}

// Address range: 0x398055 - 0x398058
int64_t function_398055(void) {
    // 0x398055
    int64_t result; // 0x398055
    return result;
}

// Address range: 0x3980ca - 0x3980db
int64_t function_3980ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x3980ca
    int64_t result; // 0x3980ca
    if (v1 != 0) {
        char * v2 = (char *)(a1 - 0x1efec300 + result); // 0x3980ca
        unsigned char v3 = *v2; // 0x3980ca
        *v2 = v3 >> v1 | v3 << 8 - v1;
    }
    int32_t * v4 = (int32_t *)(a1 - 0x6f30024f); // 0x3980d1
    *v4 = 0x40000 * *v4;
    return result;
}

// Address range: 0x3980e7 - 0x3980ec
int64_t function_3980e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3980e7
    int64_t result; // 0x3980e7
    return result;
}

// Address range: 0x39810b - 0x39818b
int64_t function_39810b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x39810b
    *(char *)a2 = (char)a2 + 1;
    int64_t v1; // 0x39810b
    *(char *)-0x1b3ccfe6 = *(char *)-0x1b3ccfe6 + (char)(v1 / 256);
    int32_t * v2 = (int32_t *)(2 * a1 + 121 + a2); // 0x398173
    uint32_t v3 = *v2; // 0x398173
    uint32_t v4 = v3 + (int32_t)v1; // 0x398173
    *v2 = v4;
    __asm_out_134((int16_t)v1 & -256 | 248, (char)a3);
    if (v4 != 0) {
        // 0x398122
        return result;
    }
    // 0x39817a
    if (v4 < v3) {
        // 0x398122
        return a3 & 0xffffffff;
    }
    char * v5 = (char *)(a4 + 66); // 0x39817c
    *v5 = *v5 + *(char *)(v1 - 0x726c5f6);
    int64_t v6 = unknown_393d5285(); // 0x39817f
    return v6 & -256 | (int64_t)(*(char *)0x2220564 + (char)v6);
}

// Address range: 0x39818c - 0x39818f
int64_t function_39818c(void) {
    // 0x39818c
    int64_t result; // 0x39818c
    return result;
}

// Address range: 0x398190 - 0x39819b
int64_t function_398190(int64_t a1, int64_t a2) {
    // 0x398190
    *(int32_t *)a1 = *(int32_t *)(int32_t *)&g8;
    bool v1; // 0x398190
    int64_t v2 = v1 ? -4 : 4; // 0x398190
    return unknown_ffffffffbc98a799(v2 + a1 + (v1 ? -1 : 1), v2 + a2);
}

// Address range: 0x3981d2 - 0x3981d5
int64_t function_3981d2(void) {
    // 0x3981d2
    int64_t result; // 0x3981d2
    return result;
}

// Address range: 0x3d34ff - 0x3d3500
int64_t function_3d34ff(void) {
    // 0x3d34ff
    int64_t result; // 0x3d34ff
    return result;
}

// Address range: 0x3d3502 - 0x3d3503
int64_t function_3d3502(void) {
    // 0x3d3502
    int64_t result; // 0x3d3502
    return result;
}

// Address range: 0x3d3558 - 0x3d3559
int64_t function_3d3558(int64_t a1) {
    // 0x3d3558
    int64_t result; // 0x3d3558
    return result;
}

// Address range: 0x3d3576 - 0x3d3579
int64_t function_3d3576(void) {
    // 0x3d3576
    int64_t result; // 0x3d3576
    return result;
}

// Address range: 0x3d3579 - 0x3d35a9
int64_t function_3d3579(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d3579
    unknown_7db1037f();
    bool v1; // 0x3d3579
    if (v1) {
        // 0x3d3580
        return function_3d3502();
    }
    int64_t result = unknown_320b213(); // 0x3d359c
    if (v1) {
        int32_t * v2 = (int32_t *)(a1 - 0x65db97a7); // 0x3d35a3
        *v2 = *v2 + (int32_t)a1;
        return result;
    }
    // 0x3d358b
    int64_t v3; // 0x3d3579
    int32_t * v4 = (int32_t *)(v3 - 2); // 0x3d358b
    *v4 = *v4 + (int32_t)a2;
    int32_t * v5 = (int32_t *)((v3 & 0xffffffff) + 102); // 0x3d3596
    *v5 = *v5 + (int32_t)a1;
    return result;
}

// Address range: 0x3d35bf - 0x3d35d0
int64_t function_3d35bf(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 98); // 0x3d35bf
    int32_t v2 = *v1; // 0x3d35bf
    *v1 = -v2;
    unknown_ffffffffc8c8b5c9();
    int32_t v3 = *(int32_t *)__asm_int1(); // 0x3d35c9
    return function_2256452((int32_t)(v2 != 0) + (int32_t)a1 - v3);
}

// Address range: 0x3d35d0 - 0x3d35d8
int64_t function_3d35d0(void) {
    // 0x3d35d0
    int64_t result; // 0x3d35d0
    return result;
}

// Address range: 0x3d35d8 - 0x3d35f6
int64_t function_3d35d8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d35d8
    unknown_ffffffffb8a4dcdf();
    bool v1; // 0x3d35d8
    return unknown_5a5caef3((v1 ? -1 : 1) + a1);
}

// Address range: 0x3d3622 - 0x3d3624
int64_t function_3d3622(void) {
    // 0x3d3622
    int64_t result; // 0x3d3622
    return result;
}

// Address range: 0x3d3658 - 0x3d365b
int64_t function_3d3658(void) {
    // 0x3d3658
    return function_3d36b4((int64_t)&g9);
}

// Address range: 0x3d36a6 - 0x3d36a7
int64_t function_3d36a6(int64_t a1) {
    // 0x3d36a6
    int64_t result; // 0x3d36a6
    return result;
}

// Address range: 0x3d36b4 - 0x3d36b5
int64_t function_3d36b4(int64_t a1) {
    // 0x3d36b4
    int64_t result; // 0x3d36b4
    return result;
}

// Address range: 0x3d36b6 - 0x3d36c0
int64_t function_3d36b6(void) {
    // 0x3d36b6
    return function_ffffffffc7357ba9();
}

// Address range: 0x3d36c0 - 0x3d3702
int64_t function_3d36c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d36c0
    int64_t v1; // 0x3d36c0
    int64_t v2 = v1;
    return 256 * v2 & 0x2200 | v2 & -222;
}

// Address range: 0x3d3719 - 0x3d371d
int64_t function_3d3719(int64_t a1) {
    // 0x3d3719
    int64_t result; // 0x3d3719
    return result;
}

// Address range: 0x3d3754 - 0x3d3755
int64_t function_3d3754(void) {
    // 0x3d3754
    int64_t result; // 0x3d3754
    return result;
}

// Address range: 0x3d3763 - 0x3d376c
int64_t function_3d3763(void) {
    // 0x3d3763
    return function_45456b65();
}

// Address range: 0x3d377b - 0x3d3784
int64_t function_3d377b(void) {
    // 0x3d377b
    int64_t v1; // 0x3d377b
    bool v2; // 0x3d377b
    if (v2) {
        v1 = function_3d3754();
    }
    int16_t v3 = 256 * (int16_t)v1 >> 8; // 0x3d377d
    return v1 & -0x10000 | (int64_t)(v3 * v3);
}

// Address range: 0x3d3796 - 0x3d3799
int64_t function_3d3796(int64_t a1) {
    // 0x3d3796
    int64_t result; // 0x3d3796
    return result;
}

// Address range: 0x3d37ee - 0x3d37ef
int64_t function_3d37ee(void) {
    // 0x3d37ee
    int64_t result; // 0x3d37ee
    return result;
}

// Address range: 0x3d3812 - 0x3d38a4
int64_t function_3d3812(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int32_t v1 = a1; // 0x3d3816
    int32_t * v2 = (int32_t *)a3; // 0x3d3816
    *v2 = v1;
    uint32_t v3 = (int32_t)a3;
    uint32_t v4 = *(int32_t *)(a3 - 45); // 0x3d381c
    unknown_ffffffffc843202a();
    int64_t v5; // 0x3d3812
    unsigned char v6 = (char)(v5 / 256); // 0x3d382b
    unsigned char v7 = v6 + (char)v5; // 0x3d382b
    unsigned char v8 = v7 + (char)(v4 > v3); // 0x3d382b
    int64_t v9 = unknown_53ba7433(); // 0x3d382d
    *v2 = v3 + v1 + (int32_t)(v4 > v3 ? v8 <= v6 : v7 < v6);
    int32_t * v10 = (int32_t *)(a4 + 0x1001e80f); // 0x3d3837
    *v10 = *v10 + v1;
    int64_t v11; // 0x3d3812
    char v12 = *(char *)&v11; // 0x3d383d
    int64_t v13 = 256 * ((int64_t)v8 - v9) & 0xff00 | v5 & -0xff01; // 0x3d383f
    int64_t v14 = *(int64_t *)0x2d820817; // 0x3d384b
    v11 = v14;
    int32_t * v15 = (int32_t *)(v14 + 0x316ffe72); // 0x3d3853
    int32_t v16 = *v15; // 0x3d3853
    *v15 = v16 + (int32_t)(256 * (int64_t)(v12 + (char)(a3 / 256)) | a3 & 0xffff00ff);
    int64_t result = unknown_10f4ce5f(); // 0x3d3859
    char * v17 = (char *)(4 * v5 + 0xd001e8b0); // 0x3d385e
    char v18 = a4; // 0x3d385e
    char v19 = *v17 | v18; // 0x3d385e
    *v17 = v19;
    if (v19 >= 0) {
        uint32_t v20 = (int32_t)a4 % 32; // 0x3d3877
        if (v20 != 0) {
            int32_t * v21 = (int32_t *)result; // 0x3d3877
            uint32_t v22 = *v21; // 0x3d3877
            *v21 = v22 >> v20 | (int32_t)((int64_t)v22 << (int64_t)(33 - v20));
        }
        int32_t * v23 = (int32_t *)((a4 & 0xffffffff) - 0x7fffc29f); // 0x3d387d
        *v23 = *v23 + (int32_t)v13;
        char * v24 = (char *)result; // 0x3d3883
        *v24 = *v24 + (char)a3;
        return result;
    }
    // 0x3d3865
    __asm_int(-24);
    int32_t * v25 = (int32_t *)v13; // 0x3d3867
    int32_t v26 = *v25 + (int32_t)v5; // 0x3d3867
    unsigned char v27 = llvm_ctpop_i8((char)v26); // 0x3d3867
    *v25 = v26;
    if (v27 % 2 != 0) {
        int64_t result2 = v5 & 0xffff00ff; // 0x3d386c
        int32_t * v28 = (int32_t *)result2; // 0x3d3872
        *v28 = *v28 + 1;
        return result2;
    }
    // 0x3d3889
    bool v29; // 0x3d3812
    int64_t v30 = v29 ? -4 : 4;
    int64_t v31 = v30 + a1; // 0x3d3864
    int64_t v32 = result + v5; // 0x3d3889
    uint32_t v33 = (int32_t)v32 - 0x2ffe1750; // 0x3d388b
    char * v34 = (char *)(v31 + 110); // 0x3d388d
    *v34 = *v34 + v18;
    uint32_t v35 = *v25; // 0x3d3893
    int32_t v36 = v35 > -1 - (int32_t)a4; // 0x3d3895
    uint32_t v37 = *(int32_t *)(v31 - 4) + v36; // 0x3d3895
    uint32_t v38 = v33 - v37; // 0x3d3895
    bool v39 = v35 > -1 - (int32_t)a4 ? v37 != -1 | v33 < v38 - v36 : v33 < v37; // 0x3d3895
    int64_t result3 = (v32 + 163 + (int64_t)v39) % 256 | v32 & 0xffffff00; // 0x3d3898
    *(int32_t *)v31 = *(int32_t *)v11;
    *(int64_t *)((int64_t)v38 - 8) = result3;
    *(int32_t *)(v31 + v30) = *(int32_t *)(v11 + v30);
    return result3;
}

// Address range: 0x3d38a8 - 0x3d38cc
int64_t function_3d38a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3d38a8
    unknown_247676ae();
    uint32_t v1 = *(int32_t *)-0x17ff76164c49f588; // 0x3d38af
    int32_t * v2 = (int32_t *)(a4 - 14); // 0x3d38b8
    uint32_t v3 = *v2; // 0x3d38b8
    uint32_t v4 = v3 + (int32_t)a2; // 0x3d38b8
    *v2 = v4;
    char * v5 = (char *)(a1 + 2); // 0x3d38bd
    int64_t v6; // 0x3d38a8
    *v5 = *v5 + (char)v6 + (char)(v4 < v3);
    char * v7 = (char *)(int64_t)v1; // 0x3d38c4
    *v7 = *v7 - (char)v1;
    return unknown_3c30fccc(((a3 & (int64_t)&g1) == 0 ? 1 : -1) + a1);
}

// Address range: 0x3d38de - 0x3d38e6
int64_t function_3d38de(int64_t a1) {
    // 0x3d38de
    int64_t result; // 0x3d38de
    return result;
}

// Address range: 0x3d3965 - 0x3d396f
int64_t function_3d3965(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    char * v1 = (char *)(a3 + 0x2afdfd91); // 0x3d3965
    bool v2; // 0x3d3965
    *v1 = (char)v2 - (char)(a4 / 256) + *v1;
    int64_t result; // 0x3d3965
    return result;
}

// Address range: 0x3d3975 - 0x3d3976
int64_t function_3d3975(int64_t a1) {
    // 0x3d3975
    int64_t result; // 0x3d3975
    return result;
}

// Address range: 0x3d3992 - 0x3d3996
int64_t function_3d3992(int64_t a1) {
    // 0x3d3992
    *(char *)a1 = 56;
    int64_t result; // 0x3d3992
    return result;
}

// Address range: 0x3d39dd - 0x3d39de
int64_t function_3d39dd(void) {
    // 0x3d39dd
    int64_t result; // 0x3d39dd
    return result;
}

// Address range: 0x3d39fa - 0x3d39fb
int64_t function_3d39fa(void) {
    // 0x3d39fa
    int64_t result; // 0x3d39fa
    return result;
}

// Address range: 0x3d3a19 - 0x3d3a1b
int64_t function_3d3a19(void) {
    // 0x3d3a19
    return function_3d3a54();
}

// Address range: 0x3d3a4d - 0x3d3a4e
int64_t function_3d3a4d(void) {
    // 0x3d3a4d
    int64_t result; // 0x3d3a4d
    return result;
}

// Address range: 0x3d3a54 - 0x3d3a58
int64_t function_3d3a54(void) {
    // 0x3d3a54
    int64_t v1; // 0x3d3a54
    bool v2; // 0x3d3a54
    if (!v2) {
        v1 = function_3d39dd();
    }
    int64_t result = v1; // 0x3d3a56
    if (!v2) {
        result = function_3d39fa();
    }
    // 0x3d3a58
    return result;
}

// Address range: 0x3d3ad4 - 0x3d3ad5
int64_t function_3d3ad4(int64_t a1) {
    // 0x3d3ad4
    int64_t result; // 0x3d3ad4
    return result;
}

// Address range: 0x3d3b09 - 0x3d3b0c
int64_t function_3d3b09(int64_t a1) {
    // 0x3d3b09
    int64_t result; // 0x3d3b09
    return result;
}

// Address range: 0x3d3b1b - 0x3d3b2a
int64_t function_3d3b1b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d3b1b
    float80_t v1; // 0x3d3b1b
    *(int16_t *)a1 = (int16_t)v1;
    return function_7ccb91e2();
}

// Address range: 0x3d3bb3 - 0x3d3bb4
int64_t function_3d3bb3(void) {
    // 0x3d3bb3
    int64_t result; // 0x3d3bb3
    return result;
}

// Address range: 0x3d3bc9 - 0x3d3be1
int64_t function_3d3bc9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d3bc9
    int64_t v1; // 0x3d3bc9
    uint64_t v2 = v1;
    int64_t v3 = a3;
    int32_t v4 = v1; // 0x3d3bc9
    __asm_out_135((int16_t)a3, v4);
    unknown_ffffffffb9bf3dd5();
    bool v5; // 0x3d3bc9
    if (v4 + 0x1a08f6 + (int32_t)v5 < 1) {
        function_3d3bb3();
    }
    char * v6 = (char *)(a1 - 0x77ff3f67); // 0x3d3bd6
    *v6 = *v6 + (char)(v2 / 256);
    *(int32_t *)v3 = *(int32_t *)&v3 - (int32_t)v2;
    return function_3d3bc9(a1, a2, v3);
}

// Address range: 0x3d3beb - 0x3d3bec
int64_t function_3d3beb(void) {
    // 0x3d3beb
    int64_t result; // 0x3d3beb
    return result;
}

// Address range: 0x3d3bf1 - 0x3d3bf6
int64_t function_3d3bf1(void) {
    // 0x3d3bf1
    return function_32c975fe();
}

// Address range: 0x3d3bf6 - 0x3d3c13
int64_t function_3d3bf6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 + 0x232e95c2); // 0x3d3bf6
    bool v2; // 0x3d3bf6
    *v1 = (char)v2 - (char)a4 + *v1;
    unknown_7941a402();
    char * v3 = (char *)(a4 - 1); // 0x3d3c04
    *v3 = *v3 - 54;
    return unknown_ffffffffaf32a613();
}

// Address range: 0x3d3c61 - 0x3d3c67
int64_t function_3d3c61(void) {
    // 0x3d3c61
    int64_t result; // 0x3d3c61
    return result;
}

// Address range: 0x3d3c68 - 0x3d3c6c
int64_t function_3d3c68(int64_t a1) {
    // 0x3d3c68
    int64_t result; // 0x3d3c68
    return result;
}

// Address range: 0x3d3c80 - 0x3d3c88
int64_t function_3d3c80(int64_t a1) {
    // 0x3d3c80
    int64_t v1; // 0x3d3c80
    return v1 + 0xff2f7076 & 0xffffffff;
}

// Address range: 0x3d3cbc - 0x3d3cbd
int64_t function_3d3cbc(void) {
    // 0x3d3cbc
    int64_t result; // 0x3d3cbc
    return result;
}

// Address range: 0x3d3ce1 - 0x3d3ce6
int64_t function_3d3ce1(void) {
    // 0x3d3ce1
    return function_7f3c416c();
}

// Address range: 0x3d3d01 - 0x3d3d22
int64_t function_3d3d01(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3d3d01
    int64_t v1; // 0x3d3d01
    *(char *)a2 = 2 * (char)v1;
    *(char *)-0x67f621f6 = *(char *)-0x67f621f6 + (char)(v1 / 256);
    int32_t * v2 = (int32_t *)(2 * v1); // 0x3d3d0b
    *v2 = *v2 + (int32_t)a4;
    int32_t * v3 = (int32_t *)(v1 - 0x664b4c98); // 0x3d3d0e
    *v3 = *v3 - 67;
    int64_t v4 = __asm_hlt(); // 0x3d3d15
    int32_t * v5 = (int32_t *)(a4 + 56); // 0x3d3d1c
    uint32_t v6 = *v5; // 0x3d3d1c
    uint32_t v7 = v6 + (int32_t)v1; // 0x3d3d1c
    *v5 = v7;
    int64_t result = v4; // 0x3d3d1f
    if (v7 >= v6 && v7 != 0) {
        result = function_3d3cbc();
    }
    // 0x3d3d21
    return result;
}

// Address range: 0x3d3d39 - 0x3d3d3c
int64_t function_3d3d39(void) {
    // 0x3d3d39
    int64_t result; // 0x3d3d39
    return result;
}

// Address range: 0x3d3db5 - 0x3d3db6
int64_t function_3d3db5(void) {
    // 0x3d3db5
    int64_t result; // 0x3d3db5
    return result;
}

// Address range: 0x3d3de7 - 0x3d3dec
int64_t function_3d3de7(void) {
    // 0x3d3de7
    bool v1; // 0x3d3de7
    if (!v1) {
        function_3d3db5();
    }
    // 0x3d3de9
    int64_t v2; // 0x3d3de7
    return function_3d3e3d(v2, v2, v2, v2);
}

// Address range: 0x3d3e27 - 0x3d3e2c
int64_t function_3d3e27(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d3e27
    int64_t result; // 0x3d3e27
    return result;
}

// Address range: 0x3d3e3d - 0x3d3e4e
int64_t function_3d3e3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)-0x2808d2b9; // 0x3d3e40
    int64_t v2; // 0x3d3e3d
    *(char *)-0x2808d2b9 = v1 + (char)((uint64_t)v2 / 256);
    return v2 & -0xff01 | (int64_t)&g3;
}

// Address range: 0x3d3e4f - 0x3d3e51
int64_t function_3d3e4f(int64_t a1) {
    // 0x3d3e4f
    int64_t result; // 0x3d3e4f
    return result;
}

// Address range: 0x3d3e51 - 0x3d3e54
int64_t function_3d3e51(void) {
    // 0x3d3e51
    int64_t result; // 0x3d3e51
    return result;
}

// Address range: 0x3d3e69 - 0x3d3e6a
int64_t function_3d3e69(int64_t a1) {
    // 0x3d3e69
    int64_t result; // 0x3d3e69
    return result;
}

// Address range: 0x3d3e82 - 0x3d3e86
int64_t function_3d3e82(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d3e82
    int64_t result; // 0x3d3e82
    return result;
}

// Address range: 0x3d3eb0 - 0x3d3eb1
int64_t function_3d3eb0(void) {
    // 0x3d3eb0
    int64_t result; // 0x3d3eb0
    return result;
}

// Address range: 0x3d3eb2 - 0x3d3eb3
int64_t function_3d3eb2(int64_t a1) {
    // 0x3d3eb2
    int64_t result; // 0x3d3eb2
    return result;
}

// Address range: 0x3d3ec1 - 0x3d3ec2
int64_t function_3d3ec1(void) {
    // 0x3d3ec1
    int64_t result; // 0x3d3ec1
    return result;
}

// Address range: 0x3d3ec4 - 0x3d3fb1
int64_t function_3d3ec4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    char * v3 = (char *)(a4 + 0x5c0111a); // 0x3d3ec4
    unsigned char v4 = (char)a4; // 0x3d3ec4
    *v3 = *v3 & v4;
    __asm_int3();
    int64_t v5 = unknown_ffffffff82cc3ad3(); // 0x3d3ecd
    int64_t v6 = v5; // 0x3d3ed7
    if (*(char *)&v1 == (char)v5) {
        v6 = function_3d3ec1();
    }
    uint64_t v7 = 257 * a4;
    int64_t v8 = v7 & 0xff00 | a4 & -0xff01; // 0x3d3ecb
    int64_t v9; // 0x3d3ec4
    *(int32_t *)v9 = *(int32_t *)&v9 + (int32_t)v8;
    int64_t v10 = v9; // 0x3d3edd
    v9 = v6 & 0xffffffff;
    unsigned char v11 = *(char *)&v2; // 0x3d3ede
    bool v12; // 0x3d3ec4
    int64_t v13 = v12 ? -1 : 1; // 0x3d3ede
    int64_t v14 = v2 + v13; // 0x3d3ede
    v2 = v14;
    if (v11 <= (char)v10) {
        int32_t * v15 = (int32_t *)(v14 + 0x5f345eba); // 0x3d3ef8
        *v15 = *v15 + (int32_t)v1;
        return function_3d3eb0();
    }
    char * v16 = (char *)(v14 + 73); // 0x3d3f5a
    *v16 = *v16 + (char)a3;
    int64_t v17; // 0x3d3ec4
    char * v18 = (char *)(v17 + 0x4877e804); // 0x3d3f61
    *v18 = *v18 + v4;
    int64_t v19 = v2 + v13; // 0x3d3f67
    v2 = v19;
    int64_t v20 = unknown_ffffffffabf0576e(v19, v1 + v13, (int32_t)v10 >> 31); // 0x3d3f68
    char * v21 = (char *)(v8 - 8 + 4 * v17); // 0x3d3f6d
    char v22 = v7 / 256; // 0x3d3f6d
    *v21 = *v21 + v22;
    uint32_t v23 = (int32_t)a4 % 32; // 0x3d3f71
    int64_t v24 = v23 == 0 ? v20 : (int64_t)((int32_t)v20 >> v23);
    char * v25 = (char *)(v24 + 90); // 0x3d3f73
    *v25 = *v25 | v22;
    int64_t v26 = unknown_36ce567d(); // 0x3d3f77
    uint32_t v27 = *(int32_t *)(4 * v8 + 0x3bb33e3a + v17); // 0x3d3f7c
    int64_t v28 = unknown_ffffffffeda0e995(); // 0x3d3f8c
    char * v29 = (char *)v28; // 0x3d3f91
    *v29 = *v29 - (char)v28;
    char * v30 = (char *)(unknown_1e7ae799() - 0x494ba779); // 0x3d3f98
    *v30 = *v30 | v22;
    int64_t v31 = v9; // 0x3d3f9e
    char v32 = *(char *)(((v26 | v17) & 0xffffffff) + 57); // 0x3d3f9e
    v9 = v31 & -256 | (int64_t)(v32 ^ (char)v31);
    unsigned char v33 = *(char *)((int64_t)v27 + 40); // 0x3d3fa1
    int64_t v34 = unknown_7c8b34aa(); // 0x3d3fa4
    unsigned char v35 = v4 % 32; // 0x3d3fa9
    int64_t result = v34; // 0x3d3fa9
    if (v35 != 0) {
        uint64_t v36 = v34 / 256; // 0x3d3fa9
        result = 256 * (int64_t)((char)v36 << v35 | (char)(v33 > 213) << v35 - 1 | (char)((int16_t)v36 % 256 >> (int16_t)(9 - v35))) | v34 & -0xff01;
    }
    return result;
}

// Address range: 0x3d3fb3 - 0x3d3fbf
int64_t function_3d3fb3(int64_t a1) {
    // 0x3d3fb3
    unknown_ffffffffa7435fb9();
    return __asm_in(-32);
}

// Address range: 0x3d4029 - 0x3d403b
int64_t function_3d4029(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffffa335a12f(); // 0x3d4029
    bool v1; // 0x3d4029
    if (v1) {
        return result;
    }
    uint32_t v2 = (int32_t)a4 % 32; // 0x3d4030
    if (v2 != 0) {
        int32_t * v3 = (int32_t *)(result + 5); // 0x3d4030
        uint32_t v4 = *v3; // 0x3d4030
        *v3 = v4 >> 32 - v2 | v4 << v2;
    }
    return result;
}

// Address range: 0x3d4077 - 0x3d409a
int64_t function_3d4077(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = *(int32_t *)(a2 - 112 + 2 * a4); // 0x3d4079
    int64_t result = unknown_754c83(); // 0x3d407d
    int64_t v2; // 0x3d4077
    int32_t v3 = *(int32_t *)(a1 + 0x68147101 + v2); // 0x3d4082
    *(int64_t *)((int64_t)(v3 + (int32_t)v2 + (int32_t)(v1 > (int32_t)a4)) - 8) = -0x3b237300;
    return result;
}

// Address range: 0x3d409b - 0x3d409d
int64_t function_3d409b(int64_t a1, int64_t a2) {
    // 0x3d409b
    int64_t result; // 0x3d409b
    *(int32_t *)a2 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x3d40b1 - 0x3d40c0
int64_t function_3d40b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d40b1
    int64_t v1; // 0x3d40b1
    int64_t v2 = v1;
    int64_t v3 = a2;
    int32_t * v4 = (int32_t *)(a4 + 0x69c8cca3); // 0x3d40b6
    uint32_t v5 = *v4; // 0x3d40b6
    uint32_t v6 = v5 + (int32_t)a3; // 0x3d40b6
    *v4 = v6;
    unsigned char v7 = (char)a4 % 32; // 0x3d40be
    if (v7 != 0) {
        unsigned char v8 = *(char *)&v3; // 0x3d40be
        *(char *)v3 = v8 >> 8 - v7 | v8 << v7;
    }
    return (v2 + 251 + (int64_t)(v6 < v5)) % 256 | v2 & -256;
}

// Address range: 0x3d40f4 - 0x3d4155
int64_t function_3d40f4(void) {
    int32_t v1 = __asm_in(-24); // 0x3d40ff
    int64_t v2 = 0x50690000; // bp-16, 0x3d4125
    int64_t v3 = (int64_t)&v2;
    int64_t v4; // 0x3d40f4
    uint32_t v5 = (v1 & -256 | (int32_t)v4) >> 31; // 0x3d4138
    int32_t v6 = __asm_in_136((int16_t)v5); // 0x3d4139
    int64_t result = v6; // 0x3d4139
    int64_t v7 = v3 - 16; // 0x3d413b
    *(int64_t *)v7 = v3 - 8;
    char * v8 = (char *)result; // 0x3d4147
    char v9 = v6; // 0x3d4147
    *v8 = *v8 + v9;
    *(char *)(int64_t)v5 = v9;
    *v8 = *v8 + v9;
    int64_t v10; // 0x3d40f4
    int64_t v11 = v10 - 1; // 0x3d4152
    while (v11 != 0 && v6 != -0x247dffff) {
        // 0x3d412a
        v3 = v7;
        v5 = v6 >> 31;
        v6 = __asm_in_136((int16_t)v5);
        result = v6;
        v7 = v3 - 16;
        *(int64_t *)v7 = v3 - 8;
        v8 = (char *)result;
        v9 = v6;
        *v8 = *v8 + v9;
        *(char *)(int64_t)v5 = v9;
        *v8 = *v8 + v9;
        v11--;
    }
    // 0x3d4154
    return result;
}

// Address range: 0x3d418e - 0x3d4191
int64_t function_3d418e(int64_t a1, int64_t a2) {
    // 0x3d418e
    int64_t result; // 0x3d418e
    return result;
}

// Address range: 0x3d41ac - 0x3d41b0
int64_t function_3d41ac(int64_t a1) {
    // 0x3d41ac
    int64_t result; // 0x3d41ac
    return result;
}

// Address range: 0x3d41b1 - 0x3d41b3
int64_t function_3d41b1(void) {
    // 0x3d41b1
    int64_t result; // 0x3d41b1
    return result;
}

// Address range: 0x3d4201 - 0x3d4204
int64_t function_3d4201(void) {
    // 0x3d4201
    int64_t result; // 0x3d4201
    return result;
}

// Address range: 0x3d4217 - 0x3d4300
int64_t function_3d4217(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d4217
    int64_t v1; // 0x3d4217
    uint64_t v2 = v1;
    uint32_t v3 = *(int32_t *)(a1 - 0x4c378dc7) | (int32_t)a4; // 0x3d4217
    uint64_t v4 = v1 + 256 * a3;
    __asm_out_137(-50, (int32_t)v2);
    int64_t v5 = (int64_t)v3 - 1; // 0x3d4278
    if (v5 != 0 == (v3 & (int32_t)v1) == 0) {
        // 0x3d42d8
        *(char *)0xeac69e8 = *(char *)0xeac69e8 + (char)(v4 / 256);
        *(char *)(a2 + 13) = (char)a3;
        return v2 & -256 | (int64_t)*(char *)0x5811e8500090a0d3;
    }
    int64_t v6 = v4 & 0xff00 | v1 & -0xff01; // 0x3d421d
    int64_t v7 = v2 % 256 | a3 & -256; // 0x3d427a
    int32_t * v8 = (int32_t *)(v6 + 14); // 0x3d4280
    *v8 = *v8 + (int32_t)v5;
    *(char *)-0x481674 = *(char *)-0x481674 + (char)(v4 / 256);
    bool v9; // 0x3d4217
    int64_t v10 = v9 ? -4 : 4; // 0x3d428d
    *(int32_t *)((v7 + a1 & 0xffffffff) + v10) = __asm_insd((int16_t)v7);
    if ((char)(v10 + a2) + (char)v1 < 1) {
        // 0x3d4245
        return (v2 + 8) % 256 | v2 & -256;
    }
    // 0x3d4294
    int64_t result; // 0x3d4217
    if ((*(int32_t *)(v6 + 0x78d1c393) & 0x76013d00) != 0) {
        // 0x3d42f0
        result = unknown_fffffffff31bf057();
    }
    // 0x3d42a5
    return result;
}

// Address range: 0x3d4302 - 0x3d4303
int64_t function_3d4302(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d4302
    return __asm_in_136((int16_t)a3);
}

// Address range: 0x3d4305 - 0x3d4331
int64_t function_3d4305(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d4305
    int64_t v1; // 0x3d4305
    int32_t * v2 = (int32_t *)(v1 + 0x8929942); // 0x3d430d
    *v2 = *v2 + 0x3d00a874;
    int32_t * v3 = (int32_t *)(a1 + 0xbeb686); // 0x3d4317
    *v3 = *v3 + (int32_t)a3;
    int64_t v4; // 0x3d4305
    int64_t v5 = v4;
    *(int32_t *)v5 = *(int32_t *)&v4 + (int32_t)v5;
    return function_17b0441();
}

// Address range: 0x3d4415 - 0x3d4422
int64_t function_3d4415(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d4415
    int64_t result; // 0x3d4415
    *(int32_t *)a2 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x3d442f - 0x3d443c
int64_t function_3d442f(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 + 0x15364356; // 0x3d4431
    __asm_out(-68, (char)v1);
    return v1 & 0xffffffff;
}

// Address range: 0x3d4473 - 0x3d447d
int64_t function_3d4473(void) {
    // 0x3d4473
    int64_t v1; // 0x3d4473
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x3d44b0 - 0x3d44b7
int64_t function_3d44b0(void) {
    // 0x3d44b0
    int64_t v1; // 0x3d44b0
    __asm_out_137(-16, (int32_t)v1);
    return function_22609a7();
}

// Address range: 0x3d44b7 - 0x3d44cb
int64_t function_3d44b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3d44b7
    *(int32_t *)(a3 + 0x13d00f3) = (int32_t)a3;
    int64_t v1; // 0x3d44b7
    bool v2; // 0x3d44b7
    return v1 - (v2 ? 0x4b2a904a : 0x4b2a9049) & 0xffffffff;
}
