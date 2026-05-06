/*
 * Targeted RetDec C for native executable gap queue batch 1050.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3ca479-0x3ca679 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ca679-0x3ca879 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ca879-0x3caa79 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3caa79-0x3cac79 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3cac79-0x3cae79 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3cae79-0x3cb079 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3cb079-0x3cb279 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3cb279-0x3cb479 rank=- name=- kind=- bytes=- uncovered=-
 *   0x409fe5-0x40a065 rank=- name=- kind=- bytes=- uncovered=-
 *   0x416342-0x416542 rank=- name=- kind=- bytes=- uncovered=-
 *   0x416542-0x416742 rank=- name=- kind=- bytes=- uncovered=-
 *   0x416742-0x416942 rank=- name=- kind=- bytes=- uncovered=-
 *   0x416b42-0x416d42 rank=- name=- kind=- bytes=- uncovered=-
 *   0x416d42-0x416f42 rank=- name=- kind=- bytes=- uncovered=-
 *   0x416f42-0x417142 rank=- name=- kind=- bytes=- uncovered=-
 *   0x417142-0x417342 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_224f8e0();
int64_t function_264e3ad5();
int64_t function_3ca479(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ca4f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ca57f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ca5e7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ca615(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ca649(void);
int64_t function_3ca650(int64_t a1);
int64_t function_3ca679(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ca6c3(int64_t a1);
int64_t function_3ca6c9(void);
int64_t function_3ca6cb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3ca7a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ca7f3(void);
int64_t function_3ca836(void);
int64_t function_3ca839(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ca879(void);
int64_t function_3ca8c2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ca8f1(int64_t a1);
int64_t function_3ca96b(void);
int64_t function_3ca96d(int64_t a1);
int64_t function_3ca97d(int64_t a1, int64_t a2);
int64_t function_3ca98f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ca9ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3cab51(int64_t a1);
int64_t function_3cacac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3cacf7(void);
int64_t function_3cad29(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3cada6(void);
int64_t function_3cadb1(void);
int64_t function_3cadd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3cae1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3cae35(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3cae51(int64_t a1);
int64_t function_3cae7b(void);
int64_t function_3caee8(int64_t a1);
int64_t function_3caf41(int64_t a1);
int64_t function_3caf60(int64_t a1, int64_t a2);
int64_t function_3caf74(void);
int64_t function_3caf85(void);
int64_t function_3caf88(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3cafc9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3cb018(void);
int64_t function_3cb07b(void);
int64_t function_3cb07f(void);
int64_t function_3cb0c1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3cb0e4(int64_t a1, int64_t a2);
int64_t function_3cb0f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3cb19a(int64_t a1, int64_t a2);
int64_t function_3cb1a2(int64_t a1);
int64_t function_3cb1ba(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3cb206(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3cb23f(void);
int64_t function_3cb245(void);
int64_t function_3cb25f(void);
int64_t function_3cb268(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3cb388(void);
int64_t function_3cb3a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3cb3d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3cb3dd(int64_t a1);
int64_t function_4072f3d2();
int64_t function_409fe5(int64_t a1);
int64_t function_409fe6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_416321();
int64_t function_416342(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4163e7(void);
int64_t function_41642e(void);
int64_t function_41644a(int64_t a1);
int64_t function_416473(int64_t a1);
int64_t function_41648e(void);
int64_t function_4164d3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_4164f0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41656c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4165a3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_416610(void);
int64_t function_416626(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41667d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_41668e(void);
int64_t function_4166a1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4166dd(void);
int64_t function_4166e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41671c(int64_t a1);
int64_t function_41672b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_41676a(void);
int64_t function_41676c(void);
int64_t function_416818(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_416b42(void);
int64_t function_416b58(void);
int64_t function_416b80(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_416bb9(int64_t a1);
int64_t function_416beb(void);
int64_t function_416c02(int64_t a1);
int64_t function_416c10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_416c4f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_416c68(void);
int64_t function_416c74(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_416df1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_416ef6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_416f37(void);
int64_t function_416f48(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_416f6d(void);
int64_t function_416f6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_41704c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_417076(void);
int64_t function_4170d4(void);
int64_t function_4170dc(void);
int64_t function_4170ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41712e(void);
int64_t function_417154(int64_t a1);
int64_t function_41715b(int64_t a1);
int64_t function_417188(void);
int64_t function_4171dc(int64_t a1);
int64_t function_4171e2(void);
int64_t function_4171ec(int64_t a1, int64_t a2);
int64_t function_417226(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41724c(void);
int64_t function_41724e(void);
int64_t function_417253(int64_t a1);
int64_t function_417257(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4172ca(int64_t a1, int64_t a2);
int64_t function_4172e8(void);
int64_t function_4fd108ed();
int64_t function_6fcea9cb();
int64_t function_ffffffff9bc0dc1d();
int64_t function_ffffffffa178096c();
int64_t function_ffffffffde867349();
int64_t function_ffffffffe7b3c314();
int64_t unknown_17aace3f();
int64_t unknown_3ace82c9();
int64_t unknown_3c473b8e();
int64_t unknown_3da5442f();
int64_t unknown_3f685c5();
int64_t unknown_4446a121();
int64_t unknown_4a9c98dc();
int64_t unknown_5acf740();
int64_t unknown_5e42ee4f();
int64_t unknown_61065130();
int64_t unknown_6143b373();
int64_t unknown_6dce5c8();
int64_t unknown_7c3f386();
int64_t unknown_844b55f();
int64_t unknown_e859951();
int64_t unknown_ffffffff84023b25();
int64_t unknown_ffffffff8c5863c8();
int64_t unknown_ffffffff96ee0f5f();
int64_t unknown_ffffffffa443ac0f();
int64_t unknown_ffffffffa6450b32();
int64_t unknown_ffffffffa9a0f2e1();
int64_t unknown_ffffffffb201e3ee();
int64_t unknown_ffffffffbf3e91d2();
int64_t unknown_ffffffffc40144b8();
int64_t unknown_ffffffffc52ad3e9();

// Address range: 0x3ca479 - 0x3ca4e1
int64_t function_3ca479(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ca479
    int64_t result; // 0x3ca479
    // 0x3ca47b
    return result;
    // 0x3ca4b4
    bool v1; // 0x3ca479
    int64_t v2 = (v1 ? -4 : 4) + a1; // 0x3ca4b4
    *(char *)a2 = (char)(result & a2);
    int32_t * v3 = (int32_t *)(a2 + 12); // 0x3ca4bf
    *v3 = *v3 + (int32_t)a3;
    *(int32_t *)0x113316d7 = *(int32_t *)0x113316d7 + (int32_t)v2;
    return unknown_4a9c98dc(v2);
}

// Address range: 0x3ca4f0 - 0x3ca576
int64_t function_3ca4f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t v3 = a1;
    __asm_sti();
    char * v4 = (char *)(a1 + 0x59ecf1e6); // 0x3ca4f8
    *v4 = *v4 + (char)a1;
    *(int32_t *)a1 = __asm_insd((int16_t)a1);
    int64_t v5 = __asm_int3(); // 0x3ca4ff
    int16_t v6 = v5; // 0x3ca500
    int64_t v7; // 0x3ca4f0
    int16_t v8 = (int16_t)*(char *)(v7 + 56); // 0x3ca500
    int16_t v9 = v6 / v8; // 0x3ca500
    int64_t v10 = v5 & -0x10000 | (int64_t)(v9 % 256) | (int64_t)(256 * (v6 % v8)); // 0x3ca500
    char * v11 = (char *)v10; // 0x3ca508
    unsigned char v12 = *v11; // 0x3ca508
    char v13 = v9; // 0x3ca508
    unsigned char v14 = v12 + v13; // 0x3ca508
    *v11 = v14;
    unsigned char v15 = v13 - *(char *)&v3 + (char)(v14 < v12); // 0x3ca50a
    char * v16 = (char *)(v10 & -256 | (int64_t)v15); // 0x3ca50c
    *v16 = v15 + *v16;
    int64_t v17 = __asm_sti(); // 0x3ca513
    int64_t v18 = v7 + 0xffffffff; // 0x3ca516
    char * v19 = (char *)(a2 + 0x1e852c3); // 0x3ca518
    *v19 = *v19 / 2;
    *(int32_t *)a2 = *(int32_t *)&v2 + (int32_t)v18;
    int64_t v20 = unknown_3da5442f(); // 0x3ca528
    int32_t * v21 = (int32_t *)((v18 & 0xffffffff) - 0xadbc509); // 0x3ca52e
    *v21 = *v21 + (int32_t)v7;
    *(char *)a4 = *(char *)&v1 | (char)v20;
    int64_t v22 = v2; // 0x3ca534
    int64_t v23 = v20; // 0x3ca534
    int64_t * v24 = (int64_t *)(v7 - 8); // 0x3ca534
    int64_t v25 = v17 & 0xffffffa6; // 0x3ca534
    while (true) {
        int64_t v26 = v23;
        uint32_t v27 = (int32_t)v1 % 32; // 0x3ca536
        int64_t v28 = v27 == 0 ? v26 : (int64_t)((int32_t)v26 >> v27);
        int32_t * v29 = (int32_t *)(v22 - 0xc5f771d); // 0x3ca539
        *v29 = *v29 + (int32_t)v3;
        int64_t v30 = v3; // 0x3ca53f
        int64_t v31 = v28 & 0xffffffff; // 0x3ca53f
        v3 = v31;
        v25 = (int64_t)(*(int32_t *)((v30 & 0xffffffff) + 0x9cd01e8) | (int32_t)v25);
        *v24 = a5;
        unsigned char v32 = *(char *)-0x5498d1afe174600; // 0x3ca549
        int64_t v33 = 0x100000000 * (unknown_844b55f(v31) + 0x1203fb97 + (int64_t)(v32 < 219)) >> 32; // 0x3ca563
        uint64_t v34 = v33 * v33; // 0x3ca563
        int32_t * v35 = (int32_t *)(v34 & 0xffffffff); // 0x3ca565
        *v35 = *v35 + (int32_t)(v34 / 0x100000000);
        char * v36 = (char *)v2; // 0x3ca567
        *v36 = *v36 | (char)v1;
        char * v37 = (char *)(v25 + 49); // 0x3ca569
        *v37 = *v37 + (char)(v1 / 256);
        bool v38; // 0x3ca4f0
        v22 = v2 + (v38 ? -1 : 1);
        v2 = v22;
        int64_t v39 = unknown_6143b373(); // 0x3ca56d
        v23 = (v39 + 252) % 256 | v39 & -256;
        v24 = (int64_t *)0x4b9aaf6d;
    }
}

// Address range: 0x3ca57f - 0x3ca58a
int64_t function_3ca57f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a3 + 0x7101e86a); // 0x3ca582
    int64_t result; // 0x3ca57f
    *v1 = *v1 & (char)result;
    return result;
}

// Address range: 0x3ca5e7 - 0x3ca5f5
int64_t function_3ca5e7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ca5e7
    float80_t v1; // 0x3ca5e7
    *(int16_t *)(a3 + 0xac8285) = (int16_t)v1;
    return unknown_5e42ee4f();
}

// Address range: 0x3ca615 - 0x3ca62f
int64_t function_3ca615(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ca615
    int64_t v1; // 0x3ca615
    int64_t v2 = v1;
    int64_t v3 = a4;
    int32_t * v4 = (int32_t *)(v2 - 41); // 0x3ca617
    *v4 = *v4 & (int32_t)v1;
    *(int32_t *)(v1 - 86) = (int32_t)a1;
    int32_t v5 = *(int32_t *)&v3; // 0x3ca626
    char * v6 = (char *)(a3 + 54); // 0x3ca628
    *v6 = *v6 - (char)v3;
    return v5 & (int32_t)((v2 + 38) % 256 | v2 & 0xffffff00);
}

// Address range: 0x3ca649 - 0x3ca64e
int64_t function_3ca649(void) {
    // 0x3ca649
    return unknown_5e42ee4f();
}

// Address range: 0x3ca650 - 0x3ca654
int64_t function_3ca650(int64_t a1) {
    // 0x3ca650
    return __asm_int1(a1);
}

// Address range: 0x3ca679 - 0x3ca689
int64_t function_3ca679(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ca679
    return function_224f8e0();
}

// Address range: 0x3ca6c3 - 0x3ca6c9
int64_t function_3ca6c3(int64_t a1) {
    // 0x3ca6c3
    return unknown_3ace82c9(a1);
}

// Address range: 0x3ca6c9 - 0x3ca6ca
int64_t function_3ca6c9(void) {
    // 0x3ca6c9
    int64_t result; // 0x3ca6c9
    return result;
}

// Address range: 0x3ca6cb - 0x3ca701
int64_t function_3ca6cb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3ca6cb
    *(int32_t *)0x107f0fdc = *(int32_t *)0x107f0fdc + (int32_t)a1;
    unknown_ffffffffa9a0f2e1();
    int64_t v1 = __asm_fnstenv(); // 0x3ca6e7
    int64_t v2; // 0x3ca6cb
    *(int224_t *)(v2 - 0x3028af00) = (int224_t)v1;
    *(int32_t *)a1 = (int32_t)v1;
    char * v3 = (char *)v1; // 0x3ca6f4
    *v3 = *v3 + (char)v1;
    *(char *)0x3d3ca6fc = *(char *)0x3d3ca6fc + (char)(a4 / 256);
    int32_t * v4 = (int32_t *)(a3 & -256 | 61); // 0x3ca6fc
    uint32_t v5 = *v4; // 0x3ca6fc
    uint32_t v6 = v5 + (int32_t)v2; // 0x3ca6fc
    *v4 = v6;
    int64_t result = v1; // 0x3ca6fe
    if (v6 >= v5) {
        result = function_3ca6c9();
    }
    // 0x3ca700
    return result;
}

// Address range: 0x3ca7a8 - 0x3ca7d2
int64_t function_3ca7a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ca7a8
    int64_t v1; // 0x3ca7a8
    int32_t * v2 = (int32_t *)(v1 + 0x1e8da05); // 0x3ca7a8
    *v2 = *v2 + (int32_t)v1;
    unsigned char v3 = (char)a4 % 32; // 0x3ca7ae
    if (v3 != 0) {
        char * v4 = (char *)(v1 + 109); // 0x3ca7ae
        *v4 = *v4 << v3;
    }
    unsigned char v5 = *(char *)-0x177305d5; // 0x3ca7b4
    *(char *)-0x177305d5 = v5 / 128 | 2 * v5;
    int64_t result = unknown_ffffffff8c5863c8(); // 0x3ca7c2
    *(char *)-0x65c16f33 = *(char *)-0x65c16f33 - 89;
    return result;
}

// Address range: 0x3ca7f3 - 0x3ca7f4
int64_t function_3ca7f3(void) {
    // 0x3ca7f3
    int64_t result; // 0x3ca7f3
    return result;
}

// Address range: 0x3ca836 - 0x3ca837
int64_t function_3ca836(void) {
    // 0x3ca836
    int64_t result; // 0x3ca836
    return result;
}

// Address range: 0x3ca839 - 0x3ca873
int64_t function_3ca839(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_17aace3f(); // 0x3ca83e
    bool v2; // 0x3ca839
    if (v2) {
        v1 = function_3ca7f3();
    }
    // 0x3ca840
    int64_t v3; // 0x3ca839
    int32_t * v4 = (int32_t *)(4 * v3 + 58 + v1); // 0x3ca840
    *v4 = *v4 + (int32_t)v1;
    int64_t v5; // 0x3ca839
    *(char *)v5 = *(char *)&v5 - 85;
    *(char *)0xf3e90b5 = *(char *)0xf3e90b5 + (char)v5;
    int64_t v6 = unknown_ffffffff96ee0f5f(); // 0x3ca85e
    if ((((char)v1 || -120) ^ -2) >= 58) {
        v6 = function_3ca836();
    }
    int64_t v7 = (v2 ? -4 : 4) + a1; // 0x3ca860
    char * v8 = (char *)v7; // 0x3ca864
    *v8 = *v8 + (char)v6;
    int32_t * v9 = (int32_t *)(v5 - 127); // 0x3ca869
    *v9 = *v9 + (int32_t)v6;
    return function_ffffffffe7b3c314(v7);
}

// Address range: 0x3ca879 - 0x3ca87c
int64_t function_3ca879(void) {
    // 0x3ca879
    int64_t result; // 0x3ca879
    return result;
}

// Address range: 0x3ca8c2 - 0x3ca8cc
int64_t function_3ca8c2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ca8c2
    int64_t v1; // 0x3ca8c2
    int64_t v2 = v1;
    int64_t result = unknown_6dce5c8(a1, a2, a3); // 0x3ca8c2
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a2;
    return result;
}

// Address range: 0x3ca8f1 - 0x3ca8fb
int64_t function_3ca8f1(int64_t a1) {
    // 0x3ca8f1
    int64_t v1; // 0x3ca8f1
    return v1 & -256 | (int64_t)*(char *)-0x1275dd41a2ce61ed;
}

// Address range: 0x3ca96b - 0x3ca96c
int64_t function_3ca96b(void) {
    // 0x3ca96b
    int64_t result; // 0x3ca96b
    return result;
}

// Address range: 0x3ca96d - 0x3ca96e
int64_t function_3ca96d(int64_t a1) {
    // 0x3ca96d
    int64_t result; // 0x3ca96d
    return result;
}

// Address range: 0x3ca97d - 0x3ca98a
int64_t function_3ca97d(int64_t a1, int64_t a2) {
    // 0x3ca97d
    bool v1; // 0x3ca97d
    int64_t v2 = v1 ? -4 : 4; // 0x3ca987
    int64_t v3; // 0x3ca97d
    return function_3ca9ae(v2 + (v3 + a1 & 0xffffffff), v2 + a2, v3, v3, v3, v3, 0x3d00fc09);
}

// Address range: 0x3ca98f - 0x3ca999
int64_t function_3ca98f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ca98f
    int64_t result; // 0x3ca98f
    char * v1 = (char *)(result - 0x73093481); // 0x3ca98f
    *v1 = *v1 + (char)a3;
    return result;
}

// Address range: 0x3ca9ae - 0x3cab3f
int64_t function_3ca9ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3ca9ae
    int64_t v1; // 0x3ca9ae
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    uint32_t v3 = (int32_t)v2; // 0x3ca9b2
    int32_t v4 = v3 + 0x506877ff; // 0x3ca9b2
    bool v5; // 0x3ca9ae
    int64_t v6 = v5 ? -4 : 4; // 0x3ca9bb
    int64_t v7 = a2; // 0x3ca9b7
    int64_t v8 = a1;
    int64_t v9 = (v1 + a3) % 256 | a3 & -256;
    *(int32_t *)v8 = *(int32_t *)v7;
    if (v4 < 0 == ((v4 ^ v3) & (v3 ^ -0x80000000)) < 0) {
        function_3ca96b();
    }
    // 0x3ca9be
    unknown_3f685c5();
    char * v10 = (char *)(v9 - 0x2d27706a); // 0x3ca9c4
    *v10 = (char)(v3 < 0xaf978801) - (char)a4 + *v10;
    unknown_ffffffffbf3e91d2();
    int64_t v11; // 0x3ca9ae
    int64_t v12 = v11 - 8; // 0x3ca9d1
    *(int64_t *)v12 = -0x1e39fec3;
    unsigned char v13 = *(char *)-0x17a581a5; // 0x3ca9d8
    *(char *)-0x17a581a5 = v13 / 128 | 2 * v13;
    unknown_ffffffffc52ad3e9();
    int64_t v14 = v12; // 0x3ca9ef
    bool v15; // 0x3ca9ae
    int64_t v16; // 0x3ca9ae
    int64_t v17; // 0x3ca9ae
    int64_t v18; // 0x3ca9ae
    int64_t v19; // 0x3ca9ae
    int64_t v20; // 0x3caa07
    char * v21; // 0x3ca9ae
    int32_t v22; // 0x3ca9ae
    while ((char)unknown_ffffffffb201e3ee() != 0) {
        int64_t v23 = v9 & 0xffffffff;
        v7 = v7 + v6 & v23;
        int64_t v24 = unknown_5acf740(); // 0x3ca9f6
        unsigned char v25 = (char)v24;
        unsigned char v26 = *(char *)(v24 - 0x5dfe1751); // 0x3ca9fb
        char v27 = v25 - v26; // 0x3ca9fb
        unsigned char v28 = llvm_ctpop_i8(v27); // 0x3ca9fb
        int64_t v29 = v8 + v6 & 0xffffffff; // 0x3caa01
        if (v28 % 2 == 0) {
            unsigned char v30 = v25 & 58; // 0x3caa05
            v20 = a4 - 1;
            if (v20 != 0 != (v30 == 0)) {
                int64_t v31 = unknown_ffffffffa443ac0f(v23); // 0x3caa09
                int64_t result = (v31 + 226) % 256 | v31 & -256; // 0x3caa10
                int32_t * v32 = (int32_t *)(a4 - 62 + 2 * result); // 0x3caa15
                *v32 = *v32 + (int32_t)result;
                return result;
            }
            // 0x3caa56
            v21 = (char *)(a4 + 0x6101e7ff);
            v22 = v9;
            v16 = v24 & -256 | (int64_t)v30;
            v15 = false;
            v18 = v29;
            v19 = v12;
            v17 = v2 & 0xffffffff;
            goto lab_0x3caa56_2;
        }
        v8 = v23;
        v9 = v29;
        *(int32_t *)v8 = *(int32_t *)v7;
        if (v27 < 0 == ((v27 ^ v25) & (v26 ^ v25)) < 0) {
            function_3ca96b();
        }
        // 0x3ca9be
        unknown_3f685c5();
        v10 = (char *)(v9 - 0x2d27706a);
        *v10 = (char)(v26 > v25) - (char)a4 + *v10;
        unknown_ffffffffbf3e91d2();
        v12 -= 8;
        *(int64_t *)v12 = -0x1e39fec3;
        v13 = *(char *)-0x17a581a5;
        *(char *)-0x17a581a5 = v13 / 128 | 2 * v13;
        unknown_ffffffffc52ad3e9();
        v14 = v12;
    }
    // 0x3caa50
    return v14 & 0xffffffff;
  lab_0x3caa56_2:;
    int64_t v33 = v19;
    int64_t v34; // 0x3ca9ae
    uint64_t v35 = v34;
    int64_t result2 = v16;
    if (v15) {
        // 0x3caa58
        *(int64_t *)(v33 - 8) = v35;
        return result2;
    }
    char * v36 = (char *)(v17 + 0x170099a7); // 0x3caa87
    char v37 = v35; // 0x3caa87
    *v36 = *v36 + v37;
    __asm_outsd((int16_t)v18, *(int32_t *)v7);
    int64_t v38 = v18 & -256 | v35 % 256; // 0x3caa8f
    *v21 = *v21 | v37;
    int64_t v39 = v33 - (int64_t)&g2; // 0x3caa99
    uint32_t v40 = 0x10000 * (int32_t)result2 >> 16; // 0x3caa9e
    int64_t v41 = v40; // 0x3caa9e
    int64_t v42 = *(int64_t *)v39; // 0x3caaa1
    int64_t v43 = v39 + 8; // 0x3caaa1
    float80_t v44; // 0x3ca9ae
    float80_t v45 = v44 * (float80_t)*(float32_t *)v41; // 0x3caaa2
    int64_t v46 = v40 + (int32_t)v33; // 0x3caaa4
    int32_t * v47 = (int32_t *)(v42 + 96); // 0x3caaa6
    int32_t v48 = *v47; // 0x3caaa6
    int32_t v49 = v48 + v22; // 0x3caaa6
    *v47 = v49;
    v16 = v41;
    v34 = v42;
    v15 = ((v49 ^ v48) & (v49 ^ v22)) < 0;
    v44 = v45;
    v18 = v38;
    v19 = v43;
    v17 = v46;
    if (v49 < 0 == ((v49 ^ v48) & (v49 ^ v22)) < 0) {
        int32_t * v50 = (int32_t *)v41; // 0x3caaab
        *v50 = 2 * *v50;
        int64_t result3 = unknown_ffffffffc40144b8(); // 0x3caab2
        __asm_out(-68, (char)result3);
        if (v20 != 0) {
            // 0x3caabe
            if (llvm_ctpop_i8(*(char *)v38 - 72) % 2 != 0) {
                // 0x3caa54
                return result3;
            }
            // 0x3cab10
            *(int16_t *)(a4 + 0x1e8db69) = (int16_t)v45;
            __asm_in(-85);
            unknown_ffffffffa6450b32();
            return (int64_t)(*(int32_t *)0x405ba7b4e66a11d1 + 0x9101e8);
        }
        int32_t * v51 = (int32_t *)(v46 + 0x240712b4); // 0x3caa42
        int32_t v52 = *v51 | 7; // 0x3caa42
        *v51 = v52;
        if (v52 >= 0) {
            // 0x3caa54
            return result3;
        }
        // 0x3caa4b
        unknown_e859951();
        v14 = v43;
        return v14 & 0xffffffff;
    } else {
        goto lab_0x3caa56_2;
    }
}

// Address range: 0x3cab51 - 0x3cab54
int64_t function_3cab51(int64_t a1) {
    // 0x3cab51
    int64_t v1; // 0x3cab51
    return v1 & -256 | (int64_t)__asm_in((char)a1);
}

// Address range: 0x3cacac - 0x3cacde
int64_t function_3cacac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = __asm_in_133(35); // 0x3cacac
    int32_t * v2 = (int32_t *)(a1 + 6); // 0x3cacae
    int64_t v3; // 0x3cacac
    *v2 = *v2 + (int32_t)v3;
    uint32_t v4 = *(int32_t *)(a1 - 0x1bf9df0a); // 0x3cacb7
    int64_t v5 = (0x100000000 * a3 | (int64_t)v1) / (int64_t)v4; // 0x3cacb7
    __asm_rcl(*(int32_t *)(a1 - 35));
    *(int16_t *)0x3a3e94d7 = (int16_t)v3;
    bool v6; // 0x3cacac
    int64_t v7 = (v6 ? -1 : 1) + a1; // 0x3cacce
    int32_t * v8 = (int32_t *)((v5 & 0xffffffff) + 7); // 0x3cacd1
    int32_t v9 = v5; // 0x3cacd1
    *v8 = *v8 + v9;
    *(int32_t *)v7 = v9;
    return __asm_iretd(v7 + (v6 ? -4 : 4));
}

// Address range: 0x3cacf7 - 0x3cacf8
int64_t function_3cacf7(void) {
    // 0x3cacf7
    int64_t result; // 0x3cacf7
    return result;
}

// Address range: 0x3cad29 - 0x3cad88
int64_t function_3cad29(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = unknown_61065130(); // 0x3cad2a
    if ((int32_t)a4 == 0) {
        // 0x3cad38
        return v1 + 0xa3d5797c & 0xffffffff;
    }
    // 0x3cad7d
    __asm_hlt();
    return unknown_7c3f386();
}

// Address range: 0x3cada6 - 0x3cada7
int64_t function_3cada6(void) {
    // 0x3cada6
    int64_t result; // 0x3cada6
    return result;
}

// Address range: 0x3cadb1 - 0x3cadb2
int64_t function_3cadb1(void) {
    // 0x3cadb1
    int64_t result; // 0x3cadb1
    return result;
}

// Address range: 0x3cadd0 - 0x3cae15
int64_t function_3cadd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3cadd0
    int64_t v1; // 0x3cadd0
    uint64_t v2 = v1;
    int64_t v3 = a4;
    uint64_t v4 = v2 / 256 + v2; // 0x3cadd0
    int64_t v5 = v4 % 256 | v2 & -256; // 0x3cadd0
    char * v6 = (char *)v5; // 0x3cadd9
    *v6 = *v6 & (char)v4;
    int64_t v7; // 0x3cadd0
    unsigned char v8 = *(char *)&v7; // 0x3cade0
    int64_t v9; // 0x3cadd0
    unsigned char v10 = *(char *)&v9; // 0x3cade0
    bool v11; // 0x3cadd0
    int64_t v12 = v11 ? -1 : 1; // 0x3cade0
    int64_t v13 = v12 + a1; // 0x3cade0
    v9 = v13;
    v7 = v12 + a2;
    char * v14 = (char *)v13;
    unsigned char v15 = *v14; // 0x3cade1
    unsigned char v16 = (char)a4 % 32; // 0x3cade1
    bool v17 = v8 < v10; // 0x3cade1
    if (v16 != 0) {
        char v18 = v15 >> v16 | v15 << 8 - v16; // 0x3cade1
        *v14 = v18;
        v17 = v18 < 0;
    }
    int64_t v19 = v5; // 0x3cade3
    if (!v17) {
        v19 = function_3cadb1();
    }
    char v20 = __asm_in_134((int16_t)((int32_t)v2 >> 31)); // 0x3cade5
    uint64_t v21 = v19 | (int64_t)v20; // 0x3cade5
    char * v22 = (char *)(v3 - 0x58fec2fb); // 0x3cadf0
    *v22 = *v22 + (char)(v21 / 256);
    v9 = v21 & 0xffffff00 | (int64_t)(v20 + (v17 ? -100 : -101));
    int32_t v23 = __asm_in_133(127); // 0x3cadf7
    int32_t v24 = *(int32_t *)&v3; // 0x3cadf9
    int32_t v25 = v24 - 0xe76ea9; // 0x3cadf9
    *(int32_t *)v3 = v25;
    int64_t v26 = v23; // 0x3cadff
    if (((v25 ^ v24) & v24 + 0x7f189157) < 0) {
        v26 = function_3cada6();
    }
    char * v27 = (char *)(v9 + 88); // 0x3cae0f
    *v27 = *v27 | (char)v1;
    return v26 & -0x10000 | (int64_t)"hread_once" | 176;
}

// Address range: 0x3cae1b - 0x3cae2a
int64_t function_3cae1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3cae1b
    return unknown_4446a121();
}

// Address range: 0x3cae35 - 0x3cae40
int64_t function_3cae35(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3cae35
    int64_t v1; // 0x3cae35
    return (int64_t)&v1;
}

// Address range: 0x3cae51 - 0x3cae54
int64_t function_3cae51(int64_t a1) {
    // 0x3cae51
    int64_t result; // 0x3cae51
    return result;
}

// Address range: 0x3cae7b - 0x3cae7e
int64_t function_3cae7b(void) {
    // 0x3cae7b
    int64_t result; // 0x3cae7b
    return result;
}

// Address range: 0x3caee8 - 0x3caee9
int64_t function_3caee8(int64_t a1) {
    // 0x3caee8
    int64_t result; // 0x3caee8
    return result;
}

// Address range: 0x3caf41 - 0x3caf42
int64_t function_3caf41(int64_t a1) {
    // 0x3caf41
    int64_t result; // 0x3caf41
    return result;
}

// Address range: 0x3caf60 - 0x3caf6e
int64_t function_3caf60(int64_t a1, int64_t a2) {
    // 0x3caf60
    return __asm_hlt();
}

// Address range: 0x3caf74 - 0x3caf75
int64_t function_3caf74(void) {
    // 0x3caf74
    int64_t result; // 0x3caf74
    return result;
}

// Address range: 0x3caf85 - 0x3caf88
int64_t function_3caf85(void) {
    // 0x3caf85
    int64_t result; // 0x3caf85
    return result;
}

// Address range: 0x3caf88 - 0x3cafc8
int64_t function_3caf88(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = a4 - 1; // 0x3caf8a
    int64_t v3; // 0x3caf88
    int64_t result = v3 & -256 | (int64_t)__asm_in(122); // 0x3caf8a
    bool v4; // 0x3caf88
    if (v2 != 0 == v4) {
        result = function_3caf74();
    }
    int32_t * v5 = (int32_t *)(a1 - 86); // 0x3caf8c
    *v5 = *v5 + (int32_t)a3;
    char v6 = *(char *)-0x37a1386a; // 0x3caf8f
    char v7 = v3 / 256; // 0x3caf8f
    char v8 = v6 + v7; // 0x3caf8f
    *(char *)-0x37a1386a = v8;
    if (v8 == 0) {
        char * v9 = (char *)v2; // 0x3cafb5
        *v9 = *v9 - (char)v3;
        *(int32_t *)-0x7b37503c = (int32_t)a1;
        return (v3 & 0xffffff00 | (int64_t)(*(char *)&v1 - 47)) ^ 0x9caa34cd;
    }
    while (v8 < 0 != ((v8 ^ v6) & (v8 ^ v7)) < 0) {
        // continue -> 0x3caf99
    }
    // 0x3caf9c
    return result;
}

// Address range: 0x3cafc9 - 0x3cafd3
int64_t function_3cafc9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = __asm_iretd(a1); // 0x3cafcf
    int64_t v1; // 0x3cafc9
    *(char *)a3 = (char)(v1 & (uint64_t)v1 / 256);
    return result;
}

// Address range: 0x3cb018 - 0x3cb01b
int64_t function_3cb018(void) {
    // 0x3cb018
    int64_t result; // 0x3cb018
    return result;
}

// Address range: 0x3cb07b - 0x3cb07c
int64_t function_3cb07b(void) {
    // 0x3cb07b
    int64_t result; // 0x3cb07b
    return result;
}

// Address range: 0x3cb07f - 0x3cb082
int64_t function_3cb07f(void) {
    // 0x3cb07f
    int64_t result; // 0x3cb07f
    return result;
}

// Address range: 0x3cb0c1 - 0x3cb0c7
int64_t function_3cb0c1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3cb0c1
    *(char *)(a4 - 91) = (char)(a4 / 256);
    int64_t result; // 0x3cb0c1
    return result;
}

// Address range: 0x3cb0e4 - 0x3cb0e9
int64_t function_3cb0e4(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 26); // 0x3cb0e4
    *v1 = *v1 + (int32_t)a1;
    return function_3cb07b();
}

// Address range: 0x3cb0f1 - 0x3cb180
int64_t function_3cb0f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3cb0f1
    int64_t v1; // 0x3cb0f1
    *(int32_t *)(v1 + 0x6c01e849) = 0x40d083d1;
    int32_t v2 = v1; // 0x3cb0fb
    *(int32_t *)0x400ef91fa500013d = v2;
    int64_t result = v1 & 0xffffffff ^ 0x80e04328; // 0x3cb10c
    if (a4 == 0) {
        // 0x3cb14d
        return result & 0xffffff00 | 162;
    }
    char v3 = *(char *)0xcdb121b; // 0x3cb114
    *(char *)0xcdb121b = v3 + (char)((uint64_t)v1 / 256);
    int32_t * v4 = (int32_t *)(a4 + 74); // 0x3cb11a
    *v4 = *v4 | v2 >> 31;
    return result;
}

// Address range: 0x3cb19a - 0x3cb19f
int64_t function_3cb19a(int64_t a1, int64_t a2) {
    // 0x3cb19a
    int64_t result; // 0x3cb19a
    return result;
}

// Address range: 0x3cb1a2 - 0x3cb1a5
int64_t function_3cb1a2(int64_t a1) {
    // 0x3cb1a2
    int64_t result; // 0x3cb1a2
    return result;
}

// Address range: 0x3cb1ba - 0x3cb1f5
int64_t function_3cb1ba(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3cb1ba
    int64_t v1; // 0x3cb1ba
    *(int32_t *)-0x1a7ff281 = *(int32_t *)-0x1a7ff281 + (int32_t)v1;
    *(char *)0x5dcfb818a = (char)a4;
    int32_t * v2 = (int32_t *)((a4 & -0x10000 | (int64_t)*(char *)0x5dcfb818a) + 0x905d12); // 0x3cb1e4
    int32_t v3 = *v2; // 0x3cb1e4
    *v2 = 0x40000 * v3;
    char v4 = *(char *)0x158645eb0; // 0x3cb1eb
    *(char *)0x158645eb0 = v4 - (char)(a3 / 256) + (char)((v3 & 0x4000) != 0);
    return function_6fcea9cb();
}

// Address range: 0x3cb206 - 0x3cb23e
int64_t function_3cb206(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3cb206
    *(char *)a1 = __asm_insb((int16_t)a3);
    bool v1; // 0x3cb206
    int64_t v2 = v1 ? -4 : 4; // 0x3cb213
    int64_t v3 = v2 + a2; // 0x3cb213
    *(int32_t *)a1 = *(int32_t *)v3;
    int64_t v4 = v2 + a1; // 0x3cb21b
    int64_t v5 = v3 + v2; // 0x3cb21b
    int32_t v6 = (int32_t)v4 + 0x3ab8de08; // 0x3cb220
    int32_t * v7 = (int32_t *)v5; // 0x3cb222
    uint32_t v8 = *v7; // 0x3cb222
    *v7 = v8 / 8 | 0x20000000 * v8;
    int64_t result = 61 * v5 & 0xffffffff; // 0x3cb225
    if (v6 < 0) {
        result = function_3cb268(v4, v5, a3);
    }
    // 0x3cb227
    *(char *)-0x4488eb6d7035cf67 = (char)result;
    char * v9 = (char *)(result - 10); // 0x3cb233
    *v9 = *v9 + (char)(a4 / 256);
    *(char *)0x6eef1e3d = *(char *)0x6eef1e3d + (char)(v6 / 256);
    return result;
}

// Address range: 0x3cb23f - 0x3cb244
int64_t function_3cb23f(void) {
    // 0x3cb23f
    int64_t result; // 0x3cb23f
    return result;
}

// Address range: 0x3cb245 - 0x3cb24a
int64_t function_3cb245(void) {
    // 0x3cb245
    return function_6fcea9cb();
}

// Address range: 0x3cb25f - 0x3cb262
int64_t function_3cb25f(void) {
    // 0x3cb25f
    int64_t result; // 0x3cb25f
    return result;
}

// Address range: 0x3cb268 - 0x3cb29c
int64_t function_3cb268(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3cb268
    int64_t v1; // 0x3cb268
    int64_t v2 = v1;
    int64_t v3 = (v2 + 151) % 256 | v2 & 0xffffff00; // 0x3cb26d
    int64_t v4 = v3 + 0x6fb4c14f; // 0x3cb26f
    char * v5 = (char *)(a2 + 0x698c91ab); // 0x3cb274
    *v5 = *v5 - (char)v4 + (char)((int32_t)v3 < 0x904b3eb1);
    int32_t * v6 = (int32_t *)((v4 & 0xffffffff) - 107); // 0x3cb27a
    *v6 = *v6 + (int32_t)v1;
    int64_t result = function_3cb23f(); // 0x3cb28e
    *(int32_t *)((v1 + a3) % 256 | a3 & -256) = (int32_t)a1;
    return result;
}

// Address range: 0x3cb388 - 0x3cb38e
int64_t function_3cb388(void) {
    // 0x3cb388
    return unknown_3c473b8e();
}

// Address range: 0x3cb3a4 - 0x3cb3aa
int64_t function_3cb3a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3cb3a4
    int64_t result; // 0x3cb3a4
    return result;
}

// Address range: 0x3cb3d6 - 0x3cb3dc
int64_t function_3cb3d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 31); // 0x3cb3d6
    *v1 = *v1 + (int32_t)a1;
    int64_t result; // 0x3cb3d6
    return result;
}

// Address range: 0x3cb3dd - 0x3cb3ec
int64_t function_3cb3dd(int64_t a1) {
    // 0x3cb3dd
    int64_t v1; // 0x3cb3dd
    int32_t * v2 = (int32_t *)(v1 - 0x508ab50a); // 0x3cb3e3
    *v2 = *v2 + (int32_t)v1 + (int32_t)((int32_t)v1 < 0x64442701);
    return v1 + 0x9bbbd8ff & 0xffffffff;
}

// Address range: 0x409fe5 - 0x409fe6
int64_t function_409fe5(int64_t a1) {
    // 0x409fe5
    int64_t result; // 0x409fe5
    return result;
}

// Address range: 0x409fe6 - 0x40a063
int64_t function_409fe6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int16_t v1 = a3; // 0x409fe6
    __asm_outsd(v1, (int32_t)a2);
    char v2 = a2;
    __asm_outsb(v1, v2);
    bool v3; // 0x409fe6
    if (true != !v3) {
        // 0x409feb
        return function_ffffffff9bc0dc1d();
    }
    int64_t v4 = __asm_hlt(); // 0x40a025
    *(char *)(a3 + 8 + 4 * a5) = v2;
    int64_t v5; // 0x409fe6
    *(int32_t *)v4 = *(int32_t *)&v5 + 39;
    int64_t v6 = v4 & 0x30d62362; // 0x40a036
    v5 = v6 ^ 0x30c02000;
    char * v7 = (char *)(a3 - 0x7341885e); // 0x40a040
    char v8 = *v7 + (char)v6; // 0x40a040
    *v7 = v8;
    int64_t result = v5;
    if (v8 >= 0) {
        // 0x40a073
        return result;
    }
    // 0x40a048
    *(char *)0x66da72681032f60b = (char)result;
    int64_t v9; // 0x409fe6
    uint32_t v10 = (int32_t)v9; // 0x40a053
    uint32_t v11 = *(int32_t *)((v9 & -256 | 246) - 74); // 0x40a053
    int32_t v12 = v10 - v11; // 0x40a053
    int64_t result2 = result & -0xff01 | 256 * (64 * (int64_t)(v12 == 0) | (int64_t)(v11 > v10) | 128 * (int64_t)(v12 < 0) | 16 * (int64_t)(v10 % 16 - v11 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8((char)v12) % 2 == 0)) | 512; // 0x40a056
    v5 = result2;
    if (a4 == 1 || v12 == 0) {
        // 0x40a05a
        return a2 & 0xffffffff;
    }
    // 0x40a073
    return result2;
}

// Address range: 0x416342 - 0x41636d
int64_t function_416342(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x416342
    bool v1; // 0x416342
    if (a4 != 1 == v1) {
        function_416321();
    }
    uint32_t v2 = __readgsdword(a3 + 0x4556ef4e) ^ (int32_t)a3; // 0x41634e
    *(int32_t *)a1 = -0x5c6fbd9f;
    char v3 = *(char *)(0x21005530 * *(int64_t *)(a3 - 123) + 120); // 0x416366
    return 256 * (int64_t)((char)(v2 / 256) - v3) | (int64_t)(v2 & -0xff01);
}

// Address range: 0x4163e7 - 0x4163ef
int64_t function_4163e7(void) {
    // 0x4163e7
    int64_t result; // 0x4163e7
    int32_t * v1 = (int32_t *)(result - 44); // 0x4163e7
    *v1 = *v1 ^ (int32_t)result;
    return result;
}

// Address range: 0x41642e - 0x416431
int64_t function_41642e(void) {
    // 0x41642e
    int64_t v1; // 0x41642e
    int64_t v2 = v1;
    bool v3; // 0x41642e
    return (v2 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x41644a - 0x41645a
int64_t function_41644a(int64_t a1) {
    // 0x41644a
    int64_t v1; // 0x41644a
    unsigned char v2 = (char)v1;
    *(char *)a1 = v2 / 2 | 128 * v2;
    __asm_wait();
    __asm_wait();
    return v1 & 0xffffffff;
}

// Address range: 0x416473 - 0x41647c
int64_t function_416473(int64_t a1) {
    // 0x416473
    int64_t v1; // 0x416473
    uint64_t v2 = v1;
    char v3 = *(char *)(v2 + 0x2f15db88); // 0x416473
    return 256 * (int64_t)(v3 + (char)(v2 / 256)) | v2 & -0xff01;
}

// Address range: 0x41648e - 0x41648f
int64_t function_41648e(void) {
    // 0x41648e
    int64_t result; // 0x41648e
    return result;
}

// Address range: 0x4164d3 - 0x4164f0
int64_t function_4164d3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x4164d3
    int64_t v1; // 0x4164d3
    char * v2 = (char *)(v1 - 0x47b9470b); // 0x4164d7
    *v2 = *v2 - (char)(a4 / 256);
    int64_t v3; // 0x4164d3
    *(int32_t *)a1 = *(int32_t *)&v3;
    int64_t v4; // 0x4164d3
    return (int64_t)&v4 & 0xfffffff8 ^ 0x42e4bd58;
}

// Address range: 0x4164f0 - 0x4164fb
int64_t function_4164f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4164f0
    int64_t v1; // 0x4164f0
    uint32_t v2 = (int32_t)v1; // 0x4164f0
    uint32_t v3 = v2 + (int32_t)v1; // 0x4164f0
    bool v4; // 0x4164f0
    uint32_t v5 = v3 + (int32_t)v4; // 0x4164f0
    int64_t result = v5; // 0x4164f2
    if (!((v4 ? v5 <= v2 : v3 < v2))) {
        result = function_41648e();
    }
    // 0x4164f5
    *(int32_t *)(a3 + 52) = (int32_t)a3;
    return result;
}

// Address range: 0x41656c - 0x416575
int64_t function_41656c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41656c
    int64_t result; // 0x41656c
    return result;
}

// Address range: 0x4165a3 - 0x416604
int64_t function_4165a3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a2; // 0x4165a3
    int64_t v2; // 0x4165a3
    uint32_t v3 = *(int32_t *)(v2 - 0x1abbe8d7); // 0x4165a3
    int32_t v4 = v1 - v3; // 0x4165a3
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x4165a3
    *(char *)(a1 + 0x69263745) = -1;
    if (v5 % 2 != 0) {
        // 0x4165b5
        return __asm_iretd(a1);
    }
    int64_t v6 = 0x4000 * (int64_t)(v4 == 0) | v2 & -0xff01 | 0x8000 * (int64_t)(v4 < 0) | 0x1000 * (int64_t)(v1 % 16 - v3 % 16 > 15) | 1024 * (int64_t)(v5 % 2 == 0); // 0x4165b0
    *(char *)0x613a442621fc5ece = (char)v2;
    int32_t v7 = *(int32_t *)((v6 | 512) - 63); // 0x4165de
    char * v8 = (char *)(a3 + 0x6042716c); // 0x4165e1
    *v8 = *v8 | (char)(a3 / 256);
    return (v7 | (int32_t)v6 | 0x17531a3b) - 0x3d75450d;
}

// Address range: 0x416610 - 0x416612
int64_t function_416610(void) {
    // 0x416610
    int64_t v1; // 0x416610
    return function_41667d(v1, v1, v1, v1, v1, v1);
}

// Address range: 0x416626 - 0x416636
int64_t function_416626(int64_t a1, int64_t a2, int64_t a3) {
    // 0x416626
    int64_t v1; // 0x416626
    __asm_out_135((int16_t)a3, (char)v1);
    int32_t * v2 = (int32_t *)(8 * a1 + 21 + v1); // 0x416628
    *v2 = *v2 >> 16;
    return (int64_t)*(int32_t *)-0x75ffc2575dcf9f29;
}

// Address range: 0x41667d - 0x41668d
int64_t function_41667d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x41667d
    int64_t result; // 0x41667d
    return result;
}

// Address range: 0x41668e - 0x41668f
int64_t function_41668e(void) {
    // 0x41668e
    int64_t result; // 0x41668e
    return result;
}

// Address range: 0x4166a1 - 0x4166ab
int64_t function_4166a1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4166a1
    int64_t v1; // 0x4166a1
    float80_t v2; // 0x4166a1
    *(int16_t *)(v1 - 0x7476fdf0) = (int16_t)v2;
    int64_t result; // 0x4166a1
    *(int32_t *)result = *(int32_t *)&result ^ (int32_t)a2;
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x4166dd - 0x4166de
int64_t function_4166dd(void) {
    // 0x4166dd
    int64_t result; // 0x4166dd
    return result;
}

// Address range: 0x4166e7 - 0x4166f7
int64_t function_4166e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4166e7
    int64_t result; // 0x4166e7
    return result;
}

// Address range: 0x41671c - 0x41671d
int64_t function_41671c(int64_t a1) {
    // 0x41671c
    int64_t result; // 0x41671c
    return result;
}

// Address range: 0x41672b - 0x416747
int64_t function_41672b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x41672b
    int64_t v1; // 0x41672b
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a3 + 0x60dcb31e); // 0x41672d
    int32_t v4 = *v3 + 57; // 0x41672d
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x41672d
    *v3 = v4;
    bool v6; // 0x41672b
    int64_t result = 256 * (v2 / 256 + v1 + (int64_t)v6) & 0xff00 | v2 & -0xff01; // 0x416739
    if (v5 % 2 != 0) {
        result = function_4166dd();
    }
    char * v7 = (char *)result; // 0x41673b
    *v7 = *v7 ^ (char)(a4 / 256);
    *(char *)0x3be90a46 = *(char *)0x3be90a46 ^ (char)a5;
    return result;
}

// Address range: 0x41676a - 0x41676b
int64_t function_41676a(void) {
    // 0x41676a
    int64_t result; // 0x41676a
    return result;
}

// Address range: 0x41676c - 0x41676d
int64_t function_41676c(void) {
    // 0x41676c
    int64_t result; // 0x41676c
    return result;
}

// Address range: 0x416818 - 0x416942
int64_t function_416818(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1;
    int64_t v2; // 0x416818
    uint32_t v3 = (int32_t)v2 >> 31; // 0x416818
    unsigned char v4 = (char)v3 + (char)a2; // 0x416823
    if (v4 >= 0) {
        // 0x4168a6
        return a5 & -24;
    }
    int64_t v5 = a5 & 0xffffffff ^ 0x10a7ef1; // 0x4168ef
    if (a4 != 1) {
        // 0x416890
        return v5 + 0x251c8144 & 0xffffffff;
    }
    int64_t v6 = (int64_t)v4 | (int64_t)(v3 & -0x10000); // 0x416819
    bool v7; // 0x416818
    int64_t v8 = v6 | 256 * ((int64_t)(v3 / 256) - (v7 ? 25 : 24)) & 0xff00; // 0x416823
    int64_t v9 = 65 * (0x100000000 * v2 >> 32); // 0x4168a1
    if ((v5 & 0xfb72b8d) != 0) {
        int64_t v10 = v9 & 0xffffff00; // 0x416920
        uint32_t v11 = (int32_t)a2; // 0x416926
        uint32_t v12 = *(int32_t *)v8; // 0x416926
        *(char *)v1 = *(char *)&v1 + (char)(v12 > v11);
        unsigned char v13 = *(char *)v10; // 0x416930
        int64_t v14 = v13; // 0x416930
        *(int32_t *)v14 = v11 - v12;
        unsigned char v15 = *(char *)(v10 | (int64_t)(v13 + 65)); // 0x41693a
        int64_t result = v14 + 0x4f077141 & 0x4f077300 | (int64_t)v15; // 0x41693a
        int32_t * v16 = (int32_t *)((v6 | (int64_t)&g1) + 0x20181d4a); // 0x41693b
        *v16 = *v16 & (int32_t)result;
        return result;
    }
    uint32_t v17 = (int32_t)a2; // 0x416900
    uint32_t v18 = (int32_t)v8 + v17; // 0x416900
    uint32_t v19 = (int32_t)v9; // 0x416902
    int32_t v20 = v18 < v17; // 0x416902
    uint32_t v21 = *(int32_t *)v8 + v20; // 0x416902
    uint32_t v22 = v19 - v21; // 0x416902
    bool v23 = v18 < v17 ? v21 != -1 | v22 - v20 > v19 : v21 > v19; // 0x416902
    int32_t v24 = __asm_in_136((int16_t)v8); // 0x416904
    char v25 = __asm_in_134((int16_t)a6); // 0x416909
    int32_t * v26 = (int32_t *)(int64_t)v22; // 0x41690a
    *v26 = *v26 - (int32_t)a6 + (int32_t)v23;
    char * v27 = (char *)((int64_t)v18 - 0x4b2aa34b); // 0x41690c
    *v27 = *v27 + (char)(v22 / 256);
    char v28 = v22; // 0x416912
    char v29 = *(char *)(2 * v2 + 92 + v2); // 0x416912
    char v30 = v29 + v28; // 0x416912
    if (v30 < 0 == ((v30 ^ v28) & (v30 ^ v29)) < 0 == (v30 != 0)) {
        // 0x416961
        return (int64_t)(v24 & -256) | (int64_t)v25;
    }
    // 0x416918
    return unknown_ffffffff84023b25();
}

// Address range: 0x416b42 - 0x416b43
int64_t function_416b42(void) {
    // 0x416b42
    int64_t result; // 0x416b42
    return result;
}

// Address range: 0x416b58 - 0x416b59
int64_t function_416b58(void) {
    // 0x416b58
    int64_t result; // 0x416b58
    return result;
}

// Address range: 0x416b80 - 0x416b9e
int64_t function_416b80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x416b80
    int64_t v1; // 0x416b80
    bool v2; // 0x416b80
    int64_t v3 = v1 + a3 + (int64_t)v2; // 0x416b80
    uint32_t v4 = (int32_t)v1; // 0x416b82
    __asm_out_137((int16_t)v3, v4);
    if ((int32_t)v1 <= v4) {
        function_416b58();
    }
    // 0x416b87
    if (llvm_ctpop_i8((char)v3 - 19) % 2 != 0) {
        function_416b42();
    }
    // 0x416b93
    return __asm_wait();
}

// Address range: 0x416bb9 - 0x416bbc
int64_t function_416bb9(int64_t a1) {
    // 0x416bb9
    int64_t result; // 0x416bb9
    return result;
}

// Address range: 0x416beb - 0x416bec
int64_t function_416beb(void) {
    // 0x416beb
    int64_t result; // 0x416beb
    return result;
}

// Address range: 0x416c02 - 0x416c10
int64_t function_416c02(int64_t a1) {
    // 0x416c02
    int64_t result; // 0x416c02
    bool v1; // 0x416c02
    if (v1) {
        result = function_416beb();
    }
    // 0x416c05
    int64_t v2; // 0x416c02
    int32_t v3 = v2;
    *(int32_t *)v2 = 4 * v3 | (int32_t)(v3 < 0);
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x416c10 - 0x416c37
int64_t function_416c10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x416c10
    *(int32_t *)-0x204e94e63e2cb873 = (int32_t)a4;
    int32_t * v1 = (int32_t *)(a1 + 97); // 0x416c1b
    int64_t v2; // 0x416c10
    int32_t v3 = *v1 & (int32_t)v2; // 0x416c1b
    *v1 = v3;
    int64_t v4 = a4 & 0xffffffff; // 0x416c1f
    if (v3 < 0) {
        v4 = function_416bb9((int64_t)&g3);
    }
    // 0x416c21
    int64_t v5; // bp-8, 0x416c10
    __asm_out(1, (char)(int64_t)&v5);
    return v4 + 0x36bf42d4 & 0xab20c7d1 | 0x54df382e;
}

// Address range: 0x416c4f - 0x416c58
int64_t function_416c4f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x416c4f
    int64_t v1; // 0x416c4f
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 / 0x40000000;
    return a2 & 0xffffffff;
}

// Address range: 0x416c68 - 0x416c69
int64_t function_416c68(void) {
    // 0x416c68
    int64_t result; // 0x416c68
    return result;
}

// Address range: 0x416c74 - 0x416de7
int64_t function_416c74(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x416c74
    int64_t v1; // 0x416c74
    int64_t result = v1 & -126; // 0x416c7d
    char * v2 = (char *)(a2 - 0x68e3c5ed); // 0x416c7f
    char v3 = *v2; // 0x416c7f
    char v4 = a4; // 0x416c7f
    char v5 = v3 + v4; // 0x416c7f
    *v2 = v5;
    if (v5 < 0 != ((v5 ^ v3) & (v5 ^ v4)) < 0) {
        // 0x416c8c
        return result;
    }
    int32_t * v6 = (int32_t *)(result + 0x153fbec2); // 0x416c8f
    *v6 = *v6 + (int32_t)v1;
    uint32_t v7 = (int32_t)a2 & 0x68dd2779; // 0x416c96
    int64_t v8 = v7; // 0x416c9b
    if (v7 != 0) {
        v8 = function_416c68();
    }
    // 0x416c9d
    return v8 & -57;
}

// Address range: 0x416df1 - 0x416e75
int64_t function_416df1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x416df1
    int64_t v1; // 0x416df1
    int64_t result = v1;
    *(char *)(a3 + 0x2b1c7d0f) = (char)(a4 / 256);
    bool v2; // 0x416df1
    if (!v2) {
        // 0x416e73
        return (result + 74) % 256 | result & -256;
    }
    // 0x416dfa
    return result;
}

// Address range: 0x416ef6 - 0x416f01
int64_t function_416ef6(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 58); // 0x416ef6
    *v1 = *v1 & (int32_t)a3;
    return function_4072f3d2();
}

// Address range: 0x416f37 - 0x416f38
int64_t function_416f37(void) {
    // 0x416f37
    int64_t result; // 0x416f37
    return result;
}

// Address range: 0x416f48 - 0x416f61
int64_t function_416f48(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x416f48
    float80_t v1; // 0x416f48
    *(int64_t *)(a2 + 118) = (int64_t)v1;
    return 0x4cf917a6;
}

// Address range: 0x416f6d - 0x416f6e
int64_t function_416f6d(void) {
    // 0x416f6d
    int64_t result; // 0x416f6d
    return result;
}

// Address range: 0x416f6e - 0x41704b
int64_t function_416f6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint32_t v1 = (int32_t)a2;
    int64_t result; // 0x416f6e
    bool v2; // 0x416f6e
    if (a4 == 1 || v2) {
        // 0x416f70
        *(int32_t *)a2 = v1 / 2 | 0x80000000 * v1;
        return result;
    }
    // 0x416f7e
    *(int32_t *)0x432d9613 = *(int32_t *)0x432d9613 ^ (int32_t)result;
    __asm_outsd((int16_t)a3, v1);
    char * v3 = (char *)(a2 - 0x4941c3c9); // 0x416f90
    *v3 = *v3 ^ (char)result;
    return result & -256 | 22;
}

// Address range: 0x41704c - 0x417054
int64_t function_41704c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41704c
    int64_t result; // 0x41704c
    return result;
}

// Address range: 0x417076 - 0x41707b
int64_t function_417076(void) {
    // 0x417076
    return function_4fd108ed();
}

// Address range: 0x4170d4 - 0x4170d6
int64_t function_4170d4(void) {
    // 0x4170d4
    int64_t v1; // 0x4170d4
    return function_4170ef(v1, v1, v1, v1);
}

// Address range: 0x4170dc - 0x4170df
int64_t function_4170dc(void) {
    // 0x4170dc
    int64_t result; // 0x4170dc
    return result;
}

// Address range: 0x4170ef - 0x417117
int64_t function_4170ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4170ef
    __asm_int(108);
    int64_t v1; // 0x4170ef
    int64_t v2 = v1 & 0xffffffff | 0x100000000 * a3; // 0x4170f4
    int64_t v3 = v1 & 0xffffffff; // 0x4170f4
    int32_t v4 = v2 / v3; // 0x4170f6
    __asm_out_138(38, v4);
    int32_t v5 = v1; // 0x4170fb
    *(int32_t *)a2 = v5 + (int32_t)v1;
    int64_t v6; // 0x4170ef
    *(int32_t *)a1 = *(int32_t *)&v6 ^ (int32_t)a2;
    int32_t * v7 = (int32_t *)(a1 + 0x7620593c); // 0x41710d
    *v7 = *v7 & v5;
    int32_t v8 = v4 & -62 ^ 225; // 0x417115
    __asm_out_137((int16_t)(v2 % v3), v8);
    return 0x10000 * v8 >> 16;
}

// Address range: 0x41712e - 0x41712f
int64_t function_41712e(void) {
    // 0x41712e
    int64_t result; // 0x41712e
    return result;
}

// Address range: 0x417154 - 0x417157
int64_t function_417154(int64_t a1) {
    // 0x417154
    int64_t result; // 0x417154
    return result;
}

// Address range: 0x41715b - 0x41715e
int64_t function_41715b(int64_t a1) {
    // 0x41715b
    int64_t result; // 0x41715b
    bool v1; // 0x41715b
    if (true == !v1) {
        result = function_41712e();
    }
    // 0x41715d
    return result;
}

// Address range: 0x417188 - 0x417189
int64_t function_417188(void) {
    // 0x417188
    int64_t result; // 0x417188
    return result;
}

// Address range: 0x4171dc - 0x4171e2
int64_t function_4171dc(int64_t a1) {
    char v1 = __asm_in((char)a1); // 0x4171dc
    int64_t v2; // 0x4171dc
    return (v2 | (int64_t)v1) & -256 | (int64_t)(v1 - 108);
}

// Address range: 0x4171e2 - 0x4171ea
int64_t function_4171e2(void) {
    char v1 = __asm_in(12); // 0x4171e4
    int64_t v2; // 0x4171e2
    bool v3; // 0x4171e2
    return (v2 | (int64_t)v1) & -256 | (int64_t)(v1 + 85 + (char)v3);
}

// Address range: 0x4171ec - 0x4171f8
int64_t function_4171ec(int64_t a1, int64_t a2) {
    // 0x4171ec
    int64_t result; // 0x4171ec
    return result;
}

// Address range: 0x417226 - 0x417239
int64_t function_417226(int64_t a1, int64_t a2, int64_t a3) {
    // 0x417226
    __asm_iretd(a1);
    return function_ffffffffde867349();
}

// Address range: 0x41724c - 0x41724d
int64_t function_41724c(void) {
    // 0x41724c
    int64_t result; // 0x41724c
    return result;
}

// Address range: 0x41724e - 0x417253
int64_t function_41724e(void) {
    // 0x41724e
    return function_ffffffffa178096c();
}

// Address range: 0x417253 - 0x417257
int64_t function_417253(int64_t a1) {
    // 0x417253
    return function_41724c();
}

// Address range: 0x417257 - 0x417263
int64_t function_417257(int64_t a1, int64_t a2, int64_t a3) {
    // 0x417257
    return function_264e3ad5();
}

// Address range: 0x4172ca - 0x4172cd
int64_t function_4172ca(int64_t a1, int64_t a2) {
    // 0x4172ca
    int64_t result; // 0x4172ca
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x4172e8 - 0x4172eb
int64_t function_4172e8(void) {
    // 0x4172e8
    int64_t result; // 0x4172e8
    return result;
}
