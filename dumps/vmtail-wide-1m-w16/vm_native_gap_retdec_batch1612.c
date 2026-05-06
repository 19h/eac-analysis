/*
 * Targeted RetDec C for native executable gap queue batch 1612.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x383c6-0x385c6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x386c6-0x387c6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x387c6-0x389c6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x40dcdf-0x40dddf rank=- name=- kind=- bytes=- uncovered=-
 *   0x40dedf-0x40e0df rank=- name=- kind=- bytes=- uncovered=-
 *   0x40e0df-0x40e2df rank=- name=- kind=- bytes=- uncovered=-
 *   0x40e2df-0x40e4df rank=- name=- kind=- bytes=- uncovered=-
 *   0x40e4df-0x40e52b rank=- name=- kind=- bytes=- uncovered=-
 *   0x46e87e-0x46ea7e rank=- name=- kind=- bytes=- uncovered=-
 *   0x46ea7e-0x46ec7e rank=- name=- kind=- bytes=- uncovered=-
 *   0x46f07e-0x46f0b8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x519885-0x519a85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x519a85-0x519c85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x519c85-0x519e85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x519e85-0x51a085 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51a085-0x51a0ed rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1f1fe294();
int64_t function_200b07();
int64_t function_383c6(int64_t a1);
int64_t function_383c8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_383ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_38495(int64_t a1, int64_t a2, int64_t a3);
int64_t function_384a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38518(int64_t a1);
int64_t function_3854d(int64_t a1);
int64_t function_3856a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3858d(void);
int64_t function_385a9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_385b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_386c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38777(void);
int64_t function_387c2(void);
int64_t function_387c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_38902(void);
int64_t function_38913(int64_t a1);
int64_t function_3891c(int64_t a1);
int64_t function_38954(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3899c(int64_t a1);
int64_t function_389ab(void);
int64_t function_40dcdf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_40dd30(int64_t a1);
int64_t function_40dd59(int64_t a1);
int64_t function_40dd88(int64_t a1, int64_t result);
int64_t function_40dda5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40ddb8(int64_t a1);
int64_t function_40dedf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_40def6(int64_t a1);
int64_t function_40df25(int64_t a1);
int64_t function_40df69(void);
int64_t function_40dfab(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40e001(int64_t a1);
int64_t function_40e034(void);
int64_t function_40e03b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_40e06c(void);
int64_t function_40e0ba(int64_t a1);
int64_t function_40e0c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_40e19f(void);
int64_t function_40e1a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40e22e(void);
int64_t function_40e2eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_40e38f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40e424(int64_t a1);
int64_t function_40e42d(void);
int64_t function_40e456(void);
int64_t function_40e4b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_40e4ef(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t result);
int64_t function_46e87e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46e8f2(void);
int64_t function_46e915(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_46e99f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_46e9b5(int64_t a1);
int64_t function_46e9cd(void);
int64_t function_46e9f6(void);
int64_t function_46ea1d(uint64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46eb30(void);
int64_t function_46eb46(int64_t a1);
int64_t function_46eb4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46eb6e(void);
int64_t function_46eb80(void);
int64_t function_46eb91(void);
int64_t function_46ebcd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_46f07e(void);
int64_t function_46f07f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_519050();
int64_t function_519885(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5198ca(int64_t a1, int64_t a2, int64_t a3);
int64_t function_519916(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_519966(void);
int64_t function_5199b0(int64_t a1);
int64_t function_5199e0(int64_t result, int64_t a2);
int64_t function_519c50(int64_t a1, int64_t a2);
int64_t function_519d4a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_519d96(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_519de6(void);
int64_t function_519e30(int64_t a1);
int64_t function_519e60(int64_t result, int64_t a2);
int64_t function_565970();
int64_t function_569370();
int64_t function_569910();
int64_t function_6f216970();
int64_t function_7af93b1a();
int64_t function_ffffffffa39d4a36();
int64_t function_ffffffffee14b602();
int64_t function_fffffffffaa882e2();
int64_t unknown_3fb9ff12();
int64_t unknown_ffffffffb69de948();

// Address range: 0x383c6 - 0x383c7
int64_t function_383c6(int64_t a1) {
    // 0x383c6
    int64_t result; // 0x383c6
    return result;
}

// Address range: 0x383c8 - 0x383d6
int64_t function_383c8(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 0x4d144808); // 0x383c8
    int64_t v2; // 0x383c8
    bool v3; // 0x383c8
    *v1 = *v1 + (int32_t)v2 + (int32_t)v3;
    char v4 = __asm_in(-22); // 0x383ce
    int64_t v5; // 0x383c8
    *(char *)v5 = *(char *)&v5 >> 6;
    return v2 & -256 | (int64_t)v4;
}

// Address range: 0x383ec - 0x3847a
int64_t function_383ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x383ec
    int64_t v1; // 0x383ec
    int64_t v2 = v1;
    int32_t v3 = (int32_t)v1 ^ 0x336025dc; // 0x383ec
    if (v3 == 0) {
        // 0x38431
        return 0;
    }
    // 0x383f3
    *(int32_t *)v2 = (int32_t)v2;
    return v3 & -256 | 74;
}

// Address range: 0x38495 - 0x384a3
int64_t function_38495(int64_t a1, int64_t a2, int64_t a3) {
    // 0x38495
    int64_t v1; // 0x38495
    int64_t v2 = v1;
    *(char *)(v1 - 0x3b4f8713) = (char)a3;
    int32_t * v3 = (int32_t *)((v2 + 31) % 256 | v2 & -256); // 0x3849f
    *v3 = -*v3;
    return function_38518(a1);
}

// Address range: 0x384a3 - 0x38513
int64_t function_384a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x384a3
    int64_t v1; // 0x384a3
    int64_t v2 = (v1 ^ a2) & 0xffffffff; // 0x384b7
    *(int32_t *)(v2 + 40) = 0;
    int64_t result = (int64_t)(*(int32_t *)(a2 - 0x5c0bfea0) & (int32_t)v1); // 0x384fa
    if (*(int64_t *)(v2 + 184) != __readfsqword(40)) {
        // 0x384fc
        __stack_chk_fail();
        result = (int64_t)&g19;
    }
    // 0x38501
    return result;
}

// Address range: 0x38518 - 0x3854d
int64_t function_38518(int64_t a1) {
    // 0x38518
    __readfsqword(40);
    return function_200b07();
}

// Address range: 0x3854d - 0x38554
int64_t function_3854d(int64_t a1) {
    int64_t result = __asm_int1(a1); // 0x3854e
    int32_t * v1 = (int32_t *)(a1 + 8); // 0x3854f
    *v1 = *v1 ^ (int32_t)result;
    return result;
}

// Address range: 0x3856a - 0x3856d
int64_t function_3856a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3856a
    int64_t result; // 0x3856a
    return result;
}

// Address range: 0x3858d - 0x3858e
int64_t function_3858d(void) {
    // 0x3858d
    int64_t result; // 0x3858d
    return result;
}

// Address range: 0x385a9 - 0x385ad
int64_t function_385a9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x385a9
    int64_t result; // 0x385a9
    return result;
}

// Address range: 0x385b2 - 0x385c3
int64_t function_385b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x385b2
    *(char *)(v2 - 0x2701aebb) = -81;
    int64_t v3; // 0x385b2
    bool v4; // 0x385b2
    if (v4) {
        v3 = function_3858d();
    }
    int64_t v5 = v3;
    *(int32_t *)a1 = *(int32_t *)&v1;
    return (v5 + 212) % 256 | v5 & -256;
}

// Address range: 0x386c6 - 0x38764
int64_t function_386c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x386c6
    int64_t result; // 0x386c6
    bool v1; // 0x386c6
    if (v1) {
        // 0x386cd
        return result;
    }
    // 0x38747
    *(int32_t *)result = 0xf8abafb;
    return a4 & 0xffffffff;
}

// Address range: 0x38777 - 0x3877a
int64_t function_38777(void) {
    // 0x38777
    int64_t result; // 0x38777
    return result;
}

// Address range: 0x387c2 - 0x387c3
int64_t function_387c2(void) {
    // 0x387c2
    int64_t result; // 0x387c2
    return result;
}

// Address range: 0x387c4 - 0x38855
int64_t function_387c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    if (*(char *)(a3 - 69) < 26) {
        // 0x3884b
        __asm_in(-53);
        return __asm_sti();
    }
    // 0x387cf
    *(int32_t *)(a4 - 0x422196ee) = -0x6a9d528a;
    int64_t v2 = v1;
    *(int32_t *)v2 = *(int32_t *)&v1 | (int32_t)v2;
    return function_387c2();
}

// Address range: 0x38902 - 0x38904
int64_t function_38902(void) {
    // 0x38902
    int64_t v1; // 0x38902
    return function_38954(v1, v1, v1, v1, (int64_t)&g19, (int64_t)&g19);
}

// Address range: 0x38913 - 0x38914
int64_t function_38913(int64_t a1) {
    // 0x38913
    int64_t result; // 0x38913
    return result;
}

// Address range: 0x3891c - 0x3891f
int64_t function_3891c(int64_t a1) {
    // 0x3891c
    int64_t result; // 0x3891c
    return result;
}

// Address range: 0x38954 - 0x3898a
int64_t function_38954(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x38954
    int64_t v1; // 0x38954
    uint64_t result = v1;
    int32_t v2 = result; // 0x38968
    __asm_out(-73, v2);
    *(int32_t *)-0x6daa3d7d943f7b41 = v2;
    int32_t * v3 = (int32_t *)(a2 - 110); // 0x38975
    *v3 = *v3 / 2;
    char * v4 = (char *)(a2 - 0x5be35151); // 0x38978
    *v4 = *v4 & (char)(result / 256);
    int32_t * v5 = (int32_t *)a1; // 0x3897f
    int64_t v6; // 0x38954
    *v5 = *(int32_t *)&v6 | 0x2296ecf;
    *v5 = __asm_insd((int16_t)a3);
    return result;
}

// Address range: 0x3899c - 0x389a2
int64_t function_3899c(int64_t a1) {
    // 0x3899c
    return function_fffffffffaa882e2(a1);
}

// Address range: 0x389ab - 0x389ac
int64_t function_389ab(void) {
    // 0x389ab
    int64_t result; // 0x389ab
    return result;
}

// Address range: 0x40dcdf - 0x40dcfb
int64_t function_40dcdf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = *(char *)a5; // 0x40dce0
    int64_t v2; // 0x40dcdf
    unsigned char v3 = (char)v2;
    char v4 = v1 - v3; // 0x40dce0
    int64_t v5 = (char)v2 > (char)a4 ? 0xc9c74d4a : 0xc9c74d49; // 0x40dce6
    int64_t v6 = (v2 & 0xffff00ff | 256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v1 < v3) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v1 % 16 - v3 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v4) % 2 == 0)) | 512) - v5; // 0x40dce6
    bool v7; // 0x40dcdf
    char * v8 = (char *)(a5 + 0x6003d6a + (v7 ? -1 : 1)); // 0x40dcf0
    *v8 = *v8 + (char)(v2 / 256);
    return (v6 + 215) % 256 | v6 & 0xffffff00;
}

// Address range: 0x40dd30 - 0x40dd33
int64_t function_40dd30(int64_t a1) {
    // 0x40dd30
    int64_t result; // 0x40dd30
    return result;
}

// Address range: 0x40dd59 - 0x40dd5b
int64_t function_40dd59(int64_t a1) {
    // 0x40dd59
    int64_t v1; // 0x40dd59
    return v1 & 0xffffffff;
}

// Address range: 0x40dd88 - 0x40dd8d
int64_t function_40dd88(int64_t a1, int64_t result) {
    // 0x40dd88
    return result;
}

// Address range: 0x40dda5 - 0x40ddad
int64_t function_40dda5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40dda5
    int64_t v1; // 0x40dda5
    return (int64_t)(*(int32_t *)((a3 - a2 & 0xffffffff) + 69) ^ (int32_t)v1);
}

// Address range: 0x40ddb8 - 0x40ddbb
int64_t function_40ddb8(int64_t a1) {
    // 0x40ddb8
    int64_t result; // 0x40ddb8
    return result;
}

// Address range: 0x40dedf - 0x40deeb
int64_t function_40dedf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40dedf
    int64_t result; // 0x40dedf
    *(int32_t *)a3 = (int32_t)(result ^ result);
    *(int64_t *)result = a3;
    return result;
}

// Address range: 0x40def6 - 0x40def7
int64_t function_40def6(int64_t a1) {
    // 0x40def6
    int64_t result; // 0x40def6
    return result;
}

// Address range: 0x40df25 - 0x40df27
int64_t function_40df25(int64_t a1) {
    // 0x40df25
    int64_t result; // 0x40df25
    return result;
}

// Address range: 0x40df69 - 0x40df6a
int64_t function_40df69(void) {
    // 0x40df69
    int64_t result; // 0x40df69
    return result;
}

// Address range: 0x40dfab - 0x40dfaf
int64_t function_40dfab(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40dfab
    return function_40df69();
}

// Address range: 0x40e001 - 0x40e003
int64_t function_40e001(int64_t a1) {
    // 0x40e001
    int64_t result; // 0x40e001
    return result;
}

// Address range: 0x40e034 - 0x40e037
int64_t function_40e034(void) {
    // 0x40e034
    int64_t result; // 0x40e034
    return result;
}

// Address range: 0x40e03b - 0x40e03e
int64_t function_40e03b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40e03b
    int64_t result; // 0x40e03b
    return result;
}

// Address range: 0x40e06c - 0x40e06d
int64_t function_40e06c(void) {
    // 0x40e06c
    int64_t result; // 0x40e06c
    return result;
}

// Address range: 0x40e0ba - 0x40e0c4
int64_t function_40e0ba(int64_t a1) {
    // 0x40e0ba
    int64_t v1; // 0x40e0ba
    int64_t v2 = v1;
    return ((v2 + 213) % 256 | v2 & 0xffffff00) ^ 0x8516b6b4;
}

// Address range: 0x40e0c8 - 0x40e137
int64_t function_40e0c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x40e0c8
    int64_t v3 = v2 + 0x24290212; // 0x40e0c8
    int64_t v4 = 43; // 0x40e0ce
    char v5 = *(char *)(v2 + 27); // 0x40e0d0
    if (llvm_ctpop_i8((char)(int64_t)&v4 - v5) % 2 != 0) {
        // 0x40e129
        float80_t v6; // 0x40e0c8
        *(int32_t *)(v2 + 34) = (int32_t)v6;
        __asm_outsd((int16_t)a3, *(int32_t *)&v1);
        return 0x10000 * (int32_t)v3 >> 16;
    }
    int64_t v7 = v3 & 0xffffffff; // 0x40e0c8
    *(int32_t *)v7 = (int32_t)a1;
    v1 = v7;
    return 2 * function_40e06c() & -256 | (int64_t)*(char *)v7;
}

// Address range: 0x40e19f - 0x40e1a0
int64_t function_40e19f(void) {
    // 0x40e19f
    int64_t result; // 0x40e19f
    return result;
}

// Address range: 0x40e1a6 - 0x40e1d7
int64_t function_40e1a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40e1a6
    return function_40e19f();
}

// Address range: 0x40e22e - 0x40e233
int64_t function_40e22e(void) {
    // 0x40e22e
    return function_1f1fe294();
}

// Address range: 0x40e2eb - 0x40e35e
int64_t function_40e2eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char * v1 = (char *)(a4 + 0x1127f344); // 0x40e2eb
    *v1 = *v1 ^ (char)a4;
    int64_t v2; // 0x40e2eb
    int32_t * v3 = (int32_t *)(v2 + 9); // 0x40e2f1
    *v3 = *v3 + (int32_t)a4;
    int64_t v4 = unknown_ffffffffb69de948(); // 0x40e2f5
    int64_t v5 = v4 & -256; // 0x40e2fe
    unsigned char v6 = (__readfsbyte(a2 + 0x27213af8 + 4 * a2) ^ (char)v4) & 57; // 0x40e306
    int64_t v7; // 0x40e2eb
    char v8 = *(int32_t *)&v7 > (int32_t)(v5 | (int64_t)v6); // 0x40e30d
    unsigned char v9 = v6 + 93 + v8; // 0x40e30d
    int64_t result = v5 | (int64_t)v9; // 0x40e30d
    if (v9 + v8 < 0) {
        // 0x40e314
        return result;
    }
    int64_t v10 = result; // bp-24, 0x40e353
    int32_t v11 = *(int32_t *)(int64_t)((int32_t)v4 >> 31); // 0x40e354
    *(int64_t *)((int64_t)(v11 & (int32_t)(int64_t)&v10) - 8) = result;
    return result;
}

// Address range: 0x40e38f - 0x40e3b2
int64_t function_40e38f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40e38f
    int64_t result; // 0x40e38f
    return result;
}

// Address range: 0x40e424 - 0x40e427
int64_t function_40e424(int64_t a1) {
    // 0x40e424
    int64_t result; // 0x40e424
    return result;
}

// Address range: 0x40e42d - 0x40e430
int64_t function_40e42d(void) {
    // 0x40e42d
    int64_t result; // 0x40e42d
    return result;
}

// Address range: 0x40e456 - 0x40e458
int64_t function_40e456(void) {
    // 0x40e456
    int64_t result; // 0x40e456
    return result;
}

// Address range: 0x40e4b5 - 0x40e4cf
int64_t function_40e4b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40e4b5
    int64_t v1; // 0x40e4b5
    uint64_t v2 = v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x40e4b5
    bool v4; // 0x40e4b5
    if (v3 != 0) {
        int32_t * v5 = (int32_t *)(v1 - 0x7a5a659a); // 0x40e4b5
        uint32_t v6 = *v5; // 0x40e4b5
        uint32_t v7 = v3 - 1; // 0x40e4b5
        bool v8; // 0x40e4b5
        *v5 = v6 << v3 | (int32_t)v8 << v7 | (int32_t)((int64_t)v6 >> (int64_t)(33 - v3));
        v4 = (v6 & 0x80000000 >> v7) != 0;
    }
    char * v9 = (char *)(a2 - 1); // 0x40e4bb
    *v9 = (char)v4 - (char)v2 + *v9;
    *(char *)v2 = (char)(v2 / 256);
    return a2 & 0xffffffff;
}

// Address range: 0x40e4ef - 0x40e504
int64_t function_40e4ef(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t result) {
    uint64_t v1 = a3 / 256; // 0x40e4f2
    int64_t v2; // 0x40e4ef
    *(char *)a4 = (char)(v2 | v1);
    float80_t v3; // 0x40e4ef
    *(int64_t *)(a4 + 48) = (int64_t)v3;
    char * v4 = (char *)(2 * a2 + 0x498b6b54 + result); // 0x40e4f8
    *v4 = *v4 + (char)v1;
    return result;
}

// Address range: 0x46e87e - 0x46e893
int64_t function_46e87e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x46e87e
    int64_t v1; // 0x46e87e
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)v2; // 0x46e87e
    *(int32_t *)(a3 - 95) = v3;
    int64_t v4; // 0x46e87e
    int32_t v5 = *(int32_t *)&v4; // 0x46e886
    *(int32_t *)v4 = (int32_t)(v3 < 0x55cd71fb) + (int32_t)v1 + v5;
    return v2 + 0xa328e05 & 0x1c6cd700 | v2 + 112 & 197 | 0xe393283a;
}

// Address range: 0x46e8f2 - 0x46e8f7
int64_t function_46e8f2(void) {
    // 0x46e8f2
    return function_ffffffffa39d4a36();
}

// Address range: 0x46e915 - 0x46e91c
int64_t function_46e915(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x46e915
    int64_t result; // 0x46e915
    return result;
}

// Address range: 0x46e99f - 0x46e9af
int64_t function_46e99f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x46e99f
    bool v1; // 0x46e99f
    uint32_t v2 = v1 ? 0x361fd311 : 0x361fd310; // 0x46e99f
    char v3 = *(char *)0x4af733ef; // 0x46e9a4
    int64_t v4; // 0x46e99f
    *(char *)0x4af733ef = v3 + (char)(a4 / 256) + (char)(v1 | v2 > (int32_t)v4);
    return function_ffffffffee14b602();
}

// Address range: 0x46e9b5 - 0x46e9c7
int64_t function_46e9b5(int64_t a1) {
    // 0x46e9b5
    int64_t v1; // 0x46e9b5
    return function_7af93b1a(v1 & 0xffffffff);
}

// Address range: 0x46e9cd - 0x46e9ce
int64_t function_46e9cd(void) {
    // 0x46e9cd
    int64_t result; // 0x46e9cd
    return result;
}

// Address range: 0x46e9f6 - 0x46e9f7
int64_t function_46e9f6(void) {
    // 0x46e9f6
    int64_t result; // 0x46e9f6
    return result;
}

// Address range: 0x46ea1d - 0x46eb2c
int64_t function_46ea1d(uint64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x46ea1d
    int64_t v1; // 0x46ea1d
    int64_t v2 = v1;
    int64_t v3 = a2;
    int32_t * v4 = (int32_t *)(v2 + 0x668f890); // 0x46ea21
    *v4 = 2 * *v4;
    int32_t v5 = *(int32_t *)(a4 + a1); // 0x46ea2b
    *(int64_t *)((int64_t)((int32_t)v1 - v5) - 8) = a1;
    char * v6 = (char *)(v3 + 96); // 0x46ea30
    char v7 = a1 / 256; // 0x46ea30
    *v6 = *v6 & v7;
    unsigned char v8 = *(char *)&v3 & v7; // 0x46ea35
    if (v8 == 0) {
        // 0x46ea39
        return v1 & 0xffffffff;
    }
    int64_t result = (v2 ^ a1) & 0xff00 | v2 & -0x10000; // 0x46ea33
    *(char *)a1 = __asm_insb((int16_t)(256 * (int64_t)v8 | a1 % 256));
    if (*(char *)(v1 + 23) > (char)a4) {
        // 0x46eb1c
        return (int64_t)(*(int32_t *)(result - 126) & 0x6072da22);
    }
    // 0x46eaaa
    return result;
}

// Address range: 0x46eb30 - 0x46eb32
int64_t function_46eb30(void) {
    // 0x46eb30
    int64_t result; // 0x46eb30
    return result;
}

// Address range: 0x46eb46 - 0x46eb47
int64_t function_46eb46(int64_t a1) {
    // 0x46eb46
    int64_t result; // 0x46eb46
    return result;
}

// Address range: 0x46eb4f - 0x46eb6d
int64_t function_46eb4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x46eb4f
    int64_t v1; // 0x46eb4f
    int64_t v2 = v1 + 0x19d5689f; // 0x46eb4f
    unsigned char v3 = __readgsbyte(v2); // 0x46eb4f
    __writegsbyte(v2, v3 / 128 | 2 * v3);
    *(char *)a1 = (char)v1;
    bool v4; // 0x46eb4f
    int64_t v5 = (v4 ? -1 : 1) + a1; // 0x46eb56
    uint16_t v6 = (int16_t)a3; // 0x46eb57
    *(int32_t *)v5 = __asm_insd(v6);
    uint16_t v7 = (int16_t)v1; // 0x46eb58
    uint16_t v8 = v6 % 256; // 0x46eb58
    int64_t v9 = v1 & 0xffff0000 | (int64_t)(v7 / v8 % 256) | (int64_t)(256 * (v7 % v8)); // 0x46eb58
    uint64_t v10 = v5 + (v4 ? 0xfffffffc : 4); // 0x46eb5c
    char * v11 = (char *)(a4 + 0x57693b49); // 0x46eb64
    *v11 = *v11 & (char)(v10 / 256);
    int32_t * v12 = (int32_t *)(v9 - 41); // 0x46eb6a
    *v12 = *v12 & (int32_t)v9;
    return v10 & 0xffffffff;
}

// Address range: 0x46eb6e - 0x46eb7c
int64_t function_46eb6e(void) {
    // 0x46eb6e
    int64_t v1; // 0x46eb6e
    return function_46ebcd(v1, v1, v1, v1, v1, (int64_t)&g19);
}

// Address range: 0x46eb80 - 0x46eb87
int64_t function_46eb80(void) {
    // 0x46eb80
    int64_t v1; // 0x46eb80
    int64_t result = v1;
    bool v2; // 0x46eb80
    *(char *)result = (char)result - (char)((uint64_t)v1 / 256) + (char)v2;
    return result;
}

// Address range: 0x46eb91 - 0x46eb96
int64_t function_46eb91(void) {
    // 0x46eb91
    return function_6f216970();
}

// Address range: 0x46ebcd - 0x46ec1f
int64_t function_46ebcd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x46ebcd
    int64_t v1; // 0x46ebcd
    if ((char)v1 > (char)v1) {
        // 0x46ebd0
        return (0x100000000 * v1 >> 32) * (0x100000000 * v1 >> 32) & 0xffffffff;
    }
    int16_t v2 = a3; // 0x46ec0a
    __asm_out_133(v2, (char)unknown_3fb9ff12());
    __asm_in_134(v2);
    return v1 & 0xffffffff;
}

// Address range: 0x46f07e - 0x46f07f
int64_t function_46f07e(void) {
    // 0x46f07e
    int64_t result; // 0x46f07e
    return result;
}

// Address range: 0x46f07f - 0x46f092
int64_t function_46f07f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x46f07f
    int64_t v1; // 0x46f07f
    return v1 + 0xef863ccb & 0xffffffff;
}

// Address range: 0x519885 - 0x5198ca
// From class:    std::__cxx11::moneypunct<char, false>
// Type:          constructor
int64_t function_519885(int64_t a1, int64_t a2, int64_t a3) {
    // 0x519885
    *(int64_t *)(a1 + 16) = 0;
    *(int32_t *)(a1 + 8) = (int32_t)(a2 != 0);
    *(int64_t *)a1 = (int64_t)&g2;
    return function_569910();
}

// Address range: 0x5198ca - 0x519916
// From class:    std::__cxx11::moneypunct<char, false>
// Type:          constructor
int64_t function_5198ca(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5198ca
    int64_t v1; // 0x5198ca
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)(v1 + 16) = a2;
    *(int32_t *)(v1 + 8) = (int32_t)(a3 != 0) | ((int32_t)&g19 ^ (int32_t)&g19) & -256;
    *(int64_t *)v1 = (int64_t)&g2;
    return function_569910();
}

// Address range: 0x519916 - 0x519966
// From class:    std::__cxx11::moneypunct<char, false>
// Type:          constructor
int64_t function_519916(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x519916
    int64_t v1; // 0x519916
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)(v1 + 16) = 0;
    *(int32_t *)(v1 + 8) = (int32_t)(a4 != 0) | ((int32_t)&g19 ^ (int32_t)&g19) & -256;
    *(int64_t *)v1 = (int64_t)&g2;
    return function_569910();
}

// Address range: 0x519966 - 0x5199a2
int64_t function_519966(void) {
    // 0x519966
    int64_t v1; // 0x519966
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t result = *(int64_t *)((int64_t)&g19 + 16); // 0x519983
    if (result != g10) {
        // 0x5199a0
        return result;
    }
    // 0x519990
    return (int64_t)*(char *)(*(int64_t *)(v1 + 16) + 33);
}

// Address range: 0x5199b0 - 0x5199d2
int64_t function_5199b0(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 24); // 0x5199b3
    if (result != g12) {
        // 0x5199d0
        return result;
    }
    // 0x5199c0
    return (int64_t)*(char *)(*(int64_t *)(a1 + 16) + 34);
}

// Address range: 0x5199e0 - 0x519c42
int64_t function_5199e0(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x5199e9
    int64_t str = a2; // 0x519a07
    if (*(int64_t *)(a2 + 32) == g11) {
        // 0x519a09
        str = *(int64_t *)(*(int64_t *)(a2 + 16) + 16);
        *(int64_t *)result = result + 16;
        int64_t v2 = -1; // 0x519a22
        if (str != 0) {
            // 0x519a24
            v2 = str + (int64_t)strlen((char *)str);
        }
        // 0x519a31
        function_519050(result, str, v2);
    }
    // 0x519a3c
    if (v1 == __readfsqword(40)) {
        // 0x519a4f
        return result;
    }
    // 0x519a64
    __stack_chk_fail();
    int64_t v3 = __readfsqword(40); // 0x519a79
    int64_t str2 = str; // 0x519a97
    if (*(int64_t *)(*(int64_t *)str + 40) == g5) {
        // 0x519a99
        str2 = *(int64_t *)(*(int64_t *)(str + 16) + 40);
        *(int64_t *)result = result + 16;
        int64_t v4 = -1; // 0x519ab2
        if (str2 != 0) {
            // 0x519ab4
            v4 = str2 + (int64_t)strlen((char *)str2);
        }
        // 0x519ac1
        function_519050(result, str2, v4);
    }
    // 0x519acc
    if (v3 == __readfsqword(40)) {
        // 0x519a4f
        return result;
    }
    // 0x519af4
    __stack_chk_fail();
    int64_t v5 = __readfsqword(40); // 0x519b09
    int64_t str3 = str2; // 0x519b27
    if (*(int64_t *)(*(int64_t *)str2 + 48) == g17) {
        // 0x519b29
        str3 = *(int64_t *)(*(int64_t *)(str2 + 16) + 56);
        *(int64_t *)result = result + 16;
        int64_t v6 = -1; // 0x519b42
        if (str3 != 0) {
            // 0x519b44
            v6 = str3 + (int64_t)strlen((char *)str3);
        }
        // 0x519b51
        function_519050(result, str3, v6);
    }
    // 0x519b5c
    if (v5 == __readfsqword(40)) {
        // 0x519a4f
        return result;
    }
    // 0x519b84
    __stack_chk_fail();
    int64_t v7 = __readfsqword(40); // 0x519b99
    if (*(int64_t *)(*(int64_t *)str3 + 56) == g6) {
        int64_t str4 = *(int64_t *)(*(int64_t *)(str3 + 16) + 72); // 0x519bc4
        *(int64_t *)result = result + 16;
        int64_t v8 = -1; // 0x519bd2
        if (str4 != 0) {
            // 0x519bd4
            v8 = str4 + (int64_t)strlen((char *)str4);
        }
        // 0x519be1
        function_519050(result, str4, v8);
    }
    // 0x519bec
    if (v7 == __readfsqword(40)) {
        // 0x519a4f
        return result;
    }
    // 0x519c14
    __stack_chk_fail();
    int64_t result2 = *(int64_t *)(*(int64_t *)result + 64); // 0x519c23
    if (result2 != g16) {
        // 0x519a4f
        return result2;
    }
    // 0x519c30
    return (int64_t)*(int32_t *)(*(int64_t *)(result + 16) + 88);
}

// Address range: 0x519c50 - 0x519d4a
// From class:    std::__cxx11::moneypunct<char, true>
// Type:          constructor
int64_t function_519c50(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x519c54
    int64_t result = *(int64_t *)(a1 + 72); // 0x519c67
    if (result != g3) {
        // 0x519c90
        if (v1 == __readfsqword(40)) {
            // 0x519ca0
            return result;
        }
    } else {
        // 0x519c74
        if (v1 == __readfsqword(40)) {
            // 0x519c8b
            return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 92);
        }
    }
    // 0x519ca6
    __stack_chk_fail();
    int64_t v2 = __readfsqword(40); // 0x519cb4
    int64_t result2 = *(int64_t *)(a1 + 80); // 0x519cc7
    int64_t * v3; // 0x519c50
    if (result2 != g13) {
        // 0x519cf0
        if (v2 == __readfsqword(40)) {
            // 0x519ca0
            return result2;
        }
        // 0x519cf0
        v3 = (int64_t *)(a1 + 16);
    } else {
        int64_t * v4 = (int64_t *)(a1 + 16);
        v3 = v4;
        if (v2 == __readfsqword(40)) {
            // 0x519ceb
            return (int64_t)*(int32_t *)(*v4 + 96);
        }
    }
    // 0x519d06
    __stack_chk_fail();
    *v3 = 0;
    *(int32_t *)(a1 + 8) = (int32_t)(a2 != 0) | ((int32_t)&g19 ^ (int32_t)&g19) & -256;
    *(int64_t *)a1 = (int64_t)&g1;
    return function_569370();
}

// Address range: 0x519d4a - 0x519d96
// From class:    std::__cxx11::moneypunct<char, true>
// Type:          constructor
int64_t function_519d4a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x519d4a
    int64_t v1; // 0x519d4a
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)(v1 + 16) = a2;
    *(int32_t *)(v1 + 8) = (int32_t)(a3 != 0) | ((int32_t)&g19 ^ (int32_t)&g19) & -256;
    *(int64_t *)v1 = (int64_t)&g1;
    return function_569370();
}

// Address range: 0x519d96 - 0x519de6
// From class:    std::__cxx11::moneypunct<char, true>
// Type:          constructor
int64_t function_519d96(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x519d96
    int64_t v1; // 0x519d96
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)(v1 + 16) = 0;
    *(int32_t *)(v1 + 8) = (int32_t)(a4 != 0) | ((int32_t)&g19 ^ (int32_t)&g19) & -256;
    *(int64_t *)v1 = (int64_t)&g1;
    return function_569370();
}

// Address range: 0x519de6 - 0x519e22
int64_t function_519de6(void) {
    // 0x519de6
    int64_t v1; // 0x519de6
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t result = *(int64_t *)((int64_t)&g19 + 16); // 0x519e03
    if (result != g14) {
        // 0x519e20
        return result;
    }
    // 0x519e10
    return (int64_t)*(char *)(*(int64_t *)(v1 + 16) + 33);
}

// Address range: 0x519e30 - 0x519e52
int64_t function_519e30(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 24); // 0x519e33
    if (result != g4) {
        // 0x519e50
        return result;
    }
    // 0x519e40
    return (int64_t)*(char *)(*(int64_t *)(a1 + 16) + 34);
}

// Address range: 0x519e60 - 0x51a0c2
int64_t function_519e60(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x519e69
    int64_t str = a2; // 0x519e87
    if (*(int64_t *)(a2 + 32) == g18) {
        // 0x519e89
        str = *(int64_t *)(*(int64_t *)(a2 + 16) + 16);
        *(int64_t *)result = result + 16;
        int64_t v2 = -1; // 0x519ea2
        if (str != 0) {
            // 0x519ea4
            v2 = str + (int64_t)strlen((char *)str);
        }
        // 0x519eb1
        function_519050(result, str, v2);
    }
    // 0x519ebc
    if (v1 == __readfsqword(40)) {
        // 0x519ecf
        return result;
    }
    // 0x519ee4
    __stack_chk_fail();
    int64_t v3 = __readfsqword(40); // 0x519ef9
    int64_t str2 = str; // 0x519f17
    if (*(int64_t *)(*(int64_t *)str + 40) == g7) {
        // 0x519f19
        str2 = *(int64_t *)(*(int64_t *)(str + 16) + 40);
        *(int64_t *)result = result + 16;
        int64_t v4 = -1; // 0x519f32
        if (str2 != 0) {
            // 0x519f34
            v4 = str2 + (int64_t)strlen((char *)str2);
        }
        // 0x519f41
        function_519050(result, str2, v4);
    }
    // 0x519f4c
    if (v3 == __readfsqword(40)) {
        // 0x519ecf
        return result;
    }
    // 0x519f74
    __stack_chk_fail();
    int64_t v5 = __readfsqword(40); // 0x519f89
    int64_t str3 = str2; // 0x519fa7
    if (*(int64_t *)(*(int64_t *)str2 + 48) == g9) {
        // 0x519fa9
        str3 = *(int64_t *)(*(int64_t *)(str2 + 16) + 56);
        *(int64_t *)result = result + 16;
        int64_t v6 = -1; // 0x519fc2
        if (str3 != 0) {
            // 0x519fc4
            v6 = str3 + (int64_t)strlen((char *)str3);
        }
        // 0x519fd1
        function_519050(result, str3, v6);
    }
    // 0x519fdc
    if (v5 == __readfsqword(40)) {
        // 0x519ecf
        return result;
    }
    // 0x51a004
    __stack_chk_fail();
    int64_t v7 = __readfsqword(40); // 0x51a019
    if (*(int64_t *)(*(int64_t *)str3 + 56) == g15) {
        int64_t str4 = *(int64_t *)(*(int64_t *)(str3 + 16) + 72); // 0x51a044
        *(int64_t *)result = result + 16;
        int64_t v8 = -1; // 0x51a052
        if (str4 != 0) {
            // 0x51a054
            v8 = str4 + (int64_t)strlen((char *)str4);
        }
        // 0x51a061
        function_519050(result, str4, v8);
    }
    // 0x51a06c
    if (v7 == __readfsqword(40)) {
        // 0x519ecf
        return result;
    }
    // 0x51a094
    __stack_chk_fail();
    int64_t result2 = *(int64_t *)(*(int64_t *)result + 64); // 0x51a0a3
    if (result2 != g8) {
        // 0x519ecf
        return result2;
    }
    // 0x51a0b0
    return (int64_t)*(int32_t *)(*(int64_t *)(result + 16) + 88);
}
