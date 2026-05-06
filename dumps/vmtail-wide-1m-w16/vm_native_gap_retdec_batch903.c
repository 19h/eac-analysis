/*
 * Targeted RetDec C for native executable gap queue batch 903.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x209b9e-0x209d9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x209d9e-0x209f9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x209f9e-0x20a19e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20a19e-0x20a39e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20a39e-0x20a59e rank=- name=- kind=- bytes=- uncovered=-
 *   0x444667-0x444867 rank=- name=- kind=- bytes=- uncovered=-
 *   0x444c67-0x444e67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x444e67-0x445067 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_208a54c();
int64_t function_20935b2();
int64_t function_209b9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_209bd1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_209c0b(void);
int64_t function_209c10(int64_t a1, int64_t a2, int64_t a3);
int64_t function_209c1d(int64_t a1, int64_t a2);
int64_t function_209c36(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_209c4b(int64_t a1);
int64_t function_209c70(void);
int64_t function_209cd4(int64_t a1);
int64_t function_209cdb(int64_t a1);
int64_t function_209d44(void);
int64_t function_209d8c(void);
int64_t function_209db6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_209e04(int64_t a1);
int64_t function_209e14(void);
int64_t function_209e1b(void);
int64_t function_209e34(void);
int64_t function_209e7a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_209e90(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_209ebe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_209efc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_209fa3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20a051(void);
int64_t function_20a068(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20a0b1(int64_t a1);
int64_t function_20a0b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20a112(int64_t a1);
int64_t function_20a148(int64_t a1, int64_t a2, int64_t a3);
int64_t function_20a199(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_20a1c4(int64_t a1);
int64_t function_20a1cd(void);
int64_t function_20a1de(void);
int64_t function_20a20b(void);
int64_t function_20a232(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20a2cd(int64_t a1);
int64_t function_20a308(void);
int64_t function_20a315(uint64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20a358(void);
int64_t function_20a366(void);
int64_t function_20a375(void);
int64_t function_20a389(void);
int64_t function_20a39b(void);
int64_t function_20a3a1(void);
int64_t function_20a3b2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_20a3be(void);
int64_t function_20a3ce(int64_t a1);
int64_t function_20a40c(void);
int64_t function_20a447(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20a4ec(void);
int64_t function_20a536(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20a53f(void);
int64_t function_20a571(int64_t a1, int64_t a2);
int64_t function_20a596(void);
int64_t function_21635152();
int64_t function_2b4c68f9();
int64_t function_444667(int64_t a1);
int64_t function_44469f(void);
int64_t function_4446bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_444754(void);
int64_t function_444756(int64_t a1);
int64_t function_4447a0(void);
int64_t function_4447aa(void);
int64_t function_4447c8(void);
int64_t function_4447d1(void);
int64_t function_4447d6(int64_t a1);
int64_t function_444801(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_444859(void);
int64_t function_444c67(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_444c6d(int64_t a1, int64_t a2);
int64_t function_444cd6(void);
int64_t function_444ceb(int64_t a1);
int64_t function_444cef(int64_t a1);
int64_t function_444cf5(void);
int64_t function_444cfa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_444d0d(void);
int64_t function_444d23(void);
int64_t function_444d30(int64_t a1);
int64_t function_444d3c(void);
int64_t function_444d5c(void);
int64_t function_444d79(void);
int64_t function_444d7b(void);
int64_t function_444da6(void);
int64_t function_444dc5(void);
int64_t function_444dd1(void);
int64_t function_444dd2(int64_t a1);
int64_t function_444dd4(int64_t a1);
int64_t function_444ddc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_444f2b(void);
int64_t function_444f49(void);
int64_t function_444f5a(void);
int64_t function_444f6e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_444f7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_444fab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ffffffffc2228b7b();
int64_t function_ffffffffe27f874c();
int64_t function_fffffffff826f50a();
int64_t unknown_105e41c0();
int64_t unknown_1a71cd6d();
int64_t unknown_208a318();
int64_t unknown_20d3a225();
int64_t unknown_20d619d2();
int64_t unknown_55c3359b();
int64_t unknown_5f0acee3();
int64_t unknown_6722a23a();
int64_t unknown_c210c89();
int64_t unknown_f965380();
int64_t unknown_ffffffff89ceacb1();
int64_t unknown_ffffffff9122cd1b();
int64_t unknown_ffffffff932b27ac();
int64_t unknown_ffffffffaa2b7a50();
int64_t unknown_ffffffffab606ed7();
int64_t unknown_ffffffffb4767b04();
int64_t unknown_ffffffffb4addc45();
int64_t unknown_ffffffffbf2a65cb();
int64_t unknown_ffffffffc0165511();
int64_t unknown_ffffffffc798f68b();
int64_t unknown_ffffffffcbf2db8f();
int64_t unknown_ffffffffcca8ae85();
int64_t unknown_ffffffffd20fcc58();
int64_t unknown_ffffffffd42c0882();
int64_t unknown_ffffffffe4bf7ee6();
int64_t unknown_ffffffffe653b8da();
int64_t unknown_ffffffffe90a2357();
int64_t unknown_ffffffffe91a2d18();
int64_t unknown_fffffffffbc6d40f();

// Address range: 0x209b9e - 0x209baa
int64_t function_209b9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t result = __asm_in(-89); // 0x209b9e
    int32_t * v1 = (int32_t *)(a3 + 24); // 0x209ba6
    *v1 = *v1 + (int32_t)a4;
    return result;
}

// Address range: 0x209bd1 - 0x209be7
int64_t function_209bd1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x209bd1
    int64_t v1; // 0x209bd1
    uint64_t v2 = v1;
    unknown_ffffffffab606ed7();
    char * v3 = (char *)(v2 + 0x66f9ad45); // 0x209bd6
    *v3 = *v3 + (char)(v2 / 256);
    unknown_ffffffffe4bf7ee6();
    bool v4; // 0x209bd1
    return function_209c10(a1, (v4 ? -1 : 1) + a2, a3);
}

// Address range: 0x209c0b - 0x209c10
int64_t function_209c0b(void) {
    // 0x209c0b
    return unknown_ffffffffc0165511();
}

// Address range: 0x209c10 - 0x209c14
int64_t function_209c10(int64_t a1, int64_t a2, int64_t a3) {
    // 0x209c10
    int64_t result; // 0x209c10
    *(char *)a3 = (char)result + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x209c1d - 0x209c21
int64_t function_209c1d(int64_t a1, int64_t a2) {
    // 0x209c1d
    int64_t v1; // 0x209c1d
    return __asm_int1((int32_t)v1 + (int32_t)a1);
}

// Address range: 0x209c36 - 0x209c3d
int64_t function_209c36(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 10); // 0x209c39
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x209c36
    return result;
}

// Address range: 0x209c4b - 0x209c50
int64_t function_209c4b(int64_t a1) {
    // 0x209c4b
    int64_t result; // 0x209c4b
    return result;
}

// Address range: 0x209c70 - 0x209c72
int64_t function_209c70(void) {
    // 0x209c70
    int64_t v1; // 0x209c70
    return function_209cdb(v1);
}

// Address range: 0x209cd4 - 0x209cdb
int64_t function_209cd4(int64_t a1) {
    // 0x209cd4
    int64_t result; // 0x209cd4
    return result;
}

// Address range: 0x209cdb - 0x209cdc
int64_t function_209cdb(int64_t a1) {
    // 0x209cdb
    int64_t result; // 0x209cdb
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x209d44 - 0x209d52
int64_t function_209d44(void) {
    // 0x209d44
    *(char *)0x7822859e = *(char *)0x7822859e ^ -128;
    int64_t v1; // 0x209d44
    return function_209db6(v1, v1, v1, v1);
}

// Address range: 0x209d8c - 0x209d8f
int64_t function_209d8c(void) {
    // 0x209d8c
    int64_t result; // 0x209d8c
    return result;
}

// Address range: 0x209db6 - 0x209ddb
int64_t function_209db6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x209db6
    int64_t v1; // 0x209db6
    int32_t * v2 = (int32_t *)(v1 + 0x1e87c60); // 0x209db6
    *v2 = *v2 + (int32_t)v1;
    __asm_out((int16_t)a3, (char)v1);
    int32_t * v3 = (int32_t *)(2 * v1 + 0x7b7a00aa + v1); // 0x209dc9
    *v3 = *v3 + (int32_t)a2;
    int32_t * v4 = (int32_t *)(v1 + 0xf4cd8ac); // 0x209dd4
    *v4 = *v4 + (int32_t)v1;
    return (a4 + 170) % 256 | a4 & 0xffffff00;
}

// Address range: 0x209e04 - 0x209e05
int64_t function_209e04(int64_t a1) {
    // 0x209e04
    int64_t result; // 0x209e04
    return result;
}

// Address range: 0x209e14 - 0x209e15
int64_t function_209e14(void) {
    // 0x209e14
    int64_t result; // 0x209e14
    return result;
}

// Address range: 0x209e1b - 0x209e1d
int64_t function_209e1b(void) {
    // 0x209e1b
    int64_t v1; // 0x209e1b
    return function_209e90(v1, v1, v1, v1);
}

// Address range: 0x209e34 - 0x209e3a
int64_t function_209e34(void) {
    // 0x209e34
    int64_t result; // 0x209e34
    return result;
}

// Address range: 0x209e7a - 0x209e84
int64_t function_209e7a(int64_t a1, int64_t a2, int64_t a3) {
    function_209e14();
    // 0x209e7c
    return unknown_ffffffffd42c0882();
}

// Address range: 0x209e90 - 0x209e94
int64_t function_209e90(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x209e90
    int64_t result; // 0x209e90
    return result;
}

// Address range: 0x209ebe - 0x209ecc
int64_t function_209ebe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x209ebe
    int64_t result; // 0x209ebe
    bool v1; // 0x209ebe
    if (v1) {
        // 0x209ec1
        result = __asm_in(57);
    }
    // 0x209ec9
    *(int32_t *)a4 = (int32_t)a4 | 58;
    return result;
}

// Address range: 0x209efc - 0x209f94
int64_t function_209efc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x209efc
    int64_t v1; // 0x209efc
    int32_t * v2 = (int32_t *)(a1 + 0x680603 + 2 * v1); // 0x209efe
    *v2 = *v2 + (int32_t)v1;
    __asm_int3();
    char * v3 = (char *)(a4 + 0x1e80bc3); // 0x209f0b
    *v3 = *v3 - (char)(a4 / 256);
    uint32_t v4 = *(int32_t *)0x7e300122362d08e3; // 0x209f17
    int64_t v5 = v4; // 0x209f17
    *(int32_t *)a1 = v4;
    bool v6; // 0x209efc
    int64_t v7 = (v6 ? -4 : 4) + a1; // 0x209f20
    int64_t v8; // 0x209efc
    __asm_outsd((int16_t)a3, *(int32_t *)&v8);
    char * v9 = (char *)(v5 + 0x43d4bece); // 0x209f24
    *v9 = *v9 - 40;
    v8 = a5;
    int32_t * v10 = (int32_t *)(v5 + 5); // 0x209f32
    int64_t v11; // 0x209efc
    *v10 = *v10 + (int32_t)(int64_t)&v11;
    __asm_sti();
    int64_t v12 = v7 + 0x9a33a45; // 0x209f39
    int64_t v13 = v12 & 0xffffffff; // 0x209f39
    int64_t v14 = unknown_5f0acee3(); // 0x209f3f
    int32_t * v15 = (int32_t *)(v13 + 112); // 0x209f4f
    *v15 = *v15 | (int32_t)v1;
    int64_t v16 = v8;
    *(int64_t *)(v16 - 64) = v16;
    char * v17 = (char *)((v7 & 0xffffffff) - 80); // 0x209f59
    *v17 = *v17 + (char)v7;
    __asm_in_133((int16_t)v12);
    unknown_1a71cd6d();
    int32_t * v18 = (int32_t *)(__asm_wait() - 24); // 0x209f70
    *v18 = *v18 & (int32_t)v8;
    int32_t * v19 = (int32_t *)(v13 + 0x1e8013d + 2 * v8); // 0x209f73
    *v19 = *v19 + ((int32_t)v14 | 255);
    unknown_c210c89();
    __asm_out_134(-34, (char)unknown_ffffffffc798f68b());
    return __asm_int3();
}

// Address range: 0x209fa3 - 0x20a028
int64_t function_209fa3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x209fa3
    bool v1; // 0x209fa3
    int64_t v2 = v1 ? 255 : 0; // 0x209fa3
    unknown_ffffffff932b27ac();
    char * v3 = (char *)(a2 + 0x1e8c22f); // 0x209fab
    *v3 = *v3 + (char)v2;
    int64_t v4; // 0x209fa3
    int32_t * v5 = (int32_t *)(a2 - 81 + v4); // 0x209fb6
    *v5 = *v5 + (int32_t)v4;
    int64_t v6 = unknown_105e41c0(); // 0x209fba
    char * v7 = (char *)v6; // 0x209fbf
    char v8 = v6; // 0x209fbf
    *v7 = *v7 | v8;
    int16_t v9 = v2 | a3 & 0xff00; // 0x209fc1
    __asm_outsd(v9, *(int32_t *)(int32_t *)&g5);
    if (a4 != 0) {
        int64_t result = unknown_ffffffffbf2a65cb(); // 0x209fc5
        int32_t v10 = result; // 0x209fcd
        __asm_out_135(v9, v10);
        __asm_out_135(v9, v10);
        return result;
    }
    int32_t * v11 = (int32_t *)(a1 - 0x5d20c5d3); // 0x209ff4
    int64_t v12; // 0x209fa3
    int32_t v13 = *v11 + (int32_t)(int64_t)&v12; // 0x209ff4
    *v11 = v13;
    *(char *)a1 = v8 ^ -38;
    int64_t result2 = unknown_ffffffffb4767b04(((a5 & (int64_t)&g1) == 0 ? 1 : -1) + a1); // 0x209ffe
    if (v13 == 0) {
        // 0x20a027
        __asm_out(v9, (char)result2);
        return result2;
    }
    // 0x20a005
    *(int32_t *)result2 = (int32_t)result2;
    __asm_in(80);
    __asm_out(v9, (char)unknown_fffffffffbc6d40f());
    unknown_ffffffffe91a2d18();
    __asm_in_136(-118);
    return unknown_20d3a225();
}

// Address range: 0x20a051 - 0x20a054
int64_t function_20a051(void) {
    // 0x20a051
    int64_t v1; // 0x20a051
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result;
    return result;
}

// Address range: 0x20a068 - 0x20a092
int64_t function_20a068(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20a068
    int64_t v1; // 0x20a068
    uint64_t v2 = v1;
    unsigned char v3 = *(char *)(v1 - 0x570fe18); // 0x20a069
    int64_t v4 = unknown_f965380(0x7eec6c16); // 0x20a07a
    int32_t * v5 = (int32_t *)v4; // 0x20a07f
    *v5 = ((int32_t)v1 >> 31 & -256 | (int32_t)v3) + *v5;
    char * v6 = (char *)(v2 + 0x5ee465fa + 4 * v4); // 0x20a081
    *v6 = *v6 | (char)(v2 / 256);
    __asm_int3();
    int64_t result = unknown_ffffffffcbf2db8f(); // 0x20a089
    char * v7 = (char *)(result - 29); // 0x20a08e
    *v7 = *v7 + (char)a4;
    return result;
}

// Address range: 0x20a0b1 - 0x20a0b3
int64_t function_20a0b1(int64_t a1) {
    // 0x20a0b1
    int64_t result; // 0x20a0b1
    return result;
}

// Address range: 0x20a0b7 - 0x20a0c0
int64_t function_20a0b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 80); // 0x20a0b7
    *v1 = *v1 + (int32_t)a3;
    int64_t v2; // 0x20a0b7
    return v2 + 0x7c0a68f8 & 0xffffffff;
}

// Address range: 0x20a112 - 0x20a11f
int64_t function_20a112(int64_t a1) {
    // 0x20a112
    int64_t v1; // 0x20a112
    unknown_ffffffffd20fcc58(v1 & 0xffffffff);
    return function_20935b2();
}

// Address range: 0x20a148 - 0x20a160
int64_t function_20a148(int64_t a1, int64_t a2, int64_t a3) {
    // 0x20a148
    *(char *)(a3 + 0x681607) = 8;
    int64_t v1; // 0x20a148
    int64_t result = v1 & 0xffffffff; // 0x20a14f
    int64_t v2; // 0x20a148
    char * v3 = (char *)((v2 & 0xffffffff) + 75); // 0x20a150
    *v3 = 2 * *v3;
    int64_t v4; // 0x20a148
    char v5 = *(char *)&v4; // 0x20a153
    *(int32_t *)result = *(int32_t *)&v1 ^ (int32_t)v2;
    char v6 = *(char *)-0x61b1e6a2; // 0x20a157
    *(char *)-0x61b1e6a2 = v6 + (v5 | (char)((uint64_t)v2 / 256));
    return result;
}

// Address range: 0x20a199 - 0x20a1a5
int64_t function_20a199(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x20a199
    int64_t v1; // 0x20a199
    *(char *)a2 = (char)v1 + (char)(a3 / 256);
    int64_t v2; // 0x20a199
    int64_t v3 = v2;
    *(int32_t *)v3 = *(int32_t *)&v2 + (int32_t)v3;
    return v2 & -256 | 136;
}

// Address range: 0x20a1c4 - 0x20a1c7
int64_t function_20a1c4(int64_t a1) {
    // 0x20a1c4
    int64_t result; // 0x20a1c4
    return result;
}

// Address range: 0x20a1cd - 0x20a1ce
int64_t function_20a1cd(void) {
    // 0x20a1cd
    int64_t result; // 0x20a1cd
    return result;
}

// Address range: 0x20a1de - 0x20a1df
int64_t function_20a1de(void) {
    // 0x20a1de
    int64_t result; // 0x20a1de
    return result;
}

// Address range: 0x20a20b - 0x20a213
int64_t function_20a20b(void) {
    // 0x20a20b
    return function_20a1cd();
}

// Address range: 0x20a232 - 0x20a283
int64_t function_20a232(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20a232
    unknown_6722a23a();
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x20a232
    int32_t * v2 = (int32_t *)(v1 + a1); // 0x20a23c
    uint32_t v3 = *v2; // 0x20a23c
    uint32_t v4 = (int32_t)a1; // 0x20a23c
    *v2 = v3 - v4;
    unknown_ffffffffb4addc45();
    char v5 = *(char *)0x6e760b9c; // 0x20a244
    *(char *)0x6e760b9c = (char)(v3 < v4) + (char)(v1 / 256) + v5;
    uint64_t v6 = unknown_ffffffffaa2b7a50(); // 0x20a24a
    uint64_t v7 = v6 & a3;
    int64_t v8 = v7 % 256 | v6 & -256; // 0x20a259
    *(char *)(v1 + 0x3601e8ae) = (char)(v6 / 256);
    char * v9 = (char *)v8; // 0x20a264
    *v9 = (*v9 & (char)v7) - 102;
    bool v10; // 0x20a232
    int64_t v11 = v10 ? -4 : 4; // 0x20a269
    int64_t v12 = v11 + a1; // 0x20a269
    *(int32_t *)v12 = *(int32_t *)v8 + (int32_t)v8;
    int32_t * v13 = (int32_t *)((a4 & -256 | 17) + 1); // 0x20a26f
    *v13 = *v13 + (int32_t)a3;
    unknown_208a318(v12 + v11);
    return v1 & 0xffffffff;
}

// Address range: 0x20a2cd - 0x20a2cf
int64_t function_20a2cd(int64_t a1) {
    // 0x20a2cd
    int64_t result; // 0x20a2cd
    return result;
}

// Address range: 0x20a308 - 0x20a30a
int64_t function_20a308(void) {
    // 0x20a308
    int64_t result; // 0x20a308
    return result;
}

// Address range: 0x20a315 - 0x20a34c
int64_t function_20a315(uint64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffff9122cd1b(); // 0x20a315
    char * v2 = (char *)(v1 + 113); // 0x20a31a
    int64_t v3; // 0x20a315
    *v2 = *v2 + (char)(v3 / 256);
    char * v4 = (char *)(v3 + 0x3301e89a); // 0x20a330
    *v4 = *v4 + (char)(a1 / 256);
    uint32_t v5 = *(int32_t *)0x2855cc3a21ab00c3 & (int32_t)v3; // 0x20a33f
    int64_t v6 = v5; // 0x20a33f
    int32_t * v7 = (int32_t *)((8 * v1 & 0x7fffffff8) + 115 + v6); // 0x20a341
    *v7 = *v7 + v5;
    return (v1 | v6) % 256 | v6 & 0xffffff00;
}

// Address range: 0x20a358 - 0x20a364
int64_t function_20a358(void) {
    // 0x20a358
    return function_208a54c(0xc800b3ff);
}

// Address range: 0x20a366 - 0x20a36b
int64_t function_20a366(void) {
    // 0x20a366
    return function_ffffffffc2228b7b();
}

// Address range: 0x20a375 - 0x20a378
int64_t function_20a375(void) {
    // 0x20a375
    int64_t result; // 0x20a375
    return result;
}

// Address range: 0x20a389 - 0x20a38a
int64_t function_20a389(void) {
    // 0x20a389
    int64_t result; // 0x20a389
    return result;
}

// Address range: 0x20a39b - 0x20a39e
int64_t function_20a39b(void) {
    // 0x20a39b
    int64_t result; // 0x20a39b
    return result;
}

// Address range: 0x20a3a1 - 0x20a3a4
int64_t function_20a3a1(void) {
    // 0x20a3a1
    int64_t result; // 0x20a3a1
    return result;
}

// Address range: 0x20a3b2 - 0x20a3b9
int64_t function_20a3b2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x20a3b2
    return function_ffffffffe27f874c();
}

// Address range: 0x20a3be - 0x20a3c1
int64_t function_20a3be(void) {
    // 0x20a3be
    return function_20a389();
}

// Address range: 0x20a3ce - 0x20a3cf
int64_t function_20a3ce(int64_t a1) {
    // 0x20a3ce
    int64_t result; // 0x20a3ce
    return result;
}

// Address range: 0x20a40c - 0x20a40d
int64_t function_20a40c(void) {
    // 0x20a40c
    int64_t result; // 0x20a40c
    return result;
}

// Address range: 0x20a447 - 0x20a4e3
int64_t function_20a447(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = a3;
    int64_t v3; // 0x20a447
    int64_t v4 = v3 & -0xff01 | (int64_t)&g4; // 0x20a447
    bool v5; // 0x20a447
    int64_t v6 = v5 ? -1 : 1; // 0x20a450
    int64_t v7 = v6 + a1; // 0x20a450
    int64_t v8 = v6 + a2; // 0x20a450
    int32_t v9 = v3;
    int64_t v10 = unknown_ffffffffe90a2357(v7, v8) + 0xe4604b & 0xffffffff; // 0x20a456
    int64_t v11 = v8;
    uint32_t v12 = (int32_t)v10; // 0x20a45d
    uint32_t v13 = v12 + v9; // 0x20a45d
    int64_t v14 = v13; // 0x20a45f
    if (v13 < v12) {
        v14 = function_20a40c();
    }
    int64_t v15; // 0x20a447
    while (v13 < 0) {
        int64_t v16 = (v14 & 0xffffff00 | (int64_t)__asm_in_136(8)) + 0xe86ecef2 & 0xffffffff; // 0x20a465
        int32_t * v17 = (int32_t *)(v16 + 0x42d91f03); // 0x20a46a
        int32_t v18 = *v17; // 0x20a46a
        int32_t v19 = v2; // 0x20a46a
        int32_t v20 = v18 + v19; // 0x20a46a
        *v17 = v20;
        v10 = v11 & 0xffffffff;
        if (v20 < 0 != ((v20 ^ v18) & (v20 ^ v19)) < 0) {
            // 0x20a473
            v15 = v10;
            goto lab_0x20a473_2;
        }
        v11 = v16;
        v12 = (int32_t)v10;
        v13 = v12 + v9;
        v14 = v13;
        if (v13 < v12) {
            v14 = function_20a40c();
        }
    }
    int64_t v21 = unknown_20d619d2(); // 0x20a4cc
    char * v22 = (char *)(v21 + 0x4cd7d000); // 0x20a4d1
    *v22 = *v22 + (char)v21;
    char * v23 = (char *)(v4 + 0x5b01e800); // 0x20a4d7
    *v23 = *v23 + (char)(v1 / 256);
    return *(int64_t *)(int64_t)(*(int32_t *)(v2 + 9) ^ v9);
  lab_0x20a473_2:;
    int64_t result = v15;
    int32_t * v24 = (int32_t *)(v2 + 87); // 0x20a473
    int32_t v25 = *v24 + (int32_t)result; // 0x20a473
    *v24 = v25;
    if (v25 >= 0) {
        // 0x20a4c6
        return result;
    }
    // 0x20a478
    *(char *)v7 = __asm_insb((int16_t)v2);
    int32_t v26 = *(int32_t *)&v1; // 0x20a479
    int64_t v27 = unknown_ffffffffcca8ae85(); // 0x20a47f
    int64_t v28; // 0x20a447
    uint32_t v29 = (int32_t)v28; // 0x20a484
    uint32_t v30 = *(int32_t *)&v2 + v29; // 0x20a484
    char * v31 = (char *)(v2 + v27); // 0x20a486
    char v32 = *v31; // 0x20a486
    char v33 = v2 / 256; // 0x20a486
    char v34 = v30 < v29; // 0x20a486
    char v35 = v32 + v33 + v34; // 0x20a486
    char v36 = v35 + v34; // 0x20a486
    *v31 = v35;
    v15 = v27;
    v28 = v30;
    if (((v36 ^ v32) & (v36 ^ v33)) < 0) {
        int32_t * v37 = (int32_t *)(v2 - 0x1488975d); // 0x20a48b
        *v37 = *v37 + (int32_t)v4;
        int64_t v38 = unknown_55c3359b(); // 0x20a494
        int64_t v39 = v7 + (v5 ? -4 : 4); // 0x20a49a
        *(int32_t *)v1 = *(int32_t *)&v1 + v30;
        uint64_t v40 = (int64_t)*(int32_t *)-0x56f49f2d * (int64_t)v30 / 0x100000000; // 0x20a4a1
        int64_t result2 = unknown_ffffffff89ceacb1(v39); // 0x20a4ab
        char * v41 = (char *)((int64_t)(0x7ab3a988 * v26) + 0x3201e8af + (v38 & 0xffffffff)); // 0x20a4b0
        unsigned char v42 = *v41; // 0x20a4b0
        unsigned char v43 = v42 + (char)v1; // 0x20a4b0
        *v41 = v43;
        int32_t * v44 = (int32_t *)v40; // 0x20a4b7
        *v44 = *v44 - (int32_t)v38 + (int32_t)(v43 < v42);
        int16_t v45 = v40; // 0x20a4ba
        __asm_out(v45, (char)result2);
        *(int32_t *)v39 = __asm_insd(v45);
        return result2;
    }
    goto lab_0x20a473_2;
}

// Address range: 0x20a4ec - 0x20a4ed
int64_t function_20a4ec(void) {
    // 0x20a4ec
    int64_t result; // 0x20a4ec
    return result;
}

// Address range: 0x20a536 - 0x20a53e
int64_t function_20a536(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4;
    uint32_t v2 = v1 % 32; // 0x20a538
    if (v2 != 0) {
        *(int32_t *)a4 = v1 >> v2 | (int32_t)((a4 & 0xffffffff) << (int64_t)(33 - v2));
    }
    int64_t result; // 0x20a536
    return result;
}

// Address range: 0x20a53f - 0x20a542
int64_t function_20a53f(void) {
    // 0x20a53f
    int64_t result; // 0x20a53f
    return result;
}

// Address range: 0x20a571 - 0x20a574
int64_t function_20a571(int64_t a1, int64_t a2) {
    // 0x20a571
    int64_t v1; // 0x20a571
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x20a596 - 0x20a59d
int64_t function_20a596(void) {
    // 0x20a596
    int64_t result; // 0x20a596
    return result;
}

// Address range: 0x444667 - 0x44466d
int64_t function_444667(int64_t a1) {
    // 0x444667
    return function_2b4c68f9();
}

// Address range: 0x44469f - 0x4446a0
int64_t function_44469f(void) {
    // 0x44469f
    int64_t result; // 0x44469f
    return result;
}

// Address range: 0x4446bd - 0x444749
int64_t function_4446bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4446bd
    return function_44469f();
}

// Address range: 0x444754 - 0x444756
int64_t function_444754(void) {
    // 0x444754
    int64_t result; // 0x444754
    return result;
}

// Address range: 0x444756 - 0x44475c
int64_t function_444756(int64_t a1) {
    // 0x444756
    int64_t v1; // 0x444756
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result;
    return result;
}

// Address range: 0x4447a0 - 0x4447a5
int64_t function_4447a0(void) {
    // 0x4447a0
    return function_21635152();
}

// Address range: 0x4447aa - 0x4447af
int64_t function_4447aa(void) {
    // 0x4447aa
    return function_fffffffff826f50a();
}

// Address range: 0x4447c8 - 0x4447c9
int64_t function_4447c8(void) {
    // 0x4447c8
    int64_t result; // 0x4447c8
    return result;
}

// Address range: 0x4447d1 - 0x4447d2
int64_t function_4447d1(void) {
    // 0x4447d1
    int64_t result; // 0x4447d1
    return result;
}

// Address range: 0x4447d6 - 0x4447db
int64_t function_4447d6(int64_t a1) {
    // 0x4447d6
    int64_t v1; // 0x4447d6
    return v1 | 119;
}

// Address range: 0x444801 - 0x44481e
int64_t function_444801(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 + 0x75339210); // 0x444805
    int64_t v2; // 0x444801
    *v1 = (char)v2;
    bool v3; // 0x444801
    if (v3) {
        // 0x44486d
        return v2 & -256 | (int64_t)*v1;
    }
    // 0x44480d
    unknown_ffffffffe653b8da();
    return function_4447c8();
}

// Address range: 0x444859 - 0x44485c
int64_t function_444859(void) {
    // 0x444859
    int64_t result; // 0x444859
    return result;
}

// Address range: 0x444c67 - 0x444c6a
int64_t function_444c67(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x444c67
    int64_t result; // 0x444c67
    return result;
}

// Address range: 0x444c6d - 0x444cb1
int64_t function_444c6d(int64_t a1, int64_t a2) {
    // 0x444ca6
    int64_t v1; // 0x444c6d
    int32_t v2 = *(int32_t *)(v1 - 30); // 0x444ca7
    int64_t v3; // 0x444c6d
    int64_t v4 = v2 | (int32_t)(int64_t)&v3; // 0x444ca7
    *(int64_t *)(v4 - 8) = -95;
    return v1 & 0xffffffff;
}

// Address range: 0x444cd6 - 0x444cd7
int64_t function_444cd6(void) {
    // 0x444cd6
    int64_t result; // 0x444cd6
    return result;
}

// Address range: 0x444ceb - 0x444ced
int64_t function_444ceb(int64_t a1) {
    // 0x444ceb
    int64_t result; // 0x444ceb
    return result;
}

// Address range: 0x444cef - 0x444cf2
int64_t function_444cef(int64_t a1) {
    // 0x444cef
    int64_t result; // 0x444cef
    result = function_444cd6();
    // 0x444cf1
    return result;
}

// Address range: 0x444cf5 - 0x444cf6
int64_t function_444cf5(void) {
    // 0x444cf5
    int64_t result; // 0x444cf5
    return result;
}

// Address range: 0x444cfa - 0x444d02
int64_t function_444cfa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x444cfa
    return a4 & 0xffffffff;
}

// Address range: 0x444d0d - 0x444d0f
int64_t function_444d0d(void) {
    // 0x444d0d
    int64_t result; // 0x444d0d
    return result;
}

// Address range: 0x444d23 - 0x444d27
int64_t function_444d23(void) {
    // 0x444d23
    int64_t result; // 0x444d23
    return result;
}

// Address range: 0x444d30 - 0x444d33
int64_t function_444d30(int64_t a1) {
    // 0x444d30
    int64_t result; // 0x444d30
    return result;
}

// Address range: 0x444d3c - 0x444d3f
int64_t function_444d3c(void) {
    // 0x444d3c
    int64_t result; // 0x444d3c
    return result;
}

// Address range: 0x444d5c - 0x444d5d
int64_t function_444d5c(void) {
    // 0x444d5c
    int64_t result; // 0x444d5c
    return result;
}

// Address range: 0x444d79 - 0x444d7b
int64_t function_444d79(void) {
    // 0x444d79
    return function_444d5c();
}

// Address range: 0x444d7b - 0x444d7c
int64_t function_444d7b(void) {
    // 0x444d7b
    int64_t result; // 0x444d7b
    return result;
}

// Address range: 0x444da6 - 0x444da7
int64_t function_444da6(void) {
    // 0x444da6
    int64_t result; // 0x444da6
    return result;
}

// Address range: 0x444dc5 - 0x444dcc
int64_t function_444dc5(void) {
    // 0x444dc5
    int64_t result; // 0x444dc5
    __asm_out_137(-127, (int32_t)result);
    return result;
}

// Address range: 0x444dd1 - 0x444dd2
int64_t function_444dd1(void) {
    // 0x444dd1
    int64_t result; // 0x444dd1
    return result;
}

// Address range: 0x444dd2 - 0x444dd3
int64_t function_444dd2(int64_t a1) {
    // 0x444dd2
    int64_t result; // 0x444dd2
    return result;
}

// Address range: 0x444dd4 - 0x444dd7
int64_t function_444dd4(int64_t a1) {
    // 0x444dd4
    int64_t result; // 0x444dd4
    return result;
}

// Address range: 0x444ddc - 0x444e91
int64_t function_444ddc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x444ddc
    int64_t v1; // 0x444ddc
    v1 = function_444d7b();
    // 0x444de1
    int64_t v2; // 0x444ddc
    int64_t * v3 = (int64_t *)(3 * v2); // 0x444de1
    bool v4; // 0x444ddc
    *v3 = *v3 / 2 | 0x8000000000000000 * (int64_t)v4;
    int64_t v5 = v1 & -0xff01 | (int64_t)&g3; // 0x444de5
    char v6 = *(char *)0x754c8f2 ^ (char)a3; // 0x444de7
    *(char *)0x754c8f2 = v6;
    bool v7 = v6 == 0; // 0x444df3
    int64_t v8 = v5; // 0x444df3
    if (v6 < 0) {
        // 0x444df5
        int3_t v9; // 0x444ddc
        __frontend_reg_load_fpr(v9);
        int64_t v10 = a3 & -256 | 113; // 0x444df8
        v8 = (v5 + 239) % 256 | v5 & -256;
        int32_t * v11 = (int32_t *)(a2 + 61 + 2 * v10); // 0x444dfd
        *v11 = *v11 | (int32_t)v2;
        int32_t * v12 = (int32_t *)(a2 - 0x3546b0ef); // 0x444e01
        int32_t v13 = 0x20000000 * *v12; // 0x444e01
        *v12 = v13;
        v7 = v13 == 0;
        if (v13 < 1) {
            int64_t v14 = v8 & 0x6111e5e0 | 0x9eee1a1f; // 0x444e86
            *(int32_t *)a1 = __asm_insd((int16_t)v10);
            int64_t result = v14 + 256 * v2 & 0xff00 | v14 & 0xffff00ff; // 0x444e8c
            char * v15 = (char *)(result + 51); // 0x444e8e
            *v15 = *v15 ^ (char)(v2 / 256);
            return result;
        }
    }
    int64_t result2 = v8; // 0x444e0c
    if (!v7) {
        result2 = function_444da6();
    }
    // 0x444e0e
    return result2;
}

// Address range: 0x444f2b - 0x444f2c
int64_t function_444f2b(void) {
    // 0x444f2b
    int64_t result; // 0x444f2b
    return result;
}

// Address range: 0x444f49 - 0x444f4c
int64_t function_444f49(void) {
    // 0x444f49
    int64_t result; // 0x444f49
    return result;
}

// Address range: 0x444f5a - 0x444f5b
int64_t function_444f5a(void) {
    // 0x444f5a
    int64_t result; // 0x444f5a
    return result;
}

// Address range: 0x444f6e - 0x444f77
int64_t function_444f6e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x444f6e
    int64_t v1; // 0x444f6e
    return v1 & 0xc2e4d5eb | 0x3d1b2a14;
}

// Address range: 0x444f7f - 0x444fa2
int64_t function_444f7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = *(int32_t *)(a2 - 14); // 0x444f8a
    int64_t v2; // 0x444f7f
    if (llvm_ctpop_i8((char)((int32_t)v2 - v1)) % 2 == 0) {
        function_444f5a();
    }
    // 0x444f8f
    *(char *)a1 = __asm_insb((int16_t)a3 & -256 | 247);
    if (llvm_ctpop_i8(*(char *)(a1 + 0x72985333) | (char)a1) % 2 == 0) {
        function_444f2b();
    }
    // 0x444f9a
    return __asm_in(104) | 0x635f361c;
}

// Address range: 0x444fab - 0x44502d
int64_t function_444fab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x444fab
    int64_t v1; // 0x444fab
    int64_t v2 = (int64_t)&v1; // bp-8, 0x444fab
    uint32_t v3 = (int32_t)a4 % 32; // 0x444fac
    bool v4; // 0x444fab
    bool v5; // 0x444fab
    int64_t result; // 0x444fab
    bool v6; // 0x444fab
    if (v3 != 0) {
        int32_t * v7 = (int32_t *)(result - 32); // 0x444fac
        int32_t v8 = *v7 >> v3; // 0x444fac
        *v7 = v8;
        v5 = v8 < 0;
        bool v9; // 0x444fab
        v4 = v3 != 1 == v9;
        v6 = v8 == 0;
    }
    if (v6 || v5 != v4) {
        // 0x445016
        return result;
    }
    uint64_t v10 = result - result / 256; // 0x444fb1
    int64_t v11 = result & -256; // 0x444fb1
    int32_t * v12 = (int32_t *)((v10 % 256 | v11) + 0x762ac9e9); // 0x444fb3
    uint32_t v13 = *v12; // 0x444fb3
    uint32_t v14 = v13 + (int32_t)(int64_t)&v2; // 0x444fb3
    *v12 = v14;
    unsigned char v15 = (char)v10; // 0x444fea
    unsigned char v16 = v14 < v13 ? 88 : 87; // 0x444fea
    int32_t * v17 = (int32_t *)(a4 + 0x3b99653a); // 0x444fec
    *v17 = *v17 - (int32_t)a5 + (int32_t)(v14 < v13 | v16 > v15);
    return v11 | (int64_t)(v15 - v16);
}
