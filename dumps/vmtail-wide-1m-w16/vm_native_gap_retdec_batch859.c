/*
 * Targeted RetDec C for native executable gap queue batch 859.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x32b155-0x32b255 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32b255-0x32b455 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32b455-0x32b655 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32b655-0x32b855 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32b855-0x32ba55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x444067-0x444267 rank=- name=- kind=- bytes=- uncovered=-
 *   0x444267-0x444467 rank=- name=- kind=- bytes=- uncovered=-
 *   0x444467-0x444667 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1b77730e();
int64_t function_32b155(int64_t a1, int64_t a2, int64_t a3);
int64_t function_32b1c6(void);
int64_t function_32b1f3(void);
int64_t function_32b21a(int64_t a1);
int64_t function_32b278(void);
int64_t function_32b2b0(void);
int64_t function_32b2d1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_32b2ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32b304(int64_t a1);
int64_t function_32b328(void);
int64_t function_32b336(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32b33d(int64_t a1);
int64_t function_32b343(void);
int64_t function_32b374(int64_t a1);
int64_t function_32b381(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32b3a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32b3a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32b441(void);
int64_t function_32b444(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32b4aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32b4eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32b500(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_32b55b(int64_t a1);
int64_t function_32b58f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32b5b2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_32b618(int64_t a1);
int64_t function_32b654(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_32b6ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_32b773(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32b77b(void);
int64_t function_32b788(int64_t a1);
int64_t function_32b79b(void);
int64_t function_32b7cc(void);
int64_t function_32b84c(int64_t a1);
int64_t function_32b877(void);
int64_t function_32b8a0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_32b8d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32b8f1(void);
int64_t function_32b8f7(void);
int64_t function_32b933(void);
int64_t function_32b935(void);
int64_t function_32b942(int64_t a1);
int64_t function_32b983(int64_t a1, int32_t a2);
int64_t function_32b9b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32b9d1(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_335125cd();
int64_t function_3b32500d();
int64_t function_444067(void);
int64_t function_4440d1(int64_t a1);
int64_t function_4440e9(void);
int64_t function_444108(void);
int64_t function_444131(int64_t a1);
int64_t function_444138(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_444161(void);
int64_t function_444190(void);
int64_t function_4441b6(int64_t a1);
int64_t function_4441b9(void);
int64_t function_4441bf(void);
int64_t function_4441d8(void);
int64_t function_4441d9(int64_t a1);
int64_t function_4441f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_444207(int64_t a1, int64_t a2);
int64_t function_444221(void);
int64_t function_444227(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_44429a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4442a8(int64_t a1);
int64_t function_4442b4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_4444ab(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_444561(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4445bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_ffffffff9fd08128();
int64_t function_ffffffffa2246ed7();
int64_t function_ffffffffc3584bf8();
int64_t function_ffffffffe90ba93c();
int64_t unknown_105a907f();
int64_t unknown_10c2de81();
int64_t unknown_10ead6e4();
int64_t unknown_1392c7db();
int64_t unknown_1a72a6e();
int64_t unknown_1a892ab6();
int64_t unknown_2341708();
int64_t unknown_2dd0ed96();
int64_t unknown_3133dbe0();
int64_t unknown_323e1f90();
int64_t unknown_3cc5aa05();
int64_t unknown_4404668c();
int64_t unknown_551cba87();
int64_t unknown_6b7c22c3();
int64_t unknown_ffffffff914ea1c0();
int64_t unknown_ffffffff93da8dcf();
int64_t unknown_ffffffff94d0e5fd();
int64_t unknown_ffffffff9fabedfa();
int64_t unknown_ffffffffabb473db();
int64_t unknown_ffffffffb7d0841b();
int64_t unknown_ffffffffca6c3c62();
int64_t unknown_ffffffffcce9f961();
int64_t unknown_ffffffffd3a598de();
int64_t unknown_fffffffff1520bfa();
int64_t unknown_fffffffff1cc3f97();
int64_t unknown_fffffffff679b9b8();

// Address range: 0x32b155 - 0x32b16a
int64_t function_32b155(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_ffffffffcce9f961(); // 0x32b15a
    char * v1 = (char *)(a2 + 0x5dd7d371); // 0x32b162
    *v1 = *v1 + (char)a3;
    return result;
}

// Address range: 0x32b1c6 - 0x32b1cd
int64_t function_32b1c6(void) {
    // 0x32b1c6
    int64_t v1; // 0x32b1c6
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)v1;
    return function_335125cd();
}

// Address range: 0x32b1f3 - 0x32b1fa
int64_t function_32b1f3(void) {
    // 0x32b1f3
    return function_ffffffff9fd08128();
}

// Address range: 0x32b21a - 0x32b21d
int64_t function_32b21a(int64_t a1) {
    // 0x32b21a
    int64_t result; // 0x32b21a
    return result;
}

// Address range: 0x32b278 - 0x32b27a
int64_t function_32b278(void) {
    // 0x32b278
    int64_t v1; // 0x32b278
    return function_32b2ee(v1, v1, v1, v1);
}

// Address range: 0x32b2b0 - 0x32b2b1
int64_t function_32b2b0(void) {
    // 0x32b2b0
    int64_t result; // 0x32b2b0
    return result;
}

// Address range: 0x32b2d1 - 0x32b2e9
int64_t function_32b2d1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x32b2d1
    int64_t v1; // 0x32b2d1
    uint64_t v2 = v1;
    char * v3 = (char *)(v2 + 0x24dff00); // 0x32b2d1
    *v3 = *v3 + (char)v2;
    char * v4 = (char *)(a3 + 1); // 0x32b2d7
    *v4 = *v4 + (char)(v2 / 256);
    unknown_3133dbe0();
    __asm_in(-72);
    __asm_int3();
    return function_ffffffffc3584bf8();
}

// Address range: 0x32b2ee - 0x32b2f3
int64_t function_32b2ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32b2ee
    *(int32_t *)a1 = (int32_t)a4;
    return a4 & 0xffffffff;
}

// Address range: 0x32b304 - 0x32b307
int64_t function_32b304(int64_t a1) {
    // 0x32b304
    int64_t result; // 0x32b304
    return result;
}

// Address range: 0x32b328 - 0x32b329
int64_t function_32b328(void) {
    // 0x32b328
    int64_t result; // 0x32b328
    return result;
}

// Address range: 0x32b336 - 0x32b33b
int64_t function_32b336(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x32b336
    int64_t result; // 0x32b336
    bool v1; // 0x32b336
    if (a4 != 1 == v1) {
        result = function_32b328();
    }
    // 0x32b338
    return result;
}

// Address range: 0x32b33d - 0x32b33e
int64_t function_32b33d(int64_t a1) {
    // 0x32b33d
    int64_t result; // 0x32b33d
    return result;
}

// Address range: 0x32b343 - 0x32b344
int64_t function_32b343(void) {
    // 0x32b343
    int64_t result; // 0x32b343
    return result;
}

// Address range: 0x32b374 - 0x32b377
int64_t function_32b374(int64_t a1) {
    // 0x32b374
    int64_t result; // 0x32b374
    return result;
}

// Address range: 0x32b381 - 0x32b397
int64_t function_32b381(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32b381
    unknown_551cba87();
    bool v1; // 0x32b381
    if (v1 || false) {
        function_32b343();
    }
    // 0x32b389
    *(char *)a1 = (char)a2;
    int64_t v2 = v1 ? -1 : 1; // 0x32b38c
    int64_t v3 = v2 + a1; // 0x32b38c
    int64_t v4 = v2 + a2; // 0x32b38c
    unknown_2dd0ed96(v3, v4);
    return function_32b3a7(v3, v4, a3, a4);
}

// Address range: 0x32b3a5 - 0x32b3a7
int64_t function_32b3a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32b3a5
    int64_t result; // 0x32b3a5
    return result;
}

// Address range: 0x32b3a7 - 0x32b41f
int64_t function_32b3a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3 = a1;
    uint32_t v4 = (int32_t)a4 % 32; // 0x32b3a7
    int64_t v5; // 0x32b3a7
    char v6; // 0x32b3a7
    int64_t v7; // 0x32b3a7
    if (v4 == 0) {
        // 0x32b3a7
        v5 = a3;
        v6 = a3;
    } else {
        uint32_t v8 = (int32_t)v7;
        *(int32_t *)v7 = v8 >> 32 - v4 | v8 << v4;
        v5 = v1;
        v6 = *(char *)&v1;
    }
    unsigned char v9 = v6; // 0x32b3a9
    *(char *)v5 = v9 / 2 | 128 * v9;
    int64_t v10 = unknown_6b7c22c3() & 0xffffffff; // 0x32b3c7
    v1 = v10;
    *(int32_t *)0x1062a0d6 = *(int32_t *)0x1062a0d6 + (int32_t)v3;
    int64_t v11 = unknown_1392c7db(); // 0x32b3d5
    int32_t v12 = v11; // 0x32b3e0
    __asm_out(-24, v12);
    int32_t * v13 = (int32_t *)(4 * v7 - 69 + v10); // 0x32b3e2
    *v13 = *v13 + v12;
    int64_t v14 = v3; // 0x32b3e8
    unsigned char v15 = (char)a4 % 32; // 0x32b3e8
    int64_t v16; // 0x32b3a7
    int32_t v17; // 0x32b3a7
    if (v15 == 0) {
        // ._crit_edge
        v16 = v14;
        v17 = v14;
    } else {
        char * v18 = (char *)(v14 + 0x3d00cf0b); // 0x32b3e8
        unsigned char v19 = *v18; // 0x32b3e8
        *v18 = v19 >> 8 - v15 | v19 << v15;
        v16 = v3;
        v17 = *(int32_t *)&v3;
    }
    uint64_t v20 = (v11 + 58) % 256; // 0x32b3e6
    int64_t v21 = v11 & -256; // 0x32b3e6
    int64_t result = v20 | v21; // 0x32b3e6
    uint32_t v22 = *(int32_t *)&v2; // 0x32b3f0
    bool v23; // 0x32b3a7
    int64_t v24 = v23 ? -4 : 4; // 0x32b3f0
    v3 = v16 + v24;
    char * v25 = (char *)(v2 + v24); // 0x32b3f1
    unsigned char v26 = *v25; // 0x32b3f1
    unsigned char v27 = v26 / 2; // 0x32b3f1
    *v25 = v27;
    int64_t v28 = a4 - 1; // 0x32b3f3
    if (v28 != 0 == v26 < 2) {
        unsigned char v29 = llvm_ctpop_i8(v27); // 0x32b3f1
        uint32_t v30 = *(int32_t *)(v3 + 0x13d003a); // 0x32b416
        *(int64_t *)((int64_t)v30 - 8) = 0x4000 * (int64_t)v23 | 1024 * (int64_t)v23 | 512 * (int64_t)v23 | 256 * (int64_t)v23 | 16 * (int64_t)(v22 % 16 - v17 % 16 > 15) | (int64_t)(v26 % 2 != 0) | 2048 * (int64_t)(v26 < 0) | 64 * (int64_t)(v26 < 2) | 4 * (int64_t)(v29 % 2 == 0) | 2;
        return result;
    }
    // 0x32b3f5
    *(int32_t *)-0x4e2d9d65 = *(int32_t *)-0x4e2d9d65 | (int32_t)v28;
    __asm_out_133((int16_t)v1, (int32_t)result);
    *(char *)0x62384b0d = *(char *)0x62384b0d + (char)v7;
    return v21 | (int64_t)*(char *)(v20 | 0x3eca2600);
}

// Address range: 0x32b441 - 0x32b444
int64_t function_32b441(void) {
    // 0x32b441
    int64_t result; // 0x32b441
    return result;
}

// Address range: 0x32b444 - 0x32b49a
int64_t function_32b444(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32b444
    int64_t v1; // 0x32b444
    *(int32_t *)a4 = (int32_t)(v1 & a3);
    *(char *)-0x27236147 = *(char *)-0x27236147 | (char)v1;
    int64_t v2; // 0x32b444
    char v3 = *(char *)(int64_t)(*(int32_t *)&v2 + (int32_t)a2); // 0x32b45a
    __asm_outsb((int16_t)a3, v3);
    unknown_ffffffffca6c3c62();
    int32_t * v4 = (int32_t *)(2 * a3 - 0x2cf1f34c); // 0x32b468
    int32_t v5 = a1; // 0x32b468
    *v4 = *v4 + v5;
    int64_t v6 = unknown_10c2de81(); // 0x32b47b
    char * v7 = (char *)(v6 - 0x428cf06); // 0x32b480
    *v7 = *v7 | (char)v6;
    unknown_4404668c();
    int64_t v8; // 0x32b444
    *(int32_t *)a3 = *(int32_t *)&v8 - v5;
    __asm_in_134(-34);
    return unknown_fffffffff1cc3f97();
}

// Address range: 0x32b4aa - 0x32b4bc
int64_t function_32b4aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a4 - 0x4e315280); // 0x32b4ac
    return unknown_fffffffff679b9b8((int32_t)a1 - v1) & -256 | 129;
}

// Address range: 0x32b4eb - 0x32b500
int64_t function_32b4eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32b4eb
    int64_t v1; // 0x32b4eb
    __asm_outsb((int16_t)a3 & -256 | 7, (char)v1);
    int64_t v2 = unknown_fffffffff1520bfa(); // 0x32b4f4
    int64_t result = v2 & -256 | (int64_t)(*(char *)v2 ^ (char)v2); // 0x32b4fa
    char * v3 = (char *)result; // 0x32b4fc
    *v3 = *v3 + 60;
    return result;
}

// Address range: 0x32b500 - 0x32b51c
int64_t function_32b500(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x32b500
    unknown_2341708();
    int32_t * v1 = (int32_t *)(a2 - 0x7c89f83d); // 0x32b507
    int64_t v2; // 0x32b500
    *v1 = *v1 + (int32_t)v2;
    char * v3 = (char *)(v2 - 95); // 0x32b50f
    *v3 = *v3 + (char)a4;
    return unknown_ffffffffb7d0841b();
}

// Address range: 0x32b55b - 0x32b55c
int64_t function_32b55b(int64_t a1) {
    // 0x32b55b
    int64_t result; // 0x32b55b
    return result;
}

// Address range: 0x32b58f - 0x32b5a4
int64_t function_32b58f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t result; // 0x32b58f
    *(char *)a2 = (char)(result | a2);
    uint64_t v2 = a4 - 1; // 0x32b591
    if (v2 == 0) {
        // 0x32b593
        return result;
    }
    char v3 = *(char *)&v1; // 0x32b599
    int64_t result2 = result + 0xcb8eb6af & (v2 / 256 % 256 | 0xffffff00); // 0x32b59b
    int32_t * v4 = (int32_t *)((v2 & -256 | (int64_t)(v3 + (char)v2)) + 4 * result2); // 0x32b59d
    *v4 = *v4 + (int32_t)result2;
    return result2;
}

// Address range: 0x32b5b2 - 0x32b5e3
int64_t function_32b5b2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 9); // 0x32b5b3
    *v1 = *v1 & -0x6beaff6f;
    char * v2 = (char *)(unknown_ffffffff914ea1c0() + 95); // 0x32b5bf
    *v2 = *v2 + (char)(a4 / 256);
    __asm_iretd();
    unsigned char v3 = (char)a4; // 0x32b5c4
    *(char *)a4 = v3;
    uint64_t v4 = unknown_ffffffff93da8dcf(); // 0x32b5c9
    unsigned char v5 = (char)(v4 / 256); // 0x32b5ce
    int64_t v6; // 0x32b5b2
    unsigned char v7 = (char)(v6 / 256) + v5; // 0x32b5ce
    uint32_t v8 = (int32_t)a4 % 32; // 0x32b5d1
    char v9; // 0x32b5b2
    bool v10; // 0x32b5b2
    if (v8 == 0) {
        // 0x32b5b2
        v9 = v6;
        v10 = v7 < v5;
    } else {
        int32_t * v11 = (int32_t *)(256 * (int64_t)v7 | v4 & -0xff01); // 0x32b5d1
        uint32_t v12 = *v11; // 0x32b5d1
        uint32_t v13 = v12 >> 32 - v8 | v12 << v8; // 0x32b5d1
        *v11 = v13;
        v9 = *(char *)&v6;
        v10 = v13 % 2 != 0;
    }
    unsigned char v14 = v3 % 32; // 0x32b5d3
    bool v15 = v10; // 0x32b5d3
    if (v14 != 0) {
        unsigned char v16 = v9; // 0x32b5d3
        char v17 = v16 >> v14 | v16 << 8 - v14; // 0x32b5d3
        *(char *)v6 = v17;
        v15 = v17 < 0;
    }
    *(char *)a1 = (char)v4;
    return unknown_ffffffffd3a598de(a1 + 1) - (v15 ? 0x1c720da6 : 0x1c720da5) & 0xffffffff;
}

// Address range: 0x32b618 - 0x32b623
int64_t function_32b618(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 107); // 0x32b618
    *v1 = *v1 + (int32_t)a1;
    int64_t result; // 0x32b618
    return result;
}

// Address range: 0x32b654 - 0x32b6ea
int64_t function_32b654(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 - 104 + 8 * a1); // 0x32b654
    unsigned char v2 = *v1; // 0x32b654
    *v1 = v2 - 2;
    int32_t v3 = a1; // 0x32b65a
    int64_t v4; // 0x32b654
    *(int32_t *)v4 = *(int32_t *)&v4 + v3 + (int32_t)(v2 < 2);
    int64_t v5; // 0x32b654
    *(char *)-0x13ab319d = *(char *)-0x13ab319d + (char)(v5 / 256);
    unknown_1a72a6e();
    int32_t * v6 = (int32_t *)(v5 - 0x281cfe58); // 0x32b66f
    *v6 = *v6 - (((char)v4 ^ -2) < 194 ? 0x13d01e9 : 0x13d01e8);
    unknown_105a907f();
    char v7 = *(char *)(v5 - 0x52724600); // 0x32b67e
    int64_t v8 = 256 * (int64_t)((char)(a3 / 256) - v7) | a3 & -0xff01; // 0x32b67e
    int64_t v9 = a2 & -256; // 0x32b684
    int64_t v10 = v9 | 232; // 0x32b684
    int32_t * v11 = (int32_t *)(v5 + 0x80edc87); // 0x32b687
    *v11 = *v11 + (int32_t)v10;
    int32_t * v12 = (int32_t *)v8; // 0x32b692
    *v12 = *v12 + v3;
    __asm_in_135((int16_t)v8);
    int32_t * v13 = (int32_t *)(v8 + 0x3a883395); // 0x32b69b
    *v13 = *v13 + (int32_t)v5;
    int32_t * v14 = (int32_t *)(a1 + 3); // 0x32b6a9
    *v14 = *v14 + -1 - (int32_t)a4;
    int64_t v15 = unknown_1a892ab6(); // 0x32b6b0
    unsigned char v16 = *(char *)-0x7c7c69b0fe179800; // 0x32b6b8
    int32_t * v17 = (int32_t *)(v5 + 0x13c3fc40); // 0x32b6c7
    *v17 = *v17 + (int32_t)(v15 & 0xffffff00 | (int64_t)v16);
    int32_t * v18 = (int32_t *)(a1 + 0x18e0434f); // 0x32b6d8
    *v18 = *v18 - 1;
    unknown_10ead6e4();
    return function_ffffffffe90ba93c((int64_t)*(int32_t *)v10, v9 | 236);
}

// Address range: 0x32b6ea - 0x32b710
int64_t function_32b6ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x32b6ea
    int64_t v1; // 0x32b6ea
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a4;
    unknown_ffffffff9fabedfa();
    int64_t result = unknown_3cc5aa05(); // 0x32b6fe
    int64_t v3 = a4 + 16; // 0x32b70a
    char * v4 = (char *)(v3 & 0xffffffff); // 0x32b70d
    *v4 = *v4 | (char)v3;
    return result;
}

// Address range: 0x32b773 - 0x32b777
int64_t function_32b773(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x32b773
    int64_t result; // 0x32b773
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(result + 63); // 0x32b773
        uint32_t v3 = *v2; // 0x32b773
        *v2 = v3 >> v1 | v3 << 32 - v1;
    }
    return result;
}

// Address range: 0x32b77b - 0x32b77c
int64_t function_32b77b(void) {
    // 0x32b77b
    int64_t result; // 0x32b77b
    return result;
}

// Address range: 0x32b788 - 0x32b792
int64_t function_32b788(int64_t a1) {
    int64_t result = unknown_323e1f90(a1); // 0x32b78f
    int64_t v1; // 0x32b788
    if ((char)((uint64_t)v1 / 256) != 0) {
        result = function_32b77b();
    }
    // 0x32b791
    return result;
}

// Address range: 0x32b79b - 0x32b79e
int64_t function_32b79b(void) {
    // 0x32b79b
    int64_t result; // 0x32b79b
    return result;
}

// Address range: 0x32b7cc - 0x32b7db
int64_t function_32b7cc(void) {
    // 0x32b7cc
    return unknown_ffffffffabb473db();
}

// Address range: 0x32b84c - 0x32b84d
int64_t function_32b84c(int64_t a1) {
    // 0x32b84c
    int64_t result; // 0x32b84c
    return result;
}

// Address range: 0x32b877 - 0x32b87d
int64_t function_32b877(void) {
    // 0x32b877
    int64_t result; // 0x32b877
    char * v1 = (char *)(result + 4 * result); // 0x32b877
    *v1 = *v1 + (char)(result / 256);
    return result;
}

// Address range: 0x32b8a0 - 0x32b8b3
int64_t function_32b8a0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t result = (int64_t)*(int32_t *)-0x1713f6b66bfec300; // 0x32b8a0
    char v1 = *(char *)(a2 - 20); // 0x32b8a9
    int32_t * v2 = (int32_t *)result; // 0x32b8ac
    int64_t v3; // 0x32b8a0
    *v2 = *v2 | (int32_t)v3;
    int32_t * v4 = (int32_t *)(result - 57); // 0x32b8ae
    int32_t v5 = *v4; // 0x32b8ae
    *v4 = v5 | (int32_t)(256 * (int64_t)(v1 | (char)(a3 / 256)) | a3 & 0xffff00ff);
    return result;
}

// Address range: 0x32b8d8 - 0x32b8df
int64_t function_32b8d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x32b8d8
    int64_t result; // 0x32b8d8
    *(int32_t *)a1 = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x32b8f1 - 0x32b8f2
int64_t function_32b8f1(void) {
    // 0x32b8f1
    int64_t result; // 0x32b8f1
    return result;
}

// Address range: 0x32b8f7 - 0x32b8f9
int64_t function_32b8f7(void) {
    // 0x32b8f7
    return function_32b935();
}

// Address range: 0x32b933 - 0x32b935
int64_t function_32b933(void) {
    // 0x32b933
    int64_t result; // 0x32b933
    return result;
}

// Address range: 0x32b935 - 0x32b936
int64_t function_32b935(void) {
    // 0x32b935
    int64_t result; // 0x32b935
    return result;
}

// Address range: 0x32b942 - 0x32b955
int64_t function_32b942(int64_t a1) {
    // 0x32b942
    return function_3b32500d();
}

// Address range: 0x32b983 - 0x32b9ac
int64_t function_32b983(int64_t a1, int32_t a2) {
    // 0x32b983
    int64_t v1; // 0x32b983
    uint64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    int64_t v3 = v2 & -256 | (int64_t)*(char *)-0x2cf0abe18ab5bede; // 0x32b991
    char * v4 = (char *)(v1 + 0xd00d344); // 0x32b99a
    *v4 = *v4 + (char)(v2 / 256);
    int32_t * v5 = (int32_t *)v3; // 0x32b9a5
    *v5 = *v5 + (int32_t)v3;
    bool v6; // 0x32b983
    return function_ffffffffa2246ed7((int32_t)a1 + a2 + (int32_t)v6);
}

// Address range: 0x32b9b2 - 0x32b9be
int64_t function_32b9b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32b9b2
    int64_t result; // 0x32b9b2
    char * v1 = (char *)(a1 - 53 + result); // 0x32b9b2
    bool v2; // 0x32b9b2
    *v1 = *v1 + (char)a3 + (char)v2;
    int64_t v3; // 0x32b9b2
    *(char *)a4 = *(char *)&v3 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x32b9d1 - 0x32ba53
int64_t function_32b9d1(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x32b9d1
    int64_t v1; // 0x32b9d1
    __writefsbyte(0x5eb9a8d9, __readfsbyte(0x5eb9a8d9) + (char)((uint64_t)v1 / 256));
    bool v2; // 0x32b9d1
    int64_t v3 = v2 ? -4 : 4;
    int64_t v4 = a2; // 0x32b9d8
    uint32_t v5 = (int32_t)(a3 / 256 | a4) % 32;
    char * v6 = (char *)a1; // 0x32b9da
    unsigned char v7 = *v6; // 0x32b9da
    *v6 = v7 / 128 | 2 * v7;
    int64_t v8 = a3 & -256 | 156; // 0x32b9e2
    char * v9 = (char *)(v8 - 81); // 0x32b9ee
    *v9 = *v9 - 100;
    int32_t * v10; // 0x32b9f1
    uint32_t v11; // 0x32b9f1
    if (v5 != 0) {
        v10 = (int32_t *)v8;
        v11 = *v10;
        *v10 = v11 >> v5 | v11 << 32 - v5;
    }
    int64_t v12 = unknown_ffffffff94d0e5fd(); // 0x32b9f3
    char v13 = __asm_in_134(-13); // 0x32b9fa
    int64_t v14 = v12 & -256 | (int64_t)v13; // 0x32b9fa
    int64_t v15 = v8 & -0xff64 | (int64_t)&g1; // 0x32b9fc
    char * v16 = (char *)v14; // 0x32ba31
    unsigned char v17 = *v16; // 0x32ba31
    unsigned char v18 = v17 + v13; // 0x32ba31
    *v16 = v18;
    char * v19 = (char *)(2 * v14); // 0x32ba34
    *v19 = *v19 - (char)(v18 < v17);
    unsigned char v20 = (char)v15; // 0x32ba38
    unsigned char v21 = *v16 + v20; // 0x32ba38
    int64_t v22 = v15 & -256 | (int64_t)v21; // 0x32ba38
    __asm_out(58, (int32_t)v14);
    int64_t result = v14 & -256 | (int64_t)(v13 - (v21 < v20 ? -104 : -105)); // 0x32ba3e
    int32_t * v23 = (int32_t *)v22; // 0x32ba43
    *v23 = *v23 + 0x7ea908;
    __readfsdword(v4);
    v4 += v3;
    while ((int32_t)result == 0x2ed10001) {
        // 0x32b9da
        v5 = 19;
        v6 = (char *)(*(int64_t *)0x7ea900 + v3);
        v7 = *v6;
        *v6 = v7 / 128 | 2 * v7;
        v8 = v22 & -256 | 156;
        v9 = (char *)(v8 - 81);
        *v9 = *v9 - 100;
        if (v5 != 0) {
            v10 = (int32_t *)v8;
            v11 = *v10;
            *v10 = v11 >> v5 | v11 << 32 - v5;
        }
        // 0x32ba31
        v12 = unknown_ffffffff94d0e5fd();
        v13 = __asm_in_134(-13);
        v14 = v12 & -256 | (int64_t)v13;
        v15 = v8 & -0xff64 | (int64_t)&g1;
        v16 = (char *)v14;
        v17 = *v16;
        v18 = v17 + v13;
        *v16 = v18;
        v19 = (char *)(2 * v14);
        *v19 = *v19 - (char)(v18 < v17);
        v20 = (char)v15;
        v21 = *v16 + v20;
        v22 = v15 & -256 | (int64_t)v21;
        __asm_out(58, (int32_t)v14);
        result = v14 & -256 | (int64_t)(v13 - (v21 < v20 ? -104 : -105));
        v23 = (int32_t *)v22;
        *v23 = *v23 + 0x7ea908;
        __readfsdword(v4);
        v4 += v3;
    }
    // 0x32ba53
    return result;
}

// Address range: 0x444067 - 0x444068
int64_t function_444067(void) {
    // 0x444067
    int64_t result; // 0x444067
    return result;
}

// Address range: 0x4440d1 - 0x4440d7
int64_t function_4440d1(int64_t a1) {
    // 0x4440d1
    return __asm_in_136((char)a1);
}

// Address range: 0x4440e9 - 0x4440ea
int64_t function_4440e9(void) {
    // 0x4440e9
    int64_t result; // 0x4440e9
    return result;
}

// Address range: 0x444108 - 0x444109
int64_t function_444108(void) {
    // 0x444108
    int64_t result; // 0x444108
    return result;
}

// Address range: 0x444131 - 0x444132
int64_t function_444131(int64_t a1) {
    // 0x444131
    int64_t result; // 0x444131
    return result;
}

// Address range: 0x444138 - 0x444148
int64_t function_444138(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x444138
    int64_t v1; // 0x444138
    int64_t v2 = v1;
    int64_t v3 = v1;
    *(char *)v2 = (char)v2 + 1;
    int64_t result = 0; // 0x444143
    bool v4; // 0x444138
    if (((v3 - (v4 ? 215 : 214)) % 256 || v3 & 0xffffff00) != 0x929d390d) {
        result = function_444108();
    }
    // 0x444145
    return result;
}

// Address range: 0x444161 - 0x444162
int64_t function_444161(void) {
    // 0x444161
    int64_t result; // 0x444161
    return result;
}

// Address range: 0x444190 - 0x444192
int64_t function_444190(void) {
    // 0x444190
    int64_t v1; // 0x444190
    return function_444207(v1, v1);
}

// Address range: 0x4441b6 - 0x4441b9
int64_t function_4441b6(int64_t a1) {
    // 0x4441b6
    int64_t result; // 0x4441b6
    return result;
}

// Address range: 0x4441b9 - 0x4441bc
int64_t function_4441b9(void) {
    // 0x4441b9
    int64_t result; // 0x4441b9
    return result;
}

// Address range: 0x4441bf - 0x4441c0
int64_t function_4441bf(void) {
    // 0x4441bf
    int64_t result; // 0x4441bf
    return result;
}

// Address range: 0x4441d8 - 0x4441d9
int64_t function_4441d8(void) {
    // 0x4441d8
    int64_t result; // 0x4441d8
    return result;
}

// Address range: 0x4441d9 - 0x4441dd
int64_t function_4441d9(int64_t a1) {
    // 0x4441d9
    int64_t result; // 0x4441d9
    return result;
}

// Address range: 0x4441f3 - 0x444202
int64_t function_4441f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4441f3
    return function_4441d8();
}

// Address range: 0x444207 - 0x44420b
int64_t function_444207(int64_t a1, int64_t a2) {
    // 0x444207
    int64_t result; // 0x444207
    int32_t * v1 = (int32_t *)(result - 82); // 0x444208
    int32_t v2 = *v1; // 0x444208
    *v1 = 2 * v2 | (int32_t)(v2 < 0);
    return result;
}

// Address range: 0x444221 - 0x444222
int64_t function_444221(void) {
    // 0x444221
    int64_t result; // 0x444221
    return result;
}

// Address range: 0x444227 - 0x44423e
int64_t function_444227(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x444227
    int64_t v1; // 0x444227
    int32_t * v2 = (int32_t *)(v1 + 0x74580816); // 0x444227
    *v2 = *v2 + (int32_t)a3;
    char * v3 = (char *)(a2 + 50); // 0x444239
    *v3 = *v3 - (char)(a3 / 256);
    return function_444221();
}

// Address range: 0x44429a - 0x4442a7
int64_t function_44429a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 23); // 0x44429a
    *v1 = *v1 ^ (int32_t)a3;
    int64_t v2; // 0x44429a
    *(int32_t *)a1 = *(int32_t *)&v2;
    int64_t result; // 0x44429a
    return result;
}

// Address range: 0x4442a8 - 0x4442b4
int64_t function_4442a8(int64_t a1) {
    // 0x4442a8
    int64_t result; // 0x4442a8
    return result;
}

// Address range: 0x4442b4 - 0x444494
int64_t function_4442b4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t result; // 0x4442b4
    *(char *)(result + 34) = (char)(a4 / 256);
    int64_t v2; // 0x4442b4
    int32_t v3 = *(int32_t *)&v2; // 0x4442bd
    bool v4; // 0x4442b4
    v2 = (v4 ? -4 : 4) + a2;
    int64_t v5; // 0x4442b4
    if (v3 != *(int32_t *)&v5) {
        // 0x444363
        return result;
    }
    uint64_t v6 = result + 65; // 0x444314
    int64_t result2 = v6 % 256 | result & -256; // 0x444314
    __asm_out_137(18, (char)v6);
    int64_t v7 = (int64_t)&v1; // bp-8, 0x44431a
    int32_t * v8 = (int32_t *)(result2 + 0x35fe30fb); // 0x44431c
    int32_t v9 = (int64_t)&v7; // 0x44431c
    *v8 = *v8 + v9;
    int64_t v10 = v4 ? -1 : 1; // 0x444322
    v5 = v10 + (result2 & 0xffffffff);
    v2 += v10;
    int32_t * v11 = (int32_t *)(result - 0x2b923a66); // 0x444323
    *v11 = *v11 ^ v9;
    int32_t v12 = *(int32_t *)0x6e03be3; // 0x44436e
    *(int32_t *)0x6e03be3 = v12 + ((int32_t)result & -0xff01 | (int32_t)&g2);
    float80_t v13; // 0x4442b4
    *(int16_t *)(a3 - 14) = (int16_t)v13;
    return result2;
}

// Address range: 0x4444ab - 0x44454d
int64_t function_4444ab(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4444ab
    int64_t result; // 0x4444ab
    bool v1; // 0x4444ab
    if (!v1) {
        char * v2 = (char *)(a2 - 123); // 0x4444b2
        *v2 = *v2 & (char)a4;
        return result;
    }
    int64_t result2 = result & -256 | a2 % 256; // 0x4444bd
    __asm_outsd((int16_t)a3, *(int32_t *)((v1 ? -1 : 1) + a2));
    if ((char)(result & a3) >= 0) {
        // 0x444531
        return result2;
    }
    // 0x4444c3
    __asm_out_137(32, (char)a2);
    return result2;
}

// Address range: 0x444561 - 0x4445a7
int64_t function_444561(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_hlt(); // 0x4445a0
    return (v1 + 105) % 256 | v1 & -256;
}

// Address range: 0x4445bd - 0x44464e
int64_t function_4445bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4445bd
    int64_t v1; // 0x4445bd
    uint64_t v2 = v1;
    char v3 = v2 / 256; // 0x4445c7
    char v4 = *(char *)(a4 + 101); // 0x4445c7
    unsigned char v5 = v3 - v4; // 0x4445c7
    if (((v5 ^ v3) & (v4 ^ v3)) >= 0) {
        // 0x4445fa
        bool v6; // 0x4445bd
        int64_t v7 = v6 ? -1 : 1; // 0x4445c6
        return function_1b77730e(v7 + a1, v7 + a2);
    }
    unsigned char v8 = *(char *)0x51a05dc2a2e11ee1; // 0x4445bd
    return 256 * (int64_t)v5 | v2 & -0x10000 | (int64_t)v8;
}
