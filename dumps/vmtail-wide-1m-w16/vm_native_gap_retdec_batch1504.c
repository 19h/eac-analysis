/*
 * Targeted RetDec C for native executable gap queue batch 1504.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1afc5a-0x1afe5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1afe5a-0x1b005a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b005a-0x1b025a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b065a-0x1b07a5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x379c6a-0x379d6a rank=- name=- kind=- bytes=- uncovered=-
 *   0x379d6a-0x379f6a rank=- name=- kind=- bytes=- uncovered=-
 *   0x379f6a-0x37a16a rank=- name=- kind=- bytes=- uncovered=-
 *   0x37a16a-0x37a36a rank=- name=- kind=- bytes=- uncovered=-
 *   0x37a36a-0x37a56a rank=- name=- kind=- bytes=- uncovered=-
 *   0x37a56a-0x37a6c8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a88ad-0x3a8aad rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a8aad-0x3a8cad rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a8cad-0x3a8ead rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a8ead-0x3a90ad rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a90ad-0x3a92ad rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a92ad-0x3a940e rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g5;
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

int64_t function_1afc5a(void);
int64_t function_1afc82(void);
int64_t function_1afc9c(void);
int64_t function_1afcdd(int64_t a1);
int64_t function_1afcfd(void);
int64_t function_1afd26(void);
int64_t function_1afd30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1afd3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1afd84(void);
int64_t function_1afd8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1afdf1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_1afe8f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1afec7(void);
int64_t function_1afef4(int64_t a1);
int64_t function_1aff08(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1affc6(void);
int64_t function_1afff5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1b0072(void);
int64_t function_1b0077(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1b008f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1b00bc(void);
int64_t function_1b0163(int64_t a1, int64_t a2);
int64_t function_1b0184(void);
int64_t function_1b01ef(void);
int64_t function_1b022a(int64_t a1);
int64_t function_1b065a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1b0699(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1b0720(void);
int64_t function_1b072b(void);
int64_t function_21fa7cc();
int64_t function_2d99968a();
int64_t function_379c64();
int64_t function_379c6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_379cce(int64_t a1);
int64_t function_379cf6(void);
int64_t function_379d5b(void);
int64_t function_379d64(int64_t a1, int64_t a2, int64_t a3);
int64_t function_379d75(int64_t result);
int64_t function_379dc6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_379e04(void);
int64_t function_379e32(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_379e51(void);
int64_t function_379e72(void);
int64_t function_379e7b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_379e94(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_379f3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_379f59(void);
int64_t function_379f87(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_379f94(void);
int64_t function_379fb3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_379ff0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_37a038(int64_t a1);
int64_t function_37a05c(void);
int64_t function_37a060(void);
int64_t function_37a06a(void);
int64_t function_37a093(void);
int64_t function_37a0a2(int64_t a1);
int64_t function_37a0a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37a0b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37a0f6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_37a136(int64_t a1, int64_t a2, int64_t a3);
int64_t function_37a183(void);
int64_t function_37a187(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37a1a3(void);
int64_t function_37a1f0(int64_t a1, int64_t a2);
int64_t function_37a242(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37a2e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37a2f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37a30a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_37a330(int64_t a1, int64_t a2, int64_t a3);
int64_t function_37a394(int64_t a1);
int64_t function_37a3a1(void);
int64_t function_37a3da(void);
int64_t function_37a3de(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_37a41a(void);
int64_t function_37a476(int64_t a1, int64_t a2, int64_t a3);
int64_t function_37a4ae(void);
int64_t function_37a4f3(void);
int64_t function_37a502(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_37a538(int64_t a1);
int64_t function_37a59d(int64_t a1, int64_t a2);
int64_t function_37a5d0(void);
int64_t function_37a629(int64_t a1, int64_t a2);
int64_t function_37a62a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_37a639(void);
int64_t function_37a64c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37a673(void);
int64_t function_37a6a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a88ad(void);
int64_t function_3a88f3(void);
int64_t function_3a88fa(void);
int64_t function_3a890b(void);
int64_t function_3a8913(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a891f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a899f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a89e1(void);
int64_t function_3a8a00(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a8a2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a8a85(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a8acc(void);
int64_t function_3a8adf(int64_t a1);
int64_t function_3a8af9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a8b21(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a8b31(void);
int64_t function_3a8b78(void);
int64_t function_3a8b94(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3a8c29(void);
int64_t function_3a8c3f(void);
int64_t function_3a8c55(int64_t a1);
int64_t function_3a8c94(void);
int64_t function_3a8c9a(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_3a8cc8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3a8d02(void);
int64_t function_3a8d18(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a8d2a(void);
int64_t function_3a8d2f(void);
int64_t function_3a8d45(void);
int64_t function_3a8d4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a8e14(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a8e24(void);
int64_t function_3a8e38(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a8e5e(void);
int64_t function_3a8e5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a8e71(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a8e7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a8ec9(int64_t a1);
int64_t function_3a8f18(void);
int64_t function_3a8f25(void);
int64_t function_3a8f29(void);
int64_t function_3a8f33(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a8f64(void);
int64_t function_3a8fab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a8fc1(void);
int64_t function_3a8fe4(void);
int64_t function_3a8fe8(void);
int64_t function_3a9004(int64_t a1);
int64_t function_3a9028(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a90a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a90ce(void);
int64_t function_3a90d6(int64_t a1);
int64_t function_3a9124(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a9176(void);
int64_t function_3a9194(void);
int64_t function_3a91ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a92c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a92d0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3a9323(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a932c(void);
int64_t function_3a9396(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b42fd5b();
int64_t function_4b2c93a0();
int64_t function_7117aa();
int64_t function_ffffffff84b09229();
int64_t function_ffffffffc5028ae0();
int64_t function_ffffffffd287c6e5();
int64_t function_ffffffffdb841f90();
int64_t function_ffffffffe089ef8b();
int64_t function_fffffffff8e90b61();
int64_t unknown_10f192c2();
int64_t unknown_140f8438();
int64_t unknown_1af3ab27();
int64_t unknown_22380545();
int64_t unknown_2738f8cb();
int64_t unknown_30fbb5bf();
int64_t unknown_31c3c11();
int64_t unknown_3a241837();
int64_t unknown_3d1ce5bd();
int64_t unknown_3d3c71b0();
int64_t unknown_3da7ec5b();
int64_t unknown_709b6dc1();
int64_t unknown_73c8208d();
int64_t unknown_76061b9f();
int64_t unknown_b052865();
int64_t unknown_faf41aa();
int64_t unknown_ffffffff88cf7068();
int64_t unknown_ffffffff901e8f20();
int64_t unknown_ffffffffa9034439();
int64_t unknown_ffffffffae372636();
int64_t unknown_ffffffffb1ffcfb7();
int64_t unknown_ffffffffb51151a9();
int64_t unknown_ffffffffc4902db8();
int64_t unknown_ffffffffd08616a0();
int64_t unknown_ffffffffe83da3cf();
int64_t unknown_ffffffffeb8c0c3f();
int64_t unknown_fffffffff8a3fc56();

// Address range: 0x1afc5a - 0x1afc5b
int64_t function_1afc5a(void) {
    // 0x1afc5a
    int64_t result; // 0x1afc5a
    return result;
}

// Address range: 0x1afc82 - 0x1afc85
int64_t function_1afc82(void) {
    // 0x1afc82
    int64_t result; // 0x1afc82
    return result;
}

// Address range: 0x1afc9c - 0x1afc9d
int64_t function_1afc9c(void) {
    // 0x1afc9c
    int64_t result; // 0x1afc9c
    return result;
}

// Address range: 0x1afcdd - 0x1afcdf
int64_t function_1afcdd(int64_t a1) {
    // 0x1afcdd
    return __asm_wait(a1);
}

// Address range: 0x1afcfd - 0x1afcff
int64_t function_1afcfd(void) {
    // 0x1afcfd
    return function_1afc9c();
}

// Address range: 0x1afd26 - 0x1afd27
int64_t function_1afd26(void) {
    // 0x1afd26
    int64_t result; // 0x1afd26
    return result;
}

// Address range: 0x1afd30 - 0x1afd3f
int64_t function_1afd30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffffae372636(); // 0x1afd30
    int64_t v2; // 0x1afd30
    *(int32_t *)a3 = (int32_t)v2 + (int32_t)a1;
    return (v1 + 226) % 256 | v1 & -256;
}

// Address range: 0x1afd3f - 0x1afd4b
int64_t function_1afd3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1afd3f
    unknown_22380545();
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x1afd3f
    return v1 & 0xffffffff;
}

// Address range: 0x1afd84 - 0x1afd85
int64_t function_1afd84(void) {
    // 0x1afd84
    int64_t result; // 0x1afd84
    return result;
}

// Address range: 0x1afd8e - 0x1afdec
int64_t function_1afd8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    char * v2 = (char *)(a1 + 0xd000d3); // 0x1afd90
    char v3 = *v2 & 104; // 0x1afd90
    *v2 = v3;
    if (v3 != 0) {
        function_1afd26();
    }
    int64_t v4 = unknown_76061b9f(); // 0x1afd99
    __asm_outsb((int16_t)a3, *(char *)&v1);
    char * v5 = (char *)(a1 - 34); // 0x1afd9f
    unsigned char v6 = *v5; // 0x1afd9f
    *v5 = v6 / 2 | 128 * v6;
    int64_t v7; // 0x1afd8e
    *(char *)(v7 - 4) = (char)a4;
    int64_t v8 = v7 & -0xff01 | (int64_t)&g4; // 0x1afda5
    int32_t v9 = a4; // 0x1afda7
    int32_t v10 = a1; // 0x1afda7
    int32_t v11 = v9 + v10; // 0x1afda7
    if (v11 != 1 != (v11 == 0)) {
        int64_t v12 = ((a5 & (int64_t)&g2) == 0 ? 1 : -1) + a1; // 0x1afdb0
        int32_t * v13 = (int32_t *)(4 * v1 + v8); // 0x1afdb1
        *v13 = *v13 + 1;
        int64_t result = unknown_3d1ce5bd(v12); // 0x1afdb5
        int32_t * v14 = (int32_t *)v12; // 0x1afdbc
        *v14 = *v14 + (int32_t)v1;
        return result;
    }
    // 0x1afdd6
    int64_t v15; // 0x1afd8e
    int64_t v16 = v15; // 0x1afdd6
    v15 = v4 & 0xffffffff;
    int64_t v17 = v16 & 0xffffffff; // 0x1afdd7
    if (v11 < 0 != ((v11 ^ v9) & (v11 ^ v10)) < 0) {
        v17 = function_1afd84();
    }
    char v18 = v17; // 0x1afdd9
    char * v19 = (char *)v17; // 0x1afdd9
    *v19 = v18 + (char)v4;
    char * v20 = (char *)v15; // 0x1afddb
    *v20 = *v20 + (char)v8;
    *v19 = *(char *)&v15 + v18;
    __asm_int3();
    return __asm_int1();
}

// Address range: 0x1afdf1 - 0x1afe3e
int64_t function_1afdf1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 0xbeebcb + 4 * a4); // 0x1afdf2
    int64_t v2; // 0x1afdf1
    *v1 = *v1 + (int32_t)v2;
    int32_t * v3 = (int32_t *)(a1 - 105); // 0x1afdfc
    uint32_t v4 = *v3; // 0x1afdfc
    uint32_t v5 = v4 + (int32_t)a3; // 0x1afdfc
    *v3 = v5;
    return 0x80000000 * (int64_t)(v5 < v4) | a5 / 2 % 0x80000000;
}

// Address range: 0x1afe8f - 0x1afeb5
int64_t function_1afe8f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1afe8f
    int64_t v1; // 0x1afe8f
    uint64_t v2 = v1;
    *(char *)0x2067349d = *(char *)0x2067349d + (char)(v2 / 256);
    int64_t result = v1 ^ 122; // 0x1afe9e
    char * v3 = (char *)(v2 - 0x26ff977b); // 0x1afea7
    *v3 = *v3 + (char)v2;
    int32_t * v4 = (int32_t *)result; // 0x1afead
    *v4 = *v4 - (int32_t)result;
    return result;
}

// Address range: 0x1afec7 - 0x1afec9
int64_t function_1afec7(void) {
    // 0x1afec7
    int64_t v1; // 0x1afec7
    return function_1aff08(v1, v1, v1, v1, (int64_t)&g5);
}

// Address range: 0x1afef4 - 0x1aff08
int64_t function_1afef4(int64_t a1) {
    // 0x1afef4
    int64_t v1; // 0x1afef4
    *(char *)0xa7a8cb700ba8cc6 = (char)v1;
    int64_t v2 = 0x100000000 * v1 >> 32; // 0x1afefd
    return v2 * v2 & 0xffffffff;
}

// Address range: 0x1aff08 - 0x1aff42
int64_t function_1aff08(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a3 + a1; // 0x1aff08
    bool v2; // 0x1aff08
    int64_t v3 = (v2 ? -1 : 1) + a1; // 0x1aff0a
    int64_t v4 = unknown_31c3c11(v3); // 0x1aff0b
    char * v5 = (char *)((v1 & 0xffffffff) + 0x1047340b); // 0x1aff10
    *v5 = (char)(a4 / 256);
    int32_t * v6 = (int32_t *)(v4 + 78); // 0x1aff16
    *v6 = *v6 & (-1 << (int32_t)v1 % 32) - 1;
    unknown_ffffffff901e8f20();
    int32_t * v7 = (int32_t *)v3; // bp-8, 0x1aff23
    int32_t v8 = *(int32_t *)0x7be038c0; // 0x1aff26
    *(int32_t *)0x7be038c0 = v8 + (int32_t)(int64_t)&v7;
    int64_t v9 = __asm_hlt(v3); // 0x1aff2c
    int32_t * v10 = (int32_t *)(v3 - 68); // 0x1aff2f
    *v10 = *v10 + (int32_t)(256 * (int64_t)*v5 | a4 & 0xffff00ff);
    int64_t result = unknown_ffffffffeb8c0c3f(v9 & 0xffffffff, (int64_t)v7); // 0x1aff39
    __asm_outsd((int16_t)a5 % 256 | (int16_t)&g1, *v7);
    return result;
}

// Address range: 0x1affc6 - 0x1affc7
int64_t function_1affc6(void) {
    // 0x1affc6
    int64_t result; // 0x1affc6
    return result;
}

// Address range: 0x1afff5 - 0x1afffd
int64_t function_1afff5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1afff5
    int64_t result; // 0x1afff5
    return result;
}

// Address range: 0x1b0072 - 0x1b0076
int64_t function_1b0072(void) {
    // 0x1b0072
    int64_t result; // 0x1b0072
    return result;
}

// Address range: 0x1b0077 - 0x1b0079
int64_t function_1b0077(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1b0077
    int64_t result; // 0x1b0077
    return result;
}

// Address range: 0x1b008f - 0x1b00ab
int64_t function_1b008f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1b008f
    int64_t v1; // 0x1b008f
    char * v2 = (char *)(v1 - 0x41e9f59d); // 0x1b008f
    *v2 = *v2 + (char)a3;
    int32_t * v3 = (int32_t *)(a1 - 0x4149ea6f); // 0x1b0097
    *v3 = *v3 + ((int32_t)v1 & -256 | 232);
    *(char *)a1 = __asm_insb((int16_t)a3);
    return unknown_ffffffffb51151a9();
}

// Address range: 0x1b00bc - 0x1b014b
int64_t function_1b00bc(void) {
    int64_t result = unknown_10f192c2(); // 0x1b00bc
    bool v1; // 0x1b00bc
    if (v1 || v1) {
        // 0x1b00c7
        return result;
    }
    // 0x1b0146
    return result + 0x9cfec300 & 0xffffffff;
}

// Address range: 0x1b0163 - 0x1b0175
int64_t function_1b0163(int64_t a1, int64_t a2) {
    // 0x1b0163
    int64_t v1; // 0x1b0163
    int32_t * v2 = (int32_t *)(v1 - 77); // 0x1b0163
    uint32_t v3 = *v2; // 0x1b0163
    uint32_t v4 = v3 + (int32_t)v1; // 0x1b0163
    *v2 = v4;
    int64_t v5; // 0x1b0163
    char v6 = *(char *)&v5; // 0x1b0168
    *(char *)a2 = v6 - (char)v1 + (char)(v4 < v3);
    return function_fffffffff8e90b61();
}

// Address range: 0x1b0184 - 0x1b0185
int64_t function_1b0184(void) {
    // 0x1b0184
    int64_t result; // 0x1b0184
    return result;
}

// Address range: 0x1b01ef - 0x1b01f1
int64_t function_1b01ef(void) {
    // 0x1b01ef
    return function_1b0184();
}

// Address range: 0x1b022a - 0x1b0230
int64_t function_1b022a(int64_t a1) {
    // 0x1b022a
    int64_t result; // 0x1b022a
    return result;
}

// Address range: 0x1b065a - 0x1b0698
int64_t function_1b065a(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = a1 & 0xffffffff; // 0x1b0661
    int64_t v1; // 0x1b065a
    if ((v1 & 0xffffffff) == 0xef5a9d01) {
        // 0x1b0665
        *(int32_t *)result = 2 * (int32_t)v1;
        return result;
    }
    unsigned char v2 = *(char *)0x3c0dde95; // 0x1b068e
    unsigned char v3 = v2 + (char)(v1 / 256); // 0x1b068e
    *(char *)0x3c0dde95 = v3;
    int32_t * v4 = (int32_t *)(v1 - 101); // 0x1b0694
    uint32_t v5 = *v4; // 0x1b0694
    *v4 = v5 / 128 | 0x4000000 * v5 | 0x2000000 * (int32_t)(v3 < v2);
    return result;
}

// Address range: 0x1b0699 - 0x1b069e
int64_t function_1b0699(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1b0699
    return a4 & 0xffffffff;
}

// Address range: 0x1b0720 - 0x1b0721
int64_t function_1b0720(void) {
    // 0x1b0720
    int64_t result; // 0x1b0720
    return result;
}

// Address range: 0x1b072b - 0x1b072e
int64_t function_1b072b(void) {
    // 0x1b072b
    int64_t result; // 0x1b072b
    return result;
}

// Address range: 0x379c6a - 0x379c82
int64_t function_379c6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x379c6a
    bool v1; // 0x379c6a
    int64_t v2 = (v1 ? -4 : 4) + a1; // 0x379c6a
    int64_t v3; // 0x379c6a
    *(char *)(v2 - 0x17e437ff) = (char)(v3 / 256);
    int32_t * v4 = (int32_t *)v2; // 0x379c71
    int32_t v5 = *v4 + (int32_t)a4; // 0x379c71
    *v4 = v5;
    int64_t result; // 0x379c6a
    if (v5 >= 0) {
        result = function_379c64();
    }
    int32_t * v6 = (int32_t *)(v3 - 0x560091c6); // 0x379c7c
    *v6 = *v6 + (int32_t)a3;
    return result;
}

// Address range: 0x379cce - 0x379ccf
int64_t function_379cce(int64_t a1) {
    // 0x379cce
    int64_t result; // 0x379cce
    return result;
}

// Address range: 0x379cf6 - 0x379cf8
int64_t function_379cf6(void) {
    // 0x379cf6
    return function_379d75((int64_t)&g5);
}

// Address range: 0x379d5b - 0x379d5d
int64_t function_379d5b(void) {
    // 0x379d5b
    int64_t v1; // 0x379d5b
    return function_379dc6(v1, v1, v1);
}

// Address range: 0x379d64 - 0x379d74
int64_t function_379d64(int64_t a1, int64_t a2, int64_t a3) {
    // 0x379d64
    int16_t v1; // 0x379d64
    int16_t v2 = v1;
    int64_t v3; // 0x379d64
    *(int32_t *)v3 = (int32_t)a1;
    __asm_in((int16_t)a3);
    int32_t * v4 = (int32_t *)(a2 + 0x1e8d566); // 0x379d6d
    *v4 = *v4 ^ -83;
    return (v2 + 211) % 256 | v2 & -256;
}

// Address range: 0x379d75 - 0x379d76
int64_t function_379d75(int64_t result) {
    // 0x379d75
    return result;
}

// Address range: 0x379dc6 - 0x379dde
int64_t function_379dc6(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_ffffffffe83da3cf(); // 0x379dc9
    *(int32_t *)-0x179a8d2b = *(int32_t *)-0x179a8d2b + (int32_t)a1;
    int64_t v2 = 2 * v1; // 0x379dd4
    __asm_out((int16_t)a3, (int32_t)v2);
    return v2 & 0xfffffffe;
}

// Address range: 0x379e04 - 0x379e05
int64_t function_379e04(void) {
    // 0x379e04
    int64_t result; // 0x379e04
    return result;
}

// Address range: 0x379e32 - 0x379e3f
int64_t function_379e32(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 + 0x21013d06); // 0x379e32
    *v1 = *v1 + (char)a3;
    int64_t result; // 0x379e32
    if (a4 == 0) {
        result = function_379e04();
    }
    // 0x379e3a
    return result;
}

// Address range: 0x379e51 - 0x379e5a
int64_t function_379e51(void) {
    // 0x379e51
    int64_t result; // 0x379e51
    return result;
}

// Address range: 0x379e72 - 0x379e73
int64_t function_379e72(void) {
    // 0x379e72
    int64_t result; // 0x379e72
    return result;
}

// Address range: 0x379e7b - 0x379e94
int64_t function_379e7b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x379e7b
    int64_t v1; // 0x379e7b
    uint64_t v2 = v1;
    int64_t result = v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1); // 0x379e84
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x379e94 - 0x379f0c
int64_t function_379e94(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t result2; // 0x379e94
    bool v3; // 0x379e94
    if (v3 || v3) {
        uint64_t v4 = result2 % 256;
        int64_t v5 = result2 / 256 % 256 * v4; // 0x379ec3
        __asm_out_133(75, (char)v5);
        int64_t v6 = v5 & 0xaed2;
        int64_t v7 = v6 | result2 & 0x3de30000; // 0x379ec7
        int32_t * v8 = (int32_t *)((v4 | result2) - 0x78000000); // 0x379ecc
        *v8 = *v8 + (int32_t)result2;
        char v9 = *(char *)v7; // 0x379ed2
        *(char *)-0x6f36125 = *(char *)-0x6f36125 + (char)(result2 / 256);
        int64_t v10 = a5 & 0xffffff00 | (int64_t)__asm_in_134(122); // 0x379ee2
        uint32_t v11 = *(int32_t *)&v1; // 0x379eea
        uint32_t v12 = *(int32_t *)&v2; // 0x379eea
        v1 += (v3 ? -4 : 4);
        int64_t v13 = 0x13d00fa; // bp+6112, 0x379eeb
        float80_t v14; // 0x379e94
        float80_t v15 = __asm_fbstp((float80_t)*(int32_t *)(a5 & 0xffffffff) - v14); // 0x379ef0
        *(float80_t *)v10 = v15;
        int32_t * v16 = (int32_t *)(v7 & 0x3de3ae00 | result2 & 0xffffffff | (int64_t)(v9 + (char)v6)); // 0x379ef2
        int32_t v17 = *v16; // 0x379ef2
        *v16 = v17 - ((int32_t)(v11 < v12) | (int32_t)(int64_t)&v13);
        int64_t v18 = 2 * v10; // 0x379efc
        int64_t result = v18 & 254 | v10 & -256; // 0x379efc
        int32_t * v19 = (int32_t *)v1; // 0x379efe
        *v19 = *v19 - (int32_t)result;
        *(char *)-0x23fec2ff013f7ce4 = (char)v18;
        return result;
    }
    // 0x379e97
    *(char *)0x7ef0db9e = *(char *)0x7ef0db9e + (char)(result2 / 256);
    return result2;
}

// Address range: 0x379f3e - 0x379f55
int64_t function_379f3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x379f3e
    int64_t v1; // 0x379f3e
    char v2 = v1; // 0x379f43
    *(char *)a3 = v2 + (char)v1;
    *(char *)-0x23fec2ffaaa5d77a = v2;
    return v1 & -0xff01 | 256 * a4 & 0xff00;
}

// Address range: 0x379f59 - 0x379f63
int64_t function_379f59(void) {
    // 0x379f59
    return function_ffffffffdb841f90();
}

// Address range: 0x379f87 - 0x379f93
int64_t function_379f87(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x379f87
    return function_7117aa();
}

// Address range: 0x379f94 - 0x379f98
int64_t function_379f94(void) {
    // 0x379f94
    int64_t result; // 0x379f94
    return result;
}

// Address range: 0x379fb3 - 0x379fd6
int64_t function_379fb3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x379fb3
    return unknown_30fbb5bf();
}

// Address range: 0x379ff0 - 0x37a001
int64_t function_379ff0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x379ff0
    int64_t v1; // 0x379ff0
    int64_t result = v1;
    *(char *)result = (char)(result & a4 / 256);
    return result;
}

// Address range: 0x37a038 - 0x37a05b
int64_t function_37a038(int64_t a1) {
    // 0x37a038
    int64_t v1; // 0x37a038
    int32_t * v2 = (int32_t *)(v1 + 57); // 0x37a038
    *v2 = *v2 + 0x3d0a40d0;
    int64_t v3; // 0x37a038
    int64_t v4 = v3;
    *(int32_t *)v4 = *(int32_t *)&v3 + (int32_t)v4;
    uint32_t v5 = *(int32_t *)0x5f08102282b8ea1a; // 0x37a041
    return v5 + 0x70c94d3 + (v5 < 0xf8f36b2d ? 0x26122ffa : 0x26122ffb);
}

// Address range: 0x37a05c - 0x37a05f
int64_t function_37a05c(void) {
    // 0x37a05c
    int64_t result; // 0x37a05c
    return result;
}

// Address range: 0x37a060 - 0x37a061
int64_t function_37a060(void) {
    // 0x37a060
    int64_t result; // 0x37a060
    return result;
}

// Address range: 0x37a06a - 0x37a076
int64_t function_37a06a(void) {
    // 0x37a06a
    __asm_in_134(121);
    return function_2d99968a();
}

// Address range: 0x37a093 - 0x37a094
int64_t function_37a093(void) {
    // 0x37a093
    int64_t result; // 0x37a093
    return result;
}

// Address range: 0x37a0a2 - 0x37a0a5
int64_t function_37a0a2(int64_t a1) {
    // 0x37a0a2
    int64_t result; // 0x37a0a2
    return result;
}

// Address range: 0x37a0a5 - 0x37a0b0
int64_t function_37a0a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37a0a5
    int64_t v1; // 0x37a0a5
    int64_t v2 = v1;
    __asm_int(50);
    bool v3; // 0x37a0a5
    *(int32_t *)v2 = (int32_t)v2 - (int32_t)a3 + (int32_t)v3;
    return v2 | 116;
}

// Address range: 0x37a0b0 - 0x37a0f6
int64_t function_37a0b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37a0b0
    bool v1; // 0x37a0b0
    if (!v1) {
        function_37a060();
    }
    // 0x37a0b9
    int64_t v2; // 0x37a0b0
    int32_t v3 = v2; // 0x37a0bc
    *(int32_t *)0x1e013d42 = *(int32_t *)0x1e013d42 + v3;
    int64_t v4 = unknown_2738f8cb(); // 0x37a0c5
    int16_t v5 = a3; // 0x37a0cc
    __asm_out(v5, (int32_t)v4);
    int32_t * v6 = (int32_t *)(v4 + 0x637f64be); // 0x37a0d2
    uint32_t v7 = *v6; // 0x37a0d2
    uint32_t v8 = v7 + v3; // 0x37a0d2
    *v6 = v8;
    *(int32_t *)0x1e013dc0 = *(int32_t *)0x3d81e800;
    int64_t v9 = (a4 & (int64_t)&g2) == 0 ? 0x1e013dc4 : 0x1e013dbc; // 0x37a0d8
    int32_t * v10 = (int32_t *)((v4 - (v8 < v7 ? 66 : 65)) % 256 | v4 & -256); // 0x37a0db
    *v10 = *v10 ^ -0x1ad454ea;
    *(char *)-0xd2ff713 = *(char *)-0xd2ff713 + (char)(v2 / 256);
    *(int32_t *)v9 = __asm_insd(v5);
    __asm_in_135(v5);
    return function_37a093();
}

// Address range: 0x37a0f6 - 0x37a10b
int64_t function_37a0f6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x37a0f6
    int64_t v1; // 0x37a0f6
    int32_t * v2 = (int32_t *)(2 * a3 - 106 + v1); // 0x37a0f6
    *v2 = *v2 ^ (int32_t)v1;
    *(char *)0x20fe4806 = *(char *)0x20fe4806 + (char)(v1 / 256);
    *(char *)0x62e99ac7 = *(char *)0x62e99ac7 | (char)(a4 / 256);
    return 0x62e99bef;
}

// Address range: 0x37a136 - 0x37a15f
int64_t function_37a136(int64_t a1, int64_t a2, int64_t a3) {
    // 0x37a136
    int64_t v1; // 0x37a136
    __asm_outsd((int16_t)a3, (int32_t)v1);
    int64_t v2 = a3 & 0xffffffff; // 0x37a145
    uint32_t v3 = -0x36a0fec3 * *(int32_t *)(2 * a1 & 0x1fffffffe); // 0x37a146
    int64_t v4 = v3; // 0x37a146
    *(int32_t *)v2 = v3;
    char * v5 = (char *)v4; // 0x37a14e
    char v6 = v3; // 0x37a14e
    *v5 = *v5 + v6;
    char * v7 = (char *)(v1 + 0xac8000 + v4); // 0x37a150
    *v7 = *v7 + v6;
    int64_t v8; // 0x37a136
    bool v9; // 0x37a136
    *(char *)((v9 ? -8 : 8) + v2) = *(char *)&v8;
    return (int64_t)(*(int32_t *)(v1 & 0xffffffff ^ 0xfc375423) & v3);
}

// Address range: 0x37a183 - 0x37a186
int64_t function_37a183(void) {
    // 0x37a183
    int64_t result; // 0x37a183
    return result;
}

// Address range: 0x37a187 - 0x37a191
int64_t function_37a187(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 + 0x3a1e47e7 + 8 * a2); // 0x37a187
    bool v2; // 0x37a187
    *v1 = (char)v2 - (char)a4 + *v1;
    int64_t result; // 0x37a187
    return result;
}

// Address range: 0x37a1a3 - 0x37a1a4
int64_t function_37a1a3(void) {
    // 0x37a1a3
    int64_t result; // 0x37a1a3
    return result;
}

// Address range: 0x37a1f0 - 0x37a1f8
int64_t function_37a1f0(int64_t a1, int64_t a2) {
    // 0x37a1f0
    return function_37a1a3();
}

// Address range: 0x37a242 - 0x37a2a0
int64_t function_37a242(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37a242
    int64_t v1; // 0x37a242
    int64_t v2 = v1;
    int64_t result = v1;
    bool v3; // 0x37a242
    if (a4 == 1 || v3) {
        // 0x37a244
        *(char *)result = (char)result;
        return result;
    }
    int32_t * v4 = (int32_t *)(v2 - 73); // 0x37a24a
    *v4 = *v4 | (int32_t)result;
    uint32_t v5 = *(int32_t *)(result + 8 * v1); // 0x37a24e
    int64_t v6 = (int64_t)v5 - 1; // 0x37a256
    if (v6 == 0) {
        int64_t v7 = result + 0x649f6844; // 0x37a251
        __writegsbyte(v2, __readgsbyte(v2) + (char)v7);
        int64_t v8 = (v7 & 0xffffffff) + 1; // 0x37a25b
        *(char *)(v8 & 0xffffffff) = (char)v8;
    }
    int32_t * v9 = (int32_t *)(v2 - 29); // 0x37a265
    int32_t v10 = v2; // 0x37a265
    *v9 = *v9 | v10;
    __asm_int(-97);
    uint32_t v11 = *(int32_t *)(a2 + 0x5000f051) | v10; // 0x37a26a
    unknown_73c8208d();
    *(char *)-0x712d9669 = *(char *)-0x712d9669 + (char)(v11 / 256);
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int32_t * v12 = (int32_t *)(a3 + 0x5401283 + (int64_t)v11); // 0x37a297
    *v12 = *v12 - 0x7fc64cf0;
    int64_t result2 = function_37a2f6(a1, a2, a3, v6 + (int64_t)(v5 + 0xffff & 0xff00) & 0xff00 | v6 & -0xff01, (int64_t)&g5); // 0x37a29e
    return result2;
}

// Address range: 0x37a2e4 - 0x37a2f6
int64_t function_37a2e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37a2e4
    int64_t v1; // 0x37a2e4
    uint32_t v2 = -112 * (int32_t)v1; // 0x37a2e4
    int64_t v3 = v2; // 0x37a2e4
    __readgsdword(a4 + 0x697decfa);
    return v3 & 0xffffff00 | (int64_t)(*(char *)v3 + (char)v2);
}

// Address range: 0x37a2f6 - 0x37a309
int64_t function_37a2f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x37a2f6
    int64_t result; // 0x37a2f6
    return result;
}

// Address range: 0x37a30a - 0x37a328
int64_t function_37a30a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x37a30a
    int64_t v1; // 0x37a30a
    char * v2 = (char *)(v1 + 0x3d000002); // 0x37a314
    *v2 = *v2 + (char)a4;
    int64_t v3; // 0x37a30a
    int64_t v4 = v3;
    *(int32_t *)v4 = *(int32_t *)&v3 + (int32_t)v4;
    *(char *)-0x6a455339 = (char)(a4 / 256);
    return __asm_hlt((a3 ^ a1) & 0xffffffff);
}

// Address range: 0x37a330 - 0x37a342
int64_t function_37a330(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 0x687044fd); // 0x37a335
    int64_t v2; // 0x37a330
    *v1 = *v1 + (int32_t)v2;
    return __asm_wait((int64_t)&g5);
}

// Address range: 0x37a394 - 0x37a399
int64_t function_37a394(int64_t a1) {
    // 0x37a394
    int64_t result; // 0x37a394
    return result;
}

// Address range: 0x37a3a1 - 0x37a3a2
int64_t function_37a3a1(void) {
    // 0x37a3a1
    int64_t result; // 0x37a3a1
    return result;
}

// Address range: 0x37a3da - 0x37a3dd
int64_t function_37a3da(void) {
    // 0x37a3da
    return function_37a3a1();
}

// Address range: 0x37a3de - 0x37a41a
int64_t function_37a3de(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a1; // 0x37a3e7
    int64_t v2; // 0x37a3de
    uint32_t result = v1 + 0x63a21b14 + (int32_t)((int32_t)a5 < (int32_t)(int64_t)&v2); // 0x37a3e7
    bool v3 = (int32_t)a5 < (int32_t)(int64_t)&v2 ? result <= v1 : v1 > 0x9c5de4eb; // 0x37a3e7
    int64_t v4; // 0x37a3de
    int32_t * v5 = (int32_t *)(v4 - 0x73ffc7ff); // 0x37a3ef
    int32_t v6 = *v5; // 0x37a3ef
    *v5 = v6 + (int32_t)(256 * (v4 + a4 / 256 + (int64_t)v3) & 0xff00 | a4 & 0xffff00ff);
    *(char *)-0x21007d04 = *(char *)-0x21007d04 >> 1;
    *(char *)0xecf9eda3 = (char)(result / 256);
    return result;
}

// Address range: 0x37a41a - 0x37a41c
int64_t function_37a41a(void) {
    // 0x37a41a
    int64_t result; // 0x37a41a
    bool v1; // 0x37a41a
    if (!v1) {
        result = function_37a3a1();
    }
    // 0x37a41c
    return result;
}

// Address range: 0x37a476 - 0x37a485
int64_t function_37a476(int64_t a1, int64_t a2, int64_t a3) {
    // 0x37a476
    int64_t v1; // 0x37a476
    return v1 & 0x16d8623f;
}

// Address range: 0x37a4ae - 0x37a4af
int64_t function_37a4ae(void) {
    // 0x37a4ae
    int64_t result; // 0x37a4ae
    return result;
}

// Address range: 0x37a4f3 - 0x37a4f4
int64_t function_37a4f3(void) {
    // 0x37a4f3
    int64_t result; // 0x37a4f3
    return result;
}

// Address range: 0x37a502 - 0x37a524
int64_t function_37a502(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 14); // 0x37a502
    int64_t v2; // 0x37a502
    *v1 = *v1 - (int32_t)v2;
    int32_t * v3 = (int32_t *)((v2 | 232) + 2); // 0x37a50d
    *v3 = *v3 + (int32_t)a1;
    *(char *)-0x57215c48 = *(char *)-0x57215c48 + (char)(a3 / 256);
    return function_37a4f3();
}

// Address range: 0x37a538 - 0x37a539
int64_t function_37a538(int64_t a1) {
    // 0x37a538
    int64_t result; // 0x37a538
    return result;
}

// Address range: 0x37a59d - 0x37a5a4
int64_t function_37a59d(int64_t a1, int64_t a2) {
    // 0x37a59d
    return function_21fa7cc();
}

// Address range: 0x37a5d0 - 0x37a5d5
int64_t function_37a5d0(void) {
    // 0x37a5d0
    int64_t v1; // 0x37a5d0
    char * v2 = (char *)(v1 - 93); // 0x37a5d0
    unsigned char v3 = *v2; // 0x37a5d0
    *v2 = v3 / 128 | 2 * v3;
    return unknown_ffffffffa9034439(v1, v1, v1);
}

// Address range: 0x37a629 - 0x37a62a
int64_t function_37a629(int64_t a1, int64_t a2) {
    // 0x37a629
    int64_t result; // 0x37a629
    return result;
}

// Address range: 0x37a62a - 0x37a638
int64_t function_37a62a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x37a62a
    return unknown_ffffffffa9034439(a1, a2, a3);
}

// Address range: 0x37a639 - 0x37a63e
int64_t function_37a639(void) {
    // 0x37a639
    int64_t v1; // 0x37a639
    return function_37a6a6(v1, v1, v1, v1);
}

// Address range: 0x37a64c - 0x37a659
int64_t function_37a64c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x37a64c
    int64_t result; // 0x37a64c
    *(int32_t *)a1 = (int32_t)result - (int32_t)a2;
    return result;
}

// Address range: 0x37a673 - 0x37a678
int64_t function_37a673(void) {
    // 0x37a673
    return function_3b42fd5b();
}

// Address range: 0x37a6a6 - 0x37a6c8
int64_t function_37a6a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 87); // 0x37a6a6
    int64_t v2; // 0x37a6a6
    *v1 = *v1 + (int32_t)v2;
    unknown_ffffffffc4902db8(((v2 & (int64_t)&g2) == 0 ? 4 : -4) + a1);
    int64_t result = unknown_709b6dc1() & -256 | 211; // 0x37a6c0
    char * v3 = (char *)(result + 0x1e8e405); // 0x37a6c2
    *v3 = *v3 - 45;
    return result;
}

// Address range: 0x3a88ad - 0x3a88b2
int64_t function_3a88ad(void) {
    // 0x3a88ad
    int64_t result; // 0x3a88ad
    return result;
}

// Address range: 0x3a88f3 - 0x3a88f8
int64_t function_3a88f3(void) {
    // 0x3a88f3
    return function_ffffffffc5028ae0();
}

// Address range: 0x3a88fa - 0x3a88fe
int64_t function_3a88fa(void) {
    // 0x3a88fa
    int64_t result; // 0x3a88fa
    return result;
}

// Address range: 0x3a890b - 0x3a890c
int64_t function_3a890b(void) {
    // 0x3a890b
    int64_t result; // 0x3a890b
    return result;
}

// Address range: 0x3a8913 - 0x3a891e
int64_t function_3a8913(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a8913
    int64_t v1; // 0x3a8913
    int64_t v2 = v1 & 0xffffffff ^ 0xddce8104; // 0x3a8915
    return (v2 | v1 + a4) % 256 | v2 & 0xffffff00;
}

// Address range: 0x3a891f - 0x3a899a
int64_t function_3a891f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_1af3ab27(); // 0x3a8921
    int32_t v2 = *(int32_t *)(a4 - 0x17be0dc6) * (int32_t)v1; // 0x3a8987
    int32_t * v3 = (int32_t *)(a2 - 0x7f231d5e); // 0x3a898d
    *v3 = *v3 + v2;
    char * v4 = (char *)(a2 + 46); // 0x3a8997
    *v4 = *v4 + (char)((v2 >> 31 & (int32_t)a1) / 256);
    return a1 & 0xffffffff;
    int32_t * v5 = (int32_t *)v1; // 0x3a8929
    *v5 = *v5 | (int32_t)a1;
    char * v6 = (char *)(v1 - 0x43091ef5); // 0x3a892b
    *v6 = *v6 + (char)a3;
    int64_t result = unknown_140f8438(); // 0x3a8932
    char * v7 = (char *)result; // 0x3a8937
    unsigned char v8 = *v7; // 0x3a8937
    unsigned char v9 = v8 + (char)a4; // 0x3a8937
    *v7 = v9;
    if (a4 == 1 || v9 == 0) {
        // 0x3a893b
        return result;
    }
    // 0x3a894e
    __asm_out_133(-5, (char)result);
    unknown_fffffffff8a3fc56();
    if (v9 >= v8) {
        function_3a890b();
    }
    // 0x3a8957
    unknown_b052865();
    int64_t v10; // 0x3a891f
    return v10 & 0xffffffff;
}

// Address range: 0x3a899f - 0x3a89cc
int64_t function_3a899f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a899f
    int64_t v1; // 0x3a899f
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a1; // 0x3a89a2
    *(int32_t *)v2 = (int32_t)v2 + v3;
    int64_t v4 = unknown_3d3c71b0(); // 0x3a89aa
    int32_t * v5 = (int32_t *)(v1 + 0x1201e871); // 0x3a89af
    uint32_t v6 = *v5; // 0x3a89af
    int32_t v7 = v6 + v3; // 0x3a89af
    *v5 = v7;
    if (a4 != 1 == v7 == 0) {
        // 0x3a89c7
        return 0x10000 * (int32_t)v4 >> 16;
    }
    unsigned char v8 = llvm_ctpop_i8((char)v7); // 0x3a89af
    __asm_out((int16_t)a3, (int32_t)v4);
    return v4 & -0x10000 | (v4 + 159) % 256 | 256 * (64 * (int64_t)(v7 == 0) | (int64_t)(v7 < v6) | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v6 % 16 + v3 % 16 > 15) | 4 * (int64_t)(v8 % 2 == 0)) | 512;
}

// Address range: 0x3a89e1 - 0x3a89e2
int64_t function_3a89e1(void) {
    // 0x3a89e1
    int64_t result; // 0x3a89e1
    return result;
}

// Address range: 0x3a8a00 - 0x3a8a0b
int64_t function_3a8a00(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a8a00
    return function_3a89e1();
}

// Address range: 0x3a8a2f - 0x3a8a85
int64_t function_3a8a2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_3a241837(); // 0x3a8a31
    int64_t v2; // 0x3a8a2f
    *(int32_t *)a2 = 2 * (int32_t)v2;
    int64_t v3 = (v1 & 0x4e86662a) + 0x8e44104b & 0xdece7600 | (int64_t)__asm_in((int16_t)a3); // 0x3a8a5b
    *(char *)(a3 + 0x797b6b91) = 0;
    uint32_t v4 = (int32_t)v3; // 0x3a8a65
    char v5 = *(char *)(((a4 & 0xff00) + a3 & 0xff00 | a4 & -0xff01) + 9); // 0x3a8a76
    char v6 = *(char *)0x20601281; // 0x3a8a7a
    *(char *)0x20601281 = v6 + (v5 | (char)(v2 / 256));
    return (int64_t)(*(int32_t *)v3 + v4 + (int32_t)(v4 < 0x91171701));
}

// Address range: 0x3a8a85 - 0x3a8a92
int64_t function_3a8a85(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 + a1); // 0x3a8a85
    int64_t v2; // 0x3a8a85
    bool v3; // 0x3a8a85
    *v1 = (char)v3 - (char)v2 + *v1;
    int64_t v4; // 0x3a8a85
    __asm_outsb((int16_t)a3, *(char *)&v4);
    *(int32_t *)a2 = *(int32_t *)&v4 + (int32_t)v2;
    return function_ffffffffd287c6e5();
}

// Address range: 0x3a8acc - 0x3a8acf
int64_t function_3a8acc(void) {
    // 0x3a8acc
    int64_t result; // 0x3a8acc
    return result;
}

// Address range: 0x3a8adf - 0x3a8ae2
int64_t function_3a8adf(int64_t a1) {
    // 0x3a8adf
    int64_t result; // 0x3a8adf
    return result;
}

// Address range: 0x3a8af9 - 0x3a8afb
int64_t function_3a8af9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a8af9
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x3a8af9
    return result;
}

// Address range: 0x3a8b21 - 0x3a8b2d
int64_t function_3a8b21(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a8b21
    int64_t result; // 0x3a8b21
    return result;
}

// Address range: 0x3a8b31 - 0x3a8b34
int64_t function_3a8b31(void) {
    // 0x3a8b31
    int64_t result; // 0x3a8b31
    return result;
}

// Address range: 0x3a8b78 - 0x3a8b79
int64_t function_3a8b78(void) {
    // 0x3a8b78
    int64_t result; // 0x3a8b78
    return result;
}

// Address range: 0x3a8b94 - 0x3a8beb
int64_t function_3a8b94(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3a8b94
    int64_t result; // 0x3a8b94
    *(int32_t *)a5 = (int32_t)result + (int32_t)a5;
    if (a4 != 0) {
        // 0x3a8ba8
        return 0xb801e812;
    }
    char v1 = *(char *)(8 * result + 121 + result); // 0x3a8ba2
    int32_t * v2 = (int32_t *)(result + 0x12598ac7); // 0x3a8be5
    *v2 = (256 * (int32_t)(v1 - 10) | -0x2f63fffa) + *v2;
    return result;
}

// Address range: 0x3a8c29 - 0x3a8c2a
int64_t function_3a8c29(void) {
    // 0x3a8c29
    int64_t result; // 0x3a8c29
    return result;
}

// Address range: 0x3a8c3f - 0x3a8c41
int64_t function_3a8c3f(void) {
    // 0x3a8c3f
    return function_3a8c29();
}

// Address range: 0x3a8c55 - 0x3a8c56
int64_t function_3a8c55(int64_t a1) {
    // 0x3a8c55
    int64_t result; // 0x3a8c55
    return result;
}

// Address range: 0x3a8c94 - 0x3a8c9a
int64_t function_3a8c94(void) {
    // 0x3a8c94
    int64_t v1; // 0x3a8c94
    return function_3a8cc8(v1, v1, v1, v1, (int64_t)&g5, (int64_t)&g5);
}

// Address range: 0x3a8c9a - 0x3a8cc8
int64_t function_3a8c9a(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = a2;
    int64_t v2 = unknown_ffffffffd08616a0(); // 0x3a8c9a
    char v3 = __asm_in_134(91); // 0x3a8c9f
    __asm_outsb((int16_t)a3, (char)a2);
    int64_t v4 = v2 & 0x9709c300 | (int64_t)v3 & 0x9709c354 | 0x68f63cab; // 0x3a8ca3
    int64_t v5; // 0x3a8c9a
    unsigned char v6 = *(char *)(v4 + 8 * v5) + (char)v4; // 0x3a8cb2
    int64_t v7 = v4 & 0xffffff00 | (int64_t)v6; // 0x3a8cb2
    char * v8 = (char *)v7; // 0x3a8cb5
    *v8 = v6 + *v8;
    unsigned char v9 = (char)(a3 / 256) ^ -124; // 0x3a8cb7
    unsigned char v10 = *(char *)&v1 + v9; // 0x3a8cb7
    int64_t v11 = 256 * (int64_t)v10 | a3 & -0xff01; // 0x3a8cb7
    int64_t result = v7; // 0x3a8cb9
    if (v10 >= v9) {
        result = function_3a8d18(a1, v1, v11, v5);
    }
    int32_t * v12 = (int32_t *)(v11 - 41); // 0x3a8cc5
    *v12 = *v12 + (int32_t)a1;
    return result;
}

// Address range: 0x3a8cc8 - 0x3a8cf9
int64_t function_3a8cc8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3a8cc8
    int64_t result; // 0x3a8cc8
    return result;
}

// Address range: 0x3a8d02 - 0x3a8d03
int64_t function_3a8d02(void) {
    // 0x3a8d02
    int64_t result; // 0x3a8d02
    return result;
}

// Address range: 0x3a8d18 - 0x3a8d26
int64_t function_3a8d18(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a8d18
    int64_t v1; // 0x3a8d18
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)(v2 & a2);
    return v1 + 0xb1f780f7 & 0xffffffff;
}

// Address range: 0x3a8d2a - 0x3a8d2d
int64_t function_3a8d2a(void) {
    // 0x3a8d2a
    int64_t result; // 0x3a8d2a
    return result;
}

// Address range: 0x3a8d2f - 0x3a8d30
int64_t function_3a8d2f(void) {
    // 0x3a8d2f
    int64_t result; // 0x3a8d2f
    return result;
}

// Address range: 0x3a8d45 - 0x3a8d47
int64_t function_3a8d45(void) {
    // 0x3a8d45
    return function_3a8d2f();
}

// Address range: 0x3a8d4c - 0x3a8dba
int64_t function_3a8d4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    if (a4 == 0) {
        // 0x3a8dac
        unknown_ffffffffb1ffcfb7();
        return __asm_int3();
    }
    int32_t * v1 = (int32_t *)unknown_3da7ec5b(); // 0x3a8d5a
    *v1 = *v1 + (int32_t)a4;
    return unknown_ffffffff88cf7068();
}

// Address range: 0x3a8e14 - 0x3a8e1c
int64_t function_3a8e14(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a8e14
    int64_t v1; // 0x3a8e14
    unsigned char v2 = (char)v1;
    *(char *)v1 = v2 / 128 | 2 * v2;
    return function_3a8e5e();
}

// Address range: 0x3a8e24 - 0x3a8e25
int64_t function_3a8e24(void) {
    // 0x3a8e24
    int64_t result; // 0x3a8e24
    return result;
}

// Address range: 0x3a8e38 - 0x3a8e3c
int64_t function_3a8e38(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a8e38
    return function_3a8e24();
}

// Address range: 0x3a8e5e - 0x3a8e5f
int64_t function_3a8e5e(void) {
    // 0x3a8e5e
    int64_t result; // 0x3a8e5e
    return result;
}

// Address range: 0x3a8e5f - 0x3a8e71
int64_t function_3a8e5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a8e5f
    int64_t v1; // 0x3a8e5f
    int64_t v2 = v1;
    *(int32_t *)(a1 - 0x17e24ddf) = (int32_t)a4;
    bool v3; // 0x3a8e5f
    return v2 & 0x48a80700 | v2 - (v3 ? 196 : 195) & 180 | 0xb757f84b;
}

// Address range: 0x3a8e71 - 0x3a8e7d
int64_t function_3a8e71(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 + 43); // 0x3a8e71
    *v1 = *v1 + (char)a3;
    int64_t v2; // 0x3a8e71
    return v2 & 0xffffffff ^ 0x1e8e013;
}

// Address range: 0x3a8e7e - 0x3a8eb0
int64_t function_3a8e7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 19 + a4); // 0x3a8e87
    *v1 = *v1 + (int32_t)a1;
    int64_t v2; // 0x3a8e7e
    int64_t v3; // 0x3a8e7e
    *(char *)a1 = *(char *)&v2 + (char)((v3 | v3) / 256);
    int32_t * v4 = (int32_t *)(a2 + 37 + 8 * a2); // 0x3a8e99
    *v4 = *v4 / 2;
    int64_t v5 = unknown_faf41aa(); // 0x3a8ea4
    return (v5 + v3) % 256 | v5 & -256;
}

// Address range: 0x3a8ec9 - 0x3a8ecc
int64_t function_3a8ec9(int64_t a1) {
    // 0x3a8ec9
    int64_t result; // 0x3a8ec9
    return result;
}

// Address range: 0x3a8f18 - 0x3a8f19
int64_t function_3a8f18(void) {
    // 0x3a8f18
    int64_t result; // 0x3a8f18
    return result;
}

// Address range: 0x3a8f25 - 0x3a8f27
int64_t function_3a8f25(void) {
    // 0x3a8f25
    return function_3a8f18();
}

// Address range: 0x3a8f29 - 0x3a8f2e
int64_t function_3a8f29(void) {
    // 0x3a8f29
    return function_ffffffffe089ef8b();
}

// Address range: 0x3a8f33 - 0x3a8f38
int64_t function_3a8f33(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a8f33
    int64_t result; // 0x3a8f33
    return result;
}

// Address range: 0x3a8f64 - 0x3a8f65
int64_t function_3a8f64(void) {
    // 0x3a8f64
    int64_t result; // 0x3a8f64
    return result;
}

// Address range: 0x3a8fab - 0x3a8fc1
int64_t function_3a8fab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a8fab
    int64_t v1; // 0x3a8fab
    *(int32_t *)0x13da828ba227c = (int32_t)v1;
    uint32_t v2 = *(int32_t *)(4 * a3 - 0x222769ec + v1); // 0x3a8fb4
    return (v1 & 0xffffffff | 0x100000000 * a3) / (int64_t)v2 & 0xffffffff;
}

// Address range: 0x3a8fc1 - 0x3a8fc6
int64_t function_3a8fc1(void) {
    // 0x3a8fc1
    int64_t v1; // 0x3a8fc1
    int64_t v2 = v1;
    bool v3; // 0x3a8fc1
    return (v2 + v1 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x3a8fe4 - 0x3a8fe6
int64_t function_3a8fe4(void) {
    // 0x3a8fe4
    int64_t result; // 0x3a8fe4
    return result;
}

// Address range: 0x3a8fe8 - 0x3a8fe9
int64_t function_3a8fe8(void) {
    // 0x3a8fe8
    int64_t result; // 0x3a8fe8
    return result;
}

// Address range: 0x3a9004 - 0x3a9005
int64_t function_3a9004(int64_t a1) {
    // 0x3a9004
    int64_t result; // 0x3a9004
    return result;
}

// Address range: 0x3a9028 - 0x3a9041
int64_t function_3a9028(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a9028
    int64_t v1; // 0x3a9028
    uint32_t v2 = (int32_t)v1;
    *(int32_t *)v1 = v2 / 8 | 0x20000000 * v2;
    int32_t * v3 = (int32_t *)(a4 + 0x6f8f7d52); // 0x3a902b
    *v3 = *v3 + (int32_t)a3;
    if (llvm_ctpop_i8(*(char *)(a1 - 115) + (char)a3) % 2 == 0) {
        function_3a8fe8();
    }
    // 0x3a9036
    return function_ffffffff84b09229();
}

// Address range: 0x3a90a4 - 0x3a90a9
int64_t function_3a90a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 104); // 0x3a90a4
    int64_t result; // 0x3a90a4
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x3a90ce - 0x3a90cf
int64_t function_3a90ce(void) {
    // 0x3a90ce
    int64_t result; // 0x3a90ce
    return result;
}

// Address range: 0x3a90d6 - 0x3a90d9
int64_t function_3a90d6(int64_t a1) {
    // 0x3a90d6
    int64_t result; // 0x3a90d6
    return result;
}

// Address range: 0x3a9124 - 0x3a9154
int64_t function_3a9124(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a3 - 0x2300c92a); // 0x3a9124
    int64_t v3; // 0x3a9124
    int32_t v4 = v3; // 0x3a9124
    *v2 = *v2 + v4;
    __asm_out_136(104, v4);
    *(int32_t *)a2 = *(int32_t *)&v1 | (int32_t)v3;
    uint32_t v5 = (int32_t)a4 % 32; // 0x3a9140
    int32_t v6 = *(int32_t *)-0x43f93f8f33ddf6a8 - 0x2ec5bb01; // 0x3a9140
    if (v5 != 0) {
        int32_t * v7 = (int32_t *)(v3 - 0x7ffc0000); // 0x3a9140
        v6 = *v7 << v5;
        *v7 = v6;
    }
    if (v6 >= 0) {
        function_3a90ce();
    }
    // 0x3a9149
    return (int64_t)*(int32_t *)&v1;
}

// Address range: 0x3a9176 - 0x3a9177
int64_t function_3a9176(void) {
    // 0x3a9176
    int64_t result; // 0x3a9176
    return result;
}

// Address range: 0x3a9194 - 0x3a919c
int64_t function_3a9194(void) {
    // 0x3a9194
    return function_3a9176();
}

// Address range: 0x3a91ca - 0x3a927e
int64_t function_3a91ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a91ca
    int64_t v1; // 0x3a91ca
    int64_t v2 = v1;
    int64_t v3 = a2;
    int32_t * v4 = (int32_t *)(a2 - 0x64fe17a9); // 0x3a91d0
    *v4 = *v4 + (int32_t)a3;
    float80_t v5; // 0x3a91ca
    *(int16_t *)a3 = (int16_t)v5;
    __asm_int(-24);
    int32_t * v6 = (int32_t *)(a2 + 0x19328295); // 0x3a91dd
    int32_t v7 = *v6; // 0x3a91dd
    int32_t v8 = a2; // 0x3a91dd
    int32_t v9 = v7 + v8; // 0x3a91dd
    *v6 = v9;
    bool v10 = v9 < 0; // 0x3a91e3
    bool v11 = ((v9 ^ v7) & (v9 ^ v8)) < 0; // 0x3a91e3
    int64_t v12 = a1;
    int64_t v13; // 0x3a91ca
    uint64_t v14 = v13;
    int64_t v15 = (v2 + 130) % 256 | v2 & 0xffffff00;
    while (v10 != v11) {
        int32_t v16 = v15; // 0x3a923f
        *(int32_t *)v12 = v16;
        int32_t v17 = v16 | 0x20c959; // 0x3a9240
        int64_t result = v17; // 0x3a9240
        int64_t v18 = v14 - 1; // 0x3a9245
        if (v18 == 0) {
            // 0x3a9234
            return result;
        }
        // 0x3a9253
        v10 = false;
        v11 = false;
        if (v17 < 0) {
            // 0x3a9234
            return result;
        }
        bool v19; // 0x3a91ca
        v12 += (v19 ? -4 : 4);
        v14 = v18;
        v15 = result;
    }
    uint64_t v20 = v14 / 256 & v15;
    int64_t v21 = v15 & -256; // 0x3a9258
    int32_t * v22 = (int32_t *)(v14 + 58 + 4 * v14); // 0x3a925a
    *v22 = *v22 + (int32_t)v1;
    *(int64_t *)(v12 + 0x1239df4) = v3;
    char v23 = *(char *)((v20 % 256 | v21) - 24); // 0x3a9266
    *(char *)v12 = *(char *)&v3;
    return (v21 | (int64_t)((char)v20 + 1 + v23)) + a3 & 0xffffffff;
}

// Address range: 0x3a92c3 - 0x3a92d0
int64_t function_3a92c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x212b4a89); // 0x3a92c3
    *v1 = *v1 + (int32_t)a3;
    bool v2; // 0x3a92c3
    int64_t v3 = v2 ? -1 : 1; // 0x3a92c9
    return function_4b2c93a0(v3 + a1, v3 + a2);
}

// Address range: 0x3a92d0 - 0x3a92eb
int64_t function_3a92d0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3a92d0
    int64_t v1; // 0x3a92d0
    int64_t v2 = v1;
    int64_t result = v2 & 232 ^ a4 / 256 % 256 | v2 & 0x1a9d0100; // 0x3a92df
    int32_t * v3 = (int32_t *)(result - 0x2c8b8d27); // 0x3a92e1
    *v3 = *v3 + (int32_t)v1;
    uint32_t v4 = (int32_t)a4 % 32; // 0x3a92e7
    if (v4 != 0) {
        int32_t * v5 = (int32_t *)result; // 0x3a92e7
        uint32_t v6 = *v5; // 0x3a92e7
        *v5 = v6 >> 32 - v4 | v6 << v4;
    }
    return result;
}

// Address range: 0x3a9323 - 0x3a932c
int64_t function_3a9323(int64_t a1, int64_t a2, int64_t a3) {
    char v1 = __asm_insb((int16_t)a3); // 0x3a9323
    char * v2 = (char *)a1; // 0x3a9323
    *v2 = v1;
    int64_t v3; // 0x3a9323
    *v2 = *(char *)&v3;
    bool v4; // 0x3a9323
    int64_t v5 = v4 ? -1 : 1; // 0x3a9329
    int64_t v6; // 0x3a9323
    return function_3a9396(v5 + a1, v5 + a2, a3, v6);
}

// Address range: 0x3a932c - 0x3a932f
int64_t function_3a932c(void) {
    // 0x3a932c
    int64_t result; // 0x3a932c
    return result;
}

// Address range: 0x3a9396 - 0x3a93a4
int64_t function_3a9396(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 0x3ca67e20); // 0x3a9396
    unsigned char v2 = *v1; // 0x3a9396
    unsigned char v3 = (char)a3; // 0x3a9396
    *v1 = v2 - v3;
    int64_t result; // 0x3a9396
    char * v4 = (char *)(4 * result - 0x18bbfac0); // 0x3a939c
    *v4 = *v4 + (char)a4 + (char)(v2 < v3);
    return result;
}
