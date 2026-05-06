/*
 * Targeted RetDec C for native executable gap queue batch 888.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x38eca0-0x38eea0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38eea0-0x38f0a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38f0a0-0x38f2a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38f2a0-0x38f4a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3955e1-0x3957e1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3957e1-0x3959e1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3959e1-0x395be1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x395de1-0x395fe1 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_21c3f35a();
int64_t function_38ec38();
int64_t function_38eca0(void);
int64_t function_38ecac(int64_t a1, int64_t a2);
int64_t function_38ecfe(int64_t a1, int64_t a2, int64_t a3);
int64_t function_38ed0a(void);
int64_t function_38ed55(void);
int64_t function_38ed65(int64_t a1);
int64_t function_38edac(int64_t a1);
int64_t function_38edbb(void);
int64_t function_38ee18(void);
int64_t function_38ee70(void);
int64_t function_38eeba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38ef55(void);
int64_t function_38efee(void);
int64_t function_38f00f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_38f0af(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38f0bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38f108(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38f12d(int64_t a1);
int64_t function_38f131(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38f19c(int64_t a1, int64_t a2);
int64_t function_38f1d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38f204(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38f25c(void);
int64_t function_38f29d(int64_t a1);
int64_t function_38f311(int64_t a1);
int64_t function_38f358(int64_t a1, int64_t a2, int64_t a3);
int64_t function_38f3b8(int64_t a1);
int64_t function_38f3cc(void);
int64_t function_38f409(void);
int64_t function_38f423(void);
int64_t function_38f466(void);
int64_t function_38f47b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_38f490(int64_t a1);
int64_t function_3955e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3956fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39585c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3959ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_395de1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_395f8c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_395fb1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_cf3c7();
int64_t function_ffffffffc09f7a3f();
int64_t function_fffffffffaa992c7();
int64_t unknown_56bf233e();
int64_t unknown_7a46d8c5();
int64_t unknown_ffffffffe8de6792();
int64_t unknown_ffffffffed5b10ba();

// Address range: 0x38eca0 - 0x38ecab
int64_t function_38eca0(void) {
    char v1 = *(char *)0x917e3a7; // 0x38eca0
    int64_t v2; // 0x38eca0
    *(char *)0x917e3a7 = v1 + (char)((uint64_t)v2 / 256);
    return v2 + 0xe7feb5ca & 0xffffffff;
}

// Address range: 0x38ecac - 0x38ecaf
int64_t function_38ecac(int64_t a1, int64_t a2) {
    // 0x38ecac
    bool v1; // 0x38ecac
    int64_t v2 = v1 ? -1 : 1; // 0x38ecac
    return function_38ec38(v2 + a1, v2 + a2);
}

// Address range: 0x38ecfe - 0x38ed00
int64_t function_38ecfe(int64_t a1, int64_t a2, int64_t a3) {
    // 0x38ecfe
    int64_t result; // 0x38ecfe
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x38ed0a - 0x38ed0b
int64_t function_38ed0a(void) {
    // 0x38ed0a
    int64_t result; // 0x38ed0a
    return result;
}

// Address range: 0x38ed55 - 0x38ed56
int64_t function_38ed55(void) {
    // 0x38ed55
    int64_t result; // 0x38ed55
    return result;
}

// Address range: 0x38ed65 - 0x38ed97
int64_t function_38ed65(int64_t a1) {
    // 0x38ed65
    bool v1; // 0x38ed65
    if (v1) {
        function_38ed55();
    }
    int64_t v2 = (v1 ? -4 : 4) + a1; // 0x38ed8b
    int64_t result = unknown_ffffffffe8de6792(v2); // 0x38ed8c
    *(int32_t *)0x7c3cd598 = *(int32_t *)0x7c3cd598 + (int32_t)v2;
    return result;
}

// Address range: 0x38edac - 0x38edb4
int64_t function_38edac(int64_t a1) {
    // 0x38edac
    int64_t v1; // 0x38edac
    return v1 & 0xffffffff ^ 0x25ba951c;
}

// Address range: 0x38edbb - 0x38edbe
int64_t function_38edbb(void) {
    // 0x38edbb
    int64_t result; // 0x38edbb
    return result;
}

// Address range: 0x38ee18 - 0x38ee1b
int64_t function_38ee18(void) {
    // 0x38ee18
    int64_t result; // 0x38ee18
    return result;
}

// Address range: 0x38ee70 - 0x38ee71
int64_t function_38ee70(void) {
    // 0x38ee70
    int64_t result; // 0x38ee70
    return result;
}

// Address range: 0x38eeba - 0x38eee5
int64_t function_38eeba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 0x5fffec10); // 0x38eec2
    *v1 = *v1 + (int32_t)a1;
    int64_t v2; // 0x38eeba
    *(int64_t *)0xe8001341 = v2 / 256 % 256 | a3;
    *(int32_t *)a1 = (int32_t)v2;
    return 0x19de967;
}

// Address range: 0x38ef55 - 0x38ef56
int64_t function_38ef55(void) {
    // 0x38ef55
    int64_t result; // 0x38ef55
    return result;
}

// Address range: 0x38efee - 0x38eff8
int64_t function_38efee(void) {
    // 0x38efee
    return function_21c3f35a();
}

// Address range: 0x38f00f - 0x38f029
int64_t function_38f00f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x38f00f
    int64_t v1; // 0x38f00f
    bool v2; // 0x38f00f
    *(char *)a3 = (char)v1 + (char)a4 + (char)v2;
    int64_t v3; // 0x38f00f
    *(char *)v3 = *(char *)&v3 & (char)(a4 / 256);
    return v3 & -256 | (int64_t)__asm_in_133(-95);
}

// Address range: 0x38f0af - 0x38f0bc
int64_t function_38f0af(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38f0af
    int64_t v1; // 0x38f0af
    __asm_outsb((int16_t)a4, (char)v1);
    return unknown_ffffffffed5b10ba();
}

// Address range: 0x38f0bf - 0x38f0df
int64_t function_38f0bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38f0bf
    int64_t v1; // 0x38f0bf
    uint64_t v2 = v1;
    *(char *)a3 = ((char)unknown_7a46d8c5() ^ -22) + (char)v1;
    char * v3 = (char *)(v2 - 0x179ebdc1); // 0x38f0ce
    *v3 = *v3 | (char)(v2 / 256);
    int32_t * v4 = (int32_t *)(a4 - 0x7a62c5f9); // 0x38f0d4
    *v4 = *v4 + (int32_t)a1;
    return function_fffffffffaa992c7();
}

// Address range: 0x38f108 - 0x38f116
int64_t function_38f108(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38f108
    bool v1; // 0x38f108
    int32_t * v2 = (int32_t *)(a1 + 0x390b17 + 2 * a2 + (v1 ? -1 : 1)); // 0x38f10b
    int64_t v3; // 0x38f108
    *v2 = *v2 + (int32_t)v3;
    int64_t result; // 0x38f108
    *(char *)result = *(char *)&result - 41;
    return result;
}

// Address range: 0x38f12d - 0x38f12e
int64_t function_38f12d(int64_t a1) {
    // 0x38f12d
    int64_t result; // 0x38f12d
    return result;
}

// Address range: 0x38f131 - 0x38f14b
int64_t function_38f131(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = unknown_56bf233e(); // 0x38f138
    int64_t v2; // 0x38f131
    int64_t v3 = (char)v2 > (char)v1 ? 0x17229758 : 0x17229759; // 0x38f143
    return (v1 % 256 | a4) + v1 + v3 & 0xffffffff;
}

// Address range: 0x38f19c - 0x38f1c4
int64_t function_38f19c(int64_t a1, int64_t a2) {
    // 0x38f19c
    int64_t result; // 0x38f19c
    return result;
}

// Address range: 0x38f1d6 - 0x38f1fe
int64_t function_38f1d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3; // 0x38f1d6
    int32_t v4 = v3; // 0x38f1de
    uint64_t result = (int64_t)(__asm_in_134((int16_t)a3) + v4); // 0x38f1de
    int32_t * v5 = (int32_t *)(a4 + 0x3788382e); // 0x38f1e0
    int32_t v6 = *v5; // 0x38f1e0
    int32_t v7 = a4; // 0x38f1e0
    int32_t v8 = v6 + v7; // 0x38f1e0
    *v5 = v8;
    if (((v8 ^ v6) & (v8 ^ v7)) < 0) {
        // 0x38f201
        return result;
    }
    int32_t * v9 = (int32_t *)(v3 - 84); // 0x38f1ef
    uint32_t v10 = *v9; // 0x38f1ef
    uint32_t v11 = v10 + v7; // 0x38f1ef
    *v9 = v11;
    int32_t v12 = *(int32_t *)&v2; // 0x38f1f8
    *(int32_t *)v2 = v12 + (int32_t)(v11 < v10) + (int32_t)v1;
    int64_t v13 = (int64_t)*(char *)(result % 256 + v3); // 0x38f1fa
    *(int32_t *)v1 = *(int32_t *)&v1 + v4;
    return v13 * v13 % 0x10000 | result & 0xffff0000;
}

// Address range: 0x38f204 - 0x38f23f
int64_t function_38f204(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int32_t v2 = (int64_t)&v1; // 0x38f208
    *(int32_t *)-0x176441ea = *(int32_t *)-0x176441ea + (int32_t)a1;
    int32_t * v3 = (int32_t *)(a1 + 0x1ecc10ed); // 0x38f215
    *v3 = *v3 + (int32_t)a2;
    int64_t v4; // 0x38f204
    uint32_t v5 = 2 * (int32_t)v4 + v2 & v2; // 0x38f223
    int64_t v6 = v5; // 0x38f223
    char * v7 = (char *)v6; // 0x38f22f
    *v7 = *v7 + (char)v5;
    int64_t v8 = v6 & 0xffff00f8 | (int64_t)&g1; // 0x38f231
    char * v9 = (char *)v8; // 0x38f233
    *v9 = *v9 + (char)v8;
    return function_ffffffffc09f7a3f();
}

// Address range: 0x38f25c - 0x38f25f
int64_t function_38f25c(void) {
    // 0x38f25c
    int64_t result; // 0x38f25c
    return result;
}

// Address range: 0x38f29d - 0x38f29f
int64_t function_38f29d(int64_t a1) {
    // 0x38f29d
    int64_t result; // 0x38f29d
    return result;
}

// Address range: 0x38f311 - 0x38f312
int64_t function_38f311(int64_t a1) {
    // 0x38f311
    int64_t result; // 0x38f311
    return result;
}

// Address range: 0x38f358 - 0x38f361
int64_t function_38f358(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 12); // 0x38f358
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x38f358
    *(char *)result = *(char *)&result - 22;
    return result;
}

// Address range: 0x38f3b8 - 0x38f3b9
int64_t function_38f3b8(int64_t a1) {
    // 0x38f3b8
    int64_t result; // 0x38f3b8
    return result;
}

// Address range: 0x38f3cc - 0x38f3d3
int64_t function_38f3cc(void) {
    // 0x38f3cc
    int64_t result; // 0x38f3cc
    return result;
}

// Address range: 0x38f409 - 0x38f40c
int64_t function_38f409(void) {
    // 0x38f409
    int64_t result; // 0x38f409
    return result;
}

// Address range: 0x38f423 - 0x38f425
int64_t function_38f423(void) {
    // 0x38f423
    int64_t v1; // 0x38f423
    return function_38f490(v1);
}

// Address range: 0x38f466 - 0x38f467
int64_t function_38f466(void) {
    // 0x38f466
    int64_t result; // 0x38f466
    return result;
}

// Address range: 0x38f47b - 0x38f485
int64_t function_38f47b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 118); // 0x38f47b
    *v1 = *v1 + (int32_t)a3;
    int64_t v2; // 0x38f47b
    unsigned char v3 = *(char *)&v2; // 0x38f47e
    *(char *)a4 = v3 / 128 | 2 * v3;
    int64_t v4; // 0x38f47b
    __asm_in_134((int16_t)(a3 & 0xff00 & v4 | a3 % 256));
    return function_38f466();
}

// Address range: 0x38f490 - 0x38f49d
int64_t function_38f490(int64_t a1) {
    // 0x38f490
    *(char *)0x515be598 = *(char *)0x515be598 + (char)a1;
    int64_t result; // 0x38f490
    return result;
}

// Address range: 0x3955e1 - 0x3956fb
int64_t function_3955e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)((a2 & 0xffffff00 | (int64_t)__asm_in((int16_t)a3)) - 119); // 0x3955e8
    *v1 = *v1 | (char)a4;
    int64_t v2; // bp-8, 0x3955e1
    int64_t v3 = (int64_t)&v2; // 0x395697
    v2 = a5;
    *(int64_t *)(v3 + 8) = v3 + 24;
    int64_t v4; // 0x3955e1
    return function_cf3c7(a1, 0x83484fff, a3, a5, v4, v4, 0x22af3fbf, v4);
}

// Address range: 0x3956fb - 0x39585c
int64_t function_3956fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3956fb
    int64_t v1; // 0x3956fb
    bool v2; // 0x3956fb
    return function_cf3c7(a1, a2, a3, a4, a5, v1, 0x6f75a1c4, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x39585c - 0x3959ca
int64_t function_39585c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x39585c
    return function_cf3c7(a1, a2, a3, a4, a5, a6, a4, (int64_t)&g2);
}

// Address range: 0x3959ca - 0x395b1c
int64_t function_3959ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3959ca
    bool v1; // 0x3959ca
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x3959ca
    int64_t v3; // bp-64, 0x3959ca
    int64_t v4 = (int64_t)&v3; // 0x395ab1
    v3 = v2;
    int64_t * v5 = (int64_t *)(v4 + 16); // 0x395aca
    *v5 = v2;
    int64_t * v6 = (int64_t *)(v4 - 8); // 0x395adb
    *v6 = 0x354aa1e;
    *(int64_t *)(v4 + 32) = v3;
    int64_t * v7 = (int64_t *)(v4 + 8); // 0x395ae2
    int64_t v8 = *v7; // 0x395ae2
    v3 = v8;
    *v6 = v8;
    int64_t v9 = *v5; // 0x395afb
    *v7 = v9;
    v3 = v9;
    int64_t v10; // 0x3959ca
    return function_cf3c7(a1, a2, a3, a4, a5, v10, 0xd056a9b, (int64_t)&g2);
}

// Address range: 0x395de1 - 0x395f41
int64_t function_395de1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x392cd6; // 0x395e29
    int64_t result = function_cf3c7(a1, a2, a3, a4, a5, a6, (int64_t)&v1, (int64_t)&g2); // 0x395f3c
    return result;
}

// Address range: 0x395f8c - 0x395fa1
int64_t function_395f8c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(8 * a2 + 0x4c7482f + a4); // 0x395f8c
    *v1 = *v1 - 0x392f0024;
    int64_t v2; // 0x395f8c
    char * v3 = (char *)(v2 - 125); // 0x395f97
    *v3 = *v3 + (char)a4;
    int64_t result = v2 & -256 | (int64_t)__asm_in((int16_t)a3); // 0x395f9a
    char * v4 = (char *)(result + 12); // 0x395f9b
    *v4 = *v4 | (char)(a4 / 256);
    return result;
}

// Address range: 0x395fb1 - 0x395fcd
int64_t function_395fb1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x395fb1
    int64_t v1; // 0x395fb1
    char v2 = (char)v1 & -38; // 0x395fb1
    int64_t result = v1 & -256 | (int64_t)v2; // 0x395fb1
    int32_t v3 = result; // 0x395fb9
    __asm_out((int16_t)a3, v3);
    if (v2 < 0) {
        // 0x395fe6
        return result;
    }
    char * v4 = (char *)(a1 + 104); // 0x395fc2
    *v4 = *v4 | (char)v1;
    __asm_out_135(-41, v3);
    return result;
}
