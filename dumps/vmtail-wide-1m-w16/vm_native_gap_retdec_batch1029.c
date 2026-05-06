/*
 * Targeted RetDec C for native executable gap queue batch 1029.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1798aa-0x179aaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x179aaa-0x179caa rank=- name=- kind=- bytes=- uncovered=-
 *   0x179caa-0x179eaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x179eaa-0x17a0aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x17a0aa-0x17a2aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x17a2aa-0x17a4aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x17a4aa-0x17a6aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x17a6aa-0x17a8aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x34abe6-0x34ade6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34ade6-0x34afe6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34afe6-0x34b1e6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34b1e6-0x34b3e6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34b3e6-0x34b5e6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34b5e6-0x34b7e6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34b7e6-0x34b9e6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34b9e6-0x34bbe6 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_12b7db31();
int64_t function_1798aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1798f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17991f(int64_t a1);
int64_t function_179941(int64_t a1, int64_t a2, int64_t a3);
int64_t function_179980(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17999b(void);
int64_t function_1799b0(int64_t a1);
int64_t function_1799ce(int64_t a1, int64_t a2);
int64_t function_179a1e(int64_t a1);
int64_t function_179a36(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_179a7a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_179ad2(void);
int64_t function_179aeb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_179afe(void);
int64_t function_179b02(void);
int64_t function_179b07(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_179b1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_179b4c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_179bab(int64_t a1, int64_t a2, int64_t a3);
int64_t function_179bc4(void);
int64_t function_179be3(int64_t a1);
int64_t function_179bf3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_179c39(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_179c63(void);
int64_t function_179cb4(void);
int64_t function_179cc5(int64_t a1);
int64_t function_179ce2(void);
int64_t function_179d03(int64_t a1, int64_t a2, int64_t a3);
int64_t function_179d08(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_179d23(int64_t a1);
int64_t function_179d27(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_179d41(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_179ddd(void);
int64_t function_179df6(void);
int64_t function_179ea4(void);
int64_t function_179f0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_179f18(void);
int64_t function_179f37(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_179f97(void);
int64_t function_179fae(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17a093(void);
int64_t function_17a0b0(void);
int64_t function_17a0d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17a0e5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_17a0ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17a10f(void);
int64_t function_17a12f(void);
int64_t function_17a146(int64_t a1, int64_t a2);
int64_t function_17a182(int64_t a1, int64_t a2);
int64_t function_17a1ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17a25d(int64_t a1);
int64_t function_17a284(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_17a28f(void);
int64_t function_17a29d(void);
int64_t function_17a2be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17a359(int64_t a1);
int64_t function_17a3ad(void);
int64_t function_17a3c3(void);
int64_t function_17a3de(void);
int64_t function_17a3ff(void);
int64_t function_17a409(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17a41c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_17a57d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17a6c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17a7f8(void);
int64_t function_17a844(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17a850(int64_t a1);
int64_t function_34ab9b();
int64_t function_34abe6(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_34aca5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34acc6(int64_t a1);
int64_t function_34ad09(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34ad7b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34ad88(int64_t a1);
int64_t function_34adb3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34addc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34ae13(int64_t a1);
int64_t function_34ae7a(int64_t a1);
int64_t function_34aeb4(void);
int64_t function_34af77(int64_t a1);
int64_t function_34afa0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34afc7(void);
int64_t function_34afda(int64_t a1);
int64_t function_34affc(void);
int64_t function_34b007(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34b032(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34b097(int64_t a1);
int64_t function_34b0a3(void);
int64_t function_34b0a7(void);
int64_t function_34b0d1(void);
int64_t function_34b0e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34b153(void);
int64_t function_34b16e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34b246(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34b370(void);
int64_t function_34b39e(int64_t a1);
int64_t function_34b46d(int64_t a1);
int64_t function_34b49a(void);
int64_t function_34b4d3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34b589(int64_t a1, int64_t a2);
int64_t function_34b5a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34b5af(void);
int64_t function_34b5ef(void);
int64_t function_34b605(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34b639(int64_t a1);
int64_t function_34b66a(void);
int64_t function_34b676(void);
int64_t function_34b6c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34b796(int64_t a1, int64_t a2);
int64_t function_34b7e7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34b7e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34b81d(void);
int64_t function_34b83b(int64_t a1, int64_t a2);
int64_t function_34b842(int64_t a1);
int64_t function_34b856(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34b8a0(int64_t a1);
int64_t function_34b8ba(int64_t a1);
int64_t function_34b8e9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34b910(void);
int64_t function_34b940(void);
int64_t function_34b948(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_34b984(void);
int64_t function_34b991(void);
int64_t function_34b9a4(int64_t a1);
int64_t function_34b9b1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_34ba03(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34ba08(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_34badc(void);
int64_t function_34bb46(void);
int64_t function_34bb55(int64_t a1, int64_t a2, int64_t a3);
int64_t function_368e933d();
int64_t function_3c4bb03();
int64_t function_4d599d32();
int64_t function_7744735b();
int64_t function_7996800e();
int64_t function_7ea5a5b0();
int64_t function_c9849();
int64_t function_e600705();
int64_t function_ffffffff83ad93c3();
int64_t function_ffffffff8f133f81();
int64_t function_ffffffffa5369f53();
int64_t function_ffffffffb489f482();
int64_t function_ffffffffc5fb1b04();
int64_t function_ffffffffc91989e8();
int64_t function_ffffffffee6ee1e7();
int64_t unknown_14cec95b();
int64_t unknown_1628ef9d();
int64_t unknown_1dbdb635();
int64_t unknown_22ae340e();
int64_t unknown_2a25ea0b();
int64_t unknown_32761597();
int64_t unknown_32ea724();
int64_t unknown_35493656();
int64_t unknown_354b4770();
int64_t unknown_360462db();
int64_t unknown_3a1dd3da();
int64_t unknown_3a6cf21f();
int64_t unknown_3d36a23e();
int64_t unknown_3d9ba88e();
int64_t unknown_480aafb1();
int64_t unknown_4cfe12dd();
int64_t unknown_52f5de0();
int64_t unknown_6018d828();
int64_t unknown_67fa27b5();
int64_t unknown_6eb78780();
int64_t unknown_7a1eef4c();
int64_t unknown_c370a2();
int64_t unknown_ffffffff8df73177();
int64_t unknown_ffffffff8e6c47c4();
int64_t unknown_ffffffff900dc9f7();
int64_t unknown_ffffffff9c2419f1();
int64_t unknown_ffffffffa4d2f335();
int64_t unknown_ffffffffa61ef761();
int64_t unknown_ffffffffa913a579();
int64_t unknown_ffffffffa914201a();
int64_t unknown_ffffffffaeec8100();
int64_t unknown_ffffffffafb5156e();
int64_t unknown_ffffffffb6b9d8a3();
int64_t unknown_ffffffffba1376fa();
int64_t unknown_ffffffffbb97c3b7();
int64_t unknown_ffffffffc2288e27();
int64_t unknown_ffffffffd3d33800();
int64_t unknown_ffffffffd6f27e7d();
int64_t unknown_ffffffffe8cf5256();
int64_t unknown_ffffffffeca8aff1();
int64_t unknown_ffffffffee1fc48f();
int64_t unknown_fffffffff499eeeb();
int64_t unknown_ffffffffff61e213();

// Address range: 0x1798aa - 0x1798d9
int64_t function_1798aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1798aa
    int64_t v1; // 0x1798aa
    *(int32_t *)a1 = (int32_t)v1;
    char * v2 = (char *)(v1 - 104); // 0x1798af
    *v2 = *v2 + (char)v1;
    float80_t v3; // 0x1798aa
    *(int64_t *)(v1 + 0x6001e894) = (int64_t)v3;
    char * v4 = (char *)(a3 - 0x760ef100); // 0x1798b9
    *v4 = *v4 + (char)a4;
    char * v5 = (char *)(a4 + 24); // 0x1798bf
    *v5 = *v5 + (char)(v1 / 256);
    int32_t * v6 = (int32_t *)(a4 + 0x1e0a88f0); // 0x1798c4
    uint32_t v7 = *v6; // 0x1798c4
    uint32_t v8 = v7 + (int32_t)a3; // 0x1798c4
    *v6 = v8;
    *(char *)(a4 + 0x37fec139) = (char)v1;
    int64_t v9; // bp-8, 0x1798aa
    int64_t v10 = (int64_t)&v9; // 0x1798ca
    v10 -= 8;
    *(int64_t *)v10 = a3;
    while (v8 < v7 || v8 == 0) {
        // 0x1798d0
        v10 -= 8;
        *(int64_t *)v10 = a3;
    }
    // 0x1798d4
    return unknown_3a1dd3da();
}

// Address range: 0x1798f3 - 0x1798fe
int64_t function_1798f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1798f3
    int64_t v1; // 0x1798f3
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 0x6b813a23); // 0x1798f3
    *v3 = *v3 + (int32_t)a3;
    *(char *)a4 = (char)(v2 / 256);
    int64_t v4; // 0x1798f3
    return 256 * (int64_t)*(char *)&v4 | v2 & -0xff01;
}

// Address range: 0x17991f - 0x179922
int64_t function_17991f(int64_t a1) {
    // 0x17991f
    int64_t result; // 0x17991f
    return result;
}

// Address range: 0x179941 - 0x17994c
int64_t function_179941(int64_t a1, int64_t a2, int64_t a3) {
    // 0x179941
    __asm_iretd(a1, a2, a3);
    int64_t v1; // 0x179941
    *(int32_t *)a3 = (int32_t)(v1 & a1);
    return function_17999b();
}

// Address range: 0x179980 - 0x17999b
int64_t function_179980(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x179980
    int64_t v1; // 0x179980
    int32_t * v2 = (int32_t *)(unknown_3d9ba88e() + v1 & 0xffffffff); // 0x17998f
    *v2 = *v2 + (int32_t)a3;
    int64_t result = unknown_32761597(); // 0x179991
    uint32_t v3 = (int32_t)a4 % 32; // 0x179996
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)result; // 0x179996
        *v4 = *v4 >> v3;
    }
    return result;
}

// Address range: 0x17999b - 0x1799aa
int64_t function_17999b(void) {
    // 0x17999b
    int64_t v1; // 0x17999b
    return v1 & -256 | (int64_t)*(char *)0x2fb9bdf37f006831;
}

// Address range: 0x1799b0 - 0x1799b1
int64_t function_1799b0(int64_t a1) {
    // 0x1799b0
    int64_t result; // 0x1799b0
    return result;
}

// Address range: 0x1799ce - 0x1799d2
int64_t function_1799ce(int64_t a1, int64_t a2) {
    // 0x1799ce
    int64_t v1; // 0x1799ce
    bool v2; // 0x1799ce
    return function_179a36(a1, (v2 ? -1 : 1) + a2, v1, v1);
}

// Address range: 0x179a1e - 0x179a28
int64_t function_179a1e(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 12); // 0x179a1e
    int64_t v2; // 0x179a1e
    *v1 = *v1 + (int32_t)v2;
    return function_7996800e();
}

// Address range: 0x179a36 - 0x179a77
int64_t function_179a36(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 0x104992f1); // 0x179a36
    *v1 = *v1 + (int32_t)a3;
    int32_t * v2 = (int32_t *)(a1 - 76); // 0x179a3c
    uint32_t v3 = (int32_t)a4; // 0x179a3c
    *v2 = *v2 & v3;
    uint32_t v4 = v3 % 32; // 0x179a3f
    int64_t result; // 0x179a36
    if (v4 != 0) {
        int32_t * v5 = (int32_t *)(result - 76); // 0x179a3f
        uint32_t v6 = *v5; // 0x179a3f
        *v5 = v6 >> v4 | v6 << 32 - v4;
    }
    if (a4 == 1) {
        // 0x179a44
        return 0;
    }
    // 0x179a6f
    *(int32_t *)result = *(int32_t *)&result + (int32_t)a1;
    return result;
}

// Address range: 0x179a7a - 0x179ac3
int64_t function_179a7a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x179a7a
    int64_t v1; // 0x179a7a
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a3 + 0x374bd004); // 0x179a7a
    uint32_t v4 = *v3; // 0x179a7a
    uint32_t v5 = v4 + (int32_t)v1; // 0x179a7a
    *v3 = v5;
    *(char *)a3 = (char)a4;
    __asm_out(-68, (int32_t)(256 * (v2 / 256 + a4 / 256 + (int64_t)(v5 < v4)) & 0xff00 | v2 & 0xffff00ff));
    int64_t v6 = __asm_iretd((int64_t)&g3, (int64_t)&g3, (int64_t)&g3); // 0x179a8a
    int32_t * v7 = (int32_t *)(a3 + 0x13d000d); // 0x179a91
    *v7 = *v7 - (-1 - (int32_t)a2 < (int32_t)a1 ? -112 : -113);
    int32_t * v8 = (int32_t *)v6; // 0x179a98
    *v8 = *v8 | (int32_t)v6;
    __asm_in(-28);
    int64_t v9 = a4 & 0xffffff00 | 94; // 0x179aa4
    uint32_t result = *(int32_t *)v9 | (int32_t)v9; // 0x179aab
    __asm_out_133((int16_t)a3, result);
    return result;
}

// Address range: 0x179ad2 - 0x179ad5
int64_t function_179ad2(void) {
    // 0x179ad2
    int64_t result; // 0x179ad2
    return result;
}

// Address range: 0x179aeb - 0x179af6
int64_t function_179aeb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x179aeb
    int64_t v1; // 0x179aeb
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return (int64_t)*(int32_t *)0x13dc1f57f5032;
}

// Address range: 0x179afe - 0x179b01
int64_t function_179afe(void) {
    // 0x179afe
    int64_t result; // 0x179afe
    return result;
}

// Address range: 0x179b02 - 0x179b07
int64_t function_179b02(void) {
    // 0x179b02
    return function_ffffffff83ad93c3();
}

// Address range: 0x179b07 - 0x179b1d
int64_t function_179b07(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)0x3d0640e; // 0x179b07
    int64_t v2; // 0x179b07
    *(char *)0x3d0640e = v1 + (char)((uint64_t)v2 / 256);
    return __asm_in_134((int16_t)a3);
}

// Address range: 0x179b1d - 0x179b4c
int64_t function_179b1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4; // 0x179b1f
    int32_t * v2 = (int32_t *)a4; // 0x179b1f
    int64_t v3; // 0x179b1d
    *v2 = (int32_t)v3 + v1;
    unknown_6018d828();
    int64_t v4 = __asm_hlt(); // 0x179b27
    float80_t v5; // 0x179b1d
    *v2 = (int32_t)v5;
    char * v6 = (char *)(v3 - 0x178fff60); // 0x179b2a
    *v6 = *v6 - (char)a5;
    int32_t * v7 = (int32_t *)(a1 - 0x2bb3dddc); // 0x179b30
    int64_t v8; // 0x179b1d
    *v7 = *v7 + (int32_t)(int64_t)&v8;
    *(char *)0x7e198385 = *(char *)0x7e198385 + 17;
    int64_t result = 256 * v4 & 0xff00 | v4; // 0x179b3e
    uint32_t v9 = v1 % 32; // 0x179b40
    if (v9 != 0) {
        int32_t * v10 = (int32_t *)result; // 0x179b40
        uint32_t v11 = *v10; // 0x179b40
        *v10 = v11 >> 32 - v9 | v11 << v9;
    }
    return result;
}

// Address range: 0x179b4c - 0x179ba9
int64_t function_179b4c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x179b4c
    int64_t v1; // 0x179b4c
    uint64_t v2 = v1;
    int64_t v3 = a1;
    int64_t v4 = v1 & 0xffffffff ^ 0xd75001e8; // 0x179b4f
    int64_t v5 = (v4 + 182) % 256 | v4 & 0xffffff00; // 0x179b54
    int64_t v6 = 0x100000000 * v5 >> 30; // 0x179b57
    __asm_iretd((int64_t)&g3, (int64_t)&g3, (int64_t)&g3);
    unknown_ffffffffa61ef761();
    int32_t v7 = unknown_ffffffffafb5156e(); // 0x179b6d
    int32_t v8 = a4;
    int32_t v9 = v6 != 0x400000000 * v5 >> 32; // 0x179b6d
    int32_t v10 = v9 + v8 + v7; // 0x179b6d
    int32_t v11 = v10 + v9; // 0x179b6d
    int64_t result = unknown_ffffffff8df73177(); // 0x179b71
    *(char *)(a1 + 6) = (char)(v2 / 256);
    if (((v11 ^ v7) & (v11 ^ v8)) >= 0 || llvm_ctpop_i8((char)v10) % 2 == 0) {
        // 0x179b7b
        return result;
    }
    // 0x179b86
    *(int32_t *)v3 = *(int32_t *)&v3 + 0x3d8fc40;
    *(int32_t *)-0x1788c5240443ddc6 = (int32_t)((result + a4 / 256) % 256 | result & 0xffffff00);
    int32_t * v12 = (int32_t *)(v2 + 79); // 0x179b95
    *v12 = *v12 + (int32_t)v3;
    int64_t v13 = unknown_ffffffffb6b9d8a3(); // 0x179b9d
    __asm_outsb(-960, *(char *)(v6 & 0xfffffffc));
    return 0x10000 * (int32_t)v13 >> 16;
}

// Address range: 0x179bab - 0x179bad
int64_t function_179bab(int64_t a1, int64_t a2, int64_t a3) {
    // 0x179bab
    int64_t result; // 0x179bab
    return result;
}

// Address range: 0x179bc4 - 0x179bc9
int64_t function_179bc4(void) {
    // 0x179bc4
    return function_ffffffffc5fb1b04();
}

// Address range: 0x179be3 - 0x179be7
int64_t function_179be3(int64_t a1) {
    // 0x179be3
    int64_t result; // 0x179be3
    return result;
}

// Address range: 0x179bf3 - 0x179c18
int64_t function_179bf3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x3690ff00); // 0x179bff
    *v1 = *v1 | -106;
    unknown_22ae340e();
    int32_t v2 = __asm_in_134((int16_t)a3 % 256 | 0x2800); // 0x179c0d
    int64_t result = v2; // 0x179c0d
    char * v3 = (char *)result; // 0x179c13
    *v3 = *v3 - (char)v2;
    return result;
}

// Address range: 0x179c39 - 0x179c41
int64_t function_179c39(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x179c39
    return unknown_ffffffffff61e213(a1, a2, a3, a4, a5);
}

// Address range: 0x179c63 - 0x179c64
int64_t function_179c63(void) {
    // 0x179c63
    int64_t result; // 0x179c63
    return result;
}

// Address range: 0x179cb4 - 0x179cb9
int64_t function_179cb4(void) {
    // 0x179cb4
    return function_4d599d32();
}

// Address range: 0x179cc5 - 0x179cc7
int64_t function_179cc5(int64_t a1) {
    // 0x179cc5
    int64_t result; // 0x179cc5
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x179ce2 - 0x179cf2
int64_t function_179ce2(void) {
    int64_t result = __asm_hlt(); // 0x179ce2
    float80_t v1; // 0x179ce2
    *(int64_t *)(result + 0x5100ba2a) = (int64_t)v1;
    return result;
}

// Address range: 0x179d03 - 0x179d07
int64_t function_179d03(int64_t a1, int64_t a2, int64_t a3) {
    // 0x179d03
    int64_t v1; // 0x179d03
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a3;
    return function_179d41(a1, a2, a3, v1);
}

// Address range: 0x179d08 - 0x179d16
int64_t function_179d08(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x179d08
    int64_t v1; // 0x179d08
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + (char)v1;
    int64_t v3; // 0x179d08
    *(int32_t *)a2 = *(int32_t *)&v3 | (int32_t)v1;
    __asm_iretd((int64_t)&g3, (int64_t)&g3, (int64_t)&g3);
    return a4 & 0xffffffff;
}

// Address range: 0x179d23 - 0x179d26
int64_t function_179d23(int64_t a1) {
    // 0x179d23
    int64_t result; // 0x179d23
    return result;
}

// Address range: 0x179d27 - 0x179d3d
int64_t function_179d27(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x179d27
    int64_t v1; // 0x179d27
    char * v2 = (char *)(a4 - 0x39f15838 + v1); // 0x179d27
    *v2 = *v2 + (char)a4;
    __asm_outsd((int16_t)a3, (int32_t)a2);
    return a2 & 0xffffffff;
}

// Address range: 0x179d41 - 0x179d67
int64_t function_179d41(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char v1 = *(char *)-0x56bdc2b3; // 0x179d46
    int64_t v2; // 0x179d41
    *(char *)-0x56bdc2b3 = v1 + (char)((uint64_t)v2 / 256);
    *(char *)a1 = (char)v2;
    bool v3; // 0x179d41
    int64_t v4 = (v3 ? -1 : 1) + a1; // 0x179d4d
    *(int32_t *)0xe024686de00b3f9 = (int32_t)v2;
    int64_t v5 = __asm_int1(v4, -0x4a652eba); // 0x179d57
    float80_t v6; // 0x179d41
    *(int64_t *)a4 = (int64_t)v6;
    *(char *)v4 = *(char *)-0x4a652eba;
    return v5 | a4 / 256 % 256;
}

// Address range: 0x179ddd - 0x179dde
int64_t function_179ddd(void) {
    // 0x179ddd
    int64_t result; // 0x179ddd
    return result;
}

// Address range: 0x179df6 - 0x179df7
int64_t function_179df6(void) {
    // 0x179df6
    int64_t result; // 0x179df6
    return result;
}

// Address range: 0x179ea4 - 0x179ea5
int64_t function_179ea4(void) {
    // 0x179ea4
    int64_t result; // 0x179ea4
    return result;
}

// Address range: 0x179f0d - 0x179f18
int64_t function_179f0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 + 0x54013dfe); // 0x179f0d
    int64_t v2; // 0x179f0d
    char v3 = *v1 + (char)((uint64_t)v2 / 256); // 0x179f0d
    unsigned char v4 = llvm_ctpop_i8(v3); // 0x179f0d
    *v1 = v3;
    int64_t result; // 0x179f0d
    if (v4 % 2 != 0) {
        result = function_179ea4();
    }
    // 0x179f17
    return result;
}

// Address range: 0x179f18 - 0x179f19
int64_t function_179f18(void) {
    // 0x179f18
    int64_t result; // 0x179f18
    return result;
}

// Address range: 0x179f37 - 0x179f71
int64_t function_179f37(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x179f37
    int32_t * v3 = (int32_t *)(a4 + 28 + v2); // 0x179f42
    int32_t v4 = *v3 & (int32_t)a4; // 0x179f42
    *v3 = v4;
    if (v4 >= 0 == (v4 != 0)) {
        function_179f18();
    }
    int32_t * v5 = (int32_t *)(v1 + 0x419a50f6); // 0x179f4c
    *v5 = *v5 + (int32_t)v2;
    *(char *)-0x31b7a9a1 = *(char *)-0x31b7a9a1 + (char)(v2 / 256);
    *(int32_t *)v1 = *(int32_t *)&v1 + 0x5806b85d;
    int32_t * v6 = (int32_t *)(a4 - 0x57210111); // 0x179f68
    *v6 = *v6 | 15;
    return function_179fae(a1, a2, v1, a4);
}

// Address range: 0x179f97 - 0x179fac
int64_t function_179f97(void) {
    int64_t result = unknown_1628ef9d(); // 0x179f97
    *(int32_t *)-0x6efe17fec2fe1788 = (int32_t)result;
    return result;
}

// Address range: 0x179fae - 0x179fd1
int64_t function_179fae(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x179fae
    int64_t v1; // 0x179fae
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a1 + 78); // 0x179fb4
    int64_t v4; // bp-8, 0x179fae
    *v3 = *v3 + (int32_t)(int64_t)&v4;
    int64_t v5; // bp+21099, 0x179fae
    char v6 = *(char *)(4 * a4 + 0x1e8013e + (int64_t)&v5); // 0x179fb7
    char * v7 = (char *)(8 * v1 + a2); // 0x179fbe
    *v7 = *v7 + (char)v1;
    int32_t * v8 = (int32_t *)(a3 + 0x3a073b22); // 0x179fc8
    *v8 = *v8 + (int32_t)a4;
    return v2 & -256 | (int64_t)(v6 ^ (char)v2);
}

// Address range: 0x17a093 - 0x17a095
int64_t function_17a093(void) {
    // 0x17a093
    int64_t v1; // 0x17a093
    return function_17a0ec(v1, v1, v1, v1);
}

// Address range: 0x17a0b0 - 0x17a0b2
int64_t function_17a0b0(void) {
    // 0x17a0b0
    int64_t result; // 0x17a0b0
    return result;
}

// Address range: 0x17a0d1 - 0x17a0e5
int64_t function_17a0d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17a0d1
    return unknown_360462db();
}

// Address range: 0x17a0e5 - 0x17a0eb
int64_t function_17a0e5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x17a0e5
    int64_t result; // 0x17a0e5
    int32_t * v1 = (int32_t *)(2 * result + a3); // 0x17a0e5
    *v1 = *v1 + (int32_t)a2;
    return result;
}

// Address range: 0x17a0ec - 0x17a0fb
int64_t function_17a0ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17a0ec
    int64_t v1; // 0x17a0ec
    float80_t v2; // 0x17a0ec
    *(float64_t *)(v1 - 47) = (float64_t)v2;
    unknown_ffffffff900dc9f7();
    int64_t v3; // 0x17a0ec
    *(char *)a1 = *(char *)&v3;
    return a3 & 0xffffffff;
}

// Address range: 0x17a10f - 0x17a114
int64_t function_17a10f(void) {
    // 0x17a10f
    return function_ffffffffc91989e8();
}

// Address range: 0x17a12f - 0x17a136
int64_t function_17a12f(void) {
    // 0x17a12f
    unknown_ffffffffa4d2f335();
    int64_t v1; // 0x17a12f
    return function_17a182(v1, v1);
}

// Address range: 0x17a146 - 0x17a14c
int64_t function_17a146(int64_t a1, int64_t a2) {
    // 0x17a146
    bool v1; // 0x17a146
    int64_t v2 = v1 ? -1 : 1; // 0x17a146
    return function_ffffffff8f133f81(v2 + a1, v2 + a2);
}

// Address range: 0x17a182 - 0x17a189
int64_t function_17a182(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 61); // 0x17a182
    int64_t result; // 0x17a182
    bool v2; // 0x17a182
    *v1 = (int32_t)v2 - (int32_t)result + *v1;
    __asm_int(29);
    return result;
}

// Address range: 0x17a1ef - 0x17a22a
int64_t function_17a1ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = *(int32_t *)(8 * a2 - 0x2429e113); // 0x17a1ef
    int64_t v2; // 0x17a1ef
    int32_t * v3 = (int32_t *)(v2 - 48); // 0x17a1f7
    *v3 = *v3 + (int32_t)a2;
    int32_t v4 = *(int32_t *)(unknown_ffffffffaeec8100() + a1 & 0xffffffff); // 0x17a203
    unknown_2a25ea0b();
    int64_t v5; // 0x17a1ef
    if ((v4 & (int32_t)(int64_t)&v5) < 0) {
        // 0x17a20c
        return unknown_ffffffffee1fc48f(a1, a2, (v2 & 0xffffffff | 0x100000000 * a3) % (int64_t)v1 & 0xffffff00 | 216, a4);
    }
    int64_t result = unknown_3a6cf21f(); // 0x17a219
    int32_t * v6 = (int32_t *)(result + 0x1e8a405); // 0x17a220
    *v6 = *v6 + (int32_t)result;
    return result;
}

// Address range: 0x17a25d - 0x17a260
int64_t function_17a25d(int64_t a1) {
    // 0x17a25d
    int64_t result; // 0x17a25d
    return result;
}

// Address range: 0x17a284 - 0x17a28e
int64_t function_17a284(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a2 - 120); // 0x17a284
    *v1 = *v1 + (char)(a4 / 256);
    return unknown_ffffffffee1fc48f(a1, a2, a3, a4);
}

// Address range: 0x17a28f - 0x17a291
int64_t function_17a28f(void) {
    // 0x17a28f
    int64_t result; // 0x17a28f
    return result;
}

// Address range: 0x17a29d - 0x17a29e
int64_t function_17a29d(void) {
    // 0x17a29d
    int64_t result; // 0x17a29d
    return result;
}

// Address range: 0x17a2be - 0x17a2c8
int64_t function_17a2be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4 - 1; // 0x17a2be
    bool v2; // 0x17a2be
    if (v1 != 0 && !v2) {
        function_17a29d();
    }
    unsigned char v3 = (char)v1 % 32; // 0x17a2c2
    if (v3 != 0) {
        unsigned char v4 = (char)a3;
        *(char *)a3 = v4 << 8 - v3 | v4 >> v3;
    }
    return __asm_int3();
}

// Address range: 0x17a359 - 0x17a35a
int64_t function_17a359(int64_t a1) {
    // 0x17a359
    int64_t result; // 0x17a359
    return result;
}

// Address range: 0x17a3ad - 0x17a3b4
int64_t function_17a3ad(void) {
    // 0x17a3ad
    int64_t result; // 0x17a3ad
    return result;
}

// Address range: 0x17a3c3 - 0x17a3c8
int64_t function_17a3c3(void) {
    // 0x17a3c3
    return function_7ea5a5b0();
}

// Address range: 0x17a3de - 0x17a3df
int64_t function_17a3de(void) {
    // 0x17a3de
    int64_t result; // 0x17a3de
    return result;
}

// Address range: 0x17a3ff - 0x17a402
int64_t function_17a3ff(void) {
    // 0x17a3ff
    int64_t result; // 0x17a3ff
    return result;
}

// Address range: 0x17a409 - 0x17a41c
int64_t function_17a409(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17a409
    int64_t v1; // 0x17a409
    int32_t * v2 = (int32_t *)(v1 - 0x2a6437d6); // 0x17a409
    int32_t v3 = a3; // 0x17a409
    *v2 = *v2 + v3;
    int32_t * v4 = (int32_t *)(v1 & -0xff01 ^ 232); // 0x17a414
    *v4 = *v4 + v3;
    char * v5 = (char *)(a4 + 89 + v1); // 0x17a416
    *v5 = *v5 | (char)v1;
    return function_17a3de();
}

// Address range: 0x17a41c - 0x17a57d
int64_t function_17a41c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = unknown_32ea724(); // 0x17a41e
    char * v2 = (char *)(v1 - 0x53eb800); // 0x17a423
    *v2 = *v2 + (char)v1;
    int64_t v3; // bp-40, 0x17a41c
    int64_t v4 = (int64_t)&v3; // 0x17a51a
    int64_t v5 = v4 + 16; // 0x17a545
    v3 = v5;
    *(int64_t *)(v4 + 8) = *(int64_t *)v5;
    v3 = v5;
    return function_c9849(a1, a2, a3, v1, a5, a6, a7);
}

// Address range: 0x17a57d - 0x17a6c0
int64_t function_17a57d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17a57d
    int64_t v1; // 0x17a57d
    return function_c9849(a1, a2, a3 >> 3, a4, v1, v1, 169);
}

// Address range: 0x17a6c0 - 0x17a7f1
int64_t function_17a6c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x1831d735; // bp-40, 0x17a78a
    int64_t v2 = (int64_t)&v1; // 0x17a7c0
    int64_t v3 = v2 - 8; // 0x17a7cc
    *(int64_t *)(v2 - 16) = v3;
    *(int64_t *)v3 = v2 + 8;
    int64_t v4; // 0x17a6c0
    bool v5; // 0x17a6c0
    return function_c9849(a1, a2, a3, !v5 ? v4 : a4, a5, v4, 0x178936);
}

// Address range: 0x17a7f8 - 0x17a7fb
int64_t function_17a7f8(void) {
    // 0x17a7f8
    int64_t result; // 0x17a7f8
    return result;
}

// Address range: 0x17a844 - 0x17a84a
int64_t function_17a844(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17a844
    int64_t v1; // 0x17a844
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(result - 127); // 0x17a846
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x17a850 - 0x17a851
int64_t function_17a850(int64_t a1) {
    // 0x17a850
    int64_t result; // 0x17a850
    return result;
}

// Address range: 0x34abe6 - 0x34ac94
int64_t function_34abe6(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x34abe6
    int64_t result2; // 0x34abe6
    int64_t v1 = result2;
    bool v2; // 0x34abe6
    if (!v2) {
        uint32_t v3 = ((int32_t)result2 | 175) + (int32_t)v1; // 0x34abec
        unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x34abec
        int64_t result = v3; // 0x34abee
        if (v4 % 2 == 0) {
            result = function_34ab9b();
        }
        // 0x34abf0
        return result;
    }
    if (!v2 && !v2) {
        // 0x34ac0d
        *(int32_t *)a3 = (int32_t)result2 + (int32_t)a3;
        return result2;
    }
    int32_t * v5 = (int32_t *)(2 * a3 + 0x281154b4); // 0x34ac25
    *v5 = *v5 + (int32_t)a4;
    char * v6 = (char *)(result2 - 100); // 0x34ac2c
    char v7 = *v6 + (char)(a3 / 256); // 0x34ac2c
    unsigned char v8 = llvm_ctpop_i8(v7); // 0x34ac2c
    *v6 = v7;
    unknown_1dbdb635();
    __asm_iretd((int64_t)&g3, (int64_t)&g3, (int64_t)&g3);
    if (v8 % 2 == 0) {
        int32_t * v9 = (int32_t *)(a2 - 97); // 0x34ac44
        *v9 = *v9 + (int32_t)result2;
        int64_t v10 = unknown_35493656((v2 ? -4 : 4) + a1); // 0x34ac50
        char * v11 = (char *)(v10 + 0x76e3800); // 0x34ac55
        *v11 = *v11 + (char)v10;
        int32_t * v12 = (int32_t *)(result2 + 0x4a010c00); // 0x34ac5d
        uint32_t v13 = *v12; // 0x34ac5d
        uint32_t v14 = v13 + (int32_t)result2; // 0x34ac5d
        *v12 = v14;
        return (v10 + a4 / 256 + (v14 < v13 ? 57 : 58)) % 256 | v10 & -256;
    }
    // 0x34ac66
    unknown_354b4770();
    int64_t v15 = unknown_ffffffffe8cf5256(); // 0x34ac6b
    int32_t * v16 = (int32_t *)(v1 - 92); // 0x34ac70
    *v16 = *v16 + (int32_t)a1;
    *(int32_t *)a1 = (int32_t)v15;
    char * v17 = (char *)(a4 - 0x69270f12); // 0x34ac74
    *v17 = *v17 + (char)v15;
    *(int32_t *)(v1 & 0xffffffff) = (int32_t)v1;
    char * v18 = (char *)(a3 & -0xff01 | (int64_t)&g2); // 0x34ac88
    unsigned char v19 = *v18; // 0x34ac88
    *v18 = v19 / 2 | 128 * v19;
    char v20 = __asm_in(-71); // 0x34ac8a
    int32_t * v21 = (int32_t *)((v15 + 0x37fe176e & 0xffffff00 | 207) + 5); // 0x34ac8e
    *v21 = *v21 + (int32_t)result2;
    return v1 & 0xffffff00 | (int64_t)v20;
}

// Address range: 0x34aca5 - 0x34acbf
int64_t function_34aca5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x34aca5
    int64_t v1; // 0x34aca5
    int32_t * v2 = (int32_t *)(v1 - 0x1f548cf8); // 0x34aca5
    *v2 = *v2 + (int32_t)a4;
    int64_t v3 = unknown_480aafb1(); // 0x34acab
    int32_t * v4 = (int32_t *)(a3 + 56 + v1); // 0x34acb0
    *v4 = *v4 + (int32_t)v1;
    bool v5; // 0x34aca5
    *(char *)((v5 ? -1 : 1) + a1) = (char)v3;
    return v3 & 0xffffffff ^ 0xf1df01e8;
}

// Address range: 0x34acc6 - 0x34acc9
int64_t function_34acc6(int64_t a1) {
    // 0x34acc6
    int64_t result; // 0x34acc6
    return result;
}

// Address range: 0x34ad09 - 0x34ad2e
int64_t function_34ad09(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34ad09
    int64_t v1; // 0x34ad09
    int64_t v2 = v1 & 43 | 212; // 0x34ad0b
    char * v3 = (char *)(v2 | v1 & -256); // 0x34ad0e
    *v3 = *v3 + (char)v2;
    int64_t v4 = unknown_ffffffffa914201a(); // 0x34ad14
    bool v5; // 0x34ad09
    int64_t result = unknown_ffffffffc2288e27((v5 ? -1 : 1) + a1); // 0x34ad21
    uint32_t v6 = (int32_t)v4 % 32; // 0x34ad2b
    if (v6 != 0) {
        int32_t * v7 = (int32_t *)result; // 0x34ad2b
        uint32_t v8 = *v7; // 0x34ad2b
        *v7 = v8 >> 32 - v6 | v8 << v6;
    }
    return result;
}

// Address range: 0x34ad7b - 0x34ad88
int64_t function_34ad7b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34ad7b
    int64_t result; // 0x34ad7b
    return result;
}

// Address range: 0x34ad88 - 0x34ad91
int64_t function_34ad88(int64_t a1) {
    char v1 = *(char *)0x49fa348f; // 0x34ad88
    int64_t result; // 0x34ad88
    *(char *)0x49fa348f = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x34adb3 - 0x34adc3
int64_t function_34adb3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x13d0061); // 0x34adb8
    *v1 = *v1 - 0x17f9ec0f;
    return function_7744735b(0xe80613f1);
}

// Address range: 0x34addc - 0x34ade2
int64_t function_34addc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34addc
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x34addc
    return result;
}

// Address range: 0x34ae13 - 0x34ae15
int64_t function_34ae13(int64_t a1) {
    // 0x34ae13
    int64_t result; // 0x34ae13
    return result;
}

// Address range: 0x34ae7a - 0x34ae80
int64_t function_34ae7a(int64_t a1) {
    // 0x34ae7a
    return unknown_6eb78780(a1);
}

// Address range: 0x34aeb4 - 0x34aeb7
int64_t function_34aeb4(void) {
    // 0x34aeb4
    int64_t result; // 0x34aeb4
    return result;
}

// Address range: 0x34af77 - 0x34af78
int64_t function_34af77(int64_t a1) {
    // 0x34af77
    int64_t result; // 0x34af77
    return result;
}

// Address range: 0x34afa0 - 0x34afa3
int64_t function_34afa0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34afa0
    int64_t result; // 0x34afa0
    return result;
}

// Address range: 0x34afc7 - 0x34afc8
int64_t function_34afc7(void) {
    // 0x34afc7
    int64_t result; // 0x34afc7
    return result;
}

// Address range: 0x34afda - 0x34afdb
int64_t function_34afda(int64_t a1) {
    // 0x34afda
    int64_t result; // 0x34afda
    return result;
}

// Address range: 0x34affc - 0x34affd
int64_t function_34affc(void) {
    // 0x34affc
    int64_t result; // 0x34affc
    return result;
}

// Address range: 0x34b007 - 0x34b019
int64_t function_34b007(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = __asm_iretd((int64_t)&g3, (int64_t)&g3, (int64_t)&g3); // 0x34b00c
    int32_t * v1 = (int32_t *)(a3 - 0x4badef31); // 0x34b012
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x34b032 - 0x34b040
int64_t function_34b032(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34b032
    *(char *)a1 = __asm_insb((int16_t)a3);
    return function_368e933d();
}

// Address range: 0x34b097 - 0x34b09f
int64_t function_34b097(int64_t a1) {
    // 0x34b097
    return function_e600705();
}

// Address range: 0x34b0a3 - 0x34b0a4
int64_t function_34b0a3(void) {
    // 0x34b0a3
    int64_t result; // 0x34b0a3
    return result;
}

// Address range: 0x34b0a7 - 0x34b0aa
int64_t function_34b0a7(void) {
    // 0x34b0a7
    int64_t result; // 0x34b0a7
    return result;
}

// Address range: 0x34b0d1 - 0x34b0dc
int64_t function_34b0d1(void) {
    // 0x34b0d1
    return function_34b0a3();
}

// Address range: 0x34b0e8 - 0x34b122
int64_t function_34b0e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int16_t v1 = a3; // 0x34b0e8
    *(char *)a1 = __asm_insb(v1);
    char v2 = __asm_in(0); // 0x34b0ea
    int64_t v3; // 0x34b0e8
    *(int32_t *)a3 = *(int32_t *)&v3 + (int32_t)a1;
    __asm_out_135(56, v2);
    uint64_t v4 = (int64_t)v2 & 0xffffffff | a2 & 0xffffff00; // 0x34b0f6
    char * v5 = (char *)(8 * a4 + 0x71ac019d); // 0x34b0f7
    *v5 = *v5 + (char)(v4 / 256);
    int64_t v6; // 0x34b0e8
    uint32_t v7 = (int32_t)v6; // 0x34b109
    int64_t v8; // 0x34b0e8
    *(char *)(a1 + 4) = *(char *)&v8;
    int64_t v9; // 0x34b0e8
    __asm_out_133(v1, *(int32_t *)&v6 + v7 + (int32_t)(*(int32_t *)&v9 > v7));
    *(int32_t *)0x13c8b168 = *(int32_t *)0x13c8b168 - (int32_t)a3;
    int32_t * v10 = (int32_t *)((2 * v8 & 0x1fffffffe) + 0x13d0069 + v4); // 0x34b114
    int64_t v11; // 0x34b0e8
    *v10 = *v10 - (int32_t)v11;
    return function_12b7db31();
}

// Address range: 0x34b153 - 0x34b154
int64_t function_34b153(void) {
    // 0x34b153
    int64_t result; // 0x34b153
    return result;
}

// Address range: 0x34b16e - 0x34b187
int64_t function_34b16e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34b16e
    int64_t v1; // 0x34b16e
    __asm_out_135(-34, (char)v1);
    char * v2 = (char *)(v1 + 0x5ad50424); // 0x34b170
    *v2 = *v2 ^ (char)a4;
    int64_t v3 = unknown_ffffffffd6f27e7d(); // 0x34b177
    int64_t result = (v3 + 71) % 256 | v3 & -256; // 0x34b17e
    if ((char)v3 < -70) {
        result = function_34b153();
    }
    // 0x34b180
    return result;
}

// Address range: 0x34b246 - 0x34b340
int64_t function_34b246(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_7a1eef4c(); // 0x34b246
    int64_t v2; // 0x34b246
    int64_t v3; // 0x34b246
    int64_t v4; // 0x34b246
    int64_t v5; // 0x34b246
    int64_t v6; // 0x34b246
    int64_t v7; // 0x34b2b6
    int64_t v8; // 0x34b2b6
    int64_t v9; // 0x34b2b7
    int64_t v10; // 0x34b246
    bool v11; // 0x34b246
    if (v11) {
        // 0x34b2b6
        v7 = v11 ? -1 : 1;
        v8 = v7 + a2;
        v9 = v10 - 1;
        if (v9 != 0 && !v11) {
            char * v12 = (char *)(a1 - 0x72c552cd); // 0x34b2a8
            int64_t v13 = v9; // 0x34b246
            int64_t v14 = v8; // 0x34b2b6
            char v15 = *v12 ^ (char)(v13 / 256); // 0x34b2a8
            unsigned char v16 = llvm_ctpop_i8(v15); // 0x34b2a8
            *v12 = v15;
            unknown_67fa27b5();
            while (v16 % 2 != 0) {
                // 0x34b2b6
                v14 += v7;
                int64_t v17 = v13 - 1; // 0x34b2b7
                v13 = v17;
                int64_t v18; // 0x34b246
                v18 += 8;
                if (v17 == 0 || v15 == 0) {
                    int64_t v19 = v17; // 0x34b2b9
                    int64_t v20 = v14; // 0x34b2b9
                    int64_t v21; // 0x34b2ae
                    v6 = v21;
                    int64_t v22; // 0x34b2ae
                    v3 = v22;
                    int64_t v23 = v14; // 0x34b2b9
                    int64_t v24; // 0x34b246
                    int64_t v25; // 0x34b2af
                    v2 = v25 & 0xff00 | (int64_t)*(char *)v24;
                    v4 = v22;
                    if (v15 == 0) {
                        goto lab_0x34b316;
                    } else {
                        goto lab_0x34b2bb;
                    }
                }
                v15 = *v12 ^ (char)(v13 / 256);
                v16 = llvm_ctpop_i8(v15);
                *v12 = v15;
                unknown_67fa27b5();
            }
        }
        // 0x34b2b9
        v2 = v1 & 0xff00 | (int64_t)*(char *)a2;
        if (v11) {
            goto lab_0x34b316;
        } else {
            goto lab_0x34b2bb;
        }
    } else {
        // 0x34b24d
        int3_t v26; // 0x34b246
        __frontend_reg_store_fpr(v26 - 1, (float80_t)*(int16_t *)(a1 - 0x4599f51d));
        unknown_14cec95b();
        v5 = 0xe83a5325;
        goto lab_0x34b25f;
    }
  lab_0x34b316:
    // 0x34b316
    __asm_outsd((int16_t)a3, *(int32_t *)v8);
    char v27 = *(char *)0x20fca426; // 0x34b31f
    *(char *)0x20fca426 = v27 + (char)(v4 / 256);
    return 0x10000 * (int32_t)v2 >> 16;
  lab_0x34b2bb:;
    int32_t * v28 = (int32_t *)v9; // 0x34b2bd
    *v28 = *v28 + (int32_t)v10;
    char * v29 = (char *)(a1 + 0x10871598); // 0x34b2bf
    *v29 = -1 - *v29;
    int64_t v30 = v6 - 8; // 0x34b2c7
    *(int64_t *)v30 = v3;
    uint64_t v31 = v3 + 96; // 0x34b2ce
    unsigned char v32 = (char)(v31 / 256); // 0x34b2d1
    unsigned char v33 = *(char *)-0x22bf7d3; // 0x34b2d1
    int64_t v34 = v9; // 0x34b2d8
    v5 = a3;
    int64_t v35 = v31 & 0xffffffff; // 0x34b2d8
    int64_t v36 = v30; // 0x34b2d8
    bool v37 = v33 > v32; // 0x34b2d8
    if (v32 - v33 < 0) {
        int64_t v38 = unknown_fffffffff499eeeb(v7 + a1, v8 + v7); // 0x34b2e5
        uint32_t v39 = (int32_t)v9 % 32; // 0x34b2ed
        int64_t result = v38; // 0x34b2ed
        if (v39 != 0) {
            result = (int32_t)v38 << v39 | (int32_t)((v38 & 0xffffffff) >> (int64_t)(33 - v39));
        }
        return result;
    }
    goto lab_0x34b25f;
  lab_0x34b25f:;
    char v40 = *(char *)0x54369af8; // 0x34b25f
    *(char *)0x54369af8 = (char)v37 - (char)(v34 / 256) + v40;
    __asm_int(-109);
    char * v41 = (char *)(a1 + 58 + v5); // 0x34b269
    *v41 = *v41 + (char)v34;
    char * v42 = (char *)(v5 - 0x67411fb9); // 0x34b26d
    *v42 = *v42 & (char)v35;
    return (unknown_ffffffffa913a579() ^ v36) + 0xe8ceca5f & 0xffffffff;
}

// Address range: 0x34b370 - 0x34b375
int64_t function_34b370(void) {
    // 0x34b370
    int64_t result; // 0x34b370
    int32_t * v1 = (int32_t *)(result - 102); // 0x34b370
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x34b39e - 0x34b39f
int64_t function_34b39e(int64_t a1) {
    // 0x34b39e
    int64_t result; // 0x34b39e
    return result;
}

// Address range: 0x34b46d - 0x34b476
int64_t function_34b46d(int64_t a1) {
    // 0x34b46d
    int64_t v1; // 0x34b46d
    float80_t v2; // 0x34b46d
    *(float64_t *)(v1 + 0x1e862f2) = (float64_t)v2;
    return v1 | 199;
}

// Address range: 0x34b49a - 0x34b49f
int64_t function_34b49a(void) {
    // 0x34b49a
    return function_ffffffffee6ee1e7();
}

// Address range: 0x34b4d3 - 0x34b503
int64_t function_34b4d3(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(unknown_52f5de0() + 0x70170480); // 0x34b4df
    int64_t v2; // 0x34b4d3
    *v1 = *v1 | (char)v2;
    unknown_ffffffffeca8aff1();
    int64_t result = unknown_ffffffffd3d33800(); // 0x34b4fa
    char * v3 = (char *)(v2 + 1); // 0x34b4ff
    *v3 = *v3 - 97;
    return result;
}

// Address range: 0x34b589 - 0x34b5a5
int64_t function_34b589(int64_t a1, int64_t a2) {
    // 0x34b589
    int64_t v1; // 0x34b589
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x34b589
    int64_t v3 = v2 ? -4 : 4; // 0x34b589
    int64_t v4; // 0x34b589
    int64_t v5 = v4;
    *(char *)v5 = *(char *)&v4 + (char)v5;
    return function_34b605(v3 + a1, v3 + a2, v1, v1, -0x49f74000);
}

// Address range: 0x34b5a5 - 0x34b5ab
int64_t function_34b5a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x34b5a5
    int64_t result; // 0x34b5a5
    *(char *)(a4 - 58) = (char)result;
    return result;
}

// Address range: 0x34b5af - 0x34b5b2
int64_t function_34b5af(void) {
    // 0x34b5af
    int64_t result; // 0x34b5af
    return result;
}

// Address range: 0x34b5ef - 0x34b5f0
int64_t function_34b5ef(void) {
    // 0x34b5ef
    int64_t result; // 0x34b5ef
    return result;
}

// Address range: 0x34b605 - 0x34b616
int64_t function_34b605(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x34b605
    int64_t result; // 0x34b605
    *(char *)0x3ab7cc2a01e80079 = (char)result;
    return result;
}

// Address range: 0x34b639 - 0x34b63c
int64_t function_34b639(int64_t a1) {
    // 0x34b639
    int64_t result; // 0x34b639
    return result;
}

// Address range: 0x34b66a - 0x34b66c
int64_t function_34b66a(void) {
    // 0x34b66a
    return function_34b5ef();
}

// Address range: 0x34b676 - 0x34b67c
int64_t function_34b676(void) {
    // 0x34b676
    return function_ffffffffa5369f53();
}

// Address range: 0x34b6c5 - 0x34b6e2
int64_t function_34b6c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 14); // 0x34b6c7
    int64_t v2; // 0x34b6c5
    *v1 = *v1 + (int32_t)v2;
    return unknown_4cfe12dd(0x99de5c84);
}

// Address range: 0x34b796 - 0x34b799
int64_t function_34b796(int64_t a1, int64_t a2) {
    // 0x34b796
    int64_t v1; // 0x34b796
    *(char *)a1 = (char)v1;
    bool v2; // 0x34b796
    int64_t v3 = v2 ? -1 : 1; // 0x34b796
    return function_34b7e9(v3 + a1, v3 + a2, v1, v1);
}

// Address range: 0x34b7e7 - 0x34b7e9
int64_t function_34b7e7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34b7e7
    int64_t result; // 0x34b7e7
    return result;
}

// Address range: 0x34b7e9 - 0x34b7f9
int64_t function_34b7e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34b7e9
    int64_t result; // 0x34b7e9
    int32_t * v1 = (int32_t *)(4 * a4 - 0x3fb654c + result); // 0x34b7f2
    *v1 = *v1 ^ (int32_t)a4;
    return result;
}

// Address range: 0x34b81d - 0x34b823
int64_t function_34b81d(void) {
    // 0x34b81d
    int64_t result; // 0x34b81d
    return result;
}

// Address range: 0x34b83b - 0x34b840
int64_t function_34b83b(int64_t a1, int64_t a2) {
    // 0x34b83b
    int64_t result; // 0x34b83b
    return result;
}

// Address range: 0x34b842 - 0x34b843
int64_t function_34b842(int64_t a1) {
    // 0x34b842
    int64_t result; // 0x34b842
    return result;
}

// Address range: 0x34b856 - 0x34b87f
int64_t function_34b856(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34b856
    __asm_in_136((int16_t)a3);
    __asm_sti();
    int64_t v1; // 0x34b856
    *(char *)0x20c55f7b = *(char *)0x20c55f7b + (char)((v1 ^ a3) / 256);
    return function_34b8e9(a1, a2, a3);
}

// Address range: 0x34b8a0 - 0x34b8a3
int64_t function_34b8a0(int64_t a1) {
    // 0x34b8a0
    int64_t result; // 0x34b8a0
    return result;
}

// Address range: 0x34b8ba - 0x34b8bb
int64_t function_34b8ba(int64_t a1) {
    // 0x34b8ba
    int64_t result; // 0x34b8ba
    return result;
}

// Address range: 0x34b8e9 - 0x34b8fb
int64_t function_34b8e9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34b8e9
    unknown_ffffffff9c2419f1();
    int64_t v1; // 0x34b8e9
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x34b8e9
    int64_t v3 = v2 ? -4 : 4; // 0x34b8f2
    return unknown_ffffffffba1376fa(v3 + a1 + (v2 ? -1 : 1), v3 + a2);
}

// Address range: 0x34b910 - 0x34b91b
int64_t function_34b910(void) {
    // 0x34b910
    return function_3c4bb03();
}

// Address range: 0x34b940 - 0x34b941
int64_t function_34b940(void) {
    // 0x34b940
    int64_t result; // 0x34b940
    return result;
}

// Address range: 0x34b948 - 0x34b963
int64_t function_34b948(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x34b948
    int64_t v1; // 0x34b948
    *(int32_t *)v1 = -0x51c5b621;
    if (*(char *)(a2 + 0x5eec53c6) != -(char)(a3 / 256)) {
        function_34b940();
    }
    int32_t * v2 = (int32_t *)(v1 + 0x2b7b467); // 0x34b958
    *v2 = *v2 + (int32_t)v1;
    return __asm_int3();
}

// Address range: 0x34b984 - 0x34b989
int64_t function_34b984(void) {
    // 0x34b984
    return function_ffffffffb489f482();
}

// Address range: 0x34b991 - 0x34b992
int64_t function_34b991(void) {
    // 0x34b991
    int64_t result; // 0x34b991
    return result;
}

// Address range: 0x34b9a4 - 0x34b9a7
int64_t function_34b9a4(int64_t a1) {
    // 0x34b9a4
    int64_t result; // 0x34b9a4
    return result;
}

// Address range: 0x34b9b1 - 0x34b9c8
int64_t function_34b9b1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x34b9b1
    *(int32_t *)a1 = (int32_t)unknown_ffffffffbb97c3b7();
    bool v1; // 0x34b9b1
    int64_t v2 = (v1 ? -4 : 4) + a1; // 0x34b9b6
    unknown_ffffffff8e6c47c4(v2);
    int64_t result = function_34ba08(v2, a2, a4 / 256 % 256 | a3 & -256, a4 & -0xff01 | 256 * a3 & 0xff00, (int64_t)&g3); // 0x34b9c6
    return result;
}

// Address range: 0x34ba03 - 0x34ba08
int64_t function_34ba03(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 - 101); // 0x34ba05
    *v1 = *v1 + (char)a3;
    return a4 & 0xffffffff;
}

// Address range: 0x34ba08 - 0x34baa6
int64_t function_34ba08(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x34ba08
    uint64_t v3 = 256 * v2 & 0xff00 ^ a4; // 0x34ba08
    int32_t * v4 = (int32_t *)(v3 - 10); // 0x34ba0a
    *v4 = *v4 + (int32_t)v3;
    char * v5 = (char *)((__asm_sti() ^ 54) - 49); // 0x34ba10
    uint64_t v6 = v2 / 256; // 0x34ba10
    char v7 = v6; // 0x34ba10
    *v5 = *v5 + v7;
    int64_t v8 = v3 & -256 | v6 % 256; // 0x34ba13
    int64_t v9 = v2 & -0xff01 | 256 * a4 & 0xff00; // 0x34ba13
    char * v10 = (char *)(8 * v9 + a1); // 0x34ba15
    char v11 = a4; // 0x34ba15
    *v10 = *v10 | v11;
    int32_t * v12 = (int32_t *)(a1 + 8 + v8); // 0x34ba1b
    *v12 = *v12 + (int32_t)v8;
    int32_t v13 = (int32_t)a1 ^ -64; // 0x34ba1f
    if (v13 != 0) {
        unsigned char v14 = (char)*(int32_t *)-0x5a2cfe1781d1557b; // 0x34ba82
        char v15 = v14 - 75; // 0x34ba82
        unsigned char v16 = llvm_ctpop_i8(v15); // 0x34ba82
        int32_t v17 = *(int32_t *)&v1; // 0x34ba84
        *(char *)-0x596b0673 = *(char *)-0x596b0673 + v11;
        float80_t v18; // 0x34ba08
        *(float32_t *)(v9 & -256) = (float32_t)v18;
        char * v19 = (char *)(256 * (16 * (int64_t)(v14 % 16 > 10) | (int64_t)(v14 > 74) | 64 * (int64_t)(v15 == 0) | 128 * (int64_t)(v15 < 0) | 4 * (int64_t)(v16 % 2 == 0)) | (int64_t)(v17 & -0xff01 | 512)); // 0x34ba95
        *v19 = *v19 & v7;
        *(char *)(v2 + 15) = (char)(a3 / 256);
        bool v20; // 0x34ba08
        return unknown_c370a2(v13, v1 + (v20 ? -4 : 4));
    }
    int32_t * v21 = (int32_t *)v8; // 0x34ba36
    *v21 = *v21 | (int32_t)v2;
    uint64_t v22 = unknown_3d36a23e(v13); // 0x34ba38
    int64_t result = (v22 - v3 / 256) % 256 | v22 & -256; // 0x34ba3f
    int32_t * v23 = (int32_t *)(result + 53); // 0x34ba41
    uint32_t v24 = *v23; // 0x34ba41
    uint32_t v25 = v24 + (int32_t)result; // 0x34ba41
    *v23 = v25;
    char * v26 = (char *)(v2 + 16 + 4 * result); // 0x34ba44
    *v26 = *v26 + (char)(v22 / 256) + (char)(v25 < v24);
    return result;
}

// Address range: 0x34badc - 0x34baf1
int64_t function_34badc(void) {
    char v1 = *(char *)-0x74d1f711; // 0x34bae8
    int64_t result; // 0x34badc
    *(char *)-0x74d1f711 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x34bb46 - 0x34bb47
int64_t function_34bb46(void) {
    // 0x34bb46
    int64_t result; // 0x34bb46
    return result;
}

// Address range: 0x34bb55 - 0x34bb5e
int64_t function_34bb55(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34bb55
    int64_t v1; // 0x34bb55
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)v1;
    __asm_out(2, (int32_t)v1);
    return function_34bb46();
}
