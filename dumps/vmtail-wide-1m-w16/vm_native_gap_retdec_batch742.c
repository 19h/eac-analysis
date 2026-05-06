/*
 * Targeted RetDec C for native executable gap queue batch 742.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x287ecb-0x2880cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x2880cb-0x2882cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x2882cb-0x2884cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x2884cb-0x2886cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x2886cb-0x2888cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ad815-0x3ada15 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ada15-0x3adc15 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3adc15-0x3ade15 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_287ecb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_287f72(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2880c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_288220(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_28834b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2884b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_288627(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2887ec(void);
int64_t function_2887f3(void);
int64_t function_2887fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_288859(void);
int64_t function_28885b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_288896(void);
int64_t function_3ad815(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ad889(int64_t a1, int64_t a2);
int64_t function_3ad89f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ad8c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ad8fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ad979(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ad9cd(int64_t a1);
int64_t function_3ada0f(int64_t a1, int64_t a2);
int64_t function_3ada14(int64_t a1);
int64_t function_3ada6f(void);
int64_t function_3ada9e(void);
int64_t function_3adac7(void);
int64_t function_3adae9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3adb1a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3adb49(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3adca9(void);
int64_t function_3adcf0(int64_t a1);
int64_t function_3add11(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3add4e(void);
int64_t function_3add5d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3add98(void);
int64_t function_3addbd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3ade0f(int64_t a1);
int64_t function_3d3ba6ed();
int64_t function_3e823185();
int64_t function_6ff2da3c();
int64_t function_caf2a();
int64_t function_ffffffffe398c342();
int64_t unknown_5f7ddafd();
int64_t unknown_ffffffff8e3d7107();
int64_t unknown_ffffffffb2c877ca();
int64_t unknown_ffffffffc03c65ca();
int64_t unknown_ffffffffd0b10824();
int64_t unknown_ffffffffed8a193c();

// Address range: 0x287ecb - 0x287f72
int64_t function_287ecb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x287ecb
    int64_t v1; // 0x287ecb
    return function_caf2a(a1, a2, a5, a4, v1, v1, v1);
}

// Address range: 0x287f72 - 0x2880c1
int64_t function_287f72(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)a4; // 0x2880aa
    *(int64_t *)(a4 - 8) = v1;
    *(int64_t *)(a4 - 16) = v1;
    int64_t v2; // bp-16, 0x287f72
    int64_t v3; // 0x287f72
    int64_t result = function_caf2a(a1, a2, (int32_t)a3, v3, v3, v3, (int64_t)&v2); // 0x2880bc
    return result;
}

// Address range: 0x2880c1 - 0x288220
int64_t function_2880c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x71e3c5f3; // bp-24, 0x28813c
    int64_t v2 = (int64_t)&v1; // 0x288185
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x28818d
    int64_t v4 = *v3; // 0x28818d
    *(int64_t *)(v2 - 8) = v4;
    int64_t v5 = v2 - 16; // 0x288191
    int64_t * v6 = (int64_t *)v5; // 0x288191
    *v6 = a7;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x288196
    *v7 = v5;
    int64_t v8 = *v6; // 0x2881a2
    *v6 = v2;
    *v7 = 0x22116e0d;
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x2881b1
    *v9 = v8;
    v1 = *v6;
    *v7 = a6;
    *v9 = v8;
    *v6 = v4;
    *v3 = v4;
    *v7 = a1;
    *v6 = v2;
    return function_caf2a(a1, a2, (int32_t)a3, a4, a5, *v7, v1);
}

// Address range: 0x288220 - 0x28834b
int64_t function_288220(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x288220
    int64_t v1; // bp-40, 0x288220
    v1 = (int64_t)&v1;
    int64_t v2; // 0x288220
    return function_caf2a(a1, a2, (int32_t)a3, a4, a5, v2, 0x42f85521);
}

// Address range: 0x28834b - 0x2884b7
int64_t function_28834b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x28834b
    int64_t v1; // 0x28834b
    return function_caf2a(a1, a2, (int32_t)a3, a4, v1, v1, 0x5e66cb00);
}

// Address range: 0x2884b7 - 0x288627
int64_t function_2884b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2884b7
    int64_t v1; // bp-56, 0x2884b7
    int64_t v2 = (int64_t)&v1; // 0x288547
    int64_t v3 = *(int64_t *)(v2 + 40); // 0x288556
    v1 = v3;
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x28855a
    *v4 = v3;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x28855d
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 + 24); // 0x28856c
    v1 = a1;
    *v4 = v3;
    *v5 = *v6;
    int64_t v7 = *v4; // 0x2885b4
    *v4 = v7 ^ 0x3bfd4f34;
    *v6 = v7;
    int64_t v8 = v1; // 0x2885ce
    v1 = 0x1188df3b;
    *(int64_t *)(v2 + 32) = v1;
    int64_t v9 = v2 + 8; // 0x2885df
    int64_t * v10 = (int64_t *)v9; // 0x2885e3
    v1 = *v10;
    *v4 = v9;
    *v4 = *v10;
    v1 = v2 + 16;
    int64_t v11; // 0x2884b7
    return function_caf2a(v8, 310, (int32_t)a3, a4, a5, v11, 0x7da10005);
}

// Address range: 0x288627 - 0x2887b8
int64_t function_288627(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x288627
    int64_t v1; // bp-48, 0x288627
    v1 = (int64_t)&v1;
    return function_caf2a(a1, a2, (int32_t)a3, a4, a5, a6, a7);
}

// Address range: 0x2887ec - 0x2887ef
int64_t function_2887ec(void) {
    // 0x2887ec
    int64_t result; // 0x2887ec
    return result;
}

// Address range: 0x2887f3 - 0x2887f6
int64_t function_2887f3(void) {
    // 0x2887f3
    int64_t result; // 0x2887f3
    return result;
}

// Address range: 0x2887fb - 0x288808
int64_t function_2887fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2887fb
    int64_t v1; // 0x2887fb
    int64_t v2 = v1 + 0xe1c14481; // 0x2887fb
    int64_t result = v2 & 0xffffffff; // 0x2887fb
    char * v3 = (char *)result; // 0x288800
    *v3 = *v3 + (char)v2;
    char * v4 = (char *)(a4 + 1); // 0x288802
    *v4 = *v4 + (char)a4;
    return result;
}

// Address range: 0x288859 - 0x28885a
int64_t function_288859(void) {
    // 0x288859
    int64_t result; // 0x288859
    return result;
}

// Address range: 0x28885b - 0x288861
int64_t function_28885b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x28885b
    int64_t v1; // 0x28885b
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(result + 41); // 0x28885d
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x288896 - 0x288899
int64_t function_288896(void) {
    // 0x288896
    int64_t result; // 0x288896
    return result;
}

// Address range: 0x3ad815 - 0x3ad84f
int64_t function_3ad815(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ad815
    int64_t v1; // 0x3ad815
    __asm_out(1, (char)v1);
    __asm_hlt();
    int64_t v2 = unknown_ffffffffd0b10824(); // 0x3ad81e
    __writegsbyte(-0x132990d0, __readgsbyte(-0x132990d0) + (char)((uint64_t)v1 / 256));
    __asm_out_133(-2, (int32_t)v2);
    __asm_iretd();
    unknown_ffffffffed8a193c();
    __asm_hlt();
    return function_3ad89f(a1, a2, a3);
}

// Address range: 0x3ad889 - 0x3ad89b
int64_t function_3ad889(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0x4e28ff7a); // 0x3ad889
    *v1 = *v1 + (int32_t)a2;
    return function_3e823185();
}

// Address range: 0x3ad89f - 0x3ad8ab
int64_t function_3ad89f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ad89f
    int64_t v1; // 0x3ad89f
    *(char *)-0x607e765a = *(char *)-0x607e765a + (char)(v1 / 256);
    return v1 & 0xffffffff;
}

// Address range: 0x3ad8c0 - 0x3ad8d5
int64_t function_3ad8c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ad8c0
    unknown_ffffffffb2c877ca();
    int64_t v1; // 0x3ad8c0
    *(char *)a1 = (char)v1;
    char * v2 = (char *)(a3 - 0x71c62edf); // 0x3ad8ca
    *v2 = *v2 + (char)a4;
    bool v3; // 0x3ad8c0
    return (v3 ? 0xfffffffe : 2) + a2 & 0xffffffff;
}

// Address range: 0x3ad8fc - 0x3ad915
int64_t function_3ad8fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ad8fc
    int64_t v1; // 0x3ad8fc
    int32_t * v2 = (int32_t *)(v1 - 25); // 0x3ad8fc
    *v2 = *v2 | (int32_t)a2;
    int64_t v3 = unknown_ffffffff8e3d7107(); // 0x3ad901
    *(int32_t *)v1 = (int32_t)v1;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return v3 + 0x13d0097 & 0xffffffff;
}

// Address range: 0x3ad979 - 0x3ad9a1
int64_t function_3ad979(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ad979
    int64_t v1; // 0x3ad979
    uint64_t result = v1;
    char v2 = a3;
    if (*(char *)(result - 44) == v2) {
        // 0x3ad98c
        return result;
    }
    // 0x3ad990
    *(char *)a3 = (char)(result / 256) + v2;
    return result;
}

// Address range: 0x3ad9cd - 0x3ad9d4
int64_t function_3ad9cd(int64_t a1) {
    // 0x3ad9cd
    int64_t v1; // 0x3ad9cd
    *(char *)a1 = -(char)v1;
    return function_6ff2da3c();
}

// Address range: 0x3ada0f - 0x3ada13
int64_t function_3ada0f(int64_t a1, int64_t a2) {
    // 0x3ada0f
    int64_t result; // 0x3ada0f
    return result;
}

// Address range: 0x3ada14 - 0x3ada1e
int64_t function_3ada14(int64_t a1) {
    // 0x3ada14
    int64_t result; // 0x3ada14
    *(char *)-0x5847ff8fa9ba2482 = (char)result;
    return result;
}

// Address range: 0x3ada6f - 0x3ada80
int64_t function_3ada6f(void) {
    char v1 = __asm_in(92); // 0x3ada7b
    int64_t v2; // 0x3ada6f
    return (v2 | (int64_t)v1) & -0x10000 | 44 * (int64_t)v1;
}

// Address range: 0x3ada9e - 0x3ada9f
int64_t function_3ada9e(void) {
    // 0x3ada9e
    int64_t result; // 0x3ada9e
    return result;
}

// Address range: 0x3adac7 - 0x3adac8
int64_t function_3adac7(void) {
    // 0x3adac7
    int64_t result; // 0x3adac7
    return result;
}

// Address range: 0x3adae9 - 0x3adb19
int64_t function_3adae9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3adae9
    int64_t v1; // 0x3adae9
    float80_t v2; // 0x3adae9
    *(float64_t *)(v1 - 0x710524a8) = (float64_t)v2;
    int64_t v3; // 0x3adae9
    *(char *)a1 = *(char *)&v3;
    bool v4; // 0x3adae9
    if (a4 != 1 && !v4) {
        function_3adac7();
    }
    // 0x3adaf3
    function_3ada9e();
    int64_t v5 = unknown_5f7ddafd(); // 0x3adaf6
    char * v6 = (char *)(a1 + 90 + (v4 ? -1 : 1)); // 0x3adb04
    *v6 = (char)v5;
    return v5 & -256 | (int64_t)*v6;
}

// Address range: 0x3adb1a - 0x3adb2c
int64_t function_3adb1a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3adb1a
    int64_t v1; // 0x3adb1a
    __asm_outsb((int16_t)a3, (char)v1);
    return function_3d3ba6ed();
}

// Address range: 0x3adb49 - 0x3adc6d
int64_t function_3adb49(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3adb49
    int64_t v1; // 0x3adb49
    uint64_t v2 = v1;
    bool v3; // 0x3adb49
    if (!v3) {
        // 0x3adb4b
        int64_t result; // 0x3adb49
        return result;
    }
    int64_t v4 = a4 - 1; // 0x3adb8f
    if (v4 == 0) {
        // 0x3adb91
        return 0x10000 * (int32_t)v1 >> 16;
    }
    // 0x3adbdc
    __asm_hlt();
    int64_t v5 = v3 ? -1 : 1; // 0x3adbe6
    int64_t v6 = v5 + a1; // 0x3adbe6
    int64_t v7 = v5 + a2; // 0x3adbe6
    int64_t result2 = __asm_wait(v6, v7); // 0x3adbf5
    if ((int32_t)v4 - (int32_t)v2 + (int32_t)((char)v2 < (char)a3) != 1) {
        // 0x3adb4b
        return result2;
    }
    // 0x3adc02
    *(char *)0x3a45e609 = *(char *)0x3a45e609 + (char)(v2 / 256);
    *(int32_t *)(v7 + 64) = (int32_t)v7 - 8;
    *(char *)(v7 - 0x2e0c14c1) = -1;
    *(char *)0x3d3ba444 = *(char *)0x3d3ba444 + (char)(a3 / 256);
    *(int32_t *)-42 = (int32_t)v6 - 8 + *(int32_t *)-42;
    return result2;
}

// Address range: 0x3adca9 - 0x3adcb0
int64_t function_3adca9(void) {
    // 0x3adca9
    return function_ffffffffe398c342();
}

// Address range: 0x3adcf0 - 0x3adcf8
int64_t function_3adcf0(int64_t a1) {
    // 0x3adcf0
    int64_t result; // 0x3adcf0
    return result;
}

// Address range: 0x3add11 - 0x3add20
int64_t function_3add11(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3add11
    return a1 & 0xffffffff;
}

// Address range: 0x3add4e - 0x3add4f
int64_t function_3add4e(void) {
    // 0x3add4e
    int64_t result; // 0x3add4e
    return result;
}

// Address range: 0x3add5d - 0x3add65
int64_t function_3add5d(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 0x44f2081f); // 0x3add5d
    bool v2; // 0x3add5d
    *v1 = *v1 + (int32_t)a3 + (int32_t)(bool)v2;
    return function_3add4e();
}

// Address range: 0x3add98 - 0x3add99
int64_t function_3add98(void) {
    // 0x3add98
    int64_t result; // 0x3add98
    return result;
}

// Address range: 0x3addbd - 0x3ade0f
int64_t function_3addbd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint64_t v1 = unknown_ffffffffc03c65ca() / 256 + a3; // 0x3addc9
    int64_t v2 = v1 % 256 | a3 & -256; // 0x3addc9
    int16_t v3 = v2; // 0x3addd3
    *(int32_t *)a1 = __asm_insd(v3);
    __asm_out_134(v3, -0x57f9a7fa);
    __asm_hlt();
    int64_t v4 = __asm_hlt(); // 0x3adde8
    char * v5 = (char *)(v4 + 83); // 0x3adde9
    *v5 = (char)v1 + 1 + *v5;
    int32_t * v6 = (int32_t *)(v2 + 0x3cf150c1); // 0x3addec
    int32_t v7 = *v6 | 45; // 0x3addec
    *v6 = v7;
    int64_t v8 = v4; // 0x3addf3
    if (v7 >= 0) {
        v8 = function_3add98();
    }
    int64_t v9 = v8;
    int64_t v10; // 0x3addbd
    int64_t v11 = (v10 & (int64_t)&g1) == 0 ? 4 : 0xfffffffc; // 0x3addfe
    int64_t v12; // 0x3addbd
    int64_t v13 = (int32_t)(int64_t)&v12 > 0x3d002331 ? 51 : 50; // 0x3ade07
    int64_t result = (v9 + v13) % 256 | v9 & -256; // 0x3ade07
    int32_t * v14 = (int32_t *)(result + 120); // 0x3ade09
    *v14 = *v14 + (int32_t)(v11 + a1);
    return result;
}

// Address range: 0x3ade0f - 0x3ade10
int64_t function_3ade0f(int64_t a1) {
    // 0x3ade0f
    int64_t result; // 0x3ade0f
    return result;
}
