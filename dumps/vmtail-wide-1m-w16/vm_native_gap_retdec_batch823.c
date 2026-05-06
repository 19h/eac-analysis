/*
 * Targeted RetDec C for native executable gap queue batch 823.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x30321e-0x30341e rank=- name=- kind=- bytes=- uncovered=-
 *   0x30341e-0x30361e rank=- name=- kind=- bytes=- uncovered=-
 *   0x30361e-0x30381e rank=- name=- kind=- bytes=- uncovered=-
 *   0x303a1e-0x303c1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ae615-0x3ae815 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ae815-0x3aea15 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3aec15-0x3aee15 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3aee15-0x3af015 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_27ebf3d4();
int64_t function_30321e(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_30324d(int64_t a1, int64_t a2);
int64_t function_3032bb(void);
int64_t function_3032c1(void);
int64_t function_3032c9(int64_t a1, int64_t a2);
int64_t function_303317(void);
int64_t function_303354(void);
int64_t function_30335d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3033c5(int64_t a1);
int64_t function_3033d1(void);
int64_t function_3033d3(void);
int64_t function_3033e7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_30340b(void);
int64_t function_303435(void);
int64_t function_303445(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_303563(void);
int64_t function_303574(void);
int64_t function_3035da(int64_t a1);
int64_t function_3035eb(void);
int64_t function_3035f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_303631(void);
int64_t function_30367b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3036bf(void);
int64_t function_3036dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_303737(void);
int64_t function_303759(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_303774(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3037ae(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3037b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_303811(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_303a1c();
int64_t function_303a1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_303a87(void);
int64_t function_303a90(void);
int64_t function_303b19(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_303b8d(void);
int64_t function_303b90(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_303b95(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_303bc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_303bd4(int64_t a1, int64_t a2, int64_t a3, int32_t a4, int64_t a5, int64_t a6);
int64_t function_3ae615(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ae64f(void);
int64_t function_3ae651(int64_t a1);
int64_t function_3ae65b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ae67b(int64_t a1);
int64_t function_3ae6a6(void);
int64_t function_3ae6d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ae6e2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ae705(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ae707(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ae74c(int64_t a1);
int64_t function_3ae7d5(int64_t a1);
int64_t function_3ae7f6(void);
int64_t function_3ae7ff(void);
int64_t function_3ae835(void);
int64_t function_3ae941(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ae9a8(void);
int64_t function_3aec15(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3aed0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3aed3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3aed8d(int64_t a1);
int64_t function_3aeddf(int64_t a1);
int64_t function_3aee11(int64_t a1);
int64_t function_3aee17(void);
int64_t function_3aee51(int64_t a1);
int64_t function_3aee9e(void);
int64_t function_3aeedf(void);
int64_t function_3aeee4(void);
int64_t function_3aeee8(void);
int64_t function_3aeefe(void);
int64_t function_3aef14(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3aef1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3aefd6(void);
int64_t function_42d8df47();
int64_t function_58ac2d12();
int64_t function_5f036e1();
int64_t function_80246e93();
int64_t function_e350a4();
int64_t function_f79a1ed();
int64_t function_ffffffff9ab42a18();
int64_t function_ffffffff9c321c68();
int64_t function_ffffffffb1f575bf();
int64_t function_ffffffffcd5cf51f();
int64_t function_ffffffffd14a3da7();
int64_t unknown_18265fee();
int64_t unknown_1c3b923b();
int64_t unknown_216b4f5f();
int64_t unknown_265614aa();
int64_t unknown_3d3223b9();
int64_t unknown_4302a635();
int64_t unknown_6234d64c();
int64_t unknown_6dc24233();
int64_t unknown_723abde7();
int64_t unknown_7b25cb2f();
int64_t unknown_7c3afa76();
int64_t unknown_ffffffff8851b41f();
int64_t unknown_ffffffffa73223ea();
int64_t unknown_ffffffffa7893530();
int64_t unknown_ffffffffaf302f5d();
int64_t unknown_ffffffffb49c602b();
int64_t unknown_ffffffffbae1a511();
int64_t unknown_ffffffffd447049b();
int64_t unknown_ffffffffd83ef3fd();
int64_t unknown_ffffffffec41cf16();

// Address range: 0x30321e - 0x30324b
int64_t function_30321e(int64_t a1, int64_t a2, uint64_t a3) {
    char * v1 = (char *)(a2 - 0x25430a40); // 0x30321e
    bool v2; // 0x30321e
    *v1 = (char)v2 - (char)(a3 / 256) + *v1;
    int64_t v3; // 0x30321e
    uint32_t v4 = *(int32_t *)(v3 + 8 * v3); // 0x303224
    int64_t v5 = unknown_7b25cb2f(); // 0x303229
    int64_t v6; // 0x30321e
    *(char *)((v2 ? -4 : 4) + a1) = *(char *)&v6;
    int64_t v7 = (v2 ? -1 : 1) + a2; // 0x30322f
    *(int64_t *)(((v3 | v3) & 0xffffffff) - 8) = -0x2644f5f6;
    char * v8 = (char *)v5; // 0x303236
    *v8 = *v8 - (char)v5;
    int64_t v9 = 0x100000000 * v5 >> 32; // 0x303239
    *(int32_t *)-0x395c6567 = *(int32_t *)-0x395c6567 + (int32_t)v7;
    char * v10 = (char *)(v7 + 0x1e8df92); // 0x303243
    *v10 = *v10 ^ (char)(v4 / 256);
    return (int64_t)(*(int32_t *)(int64_t)v4 & (int32_t)(v9 * v9));
}

// Address range: 0x30324d - 0x303252
int64_t function_30324d(int64_t a1, int64_t a2) {
    // 0x30324d
    int64_t v1; // 0x30324d
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x3032bb - 0x3032bc
int64_t function_3032bb(void) {
    // 0x3032bb
    int64_t result; // 0x3032bb
    return result;
}

// Address range: 0x3032c1 - 0x3032c6
int64_t function_3032c1(void) {
    // 0x3032c1
    return function_ffffffffb1f575bf();
}

// Address range: 0x3032c9 - 0x3032cb
int64_t function_3032c9(int64_t a1, int64_t a2) {
    // 0x3032c9
    int64_t result; // 0x3032c9
    return result;
}

// Address range: 0x303317 - 0x30331d
int64_t function_303317(void) {
    // 0x303317
    return function_f79a1ed();
}

// Address range: 0x303354 - 0x303355
int64_t function_303354(void) {
    // 0x303354
    int64_t result; // 0x303354
    return result;
}

// Address range: 0x30335d - 0x303369
int64_t function_30335d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30335d
    int64_t v1; // 0x30335d
    bool v2; // 0x30335d
    if (v2) {
        v1 = function_303354();
    }
    int32_t * v3 = (int32_t *)(v1 + a2); // 0x303361
    *v3 = *v3 + (int32_t)a1;
    return function_80246e93();
}

// Address range: 0x3033c5 - 0x3033c6
int64_t function_3033c5(int64_t a1) {
    // 0x3033c5
    int64_t result; // 0x3033c5
    return result;
}

// Address range: 0x3033d1 - 0x3033d3
int64_t function_3033d1(void) {
    // 0x3033d1
    int64_t result; // 0x3033d1
    return result;
}

// Address range: 0x3033d3 - 0x3033d4
int64_t function_3033d3(void) {
    // 0x3033d3
    int64_t result; // 0x3033d3
    return result;
}

// Address range: 0x3033e7 - 0x3033eb
int64_t function_3033e7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3033e7
    return function_3033d3();
}

// Address range: 0x30340b - 0x303414
int64_t function_30340b(void) {
    // 0x30340b
    __asm_out(-3, (int32_t)unknown_ffffffffbae1a511());
    int64_t v1; // 0x30340b
    return function_303445(v1, v1, v1, v1);
}

// Address range: 0x303435 - 0x30343a
int64_t function_303435(void) {
    // 0x303435
    return function_ffffffff9c321c68();
}

// Address range: 0x303445 - 0x30344f
int64_t function_303445(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x303445
    int64_t result; // 0x303445
    *(int32_t *)a4 = (int32_t)result + (int32_t)a3;
    __asm_out_134((int16_t)a3, (int32_t)result);
    bool v1; // 0x303445
    int64_t v2 = v1 ? -4 : 4; // 0x30344d
    *(int32_t *)(v2 + a1) = *(int32_t *)(v2 + a2);
    return result;
}

// Address range: 0x303563 - 0x303568
int64_t function_303563(void) {
    // 0x303563
    return function_e350a4();
}

// Address range: 0x303574 - 0x303575
int64_t function_303574(void) {
    // 0x303574
    int64_t result; // 0x303574
    return result;
}

// Address range: 0x3035da - 0x3035e7
int64_t function_3035da(int64_t a1) {
    // 0x3035da
    return unknown_723abde7(a1);
}

// Address range: 0x3035eb - 0x3035ec
int64_t function_3035eb(void) {
    // 0x3035eb
    int64_t result; // 0x3035eb
    return result;
}

// Address range: 0x3035f8 - 0x303603
int64_t function_3035f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3035f8
    int64_t v1; // 0x3035f8
    int32_t * v2 = (int32_t *)(v1 + 0x750b3a0a); // 0x3035f8
    *v2 = *v2 + (int32_t)a4;
    return function_3035eb();
}

// Address range: 0x303631 - 0x303636
int64_t function_303631(void) {
    // 0x303631
    return function_5f036e1();
}

// Address range: 0x30367b - 0x30368f
int64_t function_30367b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30367b
    int64_t result; // 0x30367b
    return result;
}

// Address range: 0x3036bf - 0x3036c4
int64_t function_3036bf(void) {
    // 0x3036bf
    return function_ffffffffcd5cf51f();
}

// Address range: 0x3036dc - 0x303701
int64_t function_3036dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3036dc
    int64_t v1; // 0x3036dc
    int32_t * v2 = (int32_t *)(v1 - 0x6ffe62d6); // 0x3036dc
    *v2 = *v2 + (int32_t)a3;
    *(char *)a1 = __asm_insb((int16_t)a3);
    unknown_18265fee();
    __asm_in_135(21);
    int64_t v3 = __asm_int1(); // 0x3036f0
    char * v4 = (char *)(a4 & -256 | 141); // 0x3036f3
    *v4 = *v4 | (char)v3;
    return function_58ac2d12();
}

// Address range: 0x303737 - 0x30373a
int64_t function_303737(void) {
    // 0x303737
    int64_t result; // 0x303737
    return result;
}

// Address range: 0x303759 - 0x303762
int64_t function_303759(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x303759
    return function_42d8df47();
}

// Address range: 0x303774 - 0x303775
int64_t function_303774(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x303774
    int64_t result; // 0x303774
    return result;
}

// Address range: 0x3037ae - 0x3037b6
int64_t function_3037ae(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3037ae
    int64_t result; // 0x3037ae
    int64_t v1 = result;
    *(char *)v1 = (char)v1 - (char)a3;
    return result;
}

// Address range: 0x3037b6 - 0x3037be
int64_t function_3037b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result; // 0x3037b6
    if (a4 == 0) {
        result = function_303774(a1, a2, a3, 0);
    }
    // 0x3037b8
    return result;
}

// Address range: 0x303811 - 0x303818
int64_t function_303811(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x303811
    int64_t result; // 0x303811
    return result;
}

// Address range: 0x303a1e - 0x303a4d
int64_t function_303a1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x303a1e
    __asm_in((int16_t)a3);
    int64_t v1 = a4 - 1; // 0x303a2b
    int64_t result = unknown_ffffffffa7893530(); // 0x303a2b
    int64_t v2; // 0x303a1e
    if (v1 != 0 && (v2 & 245) != 0) {
        result = function_303a1c();
    }
    // 0x303a2e
    *(int32_t *)0x4b2d01e8 = *(int32_t *)0x4b2d01e8 + (int32_t)result;
    *(char *)0x3b0087f31501e803 = (char)result;
    int32_t * v3 = (int32_t *)(a1 + 2); // 0x303a44
    *v3 = *v3 + (int32_t)a1;
    *(char *)0x633b74fd = (char)v1;
    return result;
}

// Address range: 0x303a87 - 0x303a8a
int64_t function_303a87(void) {
    // 0x303a87
    int64_t result; // 0x303a87
    return result;
}

// Address range: 0x303a90 - 0x303a92
int64_t function_303a90(void) {
    // 0x303a90
    int64_t result; // 0x303a90
    return result;
}

// Address range: 0x303b19 - 0x303b77
int64_t function_303b19(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x303b19
    int64_t v1; // 0x303b19
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)v1;
    uint32_t v4 = v3 + (int32_t)v1; // 0x303b19
    *(int32_t *)v1 = v4;
    uint32_t v5 = (int32_t)v1; // 0x303b1e
    *(int32_t *)0x1e8a38e0dabf1a1 = v5 - 0x4f9dba18 + (int32_t)(((int64_t)(v4 < v3) - a4 / 256 + v2) % 256 | v2 & 0xffffff00);
    int32_t * v6 = (int32_t *)(4 * a2 - 0x6e83f7f0 + v1); // 0x303b3a
    *v6 = *v6 + (int32_t)v1;
    unknown_ffffffffa73223ea();
    float80_t v7; // 0x303b19
    *(float64_t *)0x12da0ee3 = (float64_t)v7;
    int64_t v8; // 0x303b19
    *(int32_t *)a4 = *(int32_t *)&v8 + (int32_t)a4;
    bool v9; // 0x303b19
    int64_t v10 = v9 ? -4 : 4; // 0x303b55
    int64_t v11 = v10 + a2; // 0x303b55
    int64_t v12; // 0x303b19
    *(char *)a1 = (char)*(int32_t *)&v12;
    int64_t v13 = (v9 ? -1 : 1) + a1; // 0x303b58
    int64_t v14 = unknown_216b4f5f(v13, v11, a3 & -256 | 2); // 0x303b59
    *(int32_t *)v13 = *(int32_t *)v11;
    uint32_t v15 = *(int32_t *)(4 * v1 + 0x428f39fb + v10 + v11); // 0x303b5f
    int64_t v16 = v15 > v5 ? (int64_t)((int32_t)&g1 + 1) : (int64_t)(int32_t)&g1; // 0x303b66
    *(char *)(8 * v1 + 0x41093cde) = -1;
    return v14 - v16 & 0xffffffff;
}

// Address range: 0x303b8d - 0x303b8e
int64_t function_303b8d(void) {
    // 0x303b8d
    int64_t result; // 0x303b8d
    return result;
}

// Address range: 0x303b90 - 0x303b94
int64_t function_303b90(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x303b90
    int64_t v1; // 0x303b90
    int64_t result = function_303bd4(a1, a2, a3, (int32_t)a4 - (int32_t)v1, v1, (int64_t)&g3); // 0x303b92
    return result;
}

// Address range: 0x303b95 - 0x303bbf
int64_t function_303b95(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int64_t v2 = unknown_ffffffffd447049b(); // 0x303b95
    unsigned char v3 = (char)a4 % 32; // 0x303b9a
    if (v3 != 0) {
        char * v4 = (char *)(v2 - 0x4f8dff87); // 0x303b9a
        unsigned char v5 = *v4; // 0x303b9a
        bool v6; // 0x303b95
        *v4 = v5 >> v3 | (char)v6 << 8 - v3 | (char)((int16_t)v5 << (int16_t)(9 - v3));
    }
    unknown_265614aa();
    int64_t v7; // 0x303b95
    char * v8 = (char *)(a3 + 35 + 4 * v7); // 0x303ba9
    *v8 = -1 - *v8;
    unknown_3d3223b9();
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a2;
    return function_ffffffffd14a3da7();
}

// Address range: 0x303bc0 - 0x303bc9
int64_t function_303bc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x303bc0
    *(int32_t *)a4 = 0;
    return function_ffffffff9ab42a18();
}

// Address range: 0x303bd4 - 0x303c0a
int64_t function_303bd4(int64_t a1, int64_t a2, int64_t a3, int32_t a4, int64_t a5, int64_t a6) {
    char v1 = *(char *)0x54e9f2dc; // 0x303bd5
    int64_t v2; // 0x303bd4
    char v3 = (uint64_t)v2 / 256; // 0x303bd5
    char v4 = v1 + v3; // 0x303bd5
    *(char *)0x54e9f2dc = v4;
    g2 = 0;
    int64_t v5; // 0x303bd4
    if (((v4 ^ v1) & (v4 ^ v3)) < 0) {
        v5 = function_303b8d();
    }
    // 0x303bf5
    if ((int32_t)v5 > 0xbd41c5ba) {
        // 0x303c71
        return v5 + 0x42be3a45 & 0xffffffff;
    }
    int32_t * v6 = (int32_t *)(a5 + 0x13d00f7); // 0x303c02
    *v6 = *v6 / 2;
    return 0x8c8ab94e;
}

// Address range: 0x3ae615 - 0x3ae62b
int64_t function_3ae615(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x3ae615
    int32_t * v3 = (int32_t *)(v2 + 1); // 0x3ae615
    *v3 = *v3 + (int32_t)a4;
    char * v4 = (char *)(v1 - 0x2f54d344); // 0x3ae61b
    *v4 = *v4 + (char)(v2 / 256);
    char * v5 = (char *)(v2 - 73); // 0x3ae621
    *v5 = *v5 + (char)a4;
    int64_t v6 = v2 & 0xffffffff; // 0x3ae624
    int64_t result = unknown_ffffffffb49c602b(v6); // 0x3ae625
    *(int32_t *)v6 = *(int32_t *)&v1;
    return result;
}

// Address range: 0x3ae64f - 0x3ae651
int64_t function_3ae64f(void) {
    // 0x3ae64f
    int64_t v1; // 0x3ae64f
    return function_3ae65b(v1, v1, v1, v1);
}

// Address range: 0x3ae651 - 0x3ae65b
int64_t function_3ae651(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 0x347ec092); // 0x3ae653
    uint32_t v2 = *v1; // 0x3ae653
    int64_t result; // 0x3ae651
    uint32_t v3 = v2 + (int32_t)result; // 0x3ae653
    *v1 = v3;
    int64_t v4; // 0x3ae651
    char v5 = *(char *)&v4; // 0x3ae659
    *(char *)v4 = v5 - (char)(result / 256) + (char)(v3 < v2);
    return result;
}

// Address range: 0x3ae65b - 0x3ae675
int64_t function_3ae65b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ae65b
    int64_t v1; // 0x3ae65b
    __asm_out_136(-24, (char)v1 + (char)a2);
    __asm_sti();
    return unknown_7c3afa76();
}

// Address range: 0x3ae67b - 0x3ae67c
int64_t function_3ae67b(int64_t a1) {
    // 0x3ae67b
    int64_t result; // 0x3ae67b
    return result;
}

// Address range: 0x3ae6a6 - 0x3ae6a7
int64_t function_3ae6a6(void) {
    // 0x3ae6a6
    int64_t result; // 0x3ae6a6
    return result;
}

// Address range: 0x3ae6d6 - 0x3ae6e1
int64_t function_3ae6d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ae6d6
    int64_t result; // 0x3ae6d6
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x3ae6e2 - 0x3ae704
int64_t function_3ae6e2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ae6e2
    int64_t v1; // 0x3ae6e2
    char v2 = v1; // 0x3ae6e2
    __asm_out_137((int16_t)a3, v2);
    *(char *)a1 = v2;
    int32_t * v3 = (int32_t *)(v1 + 8 * v1); // 0x3ae6e4
    int32_t v4 = a2; // 0x3ae6e4
    int32_t * v5 = (int32_t *)(a3 + 0x23aa7bc1); // 0x3ae6e7
    char * v6 = (char *)(v1 - 0x552251bc); // 0x3ae6ed
    int64_t v7; // 0x3ae6e2
    int64_t v8 = v7;
    *v3 = *v3 | v4;
    *v5 = *v5 + v4;
    int64_t v9; // 0x3ae6e2
    char v10 = *v6 | (char)(v9 / 256); // 0x3ae6ed
    *v6 = v10;
    int64_t v11 = v9 - 1; // 0x3ae6f4
    v7 = v8 - 8;
    while (v11 != 0 == v10 == 0) {
        // 0x3ae6e4
        v8 = v7;
        *v3 = *v3 | v4;
        *v5 = *v5 + v4;
        v10 = *v6 | (char)(v11 / 256);
        *v6 = v10;
        v11--;
        v7 = v8 - 8;
    }
    // 0x3ae6f6
    *(int64_t *)(v8 - 16) = v11;
    int64_t v12 = unknown_ffffffffd83ef3fd(); // 0x3ae6f7
    __asm_int(-66);
    bool v13; // 0x3ae6e2
    return function_3ae707((v13 ? -1 : 1) + a1, a2, a3 - 256 * v12 & 0xff00 | a3 & -0xff01);
}

// Address range: 0x3ae705 - 0x3ae707
int64_t function_3ae705(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ae705
    int64_t result; // 0x3ae705
    return result;
}

// Address range: 0x3ae707 - 0x3ae71d
int64_t function_3ae707(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 0x3bd210e9); // 0x3ae70f
    int32_t v2 = *v1 + (int32_t)a3; // 0x3ae70f
    unsigned char v3 = llvm_ctpop_i8((char)v2); // 0x3ae70f
    *v1 = v2;
    int64_t result; // 0x3ae707
    if (v3 % 2 != 0) {
        result = function_3ae6a6();
    }
    // 0x3ae719
    return result;
}

// Address range: 0x3ae74c - 0x3ae755
int64_t function_3ae74c(int64_t a1) {
    // 0x3ae74c
    int64_t result; // 0x3ae74c
    char * v1 = (char *)(result - 0x70313cdd); // 0x3ae74c
    *v1 = *v1 - (char)result;
    return result;
}

// Address range: 0x3ae7d5 - 0x3ae7da
int64_t function_3ae7d5(int64_t a1) {
    // 0x3ae7d5
    int64_t v1; // 0x3ae7d5
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x3ae7f6 - 0x3ae7f8
int64_t function_3ae7f6(void) {
    // 0x3ae7f6
    int64_t v1; // 0x3ae7f6
    bool v2; // 0x3ae7f6
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x3ae7ff - 0x3ae800
int64_t function_3ae7ff(void) {
    // 0x3ae7ff
    int64_t result; // 0x3ae7ff
    return result;
}

// Address range: 0x3ae835 - 0x3ae839
int64_t function_3ae835(void) {
    // 0x3ae835
    int64_t result; // 0x3ae835
    return result;
}

// Address range: 0x3ae941 - 0x3ae94e
int64_t function_3ae941(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ae941
    int64_t result; // 0x3ae941
    int32_t * v1 = (int32_t *)(result + 8 * result); // 0x3ae948
    *v1 = *v1 | (int32_t)a4;
    int32_t * v2 = (int32_t *)(a4 - 14); // 0x3ae94b
    *v2 = *v2 + (int32_t)a2;
    return result;
}

// Address range: 0x3ae9a8 - 0x3ae9ad
int64_t function_3ae9a8(void) {
    // 0x3ae9a8
    return function_27ebf3d4();
}

// Address range: 0x3aec15 - 0x3aecc2
int64_t function_3aec15(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3aec15
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x3aec15
    uint32_t v2 = (int32_t)v1 >> 31; // 0x3aec16
    int64_t v3 = __asm_sti(); // 0x3aec17
    *(char *)v3 = (char)v3 + (char)v1;
    __asm_in_133((int16_t)((v1 + (int64_t)v2) % 256 | (int64_t)(v2 & 0xff00)));
    return unknown_6dc24233() | 58;
}

// Address range: 0x3aed0f - 0x3aed3c
int64_t function_3aed0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(unknown_ffffffffec41cf16() - 57); // 0x3aed15
    int64_t v2; // 0x3aed0f
    *v1 = *v1 + (int32_t)v2;
    unknown_ffffffff8851b41f();
    char * v3 = (char *)(a1 + 0x62d53ff2 + 4 * v2); // 0x3aed28
    *v3 = *v3 ^ (char)(v2 / 256);
    char * v4 = (char *)(v2 + 0x80003b); // 0x3aed2f
    *v4 = *v4 ^ (char)v2;
    int64_t result = unknown_1c3b923b(); // 0x3aed35
    char * v5 = (char *)result; // 0x3aed3a
    *v5 = *v5 + (char)a3;
    return result;
}

// Address range: 0x3aed3c - 0x3aed6a
int64_t function_3aed3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3aed3c
    int64_t v1; // 0x3aed3c
    int64_t v2 = v1;
    *(char *)v2 = (char)(v2 | a3);
    int64_t * v3 = (int64_t *)(a4 + 0x1c9f6beb); // 0x3aed3e
    *v3 = *v3 ^ a6;
    int64_t v4 = unknown_6234d64c(); // 0x3aed46
    char * v5 = (char *)(a4 + 0x60ef4eab); // 0x3aed50
    *v5 = (char)v4 + 76 + *v5;
    int64_t result = unknown_ffffffffaf302f5d(); // 0x3aed57
    *(int32_t *)result = (int32_t)result;
    *(int32_t *)-0x75b010ae = *(int32_t *)-0x75b010ae - (int32_t)v1;
    return result;
}

// Address range: 0x3aed8d - 0x3aed99
int64_t function_3aed8d(int64_t a1) {
    // 0x3aed8d
    int64_t result; // 0x3aed8d
    *(char *)-0xcfe1754b8c5600d = (char)result;
    return result;
}

// Address range: 0x3aeddf - 0x3aede2
int64_t function_3aeddf(int64_t a1) {
    // 0x3aeddf
    int64_t result; // 0x3aeddf
    return result;
}

// Address range: 0x3aee11 - 0x3aee14
int64_t function_3aee11(int64_t a1) {
    // 0x3aee11
    int64_t result; // 0x3aee11
    return result;
}

// Address range: 0x3aee17 - 0x3aee1b
int64_t function_3aee17(void) {
    // 0x3aee17
    int64_t result; // 0x3aee17
    return result;
}

// Address range: 0x3aee51 - 0x3aee55
int64_t function_3aee51(int64_t a1) {
    // 0x3aee51
    int64_t result; // 0x3aee51
    return result;
}

// Address range: 0x3aee9e - 0x3aeea0
int64_t function_3aee9e(void) {
    // 0x3aee9e
    int64_t result; // 0x3aee9e
    return result;
}

// Address range: 0x3aeedf - 0x3aeee0
int64_t function_3aeedf(void) {
    // 0x3aeedf
    int64_t result; // 0x3aeedf
    return result;
}

// Address range: 0x3aeee4 - 0x3aeee5
int64_t function_3aeee4(void) {
    // 0x3aeee4
    int64_t result; // 0x3aeee4
    return result;
}

// Address range: 0x3aeee8 - 0x3aeee9
int64_t function_3aeee8(void) {
    // 0x3aeee8
    int64_t result; // 0x3aeee8
    return result;
}

// Address range: 0x3aeefe - 0x3aeeff
int64_t function_3aeefe(void) {
    // 0x3aeefe
    int64_t result; // 0x3aeefe
    return result;
}

// Address range: 0x3aef14 - 0x3aef1c
int64_t function_3aef14(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3aef14
    return function_3aeee8();
}

// Address range: 0x3aef1c - 0x3aefb2
int64_t function_3aef1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3aef1c
    int64_t v1; // 0x3aef1c
    char v2 = (uint64_t)v1 / 256; // 0x3aef1e
    bool v3; // 0x3aef1c
    *(char *)a1 = v2 + (char)a1 + (char)v3;
    *(char *)0x7310e827 = *(char *)0x7310e827 + v2;
    int64_t v4 = unknown_4302a635(); // 0x3aef2f
    __asm_out_136(-106, (char)v4);
    __asm_rcl(*(int32_t *)(v4 + 79));
    uint32_t v5 = (int32_t)v4; // 0x3aef3a
    int64_t v6; // 0x3aef1c
    int64_t v7; // 0x3aef1c
    if (v5 < 0x1f100001) {
        // 0x3aef41
        v6 = function_3aeedf() & 0xffffffff;
        v7 = a4 & 0xffffffff;
    } else {
        int64_t v8 = v4 & 0xffffffff; // 0x3aef46
        v6 = v8;
        v7 = a4 & 0xffffffff;
        if (v5 >= 0x1f100001) {
            v6 = v8;
            v7 = function_3aeefe();
        }
    }
    int64_t v9 = v7;
    if (v5 == 0x1f100001 || v6 == 1) {
        // 0x3aef4c
        *(char *)-0x15886ba7 = *(char *)-0x15886ba7 + v2;
        return (v9 + 97) % 256 | v9 & -256;
    }
    // 0x3aefab
    return v9 + (v5 < 0x1f100001 ? 0x5d013d01 : 0x5d013d00) & 0xffffffff;
}

// Address range: 0x3aefd6 - 0x3aefd7
int64_t function_3aefd6(void) {
    // 0x3aefd6
    int64_t result; // 0x3aefd6
    return result;
}
