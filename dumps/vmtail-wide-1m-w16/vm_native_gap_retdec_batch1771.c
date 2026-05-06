/*
 * Targeted RetDec C for native executable gap queue batch 1771.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3a750-0x3a950 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a950-0x3ab50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ab50-0x3ad24 rank=- name=- kind=- bytes=- uncovered=-
 *   0x41c64-0x41e64 rank=- name=- kind=- bytes=- uncovered=-
 *   0x41e64-0x42064 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42064-0x4221c rank=- name=- kind=- bytes=- uncovered=-
 *   0x5348f-0x5368f rank=- name=- kind=- bytes=- uncovered=-
 *   0x5368f-0x5388f rank=- name=- kind=- bytes=- uncovered=-
 *   0x5388f-0x53a3e rank=- name=- kind=- bytes=- uncovered=-
 *   0x29bcc9-0x29bec9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x29bec9-0x29c0c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x29c0c9-0x29c26e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d44ff-0x3d46ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d4948-0x4d4b48 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d4b48-0x4d4d48 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d4d48-0x4d4f00 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g5;
extern int g6;
extern int g7;
extern int g8;
extern int g9;
extern int g10;
extern int g11;
extern int g12;
extern int g13;
extern int g14;
extern int g15;
extern int g16;
extern int g17;
extern int g19;
extern int g20;
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
int128_t __asm_packsswb(int128_t left, int128_t right);
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

int64_t function_24ded();
int64_t function_2508e();
int64_t function_250b0();
int64_t function_25622();
int64_t function_2562c();
int64_t function_259ce();
int64_t function_25a28();
int64_t function_25cec();
int64_t function_25e90();
int64_t function_29bcc9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29bced(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29bcf6(void);
int64_t function_29bd05(void);
int64_t function_29bd0d(void);
int64_t function_29bd4f(int64_t a1);
int64_t function_29bd9a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29bdc1(void);
int64_t function_29bde1(void);
int64_t function_29be63(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_29bec0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29befc(void);
int64_t function_29bf6b(void);
int64_t function_29bfb5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29c025(void);
int64_t function_29c027(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29c02b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_29c17d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_29c1fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35fcc();
int64_t function_380a0();
int64_t function_3a735();
int64_t function_3a750(void);
int64_t function_3a7b0(int64_t a1);
int64_t function_3a83a(int64_t a1);
int64_t function_3a8c8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a8e8(void);
int64_t function_3a939(int64_t a1);
int64_t function_3a96e(void);
int64_t function_3a97f(int64_t a1, int64_t a2);
int64_t function_3a9a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a9d0(void);
int64_t function_3a9d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a9d7(void);
int64_t function_3aacd(int64_t a1);
int64_t function_3aaf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3aaf6(void);
int64_t function_3aaf9(void);
int64_t function_3ab2d(void);
int64_t function_3ab33(void);
int64_t function_3ab3e(void);
int64_t function_3ab42(void);
int64_t function_3ab5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ac67(void);
int64_t function_3ac74(void);
int64_t function_3ac83(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3acea(int64_t a1, int64_t a2);
int64_t function_3acf0(void);
int64_t function_3acf2(void);
int64_t function_3acf4(int64_t a1);
int64_t function_3d44c4();
int64_t function_3d44ff(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d4520(int64_t a1);
int64_t function_3d4551(void);
int64_t function_3d4599(void);
int64_t function_3d4607(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d468f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d46d6(void);
int64_t function_3dffc();
int64_t function_3e19c();
int64_t function_413fd();
int64_t function_41448();
int64_t function_415ae();
int64_t function_41bfb();
int64_t function_41c51();
int64_t function_41c64(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_41c77(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41d4a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41d8b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_421d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4a8c6();
int64_t function_4b03a0();
int64_t function_4c30c0();
int64_t function_4d4560();
int64_t function_4d4710();
int64_t function_4d4740();
int64_t function_4d4880();
int64_t function_4d48e0();
int64_t function_4d4948(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4d4a10(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4d4aa0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4d4b70(int64_t a1, int64_t a2);
int64_t function_4d4be0(int64_t a1, int64_t a2);
int64_t function_4d4c50(uint64_t a1, uint64_t a2, int64_t a3, uint64_t a4);
int64_t function_4d4d30(int64_t a1, int64_t a2);
int64_t function_4d4da0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t size2);
int64_t function_4eeb30();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_533c6();
int64_t function_53472();
int64_t function_5348f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_535a4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_53760(int64_t a1, int64_t a2);
int64_t function_537a4(int64_t a1);
int64_t function_537ae(int64_t a1, int64_t a2, int64_t a3);
int64_t function_539a2(void);
int64_t function_539a4(void);
int64_t function_539a8(void);
int64_t function_539aa(void);
int64_t function_539ae(void);
int64_t function_539b4(void);
int64_t function_539ba(void);
int64_t function_539c4(void);
int64_t function_539ce(int64_t a1);
int64_t function_53a06(int64_t a1);
int64_t function_542590();
int64_t function_54dc8();
int64_t function_5858c();
int64_t function_6d03fad8();
int64_t function_ffffffffb70ffb65();
int64_t function_ffffffffee92afdf();
int64_t function_fffffffff550e601();
int64_t unknown_2db5eb89();
int64_t unknown_31a3d6db();
int64_t unknown_4b3ef65b();
int64_t unknown_6928b83a();
int64_t unknown_695f6a54();
int64_t unknown_ffffffff802cb3d8();
int64_t unknown_ffffffffbdf8118c();

// Address range: 0x3a750 - 0x3a758
int64_t function_3a750(void) {
    // 0x3a750
    bool v1; // 0x3a750
    if (v1) {
        function_3a735();
    }
    // 0x3a752
    return unknown_695f6a54();
}

// Address range: 0x3a7b0 - 0x3a7b1
int64_t function_3a7b0(int64_t a1) {
    // 0x3a7b0
    int64_t result; // 0x3a7b0
    return result;
}

// Address range: 0x3a83a - 0x3a83d
int64_t function_3a83a(int64_t a1) {
    // 0x3a83a
    int64_t result; // 0x3a83a
    return result;
}

// Address range: 0x3a8c8 - 0x3a8cb
int64_t function_3a8c8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a8c8
    int64_t v1; // 0x3a8c8
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result - (int32_t)a2;
    return result;
}

// Address range: 0x3a8e8 - 0x3a8e9
int64_t function_3a8e8(void) {
    // 0x3a8e8
    int64_t result; // 0x3a8e8
    return result;
}

// Address range: 0x3a939 - 0x3a93d
int64_t function_3a939(int64_t a1) {
    // 0x3a939
    int64_t v1; // 0x3a939
    return v1 & 0xffffffff;
}

// Address range: 0x3a96e - 0x3a96f
int64_t function_3a96e(void) {
    // 0x3a96e
    int64_t result; // 0x3a96e
    return result;
}

// Address range: 0x3a97f - 0x3a981
int64_t function_3a97f(int64_t a1, int64_t a2) {
    // 0x3a97f
    int64_t v1; // 0x3a97f
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x3a9a2 - 0x3a9af
int64_t function_3a9a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a9a2
    int64_t v1; // 0x3a9a2
    uint32_t v2 = (int32_t)v1; // 0x3a9a2
    bool v3; // 0x3a9a2
    uint32_t v4 = *(int32_t *)(a2 + 0x53fe6812) + (int32_t)v3; // 0x3a9a2
    *(char *)(a1 - 71) = (char)a4;
    int64_t result = v2 - v4; // 0x3a9ac
    if (v4 >= v2) {
        result = function_3a96e();
    }
    // 0x3a9ae
    return result;
}

// Address range: 0x3a9d0 - 0x3a9d2
int64_t function_3a9d0(void) {
    // 0x3a9d0
    return function_3a9d7();
}

// Address range: 0x3a9d3 - 0x3a9d7
int64_t function_3a9d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a9d3
    int64_t result; // 0x3a9d3
    return result;
}

// Address range: 0x3a9d7 - 0x3a9d9
int64_t function_3a9d7(void) {
    // 0x3a9d7
    int64_t result; // 0x3a9d7
    __asm_out_133(-111, (int32_t)result);
    return result;
}

// Address range: 0x3aacd - 0x3aad5
int64_t function_3aacd(int64_t a1) {
    // 0x3aacd
    int64_t v1; // 0x3aacd
    return function_ffffffffee92afdf((int32_t)v1 + (int32_t)a1);
}

// Address range: 0x3aaf0 - 0x3aaf5
int64_t function_3aaf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 121); // 0x3aaf1
    bool v2; // 0x3aaf0
    *v1 = (int32_t)v2 - (int32_t)a4 + *v1;
    int64_t result; // 0x3aaf0
    return result;
}

// Address range: 0x3aaf6 - 0x3aaf7
int64_t function_3aaf6(void) {
    // 0x3aaf6
    int64_t result; // 0x3aaf6
    return result;
}

// Address range: 0x3aaf9 - 0x3aafc
int64_t function_3aaf9(void) {
    // 0x3aaf9
    return function_3aaf6();
}

// Address range: 0x3ab2d - 0x3ab2e
int64_t function_3ab2d(void) {
    // 0x3ab2d
    int64_t result; // 0x3ab2d
    return result;
}

// Address range: 0x3ab33 - 0x3ab36
int64_t function_3ab33(void) {
    // 0x3ab33
    int64_t result; // 0x3ab33
    return result;
}

// Address range: 0x3ab3e - 0x3ab41
int64_t function_3ab3e(void) {
    // 0x3ab3e
    int64_t result; // 0x3ab3e
    return result;
}

// Address range: 0x3ab42 - 0x3ab47
int64_t function_3ab42(void) {
    // 0x3ab42
    return function_6d03fad8();
}

// Address range: 0x3ab5b - 0x3ab72
int64_t function_3ab5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x3ab5b
    if (v1 != 0) {
        char * v2 = (char *)(a2 - 0x22cdb4e9); // 0x3ab5b
        unsigned char v3 = *v2; // 0x3ab5b
        bool v4; // 0x3ab5b
        *v2 = (char)v4 << v1 - 1 | v3 << v1 | (char)((int16_t)v3 >> (int16_t)(9 - v1));
    }
    int64_t v5; // 0x3ab5b
    uint32_t v6 = (int32_t)v5 + 0x2581a50e; // 0x3ab61
    uint32_t v7 = v6 + (int32_t)a3; // 0x3ab66
    int64_t result = v7; // 0x3ab66
    if (v1 != 0) {
        char * v8 = (char *)(v5 - 0x601ec3ec + 8 * result); // 0x3ab68
        unsigned char v9 = *v8; // 0x3ab68
        *v8 = v9 << v1 | (char)(v7 < v6) << v1 - 1 | (char)((int16_t)v9 >> (int16_t)(9 - v1));
    }
    return result;
}

// Address range: 0x3ac67 - 0x3ac6e
int64_t function_3ac67(void) {
    // 0x3ac67
    return function_ffffffffb70ffb65();
}

// Address range: 0x3ac74 - 0x3ac75
int64_t function_3ac74(void) {
    // 0x3ac74
    int64_t result; // 0x3ac74
    return result;
}

// Address range: 0x3ac83 - 0x3acea
int64_t function_3ac83(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ac83
    int64_t v1; // 0x3ac83
    uint64_t v2 = v1;
    char v3 = *(char *)(a2 - 22); // 0x3ac83
    int32_t v4 = v1;
    *(int32_t *)a1 = v4 >> 22;
    bool v5; // 0x3ac83
    int32_t * v6 = (int32_t *)(256 * (int64_t)((char)(v2 / 256) + (char)v5 - v3 | (char)v1) | v2 & -0xff01); // 0x3aca1
    uint32_t v7 = *v6; // 0x3aca1
    *v6 = v7 / 0x400000 | 1024 * (int32_t)((v4 & 0x200000) != 0) | 2048 * v7;
    int64_t result = 0; // 0x3acd9
    if (v1 != __readfsqword(40)) {
        // 0x3acdb
        __stack_chk_fail();
        result = (int64_t)&g20;
    }
    // 0x3ace0
    return result;
}

// Address range: 0x3acea - 0x3acef
int64_t function_3acea(int64_t a1, int64_t a2) {
    // 0x3acea
    return a2 + a1;
}

// Address range: 0x3acf0 - 0x3acf1
int64_t function_3acf0(void) {
    // 0x3acf0
    int64_t result; // 0x3acf0
    return result;
}

// Address range: 0x3acf2 - 0x3acf3
int64_t function_3acf2(void) {
    // 0x3acf2
    int64_t result; // 0x3acf2
    return result;
}

// Address range: 0x3acf4 - 0x3ad24
int64_t function_3acf4(int64_t a1) {
    // 0x3acf4
    if ((int64_t)g17 == a1) {
        // 0x3ad23
        int64_t result; // 0x3acf4
        return result;
    }
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result2 = *v1;
    *v1 = result2 - 1;
    if (result2 >= 0 == (result2 != 0)) {
        // 0x3ad23
        return result2;
    }
    // 0x3ad1e
    return function_4eeb50(a1);
}

// Address range: 0x41c64 - 0x41c77
int64_t function_41c64(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x41c64
    return function_41bfb();
}

// Address range: 0x41c77 - 0x41d4a
int64_t function_41c77(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1; // 0x41c77
    int64_t result; // 0x41c77
    if (a1 == 0) {
        goto lab_0x41d31;
    } else {
        int64_t v2 = *(int64_t *)(a1 + 88); // 0x41c8c
        if (v2 == 0) {
            goto lab_0x41d31;
        } else {
            // 0x41c99
            if (*(int32_t *)(a1 + 16) <= (int32_t)a2) {
                goto lab_0x41d31;
            } else {
                // 0x41ca2
                if (*(int32_t *)(a1 + 20) != 1) {
                    goto lab_0x41d31;
                } else {
                    int64_t v3 = *(int64_t *)(v2 + 32); // 0x41cac
                    int64_t v4 = *(int64_t *)v2; // 0x41cb6
                    int64_t v5 = v4 + (int64_t)*(int32_t *)(v3 + (4 * a2 & 0x3fffffffc)); // 0x41cb6
                    v1 = v5;
                    result = v5;
                    if (a3 == 0) {
                        goto lab_0x41cc5;
                    } else {
                        goto lab_0x41cbe;
                    }
                }
            }
        }
    }
  lab_0x41d31:
    // 0x41d31
    v1 = 0;
    if (a3 == 0) {
        // 0x41d3a
        return 0;
    }
    goto lab_0x41cbe;
  lab_0x41cbe:
    // 0x41cbe
    *(int64_t *)a3 = 0;
    result = v1;
    goto lab_0x41cc5;
  lab_0x41cc5:
    // 0x41cc5
    if (result == 0) {
        // 0x41d3a
        return 0;
    }
    int32_t v6 = *(int32_t *)(result + 20); // 0x41cd1
    int64_t v7 = (int64_t)((a4 & 1024) != 0 ? v6 : *(int32_t *)(result + 24)); // 0x41cec
    if ((int32_t)function_41c51(a1, a2 & 0xffffffff, result, v7, (int32_t)a4) == 0) {
        // 0x41d3a
        return 0;
    }
    // 0x41d26
    if (a3 != 0) {
        // 0x41d2b
        *(int64_t *)a3 = v7;
    }
    // 0x41d3a
    return result;
}

// Address range: 0x41d4a - 0x41d8b
int64_t function_41d4a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = function_415ae(); // 0x41d59
    if ((int32_t)v1 >= 0) {
        // 0x41d70
        return function_41c77(a1, v1 & 0xffffffff, a3, a4 & 0xffffffff);
    }
    if (a3 != 0) {
        // 0x41d67
        *(int64_t *)a3 = 0;
    }
    // 0x41d84
    return 0;
}

// Address range: 0x41d8b - 0x421d0
int64_t function_41d8b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x41d8b
    int64_t v1; // bp-11768, 0x41d8b
    int64_t v2 = (int64_t)&v1; // 0x41d9e
    __readfsqword(40);
    int64_t v3 = 0; // 0x41dd1
    int64_t v4; // 0x41df6
    uint32_t v5; // 0x41e0f
    int16_t v6; // 0x41d8b
    int32_t v7; // 0x41d8b
    if ((int32_t)function_41448() != 0) {
        // 0x41ddb
        v3 = 1;
        if (v7 == 0) {
            goto lab_0x421a3;
        } else {
            // 0x41df0
            v4 = function_413fd(a1, a2 & 0xffffffff);
            v3 = 1;
            if ((int32_t)v4 != 0) {
                goto lab_0x421a3;
            } else {
                // 0x41e05
                v3 = 0;
                char v8; // 0x41d8b
                if ((v8 & 33) != 0) {
                    goto lab_0x421a3;
                } else {
                    // 0x41e0f
                    v5 = a5 & (int32_t)&g6;
                    if (v5 != 0) {
                        goto lab_0x41e24;
                    } else {
                        // 0x41e18
                        v3 = 0;
                        if ((v6 & -9) != 0) {
                            goto lab_0x421a3;
                        } else {
                            goto lab_0x41e24;
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x421a3;
    }
  lab_0x4214b:;
    // 0x4214b
    int64_t v9; // 0x41d8b
    int64_t v10 = v9; // 0x4214b
    int64_t v11; // 0x41d8b
    int64_t v12; // 0x41d8b
    if (v12 != 0) {
        // 0x42172
        v3 = (int32_t)v11 == 0;
        goto lab_0x421a3;
    } else {
        goto lab_0x4214d;
    }
  lab_0x421a3:;
    int64_t result = v3; // 0x421b7
    if (*(int64_t *)(v2 + (int64_t)&g5) != __readfsqword(40)) {
        // 0x421b9
        __stack_chk_fail();
        result = (int64_t)&g20;
    }
    // 0x421be
    return result;
  lab_0x41e24:
    // 0x41e24
    v3 = 0;
    int64_t v13; // 0x41d8b
    int64_t v14; // 0x41d8b
    int64_t v15; // 0x41d8b
    int64_t v16; // 0x41d8b
    int64_t v17; // 0x41d8b
    int64_t v18; // 0x41d8b
    int64_t v19; // 0x41d8b
    int64_t v20; // 0x41d8b
    int64_t v21; // 0x41e62
    int64_t v22; // 0x41dfd
    int64_t * v23; // 0x41e7b
    int64_t v24; // 0x41e7b
    int64_t v25; // 0x41e7f
    if (v7 == 0x4034b50 == v4 == 30) {
        // 0x41e51
        int64_t v26; // 0x41d8b
        int64_t v27 = (int64_t)(uint16_t)v6 + 30 + (int64_t)v6 + v26; // 0x41e5f
        v21 = v7;
        v3 = 0;
        if (v27 + v21 > *(int64_t *)(a1 + 80)) {
            goto lab_0x421a3;
        } else {
            // 0x41e7b
            v22 = v4 & 0xffffffff;
            v23 = (int64_t *)(a1 + 88);
            v24 = *v23;
            v25 = *(int64_t *)(v24 + 104);
            if (v25 == 0) {
                int64_t v28 = v7 < 0x10000 | v21 == (int64_t)&g1 ? v21 : (int64_t)&g1; // 0x41eb7
                v3 = 0;
                if (v28 == 0) {
                    goto lab_0x421a3;
                } else {
                    // 0x41eda
                    v19 = v28;
                    v15 = v28;
                    v17 = v21;
                    v13 = v21;
                    v14 = 0;
                    v18 = v21;
                    v16 = v28;
                    v20 = v28;
                    if (v5 != 0) {
                        goto lab_0x41f65;
                    } else {
                        goto lab_0x41eee;
                    }
                }
            } else {
                int64_t v29 = v25 + v27; // 0x41e88
                v19 = v29;
                v15 = v21;
                v17 = 0;
                v13 = v29;
                v14 = v21;
                if (v5 != 0) {
                    // 0x42172
                    v3 = (int32_t)(v21 != a3 ? 0xffffffff : v22) == 0;
                    goto lab_0x421a3;
                } else {
                    goto lab_0x41eee;
                }
            }
        }
    } else {
        goto lab_0x421a3;
    }
  lab_0x41eee:
    if (v6 != 0) {
        // 0x41fee
        if (v13 == 0) {
            // 0x42172
            v3 = false;
            goto lab_0x421a3;
        } else {
            int64_t * v30 = (int64_t *)(v2 + 48); // 0x4203d
            int64_t * v31 = (int64_t *)(v2 + 88); // 0x4204d
            int64_t * v32 = (int64_t *)(v2 + 16);
            int64_t * v33 = (int64_t *)(v2 + 40);
            int64_t v34 = v2 + 80;
            int64_t v35 = v2 + (int64_t)&g4;
            int64_t * v36 = (int64_t *)v34;
            int32_t * v37 = (int32_t *)(v2 + 28);
            int64_t v38 = 0;
            int64_t v39 = 0;
            int64_t v40 = v39 & (int64_t)(int32_t)&g10; // 0x42032
            *v30 = v40 + v13;
            int64_t v41 = (int64_t)&g11 - v40; // 0x42047
            *v31 = v41;
            int64_t v42 = v41; // 0x42052
            int64_t v43 = v14; // 0x42052
            int64_t v44 = v38; // 0x42052
            int64_t v45; // 0x42054
            uint64_t v46; // 0x4205f
            uint64_t v47; // 0x42064
            if (v14 == 0) {
                // 0x42054
                v45 = *v23;
                v42 = v45;
                v43 = v14;
                v44 = v38;
                if (*(int64_t *)(v45 + 104) == 0) {
                    // 0x4205f
                    v46 = *(int64_t *)(v2 + 32);
                    v47 = *v32;
                    if (v45 != (v47 > v46 ? v46 : v47)) {
                        // 0x42172
                        v3 = false;
                        goto lab_0x421a3;
                    }
                    // 0x42090
                    *v33 = *v33 + v45;
                    *v32 = *v32 - v45;
                    v42 = v45;
                    v43 = v45;
                    v44 = 0;
                }
            }
            int64_t v48 = v42;
            int64_t v49 = *v32; // 0x420a0
            int64_t v50 = *(int64_t *)(v2 + 8); // 0x420a6
            *v36 = v43;
            *(int64_t *)(v2 - 16) = (v48 ^ 3) + v48 + (int64_t)(v49 == 0) & 2;
            int64_t v51 = *(int64_t *)(v2 + 72); // 0x420d0
            int64_t v52 = function_3e19c(v35, v50 + v44, v34, v13, *v30, v51); // 0x420da
            int64_t v53 = *v31; // 0x420df
            int64_t v54 = *v36; // 0x420e6
            int64_t v55 = v39; // 0x420f6
            int64_t v56; // 0x42105
            int64_t v57; // 0x42122
            if (v53 != 0) {
                // 0x420f8
                v56 = *(int64_t *)(v2 + 56);
                if (v56 != v53) {
                    // 0x42172
                    v3 = false;
                    goto lab_0x421a3;
                }
                // 0x42116
                v57 = function_3dffc(*v37, *v30, v56, v53);
                v55 = v56 + v39;
                *v37 = (int32_t)v57;
                if (*(int64_t *)(v2 + 160) < v55) {
                    // 0x42172
                    v3 = false;
                    goto lab_0x421a3;
                }
            }
            int64_t v58 = v55;
            while ((int32_t)v52 < 3) {
                // 0x4202f
                v38 = v54 + v44;
                v39 = v58;
                int64_t v59 = v43 - v54;
                v40 = v39 & (int64_t)(int32_t)&g10;
                *v30 = v40 + v13;
                v41 = (int64_t)&g11 - v40;
                *v31 = v41;
                v42 = v41;
                v43 = v59;
                v44 = v38;
                if (v59 == 0) {
                    // 0x42054
                    v45 = *v23;
                    v42 = v45;
                    v43 = v59;
                    v44 = v38;
                    if (*(int64_t *)(v45 + 104) == 0) {
                        // 0x4205f
                        v46 = *(int64_t *)(v2 + 32);
                        v47 = *v32;
                        if (v45 != (v47 > v46 ? v46 : v47)) {
                            // 0x42172
                            v3 = false;
                            goto lab_0x421a3;
                        }
                        // 0x42090
                        *v33 = *v33 + v45;
                        *v32 = *v32 - v45;
                        v42 = v45;
                        v43 = v45;
                        v44 = 0;
                    }
                }
                // 0x420a0
                v48 = v42;
                v49 = *v32;
                v50 = *(int64_t *)(v2 + 8);
                *v36 = v43;
                *(int64_t *)(v2 - 16) = (v48 ^ 3) + v48 + (int64_t)(v49 == 0) & 2;
                v51 = *(int64_t *)(v2 + 72);
                v52 = function_3e19c(v35, v50 + v44, v34, v13, *v30, v51);
                v53 = *v31;
                v54 = *v36;
                v55 = v39;
                if (v53 != 0) {
                    // 0x420f8
                    v56 = *(int64_t *)(v2 + 56);
                    if (v56 != v53) {
                        // 0x42172
                        v3 = false;
                        goto lab_0x421a3;
                    }
                    // 0x42116
                    v57 = function_3dffc(*v37, *v30, v56, v53);
                    v55 = v56 + v39;
                    *v37 = (int32_t)v57;
                    if (*(int64_t *)(v2 + 160) < v55) {
                        // 0x42172
                        v3 = false;
                        goto lab_0x421a3;
                    }
                }
                // 0x42138
                v58 = v55;
            }
            int64_t v60 = v52 & 0xffffffff; // 0x420e4
            v11 = v60;
            v9 = v58;
            v12 = v60;
            goto lab_0x4214b;
        }
    } else {
        // 0x41efd
        v18 = v17;
        v16 = v15;
        v20 = v19;
        if (v25 == 0) {
            goto lab_0x41f65;
        } else {
            // 0x41f0a
            if (v5 == 0 == v21 == a3) {
                // 0x41f42
                function_3dffc(0, v19, a3, a3);
                v10 = a3;
                goto lab_0x4214d;
            } else {
                // 0x42172
                v3 = (int32_t)(v21 != a3 ? 0xffffffff : v22) == 0;
                goto lab_0x421a3;
            }
        }
    }
  lab_0x41f65:;
    int64_t v61 = v5; // 0x41e0f
    uint64_t v62 = v16;
    int64_t v63 = 0; // 0x41f6b
    int64_t v64 = v24; // 0x41f6b
    int32_t v65 = 0; // 0x41f6b
    v11 = 30;
    v9 = 0;
    v12 = v61;
    if (v18 == 0) {
        goto lab_0x4214b;
    } else {
        uint64_t v66 = v18;
        int64_t v67 = v66 > v62 ? v62 : v66; // 0x41f8c
        while (v64 == v67) {
            int32_t v68 = v65;
            int32_t v69 = v68; // 0x41fa5
            if (v5 == 0) {
                // 0x41fa7
                v69 = function_3dffc(v68, v20, v67, v67);
            }
            // 0x41fbc
            if (v67 != a3) {
                // break -> 0x42172
                break;
            }
            int64_t v70 = v67 + v63; // 0x41fe1
            int64_t v71 = v66 - v67; // 0x41fe4
            v63 = v70;
            v64 = a3;
            v65 = v69;
            v11 = v22;
            v9 = v70;
            v12 = v61;
            if (v71 == 0) {
                goto lab_0x4214b;
            }
            v66 = v71;
            v67 = v66 > v62 ? v62 : v66;
        }
        // 0x42172
        v3 = false;
        goto lab_0x421a3;
    }
  lab_0x4214d:;
    int64_t v72 = 0xffffffff; // 0x42158
    if (*(int64_t *)(v2 + 160) == v10) {
        int32_t v73 = *(int32_t *)(v2 + 144); // 0x42160
        v72 = v73 != *(int32_t *)(v2 + 28) ? 0xffffffff : 0;
    }
    // 0x42172
    v3 = (int32_t)v72 == 0;
    goto lab_0x421a3;
}

// Address range: 0x421d0 - 0x4221c
int64_t function_421d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = function_415ae(); // 0x421eb
    if ((int32_t)v1 < 0) {
        // 0x42211
        return 0;
    }
    // 0x421f4
    return function_41d8b(a1, v1 & 0xffffffff, a3, a4, (int32_t)a5);
}

// Address range: 0x5348f - 0x535a3
int64_t function_5348f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x534b8
    int64_t v2 = function_5858c(); // 0x534d1
    int64_t v3 = v2; // 0x534d8
    if ((char)v2 != 0) {
        int64_t v4 = 0; // bp-56, 0x5351d
        int64_t v5 = function_53472(&v4, a2); // 0x53554
        v3 = v5;
        if (v4 != 0) {
            // 0x53563
            v3 = function_4eeb50(v4) & -256 | v5 % 256;
        }
    }
    int64_t result = v3; // 0x53595
    if (v1 != __readfsqword(40)) {
        // 0x53597
        __stack_chk_fail();
        result = (int64_t)&g20;
    }
    // 0x5359c
    return result;
}

// Address range: 0x535a4 - 0x5375f
int64_t function_535a4(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x535b4
    int64_t v2; // bp-56, 0x535a4
    int64_t v3; // 0x535a4
    int64_t v4; // bp-72, 0x535a4
    int64_t v5; // 0x535a4
    int64_t v6; // 0x535a4
    switch ((int16_t)v6) {
        case 4: {
            int64_t v7 = a3 != 0 ? a3 : (int64_t)&g7;
            v2 = 0;
            int64_t v8 = function_4efd30(24); // 0x535ff
            *(int64_t *)(v8 + 8) = (int64_t)&g19;
            *(int64_t *)v8 = (int64_t)&g14;
            function_250b0(v8 + 16, v7, &v4);
            v4 = 0;
            int64_t v9 = function_4efd30(32); // 0x53646
            int64_t v10 = v2; // 0x53655
            *(int64_t *)(v9 + 24) = v8;
            *(int64_t *)(v9 + 8) = 0x100000001;
            v2 = v9;
            *(int64_t *)v9 = (int64_t)&g12;
            v5 = v10;
            v3 = v8;
            goto lab_0x536f9;
        }
        case 5: {
            // 0x5367f
            v2 = 0;
            int64_t v11 = function_4efd30((int64_t)&g9); // 0x536a2
            function_54dc8(v11, a3 != 0 ? a3 : (int64_t)&g7);
            v4 = 0;
            int64_t v12 = function_4efd30(32); // 0x536c2
            int64_t v13 = v2; // 0x536c7
            *(int64_t *)(v12 + 8) = 0x100000001;
            *(int64_t *)(v12 + 24) = v11;
            *(int64_t *)v12 = (int64_t)&g13;
            v2 = v12;
            v5 = v13;
            v3 = v11;
            goto lab_0x536f9;
        }
        default: {
            // 0x5372d
            *(int64_t *)a1 = 0;
            *(int64_t *)(a1 + 8) = 0;
            goto lab_0x5373c;
        }
    }
  lab_0x5373c:;
    int64_t result = a1; // 0x5374d
    if (v1 != __readfsqword(40)) {
        // 0x5374f
        __stack_chk_fail();
        result = (int64_t)&g20;
    }
    // 0x53754
    return result;
  lab_0x536f9:
    // 0x536f9
    v4 = v5;
    function_35fcc(&v4);
    *(int64_t *)a1 = v3;
    int64_t v14 = v2; // 0x53714
    v2 = 0;
    *(int64_t *)(a1 + 8) = v14;
    function_35fcc(&v2);
    goto lab_0x5373c;
}

// Address range: 0x53760 - 0x537a4
int64_t function_53760(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + a1; // 0x5376a
    int64_t v2 = function_533c6(v1, *(int64_t *)(a1 + 8)); // 0x53771
    int64_t result = 0; // 0x53783
    if (v1 != 0) {
        // 0x53785
        function_25a28(result, a1 + 24, v1);
    }
    // 0x53791
    function_2562c(v2, result);
    return result;
}

// Address range: 0x537a4 - 0x537ad
int64_t function_537a4(int64_t a1) {
    // 0x537a4
    int64_t v1; // 0x537a4
    return function_380a0(a1 + 8, v1);
}

// Address range: 0x537ae - 0x539a2
int64_t function_537ae(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x537cc
    int64_t * v2 = (int64_t *)a1; // 0x537e7
    *v2 = (int64_t)&g19;
    int64_t v3; // 0x537ae
    int64_t v4; // 0x537ae
    int64_t v5; // 0x537ae
    int64_t v6; // 0x537ae
    int64_t v7; // bp-72, 0x537ae
    int64_t v8; // bp-80, 0x537ae
    int64_t v9; // 0x537ae
    int64_t v10; // 0x537ae
    int64_t v11; // 0x537ae
    int64_t v12; // 0x537ae
    int64_t v13; // 0x537ae
    int64_t v14; // 0x537ae
    int64_t v15; // 0x537ae
    uint64_t v16; // 0x5383e
    if (a3 != 0) {
        // 0x537f3
        v15 = (int64_t)&v8;
        v3 = a3;
        while (true) {
          lab_0x537f3:;
            int64_t v17 = v9;
            v4 = v3;
            v13 = v17;
            if (*(int64_t *)(v4 + 16) == 0) {
                goto lab_0x53972;
            } else {
                int64_t v18 = 0; // bp-88, 0x53806
                int64_t v19 = function_4c30c0(v4, &v18); // 0x5380f
                v13 = v17;
                if ((int32_t)v19 != 0) {
                    goto lab_0x53972;
                } else {
                    int64_t v20 = *(int64_t *)(v4 + 40); // 0x5381c
                    v13 = v17;
                    if (v20 == 0) {
                        goto lab_0x53972;
                    } else {
                        // 0x53829
                        function_250b0(v15, v20, &v7);
                        v16 = *(int64_t *)(v4 + 32);
                        uint64_t v21 = *(int64_t *)(v8 - 24); // 0x5384a
                        v10 = v17;
                        v14 = (int64_t)"basic_string::resize";
                        if (v16 > 0x3ffffffffffffff9) {
                            goto lab_0x53883;
                        } else {
                            if (v16 > v21) {
                                int64_t v22 = v16 - v21; // 0x53861
                                v12 = 0;
                                v6 = v8;
                                if (v22 == 0) {
                                    goto lab_0x538ef;
                                } else {
                                    // 0x5386f
                                    v10 = v22;
                                    v14 = (int64_t)"basic_string::append";
                                    v11 = v22;
                                    v5 = v8;
                                    if (v22 > 0x3ffffffffffffff9 - v21) {
                                        goto lab_0x53883;
                                    } else {
                                        goto lab_0x53888;
                                    }
                                }
                            } else {
                                // 0x538dd
                                v12 = v17;
                                v6 = v8;
                                if (v16 < v21) {
                                    // 0x538df
                                    function_25e90(&v8, v16, v21 - v16, 0);
                                    v12 = v17;
                                    v6 = v15;
                                }
                                goto lab_0x538ef;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x5397b:;
    int64_t result = a1; // 0x5398c
    if (v1 != __readfsqword(40)) {
        // 0x5398e
        __stack_chk_fail();
        result = (int64_t)&g20;
    }
    // 0x53993
    return result;
  lab_0x53972:;
    int64_t v23 = *(int64_t *)(v4 + 48); // 0x53972
    v3 = v23;
    v9 = v13;
    if (v23 == 0) {
        // break -> 0x5397b
        goto lab_0x5397b;
    }
    goto lab_0x537f3;
  lab_0x53883:
    // 0x53883
    function_542590((char *)v14);
    v11 = v10;
    v5 = v14;
    goto lab_0x53888;
  lab_0x53888:;
    int64_t v24 = v5;
    int64_t v25 = v11;
    if (v16 > *(int64_t *)(v24 - 16)) {
        // 0x5388e
        function_259ce(&v8, v16);
        goto lab_0x538a8;
    } else {
        // 0x5389b
        if ((char)function_25622(v24 - 24) != 0) {
            // 0x5388e
            function_259ce(&v8, v16);
            goto lab_0x538a8;
        } else {
            goto lab_0x538a8;
        }
    }
  lab_0x538ef:
    // 0x538ef
    if (*(int64_t *)(v6 - 24) != 0) {
        int64_t v26 = function_24ded(", "); // 0x5390e
        v7 = (int64_t)&g19;
        function_259ce(&v7, *(int64_t *)(v8 - 24) + v26);
        function_25cec(&v7, ", ", v26);
        function_4a8c6(&v7, &v8);
        function_4a8c6(v2, &v7);
        function_2508e(&v7);
    } else {
        // 0x538fa
        function_380a0(a1, v15);
    }
    // 0x5396a
    function_2508e(&v8);
    v13 = v12;
    goto lab_0x53972;
  lab_0x538a8:;
    int64_t v27 = v8; // 0x538a8
    char * v28 = (char *)(*(int64_t *)(v27 - 24) + v27);
    if (v25 != 1) {
        // 0x538be
        __asm_rep_stosb_memset(v28, 0, v25);
    } else {
        // 0x538b9
        *v28 = 0;
    }
    int64_t v29 = v8 - 24; // 0x538d2
    function_2562c(v29, v16);
    v12 = v25;
    v6 = v29;
    goto lab_0x538ef;
}

// Address range: 0x539a2 - 0x539a3
int64_t function_539a2(void) {
    // 0x539a2
    int64_t result; // 0x539a2
    return result;
}

// Address range: 0x539a4 - 0x539a7
int64_t function_539a4(void) {
    // 0x539a4
    return 0;
}

// Address range: 0x539a8 - 0x539a9
int64_t function_539a8(void) {
    // 0x539a8
    int64_t result; // 0x539a8
    return result;
}

// Address range: 0x539aa - 0x539ad
int64_t function_539aa(void) {
    // 0x539aa
    return 0;
}

// Address range: 0x539ae - 0x539b3
int64_t function_539ae(void) {
    // 0x539ae
    int64_t v1; // 0x539ae
    return function_4eeb50(v1);
}

// Address range: 0x539b4 - 0x539b9
int64_t function_539b4(void) {
    // 0x539b4
    int64_t v1; // 0x539b4
    return function_4eeb50(v1);
}

// Address range: 0x539ba - 0x539c4
int64_t function_539ba(void) {
    // 0x539ba
    return function_4eeb30();
}

// Address range: 0x539c4 - 0x539ce
int64_t function_539c4(void) {
    // 0x539c4
    return function_4eeb30();
}

// Address range: 0x539ce - 0x53a06
int64_t function_539ce(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x539d6
    int64_t * v2 = (int64_t *)v1; // 0x539e2
    *v2 = (int64_t)&g15;
    function_2508e((int64_t *)(v1 + 16));
    *v2 = (int64_t)&g16;
    function_2508e((int64_t *)(v1 + 8));
    return function_4eeb50(v1);
}

// Address range: 0x53a06 - 0x53a3e
int64_t function_53a06(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x53a0e
    int64_t * v2 = (int64_t *)v1; // 0x53a1a
    *v2 = (int64_t)&g14;
    function_2508e((int64_t *)(v1 + 16));
    *v2 = (int64_t)&g16;
    function_2508e((int64_t *)(v1 + 8));
    return function_4eeb50(v1);
}

// Address range: 0x29bcc9 - 0x29bccf
int64_t function_29bcc9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29bcc9
    return a3 & 0xffffffff;
}

// Address range: 0x29bced - 0x29bcf0
int64_t function_29bced(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29bced
    int64_t result; // 0x29bced
    return result;
}

// Address range: 0x29bcf6 - 0x29bcf7
int64_t function_29bcf6(void) {
    // 0x29bcf6
    int64_t result; // 0x29bcf6
    return result;
}

// Address range: 0x29bd05 - 0x29bd08
int64_t function_29bd05(void) {
    // 0x29bd05
    int64_t result; // 0x29bd05
    return result;
}

// Address range: 0x29bd0d - 0x29bd0e
int64_t function_29bd0d(void) {
    // 0x29bd0d
    int64_t result; // 0x29bd0d
    return result;
}

// Address range: 0x29bd4f - 0x29bd8d
int64_t function_29bd4f(int64_t a1) {
    // 0x29bd4f
    unknown_4b3ef65b();
    bool v1; // 0x29bd4f
    if (true == !v1) {
        function_29bcf6();
    }
    // 0x29bd5c
    *(int32_t *)(__asm_iretd() & 0xffffffff) = g2;
    int64_t v2; // 0x29bd4f
    if ((char)a1 - 124 == (char)v2) {
        function_29bd0d();
    }
    // 0x29bd7e
    int64_t v3; // 0x29bd4f
    *(int32_t *)v3 = *(int32_t *)&v3 - 0x6e0023aa;
    int32_t v4 = *(int32_t *)0x91ffdc56; // 0x29bd86
    *(int64_t *)((int64_t)(v4 & (int32_t)v2) - 8) = 0x98649b90;
    return __asm_int3();
}

// Address range: 0x29bd9a - 0x29bdb3
int64_t function_29bd9a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29bd9a
    int64_t v1; // 0x29bd9a
    char * v2 = (char *)(v1 + 0x67a20072); // 0x29bd9a
    *v2 = *v2 + (char)v1;
    int64_t v3; // 0x29bd9a
    __asm_out_133(-65, (int32_t)(v1 & 0xffffff00 | (int64_t)*(char *)&v3));
    *(int32_t *)0x7954a869 = *(int32_t *)0x7954a869 - 0x17f1a4bb;
    return v1 & 0xffffffff;
}

// Address range: 0x29bdc1 - 0x29bdc4
int64_t function_29bdc1(void) {
    // 0x29bdc1
    int64_t result; // 0x29bdc1
    return result;
}

// Address range: 0x29bde1 - 0x29bde8
int64_t function_29bde1(void) {
    char v1 = *(char *)0x20a5bde8; // 0x29bde1
    int64_t result; // 0x29bde1
    *(char *)0x20a5bde8 = v1 & (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x29be63 - 0x29be93
int64_t function_29be63(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x29be63
    int64_t v1; // 0x29be63
    int64_t v2 = v1;
    char v3 = *(char *)(v1 - 0x4c0a8500); // 0x29be63
    char * v4 = (char *)(v2 - 12); // 0x29be69
    unsigned char v5 = *v4; // 0x29be69
    unsigned char v6 = v5 + (char)a3; // 0x29be69
    *v4 = v6;
    int64_t v7 = (v2 - (v6 < v5 ? 33 : 32)) % 256 | v2 & -256; // 0x29be71
    uint32_t v8 = (int32_t)v7; // 0x29be73
    *(int32_t *)a1 = v8;
    uint32_t v9 = (int32_t)a4 % 32; // 0x29be81
    if (v9 != 0) {
        int32_t * v10 = (int32_t *)v7; // 0x29be81
        uint32_t v11 = *v10; // 0x29be81
        *v10 = v11 << v9 | (int32_t)((int64_t)v11 >> (int64_t)(33 - v9)) | (int32_t)(v8 < 0xe5c20001) << v9 - 1;
    }
    bool v12; // 0x29be63
    int64_t result = unknown_2db5eb89((v12 ? -4 : 4) + a1); // 0x29be83
    char v13 = *(char *)(256 * (int64_t)((char)v12 + (char)(a3 / 256) - v3) | a3 & -0xff01); // 0x29be8a
    *(char *)0x36df8093 = v13 + 59 + *(char *)0x36df8093;
    return result;
}

// Address range: 0x29bec0 - 0x29bed0
int64_t function_29bec0(int64_t a1, int64_t a2, int64_t a3) {
    char v1 = __asm_in((int16_t)a3); // 0x29bec7
    char * v2 = (char *)(a1 + 0x356c5b17); // 0x29bec8
    *v2 = *v2 & 11;
    return (int64_t)v1 | 0xed63a00;
}

// Address range: 0x29befc - 0x29bf08
int64_t function_29befc(void) {
    // 0x29befc
    int64_t result; // 0x29befc
    return result;
}

// Address range: 0x29bf6b - 0x29bf6c
int64_t function_29bf6b(void) {
    // 0x29bf6b
    int64_t result; // 0x29bf6b
    return result;
}

// Address range: 0x29bfb5 - 0x29bffd
int64_t function_29bfb5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29bfb5
    int64_t result; // 0x29bfb5
    bool v1; // 0x29bfb5
    if (v1 || false) {
        int32_t v2 = *(int32_t *)(result - 76); // 0x29bfe9
        int64_t v3 = __asm_hlt(); // 0x29bfec
        *(char *)(result - 0x47640000) = (char)((v2 & (int32_t)a3) / 256);
        return v3 & 0xffffffff ^ 0xbd86d34e;
    }
    // 0x29bfb7
    return result;
}

// Address range: 0x29c025 - 0x29c027
int64_t function_29c025(void) {
    // 0x29c025
    int64_t v1; // 0x29c025
    return function_29c02b(v1, v1, v1, v1, v1);
}

// Address range: 0x29c027 - 0x29c02b
int64_t function_29c027(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29c027
    int64_t v1; // 0x29c027
    return v1 & -128;
}

// Address range: 0x29c02b - 0x29c160
int64_t function_29c02b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x29c02b
    __asm_int(-91);
    int64_t v1; // 0x29c02b
    *(char *)a1 = (char)v1;
    bool v2; // 0x29c02b
    int64_t v3 = v2 ? -1 : 1; // 0x29c02d
    int64_t v4 = v3 + a1; // 0x29c02d
    char * v5 = (char *)(a2 + 0x109b01e8); // 0x29c02e
    *v5 = *v5 + (char)(v1 / 256);
    int64_t result = unknown_6928b83a(v4); // 0x29c034
    char * v6 = (char *)result; // 0x29c039
    *v6 = *v6 + (char)result;
    int64_t v7 = v1 & 0xff00;
    if (v7 != 0) {
        // 0x29c046
        return result;
    }
    int64_t v8 = result & 94 | 0x18013d00; // 0x29c040
    int64_t v9 = result & -0xff01 | (int64_t)&g8; // 0x29c0b1
    char * v10 = (char *)v9; // 0x29c0b8
    unsigned char v11 = *v10; // 0x29c0b8
    unsigned char v12 = v11 + (char)a4; // 0x29c0b8
    unsigned char v13 = v12 + (char)((int32_t)v9 < 0xe6bf0001); // 0x29c0b8
    *v10 = v13;
    if (v13 == 0 || ((int32_t)v9 < 0xe6bf0001 ? v13 <= v11 : v12 < v11)) {
        uint64_t v14 = -v7; // 0x29c042
        *(char *)-0x63862a2f = *(char *)-0x63862a2f + (char)(v14 / 256);
        int64_t result2 = unknown_31a3d6db(a2 & 0xffffffff); // 0x29c0d5
        *(int64_t *)0x3a3cc527843b4964 = v8;
        if ((char)(a4 / 256 & a2) >= 0) {
            // 0x29c046
            return result2;
        }
        char * v15 = (char *)(v14 & 0xff00 | v1 & -0xff01); // 0x29c074
        *v15 = *v15 + 1;
        return 0x10000 * (int32_t)result2 >> 16;
    }
    int32_t * v16 = (int32_t *)(a4 + 0x3d7a08b4); // 0x29c109
    int32_t v17 = a4; // 0x29c109
    *v16 = *v16 - v17;
    uint32_t v18 = v17 - *(int32_t *)v8 + 0x63013d00; // 0x29c111
    int64_t v19 = v18; // 0x29c111
    char * v20 = (char *)(a2 + 69); // 0x29c117
    *v20 = *v20 + (char)v1;
    int64_t v21 = v2 ? -4 : 4; // 0x29c11a
    int64_t v22 = v21 + a2; // 0x29c11a
    int32_t * v23 = (int32_t *)(v19 - 90); // 0x29c11b
    *v23 = *v23 | (int32_t)v1;
    uint32_t v24 = *(int32_t *)v22; // 0x29c11e
    int64_t v25 = v24; // 0x29c11e
    *(char *)(v4 & 0xffffffff) = __asm_insb((int16_t)v8);
    if ((*(int32_t *)(8 * v25 + a5) & (int32_t)v1) < 0) {
        unsigned char v26 = (char)v18 % 32; // 0x29c12c
        int64_t result3 = v25; // 0x29c12c
        if (v26 != 0) {
            result3 = 256 * (int64_t)((char)(v24 / 256) << v26) | v25 & 0xffff00ff;
        }
        // 0x29c046
        return result3;
    }
    int64_t v27 = v22 + v21; // 0x29c11e
    char * v28 = (char *)(v1 + 0x1600013d + *(int64_t *)(v19 + 0x62027879)); // 0x29c13e
    *v28 = *v28 - (char)(v18 / 256);
    *(int64_t *)0x3a3cc527843b4964 = 0x3a57aaf8;
    *(char *)v4 = *(char *)v27;
    int64_t v29 = v27 + v3; // 0x29c14c
    int32_t * v30 = (int32_t *)(v3 - 0x7eff97bd + v4); // 0x29c150
    uint32_t v31 = *v30; // 0x29c150
    uint32_t v32 = v31 + (int32_t)v29; // 0x29c150
    *v30 = v32;
    int64_t result4 = (int64_t)*(char *)v29 | (int64_t)(v24 + 0x525ec40c & -256); // 0x29c156
    int32_t * v33 = (int32_t *)result4; // 0x29c158
    *v33 = *v33 + (int32_t)(v32 < v31) + (int32_t)result4;
    return result4;
}

// Address range: 0x29c17d - 0x29c1fd
int64_t function_29c17d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x29c17d
    int64_t v1; // 0x29c17d
    char * v2 = (char *)(v1 + 112); // 0x29c17d
    *v2 = *v2 | (char)(a4 / 256);
    unknown_ffffffffbdf8118c();
    int64_t v3; // 0x29c17d
    *(char *)v3 = *(char *)&v3 ^ -50;
    int64_t v4 = unknown_ffffffff802cb3d8(); // 0x29c1c9
    int32_t * v5 = (int32_t *)(a5 + 0x69029d3a + v4); // 0x29c1ce
    *v5 = *v5 + (int32_t)a1;
    char v6 = *(char *)v4 + (char)v4; // 0x29c1e0
    *(char *)v3 = *(char *)&v3;
    int64_t result = a2 & 0xffffffff; // 0x29c1f0
    int32_t * v7 = (int32_t *)((v4 & 0xffffff00 | (int64_t)(v6 + 25)) + (int64_t)&g3); // 0x29c1f3
    uint32_t v8 = *v7; // 0x29c1f3
    *v7 = v8 / 0x20000000 | 8 * (int32_t)(v6 < 231) | 16 * v8;
    int32_t * v9 = (int32_t *)(result - 128); // 0x29c1fa
    *v9 = *v9 + (int32_t)*(int64_t *)a5;
    return result;
}

// Address range: 0x29c1fe - 0x29c206
int64_t function_29c1fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_wait(); // 0x29c1fe
    int16_t v2 = a3; // 0x29c1ff
    *(char *)a1 = __asm_insb(v2);
    __asm_int(-28);
    return v1 & -256 | (int64_t)__asm_in(v2);
}

// Address range: 0x3d44ff - 0x3d4514
int64_t function_3d44ff(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3;
    int64_t v2; // 0x3d44ff
    int32_t v3 = v2;
    int64_t v4 = v2 & 0xffffffff; // 0x3d4503
    bool v5; // 0x3d44ff
    int64_t v6 = (v5 ? -4 : 4) + a2; // 0x3d4503
    *(int32_t *)v4 = (int32_t)v6 + v3;
    __asm_out(121, (char)v2);
    int64_t v7 = v4; // 0x3d450f
    if (*(int32_t *)((v5 ? -1 : 1) + a1) > v3) {
        v7 = function_3d44c4();
    }
    // 0x3d4511
    *(char *)v1 = *(char *)&v1 + (char)v7;
    return v6 & 0xffffffff;
}

// Address range: 0x3d4520 - 0x3d4527
int64_t function_3d4520(int64_t a1) {
    char v1 = *(char *)0x27d7f427; // 0x3d4520
    int64_t result; // 0x3d4520
    *(char *)0x27d7f427 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x3d4551 - 0x3d4556
int64_t function_3d4551(void) {
    // 0x3d4551
    int64_t v1; // 0x3d4551
    uint64_t result = v1;
    *(char *)result = (char)(result / 256) + (char)result;
    return result;
}

// Address range: 0x3d4599 - 0x3d459a
int64_t function_3d4599(void) {
    // 0x3d4599
    int64_t result; // 0x3d4599
    return result;
}

// Address range: 0x3d4607 - 0x3d4643
int64_t function_3d4607(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d4607
    int64_t v1; // 0x3d4607
    uint64_t v2 = v1;
    *(int32_t *)-0x716b3804 = *(int32_t *)-0x716b3804 + (int32_t)a4;
    char * v3 = (char *)(a2 - 0xafde32b); // 0x3d4612
    unsigned char v4 = *v3; // 0x3d4612
    unsigned char v5 = v4 + (char)v1; // 0x3d4612
    *v3 = v5;
    int32_t v6 = a1; // 0x3d4618
    int64_t v7; // 0x3d4607
    *(int32_t *)a3 = *(int32_t *)&v7 - v6 + (int32_t)(v5 < v4);
    char * v8 = (char *)(a1 + 21); // 0x3d461b
    char v9 = v2; // 0x3d461b
    *v8 = *v8 | v9;
    *(char *)a4 = v9;
    *(char *)a3 = *(char *)&v7 + (char)(v2 / 256);
    int32_t * v10 = (int32_t *)(a2 - 118); // 0x3d4629
    *v10 = *v10 ^ (int32_t)v2;
    int32_t * v11 = (int32_t *)((4 * v2 & 0x3fffffffc) + a4); // 0x3d462c
    *v11 = *v11 | v6;
    return (int64_t)*(int32_t *)-0x4dfefec2f49394f1;
}

// Address range: 0x3d468f - 0x3d46a7
int64_t function_3d468f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d468f
    return function_fffffffff550e601();
}

// Address range: 0x3d46d6 - 0x3d46d9
int64_t function_3d46d6(void) {
    // 0x3d46d6
    int64_t result; // 0x3d46d6
    return result;
}

// Address range: 0x4d4948 - 0x4d4a01
int64_t function_4d4948(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1; // 0x4d4948
    int64_t v2; // 0x4d4948
    if (a5 != 0) {
        int64_t result = function_4d48e0(a1, a2, a3, a4); // 0x4d49c1
        v2 = result;
        v1 = a5;
        if ((int32_t)result < 0) {
            // 0x4d49a0
            return result;
        }
    } else {
        int64_t result2 = function_4d4880(); // 0x4d4977
        if ((int32_t)result2 < 0) {
            // 0x4d49a0
            return result2;
        }
        int64_t result3 = function_4d48e0(a1, a2, a3, a4); // 0x4d4992
        v2 = result3;
        v1 = 0x100000000 * result2 >> 32;
        if ((int32_t)result3 < 0) {
            // 0x4d49a0
            return result3;
        }
    }
    int64_t v3 = (0x100000000 * v2 >> 32) + v1; // 0x4d49d2
    int64_t v4 = function_4d4560(a1, a2, v3, a4); // 0x4d49d8
    int64_t result4 = v4; // 0x4d49df
    if ((int32_t)v4 >= 0) {
        int64_t v5 = function_4d4710(a1, a2, 48); // 0x4d49f1
        result4 = ((int32_t)v5 >= 0 ? v3 + v4 : 0) + v5 & 0xffffffff;
    }
    // 0x4d49a0
    return result4;
}

// Address range: 0x4d4a10 - 0x4d4a97
int64_t function_4d4a10(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4d4a10
    if (a1 - a2 < 1) {
        // 0x4d4a75
        return 0xffffff94;
    }
    int64_t v1 = a1 - 1; // 0x4d4a3a
    *(int64_t *)a1 = v1;
    *(char *)v1 = (char)((int32_t)a3 != 0);
    int64_t v2 = function_4d4560(a1, a2, 1, v1); // 0x4d4a4d
    int64_t result = v2; // 0x4d4a54
    if ((int32_t)v2 >= 0) {
        int64_t v3 = function_4d4710(a1, a2, 1); // 0x4d4a67
        result = ((int32_t)v3 >= 0 ? v2 + 1 : 0) + v3 & 0xffffffff;
    }
    // 0x4d4a75
    return result;
}

// Address range: 0x4d4aa0 - 0x4d4b67
int64_t function_4d4aa0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4d4aa0
    if (a1 - a2 < 1) {
        // 0x4d4b17
        return 0xffffff94;
    }
    int64_t v1 = a1 - 1; // 0x4d4acb
    int64_t * v2 = (int64_t *)a1; // 0x4d4ad1
    *v2 = v1;
    char * v3 = (char *)v1; // 0x4d4ad4
    *v3 = (char)a3;
    int64_t v4 = 1; // 0x4d4ad7
    if ((char)a1 < 0 == (int32_t)a3 > 0) {
        // 0x4d4b3b
        *v2 = v1;
        *v3 = 0;
        v4 = 2;
    }
    int64_t v5 = function_4d4560(a1, a2, v4, v1); // 0x4d4af0
    int64_t result = v5; // 0x4d4af7
    if ((int32_t)v5 >= 0) {
        int64_t v6 = function_4d4710(a1, a2, 2); // 0x4d4b09
        result = ((int32_t)v6 >= 0 ? v5 + v4 : 0) + v6 & 0xffffffff;
    }
    // 0x4d4b17
    return result;
}

// Address range: 0x4d4b70 - 0x4d4bd8
int64_t function_4d4b70(int64_t a1, int64_t a2) {
    int64_t result = function_4d4740(); // 0x4d4b89
    if ((int32_t)result < 0) {
        // 0x4d4bc5
        return result;
    }
    int64_t v1 = 0x100000000 * result >> 32; // 0x4d4b92
    int64_t v2; // 0x4d4b70
    int64_t v3 = function_4d4560(a1, a2, v1, v2); // 0x4d4b9e
    int64_t result2 = v3; // 0x4d4ba5
    if ((int32_t)v3 >= 0) {
        int64_t v4 = function_4d4710(a1, a2, 19); // 0x4d4bb7
        result2 = ((int32_t)v4 >= 0 ? v3 + v1 : 0) + v4 & 0xffffffff;
    }
    // 0x4d4bc5
    return result2;
}

// Address range: 0x4d4be0 - 0x4d4c48
int64_t function_4d4be0(int64_t a1, int64_t a2) {
    int64_t result = function_4d4740(); // 0x4d4bf9
    if ((int32_t)result < 0) {
        // 0x4d4c35
        return result;
    }
    int64_t v1 = 0x100000000 * result >> 32; // 0x4d4c02
    int64_t v2; // 0x4d4be0
    int64_t v3 = function_4d4560(a1, a2, v1, v2); // 0x4d4c0e
    int64_t result2 = v3; // 0x4d4c15
    if ((int32_t)v3 >= 0) {
        int64_t v4 = function_4d4710(a1, a2, 22); // 0x4d4c27
        result2 = ((int32_t)v4 >= 0 ? v3 + v1 : 0) + v4 & 0xffffffff;
    }
    // 0x4d4c35
    return result2;
}

// Address range: 0x4d4c50 - 0x4d4d27
int64_t function_4d4c50(uint64_t a1, uint64_t a2, int64_t a3, uint64_t a4) {
    // 0x4d4c50
    if (a1 < a2) {
        // 0x4d4cfe
        return 0xffffff94;
    }
    uint64_t v1 = a4 / 8 + (int64_t)(a4 % 8 != 0); // 0x4d4c89
    uint64_t v2 = a1 - a2; // 0x4d4ca1
    if (v2 <= v1) {
        // 0x4d4cfe
        return 0xffffff94;
    }
    int64_t v3 = v1 + 1; // 0x4d4c95
    int64_t v4 = a1 - v1; // 0x4d4ca9
    int64_t * v5 = (int64_t *)a1; // 0x4d4cb2
    *v5 = v4;
    memcpy((int64_t *)v4, (int64_t *)a3, (int32_t)v1);
    int64_t v6 = v4 - 1; // 0x4d4cc9
    *v5 = v6;
    *(char *)v6 = 8 * (char)v1 - (char)a4;
    int64_t v7 = function_4d4560(a1, a2, v3, v2); // 0x4d4cd7
    int64_t result = v7; // 0x4d4cde
    if ((int32_t)v7 >= 0) {
        int64_t v8 = function_4d4710(a1, a2, 3); // 0x4d4cf0
        result = ((int32_t)v8 >= 0 ? v7 + v3 : 0) + v8 & 0xffffffff;
    }
    // 0x4d4cfe
    return result;
}

// Address range: 0x4d4d30 - 0x4d4d98
int64_t function_4d4d30(int64_t a1, int64_t a2) {
    int64_t result = function_4d4740(); // 0x4d4d49
    if ((int32_t)result < 0) {
        // 0x4d4d85
        return result;
    }
    int64_t v1 = 0x100000000 * result >> 32; // 0x4d4d52
    int64_t v2; // 0x4d4d30
    int64_t v3 = function_4d4560(a1, a2, v1, v2); // 0x4d4d5e
    int64_t result2 = v3; // 0x4d4d65
    if ((int32_t)v3 >= 0) {
        int64_t v4 = function_4d4710(a1, a2, 4); // 0x4d4d77
        result2 = ((int32_t)v4 >= 0 ? v3 + v1 : 0) + v4 & 0xffffffff;
    }
    // 0x4d4d85
    return result2;
}

// Address range: 0x4d4da0 - 0x4d4f00
int64_t function_4d4da0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t size2) {
    int64_t v1 = function_4b03a0(a1); // 0x4d4dd4
    int64_t result; // 0x4d4da0
    if (v1 == 0) {
        int64_t * mem = calloc(1, 64); // 0x4d4e62
        if (mem == NULL) {
            // 0x4d4dfb
            return 0;
        }
        int64_t v2 = (int64_t)mem; // 0x4d4e62
        *(int64_t *)(v2 + 8) = a3;
        int32_t size = a3; // 0x4d4e7c
        int64_t * mem2 = calloc(1, size); // 0x4d4e7c
        *(int64_t *)(v2 + 16) = (int64_t)mem2;
        if (mem2 == NULL) {
            // 0x4d4ef3
            free(mem);
            // 0x4d4dfb
            return 0;
        }
        // 0x4d4e8e
        memcpy(mem2, (int64_t *)a2, size);
        *(int64_t *)(v2 + 32) = size2;
        int64_t * mem3 = calloc(1, (int32_t)size2); // 0x4d4eb5
        *(int64_t *)(v2 + 40) = (int64_t)mem3;
        if (mem3 == NULL) {
            // 0x4d4ee7
            free(mem2);
            // 0x4d4ef3
            free(mem);
            // 0x4d4dfb
            return 0;
        }
        // 0x4d4ecc
        *(int64_t *)(v2 + 48) = 1;
        *(int64_t *)a1 = v2;
        result = v2;
    } else {
        int64_t * v3 = (int64_t *)(v1 + 32); // 0x4d4de1
        result = v1;
        if (*v3 < size2) {
            int64_t * mem4 = calloc(1, (int32_t)size2); // 0x4d4e30
            if (mem4 == NULL) {
                // 0x4d4dfb
                return 0;
            }
            int64_t * v4 = (int64_t *)(v1 + 40); // 0x4d4e41
            free((int64_t *)*v4);
            *v4 = (int64_t)mem4;
            *v3 = size2;
            result = v1;
        }
    }
    // 0x4d4de7
    if (a4 != 0) {
        int64_t v5 = *(int64_t *)(result + 40); // 0x4d4dec
        memcpy((int64_t *)v5, (int64_t *)a4, (int32_t)size2);
    }
    // 0x4d4dfb
    return result;
}
