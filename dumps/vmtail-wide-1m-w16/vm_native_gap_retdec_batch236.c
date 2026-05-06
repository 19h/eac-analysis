/*
 * Targeted RetDec C for native executable gap queue batch 236.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x142d13-0x142f13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x143113-0x143313 rank=- name=- kind=- bytes=- uncovered=-
 *   0x143313-0x143513 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1634aa-0x1636aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1638aa-0x163aaa rank=- name=- kind=- bytes=- uncovered=-
 *   0xe659c-0xe679c rank=- name=- kind=- bytes=- uncovered=-
 *   0xe679c-0xe699c rank=- name=- kind=- bytes=- uncovered=-
 *   0xe6b9c-0xe6d9c rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_142d13(int64_t a1, int64_t a2, int64_t a3);
int64_t function_142d48(void);
int64_t function_142d6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_142db0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_142f07(int64_t a1);
int64_t function_143113(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_143147(void);
int64_t function_14317e(int64_t a1);
int64_t function_1431a3(void);
int64_t function_1431ac(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1431b8(void);
int64_t function_143206(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_143218(void);
int64_t function_14321b(int64_t a1, int64_t a2);
int64_t function_1432a3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_1432cf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1432fd(int64_t a1);
int64_t function_14330e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_143395(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_143412(void);
int64_t function_143427(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_143453(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1634aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1635cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_163662(int64_t a1);
int64_t function_16366e(int64_t a1);
int64_t function_1638a1();
int64_t function_1638aa(void);
int64_t function_1638f5(void);
int64_t function_163900(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_163919(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_163928(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_163931(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_163947(int64_t a1);
int64_t function_163977(int64_t a1);
int64_t function_16399a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1639a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_163a59(int64_t a1);
int64_t function_163a5f(void);
int64_t function_54199584();
int64_t function_7ed5af2b();
int64_t function_cdc60();
int64_t function_e659c(void);
int64_t function_e65cc(void);
int64_t function_e65fd(void);
int64_t function_e664c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e66c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e66d8(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_e67d5(void);
int64_t function_e6839(int64_t a1, int64_t a2, int64_t a3);
int64_t function_e683e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_e68e6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_e691c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_e695a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e6981(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e6b70();
int64_t function_e6b9c(void);
int64_t function_e6be1(void);
int64_t function_e6be9(void);
int64_t function_e6c34(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e6ca6(void);
int64_t function_e6cd0(int64_t a1);
int64_t function_e6cdd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_e6d00(int64_t a1);
int64_t function_e6d86(int64_t a1);
int64_t function_ffffffffac105192();
int64_t function_ffffffffba95b65b();
int64_t unknown_1378491f();
int64_t unknown_2fe66732();
int64_t unknown_360d7a55();
int64_t unknown_4783e948();
int64_t unknown_47a15fa9();
int64_t unknown_517b0c76();
int64_t unknown_6a217fe6();
int64_t unknown_6dcb647();
int64_t unknown_7984572b();
int64_t unknown_7a21754a();
int64_t unknown_ffffffff91a578e7();
int64_t unknown_ffffffff9710cfac();
int64_t unknown_ffffffff9c83fe69();
int64_t unknown_ffffffffa80a5c8a();
int64_t unknown_ffffffffb451c29b();
int64_t unknown_ffffffffba98e1f5();
int64_t unknown_ffffffffcdb9acb3();
int64_t unknown_ffffffffcdd8cc65();
int64_t unknown_ffffffffec69c069();
int64_t unknown_fffffffff999c260();

// Address range: 0xe659c - 0xe65ac
int64_t function_e659c(void) {
    // 0xe659c
    int64_t v1; // 0xe659c
    __asm_out(-37, (int32_t)v1);
    __asm_iretd();
    unknown_ffffffff9710cfac();
    return __asm_wait();
}

// Address range: 0xe65cc - 0xe65cd
int64_t function_e65cc(void) {
    // 0xe65cc
    int64_t result; // 0xe65cc
    return result;
}

// Address range: 0xe65fd - 0xe65fe
int64_t function_e65fd(void) {
    // 0xe65fd
    int64_t result; // 0xe65fd
    return result;
}

// Address range: 0xe664c - 0xe664d
int64_t function_e664c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe664c
    int64_t result; // 0xe664c
    return result;
}

// Address range: 0xe66c0 - 0xe66c3
int64_t function_e66c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result; // 0xe66c0
    if (a4 == 0) {
        result = function_e664c(a1, a2, a3, 0);
    }
    // 0xe66c2
    return result;
}

// Address range: 0xe66d8 - 0xe677d
int64_t function_e66d8(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    char v2 = *(char *)(a1 + 0x714ec5b4); // 0xe66da
    int64_t v3 = unknown_ffffffff91a578e7(); // 0xe66e1
    int64_t v4 = 2 * a3; // 0xe66e6
    int64_t v5 = v4 & 254 | a3 & -0x10000 | 256 * (int64_t)(v2 + (char)(a3 / 256)); // 0xe66e6
    int32_t v6 = a1;
    int32_t v7 = v5; // 0xe66f8
    *(int32_t *)a1 = v7 + v6;
    int16_t v8 = v5; // 0xe66fa
    __asm_outsd(v8, *(int32_t *)&v1);
    int64_t result = (v3 ^ 0x201e8af) + 0xf85062ae & 0xffffffff ^ -0x17d562af; // 0xe66fb
    int64_t v9; // 0xe66d8
    int32_t * v10 = (int32_t *)(a4 - 43 + 8 * v9); // 0xe6701
    uint32_t v11 = *v10; // 0xe6701
    uint32_t v12 = v11 + v6; // 0xe6701
    *v10 = v12;
    if (v12 >= v11 && v12 != 0) {
        // 0xe6707
        *(char *)0xf4fef01e8e800a0 = (char)result;
        return result;
    }
    // 0xe6713
    __asm_outsd(v8, *(int32_t *)&v1);
    int32_t * v13 = (int32_t *)(v9 + 0xb36af7c); // 0xe6719
    *v13 = *v13 + (int32_t)a4;
    unsigned char v14 = (char)a4 % 32; // 0xe671f
    if (v14 != 0) {
        char * v15 = (char *)(v5 + 0x4ca701e8); // 0xe671f
        unsigned char v16 = *v15; // 0xe671f
        *v15 = v16 >> 8 - v14 | v16 << v14;
    }
    char * v17 = (char *)(v1 + v5); // 0xe6725
    *v17 = *v17 | (char)(a4 / 256);
    int32_t * v18 = (int32_t *)(v9 + 0x51c844b1 + 8 * result); // 0xe672f
    *v18 = *v18 + (int32_t)v9;
    int32_t * v19 = (int32_t *)result; // 0xe673a
    *v19 = *v19 + v7;
    __asm_out_134(v8, (char)result ^ 80);
    int64_t v20 = unknown_7a21754a(); // 0xe6744
    int64_t v21 = (int64_t)(*(int32_t *)(a1 - 67) | -0x171615d6); // 0xe6749
    unsigned char v22 = (char)v20; // 0xe674c
    unsigned char v23 = (char)a1;
    char v24 = v22 - v23; // 0xe674c
    unsigned char v25 = llvm_ctpop_i8(v24); // 0xe674c
    __asm_in(13);
    *(int64_t *)(v21 - 8) = v21;
    __asm_wait();
    *(char *)0x4f081ea064001e8 = (char)v4;
    bool v26; // 0xe66d8
    *(int64_t *)(v21 - 16) = 0x4000 * (int64_t)v26 | 1024 * (int64_t)v26 | 512 * (int64_t)v26 | 256 * (int64_t)v26 | (int64_t)(v22 < v23) | 64 * (int64_t)(v24 == 0) | 128 * (int64_t)(v24 < 0) | 16 * (int64_t)(v22 % 16 - v23 % 16 > 15) | 4 * (int64_t)(v25 % 2 == 0) | 2048 * (int64_t)(((v24 ^ v22) & (char)(v20 ^ a1)) < 0) | 2;
    int64_t v27 = unknown_ffffffffec69c069(); // 0xe6763
    char v28 = __asm_in(14); // 0xe6768
    uint64_t v29 = v27 & -256 | (int64_t)v28; // 0xe6768
    char * v30 = (char *)(v29 + 0x2466000); // 0xe676a
    *v30 = *v30 + v28;
    char * v31 = (char *)(v9 + 0x5401e800); // 0xe6770
    *v31 = *v31 + (char)(v29 / 256);
    return v29 & 0xb0bdff66 | 0x4f420099;
}

// Address range: 0xe67d5 - 0xe67d6
int64_t function_e67d5(void) {
    // 0xe67d5
    int64_t result; // 0xe67d5
    return result;
}

// Address range: 0xe6839 - 0xe683e
int64_t function_e6839(int64_t a1, int64_t a2, int64_t a3) {
    // 0xe6839
    int64_t result; // 0xe6839
    return result;
}

// Address range: 0xe683e - 0xe68e5
int64_t function_e683e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xe683e
    int64_t v1; // 0xe683e
    int64_t result = v1;
    int64_t v2 = a6;
    int64_t v3 = a2;
    char v4 = v1; // 0xe6844
    unsigned char v5 = *(char *)(a2 - 0x7bfe1784); // 0xe6844
    if (v5 >= v4) {
        // 0xe68c5
        *(char *)result = (char)result + (char)a4 + (char)(v5 > v4);
        return result;
    }
    // 0xe684c
    *(char *)a3 = (char)(a3 / 256) + (char)a3;
    *(int32_t *)v2 = *(int32_t *)&v2 >> 1;
    *(int32_t *)0x1e812d86f6cef1b = (int32_t)result;
    int64_t v6 = a3 & -256 | 61; // 0xe6868
    int64_t v7 = result + 2 * v1; // 0xe686c
    int64_t result2 = v7 & 0xffffffff; // 0xe686c
    int32_t * v8 = (int32_t *)(v6 - 44); // 0xe686e
    uint32_t v9 = *v8; // 0xe686e
    uint32_t v10 = v9 + (int32_t)v7; // 0xe686e
    *v8 = v10;
    char v11 = *(char *)0xc301e864; // 0xe6871
    *(char *)0xc301e864 = v11 + (char)((a4 + 0xffff) / 256) + (char)(v10 < v9);
    __asm_outsd((int16_t)v6, *(int32_t *)&v3);
    char * v12 = (char *)result2; // 0xe6878
    *v12 = *v12 + (char)v7;
    return result2;
}

// Address range: 0xe68e6 - 0xe68f4
int64_t function_e68e6(int64_t a1, int64_t a2, int64_t a3) {
    // 0xe68e6
    int64_t result; // 0xe68e6
    int32_t * v1 = (int32_t *)(8 * a3 + 111 + result); // 0xe68e6
    *v1 = *v1 | (int32_t)a1;
    return result;
}

// Address range: 0xe691c - 0xe6959
int64_t function_e691c(int64_t a1, int64_t a2, int64_t a3) {
    // 0xe691c
    unknown_4783e948();
    int64_t v1; // 0xe691c
    char * v2 = (char *)(v1 + 0x470570f7); // 0xe6947
    *v2 = *v2 ^ (char)a3;
    int64_t result = unknown_360d7a55(); // 0xe694f
    int64_t v3; // 0xe691c
    if (*(int32_t *)&v3 < (int32_t)v1) {
        // 0xe6959
        return result;
    }
    // 0xe692c
    return unknown_2fe66732();
}

// Address range: 0xe695a - 0xe6981
int64_t function_e695a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xe695a
    unknown_fffffffff999c260();
    unknown_ffffffff9c83fe69();
    int3_t v1; // 0xe695a
    int3_t v2 = v1 - 1; // 0xe696e
    __frontend_reg_store_fpr(v2, __frontend_reg_load_fpr(v1) / __frontend_reg_load_fpr(v2));
    int64_t result = unknown_517b0c76(); // 0xe6970
    int64_t v3; // 0xe695a
    int32_t * v4 = (int32_t *)(v3 + 7); // 0xe6975
    *v4 = *v4 & (int32_t)a2;
    int32_t * v5 = (int32_t *)(a4 + 0x76299699); // 0xe697a
    *v5 = *v5 + (int32_t)v3;
    return result;
}

// Address range: 0xe6981 - 0xe6992
int64_t function_e6981(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe6981
    int64_t v1; // 0xe6981
    __asm_outsd((int16_t)a3, (int32_t)v1);
    __asm_wait();
    return function_ffffffffac105192();
}

// Address range: 0xe6b9c - 0xe6ba0
int64_t function_e6b9c(void) {
    // 0xe6b9c
    int64_t v1; // 0xe6b9c
    return v1 & -0xff01 | (int64_t)"ERS_MODE_CLDEMOTE";
}

// Address range: 0xe6be1 - 0xe6be2
int64_t function_e6be1(void) {
    // 0xe6be1
    int64_t result; // 0xe6be1
    return result;
}

// Address range: 0xe6be9 - 0xe6beb
int64_t function_e6be9(void) {
    // 0xe6be9
    return function_e6b70();
}

// Address range: 0xe6c34 - 0xe6c54
int64_t function_e6c34(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe6c34
    int64_t v1; // 0xe6c34
    uint32_t v2 = *(int32_t *)(a2 + 40) + (int32_t)v1; // 0xe6c34
    char * v3 = (char *)((int64_t)v2 - 0x77fe17f2); // 0xe6c37
    *v3 = *v3 + (char)a3;
    __asm_out_135(115, (char)v2);
    return function_e6be1();
}

// Address range: 0xe6ca6 - 0xe6ca7
int64_t function_e6ca6(void) {
    // 0xe6ca6
    int64_t result; // 0xe6ca6
    return result;
}

// Address range: 0xe6cd0 - 0xe6cd1
int64_t function_e6cd0(int64_t a1) {
    // 0xe6cd0
    int64_t result; // 0xe6cd0
    return result;
}

// Address range: 0xe6cdd - 0xe6cea
int64_t function_e6cdd(int64_t a1, int64_t a2, int64_t a3) {
    // 0xe6cdd
    return function_e6ca6();
}

// Address range: 0xe6d00 - 0xe6d03
int64_t function_e6d00(int64_t a1) {
    // 0xe6d00
    int64_t result; // 0xe6d00
    return result;
}

// Address range: 0xe6d86 - 0xe6d8b
int64_t function_e6d86(int64_t a1) {
    // 0xe6d86
    int64_t result; // 0xe6d86
    *(char *)a1 = (char)(result & result) + (char)result;
    return result;
}

// Address range: 0x142d13 - 0x142d46
int64_t function_142d13(int64_t a1, int64_t a2, int64_t a3) {
    // 0x142d13
    int64_t v1; // 0x142d13
    uint64_t v2 = v1;
    int64_t v3 = v1;
    *(char *)-0x142b9e6 = *(char *)-0x142b9e6 + (char)(v2 / 256);
    __asm_out_133((int16_t)a3, (int32_t)v3);
    *(char *)v3 = 2 * (char)v3;
    char * v4 = (char *)(v2 + 0x2a0d5a00); // 0x142d33
    *v4 = ((v3 & 256) == 0 ? 108 : 109) + *v4;
    int32_t * v5 = (int32_t *)(a2 + 0x8fcb63f); // 0x142d39
    *v5 = -*v5;
    return v3 + 0x99013d50 & 0xffffffff;
}

// Address range: 0x142d48 - 0x142d49
int64_t function_142d48(void) {
    // 0x142d48
    int64_t result; // 0x142d48
    return result;
}

// Address range: 0x142d6d - 0x142d93
int64_t function_142d6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x142d6d
    *(int32_t *)-0x3eaed283 = *(int32_t *)-0x3eaed283 >> 12;
    int64_t v1; // 0x142d6d
    if ((*(char *)((v1 & 0xffffffff ^ 0x43e54431) + 59) & (char)a3) == 0) {
        // 0x142d91
        return v1 & 0xffffffff;
    }
    // 0x142d82
    return function_54199584();
}

// Address range: 0x142db0 - 0x142e1d
int64_t function_142db0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x142db0
    int64_t result; // 0x142db0
    bool v1; // 0x142db0
    if (a4 != 1 && !v1 && v1) {
        result = function_142d48();
    }
    // 0x142db2
    return result;
}

// Address range: 0x142f07 - 0x142f08
int64_t function_142f07(int64_t a1) {
    // 0x142f07
    int64_t result; // 0x142f07
    return result;
}

// Address range: 0x143113 - 0x14313f
int64_t function_143113(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x143113
    int64_t v1; // 0x143113
    char v2 = v1; // 0x143113
    *(char *)0x180068f0cfeab3a7 = v2;
    char * v3 = (char *)(a3 + 0x13d0000 + a4); // 0x14311c
    *v3 = *v3 + v2;
    return __asm_hlt();
}

// Address range: 0x143147 - 0x14314a
int64_t function_143147(void) {
    // 0x143147
    int64_t result; // 0x143147
    return result;
}

// Address range: 0x14317e - 0x14318b
int64_t function_14317e(int64_t a1) {
    // 0x14317e
    int64_t v1; // 0x14317e
    int64_t v2 = v1;
    return (v2 + 64) % 256 | v2 & -256;
}

// Address range: 0x1431a3 - 0x1431a8
int64_t function_1431a3(void) {
    // 0x1431a3
    int64_t result; // 0x1431a3
    return result;
}

// Address range: 0x1431ac - 0x1431b6
int64_t function_1431ac(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1431ac
    int64_t result; // 0x1431ac
    int32_t * v1 = (int32_t *)(result - 0x17d17d72); // 0x1431af
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x1431b8 - 0x1431b9
int64_t function_1431b8(void) {
    // 0x1431b8
    int64_t result; // 0x1431b8
    return result;
}

// Address range: 0x143206 - 0x14320b
int64_t function_143206(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x143206
    int64_t v1; // 0x143206
    return v1 & 0xffffffff;
}

// Address range: 0x143218 - 0x14321b
int64_t function_143218(void) {
    // 0x143218
    int64_t result; // 0x143218
    return result;
}

// Address range: 0x14321b - 0x143238
int64_t function_14321b(int64_t a1, int64_t a2) {
    // 0x14321b
    *(int32_t *)a2 = 0x80000 * (int32_t)a2;
    bool v1; // 0x14321b
    if ((*(int32_t *)0x509e2032 ^ (int32_t)((v1 ? 0xffffffff : 1) + a1)) >= 0) {
        function_1431b8();
    }
    // 0x143233
    return function_ffffffffba95b65b();
}

// Address range: 0x1432a3 - 0x1432be
int64_t function_1432a3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_47a15fa9(); // 0x1432a3
    int64_t v2; // 0x1432a3
    char * v3 = (char *)(v2 + 14); // 0x1432a8
    *v3 = *v3 + (char)(a3 / 256);
    *(int32_t *)-0x702015f = *(int32_t *)-0x702015f + (int32_t)v2;
    return (v1 + 110) % 256 | v1 & -256;
}

// Address range: 0x1432cf - 0x1432d1
int64_t function_1432cf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1432cf
    int64_t result; // 0x1432cf
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x1432fd - 0x143300
int64_t function_1432fd(int64_t a1) {
    // 0x1432fd
    int64_t result; // 0x1432fd
    return result;
}

// Address range: 0x14330e - 0x143394
int64_t function_14330e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x14330e
    int64_t v1; // 0x14330e
    int64_t v2 = v1;
    *(char *)a3 = (char)a4;
    bool v3; // 0x14330e
    char v4 = *(char *)((2 * v2 & 254 | (int64_t)v3 | v2 & -256) - 0x70f4de10); // 0x143312
    if (v4 != (char)v1) {
        // 0x143391
        return a4 & 0xffffff30;
    }
    // 0x143381
    __asm_out_133((int16_t)unknown_ffffffffa80a5c8a(), (int32_t)a3);
    return a3 & 0xffffffff;
}

// Address range: 0x143395 - 0x1433f9
int64_t function_143395(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x143395
    bool v1; // 0x143395
    bool v2 = v1;
    int64_t v3 = a5;
    int64_t v4 = unknown_ffffffffb451c29b(); // 0x143395
    int32_t v5 = __asm_insd((int16_t)a3); // 0x14339e
    int32_t * v6 = (int32_t *)a1; // 0x14339e
    *v6 = v5;
    int64_t v7 = a6 + 0x601070c + (int64_t)(v2 | (v2 ? 6 : 5) > (char)v4); // 0x1433a9
    *v6 = __asm_insd((int16_t)v7);
    int64_t v8; // 0x143395
    uint64_t v9 = v8 & 0xffffff00; // 0x1433be
    unsigned char v10 = *(char *)(5 * v8) | (char)(v8 | a4 / 256); // 0x1433c1
    int32_t * v11 = (int32_t *)(v7 & 0xffffffff); // 0x1433c3
    int64_t v12; // 0x143395
    *v11 = *v11 + (int32_t)(int64_t)&v12;
    int64_t v13 = v1 ? -1 : 1; // 0x1433c5
    int64_t v14 = v13 + a2; // 0x1433c5
    char * v15 = (char *)((a4 & 0xffffffff) + 5); // 0x1433c7
    *v15 = *v15 + (char)(v9 / 256);
    unsigned char v16 = *(char *)((v9 | (int64_t)v10) + 0x47539505); // 0x1433ca
    int32_t * v17 = (int32_t *)(v14 + 0x12af19da + 4 * ((a4 + 232 + (int64_t)(v16 > (char)a4)) % 256 | a4 & 0xffffff00)); // 0x1433d2
    *v17 = *v17 + (int32_t)v7;
    unsigned char v18 = v10 % 32;
    if (v18 != 0) {
        uint32_t v19 = *(int32_t *)&v3; // 0x1433db
        uint32_t v20 = (int32_t)v18; // 0x1433db
        *(int32_t *)v3 = v19 >> 32 - v20 | v19 << v20;
    }
    int64_t v21 = v13 + a1; // 0x1433c5
    unknown_6a217fe6(v21, v14);
    *(int32_t *)0x64d1d38 = 2 * *(int32_t *)0x64d1d38;
    int64_t v22 = v1 ? -4 : 4; // 0x1433ee
    int64_t v23 = unknown_ffffffffba98e1f5(v21 + v22, v14 + v22); // 0x1433ef
    return (v23 + 40) % 256 | v23 & -256;
}

// Address range: 0x143412 - 0x143413
int64_t function_143412(void) {
    // 0x143412
    int64_t result; // 0x143412
    return result;
}

// Address range: 0x143427 - 0x143453
int64_t function_143427(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x143427
    __asm_int(104);
    char v1 = a3; // 0x143429
    char * v2 = (char *)a3; // 0x143429
    int64_t v3; // 0x143427
    *v2 = (char)v3 + v1;
    int64_t v4; // 0x143427
    uint32_t result = *(int32_t *)&v4; // 0x14342e
    int64_t v5; // 0x143427
    *(char *)v5 = *(char *)&v5 + v1;
    char v6 = *(char *)(v5 + (int64_t)&g1); // 0x143431
    bool v7; // 0x143427
    char * v8 = (char *)((v7 ? -4 : 4) + a2); // 0x14343c
    *v8 = *v8 & (char)(v5 / 256);
    char * v9 = (char *)(v5 + 0x5f27c4a7); // 0x14343f
    char v10 = result; // 0x14343f
    *v9 = *v9 + v10;
    int64_t v11; // 0x143427
    *v2 = *(char *)&v11 + v10;
    char * v12 = (char *)((a4 & -256 | (int64_t)(v6 + (char)a4)) + 15); // 0x143449
    *v12 = *v12 + v1;
    __asm_out(122, result);
    return result;
}

// Address range: 0x143453 - 0x143502
int64_t function_143453(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x143453
    bool v1; // 0x143453
    int64_t v2 = (v1 ? -4 : 4) + a1; // 0x143453
    int64_t v3; // 0x143453
    *(char *)a3 = (char)v3 + (char)a4 + (char)((int32_t)v3 > (int32_t)v3);
    char v4 = *(char *)0xaf35755f; // 0x143465
    *(char *)0xaf35755f = (char)(v3 / 256) - *(char *)v2 + v4;
    char v5 = __asm_in(62); // 0x14346c
    *(int32_t *)0x7bca3cdf = *(int32_t *)0x7bca3cdf + (int32_t)a4;
    return (int64_t)v5 & -256 | v2 & 0xffffff00 | (int64_t)(v5 | -24);
}

// Address range: 0x1634aa - 0x163589
int64_t function_1634aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1634aa
    int64_t v1; // 0x1634aa
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(a1 + 52 + 4 * v2); // 0x1634ac
    *v3 = *v3 + (char)a4;
    return function_cdc60();
}

// Address range: 0x1635cd - 0x1635d7
int64_t function_1635cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1635cd
    int64_t v1; // 0x1635cd
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(a4 - 127); // 0x1635cf
    *v3 = *v3 + (char)a4;
    return function_7ed5af2b();
}

// Address range: 0x163662 - 0x163667
int64_t function_163662(int64_t a1) {
    // 0x163662
    int64_t v1; // 0x163662
    int64_t v2 = v1;
    return (v2 + 36) % 256 | v2 & -256;
}

// Address range: 0x16366e - 0x163671
int64_t function_16366e(int64_t a1) {
    // 0x16366e
    int64_t result; // 0x16366e
    return result;
}

// Address range: 0x1638aa - 0x1638b1
int64_t function_1638aa(void) {
    // 0x1638aa
    int64_t result; // 0x1638aa
    *(int32_t *)result = 0;
    return result;
}

// Address range: 0x1638f5 - 0x1638f7
int64_t function_1638f5(void) {
    // 0x1638f5
    return function_1638a1();
}

// Address range: 0x163900 - 0x163909
int64_t function_163900(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x163900
    int64_t result; // 0x163900
    int32_t * v1 = (int32_t *)(result + 0xe01e8d4); // 0x163900
    uint32_t v2 = *v1; // 0x163900
    uint32_t v3 = v2 + (int32_t)a3; // 0x163900
    *v1 = v3;
    int64_t v4; // 0x163900
    char v5 = *(char *)&v4; // 0x163906
    *(char *)a3 = v5 + (char)(result / 256) + (char)(v3 < v2);
    return result;
}

// Address range: 0x163919 - 0x163927
int64_t function_163919(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_1378491f(a1, a2, a3, a4); // 0x163919
    return (v1 + a4) % 256 | v1 & -256;
}

// Address range: 0x163928 - 0x16392b
int64_t function_163928(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x163928
    int64_t result; // 0x163928
    return result;
}

// Address range: 0x163931 - 0x163936
int64_t function_163931(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x163931
    int64_t result; // 0x163931
    return result;
}

// Address range: 0x163947 - 0x16394a
int64_t function_163947(int64_t a1) {
    // 0x163947
    int64_t result; // 0x163947
    return result;
}

// Address range: 0x163977 - 0x163978
int64_t function_163977(int64_t a1) {
    // 0x163977
    int64_t result; // 0x163977
    return result;
}

// Address range: 0x16399a - 0x1639a1
int64_t function_16399a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x16399a
    int64_t result; // 0x16399a
    return result;
}

// Address range: 0x1639a1 - 0x163a46
int64_t function_1639a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1639a1
    int64_t v1; // 0x1639a1
    int32_t * v2 = (int32_t *)((v1 & -256 | 156) - 0x1b280ac8); // 0x1639a6
    int32_t v3 = *v2 & -110; // 0x1639a6
    *v2 = v3;
    uint64_t v4 = unknown_ffffffffcdb9acb3(); // 0x1639ad
    if (v3 < 0) {
        // 0x163a25
        return unknown_7984572b();
    }
    int32_t v5 = a4; // 0x163a35
    int32_t v6 = a1; // 0x163a35
    int32_t v7 = v5 + v6; // 0x163a35
    if (((v7 ^ v5) & (v7 ^ v6)) >= 0) {
        // 0x163a41
        return unknown_6dcb647();
    }
    // 0x163a39
    return v4 / 2 & 57 | v4 & 0x97022300;
}

// Address range: 0x163a59 - 0x163a5c
int64_t function_163a59(int64_t a1) {
    // 0x163a59
    int64_t result; // 0x163a59
    return result;
}

// Address range: 0x163a5f - 0x163a64
int64_t function_163a5f(void) {
    // 0x163a5f
    return unknown_ffffffffcdd8cc65();
}
