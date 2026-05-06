/*
 * Targeted RetDec C for native executable gap queue batch 885.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3650b6-0x3652b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3652b6-0x3654b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3654b6-0x3656b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3656b6-0x3658b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3658b6-0x365ab6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c9479-0x3c9679 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c9679-0x3c9879 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c9879-0x3c9a79 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_18af5474();
int64_t function_3650af();
int64_t function_3650b6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_365125(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3651bb(void);
int64_t function_365236(void);
int64_t function_36525f(void);
int64_t function_365277(int64_t a1, int64_t a2, int64_t a3);
int64_t function_36532b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_36533e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36536d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_365380(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3653a4(int64_t a1);
int64_t function_3653b1(int64_t a1);
int64_t function_3653f3(void);
int64_t function_3653f6(void);
int64_t function_36543b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_365492(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3654cd(void);
int64_t function_365503(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_365526(void);
int64_t function_365539(int64_t a1);
int64_t function_365550(void);
int64_t function_36556b(void);
int64_t function_3655aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_36570c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3658b6(int64_t a1, int64_t a2);
int64_t function_365a02(void);
int64_t function_365a03(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_365a08(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_365a10(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c9479(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3c956f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3c96dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c981a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3c9a28(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c9a30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c9a38(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t result);
int64_t function_4f1cac();
int64_t function_6fee551d();
int64_t function_c57b8();
int64_t function_c6d58();
int64_t function_c78688();
int64_t function_ffffffffa33c5cc2();
int64_t function_ffffffffad7c0690();
int64_t function_ffffffffdeab14bf();
int64_t unknown_423bb0bf();
int64_t unknown_491639ba();
int64_t unknown_722ca44b();
int64_t unknown_ffffffff8137923f();
int64_t unknown_ffffffff90701ec7();

// Address range: 0x3650b6 - 0x3650ca
int64_t function_3650b6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = unknown_423bb0bf(); // 0x3650be
    bool v2; // 0x3650b6
    if (v2) {
        v1 = function_3650af();
    }
    char * v3 = (char *)((v1 & 0xffffffff) + 65); // 0x3650c1
    *v3 = *v3 + (char)(a4 / 256);
    int64_t v4; // 0x3650b6
    return v4 & 0xffffffff;
}

// Address range: 0x365125 - 0x365135
int64_t function_365125(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x365125
    int64_t v1; // 0x365125
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a3;
    return (int64_t)*(int32_t *)-0x760d2ee1dd56ffa7;
}

// Address range: 0x3651bb - 0x3651bc
int64_t function_3651bb(void) {
    // 0x3651bb
    int64_t result; // 0x3651bb
    return result;
}

// Address range: 0x365236 - 0x365238
int64_t function_365236(void) {
    // 0x365236
    return function_3651bb();
}

// Address range: 0x36525f - 0x365262
int64_t function_36525f(void) {
    // 0x36525f
    int64_t result; // 0x36525f
    return result;
}

// Address range: 0x365277 - 0x36528c
int64_t function_365277(int64_t a1, int64_t a2, int64_t a3) {
    // 0x365277
    return function_c78688();
}

// Address range: 0x36532b - 0x36533c
int64_t function_36532b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x36532b
    int64_t v1; // 0x36532b
    int64_t v2 = v1;
    *(char *)a3 = (char)a4;
    *(char *)(a3 + 19 + 4 * a3) = (char)(a4 / 256);
    char v3 = *(char *)(a3 - 0x179d117c); // 0x365331
    return (v2 & 0xffff0000 | (int64_t)((256 * (int16_t)v2 >> 8) * (int16_t)v3)) + a2 & 0xffffffff;
}

// Address range: 0x36533e - 0x36534d
int64_t function_36533e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36533e
    return unknown_722ca44b(a1, a2, a3, a4);
}

// Address range: 0x36536d - 0x365380
int64_t function_36536d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result = __asm_sti(); // 0x36536d
    __asm_out((int16_t)a3, (int32_t)result);
    int64_t v1; // 0x36536d
    int32_t * v2 = (int32_t *)(v1 + 26); // 0x365375
    *v2 = *v2 + (int32_t)v1;
    return result;
}

// Address range: 0x365380 - 0x365397
int64_t function_365380(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x365380
    int64_t v1; // 0x365380
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a2 + 67); // 0x365382
    uint32_t v4 = *v3; // 0x365382
    uint32_t v5 = v4 + (int32_t)v1; // 0x365382
    *v3 = v5;
    int32_t * v6 = (int32_t *)(((a4 / 256 + 127 + v1 + v2 + (int64_t)(v5 < v4)) % 256 | v2 & -256) + (8 * v1 | 1)); // 0x36538e
    *v6 = *v6 | (int32_t)a2;
    return function_ffffffffad7c0690();
}

// Address range: 0x3653a4 - 0x3653a5
int64_t function_3653a4(int64_t a1) {
    // 0x3653a4
    int64_t result; // 0x3653a4
    return result;
}

// Address range: 0x3653b1 - 0x3653b8
int64_t function_3653b1(int64_t a1) {
    // 0x3653b1
    int64_t v1; // 0x3653b1
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a1;
    return function_ffffffffdeab14bf();
}

// Address range: 0x3653f3 - 0x3653f4
int64_t function_3653f3(void) {
    // 0x3653f3
    int64_t result; // 0x3653f3
    return result;
}

// Address range: 0x3653f6 - 0x3653fb
int64_t function_3653f6(void) {
    // 0x3653f6
    return function_18af5474();
}

// Address range: 0x36543b - 0x365462
int64_t function_36543b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3; // 0x36543b
    bool v4; // 0x36543b
    if (v4 || v4) {
        v3 = function_3653f3();
    }
    int32_t * v5 = (int32_t *)(v3 + 0xf00b319); // 0x36543d
    *v5 = *v5 + 0x48cbb2d4;
    int32_t * v6 = (int32_t *)(a4 + 0x37013d00); // 0x365449
    int64_t v7; // 0x36543b
    int32_t v8 = *v6 | (int32_t)v7; // 0x365449
    unsigned char v9 = llvm_ctpop_i8((char)v8); // 0x365449
    *v6 = v8;
    uint64_t v10 = 0x8000 * (int64_t)(v8 < 0) | 0x4000 * (int64_t)(v8 == 0) | 1024 * (int64_t)(v9 % 2 == 0) | 512; // 0x36544f
    *(int32_t *)a1 = *(int32_t *)&v2;
    int64_t v11 = v4 ? -4 : 4; // 0x365450
    char * v12 = (char *)(v10 | v3 & -0xff01); // 0x365451
    char v13 = v3; // 0x365451
    *v12 = *v12 + v13;
    *(char *)v1 = *(char *)&v1 + (char)(v10 / 256);
    *v12 = *v12 + v13;
    char * v14 = (char *)(v7 + 0x6400b300); // 0x365457
    *v14 = *v14 + (char)(v7 / 256);
    return function_ffffffffa33c5cc2(v11 + a1, v2 + v11);
}

// Address range: 0x365492 - 0x3654b5
int64_t function_365492(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x365492
    int64_t v1; // 0x365492
    char v2 = *(char *)(v1 + 0x680b8cc7); // 0x365492
    char * v3 = (char *)((256 * (int64_t)(v2 & (char)(a3 / 256)) | a3 & -0xff01) + 17); // 0x365498
    *v3 = *v3 + (char)(v1 / 256);
    int32_t * v4 = (int32_t *)((v1 | 223) - 4); // 0x3654a3
    *v4 = *v4 + (int32_t)v1;
    function_4f1cac();
    return function_6fee551d();
}

// Address range: 0x3654cd - 0x3654d0
int64_t function_3654cd(void) {
    // 0x3654cd
    int64_t result; // 0x3654cd
    return result;
}

// Address range: 0x365503 - 0x365511
int64_t function_365503(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x365503
    int64_t v1; // 0x365503
    int64_t v2 = v1;
    char * v3 = (char *)(a3 + 45); // 0x365503
    *v3 = *v3 + (char)a3;
    return (int64_t)((int32_t)v2 - *(int32_t *)(v2 - 0x575957ff));
}

// Address range: 0x365526 - 0x365527
int64_t function_365526(void) {
    // 0x365526
    int64_t result; // 0x365526
    return result;
}

// Address range: 0x365539 - 0x365541
int64_t function_365539(int64_t a1) {
    // 0x365539
    return unknown_ffffffff8137923f(a1);
}

// Address range: 0x365550 - 0x365552
int64_t function_365550(void) {
    // 0x365550
    int64_t result; // 0x365550
    return result;
}

// Address range: 0x36556b - 0x36556c
int64_t function_36556b(void) {
    // 0x36556b
    int64_t result; // 0x36556b
    return result;
}

// Address range: 0x3655aa - 0x36570c
int64_t function_3655aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    uint32_t v1 = *(int32_t *)0x2a44d02d; // 0x3655aa
    int64_t v2; // 0x3655aa
    uint32_t v3 = v1 + (int32_t)v2; // 0x3655aa
    *(int32_t *)0x2a44d02d = v3;
    int64_t v4 = a3; // bp-8, 0x3655b0
    __asm_hlt();
    int32_t * v5 = (int32_t *)(unknown_491639ba() - 0x6b0374ea); // 0x3655b9
    uint32_t v6 = *v5; // 0x3655b9
    uint32_t v7 = v6 + (int32_t)(int64_t)&v4; // 0x3655b9
    uint32_t v8 = v7 + (int32_t)(v3 < v1); // 0x3655b9
    *v5 = v8;
    if (v8 == 0 || (v3 < v1 ? v8 <= v6 : v7 < v6)) {
        // 0x3655c1
        unknown_ffffffff90701ec7();
        return function_36556b();
    }
    // 0x36562c
    v4 = 0x362723;
    return function_c6d58(a1, a2);
}

// Address range: 0x36570c - 0x3658b6
int64_t function_36570c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x36570c
    int64_t v1; // 0x36570c
    return function_c6d58(a1, v1);
}

// Address range: 0x3658b6 - 0x3659cf
int64_t function_3658b6(int64_t a1, int64_t a2) {
    // 0x3658b6
    return function_c6d58(a1, a2);
}

// Address range: 0x365a02 - 0x365a03
int64_t function_365a02(void) {
    // 0x365a02
    int64_t result; // 0x365a02
    return result;
}

// Address range: 0x365a03 - 0x365a08
int64_t function_365a03(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0x365a03
    *v1 = *v1 | (char)a4;
    return function_365a10(a1, a2, a3, (int64_t)&g1);
}

// Address range: 0x365a08 - 0x365a10
int64_t function_365a08(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x365a08
    int64_t v1; // 0x365a08
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(a1 + 28 + 4 * v2); // 0x365a0a
    *v3 = *v3 + (char)a4;
    return v2 & -184;
}

// Address range: 0x365a10 - 0x365ab3
int64_t function_365a10(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 & 0xffffffff; // 0x365a10
    int64_t * v2 = (int64_t *)v1; // 0x365a1a
    *v2 = 0x360afc;
    int64_t * v3 = (int64_t *)(v1 - 16); // 0x365a26
    *v3 = 0x6589eab6;
    int64_t * v4 = (int64_t *)(v1 - 24); // 0x365a4d
    int64_t result = *(int64_t *)(v1 + 24); // 0x365a53
    *v3 = result;
    *v4 = v1 - 8;
    *v4 = *v2;
    *(int64_t *)(v1 - 32) = a1;
    *(int64_t *)(v1 - 40) = result;
    return result;
}

// Address range: 0x3c9479 - 0x3c956f
int64_t function_3c9479(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3c9479
    int64_t v1; // bp-24, 0x3c9479
    int64_t v2 = (int64_t)&v1; // 0x3c9522
    *(int64_t *)(v2 + 32) = a7;
    v1 = v2 + 16;
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x3c955b
    v1 = v3;
    *(int64_t *)(v2 - 8) = v3;
    int64_t v4; // 0x3c9479
    return function_c57b8(a1, a2, a3, a4, a5, 0x3c8122, v4);
}

// Address range: 0x3c956f - 0x3c96dc
int64_t function_3c956f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x3c8371; // bp-48, 0x3c9633
    int64_t v2 = (int64_t)&v1; // 0x3c96ab
    int64_t v3 = v2 + 8; // 0x3c96b3
    v1 = *(int64_t *)v3;
    *(int64_t *)(v2 - 8) = v3;
    return function_c57b8(a1, a2, a3, a4, a5, a6, 0x3c8371);
}

// Address range: 0x3c96dc - 0x3c981a
int64_t function_3c96dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3c96dc
    int64_t v1; // bp-48, 0x3c96dc
    int64_t v2 = (int64_t)&v1; // 0x3c97b6
    v1 = v2;
    int64_t v3; // 0x3c96dc
    return function_c57b8(a1, a2, a3, a4, a5, v3, v2);
}

// Address range: 0x3c981a - 0x3c9987
int64_t function_3c981a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x39066700; // bp-40, 0x3c9920
    int64_t v2 = (int64_t)&v1; // 0x3c995a
    int64_t v3 = v2 - 8; // 0x3c9962
    *(int64_t *)(v2 - 16) = v3;
    *(int64_t *)v3 = v2 + 8;
    return function_c57b8(a1, a2, a3, a4, a5, a6, 0x3c87db);
}

// Address range: 0x3c9a28 - 0x3c9a30
int64_t function_3c9a28(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c9a28
    int64_t v1; // 0x3c9a28
    char * v2 = (char *)(v1 - 127); // 0x3c9a28
    *v2 = *v2 | (char)a4;
    return function_3c9a38(a1, a2, a3, a4, (int64_t)&g1, (int64_t)&g1);
}

// Address range: 0x3c9a30 - 0x3c9a38
int64_t function_3c9a30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3c9a30
    int64_t result; // 0x3c9a30
    return result;
}

// Address range: 0x3c9a38 - 0x3c9a79
int64_t function_3c9a38(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t result) {
    // 0x3c9a38
    return result;
}
