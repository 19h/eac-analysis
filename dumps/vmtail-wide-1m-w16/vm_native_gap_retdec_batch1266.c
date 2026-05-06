/*
 * Targeted RetDec C for native executable gap queue batch 1266.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x15daec-0x15dcec rank=- name=- kind=- bytes=- uncovered=-
 *   0x15dcec-0x15deec rank=- name=- kind=- bytes=- uncovered=-
 *   0x15deec-0x15e0ec rank=- name=- kind=- bytes=- uncovered=-
 *   0x15e0ec-0x15e2ec rank=- name=- kind=- bytes=- uncovered=-
 *   0x15e2ec-0x15e4ec rank=- name=- kind=- bytes=- uncovered=-
 *   0x15e4ec-0x15e6ec rank=- name=- kind=- bytes=- uncovered=-
 *   0x15e6ec-0x15e8ec rank=- name=- kind=- bytes=- uncovered=-
 *   0x15e8ec-0x15eaec rank=- name=- kind=- bytes=- uncovered=-
 *   0x57094e-0x570b4e rank=- name=- kind=- bytes=- uncovered=-
 *   0x570b4e-0x570d4e rank=- name=- kind=- bytes=- uncovered=-
 *   0x570d4e-0x570f4e rank=- name=- kind=- bytes=- uncovered=-
 *   0x570f4e-0x57114e rank=- name=- kind=- bytes=- uncovered=-
 *   0x57114e-0x57134e rank=- name=- kind=- bytes=- uncovered=-
 *   0x57134e-0x57154e rank=- name=- kind=- bytes=- uncovered=-
 *   0x57154e-0x57174e rank=- name=- kind=- bytes=- uncovered=-
 *   0x57174e-0x57194e rank=- name=- kind=- bytes=- uncovered=-
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
extern int g20;
extern int g21;
extern int g22;
extern int g23;
extern int g24;
extern int g25;
extern int g26;
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

int64_t function_15daec(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_15daf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_15db83(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_15dcf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_15de8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_15e01b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_15e13e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_15e287(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_15e427(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_15e576(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_15e6ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_15e86f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_15e9ff(void);
int64_t function_15ea1a(void);
int64_t function_15ea39(void);
int64_t function_15ea3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_15ea81(void);
int64_t function_15ea82(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4eeb50();
int64_t function_518fa0();
int64_t function_52e330();
int64_t function_542470();
int64_t function_54c6d0();
int64_t function_565970();
int64_t function_5679e0();
int64_t function_568460();
int64_t function_568730();
int64_t function_569eb0();
int64_t function_569fc0();
int64_t function_56adb0();
int64_t function_56aeb0();
int64_t function_570890();
int64_t function_57094e(void);
int64_t function_570960(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_570b50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_570c50(int64_t a1, int64_t a2);
int64_t function_570d00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_570dc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_570ec0(int64_t a1, int64_t a2);
int64_t function_570f80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_571040(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_571220(int64_t a1);
int64_t function_5712b0(int64_t a1);
int64_t function_571340(int64_t a1);
int64_t function_5713b0(int64_t a1);
int64_t function_571440(int64_t a1);
int64_t function_5714d0(int64_t a1);
int64_t function_571540(int64_t a1);
int64_t function_5715b0(int64_t a1);
int64_t function_571620(int64_t a1);
int64_t function_571680(int64_t a1);
int64_t function_5716e0(int64_t a1);
int64_t function_571740(int64_t a1);
int64_t function_5717a0(int64_t a1);
int64_t function_571800(int64_t a1);
int64_t function_571860(int64_t a1);
int64_t function_5718c0(int64_t a1);
int64_t function_571920(int64_t a1);
int64_t function_576860();
int64_t function_576940();
int64_t function_577a20();
int64_t function_577bc0();
int64_t function_577f00();
int64_t function_578090();
int64_t function_578220();
int64_t function_578380();
int64_t function_cdc60();

// Address range: 0x15daec - 0x15daef
int64_t function_15daec(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x15daec
    int64_t result; // 0x15daec
    char * v1 = (char *)(result - 125); // 0x15daec
    *v1 = *v1 | (char)a4;
    return result;
}

// Address range: 0x15daf0 - 0x15db83
int64_t function_15daf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x15daf0
    int64_t v1; // 0x15daf0
    int64_t v2 = v1;
    if ((v1 & 0xff00) != 0) {
        char * v3 = (char *)(v2 - 117); // 0x15daf4
        unsigned char v4 = *v3; // 0x15daf4
        unsigned char v5 = v4 + (char)a4; // 0x15daf4
        *v3 = v5;
        return (v2 - (v5 < v4 ? 37 : 36)) % 256 | v2 & -256;
    }
    // 0x15db18
    int64_t v6; // 0x15daf0
    int64_t v7 = (int64_t)&v6; // 0x15db39
    v6 = v7;
    *(int64_t *)(v7 + 32) = v6;
    int64_t * v8 = (int64_t *)(v7 + 8); // 0x15db49
    int64_t v9 = *v8; // 0x15db49
    v6 = v9;
    *(int64_t *)(v7 - 8) = v9;
    int64_t v10 = *(int64_t *)(v7 + 16); // 0x15db62
    *v8 = v10;
    v6 = v10;
    return function_cdc60(a1, a2, a3, a4, v1, v1, v2);
}

// Address range: 0x15db83 - 0x15dcf4
int64_t function_15db83(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x15db83
    int64_t v1; // bp-32, 0x15db83
    int64_t v2 = (int64_t)&v1; // 0x15dbe0
    int64_t * v3 = (int64_t *)(v2 - 24); // 0x15dc15
    *v3 = 0x13665c;
    int64_t v4 = *(int64_t *)(v2 + 24); // 0x15dc1b
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x15dc1b
    *v5 = v4;
    int64_t v6 = v2 - 8; // 0x15dc2b
    *v3 = v6;
    *v3 = v1;
    int64_t * v7 = (int64_t *)(v2 - 32); // 0x15dc43
    int64_t * v8 = (int64_t *)(v2 - 40); // 0x15dc49
    *v7 = 0x5610d58d;
    *v8 = v4;
    *v5 = *v7;
    *v7 = v1;
    *(int64_t *)(v2 + 8) = *v3;
    *v3 = v4;
    *v7 = a6;
    *v8 = a2;
    *v3 = v6;
    int64_t v9 = *(int64_t *)v6; // 0x15dcd6
    *v5 = v9;
    *v3 = v9;
    return function_cdc60(a1, a2, a3, a4, a5, *v7, a4);
}

// Address range: 0x15dcf4 - 0x15de8c
int64_t function_15dcf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x3f770d1c; // bp-48, 0x15dd6d
    int64_t v2 = (int64_t)&v1; // 0x15dd9f
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x15dda7
    int64_t v4 = *v3; // 0x15dda7
    int64_t v5 = v2 - 8; // 0x15dda7
    int64_t * v6 = (int64_t *)v5; // 0x15dda7
    *v6 = v4;
    int64_t v7 = v2 - 16; // 0x15ddab
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x15ddd1
    *v8 = a4;
    *(int64_t *)v7 = a4;
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x15ddee
    *v9 = v7;
    *v6 = *v8;
    *v8 = a4;
    *v9 = v4 - 0x7ed1dbb7;
    *v3 = v4;
    *v8 = a6;
    *v9 = *v8;
    *v8 = v5;
    return function_cdc60(a1, a2, a3, *v8, a5, *v8, v1);
}

// Address range: 0x15de8c - 0x15e01b
int64_t function_15de8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a7; // bp-32, 0x15dfb3
    int64_t v2 = (int64_t)&v1; // bp-48, 0x15e00e
    return function_cdc60(a1, a2, a3, a4, a5, a6, (int64_t)&v2 + 16);
}

// Address range: 0x15e01b - 0x15e13e
int64_t function_15e01b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x15e01b
    int64_t v1; // bp-48, 0x15e01b
    v1 = (int64_t)&v1;
    return function_cdc60(a1, a2, a3, a4, a5, a6, 310);
}

// Address range: 0x15e13e - 0x15e287
int64_t function_15e13e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x15e13e
    bool v1; // 0x15e13e
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x15e13e
    int64_t v3 = v2; // bp-32, 0x15e22b
    int64_t v4 = (int64_t)&v3; // 0x15e261
    *(int64_t *)(v4 - 8) = v2;
    *(int64_t *)(v4 - 16) = v2;
    int64_t v5; // 0x15e13e
    return function_cdc60(a1, a2, v5, v5, v5, v5, 0x74ab5959);
}

// Address range: 0x15e287 - 0x15e427
int64_t function_15e287(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x15e287
    int64_t v1; // 0x15e287
    return function_cdc60(a1, a2, a3, a4, a5, v1, 0x7460ccd2);
}

// Address range: 0x15e427 - 0x15e576
int64_t function_15e427(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x15e427
    int64_t v1; // bp-56, 0x15e427
    v1 = (int64_t)&v1 + 16;
    return function_cdc60(a1, a2, a3, a4, a5, a6, 0x1373ce);
}

// Address range: 0x15e576 - 0x15e6ba
int64_t function_15e576(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x4e598b5e; // bp-40, 0x15e660
    *(int64_t *)((int64_t)&v1 - 8) = 0x4e598b5e;
    int64_t v2; // 0x15e576
    return function_cdc60(310, a2, a3, v2, v2, v2, v1);
}

// Address range: 0x15e6ba - 0x15e86f
int64_t function_15e6ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2; // bp-40, 0x15e739
    int64_t v2 = (int64_t)&v1; // 0x15e787
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x15e78f
    int64_t v4 = *v3; // 0x15e78f
    int64_t v5 = v2 - 8; // 0x15e78f
    *(int64_t *)v5 = v4;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x15e79b
    *v6 = a2;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x15e7a6
    *v7 = a3;
    bool v8; // 0x15e6ba
    *v6 = 0x4000 * (int64_t)v8 | 2048 * (int64_t)v8 | 1024 * (int64_t)v8 | 512 * (int64_t)v8 | 256 * (int64_t)v8 | 128 * (int64_t)v8 | 64 * (int64_t)v8 | 16 * (int64_t)v8 | (int64_t)v8 | 4 * (int64_t)v8 | 2;
    *v7 = a5;
    v1 = *v6;
    *v3 = v4;
    *v7 = v5;
    *v6 = v2;
    int64_t v9; // 0x15e6ba
    return function_cdc60(a1, *v6, a3, a4, a5, v9, v9);
}

// Address range: 0x15e86f - 0x15e9ca
int64_t function_15e86f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x15e86f
    int64_t v1; // bp-56, 0x15e86f
    v1 = (int64_t)&v1 + 16;
    return function_cdc60(a1, a2, a3, a4, a5, a6, 0x137c62);
}

// Address range: 0x15e9ff - 0x15ea02
int64_t function_15e9ff(void) {
    // 0x15e9ff
    int64_t result; // 0x15e9ff
    return result;
}

// Address range: 0x15ea1a - 0x15ea1d
int64_t function_15ea1a(void) {
    // 0x15ea1a
    int64_t result; // 0x15ea1a
    return result;
}

// Address range: 0x15ea39 - 0x15ea3c
int64_t function_15ea39(void) {
    // 0x15ea39
    int64_t result; // 0x15ea39
    return result;
}

// Address range: 0x15ea3f - 0x15ea4b
int64_t function_15ea3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x15ea3f
    int64_t v1; // 0x15ea3f
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t result; // 0x15ea3f
    int64_t v3 = result;
    *(char *)v3 = *(char *)&result + (char)v3;
    int64_t v4 = result;
    *(char *)v4 = *(char *)&result + (char)v4;
    char * v5 = (char *)(result + 41); // 0x15ea45
    *v5 = *v5 + (char)a4;
    return result;
}

// Address range: 0x15ea81 - 0x15ea82
int64_t function_15ea81(void) {
    // 0x15ea81
    int64_t result; // 0x15ea81
    return result;
}

// Address range: 0x15ea82 - 0x15ea86
int64_t function_15ea82(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x15ea82
    int64_t result; // 0x15ea82
    char * v1 = (char *)(result - 127); // 0x15ea82
    *v1 = *v1 | (char)a4;
    return result;
}

// Address range: 0x57094e - 0x570960
int64_t function_57094e(void) {
    // 0x57094e
    int64_t v1; // 0x57094e
    function_542470(v1, v1, v1, v1);
    __stack_chk_fail();
    return (int64_t)&g26;
}

// Address range: 0x570960 - 0x570b50
// From class:    *NSt13__facet_shims12_GLOBAL__N_114money_get_shimIcEE
// Type:          virtual member function
int64_t function_570960(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x570960
    __readfsqword(40);
    function_577f00();
    _Unwind_Resume((struct _Unwind_Exception *)function_542470((int64_t)"uninitialized __any_string", a2, 0, a4));
    return (int64_t)&g26;
}

// Address range: 0x570b50 - 0x570c50
// From class:    *NSt13__facet_shims12_GLOBAL__N_114money_put_shimIcEE
// Type:          virtual member function
int64_t function_570b50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = __readfsqword(40); // 0x570b75
    int64_t v2 = *(int64_t *)a7; // 0x570b93
    int64_t v3; // bp-88, 0x570b50
    int64_t v4 = (int64_t)&v3; // bp-104, 0x570ba1
    function_570890(&v4, v2, *(int64_t *)(a7 + 8) + v2);
    int64_t v5 = *(int64_t *)(a1 + 16); // 0x570bb8
    int64_t result = function_578220(v5, a2, a3, (int32_t)a4 % 256, a5, 0x100000000000000 * a6 >> 56, 0); // 0x570be0
    if (v1 == __readfsqword(40)) {
        // 0x570c16
        return result;
    }
    // 0x570c25
    __stack_chk_fail();
    _Unwind_Resume((struct _Unwind_Exception *)&g26);
    return (int64_t)&g26;
}

// Address range: 0x570c50 - 0x570d00
// From class:    *NSt13__facet_shims12_GLOBAL__N_112collate_shimIcEE
// Type:          virtual member function
int64_t function_570c50(int64_t a1, int64_t a2) {
    // 0x570c50
    __readfsqword(40);
    function_576860();
    int64_t v1; // bp-72, 0x570c50
    int64_t v2; // 0x570c50
    int64_t v3 = function_542470((int64_t)"uninitialized __any_string", (int64_t)&v1, v2, v2); // 0x570cdd
    _Unwind_Resume((struct _Unwind_Exception *)v3);
    __stack_chk_fail();
    return (int64_t)&g26;
}

// Address range: 0x570d00 - 0x570dc0
// From class:    *NSt13__facet_shims12_GLOBAL__N_113messages_shimIcEE
// Type:          virtual member function
int64_t function_570d00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = *(int64_t *)(a6 + 8); // 0x570d12
    __readfsqword(40);
    function_577a20();
    int64_t v2; // bp-72, 0x570d00
    int64_t v3 = function_542470((int64_t)"uninitialized __any_string", (int64_t)&v2, v1, a4); // 0x570d94
    _Unwind_Resume((struct _Unwind_Exception *)v3);
    __stack_chk_fail();
    return (int64_t)&g26;
}

// Address range: 0x570dc0 - 0x570ec0
// From class:    *NSt13__facet_shims12_GLOBAL__N_114money_put_shimIwEE
// Type:          virtual member function
int64_t function_570dc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = __readfsqword(40); // 0x570de5
    int64_t v2 = *(int64_t *)a7; // 0x570e03
    int64_t v3; // bp-88, 0x570dc0
    int64_t v4 = (int64_t)&v3; // bp-104, 0x570e13
    function_54c6d0(&v4, v2, 4 * *(int64_t *)(a7 + 8) + v2);
    int64_t v5 = *(int64_t *)(a1 + 16); // 0x570e36
    int64_t result = function_578380(v5, a2, a3, (int32_t)a4 % 256, a5, a6 & 0xffffffff, 0); // 0x570e4e
    if (v1 == __readfsqword(40)) {
        // 0x570e84
        return result;
    }
    // 0x570e93
    __stack_chk_fail();
    _Unwind_Resume((struct _Unwind_Exception *)&g26);
    return (int64_t)&g26;
}

// Address range: 0x570ec0 - 0x570f80
// From class:    *NSt13__facet_shims12_GLOBAL__N_112collate_shimIwEE
// Type:          virtual member function
int64_t function_570ec0(int64_t a1, int64_t a2) {
    // 0x570ec0
    __readfsqword(40);
    function_576940();
    int64_t v1; // 0x570ec0
    _Unwind_Resume((struct _Unwind_Exception *)function_542470((int64_t)"uninitialized __any_string", v1, v1, 0));
    __stack_chk_fail();
    return (int64_t)&g26;
}

// Address range: 0x570f80 - 0x571040
// From class:    *NSt13__facet_shims12_GLOBAL__N_113messages_shimIwEE
// Type:          virtual member function
int64_t function_570f80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = *(int64_t *)(a6 + 8); // 0x570f92
    __readfsqword(40);
    function_577bc0();
    _Unwind_Resume((struct _Unwind_Exception *)function_542470((int64_t)"uninitialized __any_string", v1, a3, 0));
    __stack_chk_fail();
    return (int64_t)&g26;
}

// Address range: 0x571040 - 0x571220
// From class:    *NSt13__facet_shims12_GLOBAL__N_114money_get_shimIwEE
// Type:          virtual member function
int64_t function_571040(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x571040
    __readfsqword(40);
    function_578090();
    _Unwind_Resume((struct _Unwind_Exception *)function_542470((int64_t)"uninitialized __any_string", a2, 0, a4));
    return (int64_t)&g26;
}

// Address range: 0x571220 - 0x5712a6
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIwLb1EEE
// Type:          constructor
int64_t function_571220(int64_t a1) {
    // 0x571220
    *(int64_t *)a1 = (int64_t)&g21;
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x571236
    *(int64_t *)(*v1 + 24) = 0;
    *(int64_t *)(*v1 + 56) = 0;
    *(int64_t *)(*v1 + 72) = 0;
    *(int64_t *)(*v1 + 88) = 0;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    uint32_t v3 = *v2 - 1;
    *v2 = v3;
    function_56adb0(a1);
    int64_t v4; // 0x571220
    return function_4eeb50(a1, v4, g25 == 0 ? (int64_t)v3 : v4);
}

// Address range: 0x5712b0 - 0x571336
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb0EEE
// Type:          constructor
int64_t function_5712b0(int64_t a1) {
    // 0x5712b0
    *(int64_t *)a1 = (int64_t)&g18;
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x5712c6
    *(int64_t *)(*v1 + 24) = 0;
    *(int64_t *)(*v1 + 48) = 0;
    *(int64_t *)(*v1 + 64) = 0;
    *(int64_t *)(*v1 + 80) = 0;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    uint32_t v3 = *v2 - 1;
    *v2 = v3;
    function_569fc0(a1);
    int64_t v4; // 0x5712b0
    return function_4eeb50(a1, v4, g25 == 0 ? (int64_t)v3 : v4);
}

// Address range: 0x571340 - 0x5713ae
// From class:    *NSt13__facet_shims12_GLOBAL__N_112collate_shimIcEE
// Type:          constructor
int64_t function_571340(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x571353
    *v1 = (int64_t)&g16;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    uint32_t v3 = *v2 - 1;
    *v2 = v3;
    *v1 = (int64_t)&g7;
    function_5679e0(a1 + 16);
    function_565970(a1);
    int64_t v4; // 0x571340
    return function_4eeb50(a1, v4, g25 == 0 ? (int64_t)v3 : v4);
}

// Address range: 0x5713b0 - 0x571436
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIwLb0EEE
// Type:          constructor
int64_t function_5713b0(int64_t a1) {
    // 0x5713b0
    *(int64_t *)a1 = (int64_t)&g22;
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x5713c6
    *(int64_t *)(*v1 + 24) = 0;
    *(int64_t *)(*v1 + 56) = 0;
    *(int64_t *)(*v1 + 72) = 0;
    *(int64_t *)(*v1 + 88) = 0;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    uint32_t v3 = *v2 - 1;
    *v2 = v3;
    function_56aeb0(a1);
    int64_t v4; // 0x5713b0
    return function_4eeb50(a1, v4, g25 == 0 ? (int64_t)v3 : v4);
}

// Address range: 0x571440 - 0x5714c6
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb1EEE
// Type:          constructor
int64_t function_571440(int64_t a1) {
    // 0x571440
    *(int64_t *)a1 = (int64_t)&g17;
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x571456
    *(int64_t *)(*v1 + 24) = 0;
    *(int64_t *)(*v1 + 48) = 0;
    *(int64_t *)(*v1 + 64) = 0;
    *(int64_t *)(*v1 + 80) = 0;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    uint32_t v3 = *v2 - 1;
    *v2 = v3;
    function_569eb0(a1);
    int64_t v4; // 0x571440
    return function_4eeb50(a1, v4, g25 == 0 ? (int64_t)v3 : v4);
}

// Address range: 0x5714d0 - 0x571536
// From class:    *NSt13__facet_shims12_GLOBAL__N_113numpunct_shimIwEE
// Type:          constructor
int64_t function_5714d0(int64_t a1) {
    // 0x5714d0
    *(int64_t *)a1 = (int64_t)&g19;
    *(int64_t *)(*(int64_t *)(a1 + 32) + 24) = 0;
    int32_t * v1 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    uint32_t v2 = *v1 - 1;
    *v1 = v2;
    function_568730(a1);
    int64_t v3; // 0x5714d0
    return function_4eeb50(a1, v3, g25 == 0 ? (int64_t)v2 : v3);
}

// Address range: 0x571540 - 0x5715ae
// From class:    *NSt13__facet_shims12_GLOBAL__N_112collate_shimIwEE
// Type:          constructor
int64_t function_571540(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x571553
    *v1 = (int64_t)&g20;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    uint32_t v3 = *v2 - 1;
    *v2 = v3;
    *v1 = (int64_t)&g11;
    function_5679e0(a1 + 16);
    function_565970(a1);
    int64_t v4; // 0x571540
    return function_4eeb50(a1, v4, g25 == 0 ? (int64_t)v3 : v4);
}

// Address range: 0x5715b0 - 0x571616
// From class:    *NSt13__facet_shims12_GLOBAL__N_113numpunct_shimIcEE
// Type:          constructor
int64_t function_5715b0(int64_t a1) {
    // 0x5715b0
    *(int64_t *)a1 = (int64_t)&g15;
    *(int64_t *)(*(int64_t *)(a1 + 32) + 24) = 0;
    int32_t * v1 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    uint32_t v2 = *v1 - 1;
    *v1 = v2;
    function_568460(a1);
    int64_t v3; // 0x5715b0
    return function_4eeb50(a1, v3, g25 == 0 ? (int64_t)v2 : v3);
}

// Address range: 0x571620 - 0x571675
// From class:    *NSt13__facet_shims12_GLOBAL__N_113messages_shimIcEE
// Type:          constructor
int64_t function_571620(int64_t a1) {
    // 0x571620
    *(int64_t *)a1 = (int64_t)&g3;
    int32_t * v1 = (int32_t *)(*(int64_t *)(a1 + 32) + 8);
    int32_t v2 = *v1;
    int32_t v3 = v2 - 1;
    if (g25 == 0) {
        // 0x571658
        *v1 = v3;
        if (v2 != 1) {
            // 0x57164b
            return function_518fa0(a1);
        }
    } else {
        // 0x57163c
        *v1 = v3;
        if (v2 != 1) {
            // 0x57164b
            return function_518fa0(a1);
        }
    }
    // 0x571666
    return function_518fa0(a1);
}

// Address range: 0x571680 - 0x5716d5
// From class:    *NSt13__facet_shims12_GLOBAL__N_113messages_shimIwEE
// Type:          constructor
int64_t function_571680(int64_t a1) {
    // 0x571680
    *(int64_t *)a1 = (int64_t)&g6;
    int32_t * v1 = (int32_t *)(*(int64_t *)(a1 + 32) + 8);
    int32_t v2 = *v1;
    int32_t v3 = v2 - 1;
    if (g25 == 0) {
        // 0x5716b8
        *v1 = v3;
        if (v2 != 1) {
            // 0x5716ab
            return function_52e330(a1);
        }
    } else {
        // 0x57169c
        *v1 = v3;
        if (v2 != 1) {
            // 0x5716ab
            return function_52e330(a1);
        }
    }
    // 0x5716c6
    return function_52e330(a1);
}

// Address range: 0x5716e0 - 0x57173e
// From class:    *NSt13__facet_shims12_GLOBAL__N_114money_put_shimIwEE
// Type:          constructor
int64_t function_5716e0(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x5716f3
    *v1 = (int64_t)&g5;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 16) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g13;
    return function_565970(a1);
}

// Address range: 0x571740 - 0x57179e
// From class:    *NSt13__facet_shims12_GLOBAL__N_113time_get_shimIwEE
// Type:          constructor
int64_t function_571740(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x571753
    *v1 = (int64_t)&g24;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 16) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g14;
    return function_565970(a1);
}

// Address range: 0x5717a0 - 0x5717fe
// From class:    *NSt13__facet_shims12_GLOBAL__N_113time_get_shimIcEE
// Type:          constructor
int64_t function_5717a0(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x5717b3
    *v1 = (int64_t)&g23;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 16) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g10;
    return function_565970(a1);
}

// Address range: 0x571800 - 0x57185e
// From class:    *NSt13__facet_shims12_GLOBAL__N_114money_put_shimIcEE
// Type:          constructor
int64_t function_571800(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x571813
    *v1 = (int64_t)&g2;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 16) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g9;
    return function_565970(a1);
}

// Address range: 0x571860 - 0x5718be
// From class:    *NSt13__facet_shims12_GLOBAL__N_114money_get_shimIwEE
// Type:          constructor
int64_t function_571860(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x571873
    *v1 = (int64_t)&g4;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 16) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g12;
    return function_565970(a1);
}

// Address range: 0x5718c0 - 0x57191e
// From class:    *NSt13__facet_shims12_GLOBAL__N_114money_get_shimIcEE
// Type:          constructor
int64_t function_5718c0(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x5718d3
    *v1 = (int64_t)&g1;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 16) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g8;
    return function_565970(a1);
}

// Address range: 0x571920 - 0x57194e
// From class:    *NSt13__facet_shims12_GLOBAL__N_113messages_shimIcEE
// Type:          constructor
int64_t function_571920(int64_t a1) {
    // 0x571920
    *(int64_t *)a1 = (int64_t)&g3;
    if (g25 == 0) {
        // 0x571960
        return (int64_t)&g3;
    }
    int32_t * v1 = (int32_t *)(*(int64_t *)(a1 + 32) + 8); // 0x571941
    uint32_t result = *v1; // 0x571941
    *v1 = result - 1;
    return result;
}
