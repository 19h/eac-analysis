/*
 * Targeted RetDec C for native executable gap queue batch 977.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2dcf3-0x2def3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2def3-0x2e0f3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e0f3-0x2e2f3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e2f3-0x2e4f3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e4f3-0x2e6f3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e6f3-0x2e8f3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e8f3-0x2eaf3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2eaf3-0x2ecf3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19f485-0x19f685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19f685-0x19f885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19f885-0x19fa85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19fa85-0x19fc85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19fc85-0x19fe85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19fe85-0x1a0085 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a0085-0x1a0285 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a0285-0x1a0485 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_19f485(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_19f56a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_19f6ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_19f81e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19f93f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_19fae0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19fc3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19fd71(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19fea6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_19fff1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1a0137(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1a0293(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1a03b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a03eb(void);
int64_t function_1a03ed(int64_t a1, int64_t a2);
int64_t function_1a0435(int64_t a1, int64_t a2);
int64_t function_2ce24e39();
int64_t function_2dcbc();
int64_t function_2dcf3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2dd53(int64_t a1);
int64_t function_2dd5d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2ddda(int64_t a1);
int64_t function_2dde5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2de0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2de1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2de24(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2df2a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2df3f(int64_t a1);
int64_t function_2df54(int64_t a1);
int64_t function_2df5e(void);
int64_t function_2df84(void);
int64_t function_2df85(void);
int64_t function_2dfc1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e000(void);
int64_t function_2e025(void);
int64_t function_2e044(void);
int64_t function_2e06f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2e167(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e17b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2e18a(int64_t a1);
int64_t function_2e19a(void);
int64_t function_2e1aa(void);
int64_t function_2e1ca(void);
int64_t function_2e1cd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e1dd(void);
int64_t function_2e1f3(void);
int64_t function_2e246(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e2ce(void);
int64_t function_2e2dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e306(int64_t a1);
int64_t function_2e35d(void);
int64_t function_2e35e(int64_t a1);
int64_t function_2e36e(void);
int64_t function_2e385(void);
int64_t function_2e387(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e3c9(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_2e3d1(void);
int64_t function_2e444(int64_t a1);
int64_t function_2e472(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e54e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2e5e8(void);
int64_t function_2e61a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e627(void);
int64_t function_2e633(void);
int64_t function_2e66d(void);
int64_t function_2e6c5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e6f8(int64_t a1);
int64_t function_2e74b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e77e(int64_t a1);
int64_t function_2e7af(void);
int64_t function_2e7bc(int64_t a1);
int64_t function_2e7c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2e90b(void);
int64_t function_2e9f0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2ea16(int64_t a1);
int64_t function_2ea61(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2ea82(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2eaa7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2eabb(int64_t a1);
int64_t function_2ead7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2eadc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2eafd(void);
int64_t function_2eb32(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ebec(int64_t a1);
int64_t function_2ec8e(void);
int64_t function_4f04316d();
int64_t function_c57b8();
int64_t function_ffffffff8ea5dbf8();
int64_t function_ffffffff91e728da();
int64_t function_ffffffff92587d5f();
int64_t function_ffffffffb1189cf7();
int64_t function_ffffffffe0634d4a();
int64_t unknown_1fcadf12();

// Address range: 0x2dcf3 - 0x2dd48
int64_t function_2dcf3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2dcf3
    int64_t v1; // 0x2dcf3
    uint32_t v2 = (int32_t)v1; // 0x2dcf8
    bool v3; // 0x2dcf3
    uint32_t v4 = v3 ? -0x41e7664 : -0x41e7665; // 0x2dcf8
    int32_t v5 = v2 - v4; // 0x2dcf8
    unsigned char v6 = *(char *)0xb0346225; // 0x2dcfd
    *(char *)0xb0346225 = (char)a2;
    if (!v3 && v4 <= v2 && v5 != 0) {
        // 0x2dd3f
        return (int64_t)*(int32_t *)-0x5263dfff4f60471;
    }
    int64_t result = __asm_int3(0x772132e2, a2 & -256 | (int64_t)v6, 0xb0346274, (int64_t)(v5 & -256 | 142)); // 0x2dd0e
    if (((v5 - (int32_t)v3 ^ v2) & (v2 ^ -0x80000000)) >= 0) {
        result = function_2dcbc();
    }
    // 0x2dd10
    return result;
}

// Address range: 0x2dd53 - 0x2dd56
int64_t function_2dd53(int64_t a1) {
    // 0x2dd53
    int64_t result; // 0x2dd53
    return result;
}

// Address range: 0x2dd5d - 0x2ddd8
int64_t function_2dd5d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2dd5d
    int64_t v1; // 0x2dd5d
    uint64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = a2;
    int64_t v5 = a1;
    int32_t * v6 = (int32_t *)(a2 - 13); // 0x2dd68
    *v6 = *v6 - (int32_t)v1;
    char * v7 = (char *)(v1 - 0x64cc006e); // 0x2dd6b
    char v8 = *v7; // 0x2dd6b
    char v9 = v1; // 0x2dd6b
    char v10 = v8 + v9; // 0x2dd6b
    *v7 = v10;
    if (v10 != 0) {
        // 0x2ddae
        *(int64_t *)0xd4fcdfd1 = v3;
        int64_t result = __asm_int1(); // 0x2ddb1
        int32_t * v11 = (int32_t *)(v5 + 0x4f27521b); // 0x2ddb3
        *v11 = -*v11;
        *(int32_t *)-0x60d9dffaa4c4ebc4 = (int32_t)result;
        return result;
    }
    if (((v10 ^ v8) & (v10 ^ v9)) >= 0) {
        // 0x2ddcf
        *(int64_t *)0xd4fcdfd1 = v4;
        return v2 & 0xffffff00 | (int64_t)*(char *)(v1 + v2 % 256);
    }
    char * v12 = (char *)(v3 + 43); // 0x2dd75
    char v13 = a4 / 256; // 0x2dd75
    *v12 = *v12 + v13;
    __asm_out(70, (char)v1);
    int16_t v14 = v3; // 0x2dd7b
    __asm_outsd(v14, *(int32_t *)&v4);
    __asm_in(-118);
    *(char *)v5 = __asm_insb(v14);
    *(char *)v5 = *(char *)&v5 ^ v13;
    int64_t v15 = __asm_iretd(); // 0x2dd81
    int32_t * v16 = (int32_t *)(v2 + 16); // 0x2dd87
    int32_t v17 = *v16; // 0x2dd87
    *v16 = 2 * v17 | (int32_t)(v17 < 0);
    int32_t v18 = *(int32_t *)&v3; // 0x2dd8a
    *(int32_t *)v3 = v18 + (int32_t)((v1 + a4) % 256 | a4 & 0xffffff00) + (int32_t)(v17 < 0);
    return (v15 - v3) % 256 | v15 & -256;
}

// Address range: 0x2ddda - 0x2dddb
int64_t function_2ddda(int64_t a1) {
    // 0x2ddda
    int64_t result; // 0x2ddda
    return result;
}

// Address range: 0x2dde5 - 0x2ddff
int64_t function_2dde5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2dde5
    int64_t result; // 0x2dde5
    __asm_out_133(0, (int32_t)result);
    return result;
}

// Address range: 0x2de0b - 0x2de13
int64_t function_2de0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 109); // 0x2de0b
    int64_t v2; // 0x2de0b
    bool v3; // 0x2de0b
    *v1 = (char)v3 - (char)v2 + *v1;
    return function_4f04316d();
}

// Address range: 0x2de1b - 0x2de24
int64_t function_2de1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2de1b
    int64_t result; // 0x2de1b
    *(int32_t *)(result + 0x4c619bb2) = (int32_t)a3;
    return result;
}

// Address range: 0x2de24 - 0x2df1e
int64_t function_2de24(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a4;
    int64_t result = unknown_1fcadf12(); // 0x2de29
    int32_t v2 = *(int32_t *)0xf2cbe6d3; // 0x2de2e
    int64_t v3; // 0x2de24
    int32_t v4 = v3;
    int32_t v5 = v2 - v4; // 0x2de2e
    char v6 = llvm_ctpop_i8((char)v5); // 0x2de2f
    if (((v5 ^ v2) & (v2 ^ v4)) >= 0) {
        unsigned char v7 = (char)a4 % 32; // 0x2de31
        if (v7 == 0) {
            // 0x2de37
            return result;
        }
        char * v8 = (char *)(result + 69); // 0x2de31
        char v9 = *v8; // 0x2de31
        char v10 = v9 << v7; // 0x2de31
        v6 = llvm_ctpop_i8(v10);
        *v8 = v10;
        if (v7 == 1 != (v9 << v7 - 1 ^ v10) < 0) {
            // 0x2de37
            return result;
        }
    }
    // 0x2de90
    if (v6 % 2 == 0) {
        // 0x2de37
        return result;
    }
    unsigned char v11 = *(char *)&v1; // 0x2df08
    unsigned char v12 = v11 + (char)v3; // 0x2df08
    *(char *)v1 = v12;
    uint32_t v13 = (int32_t)v3; // 0x2df0a
    int32_t v14 = *(int32_t *)(v3 + (int64_t)&g2); // 0x2df0a
    uint32_t v15 = v14 + (int32_t)(v12 < v11); // 0x2df0a
    bool v16 = v12 < v11 ? v15 != -1 | (int32_t)(v12 < v11) + v13 - v15 > v13 : v15 > v13; // 0x2df0a
    int32_t v17 = *(int32_t *)(v1 + 30); // 0x2df10
    return v17 + (int32_t)result + (int32_t)v16;
}

// Address range: 0x2df2a - 0x2df2e
int64_t function_2df2a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2df2a
    __asm_fldenv(*(int224_t *)(a4 + 75));
    int64_t result; // 0x2df2a
    return result;
}

// Address range: 0x2df3f - 0x2df42
int64_t function_2df3f(int64_t a1) {
    // 0x2df3f
    int64_t result; // 0x2df3f
    return result;
}

// Address range: 0x2df54 - 0x2df55
int64_t function_2df54(int64_t a1) {
    // 0x2df54
    int64_t result; // 0x2df54
    return result;
}

// Address range: 0x2df5e - 0x2df60
int64_t function_2df5e(void) {
    // 0x2df5e
    int64_t result; // 0x2df5e
    return result;
}

// Address range: 0x2df84 - 0x2df85
int64_t function_2df84(void) {
    // 0x2df84
    int64_t result; // 0x2df84
    return result;
}

// Address range: 0x2df85 - 0x2df86
int64_t function_2df85(void) {
    // 0x2df85
    int64_t result; // 0x2df85
    return result;
}

// Address range: 0x2dfc1 - 0x2dfd6
int64_t function_2dfc1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2dfc1
    bool v1; // 0x2dfc1
    if (v1) {
        // 0x2dfc5
        return function_2df84();
    }
    int64_t result; // 0x2dfc1
    if (a4 != 1) {
        result = function_2df85();
    }
    // 0x2dfc5
    return result;
}

// Address range: 0x2e000 - 0x2e001
int64_t function_2e000(void) {
    // 0x2e000
    int64_t result; // 0x2e000
    return result;
}

// Address range: 0x2e025 - 0x2e026
int64_t function_2e025(void) {
    // 0x2e025
    int64_t result; // 0x2e025
    return result;
}

// Address range: 0x2e044 - 0x2e04d
int64_t function_2e044(void) {
    // 0x2e044
    return function_2e025();
}

// Address range: 0x2e06f - 0x2e142
int64_t function_2e06f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2e06f
    int64_t v1; // 0x2e06f
    bool v2; // 0x2e06f
    if (v2 || v2) {
        v1 = function_2e000();
    }
    // 0x2e071
    int64_t v3; // 0x2e06f
    int32_t * v4 = (int32_t *)(v3 + 97);
    int64_t v5 = a1;
    int64_t v6 = a2;
    int64_t v7; // 0x2e06f
    int64_t v8 = v7;
    int64_t * v9 = (int64_t *)(v1 - 0x1ef2c474); // 0x2e071
    int64_t v10 = 2 * *v9; // 0x2e071
    *v9 = v10;
    int64_t v11 = (int64_t)*(char *)0x6cd9002f539755; // 0x2e07b
    int64_t v12 = v1 & -256; // 0x2e07b
    int64_t v13 = v12 | v11; // 0x2e07b
    int64_t v14; // 0x2e06f
    int64_t v15 = v14 - 1; // 0x2e084
    int64_t v16; // 0x2e06f
    while (v15 != 0 == v10 == 0) {
        int64_t v17 = v8 - 2; // 0x2e0a7
        *(int16_t *)v17 = (int16_t)v3;
        char * v18 = (char *)(v16 + 0x7acd712e); // 0x2e0a9
        *v18 = *v18 & (char)v16;
        *(int32_t *)v5 = *(int32_t *)v6;
        int64_t v19 = v6 + (v2 ? -4 : 4); // 0x2e0af
        uint32_t v20 = (int32_t)v15 - *(int32_t *)&v16; // 0x2e0b1
        int64_t v21 = v20; // 0x2e0b1
        unsigned char v22 = *(char *)(v13 - 10); // 0x2e0b3
        uint32_t v23 = *v4; // 0x2e0bd
        uint32_t v24 = v23 + (int32_t)((v11 + 244 + (int64_t)(v22 < (char)v16)) % 256 | v12); // 0x2e0bd
        *v4 = v24;
        char * v25 = (char *)(v21 + 83); // 0x2e0c0
        char v26 = *v25 - (char)v19 + (char)(v24 < v23); // 0x2e0c0
        *v25 = v26;
        int64_t v27 = v12 | 200; // 0x2e0c4
        char * v28 = (char *)(v21 - 27); // 0x2e0c6
        unsigned char v29 = *v28; // 0x2e0c6
        *v28 = v29 / 2 | 128 * v29;
        if (v29 % 2 == 0) {
            // 0x2e0cb
            *(int64_t *)(v8 - 10) = a3;
            if (v26 == 0) {
                // 0x2e0d5
                return function_ffffffffb1189cf7(0xa77ae5d2, v19);
            }
            // 0x2e12c
            *(int32_t *)0xa77ae5d2 = (int32_t)v27 + 0x358ca362;
            char * v30 = (char *)(v16 + 0x1fd0fabb); // 0x2e135
            *v30 = *v30 ^ (char)v20;
            return function_ffffffffe0634d4a(v2 ? 0xa77ae5ce : 0xa77ae5d6);
        }
        v5 = 0xa77ae5d2;
        v6 = v19;
        v8 = v17;
        v9 = (int64_t *)(v27 - 0x1ef2c474);
        v10 = 2 * *v9;
        *v9 = v10;
        v11 = (int64_t)*(char *)0x6cd9002f539755;
        v12 = v27 & -256;
        v13 = v12 | v11;
        v15 = v21 - 1;
    }
    uint32_t v31 = __readgsdword(v13); // 0x2e086
    __writegsdword(v13, (int32_t)v13);
    char * v32 = (char *)(v5 - 0x7280a883); // 0x2e092
    char v33 = *v32 + (char)(a3 / 256); // 0x2e092
    *v32 = v33;
    char v34 = __asm_in_134(-24); // 0x2e09a
    if (v33 != 0) {
        unsigned char v35 = *(char *)v6; // 0x2e09e
        return ((int64_t)v34 | (int64_t)v31) & -256 | (int64_t)v35;
    }
    // 0x2e115
    __asm_iretd();
    uint64_t v36 = v8 - 8; // 0x2e118
    *(int64_t *)v36 = 52;
    *(char *)v16 = *(char *)&v16 + (char)(v36 / 256);
    return v36 & 0xffffffff;
}

// Address range: 0x2e167 - 0x2e179
int64_t function_2e167(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e167
    int64_t result; // 0x2e167
    *(int32_t *)0xed1da1d035115d = (int32_t)result;
    return result;
}

// Address range: 0x2e17b - 0x2e187
int64_t function_2e17b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    uint64_t v1 = __asm_int1(); // 0x2e17c
    int64_t v2; // 0x2e17b
    char * v3 = (char *)(v2 + 66); // 0x2e17d
    *v3 = *v3 ^ (char)(a3 / 256);
    return (v1 / 256 + v1) % 256 | v1 & -256;
}

// Address range: 0x2e18a - 0x2e196
int64_t function_2e18a(int64_t a1) {
    // 0x2e18a
    int64_t v1; // 0x2e18a
    return v1 & -256 | (int64_t)*(char *)-0x6d54db56b681b8b6;
}

// Address range: 0x2e19a - 0x2e19b
int64_t function_2e19a(void) {
    // 0x2e19a
    int64_t result; // 0x2e19a
    return result;
}

// Address range: 0x2e1aa - 0x2e1ab
int64_t function_2e1aa(void) {
    // 0x2e1aa
    int64_t result; // 0x2e1aa
    return result;
}

// Address range: 0x2e1ca - 0x2e1cd
int64_t function_2e1ca(void) {
    // 0x2e1ca
    int64_t result; // 0x2e1ca
    return result;
}

// Address range: 0x2e1cd - 0x2e1d6
int64_t function_2e1cd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e1cd
    int64_t result; // 0x2e1cd
    int64_t v1 = result;
    __asm_outsb((int16_t)a3, (char)result);
    *(int64_t *)v1 = v1 + 8;
    return result;
}

// Address range: 0x2e1dd - 0x2e1df
int64_t function_2e1dd(void) {
    // 0x2e1dd
    int64_t result; // 0x2e1dd
    return result;
}

// Address range: 0x2e1f3 - 0x2e1f6
int64_t function_2e1f3(void) {
    // 0x2e1f3
    int64_t result; // 0x2e1f3
    return result;
}

// Address range: 0x2e246 - 0x2e254
int64_t function_2e246(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e246
    int64_t result; // 0x2e246
    char * v1 = (char *)(result - 0x2b6c7b85); // 0x2e24b
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x2e2ce - 0x2e2cf
int64_t function_2e2ce(void) {
    // 0x2e2ce
    int64_t result; // 0x2e2ce
    return result;
}

// Address range: 0x2e2dd - 0x2e2f8
int64_t function_2e2dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a4 - 79); // 0x2e2df
    *v2 = *v2 >> 1;
    unsigned char v3 = *(char *)&v1; // 0x2e2e2
    int64_t v4; // 0x2e2dd
    int64_t result = v4 & -256 | (int64_t)v3; // 0x2e2e2
    char * v5 = (char *)(result - 0x7a51e846); // 0x2e2e3
    *v5 = *v5 + v3;
    bool v6; // 0x2e2dd
    uint32_t v7 = *(int32_t *)(v1 + (v6 ? -56 : -54)) ^ (int32_t)a3; // 0x2e2e9
    *(char *)a1 = __asm_insb((int16_t)v7);
    int32_t * v8 = (int32_t *)(a4 - 4); // 0x2e2f0
    *v8 = *v8 - v7;
    char * v9 = (char *)result; // 0x2e2f3
    *v9 = *v9 + (char)(v7 / 256);
    return result;
}

// Address range: 0x2e306 - 0x2e307
int64_t function_2e306(int64_t a1) {
    // 0x2e306
    int64_t result; // 0x2e306
    return result;
}

// Address range: 0x2e35d - 0x2e35e
int64_t function_2e35d(void) {
    // 0x2e35d
    int64_t result; // 0x2e35d
    return result;
}

// Address range: 0x2e35e - 0x2e361
int64_t function_2e35e(int64_t a1) {
    // 0x2e35e
    int64_t result; // 0x2e35e
    return result;
}

// Address range: 0x2e36e - 0x2e374
int64_t function_2e36e(void) {
    // 0x2e36e
    int64_t result; // 0x2e36e
    int64_t v1 = result;
    char * v2 = (char *)(v1 - 68 + 8 * v1); // 0x2e36e
    bool v3; // 0x2e36e
    *v2 = *v2 + (char)result + (char)v3;
    return result;
}

// Address range: 0x2e385 - 0x2e387
int64_t function_2e385(void) {
    // 0x2e385
    return function_2e35d();
}

// Address range: 0x2e387 - 0x2e3c9
int64_t function_2e387(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e387
    int64_t v1; // 0x2e387
    int64_t v2 = v1;
    int64_t v3 = a4;
    int64_t v4 = v1 | a3;
    int32_t * v5 = (int32_t *)(v2 + 1 + 4 * v2); // 0x2e38e
    *v5 = -1 - *v5;
    *(int32_t *)a4 = *(int32_t *)&v3 ^ (int32_t)v4;
    int64_t v6 = v2 + 0x84436a11; // 0x2e394
    int64_t result = v6 & 0xffffffff; // 0x2e394
    unsigned char v7 = (char)v1; // 0x2e399
    unsigned char v8 = (char)v6; // 0x2e399
    *(int32_t *)(3 * a4) = (int32_t)a3;
    unsigned char v9 = *(char *)0x89f3a2df; // 0x2e3a0
    *(char *)0x89f3a2df = v9 / 2 | 128 * (char)(v7 < v8);
    if (v7 != v8) {
        // 0x2e3d2
        return result;
    }
    uint32_t v10 = (int32_t)v3 % 32; // 0x2e3ad
    if (v10 != 0) {
        int64_t v11 = 0x100000000 * v4 >> 32; // 0x2e3a9
        int32_t * v12 = (int32_t *)(result + 0x9d6215); // 0x2e3ad
        uint32_t v13 = *v12; // 0x2e3ad
        *v12 = (int32_t)(-66 * v11 != -0x4200000000 * v11 >> 32) << v10 - 1 | v13 << v10 | (int32_t)((int64_t)v13 >> (int64_t)(33 - v10));
    }
    char * v14 = (char *)(a1 + 52); // 0x2e3b3
    *v14 = *v14 | (char)(v1 / 256);
    return function_2ce24e39();
}

// Address range: 0x2e3c9 - 0x2e3d0
int64_t function_2e3c9(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 + 78); // 0x2e3c9
    bool v2; // 0x2e3c9
    *v1 = (char)v2 + (char)(a3 / 256) + *v1;
    int64_t result; // 0x2e3c9
    return result;
}

// Address range: 0x2e3d1 - 0x2e3d2
int64_t function_2e3d1(void) {
    // 0x2e3d1
    int64_t v1; // 0x2e3d1
    bool v2; // 0x2e3d1
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x2e444 - 0x2e447
int64_t function_2e444(int64_t a1) {
    // 0x2e444
    int64_t result; // 0x2e444
    return result;
}

// Address range: 0x2e472 - 0x2e54d
int64_t function_2e472(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int32_t * v2 = (int32_t *)(a4 + 0x1cfa4a51); // 0x2e483
    uint32_t v3 = *v2; // 0x2e483
    *v2 = v3 / 2 | 0x80000000 * v3;
    int32_t v4 = *(int32_t *)(a2 - 102); // 0x2e491
    int64_t result = __asm_int1(); // 0x2e4a4
    int32_t v5 = *(int32_t *)&v1; // 0x2e4ac
    int64_t v6 = v1 - 4; // 0x2e4ac
    v1 = v6;
    int64_t v7; // 0x2e472
    if ((int32_t)a2 - v5 < 0) {
        // 0x2e4af
        int64_t v8; // 0x2e472
        uint32_t v9 = *(int32_t *)(4 * a3 + (int64_t)&v8); // 0x2e4b1
        *(char *)v6 = (char)result;
        int64_t v10 = v1 - 1; // 0x2e4b9
        uint32_t v11 = (int32_t)v7; // 0x2e4ba
        char v12 = *(char *)(v7 + 0x6b267841); // 0x2e4bc
        char v13 = *(char *)(int64_t)v9; // 0x2e4c4
        *(char *)(v10 & -256 | (int64_t)(v12 + (char)(-1 - v11 < v11) + (char)v10)) = v13;
        return result;
    }
    int64_t v14 = (int64_t)((int32_t)result - *(int32_t *)0x27b98bcb); // 0x2e52d
    int32_t * v15 = (int32_t *)(v14 + 0x78d059); // 0x2e532
    *v15 = *v15 - 0x7b9e3573;
    char * v16 = (char *)((int64_t)(-13 * v4) + 110 + 8 * v14); // 0x2e546
    char v17 = *v16; // 0x2e546
    unsigned char v18 = (char)v7; // 0x2e546
    *v16 = v17 + v18;
    uint64_t v19 = v14 - (-1 - v17 < v18 ? 129 : 128); // 0x2e54a
    *(char *)v1 = (char)v19;
    return v19 % 256 | v14 & 0xffffff00;
}

// Address range: 0x2e54e - 0x2e5c7
int64_t function_2e54e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2e54e
    int64_t result; // 0x2e54e
    int64_t v1 = result;
    int64_t v2 = result;
    bool v3; // 0x2e54e
    if (!v3) {
        int32_t * v4 = (int32_t *)(a1 + 113); // 0x2e5c4
        *v4 = *v4 & 0x3400af0a;
        return result;
    }
    int64_t v5 = (int64_t)(*(int32_t *)(v1 - 18 + 8 * v1) ^ (int32_t)a1); // 0x2e556
    *(int32_t *)v2 = ((int32_t)a3 & -0xff01 | (int32_t)&g4) & (int32_t)v2;
    char * v6 = (char *)(v5 - 0x1ea6676e); // 0x2e55c
    *v6 = *v6 + (char)(a4 / 256);
    int64_t v7 = v3 ? -1 : 1;
    int64_t v8 = a2; // 0x2e55c
    int64_t v9 = v5; // 0x2e55c
    int64_t v10 = __asm_hlt(v9); // 0x2e562
    int32_t * v11 = (int32_t *)v9; // 0x2e569
    uint32_t v12 = *v11; // 0x2e569
    uint32_t v13 = (int32_t)v10 > 0x84da2d9c ? 0x3cf16d74 : 0x3cf16d73; // 0x2e569
    int32_t v14 = v12 - v13; // 0x2e569
    *v11 = v14;
    *(char *)v9 = *(char *)v8;
    v9 += v7;
    v8 += v7;
    while (!(((int32_t)v10 > 0x84da2d9c | v12 < v13)) && v14 != 0) {
        // 0x2e562
        v10 = __asm_hlt(v9);
        v11 = (int32_t *)v9;
        v12 = *v11;
        v13 = (int32_t)v10 > 0x84da2d9c ? 0x3cf16d74 : 0x3cf16d73;
        v14 = v12 - v13;
        *v11 = v14;
        *(char *)v9 = *(char *)v8;
        v9 += v7;
        v8 += v7;
    }
    // 0x2e573
    return v9 + (v3 ? 0xfffffffc : 4) & 0xffffffff;
}

// Address range: 0x2e5e8 - 0x2e5eb
int64_t function_2e5e8(void) {
    // 0x2e5e8
    int64_t result; // 0x2e5e8
    return result;
}

// Address range: 0x2e61a - 0x2e627
int64_t function_2e61a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e61a
    int64_t v1; // 0x2e61a
    return v1 & 0xffffffff;
}

// Address range: 0x2e627 - 0x2e630
int64_t function_2e627(void) {
    // 0x2e627
    int64_t result; // 0x2e627
    return result;
}

// Address range: 0x2e633 - 0x2e634
int64_t function_2e633(void) {
    // 0x2e633
    int64_t result; // 0x2e633
    return result;
}

// Address range: 0x2e66d - 0x2e66f
int64_t function_2e66d(void) {
    // 0x2e66d
    int64_t result; // 0x2e66d
    return result;
}

// Address range: 0x2e6c5 - 0x2e6d3
int64_t function_2e6c5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e6c5
    int64_t v1; // 0x2e6c5
    *(int32_t *)(v1 - 0x17152350) = (int32_t)a3;
    return function_ffffffff91e728da();
}

// Address range: 0x2e6f8 - 0x2e6f9
int64_t function_2e6f8(int64_t a1) {
    // 0x2e6f8
    int64_t result; // 0x2e6f8
    return result;
}

// Address range: 0x2e74b - 0x2e758
int64_t function_2e74b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e74b
    __asm_int(-100);
    int64_t v1; // 0x2e74b
    return function_2e7c2(a1, a2, a3, v1, (int64_t)&g5, (int64_t)&g5);
}

// Address range: 0x2e77e - 0x2e784
int64_t function_2e77e(int64_t a1) {
    // 0x2e77e
    int64_t result; // 0x2e77e
    return result;
}

// Address range: 0x2e7af - 0x2e7b1
int64_t function_2e7af(void) {
    // 0x2e7af
    int64_t result; // 0x2e7af
    return result;
}

// Address range: 0x2e7bc - 0x2e7bd
int64_t function_2e7bc(int64_t a1) {
    // 0x2e7bc
    int64_t result; // 0x2e7bc
    return result;
}

// Address range: 0x2e7c2 - 0x2e8f9
int64_t function_2e7c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result = __asm_wait(); // 0x2e7c5
    *(int32_t *)(a4 & 0xffffffff) = __asm_insd((int16_t)a3);
    bool v1; // 0x2e7c2
    if (v1 || v1) {
        // 0x2e82a
        return (result + 160) % 256 | result & -256;
    }
    // 0x2e7cc
    return result;
}

// Address range: 0x2e90b - 0x2e90d
int64_t function_2e90b(void) {
    // 0x2e90b
    return function_2e90b();
}

// Address range: 0x2e9f0 - 0x2ea0c
int64_t function_2e9f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e9f0
    int64_t v1; // 0x2e9f0
    *(int32_t *)0x1ba5b75500b0f010 = (int32_t)v1;
    return function_ffffffff8ea5dbf8();
}

// Address range: 0x2ea16 - 0x2ea17
int64_t function_2ea16(int64_t a1) {
    // 0x2ea16
    int64_t result; // 0x2ea16
    return result;
}

// Address range: 0x2ea61 - 0x2ea80
int64_t function_2ea61(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2ea61
    int64_t v1; // 0x2ea61
    char * v2 = (char *)(v1 + 28); // 0x2ea61
    *v2 = *v2 & (char)(v1 / 256);
    char v3 = v1;
    *(char *)-0x4e11fe9529a80387 = v3;
    *(char *)v1 = v3;
    int32_t * v4 = (int32_t *)(a1 - 0x286505bf); // 0x2ea71
    *v4 = *v4 & (int32_t)v1;
    return function_2ead7(a1, a2, a3, v1);
}

// Address range: 0x2ea82 - 0x2ea93
int64_t function_2ea82(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    unsigned char v1 = (char)a4 % 32; // 0x2ea82
    if (v1 != 0) {
        char * v2 = (char *)(a6 - 0x39e915e1); // 0x2ea82
        unsigned char v3 = *v2; // 0x2ea82
        bool v4; // 0x2ea82
        *v2 = v3 << v1 | (char)v4 << v1 - 1 | (char)((int16_t)v3 >> (int16_t)(9 - v1));
    }
    int64_t result; // 0x2ea82
    char * v5 = (char *)(result - 0x6a24eb25); // 0x2ea89
    *v5 = *v5 + (char)a3;
    return result;
}

// Address range: 0x2eaa7 - 0x2eab1
int64_t function_2eaa7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2eaa7
    return function_ffffffff92587d5f();
}

// Address range: 0x2eabb - 0x2eabe
int64_t function_2eabb(int64_t a1) {
    // 0x2eabb
    int64_t result; // 0x2eabb
    return result;
}

// Address range: 0x2ead7 - 0x2eadb
int64_t function_2ead7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ead7
    int64_t result; // 0x2ead7
    return result;
}

// Address range: 0x2eadc - 0x2eaf2
int64_t function_2eadc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2eadc
    int64_t v1; // 0x2eadc
    int64_t v2 = v1;
    bool v3; // 0x2eadc
    char * v4 = (char *)(((v1 + a4 + (int64_t)v3) % 256 | a4 & -256) + 0x32315d32); // 0x2eaea
    *v4 = *v4 + (char)v1;
    return v2 & -0x10000 | (int64_t)&g3 | (v2 ^ v1) % 256;
}

// Address range: 0x2eafd - 0x2eafe
int64_t function_2eafd(void) {
    // 0x2eafd
    int64_t result; // 0x2eafd
    return result;
}

// Address range: 0x2eb32 - 0x2eb71
int64_t function_2eb32(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2eb32
    int64_t v1; // 0x2eb32
    uint64_t v2 = v1;
    int64_t v3 = a5;
    *(char *)v2 = 2 * (char)v2;
    char * v4 = (char *)(a1 - 0xd0a63d9); // 0x2eb34
    *v4 = *v4 + (char)a3;
    char * v5 = (char *)(a2 - 0x6f0889de); // 0x2eb3b
    char v6 = *v5 + (char)(v2 / 256); // 0x2eb3b
    *v5 = v6;
    *(int64_t *)((v1 & 0xffffffff) - 8) = a2;
    if (v6 < 1) {
        // 0x2eb59
        int64_t v7; // 0x2eb32
        __asm_out(-96, (char)(int64_t)&v7);
        int64_t v8; // bp-82, 0x2eb32
        return (int64_t)&v8;
    }
    int64_t v9 = v3;
    *(int32_t *)v9 = *(int32_t *)&v3 | (int32_t)v9;
    int64_t v10; // bp+16896, 0x2eb32
    int64_t v11 = (int64_t)&v10; // 0x2eb47
    return (char)v11 >= 0 ? a3 & 0xffffffff : v11;
}

// Address range: 0x2ebec - 0x2ebef
int64_t function_2ebec(int64_t a1) {
    // 0x2ebec
    int64_t result; // 0x2ebec
    return result;
}

// Address range: 0x2ec8e - 0x2ec91
int64_t function_2ec8e(void) {
    // 0x2ec8e
    int64_t v1; // 0x2ec8e
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x19f485 - 0x19f56a
int64_t function_19f485(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x19f485
    int64_t v1; // 0x19f485
    int64_t v2 = (int64_t)&v1; // 0x19f4df
    int64_t v3 = v2 + 16; // 0x19f508
    int64_t * v4 = (int64_t *)v3; // 0x19f508
    *v4 = v1;
    *(int64_t *)(v2 - 8) = v2;
    int64_t v5 = v2 + 8; // 0x19f522
    int64_t * v6 = (int64_t *)v5; // 0x19f525
    *(int64_t *)(v2 + 40) = *v6;
    v1 = v5;
    *v6 = v3;
    *v4 = v2 + 32;
    return function_c57b8(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x19f56a - 0x19f6ae
int64_t function_19f56a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x19f56a
    return function_c57b8(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x19f6ae - 0x19f81e
int64_t function_19f6ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x19f6ae
    return function_c57b8(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x19f81e - 0x19f93f
int64_t function_19f81e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x19f81e
    int64_t v1; // bp-56, 0x19f81e
    int64_t v2 = (int64_t)&v1; // 0x19f909
    int64_t v3 = v2 + 8; // 0x19f91e
    v1 = v3;
    *(int64_t *)v3 = v2 + 24;
    int64_t v4; // 0x19f81e
    return function_c57b8(a1, a2, a3, a4, 0x546c8f7b, v4);
}

// Address range: 0x19f93f - 0x19fae0
int64_t function_19f93f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x19f93f
    return function_c57b8(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x19fae0 - 0x19fc3d
int64_t function_19fae0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19fae0
    int64_t v1; // 0x19fae0
    return function_c57b8(a1, a2, a3, v1, v1, v1);
}

// Address range: 0x19fc3d - 0x19fd71
int64_t function_19fc3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19fc3d
    int64_t v1; // 0x19fc3d
    int64_t v2 = 0x100000000 * v1 >> 32; // 0x19fc3d
    int64_t v3 = 0x693bb871 * v2 != 0x693bb87100000000 * v2 >> 32; // 0x19fc43
    int64_t v4; // bp-56, 0x19fc3d
    int64_t v5 = (int64_t)&v4; // 0x19fce0
    int64_t v6 = v5 + 16; // 0x19fce6
    int64_t v7 = v5 + 8; // 0x19fcf5
    int64_t * v8 = (int64_t *)v7; // 0x19fcfc
    bool v9; // 0x19fc3d
    *v8 = 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | v3 | 256 * (int64_t)v9 | 128 * (int64_t)v9 | 2048 * v3 | 64 * (int64_t)v9 | 16 * (int64_t)v9 | 4 * (int64_t)v9 | 2;
    v4 = v7;
    *v8 = v7;
    int64_t * v10 = (int64_t *)v6; // 0x19fd11
    *v10 = a2;
    *(int64_t *)(v5 + 40) = *v8;
    *v8 = 0x19b98e;
    *(int64_t *)(v5 + 48) = *v10;
    *v10 = a4;
    *v8 = v6;
    *v10 = v5 + 32;
    return function_c57b8(a1, *v10, a3, *v10, v1, v1);
}

// Address range: 0x19fd71 - 0x19fea6
int64_t function_19fd71(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19fd71
    int64_t v1; // bp-40, 0x19fd71
    int64_t v2 = (int64_t)&v1; // 0x19fdde
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x19fde6
    int64_t * v4 = (int64_t *)v3; // 0x19fde6
    int64_t v5 = *(int64_t *)(v2 + 32); // 0x19fdf2
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x19fdf6
    *v6 = v2;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x19fe1c
    *v6 = 0x1b2c352c;
    *v7 = v5;
    v1 = *v6;
    *v6 = 0x9aa6224;
    *v7 = *(int64_t *)(v2 + 8);
    *(int64_t *)(v2 + 16) = *v6;
    *v6 = v2;
    *v6 = *v4;
    *v7 = v3;
    int64_t v8; // 0x19fd71
    return function_c57b8(a1, a2, a3, a4, v8, v8);
}

// Address range: 0x19fea6 - 0x19fff1
int64_t function_19fea6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x19fea6
    int64_t v1; // bp-40, 0x19fea6
    v1 = (int64_t)&v1;
    return function_c57b8(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x19fff1 - 0x1a0137
int64_t function_19fff1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x19fff1
    int64_t v1; // 0x19fff1
    return function_c57b8(0x5b87b7b8, a2, a3, v1, v1, v1);
}

// Address range: 0x1a0137 - 0x1a0293
int64_t function_1a0137(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1a0137
    int64_t v1; // bp-48, 0x1a0137
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x1a0137
    return function_c57b8(a1, v2, a3, a4, a5, a6);
}

// Address range: 0x1a0293 - 0x1a03ab
int64_t function_1a0293(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1a0293
    int64_t v1; // bp-40, 0x1a0293
    v1 = (int64_t)&v1 + 16;
    return function_c57b8(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x1a03b9 - 0x1a03bd
int64_t function_1a03b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1a03b9
    int64_t result; // 0x1a03b9
    return result;
}

// Address range: 0x1a03eb - 0x1a03ed
int64_t function_1a03eb(void) {
    // 0x1a03eb
    return function_1a0435((int64_t)&g5, (int64_t)&g5);
}

// Address range: 0x1a03ed - 0x1a0435
int64_t function_1a03ed(int64_t a1, int64_t a2) {
    // 0x1a03ed
    int64_t result; // 0x1a03ed
    return result;
}

// Address range: 0x1a0435 - 0x1a0485
int64_t function_1a0435(int64_t a1, int64_t a2) {
    // 0x1a0435
    int64_t result; // 0x1a0435
    return result;
}
