/*
 * Targeted RetDec C for native executable gap queue batch 1383.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x23e8c9-0x23eac9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23eac9-0x23ecc9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23ecc9-0x23eec9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23eec9-0x23f0c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23f0c9-0x23f2c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23f2c9-0x23f4c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23f4c9-0x23f6c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23f6c9-0x23f8c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d959d-0x2d979d rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d979d-0x2d999d rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d999d-0x2d9b9d rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d9b9d-0x2d9d9d rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d9d9d-0x2d9f9d rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d9f9d-0x2da19d rank=- name=- kind=- bytes=- uncovered=-
 *   0x2da19d-0x2da39d rank=- name=- kind=- bytes=- uncovered=-
 *   0x2da39d-0x2da59d rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_16a9c08();
int64_t function_1da6e7();
int64_t function_215a3f4();
int64_t function_216877f();
int64_t function_23e8c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_23e9ce(void);
int64_t function_23e9d4(void);
int64_t function_23e9f2(void);
int64_t function_23ea3c(int64_t a1);
int64_t function_23eb26(void);
int64_t function_23eb49(int64_t a1, int64_t a2);
int64_t function_23eb75(int64_t a1);
int64_t function_23ebb7(int64_t a1);
int64_t function_23ebc9(void);
int64_t function_23ec17(int64_t a1);
int64_t function_23ec29(void);
int64_t function_23ec45(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23ec58(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23ecd6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23ecef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_23ed18(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23ed28(int64_t a1, int64_t a2);
int64_t function_23ed49(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23edaa(void);
int64_t function_23edd9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23ee34(void);
int64_t function_23ee9e(void);
int64_t function_23eeaf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_23eeed(void);
int64_t function_23eef2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23ef11(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23ef4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23ef9c(void);
int64_t function_23efaa(void);
int64_t function_23efb0(void);
int64_t function_23efbd(int64_t a1);
int64_t function_23efe4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23f0a2(int64_t a1);
int64_t function_23f0dd(void);
int64_t function_23f0f1(void);
int64_t function_23f0fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23f11d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23f15f(int64_t a1);
int64_t function_23f16d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23f273(int64_t a1);
int64_t function_23f363(int64_t a1);
int64_t function_23f37a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23f387(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23f3d6(int64_t a1);
int64_t function_23f3e3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_23f47f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23f4de(int64_t a1);
int64_t function_23f533(void);
int64_t function_23f5a6(void);
int64_t function_23f5b7(void);
int64_t function_23f5ce(void);
int64_t function_23f607(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_23f62a(void);
int64_t function_23f62b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_23f6a7(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_23f6c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23f8b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d959a();
int64_t function_2d959d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d95c6(int64_t a1);
int64_t function_2d95e4(void);
int64_t function_2d960c(void);
int64_t function_2d961d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d9663(int64_t a1, int64_t a2);
int64_t function_2d967d(void);
int64_t function_2d96ba(int64_t a1);
int64_t function_2d96dc(void);
int64_t function_2d9742(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d9804(void);
int64_t function_2d9830(int64_t a1, int64_t a2);
int64_t function_2d9843(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d98a0(void);
int64_t function_2d98c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2d991e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2d9a7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d9a90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d9ad8(int64_t a1, int64_t a2);
int64_t function_2d9aea(int64_t a1);
int64_t function_2d9af7(void);
int64_t function_2d9afa(int64_t a1);
int64_t function_2d9afd(int64_t a1);
int64_t function_2d9b04(int64_t a1, int64_t a2);
int64_t function_2d9b3b(void);
int64_t function_2d9bc2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2d9bd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2d9bfe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d9c42(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2d9ce0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2d9d1e(void);
int64_t function_2d9dde(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2d9e17(void);
int64_t function_2d9e65(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2d9ec3(int64_t a1);
int64_t function_2d9ed1(int64_t a1);
int64_t function_2d9edc(int64_t a1);
int64_t function_2d9eeb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2d9f22(void);
int64_t function_2d9f34(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2d9fad(int64_t a1, int64_t a2);
int64_t function_2d9fcc(void);
int64_t function_2da011(int64_t a1, int64_t a2);
int64_t function_2da04f(void);
int64_t function_2da082(int64_t a1);
int64_t function_2da09b(int64_t a1, int64_t a2);
int64_t function_2da0a2(void);
int64_t function_2da0bf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2da0cb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2da0e7(int64_t a1);
int64_t function_2da0f9(int64_t a1);
int64_t function_2da1a5(void);
int64_t function_2da1cb(int64_t a1);
int64_t function_2da1da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2da204(void);
int64_t function_2da210(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2da277(void);
int64_t function_2da2e8(void);
int64_t function_2da2f4(int64_t a1);
int64_t function_2da311(int64_t a1);
int64_t function_2da315(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2da38a(void);
int64_t function_2da40b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2da47b(void);
int64_t function_2da4bf(void);
int64_t function_2da501(void);
int64_t function_2da502(void);
int64_t function_2da506(void);
int64_t function_39ae1477();
int64_t function_3d14a39();
int64_t function_3d2daa03();
int64_t function_4624fe2c();
int64_t function_46e86652();
int64_t function_4d29e8cb();
int64_t function_5b5e5372();
int64_t function_6d39b2de();
int64_t function_70b18814();
int64_t function_7a2aedbd();
int64_t function_b2faf02();
int64_t function_ffffffff987a4c5e();
int64_t function_ffffffff9db6ac34();
int64_t function_ffffffffa4e30cff();
int64_t function_ffffffffad6924d2();
int64_t function_ffffffffb4833615();
int64_t function_ffffffffc98c20dc();
int64_t unknown_1036714a();
int64_t unknown_1147fda();
int64_t unknown_12304824();
int64_t unknown_13796cbe();
int64_t unknown_1ab514e4();
int64_t unknown_1bdc3977();
int64_t unknown_1e2879e3();
int64_t unknown_2119847b();
int64_t unknown_21722f19();
int64_t unknown_2ac01c6b();
int64_t unknown_2e247264();
int64_t unknown_34425d0a();
int64_t unknown_3aca9e21();
int64_t unknown_3f7992e1();
int64_t unknown_44198980();
int64_t unknown_522edcd2();
int64_t unknown_5fdbd8c7();
int64_t unknown_718d7919();
int64_t unknown_757780cb();
int64_t unknown_8d2cc03();
int64_t unknown_ffffffff8290f738();
int64_t unknown_ffffffff84b46436();
int64_t unknown_ffffffff882ec180();
int64_t unknown_ffffffff88e298d6();
int64_t unknown_ffffffffb46137f8();
int64_t unknown_ffffffffb46ad3b8();
int64_t unknown_ffffffffc11e7729();
int64_t unknown_ffffffffca9a00e9();
int64_t unknown_ffffffffcd2edbf1();
int64_t unknown_ffffffffd3c8658f();
int64_t unknown_ffffffffd8345c3a();
int64_t unknown_ffffffffdd0e1d07();
int64_t unknown_ffffffffe8253476();
int64_t unknown_ffffffffe82ed6a7();
int64_t unknown_ffffffffe85bc44d();
int64_t unknown_ffffffffe9ed55fa();

// Address range: 0x23e8c9 - 0x23e9ca
int64_t function_23e8c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x23e8c9
    int64_t v1; // 0x23e8c9
    *(char *)a1 = (char)v1;
    bool v2; // 0x23e8c9
    int64_t v3 = v2 ? -1 : 1; // 0x23e8c9
    int64_t v4 = v3 + a1; // 0x23e8c9
    int64_t v5; // 0x23e8c9
    *(int32_t *)v5 = (int32_t)v2 + (int32_t)v4 + *(int32_t *)&v5;
    char * v6 = (char *)(v4 + 0x1e89af7); // 0x23e8cc
    *v6 = *v6 + (char)(v5 / 256);
    *(char *)-0x6389b136e3fc6f1d = (char)v5;
    unknown_3f7992e1(v4, v3 + a2);
    *(char *)0x7e25d0fb = *(char *)0x7e25d0fb - 57;
    int32_t v7 = __asm_in(36); // 0x23e8ea
    v5 = v7;
    *(char *)v4 = (char)v7;
    char v8 = *(char *)0x4d25d115 - 120; // 0x23e8ee
    unsigned char v9 = llvm_ctpop_i8(v8); // 0x23e8ee
    *(char *)0x4d25d115 = v8;
    if (v9 % 2 == 0) {
        uint64_t v10 = v5 & 0xffffffff ^ 0xa71a01e8; // 0x23e8fd
        char * v11 = (char *)(a3 - 0x1705fa80); // 0x23e902
        *v11 = *v11 ^ (char)(v10 / 256);
        return 2 * v10 & 0xfffffffe;
    }
    char * v12 = (char *)(a3 - 24); // 0x23e969
    *v12 = 2 * *v12;
    int64_t v13 = v5; // 0x23e96d
    v5 = __asm_sti(v4 + v3);
    if (((int32_t)v13 ^ -0x2bf65cc3) < 1) {
        // 0x23e9c4
        return unknown_757780cb();
    }
    int64_t result = unknown_ffffffff882ec180(); // 0x23e97a
    __asm_out(7, (int32_t)result);
    return result;
}

// Address range: 0x23e9ce - 0x23e9d1
int64_t function_23e9ce(void) {
    // 0x23e9ce
    int64_t result; // 0x23e9ce
    return result;
}

// Address range: 0x23e9d4 - 0x23e9d9
int64_t function_23e9d4(void) {
    // 0x23e9d4
    return function_ffffffffad6924d2();
}

// Address range: 0x23e9f2 - 0x23e9fa
int64_t function_23e9f2(void) {
    // 0x23e9f2
    return unknown_ffffffffb46137f8() & -119;
}

// Address range: 0x23ea3c - 0x23ea3d
int64_t function_23ea3c(int64_t a1) {
    // 0x23ea3c
    int64_t result; // 0x23ea3c
    return result;
}

// Address range: 0x23eb26 - 0x23eb2e
int64_t function_23eb26(void) {
    // 0x23eb26
    int64_t result; // 0x23eb26
    return result;
}

// Address range: 0x23eb49 - 0x23eb53
int64_t function_23eb49(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 115 + 2 * a1); // 0x23eb49
    bool v2; // 0x23eb49
    *v1 = *v1 + (int32_t)a2 + (int32_t)v2;
    int64_t v3; // 0x23eb49
    int64_t result = v3 & -256; // 0x23eb4d
    char * v4 = (char *)result; // 0x23eb4f
    *v4 = *v4 + 60;
    return result;
}

// Address range: 0x23eb75 - 0x23eb7b
int64_t function_23eb75(int64_t a1) {
    // 0x23eb75
    return unknown_2119847b(a1);
}

// Address range: 0x23ebb7 - 0x23ebba
int64_t function_23ebb7(int64_t a1) {
    // 0x23ebb7
    int64_t result; // 0x23ebb7
    return result;
}

// Address range: 0x23ebc9 - 0x23ebd5
int64_t function_23ebc9(void) {
    // 0x23ebc9
    return function_7a2aedbd();
}

// Address range: 0x23ec17 - 0x23ec18
int64_t function_23ec17(int64_t a1) {
    // 0x23ec17
    int64_t result; // 0x23ec17
    return result;
}

// Address range: 0x23ec29 - 0x23ec2a
int64_t function_23ec29(void) {
    // 0x23ec29
    int64_t result; // 0x23ec29
    return result;
}

// Address range: 0x23ec45 - 0x23ec57
int64_t function_23ec45(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffffe85bc44d(); // 0x23ec47
    *(int32_t *)-0x17ae0ead = *(int32_t *)-0x17ae0ead + (int32_t)a1;
    int64_t v1; // 0x23ec45
    *(int32_t *)a3 = (int32_t)v1 + (int32_t)a2;
    __asm_rcl(*(int32_t *)result);
    return result;
}

// Address range: 0x23ec58 - 0x23ec72
int64_t function_23ec58(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23ec58
    int64_t result; // 0x23ec58
    bool v1; // 0x23ec58
    if (v1 || false) {
        result = function_23ec29();
    }
    // 0x23ec5a
    int64_t v2; // 0x23ec58
    __asm_outsd((int16_t)a3, (int32_t)v2);
    if (v1) {
        // 0x23ec5e
        return result;
    }
    // 0x23ec5f
    *(char *)result = 61;
    return function_ffffffffc98c20dc();
}

// Address range: 0x23ecd6 - 0x23ece0
int64_t function_23ecd6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23ecd6
    return function_23ed28(0xab120ffb, a2);
}

// Address range: 0x23ecef - 0x23ed01
int64_t function_23ecef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x23ecef
    int64_t v1; // 0x23ecef
    int32_t * v2 = (int32_t *)(result - 0x23eaeb9d + v1); // 0x23ecf0
    *v2 = *v2 + (int32_t)a2;
    *(char *)0x65baf3ff = *(char *)0x65baf3ff + (char)v1;
    return result;
}

// Address range: 0x23ed18 - 0x23ed1d
int64_t function_23ed18(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23ed18
    int64_t v1; // 0x23ed18
    return v1 & 0xffffffff;
}

// Address range: 0x23ed28 - 0x23ed46
int64_t function_23ed28(int64_t a1, int64_t a2) {
    // 0x23ed28
    int64_t result; // 0x23ed28
    *(char *)-0x35c8565d41ce7fbe = (char)result;
    return result;
}

// Address range: 0x23ed49 - 0x23ed65
int64_t function_23ed49(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23ed49
    int64_t v1; // 0x23ed49
    uint64_t v2 = v1;
    unsigned char v3 = *(char *)(v1 % 256 + v2); // 0x23ed4c
    *(char *)0x1f85805b = *(char *)0x1f85805b + (char)(v2 / 256);
    return (v1 & 0xffffff00 | (int64_t)v3) + 0x8b9d685a & 0xffffffff;
}

// Address range: 0x23edaa - 0x23edad
int64_t function_23edaa(void) {
    // 0x23edaa
    int64_t result; // 0x23edaa
    return result;
}

// Address range: 0x23edd9 - 0x23ede1
int64_t function_23edd9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = a4;
    unsigned char v2 = v1 % 32; // 0x23edda
    if (v2 != 0) {
        *(char *)a4 = v1 >> v2;
    }
    return function_4d29e8cb();
}

// Address range: 0x23ee34 - 0x23ee3a
int64_t function_23ee34(void) {
    // 0x23ee34
    int64_t v1; // 0x23ee34
    int64_t result = v1 & -256; // 0x23ee34
    char * v2 = (char *)result; // 0x23ee36
    *v2 = *v2 + 60;
    return result;
}

// Address range: 0x23ee9e - 0x23ee9f
int64_t function_23ee9e(void) {
    // 0x23ee9e
    int64_t result; // 0x23ee9e
    return result;
}

// Address range: 0x23eeaf - 0x23eee2
int64_t function_23eeaf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    bool v2; // 0x23eeaf
    if (!v2) {
        function_23ee9e();
    }
    int32_t * v3 = (int32_t *)(a3 - 0x3ffc77f); // 0x23eeb1
    *v3 = *v3 - 128;
    int64_t v4 = unknown_13796cbe(); // 0x23eeb8
    char v5 = v4; // 0x23eebd
    *(char *)v1 = *(char *)&v1 + v5;
    int64_t v6 = a3 & -256 | 133; // 0x23eebf
    __asm_out_134(8, v5);
    int64_t v7; // 0x23eeaf
    int32_t * v8 = (int32_t *)(v4 + (8 * v7 | 1)); // 0x23eec3
    int32_t v9 = v7; // 0x23eec3
    *v8 = *v8 + v9;
    __asm_in_135((int16_t)v6);
    int32_t * v10 = (int32_t *)(v1 + 124); // 0x23eed1
    *v10 = *v10 + v9;
    int64_t v11 = unknown_1147fda(); // 0x23eed4
    char * v12 = (char *)v6; // 0x23eedc
    unsigned char v13 = *v12; // 0x23eedc
    unsigned char v14 = (char)(a3 / 256); // 0x23eedc
    *v12 = v13 - v14;
    char v15 = *(char *)(a2 - 80); // 0x23eede
    return v11 & -256 | (int64_t)(v15 + (char)v11 + (char)(v13 < v14));
}

// Address range: 0x23eeed - 0x23eeee
int64_t function_23eeed(void) {
    // 0x23eeed
    int64_t result; // 0x23eeed
    return result;
}

// Address range: 0x23eef2 - 0x23ef0f
int64_t function_23eef2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)(a4 + 0x2381e505); // 0x23eef8
    int64_t v2; // 0x23eef2
    int32_t * v3 = (int32_t *)(8 * v2 + a2); // 0x23ef02
    uint32_t v4 = *v3; // 0x23ef02
    uint32_t v5 = v4 + (int32_t)(a3 & 0xffffff00 | (int64_t)((char)a3 - v1)); // 0x23ef02
    *v3 = v5;
    int64_t v6; // 0x23eef2
    int64_t v7 = __asm_wait() & -256 | (int64_t)*(char *)&v6; // 0x23ef06
    *(int32_t *)a1 = (int32_t)v7;
    return v7 - (v5 < v4 ? 0x367f9e40 : 0x367f9e3f) & 0xffffffff;
}

// Address range: 0x23ef11 - 0x23ef1e
int64_t function_23ef11(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23ef11
    int64_t v1; // 0x23ef11
    int32_t * v2 = (int32_t *)(v1 - 60); // 0x23ef13
    int32_t v3 = *v2 + (int32_t)a2; // 0x23ef13
    *v2 = v3;
    int64_t result; // 0x23ef11
    if (v3 < 1) {
        result = function_23eeed();
    }
    // 0x23ef18
    return result;
}

// Address range: 0x23ef4c - 0x23ef6f
int64_t function_23ef4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)-0x42ffd6ab; // 0x23ef4e
    int64_t v2; // 0x23ef4c
    unsigned char v3 = v1 + (char)(v2 / 256); // 0x23ef4e
    *(char *)-0x42ffd6ab = v3;
    int32_t v4 = *(int32_t *)(a1 + 0x632df058 + v2); // 0x23ef57
    char v5 = *(char *)0x1629a26c; // 0x23ef65
    *(char *)0x1629a26c = v5 + (char)((((int32_t)v2 & 0xff00) - v4 + (int32_t)(v3 < v1)) / 256);
    return v2 | 0xe300;
}

// Address range: 0x23ef9c - 0x23ef9d
int64_t function_23ef9c(void) {
    // 0x23ef9c
    int64_t result; // 0x23ef9c
    return result;
}

// Address range: 0x23efaa - 0x23efac
int64_t function_23efaa(void) {
    // 0x23efaa
    return function_23ef9c();
}

// Address range: 0x23efb0 - 0x23efb6
int64_t function_23efb0(void) {
    // 0x23efb0
    int64_t result; // 0x23efb0
    return result;
}

// Address range: 0x23efbd - 0x23efc0
int64_t function_23efbd(int64_t a1) {
    // 0x23efbd
    int64_t result; // 0x23efbd
    return result;
}

// Address range: 0x23efe4 - 0x23f084
int64_t function_23efe4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a5;
    int64_t v3; // 0x23efe4
    uint64_t v4 = 256 * v3 & 0xff00 | a4; // 0x23efe4
    int32_t * v5 = (int32_t *)(a3 - 26); // 0x23efe6
    *v5 = *v5 + (int32_t)a2;
    int64_t v6 = a3 & -0xff01; // 0x23efeb
    int64_t v7 = v6 | (int64_t)&g2; // 0x23efeb
    char * v8 = (char *)v7; // 0x23efee
    unsigned char v9 = *v8; // 0x23efee
    uint64_t v10 = v4 / 256; // 0x23efee
    unsigned char v11 = v9 + (char)v10; // 0x23efee
    *v8 = v11;
    uint32_t v12 = (int32_t)v3; // 0x23eff6
    uint32_t v13 = v12 + 0x720970f5 + (int32_t)(v11 < v9); // 0x23eff6
    if (v13 >= 0) {
        // 0x23effd
        *(char *)0x4f01e8d075680508 = (char)unknown_8d2cc03(v2);
        return function_6d39b2de();
    }
    int64_t v14 = v3 & -0xff01 | (int64_t)&g1; // 0x23efe9
    int64_t v15 = v13; // 0x23eff6
    if (v11 < v9 ? v13 <= v12 : v12 > 0x8df68f0a) {
        int64_t v16 = v15 & 0xffffff00 | (int64_t)*(char *)-0x2b38fe176391e578; // 0x23f068
        *(int32_t *)v16 = (int32_t)v16;
        uint32_t v17 = *(int32_t *)0x17889536; // 0x23f073
        int32_t v18 = (int32_t)v2 + 1; // 0x23f073
        int32_t v19 = v17 - v18; // 0x23f073
        *(int32_t *)0x17889536 = v19;
        uint64_t result = unknown_44198980(v2); // 0x23f07a
        if (v18 != -1 || v17 < v19 - 1) {
            char v20 = *(char *)(v3 - 0x17f27155); // 0x23f015
            unsigned char v21 = (char)((int64_t)&g2 >> 8) - 1 - v20; // 0x23f015
            int64_t v22 = v6 | (int64_t)&g2 & -0xff01 | 256 * (int64_t)v21; // 0x23f015
            unsigned char v23 = *(char *)(result % 256 + v14); // 0x23f01b
            int32_t v24 = *(int32_t *)&v1; // 0x23f01c
            *(int32_t *)v1 = v24 - (int32_t)(result & 0xffffff00 | (int64_t)v23) + (int32_t)(v20 != -2 | v21 - 1 > (char)((int64_t)&g2 >> 8));
            int32_t * v25 = (int32_t *)(unknown_12304824() + 0x1e82e13); // 0x23f023
            *v25 = *v25 + (int32_t)v22;
            *(char *)v22 = (char)a4;
            return unknown_ffffffff8290f738();
        }
        // 0x23f081
        __asm_out(-92, (int32_t)result);
        *(int64_t *)(v16 - 8) = v16;
        return result;
    }
    char * v26 = (char *)(v15 + 0x360e000); // 0x23f044
    *v26 = *v26 + (char)v13;
    int32_t * v27 = (int32_t *)(v3 + 0x40001200); // 0x23f04c
    *v27 = *v27 + (int32_t)(int64_t)&v2;
    unsigned char v28 = (char)a4 % 32; // 0x23f057
    if (v28 != 0) {
        char * v29 = (char *)(v14 - 0x71d5cb98); // 0x23f057
        *v29 = *v29 << v28;
    }
    int64_t result2 = unknown_2e247264(v2, ((v10 + v15) % 256 | v15 & 0xffffff00) + 0x5e56143a & 0xffffffff, v7, v4); // 0x23f05e
    int32_t * v30 = (int32_t *)(v2 - 16); // 0x23f063
    *v30 = *v30 + (int32_t)v3;
    *(int32_t *)v2 = (int32_t)result2;
    return result2;
}

// Address range: 0x23f0a2 - 0x23f0a6
int64_t function_23f0a2(int64_t a1) {
    // 0x23f0a2
    int64_t result; // 0x23f0a2
    return result;
}

// Address range: 0x23f0dd - 0x23f0de
int64_t function_23f0dd(void) {
    // 0x23f0dd
    int64_t result; // 0x23f0dd
    return result;
}

// Address range: 0x23f0f1 - 0x23f0f3
int64_t function_23f0f1(void) {
    // 0x23f0f1
    int64_t v1; // 0x23f0f1
    return function_23f11d(v1, v1, v1, v1);
}

// Address range: 0x23f0fb - 0x23f11d
int64_t function_23f0fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23f0fb
    int64_t v1; // 0x23f0fb
    int64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4; // 0x23f0fb
    v4 = function_23f0dd();
    unsigned char v5 = *(char *)(a1 + 0x1e8ac8f); // 0x23f0ff
    *(int32_t *)v2 = (int32_t)v2 - (int32_t)v1 + (int32_t)(v5 > (char)a4);
    char * v6 = (char *)(v2 + 0x420091d8); // 0x23f108
    char v7 = v4; // 0x23f108
    *v6 = *v6 - v7;
    *(char *)v3 = *(char *)&v3 + v7;
    char * v8 = (char *)(a1 + 0x3ab3c6d1); // 0x23f116
    *v8 = *v8 + (char)v3;
    return __asm_wait();
}

// Address range: 0x23f11d - 0x23f135
int64_t function_23f11d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x23f11d
    int64_t v2; // 0x23f11d
    if (v1 != 0) {
        uint32_t v3 = (int32_t)v2;
        *(int32_t *)v2 = v3 >> 32 - v1 | v3 << v1;
    }
    int32_t * v4 = (int32_t *)(a3 - 107); // 0x23f122
    *v4 = *v4 + (int32_t)v2;
    return unknown_ffffffff84b46436();
}

// Address range: 0x23f15f - 0x23f161
int64_t function_23f15f(int64_t a1) {
    // 0x23f15f
    int64_t result; // 0x23f15f
    return result;
}

// Address range: 0x23f16d - 0x23f1b1
int64_t function_23f16d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23f16d
    int64_t v1; // 0x23f16d
    uint64_t v2 = v1;
    char v3 = *(char *)(a4 + 0x388c7eb4); // 0x23f16e
    bool v4; // 0x23f16d
    int64_t v5 = v2 & -256 | (int64_t)((char)v4 + (char)v2 + v3); // 0x23f16e
    char v6 = v2 / 256; // 0x23f177
    *(char *)-0xb8c9782 = *(char *)-0xb8c9782 + v6;
    int64_t v7 = (v4 ? -1 : 1) + a2; // 0x23f182
    *(char *)-0x3752f369 = *(char *)-0x3752f369 + v6;
    *(int64_t *)0x73fff05f = -0x38296400;
    int32_t * v8 = (int32_t *)(v5 + 66); // 0x23f1a3
    *v8 = *v8 + (int32_t)v5;
    return __asm_int3((int32_t)(v7 | a1), v7);
}

// Address range: 0x23f273 - 0x23f276
int64_t function_23f273(int64_t a1) {
    // 0x23f273
    int64_t result; // 0x23f273
    return result;
}

// Address range: 0x23f363 - 0x23f367
int64_t function_23f363(int64_t a1) {
    // 0x23f363
    int64_t v1; // 0x23f363
    return v1 & 0xffffffff;
}

// Address range: 0x23f37a - 0x23f386
int64_t function_23f37a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23f37a
    int64_t result; // 0x23f37a
    return result;
}

// Address range: 0x23f387 - 0x23f393
int64_t function_23f387(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23f387
    unknown_ffffffffd3c8658f(a1, a2, a3, a4);
    return function_5b5e5372();
}

// Address range: 0x23f3d6 - 0x23f3e0
int64_t function_23f3d6(int64_t a1) {
    // 0x23f3d6
    return (int64_t)*(int32_t *)-0x218c57fa9f0210ea;
}

// Address range: 0x23f3e3 - 0x23f409
int64_t function_23f3e3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = unknown_ffffffffca9a00e9(); // 0x23f3e3
    int64_t v2; // 0x23f3e3
    bool v3; // 0x23f3e3
    *(char *)a3 = (char)v2 - (char)(a4 / 256) + (char)v3;
    *(char *)0xcf1c00d3 = (char)v1 + 2;
    return unknown_ffffffffdd0e1d07(v3 ? 0xcf1c00d2 : 0xcf1c00d4);
}

// Address range: 0x23f47f - 0x23f498
int64_t function_23f47f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 25); // 0x23f47f
    int64_t v2; // 0x23f47f
    *v1 = *v1 | (int32_t)v2;
    int64_t v3 = a2; // bp-8, 0x23f483
    int64_t v4 = __asm_sti(a1); // 0x23f484
    char * v5 = (char *)(8 * v2 + (int64_t)&v3); // 0x23f485
    unsigned char v6 = *v5; // 0x23f485
    char v7 = v6 / 128; // 0x23f485
    *v5 = v7 | 2 * v6;
    int32_t * v8 = (int32_t *)(v2 + 24); // 0x23f492
    int64_t v9; // bp-16, 0x23f47f
    *v8 = *v8 | (int32_t)(int64_t)&v9;
    return v4 + 0x3d0067d8 + (int64_t)(v7 != 0) & 0xffffffff;
}

// Address range: 0x23f4de - 0x23f4e7
int64_t function_23f4de(int64_t a1) {
    // 0x23f4de
    int64_t result; // 0x23f4de
    char * v1 = (char *)(result + 0x1e80e05); // 0x23f4de
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x23f533 - 0x23f534
int64_t function_23f533(void) {
    // 0x23f533
    int64_t result; // 0x23f533
    return result;
}

// Address range: 0x23f5a6 - 0x23f5a8
int64_t function_23f5a6(void) {
    // 0x23f5a6
    return function_23f533();
}

// Address range: 0x23f5b7 - 0x23f5b8
int64_t function_23f5b7(void) {
    // 0x23f5b7
    int64_t result; // 0x23f5b7
    return result;
}

// Address range: 0x23f5ce - 0x23f5d3
int64_t function_23f5ce(void) {
    // 0x23f5ce
    return function_70b18814();
}

// Address range: 0x23f607 - 0x23f61c
int64_t function_23f607(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x23f607
    __asm_wait();
    int64_t v1; // 0x23f607
    *(char *)a3 = (char)v1 + (char)(a4 / 256);
    char * v2 = (char *)(v1 - 0x62fe1766); // 0x23f612
    *v2 = *v2 % 32;
    return function_23f5b7();
}

// Address range: 0x23f62a - 0x23f62b
int64_t function_23f62a(void) {
    // 0x23f62a
    int64_t result; // 0x23f62a
    return result;
}

// Address range: 0x23f62b - 0x23f6a6
int64_t function_23f62b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    int64_t v1 = a3;
    __asm_int(42);
    int64_t v2; // 0x23f62b
    bool v3; // 0x23f62b
    *(char *)a2 = (char)v2 + (char)a2 + (char)v3;
    unsigned char v4 = *(char *)-0x2fa3fe175a86d734; // 0x23f66a
    int64_t result2 = v2 & -256 | (int64_t)v4; // 0x23f66a
    *(int32_t *)a1 = (int32_t)result2;
    char * v5 = (char *)(a2 - 113); // 0x23f674
    *v5 = *v5 + (char)(v2 / 256);
    if (a4 != 1) {
        // 0x23f6a0
        *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v2;
        *(char *)(a2 - 121) = v4;
        return result;
    }
    int32_t v6 = *(int32_t *)-0x1775b778; // 0x23f681
    *(int32_t *)-0x1775b778 = v6 + (int32_t)((v3 ? 0xfffffffc : 4) + a1);
    *(int32_t *)-0x691def09 = *(int32_t *)-0x691def09 + (int32_t)a2;
    return result2;
}

// Address range: 0x23f6a7 - 0x23f6b4
int64_t function_23f6a7(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x23f6a7
    int64_t v1; // 0x23f6a7
    uint32_t v2 = (int32_t)v1; // 0x23f6a7
    __asm_out(-101, v2);
    bool v3; // 0x23f6a7
    uint32_t result = v2 + 0x138df137 + (int32_t)v3; // 0x23f6aa
    bool v4 = v3 ? result <= v2 : v2 > 0xec720ec8; // 0x23f6aa
    *(char *)a1 = (char)v1 - (char)(a3 / 256) + (char)v4;
    return result;
}

// Address range: 0x23f6c3 - 0x23f788
int64_t function_23f6c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23f6c3
    int64_t v1; // 0x23f6c3
    uint64_t v2 = v1;
    int64_t result = v1;
    bool v3; // 0x23f6c3
    if (v3 || v3) {
        // 0x23f713
        *(int32_t *)result = 2 * (int32_t)result;
        return result;
    }
    int32_t v4 = __asm_in(-96); // 0x23f6c7
    char * v5 = (char *)(int64_t)v4; // 0x23f6ca
    *v5 = *v5 | (char)v4;
    int64_t v6 = 121; // bp-16, 0x23f6d2
    __asm_fbld(*(float80_t *)(a4 - 54));
    *(char *)0x37a19e5c = *(char *)0x37a19e5c + (char)(v2 / 256);
    *(int32_t *)a1 = (int32_t)__asm_wait();
    __asm_out(8, (int32_t)__asm_hlt((v3 ? -4 : 4) + a1));
    int64_t v7 = unknown_ffffffffe8253476(); // 0x23f76f
    int32_t * v8 = (int32_t *)(v2 + 0x54ede2e5); // 0x23f775
    *v8 = *v8 + (int32_t)(int64_t)&v6;
    return v7 & -256 | (int64_t)*(char *)-0x6ffe17c9951dfa40;
}

// Address range: 0x23f8b4 - 0x23f8c9
int64_t function_23f8b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23f8b4
    int64_t v1; // 0x23f8b4
    *(char *)a2 = (char)(v1 | v1);
    *(int32_t *)0x5f46019dc5fba33c = (int32_t)v1;
    return unknown_5fdbd8c7();
}

// Address range: 0x2d959d - 0x2d95a8
int64_t function_2d959d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d959d
    int64_t v1; // 0x2d959d
    int32_t * v2 = (int32_t *)(v1 + 4 * a1); // 0x2d959f
    int32_t v3 = *v2; // 0x2d959f
    int32_t v4 = v1; // 0x2d959f
    int32_t v5 = v3 + v4; // 0x2d959f
    *v2 = v5;
    if (((v5 ^ v3) & (v5 ^ v4)) >= 0) {
        function_2d959a();
    }
    // 0x2d95a4
    return a2 & 0xffffff00 | (int64_t)__asm_in_133(17);
}

// Address range: 0x2d95c6 - 0x2d95c8
int64_t function_2d95c6(int64_t a1) {
    // 0x2d95c6
    int64_t result; // 0x2d95c6
    return result;
}

// Address range: 0x2d95e4 - 0x2d95e9
int64_t function_2d95e4(void) {
    // 0x2d95e4
    return function_215a3f4();
}

// Address range: 0x2d960c - 0x2d9612
int64_t function_2d960c(void) {
    // 0x2d960c
    int64_t result; // 0x2d960c
    return result;
}

// Address range: 0x2d961d - 0x2d962f
int64_t function_2d961d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d961d
    *(char *)a1 = __asm_insb((int16_t)a3);
    unknown_ffffffffc11e7729();
    return function_39ae1477();
}

// Address range: 0x2d9663 - 0x2d9672
int64_t function_2d9663(int64_t a1, int64_t a2) {
    // 0x2d9663
    int64_t v1; // 0x2d9663
    unsigned char v2 = (char)v1;
    *(char *)v1 = v2 / 128 | 2 * v2;
    int64_t result = unknown_2ac01c6b(); // 0x2d9665
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x2d967d - 0x2d9682
int64_t function_2d967d(void) {
    // 0x2d967d
    return function_46e86652();
}

// Address range: 0x2d96ba - 0x2d96bb
int64_t function_2d96ba(int64_t a1) {
    // 0x2d96ba
    int64_t result; // 0x2d96ba
    return result;
}

// Address range: 0x2d96dc - 0x2d96dd
int64_t function_2d96dc(void) {
    // 0x2d96dc
    int64_t result; // 0x2d96dc
    return result;
}

// Address range: 0x2d9742 - 0x2d97da
int64_t function_2d9742(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a5;
    int64_t v3; // 0x2d9742
    *(int32_t *)0x1de365ae01e889bf = (int32_t)v3;
    uint32_t v4 = (int32_t)(int64_t)&v2; // 0x2d974b
    char v5 = __asm_in_133(-24); // 0x2d974c
    int32_t * v6 = (int32_t *)(a2 - 24); // 0x2d974e
    int32_t v7 = a4; // 0x2d974e
    *v6 = *v6 ^ v7;
    int64_t v8 = v3 + 0xf0ddec28 + (v3 & 0xffffff00 | (int64_t)v5); // 0x2d9753
    uint32_t v9 = *(int32_t *)&v1; // 0x2d975a
    uint32_t v10 = v9 + v7; // 0x2d975a
    *(int32_t *)v1 = v10;
    int64_t v11 = v10 < v9 ? 12 : 11; // 0x2d975d
    *(char *)(a4 & 0xffffffff) = (char)a4 + (char)a3;
    int64_t v12 = (a3 - v3 / 256) % 256 | a3 & -256; // 0x2d9762
    uint32_t v13 = v4 + (int32_t)v3; // 0x2d9767
    int64_t v14 = v13; // 0x2d9767
    v1 = v14;
    int32_t v15 = *(int32_t *)(((v8 - v11) % 256 | v8 & 0xffffff00) + 0x5630ede5); // 0x2d976b
    int64_t result = unknown_1bdc3977(); // 0x2d9771
    if (v13 != 0) {
        int32_t * v16 = (int32_t *)(v14 - 85 + 4 * result); // 0x2d97ca
        *v16 = *v16 + (int32_t)v12;
        return result;
    }
    int32_t * v17 = (int32_t *)(8 * v14 + 0x1e86404 + result); // 0x2d9780
    *v17 = (int32_t)(v13 < v4) - v15 + *v17;
    bool v18; // 0x2d9742
    int64_t v19 = (v18 ? -4 : 4) + a1; // 0x2d9787
    int64_t v20 = v2; // 0x2d9788
    v2 = 11;
    char * v21 = (char *)(v12 - 0x173afb10); // 0x2d978b
    unsigned char v22 = *v21; // 0x2d978b
    *v21 = v22 / 128 | 2 * v22;
    int64_t result2 = result & 0xd8018847; // 0x2d9793
    *(char *)-0x16f93b5a = *(char *)-0x16f93b5a | (char)result2;
    uint64_t v23 = v19 + v12; // 0x2d979e
    uint32_t v24 = *(int32_t *)(v1 + 3); // 0x2d97a0
    *(char *)-0x25d08032 = *(char *)-0x25d08032 + 66;
    int32_t * v25 = (int32_t *)(result2 + 74); // 0x2d97aa
    int32_t v26 = v23; // 0x2d97aa
    int32_t v27 = *v25 | v26; // 0x2d97aa
    *v25 = v27;
    *(char *)v19 = *(char *)v1;
    int64_t v28 = v18 ? -1 : 1; // 0x2d97ad
    int64_t v29 = v19 + v28; // 0x2d97ad
    int64_t v30 = v1 + v28; // 0x2d97ad
    v1 = v30;
    int64_t v31 = (int64_t)v24 - 1; // 0x2d97ae
    if (v31 != 0 != (v27 == 0)) {
        // 0x2d97b0
        *(int32_t *)-0x65ca4115 = *(int32_t *)-0x65ca4115 + v26;
        return function_2d9830(v29, v2);
    }
    if (v27 >= 1) {
        int32_t * v32 = (int32_t *)result2; // 0x2d97d5
        *v32 = *v32 + (int32_t)v29;
        char * v33 = (char *)((v23 & 0xffffffff) - 127); // 0x2d97d7
        *v33 = *v33 | (char)v20;
        return result2;
    }
    int32_t * v34 = (int32_t *)(result2 + 0x2d1a8110 + v30); // 0x2d97bf
    uint32_t v35 = *v34; // 0x2d97bf
    uint32_t v36 = v35 + (int32_t)v31; // 0x2d97bf
    *v34 = v36;
    char * v37 = (char *)(result2 - 13); // 0x2d97c6
    *v37 = *v37 - (char)(v23 / 256) + (char)(v36 < v35);
    return result2;
}

// Address range: 0x2d9804 - 0x2d9809
int64_t function_2d9804(void) {
    // 0x2d9804
    return function_ffffffff987a4c5e();
}

// Address range: 0x2d9830 - 0x2d9833
int64_t function_2d9830(int64_t a1, int64_t a2) {
    // 0x2d9830
    int64_t result; // 0x2d9830
    return result;
}

// Address range: 0x2d9843 - 0x2d9849
int64_t function_2d9843(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d9843
    int64_t v1; // 0x2d9843
    return v1 ^ 215;
}

// Address range: 0x2d98a0 - 0x2d98a1
int64_t function_2d98a0(void) {
    // 0x2d98a0
    int64_t result; // 0x2d98a0
    return result;
}

// Address range: 0x2d98c0 - 0x2d990b
int64_t function_2d98c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    int64_t v2; // 0x2d98c0
    int64_t v3 = 2 * v2 & 0xffffffff; // 0x2d98c0
    int32_t * v4 = (int32_t *)(v3 + 5); // 0x2d98c2
    *v4 = *v4 + (int32_t)v2;
    int64_t v5 = 256 * v3 & 0xff00 | a3 & -0xff01; // 0x2d98cb
    unknown_ffffffff88e298d6();
    function_2d98a0();
    int64_t v6 = unknown_1e2879e3() & 0xffffffff; // 0x2d98e2
    int32_t * v7 = (int32_t *)(v5 + 0x333010cc); // 0x2d98e8
    *v7 = *v7 + (int32_t)a1;
    int16_t v8 = v5; // 0x2d98f0
    __asm_outsd(v8, *(int32_t *)&v1);
    *(int64_t *)((v2 & 0xffffffff) - 8) = 0x76d0a700;
    *(char *)v6 = __asm_insb(v8);
    int64_t result = a1 & 0xffffffff ^ 0xe8b9492f; // 0x2d98f7
    int32_t * v9 = (int32_t *)((v1 + a4 & 0xffffffff) - 90); // 0x2d98fe
    *v9 = *v9 - 61;
    int32_t * v10 = (int32_t *)result; // 0x2d9902
    *v10 = *v10 + (int32_t)result;
    return result;
}

// Address range: 0x2d991e - 0x2d9a6a
int64_t function_2d991e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2d991e
    bool v1; // 0x2d991e
    bool v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = a1;
    int64_t v5 = a6;
    unsigned char v6 = (char)(a4 / 256); // 0x2d991e
    int64_t v7; // 0x2d991e
    unsigned char v8 = *(char *)(v7 + 52) + v6; // 0x2d991e
    uint32_t v9 = *(int32_t *)-0x3fc50543ff17cb3c; // 0x2d9922
    if (v8 == (char)v2 || (v2 ? v8 + (char)v2 <= v6 : v8 < v6)) {
        int64_t v10 = __asm_sti(a1); // 0x2d9936
        char * v11 = (char *)(8 * v7 + 8 + v7); // 0x2d9939
        unsigned char v12 = *v11; // 0x2d9939
        char v13 = (v9 ^ -256) < 0x13013d00; // 0x2d9939
        unsigned char v14 = v13 + (char)a5; // 0x2d9939
        char v15 = v12 - v14; // 0x2d9939
        *v11 = v15;
        int64_t result = v10; // 0x2d993c
        if (v15 == 0 || ((v9 ^ -256) < 0x13013d00 ? v14 != -1 || v12 < v15 - v13 : v12 < v14)) {
            int32_t * v16 = (int32_t *)(v4 + 0x1e80f93); // 0x2d993e
            uint32_t v17 = *v16; // 0x2d993e
            uint32_t v18 = (int32_t)v7 % 32; // 0x2d993e
            *v16 = ((v17 >> v18) % 2 ^ 1) << v18 | v17 & (-1 << v18) - 1;
            *(int64_t *)v7 = a5;
            result = v7 & 0xffffff00 | 151;
        }
        // 0x2d9953
        *(int32_t *)v4 = *(int32_t *)&v4 - (int32_t)a5;
        return result;
    }
    int32_t * v19 = (int32_t *)(a5 + 0x6e3a784c + (int64_t)v9); // 0x2d9984
    *v19 = *v19 | (int32_t)a3;
    __asm_outsb((int16_t)a3, *(char *)&v3);
    int64_t v20 = __asm_int3((int32_t)v4, v3); // 0x2d998c
    int32_t * v21 = (int32_t *)(v7 - 0x494effb8); // 0x2d998f
    *v21 = *v21 & (int32_t)((v20 + 198) % 256 | v20 & 0xffffff00);
    int64_t v22 = __asm_hlt(v4); // 0x2d999b
    char * v23 = (char *)(3 * v7); // 0x2d999c
    char v24 = *v23 | (char)v22; // 0x2d999c
    *v23 = v24;
    if (v24 < 1) {
        int64_t result2 = v22 & 0x69fe1787 | 0x9601e878; // 0x2d99c6
        char * v25 = (char *)(v3 - 97); // 0x2d99cd
        *v25 = *v25 + (char)a5;
        int32_t * v26 = (int32_t *)result2; // 0x2d99d2
        *v26 = *v26 + (int32_t)(int64_t)&v5;
        return result2;
    }
    int64_t v27 = unknown_ffffffffe82ed6a7(); // 0x2d99a1
    int32_t * v28 = (int32_t *)(v7 + 0x4f0aa06b); // 0x2d99a6
    int32_t v29 = *v28; // 0x2d99a6
    int32_t v30 = v3; // 0x2d99a6
    int32_t v31 = v29 + v30; // 0x2d99a6
    *v28 = v31;
    if (((v31 ^ v29) & (v31 ^ v30)) >= 0) {
        int64_t v32 = v4;
        *(char *)v32 = (char)__asm_int3((int32_t)v32, v3);
        return unknown_ffffffffb46ad3b8(v4 + (v1 ? -1 : 1));
    }
    int64_t v33 = unknown_21722f19(); // 0x2d9a13
    uint32_t v34 = *(int32_t *)(v27 + 2) % 32; // 0x2d9a1c
    bool v35 = false; // 0x2d9a1c
    if (v34 != 0) {
        int32_t * v36 = (int32_t *)(v7 - 0x41ddfe18); // 0x2d9a1c
        uint32_t v37 = *v36; // 0x2d9a1c
        *v36 = v37 >> v34 | (int32_t)((int64_t)v37 << (int64_t)(33 - v34));
        v35 = v34 == 1 == v37 < 0;
    }
    char v38 = v7 / 256 & a3; // 0x2d9a18
    if (llvm_ctpop_i8(v38) % 2 == 0) {
        // 0x2d99c4
        return v33 & -0xff01 | (int64_t)&g3;
    }
    // 0x2d9a26
    if (v38 < 0 != v35) {
        uint64_t v39 = unknown_ffffffffd8345c3a(); // 0x2d9a34
        int64_t v40 = v39 & -256 | (int64_t)((*(char *)v39 | (char)v39) - 13); // 0x2d9a3c
        char * v41 = (char *)(v40 - 0x5efe1776); // 0x2d9a3e
        *v41 = (char)(v39 / 256);
        return v40 & -0xff01 | 256 * (int64_t)*v41;
    }
    int32_t result3 = *(int32_t *)-0xf4c5959 + 0x17ff8000; // 0x2d9a57
    int32_t * v42 = (int32_t *)(a3 + 1); // 0x2d9a5c
    *v42 = *v42 + 0x1e8093c;
    char * v43 = (char *)(v3 - 0x6b60292c); // 0x2d9a62
    *v43 = *v43 + (char)((result3 >> 31) / 256);
    return result3;
}

// Address range: 0x2d9a7f - 0x2d9a87
int64_t function_2d9a7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d9a7f
    int64_t result; // 0x2d9a7f
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x2d9a90 - 0x2d9a9d
int64_t function_2d9a90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d9a90
    int64_t result; // 0x2d9a90
    return result;
}

// Address range: 0x2d9ad8 - 0x2d9ae1
int64_t function_2d9ad8(int64_t a1, int64_t a2) {
    // 0x2d9ad8
    int64_t result; // 0x2d9ad8
    int32_t * v1 = (int32_t *)(result - 0x7807da0a + 8 * result); // 0x2d9ad8
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x2d9aea - 0x2d9aeb
int64_t function_2d9aea(int64_t a1) {
    // 0x2d9aea
    int64_t result; // 0x2d9aea
    return result;
}

// Address range: 0x2d9af7 - 0x2d9af9
int64_t function_2d9af7(void) {
    // 0x2d9af7
    int64_t v1; // 0x2d9af7
    return function_2d9afd(v1);
}

// Address range: 0x2d9afa - 0x2d9afd
int64_t function_2d9afa(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 5); // 0x2d9afa
    int64_t result; // 0x2d9afa
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x2d9afd - 0x2d9b03
int64_t function_2d9afd(int64_t a1) {
    // 0x2d9afd
    return (int64_t)*(int32_t *)(a1 + 0x33a04db);
}

// Address range: 0x2d9b04 - 0x2d9b1e
int64_t function_2d9b04(int64_t a1, int64_t a2) {
    // 0x2d9b04
    int64_t v1; // 0x2d9b04
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(((unknown_34425d0a() / 256 + v2) % 256 | v2 & -256) + 8 * v1); // 0x2d9b0e
    *v3 = *v3 + (int32_t)a2;
    return unknown_718d7919();
}

// Address range: 0x2d9b3b - 0x2d9b3c
int64_t function_2d9b3b(void) {
    // 0x2d9b3b
    int64_t result; // 0x2d9b3b
    return result;
}

// Address range: 0x2d9bc2 - 0x2d9bcf
int64_t function_2d9bc2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2d9bc2
    int64_t v1; // 0x2d9bc2
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    char * v3 = (char *)(a2 + 0x35341d3); // 0x2d9bc4
    *v3 = *v3 - (char)a3;
    return function_b2faf02();
}

// Address range: 0x2d9bd1 - 0x2d9bf6
int64_t function_2d9bd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2d9bd1
    int64_t v1; // 0x2d9bd1
    int32_t * v2 = (int32_t *)(4 * v1 + a4); // 0x2d9bd3
    uint32_t v3 = *v2; // 0x2d9bd3
    *v2 = 0x1000000 * v3 | 0x800000 * (int32_t)(-1 - (int32_t)a2 < (int32_t)a1) | v3 / 512;
    __asm_in(-34);
    return function_16a9c08();
}

// Address range: 0x2d9bfe - 0x2d9c22
int64_t function_2d9bfe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d9bfe
    int64_t v1; // 0x2d9bfe
    int64_t v2 = v1 & a4;
    char * v3 = (char *)(v1 + 49); // 0x2d9c0e
    *v3 = *v3 + (char)v2;
    char v4 = v1 & v2; // 0x2d9c11
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x2d9c11
    bool v6; // 0x2d9bfe
    *(int64_t *)v1 = 0x4000 * (int64_t)v6 | 1024 * (int64_t)v6 | 256 * (int64_t)v6 | 64 * (int64_t)(v4 == 0) | 128 * (int64_t)(v4 < 0) | 4 * (int64_t)(v5 % 2 == 0) | 2;
    return function_3d2daa03(0x8f916f3a, 0xd4ed6048);
}

// Address range: 0x2d9c42 - 0x2d9cc4
int64_t function_2d9c42(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2d9c42
    int64_t v1; // 0x2d9c42
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 0x12eaad45); // 0x2d9c42
    *v3 = *v3 + (int32_t)a2;
    *(int32_t *)0xa15c08ab6f005a = (int32_t)v1;
    uint64_t v4 = v1 + 0x2655efcb; // 0x2d9c56
    unsigned char v5 = *(char *)(v4 % 256 + v2); // 0x2d9c5b
    unsigned char v6 = (char)(v4 / 256); // 0x2d9c5c
    int64_t v7; // 0x2d9c42
    unsigned char v8 = *(char *)&v7 + v6; // 0x2d9c5c
    int64_t v9 = v4 & 0xffff0000 | (int64_t)v5 | 256 * (int64_t)v8; // 0x2d9c5c
    int64_t v10; // 0x2d9c42
    *(int32_t *)a3 = *(int32_t *)&v10 + 0x2a02305f + (int32_t)(v8 < v6);
    int64_t result = v9 & 0xffffff00 | (int64_t)(*(char *)v9 | v5); // 0x2d9c67
    if ((int32_t)result < 0x3ad82e02) {
        // 0x2d9c73
        return result;
    }
    int64_t v11 = __asm_sti(a1); // 0x2d9cbc
    uint16_t v12 = (int16_t)v11; // 0x2d9cbe
    uint16_t v13 = (int16_t)*(char *)(((v2 / 256 + 169) % 256 | v2 & -256) + 0x1955cb00); // 0x2d9cbe
    return v11 & -0x10000 | (int64_t)(v12 / v13 % 256) | (int64_t)(256 * (v12 % v13));
}

// Address range: 0x2d9ce0 - 0x2d9d01
int64_t function_2d9ce0(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 0x79c70698); // 0x2d9ce3
    int64_t v2; // 0x2d9ce0
    *v1 = *v1 + (int32_t)v2;
    unknown_ffffffffe9ed55fa();
    return function_4624fe2c();
}

// Address range: 0x2d9d1e - 0x2d9d1f
int64_t function_2d9d1e(void) {
    // 0x2d9d1e
    int64_t result; // 0x2d9d1e
    return result;
}

// Address range: 0x2d9dde - 0x2d9e03
int64_t function_2d9dde(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = unknown_1ab514e4(); // 0x2d9dde
    int64_t v2; // 0x2d9dde
    *(char *)a1 = (char)v2;
    bool v3; // 0x2d9dde
    int64_t v4 = v3 ? -1 : 1; // 0x2d9de3
    char * v5 = (char *)v1; // 0x2d9def
    *v5 = *v5 + 18;
    uint32_t v6 = *(int32_t *)(v1 & 0xffffffff) + (int32_t)v1; // 0x2d9df2
    *(int32_t *)(v4 + a1) = *(int32_t *)(v4 + a2);
    uint64_t v7 = a4 / 256 + (int64_t)v6; // 0x2d9df6
    int64_t result = v7 % 256 | (int64_t)(v6 & -256); // 0x2d9df6
    int32_t * v8 = (int32_t *)(2 * result + 0x823afb2); // 0x2d9df8
    int32_t v9 = v2; // 0x2d9df8
    *v8 = *v8 + v9;
    *(int32_t *)result = v9;
    __asm_out_138((int16_t)a3, (char)v7);
    return result;
}

// Address range: 0x2d9e17 - 0x2d9e1c
int64_t function_2d9e17(void) {
    // 0x2d9e17
    return function_ffffffffb4833615();
}

// Address range: 0x2d9e65 - 0x2d9e6e
int64_t function_2d9e65(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2d9e65
    int64_t result; // 0x2d9e65
    *(char *)(a3 - 0x1b5a76b4) = (char)result;
    return result;
}

// Address range: 0x2d9ec3 - 0x2d9ec4
int64_t function_2d9ec3(int64_t a1) {
    // 0x2d9ec3
    int64_t result; // 0x2d9ec3
    return result;
}

// Address range: 0x2d9ed1 - 0x2d9ed2
int64_t function_2d9ed1(int64_t a1) {
    // 0x2d9ed1
    int64_t result; // 0x2d9ed1
    return result;
}

// Address range: 0x2d9edc - 0x2d9edd
int64_t function_2d9edc(int64_t a1) {
    // 0x2d9edc
    int64_t result; // 0x2d9edc
    return result;
}

// Address range: 0x2d9eeb - 0x2d9efd
int64_t function_2d9eeb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2d9eeb
    return unknown_ffffffffcd2edbf1(a1, a2, a3) + 0xc2d7fe18 & 0xffffffff;
}

// Address range: 0x2d9f22 - 0x2d9f23
int64_t function_2d9f22(void) {
    // 0x2d9f22
    int64_t result; // 0x2d9f22
    return result;
}

// Address range: 0x2d9f34 - 0x2d9f72
int64_t function_2d9f34(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2d9f34
    int64_t v1; // 0x2d9f34
    uint32_t v2 = *(int32_t *)(v1 + 0x13d00eb) & (int32_t)v1; // 0x2d9f34
    int64_t v3 = v1 & -254; // 0x2d9f40
    char * v4 = (char *)v3; // 0x2d9f42
    *v4 = *v4 + (char)(v1 / 256);
    int32_t * v5 = (int32_t *)(a4 + 14); // 0x2d9f44
    *v5 = *v5 & (int32_t)a3;
    char v6 = *(char *)((v3 + 186 & 190 | v1 & -256) + 9); // 0x2d9f4b
    int32_t * v7 = (int32_t *)((256 * (int64_t)(v6 | (char)(a4 / 256)) | a4 & -0xff01) + v1); // 0x2d9f58
    int32_t v8 = *v7; // 0x2d9f58
    *v7 = 2 * v8 | (int32_t)(v8 < 0);
    if (*(char *)((int64_t)v2 - 0x1f86ea8e) <= (char)(v2 / 256)) {
        function_2d9f22();
    }
    // 0x2d9f66
    return function_3d14a39();
}

// Address range: 0x2d9fad - 0x2d9fb6
int64_t function_2d9fad(int64_t a1, int64_t a2) {
    // 0x2d9fad
    int64_t result; // 0x2d9fad
    return result;
}

// Address range: 0x2d9fcc - 0x2d9fd6
int64_t function_2d9fcc(void) {
    // 0x2d9fcc
    unknown_522edcd2();
    return function_ffffffffa4e30cff();
}

// Address range: 0x2da011 - 0x2da01b
int64_t function_2da011(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 0x1c2e22a0 + 2 * a1); // 0x2da011
    *v1 = *v1 + (int32_t)a1;
    int64_t result; // 0x2da011
    return result;
}

// Address range: 0x2da04f - 0x2da054
int64_t function_2da04f(void) {
    // 0x2da04f
    return function_216877f();
}

// Address range: 0x2da082 - 0x2da08f
int64_t function_2da082(int64_t a1) {
    // 0x2da082
    int64_t v1; // 0x2da082
    int32_t * v2 = (int32_t *)(v1 + 0x64009900); // 0x2da084
    *v2 = *v2 + (int32_t)a1;
    return function_1da6e7();
}

// Address range: 0x2da09b - 0x2da09f
int64_t function_2da09b(int64_t a1, int64_t a2) {
    // 0x2da09b
    int64_t v1; // 0x2da09b
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x2da0a2 - 0x2da0a3
int64_t function_2da0a2(void) {
    // 0x2da0a2
    int64_t result; // 0x2da0a2
    return result;
}

// Address range: 0x2da0bf - 0x2da0cb
int64_t function_2da0bf(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 - 0x556ffe18); // 0x2da0bf
    *v1 = -*v1;
    return function_2da0a2();
}

// Address range: 0x2da0cb - 0x2da0d1
int64_t function_2da0cb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2da0cb
    __asm_iretd(a1, a2, a3);
    return a2 & 0xffffffff;
}

// Address range: 0x2da0e7 - 0x2da0e8
int64_t function_2da0e7(int64_t a1) {
    // 0x2da0e7
    int64_t result; // 0x2da0e7
    return result;
}

// Address range: 0x2da0f9 - 0x2da0fc
int64_t function_2da0f9(int64_t a1) {
    // 0x2da0f9
    int64_t result; // 0x2da0f9
    return result;
}

// Address range: 0x2da1a5 - 0x2da1a6
int64_t function_2da1a5(void) {
    // 0x2da1a5
    int64_t result; // 0x2da1a5
    return result;
}

// Address range: 0x2da1cb - 0x2da1ce
int64_t function_2da1cb(int64_t a1) {
    // 0x2da1cb
    int64_t result; // 0x2da1cb
    return result;
}

// Address range: 0x2da1da - 0x2da1e5
int64_t function_2da1da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2da1da
    int64_t result; // 0x2da1da
    *(char *)(a4 + 0x3d00ef8c) = (char)result;
    int64_t v1; // 0x2da1da
    *(int32_t *)a1 = *(int32_t *)&v1 + (int32_t)a4;
    return result;
}

// Address range: 0x2da204 - 0x2da206
int64_t function_2da204(void) {
    // 0x2da204
    return function_2da1a5();
}

// Address range: 0x2da210 - 0x2da265
int64_t function_2da210(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2da210
    int64_t v1; // 0x2da210
    *(int32_t *)-0xffb6fdcdfa86321 = (int32_t)v1;
    char v2 = v1 / 256; // 0x2da225
    *(char *)0x5d3a932c = *(char *)0x5d3a932c + v2;
    *(int16_t *)(v1 + 104 + v1) = (int16_t)v1;
    char * v3 = (char *)(a3 + 0x63f953bd); // 0x2da22f
    unsigned char v4 = *v3; // 0x2da22f
    unsigned char v5 = v4 + (char)v1; // 0x2da22f
    *v3 = v5;
    uint64_t v6 = a4 / 256; // 0x2da235
    int64_t v7 = v1 & -256; // 0x2da235
    int32_t * v8 = (int32_t *)(a1 - 7); // 0x2da237
    *v8 = *v8 + (int32_t)v1;
    int64_t v9 = -0x4de2ae00; // bp-8, 0x2da23a
    *(char *)-0x3413feba = *(char *)-0x3413feba + v2;
    *(int32_t *)(a3 + 16 + ((v1 + v6 + (int64_t)(v5 < v4)) % 256 | v7)) = (int32_t)(int64_t)&v9;
    int64_t result = v7 | (int64_t)(*(char *)0xa32100068038f0a | 90); // 0x2da253
    int64_t v10; // 0x2da210
    *(char *)a1 = *(char *)&v10 | (char)v6;
    *(char *)0x680a9760 = *(char *)0x680a9760 + v2;
    char * v11 = (char *)result; // 0x2da261
    *v11 = *v11 + (char)a4;
    return result;
}

// Address range: 0x2da277 - 0x2da27f
int64_t function_2da277(void) {
    // 0x2da277
    int64_t result; // 0x2da277
    return result;
}

// Address range: 0x2da2e8 - 0x2da2e9
int64_t function_2da2e8(void) {
    // 0x2da2e8
    int64_t result; // 0x2da2e8
    return result;
}

// Address range: 0x2da2f4 - 0x2da2f9
int64_t function_2da2f4(int64_t a1) {
    // 0x2da2f4
    return __asm_in((char)a1);
}

// Address range: 0x2da311 - 0x2da312
int64_t function_2da311(int64_t a1) {
    // 0x2da311
    int64_t result; // 0x2da311
    return result;
}

// Address range: 0x2da315 - 0x2da36a
int64_t function_2da315(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    *(char *)a3 = (char)a6;
    int64_t v3; // 0x2da315
    bool v4; // 0x2da315
    int32_t v5 = *(int32_t *)&v2 + (int32_t)v4 - (int32_t)v3; // 0x2da31e
    *(int32_t *)a1 = v5;
    if (v5 != 0) {
        // 0x2da33a
        *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v3;
        int64_t v6 = unknown_1036714a(); // 0x2da344
        char * v7 = (char *)(v1 + 22); // 0x2da349
        *v7 = *v7 | (char)a3;
        int32_t v8 = v6; // 0x2da352
        int32_t * v9 = (int32_t *)((int64_t)(95 * *(int32_t *)(v3 + 59)) + 0x6f32007e); // 0x2da35b
        int32_t * v10 = (int32_t *)(v6 + 2 * a7);
        uint32_t v11 = (int32_t)a7 % 32;
        uint64_t v12 = (int64_t)(33 - v11);
        uint32_t v13 = 32 - v11;
        while (true) {
            int32_t * v14 = (int32_t *)v1; // 0x2da352
            *v14 = *v14 + v8;
            v1 = 2 * v3 + 0xe8074884 + v1 & 0xffffffff;
            uint32_t v15 = *v9; // 0x2da35b
            uint32_t v16 = v15 + v8; // 0x2da35b
            unsigned char v17 = llvm_ctpop_i8((char)v16); // 0x2da35b
            *v9 = v16;
            if (v17 % 2 != 0) {
                if (v11 != 0) {
                    uint32_t v18 = *v10; // 0x2da363
                    *v10 = v18 >> v11 | (int32_t)(v16 < v15) << v13 | (int32_t)((int64_t)v18 << v12);
                }
            }
        }
    }
    int64_t result = 0x1e85ef2; // 0x2da322
    if ((v3 & 0xffffffff) != 1) {
        result = function_2da2e8();
    }
    // 0x2da324
    return result;
}

// Address range: 0x2da38a - 0x2da390
int64_t function_2da38a(void) {
    // 0x2da38a
    return function_ffffffff9db6ac34();
}

// Address range: 0x2da40b - 0x2da43a
int64_t function_2da40b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x4e3a4f3a); // 0x2da40b
    int64_t v2; // 0x2da40b
    *v1 = *v1 + (int32_t)v2;
    uint64_t v3 = (0x100000000 * v2 >> 32) * (int64_t)*(int32_t *)(v2 + 0x7cd8cd76); // 0x2da411
    int32_t v4 = v3 / 0x100000000; // 0x2da411
    unsigned char v5 = (char)v3; // 0x2da417
    unsigned char v6 = v5 + 1 + (char)(v4 != 0 == (v4 != -1)); // 0x2da417
    bool v7 = v4 != 0 == (v4 != -1) ? v6 <= v5 : v5 == -1; // 0x2da417
    __asm_out_134(-14, v6);
    unknown_3aca9e21();
    char * v8 = (char *)(v2 + 0x2d91c929); // 0x2da421
    *v8 = *v8 - (char)a4 + (char)v7;
    int32_t * v9 = (int32_t *)(int64_t)__asm_in(-24); // 0x2da429
    *v9 = *v9 + (int32_t)v2;
    char * v10 = (char *)(v2 - 0x6d7020ca); // 0x2da42b
    *v10 = *v10 | (char)(v3 / 0x10000000000);
    return __asm_int1();
}

// Address range: 0x2da47b - 0x2da47c
int64_t function_2da47b(void) {
    // 0x2da47b
    int64_t result; // 0x2da47b
    return result;
}

// Address range: 0x2da4bf - 0x2da4d4
int64_t function_2da4bf(void) {
    // 0x2da4bf
    return function_2da47b();
}

// Address range: 0x2da501 - 0x2da502
int64_t function_2da501(void) {
    // 0x2da501
    int64_t result; // 0x2da501
    return result;
}

// Address range: 0x2da502 - 0x2da504
int64_t function_2da502(void) {
    // 0x2da502
    return function_2da501();
}

// Address range: 0x2da506 - 0x2da507
int64_t function_2da506(void) {
    // 0x2da506
    int64_t result; // 0x2da506
    return result;
}
