/*
 * Targeted RetDec C for native executable gap queue batch 782.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2bee00-0x2bf000 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bf200-0x2bf300 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bf400-0x2bf600 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bf600-0x2bf800 rank=- name=- kind=- bytes=- uncovered=-
 *   0x467e34-0x468034 rank=- name=- kind=- bytes=- uncovered=-
 *   0x468034-0x468234 rank=- name=- kind=- bytes=- uncovered=-
 *   0x468234-0x468434 rank=- name=- kind=- bytes=- uncovered=-
 *   0x468434-0x468634 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_2bedec();
int64_t function_2bee00(int64_t a1, int64_t a2, int64_t a3, int64_t result);
int64_t function_2bee13(void);
int64_t function_2bee39(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2beebd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bef32(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2befbd(int64_t a1, int64_t a2);
int64_t function_2befee(void);
int64_t function_2bf1df();
int64_t function_2bf200(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2bf3d0();
int64_t function_2bf400(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bf487(int64_t a1);
int64_t function_2bf506(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2bf548(void);
int64_t function_2bf561(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bf5a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bf5fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bf615(int64_t a1);
int64_t function_2bf63d(void);
int64_t function_2bf646(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bf651(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2bf666(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2bf680(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2bf703(int64_t a1);
int64_t function_2bf747(void);
int64_t function_2bf76a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2bf7af(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3250fca8();
int64_t function_467e34(int64_t a1);
int64_t function_467e43(void);
int64_t function_467e6c(int64_t a1, int64_t a2, int64_t result, int64_t a4);
int64_t function_467e7c(int64_t a1);
int64_t function_467e93(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_467f39(void);
int64_t function_467f47(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_467f6d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_467fa7(void);
int64_t function_467fd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4680d4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_4681a8(void);
int64_t function_4681b3(void);
int64_t function_4681c5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4681cb(void);
int64_t function_4681e2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_468220(void);
int64_t function_468239(int64_t a1);
int64_t function_468247(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46826f(void);
int64_t function_46827d(void);
int64_t function_468294(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_46837a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4683af(void);
int64_t function_4683b7(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_4683ba(int64_t a1, int64_t a2, int64_t a3);
int64_t function_468404(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_468495(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4684e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4684e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4684fd(void);
int64_t function_468532(void);
int64_t function_468597(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4685e4(void);
int64_t function_4811aa1e();
int64_t function_70342767();
int64_t function_ffffffffab398872();
int64_t function_ffffffffe3885b7a();
int64_t unknown_16cab381();
int64_t unknown_1f2ddd74();
int64_t unknown_354a350c();
int64_t unknown_3abfc8a6();
int64_t unknown_3d2ddf89();
int64_t unknown_49c27cfc();
int64_t unknown_4a27db98();
int64_t unknown_58a2c006();
int64_t unknown_602d403b();
int64_t unknown_602f877e();
int64_t unknown_72389998();
int64_t unknown_76345006();
int64_t unknown_ffffffff8bc632a7();
int64_t unknown_ffffffff90009051();
int64_t unknown_ffffffff9fcd1fc7();
int64_t unknown_ffffffffb449385c();
int64_t unknown_ffffffffc836959b();
int64_t unknown_ffffffffd63a5a72();
int64_t unknown_ffffffffe4e97e51();
int64_t unknown_ffffffffeec33c89();
int64_t unknown_fffffffffb02d969();
int64_t unknown_fffffffffcecc917();

// Address range: 0x2bee00 - 0x2bee0a
int64_t function_2bee00(int64_t a1, int64_t a2, int64_t a3, int64_t result) {
    uint64_t v1 = unknown_76345006(a1, a2, a3, result); // 0x2bee00
    char * v2 = (char *)(a1 - 35); // 0x2bee05
    *v2 = *v2 & (char)(v1 / 256);
    int64_t v3; // 0x2bee00
    __asm_outsb((int16_t)a3, *(char *)&v3);
    return result;
}

// Address range: 0x2bee13 - 0x2bee15
int64_t function_2bee13(void) {
    // 0x2bee13
    return function_2bedec();
}

// Address range: 0x2bee39 - 0x2beebc
int64_t function_2bee39(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2bee39
    int64_t v1; // 0x2bee39
    int64_t v2 = v1;
    bool v3; // 0x2bee39
    if (v3 || v3) {
        int64_t result = v2 | a3 % 256; // 0x2bee3b
        __asm_out((int16_t)a3, (int32_t)result);
        return result;
    }
    // 0x2beeb9
    *(int32_t *)a1 = (int32_t)a2;
    return (v2 + 198) % 256 | v2 & -256;
}

// Address range: 0x2beebd - 0x2beee1
int64_t function_2beebd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2beebd
    int64_t v1; // 0x2beebd
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x2beebd
    int64_t v3 = (v2 ? -4 : 4) + a1; // 0x2beec6
    float80_t v4; // 0x2beebd
    *(float80_t *)(v3 - 0x17d9a146) = __asm_fbstp(v4);
    int32_t * v5 = (int32_t *)(v1 - 4); // 0x2beecd
    *v5 = *v5 + (int32_t)a3;
    return __asm_int3((int32_t)(v3 | v1));
}

// Address range: 0x2bef32 - 0x2bef4d
int64_t function_2bef32(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 + 1); // 0x2bef32
    unsigned char v2 = *v1; // 0x2bef32
    int64_t v3; // 0x2bef32
    unsigned char v4 = (char)(v3 / 256); // 0x2bef32
    char v5 = v2 + v4; // 0x2bef32
    char v6 = llvm_ctpop_i8(v5); // 0x2bef32
    *v1 = v5;
    uint32_t v7 = (int32_t)v3;
    bool v8; // 0x2bef32
    int64_t v9 = 0x4000 * (int64_t)v8 | 1024 * (int64_t)v8 | 512 * (int64_t)v8 | 256 * (int64_t)v8;
    bool v10 = v5 < 0; // 0x2bef32
    bool v11 = v5 == 0; // 0x2bef32
    bool v12 = ((v5 ^ v2) & (v5 ^ v4)) < 0; // 0x2bef32
    bool v13 = v2 % 16 + v4 % 16 > 15; // 0x2bef32
    char v14 = v6; // 0x2bef32
    bool v15 = v5 < v2; // 0x2bef32
    while (true) {
        int64_t v16 = unknown_602d403b(); // 0x2bef35
        int64_t v17; // 0x2bef32
        int64_t v18 = v17 - 8; // 0x2bef3a
        *(int64_t *)v18 = v9 | 128 * (int64_t)v10 | 64 * (int64_t)v11 | 2048 * (int64_t)v12 | 16 * (int64_t)v13 | (int64_t)v15 | 4 * (int64_t)(v14 % 2 == 0) | 2;
        unsigned char v19 = *(char *)-0x75e67ee; // 0x2bef3c
        unsigned char v20 = v19 + (char)v16; // 0x2bef3c
        *(char *)-0x75e67ee = v20;
        int32_t * v21 = (int32_t *)(((v16 + 202 + (int64_t)(v20 < v19)) % 256 | v16 & -256) - 93); // 0x2bef47
        uint32_t v22 = *v21; // 0x2bef47
        int32_t v23 = v22 + v7; // 0x2bef47
        v14 = llvm_ctpop_i8((char)v23);
        *v21 = v23;
        v10 = v23 < 0;
        v11 = v23 == 0;
        v12 = ((v23 ^ v22) & (v23 ^ v7)) < 0;
        v13 = v22 % 16 + v7 % 16 > 15;
        v17 = v18;
        v15 = v23 < v22;
    }
}

// Address range: 0x2befbd - 0x2befcc
int64_t function_2befbd(int64_t a1, int64_t a2) {
    // 0x2befbd
    int64_t v1; // 0x2befbd
    int64_t v2 = 0x100000000 * v1 >> 32; // 0x2befbd
    int64_t v3 = v2 * v2; // 0x2befbd
    *(int32_t *)a2 = (int32_t)v3 + (int32_t)v1;
    char * v4 = (char *)(v1 - 0x510aeaff); // 0x2befc1
    *v4 = *v4 + (char)v1;
    return v3 & 0xffffffff;
}

// Address range: 0x2befee - 0x2beff1
int64_t function_2befee(void) {
    // 0x2befee
    int64_t result; // 0x2befee
    return result;
}

// Address range: 0x2bf200 - 0x2bf284
int64_t function_2bf200(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t v2; // 0x2bf200
    uint64_t result = v2 & 0xffffffff ^ 0x1e8b86a; // 0x2bf200
    char v3 = result / 256; // 0x2bf205
    if (v3 < 0) {
        // 0x2bf20f
        *(int32_t *)0x6b864031 = *(int32_t *)0x6b864031 - 0x6301e8ea;
        return result;
    }
    // 0x2bf26c
    function_2bf1df();
    int64_t v4 = unknown_ffffffffd63a5a72(); // 0x2bf26c
    if ((v3 & 4) != 0) {
        // 0x2bf277
        __asm_iretd();
        int64_t v5 = unknown_16cab381(); // 0x2bf27b
        char v6 = __asm_in((int16_t)a5); // 0x2bf280
        int32_t * v7 = (int32_t *)(a5 - 35); // 0x2bf281
        int64_t v8; // 0x2bf200
        *v7 = *v7 ^ (int32_t)(int64_t)&v8;
        return v5 & -256 | (int64_t)v6;
    }
    char * v9 = (char *)(a4 + 0x1e85643); // 0x2bf257
    *v9 = *v9 + (char)v4;
    int32_t * v10 = (int32_t *)(a1 + 0x3a7a977a); // 0x2bf260
    int32_t v11 = *v10 | (int32_t)v2; // 0x2bf260
    unsigned char v12 = llvm_ctpop_i8((char)v11); // 0x2bf260
    *v10 = v11;
    return (int64_t)&v1 & -0xff08 | 0x4000 * (int64_t)(v11 == 0) | 0x8000 * (int64_t)(v11 < 0) | 1024 * (int64_t)(v12 % 2 == 0) | 512;
}

// Address range: 0x2bf400 - 0x2bf458
int64_t function_2bf400(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bf400
    unknown_58a2c006();
    int64_t v1; // 0x2bf400
    bool v2; // 0x2bf400
    if ((*(char *)(v1 + 100) || (char)v1) == 0) {
        int32_t * v3 = (int32_t *)a1; // 0x2bf40b
        *v3 = (int32_t)v1 + (int32_t)a1;
        *v3 = __asm_insd((int16_t)a3);
        return unknown_fffffffffcecc917((v2 ? -1 : 1) + a1);
    }
    int32_t * v4 = (int32_t *)(a3 + 119); // 0x2bf42e
    uint32_t v5 = *v4; // 0x2bf42e
    uint32_t v6 = v5 + (int32_t)v1; // 0x2bf42e
    *v4 = v6;
    __asm_hlt(a1, a2);
    if (a4 == 1 || v6 == 0) {
        // 0x2bf434
        *(char *)a1 = (char)a2;
        int64_t v7 = (v2 ? -1 : 1) + a1; // 0x2bf438
        uint32_t v8 = (int32_t)a2 - 0x1747cc55; // 0x2bf43f
        int32_t * v9 = (int32_t *)((int64_t)v8 - 75); // 0x2bf446
        *v9 = *v9 + (int32_t)v7;
        int64_t v10 = (char)v8 < 216 ? 0xb0e019e : 0xb0e019d; // 0x2bf450
        return unknown_ffffffffe4e97e51(v7, (v2 ? -4 : 4) + a2) + v10 & 0xffffffff;
    }
    int64_t v11 = __asm_int3((int32_t)a1); // 0x2bf421
    if (v6 < v5) {
        v11 = function_2bf3d0();
    }
    // 0x2bf423
    return v11 & -11;
}

// Address range: 0x2bf487 - 0x2bf488
int64_t function_2bf487(int64_t a1) {
    // 0x2bf487
    int64_t result; // 0x2bf487
    return result;
}

// Address range: 0x2bf506 - 0x2bf522
int64_t function_2bf506(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = 0x10000 * (int32_t)unknown_354a350c() >> 16; // 0x2bf50b
    int32_t * v2 = (int32_t *)((int64_t)v1 + 0x13d001a); // 0x2bf50c
    *v2 = *v2 | (int32_t)a4;
    return v1 + 0x2c44838d & -256 | (v1 + 150) % 256;
}

// Address range: 0x2bf548 - 0x2bf549
int64_t function_2bf548(void) {
    // 0x2bf548
    int64_t result; // 0x2bf548
    return result;
}

// Address range: 0x2bf561 - 0x2bf5a5
int64_t function_2bf561(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bf561
    int64_t v1; // 0x2bf561
    uint32_t v2 = (int32_t)v1 + (int32_t)a2; // 0x2bf561
    unsigned char v3 = llvm_ctpop_i8((char)v2); // 0x2bf561
    int64_t v4 = unknown_fffffffffb02d969(); // 0x2bf563
    if (v3 % 2 == 0) {
        // 0x2bf5a6
        return v4 & -0xff01 | (int64_t)&g1;
    }
    int64_t v5 = unknown_1f2ddd74(); // 0x2bf56e
    *(char *)a1 = __asm_insb((int16_t)a3);
    *(int64_t *)((int64_t)v2 - 16) = v5;
    unknown_ffffffffc836959b();
    return unknown_3abfc8a6();
}

// Address range: 0x2bf5a7 - 0x2bf5d4
int64_t function_2bf5a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)((a3 | 0xdb00) - 11); // 0x2bf5b0
    uint32_t v2 = *v1; // 0x2bf5b0
    *v1 = (int32_t)a4;
    int64_t v3; // 0x2bf5a7
    int32_t * v4 = (int32_t *)(8 * a2 - 0x9ec460d + v3); // 0x2bf5b5
    *v4 = *v4 - 0x17c18c25;
    unsigned char v5 = llvm_ctpop_i8((char)v3 - 4); // 0x2bf5bc
    int64_t v6 = unknown_ffffffff9fcd1fc7(); // 0x2bf5c6
    if (v5 % 2 == 0) {
        v6 = function_2bf548();
    }
    int64_t v7 = v6 + 0x8a01e848; // 0x2bf5c8
    int32_t * v8 = (int32_t *)(256 * (v3 | (int64_t)(v2 / 256)) & 0xff00 | (int64_t)(v2 & -0xff01)); // 0x2bf5cd
    *v8 = *v8 - (int32_t)v7;
    return v7 & 0xffffffff;
}

// Address range: 0x2bf5fd - 0x2bf60a
int64_t function_2bf5fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 123); // 0x2bf602
    *v1 = *v1 + (int32_t)a4;
    int64_t v2; // 0x2bf5fd
    *(int32_t *)a1 = *(int32_t *)&v2;
    bool v3; // 0x2bf5fd
    int64_t v4 = v3 ? -4 : 4; // 0x2bf605
    return function_2bf680(v4 + a1, v4 + a2, a3, a4);
}

// Address range: 0x2bf615 - 0x2bf616
int64_t function_2bf615(int64_t a1) {
    // 0x2bf615
    int64_t result; // 0x2bf615
    return result;
}

// Address range: 0x2bf63d - 0x2bf63e
int64_t function_2bf63d(void) {
    // 0x2bf63d
    int64_t result; // 0x2bf63d
    return result;
}

// Address range: 0x2bf646 - 0x2bf651
int64_t function_2bf646(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bf646
    int64_t v1; // 0x2bf646
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)((a4 & -256 | 232) - 0x48440839 + v1); // 0x2bf648
    *v3 = *v3 + (int32_t)v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x2bf651 - 0x2bf65d
int64_t function_2bf651(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2bf651
    int64_t v1; // 0x2bf651
    *(int32_t *)a3 = (int32_t)(v1 | v1);
    int64_t v2; // 0x2bf651
    *(char *)v2 = *(char *)&v2 + (char)a3;
    unknown_ffffffffb449385c();
    return function_2bf63d();
}

// Address range: 0x2bf666 - 0x2bf679
int64_t function_2bf666(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a3 - 0x585c53f1); // 0x2bf666
    int64_t v2; // 0x2bf666
    *v1 = *v1 + (int32_t)v2;
    return function_ffffffffab398872();
}

// Address range: 0x2bf680 - 0x2bf701
int64_t function_2bf680(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2bf680
    unknown_ffffffffeec33c89();
    int64_t v1 = 117; // bp-8, 0x2bf688
    __asm_in_133(-54);
    int64_t result2 = (int64_t)&v1; // bp-16, 0x2bf691
    unknown_72389998();
    int64_t v2 = __asm_hlt(a1, a2); // 0x2bf69d
    int64_t v3; // 0x2bf680
    if (*(char *)(v3 / 256 % 256 || a3) >= 0) {
        int64_t result = v2 & (a4 / 256 | -256); // 0x2bf6cd
        int32_t * v4 = (int32_t *)(result + 0xbe0fe10 + 4 * result); // 0x2bf6cf
        *v4 = *v4 + (int32_t)(int64_t)&result2;
        return result;
    }
    // 0x2bf6a0
    unknown_ffffffff8bc632a7();
    int64_t v5 = __asm_int1(); // 0x2bf6a6
    int64_t v6 = (((v5 & 26) + a4 / 256) % 256 | v5 & 0xd6558e00) + v3; // 0x2bf6b1
    unsigned char v7 = (char)v6 + 16; // 0x2bf6b3
    if (llvm_ctpop_i8(v7) % 2 == 0) {
        // 0x2bf700
        return result2;
    }
    int32_t * v8 = (int32_t *)(a1 - 60); // 0x2bf6b8
    *v8 = *v8 + (int32_t)(v6 & 0xffffff00 | (int64_t)v7);
    return function_ffffffffe3885b7a();
}

// Address range: 0x2bf703 - 0x2bf707
int64_t function_2bf703(int64_t a1) {
    // 0x2bf703
    int64_t result; // 0x2bf703
    return result;
}

// Address range: 0x2bf747 - 0x2bf75e
int64_t function_2bf747(void) {
    int64_t v1 = unknown_ffffffff90009051(); // 0x2bf747
    unsigned char v2 = *(char *)-0x3330ff2a89a94c5b; // 0x2bf74c
    __asm_out_134(64, (int32_t)(v1 & 0xffffff00 | (int64_t)v2));
    int64_t v3; // 0x2bf747
    return function_2bf7af(v3, v3, v3);
}

// Address range: 0x2bf76a - 0x2bf78c
int64_t function_2bf76a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2bf76a
    int64_t v1; // 0x2bf76a
    *(char *)-0x71146a8f = (char)(v1 / 256);
    *(char *)a1 = *(char *)-0x71146a8f + (char)v1;
    unknown_602f877e();
    int64_t result = unknown_3d2ddf89(); // 0x2bf783
    int32_t * v2 = (int32_t *)(a4 - 18); // 0x2bf788
    *v2 = *v2 + (int32_t)a3;
    return result;
}

// Address range: 0x2bf7af - 0x2bf7c7
int64_t function_2bf7af(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2bf7af
    return a3 & 0xffffff00 | (int64_t)*(char *)-0x6f0d8adafe17ce00;
}

// Address range: 0x467e34 - 0x467e40
int64_t function_467e34(int64_t a1) {
    // 0x467e34
    int64_t v1; // 0x467e34
    int32_t * v2 = (int32_t *)(v1 + a1); // 0x467e3d
    *v2 = *v2 & (int32_t)v1;
    return (int64_t)*(int32_t *)0x6121a14e904b4fd0;
}

// Address range: 0x467e43 - 0x467e44
int64_t function_467e43(void) {
    // 0x467e43
    int64_t result; // 0x467e43
    return result;
}

// Address range: 0x467e6c - 0x467e74
int64_t function_467e6c(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    // 0x467e6c
    return result;
}

// Address range: 0x467e7c - 0x467e7e
int64_t function_467e7c(int64_t a1) {
    // 0x467e7c
    int64_t result; // 0x467e7c
    return result;
}

// Address range: 0x467e93 - 0x467f34
int64_t function_467e93(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a2 + 113); // 0x467e93
    int64_t v2; // 0x467e93
    *v1 = *v1 & (char)v2;
    int64_t v3 = v2 + 0x95d2c371; // 0x467e9f
    int64_t v4 = v3; // 0x467ea4
    if (a4 != 0) {
        // 0x467ea6
        v4 = v3 - ((int32_t)v2 < 0x6a2d3c8f ? 0xf395837c : 0xf395837b);
    }
    char v5 = v4; // 0x467ead
    char v6 = *(char *)(v2 + 0x4033aa90); // 0x467ead
    char v7 = v5 - v6; // 0x467ead
    int64_t result = v4 & 0xffffffff; // 0x467eb5
    if (v7 >= 0) {
        result = function_467e43();
    }
    // 0x467eb7
    if (((v7 ^ v5) & (v6 ^ v5)) >= 0) {
        // 0x467ebe
        return result;
    }
    int64_t v8 = a4 & a2;
    *(char *)-0x7605bdba = 0;
    int32_t * v9 = (int32_t *)(result + 0x5e1f0fc4); // 0x467eff
    *v9 = *v9 & (int32_t)v8;
    float80_t v10; // 0x467e93
    *(int16_t *)((v8 & 0xffffffff) - 120 + v2) = (int16_t)v10;
    int32_t * v11 = (int32_t *)(a4 + 0x2c19ec36); // 0x467f09
    *v11 = *v11 | 81;
    return result;
}

// Address range: 0x467f39 - 0x467f3e
int64_t function_467f39(void) {
    // 0x467f39
    return function_4811aa1e();
}

// Address range: 0x467f47 - 0x467f6d
int64_t function_467f47(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x467f47
    int64_t v1; // 0x467f47
    bool v2; // 0x467f47
    *(char *)a1 = (char)v1 + 51 + (char)v2;
    char * v3 = (char *)(a4 + 0x2ea223f); // 0x467f64
    *v3 = *v3 + (char)v1;
    return (int64_t)*(int32_t *)0x50f2af3f83e3c81c;
}

// Address range: 0x467f6d - 0x467f86
int64_t function_467f6d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x467f6d
    int64_t v1; // 0x467f6d
    int64_t v2 = v1;
    char * v3 = (char *)(v1 + 4 * v1); // 0x467f76
    *v3 = *v3 - (char)v1;
    *(int32_t *)(v2 + 82) = (int32_t)v2;
    return function_3250fca8();
}

// Address range: 0x467fa7 - 0x467fa8
int64_t function_467fa7(void) {
    // 0x467fa7
    int64_t result; // 0x467fa7
    return result;
}

// Address range: 0x467fd3 - 0x4680a1
int64_t function_467fd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result = unknown_49c27cfc(); // 0x467fdc
    int64_t v1; // 0x467fd3
    int32_t * v2 = (int32_t *)(v1 - 0x736d89c3); // 0x467fe1
    int32_t v3 = *v2; // 0x467fe1
    int32_t v4 = (int32_t)a2 < 0x3dcfadbf ? -0x69c479d3 : -0x69c479d4; // 0x467fe1
    *v2 = v3 - v4;
    if (v3 > v4) {
        // 0x467fed
        return result;
    }
    int32_t * v5 = (int32_t *)(result - 0x17c22ce7); // 0x468063
    *v5 = *v5 - (int32_t)v1;
    return (int64_t)*(int32_t *)(v1 - 0x2a76d8db);
}

// Address range: 0x4680d4 - 0x4681a7
int64_t function_4680d4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4 - 1; // 0x4680dc
    int64_t result; // 0x4680d4
    if (v1 == 0) {
        char * v2 = (char *)(result - 79); // 0x4680de
        *v2 = 2 * *v2;
        return result;
    }
    unsigned char v3 = (char)a3; // 0x4680d6
    unsigned char v4 = *(char *)0x3349b020; // 0x4680d6
    if (((v3 - v4 ^ v3) & (v4 ^ v3)) >= 0) {
        // 0x468130
        return result;
    }
    int32_t * v5 = (int32_t *)(2 * result + v1); // 0x468199
    uint32_t v6 = *v5; // 0x468199
    uint32_t v7 = v6 + (int32_t)a2; // 0x468199
    uint32_t v8 = v7 + (int32_t)(v4 > v3); // 0x468199
    bool v9 = v4 > v3 ? v8 <= v6 : v7 < v6; // 0x468199
    *v5 = v8;
    char * v10 = (char *)(result - 113); // 0x46819c
    *v10 = *v10 + (char)(a3 / 256) + (char)v9;
    *(char *)(result - 0x627d8ff) = (char)v1;
    return result;
}

// Address range: 0x4681a8 - 0x4681b3
int64_t function_4681a8(void) {
    // 0x4681a8
    int64_t v1; // 0x4681a8
    return v1 & 0xffffffff;
}

// Address range: 0x4681b3 - 0x4681b4
int64_t function_4681b3(void) {
    // 0x4681b3
    int64_t result; // 0x4681b3
    return result;
}

// Address range: 0x4681c5 - 0x4681cb
int64_t function_4681c5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4681c5
    int64_t result; // 0x4681c5
    *(int32_t *)a1 = (int32_t)result;
    int64_t v1; // 0x4681c5
    __asm_outsb((int16_t)a3, *(char *)&v1);
    return result;
}

// Address range: 0x4681cb - 0x4681cc
int64_t function_4681cb(void) {
    // 0x4681cb
    int64_t result; // 0x4681cb
    return result;
}

// Address range: 0x4681e2 - 0x46820a
int64_t function_4681e2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4681e2
    int64_t v1; // 0x4681e2
    uint64_t v2 = v1;
    char v3 = v1 ^ v2; // 0x4681e2
    int64_t result = v1 ^ v2 % 256; // 0x4681e2
    if (v3 >= 0 != v3 != 0) {
        // 0x4681e6
        return result;
    }
    // 0x4681fe
    *(int32_t *)a3 = (int32_t)(v1 ^ a3);
    return result & -17;
}

// Address range: 0x468220 - 0x468221
int64_t function_468220(void) {
    // 0x468220
    int64_t result; // 0x468220
    return result;
}

// Address range: 0x468239 - 0x468240
int64_t function_468239(int64_t a1) {
    // 0x468239
    int64_t result; // 0x468239
    return result;
}

// Address range: 0x468247 - 0x468253
int64_t function_468247(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x468247
    bool v1; // 0x468247
    if (v1) {
        function_4681cb();
    }
    // 0x468249
    return function_70342767();
}

// Address range: 0x46826f - 0x468270
int64_t function_46826f(void) {
    // 0x46826f
    int64_t result; // 0x46826f
    return result;
}

// Address range: 0x46827d - 0x46827f
int64_t function_46827d(void) {
    // 0x46827d
    return function_46826f();
}

// Address range: 0x468294 - 0x468379
int64_t function_468294(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3 & -0xff01 | (int64_t)&g2; // 0x468294
    bool v2; // 0x468294
    int64_t v3 = (v2 ? -1 : 1) + a1; // 0x46829a
    int64_t v4; // bp-8, 0x468294
    int64_t v5 = v1 | (int64_t)&v4;
    int64_t result = unknown_4a27db98(v3); // 0x46829d
    if ((int32_t)v5 == 0) {
        // 0x4682ef
        return result;
    }
    // 0x4682a8
    int64_t result3; // 0x468294
    uint64_t v6 = result3 - 1; // 0x4682b1
    if (v6 != 0 != (result & 0x4000) != 0) {
        // 0x4682b3
        *(char *)0x244890f7 = *(char *)0x244890f7 + (char)(v6 / 256);
        char v7 = *(char *)(a2 - 0xafd9067); // 0x468327
        return result & -256 | (int64_t)(v7 & (char)result + 33);
    }
    int64_t v8 = v5 & 0xffffffff; // 0x46829b
    int16_t v9 = v1; // 0x4682fa
    *(int32_t *)v3 = __asm_insd(v9);
    int64_t v10 = (int64_t)*(int32_t *)result; // 0x4682fb
    char * v11 = (char *)(4 * v8 + result3); // 0x468301
    char v12 = *v11; // 0x468301
    *v11 = v12 + (char)result3 + (char)(0xf761ba3 * v10 != 0xf761ba300000000 * v10 >> 32);
    int64_t v13 = __asm_int1(); // 0x468305
    int3_t v14; // 0x468294
    float80_t v15 = __frontend_reg_load_fpr(v14); // 0x468306
    __frontend_reg_store_fpr(v14, (float80_t)*(int16_t *)(v8 + 89) - v15);
    if ((v13 & 0xca505c77) != 0) {
        uint32_t result2 = (int32_t)v13 & -0x2edcbde; // 0x468315
        if (llvm_ctpop_i8((char)result2) % 2 == 0) {
            // 0x46831c
            return result2;
        }
        // 0x46832f
        __asm_sti();
        return result3;
    }
    int32_t * v16 = (int32_t *)(result3 - 67 + v13); // 0x468362
    *v16 = *v16 | (int32_t)v1;
    int32_t v17 = v13; // 0x468366
    uint32_t v18 = v17 & -0x2de24395; // 0x468366
    int32_t v19 = v18 + 0x3259502b; // 0x46836b
    unsigned char v20 = llvm_ctpop_i8((char)v19); // 0x46836b
    int64_t v21 = __asm_in_135(-15) & -0xff01; // 0x468372
    int64_t v22 = 256 * (16 * (int64_t)((v17 & 11) > 4) | (int64_t)(v18 > 0xcda6afd4) | 128 * (int64_t)(v19 < 0) | 4 * (int64_t)(v20 % 2 == 0)) | v21 | 512; // 0x468372
    if (v18 <= 0xcda6afd4) {
        // 0x468377
        return v22 & -256 | (v21 + 42) % 256;
    }
    uint32_t v23 = (int32_t)v6 % 32;
    int64_t result4 = v22 & -256 | (int64_t)__asm_in(v9); // 0x468355
    int32_t * v24; // 0x468356
    uint32_t v25; // 0x468356
    if (v23 != 0) {
        v24 = (int32_t *)(result4 + 82);
        v25 = *v24;
        *v24 = v25 >> v23 | v25 << 32 - v23;
    }
    while (v19 < 0) {
        // 0x468355
        result4 = result4 & -256 | (int64_t)__asm_in(v9);
        if (v23 != 0) {
            v24 = (int32_t *)(result4 + 82);
            v25 = *v24;
            *v24 = v25 >> v23 | v25 << 32 - v23;
        }
    }
    // 0x4682ef
    return result4;
}

// Address range: 0x46837a - 0x46837f
int64_t function_46837a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x46837a
    int64_t v1; // 0x46837a
    int64_t v2 = v1;
    return v2 & -256 | (int64_t)(*(char *)(a3 - 46) | (char)v2);
}

// Address range: 0x4683af - 0x4683b6
int64_t function_4683af(void) {
    // 0x4683af
    int64_t v1; // 0x4683af
    return function_4683ba(v1, v1, v1);
}

// Address range: 0x4683b7 - 0x4683ba
int64_t function_4683b7(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x4683b7
    int64_t result; // 0x4683b7
    char * v1 = (char *)(result - 38); // 0x4683b7
    *v1 = *v1 + (char)(a3 / 256);
    return result;
}

// Address range: 0x4683ba - 0x4683bf
int64_t function_4683ba(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4683ba
    return __asm_in_136((int16_t)a3);
}

// Address range: 0x468404 - 0x468445
int64_t function_468404(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x468404
    int64_t v1; // 0x468404
    uint64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = v1 & 0xffffffff; // 0x468404
    int64_t v5 = a2; // bp-8, 0x468405
    *(char *)v4 = (char)(v1 ^ v2 / 256);
    uint32_t v6 = (int32_t)a4 % 32; // 0x468408
    if (v6 != 0) {
        int32_t * v7 = (int32_t *)(v2 + 39); // 0x468408
        uint32_t v8 = *v7; // 0x468408
        *v7 = v8 >> v6 | (int32_t)((int64_t)v8 << (int64_t)(33 - v6));
    }
    int64_t v9 = (int64_t)&v5; // 0x46840d
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)v9;
    __asm_outsb(0, *(char *)&v3);
    if (*(int32_t *)(a1 + 0x1ca80544 + 2 * v2) != (int32_t)v2) {
        int32_t v10 = *(int32_t *)(4 * a4 - 0x5417ddbc + v4); // 0x46841b
        return *(int64_t *)(int64_t)((int32_t)v1 - v10);
    }
    int64_t v11 = v5 ^ v9;
    *(int32_t *)-72 = *(int32_t *)-72 ^ (int32_t)a1;
    return (v11 + 87) % 256 | v11 & 0xffffff00;
}

// Address range: 0x468495 - 0x4684a1
int64_t function_468495(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x468495
    int64_t v1; // 0x468495
    uint64_t v2 = v1;
    char v3 = *(char *)(a4 - 19); // 0x468496
    bool v4; // 0x468495
    return (256 * (int64_t)(v3 + (char)(v2 / 256) + (char)v4) | v2 & 0xffff00ff) + 0x4ed0218c & 0xffffffff;
}

// Address range: 0x4684e3 - 0x4684e8
int64_t function_4684e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4684e3
    int64_t result; // 0x4684e3
    return result;
}

// Address range: 0x4684e8 - 0x4684fd
int64_t function_4684e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4684e8
    int64_t v1; // 0x4684e8
    int64_t v2 = v1;
    return (v2 + 187) % 256 | v2 & -256;
}

// Address range: 0x4684fd - 0x468507
int64_t function_4684fd(void) {
    // 0x4684fd
    int64_t result; // 0x4684fd
    return result;
}

// Address range: 0x468532 - 0x468533
int64_t function_468532(void) {
    // 0x468532
    int64_t result; // 0x468532
    return result;
}

// Address range: 0x468597 - 0x4685c8
int64_t function_468597(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = a4 - 1; // 0x468597
    int64_t v2; // 0x468597
    bool v3; // 0x468597
    if (v1 == 0 || v3) {
        // 0x46859a
        *(char *)a2 = (char)(v1 / 256 & a2);
        return 0x10000 * (int32_t)v2 >> 16;
    }
    char v4 = __asm_in((int16_t)a3); // 0x4685b4
    return ((v2 | (int64_t)v4) & -256 | (int64_t)(v4 + 108)) + 0x73a3b386;
}

// Address range: 0x4685e4 - 0x4685e5
int64_t function_4685e4(void) {
    // 0x4685e4
    int64_t result; // 0x4685e4
    return result;
}
