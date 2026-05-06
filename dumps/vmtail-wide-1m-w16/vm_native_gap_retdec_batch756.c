/*
 * Targeted RetDec C for native executable gap queue batch 756.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1774aa-0x1776aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1776aa-0x1778aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1778aa-0x177aaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x329e55-0x32a055 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32a055-0x32a255 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32a255-0x32a455 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32a455-0x32a655 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32a655-0x32a855 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1774aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1774c6(int64_t a1);
int64_t function_1774e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_177504(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1775ef(void);
int64_t function_1775fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1776ac(int64_t a1);
int64_t function_1776c0(void);
int64_t function_1776e1(void);
int64_t function_177764(void);
int64_t function_1777c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1777d9(int64_t a1, int64_t a2);
int64_t function_177811(void);
int64_t function_17785a(int64_t a1);
int64_t function_177874(void);
int64_t function_1778a0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_17792a(void);
int64_t function_17794c(int64_t a1);
int64_t function_177954(int64_t a1, int64_t a2);
int64_t function_17799a(void);
int64_t function_1779a3(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_177a15(void);
int64_t function_177a23(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_177a60(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_329e55(int64_t a1);
int64_t function_329e61(int64_t a1, int64_t a2, int64_t a3);
int64_t function_329e6c(void);
int64_t function_329e8d(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_329ea8(void);
int64_t function_329ead(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_329eca(int64_t a1, int64_t a2, int64_t a3);
int64_t function_329ecc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_329ee5(void);
int64_t function_329f0e(int64_t a1);
int64_t function_329f0f(int64_t a1);
int64_t function_329f30(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_329fba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32a088(void);
int64_t function_32a0f7(int64_t a1);
int64_t function_32a184(void);
int64_t function_32a198(int64_t a1);
int64_t function_32a19b(void);
int64_t function_32a1a0(void);
int64_t function_32a1e8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_32a221(void);
int64_t function_32a229(int64_t a1);
int64_t function_32a2bf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_32a2f1(int64_t a1);
int64_t function_32a2fa(int64_t a1, int64_t a2, int64_t a3);
int64_t function_32a321(void);
int64_t function_32a324(void);
int64_t function_32a335(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_32a3af(int64_t a1);
int64_t function_32a3b2(void);
int64_t function_32a3d2(int64_t a1);
int64_t function_32a447(int64_t a1);
int64_t function_32a4d4(int64_t a1);
int64_t function_32a4dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32a56c(void);
int64_t function_32a57e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32a5d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32a5f8(int64_t a1);
int64_t function_32a621(int64_t a1, int64_t a2);
int64_t function_32a638(void);
int64_t function_32a64c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32a6c8(void);
int64_t function_32a6e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32a790(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3faa2f7();
int64_t function_42634e1b();
int64_t function_5f1a4b2();
int64_t function_ffffffffb455301e();
int64_t function_ffffffffd2d187ea();
int64_t function_ffffffffe8195ef2();
int64_t function_ffffffffe81962f2();
int64_t function_fffffffffe885957();
int64_t unknown_22a2bc71();
int64_t unknown_2d8afc36();
int64_t unknown_48294ce();
int64_t unknown_48b41f76();
int64_t unknown_4c0d1162();
int64_t unknown_561c29fc();
int64_t unknown_7021dd17();
int64_t unknown_7beaf15c();
int64_t unknown_ffffffff848e9f69();
int64_t unknown_ffffffff92b91753();
int64_t unknown_fffffffface266fc();
int64_t unknown_ffffffffc512dda7();
int64_t unknown_ffffffffd9146cab();
int64_t unknown_fffffffff5f50a2c();
int64_t unknown_fffffffff8c5a6a3();

// Address range: 0x1774aa - 0x1774ba
int64_t function_1774aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1774aa
    int64_t v1; // 0x1774aa
    int32_t * v2 = (int32_t *)(2 * v1); // 0x1774ac
    *v2 = *v2 + (int32_t)v1;
    char * v3 = (char *)(a4 - 0x17f7ff60); // 0x1774af
    *v3 = *v3 & (char)v1;
    __asm_int1(a1, a2, a3, (int32_t)a4 + (int32_t)a2);
    bool v4; // 0x1774aa
    return (int64_t)*(int32_t *)((v4 ? -1 : 1) + a2);
}

// Address range: 0x1774c6 - 0x1774c7
int64_t function_1774c6(int64_t a1) {
    // 0x1774c6
    int64_t result; // 0x1774c6
    return result;
}

// Address range: 0x1774e0 - 0x1774f5
int64_t function_1774e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1774e0
    int64_t v1; // 0x1774e0
    int32_t * v2 = (int32_t *)(v1 - 0x53387fff + 8 * v1); // 0x1774e0
    uint32_t v3 = *v2; // 0x1774e0
    int32_t v4 = a4; // 0x1774e0
    uint32_t v5 = v3 + v4; // 0x1774e0
    *v2 = v5;
    int32_t * v6 = (int32_t *)(a4 - 0x720e9600); // 0x1774e7
    *v6 = *v6 - v4 + (int32_t)(v5 < v3);
    return unknown_561c29fc(a1, a2, a3, a4, a5);
}

// Address range: 0x177504 - 0x177582
int64_t function_177504(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x177504
    int64_t v1; // 0x177504
    int64_t v2 = v1;
    int64_t v3 = a1;
    unsigned char v4 = (char)v1; // 0x177504
    bool v5; // 0x177504
    char v6 = v4 + 29 + (char)v5; // 0x177504
    if (v6 != 0 && !((v5 ? v6 <= v4 : v4 > 226))) {
        // 0x177508
        unknown_7021dd17();
        int32_t * v7 = (int32_t *)(v2 + 0x1e89c2c + 8 * v2); // 0x177518
        *v7 = *v7 + (int32_t)v1;
        return function_ffffffffb455301e();
    }
    int64_t v8 = unknown_22a2bc71(); // 0x17756a
    int16_t v9 = a3; // 0x177570
    *(int32_t *)a1 = __asm_insd(v9);
    if (v6 < 0) {
        // 0x177573
        return v8 & -256 | (int64_t)*(char *)0x1e81e5f2bf22606;
    }
    char * v10 = (char *)(v8 + 0x13e94709); // 0x177547
    *v10 = *v10 | (char)a4;
    unknown_ffffffff92b91753();
    *(char *)v3 = __asm_insb(v9);
    unknown_fffffffff5f50a2c();
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)v1;
    return __asm_sti() ^ 162;
}

// Address range: 0x1775ef - 0x1775f0
int64_t function_1775ef(void) {
    // 0x1775ef
    int64_t result; // 0x1775ef
    return result;
}

// Address range: 0x1775fa - 0x177698
int64_t function_1775fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(__asm_int1(a1, a2, a3, (int32_t)a4) + 108); // 0x17760b
    int32_t v2 = a1; // 0x17760b
    bool v3; // 0x1775fa
    *v1 = (int32_t)v3 + v2 + *v1;
    uint64_t v4 = 257 * a4;
    uint32_t v5 = *(int32_t *)0x68092fbeca5362a1; // 0x177610
    int64_t v6 = v5; // 0x177610
    char * v7 = (char *)v6; // 0x177619
    *v7 = *v7 + (char)v5;
    char * v8 = (char *)(a1 - 0x25475bde); // 0x177620
    unsigned char v9 = *v8; // 0x177620
    int64_t v10 = (v4 & 0xff00 | a4 & -0x10000) / 256; // 0x177620
    unsigned char v11 = (char)v10; // 0x177620
    char v12 = v9 - v11; // 0x177620
    *v8 = v12;
    int64_t v13 = v6; // 0x177626
    if (v9 >= v11 && v12 != 0) {
        v13 = function_1775ef();
    }
    // 0x177628
    if (v10 <= (int64_t)v9) {
        // 0x17762a
        int64_t v14; // 0x1775fa
        __asm_rcl(*(char *)(a3 + 0xf013d00 + v14));
        return (v13 & 0xffffff00 | 64) + 0x26603f66 & 0xffffffa6;
    }
    // 0x177674
    *(char *)(v13 + 8) = (char)(v4 / 256);
    *(int32_t *)0x1ead7698 = *(int32_t *)0x1ead7698 ^ v2;
    return 0x49130093;
}

// Address range: 0x1776ac - 0x1776af
int64_t function_1776ac(int64_t a1) {
    // 0x1776ac
    int64_t result; // 0x1776ac
    return result;
}

// Address range: 0x1776c0 - 0x1776c5
int64_t function_1776c0(void) {
    // 0x1776c0
    return function_ffffffffe8195ef2();
}

// Address range: 0x1776e1 - 0x1776e4
int64_t function_1776e1(void) {
    // 0x1776e1
    int64_t result; // 0x1776e1
    return result;
}

// Address range: 0x177764 - 0x177767
int64_t function_177764(void) {
    // 0x177764
    int64_t result; // 0x177764
    return result;
}

// Address range: 0x1777c4 - 0x1777d5
int64_t function_1777c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1777c4
    int64_t v1; // 0x1777c4
    *(char *)(v1 - 98 + 4 * v1) = (char)v1;
    int64_t result = unknown_48294ce(); // 0x1777c8
    int32_t * v2 = (int32_t *)result; // 0x1777cd
    *v2 = -1 - *v2;
    unsigned char v3 = (char)a4; // 0x1777cf
    int64_t v4; // 0x1777c4
    *(char *)v4 = *(char *)&v4 | v3;
    unsigned char v5 = v3 % 32; // 0x1777d1
    if (v5 != 0) {
        char * v6 = (char *)(a4 - 5); // 0x1777d1
        unsigned char v7 = *v6; // 0x1777d1
        *v6 = v7 >> v5 | v7 << 8 - v5;
    }
    return result;
}

// Address range: 0x1777d9 - 0x1777dc
int64_t function_1777d9(int64_t a1, int64_t a2) {
    // 0x1777d9
    int64_t result; // 0x1777d9
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x177811 - 0x177813
int64_t function_177811(void) {
    // 0x177811
    int64_t result; // 0x177811
    return result;
}

// Address range: 0x17785a - 0x177862
int64_t function_17785a(int64_t a1) {
    // 0x17785a
    int64_t v1; // 0x17785a
    return unknown_4c0d1162((int32_t)v1);
}

// Address range: 0x177874 - 0x177875
int64_t function_177874(void) {
    // 0x177874
    int64_t result; // 0x177874
    return result;
}

// Address range: 0x1778a0 - 0x177916
int64_t function_1778a0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2;
    unsigned char v2 = *(char *)0x4770fa8; // 0x1778a1
    int64_t v3; // 0x1778a0
    char v4 = v3 / 256; // 0x1778a1
    unsigned char v5 = v2 + v4; // 0x1778a1
    *(char *)0x4770fa8 = v5;
    int32_t v6 = *(int32_t *)(v3 + 68); // 0x1778a8
    int32_t v7 = (int32_t)a1 - (int32_t)v3; // 0x1778ab
    if (v7 >= 0) {
        function_177874();
    }
    // 0x1778af
    int64_t v8; // 0x1778a0
    int64_t v9 = v6 + (int32_t)(int64_t)&v8 + (int32_t)(v5 < v2); // 0x1778a8
    int32_t * v10 = (int32_t *)(a2 + 0x3b00b37f + 4 * v3); // 0x1778af
    *v10 = *v10 - (int32_t)a3;
    *(int64_t *)(v9 - 8) = v1;
    unsigned char v11 = *(char *)-0x7cc4a841; // 0x1778b8
    unsigned char v12 = v11 + v4; // 0x1778b8
    *(char *)-0x7cc4a841 = v12;
    uint32_t v13 = *(int32_t *)&v1; // 0x1778c8
    int64_t result = v13; // 0x1778c8
    v1 += 4;
    char * v14 = (char *)((int64_t)v7 - 15); // 0x1778c9
    *v14 = *v14 - (v12 < v11 ? 105 : 104);
    unsigned char v15 = *(char *)&v1; // 0x1778cd
    unsigned char v16 = (char)v13; // 0x1778cd
    char v17 = v15 + v16; // 0x1778cd
    unsigned char v18 = llvm_ctpop_i8(v17); // 0x1778cd
    *(char *)result = v17;
    bool v19; // 0x1778a0
    *(int64_t *)(v9 - 16) = 0x4000 * (int64_t)v19 | 256 * (int64_t)v19 | (int64_t)(v17 < v15) | 64 * (int64_t)(v17 == 0) | 128 * (int64_t)(v17 < 0) | 16 * (int64_t)(v15 % 16 + v16 % 16 > 15) | 4 * (int64_t)(v18 % 2 == 0) | 2048 * (int64_t)(((v17 ^ v15) & (v17 ^ v16)) < 0) | 2;
    if (v17 < 0 == ((v17 ^ v15) & (v17 ^ v16)) < 0 == (v17 != 0)) {
        // 0x177910
        return result;
    }
    // 0x1778d8
    return v1 + result & 0xffffff7f | 128;
}

// Address range: 0x17792a - 0x17792b
int64_t function_17792a(void) {
    // 0x17792a
    int64_t result; // 0x17792a
    return result;
}

// Address range: 0x17794c - 0x17794f
int64_t function_17794c(int64_t a1) {
    // 0x17794c
    int64_t result; // 0x17794c
    return result;
}

// Address range: 0x177954 - 0x17795d
int64_t function_177954(int64_t a1, int64_t a2) {
    // 0x177954
    int64_t v1; // 0x177954
    int32_t * v2 = (int32_t *)(v1 - 0x43acd319 + 8 * v1); // 0x177954
    *v2 = *v2 + (int32_t)a2;
    return function_17792a();
}

// Address range: 0x17799a - 0x1779a3
int64_t function_17799a(void) {
    // 0x17799a
    int64_t result; // 0x17799a
    int32_t * v1 = (int32_t *)(result - 0x717d91d4); // 0x17799a
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1779a3 - 0x1779c8
int64_t function_1779a3(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x1779a3
    int64_t v1; // 0x1779a3
    __asm_out(-46, (char)v1);
    char * v2 = (char *)(v1 + 76); // 0x1779a5
    unsigned char v3 = *v2; // 0x1779a5
    bool v4; // 0x1779a3
    char v5 = v4; // 0x1779a5
    unsigned char v6 = (char)(v1 / 256) + v5; // 0x1779a5
    char v7 = v3 - v6; // 0x1779a5
    bool v8 = v4 ? v6 != -1 | v3 < v7 - v5 : v3 < v6; // 0x1779a5
    *v2 = v7;
    int64_t v9; // 0x1779a3
    char v10 = *(char *)&v9; // 0x1779a8
    *(char *)v9 = v10 + (char)(a3 / 256) + (char)v8;
    int32_t * v11 = (int32_t *)(a3 - 106); // 0x1779ac
    *v11 = *v11 + (int32_t)a2;
    int32_t * v12 = (int32_t *)(a1 + 0x3af1f805); // 0x1779b4
    *v12 = *v12 + (int32_t)a3;
    if ((int32_t)(v1 ^ v1) < 0) {
        function_17794c((int64_t)&g1);
    }
    int64_t v13 = v9;
    *(char *)v13 = *(char *)&v9 + (char)v13;
    return 0x5ca3ac76;
}

// Address range: 0x177a15 - 0x177a1a
int64_t function_177a15(void) {
    // 0x177a15
    return function_fffffffffe885957();
}

// Address range: 0x177a23 - 0x177a41
int64_t function_177a23(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x177a23
    int64_t v1; // 0x177a23
    *(char *)-0x38af82d6 = *(char *)-0x38af82d6 + (char)(v1 / 256);
    int32_t * v2 = (int32_t *)(a4 + 30); // 0x177a2a
    *v2 = *v2 - (int32_t)v1;
    *(char *)0x1196239 = *(char *)0x1196239 + 66;
    bool v3; // 0x177a23
    return function_ffffffffe81962f2((v3 ? -4 : 4) + a1);
}

// Address range: 0x177a60 - 0x177aaa
int64_t function_177a60(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x177a60
    int64_t v1; // 0x177a60
    *(char *)a3 = 2 * (char)v1;
    int64_t v2 = unknown_ffffffff848e9f69(); // 0x177a63
    uint64_t v3 = v2 + 219; // 0x177a68
    *(char *)a1 = (char)v3;
    int32_t v4 = (int32_t)(v3 % 256 | v2 & 0xffffff00) ^ 0x5bfc01e8; // 0x177a6f
    *(char *)0x4d1962a5 = *(char *)0x4d1962a5 - 125;
    unsigned char v5 = llvm_ctpop_i8(64 * (char)(v4 == 0) | 128 * (char)(v4 < 0) | 46); // 0x177a7e
    int32_t result = __asm_in(58); // 0x177a89
    __asm_out_133(-0x178d, (char)result);
    if (v5 % 2 == 0) {
        // 0x177ad2
        return result;
    }
    // 0x177a95
    __asm_in(56);
    return unknown_ffffffffd9146cab();
}

// Address range: 0x329e55 - 0x329e60
int64_t function_329e55(int64_t a1) {
    uint64_t v1 = unknown_7beaf15c(); // 0x329e56
    int64_t v2; // 0x329e55
    int64_t v3 = v1 & -256 | (int64_t)*(char *)(v1 % 256 + v2); // 0x329e5d
    int32_t v4 = *(int32_t *)v3; // 0x329e5e
    return (int32_t)(-1 - (int32_t)a1 < (int32_t)v2) - v4 + (int32_t)v3;
}

// Address range: 0x329e61 - 0x329e6c
int64_t function_329e61(int64_t a1, int64_t a2, int64_t a3) {
    // 0x329e61
    return function_329ee5();
}

// Address range: 0x329e6c - 0x329e6d
int64_t function_329e6c(void) {
    // 0x329e6c
    int64_t result; // 0x329e6c
    return result;
}

// Address range: 0x329e8d - 0x329ea5
int64_t function_329e8d(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x329e8d
    int64_t v1; // 0x329e8d
    uint64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)a2;
    char v3 = a3 / 256; // 0x329e97
    char v4 = v2 / 256; // 0x329e97
    char v5 = v4 + v3 + 2 * (char)((int32_t)v2 < 0x989f0001); // 0x329e97
    char v6 = __asm_in_134(-39); // 0x329e99
    if (((v5 ^ v3) & (v5 ^ v4)) < 0) {
        // 0x329ea6
        return v2 & -256 | (int64_t)v6;
    }
    int64_t v7 = unknown_fffffffff8c5a6a3(); // 0x329e9d
    uint16_t v8 = (int16_t)v7; // 0x329ea2
    uint16_t v9 = (int16_t)*(char *)(v7 - 39); // 0x329ea2
    return v7 & -0x10000 | (int64_t)(v8 / v9 % 256) | (int64_t)(256 * (v8 % v9));
}

// Address range: 0x329ea8 - 0x329eab
int64_t function_329ea8(void) {
    // 0x329ea8
    int64_t result; // 0x329ea8
    return result;
}

// Address range: 0x329ead - 0x329ec9
int64_t function_329ead(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x329ead
    int64_t v1; // 0x329ead
    uint32_t v2 = (int32_t)v1 & -0x764f0db3; // 0x329eb1
    int64_t result = v2; // 0x329eb6
    if (v2 != 0) {
        result = function_329f0e((int64_t)&g1);
    }
    unsigned char v3 = (char)a1;
    unsigned char v4 = (char)result; // 0x329eb9
    int64_t v5 = a4 - 1; // 0x329eba
    if (v5 != 0 == v3 == v4) {
        // 0x329ecb
        return result;
    }
    if (v3 != v4) {
        bool v6; // 0x329ead
        function_329f30((v6 ? -1 : 1) + a1, a2, a3, v5);
    }
    if (v3 >= v4) {
        function_329e6c();
    }
    char v7 = *(char *)-0x25f37537; // 0x329ec2
    *(char *)-0x25f37537 = v7 + (char)((uint64_t)v1 / 256);
    return a2 & 0xffffffff;
}

// Address range: 0x329eca - 0x329ecb
int64_t function_329eca(int64_t a1, int64_t a2, int64_t a3) {
    // 0x329eca
    return a3 & 0xffffffff;
}

// Address range: 0x329ecc - 0x329eda
int64_t function_329ecc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x329ecc
    int64_t result; // 0x329ecc
    return result;
}

// Address range: 0x329ee5 - 0x329ee6
int64_t function_329ee5(void) {
    // 0x329ee5
    int64_t result; // 0x329ee5
    return result;
}

// Address range: 0x329f0e - 0x329f0f
int64_t function_329f0e(int64_t a1) {
    // 0x329f0e
    int64_t result; // 0x329f0e
    return result;
}

// Address range: 0x329f0f - 0x329f1b
int64_t function_329f0f(int64_t a1) {
    // 0x329f0f
    return 0x3c83a02;
}

// Address range: 0x329f30 - 0x329f52
int64_t function_329f30(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x329f30
    int64_t v1; // 0x329f30
    uint64_t v2 = v1;
    int64_t result = unknown_2d8afc36(); // 0x329f30
    int32_t * v3 = (int32_t *)result; // 0x329f37
    *v3 = *v3 + (int32_t)v2;
    char v4 = v2 / 256; // 0x329f3d
    *(char *)-0x36fa36bc = *(char *)-0x36fa36bc + v4;
    char * v5 = (char *)(a4 + 3); // 0x329f4e
    *v5 = *v5 + v4;
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x329fba - 0x32a04d
int64_t function_329fba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x329fba
    int64_t result; // 0x329fba
    bool v1; // 0x329fba
    if (v1) {
        // 0x329fbd
        return result;
    }
    int32_t * v2 = (int32_t *)(result - 74); // 0x32a036
    *v2 = *v2 | (int32_t)result;
    char * v3 = (char *)(result + a2); // 0x32a039
    *v3 = *v3 >> 1;
    *(int32_t *)(a4 + 0x33f0cdea) = (int32_t)a2;
    *(char *)a1 = __asm_insb((int16_t)(256 * result | a3));
    return result;
}

// Address range: 0x32a088 - 0x32a096
int64_t function_32a088(void) {
    // 0x32a088
    int64_t v1; // 0x32a088
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + 116;
    return function_42634e1b();
}

// Address range: 0x32a0f7 - 0x32a0f8
int64_t function_32a0f7(int64_t a1) {
    // 0x32a0f7
    int64_t result; // 0x32a0f7
    return result;
}

// Address range: 0x32a184 - 0x32a189
int64_t function_32a184(void) {
    // 0x32a184
    return function_3faa2f7();
}

// Address range: 0x32a198 - 0x32a19b
int64_t function_32a198(int64_t a1) {
    // 0x32a198
    int64_t result; // 0x32a198
    return result;
}

// Address range: 0x32a19b - 0x32a1a0
int64_t function_32a19b(void) {
    // 0x32a19b
    return function_ffffffffd2d187ea();
}

// Address range: 0x32a1a0 - 0x32a1b7
int64_t function_32a1a0(void) {
    // 0x32a1a0
    unknown_ffffffffc512dda7();
    int64_t v1; // 0x32a1a0
    return __asm_hlt(v1) & -256 | 137;
}

// Address range: 0x32a1e8 - 0x32a211
int64_t function_32a1e8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x32a1e8
    int64_t v1; // 0x32a1e8
    uint32_t result = -115 * *(int32_t *)(v1 + 0x59384186); // 0x32a1e8
    char * v2 = (char *)(a1 - 0x1eff97d7); // 0x32a208
    *v2 = *v2 + (char)result;
    return result;
}

// Address range: 0x32a221 - 0x32a223
int64_t function_32a221(void) {
    // 0x32a221
    int64_t result; // 0x32a221
    return result;
}

// Address range: 0x32a229 - 0x32a22a
int64_t function_32a229(int64_t a1) {
    // 0x32a229
    int64_t result; // 0x32a229
    return result;
}

// Address range: 0x32a2bf - 0x32a2cf
int64_t function_32a2bf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x32a2bf
    int64_t result; // 0x32a2bf
    char * v1 = (char *)(result - 90); // 0x32a2c1
    char v2 = *v1; // 0x32a2c1
    *v1 = v2 - (char)(a3 / 256) + (char)((char)result > (char)result);
    return result;
}

// Address range: 0x32a2f1 - 0x32a2f2
int64_t function_32a2f1(int64_t a1) {
    // 0x32a2f1
    int64_t result; // 0x32a2f1
    return result;
}

// Address range: 0x32a2fa - 0x32a2fc
int64_t function_32a2fa(int64_t a1, int64_t a2, int64_t a3) {
    // 0x32a2fa
    int64_t result; // 0x32a2fa
    return result;
}

// Address range: 0x32a321 - 0x32a323
int64_t function_32a321(void) {
    // 0x32a321
    int64_t v1; // 0x32a321
    return function_32a335(v1, v1, v1, v1, (int64_t)&g1, (int64_t)&g1);
}

// Address range: 0x32a324 - 0x32a335
int64_t function_32a324(void) {
    // 0x32a324
    int64_t v1; // 0x32a324
    uint16_t v2 = (int16_t)v1; // 0x32a324
    uint16_t v3 = (int16_t)*(char *)(v1 + 0x16068000); // 0x32a324
    return v1 & -0x10000 | (int64_t)(v2 / v3 % 256) | (int64_t)(256 * (v2 % v3));
}

// Address range: 0x32a335 - 0x32a3ad
int64_t function_32a335(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x32a335
    int64_t v1; // 0x32a335
    int64_t v2 = v1;
    int64_t v3 = a4;
    int64_t v4 = a5;
    int64_t v5 = v1 & 0xffffffff; // 0x32a335
    int64_t v6 = a1 & 0xffffffff; // 0x32a336
    int64_t v7 = (int64_t)&v4; // 0x32a336
    int64_t result = v7; // 0x32a336
    *(int64_t *)(v6 - 8) = v7;
    char v8 = *(char *)&result ^ (char)(a3 / 256); // 0x32a338
    if (v8 >= 1) {
        // 0x32a33e
        *(int32_t *)(4 * v2 - 47 + v5) = (int32_t)v2;
        return result;
    }
    char * v9 = (char *)(v5 + (4 * a2 & 0x3fffffffc | 3)); // 0x32a389
    *v9 = *v9 | (char)a2;
    unsigned char v10 = *(char *)&v3; // 0x32a38d
    uint64_t v11 = v3;
    *(char *)v11 = (char)(v11 / 256);
    *(int64_t *)(v6 - 16) = v7;
    uint16_t v12 = (int16_t)result; // 0x32a3a3
    uint16_t v13 = (int16_t)*(char *)(v1 + 0x13d0000); // 0x32a3a3
    return __asm_int1(result & 0xffff0000 | (int64_t)(v12 / v13 % 256) | (int64_t)(256 * (v12 % v13)), 256 * (int64_t)v8 | a3 & 0xffff00ff, (a2 / 256 + a2) % 256 | a2 & 0xffff0000 | (256 * v4 | a2) & 0xff00, (int32_t)(v3 & 0xffff00ff | 256 * (int64_t)v10));
}

// Address range: 0x32a3af - 0x32a3b2
int64_t function_32a3af(int64_t a1) {
    // 0x32a3af
    int64_t result; // 0x32a3af
    return result;
}

// Address range: 0x32a3b2 - 0x32a3b7
int64_t function_32a3b2(void) {
    // 0x32a3b2
    return function_5f1a4b2();
}

// Address range: 0x32a3d2 - 0x32a3d5
int64_t function_32a3d2(int64_t a1) {
    // 0x32a3d2
    int64_t result; // 0x32a3d2
    return result;
}

// Address range: 0x32a447 - 0x32a448
int64_t function_32a447(int64_t a1) {
    // 0x32a447
    int64_t result; // 0x32a447
    return result;
}

// Address range: 0x32a4d4 - 0x32a4d5
int64_t function_32a4d4(int64_t a1) {
    // 0x32a4d4
    int64_t result; // 0x32a4d4
    return result;
}

// Address range: 0x32a4dc - 0x32a502
int64_t function_32a4dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x32a4dc
    int64_t v1; // 0x32a4dc
    __asm_out_135((int16_t)a3, (int32_t)v1);
    *(char *)0x23662d21 = 2 * *(char *)0x23662d21;
    *(int32_t *)a3 = (int32_t)(a3 | a1);
    int64_t result = __asm_iretd(); // 0x32a4fc
    int64_t v2; // 0x32a4dc
    *(char *)result = *(char *)&v2 / 2;
    __asm_int(72);
    return result;
}

// Address range: 0x32a56c - 0x32a574
int64_t function_32a56c(void) {
    // 0x32a56c
    int64_t v1; // 0x32a56c
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x32a57e - 0x32a582
int64_t function_32a57e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32a57e
    int64_t result; // 0x32a57e
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x32a5d5 - 0x32a5e5
int64_t function_32a5d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32a5d5
    int64_t result; // 0x32a5d5
    int32_t v1 = *(int32_t *)(result + 93); // 0x32a5d5
    *(char *)a1 = *(char *)(int64_t)(v1 & (int32_t)a2);
    return result;
}

// Address range: 0x32a5f8 - 0x32a5fd
int64_t function_32a5f8(int64_t a1) {
    // 0x32a5f8
    return __asm_in((char)a1);
}

// Address range: 0x32a621 - 0x32a625
int64_t function_32a621(int64_t a1, int64_t a2) {
    // 0x32a621
    int64_t result; // 0x32a621
    return result;
}

// Address range: 0x32a638 - 0x32a639
int64_t function_32a638(void) {
    // 0x32a638
    int64_t result; // 0x32a638
    return result;
}

// Address range: 0x32a64c - 0x32a6ad
int64_t function_32a64c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 - 107); // 0x32a64c
    int64_t v2; // 0x32a64c
    *v1 = *v1 | (char)v2;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v3 = function_32a638(); // 0x32a653
    float80_t v4; // 0x32a64c
    *(int32_t *)(v3 + 19) = (int32_t)v4;
    uint64_t v5 = (v3 & 0xffffffff) * (a2 & 0xffffffff); // 0x32a662
    uint64_t v6 = __asm_hlt(0x7735564d); // 0x32a669
    char * v7 = (char *)(v5 / 0x100000000 + 94); // 0x32a66a
    *v7 = *v7 - (char)(v6 / 256) + (char)(v5 > 0xffffffff);
    int64_t v8; // 0x32a64c
    *(char *)v8 = *(char *)&v8 | 8;
    int64_t result = unknown_48b41f76(); // 0x32a670
    *(char *)0x334def7c = *(char *)0x334def7c + (char)(v8 / 256);
    uint32_t v9 = (int32_t)v8;
    int32_t v10 = v9 - 30; // 0x32a67b
    *(int32_t *)v8 = v10;
    if (v9 > 29 || v10 == 0) {
        // 0x32a6a8
        return result;
    }
    int64_t v11 = result & -256 | (int64_t)__asm_in_134(73); // 0x32a689
    uint32_t result2 = (int32_t)v11 - *(int32_t *)v11; // 0x32a690
    __asm_out_136(-97, result2);
    return result2;
}

// Address range: 0x32a6c8 - 0x32a6cb
int64_t function_32a6c8(void) {
    // 0x32a6c8
    int64_t result; // 0x32a6c8
    return result;
}

// Address range: 0x32a6e2 - 0x32a762
int64_t function_32a6e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32a6e2
    __asm_in(43);
    char v1 = *(char *)((a4 & -0xff01 | (int64_t)">\r") + 0x13d002c); // 0x32a6ea
    unknown_fffffffface266fc();
    int64_t v2 = (int64_t)(0x6ac20d4b - *(int32_t *)-0x231769f4); // 0x32a705
    __asm_in_137((int16_t)a3);
    int64_t v3; // 0x32a6e2
    char * v4 = (char *)(v3 - 48); // 0x32a70c
    *v4 = *v4 >> 1;
    unsigned char v5 = *(char *)(v2 - 0x7b26a214) + (char)(v3 / 256); // 0x32a70f
    uint64_t result = __asm_sti(); // 0x32a715
    if (llvm_ctpop_i8((char)(result / 256) - (char)a3) % 2 != 0) {
        // 0x32a71c
        *(char *)0x58048b25 = *(char *)0x58048b25 - v5;
        return result;
    }
    unsigned char v6 = v1 | (char)v3; // 0x32a6ea
    int64_t result2 = (int64_t)*(int32_t *)(v2 - 0x4c1b6ccd); // 0x32a756
    char * v7 = (char *)(4 * (v3 & 0x3fffffffffff0000 | (int64_t)v6 | 256 * (int64_t)v5) + 80 + result2); // 0x32a75c
    *v7 = *v7 + v6;
    return result2;
}

// Address range: 0x32a790 - 0x32a7fc
int64_t function_32a790(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a1;
    char * v3 = (char *)(a1 + 0xaf8c137); // 0x32a790
    bool v4; // 0x32a790
    *v3 = (char)v4 + (char)a4 + *v3;
    int64_t v5; // 0x32a790
    int32_t v6 = v5; // 0x32a797
    if (v6 >= 0x318e01) {
        // 0x32a7a7
        *(char *)-0x5c9dac4b = *(char *)-0x5c9dac4b + (char)v5;
        return v5 & -256 | (int64_t)*(char *)0x50bd88b9684697ed;
    }
    char v7 = *(char *)&v2; // 0x32a7f5
    *(char *)v2 = v7 + (char)(v6 < 0x318e01) - (char)(v1 / 256);
    int64_t v8 = __asm_sti(); // 0x32a7f7
    return (0x100000000 * v1 | v8 & 0xffffffff) / (int64_t)*(int32_t *)&v1 & 0xffffffff;
}
