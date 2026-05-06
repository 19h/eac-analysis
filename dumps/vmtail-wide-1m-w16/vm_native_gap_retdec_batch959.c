/*
 * Targeted RetDec C for native executable gap queue batch 959.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2d5369-0x2d5469 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d5469-0x2d5669 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d5669-0x2d5869 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d5869-0x2d5a69 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4097e5-0x4099e5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4099e5-0x409be5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x409be5-0x409de5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x409de5-0x409fe5 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_215f01e();
int64_t function_2d5369(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2d53b4(void);
int64_t function_2d53fe(void);
int64_t function_2d5449(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d54cf(int64_t a1);
int64_t function_2d5500(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2d5545(int64_t a1);
int64_t function_2d5566(void);
int64_t function_2d5582(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d55a8(void);
int64_t function_2d55b7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2d5635(void);
int64_t function_2d5657(void);
int64_t function_2d565e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2d56bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d56e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d5722(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2d57b3(void);
int64_t function_2d57cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d582e(int64_t a1);
int64_t function_2d587a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_4097e5(void);
int64_t function_409826(int64_t a1);
int64_t function_4098b4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_4098ff(int64_t result);
int64_t function_409909(void);
int64_t function_409977(void);
int64_t function_409980(void);
int64_t function_409984(void);
int64_t function_409986(void);
int64_t function_4099fc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_409a20(int64_t a1);
int64_t function_409a3a(int64_t a1);
int64_t function_409a5e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_409b88(int64_t a1, int64_t a2, int64_t a3);
int64_t function_409c0a(int64_t a1);
int64_t function_409c2f(void);
int64_t function_409c3e(int64_t a1);
int64_t function_409c82(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_409c9e(void);
int64_t function_409d28(int64_t a1);
int64_t function_409d4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_409d78(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_409e76(int64_t a1);
int64_t function_409ec2(void);
int64_t function_409eda(void);
int64_t function_409eef(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_409f00(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_409f0a(int64_t a1);
int64_t function_409f29(void);
int64_t function_409f2b(void);
int64_t function_409f2e(void);
int64_t function_409f42(int64_t a1, int64_t a2);
int64_t function_409f4a(void);
int64_t function_409f65(int64_t a1, int64_t a2);
int64_t function_409f82(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_42ef7a58();
int64_t function_48405034();
int64_t function_5a39588a();
int64_t function_705ea5c4();
int64_t function_75a6d6ec();
int64_t function_cc59c();
int64_t function_ffffffff802d84b6();
int64_t function_ffffffffc7f4a2fe();
int64_t unknown_134958d();
int64_t unknown_2ac54094();
int64_t unknown_2def4f9a();
int64_t unknown_48286a90();
int64_t unknown_7eaf8282();
int64_t unknown_9427f11();
int64_t unknown_ffffffff873563bf();
int64_t unknown_ffffffff97cb46b2();
int64_t unknown_ffffffff9d7179ee();
int64_t unknown_ffffffffa09c38c2();
int64_t unknown_ffffffffb1f290ae();
int64_t unknown_ffffffffcaf7f288();
int64_t unknown_ffffffffe8a1ff9b();
int64_t unknown_fffffffffb03e6b5();

// Address range: 0x2d5369 - 0x2d536b
int64_t function_2d5369(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2d5369
    int64_t result; // 0x2d5369
    return result;
}

// Address range: 0x2d53b4 - 0x2d53d4
int64_t function_2d53b4(void) {
    // 0x2d53b4
    unknown_ffffffff873563bf();
    __asm_int(66);
    __asm_in(75);
    char v1 = *(char *)0x1b3be3cb; // 0x2d53c4
    int64_t v2; // 0x2d53b4
    *(char *)0x1b3be3cb = v1 + (char)((uint64_t)v2 / 256);
    return function_42ef7a58();
}

// Address range: 0x2d53fe - 0x2d53ff
int64_t function_2d53fe(void) {
    // 0x2d53fe
    int64_t result; // 0x2d53fe
    return result;
}

// Address range: 0x2d5449 - 0x2d54aa
int64_t function_2d5449(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d5449
    int64_t v1; // 0x2d5449
    *(int32_t *)a1 = (int32_t)(v1 | a1);
    int64_t v2; // 0x2d5449
    *(char *)a1 = *(char *)&v2;
    bool v3; // 0x2d5449
    int64_t v4 = v3 ? -1 : 1; // 0x2d544b
    int64_t v5 = v4 + a1; // 0x2d544b
    int32_t * v6 = (int32_t *)(a3 - 0x527205fe); // 0x2d545a
    int32_t v7 = v5; // 0x2d545a
    *v6 = *v6 + v7;
    v2 = v3 ? 0x4d0801e7 : 0x4d0801e9;
    int32_t v8 = *(int32_t *)0x322f3c75 + v7; // 0x2d546e
    *(int32_t *)0x322f3c75 = v8;
    if (a4 != 1 && v8 != 0) {
        function_2d53fe();
    }
    // 0x2d5476
    *(char *)v5 = (char)unknown_7eaf8282();
    int64_t v9 = v5 + v4; // 0x2d5484
    int32_t * v10 = (int32_t *)(v9 - 75); // 0x2d548a
    *v10 = *v10 + (int32_t)v9;
    __asm_iretd(v9);
    int64_t result = unknown_2def4f9a(); // 0x2d5494
    *(char *)-0x170249dc = *(char *)-0x170249dc | (char)result;
    int32_t * v11 = (int32_t *)(a3 + 78); // 0x2d54a0
    *v11 = *v11 + (int32_t)result;
    return result;
}

// Address range: 0x2d54cf - 0x2d54d0
int64_t function_2d54cf(int64_t a1) {
    // 0x2d54cf
    int64_t result; // 0x2d54cf
    return result;
}

// Address range: 0x2d5500 - 0x2d5539
int64_t function_2d5500(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2d5500
    int64_t v1; // 0x2d5500
    char v2 = *(char *)(v1 - 24); // 0x2d5500
    int64_t v3 = unknown_9427f11(); // 0x2d550b
    *(int32_t *)a1 = (int32_t)v3;
    bool v4; // 0x2d5500
    int64_t v5 = (v4 ? -4 : 4) + a1; // 0x2d551a
    char v6 = __asm_insb((int16_t)(256 * (int64_t)(v2 | (char)(a3 / 256)) | a3 % 256)); // 0x2d551b
    *(char *)v5 = v6;
    int64_t v7 = v3 + 0x71ff8000; // 0x2d551c
    char v8 = *(char *)(v7 & 0xffffffff); // 0x2d5522
    *(int32_t *)v5 = (int32_t)(v7 & 0xffffff00 | (int64_t)(v8 + (char)v7));
    int32_t * v9 = (int32_t *)a4; // 0x2d5527
    int64_t v10; // 0x2d5500
    *v9 = *(int32_t *)&v10 + 0x3a731f37;
    *v9 = *(int32_t *)&v10 + (int32_t)a2;
    int64_t v11 = (int32_t)v7 >> 31; // 0x2d552f
    char * v12 = (char *)(v11 + 24 + 4 * v11); // 0x2d5530
    *v12 = *v12 + (char)((a4 + 0xffff) / 256);
    return function_215f01e(v5 + (v4 ? -5 : 5));
}

// Address range: 0x2d5545 - 0x2d5546
int64_t function_2d5545(int64_t a1) {
    // 0x2d5545
    int64_t result; // 0x2d5545
    return result;
}

// Address range: 0x2d5566 - 0x2d5567
int64_t function_2d5566(void) {
    // 0x2d5566
    int64_t result; // 0x2d5566
    return result;
}

// Address range: 0x2d5582 - 0x2d558a
int64_t function_2d5582(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d5582
    return unknown_134958d(a1, a2, a3, a4, a5);
}

// Address range: 0x2d55a8 - 0x2d55b7
int64_t function_2d55a8(void) {
    // 0x2d55a8
    return unknown_fffffffffb03e6b5();
}

// Address range: 0x2d55b7 - 0x2d560c
int64_t function_2d55b7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2d55b7
    int64_t v1; // 0x2d55b7
    *(char *)a1 = (char)v1;
    bool v2; // 0x2d55b7
    int64_t v3 = (v2 ? -1 : 1) + a1; // 0x2d55b7
    int32_t * v4 = (int32_t *)(a4 + 0x7cefbf4); // 0x2d55bd
    *v4 = *v4 + (int32_t)v1;
    uint32_t v5 = (int32_t)v1; // 0x2d55c3
    uint32_t v6 = v5 + (int32_t)a2; // 0x2d55c3
    if (v6 == 0) {
        int32_t * v7 = (int32_t *)(4 * a4 + 0x7344f809); // 0x2d55ce
        *v7 = *v7 + (int32_t)v3;
        return a4 / 256 % 256 | 0x88008400;
    }
    // 0x2d55d9
    *(int64_t *)((int64_t)v6 - 8) = 0x1e82f8e;
    char v8 = __asm_insb((int16_t)a3); // 0x2d55df
    char * v9 = (char *)v3; // 0x2d55df
    *v9 = v8;
    char v10 = __asm_in(-32); // 0x2d55e0
    *v9 = v10;
    char * v11 = (char *)(a4 + 0x5a499700); // 0x2d55e3
    *v11 = *v11 + (v6 < v5 ? -23 : -24);
    int32_t * v12 = (int32_t *)(5 * v3 - 5); // 0x2d55ea
    *v12 = *v12 + ((int32_t)v10 | -0x17fc5400);
    int32_t * v13 = (int32_t *)(v1 + 8 * a4); // 0x2d55ee
    *v13 = *v13 + v6;
    return (int64_t)(*(int32_t *)-0x63f8670edc7a60c0 & 0x401e812);
}

// Address range: 0x2d5635 - 0x2d5636
int64_t function_2d5635(void) {
    // 0x2d5635
    int64_t result; // 0x2d5635
    return result;
}

// Address range: 0x2d5657 - 0x2d5658
int64_t function_2d5657(void) {
    // 0x2d5657
    int64_t result; // 0x2d5657
    return result;
}

// Address range: 0x2d565e - 0x2d56bb
int64_t function_2d565e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int64_t v2; // 0x2d565e
    *(char *)((v2 & 0xffffffff) + 0x44f90022) = (char)a3;
    int64_t v3 = a4 - 1; // 0x2d5670
    int64_t v4 = a3 & 0xffff00ff; // 0x2d5670
    if (v3 != 0) {
        v4 = function_2d5635();
    }
    unsigned char v5 = (char)v3 % 32; // 0x2d5672
    if (v5 != 0) {
        char * v6 = (char *)(v2 & -256); // 0x2d5672
        unsigned char v7 = *v6; // 0x2d5672
        *v6 = v7 << v5 | (char)(-1 - (char)(a3 / 256) < (char)a4) << v5 - 1 | (char)((int16_t)v7 >> (int16_t)(9 - v5));
    }
    *(char *)v1 = *(char *)&v1 - (char)v2;
    *(char *)v1 = -66;
    bool v8; // 0x2d565e
    int64_t v9 = v1 + (v8 ? -1 : 1); // 0x2d567b
    v1 = v9;
    *(char *)0x46679e83 = *(char *)0x46679e83 + (char)(v2 / 256);
    if (v3 != 1) {
        function_2d5635();
    }
    int64_t v10 = v4 & 0xffff0000 | (int64_t)(int32_t)((int64_t)&g3 | 190); // 0x2d5687
    int64_t v11 = v2 | 255; // 0x2d5688
    unknown_ffffffffe8a1ff9b();
    *(int32_t *)0x64c449a1 = *(int32_t *)0x64c449a1 + (int32_t)v9;
    *(int32_t *)v11 = (int32_t)v11;
    *(int64_t *)(v10 - 8) = -115;
    int64_t v12 = unknown_ffffffffb1f290ae(); // 0x2d56a6
    int32_t v13; // 0x2d565e
    *(int64_t *)(v10 - 16) = (int64_t)(v13 + (int32_t)v2);
    return v12 & 0xe180100 | (int64_t)*(char *)((v12 & 232) + v11);
}

// Address range: 0x2d56bb - 0x2d56d4
int64_t function_2d56bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffa09c38c2(); // 0x2d56bb
    int64_t v2; // 0x2d56bb
    char * v3 = (char *)(a4 - 24 + v2); // 0x2d56c6
    *v3 = *v3 + (char)a3;
    int32_t * v4 = (int32_t *)v1; // 0x2d56ca
    *v4 = *v4 + (int32_t)((256 * v2 | a3) & 0xff00 | a3 & 0xffff00ff);
    return (v1 + 42) % 256 | v1 & -256;
}

// Address range: 0x2d56e8 - 0x2d56fd
int64_t function_2d56e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d56e8
    unknown_ffffffff9d7179ee();
    int64_t v1 = __asm_int3(); // 0x2d56ee
    bool v2; // 0x2d56e8
    int32_t * v3 = (int32_t *)((v2 ? -4 : 4) + a2); // 0x2d56f6
    uint32_t v4 = *v3; // 0x2d56f6
    uint32_t v5 = v4 + (int32_t)a4; // 0x2d56f6
    *v3 = v5;
    return (v1 - (v5 < v4 ? 125 : 124)) % 256 | v1 & -256;
}

// Address range: 0x2d5722 - 0x2d57b1
int64_t function_2d5722(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2d5722
    int64_t v1; // 0x2d5722
    int32_t * v2 = (int32_t *)(2 * v1 + 0x5949d96c); // 0x2d5722
    *v2 = *v2 + (int32_t)a1;
    int16_t v3 = a3; // 0x2d5730
    __asm_out(v3, (char)v1);
    __asm_out(v3, (char)a7);
    if (a4 == 1) {
        // 0x2d5744
        return function_ffffffff802d84b6();
    }
    // 0x2d5781
    *(int32_t *)-0x2afd497bf9fedc17 = (int32_t)unknown_2ac54094();
    int32_t * v4 = (int32_t *)(v1 + 4 * a6); // 0x2d57a1
    *v4 = *v4 + (int32_t)v1;
    return unknown_ffffffff97cb46b2();
}

// Address range: 0x2d57b3 - 0x2d57ba
int64_t function_2d57b3(void) {
    // 0x2d57b3
    return function_5a39588a();
}

// Address range: 0x2d57cd - 0x2d57e1
int64_t function_2d57cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d57cd
    int64_t v1; // 0x2d57cd
    *(int64_t *)(v1 - 59) = a5;
    __asm_in(98);
    int32_t * v2 = (int32_t *)(a4 - 8); // 0x2d57d8
    int64_t v3; // 0x2d57cd
    *v2 = *v2 + (int32_t)(int64_t)&v3;
    return function_75a6d6ec();
}

// Address range: 0x2d582e - 0x2d5831
int64_t function_2d582e(int64_t a1) {
    // 0x2d582e
    int64_t result; // 0x2d582e
    return result;
}

// Address range: 0x2d587a - 0x2d5a5b
int64_t function_2d587a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x2d587a
    int64_t v1; // 0x2d587a
    int64_t v2 = v1;
    int64_t v3 = a2;
    bool v4; // 0x2d587a
    if (!v4) {
        // 0x2d587c
        *(char *)v2 = (char)v2 + (char)a4 + (char)v4;
        int32_t * v5 = (int32_t *)(v1 + 0x285ea325 + v2); // 0x2d5883
        *v5 = *v5 + (int32_t)v1;
        return unknown_48286a90();
    }
    int32_t v6 = a3;
    int64_t result = (v2 + 24) % 256 | v2 & -256; // 0x2d58f7
    int32_t * v7 = (int32_t *)a3; // 0x2d58f9
    *v7 = v6 + (int32_t)a2;
    __asm_outsb((int16_t)a3, *(char *)&v3);
    int64_t v8 = 0x100000000 * result >> 32; // 0x2d58fd
    int64_t v9 = 23 * v8; // 0x2d58fd
    if (v9 != 0x1700000000 * v8 >> 32) {
        // 0x2d5954
        return function_cc59c();
    }
    if ((char)a1 < 0) {
        // 0x2d58ec
        *v7 = (int32_t)v3 + v6;
        return result;
    }
    int32_t * v10 = (int32_t *)((v9 & 0xffffffff) - 0x7ffff910); // 0x2d5904
    *v10 = *v10 + (int32_t)a7;
    char * v11 = (char *)(2 * a3 + 0x41f68948 + v3); // 0x2d590a
    *v11 = *v11 + (char)v9;
    return result;
}

// Address range: 0x4097e5 - 0x4097f2
int64_t function_4097e5(void) {
    // 0x4097e5
    int64_t v1; // 0x4097e5
    __asm_movq(v1, v1);
    return unknown_ffffffffcaf7f288();
}

// Address range: 0x409826 - 0x40982f
int64_t function_409826(int64_t a1) {
    // 0x409826
    int64_t v1; // 0x409826
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x409826
    return function_48405034((v2 ? -4 : 4) + a1);
}

// Address range: 0x4098b4 - 0x4098cf
int64_t function_4098b4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x4098b4
    bool v1; // 0x4098b4
    bool v2 = v1;
    unsigned char v3 = (char)a4 | (char)&g4; // 0x4098c0
    unsigned char v4 = (char)v2 + (char)(a3 / 256); // 0x4098c0
    bool v5 = v2 ? v4 != -1 | v3 < v3 + (char)v2 - v4 : v3 < v4; // 0x4098c0
    char v6 = __asm_in_133((int16_t)a3); // 0x4098c5
    int64_t v7; // 0x4098b4
    int32_t * v8 = (int32_t *)(v7 & -0xff01 | (int64_t)&g1); // 0x4098c8
    *v8 = *v8 - (int32_t)a3 + (int32_t)v5;
    return ((int64_t)v6 | a5) & -256 | (int64_t)(v6 - 115);
}

// Address range: 0x4098ff - 0x409901
int64_t function_4098ff(int64_t result) {
    // 0x4098ff
    return result;
}

// Address range: 0x409909 - 0x40991e
int64_t function_409909(void) {
    // 0x409909
    return function_ffffffffc7f4a2fe();
}

// Address range: 0x409977 - 0x409978
int64_t function_409977(void) {
    // 0x409977
    int64_t result; // 0x409977
    return result;
}

// Address range: 0x409980 - 0x409983
int64_t function_409980(void) {
    // 0x409980
    int64_t result; // 0x409980
    return result;
}

// Address range: 0x409984 - 0x409986
int64_t function_409984(void) {
    // 0x409984
    return function_409977();
}

// Address range: 0x409986 - 0x409987
int64_t function_409986(void) {
    // 0x409986
    int64_t result; // 0x409986
    return result;
}

// Address range: 0x4099fc - 0x409a09
int64_t function_4099fc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4099fc
    bool v1; // 0x4099fc
    if (v1) {
        function_409986();
    }
    // 0x4099fe
    return a2 & 0xffffffff;
}

// Address range: 0x409a20 - 0x409a21
int64_t function_409a20(int64_t a1) {
    // 0x409a20
    int64_t result; // 0x409a20
    return result;
}

// Address range: 0x409a3a - 0x409a3d
int64_t function_409a3a(int64_t a1) {
    // 0x409a3a
    int64_t result; // 0x409a3a
    return result;
}

// Address range: 0x409a5e - 0x409ad5
int64_t function_409a5e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x409a5e
    int64_t v1; // 0x409a5e
    int64_t v2 = v1;
    *(char *)v2 = (char)(v2 ^ a3);
    __asm_sti();
    return v1 & 0xffffff2c;
}

// Address range: 0x409b88 - 0x409b8f
int64_t function_409b88(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409b88
    int64_t v1; // 0x409b88
    int32_t * v2 = (int32_t *)(a1 + 49 + v1); // 0x409b88
    *v2 = *v2 & (int32_t)v1;
    int64_t v3; // 0x409b88
    return v1 & -256 | (int64_t)*(char *)&v3;
}

// Address range: 0x409c0a - 0x409c0d
int64_t function_409c0a(int64_t a1) {
    // 0x409c0a
    int64_t v1; // 0x409c0a
    int64_t v2 = v1;
    bool v3; // 0x409c0a
    return (v2 + 42 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x409c2f - 0x409c31
int64_t function_409c2f(void) {
    // 0x409c2f
    int64_t result; // 0x409c2f
    return result;
}

// Address range: 0x409c3e - 0x409c42
int64_t function_409c3e(int64_t a1) {
    // 0x409c3e
    int64_t result; // 0x409c3e
    return result;
}

// Address range: 0x409c82 - 0x409c93
int64_t function_409c82(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)(a4 + 86); // 0x409c82
    int64_t result; // 0x409c82
    int32_t v2 = (int32_t)result - (int32_t)(a3 & 0xffffff00 | (int64_t)(v1 & (char)a3)); // 0x409c85
    *(int32_t *)a2 = v2;
    if (v2 == 0) {
        // 0x409ca5
        return result;
    }
    // 0x409c8e
    return function_705ea5c4();
}

// Address range: 0x409c9e - 0x409ca5
int64_t function_409c9e(void) {
    // 0x409c9e
    int64_t result; // 0x409c9e
    return result;
}

// Address range: 0x409d28 - 0x409d2b
int64_t function_409d28(int64_t a1) {
    // 0x409d28
    int64_t result; // 0x409d28
    return result;
}

// Address range: 0x409d4f - 0x409d73
int64_t function_409d4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 0x764ecf3f); // 0x409d60
    *v1 = *v1 - 0x6b30436e;
    int64_t v2; // 0x409d4f
    return (int64_t)&v2 & 0xffff00f8 ^ 0x575ea0e1;
}

// Address range: 0x409d78 - 0x409de3
int64_t function_409d78(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t result; // 0x409d78
    // 0x409d7a
    return result;
    // 0x409dce
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int32_t * v2 = (int32_t *)(result - 0x46e3ea0f); // 0x409dd0
    bool v3; // 0x409d78
    *v2 = *v2 - (v3 ? -0x111e8f9f : -0x111e8fa0);
    int64_t v4 = (int64_t)*(int32_t *)&v1; // 0x409dda
    char * v5 = (char *)(result - 16); // 0x409de0
    char v6 = *v5; // 0x409de0
    *v5 = v6 + (char)(v1 / 256) + (char)(0x7800d31 * v4 != 0x7800d3100000000 * v4 >> 32);
    return result;
}

// Address range: 0x409e76 - 0x409e77
int64_t function_409e76(int64_t a1) {
    // 0x409e76
    int64_t result; // 0x409e76
    return result;
}

// Address range: 0x409ec2 - 0x409ec4
int64_t function_409ec2(void) {
    // 0x409ec2
    int64_t v1; // 0x409ec2
    return function_409f42(v1, v1);
}

// Address range: 0x409eda - 0x409edc
int64_t function_409eda(void) {
    // 0x409eda
    return function_409f2b();
}

// Address range: 0x409eef - 0x409f00
int64_t function_409eef(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x409eef
    int64_t v1; // 0x409eef
    bool v2; // 0x409eef
    if (v2 || false) {
        v1 = function_409f2e();
    }
    int64_t v3 = v1 - (v2 ? 0x72474eea : 0x72474ee9) & 0xffffffff; // 0x409ef1
    char * v4 = (char *)(v3 + 36); // 0x409ef6
    *v4 = *v4 ^ (char)(a4 / 256);
    int64_t v5 = (v2 ? -4 : 4) + a1; // 0x409ef9
    int32_t * v6 = (int32_t *)(a4 - 35 + v3); // 0x409efa
    *v6 = *v6 ^ (int32_t)v5;
    return function_409f0a(v5);
}

// Address range: 0x409f00 - 0x409f0a
int64_t function_409f00(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x409f00
    int64_t v1; // 0x409f00
    bool v2; // 0x409f00
    if (a4 != 1 == v2) {
        v1 = function_409f65(a1, a2);
    }
    uint64_t v3 = v1 + 0x96f5a21b; // 0x409f02
    __asm_outsd((int16_t)a3, (int32_t)a2);
    int64_t v4; // 0x409f00
    return v3 & 0xffffff00 | (int64_t)*(char *)(v3 % 256 + v4);
}

// Address range: 0x409f0a - 0x409f12
int64_t function_409f0a(int64_t a1) {
    // 0x409f0a
    int64_t result; // 0x409f0a
    return result;
}

// Address range: 0x409f29 - 0x409f2b
int64_t function_409f29(void) {
    // 0x409f29
    int64_t result; // 0x409f29
    return result;
}

// Address range: 0x409f2b - 0x409f2c
int64_t function_409f2b(void) {
    // 0x409f2b
    int64_t result; // 0x409f2b
    return result;
}

// Address range: 0x409f2e - 0x409f30
int64_t function_409f2e(void) {
    // 0x409f2e
    int64_t result; // 0x409f2e
    bool v1; // 0x409f2e
    if (v1) {
        int64_t v2; // 0x409f2e
        result = function_409f82(v2, v2, v2, v2, (int64_t)&g5);
    }
    // 0x409f30
    return result;
}

// Address range: 0x409f42 - 0x409f45
int64_t function_409f42(int64_t a1, int64_t a2) {
    // 0x409f42
    int64_t result; // 0x409f42
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x409f4a - 0x409f4b
int64_t function_409f4a(void) {
    // 0x409f4a
    int64_t result; // 0x409f4a
    return result;
}

// Address range: 0x409f65 - 0x409f70
int64_t function_409f65(int64_t a1, int64_t a2) {
    // 0x409f65
    __asm_int(77);
    __asm_int(78);
    int64_t v1; // 0x409f65
    return v1 & 0xffffffff;
}

// Address range: 0x409f82 - 0x409fe5
int64_t function_409f82(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x409f82
    int64_t v1; // 0x409f82
    uint64_t result = v1;
    uint32_t v2 = *(int32_t *)(result - 101); // 0x409f87
    uint32_t v3 = (int32_t)a2; // 0x409f87
    *(char *)a2 = (char)a2 - (char)((uint64_t)v1 / 256) + (char)(v2 < v3);
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    if (a4 != 0) {
        // 0x409f90
        return result;
    }
    int32_t * v4 = (int32_t *)(a1 + 0x16dd51f); // 0x409fc1
    *v4 = *v4 ^ v3;
    char v5 = *(char *)(a1 + 0x1a66c427); // 0x409fc7
    return 256 * (int64_t)((char)(result / 256) - v5) | result & -0xff01;
}
