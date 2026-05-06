/*
 * Targeted RetDec C for native executable gap queue batch 317.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x14c313-0x14c513 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14c913-0x14cb13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14cb13-0x14cd13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x192e85-0x193085 rank=- name=- kind=- bytes=- uncovered=-
 *   0x193485-0x193685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d145a-0x1d165a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d165a-0x1d185a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d185a-0x1d1a5a rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
extern int g6;
extern int g7;
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

int64_t function_14c313(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14c3f3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_14c45a(int64_t a1, int64_t a2);
int64_t function_14c4a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14c913(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14c925(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_14cab3(void);
int64_t function_14cabd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14cb4c(void);
int64_t function_14cb84(void);
int64_t function_14cb9d(void);
int64_t function_14cbde(void);
int64_t function_14cc01(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14cc63(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14cc93(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14ccb9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14ccd9(int64_t a1);
int64_t function_192e5a();
int64_t function_192e85(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_192f2e(int64_t a1);
int64_t function_192f3a(int64_t a1, int64_t a2);
int64_t function_192f78(int64_t a1);
int64_t function_192f7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_192fa3(void);
int64_t function_192fe6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19307d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_193080(void);
int64_t function_193485(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1934bb(int64_t a1);
int64_t function_1934bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_193535(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_193590(int64_t a1);
int64_t function_1935a3(int64_t a1);
int64_t function_1935de(int64_t a1);
int64_t function_1935ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d1426();
int64_t function_1d145a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d14a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d14c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d15a7(int64_t a1);
int64_t function_1d15cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d15d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d15dc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d15f2(void);
int64_t function_1d1602(void);
int64_t function_1d1641(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d16d3(int64_t a1);
int64_t function_1d1717(void);
int64_t function_1d1725(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d1727(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d1839(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1d187a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d18f9(int64_t a1);
int64_t function_1d1906(void);
int64_t function_1d1920(void);
int64_t function_1d1924(int64_t a1);
int64_t function_1d192a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d1942(int64_t a1);
int64_t function_1d1947(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d197c(void);
int64_t function_1d1980(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1d19ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d19cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35355bfd();
int64_t function_3f6d7054();
int64_t function_6a1ea3b2();
int64_t function_ffffffff80211904();
int64_t function_ffffffffc8d8bc70();
int64_t function_ffffffffd7d8a164();
int64_t unknown_18ca3f27();
int64_t unknown_1c53d6a0();
int64_t unknown_2a3d2b1d();
int64_t unknown_348e5b3b();
int64_t unknown_3a43efab();
int64_t unknown_3e818ab();
int64_t unknown_44095d6d();
int64_t unknown_47e9ef60();
int64_t unknown_583bb1c2();
int64_t unknown_6c212747();
int64_t unknown_6feeda1();
int64_t unknown_72b4af49();
int64_t unknown_7c0dfdb8();
int64_t unknown_cdd8ccf();
int64_t unknown_ffffffff85f354c1();
int64_t unknown_ffffffff910a6169();
int64_t unknown_ffffffff931e2bf6();
int64_t unknown_ffffffffb4329f7e();
int64_t unknown_ffffffffbe3b2ab4();
int64_t unknown_ffffffffd8c8824c();
int64_t unknown_ffffffffdd12d20c();
int64_t unknown_ffffffffe36ed83f();
int64_t unknown_ffffffffe8160918();
int64_t unknown_ffffffffe81a6bc0();
int64_t unknown_fffffffffb11a14a();

// Address range: 0x14c313 - 0x14c37c
int64_t function_14c313(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14c313
    int64_t v1; // 0x14c313
    int64_t result = v1;
    int64_t v2 = a4;
    if (*(char *)(a3 - 0x72eefc97) <= (char)a4) {
        // 0x14c37d
        return result;
    }
    // 0x14c31b
    *(int32_t *)result = 2 * (int32_t)result;
    int32_t v3 = result & 0xffffff00 | (int64_t)__asm_in(-0x595d); // 0x14c338
    uint32_t v4 = v3 >> 31; // 0x14c338
    char * v5 = (char *)(v2 + 8 * v1); // 0x14c339
    *v5 = *v5 + (char)(v4 / 256);
    int64_t v6 = v2;
    if (v3 < 0x68e30701) {
        int32_t * v7 = (int32_t *)(v6 - 0x26629f01); // 0x14c371
        *v7 = -1 - *v7;
        char * v8 = (char *)(a2 - 24); // 0x14c377
        *v8 = *v8 ^ (char)(v1 / 256);
        *(int32_t *)v2 = *(int32_t *)&v2 + 0x543b1025;
        return 0x3d8005f;
    }
    // 0x14c348
    bool v9; // 0x14c313
    int64_t v10 = (v9 ? -4 : 4) + a1; // 0x14c337
    int32_t * v11 = (int32_t *)(v6 + 0xa100 & 0xff00 | v6 & -0xff01); // 0x14c34a
    *v11 = *v11 + (int32_t)v1;
    *(int32_t *)-0x17fec2fe172d0a2f = 0x3d8005f;
    int64_t v12 = 2 * ((v10 + 219) % 256 | v10 & 0x7fffff00); // 0x14c359
    int32_t * v13 = (int32_t *)v12; // 0x14c35b
    *v13 = *v13 + (int32_t)a2;
    int32_t * v14 = (int32_t *)(v12 + 25); // 0x14c35f
    *v14 = *v14 + 0x60fe17c6;
    __asm_out((int16_t)v4, 0x3d8004e);
    return 0x3d8004e;
}

// Address range: 0x14c3f3 - 0x14c42e
int64_t function_14c3f3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x14c3f3
    int64_t v1; // 0x14c3f3
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a2;
    unsigned char v2 = (char)(a4 / 256); // 0x14c3f6
    unsigned char v3 = (char)v1; // 0x14c3f6
    char v4 = v2 - v3; // 0x14c3f6
    uint64_t v5 = 256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v2 < v3) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v2 % 16 - v3 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v4) % 2 == 0)) | 512; // 0x14c3fa
    int64_t v6 = v5 | v1 & -0xff01; // 0x14c3fa
    char * v7 = (char *)(v6 + 0x4eec0000); // 0x14c404
    *v7 = *v7 + v3;
    char * v8 = (char *)(v1 + 0x2b01e800); // 0x14c40a
    *v8 = *v8 + (char)(v5 / 256);
    char * v9 = (char *)(v1 - 0x78ff6686); // 0x14c410
    *v9 = *v9 - 74;
    __asm_int(-66);
    char * v10 = (char *)(v6 & 0xffffffff); // 0x14c423
    *v10 = *v10 + (char)v1;
    return 0xe83f91fe;
}

// Address range: 0x14c45a - 0x14c47f
int64_t function_14c45a(int64_t a1, int64_t a2) {
    // 0x14c45a
    unknown_47e9ef60();
    int64_t v1; // 0x14c45a
    int32_t * v2 = (int32_t *)(a2 - 0x2948feb9 + 8 * v1); // 0x14c45f
    while (true) {
        // 0x14c45f
        *v2 = *v2 + (int32_t)a2;
        unknown_44095d6d();
        __asm_wait();
        unknown_ffffffffb4329f7e();
    }
}

// Address range: 0x14c4a1 - 0x14c4ba
int64_t function_14c4a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14c4a1
    unknown_3a43efab();
    bool v1; // 0x14c4a1
    return unknown_7c0dfdb8((v1 ? -1 : 1) + a1);
}

// Address range: 0x14c913 - 0x14c924
int64_t function_14c913(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x14c913
    return (int64_t)*(int32_t *)0x720fe978013d000e;
}

// Address range: 0x14c925 - 0x14c9c7
int64_t function_14c925(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    char * v2 = (char *)(a4 + 0x10979791); // 0x14c927
    int64_t v3; // 0x14c925
    bool v4; // 0x14c925
    *v2 = (char)v4 + (char)(v3 / 256) + *v2;
    int64_t v5 = unknown_6c212747(); // 0x14c941
    int64_t v6; // 0x14c925
    *(char *)v6 = *(char *)&v6 ^ 41;
    uint32_t v7 = *(int32_t *)&v1; // 0x14c949
    uint32_t v8 = (int32_t)a4 % 32; // 0x14c949
    int32_t v9 = v7; // 0x14c949
    if (v8 != 0) {
        *(int32_t *)v1 = v7 >> v8 | v7 << 32 - v8;
        v9 = *(int32_t *)&v1;
    }
    int32_t v10 = 0x10000 * (int32_t)v5 >> 16; // 0x14c94b
    int64_t v11 = 257 * a4 & 0xff00 | a4 & -0xff01; // 0x14c94c
    *(int32_t *)v1 = 2 * v9;
    unsigned char v12 = *(char *)-0x30a5f1a9; // 0x14c950
    unsigned char v13 = v12 + (char)(v6 / 256); // 0x14c950
    *(char *)-0x30a5f1a9 = v13;
    int64_t result = v10 & -0x7e793200 | v10 - (v13 < v12 ? 102 : 101) & 155 | 0x7e793164; // 0x14c959
    int32_t * v14 = (int32_t *)v11; // 0x14c95e
    *v14 = *v14 ^ -0x47fcdda;
    float32_t v15 = *(float32_t *)(v11 + 0x3d832d00); // 0x14c964
    int32_t * v16 = (int32_t *)result; // 0x14c96a
    int32_t v17 = *v16; // 0x14c96a
    int32_t v18 = a1; // 0x14c96a
    int32_t v19 = v17 + v18; // 0x14c96a
    *v16 = v19;
    if (((v19 ^ v17) & (v19 ^ v18)) >= 0) {
        if (v19 < 0) {
            // 0x14c970
            return result;
        }
        int64_t v20 = a6; // bp-32, 0x14c978
        char v21; // 0x14c925
        int32_t v22 = *(int32_t *)(a2 - v3 + (int64_t)(v21 > -1 - (char)((int64_t)&v20 / 256)) & 0xffffffff); // 0x14c989
        *(int32_t *)a1 = v22;
        int64_t v23 = v4 ? -4 : 4; // 0x14c989
        float80_t v24; // 0x14c925
        *(int64_t *)(8 * v3 + a1 + v23) = (int64_t)(v24 - (float80_t)v15);
        unsigned char v25 = *(char *)0x1520ec0; // 0x14c992
        char v26 = v25 / 128; // 0x14c992
        *(char *)0x1520ec0 = v26 | 2 * v25;
        int32_t * v27 = (int32_t *)(v1 & -0xff01 | (int64_t)&g7); // 0x14c99a
        *v27 = *v27 - (int32_t)a6 + (int32_t)(v26 != 0);
        return v3 + 0xe872fa4e & 0xffffffff;
    }
    int64_t v28 = a1; // 0x14c9a8
    int32_t * v29 = (int32_t *)(v1 + 0x4174286a); // 0x14c9aa
    int32_t v30 = v3 + result & 0xffffffff; // 0x14c9aa
    *v29 = *v29 + v30;
    *(int32_t *)v28 = v30;
    v28 += (v4 ? -4 : 4);
    unsigned char v31 = *(char *)-0x17080b60; // 0x14c9b1
    char v32 = v31 / 128; // 0x14c9b1
    *(char *)-0x17080b60 = v32 | 2 * v31;
    int64_t v33 = unknown_583bb1c2(v28); // 0x14c9b8
    unsigned char v34 = (char)v33; // 0x14c9bd
    unsigned char v35 = v34 - 89 + (char)(v32 != 0); // 0x14c9bd
    int64_t v36 = v33 & -256 | (int64_t)v35; // 0x14c9bd
    while (v35 == 0 || (v32 != 0 ? v35 <= v34 : v34 > 88)) {
        // 0x14c9aa
        v29 = (int32_t *)(v1 + 0x4174286a);
        v30 = v36;
        *v29 = *v29 + v30;
        *(int32_t *)v28 = v30;
        v28 += (v4 ? -4 : 4);
        v31 = *(char *)-0x17080b60;
        v32 = v31 / 128;
        *(char *)-0x17080b60 = v32 | 2 * v31;
        v33 = unknown_583bb1c2(v28);
        v34 = (char)v33;
        v35 = v34 - 89 + (char)(v32 != 0);
        v36 = v33 & -256 | (int64_t)v35;
    }
    // 0x14c9c2
    return v6 + v36 & 0xffffffff;
}

// Address range: 0x14cab3 - 0x14cab6
int64_t function_14cab3(void) {
    // 0x14cab3
    int64_t result; // 0x14cab3
    return result;
}

// Address range: 0x14cabd - 0x14cac6
int64_t function_14cabd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a3 + 0xcb0b0f); // 0x14cabd
    *v1 = *v1 + 1;
    return a4 & 0xffffffff;
}

// Address range: 0x14cb4c - 0x14cb51
int64_t function_14cb4c(void) {
    // 0x14cb4c
    return function_6a1ea3b2();
}

// Address range: 0x14cb84 - 0x14cb85
int64_t function_14cb84(void) {
    // 0x14cb84
    int64_t result; // 0x14cb84
    return result;
}

// Address range: 0x14cb9d - 0x14cb9e
int64_t function_14cb9d(void) {
    // 0x14cb9d
    int64_t result; // 0x14cb9d
    return result;
}

// Address range: 0x14cbde - 0x14cbe0
int64_t function_14cbde(void) {
    // 0x14cbde
    int64_t result; // 0x14cbde
    return result;
}

// Address range: 0x14cc01 - 0x14cc4c
int64_t function_14cc01(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14cc01
    int64_t v1; // 0x14cc01
    bool v2; // 0x14cc01
    if (v2) {
        v1 = function_14cb84();
    }
    int64_t v3 = v1 & 0xffffffff; // 0x14cc08
    char v4 = *(char *)(3 * a4); // 0x14cc0b
    int64_t v5 = unknown_ffffffffe8160918(v3); // 0x14cc12
    uint32_t v6 = (int32_t)(a3 & 0xffffff00 | (int64_t)(v4 ^ (char)a3)) + (int32_t)v1; // 0x14cc17
    int64_t v7 = (a4 & -0xff01 | (int64_t)&g5) - 1; // 0x14cc19
    int64_t v8 = v5; // 0x14cc19
    if (v7 != 0 == v6 == 0) {
        v8 = function_14cb9d();
    }
    int32_t * v9 = (int32_t *)((int64_t)v6 + 112); // 0x14cc1b
    int32_t v10 = v7; // 0x14cc1b
    *v9 = *v9 ^ v10;
    uint32_t v11 = (int32_t)v8 >> 31; // 0x14cc1e
    int64_t v12 = v11; // 0x14cc1e
    int64_t v13 = unknown_18ca3f27(); // 0x14cc21
    int32_t * v14 = (int32_t *)(v12 + 0xad845); // 0x14cc38
    int64_t v15; // 0x14cc01
    *v14 = v10 - 24 + (int32_t)v15 + *(int32_t *)v12 + *v14;
    *(int32_t *)v3 = __asm_insd((int16_t)v11);
    char * v16 = (char *)(v13 + 42); // 0x14cc41
    *v16 = *v16 + (char)v11;
    return unknown_fffffffffb11a14a();
}

// Address range: 0x14cc63 - 0x14cc6e
int64_t function_14cc63(int64_t a1, int64_t a2, int64_t a3) {
    // 0x14cc63
    unknown_ffffffff910a6169(a1, a2, a3);
    return a3 & 0xffffffff;
}

// Address range: 0x14cc93 - 0x14ccb8
int64_t function_14cc93(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x14cc93
    __asm_fbld(*(float80_t *)(a4 + 0x244ebcba));
    unknown_1c53d6a0();
    int64_t result = unknown_3e818ab(); // 0x14cca5
    __asm_out_134(-96, (char)result);
    *(int32_t *)-0x71ac87fe173e3a37 = (int32_t)result;
    return result;
}

// Address range: 0x14ccb9 - 0x14ccc7
int64_t function_14ccb9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14ccb9
    unknown_ffffffff85f354c1(a1, a2, a3, a4);
    return function_3f6d7054();
}

// Address range: 0x14ccd9 - 0x14ccda
int64_t function_14ccd9(int64_t a1) {
    // 0x14ccd9
    int64_t result; // 0x14ccd9
    return result;
}

// Address range: 0x192e85 - 0x192ef9
int64_t function_192e85(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 & -256 | 16; // 0x192e85
    int64_t v2 = -0x6bd26c00; // bp-8, 0x192e8d
    int32_t * v3 = (int32_t *)(a1 + 0x6f9dcf9a); // 0x192e97
    int32_t v4 = *v3 + (int32_t)v1; // 0x192e97
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x192e97
    *v3 = v4;
    int64_t v6; // 0x192e85
    if (v5 % 2 == 0) {
        v6 = function_192e5a();
    }
    int32_t * v7 = (int32_t *)(v6 + 80); // 0x192e9f
    int32_t v8 = a3; // 0x192e9f
    *v7 = *v7 + v8;
    int64_t v9; // 0x192e85
    uint32_t v10 = 83 * *(int32_t *)(v9 - 0xecbef63); // 0x192ea2
    char * v11 = (char *)(int64_t)v10; // 0x192ea9
    *v11 = *v11 + (char)v10;
    *(char *)a3 = 16;
    unknown_ffffffffe81a6bc0();
    int32_t * v12 = (int32_t *)(v1 - 55); // 0x192ebf
    *v12 = *v12 + v8;
    int64_t v13 = unknown_cdd8ccf(); // 0x192ec8
    unsigned char v14 = (char)v13 - 39; // 0x192ece
    int64_t result = v13 & -256 | (int64_t)v14; // 0x192ece
    if (v14 != 0) {
        // 0x192ed2
        return result;
    }
    int32_t * v15 = (int32_t *)(a3 + 0x1e8a46f); // 0x192ef1
    *v15 = *v15 + (int32_t)(int64_t)&v2;
    char * v16 = (char *)result; // 0x192ef7
    *v16 = *v16 + (char)a3;
    return result;
}

// Address range: 0x192f2e - 0x192f31
int64_t function_192f2e(int64_t a1) {
    // 0x192f2e
    int64_t result; // 0x192f2e
    return result;
}

// Address range: 0x192f3a - 0x192f40
int64_t function_192f3a(int64_t a1, int64_t a2) {
    // 0x192f3a
    int64_t result; // 0x192f3a
    int32_t * v1 = (int32_t *)(8 * result + a1); // 0x192f3a
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x192f78 - 0x192f79
int64_t function_192f78(int64_t a1) {
    // 0x192f78
    int64_t result; // 0x192f78
    return result;
}

// Address range: 0x192f7a - 0x192f99
int64_t function_192f7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x192f7a
    float80_t v1; // 0x192f7a
    *(int16_t *)(a3 + 0x9b47635) = (int16_t)v1;
    int64_t result; // 0x192f7a
    int32_t * v2 = (int32_t *)(result - 68); // 0x192f86
    *v2 = *v2 + (int32_t)result;
    char * v3 = (char *)(result - 0x1748b330); // 0x192f8f
    *v3 = *v3 | 1;
    return result;
}

// Address range: 0x192fa3 - 0x192fa4
int64_t function_192fa3(void) {
    // 0x192fa3
    int64_t result; // 0x192fa3
    return result;
}

// Address range: 0x192fe6 - 0x192ff8
int64_t function_192fe6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    function_192fa3();
    // 0x192fe8
    return unknown_ffffffff931e2bf6();
}

// Address range: 0x19307d - 0x193080
int64_t function_19307d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19307d
    return a4 & 0xffffffff;
}

// Address range: 0x193080 - 0x193081
int64_t function_193080(void) {
    // 0x193080
    int64_t result; // 0x193080
    return result;
}

// Address range: 0x193485 - 0x193495
int64_t function_193485(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x193485
    int64_t v1; // 0x193485
    *(char *)0x2c11f88c = *(char *)0x2c11f88c + (char)(v1 / 256);
    unsigned char v2 = (char)a4 % 32; // 0x19348b
    if (v2 != 0) {
        char * v3 = (char *)(v1 + 20); // 0x19348b
        *v3 = *v3 << v2;
    }
    return function_35355bfd();
}

// Address range: 0x1934bb - 0x1934bc
int64_t function_1934bb(int64_t a1) {
    // 0x1934bb
    int64_t result; // 0x1934bb
    return result;
}

// Address range: 0x1934bd - 0x1934d9
int64_t function_1934bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1934bd
    int64_t v1; // 0x1934bd
    unsigned char v2 = (char)v1; // 0x1934c2
    unsigned char v3 = *(char *)(v1 - 0x380a6e22) + v2; // 0x1934c2
    return v1 + 0x3d004ff2 + (v1 & 0xffffff00 | (int64_t)v3) + (int64_t)(v3 < v2) & 0xffffffff;
}

// Address range: 0x193535 - 0x193543
int64_t function_193535(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x193535
    int64_t v1; // 0x193535
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)v1;
    int64_t v3; // 0x193535
    *(int32_t *)a1 = *(int32_t *)&v3;
    int64_t result; // 0x193535
    int64_t v4 = result;
    *(char *)v4 = *(char *)&result + (char)v4;
    char * v5 = (char *)(v2 + 0x3d000002); // 0x19353a
    *v5 = *v5 + (char)a4;
    int64_t v6 = result;
    *(int32_t *)v6 = *(int32_t *)&result + (int32_t)v6;
    return result;
}

// Address range: 0x193590 - 0x193591
int64_t function_193590(int64_t a1) {
    // 0x193590
    int64_t result; // 0x193590
    return result;
}

// Address range: 0x1935a3 - 0x1935a8
int64_t function_1935a3(int64_t a1) {
    // 0x1935a3
    int64_t v1; // 0x1935a3
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x1935de - 0x1935e4
int64_t function_1935de(int64_t a1) {
    // 0x1935de
    int64_t result; // 0x1935de
    return result;
}

// Address range: 0x1935ed - 0x1935fd
int64_t function_1935ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1935ed
    int64_t v1; // 0x1935ed
    *(int32_t *)((a3 & 0xffffffff) + 91) = (int32_t)(int64_t)&v1;
    return function_ffffffffc8d8bc70();
}

// Address range: 0x1d145a - 0x1d1492
int64_t function_1d145a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(4 * a2 + a1); // 0x1d145a
    int64_t v2; // 0x1d145a
    int32_t v3 = v2; // 0x1d145a
    *v1 = *v1 + v3;
    int64_t v4; // 0x1d145a
    uint32_t v5 = *(int32_t *)&v4; // 0x1d145d
    int64_t v6; // 0x1d145a
    uint32_t v7 = *(int32_t *)&v6; // 0x1d145d
    bool v8; // 0x1d145a
    int64_t v9 = (v8 ? -4 : 4) + a1; // 0x1d145d
    v6 = v9;
    *(int32_t *)v9 = __asm_insd((int16_t)v2);
    int64_t v10 = a3 & 0xffffffff; // 0x1d1460
    if (v5 <= v7) {
        v10 = function_1d1426();
    }
    int32_t * v11 = (int32_t *)(a4 + 0x357a7a00); // 0x1d1462
    *v11 = (int32_t)(v5 < v7) - v3 + *v11;
    char * v12 = (char *)(v10 - 29); // 0x1d146f
    *v12 = *v12 + (char)v10;
    int32_t * v13 = (int32_t *)((v10 + 0x5701e8ec & 0xffffffff) + 0x31fe01e8); // 0x1d1484
    *v13 = *v13 + (int32_t)v2;
    return __asm_in_133(-74);
}

// Address range: 0x1d14a6 - 0x1d14c2
int64_t function_1d14a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffffbe3b2ab4(); // 0x1d14a8
    __asm_out_135((int16_t)a3, (char)v1);
    int32_t * v2 = (int32_t *)(a1 - 0x22fec258); // 0x1d14b5
    *v2 = *v2 + (int32_t)a4;
    return v1 ^ 218;
}

// Address range: 0x1d14c6 - 0x1d1577
int64_t function_1d14c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1d14c6
    int64_t v1; // 0x1d14c6
    int32_t * v2 = (int32_t *)(v1 + 16); // 0x1d14c6
    uint32_t v3 = *v2; // 0x1d14c6
    int32_t v4 = -v3; // 0x1d14c6
    *v2 = v4;
    int64_t result = v1 & -256; // 0x1d14c9
    int32_t v5 = result; // 0x1d14e9
    bool v6; // 0x1d14c6
    *(int32_t *)((v6 ? -1 : 1) + a1) = v5;
    if (a4 != 1 || v5 > -0x2a0c20ff) {
        // 0x1d14f7
        return result;
    }
    unsigned char v7 = llvm_ctpop_i8((char)v4); // 0x1d14c6
    __asm_hlt();
    __asm_wait();
    return 0x4000 * (int64_t)v6 | 1024 * (int64_t)v6 | 512 * (int64_t)v6 | 256 * (int64_t)v6 | (int64_t)(v3 != 0) | 64 * (int64_t)(v3 == 0) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(-((v3 % 16)) > 15) | 4 * (int64_t)(v7 % 2 == 0) | 2;
}

// Address range: 0x1d15a7 - 0x1d15a8
int64_t function_1d15a7(int64_t a1) {
    // 0x1d15a7
    int64_t result; // 0x1d15a7
    return result;
}

// Address range: 0x1d15cc - 0x1d15d7
int64_t function_1d15cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1d15cc
    int64_t v1; // 0x1d15cc
    return a4 == 0 ? 0 : v1;
}

// Address range: 0x1d15d9 - 0x1d15db
int64_t function_1d15d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d15d9
    int64_t result; // 0x1d15d9
    *(char *)a4 = (char)(result & result);
    return result;
}

// Address range: 0x1d15dc - 0x1d15e7
int64_t function_1d15dc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1d15dc
    float80_t v1; // 0x1d15dc
    *(int64_t *)(a3 + 0x1e84acc) = (int64_t)v1;
    return function_ffffffffd7d8a164();
}

// Address range: 0x1d15f2 - 0x1d15fb
int64_t function_1d15f2(void) {
    // 0x1d15f2
    int64_t result; // 0x1d15f2
    return result;
}

// Address range: 0x1d1602 - 0x1d1605
int64_t function_1d1602(void) {
    // 0x1d1602
    int64_t result; // 0x1d1602
    return result;
}

// Address range: 0x1d1641 - 0x1d165c
int64_t function_1d1641(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_72b4af49(); // 0x1d1643
    uint32_t v1 = (int32_t)a4 % 32; // 0x1d1649
    int64_t v2 = a2; // 0x1d1649
    int64_t v3; // 0x1d1641
    if (v1 != 0) {
        v2 = (int32_t)a2 >> v1 | (int32_t)((a2 & 0xffffffff) << (int64_t)(33 - v1)) | (int32_t)((char)v3 > 3) << 32 - v1;
    }
    int32_t * v4 = (int32_t *)(v2 - 0x76175c39); // 0x1d164f
    *v4 = *v4 + (int32_t)v3;
    *(char *)(result + 13) = 10;
    return result;
}

// Address range: 0x1d16d3 - 0x1d16d6
int64_t function_1d16d3(int64_t a1) {
    // 0x1d16d3
    int64_t result; // 0x1d16d3
    return result;
}

// Address range: 0x1d1717 - 0x1d1724
int64_t function_1d1717(void) {
    // 0x1d1717
    unknown_2a3d2b1d();
    int64_t v1; // 0x1d1717
    return function_1d1727(v1, v1, v1, v1, -0x423fd429);
}

// Address range: 0x1d1725 - 0x1d1727
int64_t function_1d1725(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d1725
    int64_t result; // 0x1d1725
    *(int32_t *)a4 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x1d1727 - 0x1d17a0
int64_t function_1d1727(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = a5; // 0x1d172b
    char v2 = a4; // 0x1d172b
    char v3 = v1 + v2; // 0x1d172b
    int32_t v4 = a3;
    bool v5 = v3 < 0; // 0x1d172b
    bool v6 = ((v3 ^ v1) & (v3 ^ v2)) < 0; // 0x1d172b
    int64_t v7; // 0x1d1727
    int32_t * v8 = (int32_t *)((v7 & 0xffffffff) + 0x6e0ad8f0); // 0x1d172b
    while (v5 == v6) {
        int32_t v9 = *v8; // 0x1d1734
        int32_t v10 = v9 + v4; // 0x1d1734
        *v8 = v10;
        __asm_int(-22);
        int64_t result = __asm_sti(); // 0x1d1742
        v5 = v10 < 0;
        v6 = false;
        v8 = (int32_t *)0xcf2eee78;
        if (((v10 ^ v9) & (v10 ^ v4)) < 0) {
            // 0x1d1745
            *(int32_t *)0xe8b38d42 = *(int32_t *)0xe8b38d42 + v4;
            return result;
        }
    }
    // 0x1d1793
    return unknown_6feeda1();
}

// Address range: 0x1d1839 - 0x1d186b
int64_t function_1d1839(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a7;
    int64_t v2; // 0x1d1839
    int64_t v3 = v2 ^ a3 & 0xff00; // 0x1d1839
    int32_t * v4 = (int32_t *)((a6 & 0xffffffff & v2) + 11); // 0x1d183e
    *v4 = *v4 + (int32_t)v3;
    char v5 = *(char *)(v3 - 70); // 0x1d1841
    int32_t * v6 = (int32_t *)(256 * (int64_t)((char)(a4 / 256) - v5) | a4 & -0xff01); // 0x1d1844
    *v6 = *v6 - 1;
    int64_t v7 = unknown_ffffffffd8c8824c(); // 0x1d1846
    int64_t v8; // 0x1d1839
    char v9 = *(char *)&v8; // 0x1d184b
    char * v10 = (char *)(8 * v3 - 0x29fe1800 + (int64_t)&v1); // 0x1d184d
    unsigned char v11 = *v10; // 0x1d184d
    unsigned char v12 = (char)a4; // 0x1d184d
    *v10 = v11 - v12;
    int32_t v13 = v11 < v12 ? -0x44ff7fff : -0x44ff8000; // 0x1d1856
    if (v13 < (int32_t)(v7 & 0xffffff00 || (int64_t)(v9 || (char)v7))) {
        int32_t * v14 = (int32_t *)(a3 + 1); // 0x1d1860
        int64_t v15; // bp+16, 0x1d1839
        *v14 = *v14 + (int32_t)(int64_t)&v15;
    }
    // 0x1d1863
    return function_ffffffff80211904();
}

// Address range: 0x1d187a - 0x1d18a1
int64_t function_1d187a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(9 * a4); // 0x1d1880
    *v1 = *v1 + (int32_t)a4;
    int64_t result = __asm_iretd(a1, a2); // 0x1d1888
    int64_t v2; // 0x1d187a
    *(char *)result = *(char *)&v2 - (char)result;
    *(int32_t *)0x968588d4 = *(int32_t *)0x968588d4 & (int32_t)a1;
    *(char *)0x968588b1 = *(char *)0x968588b1 - (char)a4;
    return result;
}

// Address range: 0x1d18f9 - 0x1d18fb
int64_t function_1d18f9(int64_t a1) {
    // 0x1d18f9
    int64_t result; // 0x1d18f9
    return result;
}

// Address range: 0x1d1906 - 0x1d190d
int64_t function_1d1906(void) {
    // 0x1d1906
    unknown_ffffffffdd12d20c();
    int64_t v1; // 0x1d1906
    return function_1d1947(v1, v1, v1, v1);
}

// Address range: 0x1d1920 - 0x1d1922
int64_t function_1d1920(void) {
    // 0x1d1920
    int64_t v1; // 0x1d1920
    return function_1d192a(v1, v1, v1);
}

// Address range: 0x1d1924 - 0x1d1927
int64_t function_1d1924(int64_t a1) {
    // 0x1d1924
    int64_t result; // 0x1d1924
    return result;
}

// Address range: 0x1d192a - 0x1d193e
int64_t function_1d192a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1d192a
    *(char *)-0x106354b5 = *(char *)-0x106354b5 + (char)a3;
    unknown_348e5b3b();
    return a3 & 0xffffffff;
}

// Address range: 0x1d1942 - 0x1d1945
int64_t function_1d1942(int64_t a1) {
    // 0x1d1942
    int64_t result; // 0x1d1942
    return result;
}

// Address range: 0x1d1947 - 0x1d1949
int64_t function_1d1947(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d1947
    int64_t result; // 0x1d1947
    return result;
}

// Address range: 0x1d197c - 0x1d197d
int64_t function_1d197c(void) {
    // 0x1d197c
    int64_t result; // 0x1d197c
    return result;
}

// Address range: 0x1d1980 - 0x1d19a8
int64_t function_1d1980(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1d1980
    int64_t result; // 0x1d1980
    bool v1; // 0x1d1980
    if (!v1) {
        // 0x1d1982
        return result;
    }
    // 0x1d199b
    *(int32_t *)a2 = (int32_t)a2 - (int32_t)a1;
    int64_t v2; // 0x1d1980
    *(char *)a1 = (char)v2;
    if ((char)(a3 / 256) - *(char *)(v2 + 0x13d00b3) >= 0) {
        result = function_1d197c();
    }
    // 0x1d1982
    return result;
}

// Address range: 0x1d19ac - 0x1d19cb
int64_t function_1d19ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d19ac
    int64_t result; // 0x1d19ac
    char * v1 = (char *)(result + 0x7e69923a); // 0x1d19ac
    *v1 = *v1 - 49;
    *(char *)0x5718a7c0 = *(char *)0x5718a7c0 + (char)(result / 256);
    int64_t v2; // 0x1d19ac
    *(int32_t *)a1 = *(int32_t *)&v2 + (int32_t)a3;
    return result;
}

// Address range: 0x1d19cb - 0x1d1a53
int64_t function_1d19cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x1d19cb
    int32_t * v3 = (int32_t *)(v2 - 89); // 0x1d19cd
    *v3 = *v3 + (int32_t)a3;
    uint32_t v4 = (int32_t)v2; // 0x1d19d3
    int32_t v5 = *(int32_t *)&v1; // 0x1d19d8
    int32_t v6 = v4 < 0xad6c0001; // 0x1d19d8
    uint32_t v7 = v6 + v4 + v5; // 0x1d19d8
    int32_t v8 = v7 + v6; // 0x1d19d8
    *(int32_t *)0x3a930feb0ca4bb09 = v7;
    char v9 = __asm_in((int16_t)a3); // 0x1d19e3
    if (((v8 ^ v4) & (v8 ^ v5)) >= 0) {
        int64_t v10 = v9; // 0x1d19e3
        return v10 & 104 | (v10 | (int64_t)v7) & -256 | 151;
    }
    // 0x1d1a16
    bool v11; // 0x1d19cb
    int64_t v12 = v11 ? -4 : 4; // 0x1d19d2
    int64_t v13 = v12 + a1; // 0x1d19d2
    int32_t * v14 = (int32_t *)(v13 + 0x29dc9c9e); // 0x1d1a1b
    *v14 = *v14 >> 22;
    char v15 = *(char *)0x63dc7932; // 0x1d1a2b
    *(char *)0x63dc7932 = v15 + (char)(((int64_t)&g6 & -256 | 215) >> 8);
    *(int32_t *)(a2 - 99 + v12) = (int32_t)v2 & -0x10000 | (int32_t)((int64_t)&g6 & -256 | 215);
    int64_t v16 = v13 + v12; // 0x1d1a34
    int64_t result = unknown_ffffffffe36ed83f(v16); // 0x1d1a39
    *(int32_t *)-0x6ae0fdb2 = *(int32_t *)-0x6ae0fdb2 + (int32_t)v16;
    return result;
}
