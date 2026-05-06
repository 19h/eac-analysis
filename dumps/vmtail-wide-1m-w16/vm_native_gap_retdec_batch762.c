/*
 * Targeted RetDec C for native executable gap queue batch 762.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x203034-0x203234 rank=- name=- kind=- bytes=- uncovered=-
 *   0x203234-0x203434 rank=- name=- kind=- bytes=- uncovered=-
 *   0x203434-0x203634 rank=- name=- kind=- bytes=- uncovered=-
 *   0x413f42-0x414142 rank=- name=- kind=- bytes=- uncovered=-
 *   0x414142-0x414342 rank=- name=- kind=- bytes=- uncovered=-
 *   0x414342-0x414542 rank=- name=- kind=- bytes=- uncovered=-
 *   0x414542-0x414742 rank=- name=- kind=- bytes=- uncovered=-
 *   0x414742-0x414942 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_203032();
int64_t function_203034(int64_t a1, int64_t a2);
int64_t function_203056(void);
int64_t function_203065(void);
int64_t function_2030ae(void);
int64_t function_2030ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20313e(void);
int64_t function_203184(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20319a(void);
int64_t function_20319e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_203261(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20327d(int64_t a1);
int64_t function_2032a4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2032de(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2032f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_203306(void);
int64_t function_203349(void);
int64_t function_20336e(void);
int64_t function_203370(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2033ea(int64_t a1);
int64_t function_203407(void);
int64_t function_203442(void);
int64_t function_203495(void);
int64_t function_203498(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2034a3(void);
int64_t function_2034c2(void);
int64_t function_20355e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_203571(int64_t a1);
int64_t function_2035a1(void);
int64_t function_2035c7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2035dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2084527();
int64_t function_20862bc();
int64_t function_208acb1();
int64_t function_208f607();
int64_t function_30ef81bb();
int64_t function_31779bc0();
int64_t function_35709f9();
int64_t function_3891b43d();
int64_t function_3f6e4406();
int64_t function_413ef0();
int64_t function_413f26();
int64_t function_413f36();
int64_t function_413f42(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_41415a(void);
int64_t function_414162(int64_t a1);
int64_t function_414169(int64_t a1, int64_t result, int64_t a3);
int64_t function_414175(void);
int64_t function_41422d(int64_t a1, int64_t a2);
int64_t function_41427d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41428a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4142a3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4142ae(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_414311(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_41435c(int64_t a1);
int64_t function_414369(int64_t a1);
int64_t function_414391(int64_t a1);
int64_t function_4143ac(void);
int64_t function_4143bd(void);
int64_t function_4143d8(int64_t a1);
int64_t function_414436(int64_t a1, int64_t a2, int64_t a3);
int64_t function_414446(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41444f(void);
int64_t function_414478(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_414574(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_414644(int64_t a1);
int64_t function_41467c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4146a7(int64_t result);
int64_t function_4146cd(void);
int64_t function_4146dd(void);
int64_t function_4146fc(int64_t a1);
int64_t function_414700(void);
int64_t function_414706(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_414722(void);
int64_t function_414735(void);
int64_t function_414794(int64_t a1, uint64_t a2, int64_t a3);
int64_t function_4147f8(void);
int64_t function_414805(void);
int64_t function_41483a(void);
int64_t function_414848(void);
int64_t function_41486e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4148c8(void);
int64_t function_4148eb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41490e(void);
int64_t function_414919(void);
int64_t function_41492c(int64_t a1);
int64_t function_4dc69c86();
int64_t function_53dcae59();
int64_t function_540a4931();
int64_t function_5a559a8b();
int64_t function_696496af();
int64_t function_ffffffffb02dae47();
int64_t function_fffffffff87f6ebe();
int64_t function_fffffffffcf3d6f0();
int64_t unknown_127ca2ea();
int64_t unknown_268d3d12();
int64_t unknown_3d221a85();
int64_t unknown_3d4b900e();
int64_t unknown_3df7e5da();
int64_t unknown_5489bee5();
int64_t unknown_62e73704();
int64_t unknown_ffffffff99e8b5c9();
int64_t unknown_ffffffffb51abf21();
int64_t unknown_ffffffffc07bd5e3();
int64_t unknown_ffffffffc6221afd();
int64_t unknown_ffffffffcf12947a();
int64_t unknown_ffffffffe5f444a2();

// Address range: 0x203034 - 0x20303c
int64_t function_203034(int64_t a1, int64_t a2) {
    // 0x203034
    int64_t v1; // 0x203034
    *(char *)a1 = (char)v1;
    bool v2; // 0x203034
    int64_t v3 = v2 ? -1 : 1; // 0x203034
    int64_t v4 = v3 + a1; // 0x203034
    int64_t result = __asm_int3(v4, v3 + a2); // 0x203035
    *(char *)v4 = (char)result;
    return result;
}

// Address range: 0x203056 - 0x203059
int64_t function_203056(void) {
    // 0x203056
    int64_t result; // 0x203056
    return result;
}

// Address range: 0x203065 - 0x20306d
int64_t function_203065(void) {
    // 0x203065
    int64_t v1; // 0x203065
    int32_t * v2 = (int32_t *)(v1 + 0x74ff00df); // 0x203065
    *v2 = *v2 + (int32_t)v1;
    return function_203032();
}

// Address range: 0x2030ae - 0x2030b8
int64_t function_2030ae(void) {
    // 0x2030ae
    *(char *)0x402218dd = *(char *)0x402218dd - 28;
    int64_t result; // 0x2030ae
    return result;
}

// Address range: 0x2030ba - 0x2030d6
int64_t function_2030ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = *(char *)-0x627febcffe1759b9; // 0x2030c4
    int64_t v2; // 0x2030ba
    float80_t v3; // 0x2030ba
    *(float32_t *)(v2 & -256 | (int64_t)v1) = (float32_t)v3;
    bool v4; // 0x2030ba
    return function_20862bc((v4 ? -4 : 4) + a1);
}

// Address range: 0x20313e - 0x20313f
int64_t function_20313e(void) {
    // 0x20313e
    int64_t result; // 0x20313e
    return result;
}

// Address range: 0x203184 - 0x20318e
int64_t function_203184(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x203184
    return a4 & 0xffffffff;
}

// Address range: 0x20319a - 0x20319b
int64_t function_20319a(void) {
    // 0x20319a
    int64_t result; // 0x20319a
    return result;
}

// Address range: 0x20319e - 0x203257
int64_t function_20319e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x20319e
    int64_t v1; // 0x20319e
    *(char *)a2 = (char)(v1 & a2);
    char v2 = *(char *)-0x1451659e; // 0x2031ad
    int32_t * v3 = (int32_t *)(a4 + 0x794d1bf4); // 0x2031b5
    int32_t v4 = v1; // 0x2031b5
    *v3 = *v3 + v4;
    uint64_t v5 = a3 / 256; // 0x2031bb
    unsigned char v6 = 2 * (char)v5; // 0x2031bb
    *(int64_t *)0x7dc201e0 = 0x7dc201e8;
    if (v6 < (char)v5 || v6 == 0) {
        function_20319a();
    }
    int64_t v7 = v1 + 0x7dc201e8; // 0x2031b3
    int64_t v8 = 512 * v5 & 0xfe00 | a3 & -0x10000 | (int64_t)(v2 | (char)a3); // 0x2031bb
    unknown_ffffffff99e8b5c9();
    int32_t * v9 = (int32_t *)(a1 + 0x1754ea89); // 0x2031ca
    *v9 = *v9 + v4;
    int32_t * v10 = (int32_t *)(unknown_3df7e5da() + v7 & 0xffffffff); // 0x2031db
    *v10 = *v10 + (int32_t)v8;
    int64_t v11 = unknown_ffffffffc07bd5e3(); // 0x2031dd
    uint32_t result = (int32_t)v11 - 0x3d7fd476; // 0x2031e5
    *(int64_t *)0x7dc201d0 = 0x7f981f53;
    if (result >= 1) {
        // 0x2031f1
        return v11 + 0xc981688a & 0xffffffff;
    }
    char * v12 = (char *)((v7 & 0xffffffff) - 63); // 0x203252
    unsigned char v13 = *v12; // 0x203252
    unsigned char v14 = v13 + (char)v1; // 0x203252
    *v12 = v14;
    if (v14 < v13) {
        // 0x203257
        return result;
    }
    int64_t v15 = unknown_3d4b900e(); // 0x203208
    int32_t * v16 = (int32_t *)v15; // 0x20320d
    uint32_t v17 = *v16; // 0x20320d
    uint32_t v18 = v17 + (int32_t)v15; // 0x20320d
    *v16 = v18;
    int32_t * v19 = (int32_t *)(v8 + 11); // 0x20321d
    *v19 = 2 * *v19;
    return ((v15 + 229 + (int64_t)(v18 < v17)) % 256 | v15 & 0xffffff00) + 0x1e702320 & 0xffffffff;
}

// Address range: 0x203261 - 0x20327c
int64_t function_203261(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x203261
    int64_t result; // 0x203261
    bool v1; // 0x203261
    if (v1) {
        uint32_t v2 = (int32_t)result;
        *(int32_t *)result = v2 / 64 | 0x4000000 * v2;
        return result;
    }
    // 0x203263
    *(int32_t *)result = (int32_t)a1;
    return 0x10000 * (int32_t)result >> 16;
}

// Address range: 0x20327d - 0x20328f
int64_t function_20327d(int64_t a1) {
    // 0x20327d
    unknown_3d221a85(a1);
    *(int32_t *)0x2c92e4df = *(int32_t *)0x2c92e4df + (int32_t)a1;
    return function_540a4931();
}

// Address range: 0x2032a4 - 0x2032a8
int64_t function_2032a4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2032a4
    int64_t v1; // 0x2032a4
    return v1 & 0xffffffff;
}

// Address range: 0x2032de - 0x2032e5
int64_t function_2032de(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2032de
    int64_t result; // 0x2032de
    int32_t * v1 = (int32_t *)(result + 0x785079a5); // 0x2032de
    *v1 = *v1 + (int32_t)a2;
    return result;
}

// Address range: 0x2032f1 - 0x203306
int64_t function_2032f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2032f1
    unknown_ffffffffc6221afd();
    int32_t v1 = *(int32_t *)(a4 - 0x7dc7f53a); // 0x2032f6
    bool v2; // 0x2032f1
    return unknown_62e73704((int32_t)(bool)v2 + (int32_t)a1 + v1);
}

// Address range: 0x203306 - 0x20330b
int64_t function_203306(void) {
    // 0x203306
    return function_208acb1();
}

// Address range: 0x203349 - 0x20334e
int64_t function_203349(void) {
    // 0x203349
    return function_ffffffffb02dae47();
}

// Address range: 0x20336e - 0x20336f
int64_t function_20336e(void) {
    // 0x20336e
    int64_t result; // 0x20336e
    return result;
}

// Address range: 0x203370 - 0x20339a
int64_t function_203370(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x203370
    int64_t v1; // 0x203370
    *(char *)v1 = 0;
    int64_t v2 = unknown_ffffffffcf12947a(); // 0x203374
    int64_t result = v2; // 0x203384
    if (a4 != 1 && (int32_t)v2 != 0x58c53c0c) {
        result = function_20336e();
    }
    int32_t * v3 = (int32_t *)(a4 - 14); // 0x203386
    *v3 = *v3 + 0x45cb96b4;
    int32_t * v4 = (int32_t *)(a1 - 0x676a1b6f); // 0x20338d
    *v4 = *v4 | 0x3a01e800;
    return result;
}

// Address range: 0x2033ea - 0x2033f6
int64_t function_2033ea(int64_t a1) {
    // 0x2033ea
    int64_t result; // 0x2033ea
    return result;
}

// Address range: 0x203407 - 0x20340c
int64_t function_203407(void) {
    // 0x203407
    return function_2084527();
}

// Address range: 0x203442 - 0x203447
int64_t function_203442(void) {
    // 0x203442
    return function_208f607();
}

// Address range: 0x203495 - 0x203496
int64_t function_203495(void) {
    // 0x203495
    int64_t result; // 0x203495
    return result;
}

// Address range: 0x203498 - 0x2034a2
int64_t function_203498(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x203498
    return unknown_ffffffffe5f444a2(a1, a2, a3, a4, a5);
}

// Address range: 0x2034a3 - 0x2034a6
int64_t function_2034a3(void) {
    // 0x2034a3
    return function_203495();
}

// Address range: 0x2034c2 - 0x2034c5
int64_t function_2034c2(void) {
    // 0x2034c2
    int64_t result; // 0x2034c2
    return result;
}

// Address range: 0x20355e - 0x20356e
int64_t function_20355e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x20355e
    int64_t v1; // 0x20355e
    char * v2 = (char *)(v1 + 8); // 0x20355e
    *v2 = *v2 + (char)(a3 / 256);
    int64_t v3; // 0x20355e
    *(int32_t *)a1 = *(int32_t *)&v3;
    bool v4; // 0x20355e
    int64_t v5 = v4 ? -4 : 4; // 0x203563
    int64_t v6 = v5 + a1; // 0x203563
    int32_t * v7 = (int32_t *)(v1 - 0x6bff6700); // 0x203566
    *v7 = *v7 + (int32_t)v6;
    return function_2035c7(v6, v5 + a2, (int64_t)&g2);
}

// Address range: 0x203571 - 0x203574
int64_t function_203571(int64_t a1) {
    // 0x203571
    int64_t result; // 0x203571
    return result;
}

// Address range: 0x2035a1 - 0x2035a2
int64_t function_2035a1(void) {
    // 0x2035a1
    int64_t result; // 0x2035a1
    return result;
}

// Address range: 0x2035c7 - 0x2035db
int64_t function_2035c7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2035c7
    int64_t v1; // 0x2035c7
    uint64_t v2 = v1 + 0xfe176c72; // 0x2035cd
    bool v3; // 0x2035c7
    char v4 = *(char *)(a2 - 0x7449f966 + (v3 ? -1 : 1)); // 0x2035d3
    return v2 & 0xffff0067 | 256 * (int64_t)(v4 & (char)(v2 / 256)) | 152;
}

// Address range: 0x2035dc - 0x203623
int64_t function_2035dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2035dc
    int64_t v1; // 0x2035dc
    char v2 = (uint64_t)v1 / 256; // 0x2035de
    int64_t v3 = unknown_5489bee5(); // 0x2035e5
    bool v4; // 0x2035dc
    if ((v2 & 64) != 0 || v2 < 0 != v4) {
        v3 = function_2035a1();
    }
    int64_t v5 = v3 + a3 & 0xffffffff; // 0x2035ef
    uint32_t v6 = (int32_t)v3 & -0xdfeff9e | (int32_t)&g1 | 0xdfe019d; // 0x2035f4
    int32_t * v7 = (int32_t *)(v5 + 0xe0c827d); // 0x2035fc
    *v7 = *v7 + (int32_t)v1;
    int32_t * v8 = (int32_t *)((int64_t)v6 - 127); // 0x203602
    *v8 = *v8 + (int32_t)a1;
    int32_t * v9 = (int32_t *)(v5 - 90); // 0x203609
    *v9 = *v9 + v6;
    unknown_268d3d12();
    char * v10 = (char *)(v1 - 99); // 0x203618
    *v10 = *v10 - 24;
    return unknown_ffffffffb51abf21();
}

// Address range: 0x413f42 - 0x414159
int64_t function_413f42(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2 = a5;
    int64_t v3; // 0x413f42
    int64_t v4 = v3 + 0x9413326c & 0xffffffff; // 0x413f4b
    bool v5; // 0x413f42
    if (!v5) {
        v4 = function_413ef0();
    }
    int64_t result = v4; // 0x413f4f
    if (!v5) {
        result = function_413f26();
    }
    uint64_t v6 = a4 % 64; // 0x413f57
    int64_t v7 = a2 & 0xd51c9e0d; // 0x413f57
    bool v8 = false; // 0x413f57
    if (v6 != 0) {
        v7 = v3 << v6;
        v8 = (v3 & 0x8000000000000000 >> v6 - 1) != 0;
    }
    char v9 = result; // 0x413f5a
    __asm_out(103, v9);
    __asm_out_133((int16_t)a3, v9);
    if (v7 == 0 || v8) {
        // 0x413fbb
        return result;
    }
    if (a4 != 0) {
        // 0x413f64
        return function_5a559a8b(0x8ce50231);
    }
    int64_t result2 = __asm_wait(); // 0x413fb6
    int32_t v10 = a1; // 0x413fb7
    int32_t v11 = v3; // 0x413fb7
    int32_t v12 = (int32_t)((result & 256) != 0) + v11; // 0x413fb7
    if (v12 < v10) {
        // 0x413fbb
        return result2;
    }
    int32_t v13 = v10 - v12; // 0x413f42
    int64_t v14 = a3;
    int32_t v15 = result2;
    *(int32_t *)(int64_t)v13 = v15;
    int32_t v16 = v15; // 0x413fa1
    int64_t v17 = result2; // 0x413fa1
    if (v13 < 0) {
        v17 = function_413f36();
        v16 = v17;
    }
    int64_t v18 = (int64_t)&v2 - 8; // 0x413fa6
    *(int64_t *)v18 = v1;
    int64_t v19 = v18 & 0xffffffff; // 0x413fa7
    int64_t v20 = v17 + 0xaa77e4f; // 0x413fa9
    int64_t result4 = v20 & 0xffffffff; // 0x413fa9
    __asm_outsb((int16_t)v14, *(char *)&v1);
    int64_t v21 = v19 - 8; // 0x413faf
    *(int64_t *)v21 = v19;
    while (v16 <= 0xf55881b0) {
        int32_t v22 = v13 - 4; // 0x413fa0
        int64_t v23 = __asm_wait(); // 0x413fb6
        int32_t v24 = (int32_t)((v14 & 256) != 0) + v11; // 0x413fb7
        v13 = v22 - v24;
        int64_t result3 = v23; // 0x413fb9
        if (v22 > v24) {
            // 0x413fbb
            return result3;
        }
        v14 = result4;
        v15 = v23;
        *(int32_t *)(int64_t)v13 = v15;
        v16 = v15;
        v17 = v23;
        if (v13 < 0) {
            v17 = function_413f36();
            v16 = v17;
        }
        // 0x413fa3
        v18 = v21 - 8;
        *(int64_t *)v18 = v1;
        v19 = v18 & 0xffffffff;
        v20 = v17 + 0xaa77e4f;
        result4 = v20 & 0xffffffff;
        __asm_outsb((int16_t)v14, *(char *)&v1);
        v21 = v19 - 8;
        *(int64_t *)v21 = v19;
    }
    // 0x41401c
    __asm_out(57, (char)v20);
    return result4;
}

// Address range: 0x41415a - 0x41415e
int64_t function_41415a(void) {
    // 0x41415a
    int64_t v1; // 0x41415a
    return v1 & 0xffffffff;
}

// Address range: 0x414162 - 0x414168
int64_t function_414162(int64_t a1) {
    // 0x414162
    int64_t result; // 0x414162
    return result;
}

// Address range: 0x414169 - 0x414170
int64_t function_414169(int64_t a1, int64_t result, int64_t a3) {
    // 0x414169
    return result;
}

// Address range: 0x414175 - 0x41417a
int64_t function_414175(void) {
    // 0x414175
    return function_30ef81bb();
}

// Address range: 0x41422d - 0x414243
int64_t function_41422d(int64_t a1, int64_t a2) {
    // 0x41422d
    int64_t v1; // 0x41422d
    *(int32_t *)a1 = (int32_t)v1 - 0x1c050c29;
    unknown_127ca2ea();
    int32_t * v2 = (int32_t *)(v1 - 77); // 0x41423a
    int32_t v3 = *v2; // 0x41423a
    *v2 = 2 * v3 | (int32_t)(v3 < 0);
    return function_fffffffff87f6ebe();
}

// Address range: 0x41427d - 0x41428a
int64_t function_41427d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41427d
    int64_t v1; // 0x41427d
    int64_t v2 = v1;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    __asm_out(-90, (char)v2);
    return (v2 + 65) % 256 | v2 & -256;
}

// Address range: 0x41428a - 0x41428e
int64_t function_41428a(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 42); // 0x41428a
    *v1 = *v1 | (int32_t)a1;
    int64_t result; // 0x41428a
    return result;
}

// Address range: 0x4142a3 - 0x4142ae
int64_t function_4142a3(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 - 0xca4c601); // 0x4142a3
    *v1 = *v1 | (char)a3;
    return function_696496af();
}

// Address range: 0x4142ae - 0x4142e3
int64_t function_4142ae(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x4142ae
    int64_t v1; // 0x4142ae
    *(int32_t *)(2 * v1 + a4) = (int32_t)v1;
    int32_t * v2 = (int32_t *)(a2 + 0x685d2eb8); // 0x4142b8
    *v2 = *v2 / 2;
    char * v3 = (char *)(a4 & -256 | a3 / 256 % 256); // 0x4142be
    char v4 = *v3; // 0x4142be
    *v3 = v4 - 1;
    if (v4 < 1) {
        // 0x4142e1
        return v1 & 0x4f208cd;
    }
    // 0x4142c2
    __asm_in_135(89);
    return function_31779bc0();
}

// Address range: 0x414311 - 0x414340
int64_t function_414311(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x414311
    int64_t result; // 0x414311
    *(int32_t *)a1 = (int32_t)result;
    bool v1; // 0x414311
    if (true == !v1) {
        // 0x414370
        return result;
    }
    int64_t v2 = result & -0xff01 | 256 * (64 * (int64_t)v1 | 128 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1) | 512; // 0x414315
    // 0x414317
    v2 = (int64_t)(*(int32_t *)-0x4cb791cfd8c98bc6 + 0x2f185d2f);
    int64_t v3 = v2;
    float80_t v4; // 0x414311
    *(float80_t *)0x688ad667 = __asm_fbstp(v4);
    return (v3 + 209) % 256 | v3 & -256;
}

// Address range: 0x41435c - 0x414365
int64_t function_41435c(int64_t a1) {
    // 0x41435c
    return a1 & 0xf8a8fb3 | 0xf075704c;
}

// Address range: 0x414369 - 0x414370
int64_t function_414369(int64_t a1) {
    // 0x414369
    int64_t v1; // 0x414369
    return v1 + 0xbb007fcc & 0xffffffff;
}

// Address range: 0x414391 - 0x414394
int64_t function_414391(int64_t a1) {
    // 0x414391
    int64_t result; // 0x414391
    return result;
}

// Address range: 0x4143ac - 0x4143b9
int64_t function_4143ac(void) {
    // 0x4143ac
    int64_t result; // 0x4143ac
    *(char *)0x684b0df7e24107fe = (char)result;
    return result;
}

// Address range: 0x4143bd - 0x4143c2
int64_t function_4143bd(void) {
    // 0x4143bd
    return function_3f6e4406();
}

// Address range: 0x4143d8 - 0x4143dd
int64_t function_4143d8(int64_t a1) {
    // 0x4143d8
    int64_t v1; // 0x4143d8
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x414436 - 0x41443d
int64_t function_414436(int64_t a1, int64_t a2, int64_t a3) {
    // 0x414436
    return function_3891b43d();
}

// Address range: 0x414446 - 0x41444f
int64_t function_414446(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x414446
    int64_t result; // 0x414446
    if (a4 == 0) {
        // 0x414461
        return result;
    }
    int64_t v1 = a4 & 0xff00 & 256 * a4 | a4 & -0xff01; // 0x414448
    int32_t * v2 = (int32_t *)v1; // 0x41444a
    *v2 = *v2 + (int32_t)v1;
    return result;
}

// Address range: 0x41444f - 0x414461
int64_t function_41444f(void) {
    // 0x41444f
    *(int32_t *)0x686d184fdf311271 = (int32_t)__asm_sti();
    return __asm_rsm();
}

// Address range: 0x414478 - 0x414573
int64_t function_414478(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char * v1 = (char *)(a3 - 97); // 0x41448a
    *v1 = -*v1;
    return a4 & 0xffffffff;
    bool v2; // 0x414478
    if (v2) {
        // 0x41450a
        *(int32_t *)(a1 - 0xde9bd4e) = (int32_t)a1;
        return (int64_t)*(int32_t *)0x6632f5b847e200c;
    }
    // 0x414490
    *(int32_t *)a1 = (int32_t)a2;
    *(int64_t *)a3 = 0x800000 * a3;
    int64_t v3; // 0x414478
    return v3 & 0xffffffff;
}

// Address range: 0x414574 - 0x414597
int64_t function_414574(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 - 0x2fc3b6ea); // 0x414583
    int64_t v2; // 0x414574
    *v1 = *v1 + (int32_t)v2;
    *(int32_t *)(v2 - 109) = 0x1d0d0365;
    return v2 & 0x373b17e4 ^ 0x59c05e97;
}

// Address range: 0x414644 - 0x414647
int64_t function_414644(int64_t a1) {
    // 0x414644
    int64_t result; // 0x414644
    return result;
}

// Address range: 0x41467c - 0x414682
int64_t function_41467c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41467c
    int64_t result; // 0x41467c
    return result;
}

// Address range: 0x4146a7 - 0x4146af
int64_t function_4146a7(int64_t result) {
    // 0x4146a7
    return result;
}

// Address range: 0x4146cd - 0x4146d0
int64_t function_4146cd(void) {
    // 0x4146cd
    int64_t result; // 0x4146cd
    return result;
}

// Address range: 0x4146dd - 0x4146e3
int64_t function_4146dd(void) {
    // 0x4146dd
    return function_35709f9();
}

// Address range: 0x4146fc - 0x4146ff
int64_t function_4146fc(int64_t a1) {
    // 0x4146fc
    return function_414735();
}

// Address range: 0x414700 - 0x414702
int64_t function_414700(void) {
    // 0x414700
    int64_t result; // 0x414700
    return result;
}

// Address range: 0x414706 - 0x414710
int64_t function_414706(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x414706
    int64_t result; // 0x414706
    bool v1; // 0x414706
    *(char *)a1 = (char)result + 111 + (char)v1;
    return result;
}

// Address range: 0x414722 - 0x414725
int64_t function_414722(void) {
    // 0x414722
    int64_t result; // 0x414722
    return result;
}

// Address range: 0x414735 - 0x41473c
int64_t function_414735(void) {
    // 0x414735
    return __asm_in_135(94);
}

// Address range: 0x414794 - 0x4147bb
int64_t function_414794(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x414794
    int64_t v1; // 0x414794
    return (0x100000000 * a3 | a2 % 256 | v1 & 0xffffff00) / (v1 & 0xffffffff) & 0xffffffff;
}

// Address range: 0x4147f8 - 0x4147f9
int64_t function_4147f8(void) {
    // 0x4147f8
    int64_t result; // 0x4147f8
    return result;
}

// Address range: 0x414805 - 0x41480b
int64_t function_414805(void) {
    // 0x414805
    int64_t v1; // 0x414805
    return function_41486e(v1, v1, v1, v1);
}

// Address range: 0x41483a - 0x41483d
int64_t function_41483a(void) {
    // 0x41483a
    int64_t result; // 0x41483a
    return result;
}

// Address range: 0x414848 - 0x41484b
int64_t function_414848(void) {
    // 0x414848
    int64_t result; // 0x414848
    return result;
}

// Address range: 0x41486e - 0x414882
int64_t function_41486e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41486e
    return a3 & 0xffffffff;
}

// Address range: 0x4148c8 - 0x4148d3
int64_t function_4148c8(void) {
    // 0x4148c8
    int64_t v1; // 0x4148c8
    char * v2 = (char *)(v1 - 0x26afda8); // 0x4148c8
    bool v3; // 0x4148c8
    *v2 = (char)v3 - (char)v1 + *v2;
    return function_fffffffffcf3d6f0();
}

// Address range: 0x4148eb - 0x4148f2
int64_t function_4148eb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4148eb
    int64_t v1; // 0x4148eb
    bool v2; // 0x4148eb
    *(int32_t *)a3 = (int32_t)v1 + (int32_t)a3 + (int32_t)v2;
    return function_4dc69c86();
}

// Address range: 0x41490e - 0x41490f
int64_t function_41490e(void) {
    // 0x41490e
    int64_t result; // 0x41490e
    return result;
}

// Address range: 0x414919 - 0x41491c
int64_t function_414919(void) {
    // 0x414919
    int64_t result; // 0x414919
    return result;
}

// Address range: 0x41492c - 0x414933
int64_t function_41492c(int64_t a1) {
    // 0x41492c
    return function_53dcae59();
}
