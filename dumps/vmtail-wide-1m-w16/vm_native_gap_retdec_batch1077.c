/*
 * Targeted RetDec C for native executable gap queue batch 1077.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x102bee-0x102dee rank=- name=- kind=- bytes=- uncovered=-
 *   0x102dee-0x102fee rank=- name=- kind=- bytes=- uncovered=-
 *   0x102fee-0x1031ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x1031ee-0x1033ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x1033ee-0x1035ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x1037ee-0x1039ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x1039ee-0x103bee rank=- name=- kind=- bytes=- uncovered=-
 *   0x3070af-0x3072af rank=- name=- kind=- bytes=- uncovered=-
 *   0x3072af-0x3074af rank=- name=- kind=- bytes=- uncovered=-
 *   0x3074af-0x3076af rank=- name=- kind=- bytes=- uncovered=-
 *   0x3076af-0x3078af rank=- name=- kind=- bytes=- uncovered=-
 *   0x3078af-0x307aaf rank=- name=- kind=- bytes=- uncovered=-
 *   0x307aaf-0x307caf rank=- name=- kind=- bytes=- uncovered=-
 *   0x307caf-0x307eaf rank=- name=- kind=- bytes=- uncovered=-
 *   0x307eaf-0x3080af rank=- name=- kind=- bytes=- uncovered=-
 *   0x40ccdf-0x40cedf rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_102bb9();
int64_t function_102bcc();
int64_t function_102bee(int64_t a1, int64_t a2, int64_t a3);
int64_t function_102c45(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_102c8b(void);
int64_t function_102caf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_102ebe(void);
int64_t function_102ec1(int64_t a1);
int64_t function_102f6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_102fa2(void);
int64_t function_102ff3(void);
int64_t function_103014(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_103043(int64_t a1, int64_t a2);
int64_t function_1030ba(void);
int64_t function_1030ec(void);
int64_t function_1030f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_103172(void);
int64_t function_103176(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1031b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1031cc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_10326a(void);
int64_t function_103296(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1032cb(int64_t a1);
int64_t function_1032d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1032ee(void);
int64_t function_1032f8(void);
int64_t function_10330c(void);
int64_t function_103319(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_103327(int64_t a1, int64_t a2);
int64_t function_10332d(void);
int64_t function_103340(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_103369(void);
int64_t function_1033a8(void);
int64_t function_103413(void);
int64_t function_103426(void);
int64_t function_10342b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_103481(void);
int64_t function_103492(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1034fb(void);
int64_t function_10353e(void);
int64_t function_103579(void);
int64_t function_103580(void);
int64_t function_103595(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1035a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1037ee(void);
int64_t function_10382c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_10383c(int64_t a1, int64_t a2);
int64_t function_10388c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_10390e(int64_t a1, int64_t a2);
int64_t function_10396a(int64_t a1);
int64_t function_103a0d(void);
int64_t function_103a45(int64_t a1, int64_t a2, int64_t a3);
int64_t function_103a6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_103b1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_103b30(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_103b33(int64_t a1, int32_t a2, uint32_t a3, int64_t a4);
int64_t function_103b69(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_10938459();
int64_t function_3070af(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_307207(int64_t a1);
int64_t function_30734d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_307470(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3075c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_30770b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_307875(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3079b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_307afe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_307bf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_307d4d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_307efc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d109731();
int64_t function_40cc75();
int64_t function_40ccdf(int64_t a1);
int64_t function_40cd04(int64_t a1);
int64_t function_40cd63(void);
int64_t function_40cd74(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40cd85(void);
int64_t function_40cda2(void);
int64_t function_40cdc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40cde5(void);
int64_t function_40cdea(void);
int64_t function_40ce06(int64_t a1, int64_t a2);
int64_t function_40ce11(int64_t a1);
int64_t function_40ce20(void);
int64_t function_40ce25(void);
int64_t function_40ce6e(int64_t a1);
int64_t function_40ce80(int64_t a1, int64_t a2, int64_t a3);
int64_t function_40ce93(void);
int64_t function_40cec9(int64_t a1);
int64_t function_442ef0();
int64_t function_53117078();
int64_t function_57f30da0();
int64_t function_c823b();
int64_t function_ffffffff8ff0b1d1();
int64_t function_ffffffff95623606();
int64_t function_ffffffffb56928e1();
int64_t function_ffffffffc335bd79();
int64_t function_ffffffffe909efee();
int64_t unknown_107ad863();
int64_t unknown_50e8c327();
int64_t unknown_64c89cdc();
int64_t unknown_ffffffff8a9f5c91();
int64_t unknown_ffffffffd5feb81e();
int64_t unknown_ffffffffd672d43f();
int64_t unknown_ffffffffe5bc9616();
int64_t unknown_ffffffffe8e3fa58();

// Address range: 0x102bee - 0x102c24
int64_t function_102bee(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1;
    int64_t v2; // 0x102bee
    *(int32_t *)a2 = (int32_t)v2 + (int32_t)a1;
    int16_t v3 = a3; // 0x102bf0
    int64_t v4; // 0x102bee
    __asm_outsb(v3, *(char *)&v4);
    char v5 = __asm_in(v3); // 0x102bf4
    int32_t * v6 = (int32_t *)(v2 - 0x35fe17ff); // 0x102bf5
    int32_t v7 = *v6; // 0x102bf5
    int32_t v8 = v2; // 0x102bf5
    int32_t v9 = v7 - v8; // 0x102bf5
    *v6 = v9;
    uint32_t v10 = *(int32_t *)&v1; // 0x102bfb
    int64_t v11 = v2 & -256 | (int64_t)v5; // 0x102bfd
    if (v2 > (int64_t)v7) {
        v11 = function_102bb9();
    }
    int64_t v12 = v11; // 0x102bff
    if (((v9 ^ v7) & (v7 ^ v8)) < 0) {
        v12 = function_102bcc();
    }
    int32_t * v13 = (int32_t *)(v2 - 0x1fb420d2); // 0x102c04
    *v13 = *v13 + (int32_t)v12;
    return unknown_ffffffffe5bc9616() + 0x8304c6be & 0xffffff00 | (int64_t)(v10 / 256 % 256);
}

// Address range: 0x102c45 - 0x102c7a
int64_t function_102c45(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x102c45
    int64_t v1; // 0x102c45
    *(int32_t *)0x53276c822a01e89e = (int32_t)v1;
    int32_t * v2 = (int32_t *)(a3 + 0x3c0200bf); // 0x102c51
    *v2 = *v2 + (int32_t)a1;
    int64_t v3 = unknown_107ad863(); // 0x102c5d
    char * v4 = (char *)(v3 + 0x2ae5800); // 0x102c62
    *v4 = *v4 + (char)v3;
    int32_t * v5 = (int32_t *)(v1 + 0x31012900); // 0x102c6a
    int64_t v6; // 0x102c45
    *v5 = *v5 + (int32_t)(int64_t)&v6;
    __asm_in_133(-72);
    __asm_int3();
    return function_ffffffffc335bd79();
}

// Address range: 0x102c8b - 0x102c93
int64_t function_102c8b(void) {
    // 0x102c8b
    return unknown_ffffffff8a9f5c91();
}

// Address range: 0x102caf - 0x102e40
int64_t function_102caf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2 = a5;
    int64_t v3; // 0x102caf
    int32_t * v4 = (int32_t *)(v3 + a2); // 0x102cb1
    *v4 = *v4 & (int32_t)v3;
    int64_t v5 = (int64_t)&v2; // 0x102cb4
    char * v6 = (char *)(8 * v3 + v5); // 0x102cb6
    unsigned char v7 = *v6; // 0x102cb6
    *v6 = v7 / 128 | 2 * v7;
    int32_t * v8 = (int32_t *)(a1 - 111); // 0x102cb9
    uint32_t v9 = *v8; // 0x102cb9
    uint32_t v10 = (int32_t)a4; // 0x102cb9
    int32_t v11 = v9 + v10; // 0x102cb9
    *v8 = v11;
    if (a4 != 0) {
        int16_t v12 = a3; // 0x102cbe
        int32_t v13 = __asm_insd(v12); // 0x102cbe
        int32_t * v14 = (int32_t *)a1; // 0x102cbe
        *v14 = v13;
        __asm_out(v12, (char)v5);
        int64_t v15 = -1 - (int32_t)v3 < (int32_t)v3 ? 0xb10001e9 : 0xb10001e8; // 0x102cc6
        int32_t v16 = v5 - v15; // 0x102ccb
        *(int32_t *)-0x77f52f149d5cb2f7 = v16;
        *v14 = v16;
        bool v17; // 0x102caf
        return unknown_64c89cdc((v17 ? -4 : 4) + a1);
    }
    if (v11 == 0) {
        // 0x102d35
        return v5 & -0xff08 | 0x4000 * (int64_t)(v11 == 0) | 0x8000 * (int64_t)(v11 < 0) | 0x1000 * (int64_t)(v9 % 16 + v10 % 16 > 15) | 1024 * (int64_t)(llvm_ctpop_i8((char)v11) % 2 == 0) | 512;
    }
    // 0x102d71
    __asm_outsd((int16_t)a3, *(int32_t *)&v1);
    char * v18 = (char *)(v3 + 47); // 0x102d81
    *v18 = *v18 + (char)(a3 / 256);
    *(char *)0xffffffff = *(char *)0xffffffff - 1;
    int64_t v19 = unknown_ffffffffe8e3fa58(); // 0x102d8b
    int32_t * v20 = (int32_t *)(v1 - 0x1bdb9b60); // 0x102d90
    *v20 = (int32_t)v3 + 8 + *v20;
    *(int32_t *)-0x4f754c878c9b480 = (int32_t)v19;
    int64_t * v21 = (int64_t *)(v3 & 0xffffffff); // 0x102da6
    *v21 = -0x4d3e6a00;
    int64_t v22 = v19 + 0x2a5ecea8; // 0x102dac
    int64_t result = v22 & 0xffffffff; // 0x102dac
    char v23 = *(char *)0x68113cbf + (char)(v3 / 256); // 0x102db8
    *(char *)0x68113cbf = v23;
    if (v23 >= 0) {
        // 0x102dc0
        return result;
    }
    char * v24 = (char *)(result - 0x298cfeb4); // 0x102e30
    *v24 = *v24 + (char)v22;
    char * v25 = (char *)a3; // 0x102e3c
    *v25 = (char)*(int32_t *)-1 - 1 + *v25;
    return *v21 ^ 74;
}

// Address range: 0x102ebe - 0x102ec1
int64_t function_102ebe(void) {
    // 0x102ebe
    int64_t result; // 0x102ebe
    return result;
}

// Address range: 0x102ec1 - 0x102ec2
int64_t function_102ec1(int64_t a1) {
    // 0x102ec1
    int64_t result; // 0x102ec1
    return result;
}

// Address range: 0x102f6e - 0x102f73
int64_t function_102f6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x102f6e
    int64_t result; // 0x102f6e
    return result;
}

// Address range: 0x102fa2 - 0x102fa9
int64_t function_102fa2(void) {
    // 0x102fa2
    int64_t result; // 0x102fa2
    char * v1 = (char *)(result - 0x61444593); // 0x102fa2
    *v1 = *v1 | (char)result;
    return result;
}

// Address range: 0x102ff3 - 0x102ff6
int64_t function_102ff3(void) {
    // 0x102ff3
    int64_t result; // 0x102ff3
    return result;
}

// Address range: 0x103014 - 0x103043
int64_t function_103014(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x103014
    unknown_ffffffffd5feb81e();
    int64_t v1; // 0x103014
    __asm_outsd((int16_t)((a3 + 207) % 256 | a3 & 0xff00), (int32_t)v1);
    __asm_hlt();
    int64_t v2 = unknown_50e8c327(); // 0x103021
    int32_t * v3 = (int32_t *)(a4 - 77 + v1); // 0x103029
    int32_t v4 = a1; // 0x103029
    *v3 = *v3 + v4;
    char * v5 = (char *)(v2 - 0x17fe17ac); // 0x10302d
    *v5 = *v5 + (char)a4;
    *(int32_t *)0x10ea793a = *(int32_t *)0x10ea793a + v4;
    return unknown_ffffffffd672d43f();
}

// Address range: 0x103043 - 0x103050
int64_t function_103043(int64_t a1, int64_t a2) {
    // 0x103043
    return function_3d109731();
}

// Address range: 0x1030ba - 0x1030bc
int64_t function_1030ba(void) {
    // 0x1030ba
    int64_t v1; // 0x1030ba
    return function_1030f9(v1, v1, v1, v1);
}

// Address range: 0x1030ec - 0x1030ef
int64_t function_1030ec(void) {
    // 0x1030ec
    int64_t result; // 0x1030ec
    return result;
}

// Address range: 0x1030f9 - 0x103150
int64_t function_1030f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1030f9
    int64_t v1; // 0x1030f9
    *(int32_t *)a1 = 2 * (int32_t)v1;
    unsigned char v2 = *(char *)-0x53647ffe; // 0x1030fb
    char v3 = v1 / 256; // 0x1030fb
    unsigned char v4 = v2 + v3; // 0x1030fb
    *(char *)-0x53647ffe = v4;
    int64_t v5; // 0x1030f9
    int32_t v6 = *(int32_t *)&v5; // 0x103101
    int64_t v7 = v6 + (int32_t)v1 + (int32_t)(v4 < v2); // 0x103101
    uint32_t v8 = (int32_t)v5 >> 31; // 0x103104
    __asm_in_134((int16_t)v8);
    int64_t v9 = *(int64_t *)v7; // 0x10311c
    int64_t v10 = v7 + 8; // 0x10311c
    bool v11; // 0x1030f9
    int64_t v12 = (v11 ? -4 : 4) + a2; // 0x10311d
    char * v13 = (char *)(int64_t)v8; // 0x103122
    *v13 = *v13 - 30 + (char)((char)v8 > 226);
    int32_t * v14 = (int32_t *)(v9 + 23); // 0x10312a
    *v14 = *v14 + (int32_t)v10;
    char * v15 = (char *)(v12 + 8 * v1); // 0x10312d
    *v15 = *v15 & v3;
    *v13 = (char)a4;
    *(int32_t *)0xc5d3fe41 = *(int32_t *)0xc5d3fe41 - (int32_t)v9;
    return function_57f30da0(*(int64_t *)v10, v12);
}

// Address range: 0x103172 - 0x103173
int64_t function_103172(void) {
    // 0x103172
    int64_t result; // 0x103172
    return result;
}

// Address range: 0x103176 - 0x1031af
int64_t function_103176(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x103176
    int64_t v1; // 0x103176
    uint64_t v2 = v1;
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a1;
    char v3 = *(char *)(v2 + 0x5901e8aa) & (char)(v2 / 256); // 0x103181
    *(char *)0xaeb095 = *(char *)0xaeb095 + v3;
    int64_t result = __asm_int1(); // 0x1031a3
    *(char *)-0x6a376f53 = *(char *)-0x6a376f53 + v3;
    return result;
}

// Address range: 0x1031b1 - 0x1031cc
int64_t function_1031b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1031b1
    int64_t v1; // 0x1031b1
    int64_t v2 = v1 ^ 62; // 0x1031b1
    char v3 = v2; // 0x1031b3
    *(char *)a1 = v3;
    char * v4 = (char *)(v2 - 0x5ffec285); // 0x1031bb
    *v4 = *v4 + v3;
    unsigned char v5 = v3 + 118; // 0x1031c1
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x1031c1
    bool v7; // 0x1031b1
    *(int32_t *)((v7 ? -1 : 1) + a1) = __asm_insd((int16_t)a3);
    int64_t result = v1 & -256 | (int64_t)v5; // 0x1031c4
    if (v6 % 2 == 0) {
        result = function_103172();
    }
    // 0x1031c6
    return result;
}

// Address range: 0x1031cc - 0x103238
int64_t function_1031cc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1031cc
    int64_t v1; // 0x1031cc
    int64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = v2 & 0xffffffff; // 0x1031cc
    bool v5; // 0x1031cc
    if (v5) {
        // 0x1031d0
        return (v2 + 71) % 256 | v2 & 0xffffff00;
    }
    // 0x1031d3
    *(char *)0x7ece1cda = *(char *)0x7ece1cda + (char)(v1 / 256);
    int32_t * v6 = (int32_t *)(v2 + 0x3e90ba4f & 0xffffffff); // 0x1031e4
    *v6 = *v6 + (int32_t)a1;
    *(char *)a1 = *(char *)&v3;
    v4 = v3 + (v5 ? 0xffffffff : 1) & 0xffffffff;
    uint64_t v7 = a4 / 256; // 0x103209
    *(char *)0x1614614e = *(char *)0x1614614e + (char)v7;
    int64_t v8 = 0x73b0e000; // bp-24, 0x103212
    int32_t v9 = a4; // 0x103217
    *(int32_t *)(v1 & 0xffffffff) = v9;
    int64_t v10 = *(int64_t *)-0x637b1df360d7e67a | v7 % 256; // 0x103219
    int32_t * v11 = (int32_t *)(v10 + 0x3d00aa64); // 0x10321b
    *v11 = *v11 + (int32_t)(int64_t)&v8;
    int32_t * v12 = (int32_t *)(v10 - 12); // 0x103221
    uint32_t v13 = *v12; // 0x103221
    uint32_t v14 = v13 + v9; // 0x103221
    *v12 = v14;
    __asm_fldenv(*(int224_t *)&v4);
    *(int32_t *)0x13dc85e = *(int32_t *)0x13dc85e - (v14 < v13 ? -108 : -109);
    return v10 & 0xffffffff ^ 0xc8fd80ad;
}

// Address range: 0x10326a - 0x103271
int64_t function_10326a(void) {
    // 0x10326a
    int64_t result; // 0x10326a
    int32_t * v1 = (int32_t *)(result - 0x7f239bd6); // 0x10326a
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x103296 - 0x1032a9
int64_t function_103296(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 0x3d009cbb); // 0x103296
    *v1 = *v1 - 1;
    int64_t v2; // 0x103296
    int32_t * v3 = (int32_t *)(4 * v2 & 0x1fffffffc); // 0x10329e
    *v3 = *v3 | (int32_t)a3;
    return function_103327(a1, a2);
}

// Address range: 0x1032cb - 0x1032ce
int64_t function_1032cb(int64_t a1) {
    // 0x1032cb
    int64_t result; // 0x1032cb
    return result;
}

// Address range: 0x1032d9 - 0x1032de
int64_t function_1032d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1032d9
    return function_1032d9(a1, a2, a3, a4);
}

// Address range: 0x1032ee - 0x1032f3
int64_t function_1032ee(void) {
    // 0x1032ee
    int64_t result; // 0x1032ee
    return result;
}

// Address range: 0x1032f8 - 0x1032ff
int64_t function_1032f8(void) {
    // 0x1032f8
    int64_t result; // 0x1032f8
    return result;
}

// Address range: 0x10330c - 0x10330f
int64_t function_10330c(void) {
    // 0x10330c
    int64_t result; // 0x10330c
    return result;
}

// Address range: 0x103319 - 0x103327
int64_t function_103319(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_iretd(); // 0x10331f
    int64_t v2; // 0x103319
    *(char *)a3 = (char)v2 / 2;
    return function_103340(v1 & 0xffffffff, a2, a4, v2);
}

// Address range: 0x103327 - 0x10332c
int64_t function_103327(int64_t a1, int64_t a2) {
    // 0x103327
    int64_t v1; // 0x103327
    return v1 | 239;
}

// Address range: 0x10332d - 0x103338
int64_t function_10332d(void) {
    char v1 = *(char *)0xca76834; // 0x10332d
    int64_t v2; // 0x10332d
    *(char *)0xca76834 = v1 + (char)((uint64_t)v2 / 256);
    return function_10938459();
}

// Address range: 0x103340 - 0x103350
int64_t function_103340(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int16_t v1 = a3; // 0x103342
    int64_t v2; // 0x103340
    __asm_outsd(v1, (int32_t)v2);
    char v3 = *(char *)0x4229224c + (char)(v2 / 256); // 0x103345
    *(char *)0x4229224c = v3;
    char v4 = __asm_in(v1); // 0x10334b
    if (v3 >= 0) {
        // 0x103354
        return v2 & -256 | (int64_t)v4;
    }
    // 0x10334e
    return __asm_iretd();
}

// Address range: 0x103369 - 0x103378
int64_t function_103369(void) {
    // 0x103369
    return function_53117078();
}

// Address range: 0x1033a8 - 0x1033a9
int64_t function_1033a8(void) {
    // 0x1033a8
    int64_t result; // 0x1033a8
    return result;
}

// Address range: 0x103413 - 0x103415
int64_t function_103413(void) {
    // 0x103413
    return function_1033a8();
}

// Address range: 0x103426 - 0x10342b
int64_t function_103426(void) {
    // 0x103426
    return function_ffffffff8ff0b1d1();
}

// Address range: 0x10342b - 0x103437
int64_t function_10342b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10342b
    int64_t result; // 0x10342b
    __asm_out_135((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x103481 - 0x103486
int64_t function_103481(void) {
    // 0x103481
    return function_442ef0();
}

// Address range: 0x103492 - 0x1034b4
int64_t function_103492(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x103492
    int64_t v1; // 0x103492
    uint64_t v2 = v1;
    unsigned char v3 = (char)(v2 / 256); // 0x103498
    unsigned char v4 = (char)v1 + v3; // 0x103498
    int64_t v5 = 256 * (int64_t)v4 | v2 & -0xff01; // 0x103498
    *(int32_t *)a4 = (int32_t)(v4 < v3) + (int32_t)v1 - (int32_t)v5;
    unsigned char v6 = *(char *)-0x6c51ac5d; // 0x10349c
    unsigned char v7 = v6 + v4; // 0x10349c
    *(char *)-0x6c51ac5d = v7;
    int32_t * v8 = (int32_t *)(a1 + 0x8b9627f); // 0x1034a3
    *v8 = *v8 + 0x1c8a0068 + (int32_t)(v7 < v6);
    uint32_t v9 = 0x10000 * (int32_t)v1 >> 16 ^ -0x47429bf7; // 0x1034ad
    unsigned char v10 = *(char *)(v5 + (int64_t)(v9 % 256)); // 0x1034b2
    return (int64_t)v10 | (int64_t)(v9 & -256);
}

// Address range: 0x1034fb - 0x1034fc
int64_t function_1034fb(void) {
    // 0x1034fb
    int64_t result; // 0x1034fb
    return result;
}

// Address range: 0x10353e - 0x103544
int64_t function_10353e(void) {
    // 0x10353e
    return function_1034fb();
}

// Address range: 0x103579 - 0x10357a
int64_t function_103579(void) {
    // 0x103579
    int64_t result; // 0x103579
    return result;
}

// Address range: 0x103580 - 0x103581
int64_t function_103580(void) {
    // 0x103580
    int64_t result; // 0x103580
    return result;
}

// Address range: 0x103595 - 0x10359e
int64_t function_103595(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x103595
    int64_t v1; // 0x103595
    char * v2 = (char *)(2 * a4 - 117 + v1); // 0x103595
    *v2 = *v2 + (char)a3;
    return function_ffffffff95623606();
}

// Address range: 0x1035a0 - 0x1035b3
int64_t function_1035a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1035a0
    int64_t v1; // 0x1035a0
    *(char *)-0x6770d06a3c58d6ff = (char)v1;
    if (a4 == 0) {
        function_103580();
    }
    // 0x1035b1
    return function_103579();
}

// Address range: 0x1037ee - 0x1037ef
int64_t function_1037ee(void) {
    // 0x1037ee
    int64_t result; // 0x1037ee
    return result;
}

// Address range: 0x10382c - 0x103835
int64_t function_10382c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x10382c
    __asm_rcl(*(int32_t *)(a4 - 113));
    int64_t v1; // 0x10382c
    return v1 & -0xff01 | (int64_t)&g1;
}

// Address range: 0x10383c - 0x103842
int64_t function_10383c(int64_t a1, int64_t a2) {
    // 0x10383c
    int64_t result; // 0x10383c
    *(char *)a2 = 2 * (char)result;
    return result;
}

// Address range: 0x10388c - 0x1038bb
int64_t function_10388c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 - 55); // 0x10388c
    int32_t v2 = a4; // 0x10388c
    *v1 = *v1 + v2;
    int64_t result = a4 & 0xffffffff; // 0x10389f
    int64_t v3; // 0x10388c
    *(int32_t *)result = *(int32_t *)&v3 - v2;
    char * v4 = (char *)(a3 & -256 | 58); // 0x1038a7
    int64_t v5; // 0x10388c
    *v4 = *v4 - (char)((uint64_t)v5 / 256);
    *(int32_t *)0x7bf31f2bb8160ddb = v2;
    return result;
}

// Address range: 0x10390e - 0x103912
int64_t function_10390e(int64_t a1, int64_t a2) {
    // 0x10390e
    int64_t result; // 0x10390e
    return result;
}

// Address range: 0x10396a - 0x103985
int64_t function_10396a(int64_t a1) {
    char * v1 = (char *)(a1 - 0x7ff69ffa); // 0x10396a
    int64_t v2; // 0x10396a
    *v1 = *v1 + (char)v2;
    int64_t v3 = v2 + 0xef8244c0; // 0x103970
    char * v4 = (char *)(v2 + 0x36a072e6); // 0x103975
    *v4 = *v4 + (char)v3 + (char)((int32_t)v2 < 0x107dbb40);
    return v3 & 0xffffffff;
}

// Address range: 0x103a0d - 0x103a0e
int64_t function_103a0d(void) {
    // 0x103a0d
    int64_t result; // 0x103a0d
    return result;
}

// Address range: 0x103a45 - 0x103a4d
int64_t function_103a45(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 0x6ae895f7); // 0x103a45
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x103a45
    return result;
}

// Address range: 0x103a6b - 0x103a97
int64_t function_103a6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x103a6b
    return __asm_int1();
}

// Address range: 0x103b1a - 0x103b30
int64_t function_103b1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x103b1a
    int64_t v1; // 0x103b1a
    int64_t v2 = v1 & a3;
    *(char *)a2 = (char)v1;
    int32_t v3 = *(int32_t *)((v2 & 0xffffffff) - 0xf3cb279); // 0x103b26
    int64_t result = function_103b33(a4, v3 | (int32_t)a2, (int32_t)v2, (int64_t)&g2); // 0x103b2e
    return result;
}

// Address range: 0x103b30 - 0x103b33
int64_t function_103b30(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x103b30
    int64_t v1; // 0x103b30
    return (int64_t)((int32_t)v1 - *(int32_t *)(a4 + 104));
}

// Address range: 0x103b33 - 0x103b5d
int64_t function_103b33(int64_t a1, int32_t a2, uint32_t a3, int64_t a4) {
    // 0x103b33
    int64_t v1; // 0x103b33
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)((int64_t)a3 + 90); // 0x103b3b
    *v3 = *v3 - (int32_t)(v2 % 256 * (v1 % 256) | v2 & 0xffff0000);
    int64_t result = a3; // 0x103b3e
    *(int32_t *)a1 = a3;
    int32_t * v4 = (int32_t *)(v1 - 24); // 0x103b46
    *v4 = 2 * *v4;
    bool v5; // 0x103b33
    int32_t * v6 = (int32_t *)(a1 + 0x1b0188e4 + (v5 ? -4 : 4)); // 0x103b49
    *v6 = *v6 + (int32_t)v1;
    char * v7 = (char *)(result - 99); // 0x103b4f
    *v7 = *v7 + (char)a3;
    return result;
}

// Address range: 0x103b69 - 0x103b6e
int64_t function_103b69(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x103b69
    int64_t v1; // 0x103b69
    return v1 + a4 & 0xffffffff;
}

// Address range: 0x3070af - 0x307207
int64_t function_3070af(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x3d7d1717; // bp-32, 0x30712d
    int64_t v2 = a6 + 16; // 0x307165
    int64_t v3 = *(int64_t *)v2; // 0x307165
    int64_t * v4 = (int64_t *)(a6 - 8); // 0x307165
    int64_t v5 = a6 - 16; // 0x307169
    int64_t * v6 = (int64_t *)v5; // 0x307169
    *(int64_t *)(a6 - 24) = v3;
    *v4 = 0x5b039661;
    *v6 = a7;
    int64_t * v7 = (int64_t *)(a6 + 8); // 0x30718b
    *v7 = *v4;
    *v6 = v5;
    *v4 = v3;
    int64_t * v8 = (int64_t *)a6; // 0x3071af
    *(int64_t *)(a6 + 32) = *v8;
    *v4 = a4;
    *v8 = v2;
    *v7 = a6 + 24;
    return function_c823b(a1, a2, a3, *v8, a5, a6, (int64_t)&v1);
}

// Address range: 0x307207 - 0x30734d
int64_t function_307207(int64_t a1) {
    int64_t v1 = a1; // bp-32, 0x307269
    int64_t v2 = a1 - 8; // 0x307285
    int64_t * v3 = (int64_t *)v2; // 0x307286
    *v3 = 0x4b8905ec;
    int64_t * v4 = (int64_t *)(a1 - 16); // 0x30728e
    int64_t v5 = *(int64_t *)(a1 + 24); // 0x30729a
    *v4 = v5;
    int64_t * v6 = (int64_t *)(a1 - 24); // 0x30729e
    *v6 = v5;
    int64_t * v7 = (int64_t *)(a1 - 32); // 0x3072a1
    *v7 = v5;
    int64_t * v8 = (int64_t *)(a1 + 8); // 0x3072ad
    int64_t v9 = *v8; // 0x3072ad
    *v4 = v9;
    *v7 = v2;
    *(int64_t *)(a1 - 40) = *v6;
    *v3 = v5;
    *v7 = v9;
    *v8 = *v6;
    int64_t v10 = *v4; // 0x307313
    *v6 = v10;
    *v7 = v10;
    int64_t v11 = *v3; // 0x30732c
    *v4 = v11;
    *v6 = v11;
    int64_t v12; // 0x307207
    return function_c823b(a1, v12, v12, v12, v12, v12, (int64_t)&v1);
}

// Address range: 0x30734d - 0x307470
int64_t function_30734d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x30734d
    int64_t v1; // bp-32, 0x30734d
    int64_t v2 = (int64_t)&v1; // 0x30738a
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x307397
    *v3 = 0x3021ef;
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x3073b1
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x3073c6
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x3073cb
    int64_t * v7 = (int64_t *)(v2 + 32); // 0x3073d5
    int64_t v8 = *v7; // 0x3073d5
    *v4 = v8;
    *v5 = v8;
    *v6 = v8;
    int64_t v9 = v2 + 16; // 0x3073e8
    int64_t * v10 = (int64_t *)v9; // 0x3073e8
    int64_t v11 = *v10; // 0x3073e8
    *v5 = v11;
    *v6 = v11;
    *v4 = v8;
    *v10 = v1;
    *v5 = a5;
    *v4 = v11;
    *v7 = v1;
    *v4 = v2;
    v1 = v9;
    int64_t v12 = *v3; // 0x30745c
    v1 = v12;
    *v4 = v12;
    int64_t v13; // 0x30734d
    return function_c823b(a1, a2, a3, a4, *v5, v13, a3);
}

// Address range: 0x307470 - 0x3075c2
int64_t function_307470(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x307470
    int64_t v1; // bp-24, 0x307470
    v1 = (int64_t)&v1;
    int64_t v2; // 0x307470
    return function_c823b(a1, 0x1fdd1235, a3, v2, v2, v2, a4);
}

// Address range: 0x3075c2 - 0x30770b
int64_t function_3075c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x302928; // bp-24, 0x30760b
    int64_t v2 = (int64_t)&v1; // 0x307676
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x30767e
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x30767e
    *v4 = v3;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x307686
    *v5 = v3;
    int64_t v6 = *v5; // 0x30769f
    *v5 = 310;
    *v4 = a6;
    int64_t v7 = *v5; // 0x3076b6
    *(int64_t *)(v2 - 24) = v7;
    int64_t * v8 = (int64_t *)(v2 + 8); // 0x3076bf
    *v8 = *v4;
    *v5 = v6;
    *(int64_t *)(v2 + 24) = v6;
    *v5 = *v4;
    *v4 = v1;
    *v5 = v1;
    int64_t v9 = *v8; // 0x3076f7
    v1 = v9;
    *v4 = v9;
    int64_t v10; // 0x3075c2
    return function_c823b(a1, 310, a3, a4, v7, v10, v1);
}

// Address range: 0x30770b - 0x307875
int64_t function_30770b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x30770b
    int64_t v1; // bp-64, 0x30770b
    int64_t v2 = (int64_t)&v1; // 0x3077e3
    int64_t v3 = v2 + 16; // 0x3077fe
    *(int64_t *)v3 = 169;
    v1 = 0x4dfa0752;
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x30780c
    *(int64_t *)(v2 + 32) = v1;
    int64_t v5 = v2 + 8; // 0x307819
    int64_t * v6 = (int64_t *)v5; // 0x30781d
    v1 = a4;
    *v4 = *v6;
    int64_t v7 = v1;
    v1 = v3;
    v1 = *v6;
    *v4 = v5;
    int64_t v8; // 0x30770b
    return function_c823b(v8, a2, a3, v7, a5, a6, 0x302b68);
}

// Address range: 0x307875 - 0x3079b6
int64_t function_307875(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x555fe425; // bp-40, 0x3078d8
    int64_t v2 = (int64_t)&v1; // 0x307919
    int64_t v3 = v2 + 16; // 0x307921
    int64_t * v4 = (int64_t *)v3; // 0x307921
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x307921
    int64_t v6 = v2 - 16; // 0x307925
    int64_t * v7 = (int64_t *)v6; // 0x307925
    *v7 = v6;
    bool v8; // 0x307875
    *v5 = 0x4000 * (int64_t)v8 | 2048 * (int64_t)v8 | 1024 * (int64_t)v8 | 512 * (int64_t)v8 | 256 * (int64_t)v8 | 128 * (int64_t)v8 | 64 * (int64_t)v8 | 16 * (int64_t)v8 | (int64_t)v8 | 4 * (int64_t)v8 | 2;
    *v4 = v1;
    *v5 = 0x135e5aae;
    *v7 = *v4;
    *(int64_t *)(v2 + 32) = v1;
    v1 = v3;
    int64_t v9; // 0x307875
    return function_c823b(a1, a2, a3, v9, v9, v9, v3);
}

// Address range: 0x3079b6 - 0x307afe
int64_t function_3079b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3079b6
    int64_t v1; // 0x3079b6
    return function_c823b(a1, a2, a3, a4, v1, v1, 0x302fd0);
}

// Address range: 0x307afe - 0x307bf8
int64_t function_307afe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x63adc7d0; // bp-40, 0x307ba7
    *(int64_t *)((int64_t)&v1 - 8) = 0x63adc7d0;
    int64_t v2; // 0x307afe
    return function_c823b(a1, 0x63adc7d0, a3, 0x3031fa, v2, v2, 0x4971a1d8);
}

// Address range: 0x307bf8 - 0x307d4d
int64_t function_307bf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x10d58a24; // bp-24, 0x307c82
    int64_t v2 = (int64_t)&v1; // 0x307cc5
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x307ccd
    *v3 = 0x78a63e80;
    int64_t v4 = v2 - 16; // 0x307cd2
    int64_t * v5 = (int64_t *)v4; // 0x307cd2
    *v5 = 0x5bf798a1;
    *(int64_t *)(v2 - 24) = a7;
    int64_t * v6 = (int64_t *)(v2 + 8); // 0x307cde
    *v6 = *v3;
    *v5 = v4;
    bool v7; // 0x307bf8
    *v3 = 0x4000 * (int64_t)(bool)v7 | 2048 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | 128 * (int64_t)v7 | 64 * (int64_t)v7 | 16 * (int64_t)v7 | (int64_t)v7 | 4 * (int64_t)v7 | 2;
    *(int64_t *)(v2 + 32) = v1;
    *v3 = a3;
    v1 = v2 + 16;
    int64_t v8 = *v6; // 0x307d2f
    v1 = v8;
    *v3 = v8;
    return function_c823b(a1, a2, a3, 0x303424, a5, a6, v1);
}

// Address range: 0x307d4d - 0x307efc
int64_t function_307d4d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x307d4d
    int64_t v1; // bp-32, 0x307d4d
    int64_t v2 = (int64_t)&v1; // 0x307e08
    int64_t v3 = v2 + 16; // 0x307e10
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x307e10
    *(int64_t *)(v2 - 24) = a7 - 0x7d679088;
    *(int64_t *)(v2 + 8) = a7;
    *(int64_t *)(v2 + 32) = *(int64_t *)v3;
    v1 = a6;
    *v4 = a2;
    *(int64_t *)(v2 - 16) = a5;
    int64_t v5 = v1; // 0x307ef2
    v1 = v3;
    return function_c823b(a1, *v4, a3, a4, a5, v5, v3);
}

// Address range: 0x307efc - 0x308060
int64_t function_307efc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x307efc
    int64_t v1; // bp-56, 0x307efc
    int64_t v2 = (int64_t)&v1; // 0x307fb1
    int64_t v3 = v2 + 16; // 0x307fb7
    v1 = v3;
    int64_t v4 = *(int64_t *)(v2 + 32); // 0x307fc6
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x307fc6
    *v5 = v4;
    int64_t v6 = v2 - 8; // 0x307fe6
    int64_t * v7 = (int64_t *)v6; // 0x307ff6
    *v7 = v6;
    bool v8; // 0x307efc
    v1 = 0x4000 * (int64_t)v8 | 2048 * (int64_t)v8 | 1024 * (int64_t)v8 | 512 * (int64_t)v8 | 256 * (int64_t)v8 | 128 * (int64_t)v8 | 64 * (int64_t)v8 | 16 * (int64_t)v8 | (int64_t)v8 | 4 * (int64_t)v8 | 2;
    int64_t * v9 = (int64_t *)(v2 + 24); // 0x308002
    *v9 = *v5;
    *v7 = v4 + 0x6e9dc600;
    *v5 = v4;
    *(int64_t *)(v2 + 40) = v4;
    int64_t * v10 = (int64_t *)v3; // 0x308029
    int64_t v11 = *v10; // 0x308029
    *v5 = v11;
    v1 = v11;
    int64_t v12 = *v9; // 0x308042
    *v10 = v12;
    *v5 = v12;
    int64_t v13; // 0x307efc
    return function_c823b(a1, a2, a3, a4, a5, v13, 0x188abeb);
}

// Address range: 0x40ccdf - 0x40ccea
int64_t function_40ccdf(int64_t a1) {
    // 0x40ccdf
    int64_t v1; // 0x40ccdf
    *(int32_t *)a1 = (int32_t)v1 + 0x4420de91 | (int32_t)v1;
    return function_40cc75();
}

// Address range: 0x40cd04 - 0x40cd07
int64_t function_40cd04(int64_t a1) {
    // 0x40cd04
    int64_t result; // 0x40cd04
    return result;
}

// Address range: 0x40cd63 - 0x40cd64
int64_t function_40cd63(void) {
    // 0x40cd63
    int64_t result; // 0x40cd63
    return result;
}

// Address range: 0x40cd74 - 0x40cd7b
int64_t function_40cd74(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40cd74
    int64_t v1; // 0x40cd74
    *(int32_t *)a4 = (int32_t)(v1 & a3);
    return function_ffffffffe909efee();
}

// Address range: 0x40cd85 - 0x40cd8b
int64_t function_40cd85(void) {
    // 0x40cd85
    int64_t result; // 0x40cd85
    return result;
}

// Address range: 0x40cda2 - 0x40cdaa
int64_t function_40cda2(void) {
    // 0x40cda2
    int64_t v1; // 0x40cda2
    return v1 & 0xffffffff ^ 0x8c04772f;
}

// Address range: 0x40cdc0 - 0x40cdc4
int64_t function_40cdc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40cdc0
    bool v1; // 0x40cdc0
    if (a4 != 1 && !v1) {
        function_40cd63();
    }
    // 0x40cdc2
    return function_40ce06(a1, a2);
}

// Address range: 0x40cde5 - 0x40cdea
int64_t function_40cde5(void) {
    // 0x40cde5
    return function_ffffffffb56928e1();
}

// Address range: 0x40cdea - 0x40cdf1
int64_t function_40cdea(void) {
    // 0x40cdea
    int64_t result; // 0x40cdea
    return result;
}

// Address range: 0x40ce06 - 0x40ce09
int64_t function_40ce06(int64_t a1, int64_t a2) {
    // 0x40ce06
    int64_t v1; // 0x40ce06
    return v1 | 104;
}

// Address range: 0x40ce11 - 0x40ce12
int64_t function_40ce11(int64_t a1) {
    // 0x40ce11
    int64_t result; // 0x40ce11
    return result;
}

// Address range: 0x40ce20 - 0x40ce21
int64_t function_40ce20(void) {
    // 0x40ce20
    int64_t result; // 0x40ce20
    return result;
}

// Address range: 0x40ce25 - 0x40ce26
int64_t function_40ce25(void) {
    // 0x40ce25
    int64_t result; // 0x40ce25
    return result;
}

// Address range: 0x40ce6e - 0x40ce71
int64_t function_40ce6e(int64_t a1) {
    // 0x40ce6e
    int64_t result; // 0x40ce6e
    return result;
}

// Address range: 0x40ce80 - 0x40ce83
int64_t function_40ce80(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40ce80
    return function_40ce20();
}

// Address range: 0x40ce93 - 0x40ce95
int64_t function_40ce93(void) {
    // 0x40ce93
    int64_t result; // 0x40ce93
    return result;
}

// Address range: 0x40cec9 - 0x40ceca
int64_t function_40cec9(int64_t a1) {
    // 0x40cec9
    int64_t result; // 0x40cec9
    return result;
}
