/*
 * Targeted RetDec C for native executable gap queue batch 1147.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1cf601-0x1cf801 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1cf801-0x1cfa01 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1cfa01-0x1cfc01 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1cfc01-0x1cfe01 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1cfe01-0x1d0001 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d0001-0x1d0201 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d0201-0x1d0401 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d0401-0x1d0601 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37311b-0x37331b rank=- name=- kind=- bytes=- uncovered=-
 *   0x37331b-0x37351b rank=- name=- kind=- bytes=- uncovered=-
 *   0x37371b-0x37391b rank=- name=- kind=- bytes=- uncovered=-
 *   0x37391b-0x373b1b rank=- name=- kind=- bytes=- uncovered=-
 *   0x373b1b-0x373d1b rank=- name=- kind=- bytes=- uncovered=-
 *   0x373d1b-0x373f1b rank=- name=- kind=- bytes=- uncovered=-
 *   0x373f1b-0x37411b rank=- name=- kind=- bytes=- uncovered=-
 *   0x5746cd-0x5748cd rank=- name=- kind=- bytes=- uncovered=-
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
extern int g2;
extern int g4;
extern int g5;
extern int g6;
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

int64_t function_15b0510();
int64_t function_1ad33c92();
int64_t function_1cf586();
int64_t function_1cf601(void);
int64_t function_1cf604(void);
int64_t function_1cf64b(void);
int64_t function_1cf655(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1cf6e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1cf715(void);
int64_t function_1cf719(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1cf721(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1cf82f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1cf861(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_1cf89f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1cf92a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1cf97d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1cf9b0(void);
int64_t function_1cf9c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1cfb1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1cfc90(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1cfdc3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1cff09(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d006e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d01c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1d0344(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d04a5(int64_t a1);
int64_t function_1d04bb(void);
int64_t function_1d04cf(void);
int64_t function_1d05aa(void);
int64_t function_1d05ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d05b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d05b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_22391d5a();
int64_t function_37311b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_373130(int64_t a1);
int64_t function_373160(void);
int64_t function_373170(void);
int64_t function_373229(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37327a(void);
int64_t function_3732ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37336c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_373450(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3734a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3734dc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3736e5();
int64_t function_37371b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3737f3(void);
int64_t function_3738c4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_373904(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_373a08(int64_t a1);
int64_t function_373a1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_373a8c(void);
int64_t function_373aa3(void);
int64_t function_373abe(void);
int64_t function_373acd(void);
int64_t function_373aee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_373b01(int64_t a1);
int64_t function_373bc6(int64_t a1);
int64_t function_373bd9(void);
int64_t function_373be3(void);
int64_t function_373c13(int64_t a1, int64_t a2);
int64_t function_373c22(int64_t a1);
int64_t function_373c27(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_373ca5(int64_t a1);
int64_t function_373ce4(int64_t a1);
int64_t function_373d39(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_373dce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_373e74(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_373e87(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_373eb2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_373f71(void);
int64_t function_373f77(int64_t a1, int64_t a2, int64_t a3);
int64_t function_373fb4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37401e(void);
int64_t function_37407d(void);
int64_t function_3740a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_503b95a6();
int64_t function_572410();
int64_t function_5732b0();
int64_t function_5732d0();
int64_t function_573430();
int64_t function_5746cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_574730(int64_t a1);
int64_t function_574770(int64_t a1);
int64_t function_574790(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5747b0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5747d0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5747f0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_574810(int64_t a1, int64_t a2, int64_t a3);
int64_t function_574830(int64_t a1);
int64_t function_574850(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_70d18f48();
int64_t function_7adc9cdc();
int64_t function_c4258();
int64_t function_ffffffff92c65fab();
int64_t unknown_10b615ca();
int64_t unknown_1c37e27a();
int64_t unknown_20420bde();
int64_t unknown_240c0010();
int64_t unknown_352aa4f6();
int64_t unknown_36b8bf6();
int64_t unknown_3a3d2782();
int64_t unknown_3ad940c9();
int64_t unknown_3b58f78();
int64_t unknown_3e0f526e();
int64_t unknown_562386ed();
int64_t unknown_6132321d();
int64_t unknown_65443ce3();
int64_t unknown_66b88f31();
int64_t unknown_71281a2c();
int64_t unknown_760e438d();
int64_t unknown_b756159();
int64_t unknown_c389cfa();
int64_t unknown_ffffffffa06b4d5b();
int64_t unknown_ffffffffb11b9267();
int64_t unknown_ffffffffc4ad27a5();
int64_t unknown_ffffffffc50d3e57();
int64_t unknown_ffffffffe0403d7d();
int64_t unknown_ffffffffe465b3a5();
int64_t unknown_fffffffff83c7901();
int64_t unknown_fffffffffb99fd70();

// Address range: 0x1cf601 - 0x1cf603
int64_t function_1cf601(void) {
    // 0x1cf601
    int64_t result; // 0x1cf601
    return result;
}

// Address range: 0x1cf604 - 0x1cf606
int64_t function_1cf604(void) {
    // 0x1cf604
    return function_1cf586();
}

// Address range: 0x1cf64b - 0x1cf64c
int64_t function_1cf64b(void) {
    // 0x1cf64b
    int64_t result; // 0x1cf64b
    return result;
}

// Address range: 0x1cf655 - 0x1cf6e2
int64_t function_1cf655(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1cf655
    int64_t v1; // 0x1cf655
    uint64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = unknown_ffffffffa06b4d5b(); // 0x1cf655
    char v5 = *(char *)(v1 - 48); // 0x1cf65a
    int32_t * v6 = (int32_t *)(a4 - 0x66eadb83); // 0x1cf682
    *v6 = *v6 + (int32_t)a3;
    uint64_t v7 = a3 / 256 + a3; // 0x1cf688
    int64_t v8 = a3 & 0xffffff00; // 0x1cf688
    char * v9 = (char *)(v7 % 256 | v8); // 0x1cf694
    *v9 = *v9 - 60;
    *(char *)v3 = *(char *)&v3 + (char)v2;
    __asm_outsb((int16_t)v4, *(char *)&v3);
    char * v10 = (char *)(256 * (int64_t)(v5 | (char)(v2 / 256)) | v2 & -0xff01); // 0x1cf69c
    *v10 = *v10 + (char)a4;
    return (v7 + 239) % 256 | v8;
}

// Address range: 0x1cf6e5 - 0x1cf714
int64_t function_1cf6e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1cf6e5
    int64_t v1; // 0x1cf6e5
    uint64_t v2 = v1;
    bool v3; // 0x1cf6e5
    int64_t v4 = 256 * (v1 + v2 / 256 + (int64_t)v3) & 0xff00 | v2 & -0xff01; // 0x1cf6ec
    uint64_t v5 = unknown_562386ed() + 0x3d2e0e9a; // 0x1cf6f2
    int32_t * v6 = (int32_t *)(v5 & 0xffffffff); // 0x1cf6f7
    uint32_t v7 = *v6; // 0x1cf6f7
    uint32_t v8 = v7 + (int32_t)v5; // 0x1cf6f7
    *v6 = v8;
    int64_t v9; // 0x1cf6e5
    unsigned char v10 = *(char *)&v9; // 0x1cf6f9
    int64_t v11; // 0x1cf6e5
    char v12 = *(char *)&v11; // 0x1cf6fa
    int32_t * v13 = (int32_t *)(v4 + 127); // 0x1cf6fc
    *v13 = *v13 + (int32_t)v4;
    return v5 & 0xffff0000 | (int64_t)v10 | 256 * (int64_t)(v12 + (char)(v5 / 256) + (char)(v8 < v7));
}

// Address range: 0x1cf715 - 0x1cf718
int64_t function_1cf715(void) {
    // 0x1cf715
    int64_t result; // 0x1cf715
    return result;
}

// Address range: 0x1cf719 - 0x1cf720
int64_t function_1cf719(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1cf719
    int64_t result; // 0x1cf719
    if (a4 != 0) {
        // 0x1cf71b
        return result;
    }
    int32_t * v1 = (int32_t *)(a1 + 68 + a3); // 0x1cf71c
    *v1 = *v1 | (int32_t)a3;
    return result;
}

// Address range: 0x1cf721 - 0x1cf723
int64_t function_1cf721(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1cf721
    int64_t result; // 0x1cf721
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x1cf82f - 0x1cf847
int64_t function_1cf82f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1cf82f
    int64_t v1; // 0x1cf82f
    int32_t v2 = v1;
    *(int32_t *)v1 = v2 + (int32_t)a1;
    char v3 = *(char *)(a3 - 0x17bebf9f); // 0x1cf831
    int32_t * v4 = (int32_t *)(v1 - 77); // 0x1cf837
    *v4 = *v4 + v2;
    int32_t result = __asm_in(-67); // 0x1cf83a
    int64_t v5; // 0x1cf82f
    *(int32_t *)a4 = *(int32_t *)&v5 / 2;
    char * v6 = (char *)(a3 + 20); // 0x1cf841
    *v6 = v3 + (char)((uint64_t)v1 / 256) + *v6;
    return result;
}

// Address range: 0x1cf861 - 0x1cf89e
int64_t function_1cf861(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffffb11b9267(); // 0x1cf861
    if (a4 != 1) {
        int64_t v2 = v1 + 0x1801e89e; // 0x1cf88e
        char * v3 = (char *)(a2 + 0x38fa00d9); // 0x1cf893
        *v3 = *v3 + (char)(a3 / 256);
        return (v2 + a3) % 256 | v2 & 0xffffff00;
    }
    // 0x1cf868
    int64_t v4; // 0x1cf861
    char * v5 = (char *)(v4 - 51); // 0x1cf868
    unsigned char v6 = *v5; // 0x1cf868
    bool v7; // 0x1cf861
    *v5 = v6 / 8 | 32 * (char)v7 | 64 * v6;
    *(int32_t *)-0x1554e8f1 = *(int32_t *)-0x1554e8f1 + (int32_t)v4;
    int64_t result = unknown_3b58f78(); // 0x1cf872
    int32_t * v8 = (int32_t *)(a3 + 0x73d45dfb); // 0x1cf882
    *v8 = *v8 + (int32_t)a3;
    return result;
}

// Address range: 0x1cf89f - 0x1cf8ce
int64_t function_1cf89f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1cf89f
    int64_t v1; // 0x1cf89f
    int64_t v2 = v1;
    bool v3; // 0x1cf89f
    uint64_t v4 = 256 * (64 * (int64_t)v3 | 128 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3) | 512; // 0x1cf8a4
    int64_t result = v4 | unknown_ffffffffe465b3a5() & -0xff01; // 0x1cf8a4
    *(char *)a2 = (char)(v4 / 256);
    if (v3) {
        // 0x1cf8cd
        return result;
    }
    int32_t v5 = *(int32_t *)(v2 + 0x2990173a); // 0x1cf8b0
    int64_t v6; // 0x1cf89f
    char v7 = *(char *)&v6; // 0x1cf8ba
    int32_t * v8 = (int32_t *)(4 * v1 + 94 + (v2 & -256 | (int64_t)(v7 | (char)v2))); // 0x1cf8be
    *v8 = *v8 + (int32_t)a1;
    int32_t * v9 = (int32_t *)((int64_t)(v5 + ((int32_t)result & -256 | (int32_t)v3 | 194)) + 1); // 0x1cf8c5
    *v9 = *v9 + ((int32_t)a2 ^ 66);
    return a1 & 0xffffffff;
}

// Address range: 0x1cf92a - 0x1cf97c
int64_t function_1cf92a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1cf92a
    int64_t v1; // 0x1cf92a
    int64_t v2 = v1 - a4; // 0x1cf960
    int32_t * v3 = (int32_t *)(8 * a4 + 0x419f1cb1 + (v2 & 0xffffffff)); // 0x1cf962
    *v3 = *v3 + (int32_t)a1;
    unknown_fffffffffb99fd70();
    *(int32_t *)a3 = (int32_t)v2;
    return unknown_ffffffffe0403d7d();
}

// Address range: 0x1cf97d - 0x1cf99d
int64_t function_1cf97d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1cf97d
    int64_t result; // 0x1cf97d
    __asm_outsd((int16_t)a3, (int32_t)result);
    int32_t * v1 = (int32_t *)(a4 + 0x5d37f26d); // 0x1cf98c
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1cf9b0 - 0x1cf9b3
int64_t function_1cf9b0(void) {
    // 0x1cf9b0
    int64_t result; // 0x1cf9b0
    return result;
}

// Address range: 0x1cf9c4 - 0x1cfb1d
int64_t function_1cf9c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = unknown_10b615ca() & -256 | (int64_t)*(char *)-0x5fe1782b5c5d240; // 0x1cf9c9
    int32_t * v2 = (int32_t *)(a4 + 0x143d1a00); // 0x1cf9d2
    *v2 = *v2 | -24;
    int32_t * v3 = (int32_t *)(v1 - 90); // 0x1cf9d9
    *v3 = *v3 + (int32_t)a3;
    *(int32_t *)a1 = (int32_t)v1;
    int32_t * v4 = (int32_t *)(a3 + 0x6cc201e8); // 0x1cf9e1
    *v4 = 2 * *v4;
    bool v5; // 0x1cf9c4
    int64_t v6 = unknown_36b8bf6((v5 ? -4 : 4) + a1); // 0x1cf9f0
    char * v7 = (char *)(v6 - 0x7cb76400); // 0x1cf9f5
    *v7 = *v7 + (char)v6;
    char v8 = __asm_in_133((int16_t)a3); // 0x1cf9fb
    char * v9 = (char *)(a4 + 80); // 0x1cf9fc
    *v9 = *v9 | v8;
    int64_t v10; // 0x1cf9c4
    return function_c4258(0x1ce3cd, a2, a3, a4, a5, v10, 0x22c17960);
}

// Address range: 0x1cfb1d - 0x1cfc90
int64_t function_1cfb1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x1ad3baa0; // bp-40, 0x1cfbac
    int64_t v2 = (int64_t)&v1; // 0x1cfbde
    int64_t v3 = v2 + 16; // 0x1cfbf5
    int64_t v4 = *(int64_t *)v3; // 0x1cfbf5
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x1cfbf5
    *v5 = v4;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x1cfbfd
    bool v7; // 0x1cfb1d
    *v6 = 0x4000 * (int64_t)(bool)v7 | 2048 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | 128 * (int64_t)v7 | 64 * (int64_t)v7 | 16 * (int64_t)v7 | (int64_t)v7 | 4 * (int64_t)v7 | 2;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x1cfc05
    *v8 = a6;
    *v6 = v2;
    *v5 = 0x2cc93f96;
    *v8 = *v6;
    *(int64_t *)(v2 + 8) = *v5;
    *v6 = 0x6c15d0c5;
    *v8 = v4;
    *(int64_t *)(v2 + 24) = *v5;
    *v5 = v2;
    v1 = v3;
    return function_c4258(a1, a2, a3, a4, a5, a6, v3);
}

// Address range: 0x1cfc90 - 0x1cfdc3
int64_t function_1cfc90(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1cfc90
    int64_t v1; // bp-40, 0x1cfc90
    int64_t v2 = (int64_t)&v1; // 0x1cfd4d
    v1 = v2;
    *(int64_t *)(v2 - 8) = v2;
    *(int64_t *)(v2 - 16) = v2;
    int64_t v3; // 0x1cfc90
    return function_c4258(a1, a2, a3, v3, v3, v3, 0x1ce87f);
}

// Address range: 0x1cfdc3 - 0x1cff09
int64_t function_1cfdc3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1cfdc3
    int64_t v1; // bp-32, 0x1cfdc3
    int64_t v2 = (int64_t)&v1; // 0x1cfe1d
    int64_t v3 = v2 - 16; // 0x1cfe39
    int64_t * v4 = (int64_t *)v3; // 0x1cfe39
    *v4 = a4;
    int64_t * v5 = (int64_t *)(v2 - 24); // 0x1cfe48
    *v5 = v3;
    int64_t v6 = *v4; // 0x1cfe49
    int64_t * v7 = (int64_t *)(v2 - 32); // 0x1cfe49
    *v7 = v6;
    int64_t v8 = v2 - 8; // 0x1cfe51
    int64_t * v9 = (int64_t *)v8; // 0x1cfe56
    int64_t v10 = *(int64_t *)(v2 + 32); // 0x1cfe59
    *v9 = v10;
    *v4 = v10;
    *v5 = v8;
    int64_t v11 = *(int64_t *)(v2 + 8); // 0x1cfe7b
    *v4 = v11;
    *v7 = v11;
    *v5 = v10;
    v1 = *v4;
    *v4 = v10;
    *v5 = v3;
    *v7 = *v4;
    *v9 = v11;
    *(int64_t *)(v2 + 24) = v11;
    *v9 = v1;
    *v4 = v2;
    *v9 = v1;
    *v4 = v1;
    return function_c4258(a1, a2, a3, v6, a5, 169, 0x1ceb1d);
}

// Address range: 0x1cff09 - 0x1d006e
int64_t function_1cff09(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1cff09
    int64_t v1; // bp-40, 0x1cff09
    v1 = (int64_t)&v1;
    int64_t v2; // 0x1cff09
    return function_c4258(a1, a2, a3, a4, v2, v2, 0x1ced47);
}

// Address range: 0x1d006e - 0x1d01c4
int64_t function_1d006e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d006e
    int64_t v1; // 0x1d006e
    return function_c4258(a1, a2, a3, a4, v1, v1, 0x7239cab4);
}

// Address range: 0x1d01c4 - 0x1d0344
int64_t function_1d01c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1d01c4
    int64_t v1; // bp-32, 0x1d01c4
    int64_t v2 = (int64_t)&v1; // 0x1d0278
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x1d0280
    int64_t v4 = *v3; // 0x1d0280
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x1d0280
    *v5 = v4;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x1d028f
    *v6 = a1;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x1d029a
    *v7 = a4;
    *v6 = 0x64d22d72;
    *v7 = 0x76e70dc1;
    *(int64_t *)(v2 - 32) = a6;
    v1 = *v6;
    *v7 = a4;
    *v6 = v4;
    *v3 = v4;
    int64_t v8 = *v5; // 0x1d030a
    *v6 = v8;
    *v7 = v8;
    *v5 = v1;
    *v6 = v1;
    int64_t v9; // 0x1d01c4
    return function_c4258(*v6, a2, a3, *v7, a5, v9, v1);
}

// Address range: 0x1d0344 - 0x1d048e
int64_t function_1d0344(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1d0344
    int64_t v1; // 0x1d0344
    return function_c4258(a1, a2, 0x1cf488, 0x1cf488, a5, v1, v1);
}

// Address range: 0x1d04a5 - 0x1d04a9
int64_t function_1d04a5(int64_t a1) {
    // 0x1d04a5
    int64_t v1; // 0x1d04a5
    return v1 & 0xffffffff;
}

// Address range: 0x1d04bb - 0x1d04c0
int64_t function_1d04bb(void) {
    // 0x1d04bb
    return function_7adc9cdc();
}

// Address range: 0x1d04cf - 0x1d04d2
int64_t function_1d04cf(void) {
    // 0x1d04cf
    int64_t result; // 0x1d04cf
    return result;
}

// Address range: 0x1d05aa - 0x1d05ab
int64_t function_1d05aa(void) {
    // 0x1d05aa
    int64_t result; // 0x1d05aa
    return result;
}

// Address range: 0x1d05ab - 0x1d05b0
int64_t function_1d05ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d05ab
    int64_t v1; // 0x1d05ab
    char * v2 = (char *)(v1 - 127); // 0x1d05ab
    *v2 = *v2 | (char)a4;
    int64_t result = function_1d05b8(a1, a2, (int64_t)&g6, (int64_t)&g6, (int64_t)&g6); // 0x1d05ae
    return result;
}

// Address range: 0x1d05b0 - 0x1d05b8
int64_t function_1d05b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1d05b0
    int64_t v1; // 0x1d05b0
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(v2 - 121); // 0x1d05b2
    unsigned char v4 = *v3; // 0x1d05b2
    unsigned char v5 = v4 + (char)a4; // 0x1d05b2
    *v3 = v5;
    return (v2 - (v5 < v4 ? 37 : 36)) % 256 | v2 & -256;
}

// Address range: 0x1d05b8 - 0x1d05fe
int64_t function_1d05b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x1d05b8
    return result;
}

// Address range: 0x37311b - 0x373127
int64_t function_37311b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x6e0a88f0); // 0x37311b
    uint32_t v2 = *v1; // 0x37311b
    uint32_t v3 = v2 + (int32_t)a3; // 0x37311b
    *v1 = v3;
    int64_t v4; // 0x37311b
    *(char *)a3 = *(char *)&v4 + 95 + (char)(v3 < v2);
    int64_t result; // 0x37311b
    return result;
}

// Address range: 0x373130 - 0x373137
int64_t function_373130(int64_t a1) {
    // 0x373130
    int64_t result; // 0x373130
    return result;
}

// Address range: 0x373160 - 0x373162
int64_t function_373160(void) {
    // 0x373160
    int64_t result; // 0x373160
    return result;
}

// Address range: 0x373170 - 0x373173
int64_t function_373170(void) {
    // 0x373170
    int64_t v1; // 0x373170
    bool v2; // 0x373170
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x373229 - 0x373239
int64_t function_373229(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x373229
    int64_t result; // 0x373229
    *(char *)0x7a1e035 = *(char *)0x7a1e035 + (char)(result / 256);
    *(int32_t *)0xc2b90ace = (int32_t)result;
    return result;
}

// Address range: 0x37327a - 0x373280
int64_t function_37327a(void) {
    // 0x37327a
    return function_503b95a6();
}

// Address range: 0x3732ae - 0x373352
int64_t function_3732ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = __readfsbyte(0x2f000000a525013d); // 0x3732ba
    int64_t v2; // 0x3732ae
    int64_t result = v2 & -256 | (int64_t)v1; // 0x3732ba
    char * v3 = (char *)result; // 0x3732c4
    *v3 = *v3 + v1;
    char v4 = *(char *)0x621b54cd; // 0x3732c6
    *(char *)0x621b54cd = v4 + (char)((int64_t)"_Resume" >> 8);
    char * v5 = (char *)(a4 & -0xff01 | (int64_t)&g5); // 0x3732dc
    *v5 = *v5 + (char)a3;
    return result;
}

// Address range: 0x37336c - 0x3733e7
int64_t function_37336c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x37336c
    int64_t v1; // 0x37336c
    int64_t v2 = 256 * v1 & 0xff00 | a4 & -0xff01; // 0x37336c
    uint32_t v3 = (int32_t)a3; // 0x37336e
    uint32_t v4 = (int32_t)a1; // 0x37336e
    int32_t v5 = v3 + v4; // 0x37336e
    if (llvm_ctpop_i8((char)v5) % 2 != 0) {
        if (v5 < 0 == ((v5 ^ v3) & (v5 ^ v4)) < 0) {
            int32_t * v6 = (int32_t *)(v2 + 8 * a1); // 0x3733b6
            *v6 = *v6 + (int32_t)v2;
            return 0;
        }
        // 0x3733d7
        __asm_outsd((int16_t)v5, (int32_t)v1);
        int64_t v7 = unknown_20420bde(); // 0x3733d8
        float80_t v8; // 0x37336c
        *(int32_t *)0x21fb4d2 = (int32_t)v8;
        return 256 * (64 * (int64_t)(v5 == 0) | (int64_t)(v5 < v3) | 128 * (int64_t)(v5 < 0) | 16 * (int64_t)(v3 % 16 + v4 % 16 > 15)) | v7 & -0xff01 | 512;
    }
    if ((int32_t)v1 >= 0x19039001) {
        // 0x3733ca
        return __asm_hlt();
    }
    int32_t v9 = *(int32_t *)0x5c3d58bd; // 0x37338d
    __asm_in_133((int16_t)v5);
    int32_t * v10 = (int32_t *)((a5 & -0xff01 | (int64_t)&g2) + 0x64a00ae7); // 0x373397
    int32_t v11 = *v10; // 0x373397
    *v10 = (int32_t)v2 + (int32_t)((int32_t)v1 < 0x19039001) + v9 + v11;
    return unknown_ffffffffc4ad27a5();
}

// Address range: 0x373450 - 0x37349b
int64_t function_373450(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x373450
    int64_t v1; // 0x373450
    if ((v1 & 1024) != 0) {
        // 0x373491
        return (v1 & 0xffffffff | 0x100000000 * a3) / (a1 & 0xffffffff) & 0xffffffff;
    }
    // 0x373453
    unknown_b756159();
    *(char *)0x37c3480b = (char)((uint64_t)v1 / 256);
    return function_22391d5a();
}

// Address range: 0x3734a9 - 0x3734b4
int64_t function_3734a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3734a9
    int64_t v1; // 0x3734a9
    int32_t * v2 = (int32_t *)(v1 + 0x1e80b99); // 0x3734a9
    *v2 = *v2 | (int32_t)a4;
    return function_ffffffff92c65fab();
}

// Address range: 0x3734dc - 0x3734e4
int64_t function_3734dc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3734dc
    int64_t result; // 0x3734dc
    *(int32_t *)(result - 0x7dd146d6) = (int32_t)a3;
    return result;
}

// Address range: 0x37371b - 0x373735
int64_t function_37371b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x37371b
    int64_t v1; // 0x37371b
    int64_t v2 = v1 ^ a4 / 256 % 256; // 0x37371b
    int32_t * v3 = (int32_t *)(v2 + 0x1695abb5); // 0x37371d
    int32_t v4 = *v3 + (int32_t)v2; // 0x37371d
    *v3 = v4;
    if (v4 < 0) {
        function_3736e5();
    }
    // 0x373726
    unknown_66b88f31();
    return __asm_in(11);
}

// Address range: 0x3737f3 - 0x3737f8
int64_t function_3737f3(void) {
    // 0x3737f3
    return function_15b0510();
}

// Address range: 0x3738c4 - 0x373903
int64_t function_3738c4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3738c4
    int64_t v1; // 0x3738c4
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 - 124;
    *(int32_t *)a1 = (int32_t)v2;
    int32_t * v3 = (int32_t *)(v1 + 1); // 0x3738cd
    int32_t v4 = v1; // 0x3738cd
    *v3 = *v3 + v4;
    int64_t v5; // 0x3738c4
    *(int32_t *)a3 = *(int32_t *)&v5 | v4;
    __asm_out((int16_t)a3, (int32_t)((v2 + a4 / 256) % 256 | v2 & 0xffffff00));
    int32_t v6 = unknown_65443ce3(); // 0x3738e2
    __asm_out_134(5, v6);
    *(int32_t *)0x610099fa = v6;
    int32_t * v7 = (int32_t *)(v1 + 117); // 0x3738ed
    int32_t v8 = a4; // 0x3738ed
    *v7 = *v7 + v8;
    int64_t v9 = a4 & 0xffffffff; // 0x3738f0
    char * v10 = (char *)(v9 - 94); // 0x3738f1
    *v10 = *v10 + (char)v1;
    *(int32_t *)v9 = v8;
    bool v11; // 0x3738c4
    return unknown_fffffffff83c7901(v11 ? 0x610099f6 : 0x610099fe);
}

// Address range: 0x373904 - 0x373930
int64_t function_373904(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x373904
    int64_t v1; // 0x373904
    *(char *)(a1 - 0x5d721204) = (char)(v1 / 256);
    unknown_240c0010();
    int64_t v2; // 0x373904
    *(int32_t *)a4 = *(int32_t *)&v2 + (int32_t)v1;
    __asm_wait(a1);
    int64_t v3 = unknown_6132321d(); // 0x373917
    int32_t * v4 = (int32_t *)(a1 + 1); // 0x373923
    *v4 = *v4 | (int32_t)v3;
    unknown_71281a2c();
    return __asm_iretd();
}

// Address range: 0x373a08 - 0x373a13
int64_t function_373a08(int64_t a1) {
    // 0x373a12
    return a1 & 0xffffffff;
    // 0x373a0a
    int64_t result; // 0x373a08
    return result;
}

// Address range: 0x373a1e - 0x373a26
int64_t function_373a1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x373a1e
    int64_t v1; // 0x373a1e
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x373a8c - 0x373a8d
int64_t function_373a8c(void) {
    // 0x373a8c
    int64_t result; // 0x373a8c
    return result;
}

// Address range: 0x373aa3 - 0x373aaa
int64_t function_373aa3(void) {
    // 0x373aa3
    return function_1ad33c92();
}

// Address range: 0x373abe - 0x373ac3
int64_t function_373abe(void) {
    // 0x373abe
    return function_70d18f48();
}

// Address range: 0x373acd - 0x373acf
int64_t function_373acd(void) {
    // 0x373acd
    return function_373a8c();
}

// Address range: 0x373aee - 0x373b00
int64_t function_373aee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x373aee
    int64_t v1; // 0x373aee
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + 80;
    int64_t v3 = unknown_c389cfa(); // 0x373af4
    int32_t * v4 = (int32_t *)(a3 + 28); // 0x373af9
    *v4 = *v4 + (int32_t)a4;
    char v5 = *(char *)(a4 + 102); // 0x373afc
    return v3 & -0x10000 | (int64_t)((256 * (int16_t)v3 >> 8) * (int16_t)v5);
}

// Address range: 0x373b01 - 0x373b04
int64_t function_373b01(int64_t a1) {
    // 0x373b01
    int64_t result; // 0x373b01
    return result;
}

// Address range: 0x373bc6 - 0x373bc7
int64_t function_373bc6(int64_t a1) {
    // 0x373bc6
    int64_t result; // 0x373bc6
    return result;
}

// Address range: 0x373bd9 - 0x373bda
int64_t function_373bd9(void) {
    // 0x373bd9
    int64_t result; // 0x373bd9
    return result;
}

// Address range: 0x373be3 - 0x373be4
int64_t function_373be3(void) {
    // 0x373be3
    int64_t result; // 0x373be3
    return result;
}

// Address range: 0x373c13 - 0x373c1d
int64_t function_373c13(int64_t a1, int64_t a2) {
    // 0x373c13
    int64_t result; // 0x373c13
    bool v1; // 0x373c13
    if (v1) {
        result = function_373bd9();
    }
    // 0x373c1b
    return result;
}

// Address range: 0x373c22 - 0x373c27
int64_t function_373c22(int64_t a1) {
    // 0x373c22
    int64_t v1; // 0x373c22
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)v1;
    return result;
}

// Address range: 0x373c27 - 0x373c98
int64_t function_373c27(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    char * v3 = (char *)(a3 + 75); // 0x373c2c
    int64_t v4; // 0x373c27
    *v3 = *v3 + (char)(v4 / 256);
    int64_t v5 = v4 & -256 | (int64_t)*(char *)0x2f5b01a02fdb41c6; // 0x373c31
    int32_t * v6 = (int32_t *)v5; // 0x373c3f
    *v6 = *v6 + (int32_t)v5;
    char * v7 = (char *)(a1 + 0x3d000009); // 0x373c41
    *v7 = *v7 + (char)a3;
    int32_t v8 = v4; // 0x373c47
    *(int32_t *)a3 = *(int32_t *)&v1 + v8;
    __asm_int(119);
    int32_t * v9 = (int32_t *)(v5 + 0x6e83f86); // 0x373c4b
    *v9 = *v9 + v8;
    unknown_ffffffffc50d3e57();
    int32_t * v10 = (int32_t *)(a3 + 0x42006826); // 0x373c56
    *v10 = *v10 + (int32_t)a1;
    function_373be3();
    char v11 = *(char *)&v2; // 0x373c68
    __asm_outsb((int16_t)v1 % 256 | (int16_t)&g4, v11);
    int64_t v12; // bp-8, 0x373c27
    float80_t v13; // 0x373c27
    *(int16_t *)(4 * a1 + 21 + (int64_t)&v12) = (int16_t)v13;
    return v2 & 0xffffffff;
}

// Address range: 0x373ca5 - 0x373ca8
int64_t function_373ca5(int64_t a1) {
    // 0x373ca5
    int64_t result; // 0x373ca5
    return result;
}

// Address range: 0x373ce4 - 0x373ce7
int64_t function_373ce4(int64_t a1) {
    // 0x373ce4
    int64_t result; // 0x373ce4
    return result;
}

// Address range: 0x373d39 - 0x373dcd
int64_t function_373d39(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int32_t v3 = *(int32_t *)(a1 - 0x6cfe1734); // 0x373d42
    int64_t v4; // 0x373d39
    int32_t v5 = v4; // 0x373d48
    int32_t * v6 = (int32_t *)(a2 - 0x675e2f53); // 0x373db5
    *v6 = *v6 + (int32_t)a1;
    int32_t v7 = (v5 ^ 57) + 0x798691e; // 0x373dbb
    if (v7 < 0 == (v7 & (v5 ^ -0x80000000)) < 0 != v7 != 0) {
        // 0x373dc2
        return unknown_3ad940c9();
    }
    char * v8 = (char *)(v1 + 97); // 0x373d6f
    *v8 = *v8 + (char)a4;
    int64_t v9 = unknown_1c37e27a(); // 0x373d74
    char * v10 = (char *)v9; // 0x373d79
    char v11 = v5 >> 31; // 0x373d79
    *v10 = *v10 + v11 | v11;
    int64_t * v12 = (int64_t *)(a4 + 0x3c9f6beb); // 0x373d7d
    *v12 = *v12 ^ a6;
    int32_t v13 = *(int32_t *)v9; // 0x373d84
    unsigned char v14 = *(char *)&v2; // 0x373d86
    bool v15; // 0x373d39
    unknown_760e438d(v2 + (v15 ? -1 : 1));
    int32_t * v16 = (int32_t *)(v1 + (v15 ? -54 : -46)); // 0x373d90
    int32_t v17 = *v16; // 0x373d90
    *v16 = v3 + (int32_t)v4 + (int32_t)(v14 > (char)(v13 * (int32_t)v9)) + v17;
    return (int64_t)*(int32_t *)&v1;
}

// Address range: 0x373dce - 0x373e73
int64_t function_373dce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a4;
    int64_t v2 = a3;
    int64_t v3 = a2;
    int64_t v4; // 0x373dce
    int32_t * v5 = (int32_t *)(v4 - 0x17fe17e3); // 0x373dce
    *v5 = *v5 + (int32_t)a5;
    *(int32_t *)(a2 - 65 + 4 * v4) = (int32_t)a4;
    uint64_t v6 = v4 / 256; // 0x373ddb
    int32_t * v7 = (int32_t *)(a4 - 8); // 0x373de0
    *v7 = *v7 + (int32_t)v4;
    __asm_outsb((int16_t)a3, *(char *)&v3);
    unsigned char v8 = (char)(v4 + v6); // 0x373de5
    char v9 = v8 + 45; // 0x373de5
    bool v10; // 0x373dce
    int64_t v11 = 0x4000 * (int64_t)v10 | (int64_t)(v8 < 211) | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 64 * (int64_t)(v9 == 0) | 128 * (int64_t)(v9 < 0) | 256 * (int64_t)v10 | 16 * (int64_t)(v8 % 16 > 18) | 4 * (int64_t)(llvm_ctpop_i8(v9) % 2 == 0) | 2048 * (int64_t)(((v9 ^ v8) & (v8 ^ -128)) < 0) | 2; // bp-8, 0x373de7
    if (v9 == 0) {
        // 0x373e5a
        __asm_wait(v4 & 0xffffff00);
        int64_t v12 = unknown_3e0f526e(); // 0x373e68
        int64_t v13 = v2;
        *(int32_t *)v13 = *(int32_t *)&v2 + (int32_t)v13;
        return v12 + 2 * v4 & 0xffffffff;
    }
    int32_t v14 = *(int32_t *)&v1; // 0x373dea
    *(int32_t *)v1 = v14 + (int32_t)(int64_t)&v11;
    int64_t result = unknown_352aa4f6(); // 0x373df0
    char * v15 = (char *)(v3 + 62); // 0x373df5
    char v16 = *v15; // 0x373df5
    *v15 = 2 * v16;
    char * v17 = (char *)(v4 & -256 | 37); // 0x373df8
    *v17 = (char)(v16 < 0) - (char)v6 + *v17;
    *(char *)-0x6e140c1efe1721a4 = (char)result;
    return result;
}

// Address range: 0x373e74 - 0x373e87
int64_t function_373e74(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x373e74
    int64_t v1; // 0x373e74
    char * v2 = (char *)(v1 - 0x1c4ec4f1); // 0x373e74
    bool v3; // 0x373e74
    *v2 = *v2 + (char)a3 + (char)v3;
    int32_t * v4 = (int32_t *)(a1 - 0x41ff973c); // 0x373e7c
    *v4 = *v4 + (int32_t)a2;
    int64_t v5; // 0x373e74
    return (int64_t)*(int32_t *)&v5;
}

// Address range: 0x373e87 - 0x373e95
int64_t function_373e87(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x373e87
    int64_t v1; // 0x373e87
    int64_t result = v1 & 0xffffffff; // 0x373e87
    *(char *)result = (char)v1 + (char)a4;
    return result;
}

// Address range: 0x373eb2 - 0x373eb4
int64_t function_373eb2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x373eb2
    int64_t result; // 0x373eb2
    return result;
}

// Address range: 0x373f71 - 0x373f73
int64_t function_373f71(void) {
    // 0x373f71
    int64_t v1; // 0x373f71
    return function_373fb4(v1, v1, v1, v1);
}

// Address range: 0x373f77 - 0x373f8f
int64_t function_373f77(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 105); // 0x373f79
    int64_t v2; // 0x373f77
    *v1 = *v1 & (int32_t)v2;
    unknown_3a3d2782();
    __asm_in_136(-94);
    return (int64_t)*(int32_t *)-0x9ae01644ffe177e;
}

// Address range: 0x373fb4 - 0x373fcd
int64_t function_373fb4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x373fb4
    int64_t result; // 0x373fb4
    char v1 = result; // 0x373fc3
    __asm_out_135(-119, v1);
    char * v2 = (char *)((a1 - result & 0xffffffff) + 0x100089d5); // 0x373fc5
    *v2 = *v2 + (char)a3;
    __asm_out_135(58, v1);
    return result;
}

// Address range: 0x37401e - 0x374025
int64_t function_37401e(void) {
    // 0x37401e
    int64_t v1; // 0x37401e
    return v1 & -256 | (int64_t)*(char *)(v1 - 0x7b4e3a86);
}

// Address range: 0x37407d - 0x37407e
int64_t function_37407d(void) {
    // 0x37407d
    int64_t result; // 0x37407d
    return result;
}

// Address range: 0x3740a2 - 0x37411a
int64_t function_3740a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3740a2
    int64_t result; // 0x3740a2
    bool v1; // 0x3740a2
    if (v1 || v1) {
        // 0x3740a4
        return result;
    }
    // 0x374118
    *(char *)a3 = 2 * (char)a3;
    return result;
}

// Address range: 0x5746cd - 0x57472c
int64_t function_5746cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x5746cd
    int64_t result; // 0x5746cd
    uint64_t v1 = result;
    char * v2 = (char *)(v1 + 57); // 0x5746ce
    bool v3; // 0x5746cd
    char v4 = (char)v3 + (char)a4 + *v2; // 0x5746ce
    *v2 = v4;
    *(int64_t *)result = a2;
    int64_t * v5 = (int64_t *)(result + 8);
    int64_t v6 = *v5;
    if (v4 == 0) {
        // 0x574710
        *(int64_t *)(result + 8) = v6;
    } else {
        int64_t * v7 = (int64_t *)(result + 16); // 0x5746df
        *(int64_t *)(result + 8) = v6;
        int64_t * v8 = (int64_t *)(result + 16); // 0x5746e7
        *v7 = *v8;
        if (a1 != 0) {
            // 0x5746f1
            *(int64_t *)result = a1;
            *v8 = *v7;
            // 0x5746f8
            *v5 = 0;
            *(char *)a1 = 0;
            return result;
        }
    }
    int64_t v9 = v1 & -256 | (int64_t)*(char *)(v1 % 256 + result); // 0x5746d1
    *(int64_t *)result = v9;
    // 0x5746f8
    *v5 = 0;
    *(char *)v9 = 0;
    return result;
}

// Address range: 0x574730 - 0x574770
int64_t function_574730(int64_t a1) {
    // 0x574730
    int64_t v1; // 0x574730
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x574730
    int64_t v3 = *v2; // 0x574730
    int64_t v4 = 0; // 0x574730
    int64_t result; // 0x574730
    switch (v3) {
        case 1: {
            unsigned char v5 = *(char *)(v1 + 16); // 0x574760
            *(char *)a1 = v5;
            v4 = *v2;
            result = v5;
        }
        case 0: {
          lab_0x574750:
            // 0x574750
            *(int64_t *)(v1 + 8) = v4;
            *(char *)(a1 + v4) = 0;
            return result;
        }
        default: {
            int64_t * dest_mem = memcpy((int64_t *)a1, (int64_t *)v1, (int32_t)v3); // 0x57473f
            v4 = *v2;
            result = (int64_t)dest_mem;
            // branch (via goto) -> 0x574750
            goto lab_0x574750;
        }
    }
}

// Address range: 0x574770 - 0x574784
int64_t function_574770(int64_t a1) {
    // 0x574770
    return function_572410(*(int64_t *)(a1 + 24));
}

// Address range: 0x574790 - 0x5747ae
int64_t function_574790(int64_t a1, int64_t a2, int64_t a3) {
    // 0x574790
    return function_5732d0(*(int64_t *)(a1 + 16));
}

// Address range: 0x5747b0 - 0x5747ce
int64_t function_5747b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5747b0
    return function_5732d0(*(int64_t *)(a1 + 16));
}

// Address range: 0x5747d0 - 0x5747ee
int64_t function_5747d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5747d0
    return function_5732d0(*(int64_t *)(a1 + 16));
}

// Address range: 0x5747f0 - 0x57480e
int64_t function_5747f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5747f0
    return function_5732d0(*(int64_t *)(a1 + 16));
}

// Address range: 0x574810 - 0x57482e
int64_t function_574810(int64_t a1, int64_t a2, int64_t a3) {
    // 0x574810
    return function_5732d0(*(int64_t *)(a1 + 16));
}

// Address range: 0x574830 - 0x574844
int64_t function_574830(int64_t a1) {
    // 0x574830
    return function_5732b0(*(int64_t *)(a1 + 16));
}

// Address range: 0x574850 - 0x5748cb
int64_t function_574850(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x574850
    __readfsqword(40);
    return function_573430();
}
