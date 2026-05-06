/*
 * Targeted RetDec C for native executable gap queue batch 243.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x143f13-0x144113 rank=- name=- kind=- bytes=- uncovered=-
 *   0x144313-0x144513 rank=- name=- kind=- bytes=- uncovered=-
 *   0x144713-0x144913 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21a066-0x21a266 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21a266-0x21a466 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21a466-0x21a666 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2efc1e-0x2efe1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f001e-0x2f021e rank=- name=- kind=- bytes=- uncovered=-
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
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
void __asm_rep_movsb_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_stosb_memset(char *dst, char value, int64_t count);
void __asm_rep_stosd_memset(char *dst, int32_t value, int64_t count);
void __asm_rep_stosq_memset(char *dst, int64_t value, int64_t count);
void __asm_rep_movsd_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_movsq_memcpy(char *dst, char *src, int64_t count);
int64_t __asm_hlt();
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
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

int64_t function_143f13(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_143f3f(int64_t a1);
int64_t function_143f7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_143fc9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_143fd2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_144003(int64_t a1);
int64_t function_144020(int64_t a1);
int64_t function_14402c(void);
int64_t function_14407a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14409c(void);
int64_t function_1440e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_144313(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14437f(void);
int64_t function_1443df(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_144456(int64_t a1);
int64_t function_144493(void);
int64_t function_1444fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1446cb();
int64_t function_1446fb();
int64_t function_144713(void);
int64_t function_14471a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_144740(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_144776(void);
int64_t function_144787(void);
int64_t function_144794(void);
int64_t function_1447ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14486a(void);
int64_t function_14489b(void);
int64_t function_1448d8(void);
int64_t function_1448f6(void);
int64_t function_14490f(void);
int64_t function_1cb7b582();
int64_t function_21a066(void);
int64_t function_21a06f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21a1d9(void);
int64_t function_21a1f5(void);
int64_t function_21a23b(int64_t a1);
int64_t function_21a290(void);
int64_t function_21a2cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21a304(void);
int64_t function_21a37e(int64_t a1, int64_t a2);
int64_t function_21a396(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21a3d1(void);
int64_t function_21a3ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21a44f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21a470(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_21a4df(void);
int64_t function_21a4ea(void);
int64_t function_21a4ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_21a535(void);
int64_t function_21a547(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_21a5a1(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_21a5dd(void);
int64_t function_21a5df(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2efc1e(int64_t a1, int64_t a2);
int64_t function_2efc57(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2efe04(void);
int64_t function_2f001e(void);
int64_t function_2f0027(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2f01ce(int64_t a1, uint32_t result);
int64_t function_c4258();
int64_t function_ffffffffab241c86();
int64_t function_ffffffffd12faecd();
int64_t function_ffffffffffdbce4b();
int64_t unknown_15fe48e9();
int64_t unknown_187660b8();
int64_t unknown_3aba6219();
int64_t unknown_3abf7d46();
int64_t unknown_3b0f7f07();
int64_t unknown_3d238cf4();
int64_t unknown_3fc0b510();
int64_t unknown_565b4807();
int64_t unknown_5d544e2c();
int64_t unknown_ffffffff89ecc9f8();
int64_t unknown_ffffffff9c27048c();
int64_t unknown_ffffffffb3df4041();
int64_t unknown_ffffffffb477a418();
int64_t unknown_ffffffffc368ee37();
int64_t unknown_ffffffffdfb101f5();
int64_t unknown_ffffffffe7162b1f();
int64_t unknown_ffffffffe7195623();
int64_t unknown_ffffffffe829b526();

// Address range: 0x143f13 - 0x143f23
int64_t function_143f13(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x143f13
    int64_t v1; // 0x143f13
    *(char *)a1 = (char)v1 + (char)(a3 / 256);
    int32_t * v2 = (int32_t *)(a2 + 0x4f59d03a + 4 * v1); // 0x143f15
    uint32_t v3 = *v2; // 0x143f15
    *v2 = v3 / 0x2000 | 0x80000 * v3;
    char v4 = *(char *)(v1 % 256 + v1); // 0x143f1d
    return a3 & 0xffffff00 | (int64_t)((char)a3 - v4 + (char)((v3 & 0x1000) != 0));
}

// Address range: 0x143f3f - 0x143f42
int64_t function_143f3f(int64_t a1) {
    // 0x143f3f
    int64_t result; // 0x143f3f
    return result;
}

// Address range: 0x143f7f - 0x143f8d
int64_t function_143f7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x143f7f
    int64_t v1; // 0x143f7f
    int32_t * v2 = (int32_t *)(v1 + 0x17fc0658 + 8 * v1); // 0x143f7f
    uint32_t v3 = *v2; // 0x143f7f
    uint32_t v4 = v3 + (int32_t)a4; // 0x143f7f
    *v2 = v4;
    return v1 + 0x620623c6 + (int64_t)(v4 < v3) & 0xffffffff;
}

// Address range: 0x143fc9 - 0x143fce
int64_t function_143fc9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x143fc9
    int64_t result; // 0x143fc9
    return result;
}

// Address range: 0x143fd2 - 0x143ffc
int64_t function_143fd2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x143fd2
    int64_t v1; // 0x143fd2
    bool v2; // 0x143fd2
    *(char *)a2 = (char)v1 + (char)a3 + (char)v2;
    *(char *)0x703ecfe3 = *(char *)0x703ecfe3 + (char)(v1 / 256);
    *(char *)-0x27de0b1 = *(char *)-0x27de0b1 / 2 | -128;
    int32_t * v3 = (int32_t *)(a2 + 0x5907e232); // 0x143ff5
    *v3 = *v3 - (int32_t)v1;
    return v1 & 0x581501e8;
}

// Address range: 0x144003 - 0x144004
int64_t function_144003(int64_t a1) {
    // 0x144003
    int64_t result; // 0x144003
    return result;
}

// Address range: 0x144020 - 0x144021
int64_t function_144020(int64_t a1) {
    // 0x144020
    int64_t result; // 0x144020
    return result;
}

// Address range: 0x14402c - 0x14402d
int64_t function_14402c(void) {
    // 0x14402c
    int64_t result; // 0x14402c
    return result;
}

// Address range: 0x14407a - 0x14408a
int64_t function_14407a(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 83); // 0x14407a
    *v1 = *v1 & 0x13d0041;
    return function_ffffffffab241c86();
}

// Address range: 0x14409c - 0x14409d
int64_t function_14409c(void) {
    // 0x14409c
    int64_t result; // 0x14409c
    return result;
}

// Address range: 0x1440e1 - 0x14410e
int64_t function_1440e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a3 + 0x765f1be); // 0x1440e1
    int64_t v3; // 0x1440e1
    int32_t v4 = *v2 + (int32_t)v3; // 0x1440e1
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x1440e1
    *v2 = v4;
    int64_t v6; // 0x1440e1
    if (v5 % 2 != 0) {
        v6 = function_14409c();
    }
    int64_t v7 = v6 & -0xff01 | (int64_t)&g1; // 0x1440e9
    int32_t v8 = v7; // 0x1440eb
    *(int32_t *)a1 = v8;
    int32_t * v9 = (int32_t *)(v7 + 0x3dcada00); // 0x1440f4
    *v9 = *v9 + v8;
    __asm_outsd((int16_t)a3, *(int32_t *)&v1);
    return (int64_t)((*(int32_t *)(a4 + 106) & (int32_t)v3) + 0x7ae9d856);
}

// Address range: 0x144313 - 0x14433b
int64_t function_144313(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2; // 0x144313
    char * v3 = (char *)(v2 + 0x769d992a); // 0x144313
    unsigned char v4 = *v3; // 0x144313
    unsigned char v5 = (char)a4 % 32; // 0x144313
    v1 = a4;
    if (v5 != 0) {
        *v3 = v4 >> v5 | v4 << 8 - v5;
    }
    int64_t result = unknown_ffffffffe7162b1f(); // 0x144319
    int32_t * v6 = (int32_t *)(result + 69); // 0x144320
    *v6 = *v6 + (int32_t)v1;
    *(char *)v1 = *(char *)&v1 | (char)a3;
    return result;
}

// Address range: 0x14437f - 0x144382
int64_t function_14437f(void) {
    // 0x14437f
    int64_t result; // 0x14437f
    return result;
}

// Address range: 0x1443df - 0x14444b
int64_t function_1443df(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    int64_t v2 = a1;
    __asm_in(72);
    unknown_15fe48e9();
    __asm_hlt();
    __asm_wait();
    uint64_t v3 = unknown_ffffffff89ecc9f8(); // 0x1443f2
    char * v4 = (char *)(v3 + 8); // 0x1443f7
    char v5 = *v4 + (char)(v3 / 256); // 0x1443f7
    *v4 = v5;
    if (v5 != 0) {
        // 0x144401
        unknown_3b0f7f07();
        return __asm_in_133(83);
    }
    uint32_t v6 = *(int32_t *)&v1; // 0x14442f
    uint32_t v7 = v6 + (int32_t)v2; // 0x14442f
    *(int32_t *)v1 = v7;
    int64_t v8; // 0x1443df
    int64_t v9 = v8 + 8; // 0x14442f
    bool v10 = v7 < v6; // 0x14442f
    v9 -= 8;
    while (v10) {
        unsigned char v11 = *(char *)&v2; // 0x144436
        unsigned char v12 = v11 + (char)a4; // 0x144436
        *(char *)v2 = v12;
        v10 = v12 < v11;
        if (v12 >= 0) {
            // 0x14443b
            return unknown_ffffffffb3df4041();
        }
        v9 -= 8;
    }
    // 0x144401
    unknown_3b0f7f07();
    return __asm_in_133(83);
}

// Address range: 0x144456 - 0x144457
int64_t function_144456(int64_t a1) {
    // 0x144456
    int64_t result; // 0x144456
    return result;
}

// Address range: 0x144493 - 0x144494
int64_t function_144493(void) {
    // 0x144493
    int64_t result; // 0x144493
    return result;
}

// Address range: 0x1444fb - 0x144505
int64_t function_1444fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1444fb
    int64_t v1; // 0x1444fb
    __asm_out(0, (int32_t)v1);
    bool v2; // 0x1444fb
    if (v2) {
        // 0x14453d
        return a4 & 0xffffffff;
    }
    int32_t * v3 = (int32_t *)(a2 - 96); // 0x144500
    *v3 = *v3 + (int32_t)v1;
    return function_144493();
}

// Address range: 0x144713 - 0x144719
int64_t function_144713(void) {
    // 0x144713
    return unknown_3aba6219();
}

// Address range: 0x14471a - 0x144740
int64_t function_14471a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x14471a
    bool v1; // 0x14471a
    unsigned char v2 = (char)v1 + (char)a4 + *(char *)(a2 - 0x7d2fe3a4); // 0x14471b
    int64_t v3; // 0x14471a
    if (v2 < 0) {
        v3 = function_1446cb();
    }
    int32_t * v4 = (int32_t *)((a4 & -256 | (int64_t)v2) - 0x57cd560b); // 0x144730
    int64_t v5; // 0x14471a
    *v4 = *v4 + (int32_t)v5;
    unsigned char v6 = v2 % 32;
    if (v6 != 0) {
        *(int32_t *)0x813c0ae0 = *(int32_t *)0x813c0ae0 >> (int32_t)v6;
    }
    return 0x10000 * (int32_t)v3 - 0x3a440000 >> 16;
}

// Address range: 0x144740 - 0x144763
int64_t function_144740(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int32_t v2 = unknown_3abf7d46(); // 0x144745
    uint32_t v3 = v2 + (int32_t)a3; // 0x144745
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x144745
    __asm_out_134((int16_t)v3, v2);
    *(int32_t *)a1 = v2;
    if (v4 % 2 == 0) {
        function_1446fb();
    }
    uint32_t v5 = (int32_t)a4 % 32; // 0x14474b
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)((int64_t)v3 + 0x4f01e87c); // 0x14474b
        *v6 = *v6 >> v5;
    }
    bool v7; // 0x144740
    *(int32_t *)((v7 ? -4 : 4) + a1) = *(int32_t *)&v1;
    return a4 + 0x83219265 & 0xffffffff;
}

// Address range: 0x144776 - 0x14477b
int64_t function_144776(void) {
    // 0x144776
    return function_1cb7b582();
}

// Address range: 0x144787 - 0x144789
int64_t function_144787(void) {
    // 0x144787
    int64_t result; // 0x144787
    return result;
}

// Address range: 0x144794 - 0x144795
int64_t function_144794(void) {
    // 0x144794
    int64_t result; // 0x144794
    return result;
}

// Address range: 0x1447ba - 0x14484f
int64_t function_1447ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t result; // 0x1447ba
    if (llvm_ctpop_i8((char)result - 1) % 2 == 0) {
        // 0x1447d1
        return result;
    }
    int32_t * v2 = (int32_t *)(a2 + 69); // 0x144811
    int32_t v3 = (a4 & 0xff00) + a3 & 0xff00 | a4 & 0xffff00ff; // 0x144811
    int32_t v4 = *v2 + v3; // 0x144811
    *v2 = v4;
    if (v4 < 1) {
        // 0x1447ff
        return unknown_565b4807();
    }
    int32_t * v5 = (int32_t *)(a2 + 0x7000b88c); // 0x144816
    *v5 = *v5 & v3;
    unknown_ffffffffe7195623();
    __asm_in(-91);
    bool v6; // 0x1447ba
    int64_t v7 = v6 ? -1 : 1; // 0x144825
    int64_t v8 = v7 + (a3 + 57 & 0xffffffff); // 0x144825
    int64_t v9 = unknown_5d544e2c(v8) & 0xffffffff; // 0x14482b
    *(char *)v9 = (char)v8;
    int64_t v10 = v9 + v7; // 0x144830
    unknown_ffffffffc368ee37(v10);
    int32_t * v11 = (int32_t *)((4 * a5 & -1024 | 872) + 0xdcca97ff); // 0x14483f
    *v11 = *v11 - 0x23356808;
    int32_t * v12 = (int32_t *)(v10 - 113); // 0x144843
    *v12 = *v12 + (int32_t)a2;
    int32_t * v13 = (int32_t *)(a2 - 0x4bc2dd19); // 0x144848
    *v13 = *v13 + (int32_t)v10;
    return (int64_t)&v1;
}

// Address range: 0x14486a - 0x14486c
int64_t function_14486a(void) {
    // 0x14486a
    int64_t result; // 0x14486a
    return result;
}

// Address range: 0x14489b - 0x14489c
int64_t function_14489b(void) {
    // 0x14489b
    int64_t result; // 0x14489b
    return result;
}

// Address range: 0x1448d8 - 0x1448d9
int64_t function_1448d8(void) {
    // 0x1448d8
    int64_t result; // 0x1448d8
    return result;
}

// Address range: 0x1448f6 - 0x1448f8
int64_t function_1448f6(void) {
    // 0x1448f6
    return function_14489b();
}

// Address range: 0x14490f - 0x144911
int64_t function_14490f(void) {
    // 0x14490f
    int64_t result; // 0x14490f
    return result;
}

// Address range: 0x21a066 - 0x21a06e
int64_t function_21a066(void) {
    // 0x21a066
    int64_t v1; // 0x21a066
    int64_t v2 = v1;
    return v2 + 0x509ffe53 + (int64_t)((v2 & 256) != 0) & 0xffffffff;
}

// Address range: 0x21a06f - 0x21a076
int64_t function_21a06f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21a06f
    int64_t result; // 0x21a06f
    return result;
}

// Address range: 0x21a1d9 - 0x21a1e3
int64_t function_21a1d9(void) {
    // 0x21a1d9
    return function_ffffffffffdbce4b();
}

// Address range: 0x21a1f5 - 0x21a1f6
int64_t function_21a1f5(void) {
    // 0x21a1f5
    int64_t result; // 0x21a1f5
    return result;
}

// Address range: 0x21a23b - 0x21a244
int64_t function_21a23b(int64_t a1) {
    // 0x21a23b
    int64_t v1; // 0x21a23b
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a1;
    return function_21a1f5();
}

// Address range: 0x21a290 - 0x21a295
int64_t function_21a290(void) {
    // 0x21a290
    return function_ffffffffd12faecd();
}

// Address range: 0x21a2cc - 0x21a2de
int64_t function_21a2cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21a2cc
    int64_t v1; // 0x21a2cc
    int64_t v2 = v1;
    int64_t result = (v2 + 117) % 256 | v2 & -256; // 0x21a2cc
    char * v3 = (char *)(result + 114); // 0x21a2d3
    *v3 = *v3 + (char)v1;
    return result;
}

// Address range: 0x21a304 - 0x21a307
int64_t function_21a304(void) {
    // 0x21a304
    int64_t v1; // 0x21a304
    return v1 & -256 | (int64_t)__asm_in(58);
}

// Address range: 0x21a37e - 0x21a388
int64_t function_21a37e(int64_t a1, int64_t a2) {
    // 0x21a37e
    int64_t result; // 0x21a37e
    return result;
}

// Address range: 0x21a396 - 0x21a399
int64_t function_21a396(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21a396
    int64_t v1; // 0x21a396
    __asm_outsb((int16_t)a3, (char)v1);
    return a4 & 0xffffffff;
}

// Address range: 0x21a3d1 - 0x21a3d4
int64_t function_21a3d1(void) {
    // 0x21a3d1
    int64_t result; // 0x21a3d1
    return result;
}

// Address range: 0x21a3ef - 0x21a408
int64_t function_21a3ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffdfb101f5(); // 0x21a3ef
    char * v2 = (char *)((a3 + 0x8842ad81 & 0xffffffff) - 10); // 0x21a3fe
    *v2 = *v2 + (char)a4;
    return function_21a470(a1, a2, v1 & 0xffffffff, a4);
}

// Address range: 0x21a44f - 0x21a46f
int64_t function_21a44f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x21a44f
    *(char *)(a2 - 103) = (char)((uint64_t)v2 / 256);
    int64_t v3 = v1;
    *(int32_t *)v3 = *(int32_t *)&v1 & (int32_t)v3;
    *(char *)v1 = *(char *)&v1 ^ (char)v2;
    *(char *)a4 = __asm_insb(44);
    return v2 | -0x36e5f510;
}

// Address range: 0x21a470 - 0x21a4db
int64_t function_21a470(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x21a470
    int64_t v1; // 0x21a470
    int64_t v2 = v1;
    int64_t v3 = a2;
    unsigned char v4 = *(char *)(a1 - 21); // 0x21a470
    int64_t v5 = (v2 + 176 + (int64_t)(v4 > (char)a3)) % 256 | v2 & 0xffffff00; // 0x21a473
    char * v6 = (char *)(v5 - 0x30cee490); // 0x21a47d
    char v7 = *v6 | (char)a4; // 0x21a47d
    *v6 = v7;
    __asm_outsb((int16_t)a3, *(char *)&v3);
    int64_t result = unknown_ffffffff9c27048c(); // 0x21a486
    int64_t v8 = v5 - 1; // 0x21a48c
    if (v7 == 0 || v8 == 0) {
        char * v9 = (char *)(v3 - 60); // 0x21a48e
        *v9 = *v9 | (char)v1;
        int32_t * v10 = (int32_t *)(v5 + 0x6ab50208); // 0x21a496
        *v10 = *v10 & (int32_t)result;
        char * v11 = (char *)(v1 + 34); // 0x21a49e
        *v11 = *v11 + (char)v1;
        int64_t * v12 = (int64_t *)v1; // 0x21a4a5
        *v12 = 0x13d0e48;
        char * v13 = (char *)((v8 & -0xff01 | (int64_t)&g3) + 20); // 0x21a4ab
        *v13 = *v13 + (char)(a3 / 256);
        unknown_187660b8();
        char * v14 = (char *)((a3 & -256 | 164) - 0x4513ad39); // 0x21a4b3
        *v14 = *v14 + 10;
        int64_t v15 = *v12; // 0x21a4d1
        return (v15 + 57) % 256 | v15 & -256;
    }
    // 0x21a4d9
    return result;
}

// Address range: 0x21a4df - 0x21a4e0
int64_t function_21a4df(void) {
    // 0x21a4df
    int64_t result; // 0x21a4df
    return result;
}

// Address range: 0x21a4ea - 0x21a4eb
int64_t function_21a4ea(void) {
    // 0x21a4ea
    int64_t result; // 0x21a4ea
    return result;
}

// Address range: 0x21a4ee - 0x21a528
int64_t function_21a4ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x21a4ee
    unknown_3d238cf4();
    int64_t v1; // 0x21a4ee
    int32_t v2 = 2 * (int32_t)v1; // 0x21a4f3
    if (v2 != 0) {
        // 0x21a51d
        return unknown_ffffffffe829b526();
    }
    int64_t v3 = a4 - 1; // 0x21a4f7
    if (v3 != 0 == v2 == 0) {
        function_21a4ea();
    }
    int64_t v4 = function_21a4df(); // 0x21a4f9
    unsigned char v5 = (char)v4; // 0x21a4fc
    __asm_out_135(-39, v5);
    unsigned char v6 = (char)v3 % 32; // 0x21a4fe
    int64_t v7 = v4; // 0x21a4fe
    if (v6 != 0) {
        v7 = v4 & -256 | (int64_t)(v5 >> v6);
    }
    __asm_in_133(61);
    uint64_t result = unknown_3fc0b510(); // 0x21a50a
    bool v8; // 0x21a4ee
    char * v9 = (char *)(a1 - 0x17a37c15 + 2 * v1 + (v8 ? -4 : 4)); // 0x21a50f
    char v10 = *v9; // 0x21a50f
    *v9 = v10 + (char)(result / 256) + (char)((v2 + (int32_t)v7 ^ -16) < 0xd02c3e50);
    int32_t * v11 = (int32_t *)(result - 0x6f2f7ff6); // 0x21a516
    *v11 = *v11 + (int32_t)v3;
    return result;
}

// Address range: 0x21a535 - 0x21a536
int64_t function_21a535(void) {
    // 0x21a535
    int64_t result; // 0x21a535
    return result;
}

// Address range: 0x21a547 - 0x21a551
int64_t function_21a547(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = a4 & 0xffffffff; // 0x21a54b
    int64_t v1; // 0x21a547
    bool v2; // 0x21a547
    if ((char)v1 - 114 + (char)v2 < 0) {
        result = function_21a535();
    }
    int32_t * v3 = (int32_t *)(4 * v1 + a2); // 0x21a54d
    *v3 = *v3 + (int32_t)v1;
    return result;
}

// Address range: 0x21a5a1 - 0x21a5b5
int64_t function_21a5a1(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x21a5a1
    int64_t v1; // 0x21a5a1
    char * v2 = (char *)(v1 + 0x1e80003); // 0x21a5a1
    *v2 = *v2 & (char)(a3 / 256);
    *(int32_t *)a1 = (int32_t)v1;
    bool v3; // 0x21a5a1
    int64_t v4 = (v3 ? -4 : 4) + a1; // 0x21a5a7
    char * v5 = (char *)(v4 - 0x2c89ca65); // 0x21a5aa
    *v5 = *v5 + (char)a3;
    return function_21a5df(v4, a2, a3, a4);
}

// Address range: 0x21a5dd - 0x21a5df
int64_t function_21a5dd(void) {
    // 0x21a5dd
    int64_t v1; // 0x21a5dd
    int64_t v2 = v1;
    return (v2 + 246) % 256 | v2 & -256;
}

// Address range: 0x21a5df - 0x21a623
int64_t function_21a5df(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21a5df
    int64_t v1; // 0x21a5df
    bool v2; // 0x21a5df
    if (a4 != 1 != v2) {
        char * v3 = (char *)(v1 - 0x30fe17de); // 0x21a5e2
        *v3 = *v3 + (char)v1;
        __asm_int(58);
        __asm_out(-16, (int32_t)v1);
        char * v4 = (char *)(a2 - 0x2ffc7575); // 0x21a5f9
        *v4 = *v4 + (char)(v1 / 256);
        int32_t * v5 = (int32_t *)(a1 - 24); // 0x21a601
        *v5 = *v5 ^ (int32_t)a2;
        int32_t * v6 = (int32_t *)((v1 + 0x8c01e8a2 & 0xffffffff) + 0x4d51e203); // 0x21a604
        *v6 = *v6 + (int32_t)a3;
    }
    // 0x21a60a
    unknown_ffffffffb477a418();
    __asm_int3();
    return v1 & 0xffffffff;
}

// Address range: 0x2efc1e - 0x2efc57
int64_t function_2efc1e(int64_t a1, int64_t a2) {
    // 0x2efc1e
    int64_t v1; // 0x2efc1e
    return function_c4258(v1);
}

// Address range: 0x2efc57 - 0x2efdaf
int64_t function_2efc57(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2efc57
    return function_c4258(a1);
}

// Address range: 0x2efe04 - 0x2efe07
int64_t function_2efe04(void) {
    // 0x2efe04
    int64_t result; // 0x2efe04
    return result;
}

// Address range: 0x2f001e - 0x2f0027
int64_t function_2f001e(void) {
    // 0x2f001e
    int64_t v1; // 0x2f001e
    return function_c4258(v1);
}

// Address range: 0x2f0027 - 0x2f015f
int64_t function_2f0027(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2f0027
    return function_c4258(a1);
}

// Address range: 0x2f01ce - 0x2f021b
int64_t function_2f01ce(int64_t a1, uint32_t result) {
    // 0x2f01ce
    return result;
}
