/*
 * Targeted RetDec C for native executable gap queue batch 741.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3228bb-0x322abb rank=- name=- kind=- bytes=- uncovered=-
 *   0x322abb-0x322cbb rank=- name=- kind=- bytes=- uncovered=-
 *   0x322cbb-0x322ebb rank=- name=- kind=- bytes=- uncovered=-
 *   0x322ebb-0x3230bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3230bb-0x3232bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c7e79-0x3c8079 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42401f-0x42421f rank=- name=- kind=- bytes=- uncovered=-
 *   0x42441f-0x42461f rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_21a9554();
int64_t function_3228bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_322985(int64_t a1);
int64_t function_322a00(void);
int64_t function_322a26(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_322a95(void);
int64_t function_322aac(void);
int64_t function_322ad5(void);
int64_t function_322ae7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_322b58(int64_t a1);
int64_t function_322b5a(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_322b9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_322bac(void);
int64_t function_322bb1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_322c20(void);
int64_t function_322c4b(void);
int64_t function_322c5e(void);
int64_t function_322c71(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_322c9c(void);
int64_t function_322cc6(int64_t a1);
int64_t function_322d1f(void);
int64_t function_322d30(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_322d56(int64_t a1);
int64_t function_322d6e(int64_t a1);
int64_t function_322d8b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_322e67(int64_t a1, int64_t a2);
int64_t function_322e86(void);
int64_t function_322ead(void);
int64_t function_322efa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_322f2d(int64_t a1);
int64_t function_322f4d(void);
int64_t function_322f9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_322fc9(void);
int64_t function_322fcc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_322ff1(void);
int64_t function_323076(void);
int64_t function_3230a8(int64_t a1);
int64_t function_3230c8(void);
int64_t function_3230d9(void);
int64_t function_3230fb(void);
int64_t function_323129(void);
int64_t function_32313d(void);
int64_t function_32313f(void);
int64_t function_323141(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_323188(void);
int64_t function_3231ab(int64_t a1);
int64_t function_3231c3(int64_t a1);
int64_t function_3231d9(int64_t a1, int64_t a2);
int64_t function_3c7e79(void);
int64_t function_3c7ec0(void);
int64_t function_3c7ec8(int64_t a1, int64_t a2);
int64_t function_3c7eed(int64_t a1);
int64_t function_3c7efa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c7f2b(void);
int64_t function_3c7f2c(int64_t a1);
int64_t function_3c7f69(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3c7fa4(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_3c7fb9(int64_t a1);
int64_t function_3c7fd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_423fe2();
int64_t function_42401f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_424039(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_424071(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_42409c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4240b4(void);
int64_t function_4240c1(int64_t a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_42418c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_424196(int64_t a1);
int64_t function_4241c6(void);
int64_t function_4243ec();
int64_t function_424404();
int64_t function_42441f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_424478(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_424518(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4245aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4245f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ad5d39f();
int64_t function_ffffffff93548120();
int64_t function_ffffffffb1733b46();
int64_t function_ffffffffb5743181();
int64_t function_ffffffffe91cd308();
int64_t function_fffffffffb28debe();
int64_t unknown_2a3fe166();
int64_t unknown_367b9b4c();
int64_t unknown_3934bab3();
int64_t unknown_3a61d5c2();
int64_t unknown_3d3415de();
int64_t unknown_3dbaceb2();
int64_t unknown_4ec9a938();
int64_t unknown_512d240b();
int64_t unknown_58f66e2b();
int64_t unknown_5c4b9fe();
int64_t unknown_62341866();
int64_t unknown_746c8914();
int64_t unknown_79ec7d67();
int64_t unknown_ffffffff88633101();
int64_t unknown_ffffffffa23851cf();
int64_t unknown_ffffffffb201c4ef();
int64_t unknown_ffffffffb335bc65();
int64_t unknown_ffffffffc4a37aa6();
int64_t unknown_ffffffffdcf6e357();
int64_t unknown_ffffffffec61b907();
int64_t unknown_fffffffff2bbf1b7();
int64_t unknown_fffffffff3232788();
int64_t unknown_fffffffff7fb4eed();
int64_t unknown_fffffffff83cb264();

// Address range: 0x3228bb - 0x3228cb
int64_t function_3228bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3228bb
    int64_t v1; // 0x3228bb
    uint64_t v2 = v1;
    float80_t v3; // 0x3228bb
    *(int32_t *)(v2 - 24) = (int32_t)v3;
    int64_t v4; // 0x3228bb
    uint32_t v5 = *(int32_t *)&v4; // 0x3228be
    uint32_t v6 = v5 + (int32_t)a3; // 0x3228be
    *(int32_t *)a2 = v6;
    int64_t v7 = __asm_wait(); // 0x3228c7
    return (v7 - v2 / 256 + (int64_t)(v6 < v5)) % 256 | v7 & -256;
}

// Address range: 0x322985 - 0x322986
int64_t function_322985(int64_t a1) {
    // 0x322985
    int64_t result; // 0x322985
    return result;
}

// Address range: 0x322a00 - 0x322a01
int64_t function_322a00(void) {
    // 0x322a00
    int64_t result; // 0x322a00
    return result;
}

// Address range: 0x322a26 - 0x322a82
int64_t function_322a26(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x3c0aa040); // 0x322a26
    int64_t v2; // 0x322a26
    *v1 = *v1 + (int32_t)v2;
    bool v3; // 0x322a26
    int64_t v4 = v3 ? -4 : 4; // 0x322a30
    unknown_4ec9a938(v4 + a1, v4 + a2);
    unknown_367b9b4c();
    int64_t v5 = __asm_sti() & 0xffffffff; // 0x322a4c
    int64_t v6; // 0x322a26
    __asm_out(5, (int32_t)(int64_t)&v6);
    unknown_ffffffffdcf6e357();
    unknown_fffffffff83cb264();
    int64_t v7 = *(int64_t *)v5; // 0x322a65
    uint32_t v8 = __asm_in(27); // 0x322a66
    __asm_int(-24);
    uint32_t v9 = *(int32_t *)0x49b889b; // 0x322a6a
    int32_t v10 = v9 + v8; // 0x322a6a
    *(int32_t *)0x49b889b = v10;
    if (v10 < 0 == ((v10 ^ v9) & (v10 ^ v8)) < 0) {
        function_322a00();
    }
    unsigned char v11 = llvm_ctpop_i8((char)v10); // 0x322a6a
    int64_t * v12 = (int64_t *)(v5 + 8); // 0x322a6e
    int64_t v13 = *v12; // 0x322a6e
    *v12 = 512 * (int64_t)((v7 & (int64_t)&g1) != 0) | 256 * (int64_t)((v7 & 256) != 0) | 1024 * (int64_t)((v7 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v7 & (int64_t)"le") != 0) | 64 * (int64_t)(v10 == 0) | 128 * (int64_t)(v10 < 0) | 16 * (int64_t)(v9 % 16 + v8 % 16 > 15) | 2048 * (int64_t)(((v10 ^ v9) & (v10 ^ v8)) < 0) | 4 * (int64_t)(v11 % 2 == 0) | 3;
    return (v13 + (a4 / 256 ^ 255)) % 256 | v13 & -256;
}

// Address range: 0x322a95 - 0x322a9a
int64_t function_322a95(void) {
    // 0x322a95
    return function_fffffffffb28debe();
}

// Address range: 0x322aac - 0x322aad
int64_t function_322aac(void) {
    // 0x322aac
    int64_t result; // 0x322aac
    return result;
}

// Address range: 0x322ad5 - 0x322ad7
int64_t function_322ad5(void) {
    // 0x322ad5
    return function_322aac();
}

// Address range: 0x322ae7 - 0x322b31
int64_t function_322ae7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x322ae7
    unknown_fffffffff7fb4eed();
    int64_t v1 = unknown_512d240b(unknown_5c4b9fe() & 0xffffffff); // 0x322b05
    int64_t v2 = (int64_t)*(int32_t *)(4 * a2 + 88 + a4); // 0x322b0a
    int64_t v3; // 0x322ae7
    *(char *)(a2 + 0x1e8209e) = (char)((v1 + ((uint64_t)v3 % 256 | (int64_t)(int32_t)&g5)) / 256);
    int64_t v4 = unknown_58f66e2b(0x18ee0ae1); // 0x322b25
    char * v5 = (char *)v4; // 0x322b2a
    *v5 = 2 * *v5;
    *(int64_t *)(v2 - 8) = -58;
    *(int64_t *)(v2 - 16) = 0x18ee0ae1;
    return v4 | 50;
}

// Address range: 0x322b58 - 0x322b59
int64_t function_322b58(int64_t a1) {
    // 0x322b58
    int64_t result; // 0x322b58
    return result;
}

// Address range: 0x322b5a - 0x322b70
int64_t function_322b5a(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x322b5a
    bool v1; // 0x322b5a
    int64_t v2 = v1 ? -1 : 1; // 0x322b5f
    int64_t v3 = v2 + a1; // 0x322b5f
    int64_t result = unknown_79ec7d67(v3, v2 + 0x2f131a57); // 0x322b61
    int64_t v4; // 0x322b5a
    char * v5 = (char *)(2 * v4 - 34 + v3); // 0x322b66
    *v5 = *v5 + (char)(a3 / 256);
    return result;
}

// Address range: 0x322b9f - 0x322bac
int64_t function_322b9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x322b9f
    int64_t v1; // 0x322b9f
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 - 0x682bf9e7 + 8 * v1); // 0x322b9f
    *v3 = *v3 + (int32_t)a2;
    return v2 & -256 | (int64_t)(*(char *)(v1 + a2) ^ (char)v2);
}

// Address range: 0x322bac - 0x322bb1
int64_t function_322bac(void) {
    // 0x322bac
    return function_ffffffffb1733b46();
}

// Address range: 0x322bb1 - 0x322bca
int64_t function_322bb1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_fffffffff2bbf1b7(); // 0x322bb1
    char v2 = *(char *)v1; // 0x322bb6
    int64_t v3; // 0x322bb1
    bool v4; // 0x322bb1
    *(char *)a5 = (char)v4 + (char)v3 + (char)v1 + v2;
    return function_ad5d39f();
}

// Address range: 0x322c20 - 0x322c21
int64_t function_322c20(void) {
    // 0x322c20
    int64_t result; // 0x322c20
    return result;
}

// Address range: 0x322c4b - 0x322c4c
int64_t function_322c4b(void) {
    // 0x322c4b
    int64_t result; // 0x322c4b
    return result;
}

// Address range: 0x322c5e - 0x322c69
int64_t function_322c5e(void) {
    // 0x322c5e
    unknown_ffffffffb335bc65();
    return function_ffffffffe91cd308();
}

// Address range: 0x322c71 - 0x322c7f
int64_t function_322c71(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x322c71
    int64_t v1; // 0x322c71
    int64_t result = v1 & 0xe89ac3af; // 0x322c71
    int32_t * v2 = (int32_t *)(result - 0x7112fffd); // 0x322c76
    *v2 = *v2 + (int32_t)a3;
    return result;
}

// Address range: 0x322c9c - 0x322c9e
int64_t function_322c9c(void) {
    // 0x322c9c
    return function_322c20();
}

// Address range: 0x322cc6 - 0x322cc9
int64_t function_322cc6(int64_t a1) {
    // 0x322cc6
    return function_322c4b();
}

// Address range: 0x322d1f - 0x322d20
int64_t function_322d1f(void) {
    // 0x322d1f
    int64_t result; // 0x322d1f
    return result;
}

// Address range: 0x322d30 - 0x322d56
int64_t function_322d30(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x322d30
    *(char *)(a3 + 0x6a01e8d4) = (char)(a4 / 256);
    int64_t v1; // 0x322d30
    char v2 = *(char *)(a3 - 107 + 4 * v1); // 0x322d36
    int64_t result = v1 & -0xff01 | (int64_t)&g8; // 0x322d51
    bool v3; // 0x322d30
    if (((char)v3 + (char)a3 + v2 & (char)((int64_t)&g8 >> 8)) < 0) {
        result = function_322d1f();
    }
    // 0x322d53
    return result;
}

// Address range: 0x322d56 - 0x322d6c
int64_t function_322d56(int64_t a1) {
    // 0x322d56
    int64_t v1; // 0x322d56
    bool v2; // 0x322d56
    int64_t v3 = v1 + a1 + (int64_t)v2 & 0xffffffff; // 0x322d56
    int64_t v4; // 0x322d56
    int64_t v5; // 0x322d56
    __asm_out_133((int16_t)((int32_t)v4 >> 31), (int32_t)v5);
    unknown_62341866();
    int64_t result = *(int64_t *)v3; // 0x322d65
    v3 += 8;
    int32_t * v6 = (int32_t *)(result - 104); // 0x322d67
    int32_t v7 = *v6; // 0x322d67
    int32_t v8 = v3; // 0x322d67
    int32_t v9 = v7 + v8; // 0x322d67
    *v6 = v9;
    v5 = v4 & 0xffffffff;
    while (v9 < 0 != ((v9 ^ v7) & (v9 ^ v8)) < 0) {
        int64_t v10 = result;
        __asm_out_133((int16_t)((int32_t)v10 >> 31), (int32_t)v5);
        unknown_62341866();
        result = *(int64_t *)v3;
        v3 += 8;
        v6 = (int32_t *)(result - 104);
        v7 = *v6;
        v8 = v3;
        v9 = v7 + v8;
        *v6 = v9;
        v5 = v10 & 0xffffffff;
    }
    // 0x322d6c
    return result;
}

// Address range: 0x322d6e - 0x322d78
int64_t function_322d6e(int64_t a1) {
    // 0x322d6e
    int64_t v1; // 0x322d6e
    return v1 & -256 | (int64_t)*(char *)-0x46e0f9fa8216fe18;
}

// Address range: 0x322d8b - 0x322e66
int64_t function_322d8b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x322d8b
    int64_t v1; // 0x322d8b
    uint32_t result = (int32_t)v1 ^ 0x5e01e8bc; // 0x322d8b
    if (result >= 1) {
        // 0x322d98
        return result;
    }
    int64_t v2 = *(int64_t *)v1;
    int64_t v3 = 0x6807dff; // 0x322df9
    int64_t v4; // 0x322d8b
    int64_t v5 = v4;
    int64_t v6; // 0x322d8b
    uint64_t v7 = v6;
    int64_t v8 = a4;
    int3_t v9; // 0x322d8b
    float80_t v10 = __frontend_reg_load_fpr(v9); // 0x322e0a
    int64_t v11; // 0x322d8b
    float32_t v12 = *(float32_t *)(v11 - 0x3f7e4cc2); // 0x322e0a
    __frontend_reg_store_fpr(v9, v10 + (float80_t)v12);
    int3_t v13 = v9 + 1; // 0x322e0a
    char v14 = v7 / 256; // 0x322e10
    *(char *)-0xbe32e9 = *(char *)-0xbe32e9 + v14;
    float80_t v15 = __frontend_reg_load_fpr(v13); // 0x322e19
    __frontend_reg_store_fpr(v13, v15 / (float80_t)*(float64_t *)(v3 + 96));
    char * v16 = (char *)(v3 + 8 * v7); // 0x322e1c
    *v16 = *v16 + (char)v8;
    *(char *)0x505bda2f = *(char *)0x505bda2f + v14;
    int64_t v17 = __asm_int1(v3, v2); // 0x322e2e
    unsigned char v18 = (char)v17; // 0x322e2f
    char v19 = v18 + 49; // 0x322e2f
    __asm_out_134(12, v18);
    while (((v19 ^ v18) & (v18 ^ -128)) < 0) {
        uint64_t v20 = 256 * (64 * (int64_t)(v19 == 0) | (int64_t)(v18 < 207) | 128 * (int64_t)(v19 < 0) | 16 * (int64_t)(v18 % 16 > 30) | 4 * (int64_t)(llvm_ctpop_i8(v19) % 2 == 0)) & 0xfffffd00 | 512;
        int64_t v21 = v20 | v17 & 0xffff00ff; // 0x322e37
        int64_t v22 = (int32_t)v8 >> 31; // 0x322dd1
        int64_t v23 = unknown_3d3415de(); // 0x322dd8
        int32_t * v24 = (int32_t *)((v20 & 0xff00 ^ v22) + 0x55b510d5); // 0x322de1
        int32_t v25 = *v24 + (int32_t)v21; // 0x322de1
        *v24 = v25;
        if (v25 != 0) {
            // 0x322e64
            *(int64_t *)v5 = -94;
            return v23 + v21 & 0xffff00ff | (int64_t)&g4;
        }
        int64_t v26 = v5 + 8; // 0x322e09
        int64_t v27 = (v7 - v22 + (int64_t)(v18 < 207)) % 256 | v7 & -256; // 0x322dd2
        unsigned char v28 = *(char *)0x8d3b9c8; // 0x322deb
        unsigned char v29 = v28 + (char)(v20 / 256); // 0x322deb
        *(char *)0x8d3b9c8 = v29;
        int64_t * v30 = (int64_t *)v26; // 0x322df1
        int64_t * v31 = (int64_t *)(v5 + 16); // 0x322df2
        *v31 = v11;
        bool v32; // 0x322d8b
        v3 += (v32 ? -4 : 4);
        __asm_outsd((int16_t)*v31, *(int32_t *)v2);
        int32_t * v33 = (int32_t *)((v11 & 0xffffffff) + 0x3b01e83a); // 0x322e02
        *v33 = *v33 + (int32_t)v27;
        *v30 = v2;
        v11 = *v30 - (v29 < v28 ? 0x1c013d01 : 0x1c013d00) & 0xffffffff;
        v5 = v26;
        v7 = v27;
        v8 = v21;
        v10 = __frontend_reg_load_fpr(v13);
        __frontend_reg_store_fpr(v13, v10 + (float80_t)*(float32_t *)(v11 - 0x3f7e4cc2));
        v13++;
        v14 = v7 / 256;
        *(char *)-0xbe32e9 = *(char *)-0xbe32e9 + v14;
        v15 = __frontend_reg_load_fpr(v13);
        __frontend_reg_store_fpr(v13, v15 / (float80_t)*(float64_t *)(v3 + 96));
        v16 = (char *)(v3 + 8 * v7);
        *v16 = *v16 + (char)v8;
        *(char *)0x505bda2f = *(char *)0x505bda2f + v14;
        v17 = __asm_int1(v3, v2);
        v18 = (char)v17;
        v19 = v18 + 49;
        __asm_out_134(12, v18);
    }
    // 0x322e3a
    return v8 & 0xffffffff;
}

// Address range: 0x322e67 - 0x322e73
int64_t function_322e67(int64_t a1, int64_t a2) {
    // 0x322e67
    int64_t v1; // 0x322e67
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x322e86 - 0x322e87
int64_t function_322e86(void) {
    // 0x322e86
    int64_t result; // 0x322e86
    return result;
}

// Address range: 0x322ead - 0x322eaf
int64_t function_322ead(void) {
    // 0x322ead
    int64_t result; // 0x322ead
    return result;
}

// Address range: 0x322efa - 0x322f17
int64_t function_322efa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4; // 0x322efa
    uint32_t v2 = v1 % 32; // 0x322efa
    bool v3; // 0x322efa
    if (v2 != 0) {
        v3 = (0x80000000 >> v2 - 1 & v1) != 0;
    }
    bool v4; // 0x322efa
    if (!v4 && !v3) {
        function_322e86();
    }
    // 0x322eff
    unknown_ffffffffec61b907();
    int64_t v5; // 0x322efa
    *(int64_t *)((int64_t)(0x6e6203d8 * *(int32_t *)(v5 + 103)) - 8) = a2;
    return unknown_746c8914();
}

// Address range: 0x322f2d - 0x322f31
int64_t function_322f2d(int64_t a1) {
    // 0x322f2d
    int64_t result; // 0x322f2d
    return result;
}

// Address range: 0x322f4d - 0x322f51
int64_t function_322f4d(void) {
    // 0x322f4d
    int64_t v1; // 0x322f4d
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x322f9a - 0x322fc8
int64_t function_322f9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    uint64_t v2 = 256 * a3 & 0xff00 | a4; // 0x322f9a
    int64_t result = unknown_ffffffffc4a37aa6(); // 0x322fa0
    int64_t v3; // 0x322f9a
    if (v2 == 1 | *(char *)(a2 - 45 + 8 * v3) == (char)(v2 / 256)) {
        char v4 = *(char *)(v3 - 0x1764e94c); // 0x322faa
        int32_t * v5 = (int32_t *)((result & -256 | (int64_t)(v4 ^ (char)result)) - 0x363eaa57); // 0x322fb0
        *v5 = *v5 + (int32_t)v3;
        int64_t v6 = (int64_t)*(int32_t *)&v1; // 0x322fb6
        int64_t v7 = 0xcbe674 * v6; // 0x322fb6
        int64_t v8 = unknown_3a61d5c2(v7 & 0xfffffffc); // 0x322fbc
        char v9 = __asm_in_135((int16_t)v1); // 0x322fc4
        return (v8 | (int64_t)v9) & -256 | (int64_t)(v9 + 122 + (char)(v7 != 0xcbe67400000000 * v6 >> 32));
    }
    // 0x322fcb
    return result;
}

// Address range: 0x322fc9 - 0x322fcb
int64_t function_322fc9(void) {
    // 0x322fc9
    int64_t result; // 0x322fc9
    return result;
}

// Address range: 0x322fcc - 0x322fe4
int64_t function_322fcc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x322fcc
    int64_t v1; // 0x322fcc
    uint64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a3;
    __asm_in(-18);
    bool v3; // 0x322fcc
    char * v4 = (char *)(a2 + 44 + (v3 ? -1 : 1)); // 0x322fd3
    *v4 = *v4 & (char)(v2 / 256);
    char * v5 = (char *)(a1 + 0x6701e88c); // 0x322fd9
    *v5 = *v5 + (char)(a4 / 256);
    return function_ffffffffb5743181();
}

// Address range: 0x322ff1 - 0x323010
int64_t function_322ff1(void) {
    unsigned char v1 = *(char *)0x1e8a5e80107bb5c; // 0x322ff3
    int64_t v2; // 0x322ff1
    *(int32_t *)0x68d85660606fff9d = (int32_t)(v2 & 0xffffff00 | (int64_t)v1);
    int64_t v3; // bp-16, 0x322ff1
    return (int64_t)&v3;
}

// Address range: 0x323076 - 0x323079
int64_t function_323076(void) {
    // 0x323076
    int64_t result; // 0x323076
    return result;
}

// Address range: 0x3230a8 - 0x3230b9
int64_t function_3230a8(int64_t a1) {
    // 0x3230a8
    bool v1; // 0x3230a8
    if (!v1) {
        // 0x3230b4
        int64_t result; // 0x3230a8
        return result;
    }
    int64_t result2 = unknown_3dbaceb2(); // 0x3230ac
    int32_t * v2 = (int32_t *)result2; // 0x3230b1
    *v2 = *v2 + (int32_t)result2;
    return result2;
}

// Address range: 0x3230c8 - 0x3230cd
int64_t function_3230c8(void) {
    // 0x3230c8
    int64_t result; // 0x3230c8
    return result;
}

// Address range: 0x3230d9 - 0x3230db
int64_t function_3230d9(void) {
    // 0x3230d9
    int64_t result; // 0x3230d9
    return result;
}

// Address range: 0x3230fb - 0x323100
int64_t function_3230fb(void) {
    // 0x3230fb
    return function_21a9554();
}

// Address range: 0x323129 - 0x32312a
int64_t function_323129(void) {
    // 0x323129
    int64_t result; // 0x323129
    return result;
}

// Address range: 0x32313d - 0x32313f
int64_t function_32313d(void) {
    // 0x32313d
    int64_t v1; // 0x32313d
    return function_323141(v1, v1, v1, v1, (int64_t)&g9);
}

// Address range: 0x32313f - 0x323141
int64_t function_32313f(void) {
    // 0x32313f
    int64_t result; // 0x32313f
    return result;
}

// Address range: 0x323141 - 0x323157
int64_t function_323141(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x323141
    int64_t v1; // 0x323141
    int64_t v2 = v1 + a3; // 0x323141
    __asm_out_134(-24, (char)v2);
    return v2 & 0xffffffff;
}

// Address range: 0x323188 - 0x323189
int64_t function_323188(void) {
    // 0x323188
    int64_t result; // 0x323188
    return result;
}

// Address range: 0x3231ab - 0x3231ac
int64_t function_3231ab(int64_t a1) {
    // 0x3231ab
    int64_t result; // 0x3231ab
    return result;
}

// Address range: 0x3231c3 - 0x3231d1
int64_t function_3231c3(int64_t a1) {
    // 0x3231c3
    return unknown_ffffffffa23851cf(a1);
}

// Address range: 0x3231d9 - 0x3231dd
int64_t function_3231d9(int64_t a1, int64_t a2) {
    // 0x3231d9
    int64_t v1; // 0x3231d9
    *(int32_t *)a2 = 2 * (int32_t)v1;
    return function_323188();
}

// Address range: 0x3c7e79 - 0x3c7e85
int64_t function_3c7e79(void) {
    // 0x3c7e79
    int64_t v1; // 0x3c7e79
    return v1 & -0x10000 | (int64_t)*(char *)0x3db7e9e901e82700 | 0x5c00;
}

// Address range: 0x3c7ec0 - 0x3c7ec8
int64_t function_3c7ec0(void) {
    // 0x3c7ec0
    int64_t v1; // 0x3c7ec0
    int32_t * v2 = (int32_t *)(v1 + 0x1e8dc00); // 0x3c7ec0
    *v2 = *v2 + (int32_t)v1;
    return function_3c7efa(v1, v1, v1, v1);
}

// Address range: 0x3c7ec8 - 0x3c7ed1
int64_t function_3c7ec8(int64_t a1, int64_t a2) {
    // 0x3c7ec8
    return function_3c7f2c(a1);
}

// Address range: 0x3c7eed - 0x3c7eef
int64_t function_3c7eed(int64_t a1) {
    // 0x3c7eed
    int64_t v1; // 0x3c7eed
    return v1 & 0xffffffff;
}

// Address range: 0x3c7efa - 0x3c7f27
int64_t function_3c7efa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffff88633101(); // 0x3c7efb
    *(char *)(a4 + 0x6e62e25c) = -1;
    int64_t v2 = v1 + 0x6c8351c4; // 0x3c7f0b
    char v3 = v2; // 0x3c7f10
    *(char *)0x261c020001e8748a = v3;
    int64_t v4 = v2 & 0x1cfe176a; // 0x3c7f1a
    char * v5 = (char *)(v4 | 0xe301e895); // 0x3c7f1f
    *v5 = *v5 + v3;
    return v4 ^ 0xd85a8263;
}

// Address range: 0x3c7f2b - 0x3c7f2c
int64_t function_3c7f2b(void) {
    // 0x3c7f2b
    int64_t result; // 0x3c7f2b
    return result;
}

// Address range: 0x3c7f2c - 0x3c7f38
int64_t function_3c7f2c(int64_t a1) {
    // 0x3c7f2c
    int64_t v1; // 0x3c7f2c
    return function_ffffffff93548120(v1 & 0xffffffff);
}

// Address range: 0x3c7f69 - 0x3c7f70
int64_t function_3c7f69(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c7f69
    return a2 & 0xca25889a;
}

// Address range: 0x3c7fa4 - 0x3c7fb5
int64_t function_3c7fa4(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x3c7fa4
    int64_t v1; // 0x3c7fa4
    *(char *)(2 * v1 + a3) = (char)(a3 / 256);
    int64_t v2 = unknown_3934bab3(); // 0x3c7fad
    return v2 + 256 * a3 & 0xff00 | v2 & -0xff01;
}

// Address range: 0x3c7fb9 - 0x3c7fbc
int64_t function_3c7fb9(int64_t a1) {
    // 0x3c7fb9
    int64_t result; // 0x3c7fb9
    return result;
}

// Address range: 0x3c7fd1 - 0x3c8072
int64_t function_3c7fd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    unsigned char v3 = (char)a3;
    int64_t v4; // 0x3c7fd1
    unsigned char v5 = (char)v4 + v3; // 0x3c7fd1
    *(char *)a3 = v5;
    uint32_t v6 = (int32_t)v4; // 0x3c7fd3
    int32_t v7 = v5 < v3; // 0x3c7fd3
    uint32_t v8 = *(int32_t *)&v1 + v7; // 0x3c7fd3
    uint32_t v9 = v6 - v8; // 0x3c7fd3
    int64_t v10 = v5 < v3 ? v8 != -1 | v9 - v7 > v6 : v8 > v6 ? 0x9f01e820 : 0x9f01e81f; // 0x3c7fd8
    if ((__asm_sti() - v10 & 0xffffffff) != 0) {
        char * v11 = (char *)(int64_t)v9; // 0x3c7fe5
        unsigned char v12 = *v11; // 0x3c7fe5
        *v11 = v12 / 2 | 128 * v12;
        int64_t result = unknown_ffffffffb201c4ef(); // 0x3c7fe8
        __asm_outsb((int16_t)a3, *(char *)0x8816b48d);
        return result;
    }
    // 0x3c8056
    *(int64_t *)(v4 + 67) = a5;
    int64_t result2 = unknown_2a3fe166(); // 0x3c8060
    int64_t v13 = v2;
    *(int32_t *)v13 = *(int32_t *)&v2 | (int32_t)v13;
    int32_t v14 = *(int32_t *)&v1; // 0x3c8067
    int32_t v15 = 1 << (int32_t)a3 % 32; // 0x3c8067
    *(int32_t *)v1 = v14 | v15;
    if ((v14 & v15) == 0) {
        // 0x3c8054
        return result2;
    }
    // 0x3c806c
    *(int32_t *)0x6e3e6873 = *(int32_t *)0x6e3e6873 + (int32_t)v2;
    return result2;
}

// Address range: 0x42401f - 0x424038
int64_t function_42401f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42401f
    int64_t v1; // 0x42401f
    unsigned char v2 = (char)v1; // 0x42401f
    if (v2 > -11) {
        function_423fe2();
    }
    uint32_t v3 = (int32_t)__asm_int3(); // 0x42402b
    bool v4 = v2 < 246 ? (v2 < 246 ? 0x704d995a : 0x704d9959) + v3 <= v3 : v3 > 0x8fb266a6; // 0x42402b
    __asm_iretd();
    return a2 + 0x18cf9d00 + (int64_t)v4 & 0xffffffff;
}

// Address range: 0x424039 - 0x424061
int64_t function_424039(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x424039
    int64_t v1; // 0x424039
    *(char *)a1 = (char)v1;
    bool v2; // 0x424039
    int64_t v3 = __asm_int1((v2 ? -1 : 1) + a1, a2); // 0x424045
    int16_t v4 = a3; // 0x42404f
    *(int32_t *)0xb227860f = __asm_insd(v4);
    *(char *)(a2 - 0x6ea0873c) = (char)v3;
    return __asm_in_136(v4);
}

// Address range: 0x424071 - 0x424090
int64_t function_424071(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x424071
    int64_t v1; // 0x424071
    int64_t result = function_4240c1(a1, (int32_t)a5, a3, a4 & -0xff01 | (int64_t)&g2, v1); // 0x42408e
    return result;
}

// Address range: 0x42409c - 0x4240b4
int64_t function_42409c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 98); // 0x42409e
    *v1 = *v1 & -82;
    uint64_t result = __asm_int1(a1, a2); // 0x4240a9
    int64_t v2; // 0x42409c
    unsigned char v3 = *(char *)&v2; // 0x4240aa
    int64_t v4; // 0x42409c
    unsigned char v5 = *(char *)&v4; // 0x4240aa
    char v6 = *(char *)-0x2551b57; // 0x4240ab
    *(char *)-0x2551b57 = v6 - (char)(result / 256) + (char)(v3 < v5);
    return result;
}

// Address range: 0x4240b4 - 0x4240bb
int64_t function_4240b4(void) {
    // 0x4240b4
    int64_t result; // 0x4240b4
    return result;
}

// Address range: 0x4240c1 - 0x42413a
int64_t function_4240c1(int64_t a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4240c1
    int64_t v1; // 0x4240c1
    bool v2; // 0x4240c1
    if (!v2) {
        // 0x4240c6
        *(char *)(a3 & 0xffffffff) = (char)(v1 / 256 ^ a3);
        return __asm_in(-40);
    }
    if (!v2) {
        // 0x424126
        return v1 & 0xffffffff;
    }
    // 0x424139
    return v1 & 0xffffffff;
}

// Address range: 0x42418c - 0x424191
int64_t function_42418c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42418c
    int64_t v1; // 0x42418c
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x424196 - 0x424199
int64_t function_424196(int64_t a1) {
    // 0x424196
    int64_t result; // 0x424196
    return result;
}

// Address range: 0x4241c6 - 0x4241c7
int64_t function_4241c6(void) {
    // 0x4241c6
    int64_t result; // 0x4241c6
    return result;
}

// Address range: 0x42441f - 0x424475
int64_t function_42441f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x42441f
    int64_t v1; // 0x42441f
    int64_t v2 = v1;
    int64_t v3; // 0x42441f
    if ((char)v1 >= (char)v1) {
        v3 = function_4243ec();
    }
    // 0x424429
    bool v4; // 0x42441f
    int64_t v5 = (v4 ? -1 : 1) + a1; // 0x424424
    char * v6 = (char *)(a3 + 0x1da42a4f); // 0x424430
    *v6 = *v6 + (char)a3;
    int32_t * v7 = (int32_t *)v5; // 0x424442
    uint32_t v8 = *v7 - 0x3621d846; // 0x424442
    *v7 = v8;
    int64_t v9 = v3; // 0x424448
    if (v8 >= 0) {
        int64_t v10 = 257 * v2 & 0xff00 | v2 & -0xff01; // 0x42444a
        int32_t * v11 = (int32_t *)(v10 - 0x14d850c1); // 0x424459
        *v11 = *v11 - (int32_t)v10;
        char * v12 = (char *)(v5 + 0x25530c419); // 0x424464
        unsigned char v13 = *v12; // 0x424464
        unsigned char v14 = v13 + (char)v2; // 0x424464
        *v12 = v14;
        v9 = v3 + 0xfd064f5c + (v14 < v13 ? 0xba2e270e : 0xba2e270f) & 0xffffffff;
    }
    // 0x424470
    *(int32_t *)(v5 - 4) = __asm_insd((int16_t)v9);
    return __asm_int3();
}

// Address range: 0x424478 - 0x424493
int64_t function_424478(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2 = a2;
    int64_t v3 = a1;
    int16_t v4 = a3; // 0x424478
    *(int32_t *)a1 = __asm_insd(v4);
    int64_t v5; // 0x424478
    int32_t v6 = v5; // 0x424479
    int32_t v7 = v6 + 0x7a7e41b1; // 0x424479
    __asm_outsb(v4, *(char *)&v2);
    int64_t v8 = v7; // 0x42447f
    if (v7 < 0 == (v7 & (v6 ^ -0x80000000)) < 0) {
        v8 = function_424404();
    }
    // 0x424481
    __asm_outsd(v4, *(int32_t *)&v2);
    char v9 = *(char *)&v1; // 0x424484
    *(char *)v1 = (char)((char)v8 < 74) - (char)a6 + v9;
    int64_t v10 = v3;
    int64_t result = __asm_int1(v10, v10 + v2 & 0xffffffff); // 0x424489
    *(int32_t *)v10 = __asm_insd(v4);
    *(char *)v3 = *(char *)&v3 | (char)(a4 / 256);
    return result;
}

// Address range: 0x424518 - 0x424529
int64_t function_424518(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x424518
    int64_t v1; // 0x424518
    float80_t v2; // 0x424518
    *(int16_t *)(v1 - 78) = (int16_t)v2;
    __asm_in_136((int16_t)a3);
    return unknown_fffffffff3232788();
}

// Address range: 0x4245aa - 0x4245d5
int64_t function_4245aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4245aa
    int64_t v1; // 0x4245aa
    uint64_t result = v1;
    bool v2; // 0x4245aa
    if (v2) {
        // 0x4245ac
        return result;
    }
    // 0x4245cc
    *(char *)a1 = (char)a2;
    char * v3 = (char *)(result - 0x2c8cdcc1); // 0x4245cf
    *v3 = (char)v2 + (char)(result / 256) + *v3;
    return result;
}

// Address range: 0x4245f8 - 0x424607
int64_t function_4245f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4245f8
    int64_t v1; // 0x4245f8
    int32_t v2 = *(int32_t *)(8 * v1 - 0x4d97a6c8); // 0x4245fa
    bool v3; // 0x4245f8
    return (int32_t)v3 + (int32_t)v1 - v2;
}
