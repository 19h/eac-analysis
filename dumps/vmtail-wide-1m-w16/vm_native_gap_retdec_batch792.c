/*
 * Targeted RetDec C for native executable gap queue batch 792.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x12bcdc-0x12bedc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12bedc-0x12c0dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12c0dc-0x12c2dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12c2dc-0x12c4dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12c4dc-0x12c6dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x38dca0-0x38dea0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38dea0-0x38e0a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38e0a0-0x38e2a0 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_12bcdc(int64_t a1, int64_t a2);
int64_t function_12bce3(void);
int64_t function_12bcf1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12bd5e(void);
int64_t function_12bd61(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12bd83(void);
int64_t function_12bddd(void);
int64_t function_12bdf5(void);
int64_t function_12be0b(void);
int64_t function_12be0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12be29(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12bebb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12bf0f(void);
int64_t function_12bf2f(void);
int64_t function_12bf37(void);
int64_t function_12bf75(void);
int64_t function_12bf9f(int64_t a1);
int64_t function_12bfc0(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_12bfe8(void);
int64_t function_12c0d8(void);
int64_t function_12c0e3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_12c174(void);
int64_t function_12c18a(int64_t a1);
int64_t function_12c196(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12c1a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12c1c8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12c1cb(void);
int64_t function_12c207(void);
int64_t function_12c236(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12c2ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_12c3c5(int64_t a1);
int64_t function_12c3c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12c44b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12c48c(void);
int64_t function_12c50a(void);
int64_t function_12c50c(void);
int64_t function_12c5cf(void);
int64_t function_12c611(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_12c61b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12c656(void);
int64_t function_12c689(void);
int64_t function_12c69b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12c6b1(int64_t a1);
int64_t function_12c6d3(void);
int64_t function_14fc368();
int64_t function_16ac713f();
int64_t function_1fad090();
int64_t function_38dca0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_38de03(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_38df7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38e0d3(int64_t a1);
int64_t function_38e240(void);
int64_t function_64f7ddee();
int64_t function_cf3c7();
int64_t unknown_41123f1b();
int64_t unknown_ffffffff921d9633();

// Address range: 0x12bcdc - 0x12bce3
int64_t function_12bcdc(int64_t a1, int64_t a2) {
    // 0x12bcdc
    int64_t v1; // 0x12bcdc
    int64_t result = v1;
    *(char *)result = (char)result + 61;
    int32_t * v2 = (int32_t *)(a1 + 41 + 4 * a2); // 0x12bcdf
    *v2 = *v2 + (int32_t)a1;
    return result;
}

// Address range: 0x12bce3 - 0x12bce4
int64_t function_12bce3(void) {
    // 0x12bce3
    int64_t result; // 0x12bce3
    return result;
}

// Address range: 0x12bcf1 - 0x12bd38
int64_t function_12bcf1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int32_t * v2 = (int32_t *)(a3 - 0x7f39285a); // 0x12bcfe
    int32_t v3 = a3; // 0x12bcfe
    *v2 = *v2 - v3;
    int64_t v4; // 0x12bcf1
    uint32_t v5 = *(int32_t *)&v4; // 0x12bd0d
    uint32_t v6 = v5 + v3; // 0x12bd0d
    *(int32_t *)a1 = v6;
    int32_t * v7 = (int32_t *)((int64_t)*(int32_t *)0x3d00b3c12f747de9 + 55); // 0x12bd0f
    int64_t v8; // 0x12bcf1
    *v7 = *v7 - (int32_t)v8 + (int32_t)(v6 < v5);
    __asm_wait();
    int64_t v9 = __asm_int3(a1); // 0x12bd16
    if (a4 != 1) {
        v9 = function_12bce3();
    }
    char * v10 = (char *)(v8 - 0x17fadcc3); // 0x12bd1a
    *v10 = (char)v9 + 104 + *v10;
    int32_t v11 = *(int32_t *)&v1; // 0x12bd20
    bool v12; // 0x12bcf1
    *(int32_t *)v1 = v11 + (int32_t)((v12 ? 0xffffffff : 1) + a2);
    return __asm_int1((int64_t)&g2, (int64_t)&g2, (int64_t)&g2);
}

// Address range: 0x12bd5e - 0x12bd61
int64_t function_12bd5e(void) {
    // 0x12bd5e
    int64_t result; // 0x12bd5e
    __asm_out(-44, (char)result);
    return result;
}

// Address range: 0x12bd61 - 0x12bd64
int64_t function_12bd61(int64_t a1, int64_t a2, int64_t a3) {
    // 0x12bd61
    int64_t result; // 0x12bd61
    *(int32_t *)a3 = (int32_t)result - (int32_t)a1;
    return result;
}

// Address range: 0x12bd83 - 0x12bd84
int64_t function_12bd83(void) {
    // 0x12bd83
    int64_t result; // 0x12bd83
    return result;
}

// Address range: 0x12bddd - 0x12bddf
int64_t function_12bddd(void) {
    // 0x12bddd
    int64_t v1; // 0x12bddd
    return unknown_41123f1b(v1, v1, v1, v1);
}

// Address range: 0x12bdf5 - 0x12bdf6
int64_t function_12bdf5(void) {
    // 0x12bdf5
    int64_t result; // 0x12bdf5
    return result;
}

// Address range: 0x12be0b - 0x12be0d
int64_t function_12be0b(void) {
    // 0x12be0b
    int64_t result; // 0x12be0b
    return result;
}

// Address range: 0x12be0d - 0x12be1c
int64_t function_12be0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12be0d
    int64_t v1; // 0x12be0d
    int32_t * v2 = (int32_t *)(a4 + 0xa04531 + v1); // 0x12be0d
    *v2 = *v2 + (int32_t)v1;
    return unknown_41123f1b(a1, a2, a3, a4) & -234;
}

// Address range: 0x12be29 - 0x12be79
int64_t function_12be29(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4; // 0x12be29
    int64_t v2; // 0x12be29
    uint32_t v3 = *(int32_t *)(a1 + 55 + v2) + v1; // 0x12be29
    bool v4; // 0x12be29
    uint32_t v5 = v3 + (int32_t)v4; // 0x12be29
    int64_t v6 = unknown_ffffffff921d9633(); // 0x12be2d
    *(char *)-0x38fe17af1a7d0ff4 = (char)v6;
    int64_t v7 = v6 + 0xd92900ab + (int64_t)(v4 ? v5 <= v1 : v3 < v1); // 0x12be46
    int64_t v8; // bp-8, 0x12be29
    int32_t * v9 = (int32_t *)(v2 - 0x466aadd7 + (int64_t)&v8); // 0x12be4d
    int32_t v10 = v7; // 0x12be4d
    *v9 = *v9 + v10;
    __asm_out_133(-0x7057, v10);
    int16_t v11 = 256 * (int16_t)v7 >> 8; // 0x12be58
    int64_t v12 = v7 & 0xffff0000 | (int64_t)(v11 * v11); // 0x12be58
    uint32_t v13 = *(int32_t *)0x7c758c01e8238f5c; // 0x12be5a
    uint32_t v14 = v13 + v5; // 0x12be5a
    *(int32_t *)0x7c758c01e8238f5c = v14;
    int32_t * v15 = (int32_t *)(v2 - 0x66328100); // 0x12be6b
    *v15 = *v15 + (int32_t)v2;
    return v2 + 0x62008000 + (int64_t)(v14 < v13) + v12 & 0xffffffff;
}

// Address range: 0x12bebb - 0x12bec4
int64_t function_12bebb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12bebb
    int64_t v1; // 0x12bebb
    uint64_t v2 = v1;
    unsigned char v3 = (char)a4 % 32; // 0x12bebe
    if (v3 != 0) {
        char * v4 = (char *)(a2 - 47); // 0x12bebe
        *v4 = *v4 >> v3;
    }
    return v2 % 256 * (int64_t)*(char *)(v1 - 96) | v2 & -0x10000;
}

// Address range: 0x12bf0f - 0x12bf10
int64_t function_12bf0f(void) {
    // 0x12bf0f
    int64_t result; // 0x12bf0f
    return result;
}

// Address range: 0x12bf2f - 0x12bf30
int64_t function_12bf2f(void) {
    // 0x12bf2f
    int64_t result; // 0x12bf2f
    return result;
}

// Address range: 0x12bf37 - 0x12bf39
int64_t function_12bf37(void) {
    // 0x12bf37
    return function_12bf0f();
}

// Address range: 0x12bf75 - 0x12bf8f
int64_t function_12bf75(void) {
    // 0x12bf75
    int64_t v1; // 0x12bf75
    int64_t v2 = v1 & -256 | 78; // 0x12bf85
    if ((char)v1 < 0) {
        v2 = function_12bf2f();
    }
    int64_t v3 = v2;
    return (v3 + 32) % 256 | v3 & -256;
}

// Address range: 0x12bf9f - 0x12bfa2
int64_t function_12bf9f(int64_t a1) {
    // 0x12bf9f
    int64_t result; // 0x12bf9f
    return result;
}

// Address range: 0x12bfc0 - 0x12bfd6
int64_t function_12bfc0(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x12bfc0
    int64_t v1; // 0x12bfc0
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a1 - 0x20642010); // 0x12bfc5
    *v3 = *v3 + 0x3d006f68;
    return (v2 + a3 / 256) % 256 | v2 & -256;
}

// Address range: 0x12bfe8 - 0x12bfed
int64_t function_12bfe8(void) {
    // 0x12bfe8
    return function_64f7ddee();
}

// Address range: 0x12c0d8 - 0x12c0d9
int64_t function_12c0d8(void) {
    // 0x12c0d8
    int64_t result; // 0x12c0d8
    return result;
}

// Address range: 0x12c0e3 - 0x12c132
int64_t function_12c0e3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x12c0e3
    int64_t v1; // 0x12c0e3
    uint64_t v2 = v1;
    *(char *)-0x748c9416 = *(char *)-0x748c9416 + (char)(v2 / 256);
    int64_t v3 = a5 & -256; // 0x12c0ea
    char * v4 = (char *)(v2 - 55); // 0x12c0ec
    unsigned char v5 = *v4; // 0x12c0ec
    unsigned char v6 = (char)(a3 / 256); // 0x12c0ec
    char v7 = v5 - v6; // 0x12c0ec
    *v4 = v7;
    if (((v7 ^ v5) & (v5 ^ v6)) < 0) {
        // 0x12c119
        return v3 | (int64_t)*(char *)0x6ed13e00b300180a;
    }
    uint32_t v8 = (int32_t)a4 % 32; // 0x12c0f2
    bool v9 = false; // 0x12c0f2
    if (v8 != 0) {
        int32_t * v10 = (int32_t *)(a2 + 0x2ae500c0); // 0x12c0f2
        uint32_t v11 = *v10; // 0x12c0f2
        *v10 = v11 >> v8 | (int32_t)(v5 < v6) << 32 - v8 | (int32_t)((int64_t)v11 << (int64_t)(33 - v8));
        v9 = v8 == 1 == (v11 < 0 != v5 < v6);
    }
    int64_t result = v3 | 6; // 0x12c0f8
    if (v7 < 0 == v9) {
        result = function_12c0d8();
    }
    // 0x12c0fa
    return result;
}

// Address range: 0x12c174 - 0x12c175
int64_t function_12c174(void) {
    // 0x12c174
    int64_t result; // 0x12c174
    return result;
}

// Address range: 0x12c18a - 0x12c18b
int64_t function_12c18a(int64_t a1) {
    // 0x12c18a
    int64_t result; // 0x12c18a
    return result;
}

// Address range: 0x12c196 - 0x12c1a0
int64_t function_12c196(int64_t a1, int64_t a2, int64_t a3) {
    // 0x12c196
    __asm_int1(a1, a2, a3);
    return function_12c174();
}

// Address range: 0x12c1a5 - 0x12c1c1
int64_t function_12c1a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 0x4700d0fb); // 0x12c1a5
    *v1 = *v1 + (int32_t)a2;
    int64_t v2; // 0x12c1a5
    *(int32_t *)a1 = *(int32_t *)&v2;
    int64_t v3; // 0x12c1a5
    __asm_out_134(-101, (int32_t)v3);
    bool v4; // 0x12c1a5
    int64_t result = __asm_int3((v4 ? -8 : 8) + a1); // 0x12c1b1
    char v5 = *(char *)0x6d6889f7; // 0x12c1b2
    *(char *)0x6d6889f7 = (char)v3 + (char)((int32_t)a4 != 0) + v5;
    return result;
}

// Address range: 0x12c1c8 - 0x12c1ca
int64_t function_12c1c8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x12c1c8
    int64_t result; // 0x12c1c8
    __asm_out_133((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x12c1cb - 0x12c1cf
int64_t function_12c1cb(void) {
    // 0x12c1cb
    int64_t result; // 0x12c1cb
    return result;
}

// Address range: 0x12c207 - 0x12c208
int64_t function_12c207(void) {
    // 0x12c207
    int64_t result; // 0x12c207
    return result;
}

// Address range: 0x12c236 - 0x12c298
int64_t function_12c236(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int32_t * v2 = (int32_t *)(a1 + 0x7700c50b); // 0x12c236
    int64_t v3; // 0x12c236
    *v2 = *v2 + (int32_t)v3;
    char v4 = (v3 ^ a4) / 256; // 0x12c23f
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x12c23f
    uint64_t v6 = v3 ^ a4 & 0xff00; // 0x12c23f
    unsigned char v7 = (char)v3; // 0x12c242
    int32_t * v8 = (int32_t *)v6; // 0x12c24a
    *v8 = (int32_t)(v7 > 132) + (int32_t)a2 + *v8;
    bool v9; // 0x12c236
    int64_t v10 = v9 ? -1 : 1; // 0x12c252
    unsigned char v11 = *(char *)(a1 + 0xd3ef8b + v10) & v7 + 123; // 0x12c253
    unsigned char v12 = llvm_ctpop_i8(v11); // 0x12c253
    *(char *)a3 = (char)v3;
    int64_t v13 = v3 & -0x10000 | 0x8000 * (int64_t)(v4 < 0) | 0x4000 * (int64_t)(v4 == 0) | 1024 * (int64_t)(v5 % 2 == 0) | (int64_t)v11 | 512; // 0x12c25c
    if (v12 % 2 != 0) {
        v13 = function_12c207();
    }
    int64_t v14 = v6 & -256 | (int64_t)*(char *)&v1; // 0x12c25a
    __asm_out_134(-80, (int32_t)v13);
    uint32_t v15 = *(int32_t *)0x5805e116; // 0x12c273
    uint32_t v16 = v15 + (int32_t)v14; // 0x12c273
    *(int32_t *)0x5805e116 = v16;
    int64_t v17 = __asm_iretd(); // 0x12c279
    int32_t * v18 = (int32_t *)(v10 + a2); // 0x12c27b
    *v18 = (int32_t)(v16 < v15) - (int32_t)v3 + *v18;
    *(char *)0x3b35ba84 = *(char *)0x3b35ba84 + (char)(v6 / 256);
    uint16_t v19 = (256 * (int16_t)v17 >> 8) * (int16_t)*(char *)v17; // 0x12c283
    char * v20 = (char *)(v14 + 0x3904280); // 0x12c286
    *v20 = *v20 - 41;
    int32_t * v21 = (int32_t *)(v17 & -0x10000 | (int64_t)v19); // 0x12c28d
    *v21 = *v21 - 49;
    *(char *)v1 = *(char *)&v1 ^ (char)v19;
    return function_14fc368();
}

// Address range: 0x12c2ba - 0x12c346
int64_t function_12c2ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x12c2ba
    int64_t v1; // 0x12c2ba
    uint32_t v2 = (int32_t)(v1 & 0xffffff00 | (uint64_t)v1 % 256); // 0x12c2bc
    int32_t v3 = a4;
    uint32_t v4 = v2 + v3; // 0x12c2bc
    bool v5; // 0x12c2ba
    uint32_t v6 = v4 + (int32_t)v5; // 0x12c2bc
    int64_t result = v6; // 0x12c2bc
    if (v5 ? v6 <= v2 : v4 < v2) {
        // 0x12c2c2
        return result;
    }
    char v7 = *(char *)(a3 - 24); // 0x12c32f
    int32_t * v8 = (int32_t *)((v1 & -256) - 28); // 0x12c33d
    *v8 = *v8 + v3;
    int32_t v9 = __asm_insd((int16_t)(a3 & 0xff00 | (int64_t)(v7 + (char)a3))); // 0x12c341
    *(int32_t *)a7 = v9;
    return result & 0xffff0000 | (int64_t)*(int16_t *)0x3da509c000810b4f;
}

// Address range: 0x12c3c5 - 0x12c3c6
int64_t function_12c3c5(int64_t a1) {
    // 0x12c3c5
    int64_t result; // 0x12c3c5
    return result;
}

// Address range: 0x12c3c6 - 0x12c3d6
int64_t function_12c3c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12c3c6
    int64_t v1; // 0x12c3c6
    int64_t v2 = v1;
    *(char *)a1 = (char)v2;
    bool v3; // 0x12c3c6
    int64_t v4 = v3 ? 0xffffffff : 1; // 0x12c3c6
    int64_t result = ((v2 + 195) % 256 | v2 & 0xffffff00) + v1 & 0xffffffff; // 0x12c3c9
    *(int32_t *)0x18dee1ff = *(int32_t *)0x18dee1ff + (int32_t)(v4 + a1);
    uint32_t v5 = (int32_t)a4 % 32; // 0x12c3d1
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)result; // 0x12c3d1
        uint32_t v7 = *v6; // 0x12c3d1
        *v6 = v7 >> 32 - v5 | v7 << v5;
    }
    return result;
}

// Address range: 0x12c44b - 0x12c44e
int64_t function_12c44b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12c44b
    int64_t result; // 0x12c44b
    return result;
}

// Address range: 0x12c48c - 0x12c48e
int64_t function_12c48c(void) {
    // 0x12c48c
    return function_12c50c();
}

// Address range: 0x12c50a - 0x12c50c
int64_t function_12c50a(void) {
    // 0x12c50a
    int64_t v1; // 0x12c50a
    return v1 & -256 | 160;
}

// Address range: 0x12c50c - 0x12c50e
int64_t function_12c50c(void) {
    // 0x12c50c
    int64_t v1; // 0x12c50c
    return v1 | 57;
}

// Address range: 0x12c5cf - 0x12c5d0
int64_t function_12c5cf(void) {
    // 0x12c5cf
    int64_t result; // 0x12c5cf
    return result;
}

// Address range: 0x12c611 - 0x12c61a
int64_t function_12c611(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x12c611
    int64_t result; // 0x12c611
    *(char *)a3 = (char)(result | a4 / 256);
    return result;
}

// Address range: 0x12c61b - 0x12c642
int64_t function_12c61b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12c61b
    int64_t v1; // 0x12c61b
    int32_t * v2 = (int32_t *)(v1 + 24); // 0x12c61b
    *v2 = *v2 - (int32_t)v1;
    bool v3; // 0x12c61b
    *(char *)((v3 ? -1 : 1) + a1) = (char)v1;
    int32_t v4 = __asm_in(98); // 0x12c626
    int64_t v5 = v4; // 0x12c626
    int32_t * v6 = (int32_t *)v5; // 0x12c628
    *v6 = *v6 + v4;
    char * v7 = (char *)(v5 + a3); // 0x12c62a
    unsigned char v8 = *v7; // 0x12c62a
    unsigned char v9 = v8 + (char)a3; // 0x12c62a
    *v7 = v9;
    char * v10 = (char *)(v1 + 1); // 0x12c62e
    *v10 = *v10 - (v9 < v8 ? 10 : 9);
    int32_t * v11 = (int32_t *)(v5 + 1); // 0x12c634
    int32_t v12 = *v11 | (int32_t)v1; // 0x12c634
    *v11 = v12;
    if (v12 >= 0) {
        function_12c5cf();
    }
    // 0x12c63b
    return function_1fad090();
}

// Address range: 0x12c656 - 0x12c65e
int64_t function_12c656(void) {
    // 0x12c656
    int64_t v1; // 0x12c656
    return v1 & -0xff01 | (int64_t)&g1;
}

// Address range: 0x12c689 - 0x12c68b
int64_t function_12c689(void) {
    // 0x12c689
    return function_12c6d3();
}

// Address range: 0x12c69b - 0x12c6a5
int64_t function_12c69b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x12c69b
    return function_16ac713f();
}

// Address range: 0x12c6b1 - 0x12c6b6
int64_t function_12c6b1(int64_t a1) {
    // 0x12c6b1
    int64_t result; // 0x12c6b1
    return result;
}

// Address range: 0x12c6d3 - 0x12c6d8
int64_t function_12c6d3(void) {
    // 0x12c6d3
    int64_t v1; // 0x12c6d3
    bool v2; // 0x12c6d3
    return v1 + 0xfffffff1 + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x38dca0 - 0x38de03
int64_t function_38dca0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x38dca0
    int64_t v1; // bp-8, 0x38dca0
    int64_t v2 = (int64_t)&v1; // 0x38ddab
    v1 = a4;
    int64_t v3 = v1; // 0x38ddf9
    v1 = v2 + 16;
    int64_t v4; // 0x38dca0
    return function_cf3c7(a1, a2, a3, v3, v4, v4, 310);
}

// Address range: 0x38de03 - 0x38df7d
int64_t function_38de03(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x38de03
    int64_t v1; // bp-48, 0x38de03
    v1 = (int64_t)&v1 + 16;
    return function_cf3c7(a1, a2, a3, a4, a5, a6, 0x38c756);
}

// Address range: 0x38df7d - 0x38e0d3
int64_t function_38df7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38df7d
    int64_t v1; // 0x38df7d
    int64_t v2 = *(int64_t *)(v1 + 32); // 0x38e027
    int64_t v3 = v1 - 8; // 0x38e027
    int64_t * v4 = (int64_t *)v3; // 0x38e027
    *v4 = v2;
    int64_t * v5 = (int64_t *)(v1 - 16); // 0x38e046
    int64_t * v6 = (int64_t *)(v1 + 16); // 0x38e04e
    int64_t v7 = *v6; // 0x38e04e
    *v4 = v7;
    *v5 = v7;
    int64_t * v8 = (int64_t *)(v1 - 24); // 0x38e068
    *v8 = 0x343ab960;
    int64_t * v9 = (int64_t *)(v1 - 32); // 0x38e07b
    *v9 = v2;
    *(int64_t *)v1 = *v5;
    *v5 = 0x99ea674;
    *v8 = 0x61e0bad3;
    *v9 = v7;
    *v6 = *v5;
    *v8 = *v4;
    *v4 = a2;
    *v5 = v3;
    *v4 = v1 + 8;
    int64_t v10; // bp-40, 0x38df7d
    return function_cf3c7(a1, *v4, a3, a4, v1, v1, (int64_t)&v10);
}

// Address range: 0x38e0d3 - 0x38e213
int64_t function_38e0d3(int64_t a1) {
    // 0x38e0d3
    int64_t v1; // 0x38e0d3
    return function_cf3c7(v1, v1, v1, v1, v1, v1, 0x38ce35);
}

// Address range: 0x38e240 - 0x38e241
int64_t function_38e240(void) {
    // 0x38e240
    int64_t result; // 0x38e240
    return result;
}
