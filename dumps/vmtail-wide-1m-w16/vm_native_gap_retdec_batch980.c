/*
 * Targeted RetDec C for native executable gap queue batch 980.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1a80bb-0x1a82bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a82bb-0x1a84bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a84bb-0x1a86bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a86bb-0x1a88bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a88bb-0x1a8abb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a8abb-0x1a8cbb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a8cbb-0x1a8ebb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a8ebb-0x1a90bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x36859e-0x36879e rank=- name=- kind=- bytes=- uncovered=-
 *   0x36879e-0x36899e rank=- name=- kind=- bytes=- uncovered=-
 *   0x36899e-0x368b9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x368b9e-0x368d9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x368d9e-0x368f9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x368f9e-0x36919e rank=- name=- kind=- bytes=- uncovered=-
 *   0x36919e-0x36939e rank=- name=- kind=- bytes=- uncovered=-
 *   0x36939e-0x36959e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_13cec08d();
int64_t function_1a80bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a81fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a8391(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a84ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1a861c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a8743(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a886b(void);
int64_t function_1a88dc(int64_t a1);
int64_t function_1a88ef(int64_t a1, int64_t a2);
int64_t function_1a895f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a89a1(void);
int64_t function_1a89b4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_1a8af8(int64_t a1);
int64_t function_1a8b70(void);
int64_t function_1a8b76(void);
int64_t function_1a8b7c(void);
int64_t function_1a8baa(void);
int64_t function_1a8baf(void);
int64_t function_1a8bcf(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_1a8c9c(void);
int64_t function_1a8ca1(void);
int64_t function_1a8cb5(int64_t a1);
int64_t function_1a8cc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a8d4f(int64_t result);
int64_t function_1a8dd1(int64_t a1, int64_t a2);
int64_t function_1a8df6(int64_t a1);
int64_t function_1a8e06(void);
int64_t function_1a8ea3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1a8ec9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a8efa(int64_t a1);
int64_t function_1a8f0f(int64_t a1);
int64_t function_1a8f5f(void);
int64_t function_1a8f7f(void);
int64_t function_1a8fd4(void);
int64_t function_21e9078();
int64_t function_36853a();
int64_t function_36859e(void);
int64_t function_368610(void);
int64_t function_368643(void);
int64_t function_36864e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36868a(int64_t a1, int64_t a2, int64_t a3, char a4);
int64_t function_368707(int64_t a1, int64_t a2);
int64_t function_368723(void);
int64_t function_36872d(void);
int64_t function_368750(int64_t a1, int64_t a2);
int64_t function_36876a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36879c(void);
int64_t function_3687a0(void);
int64_t function_3687c1(int64_t a1);
int64_t function_368822(void);
int64_t function_36882d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_368836(void);
int64_t function_368840(void);
int64_t function_36884d(int64_t a1, int64_t a2);
int64_t function_368859(void);
int64_t function_36885c(int64_t a1);
int64_t function_368887(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_368892(void);
int64_t function_3688a8(int64_t a1);
int64_t function_3688b7(void);
int64_t function_3689a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3689d3(int64_t a1);
int64_t function_3689dd(int64_t a1, int64_t a2);
int64_t function_368a24(void);
int64_t function_368a35(void);
int64_t function_368b5e(int64_t a1);
int64_t function_368b76(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_368cff(void);
int64_t function_368d95(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_368e02(int64_t a1);
int64_t function_368e61(void);
int64_t function_368e7b(int64_t a1);
int64_t function_368ed5(int64_t a1);
int64_t function_368f3b(void);
int64_t function_368f9b(void);
int64_t function_368fa5(void);
int64_t function_368fc1(int64_t a1);
int64_t function_36900e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_369152(int64_t a1, int64_t a2, int64_t a3, int64_t result);
int64_t function_3691ed(int64_t a1);
int64_t function_3691fb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_36921f(void);
int64_t function_36928c(void);
int64_t function_369299(void);
int64_t function_3692b1(void);
int64_t function_3692e1(int64_t a1);
int64_t function_36933c(void);
int64_t function_369383(int64_t a1, int64_t a2, int64_t a3);
int64_t function_369389(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36941f(int64_t a1);
int64_t function_369473(void);
int64_t function_369477(void);
int64_t function_36949b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_36955c(int64_t a1);
int64_t function_36956f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ee28a9();
int64_t function_5d5bb54();
int64_t function_6da08bf4();
int64_t function_c57b8();
int64_t function_ffffffffa8ed6304();
int64_t function_ffffffffe8e99d8c();
int64_t unknown_10ea0db0();
int64_t unknown_142314e5();
int64_t unknown_2f78d9f3();
int64_t unknown_332ba260();
int64_t unknown_3537c59f();
int64_t unknown_3a4596a7();
int64_t unknown_3da440d0();
int64_t unknown_74cf32cd();
int64_t unknown_78c8c565();
int64_t unknown_7cb854ef();
int64_t unknown_ffffffff89ebbdd8();
int64_t unknown_ffffffff9045c2eb();
int64_t unknown_ffffffff9c3e96dc();
int64_t unknown_ffffffffabec74bb();
int64_t unknown_ffffffffb4c41224();
int64_t unknown_ffffffffb92ce27b();
int64_t unknown_ffffffffc10bb4b0();
int64_t unknown_ffffffffc132db2d();
int64_t unknown_ffffffffccd1ebdc();
int64_t unknown_ffffffffd437e937();
int64_t unknown_ffffffffd6351524();
int64_t unknown_ffffffffd8da5b9c();
int64_t unknown_ffffffffd91fcba3();
int64_t unknown_ffffffffe841c89b();

// Address range: 0x1a80bb - 0x1a81fc
int64_t function_1a80bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1a80bb
    int64_t v1; // bp-48, 0x1a80bb
    v1 = (int64_t)&v1;
    int64_t v2; // 0x1a80bb
    bool v3; // 0x1a80bb
    return function_c57b8(a1, a2, a3, a4, v2, v2, 0x4000 * (int64_t)v3 | 2048 * (int64_t)v3 | 1024 * (int64_t)v3 | 512 * (int64_t)v3 | 256 * (int64_t)v3 | 128 * (int64_t)v3 | 64 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3 | 2);
}

// Address range: 0x1a81fc - 0x1a8391
int64_t function_1a81fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a81fc
    int64_t v1; // bp-32, 0x1a81fc
    int64_t v2 = (int64_t)&v1; // 0x1a8283
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x1a828b
    int64_t * v4 = (int64_t *)v3; // 0x1a828b
    *v4 = 0x5173ad3e;
    int64_t * v5 = (int64_t *)(v2 - 24); // 0x1a82a1
    int64_t v6 = *(int64_t *)(v2 + 24); // 0x1a82a7
    int64_t * v7 = (int64_t *)(v2 - 16); // 0x1a82a7
    *v7 = v6;
    *v5 = v3;
    int64_t * v8 = (int64_t *)(v2 - 32); // 0x1a82d3
    *(int64_t *)(v2 - 48) = a4;
    *v5 = 0x5551384f;
    *v8 = v6;
    *v4 = *v5;
    *v5 = a4;
    *v8 = 0x7706eba;
    *(int64_t *)(v2 - 40) = v1;
    *(int64_t *)(v2 + 8) = *v8;
    int64_t v9 = *v7; // 0x1a8346
    *v5 = v9;
    *v8 = v9;
    *v7 = *v4;
    *v8 = a5;
    *v5 = v3;
    int64_t v10; // 0x1a81fc
    return function_c57b8(a1, a2, a3, *v5, a5, v10, 0x1a768d);
}

// Address range: 0x1a8391 - 0x1a84ed
int64_t function_1a8391(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a8391
    int64_t v1; // bp-32, 0x1a8391
    int64_t v2 = (int64_t)&v1; // 0x1a8403
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x1a841e
    *v3 = 0x614cbb14;
    int64_t v4 = v2 - 16; // 0x1a8423
    int64_t * v5 = (int64_t *)v4; // 0x1a8433
    int64_t v6 = *(int64_t *)(v2 + 32); // 0x1a843f
    *v3 = v6;
    *v5 = v6;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x1a8446
    *v7 = v6;
    int64_t v8 = *(int64_t *)(v2 + 16); // 0x1a8452
    *v3 = v8;
    *v5 = v4;
    *v7 = v6;
    v1 = *v5;
    *v5 = v4;
    *v3 = v8;
    *(int64_t *)(v2 + 24) = v8;
    *v3 = v1;
    *v5 = v1;
    int64_t v9 = v2 + 8; // 0x1a84c6
    v1 = *(int64_t *)v9;
    *v3 = v9;
    int64_t v10; // 0x1a8391
    return function_c57b8(a1, a2, a3, a4, a5, v10, 0x1a795e);
}

// Address range: 0x1a84ed - 0x1a861c
int64_t function_1a84ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1a84ed
    return function_c57b8(a1, a2, a3, a4, a5, a6, a7);
}

// Address range: 0x1a861c - 0x1a8743
int64_t function_1a861c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a861c
    int64_t v1; // bp-56, 0x1a861c
    v1 = (int64_t)&v1;
    int64_t v2; // 0x1a861c
    return function_c57b8(a1, a2, a3, 0x1a7db2, a5, v2, a4);
}

// Address range: 0x1a8743 - 0x1a886b
int64_t function_1a8743(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a8743
    int64_t v1; // 0x1a8743
    return function_c57b8(a1, a2, a3, a4, a5, v1, 0x1a6cec);
}

// Address range: 0x1a886b - 0x1a8870
int64_t function_1a886b(void) {
    // 0x1a886b
    int64_t result; // 0x1a886b
    return result;
}

// Address range: 0x1a88dc - 0x1a88de
int64_t function_1a88dc(int64_t a1) {
    // 0x1a88dc
    int64_t result; // 0x1a88dc
    return result;
}

// Address range: 0x1a88ef - 0x1a88fa
int64_t function_1a88ef(int64_t a1, int64_t a2) {
    // 0x1a88ef
    int64_t v1; // 0x1a88ef
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v1 - 0x6c38c5e0); // 0x1a88f1
    *v3 = *v3 + (int32_t)a1;
    return (v2 + 24) % 256 | v2 & -256;
}

// Address range: 0x1a895f - 0x1a8995
int64_t function_1a895f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a895f
    int64_t v1; // 0x1a895f
    int64_t v2 = v1;
    *(char *)-0x6be38e00 = *(char *)-0x6be38e00 ^ -43;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)v1;
    int64_t v3; // 0x1a895f
    *(char *)v3 = *(char *)&v3 ^ (char)v1;
    return __asm_iretd();
}

// Address range: 0x1a89a1 - 0x1a89a2
int64_t function_1a89a1(void) {
    // 0x1a89a1
    int64_t result; // 0x1a89a1
    return result;
}

// Address range: 0x1a89b4 - 0x1a8a0c
int64_t function_1a89b4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x1a89b4
    int64_t v1; // 0x1a89b4
    *(char *)a3 = (char)v1 + (char)(a3 / 256);
    char v2 = (uint64_t)v1 / 256; // 0x1a89c5
    *(char *)-0x3fa85434 = *(char *)-0x3fa85434 + v2;
    int16_t v3 = a5;
    __asm_in(v3);
    *(char *)-0x5bb5e01b = *(char *)-0x5bb5e01b + v2;
    __asm_int3();
    if (a4 != 1) {
        function_1a89a1();
    }
    // 0x1a89e7
    int64_t v4; // 0x1a89b4
    __asm_outsb(v3, *(char *)&v4);
    bool v5; // 0x1a89b4
    int32_t * v6 = (int32_t *)((v5 ? -4 : 4) + a1); // 0x1a89fa
    int32_t v7; // 0x1a89b4
    *v6 = 0x1e87802 * v7 - 1 + *v6;
    return function_6da08bf4(v1);
}

// Address range: 0x1a8af8 - 0x1a8af9
int64_t function_1a8af8(int64_t a1) {
    // 0x1a8af8
    int64_t result; // 0x1a8af8
    return result;
}

// Address range: 0x1a8b70 - 0x1a8b75
int64_t function_1a8b70(void) {
    // 0x1a8b70
    return function_ffffffffa8ed6304();
}

// Address range: 0x1a8b76 - 0x1a8b77
int64_t function_1a8b76(void) {
    // 0x1a8b76
    int64_t result; // 0x1a8b76
    return result;
}

// Address range: 0x1a8b7c - 0x1a8b7e
int64_t function_1a8b7c(void) {
    // 0x1a8b7c
    return function_1a8baf();
}

// Address range: 0x1a8baa - 0x1a8baf
int64_t function_1a8baa(void) {
    // 0x1a8baa
    return unknown_10ea0db0();
}

// Address range: 0x1a8baf - 0x1a8bb2
int64_t function_1a8baf(void) {
    // 0x1a8baf
    int64_t result; // 0x1a8baf
    return result;
}

// Address range: 0x1a8bcf - 0x1a8bf3
int64_t function_1a8bcf(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x1a8bcf
    int64_t result; // 0x1a8bcf
    bool v1; // 0x1a8bcf
    if (!v1) {
        // 0x1a8bf0
        return result;
    }
    int64_t result2; // 0x1a8bcf
    if (v1 || v1) {
        result2 = function_1a8b76();
    }
    int32_t * v2 = (int32_t *)(result2 - 64); // 0x1a8bd3
    *v2 = *v2 + (int32_t)result2;
    char * v3 = (char *)(result - 90); // 0x1a8bd6
    *v3 = *v3 + (char)(a3 / 256);
    return result2;
}

// Address range: 0x1a8c9c - 0x1a8c9d
int64_t function_1a8c9c(void) {
    // 0x1a8c9c
    int64_t result; // 0x1a8c9c
    return result;
}

// Address range: 0x1a8ca1 - 0x1a8ca2
int64_t function_1a8ca1(void) {
    // 0x1a8ca1
    int64_t result; // 0x1a8ca1
    return result;
}

// Address range: 0x1a8cb5 - 0x1a8cb6
int64_t function_1a8cb5(int64_t a1) {
    // 0x1a8cb5
    int64_t result; // 0x1a8cb5
    return result;
}

// Address range: 0x1a8cc7 - 0x1a8d4e
int64_t function_1a8cc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3 = unknown_74cf32cd(); // 0x1a8ccc
    bool v4; // 0x1a8cc7
    if (v4) {
        v3 = function_1a8ca1();
    }
    // 0x1a8d37
    int64_t v5; // 0x1a8cc7
    if (!v4) {
        // 0x1a8d39
        *(char *)0x56c29142 = *(char *)0x56c29142 + (char)(v5 / 256);
        return v3 & -11;
    }
    if (a4 != 0) {
        // 0x1a8d4a
        return v3 | 255;
    }
    char * v6 = (char *)v3; // 0x1a8cda
    *v6 = *v6 + 61;
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v5;
    unknown_142314e5();
    char * v7 = (char *)(unknown_7cb854ef() & -256 | 132); // 0x1a8cf5
    *v7 = *v7 - 124;
    int64_t v8 = __asm_in_133(-47); // 0x1a8d01
    int64_t v9 = __asm_fnstenv(v8); // 0x1a8d06
    *(int224_t *)(v2 - 0x3887ff98 + v1) = (int224_t)v9;
    int32_t v10 = v9; // 0x1a8d0d
    int32_t v11 = v10 - 0x5fec300; // 0x1a8d0d
    *(char *)(v8 - 107) = 0;
    if (v11 >= 0) {
        function_1a8c9c();
    }
    int64_t result = 0; // 0x1a8d18
    if (v11 < 0 != ((v11 ^ v10) & v10 + 0x7a013d00) < 0) {
        int16_t v12 = v1; // 0x1a8d1a
        __asm_outsd(v12, *(int32_t *)&v2);
        *(char *)v8 = __asm_insb(v12);
        result = -v1 % 256;
    }
    // 0x1a8d2d
    return result;
}

// Address range: 0x1a8d4f - 0x1a8d63
int64_t function_1a8d4f(int64_t result) {
    // 0x1a8d4f
    return result;
}

// Address range: 0x1a8dd1 - 0x1a8dd6
int64_t function_1a8dd1(int64_t a1, int64_t a2) {
    // 0x1a8dd1
    int64_t result; // 0x1a8dd1
    return result;
}

// Address range: 0x1a8df6 - 0x1a8dfa
int64_t function_1a8df6(int64_t a1) {
    // 0x1a8df6
    int64_t result; // 0x1a8df6
    return result;
}

// Address range: 0x1a8e06 - 0x1a8e0b
int64_t function_1a8e06(void) {
    // 0x1a8e06
    return function_ffffffffe8e99d8c();
}

// Address range: 0x1a8ea3 - 0x1a8ea7
int64_t function_1a8ea3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1a8ea3
    int64_t result; // 0x1a8ea3
    return result;
}

// Address range: 0x1a8ec9 - 0x1a8ee0
int64_t function_1a8ec9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffff89ebbdd8(); // 0x1a8ed2
    float80_t v2; // 0x1a8ec9
    *(int16_t *)(a4 - 0x53723e00) = (int16_t)v2;
    return v1 + 256 * a4 & 0xff00 | v1 & -0xff01;
}

// Address range: 0x1a8efa - 0x1a8efd
int64_t function_1a8efa(int64_t a1) {
    // 0x1a8efa
    int64_t result; // 0x1a8efa
    return result;
}

// Address range: 0x1a8f0f - 0x1a8f13
int64_t function_1a8f0f(int64_t a1) {
    // 0x1a8f0f
    int64_t result; // 0x1a8f0f
    int32_t * v1 = (int32_t *)(result - 6); // 0x1a8f0f
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1a8f5f - 0x1a8f61
int64_t function_1a8f5f(void) {
    // 0x1a8f5f
    return function_1a8fd4();
}

// Address range: 0x1a8f7f - 0x1a8f82
int64_t function_1a8f7f(void) {
    // 0x1a8f7f
    int64_t result; // 0x1a8f7f
    return result;
}

// Address range: 0x1a8fd4 - 0x1a8fd9
int64_t function_1a8fd4(void) {
    // 0x1a8fd4
    int64_t result; // 0x1a8fd4
    return result;
}

// Address range: 0x36859e - 0x3685a2
int64_t function_36859e(void) {
    // 0x36859e
    int64_t result; // 0x36859e
    bool v1; // 0x36859e
    if (v1) {
        result = function_36853a();
    }
    // 0x3685a2
    return result;
}

// Address range: 0x368610 - 0x368611
int64_t function_368610(void) {
    // 0x368610
    int64_t result; // 0x368610
    return result;
}

// Address range: 0x368643 - 0x368644
int64_t function_368643(void) {
    // 0x368643
    int64_t result; // 0x368643
    return result;
}

// Address range: 0x36864e - 0x368688
int64_t function_36864e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36864e
    bool v1; // 0x36864e
    if (!v1) {
        function_368610();
    }
    unsigned char v2 = (char)a2;
    *(char *)a2 = v2 / 2 | 128 * v2;
    unknown_78c8c565((v1 ? -1 : 1) + a1);
    *(char *)-0x16d2477a = *(char *)-0x16d2477a / 2;
    int64_t v3 = 0x100000000 * unknown_ffffffffb92ce27b() >> 32 | 149; // 0x36867f
    uint64_t v4 = v3 * v3; // 0x36867f
    int64_t v5; // 0x36864e
    int32_t * v6 = (int32_t *)(v5 - 59); // 0x368681
    *v6 = *v6 + (int32_t)(v4 / 0x100000000);
    return v4 & 0xffffffff;
}

// Address range: 0x36868a - 0x368707
int64_t function_36868a(int64_t a1, int64_t a2, int64_t a3, char a4) {
    // 0x36868a
    int64_t v1; // 0x36868a
    int32_t * v2 = (int32_t *)(v1 - 46); // 0x36868a
    int32_t v3 = *v2 + (int32_t)a1; // 0x36868a
    *v2 = v3;
    __asm_wait(a1);
    if (v3 != 0) {
        function_368643();
    }
    // 0x368694
    bool v4; // 0x36868a
    int64_t v5 = v4 ? -1 : 1;
    int64_t v6 = a1;
    int64_t v7 = a2;
    int64_t v8 = 0; // 0x368694
    int64_t v9 = v7; // 0x368694
    int64_t v10 = v6; // 0x368694
    int64_t v11; // 0x36868a
    while (v11 != 0) {
        int64_t v12 = v6 + v5; // 0x368694
        int64_t v13 = v7 + v5; // 0x368694
        int64_t v14 = v11 - 1; // 0x368694
        v11 = v14;
        v8 = v14;
        v9 = v13;
        v10 = v12;
        if (*(char *)v7 == *(char *)v6) {
            // break -> 
            break;
        }
        v6 = v12;
        v7 = v13;
        v8 = 0;
        v9 = v7;
        v10 = v6;
    }
    unknown_ffffffffd8da5b9c();
    uint32_t v15 = (int32_t)v1 - *(int32_t *)(v8 - 0x6881c8fb); // 0x36869b
    int64_t v16 = v15; // 0x36869b
    unknown_3a4596a7();
    unknown_ffffffffc10bb4b0();
    int32_t * v17 = (int32_t *)v8; // 0x3686b8
    *v17 = *v17 + (int32_t)v1;
    *(int32_t *)v10 = *(int32_t *)v9;
    int64_t v18 = v4 ? -4 : 4; // 0x3686ba
    int64_t v19 = v10 + v18; // 0x3686ba
    int64_t v20 = v9 + v18; // 0x3686ba
    char * v21 = (char *)(v16 + 0x20b3000); // 0x3686bb
    *v21 = *v21 + (char)v15;
    char * v22 = (char *)(v1 + 0x4001e800); // 0x3686c2
    *v22 = *v22 + (char)(v8 / 256);
    char v23 = v1; // 0x3686c8
    *(char *)0x60372076 = *(char *)0x60372076 + v23;
    unsigned char v24 = *(char *)v20; // 0x3686d3
    unknown_ffffffff9c3e96dc(v19, v20);
    int64_t v25 = __asm_wait(v19); // 0x3686dd
    int64_t v26 = v24 > -1 - (char)((v16 + 0x33e8) / 256) ? 0x810a43f8 : 0x810a43f9; // 0x3686df
    int64_t v27 = unknown_ffffffff9045c2eb(); // 0x3686e5
    char v28 = *(char *)(v19 - 0x41e8d96f); // 0x3686ea
    char * v29 = (char *)(v8 & -256 | 42); // 0x3686fe
    *v29 = *v29 | (char)v27;
    int32_t * v30 = (int32_t *)((v25 + v26 + (v1 & 0xffffff00 | (int64_t)(v28 + v23)) & 0xffffffff) + 8 * v20); // 0x368702
    *v30 = *v30 + (int32_t)v20;
    return function_36872d();
}

// Address range: 0x368707 - 0x368718
int64_t function_368707(int64_t a1, int64_t a2) {
    // 0x368707
    int64_t v1; // 0x368707
    int64_t v2 = v1 | 252; // 0x368707
    int64_t v3; // 0x368707
    int64_t v4 = (int64_t)&v3; // bp-8, 0x368709
    __asm_out(80, (int32_t)v2);
    *(int32_t *)a2 = (int32_t)(int64_t)&v4 + (int32_t)v1;
    return v2 + 0x17842faa & 0xffffffaf;
}

// Address range: 0x368723 - 0x368724
int64_t function_368723(void) {
    // 0x368723
    int64_t result; // 0x368723
    return result;
}

// Address range: 0x36872d - 0x36872f
int64_t function_36872d(void) {
    // 0x36872d
    int64_t result; // 0x36872d
    return result;
}

// Address range: 0x368750 - 0x368754
int64_t function_368750(int64_t a1, int64_t a2) {
    // 0x368750
    int64_t result; // 0x368750
    return result;
}

// Address range: 0x36876a - 0x36877c
int64_t function_36876a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36876a
    int64_t v1; // 0x36876a
    uint64_t v2 = v1 + 0x1c01e892; // 0x36876a
    int32_t * v3 = (int32_t *)(a4 + 0x2451e200); // 0x36876f
    uint32_t v4 = *v3; // 0x36876f
    int32_t v5 = (int32_t)v1 > 0xe3fe176d; // 0x36876f
    uint32_t v6 = v5 + (int32_t)a3; // 0x36876f
    int32_t v7 = v4 - v6; // 0x36876f
    bool v8 = (int32_t)v1 > 0xe3fe176d ? v6 != -1 | v4 < v7 - v5 : v4 < v6; // 0x36876f
    *v3 = v7;
    char * v9 = (char *)((v2 & 0xffffffff) - 58); // 0x368775
    *v9 = *v9 + (char)v1 + (char)v8;
    return v2 & 0xffffff00 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x36879c - 0x36879d
int64_t function_36879c(void) {
    // 0x36879c
    int64_t result; // 0x36879c
    return result;
}

// Address range: 0x3687a0 - 0x3687a4
int64_t function_3687a0(void) {
    // 0x3687a0
    return function_36879c();
}

// Address range: 0x3687c1 - 0x3687c4
int64_t function_3687c1(int64_t a1) {
    // 0x3687c1
    int64_t result; // 0x3687c1
    return result;
}

// Address range: 0x368822 - 0x36882d
int64_t function_368822(void) {
    // 0x368822
    int64_t v1; // 0x368822
    int32_t * v2 = (int32_t *)(v1 - 0x9043fa1); // 0x368822
    *v2 = *v2 + (int32_t)v1;
    return function_5d5bb54();
}

// Address range: 0x36882d - 0x368834
int64_t function_36882d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x36882d
    int64_t v1; // 0x36882d
    __asm_out_134((int16_t)a3, (char)v1);
    int32_t * v2 = (int32_t *)(v1 + 4 * a3); // 0x36882e
    *v2 = *v2 & (int32_t)v1;
    __asm_sti();
    return function_368887(a1, a2, a3, v1);
}

// Address range: 0x368836 - 0x368837
int64_t function_368836(void) {
    // 0x368836
    int64_t result; // 0x368836
    return result;
}

// Address range: 0x368840 - 0x368841
int64_t function_368840(void) {
    // 0x368840
    int64_t result; // 0x368840
    return result;
}

// Address range: 0x36884d - 0x368857
int64_t function_36884d(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a2 - 67); // 0x368854
    int64_t result; // 0x36884d
    *v1 = *v1 | (char)result;
    return result;
}

// Address range: 0x368859 - 0x36885a
int64_t function_368859(void) {
    // 0x368859
    int64_t result; // 0x368859
    return result;
}

// Address range: 0x36885c - 0x368877
int64_t function_36885c(int64_t a1) {
    // 0x36885c
    int64_t v1; // 0x36885c
    uint64_t v2 = (v1 & 0xffffff00 | (int64_t)*(char *)0x6c00013d033ee1e8) ^ 0xd0830c00; // 0x368863
    char v3 = *(char *)(v2 - 11); // 0x36886c
    bool v4; // 0x36885c
    char * v5 = (char *)((v4 ? -1 : 1) + a1); // 0x368872
    *v5 = *v5 / 2;
    return 256 * (int64_t)(v3 | (char)(v2 / 256)) | v2 & 0xffff00ff;
}

// Address range: 0x368887 - 0x368891
int64_t function_368887(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x368887
    int64_t result; // 0x368887
    return result;
}

// Address range: 0x368892 - 0x3688a6
int64_t function_368892(void) {
    int64_t result = unknown_3537c59f(); // 0x36889f
    bool v1; // 0x368892
    if (true == !v1) {
        result = function_368836();
    }
    // 0x3688a1
    return result;
}

// Address range: 0x3688a8 - 0x3688ab
int64_t function_3688a8(int64_t a1) {
    // 0x3688a8
    int64_t result; // 0x3688a8
    // 0x3688aa
    return result;
}

// Address range: 0x3688b7 - 0x3688ba
int64_t function_3688b7(void) {
    // 0x3688b7
    return function_368859();
}

// Address range: 0x3689a7 - 0x3689ae
int64_t function_3689a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 1); // 0x3689a7
    int64_t v2; // 0x3689a7
    bool v3; // 0x3689a7
    *v1 = *v1 + (int32_t)v2 + (int32_t)v3;
    return a3 & 0xffffffff;
}

// Address range: 0x3689d3 - 0x3689d4
int64_t function_3689d3(int64_t a1) {
    // 0x3689d3
    int64_t result; // 0x3689d3
    return result;
}

// Address range: 0x3689dd - 0x3689f3
int64_t function_3689dd(int64_t a1, int64_t a2) {
    // 0x3689dd
    int64_t v1; // 0x3689dd
    bool v2; // 0x3689dd
    return v1 + a2 + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x368a24 - 0x368a27
int64_t function_368a24(void) {
    // 0x368a24
    int64_t result; // 0x368a24
    return result;
}

// Address range: 0x368a35 - 0x368a3a
int64_t function_368a35(void) {
    // 0x368a35
    return function_3ee28a9();
}

// Address range: 0x368b5e - 0x368b5f
int64_t function_368b5e(int64_t a1) {
    // 0x368b5e
    int64_t result; // 0x368b5e
    return result;
}

// Address range: 0x368b76 - 0x368b7b
int64_t function_368b76(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x368b76
    int64_t result; // 0x368b76
    return result;
}

// Address range: 0x368cff - 0x368d02
int64_t function_368cff(void) {
    // 0x368cff
    int64_t result; // 0x368cff
    return result;
}

// Address range: 0x368d95 - 0x368db6
int64_t function_368d95(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffe841c89b(); // 0x368d95
    int32_t * v2 = (int32_t *)(a1 - 40); // 0x368d9a
    int64_t v3; // 0x368d95
    *v2 = *v2 + (int32_t)v3;
    char v4 = v1; // 0x368d9f
    char * v5 = (char *)a4; // 0x368d9f
    *v5 = v4;
    char * v6 = (char *)v1; // 0x368da1
    *v6 = *v6 & v4;
    int64_t v7 = v1 + 0x1c013dd5; // 0x368da3
    float80_t v8; // 0x368d95
    *(int32_t *)(v3 - 0x1fff970a) = (int32_t)v8;
    *v5 = -73;
    return (int64_t)(*(int32_t *)(v7 & 0xffffffff) + (int32_t)v7);
}

// Address range: 0x368e02 - 0x368e03
int64_t function_368e02(int64_t a1) {
    // 0x368e02
    int64_t result; // 0x368e02
    return result;
}

// Address range: 0x368e61 - 0x368e66
int64_t function_368e61(void) {
    // 0x368e61
    return function_21e9078();
}

// Address range: 0x368e7b - 0x368e7e
int64_t function_368e7b(int64_t a1) {
    // 0x368e7b
    int64_t result; // 0x368e7b
    return result;
}

// Address range: 0x368ed5 - 0x368ed6
int64_t function_368ed5(int64_t a1) {
    // 0x368ed5
    int64_t result; // 0x368ed5
    return result;
}

// Address range: 0x368f3b - 0x368f3d
int64_t function_368f3b(void) {
    // 0x368f3b
    return function_368fa5();
}

// Address range: 0x368f9b - 0x368fa0
int64_t function_368f9b(void) {
    // 0x368f9b
    return function_13cec08d();
}

// Address range: 0x368fa5 - 0x368fb0
int64_t function_368fa5(void) {
    char v1 = *(char *)0x77f88eac; // 0x368fa5
    int64_t result; // 0x368fa5
    *(char *)0x77f88eac = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x368fc1 - 0x368fc4
int64_t function_368fc1(int64_t a1) {
    // 0x368fc1
    int64_t result; // 0x368fc1
    return result;
}

// Address range: 0x36900e - 0x3690e7
int64_t function_36900e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x36900e
    __asm_outsd((int16_t)a3, (int32_t)a2);
    int64_t v1; // 0x36900e
    *(int32_t *)-0x6ff10a4af9fe1726 = (int32_t)v1;
    int32_t v2 = *(int32_t *)(v1 - 36); // 0x369018
    bool v3; // 0x36900e
    int64_t v4 = (int32_t)v3 + (int32_t)v1 - v2; // 0x369018
    *(char *)a1 = (char)v1;
    int64_t v5 = v3 ? -1 : 1; // 0x36901b
    int64_t v6 = v5 + a1; // 0x36901b
    int64_t v7 = v4 - 8; // 0x36901c
    *(int64_t *)v7 = -128;
    int64_t v8 = unknown_ffffffffb4c41224(v6); // 0x36901e
    *(char *)v6 = (char)v8;
    int64_t v9 = v6 + v5; // 0x369023
    char * v10 = (char *)(v8 + a3); // 0x369024
    *v10 = *v10 | (char)a4;
    unknown_ffffffffc132db2d(v9);
    *(int32_t *)0x150bae40 = *(int32_t *)0x150bae40 + (int32_t)v7;
    int64_t result = __asm_wait(v9 & 0xffffffff & v7); // 0x369039
    *(char *)-0x16faed0a = *(char *)-0x16faed0a - (char)result;
    *(int64_t *)(v4 - 16) = a2;
    return result;
}

// Address range: 0x369152 - 0x3691d2
int64_t function_369152(int64_t a1, int64_t a2, int64_t a3, int64_t result) {
    // 0x369152
    int64_t v1; // 0x369152
    bool v2; // 0x369152
    if (v2 || v2) {
        // 0x369154
        unknown_332ba260();
        __asm_out_134((int16_t)a3, (char)result);
        char * v3 = (char *)result; // 0x369163
        *v3 = *v3 | (char)(v1 / 256);
        return result;
    }
    int64_t result2 = unknown_3da440d0(); // 0x3691ca
    int32_t * v4 = (int32_t *)(v1 - 114); // 0x3691cf
    *v4 = *v4 + (int32_t)v1;
    return result2;
}

// Address range: 0x3691ed - 0x3691fb
int64_t function_3691ed(int64_t a1) {
    int64_t result = unknown_2f78d9f3(); // 0x3691ed
    __asm_out(83, (int32_t)result);
    return result;
}

// Address range: 0x3691fb - 0x369213
int64_t function_3691fb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3691fb
    int64_t result; // 0x3691fb
    int32_t * v1 = (int32_t *)(result - 17); // 0x3691fb
    *v1 = *v1 + (int32_t)a3;
    *(int32_t *)(a1 + 0x1e8a753 + 4 * a1) = 0x1e8dffe;
    return result;
}

// Address range: 0x36921f - 0x369222
int64_t function_36921f(void) {
    // 0x36921f
    int64_t result; // 0x36921f
    return result;
}

// Address range: 0x36928c - 0x369298
int64_t function_36928c(void) {
    // 0x36928c
    int64_t v1; // 0x36928c
    int32_t * v2 = (int32_t *)(v1 - 0x2016eb68); // 0x36928c
    bool v3; // 0x36928c
    *v2 = (int32_t)v3 - (int32_t)v1 + *v2;
    return 0xfaf901e8;
}

// Address range: 0x369299 - 0x36929c
int64_t function_369299(void) {
    // 0x369299
    int64_t result; // 0x369299
    return result;
}

// Address range: 0x3692b1 - 0x3692b3
int64_t function_3692b1(void) {
    // 0x3692b1
    int64_t result; // 0x3692b1
    return result;
}

// Address range: 0x3692e1 - 0x3692e8
int64_t function_3692e1(int64_t a1) {
    // 0x3692e1
    int64_t result; // 0x3692e1
    int32_t * v1 = (int32_t *)(result + 0x6cc3f0a); // 0x3692e1
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x36933c - 0x36933e
int64_t function_36933c(void) {
    // 0x36933c
    int64_t v1; // 0x36933c
    return function_369389(v1, v1, v1, v1);
}

// Address range: 0x369383 - 0x369389
int64_t function_369383(int64_t a1, int64_t a2, int64_t a3) {
    // 0x369383
    return a3 & 0xffffffff;
}

// Address range: 0x369389 - 0x3693a2
int64_t function_369389(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x369389
    int64_t v1; // 0x369389
    char * v2 = (char *)(v1 + 0xa0a1d60); // 0x369389
    *v2 = *v2 ^ (char)v1;
    int64_t v3 = v1 | a3;
    char v4 = __asm_in((int16_t)v3); // 0x369391
    char * v5 = (char *)(a4 + 0x3d000007); // 0x36939a
    *v5 = *v5 + (char)v3;
    int32_t * v6 = (int32_t *)(v3 & 0xffffffff); // 0x3693a0
    *v6 = *v6 + (int32_t)v1;
    return v1 & -256 | (int64_t)v4;
}

// Address range: 0x36941f - 0x369424
int64_t function_36941f(int64_t a1) {
    // 0x36941f
    int64_t result; // 0x36941f
    return result;
}

// Address range: 0x369473 - 0x369474
int64_t function_369473(void) {
    // 0x369473
    int64_t result; // 0x369473
    return result;
}

// Address range: 0x369477 - 0x369478
int64_t function_369477(void) {
    // 0x369477
    int64_t result; // 0x369477
    return result;
}

// Address range: 0x36949b - 0x369536
int64_t function_36949b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4 - 1; // 0x36949b
    int64_t v2; // 0x36949b
    bool v3; // 0x36949b
    if (v1 != 0 && !v3) {
        int32_t * v4 = (int32_t *)((v2 + 0xe8695468 & 0xffffffff) - 0x7fff7699); // 0x369503
        *v4 = *v4 + (int32_t)a3;
        uint64_t v5 = unknown_ffffffffd6351524() & 0xffffffff ^ 0x8401e86b; // 0x369521
        char v6 = v5; // 0x369526
        *(char *)a1 = v6;
        char * v7 = (char *)(v5 + 0x7823800); // 0x369527
        *v7 = *v7 + v6;
        char * v8 = (char *)(a3 + 1); // 0x36952e
        *v8 = *v8 + (char)(v5 / 256);
        return unknown_ffffffffd437e937((v3 ? -1 : 1) + a1);
    }
    int64_t v9 = unknown_ffffffffd91fcba3(); // 0x36949d
    __asm_int(-118);
    int64_t * v10 = (int64_t *)(a6 - 0x3b1bbdc6); // 0x3694ab
    uint64_t v11 = v1;
    uint64_t v12 = v11 % 64; // 0x3694ab
    uint64_t v13; // 0x3694ab
    if (v12 != 0) {
        v13 = *v10;
        *v10 = v13 >> 64 - v12 | v13 << v12;
    }
    int64_t v14 = v11 + 256 * v9 & 0xff00 | v11 & -0xff01; // 0x3694a7
    int64_t v15; // 0x36949b
    int64_t v16; // 0x36949b
    int64_t v17 = v15 + v16 & 0xffffffff; // 0x3694a9
    __asm_out(41, (int32_t)v9);
    int64_t v18 = unknown_ffffffffabec74bb(); // 0x3694b5
    int32_t * v19 = (int32_t *)v14; // 0x3694ba
    uint32_t v20 = (int32_t)v14;
    *v19 = *v19 | v20;
    int64_t v21 = *(int64_t *)(v16 + 8); // 0x3694bc
    v16 += 16;
    while ((char)v21 >= 0) {
        // 0x3694a7
        v11 = v14;
        v12 = v11 % 64;
        if (v12 != 0) {
            v13 = *v10;
            *v10 = v13 >> 64 - v12 | v13 << v12;
        }
        v14 = v11 + 256 * v18 & 0xff00 | v11 & -0xff01;
        v17 = v17 + v16 & 0xffffffff;
        __asm_out(41, (int32_t)v18);
        v18 = unknown_ffffffffabec74bb();
        v19 = (int32_t *)v14;
        v20 = (int32_t)v14;
        *v19 = *v19 | v20;
        v21 = *(int64_t *)(v16 + 8);
        v16 += 16;
    }
    int64_t v22 = v2 & 0xffffffff; // 0x3694c2
    if (v14 == 0) {
        v22 = function_369477();
    }
    int64_t v23 = (v21 & (int64_t)&g1) == 0 ? 1 : -1; // 0x3694c6
    int64_t v24 = ((v22 | a1) & 0xffffffff) + v23; // 0x3694c6
    uint32_t v25 = ((int32_t)v9 >> 31) + v20; // 0x3694ca
    int32_t * v26 = (int32_t *)v24; // 0x3694cc
    *v26 = *v26 - (v25 < v20 ? 86 : 85);
    char * v27 = (char *)(v17 + 79); // 0x3694d3
    char v28 = *v27 + (char)((int64_t)&g2 >> 8); // 0x3694d3
    *v27 = v28;
    int64_t result = unknown_ffffffffccd1ebdc(v24); // 0x3694d6
    if (v25 == 1 == v28 < 0) {
        // 0x3694f3
        return 2 * result + 0xd1a8ba50 & 0xfffffffe;
    }
    // 0x3694dd
    return result;
}

// Address range: 0x36955c - 0x36955d
int64_t function_36955c(int64_t a1) {
    // 0x36955c
    int64_t result; // 0x36955c
    return result;
}

// Address range: 0x36956f - 0x369577
int64_t function_36956f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x36956f
    int64_t v1; // 0x36956f
    return v1 & -256 | (uint64_t)v1 % 256;
}
