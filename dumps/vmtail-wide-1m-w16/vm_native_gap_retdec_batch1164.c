/*
 * Targeted RetDec C for native executable gap queue batch 1164.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1181bf-0x1183bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x132da5-0x132fa5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x132fa5-0x1331a5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1331a5-0x1333a5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1333a5-0x1335a5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1335a5-0x1337a5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1337a5-0x1339a5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1339a5-0x133ba5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x481e30-0x482030 rank=- name=- kind=- bytes=- uncovered=-
 *   0x482030-0x482230 rank=- name=- kind=- bytes=- uncovered=-
 *   0x482230-0x482430 rank=- name=- kind=- bytes=- uncovered=-
 *   0x482430-0x482530 rank=- name=- kind=- bytes=- uncovered=-
 *   0x482630-0x482830 rank=- name=- kind=- bytes=- uncovered=-
 *   0x482830-0x482a30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x482b30-0x482c30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x482c30-0x482e30 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
extern int g7;
extern int g8;
extern int g9;
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

int64_t function_1181bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_118227(int64_t a1, int64_t a2, int64_t a3);
int64_t function_132da5(void);
int64_t function_132da8(void);
int64_t function_132e64(void);
int64_t function_132e6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_132eaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_132ec0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, uint64_t a5);
int64_t function_132ef1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_132f21(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_132f3b(void);
int64_t function_132f52(int64_t a1);
int64_t function_132fd8(void);
int64_t function_132fe8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_133136(int64_t a1);
int64_t function_133175(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_133213(int64_t a1);
int64_t function_13325f(void);
int64_t function_133275(void);
int64_t function_133293(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1332c1(int64_t a1);
int64_t function_1332ef(int64_t a1, int64_t a2);
int64_t function_1332f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_133336(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13337a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1333a2(int64_t a1);
int64_t function_133402(int64_t a1);
int64_t function_13340b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13342d(int64_t a1);
int64_t function_133459(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_133490(int64_t a1);
int64_t function_13359b(int64_t a1);
int64_t function_133607(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_133641(int64_t a1);
int64_t function_133704(void);
int64_t function_13374f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_133785(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1337be(void);
int64_t function_133836(int64_t a1);
int64_t function_1338e1(int64_t a1);
int64_t function_13390a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13398e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_133a08(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_133a45(int64_t a1);
int64_t function_133af0(void);
int64_t function_133b02(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_481e30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_481f78(void);
int64_t function_481fbf(int64_t a1);
int64_t function_481fe7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_482070(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4820f2(int64_t a1);
int64_t function_482118(int64_t a1);
int64_t function_48215e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4821e6(void);
int64_t function_482215(int64_t a1);
int64_t function_482234(void);
int64_t function_482255(void);
int64_t function_48227d(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_4822c7(void);
int64_t function_4822cd(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_4822d9(void);
int64_t function_4822fa(void);
int64_t function_48233c(int64_t a1);
int64_t function_48236f(void);
int64_t function_482374(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4823f5(void);
int64_t function_482402(void);
int64_t function_482438(void);
int64_t function_482443(int64_t a1);
int64_t function_482475(int64_t a1);
int64_t function_48247d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_482491(int64_t a1);
int64_t function_482495(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4824c3(void);
int64_t function_4824df(void);
int64_t function_482518(void);
int64_t function_482529(int64_t a1);
int64_t function_482630(int64_t a1, int64_t a2);
int64_t function_482638(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_482644(void);
int64_t function_48265d(void);
int64_t function_4826af(void);
int64_t function_4826b8(void);
int64_t function_4826ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4827a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_482833(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_482848(int64_t a1, int64_t a2, int64_t a3);
int64_t function_482851(int64_t a1, int64_t a2);
int64_t function_48285a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_482879(void);
int64_t function_4828a0(int64_t a1);
int64_t function_4828a5(int64_t a1);
int64_t function_48292e(void);
int64_t function_482934(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4829a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4829af(void);
int64_t function_4829b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7);
int64_t function_482b30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_482cfc(int64_t a1);
int64_t function_482d06(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_482d3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_482d53(void);
int64_t function_482df9(void);
int64_t function_49a28a7b();
int64_t function_cdc60();
int64_t function_ffffffff9467b253();
int64_t function_ffffffff99418d77();
int64_t function_ffffffffb22914dc();
int64_t function_ffffffffb3828c0c();
int64_t function_ffffffffbf57e0bd();
int64_t function_ffffffffc2bf66c7();
int64_t function_ffffffffe0583a94();
int64_t unknown_1110d4ba();
int64_t unknown_1a2b181f();
int64_t unknown_1f0605f8();
int64_t unknown_200fef0a();
int64_t unknown_20dc0d14();
int64_t unknown_3de4b3f3();
int64_t unknown_4148e1a();
int64_t unknown_587323fc();
int64_t unknown_81e0f90();
int64_t unknown_ffffffffa3cb6711();
int64_t unknown_ffffffffb38ca612();
int64_t unknown_ffffffffd6220b2b();
int64_t unknown_ffffffffe6a7b9aa();
int64_t unknown_ffffffffe9069405();
int64_t unknown_ffffffffed91c13c();
int64_t unknown_fffffffff1ab5b07();
int64_t unknown_fffffffff3b5ba17();
int64_t unknown_fffffffff6204bc9();
int64_t unknown_fffffffffa97ba43();

// Address range: 0x1181bf - 0x118227
int64_t function_1181bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1181bf
    int64_t v1; // 0x1181bf
    v1 = (int64_t)&v1 + 16;
    return function_cdc60(a1, a2, a3);
}

// Address range: 0x118227 - 0x118384
int64_t function_118227(int64_t a1, int64_t a2, int64_t a3) {
    // 0x118227
    int64_t v1; // bp-40, 0x118227
    int64_t v2 = (int64_t)&v1; // 0x1182b6
    int64_t v3 = *(int64_t *)(v2 + 40); // 0x1182c5
    v1 = v3;
    int64_t v4 = v2 - 8; // 0x1182c9
    int64_t * v5 = (int64_t *)v4; // 0x1182c9
    *v5 = v2 + 8;
    int64_t * v6 = (int64_t *)(v2 + 16); // 0x1182eb
    int64_t v7 = *v6; // 0x1182eb
    *v5 = v7;
    int64_t * v8 = (int64_t *)(v2 - 16); // 0x1182f3
    int64_t * v9 = (int64_t *)(v2 - 24); // 0x1182fc
    int64_t * v10 = (int64_t *)(v2 - 32); // 0x11830d
    *v9 = 0x13480a6f;
    *v10 = v3;
    v1 = *v8;
    *v9 = 0x4d269260;
    *v10 = v7;
    *v6 = *v8;
    *v9 = v4;
    *v8 = v2;
    return function_cdc60(a1, a2, a3);
}

// Address range: 0x132da5 - 0x132da6
int64_t function_132da5(void) {
    // 0x132da5
    int64_t result; // 0x132da5
    return result;
}

// Address range: 0x132da8 - 0x132dab
int64_t function_132da8(void) {
    // 0x132da8
    int64_t result; // 0x132da8
    return result;
}

// Address range: 0x132e64 - 0x132e67
int64_t function_132e64(void) {
    // 0x132e64
    int64_t result; // 0x132e64
    return result;
}

// Address range: 0x132e6b - 0x132e70
int64_t function_132e6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x132e6b
    int64_t v1; // 0x132e6b
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x132e6b
    if (v3 != 0) {
        *(int32_t *)v2 = (int32_t)v2 << v3;
    }
    return function_132ec0(a1, a2, a3, a4, (int64_t)&g9);
}

// Address range: 0x132eaa - 0x132ec0
int64_t function_132eaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x132eaa
    int64_t v1; // 0x132eaa
    int32_t * v2 = (int32_t *)(v1 + 0x3a8f444a); // 0x132eaa
    *v2 = *v2 + (int32_t)a2;
    __asm_in((int16_t)a3);
    return unknown_1110d4ba() & 0xffffffff ^ 0xe83aefb3;
}

// Address range: 0x132ec0 - 0x132ef0
int64_t function_132ec0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, uint64_t a5) {
    // 0x132ec0
    int64_t v1; // 0x132ec0
    uint64_t v2 = v1;
    int32_t v3; // 0x132ec0
    int32_t v4 = v3;
    int32_t * v5 = (int32_t *)(a4 + 0x28157cf5); // 0x132ec0
    *v5 = *v5 + (int32_t)a2;
    int64_t v6; // 0x132ec0
    *(char *)a4 = *(char *)&v6 + (char)(a3 / 256);
    int64_t v7 = v2 & -256 | (int64_t)*(char *)(v2 / 256 % 256 | v1); // 0x132ed1
    *(int32_t *)v7 = (int32_t)v7;
    int64_t v8 = __asm_int3(0x8301e8a9); // 0x132edb
    int32_t * v9 = (int32_t *)(a2 - 114); // 0x132edc
    *v9 = *v9 - 0x79fe1772;
    int64_t v10; // 0x132ec0
    *(int32_t *)0x8301e8a9 = *(int32_t *)&v10;
    __asm_out((int16_t)a3, (char)v4);
    int32_t * v11 = (int32_t *)((v8 & 0xffffffff) - 116); // 0x132eec
    *v11 = *v11 + (int32_t)a5;
    return (int64_t)(0x10000 * ((v4 + (int32_t)(a5 / 256)) % 256 | v4 & 0xff00) / 0x10000);
}

// Address range: 0x132ef1 - 0x132f15
int64_t function_132ef1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = __asm_in_133((int16_t)a3); // 0x132ef6
    int64_t v2; // 0x132ef1
    int32_t * v3 = (int32_t *)(v2 - 0x77ffe400); // 0x132efa
    *v3 = *v3 + (int32_t)v2;
    bool v4; // 0x132ef1
    char v5 = *(char *)(v2 + (int64_t)(int32_t)&g2 + (int64_t)v4 & 0xffffff00 | (int64_t)v1 & -256 | (int64_t)(v1 + (char)v2)); // 0x132f00
    __asm_in((int16_t)(a3 & 0xff00 | (int64_t)(v5 | (char)a3)));
    int64_t v6 = unknown_ffffffffb38ca612(); // 0x132f0c
    return (v6 + v2 / 256) % 256 | v6 & -256;
}

// Address range: 0x132f21 - 0x132f3a
int64_t function_132f21(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x132f21
    unknown_ffffffffd6220b2b();
    int64_t result = unknown_ffffffffe9069405(); // 0x132f26
    uint32_t v1 = *(int32_t *)0x59c669cc; // 0x132f2b
    uint32_t v2 = v1 + (int32_t)result; // 0x132f2b
    *(int32_t *)0x59c669cc = v2;
    uint32_t v3 = (int32_t)a4 % 32; // 0x132f31
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)(a1 + 0x5c542080); // 0x132f31
        uint32_t v5 = *v4; // 0x132f31
        *v4 = (int32_t)(v2 < v1) << 32 - v3 | v5 >> v3 | (int32_t)((int64_t)v5 << (int64_t)(33 - v3));
    }
    return result;
}

// Address range: 0x132f3b - 0x132f44
int64_t function_132f3b(void) {
    // 0x132f3b
    int64_t v1; // 0x132f3b
    uint64_t result = v1;
    char * v2 = (char *)(result + 0x1146f923); // 0x132f3b
    *v2 = *v2 + (char)(result / 256);
    return result;
}

// Address range: 0x132f52 - 0x132f5c
int64_t function_132f52(int64_t a1) {
    // 0x132f52
    int64_t result; // 0x132f52
    *(int32_t *)-0xb4444bdfe171016 = (int32_t)result;
    return result;
}

// Address range: 0x132fd8 - 0x132fe3
int64_t function_132fd8(void) {
    // 0x132fd8
    return function_ffffffffb22914dc();
}

// Address range: 0x132fe8 - 0x133120
int64_t function_132fe8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = a4 & a3;
    int64_t v2; // 0x132fe8
    int32_t * v3 = (int32_t *)(unknown_3de4b3f3() + v2 & 0xffffffff); // 0x132ff4
    *v3 = *v3 + (int32_t)v1;
    unknown_587323fc();
    char * v4 = (char *)(a2 - 39); // 0x132ffb
    char v5 = *v4 + (char)(v1 / 256); // 0x132ffb
    *v4 = v5;
    int64_t result2 = __asm_iretd((int64_t)&g9); // 0x133001
    if (a4 == 1 || v5 == 0) {
        int64_t result = unknown_200fef0a() & -0xff01 | (int64_t)&g7; // 0x133009
        int32_t * v6 = (int32_t *)(2 * result); // 0x13300b
        *v6 = *v6 + (int32_t)v2;
        return result;
    }
    // 0x13304e
    return result2;
}

// Address range: 0x133136 - 0x133139
int64_t function_133136(int64_t a1) {
    // 0x133136
    int64_t result; // 0x133136
    return result;
}

// Address range: 0x133175 - 0x133212
int64_t function_133175(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x133175
    int64_t v1; // 0x133175
    int64_t v2 = v1;
    int64_t v3 = a3 & -256 | (int64_t)((char)a3 - *(char *)(v2 + 103)); // 0x13317b
    int32_t v4 = v1; // 0x133188
    __asm_out_134((int16_t)v3, v4);
    uint32_t result = *(int32_t *)(v3 - 121) | v4; // 0x133189
    if (a4 == 0) {
        char * v5 = (char *)(v3 + 0x3a26890d); // 0x1331f7
        *v5 = *v5 - (char)v2;
        char * v6 = (char *)(v2 + 2 * v1); // 0x1331fd
        *v6 = *v6 + (char)(result / 256);
        // 0x133193
        return result;
    }
    char v7 = (char)v2 + (char)(a3 / 256); // 0x13318f
    if (v7 >= 1) {
        // 0x133193
        return result;
    }
    uint32_t v8 = (int32_t)a1;
    uint32_t v9 = (int32_t)((v2 - a4) % 256 | v2 & 0xffffff00) + v8; // 0x1331b6
    *(int32_t *)a1 = v9;
    int64_t v10 = __asm_sti(); // 0x1331b8
    char v11 = *(char *)(v3 & -0xff01 | 256 * (int64_t)v7); // 0x1331b9
    return v10 & -256 | (int64_t)((char)v10 + (char)(v9 < v8) + v11);
}

// Address range: 0x133213 - 0x133217
int64_t function_133213(int64_t a1) {
    // 0x133213
    return __asm_iretd(a1);
}

// Address range: 0x13325f - 0x133260
int64_t function_13325f(void) {
    // 0x13325f
    int64_t result; // 0x13325f
    return result;
}

// Address range: 0x133275 - 0x133277
int64_t function_133275(void) {
    // 0x133275
    return function_13325f();
}

// Address range: 0x133293 - 0x1332a9
int64_t function_133293(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x133293
    bool v1; // 0x133293
    if (v1 || false) {
        // 0x1332a1
        return unknown_ffffffffe6a7b9aa();
    }
    char * v2 = (char *)(a3 - 24); // 0x133295
    int64_t result; // 0x133293
    *v2 = *v2 | (char)result;
    int32_t * v3 = (int32_t *)(a4 + 0x1b90847d); // 0x133298
    *v3 = *v3 + (int32_t)result;
    return result;
}

// Address range: 0x1332c1 - 0x1332cc
int64_t function_1332c1(int64_t a1) {
    // 0x1332c1
    return unknown_fffffffff6204bc9(a1);
}

// Address range: 0x1332ef - 0x1332f8
int64_t function_1332ef(int64_t a1, int64_t a2) {
    // 0x1332ef
    int64_t v1; // 0x1332ef
    *(char *)a1 = (char)v1;
    bool v2; // 0x1332ef
    return unknown_1f0605f8((v2 ? -1 : 1) + a1);
}

// Address range: 0x1332f8 - 0x133313
int64_t function_1332f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_fffffffff1ab5b07(); // 0x133301
    int32_t v2 = v1; // 0x133307
    __asm_out_134((int16_t)a3, v2);
    *(int32_t *)v1 = v2;
    return unknown_20dc0d14();
}

// Address range: 0x133336 - 0x13335f
int64_t function_133336(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x133336
    int64_t v1; // 0x133336
    *(char *)a1 = (char)v1;
    bool v2; // 0x133336
    int64_t v3 = unknown_fffffffffa97ba43((v2 ? -1 : 1) + a1) & -0xff01 | (int64_t)&g3; // 0x133343
    int32_t * v4 = (int32_t *)(v3 - 0x1707442e); // 0x133345
    *v4 = 2 * *v4;
    char v5 = *(char *)(v1 + 0x68f33aad); // 0x133351
    return v3 & -256 | (int64_t)((v5 & (char)v3) / 2);
}

// Address range: 0x13337a - 0x133381
int64_t function_13337a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x13337a
    int64_t v1; // 0x13337a
    int32_t * v2 = (int32_t *)(v1 + 6); // 0x13337a
    *v2 = *v2 + (int32_t)v1;
    return a3 & 0xffffffff;
}

// Address range: 0x1333a2 - 0x1333a3
int64_t function_1333a2(int64_t a1) {
    // 0x1333a2
    int64_t result; // 0x1333a2
    return result;
}

// Address range: 0x133402 - 0x133403
int64_t function_133402(int64_t a1) {
    // 0x133402
    int64_t result; // 0x133402
    return result;
}

// Address range: 0x13340b - 0x13342b
int64_t function_13340b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13340b
    int64_t v1; // 0x13340b
    int64_t result = v1;
    uint64_t v2 = -255 * v1;
    *(char *)result = (char)(v2 / 256 ^ result);
    __asm_out((int16_t)a3, (char)result);
    *(char *)(a4 + 0x3d00f4c4) = (char)v1;
    int32_t * v3 = (int32_t *)(a4 + 81); // 0x133426
    *v3 = *v3 + (int32_t)(v2 & 0xff00 | v1 & 0xffff00ff);
    return result;
}

// Address range: 0x13342d - 0x133430
int64_t function_13342d(int64_t a1) {
    // 0x13342d
    int64_t v1; // 0x13342d
    return (v1 ^ v1) & 0xffffffff;
}

// Address range: 0x133459 - 0x133464
int64_t function_133459(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x133459
    int64_t result; // 0x133459
    char * v1 = (char *)(a3 - 77 + result); // 0x133459
    *v1 = *v1 | (char)result;
    char * v2 = (char *)(result - 21); // 0x13345e
    *v2 = *v2 + (char)(a3 / 256);
    return result;
}

// Address range: 0x133490 - 0x1334a5
int64_t function_133490(int64_t a1) {
    // 0x133490
    int64_t v1; // 0x133490
    int64_t v2 = v1;
    *(int32_t *)-0x1bab9863 = *(int32_t *)-0x1bab9863 + (int32_t)a1;
    return (v1 & v2) + v2 & 0xffffffff;
}

// Address range: 0x13359b - 0x13359c
int64_t function_13359b(int64_t a1) {
    // 0x13359b
    int64_t result; // 0x13359b
    return result;
}

// Address range: 0x133607 - 0x13361b
int64_t function_133607(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 0x64ef3f6); // 0x133607
    int64_t v2; // 0x133607
    bool v3; // 0x133607
    *v1 = (char)v3 - (char)v2 + *v1;
    unknown_4148e1a();
    int64_t v4; // 0x133607
    return (int64_t)&v4;
}

// Address range: 0x133641 - 0x133644
int64_t function_133641(int64_t a1) {
    // 0x133641
    int64_t result; // 0x133641
    return result;
}

// Address range: 0x133704 - 0x13370c
int64_t function_133704(void) {
    // 0x133704
    int64_t result; // 0x133704
    __asm_out_135(106, (int32_t)result);
    return result;
}

// Address range: 0x13374f - 0x133756
int64_t function_13374f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x13374f
    bool v1; // 0x13374f
    return __asm_in((int16_t)a3) - (v1 ? -0x5d53fe17 : -0x5d53fe18);
}

// Address range: 0x133785 - 0x133798
int64_t function_133785(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x133785
    int64_t v1; // 0x133785
    *(char *)v1 = 0;
    __asm_int(95);
    int64_t result = unknown_81e0f90(); // 0x13378a
    int32_t * v2 = (int32_t *)(v1 + 0x1e8010d); // 0x13378f
    *v2 = *v2 - (int32_t)a4;
    return result;
}

// Address range: 0x1337be - 0x1337bf
int64_t function_1337be(void) {
    // 0x1337be
    int64_t result; // 0x1337be
    return result;
}

// Address range: 0x133836 - 0x13383e
int64_t function_133836(int64_t a1) {
    // 0x133836
    unknown_ffffffffed91c13c(a1);
    return function_1337be();
}

// Address range: 0x1338e1 - 0x1338e4
int64_t function_1338e1(int64_t a1) {
    // 0x1338e1
    int64_t result; // 0x1338e1
    return result;
}

// Address range: 0x13390a - 0x133925
int64_t function_13390a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    __asm_int(-32);
    unknown_fffffffff3b5ba17();
    char v2 = *(char *)0x6ff21c1e; // 0x133917
    int64_t v3; // 0x13390a
    *(char *)0x6ff21c1e = v2 + (char)((uint64_t)v3 / 256);
    bool v4; // 0x13390a
    *(char *)((v4 ? -1 : 1) + a1) = (char)v1;
    return (v4 ? 0xffffffff : 1) + (int64_t)&v1 & 0xffffffff;
}

// Address range: 0x13398e - 0x133a06
int64_t function_13398e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x13398e
    int64_t v1; // 0x13398e
    if (*(int32_t *)(a1 + 0x1e8862a + a3) + (int32_t)v1 < 0) {
        // 0x1339a5
        return v1 & 0xffffffff;
    }
    int32_t * v2 = (int32_t *)(a1 + 0x15eb08a1); // 0x1339ee
    *v2 = *v2 + (int32_t)a4;
    *(char *)0x108055c02301e857 = (char)((int32_t)v1 / 2);
    int64_t result = __asm_sti(); // 0x133a00
    char * v3 = (char *)(result - 24); // 0x133a01
    *v3 = *v3 | (char)(v1 / 256);
    return result;
}

// Address range: 0x133a08 - 0x133a43
int64_t function_133a08(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x133a08
    __asm_iretd((int64_t)&g9);
    __asm_in_136(-24);
    uint32_t v1 = *(int32_t *)-0x499ca9fc; // 0x133a0d
    uint32_t v2 = v1 + (int32_t)a4; // 0x133a0d
    *(int32_t *)-0x499ca9fc = v2;
    int64_t v3 = unknown_1a2b181f(); // 0x133a19
    __asm_frstor(*(int864_t *)(a3 & -256 | 63));
    int64_t v4; // 0x133a08
    *(int32_t *)0x7b014d00 = *(int32_t *)0x7b014d00 + (int32_t)v4;
    float80_t v5; // 0x133a08
    *(int16_t *)(a4 + 0x2aaaa800) = (int16_t)v5;
    uint32_t v6 = __asm_in_136(-85); // 0x133a3e
    return ((int64_t)v6 + (int64_t)((int32_t)(v3 + 0x80001566 + (int64_t)(v2 < v1)) >> 31)) % 256 | (int64_t)(v6 & -256);
}

// Address range: 0x133a45 - 0x133a48
int64_t function_133a45(int64_t a1) {
    // 0x133a45
    int64_t result; // 0x133a45
    return result;
}

// Address range: 0x133af0 - 0x133af1
int64_t function_133af0(void) {
    // 0x133af0
    int64_t result; // 0x133af0
    return result;
}

// Address range: 0x133b02 - 0x133b46
int64_t function_133b02(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x133b02
    int64_t v1; // 0x133b02
    *(char *)a1 = (char)v1 + 17;
    bool v2; // 0x133b02
    int64_t v3 = (v2 ? -1 : 1) + a1; // 0x133b0a
    unknown_ffffffffa3cb6711(v3);
    int32_t v4 = v3; // 0x133b1f
    *(int32_t *)-0x172d73da = *(int32_t *)-0x172d73da + v4;
    int32_t * v5 = (int32_t *)(a2 + 0x13fa5310 + 4 * v1); // 0x133b25
    *v5 = *v5 + v4;
    char * v6 = (char *)v3; // 0x133b2c
    char v7 = *v6 + (char)((int32_t)v1 >> 31); // 0x133b2c
    *v6 = v7;
    int64_t v8 = 0xffffffe8 * v3 + v1 & 0xffffffff; // 0x133b2e
    if (a4 != 1 && v7 != 0) {
        v8 = function_133af0();
    }
    int64_t v9 = v8 + 0x3930e06f; // 0x133b30
    char * v10 = (char *)(v9 & 0xffffffff); // 0x133b35
    *v10 = *v10 + (char)v9;
    uint32_t v11 = (int32_t)v9; // 0x133b3d
    __asm_out_135(102, v11);
    uint32_t v12 = *(int32_t *)v3; // 0x133b3f
    int32_t v13 = v11 - v12; // 0x133b3f
    return v9 & 0xffff00ff | 256 * (64 * (int64_t)(v13 == 0) | (int64_t)(v12 > v11) | 128 * (int64_t)(v13 < 0) | 16 * (int64_t)(v11 % 16 - v12 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8((char)v13) % 2 == 0)) | 512;
}

// Address range: 0x481e30 - 0x481eff
int64_t function_481e30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3; // 0x481e30
    int32_t * v4 = (int32_t *)(v3 + 81); // 0x481e30
    uint32_t v5 = *v4; // 0x481e30
    uint32_t v6 = (int32_t)a4 % 32; // 0x481e30
    v1 = a2;
    if (v6 != 0) {
        bool v7; // 0x481e30
        *v4 = v5 << v6 | (int32_t)v7 << v6 - 1 | (int32_t)((int64_t)v5 >> (int64_t)(33 - v6));
    }
    int32_t * v8 = (int32_t *)(a3 - 10); // 0x481e33
    *v8 = *v8 ^ (int32_t)v1;
    int64_t result; // 0x481e30
    if ((a4 & -256 | (int64_t)*(char *)&v2) != 1) {
        uint32_t v9 = *(int32_t *)&result; // 0x481e58
        *(int32_t *)result = v9 / 0x100000 | 0x1000 * (int32_t)(((char)v3 ^ -4) < 132) | 0x2000 * v9;
        return result;
    }
    char * v10 = (char *)(v1 + a3); // 0x481e41
    unsigned char v11 = *v10; // 0x481e41
    *v10 = v11 / 128 | 2 * v11;
    return (int64_t)(*(int32_t *)&v1 + (int32_t)result);
}

// Address range: 0x481f78 - 0x481f80
int64_t function_481f78(void) {
    // 0x481f78
    int64_t result; // 0x481f78
    return result;
}

// Address range: 0x481fbf - 0x481fc1
int64_t function_481fbf(int64_t a1) {
    // 0x481fbf
    int64_t result; // 0x481fbf
    return result;
}

// Address range: 0x481fe7 - 0x482069
int64_t function_481fe7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x481fe7
    int64_t v1; // 0x481fe7
    uint64_t v2 = v1;
    int64_t v3 = a2;
    bool v4; // 0x481fe7
    if (v4) {
        char * v5 = (char *)(v2 - 21); // 0x48204c
        *v5 = *v5 + (char)(v2 / 256);
        return a1 + 0x4449200 + (int64_t)((char)a4 < (char)(a3 / 256)) & 0xffffffff;
    }
    int32_t * v6 = (int32_t *)(v2 + 42);
    *v6 = *v6 ^ (int32_t)a4;
    int64_t v7 = __asm_int1(); // 0x48205d
    int64_t v8; // 0x481fe7
    unsigned char v9 = *(char *)&v8; // 0x48205e
    unsigned char v10 = v9 + (char)a3; // 0x48205e
    *(char *)v7 = v10;
    *(char *)a1 = *(char *)&v3;
    return v10 < v9 ? 0x90c5ddff : 0x90c5ddfe;
}

// Address range: 0x482070 - 0x4820f0
int64_t function_482070(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x482070
    int64_t v1; // 0x482070
    int64_t v2 = v1;
    int64_t v3 = a2;
    uint32_t v4 = (int32_t)v2; // 0x48207e
    if (*(int32_t *)0x8b18784c > v4) {
        // 0x482081
        return (int64_t)(0x10000 * v4 / 0x10000);
    }
    // 0x4820aa
    bool v5; // 0x482070
    int64_t v6 = v5 ? 0x8b187848 : 0x8b187850; // 0x48207e
    int32_t * v7 = (int32_t *)v6; // 0x4820aa
    *v7 = *(int32_t *)(a1 - 0x5e4b44e9) ^ (int32_t)v1 ^ *v7;
    unsigned char v8 = (char)v2; // 0x4820ac
    *(char *)v6 = v8;
    int32_t v9 = v8 > 104 ? 0x3a1df416 : 0x3a1df415; // 0x4820af
    if (a4 != 1 == v9 == (int32_t)((v2 + 151) % 256 || v2 & 0xffffff00)) {
        // 0x4820cb
        return v5 ? 0x8b187847 : 0x8b187851;
    }
    // 0x4820b8
    return (int64_t)*(int32_t *)&v3;
}

// Address range: 0x4820f2 - 0x4820f8
int64_t function_4820f2(int64_t a1) {
    // 0x4820f2
    int64_t result; // 0x4820f2
    return result;
}

// Address range: 0x482118 - 0x482119
int64_t function_482118(int64_t a1) {
    // 0x482118
    int64_t result; // 0x482118
    return result;
}

// Address range: 0x48215e - 0x4821d9
int64_t function_48215e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x48215e
    int64_t v1; // 0x48215e
    int32_t v2 = v1; // 0x48215e
    *(int32_t *)0x32483f08dcf71304 = v2;
    bool v3; // 0x48215e
    if (true != !v3) {
        // 0x48216a
        return v1 & 0xffffffff ^ 0x6a6e5a26;
    }
    uint32_t result = v2 - *(int32_t *)(int64_t)*(int32_t *)(a1 + 0xfb2ea00 + v1); // 0x4821d4
    int16_t v4 = a3; // 0x4821d6
    *(int32_t *)a1 = __asm_insd(v4);
    __asm_out(v4, (char)result);
    return result;
}

// Address range: 0x4821e6 - 0x4821e7
int64_t function_4821e6(void) {
    // 0x4821e6
    int64_t result; // 0x4821e6
    return result;
}

// Address range: 0x482215 - 0x482231
int64_t function_482215(int64_t a1) {
    // 0x482215
    int64_t v1; // 0x482215
    char * v2 = (char *)(v1 - 44); // 0x482215
    bool v3; // 0x482215
    *v2 = *v2 + (char)a1 + (char)v3;
    int32_t v4 = v1; // 0x482219
    if ((0x59861867 - v4 & v4) < 0) {
        function_4821e6();
    }
    // 0x482221
    return function_ffffffffc2bf66c7();
}

// Address range: 0x482234 - 0x482236
int64_t function_482234(void) {
    // 0x482234
    int64_t result; // 0x482234
    return result;
}

// Address range: 0x482255 - 0x482258
int64_t function_482255(void) {
    // 0x482255
    int64_t result; // 0x482255
    return result;
}

// Address range: 0x48227d - 0x4822a2
int64_t function_48227d(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x48227d
    int64_t v1; // 0x48227d
    int64_t v2 = v1;
    unsigned char v3 = (char)a3 - *(char *)(a1 + 0x29e35362); // 0x48227d
    __asm_iretd((int64_t)&g9);
    *(int32_t *)v2 = (int32_t)(v2 ^ a2);
    char * v4 = (char *)(a1 + 124); // 0x482291
    *v4 = *v4 | v3;
    *(char *)((a3 & -256 | (int64_t)v3) + 25) = (char)(a3 / 256);
    return 0x7403ca63;
}

// Address range: 0x4822c7 - 0x4822ca
int64_t function_4822c7(void) {
    // 0x4822c7
    return function_4822d9();
}

// Address range: 0x4822cd - 0x4822d9
int64_t function_4822cd(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x4822cd
    int64_t v1; // 0x4822cd
    int32_t v2 = *(int32_t *)(v1 - 114); // 0x4822cd
    bool v3; // 0x4822cd
    *(int64_t *)((int64_t)(v2 + (int32_t)v1 + (int32_t)v3) - 8) = 0x1332ebb0;
    return v1 | a3 % 256;
}

// Address range: 0x4822d9 - 0x4822dc
int64_t function_4822d9(void) {
    // 0x4822d9
    int64_t v1; // 0x4822d9
    return v1 & -151;
}

// Address range: 0x4822fa - 0x4822ff
int64_t function_4822fa(void) {
    // 0x4822fa
    return function_ffffffffb3828c0c();
}

// Address range: 0x48233c - 0x48233f
int64_t function_48233c(int64_t a1) {
    // 0x48233c
    int64_t result; // 0x48233c
    return result;
}

// Address range: 0x48236f - 0x482370
int64_t function_48236f(void) {
    // 0x48236f
    int64_t result; // 0x48236f
    return result;
}

// Address range: 0x482374 - 0x4823e2
int64_t function_482374(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x482374
    int64_t v1; // 0x482374
    *(char *)a1 = (char)(v1 / 256) + (char)a1;
    int32_t * v2 = (int32_t *)(a4 - 37); // 0x482376
    uint32_t v3 = *v2; // 0x482376
    int32_t v4 = v3 + 64; // 0x482376
    *v2 = v4;
    if (v4 == 0) {
        char * v5 = (char *)(a4 + 59); // 0x48237e
        *v5 = (char)(v3 < 0xffffffc0) + (char)a3 + *v5;
        return __asm_wait();
    }
    int32_t * v6 = (int32_t *)(a2 + 74); // 0x4823c6
    uint32_t v7 = *v6; // 0x4823c6
    int32_t v8 = v3 < 0xffffffc0; // 0x4823c6
    uint32_t v9 = v8 + (int32_t)v1; // 0x4823c6
    int32_t v10 = v7 - v9; // 0x4823c6
    *v6 = v10;
    int64_t v11; // 0x482374
    if (!((v3 < 0xffffffc0 ? v9 != -1 || v7 < v10 - v8 : v7 < v9))) {
        uint64_t v12 = v11;
        __asm_out_135(-106, (int32_t)v12);
        char v13 = *(char *)(a4 + 0x23df4ae9); // 0x4823b0
        return 256 * (int64_t)(v13 + (char)(v12 / 256)) | v12 & -0xff01;
    }
    uint32_t v14 = -0x70dd00c5 * *(int32_t *)&v11; // 0x4823cb
    int64_t v15 = v14; // 0x4823cb
    v11 = v15;
    int32_t v16 = *(int32_t *)(v1 + 0x53e28a6a + 2 * v1); // 0x4823d1
    int64_t result = v15; // 0x4823db
    if (((v16 - v14 ^ v16) & (v16 ^ v14)) < 0) {
        result = function_48236f();
        v11 = result;
    }
    // 0x4823dd
    return result;
}

// Address range: 0x4823f5 - 0x4823f8
int64_t function_4823f5(void) {
    // 0x4823f5
    int64_t result; // 0x4823f5
    return result;
}

// Address range: 0x482402 - 0x482403
int64_t function_482402(void) {
    // 0x482402
    int64_t result; // 0x482402
    return result;
}

// Address range: 0x482438 - 0x48243d
int64_t function_482438(void) {
    // 0x482438
    return function_ffffffffe0583a94();
}

// Address range: 0x482443 - 0x482455
int64_t function_482443(int64_t a1) {
    // 0x482443
    int64_t result; // 0x482443
    char * v1 = (char *)(result + 58); // 0x482449
    *v1 = 2 * *v1;
    unsigned char v2 = *(char *)-0x122d99d8; // 0x48244c
    *(char *)-0x122d99d8 = v2 / 128 | 2 * v2;
    return result;
}

// Address range: 0x482475 - 0x482478
int64_t function_482475(int64_t a1) {
    // 0x482475
    int64_t result; // 0x482475
    return result;
}

// Address range: 0x48247d - 0x482480
int64_t function_48247d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x48247d
    int64_t v1; // 0x48247d
    return function_482495(a1, a2, v1 & 0xffffffff, v1);
}

// Address range: 0x482491 - 0x482494
int64_t function_482491(int64_t a1) {
    // 0x482491
    int64_t result; // 0x482491
    return result;
}

// Address range: 0x482495 - 0x48249f
int64_t function_482495(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x482495
    int32_t v1; // 0x482495
    int64_t result; // 0x482495
    *(int32_t *)result = (int32_t)(int64_t)&v1;
    int64_t v2; // 0x482495
    uint64_t v3 = v2;
    *(char *)v3 = *(char *)&v2 + (char)(v3 / 256);
    return result;
}

// Address range: 0x4824c3 - 0x4824d1
int64_t function_4824c3(void) {
    // 0x4824c3
    int64_t v1; // 0x4824c3
    uint64_t v2 = v1;
    unsigned char v3 = (char)v2; // 0x4824c3
    unsigned char v4 = (char)(v2 / 256) + v3; // 0x4824c3
    if (v4 < v3 || v4 == 0) {
        // 0x4824cf
        return ((int64_t)v4 + 133 + (int64_t)(v4 < v3)) % 256 | v2 & -256;
    }
    // 0x4824c7
    return function_482529(10);
}

// Address range: 0x4824df - 0x4824e0
int64_t function_4824df(void) {
    // 0x4824df
    int64_t result; // 0x4824df
    return result;
}

// Address range: 0x482518 - 0x482529
int64_t function_482518(void) {
    // 0x482518
    int64_t v1; // 0x482518
    __asm_out_137(-126, (char)v1);
    return v1 & 0x6985396c ^ 0x6464038c;
}

// Address range: 0x482529 - 0x48252a
int64_t function_482529(int64_t a1) {
    // 0x482529
    int64_t result; // 0x482529
    return result;
}

// Address range: 0x482630 - 0x482636
int64_t function_482630(int64_t a1, int64_t a2) {
    // 0x482630
    int32_t v1; // 0x482630
    *(int32_t *)a1 = (int32_t)(int64_t)&v1;
    return a2 & 0xffffffff;
}

// Address range: 0x482638 - 0x482643
int64_t function_482638(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x482638
    *(char *)(a4 - 0x6aa3fd21) = (char)a3;
    int64_t v1; // 0x482638
    return v1 & -256 | (int64_t)__asm_in_138(34);
}

// Address range: 0x482644 - 0x482647
int64_t function_482644(void) {
    // 0x482644
    int64_t result; // 0x482644
    return result;
}

// Address range: 0x48265d - 0x48265e
int64_t function_48265d(void) {
    // 0x48265d
    int64_t result; // 0x48265d
    return result;
}

// Address range: 0x4826af - 0x4826b2
int64_t function_4826af(void) {
    // 0x4826af
    return function_48265d();
}

// Address range: 0x4826b8 - 0x4826bd
int64_t function_4826b8(void) {
    // 0x4826b8
    return function_ffffffffbf57e0bd();
}

// Address range: 0x4826ce - 0x482763
int64_t function_4826ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t result; // 0x4826ce
    bool v2; // 0x4826ce
    if (v2 || v2) {
        char * v3 = (char *)(2 * result); // 0x4826d2
        *v3 = *v3 - (char)a1;
        return result;
    }
    int32_t * v4 = (int32_t *)(result + 41); // 0x4826e6
    uint32_t v5 = *v4; // 0x4826e6
    uint32_t v6 = (int32_t)result; // 0x4826e6
    int32_t v7 = v5 - v6; // 0x4826e6
    unsigned char v8 = llvm_ctpop_i8((char)v7); // 0x4826e6
    *v4 = v7;
    if (v8 % 2 == 0) {
        int32_t * v9 = (int32_t *)(v1 + 118); // 0x4826eb
        *v9 = (int32_t)(v5 < v6) + (int32_t)result + *v9;
        return result;
    }
    // 0x4826de
    __asm_out_135(63, (int32_t)result);
    if (((v7 ^ v5) & (v5 ^ v6)) >= 0) {
        // 0x4826e2
        return result;
    }
    // 0x48275d
    __asm_outsb((int16_t)a3, *(char *)&v1);
    int64_t v10; // bp-8, 0x4826ce
    *(int32_t *)(result - 51) = (int32_t)(int64_t)&v10;
    return result;
}

// Address range: 0x4827a9 - 0x4827b0
int64_t function_4827a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4827a9
    int64_t result; // 0x4827a9
    return result;
}

// Address range: 0x482833 - 0x482844
int64_t function_482833(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x482833
    int64_t v1; // 0x482833
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a1 + (int64_t)&g1); // 0x482833
    *v3 = *v3 ^ (int32_t)a4;
    return v2 & -256 | (int64_t)(*(char *)(v1 + 0x420ccf71) + (char)v2);
}

// Address range: 0x482848 - 0x482851
int64_t function_482848(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a1 + 0x70b6602); // 0x482848
    bool v2; // 0x482848
    *v1 = (char)v2 - (char)a3 + *v1;
    int64_t result; // 0x482848
    return result;
}

// Address range: 0x482851 - 0x482855
int64_t function_482851(int64_t a1, int64_t a2) {
    // 0x482851
    int64_t result; // 0x482851
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x48285a - 0x482871
int64_t function_48285a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x48285a
    int64_t v1; // 0x48285a
    unsigned char v2 = (char)v1;
    unsigned char v3 = (char)v1 + v2; // 0x48285c
    *(char *)a4 = v3;
    int32_t * v4 = (int32_t *)(a3 + 49); // 0x48285e
    *v4 = (int32_t)(v3 < v2) - (int32_t)a1 + *v4;
    return v1 ^ 1;
}

// Address range: 0x482879 - 0x48287c
int64_t function_482879(void) {
    // 0x482879
    int64_t result; // 0x482879
    return result;
}

// Address range: 0x4828a0 - 0x4828a3
int64_t function_4828a0(int64_t a1) {
    // 0x4828a0
    int64_t result; // 0x4828a0
    return result;
}

// Address range: 0x4828a5 - 0x4828b3
int64_t function_4828a5(int64_t a1) {
    // 0x4828a5
    int64_t v1; // 0x4828a5
    int32_t * v2 = (int32_t *)(v1 + 0x44e1d6e); // 0x4828a5
    uint32_t v3 = *v2; // 0x4828a5
    *v2 = v3 / 2 | 0x80000000 * v3;
    return v1 & 0xffffffff ^ 0x7da4ad21;
}

// Address range: 0x48292e - 0x482933
int64_t function_48292e(void) {
    // 0x48292e
    return function_49a28a7b();
}

// Address range: 0x482934 - 0x48293f
int64_t function_482934(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x482934
    return function_ffffffff9467b253();
}

// Address range: 0x4829a4 - 0x4829ae
int64_t function_4829a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t result = __asm_in_136(56); // 0x4829a4
    *(char *)(a2 - 72) = (char)a3;
    return result;
}

// Address range: 0x4829af - 0x4829b0
int64_t function_4829af(void) {
    // 0x4829af
    int64_t result; // 0x4829af
    return result;
}

// Address range: 0x4829b1 - 0x482a30
int64_t function_4829b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7) {
    // 0x4829b1
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x4829b1
    int32_t * v2 = (int32_t *)(v1 - 47); // 0x4829b2
    *v2 = -1 - *v2;
    __asm_in_136(78);
    bool v3; // 0x4829b1
    if (!v3 && true) {
        // 0x4829c0
        return a1 & 0xffff00ff | (int64_t)&g8 & -0xff01 | a3 & (int64_t)&g8 & 0xff00;
    }
    char * v4 = (char *)(a3 + 0x6dda3cd5); // 0x482a00
    char v5 = *v4; // 0x482a00
    char v6 = a3; // 0x482a00
    char v7 = v5 + v6; // 0x482a00
    *v4 = v7;
    if (((v7 ^ v5) & (v7 ^ v6)) < 0) {
        // 0x482a08
        return a2 & 0xffffffff;
    }
    if (v7 != 0) {
        function_4829af();
    }
    // 0x482a0d
    return function_ffffffff99418d77();
}

// Address range: 0x482b30 - 0x482ce5
int64_t function_482b30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x482b30
    int64_t v1; // 0x482b30
    int64_t v2 = v1;
    int64_t v3 = a4;
    int64_t v4 = a8;
    *(int32_t *)v2 = (int32_t)(v2 | a3);
    int64_t v5 = (int64_t)&v4; // 0x482b39
    *(int32_t *)a1 = *(int32_t *)a7;
    bool v6; // 0x482b30
    __asm_outsb((int16_t)a3, *(char *)((v6 ? -4 : 4) + a7));
    int64_t result = v5 + 0x96a3a809 + ((int32_t)v5 < 0x695c57f7 ? 0xf379e493 : 0xf379e494) & 0xfffffffd; // 0x482b42
    int64_t v7 = a3 & -256 | 27; // 0x482b4a
    int32_t * v8 = (int32_t *)(v7 + 20); // 0x482b52
    int32_t v9 = *v8; // 0x482b52
    uint32_t v10 = (int32_t)v7; // 0x482b52
    *v8 = v9 + v10;
    if (-1 - v9 >= v10) {
        // 0x482b58
        return result;
    }
    // 0x482b99
    *(char *)v3 = *(char *)&v3 + -1 - (char)v2;
    return result;
}

// Address range: 0x482cfc - 0x482cff
int64_t function_482cfc(int64_t a1) {
    // 0x482cfc
    int64_t result; // 0x482cfc
    return result;
}

// Address range: 0x482d06 - 0x482d0a
int64_t function_482d06(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x482d06
    int64_t result; // 0x482d06
    return result;
}

// Address range: 0x482d3b - 0x482d4f
int64_t function_482d3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x482d3b
    int64_t v1; // 0x482d3b
    int64_t v2 = v1;
    char * v3 = (char *)(v1 + 18); // 0x482d3b
    *v3 = *v3 & (char)v1;
    int64_t v4; // 0x482d3b
    *(char *)a4 = *(char *)&v4 | (char)a4;
    return ((v2 + 129) % 256 | v2 & 0xffffff00) + 0x70def74e & 0xffffffff;
}

// Address range: 0x482d53 - 0x482d58
int64_t function_482d53(void) {
    // 0x482d53
    int64_t result; // 0x482d53
    return result;
}

// Address range: 0x482df9 - 0x482dfa
int64_t function_482df9(void) {
    // 0x482df9
    int64_t result; // 0x482df9
    return result;
}
