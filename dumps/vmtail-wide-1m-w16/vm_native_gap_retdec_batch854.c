/*
 * Targeted RetDec C for native executable gap queue batch 854.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x22dc66-0x22de66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x22de66-0x22e066 rank=- name=- kind=- bytes=- uncovered=-
 *   0x22e066-0x22e266 rank=- name=- kind=- bytes=- uncovered=-
 *   0x22e466-0x22e666 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a4f39-0x3a5139 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a5139-0x3a5339 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a5539-0x3a5739 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a5739-0x3a5939 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
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

int64_t function_183bc084();
int64_t function_22dc66(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22dc6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_22dce8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22de0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_22df27(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_22e0c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22e20e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22e216(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_22e21e(int64_t a1);
int64_t function_22e466(int64_t a1, int64_t a2, int64_t a3);
int64_t function_22e4b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3a4f39(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a4f46(void);
int64_t function_3a4f61(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3a4f8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a4fbd(void);
int64_t function_3a4fc1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a4fd5(void);
int64_t function_3a5000(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a5011(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a505f(void);
int64_t function_3a5065(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a508e(void);
int64_t function_3a50bc(void);
int64_t function_3a5174(void);
int64_t function_3a5180(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a5246(int64_t a1);
int64_t function_3a5291(void);
int64_t function_3a52d4(void);
int64_t function_3a5307(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a5539(void);
int64_t function_3a5546(void);
int64_t function_3a554d(void);
int64_t function_3a555e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a5567(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3a5610(void);
int64_t function_3a5651(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a566c(int64_t a1);
int64_t function_3a5674(void);
int64_t function_3a567f(int64_t a1);
int64_t function_3a5688(int64_t a1);
int64_t function_3a5699(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a56ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3a5825(void);
int64_t function_3a5827(int64_t a1);
int64_t function_3a583d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3a585b(void);
int64_t function_3a58c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a5933(void);
int64_t function_40411418();
int64_t function_cdc60();
int64_t function_ffffffff995e584d();
int64_t function_ffffffffb01022ba();
int64_t function_ffffffffba3c38e5();
int64_t unknown_178f7a24();
int64_t unknown_4044dec1();
int64_t unknown_4fa096e6();
int64_t unknown_68c8e27c();
int64_t unknown_ffffffff95eb1727();
int64_t unknown_ffffffffb436f7bd();
int64_t unknown_ffffffffb4c7a0eb();
int64_t unknown_ffffffffbebfcefa();
int64_t unknown_ffffffffc83f3c72();
int64_t unknown_ffffffffd5e1e0ca();
int64_t unknown_fffffffff8d969b6();
int64_t unknown_fffffffffa458b5e();

// Address range: 0x22dc66 - 0x22dc69
int64_t function_22dc66(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x22dc66
    int64_t result; // 0x22dc66
    char * v1 = (char *)(result - 125); // 0x22dc66
    *v1 = *v1 + (char)a4;
    return result;
}

// Address range: 0x22dc6a - 0x22dce8
int64_t function_22dc6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x22dc6a
    int64_t v1; // 0x22dc6a
    char * v2 = (char *)(v1 - 125); // 0x22dc6a
    char v3 = a4; // 0x22dc6a
    *v2 = *v2 | v3;
    char * v4 = (char *)((v1 & -256 | (int64_t)__asm_in((int16_t)a3)) - 119); // 0x22dc6e
    *v4 = *v4 | v3;
    int64_t v5; // bp+16, 0x22dc6a
    v5 = (int64_t)&v5 + 16;
    return function_cdc60(a1, a2, a5, a4, v1, v1, v1);
}

// Address range: 0x22dce8 - 0x22de0e
int64_t function_22dce8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x22dce8
    int64_t v1; // bp-48, 0x22dce8
    int64_t v2 = (int64_t)&v1; // 0x22dd58
    int64_t v3 = *(int64_t *)(v2 + 40); // 0x22dd67
    v1 = v3;
    int64_t v4 = v2 + 8; // 0x22dd7e
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x22dd85
    *v5 = v4;
    int64_t v6 = *(int64_t *)(v2 + 24); // 0x22dd8d
    int64_t * v7 = (int64_t *)(v2 - 16); // 0x22dd94
    *v7 = v6;
    v1 = a2;
    *v5 = v3;
    int64_t v8 = v2 + 16; // 0x22ddac
    int64_t * v9 = (int64_t *)v8; // 0x22ddac
    *v9 = v3;
    int64_t v10 = v1; // 0x22ddb0
    *v7 = a1;
    *v5 = v6;
    *(int64_t *)(v2 + 32) = v1;
    int64_t * v11 = (int64_t *)v4; // 0x22ddd2
    int64_t v12 = *v11; // 0x22ddd2
    v1 = v12;
    *v5 = v12;
    *v11 = *v9;
    v1 = v8;
    int64_t v13; // 0x22dce8
    return function_cdc60(*v7, v10, a3, a4, v13, v13, 0x389c3d9c);
}

// Address range: 0x22de0e - 0x22df27
int64_t function_22de0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x22de0e
    int64_t v1; // bp-64, 0x22de0e
    v1 = (int64_t)&v1;
    bool v2; // 0x22de0e
    return function_cdc60(a1, a2, a3, a4, a5, a6, 0x4000 * (int64_t)(bool)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x22df27 - 0x22e0c0
int64_t function_22df27(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x22df27
    int64_t v1; // bp-32, 0x22df27
    int64_t v2 = (int64_t)&v1; // 0x22dff3
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x22e003
    int64_t * v4 = (int64_t *)(v2 + 32); // 0x22e006
    int64_t v5 = *v4; // 0x22e006
    *v3 = v5;
    int64_t v6 = v2 - 16; // 0x22e00a
    int64_t * v7 = (int64_t *)v6; // 0x22e00a
    *v7 = v5;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x22e00d
    *v8 = v5;
    int64_t v9 = v2 + 16; // 0x22e019
    int64_t v10 = *(int64_t *)v9; // 0x22e019
    *v8 = v10;
    *v3 = 0x20ad121f;
    *v7 = v5;
    *(int64_t *)(v2 + 8) = v5;
    *v7 = v6;
    *v3 = v10;
    *v4 = v1;
    v1 = a5;
    *v3 = v2;
    int64_t v11 = v1; // 0x22e0b6
    v1 = v9;
    int64_t v12; // bp-24, 0x22df27
    return function_cdc60(a1, a2, a3, *v3, v11, a6, (int64_t)&v12 - 8);
}

// Address range: 0x22e0c0 - 0x22e1db
int64_t function_22e0c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x22e0c0
    int64_t v1; // 0x22e0c0
    return function_cdc60(a1, a2, a3, a4, v1, v1, 0x228c46);
}

// Address range: 0x22e20e - 0x22e216
int64_t function_22e20e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x22e20e
    int64_t v1; // 0x22e20e
    char * v2 = (char *)(v1 - 127); // 0x22e20e
    *v2 = *v2 | (char)a4;
    return function_22e21e(a1);
}

// Address range: 0x22e216 - 0x22e21e
int64_t function_22e216(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x22e216
    int64_t result; // 0x22e216
    return result;
}

// Address range: 0x22e21e - 0x22e264
int64_t function_22e21e(int64_t a1) {
    // 0x22e21e
    int64_t result; // 0x22e21e
    return result;
}

// Address range: 0x22e466 - 0x22e4b5
int64_t function_22e466(int64_t a1, int64_t a2, int64_t a3) {
    // 0x22e466
    int64_t v1; // bp+32, 0x22e466
    int64_t v2; // 0x22e466
    return function_cdc60(v2, v2, v2, v2, v2, v2, (int64_t)&v1);
}

// Address range: 0x22e4b5 - 0x22e649
int64_t function_22e4b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x22e4b5
    int64_t v1; // bp-48, 0x22e4b5
    int64_t v2; // 0x22e4b5
    return function_cdc60(310, a2, a3, a4, a5, v2, (int64_t)&v1 + 16);
}

// Address range: 0x3a4f39 - 0x3a4f40
int64_t function_3a4f39(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a4f39
    int64_t v1; // 0x3a4f39
    int64_t v2 = v1;
    return v2 & -256 | (int64_t)(*(char *)(a2 - 100) | (char)v2);
}

// Address range: 0x3a4f46 - 0x3a4f49
int64_t function_3a4f46(void) {
    // 0x3a4f46
    int64_t result; // 0x3a4f46
    return result;
}

// Address range: 0x3a4f61 - 0x3a4f8e
int64_t function_3a4f61(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a4 + 2); // 0x3a4f66
    int64_t v2; // 0x3a4f61
    *v1 = *v1 + (char)v2;
    int64_t result; // 0x3a4f61
    int64_t v3 = result;
    *(char *)v3 = *(char *)&result + (char)v3;
    unsigned char v4 = (char)result; // 0x3a4f70
    result = result & -256 | (int64_t)((v4 / 2 | 128 * v4) ^ -52);
    if (a4 == 0) {
        int32_t * v5 = (int32_t *)(a1 + 0x662d78b6); // 0x3a4f85
        *v5 = *v5 + (int32_t)a2;
        return result;
    }
    int64_t result2 = unknown_68c8e27c(); // 0x3a4f76
    char * v6 = (char *)result2; // 0x3a4f7b
    *v6 = *v6 + (char)a3 | (char)(a4 / 256);
    return result2;
}

// Address range: 0x3a4f8f - 0x3a4fa5
int64_t function_3a4f8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 - 16); // 0x3a4f8f
    int64_t v2; // 0x3a4f8f
    *v1 = *v1 + (char)v2;
    int64_t result = __asm_hlt((int64_t)&g5, (int64_t)&g5, (int64_t)&g5, (int64_t)&g5); // 0x3a4fa2
    return result;
}

// Address range: 0x3a4fbd - 0x3a4fbe
int64_t function_3a4fbd(void) {
    // 0x3a4fbd
    int64_t result; // 0x3a4fbd
    return result;
}

// Address range: 0x3a4fc1 - 0x3a4fc7
int64_t function_3a4fc1(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0; // 0x3a4fc1
    int64_t v2; // 0x3a4fc1
    return v1 & 0xffffff00 | (int64_t)(*(char *)(v2 + a3) | (char)v1);
}

// Address range: 0x3a4fd5 - 0x3a4fd6
int64_t function_3a4fd5(void) {
    // 0x3a4fd5
    int64_t result; // 0x3a4fd5
    return result;
}

// Address range: 0x3a5000 - 0x3a500f
int64_t function_3a5000(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a5000
    int64_t v1; // 0x3a5000
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)v1;
    uint32_t v4 = (int32_t)v2 + v3; // 0x3a5000
    *(int32_t *)v1 = v4;
    int64_t v5; // 0x3a5000
    char v6 = *(char *)&v5; // 0x3a5003
    char * v7 = (char *)(a1 + 0x1e88752 + a3); // 0x3a5005
    *v7 = 2 * *v7;
    return v2 & -256 | (int64_t)((char)v2 - v6 + (char)(v4 >= v3));
}

// Address range: 0x3a5011 - 0x3a502c
int64_t function_3a5011(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 0x1e8ff90); // 0x3a5011
    *v1 = *v1 | (int32_t)a4;
    int64_t v2; // 0x3a5011
    uint32_t v3 = *(int32_t *)(4 * a1 + 82 + v2); // 0x3a5018
    if (v3 > -1 - (int32_t)a1) {
        function_3a4fbd();
    }
    // 0x3a501e
    return unknown_178f7a24() - (v3 > -1 - (int32_t)a1 ? 0x3a9bbaf8 : 0x3a9bbaf7) & 0xffffffff;
}

// Address range: 0x3a505f - 0x3a5065
int64_t function_3a505f(void) {
    // 0x3a505f
    int64_t result; // 0x3a505f
    return result;
}

// Address range: 0x3a5065 - 0x3a5070
int64_t function_3a5065(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a5065
    int64_t v1; // 0x3a5065
    *(int64_t *)((v1 & 0xffffffff) - 8) = a4;
    return function_ffffffffba3c38e5();
}

// Address range: 0x3a508e - 0x3a508f
int64_t function_3a508e(void) {
    // 0x3a508e
    int64_t result; // 0x3a508e
    return result;
}

// Address range: 0x3a50bc - 0x3a50c1
int64_t function_3a50bc(void) {
    // 0x3a50bc
    return function_ffffffffb01022ba();
}

// Address range: 0x3a5174 - 0x3a517c
int64_t function_3a5174(void) {
    // 0x3a5174
    int64_t v1; // 0x3a5174
    bool v2; // 0x3a5174
    return v1 + 0x3a16b57b + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x3a5180 - 0x3a5189
int64_t function_3a5180(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x33f8fa72); // 0x3a5180
    *v1 = *v1 + (int32_t)a1;
    int64_t result; // 0x3a5180
    return result;
}

// Address range: 0x3a5246 - 0x3a524b
int64_t function_3a5246(int64_t a1) {
    // 0x3a5246
    int64_t result; // 0x3a5246
    return result;
}

// Address range: 0x3a5291 - 0x3a5296
int64_t function_3a5291(void) {
    // 0x3a5291
    return function_40411418();
}

// Address range: 0x3a52d4 - 0x3a52d5
int64_t function_3a52d4(void) {
    // 0x3a52d4
    int64_t result; // 0x3a52d4
    return result;
}

// Address range: 0x3a5307 - 0x3a530f
int64_t function_3a5307(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a5307
    int64_t v1; // 0x3a5307
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    int64_t result = __asm_hlt(a1, a2, a3, a4); // 0x3a530a
    if (a4 != 1) {
        result = function_3a52d4();
    }
    // 0x3a530c
    return result;
}

// Address range: 0x3a5539 - 0x3a553a
int64_t function_3a5539(void) {
    // 0x3a5539
    return __asm_int3();
}

// Address range: 0x3a5546 - 0x3a5547
int64_t function_3a5546(void) {
    // 0x3a5546
    int64_t result; // 0x3a5546
    return result;
}

// Address range: 0x3a554d - 0x3a554e
int64_t function_3a554d(void) {
    // 0x3a554d
    int64_t result; // 0x3a554d
    return result;
}

// Address range: 0x3a555e - 0x3a5567
int64_t function_3a555e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 0x3fd5006e); // 0x3a555e
    *v1 = *v1 - (int32_t)a2;
    int64_t result; // 0x3a555e
    return result;
}

// Address range: 0x3a5567 - 0x3a55e7
int64_t function_3a5567(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = __asm_int3(); // 0x3a5587
    return (a4 / 256 + 136 + v1) % 256 | v1 & -256;
}

// Address range: 0x3a5610 - 0x3a5611
int64_t function_3a5610(void) {
    // 0x3a5610
    int64_t result; // 0x3a5610
    return result;
}

// Address range: 0x3a5651 - 0x3a5665
int64_t function_3a5651(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a5651
    unknown_fffffffffa458b5e();
    bool v1; // 0x3a5651
    if (!v1) {
        function_3a5610();
    }
    // 0x3a5660
    return function_ffffffff995e584d();
}

// Address range: 0x3a566c - 0x3a5674
int64_t function_3a566c(int64_t a1) {
    // 0x3a566c
    return unknown_ffffffffc83f3c72(a1);
}

// Address range: 0x3a5674 - 0x3a5675
int64_t function_3a5674(void) {
    // 0x3a5674
    int64_t result; // 0x3a5674
    return result;
}

// Address range: 0x3a567f - 0x3a5681
int64_t function_3a567f(int64_t a1) {
    // 0x3a567f
    int64_t result; // 0x3a567f
    return result;
}

// Address range: 0x3a5688 - 0x3a568b
int64_t function_3a5688(int64_t a1) {
    // 0x3a5688
    int64_t result; // 0x3a5688
    return result;
}

// Address range: 0x3a5699 - 0x3a56a2
int64_t function_3a5699(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 0xc0ad8fe); // 0x3a5699
    *v1 = *v1 + (int32_t)a2;
    int64_t result; // 0x3a5699
    return result;
}

// Address range: 0x3a56ae - 0x3a5809
int64_t function_3a56ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1;
    unsigned char v2 = (char)a4 % 32; // 0x3a56ae
    bool v3; // 0x3a56ae
    int64_t v4; // 0x3a56ae
    int64_t v5; // 0x3a56ae
    if (v2 != 0) {
        unsigned char v6 = (char)(v5 / 256); // 0x3a56ae
        v3 = (1 << v2 - 1 & v6) != 0;
        v4 = 256 * (int64_t)(v6 >> v2) | v5 & -0xff01;
    }
    int64_t v7 = unknown_fffffffff8d969b6(); // bp-8, 0x3a56ba
    unknown_4044dec1();
    char * v8 = (char *)(v5 + 42); // 0x3a56c0
    char v9 = *v8 + (v3 ? -41 : -42); // 0x3a56c0
    unsigned char v10 = llvm_ctpop_i8(v9); // 0x3a56c0
    *v8 = v9;
    int64_t v11 = unknown_ffffffffd5e1e0ca(); // 0x3a56c3
    int64_t v12 = v11; // 0x3a56c9
    int64_t v13 = a3; // 0x3a56c9
    int64_t v14; // 0x3a56ae
    if (v10 % 2 == 0) {
        char * v15 = (char *)(v11 + 0x4eec0000); // 0x3a56cb
        *v15 = *v15 + (char)v11;
        int32_t * v16 = (int32_t *)(v4 - 0x72ffd500); // 0x3a56d3
        int32_t v17 = *v16 + (int32_t)v14; // 0x3a56d3
        unsigned char v18 = llvm_ctpop_i8((char)v17); // 0x3a56d3
        *v16 = v17;
        if (v18 % 2 == 0) {
            function_3a5674();
        }
        // 0x3a56db
        *(char *)v1 = *(char *)&v1 + (char)a3;
        int64_t v19 = unknown_ffffffffb4c7a0eb(); // 0x3a56e5
        *(char *)(v1 - 0x28c8f82c) = -1;
        *(int32_t *)v1 = (int32_t)v19;
        bool v20; // 0x3a56ae
        int64_t v21 = v1 + (v20 ? -4 : 4); // 0x3a56f0
        v1 = v21;
        char * v22 = (char *)(a2 + 77); // 0x3a56f1
        *v22 = *v22 + (char)(v4 / 256);
        v12 = unknown_ffffffffbebfcefa(v21) + 0x5d7dbe0b & 0xffffffff;
        v13 = (int64_t)((int32_t)a3 - *(int32_t *)-0x66c3c00e);
    }
    int32_t * v23 = (int32_t *)(v12 + 0x22b2add9); // 0x3a5705
    *v23 = *v23 - (int32_t)v4;
    int64_t v24 = v4 & -256 | 208; // 0x3a570c
    int64_t v25 = v13 + (int64_t)&v7 & 0xffffffff; // 0x3a5713
    int64_t v26 = v14; // bp-16, 0x3a5715
    char * v27 = (char *)v24; // 0x3a5718
    char v28 = *v27; // 0x3a5718
    int64_t v29 = 256 * (int64_t)(v28 & (char)((int64_t)&g4 >> 8)) | (v12 | (int64_t)&g4) & 0xffff00ff; // 0x3a5718
    int32_t * v30 = (int32_t *)(v1 - 0x2aaa2f61); // 0x3a571a
    int32_t v31 = *v30 + (int32_t)v24; // 0x3a571a
    *v30 = v31;
    int64_t result = unknown_ffffffff95eb1727(); // 0x3a5721
    if (v31 != 0) {
        // 0x3a5728
        *v27 = (char)(*(int32_t *)result / 256) & -42 | *v27;
        char * v32 = (char *)(2 * v29 - 24); // 0x3a572d
        *v32 = *v32 + 48;
        int32_t * v33 = (int32_t *)(v25 + 14); // 0x3a5731
        *v33 = *v33 + (int32_t)v29;
        return result;
    }
    // 0x3a57a1
    *(char *)-0x3bbbfe173069975a = (char)result;
    char v34 = *(char *)v25; // 0x3a57af
    int64_t v35 = 256 * (int64_t)(v34 | (char)(v4 / 256)) | v24 & -0xff30; // 0x3a57af
    int32_t * v36 = (int32_t *)v35; // 0x3a57b3
    *v36 = *v36 - 0x54612998;
    int64_t v37 = unknown_ffffffffb436f7bd(); // 0x3a57b7
    int64_t v38 = v35 & -256; // 0x3a57bc
    int32_t * v39 = (int32_t *)(v14 + 0x4901e8b3); // 0x3a57c1
    *v39 = *v39 | 0x3d01e8f5;
    int32_t * v40 = (int32_t *)(v38 + 8 * v25); // 0x3a57cb
    uint32_t v41 = *v40; // 0x3a57cb
    uint32_t v42 = v41 + (int32_t)v29; // 0x3a57cb
    *v40 = v42;
    int32_t * v43 = (int32_t *)((v38 | 96) + 2 * v38); // 0x3a57d0
    int32_t v44 = *v43; // 0x3a57d0
    *v43 = v44 + (int32_t)((v37 + 214 + (int64_t)(v42 < v41)) % 256 | v37 & 0xffffff00);
    char * v45 = (char *)(4 * v38 + (int64_t)&v26); // 0x3a57d9
    *v45 = *v45 + 104;
    int64_t v46 = v1; // bp-24, 0x3a57dc
    int64_t v47 = unknown_4fa096e6() + 0xc2999400; // 0x3a57e5
    char * v48 = (char *)((v1 + (int64_t)&v46 & 0xffffffff) - 0x646805b3); // 0x3a57ec
    *v48 = (char)v47;
    int64_t v49 = v47 & 0xffffff00; // 0x3a57ec
    unsigned char v50 = *v48 ^ -98; // 0x3a57f2
    char * v51 = (char *)((v49 | (int64_t)v50) + v14); // 0x3a57fa
    *v51 = *v51 + 1;
    *(char *)v14 = *(char *)&v14 | 104;
    return v49 | (int64_t)(v50 | 60);
}

// Address range: 0x3a5825 - 0x3a5827
int64_t function_3a5825(void) {
    // 0x3a5825
    int64_t result; // 0x3a5825
    return result;
}

// Address range: 0x3a5827 - 0x3a582b
int64_t function_3a5827(int64_t a1) {
    // 0x3a5827
    int64_t v1; // 0x3a5827
    return v1 & -0xff01 | (int64_t)&g3;
}

// Address range: 0x3a583d - 0x3a5858
int64_t function_3a583d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3a583d
    while ((int32_t)(a4 || a2) != 0) {
        // continue -> 0x3a5842
    }
    // 0x3a5844
    int64_t v1; // 0x3a583d
    int32_t * v2 = (int32_t *)(v1 - 0x1f000000); // 0x3a5847
    int64_t v3; // bp+16, 0x3a583d
    *v2 = *v2 + (int32_t)(int64_t)&v3;
    int64_t result; // 0x3a583d
    int64_t v4 = result;
    *(char *)v4 = *(char *)&result + (char)v4;
    char v5 = *(char *)-0x3b3a85aa; // 0x3a584f
    *(char *)-0x3b3a85aa = v5 + (char)((int64_t)"cxa_get_globals_fast" >> 8);
    return result;
}

// Address range: 0x3a585b - 0x3a5860
int64_t function_3a585b(void) {
    // 0x3a585b
    return function_183bc084();
}

// Address range: 0x3a58c5 - 0x3a58cf
int64_t function_3a58c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a58c5
    int64_t result; // 0x3a58c5
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x3a5933 - 0x3a5936
int64_t function_3a5933(void) {
    // 0x3a5933
    int64_t result; // 0x3a5933
    return result;
}
