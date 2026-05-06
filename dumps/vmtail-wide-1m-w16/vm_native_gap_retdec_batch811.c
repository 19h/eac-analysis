/*
 * Targeted RetDec C for native executable gap queue batch 811.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x32a855-0x32aa55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32aad5-0x32ab55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32ab55-0x32ac55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32ac55-0x32ae55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32ae55-0x32b055 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e6079-0x4e60f9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e6179-0x4e61f9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e6279-0x4e62f9 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1333ec59();
int64_t function_32a855(void);
int64_t function_32a89d(void);
int64_t function_32a8a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32a96d(void);
int64_t function_32a97f(void);
int64_t function_32a9f1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_32a9f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32aad5(void);
int64_t function_32ab1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_32ad13(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_32ad64(void);
int64_t function_32ad8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32ae0b(void);
int64_t function_32ae10(void);
int64_t function_32ae3e(void);
int64_t function_32ae41(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32ae43(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_32ae66(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32aea7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32af54(void);
int64_t function_32afcd(void);
int64_t function_32afd4(void);
int64_t function_32b025(int64_t a1, int64_t a2);
int64_t function_32b03a(void);
int64_t function_36349439();
int64_t function_4e6079(int64_t a1, int64_t a2);
int64_t function_4e609b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4e6179(int64_t a1, int64_t a2);
int64_t function_4e619c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4e626b();
int64_t function_4e6279(void);
int64_t function_4e6288(void);
int64_t function_4e628e(void);
int64_t function_ffffffffef5da507();
int64_t function_ffffffffef5da608();
int64_t unknown_21bb9273();
int64_t unknown_34896238();
int64_t unknown_5a4581fb();
int64_t unknown_5a88e0d2();
int64_t unknown_5fa2c8f8();
int64_t unknown_783d4b24();
int64_t unknown_8142a70();
int64_t unknown_ffffffff8808f02d();
int64_t unknown_ffffffff89033119();
int64_t unknown_ffffffff967959b1();
int64_t unknown_ffffffffa8251feb();
int64_t unknown_ffffffffac61b959();
int64_t unknown_ffffffffad47b293();
int64_t unknown_ffffffffaf409fed();
int64_t unknown_ffffffffb46fe5a8();
int64_t unknown_ffffffffd5b1d884();
int64_t unknown_ffffffffe028f4ee();
int64_t unknown_ffffffffec3ae5ff();

// Address range: 0x32a855 - 0x32a858
int64_t function_32a855(void) {
    // 0x32a855
    int64_t result; // 0x32a855
    return result;
}

// Address range: 0x32a89d - 0x32a89e
int64_t function_32a89d(void) {
    // 0x32a89d
    int64_t result; // 0x32a89d
    return result;
}

// Address range: 0x32a8a2 - 0x32a927
int64_t function_32a8a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t v2; // 0x32a8a2
    __asm_out_133(29, (int32_t)v2);
    unsigned char v3 = *(char *)0x44b75fae; // 0x32a8a7
    unsigned char v4 = v3 + (char)(v2 / 256); // 0x32a8a7
    *(char *)0x44b75fae = v4;
    if (a4 != 0) {
        int64_t v5 = v2 + 8; // 0x32a8a2
        *(char *)a1 = (char)v5;
        return v5 & 0xffffffff;
    }
    int64_t v6 = 2 * v2;
    bool v7; // 0x32a8a2
    unsigned char v8 = (char)(v6 | (int64_t)v7); // 0x32a8e1
    unsigned char v9 = v4 < v3 ? -98 : -99; // 0x32a8e1
    char v10 = v8 - v9; // 0x32a8e1
    if (((v10 - (char)(v4 < v3) ^ v8) & (v8 ^ -128)) >= 0) {
        // 0x32a921
        return v6 & 0xffffff00 | (int64_t)(v10 & -53);
    }
    // 0x32a8e7
    unknown_ffffffffaf409fed();
    char * v11 = (char *)(a1 + 96); // 0x32a8ec
    *v11 = (char)(v4 < v3 | v9 > v8) - (char)a3 + *v11;
    *(char *)v1 = *(char *)&v1 | 54;
    return unknown_5fa2c8f8();
}

// Address range: 0x32a96d - 0x32a970
int64_t function_32a96d(void) {
    // 0x32a96d
    int64_t result; // 0x32a96d
    return result;
}

// Address range: 0x32a97f - 0x32a980
int64_t function_32a97f(void) {
    // 0x32a97f
    int64_t result; // 0x32a97f
    return result;
}

// Address range: 0x32a9f1 - 0x32a9f5
int64_t function_32a9f1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x32a9f1
    int64_t v1; // 0x32a9f1
    return v1 & -256 | (int64_t)__asm_in((int16_t)a3);
}

// Address range: 0x32a9f5 - 0x32aa4b
int64_t function_32a9f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = unknown_5a4581fb(); // 0x32a9f5
    *(int32_t *)a1 = (int32_t)v2 + 1 + *(int32_t *)v2;
    int16_t v3 = a3; // 0x32aa0b
    __asm_in(v3);
    int64_t result = unknown_ffffffff89033119(); // 0x32aa13
    __asm_outsd(v3, *(int32_t *)&v1);
    int64_t v4; // 0x32a9f5
    int32_t * v5 = (int32_t *)(v4 - 25); // 0x32aa19
    *v5 = *v5 | 110;
    return result;
}

// Address range: 0x32aad5 - 0x32aafb
int64_t function_32aad5(void) {
    int64_t v1; // 0x32aad5
    __asm_out(-0x6511, (int32_t)v1);
    // 0x32aad5
    bool v2; // 0x32aad5
    while (v2 || false) {
        // 0x32aada
        __asm_out(-0x6511, (int32_t)v1);
    }
    int64_t v3 = v1 ^ 243; // 0x32aadd
    char * v4 = (char *)(v1 + 0x5a6efd3a + v3); // 0x32aadf
    *v4 = *v4 - 17;
    int32_t * v5 = (int32_t *)v3; // 0x32aae6
    uint32_t v6 = (int32_t)v3; // 0x32aae6
    *v5 = *v5 & v6;
    int32_t v7 = v6 + 0x3002eeff; // 0x32aae8
    int64_t result = v1 & -0x10000 | (v3 + 8) % 256 | 256 * (64 * (int64_t)(v7 == 0) | (int64_t)(v6 < 0xcffd1101) | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v6 % 16 > 16) | 4 * (int64_t)(llvm_ctpop_i8((char)v7) % 2 == 0)) | 512; // 0x32aaee
    int32_t * v8 = (int32_t *)(result - 111); // 0x32aaf8
    *v8 = *v8 + (int32_t)v1;
    return result;
}

// Address range: 0x32ab1e - 0x32ac12
int64_t function_32ab1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x32ab1e
    unknown_783d4b24();
    int64_t v1; // 0x32ab1e
    char * v2 = (char *)(v1 + 0x1e800d3); // 0x32ab23
    char v3 = a4; // 0x32ab23
    *v2 = *v2 ^ v3;
    int64_t v4 = __asm_hlt(a5); // 0x32ab2d
    if (a4 != 0) {
        int32_t * v5 = (int32_t *)(a4 + 7 + 4 * a4); // 0x32ab38
        *v5 = *v5 & (int32_t)v1;
        int32_t * v6 = (int32_t *)(a5 + 14); // 0x32ab3e
        *v6 = *v6 + 0xaa001e8;
        unsigned char v7 = *(char *)0x1e8019d6d6c850a; // 0x32ab41
        __asm_out_133(12, (int32_t)(((v4 + 170) % 256 | v4 & 0xffffff00) + v1 & 0xffffff00 | (int64_t)v7));
        *(int32_t *)0x55a3808a = *(int32_t *)0x55a3808a - (int32_t)a4;
        unknown_ffffffffac61b959();
        return function_36349439();
    }
    int64_t v8 = (int32_t)unknown_ffffffffb46fe5a8() >> 31; // 0x32aba9
    uint64_t v9 = 0x100000000 * v8 | unknown_ffffffff967959b1() & 0xffffffff; // 0x32abb0
    uint64_t v10 = (int64_t)*(int32_t *)v8; // 0x32abb0
    uint64_t v11 = v9 / v10; // 0x32abb0
    char * v12 = (char *)((v11 & 0xffffffff) + 0x360ee00); // 0x32abb2
    *v12 = *v12 + (char)v11;
    char * v13 = (char *)(v1 - 93); // 0x32abbe
    *v13 = *v13 + (char)(v9 % v10 / 256);
    int32_t v14 = (int32_t)v11 >> 31; // 0x32abc1
    char * v15 = (char *)(v1 + 112); // 0x32abc2
    char v16 = v14; // 0x32abc2
    *v15 = *v15 + v16;
    int64_t v17 = unknown_5a88e0d2(); // 0x32abcc
    char * v18 = (char *)(v17 + 67); // 0x32abd4
    *v18 = *v18 + v16;
    int32_t v19 = v17; // 0x32abd7
    *(int32_t *)a5 = v19;
    __asm_int(-24);
    int32_t * v20 = (int32_t *)v17; // 0x32abdc
    *v20 = *v20 + v19;
    int32_t * v21 = (int32_t *)(2 * (int64_t)(-85 * v14) + 0x2b3a05db + v17); // 0x32abde
    *v21 = *v21 | (int32_t)a2;
    *v20 = v19;
    int64_t v22 = unknown_ffffffffe028f4ee(); // 0x32abe8
    char * v23 = (char *)v22; // 0x32abf1
    *v23 = *v23 - (char)v22;
    int64_t result = unknown_ffffffffec3ae5ff(); // 0x32abf9
    char * v24 = (char *)(result - 11); // 0x32abfe
    *v24 = *v24 | v3;
    return result;
}

// Address range: 0x32ad13 - 0x32ad1b
int64_t function_32ad13(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x32ad13
    int64_t v1; // 0x32ad13
    return v1 | a4 / 256 % 256;
}

// Address range: 0x32ad64 - 0x32ad67
int64_t function_32ad64(void) {
    // 0x32ad64
    int64_t result; // 0x32ad64
    return result;
}

// Address range: 0x32ad8e - 0x32ad9a
int64_t function_32ad8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32ad8e
    int64_t result; // 0x32ad8e
    return result;
}

// Address range: 0x32ae0b - 0x32ae0c
int64_t function_32ae0b(void) {
    // 0x32ae0b
    int64_t result; // 0x32ae0b
    return result;
}

// Address range: 0x32ae10 - 0x32ae11
int64_t function_32ae10(void) {
    // 0x32ae10
    int64_t result; // 0x32ae10
    return result;
}

// Address range: 0x32ae3e - 0x32ae40
int64_t function_32ae3e(void) {
    // 0x32ae3e
    int64_t v1; // 0x32ae3e
    return function_32ae43(v1, v1, v1, v1);
}

// Address range: 0x32ae41 - 0x32ae43
int64_t function_32ae41(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32ae41
    int64_t result; // 0x32ae41
    *(int32_t *)a4 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x32ae43 - 0x32ae55
int64_t function_32ae43(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t result = __asm_int1(); // 0x32ae43
    bool v1; // 0x32ae43
    if (!v1) {
        // 0x32ae56
        return result;
    }
    int32_t * v2 = (int32_t *)(a4 + 4); // 0x32ae46
    *v2 = *v2 / 2;
    *(int32_t *)a1 = (int32_t)result;
    int64_t v3 = *(char *)(a4 - 79) > (char)(a3 / 256) ? 220 : 219; // 0x32ae4d
    return (result - v3) % 256 | result & -256;
}

// Address range: 0x32ae66 - 0x32aea7
int64_t function_32ae66(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32ae66
    unknown_8142a70();
    // 0x32ae6d
    unknown_21bb9273();
    bool v1; // 0x32ae66
    if (v1) {
        function_32ae10();
    }
    // 0x32ae74
    *(char *)-0x471cd649 = *(char *)-0x471cd649 + (char)a4;
    unknown_ffffffffd5b1d884();
    int32_t * v2 = (int32_t *)(a3 - 0x6728feff); // 0x32ae83
    uint32_t v3 = *v2; // 0x32ae83
    *v2 = v3 / 2 | 0x80000000 * v3;
    __asm_in_134(-74);
    unknown_ffffffffad47b293();
    int32_t * v4 = (int32_t *)(a1 + 0x75283a01); // 0x32ae92
    *v4 = -1 - *v4;
    int64_t v5; // 0x32ae66
    int64_t v6 = __asm_int3() + v5; // 0x32ae99
    int64_t result = v6 & 0xffffffff; // 0x32ae99
    int32_t * v7 = (int32_t *)(result + 0x62da0cca); // 0x32ae9b
    *v7 = *v7 + (int32_t)v6;
    return result;
}

// Address range: 0x32aea7 - 0x32af53
int64_t function_32aea7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x32aea7
    int64_t v1; // 0x32aea7
    bool v2; // 0x32aea7
    int32_t * v3 = (int32_t *)((v1 + a4 + (int64_t)v2 & 0xffffffff) + 0x34eb8ff5); // 0x32aeb9
    *v3 = *v3 + (int32_t)v1;
    char v4 = __asm_in_134(64); // 0x32aebf
    int32_t v5 = v1; // 0x32aee0
    if ((v5 + 20 & (v5 ^ -0x80000000)) >= 0) {
        // 0x32af4e
        return 0x10000 * (int32_t)(v1 + 488 & 0xff00 | (int64_t)v4) + 0x18700000 >> 16;
    }
    int64_t result = unknown_ffffffffa8251feb(); // 0x32aee5
    *(char *)(a2 - 123 + (v2 ? -4 : 4)) = (char)v1;
    return result;
}

// Address range: 0x32af54 - 0x32af59
int64_t function_32af54(void) {
    // 0x32af54
    return function_1333ec59();
}

// Address range: 0x32afcd - 0x32afd0
int64_t function_32afcd(void) {
    // 0x32afcd
    int64_t result; // 0x32afcd
    return result;
}

// Address range: 0x32afd4 - 0x32afd5
int64_t function_32afd4(void) {
    // 0x32afd4
    int64_t result; // 0x32afd4
    return result;
}

// Address range: 0x32b025 - 0x32b039
int64_t function_32b025(int64_t a1, int64_t a2) {
    // 0x32b025
    unknown_ffffffff8808f02d();
    function_32afd4();
    int64_t v1; // 0x32b025
    *(char *)(a2 + 111) = (char)((uint64_t)v1 / 256);
    return unknown_34896238();
}

// Address range: 0x32b03a - 0x32b040
int64_t function_32b03a(void) {
    // 0x32b03a
    int64_t result; // 0x32b03a
    return result;
}

// Address range: 0x4e6079 - 0x4e607c
int64_t function_4e6079(int64_t a1, int64_t a2) {
    // 0x4e6079
    int64_t v1; // 0x4e6079
    uint64_t result = v1;
    char * v2 = (char *)(a2 + 15); // 0x4e6079
    bool v3; // 0x4e6079
    *v2 = *v2 + (char)(result / 256) + (char)v3;
    return result;
}

// Address range: 0x4e609b - 0x4e60a1
int64_t function_4e609b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4e609b
    int64_t v1; // 0x4e609b
    __asm_out((int16_t)a3, (int32_t)v1);
    return function_ffffffffef5da507();
}

// Address range: 0x4e6179 - 0x4e6180
int64_t function_4e6179(int64_t a1, int64_t a2) {
    // 0x4e6179
    int64_t v1; // 0x4e6179
    uint64_t v2 = v1;
    int64_t result = v2 & -112; // 0x4e6179
    char * v3 = (char *)result; // 0x4e617b
    *v3 = *v3 + (char)result;
    char * v4 = (char *)(a2 + 15); // 0x4e617d
    *v4 = *v4 + (char)(v2 / 256);
    return result;
}

// Address range: 0x4e619c - 0x4e61a2
int64_t function_4e619c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4e619c
    int64_t v1; // 0x4e619c
    __asm_out((int16_t)a3, (int32_t)v1);
    return function_ffffffffef5da608();
}

// Address range: 0x4e6279 - 0x4e627b
int64_t function_4e6279(void) {
    // 0x4e6279
    return function_4e626b();
}

// Address range: 0x4e6288 - 0x4e6289
int64_t function_4e6288(void) {
    // 0x4e6288
    int64_t result; // 0x4e6288
    return result;
}

// Address range: 0x4e628e - 0x4e6290
int64_t function_4e628e(void) {
    // 0x4e628e
    return function_4e6288();
}
