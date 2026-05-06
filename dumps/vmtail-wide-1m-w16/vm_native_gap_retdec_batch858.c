/*
 * Targeted RetDec C for native executable gap queue batch 858.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x20959e-0x20979e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20979e-0x20999e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20999e-0x209b9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2892cb-0x2894cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x2894cb-0x2896cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x2896cb-0x2898cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x2898cb-0x289acb rank=- name=- kind=- bytes=- uncovered=-
 *   0x289acb-0x289ccb rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_20959e(void);
int64_t function_209614(void);
int64_t function_209632(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_209668(void);
int64_t function_20969c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2096bb(int64_t a1);
int64_t function_209718(int64_t a1, int64_t a2, int64_t a3);
int64_t function_209727(int64_t a1);
int64_t function_209766(void);
int64_t function_209776(int64_t a1);
int64_t function_2097f4(void);
int64_t function_20980f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_209942(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_209a07(int64_t a1);
int64_t function_209a50(void);
int64_t function_209a72(void);
int64_t function_209a8d(void);
int64_t function_209a95(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_209b84(void);
int64_t function_2892cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_289471(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_289601(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_28977b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2898cd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2899d2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_289b0c(int64_t a1);
int64_t function_caf2a();
int64_t function_ffffffffe82d1937();
int64_t unknown_1a94c4b2();
int64_t unknown_1e4f5f3b();
int64_t unknown_3abc1bd4();
int64_t unknown_4d9803e3();
int64_t unknown_55299b0d();
int64_t unknown_638035a0();
int64_t unknown_6db82700();
int64_t unknown_7fbf9a7b();
int64_t unknown_ffffffff81506916();
int64_t unknown_ffffffffab0af268();
int64_t unknown_ffffffffbca17d23();
int64_t unknown_ffffffffc727f48a();
int64_t unknown_ffffffffd0d3d1f7();
int64_t unknown_fffffffff723b979();

// Address range: 0x20959e - 0x20959f
int64_t function_20959e(void) {
    // 0x20959e
    int64_t result; // 0x20959e
    return result;
}

// Address range: 0x209614 - 0x209615
int64_t function_209614(void) {
    // 0x209614
    int64_t result; // 0x209614
    return result;
}

// Address range: 0x209632 - 0x20965c
int64_t function_209632(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x209632
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v1 = unknown_1e4f5f3b(); // 0x209635
    int64_t v2; // 0x209632
    char * v3 = (char *)(v2 - 40); // 0x20963a
    *v3 = *v3 ^ (char)(a3 / 256);
    __asm_out(-24, (char)v1);
    int32_t * v4 = (int32_t *)(a3 - 0xa11ed90); // 0x20963f
    *v4 = *v4 + (int32_t)v2;
    int32_t * v5 = (int32_t *)v1; // 0x209648
    *v5 = *v5 + (int32_t)v1;
    return v1 + 0xd118fe18 & 0xffffffff;
}

// Address range: 0x209668 - 0x209669
int64_t function_209668(void) {
    // 0x209668
    int64_t result; // 0x209668
    return result;
}

// Address range: 0x20969c - 0x2096b7
int64_t function_20969c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20969c
    int64_t v1; // 0x20969c
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2;
    int32_t * v3 = (int32_t *)(a2 + 0x3b9a3d8e); // 0x2096a5
    int32_t v4 = *v3; // 0x2096a5
    *v3 = v4 - (int32_t)a1;
    int64_t result = unknown_1a94c4b2(); // 0x2096b1
    if ((int64_t)v4 < a1) {
        result = function_209668();
    }
    // 0x2096b3
    return result;
}

// Address range: 0x2096bb - 0x2096c3
int64_t function_2096bb(int64_t a1) {
    // 0x2096bb
    int64_t v1; // 0x2096bb
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t result; // 0x2096bb
    *(char *)result = *(char *)&result + 64;
    return result;
}

// Address range: 0x209718 - 0x20971d
int64_t function_209718(int64_t a1, int64_t a2, int64_t a3) {
    // 0x209718
    int64_t result; // 0x209718
    return result;
}

// Address range: 0x209727 - 0x209728
int64_t function_209727(int64_t a1) {
    // 0x209727
    int64_t result; // 0x209727
    return result;
}

// Address range: 0x209766 - 0x209769
int64_t function_209766(void) {
    // 0x209766
    int64_t result; // 0x209766
    return result;
}

// Address range: 0x209776 - 0x209777
int64_t function_209776(int64_t a1) {
    // 0x209776
    int64_t result; // 0x209776
    return result;
}

// Address range: 0x2097f4 - 0x2097f5
int64_t function_2097f4(void) {
    // 0x2097f4
    int64_t result; // 0x2097f4
    return result;
}

// Address range: 0x20980f - 0x20993f
int64_t function_20980f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1; // 0x209852
    int64_t v2; // 0x20980f
    int64_t v3; // 0x20980f
    bool v4; // 0x20980f
    if (!v4) {
      lab_0x2098cc:
        // 0x2098cc
        unknown_3abc1bd4();
        if (a4 == 0) {
            // 0x20993c
            return __asm_wait();
        }
        int32_t * v5 = (int32_t *)(a3 - 0x29a76b8e); // 0x2098d6
        int32_t v6 = *v5; // 0x2098d6
        *v5 = 2 * v6;
        unknown_4d9803e3();
        int64_t v7 = __asm_int1(); // 0x2098e2
        int32_t v8 = *(int32_t *)-0x5ee8571c; // 0x2098e3
        *(int32_t *)-0x5ee8571c = (int32_t)(v6 < 0) + (int32_t)v1 + v8;
        char * v9 = (char *)(8 * a4 + 71 + *(int64_t *)v3); // 0x2098f1
        *v9 = *v9 + (char)v7;
        return v7 + v2 & 0xffffffff;
    }
    int32_t * v10 = (int32_t *)(a3 + 0x7a5b7952);
    int64_t v11 = a1; // 0x209854
    int64_t v12; // 0x20980f
    int64_t v13 = v12;
    int64_t v14; // 0x20980f
    *(int32_t *)v11 = (int32_t)v14;
    bool v15; // 0x20980f
    while (!v15) {
        // 0x209840
        v11 += (v4 ? -4 : 4);
        int64_t v16; // 0x20980f
        *(int32_t *)0x2ab1db43 = *(int32_t *)0x2ab1db43 + (int32_t)v16;
        int64_t v17 = v16 - 8; // 0x209848
        *(int64_t *)v17 = a3;
        int64_t v18 = v14 + v13 & 0xffffffff; // 0x209849
        int32_t v19 = *v10 + (int32_t)v17; // 0x20984b
        unsigned char v20 = llvm_ctpop_i8((char)v19); // 0x20984b
        *v10 = v19;
        v16 = v17;
        v14 = __asm_sti();
        v15 = v19 == 0;
        v3 = v17;
        v2 = v18;
        v1 = v11;
        if (v20 % 2 != 0) {
            goto lab_0x2098cc;
        }
        v13 = v18;
        *(int32_t *)v11 = (int32_t)v14;
    }
    int32_t * v21 = (int32_t *)(a4 + 1); // 0x20985a
    int32_t v22 = *v21; // 0x20985a
    int64_t v23; // 0x20980f
    int32_t v24 = v22 + (int32_t)(-1 - (int32_t)a2 < (int32_t)v13) - (int32_t)v23; // 0x20985a
    unsigned char v25 = llvm_ctpop_i8((char)v24); // 0x20985a
    *v21 = v24;
    if (v25 % 2 != 0) {
        function_2097f4();
    }
    // 0x209861
    return unknown_ffffffffab0af268();
}

// Address range: 0x209942 - 0x209a07
int64_t function_209942(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x209942
    int64_t v1; // 0x209942
    int32_t * v2 = (int32_t *)(v1 - 0x45fe17ab + 8 * v1); // 0x209942
    int32_t v3 = v1; // 0x209942
    *v2 = *v2 | v3;
    int64_t v4 = a4 - 1; // 0x20994e
    int32_t * v5 = (int32_t *)(a2 - 0x178f67a0); // 0x209956
    *v5 = *v5 + v3;
    __asm_iretd(a1);
    *(char *)v4 = (char)v4;
    uint64_t v6 = (v4 & 0xff00) + v4;
    int64_t v7 = v6 & 0xff00 | v4 & -0xff01; // 0x209969
    int64_t result = unknown_fffffffff723b979(); // 0x209973
    *(char *)-0x17fc14d8e99f23fd = (char)result;
    int32_t * v8 = (int32_t *)v7; // 0x209981
    int32_t v9 = *v8; // 0x209981
    int32_t v10 = v9 + ((int32_t)*(char *)(v1 - 0x17c1e37e) | -0x69d2fc85); // 0x209981
    *v8 = v10;
    bool v11; // 0x209942
    int32_t * v12 = (int32_t *)((v11 ? -1 : 1) + a2); // 0x209984
    __asm_outsd(2784, *v12);
    if (v10 < 0 == ((v10 ^ v9) & (v10 ^ -0x80000000)) < 0) {
        // 0x20998a
        return result;
    }
    unsigned char v13 = *(char *)0x1022819b | 3; // 0x209994
    int64_t v14 = unknown_638035a0(); // 0x20999a
    *(int32_t *)((256 * (int64_t)v13 | 0x962d0000) - 0x6d58df00) = (int32_t)v7;
    *(char *)0xcc6a2a3 = (char)(v6 / 256);
    char * v15 = (char *)v14; // 0x2099b7
    *v15 = *v15 + (char)v14;
    *(char *)-0x1874440 = *(char *)-0x1874440 + v13;
    int64_t v16 = v14 & 0xffffffff; // 0x2099bf
    int64_t v17 = (int64_t)*(int32_t *)v16; // 0x2099c3
    int64_t v18 = 124 * v17; // 0x2099c3
    unsigned char v19 = *(char *)0x1e80ae0; // 0x2099c6
    unsigned char v20 = v19 + (char)(v18 != 0x7c00000000 * v17 >> 32); // 0x2099c6
    *(char *)0x1e80ae0 = v20;
    *v12 = *v12 - 24 + (int32_t)(v18 != 0x7c00000000 * v17 >> 32 == v20 <= v19);
    *(char *)-0x2731b227 = *(char *)-0x2731b227 + v13;
    int64_t v21 = 256 * (int64_t)(v13 - *(char *)0x1e80b1d) | 0x962d0000; // 0x2099e0
    uint32_t v22 = (int32_t)v21; // 0x2099ea
    uint32_t v23 = *(int32_t *)(v21 - 0x5d1fab0) + v22; // 0x2099ea
    bool v24 = (char)a5 + 54 + (char)v18 > 178 ? v23 + (int32_t)((char)a5 + 54 + (char)v18 > 178) <= v22 : v23 < v22; // 0x2099ea
    __asm_iretd(v16);
    int64_t v25 = unknown_ffffffffd0d3d1f7(); // 0x2099f1
    int64_t result2 = unknown_6db82700(); // 0x2099fa
    char * v26 = (char *)(result2 + 5); // 0x209a01
    *v26 = *v26 + (char)(v25 + 21 + (int64_t)v24);
    return result2;
}

// Address range: 0x209a07 - 0x209a27
int64_t function_209a07(int64_t a1) {
    // 0x209a07
    unknown_55299b0d();
    bool v1; // 0x209a07
    unknown_ffffffff81506916((v1 ? -1 : 1) + a1);
    unknown_ffffffffbca17d23();
    return function_ffffffffe82d1937();
}

// Address range: 0x209a50 - 0x209a52
int64_t function_209a50(void) {
    // 0x209a50
    int64_t result; // 0x209a50
    return result;
}

// Address range: 0x209a72 - 0x209a7c
int64_t function_209a72(void) {
    // 0x209a72
    unknown_7fbf9a7b();
    int64_t v1; // 0x209a72
    return function_209a95(v1, v1, v1, v1);
}

// Address range: 0x209a8d - 0x209a95
int64_t function_209a8d(void) {
    // 0x209a8d
    int64_t v1; // 0x209a8d
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x209a95 - 0x209ad4
int64_t function_209a95(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2; // 0x209a95
    uint64_t v3 = (v2 & -256) + a3;
    int32_t * v4 = (int32_t *)((v3 & 0xff00 | v2 & -0xff01) + 0x27b13a96); // 0x209aa4
    *v4 = *v4 + (int32_t)a1;
    *(char *)0x2a8f46b1 = *(char *)0x2a8f46b1 + (char)(v3 / 256);
    int32_t v5 = __asm_in((int16_t)a3); // 0x209ab0
    unsigned char v6 = (char)a4 % 32; // 0x209ab1
    if (v6 != 0) {
        *(char *)v1 = *(char *)&v1 >> v6;
    }
    int32_t * v7 = (int32_t *)(a1 + 10); // 0x209ab9
    *v7 = *v7 & v5;
    uint32_t v8 = v5 | 0x6d0040f8;
    return (int64_t)(*(int32_t *)(int64_t)v8 & v8);
}

// Address range: 0x209b84 - 0x209b8a
int64_t function_209b84(void) {
    // 0x209b84
    return unknown_ffffffffc727f48a();
}

// Address range: 0x2892cb - 0x289471
int64_t function_2892cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a6;
    int64_t v2; // 0x2892cb
    bool v3; // 0x2892cb
    if (true == !v3) {
        // 0x289316
        v1 = 169;
        return function_caf2a(a1, a2, a5 & 0xffffffff, a4, v2, v2);
    }
    // 0x2892ce
    v1 = (int64_t)&v1 + 16;
    return function_caf2a(a1, a6, a3, a4, v2, v2);
}

// Address range: 0x289471 - 0x289601
int64_t function_289471(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x289471
    int64_t v1; // bp-56, 0x289471
    v1 = (int64_t)&v1;
    int64_t v2; // bp-40, 0x289471
    v2 = (int64_t)&v2 + 8;
    return function_caf2a(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x289601 - 0x28977b
int64_t function_289601(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x289601
    int64_t v1; // bp-48, 0x289601
    int64_t v2 = (int64_t)&v1; // 0x28968c
    int64_t v3 = *(int64_t *)(v2 + 40); // 0x28969b
    v1 = v3;
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x28969f
    *v4 = a4;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x2896ab
    *v5 = a6;
    int64_t v6 = *v4; // 0x2896bc
    *v4 = v2 + 8;
    int64_t v7 = *(int64_t *)(v2 + 16); // 0x2896c1
    *v4 = v7;
    *v5 = a1;
    *(int64_t *)(v2 - 24) = v2;
    int64_t v8 = *v5; // 0x2896d9
    *(int64_t *)(v2 - 32) = v8;
    int64_t v9 = *v5; // 0x2896e1
    *(int64_t *)(v9 - 24) = v3;
    int64_t * v10 = (int64_t *)(v9 - 8); // 0x2896f4
    *(int64_t *)(v9 + 8) = *v10;
    *v10 = a2;
    *(int64_t *)(v9 - 16) = v6;
    int64_t * v11 = (int64_t *)v9; // 0x289722
    *(int64_t *)(v9 + 32) = v7;
    *v11 = 0xc21cfa1;
    *v10 = v8;
    *v11 = v9 + 16;
    return function_caf2a(*v11, *v10, a3, v6, a5, a6);
}

// Address range: 0x28977b - 0x2898cd
int64_t function_28977b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x28977b
    int64_t v1; // 0x28977b
    return function_caf2a(a1, a2, a3, a4, v1, v1);
}

// Address range: 0x2898cd - 0x2899d2
int64_t function_2898cd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2898cd
    int64_t v1; // 0x2898cd
    return function_caf2a(a1, a2, a3, v1, v1, v1);
}

// Address range: 0x2899d2 - 0x289b0c
int64_t function_2899d2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2899d2
    int64_t v1; // 0x2899d2
    return function_caf2a(a1, a2, v1, v1, v1, v1);
}

// Address range: 0x289b0c - 0x289c40
int64_t function_289b0c(int64_t a1) {
    // 0x289b0c
    int64_t v1; // 0x289b0c
    return function_caf2a(a1, v1, v1, v1, v1, v1);
}
