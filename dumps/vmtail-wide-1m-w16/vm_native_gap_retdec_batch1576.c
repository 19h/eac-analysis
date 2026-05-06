/*
 * Targeted RetDec C for native executable gap queue batch 1576.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x27c841-0x27ca41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c464e-0x2c484e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c484e-0x2c4a4e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c4a4e-0x2c4c4e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c4c4e-0x2c4e4e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c4e4e-0x2c4fc5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33a87b-0x33aa7b rank=- name=- kind=- bytes=- uncovered=-
 *   0x33aa7b-0x33ac7b rank=- name=- kind=- bytes=- uncovered=-
 *   0x33ac7b-0x33ae7b rank=- name=- kind=- bytes=- uncovered=-
 *   0x33ae7b-0x33b07b rank=- name=- kind=- bytes=- uncovered=-
 *   0x33b07b-0x33b1f2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39d1b1-0x39d3b1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39d3b1-0x39d5b1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39d5b1-0x39d7b1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39d7b1-0x39d9b1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39d9b1-0x39db0e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_27c806();
int64_t function_27c82b();
int64_t function_27c841(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27c864(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27c890(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_27c8d4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_27c914(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_27c954(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_27c995(void);
int64_t function_27c9d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27c9f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2c464e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_2c46d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2c4833(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2c4944(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2c4ac8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2c4c2a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2c4d9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33a87b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33a98a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33aae1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33ac35(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33ae27(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33af4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_33b07c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_39d1b1(void);
int64_t function_39d1b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_39d279(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39d40a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39d556(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_39d6d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_39d8c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39da08(void);
int64_t function_39da39(void);
int64_t function_39da3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39da64(int64_t a1, int64_t a2);
int64_t function_39da76(int64_t a1);
int64_t function_39da7d(int64_t a1);
int64_t function_39da84(void);
int64_t function_39dab4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_39db00(void);
int64_t function_c4258();
int64_t function_cf3c7();
int64_t function_ffffffff9566ca81();
int64_t function_ffffffffe73bc2fb();
int64_t unknown_1d2a5585();
int64_t unknown_29383b7a();
int64_t unknown_2d0f4062();
int64_t unknown_68888759();
int64_t unknown_7486bc46();
int64_t unknown_7522e52e();
int64_t unknown_ffffffff89f15421();
int64_t unknown_ffffffffb465335d();
int64_t unknown_ffffffffc1b1dfc0();

// Address range: 0x27c841 - 0x27c861
int64_t function_27c841(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27c841
    int64_t v1; // 0x27c841
    bool v2; // 0x27c841
    if (v2) {
        v1 = function_27c82b();
    }
    int32_t * v3 = (int32_t *)(a1 + 102); // 0x27c845
    int64_t v4; // 0x27c841
    *v3 = *v3 + (int32_t)v4;
    if (llvm_ctpop_i8((char)(v1 + v4) - 1) % 2 == 0) {
        function_27c806();
    }
    // 0x27c84f
    __asm_in((int16_t)a3);
    unknown_68888759();
    return unknown_2d0f4062();
}

// Address range: 0x27c864 - 0x27c88a
int64_t function_27c864(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27c864
    int64_t v1; // 0x27c864
    *(char *)-0x1769b908 = *(char *)-0x1769b908 | (char)v1;
    unknown_29383b7a();
    return unknown_1d2a5585();
}

// Address range: 0x27c890 - 0x27c899
int64_t function_27c890(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x27c890
    *(char *)a4 = (char)(a4 / 256);
    int64_t v1; // 0x27c890
    return function_ffffffff9566ca81(v1 & 0xffffffff, a5);
}

// Address range: 0x27c8d4 - 0x27c8e2
int64_t function_27c8d4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x27c8d4
    int64_t v1; // 0x27c8d4
    int64_t v2 = v1;
    *(char *)a3 = (char)(v1 / 256);
    int32_t v3; // 0x27c8d4
    *(int32_t *)(v1 + 2) = (int32_t)(int64_t)&v3;
    return 2 * ((v2 - a4 / 256) % 256 | v2 & 0x7fffff00);
}

// Address range: 0x27c914 - 0x27c953
int64_t function_27c914(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x27c914
    int64_t v1; // 0x27c914
    int32_t * v2 = (int32_t *)(4 * v1 + 0x1c7ad458 + v1); // 0x27c914
    *v2 = *v2 & (int32_t)v1;
    unknown_ffffffff89f15421();
    int64_t v3; // 0x27c914
    char v4 = *(char *)&v3 + (char)(a4 / 256); // 0x27c920
    *(char *)a4 = v4;
    *(int32_t *)(a4 - 0x69fef702) = (int32_t)a4;
    uint64_t v5 = unknown_7522e52e(); // 0x27c928
    if (v4 < 0) {
        char * v6 = (char *)(a1 + 1); // 0x27c94f
        *v6 = *v6 + (char)v5;
        return 0x10000 * (int32_t)v5 >> 16;
    }
    int16_t v7 = v5; // 0x27c92f
    int16_t v8 = (int16_t)(v5 / 256) % 256; // 0x27c92f
    int64_t v9; // 0x27c914
    *(char *)v9 = *(char *)&v9 | (char)a3;
    return v5 & -0x10000 | (int64_t)(v7 / v8 % 256) | (int64_t)(256 * (v7 % v8));
}

// Address range: 0x27c954 - 0x27c95f
int64_t function_27c954(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x27c954
    bool v1; // 0x27c954
    *(int32_t *)((v1 ? -4 : 4) + a1) = __asm_insd((int16_t)a3);
    return unknown_ffffffffb465335d() & -104;
}

// Address range: 0x27c995 - 0x27c998
int64_t function_27c995(void) {
    // 0x27c995
    int64_t result; // 0x27c995
    return result;
}

// Address range: 0x27c9d1 - 0x27c9db
int64_t function_27c9d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27c9d1
    int64_t v1; // 0x27c9d1
    *(char *)a3 = 2 * (char)v1;
    return __asm_cpuid((int32_t)v1).e0 | 0x27ca7b78;
}

// Address range: 0x27c9f9 - 0x27c9fc
int64_t function_27c9f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27c9f9
    int64_t result; // 0x27c9f9
    int64_t v1 = result;
    bool v2; // 0x27c9f9
    *(char *)v1 = (char)v1 + (char)a4 + (char)v2;
    return result;
}

// Address range: 0x2c464e - 0x2c46d0
int64_t function_2c464e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x2c464e
    int64_t v1; // 0x2c464e
    return function_cf3c7(a1, a2, a3, a4, a5, a6, v1);
}

// Address range: 0x2c46d0 - 0x2c4833
int64_t function_2c46d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2c46d0
    int64_t v1; // 0x2c46d0
    return function_cf3c7(a1, a2, a3, a4, a5, v1, 310);
}

// Address range: 0x2c4833 - 0x2c4944
int64_t function_2c4833(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2c4833
    int64_t v1; // bp-32, 0x2c4833
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x2c4833
    return function_cf3c7(a1, a2, a3, a4, v2, v2, 0x298dc2);
}

// Address range: 0x2c4944 - 0x2c4ac8
int64_t function_2c4944(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2c4944
    int64_t v1; // bp-40, 0x2c4944
    v1 = (int64_t)&v1 + 16;
    return function_cf3c7(a1, a2, a3, a4, a5, a6, a7);
}

// Address range: 0x2c4ac8 - 0x2c4c2a
int64_t function_2c4ac8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2c4ac8
    int64_t v1; // bp-32, 0x2c4ac8
    int64_t v2 = (int64_t)&v1; // 0x2c4b34
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x2c4b3c
    int64_t * v4 = (int64_t *)v3; // 0x2c4b45
    *v4 = 0x5cfcbdbc;
    int64_t v5 = v2 - 24; // 0x2c4b51
    int64_t * v6 = (int64_t *)v5; // 0x2c4b5c
    int64_t v7 = *(int64_t *)(v2 + 24); // 0x2c4b62
    int64_t * v8 = (int64_t *)(v2 - 16); // 0x2c4b62
    *v8 = v7;
    *v6 = v7;
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x2c4b69
    *v9 = v7;
    int64_t v10 = *(int64_t *)(v2 + 8); // 0x2c4b78
    *v8 = v10;
    *v6 = a4;
    *v9 = v5;
    *v6 = v3;
    *(int64_t *)(v2 - 40) = v7;
    *v9 = v7;
    *v4 = *v6;
    *v9 = v5;
    *v6 = v10;
    *(int64_t *)(v2 + 16) = *v8;
    *v8 = v2;
    *v8 = *v6;
    *v6 = *v4;
    *v8 = v2;
    return function_cf3c7(a1, a2, a3, *v8, a5, a6, 0x29a8a6);
}

// Address range: 0x2c4c2a - 0x2c4d9b
int64_t function_2c4c2a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2c4c2a
    int64_t v1; // bp-40, 0x2c4c2a
    int64_t v2 = (int64_t)&v1; // 0x2c4c88
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x2c4c9c
    int64_t * v4 = (int64_t *)v3; // 0x2c4c9d
    int64_t v5 = *(int64_t *)(v2 + 32); // 0x2c4ca0
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x2c4ca4
    *v6 = v2;
    int64_t * v7 = (int64_t *)(v2 + 8); // 0x2c4cbb
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x2c4cbf
    *v7 = v5;
    *v6 = 0x72ad3527;
    *v8 = 0x51d64276;
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x2c4d14
    *v9 = *v7;
    *(int64_t *)(v2 + 16) = *v6;
    *v6 = *v4;
    *v8 = *v6;
    *v9 = v3;
    *v6 = v2;
    return function_cf3c7(a1, a2, a3, a4, a5, a6, 0x29ab14);
}

// Address range: 0x2c4d9b - 0x2c4ef0
int64_t function_2c4d9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x72887e5a; // bp-40, 0x2c4e89
    int64_t v2 = (int64_t)&v1; // 0x2c4ebc
    *(int64_t *)(v2 - 8) = 0x72887e5a;
    *(int64_t *)(v2 - 16) = v2;
    int64_t v3; // 0x2c4d9b
    return function_cf3c7(a1, a2, a3, a4, v3, v3, 0x29af53);
}

// Address range: 0x33a87b - 0x33a98a
int64_t function_33a87b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 + 89); // 0x33a87b
    int64_t v2; // 0x33a87b
    *v1 = *v1 | (char)v2;
    return function_c4258(a1, a2, a3, a4, v2);
}

// Address range: 0x33a98a - 0x33aae1
int64_t function_33a98a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x33a98a
    int64_t v1; // 0x33a98a
    return function_c4258(a1, a2, a3, a4, v1);
}

// Address range: 0x33aae1 - 0x33ac35
int64_t function_33aae1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x33aae1
    bool v1; // 0x33aae1
    int64_t v2 = 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x33aae1
    int64_t v3 = v2; // bp-48, 0x33ab60
    int64_t v4 = (int64_t)&v3; // 0x33abb5
    int64_t * v5 = (int64_t *)(v4 - 16); // 0x33abc1
    int64_t * v6 = (int64_t *)(v4 - 24); // 0x33abc6
    *v6 = a5;
    *v5 = v2;
    int64_t * v7 = (int64_t *)(v4 - 8); // 0x33abd5
    *(int64_t *)(v4 + 8) = *v7;
    *v6 = a3;
    *v5 = a3;
    *(int64_t *)(v4 + 24) = *v7;
    *v7 = v3;
    *v5 = v4;
    *v7 = v3;
    *v5 = v3;
    return function_c4258(310, a2, a3, a3, *v6);
}

// Address range: 0x33ac35 - 0x33ae27
int64_t function_33ac35(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x33ac35
    int64_t v1; // bp-48, 0x33ac35
    v1 = (int64_t)&v1;
    int64_t v2; // bp-40, 0x33ac35
    int64_t v3 = (int64_t)&v2; // 0x33ad1a
    int64_t v4 = *(int64_t *)(v3 + 32); // 0x33ad26
    int64_t v5 = v3 - 8; // 0x33ad26
    int64_t * v6 = (int64_t *)v5; // 0x33ad26
    *v6 = v4;
    int64_t v7 = v3 - 16; // 0x33ad2e
    int64_t * v8 = (int64_t *)v7; // 0x33ad2e
    int64_t * v9 = (int64_t *)(v3 - 24); // 0x33ad37
    int64_t * v10 = (int64_t *)(v3 - 32); // 0x33ad4e
    *v10 = a2;
    *v8 = v3;
    int64_t v11 = *(int64_t *)(v3 + 8); // 0x33ad75
    *v8 = v11;
    *v9 = v5;
    *v10 = 0x10ebaec6;
    *(int64_t *)(v3 - 40) = v4;
    *v6 = *v9;
    *v9 = a4;
    *v10 = v11;
    *(int64_t *)(v3 + 16) = v11;
    *v8 = a3;
    *v9 = v7;
    *v8 = v3;
    *v6 = v2;
    *v8 = v3;
    int64_t v12; // 0x33ac35
    return function_c4258(a1, a2, *v8, *v9, v12);
}

// Address range: 0x33ae27 - 0x33af4b
int64_t function_33ae27(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x33ae27
    int64_t v1; // 0x33ae27
    return function_c4258(a1, a2, a3, a4, v1);
}

// Address range: 0x33af4b - 0x33b07c
int64_t function_33af4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x3059147c; // bp-32, 0x33b011
    int64_t v2 = (int64_t)&v1; // 0x33b049
    *(int64_t *)(v2 - 8) = 0x3059147c;
    *(int64_t *)(v2 - 16) = v2;
    return function_c4258(a1, a2, a3, a4, a5);
}

// Address range: 0x33b07c - 0x33b1bc
int64_t function_33b07c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x33b07c
    int64_t v1; // bp-24, 0x33b07c
    int64_t v2 = (int64_t)&v1; // 0x33b12b
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x33b141
    int64_t v4 = *v3; // 0x33b141
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x33b141
    *v5 = v4;
    int64_t v6 = v2 - 16; // 0x33b145
    int64_t * v7 = (int64_t *)v6; // 0x33b145
    *v7 = a1;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x33b14a
    *v8 = v6;
    *v7 = v2;
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x33b16b
    *v9 = a6;
    *v8 = a6;
    v1 = *v7;
    *v7 = 0x73044360;
    *v9 = v4;
    *v8 = v4;
    *v3 = *v7;
    *v7 = *v5;
    *v5 = v1;
    *v7 = v1;
    return function_c4258(*v7, a2, a3, a6, a5);
}

// Address range: 0x39d1b1 - 0x39d1b2
int64_t function_39d1b1(void) {
    // 0x39d1b1
    int64_t result; // 0x39d1b1
    return result;
}

// Address range: 0x39d1b2 - 0x39d279
int64_t function_39d1b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x39d1b2
    int64_t v1; // 0x39d1b2
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t v3; // 0x39d1b2
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    int64_t v5; // 0x39d1b2
    int64_t v6 = (int64_t)&v5; // 0x39d23d
    *(int64_t *)(v6 - 16) = v6;
    return function_cf3c7(a1, a2, a3, a4, a5, a6, v5);
}

// Address range: 0x39d279 - 0x39d40a
int64_t function_39d279(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x39d279
    int64_t v1; // bp-64, 0x39d279
    int64_t v2 = (int64_t)&v1; // 0x39d366
    int64_t v3 = v2 + 16; // 0x39d372
    bool v4; // 0x39d279
    *(int64_t *)v3 = 0x4000 * (int64_t)v4 | 2048 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4 | 2;
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x39d380
    v1 = 0x39c2c2;
    *(int64_t *)(v2 + 32) = 0x39c2c2;
    int64_t v6 = v2 + 8; // 0x39d394
    int64_t * v7 = (int64_t *)v6; // 0x39d398
    v1 = *v7;
    *v5 = v6;
    v1 = a1;
    *v5 = *v7;
    *(int64_t *)(v2 - 16) = a4;
    int64_t v8 = v1; // 0x39d400
    v1 = v3;
    int64_t v9; // 0x39d279
    return function_cf3c7(v8, a2, a3, a4, a5, v9, 0x32a1e024);
}

// Address range: 0x39d40a - 0x39d556
int64_t function_39d40a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x39d40a
    int64_t v1; // 0x39d40a
    bool v2; // 0x39d40a
    return function_cf3c7(a1, a2, a3, a4, v1, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x39d556 - 0x39d6d8
int64_t function_39d556(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x39d556
    return function_cf3c7(a1, a2, a3, a4, a5, a6, 0x2fddcc2a);
}

// Address range: 0x39d6d8 - 0x39d8c5
int64_t function_39d6d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x39d6d8
    int64_t v1; // bp-32, 0x39d6d8
    int64_t v2 = (int64_t)&v1; // 0x39d79a
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x39d7bb
    int64_t v4 = v2 - 8; // 0x39d7bb
    int64_t * v5 = (int64_t *)v4; // 0x39d7bb
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x39d7bf
    *v6 = v2;
    int64_t v7 = *(int64_t *)(v2 + 8); // 0x39d7de
    *v6 = v7;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x39d7e6
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x39d7ef
    *v9 = v4;
    int64_t v10 = *v8; // 0x39d802
    *(int64_t *)(v2 - 40) = v10;
    *v8 = a5;
    *v9 = v3;
    *v5 = v3;
    *v8 = a1;
    *v9 = v10;
    *(int64_t *)(v2 + 16) = v7;
    *v8 = a2;
    *v9 = *v8;
    *v8 = v4;
    int64_t v11; // 0x39d6d8
    return function_cf3c7(*v8, *v8, a3, a4, *v9, a6, v11);
}

// Address range: 0x39d8c5 - 0x39da08
int64_t function_39d8c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x39d8c5
    int64_t v1; // 0x39d8c5
    bool v2; // 0x39d8c5
    return function_cf3c7(a1, a2, a3, a4, v1, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x39da08 - 0x39da0d
int64_t function_39da08(void) {
    // 0x39da08
    int64_t result; // 0x39da08
    return result;
}

// Address range: 0x39da39 - 0x39da3a
int64_t function_39da39(void) {
    // 0x39da39
    int64_t result; // 0x39da39
    return result;
}

// Address range: 0x39da3e - 0x39da4e
int64_t function_39da3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39da3e
    int64_t v1; // 0x39da3e
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2;
    int64_t v3 = unknown_7486bc46(); // 0x39da40
    uint32_t v4 = *(int32_t *)(2 * a4 + 19); // 0x39da47
    return (v3 & 0xffffffff | 0x100000000 * a3) / (int64_t)v4 & 0xffffffff;
}

// Address range: 0x39da64 - 0x39da72
int64_t function_39da64(int64_t a1, int64_t a2) {
    // 0x39da64
    __asm_int(-37);
    return function_ffffffffe73bc2fb();
}

// Address range: 0x39da76 - 0x39da77
int64_t function_39da76(int64_t a1) {
    // 0x39da76
    int64_t result; // 0x39da76
    return result;
}

// Address range: 0x39da7d - 0x39da80
int64_t function_39da7d(int64_t a1) {
    // 0x39da7d
    int64_t result; // 0x39da7d
    return result;
}

// Address range: 0x39da84 - 0x39da85
int64_t function_39da84(void) {
    // 0x39da84
    int64_t result; // 0x39da84
    return result;
}

// Address range: 0x39dab4 - 0x39dada
int64_t function_39dab4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x39dab4
    int64_t v1; // 0x39dab4
    *(char *)a2 = (char)v1 | 1;
    int32_t v2 = a3; // 0x39dab8
    int64_t v3; // 0x39dab4
    *(int32_t *)a2 = *(int32_t *)&v3 + v2;
    int64_t v4 = unknown_ffffffffc1b1dfc0(); // 0x39daba
    int32_t * v5 = (int32_t *)v4; // 0x39dabf
    *v5 = *v5 + v2;
    int32_t * v6 = (int32_t *)(a4 - 8); // 0x39dac8
    int32_t v7 = *v6 + (int32_t)v1; // 0x39dac8
    unsigned char v8 = llvm_ctpop_i8((char)v7); // 0x39dac8
    *v6 = v7;
    int64_t result = v4; // 0x39dacb
    if (v8 % 2 == 0) {
        result = function_39da84();
    }
    // 0x39dacd
    *(char *)(v1 - 0x1cf6f81a) = (char)(a3 / 256);
    char * v9 = (char *)(a4 + 0xa01e800); // 0x39dad3
    *v9 = *v9 + (char)a3;
    return result;
}

// Address range: 0x39db00 - 0x39db03
int64_t function_39db00(void) {
    // 0x39db00
    int64_t result; // 0x39db00
    return result;
}
