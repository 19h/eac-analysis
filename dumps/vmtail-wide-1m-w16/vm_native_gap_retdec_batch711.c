/*
 * Targeted RetDec C for native executable gap queue batch 711.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x36fd1b-0x36ff1b rank=- name=- kind=- bytes=- uncovered=-
 *   0x36ff1b-0x37011b rank=- name=- kind=- bytes=- uncovered=-
 *   0x37011b-0x37031b rank=- name=- kind=- bytes=- uncovered=-
 *   0x37031b-0x37051b rank=- name=- kind=- bytes=- uncovered=-
 *   0x37051b-0x37071b rank=- name=- kind=- bytes=- uncovered=-
 *   0x467834-0x467a34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x467a34-0x467b34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x467c34-0x467e34 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_12f3f235();
int64_t function_1740291();
int64_t function_21af2b2c();
int64_t function_21f8f78();
int64_t function_3101ed06();
int64_t function_3608b0f1();
int64_t function_36fd1b(void);
int64_t function_36fd8d(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_36fe0e(void);
int64_t function_36fe18(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_36fe4b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_36fea6(void);
int64_t function_36ff96(void);
int64_t function_36ffb5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37002e(int64_t a1);
int64_t function_370070(void);
int64_t function_370094(int64_t a1);
int64_t function_3700f0(void);
int64_t function_370112(int64_t a1);
int64_t function_370192(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3701bf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_370265(int64_t a1, int64_t a2);
int64_t function_3702bc(int64_t a1);
int64_t function_3702c5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3702d4(int64_t a1);
int64_t function_370354(void);
int64_t function_37035d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_370501(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37050e(void);
int64_t function_37053d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_370545(void);
int64_t function_37054e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3705b6(int64_t a1, int64_t a2);
int64_t function_3705c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3705f3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_370647(int64_t a1, int64_t a2, int64_t a3);
int64_t function_370659(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3706e7(void);
int64_t function_3706fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_467834(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_467952(void);
int64_t function_46798e(int64_t a1);
int64_t function_4679bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_4679e4(void);
int64_t function_4679e6(int64_t a1);
int64_t function_467a4c(int64_t a1, int64_t a2);
int64_t function_467a52(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_467a69(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7, int64_t a8);
int64_t function_467ad0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_467aec(void);
int64_t function_467af3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_467b02(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_467c34(int64_t a1, int64_t a2, int64_t a3);
int64_t function_467c41(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_467c7d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_467cb3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_467d5c(void);
int64_t function_467d62(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_467d78(void);
int64_t function_467d8c(void);
int64_t function_467daa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_467e01(int64_t a1);
int64_t function_467e1f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_670bf961();
int64_t function_ab0f266();
int64_t function_ffffffffab840578();
int64_t function_ffffffffb24c9294();
int64_t unknown_3513f5a2();
int64_t unknown_3c311ad2();
int64_t unknown_3d3711a5();
int64_t unknown_75d7b763();
int64_t unknown_7841a5fc();
int64_t unknown_796d398e();
int64_t unknown_93d3ac5();
int64_t unknown_ffffffff82ccde98();
int64_t unknown_ffffffff9471e22c();
int64_t unknown_ffffffffb6f649c3();
int64_t unknown_ffffffffca3a0e07();
int64_t unknown_ffffffffd1ce9b79();
int64_t unknown_ffffffffd7d672f6();
int64_t unknown_ffffffffe838427d();
int64_t unknown_fffffffff9b80192();

// Address range: 0x36fd1b - 0x36fd1c
int64_t function_36fd1b(void) {
    // 0x36fd1b
    int64_t result; // 0x36fd1b
    return result;
}

// Address range: 0x36fd8d - 0x36fdff
int64_t function_36fd8d(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6;
    uint32_t v2 = (int32_t)a2; // 0x36fdd2
    int64_t v3; // 0x36fd8d
    uint32_t v4 = (int32_t)v3; // 0x36fdd2
    int64_t v5 = v3 & -256 | a2 % 256; // 0x36fdd4
    bool v6; // 0x36fd8d
    __asm_frstor(*(int864_t *)(2 * ((v6 ? 0x7fffffffffffffff : 1) + a2) + a1));
    int64_t v7 = a4 - 1; // 0x36fdd8
    if (v7 == 0 || v2 == v4) {
        // 0x36fdda
        return v5 + (v2 < v4 ? 0x13d0001 : 0x13d0000) & 0xffffffff;
    }
    int64_t v8 = v5 + a3; // 0x36fdea
    unsigned char v9 = (char)v8; // 0x36fdec
    char v10 = v9 + 95; // 0x36fdec
    if (v10 == 0) {
        int64_t result = v8 & 0xffffff00 | (int64_t)v10; // 0x36fdec
        int64_t * v11 = (int64_t *)(result + 23); // 0x36fdcd
        *v11 = *v11 | v7;
        return result;
    }
    unsigned char v12 = llvm_ctpop_i8(v10); // 0x36fdec
    v1 = 256 * (int64_t)((a6 & 256) != 0) | 512 * (int64_t)((a6 & (int64_t)&g1) != 0) | 1024 * (int64_t)((a6 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((a6 & (int64_t)"le") != 0) | (int64_t)(v9 > 160) | 16 * (int64_t)(v9 % 16 != 0) | 128 * (int64_t)(v10 < 0) | 2048 * (int64_t)((v10 & (v9 ^ -128)) < 0) | 4 * (int64_t)(v12 % 2 == 0) | 2;
    __asm_out(-128, v10);
    return (int64_t)&v1;
}

// Address range: 0x36fe0e - 0x36fe0f
int64_t function_36fe0e(void) {
    // 0x36fe0e
    int64_t result; // 0x36fe0e
    return result;
}

// Address range: 0x36fe18 - 0x36fe26
int64_t function_36fe18(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x36fe18
    int64_t v1; // 0x36fe18
    int64_t result = v1 ^ a3 / 256 % 256; // 0x36fe1c
    char * v2 = (char *)result; // 0x36fe1e
    char v3 = *v2 + (char)a4; // 0x36fe1e
    *v2 = v3;
    if (v3 < 1) {
        // 0x36fe6b
        return result;
    }
    // 0x36fe24
    return function_36fe0e();
}

// Address range: 0x36fe4b - 0x36fe6b
int64_t function_36fe4b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x36fe4b
    int64_t v1; // 0x36fe4b
    int64_t v2 = v1;
    *(int32_t *)a3 = 2 * (int32_t)v1;
    *(int32_t *)(a4 + 0x70af3cff) = (int32_t)a3;
    int64_t v3 = ((v2 + a4 / 256) % 256 | v2 & 0xffffff00) + 0xe8db0d08; // 0x36fe55
    int32_t * v4 = (int32_t *)(a4 + 62); // 0x36fe5a
    *v4 = *v4 + (int32_t)v3;
    *(char *)-0x63c7193c = *(char *)-0x63c7193c + 38;
    *(int32_t *)a1 = __asm_insd((int16_t)a3 % 256 | -0x7400);
    return v3 & 0xffffffff;
}

// Address range: 0x36fea6 - 0x36fea8
int64_t function_36fea6(void) {
    // 0x36fea6
    int64_t result; // 0x36fea6
    return result;
}

// Address range: 0x36ff96 - 0x36ff9b
int64_t function_36ff96(void) {
    // 0x36ff96
    return function_ffffffffb24c9294();
}

// Address range: 0x36ffb5 - 0x370029
int64_t function_36ffb5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x400079e7); // 0x36ffb5
    int32_t v2 = *v1 + (int32_t)a2; // 0x36ffb5
    *v1 = v2;
    if (v2 < 0) {
        // 0x36fff9
        int64_t result; // 0x36ffb5
        return result;
    }
    // 0x36ffbd
    return function_21af2b2c();
}

// Address range: 0x37002e - 0x370030
int64_t function_37002e(int64_t a1) {
    // 0x37002e
    int64_t result; // 0x37002e
    return result;
}

// Address range: 0x370070 - 0x370073
int64_t function_370070(void) {
    // 0x370070
    int64_t result; // 0x370070
    return result;
}

// Address range: 0x370094 - 0x370097
int64_t function_370094(int64_t a1) {
    // 0x370094
    int64_t result; // 0x370094
    return result;
}

// Address range: 0x3700f0 - 0x3700f3
int64_t function_3700f0(void) {
    // 0x3700f0
    int64_t result; // 0x3700f0
    return result;
}

// Address range: 0x370112 - 0x370116
int64_t function_370112(int64_t a1) {
    // 0x370112
    int64_t result; // 0x370112
    return result;
}

// Address range: 0x370192 - 0x3701b2
int64_t function_370192(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x370192
    unknown_ffffffff82ccde98();
    *(int32_t *)0x21f026c = (int32_t)a4;
    char * v1 = (char *)(a2 - 99); // 0x3701a6
    int64_t v2; // 0x370192
    *v1 = *v1 + (char)((uint64_t)v2 / 256);
    *(int64_t *)0x3807572f = 0x38075737;
    bool v3; // 0x370192
    return function_21f8f78((v3 ? -4 : 4) + a1);
}

// Address range: 0x3701bf - 0x370241
int64_t function_3701bf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3701bf
    int64_t v1; // 0x3701bf
    uint64_t v2 = v1;
    int64_t v3 = unknown_93d3ac5(); // 0x3701bf
    unsigned char v4 = (char)v3; // 0x3701c4
    if (a4 != 1) {
        unsigned char v5 = v4 - 113; // 0x3701c4
        int64_t result = v3 & -256 | (int64_t)v5; // 0x3701c4
        if ((int32_t)v1 < 0 || v5 == 0) {
            int64_t v6 = 0x100000000 * result >> 32; // 0x3701f8
            return v6 * v6 & 0xffffffff;
        }
        // 0x3701e1
        return result;
    }
    // 0x3701ca
    __asm_in_133((int16_t)a3);
    int64_t v7 = unknown_3c311ad2(); // 0x3701cc
    *(char *)a1 = (char)(v7 | a1);
    *(int32_t *)a1 = (int32_t)v7;
    uint32_t v8 = (int32_t)a3;
    uint32_t v9 = (int32_t)(2 * v1 | (int64_t)(v4 < 113)) + v8; // 0x3701dc
    *(int32_t *)a3 = v9;
    bool v10; // 0x3701bf
    int64_t result2 = __asm_int1((v10 ? -4 : 4) + a1, a2, a3, a3); // 0x3701df
    if (v9 >= v8 && v9 != 0) {
        // 0x3701e1
        return result2;
    }
    int64_t v11 = unknown_ffffffff9471e22c(); // 0x370226
    uint32_t v12 = v8 % 32; // 0x37022b
    if (v12 != 0) {
        *(int32_t *)-0x17c715ce = *(int32_t *)-0x17c715ce >> v12;
    }
    int32_t * v13 = (int32_t *)(v11 + 46); // 0x370231
    uint32_t v14 = *v13; // 0x370231
    uint32_t v15 = (int32_t)(v1 + a3) + 8 + v14; // 0x370231
    *v13 = v15;
    char * v16 = (char *)(a3 - 41); // 0x37023b
    char v17 = -1 - (char)(v2 | a3 / 256) < (char)(v2 / 256) ? -112 : -113; // 0x37023b
    *v16 = v17 + *v16;
    return (v11 + v2 + (int64_t)(v15 < v14)) % 256 | v11 & -256;
}

// Address range: 0x370265 - 0x370270
int64_t function_370265(int64_t a1, int64_t a2) {
    // 0x370265
    return function_1740291();
}

// Address range: 0x3702bc - 0x3702bf
int64_t function_3702bc(int64_t a1) {
    // 0x3702bc
    int64_t result; // 0x3702bc
    return result;
}

// Address range: 0x3702c5 - 0x3702d4
int64_t function_3702c5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3702c5
    int64_t v1; // 0x3702c5
    uint64_t v2 = v1;
    char * v3 = (char *)(8 * a1 + 0x3d2b213a + v2);
    bool v4; // 0x3702c5
    *v3 = (char)v4 - (char)(v2 / 256) + *v3;
    int64_t result; // 0x3702c5
    int64_t v5 = result;
    *(int32_t *)v5 = *(int32_t *)&result + (int32_t)v5;
    return result;
}

// Address range: 0x3702d4 - 0x3702d5
int64_t function_3702d4(int64_t a1) {
    // 0x3702d4
    int64_t result; // 0x3702d4
    return result;
}

// Address range: 0x370354 - 0x370355
int64_t function_370354(void) {
    // 0x370354
    int64_t result; // 0x370354
    return result;
}

// Address range: 0x37035d - 0x3703ef
int64_t function_37035d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4;
    int64_t v2 = unknown_75d7b763(); // 0x37035d
    int64_t v3; // 0x37035d
    bool v4; // 0x37035d
    if (v4 || v4) {
        uint64_t v5 = v2 + 0xaafe1788; // 0x3703d4
        int64_t result = v5 & 0xffffff37; // 0x3703d9
        char * v6 = (char *)(result + 0x200a000); // 0x3703db
        char v7 = result; // 0x3703db
        *v6 = *v6 + v7;
        char * v8 = (char *)(v3 + 0x4d01e800); // 0x3703e1
        char v9 = v5 / 256; // 0x3703e1
        *v8 = *v8 + v9;
        __asm_out(-103, v7);
        *(char *)v1 = *(char *)&v1 + v9;
        return result;
    }
    int32_t * v10 = (int32_t *)((v2 + 0xe8ea301a & 0xffffffff) + 0x77db2803); // 0x370369
    *v10 = *v10 + (int32_t)a3;
    unknown_ffffffffd1ce9b79();
    *(char *)-0x16f27699 = *(char *)-0x16f27699 | (char)a5;
    int32_t * v11 = (int32_t *)(a3 + 21); // 0x37037f
    uint32_t v12 = *v11; // 0x37037f
    uint32_t v13 = v12 + (int32_t)v3; // 0x37037f
    *v11 = v13;
    int64_t v14 = __asm_int3(); // 0x370382
    unsigned char v15 = *(char *)v14; // 0x370383
    int64_t v16 = (v14 + 170 + (int64_t)(v13 < v12)) % 256 | v14 & -256; // 0x37038c
    if ((int32_t)a1 - 1 + (int32_t)(v3 & 0xffffff00 || (int64_t)v15) < 0) {
        v16 = function_370354();
    }
    int64_t v17 = v16;
    char * v18 = (char *)(v3 + 0x47f17af); // 0x370395
    *v18 = *v18 ^ v15;
    return (v17 - v1 / 256) % 256 | v17 & -256;
}

// Address range: 0x370501 - 0x370506
int64_t function_370501(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x370501
    int64_t v1; // 0x370501
    int64_t v2 = v1;
    return (v2 + 14) % 256 | v2 & -256;
}

// Address range: 0x37050e - 0x37050f
int64_t function_37050e(void) {
    // 0x37050e
    int64_t result; // 0x37050e
    return result;
}

// Address range: 0x37053d - 0x370544
int64_t function_37053d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x37053d
    return function_ffffffffab840578();
}

// Address range: 0x370545 - 0x37054e
int64_t function_370545(void) {
    // 0x370545
    int64_t v1; // 0x370545
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + 1;
    return __asm_hlt(v1, v1);
}

// Address range: 0x37054e - 0x3705b6
int64_t function_37054e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x37054e
    int64_t v1; // 0x37054e
    uint32_t v2 = (int32_t)v1; // 0x370551
    if (*(int32_t *)(v1 + 0xf5f0013) <= v2) {
        function_37050e();
    }
    int64_t v3 = unknown_3d3711a5(); // 0x37055b
    int32_t * v4 = (int32_t *)(8 * a1 + 40 + v1); // 0x370560
    uint32_t v5 = *v4; // 0x370560
    uint32_t v6 = v5 + v2; // 0x370560
    *v4 = v6;
    char * v7 = (char *)(v1 - 0x179ee900); // 0x370567
    char v8 = a3 / 256; // 0x370567
    *v7 = *v7 + v8 + (char)(v6 < v5);
    uint32_t v9 = (int32_t)v3 & -0xff01 | (int32_t)&g2; // 0x37056d
    uint32_t v10 = 2 * v9; // 0x37056d
    if (v10 < v9 || v10 == 0) {
        char * v11 = (char *)(a3 + 37); // 0x370574
        *v11 = *v11 | v8;
        int64_t result = unknown_ffffffffe838427d(); // 0x370577
        int32_t * v12 = (int32_t *)(a3 + 0x4d10f3e1); // 0x37057c
        *v12 = *v12 + v2;
        return result;
    }
    // 0x370587
    bool v13; // 0x37054e
    int64_t v14 = v13 ? -4 : 4; // 0x370587
    char * v15 = (char *)(unknown_796d398e(v14 + a1, v14 + a2) + 0x1e83a1c); // 0x37058d
    *v15 = *v15 + (char)a3;
    int64_t result2 = unknown_3513f5a2(); // 0x37059b
    int32_t * v16 = (int32_t *)(v1 + 0x7500b43d); // 0x3705aa
    *v16 = *v16 + (int32_t)a4;
    return result2;
}

// Address range: 0x3705b6 - 0x3705c4
int64_t function_3705b6(int64_t a1, int64_t a2) {
    uint64_t v1 = __asm_hlt(a1, a2); // 0x3705b6
    char * v2 = (char *)(a2 + 0x2c058007); // 0x3705b7
    *v2 = *v2 + (char)(v1 / 256);
    return unknown_ffffffffb6f649c3();
}

// Address range: 0x3705c5 - 0x3705dd
int64_t function_3705c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3705c5
    int64_t v1; // 0x3705c5
    int64_t v2 = v1 & -101; // 0x3705c5
    *(char *)v2 = (char)a4;
    int32_t * v3 = (int32_t *)(a3 + 0x4998540b); // 0x3705d6
    *v3 = *v3 + (int32_t)v1;
    return v2 + 0xe86e5e8e & 0xffffffbf;
}

// Address range: 0x3705f3 - 0x370614
int64_t function_3705f3(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = unknown_7841a5fc(); // 0x3705f6
    int64_t v2; // 0x3705f3
    *(char *)a3 = (char)(v1 / 256 ^ v2);
    char * v3 = (char *)v1; // 0x3705fd
    *v3 = *v3 - (char)v1;
    unknown_ffffffffca3a0e07();
    return function_ab0f266();
}

// Address range: 0x370647 - 0x370654
int64_t function_370647(int64_t a1, int64_t a2, int64_t a3) {
    // 0x370647
    int64_t result; // 0x370647
    *(int32_t *)0x1e83a0be703af8e = (int32_t)result;
    return result;
}

// Address range: 0x370659 - 0x370671
int64_t function_370659(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x370659
    int64_t v2 = a3; // 0x370659
    if (v1 != 0) {
        v2 = a3 & -256 | (int64_t)((char)a3 << v1);
    }
    int32_t * v3 = (int32_t *)(v2 - 0x5611345e); // 0x370660
    int64_t result; // 0x370659
    *v3 = *v3 + (int32_t)result;
    return result;
}

// Address range: 0x3706e7 - 0x3706e8
int64_t function_3706e7(void) {
    // 0x3706e7
    int64_t result; // 0x3706e7
    return result;
}

// Address range: 0x3706fc - 0x370700
int64_t function_3706fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x3706fc
    if (v1 != 0) {
        int64_t v2; // 0x3706fc
        uint32_t v3 = (int32_t)v2;
        *(int32_t *)v2 = v3 >> 32 - v1 | v3 << v1;
    }
    return function_3706e7();
}

// Address range: 0x467834 - 0x46793e
int64_t function_467834(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x467834
    int64_t v1; // 0x467834
    uint64_t v2 = v1;
    int64_t v3 = v2 & 0xffffffff; // 0x467834
    int64_t result3 = a3 & 0xffffffff; // 0x467834
    char v4 = a3; // 0x467836
    int64_t v5; // 0x467834
    if (llvm_ctpop_i8(v4 & 54) % 2 != 0) {
        // 0x46783a
        *(char *)result3 = (char)(v2 & a4 / 256);
        uint64_t v6 = (v2 / 256 % 256 | a3 & 0xffffff00) + 0x15336d5d; // 0x46783e
        *(char *)(a4 + 0x394a1fad) = (char)a4;
        *(int32_t *)v5 = -1 - *(int32_t *)&v5;
        if (*(char *)(v3 + 119) - (char)(v6 / 256) < 0) {
            // 0x4678cd
            return v6 & 0xffffffff;
        }
        // 0x467852
        return unknown_fffffffff9b80192() | 63;
    }
    int64_t v7 = a4; // bp-8, 0x46789a
    if (a4 != 0) {
        // 0x46789f
        v7 = a4;
        char * v8 = (char *)(a4 - 121); // 0x4678a6
        *v8 = *v8 | (char)(a4 / 256);
        int64_t result = result3 ^ 0xc4ce5104; // 0x4678ad
        uint32_t v9 = (int32_t)result;
        uint32_t v10 = -0x3c3ae170 - v9; // 0x4678b6
        if (v9 > 0xc3c51e90 || v10 == 0) {
            // 0x467939
            return function_3101ed06();
        }
        // 0x4678ba
        if (v9 < 0xc3c51e90) {
            // 0x4678e0
            return result;
        }
        int32_t result2 = __asm_in((int16_t)v2); // 0x4678bc
        *(int64_t *)((int64_t)v10 - 8) = *(int64_t *)0xc3c51e88;
        return result2;
    }
    int64_t v11 = (int64_t)&v7 - 8; // 0x467903
    *(int64_t *)v11 = -39;
    if (v4 != 0) {
        // 0x4678e0
        return result3;
    }
    // 0x4678d1
    bool v12; // 0x467834
    int64_t v13 = v12 ? -1 : 1;
    int64_t v14 = -1;
    int64_t v15 = v3;
    int64_t v16 = result3; // 0x4678d1
    int64_t v17 = v15; // 0x4678d1
    int64_t v18 = a1; // 0x4678d1
    int32_t * v19; // 0x4678d6
    char v20; // 0x4678f1
    int64_t v21 = v17;
    int64_t v22 = v16;
    char * v23 = (char *)(4 * a2 - 75 + v11); // 0x4678f7
    *v23 = *v23 & (char)v22;
    unsigned char v24 = *(char *)a2; // 0x467901
    unsigned char v25 = *(char *)v18; // 0x467901
    char v26 = v24 - v25; // 0x467901
    int64_t v27 = v11 - 8; // 0x467902
    *(int64_t *)v27 = v21;
    int64_t v28 = v11 - 16; // 0x467903
    *(int64_t *)v28 = -39;
    int64_t v29 = v14 - 1; // 0x467905
    int64_t v30 = a2 + v13; // 0x467905
    int64_t result4 = v22; // 0x467905
    while (v29 != 0 == v26 == 0) {
        int64_t v31 = v30;
        int64_t v32 = v18 + v13;
        v14 = v29;
        v15 = v21;
        int64_t v33 = v22;
        v16 = v33;
        v17 = v15;
        int64_t v34 = v28; // 0x4678d1
        v18 = v32;
        if (v26 != 0 && v26 < 0 == ((v26 ^ v24) & (v25 ^ v24)) < 0) {
            // 0x4678d5
            v34 = v27;
            v5 = -39;
            v19 = (int32_t *)(v32 - 52);
            *v19 = (int32_t)(v24 < v25) + (int32_t)v14 + *v19;
            *(char *)v32 = (char)v33;
            result4 = v33;
            if (*(char *)(v31 + 36) <= 217) {
                // break -> 0x4678e0
                break;
            }
            // 0x467931
            v20 = *(char *)((v33 & 0xffffffff) - 0x5a59bbe8);
            v16 = v5 & 0xffffffff;
            v17 = v15 & -0x10000 | 256 * (int64_t)(v20 & (char)(v15 / 256)) | 229;
            v18 = v32 + v13;
        }
        // 0x4678f7
        v21 = v17;
        v22 = v16;
        v23 = (char *)(4 * v31 - 75 + v34);
        *v23 = *v23 & (char)v22;
        v24 = *(char *)v31;
        v25 = *(char *)v18;
        v26 = v24 - v25;
        v27 = v34 - 8;
        *(int64_t *)v27 = v21;
        v28 = v34 - 16;
        *(int64_t *)v28 = -39;
        v29 = v14 - 1;
        v30 = v31 + v13;
        result4 = v22;
    }
    // 0x4678e0
    return result4;
}

// Address range: 0x467952 - 0x46795e
int64_t function_467952(void) {
    // 0x467952
    int64_t v1; // 0x467952
    return v1 & -0x31852ba7;
}

// Address range: 0x46798e - 0x467995
int64_t function_46798e(int64_t a1) {
    // 0x46798e
    return unknown_ffffffffd7d672f6(a1);
}

// Address range: 0x4679bd - 0x4679cf
int64_t function_4679bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x4679bd
    int64_t v1; // 0x4679bd
    int64_t result = v1 & -0xff01 | (int64_t)&g4; // 0x4679bd
    int64_t * v2 = (int64_t *)(a6 + 3); // 0x4679bf
    uint64_t v3 = *v2; // 0x4679bf
    *v2 = v3 / 32 | 0x800000000000000 * v3;
    *(int32_t *)(result + 101) = (int32_t)a1;
    return result;
}

// Address range: 0x4679e4 - 0x4679e6
int64_t function_4679e4(void) {
    // 0x4679e4
    int64_t v1; // 0x4679e4
    return function_467a52(v1, v1, v1, v1, (int64_t)&g5);
}

// Address range: 0x4679e6 - 0x4679fb
int64_t function_4679e6(int64_t a1) {
    // 0x4679e6
    int64_t v1; // 0x4679e6
    uint32_t result = (int32_t)v1 - *(int32_t *)(v1 + 0xffffffc7 & 0xffffffff); // 0x4679e6
    *(char *)0x73beed00 = *(char *)0x73beed00 >> 1;
    char * v2 = (char *)(a1 + 26); // 0x4679f4
    *v2 = *v2 | (char)(result / 256);
    return result;
}

// Address range: 0x467a4c - 0x467a4d
int64_t function_467a4c(int64_t a1, int64_t a2) {
    // 0x467a4c
    int64_t result; // 0x467a4c
    return result;
}

// Address range: 0x467a52 - 0x467a58
int64_t function_467a52(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x467a52
    int64_t result; // 0x467a52
    *(int32_t *)a2 = (int32_t)(result ^ a4);
    return result;
}

// Address range: 0x467a69 - 0x467ace
int64_t function_467a69(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7, int64_t a8) {
    // 0x467a69
    bool v1; // 0x467a69
    if (!v1) {
        function_467a4c(a1, a2);
    }
    uint32_t v2 = *(int32_t *)0x765f6c4b0ce5e836; // 0x467a6e
    int64_t result = v2; // 0x467a77
    if (a6 == 0) {
        // 0x467a9f
        return result;
    }
    unsigned char v3 = *(char *)(result % 256 + a5); // 0x467a7c
    char v4 = v3 + 9; // 0x467a7d
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x467a7d
    int64_t result2 = result & 0xffffff00 | (int64_t)v4; // 0x467a7d
    char v6 = a6; // 0x467a80
    *(char *)(a3 + 0x2e81ad9) = v6;
    if (v5 % 2 == 0) {
        char v7 = *(char *)(a5 - 109) & v6; // 0x467a8a
        if (a6 != 1 && v7 != 0) {
            // 0x467ab4
            return result2 & 0xffff00ff | 0x8000 * (int64_t)(v7 < 0) | 1024 * (int64_t)(llvm_ctpop_i8(v7) % 2 == 0) | 512;
        }
        // 0x467a8f
        *(int32_t *)a1 = __asm_insd((int16_t)a3);
        char * v8 = (char *)a8; // 0x467a9c
        unsigned char v9 = *v8 + (char)(a7 / 256); // 0x467a9c
        *v8 = v9;
        // 0x467a9f
        return (int64_t)v9 | (int64_t)(0x10000 * v2 / 0x10000 & -256);
    }
    // 0x467aa8
    if (v4 < 0 || v3 >= 247 && v4 != 0) {
        // 0x467a9f
        return result2;
    }
    char * v10 = (char *)(result2 - 90); // 0x467abb
    *v10 = (char)(v3 < 247) + (char)a5 + *v10;
    int32_t * v11 = (int32_t *)a6; // 0x467abf
    *v11 = *v11 | (int32_t)a7;
    *(int32_t *)a5 = (int32_t)a6;
    char * v12 = (char *)(a8 - 0x1a95f0c6); // 0x467ac8
    *v12 = *v12 + (char)(a3 / 256);
    return a7 & 0xffffffff;
}

// Address range: 0x467ad0 - 0x467ae1
int64_t function_467ad0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x467ad0
    int64_t v1; // 0x467ad0
    int64_t v2 = v1 & 0xffffffff ^ 0xcd1cf17f; // 0x467ad2
    char v3 = *(char *)(a1 - 0x20851bf3); // 0x467ad7
    return v2 & 0xffffff00 | (int64_t)(v3 & (char)v2);
}

// Address range: 0x467aec - 0x467aef
int64_t function_467aec(void) {
    // 0x467aec
    int64_t result; // 0x467aec
    return result;
}

// Address range: 0x467af3 - 0x467af9
int64_t function_467af3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x467af3
    int64_t v1; // 0x467af3
    bool v2; // 0x467af3
    return v1 + a3 + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x467b02 - 0x467b10
int64_t function_467b02(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x467b02
    int64_t result; // 0x467b02
    *(int32_t *)a4 = (int32_t)(result | a1);
    return result;
}

// Address range: 0x467c34 - 0x467c3f
int64_t function_467c34(int64_t a1, int64_t a2, int64_t a3) {
    // 0x467c34
    int64_t result; // 0x467c34
    return result;
}

// Address range: 0x467c41 - 0x467c7c
int64_t function_467c41(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x467c41
    int64_t result; // 0x467c41
    return result;
}

// Address range: 0x467c7d - 0x467c8b
int64_t function_467c7d(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 94); // 0x467c82
    *v1 = *v1 - (int32_t)a2;
    return function_3608b0f1();
}

// Address range: 0x467cb3 - 0x467ce0
int64_t function_467cb3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char v1 = *(char *)(a2 + 0x147afef1); // 0x467cb3
    bool v2; // 0x467cb3
    int64_t v3 = v2 ? -1 : 1; // 0x467cb9
    int64_t v4; // 0x467cb3
    int32_t v5 = (char)v4 < (char)v4 ? -0x61330ade : -0x61330adf; // 0x467cba
    int64_t v6 = __asm_int1(v3 + a1, v3 + a2, (int64_t)((int32_t)v4 - v5 >> 31), 256 * (int64_t)((char)(a4 / 256) - v1) | a4 & -0xff01); // 0x467cd1
    return (v6 + 255) % 256 | v6 & -256;
}

// Address range: 0x467d5c - 0x467d5e
int64_t function_467d5c(void) {
    // 0x467d5c
    int64_t result; // 0x467d5c
    return result;
}

// Address range: 0x467d62 - 0x467d72
int64_t function_467d62(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x467d62
    int64_t v1; // 0x467d62
    int64_t v2 = v1 & 0x35ef548; // 0x467d62
    uint32_t v3 = (int32_t)a4 % 32; // 0x467d6d
    return v3 == 0 ? v2 : (int64_t)((int32_t)v2 << v3);
}

// Address range: 0x467d78 - 0x467d7a
int64_t function_467d78(void) {
    // 0x467d78
    int64_t result; // 0x467d78
    return result;
}

// Address range: 0x467d8c - 0x467d92
int64_t function_467d8c(void) {
    // 0x467d8c
    int64_t result; // 0x467d8c
    return result;
}

// Address range: 0x467daa - 0x467dff
int64_t function_467daa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x467daa
    int64_t v1; // 0x467daa
    uint64_t v2 = v1;
    int64_t v3 = a4 - 1; // 0x467dac
    if (v3 == 0 || (char)v1 == (char)(v2 / 256)) {
        int32_t * v4 = (int32_t *)(a2 - 78); // 0x467dae
        *v4 = *v4 & (int32_t)v3;
        return function_12f3f235();
    }
    int64_t v5 = v1 ^ v2;
    *(int32_t *)a1 = (int32_t)v5;
    return v5 & 0xffffffff;
}

// Address range: 0x467e01 - 0x467e0d
int64_t function_467e01(int64_t a1) {
    // 0x467e01
    int64_t v1; // 0x467e01
    __asm_punpckldq(v1, (int32_t)v1);
    return __asm_iretd();
}

// Address range: 0x467e1f - 0x467e27
int64_t function_467e1f(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 + 126); // 0x467e1f
    int64_t v2; // 0x467e1f
    *v1 = *v1 & (char)((uint64_t)v2 / 256);
    return function_670bf961();
}
