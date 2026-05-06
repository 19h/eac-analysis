/*
 * Targeted RetDec C for native executable gap queue batch 846.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x13cc68-0x13ce68 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13ce68-0x13d068 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13d468-0x13d668 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42521f-0x42541f rank=- name=- kind=- bytes=- uncovered=-
 *   0x42541f-0x42561f rank=- name=- kind=- bytes=- uncovered=-
 *   0x42561f-0x42581f rank=- name=- kind=- bytes=- uncovered=-
 *   0x42581f-0x425a1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x425a1f-0x425c1f rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1290de53();
int64_t function_13cc24();
int64_t function_13cc68(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_13cd15(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13cd43(void);
int64_t function_13cdbc(void);
int64_t function_13cdf3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_13cf96(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13d021(int64_t a1);
int64_t function_13d041(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13d468(void);
int64_t function_13d47a(void);
int64_t function_13d4b8(int64_t a1);
int64_t function_13d4c6(int64_t a1);
int64_t function_13d4e1(int64_t a1);
int64_t function_13d562(void);
int64_t function_13d598(int64_t a1, int64_t a2, int64_t a3);
int64_t function_13d62c(void);
int64_t function_13d641(int64_t a1);
int64_t function_1f73542();
int64_t function_272e0843();
int64_t function_42521f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_42522f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4253d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4253e9(void);
int64_t function_425404(void);
int64_t function_42543f(void);
int64_t function_425450(int64_t a1);
int64_t function_4254b3(void);
int64_t function_4254c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_42551e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_4256d0(void);
int64_t function_425712(void);
int64_t function_425742(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_42587a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_42599d(int64_t a1);
int64_t function_4259f5(void);
int64_t function_425a00(void);
int64_t function_425a60(int64_t a1, int64_t a2, int64_t a3);
int64_t function_425a88(void);
int64_t function_425a97(void);
int64_t function_425aa9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_425bda(void);
int64_t function_42d06788();
int64_t function_7cb4c9c4();
int64_t function_ffffffffe3673a23();
int64_t function_ffffffffe85f8673();
int64_t unknown_1415098a();
int64_t unknown_19363318();
int64_t unknown_ffffffffbd25989c();
int64_t unknown_ffffffffd0a135ab();

// Address range: 0x13cc68 - 0x13cd09
int64_t function_13cc68(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x13cc68
    int64_t v1; // 0x13cc68
    uint64_t v2 = v1;
    uint64_t v3 = v1;
    if ((v3 & 150) != 0) {
        unsigned char v4 = (char)v3;
        unsigned char v5 = v4 + (char)a3; // 0x13ccea
        *(char *)v3 = v5;
        uint64_t v6 = v3 - (int64_t)(v5 < v4); // 0x13ccec
        int64_t result = v6 % 256 | v3 & -256; // 0x13ccec
        char v7 = v3 / 256; // 0x13ccfb
        int64_t v8 = 0xc3030223; // 0x13ccf6
        bool v9 = (int32_t)result < 0x4a112c01; // 0x13ccf6
        unsigned char v10 = (char)(v8 / 256); // 0x13ccfb
        char v11 = v9; // 0x13ccfb
        unsigned char v12 = v10 + v7; // 0x13ccfb
        unsigned char v13 = v12 + v11; // 0x13ccfb
        char v14 = v13 + v11; // 0x13ccfb
        v9 = v9 ? v13 <= v10 : v12 < v10;
        v8 = 256 * (int64_t)v13 | v8 & -0xff01;
        while (((v14 ^ v10) & (v14 ^ v7)) < 0) {
            // 0x13ccfb
            v10 = (char)(v8 / 256);
            v11 = v9;
            v12 = v10 + v7;
            v13 = v12 + v11;
            v14 = v13 + v11;
            v9 = v9 ? v13 <= v10 : v12 < v10;
            v8 = 256 * (int64_t)v13 | v8 & -0xff01;
        }
        // 0x13ccff
        *(char *)a1 = (char)v6;
        float80_t v15; // 0x13cc68
        *(int32_t *)(v8 - 65) = (int32_t)v15;
        *(char *)0x28e1350a = *(char *)0x28e1350a + (char)(v2 / 256);
        return result;
    }
    // 0x13cc6c
    bool v16; // 0x13cc68
    __asm_outsb((int16_t)a3, *(char *)((v16 ? -4 : 4) + a2));
    int64_t v17 = (v3 % 256 * (v2 % 256) | v3 & 0xffff0000) + (256 * v2 & 0xff00 | a3); // 0x13cc74
    int64_t v18 = v17 & 0xffffffff; // 0x13cc74
    int32_t * v19 = (int32_t *)(a4 - 11); // 0x13cc81
    uint32_t v20 = *v19; // 0x13cc81
    uint32_t v21 = v20 + (int32_t)a4; // 0x13cc81
    *v19 = v21;
    int64_t v22 = unknown_1415098a(); // 0x13cc84
    int64_t v23 = a4 - 256 * (v22 + (int64_t)(v21 < v20)) & 0xff00 | a4 & -0xff01; // 0x13cc89
    int32_t * v24 = (int32_t *)(v18 - 47); // 0x13cc8b
    uint32_t v25 = *v24; // 0x13cc8b
    int32_t v26 = v17; // 0x13cc8b
    uint32_t v27 = v25 + v26; // 0x13cc8b
    *v24 = v27;
    char * v28 = (char *)(v22 + 0x2402bb49); // 0x13cc8e
    *v28 = *v28 + (char)a4 + (char)(v27 < v25);
    *(int32_t *)v22 = v26;
    int16_t v29 = 256 * (int16_t)v22 >> 8; // 0x13cc96
    int64_t v30 = v22 & -0x10000 | (int64_t)(v29 * v29); // 0x13cc96
    int32_t * v31 = (int32_t *)(v18 + 0x409a0dc); // 0x13cc98
    *v31 = *v31 + (int32_t)v23;
    __asm_out(-26, (int32_t)v30);
    int64_t result2 = v30; // 0x13cca0
    if (v23 == 0) {
        result2 = function_13cc24();
    }
    // 0x13cca3
    return result2;
}

// Address range: 0x13cd15 - 0x13cd1e
int64_t function_13cd15(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13cd15
    int64_t result; // 0x13cd15
    return result;
}

// Address range: 0x13cd43 - 0x13cd44
int64_t function_13cd43(void) {
    // 0x13cd43
    int64_t result; // 0x13cd43
    return result;
}

// Address range: 0x13cdbc - 0x13cdbd
int64_t function_13cdbc(void) {
    // 0x13cdbc
    int64_t result; // 0x13cdbc
    return result;
}

// Address range: 0x13cdf3 - 0x13cf8c
int64_t function_13cdf3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t v2; // 0x13cdf3
    bool v3; // 0x13cdf3
    *(char *)a4 = (char)v2 - (char)a4 + (char)v3;
    __asm_hlt();
    unsigned char v4 = (char)(v2 / 256); // 0x13cdfe
    *(char *)-0x3b8c55fb = *(char *)-0x3b8c55fb + v4;
    int64_t v5 = __asm_sti(); // 0x13ce04
    int64_t v6; // 0x13cdf3
    *(int32_t *)a4 = *(int32_t *)&v6 - (int32_t)v5;
    int64_t v7 = a4 - 1; // 0x13ce09
    v6 = v7;
    if (v7 != 0) {
        // 0x13ce76
        *(int32_t *)0x54c13a948f013d00 = -0x4a73fed8;
        return 0xb58c0128;
    }
    int64_t v8 = v2 ^ a2;
    int64_t v9 = v8 & 0xffffffff; // 0x13ce07
    uint32_t v10 = (int32_t)v8 + (int32_t)v2; // 0x13ce0e
    int64_t v11 = v10; // bp-16, 0x13ce15
    if (v10 >= 1) {
        // 0x13ce1c
        *(char *)0x4dd55d23 = *(char *)0x4dd55d23 + v4;
        int64_t v12 = v5 + a3 & 0xffffff00 | (int64_t)*(char *)v9; // 0x13ce26
        int64_t result = v12; // 0x13ce29
        if (*(char *)v12 > v4) {
            result = function_13cdbc();
        }
        // 0x13ce2b
        return result;
    }
    // 0x13ce8a
    *(char *)v1 = __asm_insb((int16_t)a3);
    int32_t v13 = *(int32_t *)&v1; // 0x13ce8d
    int64_t result2 = (int64_t)*(int32_t *)v9; // 0x13ce8f
    char v14 = *(char *)-0x6f0aba67; // 0x13ce92
    *(char *)-0x6f0aba67 = v14 + (char)((((int32_t)v2 & 0xff00 | 96) - v13) / 256);
    uint64_t v15 = a3 / 256; // 0x13ce98
    if ((char)v15 < (char)a3) {
        int64_t v16 = v3 ? -4 : 4; // 0x13ce8f
        int64_t v17 = v16 + v9; // 0x13ce8f
        v11 = -0x76d4cd8c;
        *(int32_t *)v1 = *(int32_t *)v17;
        *(char *)v6 = 61;
        int32_t * v18 = (int32_t *)(v16 - 1 + v17); // 0x13ceac
        *v18 = *v18 + (int32_t)(int64_t)&v11;
        return result2;
    }
    // 0x13cecf
    if (v6 == 0) {
        // 0x13cebd
        *(int32_t *)0xdbe0c4 = *(int32_t *)0xdbe0c4 + (int32_t)v1;
        return result2;
    }
    int64_t v19 = 256 * (v15 - a3) & 0xff00 | a3 & -0xff01; // 0x13ce98
    int32_t * v20 = (int32_t *)(result2 - 43); // 0x13ced5
    *v20 = *v20 + (int32_t)v19;
    *(char *)v19 = (char)v6;
    *(char *)v1 = __asm_insb((int16_t)v19);
    return result2;
}

// Address range: 0x13cf96 - 0x13d002
int64_t function_13cf96(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x13cf96
    unknown_ffffffffbd25989c();
    __asm_iretd(a1, a2);
    unknown_ffffffffd0a135ab();
    return a2 & 0xffffffff;
}

// Address range: 0x13d021 - 0x13d024
int64_t function_13d021(int64_t a1) {
    // 0x13d021
    int64_t result; // 0x13d021
    return result;
}

// Address range: 0x13d041 - 0x13d049
int64_t function_13d041(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13d041
    __asm_int(-45);
    int64_t result; // 0x13d041
    char * v1 = (char *)(result + 17); // 0x13d043
    *v1 = *v1 + (char)a4;
    return result;
}

// Address range: 0x13d468 - 0x13d469
int64_t function_13d468(void) {
    // 0x13d468
    int64_t result; // 0x13d468
    return result;
}

// Address range: 0x13d47a - 0x13d47b
int64_t function_13d47a(void) {
    // 0x13d47a
    int64_t result; // 0x13d47a
    return result;
}

// Address range: 0x13d4b8 - 0x13d4b9
int64_t function_13d4b8(int64_t a1) {
    // 0x13d4b8
    int64_t result; // 0x13d4b8
    return result;
}

// Address range: 0x13d4c6 - 0x13d4c9
int64_t function_13d4c6(int64_t a1) {
    // 0x13d4c6
    int64_t result; // 0x13d4c6
    return result;
}

// Address range: 0x13d4e1 - 0x13d4e4
int64_t function_13d4e1(int64_t a1) {
    // 0x13d4e1
    int64_t result; // 0x13d4e1
    return result;
}

// Address range: 0x13d562 - 0x13d563
int64_t function_13d562(void) {
    // 0x13d562
    int64_t result; // 0x13d562
    return result;
}

// Address range: 0x13d598 - 0x13d61d
int64_t function_13d598(int64_t a1, int64_t a2, int64_t a3) {
    // 0x13d598
    int64_t v1; // 0x13d598
    uint32_t v2 = (int32_t)v1; // 0x13d5ee
    bool v3; // 0x13d598
    uint32_t v4 = v2 - 0x10fe97ac + (int32_t)v3; // 0x13d5ee
    int32_t * v5 = (int32_t *)(a1 + 1 + v1); // 0x13d5f4
    int32_t v6 = (int32_t)(v3 ? v4 <= v2 : v2 > 0x10fe97ab) - *v5 + (int32_t)a2; // 0x13d5f4
    int64_t v7 = v1 - 1; // 0x13d5f8
    int64_t v8; // 0x13d598
    if (v7 != 0 != (v6 == 0)) {
        // 0x13d5fa
        v8 = v4;
        return (v8 + 139) % 256 | v8 & -256;
    }
    char * v9 = (char *)(v1 + a1);
    int64_t v10 = v7; // 0x13d5f8
    int32_t v11 = v6; // 0x13d5f4
    int64_t result = unknown_19363318(); // 0x13d612
    *v9 = *v9 ^ (char)v1;
    while ((result & 0x4000) == 0) {
        // 0x13d5f4
        v11 += (int32_t)((result & 256) != 0) - *v5;
        v10--;
        int64_t v12 = result; // 0x13d5f8
        if (v10 != 0 != (v11 == 0)) {
            // 0x13d5fa
            v8 = v12;
            return (v8 + 139) % 256 | v8 & -256;
        }
        result = unknown_19363318();
        *v9 = *v9 ^ (char)v1;
    }
    // 0x13d61d
    return result;
}

// Address range: 0x13d62c - 0x13d62d
int64_t function_13d62c(void) {
    // 0x13d62c
    int64_t result; // 0x13d62c
    return result;
}

// Address range: 0x13d641 - 0x13d644
int64_t function_13d641(int64_t a1) {
    // 0x13d641
    int64_t result; // 0x13d641
    return result;
}

// Address range: 0x42521f - 0x42522b
int64_t function_42521f(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 0x43c95b3b); // 0x425225
    *v1 = *v1 | -0x5ba0d309 * (int32_t)a1;
    int64_t result; // 0x42521f
    return result;
}

// Address range: 0x42522f - 0x4253d5
int64_t function_42522f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x42522f
    int64_t result; // 0x42522f
    __asm_outsd((int16_t)a3, (int32_t)result);
    if ((char)(a3 / 256 || a3) != 0) {
        // 0x425238
        return result;
    }
    int32_t * v1 = (int32_t *)(a4 + 66); // 0x4252ad
    *v1 = *v1 & 74;
    return __asm_in(-46);
}

// Address range: 0x4253d8 - 0x4253df
int64_t function_4253d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4253d8
    return function_272e0843();
}

// Address range: 0x4253e9 - 0x4253ec
int64_t function_4253e9(void) {
    // 0x4253e9
    int64_t result; // 0x4253e9
    return result;
}

// Address range: 0x425404 - 0x42540f
int64_t function_425404(void) {
    // 0x425404
    return function_1f73542();
}

// Address range: 0x42543f - 0x425440
int64_t function_42543f(void) {
    // 0x42543f
    int64_t result; // 0x42543f
    return result;
}

// Address range: 0x425450 - 0x425452
int64_t function_425450(int64_t a1) {
    // 0x425450
    int64_t result; // 0x425450
    return result;
}

// Address range: 0x4254b3 - 0x4254bb
int64_t function_4254b3(void) {
    // 0x4254b3
    return function_42543f();
}

// Address range: 0x4254c0 - 0x4254fd
int64_t function_4254c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4254c0
    int64_t result; // 0x4254c0
    char v1 = result; // 0x4254c0
    *(char *)-0x2dc166735d877e18 = v1;
    // 0x4254cc
    __asm_out_135(53, v1);
    return result;
    uint32_t v2 = (int32_t)a4; // 0x4254f4
    bool v3; // 0x4254c0
    uint32_t v4 = (int32_t)v3 + (int32_t)a2; // 0x4254f4
    if (v4 <= v2) {
        // 0x4254f8
        __asm_out(35, (int32_t)result);
        return result;
    }
    // 0x4254fb
    if (llvm_ctpop_i8((char)(v2 - v4)) % 2 != 0) {
        // 0x4254e9
        return result & -256 | (int64_t)*(char *)-0x4b5ecbca2ff3e63e;
    }
    // 0x4254fd
    return result;
}

// Address range: 0x42551e - 0x4256ae
int64_t function_42551e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t v3 = a1;
    int64_t v4 = (int64_t)*(char *)0x444c01236606ac14; // 0x425538
    int64_t v5; // 0x42551e
    int64_t v6 = v5 & -256; // 0x425538
    // 0x425543
    bool v7; // 0x42551e
    if (!v7) {
        // 0x42552a
        return v6 | v4;
    }
    int64_t result = __asm_int3(); // 0x425545
    uint64_t v8 = a1 + 0xffffffaa; // 0x425546
    char v9 = *(char *)(a3 + 51); // 0x425549
    v1 = 256 * (int64_t)(v9 | (char)(v8 / 256)) | v8 & 0xffff00ff;
    char * v10 = (char *)(a2 - 0x2441a8bd); // 0x42554c
    unsigned char v11 = (char)v8; // 0x42554c
    *v10 = *v10 + v11;
    uint32_t v12 = (int32_t)result; // 0x425552
    uint32_t v13 = *(int32_t *)&v3; // 0x425552
    int32_t v14 = v12 - v13; // 0x425552
    unsigned char v15 = v11 % 32; // 0x425553
    bool v16 = ((v14 ^ v12) & (v13 ^ v12)) < 0; // 0x425553
    if (v15 != 0) {
        unsigned char v17 = *(char *)&v2; // 0x425553
        char v18 = v13 > v12; // 0x425553
        *(char *)v2 = v18 << 8 - v15 | v17 >> v15 | (char)((int16_t)v17 << (int16_t)(9 - v15));
        v16 = v15 == 1 ? v17 / 128 != v18 : ((v14 ^ v12) & (v13 ^ v12)) < 0;
    }
    if (v14 == 0 && v14 < 0 != v16) {
        // 0x42555b
        return result ^ 81;
    }
    // 0x42552a
    return result;
    unsigned char v19 = (char)a4;
    int64_t v20 = v6 | (int64_t)*(char *)(v5 + v4); // 0x425593
    v3 = a6;
    unsigned char v21 = (char)v5 + v19; // 0x425597
    *(char *)a4 = v21;
    if (v21 >= v19 && v21 != 0) {
        // 0x42559c
        __asm_int(103);
        return v20 & 0xffffffff ^ 0x70112ae4;
    }
    uint32_t v22 = (int32_t)v5 >> 31; // 0x4255f6
    int64_t result2 = v20 ^ 225; // 0x4255fe
    int32_t * v23 = (int32_t *)(v5 + 106); // 0x425601
    uint32_t v24 = (int32_t)result2; // 0x425601
    *v23 = *v23 + v24;
    __asm_out_136((int16_t)v22, v24);
    char * v25 = (char *)(result2 + 0x73c5510a); // 0x425605
    char v26 = v22; // 0x425605
    char v27 = *v25 ^ v26; // 0x425605
    *v25 = v27;
    if (v27 >= 0) {
        // 0x425612
        *(char *)v1 = *(char *)&v1 + v26;
        int32_t * v28 = (int32_t *)(2 * result2 + 60 + v3); // 0x425619
        uint32_t v29 = *v28; // 0x425619
        uint32_t v30 = (int32_t)v1 % 32; // 0x425619
        if (v30 != 0) {
            *v28 = (int32_t)((int32_t)v5 < v24) << v30 - 1 | v29 << v30 | (int32_t)((int64_t)v29 >> (int64_t)(33 - v30));
        }
        // 0x42552a
        return result2;
    }
    int32_t * v31 = (int32_t *)(int64_t)v22; // 0x42567e
    int32_t v32 = *v31 & (int32_t)v1; // 0x42567e
    *v31 = v32;
    if (v32 == 0) {
        // 0x42552a
        return result2;
    }
    int64_t v33 = v2 + v3 & 0xffffffff; // 0x425690
    int64_t v34 = (char)v2 - *(char *)v33 < 0 ? v33 - 1 : a8;
    __asm_int1(v34);
    *(int32_t *)0xeb57f13 = *(int32_t *)0xeb57f13 + (int32_t)v1;
    return v34 & 0xffffff00 | (int64_t)*(char *)0x1c7431d6;
}

// Address range: 0x4256d0 - 0x4256d5
int64_t function_4256d0(void) {
    // 0x4256d0
    return function_ffffffffe3673a23();
}

// Address range: 0x425712 - 0x425713
int64_t function_425712(void) {
    // 0x425712
    int64_t result; // 0x425712
    return result;
}

// Address range: 0x425742 - 0x42582c
int64_t function_425742(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x425742
    bool v1; // 0x425742
    if (!v1) {
        // 0x4257a4
        *(int32_t *)-0xf32ab9bb56e05df = (int32_t)a7;
        unsigned char v2 = (char)a7 - 20; // 0x4257af
        if (llvm_ctpop_i8(v2) % 2 != 0) {
            // 0x425764
            return a7 & -256 | (int64_t)v2;
        }
        // 0x4257b3
        __asm_outsb((int16_t)a3, (char)a2);
        return __asm_sti();
    }
    int64_t v3 = __asm_int1(a1); // 0x425744
    uint32_t v4 = *(int32_t *)(a3 - 85) & (int32_t)a1; // 0x425747
    int64_t v5 = v3 & -256; // 0x42574a
    int64_t result = v5 | (int64_t)*(char *)-0x312c75ab95af2588; // 0x42574a
    int64_t v6; // 0x425742
    *(char *)(v6 + 101) = (char)a6;
    if (v4 >= 0) {
        // 0x4257c1
        *(int32_t *)-0x2bffe47a1974b786 = (int32_t)result;
        return v5 | (int64_t)*(char *)a7;
    }
    unsigned char v7 = llvm_ctpop_i8((char)v4); // 0x425747
    int64_t v8; // 0x425742
    int64_t v9 = (int64_t)*(int32_t *)&v8; // 0x42575b
    int64_t v10 = 17 * v9; // 0x42575b
    int64_t v11 = v10 & 0xffffffff; // 0x42575b
    v8 = v11;
    if (v7 % 2 == 0) {
        char * v12 = (char *)(a3 + 120); // 0x42579e
        *v12 = *v12 & (char)(a4 / 256);
        return __asm_wait(a7);
    }
    char v13 = *(char *)v11; // 0x425760
    float80_t v14; // 0x425742
    *(float32_t *)(256 * (int64_t)((char)(v10 != 0x1100000000 * v9 >> 32) + (char)(a3 / 256) - v13) | a3 & -0xff01) = (float32_t)v14;
    // 0x425764
    return result;
}

// Address range: 0x42587a - 0x42595f
int64_t function_42587a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    if (a4 == 1) {
        // 0x42587c
        int64_t result; // 0x42587a
        return result;
    }
    char * v3 = (char *)(a4 - 0x765d81c9); // 0x4258e4
    int64_t v4; // 0x42587a
    *v3 = *v3 + (char)v4;
    int64_t v5 = 0x100000000 * v1 | v4 & 0xffffffff; // 0x4258ea
    int64_t v6 = (int64_t)*(int32_t *)&v1; // 0x4258ea
    int64_t v7 = v5 / v6; // 0x4258ea
    v1 = v5 % v6 & 0xffffffff;
    int32_t * v8 = (int32_t *)(v2 - 0x77318aa2); // 0x4258f1
    *v8 = *v8 | -0x22ea95ec;
    uint64_t v9 = v7 / 256 & v7;
    unsigned char v10 = llvm_ctpop_i8((char)v9); // 0x4258fb
    int64_t result2 = v9 % 256 | v7 & 0xffffff00; // 0x4258fb
    if (v10 % 2 != 0) {
        // 0x42587c
        return result2;
    }
    // 0x425956
    __asm_outsd((int16_t)v1, *(int32_t *)&v2);
    return 256 * (int64_t)*(char *)(a1 + 125) | result2 & 0xffff00ff;
}

// Address range: 0x42599d - 0x4259a0
int64_t function_42599d(int64_t a1) {
    // 0x42599d
    int64_t result; // 0x42599d
    return result;
}

// Address range: 0x4259f5 - 0x4259fa
int64_t function_4259f5(void) {
    // 0x4259f5
    return function_ffffffffe85f8673();
}

// Address range: 0x425a00 - 0x425a03
int64_t function_425a00(void) {
    // 0x425a00
    int64_t result; // 0x425a00
    return result;
}

// Address range: 0x425a60 - 0x425a86
int64_t function_425a60(int64_t a1, int64_t a2, int64_t a3) {
    // 0x425a60
    int64_t v1; // 0x425a60
    uint32_t v2 = (int32_t)v1; // 0x425a6a
    uint32_t v3 = -1 - (int32_t)v1 < (int32_t)a3 ? 0x68ed9f96 : 0x68ed9f95; // 0x425a6b
    uint32_t v4 = v2 - v3; // 0x425a6b
    int64_t v5 = -1 - (int32_t)v1 < (int32_t)a3 | v3 > v2 ? 125 : 124; // 0x425a70
    int32_t * v6 = (int32_t *)((int64_t)(-55 * *(int32_t *)0x3fd46c70) + 103); // 0x425a7e
    int32_t v7 = *v6; // 0x425a7e
    *v6 = 2 * v7 | (int32_t)(v7 < 0);
    return v1 % 256 & (int64_t)v4 - v5 | (int64_t)(v4 & -256);
}

// Address range: 0x425a88 - 0x425a8d
int64_t function_425a88(void) {
    // 0x425a88
    return function_7cb4c9c4();
}

// Address range: 0x425a97 - 0x425a9e
int64_t function_425a97(void) {
    // 0x425a97
    return function_42d06788();
}

// Address range: 0x425aa9 - 0x425bb5
int64_t function_425aa9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4;
    __asm_sti();
    int64_t v2 = __asm_int1(a1); // 0x425ab4
    uint32_t v3 = *(int32_t *)(a4 - 0x26bff49f); // 0x425ab8
    int64_t v4; // 0x425aa9
    int32_t * v5 = (int32_t *)(v4 + 3); // 0x425abf
    uint32_t v6 = *v5; // 0x425abf
    uint32_t v7 = v6 + (int32_t)v2; // 0x425abf
    uint32_t v8 = v7 + (int32_t)(v3 < 0xffffffba); // 0x425abf
    *v5 = v8;
    char v9 = v1;
    unsigned char v10 = v9 % 32; // 0x425ac2
    char v11; // 0x425aa9
    bool v12; // 0x425aa9
    if (v10 == 0) {
        // 0x425aa9
        v11 = v9;
        v12 = v3 < 0xffffffba ? v8 <= v6 : v7 < v6;
    } else {
        char * v13 = (char *)(v2 + 40); // 0x425ac2
        char v14 = *v13; // 0x425ac2
        *v13 = v14 >> v10;
        v11 = *(char *)&v1;
        v12 = (1 << v10 - 1 & v14) != 0;
    }
    *(char *)v1 = v11 - (char)(v4 / 256) + (char)v12;
    *(char *)a1 = __asm_insb((int16_t)a3);
    return v2 ^ 164;
}

// Address range: 0x425bda - 0x425bdf
int64_t function_425bda(void) {
    // 0x425bda
    return function_1290de53();
}
