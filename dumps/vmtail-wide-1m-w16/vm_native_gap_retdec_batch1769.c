/*
 * Targeted RetDec C for native executable gap queue batch 1769.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x65ce3-0x65ee3 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd0dc7-0xd0fc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd11c7-0xd13c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xe2966-0xe2b66 rank=- name=- kind=- bytes=- uncovered=-
 *   0xe2b66-0xe2d66 rank=- name=- kind=- bytes=- uncovered=-
 *   0xea79c-0xea99c rank=- name=- kind=- bytes=- uncovered=-
 *   0xea99c-0xeab9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xeab9c-0xead9c rank=- name=- kind=- bytes=- uncovered=-
 *   0x103bee-0x103dee rank=- name=- kind=- bytes=- uncovered=-
 *   0x103dee-0x103fee rank=- name=- kind=- bytes=- uncovered=-
 *   0x103fee-0x1041ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x127adc-0x127cdc rank=- name=- kind=- bytes=- uncovered=-
 *   0x127cdc-0x127edc rank=- name=- kind=- bytes=- uncovered=-
 *   0x127edc-0x1280dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x1cb955-0x1cbb55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1cbb55-0x1cbd55 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g9;
extern int g10;
extern int g11;
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

int64_t function_103bee(int64_t a1);
int64_t function_103c2a(int64_t a1);
int64_t function_103c2c(int64_t a1);
int64_t function_103c38(void);
int64_t function_103c57(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_103d28(void);
int64_t function_103e3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_103e47(int64_t a1);
int64_t function_103e5f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_103ec2(void);
int64_t function_103f04(int64_t a1, int64_t a2, int64_t a3);
int64_t function_103f5d(void);
int64_t function_103fb0(void);
int64_t function_103fe4(int64_t a1);
int64_t function_10402e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_104041(void);
int64_t function_10404f(void);
int64_t function_104067(void);
int64_t function_104093(void);
int64_t function_104097(void);
int64_t function_1040a1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_104167(void);
int64_t function_104172(void);
int64_t function_1041aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1041d9(int64_t a1);
int64_t function_11c41336();
int64_t function_127adc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t result);
int64_t function_127bac(void);
int64_t function_127bbd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_127c1b(int64_t a1);
int64_t function_127c76(void);
int64_t function_127cee(int64_t a1);
int64_t function_127d1c(void);
int64_t function_127d66(int64_t a1, int64_t a2, int64_t a3);
int64_t function_127d7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_127ddf(void);
int64_t function_127e1a(int64_t a1);
int64_t function_127e48(int64_t a1);
int64_t function_127e72(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_127e7c(void);
int64_t function_127fb1(int64_t a1);
int64_t function_127fbc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_127ffe(int64_t a1);
int64_t function_12803d(int64_t a1, int64_t a2);
int64_t function_12805c(void);
int64_t function_176a1342();
int64_t function_19cb0ef6();
int64_t function_1cb955(void);
int64_t function_1cb958(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1cba68(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1cbbec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1f71942();
int64_t function_2758da();
int64_t function_38984d5f();
int64_t function_45a29163();
int64_t function_54f3751b();
int64_t function_65ce3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_65d95(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_65da6(int64_t a1);
int64_t function_65daa(void);
int64_t function_65db0(void);
int64_t function_65df1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_65e4e(void);
int64_t function_65e68(int64_t a1, int64_t a2, int64_t a3);
int64_t function_65e6f(int64_t a1, int64_t a2);
int64_t function_65e9a(void);
int64_t function_65ea8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_8bd458b();
int64_t function_c6d58();
int64_t function_cc59c();
int64_t function_d0dc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d0dde(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_d0e8a(void);
int64_t function_d0e9c(int64_t a1);
int64_t function_d0eaf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_d11c7(void);
int64_t function_d1207(int64_t a1);
int64_t function_d1298(void);
int64_t function_d129f(int64_t a1);
int64_t function_d1305(void);
int64_t function_d1333(void);
int64_t function_d1345(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_e2966(int32_t a1);
int64_t function_e298f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_e2af2(void);
int64_t function_e2b4c(void);
int64_t function_e2b62(int64_t a1);
int64_t function_e2b74(int64_t a1);
int64_t function_e2b78(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e2ba0(int64_t a1, int64_t a2);
int64_t function_e2be3(void);
int64_t function_e2c07(int64_t a1);
int64_t function_e2c37(void);
int64_t function_e2c7c(void);
int64_t function_e2c83(void);
int64_t function_e2c97(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e2cf2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e2d55(void);
int64_t function_e5e36();
int64_t function_ea79c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ea851(int64_t a1);
int64_t function_ea8da(void);
int64_t function_ea960(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ea97e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_ea9f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_eaa7d(int64_t a1);
int64_t function_eaaef(void);
int64_t function_eab35(int64_t a1);
int64_t function_eabd2(int64_t a1);
int64_t function_eabe0(void);
int64_t function_eac02(void);
int64_t function_eac05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_eac8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_eaccd(void);
int64_t function_ead1c(int64_t a1);
int64_t function_ead25(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ffffffff8202aa16();
int64_t function_ffffffff89d47f8d();
int64_t function_ffffffff8e163ec8();
int64_t function_ffffffffd2beae07();
int64_t unknown_107e468();
int64_t unknown_133eb9f3();
int64_t unknown_1a123c6c();
int64_t unknown_287dc8d0();
int64_t unknown_28acd7b2();
int64_t unknown_2a41f47c();
int64_t unknown_3ab12a2d();
int64_t unknown_3d73920e();
int64_t unknown_3f12dca5();
int64_t unknown_4a3cf9ed();
int64_t unknown_4af083ad();
int64_t unknown_4ba71e3e();
int64_t unknown_5db77b1a();
int64_t unknown_6853f419();
int64_t unknown_7498a74e();
int64_t unknown_7576878a();
int64_t unknown_7b6fd791();
int64_t unknown_8146a12();
int64_t unknown_e41badf();
int64_t unknown_ffffffff820ade00();
int64_t unknown_ffffffff8ac26c3f();
int64_t unknown_ffffffff9151d0fc();
int64_t unknown_ffffffffa0f03594();
int64_t unknown_ffffffffa334208a();
int64_t unknown_ffffffffae9225a8();
int64_t unknown_ffffffffaf2839df();
int64_t unknown_ffffffffb3218f79();
int64_t unknown_ffffffffba59c6c1();
int64_t unknown_ffffffffc01e7c45();
int64_t unknown_ffffffffc033827b();
int64_t unknown_ffffffffca0add0a();
int64_t unknown_ffffffffcb289021();
int64_t unknown_ffffffffcc45398e();
int64_t unknown_ffffffffd18c80a7();
int64_t unknown_ffffffffd44e656f();
int64_t unknown_ffffffffe0cc15cf();
int64_t unknown_ffffffffe8524604();
int64_t unknown_ffffffffe87a88c5();
int64_t unknown_ffffffffe8f12c9c();

// Address range: 0x65ce3 - 0x65d5d
int64_t function_65ce3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x65ce3
    __readfsqword(40);
    return function_2758da();
}

// Address range: 0x65d95 - 0x65d9d
int64_t function_65d95(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x65d95
    int64_t v1; // 0x65d95
    return v1 ^ 33;
}

// Address range: 0x65da6 - 0x65da9
int64_t function_65da6(int64_t a1) {
    // 0x65da6
    int64_t result; // 0x65da6
    return result;
}

// Address range: 0x65daa - 0x65dab
int64_t function_65daa(void) {
    // 0x65daa
    int64_t result; // 0x65daa
    return result;
}

// Address range: 0x65db0 - 0x65db9
int64_t function_65db0(void) {
    // 0x65db0
    return function_65daa();
}

// Address range: 0x65df1 - 0x65e35
int64_t function_65df1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x65df1
    int64_t v1; // 0x65df1
    bool v2; // 0x65df1
    int64_t result = v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512; // 0x65df1
    *(int32_t *)0x7862a475774ac260 = (int32_t)result;
    return result;
}

// Address range: 0x65e4e - 0x65e4f
int64_t function_65e4e(void) {
    // 0x65e4e
    int64_t result; // 0x65e4e
    return result;
}

// Address range: 0x65e68 - 0x65e6e
int64_t function_65e68(int64_t a1, int64_t a2, int64_t a3) {
    // 0x65e68
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x65e68
    return v1 & -0xff01 | (int64_t)&g9;
}

// Address range: 0x65e6f - 0x65e7a
int64_t function_65e6f(int64_t a1, int64_t a2) {
    // 0x65e6f
    int64_t v1; // 0x65e6f
    uint64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)v1;
    bool v3; // 0x65e6f
    int64_t v4 = v3 ? 0xfffffffc : 4; // 0x65e6f
    int64_t v5; // 0x65e6f
    *(int32_t *)v5 = *(int32_t *)&v5 ^ (int32_t)(v4 + a2);
    return v2 % 256 * (int64_t)*(char *)(v5 + 0x7fca832) | v2 & -0x10000;
}

// Address range: 0x65e9a - 0x65e9b
int64_t function_65e9a(void) {
    // 0x65e9a
    int64_t result; // 0x65e9a
    return result;
}

// Address range: 0x65ea8 - 0x65ebe
int64_t function_65ea8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a2; // 0x65eaf
    uint32_t v2 = *(int32_t *)(a2 - 42); // 0x65eaf
    int64_t v3; // 0x65ea8
    if (v2 > v1) {
        v3 = function_65e9a();
    }
    int64_t v4 = v1 - v2; // 0x65eaf
    int32_t v5 = v3; // 0x65eb4
    uint32_t v6 = (v2 > v1 ? 0x219e1b9b : 0x219e1b9a) + v5; // 0x65eb4
    *(char *)a1 = *(char *)v4;
    bool v7; // 0x65ea8
    __asm_outsd((int16_t)a3, *(int32_t *)((v7 ? -1 : 1) + v4));
    int64_t result = v6; // 0x65ebb
    if ((v6 + (int32_t)(v2 > v1) & (v5 ^ -0x80000000)) < 0) {
        result = function_65e4e();
    }
    // 0x65ebd
    return result;
}

// Address range: 0xd0dc7 - 0xd0dd2
int64_t function_d0dc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd0dc7
    unknown_ffffffffe0cc15cf(a1, a2, a3, a4);
    return a1 & 0xffffffff;
}

// Address range: 0xd0dde - 0xd0e66
int64_t function_d0dde(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0xd0dde
    int64_t v1; // 0xd0dde
    *(char *)0x44da0a3f89a7748b = (char)v1;
    int64_t v2 = unknown_4a3cf9ed() & 0xffffffff; // 0xd0dec
    unsigned char v3 = *(char *)(v1 + 40); // 0xd0def
    *(char *)v2 = (char)__asm_iretd(v2);
    int64_t v4 = v2 + ((a5 & (int64_t)&g2) == 0 ? 1 : -1); // 0xd0df4
    int64_t v5 = unknown_ffffffff9151d0fc(v4); // 0xd0df6
    char * v6 = (char *)(a4 - 0x597a544b); // 0xd0dfb
    *v6 = *v6 + (char)(a3 / 256);
    char * v7 = (char *)((a3 & 0xffffffff) + 18); // 0xd0e0a
    unsigned char v8 = (char)a3; // 0xd0e0a
    *v7 = *v7 + v8;
    char * v9 = (char *)v4; // 0xd0e0d
    unsigned char v10 = *v9; // 0xd0e0d
    unsigned char v11 = v10 + v8; // 0xd0e0d
    *v9 = v11;
    unsigned char v12 = (char)(v11 >= v10); // 0xd0e10
    char v13 = v8 - v12; // 0xd0e10
    bool v14 = v11 < v10 ? v11 < v10 | v13 - (char)(v11 < v10) > v8 : v8 < v12; // 0xd0e10
    __asm_in(-88);
    int64_t result = unknown_5db77b1a(); // 0xd0e14
    if (v13 == 0 || v14) {
        unsigned char v15 = *(char *)((v5 & 0xffffffff) - 112); // 0xd0e59
        int32_t * v16 = (int32_t *)(a2 + 0x13d09aa); // 0xd0e5c
        int32_t v17 = *v16; // 0xd0e5c
        *v16 = v17 - (int32_t)(v1 & 0xffffff00 | (int64_t)v3) + (int32_t)(v15 < (char)a4);
        return result;
    }
    // 0xd0e1c
    return function_19cb0ef6();
}

// Address range: 0xd0e8a - 0xd0e8c
int64_t function_d0e8a(void) {
    // 0xd0e8a
    int64_t v1; // 0xd0e8a
    return function_d0eaf(v1, v1, v1, v1, v1, (int64_t)&g11);
}

// Address range: 0xd0e9c - 0xd0e9d
int64_t function_d0e9c(int64_t a1) {
    // 0xd0e9c
    int64_t result; // 0xd0e9c
    return result;
}

// Address range: 0xd0eaf - 0xd0fc7
int64_t function_d0eaf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xd0eaf
    int64_t v1; // 0xd0eaf
    char v2 = v1;
    *(char *)v1 = v2;
    int64_t v3; // 0xd0eaf
    unsigned char v4 = *(char *)&v3; // 0xd0eb5
    int64_t result = v1 & -256 | (int64_t)v4; // 0xd0eb5
    bool v5; // 0xd0eaf
    v3 = (v5 ? -1 : 1) + a2;
    if (v2 >= 0) {
        // 0xd0ec7
        return result;
    }
    char * v6 = (char *)result; // 0xd0eb8
    *v6 = *v6 + v4;
    unsigned char v7 = v4 + (char)(v1 / 256); // 0xd0eba
    int64_t result2 = result & -0xff01 | 256 * (int64_t)v7; // 0xd0eba
    if (a4 == 1 || v7 == 0) {
        char * v8 = (char *)(result2 + 8 * v1); // 0xd0ebf
        unsigned char v9 = *v8; // 0xd0ebf
        *v8 = v9 / 128 | 2 * v9;
        int32_t * v10 = (int32_t *)(v3 - 119); // 0xd0ec2
        int32_t v11 = *v10 + (int32_t)v3; // 0xd0ec2
        *v10 = v11;
        if (v11 >= 0) {
            // 0xd0ec7
            return result2;
        }
        int32_t * v12 = (int32_t *)result2; // 0xd0ecb
        *v12 = *v12 + (int32_t)result2;
        return result2;
    }
    int32_t * v13 = (int32_t *)(a1 - 47 + v3); // 0xd0f26
    *v13 = *v13 + (int32_t)v1;
    char v14 = v4 - (*(char *)(result2 - 0x46ea9392) > v7 ? -77 : -78); // 0xd0f33
    int64_t v15 = result2 & -256 | (int64_t)v14; // 0xd0f33
    if (v14 >= 0) {
        // 0xd0f3a
        return v15 & 0xffffffff ^ 0x48d828de;
    }
    int64_t v16 = v3 & 0xffffffff; // 0xd0ed9
    int32_t * v17 = (int32_t *)v15; // 0xd0edb
    uint32_t v18 = *v17; // 0xd0edb
    *v17 = v18 / 0x8000 | 0x20000 * v18;
    *(int32_t *)a1 = (int32_t)v15;
    char * v19 = (char *)(v16 + 72); // 0xd0ee4
    *v19 = *v19 + (char)(v1 / 256);
    int64_t result3 = __asm_fnstenv((v5 ? -4 : 4) + a1, (int32_t)v3, 0x2e013d94); // 0xd0eeb
    *(int224_t *)v16 = (int224_t)result3;
    return result3;
}

// Address range: 0xd11c7 - 0xd11c8
int64_t function_d11c7(void) {
    // 0xd11c7
    int64_t result; // 0xd11c7
    return result;
}

// Address range: 0xd1207 - 0xd120a
int64_t function_d1207(int64_t a1) {
    // 0xd1207
    int64_t result; // 0xd1207
    return result;
}

// Address range: 0xd1298 - 0xd129d
int64_t function_d1298(void) {
    // 0xd1298
    return function_11c41336();
}

// Address range: 0xd129f - 0xd12b2
int64_t function_d129f(int64_t a1) {
    // 0xd129f
    unknown_3f12dca5();
    return 0x6200ab22;
}

// Address range: 0xd1305 - 0xd130a
int64_t function_d1305(void) {
    // 0xd1305
    return function_176a1342();
}

// Address range: 0xd1333 - 0xd1339
int64_t function_d1333(void) {
    // 0xd1333
    int64_t result; // 0xd1333
    return result;
}

// Address range: 0xd1345 - 0xd13a1
int64_t function_d1345(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0xd1345
    int64_t v1; // 0xd1345
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a1 - 54); // 0xd1347
    uint32_t v4 = *v3; // 0xd1347
    uint32_t v5 = v4 + (int32_t)v2; // 0xd1347
    *v3 = v5;
    char * v6 = (char *)a5; // 0xd1350
    unsigned char v7 = *v6; // 0xd1350
    *v6 = v7 / 128 | 2 * v7;
    int32_t * v8 = (int32_t *)((a5 + 179 + a4 / 256) % 256 | a5 & -256); // 0xd1356
    uint32_t v9 = *v8; // 0xd1356
    int32_t v10 = a1; // 0xd1356
    uint32_t v11 = v9 + v10; // 0xd1356
    *v8 = v11;
    unsigned char v12 = (char)a4 % 32; // 0xd1358
    int64_t v13; // 0xd1345
    if (v12 != 0) {
        v13 = v2 & -256 | (int64_t)((char)v2 >> v12 | (char)((int16_t)v2 % 256 << (int16_t)(9 - v12)) | (char)(v11 < v9) << 8 - v12);
    }
    // 0xd136a
    int64_t v14; // 0xd1345
    int64_t v15 = (int64_t)&v14 & 0xfffffff8 | (int64_t)(v5 < v4); // 0xd134d
    int64_t v16 = unknown_107e468(); // 0xd1362
    int64_t v17; // 0xd1345
    __asm_outsb((int16_t)a3 & -256 | 182, *(char *)&v17);
    uint64_t v18 = *(int64_t *)v15; // 0xd136a
    uint32_t v19 = (int32_t)a4 % 32; // 0xd136f
    if (v19 != 0) {
        int32_t * v20 = (int32_t *)(0xfffffff8 - v15 + v16 & 0xffffffff); // 0xd136f
        *v20 = *v20 >> v19;
    }
    __asm_int(-31);
    unknown_ffffffffb3218f79();
    char * v21 = (char *)(a4 + 107); // 0xd1378
    *v21 = *v21 + (char)(v18 / 256);
    int32_t * v22 = (int32_t *)((v13 & -0xff01 | (int64_t)&g4) - 84); // 0xd1383
    *v22 = *v22 + (int32_t)v18;
    unknown_7b6fd791();
    int64_t result = unknown_ffffffffe8f12c9c(); // 0xd1396
    *(int32_t *)-0x34acf55e = *(int32_t *)-0x34acf55e + v10;
    return result;
}

// Address range: 0xe2966 - 0xe298f
int64_t function_e2966(int32_t a1) {
    // 0xe2966
    return function_c6d58();
}

// Address range: 0xe298f - 0xe2af2
int64_t function_e298f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xe298f
    int64_t v1; // bp-24, 0xe298f
    int64_t v2 = (int64_t)&v1; // 0xe2a04
    int64_t * v3 = (int64_t *)(v2 - 8); // 0xe2a10
    int64_t * v4 = (int64_t *)(v2 - 16); // 0xe2a12
    int64_t v5 = *(int64_t *)(v2 + 32); // 0xe2a3a
    *v3 = v5;
    *v4 = v2;
    int64_t v6 = *(int64_t *)(v2 + 8); // 0xe2a5e
    *v4 = v6;
    int64_t v7 = v2 - 24; // 0xe2a62
    int64_t * v8 = (int64_t *)v7; // 0xe2a62
    *v8 = 0x18f2de36;
    *(int64_t *)(v2 - 40) = v5;
    *v3 = *v8;
    *(int64_t *)(v2 - 32) = v7;
    *(int64_t *)(v2 + 24) = v6;
    int64_t v9 = *v3; // 0xe2ab8
    *v4 = v9;
    *v8 = v9;
    *v3 = v1;
    *v4 = v1;
    return function_c6d58();
}

// Address range: 0xe2af2 - 0xe2af7
int64_t function_e2af2(void) {
    // 0xe2af2
    return function_e5e36();
}

// Address range: 0xe2b4c - 0xe2b4d
int64_t function_e2b4c(void) {
    // 0xe2b4c
    int64_t result; // 0xe2b4c
    return result;
}

// Address range: 0xe2b62 - 0xe2b65
int64_t function_e2b62(int64_t a1) {
    // 0xe2b62
    int64_t result; // 0xe2b62
    bool v1; // 0xe2b62
    if (!v1) {
        result = function_e2b4c();
    }
    // 0xe2b64
    return result;
}

// Address range: 0xe2b74 - 0xe2b78
int64_t function_e2b74(int64_t a1) {
    // 0xe2b74
    int64_t result; // 0xe2b74
    return result;
}

// Address range: 0xe2b78 - 0xe2b9e
int64_t function_e2b78(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 94 + a4); // 0xe2b78
    uint32_t v2 = *v1; // 0xe2b78
    uint32_t v3 = v2 + (int32_t)a4; // 0xe2b78
    *v1 = v3;
    int64_t v4 = -0x1ca6cfe2; // bp-8, 0xe2b7c
    int64_t v5; // 0xe2b78
    int32_t v6 = *(int32_t *)&v5; // 0xe2b81
    *(int32_t *)a3 = v6 + (int32_t)a2 + (int32_t)(v3 < v2);
    int32_t * v7 = (int32_t *)(a2 + 0x1d01e8a8); // 0xe2b83
    *v7 = *v7 ^ -0x3e290803;
    int64_t result; // 0xe2b78
    int32_t * v8 = (int32_t *)(result + 5); // 0xe2b96
    uint32_t v9 = *v8; // 0xe2b96
    uint32_t v10 = v9 + ((int32_t)(int64_t)&v4 | 1); // 0xe2b96
    *v8 = v10;
    char * v11 = (char *)(4 * result + a1); // 0xe2b99
    *v11 = *v11 + (char)a3 + (char)(v10 < v9);
    return result;
}

// Address range: 0xe2ba0 - 0xe2bac
int64_t function_e2ba0(int64_t a1, int64_t a2) {
    int64_t result = unknown_ffffffffae9225a8(); // 0xe2ba2
    int64_t v1; // 0xe2ba0
    *(char *)a1 = (char)v1;
    return result;
}

// Address range: 0xe2be3 - 0xe2be4
int64_t function_e2be3(void) {
    // 0xe2be3
    int64_t result; // 0xe2be3
    return result;
}

// Address range: 0xe2c07 - 0xe2c0b
int64_t function_e2c07(int64_t a1) {
    // 0xe2c07
    int64_t v1; // 0xe2c07
    bool v2; // 0xe2c07
    *(int32_t *)a1 = 2 * (int32_t)v1 + (int32_t)v2;
    return function_e2be3();
}

// Address range: 0xe2c37 - 0xe2c38
int64_t function_e2c37(void) {
    // 0xe2c37
    int64_t result; // 0xe2c37
    return result;
}

// Address range: 0xe2c7c - 0xe2c83
int64_t function_e2c7c(void) {
    // 0xe2c7c
    int64_t v1; // 0xe2c7c
    __asm_iretd(v1);
    return function_e2c37();
}

// Address range: 0xe2c83 - 0xe2c86
int64_t function_e2c83(void) {
    // 0xe2c83
    int64_t result; // 0xe2c83
    return result;
}

// Address range: 0xe2c97 - 0xe2cb5
int64_t function_e2c97(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe2c97
    int64_t v1; // 0xe2c97
    int64_t v2 = v1 & -256 | (int64_t)*(char *)-0x17f87cfb1a793dc6; // 0xe2c97
    int32_t * v3 = (int32_t *)v2; // 0xe2ca0
    *v3 = *v3 + (int32_t)v2;
    *(char *)a4 = __asm_insb((int16_t)a3);
    return a2 & 0xffffffff;
}

// Address range: 0xe2cf2 - 0xe2d17
int64_t function_e2cf2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(2 * a1 + 58 + a3); // 0xe2cf6
    int64_t v2; // 0xe2cf2
    int32_t v3 = v2; // 0xe2cf6
    *v1 = *v1 + v3;
    uint32_t v4 = (int32_t)a4; // 0xe2cfa
    uint32_t v5 = v4 % 32; // 0xe2cfa
    if (v5 != 0) {
        int64_t v6; // 0xe2cf2
        uint32_t v7 = *(int32_t *)&v6; // 0xe2cfa
        *(int32_t *)v6 = v7 >> v5 | v7 << 32 - v5;
    }
    int64_t result = unknown_ffffffffe8524604(); // 0xe2cfe
    int32_t * v8 = (int32_t *)(v2 - 0x17c18153); // 0xe2d0c
    *v8 = *v8 + v4 + (int32_t)(*(char *)(a2 + 11) > (char)a4);
    int32_t * v9 = (int32_t *)result; // 0xe2d12
    *v9 = *v9 + v3;
    return result;
}

// Address range: 0xe2d55 - 0xe2d58
int64_t function_e2d55(void) {
    // 0xe2d55
    int64_t result; // 0xe2d55
    return result;
}

// Address range: 0xea79c - 0xea7a7
int64_t function_ea79c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xea79c
    int64_t v1; // 0xea79c
    uint64_t v2 = v1;
    uint64_t v3 = v1;
    *(char *)-0x774e6c5b = *(char *)-0x774e6c5b + (char)(v2 / 256);
    *(char *)a1 = __asm_insb((int16_t)a3);
    return v3 & -256 | (int64_t)*(char *)(v3 % 256 + v2);
}

// Address range: 0xea851 - 0xea854
int64_t function_ea851(int64_t a1) {
    // 0xea851
    int64_t result; // 0xea851
    return result;
}

// Address range: 0xea8da - 0xea8df
int64_t function_ea8da(void) {
    // 0xea8da
    return function_8bd458b();
}

// Address range: 0xea960 - 0xea97d
int64_t function_ea960(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __asm_sldt(); // 0xea96b
    *(int16_t *)(v1 - 0x17ff4d00) = (int16_t)v1;
    int32_t * v2 = (int32_t *)(a3 + 1); // 0xea972
    int64_t v3; // 0xea960
    *v2 = *v2 + (int32_t)v3;
    return function_ffffffff8202aa16();
}

// Address range: 0xea97e - 0xea9f6
int64_t function_ea97e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0xea97e
    int64_t v1; // 0xea97e
    char * v2 = (char *)(v1 + 99); // 0xea97e
    char v3 = *v2 | (char)(v1 / 256); // 0xea97e
    unsigned char v4 = llvm_ctpop_i8(v3); // 0xea97e
    *v2 = v3;
    if (v4 % 2 == 0) {
        // 0xea984
        return unknown_ffffffffa334208a();
    }
    int64_t v5 = unknown_133eb9f3(); // 0xea9eb
    return (a4 / 256 + 192 + v5) % 256 | v5 & -256;
}

// Address range: 0xea9f8 - 0xeaa48
int64_t function_ea9f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xea9f8
    int64_t v1; // 0xea9f8
    int64_t v2 = v1;
    int64_t v3 = unknown_ffffffff820ade00(); // 0xea9fa
    bool v4; // 0xea9f8
    int64_t v5 = (v4 ? -1 : 1) + a2; // 0xea9ff
    __asm_int(-63);
    uint32_t v6 = (int32_t)v3 >> 31; // 0xeaa06
    uint64_t v7 = (int64_t)v6; // 0xeaa06
    int32_t * v8 = (int32_t *)(a1 - 56); // 0xeaa0c
    int32_t v9 = *v8; // 0xeaa0c
    *v8 = v9 + (int32_t)(v3 & 0xffffff00 | (v2 + 232 + (int64_t)((char)v2 < 243)) % 256);
    __asm_wait();
    char * v10 = (char *)v7; // 0xeaa15
    unsigned char v11 = *v10; // 0xeaa15
    *v10 = v11 / 2 | 128 * v11;
    __asm_hlt();
    int32_t v12 = __asm_in_133(-24); // 0xeaa28
    int32_t * v13 = (int32_t *)((int64_t)v12 + 6); // 0xeaa2a
    *v13 = *v13 + (int32_t)a5;
    *(char *)a1 = *(char *)v5;
    __asm_out_134((int16_t)(v7 % 256 | (int64_t)(v6 + 0xa000 & 0xff00)), v12);
    unknown_4ba71e3e();
    return v5 + 1 & 0xffffffff;
}

// Address range: 0xeaa7d - 0xeaa80
int64_t function_eaa7d(int64_t a1) {
    // 0xeaa7d
    int64_t result; // 0xeaa7d
    return result;
}

// Address range: 0xeaaef - 0xeab16
int64_t function_eaaef(void) {
    // 0xeaaef
    int64_t v1; // 0xeaaef
    char v2 = v1; // 0xeaaf4
    bool v3; // 0xeaaef
    unsigned char v4 = v2 - (v3 ? -31 : -32); // 0xeaaf4
    if (((v4 - (char)v3 ^ v2) & (v2 ^ -128)) >= 0) {
        // 0xeaaf8
        return v1 & -256 | (int64_t)v4;
    }
    // 0xeaafe
    while (true) {
        // 0xeaafe
        int64_t v5; // 0xeaaef
        *(int864_t *)(v5 - 102) = (int864_t)__asm_fnsave();
        *(char *)0xd68a01e8 = (char)unknown_3d73920e(0xd68a01e8);
        int64_t v6; // 0xeaaef
        int64_t v7 = v6 - 8; // 0xeab10
        int64_t v8; // 0xeaaef
        *(int64_t *)v7 = v8;
        v6 = v7 - (int64_t)&g3;
        v8 = v7;
        v5 = v3 ? 0xd68a01e7 : 0xd68a01e9;
    }
}

// Address range: 0xeab35 - 0xeab36
int64_t function_eab35(int64_t a1) {
    // 0xeab35
    int64_t result; // 0xeab35
    return result;
}

// Address range: 0xeabd2 - 0xeabd3
int64_t function_eabd2(int64_t a1) {
    // 0xeabd2
    int64_t result; // 0xeabd2
    return result;
}

// Address range: 0xeabe0 - 0xeabe3
int64_t function_eabe0(void) {
    // 0xeabe0
    int64_t result; // 0xeabe0
    return result;
}

// Address range: 0xeac02 - 0xeac03
int64_t function_eac02(void) {
    // 0xeac02
    int64_t result; // 0xeac02
    return result;
}

// Address range: 0xeac05 - 0xeac8c
int64_t function_eac05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xeac05
    float80_t v1; // 0xeac05
    *(int16_t *)a1 = (int16_t)v1;
    bool v2; // 0xeac05
    if (v2 || v2) {
        // 0xeac84
        return unknown_7576878a();
    }
    // 0xeac09
    int64_t v3; // 0xeac05
    uint32_t v4 = *(int32_t *)(v3 - 1) | (int32_t)v3; // 0xeac09
    int64_t v5 = v4; // 0xeac09
    int64_t v6 = unknown_8146a12(); // 0xeac0c
    char v7 = *(char *)(v6 + 50); // 0xeac11
    int64_t v8 = unknown_ffffffffcb289021(); // 0xeac1b
    char * v9 = (char *)v8;
    unsigned char v10 = *v9; // 0xeac20
    unsigned char v11 = v10 + (char)(v4 / 256); // 0xeac20
    *v9 = v11;
    int32_t * v12 = (int32_t *)(v3 + 76 + 2 * v3); // 0xeac22
    *v12 = *v12 + (int32_t)a4 + (int32_t)(v11 < v10);
    char * v13 = v9; // 0xeac2d
    int64_t v14 = v8; // 0xeac2d
    if ((*(int32_t *)(a2 + 0x6401e89a + v5) & (int32_t)a2) >= 0) {
        v14 = function_eac02();
        v13 = (char *)v14;
    }
    int64_t v15 = v14;
    char v16 = *v13; // 0xeac2f
    char v17 = *(char *)(v5 + a4); // 0xeac31
    int64_t v18 = v5 & 0xffffff00 | (int64_t)(v17 + (char)v4); // 0xeac31
    int64_t v19 = unknown_ffffffff8ac26c3f(v18); // 0xeac39
    uint64_t v20 = a4 - 1; // 0xeac3e
    if (v20 == 0) {
        uint32_t v21 = (int32_t)v19; // 0xeac41
        *(int32_t *)v18 = v21;
        uint32_t v22 = *(int32_t *)(v18 + ((a5 & (int64_t)&g2) == 0 ? 4 : -4)); // 0xeac42
        if (v22 <= v21) {
            int32_t * v23 = (int32_t *)(a4 - 9); // 0xeac47
            *v23 = *v23 + (int32_t)a1;
            return v19 + v3 & 0xffffffff;
        }
    } else {
        int64_t v24 = v19 & (v20 / 256 | -256); // 0xeac55
        int32_t * v25 = (int32_t *)(v24 + 5); // 0xeac58
        *v25 = *v25 + (int32_t)v24;
        unknown_ffffffffd44e656f();
    }
    int64_t v26 = (a1 & 0xffffffff) - 8; // 0xeac60
    int64_t v27 = v26 - (int64_t)&g1; // 0xeac60
    int64_t v28 = v27 - 8; // 0xeac64
    *(int64_t *)v28 = v26;
    unknown_1a123c6c();
    int32_t * v29 = (int32_t *)((v15 & 0xffffff00 | (int64_t)(v16 | (char)v15)) - 0x9ff6e2f); // 0xeac6e
    int32_t v30 = *v29; // 0xeac6e
    *v29 = v30 & (int32_t)(v6 & 0xffffff00 | (int64_t)(v7 + (char)v6));
    *(int64_t *)(v27 - 16) = v28;
    return unknown_ffffffffc033827b() + 0xcb8e32af & 0xffffffff;
}

// Address range: 0xeac8c - 0xeaca4
int64_t function_eac8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xeac8c
    int64_t v1; // 0xeac8c
    __asm_outsb((int16_t)a3, (char)v1);
    char * v2 = (char *)(__asm_iretd(a1) + 8 * a3); // 0xeac8f
    *v2 = *v2 | (char)(v1 / 256);
    *(char *)-0x41f0c1d9 = *(char *)-0x41f0c1d9 + 1;
    return function_1f71942();
}

// Address range: 0xeaccd - 0xeacce
int64_t function_eaccd(void) {
    // 0xeaccd
    int64_t result; // 0xeaccd
    return result;
}

// Address range: 0xead1c - 0xead1f
int64_t function_ead1c(int64_t a1) {
    // 0xead1c
    int64_t v1; // 0xead1c
    int64_t v2 = v1;
    bool v3; // 0xead1c
    return (v2 - (v3 ? 2 : 1)) % 256 | v2 & -256;
}

// Address range: 0xead25 - 0xead9b
int64_t function_ead25(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xead25
    int64_t v1; // 0xead25
    uint32_t v2 = (int32_t)v1; // 0xead25
    int64_t v3 = __asm_wait(); // 0xead2f
    if (v2 < -0x7d66d0ff) {
        // 0xead37
        __asm_rcl(*(int32_t *)(a2 + 12));
        *(char *)(v3 & 0xffffffff) = (char)(v3 | a3);
        return unknown_7498a74e();
    }
    int64_t v4 = a4 - 1; // 0xead34
    if (v4 == 0) {
        // 0xead36
        return 2 * v3 & 0xfffffffe | (int64_t)(v2 < 0x82992f01);
    }
    int64_t v5 = unknown_ffffffffa0f03594(); // 0xead8e
    return v5 & -256 | (int64_t)(*(char *)v4 | (char)v5);
}

// Address range: 0x103bee - 0x103bf7
int64_t function_103bee(int64_t a1) {
    // 0x103bee
    int64_t result; // 0x103bee
    __asm_out(-42, (char)result);
    return result;
}

// Address range: 0x103c2a - 0x103c2b
int64_t function_103c2a(int64_t a1) {
    // 0x103c2a
    int64_t result; // 0x103c2a
    return result;
}

// Address range: 0x103c2c - 0x103c31
int64_t function_103c2c(int64_t a1) {
    // 0x103c2c
    int64_t v1; // 0x103c2c
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x103c38 - 0x103c39
int64_t function_103c38(void) {
    // 0x103c38
    int64_t result; // 0x103c38
    return result;
}

// Address range: 0x103c57 - 0x103c9a
int64_t function_103c57(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 - 0x3bffd2cd); // 0x103c57
    *v1 = *v1 ^ (char)a4;
    uint32_t v2 = __asm_in_133(127); // 0x103c63
    *(int32_t *)0x3b01e80b3b028851 = v2;
    int64_t v3 = a2; // bp-16, 0x103c6f
    int64_t v4 = (int64_t)&v3; // 0x103c6f
    int64_t v5 = v4; // 0x103c70
    v5 -= 8;
    *(int64_t *)v5 = 0x3aeed400;
    while (v2 != -0x749166ff) {
        // 0x103c75
        v5 -= 8;
        *(int64_t *)v5 = 0x3aeed400;
    }
    int64_t v6 = a4 - a3 + (int64_t)(v2 >= 0x8b6e9901); // 0x103c85
    int64_t v7 = v6 & 0xffffffff; // 0x103c89
    char * v8 = (char *)v7; // 0x103c8b
    int64_t v9; // 0x103c57
    *v8 = *v8 | (char)((uint64_t)v9 / 256);
    int64_t result = v7; // 0x103c92
    if ((int32_t)v6 < 0x2cfe02) {
        result = function_103c38();
    }
    // 0x103c94
    *(int64_t *)(v4 - 16) = v5;
    return result;
}

// Address range: 0x103d28 - 0x103d29
int64_t function_103d28(void) {
    // 0x103d28
    int64_t result; // 0x103d28
    return result;
}

// Address range: 0x103e3f - 0x103e46
int64_t function_103e3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x103e3f
    int64_t v1; // 0x103e3f
    int64_t v2 = v1;
    bool v3; // 0x103e3f
    *(int32_t *)v2 = (int32_t)v2 - (int32_t)a4 + (int32_t)v3;
    return function_ffffffff8e163ec8();
}

// Address range: 0x103e47 - 0x103e5d
int64_t function_103e47(int64_t a1) {
    // 0x103e47
    int64_t v1; // 0x103e47
    int64_t v2 = v1;
    int64_t v3 = (v2 + 195) % 256 | v2 & -256; // 0x103e47
    int32_t * v4 = (int32_t *)v3; // 0x103e49
    *v4 = *v4 + (int32_t)v3;
    __asm_hlt();
    return unknown_2a41f47c();
}

// Address range: 0x103e5f - 0x103e74
int64_t function_103e5f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x103e5f
    int64_t v1; // 0x103e5f
    uint32_t v2 = (int32_t)v1; // 0x103e5f
    uint32_t v3 = (int32_t)a4 % 32; // 0x103e64
    bool v4 = v2 < 0x28790001; // 0x103e64
    int64_t result; // 0x103e5f
    if (v3 != 0) {
        v4 = (1 << v3 - 1 & v2) != 0;
        result = v2 >> v3;
    }
    char * v5 = (char *)(a2 - 0x5766e966); // 0x103e6b
    *v5 = (char)v4 - (char)(a4 / 256) + *v5;
    return result;
}

// Address range: 0x103ec2 - 0x103ecc
int64_t function_103ec2(void) {
    // 0x103ec2
    return function_ffffffffd2beae07();
}

// Address range: 0x103f04 - 0x103f0a
int64_t function_103f04(int64_t a1, int64_t a2, int64_t a3) {
    // 0x103f04
    int64_t v1; // 0x103f04
    return v1 & 0xffffffff;
}

// Address range: 0x103f5d - 0x103f62
int64_t function_103f5d(void) {
    // 0x103f5d
    return function_45a29163();
}

// Address range: 0x103fb0 - 0x103fb6
int64_t function_103fb0(void) {
    // 0x103fb0
    __asm_wait();
    return function_38984d5f();
}

// Address range: 0x103fe4 - 0x103fe5
int64_t function_103fe4(int64_t a1) {
    // 0x103fe4
    int64_t result; // 0x103fe4
    return result;
}

// Address range: 0x10402e - 0x104040
int64_t function_10402e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    char * v1 = (char *)(int64_t)(*(int32_t *)-0x3bc006cb & (int32_t)a1); // 0x104034
    *v1 = *v1 + (char)(a4 / 256);
    int64_t v2; // 0x10402e
    __asm_outsb((int16_t)a3, *(char *)&v2);
    return unknown_ffffffffc01e7c45();
}

// Address range: 0x104041 - 0x104048
int64_t function_104041(void) {
    // 0x104041
    int64_t result; // 0x104041
    return result;
}

// Address range: 0x10404f - 0x104050
int64_t function_10404f(void) {
    // 0x10404f
    int64_t result; // 0x10404f
    return result;
}

// Address range: 0x104067 - 0x104068
int64_t function_104067(void) {
    // 0x104067
    int64_t result; // 0x104067
    return result;
}

// Address range: 0x104093 - 0x104094
int64_t function_104093(void) {
    // 0x104093
    int64_t result; // 0x104093
    return result;
}

// Address range: 0x104097 - 0x104098
int64_t function_104097(void) {
    // 0x104097
    int64_t result; // 0x104097
    return result;
}

// Address range: 0x1040a1 - 0x1040e1
int64_t function_1040a1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1040a1
    unknown_ffffffffd18c80a7();
    bool v1; // 0x1040a1
    if (!v1 && true) {
        // 0x1040a8
        return function_104093();
    }
    if (!v1) {
        function_104097();
    }
    // 0x1040af
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v2 = (v1 ? -1 : 1) + a1; // 0x1040b0
    int32_t * v3 = (int32_t *)v2; // 0x1040b6
    int64_t v4; // 0x1040a1
    *v3 = *v3 + (int32_t)v4;
    uint32_t v5 = (int32_t)a4; // 0x1040c1
    uint32_t v6 = (int32_t)v4 + v5; // 0x1040c1
    int64_t v7 = v4 + 0xa0418e & 0xffffff00 | a4 / 256 % 256; // 0x1040c3
    if (v6 < v5) {
        v7 = function_10404f();
    }
    uint64_t v8 = v7 + 21; // 0x1040c6
    int64_t result = v8 % 256 | v7 & -256; // 0x1040c6
    *(char *)-0x171dda2a = *(char *)-0x171dda2a | (char)v8;
    int32_t * v9 = (int32_t *)(2 * v4 + 75 + result); // 0x1040ce
    *v9 = *v9 + (int32_t)result;
    *(int64_t *)((v2 + v4 & 0xffffffff) - 8) = (int64_t)v6;
    return result;
}

// Address range: 0x104167 - 0x10416a
int64_t function_104167(void) {
    // 0x104167
    int64_t result; // 0x104167
    return result;
}

// Address range: 0x104172 - 0x104173
int64_t function_104172(void) {
    // 0x104172
    int64_t result; // 0x104172
    return result;
}

// Address range: 0x1041aa - 0x1041c7
int64_t function_1041aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = unknown_28acd7b2(); // 0x1041ac
    unsigned char v2 = (char)(v1 / 256) + (char)v1; // 0x1041b1
    if (llvm_ctpop_i8(v2) % 2 == 0) {
        // 0x104209
        return v1 & -256 | (int64_t)v2;
    }
    // 0x1041b6
    *(char *)a1 = v2;
    bool v3; // 0x1041aa
    return unknown_ffffffffba59c6c1((v3 ? -1 : 1) + a1, a5);
}

// Address range: 0x1041d9 - 0x1041e9
int64_t function_1041d9(int64_t a1) {
    uint64_t result = unknown_e41badf(a1); // 0x1041d9
    *(char *)-0x3ca590e = *(char *)-0x3ca590e + (char)(result / 256);
    return result;
}

// Address range: 0x127adc - 0x127b84
int64_t function_127adc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t result) {
    // 0x127adc
    int64_t v1; // 0x127adc
    *(char *)-0x6eef8712 = *(char *)-0x6eef8712 + (char)(v1 / 256);
    int32_t v2 = a3; // 0x127aed
    int32_t v3 = 2 * v2; // 0x127aed
    uint64_t v4 = a4 - 1; // 0x127aef
    if (v4 != 0 != (v3 == 0)) {
        uint32_t v5 = (int32_t)v1 + (int32_t)a2; // 0x127b01
        uint32_t v6 = *(int32_t *)0x511cd0a; // 0x127b03
        uint32_t v7 = v6 + (int32_t)a1; // 0x127b03
        *(int32_t *)0x511cd0a = v7;
        *(int32_t *)((((int64_t)v5 + 179 + (int64_t)(v7 < v6)) % 256 | (int64_t)(v5 & -256)) + 8 * v1) = (int32_t)v1;
        unknown_3ab12a2d();
        return result;
    }
    int64_t v8 = v3; // 0x127aed
    char * v9 = (char *)(a2 - 60); // 0x127b63
    *v9 = (char)(v4 / 256);
    int32_t * v10; // 0x127b6a
    if (v3 < 0 == (v3 ^ v2) < 0) {
        // 0x127b6a
        v10 = (int32_t *)v8;
        *v10 = *v10 + v3;
        abort();
        // UNREACHABLE
    }
    int32_t * v11 = (int32_t *)(a1 + 0x2e2bc068); // 0x127b52
    int64_t v12; // 0x127adc
    uint64_t v13 = v12;
    *v11 = *v11 + (int32_t)a1;
    char v14 = *(char *)v8; // 0x127b59
    int64_t v15 = 256 * (int64_t)((char)(v13 / 256) - v14) | v13 & -0xff01; // 0x127b59
    char * v16 = (char *)(v15 + 0x2d01e8dc); // 0x127b5b
    char v17 = *v16; // 0x127b5b
    char v18 = v17 - 81; // 0x127b5b
    *v16 = v18;
    while (v18 < 0 != ((v18 ^ v17) & v17 + 47) < 0) {
        // 0x127b52
        v13 = v15;
        *v11 = *v11 + (int32_t)a1;
        v14 = *(char *)v8;
        v15 = 256 * (int64_t)((char)(v13 / 256) - v14) | v13 & -0xff01;
        v16 = (char *)(v15 + 0x2d01e8dc);
        v17 = *v16;
        v18 = v17 - 81;
        *v16 = v18;
    }
    // 0x127b6a
    v10 = (int32_t *)v8;
    *v10 = *v10 + v3;
    abort();
    // UNREACHABLE
}

// Address range: 0x127bac - 0x127bad
int64_t function_127bac(void) {
    // 0x127bac
    int64_t result; // 0x127bac
    return result;
}

// Address range: 0x127bbd - 0x127c1b
int64_t function_127bbd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = a4;
    *(char *)a4 = 2 * v1;
    int64_t v2; // 0x127bbd
    *(char *)a1 = (char)v2;
    int64_t v3 = unknown_287dc8d0(); // 0x127bca
    unsigned char v4 = *(char *)((v3 & 58) + v2); // 0x127bd3
    int64_t v5 = unknown_ffffffffaf2839df(); // 0x127bd9
    *(char *)-0x176ed7abaef02411 = (char)v5;
    int32_t * v6 = (int32_t *)(a4 - 14); // 0x127be7
    uint32_t v7 = *v6; // 0x127be7
    uint32_t v8 = v7 + (int32_t)a2; // 0x127be7
    *v6 = v8;
    int64_t v9 = v5; // 0x127bea
    if (v8 >= v7) {
        v9 = function_127bac();
    }
    // 0x127bec
    *(char *)(v9 & -203) = v1;
    bool v10; // 0x127bbd
    __asm_int3((int32_t)((v10 ? 0xffffffff : 1) + a1 | v2));
    __asm_in_135((int16_t)(v3 & 0xff00 | (int64_t)v4));
    unknown_ffffffffca0add0a();
    int32_t * v11 = (int32_t *)(v2 - 25); // 0x127c0e
    *v11 = *v11 + (int32_t)v2;
    return unknown_6853f419();
}

// Address range: 0x127c1b - 0x127c1d
int64_t function_127c1b(int64_t a1) {
    // 0x127c1b
    int64_t result; // 0x127c1b
    return result;
}

// Address range: 0x127c76 - 0x127c77
int64_t function_127c76(void) {
    // 0x127c76
    int64_t result; // 0x127c76
    return result;
}

// Address range: 0x127cee - 0x127cf4
int64_t function_127cee(int64_t a1) {
    // 0x127cee
    return function_54f3751b();
}

// Address range: 0x127d1c - 0x127d1d
int64_t function_127d1c(void) {
    // 0x127d1c
    int64_t result; // 0x127d1c
    return result;
}

// Address range: 0x127d66 - 0x127d6e
int64_t function_127d66(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 0x6bfe6248); // 0x127d66
    int64_t v2; // 0x127d66
    *v1 = *v1 + (int32_t)v2;
    return function_127ddf();
}

// Address range: 0x127d7e - 0x127ddf
int64_t function_127d7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 42); // 0x127d7e
    uint32_t v2 = *v1; // 0x127d7e
    uint32_t v3 = v2 + (int32_t)a2; // 0x127d7e
    *v1 = v3;
    int64_t v4; // 0x127d7e
    uint32_t v5 = (int32_t)v4; // 0x127d81
    uint32_t v6 = *(int32_t *)(a1 - 37) + v5; // 0x127d81
    uint32_t v7 = v6 + (int32_t)(v3 < v2); // 0x127d81
    int64_t v8; // 0x127d7e
    if (!((v3 < v2 ? v7 <= v5 : v6 < v5))) {
        v8 = function_127d1c();
    }
    int64_t v9 = v7; // 0x127d81
    *(int16_t *)(v9 - 2) = (int16_t)v8;
    unknown_ffffffffcc45398e();
    int64_t v10 = a3 & -256 | 109; // 0x127d8e
    __asm_in_133(-24);
    int32_t * v11 = (int32_t *)(v10 - 90); // 0x127d92
    *v11 = *v11 + (int32_t)v4;
    int32_t * v12 = (int32_t *)(a1 + 0x4728943a); // 0x127d95
    *v12 = *v12 - (int32_t)v4;
    int32_t * v13 = (int32_t *)(v4 - 0x515a95b0); // 0x127da1
    *v13 = *v13 - (int32_t)(v9 - 10);
    unknown_4af083ad();
    __asm_outsd((int16_t)v10 + (int16_t)a2, *(int32_t *)0x8999008a);
    unknown_ffffffffe87a88c5();
    int32_t * v14 = (int32_t *)(v4 - 55); // 0x127dc9
    *v14 = *v14 - 0x177d13f2;
    bool v15; // 0x127d7e
    int64_t v16 = __asm_int3((int32_t)((v15 ? 0xffffffff : 1) + a1)); // 0x127dcc
    int64_t v17 = v16 ^ (int64_t)(char)((int64_t)&g10 >> 8); // 0x127dd4
    uint32_t v18 = *(int32_t *)0xe882eb93; // 0x127dd6
    *(int32_t *)0xe882eb93 = v18 - 0x7666ff76;
    char v19 = *(char *)v17; // 0x127dd9
    int64_t result = v16 & -256 | (int64_t)(v19 + (char)v17 + (char)(v18 > 0x7666ff75)); // 0x127dd9
    char * v20 = (char *)result; // 0x127ddb
    *v20 = *v20 + 24;
    *(int64_t *)(v9 - 18) = result;
    return result;
}

// Address range: 0x127ddf - 0x127de1
int64_t function_127ddf(void) {
    // 0x127ddf
    int64_t v1; // 0x127ddf
    int64_t v2 = v1;
    return 2 * v2 & 254 | v2 & -256;
}

// Address range: 0x127e1a - 0x127e1b
int64_t function_127e1a(int64_t a1) {
    // 0x127e1a
    int64_t result; // 0x127e1a
    return result;
}

// Address range: 0x127e48 - 0x127e4b
int64_t function_127e48(int64_t a1) {
    // 0x127e48
    int64_t result; // 0x127e48
    return result;
}

// Address range: 0x127e72 - 0x127e79
int64_t function_127e72(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x127e72
    int64_t result; // 0x127e72
    return result;
}

// Address range: 0x127e7c - 0x127e86
int64_t function_127e7c(void) {
    // 0x127e7c
    int64_t v1; // 0x127e7c
    int32_t * v2 = (int32_t *)(v1 + 10); // 0x127e7c
    int32_t v3 = *v2 + (int32_t)v1; // 0x127e7c
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x127e7c
    *v2 = v3;
    if (v4 % 2 == 0) {
        function_127e48((int64_t)&g11);
    }
    // 0x127e81
    return function_ffffffff89d47f8d();
}

// Address range: 0x127fb1 - 0x127fb7
int64_t function_127fb1(int64_t a1) {
    // 0x127fb1
    int64_t v1; // 0x127fb1
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v1 - 102); // 0x127fb1
    *v3 = *v3 + (int32_t)v1;
    return (v2 + 134) % 256 | v2 & -256;
}

// Address range: 0x127fbc - 0x127fc5
int64_t function_127fbc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 79); // 0x127fbc
    uint32_t v2 = *v1; // 0x127fbc
    uint32_t v3 = v2 + (int32_t)a4; // 0x127fbc
    *v1 = v3;
    int64_t result; // 0x127fbc
    char v4 = *(char *)&result; // 0x127fbf
    *(char *)result = v4 + (char)a4 + (char)(v3 < v2);
    return result;
}

// Address range: 0x127ffe - 0x128001
int64_t function_127ffe(int64_t a1) {
    // 0x127ffe
    int64_t result; // 0x127ffe
    return result;
}

// Address range: 0x12803d - 0x128046
int64_t function_12803d(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0x7107ab99); // 0x12803d
    *v1 = *v1 + (int32_t)a1;
    int64_t result; // 0x12803d
    return result;
}

// Address range: 0x12805c - 0x12805e
int64_t function_12805c(void) {
    // 0x12805c
    int64_t result; // 0x12805c
    return result;
}

// Address range: 0x1cb955 - 0x1cb957
int64_t function_1cb955(void) {
    // 0x1cb955
    int64_t v1; // 0x1cb955
    return v1 & -188;
}

// Address range: 0x1cb958 - 0x1cba68
int64_t function_1cb958(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1cb958
    int64_t v1; // 0x1cb958
    return function_cc59c(a1, 0x2c8b487d, a3, 0x3c34037f, a5, v1, a6);
}

// Address range: 0x1cba68 - 0x1cbbec
int64_t function_1cba68(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x1c2eec; // bp-24, 0x1cbad0
    int64_t * v2 = (int64_t *)(a2 + 16); // 0x1cbb43
    int64_t v3 = *v2; // 0x1cbb43
    int64_t * v4 = (int64_t *)(a2 - 8); // 0x1cbb43
    *v4 = v3;
    int64_t * v5 = (int64_t *)(a2 - 16); // 0x1cbb47
    *v5 = a1;
    int64_t * v6 = (int64_t *)(a2 - 24); // 0x1cbb77
    *(int64_t *)(a2 + 8) = a6;
    *(int64_t *)(a2 - 32) = v3;
    *v6 = v3;
    *v2 = *v5;
    *v6 = v3;
    *v5 = a2;
    int64_t v7 = *v4; // 0x1cbbd1
    *v5 = v7;
    *v6 = v7;
    int64_t v8; // 0x1cba68
    return function_cc59c(*v6, a2, a3, a4, a5, v8, (int64_t)&v1);
}

// Address range: 0x1cbbec - 0x1cbd12
int64_t function_1cbbec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1cbbec
    int64_t v1; // bp-40, 0x1cbbec
    int64_t v2 = (int64_t)&v1; // 0x1cbc60
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x1cbc76
    int64_t * v4 = (int64_t *)v3; // 0x1cbc77
    int64_t * v5 = (int64_t *)(v2 + 32); // 0x1cbc7a
    int64_t v6 = *v5; // 0x1cbc7a
    *v4 = v6;
    int64_t * v7 = (int64_t *)(v2 - 16); // 0x1cbc7e
    *v7 = v6;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x1cbc81
    *v8 = v6;
    int64_t v9 = v2 + 16; // 0x1cbc8d
    int64_t * v10 = (int64_t *)v9; // 0x1cbc8d
    *v4 = 0x1533b741;
    *v7 = v6;
    int64_t * v11 = (int64_t *)(v2 + 8); // 0x1cbcb1
    *v11 = *v4;
    *v4 = *v10;
    *v7 = v3;
    int64_t v12 = *v4; // 0x1cbccd
    *v8 = v12;
    v1 = v12;
    *v5 = v12;
    int64_t v13 = *v11; // 0x1cbcde
    v1 = v13;
    *v4 = v13;
    *v11 = *v10;
    *v4 = v2;
    v1 = v9;
    int64_t v14; // 0x1cbbec
    return function_cc59c(a1, a2, v14, a4, a5, a6, v14);
}
