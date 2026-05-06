/*
 * Targeted RetDec C for native executable gap queue batch 969.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x29d8bf-0x29dabf rank=- name=- kind=- bytes=- uncovered=-
 *   0x29dabf-0x29dcbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x29dcbf-0x29debf rank=- name=- kind=- bytes=- uncovered=-
 *   0x29debf-0x29e0bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x29e0bf-0x29e2bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x29e2bf-0x29e4bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x29e4bf-0x29e6bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x29e6bf-0x29e8bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x469834-0x469a34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x46a034-0x46a234 rank=- name=- kind=- bytes=- uncovered=-
 *   0x46c67e-0x46c87e rank=- name=- kind=- bytes=- uncovered=-
 *   0x46ca7e-0x46cc7e rank=- name=- kind=- bytes=- uncovered=-
 *   0x46cc7e-0x46ce7e rank=- name=- kind=- bytes=- uncovered=-
 *   0x46ce7e-0x46d07e rank=- name=- kind=- bytes=- uncovered=-
 *   0x46d07e-0x46d27e rank=- name=- kind=- bytes=- uncovered=-
 *   0x46d27e-0x46d47e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_19f98386();
int64_t function_1f9e0442();
int64_t function_29d8bf(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_29daa4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29dad2(void);
int64_t function_29dae3(int64_t a1);
int64_t function_29dae6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29db62(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29db81(void);
int64_t function_29dbb9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29dbca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29dbee(int64_t a1, uint32_t a2, int64_t a3, int64_t a4);
int64_t function_29dc10(int64_t a1, int64_t a2);
int64_t function_29dc1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_29dc6b(int64_t a1);
int64_t function_29dc7e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29dd19(void);
int64_t function_29dd4d(void);
int64_t function_29dd6b(void);
int64_t function_29ddda(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29de43(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29de6f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29deb0(int64_t a1);
int64_t function_29deeb(int64_t a1);
int64_t function_29df33(void);
int64_t function_29e03b(int64_t a1);
int64_t function_29e056(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_29e169(void);
int64_t function_29e1a2(int64_t a1);
int64_t function_29e27d(void);
int64_t function_29e2a6(void);
int64_t function_29e2a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29e2bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29e2e2(void);
int64_t function_29e2eb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29e355(int64_t a1);
int64_t function_29e368(void);
int64_t function_29e3ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29e3c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29e433(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29e4fb(void);
int64_t function_29e505(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29e611(void);
int64_t function_29e630(void);
int64_t function_29e63c(void);
int64_t function_29e65f(void);
int64_t function_29e67e(void);
int64_t function_29e6a1(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_29e75d(void);
int64_t function_29e795(void);
int64_t function_29e7c2(void);
int64_t function_29e7ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29e80c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29e890(void);
int64_t function_29e8a9(int64_t a1);
int64_t function_2be81f13();
int64_t function_34659d35();
int64_t function_3e19e179();
int64_t function_4697ec();
int64_t function_469834(int64_t a1);
int64_t function_46983e(void);
int64_t function_46985e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4698dc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4698e5(void);
int64_t function_46992b(void);
int64_t function_46995a(void);
int64_t function_46997c(void);
int64_t function_4699cd(int64_t a1);
int64_t function_4699da(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4699ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4699fe(void);
int64_t function_469a05(int64_t a1);
int64_t function_469a29(void);
int64_t function_46a034(void);
int64_t function_46a088(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_46a0bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_46a0d1(int64_t a1);
int64_t function_46a13b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_46a154(void);
int64_t function_46c666();
int64_t function_46c67e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_46c68b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_46c68d(int64_t a1);
int64_t function_46c69d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_46c6ad(void);
int64_t function_46c744(void);
int64_t function_46c759(int64_t a1);
int64_t function_46ca7e(void);
int64_t function_46ca88(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_46cae3(void);
int64_t function_46cb0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_46cb7c(void);
int64_t function_46cbaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46cc27(void);
int64_t function_46cc2f(void);
int64_t function_46cc3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46cc48(void);
int64_t function_46cc92(void);
int64_t function_46ccba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46cce9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_46cd41(int64_t a1);
int64_t function_46cd7b(void);
int64_t function_46cd84(void);
int64_t function_46cda4(void);
int64_t function_46cdc3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46cdec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_46cf13(void);
int64_t function_46cf1d(int64_t a1);
int64_t function_46cf36(int64_t a1);
int64_t function_46cf39(void);
int64_t function_46d022(void);
int64_t function_46d030(int64_t a1);
int64_t function_46d0ef(int64_t result2, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_46d209(int64_t a1);
int64_t function_46d2ae(int64_t a1);
int64_t function_46d2e2(int64_t a1);
int64_t function_46d336(void);
int64_t function_46d364(int64_t a1);
int64_t function_46d377(void);
int64_t function_46d389(int64_t a1);
int64_t function_46d3c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4f353176();
int64_t function_558c89a2();
int64_t function_7254524f();
int64_t function_750d91b5();
int64_t function_7dee1b74();
int64_t function_7e54708a();
int64_t function_ffffffffb8e6c2a1();
int64_t function_ffffffffe6462777();
int64_t function_fffffffffe68f30e();
int64_t unknown_35eedda8();
int64_t unknown_3a2c6174();
int64_t unknown_3a75f7ab();
int64_t unknown_3abdefa0();
int64_t unknown_5fe115f2();
int64_t unknown_6b35b58a();
int64_t unknown_ffffffffb12f767f();
int64_t unknown_ffffffffbc2b3eba();
int64_t unknown_ffffffffe06e532e();
int64_t unknown_fffffffffb5d47e7();

// Address range: 0x29d8bf - 0x29d9d0
int64_t function_29d8bf(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    // 0x29d8bf
    int64_t v1; // 0x29d8bf
    int64_t v2 = v1;
    uint64_t v3 = v1;
    bool v4; // 0x29d8bf
    if (!v4) {
        // 0x29d8e3
        int64_t result; // 0x29d8bf
        return result;
    }
    int64_t v5 = v4 ? -4 : 4; // 0x29d8c4
    int32_t * v6 = (int32_t *)(a3 - 0x19d0995c); // 0x29d8c8
    int32_t v7 = v5 + a2; // 0x29d8c8
    *v6 = *v6 + v7;
    if ((v1 & 0xffffffff) == 1) {
        unsigned char v8 = *(char *)(v3 + a4 % 256); // 0x29d8d1
        uint32_t v9 = (int32_t)(a4 & 0xfb6d0000 | (int64_t)v8) | 0x492dfb0; // 0x29d8dc
        int64_t result2 = v9; // 0x29d8dc
        if (v9 >= 0) {
            // 0x29d8e3
            return result2;
        }
        int64_t v10 = (v3 & 0xff00) + v3 & 0xff00 | v3 & 0xffff00ff; // 0x29d8f8
        int32_t * v11 = (int32_t *)(result2 + 125); // 0x29d8fa
        int32_t v12 = *v11 & v7; // 0x29d8fa
        *v11 = v12;
        *(int64_t *)v2 = v2 + 8;
        if (v12 == 0) {
            // 0x29d904
            return v10 & 0xffffff00 | (int64_t)*(char *)(v3 % 256 + result2);
        }
        char * v13 = (char *)v10; // 0x29d93a
        char v14 = v3; // 0x29d93a
        *v13 = *v13 + v14;
        unsigned char v15 = llvm_ctpop_i8(v14 - 1); // 0x29d93c
        int64_t result3 = __asm_int1(); // 0x29d941
        if (v15 % 2 != 0) {
            // 0x29d944
            return (int64_t)(-95 * *(int32_t *)result3 & -256) | (int64_t)__asm_in_133(89);
        }
        // 0x29d8e3
        return result3;
    }
    int64_t v16 = v5 + a1; // 0x29d8c4
    char * v17 = (char *)(int64_t)__asm_in((int16_t)a3); // 0x29d926
    *v17 = *v17 + 1;
    int64_t v18 = unknown_ffffffffe06e532e(); // 0x29d928
    int32_t * v19 = (int32_t *)(v16 - 42); // 0x29d92f
    uint32_t v20 = *v19; // 0x29d92f
    uint32_t v21 = v20 + (int32_t)a3; // 0x29d92f
    *v19 = v21;
    if (v21 >= v20) {
        // 0x29d934
        return (v18 + 232) % 256 | v18 & -256;
    }
    int32_t * v22 = (int32_t *)(v2 + 110); // 0x29d98d
    *v22 = *v22 + v7;
    *(char *)0x77aa1a98 = *(char *)0x77aa1a98 + (char)(v3 / 256);
    uint64_t v23 = __asm_int3(v16); // 0x29d998
    int64_t v24 = ((v18 | v2) & 256) == 0 ? 104 : 105; // 0x29d999
    char v25 = (char)(v23 / 256) + (char)(a3 / 256); // 0x29d99b
    int64_t result4 = (v23 + v24) % 256 | v23 & -0x10000 | 256 * (int64_t)v25; // 0x29d99b
    if (v25 < 0) {
        // 0x29d9cf
        return result4;
    }
    // 0x29d8e3
    return result4;
}

// Address range: 0x29daa4 - 0x29daad
int64_t function_29daa4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29daa4
    int64_t v1; // 0x29daa4
    return (int64_t)((int32_t)a2 - *(int32_t *)(v1 + 104));
}

// Address range: 0x29dad2 - 0x29dad4
int64_t function_29dad2(void) {
    // 0x29dad2
    int64_t v1; // 0x29dad2
    return function_29dae6(v1, v1, v1, v1);
}

// Address range: 0x29dae3 - 0x29dae6
int64_t function_29dae3(int64_t a1) {
    // 0x29dae3
    int64_t result; // 0x29dae3
    *(int32_t *)a1 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x29dae6 - 0x29daf1
int64_t function_29dae6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29dae6
    int64_t v1; // 0x29dae6
    *(int32_t *)v1 = (int32_t)a4;
    return function_558c89a2();
}

// Address range: 0x29db62 - 0x29db77
int64_t function_29db62(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x29db62
    int64_t v1; // 0x29db62
    int64_t v2 = v1 & -256; // 0x29db62
    int64_t v3 = v2 | (int64_t)(*(char *)(a3 + 71) + (char)v1); // 0x29db62
    int32_t * v4 = (int32_t *)(v3 + 55); // 0x29db68
    *v4 = *v4 + (int32_t)a4;
    __asm_int(5);
    __asm_out((int16_t)a3, (int32_t)v3);
    char * v5 = (char *)v3; // 0x29db70
    *v5 = *v5 + 61;
    return v2 | (int64_t)__asm_in_133(84);
}

// Address range: 0x29db81 - 0x29db82
int64_t function_29db81(void) {
    // 0x29db81
    int64_t result; // 0x29db81
    return result;
}

// Address range: 0x29dbb9 - 0x29dbc9
int64_t function_29dbb9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29dbb9
    int64_t v1; // 0x29dbb9
    int32_t v2 = *(int32_t *)(v1 + 0x3d2d3ee1); // 0x29dbb9
    uint32_t v3 = (int32_t)v1;
    uint32_t v4 = 2 * v3; // 0x29dbbf
    *(int32_t *)v1 = v4;
    int64_t v5; // 0x29dbb9
    int32_t v6 = *(int32_t *)&v5; // 0x29dbc1
    *(int32_t *)a3 = v6 - (int32_t)v1 + (int32_t)(v4 < v3);
    bool v7; // 0x29dbb9
    return function_29dbee(a1, (int32_t)v7 + (int32_t)a2 - v2, a3, v1);
}

// Address range: 0x29dbca - 0x29dbee
int64_t function_29dbca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29dbca
    bool v1; // 0x29dbca
    if (v1 || v1) {
        // 0x29dbcc
        __asm_sti();
    }
    char * v2 = (char *)(a4 - 0x2c819c17); // 0x29dbcd
    char v3 = a4; // 0x29dbcd
    *v2 = *v2 + v3;
    int64_t result = unknown_5fe115f2(); // 0x29dbe4
    int64_t v4; // 0x29dbca
    char * v5 = (char *)(v4 - 62); // 0x29dbe9
    *v5 = *v5 - v3;
    return result;
}

// Address range: 0x29dbee - 0x29dc0f
int64_t function_29dbee(int64_t a1, uint32_t a2, int64_t a3, int64_t a4) {
    // 0x29dbee
    int64_t v1; // 0x29dbee
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    uint64_t v3 = 256 * a4 + a3;
    int64_t v4 = v3 & 0xff00 | a3 & -0xff01; // 0x29dbf7
    char * v5 = (char *)v4; // 0x29dbfb
    *v5 = *v5 - 15;
    unsigned char v6 = *(char *)(a1 + 113); // 0x29dc00
    uint32_t v7 = *(int32_t *)v4 + a2; // 0x29dc03
    uint32_t v8 = v7 + (int32_t)(v6 > (char)(v3 / 256)); // 0x29dc03
    bool v9 = v6 > (char)(v3 / 256) ? v8 <= a2 : v7 < a2; // 0x29dc03
    unsigned char v10 = (char)v8; // 0x29dc0b
    unsigned char v11 = v10 - 74 + (char)v9; // 0x29dc0b
    bool v12 = v9 ? v11 <= v10 : v10 > 73; // 0x29dc0b
    int32_t v13 = *(int32_t *)(2 * v2 & 254 | v2 & 0xffffff00); // 0x29dc0d
    return (v8 & -256 | (int32_t)v11) - v13 + (int32_t)v12;
}

// Address range: 0x29dc10 - 0x29dc1e
int64_t function_29dc10(int64_t a1, int64_t a2) {
    // 0x29dc10
    __asm_int(0);
    int64_t result; // 0x29dc10
    __asm_out_134(-109, (char)result);
    return result;
}

// Address range: 0x29dc1e - 0x29dc44
int64_t function_29dc1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x29dc1e
    bool v1; // 0x29dc1e
    bool v2 = v1;
    int64_t v3; // 0x29dc1e
    uint32_t v4 = (int32_t)v3; // 0x29dc1e
    int32_t v5 = v2; // 0x29dc1e
    uint32_t v6 = v5 + v4; // 0x29dc1e
    bool v7 = v2 ? (int32_t)v2 - v5 > v4 | v6 != -1 : v6 > v4; // 0x29dc1e
    __asm_out_134(-71, (char)v3);
    int32_t v8 = *(int32_t *)((v1 ? -1 : 1) + a2); // 0x29dc36
    __asm_outsd((int16_t)a3 - (int16_t)v3 + (int16_t)v7, v8);
    int64_t result = (uint64_t)v3 % 256 | (int64_t)&g1 | v3 & -0x10000; // 0x29dc39
    int32_t * v9 = (int32_t *)a5; // 0x29dc41
    *v9 = *v9 + (int32_t)result;
    return result;
}

// Address range: 0x29dc6b - 0x29dc6d
int64_t function_29dc6b(int64_t a1) {
    // 0x29dc6b
    int64_t result; // 0x29dc6b
    return result;
}

// Address range: 0x29dc7e - 0x29dc82
int64_t function_29dc7e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29dc7e
    int64_t result; // 0x29dc7e
    return result;
}

// Address range: 0x29dd19 - 0x29dd1a
int64_t function_29dd19(void) {
    // 0x29dd19
    int64_t result; // 0x29dd19
    return result;
}

// Address range: 0x29dd4d - 0x29dd4e
int64_t function_29dd4d(void) {
    // 0x29dd4d
    int64_t result; // 0x29dd4d
    return result;
}

// Address range: 0x29dd6b - 0x29dd6d
int64_t function_29dd6b(void) {
    // 0x29dd6b
    return function_29dd19();
}

// Address range: 0x29ddda - 0x29dde8
int64_t function_29ddda(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __asm_fnstenv(); // 0x29ddda
    *(int224_t *)(a4 + 61) = (int224_t)v1;
    int32_t v2 = v1; // 0x29dddd
    int64_t v3; // 0x29ddda
    *(int32_t *)v1 = v2 + (int32_t)v3;
    __asm_out((int16_t)a3, v2);
    *(int32_t *)(v1 + 7) = (int32_t)a1;
    return __asm_in_135(45);
}

// Address range: 0x29de43 - 0x29de48
int64_t function_29de43(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29de43
    return function_29deb0((int64_t)&g2);
}

// Address range: 0x29de6f - 0x29de8e
int64_t function_29de6f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)-0x3910928a; // 0x29de6f
    int64_t v2; // 0x29de6f
    *(char *)-0x3910928a = v1 + (char)((uint64_t)v2 / 256);
    __asm_out((int16_t)a3, (int32_t)v2);
    return a2 & 0xffffffff;
}

// Address range: 0x29deb0 - 0x29deb1
int64_t function_29deb0(int64_t a1) {
    // 0x29deb0
    int64_t result; // 0x29deb0
    return result;
}

// Address range: 0x29deeb - 0x29deec
int64_t function_29deeb(int64_t a1) {
    // 0x29deeb
    int64_t result; // 0x29deeb
    return result;
}

// Address range: 0x29df33 - 0x29df3d
int64_t function_29df33(void) {
    // 0x29df33
    return (int64_t)*(int32_t *)0x472010fe6d1ef084;
}

// Address range: 0x29e03b - 0x29e03c
int64_t function_29e03b(int64_t a1) {
    // 0x29e03b
    int64_t result; // 0x29e03b
    return result;
}

// Address range: 0x29e056 - 0x29e101
int64_t function_29e056(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint32_t v1 = (int32_t)unknown_3abdefa0() ^ 0x5c8e0247; // 0x29e09f
    int64_t result = unknown_3a75f7ab(); // 0x29e0aa
    if (v1 >= 1) {
        // 0x29e0ad
        return result;
    }
    // 0x29e0e1
    unknown_fffffffffb5d47e7();
    int64_t result2; // 0x29e0f4
    char * v2; // 0x29e0f8
    if (v1 == 0) {
        // 0x29e0ef
        result2 = a5 & 0xffffffff;
        v2 = (char *)result2;
        *v2 = *v2 - (char)a5;
        return result2;
    }
    // 0x29e0ec
    function_7dee1b74();
    if (a4 == 1) {
        // 0x29e0ef
        result2 = a5 & 0xffffffff;
        v2 = (char *)result2;
        *v2 = *v2 - (char)a5;
        return result2;
    }
    // 0x29e0d4
    if (llvm_ctpop_i8((char)v1) % 2 == 0) {
        // 0x29e0ad
        return __asm_wait();
    }
    // 0x29e067
    unknown_3a2c6174();
    int64_t v3 = a3 & 0xff00 | a5; // 0x29e077
    unknown_ffffffffb12f767f();
    *(int224_t *)(v3 + 0x30ec7a8d) = (int224_t)__asm_fnstenv();
    int64_t v4 = unknown_6b35b58a(); // 0x29e084
    int32_t v5 = *(int32_t *)(a3 + 40 + (2 * (v4 + v3) & 0x1fffffffe)); // 0x29e08b
    return v5 + (int32_t)v4;
}

// Address range: 0x29e169 - 0x29e16a
int64_t function_29e169(void) {
    // 0x29e169
    int64_t result; // 0x29e169
    return result;
}

// Address range: 0x29e1a2 - 0x29e1a8
int64_t function_29e1a2(int64_t a1) {
    // 0x29e1a2
    return unknown_35eedda8(a1);
}

// Address range: 0x29e27d - 0x29e27e
int64_t function_29e27d(void) {
    // 0x29e27d
    int64_t result; // 0x29e27d
    return result;
}

// Address range: 0x29e2a6 - 0x29e2a7
int64_t function_29e2a6(void) {
    // 0x29e2a6
    int64_t result; // 0x29e2a6
    return result;
}

// Address range: 0x29e2a8 - 0x29e2bc
int64_t function_29e2a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29e2a8
    int64_t v1; // 0x29e2a8
    char * v2 = (char *)(v1 + 0x3d000002); // 0x29e2b2
    *v2 = *v2 + 59;
    int64_t v3; // 0x29e2a8
    int64_t v4 = v3;
    *(int32_t *)v4 = *(int32_t *)&v3 + (int32_t)v4;
    return function_29e2a6();
}

// Address range: 0x29e2bc - 0x29e2c0
int64_t function_29e2bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29e2bc
    bool v1; // 0x29e2bc
    if (a4 == 1 || v1) {
        // 0x29e2be
        return function_29e27d();
    }
    // 0x29e2f1
    int64_t result; // 0x29e2bc
    return result;
}

// Address range: 0x29e2e2 - 0x29e2e5
int64_t function_29e2e2(void) {
    // 0x29e2e2
    int64_t result; // 0x29e2e2
    return result;
}

// Address range: 0x29e2eb - 0x29e2f1
int64_t function_29e2eb(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 0x430aa000); // 0x29e2eb
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x29e2eb
    return result;
}

// Address range: 0x29e355 - 0x29e35f
int64_t function_29e355(int64_t a1) {
    // 0x29e355
    int64_t v1; // 0x29e355
    *(char *)a1 = (char)v1;
    char * v2 = (char *)(v1 + 0x5dd540e4); // 0x29e356
    *v2 = (char)(v1 / 256);
    return 256 * (int64_t)*v2 | v1 & -0xff01;
}

// Address range: 0x29e368 - 0x29e371
int64_t function_29e368(void) {
    // 0x29e368
    int64_t v1; // 0x29e368
    int64_t result = v1;
    bool v2; // 0x29e368
    *(int32_t *)result = (int32_t)result - (int32_t)v1 + (int32_t)v2;
    return result;
}

// Address range: 0x29e3ae - 0x29e3b7
int64_t function_29e3ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29e3ae
    return function_ffffffffe6462777();
}

// Address range: 0x29e3c8 - 0x29e432
int64_t function_29e3c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t result; // 0x29e3c8
    *(int32_t *)a1 = (int32_t)result;
    bool v2; // 0x29e3c8
    int64_t v3 = (v2 ? -8 : 8) + a1; // 0x29e3c9
    int64_t v4; // 0x29e3c8
    char * v5 = (char *)(v4 - 49); // 0x29e3d3
    char v6 = *v5; // 0x29e3d3
    unsigned char v7 = (char)a4; // 0x29e3d3
    *v5 = v6 - v7;
    if ((int64_t)v6 > a4) {
        int32_t * v8 = (int32_t *)v3; // 0x29e3d8
        *v8 = *v8 + (int32_t)v4;
        return result;
    }
    // 0x29e415
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v3;
    uint32_t v9 = -0xaa90a6f * *(int32_t *)(v3 + 0xa006b51e); // 0x29e417
    *(int32_t *)v4 = *(int32_t *)&v4 & (int32_t)v1;
    unsigned char v10 = v7 % 32; // 0x29e42f
    if (v10 != 0) {
        char * v11 = (char *)(v4 + 96); // 0x29e42f
        unsigned char v12 = *v11; // 0x29e42f
        *v11 = v12 << v10 | (char)(v9 > 0x52a1c3f7) << v10 - 1 | (char)((int16_t)v12 >> (int16_t)(9 - v10));
    }
    return v9 - 0x52a1c3f8;
}

// Address range: 0x29e433 - 0x29e46e
int64_t function_29e433(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29e433
    int64_t v1; // 0x29e433
    int64_t v2 = 0xffffffcc * v1; // 0x29e43a
    int32_t v3 = __asm_in((int16_t)v2); // 0x29e448
    int32_t * v4 = (int32_t *)(int64_t)(-21 * *(int32_t *)(v2 & 0xfffffffc)); // 0x29e451
    *v4 = *v4 | (int32_t)a2;
    unsigned char v5 = *(char *)0x487b006821d09a0a; // 0x29e45a
    int64_t v6 = v3 & -256; // 0x29e45a
    return (int64_t)(v5 - *(char *)((int64_t)v5 | v6)) | v6;
}

// Address range: 0x29e4fb - 0x29e4fc
int64_t function_29e4fb(void) {
    // 0x29e4fb
    int64_t result; // 0x29e4fb
    return result;
}

// Address range: 0x29e505 - 0x29e5ed
int64_t function_29e505(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a1;
    int64_t v3; // 0x29e505
    bool v4; // 0x29e505
    if (v4) {
        uint32_t v5 = (int32_t)v3; // 0x29e509
        uint32_t v6 = *(int32_t *)(a3 - 0x7eef0a7b); // 0x29e509
        int32_t v7 = v6 + v5; // 0x29e509
        return 2 * v3 & 0xffff00ff | 256 * (64 * (int64_t)(v7 == 0) | (int64_t)(v7 < v5) | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v6 % 16 + v5 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8((char)v7) % 2 == 0)) | 512;
    }
    char * v8 = (char *)(v3 + 16); // 0x29e56f
    *v8 = *v8 & (char)v3;
    *(int32_t *)v1 = *(int32_t *)&v1 | (int32_t)v2;
    if (*(int32_t *)&v2 < (int32_t)v3) {
        function_29e4fb();
    }
    // 0x29e579
    return v3 & 0xffffff00;
}

// Address range: 0x29e611 - 0x29e612
int64_t function_29e611(void) {
    // 0x29e611
    int64_t result; // 0x29e611
    return result;
}

// Address range: 0x29e630 - 0x29e633
int64_t function_29e630(void) {
    // 0x29e630
    int64_t result; // 0x29e630
    return result;
}

// Address range: 0x29e63c - 0x29e63d
int64_t function_29e63c(void) {
    // 0x29e63c
    int64_t result; // 0x29e63c
    return result;
}

// Address range: 0x29e65f - 0x29e661
int64_t function_29e65f(void) {
    // 0x29e65f
    int64_t v1; // 0x29e65f
    return function_29e6a1(v1, v1, v1, v1, (int64_t)&g2);
}

// Address range: 0x29e67e - 0x29e680
int64_t function_29e67e(void) {
    // 0x29e67e
    return function_29e611();
}

// Address range: 0x29e6a1 - 0x29e6e0
int64_t function_29e6a1(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    bool v2; // 0x29e6a1
    if (!v2) {
        function_29e63c();
    }
    // 0x29e6a3
    int64_t v3; // 0x29e6a1
    *(char *)0x5bb581aa = *(char *)0x5bb581aa + (char)(v3 / 256);
    int64_t v4 = a4 + a1; // 0x29e6a9
    int64_t v5 = v4 & 0xffffffff; // 0x29e6a9
    char * v6 = (char *)v5; // 0x29e6ab
    *v6 = *v6 ^ (char)(a3 / 256);
    unknown_ffffffffbc2b3eba();
    *(int64_t *)(a3 + 0x3d00fecb) = a5;
    int32_t * v7 = (int32_t *)(v1 - 65); // 0x29e6bf
    uint32_t v8 = *v7; // 0x29e6bf
    uint32_t v9 = v8 + (int32_t)v3; // 0x29e6bf
    *v7 = v9;
    uint32_t v10 = (int32_t)v4; // 0x29e6c8
    uint32_t v11 = v10 % 32; // 0x29e6c8
    if (v11 != 0) {
        uint32_t v12 = *(int32_t *)&v1; // 0x29e6c8
        *(int32_t *)v1 = (int32_t)(v9 < v8) << v11 - 1 | v12 << v11 | (int32_t)((int64_t)v12 >> (int64_t)(33 - v11));
    }
    int64_t v13 = __asm_iretd(); // 0x29e6ca
    *(int32_t *)v1 = __asm_insd((int16_t)a3);
    int64_t v14; // 0x29e6a1
    char * v15 = (char *)(v5 + (int64_t)&v14); // 0x29e6cc
    *v15 = *v15 ^ (char)v4;
    uint32_t v16 = 0x10000 * (int32_t)v13 >> 16; // 0x29e6cf
    int32_t * v17 = (int32_t *)(8 * v3 + 0xb162ab); // 0x29e6d1
    *v17 = *v17 | v10;
    return ((int64_t)v16 + 109 + (int64_t)(v16 < 0x5c0a7f01)) % 256 | (int64_t)(v16 & -256);
}

// Address range: 0x29e75d - 0x29e760
int64_t function_29e75d(void) {
    // 0x29e75d
    int64_t result; // 0x29e75d
    return result;
}

// Address range: 0x29e795 - 0x29e79a
int64_t function_29e795(void) {
    // 0x29e795
    return function_7e54708a();
}

// Address range: 0x29e7c2 - 0x29e7c7
int64_t function_29e7c2(void) {
    // 0x29e7c2
    int64_t v1; // 0x29e7c2
    char * v2 = (char *)(v1 + 113); // 0x29e7c2
    bool v3; // 0x29e7c2
    *v2 = (char)v3 - (char)v1 + *v2;
    return function_29e80c(v1, v1, v1, v1);
}

// Address range: 0x29e7ca - 0x29e7d7
int64_t function_29e7ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29e7ca
    float80_t v1; // 0x29e7ca
    *(int16_t *)(a3 + 0x965b734) = (int16_t)v1;
    int64_t v2; // 0x29e7ca
    uint32_t result = *(int32_t *)&v2; // 0x29e7d0
    int64_t v3; // 0x29e7ca
    *(char *)a1 = *(char *)&v3 + (char)result;
    return result;
}

// Address range: 0x29e80c - 0x29e84a
int64_t function_29e80c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29e80c
    int64_t v1; // 0x29e80c
    int64_t v2 = v1;
    int64_t v3 = a3;
    uint32_t v4 = (int32_t)a4 % 32; // 0x29e80d
    bool v5; // 0x29e80c
    bool v6 = !v5; // 0x29e80d
    if (v4 != 0) {
        uint32_t v7 = (int32_t)v2;
        uint32_t v8 = v7 >> 32 - v4 | v7 << v4; // 0x29e80d
        *(int32_t *)v2 = v8;
        v6 = v8 % 2 != 0;
    }
    int64_t result = (v2 - (v6 ? 189 : 188)) % 256 | v2 & -256; // 0x29e80f
    if (a4 == 0) {
        // 0x29e83c
        return result;
    }
    int32_t v9 = *(int32_t *)&v3; // 0x29e822
    *(int32_t *)v3 = (int32_t)((int32_t)result < 0x5e1e5f01) - (int32_t)a2 + v9;
    return result;
}

// Address range: 0x29e890 - 0x29e891
int64_t function_29e890(void) {
    // 0x29e890
    int64_t result; // 0x29e890
    return result;
}

// Address range: 0x29e8a9 - 0x29e8aa
int64_t function_29e8a9(int64_t a1) {
    // 0x29e8a9
    int64_t result; // 0x29e8a9
    return result;
}

// Address range: 0x469834 - 0x469837
int64_t function_469834(int64_t a1) {
    // 0x469834
    int64_t result; // 0x469834
    return result;
}

// Address range: 0x46983e - 0x46983f
int64_t function_46983e(void) {
    // 0x46983e
    int64_t result; // 0x46983e
    return result;
}

// Address range: 0x46985e - 0x4698d9
int64_t function_46985e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result; // 0x46985e
    bool v1; // 0x46985e
    if (v1) {
        result = function_4697ec();
    }
    // 0x469862
    return result;
}

// Address range: 0x4698dc - 0x4698e5
int64_t function_4698dc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4698dc
    int64_t v1; // 0x4698dc
    unsigned char v2 = (char)v1; // 0x4698dd
    unsigned char v3 = v2 - 68 + (char)((int32_t)v1 < (int32_t)v1); // 0x4698dd
    char v4 = (int32_t)v1 < (int32_t)v1 ? v3 <= v2 : v2 > 67 ? 103 : 102; // 0x4698df
    char * v5 = (char *)(v1 + 17); // 0x4698e1
    *v5 = 2 * *v5;
    return v1 & -256 | (int64_t)(v3 - v4);
}

// Address range: 0x4698e5 - 0x4698e7
int64_t function_4698e5(void) {
    // 0x4698e5
    int64_t v1; // 0x4698e5
    return function_4698dc(v1, v1, (int64_t)&g2);
}

// Address range: 0x46992b - 0x469935
int64_t function_46992b(void) {
    // 0x46992b
    int64_t v1; // 0x46992b
    return v1 & -41;
}

// Address range: 0x46995a - 0x46995f
int64_t function_46995a(void) {
    // 0x46995a
    return function_19f98386();
}

// Address range: 0x46997c - 0x46997d
int64_t function_46997c(void) {
    // 0x46997c
    int64_t result; // 0x46997c
    return result;
}

// Address range: 0x4699cd - 0x4699da
int64_t function_4699cd(int64_t a1) {
    // 0x4699cd
    int64_t v1; // 0x4699cd
    int64_t v2 = v1;
    *(int32_t *)-0x138ebcc1c109f8c1 = (int32_t)v2;
    return (v2 + (uint64_t)v1 / 256) % 256 | v2 & -256;
}

// Address range: 0x4699da - 0x4699ed
int64_t function_4699da(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_in((int16_t)a3); // 0x4699db
    bool v2; // 0x4699da
    if (v2) {
        v1 = function_46997c();
    }
    // 0x4699dd
    *(int32_t *)a1 = (int32_t)v1;
    int16_t v3 = v1; // 0x4699de
    int16_t v4 = (int16_t)*(char *)(a2 + 115); // 0x4699de
    __asm_outsd((int16_t)a4, (int32_t)a2);
    int64_t v5 = v2 ? 0x591dddc4 : 0x591dddc3; // 0x4699e3
    int64_t v6; // 0x4699da
    char * v7 = (char *)(v6 + 67); // 0x4699e8
    *v7 = *v7 + (char)a4;
    return (v1 & 0xffff0000 | (int64_t)(v3 / v4 % 256) | (int64_t)(256 * (v3 % v4))) + v5 & 0xffffffff;
}

// Address range: 0x4699ee - 0x4699f1
int64_t function_4699ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4699ee
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x4699ee
    return result;
}

// Address range: 0x4699fe - 0x4699ff
int64_t function_4699fe(void) {
    // 0x4699fe
    int64_t result; // 0x4699fe
    return result;
}

// Address range: 0x469a05 - 0x469a08
int64_t function_469a05(int64_t a1) {
    // 0x469a05
    int64_t result; // 0x469a05
    return result;
}

// Address range: 0x469a29 - 0x469a2f
int64_t function_469a29(void) {
    // 0x469a29
    return function_ffffffffb8e6c2a1();
}

// Address range: 0x46a034 - 0x46a04f
int64_t function_46a034(void) {
    // 0x46a034
    int64_t result; // 0x46a034
    bool v1; // 0x46a034
    if (v1) {
        // 0x46a036
        return result;
    }
    // 0x46a044
    *(char *)-0x2e9ddd9006b49bc0 = (char)result;
    return result;
}

// Address range: 0x46a088 - 0x46a0bb
int64_t function_46a088(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x46a088
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    bool v1; // 0x46a088
    int64_t result = __asm_int3((v1 ? -1 : 1) + a1); // 0x46a0a2
    int64_t v2; // 0x46a088
    *(char *)v2 = (char)result;
    return result;
}

// Address range: 0x46a0bb - 0x46a0cf
int64_t function_46a0bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x46a0bb
    *(int64_t *)a6 = a7;
    char v1 = *(char *)-0x4a7c4619; // 0x46a0c7
    int64_t v2; // 0x46a0bb
    *(char *)-0x4a7c4619 = v1 - (char)((uint64_t)v2 / 256);
    return v2 + 0x66212570 & 0xffffffff;
}

// Address range: 0x46a0d1 - 0x46a0d2
int64_t function_46a0d1(int64_t a1) {
    // 0x46a0d1
    int64_t result; // 0x46a0d1
    return result;
}

// Address range: 0x46a13b - 0x46a143
int64_t function_46a13b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x46a13b
    return function_3e19e179();
}

// Address range: 0x46a154 - 0x46a15a
int64_t function_46a154(void) {
    // 0x46a154
    return function_2be81f13();
}

// Address range: 0x46c67e - 0x46c68a
int64_t function_46c67e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x46c67e
    *(char *)(a2 - 112) = (char)a4;
    int64_t result; // 0x46c67e
    bool v1; // 0x46c67e
    if (v1) {
        result = function_46c666();
    }
    // 0x46c683
    return result;
}

// Address range: 0x46c68b - 0x46c68d
int64_t function_46c68b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x46c68b
    int64_t result; // 0x46c68b
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x46c68d - 0x46c68e
int64_t function_46c68d(int64_t a1) {
    // 0x46c68d
    int64_t result; // 0x46c68d
    return result;
}

// Address range: 0x46c69d - 0x46c6a1
int64_t function_46c69d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x46c69d
    int64_t v1; // 0x46c69d
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return 256 * v1 & 0xff00 | v1;
}

// Address range: 0x46c6ad - 0x46c6b3
int64_t function_46c6ad(void) {
    // 0x46c6ad
    return function_750d91b5();
}

// Address range: 0x46c744 - 0x46c752
int64_t function_46c744(void) {
    // 0x46c744
    return function_1f9e0442();
}

// Address range: 0x46c759 - 0x46c75a
int64_t function_46c759(int64_t a1) {
    // 0x46c759
    int64_t result; // 0x46c759
    return result;
}

// Address range: 0x46ca7e - 0x46ca7f
int64_t function_46ca7e(void) {
    // 0x46ca7e
    int64_t result; // 0x46ca7e
    return result;
}

// Address range: 0x46ca88 - 0x46ca8d
int64_t function_46ca88(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x46ca88
    int64_t v1; // 0x46ca88
    bool v2; // 0x46ca88
    return v1 - a4 + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x46cae3 - 0x46cae4
int64_t function_46cae3(void) {
    // 0x46cae3
    int64_t result; // 0x46cae3
    return result;
}

// Address range: 0x46cb0f - 0x46cb67
int64_t function_46cb0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x46cb0f
    bool v1; // 0x46cb0f
    if (!v1) {
        function_46cae3();
    }
    int16_t v2 = a3; // 0x46cb19
    __asm_in(v2);
    int64_t result = __asm_hlt(); // 0x46cb1a
    if (v1) {
        // 0x46cb5a
        __asm_outsd(v2, *(int32_t *)a6);
        int32_t * v3 = (int32_t *)(a5 + 0x1ca12170); // 0x46cb61
        *v3 = *v3 & (int32_t)result;
        return result;
    }
    // 0x46cb1d
    int64_t v4; // 0x46cb0f
    float80_t v5; // 0x46cb0f
    *(int16_t *)(v4 + a4) = (int16_t)v5;
    return result;
}

// Address range: 0x46cb7c - 0x46cb81
int64_t function_46cb7c(void) {
    // 0x46cb7c
    return function_fffffffffe68f30e();
}

// Address range: 0x46cbaa - 0x46cbbd
int64_t function_46cbaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x46cbaa
    int64_t result; // 0x46cbaa
    *(int32_t *)0x167e79c1666683fd = (int32_t)result;
    return result;
}

// Address range: 0x46cc27 - 0x46cc28
int64_t function_46cc27(void) {
    // 0x46cc27
    int64_t result; // 0x46cc27
    return result;
}

// Address range: 0x46cc2f - 0x46cc3b
int64_t function_46cc2f(void) {
    // 0x46cc2f
    int64_t v1; // 0x46cc2f
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 | 99;
    return function_46cc27();
}

// Address range: 0x46cc3b - 0x46cc47
int64_t function_46cc3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x46cc3b
    int64_t v1; // 0x46cc3b
    *(char *)a4 = (char)(v1 | v1);
    __asm_wait();
    return function_7254524f();
}

// Address range: 0x46cc48 - 0x46cc4c
int64_t function_46cc48(void) {
    // 0x46cc48
    int64_t result; // 0x46cc48
    return result;
}

// Address range: 0x46cc92 - 0x46cc93
int64_t function_46cc92(void) {
    // 0x46cc92
    int64_t result; // 0x46cc92
    return result;
}

// Address range: 0x46ccba - 0x46cce7
int64_t function_46ccba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x46ccba
    int64_t v1; // 0x46ccba
    int64_t v2 = v1;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int32_t * v3 = (int32_t *)((v1 & -256 | (int64_t)__asm_in_133(65)) - 0x1481c818); // 0x46ccce
    *v3 = *v3 & (int32_t)a2;
    *(int32_t *)(v2 + 78) = (int32_t)v2;
    *(int64_t *)((v1 & 0xffffffff) - 8) = a4;
    return function_46cc92();
}

// Address range: 0x46cce9 - 0x46cd0f
int64_t function_46cce9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x46cce9
    *(int64_t *)(a2 + 57) = a5;
    int64_t v1; // 0x46cce9
    int64_t v2 = v1 & -256; // 0x46ccec
    bool v3; // 0x46cce9
    if (v3) {
        // 0x46cd0e
        *(char *)a1 = -94;
        return v2 | 162;
    }
    // 0x46ccf0
    return v2 | 188;
}

// Address range: 0x46cd41 - 0x46cd42
int64_t function_46cd41(int64_t a1) {
    // 0x46cd41
    int64_t result; // 0x46cd41
    return result;
}

// Address range: 0x46cd7b - 0x46cd7c
int64_t function_46cd7b(void) {
    // 0x46cd7b
    int64_t result; // 0x46cd7b
    return result;
}

// Address range: 0x46cd84 - 0x46cd86
int64_t function_46cd84(void) {
    // 0x46cd84
    int64_t v1; // 0x46cd84
    return function_46cdec(v1, v1, v1, v1, (int64_t)&g2);
}

// Address range: 0x46cda4 - 0x46cda6
int64_t function_46cda4(void) {
    // 0x46cda4
    return function_46cd7b();
}

// Address range: 0x46cdc3 - 0x46cdeb
int64_t function_46cdc3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x46cdc3
    int64_t v1; // 0x46cdc3
    int64_t v2; // 0x46cdc3
    bool v3; // 0x46cdc3
    if (v3) {
        v1 = function_46cdec(a1, a2, a3, v2, (int64_t)&g2);
    }
    int32_t * v4 = (int32_t *)(2 * a3 + 0x9d58f89); // 0x46cdc5
    *v4 = *v4 - 0x2d2a49b0;
    int32_t * v5 = (int32_t *)(a2 - 106); // 0x46cdd0
    *v5 = *v5 ^ 0x7fc8f24a;
    int32_t * v6 = (int32_t *)(v2 - 0x3b55c4e6); // 0x46cddc
    int32_t v7 = *v6; // 0x46cddc
    *v6 = (int32_t)((int32_t)v1 < 0x7b056631) + (int32_t)a2 + v7;
    return v1 + 0x84fa99cf & 0xffffff59;
}

// Address range: 0x46cdec - 0x46ce66
int64_t function_46cdec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x46cdec
    int64_t v1; // 0x46cdec
    int64_t v2 = v1 & -256 | (int64_t)__asm_in_133(20); // 0x46cdee
    int32_t * v3 = (int32_t *)(v2 - 109); // 0x46cdf0
    *v3 = *v3 ^ (int32_t)a1;
    int64_t v4; // 0x46cdec
    *(int32_t *)a2 = *(int32_t *)&v4 ^ (int32_t)a2;
    uint64_t v5 = (v2 + 0x102d8236 & 0xffffffff ^ 0xd910399) + 0x31120e5f; // 0x46ce60
    return v5 & 0xffffff00 | (int64_t)*(char *)(v5 % 256 + v1);
}

// Address range: 0x46cf13 - 0x46cf1a
int64_t function_46cf13(void) {
    // 0x46cf13
    return function_4f353176();
}

// Address range: 0x46cf1d - 0x46cf1e
int64_t function_46cf1d(int64_t a1) {
    // 0x46cf1d
    int64_t result; // 0x46cf1d
    return result;
}

// Address range: 0x46cf36 - 0x46cf37
int64_t function_46cf36(int64_t a1) {
    // 0x46cf36
    int64_t result; // 0x46cf36
    return result;
}

// Address range: 0x46cf39 - 0x46cf3a
int64_t function_46cf39(void) {
    // 0x46cf39
    int64_t result; // 0x46cf39
    return result;
}

// Address range: 0x46d022 - 0x46d027
int64_t function_46d022(void) {
    // 0x46d022
    return function_34659d35();
}

// Address range: 0x46d030 - 0x46d033
int64_t function_46d030(int64_t a1) {
    // 0x46d030
    int64_t result; // 0x46d030
    return result;
}

// Address range: 0x46d0ef - 0x46d1d4
int64_t function_46d0ef(int64_t result2, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a7;
    bool v2; // 0x46d0ef
    if (!v2) {
        // 0x46d121
        int64_t result; // 0x46d0ef
        return result;
    }
    // 0x46d0f1
    int64_t v3; // 0x46d0ef
    *(char *)0x306a916d43bc429 = (char)v3;
    uint32_t v4 = (int32_t)v3 & 0x36d19171; // 0x46d0fb
    if (llvm_ctpop_i8((char)v4) % 2 == 0) {
        uint64_t v5 = v3 + 215; // 0x46d10e
        __asm_out_137(0x60c8, (char)v5);
        return v5 % 256 | v3 & 0xffffff00;
    }
    if (v4 != 0) {
        char * v6 = (char *)(int64_t)v4; // 0x46d1b4
        *v6 = *v6 + (char)(v3 / 256);
        *(char *)(v3 - 122) = (char)(v4 / 256);
        *(int32_t *)result2 = (int32_t)a3;
        char * v7 = (char *)(8 * v3 + a4); // 0x46d1bd
        *v7 = *v7 & (char)v3;
        __asm_in_135(39);
        return (int64_t)(*(int32_t *)0x4d369721122d019d + 0x1f60248e);
    }
    // 0x46d17b
    if ((v3 & 32) == 0) {
        // 0x46d121
        return result2;
    }
    // 0x46d132
    *(int32_t *)a4 = (int32_t)((int64_t)&v1 & a4);
    if (a4 != 0) {
        // 0x46d138
        *(char *)result2 = (char)result2;
        return result2;
    }
    int64_t v8 = result2 + 0xb599fc3e; // 0x46d14b
    if ((int32_t)result2 >= 0x4a6603c3) {
        // 0x46d153
        return v8 & 0xffffff00 | (result2 + 7) % 256;
    }
    // 0x46d124
    __asm_outsb((int16_t)v4, *(char *)0x531448ae);
    return v8 & 0xffffffff;
}

// Address range: 0x46d209 - 0x46d20a
int64_t function_46d209(int64_t a1) {
    // 0x46d209
    int64_t result; // 0x46d209
    return result;
}

// Address range: 0x46d2ae - 0x46d2af
int64_t function_46d2ae(int64_t a1) {
    // 0x46d2ae
    int64_t result; // 0x46d2ae
    return result;
}

// Address range: 0x46d2e2 - 0x46d2e5
int64_t function_46d2e2(int64_t a1) {
    // 0x46d2e2
    int64_t result; // 0x46d2e2
    return result;
}

// Address range: 0x46d336 - 0x46d339
int64_t function_46d336(void) {
    // 0x46d336
    int64_t result; // 0x46d336
    return result;
}

// Address range: 0x46d364 - 0x46d367
int64_t function_46d364(int64_t a1) {
    // 0x46d364
    int64_t result; // 0x46d364
    return result;
}

// Address range: 0x46d377 - 0x46d37b
int64_t function_46d377(void) {
    // 0x46d377
    int64_t v1; // 0x46d377
    return function_46d3c4(v1, v1, v1, v1, 15, (int64_t)&g2);
}

// Address range: 0x46d389 - 0x46d393
int64_t function_46d389(int64_t a1) {
    // 0x46d389
    int64_t v1; // 0x46d389
    return 256 * (int64_t)*(char *)0x4fcda227 | v1 & -0xff01;
}

// Address range: 0x46d3c4 - 0x46d47b
int64_t function_46d3c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x46d3c4
    int64_t v1; // 0x46d3c4
    unsigned char v2 = (char)(v1 / 256); // 0x46d3c4
    unsigned char v3 = *(char *)(v1 - 0x5e39864f) + v2; // 0x46d3c4
    bool v4; // 0x46d3c4
    unsigned char v5 = v3 + (char)v4; // 0x46d3c4
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x46d3c4
    int64_t v7 = 256 * (int64_t)v5 | v1 & -0xff01; // 0x46d3c4
    if (v6 % 2 == 0) {
        int64_t v8 = v4 ? -1 : 1; // 0x46d3d1
        *(char *)(v8 + a1) = (char)a2;
        __asm_outsd((int16_t)a3, *(int32_t *)(v8 + a2));
        return v7 & -256 | 94;
    }
    // 0x46d422
    if (v4 ? v5 <= v2 : v3 < v2) {
        // 0x46d472
        *(int32_t *)a2 = 2 * (int32_t)a2 | 1;
        return v7 & -256 | (v1 + 69) % 256;
    }
    unsigned char v9 = (char)a4 % 32; // 0x46d42a
    if (v9 != 0) {
        char * v10 = (char *)(a1 + 113); // 0x46d42a
        unsigned char v11 = *v10; // 0x46d42a
        *v10 = v11 << v9 | (char)((int16_t)v11 >> (int16_t)(9 - v9));
    }
    *(int32_t *)a1 = __asm_insd((int16_t)v7);
    float80_t v12; // 0x46d3c4
    *(float32_t *)a1 = (float32_t)v12;
    return a3 & 0xffffffff;
}
