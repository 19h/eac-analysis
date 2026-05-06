/*
 * Targeted RetDec C for native executable gap queue batch 587.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xd97c7-0xd99c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd99c7-0xd9bc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd9bc7-0xd9dc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2862cb-0x2864cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x2864cb-0x2866cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x2866cb-0x2868cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x2868cb-0x286acb rank=- name=- kind=- bytes=- uncovered=-
 *   0x286acb-0x286ccb rank=- name=- kind=- bytes=- uncovered=-
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
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_rsm(void);
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
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

int64_t function_1f5c343();
int64_t function_21067d2();
int64_t function_2862cb(void);
int64_t function_28631a(void);
int64_t function_286325(int64_t a1);
int64_t function_286350(void);
int64_t function_286369(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28639e(void);
int64_t function_2863b6(int64_t a1);
int64_t function_2863b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_286510(void);
int64_t function_286513(void);
int64_t function_28651f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2865bb(void);
int64_t function_2865f7(int64_t a1);
int64_t function_2865fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_28660c(void);
int64_t function_286612(int64_t a1);
int64_t function_286630(void);
int64_t function_28666e(int64_t a1, int64_t a2);
int64_t function_286674(void);
int64_t function_28667a(void);
int64_t function_28667e(void);
int64_t function_286697(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2866cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_28690e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_286a41(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_286ba2(int64_t a1);
int64_t function_286c40(void);
int64_t function_28989c22();
int64_t function_3b78287a();
int64_t function_515f9f3a();
int64_t function_540f2939();
int64_t function_caf2a();
int64_t function_d97c7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d97fc(int64_t a1, int64_t a2);
int64_t function_d982e(void);
int64_t function_d9841(int64_t a1, int64_t a2);
int64_t function_d9855(void);
int64_t function_d98a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d9917(void);
int64_t function_d99eb(void);
int64_t function_d9a08(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_d9a35(void);
int64_t function_d9a64(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d9a75(int64_t a1, int64_t a2);
int64_t function_d9a7e(void);
int64_t function_d9a86(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d9a92(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d9aa4(void);
int64_t function_d9ac5(int64_t a1);
int64_t function_d9b04(int64_t a1, int64_t a2);
int64_t function_d9b0c(int64_t a1);
int64_t function_d9b56(int64_t a1, int64_t a2);
int64_t function_d9b7b(void);
int64_t function_d9b8b(void);
int64_t function_d9bc0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d9bda(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_d9c04(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_d9c22(void);
int64_t function_d9c46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_d9d1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d9d52(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d9d80(void);
int64_t function_ffffffff80119b42();
int64_t function_ffffffff90605ddf();
int64_t function_ffffffffaf0f8250();
int64_t function_ffffffffaf32daed();
int64_t unknown_1090c39d();
int64_t unknown_1dbb432f();
int64_t unknown_3a322112();
int64_t unknown_3a97af54();
int64_t unknown_3cc7c310();
int64_t unknown_7e1d9500();
int64_t unknown_a02ee6();
int64_t unknown_c290e77();
int64_t unknown_ffffffffbcfad045();
int64_t unknown_ffffffffc19a38d1();
int64_t unknown_ffffffffc58787c6();
int64_t unknown_ffffffffcc76d87e();
int64_t unknown_ffffffffcfc6a2f3();
int64_t unknown_ffffffffe1ebdad8();
int64_t unknown_ffffffffe6330548();
int64_t unknown_ffffffffe8ac8225();

// Address range: 0xd97c7 - 0xd97cf
int64_t function_d97c7(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd97c7
    int64_t result; // 0xd97c7
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0xd97fc - 0xd9803
int64_t function_d97fc(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 0x388e74a5); // 0xd97fc
    *v1 = *v1 + (int32_t)a1;
    int64_t result; // 0xd97fc
    return result;
}

// Address range: 0xd982e - 0xd982f
int64_t function_d982e(void) {
    // 0xd982e
    int64_t result; // 0xd982e
    return result;
}

// Address range: 0xd9841 - 0xd9848
int64_t function_d9841(int64_t a1, int64_t a2) {
    // 0xd9841
    int64_t result; // 0xd9841
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0xd9855 - 0xd985a
int64_t function_d9855(void) {
    // 0xd9855
    int64_t result; // 0xd9855
    // 0xd9857
    return result;
}

// Address range: 0xd98a8 - 0xd9914
int64_t function_d98a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t result; // 0xd98a8
    bool v2; // 0xd98a8
    if (v2) {
        // 0xd9902
        *(char *)a1 = (char)result;
        __asm_int(50);
        unknown_3a322112();
        __asm_in(-107);
        return __asm_wait();
    }
    int32_t * v3 = (int32_t *)(result - 32); // 0xd98aa
    int32_t v4 = a3; // 0xd98aa
    *v3 = *v3 + v4;
    *(int32_t *)v1 = *(int32_t *)&v1 + v4;
    int32_t * v5 = (int32_t *)(v1 + 51); // 0xd98b4
    *v5 = *v5 | v4;
    char * v6 = (char *)(4 * result + 0x9d873b5 + v1); // 0xd98b7
    *v6 = *v6 | (char)v1;
    return result;
}

// Address range: 0xd9917 - 0xd991a
int64_t function_d9917(void) {
    // 0xd9917
    int64_t v1; // 0xd9917
    bool v2; // 0xd9917
    return 2 * v1 & 0xfffffffe | (int64_t)v2;
}

// Address range: 0xd99eb - 0xd99ec
int64_t function_d99eb(void) {
    // 0xd99eb
    int64_t result; // 0xd99eb
    return result;
}

// Address range: 0xd9a08 - 0xd9a16
int64_t function_d9a08(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xd9a08
    if (a4 != 1) {
        // 0xd9a7d
        int64_t result; // 0xd9a08
        return result;
    }
    // 0xd9a0a
    unknown_3cc7c310(a1, a2, a3, 1, a5);
    return function_ffffffffaf0f8250();
}

// Address range: 0xd9a35 - 0xd9a3a
int64_t function_d9a35(void) {
    // 0xd9a35
    return function_28989c22();
}

// Address range: 0xd9a64 - 0xd9a6b
int64_t function_d9a64(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd9a64
    int64_t v1; // 0xd9a64
    bool v2; // 0xd9a64
    *(int32_t *)a3 = 2 * (int32_t)v1 + (int32_t)v2;
    return function_ffffffffaf32daed();
}

// Address range: 0xd9a75 - 0xd9a7d
int64_t function_d9a75(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a2 + 79); // 0xd9a75
    *v1 = -*v1;
    return unknown_ffffffffcc76d87e(a1, a2);
}

// Address range: 0xd9a7e - 0xd9a83
int64_t function_d9a7e(void) {
    // 0xd9a7e
    return function_1f5c343();
}

// Address range: 0xd9a86 - 0xd9a90
int64_t function_d9a86(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd9a86
    int64_t result; // 0xd9a86
    return result;
}

// Address range: 0xd9a92 - 0xd9aa4
int64_t function_d9a92(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0xd9a94
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(a4 + 0xdb34460); // 0xd9a94
        *v2 = *v2 << v1;
    }
    int64_t v3; // 0xd9a92
    int64_t result = v3 & -0xff01 | (int64_t)&g2; // 0xd9a92
    char * v4 = (char *)(result - 0x5afe1800); // 0xd9a9a
    *v4 = *v4 + (char)result;
    char * v5 = (char *)(v3 + 1); // 0xd9aa0
    *v5 = *v5 + (char)a4;
    return result;
}

// Address range: 0xd9aa4 - 0xd9aa9
int64_t function_d9aa4(void) {
    // 0xd9aa4
    return function_ffffffff80119b42();
}

// Address range: 0xd9ac5 - 0xd9ac6
int64_t function_d9ac5(int64_t a1) {
    // 0xd9ac5
    int64_t result; // 0xd9ac5
    return result;
}

// Address range: 0xd9b04 - 0xd9b0b
int64_t function_d9b04(int64_t a1, int64_t a2) {
    // 0xd9b04
    float80_t v1; // 0xd9b04
    *(int16_t *)a1 = (int16_t)v1;
    int64_t v2; // 0xd9b04
    return v2 & 0xffffffff;
}

// Address range: 0xd9b0c - 0xd9b0d
int64_t function_d9b0c(int64_t a1) {
    // 0xd9b0c
    int64_t result; // 0xd9b0c
    return result;
}

// Address range: 0xd9b56 - 0xd9b63
int64_t function_d9b56(int64_t a1, int64_t a2) {
    // 0xd9b56
    return function_3b78287a();
}

// Address range: 0xd9b7b - 0xd9b85
int64_t function_d9b7b(void) {
    // 0xd9b7b
    int64_t result; // 0xd9b7b
    *(int32_t *)0x1e8cde5ec6327c2 = (int32_t)result;
    return result;
}

// Address range: 0xd9b8b - 0xd9b8e
int64_t function_d9b8b(void) {
    // 0xd9b8b
    int64_t result; // 0xd9b8b
    return result;
}

// Address range: 0xd9bc0 - 0xd9bda
int64_t function_d9bc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd9bc0
    int64_t v1; // 0xd9bc0
    uint64_t v2 = v1;
    __asm_int(78);
    unsigned char v3 = *(char *)(v2 % 256 + v1); // 0xd9bc7
    int64_t v4 = v3; // 0xd9bc7
    *(int32_t *)a1 = (int32_t)v1;
    char * v5 = (char *)(v2 & -256 | v4); // 0xd9bc9
    *v5 = *v5 + v3;
    int64_t result = v2 + 256 * a3 & 0xff00 | v2 & -0x10000 | v4; // 0xd9bcd
    *(char *)0xfe35d6 = *(char *)0xfe35d6 + (char)(v1 / 256);
    __asm_out(13, (int32_t)result);
    return result;
}

// Address range: 0xd9bda - 0xd9c04
int64_t function_d9bda(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xd9bda
    int64_t v1; // 0xd9bda
    int64_t result = v1;
    int32_t * v2 = (int32_t *)(a4 - 0x79971cc6 + result);
    *v2 = *v2 + (int32_t)a2;
    float80_t v3; // 0xd9bda
    *(float32_t *)(v1 + (int64_t)&g1) = (float32_t)v3;
    __asm_out(9, (int32_t)result);
    char * v4 = (char *)(a1 + 0x25d952de); // 0xd9bf0
    *v4 = *v4 | (char)a3;
    unsigned char v5 = *(char *)(result + 0x695c3a13); // 0xd9bf8
    *(char *)result = (char)result + 64 + (char)(v5 > -1 - (char)v1);
    return result;
}

// Address range: 0xd9c04 - 0xd9c10
int64_t function_d9c04(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a2 - 119); // 0xd9c04
    *v1 = *v1 + (char)(a4 / 256);
    __asm_iretd(a1, a2, a3, a4);
    return function_d9c46(a1, a2, a3, a4, (int64_t)&g4);
}

// Address range: 0xd9c22 - 0xd9c25
int64_t function_d9c22(void) {
    // 0xd9c22
    int64_t result; // 0xd9c22
    return result;
}

// Address range: 0xd9c46 - 0xd9d1c
int64_t function_d9c46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2; // 0xd9c46
    char * v3 = (char *)(v2 + a4); // 0xd9c46
    *v3 = *v3 | (char)(v2 / 256);
    int64_t v4 = 0x100000000 * a3 >> 32; // 0xd9c4b
    int64_t result = unknown_3a97af54(); // 0xd9c4e
    if (116 * v4 == 0x7400000000 * v4 >> 32) {
        // 0xd9c55
        return result;
    }
    int64_t v5 = unknown_ffffffffe1ebdad8() & 0x8c100071 | (int64_t)&g3; // 0xd9cdc
    char * v6 = (char *)(v5 - 0x17fe9e00); // 0xd9cde
    *v6 = *v6 + (char)v5;
    int32_t * v7 = (int32_t *)(v2 + 1 & 0xffffffff); // 0xd9ce4
    *v7 = *v7 + (int32_t)a2;
    uint32_t v8 = *(int32_t *)&v1; // 0xd9ce6
    uint32_t v9 = v8 + (int32_t)a1; // 0xd9ce6
    *(int32_t *)v1 = v9;
    uint64_t v10 = v1;
    *(char *)v10 = *(char *)&v1 + (char)(v10 / 256);
    int32_t * v11 = (int32_t *)(a4 + 0x6101e85f); // 0xd9cef
    *v11 = *v11 - (int32_t)v1;
    return v5 - (v9 < v8 ? 0x99e0ebb5 : 0x99e0ebb4) & 0x920af6f3 | 0x6df5090c;
}

// Address range: 0xd9d1d - 0xd9d52
int64_t function_d9d1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int16_t v1 = a3; // 0xd9d1d
    __asm_in_133(v1);
    int64_t v2; // bp-8, 0xd9d1d
    int64_t v3; // 0xd9d1d
    *(int32_t *)a2 = (int32_t)(int64_t)&v2 + (int32_t)v3;
    __asm_hlt();
    *(int32_t *)a1 = __asm_insd(v1);
    char * v4 = (char *)(a2 + 116); // 0xd9d38
    *v4 = *v4 | (char)a3;
    unknown_ffffffffbcfad045(__asm_hlt() & 0xffffffff);
    return function_515f9f3a();
}

// Address range: 0xd9d52 - 0xd9d5a
int64_t function_d9d52(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0xfabca8b); // 0xd9d52
    *v1 = *v1 + 122;
    int64_t result; // 0xd9d52
    return result;
}

// Address range: 0xd9d80 - 0xd9d84
int64_t function_d9d80(void) {
    // 0xd9d80
    int64_t result; // 0xd9d80
    return result;
}

// Address range: 0x2862cb - 0x2862d2
int64_t function_2862cb(void) {
    // 0x2862cb
    return unknown_ffffffffc19a38d1();
}

// Address range: 0x28631a - 0x28631f
int64_t function_28631a(void) {
    // 0x28631a
    return function_ffffffff90605ddf();
}

// Address range: 0x286325 - 0x286328
int64_t function_286325(int64_t a1) {
    // 0x286325
    int64_t result; // 0x286325
    return result;
}

// Address range: 0x286350 - 0x286351
int64_t function_286350(void) {
    // 0x286350
    int64_t result; // 0x286350
    return result;
}

// Address range: 0x286369 - 0x286385
int64_t function_286369(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x286369
    int64_t v1; // 0x286369
    int64_t v2 = v1;
    *(char *)v1 = 0;
    int64_t v3; // 0x286369
    *(char *)v3 = *(char *)&v3 + 58;
    int64_t result = unknown_c290e77(); // 0x286371
    int32_t * v4 = (int32_t *)(a3 + 28); // 0x286376
    *v4 = *v4 + (int32_t)a4;
    unsigned char v5 = (char)result; // 0x286379
    __asm_out_134(99, v5);
    __asm_out(10, (int32_t)result);
    *(int64_t *)v2 = v2 + v1 + (int64_t)(v5 < 210);
    return result;
}

// Address range: 0x28639e - 0x2863a2
int64_t function_28639e(void) {
    // 0x28639e
    int64_t v1; // 0x28639e
    int32_t v2 = 0x10000 * (int32_t)v1 >> 16; // 0x28639e
    return (v2 + 207) % 256 | v2 & -256;
}

// Address range: 0x2863b6 - 0x2863b7
int64_t function_2863b6(int64_t a1) {
    // 0x2863b6
    int64_t result; // 0x2863b6
    return result;
}

// Address range: 0x2863b7 - 0x2864bb
int64_t function_2863b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a3;
    int64_t v2; // 0x2863b7
    if ((int32_t)v2 < (int32_t)v2) {
        function_286350();
    }
    // 0x2863c0
    bool v3; // 0x2863b7
    int64_t v4 = v3 ? -4 : 4; // 0x2863bd
    int64_t v5 = v4 + a2; // 0x2863bd
    int64_t v6 = unknown_ffffffffc58787c6(); // 0x2863c0
    char * v7 = (char *)(2 * v2 + 71 + v6); // 0x2863c5
    char v8 = *v7; // 0x2863c5
    *v7 = 2 * v8 | (char)((int32_t)v2 < (int32_t)v2);
    char * v9 = (char *)(a1 - 0x173c71c6 + v4); // 0x2863ca
    *v9 = (char)(v8 < 0) + (char)v2 + *v9;
    int32_t * v10 = (int32_t *)(v2 + 0x3900cb02); // 0x2863d0
    *v10 = *v10 + (int32_t)v6;
    uint32_t v11 = 122 * *(int32_t *)(v5 - 80); // 0x2863d6
    int64_t v12 = v11; // 0x2863d6
    int32_t v13 = 2 * *(int32_t *)&v1; // 0x2863e6
    *(int32_t *)v1 = v13;
    int64_t result = unknown_ffffffffcfc6a2f3(v12); // 0x2863ed
    if (v13 >= 0) {
        // 0x286467
        *(int32_t *)-0x17d5b391 = *(int32_t *)-0x17d5b391 >> 1;
        int32_t * v14 = (int32_t *)(v1 + 0x5d0710cf); // 0x28646e
        *v14 = *v14 + (int32_t)result;
        return result;
    }
    int64_t v15 = (int64_t)(*(int32_t *)(v5 - 0x7d788f08) ^ (int32_t)v5); // 0x2863f4
    unknown_7e1d9500();
    uint64_t v16 = v2 + (int64_t)(*(int32_t *)(v2 + 0x1f798b8f) ^ (int32_t)a4); // 0x2863ff
    int64_t v17 = v16 & 0xffffffff; // 0x2863ff
    uint64_t v18 = __asm_iretd((int64_t)&g4, (int64_t)&g4, (int64_t)&g4, (int64_t)&g4); // 0x286401
    int64_t v19 = v1;
    char v20 = *(char *)(v2 + 8 + v19); // 0x286402
    v1 = v19 & -256 | (int64_t)(v20 + (char)v19);
    char * v21 = (char *)(v17 + 0x1e8c1ea + v18); // 0x286406
    *v21 = (char)(v18 / 256);
    char * v22 = (char *)(256 * (int64_t)*v21 | v18 & -0xff01); // 0x28640d
    char v23 = 2 * *v22; // 0x28640d
    unsigned char v24 = llvm_ctpop_i8(v23); // 0x28640d
    *v22 = v23;
    *(char *)v12 = *(char *)v15;
    int64_t v25 = v3 ? -1 : 1; // 0x28640f
    if (v24 % 2 == 0) {
        // 0x286458
        return (int64_t)(0x10000 * (v11 + (int32_t)v25) / 0x10000);
    }
    char v26 = *(char *)(v2 + 0x1e8c7a6) > (char)(v16 / 256) ? 127 : 126; // 0x28641e
    unsigned char v27 = llvm_ctpop_i8((char)a6 - v26); // 0x28641e
    int64_t result2 = unknown_1dbb432f(a7, 2 * v4 + v25 + v15, v1, v17 - 1); // 0x286429
    if (v27 % 2 == 0) {
        // 0x286430
        return function_540f2939();
    }
    // 0x2864a4
    float80_t v28; // 0x2863b7
    *(int16_t *)(v1 + 0xf16be8f) = (int16_t)v28;
    return result2;
}

// Address range: 0x286510 - 0x286513
int64_t function_286510(void) {
    // 0x286510
    int64_t result; // 0x286510
    return result;
}

// Address range: 0x286513 - 0x286514
int64_t function_286513(void) {
    // 0x286513
    int64_t result; // 0x286513
    return result;
}

// Address range: 0x28651f - 0x28654a
int64_t function_28651f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x28651f
    unknown_ffffffffe8ac8225();
    if (a4 != 1) {
        function_286513();
    }
    int32_t * v1 = (int32_t *)(a3 + 0xbb1eb7d); // 0x28652b
    int64_t v2; // 0x28651f
    *v1 = *v1 + (int32_t)v2;
    bool v3; // 0x28651f
    return unknown_ffffffffe6330548((v3 ? -4 : 4) + a1) | 94;
}

// Address range: 0x2865bb - 0x2865bc
int64_t function_2865bb(void) {
    // 0x2865bb
    int64_t result; // 0x2865bb
    return result;
}

// Address range: 0x2865f7 - 0x2865fe
int64_t function_2865f7(int64_t a1) {
    // 0x2865f7
    int64_t result; // 0x2865f7
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)v1 + (int32_t)result;
    return result;
}

// Address range: 0x2865fe - 0x286602
int64_t function_2865fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2865fe
    int64_t v1; // 0x2865fe
    int64_t result = v1;
    *(char *)result = (char)result + (char)a4;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return result;
}

// Address range: 0x28660c - 0x286610
int64_t function_28660c(void) {
    // 0x28660c
    return function_2865bb();
}

// Address range: 0x286612 - 0x286615
int64_t function_286612(int64_t a1) {
    // 0x286612
    int64_t result; // 0x286612
    return result;
}

// Address range: 0x286630 - 0x286635
int64_t function_286630(void) {
    // 0x286630
    return function_21067d2();
}

// Address range: 0x28666e - 0x286671
int64_t function_28666e(int64_t a1, int64_t a2) {
    // 0x28666e
    return a2 & 0xffffffff;
}

// Address range: 0x286674 - 0x286675
int64_t function_286674(void) {
    // 0x286674
    int64_t result; // 0x286674
    return result;
}

// Address range: 0x28667a - 0x28667c
int64_t function_28667a(void) {
    // 0x28667a
    return function_286674();
}

// Address range: 0x28667e - 0x28667f
int64_t function_28667e(void) {
    // 0x28667e
    int64_t result; // 0x28667e
    return result;
}

// Address range: 0x286697 - 0x2866cc
int64_t function_286697(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_1090c39d(); // 0x286697
    *(int32_t *)-0x31867051 = *(int32_t *)-0x31867051 + (int32_t)a1;
    int64_t v2; // 0x286697
    *(int16_t *)(a3 + 0x5001e87c) = (int16_t)v2;
    int64_t v3 = __asm_iretd((int64_t)&g4, (int64_t)&g4, (int64_t)&g4, (int64_t)&g4); // 0x2866ba
    char * v4 = (char *)(v3 + 0x1e86605); // 0x2866bb
    unsigned char v5 = *v4; // 0x2866bb
    *v4 = v5 / 128 | 2 * v5;
    int16_t v6 = (int32_t)v1 + (int32_t)v2 >> 31; // 0x2866c4
    int64_t v7; // 0x286697
    __asm_outsd(v6, *(int32_t *)&v7);
    __asm_out_135(v6, (int32_t)v3);
    return (int64_t)(-0x17d67d32 * *(int32_t *)(a2 + 0x5c0ea06));
}

// Address range: 0x2866cc - 0x28690e
int64_t function_2866cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    bool v3; // 0x2866cc
    if (v3) {
        function_28667e();
    }
    // 0x2866ce
    __asm_sti();
    unsigned char v4 = (char)a4; // 0x2866cf
    int64_t v5; // 0x2866cc
    *(char *)(v5 - 0x50da111a) = v4;
    unsigned char v6 = v4 % 32; // 0x2866da
    if (v6 != 0) {
        unsigned char v7 = *(char *)&v2; // 0x2866da
        *(char *)v2 = v7 >> 8 - v6 | v7 << v6;
    }
    int32_t * v8 = (int32_t *)(3 * v2); // 0x2866dc
    *v8 = *v8 + (int32_t)a3;
    int64_t v9 = a3; // bp-8, 0x2866df
    unknown_a02ee6();
    char v10 = *(char *)&v1; // 0x2866e5
    int16_t v11; // 0x2866cc
    int64_t v12 = v11; // 0x2866f0
    if ((int32_t)v5 != -(int32_t)(int64_t)&v9) {
        v12 = function_28667e();
    }
    int64_t v13 = a3 & -256 | (int64_t)(v10 + (char)a3); // 0x2866e5
    uint32_t v14 = (int32_t)v12 & -256 | 128; // 0x2866f4
    uint32_t v15 = v14 - 0x6bfe17aa; // 0x2866f4
    *(char *)v2 = v10;
    int64_t v16 = v3 ? -1 : 1; // 0x2866f9
    v2 += v16;
    v1 += v16;
    *(char *)v13 = v4;
    char * v17 = (char *)(int64_t)v15; // 0x2866fc
    unsigned char v18 = *v17; // 0x2866fc
    unsigned char v19 = v18 + (char)(v15 / 256); // 0x2866fc
    unsigned char v20 = v19 + (char)(v14 > 0x6bfe17a9); // 0x2866fc
    *v17 = v20;
    if (v20 == 0) {
        bool v21 = v14 > 0x6bfe17a9 ? v20 <= v18 : v19 < v18; // 0x2866fc
        return (int64_t)v21 | (int64_t)(v14 + 0x33bbea3e);
    }
    // 0x286770
    v9 = 0x279ce4;
    int64_t * v22 = (int64_t *)v5; // 0x28688e
    *v22 = v1;
    int64_t v23 = *v22; // 0x2868b0
    *(int64_t *)(v5 - 16) = v23;
    int64_t v24 = v5 + 8; // 0x2868b8
    int64_t * v25 = (int64_t *)v24; // 0x2868b9
    *(int64_t *)(v5 + 40) = 0x279ce4;
    *v25 = 0x6224236c;
    *v25 = v2;
    *v22 = v24;
    *v25 = v5 + 24;
    int64_t v26; // bp-40, 0x2866cc
    return function_caf2a(*v25, v23, v13, a4, a5, a6, (int64_t)&v26);
}

// Address range: 0x28690e - 0x286a41
int64_t function_28690e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x41173201; // bp-56, 0x2869a4
    bool v2; // 0x28690e
    int64_t result = function_caf2a(a1, a2, 0x4000 * (int64_t)(bool)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2, a4, a5, a6, (int64_t)&v1); // 0x286a3c
    return result;
}

// Address range: 0x286a41 - 0x286b90
int64_t function_286a41(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x70fbb682; // bp-56, 0x286ad0
    return function_caf2a(a1, a2, a3, a4, a5, a6, (int64_t)&v1 + 8);
}

// Address range: 0x286ba2 - 0x286ba5
int64_t function_286ba2(int64_t a1) {
    // 0x286ba2
    int64_t result; // 0x286ba2
    return result;
}

// Address range: 0x286c40 - 0x286c43
int64_t function_286c40(void) {
    // 0x286c40
    int64_t result; // 0x286c40
    return result;
}
