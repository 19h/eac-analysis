/*
 * Targeted RetDec C for native executable gap queue batch 787.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1bc5ce-0x1bc7ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1bc7ce-0x1bc9ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1bc9ce-0x1bcbce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1bcbce-0x1bcdce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1bcdce-0x1bcfce rank=- name=- kind=- bytes=- uncovered=-
 *   0x213a33-0x213c33 rank=- name=- kind=- bytes=- uncovered=-
 *   0x213c33-0x213e33 rank=- name=- kind=- bytes=- uncovered=-
 *   0x213e33-0x214033 rank=- name=- kind=- bytes=- uncovered=-
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
int64_t __asm_fnstenv(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
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

int64_t function_1bc5ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bc5f6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1bc607(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1bc7c3(void);
int64_t function_1bc7d3(void);
int64_t function_1bc7d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1bc7f3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1bc87c(void);
int64_t function_1bc88a(int64_t a1);
int64_t function_1bc8e8(int64_t a1);
int64_t function_1bc910(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bc93b(void);
int64_t function_1bc944(void);
int64_t function_1bc94a(void);
int64_t function_1bc95e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bc9a1(void);
int64_t function_1bc9d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_1bca51(void);
int64_t function_1bca88(void);
int64_t function_1bca95(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1bcace(void);
int64_t function_1bcae8(int64_t a1);
int64_t function_1bcb02(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bcb3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bcb4d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1bcbf4(void);
int64_t function_1bcbf6(void);
int64_t function_1bcc5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bcc9f(int64_t a1);
int64_t function_1bccc5(int64_t a1, int64_t a2);
int64_t function_1bccd5(void);
int64_t function_1bcce2(void);
int64_t function_1bcd0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bcd47(void);
int64_t function_1bcd63(void);
int64_t function_1bcd6c(void);
int64_t function_1bcd73(int64_t a1, int64_t a2);
int64_t function_1bcdab(void);
int64_t function_1bcdb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1bce6c(void);
int64_t function_1bceb2(void);
int64_t function_1bcec7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1bced6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bcefd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bcefe(int64_t a1, int64_t a2);
int64_t function_1bcf0c(void);
int64_t function_1bcf0e(void);
int64_t function_1bcf23(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bcf5b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1bcf6e(void);
int64_t function_1bcfa6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_213a33(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_213ba2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_213d1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_213ea4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_26803da();
int64_t function_c823b();
int64_t function_ffffffffac1db15d();
int64_t function_ffffffffd092956c();
int64_t unknown_158c800();
int64_t unknown_1a2d21f4();
int64_t unknown_2de79d6b();
int64_t unknown_3a223118();
int64_t unknown_3a5dab6b();
int64_t unknown_3a822201();
int64_t unknown_3ade03ff();
int64_t unknown_6f0e9434();
int64_t unknown_7c1062a7();
int64_t unknown_ef93c39();
int64_t unknown_ffffffff890edb86();
int64_t unknown_ffffffff8b9e4bbf();
int64_t unknown_ffffffffa09bdae5();
int64_t unknown_ffffffffa0afde9d();
int64_t unknown_ffffffffa71d046b();
int64_t unknown_ffffffffb3d1432e();
int64_t unknown_ffffffffc30b89da();
int64_t unknown_ffffffffc5a57047();
int64_t unknown_ffffffffc5e09970();
int64_t unknown_ffffffffd9ea593f();
int64_t unknown_ffffffffdc1d0858();
int64_t unknown_ffffffffddf96cca();
int64_t unknown_ffffffffee8b9741();
int64_t unknown_fffffffff823d97c();
int64_t unknown_fffffffffc911de4();

// Address range: 0x1bc5ce - 0x1bc5e8
int64_t function_1bc5ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 & 0x856b00f3; // 0x1bc5ce
    int64_t v2 = (a4 & 0x7f00) + a4 & 0x5000 | v1; // 0x1bc5ce
    int32_t * v3 = (int32_t *)(v2 + 0xb889ae); // 0x1bc5d6
    int64_t v4; // 0x1bc5ce
    *v3 = *v3 | (int32_t)v4;
    __asm_out(0, (char)v1);
    return a4 & 80 | v2 & 0x856b5000 | 163;
}

// Address range: 0x1bc5f6 - 0x1bc607
int64_t function_1bc5f6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1bc5f6
    int64_t v1; // 0x1bc5f6
    int64_t v2 = v1;
    bool v3; // 0x1bc5f6
    int64_t result = v2 & -256 | v2 + 27 + (int64_t)v3 & 23 | 232; // 0x1bc5fe
    int32_t * v4 = (int32_t *)(result + 0x60f8bc31); // 0x1bc600
    *v4 = *v4 + (int32_t)a2;
    return result;
}

// Address range: 0x1bc607 - 0x1bc710
int64_t function_1bc607(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1bc607
    int64_t v1; // 0x1bc607
    uint64_t v2 = v1;
    int64_t v3 = a2;
    uint32_t v4 = (int32_t)v1; // 0x1bc607
    int32_t v5 = v4 + 0x4bd457bf + (int32_t)(v4 < 0x7520001); // 0x1bc610
    if (v5 >= 0) {
        char * v6 = (char *)(v2 + 0x3d0068d9); // 0x1bc618
        char v7 = v2 / 256; // 0x1bc618
        *v6 = *v6 + v7;
        int32_t v8 = v3; // 0x1bc61e
        int32_t v9 = v2; // 0x1bc61e
        int32_t v10 = v8 + v9; // 0x1bc61e
        if (((v10 ^ v8) & (v10 ^ v9)) >= 0) {
            // 0x1bc629
            return a4 & 0xffffffff;
        }
        int64_t result = unknown_6f0e9434(); // 0x1bc62e
        __asm_out(-1, (char)result);
        unsigned char v11 = *(char *)0x3a4acf44; // 0x1bc643
        *(char *)0x3a4acf44 = v11 / 16 | 16 * v11;
        *(char *)-0x33ed99b4 = *(char *)-0x33ed99b4 + v7;
        __asm_out_133(58, (int32_t)result);
        return result;
    }
    int32_t * v12 = (int32_t *)(a1 + 49); // 0x1bc68b
    *v12 = *v12 + (int32_t)a3;
    *(int32_t *)a1 = v5;
    char * v13 = (char *)((int64_t)v5 + 9); // 0x1bc693
    *v13 = *v13 - 68;
    *(char *)0x140b909e = *(char *)0x140b909e + (char)(v2 / 256);
    bool v14; // 0x1bc607
    *(int32_t *)((v14 ? -4 : 4) + a1) = *(int32_t *)&v3;
    int64_t v15 = v14 ? 0xfffffffc : 4; // 0x1bc69e
    unsigned char v16 = *(char *)(a3 + 0xd8a7549e) | (char)v5 | 1; // 0x1bc6a9
    int64_t v17 = (int64_t)v16 | (int64_t)(v5 & -0x6582100 | 0x6582000); // 0x1bc6a9
    char * v18 = (char *)v17; // 0x1bc6ae
    *v18 = *v18 + 61;
    unsigned char v19 = (int32_t)v17 < 0xe3846950 ? -115 : -116; // 0x1bc6bd
    int32_t v20 = *(int32_t *)(v2 - 0x523afe00); // 0x1bc6bf
    unknown_ffffffffa71d046b(0xd8a7549e, (int32_t)(v3 + v15) - v20 + (int32_t)((int32_t)v17 < 0xe3846950 | v16 < v19));
    unknown_ffffffffc30b89da();
    int64_t v21 = unknown_fffffffffc911de4(); // 0x1bc6de
    *(int32_t *)(v2 + 0x34e00003) = -0x2758ab62;
    uint32_t v22 = (int32_t)v21; // 0x1bc6fa
    *(int32_t *)0x6abbef33b60c510a = v22;
    int32_t v23 = v22 - 0x2be601; // 0x1bc703
    return v21 & -0xff01 | 256 * (64 * (int64_t)(v23 == 0) | (int64_t)(v22 < 0x2be601) | 128 * (int64_t)(v23 < 0) | 16 * (int64_t)(v22 % 16 > 16) | 4 * (int64_t)(llvm_ctpop_i8((char)v23) % 2 == 0)) | 512;
}

// Address range: 0x1bc7c3 - 0x1bc7ca
int64_t function_1bc7c3(void) {
    // 0x1bc7c3
    return unknown_ffffffffddf96cca();
}

// Address range: 0x1bc7d3 - 0x1bc7d4
int64_t function_1bc7d3(void) {
    // 0x1bc7d3
    int64_t result; // 0x1bc7d3
    return result;
}

// Address range: 0x1bc7d5 - 0x1bc7d9
int64_t function_1bc7d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1bc7d5
    int64_t result; // 0x1bc7d5
    return result;
}

// Address range: 0x1bc7f3 - 0x1bc87c
int64_t function_1bc7f3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1bc7f3
    int64_t result; // 0x1bc7f3
    uint64_t v1 = result;
    __asm_pmulhw(result, result);
    bool v2; // 0x1bc7f3
    if (v2) {
        char * v3 = (char *)(a2 + 61 + 4 * a1); // 0x1bc83c
        *v3 = *v3 + (char)(a4 / 256);
        return result;
    }
    int64_t v4 = unknown_158c800(); // 0x1bc7fa
    // 0x1bc7fa
    while (true == !v2) {
        // 0x1bc7fa
        v4 = unknown_158c800();
    }
    // 0x1bc801
    __readgsdword(8 * a1 + 58 + a3);
    int64_t v5 = v4 & -0xff01 | (int64_t)"cxa_get_globals_fast"; // 0x1bc816
    int32_t v6 = (int32_t)((a3 & 0xff00) + a3 & 0xff00 | a3 & 0xffff00ff) + (int32_t)a1; // 0x1bc818
    *(int32_t *)a1 = v6;
    if (v6 == 0) {
        int32_t * v7 = (int32_t *)v5; // 0x1bc827
        uint32_t v8 = *v7; // 0x1bc827
        *v7 = v8 / 0x100000 | 0x1000 * v8;
        int64_t result2 = unknown_2de79d6b(a4 + 0xc56b3a2c & 0xffffffff); // 0x1bc865
        *(char *)0x91d9d8a9 = (char)result2;
        return result2;
    }
    // 0x1bc841
    *(char *)-0x16fde2b6 = *(char *)-0x16fde2b6 + (char)(v1 / 256);
    int64_t v9 = v5 + 0xb8b57e73; // 0x1bc849
    __asm_out_133(-103, (int32_t)v9);
    unsigned char v10 = *(char *)0x5bac94db; // 0x1bc852
    *(char *)0x5bac94db = v10 - 83;
    char * v11 = (char *)((v9 & 0xffffffff) + 0x13d00ff); // 0x1bc854
    *v11 = *v11 + (char)v1 + (char)(v10 > 82);
    return unknown_ffffffffa0afde9d();
}

// Address range: 0x1bc87c - 0x1bc886
int64_t function_1bc87c(void) {
    // 0x1bc87c
    __asm_wait();
    return function_ffffffffac1db15d();
}

// Address range: 0x1bc88a - 0x1bc88e
int64_t function_1bc88a(int64_t a1) {
    // 0x1bc88a
    int64_t result; // 0x1bc88a
    return result;
}

// Address range: 0x1bc8e8 - 0x1bc8eb
int64_t function_1bc8e8(int64_t a1) {
    // 0x1bc8e8
    int64_t result; // 0x1bc8e8
    return result;
}

// Address range: 0x1bc910 - 0x1bc91b
int64_t function_1bc910(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bc910
    return unknown_3a223118(a1, a2, a3, a4);
}

// Address range: 0x1bc93b - 0x1bc93e
int64_t function_1bc93b(void) {
    // 0x1bc93b
    int64_t result; // 0x1bc93b
    return result;
}

// Address range: 0x1bc944 - 0x1bc945
int64_t function_1bc944(void) {
    // 0x1bc944
    int64_t result; // 0x1bc944
    return result;
}

// Address range: 0x1bc94a - 0x1bc94b
int64_t function_1bc94a(void) {
    // 0x1bc94a
    int64_t result; // 0x1bc94a
    return result;
}

// Address range: 0x1bc95e - 0x1bc98a
int64_t function_1bc95e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int32_t * v2 = (int32_t *)(a2 + 0x375049fc); // 0x1bc95f
    int64_t v3; // 0x1bc95e
    *v2 = *v2 + (int32_t)v3;
    __asm_int(-24);
    *(int32_t *)a1 = *(int32_t *)&v1 + (int32_t)a1;
    if (a4 != 1) {
        function_1bc944();
    }
    char v4 = *(char *)(a2 + 78); // 0x1bc973
    int64_t v5 = unknown_fffffffff823d97c(); // 0x1bc976
    int64_t v6; // bp+16, 0x1bc95e
    int64_t v7 = 0x100000000 * (int64_t)&v6 >> 32; // 0x1bc97b
    int64_t result = v5; // 0x1bc97e
    if (-35 * v7 == -0x2300000000 * v7 >> 32 && (v4 & (char)v3) != 0) {
        result = function_1bc94a();
    }
    // 0x1bc980
    return result;
}

// Address range: 0x1bc9a1 - 0x1bc9a7
int64_t function_1bc9a1(void) {
    // 0x1bc9a1
    return unknown_7c1062a7();
}

// Address range: 0x1bc9d7 - 0x1bca47
int64_t function_1bc9d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    // 0x1bc9d7
    int64_t v1; // 0x1bc9d7
    int64_t v2 = v1;
    *(char *)(a4 + 0x1e80091) = -1;
    uint32_t v3 = (int32_t)(((v2 | v1) + 239) % 256 | v2 & 0xffffff00); // 0x1bc9e3
    uint32_t v4 = a5 % 2 != 0 ? -0x6b633a65 : -0x6b633a66; // 0x1bc9e3
    int64_t v5 = a4 - 1; // 0x1bc9e8
    int64_t v6 = a3; // 0x1bc9e8
    bool v7 = a5 % 2 != 0 | v4 > v3; // 0x1bc9e8
    int64_t result2 = v3 - v4;
    while (!v7) {
        int64_t v8 = v5;
        char * v9 = (char *)v6; // 0x1bc9ff
        unsigned char v10 = *v9; // 0x1bc9ff
        unsigned char v11 = v10 + (char)(v6 / 256); // 0x1bc9ff
        *v9 = v11;
        v6 = v6 & -256 | (int64_t)*(char *)0x1e8a3c9;
        int64_t v12 = result2 & -256 | (int64_t)*(char *)0x1e8a3d2; // 0x1bca04
        v5 = -1;
        v7 = v11 < v10;
        if (v8 != 0) {
            int64_t v13 = (a5 & (int64_t)&g1) != 0 ? 0x1e8a3d1 : 0x1e8a3d3; // 0x1bca04
            int64_t v14 = v12 + v1; // 0x1bca1c
            int64_t v15 = v14 & 0xffffffff; // 0x1bca1c
            *(int32_t *)-0x17b9e0db = *(int32_t *)-0x17b9e0db + (int32_t)a1;
            int32_t * v16 = (int32_t *)(v6 - 45); // 0x1bca24
            uint32_t v17 = *v16; // 0x1bca24
            uint32_t v18 = v17 + (int32_t)v1; // 0x1bca24
            *v16 = v18;
            char * v19 = (char *)(v15 - 127 + 2 * v15); // 0x1bca27
            unsigned char v20 = *v19; // 0x1bca27
            char v21 = v1 / 256; // 0x1bca27
            unsigned char v22 = v20 + v21; // 0x1bca27
            unsigned char v23 = v22 + (char)(v18 < v17); // 0x1bca27
            *v19 = v23;
            char * v24 = (char *)(v13 - 0x35d56e5e); // 0x1bca2b
            *v24 = *v24 + v21 + (char)(v18 < v17 ? v23 <= v20 : v22 < v20);
            __asm_out(-91, (char)v14);
            unknown_ef93c39();
            *(char *)a1 = *(char *)v13;
            int64_t v25 = ((a5 & (int64_t)&g1) != 0 ? -1 : 1) + a1; // 0x1bca38
            unknown_ffffffffee8b9741(v25, (a5 & (int64_t)&g1) != 0 ? 0x1e8a3d0 : 0x1e8a3d4);
            int64_t result = unknown_ffffffffc5a57047(); // 0x1bca41
            *(char *)v25 = __asm_insb((int16_t)v6);
            return result;
        }
        result2 = v12;
    }
    // 0x1bca09
    return result2;
}

// Address range: 0x1bca51 - 0x1bca52
int64_t function_1bca51(void) {
    // 0x1bca51
    int64_t result; // 0x1bca51
    return result;
}

// Address range: 0x1bca88 - 0x1bca89
int64_t function_1bca88(void) {
    // 0x1bca88
    int64_t result; // 0x1bca88
    return result;
}

// Address range: 0x1bca95 - 0x1bca9b
int64_t function_1bca95(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1bca95
    int64_t result; // 0x1bca95
    return result;
}

// Address range: 0x1bcace - 0x1bcad0
int64_t function_1bcace(void) {
    // 0x1bcace
    return function_1bca51();
}

// Address range: 0x1bcae8 - 0x1bcb02
int64_t function_1bcae8(int64_t a1) {
    // 0x1bcae8
    int64_t v1; // 0x1bcae8
    bool v2; // 0x1bcae8
    if (true == !v2) {
        int64_t v3; // 0x1bcae8
        v1 = function_1bca95(v3, v3, v3);
    }
    int64_t v4 = v1;
    return (v4 + 37) % 256 | v4 & -256;
}

// Address range: 0x1bcb02 - 0x1bcb3b
int64_t function_1bcb02(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bcb02
    int64_t v1; // 0x1bcb02
    int32_t v2 = v1 & a4; // 0x1bcb02
    int64_t v3; // 0x1bcb02
    if (v2 >= 0 == (v2 != 0)) {
        v3 = function_1bca88();
    }
    uint64_t result = v3;
    uint64_t v4 = v1 + 0xfeac2a; // 0x1bcb06
    char * v5 = (char *)(4 * a1 + 0x47fa0225 + (v4 & 0xffffffff)); // 0x1bcb11
    char v6 = *v5 & (char)(result / 256); // 0x1bcb11
    *v5 = v6;
    __asm_out_133(-104, (int32_t)result);
    if (v6 == 0) {
        // 0x1bcb1d
        *(char *)-0x2d006bd8 = *(char *)-0x2d006bd8 + (char)(v4 / 256);
        return (result + 5) % 256 | result & -0x10000 | (result & 0xff00) + a4 & 0xff00;
    }
    // 0x1bcb35
    *(char *)-0x482e0ac4 = *(char *)-0x482e0ac4 + (char)(v4 / 256);
    return result;
}

// Address range: 0x1bcb3c - 0x1bcb45
int64_t function_1bcb3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bcb3c
    int64_t v1; // 0x1bcb3c
    __asm_out_134((int16_t)a3, (char)v1);
    __asm_int1();
    return function_ffffffffd092956c();
}

// Address range: 0x1bcb4d - 0x1bcbec
int64_t function_1bcb4d(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3;
    int64_t v2 = unknown_ffffffffdc1d0858(); // 0x1bcb52
    int64_t v3; // 0x1bcb4d
    int64_t v4 = 0xffffffdf * v3; // 0x1bcb57
    __readgsbyte(a1 - 0x17da5195 + 4 * v2);
    int32_t * v5 = (int32_t *)(v2 + 0x40e70603); // 0x1bcb62
    uint32_t v6 = *v5; // 0x1bcb62
    int32_t v7 = a3; // 0x1bcb62
    uint32_t v8 = v6 + v7; // 0x1bcb62
    *v5 = v8;
    if (((v8 ^ v6) & (v8 ^ v7)) >= 0) {
        // 0x1bcb6a
        unknown_ffffffffc5e09970();
        uint64_t v9 = v3 + 0x1e83636; // 0x1bcb73
        char * v10 = (char *)((v4 & 0xffffffff) - 0x63afde00 + 4 * v1); // 0x1bcb79
        *v10 = *v10 - (char)(v3 / 256);
        unknown_ffffffff890edb86();
        char v11 = *(char *)&v1; // 0x1bcb98
        return 256 * (int64_t)((char)(v9 / 256) - v11) | v9 & 0xffff00ff;
    }
    int64_t result = v2 & -256 | 49; // 0x1bcbe0
    int32_t * v12 = (int32_t *)(v4 - (v8 < v6 ? 0x3200 : 0x3100) & 0xff00 | v4 & 0xffff00ff); // 0x1bcbe4
    uint32_t v13 = *v12; // 0x1bcbe4
    uint32_t v14 = v13 + (int32_t)result; // 0x1bcbe4
    *v12 = v14;
    if (v14 < v13 || v14 == 0) {
        // 0x1bcbe8
        return function_1bcbf6();
    }
    // 0x1bcb8e
    return result;
}

// Address range: 0x1bcbf4 - 0x1bcbf6
int64_t function_1bcbf4(void) {
    // 0x1bcbf4
    int64_t v1; // 0x1bcbf4
    return v1 & -0xff01 | (int64_t)&g4;
}

// Address range: 0x1bcbf6 - 0x1bcc04
int64_t function_1bcbf6(void) {
    // 0x1bcbf6
    __asm_in(58);
    int64_t result = unknown_3ade03ff(); // 0x1bcbf9
    char * v1 = (char *)result; // 0x1bcc01
    *v1 = *v1 - 18;
    return result;
}

// Address range: 0x1bcc5f - 0x1bcc7b
int64_t function_1bcc5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bcc5f
    int64_t v1; // 0x1bcc5f
    int64_t v2 = v1;
    float80_t v3; // 0x1bcc5f
    *(int32_t *)(v2 - 59 + 4 * v2) = (int32_t)v3;
    unknown_3a5dab6b();
    int64_t v4; // 0x1bcc5f
    uint32_t result = *(int32_t *)&v4; // 0x1bcc6b
    int64_t v5 = a2 + 4; // 0x1bcc6b
    v4 = v5;
    char * v6 = (char *)v5; // 0x1bcc6e
    unsigned char v7 = *v6; // 0x1bcc6e
    unsigned char v8 = v7 + (char)a4; // 0x1bcc6e
    *v6 = v8;
    int32_t * v9 = (int32_t *)(a4 - 0x3fe1766); // 0x1bcc71
    *v9 = *v9 - 0x7a2033e1 + (int32_t)(v8 < v7);
    return result;
}

// Address range: 0x1bcc9f - 0x1bcca2
int64_t function_1bcc9f(int64_t a1) {
    // 0x1bcc9f
    int64_t result; // 0x1bcc9f
    return result;
}

// Address range: 0x1bccc5 - 0x1bccca
int64_t function_1bccc5(int64_t a1, int64_t a2) {
    // 0x1bccc5
    int64_t v1; // 0x1bccc5
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x1bccc5
    int64_t v3 = v2 ? -4 : 4; // 0x1bccc5
    *(int64_t *)((v1 & 0xffffffff) - 8) = 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2;
    return function_1bcd0d(v3 + a1, v3 + a2, v1, v1);
}

// Address range: 0x1bccd5 - 0x1bccd6
int64_t function_1bccd5(void) {
    // 0x1bccd5
    int64_t result; // 0x1bccd5
    return result;
}

// Address range: 0x1bcce2 - 0x1bcce7
int64_t function_1bcce2(void) {
    // 0x1bcce2
    return function_26803da();
}

// Address range: 0x1bcd0d - 0x1bcd37
int64_t function_1bcd0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a1;
    int64_t v3; // 0x1bcd0d
    char v4 = v3;
    if (v4 >= 0) {
        // 0x1bcd11
        return a2 & 0xffffffff;
    }
    char * v5 = (char *)v3; // 0x1bcd20
    unsigned char v6 = *v5; // 0x1bcd20
    unsigned char v7 = v6 + v4; // 0x1bcd20
    *v5 = v7;
    int32_t v8 = *(int32_t *)&v1; // 0x1bcd22
    *(int32_t *)v1 = v8 + (int32_t)v3 + (int32_t)(v7 < v6);
    *v5 = *v5 + v4;
    int64_t result = __asm_sti(); // 0x1bcd2d
    *(char *)v2 = *(char *)&v2 | (char)(v1 / 256);
    return result;
}

// Address range: 0x1bcd47 - 0x1bcd49
int64_t function_1bcd47(void) {
    // 0x1bcd47
    return function_1bccd5();
}

// Address range: 0x1bcd63 - 0x1bcd64
int64_t function_1bcd63(void) {
    // 0x1bcd63
    int64_t result; // 0x1bcd63
    return result;
}

// Address range: 0x1bcd6c - 0x1bcd6d
int64_t function_1bcd6c(void) {
    // 0x1bcd6c
    int64_t result; // 0x1bcd6c
    return result;
}

// Address range: 0x1bcd73 - 0x1bcd76
int64_t function_1bcd73(int64_t a1, int64_t a2) {
    // 0x1bcd73
    int64_t v1; // 0x1bcd73
    *(int32_t *)a1 = (int32_t)v1;
    return function_1bcd6c();
}

// Address range: 0x1bcdab - 0x1bcdad
int64_t function_1bcdab(void) {
    // 0x1bcdab
    return function_1bcd63();
}

// Address range: 0x1bcdb6 - 0x1bce03
int64_t function_1bcdb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1bcdb6
    __asm_wait();
    int64_t v1 = unknown_ffffffff8b9e4bbf(); // 0x1bcdb9
    int64_t v2; // 0x1bcdb6
    int64_t v3 = v2 + 0x1e8c696; // 0x1bcdc0
    int64_t v4 = a4 - 256 * v1 & 0xff00 | a4 & -0xff01; // 0x1bcdcc
    int32_t * v5 = (int32_t *)(a3 - 20); // 0x1bcdce
    *v5 = *v5 + (int32_t)v3;
    int32_t * v6 = (int32_t *)(a2 - 0xb9b9d08); // 0x1bcdd1
    *v6 = *v6 & -0x54fe171e;
    int64_t v7 = v1 & 0xffffffff; // 0x1bcddb
    int64_t v8; // 0x1bcdb6
    *(char *)v7 = *(char *)&v8;
    bool v9; // 0x1bcdb6
    int64_t v10 = v9 ? -1 : 1; // 0x1bcde1
    int32_t * v11 = (int32_t *)((v3 & 0xffffffff) - 126); // 0x1bcde4
    *v11 = *v11 + (int32_t)v4;
    unsigned char v12 = *(char *)-0x1719c217fc27b1ad; // 0x1bcde7
    int32_t * v13 = (int32_t *)((v3 + a1 & 0xffffff00 | (int64_t)v12) + 0x48664003); // 0x1bcdf1
    *v13 = *v13 - 0x726fc51c;
    return unknown_3a822201(v7 + v10, v10 + a2, 0x8d903ae4, v4);
}

// Address range: 0x1bce6c - 0x1bce73
int64_t function_1bce6c(void) {
    // 0x1bce6c
    int64_t result; // 0x1bce6c
    return result;
}

// Address range: 0x1bceb2 - 0x1bceb5
int64_t function_1bceb2(void) {
    // 0x1bceb2
    int64_t v1; // 0x1bceb2
    return v1 & -0xff01 | (int64_t)&g3;
}

// Address range: 0x1bcec7 - 0x1bced4
int64_t function_1bcec7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1bcec7
    int64_t result; // 0x1bcec7
    return result;
}

// Address range: 0x1bced6 - 0x1bcefb
int64_t function_1bced6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bced6
    int64_t v1; // 0x1bced6
    bool v2; // 0x1bced6
    int64_t v3 = 2 * v1 & 0xfffe | (int64_t)v2 | 0x6640000;
    unsigned char v4 = (char)unknown_ffffffffa09bdae5(); // 0x1bcee4
    *(char *)a1 = v4 - 83 + (char)(v4 > 1);
    int64_t v5 = (v2 ? -1 : 1) + a1; // 0x1bceed
    unknown_1a2d21f4(v5);
    char * v6 = (char *)(v3 + 21); // 0x1bcef3
    char v7 = *v6; // 0x1bcef3
    *v6 = (char)v1 + (char)(-1 - (char)a3 < (char)a4) + v7;
    return function_1bcefe(v5 + (v2 ? -4 : 4), v3);
}

// Address range: 0x1bcefd - 0x1bcefe
int64_t function_1bcefd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bcefd
    int64_t result; // 0x1bcefd
    return result;
}

// Address range: 0x1bcefe - 0x1bcf01
int64_t function_1bcefe(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a2 - 4); // 0x1bcefe
    *v1 = -1 - *v1;
    int64_t result; // 0x1bcefe
    return result;
}

// Address range: 0x1bcf0c - 0x1bcf0d
int64_t function_1bcf0c(void) {
    // 0x1bcf0c
    int64_t result; // 0x1bcf0c
    return result;
}

// Address range: 0x1bcf0e - 0x1bcf12
int64_t function_1bcf0e(void) {
    // 0x1bcf0e
    int64_t result; // 0x1bcf0e
    return result;
}

// Address range: 0x1bcf23 - 0x1bcf41
int64_t function_1bcf23(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bcf23
    int64_t v1; // 0x1bcf23
    int64_t v2 = v1;
    bool v3; // 0x1bcf23
    *(char *)v2 = (char)v2 - (char)a4 + (char)v3;
    unknown_ffffffffb3d1432e();
    unknown_ffffffffd9ea593f();
    return function_1bcf0c();
}

// Address range: 0x1bcf5b - 0x1bcf60
int64_t function_1bcf5b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1bcf5b
    int64_t v1; // 0x1bcf5b
    int64_t v2 = v1;
    return (v2 + a3) % 256 | v2 & -256;
}

// Address range: 0x1bcf6e - 0x1bcf6f
int64_t function_1bcf6e(void) {
    // 0x1bcf6e
    int64_t result; // 0x1bcf6e
    return result;
}

// Address range: 0x1bcfa6 - 0x1bcfa9
int64_t function_1bcfa6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1bcfa6
    int64_t result; // 0x1bcfa6
    bool v1; // 0x1bcfa6
    if (a4 != 1 && !v1) {
        result = function_1bcf6e();
    }
    // 0x1bcfa8
    return result;
}

// Address range: 0x213a33 - 0x213ba2
int64_t function_213a33(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x213a33
    int64_t v1; // 0x213a33
    bool v2; // 0x213a33
    return function_c823b(a1, a2, a3, a4, a5, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x213ba2 - 0x213d1c
int64_t function_213ba2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x213ba2
    int64_t v1; // 0x213ba2
    return function_c823b(a1, a2, a3, a4, a5, v1, v1 + 0x1fce0628);
}

// Address range: 0x213d1c - 0x213ea4
int64_t function_213d1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x213d1c
    return function_c823b(a1, a2, a3, a4, a5, a6, a7);
}

// Address range: 0x213ea4 - 0x21401d
int64_t function_213ea4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x213ea4
    int64_t v1; // bp-32, 0x213ea4
    v1 = (int64_t)&v1;
    int64_t v2; // bp-24, 0x213ea4
    v2 = (int64_t)&v2;
    int64_t v3; // bp-16, 0x213ea4
    int64_t v4 = (int64_t)&v3; // 0x213f2c
    int64_t v5 = v4 - 16; // 0x213f3c
    int64_t * v6 = (int64_t *)v5; // 0x213f4f
    *v6 = v5;
    int64_t v7 = v4 - 8; // 0x213f57
    int64_t * v8 = (int64_t *)v7; // 0x213f5c
    int64_t * v9 = (int64_t *)(v4 + 32); // 0x213f5f
    int64_t v10 = *v9; // 0x213f5f
    *v8 = v10;
    *v6 = v4;
    int64_t v11 = v4 + 16; // 0x213f7f
    int64_t * v12 = (int64_t *)v11; // 0x213f7f
    *v12 = v10;
    *v6 = v7;
    *v8 = *v12;
    *v9 = v3;
    v3 = v11;
    *v8 = *(int64_t *)(v4 + 8);
    v3 = v11;
    int64_t v13; // 0x213ea4
    bool v14; // 0x213ea4
    return function_c823b(a1, a2, a3, a4, a5, v13, 0x4000 * (int64_t)v14 | 2048 * (int64_t)v14 | 1024 * (int64_t)v14 | 512 * (int64_t)v14 | 256 * (int64_t)v14 | 128 * (int64_t)v14 | 64 * (int64_t)v14 | 16 * (int64_t)v14 | (int64_t)v14 | 4 * (int64_t)v14 | 2);
}
