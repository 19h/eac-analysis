/*
 * Targeted RetDec C for native executable gap queue batch 654.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x386fa8-0x3871a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3871a8-0x3873a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3873a8-0x3875a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3875a8-0x3877a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3877a8-0x3879a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4523e3-0x4525e3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4525e3-0x4527e3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4529e3-0x452be3 rank=- name=- kind=- bytes=- uncovered=-
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
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
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

int64_t function_386fa8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3870b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_38720f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_387351(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3874be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_387601(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_387785(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4523e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4524d2(void);
int64_t function_4524ea(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4524fa(int64_t a1);
int64_t function_452549(void);
int64_t function_452561(void);
int64_t function_4525b7(void);
int64_t function_4525b9(void);
int64_t function_4525e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_452631(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7);
int64_t function_452777(int64_t a1);
int64_t function_452786(int64_t a1);
int64_t function_4527c9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_4529d0();
int64_t function_4529e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_452a32(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_452a8b(void);
int64_t function_452ab6(int64_t a1);
int64_t function_452af1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_7d4b2641();
int64_t function_cc59c();
int64_t function_ffffffff9e8bdc63();

// Address range: 0x386fa8 - 0x3870b0
int64_t function_386fa8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x386fa8
    int64_t v1; // 0x386fa8
    int64_t v2 = (int64_t)&v1; // 0x386fdf
    v1 = a3;
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x386ff7
    int64_t v4 = v2 - 8; // 0x386ff7
    int64_t * v5 = (int64_t *)v4; // 0x386ff7
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x386ffb
    *v6 = v3;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x387011
    *v7 = v4;
    int64_t * v8 = (int64_t *)(v2 - 32); // 0x387024
    *v8 = v3;
    *v7 = v3;
    v1 = v3;
    *v6 = a2;
    *v7 = *v6;
    *(int64_t *)(v2 + 24) = *(int64_t *)(v2 + 8);
    *v7 = v4;
    int64_t v9 = *v6; // 0x387083
    *v7 = v9;
    *v8 = v9;
    int64_t v10 = *v5; // 0x38709c
    *v6 = v10;
    *v7 = v10;
    int64_t v11; // 0x386fa8
    return function_cc59c(a1 - v11 & 0xffffffff, *v6, v11, v11, v11, v11, 0x37da62);
}

// Address range: 0x3870b0 - 0x38720f
int64_t function_3870b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3870b0
    int64_t v1; // bp-48, 0x3870b0
    int64_t v2 = (int64_t)&v1; // 0x3871bd
    v1 = a4;
    bool v3; // 0x3870b0
    *(int64_t *)(v2 - 8) = 0x4000 * (int64_t)v3 | 2048 * (int64_t)v3 | 1024 * (int64_t)v3 | 512 * (int64_t)v3 | 256 * (int64_t)v3 | 128 * (int64_t)v3 | 64 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3 | 2;
    int64_t v4 = v1; // 0x387202
    v1 = v2 + 16;
    int64_t v5; // 0x3870b0
    return function_cc59c(a1, v5, a3, v4, a5, a6, a3);
}

// Address range: 0x38720f - 0x387351
int64_t function_38720f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x38720f
    int64_t v1; // bp-32, 0x38720f
    int64_t v2 = (int64_t)&v1; // 0x3872ae
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x3872b6
    int64_t v4 = v2 - 8; // 0x3872b6
    int64_t * v5 = (int64_t *)v4; // 0x3872b6
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x3872ba
    int64_t v7 = v2 - 24; // 0x3872c6
    int64_t * v8 = (int64_t *)v7; // 0x3872c6
    *v6 = v2;
    *v8 = 0x21296339;
    *(int64_t *)(v2 - 32) = a6;
    v1 = *v6;
    *v8 = v7;
    *v6 = v3;
    *(int64_t *)(v2 + 24) = *v5;
    *v5 = v1;
    *v6 = v1;
    int64_t v9 = v2 + 8; // 0x38732a
    v1 = *(int64_t *)v9;
    *v5 = a4;
    *v6 = v4;
    *v5 = v9;
    int64_t v10; // 0x38720f
    return function_cc59c(a1, a2, a3, *v5, a5, v10, v1);
}

// Address range: 0x387351 - 0x3874be
int64_t function_387351(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x387351
    int64_t v1; // bp-56, 0x387351
    v1 = (int64_t)&v1 + 16;
    return function_cc59c(a1, a2, a3, a4, a5, a6, 0x5b1e160);
}

// Address range: 0x3874be - 0x387601
int64_t function_3874be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3874be
    int64_t v1; // 0x3874be
    return function_cc59c(a1, a2, a3, 0x2150876c, 0x288691fc, v1, a6);
}

// Address range: 0x387601 - 0x387785
int64_t function_387601(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x387601
    int64_t v1; // bp-48, 0x387601
    int64_t v2 = (int64_t)&v1; // 0x3876d2
    v1 = v2;
    return function_cc59c(a1, a2, a3, a4, a5, a6, v2);
}

// Address range: 0x387785 - 0x3878e4
int64_t function_387785(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6; // bp-40, 0x387826
    int64_t v2 = (int64_t)&v1; // 0x387862
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x38786a
    *v3 = 0x7c3f2c81;
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x38786f
    *v4 = 0x540009d;
    int64_t * v5 = (int64_t *)(v2 - 24); // 0x387875
    *v5 = a6;
    int64_t v6 = v2 + 8; // 0x38787b
    *(int64_t *)v6 = *v3;
    *v3 = a1;
    *v5 = 0x2c2505ec;
    *v4 = 0x37e9c6;
    *(int64_t *)(v2 + 24) = 0x37e9c6;
    *v4 = v6;
    *v5 = *v3;
    *v3 = v1;
    int64_t v7; // 0x387785
    return function_cc59c(*v3, a2, a3, a4, a5, v7, 310);
}

// Address range: 0x4523e3 - 0x4523f0
int64_t function_4523e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4523e3
    int64_t v1; // 0x4523e3
    bool v2; // 0x4523e3
    int64_t v3 = v1 + a2 + (int64_t)v2 & 0xffffffff; // 0x4523e3
    *(int64_t *)(v3 - 8) = a4;
    *(int64_t *)(v3 - 16) = a3;
    return v1 & -146;
}

// Address range: 0x4524d2 - 0x4524d7
int64_t function_4524d2(void) {
    // 0x4524d2
    return function_7d4b2641();
}

// Address range: 0x4524ea - 0x4524f3
int64_t function_4524ea(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4524ea
    return function_ffffffff9e8bdc63();
}

// Address range: 0x4524fa - 0x4524fd
int64_t function_4524fa(int64_t a1) {
    // 0x4524fa
    int64_t result; // 0x4524fa
    return result;
}

// Address range: 0x452549 - 0x45254a
int64_t function_452549(void) {
    // 0x452549
    int64_t result; // 0x452549
    return result;
}

// Address range: 0x452561 - 0x452564
int64_t function_452561(void) {
    // 0x452561
    int64_t result; // 0x452561
    return result;
}

// Address range: 0x4525b7 - 0x4525b9
int64_t function_4525b7(void) {
    // 0x4525b7
    int64_t result; // 0x4525b7
    return result;
}

// Address range: 0x4525b9 - 0x4525bb
int64_t function_4525b9(void) {
    // 0x4525b9
    return function_452549();
}

// Address range: 0x4525e1 - 0x45261a
int64_t function_4525e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4525e1
    int64_t v1; // 0x4525e1
    uint64_t v2 = v1;
    int64_t v3 = a2;
    int16_t v4 = a3; // 0x452606
    *(int32_t *)a1 = __asm_insd(v4);
    int64_t v5 = __asm_hlt(); // 0x452608
    char v6 = *(char *)&v3; // 0x452609
    int64_t result = (v5 + 108) % 256 | v5 & -256; // 0x45260b
    unsigned char v7 = (char)a4; // 0x452611
    unsigned char v8 = v7 + (char)a3; // 0x452611
    int32_t * v9 = (int32_t *)(256 * (int64_t)(v6 | (char)(v2 / 256)) | v2 & -0xff01); // 0x452613
    uint32_t v10 = *v9; // 0x452613
    int32_t v11 = v8 < v7; // 0x452613
    uint32_t v12 = (int32_t)(a4 & 0xffffff00 | (int64_t)v8) + v11; // 0x452613
    int32_t v13 = v10 - v12; // 0x452613
    *v9 = v13;
    __asm_outsd(v4, *(int32_t *)&v3);
    if (v13 == 0 || (v8 < v7 ? v12 != -1 || v10 < v13 - v11 : v10 < v12)) {
        // 0x4525ed
        __asm_out(75, (int32_t)result);
        return result;
    }
    // 0x45261a
    return result;
}

// Address range: 0x452631 - 0x452706
int64_t function_452631(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    int64_t v1 = a7;
    int64_t v2 = a6;
    int64_t v3; // 0x452631
    int64_t v4 = 256 * (4 * (int64_t)((a6 & 4) != 0) | (int64_t)(a6 % 2 != 0) | 16 * (int64_t)((a6 & 16) != 0) | 64 * (int64_t)((a6 & 64) != 0) | 128 * (int64_t)((char)a6 < 0)) | v3 & -0xff01 | 512; // 0x452632
    int32_t * v5 = (int32_t *)(v3 - 0x6991f949); // 0x452633
    int32_t v6 = *v5; // 0x452633
    int32_t v7 = v3; // 0x452633
    int32_t v8 = v6 - v7; // 0x452633
    *v5 = v8;
    int64_t v9; // 0x452631
    int64_t v10; // 0x452631
    int64_t v11; // 0x452631
    int64_t v12; // 0x452631
    int64_t * v13; // 0x452631
    if (((v8 ^ v6) & (v6 ^ v7)) < 0) {
        // 0x452631
        v9 = v11;
        v10 = v4;
        v12 = a3;
        v13 = &v1;
    } else {
        int64_t result = v4 & -256 | (v3 + 36) % 256; // 0x45263b
        char v14 = *(char *)(2 * a2 + a1); // 0x45263e
        if ((char)((char)v3 < 220) + (char)a3 + v14 >= 0) {
            int32_t * v15 = (int32_t *)(result + 0x796a47d1); // 0x45268f
            *v15 = *v15 | (int32_t)result;
            return result;
        }
        // 0x452643
        v2 = result;
        int32_t * v16 = (int32_t *)(a2 + 73); // 0x452644
        uint32_t v17 = *v16; // 0x452644
        uint32_t v18 = v17 + (int32_t)a2; // 0x452644
        *v16 = v18;
        uint64_t v19 = result - (v18 < v17 ? 0x169379b3 : 0x169379b2); // 0x452647
        int64_t v20 = v19 & 0xffffffff; // 0x452647
        *(char *)v11 = *(char *)&v11;
        char * v21 = (char *)(v20 + 0x7a3b78e0); // 0x45264f
        unsigned char v22 = *v21; // 0x45264f
        unsigned char v23 = (char)(v19 / 256); // 0x45264f
        *v21 = v22 - v23;
        char v24 = *(char *)(v11 - 0x38eb13b0); // 0x452655
        int64_t v25 = 16 * a1 & 0xfffffff0; // 0x45265b
        v11 = v25;
        v9 = v25;
        v10 = v20 ^ 0x39d70915;
        v12 = 256 * (int64_t)(v24 + (char)(a3 / 256) + (char)(v22 < v23));
        v13 = &v2;
    }
    int64_t v26 = (int64_t)v13;
    v11 = v9 & -0xff01 | (int64_t)L"\n2";
    int32_t v27 = *(int32_t *)((v26 & 0xfffffff8) + 0x1d460054); // 0x45266d
    int64_t v28 = (v26 + ((int64_t)L"\n2" >> 8)) % 256 | v26 & 0xffffff00; // 0x452674
    int64_t v29 = __asm_wait(); // 0x452676
    int64_t * v30 = (int64_t *)(v10 & 0xffffffff); // 0x452677
    int32_t v31 = *(int32_t *)(v28 + 0x1eef3feb); // 0x452678
    char * v32 = (char *)((int64_t)(v31 & (int32_t)v29) - 112); // 0x45267e
    char v33 = *v32 + (char)(v12 / 256); // 0x45267e
    *v32 = v33;
    __asm_wait();
    int64_t result2 = __asm_wait(); // 0x452682
    int64_t v34 = (int64_t)*(int32_t *)v28; // 0x452683
    int64_t v35 = -0x15a7fdd7 * v34; // 0x452683
    if (v33 < 0 == (v35 != -0x15a7fdd700000000 * v34 >> 32) != v33 != 0) {
        // 0x45268b
        return result2;
    }
    int64_t result3 = v11 & 0xffff0000 | (int64_t)(92 * v27 & 0xfffc); // 0x4526f7
    *v30 = 0x4702e62e;
    int64_t v36 = (a6 & (int64_t)&g1) != 0 ? -1 : 1; // 0x452701
    int64_t v37 = ((a6 & (int64_t)&g1) != 0 ? -4 : 4) + a1 + v36; // 0x452701
    __asm_out(58, (int32_t)result3);
    *(int32_t *)v37 = __asm_insd((int16_t)v35 & -256 | 69);
    int32_t * v38 = (int32_t *)(v37 + 8); // 0x4526c4
    *v38 = *v38 - (int32_t)*v30;
    return result3;
}

// Address range: 0x452777 - 0x45277c
int64_t function_452777(int64_t a1) {
    // 0x452777
    int64_t v1; // 0x452777
    int64_t v2 = v1;
    return (v2 + 174) % 256 | v2 & -256;
}

// Address range: 0x452786 - 0x452787
int64_t function_452786(int64_t a1) {
    // 0x452786
    int64_t result; // 0x452786
    return result;
}

// Address range: 0x4527c9 - 0x4527e2
int64_t function_4527c9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x4527c9
    int64_t result; // 0x4527c9
    bool v1; // 0x4527c9
    if (!v1) {
        // 0x452806
        return result;
    }
    // 0x4527cb
    *(char *)a1 = (char)a1 - (char)(a4 / 256);
    return result;
}

// Address range: 0x4529e3 - 0x452a1d
int64_t function_4529e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4529e3
    int64_t v1; // 0x4529e3
    int32_t * v2 = (int32_t *)(v1 + 21); // 0x4529e3
    uint32_t v3 = *v2; // 0x4529e3
    bool v4; // 0x4529e3
    int32_t v5 = v3 + (v4 ? 0x3af14f32 : 0x3af14f31); // 0x4529e3
    *v2 = v5;
    unsigned char v6 = (char)a4 % 32; // 0x4529f0
    bool v7 = v4 ? v5 <= v3 : v3 > 0xc50eb0ce; // 0x4529f0
    if (v6 != 0) {
        int64_t v8; // 0x4529e3
        unsigned char v9 = *(char *)&v8; // 0x4529f0
        char v10 = v9 >> v6 | v9 << 8 - v6; // 0x4529f0
        *(char *)v8 = v10;
        v7 = v10 < 0;
    }
    int64_t result = v1 + 89 & 0xffffffff; // 0x4529ec
    if (v5 < 0 != !v7) {
        // 0x4529f6
        return result;
    }
    int64_t v11 = result + 0x984a6de2; // 0x452a02
    *(char *)-0x678ea9579babfd4 = (char)v11;
    return v11 & 0xffffffff;
}

// Address range: 0x452a32 - 0x452a5d
int64_t function_452a32(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a7;
    int64_t v2; // 0x452a32
    unsigned char v3 = (char)v2;
    char * v4 = (char *)a1; // 0x452a32
    *v4 = v3 / 64 | 4 * v3;
    __asm_out(105, (int32_t)v2);
    int64_t v5 = __asm_sti(); // 0x452a37
    int32_t * v6 = (int32_t *)(4 * a2 + (int64_t)&v1); // 0x452a40
    int32_t v7 = a3; // 0x452a40
    *v6 = *v6 - v7 + (int32_t)((int32_t)v5 < 0x73a1451c);
    int64_t v8; // 0x452a32
    *v4 = *(char *)&v8;
    bool v9; // 0x452a32
    v8 = (v9 ? -1 : 1) + a2;
    int64_t v10; // 0x452a32
    int32_t v11 = *(int32_t *)&v10 + v7; // 0x452a45
    unsigned char v12 = llvm_ctpop_i8((char)v11); // 0x452a45
    *(int32_t *)a3 = v11;
    int64_t v13 = v5; // 0x452a48
    if (v12 % 2 != 0) {
        v13 = function_4529d0();
    }
    int64_t v14 = v13 & 0x244957e9 | 0xdbb6a816; // 0x452a4a
    return v14 + 4 & 251 | v14 & 0xffffff00;
}

// Address range: 0x452a8b - 0x452a8d
int64_t function_452a8b(void) {
    // 0x452a8b
    int64_t result; // 0x452a8b
    return result;
}

// Address range: 0x452ab6 - 0x452abf
int64_t function_452ab6(int64_t a1) {
    // 0x452ab6
    int64_t result; // 0x452ab6
    return result;
}

// Address range: 0x452af1 - 0x452bcd
int64_t function_452af1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t v3 = a6;
    int16_t v4 = a3; // 0x452af1
    __asm_outsd(v4, (int32_t)a2);
    *(int32_t *)a1 = __asm_insd(v4);
    uint32_t v5 = *(int32_t *)-0x4b174fc292170fde; // 0x452af5
    int64_t result = v5; // 0x452af5
    if ((v5 & 1024) != 0) {
        // 0x452b05
        __asm_outsb(v4, *(char *)&v2);
        int64_t v6; // 0x452af1
        *(int32_t *)v1 = *(int32_t *)&v1 ^ (int32_t)v6;
        return result;
    }
    int64_t v7 = v5 | (int32_t)(int64_t)&v3; // 0x452aff
    char * v8 = (char *)(a1 - 102); // 0x452b6e
    *v8 = *v8 ^ -82;
    unsigned char v9 = *(char *)&v2; // 0x452b72
    int64_t v10 = result & 0xffffff00; // 0x452b72
    *(int64_t *)v7 = a1;
    int64_t v11 = v7 - 8; // 0x452b75
    *(int64_t *)v11 = v7;
    __asm_out_134(v4, v9);
    *(char *)-0x4bac4aae8f94586b = v9;
    uint64_t v12 = (v10 | (int64_t)v9) + 88; // 0x452bbd
    int32_t * v13 = (int32_t *)(a1 + 94); // 0x452bbf
    *v13 = (int32_t)v11 + 8 + (int32_t)(v9 > 167) + *v13;
    *(char *)-0x59f364212be3581a = (char)v12;
    return v12 % 256 | v10;
}
