/*
 * Targeted RetDec C for native executable gap queue batch 918.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1bd9ce-0x1bdbce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1bdbce-0x1bddce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1bddce-0x1bdfce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1bdfce-0x1be1ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1be1ce-0x1be3ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x29271f-0x29291f rank=- name=- kind=- bytes=- uncovered=-
 *   0x29291f-0x292b1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x292b1f-0x292d1f rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1bd9ce(void);
int64_t function_1bda32(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1bda3f(void);
int64_t function_1bda76(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1bda99(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1bdadf(void);
int64_t function_1bdb84(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1bdbd3(int64_t a1);
int64_t function_1bdbda(int64_t a1);
int64_t function_1bdc05(int64_t a1);
int64_t function_1bdc25(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1bdc4a(int64_t a1);
int64_t function_1bdc58(void);
int64_t function_1bdc69(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bdcbc(void);
int64_t function_1bdcc3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1bdcf8(void);
int64_t function_1bdd0e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1bdda4(int64_t a1);
int64_t function_1bddd0(void);
int64_t function_1bddde(int64_t a1, int64_t a2);
int64_t function_1bddee(int64_t a1);
int64_t function_1bde5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1bde9b(void);
int64_t function_1bdeaf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1bdf28(int64_t a1);
int64_t function_1bdf2e(void);
int64_t function_1bdf67(int64_t a1);
int64_t function_1bdf6b(int64_t a1);
int64_t function_1bdf74(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bdfc9(void);
int64_t function_1bdfd9(void);
int64_t function_1bdff9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1be0b7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1be0ea(void);
int64_t function_1be0f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1be0ff(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_1be1c1(int64_t a1);
int64_t function_1be1f7(void);
int64_t function_1be20b(void);
int64_t function_1be20e(void);
int64_t function_1be23e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1be253(int64_t a1);
int64_t function_1be29c(void);
int64_t function_1be36b(void);
int64_t function_211728e();
int64_t function_2771f0a1();
int64_t function_29271f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2927e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_29297d(void);
int64_t function_292991(void);
int64_t function_2929aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_292a09(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_292af0(void);
int64_t function_292afb(int64_t a1);
int64_t function_292b1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_292bad(void);
int64_t function_292bb4(int64_t a1);
int64_t function_292c71(void);
int64_t function_292c87(void);
int64_t function_292c8d(void);
int64_t function_292ca2(void);
int64_t function_292cbc(int64_t a1);
int64_t function_292cd1(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_292d05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d2e69();
int64_t function_6c73ad12();
int64_t function_a61e493();
int64_t function_cf3c7();
int64_t function_ffffffff987038e4();
int64_t function_ffffffffaf110c9f();
int64_t function_ffffffffb11aec10();
int64_t function_ffffffffb2d60921();
int64_t function_ffffffffb4711bba();
int64_t function_ffffffffcaa2cdd5();
int64_t function_ffffffffe81dc968();
int64_t unknown_18a91389();
int64_t unknown_1a2f7cfe();
int64_t unknown_2296c87a();
int64_t unknown_3358e935();
int64_t unknown_3ad4361c();
int64_t unknown_3dfcae80();
int64_t unknown_561a5487();
int64_t unknown_59231315();
int64_t unknown_5c122b51();
int64_t unknown_5c615f36();
int64_t unknown_6e0bf497();
int64_t unknown_79483662();
int64_t unknown_7ddf4913();
int64_t unknown_82e1208();
int64_t unknown_c5baaa7();
int64_t unknown_ffffffff8ba91953();
int64_t unknown_ffffffff9871d62b();
int64_t unknown_ffffffffa480b3a2();
int64_t unknown_ffffffffb23f0544();
int64_t unknown_ffffffffbe76d08a();
int64_t unknown_ffffffffcd07b534();
int64_t unknown_ffffffffd3cf1844();
int64_t unknown_ffffffffd6478d96();
int64_t unknown_ffffffffe30ae76f();
int64_t unknown_ffffffffe8b6eab0();
int64_t unknown_ffffffffe8bd529f();
int64_t unknown_ffffffffeed467c6();

// Address range: 0x1bd9ce - 0x1bd9d9
int64_t function_1bd9ce(void) {
    // 0x1bd9ce
    int64_t result; // 0x1bd9ce
    char * v1 = (char *)(result - 0x7f0044f4); // 0x1bd9d3
    *v1 = *v1 + (char)(result / 256);
    return result;
}

// Address range: 0x1bda32 - 0x1bda37
int64_t function_1bda32(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1bda32
    int64_t result; // 0x1bda32
    return result;
}

// Address range: 0x1bda3f - 0x1bda40
int64_t function_1bda3f(void) {
    // 0x1bda3f
    int64_t result; // 0x1bda3f
    return result;
}

// Address range: 0x1bda76 - 0x1bda92
int64_t function_1bda76(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1bda76
    int64_t v1; // 0x1bda76
    int16_t v2 = v1; // 0x1bda78
    int16_t v3 = (int16_t)v1 % 256; // 0x1bda78
    int16_t v4 = v2 / v3; // 0x1bda78
    int64_t v5 = v1 & -0x10000 | (int64_t)(v4 % 256) | (int64_t)(256 * (v2 % v3)); // 0x1bda78
    int32_t v6 = v5;
    *(int32_t *)0x28014b1a8814b072 = v6;
    *(char *)a1 = (char)v4;
    int32_t v7 = v6; // 0x1bda85
    int64_t v8 = v5; // 0x1bda85
    if ((int32_t)v1 == (int32_t)a4) {
        v8 = function_1bda3f();
        v7 = v8;
    }
    uint64_t v9 = v8;
    char v10 = *(char *)(a3 + 12); // 0x1bda8d
    return 256 * (int64_t)(v10 + (char)(v9 / 256) + (char)(v7 < 0x28980001)) | v9 & -0xff01;
}

// Address range: 0x1bda99 - 0x1bda9d
int64_t function_1bda99(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1bda99
    return a3 & 0xffffffff;
}

// Address range: 0x1bdadf - 0x1bdae2
int64_t function_1bdadf(void) {
    // 0x1bdadf
    int64_t result; // 0x1bdadf
    return result;
}

// Address range: 0x1bdb84 - 0x1bdbab
int64_t function_1bdb84(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1bdb84
    unknown_ffffffffa480b3a2();
    *(char *)-0x7e9e2ffec21c1c00 = -22;
    return 0x6f998fea;
}

// Address range: 0x1bdbd3 - 0x1bdbd6
int64_t function_1bdbd3(int64_t a1) {
    // 0x1bdbd3
    int64_t result; // 0x1bdbd3
    return result;
}

// Address range: 0x1bdbda - 0x1bdbdd
int64_t function_1bdbda(int64_t a1) {
    // 0x1bdbda
    int64_t result; // 0x1bdbda
    return result;
}

// Address range: 0x1bdc05 - 0x1bdc06
int64_t function_1bdc05(int64_t a1) {
    // 0x1bdc05
    int64_t result; // 0x1bdc05
    return result;
}

// Address range: 0x1bdc25 - 0x1bdc37
int64_t function_1bdc25(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 - 0x725dfe18); // 0x1bdc25
    bool v2; // 0x1bdc25
    *v1 = *v1 - 76 + (int32_t)v2;
    int64_t v3; // 0x1bdc25
    int64_t v4; // 0x1bdc25
    *(int32_t *)a2 = *(int32_t *)&v3 | (int32_t)v4;
    return unknown_5c615f36();
}

// Address range: 0x1bdc4a - 0x1bdc4b
int64_t function_1bdc4a(int64_t a1) {
    // 0x1bdc4a
    int64_t result; // 0x1bdc4a
    return result;
}

// Address range: 0x1bdc58 - 0x1bdc59
int64_t function_1bdc58(void) {
    // 0x1bdc58
    int64_t result; // 0x1bdc58
    return result;
}

// Address range: 0x1bdc69 - 0x1bdc77
int64_t function_1bdc69(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t result = unknown_ffffffffe30ae76f(a1, a2, a3, a4); // 0x1bdc69
    char * v1 = (char *)(a4 + 0x1e800ab); // 0x1bdc6e
    *v1 = *v1 ^ (char)(result / 256);
    return result;
}

// Address range: 0x1bdcbc - 0x1bdcc1
int64_t function_1bdcbc(void) {
    // 0x1bdcbc
    return function_ffffffffb4711bba();
}

// Address range: 0x1bdcc3 - 0x1bdcde
int64_t function_1bdcc3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1bdcc3
    int64_t v1; // 0x1bdcc3
    *(char *)v1 = 0;
    char * v2 = (char *)(a1 - 0x17e2b106); // 0x1bdcc6
    *v2 = (char)a4;
    int32_t * v3 = (int32_t *)(v1 + 72); // 0x1bdccc
    uint32_t v4 = *v3; // 0x1bdccc
    uint32_t v5 = v4 + (int32_t)a2; // 0x1bdccc
    *v3 = v5;
    char * v6 = (char *)(a2 - 0x2bfb1fdd); // 0x1bdccf
    unsigned char v7 = *v6; // 0x1bdccf
    unsigned char v8 = *v2 % 32; // 0x1bdccf
    bool v9 = v5 < v4; // 0x1bdccf
    if (v8 != 0) {
        char v10 = v7 >> v8 | v7 << 8 - v8; // 0x1bdccf
        *v6 = v10;
        v9 = v10 < 0;
    }
    int64_t result; // 0x1bdcc3
    if (!v9) {
        result = function_1bdc58();
    }
    // 0x1bdcd7
    return result;
}

// Address range: 0x1bdcf8 - 0x1bdd00
int64_t function_1bdcf8(void) {
    // 0x1bdcf8
    return unknown_1a2f7cfe();
}

// Address range: 0x1bdd0e - 0x1bdd1c
int64_t function_1bdd0e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1bdd0e
    int64_t v1; // 0x1bdd0e
    *(int32_t *)v1 = (int32_t)a3;
    return unknown_3ad4361c();
}

// Address range: 0x1bdda4 - 0x1bdda7
int64_t function_1bdda4(int64_t a1) {
    // 0x1bdda4
    int64_t result; // 0x1bdda4
    return result;
}

// Address range: 0x1bddd0 - 0x1bddd1
int64_t function_1bddd0(void) {
    // 0x1bddd0
    int64_t result; // 0x1bddd0
    return result;
}

// Address range: 0x1bddde - 0x1bddee
int64_t function_1bddde(int64_t a1, int64_t a2) {
    // 0x1bddde
    bool v1; // 0x1bddde
    if (v1) {
        function_1bddd0();
    }
    // 0x1bdde0
    return function_2771f0a1();
}

// Address range: 0x1bddee - 0x1bddf6
int64_t function_1bddee(int64_t a1) {
    // 0x1bddee
    int64_t result; // 0x1bddee
    int32_t * v1 = (int32_t *)(result + 0x6f37a3a0); // 0x1bddee
    *v1 = *v1 >> 9;
    return result;
}

// Address range: 0x1bde5b - 0x1bde6a
int64_t function_1bde5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 19 + 2 * a4); // 0x1bde5d
    int64_t v2; // 0x1bde5b
    *v1 = *v1 + (int32_t)v2;
    char * v3 = (char *)(a1 + 0x1e83c7e); // 0x1bde61
    *v3 = *v3 + (char)v2;
    return v2 & 0xffffffff;
}

// Address range: 0x1bde9b - 0x1bde9c
int64_t function_1bde9b(void) {
    // 0x1bde9b
    int64_t result; // 0x1bde9b
    return result;
}

// Address range: 0x1bdeaf - 0x1bdeb3
int64_t function_1bdeaf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1bdeaf
    return function_1bde9b();
}

// Address range: 0x1bdf28 - 0x1bdf2b
int64_t function_1bdf28(int64_t a1) {
    // 0x1bdf28
    int64_t result; // 0x1bdf28
    return result;
}

// Address range: 0x1bdf2e - 0x1bdf2f
int64_t function_1bdf2e(void) {
    // 0x1bdf2e
    int64_t result; // 0x1bdf2e
    return result;
}

// Address range: 0x1bdf67 - 0x1bdf6a
int64_t function_1bdf67(int64_t a1) {
    // 0x1bdf67
    int64_t result; // 0x1bdf67
    return result;
}

// Address range: 0x1bdf6b - 0x1bdf6e
int64_t function_1bdf6b(int64_t a1) {
    // 0x1bdf6b
    int64_t result; // 0x1bdf6b
    return result;
}

// Address range: 0x1bdf74 - 0x1bdfa6
int64_t function_1bdf74(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bdf74
    unknown_2296c87a();
    float80_t v1; // 0x1bdf74
    *(int64_t *)-0x6a041ff0 = (int64_t)v1;
    int64_t v2 = a4 - 1; // 0x1bdf7f
    bool v3; // 0x1bdf74
    if (v2 != 0 == v3) {
        function_1bdf2e();
    }
    int64_t v4 = unknown_18a91389(); // 0x1bdf83
    int32_t * v5 = (int32_t *)(a1 - 61); // 0x1bdf88
    *v5 = *v5 + (int32_t)v4;
    int64_t v6; // 0x1bdf74
    *(char *)v6 = *(char *)&v6 + (char)v2;
    int32_t * v7 = (int32_t *)(a3 & -0xff01 | (int64_t)&g2); // 0x1bdf91
    *v7 = *v7 + (int32_t)a1;
    char * v8 = (char *)(a1 + 117); // 0x1bdf93
    int64_t v9; // 0x1bdf74
    *v8 = *v8 ^ (char)((int64_t)&v9 / 256);
    return function_ffffffffaf110c9f();
}

// Address range: 0x1bdfc9 - 0x1bdfcc
int64_t function_1bdfc9(void) {
    // 0x1bdfc9
    int64_t result; // 0x1bdfc9
    return result;
}

// Address range: 0x1bdfd9 - 0x1bdfe5
int64_t function_1bdfd9(void) {
    // 0x1bdfd9
    return function_ffffffffb11aec10();
}

// Address range: 0x1bdff9 - 0x1be000
int64_t function_1bdff9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bdff9
    int64_t result; // 0x1bdff9
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x1be0b7 - 0x1be0e7
int64_t function_1be0b7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1be0b7
    int64_t v1; // 0x1be0b7
    uint64_t v2 = v1;
    int64_t v3 = a3;
    int32_t * v4 = (int32_t *)(a3 - 2); // 0x1be0b7
    *v4 = *v4 + (int32_t)a1;
    char * v5 = (char *)a3; // 0x1be0c3
    *v5 = *(char *)&v3 + (char)a4;
    *v5 = *(char *)&v3 + (char)(a3 / 256);
    *(int32_t *)0x3faa49c4 = *(int32_t *)0x3faa49c4 | (int32_t)a4;
    char v6 = *(char *)((v1 & 0xffffff00) - 126); // 0x1be0d9
    int32_t * v7 = (int32_t *)(v2 & -256 | (int64_t)(v6 + (char)v2)); // 0x1be0dd
    *v7 = *v7 ^ (int32_t)a2;
    *(char *)-0x36d02318 = *(char *)-0x36d02318 + (char)(v2 / 256);
    return v3 & 0xffffffff;
}

// Address range: 0x1be0ea - 0x1be0ed
int64_t function_1be0ea(void) {
    // 0x1be0ea
    int64_t result; // 0x1be0ea
    return result;
}

// Address range: 0x1be0f5 - 0x1be0ff
int64_t function_1be0f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1be0f5
    return function_ffffffffe81dc968();
}

// Address range: 0x1be0ff - 0x1be1c1
int64_t function_1be0ff(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int32_t v1 = *(int32_t *)-0x3c3116fa; // 0x1be0ff
    int32_t v2 = a1; // 0x1be0ff
    int32_t v3 = v1 + v2; // 0x1be0ff
    *(int32_t *)-0x3c3116fa = v3;
    int64_t v4; // 0x1be0ff
    if (v3 < 0 == ((v3 ^ v1) & (v3 ^ v2)) < 0 == (v3 != 0)) {
        char v5 = __asm_in(94); // 0x1be141
        if (((v3 ^ v1) & (v3 ^ v2)) >= 0) {
            // 0x1be12d
            return unknown_ffffffffcd07b534();
        }
        int64_t result = v4 & -256 | (int64_t)v5; // 0x1be141
        int32_t * v6 = (int32_t *)result; // 0x1be145
        *v6 = *v6 + (int32_t)a4;
        return result;
    }
    uint64_t v7 = unknown_7ddf4913(); // 0x1be10d
    char * v8 = (char *)(a1 + 0x3d9501e8); // 0x1be179
    char v9 = *v8 - (char)(v7 / 256); // 0x1be179
    unsigned char v10 = llvm_ctpop_i8(v9); // 0x1be179
    *v8 = v9;
    uint32_t v11 = ((int32_t)v7 | (int32_t)&g3) >> 31; // 0x1be181
    uint32_t v12 = 256 * (v11 / 512 % 128 | v11 / 2 & 128) | v11 & -0xff01;
    int64_t v13 = unknown_ffffffffbe76d08a(); // 0x1be189
    int64_t v14 = v4 + 16; // 0x1be189
    int64_t v15 = a1; // 0x1be189
    int64_t v16; // 0x1be0ff
    bool v17; // 0x1be0ff
    if (v10 % 2 != 0) {
        // 0x1be18b
        __asm_in(-32);
        int64_t v18 = unknown_6e0bf497(); // 0x1be191
        v14 = v4 + 8;
        *(int64_t *)v14 = v18;
        *(int32_t *)(a1 & 0xffffffff) = (int32_t)v18;
        v15 = (v17 ? 0xfffffffc : 4) + a1 & 0xffffffff;
        int32_t * v19 = (int32_t *)v15; // 0x1be19b
        *v19 = *v19 + v12;
        v13 = ((v18 + a4 / 256) % 256 | v18 & -256) ^ 232;
        v16 = v4 | a4 & 0xff00;
    }
    int64_t v20 = v14;
    if (a4 == 0) {
        // 0x1be150
        *(int64_t *)(v20 - 8) = v15 + v16 & 0xffffffff;
        return v13 + 0x38912e45 & 0xffffffff;
    }
    int32_t * v21 = (int32_t *)(int64_t)v12; // 0x1be1a8
    uint32_t v22 = *v21; // 0x1be1a8
    uint32_t v23 = v22 + (int32_t)v20; // 0x1be1a8
    *v21 = v23;
    int64_t v24 = (v20 - (int64_t)(v23 < v22)) % 256 | v20 & 0xffffff00; // 0x1be1ab
    char * v25 = (char *)v24; // 0x1be1ad
    *v25 = *v25 + 18;
    *(int32_t *)v15 = *(int32_t *)v24 + (int32_t)v24;
    int64_t v26 = v15 + (v17 ? -4 : 4); // 0x1be1b3
    int32_t * v27 = (int32_t *)(v4 + 0x14009900); // 0x1be1b6
    *v27 = *v27 + (int32_t)v26;
    return function_ffffffffb2d60921(v26);
}

// Address range: 0x1be1c1 - 0x1be1c9
int64_t function_1be1c1(int64_t a1) {
    // 0x1be1c1
    int64_t v1; // 0x1be1c1
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)v1;
    return result;
}

// Address range: 0x1be1f7 - 0x1be202
int64_t function_1be1f7(void) {
    // 0x1be1f7
    return function_ffffffffcaa2cdd5();
}

// Address range: 0x1be20b - 0x1be20d
int64_t function_1be20b(void) {
    // 0x1be20b
    int64_t v1; // 0x1be20b
    return function_1be23e(v1, v1, v1);
}

// Address range: 0x1be20e - 0x1be213
int64_t function_1be20e(void) {
    // 0x1be20e
    return __asm_int1();
}

// Address range: 0x1be23e - 0x1be252
int64_t function_1be23e(int64_t a1, int64_t a2, int64_t a3) {
    char v1 = *(char *)(unknown_ffffffffd3cf1844() + 0x50c32403); // 0x1be243
    int64_t result = unknown_5c122b51(); // 0x1be24b
    __asm_out_133((int16_t)(a3 & 0xff00 | (int64_t)(v1 | (char)a3)), (char)result);
    return result;
}

// Address range: 0x1be253 - 0x1be254
int64_t function_1be253(int64_t a1) {
    // 0x1be253
    int64_t result; // 0x1be253
    return result;
}

// Address range: 0x1be29c - 0x1be2ab
int64_t function_1be29c(void) {
    // 0x1be29c
    unknown_c5baaa7();
    return function_a61e493();
}

// Address range: 0x1be36b - 0x1be36c
int64_t function_1be36b(void) {
    // 0x1be36b
    int64_t result; // 0x1be36b
    return result;
}

// Address range: 0x29271f - 0x2927e7
int64_t function_29271f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x29271f
    int64_t v1; // bp-8, 0x29271f
    int64_t v2 = (int64_t)&v1; // 0x292759
    int64_t v3 = v2 + 16; // 0x292760
    int64_t * v4 = (int64_t *)(v2 + 8); // 0x29276f
    *v4 = 0x7aa7d91e;
    int64_t v5 = v2 + 24; // 0x292780
    *(int64_t *)v5 = *v4;
    *v4 = a4;
    v1 = a1;
    int64_t v6 = v1; // 0x29279b
    int64_t * v7 = (int64_t *)v3; // 0x2927a2
    v1 = *v7;
    *v4 = v5;
    *v4 = *v7;
    *(int64_t *)(v2 - 8) = v2;
    v1 = v3;
    return function_cf3c7(v6, a7);
}

// Address range: 0x2927e7 - 0x29297d
int64_t function_2927e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2927e7
    return function_cf3c7(a1, a2);
}

// Address range: 0x29297d - 0x292982
int64_t function_29297d(void) {
    // 0x29297d
    return function_2d2e69();
}

// Address range: 0x292991 - 0x292992
int64_t function_292991(void) {
    // 0x292991
    int64_t result; // 0x292991
    return result;
}

// Address range: 0x2929aa - 0x292a07
int64_t function_2929aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a3 - 59); // 0x2929b1
    *v1 = *v1 + (char)a3;
    int16_t v2 = a3; // 0x2929b9
    __asm_in_134(v2);
    int64_t v3 = function_292991(); // 0x2929ba
    if ((char)v3 < 71) {
        // 0x2929fe
        *(char *)a1 = __asm_insb(v2);
        return unknown_82e1208();
    }
    int32_t * v4 = (int32_t *)(a4 + 0x3a0c77f5); // 0x2929c5
    *v4 = *v4 + (int32_t)a1;
    return (v3 + 185) % 256 | v3 & -256;
}

// Address range: 0x292a09 - 0x292ad4
int64_t function_292a09(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_59231315() & 0x7a07be54 | 0x85f841ab; // 0x292a14
    int32_t * v2 = (int32_t *)v1; // 0x292a19
    *v2 = *v2 | 0x54df0880;
    int16_t v3 = 256 * (int16_t)v1 >> 8; // 0x292a1f
    int64_t v4 = v1 & 0xffff0000 | (int64_t)(v3 * v3); // 0x292a1f
    int32_t * v5 = (int32_t *)v4; // 0x292a21
    *v5 = *v5 + (int32_t)v4;
    char v6 = *(char *)(v4 + 0x44065ffc); // 0x292a23
    unknown_3358e935();
    char * v7 = (char *)(a2 - 49); // 0x292a34
    int64_t v8; // 0x292a09
    *v7 = *v7 | (char)v8;
    int64_t v9 = unknown_ffffffffb23f0544(); // 0x292a3e
    char v10 = __asm_insb((int16_t)(a3 & 0xff00 | (int64_t)(v6 + (char)a3))); // 0x292a43
    *(char *)a1 = v10;
    unknown_ffffffff8ba91953(0xc40ad023, 0x2820646c, (int32_t)v9 >> 31);
    *(int32_t *)0xc40ad023 = *(int32_t *)0xc40ad023 + 0x2820646c;
    unknown_79483662();
    int64_t v11 = unknown_3dfcae80() + 0x8815a046; // 0x292a81
    int32_t * v12 = (int32_t *)((v11 & 0xffffffff) + 0x1528102f); // 0x292a83
    *v12 = *v12 + (int32_t)a4;
    __asm_out_133((int16_t)a4, (char)v11);
    unsigned char v13 = *(char *)0x7063da78; // 0x292a8a
    int64_t v14 = 256 * (unknown_ffffffffd6478d96() + (int64_t)v13) & 0xff00 | a4 & 0xffff00ff; // 0x292a95
    int64_t v15 = v14 + 0xc40ad023; // 0x292a9e
    int64_t v16 = unknown_ffffffffe8bd529f() & 0xffffffff; // 0x292aa8
    int64_t v17 = unknown_ffffffffe8b6eab0((int32_t)v15); // 0x292aa9
    *(int32_t *)0x1853c77201e884fb = (int32_t)v17 - 0x3f34ad18;
    int32_t * v18 = (int32_t *)(v16 + 28); // 0x292abd
    *v18 = *v18 | (int32_t)v8;
    unknown_ffffffffeed467c6();
    int32_t * v19 = (int32_t *)v14; // 0x292acc
    *v19 = *v19 - 0x3bf52fdd;
    __asm_hlt();
    int64_t result = function_292b1d(v15 & 0xffffffff, a4 + 0xf16cbc8c & 0xffffffff, v14, v16, (int64_t)&g4); // 0x292ad2
    return result;
}

// Address range: 0x292af0 - 0x292af3
int64_t function_292af0(void) {
    // 0x292af0
    int64_t result; // 0x292af0
    return result;
}

// Address range: 0x292afb - 0x292afe
int64_t function_292afb(int64_t a1) {
    // 0x292afb
    __asm_wait(a1);
    int64_t v1; // 0x292afb
    return v1 & 0xffffffff;
}

// Address range: 0x292b1d - 0x292b94
int64_t function_292b1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x292b1d
    int64_t v1; // 0x292b1d
    unsigned char v2 = (char)v1; // 0x292b21
    unsigned char v3 = *(char *)(a1 - 24); // 0x292b21
    int64_t v4 = unknown_ffffffff9871d62b(); // 0x292b25
    uint32_t v5 = (int32_t)a4 % 32; // 0x292b2a
    bool v6 = v3 == v2; // 0x292b2a
    bool v7 = v3 > v2; // 0x292b2a
    if (v5 != 0) {
        int32_t * v8 = (int32_t *)(v1 + 0x1e83d12); // 0x292b2a
        uint32_t v9 = *v8; // 0x292b2a
        int32_t v10 = v9 >> v5; // 0x292b2a
        *v8 = v10;
        v6 = v10 == 0;
        v7 = (v9 & 1 << v5 - 1) != 0;
    }
    if (v6 || v7) {
        int64_t result = unknown_561a5487() & -143; // 0x292b86
        *(char *)0x1e840deb7d81015 = (char)result;
        return result;
    }
    int64_t v11 = v4 + 0xfb0fff55; // 0x292b33
    *(int32_t *)-0xd0579381c4afe18 = (int32_t)v11;
    int64_t v12; // 0x292b1d
    __asm_rcl(*(int32_t *)&v12);
    int64_t v13 = v11 & 0xffffffff; // bp-8, 0x292b43
    uint64_t v14 = v4 + 41; // 0x292b49
    int64_t v15 = v11 & 0xffffff00; // 0x292b49
    char * v16 = (char *)((v15 | v14 % 256) + 0x7101b00); // 0x292b4b
    *v16 = *v16 + (char)v14;
    int32_t * v17 = (int32_t *)(v1 - 0x41fefe00); // 0x292b53
    *v17 = *v17 + (int32_t)(int64_t)&v13;
    return v15 | (v4 + 17) % 256;
}

// Address range: 0x292bad - 0x292bb2
int64_t function_292bad(void) {
    // 0x292bad
    return function_211728e();
}

// Address range: 0x292bb4 - 0x292bb5
int64_t function_292bb4(int64_t a1) {
    // 0x292bb4
    int64_t result; // 0x292bb4
    return result;
}

// Address range: 0x292c71 - 0x292c74
int64_t function_292c71(void) {
    // 0x292c71
    int64_t result; // 0x292c71
    return result;
}

// Address range: 0x292c87 - 0x292c88
int64_t function_292c87(void) {
    // 0x292c87
    int64_t result; // 0x292c87
    return result;
}

// Address range: 0x292c8d - 0x292c92
int64_t function_292c8d(void) {
    // 0x292c8d
    return function_ffffffff987038e4();
}

// Address range: 0x292ca2 - 0x292ca7
int64_t function_292ca2(void) {
    // 0x292ca2
    return function_6c73ad12();
}

// Address range: 0x292cbc - 0x292cbf
int64_t function_292cbc(int64_t a1) {
    // 0x292cbc
    int64_t result; // 0x292cbc
    return result;
}

// Address range: 0x292cd1 - 0x292d05
int64_t function_292cd1(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x292cd1
    int64_t v1; // 0x292cd1
    uint64_t v2 = v1;
    char * v3 = (char *)(v2 + 2); // 0x292cda
    *v3 = *v3 + (char)v2;
    *(char *)0x28a063e4 = *(char *)0x28a063e4 + (char)(v2 / 256);
    *(char *)((a1 & 0xffffffff & a3) + 0x7290481a) = (char)(a3 / 256);
    unsigned char v4 = *(char *)-0x7312cefec2ff3c68; // 0x292cf3
    return (int64_t)v4 | (int64_t)(*(int32_t *)-0x6eaef82963e6f195 & -256);
}

// Address range: 0x292d05 - 0x292d1c
int64_t function_292d05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x292d05
    int64_t v2; // 0x292d05
    char v3 = v2;
    char v4 = v3; // 0x292d05
    char v5 = v3; // 0x292d05
    int64_t v6; // 0x292d05
    bool v7; // 0x292d05
    int64_t result; // 0x292d05
    if (v1 != 0) {
        uint32_t v8 = (int32_t)a3;
        int32_t v9 = v8 << 32 - v1 | v8 >> v1; // 0x292d05
        *(int32_t *)a3 = v9;
        v4 = result;
        v6 = result;
        v5 = *(char *)&result;
        v7 = v9 < 0;
    }
    // 0x292d05
    *(char *)v6 = v5 - v4 + (char)v7;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    *(char *)0x50da7c13 = *(char *)0x50da7c13 + (char)(v2 / 256);
    return result;
}
