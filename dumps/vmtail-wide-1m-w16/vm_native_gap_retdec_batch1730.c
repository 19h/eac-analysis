/*
 * Targeted RetDec C for native executable gap queue batch 1730.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3b38b4-0x3b3ab4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b3ab4-0x3b3b9d rank=- name=- kind=- bytes=- uncovered=-
 *   0x42861f-0x42881f rank=- name=- kind=- bytes=- uncovered=-
 *   0x42881f-0x428a1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x428a1f-0x428b1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x428c1f-0x428ce3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53743b-0x53763b rank=- name=- kind=- bytes=- uncovered=-
 *   0x53783b-0x5378f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x540416-0x540616 rank=- name=- kind=- bytes=- uncovered=-
 *   0x540616-0x540816 rank=- name=- kind=- bytes=- uncovered=-
 *   0x540816-0x540a16 rank=- name=- kind=- bytes=- uncovered=-
 *   0x540a16-0x540ad0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x548fd9-0x5491d9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5491d9-0x5493d9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5493d9-0x5495d9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5495d9-0x549690 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g18;
extern int g19;
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

int64_t function_20110();
int64_t function_20730();
int64_t function_3b3861();
int64_t function_3b388c();
int64_t function_3b38b4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3b38d8(int64_t a1, int64_t a2);
int64_t function_3b392a(int64_t a1);
int64_t function_3b3934(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b3a52(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b3af1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b3afb(int64_t a1, int64_t a2);
int64_t function_3b3b29(int64_t a1);
int64_t function_3b3b38(void);
int64_t function_3b3b4d(int64_t a1);
int64_t function_3b3b57(void);
int64_t function_42861f(void);
int64_t function_42870a(void);
int64_t function_42870f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_428770(void);
int64_t function_428788(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_4287a6(int64_t a1);
int64_t function_428844(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_428869(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4288cc(void);
int64_t function_4288d2(void);
int64_t function_428921(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_4289a5(int64_t a1);
int64_t function_428a02(void);
int64_t function_428a4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_428a77(int64_t a1);
int64_t function_428c1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_428c3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_428c5a(void);
int64_t function_428c7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_428cbe(int64_t a1);
int64_t function_428ce0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_455196b5();
int64_t function_4eeb50();
int64_t function_4f2d50();
int64_t function_52b020();
int64_t function_52c050();
int64_t function_52c9e0();
int64_t function_53743b(int64_t a1);
int64_t function_53783b(int64_t a1);
int64_t function_537850(int64_t a1);
int64_t function_5378a0(int64_t a1);
int64_t function_540416(int64_t a1, int64_t a2);
int64_t function_54058a(int64_t a1, int64_t a2);
int64_t function_5405c0(int64_t a1);
int64_t function_5405e0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5406e0(int64_t a1);
int64_t function_540720(int64_t a1);
int64_t function_5407b0(int64_t result);
int64_t function_540820(int64_t a1);
int64_t function_540860(int64_t result);
int64_t function_540870(int64_t a1, int64_t a2);
int64_t function_5408b0(int64_t a1);
int64_t function_540900(int64_t a1, int64_t a2);
int64_t function_540950(int64_t result);
int64_t function_540960(int64_t a1);
int64_t function_5409b0(int64_t a1);
int64_t function_5409c0(int64_t a1);
int64_t function_5409d0(int64_t a1);
int64_t function_5409e0(int64_t a1, int64_t a2);
int64_t function_5409f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_540a00(int64_t a1);
int64_t function_540a10(int64_t a1);
int64_t function_540a20(int64_t a1);
int64_t function_540a30(int64_t a1, int64_t a2);
int64_t function_540a40(int64_t a1, int64_t a2, int64_t a3);
int64_t function_540a50(int64_t result2);
int64_t function_540ab0(int64_t a1, int64_t a2);
int64_t function_540ac0(int64_t a1, int64_t a2);
int64_t function_5423f0();
int64_t function_542470();
int64_t function_542590();
int64_t function_5473b0();
int64_t function_548f80();
int64_t function_548fd9(void);
int64_t function_548fe0(int64_t a1, int64_t a2);
int64_t function_5492de(int64_t a1);
int64_t function_5492f9(void);
int64_t function_5492fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_54964e(int64_t a1);
int64_t function_549687(void);
int64_t function_5659d0();
int64_t function_566100();
int64_t function_566180();
int64_t function_566390();
int64_t function_569140();
int64_t function_ffffffffb36ced29();
int64_t unknown_1b24d87();
int64_t unknown_2fe69e01();
int64_t unknown_ffffffffe8a9ac6f();

// Address range: 0x3b38b4 - 0x3b38d7
int64_t function_3b38b4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x5a9621c2); // 0x3b38b4
    *v1 = *v1 + 100;
    int64_t v2; // 0x3b38b4
    int32_t * v3 = (int32_t *)(v2 - 0x6b54d9f7); // 0x3b38bb
    *v3 = *v3 + (int32_t)a3;
    uint32_t v4 = (int32_t)v2; // 0x3b38c9
    *(int32_t *)a1 = v4;
    int64_t result; // 0x3b38b4
    if (v4 >= 0xf1ba8702) {
        result = function_3b3861();
    }
    char * v5 = (char *)(result + 9); // 0x3b38d1
    *v5 = *v5 + (char)(a3 / 256);
    return result;
}

// Address range: 0x3b38d8 - 0x3b38f8
int64_t function_3b38d8(int64_t a1, int64_t a2) {
    // 0x3b38d8
    int64_t v1; // 0x3b38d8
    int64_t v2 = v1;
    *(char *)v2 = (char)(v1 / 256) + (char)v2;
    int64_t v3; // 0x3b38d8
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    __asm_int(-6);
    __asm_hlt();
    return function_3b388c();
}

// Address range: 0x3b392a - 0x3b3934
int64_t function_3b392a(int64_t a1) {
    // 0x3b392a
    int64_t result; // 0x3b392a
    return result;
}

// Address range: 0x3b3934 - 0x3b3980
int64_t function_3b3934(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    unsigned char v2 = *(char *)0xab013d8f69df01; // 0x3b3934
    int64_t v3; // 0x3b3934
    int64_t v4 = v3 & -256 | (int64_t)v2;
    char * v5 = (char *)v4; // 0x3b393d
    *v5 = 2 * v2 + *v5;
    *(int32_t *)v1 = *(int32_t *)&v1 - (int32_t)v4;
    int64_t v6; // 0x3b3934
    *(char *)v6 = *(char *)&v6 + (char)(v1 / 256);
    uint32_t v7 = *(int32_t *)(v4 | 232); // 0x3b394f
    int64_t v8 = v1; // 0x3b3958
    int64_t v9 = v6;
    char v10 = *(char *)(v9 + 0x3d0020c9 + 4 * v9); // 0x3b3958
    int64_t v11 = v8 & -256 | (int64_t)(v10 + (char)v8); // 0x3b3958
    int32_t * v12 = (int32_t *)(v11 - 0x78f57764); // 0x3b395f
    *v12 = *v12 + (int32_t)v11;
    int32_t v13 = a1 - a2 + (int64_t)(v7 < 0x87dfa206); // 0x3b3969
    int64_t v14 = unknown_ffffffffe8a9ac6f(v13); // 0x3b3969
    *(int32_t *)0x303cc975 = *(int32_t *)0x303cc975 + v13;
    int32_t * v15 = (int32_t *)(v11 + 30); // 0x3b3976
    *v15 = *v15 & v13;
    return (v14 + 158) % 256 | v14 & -256;
}

// Address range: 0x3b3a52 - 0x3b3a72
int64_t function_3b3a52(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b3a52
    __asm_wait();
    int64_t v1 = __asm_int3(); // 0x3b3a5b
    char * v2 = (char *)(a1 + (int64_t)"azkongEGfvcjIIs+LZN9gXFhxcOh6kc4Q/c99B7QWETwLLkYgZ+z1a9VY9\r\ngEU7CwCxYCD+h9hY6FPmsK0/lC4O7aeRKpYq00rPPxs6i7phiexg6ax6yTMmArQq\r\nQmK3TAsJm8V/J5AWpLEV6jAFgRGymGGHnof0DXzVWZidrcZJWTNuGEX90nB3ee2w\r\nPXJEFWKoD3K3aFcSLdHYr3mLGxP7H9ThQai9VsycxZKS5kwvBKQ//YMrmFfwPk8x\r\nvTeY4KZMaUrveEel5tWZC94RSMKgxR6cyE1nBXyTQnDOGbfpNNgBKxyKbINWoOJU\r\nWJZAwlsQn+QzCDwpri7+sV1mS3gBE6UY7aQmnmiiaC2V3Hbphxct/en5QsfDOt1X\r\nJczSfpRWLlbPznZg8OQh/VgCMA58N5DjOzTIK7sJJ5r+94ZBTCpgAMbF588f0NTR\r\nKCe4yrxGJR7X02M4nvD4IwOlpsQ8xQxZtOSgXv4LkxvdU9XJJKWZ/XNKJeWztxSe\r\nZ1vdTc2YfsDBA2SEv33vxHx2g1vqtw8SjDRT2RaQSS0QuSaMJimdOX6mTOCBKk1J\r\n9Q5mXTrER+/LnK0jEmXsBXWA5bqqVZIyahXSx4VYZ7l7w/PHiUDtDgyRhMMKi4n2\r\niQvQcWSQTjrpnlJbca1/DkpRt3YwrvJwdqb8asZU2VrNETh5x0QVefDRLFiVpif/\r\ntUaeAe/P1F8OkS7OIZDs1SUbv/sD2vMbhNkUoCms3/PvNtdnvgL4F0zhaDpKCmlT\r\nP8vx49E7v5CyRNmED9zZg4o3wmMqrQO93PtTug3Eu9oVx1zPQM1NVMyBa2+f29DL\r\n1nuTCeXdo9+ni45xx+jAI4DCwrRdhJ9uzZyC6962H37H6D+5naNvClFR1s6li1Gb\r\nnqPoiy/OBsEx9CaDGcqQBp5Wme/3XW+6z1ISOx+igwNTVCT14mHdBMbya0eIKft5\r\nX+GnwtgEMyCYyyWuUct8g4RzErcY9+yW9Om5Hzpx4zOuW4NPZgPDTgK+t2RSL/Yq\r\nrE1njrgeGYcVeG3f+OftH4s6fPbq7t1A5ZgUscbLMBqr9tK+OqygR4EgKBPsH6Cz\r\nL6zlv/2RV0qAHvVuDJcIDIgwY5rJtINEm32rhOeFNJwZS5MNIC1czXZx5//ugX7l\r\nI4sy5nbVhwSjtAk8Xg5dZbdTZ6mIrb7xqH+fdakZor1khG7bC2uIwibD3cSl2XkR\r\nwN48lslbHnqqagr6Xm1nNOSVl8C/6kbJEsMpLhAezfRtGwvOucoaE+WbeUNolGde\r\nP/eQiddSf0brnpiLJRh7qZrl9XuqYdpUqnoEdMAfotDOID8OtV7gt8a48ad8VPW2\r\n-----END RSA PRIVATE KEY-----\r\n"); // 0x3b3a5c
    unsigned char v3 = *v2; // 0x3b3a5c
    *v2 = v3 / 128 | 2 * v3;
    int64_t v4; // 0x3b3a52
    int32_t * v5 = (int32_t *)(v4 - 94); // 0x3b3a67
    *v5 = (int32_t)v1;
    return (int64_t)*v5;
}

// Address range: 0x3b3af1 - 0x3b3af5
int64_t function_3b3af1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b3af1
    int64_t result; // 0x3b3af1
    int32_t * v1 = (int32_t *)(result + 4 * a3); // 0x3b3af1
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x3b3afb - 0x3b3b19
int64_t function_3b3afb(int64_t a1, int64_t a2) {
    int64_t result = unknown_2fe69e01(); // 0x3b3afb
    int32_t * v1 = (int32_t *)(a2 - 0x17debeb6); // 0x3b3b01
    int64_t v2; // 0x3b3afb
    bool v3; // 0x3b3afb
    *v1 = (int32_t)v3 - (int32_t)v2 + *v1;
    int32_t * v4 = (int32_t *)(v2 - 115); // 0x3b3b07
    *v4 = *v4 + (int32_t)v2;
    *(char *)-0x621fe17d5bbfedd = (char)result;
    return result;
}

// Address range: 0x3b3b29 - 0x3b3b2a
int64_t function_3b3b29(int64_t a1) {
    // 0x3b3b29
    int64_t result; // 0x3b3b29
    return result;
}

// Address range: 0x3b3b38 - 0x3b3b3a
int64_t function_3b3b38(void) {
    // 0x3b3b38
    int64_t result; // 0x3b3b38
    return result;
}

// Address range: 0x3b3b4d - 0x3b3b4e
int64_t function_3b3b4d(int64_t a1) {
    // 0x3b3b4d
    int64_t result; // 0x3b3b4d
    return result;
}

// Address range: 0x3b3b57 - 0x3b3b5a
int64_t function_3b3b57(void) {
    // 0x3b3b57
    int64_t result; // 0x3b3b57
    return result;
}

// Address range: 0x42861f - 0x428624
int64_t function_42861f(void) {
    // 0x42861f
    int64_t v1; // 0x42861f
    return v1 + 0xf48131fd & 0xffffffff;
}

// Address range: 0x42870a - 0x42870b
int64_t function_42870a(void) {
    // 0x42870a
    int64_t result; // 0x42870a
    return result;
}

// Address range: 0x42870f - 0x428727
int64_t function_42870f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42870f
    int64_t v1; // 0x42870f
    int64_t result = v1 | 157; // 0x42870f
    __asm_rcl(*(int32_t *)(result - 0x31ebaced));
    *(int32_t *)-0x2759ccc55f73e9a4 = (int32_t)result;
    return result;
}

// Address range: 0x428770 - 0x428773
int64_t function_428770(void) {
    // 0x428770
    int64_t result; // 0x428770
    return result;
}

// Address range: 0x428788 - 0x4287a0
int64_t function_428788(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x428788
    int64_t v1; // 0x428788
    bool v2; // 0x428788
    int64_t result = v1 + 0x711be8d6 + (int64_t)v2 & 0xffffffff; // 0x428788
    char * v3 = (char *)(v1 + 0x3a7b001f); // 0x428791
    *v3 = *v3 ^ (char)(a4 / 256);
    char * v4 = (char *)(result - 39); // 0x42879a
    *v4 = *v4 - (char)v1;
    return result;
}

// Address range: 0x4287a6 - 0x4287ab
int64_t function_4287a6(int64_t a1) {
    // 0x4287a6
    int64_t result; // 0x4287a6
    return result;
}

// Address range: 0x428844 - 0x428866
int64_t function_428844(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x428844
    int64_t v1; // 0x428844
    int64_t v2 = v1;
    *(char *)v2 = (char)(v2 & a3);
    char * v3 = (char *)((a4 & -256 | 183) - 0x77a5e4bb); // 0x428854
    *v3 = *v3 + 43;
    char * v4 = (char *)(v1 + 113); // 0x42885b
    unsigned char v5 = *v4; // 0x42885b
    unsigned char v6 = v5 + (char)a3; // 0x42885b
    *v4 = v6;
    uint32_t v7 = *(int32_t *)0x3d23dc56; // 0x42885e
    *(int32_t *)0x3d23dc56 = v7 / 0x20000 | 0x10000 * v7 | 0x8000 * (int32_t)(v6 < v5);
    return v1 + 0xf430f57e & 0xffffffff ^ 0x3625bdbd;
}

// Address range: 0x428869 - 0x4288cb
int64_t function_428869(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x428869
    int64_t v1; // 0x428869
    uint32_t v2 = (int32_t)v1 ^ -0x1e7badd9; // 0x428869
    if (a4 != 1 != (v2 == 0)) {
        // 0x428870
        return function_455196b5();
    }
    int64_t v3 = v2; // 0x428869
    if ((v3 & 0x4100) == 0) {
        // 0x4288c9
        __asm_out((int16_t)a3, v2);
        return __asm_int3();
    }
    char * v4 = (char *)(v1 + 29); // 0x42888f
    unsigned char v5 = *v4; // 0x42888f
    unsigned char v6 = (char)(v1 / 256); // 0x42888f
    *v4 = v5 - v6;
    int32_t * v7 = (int32_t *)(a2 - 0x702213b5); // 0x428892
    *v7 = *v7 + (int32_t)a1 + (int32_t)(v5 < v6);
    return v3 & 0xffff00ff | (int64_t)&g1;
}

// Address range: 0x4288cc - 0x4288d2
int64_t function_4288cc(void) {
    // 0x4288cc
    int64_t result; // 0x4288cc
    // 0x4288d0
    return result;
}

// Address range: 0x4288d2 - 0x4288d7
int64_t function_4288d2(void) {
    // 0x4288d2
    int64_t result; // 0x4288d2
    return result;
}

// Address range: 0x428921 - 0x42893a
int64_t function_428921(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x428921
    int64_t v1; // 0x428921
    __asm_outsd((int16_t)a3, (int32_t)v1);
    uint64_t v2 = a4 % 64; // 0x42892a
    if (v2 != 0) {
        int64_t * v3 = (int64_t *)(v1 - 121); // 0x42892a
        *v3 = *v3 >> v2;
    }
    return unknown_1b24d87(45);
}

// Address range: 0x4289a5 - 0x4289a8
int64_t function_4289a5(int64_t a1) {
    // 0x4289a5
    int64_t result; // 0x4289a5
    return result;
}

// Address range: 0x428a02 - 0x428a05
int64_t function_428a02(void) {
    // 0x428a02
    int64_t result; // 0x428a02
    return result;
}

// Address range: 0x428a4e - 0x428a72
int64_t function_428a4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x428a4e
    bool v1; // 0x428a4e
    if (!v1) {
        // 0x428a64
        return __asm_hlt();
    }
    // 0x428a50
    int64_t result; // 0x428a4e
    return result;
}

// Address range: 0x428a77 - 0x428a7b
int64_t function_428a77(int64_t a1) {
    // 0x428a77
    int64_t v1; // 0x428a77
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x428c1f - 0x428c31
int64_t function_428c1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x428c1f
    int64_t result; // 0x428c1f
    int32_t * v1 = (int32_t *)(4 * a1 + 55 + result); // 0x428c1f
    *v1 = *v1 | (int32_t)a3;
    int64_t v2; // 0x428c1f
    int64_t v3 = v2;
    *(char *)v3 = *(char *)&v2 ^ (char)v3;
    return result;
}

// Address range: 0x428c3c - 0x428c43
int64_t function_428c3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x428c3c
    int64_t result; // 0x428c3c
    *(char *)a4 = (char)(result ^ result);
    return result;
}

// Address range: 0x428c5a - 0x428c5b
int64_t function_428c5a(void) {
    // 0x428c5a
    int64_t result; // 0x428c5a
    return result;
}

// Address range: 0x428c7d - 0x428ca5
int64_t function_428c7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int64_t v2; // 0x428c7d
    bool v3; // 0x428c7d
    if (v3) {
        v2 = function_428c5a();
    }
    // 0x428c7f
    *(char *)v2 = 0;
    *(char *)v1 = *(char *)&v1 ^ (char)(v2 / 256);
    unsigned char v4 = *(char *)0x4974ab44c27a3017; // 0x428c96
    return (int64_t)(*(int32_t *)-0x382c94ea790c7fe7 & -256) | (int64_t)v4;
}

// Address range: 0x428cbe - 0x428cd5
int64_t function_428cbe(int64_t a1) {
    // 0x428cbe
    return function_ffffffffb36ced29();
}

// Address range: 0x428ce0 - 0x428ce2
int64_t function_428ce0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x428ce0
    int64_t result; // 0x428ce0
    return result;
}

// Address range: 0x53743b - 0x53763b
int64_t function_53743b(int64_t a1) {
    // 0x53743b
    int64_t v1; // 0x53743b
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t v3; // 0x53743b
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    int64_t v5 = function_566390(&g11); // 0x53744b
    v3 = v5;
    int64_t v6 = (int64_t)&g11; // 0x53745b
    int64_t v7; // 0x53743b
    if (*(int64_t *)((int64_t)&g11 + 16) > v5) {
        int64_t v8 = *(int64_t *)((int64_t)&g11 + 8); // 0x537457
        int64_t v9 = *(int64_t *)(v8 + 8 * v5); // 0x53745d
        v6 = 0;
        if (v9 == 0) {
            goto lab_0x537482;
        } else {
            int64_t result = function_20730(v9, &g4, 0x845160, 0); // 0x537476
            v3 = result;
            v7 = v9;
            if (result != 0) {
                // 0x537480
                return result;
            }
            goto lab_0x537487;
        }
    } else {
        goto lab_0x537482;
    }
  lab_0x537482:
    // 0x537482
    function_5423f0();
    v7 = v6;
    goto lab_0x537487;
  lab_0x537487:
    // 0x537487
    function_20110();
    int64_t v10 = function_566390(&g14); // 0x53749b
    v3 = v10;
    int64_t v11 = *(int64_t *)v7; // 0x5374a0
    int64_t v12 = (int64_t)&g14; // 0x5374ab
    int64_t v13; // 0x53743b
    if (*(int64_t *)(v11 + 16) > v10) {
        int64_t v14 = *(int64_t *)(*(int64_t *)(v11 + 8) + 8 * v10); // 0x5374ad
        v12 = 0;
        if (v14 == 0) {
            goto lab_0x5374d2;
        } else {
            int64_t result2 = function_20730(v14, &g4, 0x845190, 0); // 0x5374c6
            v3 = result2;
            v13 = v14;
            if (result2 != 0) {
                // 0x537480
                return result2;
            }
            goto lab_0x5374d7;
        }
    } else {
        goto lab_0x5374d2;
    }
  lab_0x5374d2:
    // 0x5374d2
    function_5423f0();
    v13 = v12;
    goto lab_0x5374d7;
  lab_0x5374d7:
    // 0x5374d7
    function_20110();
    int64_t v15 = function_566390(&g17); // 0x5374eb
    v3 = v15;
    int64_t v16 = *(int64_t *)v13; // 0x5374f0
    int64_t v17 = (int64_t)&g17; // 0x5374fb
    int64_t v18; // 0x53743b
    if (*(int64_t *)(v16 + 16) > v15) {
        int64_t v19 = *(int64_t *)(*(int64_t *)(v16 + 8) + 8 * v15); // 0x5374fd
        v17 = 0;
        if (v19 == 0) {
            goto lab_0x537522;
        } else {
            int64_t result3 = function_20730(v19, &g4, 0x8451c0, 0); // 0x537516
            v3 = result3;
            v18 = v19;
            if (result3 != 0) {
                // 0x537480
                return result3;
            }
            goto lab_0x537527;
        }
    } else {
        goto lab_0x537522;
    }
  lab_0x537522:
    // 0x537522
    function_5423f0();
    v18 = v17;
    goto lab_0x537527;
  lab_0x537527:
    // 0x537527
    function_20110();
    int64_t v20 = function_566390(&g18); // 0x53753b
    v3 = v20;
    int64_t v21 = *(int64_t *)v18; // 0x537540
    int64_t v22 = (int64_t)&g18; // 0x53754b
    int64_t v23; // 0x53743b
    if (*(int64_t *)(v21 + 16) > v20) {
        int64_t v24 = *(int64_t *)(*(int64_t *)(v21 + 8) + 8 * v20); // 0x53754d
        v22 = 0;
        if (v24 == 0) {
            goto lab_0x537572;
        } else {
            int64_t result4 = function_20730(v24, &g4, 0x8451f8, 0); // 0x537566
            v3 = result4;
            v23 = v24;
            if (result4 != 0) {
                // 0x537480
                return result4;
            }
            goto lab_0x537577;
        }
    } else {
        goto lab_0x537572;
    }
  lab_0x537572:
    // 0x537572
    function_5423f0();
    v23 = v22;
    goto lab_0x537577;
  lab_0x537577:
    // 0x537577
    function_20110();
    int64_t v25 = function_566390(&g15); // 0x53758b
    v3 = v25;
    int64_t v26 = *(int64_t *)v23; // 0x537590
    int64_t v27 = (int64_t)&g15; // 0x53759b
    int64_t v28; // 0x53743b
    if (*(int64_t *)(v26 + 16) > v25) {
        int64_t v29 = *(int64_t *)(*(int64_t *)(v26 + 8) + 8 * v25); // 0x53759d
        v27 = 0;
        if (v29 == 0) {
            goto lab_0x5375c2;
        } else {
            int64_t result5 = function_20730(v29, &g4, 0x8452b0, 0); // 0x5375b6
            v3 = result5;
            v28 = v29;
            if (result5 != 0) {
                // 0x537480
                return result5;
            }
            goto lab_0x5375c7;
        }
    } else {
        goto lab_0x5375c2;
    }
  lab_0x5375c2:
    // 0x5375c2
    function_5423f0();
    v28 = v27;
    goto lab_0x5375c7;
  lab_0x5375c7:
    // 0x5375c7
    function_20110();
    int64_t v30 = function_566390(&g16); // 0x5375db
    v3 = v30;
    int64_t v31 = *(int64_t *)v28; // 0x5375e0
    if (*(int64_t *)(v31 + 16) <= v30) {
        // 0x537612
        function_5423f0();
        // 0x537617
        function_20110();
        return function_566390(&g13);
    }
    int64_t v32 = *(int64_t *)(*(int64_t *)(v31 + 8) + 8 * v30); // 0x5375ed
    if (v32 == 0) {
        // 0x537612
        function_5423f0();
        // 0x537617
        function_20110();
        return function_566390(&g13);
    }
    int64_t result6 = function_20730(v32, &g4, 0x845298, 0); // 0x537606
    v3 = result6;
    if (result6 != 0) {
        // 0x537480
        return result6;
    }
    // 0x537617
    function_20110();
    return function_566390(&g13);
}

// Address range: 0x53783b - 0x537848
int64_t function_53783b(int64_t a1) {
    // 0x53783b
    int64_t v1; // 0x53783b
    int64_t v2 = function_20730(v1, (int64_t *)v1, v1, (int32_t)v1); // 0x53783b
    return v2 & -256 | (int64_t)(v2 != 0);
}

// Address range: 0x537850 - 0x537898
int64_t function_537850(int64_t a1) {
    uint64_t v1 = function_566390(&g13); // 0x53785b
    if (*(int64_t *)((int64_t)&g13 + 16) <= v1) {
        // 0x537896
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)&g13 + 8); // 0x53786e
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x537872
    int64_t result = 0; // 0x537879
    if (v3 != 0) {
        int64_t v4 = function_20730(v3, &g4, 0x8452c8, 0); // 0x53788b
        result = v4 & -256 | (int64_t)(v4 != 0);
    }
    // 0x537896
    return result;
}

// Address range: 0x5378a0 - 0x5378e8
int64_t function_5378a0(int64_t a1) {
    uint64_t v1 = function_566390(&g12); // 0x5378ab
    if (*(int64_t *)((int64_t)&g12 + 16) <= v1) {
        // 0x5378e6
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)&g12 + 8); // 0x5378be
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x5378c2
    int64_t result = 0; // 0x5378c9
    if (v3 != 0) {
        int64_t v4 = function_20730(v3, &g4, 0x845230, 0); // 0x5378db
        result = v4 & -256 | (int64_t)(v4 != 0);
    }
    // 0x5378e6
    return result;
}

// Address range: 0x540416 - 0x54058a
int64_t function_540416(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 56; // 0x540423
    int64_t v2 = a2 + 56; // 0x540428
    int64_t * v3 = (int64_t *)(a2 + 8); // 0x540430
    int64_t v4 = __readfsqword(40); // 0x540434
    int64_t * v5 = (int64_t *)(a1 + 8); // 0x540444
    *v5 = *v3;
    int64_t * v6 = (int64_t *)(a2 + 16); // 0x54044f
    *v3 = *v5;
    int64_t * v7 = (int64_t *)(a1 + 16); // 0x540457
    *v7 = *v6;
    int64_t * v8 = (int64_t *)(a2 + 24); // 0x54045f
    *v6 = *v7;
    int64_t * v9 = (int64_t *)(a1 + 24); // 0x540467
    *v9 = *v8;
    int64_t * v10 = (int64_t *)(a2 + 32); // 0x54046f
    *v8 = *v9;
    int64_t * v11 = (int64_t *)(a1 + 32); // 0x540477
    *v11 = *v10;
    int64_t * v12 = (int64_t *)(a2 + 40); // 0x54047f
    *v10 = *v11;
    int64_t * v13 = (int64_t *)(a1 + 40); // 0x540487
    *v13 = *v12;
    int64_t * v14 = (int64_t *)(a2 + 48); // 0x54048f
    *v12 = *v13;
    int64_t * v15 = (int64_t *)(a1 + 48); // 0x540497
    *v15 = *v14;
    *v14 = *v15;
    int64_t v16; // bp-40, 0x540416
    function_5659d0(&v16, v1);
    function_566100(v1, v2);
    int64_t result3 = (int64_t)&v16; // 0x5404b9
    function_566100(v2, result3);
    function_566180(&v16);
    int64_t result = __readfsqword(40) ^ v4; // 0x5404d1
    if (result == 0) {
        // 0x5404dc
        return result;
    }
    // 0x5404e5
    __stack_chk_fail();
    int64_t v17 = __readfsqword(40); // 0x5404f9
    int64_t result2 = function_569140(); // 0x54051c
    if (v17 == __readfsqword(40)) {
        // 0x5404dc
        return result2;
    }
    // 0x540523
    __stack_chk_fail();
    int64_t v18; // bp+16, 0x540416
    int64_t v19 = (int64_t)&v18; // 0x54053d
    function_5659d0(&v16, v19);
    int64_t v20; // bp-57, 0x540416
    function_566100(v19, (int64_t)&v20);
    return result3;
}

// Address range: 0x54058a - 0x5405b2
int64_t function_54058a(int64_t a1, int64_t a2) {
    // 0x54058a
    int64_t result; // 0x54058a
    function_566180((int64_t *)result);
    _Unwind_Resume((struct _Unwind_Exception *)result);
    function_5659d0((int64_t *)result, a2 + 56);
    return result;
}

// Address range: 0x5405c0 - 0x5405da
int64_t function_5405c0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x5405c3
    return v1 != g5 ? v1 : a1;
}

// Address range: 0x5405e0 - 0x5406da
int64_t function_5405e0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x5405e4
    int64_t v2 = *(int64_t *)(a1 + 32); // 0x5405f7
    if (v1 == __readfsqword(40)) {
        // 0x54061d
        return v2 != g10 ? v2 : -1;
    }
    // 0x54063e
    __stack_chk_fail();
    int64_t v3 = __readfsqword(40); // 0x540654
    int64_t v4 = *(int64_t *)(a1 + 40); // 0x540667
    int64_t result = v4 != g9 ? v4 : -1; // 0x5406a6
    if (v3 != __readfsqword(40)) {
        // 0x5406ae
        __stack_chk_fail();
        int64_t v5 = *(int64_t *)(a1 + 48); // 0x5406c3
        result = v5 != g7 ? v5 : 0;
    }
    // 0x54061d
    return result;
}

// Address range: 0x5406e0 - 0x540712
int64_t function_5406e0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x5406e0
    int64_t v2 = *(int64_t *)(a1 + 16); // 0x5406e4
    if (v1 == v2) {
        // 0x5406f8
        return 0;
    }
    // 0x5406ed
    return v1 - v2 >> 2;
}

// Address range: 0x540720 - 0x5407a4
int64_t function_540720(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x540721
    uint64_t v2 = *v1; // 0x540721
    int64_t * v3 = (int64_t *)(a1 + 24); // 0x540728
    int64_t v4; // 0x540720
    int64_t v5; // 0x540720
    if (v2 >= *v3) {
        // 0x540750
        v4 = v2;
        v5 = a1;
        if (*(int64_t *)(a1 + 80) != g6) {
            goto lab_0x540738;
        } else {
            int64_t v6 = *(int64_t *)(a1 + 72); // 0x540760
            if (v6 == g8 || (int32_t)v6 == -1) {
                // 0x54076d
                return 0xffffffff;
            }
            goto lab_0x54072e;
        }
    } else {
        goto lab_0x54072e;
    }
  lab_0x54072e:;
    int64_t v7 = v2 + 4; // 0x540730
    *v1 = v7;
    v4 = v7;
    v5 = (int64_t)*(int32_t *)v2;
    goto lab_0x540738;
  lab_0x540738:
    // 0x540738
    if ((int32_t)v5 == -1) {
        // 0x54076d
        return 0xffffffff;
    }
    // 0x54073d
    if (v4 < *v3) {
        // 0x540747
        return (int64_t)*(int32_t *)v4;
    }
    int64_t v8 = *(int64_t *)(a1 + 72); // 0x54077b
    return v8 == g8 ? 0xffffffff : v8;
}

// Address range: 0x5407b0 - 0x54081a
int64_t function_5407b0(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 16); // 0x5407b0
    uint64_t v2 = *v1; // 0x5407b0
    if (v2 < *(int64_t *)(result + 24)) {
        // 0x5407ba
        *v1 = v2 + 4;
        return (int64_t)*(int32_t *)v2;
    }
    // 0x5407c8
    if (*(int64_t *)(result + 80) != g6) {
        // 0x5407e5
        return result;
    }
    int64_t v3 = *(int64_t *)(result + 72); // 0x5407d8
    if (v3 == g8 || (int32_t)v3 == -1) {
        // 0x5407e5
        return 0xffffffff;
    }
    // 0x540803
    *v1 = v2 + 4;
    return (int64_t)*(int32_t *)v2;
}

// Address range: 0x540820 - 0x540852
int64_t function_540820(int64_t a1) {
    uint64_t v1 = *(int64_t *)(a1 + 16); // 0x540820
    if (v1 >= *(int64_t *)(a1 + 24)) {
        // 0x540830
        return 0xffffffff;
    }
    // 0x54082a
    return (int64_t)*(int32_t *)v1;
}

// Address range: 0x540860 - 0x540866
int64_t function_540860(int64_t result) {
    // 0x540860
    return result;
}

// Address range: 0x540870 - 0x5408a7
int64_t function_540870(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x540870
    uint64_t v2 = *v1; // 0x540870
    if (*(int64_t *)(a1 + 8) >= v2) {
        // 0x540890
        return 0xffffffff;
    }
    int64_t v3 = v2 - 4; // 0x54087c
    if (*(int32_t *)v3 != (int32_t)a2) {
        // 0x540890
        return 0xffffffff;
    }
    // 0x540881
    *v1 = v3;
    return a2 & 0xffffffff;
}

// Address range: 0x5408b0 - 0x5408f4
int64_t function_5408b0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x5408b0
    uint64_t v2 = *v1; // 0x5408b0
    if (*(int64_t *)(a1 + 8) >= v2) {
        // 0x5408d0
        return 0xffffffff;
    }
    int64_t v3 = v2 - 4; // 0x5408ba
    *v1 = v3;
    return (int64_t)*(int32_t *)v3;
}

// Address range: 0x540900 - 0x540942
int64_t function_540900(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 40); // 0x540900
    uint64_t v2 = *v1; // 0x540900
    if (*(int64_t *)(a1 + 48) <= v2) {
        // 0x540920
        return 0xffffffff;
    }
    // 0x54090c
    *(int32_t *)v2 = (int32_t)a2;
    *v1 = v2 + 4;
    return a2 & 0xffffffff;
}

// Address range: 0x540950 - 0x540956
int64_t function_540950(int64_t result) {
    // 0x540950
    return result;
}

// Address range: 0x540960 - 0x5409a8
// From class:    std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_540960(int64_t a1) {
    // 0x540960
    *(int64_t *)(a1 + 8) = 0;
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 48) = 0;
    *(int64_t *)a1 = (int64_t)&g2;
    return function_4f2d50(a1 + 56);
}

// Address range: 0x5409b0 - 0x5409b5
int64_t function_5409b0(int64_t a1) {
    // 0x5409b0
    return *(int64_t *)(a1 + 8);
}

// Address range: 0x5409c0 - 0x5409c5
int64_t function_5409c0(int64_t a1) {
    // 0x5409c0
    return *(int64_t *)(a1 + 16);
}

// Address range: 0x5409d0 - 0x5409d5
int64_t function_5409d0(int64_t a1) {
    // 0x5409d0
    return *(int64_t *)(a1 + 24);
}

// Address range: 0x5409e0 - 0x5409ec
int64_t function_5409e0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x5409e7
    *v1 = *v1 + (0x100000000 * a2 >> 30);
    int64_t result; // 0x5409e0
    return result;
}

// Address range: 0x5409f0 - 0x5409fd
int64_t function_5409f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5409f0
    *(int64_t *)(a1 + 8) = a2;
    *(int64_t *)(a1 + 16) = a3;
    *(int64_t *)(a1 + 24) = a4;
    int64_t result; // 0x5409f0
    return result;
}

// Address range: 0x540a00 - 0x540a05
int64_t function_540a00(int64_t a1) {
    // 0x540a00
    return *(int64_t *)(a1 + 32);
}

// Address range: 0x540a10 - 0x540a15
int64_t function_540a10(int64_t a1) {
    // 0x540a10
    return *(int64_t *)(a1 + 40);
}

// Address range: 0x540a20 - 0x540a25
int64_t function_540a20(int64_t a1) {
    // 0x540a20
    return *(int64_t *)(a1 + 48);
}

// Address range: 0x540a30 - 0x540a3c
int64_t function_540a30(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 40); // 0x540a37
    *v1 = *v1 + (0x100000000 * a2 >> 30);
    int64_t result; // 0x540a30
    return result;
}

// Address range: 0x540a40 - 0x540a4d
int64_t function_540a40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x540a40
    *(int64_t *)(a1 + 40) = a2;
    *(int64_t *)(a1 + 32) = a2;
    *(int64_t *)(a1 + 48) = a3;
    int64_t result; // 0x540a40
    return result;
}

// Address range: 0x540a50 - 0x540aaa
int64_t function_540a50(int64_t result2) {
    int64_t * v1 = (int64_t *)(result2 + 16); // 0x540a50
    uint64_t v2 = *v1; // 0x540a50
    if (v2 < *(int64_t *)(result2 + 24)) {
        int64_t result = v2 + 4; // 0x540a5a
        *v1 = result;
        return result;
    }
    // 0x540a68
    if (*(int64_t *)(result2 + 80) != g6) {
        // 0x540a85
        return result2;
    }
    int64_t result3 = *(int64_t *)(result2 + 72); // 0x540a78
    if (result3 != g8 && (int32_t)result3 != -1) {
        // 0x540aa3
        *v1 = v2 + 4;
    }
    // 0x540a85
    return result3;
}

// Address range: 0x540ab0 - 0x540ab9
int64_t function_540ab0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x540ab4
    *v1 = *v1 + 4 * a2;
    int64_t result; // 0x540ab0
    return result;
}

// Address range: 0x540ac0 - 0x540ac9
int64_t function_540ac0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 40); // 0x540ac4
    *v1 = *v1 + 4 * a2;
    int64_t result; // 0x540ac0
    return result;
}

// Address range: 0x548fd9 - 0x548fde
int64_t function_548fd9(void) {
    // 0x548fd9
    int64_t result; // 0x548fd9
    return result;
}

// Address range: 0x548fe0 - 0x5492de
int64_t function_548fe0(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x548ff7
    int64_t v2 = function_548f80(); // 0x549007
    int64_t v3; // 0x548fe0
    int64_t v4; // 0x548fe0
    int64_t v5; // 0x548fe0
    int64_t v6; // 0x548fe0
    int64_t v7; // bp-120, 0x548fe0
    int64_t v8; // 0x548fe0
    char * v9; // bp-136, 0x548fe0
    if (*(int64_t *)(*(int64_t *)v2 + 32) != 0x548f00) {
        // 0x549268
        v3 = 0x100000000000000 * v2 >> 56;
        v4 = v2;
        int32_t v10; // 0x548fe0
        v8 = v10;
    } else {
        // 0x54902b
        v9 = (char *)&v7;
        v7 = 0;
        int64_t v11; // 0x548fe0
        function_52c050((int64_t *)&v9, 0, 0, "iostream error", 14, v11);
        v3 = 0;
        v4 = 0;
        v8 = 0;
        v6 = (int64_t)"iostream error";
        v5 = 14;
    }
    int64_t v12 = v4; // 0x549061
    char * v13; // bp-168, 0x548fe0
    int64_t v14 = (int64_t)&v13; // 0x54905c
    int64_t v15 = *(int64_t *)(a2 + 8); // 0x549065
    int64_t v16; // bp-152, 0x548fe0
    v13 = (char *)&v16;
    char * v17; // 0x548fe0
    int64_t v18; // 0x548fe0
    int64_t v19; // 0x548fe0
    int64_t v20; // 0x548fe0
    int64_t v21; // 0x548fe0
    int64_t v22; // 0x548fe0
    int64_t v23; // 0x548fe0
    int64_t v24; // bp-176, 0x548fe0
    int64_t v25; // 0x548fe0
    if (v12 == 0 == (v12 != -v15)) {
        // 0x54928b
        v23 = v14;
        v22 = function_542470("basic_string::_M_construct null not valid");
        v18 = (int64_t)&v9;
        goto lab_0x54929a;
    } else {
        // 0x549083
        v24 = v15;
        if (v15 < 16) {
            if (v15 != 1) {
                // 0x549280
                v17 = (char *)&v16;
                v21 = 0;
                if (v15 == 0) {
                    goto lab_0x549231;
                } else {
                    // 0x549285
                    v19 = (int64_t)&v16;
                    goto lab_0x54921e;
                }
            } else {
                // 0x54909c
                v16 = v3;
                v20 = v15;
                v25 = (int64_t)&v16;
                goto lab_0x5490a8;
            }
        } else {
            int64_t v26 = function_52b020((int64_t *)&v13, &v24, 0); // 0x54920a
            v13 = (char *)v26;
            v16 = v24;
            v19 = v26;
            goto lab_0x54921e;
        }
    }
  lab_0x54929a:;
    int64_t v27 = (int64_t)v9; // 0x54929a
    int64_t v28 = v18 + 16; // 0x54929f
    if (v28 != v27) {
        // 0x5492a8
        function_4eeb50(v27);
    }
    // 0x5492ad
    _Unwind_Resume((struct _Unwind_Exception *)v22);
    int64_t v29 = v23; // 0x5492b0
    int64_t v30 = v28; // 0x5492b0
    goto lab_0x5492b5;
  lab_0x5492b5:
    // 0x5492b5
    __stack_chk_fail();
    int64_t v31 = v29; // 0x5492b5
    int64_t v32 = v30; // 0x5492b5
    goto lab_0x5492ba;
  lab_0x54921e:
    // 0x54921e
    memcpy((int64_t *)v19, (int64_t *)v12, (int32_t)v15);
    v17 = v13;
    v21 = v24;
    goto lab_0x549231;
  lab_0x5492ba:;
    int64_t v33 = function_542590("basic_string::append"); // 0x5492c1
    int64_t v34 = (int64_t)v13; // 0x5492c9
    v23 = v34;
    v22 = v33;
    v18 = v32;
    if (v31 + 16 != v34) {
        // 0x5492d7
        function_4eeb50(v34);
        int64_t v35; // 0x5492ce
        v23 = v35;
        v22 = v33;
        int64_t v36; // 0x548fe0
        v18 = v36;
    }
    goto lab_0x54929a;
  lab_0x549231:
    // 0x549231
    v20 = v21;
    v25 = (int64_t)v17;
    goto lab_0x5490a8;
  lab_0x5490a8:
    // 0x5490a8
    *(char *)(v25 + v20) = 0;
    int64_t v37; // 0x548fe0
    if ((v20 || 1) == 0x7fffffffffffffff) {
        goto lab_0x5492ba;
    } else {
        // 0x5490ca
        function_52c9e0((int64_t *)&v13, ": ", 2, v6, v5);
        uint64_t v38 = v20 + v8; // 0x5490f9
        int64_t v39; // 0x54912e
        if (v38 > (v13 == (char *)&v16 ? 15 : v16)) {
            // 0x54910e
            if (v38 > (v9 == (char *)&v7 ? 15 : v7)) {
                // 0x54912b
                v39 = function_52c9e0((int64_t *)&v13, v9, v8, (int64_t)v13, v20);
                v37 = v39;
                goto lab_0x549133;
            } else {
                int64_t v40 = function_52c050((int64_t *)&v9, 0, 0, v13, v20, (int64_t)&v7); // 0x549257
                v37 = v40;
                goto lab_0x549133;
            }
        } else {
            // 0x54912b
            v39 = function_52c9e0((int64_t *)&v13, v9, v8, (int64_t)v13, v20);
            v37 = v39;
            goto lab_0x549133;
        }
    }
  lab_0x549133:;
    // 0x549133
    int64_t v41; // bp-88, 0x548fe0
    int64_t v42 = (int64_t)&v41; // 0x54913c
    int64_t v43 = v42; // bp-104, 0x54913c
    int64_t * v44 = (int64_t *)v37; // 0x549141
    int64_t v45 = *v44; // 0x549141
    int64_t v46 = v37 + 16; // 0x549144
    int64_t v47; // 0x548fe0
    if (v45 == v46) {
        // 0x549240
        v47 = __asm_movaps(__asm_movdqu(*(int128_t *)v45));
    } else {
        // 0x549151
        v43 = v45;
        v47 = *(int64_t *)v46;
    }
    // 0x54915f
    v41 = v47;
    *(char *)v46 = 0;
    *v44 = v46;
    *(int64_t *)(v37 + 8) = 0;
    function_5473b0(a1, &v43);
    if (v43 != v42) {
        // 0x549190
        function_4eeb50(v43);
    }
    // 0x549195
    if (v13 != (char *)&v16) {
        // 0x5491a3
        function_4eeb50((int64_t)v13);
    }
    // 0x5491a8
    if (v9 != (char *)&v7) {
        // 0x5491b6
        function_4eeb50((int64_t)v9);
    }
    // 0x5491bb
    *(int32_t *)(a1 + 16) = 1;
    *(int64_t *)(a1 + 24) = v2;
    *(int64_t *)a1 = (int64_t)&g3;
    int64_t result = __readfsqword(40) ^ v1; // 0x5491db
    v29 = (int64_t)&v16;
    v30 = (int64_t)&v7;
    if (result == 0) {
        // 0x5491ea
        return result;
    }
    goto lab_0x5492b5;
}

// Address range: 0x5492de - 0x5492f9
int64_t function_5492de(int64_t a1) {
    // 0x5492de
    int64_t result; // 0x5492de
    int64_t v1; // 0x5492de
    if (v1 + 16 != a1) {
        // 0x5492ef
        result = function_4eeb50(a1);
    }
    // 0x5492f4
    return result;
}

// Address range: 0x5492f9 - 0x5492fb
int64_t function_5492f9(void) {
    // 0x5492f9
    int64_t result; // 0x5492f9
    return result;
}

// Address range: 0x5492fb - 0x54964e
int64_t function_5492fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5492fb
    int64_t v1; // 0x5492fb
    if (v1 + 16 != a4) {
        // 0x54930c
        function_4eeb50(a4);
    }
    int32_t v2 = a3;
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t v3 = *(int64_t *)(a3 + 8); // 0x549337
    int64_t v4 = __readfsqword(40); // 0x54933d
    int64_t v5; // 0x5492fb
    int64_t v6; // 0x5492fb
    int64_t v7; // 0x5492fb
    int64_t v8; // 0x5492fb
    int64_t v9; // 0x5492fb
    int64_t v10; // bp-120, 0x5492fb
    char * v11; // bp-136, 0x5492fb
    if (*(int64_t *)(*(int64_t *)v3 + 32) != 0x548f00) {
        // 0x5495d8
        v5 = 0x100000000000000 * v3 >> 56;
        v7 = v3;
        int32_t v12; // 0x5492fb
        v6 = v12;
    } else {
        // 0x549370
        v10 = 0;
        v11 = (char *)&v10;
        if (v2 == 1) {
            // 0x549550
            function_52c050((int64_t *)&v11, 0, 0, "iostream error", 14, v1);
            v5 = 0;
            v7 = 0;
            v6 = 0;
            v9 = (int64_t)"iostream error";
            v8 = 14;
        } else {
            // 0x549391
            function_52c050((int64_t *)&v11, 0, 0, "Unknown error", 13, v1);
            v5 = 0;
            v7 = 0;
            v6 = 0;
            v9 = (int64_t)"Unknown error";
            v8 = 13;
        }
    }
    int64_t v13 = v7; // 0x5493af
    int64_t v14 = *(int64_t *)(a2 + 8); // 0x5493b3
    int64_t v15; // bp-152, 0x5492fb
    char * v16 = (char *)&v15; // bp-168, 0x5493bb
    int64_t v17 = (int64_t)&v11; // 0x5493c6
    char * v18; // 0x5492fb
    int64_t v19; // 0x5492fb
    int64_t v20; // 0x5492fb
    int64_t v21; // 0x5492fb
    int64_t v22; // bp-176, 0x5492fb
    int64_t v23; // 0x5492fb
    if (v13 == 0 == (v13 != -v14)) {
        goto lab_0x54963d;
    } else {
        // 0x5493d1
        v22 = v14;
        if (v14 < 16) {
            if (v14 != 1) {
                // 0x5495f0
                v18 = (char *)&v15;
                v21 = 0;
                if (v14 == 0) {
                    goto lab_0x5495a1;
                } else {
                    // 0x5495f5
                    v19 = (int64_t)&v15;
                    goto lab_0x54958e;
                }
            } else {
                // 0x5493ea
                v15 = v5;
                v20 = v14;
                v23 = (int64_t)&v15;
                goto lab_0x5493f6;
            }
        } else {
            int64_t v24 = function_52b020((int64_t *)&v16, &v22, 0); // 0x54957a
            v16 = (char *)v24;
            v15 = v22;
            v19 = v24;
            goto lab_0x54958e;
        }
    }
  lab_0x54963d:;
    int64_t v25 = function_542470("basic_string::_M_construct null not valid"); // 0x54964c
    int64_t v26 = v17; // 0x54964c
    goto lab_0x549622;
  lab_0x549622:;
    int64_t v27 = (int64_t)v11; // 0x549622
    v17 = v26 + 16;
    if (v17 != v27) {
        // 0x549630
        function_4eeb50(v27);
    }
    // 0x549635
    _Unwind_Resume((struct _Unwind_Exception *)v25);
    goto lab_0x54963d;
  lab_0x54958e:
    // 0x54958e
    memcpy((int64_t *)v19, (int64_t *)v13, (int32_t)v14);
    v18 = v16;
    v21 = v22;
    goto lab_0x5495a1;
  lab_0x5495a1:
    // 0x5495a1
    v20 = v21;
    v23 = (int64_t)v18;
    goto lab_0x5493f6;
  lab_0x5493f6:
    // 0x5493f6
    *(char *)(v23 + v20) = 0;
    int64_t v28; // 0x5492fb
    if ((v20 || 1) == 0x7fffffffffffffff) {
        goto lab_0x549600;
    } else {
        // 0x549418
        function_52c9e0((int64_t *)&v16, ": ", 2, v9, v8);
        uint64_t v29 = v20 + v6; // 0x549447
        int64_t v30; // 0x54947c
        if (v29 > (v16 == (char *)&v15 ? 15 : v15)) {
            // 0x54945c
            if (v29 > (v11 == (char *)&v10 ? 15 : v10)) {
                // 0x549479
                v30 = function_52c9e0((int64_t *)&v16, v11, v6, (int64_t)v16, v20);
                v28 = v30;
                goto lab_0x549481;
            } else {
                int64_t v31 = function_52c050((int64_t *)&v11, 0, 0, v16, v20, (int64_t)&v10); // 0x5495c7
                v28 = v31;
                goto lab_0x549481;
            }
        } else {
            // 0x549479
            v30 = function_52c9e0((int64_t *)&v16, v11, v6, (int64_t)v16, v20);
            v28 = v30;
            goto lab_0x549481;
        }
    }
  lab_0x549600:;
    int64_t v32 = (int64_t)&v10;
    int64_t v33 = function_542590("basic_string::append"); // 0x549607
    int64_t v34 = (int64_t)v16; // 0x54960f
    v25 = v33;
    v26 = v32;
    if ((int64_t)&v15 + 16 != v34) {
        // 0x54961d
        function_4eeb50(v34);
        v25 = v33;
        v26 = v32;
    }
    goto lab_0x549622;
  lab_0x549481:;
    // 0x549481
    int64_t v35; // bp-88, 0x5492fb
    int64_t v36 = (int64_t)&v35; // 0x54948a
    int64_t v37 = v36; // bp-104, 0x54948a
    int64_t * v38 = (int64_t *)v28; // 0x54948f
    int64_t v39 = *v38; // 0x54948f
    int64_t v40 = v28 + 16; // 0x549492
    int64_t v41; // 0x5492fb
    if (v39 == v40) {
        // 0x5495b0
        v41 = __asm_movaps(__asm_movdqu(*(int128_t *)v39));
    } else {
        // 0x54949f
        v37 = v39;
        v41 = *(int64_t *)v40;
    }
    // 0x5494ad
    v35 = v41;
    *(char *)v40 = 0;
    *v38 = v40;
    *(int64_t *)(v28 + 8) = 0;
    function_5473b0(v1, &v37);
    if (v37 != v36) {
        // 0x5494de
        function_4eeb50(v37);
    }
    // 0x5494e3
    if (v16 != (char *)&v15) {
        // 0x5494f1
        function_4eeb50((int64_t)v16);
    }
    // 0x5494f6
    if (v11 != (char *)&v10) {
        // 0x549504
        function_4eeb50((int64_t)v11);
    }
    // 0x549509
    *(int64_t *)(v1 + 24) = v3;
    *(int32_t *)(v1 + 16) = v2;
    *(int64_t *)v1 = (int64_t)&g3;
    int64_t result = __readfsqword(40) ^ v4; // 0x54952c
    if (result == 0) {
        // 0x54953b
        return result;
    }
    // 0x5495fb
    __stack_chk_fail();
    goto lab_0x549600;
}

// Address range: 0x54964e - 0x549687
int64_t function_54964e(int64_t a1) {
    // 0x54964e
    int64_t v1; // 0x54964e
    if (v1 + 16 != a1) {
        // 0x54965f
        function_4eeb50(a1);
    }
    // 0x549664
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t result = (int64_t)&g19; // 0x54967b
    if (v1 != v1 + 16) {
        // 0x54967d
        result = function_4eeb50(v1);
    }
    // 0x549682
    return result;
}

// Address range: 0x549687 - 0x549689
int64_t function_549687(void) {
    // 0x549687
    int64_t result; // 0x549687
    return result;
}
