/*
 * Targeted RetDec C for native executable gap queue batch 1007.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1c2f7d-0x1c317d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c317d-0x1c337d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c337d-0x1c357d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c357d-0x1c377d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c377d-0x1c397d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c397d-0x1c3b7d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c3b7d-0x1c3d7d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c3d7d-0x1c3f7d rank=- name=- kind=- bytes=- uncovered=-
 *   0x26c624-0x26c824 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26c824-0x26ca24 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26ca24-0x26cc24 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26cc24-0x26ce24 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26d024-0x26d224 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26d424-0x26d624 rank=- name=- kind=- bytes=- uncovered=-
 *   0x485062-0x485262 rank=- name=- kind=- bytes=- uncovered=-
 *   0x485462-0x485662 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1c2f7d(int64_t a1, int64_t a2);
int64_t function_1c2fc9(int64_t a1);
int64_t function_1c2ffa(int64_t a1);
int64_t function_1c3035(void);
int64_t function_1c3099(int64_t a1, int64_t a2);
int64_t function_1c30af(int64_t a1);
int64_t function_1c3101(void);
int64_t function_1c313b(int64_t a1);
int64_t function_1c314d(int64_t a1);
int64_t function_1c317d(int64_t a1, int64_t a2);
int64_t function_1c3198(void);
int64_t function_1c325c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c3378(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1c33d2(void);
int64_t function_1c33d6(int64_t a1);
int64_t function_1c3403(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1c3491(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1c34e0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1c3523(void);
int64_t function_1c35a2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1c364a(int64_t a1);
int64_t function_1c3663(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1c36b9(void);
int64_t function_1c36d2(void);
int64_t function_1c3713(int64_t a1);
int64_t function_1c37b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c3830(int64_t a1, int64_t a2);
int64_t function_1c383a(void);
int64_t function_1c383e(void);
int64_t function_1c3881(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1c38d5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1c3944(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c3a0f(void);
int64_t function_1c3a36(int64_t a1);
int64_t function_1c3a6e(int64_t a1);
int64_t function_1c3acd(void);
int64_t function_1c3ad8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1c3b1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1c3b9c(void);
int64_t function_1c3b9e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1c3bcf(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1c3c1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c3c25(int64_t a1);
int64_t function_1c3c67(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c3c93(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1c3cdd(int64_t a1, uint64_t a2, int64_t a3);
int64_t function_1c3d21(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1c3d49(void);
int64_t function_1c3d4b(void);
int64_t function_1c3d53(void);
int64_t function_1c3d55(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c3da6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c3dad(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1c3ddf(int64_t a1);
int64_t function_1c3df9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c3ee6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1c3ef9(void);
int64_t function_1c3f2e(void);
int64_t function_26c624(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7);
int64_t function_26c705(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_26c850(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_26c977(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_26cb0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_26cc29(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_26cd6c(void);
int64_t function_26cdc3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26cfe0();
int64_t function_26d024(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26d07b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_26d0a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26d0ab(void);
int64_t function_26d0c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_26d424(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_26d451(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26d473(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26d4a8(void);
int64_t function_26d52e(int64_t a1);
int64_t function_26d540(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_26d5a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2703be();
int64_t function_481e1ee5();
int64_t function_485062(int64_t a1, int64_t a2);
int64_t function_48509a(int64_t a1);
int64_t function_4850bf(void);
int64_t function_4850ca(void);
int64_t function_48510b(int64_t a1, int64_t a2);
int64_t function_48510e(void);
int64_t function_485130(void);
int64_t function_485167(int64_t a1);
int64_t function_48517a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4851ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_485207(void);
int64_t function_48523d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_485243(int64_t a1, int64_t a2, int64_t a3);
int64_t function_485423();
int64_t function_485462(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48548e(int64_t a1);
int64_t function_485494(void);
int64_t function_485497(void);
int64_t function_4854a2(int64_t a1);
int64_t function_4854a4(void);
int64_t function_4854ab(int64_t a1);
int64_t function_48550d(void);
int64_t function_48556e(int64_t a1);
int64_t function_485573(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_485580(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4855a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_485616(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_68ff7554();
int64_t function_c9849();
int64_t function_f8beff1();
int64_t function_ffffffffa47341e2();
int64_t function_fffffffff375e92c();
int64_t function_fffffffffffffff0();
int64_t unknown_133bffd5();
int64_t unknown_13dd41ff();
int64_t unknown_14c247cc();
int64_t unknown_21a1456c();
int64_t unknown_229e3c2a();
int64_t unknown_239774c3();
int64_t unknown_2ae51e8();
int64_t unknown_2e274153();
int64_t unknown_3a28e9a1();
int64_t unknown_3a4fa8bd();
int64_t unknown_3ad59fb();
int64_t unknown_47ed2fdb();
int64_t unknown_48b64a86();
int64_t unknown_4d17f10e();
int64_t unknown_525cdcd8();
int64_t unknown_72ef80d();
int64_t unknown_744ba709();
int64_t unknown_79d2a028();
int64_t unknown_7b219e3b();
int64_t unknown_ffffffff852149f5();
int64_t unknown_ffffffff90dabefc();
int64_t unknown_ffffffffb23173ce();
int64_t unknown_ffffffffb3b5251d();
int64_t unknown_ffffffffb47c269d();
int64_t unknown_ffffffffbd1c6990();
int64_t unknown_ffffffffc1ca6b0d();
int64_t unknown_ffffffffc8278f26();
int64_t unknown_ffffffffd294c8ec();
int64_t unknown_ffffffffd326db00();
int64_t unknown_ffffffffe81d71e6();
int64_t unknown_fffffffff4a45e2c();
int64_t unknown_fffffffffef2fab4();

// Address range: 0x1c2f7d - 0x1c2f83
int64_t function_1c2f7d(int64_t a1, int64_t a2) {
    // 0x1c2f7d
    int64_t result; // 0x1c2f7d
    return result;
}

// Address range: 0x1c2fc9 - 0x1c2fcc
int64_t function_1c2fc9(int64_t a1) {
    // 0x1c2fc9
    int64_t v1; // 0x1c2fc9
    return (int64_t)&v1;
}

// Address range: 0x1c2ffa - 0x1c2ffd
int64_t function_1c2ffa(int64_t a1) {
    // 0x1c2ffa
    int64_t result; // 0x1c2ffa
    return result;
}

// Address range: 0x1c3035 - 0x1c3038
int64_t function_1c3035(void) {
    // 0x1c3035
    int64_t result; // 0x1c3035
    return result;
}

// Address range: 0x1c3099 - 0x1c30a3
int64_t function_1c3099(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0x6ffe6ae8); // 0x1c309b
    int64_t result; // 0x1c3099
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1c30af - 0x1c30b4
int64_t function_1c30af(int64_t a1) {
    // 0x1c30af
    int64_t result; // 0x1c30af
    return result;
}

// Address range: 0x1c3101 - 0x1c3114
int64_t function_1c3101(void) {
    // 0x1c3101
    unknown_ffffffffc1ca6b0d();
    int64_t result = (uint32_t)__readfsdword(0x1cbbec2ee801e8); // 0x1c3106
    char * v1 = (char *)result; // 0x1c3110
    *v1 = *v1 + 60;
    return result;
}

// Address range: 0x1c313b - 0x1c313c
int64_t function_1c313b(int64_t a1) {
    // 0x1c313b
    int64_t result; // 0x1c313b
    return result;
}

// Address range: 0x1c314d - 0x1c314e
int64_t function_1c314d(int64_t a1) {
    // 0x1c314d
    int64_t result; // 0x1c314d
    return result;
}

// Address range: 0x1c317d - 0x1c3180
int64_t function_1c317d(int64_t a1, int64_t a2) {
    // 0x1c317d
    int64_t result; // 0x1c317d
    *(char *)a1 = (char)(result | result);
    return result;
}

// Address range: 0x1c3198 - 0x1c3199
int64_t function_1c3198(void) {
    // 0x1c3198
    int64_t result; // 0x1c3198
    return result;
}

// Address range: 0x1c325c - 0x1c3266
int64_t function_1c325c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c325c
    int64_t v1; // 0x1c325c
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a1 + 1); // 0x1c325c
    *v3 = *v3 + (int32_t)a4;
    return (v2 + 2) % 256 | v2 & -256;
}

// Address range: 0x1c3378 - 0x1c33c8
int64_t function_1c3378(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1c3378
    int64_t v1; // 0x1c3378
    int64_t v2 = unknown_48b64a86(v1 & 0xffffffff); // 0x1c3380
    float80_t v3; // 0x1c3378
    if (v3 < v3) {
        // 0x1c33c3
        return v2 + 0x13daefb5 & 0xffffffff;
    }
    // 0x1c3389
    __asm_out((int16_t)a3, (char)v2);
    int32_t * v4 = (int32_t *)(a3 + 8); // 0x1c338e
    *v4 = *v4 + (int32_t)v1;
    int32_t * v5 = (int32_t *)(a4 + 0x771de7bc); // 0x1c3391
    *v5 = *v5 - (int32_t)a3;
    return __asm_int1();
}

// Address range: 0x1c33d2 - 0x1c33d5
int64_t function_1c33d2(void) {
    // 0x1c33d2
    int64_t result; // 0x1c33d2
    return result;
}

// Address range: 0x1c33d6 - 0x1c33d7
int64_t function_1c33d6(int64_t a1) {
    // 0x1c33d6
    int64_t result; // 0x1c33d6
    return result;
}

// Address range: 0x1c3403 - 0x1c3436
int64_t function_1c3403(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1c3403
    bool v1; // 0x1c3403
    int64_t v2 = (v1 ? -1 : 1) + a2; // 0x1c3403
    char * v3 = (char *)(v2 - 6); // 0x1c3404
    int64_t v4; // 0x1c3403
    *v3 = *v3 + (char)(v4 / 256);
    unknown_72ef80d();
    int64_t v5; // 0x1c3403
    *(int32_t *)v5 = *(int32_t *)&v5 + (int32_t)v2;
    __asm_in((int16_t)a3);
    uint64_t v6 = 256 * v5 + (a6 & 0xff00);
    int32_t * v7 = (int32_t *)(v5 - 13); // 0x1c3426
    *v7 = *v7 + (int32_t)v4;
    char * v8 = (char *)(v5 + 0x3adf849c); // 0x1c342a
    *v8 = *v8 + (char)(v6 / 256);
    return (a6 + 21) % 256 | a6 & 0xffff0000 | v6 & 0xff00;
}

// Address range: 0x1c3491 - 0x1c34a2
int64_t function_1c3491(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1c3491
    int64_t v1; // 0x1c3491
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)v1;
    int32_t v3 = *(int32_t *)-0x4661fec201a354d6; // 0x1c3494
    int64_t v4; // 0x1c3491
    *(char *)a4 = *(char *)&v4 + (char)v1;
    return (v3 + 24) % 256 | v3 & -256;
}

// Address range: 0x1c34e0 - 0x1c34f6
int64_t function_1c34e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1c34e0
    unknown_ffffffffe81d71e6();
    int32_t * v1 = (int32_t *)(a3 + 0x270aa065); // 0x1c34e5
    int64_t v2; // 0x1c34e0
    *v1 = *v1 + (int32_t)v2;
    unknown_ffffffff852149f5();
    return function_fffffffffffffff0();
}

// Address range: 0x1c3523 - 0x1c3528
int64_t function_1c3523(void) {
    // 0x1c3523
    return function_ffffffffa47341e2();
}

// Address range: 0x1c35a2 - 0x1c363c
int64_t function_1c35a2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1c35a2
    int64_t v1; // 0x1c35a2
    int64_t v2 = v1;
    int64_t v3 = v1 + 8; // 0x1c35ac
    char * v4 = (char *)(a4 + 0x6f4aff8 + 8 * a3); // 0x1c35ad
    *v4 = *v4 + 1;
    *(int32_t *)a1 = (int32_t)v2;
    bool v5; // 0x1c35a2
    int64_t v6 = (v5 ? -4 : 4) + a1; // 0x1c35b5
    int64_t v7 = (v2 + a4) % 256 | a4 & -0x10000 | 256 * v2 & 0xff00; // 0x1c35b8
    int32_t * v8 = (int32_t *)(v6 - 0x62101572); // 0x1c35ba
    *v8 = *v8 + (int32_t)v3;
    int64_t v9; // 0x1c35a2
    char v10 = *(char *)&v9; // 0x1c35c6
    int64_t v11 = 256 * (int64_t)(v10 + (char)(a3 / 256)) | a3 & -0xff01; // 0x1c35c6
    uint64_t v12 = unknown_ffffffffb23173ce(v6); // 0x1c35c8
    *(char *)v6 = __asm_insb((int16_t)v11);
    *(char *)(v6 + 0x7c012398) = (char)(v12 / 256);
    int64_t v13 = *(int64_t *)v3; // 0x1c35e2
    int32_t * v14 = (int32_t *)(v11 - 30); // 0x1c35e3
    *v14 = *v14 + (int32_t)a2;
    unknown_ffffffffd294c8ec(v13);
    int64_t v15 = __asm_sti(v13); // 0x1c35eb
    if (v7 == 0) {
        int32_t * v16 = (int32_t *)v13; // 0x1c3635
        *v16 = *v16 ^ (int32_t)v13;
        return v15 | 91;
    }
    int32_t * v17 = (int32_t *)(v7 + 0x6d44568d); // 0x1c35ee
    *v17 = *v17 + (int32_t)v11;
    return unknown_3ad59fb();
}

// Address range: 0x1c364a - 0x1c364b
int64_t function_1c364a(int64_t a1) {
    // 0x1c364a
    int64_t result; // 0x1c364a
    return result;
}

// Address range: 0x1c3663 - 0x1c3670
int64_t function_1c3663(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 0x8eb4bab); // 0x1c3663
    *v1 = *v1 + (char)(a3 / 256);
    uint32_t v2 = (int32_t)a4 % 32; // 0x1c3669
    if (v2 != 0) {
        int64_t v3; // 0x1c3663
        uint32_t v4 = *(int32_t *)&v3; // 0x1c3669
        *(int32_t *)v3 = v4 >> 32 - v2 | v4 << v2;
    }
    return function_481e1ee5();
}

// Address range: 0x1c36b9 - 0x1c36ba
int64_t function_1c36b9(void) {
    // 0x1c36b9
    int64_t result; // 0x1c36b9
    return result;
}

// Address range: 0x1c36d2 - 0x1c36d5
int64_t function_1c36d2(void) {
    // 0x1c36d2
    return function_1c36b9();
}

// Address range: 0x1c3713 - 0x1c3714
int64_t function_1c3713(int64_t a1) {
    // 0x1c3713
    int64_t result; // 0x1c3713
    return result;
}

// Address range: 0x1c37b6 - 0x1c37bc
int64_t function_1c37b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c37b6
    int64_t result; // 0x1c37b6
    int32_t * v1 = (int32_t *)(8 * result + a2); // 0x1c37b6
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x1c3830 - 0x1c3832
int64_t function_1c3830(int64_t a1, int64_t a2) {
    // 0x1c3830
    int64_t result; // 0x1c3830
    return result;
}

// Address range: 0x1c383a - 0x1c383d
int64_t function_1c383a(void) {
    // 0x1c383a
    int64_t result; // 0x1c383a
    return result;
}

// Address range: 0x1c383e - 0x1c383f
int64_t function_1c383e(void) {
    // 0x1c383e
    int64_t result; // 0x1c383e
    return result;
}

// Address range: 0x1c3881 - 0x1c389e
int64_t function_1c3881(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 + 0x62000729); // 0x1c3881
    *v1 = *v1 + (char)(a3 / 256);
    int32_t * v2 = (int32_t *)(a4 + 0x3aa9a300); // 0x1c3889
    *v2 = *v2 + (int32_t)a1;
    return function_1c383e();
}

// Address range: 0x1c38d5 - 0x1c392b
int64_t function_1c38d5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t result = unknown_47ed2fdb(); // 0x1c38d5
    int32_t * v2 = (int32_t *)result; // 0x1c38da
    uint32_t v3 = *v2; // 0x1c38da
    int64_t v4; // 0x1c38d5
    int32_t v5 = v4; // 0x1c38da
    uint32_t v6 = v3 + v5; // 0x1c38da
    *v2 = v6;
    char v7 = *(char *)&v1; // 0x1c38dc
    *(char *)a1 = v7 - (char)(a4 / 256) + (char)(v6 < v3);
    int64_t v8; // 0x1c38d5
    unsigned char v9 = *(char *)&v8; // 0x1c38de
    *(char *)a2 = v9 - 63;
    if (v9 > 62) {
        int32_t * v10 = (int32_t *)(result + 0x454e80a); // 0x1c38e5
        *v10 = *v10 + (int32_t)v4;
        return result;
    }
    int32_t * v11 = (int32_t *)(v1 - 0x6c82636c); // 0x1c391a
    *v11 = *v11 + v5;
    int64_t v12 = unknown_ffffffffc8278f26(); // 0x1c3920
    char * v13 = (char *)(v12 + 1); // 0x1c3925
    *v13 = *v13 | (char)v4;
    return (v12 + 216) % 256 | v12 & -256;
}

// Address range: 0x1c3944 - 0x1c3957
int64_t function_1c3944(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c3944
    int64_t v1; // 0x1c3944
    int32_t * v2 = (int32_t *)(v1 + 57); // 0x1c3949
    *v2 = *v2 | (int32_t)v1;
    int64_t result = unknown_2e274153(); // 0x1c394c
    uint32_t v3 = (int32_t)a4 % 32; // 0x1c3954
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)result; // 0x1c3954
        uint32_t v5 = *v4; // 0x1c3954
        *v4 = v5 >> 32 - v3 | v5 << v3;
    }
    return result;
}

// Address range: 0x1c3a0f - 0x1c3a10
int64_t function_1c3a0f(void) {
    // 0x1c3a0f
    int64_t result; // 0x1c3a0f
    return result;
}

// Address range: 0x1c3a36 - 0x1c3a39
int64_t function_1c3a36(int64_t a1) {
    // 0x1c3a36
    int64_t result; // 0x1c3a36
    return result;
}

// Address range: 0x1c3a6e - 0x1c3a73
int64_t function_1c3a6e(int64_t a1) {
    // 0x1c3a6e
    int64_t v1; // 0x1c3a6e
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x1c3acd - 0x1c3ace
int64_t function_1c3acd(void) {
    // 0x1c3acd
    int64_t result; // 0x1c3acd
    return result;
}

// Address range: 0x1c3ad8 - 0x1c3b09
int64_t function_1c3ad8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a2 - 41); // 0x1c3ad8
    int64_t v3; // 0x1c3ad8
    *v2 = *v2 + (int32_t)v3;
    int16_t v4 = a3; // 0x1c3ae0
    __asm_in_133(v4);
    uint64_t v5 = unknown_2ae51e8(); // 0x1c3ae2
    char v6 = *(char *)(v3 + (8 * a4 & 0x7fffffff8)); // 0x1c3aef
    int32_t v7 = *(int32_t *)((256 * (int64_t)((char)(a4 / 256) - v6) | a4 & 0xffff00ff) - 0x5efaf70b); // 0x1c3af2
    int32_t v8 = a1; // 0x1c3af2
    __asm_outsb(v4, *(char *)&v1);
    int64_t v9 = unknown_ffffffffd326db00() & -256 | (int64_t)__asm_in(v4); // 0x1c3b00
    if (((v7 - v8 ^ v7) & (v7 ^ v8)) >= 0) {
        v9 = function_1c3acd();
    }
    int64_t v10 = v9;
    return (v10 + v5 / 256) % 256 | v10 & -256;
}

// Address range: 0x1c3b1d - 0x1c3b2e
int64_t function_1c3b1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1c3b1d
    return unknown_fffffffff4a45e2c(a1, a2, a3, a4, a5);
}

// Address range: 0x1c3b9c - 0x1c3b9e
int64_t function_1c3b9c(void) {
    // 0x1c3b9c
    int64_t v1; // 0x1c3b9c
    return function_1c3c1b(v1, v1, v1, v1);
}

// Address range: 0x1c3b9e - 0x1c3ba7
int64_t function_1c3b9e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1c3b9e
    int64_t v1; // 0x1c3b9e
    int64_t v2 = v1;
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)a2;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x1c3bcf - 0x1c3bf9
int64_t function_1c3bcf(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = unknown_133bffd5(); // 0x1c3bcf
    char * v2 = (char *)(v1 + 10); // 0x1c3bd4
    *v2 = *v2 + (char)(a4 / 256);
    __asm_out_134(19, (int32_t)v1);
    char * v3 = (char *)(a3 - 0x6bfe1743); // 0x1c3bdb
    *v3 = *v3 + (char)v1;
    uint64_t v4 = v1 + 109; // 0x1c3be3
    __asm_out_135(-54, (char)v4);
    *(char *)(a4 + 36) = (char)a3;
    return (v4 % 256 | v1 & 0xffffff00) ^ 0x5501e89c;
}

// Address range: 0x1c3c1b - 0x1c3c20
int64_t function_1c3c1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c3c1b
    int64_t v1; // 0x1c3c1b
    int32_t * v2 = (int32_t *)(v1 + 95);
    *v2 = *v2 + (int32_t)v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x1c3c1e
    int64_t result; // 0x1c3c1b
    if (v3 != 0) {
        uint32_t v4 = *(int32_t *)&result; // 0x1c3c1e
        *(int32_t *)result = v4 >> 32 - v3 | v4 << v3;
    }
    return result;
}

// Address range: 0x1c3c25 - 0x1c3c36
int64_t function_1c3c25(int64_t a1) {
    // 0x1c3c25
    int64_t result; // 0x1c3c25
    return result;
}

// Address range: 0x1c3c67 - 0x1c3c7b
int64_t function_1c3c67(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c3c67
    int64_t v1; // 0x1c3c67
    int64_t result = v1;
    uint64_t v2 = a4 - 1; // 0x1c3c6e
    bool v3; // 0x1c3c67
    if (v2 == 0 || v3) {
        // 0x1c3c70
        return result;
    }
    // 0x1c3c73
    *(char *)result = (char)(result ^ v2 / 256);
    return result;
}

// Address range: 0x1c3c93 - 0x1c3cdd
int64_t function_1c3c93(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4 - 1; // 0x1c3c9b
    if (v1 != 0 == (int32_t)a1 == -0x3b3927ff) {
        // 0x1c3d1b
        return a1 & 0xffffffff;
    }
    // 0x1c3c9d
    int64_t v2; // 0x1c3c93
    int64_t v3 = v2 & 0xffffffff; // 0x1c3c93
    int32_t v4 = v1;
    uint64_t v5 = v2 & 0xffffffff | 0x100000000 * a3; // 0x1c3ca1
    uint64_t v6 = (int64_t)*(int32_t *)(v3 + 0x3a8bd3a9); // 0x1c3ca1
    uint64_t v7 = v5 / v6; // 0x1c3ca1
    uint64_t v8 = v5 % v6; // 0x1c3ca1
    int64_t v9; // 0x1c3c93
    uint64_t v10 = v7 ^ v9;
    int64_t v11 = (int64_t)(*(int32_t *)(v7 & 0xffffffff) + (int32_t)v7); // 0x1c3ca9
    *(char *)0x764e33b2 = *(char *)0x764e33b2 + (char)(v10 / 256);
    int32_t * v12 = (int32_t *)(v11 - 8); // 0x1c3cb1
    int32_t v13 = *v12 & v4; // 0x1c3cb1
    *v12 = v13;
    v9 = v10 & 0xffffffff;
    while (v13 == 0) {
        // 0x1c3ca1
        v5 = v11 | 0x100000000 * v8;
        v6 = (int64_t)*(int32_t *)(v3 + 0x3a8bd3a9);
        v7 = v5 / v6;
        v8 = v5 % v6;
        v10 = v7 ^ v9;
        v11 = (int64_t)(*(int32_t *)(v7 & 0xffffffff) + (int32_t)v7);
        *(char *)0x764e33b2 = *(char *)0x764e33b2 + (char)(v10 / 256);
        v12 = (int32_t *)(v11 - 8);
        v13 = *v12 & v4;
        *v12 = v13;
        v9 = v10 & 0xffffffff;
    }
    int64_t result = v3 & v2;
    int32_t * v14 = (int32_t *)(v8 - 0x7bd638d8); // 0x1c3cbc
    int32_t v15 = v10; // 0x1c3cbc
    *v14 = *v14 + v15;
    int32_t * v16 = (int32_t *)(v3 - 0x6ffec297); // 0x1c3cc9
    *v16 = *v16 + v4;
    char v17 = *(char *)(result - 24); // 0x1c3cd5
    int32_t * v18 = (int32_t *)((256 * (int64_t)(v17 | (char)(v8 / 256)) | v8 & 0xffff00ff) - 115); // 0x1c3cd8
    *v18 = *v18 + v15;
    return result;
}

// Address range: 0x1c3cdd - 0x1c3d1b
int64_t function_1c3cdd(int64_t a1, uint64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 108); // 0x1c3ce1
    int64_t v2; // 0x1c3cdd
    *v1 = *v1 + (int32_t)v2;
    int64_t v3 = v2 & -256 | (int64_t)__asm_in((int16_t)a3); // 0x1c3ce8
    if (a2 % 2 == 0) {
        v3 = __asm_int3();
    }
    int64_t v4 = v3 & -0xff01 | (int64_t)&g2; // 0x1c3cef
    int32_t * v5 = (int32_t *)(v2 - 37); // 0x1c3cf3
    *v5 = *v5 + (int32_t)(*(char *)v4 > 88) - (int32_t)v4;
    int64_t v6 = unknown_ffffffff90dabefc(); // 0x1c3cf6
    int64_t v7 = unknown_744ba709(); // 0x1c3d03
    *(char *)0x5f2d801e80a36a1 = (char)v7;
    int64_t v8 = *(int32_t *)(v6 + 1) > -1 - (int32_t)v6 ? 235 : 234; // 0x1c3d12
    unsigned char v9 = *(char *)-0x16ec56dd; // 0x1c3d14
    *(char *)-0x16ec56dd = v9 / 128 | 2 * v9;
    return (v7 - v8) % 256 | v7 & -256;
}

// Address range: 0x1c3d21 - 0x1c3d42
int64_t function_1c3d21(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v2 = unknown_79d2a028(); // 0x1c3d22
    char v3 = __asm_in_136(-80); // 0x1c3d28
    *(int32_t *)a4 = *(int32_t *)&v1 + (int32_t)a3;
    int64_t v4 = llvm_bswap_i32((int32_t)a5); // 0x1c3d32
    int64_t v5 = (v2 | (int64_t)v3) & -256 | (int64_t)__asm_in_136(73); // 0x1c3d34
    unsigned char v6 = (char)a4 % 32; // 0x1c3d38
    if (v6 != 0) {
        char * v7 = (char *)(v5 + 8 * v4); // 0x1c3d38
        *v7 = *v7 << v6;
    }
    *(char *)a2 = (char)(v1 / 256);
    return v5 + v4 & 0xffffffff;
}

// Address range: 0x1c3d49 - 0x1c3d4a
int64_t function_1c3d49(void) {
    // 0x1c3d49
    return __asm_int3();
}

// Address range: 0x1c3d4b - 0x1c3d53
int64_t function_1c3d4b(void) {
    // 0x1c3d4b
    int64_t v1; // 0x1c3d4b
    int32_t * v2 = (int32_t *)(v1 - 117); // 0x1c3d4f
    *v2 = *v2 + (int32_t)v1;
    return v1 & -24;
}

// Address range: 0x1c3d53 - 0x1c3d55
int64_t function_1c3d53(void) {
    // 0x1c3d53
    int64_t v1; // 0x1c3d53
    return function_1c3da6(v1, v1, v1, v1);
}

// Address range: 0x1c3d55 - 0x1c3d77
int64_t function_1c3d55(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c3d55
    int64_t v1; // 0x1c3d55
    *(char *)a1 = (char)v1;
    bool v2; // 0x1c3d55
    int64_t v3 = v2 ? -1 : 1; // 0x1c3d63
    int64_t v4 = v3 + a2; // 0x1c3d63
    int32_t v5 = v4; // 0x1c3d64
    int64_t v6; // 0x1c3d55
    *(int32_t *)a3 = *(int32_t *)&v6 & v5;
    unknown_21a1456c(v3 + a1, v4);
    int64_t result = __asm_hlt(); // 0x1c3d6d
    int32_t * v7 = (int32_t *)(v1 + 7); // 0x1c3d70
    *v7 = *v7 + v5;
    return result;
}

// Address range: 0x1c3da6 - 0x1c3dab
int64_t function_1c3da6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c3da6
    int64_t v1; // 0x1c3da6
    int64_t v2 = v1;
    int16_t v3 = a3; // 0x1c3da6
    __asm_outsb(v3, (char)v1);
    unsigned char v4 = (char)a4 % 32; // 0x1c3da7
    int64_t v5; // 0x1c3da6
    if (v4 != 0) {
        v5 = v2 & -256 | (int64_t)((char)v2 << v4);
    }
    *(char *)a1 = __asm_insb(v3);
    return v5 & 0xffffffff;
}

// Address range: 0x1c3dad - 0x1c3dd7
int64_t function_1c3dad(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_fffffffffef2fab4(); // 0x1c3dae
    int64_t v2; // 0x1c3dad
    char * v3 = (char *)(4 * v2 - 0x61b6e71 + v2); // 0x1c3db4
    unsigned char v4 = *v3; // 0x1c3db4
    *v3 = (char)(v2 / 256);
    int64_t result = unknown_239774c3(); // 0x1c3dbd
    int64_t v5; // 0x1c3dad
    int32_t v6 = *(int32_t *)&v5; // 0x1c3dc2
    *(int32_t *)a1 = v6 + (int32_t)(256 * (int64_t)v4 | v2 & 0xffff00ff);
    int32_t * v7 = (int32_t *)(a1 - 0x57fe17c2); // 0x1c3dc9
    *v7 = *v7 + (int32_t)v1;
    return result;
}

// Address range: 0x1c3ddf - 0x1c3de0
int64_t function_1c3ddf(int64_t a1) {
    // 0x1c3ddf
    int64_t result; // 0x1c3ddf
    return result;
}

// Address range: 0x1c3df9 - 0x1c3ed5
int64_t function_1c3df9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    unknown_13dd41ff();
    int64_t v2; // 0x1c3df9
    char * v3 = (char *)(v2 - 82 + 4 * v2); // 0x1c3dfe
    *v3 = *v3 + (char)v2;
    int64_t v4 = unknown_4d17f10e(); // 0x1c3e08
    __asm_out_134(-61, (int32_t)v4);
    int32_t * v5 = (int32_t *)(v2 + 0x1856b5e1); // 0x1c3e11
    *v5 = *v5 + (int32_t)((v4 + 99) % 256 | v4 & 0xffffff00);
    int64_t v6 = unknown_ffffffffb3b5251d() & 0xffffffff; // 0x1c3e1c
    *(char *)a3 = (char)a4;
    int64_t v7 = unknown_229e3c2a(); // 0x1c3e24
    unsigned char v8 = *(char *)v6; // 0x1c3e29
    uint64_t v9 = v6 + 1; // 0x1c3e29
    *(int32_t *)-0x7596cbfaf5746bf6 = (int32_t)(v7 & 0xffffff00 | (int64_t)v8);
    int64_t v10 = unknown_7b219e3b(); // 0x1c3e35
    int32_t * v11 = (int32_t *)v9; // 0x1c3e3a
    __asm_outsd((int16_t)a3, *v11);
    int64_t v12; // 0x1c3df9
    uint32_t v13 = *(int32_t *)&v12 & (int32_t)v10; // 0x1c3e3b
    int64_t v14 = v13; // 0x1c3e3b
    int64_t v15 = (a2 & 0xffffffff) + 8; // 0x1c3e3e
    int64_t v16 = (v15 ^ a1) & 0xffffffff; // 0x1c3e3f
    int64_t v17 = v15;
    int3_t v18; // 0x1c3df9
    int3_t v19 = v18;
    float80_t v20 = __frontend_reg_load_fpr(v19); // 0x1c3e42
    float32_t v21 = *(float32_t *)(8 * v2 + v14); // 0x1c3e42
    __frontend_reg_store_fpr(v19, v20 + (float80_t)v21);
    v16 = v16 + v2 & 0xffffffff;
    int64_t * v22 = (int64_t *)v17;
    uint64_t v23 = *v22; // 0x1c3e47
    __asm_outsd((int16_t)v1, *v11);
    v18 = v19 + 1;
    int64_t v24 = v17 + 8; // 0x1c3e49
    while ((v23 & 65) == 0) {
        // 0x1c3e42
        v17 = v24;
        v19 = v18;
        v20 = __frontend_reg_load_fpr(v19);
        v21 = *(float32_t *)(8 * v2 + v14);
        __frontend_reg_store_fpr(v19, v20 + (float80_t)v21);
        v16 = v16 + v2 & 0xffffffff;
        v22 = (int64_t *)v17;
        v23 = *v22;
        __asm_outsd((int16_t)v1, *v11);
        v18 = v19 + 1;
        v24 = v17 + 8;
    }
    uint64_t v25 = v2 + 0xfffffff6; // 0x1c3e21
    if ((v23 & 64) == 0) {
        // 0x1c3e4d
        __asm_out_134(19, v13);
        int64_t v26 = (char)v1 > (char)(v25 / 256) ? (int64_t)((int32_t)&g1 + 1) : (int64_t)(int32_t)&g1; // 0x1c3e51
        *v22 = v16;
        return v14 - v26 & 0xffffffff;
    }
    int64_t v27 = v25 & 0xffffffff; // 0x1c3e21
    uint64_t v28 = v9 / 256 + v14 + (int64_t)(v23 % 2 != 0); // 0x1c3e79
    int64_t v29 = v14 & 0xffffff00; // 0x1c3e79
    int64_t v30 = v28 % 256 | v29; // 0x1c3e79
    int32_t * v31 = (int32_t *)(v27 + 2 * v2); // 0x1c3e7b
    int32_t v32 = v30; // 0x1c3e7b
    *v31 = *v31 + v32;
    *(int32_t *)v16 = v32;
    char * v33 = (char *)v30; // 0x1c3e7f
    char v34 = v28; // 0x1c3e7f
    *v33 = *v33 + v34;
    char * v35 = (char *)v27; // 0x1c3e81
    unsigned char v36 = *v35; // 0x1c3e81
    unsigned char v37 = (char)v25; // 0x1c3e81
    unsigned char v38 = v36 + v37; // 0x1c3e81
    *v35 = v38;
    *v33 = *v33 + v34 + (char)(v38 < v36);
    char * v39 = (char *)(v6 + 2); // 0x1c3e85
    *v39 = *v39 + (char)v1;
    __asm_outsd((int16_t)v1, *v11);
    *v22 = 0x23fb9e00;
    int64_t v40 = v2 + 0x570a99f4; // 0x1c3e91
    __frontend_reg_store_fpr(v19, (float80_t)*(float64_t *)(v27 + 0x1e807));
    if ((int32_t)v2 >= -0x570a99f3) {
        // 0x1c3e9e
        return v40 & 0xffffffff;
    }
    int64_t v41 = v1 & 0xff00 | v9; // 0x1c3e8f
    int32_t * v42 = (int32_t *)(v27 + 0x3a724900); // 0x1c3ea7
    uint32_t v43 = *v42; // 0x1c3ea7
    *v42 = v43 / 2 | 0x80000000 * (int32_t)((char)v40 < v37);
    int32_t v44 = *(int32_t *)(v41 - 39); // 0x1c3ead
    uint32_t v45 = v44 + (int32_t)v9 + (int32_t)(v43 % 2 != 0); // 0x1c3ead
    *(char *)0x3ab80dbc = *(char *)0x3ab80dbc + (char)(v25 / 256);
    *(int32_t *)0xff7d017 = *(int32_t *)0xff7d017 ^ v45;
    char v46 = __asm_in_136(29); // 0x1c3ec6
    uint32_t v47 = *(int32_t *)&v1; // 0x1c3ec8
    *(int64_t *)(v17 - 8) = (int64_t)v45;
    return (int64_t)v46 & -256 | v29 | (int64_t)(v46 - (char)(v47 > (int32_t)v41));
}

// Address range: 0x1c3ee6 - 0x1c3ef2
int64_t function_1c3ee6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1c3ee6
    int64_t result; // 0x1c3ee6
    int32_t * v1 = (int32_t *)(result + 0x242d081d); // 0x1c3ee6
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1c3ef9 - 0x1c3f00
int64_t function_1c3ef9(void) {
    // 0x1c3ef9
    int64_t result; // 0x1c3ef9
    return result;
}

// Address range: 0x1c3f2e - 0x1c3f31
int64_t function_1c3f2e(void) {
    // 0x1c3f2e
    int64_t result; // 0x1c3f2e
    return result;
}

// Address range: 0x26c624 - 0x26c705
int64_t function_26c624(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7) {
    int64_t v1 = a4 - 1; // 0x26c624
    int64_t result; // 0x26c624
    bool v2; // 0x26c624
    if (v1 != 0 != v2) {
        // 0x26c626
        return result;
    }
    int64_t v3 = a1; // bp-8, 0x26c6ec
    int64_t result2 = function_c9849(a1, a2, a6, (int32_t)v1, (int32_t)a5, result, 0x100000000 * (int64_t)&v3 + 0x1800000000 >> 32); // 0x26c700
    return result2;
}

// Address range: 0x26c705 - 0x26c850
int64_t function_26c705(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x26c705
    int64_t v1; // bp-48, 0x26c705
    v1 = (int64_t)&v1;
    int64_t v2; // bp-32, 0x26c705
    int64_t v3 = (int64_t)&v2; // 0x26c807
    int64_t * v4 = (int64_t *)(v3 + 8); // 0x26c820
    *v4 = a1;
    *(int64_t *)(v3 - 8) = 0x26aa43;
    int64_t v5 = *v4; // 0x26c83f
    *v4 = v3 + 24 ^ a1 ^ v5;
    int64_t v6; // 0x26c705
    return function_c9849(v5, a2, (int32_t)a3, (int32_t)a4, (int32_t)a5, v6, a6);
}

// Address range: 0x26c850 - 0x26c977
int64_t function_26c850(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x26c850
    return function_c9849(a1, a2, (int32_t)a3, (int32_t)a4, (int32_t)a5, 0x4b0ac728, 0xc923f3f);
}

// Address range: 0x26c977 - 0x26cb0a
int64_t function_26c977(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x26c977
    int64_t v1; // bp-24, 0x26c977
    int64_t v2 = (int64_t)&v1; // 0x26c9bc
    v1 = 0x26b048;
    int64_t v3 = v2 - 8; // 0x26c9d3
    int64_t v4 = v2 - 16; // 0x26c9d8
    int64_t * v5 = (int64_t *)v4; // 0x26c9e8
    *v5 = a5;
    int64_t v6 = *v5; // 0x26c9f7
    *(int64_t *)v3 = 0x4d4565b3;
    *v5 = 0x284d9c2e;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x26ca06
    int64_t * v8 = (int64_t *)(v2 - 32); // 0x26ca0b
    int64_t v9 = *(int64_t *)(v2 + 24); // 0x26ca16
    *v5 = v9;
    *v7 = v9;
    *v8 = a3;
    int64_t * v10 = (int64_t *)(v2 - 40); // 0x26ca4c
    int64_t v11 = *v8; // 0x26ca60
    int64_t v12 = *v7; // 0x26ca61
    *v7 = v3;
    *v7 = v1;
    *v8 = a4;
    *v10 = v12;
    int64_t * v13 = (int64_t *)(v2 - 48); // 0x26ca97
    *v13 = v12;
    *v5 = *v10;
    int64_t v14 = *v8; // 0x26cab5
    *v10 = 0x4b82eaf2;
    *v13 = v1;
    v1 = *v8;
    int64_t v15 = *v7; // 0x26cacd
    *v8 = v15;
    *v10 = v15;
    *v7 = *v5;
    *v8 = v4;
    int64_t v16; // 0x26c977
    return function_c9849(a1, a2, (int32_t)v11, (int32_t)v14, (int32_t)v6, v16, 310);
}

// Address range: 0x26cb0a - 0x26cc29
int64_t function_26cb0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x26cb0a
    int64_t v1; // 0x26cb0a
    return function_c9849(a1, a2, 0x26b274, (int32_t)a4, (int32_t)a5, a6, v1);
}

// Address range: 0x26cc29 - 0x26cd6c
int64_t function_26cc29(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4; // bp-40, 0x26cc88
    int64_t v2 = (int64_t)&v1; // 0x26cd3c
    int64_t v3 = v2 + 8; // 0x26cd44
    v1 = *(int64_t *)v3;
    *(int64_t *)(v2 - 8) = v3;
    return function_c9849(a1, a2, (int32_t)a3, (int32_t)a4, (int32_t)a5, a6, 0x266b01);
}

// Address range: 0x26cd6c - 0x26cd71
int64_t function_26cd6c(void) {
    // 0x26cd6c
    return function_2703be();
}

// Address range: 0x26cdc3 - 0x26cdd3
int64_t function_26cdc3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x26cdc3
    int64_t v1; // 0x26cdc3
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a2 - 64 + v1); // 0x26cdc5
    *v3 = *v3 + (int32_t)a3;
    return v2 / 2 % 128 | v2 & -256;
}

// Address range: 0x26d024 - 0x26d039
int64_t function_26d024(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x26d024
    int64_t v1; // 0x26d024
    int32_t * v2 = (int32_t *)(v1 + 0x3701e817); // 0x26d024
    *v2 = *v2 + (int32_t)v1;
    int64_t v3; // 0x26d024
    *(char *)a3 = *(char *)&v3 | (char)(v1 / 256);
    int32_t * v4 = (int32_t *)(v1 - 98); // 0x26d031
    int32_t v5 = *v4 + (int32_t)a3; // 0x26d031
    *v4 = v5;
    int64_t result; // 0x26d024
    if (v5 < 0) {
        result = function_26cfe0();
    }
    // 0x26d036
    return result;
}

// Address range: 0x26d07b - 0x26d0a8
int64_t function_26d07b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    unsigned char v1 = *(char *)(a3 - 0x4ccbfe18) & (char)(a4 / 256); // 0x26d07b
    float80_t v2; // 0x26d07b
    *(float32_t *)((256 * (int64_t)v1 | a4 & -0xff01) + 4 * a3) = (float32_t)v2;
    unknown_ffffffffbd1c6990();
    unsigned char v3 = *(char *)(__asm_hlt() + 4); // 0x26d098
    int64_t v4 = unknown_3a28e9a1(); // 0x26d09b
    int64_t v5; // 0x26d07b
    int32_t * v6 = (int32_t *)(v5 - 50); // 0x26d0a2
    *v6 = *v6 + (int32_t)(v3 > v1) - (0x10000 * (int32_t)v4 >> 16);
    return function_26d0ab();
}

// Address range: 0x26d0a9 - 0x26d0ab
int64_t function_26d0a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x26d0a9
    int64_t result; // 0x26d0a9
    return result;
}

// Address range: 0x26d0ab - 0x26d0ac
int64_t function_26d0ab(void) {
    // 0x26d0ab
    int64_t result; // 0x26d0ab
    return result;
}

// Address range: 0x26d0c0 - 0x26d0e1
int64_t function_26d0c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x26d0c0
    int64_t v1; // 0x26d0c0
    return v1 ^ 232;
}

// Address range: 0x26d424 - 0x26d450
int64_t function_26d424(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a4 % 32; // 0x26d42a
    int64_t v2; // 0x26d424
    int32_t v3; // 0x26d424
    int64_t v4; // 0x26d424
    if (v1 == 0) {
        // 0x26d424
        v3 = v4;
    } else {
        char * v5 = (char *)(v4 - 24); // 0x26d42a
        unsigned char v6 = *v5; // 0x26d42a
        *v5 = v6 >> 8 - v1 | v6 << v1;
        int64_t v7; // 0x26d424
        v2 = v7;
        v3 = *(int32_t *)&v7;
    }
    *(int32_t *)v2 = v3 + (int32_t)a5;
    bool v8; // 0x26d424
    uint64_t v9 = (v4 - (v8 ? 0xb8b10201 : 0xb8b10200) & 0xe8a73baf) + a5; // 0x26d43a
    *(int32_t *)-0x44554abd = *(int32_t *)-0x44554abd + (int32_t)a1;
    char v10 = *(char *)(a4 + 88); // 0x26d443
    int64_t result = 256 * (int64_t)((char)(v9 / 256) - v10) | v9 & 0xffff00ff; // 0x26d443
    *(int32_t *)-0x7d83fd93fe17739c = (int32_t)result;
    return result;
}

// Address range: 0x26d451 - 0x26d465
int64_t function_26d451(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x26d451
    int64_t v1; // 0x26d451
    int64_t result = v1 & 0xe8a34baf; // 0x26d451
    int32_t * v2 = (int32_t *)(result + 0x79fc7a3b); // 0x26d456
    *v2 = *v2 + (int32_t)v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x26d45c
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)result; // 0x26d45c
        uint32_t v5 = *v4; // 0x26d45c
        *v4 = v5 >> 32 - v3 | v5 << v3;
    }
    return result;
}

// Address range: 0x26d473 - 0x26d49f
int64_t function_26d473(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 128); // 0x26d475
    int64_t v2; // 0x26d473
    *v1 = *v1 + (int32_t)v2;
    int32_t * v3 = (int32_t *)(a1 - 48); // 0x26d480
    *v3 = *v3 + (int32_t)v2;
    bool v4; // 0x26d473
    return unknown_ffffffffb47c269d((v4 ? -4 : 4) + (v2 + a1 & 0xffffffff));
}

// Address range: 0x26d4a8 - 0x26d4ae
int64_t function_26d4a8(void) {
    // 0x26d4a8
    int64_t result; // 0x26d4a8
    return result;
}

// Address range: 0x26d52e - 0x26d531
int64_t function_26d52e(int64_t a1) {
    // 0x26d52e
    int64_t result; // 0x26d52e
    return result;
}

// Address range: 0x26d540 - 0x26d557
int64_t function_26d540(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x26d540
    int64_t v1; // 0x26d540
    uint32_t v2 = (int32_t)v1;
    uint32_t v3 = v2 + (int32_t)v1; // 0x26d540
    *(int32_t *)v1 = v3;
    int64_t v4; // 0x26d540
    *(int32_t *)a1 = *(int32_t *)&v4;
    bool v5; // 0x26d540
    int64_t v6 = v5 ? -8 : 8; // 0x26d548
    int32_t * v7 = (int32_t *)(v1 - 24); // 0x26d54c
    *v7 = *v7 + (int32_t)a4;
    int32_t * v8 = (int32_t *)(v6 + a2); // 0x26d54f
    *v8 = *v8 + (int32_t)(v6 + a1);
    return v1 - (v3 < v2 ? 0x224d6297 : 0x224d6296) & 0xffffffff ^ 201;
}

// Address range: 0x26d5a3 - 0x26d613
int64_t function_26d5a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_3a4fa8bd(); // 0x26d5b7
    int64_t v1; // 0x26d5a3
    if ((v1 + a4 & 28) != 0) {
        // 0x26d5fe
        return result;
    }
    // 0x26d5be
    __asm_in((int16_t)a3);
    unknown_14c247cc();
    return unknown_525cdcd8();
}

// Address range: 0x485062 - 0x48506f
int64_t function_485062(int64_t a1, int64_t a2) {
    // 0x485062
    int64_t v1; // 0x485062
    int64_t result = 0x100000000000000 * (int64_t)&v1 >> 56; // 0x485063
    char * v2 = (char *)(result - 0x34959df3); // 0x485064
    *v2 = *v2 + (char)result;
    return result;
}

// Address range: 0x48509a - 0x4850a0
int64_t function_48509a(int64_t a1) {
    // 0x48509a
    return function_48510e();
}

// Address range: 0x4850bf - 0x4850c0
int64_t function_4850bf(void) {
    // 0x4850bf
    int64_t result; // 0x4850bf
    return result;
}

// Address range: 0x4850ca - 0x4850cf
int64_t function_4850ca(void) {
    // 0x4850ca
    return function_f8beff1();
}

// Address range: 0x48510b - 0x48510e
int64_t function_48510b(int64_t a1, int64_t a2) {
    // 0x48510b
    bool v1; // 0x48510b
    if (!v1 && !v1) {
        function_4850bf();
    }
    // 0x48510d
    return a2 & 0xffffffff;
}

// Address range: 0x48510e - 0x48510f
int64_t function_48510e(void) {
    // 0x48510e
    int64_t result; // 0x48510e
    return result;
}

// Address range: 0x485130 - 0x485135
int64_t function_485130(void) {
    // 0x485130
    return function_fffffffff375e92c();
}

// Address range: 0x485167 - 0x485171
int64_t function_485167(int64_t a1) {
    // 0x485167
    int64_t v1; // 0x485167
    int64_t result = v1 | 177; // 0x485167
    int32_t * v2 = (int32_t *)(result + 14); // 0x485169
    *v2 = *v2 - (int32_t)v1;
    float80_t v3; // 0x485167
    *(float64_t *)result = (float64_t)v3;
    return result;
}

// Address range: 0x48517a - 0x4851b8
int64_t function_48517a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = (char)a3 + (char)a1; // 0x48517a
    int64_t result; // 0x48517a
    if (v1 < 0) {
        uint32_t v2 = *(int32_t *)(a1 + 0x2d006743); // 0x485184
        char * v3 = (char *)(a3 & -256 | (int64_t)v1); // 0x48518a
        *v3 = *v3 + (char)a4 + (char)(v2 > (int32_t)a2);
        return result;
    }
    int32_t * v4 = (int32_t *)(8 * a1 + 0x5c78060a); // 0x4851aa
    uint32_t v5 = *v4; // 0x4851aa
    *v4 = v5 / 0x20000000 | 8 * (int32_t)((int32_t)result > 0xd59ea78c) | 16 * v5;
    *(char *)(a2 + 46) = v1;
    return result + 0x2a615873 & 0xffffff00 | (int64_t)__asm_in_136(110);
}

// Address range: 0x4851ef - 0x485203
int64_t function_4851ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4851ef
    int64_t result; // 0x4851ef
    int32_t * v1 = (int32_t *)(a2 + 0x2b7dc040 + 2 * result); // 0x4851f5
    uint32_t v2 = *v1; // 0x4851f5
    bool v3; // 0x4851ef
    int32_t v4 = v3; // 0x4851f5
    uint32_t v5 = v4 + (int32_t)result; // 0x4851f5
    int32_t v6 = v2 - v5; // 0x4851f5
    bool v7 = v3 ? v5 != -1 | v2 < v6 - v4 : v2 < v5; // 0x4851f5
    *v1 = v6;
    int64_t v8; // 0x4851ef
    *(int32_t *)a4 = *(int32_t *)&v8 - 0x650ab26a + (int32_t)v7;
    return result;
}

// Address range: 0x485207 - 0x485208
int64_t function_485207(void) {
    // 0x485207
    int64_t result; // 0x485207
    return result;
}

// Address range: 0x48523d - 0x485241
int64_t function_48523d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x48523d
    int64_t result; // 0x48523d
    return result;
}

// Address range: 0x485243 - 0x485258
int64_t function_485243(int64_t a1, int64_t a2, int64_t a3) {
    // 0x485243
    int64_t v1; // 0x485243
    int32_t v2 = v1 & a1; // 0x485243
    *(int32_t *)a2 = v2;
    int32_t v3 = __asm_in_137(103); // 0x485248
    int64_t v4; // 0x485243
    __asm_outsb((int16_t)a3, *(char *)&v4);
    int64_t v5 = v3; // 0x48524b
    if (v2 < 0) {
        v5 = function_485207();
    }
    // 0x48524d
    int64_t v6; // 0x485243
    int64_t v7 = (int64_t)*(int32_t *)&v6; // 0x485245
    int64_t v8 = 8 * v7; // 0x485245
    unsigned char v9 = *(char *)(v5 % 256 + v1); // 0x48524d
    return (v5 & 0xffffff00 | (int64_t)v9) + (v8 | (int64_t)(v8 != 0x800000000 * v7 >> 32)) & 0xffffffff;
}

// Address range: 0x485462 - 0x48547c
int64_t function_485462(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x485462
    int64_t v1; // 0x485462
    uint32_t v2 = (int32_t)v1; // 0x485467
    bool v3; // 0x485462
    uint32_t result = v2 + 0x1f4e671 + (int32_t)v3; // 0x485467
    bool v4 = v3 ? result <= v2 : v2 > 0xfe0b198e; // 0x485467
    int32_t * v5 = (int32_t *)a3; // 0x48546d
    *v5 = (int32_t)a4;
    uint32_t v6 = (int32_t)v1; // 0x48546f
    uint32_t v7 = *(int32_t *)(a1 - 0x41f0be79) + (int32_t)v4; // 0x48546f
    bool v8 = v4 ? v7 != -1 | (int32_t)v4 + v6 - v7 > v6 : v7 > v6; // 0x48546f
    __writefsbyte(0x921f3545, __readfsbyte(0x921f3545) + (char)v1 + (char)v8);
    int64_t v9; // 0x485462
    uint32_t v10 = *(int32_t *)&v9; // 0x485479
    *v5 = v10 / 0x40000 | 0x4000 * v10;
    return result;
}

// Address range: 0x48548e - 0x485491
int64_t function_48548e(int64_t a1) {
    // 0x48548e
    int64_t result; // 0x48548e
    return result;
}

// Address range: 0x485494 - 0x485497
int64_t function_485494(void) {
    // 0x485494
    int64_t result; // 0x485494
    return result;
}

// Address range: 0x485497 - 0x48549c
int64_t function_485497(void) {
    // 0x485497
    int64_t result; // 0x485497
    bool v1; // 0x485497
    if (!v1) {
        result = function_485423();
    }
    // 0x48549a
    return result;
}

// Address range: 0x4854a2 - 0x4854a3
int64_t function_4854a2(int64_t a1) {
    // 0x4854a2
    int64_t result; // 0x4854a2
    return result;
}

// Address range: 0x4854a4 - 0x4854aa
int64_t function_4854a4(void) {
    // 0x4854a4
    return function_68ff7554();
}

// Address range: 0x4854ab - 0x4854bb
int64_t function_4854ab(int64_t a1) {
    // 0x4854ab
    return 0x10000 * __asm_in_137(115) >> 16;
}

// Address range: 0x48550d - 0x48550e
int64_t function_48550d(void) {
    // 0x48550d
    int64_t result; // 0x48550d
    return result;
}

// Address range: 0x48556e - 0x485571
int64_t function_48556e(int64_t a1) {
    // 0x48556e
    int64_t result; // 0x48556e
    return result;
}

// Address range: 0x485573 - 0x485580
int64_t function_485573(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x485573
    int64_t result; // 0x485573
    int32_t * v1 = (int32_t *)(result + 14); // 0x485573
    bool v2; // 0x485573
    *v1 = (int32_t)v2 - (int32_t)result + *v1;
    char * v3 = (char *)(a3 - 0x3deb3791); // 0x485576
    *v3 = *v3 | (char)(a4 / 256);
    return result;
}

// Address range: 0x485580 - 0x4855a2
int64_t function_485580(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x485580
    int64_t v1; // 0x485580
    uint32_t v2 = 0x10000 * (int32_t)v1 >> 16; // 0x485580
    *(int32_t *)0x4c8f3d9b00ed4e4b = v2;
    int64_t v3 = v2; // 0x48558a
    bool v4; // 0x485580
    if (v4 || false) {
        v3 = function_48550d();
    }
    unsigned char v5 = (char)a1;
    unsigned char v6 = (char)a4; // 0x48559a
    char v7 = v5 - v6; // 0x48559a
    unsigned char v8 = llvm_ctpop_i8(v7); // 0x48559a
    *(char *)a1 = v7;
    return 256 * (64 * (int64_t)(v7 == 0) | (int64_t)(v5 < v6) | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v5 % 16 - v6 % 16 > 15) | 4 * (int64_t)(v8 % 2 == 0)) | v3 & -0xff3a | 569;
}

// Address range: 0x4855a2 - 0x4855d4
int64_t function_4855a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4855a2
    int64_t v1; // 0x4855a2
    char * v2 = (char *)(v1 - 25); // 0x4855a2
    char v3 = a3; // 0x4855a2
    bool v4; // 0x4855a2
    *v2 = (char)v4 + v3 + *v2;
    *(char *)0x35dd1502a255e056 = v3;
    uint64_t result = __asm_wait(); // 0x4855c2
    char * v5 = (char *)(a4 + 56); // 0x4855c3
    *v5 = *v5 & (char)(result / 256);
    *(char *)0x72778efef6752cfc = (char)result;
    return result;
}

// Address range: 0x485616 - 0x48563f
int64_t function_485616(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x485616
    int64_t result; // 0x485616
    bool v1; // 0x485616
    if (true == !v1) {
        // 0x48563e
        return result;
    }
    // 0x485618
    int64_t v2; // 0x485616
    unsigned char v3 = (char)v2; // 0x485618
    unsigned char v4 = v1 ? 104 : 103; // 0x485618
    unsigned char v5 = v3 - v4; // 0x485618
    int64_t result2 = v2 & -256 | (int64_t)v5; // 0x485618
    int3_t v6; // 0x485616
    __frontend_reg_store_fpr(v6 - 1, (float80_t)*(int32_t *)(a1 - 95));
    if (v1 || v4 > v3 || v5 == 0) {
        // 0x48563e
        return result2;
    }
    int64_t v7 = result2 & 0xcf37b487 | 0x30c84b78; // 0x48561f
    char v8 = *(char *)(v2 - 57); // 0x485626
    char * v9 = (char *)((a4 & -256 | (int64_t)(v8 ^ (char)a4)) - 0x24eb2f59); // 0x48562b
    unsigned char v10 = *v9 | (char)(v7 / 256); // 0x48562b
    *v9 = v10;
    result = v7;
    if (v10 >= 0) {
        int32_t v11 = __asm_in_137(-56); // 0x485638
        int64_t v12; // 0x485616
        char v13 = *(char *)&v12; // 0x48563a
        result = (int64_t)(v13 + (char)v11) | (int64_t)(v11 & -256);
    }
    // 0x48563e
    return result;
}
