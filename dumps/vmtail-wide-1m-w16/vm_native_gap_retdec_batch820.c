/*
 * Targeted RetDec C for native executable gap queue batch 820.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3889a8-0x388ba8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x388ba8-0x388da8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x388da8-0x388fa8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x414942-0x414b42 rank=- name=- kind=- bytes=- uncovered=-
 *   0x414b42-0x414d42 rank=- name=- kind=- bytes=- uncovered=-
 *   0x414d42-0x414f42 rank=- name=- kind=- bytes=- uncovered=-
 *   0x414f42-0x415142 rank=- name=- kind=- bytes=- uncovered=-
 *   0x415142-0x415342 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_3889a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_388a7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_388c1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_388d6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_388ee3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_388eff(void);
int64_t function_388f00(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_388f05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_388f0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_388f2d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_414942(int64_t a1);
int64_t function_414966(void);
int64_t function_4149e5(void);
int64_t function_4149f5(void);
int64_t function_414a06(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_414acf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_414aee(void);
int64_t function_414af7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_414b18(void);
int64_t function_414b2e(int64_t a1);
int64_t function_414b45(void);
int64_t function_414b65(void);
int64_t function_414b6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_414bcc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_414bed(void);
int64_t function_414c94(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_414cb7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_414ccf(int64_t a1);
int64_t function_414cf0(void);
int64_t function_414d12(void);
int64_t function_414d3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_414e50(void);
int64_t function_414e6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_414e77(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_414ec1(void);
int64_t function_414f27(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_414f49(void);
int64_t function_414f84(void);
int64_t function_414fc3(int64_t a1);
int64_t function_41507d(int64_t a1);
int64_t function_415098(void);
int64_t function_415108(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41511b(void);
int64_t function_41514a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_415165(void);
int64_t function_4151d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41526d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_415287(int64_t a1, int64_t a2);
int64_t function_415311(void);
int64_t function_58b65030();
int64_t function_5b8b504f();
int64_t function_96579e4();
int64_t function_cc59c();
int64_t function_ffffffffc1a7a599();
int64_t function_ffffffffec1a5896();

// Address range: 0x3889a8 - 0x388a7e
int64_t function_3889a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3889a8
    int64_t v1; // 0x3889a8
    int64_t v2; // 0x3889a8
    int64_t v3; // bp-8, 0x3889a8
    int64_t v4; // 0x3889a8
    if ((v4 & 0xff00) != 0) {
        char * v5 = (char *)(v4 - 117); // 0x3889ac
        *v5 = *v5 + (char)a4;
        int64_t v6 = (int64_t)&v2; // 0x3889c1
        v3 = v6;
        v1 = v6;
    }
    // 0x3889d0
    v2 = v1;
    int64_t v7 = (int64_t)&v3; // 0x3889ea
    v3 = a4;
    *(int64_t *)(v7 - 16) = a6;
    int64_t v8 = v3;
    v3 = v7 + 16;
    return function_cc59c(a1, a2, a3, v8);
}

// Address range: 0x388a7e - 0x388c1c
int64_t function_388a7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x388a7e
    int64_t v1; // bp-24, 0x388a7e
    int64_t v2 = (int64_t)&v1; // 0x388ada
    int64_t * v3 = (int64_t *)(v2 - 16); // 0x388aff
    int64_t * v4 = (int64_t *)(v2 - 24); // 0x388b02
    int64_t v5 = *(int64_t *)(v2 + 24); // 0x388b22
    *v3 = v5;
    int64_t v6 = v2 - 32; // 0x388b2c
    int64_t * v7 = (int64_t *)v6; // 0x388b2c
    *v7 = a2;
    int64_t v8 = v2 - 8; // 0x388b4b
    *v4 = v8;
    *v4 = v1;
    *v7 = v1;
    int64_t * v9 = (int64_t *)(v2 - 40); // 0x388b65
    *v9 = v6;
    int64_t v10 = *v7; // 0x388b76
    *v3 = v5;
    *v9 = a1;
    *(int64_t *)(v2 - 48) = v10;
    *v7 = v10;
    v1 = v10;
    *v7 = a2;
    *v4 = v8;
    return function_cc59c(*v9, a2, a3, a4);
}

// Address range: 0x388c1c - 0x388d6c
int64_t function_388c1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x388c1c
    int64_t v1; // bp-64, 0x388c1c
    v1 = (int64_t)&v1;
    return function_cc59c(a1, 169, a3, a4);
}

// Address range: 0x388d6c - 0x388eaa
int64_t function_388d6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x388d6c
    int64_t v1; // bp-24, 0x388d6c
    int64_t v2 = (int64_t)&v1; // 0x388e77
    int64_t v3 = v2 + 16; // 0x388e7d
    v1 = v3;
    int64_t v4 = *(int64_t *)v3; // 0x388e8c
    *(int64_t *)(v2 + 8) = v4;
    v1 = v4;
    return function_cc59c(a1, a2, a3, a4);
}

// Address range: 0x388ee3 - 0x388eec
int64_t function_388ee3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x388ee3
    int64_t v1; // 0x388ee3
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x388ee3
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    char * v5 = (char *)(v1 - 119); // 0x388ee7
    *v5 = *v5 + (char)a4;
    return function_388f2d(a1, a2, a3, a4, v1, (int64_t)&g2, (int64_t)&g2);
}

// Address range: 0x388eff - 0x388f00
int64_t function_388eff(void) {
    // 0x388eff
    int64_t result; // 0x388eff
    return result;
}

// Address range: 0x388f00 - 0x388f05
int64_t function_388f00(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x388f00
    int64_t v1; // 0x388f00
    char * v2 = (char *)(v1 - 127); // 0x388f00
    *v2 = *v2 | (char)a4;
    return function_388f0d(a1, a2, a3, a4, v1, (int64_t)&g2);
}

// Address range: 0x388f05 - 0x388f0d
int64_t function_388f05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x388f05
    int64_t v1; // 0x388f05
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(v2 - 121); // 0x388f07
    unsigned char v4 = *v3; // 0x388f07
    unsigned char v5 = v4 + (char)a4; // 0x388f07
    *v3 = v5;
    return (v2 - (v5 < v4 ? 37 : 36)) % 256 | v2 & -256;
}

// Address range: 0x388f0d - 0x388f25
int64_t function_388f0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x388f0d
    int64_t v1; // 0x388f0d
    return (int64_t)&v1;
}

// Address range: 0x388f2d - 0x388fa8
int64_t function_388f2d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x388f2d
    int64_t result; // 0x388f2d
    int64_t v1 = result;
    *(char *)v1 = 2 * (char)v1;
    return result;
}

// Address range: 0x414942 - 0x414945
int64_t function_414942(int64_t a1) {
    // 0x414942
    int64_t result; // 0x414942
    return result;
}

// Address range: 0x414966 - 0x414967
int64_t function_414966(void) {
    // 0x414966
    int64_t result; // 0x414966
    return result;
}

// Address range: 0x4149e5 - 0x4149e6
int64_t function_4149e5(void) {
    // 0x4149e5
    int64_t result; // 0x4149e5
    return result;
}

// Address range: 0x4149f5 - 0x4149f8
int64_t function_4149f5(void) {
    // 0x4149f5
    int64_t result; // 0x4149f5
    return result;
}

// Address range: 0x414a06 - 0x414a70
int64_t function_414a06(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x414a06
    int64_t result; // 0x414a06
    bool v1; // 0x414a06
    if (!v1) {
        // 0x414a71
        return result;
    }
    int64_t v2 = result & -136; // 0x414a0b
    int32_t * v3 = (int32_t *)(a3 - 111); // 0x414a0e
    *v3 = *v3 - (int32_t)v2;
    char * v4 = (char *)(result + 79); // 0x414a11
    *v4 = *v4 - (char)v2;
    __asm_out(55, (int32_t)((v1 ? 0xffffffff : 1) + a1));
    return function_ffffffffc1a7a599();
    int64_t v5 = 0x100000000 * result >> 32; // 0x414a5d
    int64_t v6 = 0x7fc58d4d * v5; // 0x414a5d
    int64_t result2 = v6 & 0xffffffff; // 0x414a5d
    if (v6 != 0x7fc58d4d00000000 * v5 >> 32) {
        // 0x414a65
        *(char *)0x4f928a9d = 47;
        return result2;
    }
    int32_t * v7 = (int32_t *)(a3 + 125); // 0x414a51
    *v7 = *v7 - 44;
    return result2;
}

// Address range: 0x414acf - 0x414ad8
int64_t function_414acf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a2 + 0x727cef5c); // 0x414acf
    *v1 = *v1 | (char)a4;
    int64_t result; // 0x414acf
    return result;
}

// Address range: 0x414aee - 0x414af0
int64_t function_414aee(void) {
    // 0x414aee
    int64_t v1; // 0x414aee
    return function_414b6c(v1, v1, v1, v1, (int64_t)&g2, (int64_t)&g2);
}

// Address range: 0x414af7 - 0x414b01
int64_t function_414af7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x414af7
    bool v1; // 0x414af7
    int64_t v2 = v1 ? -4 : 4; // 0x414afc
    return __asm_int3(v2 + a1, v2 + a2);
}

// Address range: 0x414b18 - 0x414b19
int64_t function_414b18(void) {
    // 0x414b18
    int64_t result; // 0x414b18
    return result;
}

// Address range: 0x414b2e - 0x414b31
int64_t function_414b2e(int64_t a1) {
    // 0x414b2e
    int64_t result; // 0x414b2e
    return result;
}

// Address range: 0x414b45 - 0x414b4a
int64_t function_414b45(void) {
    // 0x414b45
    return function_ffffffffec1a5896();
}

// Address range: 0x414b65 - 0x414b66
int64_t function_414b65(void) {
    // 0x414b65
    int64_t result; // 0x414b65
    return result;
}

// Address range: 0x414b6c - 0x414bca
int64_t function_414b6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int16_t v1 = a3; // 0x414b6c
    int64_t v2; // 0x414b6c
    __asm_outsb(v1, (char)v2);
    *(int32_t *)a1 = __asm_insd(v1);
    while (a4 == 0) {
        // continue -> 0x414b75
    }
    // 0x414b77
    return function_414b18();
}

// Address range: 0x414bcc - 0x414be7
int64_t function_414bcc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    bool v2; // 0x414bcc
    bool v3; // 0x414bcc
    if (!v3) {
        char * v4 = (char *)(a4 + 0x1fdf007a); // 0x414bd1
        char v5 = *v4 | (char)a4; // 0x414bd1
        *v4 = v5;
        v2 = false;
        if (a4 != 1 && v5 != 0) {
            function_414b65();
            v2 = false;
        }
    }
    char v6 = *(char *)&v1; // 0x414bdb
    int64_t v7; // 0x414bcc
    *(char *)v1 = (char)v2 - (char)((uint64_t)v7 / 256) + v6;
    return function_5b8b504f();
}

// Address range: 0x414bed - 0x414bf2
int64_t function_414bed(void) {
    // 0x414bed
    return function_96579e4();
}

// Address range: 0x414c94 - 0x414c9f
int64_t function_414c94(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x414c94
    int64_t result; // 0x414c94
    char * v1 = (char *)(8 * a4 + 0x1d91e220 + result); // 0x414c94
    *v1 = *v1 + (char)a3;
    return result;
}

// Address range: 0x414cb7 - 0x414cce
int64_t function_414cb7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0xe8ca98e); // 0x414cb8
    *v1 = *v1 + 0x315dead1;
    int64_t result; // 0x414cb7
    *(char *)0x6b2bcb84c2224af8 = (char)result;
    return result;
}

// Address range: 0x414ccf - 0x414cd2
int64_t function_414ccf(int64_t a1) {
    // 0x414ccf
    int64_t result; // 0x414ccf
    return result;
}

// Address range: 0x414cf0 - 0x414cf1
int64_t function_414cf0(void) {
    // 0x414cf0
    int64_t result; // 0x414cf0
    return result;
}

// Address range: 0x414d12 - 0x414d13
int64_t function_414d12(void) {
    // 0x414d12
    int64_t result; // 0x414d12
    return result;
}

// Address range: 0x414d3a - 0x414e26
int64_t function_414d3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x414d3a
    int64_t v1; // 0x414d3a
    bool v2; // 0x414d3a
    uint64_t v3 = v1 - (v2 ? 0x8a92602a : 0x8a926029); // 0x414d3a
    if (llvm_ctpop_i8((char)(a6 - *(int64_t *)(2 * v1 + 0x4b355405))) % 2 != 0) {
        unsigned char v4 = *(char *)(v3 % 256 + v1); // 0x414d4a
        return (v3 | v1) & 0xff00 | v3 & 0xffff0000 | (int64_t)v4;
    }
    int64_t result = v3 & 0xffffffff; // 0x414d58
    if ((char)a2 < (char)a1 == (a4 != 0)) {
        result = function_414cf0();
    }
    // 0x414d5d
    return result;
}

// Address range: 0x414e50 - 0x414e53
int64_t function_414e50(void) {
    // 0x414e50
    int64_t result; // 0x414e50
    return result;
}

// Address range: 0x414e6c - 0x414e77
int64_t function_414e6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x414e6c
    int64_t result; // 0x414e6c
    *(char *)a2 = (char)(result | result);
    return result;
}

// Address range: 0x414e77 - 0x414eb9
int64_t function_414e77(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x414e77
    int64_t v1; // 0x414e77
    int64_t v2 = v1 + 0x23d0f369; // 0x414e77
    int32_t * v3 = (int32_t *)(a3 + 0x4538135d); // 0x414e7c
    *v3 = *v3 + (int32_t)v2;
    uint32_t v4 = *(int32_t *)0x64622222; // 0x414e82
    int32_t v5 = v4 - 0x5dafd446; // 0x414e82
    *(int32_t *)0x64622222 = v5;
    if (v5 == 0) {
        // 0x414e95
        return result;
    }
    int32_t * v6 = (int32_t *)(v1 + 36 + 8 * v1); // 0x414e8e
    *v6 = (int32_t)(v4 < 0x5dafd446) - (int32_t)v1 + *v6;
    return v2 & 0xffffffff;
}

// Address range: 0x414ec1 - 0x414ec2
int64_t function_414ec1(void) {
    // 0x414ec1
    int64_t result; // 0x414ec1
    return result;
}

// Address range: 0x414f27 - 0x414f33
int64_t function_414f27(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x414f27
    int64_t v1; // 0x414f27
    *(int32_t *)a1 = 2 * (int32_t)v1;
    __asm_int(73);
    return function_414ec1();
}

// Address range: 0x414f49 - 0x414f4b
int64_t function_414f49(void) {
    // 0x414f49
    int64_t result; // 0x414f49
    return result;
}

// Address range: 0x414f84 - 0x414f87
int64_t function_414f84(void) {
    // 0x414f84
    int64_t result; // 0x414f84
    return result;
}

// Address range: 0x414fc3 - 0x414fcd
int64_t function_414fc3(int64_t a1) {
    // 0x414fc3
    int64_t result; // 0x414fc3
    return result;
}

// Address range: 0x41507d - 0x415080
int64_t function_41507d(int64_t a1) {
    // 0x41507d
    int64_t result; // 0x41507d
    return result;
}

// Address range: 0x415098 - 0x41509c
int64_t function_415098(void) {
    // 0x415098
    int64_t v1; // 0x415098
    return 2 * v1 & 0xfffffffe;
}

// Address range: 0x415108 - 0x41511b
int64_t function_415108(int64_t a1, int64_t a2, int64_t a3) {
    // 0x415108
    int64_t v1; // 0x415108
    __asm_outsb((int16_t)a3, (char)v1);
    return function_58b65030();
}

// Address range: 0x41511b - 0x41511e
int64_t function_41511b(void) {
    // 0x41511b
    int64_t v1; // 0x41511b
    int64_t v2 = v1;
    bool v3; // 0x41511b
    return (v2 - (v3 ? 134 : 133)) % 256 | v2 & -256;
}

// Address range: 0x41514a - 0x41514d
int64_t function_41514a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41514a
    int64_t result; // 0x41514a
    int64_t v1 = result;
    unsigned char v2 = (char)a4 % 32; // 0x41514a
    if (v2 != 0) {
        *(char *)v1 = (char)v1 << v2;
    }
    return result;
}

// Address range: 0x415165 - 0x415168
int64_t function_415165(void) {
    // 0x415165
    int64_t result; // 0x415165
    return result;
}

// Address range: 0x4151d7 - 0x415241
int64_t function_4151d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4151d7
    int64_t v1; // 0x4151d7
    int64_t result = v1;
    *(char *)0x7a605bd0 = (char)result;
    bool v2; // 0x4151d7
    if (a4 == 1 || v2) {
        // 0x4151e0
        return result;
    }
    // 0x41523e
    return (result + 134 + (int64_t)v2) % 256 | result & -256;
}

// Address range: 0x41526d - 0x415279
int64_t function_41526d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    unsigned char v1 = (char)a4 % 32; // 0x415275
    int64_t result; // 0x41526d
    if (v1 != 0) {
        char * v2 = (char *)(result + 32); // 0x415275
        unsigned char v3 = *v2; // 0x415275
        unsigned char v4 = *(char *)(a6 + 0x1828e0dd); // 0x41526d
        *v2 = v3 >> v1 | (char)((int16_t)v3 << (int16_t)(9 - v1)) | (char)(v4 > -1 - (char)result) << 8 - v1;
    }
    return result;
}

// Address range: 0x415287 - 0x415299
int64_t function_415287(int64_t a1, int64_t a2) {
    // 0x415287
    return __asm_wait(a1, a2);
}

// Address range: 0x415311 - 0x415312
int64_t function_415311(void) {
    // 0x415311
    int64_t result; // 0x415311
    return result;
}
