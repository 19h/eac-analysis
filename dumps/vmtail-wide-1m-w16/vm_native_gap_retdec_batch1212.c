/*
 * Targeted RetDec C for native executable gap queue batch 1212.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1f44e8-0x1f46e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f46e8-0x1f48e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f48e8-0x1f4ae8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f4ae8-0x1f4ce8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f4ce8-0x1f4ee8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f4ee8-0x1f50e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f50e8-0x1f52e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f52e8-0x1f54e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33650c-0x33670c rank=- name=- kind=- bytes=- uncovered=-
 *   0x33670c-0x33690c rank=- name=- kind=- bytes=- uncovered=-
 *   0x33690c-0x336b0c rank=- name=- kind=- bytes=- uncovered=-
 *   0x336b0c-0x336d0c rank=- name=- kind=- bytes=- uncovered=-
 *   0x336d0c-0x336f0c rank=- name=- kind=- bytes=- uncovered=-
 *   0x336f0c-0x33710c rank=- name=- kind=- bytes=- uncovered=-
 *   0x33710c-0x33730c rank=- name=- kind=- bytes=- uncovered=-
 *   0x33730c-0x33750c rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_12f4fb5();
int64_t function_15226b9e();
int64_t function_1706e08();
int64_t function_1735541a();
int64_t function_1f44d0();
int64_t function_1f44e8(int64_t a1);
int64_t function_1f4502(int64_t a1);
int64_t function_1f455e(void);
int64_t function_1f457f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1f45c9(int64_t a1);
int64_t function_1f45fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f460f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1f4620(void);
int64_t function_1f4677(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1f4690(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f46f4(int64_t a1);
int64_t function_1f4706(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f476a(int64_t a1);
int64_t function_1f477c(void);
int64_t function_1f4788(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1f47ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1f4964(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f4add(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f4c4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1f4d94(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f4ee1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1f506d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1f51b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1f5364(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1f54e5(void);
int64_t function_2079e2d();
int64_t function_33650c(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_33661e(int64_t a1);
int64_t function_336626(int64_t a1);
int64_t function_3366d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_336700(void);
int64_t function_336706(void);
int64_t function_33672d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_33678e(int64_t a1);
int64_t function_3367f8(int64_t a1);
int64_t function_336840(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33689e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3368bd(void);
int64_t function_3368d8(void);
int64_t function_3368e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_336928(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3369bb(void);
int64_t function_336a5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_336a8f(int64_t a1);
int64_t function_336ac0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_336aed(void);
int64_t function_336b0a(int64_t a1);
int64_t function_336b1f(void);
int64_t function_336b50(void);
int64_t function_336b68(void);
int64_t function_336b71(int64_t a1);
int64_t function_336bc1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_336bcc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_336be1(void);
int64_t function_336bf1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_336c0d(int64_t a1);
int64_t function_336c13(int64_t a1, int64_t a2, int64_t a3);
int64_t function_336c31(int64_t a1);
int64_t function_336c7d(int64_t a1);
int64_t function_336c9f(int64_t a1);
int64_t function_336ca9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_336d1d(void);
int64_t function_336d42(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_336d5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7, int64_t a8);
int64_t function_336da0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_336dc5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_336de2(void);
int64_t function_336de6(void);
int64_t function_336e0a(void);
int64_t function_336e0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_336e40(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_336f34(void);
int64_t function_336f4a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_33705b(void);
int64_t function_33708d(void);
int64_t function_3370b0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3370e9(int64_t a1);
int64_t function_3370f3(void);
int64_t function_3370fb(int64_t a1);
int64_t function_33710f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3372a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_33744d(int64_t a1);
int64_t function_337490(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6fe0123();
int64_t function_9bf5bbd();
int64_t function_c6d58();
int64_t function_ffffffff9130495e();
int64_t function_ffffffffd68b724c();
int64_t function_fffffffffb146cda();
int64_t unknown_1107e175();
int64_t unknown_113b79a9();
int64_t unknown_159cfe91();
int64_t unknown_1f354dc2();
int64_t unknown_38e271cf();
int64_t unknown_3ac38bde();
int64_t unknown_3b23f74f();
int64_t unknown_3d354f6d();
int64_t unknown_3d35556c();
int64_t unknown_40a2e35c();
int64_t unknown_4aab3cd1();
int64_t unknown_5826e770();
int64_t unknown_654d513a();
int64_t unknown_6f3ddcc5();
int64_t unknown_ffffffff936f470a();
int64_t unknown_ffffffff9dfc335c();
int64_t unknown_ffffffffa0987cdc();
int64_t unknown_ffffffffa5979175();
int64_t unknown_ffffffffc83df193();
int64_t unknown_ffffffffd227ccc0();
int64_t unknown_ffffffffd358d240();
int64_t unknown_ffffffffd89046b5();
int64_t unknown_ffffffffdc0f6ded();
int64_t unknown_ffffffffdc8512e6();
int64_t unknown_ffffffffe7384ed7();
int64_t unknown_ffffffffe83978de();
int64_t unknown_ffffffffe842e149();
int64_t unknown_ffffffffe91fb550();
int64_t unknown_fffffffff3afe57e();
int64_t unknown_fffffffff5d1dfe9();

// Address range: 0x1f44e8 - 0x1f4500
int64_t function_1f44e8(int64_t a1) {
    // 0x1f44e8
    int64_t v1; // 0x1f44e8
    *(int64_t *)v1 = 0x73216500;
    int32_t v2; // 0x1f44e8
    int64_t v3; // 0x1f44e8
    int32_t v4; // 0x1f44e8
    int64_t result; // 0x1f44e8
    bool v5; // 0x1f44e8
    if (v5 || v5) {
        int64_t v6 = function_1f44d0(); // 0x1f44ee
        result = v6;
        int32_t v7 = v6;
        v2 = v7;
        v3 = v6;
        v4 = v7;
    } else {
        // 0x1f44e8
        v2 = result;
        v3 = result;
        v4 = *(int32_t *)&result;
    }
    // 0x1f44f0
    *(int32_t *)v3 = v4 + v2;
    return result;
}

// Address range: 0x1f4502 - 0x1f4505
int64_t function_1f4502(int64_t a1) {
    // 0x1f4502
    int64_t result; // 0x1f4502
    return result;
}

// Address range: 0x1f455e - 0x1f4560
int64_t function_1f455e(void) {
    // 0x1f455e
    int64_t v1; // 0x1f455e
    return function_1f45c9(v1);
}

// Address range: 0x1f457f - 0x1f4585
int64_t function_1f457f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1f457f
    int64_t result; // 0x1f457f
    return result;
}

// Address range: 0x1f45c9 - 0x1f45ca
int64_t function_1f45c9(int64_t a1) {
    // 0x1f45c9
    int64_t result; // 0x1f45c9
    return result;
}

// Address range: 0x1f45fa - 0x1f4608
int64_t function_1f45fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f45fa
    int64_t result; // 0x1f45fa
    int32_t * v1 = (int32_t *)(result - 0x40f20a06); // 0x1f45fa
    uint32_t v2 = *v1; // 0x1f45fa
    uint32_t v3 = (int32_t)result; // 0x1f45fa
    *v1 = v2 - v3;
    char * v4 = (char *)(result + 77); // 0x1f4600
    *v4 = *v4 - (v2 < v3 ? -23 : -24);
    int32_t * v5 = (int32_t *)(a3 + a1); // 0x1f4604
    *v5 = *v5 + (int32_t)a4;
    return result;
}

// Address range: 0x1f460f - 0x1f461b
int64_t function_1f460f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1f460f
    int64_t v1; // 0x1f460f
    *(int32_t *)a3 = (int32_t)v1 + (int32_t)a1;
    return function_2079e2d();
}

// Address range: 0x1f4620 - 0x1f4622
int64_t function_1f4620(void) {
    // 0x1f4620
    int64_t v1; // 0x1f4620
    return function_1f4690(v1, v1, v1, v1);
}

// Address range: 0x1f4677 - 0x1f4690
int64_t function_1f4677(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1f4677
    return unknown_159cfe91();
}

// Address range: 0x1f4690 - 0x1f46f1
int64_t function_1f4690(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x1f4690
    unsigned char v3 = (char)v2 | -83; // 0x1f4690
    unsigned char v4 = llvm_ctpop_i8(v3); // 0x1f4690
    int16_t v5 = a3; // 0x1f4692
    *(int32_t *)a1 = __asm_insd(v5);
    if (v4 % 2 == 0) {
        // 0x1f4697
        return v2 & -0x10000 | (int64_t)v3 | 1024 * (int64_t)(v4 % 2 == 0) | 0x8200;
    }
    int32_t * v6 = (int32_t *)(a4 + 0x474913f4); // 0x1f46aa
    *v6 = *v6 + (int32_t)v2;
    *(int32_t *)-0xb281160 = *(int32_t *)-0xb281160 + (int32_t)v1;
    int64_t v7 = unknown_ffffffffd227ccc0(0x36c3d408); // 0x1f46ba
    char * v8 = (char *)(v2 - 0x344e4146); // 0x1f46bf
    *v8 = *v8 - (char)a3;
    char * v9 = (char *)(v2 - 49); // 0x1f46c6
    *v9 = *v9 + (char)v7;
    char * v10 = (char *)(unknown_38e271cf() - 23); // 0x1f46ce
    *v10 = *v10 + (char)(v2 / 256);
    __asm_in_133(v5);
    unknown_3ac38bde();
    *(int32_t *)0x36c3d408 = *(int32_t *)&v1;
    bool v11; // 0x1f4690
    int64_t v12 = v11 ? -4 : 4; // 0x1f46ea
    return __asm_sti(v12 + 0x36c3d408, v1 + v12);
}

// Address range: 0x1f46f4 - 0x1f46f7
int64_t function_1f46f4(int64_t a1) {
    // 0x1f46f4
    int64_t result; // 0x1f46f4
    return result;
}

// Address range: 0x1f4706 - 0x1f4711
int64_t function_1f4706(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f4706
    int64_t result; // 0x1f4706
    int32_t * v1 = (int32_t *)(result + 71); // 0x1f4706
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1f476a - 0x1f4772
int64_t function_1f476a(int64_t a1) {
    // 0x1f476a
    return unknown_5826e770(a1);
}

// Address range: 0x1f477c - 0x1f477d
int64_t function_1f477c(void) {
    // 0x1f477c
    int64_t result; // 0x1f477c
    return result;
}

// Address range: 0x1f4788 - 0x1f47a3
int64_t function_1f4788(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1f4788
    int64_t v1; // 0x1f4788
    int64_t v2 = v1;
    *(char *)-0x170ab638 = *(char *)-0x170ab638 - (char)v2;
    int32_t * v3 = (int32_t *)(a2 - 0x172c9aa3); // 0x1f478e
    uint32_t v4 = *v3; // 0x1f478e
    uint32_t v5 = v4 + (int32_t)v1; // 0x1f478e
    *v3 = v5;
    return (v2 + 26 + (int64_t)(v5 < v4)) % 256 | v2 & -256;
}

// Address range: 0x1f47ed - 0x1f4964
int64_t function_1f47ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    char * v1 = (char *)function_1f477c(); // 0x1f47fe
    char v2 = a4; // 0x1f47fe
    *v1 = *v1 | v2;
    int64_t v3 = unknown_ffffffff936f470a() & -256; // 0x1f480b
    unsigned char v4 = *(char *)0x384c901e864f322; // 0x1f480d
    char * v5 = (char *)((v3 | (int64_t)v4) - 0x7cb76400); // 0x1f4816
    *v5 = *v5 + v4;
    char * v6 = (char *)((v3 | (int64_t)__asm_in_133(388)) - 119); // 0x1f481d
    *v6 = *v6 | v2;
    int64_t v7; // bp-40, 0x1f47ed
    int64_t v8 = (int64_t)&v7; // 0x1f48dd
    v7 = v8;
    int64_t * v9 = (int64_t *)(v8 - 8); // 0x1f48e6
    *v9 = a7;
    int64_t v10 = v8 + 16; // 0x1f48e9
    *(int64_t *)v10 = v7;
    v7 = 0x43a9c2c1;
    *(int64_t *)(v8 - 16) = 0x1f05c8;
    *(int64_t *)(v8 + 32) = v7;
    v7 = a4;
    int64_t v11 = v7; // 0x1f493b
    v7 = v10;
    int64_t v12 = v8 + 8; // 0x1f493f
    v7 = *(int64_t *)v12;
    *v9 = v12;
    return function_c6d58(a1, 310, a3 & -0x10000 | 388, v11, a5, a6, 0x38625ef4);
}

// Address range: 0x1f4964 - 0x1f4add
int64_t function_1f4964(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f4964
    int64_t v1; // bp-48, 0x1f4964
    int64_t v2 = (int64_t)&v1; // 0x1f4a42
    v1 = 0x1f07f3;
    *(int64_t *)(v2 + 32) = 0x1f07f3;
    int64_t v3 = v2 + 8; // 0x1f4a5d
    v1 = *(int64_t *)v3;
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x1f4a68
    *v4 = a4;
    *v4 = v3;
    v1 = v2 + 16;
    int64_t v5; // 0x1f4964
    return function_c6d58(a1, a2, a3, *v4, v5, v5, 0x5be480ff);
}

// Address range: 0x1f4add - 0x1f4c4c
int64_t function_1f4add(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x3397589a; // bp-32, 0x1f4b48
    int64_t v2 = (int64_t)&v1; // 0x1f4b78
    int64_t v3 = v2 + 16; // 0x1f4b80
    int64_t * v4 = (int64_t *)v3; // 0x1f4b80
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x1f4b80
    int64_t v6 = v2 - 16; // 0x1f4b84
    int64_t * v7 = (int64_t *)v6; // 0x1f4b84
    *v7 = v2;
    *v5 = a3;
    *v4 = a5;
    *v7 = v6;
    *v5 = *v4;
    *(int64_t *)(v2 + 32) = v1;
    v1 = a1;
    *v5 = 0x1f0a1d;
    int64_t v8 = v1; // 0x1f4c22
    v1 = v3;
    int64_t v9 = v2 + 8; // 0x1f4c26
    v1 = *(int64_t *)v9;
    *v5 = v9;
    int64_t v10; // 0x1f4add
    return function_c6d58(v8, a2, *v5, a4, v10, v10, v1);
}

// Address range: 0x1f4c4c - 0x1f4d94
int64_t function_1f4c4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1f4c4c
    int64_t v1; // bp-24, 0x1f4c4c
    int64_t v2 = (int64_t)&v1; // 0x1f4c7b
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x1f4c87
    v1 = 0x1f0cf6;
    *v3 = a5;
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x1f4c9a
    *v4 = a3;
    *v3 = 169;
    int64_t * v5 = (int64_t *)(v2 - 24); // 0x1f4cd1
    int64_t v6 = *(int64_t *)(v2 + 24); // 0x1f4cdd
    *v4 = v6;
    *v5 = v6;
    int64_t v7 = *(int64_t *)(v2 + 8); // 0x1f4cf3
    *v4 = v7;
    int64_t * v8 = (int64_t *)(v2 - 32); // 0x1f4cfa
    *v8 = v7;
    *v5 = v6;
    v1 = *v4;
    *v8 = a2;
    *(int64_t *)(v2 - 40) = v7 ^ 0x77f71e16;
    *v4 = v7;
    *(int64_t *)(v2 + 16) = v7;
    *v5 = a4;
    *v4 = v2;
    int64_t v9; // 0x1f4c4c
    return function_c6d58(a1, *v8, a3, a4, *v3, a6, v9);
}

// Address range: 0x1f4d94 - 0x1f4ee1
int64_t function_1f4d94(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f4d94
    int64_t v1; // bp-32, 0x1f4d94
    int64_t v2 = (int64_t)&v1; // 0x1f4e07
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x1f4e0f
    int64_t * v4 = (int64_t *)v3; // 0x1f4e10
    *v4 = 0x22d0b35d;
    int64_t * v5 = (int64_t *)(v2 - 24); // 0x1f4e20
    int64_t * v6 = (int64_t *)(v2 + 24); // 0x1f4e26
    int64_t v7 = *v6; // 0x1f4e26
    int64_t * v8 = (int64_t *)(v2 - 16); // 0x1f4e26
    *v8 = v7;
    *v5 = v3;
    int64_t v9 = v2 + 8; // 0x1f4e44
    int64_t * v10 = (int64_t *)v9; // 0x1f4e44
    int64_t v11 = *v10; // 0x1f4e44
    *v8 = v11;
    *v5 = a3;
    *v4 = v7;
    *v10 = v7;
    *v8 = v11;
    *v6 = *v4;
    *v4 = v1;
    *v8 = v1;
    v1 = *v10;
    *v4 = v9;
    int64_t v12; // 0x1f4d94
    return function_c6d58(a1, a2, *v8, a4, a5, v12, 0x1f18c6);
}

// Address range: 0x1f4ee1 - 0x1f506d
int64_t function_1f4ee1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1f4ee1
    int64_t v1; // bp-24, 0x1f4ee1
    int64_t v2 = (int64_t)&v1; // 0x1f4fe0
    int64_t * v3 = (int64_t *)(v2 - 16); // 0x1f4fec
    int64_t * v4 = (int64_t *)(v2 - 24); // 0x1f4ff1
    *v4 = a6;
    *v3 = a7;
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x1f5000
    int64_t v6 = v2 + 8; // 0x1f5000
    *(int64_t *)v6 = *v5;
    *v5 = 0x7f22e717;
    bool v7; // 0x1f4ee1
    *v3 = 0x4000 * (int64_t)v7 | 2048 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | 128 * (int64_t)v7 | 64 * (int64_t)v7 | 16 * (int64_t)v7 | (int64_t)v7 | 4 * (int64_t)v7 | 2;
    *(int64_t *)(v2 + 24) = *v5;
    *v5 = v6;
    *v5 = v1;
    *v3 = v2;
    int64_t v8; // 0x1f4ee1
    return function_c6d58(v8, a2, a3, a4, a5, *v4, v1);
}

// Address range: 0x1f506d - 0x1f51b7
int64_t function_1f506d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1f506d
    int64_t v1; // bp-48, 0x1f506d
    v1 = (int64_t)&v1 + 16;
    bool v2; // 0x1f506d
    return function_c6d58(a1, a2, a3, a4, a5, a6, 0x4000 * (int64_t)(bool)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x1f51b7 - 0x1f5364
int64_t function_1f51b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1f51b7
    int64_t v1; // bp-40, 0x1f51b7
    int64_t v2 = (int64_t)&v1; // 0x1f5269
    int64_t v3 = v2 + 16; // 0x1f5286
    v1 = v3;
    int64_t * v4 = (int64_t *)(v2 + 32); // 0x1f5295
    int64_t v5 = *v4; // 0x1f5295
    int64_t * v6 = (int64_t *)(v2 + 8); // 0x1f5295
    *v6 = v5;
    v1 = a3;
    int64_t * v7 = (int64_t *)(v2 - 8); // 0x1f52af
    *v7 = a5;
    int64_t * v8 = (int64_t *)(v2 - 16); // 0x1f52c8
    *v8 = a1;
    int64_t v9 = v1; // 0x1f52dc
    *v7 = v5;
    *v8 = a6 - 0x6ff73f93;
    *v7 = a6;
    *(int64_t *)v3 = a6;
    *v8 = *v7;
    *v4 = v1;
    *v7 = *v6;
    v1 = a1;
    *v6 = v2 + 24;
    int64_t v10; // 0x1f51b7
    return function_c6d58(a1, a2, v9, a4, *v7, v10, 0x1f2058);
}

// Address range: 0x1f5364 - 0x1f5496
int64_t function_1f5364(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1f5364
    int64_t v1; // bp-24, 0x1f5364
    int64_t v2 = (int64_t)&v1; // 0x1f539d
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x1f53a9
    v1 = 0x1f2372;
    *v3 = 0x26c89a33;
    int64_t * v4 = (int64_t *)(v2 - 24); // 0x1f53c5
    int64_t v5 = v2 - 16; // 0x1f53cb
    int64_t * v6 = (int64_t *)v5; // 0x1f53cb
    *v6 = a4;
    int64_t v7 = *(int64_t *)(v2 + 24); // 0x1f53f3
    *v6 = v7;
    *v4 = v7;
    int64_t * v8 = (int64_t *)(v2 - 32); // 0x1f53fa
    *v8 = v7;
    int64_t * v9 = (int64_t *)(v2 + 8); // 0x1f5406
    int64_t v10 = *v9; // 0x1f5406
    *v6 = v10;
    *v4 = 0x6835f100;
    int64_t * v11 = (int64_t *)(v2 - 40); // 0x1f5434
    *v11 = v7;
    *v3 = *v4;
    *v11 = v10;
    *v4 = v10;
    *v9 = v10;
    *v8 = *v6;
    *v6 = a6;
    *v4 = v5;
    *v6 = v2;
    return function_c6d58(a1, a2, a3, *v6, a5, *v6, 310);
}

// Address range: 0x1f54e5 - 0x1f54e8
int64_t function_1f54e5(void) {
    // 0x1f54e5
    int64_t v1; // 0x1f54e5
    uint64_t result = v1;
    *(char *)result = (char)(result / 256 | result);
    return result;
}

// Address range: 0x33650c - 0x3365f0
int64_t function_33650c(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 - 0x4a9b0ebd); // 0x33650d
    *v1 = *v1 << 31;
    unsigned char v2 = *(char *)0x5cea701b; // 0x336514
    int64_t v3; // 0x33650c
    unsigned char v4 = v2 + (char)(v3 / 256); // 0x336514
    *(char *)0x5cea701b = v4;
    if (v4 >= v2) {
        char v5 = *(char *)(v3 - 0x44fa6e61); // 0x33651d
        int64_t v6 = unknown_ffffffffe83978de(); // 0x336528
        int32_t * v7 = (int32_t *)(256 * (int64_t)(v5 + (char)(a4 / 256)) | a4 & -0xff01); // 0x33652d
        *v7 = *v7 + (int32_t)a3;
        return v6 + 0x37013d00 & 0xffffffff;
    }
    int64_t v8 = v3 & 0xffffffff; // 0x33651a
    int64_t v9 = v8 - 8; // 0x336592
    *(int64_t *)v9 = a4;
    int32_t * v10 = (int32_t *)(v3 + 3); // 0x33659d
    uint32_t v11 = *v10; // 0x33659d
    int32_t v12 = v11 - 0x13d0050; // 0x33659d
    *v10 = v12;
    int32_t result = __asm_in(-10); // 0x3365a4
    *(char *)0x220a50ba = (char)(a4 / 256);
    if (v11 < 0x13d0050 || v12 == 0) {
        // 0x3365e9
        *(char *)0x40354e82 = *(char *)0x40354e82 - 88;
        return result;
    }
    // 0x3365af
    unknown_ffffffffd89046b5();
    unsigned char v13 = *(char *)(v3 - 105) | (char)(a3 / 256); // 0x3365b4
    int64_t v14 = 256 * (int64_t)v13 | a3 & -0xff01; // 0x3365b4
    int32_t * v15 = (int32_t *)v14; // 0x3365b9
    *v15 = *v15 & (int32_t)v9;
    int64_t v16; // 0x33650c
    *(int64_t *)(v8 - 16) = (int64_t)&v16;
    int64_t v17 = unknown_1f354dc2(); // 0x3365bc
    int16_t v18 = v14; // 0x3365c1
    v16 = __asm_insb(v18);
    char * v19 = (char *)(v14 + 120); // 0x3365c7
    *v19 = *v19 - v13;
    __asm_out(54, (int32_t)v17);
    int32_t * v20 = (int32_t *)(v3 + 40); // 0x3365ce
    *v20 = *v20 + (int32_t)a2;
    unknown_ffffffffa0987cdc();
    v16 = __asm_insb(v18);
    char * v21 = (char *)(v3 - 86); // 0x3365e0
    *v21 = *v21 + (char)v3;
    return unknown_fffffffff5d1dfe9();
}

// Address range: 0x33661e - 0x33661f
int64_t function_33661e(int64_t a1) {
    // 0x33661e
    int64_t result; // 0x33661e
    return result;
}

// Address range: 0x336626 - 0x336629
int64_t function_336626(int64_t a1) {
    // 0x336626
    int64_t result; // 0x336626
    return result;
}

// Address range: 0x3366d0 - 0x3366f8
int64_t function_3366d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3366d0
    int64_t v1; // 0x3366d0
    int64_t v2 = v1;
    *(char *)a1 = (char)v1;
    bool v3; // 0x3366d0
    int64_t result = unknown_ffffffffe7384ed7((v3 ? -1 : 1) + a1); // 0x3366d1
    if (v3) {
        // 0x3366d8
        return result;
    }
    int64_t v4 = unknown_ffffffffdc8512e6(); // 0x3366e0
    int64_t result2 = (v4 - (a3 | (int64_t)(char)&g2)) % 256 | v4 & -256; // 0x3366e8
    int32_t * v5 = (int32_t *)(result2 + 4 * a4); // 0x3366ee
    *v5 = *(int32_t *)(v2 - 24 + 4 * v1) + (int32_t)v2 + *v5;
    return result2;
}

// Address range: 0x336700 - 0x336703
int64_t function_336700(void) {
    // 0x336700
    int64_t result; // 0x336700
    return result;
}

// Address range: 0x336706 - 0x336707
int64_t function_336706(void) {
    // 0x336706
    int64_t result; // 0x336706
    return result;
}

// Address range: 0x33672d - 0x336780
int64_t function_33672d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x33672d
    *(int32_t *)a1 = *(int32_t *)0x25e0dc9f081062a2;
    bool v1; // 0x33672d
    char * v2 = (char *)unknown_ffffffffd358d240((v1 ? -4 : 4) + a1); // 0x33673f
    *v2 = *v2 + (char)a3;
    int64_t v3; // 0x33672d
    char * v4 = (char *)(v3 - 0x243c9d22); // 0x336741
    char v5 = *v4 | (char)a4; // 0x336741
    *v4 = v5;
    if (v5 == 0) {
        function_336706();
    }
    // 0x336749
    unknown_3b23f74f();
    __asm_in_134((int16_t)a3);
    __asm_iretd();
    unknown_ffffffff9dfc335c();
    unknown_3d354f6d();
    int32_t * v6 = (int32_t *)(v3 + 42); // 0x33676c
    *v6 = *v6 + (int32_t)((v1 ? 0xffffffff : 1) + a2);
    unknown_1107e175();
    return unknown_fffffffff3afe57e();
}

// Address range: 0x33678e - 0x33678f
int64_t function_33678e(int64_t a1) {
    // 0x33678e
    int64_t result; // 0x33678e
    return result;
}

// Address range: 0x3367f8 - 0x3367fb
int64_t function_3367f8(int64_t a1) {
    // 0x3367f8
    int64_t result; // 0x3367f8
    return result;
}

// Address range: 0x336840 - 0x33689d
int64_t function_336840(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x336840
    int64_t result; // 0x336840
    bool v1; // 0x336840
    if (v1) {
        // 0x33687f
        *(char *)0x5efc048d = *(char *)0x5efc048d + (char)(result / 256);
        int32_t * v2 = (int32_t *)(2 * result + 66 + result); // 0x33688c
        *v2 = *v2 + 84;
        return a4 & 0xffffffff;
    }
    int32_t * v3 = (int32_t *)(a3 - 0x45f86b1e); // 0x336842
    *v3 = *v3 + (int32_t)a1;
    return result;
}

// Address range: 0x33689e - 0x3368aa
int64_t function_33689e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x33689e
    int64_t result; // 0x33689e
    __asm_out_135((int16_t)a3, (int32_t)result);
    char v1 = *(char *)-0x5c6e225a; // 0x33689f
    *(char *)-0x5c6e225a = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x3368bd - 0x3368c1
int64_t function_3368bd(void) {
    // 0x3368bd
    int64_t result; // 0x3368bd
    return result;
}

// Address range: 0x3368d8 - 0x3368da
int64_t function_3368d8(void) {
    // 0x3368d8
    int64_t v1; // 0x3368d8
    return function_336928(v1, v1, v1, v1);
}

// Address range: 0x3368e8 - 0x33690a
int64_t function_3368e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3368e8
    int64_t v1; // 0x3368e8
    int32_t * v2 = (int32_t *)(v1 - 0x4b45d855); // 0x3368e8
    *v2 = *v2 + (int32_t)v1;
    *(char *)0x47e44007 = *(char *)0x47e44007 + (char)(v1 / 256);
    return v1 + 0xd01e67ef & 0xffffff93 | 108;
}

// Address range: 0x336928 - 0x3369b5
int64_t function_336928(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x336928
    int64_t v1; // 0x336928
    int32_t * v2 = (int32_t *)(v1 + a1); // 0x33693b
    *v2 = 2 * *v2;
    char * v3 = (char *)(a2 + 86); // 0x336940
    *v3 = *v3 + (char)(a4 / 256);
    uint64_t v4 = unknown_ffffffffe842e149(); // 0x336943
    int32_t v5 = a1; // 0x336948
    *(int32_t *)0x50ad374f = *(int32_t *)0x50ad374f + v5;
    char v6 = v4 / 256 | v4; // 0x336954
    unsigned char v7 = llvm_ctpop_i8(v6); // 0x336954
    int64_t v8 = unknown_40a2e35c(); // 0x336956
    bool v9; // 0x336928
    int64_t v10 = 1024 * (int64_t)v9 | 0x4000 * (int64_t)v9 | 256 * (int64_t)v9;
    *(int64_t *)0x800feab = v10 | 64 * (int64_t)(v6 == 0) | 128 * (int64_t)(v6 < 0) | 4 * (int64_t)(v7 % 2 == 0) | 2;
    *(char *)-0x5fcaae13 = *(char *)-0x5fcaae13 - 3;
    *(char *)0x1e80a4111fca40b = (char)v8;
    __asm_hlt();
    int64_t v11; // 0x336928
    *(int32_t *)a2 = *(int32_t *)&v11 + v5;
    int64_t v12; // 0x336928
    *(int32_t *)a1 = *(int32_t *)&v12 + 1;
    int32_t * v13 = (int32_t *)(v1 + 0x34754ce6); // 0x336984
    uint32_t v14 = *v13; // 0x336984
    int32_t v15 = v14 + 0x800feb3; // 0x336984
    unsigned char v16 = llvm_ctpop_i8((char)v15); // 0x336984
    *v13 = v15;
    __asm_in(0);
    unknown_ffffffffc83df193();
    *(int64_t *)0x800feab = v10 | (int64_t)(v14 > 0xf7ff014c) | 16 * (int64_t)(v14 % 16 > 12) | 64 * (int64_t)(v15 == 0) | 128 * (int64_t)(v15 < 0) | 2048 * (int64_t)((v15 & (v14 ^ -0x80000000)) < 0) | 4 * (int64_t)(v16 % 2 == 0) | 2;
    int32_t * v17 = (int32_t *)(a3 + 0x4e9e01e8 + a4); // 0x336993
    *v17 = *v17 - (v14 > 0xf7ff014c ? -0x484bc28f : -0x484bc290);
    unknown_113b79a9();
    return __asm_in_134((int16_t)a3) + 0x17a34e45;
}

// Address range: 0x3369bb - 0x3369c5
int64_t function_3369bb(void) {
    // 0x3369bb
    int64_t result; // 0x3369bb
    return result;
}

// Address range: 0x336a5b - 0x336a5f
int64_t function_336a5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x336a5b
    int64_t result; // 0x336a5b
    int32_t * v1 = (int32_t *)(result - 48); // 0x336a5b
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x336a8f - 0x336a97
int64_t function_336a8f(int64_t a1) {
    // 0x336a8f
    int64_t result; // 0x336a8f
    int32_t * v1 = (int32_t *)(result + 1); // 0x336a90
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x336ac0 - 0x336acb
int64_t function_336ac0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x336ac0
    int64_t v1; // 0x336ac0
    *(char *)(v1 - 0x7cfe1799) = (char)a3;
    return function_15226b9e();
}

// Address range: 0x336aed - 0x336af2
int64_t function_336aed(void) {
    // 0x336aed
    return function_fffffffffb146cda();
}

// Address range: 0x336b0a - 0x336b1f
int64_t function_336b0a(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 0x34743a9a); // 0x336b14
    *v1 = *v1 + (int32_t)a1;
    int64_t result; // 0x336b0a
    char * v2 = (char *)(result - 13); // 0x336b1a
    *v2 = -*v2;
    return result;
}

// Address range: 0x336b1f - 0x336b26
int64_t function_336b1f(void) {
    // 0x336b1f
    int64_t result; // 0x336b1f
    return result;
}

// Address range: 0x336b50 - 0x336b55
int64_t function_336b50(void) {
    // 0x336b50
    return function_9bf5bbd();
}

// Address range: 0x336b68 - 0x336b69
int64_t function_336b68(void) {
    // 0x336b68
    int64_t result; // 0x336b68
    return result;
}

// Address range: 0x336b71 - 0x336b76
int64_t function_336b71(int64_t a1) {
    // 0x336b71
    int64_t result; // 0x336b71
    return result;
}

// Address range: 0x336bc1 - 0x336bc6
int64_t function_336bc1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x336bc1
    int64_t result; // 0x336bc1
    return result;
}

// Address range: 0x336bcc - 0x336bd8
int64_t function_336bcc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x336bcc
    int64_t v1; // 0x336bcc
    *(char *)a3 = (char)v1 + (char)a3;
    return function_1735541a();
}

// Address range: 0x336be1 - 0x336be2
int64_t function_336be1(void) {
    // 0x336be1
    int64_t result; // 0x336be1
    return result;
}

// Address range: 0x336bf1 - 0x336c0d
int64_t function_336bf1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x336bf1
    int64_t v1; // 0x336bf1
    char v2 = v1; // 0x336bf1
    char v3 = v2 - 102; // 0x336bf1
    if (((v3 ^ v2) & v2 + 26) < 0) {
        // 0x336bfb
        return unknown_ffffffffdc0f6ded();
    }
    // 0x336bf5
    if (llvm_ctpop_i8(v3) % 2 == 0) {
        function_336be1();
    }
    // 0x336bfb
    return unknown_ffffffffdc0f6ded();
}

// Address range: 0x336c0d - 0x336c13
int64_t function_336c0d(int64_t a1) {
    // 0x336c0d
    int64_t v1; // 0x336c0d
    int64_t v2 = v1;
    return (v2 + 51) % 256 | v2 & -256;
}

// Address range: 0x336c13 - 0x336c20
int64_t function_336c13(int64_t a1, int64_t a2, int64_t a3) {
    // 0x336c13
    int64_t result; // 0x336c13
    return result;
}

// Address range: 0x336c31 - 0x336c34
int64_t function_336c31(int64_t a1) {
    // 0x336c31
    int64_t result; // 0x336c31
    return result;
}

// Address range: 0x336c7d - 0x336c7e
int64_t function_336c7d(int64_t a1) {
    // 0x336c7d
    int64_t result; // 0x336c7d
    return result;
}

// Address range: 0x336c9f - 0x336ca0
int64_t function_336c9f(int64_t a1) {
    // 0x336c9f
    int64_t result; // 0x336c9f
    return result;
}

// Address range: 0x336ca9 - 0x336d09
int64_t function_336ca9(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3;
    bool v2; // 0x336ca9
    int64_t v3 = (v2 ? -8 : 8) + a1; // 0x336ca9
    int64_t v4; // 0x336ca9
    int64_t v5; // 0x336ca9
    *(int32_t *)v4 = *(int32_t *)&v4 + (int32_t)v5;
    char * v6 = (char *)(v5 - 0x46fe1761); // 0x336caf
    *v6 = *v6 + (char)(v4 / 256);
    int64_t v7 = (v4 | v5) & 0xffffffff; // 0x336cba
    unknown_6f3ddcc5(v3);
    int64_t v8 = *(int64_t *)v7; // 0x336cc6
    char * v9 = (char *)(v8 + 0x1e83dba); // 0x336ccc
    char v10 = v5 / 256; // 0x336ccc
    *v9 = *v9 + v10;
    int64_t result = __asm_iretd(); // 0x336cd2
    v4 = result;
    if ((*(int64_t *)(v7 + 8) & 4) == 0) {
        // 0x336d02
        return result;
    }
    int32_t v11 = v3; // 0x336cd7
    *(int32_t *)v1 = *(int32_t *)&v1 | v11;
    int32_t v12 = *(int32_t *)(a2 - 0x17a17215 + 4 * v8); // 0x336cd9
    char v13 = *(char *)(v1 - 113 + 4 * v4); // 0x336ce4
    *(int64_t *)((int64_t)(0x3aaafb01 * v12) - 8) = 0x1e89ea5;
    return function_ffffffff9130495e((int32_t)(256 * (int64_t)(v13 | v10) | v5 & 0xffff00ff) + v11);
}

// Address range: 0x336d1d - 0x336d1e
int64_t function_336d1d(void) {
    // 0x336d1d
    int64_t result; // 0x336d1d
    return result;
}

// Address range: 0x336d42 - 0x336d54
int64_t function_336d42(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x336d42
    int64_t v1; // 0x336d42
    char v2 = *(char *)(v1 - 45); // 0x336d42
    bool v3; // 0x336d42
    int64_t v4 = a4 & -256 | (int64_t)((char)v3 + (char)a4 - v2); // 0x336d42
    char * v5 = (char *)(v4 + 0x4f01e843); // 0x336d45
    unsigned char v6 = *v5; // 0x336d45
    unsigned char v7 = v6 + (char)(a3 / 256); // 0x336d45
    *v5 = v7;
    return v4 + 0xbbde6dda + (int64_t)(v7 < v6) & 0xffffffff;
}

// Address range: 0x336d5b - 0x336da0
int64_t function_336d5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a2;
    unsigned char v2 = (char)a4 % 32; // 0x336d5c
    char v3; // 0x336d5b
    bool v4; // 0x336d5b
    if (v2 == 0) {
        // 0x336d5b
        v3 = a2;
    } else {
        char * v5 = (char *)(a4 + 96); // 0x336d5c
        char v6 = *v5; // 0x336d5c
        *v5 = v6 >> v2;
        v3 = *(char *)&v1;
        v4 = (v6 & 1 << v2 - 1) != 0;
    }
    int64_t v7; // 0x336d5b
    uint64_t v8 = a3 - v7 + (int64_t)v4; // 0x336d5f
    __asm_int3();
    *(char *)a1 = v3;
    bool v9; // 0x336d5b
    int64_t v10 = v9 ? -1 : 1; // 0x336d65
    int64_t v11 = v10 + a1; // 0x336d65
    unknown_3d35556c(v11, v1 + v10);
    int64_t v12 = unknown_ffffffffa5979175(); // 0x336d6f
    char * v13 = (char *)v12; // 0x336d74
    char v14 = v12; // 0x336d74
    *v13 = *v13 + v14;
    int64_t v15; // 0x336d5b
    *(char *)v15 = *(char *)&v15 + (char)v8;
    *v13 = *v13 + v14;
    int32_t * v16 = (int32_t *)(a4 + 0x3309313d); // 0x336d7c
    *v16 = *v16 + (int32_t)v15;
    int64_t v17 = a4 - 1; // 0x336d8e
    int64_t v18 = a7 | 232; // 0x336d8e
    if (v17 != 0) {
        v18 = function_336d1d();
    }
    // 0x336d90
    *(char *)0x7cb8ba97 = *(char *)0x7cb8ba97 + (char)(a6 / 256);
    int64_t v19 = v18 & -256; // 0x336d96
    int16_t v20 = v19 | (int64_t)*(char *)(v18 % 256 + a6); // 0x336d98
    int16_t v21 = (int16_t)*(char *)((v8 % 256 | a3 & 0xffffff00) + v11 & 0xffffffff); // 0x336d98
    int64_t v22; // bp+32, 0x336d5b
    char * v23 = (char *)(8 * v17 + (int64_t)&v22); // 0x336d9c
    *v23 = *v23 ^ (char)v17;
    return (v19 | (int64_t)(v20 / v21)) & -0xff01 | (int64_t)(256 * (v20 % v21));
}

// Address range: 0x336da0 - 0x336dbd
int64_t function_336da0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x336da0
    int64_t v1; // 0x336da0
    return v1 & 0xffffffff;
}

// Address range: 0x336dc5 - 0x336de2
int64_t function_336dc5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x336dc5
    int64_t v1; // 0x336dc5
    int64_t v2 = v1;
    int64_t v3 = v1 + a2; // 0x336dc5
    *(int32_t *)v2 = (int32_t)v2;
    int32_t * v4 = (int32_t *)((v3 + 256 * a3 & 0xff00 | v3 & 0xffff00ff) - 0x51fe17f1); // 0x336dd5
    *v4 = *v4 + (int32_t)a3;
    __asm_int(-87);
    return function_1706e08();
}

// Address range: 0x336de2 - 0x336de3
int64_t function_336de2(void) {
    // 0x336de2
    int64_t result; // 0x336de2
    return result;
}

// Address range: 0x336de6 - 0x336de9
int64_t function_336de6(void) {
    // 0x336de6
    int64_t v1; // 0x336de6
    __asm_sti(v1, v1);
    return function_336de2();
}

// Address range: 0x336e0a - 0x336e0b
int64_t function_336e0a(void) {
    // 0x336e0a
    int64_t result; // 0x336e0a
    return result;
}

// Address range: 0x336e0b - 0x336e21
int64_t function_336e0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 122); // 0x336e19
    *v1 = *v1 + (char)a4;
    return function_6fe0123();
}

// Address range: 0x336e40 - 0x336e79
int64_t function_336e40(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x336e40
    int64_t v3 = v2 ^ 61; // 0x336e42
    int32_t * v4 = (int32_t *)v3; // 0x336e44
    *v4 = *v4 + (int32_t)v3;
    int64_t v5 = a4 & -0xff01 | (int64_t)"many_avx512"; // 0x336e4a
    unsigned char v6 = (char)v5 % 32; // 0x336e4c
    if (v6 != 0) {
        char * v7 = (char *)(v3 + 0x6800b3d3); // 0x336e4c
        unsigned char v8 = *v7; // 0x336e4c
        unsigned char v9 = *(char *)&v1; // 0x336e48
        *v7 = v8 << v6 | (char)((int16_t)v8 >> (int16_t)(9 - v6)) | (char)(v9 > (char)a4) << v6 - 1;
    }
    unsigned char v10 = *(char *)(2 * v2 + a1) | (char)v2; // 0x336e52
    int64_t v11 = v3; // 0x336e55
    if (v5 != 1 == v10 == 0) {
        v11 = function_336e0a();
    }
    int64_t v12 = v2 & -256 | (int64_t)v10; // 0x336e52
    char * v13 = (char *)v11; // 0x336e57
    char v14 = v11; // 0x336e57
    *v13 = *v13 + v14;
    __asm_out_136(-99, v14);
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a3;
    int32_t * v15 = (int32_t *)(2 * v12 + a1); // 0x336e74
    *v15 = *v15 + (int32_t)v12;
    return (int64_t)*(int32_t *)-0x75ea611cfdffbd80;
}

// Address range: 0x336f34 - 0x336f3e
int64_t function_336f34(void) {
    // 0x336f34
    unknown_654d513a();
    return function_12f4fb5();
}

// Address range: 0x336f4a - 0x336f88
int64_t function_336f4a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t result = unknown_ffffffffe91fb550(); // 0x336f4a
    bool v1; // 0x336f4a
    if (!v1) {
        // 0x336f84
        return 256 * (64 * (int64_t)v1 | 128 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1) | result & -0xff01 | 512;
    }
    char * v2 = (char *)(result + 0x24dff00); // 0x336f51
    *v2 = *v2 + (char)result;
    int64_t v3; // 0x336f4a
    char * v4 = (char *)(v3 - 0x57fe1800); // 0x336f57
    *v4 = *v4 + (char)(a4 / 256);
    char * v5 = (char *)(a4 - 0x5730a200); // 0x336f5d
    *v5 = *v5 + (char)v3;
    return result;
}

// Address range: 0x33705b - 0x337064
int64_t function_33705b(void) {
    // 0x33705b
    return function_ffffffffd68b724c();
}

// Address range: 0x33708d - 0x337090
int64_t function_33708d(void) {
    // 0x33708d
    int64_t result; // 0x33708d
    return result;
}

// Address range: 0x3370b0 - 0x3370d9
int64_t function_3370b0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3370b0
    int64_t v1; // 0x3370b0
    int32_t * v2 = (int32_t *)(v1 - 0x34f06391); // 0x3370bf
    *v2 = *v2 + (int32_t)a4;
    char * v3 = (char *)(a4 + 0x70b7fcd9); // 0x3370c5
    unsigned char v4 = *v3; // 0x3370c5
    unsigned char v5 = v4 + (char)(a4 / 256); // 0x3370c5
    *v3 = v5;
    return unknown_4aab3cd1() - (v5 < v4 ? 0x1e8992c : 0x1e8992b) & 0xffffffff;
}

// Address range: 0x3370e9 - 0x3370ed
int64_t function_3370e9(int64_t a1) {
    // 0x3370e9
    int64_t result; // 0x3370e9
    return result;
}

// Address range: 0x3370f3 - 0x3370f4
int64_t function_3370f3(void) {
    // 0x3370f3
    int64_t result; // 0x3370f3
    return result;
}

// Address range: 0x3370fb - 0x3370fe
int64_t function_3370fb(int64_t a1) {
    // 0x3370fb
    return function_3370f3();
}

// Address range: 0x33710f - 0x3372a2
int64_t function_33710f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 + 0x2434ff51 + 2 * a3); // 0x337114
    int64_t v2; // 0x33710f
    *v1 = *v1 + (char)v2;
    int64_t v3 = 0x3359b9; // 0x337167
    int64_t v4 = (int64_t)&v3; // 0x33719b
    int64_t v5 = *(int64_t *)(v4 + 16); // 0x337210
    int64_t * v6 = (int64_t *)(v4 - 8); // 0x337210
    int64_t * v7 = (int64_t *)(v4 - 16); // 0x337214
    int64_t * v8 = (int64_t *)(v4 - 24); // 0x337217
    *v6 = 0x6bcb97d;
    *v8 = a1;
    *v7 = a5;
    *v7 = v5;
    *(int64_t *)(v4 + 24) = v5;
    *v6 = v3;
    *v7 = v4;
    *v6 = v3;
    *v7 = v3;
    return function_c6d58(*v8, a2, a3, *v7, v2, v2, v3);
}

// Address range: 0x3372a2 - 0x337420
int64_t function_3372a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3372a2
    int64_t v1; // bp-48, 0x3372a2
    int64_t v2 = (int64_t)&v1; // 0x337360
    int64_t v3 = v2 + 16; // 0x337366
    v1 = v3;
    int64_t * v4 = (int64_t *)(v2 + 32); // 0x337374
    int64_t v5 = *v4; // 0x337374
    int64_t v6 = v2 + 8; // 0x337374
    int64_t * v7 = (int64_t *)v6; // 0x337374
    *v7 = v5;
    int64_t * v8 = (int64_t *)(v2 - 8); // 0x33738e
    *(int64_t *)v3 = a7;
    v1 = 0x1212e33a;
    *v8 = 0x71ee3e69;
    *(int64_t *)(v2 - 16) = v5;
    *v4 = v1;
    v1 = *v7;
    *v8 = v6;
    int64_t v9 = *v7; // 0x337402
    v1 = v9;
    *v8 = v9;
    int64_t v10; // 0x3372a2
    return function_c6d58(a1, a2, a3, a4, a5, a6, v10);
}

// Address range: 0x33744d - 0x337452
int64_t function_33744d(int64_t a1) {
    // 0x33744d
    return __asm_in((char)a1);
}

// Address range: 0x337490 - 0x33750a
int64_t function_337490(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 - 127); // 0x337490
    *v1 = *v1 | (char)a4;
    int64_t result; // 0x337490
    return result;
}
