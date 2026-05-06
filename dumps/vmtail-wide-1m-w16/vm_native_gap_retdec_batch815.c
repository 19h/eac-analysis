/*
 * Targeted RetDec C for native executable gap queue batch 815.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2b5f75-0x2b6175 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b6375-0x2b6575 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b6575-0x2b6775 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47fa30-0x47fc30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47fc30-0x47fe30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47fe30-0x480030 rank=- name=- kind=- bytes=- uncovered=-
 *   0x480030-0x480230 rank=- name=- kind=- bytes=- uncovered=-
 *   0x480230-0x480430 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_213e3aa();
int64_t function_2b5f75(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2b5f82(void);
int64_t function_2b5fde(void);
int64_t function_2b5ff1(void);
int64_t function_2b60b1(void);
int64_t function_2b60ff(int64_t a1);
int64_t function_2b6105(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b6143(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b6375(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b647a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b64c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b650e(int64_t a1);
int64_t function_2b6530(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2b6676(void);
int64_t function_2b6716(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b6719(void);
int64_t function_2b6731(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ddf591b();
int64_t function_47fa30(void);
int64_t function_47fa50(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_47faa7(int64_t result);
int64_t function_47faac(int64_t a1);
int64_t function_47fae7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_47faf5(void);
int64_t function_47fafe(int64_t a1);
int64_t function_47fb02(int64_t a1);
int64_t function_47fb2d(void);
int64_t function_47fb44(int64_t a1);
int64_t function_47fb7f(int64_t a1);
int64_t function_47fb91(void);
int64_t function_47fc10(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47fc75(int64_t a1, int64_t a2);
int64_t function_47fcc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_47fcf7(void);
int64_t function_47fdab(int64_t a1);
int64_t function_47fdb1(int64_t a1);
int64_t function_47fdf8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_47fe8d(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_47ff99(void);
int64_t function_47ffef(int64_t a1);
int64_t function_480036(void);
int64_t function_480046(int64_t a1);
int64_t function_480060(int64_t a1);
int64_t function_4800b6(int64_t a1);
int64_t function_4800c2(void);
int64_t function_4800dd(int64_t a1);
int64_t function_4800ed(void);
int64_t function_48010d(int64_t a1);
int64_t function_480133(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_480234(void);
int64_t function_480259(void);
int64_t function_4802a9(void);
int64_t function_4802bd(void);
int64_t function_4802fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48035d(void);
int64_t function_480392(void);
int64_t function_4803ba(void);
int64_t function_4803be(void);
int64_t function_4803d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_5ad72c56();
int64_t function_68e32e67();
int64_t function_6b2ca380();
int64_t function_ffffffffae8070b2();
int64_t function_ffffffffe900bd2a();
int64_t function_ffffffffeb2464db();
int64_t unknown_2bad8f7c();
int64_t unknown_ffffffff8422bed6();
int64_t unknown_ffffffffa0337110();
int64_t unknown_ffffffffbade221f();

// Address range: 0x2b5f75 - 0x2b5f77
int64_t function_2b5f75(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2b5f75
    int64_t result; // 0x2b5f75
    return result;
}

// Address range: 0x2b5f82 - 0x2b5f83
int64_t function_2b5f82(void) {
    // 0x2b5f82
    int64_t result; // 0x2b5f82
    return result;
}

// Address range: 0x2b5fde - 0x2b5fdf
int64_t function_2b5fde(void) {
    // 0x2b5fde
    int64_t result; // 0x2b5fde
    return result;
}

// Address range: 0x2b5ff1 - 0x2b5ff6
int64_t function_2b5ff1(void) {
    // 0x2b5ff1
    return function_2b5fde();
}

// Address range: 0x2b60b1 - 0x2b60b2
int64_t function_2b60b1(void) {
    // 0x2b60b1
    int64_t result; // 0x2b60b1
    return result;
}

// Address range: 0x2b60ff - 0x2b6100
int64_t function_2b60ff(int64_t a1) {
    // 0x2b60ff
    int64_t result; // 0x2b60ff
    return result;
}

// Address range: 0x2b6105 - 0x2b6127
int64_t function_2b6105(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b6105
    int64_t v1; // 0x2b6105
    __asm_out(21, (char)v1);
    uint32_t v2 = (int32_t)a1; // 0x2b6107
    uint32_t v3 = (int32_t)a4 + v2; // 0x2b6107
    int64_t v4 = unknown_ffffffffa0337110(v3); // 0x2b610a
    unsigned char v5 = (char)v4 + (char)(v3 < v2) + *(char *)(v1 + 0x7e8cf2cc); // 0x2b610f
    int64_t v6 = v4 & -256 | (int64_t)v5; // 0x2b610f
    char * v7 = (char *)v6; // 0x2b6115
    *v7 = v5 & *v7;
    unknown_ffffffffbade221f(v6 & 0xffffffff);
    return function_ffffffffe900bd2a();
}

// Address range: 0x2b6143 - 0x2b614d
int64_t function_2b6143(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a2; // 0x2b6145
    uint32_t v2 = (int32_t)a4; // 0x2b6145
    int32_t v3 = v2 + v1; // 0x2b6145
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x2b6145
    int16_t v5 = a3; // 0x2b6148
    *(int32_t *)a1 = __asm_insd(v5);
    int64_t v6; // 0x2b6143
    return 0x8000 * (int64_t)(v3 < 0) | 0x4000 * (int64_t)(v3 == 0) | 0x1000 * (int64_t)(v2 % 16 + v1 % 16 > 15) | 1024 * (int64_t)(v4 % 2 == 0) | 2 * v6 & 0xffff0000 | (int64_t)__asm_in(v5) | 512;
}

// Address range: 0x2b6375 - 0x2b637f
int64_t function_2b6375(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b6375
    int64_t result; // 0x2b6375
    return result;
}

// Address range: 0x2b647a - 0x2b647e
int64_t function_2b647a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 60); // 0x2b647a
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x2b647a
    return result;
}

// Address range: 0x2b64c5 - 0x2b64dd
int64_t function_2b64c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b64c5
    int64_t v1; // 0x2b64c5
    int32_t * v2 = (int32_t *)(v1 + 0x4c0ec6c6); // 0x2b64c5
    *v2 = *v2 + (int32_t)v1;
    int32_t * v3 = (int32_t *)(8 * a3 + a1); // 0x2b64cb
    *v3 = *v3 + (int32_t)v1;
    __asm_int3(a4);
    return unknown_ffffffff8422bed6();
}

// Address range: 0x2b650e - 0x2b6511
int64_t function_2b650e(int64_t a1) {
    // 0x2b650e
    int64_t result; // 0x2b650e
    return result;
}

// Address range: 0x2b6530 - 0x2b65cc
int64_t function_2b6530(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2b6530
    *(char *)a2 = (char)a4 + (char)a2;
    int64_t result = 0x1e801e8; // 0x2b6540
    int64_t v1 = a1; // 0x2b6540
    *(char *)v1 = (char)result;
    bool v2; // 0x2b6530
    v1 += (v2 ? -1 : 1);
    uint32_t v3 = (int32_t)result; // 0x2b6543
    int64_t v4; // 0x2b6530
    int32_t v5 = v4 & -0xff01 | (int64_t)&g1; // 0x2b6548
    int32_t v6 = v3 < 0xddfab701; // 0x2b6548
    int32_t v7 = *(int32_t *)0x2392562d + v6; // 0x2b6548
    uint32_t v8 = v5 - v7; // 0x2b6548
    int3_t v9; // 0x2b6530
    int3_t v10 = v9 - 1; // 0x2b654a
    __frontend_reg_store_fpr(v10, *(float80_t *)(a2 + 121));
    while (((v8 - v6 ^ v5) & (v7 ^ v5)) >= 0) {
        // 0x2b6550
        result = __asm_sti();
        if ((*(int32_t *)0x2392562d & v3) != 0) {
            // 0x2b6557
            return result;
        }
        *(char *)v1 = (char)result;
        v1 += (v2 ? -1 : 1);
        v3 = (int32_t)result;
        v5 = v8;
        v6 = v3 < 0xddfab701;
        v7 = *(int32_t *)0x2392562d + v6;
        v8 = v5 - v7;
        v10--;
        __frontend_reg_store_fpr(v10, *(float80_t *)(a2 + 121));
    }
    // 0x2b65c8
    return __asm_wait(v1, a2, 0x2392562d);
}

// Address range: 0x2b6676 - 0x2b6680
int64_t function_2b6676(void) {
    // 0x2b6676
    unknown_2bad8f7c();
    return function_6b2ca380();
}

// Address range: 0x2b6716 - 0x2b6719
int64_t function_2b6716(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b6716
    int64_t v1; // 0x2b6716
    int64_t v2 = v1;
    return v2 + 256 * a3 & 0xff00 | v2 & -0xff01;
}

// Address range: 0x2b6719 - 0x2b6720
int64_t function_2b6719(void) {
    // 0x2b6719
    return function_213e3aa();
}

// Address range: 0x2b6731 - 0x2b6736
int64_t function_2b6731(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b6731
    int64_t result; // 0x2b6731
    return result;
}

// Address range: 0x47fa30 - 0x47fa37
int64_t function_47fa30(void) {
    // 0x47fa30
    return __asm_sti();
}

// Address range: 0x47fa50 - 0x47fa5a
int64_t function_47fa50(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x47fa50
    int64_t v1; // 0x47fa50
    uint32_t v2 = (int32_t)v1; // 0x47fa50
    uint32_t v3 = *(int32_t *)(a3 - 0x1ba48f3c); // 0x47fa50
    char * v4 = (char *)(a3 - 38); // 0x47fa56
    *v4 = *v4 - (char)(a4 / 256) + (char)(v3 > v2);
    return v2 - v3;
}

// Address range: 0x47faa7 - 0x47faa9
int64_t function_47faa7(int64_t result) {
    // 0x47faa7
    return result;
}

// Address range: 0x47faac - 0x47fab1
int64_t function_47faac(int64_t a1) {
    // 0x47faac
    int64_t result; // 0x47faac
    return result;
}

// Address range: 0x47fae7 - 0x47faf4
int64_t function_47fae7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x47fae7
    int64_t v1; // 0x47fae7
    int64_t v2 = v1;
    char * v3 = (char *)(v1 + 0x311152d); // 0x47fae8
    *v3 = *v3 & (char)(a4 / 256);
    return (v2 + 209) % 256 | v2 & -256;
}

// Address range: 0x47faf5 - 0x47fafa
int64_t function_47faf5(void) {
    // 0x47faf5
    return function_ffffffffeb2464db();
}

// Address range: 0x47fafe - 0x47fb01
int64_t function_47fafe(int64_t a1) {
    // 0x47fafe
    int64_t result; // 0x47fafe
    return result;
}

// Address range: 0x47fb02 - 0x47fb07
int64_t function_47fb02(int64_t a1) {
    // 0x47fb02
    int64_t v1; // 0x47fb02
    return v1 & -256 | (int64_t)__asm_in_133((char)a1);
}

// Address range: 0x47fb2d - 0x47fb2e
int64_t function_47fb2d(void) {
    // 0x47fb2d
    int64_t result; // 0x47fb2d
    return result;
}

// Address range: 0x47fb44 - 0x47fb49
int64_t function_47fb44(int64_t a1) {
    int32_t result = __asm_in_134((char)a1); // 0x47fb44
    __asm_out_135(118, result);
    return result;
}

// Address range: 0x47fb7f - 0x47fb88
int64_t function_47fb7f(int64_t a1) {
    // 0x47fb7f
    int64_t result; // 0x47fb7f
    return result;
}

// Address range: 0x47fb91 - 0x47fb93
int64_t function_47fb91(void) {
    // 0x47fb91
    return function_47fb2d();
}

// Address range: 0x47fc10 - 0x47fc1b
int64_t function_47fc10(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47fc10
    __asm_int1();
    int64_t v1; // 0x47fc10
    __asm_outsb((int16_t)a3, (char)v1);
    return function_3ddf591b();
}

// Address range: 0x47fc75 - 0x47fc7d
int64_t function_47fc75(int64_t a1, int64_t a2) {
    // 0x47fc75
    int64_t result; // 0x47fc75
    return result;
}

// Address range: 0x47fcc2 - 0x47fcc8
int64_t function_47fcc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x47fcc2
    int64_t result; // 0x47fcc2
    return result;
}

// Address range: 0x47fcf7 - 0x47fcfa
int64_t function_47fcf7(void) {
    // 0x47fcf7
    int64_t result; // 0x47fcf7
    return result;
}

// Address range: 0x47fdab - 0x47fdb0
int64_t function_47fdab(int64_t a1) {
    // 0x47fdab
    int64_t result; // 0x47fdab
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)(v1 ^ a1);
    return result;
}

// Address range: 0x47fdb1 - 0x47fdb5
int64_t function_47fdb1(int64_t a1) {
    // 0x47fdb1
    int64_t result; // 0x47fdb1
    return result;
}

// Address range: 0x47fdf8 - 0x47fe71
int64_t function_47fdf8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x47fdf8
    int64_t result2; // 0x47fdf8
    char v1 = *(char *)(result2 + 0x78031a18); // 0x47fdf8
    char v2 = a3 / 256; // 0x47fdf8
    int64_t result; // 0x47fdf8
    if (((v1 - v2 ^ v1) & (v1 ^ v2)) >= 0) {
        // 0x47fe43
        return result;
    }
    if ((int32_t)(result2 ^ result2) >= 0) {
        // 0x47fe43
        return result;
    }
    // 0x47fe2a
    float80_t v3; // 0x47fdf8
    *(int32_t *)0x798b0419 = (int32_t)v3;
    char * v4 = (char *)(result2 + 32); // 0x47fe34
    *v4 = *v4 + v2;
    return result2;
}

// Address range: 0x47fe8d - 0x47ff7a
int64_t function_47fe8d(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2; // 0x47fe8d
    uint32_t v3 = (int32_t)v2 & 0x56e25e6; // 0x47fe8f
    int64_t result = v3; // 0x47fe8f
    if (v3 != 0) {
        // 0x47feaf
        return result;
    }
    int64_t v4 = llvm_bswap_i32((int32_t)v2); // 0x47fe8d
    v1 = result;
    char v5 = (char)(a3 / 256) - ((char)a1 > (char)a4 ? 119 : 118); // 0x47ff11
    if (llvm_ctpop_i8(v5) % 2 == 0) {
        // 0x47ff66
        bool v6; // 0x47fe8d
        uint32_t v7 = (int32_t)__asm_int3((v6 ? -1 : 1) + a1); // 0x47ff6b
        uint32_t v8 = *(int32_t *)(v2 + 0x5622335e + 2 * v4) + v7; // 0x47ff6b
        char v9 = *(char *)((int64_t)v8 - 0x34b2b673); // 0x47ff73
        return __asm_wait(v4, a5, 256 * (int64_t)(v5 - v9 + (char)(v8 < v7)) | a3 & -0xff01);
    }
    int32_t * v10 = (int32_t *)(result - 72); // 0x47ff16
    *v10 = *v10 + 0x75e0a9de;
    *(int32_t *)-0x7709d26d415e9b94 = (int32_t)a4;
    *(char *)(a4 & 0xffffffff) = *(char *)&v1 & (char)(a4 / 256);
    return a4 & 0xffffff00 | (int64_t)*(char *)(a4 % 256 + v4);
}

// Address range: 0x47ff99 - 0x47ff9c
int64_t function_47ff99(void) {
    // 0x47ff99
    int64_t result; // 0x47ff99
    return result;
}

// Address range: 0x47ffef - 0x47fff3
int64_t function_47ffef(int64_t a1) {
    // 0x47ffef
    int64_t v1; // 0x47ffef
    return v1 & -75;
}

// Address range: 0x480036 - 0x48003b
int64_t function_480036(void) {
    // 0x480036
    return function_ffffffffae8070b2();
}

// Address range: 0x480046 - 0x480047
int64_t function_480046(int64_t a1) {
    // 0x480046
    int64_t result; // 0x480046
    return result;
}

// Address range: 0x480060 - 0x480066
int64_t function_480060(int64_t a1) {
    // 0x480060
    int64_t result; // 0x480060
    return result;
}

// Address range: 0x4800b6 - 0x4800c1
int64_t function_4800b6(int64_t a1) {
    // 0x4800b6
    int64_t v1; // 0x4800b6
    return 256 * v1 & 0xff00 | v1 & -0xff01;
}

// Address range: 0x4800c2 - 0x4800cb
int64_t function_4800c2(void) {
    // 0x4800c2
    int64_t result; // 0x4800c2
    return result;
}

// Address range: 0x4800dd - 0x4800e1
int64_t function_4800dd(int64_t a1) {
    // 0x4800dd
    int64_t result; // 0x4800dd
    return result;
}

// Address range: 0x4800ed - 0x4800f2
int64_t function_4800ed(void) {
    // 0x4800ed
    return function_5ad72c56();
}

// Address range: 0x48010d - 0x48011f
int64_t function_48010d(int64_t a1) {
    // 0x48010d
    int64_t v1; // 0x48010d
    return v1 & 0xe0944200 | (int64_t)*(char *)0x700779e6d386399 | 0x1f6bbd98;
}

// Address range: 0x480133 - 0x480137
int64_t function_480133(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x480133
    int64_t result; // 0x480133
    return result;
}

// Address range: 0x480234 - 0x480235
int64_t function_480234(void) {
    // 0x480234
    int64_t result; // 0x480234
    return result;
}

// Address range: 0x480259 - 0x48025c
int64_t function_480259(void) {
    // 0x480259
    int64_t result; // 0x480259
    return result;
}

// Address range: 0x4802a9 - 0x4802ac
int64_t function_4802a9(void) {
    // 0x4802a9
    int64_t result; // 0x4802a9
    return result;
}

// Address range: 0x4802bd - 0x4802be
int64_t function_4802bd(void) {
    // 0x4802bd
    int64_t result; // 0x4802bd
    return result;
}

// Address range: 0x4802fc - 0x480307
int64_t function_4802fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4802fc
    bool v1; // 0x4802fc
    *(char *)(a1 + 0x279a1b67) = (char)v1;
    int64_t result; // 0x4802fc
    return result;
}

// Address range: 0x48035d - 0x480362
int64_t function_48035d(void) {
    // 0x48035d
    return function_68e32e67();
}

// Address range: 0x480392 - 0x480393
int64_t function_480392(void) {
    // 0x480392
    int64_t result; // 0x480392
    return result;
}

// Address range: 0x4803ba - 0x4803bb
int64_t function_4803ba(void) {
    // 0x4803ba
    int64_t result; // 0x4803ba
    return result;
}

// Address range: 0x4803be - 0x4803bf
int64_t function_4803be(void) {
    // 0x4803be
    int64_t result; // 0x4803be
    return result;
}

// Address range: 0x4803d1 - 0x4803eb
int64_t function_4803d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4803d1
    return function_4803be();
}
