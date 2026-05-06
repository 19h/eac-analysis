/*
 * Targeted RetDec C for native executable gap queue batch 297.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x14a713-0x14a913 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14a913-0x14ab13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14ab13-0x14ad13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14ad13-0x14af13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14af13-0x14b113 rank=- name=- kind=- bytes=- uncovered=-
 *   0x436c67-0x436e67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x436e67-0x437067 rank=- name=- kind=- bytes=- uncovered=-
 *   0x437067-0x437267 rank=- name=- kind=- bytes=- uncovered=-
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
void __asm_out_139(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint32_t __readfsdword(int64_t offset);
uint64_t __readfsqword(int64_t offset);
uint8_t __readgsbyte(int64_t offset);
uint32_t __readgsdword(int64_t offset);
uint64_t __readgsqword(int64_t offset);
void __writegsbyte(int64_t offset, uint8_t value);
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
void unknown_b6ccb9(void);
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
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
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
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
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

int64_t function_14a712();
int64_t function_14a713(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, char a5);
int64_t function_14a763(int64_t a1);
int64_t function_14a774(void);
int64_t function_14a77f(void);
int64_t function_14a89e(int64_t a1);
int64_t function_14a8fe(void);
int64_t function_14a92e(void);
int64_t function_14a931(void);
int64_t function_14a94a(int64_t a1);
int64_t function_14a94d(void);
int64_t function_14a95c(void);
int64_t function_14a97f(int64_t a1);
int64_t function_14a98b(void);
int64_t function_14a99e(void);
int64_t function_14a9bd(void);
int64_t function_14a9d9(int64_t a1);
int64_t function_14a9e1(int64_t a1);
int64_t function_14a9f0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_14aaf4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14ab06(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14ab41(int64_t a1);
int64_t function_14ab44(void);
int64_t function_14aba0(int64_t a1);
int64_t function_14abb6(int64_t a1);
int64_t function_14abe7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14ac18(void);
int64_t function_14ac54(void);
int64_t function_14ac5d(void);
int64_t function_14ad12(void);
int64_t function_14adcf(int64_t a1);
int64_t function_14ae2f(void);
int64_t function_14ae4d(void);
int64_t function_14ae55(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14af29(void);
int64_t function_14af2d(void);
int64_t function_14af47(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14af9f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_14b014(void);
int64_t function_14b039(void);
int64_t function_14b070(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14b07b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14b090(int64_t a1, int64_t a2);
int64_t function_14b0a4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14b0c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2328df4f();
int64_t function_2762d9bc();
int64_t function_436c67(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_436c82(int64_t a1);
int64_t function_436c85(int64_t a1);
int64_t function_436cad(int64_t a1);
int64_t function_436cb5(void);
int64_t function_436ccc(void);
int64_t function_436cdd(int64_t a1);
int64_t function_436d18(int64_t a1, int64_t a2);
int64_t function_436e1a(void);
int64_t function_436e25(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_436f04(void);
int64_t function_436f3d(int64_t a1);
int64_t function_436f67(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_436f73(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_436f7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_436f8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_436fb8(int64_t a1);
int64_t function_437095(void);
int64_t function_4370b9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4370d4(int64_t a1);
int64_t function_4370f0(void);
int64_t function_437104(void);
int64_t function_43717c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4371d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4371e8(int64_t a1);
int64_t function_437214(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4b169822();
int64_t function_9217ad4();
int64_t function_b23fde();
int64_t function_ffffffff8021d098();
int64_t function_ffffffff9046e172();
int64_t function_ffffffffea9ded93();
int64_t unknown_151ae5b();
int64_t unknown_3259d004();
int64_t unknown_4397017f();
int64_t unknown_5a241a8e();
int64_t unknown_622ff20c();

// Address range: 0x14a713 - 0x14a747
int64_t function_14a713(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, char a5) {
    unsigned char v1 = *(char *)0x7506991a; // 0x14a713
    int64_t result; // 0x14a713
    unsigned char v2 = v1 + (char)((uint64_t)result / 256); // 0x14a713
    *(char *)0x7506991a = v2;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v3; // 0x14a713
    char v4 = *(char *)&v3; // 0x14a71a
    *(char *)v3 = (char)(v2 < v1) + (char)a3 + v4;
    char * v5 = (char *)(result + 0x2538ed58); // 0x14a71c
    unsigned char v6 = *v5; // 0x14a71c
    *v5 = v6 + 63;
    char * v7 = (char *)(a2 + 0x1009f89f); // 0x14a723
    *v7 = *v7 + (char)a4 + (char)(v6 < 193);
    uint32_t v8 = (int32_t)result; // 0x14a729
    if (a4 != 1 == v8 == 0x2b7e01) {
        // 0x14a752
        return result;
    }
    bool v9 = v8 < 0x2b7e01; // 0x14a730
    bool v10 = false; // 0x14a730
    if (a4 == 2 || v8 == 0x2b7e01) {
        unsigned char v11 = (char)result; // 0x14a732
        int64_t v12; // 0x14a713
        unsigned char v13 = *(char *)&v12; // 0x14a732
        v9 = v13 > v11;
        v10 = v13 == v11;
    }
    // 0x14a734
    int64_t v14; // 0x14a713
    if (!v9 && !v10) {
        v14 = function_14a712();
    }
    // 0x14a736
    *(int64_t *)((v14 + 0x340a51d4 & 0xffffffff) - 8) = 256 * (int64_t)((char)(a3 / 256) - a5) | a3 & -0xff01;
    int64_t v15; // 0x14a713
    return (int64_t)&v15;
}

// Address range: 0x14a763 - 0x14a764
int64_t function_14a763(int64_t a1) {
    // 0x14a763
    int64_t result; // 0x14a763
    return result;
}

// Address range: 0x14a774 - 0x14a77d
int64_t function_14a774(void) {
    // 0x14a774
    int64_t result; // 0x14a774
    *(int32_t *)-0x5c50697b = *(int32_t *)-0x5c50697b + (int32_t)result;
    return result;
}

// Address range: 0x14a77f - 0x14a782
int64_t function_14a77f(void) {
    // 0x14a77f
    int64_t result; // 0x14a77f
    return result;
}

// Address range: 0x14a89e - 0x14a89f
int64_t function_14a89e(int64_t a1) {
    // 0x14a89e
    int64_t result; // 0x14a89e
    return result;
}

// Address range: 0x14a8fe - 0x14a90f
int64_t function_14a8fe(void) {
    // 0x14a8fe
    int64_t v1; // 0x14a8fe
    return unknown_3259d004() + v1 & 0xffffffff;
}

// Address range: 0x14a92e - 0x14a931
int64_t function_14a92e(void) {
    // 0x14a92e
    int64_t result; // 0x14a92e
    return result;
}

// Address range: 0x14a931 - 0x14a932
int64_t function_14a931(void) {
    // 0x14a931
    int64_t result; // 0x14a931
    return result;
}

// Address range: 0x14a94a - 0x14a94b
int64_t function_14a94a(int64_t a1) {
    // 0x14a94a
    int64_t result; // 0x14a94a
    return result;
}

// Address range: 0x14a94d - 0x14a94e
int64_t function_14a94d(void) {
    // 0x14a94d
    int64_t result; // 0x14a94d
    return result;
}

// Address range: 0x14a95c - 0x14a95e
int64_t function_14a95c(void) {
    // 0x14a95c
    int64_t result; // 0x14a95c
    return result;
}

// Address range: 0x14a97f - 0x14a980
int64_t function_14a97f(int64_t a1) {
    // 0x14a97f
    int64_t result; // 0x14a97f
    return result;
}

// Address range: 0x14a98b - 0x14a98d
int64_t function_14a98b(void) {
    // 0x14a98b
    return function_14a931();
}

// Address range: 0x14a99e - 0x14a99f
int64_t function_14a99e(void) {
    // 0x14a99e
    int64_t result; // 0x14a99e
    return result;
}

// Address range: 0x14a9bd - 0x14a9be
int64_t function_14a9bd(void) {
    // 0x14a9bd
    int64_t result; // 0x14a9bd
    return result;
}

// Address range: 0x14a9d9 - 0x14a9e1
int64_t function_14a9d9(int64_t a1) {
    // 0x14a9d9
    int64_t v1; // 0x14a9d9
    int64_t v2 = v1;
    int64_t v3; // 0x14a9d9
    return (v2 - v3) % 256 | v2 & -256;
}

// Address range: 0x14a9e1 - 0x14a9e5
int64_t function_14a9e1(int64_t a1) {
    // 0x14a9e1
    int64_t result; // 0x14a9e1
    char * v1 = (char *)(result - 19); // 0x14a9e1
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x14a9f0 - 0x14aa26
int64_t function_14a9f0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x14a9f0
    int64_t v1; // 0x14a9f0
    int64_t v2 = v1;
    char v3 = *(char *)(v1 - 0x4afffe18); // 0x14a9f5
    *(int32_t *)a1 = (int32_t)(v2 & 0xffffff00 | (int64_t)((char)v2 - v3));
    if ((uint64_t)v1 <= a3) {
        function_14a9bd();
    }
    // 0x14aa01
    __asm_outsb((int16_t)a3, *(char *)a4);
    uint64_t v4 = unknown_622ff20c(); // 0x14aa06
    unsigned char v5 = *(char *)(v4 % 256 + v1); // 0x14aa0b
    int64_t v6 = v4 & -256 | (int64_t)v5; // 0x14aa0b
    bool v7; // 0x14a9f0
    int32_t * v8 = (int32_t *)((v7 ? -4 : 4) + a1); // 0x14aa12
    *v8 = *v8 | (int32_t)v1 - *(int32_t *)(v1 + 29);
    *(char *)-0x6a7566c5f55cfe18 = v5;
    char v9 = *(char *)(v6 - 0xd6366c9); // 0x14aa1d
    return 256 * (int64_t)((char)(v4 / 256) - v9) | v6 & -0xff01;
}

// Address range: 0x14aaf4 - 0x14aaf8
int64_t function_14aaf4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x14aaf4
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x14aaf4
    return result;
}

// Address range: 0x14ab06 - 0x14ab18
int64_t function_14ab06(int64_t a1, int64_t a2, int64_t a3) {
    // 0x14ab06
    return __asm_hlt();
}

// Address range: 0x14ab41 - 0x14ab44
int64_t function_14ab41(int64_t a1) {
    // 0x14ab41
    int64_t result; // 0x14ab41
    return result;
}

// Address range: 0x14ab44 - 0x14ab49
int64_t function_14ab44(void) {
    // 0x14ab44
    return function_ffffffffea9ded93();
}

// Address range: 0x14aba0 - 0x14aba2
int64_t function_14aba0(int64_t a1) {
    // 0x14aba0
    return __asm_iretd(a1);
}

// Address range: 0x14abb6 - 0x14abb7
int64_t function_14abb6(int64_t a1) {
    // 0x14abb6
    int64_t result; // 0x14abb6
    return result;
}

// Address range: 0x14abe7 - 0x14abea
int64_t function_14abe7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x14abe7
    int64_t result; // 0x14abe7
    return result;
}

// Address range: 0x14ac18 - 0x14ac1b
int64_t function_14ac18(void) {
    // 0x14ac18
    int64_t result; // 0x14ac18
    return result;
}

// Address range: 0x14ac54 - 0x14ac55
int64_t function_14ac54(void) {
    // 0x14ac54
    int64_t result; // 0x14ac54
    return result;
}

// Address range: 0x14ac5d - 0x14ac5f
int64_t function_14ac5d(void) {
    // 0x14ac5d
    return function_14ac54();
}

// Address range: 0x14ad12 - 0x14ad19
int64_t function_14ad12(void) {
    // 0x14ad12
    int64_t result; // 0x14ad12
    int32_t * v1 = (int32_t *)(result - 0x229e1730); // 0x14ad12
    *v1 = -*v1;
    return result;
}

// Address range: 0x14adcf - 0x14add0
int64_t function_14adcf(int64_t a1) {
    // 0x14adcf
    int64_t result; // 0x14adcf
    return result;
}

// Address range: 0x14ae2f - 0x14ae32
int64_t function_14ae2f(void) {
    // 0x14ae2f
    int64_t result; // 0x14ae2f
    return result;
}

// Address range: 0x14ae4d - 0x14ae53
int64_t function_14ae4d(void) {
    // 0x14ae4d
    int64_t result; // 0x14ae4d
    return result;
}

// Address range: 0x14ae55 - 0x14ae61
int64_t function_14ae55(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14ae55
    unknown_151ae5b(a1, a2, a3, a4);
    return function_ffffffff8021d098();
}

// Address range: 0x14af29 - 0x14af2a
int64_t function_14af29(void) {
    // 0x14af29
    int64_t result; // 0x14af29
    return result;
}

// Address range: 0x14af2d - 0x14af32
int64_t function_14af2d(void) {
    // 0x14af2d
    int64_t v1; // 0x14af2d
    return v1 | 107;
}

// Address range: 0x14af47 - 0x14af9f
int64_t function_14af47(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = __asm_iretd((int64_t)&g3); // 0x14af4a
    __asm_out((int16_t)a3, v1);
    *(int32_t *)(a1 - 14) = v1 ^ -0x28fec300;
    char * v2 = (char *)(a4 & -0xff01 | (int64_t)&g2); // 0x14af5c
    *v2 = *v2 - 118;
    int64_t v3; // 0x14af47
    unsigned char v4 = *(char *)&v3; // 0x14af5f
    int64_t v5; // 0x14af47
    unsigned char v6 = *(char *)&v5; // 0x14af5f
    bool v7; // 0x14af47
    int64_t v8 = v7 ? -1 : 1; // 0x14af5f
    int64_t v9 = v8 + a1; // 0x14af5f
    int64_t v10 = v8 + a2; // 0x14af5f
    v5 = v9;
    v3 = v10;
    __asm_wait(v9, v10);
    if (v4 >= v6) {
        // 0x14af9d
        return function_14af29();
    }
    char v11 = *(char *)-0x5055ae96; // 0x14af63
    int64_t v12; // 0x14af47
    *(char *)-0x5055ae96 = v11 + (char)((uint64_t)v12 / 256);
    __asm_wait(v9, v10);
    return unknown_4397017f() & -256 | (int64_t)*(char *)-0x36084c1bb11907e1;
}

// Address range: 0x14af9f - 0x14afd4
int64_t function_14af9f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x14af9f
    int64_t v1; // 0x14af9f
    *(char *)a1 = (char)v1;
    bool v2; // 0x14af9f
    uint64_t v3 = (v2 ? -1 : 1) + a1; // 0x14afa2
    int64_t result = v3 & 0xffffffff; // 0x14afa7
    *(char *)0x3da5cd41 = *(char *)0x3da5cd41 + (char)(v3 / 256);
    int32_t * v4 = (int32_t *)(v1 + 98); // 0x14afb3
    *v4 = *v4 + (int32_t)v1;
    int32_t * v5 = (int32_t *)result; // 0x14afb6
    int32_t v6 = v3; // 0x14afb6
    *v5 = *v5 + v6;
    char * v7 = (char *)(v1 + 0x3d000002); // 0x14afb8
    *v7 = *v7 + (char)a4;
    int32_t v8 = *v5; // 0x14afbe
    int32_t v9 = v8 + v6; // 0x14afbe
    *v5 = v9;
    if (((v9 ^ v8) & (v9 ^ v6)) >= 0) {
        // 0x14b033
        return result;
    }
    int32_t * v10 = (int32_t *)(v1 - 0x5f28f2b); // 0x14afc7
    *v10 = *v10 + (int32_t)a3;
    return result ^ a4 / 256 % 256;
}

// Address range: 0x14b014 - 0x14b019
int64_t function_14b014(void) {
    // 0x14b014
    return function_4b169822();
}

// Address range: 0x14b039 - 0x14b03a
int64_t function_14b039(void) {
    // 0x14b039
    int64_t result; // 0x14b039
    return result;
}

// Address range: 0x14b070 - 0x14b074
int64_t function_14b070(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14b070
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x14b070
    return result;
}

// Address range: 0x14b07b - 0x14b090
int64_t function_14b07b(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 0x5ca80488); // 0x14b081
    *v1 = *v1 + (int32_t)a1;
    bool v2; // 0x14b07b
    int64_t v3 = v2 ? -1 : 1; // 0x14b087
    int64_t v4; // 0x14b07b
    return unknown_5a241a8e(v3 + a1, v3 + a2, v4 + (a3 & 0xff00) & 0xff00 | a3 & -0xff01);
}

// Address range: 0x14b090 - 0x14b0a3
int64_t function_14b090(int64_t a1, int64_t a2) {
    // 0x14b090
    int64_t v1; // 0x14b090
    if ((char)v1 != -106) {
        function_14b039();
    }
    // 0x14b095
    bool v2; // 0x14b090
    return __asm_int1((v2 ? -1 : 1) + a1);
}

// Address range: 0x14b0a4 - 0x14b0b1
int64_t function_14b0a4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x14b0a4
    int64_t v1; // 0x14b0a4
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2; // 0x14b0a4
    unsigned char v3 = *(char *)&v2; // 0x14b0a5
    int64_t v4; // 0x14b0a4
    unsigned char v5 = v3 + (char)(v4 / 256); // 0x14b0a5
    *(char *)a2 = v5;
    char v6 = *(char *)&v4; // 0x14b0a7
    *(char *)v4 = v6 + (char)v1 + (char)(v5 < v3);
    bool v7; // 0x14b0a4
    return function_9217ad4((v7 ? -4 : 4) + a1);
}

// Address range: 0x14b0c8 - 0x14b0cb
int64_t function_14b0c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14b0c8
    int64_t v1; // 0x14b0c8
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)a4;
    return result;
}

// Address range: 0x436c67 - 0x436c7f
int64_t function_436c67(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x7e40e5b4); // 0x436c67
    *v1 = *v1 & (int32_t)a2;
    int32_t v2 = __asm_in(59); // 0x436c6d
    char v3 = __asm_in_133(49); // 0x436c72
    char * v4 = (char *)(a2 + 0x1d684318); // 0x436c74
    *v4 = *v4 - (char)(a4 / 256);
    return v2 & -0x24d86500 | (int32_t)v3 | 0x24d8640e;
}

// Address range: 0x436c82 - 0x436c85
int64_t function_436c82(int64_t a1) {
    // 0x436c82
    int64_t result; // 0x436c82
    return result;
}

// Address range: 0x436c85 - 0x436c88
int64_t function_436c85(int64_t a1) {
    // 0x436c85
    int64_t result; // 0x436c85
    return result;
}

// Address range: 0x436cad - 0x436cb0
int64_t function_436cad(int64_t a1) {
    // 0x436cad
    int64_t result; // 0x436cad
    return result;
}

// Address range: 0x436cb5 - 0x436cba
int64_t function_436cb5(void) {
    // 0x436cb5
    return function_ffffffff9046e172();
}

// Address range: 0x436ccc - 0x436cd1
int64_t function_436ccc(void) {
    // 0x436ccc
    return function_b23fde();
}

// Address range: 0x436cdd - 0x436cdf
int64_t function_436cdd(int64_t a1) {
    // 0x436cdd
    int64_t result; // 0x436cdd
    return result;
}

// Address range: 0x436d18 - 0x436d92
int64_t function_436d18(int64_t a1, int64_t a2) {
    // 0x436d18
    int64_t v1; // 0x436d18
    uint32_t v2 = (int32_t)v1; // 0x436d64
    int32_t * v3 = (int32_t *)(a1 + 52); // 0x436d69
    uint32_t v4 = *v3; // 0x436d69
    *v3 = v4 / 8 | 0x20000000 * (int32_t)(v2 < 0x3111a8fe) | 0x40000000 * v4;
    __asm_int3();
    int64_t v5 = __asm_int1(a1); // 0x436d6e
    int64_t v6 = v2 == 0x3111a8fe | (v4 & 4) != 0 ? v5 + 0xd368c00 & 0xffffff00 : v5;
    return v6 & -256 | (int64_t)*(char *)0x6ef44a4f54b737b1;
}

// Address range: 0x436e1a - 0x436e1b
int64_t function_436e1a(void) {
    // 0x436e1a
    int64_t result; // 0x436e1a
    return result;
}

// Address range: 0x436e25 - 0x436ed8
int64_t function_436e25(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    int64_t v1 = a1;
    int64_t v2; // 0x436e25
    int64_t v3 = v2;
    uint32_t v4 = *(int32_t *)0x27fa0a8518f3463b; // 0x436e2d
    __asm_out_134(122, v4);
    int64_t v5 = v4; // 0x436e38
    v2 = v1 & 0xffffffff;
    while ((int32_t)v3 >= 0xc354ab5) {
        // 0x436e28
        v1 = v5;
        v3 = v2;
        v4 = *(int32_t *)0x27fa0a8518f3463b;
        __asm_out_134(122, v4);
        v5 = v4;
        v2 = v1 & 0xffffffff;
    }
    char * v6 = (char *)(v5 - 0x4b38109c); // 0x436e3d
    *v6 = 2 * *v6;
    int32_t v7 = (int32_t)v1 ^ 0x45811810; // 0x436e47
    if (v7 >= 0) {
        int32_t * v8 = (int32_t *)(a5 - 78); // 0x436e4e
        *v8 = *v8 - (int32_t)a4;
        return function_436e1a();
    }
    // 0x436ec9
    __asm_int(57);
    char * v9 = (char *)((int64_t)v7 + 54); // 0x436ed4
    *v9 = *v9 | (char)(a5 / 256);
    int64_t v10; // 0x436e25
    return v10 & 0xffffff00 | 60;
}

// Address range: 0x436f04 - 0x436f08
int64_t function_436f04(void) {
    // 0x436f04
    int64_t v1; // 0x436f04
    return v1 & 0xffffffff;
}

// Address range: 0x436f3d - 0x436f45
int64_t function_436f3d(int64_t a1) {
    // 0x436f3d
    int64_t result; // 0x436f3d
    return result;
}

// Address range: 0x436f67 - 0x436f71
int64_t function_436f67(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 95); // 0x436f67
    int64_t result; // 0x436f67
    *v1 = *v1 ^ (int32_t)result;
    return result;
}

// Address range: 0x436f73 - 0x436f7c
int64_t function_436f73(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x436f73
    int64_t result; // 0x436f73
    return result;
}

// Address range: 0x436f7c - 0x436f8d
int64_t function_436f7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x436f7c
    int64_t result; // 0x436f7c
    *(char *)-0x6bfcceb161c0eefb = (char)result;
    *(char *)a4 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x436f7c
    *(int32_t *)a4 = *(int32_t *)&v1;
    return result;
}

// Address range: 0x436f8d - 0x436fb7
int64_t function_436f8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x436f8d
    int64_t v1; // 0x436f8d
    uint64_t v2 = v1;
    unsigned char v3 = (char)((int32_t)v2 / 256); // 0x436f90
    unsigned char v4 = (char)((int64_t)&g1 >> 8) - v3; // 0x436f90
    if (v3 > (char)((int64_t)&g1 >> 8) || v4 == 0) {
        // 0x436f94
        return (int64_t)*(int32_t *)0x7a2157ff6405de89;
    }
    int32_t * v5 = (int32_t *)(v1 + 0x41586c01 + 8 * (256 * (int64_t)v4 | (a4 | (int64_t)&g1) & 0x1fffffffffff00ff)); // 0x436faf
    bool v6; // 0x436f8d
    *v5 = *v5 - (int32_t)((v6 ? 0xfffffffc : 4) + a2);
    return v2 & 0xffffff00 | (int64_t)*(char *)(v1 + v2 % 256);
}

// Address range: 0x436fb8 - 0x436fb9
int64_t function_436fb8(int64_t a1) {
    // 0x436fb8
    return a1 & 0xffffffff;
}

// Address range: 0x437095 - 0x437096
int64_t function_437095(void) {
    // 0x437095
    int64_t result; // 0x437095
    return result;
}

// Address range: 0x4370b9 - 0x4370c3
int64_t function_4370b9(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a2 + 0x3d9aa45e); // 0x4370b9
    *v1 = *v1 | 125;
    int64_t result; // 0x4370b9
    return result;
}

// Address range: 0x4370d4 - 0x4370d8
int64_t function_4370d4(int64_t a1) {
    // 0x4370d4
    int64_t result; // 0x4370d4
    return result;
}

// Address range: 0x4370f0 - 0x4370f2
int64_t function_4370f0(void) {
    // 0x4370f0
    return function_437095();
}

// Address range: 0x437104 - 0x437112
int64_t function_437104(void) {
    // 0x437104
    __asm_sti();
    return function_2762d9bc();
}

// Address range: 0x43717c - 0x437183
int64_t function_43717c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x43717c
    int64_t result; // 0x43717c
    return result;
}

// Address range: 0x4371d4 - 0x4371de
int64_t function_4371d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4371d4
    int64_t result; // 0x4371d4
    return result;
}

// Address range: 0x4371e8 - 0x4371eb
int64_t function_4371e8(int64_t a1) {
    // 0x4371e8
    int64_t result; // 0x4371e8
    return result;
}

// Address range: 0x437214 - 0x437227
int64_t function_437214(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x437214
    return function_2328df4f();
}
