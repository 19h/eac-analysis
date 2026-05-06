/*
 * Targeted RetDec C for native executable gap queue batch 760.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xfa59c-0xfa79c rank=- name=- kind=- bytes=- uncovered=-
 *   0xfa79c-0xfa99c rank=- name=- kind=- bytes=- uncovered=-
 *   0xfa99c-0xfab9c rank=- name=- kind=- bytes=- uncovered=-
 *   0x375d6a-0x375f6a rank=- name=- kind=- bytes=- uncovered=-
 *   0x37606a-0x37616a rank=- name=- kind=- bytes=- uncovered=-
 *   0x37616a-0x37626a rank=- name=- kind=- bytes=- uncovered=-
 *   0x37636a-0x37656a rank=- name=- kind=- bytes=- uncovered=-
 *   0x37656a-0x37676a rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_2e759d81();
int64_t function_375d4b();
int64_t function_375d5e();
int64_t function_375d6a(int64_t a1);
int64_t function_375db5(void);
int64_t function_375dcd(int64_t a1);
int64_t function_375e1d(void);
int64_t function_375ed6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_375f26(int64_t a1);
int64_t function_375f2b(void);
int64_t function_37606a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_37612e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_376226(void);
int64_t function_37636a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3763a6(int64_t a1);
int64_t function_3763bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3763e9(int64_t a1);
int64_t function_376488(int64_t a1);
int64_t function_376495(void);
int64_t function_3764c8(int64_t a1);
int64_t function_3764e3(void);
int64_t function_376578(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_376582(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_37660f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_5a45a983();
int64_t function_fa573();
int64_t function_fa59c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fa5cd(void);
int64_t function_fa5d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fa625(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fa6cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fa76c(void);
int64_t function_fa77f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_fa79b(void);
int64_t function_fa866(void);
int64_t function_fa868(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_fa889(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fa890(int64_t a1, int64_t a2, int64_t a3);
int64_t function_fa8df(void);
int64_t function_fa90e(void);
int64_t function_fa952(void);
int64_t function_fa9b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t result2);
int64_t function_faac1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_fab7e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_ffffffffb1066b26();
int64_t function_ffffffffbd219e6a();
int64_t unknown_110b65c9();
int64_t unknown_13c44ec7();
int64_t unknown_17a3c1fb();
int64_t unknown_24897071();
int64_t unknown_30335355();
int64_t unknown_39563085();
int64_t unknown_3d394e19();
int64_t unknown_3d731181();
int64_t unknown_3e33a704();
int64_t unknown_48c8af0();
int64_t unknown_ffffffff88ea9787();
int64_t unknown_ffffffff8cd1c2fb();
int64_t unknown_ffffffff9238a0c3();
int64_t unknown_ffffffff9de24b81();
int64_t unknown_ffffffffb865ec76();
int64_t unknown_ffffffffbb1651cd();
int64_t unknown_ffffffffcd7701c4();
int64_t unknown_ffffffffd8c852dd();
int64_t unknown_fffffffffa1f3876();

// Address range: 0xfa59c - 0xfa5b0
int64_t function_fa59c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 - 0x11fec256); // 0xfa5a1
    *v1 = *v1 + (char)a4;
    return function_fa573();
}

// Address range: 0xfa5cd - 0xfa5d3
int64_t function_fa5cd(void) {
    // 0xfa5cd
    int64_t result; // 0xfa5cd
    return result;
}

// Address range: 0xfa5d3 - 0xfa624
int64_t function_fa5d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0xfa5d3
    int32_t * v3 = (int32_t *)(v2 - 74); // 0xfa5d3
    *v3 = *v3 + (int32_t)v2;
    int64_t v4 = a4 & -256 | (int64_t)(*(char *)&v1 & (char)a4); // 0xfa5db
    int32_t * v5 = (int32_t *)v4; // 0xfa5dd
    int32_t v6 = *v5 + 0x7cfbab26; // 0xfa5dd
    *v5 = v6;
    if (v6 == 0 || v4 == 1) {
        int32_t * v7 = (int32_t *)(v4 - 108); // 0xfa5e7
        *v7 = *v7 / 2;
        return v2 ^ 200;
    }
    // 0xfa5ef
    *(char *)0x59820634 = __asm_insb((int16_t)v1);
    return v2 & 0xffffffff;
}

// Address range: 0xfa625 - 0xfa62f
int64_t function_fa625(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xfa625
    return a2 & 0xffffffde | 33;
}

// Address range: 0xfa6cf - 0xfa769
int64_t function_fa6cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)-0x50b9e222; // 0xfa6d7
    int64_t v2; // 0xfa6cf
    *(char *)-0x50b9e222 = v1 + (char)((uint64_t)v2 / 256);
    int64_t v3 = a1; // bp-16, 0xfa6e0
    __asm_fldenv(*(int224_t *)0x2a361475);
    int32_t * v4 = (int32_t *)(a3 + (int64_t)&g1); // 0xfa6f0
    *v4 = *v4 + (int32_t)(int64_t)&v3;
    return function_ffffffffb1066b26();
}

// Address range: 0xfa76c - 0xfa76d
int64_t function_fa76c(void) {
    // 0xfa76c
    int64_t result; // 0xfa76c
    return result;
}

// Address range: 0xfa77f - 0xfa79b
int64_t function_fa77f(int64_t a1, int64_t a2, int64_t a3) {
    // 0xfa77f
    bool v1; // 0xfa77f
    if (v1) {
        function_fa76c();
    }
    // 0xfa781
    unknown_ffffffff88ea9787();
    return function_5a45a983();
}

// Address range: 0xfa79b - 0xfa7a1
int64_t function_fa79b(void) {
    // 0xfa79b
    return unknown_30335355();
}

// Address range: 0xfa866 - 0xfa868
int64_t function_fa866(void) {
    // 0xfa866
    int64_t v1; // 0xfa866
    return function_fa889(v1, v1, v1, v1);
}

// Address range: 0xfa868 - 0xfa889
int64_t function_fa868(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int32_t * v2 = (int32_t *)(a2 + 0x7bc09a8c); // 0xfa86d
    *v2 = *v2 + (int32_t)a3;
    v1 = a5;
    *(int32_t *)((a3 | a1) & 0xffffffff) = __asm_insd((int16_t)a3);
    return unknown_ffffffff9de24b81() + (int64_t)&v1 & 0xffffffff;
}

// Address range: 0xfa889 - 0xfa88f
int64_t function_fa889(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xfa889
    return a3 & 0xffffffff;
}

// Address range: 0xfa890 - 0xfa8a3
int64_t function_fa890(int64_t a1, int64_t a2, int64_t a3) {
    // 0xfa890
    int64_t v1; // 0xfa890
    int64_t result = v1 & 0xffffffff; // 0xfa890
    int32_t * v2 = (int32_t *)(a2 - 117 + 8 * result); // 0xfa898
    bool v3; // 0xfa890
    *v2 = *v2 + (int32_t)((v3 ? 0xfffffffc : 4) + a1);
    return result;
}

// Address range: 0xfa8df - 0xfa8e0
int64_t function_fa8df(void) {
    // 0xfa8df
    int64_t result; // 0xfa8df
    return result;
}

// Address range: 0xfa90e - 0xfa912
int64_t function_fa90e(void) {
    // 0xfa90e
    int64_t result; // 0xfa90e
    return result;
}

// Address range: 0xfa952 - 0xfa959
int64_t function_fa952(void) {
    // 0xfa952
    return function_fa8df();
}

// Address range: 0xfa9b4 - 0xfaabd
int64_t function_fa9b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t result2) {
    // 0xfa9b4
    int64_t v1; // 0xfa9b4
    int64_t v2 = v1;
    uint64_t v3 = v1;
    int64_t v4 = a4;
    char * v5 = (char *)(v1 - 90); // 0xfa9b4
    bool v6; // 0xfa9b4
    *v5 = (char)v6 + (char)v1 + *v5;
    int64_t v7 = a2 & 0xffffffff; // 0xfa9b8
    *(int32_t *)a1 = *(int32_t *)v7;
    int64_t v8 = v6 ? -4 : 4; // 0xfa9c3
    int64_t v9 = v8 + v7; // 0xfa9c3
    if (a4 != 0) {
        // 0xfa9c6
        __asm_in_135(-107);
        int64_t result = (int64_t)*(int32_t *)v9; // 0xfa9c9
        unsigned char v10 = *(char *)&v4; // 0xfa9ca
        unsigned char v11 = (char)v4; // 0xfa9ca
        *(char *)v4 = v10 - v11;
        char * v12 = (char *)result; // 0xfa9cd
        *v12 = *v12 - (char)(v10 < v11);
        return result;
    }
    int64_t v13 = a3 & -0xff01 | (int64_t)&g2; // 0xfa9c1
    int64_t v14 = v3 & -256 | (int64_t)*(char *)(v3 % 256 + v2); // 0xfa9da
    if ((int32_t)v3 != 0x609b9f01) {
        uint32_t v15 = (int32_t)v13 - *(int32_t *)v14; // 0xfa9df
        char * v16 = (char *)(int64_t)v15; // 0xfa9e5
        *v16 = *v16 | (char)(v15 / 256);
        int32_t * v17 = (int32_t *)a6; // 0xfa9e7
        *v17 = *v17 - 24;
        int32_t * v18 = (int32_t *)result2; // 0xfa9ea
        *v18 = *v18 + (int32_t)result2;
        return result2;
    }
    if ((v14 & 0x399def8f) == 0) {
        int32_t * v19 = (int32_t *)(v13 - 124); // 0xfaa78
        *v19 = *v19 + (int32_t)v14;
        int64_t v20 = unknown_3d731181(); // 0xfaa7b
        int32_t * v21 = (int32_t *)(v20 + 57); // 0xfaa80
        *v21 = *v21 + (int32_t)v13;
        return v20 & -256 | (int64_t)__asm_in_136((int16_t)v13);
    }
    char v22 = *(char *)(v8 + a1); // 0xfa9fb
    unsigned char v23 = *(char *)0x1a6aa0c; // 0xfaa04
    unsigned char v24 = *(char *)v9; // 0xfaa0c
    char * v25 = (char *)((v2 & -256 | (int64_t)(v22 + (char)v2)) + 0x26f782); // 0xfaa15
    char v26 = *v25; // 0xfaa15
    char v27 = v4 / 256; // 0xfaa15
    char v28 = v26 + v27; // 0xfaa15
    *v25 = v28;
    if (v28 < 0 == ((v28 ^ v26) & (v28 ^ v27)) < 0 != v28 != 0) {
        // 0xfaa1d
        return __asm_iretd();
    }
    char v29 = v23 + 79; // 0xfaa04
    return v3 & -0x10000 | (int64_t)v24 | 256 * (64 * (int64_t)(v29 == 0) | (int64_t)(v23 < 177) | 128 * (int64_t)(v29 < 0) | 16 * (int64_t)(v23 % 16 > 16) | 4 * (int64_t)(llvm_ctpop_i8(v29) % 2 == 0)) | 512;
}

// Address range: 0xfaac1 - 0xfab7d
int64_t function_faac1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_13c44ec7(); // 0xfaac1
    int64_t v2 = (2 * v1 & 254 | v1 & 0xffffff00) + 0xe8cad45c; // 0xfaac8
    int64_t v3 = v2 & 0xfffffffe; // 0xfaac8
    int32_t v4 = v2; // 0xfaacd
    *(int32_t *)0x70caa98a = *(int32_t *)0x70caa98a + v4;
    unsigned char v5 = *(char *)v3; // 0xfaad3
    unsigned char v6 = (char)v2; // 0xfaad3
    uint64_t v7 = a4 - 1; // 0xfaad5
    int64_t v8; // 0xfaac1
    if (v7 != 0 != (v5 == v6)) {
        int64_t v9 = unknown_ffffffffd8c852dd() & -256; // 0xfaadc
        char * v10 = (char *)(v9 | (int64_t)*(char *)0x6d01e82bd068f4c1); // 0xfaae7
        *v10 = 2 * *v10;
        char v11 = __asm_in(8); // 0xfaaf1
        int32_t * v12 = (int32_t *)(2 * v8 + 0x5c0a0aa + ((256 * (v7 / 256 + a3 + (int64_t)(v5 < v6)) & 0xff00 | v7 & 0xffff00ff) + v8 & 0xffffffff)); // 0xfaaf9
        *v12 = *v12 + (int32_t)v8;
        return (v9 | (int64_t)v11) + 0xe87856b2 & 0xffffffff;
    }
    // 0xfab4e
    *(int32_t *)a1 = v4;
    bool v13; // 0xfaac1
    int64_t v14 = v13 ? -4 : 4; // 0xfab4e
    uint64_t v15 = v8 + a3; // 0xfab4f
    int64_t v16 = v3 ^ 0xe80fb21e; // 0xfab5d
    int32_t * v17 = (int32_t *)(v8 + 74); // 0xfab62
    *v17 = *v17 + (int32_t)v7;
    char * v18 = (char *)v16; // 0xfab65
    unsigned char v19 = *v18; // 0xfab65
    unsigned char v20 = (char)v16; // 0xfab65
    *v18 = v19 - v20;
    int64_t v21 = a2 + 0xa40d01e8 + (int64_t)(v19 < v20); // 0xfab69
    char * v22 = (char *)(v16 & 0xffffff00 | 42); // 0xfab6b
    *v22 = *v22 - (char)(v7 / 256);
    char * v23 = (char *)((v21 & 0xffffffff) + 80); // 0xfab6d
    *v23 = *v23 + (char)v15;
    unknown_fffffffffa1f3876(v14 + a1, (int32_t)v21, v15 % 256 | a3 & -256, v7);
    return (int64_t)(*(int32_t *)v7 & (int32_t)unknown_ffffffffbb1651cd());
}

// Address range: 0xfab7e - 0xfab99
int64_t function_fab7e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0xfab7e
    unknown_39563085();
    int64_t v1; // 0xfab7e
    int32_t * v2 = (int32_t *)(v1 - 0x1fe17bc); // 0xfab8a
    char * v3 = (char *)(a3 - 48 + 4 * a3); // 0xfab93
    while (true) {
        uint32_t v4 = *v2; // 0xfab8a
        uint32_t v5 = v4 + (int32_t)v1; // 0xfab8a
        *v2 = v5;
        *v3 = *v3 + (char)(a3 / 256) + (char)(v5 < v4);
    }
}

// Address range: 0x375d6a - 0x375d70
int64_t function_375d6a(int64_t a1) {
    // 0x375d6a
    return function_375d5e();
}

// Address range: 0x375db5 - 0x375dc5
int64_t function_375db5(void) {
    // 0x375db5
    bool v1; // 0x375db5
    if (v1) {
        function_375d4b();
    }
    // 0x375dc0
    return function_ffffffffbd219e6a();
}

// Address range: 0x375dcd - 0x375dcf
int64_t function_375dcd(int64_t a1) {
    // 0x375dcd
    int64_t result; // 0x375dcd
    return result;
}

// Address range: 0x375e1d - 0x375e20
int64_t function_375e1d(void) {
    // 0x375e1d
    int64_t result; // 0x375e1d
    return result;
}

// Address range: 0x375ed6 - 0x375ee7
int64_t function_375ed6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x375ed6
    int64_t v1; // 0x375ed6
    int32_t * v2 = (int32_t *)(v1 + 0xa9670c6); // 0x375edc
    *v2 = *v2 + (int32_t)a3;
    return function_2e759d81();
}

// Address range: 0x375f26 - 0x375f27
int64_t function_375f26(int64_t a1) {
    // 0x375f26
    int64_t result; // 0x375f26
    return result;
}

// Address range: 0x375f2b - 0x375f2d
int64_t function_375f2b(void) {
    // 0x375f2b
    int64_t result; // 0x375f2b
    return result;
}

// Address range: 0x37606a - 0x3760b0
int64_t function_37606a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x37606a
    int64_t v1; // 0x37606a
    *(int32_t *)a4 = 256 * (int32_t)v1;
    int64_t v2 = 2 * v1; // 0x37606d
    int32_t v3 = a1; // 0x37606f
    *(int32_t *)-0x179ac28a = *(int32_t *)-0x179ac28a + v3;
    int32_t * v4 = (int32_t *)((v2 & 0xffffffff) + 65); // 0x376075
    uint32_t v5 = *v4; // 0x376075
    uint32_t v6 = v5 + (int32_t)a4; // 0x376075
    *v4 = v6;
    int64_t v7; // 0x37606a
    char v8 = *(char *)&v7; // 0x376078
    *(char *)a1 = v8 + (char)(v1 / 256) + (char)(v6 < v5);
    char v9 = __asm_in(-77); // 0x37607a
    int64_t v10 = v2 & 0xffffff00 | (int64_t)v9; // 0x37607a
    char * v11 = (char *)(a4 + 0x697e199f); // 0x37607c
    *v11 = *v11 + (char)v1;
    uint16_t v12 = *(int16_t *)(int64_t)(*(int32_t *)(v1 - 18) ^ v3); // 0x376085
    char * v13 = (char *)(5 * a3); // 0x376087
    *v13 = *v13 - v9 + (char)(v12 > (int16_t)v10);
    int64_t v14; // 0x37606a
    __asm_outsd((int16_t)a3, *(int32_t *)&v14);
    *(int32_t *)0x5ffd5f94 = *(int32_t *)0x5ffd5f94 >> 17;
    int64_t result = v10 & 0xffffffff ^ 0x2030dca0; // 0x376098
    *(char *)0x62f0cd17013d4529 = (char)result;
    int32_t * v15 = (int32_t *)result; // 0x3760a6
    *v15 = *v15 + (int32_t)result;
    *(char *)0x3d3760ae = *(char *)0x3d3760ae + (char)(a4 / 256);
    int64_t v16; // 0x37606a
    int32_t v17 = *(int32_t *)&v16; // 0x3760ae
    int64_t v18; // 0x37606a
    *(int32_t *)a3 = v17 + (int32_t)(int64_t)&v18;
    return result;
}

// Address range: 0x37612e - 0x3761de
int64_t function_37612e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x37612e
    int64_t v1; // 0x37612e
    int32_t v2 = v1; // 0x37619b
    __asm_rcl(*(char *)(v1 - 35));
    int864_t v3 = *(int864_t *)((v1 % 256 | (int64_t)(0x10000 * v2 >> 16 & -256)) + 0x46cfa00a); // 0x3761a8
    __asm_frstor(v3);
    __asm_wait();
    if (v2 >= 0xf7b28901) {
        // 0x376168
        __asm_rcl((char)v1);
        *(char *)-0x171c308c = *(char *)-0x171c308c + (char)(v1 / 256);
        return __asm_in_135(20);
    }
    int64_t v4 = __asm_hlt(); // 0x3761b7
    if (v2 > -0x84d76ff) {
        // 0x3761bb
        return __asm_sti();
    }
    unsigned char v5 = (char)v1;
    uint64_t v6 = v4 - ((int32_t)v4 < 0x24a20001 ? 59 : 58); // 0x3761d4
    int64_t result = v6 % 256 | v4 & -256; // 0x3761d4
    *(char *)v1 = v5 + 10;
    char * v7 = (char *)result; // 0x3761dc
    *v7 = (char)(v5 < 246) - (char)v6 + *v7;
    return result;
}

// Address range: 0x376226 - 0x376228
int64_t function_376226(void) {
    // 0x376226
    int64_t result; // 0x376226
    return result;
}

// Address range: 0x37636a - 0x376388
int64_t function_37636a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = __asm_in_133((int16_t)a3); // 0x37636e
    uint64_t v2 = unknown_ffffffffb865ec76(); // 0x376370
    int64_t v3; // 0x37636a
    char * v4 = (char *)(v3 - 0x459f66d2); // 0x376375
    *v4 = *v4 ^ -90;
    uint32_t v5 = v1 + (int32_t)a3; // 0x37637e
    return ((int64_t)v5 + 136 + v2 / 256) % 256 | (int64_t)(v5 & -256);
}

// Address range: 0x3763a6 - 0x3763ac
int64_t function_3763a6(int64_t a1) {
    // 0x3763a6
    int64_t v1; // 0x3763a6
    bool v2; // 0x3763a6
    return v1 + 0x826ab927 + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x3763bd - 0x3763d6
int64_t function_3763bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3763bd
    unknown_ffffffff9238a0c3();
    unknown_110b65c9();
    int32_t result = __asm_in_135(91); // 0x3763cf
    *(char *)a1 = __asm_insb((int16_t)a3);
    return result;
}

// Address range: 0x3763e9 - 0x3763ec
int64_t function_3763e9(int64_t a1) {
    // 0x3763e9
    int64_t result; // 0x3763e9
    return result;
}

// Address range: 0x376488 - 0x376489
int64_t function_376488(int64_t a1) {
    // 0x376488
    int64_t result; // 0x376488
    return result;
}

// Address range: 0x376495 - 0x376498
int64_t function_376495(void) {
    // 0x376495
    int64_t result; // 0x376495
    return result;
}

// Address range: 0x3764c8 - 0x3764c9
int64_t function_3764c8(int64_t a1) {
    // 0x3764c8
    int64_t result; // 0x3764c8
    return result;
}

// Address range: 0x3764e3 - 0x3764e6
int64_t function_3764e3(void) {
    // 0x3764e3
    int64_t result; // 0x3764e3
    return result;
}

// Address range: 0x376578 - 0x376582
int64_t function_376578(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x376578
    int64_t v1; // 0x376578
    *(int32_t *)a4 = 2 * (int32_t)v1;
    return __asm_int1();
}

// Address range: 0x376582 - 0x37660e
int64_t function_376582(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x376582
    int64_t result; // 0x376582
    // 0x376585
    return result;
    unsigned char v1 = (char)result;
    *(char *)result = v1 / 128 | 2 * v1;
    *(char *)(a2 + 25) = (char)(a4 / 256);
    unknown_17a3c1fb();
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return a1 & 0xffffffff;
}

// Address range: 0x37660f - 0x376768
int64_t function_37660f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a1;
    bool v3; // 0x37660f
    if (!v3) {
        // 0x376613
        return unknown_3d394e19();
    }
    uint32_t v4 = (int32_t)a2;
    int64_t v5 = a1; // bp-8, 0x376671
    int64_t v6; // 0x37660f
    if ((char)v6 >= 164) {
        int32_t * v7 = (int32_t *)(a1 - 54); // 0x37665f
        *v7 = *v7 + v4;
        return unknown_24897071();
    }
    uint32_t v8 = *(int32_t *)-0x32c6b182; // 0x376677
    uint32_t v9 = v8 + (int32_t)a1; // 0x376677
    *(int32_t *)-0x32c6b182 = v9;
    *(int32_t *)a2 = 0x80000000 * (int32_t)(v9 < v8) | v4 / 2;
    uint32_t v10 = (int32_t)a4 % 32; // 0x376680
    if (v10 != 0) {
        uint32_t v11 = *(int32_t *)&v2; // 0x376680
        *(int32_t *)v2 = v11 << v10 | (int32_t)(v4 % 2 != 0) << v10 - 1 | (int32_t)((int64_t)v11 >> (int64_t)(33 - v10));
    }
    int64_t v12 = a4 & -256 | 168; // 0x376682
    int64_t v13 = (v6 + 92) % 256 + a4 / 256; // 0x3766c6
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v12;
    *(char *)v1 = *(char *)&v1 + (char)v13;
    uint32_t v14 = (int32_t)v6 >> 31; // 0x3766d1
    int64_t v15 = (int64_t)&v5; // 0x3766ca
    int64_t v16 = v12;
    v1 = v14;
    *(int32_t *)v2 = __asm_insd((int16_t)v14);
    int64_t v17 = v16 & (256 * v13 | -0xff01); // 0x3766d3
    v15 -= 8;
    *(int64_t *)v15 = -24;
    int32_t * v18 = (int32_t *)v17; // 0x3766de
    int32_t v19 = *v18; // 0x3766de
    int32_t v20 = v19 + (int32_t)v17; // 0x3766de
    *v18 = v20;
    while (v20 >= 0) {
        // 0x3766cd
        v16 = v17;
        v1 = v14;
        *(int32_t *)v2 = __asm_insd((int16_t)v14);
        v17 = v16 & (256 * v13 | -0xff01);
        v15 -= 8;
        *(int64_t *)v15 = -24;
        v18 = (int32_t *)v17;
        v19 = *v18;
        v20 = v19 + (int32_t)v17;
        *v18 = v20;
    }
    if (v17 != 1) {
        // 0x3766be
        return unknown_ffffffffcd7701c4() & -256 | 140;
    }
    // 0x3766ea
    unknown_48c8af0();
    int64_t result = __asm_wait(); // 0x3766ef
    if (((v20 ^ v19) & (v20 ^ (int32_t)v16)) < 0) {
        // 0x376760
        return result;
    }
    // 0x3766f2
    unknown_ffffffff8cd1c2fb();
    return unknown_3e33a704();
}
