/*
 * Targeted RetDec C for native executable gap queue batch 901.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x361dbe-0x361fbe rank=- name=- kind=- bytes=- uncovered=-
 *   0x361fbe-0x3621be rank=- name=- kind=- bytes=- uncovered=-
 *   0x3621be-0x3623be rank=- name=- kind=- bytes=- uncovered=-
 *   0x3623be-0x3625be rank=- name=- kind=- bytes=- uncovered=-
 *   0x3625be-0x3627be rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b52c9-0x3b54c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b54c9-0x3b56c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b5ac9-0x3b5cc9 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_223ccf1();
int64_t function_23d3b68();
int64_t function_2b380b58();
int64_t function_361db5();
int64_t function_361dbe(int64_t a1, int64_t a2);
int64_t function_361dc4(void);
int64_t function_361df0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_361e83(void);
int64_t function_361e96(void);
int64_t function_361eb4(void);
int64_t function_361ec7(void);
int64_t function_361fb4(void);
int64_t function_361fed(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_362020(int64_t a1);
int64_t function_362084(void);
int64_t function_362087(void);
int64_t function_36208d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_362095(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_362097(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3620a3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3621dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_362223(void);
int64_t function_36224f(void);
int64_t function_362281(void);
int64_t function_3622f8(int64_t a1);
int64_t function_3622fc(void);
int64_t function_362354(int64_t a1);
int64_t function_36236b(void);
int64_t function_36236d(int64_t a1, int64_t a2);
int64_t function_362370(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3623d3(void);
int64_t function_3623e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3623fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_362445(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_36255b(int64_t a1);
int64_t function_36258f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3625bc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_362682(void);
int64_t function_36269d(void);
int64_t function_36273a(void);
int64_t function_3b52c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b52f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3b5326(void);
int64_t function_3b532b(int64_t a1, int64_t a2);
int64_t function_3b5342(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b534c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b53c7(void);
int64_t function_3b53cb(int64_t a1);
int64_t function_3b53d6(void);
int64_t function_3b53e2(void);
int64_t function_3b53ec(void);
int64_t function_3b5410(int64_t a1);
int64_t function_3b5414(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b5448(int64_t a1);
int64_t function_3b54be(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b5508(int64_t a1);
int64_t function_3b552b(int64_t a1);
int64_t function_3b5572(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b5593(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b55c2(void);
int64_t function_3b55cf(int64_t a1);
int64_t function_3b55e4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3b567b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3b5ac9(int64_t a1);
int64_t function_3b5aed(void);
int64_t function_3b5b00(void);
int64_t function_3b5b2c(void);
int64_t function_3b5b62(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b5be1(int64_t a1);
int64_t function_3b5c04(void);
int64_t function_3b5c22(void);
int64_t function_3b5cab(int64_t a1);
int64_t function_3b5cad(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d3b5599();
int64_t function_623c92a8();
int64_t function_ffffffff85b855ea();
int64_t function_ffffffffb4732785();
int64_t unknown_1600d622();
int64_t unknown_3d380c0e();
int64_t unknown_3d73a8fc();
int64_t unknown_5e1af9de();
int64_t unknown_6f30cc76();
int64_t unknown_784be51b();
int64_t unknown_ffffffff8121f8f4();
int64_t unknown_ffffffff9c3e30ab();
int64_t unknown_ffffffffa6b11d48();
int64_t unknown_ffffffffaac6a0d1();
int64_t unknown_ffffffffb47897bc();
int64_t unknown_ffffffffb4c88d93();
int64_t unknown_ffffffffc5d239f8();
int64_t unknown_ffffffffcc82df67();
int64_t unknown_fffffffff8eb238a();

// Address range: 0x361dbe - 0x361dc0
int64_t function_361dbe(int64_t a1, int64_t a2) {
    // 0x361dbe
    int64_t result; // 0x361dbe
    *(int32_t *)a2 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x361dc4 - 0x361dc6
int64_t function_361dc4(void) {
    // 0x361dc4
    int64_t result; // 0x361dc4
    return result;
}

// Address range: 0x361df0 - 0x361e82
int64_t function_361df0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x361df0
    int64_t v1; // 0x361df0
    char v2 = (char)v1 - 86; // 0x361df0
    int64_t result = unknown_ffffffffc5d239f8(); // 0x361df2
    int64_t v3 = a4 - 1; // 0x361df7
    if (v3 != 0 == v2 == 0) {
        // 0x361e15
        return unknown_784be51b();
    }
    // 0x361df9
    if (llvm_ctpop_i8(v2) % 2 != 0) {
        // 0x361e08
        return result;
    }
    char v4 = *(char *)(a3 - 0x20fe1789) | (char)v3; // 0x361dfb
    int64_t result2 = a2 & 0xffffffff; // 0x361e04
    if (v4 < 0 && (v3 & -256 || (int64_t)v4) != 0) {
        result2 = function_361db5();
    }
    // 0x361e08
    return result2;
}

// Address range: 0x361e83 - 0x361e86
int64_t function_361e83(void) {
    // 0x361e83
    int64_t result; // 0x361e83
    return result;
}

// Address range: 0x361e96 - 0x361e98
int64_t function_361e96(void) {
    // 0x361e96
    int64_t result; // 0x361e96
    return result;
}

// Address range: 0x361eb4 - 0x361eb5
int64_t function_361eb4(void) {
    // 0x361eb4
    int64_t result; // 0x361eb4
    return result;
}

// Address range: 0x361ec7 - 0x361ec8
int64_t function_361ec7(void) {
    // 0x361ec7
    int64_t result; // 0x361ec7
    return result;
}

// Address range: 0x361fb4 - 0x361fbd
int64_t function_361fb4(void) {
    // 0x361fb4
    int64_t v1; // 0x361fb4
    return 256 * v1 & 0xff00 | v1;
}

// Address range: 0x361fed - 0x362005
int64_t function_361fed(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    char v1 = __asm_in(-24); // 0x361fef
    int64_t v2; // 0x361fed
    int32_t * v3 = (int32_t *)(a1 - 98 + 8 * v2); // 0x361ff1
    *v3 = *v3 + (int32_t)v2;
    int64_t result = (v2 | (int64_t)v1) & -256 | (int64_t)(v1 & (char)(a4 / 256)); // 0x361ffc
    int32_t * v4 = (int32_t *)(result + 0x1464ba17); // 0x361ffe
    *v4 = *v4 + (int32_t)v2;
    return result;
}

// Address range: 0x362020 - 0x362021
int64_t function_362020(int64_t a1) {
    // 0x362020
    int64_t result; // 0x362020
    return result;
}

// Address range: 0x362084 - 0x362085
int64_t function_362084(void) {
    // 0x362084
    int64_t result; // 0x362084
    return result;
}

// Address range: 0x362087 - 0x36208c
int64_t function_362087(void) {
    // 0x362087
    return function_ffffffffb4732785();
}

// Address range: 0x36208d - 0x362094
int64_t function_36208d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36208d
    return function_362097(a1, a2, a3, a4 - 1, (int64_t)&g3);
}

// Address range: 0x362095 - 0x362097
int64_t function_362095(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x362095
    int64_t result; // 0x362095
    return result;
}

// Address range: 0x362097 - 0x3620a3
int64_t function_362097(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a2 + 0x23bdac1e); // 0x362097
    int64_t result; // 0x362097
    *v1 = *v1 & (char)result;
    return result;
}

// Address range: 0x3620a3 - 0x3620c0
int64_t function_3620a3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = unknown_ffffffff9c3e30ab(); // 0x3620ab
    bool v2; // 0x3620a3
    if (v2) {
        v1 = function_362084();
    }
    // 0x3620ad
    *(int32_t *)0x1e89206d5b2187b = (int32_t)v1;
    *(char *)a2 = (char)(a4 / 256) + (char)a2;
    return a1 & 0xffffffff;
}

// Address range: 0x3621dc - 0x3621ee
int64_t function_3621dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3621dc
    int64_t v1; // 0x3621dc
    int32_t * v2 = (int32_t *)(v1 + 0x2e6c8ca6); // 0x3621dc
    *v2 = *v2 | (int32_t)a4;
    int64_t result = v1 & -0xff01 | (int64_t)&g2; // 0x3621e2
    char * v3 = (char *)(result + 0x38013d27); // 0x3621e4
    *v3 = *v3 + (char)a4;
    __asm_out((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x362223 - 0x362226
int64_t function_362223(void) {
    // 0x362223
    int64_t result; // 0x362223
    return result;
}

// Address range: 0x36224f - 0x362252
int64_t function_36224f(void) {
    // 0x36224f
    int64_t result; // 0x36224f
    return result;
}

// Address range: 0x362281 - 0x362287
int64_t function_362281(void) {
    // 0x362281
    return function_2b380b58();
}

// Address range: 0x3622f8 - 0x3622fb
int64_t function_3622f8(int64_t a1) {
    // 0x3622f8
    int64_t result; // 0x3622f8
    return result;
}

// Address range: 0x3622fc - 0x362302
int64_t function_3622fc(void) {
    // 0x3622fc
    int64_t result; // 0x3622fc
    return result;
}

// Address range: 0x362354 - 0x362357
int64_t function_362354(int64_t a1) {
    // 0x362354
    int64_t result; // 0x362354
    return result;
}

// Address range: 0x36236b - 0x36236c
int64_t function_36236b(void) {
    // 0x36236b
    int64_t result; // 0x36236b
    return result;
}

// Address range: 0x36236d - 0x36236f
int64_t function_36236d(int64_t a1, int64_t a2) {
    // 0x36236d
    int64_t result; // 0x36236d
    return result;
}

// Address range: 0x362370 - 0x36237b
int64_t function_362370(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_6f30cc76(a1, a2, a3, a4, a5); // 0x362370
    char * v2 = (char *)(v1 - 127); // 0x362375
    *v2 = *v2 + (char)a3;
    int64_t result = v1; // 0x362378
    if (a4 == 0) {
        result = function_36236b();
    }
    // 0x36237a
    return result;
}

// Address range: 0x3623d3 - 0x3623d4
int64_t function_3623d3(void) {
    // 0x3623d3
    int64_t result; // 0x3623d3
    return result;
}

// Address range: 0x3623e8 - 0x3623fc
int64_t function_3623e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3623e8
    int64_t v1; // 0x3623e8
    return v1 - ((char)v1 < (char)v1 ? 0x1e8e1d0 : 0x1e8e1cf) & 0xffffffff;
}

// Address range: 0x3623fd - 0x362427
int64_t function_3623fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x3623fd
    __asm_out_133(29, (char)v2);
    int64_t v3 = unknown_3d380c0e(); // 0x362408
    int32_t * v4 = (int32_t *)(v2 + 0x1e81028); // 0x36240d
    uint32_t v5 = *v4; // 0x36240d
    uint32_t v6 = v5 + (int32_t)a3; // 0x36240d
    *v4 = v6;
    unsigned char v7 = (char)v3; // 0x362413
    bool v8 = v6 < v5 ? v7 + 100 + (char)(v6 < v5) <= v7 : v7 > 155; // 0x362413
    char * v9 = (char *)(a3 + 0x1e87880); // 0x362417
    *v9 = *v9 + 33 + (char)v8;
    float80_t v10; // 0x3623fd
    *(int16_t *)v2 = (int16_t)v10;
    uint32_t v11 = ((int32_t)a4 - *(int32_t *)(v2 + 0x39a00860)) % 32; // 0x36241f
    if (v11 != 0) {
        uint32_t v12 = *(int32_t *)&v1; // 0x36241f
        *(int32_t *)v1 = v12 >> v11 | v12 << 32 - v11;
    }
    return v3 & -256 | 33;
}

// Address range: 0x362445 - 0x36255a
int64_t function_362445(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x362445
    int64_t v1; // 0x362445
    int64_t v2 = v1;
    int64_t v3 = a2;
    uint32_t v4 = (int32_t)a6; // 0x362474
    uint32_t v5 = v4 < 0x95fd3901 ? 0x1691a465 : 0x1691a464; // 0x362479
    uint64_t v6 = (int64_t)__asm_in_134((int16_t)a3); // 0x36247e
    *(char *)v2 = (char)(v4 < 0x95fd3901 | v5 > v4) - (char)a2 + (char)v2;
    char v7 = *(char *)&v3 + (char)(v6 / 256); // 0x362485
    *(char *)v3 = v7;
    if (v7 < 1) {
        // 0x36244c
        return v6 & 0x4063f84f | 0xbf9c07b0;
    }
    // 0x362489
    return a3 & 0xffffffff;
}

// Address range: 0x36255b - 0x36255c
int64_t function_36255b(int64_t a1) {
    // 0x36255b
    int64_t result; // 0x36255b
    return result;
}

// Address range: 0x36258f - 0x3625ae
int64_t function_36258f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36258f
    int64_t v1; // 0x36258f
    int64_t v2 = 2 * v1; // 0x36258f
    int32_t * v3 = (int32_t *)(a2 + 0x3d4b3e8a); // 0x362591
    *v3 = *v3 + (int32_t)v1;
    int32_t * v4 = (int32_t *)(v2 & 0xffffffff); // 0x362597
    *v4 = *v4 + (int32_t)v2;
    char v5 = v2; // 0x362599
    *(char *)-0x50624149fb6e60c6 = v5;
    return v2 & 0xffffff00 | (int64_t)(v5 - *(char *)(a4 - 0x7d5d2dcf));
}

// Address range: 0x3625bc - 0x36263d
int64_t function_3625bc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t v2; // 0x3625bc
    unsigned char v3 = (char)v2;
    *(char *)v2 = v3 / 2 | 128 * v3;
    int64_t v4; // 0x3625bc
    *(char *)v4 = -94;
    uint32_t v5 = *(int32_t *)&v4 | (int32_t)a3; // 0x3625c1
    int32_t * v6 = (int32_t *)(v4 - 28); // 0x3625c9
    *v6 = *v6 | v5;
    int16_t v7 = v5; // 0x3625cc
    int64_t v8 = __asm_in_134(v7); // 0x3625cc
    v4 = v8;
    uint32_t v9 = *(int32_t *)(a4 + 0x1bc07e98) & (int32_t)v2; // 0x3625cd
    int64_t v10; // 0x3625bc
    int64_t v11; // 0x3625bc
    int64_t v12; // 0x3625bc
    int64_t v13; // 0x3625bc
    int64_t v14; // 0x3625bc
    if (llvm_ctpop_i8((char)v9) % 2 == 0) {
        // 0x3625bc
        v10 = v1;
        v11 = v8;
        v12 = 0;
        v13 = a4;
        v14 = a2;
    } else {
        int64_t v15 = v8 & -256 | a4 / 256 % 256; // 0x3625d6
        v4 = v15;
        int32_t * v16 = (int32_t *)(v15 + 0x7816c6); // 0x3625d8
        int32_t v17 = v15; // 0x3625d8
        *v16 = *v16 + v17;
        int64_t v18 = a4 - 1; // 0x3625e3
        int64_t result = v4;
        if (v18 != 0 == v17 == 0x7b3ff01) {
            // 0x362634
            return result;
        }
        int64_t v19 = v5; // 0x3625c1
        uint64_t v20 = a4 + 222; // 0x3625e6
        v4 = v18 & 0xffffff00 | v20 % 256;
        *(int32_t *)v1 = __asm_insd(v7);
        unsigned char v21 = *(char *)&v1; // 0x3625ea
        bool v22; // 0x3625bc
        int64_t v23 = v1 + (v22 ? -1 : 1); // 0x3625ea
        v1 = v23;
        *(int32_t *)v23 = *(int32_t *)v19;
        int64_t v24 = v22 ? -4 : 4; // 0x362618
        int64_t v25 = v1 + v24; // 0x362618
        v1 = v25;
        v10 = v25;
        v11 = v4;
        v12 = v21 > (char)v20;
        v13 = result & 0xffffffff;
        v14 = v24 + v19;
    }
    // 0x362619
    *(char *)v10 = (char)v11;
    int32_t * v26 = (int32_t *)((int64_t)v9 + 70); // 0x362621
    *v26 = *v26 + (int32_t)v14;
    return (v12 + a5 + v13 / 256) % 256 | a5 & -256;
}

// Address range: 0x362682 - 0x36268a
int64_t function_362682(void) {
    // 0x362682
    int64_t result; // 0x362682
    return result;
}

// Address range: 0x36269d - 0x3626a3
int64_t function_36269d(void) {
    // 0x36269d
    int64_t result; // 0x36269d
    return result;
}

// Address range: 0x36273a - 0x36273f
int64_t function_36273a(void) {
    // 0x36273a
    int64_t v1; // 0x36273a
    int64_t v2 = v1;
    return (v2 - v1) % 256 | v2 & -256;
}

// Address range: 0x3b52c9 - 0x3b52e6
int64_t function_3b52c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)((a3 & 0xffffffff) - 0x190c43f8); // 0x3b52d5
    int64_t v2; // 0x3b52c9
    *v1 = (char)v2 + (char)a4 + *v1;
    bool v3; // 0x3b52c9
    char * v4 = (char *)(a2 + 0x50013d7c + (v3 ? -4 : 4)); // 0x3b52dd
    *v4 = *v4 + (char)((int32_t)a3 >> 31);
    return v2 & 0xffffffff;
}

// Address range: 0x3b52f6 - 0x3b5325
int64_t function_3b52f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_3d73a8fc(); // 0x3b52f6
    int64_t v2 = a4; // 0x3b52f6
    int64_t v3; // 0x3b52f6
    int64_t v4 = v1 + v3; // 0x3b52fb
    v1 = v4 & 0xffffffff;
    int32_t * v5 = (int32_t *)(v1 - 0x7b8716f3); // 0x3b52fd
    int32_t v6 = *v5 + (int32_t)a1; // 0x3b52fd
    *v5 = v6;
    while (v2 != 1 == v6 == 0) {
        // 0x3b52fb
        v2--;
        v4 = v1 + v3;
        v1 = v4 & 0xffffffff;
        v5 = (int32_t *)(v1 - 0x7b8716f3);
        v6 = *v5 + (int32_t)a1;
        *v5 = v6;
    }
    // 0x3b5313
    return v4 & 0x8a471e00 | (int64_t)*(char *)-0x17c586cc1be3ff4d | 0x75b8e143;
}

// Address range: 0x3b5326 - 0x3b532b
int64_t function_3b5326(void) {
    // 0x3b5326
    return function_23d3b68();
}

// Address range: 0x3b532b - 0x3b5333
int64_t function_3b532b(int64_t a1, int64_t a2) {
    // 0x3b532b
    int64_t result; // 0x3b532b
    return result;
}

// Address range: 0x3b5342 - 0x3b534c
int64_t function_3b5342(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b5342
    int64_t v1; // 0x3b5342
    int64_t result = v1;
    bool v2; // 0x3b5342
    *(char *)result = (char)result + (char)a4 + (char)v2;
    return result;
}

// Address range: 0x3b534c - 0x3b5395
int64_t function_3b534c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b534c
    int64_t v1; // 0x3b534c
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 108); // 0x3b534c
    int32_t v4 = a2; // 0x3b534c
    *v3 = *v3 + v4;
    int64_t v5; // 0x3b534c
    int32_t v6 = *(int32_t *)&v5 ^ (int32_t)a1; // 0x3b5351
    char * v7 = (char *)(v2 - 24 + 8 * v2); // 0x3b5353
    *v7 = *v7 + (char)a4;
    int64_t v8; // 0x3b534c
    *(int32_t *)a3 = *(int32_t *)&v8 + v6;
    char * v9 = (char *)(a2 + 111); // 0x3b535e
    *v9 = *v9 + (char)v2;
    unknown_ffffffffcc82df67(v6);
    int32_t * v10 = (int32_t *)(v1 + 0x2a889e76); // 0x3b536b
    *v10 = *v10 + (int32_t)v1;
    int64_t v11; // 0x3b534c
    *(int32_t *)a2 = *(int32_t *)&v11 + v4;
    __asm_int1();
    *(char *)0x7e3d3c80 = *(char *)0x7e3d3c80 - 90;
    return unknown_ffffffffb4c88d93();
}

// Address range: 0x3b53c7 - 0x3b53c9
int64_t function_3b53c7(void) {
    // 0x3b53c7
    int64_t v1; // 0x3b53c7
    return function_3b5414(v1, v1, v1, v1);
}

// Address range: 0x3b53cb - 0x3b53cc
int64_t function_3b53cb(int64_t a1) {
    // 0x3b53cb
    int64_t result; // 0x3b53cb
    return result;
}

// Address range: 0x3b53d6 - 0x3b53d7
int64_t function_3b53d6(void) {
    // 0x3b53d6
    int64_t result; // 0x3b53d6
    return result;
}

// Address range: 0x3b53e2 - 0x3b53e3
int64_t function_3b53e2(void) {
    // 0x3b53e2
    int64_t result; // 0x3b53e2
    return result;
}

// Address range: 0x3b53ec - 0x3b53ee
int64_t function_3b53ec(void) {
    // 0x3b53ec
    return function_3b53d6();
}

// Address range: 0x3b5410 - 0x3b5412
int64_t function_3b5410(int64_t a1) {
    // 0x3b5410
    int64_t result; // 0x3b5410
    return result;
}

// Address range: 0x3b5414 - 0x3b5433
int64_t function_3b5414(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b5414
    int64_t v1; // 0x3b5414
    uint64_t v2 = unknown_1600d622(0x852a6c8b, v1 & 0xffff00ff | (int64_t)(int32_t)&g1); // 0x3b541c
    *(char *)0x852a6c37 = *(char *)0x852a6c37 - (char)(v2 / 256);
    *(char *)0x1e8b68647b03b64 = (char)v2;
    return v2 ^ 24;
}

// Address range: 0x3b5448 - 0x3b5449
int64_t function_3b5448(int64_t a1) {
    // 0x3b5448
    int64_t result; // 0x3b5448
    return result;
}

// Address range: 0x3b54be - 0x3b54dd
int64_t function_3b54be(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b54be
    int64_t v1; // 0x3b54be
    uint64_t v2 = v1;
    if (a4 != 0) {
        // 0x3b54c0
        return function_623c92a8();
    }
    // 0x3b54ca
    *(char *)v2 = 2 * (char)v2;
    *(char *)0x7d46d3f = *(char *)0x7d46d3f + (char)(v2 / 256);
    return unknown_5e1af9de();
}

// Address range: 0x3b5508 - 0x3b550b
int64_t function_3b5508(int64_t a1) {
    // 0x3b5508
    int64_t result; // 0x3b5508
    return result;
}

// Address range: 0x3b552b - 0x3b5531
int64_t function_3b552b(int64_t a1) {
    // 0x3b552b
    return function_3d3b5599();
}

// Address range: 0x3b5572 - 0x3b5582
int64_t function_3b5572(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b5572
    __asm_rcl(*(char *)(a4 - 0x117d3500));
    return function_ffffffff85b855ea();
}

// Address range: 0x3b5593 - 0x3b559e
int64_t function_3b5593(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 - 103); // 0x3b5593
    int64_t result; // 0x3b5593
    int32_t v2 = result; // 0x3b5593
    *v1 = *v1 + v2;
    *(int32_t *)a1 = v2;
    return result;
}

// Address range: 0x3b55c2 - 0x3b55c3
int64_t function_3b55c2(void) {
    // 0x3b55c2
    int64_t result; // 0x3b55c2
    return result;
}

// Address range: 0x3b55cf - 0x3b55d2
int64_t function_3b55cf(int64_t a1) {
    // 0x3b55cf
    int64_t v1; // 0x3b55cf
    int64_t v2 = v1;
    return (v2 + 28) % 256 | v2 & -256;
}

// Address range: 0x3b55e4 - 0x3b565d
int64_t function_3b55e4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3b55e4
    int64_t v1; // 0x3b55e4
    uint32_t v2 = (int32_t)v1; // 0x3b55e4
    uint32_t v3 = (int32_t)v1;
    int32_t v4 = v2 - v3; // 0x3b55e4
    int64_t result2 = unknown_ffffffffa6b11d48(); // 0x3b5642
    if (v4 != 0) {
        int64_t result = result2; // 0x3b5624
        if (v4 >= 0) {
            result = function_3b55c2();
        }
        // 0x3b5626
        return result;
    }
    int64_t v5 = v4; // 0x3b55e4
    *(int32_t *)a3 = (int32_t)a1;
    int32_t * v6 = (int32_t *)(a2 + 0xad801e8); // 0x3b564b
    *v6 = (int32_t)(v2 < v3) + (int32_t)a2 + *v6;
    char * v7 = (char *)(v5 - 0x173df078); // 0x3b5651
    *v7 = *v7 - (char)(a4 / 256);
    int32_t * v8 = (int32_t *)(a3 - 121); // 0x3b5657
    *v8 = *v8 + (int32_t)result2;
    *(int32_t *)(v5 + 50) = (int32_t)a3;
    return result2;
}

// Address range: 0x3b567b - 0x3b56a0
int64_t function_3b567b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_fffffffff8eb238a(); // 0x3b5684
    char * v2 = (char *)(a1 + 21); // 0x3b5693
    *v2 = *v2 & (char)a5;
    char v3 = *(char *)(a3 - 0x63fe1789); // 0x3b5697
    bool v4; // 0x3b567b
    return v1 & 0x683b0100 | (int64_t)(((char)(v1 + 223 + (int64_t)(bool)v4) & -24) - v3);
}

// Address range: 0x3b5ac9 - 0x3b5ad2
int64_t function_3b5ac9(int64_t a1) {
    // 0x3b5ac9
    return unknown_ffffffffaac6a0d1(a1);
}

// Address range: 0x3b5aed - 0x3b5aef
int64_t function_3b5aed(void) {
    // 0x3b5aed
    return function_3b5b2c();
}

// Address range: 0x3b5b00 - 0x3b5b01
int64_t function_3b5b00(void) {
    // 0x3b5b00
    int64_t result; // 0x3b5b00
    return result;
}

// Address range: 0x3b5b2c - 0x3b5b2d
int64_t function_3b5b2c(void) {
    // 0x3b5b2c
    int64_t result; // 0x3b5b2c
    return result;
}

// Address range: 0x3b5b62 - 0x3b5b6d
int64_t function_3b5b62(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b5b62
    return function_3b5b00();
}

// Address range: 0x3b5be1 - 0x3b5bf5
int64_t function_3b5be1(int64_t a1) {
    // 0x3b5be1
    int64_t v1; // 0x3b5be1
    *(int32_t *)0xe859d2bb = *(int32_t *)0xe859d2bb + (int32_t)v1;
    return unknown_ffffffff8121f8f4(0x3a098382);
}

// Address range: 0x3b5c04 - 0x3b5c05
int64_t function_3b5c04(void) {
    // 0x3b5c04
    int64_t result; // 0x3b5c04
    return result;
}

// Address range: 0x3b5c22 - 0x3b5c29
int64_t function_3b5c22(void) {
    // 0x3b5c22
    bool v1; // 0x3b5c22
    if (true == !v1) {
        function_3b5c04();
    }
    // 0x3b5c24
    return function_223ccf1();
}

// Address range: 0x3b5cab - 0x3b5cac
int64_t function_3b5cab(int64_t a1) {
    // 0x3b5cab
    int64_t result; // 0x3b5cab
    return result;
}

// Address range: 0x3b5cad - 0x3b5cc3
int64_t function_3b5cad(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b5cad
    *(char *)(a2 - 0x238ad9c6) = 0;
    return unknown_ffffffffb47897bc();
}
