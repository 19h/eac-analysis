/*
 * Targeted RetDec C for native executable gap queue batch 1075.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x12dedc-0x12e0dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12e0dc-0x12e2dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12e2dc-0x12e4dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12e4dc-0x12e6dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12e6dc-0x12e8dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12e8dc-0x12eadc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12eadc-0x12ecdc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12ecdc-0x12eedc rank=- name=- kind=- bytes=- uncovered=-
 *   0x1aab1c-0x1aad1c rank=- name=- kind=- bytes=- uncovered=-
 *   0x1aad1c-0x1aaf1c rank=- name=- kind=- bytes=- uncovered=-
 *   0x1aaf1c-0x1ab11c rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ab11c-0x1ab31c rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ab31c-0x1ab51c rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ab51c-0x1ab71c rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ab71c-0x1ab91c rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ab91c-0x1abb1c rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g5;
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

int64_t function_12dedc(void);
int64_t function_12deeb(void);
int64_t function_12deed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_12df43(void);
int64_t function_12df84(int64_t a1);
int64_t function_12dfba(int64_t a1);
int64_t function_12e006(int64_t a1);
int64_t function_12e019(void);
int64_t function_12e021(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12e07a(void);
int64_t function_12e089(void);
int64_t function_12e0cd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12e126(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12e165(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_12e19d(void);
int64_t function_12e1fe(void);
int64_t function_12e210(void);
int64_t function_12e272(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12e2a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12e306(void);
int64_t function_12e38a(void);
int64_t function_12e3d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12e403(void);
int64_t function_12e40a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12e414(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12e480(void);
int64_t function_12e481(void);
int64_t function_12e491(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12e4da(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12e51c(void);
int64_t function_12e55b(void);
int64_t function_12e579(int64_t a1);
int64_t function_12e5b9(void);
int64_t function_12e5c9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12e5d8(void);
int64_t function_12e5fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12e61a(void);
int64_t function_12e655(int64_t a1, int64_t a2);
int64_t function_12e69b(void);
int64_t function_12e6b5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_12e702(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_12e751(void);
int64_t function_12e756(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12e76d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12e77e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12e7d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12e88c(int64_t a1);
int64_t function_12e89e(void);
int64_t function_12e8be(int64_t a1);
int64_t function_12e91d(int64_t a1);
int64_t function_12e93b(int64_t a1);
int64_t function_12e9ba(int64_t a1);
int64_t function_12e9bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12ea26(int64_t a1);
int64_t function_12ea90(void);
int64_t function_12eb06(int64_t a1);
int64_t function_12eb25(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_12ebc5(void);
int64_t function_12ebdc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12ec13(void);
int64_t function_12ec1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12ec2b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12ece5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12ed7a(void);
int64_t function_12ee16(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12ee50(void);
int64_t function_12ee7e(void);
int64_t function_14feeb9();
int64_t function_1567f64a();
int64_t function_157acef();
int64_t function_174ce47b();
int64_t function_1aaade();
int64_t function_1aab1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1aab2c(void);
int64_t function_1aab33(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1aabc1(void);
int64_t function_1aac28(void);
int64_t function_1aac47(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1aacc6(int64_t a1);
int64_t function_1aacfc(void);
int64_t function_1aad0e(void);
int64_t function_1aad45(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1aad6f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1aadd6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1aadeb(void);
int64_t function_1aae01(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1aae24(void);
int64_t function_1aae29(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1aae8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1aaffc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1ab1a9(void);
int64_t function_1ab1cd(int64_t a1);
int64_t function_1ab246(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ab260(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ab3d4(int64_t a1);
int64_t function_1ab3dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1ab41e(void);
int64_t function_1ab436(int64_t a1);
int64_t function_1ab465(void);
int64_t function_1ab578(void);
int64_t function_1ab596(void);
int64_t function_1ab5db(void);
int64_t function_1ab5dd(int64_t a1);
int64_t function_1ab5f5(void);
int64_t function_1ab669(void);
int64_t function_1ab694(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ab697(void);
int64_t function_1ab6c6(void);
int64_t function_1ab6d5(void);
int64_t function_1ab6ea(void);
int64_t function_1ab719(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_1ab75d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ab78b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7, int64_t a8);
int64_t function_1ab8e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ab971(int64_t a1);
int64_t function_1ab9bd(void);
int64_t function_1ab9c2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1abae0(void);
int64_t function_1abaf3(int64_t a1);
int64_t function_1fb0a5e();
int64_t function_2e8b4de7();
int64_t function_3b69e20a();
int64_t function_41b59e();
int64_t function_4b0182b2();
int64_t function_5c5e894();
int64_t function_69eb4cc();
int64_t function_749c44a1();
int64_t function_bd8d204();
int64_t function_ffffffffb4303f5c();
int64_t function_ffffffffd530b1e4();
int64_t function_ffffffffe86c1d0b();
int64_t unknown_146a907();
int64_t unknown_14daf1a8();
int64_t unknown_14feb23();
int64_t unknown_157b80f();
int64_t unknown_1821068a();
int64_t unknown_18bda9d9();
int64_t unknown_1b60dc06();
int64_t unknown_1faaa65d();
int64_t unknown_282fb32e();
int64_t unknown_29cceedd();
int64_t unknown_2f123bbc();
int64_t unknown_36178f82();
int64_t unknown_3a1f1f01();
int64_t unknown_3d1d2452();
int64_t unknown_3d4d274e();
int64_t unknown_4f1a77e3();
int64_t unknown_555909f0();
int64_t unknown_58b7342d();
int64_t unknown_63f45240();
int64_t unknown_70cb278b();
int64_t unknown_7d158be6();
int64_t unknown_80f69f3();
int64_t unknown_861263c();
int64_t unknown_ffffffff98965ceb();
int64_t unknown_ffffffff9f9c9d19();
int64_t unknown_ffffffffab280902();
int64_t unknown_ffffffffafb01922();
int64_t unknown_ffffffffb0975b12();
int64_t unknown_ffffffffb1d86222();
int64_t unknown_ffffffffbc17d573();
int64_t unknown_ffffffffbf79343a();
int64_t unknown_ffffffffc41b5622();
int64_t unknown_ffffffffc6690fa6();
int64_t unknown_ffffffffc8255266();
int64_t unknown_ffffffffc8744c57();
int64_t unknown_ffffffffd8ea91b4();
int64_t unknown_ffffffffe3983e97();
int64_t unknown_ffffffffe424c0b5();
int64_t unknown_ffffffffe81e3ff3();
int64_t unknown_ffffffffe99bc177();
int64_t unknown_ffffffffefb1de75();

// Address range: 0x12dedc - 0x12deea
int64_t function_12dedc(void) {
    // 0x12dedc
    return unknown_ffffffff98965ceb();
}

// Address range: 0x12deeb - 0x12deec
int64_t function_12deeb(void) {
    // 0x12deeb
    int64_t result; // 0x12deeb
    return result;
}

// Address range: 0x12deed - 0x12df2d
int64_t function_12deed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x12deed
    __asm_in(80);
    int64_t v1 = a1 & -256 | (int64_t)(*(char *)(a5 - 0x7f36078a) | (char)a1); // 0x12def3
    int64_t v2 = unknown_3a1f1f01(v1); // 0x12defb
    int32_t * v3 = (int32_t *)((a4 + a3 & 0xffffffff) + 102); // 0x12df00
    *v3 = *v3 + 0x1787d95e;
    int32_t * v4 = (int32_t *)(v1 + 0x2ef7fa0c); // 0x12df0b
    *v4 = *v4 & 0xad801e8;
    *(char *)0xca84ab0d = (char)v2;
    bool v5; // 0x12deed
    int64_t v6 = unknown_ffffffffafb01922(v5 ? 0xca84ab0c : 0xca84ab0e); // 0x12df1c
    char * v7 = (char *)v6; // 0x12df21
    unsigned char v8 = *v7; // 0x12df21
    unsigned char v9 = (char)v6; // 0x12df21
    *v7 = v8 - v9;
    __asm_in_133((int16_t)a6);
    if (v8 < v9) {
        function_12deeb();
    }
    // 0x12df27
    return unknown_58b7342d();
}

// Address range: 0x12df43 - 0x12df52
int64_t function_12df43(void) {
    unsigned char v1 = *(char *)-0x3a5d8972fe174e00; // 0x12df43
    int64_t v2; // 0x12df43
    bool v3; // 0x12df43
    return (v2 & 0xffffff00 | (int64_t)v1) + (v3 ? 0x3c008001 : 0x3c008000) & 0xffffffff;
}

// Address range: 0x12df84 - 0x12df89
int64_t function_12df84(int64_t a1) {
    // 0x12df84
    int64_t result; // 0x12df84
    return result;
}

// Address range: 0x12dfba - 0x12dfbb
int64_t function_12dfba(int64_t a1) {
    // 0x12dfba
    int64_t result; // 0x12dfba
    return result;
}

// Address range: 0x12e006 - 0x12e00c
int64_t function_12e006(int64_t a1) {
    // 0x12e006
    return function_1567f64a();
}

// Address range: 0x12e019 - 0x12e01c
int64_t function_12e019(void) {
    // 0x12e019
    int64_t result; // 0x12e019
    return result;
}

// Address range: 0x12e021 - 0x12e077
int64_t function_12e021(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x803c6e; // bp-8, 0x12e030
    int32_t v2 = a1;
    *(int32_t *)a1 = v2 + 0x1e859e2;
    int64_t v3; // 0x12e021
    int32_t * v4 = (int32_t *)(v3 - 0x32b49a1); // 0x12e03a
    bool v5; // 0x12e021
    *v4 = *v4 + (int32_t)((v5 ? 0xfffffff8 : 8) + a2);
    int32_t * v6 = (int32_t *)(unknown_3d4d274e() + v3 & 0xffffffff); // 0x12e04f
    *v6 = *v6 + 0x1e859e2;
    int32_t v7 = *(int32_t *)(unknown_ffffffffc8744c57() + 91); // 0x12e056
    uint32_t v8 = v7 + (int32_t)(int64_t)&v1; // 0x12e056
    if (llvm_ctpop_i8((char)v8) % 2 != 0) {
        // 0x12e05b
        return function_749c44a1();
    }
    // 0x12e073
    *(int32_t *)0x1e8598c = *(int32_t *)0x1e8598c + v2;
    return *(int64_t *)(int64_t)v8;
}

// Address range: 0x12e07a - 0x12e089
int64_t function_12e07a(void) {
    // 0x12e07a
    int64_t result; // 0x12e07a
    *(char *)0x13d00b3b5332c4a = (char)result;
    return result;
}

// Address range: 0x12e089 - 0x12e08e
int64_t function_12e089(void) {
    // 0x12e089
    return function_749c44a1();
}

// Address range: 0x12e0cd - 0x12e0e2
int64_t function_12e0cd(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 + a1; // 0x12e0cd
    int32_t * v2 = (int32_t *)((v1 & 0xffffffff) - 2); // 0x12e0cf
    *v2 = *v2 - 32;
    int64_t v3; // 0x12e0cd
    char v4 = (uint64_t)v3 / 256; // 0x12e0d3
    int64_t v5; // 0x12e0cd
    *(char *)a3 = *(char *)&v5 + v4;
    int64_t result = unknown_4f1a77e3((int32_t)v1); // 0x12e0d5
    char * v6 = (char *)(a2 + 0x403ecf20 + 8 * a3); // 0x12e0da
    *v6 = *v6 | v4;
    return result;
}

// Address range: 0x12e126 - 0x12e135
int64_t function_12e126(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x12e126
    int64_t v1; // 0x12e126
    bool v2; // 0x12e126
    *(char *)v1 = (char)v2;
    unsigned char v3 = *(char *)-0x6ff387ce; // 0x12e12b
    unsigned char v4 = v3 + (char)((uint64_t)v1 / 256); // 0x12e12b
    *(char *)-0x6ff387ce = v4;
    return (a3 + 183 + (int64_t)(v4 < v3)) % 256 | a3 & 0xffffff00;
}

// Address range: 0x12e165 - 0x12e193
int64_t function_12e165(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x12e165
    int64_t v1; // 0x12e165
    int64_t v2 = v1 & 0xffffffff; // 0x12e165
    bool v3; // 0x12e165
    int64_t v4 = 0x4000 * (int64_t)v3 | 2048 * (int64_t)v3 | 1024 * (int64_t)v3 | 512 * (int64_t)v3 | 256 * (int64_t)v3 | 128 * (int64_t)v3 | 64 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3 | 2; // bp-8, 0x12e166
    char * v5 = (char *)(v2 - 42); // 0x12e167
    char v6 = a3; // 0x12e167
    *v5 = (char)v3 + v6 + *v5;
    int32_t * v7 = (int32_t *)(v1 + 104 + v1); // 0x12e16c
    *v7 = *v7 ^ (int32_t)v1;
    int64_t v8; // 0x12e165
    *(char *)v2 = *(char *)&v8 | v6;
    __asm_hlt();
    *(int64_t *)((((int64_t)&v4 | a3) & 0xffffffff) - 8) = 0x472d6700;
    int64_t result = unknown_70cb278b(); // 0x12e185
    int64_t v9; // 0x12e165
    *(char *)a3 = *(char *)&v9 | (char)(a4 / 256);
    return result;
}

// Address range: 0x12e19d - 0x12e1a2
int64_t function_12e19d(void) {
    // 0x12e19d
    return function_3b69e20a();
}

// Address range: 0x12e1fe - 0x12e203
int64_t function_12e1fe(void) {
    // 0x12e1fe
    return function_174ce47b();
}

// Address range: 0x12e210 - 0x12e211
int64_t function_12e210(void) {
    // 0x12e210
    int64_t result; // 0x12e210
    return result;
}

// Address range: 0x12e272 - 0x12e288
int64_t function_12e272(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12e272
    int64_t v1; // 0x12e272
    char * v2 = (char *)(v1 - 24); // 0x12e272
    bool v3; // 0x12e272
    *v2 = (char)v3 + (char)v1 + *v2;
    unsigned char v4 = (char)v1; // 0x12e275
    char v5 = v4 - 45; // 0x12e275
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x12e275
    uint32_t v7 = *(int32_t *)(a2 - 0x2143d568); // 0x12e27d
    int64_t result = (0x100000000 * a3 | v1 & 0xffff0000 | (int64_t)v5 | 256 * (16 * (int64_t)(v4 % 16 > 12) | (int64_t)(v4 > 44) | 64 * (int64_t)(v5 == 0) | 128 * (int64_t)(v5 < 0) | 4 * (int64_t)(v6 % 2 == 0)) & 0xfffffd00 | 512) / (int64_t)v7 & 0xffffffff; // 0x12e283
    if (a4 != 1 == v5 == 0) {
        result = function_12e210();
    }
    // 0x12e285
    return result;
}

// Address range: 0x12e2a3 - 0x12e2b6
int64_t function_12e2a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x12e2a3
    int64_t result; // 0x12e2a3
    int32_t * v1 = (int32_t *)(a1 - 0x28bf6497 + result); // 0x12e2a3
    *v1 = *v1 - (int32_t)a4;
    *(int32_t *)-0x459b4128fec2ff3f = (int32_t)result;
    return result;
}

// Address range: 0x12e306 - 0x12e307
int64_t function_12e306(void) {
    // 0x12e306
    int64_t result; // 0x12e306
    return result;
}

// Address range: 0x12e38a - 0x12e38c
int64_t function_12e38a(void) {
    // 0x12e38a
    int64_t v1; // 0x12e38a
    return function_12e40a(v1, v1, v1, (int64_t)&g5);
}

// Address range: 0x12e3d3 - 0x12e3e3
int64_t function_12e3d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = __asm_hlt(); // 0x12e3d4
    char v2 = *(char *)(a1 + 71 + 8 * a2); // 0x12e3d5
    int32_t v3 = *(int32_t *)0x914cc77; // 0x12e3d9
    uint64_t v4 = 0x100000000 * (256 * (int64_t)(v2 & (char)(v1 / 256)) | v1 & 0xffff00ff) / 0x100000000 * (int64_t)v3; // 0x12e3d9
    int64_t v5; // 0x12e3d3
    __asm_outsb((int16_t)(v4 / 0x100000000), (char)v5);
    return v4 & 0xffffffff;
}

// Address range: 0x12e403 - 0x12e408
int64_t function_12e403(void) {
    // 0x12e403
    return function_4b0182b2();
}

// Address range: 0x12e40a - 0x12e414
int64_t function_12e40a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12e40a
    int64_t v1; // 0x12e40a
    int32_t * v2 = (int32_t *)(v1 + 2); // 0x12e40a
    int32_t v3 = v1; // 0x12e40a
    *v2 = *v2 + v3;
    return 0x10000 * v3 >> 16;
}

// Address range: 0x12e414 - 0x12e464
int64_t function_12e414(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x12e414
    int64_t result; // 0x12e414
    *(int32_t *)a2 = (int32_t)result + (int32_t)a1;
    int64_t v1; // 0x12e414
    *(int32_t *)a1 = *(int32_t *)&v1 + (int32_t)result;
    return result;
}

// Address range: 0x12e480 - 0x12e481
int64_t function_12e480(void) {
    // 0x12e480
    int64_t result; // 0x12e480
    return result;
}

// Address range: 0x12e481 - 0x12e483
int64_t function_12e481(void) {
    // 0x12e481
    return function_12e480();
}

// Address range: 0x12e491 - 0x12e4aa
int64_t function_12e491(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x12e491
    int64_t v1; // 0x12e491
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    int64_t result = v2 + 0x34d3af10 & 0xffffffff; // 0x12e49e
    char * v3 = (char *)(a1 + 11 + result); // 0x12e4a3
    *v3 = *v3 >> 1;
    return result;
}

// Address range: 0x12e4da - 0x12e4f8
int64_t function_12e4da(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 99); // 0x12e4da
    uint32_t v2 = *v1; // 0x12e4da
    int64_t v3; // 0x12e4da
    uint32_t v4 = v2 + (int32_t)v3; // 0x12e4da
    *v1 = v4;
    int32_t * v5 = (int32_t *)(a4 + 0x44ae8810); // 0x12e4dd
    uint32_t v6 = *v5; // 0x12e4dd
    *v5 = 2048 * v6 | v6 / 0x400000 | 1024 * (int32_t)(v4 < v2);
    int64_t result = v3 & -256 | (int64_t)*(char *)-0x3b6448f7efd1eff7; // 0x12e4e4
    __asm_rcl(*(int32_t *)result);
    return result;
}

// Address range: 0x12e51c - 0x12e521
int64_t function_12e51c(void) {
    // 0x12e51c
    return function_2e8b4de7();
}

// Address range: 0x12e55b - 0x12e55c
int64_t function_12e55b(void) {
    // 0x12e55b
    int64_t result; // 0x12e55b
    return result;
}

// Address range: 0x12e579 - 0x12e586
int64_t function_12e579(int64_t a1) {
    // 0x12e579
    int64_t result; // 0x12e579
    return result;
}

// Address range: 0x12e5b9 - 0x12e5bd
int64_t function_12e5b9(void) {
    // 0x12e5b9
    int64_t v1; // 0x12e5b9
    return function_12e5fb(v1, v1, v1, (int64_t)&g5);
}

// Address range: 0x12e5c9 - 0x12e5d3
int64_t function_12e5c9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x12e5c9
    int64_t result; // 0x12e5c9
    int32_t * v1 = (int32_t *)(4 * a2 - 0x457bf7c6 + result); // 0x12e5c9
    *v1 = *v1 + (int32_t)a1;
    return result;
}

// Address range: 0x12e5d8 - 0x12e5d9
int64_t function_12e5d8(void) {
    // 0x12e5d8
    int64_t result; // 0x12e5d8
    return result;
}

// Address range: 0x12e5fb - 0x12e619
int64_t function_12e5fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12e5fb
    return a3 & 0xffffff00 ^ 0xf201e800 | (int64_t)__asm_in_133(-0x69f9);
}

// Address range: 0x12e61a - 0x12e61e
int64_t function_12e61a(void) {
    // 0x12e61a
    return function_12e5d8();
}

// Address range: 0x12e655 - 0x12e663
int64_t function_12e655(int64_t a1, int64_t a2) {
    // 0x12e655
    *(char *)a2 = 0;
    return function_ffffffffb4303f5c();
}

// Address range: 0x12e69b - 0x12e69d
int64_t function_12e69b(void) {
    // 0x12e69b
    int64_t result; // 0x12e69b
    return result;
}

// Address range: 0x12e6b5 - 0x12e6bc
int64_t function_12e6b5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x12e6b5
    int64_t v1; // 0x12e6b5
    int64_t v2 = v1;
    int64_t result = (v2 + a4 / 256) % 256 | v2 & -256; // 0x12e6b5
    int32_t * v3 = (int32_t *)result; // 0x12e6b7
    *v3 = *v3 + (int32_t)a4;
    return result;
}

// Address range: 0x12e702 - 0x12e717
int64_t function_12e702(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x12e702
    int64_t v1; // 0x12e702
    int32_t * v2 = (int32_t *)(v1 + 0x60d6bd41); // 0x12e704
    *v2 = *v2 + (int32_t)v1;
    int64_t v3 = v1 & 0x2c9a9854 | 0xd36567ab; // 0x12e70a
    return (v3 - a4 / 256) % 256 | v3 & 0xffffff00;
}

// Address range: 0x12e751 - 0x12e754
int64_t function_12e751(void) {
    // 0x12e751
    int64_t result; // 0x12e751
    return result;
}

// Address range: 0x12e756 - 0x12e76d
int64_t function_12e756(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12e756
    int64_t result; // 0x12e756
    *(int32_t *)0xe8f9dab713b78f = (int32_t)result;
    return result;
}

// Address range: 0x12e76d - 0x12e77e
int64_t function_12e76d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12e76d
    int64_t v1; // 0x12e76d
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v1 - 24); // 0x12e76d
    *v3 = *v3 - (int32_t)a4;
    __asm_out(-127, (int32_t)((v2 + 114) % 256 | v2 & 0xffffff00));
    return function_1fb0a5e();
}

// Address range: 0x12e77e - 0x12e7d2
int64_t function_12e77e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = *(char *)0x203e5287; // 0x12e780
    int64_t v2; // 0x12e77e
    *(char *)0x203e5287 = v1 + (char)((uint64_t)v2 / 256);
    uint64_t v3 = v2 & 0x68444fcb; // 0x12e786
    char * v4 = (char *)v3; // 0x12e78b
    *v4 = *v4 + (char)(v3 / 256);
    bool v5; // 0x12e77e
    int64_t v6 = (v5 ? -4 : 4) + a1; // 0x12e78d
    float64_t v7 = *(float64_t *)(a3 - 0x1430d755); // 0x12e799
    unsigned char v8 = (char)a3; // 0x12e7a0
    bool v9 = v3 > 0x46933d93 ? v8 + 101 + (char)(v3 > 0x46933d93) <= v8 : v8 > 154; // 0x12e7a0
    uint64_t v10 = v3 + 178 + (int64_t)v9; // 0x12e7a2
    int64_t v11 = v3 - 0x46933d94 & -0x6022100; // 0x12e7a2
    int64_t v12; // 0x12e77e
    char v13 = *(char *)&v12; // 0x12e7a4
    int64_t v14 = v5 ? -1 : 1; // 0x12e7a4
    v12 = v14 + a2;
    if (v13 - *(char *)v6 >= 0) {
        // 0x12e7ac
        return v10 % 256 | v11;
    }
    int64_t v15 = (v10 + 195) % 256 | v11; // 0x12e7ae
    int32_t * v16 = (int32_t *)v15; // 0x12e7b0
    *v16 = *v16 + (int32_t)v15;
    float80_t v17; // 0x12e77e
    *(int16_t *)(v14 - 0x4ec7b1cf + v6) = (int16_t)((float80_t)v7 / v17);
    uint32_t v18 = *(int32_t *)0x1e801e10e9ddf70; // 0x12e7b8
    int32_t * v19 = (int32_t *)((int64_t)v18 + (int64_t)&g2 + 0xb6890ef); // 0x12e7c9
    *v19 = (2 * (int32_t)a4 & -512 | 202) + 0x3d00025b + v18 + *v19;
    return v12 & 0xffffffff;
}

// Address range: 0x12e7d2 - 0x12e861
int64_t function_12e7d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12e7d2
    if (a4 != 0) {
        // 0x12e7d4
        int64_t result; // 0x12e7d2
        char * v1 = (char *)(result - 0x3e88d400 + result); // 0x12e7d4
        *v1 = *v1 + (char)a3;
        return result;
    }
    // 0x12e83c
    if (llvm_ctpop_i8(2 * (char)__asm_hlt()) % 2 != 0) {
        // 0x12e846
        float80_t v2; // 0x12e7d2
        *(int32_t *)0x1fb904c = (int32_t)v2;
        return unknown_1faaa65d();
    }
    // 0x12e81b
    *(char *)a1 = __asm_insb((int16_t)a3);
    unknown_ffffffffb1d86222();
    int32_t * v3 = (int32_t *)(a3 - 0x55aa05c0); // 0x12e830
    *v3 = *v3 + (int32_t)a1;
    return unknown_861263c();
}

// Address range: 0x12e88c - 0x12e88d
int64_t function_12e88c(int64_t a1) {
    // 0x12e88c
    int64_t result; // 0x12e88c
    return result;
}

// Address range: 0x12e89e - 0x12e8a3
int64_t function_12e89e(void) {
    // 0x12e89e
    return function_5c5e894();
}

// Address range: 0x12e8be - 0x12e8c1
int64_t function_12e8be(int64_t a1) {
    // 0x12e8be
    int64_t result; // 0x12e8be
    return result;
}

// Address range: 0x12e91d - 0x12e91e
int64_t function_12e91d(int64_t a1) {
    // 0x12e91d
    int64_t result; // 0x12e91d
    return result;
}

// Address range: 0x12e93b - 0x12e945
int64_t function_12e93b(int64_t a1) {
    int64_t result = 0; // 0x12e93b
    int32_t * v1 = (int32_t *)(result - 89); // 0x12e93d
    int64_t v2; // 0x12e93b
    *v1 = *v1 + (int32_t)v2;
    return result;
}

// Address range: 0x12e9ba - 0x12e9bc
int64_t function_12e9ba(int64_t a1) {
    // 0x12e9ba
    return __asm_sti(a1);
}

// Address range: 0x12e9bc - 0x12e9c8
int64_t function_12e9bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 14); // 0x12e9c2
    int64_t result; // 0x12e9bc
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x12ea26 - 0x12ea29
int64_t function_12ea26(int64_t a1) {
    // 0x12ea26
    int64_t result; // 0x12ea26
    return result;
}

// Address range: 0x12ea90 - 0x12ea93
int64_t function_12ea90(void) {
    // 0x12ea90
    int64_t result; // 0x12ea90
    return result;
}

// Address range: 0x12eb06 - 0x12eb25
int64_t function_12eb06(int64_t a1) {
    // 0x12eb06
    return unknown_14feb23();
}

// Address range: 0x12eb25 - 0x12ebb9
int64_t function_12eb25(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x12eb25
    int64_t v1; // 0x12eb25
    uint64_t v2 = v1;
    int64_t v3 = a1;
    int64_t v4 = v2 / 256 & v2;
    if ((char)v4 == 0) {
        uint32_t v5 = *(int32_t *)((v1 & 0xffffffff) - 78); // 0x12eba1
        char * v6 = (char *)((256 * v4 & 0xff00 | v2 & -0xff01) + 0x59cd745); // 0x12eba4
        *v6 = *v6 + (char)a3 + (char)(v5 > -1 - (int32_t)v1);
        return 0x1e805a8;
    }
    int32_t * v7 = (int32_t *)(a1 - 73); // 0x12eb31
    *v7 = *v7 | 0xc87528;
    char * v8 = (char *)(v3 + 0xc880ad03); // 0x12eb38
    *v8 = *v8 | (char)(a3 / 256);
    *(int32_t *)0x7b4b968959ee5610 = (int32_t)a3;
    __asm_in(72);
    __asm_wait(v3, *(int32_t *)&v3 + (int32_t)a2);
    __asm_in_133((int16_t)v1);
    unknown_ffffffffd8ea91b4();
    return function_69eb4cc();
}

// Address range: 0x12ebc5 - 0x12ebc6
int64_t function_12ebc5(void) {
    // 0x12ebc5
    int64_t result; // 0x12ebc5
    return result;
}

// Address range: 0x12ebdc - 0x12ebe0
int64_t function_12ebdc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12ebdc
    return function_12ebc5();
}

// Address range: 0x12ec13 - 0x12ec14
int64_t function_12ec13(void) {
    // 0x12ec13
    int64_t result; // 0x12ec13
    return result;
}

// Address range: 0x12ec1c - 0x12ec2b
int64_t function_12ec1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12ec1c
    int64_t v1; // 0x12ec1c
    int32_t * v2 = (int32_t *)(v1 + 0x46dbce03); // 0x12ec1c
    *v2 = *v2 + (int32_t)a3;
    return v1 | 254;
}

// Address range: 0x12ec2b - 0x12ec3d
int64_t function_12ec2b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x12ec2b
    int64_t v1; // 0x12ec2b
    int64_t v2 = v1;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v3; // 0x12ec2b
    *(int32_t *)a1 = *(int32_t *)&v3;
    return (v2 + 25) % 256 | v2 & -256;
}

// Address range: 0x12ece5 - 0x12ed74
int64_t function_12ece5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12ece5
    int64_t v1; // 0x12ece5
    char v2 = *(char *)(v1 + 0x7a1ae082); // 0x12ece9
    int64_t v3 = __asm_sti((int64_t)&g5); // 0x12ecf0
    unsigned char v4 = (char)(v1 / 256); // 0x12ecf2
    unsigned char v5 = *(char *)(a2 + 0x2801e8c8); // 0x12ecf2
    int32_t v6 = v3; // 0x12ecf8
    *(int32_t *)0x467d0028eabf9b3a = v6;
    int64_t v7 = *(int64_t *)((2 * v1 & 0xffffffff) + 8); // 0x12ed01
    int32_t v8 = v5 > v4 ? 0x7f01e89b : 0x7f01e89a; // 0x12ed02
    if (v8 <= v6) {
        // 0x12ed64
        return unknown_ffffffffbc17d573(*(int32_t *)(v1 + 23) ^ (int32_t)v7);
    }
    char * v9 = (char *)(v1 + 0x1c63a9e9 + (256 * (int64_t)(v4 - v5) | v1 & -0xff01)); // 0x12ed09
    *v9 = *v9 + (char)v1;
    char v10 = __asm_in(77); // 0x12ed10
    unknown_ffffffff9f9c9d19();
    int64_t result = __asm_hlt(); // 0x12ed18
    *(int64_t *)(((int64_t)v10 & 0xffffffff | (int64_t)(v6 - v8 & -256)) - 8) = 0xdddce6a;
    int32_t * v11 = (int32_t *)v7; // 0x12ed23
    int32_t v12 = *v11; // 0x12ed23
    *v11 = v12 + (int32_t)(a3 & 0xffffff00 | (int64_t)(v2 | (char)a3));
    return result;
}

// Address range: 0x12ed7a - 0x12ed8c
int64_t function_12ed7a(void) {
    // 0x12ed7a
    int64_t v1; // 0x12ed7a
    __asm_out_137(-97, (char)v1);
    uint32_t v2 = (int32_t)unknown_36178f82(); // 0x12ed83
    int32_t v3 = v2 + 0x40d8af88; // 0x12ed83
    return 256 * (16 * (int64_t)((v2 & 8) != 0) | (int64_t)(v2 > 0xbf275077) | 64 * (int64_t)(v3 == 0) | 128 * (int64_t)(v3 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v3) % 2 == 0)) | (int64_t)(v3 & -0xff01 | 512);
}

// Address range: 0x12ee16 - 0x12ee3c
int64_t function_12ee16(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffc41b5622(); // 0x12ee1c
    char v2 = *(char *)-0x121bfd8; // 0x12ee21
    int64_t v3; // 0x12ee16
    *(char *)-0x121bfd8 = v2 + (char)((uint64_t)v3 / 256);
    *(int32_t *)a3 = (int32_t)a3 + (int32_t)a1;
    return ((v1 & 230) + 27) % 256 | v1 & 0x6039bd00;
}

// Address range: 0x12ee50 - 0x12ee55
int64_t function_12ee50(void) {
    // 0x12ee50
    return function_14feeb9();
}

// Address range: 0x12ee7e - 0x12ee81
int64_t function_12ee7e(void) {
    // 0x12ee7e
    int64_t result; // 0x12ee7e
    return result;
}

// Address range: 0x1aab1c - 0x1aab20
int64_t function_1aab1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = a4 & 0xffffffff; // 0x1aab1e
    bool v1; // 0x1aab1c
    if (!v1) {
        result = function_1aaade();
    }
    // 0x1aab20
    return result;
}

// Address range: 0x1aab2c - 0x1aab2d
int64_t function_1aab2c(void) {
    // 0x1aab2c
    int64_t result; // 0x1aab2c
    return result;
}

// Address range: 0x1aab33 - 0x1aab69
int64_t function_1aab33(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_ffffffffbf79343a(); // 0x1aab3c
    bool v1; // 0x1aab33
    if (!v1) {
        // 0x1aab57
        return result;
    }
    // 0x1aab3e
    int64_t v2; // 0x1aab33
    char * v3 = (char *)(v2 + 47); // 0x1aab3e
    char v4 = 64 * *v3; // 0x1aab3e
    *v3 = v4;
    if (v4 < 0 == v1 == (v4 != 0)) {
        function_1aab2c();
    }
    int64_t result2 = __asm_int1(); // 0x1aab53
    *(int32_t *)a1 = *(int32_t *)a5;
    // 0x1aab57
    return result2;
}

// Address range: 0x1aabc1 - 0x1aabc3
int64_t function_1aabc1(void) {
    // 0x1aabc1
    int64_t result; // 0x1aabc1
    return result;
}

// Address range: 0x1aac28 - 0x1aac29
int64_t function_1aac28(void) {
    // 0x1aac28
    int64_t result; // 0x1aac28
    return result;
}

// Address range: 0x1aac47 - 0x1aacc3
int64_t function_1aac47(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1aac47
    int64_t v1; // 0x1aac47
    int64_t v2 = v1;
    int64_t v3 = unknown_3d1d2452(); // 0x1aac4c
    char * v4 = (char *)(a1 - 0x57fffec3); // 0x1aac51
    char v5 = *v4; // 0x1aac51
    char v6 = v3; // 0x1aac51
    bool v7; // 0x1aac47
    char v8 = v7; // 0x1aac51
    char v9 = v6 + v8 + v5; // 0x1aac51
    unsigned char v10 = llvm_ctpop_i8(v9); // 0x1aac51
    *v4 = v9;
    int64_t result = __asm_wait(a1, (int32_t)a2); // 0x1aac58
    if (v10 % 2 == 0) {
        result = function_1aac28();
    }
    char v11 = v9 + v8; // 0x1aac51
    if (((v11 ^ v5) & (v11 ^ v6)) < 0) {
        // 0x1aac61
        return result;
    }
    // 0x1aac98
    function_41b59e();
    int64_t v12 = __readgsqword(a2); // 0x1aaca2
    char v13 = *(char *)(a1 - 24); // 0x1aacaa
    int32_t * v14 = (int32_t *)(a3 + 73 + 4 * v1); // 0x1aacb4
    *v14 = *v14 + 0x3d000068;
    __asm_outsb((int16_t)a3, *(char *)((v7 ? -8 : 8) + a2));
    uint64_t v15 = __asm_iretd(); // 0x1aacbb
    char v16 = *(char *)(v15 % 256 + (v2 & -256 | (int64_t)(v13 + (char)v2 + (char)((int32_t)v12 > 0x7e463555)))); // 0x1aacc0
    return v15 & -256 | (int64_t)(v16 & (char)a3);
}

// Address range: 0x1aacc6 - 0x1aacce
int64_t function_1aacc6(int64_t a1) {
    // 0x1aacc6
    __asm_out_137(-50, (char)a1);
    return function_157acef();
}

// Address range: 0x1aacfc - 0x1aacfd
int64_t function_1aacfc(void) {
    // 0x1aacfc
    int64_t result; // 0x1aacfc
    return result;
}

// Address range: 0x1aad0e - 0x1aad0f
int64_t function_1aad0e(void) {
    // 0x1aad0e
    int64_t result; // 0x1aad0e
    return result;
}

// Address range: 0x1aad45 - 0x1aad6f
int64_t function_1aad45(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 0x2b2c406e); // 0x1aad46
    uint32_t v2 = *v1; // 0x1aad46
    bool v3; // 0x1aad45
    *v1 = 0x4000000 * v2 | 0x2000000 * (int32_t)v3 | v2 / 128;
    int64_t v4; // 0x1aad45
    uint32_t v5 = (int32_t)v4; // 0x1aad56
    uint32_t v6 = v5 - 0x2fec299 + (int32_t)((v2 & 64) != 0); // 0x1aad56
    char v7 = v6; // 0x1aad5b
    char v8 = (v2 & 64) != 0 ? v6 <= v5 : v5 > 0x2fec298 ? -6 : -7; // 0x1aad5b
    int64_t result = (int64_t)(v7 - v8) | (int64_t)(v6 & -256); // 0x1aad5d
    if (v8 < v7) {
        result = function_1aacfc();
    }
    int32_t * v9 = (int32_t *)(result - 75); // 0x1aad5f
    *v9 = *v9 + (int32_t)a4;
    char * v10 = (char *)result; // 0x1aad62
    *v10 = *v10 + (char)result;
    return result;
}

// Address range: 0x1aad6f - 0x1aadbc
int64_t function_1aad6f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1aad6f
    int64_t v1; // 0x1aad6f
    char * v2 = (char *)(a1 - 105 + v1); // 0x1aad6f
    *v2 = *v2 + (char)a4;
    __asm_wait(a1, (int32_t)a2);
    return unknown_2f123bbc();
}

// Address range: 0x1aadd6 - 0x1aade1
int64_t function_1aadd6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1aadd6
    int64_t v1; // 0x1aadd6
    return function_1aae29(a1, a2, a3, v1);
}

// Address range: 0x1aadeb - 0x1aaded
int64_t function_1aadeb(void) {
    // 0x1aadeb
    int64_t result; // 0x1aadeb
    return result;
}

// Address range: 0x1aae01 - 0x1aae09
int64_t function_1aae01(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1aae01
    return __asm_in_136((int16_t)a3);
}

// Address range: 0x1aae24 - 0x1aae27
int64_t function_1aae24(void) {
    // 0x1aae24
    int64_t result; // 0x1aae24
    return result;
}

// Address range: 0x1aae29 - 0x1aae8b
int64_t function_1aae29(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1aae29
    int64_t v1; // 0x1aae29
    uint64_t v2 = v1;
    int64_t v3 = v1;
    *(int32_t *)v3 = (int32_t)v3;
    *(char *)-0x62e3694d = *(char *)-0x62e3694d - 105;
    char * v4 = (char *)(a1 + 0x350d057); // 0x1aae33
    *v4 = *v4 + 58;
    int64_t v5 = unknown_63f45240(); // 0x1aae3a
    *(char *)a3 = (char)(v2 / 256);
    int64_t v6; // 0x1aae29
    int64_t v7 = 256 * (int64_t)*(char *)&v6 | v2 & -0xff01; // 0x1aae3f
    int64_t v8 = v5 & -256; // 0x1aae41
    int64_t v9 = v8 | 167; // 0x1aae41
    bool v10; // 0x1aae29
    int64_t v11 = v10 ? -1 : 1; // 0x1aae43
    *(int32_t *)0x1b5a636d = *(int32_t *)0x1b5a636d + (int32_t)a4;
    char * v12 = (char *)(v9 + 0x35c6600); // 0x1aae4c
    *v12 = *v12 - 89;
    char * v13 = (char *)(v7 + 0x1c01e800); // 0x1aae52
    *v13 = *v13 + (char)(a4 / 256);
    char * v14 = (char *)(v9 + 0x4df71003); // 0x1aae58
    unsigned char v15 = (char)a3; // 0x1aae58
    *v14 = *v14 + v15;
    int64_t v16 = 2 * a4; // 0x1aae65
    int64_t v17 = v16 & 0xfffffffe; // 0x1aae65
    uint32_t v18 = *(int32_t *)(v7 - 0x4727a3a8) | (int32_t)v7; // 0x1aae6e
    int64_t v19 = v8 | 143; // 0x1aae74
    int32_t * v20 = (int32_t *)v17; // 0x1aae76
    *v20 = *v20 + (int32_t)v19;
    int64_t v21 = a3 & -0x10000 | (int64_t)(v15 / 128 | 2 * v15) | 256 * (int64_t)v18 + a3 & 0xff00; // 0x1aae7a
    *(char *)v17 = (char)v16;
    unknown_1821068a(v11 + a1, v5 - (int64_t)(v18 & 0xff00) & 0xff00 | v19 & 0xffff008f, v21, (int32_t)v16);
    return v21 & 0xffffffff;
}

// Address range: 0x1aae8c - 0x1aaffc
int64_t function_1aae8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1aae8c
    bool v1; // 0x1aae8c
    if (!v1) {
        // 0x1aae8e
        unknown_14daf1a8();
        return function_bd8d204();
    }
    // 0x1aaed2
    int64_t v2; // 0x1aae8c
    int32_t v3 = v2; // 0x1aaed2
    *(int32_t *)-0x2c5c0093f348a317 = v3;
    int64_t v4; // bp+30888, 0x1aae8c
    int64_t v5 = (int64_t)&v4; // 0x1aaedb
    *(int32_t *)a4 = (int32_t)v5 + (int32_t)a4;
    int32_t * v6 = (int32_t *)(v2 + a4); // 0x1aaee3
    *v6 = *v6 + v3;
    char * v7 = (char *)(v2 + 99); // 0x1aaee6
    char v8 = v2; // 0x1aaee6
    *v7 = *v7 | v8;
    *(char *)a1 = v8;
    int64_t v9 = v1 ? -1 : 1; // 0x1aaeea
    __asm_int(-106);
    int64_t result = unknown_80f69f3(); // 0x1aaeed
    int64_t v10 = v5; // 0x1aaeed
    int64_t v11 = v9 + a1; // 0x1aaeed
    int64_t v12 = a2;
    uint64_t v13 = result;
    int64_t v14; // bp-8, 0x1aae8c
    int32_t * v15 = (int32_t *)(v12 + 8 * (int64_t)&v14); // 0x1aaef2
    *v15 = *v15 + (int32_t)v12;
    int32_t v16 = v13;
    *(int32_t *)v11 = v16;
    int64_t v17 = v11 + (v1 ? -4 : 4); // 0x1aaef7
    v11 = v17 + v9;
    int64_t v18 = v12 + v9; // 0x1aaef8
    int64_t v19 = *(int64_t *)(v10 + 8); // 0x1aaefa
    result = v13 & 0xffffffff;
    uint64_t v20 = unknown_ffffffffab280902(v11, v18); // 0x1aaefc
    while (*(char *)v12 < *(char *)v17) {
        char * v21 = (char *)v11; // 0x1aaf04
        char v22 = *v21 + (char)a3; // 0x1aaf04
        *v21 = v22;
        v10 += 16;
        if (v22 == 0) {
            int32_t * v23 = (int32_t *)(v20 & 0xffff00ff | (int64_t)&g4); // 0x1aaf0a
            *v23 = *v23 + (int32_t)a3;
            return result;
        }
        v12 = v18;
        v13 = result;
        v15 = (int32_t *)(v12 + 8 * v19);
        *v15 = *v15 + (int32_t)v12;
        v16 = v13;
        *(int32_t *)v11 = v16;
        v17 = v11 + (v1 ? -4 : 4);
        v11 = v17 + v9;
        v18 = v12 + v9;
        v19 = *(int64_t *)(v10 + 8);
        result = v13 & 0xffffffff;
        v20 = unknown_ffffffffab280902(v11, v18);
    }
    // 0x1aaf7e
    if (v20 >= (int64_t)*(char *)v20) {
        char v24 = *(char *)(result - 96); // 0x1aaf87
        int64_t v25 = 256 * (int64_t)(v24 & (char)(v20 / 256)) | v20 & -0xff01; // 0x1aaf87
        unsigned char v26 = *(char *)(a3 + 0x3a8a6e3a); // 0x1aaf8a
        int32_t * v27 = (int32_t *)(v19 - 21); // 0x1aaf90
        uint32_t v28 = *v27; // 0x1aaf90
        *v27 = 64 * v28 | v28 / 0x8000000 | 32 * (int32_t)(v26 > (char)v2);
        *(char *)v11 = __asm_insb((int16_t)a3);
        char * v29 = (char *)v18; // 0x1aaf9f
        *v29 = *v29 + (char)(v13 / 256);
        return (int64_t)(*(int32_t *)v25 | (int32_t)v25);
    }
    int64_t result2 = v20 & 0x4fb306ec | 0xb04cf913; // 0x1aafbd
    int32_t * v30 = (int32_t *)(result2 + 2 * v18); // 0x1aafcb
    *v30 = *v30 + v16;
    if (result != 1) {
        // 0x1aaf7b
        return result2;
    }
    // 0x1aafd0
    *(int32_t *)-0x2dab46fe17e3fa80 = (int32_t)unknown_29cceedd();
    __asm_in_136((int16_t)a3);
    unknown_ffffffffe81e3ff3();
    __asm_iretd();
    return function_ffffffffd530b1e4();
}

// Address range: 0x1aaffc - 0x1ab185
int64_t function_1aaffc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1aaffc
    __asm_in_133((int16_t)a3);
    int64_t v1 = unknown_146a907(); // 0x1ab001
    bool v2; // 0x1aaffc
    if (v2) {
        // 0x1ab069
        float80_t v3; // 0x1aaffc
        *(int64_t *)(v1 + 0x36b663ab) = (int64_t)v3;
        int64_t v4 = unknown_ffffffffefb1de75(); // 0x1ab06f
        int64_t result = (int64_t)((int32_t)v2 - *(int32_t *)v4 + (int32_t)v4); // 0x1ab074
        char * v5 = (char *)result; // 0x1ab077
        *v5 = *v5 + 8;
        return result;
    }
    // 0x1ab00a
    *(int32_t *)a1 = (int32_t)v1;
    return unknown_ffffffffb0975b12((v2 ? -4 : 4) + a1);
}

// Address range: 0x1ab1a9 - 0x1ab1ac
int64_t function_1ab1a9(void) {
    // 0x1ab1a9
    int64_t result; // 0x1ab1a9
    return result;
}

// Address range: 0x1ab1cd - 0x1ab1ce
int64_t function_1ab1cd(int64_t a1) {
    // 0x1ab1cd
    int64_t result; // 0x1ab1cd
    return result;
}

// Address range: 0x1ab246 - 0x1ab260
int64_t function_1ab246(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ab246
    int64_t result; // 0x1ab246
    bool v1; // 0x1ab246
    if (v1) {
        // 0x1ab277
        return result;
    }
    uint32_t result2 = 0x10000 * (int32_t)result >> 16; // 0x1ab256
    *(int32_t *)a1 = result2;
    return result2;
}

// Address range: 0x1ab260 - 0x1ab277
int64_t function_1ab260(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffc8255266(); // 0x1ab260
    char * v2 = (char *)(a3 - 0x11fe1782); // 0x1ab268
    unsigned char v3 = *v2; // 0x1ab268
    unsigned char v4 = v3 + (char)v1; // 0x1ab268
    *v2 = v4;
    int64_t v5; // 0x1ab260
    uint32_t v6 = (int32_t)v1 - *(int32_t *)&v5 + (int32_t)(v4 < v3); // 0x1ab26e
    int64_t v7 = v6; // 0x1ab26e
    char * v8 = (char *)v7; // 0x1ab271
    *v8 = *v8 - 22;
    return (int64_t)(*(int32_t *)v7 + v6);
}

// Address range: 0x1ab3d4 - 0x1ab3d7
int64_t function_1ab3d4(int64_t a1) {
    // 0x1ab3d4
    int64_t result; // 0x1ab3d4
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x1ab3dc - 0x1ab3ec
int64_t function_1ab3dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1ab3dc
    int64_t v1; // 0x1ab3dc
    int64_t v2 = v1;
    char * v3 = (char *)(a6 + 0x5f013d00 + 2 * v1); // 0x1ab3e1
    *v3 = *v3 + (char)a6;
    return -255 * v2 & 0xff00 | v2 & -0xff01;
}

// Address range: 0x1ab41e - 0x1ab421
int64_t function_1ab41e(void) {
    // 0x1ab41e
    int64_t result; // 0x1ab41e
    return result;
}

// Address range: 0x1ab436 - 0x1ab437
int64_t function_1ab436(int64_t a1) {
    // 0x1ab436
    int64_t result; // 0x1ab436
    return result;
}

// Address range: 0x1ab465 - 0x1ab466
int64_t function_1ab465(void) {
    // 0x1ab465
    int64_t result; // 0x1ab465
    return result;
}

// Address range: 0x1ab578 - 0x1ab579
int64_t function_1ab578(void) {
    // 0x1ab578
    int64_t result; // 0x1ab578
    return result;
}

// Address range: 0x1ab596 - 0x1ab598
int64_t function_1ab596(void) {
    // 0x1ab596
    return function_1ab5dd((int64_t)&g5);
}

// Address range: 0x1ab5db - 0x1ab5dd
int64_t function_1ab5db(void) {
    // 0x1ab5db
    int64_t v1; // 0x1ab5db
    return v1 & -256 | 3;
}

// Address range: 0x1ab5dd - 0x1ab5ec
int64_t function_1ab5dd(int64_t a1) {
    int64_t result = __asm_int1(); // 0x1ab5de
    int64_t v1; // 0x1ab5dd
    *(int32_t *)result = (int32_t)result + (int32_t)v1;
    int32_t * v2 = (int32_t *)(a1 - 0x4cf820f); // 0x1ab5e6
    *v2 = *v2 & (int32_t)a1;
    return result;
}

// Address range: 0x1ab5f5 - 0x1ab5f7
int64_t function_1ab5f5(void) {
    // 0x1ab5f5
    return function_1ab578();
}

// Address range: 0x1ab669 - 0x1ab66a
int64_t function_1ab669(void) {
    // 0x1ab669
    int64_t result; // 0x1ab669
    return result;
}

// Address range: 0x1ab694 - 0x1ab697
int64_t function_1ab694(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ab694
    int64_t result; // 0x1ab694
    *(int32_t *)a4 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x1ab697 - 0x1ab69a
int64_t function_1ab697(void) {
    // 0x1ab697
    int64_t result; // 0x1ab697
    return result;
}

// Address range: 0x1ab6c6 - 0x1ab6cb
int64_t function_1ab6c6(void) {
    // 0x1ab6c6
    return function_ffffffffe86c1d0b();
}

// Address range: 0x1ab6d5 - 0x1ab6df
int64_t function_1ab6d5(void) {
    // 0x1ab6d5
    int64_t v1; // 0x1ab6d5
    float80_t v2; // 0x1ab6d5
    *(float32_t *)(v1 + 0x7c289baf) = (float32_t)v2;
    return function_1ab669();
}

// Address range: 0x1ab6ea - 0x1ab6eb
int64_t function_1ab6ea(void) {
    // 0x1ab6ea
    int64_t result; // 0x1ab6ea
    return result;
}

// Address range: 0x1ab719 - 0x1ab75d
int64_t function_1ab719(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    // 0x1ab719
    int64_t v1; // 0x1ab719
    char * v2 = (char *)(a1 + 106 + 8 * v1); // 0x1ab719
    *v2 = (char)(a3 / 256);
    char * v3 = (char *)(a2 - 0x7241384); // 0x1ab721
    char v4 = a4 / 256; // 0x1ab721
    *v3 = *v3 + v4;
    int64_t v5 = unknown_282fb32e(); // 0x1ab728
    char * v6 = (char *)(a1 - 0x3ac4a35e); // 0x1ab72d
    *v6 = *v6 + v4;
    char * v7 = (char *)v5; // 0x1ab733
    char v8 = *v7 - (char)v5; // 0x1ab733
    *v7 = v8;
    __asm_out_138((int16_t)(256 * (int64_t)*v2 | a3 % 256), (int32_t)v5);
    if (v8 == 0) {
        function_1ab6ea();
    }
    int64_t v9 = v5 & 0xffffffff; // bp-16, 0x1ab73d
    int32_t * v10 = (int32_t *)(v1 + 60); // 0x1ab747
    int32_t * v11 = (int32_t *)(v1 - 128); // 0x1ab74a
    int64_t result = __asm_iretd(); // 0x1ab73d
    uint64_t v12 = a4;
    uint64_t v13 = result - 0xad00ad3; // 0x1ab73e
    uint64_t v14 = result - 0xad009eb; // 0x1ab745
    int64_t v15 = v13 & 0xffffff00; // 0x1ab745
    *v10 = *v10 + (int32_t)(v15 | v14 % 256);
    *v11 = *v11 + (int32_t)a5;
    unsigned char v16 = (char)v14 & 19; // 0x1ab74e
    result = v15 | (int64_t)v16;
    int3_t v17; // 0x1ab719
    int3_t v18 = v17 - 1; // 0x1ab751
    __frontend_reg_store_fpr(v18, (float80_t)*(int64_t *)(a2 - 4));
    int64_t v19 = (v12 % 256 & v13 / 256 | v12 & -256) - 1; // 0x1ab754
    while (v19 != 0 == v16 == 0) {
        // 0x1ab73e
        v12 = v19;
        v13 = result - 0xad00ad3;
        v14 = result - 0xad009eb;
        v15 = v13 & 0xffffff00;
        *v10 = *v10 + (int32_t)(v15 | v14 % 256);
        *v11 = *v11 + (int32_t)a5;
        v16 = (char)v14 & 19;
        result = v15 | (int64_t)v16;
        v18--;
        __frontend_reg_store_fpr(v18, (float80_t)*(int64_t *)(a2 - 4));
        v19 = (v12 % 256 & v13 / 256 | v12 & -256) - 1;
    }
    int32_t v20 = *(int32_t *)0x1b12e1f4; // 0x1ab756
    *(int32_t *)0x1b12e1f4 = v20 + (int32_t)(int64_t)&v9;
    return result;
}

// Address range: 0x1ab75d - 0x1ab78b
int64_t function_1ab75d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ab75d
    int64_t v1; // 0x1ab75d
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)((v2 + 256 * a3 & 0xff00 | v2 & -0xff01) - 7); // 0x1ab765
    *v3 = *v3 + (int32_t)v1;
    *(char *)(v1 & 0xffffffff) = (char)a4;
    __asm_hlt();
    int64_t v4 = a1 + 0xe8b086f5; // 0x1ab77d
    int64_t result = v4 & 0xffffffff; // 0x1ab77d
    int32_t * v5 = (int32_t *)result; // 0x1ab783
    *v5 = *v5 + (int32_t)v4;
    return result;
}

// Address range: 0x1ab78b - 0x1ab8d8
int64_t function_1ab78b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7, int64_t a8) {
    int16_t v1 = a3; // 0x1ab78c
    int64_t v2; // 0x1ab78b
    __asm_out_138(v1, (int32_t)v2);
    int32_t * v3 = (int32_t *)((v2 & 0xffffffff) - 83); // 0x1ab78e
    *v3 = *v3 + (int32_t)v2;
    int64_t v4 = unknown_ffffffffe3983e97(); // 0x1ab791
    unsigned char v5 = (char)v4 & -3; // 0x1ab799
    int64_t v6 = v4 & -256 | (int64_t)v5; // 0x1ab799
    char * v7 = (char *)v6; // 0x1ab79b
    unsigned char v8 = *v7; // 0x1ab79b
    *v7 = v8 / 128 | 2 * v8;
    if (a4 != 0) {
        int64_t v9 = unknown_ffffffffc6690fa6(); // 0x1ab79f
        __asm_out_138(v1, (int32_t)v9);
        __asm_fbld(*(float80_t *)((v9 - (a6 % 2 == 0 ? 0xc7ec57f : 0xc7ec580) & 0xffffffff) - 5));
        int64_t result = unknown_ffffffffe424c0b5() & -256 | (int64_t)__asm_in_133(v1); // 0x1ab7b4
        *(int32_t *)a1 = (int32_t)result;
        return result;
    }
    if (v5 >= 0) {
        // 0x1ab809
        return unknown_157b80f();
    }
    if ((int32_t)v6 == -0x6740ffff) {
        // 0x1ab85d
        *(char *)a1 = (char)v2;
        return v2 & 0xffffffff;
    }
    char * v10 = (char *)(v2 & 0xffffff00 | 88); // 0x1ab8c5
    *v10 = *v10 + 88;
    return unknown_18bda9d9();
}

// Address range: 0x1ab8e9 - 0x1ab8f1
int64_t function_1ab8e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ab8e9
    int64_t v1; // 0x1ab8e9
    return v1 & 0x1fe54a9a;
}

// Address range: 0x1ab971 - 0x1ab979
int64_t function_1ab971(int64_t a1) {
    // 0x1ab971
    return unknown_ffffffffe99bc177(a1);
}

// Address range: 0x1ab9bd - 0x1ab9be
int64_t function_1ab9bd(void) {
    // 0x1ab9bd
    int64_t result; // 0x1ab9bd
    return result;
}

// Address range: 0x1ab9c2 - 0x1aba89
int64_t function_1ab9c2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 0x76e891fa); // 0x1ab9c8
    int64_t v2; // 0x1ab9c2
    *v1 = *v1 + (int32_t)v2;
    int64_t v3 = a2; // bp-8, 0x1ab9ce
    float64_t v4 = *(float64_t *)-0x1709ba7c; // 0x1ab9cf
    int16_t v5 = a3; // 0x1ab9d9
    int64_t v6; // 0x1ab9c2
    __asm_outsb(v5, *(char *)&v6);
    unsigned char v7 = *(char *)(a4 - 24 + (2 * v2 & 0xffffffff)); // 0x1ab9da
    int64_t v8 = 256 * (int64_t)v7 | v2 & -0xff01; // 0x1ab9da
    int32_t * v9 = (int32_t *)(a4 - 0x52ba307a); // 0x1ab9de
    *v9 = *v9 + (int32_t)a4;
    int32_t * v10 = (int32_t *)v8; // 0x1ab9e4
    *(char *)a1 = __asm_insb(v5);
    uint64_t result = unknown_555909f0(); // 0x1ab9ea
    int32_t v11 = result; // 0x1ab9ef
    *v10 = *v10 & v11;
    *(int32_t *)-0x5e465062effe174a = v11;
    if (result / 256 < v8) {
        // 0x1ab9ea
        return result;
    }
    uint32_t v12 = (int32_t)(int64_t)&v3 - *v10 + 8; // 0x1ab9e7
    int64_t v13 = a3 & -256; // 0x1ab9fe
    int64_t v14 = v13 | 116; // 0x1ab9fe
    int64_t v15 = unknown_1b60dc06(); // 0x1aba00
    char * v16 = (char *)(v15 + 0x3664c00); // 0x1aba05
    *v16 = *v16 + (char)v15;
    int64_t v17 = (v15 + a4 / 256) % 256 | v15 & -256; // 0x1aba0b
    int32_t * v18 = (int32_t *)(v13 | 117); // 0x1aba0d
    uint32_t v19 = *v18; // 0x1aba0d
    int32_t v20 = v19 + v12; // 0x1aba0d
    *v18 = v20;
    int16_t v21 = v14; // 0x1aba15
    __asm_out_138(v21, (int32_t)v17);
    int64_t v22 = a4 & 0xffffffff; // 0x1aba18
    if (v20 != 0) {
        v22 = function_1ab9bd();
    }
    unsigned char v23 = llvm_ctpop_i8((char)v20); // 0x1aba0d
    char v24 = __asm_in_133(v21); // 0x1aba1f
    unsigned char v25 = v24 ^ -101; // 0x1aba20
    int64_t v26 = (v22 | (int64_t)v24) & -256; // 0x1aba20
    int32_t v27 = *(int32_t *)(v8 - 0x54fa6c88); // 0x1aba22
    char * v28 = (char *)(v14 - 0x56fe17c6); // 0x1aba28
    *v28 = *v28 + (char)v2;
    unsigned char v29 = v25 - ((int32_t)(v26 | (int64_t)v25) < 0xbd83910b ? 82 : 81); // 0x1aba35
    int64_t v30 = v26 | (int64_t)v29; // 0x1aba35
    int32_t v31 = *(int32_t *)((v17 & 0xffff00ff | 256 * (64 * (int64_t)(v20 == 0) | (int64_t)(v20 < v19) | 128 * (int64_t)(v20 < 0) | 16 * (int64_t)(v19 % 16 + v12 % 16 > 15) | 4 * (int64_t)(v23 % 2 == 0)) & 0xfffffd00 | 512) + 0x1e86aa3); // 0x1aba37
    char * v32 = (char *)v30; // 0x1aba45
    *v32 = *v32 - v29;
    float80_t v33; // 0x1ab9c2
    *(int64_t *)0x1e8aabd = (int64_t)(v33 - (float80_t)v4);
    int32_t * v34 = (int32_t *)((int64_t)(0x7052caf6 * v31) + 0x2b0ad8f0); // 0x1aba5a
    *v34 = *v34 + (int32_t)v14;
    int32_t * v35 = (int32_t *)((int64_t)(v27 - 0x23ff6700) - 0x62c5fe18); // 0x1aba68
    *v35 = *v35 + 82;
    return (int64_t)(*(int32_t *)(v14 + 0x6c151171) | (int32_t)v30);
}

// Address range: 0x1abae0 - 0x1abaeb
int64_t function_1abae0(void) {
    // 0x1abae0
    return unknown_7d158be6();
}

// Address range: 0x1abaf3 - 0x1abaf4
int64_t function_1abaf3(int64_t a1) {
    // 0x1abaf3
    int64_t result; // 0x1abaf3
    return result;
}
