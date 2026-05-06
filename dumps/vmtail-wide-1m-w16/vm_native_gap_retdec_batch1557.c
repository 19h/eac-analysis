/*
 * Targeted RetDec C for native executable gap queue batch 1557.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1f980a-0x1f9a0a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f9a0a-0x1f9c0a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f9c0a-0x1f9e0a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f9e0a-0x1fa00a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1fa00a-0x1fa01f rank=- name=- kind=- bytes=- uncovered=-
 *   0x1fa026-0x1fa226 rank=- name=- kind=- bytes=- uncovered=-
 *   0x484020-0x484220 rank=- name=- kind=- bytes=- uncovered=-
 *   0x484220-0x484420 rank=- name=- kind=- bytes=- uncovered=-
 *   0x484420-0x484620 rank=- name=- kind=- bytes=- uncovered=-
 *   0x484620-0x484820 rank=- name=- kind=- bytes=- uncovered=-
 *   0x484820-0x484a20 rank=- name=- kind=- bytes=- uncovered=-
 *   0x484a20-0x484a4f rank=- name=- kind=- bytes=- uncovered=-
 *   0x54b98c-0x54bb8c rank=- name=- kind=- bytes=- uncovered=-
 *   0x54bb8c-0x54bd8c rank=- name=- kind=- bytes=- uncovered=-
 *   0x54bd8c-0x54bf8c rank=- name=- kind=- bytes=- uncovered=-
 *   0x54bf8c-0x54c18c rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1f980a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1f9810(void);
int64_t function_1f9828(void);
int64_t function_1f9846(void);
int64_t function_1f988d(void);
int64_t function_1f9895(int64_t a1);
int64_t function_1f98b7(void);
int64_t function_1f98db(void);
int64_t function_1f98e0(int64_t a1, int64_t a2, int64_t a3, int32_t a4);
int64_t function_1f9947(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1f99d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f9a62(void);
int64_t function_1f9a8f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1f9ac3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f9b49(int64_t a1, int64_t a2);
int64_t function_1f9b8d(int64_t a1);
int64_t function_1f9bbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f9c4e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1f9d15(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f9d44(int64_t a1);
int64_t function_1f9d80(void);
int64_t function_1f9dbb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_1f9e09(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_1f9e2f(void);
int64_t function_1f9e49(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f9ed7(int64_t a1);
int64_t function_1f9efe(int64_t a1);
int64_t function_1f9f12(int64_t a1);
int64_t function_1f9f15(void);
int64_t function_1f9f65(void);
int64_t function_1f9fb7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1f9fdb(void);
int64_t function_1f9fe5(void);
int64_t function_1fa015(void);
int64_t function_1fa026(void);
int64_t function_1fa096(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1fa0b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fa0fb(void);
int64_t function_1fa104(void);
int64_t function_1fa13f(void);
int64_t function_1fa154(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fa1a8(void);
int64_t function_1fa1c7(void);
int64_t function_1fa1ca(void);
int64_t function_1fa1f0(void);
int64_t function_1fa1fd(void);
int64_t function_1fa213(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1fa25f();
int64_t function_208459a();
int64_t function_48400c();
int64_t function_484020(int64_t a1, int64_t a2);
int64_t function_4840a2(void);
int64_t function_4840f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4840f8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48410b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_484278(void);
int64_t function_4842a5(int64_t a1);
int64_t function_4842a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48430a(void);
int64_t function_484326(void);
int64_t function_484334(void);
int64_t function_484335(int64_t a1);
int64_t function_48433e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_48434b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4843af(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4843ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4843f2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_484470(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_484491(void);
int64_t function_484496(int64_t a1);
int64_t function_4844de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_484668(void);
int64_t function_484670(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_484820(void);
int64_t function_484832(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_484846(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_4848f2(int64_t a1);
int64_t function_4848f9(void);
int64_t function_484903(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_484949(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_484954(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48497a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_4849b4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_542650();
int64_t function_54b853();
int64_t function_54b98c(void);
int64_t function_54b9a0(int64_t result);
int64_t function_54b9c0(int64_t result);
int64_t function_54b9d0(int64_t result);
int64_t function_54b9e0(int64_t a1, int64_t c, uint64_t a3, uint64_t n2);
int64_t function_54bad0(int64_t a1, int64_t a2);
int64_t function_54bae0(int64_t a1, int64_t wstr, int64_t a3);
int64_t function_54bb10(int64_t a1, int64_t c, uint64_t a3);
int64_t function_54bb60(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_54bbf0(int64_t a1, int64_t a2);
int64_t function_54bc00(int64_t a1, int64_t wstr, int64_t a3);
int64_t function_54bc30(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_54bc80(int64_t a1, int64_t wstr, uint64_t a3, int64_t n);
int64_t function_54bd00(int64_t a1, int64_t a2);
int64_t function_54bd10(int64_t a1, int64_t wstr, int64_t a3);
int64_t function_54bd40(void);
int64_t function_54bd50(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_54bde0(int64_t a1, int64_t a2);
int64_t function_54bdf0(int64_t a1, int64_t wstr, int64_t a3);
int64_t function_54be20(void);
int64_t function_54be30(int64_t a1, int64_t wstr, int64_t result, int64_t n);
int64_t function_54beb0(int64_t a1, int64_t a2);
int64_t function_54bec0(int64_t a1, int64_t wstr, int64_t a3);
int64_t function_54bef0(int64_t a1, int64_t a2, int64_t result);
int64_t function_54bf40(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_54bfd0(int64_t a1, int64_t a2);
int64_t function_54bfe0(int64_t a1, int64_t wstr, int64_t a3);
int64_t function_54c010(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_54c050(int64_t wstr, int64_t wstr2);
int64_t function_54c0b0(int64_t a1, uint64_t a2, uint64_t a3, int64_t wstr, uint64_t a5, uint64_t a6);
int64_t function_62b7e49a();
int64_t function_6e595ceb();
int64_t function_7e4a5180();
int64_t function_ffffffffb30e74cb();
int64_t function_ffffffffe20da00c();
int64_t function_ffffffffe829d959();
int64_t unknown_19d9808b();
int64_t unknown_1dae8b2();
int64_t unknown_3969a321();
int64_t unknown_443e8e54();
int64_t unknown_5a238631();
int64_t unknown_750e0254();
int64_t unknown_ffffffff81fd3e27();
int64_t unknown_ffffffffa428c812();
int64_t unknown_ffffffffa8204bcc();
int64_t unknown_ffffffffaf2183c1();
int64_t unknown_ffffffffafbce9d2();
int64_t unknown_ffffffffb61e61a9();
int64_t unknown_ffffffffc7cad1ee();
int64_t unknown_ffffffffe0a7f73c();
int64_t unknown_fffffffff7e79d1b();

// Address range: 0x1f980a - 0x1f980f
int64_t function_1f980a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1f980a
    int64_t v1; // 0x1f980a
    int64_t result = v1;
    bool v2; // 0x1f980a
    *(char *)result = (char)result + (char)(a3 / 256) + (char)v2;
    return result;
}

// Address range: 0x1f9810 - 0x1f9811
int64_t function_1f9810(void) {
    // 0x1f9810
    int64_t result; // 0x1f9810
    return result;
}

// Address range: 0x1f9828 - 0x1f9829
int64_t function_1f9828(void) {
    // 0x1f9828
    int64_t result; // 0x1f9828
    return result;
}

// Address range: 0x1f9846 - 0x1f9848
int64_t function_1f9846(void) {
    // 0x1f9846
    return function_1f9810();
}

// Address range: 0x1f988d - 0x1f9895
int64_t function_1f988d(void) {
    // 0x1f988d
    int64_t result; // 0x1f988d
    return result;
}

// Address range: 0x1f9895 - 0x1f98a2
int64_t function_1f9895(int64_t a1) {
    // 0x1f9895
    int64_t v1; // 0x1f9895
    return function_1f98e0(a1, v1, v1, *(int32_t *)(a1 - 80));
}

// Address range: 0x1f98b7 - 0x1f98b8
int64_t function_1f98b7(void) {
    // 0x1f98b7
    int64_t result; // 0x1f98b7
    return result;
}

// Address range: 0x1f98db - 0x1f98dd
int64_t function_1f98db(void) {
    // 0x1f98db
    return function_1f98b7();
}

// Address range: 0x1f98e0 - 0x1f98e2
int64_t function_1f98e0(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    // 0x1f98e0
    int64_t result; // 0x1f98e0
    *(int32_t *)(int64_t)a4 = (int32_t)result + a4;
    return result;
}

// Address range: 0x1f9947 - 0x1f9972
int64_t function_1f9947(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1f9947
    int64_t result; // 0x1f9947
    int32_t * v1 = (int32_t *)(result - 0x4baafff8); // 0x1f9947
    int32_t v2 = *v1 + (int32_t)a2; // 0x1f9947
    *v1 = v2;
    if (v2 == 0) {
        // 0x1f9961
        return __asm_int1();
    }
    // 0x1f994f
    return result;
}

// Address range: 0x1f99d1 - 0x1f99ea
int64_t function_1f99d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f99d1
    int64_t v1; // 0x1f99d1
    *(int32_t *)a1 = (int32_t)(v1 | a3);
    return 0xa301e83b;
}

// Address range: 0x1f9a62 - 0x1f9a63
int64_t function_1f9a62(void) {
    // 0x1f9a62
    int64_t result; // 0x1f9a62
    return result;
}

// Address range: 0x1f9a8f - 0x1f9ac3
int64_t function_1f9a8f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a1; // bp-8, 0x1f9a8f
    int64_t v2; // 0x1f9a8f
    char v3 = *(char *)(v2 - 0x17cbcc00); // 0x1f9a90
    int64_t v4 = 256 * (int64_t)((char)(a3 / 256) - v3) | a3 & -0xff01; // 0x1f9a90
    int32_t * v5 = (int32_t *)(v2 - 0x17fec264); // 0x1f9a96
    *v5 = *v5 + (int32_t)v2;
    int32_t * v6 = (int32_t *)(v4 - 47); // 0x1f9a9e
    uint32_t v7 = *v6; // 0x1f9a9e
    uint32_t v8 = v7 + (int32_t)v4; // 0x1f9a9e
    *v6 = v8;
    char * v9 = (char *)(v2 - 79); // 0x1f9aa1
    *v9 = *v9 + (char)a3 + (char)(v8 < v7);
    int32_t * v10 = (int32_t *)(2 * a4 + 0xc33d425 + __asm_sti(a1)); // 0x1f9aa5
    *v10 = *v10 | (int32_t)(int64_t)&v1;
    int64_t result = unknown_1dae8b2(); // 0x1f9aac
    *(int32_t *)0x13d253ee6548d = (int32_t)result;
    int64_t v11; // 0x1f9a8f
    int224_t v12 = *(int224_t *)&v11; // 0x1f9aba
    __asm_fldenv(v12);
    int32_t * v13 = (int32_t *)(a2 - 104); // 0x1f9abc
    *v13 = *v13 | (int32_t)v12;
    return result;
}

// Address range: 0x1f9ac3 - 0x1f9adf
int64_t function_1f9ac3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f9ac3
    int64_t result; // 0x1f9ac3
    int32_t v1 = *(int32_t *)(result + 0x68656b); // 0x1f9ac3
    unsigned char v2 = *(char *)0x4c98d3; // 0x1f9acc
    unsigned char v3 = v2 + (char)(result / 256); // 0x1f9acc
    *(char *)0x4c98d3 = v3;
    *(char *)a1 = (char)result;
    char * v4 = (char *)((int64_t)(v1 ^ (int32_t)result) - 0x4c2ec052); // 0x1f9ad4
    *v4 = *v4 - (char)(v3 < v2);
    return result;
}

// Address range: 0x1f9b49 - 0x1f9b4d
int64_t function_1f9b49(int64_t a1, int64_t a2) {
    // 0x1f9b49
    int64_t result; // 0x1f9b49
    return result;
}

// Address range: 0x1f9b8d - 0x1f9b94
int64_t function_1f9b8d(int64_t a1) {
    // 0x1f9b8d
    int64_t result; // 0x1f9b8d
    return result;
}

// Address range: 0x1f9bbb - 0x1f9bd6
int64_t function_1f9bbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f9bbb
    unknown_ffffffffaf2183c1();
    int16_t v1 = a3; // 0x1f9bc0
    *(int32_t *)a1 = __asm_insd(v1);
    int32_t * v2 = (int32_t *)(a1 + 0x379ffa8c); // 0x1f9bc6
    uint32_t v3 = *v2; // 0x1f9bc6
    int64_t v4; // 0x1f9bbb
    uint32_t v5 = v3 + (int32_t)v4; // 0x1f9bc6
    *v2 = v5;
    int64_t v6 = unknown_ffffffffafbce9d2(); // 0x1f9bcc
    return v6 & -0x10000 | (int64_t)__asm_in(v1) | v6 - (256 * (int64_t)(v5 < v3) + v6 & 0xff00) & 0xff00;
}

// Address range: 0x1f9c4e - 0x1f9caa
int64_t function_1f9c4e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1f9c4e
    unknown_443e8e54();
    int64_t result = a4 & 0xffffffff; // 0x1f9c53
    int32_t * v1 = (int32_t *)(a2 + 110); // 0x1f9c54
    *v1 = *v1 ^ (int32_t)a3;
    int64_t v2; // 0x1f9c4e
    char * v3 = (char *)((v2 + 0x1e8563e & 0xffffffff) - 0x4293ff67); // 0x1f9c5d
    *v3 = *v3 - (char)(a4 / 256);
    unsigned char v4 = (char)a4; // 0x1f9c63
    int64_t v5; // 0x1f9c4e
    unsigned char v6 = *(char *)&v5; // 0x1f9c63
    char v7 = v4 - v6; // 0x1f9c63
    bool v8; // 0x1f9c4e
    int64_t v9 = (v8 ? -1 : 1) + a1; // 0x1f9c63
    v5 = v9;
    if (v7 < 0) {
        // 0x1f9ce1
        return result;
    }
    unsigned char v10 = llvm_ctpop_i8(v7); // 0x1f9c63
    int64_t v11 = v8 ? -4 : 4; // 0x1f9c8c
    *(int32_t *)v9 = (int32_t)a4;
    int64_t v12 = v5 + v11; // 0x1f9c8c
    v5 = v12;
    if (v10 % 2 == 0) {
        // 0x1f9c8f
        return __asm_sti(v12);
    }
    int64_t v13 = v12; // 0x1f9c8d
    while (v6 <= v4) {
        // 0x1f9c7d
        unknown_fffffffff7e79d1b();
        __asm_wait(v13);
        *(int32_t *)v13 = (int32_t)unknown_19d9808b();
        v13 = v5 + v11;
        v5 = v13;
    }
    int32_t * v14 = (int32_t *)(result - 0x44267577); // 0x1f9c95
    *v14 = *v14 + (int32_t)v2;
    char v15 = *(char *)(a2 - 0x5563a4c9); // 0x1f9c9c
    int64_t result2 = unknown_ffffffffb61e61a9(); // 0x1f9ca3
    float80_t v16; // 0x1f9c4e
    *(float32_t *)((int64_t)(117 - v15) | 0x5f01e800) = (float32_t)v16;
    return result2;
}

// Address range: 0x1f9d15 - 0x1f9d30
int64_t function_1f9d15(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a3 - 0x5f61fef9); // 0x1f9d15
    int64_t result = unknown_3969a321(); // 0x1f9d1b
    int32_t * v2 = (int32_t *)(a3 + 0x6052b86b); // 0x1f9d20
    *v2 = *v2 - 126;
    int64_t v3; // 0x1f9d15
    int64_t v4 = 0x100000000 * v3 >> 32; // 0x1f9d27
    int64_t v5 = -0x16fe17e4 * v4; // 0x1f9d27
    int32_t * v6 = (int32_t *)(v5 & 0xfffffffc); // 0x1f9d2d
    int32_t v7 = *v6; // 0x1f9d2d
    bool v8; // 0x1f9d15
    *v6 = (int32_t)v8 - (v1 + (int32_t)a4) + (int32_t)(v5 != -0x16fe17e400000000 * v4 >> 32) + v7;
    return result;
}

// Address range: 0x1f9d44 - 0x1f9d45
int64_t function_1f9d44(int64_t a1) {
    // 0x1f9d44
    int64_t result; // 0x1f9d44
    return result;
}

// Address range: 0x1f9d80 - 0x1f9d82
int64_t function_1f9d80(void) {
    // 0x1f9d80
    int64_t result; // 0x1f9d80
    return result;
}

// Address range: 0x1f9dbb - 0x1f9ddd
int64_t function_1f9dbb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x1f9dbb
    __asm_int1();
    char * v1 = (char *)a1; // 0x1f9dc0
    int64_t v2; // 0x1f9dbb
    *v1 = (char)(v2 | a4 / 256);
    int32_t result = __asm_in_133(-49); // 0x1f9dc2
    int64_t v3; // 0x1f9dbb
    *v1 = *(char *)&v3;
    char * v4 = (char *)(v2 + 0x3d000013); // 0x1f9dc6
    *v4 = *v4 & (char)result;
    int32_t * v5 = (int32_t *)(a3 - 0x49601010); // 0x1f9dcc
    *v5 = *v5 + (int32_t)v2;
    int32_t * v6 = (int32_t *)(v2 + 1); // 0x1f9dd9
    int64_t v7; // bp+16, 0x1f9dbb
    *v6 = *v6 + (int32_t)(int64_t)&v7;
    return result;
}

// Address range: 0x1f9e09 - 0x1f9e24
int64_t function_1f9e09(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x1f9e09
    __asm_outsb((int16_t)a3, *(char *)a5);
    unknown_ffffffffa428c812();
    int64_t v1; // 0x1f9e09
    int32_t * v2 = (int32_t *)((v1 | a3 / 256 % 256) - 24); // 0x1f9e13
    *v2 = *v2 | -0x6fd141ff;
    return function_ffffffffe20da00c();
}

// Address range: 0x1f9e2f - 0x1f9e32
int64_t function_1f9e2f(void) {
    // 0x1f9e2f
    int64_t result; // 0x1f9e2f
    return result;
}

// Address range: 0x1f9e49 - 0x1f9e58
int64_t function_1f9e49(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f9e49
    unknown_750e0254();
    return function_ffffffffe829d959();
}

// Address range: 0x1f9ed7 - 0x1f9eda
int64_t function_1f9ed7(int64_t a1) {
    // 0x1f9ed7
    int64_t result; // 0x1f9ed7
    return result;
}

// Address range: 0x1f9efe - 0x1f9eff
int64_t function_1f9efe(int64_t a1) {
    // 0x1f9efe
    int64_t result; // 0x1f9efe
    return result;
}

// Address range: 0x1f9f12 - 0x1f9f15
int64_t function_1f9f12(int64_t a1) {
    // 0x1f9f12
    int64_t result; // 0x1f9f12
    return result;
}

// Address range: 0x1f9f15 - 0x1f9f16
int64_t function_1f9f15(void) {
    // 0x1f9f15
    int64_t result; // 0x1f9f15
    return result;
}

// Address range: 0x1f9f65 - 0x1f9f66
int64_t function_1f9f65(void) {
    // 0x1f9f65
    int64_t result; // 0x1f9f65
    return result;
}

// Address range: 0x1f9fb7 - 0x1f9fd4
int64_t function_1f9fb7(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3;
    int64_t v2; // 0x1f9fb7
    bool v3; // 0x1f9fb7
    if (v3) {
        v2 = function_1f9f65();
    }
    uint64_t v4 = v2;
    int64_t v5; // 0x1f9fb7
    *(int32_t *)v4 = (int32_t)v4 + (int32_t)v5;
    char * v6 = (char *)(v4 - 0x20fe2d2a); // 0x1f9fbe
    *v6 = *v6 - (char)v1;
    *(char *)v1 = *(char *)&v1 ^ (char)(v4 / 256);
    unsigned char v7 = *(char *)-0x34eae12f; // 0x1f9fca
    unsigned char v8 = v7 + (char)(v5 / 256); // 0x1f9fca
    *(char *)-0x34eae12f = v8;
    char v9 = *(char *)(v4 - 103); // 0x1f9fd0
    return v4 & -256 | (int64_t)(v9 + (char)v4 + (char)(v8 < v7));
}

// Address range: 0x1f9fdb - 0x1f9fe1
int64_t function_1f9fdb(void) {
    // 0x1f9fdb
    int64_t result; // 0x1f9fdb
    return result;
}

// Address range: 0x1f9fe5 - 0x1f9fea
int64_t function_1f9fe5(void) {
    // 0x1f9fe5
    return function_ffffffffb30e74cb();
}

// Address range: 0x1fa015 - 0x1fa01a
int64_t function_1fa015(void) {
    // 0x1fa015
    return function_62b7e49a();
}

// Address range: 0x1fa026 - 0x1fa03b
int64_t function_1fa026(void) {
    int32_t * v1 = (int32_t *)unknown_5a238631(); // 0x1fa030
    *v1 = *v1 | -0x2bc237fb;
    return unknown_ffffffffe0a7f73c();
}

// Address range: 0x1fa096 - 0x1fa0a5
int64_t function_1fa096(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1fa096
    int64_t result; // 0x1fa096
    char * v1 = (char *)(result + 0x7a164080); // 0x1fa09c
    *v1 = *v1 | (char)a3;
    return result;
}

// Address range: 0x1fa0b6 - 0x1fa0f8
int64_t function_1fa0b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 0x1e89bdf); // 0x1fa0b6
    int64_t v2; // 0x1fa0b6
    *v1 = *v1 & (char)v2;
    char * v3 = (char *)(v2 - 115); // 0x1fa0c1
    char v4 = v2; // 0x1fa0c1
    *v3 = *v3 + v4;
    int64_t v5 = unknown_ffffffffa8204bcc(); // 0x1fa0c6
    char * v6 = (char *)(a4 + 0x72d0de00); // 0x1fa0cb
    *v6 = *v6 + v4;
    char v7 = *(char *)(v2 + 122 + 8 * v2); // 0x1fa0d2
    int32_t v8 = *(int32_t *)(a3 & -256 | (int64_t)((char)a3 - v7)); // 0x1fa0d6
    char v9 = v5; // 0x1fa0d8
    int32_t v10 = *(int32_t *)0x18dc5138; // 0x1fa0e0
    *(int32_t *)0x18dc5138 = (int32_t)(v9 - 47 < v9 + 24) - (v8 ^ (int32_t)v2) + v10;
    return a4 - 256 * unknown_ffffffffc7cad1ee() & 0xff00 | a4 & 0xffff00ff;
}

// Address range: 0x1fa0fb - 0x1fa0ff
int64_t function_1fa0fb(void) {
    // 0x1fa0fb
    int64_t result; // 0x1fa0fb
    return result;
}

// Address range: 0x1fa104 - 0x1fa107
int64_t function_1fa104(void) {
    // 0x1fa104
    int64_t result; // 0x1fa104
    return result;
}

// Address range: 0x1fa13f - 0x1fa144
int64_t function_1fa13f(void) {
    // 0x1fa13f
    return function_208459a();
}

// Address range: 0x1fa154 - 0x1fa162
int64_t function_1fa154(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fa154
    int64_t v1; // 0x1fa154
    uint32_t v2 = (int32_t)v1; // 0x1fa154
    bool v3; // 0x1fa154
    uint32_t v4 = v3 ? -0x2d9f9351 : -0x2d9f9352; // 0x1fa154
    uint32_t result = v2 - v4; // 0x1fa154
    char * v5 = (char *)(v1 + 62); // 0x1fa15b
    *v5 = *v5 + (char)result + (char)(v3 | v4 > v2);
    return result;
}

// Address range: 0x1fa1a8 - 0x1fa1af
int64_t function_1fa1a8(void) {
    // 0x1fa1a8
    int64_t result; // 0x1fa1a8
    return result;
}

// Address range: 0x1fa1c7 - 0x1fa1c8
int64_t function_1fa1c7(void) {
    // 0x1fa1c7
    int64_t result; // 0x1fa1c7
    return result;
}

// Address range: 0x1fa1ca - 0x1fa1cc
int64_t function_1fa1ca(void) {
    // 0x1fa1ca
    int64_t v1; // 0x1fa1ca
    return function_1fa213(v1, v1, v1);
}

// Address range: 0x1fa1f0 - 0x1fa1f2
int64_t function_1fa1f0(void) {
    // 0x1fa1f0
    return function_1fa1c7();
}

// Address range: 0x1fa1fd - 0x1fa20c
int64_t function_1fa1fd(void) {
    // 0x1fa1fd
    return function_1fa25f();
}

// Address range: 0x1fa213 - 0x1fa226
int64_t function_1fa213(int64_t a1, int64_t a2, int64_t a3) {
    char v1 = *(char *)-0x60435bfd; // 0x1fa213
    while ((v1 & (v1 ^ -128)) < 0) {
        // 0x1fa214
        v1 += 112;
    }
    // 0x1fa21d
    *(char *)-0x60435bfd = v1;
    int64_t v2; // 0x1fa213
    __asm_out_134(69, (char)v2);
    return unknown_ffffffff81fd3e27();
}

// Address range: 0x484020 - 0x484066
int64_t function_484020(int64_t a1, int64_t a2) {
    // 0x484020
    bool v1; // 0x484020
    if (v1) {
        // 0x48405d
        return function_48400c() + (v1 ? 0x1e92106f : 0x1e92106e) & 0xffffffff;
    }
    // 0x484023
    int64_t result; // 0x484020
    return result;
}

// Address range: 0x4840a2 - 0x4840a3
int64_t function_4840a2(void) {
    // 0x4840a2
    int64_t result; // 0x4840a2
    return result;
}

// Address range: 0x4840f1 - 0x4840f8
int64_t function_4840f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 - 1; // 0x4840f3
    bool v2; // 0x4840f1
    if (v1 != 0 == v2) {
        function_4840a2();
    }
    // 0x4840f6
    return function_48410b(a1, a2, a3, v1, (int64_t)&g1);
}

// Address range: 0x4840f8 - 0x48410b
int64_t function_4840f8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4840f8
    int64_t v1; // 0x4840f8
    int64_t result = v1 & -185; // 0x4840f9
    char * v2 = (char *)(result | 32); // 0x4840fc
    *v2 = *v2 / 2;
    int32_t * v3 = (int32_t *)(a1 + 0x274c4c1b); // 0x4840ff
    *v3 = *v3 ^ (int32_t)a1;
    return result;
}

// Address range: 0x48410b - 0x48426c
int64_t function_48410b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    char * v2 = (char *)(a1 + 12); // 0x48410b
    *v2 = *v2 ^ (char)(a3 / 256);
    int64_t v3; // 0x48410b
    int64_t v4 = v3 & 0xffffffff; // 0x48410e
    int64_t v5 = a4; // bp-8, 0x48410f
    *(int32_t *)-0x33ff651c8e99cc50 = (int32_t)a1;
    bool v6; // 0x48410b
    int64_t v7 = v6 ? -4 : 4;
    int64_t result = __asm_wait(v4); // 0x484119
    int64_t v8 = a3; // 0x484119
    int64_t v9 = (int64_t)&v5; // 0x484119
    int64_t v10 = v4; // 0x484119
    int64_t v11; // 0x48410b
    uint64_t v12 = v11;
    int64_t v13 = result;
    char * v14 = (char *)v12; // 0x48411a
    *v14 = (char)false - (char)v13 + *v14;
    int16_t v15 = v13; // 0x48411d
    int32_t v16 = v8; // 0x48411d
    __asm_out_135(v15, v16);
    char v17 = *v14; // 0x48411e
    uint32_t v18 = *(int32_t *)&v1 ^ v16; // 0x484122
    *(int32_t *)v1 = v18;
    char v19 = __asm_in(v15); // 0x48412a
    while (v18 < 1) {
        // 0x48417a
        result = v8 & 0xffffff00 | (int64_t)v19;
        int64_t * v20 = (int64_t *)v9; // 0x48417a
        *v20 = 13;
        uint32_t v21 = (int32_t)result; // 0x48417e
        uint32_t v22 = *(int32_t *)v10; // 0x48417e
        int64_t v23 = v10 + v7; // 0x48417e
        *(int64_t *)(v9 - 8) = *v20;
        *(int32_t *)v23 = v21;
        v9 -= 16;
        *(int64_t *)v9 = -0x42943e91;
        v8 = v13 & 0xffffffff;
        v11 = 256 * (int64_t)(v17 | (char)(v12 / 256)) | v12 & -0xff01;
        v10 = v23 + v7;
        if (v22 < v21) {
            // 0x484189
            return result;
        }
        v12 = v11;
        v13 = result;
        v14 = (char *)v12;
        *v14 = (char)(v22 > v21) - (char)v13 + *v14;
        v15 = v13;
        v16 = v8;
        __asm_out_135(v15, v16);
        v17 = *v14;
        v18 = *(int32_t *)&v1 ^ v16;
        *(int32_t *)v1 = v18;
        v19 = __asm_in(v15);
    }
    while (true) {
        // continue -> 0x48412d
    }
}

// Address range: 0x484278 - 0x484279
int64_t function_484278(void) {
    // 0x484278
    int64_t result; // 0x484278
    return result;
}

// Address range: 0x4842a5 - 0x4842a8
int64_t function_4842a5(int64_t a1) {
    // 0x4842a5
    int64_t result; // 0x4842a5
    return result;
}

// Address range: 0x4842a8 - 0x4842eb
int64_t function_4842a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_iretd(); // 0x4842aa
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    *(int32_t *)0x723d7083e6b0079 = (int32_t)v1;
    bool v2; // 0x4842a8
    int32_t * v3 = (int32_t *)(a3 + a2 + (int64_t)v2 & 0xffffffff); // 0x4842b7
    int32_t v4 = *v3; // 0x4842b7
    int16_t v5 = (int16_t)v1 ^ 0x2100; // 0x4842ca
    __asm_outsd(v5, v4);
    int32_t v6 = *(int32_t *)((int64_t)(-0x52b1f791 * v4) + 0xdc1664a7); // 0x4842cb
    int64_t result = -0x5982d082 * v6; // 0x4842cb
    __asm_outsd(v5, *v3);
    int64_t v7; // 0x4842a8
    if (*(int32_t *)(v7 - 112) > 0xdc166525) {
        // 0x4842dc
        return result & 0x46ba00 | (int64_t)*(char *)0x25cd78f04ffb523f;
    }
    // 0x4842fc
    return result;
}

// Address range: 0x48430a - 0x48430f
int64_t function_48430a(void) {
    // 0x48430a
    return function_7e4a5180();
}

// Address range: 0x484326 - 0x484327
int64_t function_484326(void) {
    // 0x484326
    int64_t result; // 0x484326
    return result;
}

// Address range: 0x484334 - 0x484335
int64_t function_484334(void) {
    // 0x484334
    int64_t result; // 0x484334
    return result;
}

// Address range: 0x484335 - 0x484336
int64_t function_484335(int64_t a1) {
    // 0x484335
    int64_t result; // 0x484335
    return result;
}

// Address range: 0x48433e - 0x484343
int64_t function_48433e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x48433e
    int64_t v1; // 0x48433e
    *(char *)a3 = (char)(v1 | a4 / 256);
    return function_484334();
}

// Address range: 0x48434b - 0x484357
int64_t function_48434b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x48434b
    int64_t v1; // 0x48434b
    *(char *)a3 = (char)(v1 / 256 | v1);
    return v1 & -256 | (int64_t)*(char *)-0x975836a024bc42a;
}

// Address range: 0x4843af - 0x4843c9
int64_t function_4843af(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4843af
    bool v1; // 0x4843af
    int64_t v2 = v1 ? 0xffffffff : 1; // 0x4843b1
    int64_t v3; // 0x4843af
    uint64_t v4 = v3 & v3;
    int64_t v5 = v4 & 0xffffffff; // 0x4843b7
    int64_t v6 = (int64_t)(*(int32_t *)v5 + (int32_t)(v2 + a1)); // 0x4843b9
    char * v7 = (char *)(v6 + 22); // 0x4843bb
    *v7 = *v7 ^ (char)a4;
    char * v8 = (char *)(v5 + 4 * v3); // 0x4843be
    *v8 = *v8 ^ (char)(v4 / 256);
    *(char *)((v1 ? -1 : 1) + v6) = __asm_insb((int16_t)a3);
    return v3 ^ 93;
}

// Address range: 0x4843ca - 0x4843d8
int64_t function_4843ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4843ca
    int64_t result; // 0x4843ca
    int32_t * v1 = (int32_t *)(result - 1); // 0x4843ca
    *v1 = -*v1;
    return result;
}

// Address range: 0x4843f2 - 0x484404
int64_t function_4843f2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4843f2
    int64_t result; // 0x4843f2
    bool v1; // 0x4843f2
    if (v1) {
        // 0x4843f4
        return result;
    }
    char * v2 = (char *)(a2 + 0x46ca45fc); // 0x4843fc
    *v2 = *v2 + (char)result;
    return result;
}

// Address range: 0x484470 - 0x484485
int64_t function_484470(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x484470
    int64_t v1; // 0x484470
    *(char *)a3 = (char)(v1 / 256) + (char)v1;
    float80_t v2; // 0x484470
    *(float64_t *)a2 = (float64_t)v2;
    char * v3 = (char *)(v1 + 8 * v1); // 0x484474
    *v3 = *v3 + (char)(a3 / 256);
    unsigned char v4 = (char)v1; // 0x484477
    bool v5 = v4 < -109 ? v4 < 147 : v4 < (char)a4;
    return v1 + 0x30cf00fc + (int64_t)v5 & 0xffffffff;
}

// Address range: 0x484491 - 0x484492
int64_t function_484491(void) {
    // 0x484491
    int64_t result; // 0x484491
    return result;
}

// Address range: 0x484496 - 0x484499
int64_t function_484496(int64_t a1) {
    // 0x484496
    int64_t result; // 0x484496
    return result;
}

// Address range: 0x4844de - 0x484649
int64_t function_4844de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4844de
    int64_t v1; // 0x4844de
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)(v2 | v1);
    uint64_t v3 = function_484491(); // 0x4844e7
    unsigned char v4 = (char)(v3 / 256); // 0x4844e9
    unsigned char v5 = *(char *)-0x15356378; // 0x4844e9
    char * v6 = (char *)(a4 + 0x401807d0 + 4 * a4); // 0x4844ef
    char v7 = *v6 + (char)v3 + (char)(v5 > v4); // 0x4844ef
    *v6 = v7;
    if (v7 < 0) {
        // 0x4844f8
        return 256 * (int64_t)(v4 - v5) | v3 & -0xff01;
    }
    uint64_t result = __asm_int3(); // 0x48455d
    if ((char)v1 >= (char)v1) {
        // 0x4845df
        *(char *)0xcde172f = *(char *)0xcde172f & 121;
        int64_t v8 = (int64_t)(-0x9cfbda3 * *(int32_t *)(a4 - 0x29b4a0dd)); // 0x4845e3
        *(int64_t *)(v8 - 8) = v8;
        *(char *)-0x7e93ffdc6f0cffd5 = (char)result;
        return result;
    }
    uint32_t v9 = (int32_t)a4 % 32; // 0x484562
    if (v9 != 0) {
        int64_t v10; // 0x4844de
        *(int32_t *)v10 = *(int32_t *)&v10 << v9;
    }
    int64_t result2 = result & -207; // 0x484560
    char * v11 = (char *)(a2 + 3); // 0x484564
    char v12 = *v11; // 0x484564
    char v13 = result / 256; // 0x484564
    char v14 = v12 + v13; // 0x484564
    *v11 = v14;
    if (v14 < 0 == ((v14 ^ v12) & (v14 ^ v13)) < 0) {
        // 0x48454b
        return result2;
    }
    // 0x484569
    return result2 + 0x5bffd54f & 0xffffff00 | result2 + 230 & 247;
}

// Address range: 0x484668 - 0x484669
int64_t function_484668(void) {
    // 0x484668
    int64_t result; // 0x484668
    return result;
}

// Address range: 0x484670 - 0x484802
int64_t function_484670(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = a4;
    int64_t v2; // 0x484670
    int64_t result = v2 & -0xff01 | (int64_t)"le"; // 0x484676
    int16_t v3 = a3; // 0x484678
    *(int32_t *)a1 = __asm_insd(v3);
    int32_t v4 = *(int32_t *)&v1 & (int32_t)v2; // 0x4846dc
    *(int32_t *)v1 = v4;
    if (v4 != 0 != v4 >= 0) {
        // 0x4846e3
        return result;
    }
    int64_t v5 = result + 0x8bd6e070; // 0x4846fa
    unsigned char v6 = (char)v5; // 0x4846ff
    __asm_out_136(v3, v6);
    unsigned char v7 = (int32_t)result > 0x74291f8f ? 115 : 114; // 0x484701
    unsigned char v8 = v6 - v7; // 0x484701
    int64_t v9 = v8; // 0x484701
    int64_t v10 = v5 & 0xffffff00; // 0x484701
    if (v1 == 0) {
        // 0x4846b8
        *(char *)a1 = __asm_insb(v3);
        return v10 | v9;
    }
    if ((int32_t)result > 0x74291f8f || v7 > v6 || v8 == 0) {
        // 0x484708
        return v10 | (int64_t)*(char *)(v2 + v9);
    }
    unsigned char v11 = llvm_ctpop_i8(v8); // 0x484701
    *(char *)0x2e862c351f1a2cea = v8;
    if (v11 % 2 != 0) {
        // 0x484771
        return v10 | (int64_t)(v8 + 103);
    }
    unsigned char v12 = llvm_ctpop_i8(v8 & -20); // 0x484760
    while (v12 % 2 == 0) {
        // continue -> 0x484758
    }
    // 0x484771
    *(char *)0x2e862c351f1a2cea = v8;
    // 0x484771
    return v10 | (int64_t)(v8 + 103);
}

// Address range: 0x484820 - 0x484821
int64_t function_484820(void) {
    // 0x484820
    int64_t result; // 0x484820
    return result;
}

// Address range: 0x484832 - 0x484839
int64_t function_484832(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x484832
    int64_t v1; // 0x484832
    int64_t v2 = v1;
    return v2 + a4 + (int64_t)((char)v2 < 112) & 0xffffffff;
}

// Address range: 0x484846 - 0x4848e8
int64_t function_484846(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4 - 1; // 0x484846
    int64_t v2; // 0x484846
    bool v3; // 0x484846
    if (v1 != 0 == v3) {
        // 0x4848aa
        return v2 & 0xffffffff ^ 230;
    }
    uint64_t v4 = 256 * v2 & v1;
    int64_t v5 = v4 & 0xff00 | v1 & -0xff01; // 0x484848
    int64_t v6 = (a2 + 61) % 256 | a2 & 0xffffff00; // 0x48484b
    *(int32_t *)a1 = (int32_t)v6;
    __asm_int(48);
    *(char *)a3 = (char)v2;
    uint64_t v7 = ((char)a2 < 195 ? 0x58d2a2da : 0x58d2a2d9) + v6; // 0x484853
    char v8 = *(char *)(v2 + v7 % 256); // 0x484858
    *(char *)-0x3447ca05 = *(char *)-0x3447ca05 ^ (char)(a3 / 256);
    int32_t v9 = __asm_in_133(75); // 0x4848de
    char v10 = __asm_in_137(-120); // 0x4848e0
    char v11 = __asm_insb((int16_t)a3); // 0x4848e3
    *(char *)(v7 & 0xffffff00 | (int64_t)(v8 - 21)) = v11;
    char * v12 = (char *)(v5 + 27 + 8 * v5); // 0x4848e4
    *v12 = *v12 + (char)(v4 / 256);
    return (int64_t)(v9 & -256) | (int64_t)v10;
}

// Address range: 0x4848f2 - 0x4848f9
int64_t function_4848f2(int64_t a1) {
    char v1 = *(char *)0x7fb73d18; // 0x4848f2
    int64_t result; // 0x4848f2
    *(char *)0x7fb73d18 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x4848f9 - 0x4848fa
int64_t function_4848f9(void) {
    // 0x4848f9
    int64_t result; // 0x4848f9
    return result;
}

// Address range: 0x484903 - 0x484916
int64_t function_484903(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    if (a4 != 1) {
        function_4848f9();
    }
    // 0x48490a
    return function_6e595ceb();
}

// Address range: 0x484949 - 0x484954
int64_t function_484949(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x484949
    int64_t v1; // 0x484949
    return v1 & 0xffffffff;
}

// Address range: 0x484954 - 0x48495d
int64_t function_484954(int64_t a1, int64_t a2, int64_t a3) {
    // 0x484954
    int64_t result; // 0x484954
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x48497a - 0x4849a6
int64_t function_48497a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x48497a
    bool v1; // 0x48497a
    unsigned char v2 = (char)v1 + (char)(a4 / 256) - *(char *)(a4 + 79); // 0x48497a
    int64_t result; // 0x48497a
    if (v2 == 0 || (256 * (int64_t)v2 || a4 & -0xff01) == 1) {
        // 0x484980
        return result;
    }
    int32_t v3 = *(int32_t *)(a5 - 79 + result); // 0x484997
    __asm_outsd(0x39b7, *(int32_t *)(int64_t)(0x799b0b40 * v3));
    return result;
}

// Address range: 0x4849b4 - 0x484a4f
int64_t function_4849b4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2; // 0x4849b4
    char * v3 = (char *)(v2 - 119); // 0x4849b4
    *v3 = *v3 ^ (char)(a3 / 256);
    int32_t result = *(int32_t *)(v2 + 106) & (int32_t)v2; // 0x4849b7
    if (result < 0) {
        uint32_t v4 = *(int32_t *)&v1; // 0x4849bc
        *(int32_t *)v1 = v4 / 64 | 0x4000000 * v4;
    }
    // 0x4849c1
    return result;
}

// Address range: 0x54b98c - 0x54b9a0
int64_t function_54b98c(void) {
    // 0x54b98c
    int64_t wstr; // 0x54b98c
    wmemcpy((int32_t *)(wstr & 0xffffffff), (int32_t *)wstr, (int32_t)wstr);
    return function_54b853();
}

// Address range: 0x54b9a0 - 0x54b9b4
int64_t function_54b9a0(int64_t result) {
    // 0x54b9a0
    __stack_chk_fail();
    return result;
}

// Address range: 0x54b9c0 - 0x54b9c4
int64_t function_54b9c0(int64_t result) {
    // 0x54b9c0
    return result;
}

// Address range: 0x54b9d0 - 0x54b9d4
int64_t function_54b9d0(int64_t result) {
    // 0x54b9d0
    return result;
}

// Address range: 0x54b9e0 - 0x54bac9
int64_t function_54b9e0(int64_t a1, int64_t c, uint64_t a3, uint64_t n2) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x54b9e3
    if (n2 == 0) {
        // 0x54b9e9
        return v1 >= a3 ? a3 : -1;
    }
    // 0x54ba00
    if (v1 <= a3) {
        // 0x54ba99
        return -1;
    }
    uint64_t v2 = v1 - a3; // 0x54ba28
    if (v2 < n2) {
        // 0x54ba99
        return -1;
    }
    int64_t v3 = 1 - n2; // 0x54ba44
    int64_t n = v2 + v3; // 0x54ba4a
    if (n == 0) {
        // 0x54ba99
        return -1;
    }
    int32_t * wstr = wmemchr((int32_t *)(4 * a3 + a1), (int32_t)c, (int32_t)n); // 0x54ba85
    int64_t result = -1; // 0x54ba90
    while (wstr != NULL) {
        int64_t v4 = (int64_t)wstr;
        if (wmemcmp(wstr, (int32_t *)c, (int32_t)n2) == 0) {
            // 0x54bab8
            result = v4 - a1 >> 2;
            return result;
        }
        uint64_t v5 = (a1 - 4 + 4 * v1 - v4) / 4; // 0x54ba74
        result = -1;
        if (v5 < n2) {
            // break -> 0x54ba99
            break;
        }
        int64_t n3 = v5 + v3; // 0x54ba7d
        result = -1;
        if (n3 == 0) {
            // break -> 0x54ba99
            break;
        }
        wstr = wmemchr((int32_t *)(v4 + 4), (int32_t)c, (int32_t)n3);
        result = -1;
    }
  lab_0x54ba99:
    // 0x54ba99
    return result;
}

// Address range: 0x54bad0 - 0x54badc
int64_t function_54bad0(int64_t a1, int64_t a2) {
    // 0x54bad0
    int64_t v1; // 0x54bad0
    return function_54b9e0(a1, a2, v1, *(int64_t *)(a2 + 8));
}

// Address range: 0x54bae0 - 0x54bb0a
int64_t function_54bae0(int64_t a1, int64_t wstr, int64_t a3) {
    // 0x54bae0
    return function_54b9e0(a1, wstr, a3, (int64_t)wcslen((int32_t *)wstr));
}

// Address range: 0x54bb10 - 0x54bb57
int64_t function_54bb10(int64_t a1, int64_t c, uint64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x54bb1d
    int64_t result = -1; // 0x54bb24
    if (v1 > a3) {
        int32_t * v2 = wmemchr((int32_t *)(4 * a3 + a1), (int32_t)c, (int32_t)(v1 - a3)); // 0x54bb37
        result = v2 != NULL ? (int64_t)v2 - a1 >> 2 : -1;
    }
    // 0x54bb4d
    return result;
}

// Address range: 0x54bb60 - 0x54bbed
int64_t function_54bb60(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x54bb71
    if (v1 < a4) {
        // 0x54bbc7
        return -1;
    }
    uint64_t v2 = v1 - a4; // 0x54bb7a
    int64_t result = v2 > a3 ? a3 : v2; // 0x54bb86
    if (a4 == 0) {
        // 0x54bbc7
        return result;
    }
    int64_t wstr = 4 * result + a1; // 0x54bb90
    int32_t * wstr2 = (int32_t *)a2; // 0x54bba9
    int32_t n = a4; // 0x54bba9
    int64_t v3 = result; // 0x54bbb0
    if (wmemcmp((int32_t *)wstr, wstr2, n) == 0) {
        // 0x54bbc7
        return result;
    }
    int64_t wstr3 = wstr; // 0x54bbb0
    int64_t result2 = -1; // 0x54bbbd
    while (v3 != 0) {
        // 0x54bbbf
        v3--;
        wstr3 -= 4;
        result2 = v3;
        if (wmemcmp((int32_t *)wstr3, wstr2, n) == 0) {
            // break -> 0x54bbc7
            break;
        }
        result2 = -1;
    }
    // 0x54bbc7
    return result2;
}

// Address range: 0x54bbf0 - 0x54bbfc
int64_t function_54bbf0(int64_t a1, int64_t a2) {
    // 0x54bbf0
    int64_t v1; // 0x54bbf0
    return function_54bb60(a1, a2, v1, *(int64_t *)(a2 + 8));
}

// Address range: 0x54bc00 - 0x54bc2a
int64_t function_54bc00(int64_t a1, int64_t wstr, int64_t a3) {
    // 0x54bc00
    return function_54bb60(a1, wstr, a3, (int64_t)wcslen((int32_t *)wstr));
}

// Address range: 0x54bc30 - 0x54bc75
int64_t function_54bc30(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x54bc30
    if (v1 == 0) {
        // 0x54bc73
        return -1;
    }
    uint64_t v2 = v1 - 1; // 0x54bc40
    int64_t result = v2 > a3 ? a3 : v2; // 0x54bc46
    if (result == -1) {
        // 0x54bc73
        return result;
    }
    int64_t v3 = 4 * result; // 0x54bc30
    int64_t v4 = result;
    int64_t result2 = v4; // 0x54bc68
    while (*(int32_t *)(v3 + a1) != (int32_t)a2) {
        int64_t v5 = v4 - 1; // 0x54bc5b
        v3 -= 4;
        result2 = v5;
        if (v4 == 0) {
            // break -> 0x54bc73
            break;
        }
        v4 = v5;
        result2 = v4;
    }
    // 0x54bc73
    return result2;
}

// Address range: 0x54bc80 - 0x54bcf2
int64_t function_54bc80(int64_t a1, int64_t wstr, uint64_t a3, int64_t n) {
    // 0x54bc80
    if (n == 0) {
        // 0x54bcd0
        return -1;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x54bc94
    if (v1 <= a3) {
        // 0x54bcd0
        return -1;
    }
    int64_t v2 = a3; // 0x54bcb0
    int32_t c = *(int32_t *)(4 * v2 + a1); // 0x54bcb9
    int64_t result = v2; // 0x54bccb
    while (wmemchr((int32_t *)wstr, c, (int32_t)n) == NULL) {
        // 0x54bcb0
        v2++;
        result = -1;
        if (v2 == v1) {
            // break -> 0x54bcd0
            break;
        }
        c = *(int32_t *)(4 * v2 + a1);
        result = v2;
    }
    // 0x54bcd0
    return result;
}

// Address range: 0x54bd00 - 0x54bd0c
int64_t function_54bd00(int64_t a1, int64_t a2) {
    // 0x54bd00
    int64_t v1; // 0x54bd00
    return function_54bc80(a1, a2, v1, *(int64_t *)(a2 + 8));
}

// Address range: 0x54bd10 - 0x54bd3a
int64_t function_54bd10(int64_t a1, int64_t wstr, int64_t a3) {
    // 0x54bd10
    return function_54bc80(a1, wstr, a3, (int64_t)wcslen((int32_t *)wstr));
}

// Address range: 0x54bd40 - 0x54bd45
int64_t function_54bd40(void) {
    // 0x54bd40
    int64_t v1; // 0x54bd40
    return function_54bb10(v1, v1, v1);
}

// Address range: 0x54bd50 - 0x54bdd5
int64_t function_54bd50(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x54bd5a
    if (a4 == 0 || v1 == 0) {
        // 0x54bda9
        return -1;
    }
    uint64_t v2 = v1 - 1; // 0x54bd68
    int64_t result = v2 > a3 ? a3 : v2; // 0x54bd78
    int32_t * wstr = (int32_t *)a2; // 0x54bd9f
    int32_t n = a4; // 0x54bd9f
    if (wmemchr(wstr, *(int32_t *)(4 * result + a1), n) != NULL) {
        // 0x54bda9
        return result;
    }
    int64_t v3 = result; // 0x54bda7
    int64_t result2 = -1; // 0x54bd8f
    while (v3 != 0) {
        // 0x54bd91
        v3--;
        result2 = v3;
        if (wmemchr(wstr, *(int32_t *)(4 * v3 + a1), n) != NULL) {
            // break -> 0x54bda9
            break;
        }
        result2 = -1;
    }
    // 0x54bda9
    return result2;
}

// Address range: 0x54bde0 - 0x54bdec
int64_t function_54bde0(int64_t a1, int64_t a2) {
    // 0x54bde0
    int64_t v1; // 0x54bde0
    return function_54bd50(a1, a2, v1, *(int64_t *)(a2 + 8));
}

// Address range: 0x54bdf0 - 0x54be1a
int64_t function_54bdf0(int64_t a1, int64_t wstr, int64_t a3) {
    // 0x54bdf0
    return function_54bd50(a1, wstr, a3, (int64_t)wcslen((int32_t *)wstr));
}

// Address range: 0x54be20 - 0x54be25
int64_t function_54be20(void) {
    // 0x54be20
    int64_t v1; // 0x54be20
    return function_54bc30(v1, v1, v1);
}

// Address range: 0x54be30 - 0x54beb0
int64_t function_54be30(int64_t a1, int64_t wstr, int64_t result, int64_t n) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x54be3f
    if (v1 <= result) {
        // 0x54be90
        return -1;
    }
    // 0x54be48
    if (n == 0) {
        // 0x54be90
        return result;
    }
    int64_t v2 = result; // 0x54be70
    int32_t c = *(int32_t *)(4 * v2 + a1); // 0x54be79
    int64_t result2 = v2; // 0x54be8b
    while (wmemchr((int32_t *)wstr, c, (int32_t)n) != NULL) {
        // 0x54be70
        v2++;
        result2 = -1;
        if (v2 == v1) {
            // break -> 0x54be90
            break;
        }
        c = *(int32_t *)(4 * v2 + a1);
        result2 = v2;
    }
    // 0x54be90
    return result2;
}

// Address range: 0x54beb0 - 0x54bebc
int64_t function_54beb0(int64_t a1, int64_t a2) {
    // 0x54beb0
    int64_t v1; // 0x54beb0
    return function_54be30(a1, a2, v1, *(int64_t *)(a2 + 8));
}

// Address range: 0x54bec0 - 0x54beea
int64_t function_54bec0(int64_t a1, int64_t wstr, int64_t a3) {
    // 0x54bec0
    return function_54be30(a1, wstr, a3, (int64_t)wcslen((int32_t *)wstr));
}

// Address range: 0x54bef0 - 0x54bf35
int64_t function_54bef0(int64_t a1, int64_t a2, int64_t result) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x54bef0
    if (v1 <= result) {
        // 0x54bf1e
        return -1;
    }
    int32_t v2 = a2; // 0x54bf03
    if (*(int32_t *)(4 * result + a1) != v2) {
        // 0x54bf1e
        return result;
    }
    int64_t v3 = result; // 0x54bf06
    v3++;
    int64_t result2 = -1; // 0x54bf1c
    while (v3 != v1) {
        // 0x54bf10
        result2 = v3;
        if (*(int32_t *)(4 * v3 + a1) != v2) {
            // break -> 0x54bf1e
            break;
        }
        v3++;
        result2 = -1;
    }
    // 0x54bf1e
    return result2;
}

// Address range: 0x54bf40 - 0x54bfc5
int64_t function_54bf40(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x54bf51
    if (v1 == 0) {
        // 0x54bf9e
        return -1;
    }
    uint64_t v2 = v1 - 1; // 0x54bf5a
    int64_t result = v2 > a3 ? a3 : v2; // 0x54bf69
    if (a4 == 0) {
        // 0x54bf9e
        return result;
    }
    int32_t * wstr = (int32_t *)a2; // 0x54bf83
    int32_t n = a4; // 0x54bf83
    if (wmemchr(wstr, *(int32_t *)(4 * result + a1), n) == NULL) {
        // 0x54bf9e
        return result;
    }
    int64_t v3 = result; // 0x54bf8b
    int64_t result2 = -1; // 0x54bf94
    while (v3 != 0) {
        // 0x54bf96
        v3--;
        result2 = v3;
        if (wmemchr(wstr, *(int32_t *)(4 * v3 + a1), n) == NULL) {
            // break -> 0x54bf9e
            break;
        }
        result2 = -1;
    }
    // 0x54bf9e
    return result2;
}

// Address range: 0x54bfd0 - 0x54bfdc
int64_t function_54bfd0(int64_t a1, int64_t a2) {
    // 0x54bfd0
    int64_t v1; // 0x54bfd0
    return function_54bf40(a1, a2, v1, *(int64_t *)(a2 + 8));
}

// Address range: 0x54bfe0 - 0x54c00a
int64_t function_54bfe0(int64_t a1, int64_t wstr, int64_t a3) {
    // 0x54bfe0
    return function_54bf40(a1, wstr, a3, (int64_t)wcslen((int32_t *)wstr));
}

// Address range: 0x54c010 - 0x54c050
int64_t function_54c010(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x54c010
    if (v1 == 0) {
        // 0x54c041
        return -1;
    }
    uint64_t v2 = v1 - 1; // 0x54c020
    int64_t result = v2 > a3 ? a3 : v2; // 0x54c029
    int32_t v3 = *(int32_t *)(4 * result + a1); // 0x54c03c
    if (v3 != (int32_t)a2) {
        // 0x54c041
        return result;
    }
    int64_t v4 = result; // 0x54c03f
    int64_t result2 = -1; // 0x54c037
    while (v4 != 0) {
        // 0x54c039
        v4--;
        result2 = v4;
        if (*(int32_t *)(4 * v4 + a1) != v3) {
            // break -> 0x54c041
            break;
        }
        result2 = -1;
    }
    // 0x54c041
    return result2;
}

// Address range: 0x54c050 - 0x54c0a1
int64_t function_54c050(int64_t wstr, int64_t wstr2) {
    uint64_t v1 = *(int64_t *)(wstr + 8); // 0x54c056
    uint64_t v2 = *(int64_t *)(wstr2 + 8); // 0x54c05a
    int64_t n = v1 < v2 ? v1 : v2; // 0x54c064
    if (n != 0) {
        int32_t result = wmemcmp((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n); // 0x54c073
        if (result != 0) {
            // 0x54c09a
            return result;
        }
    }
    uint64_t v3 = v1 - v2; // 0x54c07c
    int64_t result2 = 0x7fffffff; // 0x54c08b
    if (v3 <= 0x7fffffff) {
        int64_t v4 = v3 + 0x80000000; // 0x54c090
        result2 = v4 < 0 == ((v4 ^ v3) & (v3 ^ -0x8000000000000000)) < 0 ? v3 & 0xffffffff : 0x80000000;
    }
    // 0x54c09a
    return result2;
}

// Address range: 0x54c0b0 - 0x54c187
int64_t function_54c0b0(int64_t a1, uint64_t a2, uint64_t a3, int64_t wstr, uint64_t a5, uint64_t a6) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x54c0b6
    if (v1 < a2) {
        int64_t result = function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", a2, v1); // 0x54c138
        if (((int64_t)"basic_string::compare" < 0x6863696877282073 || (int64_t)"basic_string::compare" == 0x6863696877282073) ^ true) {
            // 0x54c0fa
            return result;
        }
        uint64_t v2 = *(int64_t *)(v1 + 8); // 0x54c153
        int64_t result2 = result; // 0x54c15a
        if (v2 >= a5) {
            uint64_t v3 = a2 < 0x6863696877282073 - (int64_t)"basic_string::compare" ? a2 : 0x6863696877282073 - (int64_t)"basic_string::compare"; // 0x54c162
            uint64_t v4 = v2 - a5; // 0x54c166
            uint64_t v5 = v4 > a6 ? a6 : v4; // 0x54c16f
            result2 = (v5 > v3 ? v3 : v5) != 0 ? result : 0x7fffffff;
        }
        // 0x54c0fa
        return result2;
    }
    uint64_t v6 = v1 - a2; // 0x54c0bf
    uint64_t v7 = *(int64_t *)(wstr + 8); // 0x54c0c2
    uint64_t v8 = v6 > a3 ? a3 : v6; // 0x54c0c9
    int64_t n = v8 < v7 ? v8 : v7; // 0x54c0d3
    if (n != 0) {
        int32_t result3 = wmemcmp((int32_t *)(4 * a2 + a1), (int32_t *)wstr, (int32_t)n); // 0x54c112
        if (result3 != 0) {
            // 0x54c11b
            return result3;
        }
    }
    uint64_t v9 = v8 - v7; // 0x54c0dc
    int64_t result4 = 0x7fffffff; // 0x54c0eb
    if (v9 <= 0x7fffffff) {
        int64_t v10 = v9 + 0x80000000; // 0x54c0f0
        result4 = v10 < 0 == ((v10 ^ v9) & (v9 ^ -0x8000000000000000)) < 0 ? v9 & 0xffffffff : 0x80000000;
    }
    // 0x54c0fa
    return result4;
}
