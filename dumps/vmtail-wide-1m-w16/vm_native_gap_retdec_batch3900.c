/*
 * Targeted RetDec C for native executable gap queue batch 3900.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x21658-0x216c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25f90-0x25ff8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a05c-0x2a0c4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ca8f-0x2cafa rank=- name=- kind=- bytes=- uncovered=-
 *   0x44d0f-0x44d7b rank=- name=- kind=- bytes=- uncovered=-
 *   0x44dfb-0x44e68 rank=- name=- kind=- bytes=- uncovered=-
 *   0x464bc-0x46521 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5a984-0x5a9e4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x60f42-0x60fae rank=- name=- kind=- bytes=- uncovered=-
 *   0x622e7-0x62350 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6baf3-0x6bb54 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48c384-0x48c3e4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48c96a-0x48c9cc rank=- name=- kind=- bytes=- uncovered=-
 *   0x48d4a9-0x48d50f rank=- name=- kind=- bytes=- uncovered=-
 *   0x48d845-0x48d8a3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b500c-0x4b5070 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c3360-0x4c33c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c3430-0x4c3490 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c693e-0x4c69a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d2804-0x4d2860 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d2a8c-0x4d2af0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e17f9-0x4e1859 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f0e4f-0x4f0eb0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50d73e-0x50d7a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50de5e-0x50dec0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x536da1-0x536e00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53e7cc-0x53e820 rank=- name=- kind=- bytes=- uncovered=-
 *   0x541f88-0x541ff0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x542348-0x5423b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x576d03-0x576d70 rank=- name=- kind=- bytes=- uncovered=-
 *   0x577b5c-0x577bc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x577cfc-0x577d60 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_20d68();
int64_t function_20d90();
int64_t function_21658(int64_t a1);
int64_t function_21670(void);
int64_t function_2305cd();
int64_t function_25f90(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a05c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2b674();
int64_t function_2ca8f(int64_t result);
int64_t function_2cabb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_44d0f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44ddf();
int64_t function_44dfb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44e45(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_462e6();
int64_t function_4630a();
int64_t function_463a6();
int64_t function_464bc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_489be99a();
int64_t function_48c384(void);
int64_t function_48c386(void);
int64_t function_48c388(int64_t result);
int64_t function_48c38c(int64_t a1);
int64_t function_48c3bc(int64_t a1);
int64_t function_48c96a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48d4a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48d4d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48d845(int64_t a1, int64_t a2);
int64_t function_48d86b(int64_t result, uint64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4b500c(void);
int64_t function_4b5020(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4c3360(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4c3370(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4c3430(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4c3440(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4c693e(int64_t a1, int64_t a2);
int64_t function_4d2690();
int64_t function_4d2704();
int64_t function_4d2804(void);
int64_t function_4d2806(void);
int64_t function_4d280a(void);
int64_t function_4d2820(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4d2a8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4e17d6();
int64_t function_4e17f9(void);
int64_t function_4e180c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4eeb50();
int64_t function_4eec00();
int64_t function_4f0ae0();
int64_t function_4f0c00();
int64_t function_4f0d98();
int64_t function_4f0e21();
int64_t function_4f0e4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4f0e60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4f0e70(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4f0e80(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4f0e90(int64_t a1, int64_t a2);
int64_t function_4f0ea0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_508450();
int64_t function_50d73e(int64_t a1, int64_t a2);
int64_t function_50de5e(int64_t a1, int64_t a2);
int64_t function_536d5f();
int64_t function_536da1(void);
int64_t function_536dac(int64_t a1, int64_t a2, int64_t a3);
int64_t function_536de0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_53e7cc(void);
int64_t function_53e7d0(int64_t a1);
int64_t function_541f88(void);
int64_t function_541f90(void);
int64_t function_541fa0(int64_t a1, int64_t a2);
int64_t function_541fb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_541fd0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_542348(int64_t a1);
int64_t function_542391(void);
int64_t function_542399(void);
int64_t function_54239f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_542650();
int64_t function_54cf10();
int64_t function_576c38();
int64_t function_576c94();
int64_t function_576d03(int64_t a1, int64_t a2, int64_t a3);
int64_t function_576d10(void);
int64_t function_576d1e(int64_t a1);
int64_t function_576d5f(void);
int64_t function_577b14();
int64_t function_577b5c(void);
int64_t function_577b5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_577b6b(int64_t a1, int64_t a2);
int64_t function_577cb4();
int64_t function_577cfc(void);
int64_t function_577cfd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_577d0b(int64_t a1, int64_t a2);
int64_t function_5a984(int64_t a1, int64_t a2);
int64_t function_5a9b4(int64_t a1, int64_t a2);
int64_t function_5b058();
int64_t function_5b092();
int64_t function_60f42(int64_t a1, int64_t a2, int64_t a3);
int64_t function_622e7(int64_t a1, uint64_t a2);
int64_t function_68aa0();
int64_t function_6baf3(int64_t a1, int64_t a2);
int64_t function_6bf2a();
int64_t function_729b6();
int64_t function_729ce();

// Address range: 0x21658 - 0x21662
int64_t function_21658(int64_t a1) {
    // 0x21658
    int64_t result; // 0x21658
    return result;
}

// Address range: 0x21670 - 0x216b2
int64_t function_21670(void) {
    // 0x21670
    return 0;
}

// Address range: 0x25f90 - 0x25ff8
int64_t function_25f90(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 16);
    int64_t v2 = a1 + 8; // 0x25fa6
    int32_t * v3; // 0x25f90
    int64_t v4; // 0x25f90
    int64_t v5; // 0x25f90
    if (v1 == 0) {
        goto lab_0x25fca;
    } else {
        int64_t v6 = 0x100000000 * v5 >> 32; // 0x25fae
        v2 = v1;
        int32_t * v7 = (int32_t *)(v2 + 32);
        uint32_t v8 = *v7; // 0x25fa8
        int64_t v9 = *(int64_t *)((v6 < (int64_t)v8 ? 16 : 24) + v2);
        while (v9 != 0) {
            // 0x25fa8
            v2 = v9;
            v7 = (int32_t *)(v2 + 32);
            v8 = *v7;
            v9 = *(int64_t *)((v6 < (int64_t)v8 ? 16 : 24) + v2);
        }
        // 0x25fc6
        v3 = v7;
        v4 = v2;
        if (v6 >= (int64_t)v8) {
            goto lab_0x25fe4;
        } else {
            goto lab_0x25fca;
        }
    }
  lab_0x25fca:
    // 0x25fca
    if (*(int64_t *)(a1 + 24) == v2) {
        // 0x25ff4
        return 0;
    }
    int64_t v10 = function_4f0ae0(v2); // 0x25fda
    v3 = (int32_t *)(v10 + 32);
    v4 = v10;
    goto lab_0x25fe4;
  lab_0x25fe4:;
    int32_t v11 = v5;
    int32_t v12 = *v3; // 0x25fe6
    int32_t v13 = v12 - v11; // 0x25fe9
    // 0x25ff4
    return v13 < 0 == ((v13 ^ v12) & (v12 ^ v11)) < 0 ? v4 : 0;
}

// Address range: 0x2a05c - 0x2a0c4
int64_t function_2a05c(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 16);
    int64_t v2; // 0x2a05c
    uint32_t v3 = (int32_t)v2;
    int64_t v4 = a1 + 8; // 0x2a072
    int32_t * v5; // 0x2a05c
    int64_t v6; // 0x2a05c
    if (v1 == 0) {
        goto lab_0x2a096;
    } else {
        v4 = v1;
        int32_t * v7 = (int32_t *)(v4 + 32);
        uint32_t v8 = *v7; // 0x2a074
        int64_t v9 = *(int64_t *)((v8 <= v3 ? 24 : 16) + v4);
        while (v9 != 0) {
            // 0x2a074
            v4 = v9;
            v7 = (int32_t *)(v4 + 32);
            v8 = *v7;
            v9 = *(int64_t *)((v8 <= v3 ? 24 : 16) + v4);
        }
        // 0x2a092
        v5 = v7;
        v6 = v4;
        if (v8 <= v3) {
            return *v5 < v3 ? 0 : v6;
        } else {
            goto lab_0x2a096;
        }
    }
  lab_0x2a096:
    // 0x2a096
    if (*(int64_t *)(a1 + 24) == v4) {
        // 0x2a0c0
        return 0;
    }
    int64_t v10 = function_4f0ae0(v4); // 0x2a0a6
    v5 = (int32_t *)(v10 + 32);
    v6 = v10;
    return *v5 < v3 ? 0 : v6;
    // 0x2a0c0
    return *v5 < v3 ? 0 : v6;
}

// Address range: 0x2ca8f - 0x2caa2
int64_t function_2ca8f(int64_t result) {
    // 0x2ca8f
    __asm_in(-87);
    return result;
}

// Address range: 0x2cabb - 0x2cafa
int64_t function_2cabb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x2cabb
    int64_t v1; // 0x2cabb
    *(char *)a1 = (char)v1;
    int64_t result = 0; // 0x2caed
    if (v1 != __readfsqword(40)) {
        // 0x2caef
        __stack_chk_fail();
        result = (int64_t)&g15;
    }
    // 0x2caf4
    return result;
}

// Address range: 0x44d0f - 0x44d20
int64_t function_44d0f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44d0f
    return function_2305cd();
}

// Address range: 0x44dfb - 0x44e42
int64_t function_44dfb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44dfb
    int64_t v1; // 0x44dfb
    uint64_t v2 = v1;
    bool v3; // 0x44dfb
    if (!v3 && !v3) {
        function_44ddf();
    }
    uint32_t v4 = *(int32_t *)(v2 + 0xbff91b); // 0x44dfe
    uint32_t v5 = __readgsdword(2 * (int64_t)v4 + a1) | v4; // 0x44e05
    uint32_t result = v5 - 0x63126e36; // 0x44e09
    if (v5 <= 0x63126e35 && result != 0) {
        // 0x44e10
        return a4 & 0xffffffff;
    }
    // 0x44e33
    float80_t v6; // 0x44dfb
    *(float80_t *)(v2 + 56) = __asm_fbstp(v6);
    uint32_t v7 = (int32_t)a4 % 32; // 0x44e38
    if (v7 != 0) {
        int32_t * v8 = (int32_t *)(a1 + 19); // 0x44e38
        uint32_t v9 = *v8; // 0x44e38
        *v8 = v9 >> 32 - v7 | v9 << v7;
    }
    char * v10 = (char *)(a3 - 0x4ccc3360); // 0x44e3b
    *v10 = *v10 + (char)(v2 / 256);
    __asm_out((int16_t)a3, result);
    return result;
}

// Address range: 0x44e45 - 0x44e68
int64_t function_44e45(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x44e45
    int32_t v1; // 0x44e45
    return (uint32_t)v1;
}

// Address range: 0x464bc - 0x46521
int64_t function_464bc(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x464d1
    function_462e6();
    function_4630a();
    int64_t v2; // bp-184, 0x464bc
    function_463a6(&v2, a3);
    int64_t result = 0; // 0x46510
    if (v1 != __readfsqword(40)) {
        // 0x46512
        __stack_chk_fail();
        result = (int64_t)&g15;
    }
    // 0x46517
    return result;
}

// Address range: 0x5a984 - 0x5a9b4
int64_t function_5a984(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 16); // 0x5a988
    function_5b058(a2, *v1);
    int64_t v2 = a2 + 8; // 0x5a994
    *v1 = 0;
    *(int64_t *)(a2 + 40) = 0;
    *(int64_t *)(a2 + 24) = v2;
    *(int64_t *)(a2 + 32) = v2;
    return 0;
}

// Address range: 0x5a9b4 - 0x5a9e4
int64_t function_5a9b4(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 16); // 0x5a9b8
    function_5b092(a2, *v1);
    int64_t v2 = a2 + 8; // 0x5a9c4
    *v1 = 0;
    *(int64_t *)(a2 + 40) = 0;
    *(int64_t *)(a2 + 24) = v2;
    *(int64_t *)(a2 + 32) = v2;
    return 0;
}

// Address range: 0x60f42 - 0x60fae
int64_t function_60f42(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 16);
    int64_t * v2; // 0x60f42
    int64_t v3; // 0x60f42
    int64_t v4; // 0x60f42
    if (v1 == 0) {
        int64_t v5 = a1 + 8; // 0x60f44
        if (*(int64_t *)(a1 + 24) == v5) {
            // 0x60faa
            return 0;
        }
        int64_t v6 = function_4f0ae0(v5); // 0x60f8e
        v2 = (int64_t *)(v6 + 32);
        v3 = a2;
        v4 = v6;
    } else {
        int64_t v7 = v1;
        int64_t v8 = *(int64_t *)(v7 + 24);
        while (v8 != 0) {
            // 0x60f5a
            v7 = v8;
            v8 = *(int64_t *)(v7 + 24);
        }
        int64_t * v9 = (int64_t *)(v7 + 32);
        v2 = v9;
        v3 = *v9;
        v4 = v7;
    }
    // 0x60faa
    return *v2 < v3 ? 0 : v4;
}

// Address range: 0x622e7 - 0x62350
int64_t function_622e7(int64_t a1, uint64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x62303
    function_729b6();
    if (a2 >= 25) {
        // 0x6231e
        function_2b674(a1 + 56, a2);
    }
    // 0x6232a
    int64_t v2; // bp-40, 0x622e7
    function_729ce(&v2);
    int64_t result = 0; // 0x62340
    if (v1 != __readfsqword(40)) {
        // 0x62342
        __stack_chk_fail();
        result = (int64_t)&g15;
    }
    // 0x62347
    return result;
}

// Address range: 0x6baf3 - 0x6bb53
int64_t function_6baf3(int64_t a1, int64_t a2) {
    // 0x6baf3
    function_68aa0();
    *(int64_t *)a1 = (int64_t)&g5;
    function_6bf2a(a1 + 168);
    *(int32_t *)(a1 + 160) = *(int32_t *)(a2 + 160);
    *(int16_t *)(a1 + 248) = (int16_t)*(int32_t *)(a2 + 248);
    *(int16_t *)(a1 + 250) = *(int16_t *)(a2 + 250);
    *(int16_t *)(a1 + 252) = (int16_t)*(int32_t *)(a2 + 252);
    int64_t result; // 0x6baf3
    return result;
}

// Address range: 0x48c384 - 0x48c385
int64_t function_48c384(void) {
    // 0x48c384
    int64_t result; // 0x48c384
    return result;
}

// Address range: 0x48c386 - 0x48c387
int64_t function_48c386(void) {
    // 0x48c386
    int64_t result; // 0x48c386
    return result;
}

// Address range: 0x48c388 - 0x48c38c
int64_t function_48c388(int64_t result) {
    // 0x48c388
    return result;
}

// Address range: 0x48c38c - 0x48c3bc
int64_t function_48c38c(int64_t a1) {
    // 0x48c38c
    if ((int64_t)g10 == a1) {
        // 0x48c3bb
        int64_t result; // 0x48c38c
        return result;
    }
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result2 = *v1;
    *v1 = result2 - 1;
    if (result2 >= 0 == (result2 != 0)) {
        // 0x48c3bb
        return result2;
    }
    // 0x48c3b6
    return function_4eeb50(a1);
}

// Address range: 0x48c3bc - 0x48c3e3
int64_t function_48c3bc(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result = *v1;
    *v1 = result - 1;
    if (result >= 0 == (result != 0)) {
        // 0x48c3e2
        return result;
    }
    // 0x48c3dd
    return function_4eeb50(a1);
}

// Address range: 0x48c96a - 0x48c9cb
int64_t function_48c96a(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x48c987
    function_729b6();
    *(int64_t *)a1 = a2;
    *(int32_t *)(a1 + 8) = (int32_t)a3;
    int64_t v2; // bp-56, 0x48c96a
    function_729ce(&v2);
    int64_t result = 0; // 0x48c9b9
    if (v1 != __readfsqword(40)) {
        // 0x48c9bb
        __stack_chk_fail();
        result = (int64_t)&g15;
    }
    // 0x48c9c0
    return result;
}

// Address range: 0x48d4a9 - 0x48d4d9
int64_t function_48d4a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = a2; // 0x48d4a9
    if (v1 == 0) {
        int64_t v2 = -1; // 0x48d4b6
        int64_t v3 = a1; // 0x48d4a9
        int64_t v4 = 0; // 0x48d4b6
        while (v2 != 0) {
            int64_t v5 = v3;
            v2--;
            bool v6; // 0x48d4a9
            v3 = v5 + (v6 ? -1 : 1);
            v4 = v2;
            if (*(char *)v5 == 0) {
                // break -> 
                break;
            }
            v4 = 0;
        }
        // 0x48d4d5
        return a1 - 1 + -1 - v4;
    }
    char v7 = *(char *)a1; // 0x48d4cc
    char v8 = v7; // 0x48d4d1
    if (v7 == 0) {
        // 0x48d4d5
        return 0;
    }
    int64_t v9 = a1; // 0x48d4d1
    int64_t result = v9; // 0x48d4c7
    while ((int32_t)v8 != v1) {
        // 0x48d4c9
        v9++;
        v8 = *(char *)v9;
        result = 0;
        if (v8 == 0) {
            // break -> 0x48d4d5
            break;
        }
        result = v9;
    }
    // 0x48d4d5
    return result;
}

// Address range: 0x48d4d9 - 0x48d50f
int64_t function_48d4d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = -1; // 0x48d4e7
    int64_t v2 = a1; // 0x48d4e7
    int64_t v3 = 0; // 0x48d4e7
    while (v1 != 0) {
        int64_t v4 = v2;
        v1--;
        bool v5; // 0x48d4d9
        v2 = v4 + (v5 ? -1 : 1);
        v3 = v1;
        if (*(char *)v4 == 0) {
            // break -> 
            break;
        }
        v3 = 0;
    }
    int64_t v6 = -1 - v3;
    int64_t result = function_4eec00(v6); // 0x48d4f7
    __asm_rep_movsb_memcpy((char *)result, (char *)a1, v6);
    return result;
}

// Address range: 0x48d845 - 0x48d86b
int64_t function_48d845(int64_t a1, int64_t a2) {
    int64_t result = 0; // 0x48d84b
    if (*(int32_t *)a1 == 0) {
      lab_0x48d861:
        // 0x48d861
        return result;
    }
    int64_t v1 = 0;
    int64_t v2; // 0x48d857
    while (*(int32_t *)(v1 + a1) == *(int32_t *)(v1 + a2)) {
        // 0x48d857
        v2 = v1 + 4;
        result = a1;
        if (*(int32_t *)(v2 + a2) == 0) {
            return result;
        }
        v1 = v2;
    }
    int64_t v3 = a1 + 4; // 0x48d862
    while (*(int32_t *)v3 != 0) {
        int64_t v4 = v3;
        v1 = 0;
        int32_t v5 = *(int32_t *)(v1 + v4); // 0x48d852
        while (v5 == *(int32_t *)(v1 + a2)) {
            // 0x48d857
            v2 = v1 + 4;
            result = v4;
            if (*(int32_t *)(v2 + a2) == 0) {
                return result;
            }
            v1 = v2;
            v5 = *(int32_t *)(v1 + v4);
        }
        // 0x48d862
        v3 = v4 + 4;
    }
    // 0x48d861
    return 0;
}

// Address range: 0x48d86b - 0x48d8a3
int64_t function_48d86b(int64_t result, uint64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    if (a2 < 2) {
        // 0x48d87f
        *(int32_t *)result = 0;
        return result;
    }
    int64_t v1 = 0; // 0x48d890
    int64_t v2 = result; // 0x48d893
    int32_t v3 = *(int32_t *)(4 * v1 + a3); // 0x48d886
    while (v3 != 0) {
        // 0x48d88e
        *(int32_t *)v2 = v3;
        v1++;
        v2 += 4;
        if (a2 - 1 <= v1) {
            // break -> 0x48d89c
            break;
        }
        v3 = *(int32_t *)(4 * v1 + a3);
    }
    // 0x48d89c
    *(int32_t *)v2 = 0;
    return result;
}

// Address range: 0x4b500c - 0x4b5016
int64_t function_4b500c(void) {
    // 0x4b500c
    int64_t v1; // 0x4b500c
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x4b500c
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return 0xffff9f00;
}

// Address range: 0x4b5020 - 0x4b5066
int64_t function_4b5020(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b5020
    if (a1 == 0) {
        // 0x4b5035
        return 0xffff9f00;
    }
    // 0x4b502d
    if (*(int32_t *)(a1 + 4) == 6) {
        // 0x4b5040
        return (int64_t)*(int32_t *)(a1 + 12);
    }
    // 0x4b5035
    return 0;
}

// Address range: 0x4c3360 - 0x4c3370
int64_t function_4c3360(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4c3360
    return 0xffffffd2;
}

// Address range: 0x4c3370 - 0x4c33b5
int64_t function_4c3370(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a1; // 0x4c3370
    int64_t v2 = (int64_t)&g3; // 0x4c3373
    int64_t v3 = (int64_t)&g1; // 0x4c3373
    if (v1 == 1) {
      lab_0x4c33a8:
        // 0x4c33a8
        *(int64_t *)a2 = v3;
        *(int64_t *)a3 = *(int64_t *)(v2 + 8);
        return 0;
    }
    int64_t v4 = (int64_t)&g3;
    int64_t v5 = v4 + 40; // 0x4c3385
    int64_t v6 = *(int64_t *)v5; // 0x4c3389
    while (v6 != 0) {
        // 0x4c3380
        v2 = v5;
        v3 = v6;
        if (*(int32_t *)(v4 + 72) == v1) {
            goto lab_0x4c33a8;
        }
        v4 = v5;
        v5 = v4 + 40;
        v6 = *(int64_t *)v5;
    }
    // 0x4c3391
    return 0xffffffd2;
}

// Address range: 0x4c3430 - 0x4c3440
int64_t function_4c3430(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4c3430
    return 0xffffffd2;
}

// Address range: 0x4c3440 - 0x4c3485
int64_t function_4c3440(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a1; // 0x4c3440
    int64_t v2 = (int64_t)&g4; // 0x4c3443
    int64_t v3 = (int64_t)&g2; // 0x4c3443
    if (v1 == 1) {
      lab_0x4c3478:
        // 0x4c3478
        *(int64_t *)a2 = v3;
        *(int64_t *)a3 = *(int64_t *)(v2 + 8);
        return 0;
    }
    int64_t v4 = (int64_t)&g4;
    int64_t v5 = v4 + 40; // 0x4c3455
    int64_t v6 = *(int64_t *)v5; // 0x4c3459
    while (v6 != 0) {
        // 0x4c3450
        v2 = v5;
        v3 = v6;
        if (*(int32_t *)(v4 + 72) == v1) {
            goto lab_0x4c3478;
        }
        v4 = v5;
        v5 = v4 + 40;
        v6 = *(int64_t *)v5;
    }
    // 0x4c3461
    return 0xffffffd2;
}

// Address range: 0x4c693e - 0x4c699d
int64_t function_4c693e(int64_t a1, int64_t a2) {
    // 0x4c693e
    *(int64_t *)a1 = a2;
    *(int64_t *)(a1 + 8) = *(int64_t *)(a2 + 8);
    *(int64_t *)(a1 + 16) = *(int64_t *)(a2 + 16);
    *(int64_t *)(a1 + 24) = *(int64_t *)(a2 + 24);
    *(int64_t *)(a1 + 32) = *(int64_t *)(a2 + 32);
    *(int64_t *)(a1 + 40) = *(int64_t *)(a2 + 40);
    *(int64_t *)(a1 + 48) = *(int64_t *)(a2 + 48);
    *(int64_t *)(a1 + 56) = *(int64_t *)(a2 + 56);
    *(int64_t *)(a1 + 64) = *(int64_t *)(a2 + 64);
    *(int64_t *)(a1 + 72) = *(int64_t *)(a2 + 72);
    *(int64_t *)(a1 + 80) = *(int64_t *)(a2 + 80);
    uint32_t result = *(int32_t *)(a2 + 88); // 0x4c6996
    *(int32_t *)(a1 + 88) = result;
    return result;
}

// Address range: 0x4d2804 - 0x4d2805
int64_t function_4d2804(void) {
    // 0x4d2804
    int64_t result; // 0x4d2804
    return result;
}

// Address range: 0x4d2806 - 0x4d2809
int64_t function_4d2806(void) {
    // 0x4d2806
    int64_t result; // 0x4d2806
    return result;
}

// Address range: 0x4d280a - 0x4d2818
int64_t function_4d280a(void) {
    // 0x4d280a
    int64_t v1; // 0x4d280a
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x4d280a
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return function_4d2704();
}

// Address range: 0x4d2820 - 0x4d2851
int64_t function_4d2820(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4d2820
    return function_4d2690();
}

// Address range: 0x4d2a8c - 0x4d2ae2
int64_t function_4d2a8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (uint32_t)(int32_t)a4 % 32; // 0x4d2a90
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(a2 + 46); // 0x4d2a90
        *v2 = *v2 << v1;
    }
    memcpy((int64_t *)a2, (int64_t *)(g12 + a1), (int32_t)a3);
    g12 += a3;
    return 0;
}

// Address range: 0x4e17f9 - 0x4e17fa
int64_t function_4e17f9(void) {
    // 0x4e17f9
    int64_t result; // 0x4e17f9
    return result;
}

// Address range: 0x4e180c - 0x4e1838
int64_t function_4e180c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4e180c
    int64_t v1; // 0x4e180c
    bool v2; // 0x4e180c
    if (v2) {
        v1 = function_4e17d6();
    }
    char * v3 = (char *)(a3 + 81); // 0x4e180f
    *v3 = *v3 | (char)(v1 / 256);
    uint32_t result = ((int32_t)v1 ^ 0x62cdfe48) + 0x1d2901b8 & 0x62dffe48; // 0x4e1824
    int64_t v4; // 0x4e180c
    int32_t * v5 = (int32_t *)(v4 + 72); // 0x4e1829
    *v5 = *v5 / 2;
    int16_t v6 = a3; // 0x4e182c
    __asm_out(v6, result);
    if (a4 == 1 || result == 0) {
        // 0x4e182f
        __asm_rcl(*v5);
        __asm_out(v6, result);
        return function_489be99a();
    }
    // 0x4e1891
    return result;
}

// Address range: 0x4f0e4f - 0x4f0e56
int64_t function_4f0e4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4f0e4f
    int64_t result; // 0x4f0e4f
    char * v1 = (char *)(result - 119); // 0x4f0e4f
    *v1 = *v1 + (char)a4;
    return result;
}

// Address range: 0x4f0e60 - 0x4f0e69
int64_t function_4f0e60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4f0e60
    *(int64_t *)(a5 + 24) = a2;
    return function_4f0d98();
}

// Address range: 0x4f0e70 - 0x4f0e7d
int64_t function_4f0e70(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4f0e70
    *(int64_t *)(a4 + 8) = a2;
    *(int64_t *)(a4 + 24) = a2;
    return function_4f0c00();
}

// Address range: 0x4f0e80 - 0x4f0e89
int64_t function_4f0e80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4f0e80
    *(int64_t *)(a4 + 16) = a2;
    return function_4f0c00();
}

// Address range: 0x4f0e90 - 0x4f0e96
int64_t function_4f0e90(int64_t a1, int64_t a2) {
    // 0x4f0e90
    int64_t v1; // 0x4f0e90
    *(int64_t *)(v1 + 16) = a2;
    return function_4f0e21();
}

// Address range: 0x4f0ea0 - 0x4f0ea9
int64_t function_4f0ea0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4f0ea0
    *(int64_t *)(a4 + 8) = a2;
    return function_4f0e21();
}

// Address range: 0x50d73e - 0x50d794
int64_t function_50d73e(int64_t a1, int64_t a2) {
    int64_t v1 = a1 - 24; // 0x50d754
    int64_t v2 = a2 - 24;
    int64_t v3 = function_542650(); // 0x50d74c
    while (true) {
        // 0x50d74f
        int64_t v4; // bp+95, 0x50d73e
        if (v1 != *(int64_t *)0x848c20) {
            // 0x50d761
            function_508450(v1, &v4);
        }
        // 0x50d76b
        _Unwind_Resume((struct _Unwind_Exception *)v3);
        if (v2 != g11) {
            // 0x50d788
            function_508450(v2, &v4);
        }
        // 0x50d74f
        v3 = (int64_t)&g15;
    }
}

// Address range: 0x50de5e - 0x50deb4
int64_t function_50de5e(int64_t a1, int64_t a2) {
    int64_t v1 = a1 - 24; // 0x50de74
    int64_t v2 = a2 - 24;
    int64_t v3 = function_542650(); // 0x50de6c
    while (true) {
        // 0x50de6f
        int64_t v4; // bp+95, 0x50de5e
        if (v1 != g11) {
            // 0x50de81
            function_508450(v1, &v4);
        }
        // 0x50de8b
        _Unwind_Resume((struct _Unwind_Exception *)v3);
        if (v2 != g11) {
            // 0x50dea8
            function_508450(v2, &v4);
        }
        // 0x50de6f
        v3 = (int64_t)&g15;
    }
}

// Address range: 0x536da1 - 0x536dac
int64_t function_536da1(void) {
    // 0x536da1
    int64_t v1; // 0x536da1
    return function_536d5f(v1);
}

// Address range: 0x536dac - 0x536dda
// From class:    std::__cxx11::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          constructor
int64_t function_536dac(int64_t a1, int64_t a2, int64_t a3) {
    // 0x536dac
    __stack_chk_fail();
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a3 != 0) | ((int32_t)&g15 ^ (int32_t)&g15) & -256;
    *(int64_t *)a1 = (int64_t)&g7;
    return (int64_t)&g7;
}

// Address range: 0x536de0 - 0x536dfa
// From class:    std::__cxx11::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          constructor
int64_t function_536de0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x536de0
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a3 != 0);
    *(int64_t *)a1 = (int64_t)&g7;
    return (int64_t)&g7;
}

// Address range: 0x53e7cc - 0x53e7d0
int64_t function_53e7cc(void) {
    // 0x53e7cc
    int64_t result; // 0x53e7cc
    return result;
}

// Address range: 0x53e7d0 - 0x53e812
// From class:    std::basic_iostream<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_53e7d0(int64_t a1) {
    // 0x53e7d0
    *(int64_t *)(a1 + 8) = 0;
    int64_t v1 = a1 + 24; // 0x53e7e3
    *(int64_t *)(a1 + 16) = (int64_t)&g8;
    *(int64_t *)a1 = (int64_t)&g9;
    *(int64_t *)v1 = (int64_t)&g6;
    function_54cf10(v1);
    return function_4eeb50(a1);
}

// Address range: 0x541f88 - 0x541f90
int64_t function_541f88(void) {
    // 0x541f88
    int64_t result; // 0x541f88
    return result;
}

// Address range: 0x541f90 - 0x541f98
// From class:    *N12_GLOBAL__N_121system_error_categoryE
// Type:          virtual member function
int64_t function_541f90(void) {
    // 0x541f90
    return (int64_t)"system";
}

// Address range: 0x541fa0 - 0x541fa6
// From class:    *N12_GLOBAL__N_117io_error_categoryE
// Type:          virtual member function
int64_t function_541fa0(int64_t a1, int64_t a2) {
    // 0x541fa0
    return a2 & 0xffffffff;
}

// Address range: 0x541fb0 - 0x541fcb
// From class:    *N12_GLOBAL__N_117io_error_categoryE
// Type:          virtual member function
int64_t function_541fb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a3 + 8); // 0x541fbc
    int64_t v2; // 0x541fb0
    return (int32_t)v2 == (int32_t)a1 == v1 == a3;
}

// Address range: 0x541fd0 - 0x541fe6
// From class:    *N12_GLOBAL__N_117io_error_categoryE
// Type:          virtual member function
int64_t function_541fd0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x541fd0
    if (*(int64_t *)(a2 + 8) == a1) {
        // 0x541fe0
        int64_t v1; // 0x541fd0
        return (int32_t)v1 == (int32_t)a3;
    }
    // 0x541fd8
    return 0;
}

// Address range: 0x542348 - 0x542362
int64_t function_542348(int64_t a1) {
    // 0x542348
    return *(int64_t *)(a1 + 8);
}

// Address range: 0x542391 - 0x542394
int64_t function_542391(void) {
    // 0x542391
    int64_t result; // 0x542391
    return result;
}

// Address range: 0x542399 - 0x54239a
int64_t function_542399(void) {
    // 0x542399
    int64_t result; // 0x542399
    return result;
}

// Address range: 0x54239f - 0x5423a4
int64_t function_54239f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x54239f
    int64_t result; // 0x54239f
    return result;
}

// Address range: 0x576d03 - 0x576d0b
int64_t function_576d03(int64_t a1, int64_t a2, int64_t a3) {
    // 0x576d03
    int64_t v1; // 0x576d03
    *(int32_t *)(v1 - 8) = (int32_t)a3 - 1;
    return function_576c94();
}

// Address range: 0x576d10 - 0x576d1e
int64_t function_576d10(void) {
    // 0x576d10
    int64_t v1; // 0x576d10
    int32_t * v2 = (int32_t *)(v1 - 8); // 0x576d10
    *v2 = *v2 - 1;
    return function_576c38();
}

// Address range: 0x576d1e - 0x576d5f
int64_t function_576d1e(int64_t a1) {
    // 0x576d1e
    __stack_chk_fail();
    int64_t v1 = a1 - 24; // 0x576d2b
    while (true) {
        int64_t v2; // 0x576d1e
        if (v1 != v2) {
            // 0x576d53
            int64_t v3; // bp+15, 0x576d1e
            function_20d90(v1, &v3);
        }
        // 0x576d34
        _Unwind_Resume((struct _Unwind_Exception *)&g15);
    }
}

// Address range: 0x576d5f - 0x576d61
int64_t function_576d5f(void) {
    // 0x576d5f
    int64_t result; // 0x576d5f
    return result;
}

// Address range: 0x577b5c - 0x577b5d
int64_t function_577b5c(void) {
    // 0x577b5c
    int64_t result; // 0x577b5c
    return result;
}

// Address range: 0x577b5d - 0x577b6b
int64_t function_577b5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x577b5d
    int64_t v1; // 0x577b5d
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + (char)a5;
    int32_t * v3 = (int32_t *)(v2 - 8); // 0x577b60
    *v3 = *v3 - 1;
    return function_577b14();
}

// Address range: 0x577b6b - 0x577bbc
int64_t function_577b6b(int64_t a1, int64_t a2) {
    // 0x577b6b
    __stack_chk_fail();
    int64_t v1 = a2 - 24; // 0x577b7f
    if (v1 != (int64_t)&g13) {
        // 0x577b88
        int64_t v2; // bp+23, 0x577b6b
        function_20d90(v1, &v2);
    }
    int64_t v3 = a1 - 24; // 0x577b97
    while (true) {
        if (v3 != (int64_t)&g13) {
            // 0x577ba0
            int64_t v4; // 0x577b6b
            function_20d90(v3, (int64_t *)v4);
        }
        // 0x577ba8
        _Unwind_Resume((struct _Unwind_Exception *)&g15);
    }
}

// Address range: 0x577cfc - 0x577cfd
int64_t function_577cfc(void) {
    // 0x577cfc
    int64_t result; // 0x577cfc
    return result;
}

// Address range: 0x577cfd - 0x577d0b
int64_t function_577cfd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x577cfd
    int64_t v1; // 0x577cfd
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + (char)a5;
    int32_t * v3 = (int32_t *)(v2 - 8); // 0x577d00
    *v3 = *v3 - 1;
    return function_577cb4();
}

// Address range: 0x577d0b - 0x577d5c
int64_t function_577d0b(int64_t a1, int64_t a2) {
    // 0x577d0b
    __stack_chk_fail();
    int64_t v1 = a2 - 24; // 0x577d1f
    if (v1 != (int64_t)&g14) {
        // 0x577d28
        int64_t v2; // bp+23, 0x577d0b
        function_20d68(v1, &v2);
    }
    int64_t v3 = a1 - 24; // 0x577d37
    while (true) {
        if (v3 != (int64_t)&g14) {
            // 0x577d40
            int64_t v4; // 0x577d0b
            function_20d68(v3, (int64_t *)v4);
        }
        // 0x577d48
        _Unwind_Resume((struct _Unwind_Exception *)&g15);
    }
}
