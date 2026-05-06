/*
 * Targeted RetDec C for native executable gap queue batch 979.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1381a4-0x1383a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bbba9-0x2bbda9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bbda9-0x2bbfa9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bbfa9-0x2bc1a9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bc3a9-0x2bc5a9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bc6a9-0x2bc7a9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bc7a9-0x2bc9a9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bc9a9-0x2bcba9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x30461e-0x30481e rank=- name=- kind=- bytes=- uncovered=-
 *   0x30481e-0x304a1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x304a1e-0x304c1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x304c1e-0x304e1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x304e1e-0x30501e rank=- name=- kind=- bytes=- uncovered=-
 *   0x30501e-0x30521e rank=- name=- kind=- bytes=- uncovered=-
 *   0x30521e-0x30541e rank=- name=- kind=- bytes=- uncovered=-
 *   0x30541e-0x30561e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_13816e();
int64_t function_1381a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1381b1(int64_t a1);
int64_t function_1381bb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_13822b(int64_t a1);
int64_t function_13825a(void);
int64_t function_138265(void);
int64_t function_138276(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7);
int64_t function_13830b(void);
int64_t function_138334(int64_t a1);
int64_t function_138349(int64_t a1, int64_t a2);
int64_t function_13834f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_168c15e();
int64_t function_1d8c252f();
int64_t function_21156b23();
int64_t function_277659f7();
int64_t function_2bbba9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2bbbd7(int64_t a1);
int64_t function_2bbc13(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2bbc38(void);
int64_t function_2bbc3f(void);
int64_t function_2bbc7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bbc87(int64_t a1, int64_t a2);
int64_t function_2bbc9a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2bbcbc(void);
int64_t function_2bbd0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bbd35(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2bbd66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2bbdda(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bbe98(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bbf05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_2bbf49(void);
int64_t function_2bbf9e(void);
int64_t function_2bbff4(void);
int64_t function_2bbff5(int64_t a1);
int64_t function_2bc000(void);
int64_t function_2bc00f(void);
int64_t function_2bc07f(void);
int64_t function_2bc08c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2bc0a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bc0b3(void);
int64_t function_2bc0be(void);
int64_t function_2bc0cb(void);
int64_t function_2bc0d7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_2bc151(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bc162(void);
int64_t function_2bc165(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_2bc3a9(int64_t a1);
int64_t function_2bc3bd(void);
int64_t function_2bc3da(int64_t a1);
int64_t function_2bc485(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2bc4b8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2bc53b(void);
int64_t function_2bc543(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bc54d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bc54f(void);
int64_t function_2bc569(int64_t a1);
int64_t function_2bc597(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2bc5a0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2bc5b2();
int64_t function_2bc5de();
int64_t function_2bc6a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2bc77c(void);
int64_t function_2bc7c2(int64_t a1);
int64_t function_2bc7c8(int64_t a1, int64_t a2);
int64_t function_2bc8ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2bc8db(int64_t a1);
int64_t function_2bc8fa(void);
int64_t function_2bc93e(void);
int64_t function_2bc943(void);
int64_t function_2bc948(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bc96f(void);
int64_t function_2bc980(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2bc9a1(void);
int64_t function_2bca69(int64_t a1);
int64_t function_2bcaa3(void);
int64_t function_2bcac4(int64_t a1);
int64_t function_2bcaca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bcaeb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bcb0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2fa1bb();
int64_t function_30461e(void);
int64_t function_30461f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_304623(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_3046be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_304817(int64_t a1);
int64_t function_304975(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_304a98(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_304c0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_304d9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_304eea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_305069(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3051ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3052f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_305458(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_5aa5b3();
int64_t function_c823b();
int64_t function_ffffffff802cf92e();
int64_t function_ffffffffe8e00d31();
int64_t unknown_11ba1d2();
int64_t unknown_191581f9();
int64_t unknown_1a95d218();
int64_t unknown_235fb827();
int64_t unknown_244dbdd9();
int64_t unknown_385ee92a();
int64_t unknown_3d2da8e2();
int64_t unknown_3e70216c();
int64_t unknown_401d36c8();
int64_t unknown_51c41991();
int64_t unknown_60af8d49();
int64_t unknown_63e43a72();
int64_t unknown_7ad73f01();
int64_t unknown_83b707();
int64_t unknown_ffffffff92b191be();
int64_t unknown_ffffffffa47828ee();
int64_t unknown_ffffffffc429948f();
int64_t unknown_ffffffffc42d28c1();
int64_t unknown_ffffffffe0236035();
int64_t unknown_ffffffffe662095a();
int64_t unknown_ffffffffebbf125e();
int64_t unknown_fffffffffa8bbdf2();

// Address range: 0x1381a4 - 0x1381a9
int64_t function_1381a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1381a4
    int64_t v1; // 0x1381a4
    return 256 * v1 & 0xff00 ^ v1;
}

// Address range: 0x1381b1 - 0x1381bb
int64_t function_1381b1(int64_t a1) {
    // 0x1381b1
    *(char *)-0x4fea962e = *(char *)-0x4fea962e + 30;
    int64_t result; // 0x1381b1
    return result;
}

// Address range: 0x1381bb - 0x1381fd
int64_t function_1381bb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1381bb
    int64_t v1; // 0x1381bb
    char * v2 = (char *)(v1 + 0x4eec0000); // 0x1381bb
    *v2 = *v2 + (char)v1;
    char * v3 = (char *)(v1 + 0x1201e800); // 0x1381c1
    *v3 = *v3 + (char)(a4 / 256);
    char * v4 = (char *)(v1 + 8); // 0x1381c7
    *v4 = *v4 + (char)(v1 / 256);
    unknown_244dbdd9();
    int64_t v5; // 0x1381bb
    __asm_outsb((int16_t)a3, *(char *)&v5);
    int64_t v6 = __asm_int1(); // 0x1381d9
    char * v7 = (char *)(a2 - 0x17ab2477); // 0x1381df
    *v7 = -*v7;
    uint32_t v8 = (int32_t)v1; // 0x1381e5
    int64_t v9 = v6 + 0xfe448451 & 0xffffffff; // 0x1381e7
    if (-1 - v8 >= v8) {
        v9 = function_13816e();
    }
    // 0x1381e9
    __asm_out_133(7, (char)v9);
    unknown_191581f9();
    return function_277659f7();
}

// Address range: 0x13822b - 0x13822e
int64_t function_13822b(int64_t a1) {
    // 0x13822b
    int64_t result; // 0x13822b
    return result;
}

// Address range: 0x13825a - 0x13825f
int64_t function_13825a(void) {
    // 0x13825a
    return function_21156b23();
}

// Address range: 0x138265 - 0x138268
int64_t function_138265(void) {
    // 0x138265
    int64_t result; // 0x138265
    return result;
}

// Address range: 0x138276 - 0x138295
int64_t function_138276(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    // 0x138276
    int64_t v1; // 0x138276
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 ^ -0x3b03fe18;
    __asm_int(14);
    char * v3 = (char *)(a1 - 123); // 0x138286
    unsigned char v4 = *v3; // 0x138286
    unsigned char v5 = v4 + (char)(a6 / 256); // 0x138286
    *v3 = v5;
    int64_t result = unknown_ffffffffc429948f(); // 0x138289
    char * v6 = (char *)(a3 + 0x20346bc3); // 0x13828e
    *v6 = *v6 + (char)(a3 / 256) + (char)(v5 < v4);
    return result;
}

// Address range: 0x13830b - 0x13830e
int64_t function_13830b(void) {
    // 0x13830b
    int64_t result; // 0x13830b
    return result;
}

// Address range: 0x138334 - 0x138335
int64_t function_138334(int64_t a1) {
    // 0x138334
    int64_t result; // 0x138334
    return result;
}

// Address range: 0x138349 - 0x13834f
int64_t function_138349(int64_t a1, int64_t a2) {
    // 0x138349
    return function_2fa1bb();
}

// Address range: 0x13834f - 0x138373
int64_t function_13834f(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_ffffffffebbf125e(); // 0x138355
    int64_t v2 = 0xc065c00; // bp-8, 0x13835a
    int64_t v3; // 0x13834f
    int32_t * v4 = (int32_t *)(((v1 | v3) & 0xffffffff) + 0xd8ecce); // 0x138363
    *v4 = *v4 + (int32_t)(int64_t)&v2;
    return (v1 + 248) % 256 | v1 & -256;
}

// Address range: 0x2bbba9 - 0x2bbbd6
int64_t function_2bbba9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2bbba9
    int64_t v1; // 0x2bbba9
    *(int64_t *)v1 = a5;
    int64_t v2; // 0x2bbba9
    *(char *)a4 = *(char *)&v2 & (char)a4;
    int64_t v3 = v1 + 0x80fffec3 & 0xffffffff; // 0x2bbbbc
    int32_t * v4 = (int32_t *)(v3 - 37); // 0x2bbbbd
    *v4 = (int32_t)((int32_t)v1 < 0x7f00013d) + (int32_t)a1 + *v4;
    int64_t v5; // 0x2bbba9
    *(int32_t *)v3 = *(int32_t *)&v5;
    bool v6; // 0x2bbba9
    int64_t v7 = v6 ? -4 : 4; // 0x2bbbc5
    return unknown_11ba1d2(v3 + v7, v7 + a2);
}

// Address range: 0x2bbbd7 - 0x2bbbdd
int64_t function_2bbbd7(int64_t a1) {
    // 0x2bbbd7
    int64_t v1; // 0x2bbbd7
    return v1 + 0xbf931058 & 0xffffffff;
}

// Address range: 0x2bbc13 - 0x2bbc1a
int64_t function_2bbc13(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2bbc13
    *(char *)a1 = __asm_insb((int16_t)a3);
    return function_ffffffff802cf92e();
}

// Address range: 0x2bbc38 - 0x2bbc39
int64_t function_2bbc38(void) {
    // 0x2bbc38
    int64_t result; // 0x2bbc38
    return result;
}

// Address range: 0x2bbc3f - 0x2bbc41
int64_t function_2bbc3f(void) {
    // 0x2bbc3f
    int64_t v1; // 0x2bbc3f
    return function_2bbc87(v1, v1);
}

// Address range: 0x2bbc7e - 0x2bbc87
int64_t function_2bbc7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bbc7e
    int64_t v1; // 0x2bbc7e
    return v1 ^ a4 & 0xff00;
}

// Address range: 0x2bbc87 - 0x2bbc8f
int64_t function_2bbc87(int64_t a1, int64_t a2) {
    // 0x2bbc87
    int64_t v1; // 0x2bbc87
    uint64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x2bbc9a - 0x2bbca7
int64_t function_2bbc9a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2bbc9a
    return function_ffffffffe8e00d31();
}

// Address range: 0x2bbcbc - 0x2bbcbe
int64_t function_2bbcbc(void) {
    // 0x2bbcbc
    int64_t result; // 0x2bbcbc
    return result;
}

// Address range: 0x2bbd0b - 0x2bbd24
int64_t function_2bbd0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 0x51e6d8c1); // 0x2bbd19
    *v1 = *v1 + (int32_t)a4;
    return 0xe890f06f;
}

// Address range: 0x2bbd35 - 0x2bbd3c
int64_t function_2bbd35(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a2 + 37); // 0x2bbd35
    int64_t result; // 0x2bbd35
    *v1 = *v1 + (char)result;
    char * v2 = (char *)(a4 - 121); // 0x2bbd38
    *v2 = *v2 + (char)a3;
    return result;
}

// Address range: 0x2bbd66 - 0x2bbdb6
int64_t function_2bbd66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    *(int32_t *)a4 = (int32_t)a4;
    uint32_t v2 = *(int32_t *)&v1; // 0x2bbd70
    int64_t result = v2; // 0x2bbd70
    if (v2 < 0x2470002) {
        // 0x2bbdb5
        return result;
    }
    char * v3 = (char *)(a1 - 113); // 0x2bbd7b
    int64_t v4; // 0x2bbd66
    *v3 = *v3 - (char)((uint64_t)v4 / 256);
    return (result & 0xffff00ff | (int64_t)&g2) ^ 51;
}

// Address range: 0x2bbdda - 0x2bbdde
int64_t function_2bbdda(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bbdda
    int64_t result; // 0x2bbdda
    return result;
}

// Address range: 0x2bbe98 - 0x2bbea3
int64_t function_2bbe98(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bbe98
    __asm_in_134(112);
    return function_1d8c252f();
}

// Address range: 0x2bbf05 - 0x2bbf40
int64_t function_2bbf05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    // 0x2bbf05
    int64_t v1; // 0x2bbf05
    int64_t v2 = v1;
    int16_t v3 = a3; // 0x2bbf07
    *(int32_t *)a1 = __asm_insd(v3);
    int64_t v4; // 0x2bbf05
    __asm_frstor(*(int864_t *)&v4);
    char * v5 = (char *)(a4 + 32); // 0x2bbf11
    *v5 = (char)(a5 % 2 != 0) + (char)a3 + *v5;
    *(char *)(v1 + 26) = (char)v2;
    *(char *)a1 = *(char *)&v4;
    int64_t v6 = (a5 & (int64_t)&g1) == 0 ? 1 : -1; // 0x2bbf27
    *(int32_t *)(v6 + a1) = *(int32_t *)(v6 + a2);
    return 257 * v2 & 0xff00 | v2 & -0x10000 | (int64_t)__asm_in_135(v3);
}

// Address range: 0x2bbf49 - 0x2bbf4a
int64_t function_2bbf49(void) {
    // 0x2bbf49
    int64_t result; // 0x2bbf49
    return result;
}

// Address range: 0x2bbf9e - 0x2bbf9f
int64_t function_2bbf9e(void) {
    // 0x2bbf9e
    int64_t result; // 0x2bbf9e
    return result;
}

// Address range: 0x2bbff4 - 0x2bbff5
int64_t function_2bbff4(void) {
    // 0x2bbff4
    int64_t result; // 0x2bbff4
    return result;
}

// Address range: 0x2bbff5 - 0x2bbff6
int64_t function_2bbff5(int64_t a1) {
    // 0x2bbff5
    int64_t result; // 0x2bbff5
    return result;
}

// Address range: 0x2bc000 - 0x2bc002
int64_t function_2bc000(void) {
    // 0x2bc000
    return function_2bbff4();
}

// Address range: 0x2bc00f - 0x2bc011
int64_t function_2bc00f(void) {
    // 0x2bc00f
    return function_2bbf9e();
}

// Address range: 0x2bc07f - 0x2bc081
int64_t function_2bc07f(void) {
    // 0x2bc07f
    return function_2bc0be();
}

// Address range: 0x2bc08c - 0x2bc0a8
int64_t function_2bc08c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x59410061); // 0x2bc092
    int64_t result; // 0x2bc08c
    *v1 = *v1 | (int32_t)result;
    char * v2 = (char *)(a1 + 0x5742fa5a); // 0x2bc09f
    *v2 = *v2 + (char)(a4 / 256);
    return result;
}

// Address range: 0x2bc0a9 - 0x2bc0b0
int64_t function_2bc0a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bc0a9
    int64_t result; // 0x2bc0a9
    int32_t * v1 = (int32_t *)(2 * result - 92); // 0x2bc0a9
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x2bc0b3 - 0x2bc0b9
int64_t function_2bc0b3(void) {
    // 0x2bc0b3
    int64_t result; // 0x2bc0b3
    char * v1 = (char *)(result - 0x72e0cb49); // 0x2bc0b3
    *v1 = *v1 / 2;
    return result;
}

// Address range: 0x2bc0be - 0x2bc0c6
int64_t function_2bc0be(void) {
    // 0x2bc0be
    return function_168c15e();
}

// Address range: 0x2bc0cb - 0x2bc0ce
int64_t function_2bc0cb(void) {
    // 0x2bc0cb
    int64_t result; // 0x2bc0cb
    return result;
}

// Address range: 0x2bc0d7 - 0x2bc136
int64_t function_2bc0d7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x2bc0d7
    int64_t v1; // 0x2bc0d7
    bool v2; // 0x2bc0d7
    if (v2) {
        // 0x2bc114
        *(char *)-0x1705095e = *(char *)-0x1705095e | (char)v1;
        int32_t * v3 = (int32_t *)(v1 + 0x1de230a); // 0x2bc11a
        *v3 = *v3 + (int32_t)v1;
        unknown_385ee92a();
        unknown_ffffffffe0236035();
        return function_2bc162();
    }
    // 0x2bc0da
    __asm_in_135((int16_t)a3);
    unknown_3d2da8e2();
    int32_t * v4 = (int32_t *)(v1 - 32); // 0x2bc0e1
    uint32_t v5 = *v4; // 0x2bc0e1
    uint32_t v6 = v5 + (int32_t)a1; // 0x2bc0e1
    *v4 = v6;
    uint64_t v7 = unknown_ffffffffa47828ee(); // 0x2bc0e4
    *(char *)-0x16fd533a = *(char *)-0x16fd533a | (char)v1;
    int32_t * v8 = (int32_t *)(v7 - 0x6df389f6); // 0x2bc0f9
    int32_t v9 = *v8; // 0x2bc0f9
    *v8 = v9 + (int32_t)(256 * (v7 / 256 + a4 / 256 + (int64_t)(v6 < v5)) & 0xff00 | a4 & 0xffff00ff);
    int64_t result = unknown_83b707(0xb49b01e8); // 0x2bc0ff
    *(int32_t *)-0x71d1ac4c = *(int32_t *)-0x71d1ac4c + (int32_t)v1;
    return result;
}

// Address range: 0x2bc151 - 0x2bc162
int64_t function_2bc151(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bc151
    int64_t result; // 0x2bc151
    int32_t * v1 = (int32_t *)(4 * a4 + 0x754f6233 + result); // 0x2bc151
    *v1 = *v1 + (int32_t)a3;
    int32_t * v2 = (int32_t *)(a3 + 0x14a04cce); // 0x2bc15a
    *v2 = *v2 + (int32_t)result;
    __asm_out_133(-59, (char)result);
    return result;
}

// Address range: 0x2bc162 - 0x2bc164
int64_t function_2bc162(void) {
    // 0x2bc162
    int64_t result; // 0x2bc162
    return result;
}

// Address range: 0x2bc165 - 0x2bc18d
int64_t function_2bc165(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1;
    int64_t v2 = unknown_3e70216c(); // 0x2bc166
    uint32_t v3 = (int32_t)a4 % 32; // 0x2bc16b
    int32_t v4; // 0x2bc165
    int64_t v5; // 0x2bc165
    if (v3 == 0) {
        // 0x2bc165
        v4 = a1;
    } else {
        int32_t * v6 = (int32_t *)(v5 + 0x1e83aa1); // 0x2bc16b
        *v6 = *v6 << v3;
        v4 = *(int32_t *)&v1;
    }
    uint32_t v7 = v4 & (int32_t)a2; // 0x2bc171
    *(int32_t *)v1 = (int32_t)v2;
    int64_t result = (v2 + a4 / 256) % 256 | v2 & -256; // 0x2bc179
    bool v8; // 0x2bc165
    int32_t * v9 = (int32_t *)(v1 + (v8 ? -4 : 4)); // 0x2bc17b
    *v9 = *v9 + (int32_t)result;
    int32_t * v10 = (int32_t *)(8 * v5 + (int64_t)v7); // 0x2bc186
    *v10 = *v10 + v7;
    return result;
}

// Address range: 0x2bc3a9 - 0x2bc3aa
int64_t function_2bc3a9(int64_t a1) {
    // 0x2bc3a9
    int64_t result; // 0x2bc3a9
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x2bc3bd - 0x2bc3be
int64_t function_2bc3bd(void) {
    // 0x2bc3bd
    int64_t result; // 0x2bc3bd
    return result;
}

// Address range: 0x2bc3da - 0x2bc3dc
int64_t function_2bc3da(int64_t a1) {
    // 0x2bc3da
    int64_t result; // 0x2bc3da
    return result;
}

// Address range: 0x2bc485 - 0x2bc48c
int64_t function_2bc485(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a2 - 103); // 0x2bc485
    bool v2; // 0x2bc485
    *v1 = *v1 + (char)v2;
    int64_t result; // 0x2bc485
    return result;
}

// Address range: 0x2bc4b8 - 0x2bc52c
int64_t function_2bc4b8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x2bc4b8
    int64_t v3 = (unknown_ffffffff92b191be() & 0xffffffff | 0x100000000 * a3) % (v2 & 0xffffffff); // 0x2bc4bf
    int64_t v4 = v3 & 0xffffffff; // 0x2bc4bf
    int32_t * v5 = (int32_t *)(v4 - 65); // 0x2bc4c8
    uint32_t v6 = *v5; // 0x2bc4c8
    int32_t v7 = v2; // 0x2bc4c8
    int32_t v8 = v6 + v7; // 0x2bc4c8
    *v5 = v8;
    if (v8 < 0 != ((v8 ^ v6) & (v8 ^ v7)) < 0) {
        // 0x2bc4cd
        return function_2bc543(0xe872d282, v1, v4, a4);
    }
    // 0x2bc510
    __asm_wait(0xe872d282);
    unknown_1a95d218();
    uint32_t v9 = *(int32_t *)&v1; // 0x2bc517
    unsigned char v10 = (char)v9;
    *(char *)(int64_t)v9 = v10 / 128 | 2 * v10;
    int64_t v11 = unknown_235fb827(); // 0x2bc521
    char v12 = *(char *)((256 * (v3 + a4 / 256 + (int64_t)(v8 < v6)) & 0xff00 | a4 & -0xff01) - 0x60deb4f); // 0x2bc526
    return v11 & -256 | (int64_t)(v12 + (char)v11);
}

// Address range: 0x2bc53b - 0x2bc53d
int64_t function_2bc53b(void) {
    // 0x2bc53b
    return function_2bc5b2();
}

// Address range: 0x2bc543 - 0x2bc54c
int64_t function_2bc543(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bc543
    __asm_iretd();
    return function_2bc54f();
}

// Address range: 0x2bc54d - 0x2bc54f
int64_t function_2bc54d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bc54d
    int64_t result; // 0x2bc54d
    return result;
}

// Address range: 0x2bc54f - 0x2bc550
int64_t function_2bc54f(void) {
    // 0x2bc54f
    int64_t result; // 0x2bc54f
    return result;
}

// Address range: 0x2bc569 - 0x2bc56c
int64_t function_2bc569(int64_t a1) {
    // 0x2bc569
    int64_t result; // 0x2bc569
    return result;
}

// Address range: 0x2bc597 - 0x2bc59e
int64_t function_2bc597(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2bc597
    int64_t result; // 0x2bc597
    *(char *)a1 = (char)result + (char)a3;
    return result;
}

// Address range: 0x2bc5a0 - 0x2bc5a4
int64_t function_2bc5a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2bc5a0
    return function_2bc5de();
}

// Address range: 0x2bc6a9 - 0x2bc70e
int64_t function_2bc6a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2bc6a9
    int64_t v1; // 0x2bc6a9
    uint64_t v2 = v1;
    float80_t v3; // 0x2bc6a9
    *(int16_t *)(a4 - 0x17f0d5b5) = (int16_t)v3;
    int64_t v4; // 0x2bc6a9
    *(int32_t *)-0xd3b948 = *(int32_t *)-0xd3b948 + (int32_t)v4;
    int64_t v5 = unknown_ffffffffc42d28c1(); // 0x2bc6bb
    char * v6 = (char *)(a1 + 110); // 0x2bc6c0
    *v6 = *v6 + (char)a4;
    *(char *)a1 = __asm_insb((int16_t)a4 + (int16_t)a3);
    uint64_t v7 = (v5 & 0xffffffff) * (int64_t)*(int32_t *)(v2 - 0x7aab442d); // 0x2bc6c4
    char v8 = *(char *)(v2 + 0x1d5401e8); // 0x2bc6cc
    *(int32_t *)a1 = (int32_t)v4;
    bool v9; // 0x2bc6a9
    int64_t v10 = (v9 ? -4 : 4) + a1; // 0x2bc6d2
    char * v11 = (char *)v10; // 0x2bc6d3
    *v11 = *v11 + (char)(v4 / 256);
    __asm_int(26);
    int32_t * v12 = (int32_t *)((256 * (int64_t)(v8 + (char)(v2 / 256) + (char)(v7 > 0xffffffff)) | v2 & -0xff01) + 0x81e5709); // 0x2bc6e3
    *v12 = *v12 - (int32_t)v1;
    *v11 = *(char *)&v4;
    int64_t v13 = v9 ? -1 : 1; // 0x2bc6eb
    int64_t v14 = unknown_fffffffffa8bbdf2(v10 + v13, (v4 & 0xffffffff) + v13); // 0x2bc6ec
    *(int32_t *)0x4e995ef6 = *(int32_t *)0x4e995ef6 >> 1;
    int64_t result = unknown_7ad73f01(); // 0x2bc6fb
    *(char *)(a6 + 40) = (char)(-((v14 & 0xff00)) / 256);
    char * v15 = (char *)((v7 & 0xffffffff) - 1); // 0x2bc705
    *v15 = *v15 | (char)result;
    __asm_out(-24, (int32_t)result);
    int32_t * v16 = (int32_t *)(a6 - 19); // 0x2bc709
    *v16 = *v16 - 0x8fe17e2;
    return result;
}

// Address range: 0x2bc77c - 0x2bc77d
int64_t function_2bc77c(void) {
    // 0x2bc77c
    int64_t result; // 0x2bc77c
    return result;
}

// Address range: 0x2bc7c2 - 0x2bc7c8
int64_t function_2bc7c2(int64_t a1) {
    // 0x2bc7c2
    return unknown_401d36c8(a1);
}

// Address range: 0x2bc7c8 - 0x2bc7e7
int64_t function_2bc7c8(int64_t a1, int64_t a2) {
    // 0x2bc7c8
    int64_t v1; // 0x2bc7c8
    uint64_t v2 = v1;
    char * v3 = (char *)(v1 + 2); // 0x2bc7cd
    *v3 = *v3 + (char)(v2 / 256);
    int64_t v4; // 0x2bc7c8
    *(char *)a1 = *(char *)&v4;
    bool v5; // 0x2bc7c8
    int64_t v6 = v5 ? -1 : 1; // 0x2bc7d2
    *(int32_t *)0x5abc2e15 = (int32_t)v2;
    return unknown_63e43a72(v6 + a1, v6 + a2);
}

// Address range: 0x2bc8ad - 0x2bc8bc
int64_t function_2bc8ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2bc8ad
    return function_5aa5b3();
}

// Address range: 0x2bc8db - 0x2bc8dc
int64_t function_2bc8db(int64_t a1) {
    // 0x2bc8db
    int64_t result; // 0x2bc8db
    return result;
}

// Address range: 0x2bc8fa - 0x2bc8fd
int64_t function_2bc8fa(void) {
    // 0x2bc8fa
    int64_t result; // 0x2bc8fa
    return result;
}

// Address range: 0x2bc93e - 0x2bc940
int64_t function_2bc93e(void) {
    // 0x2bc93e
    int64_t v1; // 0x2bc93e
    return function_2bc948(v1, v1, v1, v1);
}

// Address range: 0x2bc943 - 0x2bc948
int64_t function_2bc943(void) {
    // 0x2bc943
    return unknown_60af8d49();
}

// Address range: 0x2bc948 - 0x2bc966
int64_t function_2bc948(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + a1); // 0x2bc94a
    *v1 = *v1 | 37;
    int64_t v2; // 0x2bc948
    int32_t * v3 = (int32_t *)(a2 + 22 + 8 * v2); // 0x2bc94e
    *v3 = *v3 | (int32_t)v2;
    int64_t v4 = unknown_ffffffffe662095a(); // 0x2bc954
    unsigned char v5 = (char)v4; // 0x2bc959
    char v6 = v5 - 19; // 0x2bc959
    int64_t v7 = 256 * (64 * (int64_t)(v6 == 0) | (int64_t)(v5 < 19) | 128 * (int64_t)(v6 < 0) | 16 * (int64_t)(v5 % 16 > 18) | 4 * (int64_t)(llvm_ctpop_i8(v6) % 2 == 0)); // 0x2bc95b
    int64_t v8 = v7 | v4 & -0xff01 | 512; // 0x2bc95b
    char * v9 = (char *)(a4 + 0x1e88701 + v8); // 0x2bc95c
    *v9 = (char)v4;
    int64_t result = v8 & -256 | (int64_t)*v9; // 0x2bc95c
    while (v5 <= 19) {
        // 0x2bc95b
        v8 = v7 | result & -0xff01 | 512;
        v9 = (char *)(a4 + 0x1e88701 + v8);
        *v9 = (char)result;
        result = v8 & -256 | (int64_t)*v9;
    }
    // 0x2bc965
    return result;
}

// Address range: 0x2bc96f - 0x2bc970
int64_t function_2bc96f(void) {
    // 0x2bc96f
    int64_t result; // 0x2bc96f
    return result;
}

// Address range: 0x2bc980 - 0x2bc991
int64_t function_2bc980(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    uint32_t v2 = (int32_t)a4;
    uint32_t v3 = v2 + (int32_t)a3; // 0x2bc980
    *(int32_t *)a4 = v3;
    if (v3 != 0 && v3 < v2) {
        function_2bc96f();
    }
    uint32_t v4 = v2 % 32; // 0x2bc985
    if (v4 != 0) {
        uint32_t v5 = *(int32_t *)&v1; // 0x2bc985
        *(int32_t *)v1 = v5 << 32 - v4 | v5 >> v4;
    }
    return unknown_51c41991() ^ 226;
}

// Address range: 0x2bc9a1 - 0x2bc9a4
int64_t function_2bc9a1(void) {
    // 0x2bc9a1
    int64_t result; // 0x2bc9a1
    return result;
}

// Address range: 0x2bca69 - 0x2bca6a
int64_t function_2bca69(int64_t a1) {
    // 0x2bca69
    int64_t result; // 0x2bca69
    return result;
}

// Address range: 0x2bcaa3 - 0x2bcaa4
int64_t function_2bcaa3(void) {
    // 0x2bcaa3
    int64_t result; // 0x2bcaa3
    return result;
}

// Address range: 0x2bcac4 - 0x2bcac5
int64_t function_2bcac4(int64_t a1) {
    // 0x2bcac4
    int64_t result; // 0x2bcac4
    return result;
}

// Address range: 0x2bcaca - 0x2bcad6
int64_t function_2bcaca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x2bcaca
    if (v1 != 0) {
        uint32_t v2 = (int32_t)a1;
        *(int32_t *)a1 = v2 << 32 - v1 | v2 >> v1;
    }
    int64_t result; // 0x2bcaca
    return result;
}

// Address range: 0x2bcaeb - 0x2bcaf5
int64_t function_2bcaeb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bcaeb
    int64_t v1; // 0x2bcaeb
    return v1 & 0xdb6c7591;
}

// Address range: 0x2bcb0b - 0x2bcb0e
int64_t function_2bcb0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2bcb0b
    int64_t result; // 0x2bcb0b
    bool v1; // 0x2bcb0b
    if (a4 != 1 && !v1) {
        result = function_2bcaa3();
    }
    // 0x2bcb0d
    return result;
}

// Address range: 0x30461e - 0x30461f
int64_t function_30461e(void) {
    // 0x30461e
    int64_t result; // 0x30461e
    return result;
}

// Address range: 0x30461f - 0x304623
int64_t function_30461f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0x30461f
    *v1 = *v1 | (char)a4;
    int64_t result; // 0x30461f
    return result;
}

// Address range: 0x304623 - 0x3046be
int64_t function_304623(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x304623
    int64_t v1; // 0x304623
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t v3; // 0x304623
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return function_c823b(a1, a2, a3, a4, a5, a6, v3);
}

// Address range: 0x3046be - 0x304817
int64_t function_3046be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3046be
    int64_t v1; // 0x3046be
    return function_c823b(a1, a2, a3, a4, a5, v1, a6);
}

// Address range: 0x304817 - 0x304975
int64_t function_304817(int64_t a1) {
    // 0x304817
    int64_t v1; // 0x304817
    return function_c823b(v1, v1, v1, v1, v1, v1, 0x48888222);
}

// Address range: 0x304975 - 0x304a98
int64_t function_304975(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x304975
    int64_t v1; // bp-40, 0x304975
    int64_t v2 = (int64_t)&v1; // 0x304a38
    v1 = 169;
    *(int64_t *)(v2 + 32) = 169;
    int64_t v3 = v2 + 8; // 0x304a52
    int64_t * v4 = (int64_t *)v3; // 0x304a56
    v1 = *v4;
    *(int64_t *)(v2 - 8) = v3;
    int64_t v5 = *(int64_t *)(v2 + 16); // 0x304a77
    *v4 = v5;
    v1 = v5;
    int64_t v6; // 0x304975
    return function_c823b(a1, a2, a3, a4, v6, v6, 0x26c4c84b);
}

// Address range: 0x304a98 - 0x304c0e
int64_t function_304a98(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x304a98
    int64_t v1; // 0x304a98
    return function_c823b(a1, a2, a3, a4, a6, v1, 0x58469722);
}

// Address range: 0x304c0e - 0x304d9f
int64_t function_304c0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x304c0e
    int64_t v1; // bp-32, 0x304c0e
    int64_t v2 = (int64_t)&v1; // 0x304c5d
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x304c86
    *v3 = 0x55d556a5;
    int64_t v4 = v2 - 16; // 0x304c8b
    int64_t * v5 = (int64_t *)v4; // 0x304c9a
    int64_t v6 = *(int64_t *)(v2 + 32); // 0x304ca6
    *v3 = v6;
    int64_t v7 = v2 - 24; // 0x304cbd
    int64_t * v8 = (int64_t *)v7; // 0x304cbd
    *v8 = v6;
    *v5 = v2;
    int64_t v9 = *(int64_t *)(v2 + 8); // 0x304ce3
    *v5 = v9;
    *v8 = v7;
    *(int64_t *)(v2 - 32) = v6;
    *v3 = *v8;
    *(int64_t *)(v2 + 16) = v9;
    *v5 = a4;
    *v8 = v4;
    *v5 = v2;
    int64_t v10; // 0x304c0e
    return function_c823b(a1, a2, a3, *v5, v10, v10, 0x2fbfb0);
}

// Address range: 0x304d9f - 0x304eea
int64_t function_304d9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x304d9f
    int64_t v1; // bp-32, 0x304d9f
    int64_t v2 = (int64_t)&v1; // 0x304df3
    int64_t * v3 = (int64_t *)(v2 - 24); // 0x304e3b
    *v3 = a3;
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x304e3f
    int64_t v5 = *(int64_t *)(v2 + 24); // 0x304e48
    *v4 = v5;
    int64_t v6 = v2 - 8; // 0x304e60
    *v3 = v6;
    int64_t * v7 = (int64_t *)(v2 - 32); // 0x304e70
    *v7 = v1;
    int64_t * v8 = (int64_t *)(v2 - 40); // 0x304e73
    *v3 = 0x25190189;
    *v8 = v5;
    int64_t * v9 = (int64_t *)v6; // 0x304e8f
    *v9 = *v3;
    *v3 = 0x67eba16a;
    *v8 = v1;
    *v7 = v1;
    *(int64_t *)(v2 + 8) = *v3;
    *v3 = v6;
    int64_t v10 = *v9; // 0x304ecf
    *v4 = v10;
    *v3 = v10;
    int64_t v11; // 0x304d9f
    return function_c823b(a1, a2, *v3, a4, a5, v11, 0x2fc1db);
}

// Address range: 0x304eea - 0x305069
int64_t function_304eea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x304eea
    int64_t v1; // bp-72, 0x304eea
    v1 = (int64_t)&v1 + 8;
    int64_t v2; // 0x304eea
    return function_c823b(a1, a2, a3, a4, v2, a6, v2);
}

// Address range: 0x305069 - 0x3051ba
int64_t function_305069(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x305069
    int64_t v1; // bp-56, 0x305069
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x305069
    return function_c823b(a1, a2, a3, a4, a5, a6, v2);
}

// Address range: 0x3051ba - 0x3052f0
int64_t function_3051ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x4eb9ec9f; // bp-40, 0x30528c
    int64_t v2 = (int64_t)&v1; // bp-56, 0x3052e6
    int64_t v3; // 0x3051ba
    return function_c823b(a1, 0x26c05209, a3, v3, a5, a6, (int64_t)&v2 + 16);
}

// Address range: 0x3052f0 - 0x305458
int64_t function_3052f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3052f0
    int64_t v1; // bp-40, 0x3052f0
    int64_t v2 = (int64_t)&v1; // 0x30537b
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x305392
    int64_t * v4 = (int64_t *)v3; // 0x305393
    int64_t * v5 = (int64_t *)(v2 + 32); // 0x305396
    int64_t v6 = *v5; // 0x305396
    *v4 = v6;
    int64_t * v7 = (int64_t *)(v2 - 16); // 0x3053b1
    *v7 = v2;
    int64_t * v8 = (int64_t *)(v2 + 16); // 0x3053bd
    int64_t v9 = *v8; // 0x3053bd
    int64_t * v10 = (int64_t *)(v2 - 24); // 0x3053c4
    *v10 = v9;
    *v4 = a2;
    *v7 = v3;
    int64_t v11 = *v4; // 0x3053df
    *v10 = v11;
    *v8 = v6;
    v1 = v6;
    *v7 = v11;
    *v4 = v9;
    *v5 = v9;
    int64_t v12 = v2 + 8; // 0x305405
    int64_t * v13 = (int64_t *)v12; // 0x305406
    v1 = *v13;
    *v4 = v12;
    v1 = *v13;
    *v4 = v12;
    int64_t v14; // 0x3052f0
    return function_c823b(a1, v11, a3, a4, v14, v14, v14);
}

// Address range: 0x305458 - 0x30559c
int64_t function_305458(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x305458
    int64_t v1; // bp-48, 0x305458
    int64_t v2 = (int64_t)&v1; // 0x3054f6
    int64_t v3 = *(int64_t *)(v2 + 40); // 0x305505
    v1 = v3;
    int64_t v4 = v2 - 8; // 0x305509
    int64_t * v5 = (int64_t *)v4; // 0x305509
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x30550e
    *v6 = v4;
    int64_t v7 = *v5; // 0x30551a
    *v5 = v2 + 8;
    int64_t * v8 = (int64_t *)(v2 + 16); // 0x30551f
    int64_t v9 = *v8; // 0x30551f
    *v5 = v9;
    int64_t * v10 = (int64_t *)(v2 - 24); // 0x30554b
    *v10 = a3;
    *(int64_t *)(v2 - 32) = a6;
    *v6 = v7;
    v1 = v7;
    *v10 = v9;
    *v8 = *v6;
    int64_t v11 = *v5; // 0x30556f
    *v6 = v11;
    *v10 = v11;
    *v5 = v1;
    *v6 = v1;
    return function_c823b(a1, a2, *v10, a4, a5, a6, 0x3cc47b74);
}
