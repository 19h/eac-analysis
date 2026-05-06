/*
 * Targeted RetDec C for native executable gap queue batch 868.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2bafa9-0x2bb1a9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bb1a9-0x2bb3a9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bb3a9-0x2bb5a9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bb5a9-0x2bb7a9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d4869-0x2d4a69 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d4a69-0x2d4c69 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d4e69-0x2d5069 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d5069-0x2d5269 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g6;
extern int g7;
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

int64_t function_2bafa9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2baffb(void);
int64_t function_2bb051(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2bb073(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bb0f5(void);
int64_t function_2bb0fc(void);
int64_t function_2bb199(void);
int64_t function_2bb20a(void);
int64_t function_2bb226(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2bb231(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2bb245(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2bb27a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2bb330(void);
int64_t function_2bb3b3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2bb415(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bb48d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bb4be(int64_t a1, int64_t a2);
int64_t function_2bb4ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bb4f4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2bb4fc(int64_t a1);
int64_t function_2bb51e(int64_t a1);
int64_t function_2bb566(void);
int64_t function_2bb571(int64_t a1);
int64_t function_2bb5a1(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2bb64e(void);
int64_t function_2bb69a(void);
int64_t function_2bb6a6(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_2bb6b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6);
int64_t function_2c4fc5();
int64_t function_2d4869(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2d490d(void);
int64_t function_2d493a(void);
int64_t function_2d495b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d4981(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2d49a9(void);
int64_t function_2d49e1(int64_t a1);
int64_t function_2d4ad9(void);
int64_t function_2d4add(int64_t a1);
int64_t function_2d4b0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d4b14(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d4b2b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_2d4ba4(void);
int64_t function_2d4bc5(void);
int64_t function_2d4bd2(int64_t a1);
int64_t function_2d4bde(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d4c13(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2d4c3b(void);
int64_t function_2d4e29();
int64_t function_2d4e69(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2d4e92(void);
int64_t function_2d4e99(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2d4f14(int64_t a1);
int64_t function_2d4f86(void);
int64_t function_2d4f9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d4fda(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d5099(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d50ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d51e5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2d5225(void);
int64_t function_2d5228(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c414a4b();
int64_t function_42f52ab();
int64_t function_4b4811();
int64_t function_82f3a3b();
int64_t function_ffffffff8ca9b115();
int64_t function_ffffffff8fd796d0();
int64_t function_ffffffff9607264f();
int64_t unknown_10309a3e();
int64_t unknown_10fb4ba1();
int64_t unknown_162e869b();
int64_t unknown_28ccca95();
int64_t unknown_29c587a2();
int64_t unknown_388bbd4e();
int64_t unknown_3db6b6d4();
int64_t unknown_4ae3b8d4();
int64_t unknown_645ea3c3();
int64_t unknown_65e6f42e();
int64_t unknown_795bb1be();
int64_t unknown_7a5298();
int64_t unknown_7ff08929();
int64_t unknown_ffffffff8bd6c5a7();
int64_t unknown_ffffffff8f3197e7();
int64_t unknown_ffffffff91671e5f();
int64_t unknown_ffffffff91f0a71f();
int64_t unknown_ffffffffb4b8ec98();
int64_t unknown_ffffffffbb355cf5();
int64_t unknown_ffffffffbe2d7689();
int64_t unknown_ffffffffc0016656();
int64_t unknown_ffffffffc325b4ef();
int64_t unknown_ffffffffcb37c9d2();
int64_t unknown_ffffffffdb62e62c();
int64_t unknown_ffffffffee736968();

// Address range: 0x2bafa9 - 0x2bafe6
int64_t function_2bafa9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2bafa9
    int64_t v1; // 0x2bafa9
    char * v2 = (char *)(v1 + 0x24dff00); // 0x2bafa9
    *v2 = *v2 + (char)v1;
    int32_t * v3 = (int32_t *)(v1 - 0x7fea500); // 0x2bafb1
    *v3 = *v3 + (int32_t)v1;
    int64_t v4 = unknown_645ea3c3(); // 0x2bafba
    uint32_t v5 = (int32_t)v4 >> 31; // 0x2bafbf
    uint64_t v6 = v4 + a4 / 256; // 0x2bafc0
    int64_t v7 = v4 & -256; // 0x2bafc0
    int64_t v8 = v6 % 256 | v7; // 0x2bafc0
    int32_t * v9 = (int32_t *)(a4 - 10); // 0x2bafc2
    *v9 = *v9 + (int32_t)a4;
    int32_t v10 = *(int32_t *)(int64_t)v5; // 0x2bafc6
    char * v11 = (char *)(v1 - 0x17053bd7 + (int64_t)(0xabb913 * v10)); // 0x2bafcc
    *v11 = *v11 ^ (char)a4;
    int32_t * v12 = (int32_t *)(v8 + (8 * v1 | 6)); // 0x2bafd3
    int32_t v13 = *v12; // 0x2bafd3
    int32_t v14 = v13 + v5; // 0x2bafd3
    *v12 = v14;
    if (v14 < 0 == ((v14 ^ v13) & (v14 ^ v5)) < 0 != v14 != 0) {
        // 0x2bafda
        return v7 | v6 & 45 | 210;
    }
    // 0x2bafe0
    __asm_out((int16_t)v5, (int32_t)v8);
    return unknown_ffffffff8f3197e7();
}

// Address range: 0x2baffb - 0x2baffe
int64_t function_2baffb(void) {
    // 0x2baffb
    int64_t result; // 0x2baffb
    return result;
}

// Address range: 0x2bb051 - 0x2bb065
int64_t function_2bb051(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2bb051
    int64_t v1; // 0x2bb051
    *(int32_t *)a1 = (int32_t)v1 & 115;
    int64_t result = unknown_ffffffff91671e5f(); // 0x2bb058
    char * v2 = (char *)(result - 0x580550eb); // 0x2bb05e
    *v2 = *v2 + (char)(a3 / 256);
    return result;
}

// Address range: 0x2bb073 - 0x2bb078
int64_t function_2bb073(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bb073
    *(char *)a1 = (char)a4;
    return a4 & 0xffffffff;
}

// Address range: 0x2bb0f5 - 0x2bb0fa
int64_t function_2bb0f5(void) {
    // 0x2bb0f5
    int64_t v1; // 0x2bb0f5
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x2bb0fc - 0x2bb102
int64_t function_2bb0fc(void) {
    // 0x2bb0fc
    int64_t v1; // 0x2bb0fc
    __asm_iretd(v1);
    return function_ffffffff8ca9b115();
}

// Address range: 0x2bb199 - 0x2bb19c
int64_t function_2bb199(void) {
    // 0x2bb199
    int64_t result; // 0x2bb199
    return result;
}

// Address range: 0x2bb20a - 0x2bb20b
int64_t function_2bb20a(void) {
    // 0x2bb20a
    int64_t result; // 0x2bb20a
    return result;
}

// Address range: 0x2bb226 - 0x2bb230
int64_t function_2bb226(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 68); // 0x2bb226
    *v1 = *v1 + 24;
    int32_t * v2 = (int32_t *)(a2 + 10); // 0x2bb22a
    int64_t result; // 0x2bb226
    *v2 = *v2 + (int32_t)result;
    return result;
}

// Address range: 0x2bb231 - 0x2bb244
int64_t function_2bb231(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_10309a3e(); // 0x2bb238
    char * v1 = (char *)(result + 94); // 0x2bb240
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x2bb245 - 0x2bb24d
int64_t function_2bb245(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2bb245
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return function_2bb20a();
}

// Address range: 0x2bb27a - 0x2bb309
int64_t function_2bb27a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2bb27a
    int64_t v1; // 0x2bb27a
    char * v2 = (char *)(v1 - 0x76f432a1); // 0x2bb27a
    *v2 = *v2 | (char)a3;
    int32_t * v3 = (int32_t *)(a4 - 0x6a70b206); // 0x2bb282
    *v3 = *v3 + (int32_t)v1;
    int64_t v4 = (int64_t)(*(char *)(a3 - 72) + (char)(a4 / 256)); // 0x2bb288
    int64_t v5 = a4 & -0xff01; // 0x2bb288
    char v6 = a4; // 0x2bb28d
    *(char *)(256 * v4 | v5) = v6;
    int64_t v7; // 0x2bb27a
    char v8 = *(char *)&v7; // 0x2bb290
    int64_t v9; // 0x2bb27a
    *(char *)a2 = v8 + (char)(((char)v1 ^ -8) < 216) + (char)v9;
    unknown_ffffffffb4b8ec98();
    unknown_ffffffff8bd6c5a7();
    int64_t v10 = a2 + 0xe81b4103; // 0x2bb2ab
    v7 = v10 & 0xffffffff;
    int32_t * v11 = (int32_t *)(v9 + 16); // 0x2bb2b1
    *v11 = *v11 + (int32_t)v10;
    int64_t v12 = __asm_wait(); // 0x2bb2b6
    int64_t v13 = 256 * (v12 + v4) & 0xff00 | v5; // 0x2bb2bc
    int32_t * v14 = (int32_t *)(v13 + v12); // 0x2bb2be
    *v14 = *v14 + (int32_t)v13;
    uint32_t v15 = (int32_t)a4 % 32; // 0x2bb2c1
    if (v15 != 0) {
        int32_t * v16 = (int32_t *)(v13 - 0x591b1f3c); // 0x2bb2c1
        *v16 = *v16 << v15;
    }
    int64_t v17 = unknown_3db6b6d4() + 2 * v1; // 0x2bb2d5
    int64_t v18 = v17 & 0xffffffff; // 0x2bb2d5
    int32_t * v19 = (int32_t *)(v18 + 0xab1079); // 0x2bb2d7
    *v19 = *v19 + (int32_t)a1;
    char * v20 = (char *)v18; // 0x2bb2dd
    *v20 = *v20 + (char)v17;
    char * v21 = (char *)(v13 + 28 + v18); // 0x2bb2e2
    *v21 = *v21 + v6;
    __asm_int3(v9);
    int64_t v22 = unknown_ffffffffc325b4ef(); // 0x2bb2e9
    __asm_outsd((int16_t)a3, *(int32_t *)v7);
    int64_t v23 = v22 & 0xffffffff ^ 0x2a655419; // 0x2bb2ef
    int32_t * v24 = (int32_t *)(v9 + 104); // 0x2bb2f4
    *v24 = *v24 >> 1;
    char * v25 = (char *)v23; // 0x2bb2f7
    *v25 = *v25 + (char)v23;
    uint32_t v26 = *(int32_t *)v7; // 0x2bb2fe
    uint32_t v27 = *(int32_t *)&v9; // 0x2bb2fe
    int32_t v28 = v26 - v27; // 0x2bb2fe
    return v23 & 0xffff00ff | 256 * (64 * (int64_t)(v28 == 0) | (int64_t)(v26 < v27) | 128 * (int64_t)(v28 < 0) | 16 * (int64_t)(v26 % 16 - v27 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8((char)v28) % 2 == 0)) | 512;
}

// Address range: 0x2bb330 - 0x2bb332
int64_t function_2bb330(void) {
    // 0x2bb330
    int64_t result; // 0x2bb330
    return result;
}

// Address range: 0x2bb3b3 - 0x2bb3d4
int64_t function_2bb3b3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = unknown_795bb1be(); // 0x2bb3b8
    char * v2 = (char *)(a2 + 0x1e85e64); // 0x2bb3bd
    *v2 = *v2 + (char)(a4 / 256);
    *(int32_t *)(v1 - 0x58c72840) = (int32_t)a2;
    int64_t v3; // 0x2bb3b3
    int32_t * v4 = (int32_t *)(v3 + 43); // 0x2bb3c9
    *v4 = *v4 ^ (int32_t)v3;
    return unknown_ffffffffcb37c9d2();
}

// Address range: 0x2bb415 - 0x2bb470
int64_t function_2bb415(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = unknown_ffffffffdb62e62c(); // 0x2bb426
    int32_t * v3 = (int32_t *)(v2 + 0x1e85e00); // 0x2bb42b
    *v3 = *v3 & 45;
    __asm_out_133((int16_t)v1, (char)v2);
    uint64_t v4 = unknown_ffffffffc0016656(); // 0x2bb450
    char * v5 = (char *)v4; // 0x2bb458
    *v5 = *v5 + 112;
    *(char *)v1 = *(char *)&v1 + (char)v4;
    int64_t v6; // 0x2bb415
    char * v7 = (char *)(v6 + 0x4201e800); // 0x2bb45d
    *v7 = *v7 + (char)(v4 / 256);
    return v6 + 0x32e063f8 & 0xffffffff;
}

// Address range: 0x2bb48d - 0x2bb497
int64_t function_2bb48d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bb48d
    int64_t v1; // 0x2bb48d
    int64_t result = unknown_28ccca95(v1); // 0x2bb48f
    *(char *)a2 = (char)v1 + (char)a3;
    return result;
}

// Address range: 0x2bb4be - 0x2bb4c3
int64_t function_2bb4be(int64_t a1, int64_t a2) {
    // 0x2bb4be
    int64_t result; // 0x2bb4be
    *(char *)a2 = (char)(result & result);
    return result;
}

// Address range: 0x2bb4ca - 0x2bb4d0
int64_t function_2bb4ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bb4ca
    int64_t result; // 0x2bb4ca
    return result;
}

// Address range: 0x2bb4f4 - 0x2bb4fc
int64_t function_2bb4f4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 14); // 0x2bb4f7
    int64_t v2; // 0x2bb4f4
    *v1 = *v1 + (int32_t)v2;
    return v2 & -256 | a4 / 256 % 256;
}

// Address range: 0x2bb4fc - 0x2bb4ff
int64_t function_2bb4fc(int64_t a1) {
    // 0x2bb4fc
    int64_t result; // 0x2bb4fc
    return result;
}

// Address range: 0x2bb51e - 0x2bb549
int64_t function_2bb51e(int64_t a1) {
    int64_t v1 = unknown_7ff08929(); // 0x2bb523
    int32_t * v2 = (int32_t *)(a1 + 0x5e3eab7a); // 0x2bb528
    int64_t v3; // 0x2bb51e
    *v2 = *v2 | (int32_t)v3;
    *(int32_t *)0x213955d2 = *(int32_t *)0x213955d2 + (int32_t)v3;
    return (v1 + 232) % 256 | v1 & -256;
}

// Address range: 0x2bb566 - 0x2bb567
int64_t function_2bb566(void) {
    // 0x2bb566
    int64_t result; // 0x2bb566
    return result;
}

// Address range: 0x2bb571 - 0x2bb574
int64_t function_2bb571(int64_t a1) {
    // 0x2bb571
    int64_t result; // 0x2bb571
    return result;
}

// Address range: 0x2bb5a1 - 0x2bb5cb
int64_t function_2bb5a1(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2bb5a1
    int64_t v1; // 0x2bb5a1
    int64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4; // 0x2bb5a1
    if ((v1 & 0x2700013d) != 0) {
        v4 = function_2bb566();
    }
    int16_t v5 = a3; // 0x2bb5ad
    char v6 = __asm_insb(v5); // 0x2bb5ad
    char * v7 = (char *)a1; // 0x2bb5ad
    *v7 = v6;
    char v8 = *(char *)&v3;
    __asm_outsb(v5, v8);
    *v7 = v8;
    char * v9 = (char *)(5 * (2 * v2 & 254 | v2 & -256)); // 0x2bb5b1
    *v9 = *v9 ^ (char)((int64_t)&g2 >> 8);
    int64_t v10 = -1 - ((char)a4 | (char)&g2) < (char)(a3 / 256) ? -0x58a4ef06 : -0x58a4ef07; // 0x2bb5c4
    return v4 - v10;
}

// Address range: 0x2bb64e - 0x2bb652
int64_t function_2bb64e(void) {
    // 0x2bb64e
    int64_t v1; // 0x2bb64e
    __asm_out_134(-73, (int32_t)v1);
    return function_2bb6b3(v1, v1, v1, v1, v1, (int64_t)&g7);
}

// Address range: 0x2bb69a - 0x2bb69b
int64_t function_2bb69a(void) {
    // 0x2bb69a
    int64_t result; // 0x2bb69a
    return result;
}

// Address range: 0x2bb6a6 - 0x2bb6b3
int64_t function_2bb6a6(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x2bb6a6
    int64_t result; // 0x2bb6a6
    char * v1 = (char *)(4 * result - 0x68e8fec3 + result); // 0x2bb6a7
    *v1 = *v1 + (char)(a3 / 256);
    int64_t v2; // 0x2bb6a6
    *(int32_t *)a3 = 8 * *(int32_t *)&v2;
    return result;
}

// Address range: 0x2bb6b3 - 0x2bb7a5
int64_t function_2bb6b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6) {
    int64_t v1 = a2;
    int64_t v2; // 0x2bb6b3
    *(char *)a3 = (char)((uint64_t)v2 / 256 & a3);
    *(char *)a2 = (char)(a6 / 256);
    int64_t v3; // 0x2bb6b3
    unsigned char v4 = *(char *)&v3; // 0x2bb6bd
    *(char *)v3 = v4 / 128 | 2 * v4;
    int64_t result = function_2c4fc5(); // 0x2bb6bf
    v3 = result;
    if ((int32_t)result != -0x635319ff) {
        // 0x2bb73b
        return result;
    }
    // 0x2bb6cb
    *(int32_t *)a1 = *(int32_t *)&v1;
    __asm_out((int16_t)a3, (int32_t)v3);
    __asm_in(-46);
    uint32_t result2 = *(int32_t *)0x3d71ab00fa6a4e31; // 0x2bb6d4
    int32_t * v5 = (int32_t *)(a3 - 30); // 0x2bb6dd
    *v5 = *v5 + result2;
    return result2;
}

// Address range: 0x2d4869 - 0x2d48d8
int64_t function_2d4869(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a1;
    int64_t v2; // 0x2d4869
    char * v3 = (char *)(v2 + 4 * v2); // 0x2d486c
    *v3 = *v3 - 1;
    uint64_t v4 = a4 / 256; // 0x2d486f
    int64_t v5 = v2 & -256 | (v4 + 58 + v2) % 256; // 0x2d486f
    uint32_t v6 = *(int32_t *)&v1; // 0x2d4871
    uint32_t v7 = v6 + (int32_t)v2; // 0x2d4871
    *(int32_t *)a1 = v7;
    if (v7 < v6) {
        int64_t result = v5; // 0x2d48c9
        if (llvm_ctpop_i8((char)v7) % 2 != 0) {
            // 0x2d48cc
            result = unknown_4ae3b8d4();
            *(char *)v1 = __asm_insb((int16_t)a3);
        }
        // 0x2d48d4
        return result;
    }
    // 0x2d4876
    bool v8; // 0x2d4869
    int64_t v9 = (v8 ? -1 : 1) + a2; // 0x2d4869
    uint64_t v10 = v5 + 0xc5f98f61; // 0x2d4876
    char * v11 = (char *)((v10 & 0xffffffff) + 0x459901e8); // 0x2d487b
    *v11 = *v11 - (char)(v10 / 256);
    uint32_t v12 = *(int32_t *)v9; // 0x2d4881
    int64_t v13 = v12; // 0x2d4881
    int64_t v14 = v8 ? 0xfffffffc : 4; // 0x2d4881
    int32_t * v15 = (int32_t *)(a3 + 0x4ca0e3e1); // 0x2d4887
    *v15 = *v15 + v12;
    *(char *)((0xfffffff8 - v2 + v14 + v9 & 0xffffffff) - 0x7fffd29b) = (char)(v2 / 256);
    char * v16 = (char *)(v13 + 81); // 0x2d489a
    char v17 = v12; // 0x2d489a
    *v16 = *v16 + v17;
    unsigned char v18 = *(char *)v13 + v17; // 0x2d489d
    int64_t v19 = v13 & 0xffffff00; // 0x2d489d
    *(int32_t *)v1 = (int32_t)(v19 | (int64_t)v18);
    int64_t v20 = v19 | (int64_t)(v18 + (char)v4); // 0x2d48a0
    int64_t v21 = v2 + 8 + v20 & 0xffffffff; // 0x2d48a2
    char * v22 = (char *)(v1 + (v8 ? 106 : 114)); // 0x2d48a4
    *v22 = *v22 + (char)a4;
    *(int64_t *)(v21 - 8) = v21;
    return v20 & 0xffff00ff | (int64_t)&g6;
}

// Address range: 0x2d490d - 0x2d490e
int64_t function_2d490d(void) {
    // 0x2d490d
    int64_t result; // 0x2d490d
    return result;
}

// Address range: 0x2d493a - 0x2d4944
int64_t function_2d493a(void) {
    // 0x2d493a
    int64_t v1; // 0x2d493a
    int32_t * v2 = (int32_t *)(v1 + 10); // 0x2d493a
    *v2 = *v2 + (int32_t)v1;
    return function_3c414a4b();
}

// Address range: 0x2d495b - 0x2d4965
int64_t function_2d495b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d495b
    int64_t v1; // 0x2d495b
    int64_t result = v1 ^ 12; // 0x2d495d
    char * v2 = (char *)(a4 - 0x7c5ffcc); // 0x2d495f
    *v2 = *v2 - (char)result;
    return result;
}

// Address range: 0x2d4981 - 0x2d49a4
int64_t function_2d4981(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2d4981
    int64_t v1; // 0x2d4981
    uint64_t v2 = v1;
    uint64_t v3 = v2 / 256; // 0x2d4981
    uint64_t v4 = a4 / 256; // 0x2d4981
    int32_t * v5 = (int32_t *)(v1 - 0x24f79bea + v1); // 0x2d4985
    int32_t v6 = *v5; // 0x2d4985
    *v5 = v6 + (int32_t)(256 * (v3 - v4) & 0xff00 | v2 & 0xffff0000 | (v2 + v4 + (int64_t)((char)v3 < (char)v4)) % 256);
    __asm_in_136((int16_t)a3);
    unknown_162e869b();
    int64_t result = unknown_10fb4ba1(); // 0x2d499b
    *(char *)result = (char)v1;
    return result;
}

// Address range: 0x2d49a9 - 0x2d49af
int64_t function_2d49a9(void) {
    // 0x2d49a9
    int64_t result; // 0x2d49a9
    return result;
}

// Address range: 0x2d49e1 - 0x2d49e4
int64_t function_2d49e1(int64_t a1) {
    // 0x2d49e1
    int64_t result; // 0x2d49e1
    return result;
}

// Address range: 0x2d4ad9 - 0x2d4ada
int64_t function_2d4ad9(void) {
    // 0x2d4ad9
    int64_t result; // 0x2d4ad9
    return result;
}

// Address range: 0x2d4add - 0x2d4ade
int64_t function_2d4add(int64_t a1) {
    // 0x2d4add
    int64_t result; // 0x2d4add
    return result;
}

// Address range: 0x2d4b0e - 0x2d4b14
int64_t function_2d4b0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d4b0e
    int64_t result; // 0x2d4b0e
    int64_t v1 = result;
    *(char *)v1 = (char)(result / 256 & v1);
    return result;
}

// Address range: 0x2d4b14 - 0x2d4b2b
int64_t function_2d4b14(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 - 0x41fe1797); // 0x2d4b14
    int64_t v2; // 0x2d4b14
    bool v3; // 0x2d4b14
    *v1 = (char)v3 - (char)v2 + *v1;
    int64_t v4; // 0x2d4b14
    int64_t v5 = v4;
    *(int32_t *)v5 = *(int32_t *)&v4 + (int32_t)v5;
    return function_2d4ba4();
}

// Address range: 0x2d4b2b - 0x2d4ba4
int64_t function_2d4b2b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    uint64_t v1 = a4 / 256; // 0x2d4b2c
    int64_t v2 = (a1 - v1) % 256 | a1 & 0xffffff00; // 0x2d4b2c
    int64_t v3; // 0x2d4b2b
    int32_t * v4 = (int32_t *)(v3 + a4); // 0x2d4b2e
    uint32_t v5 = *v4; // 0x2d4b2e
    int32_t v6 = a3; // 0x2d4b2e
    uint32_t v7 = v5 + v6; // 0x2d4b2e
    *v4 = v7;
    char v8 = *(char *)(v2 - 0x178605ee); // 0x2d4b31
    int64_t v9 = 256 * (int64_t)((char)v1 - v8 + (char)(v7 < v5)); // 0x2d4b31
    int32_t * v10 = (int32_t *)(v3 + 0x1737b89b); // 0x2d4b37
    *v10 = *v10 + (int32_t)v2;
    int64_t v11; // 0x2d4b2b
    *(int32_t *)a2 = *(int32_t *)&v11 + (int32_t)v3;
    int32_t v12 = *(int32_t *)((v9 | a4 & -0xff01) - 0x5f209f01); // 0x2d4b44
    char * v13 = (char *)((v2 + 0x171f1b8d & 0xffffffff) + 1 + 8 * v3); // 0x2d4b4a
    char v14 = *v13 + (char)((v12 & (int32_t)v9) / 256); // 0x2d4b4a
    *v13 = v14;
    uint32_t v15 = *(int32_t *)&v11; // 0x2d4b4e
    bool v16; // 0x2d4b2b
    int64_t v17 = v16 ? -4 : 4; // 0x2d4b4e
    v11 = v17 + a2;
    int64_t v18 = v15; // 0x2d4b4f
    if (v14 >= 0) {
        v18 = function_2d4ad9();
    }
    int64_t v19 = v3 & 0xffffffff; // 0x2d4b2b
    int32_t * v20 = (int32_t *)(a3 + 32 + v18); // 0x2d4b5a
    uint32_t v21 = (int32_t)v3; // 0x2d4b5a
    *v20 = *v20 + v21;
    int64_t v22 = unknown_ffffffffee736968(); // 0x2d4b62
    int64_t v23 = (v22 - (int64_t)(int16_t)&g3) % 0x10000 | v22 & -0x10000; // 0x2d4b67
    char * v24 = (char *)(v19 + 92); // 0x2d4b6b
    *v24 = *v24 + (char)a3;
    *(int32_t *)v19 = *(int32_t *)v23 + (int32_t)v23;
    int64_t v25 = v17 + v19; // 0x2d4b70
    unknown_ffffffffbe2d7689(v25);
    __asm_iretd(v25);
    unknown_7a5298();
    int32_t * v26 = (int32_t *)(v11 + 8); // 0x2d4b99
    *v26 = (int32_t)(*(int32_t *)(v11 - 0x43f84b7) > v21) + v6 + *v26;
    return __asm_iretd(v25 + ((a5 & (int64_t)&g1) == 0 ? 1 : -1));
}

// Address range: 0x2d4ba4 - 0x2d4bb6
int64_t function_2d4ba4(void) {
    // 0x2d4ba4
    int64_t v1; // 0x2d4ba4
    return v1 & -256 | (int64_t)*(char *)0x70b00e818c3201e8;
}

// Address range: 0x2d4bc5 - 0x2d4bc6
int64_t function_2d4bc5(void) {
    // 0x2d4bc5
    int64_t result; // 0x2d4bc5
    return result;
}

// Address range: 0x2d4bd2 - 0x2d4bd3
int64_t function_2d4bd2(int64_t a1) {
    // 0x2d4bd2
    int64_t result; // 0x2d4bd2
    return result;
}

// Address range: 0x2d4bde - 0x2d4be5
int64_t function_2d4bde(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d4bde
    return function_4b4811();
}

// Address range: 0x2d4c13 - 0x2d4c34
int64_t function_2d4c13(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2d4c13
    float80_t v1; // 0x2d4c13
    *(int16_t *)(a3 - 0x65dce9a3) = (int16_t)v1;
    unknown_ffffffff91f0a71f();
    int64_t v2; // 0x2d4c13
    char * v3 = (char *)(v2 + 0x3e5880c9); // 0x2d4c1e
    *v3 = *v3 + (char)(a4 / 256);
    unknown_65e6f42e();
    return function_2d4bc5();
}

// Address range: 0x2d4c3b - 0x2d4c3c
int64_t function_2d4c3b(void) {
    // 0x2d4c3b
    int64_t result; // 0x2d4c3b
    return result;
}

// Address range: 0x2d4e69 - 0x2d4e77
int64_t function_2d4e69(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2d4e69
    int64_t result; // 0x2d4e69
    int32_t * v1 = (int32_t *)(result - 78); // 0x2d4e69
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x2d4e92 - 0x2d4e93
int64_t function_2d4e92(void) {
    // 0x2d4e92
    int64_t result; // 0x2d4e92
    return result;
}

// Address range: 0x2d4e99 - 0x2d4ea4
int64_t function_2d4e99(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2d4e99
    return function_2d4e29();
}

// Address range: 0x2d4f14 - 0x2d4f15
int64_t function_2d4f14(int64_t a1) {
    // 0x2d4f14
    int64_t result; // 0x2d4f14
    return result;
}

// Address range: 0x2d4f86 - 0x2d4f8b
int64_t function_2d4f86(void) {
    // 0x2d4f86
    return function_ffffffff8fd796d0();
}

// Address range: 0x2d4f9c - 0x2d4fad
int64_t function_2d4f9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d4f9c
    unknown_29c587a2();
    unsigned char v1 = *(char *)-0x17a3556f; // 0x2d4fa2
    *(char *)-0x17a3556f = v1 / 128 | 2 * v1;
    int64_t result = __asm_fnstenv(); // 0x2d4fa9
    *(int224_t *)(a1 + 70) = (int224_t)result;
    return result;
}

// Address range: 0x2d4fda - 0x2d4fe6
int64_t function_2d4fda(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 0x4b985451); // 0x2d4fdf
    int64_t v2; // 0x2d4fda
    *v1 = *v1 + (int32_t)v2;
    return v2 + 0xe8224288 & 0xffffffff;
}

// Address range: 0x2d5099 - 0x2d50db
int64_t function_2d5099(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d5099
    int64_t result; // 0x2d5099
    if (a4 != 0) {
        // 0x2d509b
        return result;
    }
    bool v1; // 0x2d5099
    if (v1) {
        // 0x2d50cc
        return function_ffffffff9607264f();
    }
    int32_t * v2 = (int32_t *)(result + 0x3a83a3f8); // 0x2d50c1
    *v2 = *v2 + (int32_t)result;
    return result;
}

// Address range: 0x2d50ec - 0x2d50fe
int64_t function_2d50ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d50ec
    int64_t v1; // 0x2d50ec
    unsigned char v2 = (char)v1;
    *(char *)v1 = v2 / 128 | 2 * v2;
    char * v3 = (char *)unknown_ffffffffbb355cf5(); // 0x2d50f4
    *v3 = *v3 + (char)a3;
    return a3 & 0xffffffff;
}

// Address range: 0x2d51e5 - 0x2d51f6
int64_t function_2d51e5(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 0x7c734e3b); // 0x2d51eb
    *v1 = *v1 + (int32_t)a3;
    return function_82f3a3b();
}

// Address range: 0x2d5225 - 0x2d5228
int64_t function_2d5225(void) {
    // 0x2d5225
    int64_t result; // 0x2d5225
    return result;
}

// Address range: 0x2d5228 - 0x2d5258
int64_t function_2d5228(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 0x1e8ac5d); // 0x2d522c
    int32_t v2 = a3; // 0x2d522c
    *v1 = *v1 + v2;
    bool v3; // 0x2d5228
    int64_t v4 = v3 ? -1 : 1; // 0x2d5232
    int32_t * v5 = (int32_t *)((a4 & -256 | 124) + 89); // 0x2d5237
    int64_t v6; // 0x2d5228
    *v5 = *v5 + (int32_t)v6;
    int32_t * v7 = (int32_t *)(4 * v6 - 104 + (v6 + a4 & 0xffffffff)); // 0x2d523c
    *v7 = *v7 + v2;
    unknown_388bbd4e(v4 + a1, v4 + a2);
    return function_42f52ab();
}
