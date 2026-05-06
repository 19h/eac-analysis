/*
 * Targeted RetDec C for native executable gap queue batch 295.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x108dbf-0x108fbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x108fbf-0x1091bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1091bf-0x1093bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e4ee8-0x1e50e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e50e8-0x1e52e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e52e8-0x1e54e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x259cc2-0x259ec2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25a0c2-0x25a2c2 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_108dbd();
int64_t function_108dbf(void);
int64_t function_108dca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6);
int64_t function_108e1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_108e42(int64_t a1, int64_t a2);
int64_t function_108e75(int64_t a1, int64_t a2);
int64_t function_108e97(void);
int64_t function_108ed3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_108ef4(void);
int64_t function_108f05(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10900e(int64_t a1);
int64_t function_109017(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_109082(void);
int64_t function_10908c(int64_t a1);
int64_t function_1090cf(int64_t a1, int64_t a2);
int64_t function_1090de(void);
int64_t function_1090ed(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_109113(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_109128(void);
int64_t function_10913b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1091a0(int64_t a1);
int64_t function_1091a6(void);
int64_t function_1091db(void);
int64_t function_1091ec(int64_t a1);
int64_t function_10920b(void);
int64_t function_10924c(int64_t a1, int64_t a2);
int64_t function_109271(void);
int64_t function_109276(int64_t a1);
int64_t function_1092a8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1220390e();
int64_t function_1e4ee8(void);
int64_t function_1e4ef0(void);
int64_t function_1e4f28(void);
int64_t function_1e4f38(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1e4f3c(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_1e4faf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1e4fce(int64_t a1);
int64_t function_1e4fde(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1e4ff9(int64_t a1);
int64_t function_1e5005(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e502b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e502d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1e5056(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1e512e(void);
int64_t function_1e513a(int64_t a1);
int64_t function_1e5144(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1e516c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1e51e7(int64_t a1);
int64_t function_1e51f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1e520a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1e5223(void);
int64_t function_1e5254(void);
int64_t function_1e5281(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e528b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e52eb(void);
int64_t function_1e5301(int64_t a1);
int64_t function_1e534e(void);
int64_t function_1e536e(int64_t a1, int64_t a2);
int64_t function_1e53e1(void);
int64_t function_1e53f0(void);
int64_t function_1e5406(int64_t a1);
int64_t function_1e5408(int64_t a1);
int64_t function_1e5451(int64_t a1, int64_t a2);
int64_t function_1e546c(int64_t a1);
int64_t function_1e54c7(void);
int64_t function_1e54da(int64_t a1);
int64_t function_259cc2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_259d0f(int64_t a1);
int64_t function_259d3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_259dc1(void);
int64_t function_25a04a();
int64_t function_25a05e();
int64_t function_25a0c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25a107(void);
int64_t function_25a149(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25a158(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25a1c7(void);
int64_t function_25a1db(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25a1f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2b1eb7e7();
int64_t function_2ccef05d();
int64_t function_2d1154f0();
int64_t function_ffffffffaf33b7e9();
int64_t function_ffffffffafe5e56f();
int64_t function_ffffffffd799526f();
int64_t function_fffffffffe6b4ffd();
int64_t unknown_165f225c();
int64_t unknown_18a17603();
int64_t unknown_1c2b8977();
int64_t unknown_1f89e23();
int64_t unknown_2006d6d0();
int64_t unknown_289536cb();
int64_t unknown_291efd93();
int64_t unknown_34481838();
int64_t unknown_3e8fc482();
int64_t unknown_43c57c2f();
int64_t unknown_560788b1();
int64_t unknown_5bc30e18();
int64_t unknown_6de9665c();
int64_t unknown_75140978();
int64_t unknown_7ea79c78();
int64_t unknown_e1a9922();
int64_t unknown_ffffffff8bd7b76b();
int64_t unknown_ffffffff924771ed();
int64_t unknown_ffffffff9d293440();
int64_t unknown_ffffffffa47e8591();
int64_t unknown_ffffffffafa334f0();
int64_t unknown_ffffffffb4667c59();
int64_t unknown_ffffffffc410f7e6();
int64_t unknown_ffffffffc65bb823();
int64_t unknown_ffffffffcd1f1bc2();
int64_t unknown_ffffffffcfa6f00c();
int64_t unknown_ffffffffd24fd4b5();
int64_t unknown_ffffffffd8793200();
int64_t unknown_ffffffffd91632fb();
int64_t unknown_ffffffffe31b8072();
int64_t unknown_ffffffffe628f459();
int64_t unknown_fffffffff2a2a446();
int64_t unknown_fffffffff42a8230();
int64_t unknown_fffffffff7d0cdd7();
int64_t unknown_fffffffff95de3ff();
int64_t unknown_fffffffffe3c1ecd();

// Address range: 0x108dbf - 0x108dc0
int64_t function_108dbf(void) {
    // 0x108dbf
    int64_t result; // 0x108dbf
    return result;
}

// Address range: 0x108dca - 0x108e03
int64_t function_108dca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6) {
    // 0x108dca
    unknown_2006d6d0();
    unsigned char v1 = (char)a3; // 0x108dcf
    unsigned char v2 = *(char *)(a3 - 0x26911973); // 0x108dcf
    int64_t v3 = __asm_hlt(a1); // 0x108dd5
    int32_t v4 = *(int32_t *)(a4 - 0x17706700); // 0x108dd6
    int64_t v5; // 0x108dca
    *(int32_t *)a4 = 2 * (int32_t)v5;
    int32_t * v6 = (int32_t *)(int64_t)(v4 + (int32_t)(v2 > v1) + (int32_t)(a3 & 0xffffff00 | (int64_t)(v1 - v2))); // 0x108dde
    *v6 = *v6 + (int32_t)v5;
    char * v7 = (char *)(a2 - 0x620ece20 + v3); // 0x108de0
    *v7 = -*v7;
    __asm_iretd(a1);
    unknown_ffffffffafa334f0();
    int64_t v8 = __asm_sti(); // 0x108def
    uint32_t v9 = (int32_t)a4 % 32; // 0x108df2
    if (v9 != 0) {
        int32_t * v10 = (int32_t *)((v8 - (a5 % 2 | 20)) % 256 | v8 & -256); // 0x108df2
        uint32_t v11 = *v10; // 0x108df2
        *v10 = v11 >> 32 - v9 | v11 << v9;
    }
    return unknown_fffffffff95de3ff();
}

// Address range: 0x108e1d - 0x108e3e
int64_t function_108e1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x108e1d
    unknown_1f89e23();
    unsigned char v1 = llvm_ctpop_i8((char)a2); // 0x108e27
    *(int32_t *)a2 = (int32_t)a2;
    if (v1 % 2 == 0) {
        function_108dbd();
    }
    int64_t result = unknown_34481838(); // 0x108e32
    char v2 = *(char *)0x7eca4f3e; // 0x108e37
    int64_t v3; // 0x108e1d
    *(char *)0x7eca4f3e = v2 + (char)((uint64_t)v3 / 256);
    return result;
}

// Address range: 0x108e42 - 0x108e71
int64_t function_108e42(int64_t a1, int64_t a2) {
    int64_t v1 = a2;
    int64_t v2; // 0x108e42
    int32_t v3 = v2; // 0x108e47
    int32_t v4 = v3 - 0x133e0961; // 0x108e47
    uint32_t v5 = 0x10000 * (v4 & 0xff00 | (int32_t)*(char *)0x47002afe013d2c22) >> 16; // 0x108e55
    char v6; // 0x108e42
    int64_t v7; // 0x108e42
    if (v4 < 0 == ((v4 ^ v3) & v3 + 0x6cc1f69f) < 0 == (v4 != 0)) {
        // 0x108e42
        v6 = a2;
        v7 = v5;
    } else {
        // 0x108e58
        *(int32_t *)-0x3727cbc0237726ba = v5;
        int64_t v8 = v5 + 0x3a9be33a; // 0x108e61
        int32_t * v9 = (int32_t *)(2 * v8); // 0x108e66
        *v9 = (int32_t)(v5 > 0xc5641cc5) - (int32_t)v2 + *v9;
        v6 = *(char *)&v1;
        v7 = v8;
    }
    // 0x108e69
    return v7 & 0xffffff00 | (int64_t)v6;
}

// Address range: 0x108e75 - 0x108e89
int64_t function_108e75(int64_t a1, int64_t a2) {
    // 0x108e75
    unknown_3e8fc482();
    int64_t v1; // 0x108e75
    *(char *)a1 = (char)v1;
    bool v2; // 0x108e75
    int64_t v3 = v2 ? -1 : 1; // 0x108e81
    return function_108f05(v3 + a1, v3 + a2, v1, v1);
}

// Address range: 0x108e97 - 0x108e99
int64_t function_108e97(void) {
    // 0x108e97
    int64_t result; // 0x108e97
    return result;
}

// Address range: 0x108ed3 - 0x108ef4
int64_t function_108ed3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x108ed3
    int64_t v1; // 0x108ed3
    uint64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)(v2 | a3);
    char * v3 = (char *)(v2 + 0x24666fe); // 0x108ed5
    char v4 = v2 / 256; // 0x108ed5
    int32_t v5 = v1; // 0x108ed3
    while (true) {
        // 0x108ed5
        *v3 = *v3 + v4;
        __asm_out_133(58, v5);
        *(char *)-0x609db11c = *(char *)-0x609db11c + v4;
        *(char *)0xa0fe3300 = *(char *)0xa0fe3300 + (char)a4;
        *(int32_t *)a4 = (int32_t)v1 + (int32_t)a4;
        v5 = -0x5f01cce8;
    }
}

// Address range: 0x108ef4 - 0x108ef5
int64_t function_108ef4(void) {
    // 0x108ef4
    int64_t result; // 0x108ef4
    return result;
}

// Address range: 0x108f05 - 0x10900d
int64_t function_108f05(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3; // 0x108f05
    int64_t v4 = 8 * v3; // 0x108f07
    int32_t * v5 = (int32_t *)(v3 - 0x26f3f3f6); // 0x108f0a
    *v5 = *v5 + (int32_t)v3;
    unknown_5bc30e18(*(int32_t *)(v3 + v4) & (int32_t)a1);
    uint32_t v6 = *(int32_t *)&v1; // 0x108f17
    int64_t v7 = v6; // 0x108f17
    int32_t * v8 = (int32_t *)(v7 - 2); // 0x108f20
    *v8 = *v8 + (int32_t)v3;
    int64_t v9 = __asm_int1(v6); // 0x108f23
    uint32_t v10 = (int32_t)v9; // 0x108f24
    int32_t v11 = *(int32_t *)v9; // 0x108f24
    int32_t v12 = v11 + v10; // 0x108f24
    if (a4 == 1 || v12 == 0) {
        int64_t v13 = v1 & -256 | 52; // 0x108f28
        v1 = v13;
        unknown_fffffffff42a8230();
        uint32_t v14 = *(int32_t *)0x577ca501e8566920; // 0x108f2f
        int64_t v15 = v14; // 0x108f2f
        __asm_outsd((int16_t)v13, *(int32_t *)&v2);
        float80_t v16; // 0x108f05
        *(float32_t *)((v4 ^ 41) + v15) = (float32_t)v16;
        unsigned char v17 = *(char *)-0x17ce5bcb; // 0x108f46
        *(char *)-0x17ce5bcb = v17 / 128 | 2 * v17;
        char * v18 = (char *)v1; // 0x108f4d
        *v18 = (char)v14 + 95 + *v18;
        return v15 & 0xffffff00 | (int64_t)((v14 + 95) % 256);
    }
    bool v19; // 0x108f05
    if (v12 < v10) {
        int64_t result = unknown_fffffffff7d0cdd7(); // 0x108fd1
        if (v12 < 0 == ((v12 ^ v10) & (v12 ^ v11)) < 0) {
            // 0x109005
            return result;
        }
        int32_t * v20 = (int32_t *)v7; // 0x108fda
        *v20 = *(int32_t *)&v1 + (int32_t)result;
        *v20 = *(int32_t *)&v2;
        int64_t v21 = v19 ? -4 : 4; // 0x108fdc
        return unknown_ffffffffc410f7e6(v21 + v7, v2 + v21);
    }
    // 0x108f56
    unknown_6de9665c();
    int64_t v22 = (unknown_ffffffffe31b8072() & 0xffffff00) + 0xe8332aa8; // 0x108f73
    int32_t * v23 = (int32_t *)((v22 & 0xffffffa8) + 0x4232e803); // 0x108f78
    uint32_t v24 = *v23; // 0x108f78
    uint32_t v25 = v24 + (int32_t)v1; // 0x108f78
    *v23 = v25;
    int64_t v26 = (int64_t)(v6 - *(int32_t *)(v2 - 24) + (int32_t)(v25 < v24)); // 0x108f7e
    int32_t * v27 = (int32_t *)((v3 & -0x10000 | (int64_t)"tdi2") + 0x2a11725c); // 0x108f81
    *v27 = *v27 + (int32_t)v22;
    *(int32_t *)v26 = *(int32_t *)&v2;
    int64_t v28 = v19 ? -4 : 4; // 0x108f88
    int64_t v29 = v2 + v28; // 0x108f88
    int64_t v30 = unknown_ffffffffa47e8591(v28 + v26, v29); // 0x108f8b
    int32_t * v31 = (int32_t *)(v29 - 54); // 0x108f97
    *v31 = *v31 + (int32_t)v1;
    return v30 + 0xe83e127a & 0xffffffff;
}

// Address range: 0x10900e - 0x109017
int64_t function_10900e(int64_t a1) {
    // 0x10900e
    int64_t result; // 0x10900e
    return result;
}

// Address range: 0x109017 - 0x109081
int64_t function_109017(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x109017
    bool v1; // 0x109017
    int64_t v2 = v1 ? -8 : 8; // 0x109018
    int64_t v3; // 0x109017
    __asm_out((int16_t)v3, (int32_t)a3);
    unknown_e1a9922();
    int64_t v4 = v2 + a1; // 0x10902e
    int64_t v5 = (v1 ? -1 : 1) + a2 + v2; // 0x10902e
    char * v6 = (char *)(unknown_43c57c2f() + 0xd4b509); // 0x109033
    unsigned char v7 = *v6; // 0x109033
    *v6 = v7 / 2 | 128 * v7;
    int64_t result = unknown_ffffffff9d293440(v4, v5); // 0x10903a
    if ((int32_t)v5 != -(int32_t)a4) {
        // 0x10907c
        return __asm_int1((int32_t)v4);
    }
    // 0x109043
    return result;
}

// Address range: 0x109082 - 0x109084
int64_t function_109082(void) {
    // 0x109082
    int64_t result; // 0x109082
    return result;
}

// Address range: 0x10908c - 0x10908e
int64_t function_10908c(int64_t a1) {
    // 0x10908c
    int64_t result; // 0x10908c
    return result;
}

// Address range: 0x1090cf - 0x1090d1
int64_t function_1090cf(int64_t a1, int64_t a2) {
    // 0x1090cf
    int64_t result; // 0x1090cf
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x1090de - 0x1090e2
int64_t function_1090de(void) {
    // 0x1090de
    int64_t v1; // 0x1090de
    return v1 & -256 | 134;
}

// Address range: 0x1090ed - 0x10910a
int64_t function_1090ed(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1090ed
    int64_t result; // 0x1090ed
    char * v1 = (char *)(result + 0x5616e82d); // 0x1090f2
    *v1 = *v1 + (char)a3;
    int64_t v2; // 0x1090ed
    unsigned char v3 = *(char *)&v2; // 0x1090f8
    unsigned char v4 = (char)(a4 / 256); // 0x1090f8
    *(char *)a3 = v3 - v4;
    int32_t * v5 = (int32_t *)(result - 38); // 0x1090fa
    *v5 = (int32_t)(v3 < v4) - (int32_t)result + *v5;
    return result;
}

// Address range: 0x109113 - 0x109127
int64_t function_109113(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x109113
    int64_t v1; // 0x109113
    float80_t v2; // 0x109113
    *(int32_t *)(2 * v1 + 0x2e48013d) = (int32_t)v2;
    int64_t result = unknown_ffffffffc65bb823(); // 0x10911a
    int64_t v3; // 0x109113
    *(int32_t *)v3 = 0x20000 * *(int32_t *)&v3;
    int64_t v4; // 0x109113
    __asm_outsd((int16_t)a3, *(int32_t *)&v4);
    return result;
}

// Address range: 0x109128 - 0x10913b
int64_t function_109128(void) {
    // 0x109128
    return function_2d1154f0();
}

// Address range: 0x10913b - 0x10915b
int64_t function_10913b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x10913b
    int64_t v1; // 0x10913b
    char v2 = *(char *)-0x68569bb8 + (char)(v1 / 256); // 0x109141
    *(char *)-0x68569bb8 = v2;
    int64_t result = a1 & 0xffffff00 | (int64_t)__asm_in((int16_t)a3); // 0x109147
    if (v2 != 0) {
        // 0x1091ac
        return result;
    }
    // 0x10914a
    return v1 + 0x9b622bc6 + (result & 0xe88b8baf) & 0xffffffff;
}

// Address range: 0x1091a0 - 0x1091a1
int64_t function_1091a0(int64_t a1) {
    // 0x1091a0
    int64_t result; // 0x1091a0
    return result;
}

// Address range: 0x1091a6 - 0x1091ac
int64_t function_1091a6(void) {
    // 0x1091a6
    int64_t result; // 0x1091a6
    return result;
}

// Address range: 0x1091db - 0x1091e0
int64_t function_1091db(void) {
    // 0x1091db
    return function_2ccef05d();
}

// Address range: 0x1091ec - 0x1091ed
int64_t function_1091ec(int64_t a1) {
    // 0x1091ec
    int64_t result; // 0x1091ec
    return result;
}

// Address range: 0x10920b - 0x109211
int64_t function_10920b(void) {
    // 0x10920b
    int64_t v1; // 0x10920b
    int64_t v2 = v1;
    bool v3; // 0x10920b
    *(char *)v2 = 2 * (char)v2 | (char)v3;
    int64_t result; // 0x10920b
    *(char *)result = *(char *)&result - 122;
    return result;
}

// Address range: 0x10924c - 0x109269
int64_t function_10924c(int64_t a1, int64_t a2) {
    // 0x10924c
    int64_t v1; // 0x10924c
    int64_t v2 = 0x100000000 * v1 >> 32; // 0x10924c
    int64_t v3 = 34 * v2; // 0x10924c
    int64_t v4 = v3 & 0xfffffffe; // 0x10924c
    *(int32_t *)a1 = (int32_t)v1;
    bool v5; // 0x10924c
    int64_t v6 = unknown_ffffffffb4667c59((v5 ? -4 : 4) + a1); // 0x109253
    int64_t v7 = v4 - 8; // 0x109258
    *(int64_t *)v7 = v4;
    int64_t v8; // 0x10924c
    int32_t v9 = *(int32_t *)&v8; // 0x109259
    *(int32_t *)v8 = v9 - ((int32_t)v7 | (int32_t)(v3 != 0x2200000000 * v2 >> 32));
    int32_t * v10 = (int32_t *)(v8 - 38); // 0x10925b
    *v10 = *v10 + (int32_t)a2;
    int64_t v11; // 0x10924c
    int32_t v12 = *(int32_t *)&v11 & (int32_t)v6; // 0x10925e
    return (v12 + 26) % 256 | v12 & -256;
}

// Address range: 0x109271 - 0x109276
int64_t function_109271(void) {
    // 0x109271
    return function_ffffffffafe5e56f();
}

// Address range: 0x109276 - 0x10927d
int64_t function_109276(int64_t a1) {
    // 0x109276
    int64_t v1; // 0x109276
    bool v2; // 0x109276
    if (!v2) {
        v1 = function_109276((int64_t)&g2);
    }
    // 0x109278
    return v1 | 149;
}

// Address range: 0x1092a8 - 0x1092fb
int64_t function_1092a8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1092a8
    int64_t v1; // 0x1092a8
    int64_t v2 = v1;
    *(int32_t *)a2 = (int32_t)v1;
    int64_t v3 = unknown_560788b1(); // 0x1092ab
    uint64_t v4 = unknown_ffffffffcd1f1bc2((int64_t)__asm_in_134((int16_t)a3)); // 0x1092bc
    char * v5 = (char *)(v1 - 0x6ee7d061 + 2 * v1); // 0x1092c1
    *v5 = *v5 - (char)v4;
    int32_t * v6 = (int32_t *)(((v2 + a3 / 256) % 256 | v2 & -256) - 117); // 0x1092ce
    *v6 = *v6 | (int32_t)a4;
    int64_t v7; // 0x1092a8
    uint32_t v8 = *(int32_t *)&v7; // 0x1092d1
    uint32_t v9 = (int32_t)v1; // 0x1092d1
    *(int32_t *)a4 = v8 - v9;
    char v10 = *(char *)((v4 & 0xffffffff) - 0x17e40673); // 0x1092d3
    int32_t * v11 = (int32_t *)(a3 + 0x41ebfc78); // 0x1092d9
    *v11 = *v11 + ((int32_t)v3 | 0x39f9fb0);
    int64_t v12 = (256 * (int64_t)((char)(v8 < v9) + (char)(v4 / 256) - v10) | v4 & 0xffff00ff) + 0x94b9d21c; // 0x1092ec
    *(int32_t *)0x1e818e0d9be3675 = (int32_t)v12;
    return v12 & 0xffffffff;
}

// Address range: 0x1e4ee8 - 0x1e4ee9
int64_t function_1e4ee8(void) {
    // 0x1e4ee8
    int64_t result; // 0x1e4ee8
    return result;
}

// Address range: 0x1e4ef0 - 0x1e4ef8
int64_t function_1e4ef0(void) {
    // 0x1e4ef0
    int64_t v1; // 0x1e4ef0
    return function_1e4f38(v1, v1, v1);
}

// Address range: 0x1e4f28 - 0x1e4f2d
int64_t function_1e4f28(void) {
    // 0x1e4f28
    return function_2b1eb7e7();
}

// Address range: 0x1e4f38 - 0x1e4f3b
int64_t function_1e4f38(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1e4f38
    int64_t v1; // 0x1e4f38
    *(int32_t *)a3 = (int32_t)v1 + (int32_t)a2;
    return a1 & 0xffffffff;
}

// Address range: 0x1e4f3c - 0x1e4f4a
int64_t function_1e4f3c(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x1e4f3c
    *(char *)(a1 - 0x6944e48c) = (char)(a3 / 256);
    return function_fffffffffe6b4ffd();
}

// Address range: 0x1e4faf - 0x1e4fcc
int64_t function_1e4faf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1e4faf
    unknown_ffffffffd24fd4b5();
    bool v1; // 0x1e4faf
    int64_t v2 = v1 ? -4 : 4; // 0x1e4fb4
    int64_t v3 = v2 + a1; // 0x1e4fb4
    int64_t v4 = v2 + a2; // 0x1e4fb4
    unknown_289536cb(v3, v4);
    int64_t v5; // 0x1e4faf
    return function_1e502b(v3, v4, a3, v5);
}

// Address range: 0x1e4fce - 0x1e4fd1
int64_t function_1e4fce(int64_t a1) {
    // 0x1e4fce
    int64_t result; // 0x1e4fce
    return result;
}

// Address range: 0x1e4fde - 0x1e4fe0
int64_t function_1e4fde(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1e4fde
    int64_t v1; // 0x1e4fde
    return v1 & 0xffffffff;
}

// Address range: 0x1e4ff9 - 0x1e5004
int64_t function_1e4ff9(int64_t a1) {
    // 0x1e4ff9
    return unknown_ffffffffd8793200(a1);
}

// Address range: 0x1e5005 - 0x1e5020
int64_t function_1e5005(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 24); // 0x1e5005
    int64_t v2; // 0x1e5005
    *v1 = *v1 ^ (int32_t)v2;
    __asm_wait();
    uint32_t v3 = (int32_t)a4 % 32; // 0x1e5015
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)((a2 + a1 & 0xffffffff) + 0xabeb88); // 0x1e5015
        *v4 = *v4 << v3;
    }
    return function_1220390e();
}

// Address range: 0x1e502b - 0x1e502c
int64_t function_1e502b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e502b
    return a4 & 0xffffffff;
}

// Address range: 0x1e502d - 0x1e5044
int64_t function_1e502d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1e502d
    int64_t v1; // 0x1e502d
    int64_t v2 = v1;
    char * v3 = (char *)(v2 + 0x2c34000); // 0x1e502d
    *v3 = *v3 + (char)v2;
    int64_t result = (v2 + a4 / 256) % 256 | v2 & -256; // 0x1e5033
    int32_t * v4 = (int32_t *)(v1 - 0x3ffea500); // 0x1e5035
    *v4 = *v4 + (int32_t)v1;
    int32_t * v5 = (int32_t *)(result - 0x13d9c589); // 0x1e503d
    *v5 = *v5 | (int32_t)a2;
    return result;
}

// Address range: 0x1e5056 - 0x1e5101
int64_t function_1e5056(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_165f225c(); // 0x1e5056
    unknown_ffffffff8bd7b76b();
    __asm_int3();
    int64_t v2; // 0x1e5056
    *(int32_t *)a1 = (int32_t)v2;
    bool v3; // 0x1e5056
    int64_t v4 = v3 ? -4 : 4; // 0x1e506b
    int64_t v5 = v4 + a1; // 0x1e506b
    int64_t v6 = v4 + a2; // 0x1e506b
    *(int32_t *)v5 = *(int32_t *)v6;
    int64_t result = unknown_75140978(v5 + v4, v6 + v4); // 0x1e5072
    *(int32_t *)-0x29653efedc0d7cc6 = (int32_t)result;
    int64_t v7 = a4 - 1; // 0x1e5080
    if (v7 == 0 || (v1 & 0x51ea9c58) == 0) {
        // 0x1e5082
        return function_ffffffffd799526f();
    }
    int32_t * v8 = (int32_t *)(v2 - 7); // 0x1e50fc
    *v8 = *v8 + (int32_t)v2;
    uint32_t v9 = (int32_t)v7 % 32; // 0x1e50ff
    if (v9 != 0) {
        int32_t * v10 = (int32_t *)result; // 0x1e50ff
        uint32_t v11 = *v10; // 0x1e50ff
        *v10 = v11 >> 32 - v9 | v11 << v9;
    }
    return result;
}

// Address range: 0x1e512e - 0x1e512f
int64_t function_1e512e(void) {
    // 0x1e512e
    int64_t result; // 0x1e512e
    return result;
}

// Address range: 0x1e513a - 0x1e5142
int64_t function_1e513a(int64_t a1) {
    // 0x1e513a
    int64_t v1; // 0x1e513a
    int64_t v2 = v1;
    uint64_t v3 = v1;
    unsigned char v4 = *(char *)(v3 + 64) | (char)(v3 / 256); // 0x1e513a
    *(char *)v2 = v4 + (char)v2;
    return 256 * (int64_t)v4 | v3 & -0xff01;
}

// Address range: 0x1e5144 - 0x1e5167
int64_t function_1e5144(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1e5144
    int64_t v1; // 0x1e5144
    uint64_t v2 = v1;
    *(char *)0x667b0a4b = *(char *)0x667b0a4b + (char)(v2 / 256);
    uint32_t v3 = *(int32_t *)0x30d02c5b; // 0x1e514a
    *(int32_t *)0x30d02c5b = (int32_t)a1;
    int32_t * v4 = (int32_t *)(v2 + 2 * a4); // 0x1e5152
    *v4 = *v4 + v3;
    int64_t v5 = __asm_iretd((int64_t)v3); // 0x1e515a
    char v6 = v5; // 0x1e515b
    *(char *)a4 = v6;
    int64_t result = v5; // 0x1e515f
    if (v6 != 0) {
        result = function_1e512e();
    }
    // 0x1e5161
    return result;
}

// Address range: 0x1e516c - 0x1e51d5
int64_t function_1e516c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1e516c
    int64_t v1; // 0x1e516c
    int64_t v2 = v1;
    *(int32_t *)v2 = 4 * (int32_t)v2;
    int64_t v3; // 0x1e516c
    if ((((char)((int64_t)&g1 | 0x13d001b) ^ (char)((int64_t)&g1 | 0x13d001b)) & (char)((int64_t)&g1 | 0x13d001b)) < 0) {
        char v4 = __asm_in_135(63); // 0x1e518a
        return v3 & 0xfe387000 | (int64_t)v4 | (int64_t)v4 & -0x1c79000 | 0x1c78f00;
    }
    int32_t v5 = *(int32_t *)(a1 + 45); // 0x1e51c5
    int64_t v6 = v3; // 0x1e51ca
    int64_t v7 = __asm_hlt(a1); // 0x1e51cc
    v3 = v7;
    char * v8 = (char *)(v6 + a3 & 0xffffffff); // 0x1e51cd
    *v8 = *v8 + (char)v7;
    unsigned char v9 = ((char)((int64_t)&g1 | 0x13d001b) - (char)v5) % 32; // 0x1e51cf
    if (v9 != 0) {
        unsigned char v10 = *(char *)&v3; // 0x1e51cf
        *(char *)v3 = v10 >> 8 - v9 | v10 << v9;
    }
    return __asm_int1((int32_t)a1);
}

// Address range: 0x1e51e7 - 0x1e51f0
int64_t function_1e51e7(int64_t a1) {
    int64_t result = unknown_ffffffff924771ed(a1); // 0x1e51e7
    // 0x1e51ee
    return result;
}

// Address range: 0x1e51f8 - 0x1e520a
int64_t function_1e51f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)unknown_18a17603(); // 0x1e5202
    return v1 / 0x8000000 | 32 * v1;
}

// Address range: 0x1e520a - 0x1e5220
int64_t function_1e520a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1e520a
    int64_t v1; // 0x1e520a
    int64_t v2 = v1;
    bool v3; // 0x1e520a
    *(char *)v2 = (char)v2 - (v3 ? 53 : 52);
    __asm_in_135(-24);
    int32_t * v4 = (int32_t *)(a4 - 84); // 0x1e5214
    *v4 = *v4 + (int32_t)v1;
    return a3 & 0xffffffff;
}

// Address range: 0x1e5223 - 0x1e5224
int64_t function_1e5223(void) {
    // 0x1e5223
    int64_t result; // 0x1e5223
    return result;
}

// Address range: 0x1e5254 - 0x1e5257
int64_t function_1e5254(void) {
    // 0x1e5254
    int64_t result; // 0x1e5254
    return result;
}

// Address range: 0x1e5281 - 0x1e528b
int64_t function_1e5281(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e5281
    int64_t result; // 0x1e5281
    return result;
}

// Address range: 0x1e528b - 0x1e52a8
int64_t function_1e528b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_291efd93(); // 0x1e528d
    int64_t v2; // 0x1e528b
    *(int32_t *)a4 = (int32_t)v2 + (int32_t)a2;
    int64_t v3 = a2; // bp-8, 0x1e5294
    uint64_t v4 = a4 - 1; // 0x1e5295
    int64_t result = v1; // 0x1e5295
    if (v4 != 0) {
        result = function_1e5223();
    }
    int32_t * v5 = (int32_t *)result; // 0x1e5297
    *v5 = *v5 | (int32_t)(int64_t)&v3;
    int32_t * v6 = (int32_t *)(a3 - 16 + v2); // 0x1e5299
    *v6 = *v6 + 0x170ce995;
    int32_t * v7 = (int32_t *)(result + 5); // 0x1e52a1
    *v7 = *v7 + (int32_t)result;
    char * v8 = (char *)(a2 + 95); // 0x1e52a4
    *v8 = *v8 | (char)(v4 / 256);
    return result;
}

// Address range: 0x1e52eb - 0x1e52f0
int64_t function_1e52eb(void) {
    // 0x1e52eb
    return function_ffffffffaf33b7e9();
}

// Address range: 0x1e5301 - 0x1e5302
int64_t function_1e5301(int64_t a1) {
    // 0x1e5301
    int64_t result; // 0x1e5301
    return result;
}

// Address range: 0x1e534e - 0x1e5351
int64_t function_1e534e(void) {
    // 0x1e534e
    int64_t result; // 0x1e534e
    return result;
}

// Address range: 0x1e536e - 0x1e537a
int64_t function_1e536e(int64_t a1, int64_t a2) {
    // 0x1e536e
    int64_t v1; // 0x1e536e
    *(int32_t *)a1 = 0x2000 * (int32_t)v1;
    return unknown_7ea79c78(a1, a2);
}

// Address range: 0x1e53e1 - 0x1e53e2
int64_t function_1e53e1(void) {
    // 0x1e53e1
    int64_t result; // 0x1e53e1
    return result;
}

// Address range: 0x1e53f0 - 0x1e53f5
int64_t function_1e53f0(void) {
    // 0x1e53f0
    int64_t result; // 0x1e53f0
    int64_t v1; // 0x1e53f0
    bool v2; // 0x1e53f0
    if (((char)((uint64_t)v1 / 128) & -2) == (char)v2) {
        result = function_1e53e1();
    }
    // 0x1e53f4
    return result;
}

// Address range: 0x1e5406 - 0x1e5408
int64_t function_1e5406(int64_t a1) {
    // 0x1e5406
    int64_t result; // 0x1e5406
    return result;
}

// Address range: 0x1e5408 - 0x1e5409
int64_t function_1e5408(int64_t a1) {
    // 0x1e5408
    int64_t result; // 0x1e5408
    return result;
}

// Address range: 0x1e5451 - 0x1e5469
int64_t function_1e5451(int64_t a1, int64_t a2) {
    // 0x1e5451
    unknown_ffffffffe628f459();
    int64_t v1; // 0x1e5451
    *(int32_t *)a1 = 2 * (int32_t)v1;
    return __asm_in_136(74);
}

// Address range: 0x1e546c - 0x1e546d
int64_t function_1e546c(int64_t a1) {
    // 0x1e546c
    int64_t result; // 0x1e546c
    return result;
}

// Address range: 0x1e54c7 - 0x1e54cb
int64_t function_1e54c7(void) {
    // 0x1e54c7
    int64_t v1; // 0x1e54c7
    int64_t result = v1;
    *(char *)result = (char)result + 64;
    return result;
}

// Address range: 0x1e54da - 0x1e54dc
int64_t function_1e54da(int64_t a1) {
    // 0x1e54da
    int64_t result; // 0x1e54da
    return result;
}

// Address range: 0x259cc2 - 0x259cd4
int64_t function_259cc2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x259cc2
    __asm_outsb((int16_t)a3, (char)a2);
    int64_t v1; // 0x259cc2
    if ((int32_t)v1 > -0x5afe1761) {
        // 0x259cce
        return a2 & 0xffffffff;
    }
    // 0x259ccd
    return v1 + 0x5afe1761 & 0xffffffff;
}

// Address range: 0x259d0f - 0x259d10
int64_t function_259d0f(int64_t a1) {
    // 0x259d0f
    int64_t result; // 0x259d0f
    return result;
}

// Address range: 0x259d3b - 0x259d80
int64_t function_259d3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x259d3b
    bool v1; // 0x259d3b
    int64_t v2 = v1 ? -1 : 1; // 0x259d3d
    int64_t v3 = v2 + a1; // 0x259d3d
    __asm_in_136(33);
    unknown_fffffffff2a2a446();
    int64_t v4; // 0x259d3b
    int32_t * v5 = (int32_t *)(v4 + 0x48004eb4); // 0x259d46
    int32_t v6 = a4; // 0x259d46
    *v5 = *v5 | v6;
    int32_t * v7 = (int32_t *)(v3 - 0x44fe1727); // 0x259d4c
    uint32_t v8 = *v7; // 0x259d4c
    *v7 = (int32_t)v4;
    *(char *)-0x282eba6e = *(char *)-0x282eba6e + (char)(v8 / 256);
    int64_t result = a6 & 0xffffff00 | 186; // 0x259d5a
    unsigned char v9 = *(char *)(v3 - 24); // 0x259d5c
    int64_t v10 = v8 & -256; // 0x259d5c
    int64_t v11 = (int64_t)v9 | v10; // 0x259d5c
    int32_t * v12 = (int32_t *)(v4 - 83); // 0x259d5f
    *v12 = *v12 + (int32_t)v11;
    uint32_t v13 = *(int32_t *)(5 * v11) | v6; // 0x259d62
    int32_t * v14 = (int32_t *)result; // 0x259d6a
    uint32_t v15 = *v14 | 0x7b01e8db; // 0x259d6a
    *v14 = v15;
    uint32_t v16 = v13 % 32; // 0x259d71
    char v17 = 0; // 0x259d71
    if (v16 != 0) {
        uint32_t v18 = v15 >> 32 - v16 | v15 << v16; // 0x259d71
        *v14 = v18;
        v17 = v18 % 2 != 0;
    }
    __asm_outsd((int16_t)a3, *(int32_t *)(v2 + a2));
    char v19 = *(char *)(result + 6); // 0x259d74
    char * v20 = (char *)((int64_t)v13 - 0x17e8d926); // 0x259d77
    *v20 = *v20 + (char)(v13 / 256);
    int32_t * v21 = (int32_t *)((int64_t)(v17 + v9 + v19) | v10); // 0x259d7d
    *v21 = *v21 + (int32_t)v4;
    return result;
}

// Address range: 0x259dc1 - 0x259dc4
int64_t function_259dc1(void) {
    // 0x259dc1
    int64_t result; // 0x259dc1
    return result;
}

// Address range: 0x25a0c2 - 0x25a0e9
int64_t function_25a0c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25a0c2
    int64_t v1; // 0x25a0c2
    int32_t v2 = v1;
    int32_t v3 = v1; // 0x25a0c2
    int32_t v4 = v3 + v2; // 0x25a0c2
    *(int32_t *)a2 = v4;
    int64_t v5; // 0x25a0c2
    if (a4 != 1) {
        v5 = function_25a04a();
    }
    int64_t v6 = v5; // 0x25a0cc
    if (v4 < 0 != ((v4 ^ v2) & (v4 ^ v3)) < 0) {
        v6 = function_25a05e();
    }
    char * v7 = (char *)(v6 + 50); // 0x25a0ce
    *v7 = *v7 + (char)v6;
    int32_t * v8 = (int32_t *)(a1 + 0x4481cf4c); // 0x25a0d8
    *v8 = *v8 + v3;
    return v6 & -256 | (int64_t)*(char *)-0x67b493f5ea51ffae;
}

// Address range: 0x25a107 - 0x25a108
int64_t function_25a107(void) {
    // 0x25a107
    int64_t result; // 0x25a107
    return result;
}

// Address range: 0x25a149 - 0x25a153
int64_t function_25a149(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25a149
    int64_t result; // 0x25a149
    return result;
}

// Address range: 0x25a158 - 0x25a185
int64_t function_25a158(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25a158
    int64_t v1; // 0x25a158
    bool v2; // 0x25a158
    int32_t * v3 = (int32_t *)((v1 + a2 & 0xffffffff) + 4 * a4 + (v2 ? -4 : 4)); // 0x25a165
    *v3 = *v3 + (int32_t)a1;
    int32_t * v4 = (int32_t *)(a1 - 101); // 0x25a168
    *v4 = *v4 & (int32_t)v1;
    unknown_1c2b8977();
    int64_t v5; // bp-8, 0x25a158
    int32_t v6 = (int64_t)&v5; // 0x25a17b
    int32_t v7 = v1; // 0x25a17b
    int32_t v8 = v6 + v7; // 0x25a17b
    if (v8 < 0 == ((v8 ^ v6) & (v8 ^ v7)) < 0 == (v8 != 0)) {
        function_25a107();
    }
    // 0x25a17f
    __asm_int3();
    return __asm_hlt(a1);
}

// Address range: 0x25a1c7 - 0x25a1cf
int64_t function_25a1c7(void) {
    // 0x25a1c7
    return unknown_fffffffffe3c1ecd();
}

// Address range: 0x25a1db - 0x25a1f0
int64_t function_25a1db(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25a1db
    int64_t result; // 0x25a1db
    int32_t * v1 = (int32_t *)(result - 24); // 0x25a1e4
    *v1 = *v1 + (int32_t)result;
    char * v2 = (char *)(a3 & -256 | 175); // 0x25a1ee
    *v2 = *v2 + (char)result;
    return result;
}

// Address range: 0x25a1f1 - 0x25a26a
int64_t function_25a1f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a2 + 110); // 0x25a1f1
    int64_t v2; // 0x25a1f1
    bool v3; // 0x25a1f1
    *v1 = (char)v3 - (char)v2 + *v1;
    int64_t v4 = v3 ? -4 : 4; // 0x25a1f4
    int64_t v5 = v4 + a2; // 0x25a1f4
    unknown_ffffffffd91632fb(v4 + a1, v5);
    char * v6 = (char *)(4 * a4 - 0x52913ae0 + v2); // 0x25a1fc
    *v6 = *v6 - (char)a4;
    int64_t result = unknown_ffffffffcfa6f00c(); // 0x25a206
    int32_t * v7 = (int32_t *)(v5 + 119); // 0x25a243
    int32_t v8 = *v7 + (int32_t)result; // 0x25a243
    *v7 = v8;
    if (a4 == 1 || v8 == 0) {
        uint32_t v9 = *(int32_t *)-0x5b04fe170151557b; // 0x25a24c
        int32_t v10 = *(int32_t *)(int64_t)v9; // 0x25a255
        uint32_t v11 = v10 + v9 + (int32_t)(*(char *)result < (char)result); // 0x25a255
        int64_t v12 = v11; // 0x25a255
        char * v13 = (char *)v12; // 0x25a257
        *v13 = *v13 | (char)a3;
        return (int64_t)(*(int32_t *)v12 + v11);
    }
    // 0x25a231
    return result;
}
