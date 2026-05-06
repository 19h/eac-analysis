/*
 * Targeted RetDec C for native executable gap queue batch 1752.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2d1907-0x2d1b07 rank=- name=- kind=- bytes=- uncovered=-
 *   0x30561e-0x30581e rank=- name=- kind=- bytes=- uncovered=-
 *   0x30581e-0x305a1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x305a1e-0x305c1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x30dc58-0x30de58 rank=- name=- kind=- bytes=- uncovered=-
 *   0x30de58-0x30e058 rank=- name=- kind=- bytes=- uncovered=-
 *   0x30e058-0x30e258 rank=- name=- kind=- bytes=- uncovered=-
 *   0x311cbb-0x311ebb rank=- name=- kind=- bytes=- uncovered=-
 *   0x311ebb-0x3120bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3120bb-0x3122bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3144bb-0x3146bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3146bb-0x3148bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3148bb-0x314abb rank=- name=- kind=- bytes=- uncovered=-
 *   0x359545-0x359645 rank=- name=- kind=- bytes=- uncovered=-
 *   0x359645-0x359845 rank=- name=- kind=- bytes=- uncovered=-
 *   0x359845-0x359a45 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_127d9eec();
int64_t function_136549c6();
int64_t function_2193770();
int64_t function_219afd4();
int64_t function_219d7d2();
int64_t function_2d1907(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d194f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d1b03(void);
int64_t function_30561e(int64_t a1, int64_t a2);
int64_t function_3056c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30584e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_305994(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_305bd5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_30dc58(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_30dcf5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30dd1a(void);
int64_t function_30dd39(int64_t a1);
int64_t function_30dd46(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_30dddc(void);
int64_t function_30ddeb(void);
int64_t function_30deb2(void);
int64_t function_30deb6(void);
int64_t function_30decf(void);
int64_t function_30dee1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30df3b(void);
int64_t function_30dfa3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30dfb2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_30dffd(void);
int64_t function_30e007(int64_t a1);
int64_t function_30e041(void);
int64_t function_30e0c3(void);
int64_t function_30e109(void);
int64_t function_30e12f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_30e140(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30e199(int64_t a1);
int64_t function_30e234(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_311cbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_311d19(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_311d5f(void);
int64_t function_311d76(int64_t a1);
int64_t function_311d7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_311dbb(int64_t a1);
int64_t function_311dbf(void);
int64_t function_311def(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_311e05(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_311f23(int64_t a1, int64_t a2);
int64_t function_311f3c(void);
int64_t function_311fa8(int64_t a1, int64_t a2);
int64_t function_31202a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_312034(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3120e2(void);
int64_t function_3120ff(void);
int64_t function_312119(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_31218e(void);
int64_t function_3121ee(void);
int64_t function_31224e(void);
int64_t function_31225d(void);
int64_t function_3144a5();
int64_t function_3144bb(int64_t a1);
int64_t function_3144e8(void);
int64_t function_31450a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_31452c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31454c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_314589(void);
int64_t function_31458b(int64_t a1);
int64_t function_314597(void);
int64_t function_31459d(void);
int64_t function_31461b(void);
int64_t function_31463f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_314669(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3146c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_31471f(int64_t a1);
int64_t function_31472d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31473d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3147d2(void);
int64_t function_314846(int64_t a1);
int64_t function_314860(int64_t a1, int64_t a2);
int64_t function_314873(int64_t a1);
int64_t function_314896(void);
int64_t function_3148f5(void);
int64_t function_314900(void);
int64_t function_314990(void);
int64_t function_3149ab(int64_t a1);
int64_t function_3149b3(void);
int64_t function_314a79(void);
int64_t function_314a8e(int64_t a1);
int64_t function_359545(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3595ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35962d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_35967a(int64_t a1);
int64_t function_3596cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35970e(void);
int64_t function_35971a(void);
int64_t function_359730(int64_t a1, int64_t a2);
int64_t function_359740(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_359754(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_35978f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3597d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6);
int64_t function_35984c(void);
int64_t function_359894(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3598d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_35997d(int64_t a1);
int64_t function_359981(void);
int64_t function_359991(void);
int64_t function_3599de(void);
int64_t function_3599fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_359a1f(void);
int64_t function_359a31(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3bd109e2();
int64_t function_45329b8c();
int64_t function_5fc3bf74();
int64_t function_6cb64ae8();
int64_t function_c823b();
int64_t function_cf3c7();
int64_t function_ffffffff80599aa8();
int64_t function_ffffffff8dbfa8b6();
int64_t function_ffffffff8f83a7b8();
int64_t function_ffffffffaafa3cf7();
int64_t function_fffffffffb9526c3();
int64_t unknown_1067f6ba();
int64_t unknown_1d30d497();
int64_t unknown_23784faf();
int64_t unknown_2591a4ac();
int64_t unknown_2c75bf88();
int64_t unknown_30d3fd83();
int64_t unknown_3132082e();
int64_t unknown_3477d5f3();
int64_t unknown_3adafc67();
int64_t unknown_3b2b3093();
int64_t unknown_3dfc2463();
int64_t unknown_5be5e658();
int64_t unknown_5db7b7d0();
int64_t unknown_6132935c();
int64_t unknown_7762815();
int64_t unknown_7c3be69b();
int64_t unknown_83b0d7c();
int64_t unknown_ffffffff818d33e6();
int64_t unknown_ffffffff88741ac5();
int64_t unknown_ffffffff88e07bc7();
int64_t unknown_ffffffff8921d666();
int64_t unknown_ffffffff8d677011();
int64_t unknown_ffffffff8f8d667a();
int64_t unknown_ffffffff96afb249();
int64_t unknown_ffffffff99ea156b();
int64_t unknown_ffffffffa4d823a9();
int64_t unknown_ffffffffaa664b22();
int64_t unknown_ffffffffab80b93b();
int64_t unknown_ffffffffb5e5fd77();
int64_t unknown_ffffffffb8cea1c6();
int64_t unknown_ffffffffc5ff2ce7();
int64_t unknown_ffffffffcabb11b1();
int64_t unknown_ffffffffcec3f56f();
int64_t unknown_ffffffffd11be21a();
int64_t unknown_ffffffffd14eb2fd();
int64_t unknown_ffffffffd847dbee();
int64_t unknown_ffffffffd92170c4();
int64_t unknown_ffffffffdc379834();
int64_t unknown_ffffffffe1377f89();
int64_t unknown_ffffffffe52b4e5f();
int64_t unknown_ffffffffe5f7803b();
int64_t unknown_ffffffffe836d5a0();
int64_t unknown_ffffffffe926264d();
int64_t unknown_ffffffffedec2de4();
int64_t unknown_fffffffff3a29ad0();
int64_t unknown_ffffffffff3076f5();
int64_t unknown_ffffffffff95d08e();

// Address range: 0x2d1907 - 0x2d194f
int64_t function_2d1907(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2 + 8 & 0xffffffff; // 0x2d1907
    *(int64_t *)v1 = v1 + 16;
    return function_cf3c7(a1, a5);
}

// Address range: 0x2d194f - 0x2d1ad1
int64_t function_2d194f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d194f
    return function_cf3c7(a1, a2);
}

// Address range: 0x2d1b03 - 0x2d1b06
int64_t function_2d1b03(void) {
    // 0x2d1b03
    int64_t result; // 0x2d1b03
    return result;
}

// Address range: 0x30561e - 0x3056c6
int64_t function_30561e(int64_t a1, int64_t a2) {
    // 0x30561e
    int64_t v1; // 0x30561e
    return function_c823b(v1, v1, v1, v1, v1, v1, v1);
}

// Address range: 0x3056c6 - 0x30584e
int64_t function_3056c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3056c6
    int64_t v1; // 0x3056c6
    return function_c823b(a1, a2, a3, a4, a5, v1, 0x2fed30);
}

// Address range: 0x30584e - 0x305994
int64_t function_30584e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x30584e
    int64_t v1; // bp-56, 0x30584e
    int64_t v2 = (int64_t)&v1; // 0x305954
    int64_t v3 = v2 + 16; // 0x305964
    v1 = v3;
    int64_t v4 = *(int64_t *)v3; // 0x305973
    *(int64_t *)(v2 + 8) = v4;
    v1 = v4;
    bool v5; // 0x30584e
    return function_c823b(0x4000 * (int64_t)(bool)v5 | 2048 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | 128 * (int64_t)v5 | 64 * (int64_t)v5 | 16 * (int64_t)v5 | (int64_t)v5 | 4 * (int64_t)v5 | 2, a2, a3, a4, a5, a6, 0x4acee8a2);
}

// Address range: 0x305994 - 0x305af3
int64_t function_305994(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x305994
    int64_t v1; // bp-40, 0x305994
    v1 = (int64_t)&v1;
    int64_t v2; // bp-56, 0x305994
    v2 = (int64_t)&v2 + 16;
    int64_t v3; // 0x305994
    return function_c823b(0x2ff227, a2, a3, v3, a5, a6, a7);
}

// Address range: 0x305bd5 - 0x305bde
int64_t function_305bd5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x305bd5
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v1; // 0x305bd5
    char * v2 = (char *)(v1 + 106); // 0x305bd6
    *v2 = *v2 & (char)(a4 / 256);
    return function_ffffffff8f83a7b8();
}

// Address range: 0x30dc58 - 0x30dc65
int64_t function_30dc58(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x30dc58
    int64_t v1; // 0x30dc58
    int64_t v2 = v1;
    char * v3 = (char *)(2 * v2 + 0xc8bafb2); // 0x30dc58
    *v3 = *v3 + (char)(a4 / 256);
    return (v2 + 82) % 256 | v2 & -256;
}

// Address range: 0x30dcf5 - 0x30dd1a
int64_t function_30dcf5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(4 * a1 - 0x6079ff6f + a4); // 0x30dcff
    int64_t result; // 0x30dcf5
    *v1 = *v1 + (int32_t)result;
    int32_t * v2 = (int32_t *)(a3 - 0x5f9c09e4); // 0x30dd0e
    *v2 = *v2 + (int32_t)result;
    unsigned char v3 = (char)a4 % 32; // 0x30dd14
    if (v3 != 0) {
        char * v4 = (char *)(a2 + 59); // 0x30dd14
        *v4 = *v4 >> v3;
    }
    return result;
}

// Address range: 0x30dd1a - 0x30dd27
int64_t function_30dd1a(void) {
    // 0x30dd1a
    unknown_ffffffffaa664b22();
    return function_3bd109e2();
}

// Address range: 0x30dd39 - 0x30dd3a
int64_t function_30dd39(int64_t a1) {
    // 0x30dd39
    int64_t result; // 0x30dd39
    return result;
}

// Address range: 0x30dd46 - 0x30dd6e
int64_t function_30dd46(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t result = unknown_ffffffffe926264d(); // 0x30dd46
    *(int32_t *)-0x176c4ead = *(int32_t *)-0x176c4ead + (int32_t)a1;
    int32_t * v1 = (int32_t *)(a3 + 0x5d9c10d6); // 0x30dd52
    *v1 = *v1 + (int32_t)a3;
    int64_t v2; // 0x30dd46
    char * v3 = (char *)(v2 - 0x60687fcd); // 0x30dd5d
    *v3 = *v3 & (char)(a4 / 256);
    return result;
}

// Address range: 0x30dddc - 0x30dde3
int64_t function_30dddc(void) {
    // 0x30dddc
    return unknown_ffffffffedec2de4();
}

// Address range: 0x30ddeb - 0x30ddf2
int64_t function_30ddeb(void) {
    // 0x30ddeb
    int64_t result; // 0x30ddeb
    return result;
}

// Address range: 0x30deb2 - 0x30deb3
int64_t function_30deb2(void) {
    // 0x30deb2
    int64_t result; // 0x30deb2
    return result;
}

// Address range: 0x30deb6 - 0x30deb7
int64_t function_30deb6(void) {
    // 0x30deb6
    int64_t result; // 0x30deb6
    return result;
}

// Address range: 0x30decf - 0x30ded0
int64_t function_30decf(void) {
    // 0x30decf
    int64_t result; // 0x30decf
    return result;
}

// Address range: 0x30dee1 - 0x30df30
int64_t function_30dee1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30dee1
    unknown_ffffffffc5ff2ce7();
    int32_t * v1 = (int32_t *)(a2 + 0x7800288e); // 0x30deef
    *v1 = *v1 + (int32_t)a1;
    int64_t v2 = unknown_ffffffffd14eb2fd(); // 0x30def7
    char v3 = v2; // 0x30deff
    *(char *)-0x16f733f4 = *(char *)-0x16f733f4 | v3;
    int32_t * v4 = (int32_t *)(a1 + 0x62d9ad45); // 0x30df05
    int64_t v5; // 0x30dee1
    *v4 = *v4 + (int32_t)v5;
    *(int32_t *)a1 = (int32_t)v2;
    bool v6; // 0x30dee1
    int64_t v7 = (v6 ? -4 : 4) + a1; // 0x30df0c
    int64_t v8 = unknown_7762815(v7); // 0x30df14
    if (v3 != -128) {
        v8 = function_30deb6();
    }
    char * v9 = (char *)(v8 - 24); // 0x30df16
    *v9 = *(char *)(v5 - 108) + (char)a4 + *v9;
    int32_t * v10 = (int32_t *)v7; // 0x30df19
    *v10 = *v10 + (int32_t)a3;
    int32_t v11 = __asm_in_133(48); // 0x30df1d
    uint64_t v12 = (int64_t)v11; // 0x30df1d
    char * v13 = (char *)(v12 + 0x71d1a00); // 0x30df1f
    *v13 = *v13 + (char)v11;
    char * v14 = (char *)(a3 + 1); // 0x30df25
    *v14 = *v14 + (char)(v12 / 256);
    unknown_3132082e();
    return function_30deb2();
}

// Address range: 0x30df3b - 0x30df40
int64_t function_30df3b(void) {
    // 0x30df3b
    return function_ffffffffaafa3cf7();
}

// Address range: 0x30dfa3 - 0x30dfa8
int64_t function_30dfa3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x30dfa3
    int64_t result; // 0x30dfa3
    *(int32_t *)a1 = (int32_t)result + (int32_t)a4;
    return result;
}

// Address range: 0x30dfb2 - 0x30dfcc
int64_t function_30dfb2(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 80); // 0x30dfb2
    *v1 = *v1 + (int32_t)a3;
    int64_t v2; // 0x30dfb2
    *(int32_t *)-0x746a97cba174e7f6 = (int32_t)v2;
    int64_t v3 = unknown_ffffffffd92170c4(); // 0x30dfbe
    return v3 & -256 | (int64_t)(*(char *)(a3 - 0x5d74f5e1) | (char)v3);
}

// Address range: 0x30dffd - 0x30dffe
int64_t function_30dffd(void) {
    // 0x30dffd
    int64_t result; // 0x30dffd
    return result;
}

// Address range: 0x30e007 - 0x30e008
int64_t function_30e007(int64_t a1) {
    // 0x30e007
    int64_t result; // 0x30e007
    return result;
}

// Address range: 0x30e041 - 0x30e046
int64_t function_30e041(void) {
    // 0x30e041
    return function_5fc3bf74();
}

// Address range: 0x30e0c3 - 0x30e0c4
int64_t function_30e0c3(void) {
    // 0x30e0c3
    int64_t result; // 0x30e0c3
    return result;
}

// Address range: 0x30e109 - 0x30e10c
int64_t function_30e109(void) {
    // 0x30e109
    int64_t result; // 0x30e109
    return result;
}

// Address range: 0x30e12f - 0x30e140
int64_t function_30e12f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x30e12f
    int64_t result; // 0x30e12f
    char * v1 = (char *)(result - 0x46fe1800); // 0x30e12f
    *v1 = *v1 + (char)(a4 / 256);
    char * v2 = (char *)(result - 0x24c8c55c); // 0x30e135
    *v2 = *v2 + (char)(result / 256);
    return result;
}

// Address range: 0x30e140 - 0x30e172
int64_t function_30e140(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30e140
    bool v1; // 0x30e140
    if (v1) {
        function_30e0c3();
    }
    // 0x30e142
    unknown_ffffffff96afb249();
    unknown_5be5e658();
    unknown_3adafc67();
    __asm_wait();
    return function_219afd4();
}

// Address range: 0x30e199 - 0x30e19a
int64_t function_30e199(int64_t a1) {
    // 0x30e199
    int64_t result; // 0x30e199
    return result;
}

// Address range: 0x30e234 - 0x30e23b
int64_t function_30e234(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30e234
    int64_t result; // 0x30e234
    __asm_out((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x311cbb - 0x311cf1
int64_t function_311cbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x311cbb
    unknown_ffffffffb8cea1c6();
    __asm_in(0x3a70);
    int64_t result = a4 & 0xffffffff; // 0x311cc7
    *(int32_t *)result = (int32_t)a4;
    int32_t v1 = *(int32_t *)(int64_t)*(int32_t *)0x1142678f8; // 0x311ce9
    while (((v1 + 76 ^ v1) & (v1 ^ -0x80000000)) >= 0) {
        // 0x311cd6
        *(int32_t *)result = (int32_t)a4;
        v1 = *(int32_t *)(int64_t)*(int32_t *)0x1142678f8;
    }
    int32_t * v2 = (int32_t *)(result + 10); // 0x311cee
    *v2 = *v2 - 0x33fe1756;
    return result;
}

// Address range: 0x311d19 - 0x311d26
int64_t function_311d19(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x311d19
    int64_t v1; // 0x311d19
    bool v2; // 0x311d19
    int32_t * v3 = (int32_t *)((a4 - 256 * (v1 + (int64_t)v2) & 0xff00 | a4 & -0xff01) - 0x1a5fd5ed); // 0x311d1b
    *v3 = *v3 + (int32_t)v1;
    return v1 & -0xff01 | (int64_t)&g2;
}

// Address range: 0x311d5f - 0x311d60
int64_t function_311d5f(void) {
    // 0x311d5f
    int64_t result; // 0x311d5f
    return result;
}

// Address range: 0x311d76 - 0x311d77
int64_t function_311d76(int64_t a1) {
    // 0x311d76
    int64_t result; // 0x311d76
    return result;
}

// Address range: 0x311d7c - 0x311d92
int64_t function_311d7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x311d7c
    *(int64_t *)0xaa8560f8 = a2;
    int64_t v1; // 0x311d7c
    int32_t * v2 = (int32_t *)(v1 + 0x758572f3 + v1);
    *v2 = *v2 + (int32_t)v1;
    int64_t v3; // 0x311d7c
    return (int64_t)(-0x59a53331 * *(int32_t *)&v3);
}

// Address range: 0x311dbb - 0x311dbe
int64_t function_311dbb(int64_t a1) {
    // 0x311dbb
    int64_t result; // 0x311dbb
    __asm_out_134(123, (char)result);
    return result;
}

// Address range: 0x311dbf - 0x311dc1
int64_t function_311dbf(void) {
    // 0x311dbf
    return function_311d5f();
}

// Address range: 0x311def - 0x311e04
int64_t function_311def(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x311def
    return function_2193770();
}

// Address range: 0x311e05 - 0x311ef2
int64_t function_311e05(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x311e05
    int64_t v1; // 0x311e05
    uint64_t v2 = v1;
    uint64_t result2 = v1;
    int32_t v3 = result2;
    bool v4; // 0x311e05
    // 0x311e07
    *(int32_t *)result2 = v3 - (int32_t)a4 + (int32_t)v4;
    *(char *)(a4 + 0x6266861c) = (char)v2;
    int16_t v5 = a3; // 0x311e16
    int32_t result = __asm_in_135(v5); // 0x311e16
    *(int32_t *)a1 = __asm_insd(v5);
    return result;
    if (v4) {
        // 0x311e24
        *(int32_t *)result2 = 2 * v3;
        *(int32_t *)a3 = (int32_t)a1;
        return (2 * result2 & 0xfe00) + 0x5300 & 0xff00 | result2 & -0xff01;
    }
    char * v6 = (char *)(a1 - 51); // 0x311e63
    *v6 = *v6 ^ (char)(result2 / 256);
    *(char *)0x26c99a72 = *(char *)0x26c99a72 + (char)(v2 / 256);
    return result2;
}

// Address range: 0x311f23 - 0x311f24
int64_t function_311f23(int64_t a1, int64_t a2) {
    // 0x311f23
    int64_t v1; // 0x311f23
    return v1 & 0xffffffff;
}

// Address range: 0x311f3c - 0x311f41
int64_t function_311f3c(void) {
    // 0x311f3c
    return function_ffffffff8dbfa8b6();
}

// Address range: 0x311fa8 - 0x311fb6
int64_t function_311fa8(int64_t a1, int64_t a2) {
    // 0x311fa8
    bool v1; // 0x311fa8
    int64_t v2 = (v1 ? -1 : 1) + a1; // 0x311fa8
    unknown_23784faf(v2);
    return __asm_sti(v2);
}

// Address range: 0x31202a - 0x31202d
int64_t function_31202a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31202a
    int64_t result; // 0x31202a
    return result;
}

// Address range: 0x312034 - 0x312095
int64_t function_312034(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x312034
    int64_t v3 = v2 & 0xc5fa3343 | 0x3a05ccbc; // 0x312034
    *(char *)(a4 - 0x2d210ef9) = -1;
    int64_t v4; // 0x312034
    *(int32_t *)a4 = *(int32_t *)&v4 + (int32_t)a2;
    __asm_outsb((int16_t)a3, *(char *)&v1);
    char * v5 = (char *)v3; // 0x312049
    unsigned char v6 = *v5; // 0x312049
    *v5 = v6 / 128 | 2 * v6;
    uint32_t v7 = (int32_t)a4; // 0x31204f
    uint32_t v8 = v7 + (int32_t)a1; // 0x31204f
    int64_t v9 = v8; // 0x31204f
    v4 = v9;
    uint32_t v10 = v8 % 32;
    int64_t v11 = v3; // 0x312051
    if (v10 != 0) {
        v11 = (int32_t)(v8 < v7) << 32 - v10 | (int32_t)(v3 << (int64_t)(33 - v10)) | (int32_t)v3 >> v10;
    }
    int64_t v12 = (int32_t)v11 >> 31; // 0x312054
    unknown_3dfc2463();
    __asm_wait();
    int64_t v13 = __asm_hlt(); // 0x312081
    int32_t * v14 = (int32_t *)((v2 - a2 & 0xffffffff) - 21 + v12); // 0x312084
    *v14 = -1 - *v14;
    if (v10 != 0) {
        uint32_t v15 = *(int32_t *)v9; // 0x31208d
        *(int32_t *)v4 = v15 >> v10 | v15 << 32 - v10;
    }
    return 256 * v12 + v13 & 0xff00 | v13 & -0xff01;
}

// Address range: 0x3120e2 - 0x3120e3
int64_t function_3120e2(void) {
    // 0x3120e2
    int64_t result; // 0x3120e2
    return result;
}

// Address range: 0x3120ff - 0x312100
int64_t function_3120ff(void) {
    // 0x3120ff
    int64_t result; // 0x3120ff
    return result;
}

// Address range: 0x312119 - 0x31217d
int64_t function_312119(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1;
    int64_t v2; // 0x312119
    char * v3 = (char *)((v2 & -0xff01 | (int64_t)&g1) + 0x67798e5f); // 0x312121
    *v3 = *v3 | (char)(a3 / 256);
    unsigned char v4 = *(char *)0x455dc12e; // 0x312127
    unsigned char v5 = v4 + (char)((int64_t)&g1 >> 8); // 0x312127
    *(char *)0x455dc12e = v5;
    int64_t v6 = v5 < v4 ? 190 : 191; // 0x31212d
    uint32_t v7 = (int32_t)(v6 | v2 & 0xffffff00); // 0x31213f
    char * v8 = (char *)(a4 - 0x5a51ded5); // 0x312144
    *v8 = *v8 + (char)v6 + (char)(v7 < 0x2d276701);
    __asm_out_136(42, *(int32_t *)&v1 | v7);
    return function_3120e2();
}

// Address range: 0x31218e - 0x31218f
int64_t function_31218e(void) {
    // 0x31218e
    int64_t result; // 0x31218e
    return result;
}

// Address range: 0x3121ee - 0x3121f0
int64_t function_3121ee(void) {
    // 0x3121ee
    return function_31218e();
}

// Address range: 0x31224e - 0x31224f
int64_t function_31224e(void) {
    // 0x31224e
    int64_t result; // 0x31224e
    return result;
}

// Address range: 0x31225d - 0x312267
int64_t function_31225d(void) {
    // 0x31225d
    int64_t v1; // 0x31225d
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 - 0x38d907f6); // 0x31225d
    *v3 = *v3 + (int32_t)v1;
    *(int32_t *)v2 = (int32_t)v2;
    return function_31224e();
}

// Address range: 0x3144bb - 0x3144bc
int64_t function_3144bb(int64_t a1) {
    // 0x3144bb
    int64_t result; // 0x3144bb
    return result;
}

// Address range: 0x3144e8 - 0x3144f0
int64_t function_3144e8(void) {
    // 0x3144e8
    return unknown_ffffffffd847dbee();
}

// Address range: 0x31450a - 0x314527
int64_t function_31450a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a5;
    unknown_ffffffff8d677011();
    v1 = a5;
    if (a4 == 0) {
        function_3144a5();
    }
    int64_t v2 = unknown_ffffffffd11be21a(); // 0x314514
    int64_t v3 = (int64_t)&v1; // 0x314519
    v1 = 0x100000000000000 * (v1 ^ v3) - 0x6e00000000000000 >> 56;
    int64_t v4; // 0x31450a
    int64_t v5 = v4 ^ v3;
    int32_t * v6 = (int32_t *)(a3 + 1); // 0x314523
    *v6 = *v6 + (int32_t)v2;
    return (v5 + a4 / 256) % 256 | v5 & 0xffffff00;
}

// Address range: 0x31452c - 0x31454a
int64_t function_31452c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t result = unknown_ffffffffab80b93b(); // 0x314535
    char * v1 = (char *)(result + 5); // 0x31453a
    *v1 = *v1 + (char)(result / 256);
    int32_t * v2 = (int32_t *)(a4 - 29); // 0x31453d
    *v2 = *v2 - 0x170327f6;
    int32_t * v3 = (int32_t *)(result + 10); // 0x314545
    int64_t v4; // 0x31452c
    *v3 = *v3 + (int32_t)v4;
    int64_t v5; // 0x31452c
    __asm_outsd((int16_t)a3, *(int32_t *)&v5);
    return result;
}

// Address range: 0x31454c - 0x31457d
int64_t function_31454c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a4;
    unsigned char v2 = (char)(a3 / 256); // 0x31454c
    unsigned char v3 = v2 + (char)a4; // 0x31454c
    if (llvm_ctpop_i8(v3) % 2 == 0) {
        // 0x314550
        return function_219d7d2();
    }
    unsigned char v4 = (char)a1;
    unsigned char v5 = __asm_in_137(-41) + v4; // 0x31456f
    unsigned char v6 = v5 + (char)(v3 < v2); // 0x31456f
    *(char *)a1 = v6;
    int64_t v7 = unknown_ffffffffb5e5fd77(); // 0x314571
    if (v6 == 0 || (v3 < v2 ? v6 <= v4 : v5 < v4)) {
        // 0x31455c
        *(int32_t *)v1 = *(int32_t *)&v1 | (int32_t)a1;
        return unknown_ffffffff8921d666();
    }
    // 0x314578
    return v7 & 0xbc6e204f | 0x4391dfb0;
}

// Address range: 0x314589 - 0x31458a
int64_t function_314589(void) {
    // 0x314589
    int64_t result; // 0x314589
    return result;
}

// Address range: 0x31458b - 0x31458c
int64_t function_31458b(int64_t a1) {
    // 0x31458b
    int64_t result; // 0x31458b
    return result;
}

// Address range: 0x314597 - 0x314598
int64_t function_314597(void) {
    // 0x314597
    int64_t result; // 0x314597
    return result;
}

// Address range: 0x31459d - 0x31459e
int64_t function_31459d(void) {
    // 0x31459d
    int64_t result; // 0x31459d
    return result;
}

// Address range: 0x31461b - 0x31461c
int64_t function_31461b(void) {
    // 0x31461b
    int64_t result; // 0x31461b
    return result;
}

// Address range: 0x31463f - 0x314644
int64_t function_31463f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31463f
    int64_t v1; // 0x31463f
    *(int32_t *)a4 = 2 * (int32_t)v1;
    return v1 & -24;
}

// Address range: 0x314669 - 0x3146bf
int64_t function_314669(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x314669
    unknown_ffffffffcec3f56f();
    int32_t v1 = (int32_t)a4 - *(int32_t *)(a4 - 0x7251019); // 0x31466e
    unknown_ffffffff8f8d667a();
    if (v1 < 0) {
        function_31461b();
    }
    uint32_t v2 = (int32_t)a2;
    unknown_30d3fd83();
    int64_t v3; // 0x314669
    uint32_t v4 = (int32_t)v3; // 0x314682
    *(int32_t *)a2 = v2 - v4;
    int64_t v5 = unknown_ffffffffff95d08e(); // 0x314687
    uint32_t v6 = *(int32_t *)(v5 + 5); // 0x31468f
    int32_t * v7 = (int32_t *)(a1 + 19); // 0x314692
    *v7 = (v1 & -256 | 157) + (int32_t)(v2 < v4) + *v7;
    unknown_7c3be69b();
    int64_t result = unknown_ffffffffcabb11b1(); // 0x3146ab
    *(char *)-0x15ccd0ec = *(char *)-0x15ccd0ec + 96;
    *(int32_t *)(result + 1) = (int32_t)((v5 & 0xffffffff | 0x100000000 * a3) % (int64_t)v6);
    return result;
}

// Address range: 0x3146c0 - 0x3146e5
int64_t function_3146c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3146c0
    int64_t v1; // 0x3146c0
    int32_t * v2 = (int32_t *)(v1 + 0x63f997c); // 0x3146c0
    *v2 = *v2 + (int32_t)v1;
    int32_t * v3 = (int32_t *)(unknown_5db7b7d0() - 0x6b2f36f6); // 0x3146d8
    *v3 = *v3 + (int32_t)a4;
    return __asm_int1() / 2 % 0x80000000;
}

// Address range: 0x31471f - 0x314729
int64_t function_31471f(int64_t a1) {
    // 0x31471f
    int64_t result; // 0x31471f
    *(int32_t *)a1 = (int32_t)result - (int32_t)a1;
    return result;
}

// Address range: 0x31472d - 0x31473b
int64_t function_31472d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x3615a841); // 0x31472d
    *v1 = *v1 | (int32_t)a4;
    return unknown_ffffffffe5f7803b(a1, a2, a3, a4);
}

// Address range: 0x31473d - 0x3147a3
int64_t function_31473d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x31473d
    int64_t v1; // 0x31473d
    uint64_t v2 = v1;
    int64_t v3 = a2;
    char v4 = (char)(v2 / 256) + (char)v2; // 0x31473d
    if (v4 >= 0) {
        // 0x31478d
        return unknown_3b2b3093();
    }
    int32_t * v5 = (int32_t *)(a2 - 0x3bf8e87a); // 0x314743
    *v5 = *v5 + (int32_t)a2;
    int32_t * v6 = (int32_t *)(v1 + 68 + 4 * v1); // 0x31475a
    *v6 = *v6 + (int32_t)v1;
    *(char *)a1 = *(char *)&v3;
    return (256 * (int64_t)v4 | v2 & 0xffff00ff) & v1;
}

// Address range: 0x3147d2 - 0x3147de
int64_t function_3147d2(void) {
    // 0x3147d2
    return function_136549c6();
}

// Address range: 0x314846 - 0x314849
int64_t function_314846(int64_t a1) {
    // 0x314846
    int64_t result; // 0x314846
    return result;
}

// Address range: 0x314860 - 0x314865
int64_t function_314860(int64_t a1, int64_t a2) {
    // 0x314860
    return function_314846((int64_t)&g3);
}

// Address range: 0x314873 - 0x314876
int64_t function_314873(int64_t a1) {
    // 0x314873
    int64_t result; // 0x314873
    return result;
}

// Address range: 0x314896 - 0x314899
int64_t function_314896(void) {
    // 0x314896
    int64_t result; // 0x314896
    return result;
}

// Address range: 0x3148f5 - 0x3148f6
int64_t function_3148f5(void) {
    // 0x3148f5
    int64_t result; // 0x3148f5
    return result;
}

// Address range: 0x314900 - 0x314902
int64_t function_314900(void) {
    // 0x314900
    return function_3148f5();
}

// Address range: 0x314990 - 0x314991
int64_t function_314990(void) {
    // 0x314990
    int64_t result; // 0x314990
    return result;
}

// Address range: 0x3149ab - 0x3149ae
int64_t function_3149ab(int64_t a1) {
    // 0x3149ab
    return function_314990();
}

// Address range: 0x3149b3 - 0x3149b4
int64_t function_3149b3(void) {
    // 0x3149b3
    int64_t result; // 0x3149b3
    return result;
}

// Address range: 0x314a79 - 0x314a80
int64_t function_314a79(void) {
    // 0x314a79
    return function_6cb64ae8();
}

// Address range: 0x314a8e - 0x314a8f
int64_t function_314a8e(int64_t a1) {
    // 0x314a8e
    int64_t result; // 0x314a8e
    return result;
}

// Address range: 0x359545 - 0x3595fe
int64_t function_359545(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x359545
    *(int32_t *)-0x5d88fe17fe871ab7 = (int32_t)v2;
    int64_t v3 = a2;
    bool v4 = -1 - (int32_t)v2 < (int32_t)v2; // 0x359545
    int64_t v5; // 0x359545
    int64_t v6 = v5;
    uint64_t v7 = a4 & -256 | 60;
    char v8 = *(char *)(v2 - 0x4c72b591); // 0x359553
    int64_t v9 = unknown_ffffffffe52b4e5f(); // 0x359559
    *(char *)v1 = *(char *)&v1 | (char)(v2 / 256);
    __asm_outsb((int16_t)v1, *(char *)v3);
    unsigned char v10 = (char)v9; // 0x359562
    unsigned char v11 = v10 - 5; // 0x359562
    int64_t v12 = v6 - 8; // 0x359564
    *(int64_t *)v12 = 9;
    int64_t v13 = v6 - 16; // 0x359566
    *(int64_t *)v13 = v12;
    int64_t v14 = (256 * (int64_t)((char)v4 + (char)(v7 / 256) + v8) | v7 & -0xff01) - 1; // 0x359567
    if (v14 != 0 == v11 == 0) {
        // break (via goto) -> 0x3595e3
        goto lab_0x3595e3;
    }
    int64_t v15 = v14; // 0x359569
    v4 = v10 < 5;
    int64_t v16 = v13; // 0x359569
    while (llvm_ctpop_i8(v11) % 2 == 0) {
        // 0x359553
        v6 = v16;
        v7 = v15;
        v8 = *(char *)(v2 - 0x4c72b591);
        v9 = unknown_ffffffffe52b4e5f();
        *(char *)v1 = *(char *)&v1 | (char)(v2 / 256);
        __asm_outsb((int16_t)v1, *(char *)v3);
        v10 = (char)v9;
        v11 = v10 - 5;
        v12 = v6 - 8;
        *(int64_t *)v12 = 9;
        v13 = v6 - 16;
        *(int64_t *)v13 = v12;
        v14 = (256 * (int64_t)((char)v4 + (char)(v7 / 256) + v8) | v7 & -0xff01) - 1;
        if (v14 != 0 == v11 == 0) {
            // break (via goto) -> 0x3595e3
            goto lab_0x3595e3;
        }
        // 0x359569
        v15 = v14;
        v4 = v10 < 5;
        v16 = v13;
    }
    // 0x35956b
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v13;
    unsigned char v17 = (char)v3; // 0x359573
    while (v17 < 149) {
        // 0x359553
        v3 = v9 & 0xb621000 | (int64_t)v11 | 0xf49defb0;
        v4 = v17 < 149;
        v6 = v13;
        v7 = v14;
        v8 = *(char *)(v2 - 0x4c72b591);
        v9 = unknown_ffffffffe52b4e5f();
        *(char *)v1 = *(char *)&v1 | (char)(v2 / 256);
        __asm_outsb((int16_t)v1, *(char *)v3);
        v10 = (char)v9;
        v11 = v10 - 5;
        v12 = v6 - 8;
        *(int64_t *)v12 = 9;
        v13 = v6 - 16;
        *(int64_t *)v13 = v12;
        v14 = (256 * (int64_t)((char)v4 + (char)(v7 / 256) + v8) | v7 & -0xff01) - 1;
        if (v14 != 0 == v11 == 0) {
            // break (via goto) -> 0x3595e3
            goto lab_0x3595e3;
        }
        // 0x359569
        v15 = v14;
        v4 = v10 < 5;
        v16 = v13;
        while (llvm_ctpop_i8(v11) % 2 == 0) {
            // 0x359553
            v6 = v16;
            v7 = v15;
            v8 = *(char *)(v2 - 0x4c72b591);
            v9 = unknown_ffffffffe52b4e5f();
            *(char *)v1 = *(char *)&v1 | (char)(v2 / 256);
            __asm_outsb((int16_t)v1, *(char *)v3);
            v10 = (char)v9;
            v11 = v10 - 5;
            v12 = v6 - 8;
            *(int64_t *)v12 = 9;
            v13 = v6 - 16;
            *(int64_t *)v13 = v12;
            v14 = (256 * (int64_t)((char)v4 + (char)(v7 / 256) + v8) | v7 & -0xff01) - 1;
            if (v14 != 0 == v11 == 0) {
                // break (via goto) -> 0x3595e3
                goto lab_0x3595e3;
            }
            // 0x359569
            v15 = v14;
            v4 = v10 < 5;
            v16 = v13;
        }
        // 0x35956b
        *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v13;
        v17 = (char)v3;
    }
    // 0x359577
    return v3 & 0xffffffff;
  lab_0x3595e3:;
    int64_t v18 = 2 * a1; // 0x3595e3
    *(int64_t *)(v6 - 24) = 0x7a7a702a;
    int64_t result = unknown_ffffffffff3076f5((int32_t)v18); // 0x3595ef
    uint32_t v19 = *(int32_t *)-0x17c88204; // 0x3595f4
    *(int32_t *)-0x17c88204 = v19 / 2;
    *(char *)(v18 & 0xfffffffe) = (char)result;
    unsigned char v20 = (char)v14 % 32; // 0x3595fc
    if (v20 != 0) {
        char * v21 = (char *)result; // 0x3595fc
        unsigned char v22 = *v21; // 0x3595fc
        *v21 = (char)(v19 % 2 != 0) << v20 - 1 | v22 << v20 | (char)((int16_t)v22 >> (int16_t)(9 - v20));
    }
    return result;
}

// Address range: 0x3595ff - 0x359620
int64_t function_3595ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3595ff
    int64_t v1; // 0x3595ff
    int64_t result = v1 & 0xffffffff; // 0x359601
    __asm_out_134(44, (char)v1);
    *(char *)-0x10cf69e8 = *(char *)-0x10cf69e8 + (char)(v1 / 256);
    *(int32_t *)result = (int32_t)v1 - 7;
    return result;
}

// Address range: 0x35962d - 0x359634
int64_t function_35962d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x35962d
    int64_t v1; // 0x35962d
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + (char)a3;
    return function_fffffffffb9526c3();
}

// Address range: 0x35967a - 0x35967b
int64_t function_35967a(int64_t a1) {
    // 0x35967a
    int64_t result; // 0x35967a
    return result;
}

// Address range: 0x3596cd - 0x3596d6
int64_t function_3596cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3596cd
    int64_t v1; // 0x3596cd
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v1 - 0x257e211c); // 0x3596cd
    *v3 = *v3 + (int32_t)v1;
    return (v2 & 0xff00) + a3 & 0xff00 | v2 & -0xff01;
}

// Address range: 0x35970e - 0x35970f
int64_t function_35970e(void) {
    // 0x35970e
    int64_t result; // 0x35970e
    return result;
}

// Address range: 0x35971a - 0x35971f
int64_t function_35971a(void) {
    // 0x35971a
    int64_t result; // 0x35971a
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)v1 + (int32_t)result;
    return result;
}

// Address range: 0x359730 - 0x35973e
int64_t function_359730(int64_t a1, int64_t a2) {
    // 0x359730
    int64_t v1; // 0x359730
    int32_t * v2 = (int32_t *)(v1 + 0x150099c2); // 0x359730
    *v2 = *v2 | (int32_t)v1;
    return unknown_ffffffffe1377f89((int32_t)(v1 ^ a1));
}

// Address range: 0x359740 - 0x359751
int64_t function_359740(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x359740
    int64_t result; // 0x359740
    return result;
}

// Address range: 0x359754 - 0x35978f
int64_t function_359754(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x359754
    int32_t v1; // 0x359754
    int64_t v2; // 0x359754
    *(int32_t *)v2 = (int32_t)(int64_t)&v1;
    int64_t v3 = unknown_6132935c() + 0x33ae1398 & 0xffffffff; // bp-8, 0x359762
    unknown_ffffffff99ea156b();
    char * v4 = (char *)(8 * a2 + a1); // 0x35976a
    *v4 = 2 * *v4;
    *(char *)a3 = (char)a4;
    uint32_t v5 = (int32_t)(int64_t)&v3; // 0x35976f
    uint32_t v6 = *(int32_t *)(v2 + 2 * a2); // 0x35976f
    if (v6 <= v5) {
        function_35970e();
    }
    int64_t v7 = unknown_83b0d7c(); // 0x359776
    unsigned char v8 = *(char *)(v7 - 11) + (char)v7; // 0x35977b
    *(int64_t *)(int64_t)(v5 - v6) = a5;
    *(char *)0x39b53c01e80710d7 = v8;
    return v7 & -256 | (int64_t)v8;
}

// Address range: 0x35978f - 0x3597d1
int64_t function_35978f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x35978f
    int64_t v1; // 0x35978f
    int64_t v2 = v1 & 0xffffffff; // 0x359792
    uint64_t v3 = unknown_ffffffffa4d823a9(); // 0x3597a3
    char v4 = *(char *)(v3 + 8); // 0x3597a8
    int64_t v5 = 256 * (int64_t)(v4 | (char)(v3 / 256)) | v3 & -0xff01; // 0x3597a8
    *(int32_t *)a1 = (int32_t)v5;
    bool v6; // 0x35978f
    int64_t v7 = (v6 ? -4 : 4) + a1; // 0x3597ac
    int64_t v8; // 0x35978f
    *(char *)v7 = *(char *)&v8;
    int64_t v9 = v6 ? -1 : 1; // 0x3597b4
    *(int64_t *)(v2 - 8) = v5;
    unknown_ffffffff88e07bc7(v7 + v9, v9 + a2, (int32_t)v3 >> 31);
    float80_t v10; // 0x35978f
    *(float64_t *)((2 * v1 & 0xffffffff) + 6) = (float64_t)v10;
    *(int64_t *)(v2 - 16) = -54;
    return __asm_iretd();
}

// Address range: 0x3597d1 - 0x35984a
int64_t function_3597d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6) {
    // 0x3597d1
    int64_t v1; // 0x3597d1
    unsigned char v2 = (char)v1; // 0x3597d4
    unsigned char v3 = (char)v1;
    int32_t v4 = v1;
    int64_t result; // 0x3597d1
    if (v2 - v3 < 0) {
        // 0x35982e
        unknown_ffffffffdc379834();
        int32_t v5 = __asm_in_133(90); // 0x359833
        result = (int64_t)((v5 + 111) % 256) | (int64_t)(v5 & -256);
        if ((char)v5 >= 145) {
            // 0x359839
            __asm_iretd();
            int32_t v6 = __asm_in_133(59); // 0x359843
            char v7 = *(char *)(v1 + a3 & 0xffffffff); // 0x359846
            *(char *)a2 = (char)(a5 / 256) + (char)a2;
            return (int64_t)((char)v6 - v7) | (int64_t)(v6 & -256);
        }
    } else {
        // 0x3597d8
        bool v8; // 0x3597d1
        int64_t v9 = __asm_fnstenv((v8 ? -1 : 1) + a1); // 0x3597d8
        *(int224_t *)v9 = (int224_t)v9;
        *(int32_t *)v9 = (int32_t)(v2 < v3) + v4 + (int32_t)v9;
        float80_t v10; // 0x3597d1
        *(float32_t *)(v1 + 0xb33d5200 & 0xffffffff) = (float32_t)v10;
        result = 0x8000 * (int32_t)a2 >> 16;
    }
    int32_t * v11 = (int32_t *)((v1 & 0xffffffff) + 0x58cdc688); // 0x3597ef
    *v11 = *v11 + (int32_t)result;
    int32_t * v12 = (int32_t *)result; // 0x3597f5
    *v12 = v4 - 1 + *v12;
    return result;
}

// Address range: 0x35984c - 0x35984d
int64_t function_35984c(void) {
    // 0x35984c
    int64_t result; // 0x35984c
    return result;
}

// Address range: 0x359894 - 0x3598d4
int64_t function_359894(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x359894
    int64_t v1; // 0x359894
    int64_t v2 = v1;
    *(int32_t *)-0xee3ec5 = *(int32_t *)-0xee3ec5 ^ (int32_t)v1;
    unknown_ffffffffe836d5a0();
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a3;
    if ((char)unknown_2591a4ac() < 166) {
        function_359894(a1, a6, a3, a4, a5, (int64_t)&g3);
    }
    int32_t * v3 = (int32_t *)(a3 - 0x6b0a544b); // 0x3598ac
    *v3 = *v3 + (int32_t)a1;
    unknown_1067f6ba();
    char * v4 = (char *)(a6 + 0x5b87bb3e); // 0x3598b9
    *v4 = *v4 | (char)a4;
    unknown_ffffffff88741ac5();
    __asm_in_133(-11);
    unknown_fffffffff3a29ad0();
    while (true) {
        // continue -> 0x3598d2
    }
}

// Address range: 0x3598d6 - 0x359900
int64_t function_3598d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3598d6
    int64_t v1; // 0x3598d6
    int64_t v2 = v1;
    __asm_in_137(-24);
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a2;
    unknown_ffffffff818d33e6();
    bool v3; // 0x3598d6
    int64_t result = unknown_3477d5f3((v3 ? -4 : 4) + a1) + 0xe8329270 & 0xffffffff; // 0x3598f4
    int32_t * v4 = (int32_t *)(result - 0x226b6ff6); // 0x3598f9
    int64_t v5; // 0x3598d6
    *v4 = *v4 + (int32_t)(int64_t)&v5;
    return result;
}

// Address range: 0x35997d - 0x35997e
int64_t function_35997d(int64_t a1) {
    // 0x35997d
    int64_t result; // 0x35997d
    return result;
}

// Address range: 0x359981 - 0x35998c
int64_t function_359981(void) {
    // 0x359981
    unknown_2c75bf88();
    return function_127d9eec();
}

// Address range: 0x359991 - 0x3599a4
int64_t function_359991(void) {
    // 0x359991
    unknown_1d30d497();
    __asm_in_137(96);
    return function_45329b8c();
}

// Address range: 0x3599de - 0x3599df
int64_t function_3599de(void) {
    // 0x3599de
    int64_t result; // 0x3599de
    return result;
}

// Address range: 0x3599fb - 0x359a00
int64_t function_3599fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3599fb
    int64_t result; // 0x3599fb
    *(int32_t *)a4 = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x359a1f - 0x359a2f
int64_t function_359a1f(void) {
    function_3599de();
    // 0x359a23
    return function_ffffffff80599aa8();
}

// Address range: 0x359a31 - 0x359a36
int64_t function_359a31(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x359a31
    *(char *)a4 = (char)a4;
    int64_t result; // 0x359a31
    return result;
}
