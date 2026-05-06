/*
 * Targeted RetDec C for native executable gap queue batch 1008.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1be3ce-0x1be5ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1be5ce-0x1be7ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1bebce-0x1bedce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1bedce-0x1befce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1befce-0x1bf1ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1bf1ce-0x1bf3ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x29311f-0x29331f rank=- name=- kind=- bytes=- uncovered=-
 *   0x29331f-0x29351f rank=- name=- kind=- bytes=- uncovered=-
 *   0x29351f-0x29371f rank=- name=- kind=- bytes=- uncovered=-
 *   0x29371f-0x29391f rank=- name=- kind=- bytes=- uncovered=-
 *   0x29391f-0x293b1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x293d1f-0x293f1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x293f1f-0x29411f rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c33dd-0x3c35dd rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c35dd-0x3c37dd rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c3bdd-0x3c3ddd rank=- name=- kind=- bytes=- uncovered=-
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
extern int g6;
extern int g7;
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

int64_t function_1651fc92();
int64_t function_1be3ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1be442(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1be458(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1be559(void);
int64_t function_1be573(int64_t a1);
int64_t function_1be589(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1be5ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1be5e4(int64_t a1, int64_t a2);
int64_t function_1be5eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1be691(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1be6b8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1be6e7(void);
int64_t function_1be786(void);
int64_t function_1beb84();
int64_t function_1bebce(void);
int64_t function_1bebcf(int64_t a1);
int64_t function_1bebdb(int64_t a1);
int64_t function_1bebe9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1bec45(void);
int64_t function_1bec5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bec6c(int64_t a1, int64_t a2);
int64_t function_1bec6e(void);
int64_t function_1bec73(int64_t a1);
int64_t function_1bec87(void);
int64_t function_1bec9c(void);
int64_t function_1bed3a(void);
int64_t function_1bed79(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1beded(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bedfc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bee0c(int64_t a1);
int64_t function_1bee88(void);
int64_t function_1beeb5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1beee4(int64_t a1);
int64_t function_1bef2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bef3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bef5b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1befcc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1befff(void);
int64_t function_1bf05f(void);
int64_t function_1bf064(void);
int64_t function_1bf0c8(void);
int64_t function_1bf0da(void);
int64_t function_1bf0fa(void);
int64_t function_1bf105(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bf157(void);
int64_t function_1bf180(void);
int64_t function_1bf196(void);
int64_t function_1bf1a8(void);
int64_t function_1bf1c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bf220(void);
int64_t function_1bf239(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bf365(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bf3a4(int64_t a1);
int64_t function_225100c();
int64_t function_29311f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29323c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29326c(int64_t a1);
int64_t function_293408(void);
int64_t function_293437(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2934b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_293557(void);
int64_t function_293586(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_293594(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2935bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_293732(int64_t a1);
int64_t function_293740(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2937d8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2938b8(void);
int64_t function_2938f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2938f8(void);
int64_t function_29393a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_29395f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2939b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2939d9(int64_t a1);
int64_t function_293a0f(int64_t a1);
int64_t function_293a12(void);
int64_t function_293a44(void);
int64_t function_293a53(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_293a65(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_293d0c();
int64_t function_293d1f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_293d67(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_293db9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_293dc6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_293e5b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_293e5f(void);
int64_t function_293e83(void);
int64_t function_293f28(void);
int64_t function_293f44(int64_t a1, int64_t a2, int64_t a3);
int64_t function_293f70(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_293fc3(void);
int64_t function_293fe2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_294059(int64_t a1, int64_t a2);
int64_t function_294093(void);
int64_t function_2940bd(void);
int64_t function_362a90();
int64_t function_3c33dd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3c33e4(void);
int64_t function_3c340d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c3424(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3c343b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_3c3549(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3c354b(void);
int64_t function_3c354d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c357f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c35ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c3674(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3c36a3(void);
int64_t function_3c36b3(void);
int64_t function_3c36c3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3c3bdc();
int64_t function_3c3bdd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c3c21(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3c3ca4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c3cd6(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_3c3cf0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3c3d1f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3c3d27(void);
int64_t function_3c3d3b(void);
int64_t function_490f1397();
int64_t function_536735f5();
int64_t function_65fb05ad();
int64_t function_6639085();
int64_t function_ffffffffd0b9dac1();
int64_t function_ffffffffe00f76e2();
int64_t function_ffffffffe841cded();
int64_t function_ffffffffe86efc2f();
int64_t function_ffffffffe8aa3ac5();
int64_t unknown_10c8485();
int64_t unknown_1119c364();
int64_t unknown_1db24736();
int64_t unknown_22c4c3cf();
int64_t unknown_30f89e93();
int64_t unknown_3985e7de();
int64_t unknown_3a30b2d6();
int64_t unknown_3ca091ab();
int64_t unknown_44266c68();
int64_t unknown_45b51f98();
int64_t unknown_6077337e();
int64_t unknown_689fc4a();
int64_t unknown_68b64b1a();
int64_t unknown_6f35f50c();
int64_t unknown_7c77067();
int64_t unknown_7db78639();
int64_t unknown_938df48();
int64_t unknown_a1d4766();
int64_t unknown_acec977();
int64_t unknown_ffffffff93609c8f();
int64_t unknown_ffffffff9426ebd7();
int64_t unknown_ffffffff9e1c8758();
int64_t unknown_ffffffffa53666ea();
int64_t unknown_ffffffffb2017755();
int64_t unknown_ffffffffb23fc4b2();
int64_t unknown_ffffffffb251810b();
int64_t unknown_ffffffffbb2fce8b();
int64_t unknown_ffffffffc01217bf();
int64_t unknown_ffffffffcad5cd5e();
int64_t unknown_ffffffffd79ab0ca();
int64_t unknown_ffffffffd9060246();
int64_t unknown_fffffffffed36735();

// Address range: 0x1be3ce - 0x1be440
int64_t function_1be3ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1be3ce
    int64_t v1; // 0x1be3ce
    int64_t v2 = v1;
    if (a4 != 1) {
        // 0x1be438
        return (v2 + 132) % 256 | v2 & -256;
    }
    char v3 = v2; // 0x1be3d0
    *(char *)-0x639f91b8fe178c4a = v3;
    __asm_out(81, v3);
    int32_t * v4 = (int32_t *)(a2 - 0x17ff66ae + 8 * v1); // 0x1be3e1
    *v4 = *v4 >> 1;
    return 2 * v2 & 254 | v2 & -256;
}

// Address range: 0x1be442 - 0x1be458
int64_t function_1be442(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1be442
    unknown_689fc4a();
    float80_t v1; // 0x1be442
    *(int16_t *)(a4 - 8) = (int16_t)v1;
    *(int32_t *)0x19e401e89205fedd = (int32_t)a5;
    return a5 & 0xffffffff;
}

// Address range: 0x1be458 - 0x1be478
int64_t function_1be458(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1be458
    int64_t v1; // 0x1be458
    char * v2 = (char *)(v1 + 22); // 0x1be458
    *v2 = *v2 + (char)v1;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v3; // 0x1be458
    uint32_t v4 = *(int32_t *)&v3 + (int32_t)a1; // 0x1be460
    unknown_44266c68(v4);
    int64_t v5; // 0x1be458
    *(char *)(int64_t)v4 = *(char *)&v5;
    __asm_int(76);
    return unknown_acec977();
}

// Address range: 0x1be559 - 0x1be55a
int64_t function_1be559(void) {
    // 0x1be559
    int64_t result; // 0x1be559
    return result;
}

// Address range: 0x1be573 - 0x1be576
int64_t function_1be573(int64_t a1) {
    // 0x1be573
    int64_t result; // 0x1be573
    return result;
}

// Address range: 0x1be589 - 0x1be59b
int64_t function_1be589(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1be589
    unknown_ffffffff93609c8f();
    unknown_45b51f98();
    return function_1be5e4(a1, a2);
}

// Address range: 0x1be5ae - 0x1be5c1
int64_t function_1be5ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1be5ae
    int64_t v1; // 0x1be5ae
    bool v2; // 0x1be5ae
    uint64_t v3 = v1 + a4 + (int64_t)v2; // 0x1be5ae
    int32_t * v4 = (int32_t *)(a1 - 0x32fe17c6); // 0x1be5b0
    uint32_t v5 = *v4; // 0x1be5b0
    *v4 = v5 + 115;
    uint32_t v6 = (int32_t)v3 % 32; // 0x1be5b7
    bool v7 = v5 < 0xffffff8d; // 0x1be5b7
    if (v6 != 0) {
        int32_t * v8 = (int32_t *)(v1 + 76); // 0x1be5b7
        int32_t v9 = *v8; // 0x1be5b7
        *v8 = v9 << v6;
        v7 = (0x80000000 >> v6 - 1 & v9) != 0;
    }
    int32_t * v10 = (int32_t *)(v3 % 256 | a4 & -256); // 0x1be5ba
    *v10 = (int32_t)v7 - (int32_t)a3 + *v10;
    return function_ffffffffe86efc2f();
}

// Address range: 0x1be5e4 - 0x1be5ea
int64_t function_1be5e4(int64_t a1, int64_t a2) {
    // 0x1be5e4
    bool v1; // 0x1be5e4
    int64_t result = (a2 - (int64_t)(bool)v1) % 256 | a2 & 0xffffff00; // 0x1be5e5
    char * v2 = (char *)result; // 0x1be5e7
    *v2 = *v2 + 42;
    return result;
}

// Address range: 0x1be5eb - 0x1be5f8
int64_t function_1be5eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1be5eb
    int64_t v1; // 0x1be5eb
    char * v2 = (char *)(v1 - 0x3bfe1800); // 0x1be5eb
    *v2 = *v2 + (char)v1;
    char * v3 = (char *)(a1 + 110); // 0x1be5f2
    *v3 = *v3 + (char)a4;
    return v1 & -256 | (int64_t)__asm_in_135((int16_t)a3);
}

// Address range: 0x1be691 - 0x1be6ab
int64_t function_1be691(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1be691
    int64_t v1; // 0x1be691
    *(char *)0x4dd8f27101e80107 = (char)v1;
    return unknown_3ca091ab();
}

// Address range: 0x1be6b8 - 0x1be6bf
int64_t function_1be6b8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1be6b8
    return function_ffffffffd0b9dac1();
}

// Address range: 0x1be6e7 - 0x1be6e8
int64_t function_1be6e7(void) {
    // 0x1be6e7
    int64_t result; // 0x1be6e7
    return result;
}

// Address range: 0x1be786 - 0x1be787
int64_t function_1be786(void) {
    // 0x1be786
    int64_t result; // 0x1be786
    return result;
}

// Address range: 0x1bebce - 0x1bebcf
int64_t function_1bebce(void) {
    // 0x1bebce
    int64_t result; // 0x1bebce
    return result;
}

// Address range: 0x1bebcf - 0x1bebd8
int64_t function_1bebcf(int64_t a1) {
    // 0x1bebcf
    return unknown_3a30b2d6(a1);
}

// Address range: 0x1bebdb - 0x1bebe9
int64_t function_1bebdb(int64_t a1) {
    // 0x1bebdb
    int64_t v1; // 0x1bebdb
    int64_t result = v1 & -256 | (int64_t)*(char *)0x1f0e3101e88b176b; // 0x1bebe4
    bool v2; // 0x1bebdb
    if (v2) {
        result = function_1beb84();
    }
    // 0x1bebe6
    return result;
}

// Address range: 0x1bebe9 - 0x1bec3e
int64_t function_1bebe9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x1bebe9
    char * v3 = (char *)(v2 - 0x17081b27); // 0x1bebe9
    bool v4; // 0x1bebe9
    *v3 = (char)v4 - (char)v2 + *v3;
    uint32_t v5 = (int32_t)a1; // 0x1bebef
    uint32_t v6 = (int32_t)a4 + v5; // 0x1bebef
    if (v6 < v5 || v6 == 0) {
        // 0x1bec30
        int64_t v7; // 0x1bebe9
        int64_t v8 = v7;
        *(char *)v8 = *(char *)&v7 + (char)v8;
        return __asm_iretd(v6);
    }
    int64_t v9 = v6; // 0x1bebef
    int32_t * v10 = (int32_t *)(v2 + 0x129108f); // 0x1bebf7
    *v10 = *v10 + (int32_t)v2;
    unsigned char v11 = *(char *)v9; // 0x1bebfe
    int64_t v12 = v4 ? -1 : 1; // 0x1bebfe
    int64_t v13 = v12 + v9; // 0x1bebfe
    int64_t v14 = v1 + v12; // 0x1bebfe
    int64_t v15 = unknown_ffffffff9426ebd7(v13, v14); // 0x1bebff
    int64_t v16; // 0x1bebe9
    char * v17 = (char *)(4 * v2 - 0x2a4bb9ff + (int64_t)&v16); // 0x1bec04
    *v17 = (char)(*(char *)&v1 < v11) + (char)a5 + *v17;
    *(int16_t *)0x1e5aa112 = (int16_t)v2;
    *(int32_t *)v13 = *(int32_t *)v14;
    char * v18 = (char *)v15; // 0x1bec12
    char v19 = v15; // 0x1bec12
    *v18 = *v18 + v19;
    char * v20 = (char *)a5; // 0x1bec14
    unsigned char v21 = *v20; // 0x1bec14
    unsigned char v22 = v21 + v19; // 0x1bec14
    *v20 = v22;
    *(char *)0x57c0e1f = *(char *)0x57c0e1f + (char)(v2 / 256);
    return (v15 + 115 + (int64_t)(v22 < v21)) % 256 | v15 & -256;
}

// Address range: 0x1bec45 - 0x1bec46
int64_t function_1bec45(void) {
    // 0x1bec45
    int64_t result; // 0x1bec45
    return result;
}

// Address range: 0x1bec5f - 0x1bec6a
int64_t function_1bec5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bec5f
    int64_t result; // 0x1bec5f
    return result;
}

// Address range: 0x1bec6c - 0x1bec6d
int64_t function_1bec6c(int64_t a1, int64_t a2) {
    // 0x1bec6c
    int64_t result; // 0x1bec6c
    return result;
}

// Address range: 0x1bec6e - 0x1bec72
int64_t function_1bec6e(void) {
    // 0x1bec6e
    int64_t result; // 0x1bec6e
    return result;
}

// Address range: 0x1bec73 - 0x1bec77
int64_t function_1bec73(int64_t a1) {
    // 0x1bec73
    int64_t result; // 0x1bec73
    return result;
}

// Address range: 0x1bec87 - 0x1bec8b
int64_t function_1bec87(void) {
    // 0x1bec87
    int64_t result; // 0x1bec87
    return result;
}

// Address range: 0x1bec9c - 0x1bec9d
int64_t function_1bec9c(void) {
    // 0x1bec9c
    int64_t result; // 0x1bec9c
    return result;
}

// Address range: 0x1bed3a - 0x1bed3b
int64_t function_1bed3a(void) {
    // 0x1bed3a
    int64_t result; // 0x1bed3a
    return result;
}

// Address range: 0x1bed79 - 0x1bed8d
int64_t function_1bed79(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bed79
    int64_t v1; // 0x1bed79
    uint64_t v2 = v1;
    char * v3 = (char *)(v1 - 50 + 4 * v2); // 0x1bed79
    *v3 = *v3 + (char)v1;
    *(char *)0x1e974d84 = *(char *)0x1e974d84 + (char)(v2 / 256);
    return function_1bed3a();
}

// Address range: 0x1beded - 0x1bedfc
int64_t function_1beded(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1beded
    int64_t v1; // 0x1beded
    int64_t v2 = v1;
    *(char *)a2 = (char)(v2 | v1);
    int32_t * v3 = (int32_t *)(a4 + 89); // 0x1bedf5
    *v3 = *v3 + (int32_t)a4;
    return v2 & -256 | (int64_t)((char)v2 - *(char *)(a3 - 0x17e3fb10));
}

// Address range: 0x1bedfc - 0x1bee0b
int64_t function_1bedfc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bedfc
    int64_t v1; // 0x1bedfc
    int32_t * v2 = (int32_t *)(v1 - 0x67498570); // 0x1bee00
    *v2 = *v2 + (int32_t)v1;
    return function_ffffffffe841cded();
}

// Address range: 0x1bee0c - 0x1bee0f
int64_t function_1bee0c(int64_t a1) {
    // 0x1bee0c
    int64_t result; // 0x1bee0c
    return result;
}

// Address range: 0x1bee88 - 0x1bee89
int64_t function_1bee88(void) {
    // 0x1bee88
    int64_t result; // 0x1bee88
    return result;
}

// Address range: 0x1beeb5 - 0x1beed9
int64_t function_1beeb5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1; // 0x1beeb5
    if (a4 != 1) {
        v1 = function_1bee88();
    }
    uint64_t v2 = (0x100000000 * v1 >> 32) * (0x100000000 * a3 >> 32); // 0x1beeb7
    int64_t v3 = unknown_ffffffffc01217bf(); // 0x1beeb9
    int64_t result = (v3 + 47) % 256 | v3 & -256; // 0x1beec3
    char * v4 = (char *)(a1 - 0x17385efe); // 0x1beec5
    *v4 = *v4 + 1;
    int16_t v5 = 256 * (v2 / 0x20000000000 % 128 | 128 * (int64_t)((v3 & 256) != 0)) | v2 / 0x100000000 % 256; // 0x1beed1
    __asm_out_134(v5, (int32_t)result);
    *(char *)a1 = __asm_insb(v5);
    return result;
}

// Address range: 0x1beee4 - 0x1beee5
int64_t function_1beee4(int64_t a1) {
    // 0x1beee4
    int64_t result; // 0x1beee4
    return result;
}

// Address range: 0x1bef2b - 0x1bef3a
int64_t function_1bef2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bef2b
    int64_t v1; // 0x1bef2b
    *(char *)(a4 & 0xffffffff) = (char)(v1 / 256) + (char)v1;
    __asm_in(58);
    unknown_7db78639();
    return __asm_sti();
}

// Address range: 0x1bef3e - 0x1bef47
int64_t function_1bef3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bef3e
    int64_t result; // 0x1bef3e
    return result;
}

// Address range: 0x1bef5b - 0x1befcc
int64_t function_1bef5b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a3;
    *(int32_t *)-0x62559c98c3f63082 = (int32_t)unknown_a1d4766();
    unknown_6077337e();
    *(int32_t *)a3 = (int32_t)(a3 | a1);
    int64_t v2; // 0x1bef5b
    char * v3 = (char *)(v2 - 128); // 0x1bef81
    *v3 = *v3 + (char)(a4 / 256);
    *(int32_t *)a1 = __asm_insd((int16_t)v1);
    int64_t v4 = unknown_ffffffffbb2fce8b(); // 0x1bef85
    char v5 = __asm_in(0); // 0x1bef8e
    int32_t v6 = *(int32_t *)&v1; // 0x1bef95
    *(int32_t *)v1 = v6 + (int32_t)(v4 & 0xffff0000 | (int64_t)v5 | (v4 & 0xff00) + v4 & 0xff00);
    bool v7; // 0x1bef5b
    int64_t v8 = (v7 ? -1 : 1) + a2; // 0x1bef97
    int64_t v9 = 65; // bp-8, 0x1bef9a
    uint32_t v10 = *(int32_t *)(v8 - 91); // 0x1bef9d
    int64_t v11 = __asm_wait((int32_t)a1, v8); // 0x1befa0
    uint32_t v12 = *(int32_t *)(v2 + 69); // 0x1befa3
    uint64_t v13 = ((v11 + 58 + (int64_t)(v10 < (int32_t)(int64_t)&v9)) % 256 | v11 & 0xffffff00 | 0x100000000 * v1) / (int64_t)v12; // 0x1befa3
    int64_t result = v13 & 0xffffffff; // 0x1befa3
    int32_t * v14 = (int32_t *)result; // 0x1befa6
    *v14 = *v14 + (int32_t)v13;
    return result;
}

// Address range: 0x1befcc - 0x1befdf
int64_t function_1befcc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1befcc
    int64_t result; // 0x1befcc
    *(char *)a1 = (char)result;
    char * v1 = (char *)(result + 0x7a2913d7); // 0x1befce
    *v1 = *v1 / 16;
    return result;
}

// Address range: 0x1befff - 0x1bf000
int64_t function_1befff(void) {
    // 0x1befff
    int64_t result; // 0x1befff
    return result;
}

// Address range: 0x1bf05f - 0x1bf061
int64_t function_1bf05f(void) {
    // 0x1bf05f
    return function_1befff();
}

// Address range: 0x1bf064 - 0x1bf065
int64_t function_1bf064(void) {
    // 0x1bf064
    int64_t result; // 0x1bf064
    return result;
}

// Address range: 0x1bf0c8 - 0x1bf0c9
int64_t function_1bf0c8(void) {
    // 0x1bf0c8
    int64_t result; // 0x1bf0c8
    return result;
}

// Address range: 0x1bf0da - 0x1bf0db
int64_t function_1bf0da(void) {
    // 0x1bf0da
    int64_t result; // 0x1bf0da
    return result;
}

// Address range: 0x1bf0fa - 0x1bf103
int64_t function_1bf0fa(void) {
    // 0x1bf0fa
    return function_1651fc92();
}

// Address range: 0x1bf105 - 0x1bf10b
int64_t function_1bf105(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bf105
    float80_t v1; // 0x1bf105
    *(float32_t *)a2 = (float32_t)v1;
    return function_1bf0c8();
}

// Address range: 0x1bf157 - 0x1bf15e
int64_t function_1bf157(void) {
    // 0x1bf157
    int64_t v1; // 0x1bf157
    bool v2; // 0x1bf157
    if (!v2) {
        v1 = function_1bf0da();
    }
    // 0x1bf159
    return v1 & -256 | (int64_t)__asm_in(72);
}

// Address range: 0x1bf180 - 0x1bf181
int64_t function_1bf180(void) {
    // 0x1bf180
    int64_t result; // 0x1bf180
    return result;
}

// Address range: 0x1bf196 - 0x1bf198
int64_t function_1bf196(void) {
    // 0x1bf196
    return function_1bf180();
}

// Address range: 0x1bf1a8 - 0x1bf1a9
int64_t function_1bf1a8(void) {
    // 0x1bf1a8
    int64_t result; // 0x1bf1a8
    return result;
}

// Address range: 0x1bf1c1 - 0x1bf20b
int64_t function_1bf1c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = __asm_in_136(0); // 0x1bf1ce
    char * v2 = (char *)(((a3 & 0xffff00ff | (int64_t)(int32_t)&g6) + 0x68144c5f & 0xffffffff) + 7); // 0x1bf1dd
    *v2 = *v2 + 44;
    int64_t v3; // 0x1bf1c1
    *(char *)a1 = *(char *)&v3;
    bool v4; // 0x1bf1c1
    int64_t v5 = v4 ? -1 : 1; // 0x1bf1e1
    uint32_t v6 = v1 - *(int32_t *)((int64_t)v1 + 0x3daa9600); // 0x1bf1e2
    int32_t * v7 = (int32_t *)(a2 + 126 + v5); // 0x1bf1e8
    *v7 = *v7 + (int32_t)(v5 + a1);
    int32_t v8 = *(int32_t *)(int64_t)v6 + v6; // 0x1bf1f5
    int64_t v9 = (v8 + 156) % 256 | v8 & -256; // 0x1bf201
    if (a4 == 0) {
        v9 = function_1bf1a8();
    }
    // 0x1bf203
    return (v9 & 0xffffffff) * (int64_t)*(int32_t *)0x13d0014 & 0xffffffff;
}

// Address range: 0x1bf220 - 0x1bf221
int64_t function_1bf220(void) {
    // 0x1bf220
    int64_t result; // 0x1bf220
    return result;
}

// Address range: 0x1bf239 - 0x1bf34b
int64_t function_1bf239(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t v3 = a3 & -0xff01; // 0x1bf23b
    char v4 = *(char *)((v3 | (int64_t)&g3) + 0x42194324); // 0x1bf23d
    int64_t v5; // 0x1bf239
    bool v6; // 0x1bf239
    unsigned char v7 = (char)v6 + (char)v5 - v4; // 0x1bf23d
    int64_t v8 = v5 & -256 | (int64_t)v7; // 0x1bf23d
    int32_t v9 = (int32_t)v8 & -0x62fffec3; // 0x1bf243
    int64_t v10 = v8 & -0xff01 | 0x4000 * (int64_t)(v9 == 0) | 0x8000 * (int64_t)(v9 < 0) | 1024 * (int64_t)(llvm_ctpop_i8((char)v9) % 2 == 0) | 512; // 0x1bf248
    v1 = a4;
    v2 = a2;
    int64_t v11 = v10; // 0x1bf24a
    int64_t v12 = a1; // 0x1bf24a
    int64_t v13; // 0x1bf239
    if (v9 == 0) {
        int64_t v14 = a2; // bp-8, 0x1bf27f
        v12 = (v6 ? -4 : 4) + a1;
        char * v15 = (char *)(v5 - 24); // 0x1bf282
        *v15 = (char)((int64_t)&g3 >> 8);
        int64_t v16 = v3 | (int64_t)&g3 & -0xff01 | 256 * (int64_t)*v15; // 0x1bf282
        int32_t * v17 = (int32_t *)v10; // 0x1bf285
        *v17 = *v17 + (int32_t)v16;
        char * v18 = (char *)(v12 + 0x2703fc19); // 0x1bf287
        char v19 = *v18 | v7; // 0x1bf287
        *v18 = v19;
        v11 = unknown_30f89e93(v12);
        __asm_outsd((int16_t)v16, *(int32_t *)&v2);
        if (v19 >= 0) {
            // 0x1bf299
            return v16 & 0xffffffff;
        }
        // 0x1bf27f
        v13 = (int64_t)&v14;
    }
    char * v20 = (char *)(v2 + 43); // 0x1bf24c
    unsigned char v21 = *v20; // 0x1bf24c
    unsigned char v22 = v21 + (char)v1; // 0x1bf24c
    *v20 = v22;
    int64_t v23 = v11 + v5 + (int64_t)(v22 < v21); // 0x1bf24f
    int64_t v24 = v23 & 0xffffffff; // 0x1bf24f
    int32_t v25 = v13; // 0x1bf251
    *(int32_t *)v1 = *(int32_t *)&v1 + v25;
    int32_t * v26 = (int32_t *)(v2 + 70); // 0x1bf254
    *v26 = *v26 + v25;
    *(int32_t *)v12 = (int32_t)v23;
    float80_t v27; // 0x1bf239
    *(int32_t *)(v24 + 71) = (int32_t)v27;
    int32_t v28 = *(int32_t *)-0x6fa26199; // 0x1bf260
    *(int32_t *)-0x6fa26199 = v28 + (int32_t)(v12 + (v6 ? 0xfffffffc : 4));
    int32_t v29 = v1; // 0x1bf266
    int32_t v30 = *(int32_t *)v24; // 0x1bf266
    int32_t v31 = v30 + v29; // 0x1bf266
    int64_t result = v24; // 0x1bf268
    if (v31 < 0 == ((v31 ^ v29) & (v31 ^ v30)) < 0) {
        result = function_1bf220();
    }
    // 0x1bf26a
    return result;
}

// Address range: 0x1bf365 - 0x1bf38b
int64_t function_1bf365(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bf365
    int64_t v1; // 0x1bf365
    float80_t v2; // 0x1bf365
    *(int32_t *)v1 = (int32_t)v2;
    unknown_10c8485();
    return function_ffffffffe00f76e2();
}

// Address range: 0x1bf3a4 - 0x1bf3aa
int64_t function_1bf3a4(int64_t a1) {
    // 0x1bf3a4
    int64_t result; // 0x1bf3a4
    return result;
}

// Address range: 0x29311f - 0x29314c
int64_t function_29311f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = a3; // 0x29311f
    int64_t v3 = a1; // 0x29311f
    int64_t v4; // 0x29311f
    int64_t v5; // 0x29311f
    if (a4 != 0) {
        char v6 = *(char *)(v5 + 8 * a4); // 0x293129
        v2 = a3 & -256 | (int64_t)((char)((int32_t)v5 < 0xc39abf01) + (char)a3 + v6);
        __asm_outsb((int16_t)v2, (char)a2);
        v4 = v5 & -256 | 124;
        v3 = v5 & 0xffffffff;
    }
    // 0x293130
    unknown_1db24736();
    int32_t * v7 = (int32_t *)(v4 + 66); // 0x293135
    *v7 = *v7 | (int32_t)v5;
    int16_t v8 = v2; // 0x293148
    __asm_outsb(v8, *(char *)&v1);
    *(char *)v3 = __asm_insb(v8);
    return a4 & 0xffffff00;
}

// Address range: 0x29323c - 0x29326c
int64_t function_29323c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29323c
    int64_t v1; // 0x29323c
    int64_t v2 = v1 & 0xf1070988; // 0x29323c
    int64_t v3 = v2 + v1; // 0x293241
    int32_t * v4 = (int32_t *)(v1 - 0x47ff5416); // 0x293243
    *v4 = *v4 + (int32_t)a3;
    *(int32_t *)a1 = (int32_t)v2;
    bool v5; // 0x29323c
    int64_t v6 = v5 ? -8 : 8; // 0x293249
    int32_t * v7 = (int32_t *)(v2 - 0x278939fb + (v3 & 0xffffffff)); // 0x293250
    *v7 = *v7 + (int32_t)v3;
    int64_t v8 = v5 ? -1 : 1; // 0x29325c
    return unknown_1119c364(v6 + a1, v8 + a2 + v6, 256 * v1 + a3 & 0xff00 | a3 & -0xff01, a4 & -256 | 232);
}

// Address range: 0x29326c - 0x293276
int64_t function_29326c(int64_t a1) {
    // 0x29326c
    int64_t v1; // 0x29326c
    return __asm_wait((int32_t)v1, v1);
}

// Address range: 0x293408 - 0x29340d
int64_t function_293408(void) {
    // 0x293408
    return function_536735f5();
}

// Address range: 0x293437 - 0x29349a
int64_t function_293437(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x293437
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    uint32_t v1 = (int32_t)a4 % 32; // 0x293439
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)((a2 & 0xffffffff) - 0x5a0000e5); // 0x293439
        *v2 = *v2 >> v1;
    }
    // 0x29345f
    bool v3; // 0x293437
    int64_t v4 = (v3 ? -1 : 1) + a1; // 0x29343f
    unknown_ffffffffd9060246(v4);
    __asm_sti();
    unknown_ffffffffcad5cd5e();
    int64_t v5; // 0x293437
    return __asm_int3(v4, v5 & 0xffffffff, (int64_t)(*(int32_t *)v4 | -0x5afe17d6), a4);
}

// Address range: 0x2934b7 - 0x29353c
int64_t function_2934b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 0x6821a709); // 0x2934bb
    int64_t v2; // 0x2934b7
    int32_t v3 = v2; // 0x2934bb
    *v1 = *v1 + v3;
    int64_t v4 = unknown_22c4c3cf(); // 0x2934c9
    unsigned char v5 = (char)v4 | -75; // 0x2934cf
    if (llvm_ctpop_i8(v5) % 2 != 0) {
        // 0x2934d5
        __asm_wait((int32_t)a1, a2);
        return unknown_3985e7de();
    }
    int64_t v6 = a4 & -256 | (int64_t)(*(char *)(a4 + 0x123d8f7) | (char)a4); // 0x2934c1
    int64_t v7 = v4 & -256 | (int64_t)v5; // 0x2934cf
    int32_t * v8 = (int32_t *)(v6 + 30 + 4 * v7); // 0x29350a
    *v8 = *v8 + (int32_t)v6;
    int64_t v9 = v7 & -129;
    int32_t * v10 = (int32_t *)v9; // 0x293515
    *v10 = *v10 + v3;
    *(char *)a1 = (char)v9;
    int32_t v11 = a1; // 0x293519
    int32_t v12 = a2; // 0x293519
    uint32_t v13 = v12 + v11; // 0x293519
    if (((v13 ^ v11) & (v13 ^ v12)) < 0) {
        // 0x293537
        return v7 & 0x45f03609 | 0xba0fc976;
    }
    // 0x29351d
    return __asm_int3((int64_t)v13, a2, a3 & -256 | 58, v6);
}

// Address range: 0x293557 - 0x29355e
int64_t function_293557(void) {
    // 0x293557
    int64_t v1; // 0x293557
    return function_293594(v1, v1, v1, v1, (int64_t)&g7);
}

// Address range: 0x293586 - 0x293594
int64_t function_293586(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x293586
    int64_t v1; // 0x293586
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a4 + 0x13d00a2); // 0x29358d
    *v3 = *v3 + (int32_t)(a2 & a1);
    return (v2 | a4 / 256) % 256 | v2 & 0xffffff00;
}

// Address range: 0x293594 - 0x2935af
int64_t function_293594(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x293594
    int64_t v1; // 0x293594
    int32_t * v2 = (int32_t *)(8 * v1 + 0x594a2571); // 0x29359d
    int32_t v3 = *v2; // 0x29359d
    uint32_t v4 = (int32_t)v1; // 0x29359d
    *v2 = v3 + v4;
    int32_t * v5 = (int32_t *)(v1 + 0x13d0022); // 0x2935a4
    *v5 = *v5 + (int32_t)v1 + (int32_t)(-1 - v3 < v4);
    int64_t v6; // bp-8, 0x293594
    return (int64_t)&v6;
}

// Address range: 0x2935bb - 0x2935cf
int64_t function_2935bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)0x17e7acc4; // 0x2935bd
    int64_t v2; // 0x2935bb
    unsigned char v3 = v1 + (char)((uint64_t)v2 / 256); // 0x2935bd
    *(char *)0x17e7acc4 = v3;
    int64_t v4 = __asm_wait((int32_t)a1, a2); // 0x2935c3
    *(char *)(v4 - 0x49522034) = (char)a4;
    return (v4 - (v3 < v1 ? 103 : 102)) % 256 | v4 & -256;
}

// Address range: 0x293732 - 0x293736
int64_t function_293732(int64_t a1) {
    // 0x293732
    int64_t v1; // 0x293732
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x293740 - 0x293749
int64_t function_293740(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x293740
    int64_t v1; // 0x293740
    uint64_t v2 = v1;
    __asm_outsb((int16_t)a3, (char)v1);
    return (v2 / 256 + v2 + (int64_t)((char)v2 > (char)(a4 / 256))) % 256 | v2 & -256;
}

// Address range: 0x2937d8 - 0x293819
int64_t function_2937d8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t v2 = a3;
    int64_t v3; // 0x2937d8
    char * v4 = (char *)(v3 + 64); // 0x2937e5
    *v4 = *v4 + (char)(a4 / 256);
    unsigned char v5 = *(char *)&v2 + (char)a3; // 0x2937e8
    int64_t v6 = a3 & 0xffffff00 | (int64_t)v5; // 0x2937e8
    int32_t v7 = v6; // 0x2937ef
    *(int32_t *)a1 = v7;
    int64_t v8 = a1 + 4; // 0x2937ef
    char * v9 = (char *)v6; // 0x2937f0
    *v9 = *v9 + v5;
    char * v10 = (char *)v8; // 0x2937f2
    int64_t v11; // 0x2937d8
    *v10 = *v10 + (char)(v11 / 256);
    *(char *)v11 = *(char *)&v11 + (char)(v3 / 256);
    int64_t v12; // 0x2937d8
    *(int32_t *)(v3 & 0xffffffff) = *(int32_t *)&v12 + (int32_t)v8;
    int32_t v13 = v7 & -0x49fffb1 | (int32_t)&g2 | 0x49ff7b0; // 0x2937fa
    int64_t result = v13; // 0x2937fa
    v12 = result;
    if (v13 < 0) {
        // 0x293845
        return result;
    }
    uint32_t v14 = (int32_t)a4 % 32; // 0x293803
    if (v14 != 0) {
        uint32_t v15 = *(int32_t *)&v1; // 0x293803
        *(int32_t *)v1 = v15 << v14 | (int32_t)((int64_t)v15 >> (int64_t)(33 - v14));
    }
    return unknown_6f35f50c(v8);
}

// Address range: 0x2938b8 - 0x2938b9
int64_t function_2938b8(void) {
    // 0x2938b8
    int64_t result; // 0x2938b8
    return result;
}

// Address range: 0x2938f0 - 0x2938f6
int64_t function_2938f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2938f0
    int64_t result; // 0x2938f0
    *(int32_t *)a3 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x2938f8 - 0x2938f9
int64_t function_2938f8(void) {
    // 0x2938f8
    int64_t result; // 0x2938f8
    return result;
}

// Address range: 0x29393a - 0x293956
int64_t function_29393a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 + 42); // 0x29393a
    char v2 = a3 / 256; // 0x29393a
    *v1 = *v1 + v2;
    char * v3 = (char *)(a3 + 55); // 0x29393d
    int64_t v4; // 0x29393a
    *v3 = *v3 ^ (char)v4;
    int64_t result; // 0x29393a
    int32_t * v5 = (int32_t *)(result + 8); // 0x293940
    *v5 = *v5 / 0x4000;
    char * v6 = (char *)(a3 - 0x9fec261); // 0x293944
    *v6 = *v6 + v2;
    uint64_t v7 = v4;
    *(char *)v7 = *(char *)&v4 & (char)(v7 / 256);
    *(char *)(result - 41) = (char)a3;
    int32_t * v8 = (int32_t *)(result - 0x7b6ca022); // 0x29394f
    *v8 = *v8 / 2;
    return result;
}

// Address range: 0x29395f - 0x293968
int64_t function_29395f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29395f
    int64_t result; // 0x29395f
    return result;
}

// Address range: 0x2939b9 - 0x2939d9
int64_t function_2939b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2939b9
    bool v1; // 0x2939b9
    int64_t v2 = v1 ? 255 : 0; // 0x2939b9
    int64_t v3; // 0x2939b9
    *(char *)a1 = (char)(v3 / 256 ^ v3);
    int64_t v4; // 0x2939b9
    *(int32_t *)a1 = *(int32_t *)&v4;
    char * v5 = (char *)((v2 | v3 & -256) + 0x765e0948); // 0x2939cb
    *v5 = *v5 | (char)v2;
    char * v6 = (char *)(a4 + 79); // 0x2939d3
    *v6 = *v6 + (char)a3;
    return v3 + 0xef977d3d & 0xffffffff ^ 147;
}

// Address range: 0x2939d9 - 0x2939ed
int64_t function_2939d9(int64_t a1) {
    // 0x2939d9
    int64_t v1; // 0x2939d9
    *(char *)0x3a4ceae0 = *(char *)0x3a4ceae0 + (char)(v1 / 256);
    int32_t * v2 = (int32_t *)(v1 - 0x315b6aff); // 0x2939e4
    *v2 = *v2 ^ (int32_t)v1;
    return function_293a65(a1, v1, v1, v1, a1);
}

// Address range: 0x293a0f - 0x293a10
int64_t function_293a0f(int64_t a1) {
    // 0x293a0f
    int64_t result; // 0x293a0f
    return result;
}

// Address range: 0x293a12 - 0x293a13
int64_t function_293a12(void) {
    // 0x293a12
    int64_t result; // 0x293a12
    return result;
}

// Address range: 0x293a44 - 0x293a46
int64_t function_293a44(void) {
    // 0x293a44
    return function_293a12();
}

// Address range: 0x293a53 - 0x293a5d
int64_t function_293a53(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)0x77c4d95a; // 0x293a53
    int64_t result; // 0x293a53
    *(char *)0x77c4d95a = v1 + (char)((uint64_t)result / 256);
    *(char *)a1 = __asm_insb((int16_t)a3);
    __asm_out(-44, (char)result);
    return result;
}

// Address range: 0x293a65 - 0x293ae3
int64_t function_293a65(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x293a65
    int64_t v1; // 0x293a65
    uint64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = a2;
    int64_t v5 = v1 ^ 3; // 0x293a65
    *(int32_t *)a3 = (int32_t)a3 / 2;
    int32_t * v6 = (int32_t *)(v5 - 0x4ed9fec3); // 0x293a6a
    *v6 = *v6 & 80;
    int32_t * v7 = (int32_t *)(a3 - 0x2f34f47d); // 0x293a71
    int32_t v8 = *v7 & (int32_t)a4; // 0x293a71
    *v7 = v8;
    *(char *)0x3b013d0043960212 = (char)v5;
    if (v8 != 0) {
        char * v9 = (char *)(v3 + 79); // 0x293a87
        *v9 = *v9 + (char)v3;
        int64_t v10 = v4;
        *(int32_t *)v10 = *(int32_t *)&v4 + (int32_t)v10;
        int32_t v11 = (int32_t)v5 - *(int32_t *)(a4 + 0x6fb00d3e); // 0x293a91
        *(char *)-0x141f665f = *(char *)-0x141f665f + (char)(v2 / 256);
        return (v11 + 151) % 256 | v11 & -256;
    }
    float32_t v12 = *(float32_t *)&v3; // 0x293a79
    int64_t result = v1 & -256 | (int64_t)*(char *)&v4; // 0x293ac8
    *(char *)-0x7de3e630 = *(char *)-0x7de3e630 + (char)(v2 / 256);
    int32_t * v13 = (int32_t *)(result - 0x17c6997d); // 0x293acf
    *v13 = *v13 & (int32_t)result;
    bool v14; // 0x293a65
    int32_t * v15 = (int32_t *)(v4 + (v14 ? -1 : 1)); // 0x293ad5
    uint32_t v16 = *v15; // 0x293ad5
    uint32_t v17 = v16 + (int32_t)v3; // 0x293ad5
    *v15 = v17;
    char v18 = *(char *)result; // 0x293ad9
    __asm_int(-101);
    float80_t v19; // 0x293a65
    *(int32_t *)(256 * (int64_t)(v18 + (char)(a4 / 256) + (char)(v17 < v16)) | a4 & -0xff01) = (int32_t)(v19 * (float80_t)v12);
    return result;
}

// Address range: 0x293d1f - 0x293d40
int64_t function_293d1f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x293d1f
    int64_t v1; // 0x293d1f
    int64_t v2 = v1;
    bool v3; // 0x293d1f
    if (true == !v3) {
        function_293d0c();
    }
    uint64_t v4 = (v1 & 0xffffffff) + v1; // 0x293d24
    int64_t v5 = v4 & 0xffffffff; // 0x293d24
    int64_t v6 = *(int64_t *)(v1 + 8) + (v3 ? -1 : 1); // 0x293d2b
    int64_t v7 = __asm_int3(a1, v6, a3, v5); // 0x293d2c
    *(char *)v2 = (char)v2 + (char)(a3 / 256);
    int64_t v8; // 0x293d1f
    uint32_t v9 = *(int32_t *)&v8; // 0x293d34
    uint32_t v10 = v9 + (int32_t)v6; // 0x293d34
    *(int32_t *)v8 = v10;
    uint64_t v11 = (v7 + 104 + (int64_t)(v10 < v9)) % 256; // 0x293d36
    unsigned char v12 = *(char *)((v11 | v7 & -256) + 5); // 0x293d38
    char v13 = __asm_in(-78); // 0x293d3b
    uint64_t v14 = v4 % 64; // 0x293d3d
    if (v14 != 0) {
        int64_t * v15 = (int64_t *)v5; // 0x293d3d
        uint64_t v16 = *v15; // 0x293d3d
        *v15 = v16 >> v14 | v16 << 64 - v14;
    }
    return v7 & -0x10000 | (int64_t)v13 | v11 * (int64_t)v12 & 0xff00;
}

// Address range: 0x293d67 - 0x293d71
int64_t function_293d67(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x293d67
    int64_t v1; // 0x293d67
    char * v2 = (char *)(a3 + 0xe0d50cd + v1); // 0x293d67
    *v2 = *v2 + (char)a4;
    return __asm_in_136(-1);
}

// Address range: 0x293db9 - 0x293dbd
int64_t function_293db9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x293db9
    int64_t result; // 0x293db9
    return result;
}

// Address range: 0x293dc6 - 0x293dd4
int64_t function_293dc6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x293dc6
    int64_t v1; // 0x293dc6
    int32_t * v2 = (int32_t *)(v1 - 80);
    uint32_t v3 = *v2; // 0x293dc6
    uint32_t v4 = v3 + (int32_t)a4; // 0x293dc6
    *v2 = v4;
    int64_t v5; // 0x293dc6
    *(char *)v5 = *(char *)&v5 + 47 + (char)(v4 < v3);
    return v5 & -256 | 5;
}

// Address range: 0x293e5b - 0x293e5e
int64_t function_293e5b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x293e5b
    int64_t result; // 0x293e5b
    *(char *)a1 = (char)result + (char)(a4 / 256);
    return result;
}

// Address range: 0x293e5f - 0x293e62
int64_t function_293e5f(void) {
    // 0x293e5f
    int64_t result; // 0x293e5f
    return result;
}

// Address range: 0x293e83 - 0x293e84
int64_t function_293e83(void) {
    // 0x293e83
    int64_t result; // 0x293e83
    return result;
}

// Address range: 0x293f28 - 0x293f29
int64_t function_293f28(void) {
    // 0x293f28
    int64_t result; // 0x293f28
    return result;
}

// Address range: 0x293f44 - 0x293f55
int64_t function_293f44(int64_t a1, int64_t a2, int64_t a3) {
    // 0x293f44
    int64_t v1; // 0x293f44
    __asm_out_133(-118, (int32_t)v1);
    bool v2; // 0x293f44
    __asm_out_134((int16_t)a3, (int32_t)(256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | v1 & 0xffff00ff) | 512);
    return function_293f28();
}

// Address range: 0x293f70 - 0x293f72
int64_t function_293f70(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x293f70
    int64_t result; // 0x293f70
    __asm_out_137((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x293fc3 - 0x293fc4
int64_t function_293fc3(void) {
    // 0x293fc3
    int64_t result; // 0x293fc3
    return result;
}

// Address range: 0x293fe2 - 0x294058
int64_t function_293fe2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x293fe2
    int64_t v1; // 0x293fe2
    uint64_t v2 = v1;
    int64_t result = __asm_hlt(); // 0x293fe6
    if (a4 == 0) {
        // 0x294047
        __asm_out_134((int16_t)a3, (int32_t)result);
        *(char *)0x4ce63759 = *(char *)0x4ce63759 + (char)(v2 / 256);
        return result;
    }
    // 0x293fe9
    __asm_out(-39, (char)result);
    *(char *)0x2f79a7f4 = *(char *)0x2f79a7f4 + (char)(v2 / 256);
    *(int32_t *)0x33fac024 = *(int32_t *)0x33fac024 - (int32_t)result;
    return a1 & 0xffffffff;
}

// Address range: 0x294059 - 0x294080
int64_t function_294059(int64_t a1, int64_t a2) {
    // 0x294059
    int64_t v1; // 0x294059
    __asm_out_133(-104, (int32_t)v1);
    uint64_t v2 = v1 & -256 | (int64_t)__asm_in(-71); // 0x294061
    char v3 = *(char *)v2; // 0x294063
    char * v4 = (char *)(a2 + 79); // 0x294065
    *v4 = *v4 | -56;
    __asm_out_133(12, (int32_t)(256 * (int64_t)(v3 | (char)(v2 / 256)) | v2 & 0xffff00ff));
    *(char *)0x4ff7a071 = *(char *)0x4ff7a071 + 10;
    return function_6639085();
}

// Address range: 0x294093 - 0x294094
int64_t function_294093(void) {
    // 0x294093
    int64_t result; // 0x294093
    return result;
}

// Address range: 0x2940bd - 0x2940bf
int64_t function_2940bd(void) {
    // 0x2940bd
    return function_294093();
}

// Address range: 0x3c33dd - 0x3c33e1
int64_t function_3c33dd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c33dd
    *(int32_t *)a3 = (int32_t)a2;
    int64_t result; // 0x3c33dd
    return result;
}

// Address range: 0x3c33e4 - 0x3c33e9
int64_t function_3c33e4(void) {
    // 0x3c33e4
    return function_225100c();
}

// Address range: 0x3c340d - 0x3c340f
int64_t function_3c340d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c340d
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x3c340d
    return result;
}

// Address range: 0x3c3424 - 0x3c342a
int64_t function_3c3424(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3c3424
    int64_t v1; // 0x3c3424
    int64_t result = v1 ^ a4 / 256 % 256; // 0x3c3424
    int32_t * v2 = (int32_t *)result; // 0x3c3426
    *v2 = *v2 + (int32_t)v1;
    return result;
}

// Address range: 0x3c343b - 0x3c3544
int64_t function_3c343b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x3c343b
    int64_t v1; // 0x3c343b
    uint64_t v2 = v1;
    int64_t v3; // 0x3c343b
    bool v4; // 0x3c343b
    if (v4 || false) {
        // 0x3c349f
        v3 = a3;
        if (v4) {
            int64_t v5 = v1 & 0xffffffff; // 0x3c34a1
            int32_t * v6 = (int32_t *)a4; // 0x3c34a2
            *v6 = *v6 / 2;
            *(char *)v5 = (char)a1;
            int64_t v7 = v4 ? -1 : 1; // 0x3c34a4
            int64_t v8 = v7 + v5; // 0x3c34a4
            unknown_ffffffffb23fc4b2(v8, v7 + a2);
            *(int64_t *)(v1 - 8) = a1 & 0xffffff00 | (int64_t)*(char *)a2;
            uint32_t v9 = *(int32_t *)0x1064c8c5; // 0x3c34be
            uint32_t v10 = v9 + (int32_t)v8; // 0x3c34be
            unsigned char v11 = llvm_ctpop_i8((char)v10); // 0x3c34be
            *(int32_t *)0x1064c8c5 = v10;
            int64_t result = unknown_ffffffffd79ab0ca(); // 0x3c34c4
            if (v11 % 2 != 0) {
                // 0x3c3490
                return result;
            }
            if (v10 >= v9 && v10 != 0) {
                // 0x3c34cd
                return result & 0x708d01e8;
            }
            int64_t result2 = result & -256 | (int64_t)__asm_in_135((int16_t)a3); // 0x3c34d6
            if (v10 < v9) {
                // 0x3c3490
                return result2;
            }
            char v12 = *(char *)(a3 + (int64_t)&g1); // 0x3c34d9
            return 256 * (int64_t)(v12 + (char)(result2 / 256)) | result2 & -0xff01;
        }
    } else {
        // 0x3c343e
        v3 = a3 & 0xff00 & 256 * a3 | a3 & -0xff01;
    }
    uint64_t v13 = v3;
    __asm_hlt();
    int64_t v14 = v13 & a4;
    char v15 = *(char *)(__asm_wait((int32_t)a1, a2) - 12); // 0x3c344f
    int32_t * v16 = (int32_t *)unknown_ffffffff9e1c8758(); // 0x3c3457
    *v16 = *v16 + (int32_t)v1;
    *(int32_t *)v13 = (int32_t)v13;
    char * v17 = (char *)(v13 - 0x1f39538f); // 0x3c345b
    *v17 = *v17 ^ (char)(v2 / 256);
    unknown_7c77067();
    uint32_t v18 = (int32_t)v1; // 0x3c3471
    uint32_t v19 = (int32_t)(v2 & 0xffffff00 | (int64_t)(v15 | (char)v2)) + v18; // 0x3c3471
    unsigned char v20 = (char)(v13 / 256); // 0x3c347c
    unsigned char v21 = v20 + (char)v14; // 0x3c347c
    int64_t v22 = v21 < v20 ? 233 : 232; // 0x3c347e
    int32_t * v23 = (int32_t *)((256 * (int64_t)v21 | v13 & -0xff01) - 69); // 0x3c3480
    *v23 = *v23 + v19;
    return (v14 - v22) % 256 | a4 & 0xffff0000 | 256 * (128 * (int64_t)(v19 < v18) | a4 / 512 % 128);
}

// Address range: 0x3c3549 - 0x3c354b
int64_t function_3c3549(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3c3549
    int64_t result; // 0x3c3549
    *(char *)a2 = (char)result + (char)(a4 / 256);
    return result;
}

// Address range: 0x3c354b - 0x3c354d
int64_t function_3c354b(void) {
    // 0x3c354b
    int64_t v1; // 0x3c354b
    return function_3c357f(v1, v1, v1, (int64_t)&g7);
}

// Address range: 0x3c354d - 0x3c3575
int64_t function_3c354d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3c354d
    int64_t v1; // 0x3c354d
    *(char *)(a2 + 0xd56c71) = (char)v1;
    int64_t v2 = v1 & -256; // 0x3c3560
    int32_t * v3 = (int32_t *)((v2 | v1 + 13 & 23 | 232) - 0xb3b03f6); // 0x3c3564
    *v3 = *v3 + (int32_t)a4;
    return v2 | 132;
}

// Address range: 0x3c357f - 0x3c35ae
int64_t function_3c357f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c357f
    bool v1; // 0x3c357f
    int64_t result = v1 ? 0xffffffff : 44; // 0x3c358c
    int32_t * v2 = (int32_t *)(a3 + 62); // 0x3c358e
    *v2 = (int32_t)a1;
    int32_t * v3 = (int32_t *)result; // 0x3c3599
    *v3 = *v3 + (int32_t)result;
    int32_t * v4 = (int32_t *)(a4 - 52 + (int64_t)*v2); // 0x3c35a2
    *v4 = *v4 ^ -0x3b275da9;
    int64_t v5; // 0x3c357f
    int32_t v6 = *(int32_t *)&v5; // 0x3c35aa
    int64_t v7; // 0x3c357f
    *(int32_t *)(v5 & 0xffffffff) = v6 + (int32_t)(int64_t)&v7;
    return result;
}

// Address range: 0x3c35ae - 0x3c35d5
int64_t function_3c35ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3c35ae
    int64_t v1; // 0x3c35ae
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)v2; // 0x3c35b3
    __asm_out_134(-2029, v3);
    __asm_outsd(-2029, *(int32_t *)0x5f013d00);
    *(int16_t *)v2 = (int16_t)v2 - (int16_t)v1 + (int16_t)(v3 < 0x9c825201);
    *(char *)0x8684232 = __asm_insb(-2029);
    return function_ffffffffe8aa3ac5();
}

// Address range: 0x3c3674 - 0x3c3696
int64_t function_3c3674(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c3674
    int64_t v1; // 0x3c3674
    int64_t result = function_362a90((int32_t)v1 + (int32_t)a1, a3 + 0x3d28acbf + 4 * a3 & 0xffffffff); // 0x3c368a
    char * v2 = (char *)result; // 0x3c3692
    *v2 = *v2 - 41;
    return result;
}

// Address range: 0x3c36a3 - 0x3c36a4
int64_t function_3c36a3(void) {
    // 0x3c36a3
    int64_t result; // 0x3c36a3
    return result;
}

// Address range: 0x3c36b3 - 0x3c36bb
int64_t function_3c36b3(void) {
    // 0x3c36b3
    bool v1; // 0x3c36b3
    if (!v1 && !v1) {
        function_490f1397();
    }
    // 0x3c36b9
    return function_3c36a3();
}

// Address range: 0x3c36c3 - 0x3c3768
int64_t function_3c36c3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3c36c3
    int64_t result; // 0x3c36c3
    if (a4 == 1) {
        // 0x3c36ca
        return result;
    }
    char * v1 = (char *)(result + 16); // 0x3c3702
    *v1 = *v1 + (char)result;
    unknown_ffffffffb251810b();
    int64_t v2 = unknown_68b64b1a(); // 0x3c3714
    int64_t v3 = ((v2 + 44) % 256 | v2 & 0xffffff00) + 0xd860013 + (int64_t)((char)v2 > 211); // 0x3c371b
    unsigned char v4 = *(char *)(((v3 + 9) % 256 | v3 & 0xffffff00) - 0x2f204a4f); // 0x3c3728
    char v5 = *(char *)0x1e8ab29; // 0x3c372e
    *(char *)0x1e8ab29 = v5 + (char)a3 + (char)(v4 > -1 - (char)(a3 / 256));
    return function_65fb05ad();
}

// Address range: 0x3c3bdd - 0x3c3c1d
int64_t function_3c3bdd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 + 0x6dfac59f); // 0x3c3bdd
    int64_t v2; // 0x3c3bdd
    *v1 = *v1 + (char)v2;
    int64_t v3 = unknown_ffffffffa53666ea(); // 0x3c3be4
    __asm_out_133(41, (int32_t)v3);
    int32_t v4 = *(int32_t *)(a1 + 0x20daf383 + v3) | (int32_t)a4; // 0x3c3beb
    int64_t v5 = v3; // 0x3c3bf2
    if (v4 >= 0) {
        v5 = function_3c3bdc();
    }
    uint64_t v6 = (int64_t)v4; // 0x3c3beb
    int32_t * v7 = (int32_t *)(v6 - 0x23c12382); // 0x3c3bf4
    *v7 = *v7 + (int32_t)a1;
    uint32_t v8 = (int32_t)v2; // 0x3c3bfb
    uint64_t v9 = v5 + v6 / 256 + (int64_t)(*(int32_t *)(a1 - 0x36fe62f6) > v8); // 0x3c3c01
    int64_t result = v9 % 256 | v5 & -256; // 0x3c3c01
    int32_t * v10 = (int32_t *)(v6 - 0x7747db58); // 0x3c3c03
    int64_t v11; // 0x3c3bdd
    *v10 = *v10 + (int32_t)(int64_t)&v11;
    *(int32_t *)(a3 + 85) = v8;
    char * v12 = (char *)(a3 + 0x40fc50a); // 0x3c3c15
    *v12 = *v12 - (char)v9;
    __asm_out_134((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x3c3c21 - 0x3c3c36
int64_t function_3c3c21(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c3c21
    int64_t v1; // 0x3c3c21
    int32_t * v2 = (int32_t *)(v1 + 0x48295ab0); // 0x3c3c21
    uint32_t v3 = *v2; // 0x3c3c21
    uint32_t v4 = v3 + (int32_t)v1; // 0x3c3c21
    *v2 = v4;
    bool v5 = v4 < v3; // 0x3c3c21
    while (true) {
        // 0x3c3c27
        int64_t v6; // 0x3c3c21
        unsigned char v7 = (char)(v6 - (v5 ? 181 : 180)); // 0x3c3c2c
        unsigned char v8 = 2 * v7; // 0x3c3c2c
        __asm_out_137((int16_t)a3, v8);
        v6 = unknown_fffffffffed36735();
        v5 = v8 < v7;
    }
}

// Address range: 0x3c3ca4 - 0x3c3cd6
int64_t function_3c3ca4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 + 102); // 0x3c3ca4
    int64_t v2; // 0x3c3ca4
    *v1 = *v1 | (int32_t)v2;
    int32_t * v3 = (int32_t *)(a3 - 48); // 0x3c3ca7
    *v3 = *v3 + (int32_t)v2;
    int64_t v4; // 0x3c3ca4
    *(char *)a4 = *(char *)&v4 + (char)a2;
    uint32_t v5 = 0x10000 * (int32_t)v2 >> 16; // 0x3c3cb7
    char * v6 = (char *)(v2 + 126); // 0x3c3cbd
    unsigned char v7 = *v6; // 0x3c3cbd
    *v6 = v7 / 2 | 128 * v7;
    unsigned char v8 = *(char *)((int64_t)(v5 % 256) + 0xa3ea62aa); // 0x3c3cc0
    int64_t v9; // 0x3c3ca4
    unsigned char v10 = *(char *)&v9; // 0x3c3cd2
    unsigned char v11 = (char)(v5 / 256); // 0x3c3cd2
    char v12 = v10 + v11; // 0x3c3cd2
    unsigned char v13 = llvm_ctpop_i8(v12); // 0x3c3cd2
    *(char *)a2 = v12;
    return (int64_t)v8 | (int64_t)(v5 & -0x10000 | 512) | 256 * (64 * (int64_t)(v12 == 0) | (int64_t)(v12 < v10) | 128 * (int64_t)(v12 < 0) | 16 * (int64_t)(v10 % 16 + v11 % 16 > 15) | 4 * (int64_t)(v13 % 2 == 0));
}

// Address range: 0x3c3cd6 - 0x3c3ce4
int64_t function_3c3cd6(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x3c3cd6
    int64_t v1; // 0x3c3cd6
    int64_t result = v1;
    bool v2; // 0x3c3cd6
    if (v2 || v2) {
        // 0x3c3cd8
        return (result + a3 / 256) % 256 | result & -256;
    }
    // 0x3c3ce1
    *(char *)a3 = (char)((uint64_t)v1 / 256) + (char)a3;
    return result;
}

// Address range: 0x3c3cf0 - 0x3c3d00
int64_t function_3c3cf0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c3cf0
    int64_t result; // 0x3c3cf0
    return result;
}

// Address range: 0x3c3d1f - 0x3c3d24
int64_t function_3c3d1f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c3d1f
    int64_t result; // 0x3c3d1f
    return result;
}

// Address range: 0x3c3d27 - 0x3c3d28
int64_t function_3c3d27(void) {
    // 0x3c3d27
    int64_t result; // 0x3c3d27
    return result;
}

// Address range: 0x3c3d3b - 0x3c3d58
int64_t function_3c3d3b(void) {
    // 0x3c3d3b
    unknown_938df48();
    bool v1; // 0x3c3d3b
    if (v1 || false) {
        int64_t v2; // 0x3c3d3b
        function_3c3cd6(v2, v2, v2);
    }
    if (v1) {
        function_3c3d27();
    }
    // 0x3c3d4c
    return unknown_ffffffffb2017755();
}
