/*
 * Targeted RetDec C for native executable gap queue batch 402.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1d4c5a-0x1d4e5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d4e5a-0x1d505a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d505a-0x1d525a rank=- name=- kind=- bytes=- uncovered=-
 *   0x25eec2-0x25f0c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25f0c2-0x25f2c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25f2c2-0x25f4c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25f4c2-0x25f6c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25f6c2-0x25f8c2 rank=- name=- kind=- bytes=- uncovered=-
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
int128_t __asm_pavgw(int128_t left, int128_t right);
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

int64_t function_162f8de();
int64_t function_1a8baa0b();
int64_t function_1d4c24();
int64_t function_1d4c5a(int64_t result);
int64_t function_1d4caf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d4cce(void);
int64_t function_1d4cd5(void);
int64_t function_1d4d08(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d4d1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d4d45(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_1d4d64(void);
int64_t function_1d4d70(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d4d8a(int64_t a1);
int64_t function_1d4d92(void);
int64_t function_1d4db7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d4de1(int64_t a1);
int64_t function_1d4de5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d4e09(void);
int64_t function_1d4e37(void);
int64_t function_1d4e47(void);
int64_t function_1d4e94(void);
int64_t function_1d4e96(int64_t a1);
int64_t function_1d4eea(void);
int64_t function_1d4efc(void);
int64_t function_1d4f03(int64_t a1);
int64_t function_1d4f1a(void);
int64_t function_1d4f65(int64_t a1);
int64_t function_1d4fcb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d505d(int64_t a1, int64_t a2);
int64_t function_1d507b(void);
int64_t function_1d50dc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1d5106(void);
int64_t function_1d510a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d51ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d5219(int64_t a1);
int64_t function_25eec2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25eee2(int64_t a1);
int64_t function_25eeee(int64_t a1);
int64_t function_25ef05(void);
int64_t function_25ef3f(int64_t a1);
int64_t function_25ef8d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_25efed(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_25f062(int64_t a1);
int64_t function_25f0a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_25f28a(int64_t a1);
int64_t function_25f32a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_25f379(int64_t a1);
int64_t function_25f37f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25f386(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_25f463(void);
int64_t function_25f47e(void);
int64_t function_25f4ea(void);
int64_t function_25f4fe(void);
int64_t function_25f560(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25f634(int64_t a1);
int64_t function_25f642(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25f66b(void);
int64_t function_25f68e(int64_t a1);
int64_t function_25f696(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_25f750(int64_t a1);
int64_t function_25f753(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25f76e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25f7ac(void);
int64_t function_25f7db(int64_t a1, int64_t a2, int64_t a3);
int64_t function_25f7e6(void);
int64_t function_25f832(int64_t a1);
int64_t function_25f85f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25f87b(void);
int64_t function_4be550d8();
int64_t function_ffffffffd5a3a4ea();
int64_t unknown_12269d27();
int64_t unknown_1776797();
int64_t unknown_3aa969c0();
int64_t unknown_3b7d3ee1();
int64_t unknown_3c256063();
int64_t unknown_40b7ea8a();
int64_t unknown_52608d32();
int64_t unknown_551b2100();
int64_t unknown_611d9537();
int64_t unknown_66e0eedf();
int64_t unknown_6a27d517();
int64_t unknown_7828ffab();
int64_t unknown_7ce8b930();
int64_t unknown_ffffffff80eac521();
int64_t unknown_ffffffff969e2314();
int64_t unknown_ffffffff9a4eb4e7();
int64_t unknown_ffffffffad6b28d4();
int64_t unknown_ffffffffba35663e();
int64_t unknown_ffffffffc12f87f5();
int64_t unknown_ffffffffe272742f();
int64_t unknown_fffffffffb63d905();

// Address range: 0x1d4c5a - 0x1d4c67
int64_t function_1d4c5a(int64_t result) {
    // 0x1d4c5a
    int64_t v1; // 0x1d4c5a
    __asm_out(97, (int32_t)v1);
    bool v2; // 0x1d4c5a
    if (!v2) {
        function_1d4c24();
    }
    char * v3 = (char *)(result - 0x5ffec2ff); // 0x1d4c5f
    *v3 = *v3 + (char)result;
    return result;
}

// Address range: 0x1d4caf - 0x1d4cb7
int64_t function_1d4caf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d4caf
    int64_t result; // 0x1d4caf
    int64_t v1 = result;
    *(char *)v1 = (char)v1 + (char)a3;
    return result;
}

// Address range: 0x1d4cce - 0x1d4ccf
int64_t function_1d4cce(void) {
    // 0x1d4cce
    int64_t result; // 0x1d4cce
    return result;
}

// Address range: 0x1d4cd5 - 0x1d4cd6
int64_t function_1d4cd5(void) {
    // 0x1d4cd5
    int64_t result; // 0x1d4cd5
    return result;
}

// Address range: 0x1d4d08 - 0x1d4d1e
int64_t function_1d4d08(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_6a27d517(); // 0x1d4d17
    int64_t v1; // 0x1d4d08
    if ((*(char *)(a2 + 0x35bcb3ff + 8 * a3) & (char)v1) == 0) {
        // 0x1d4d1b
        return result;
    }
    // 0x1d4d19
    result = function_1d4cd5();
    if (a4 != 1) {
        result = function_1d4cce();
    }
    // 0x1d4d1b
    return result;
}

// Address range: 0x1d4d1e - 0x1d4d43
int64_t function_1d4d1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d4d1e
    int64_t v1; // 0x1d4d1e
    char v2 = (uint64_t)v1 / 256; // 0x1d4d1e
    *(char *)0x37d13825 = *(char *)0x37d13825 + v2;
    unknown_52608d32();
    char * v3 = (char *)(a4 + 41); // 0x1d4d35
    *v3 = *v3 - 16;
    *(char *)0x59ec1b3f = *(char *)0x59ec1b3f + v2;
    return function_1a8baa0b();
}

// Address range: 0x1d4d45 - 0x1d4d5b
int64_t function_1d4d45(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x1d4d45
    bool v1; // 0x1d4d45
    int64_t v2 = v1 ? -1 : 1; // 0x1d4d45
    int64_t v3 = v2 + a1; // 0x1d4d45
    int64_t v4 = v2 + a2; // 0x1d4d45
    char * v5 = (char *)(a4 - 0x5807ffdd); // 0x1d4d49
    *v5 = *v5 + (char)(a3 / 256);
    *(char *)v3 = *(char *)v4;
    return function_ffffffffd5a3a4ea(v3 + v2, v4 + v2);
}

// Address range: 0x1d4d64 - 0x1d4d65
int64_t function_1d4d64(void) {
    // 0x1d4d64
    int64_t result; // 0x1d4d64
    return result;
}

// Address range: 0x1d4d70 - 0x1d4d7c
int64_t function_1d4d70(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1d4d70
    int64_t v1; // 0x1d4d70
    __asm_out(79, (int32_t)v1 ^ -0x7bfe17a9);
    int32_t * v2 = (int32_t *)(a3 - 16); // 0x1d4d77
    *v2 = *v2 - (int32_t)v1;
    return function_1d4d64();
}

// Address range: 0x1d4d8a - 0x1d4d8d
int64_t function_1d4d8a(int64_t a1) {
    // 0x1d4d8a
    int64_t result; // 0x1d4d8a
    return result;
}

// Address range: 0x1d4d92 - 0x1d4d93
int64_t function_1d4d92(void) {
    // 0x1d4d92
    int64_t result; // 0x1d4d92
    return result;
}

// Address range: 0x1d4db7 - 0x1d4de1
int64_t function_1d4db7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    uint64_t v2 = a4 - 1; // 0x1d4db7
    bool v3; // 0x1d4db7
    if (v2 != 0 == v3) {
        function_1d4d92();
    }
    int64_t v4 = unknown_3aa969c0(); // 0x1d4db9
    int32_t * v5 = (int32_t *)(a3 - 0x5c0f835); // 0x1d4dc4
    int32_t v6 = v2; // 0x1d4dc4
    *v5 = *v5 + v6;
    int64_t v7; // 0x1d4db7
    int64_t result = ((v4 + 94) % 256 | v4 & 0xffffff00) + v7 & 0xffffff97 | 104; // 0x1d4dca
    char * v8 = (char *)(result - 81); // 0x1d4dcd
    *v8 = *v8 + 24;
    int32_t * v9 = (int32_t *)(a4 + 0x6de122b5); // 0x1d4dd1
    *v9 = *v9 + v6;
    *(char *)v1 = *(char *)&v1 + (char)(v2 / 256);
    int32_t * v10 = (int32_t *)(2 * v1 + v7); // 0x1d4ddc
    int64_t v11; // 0x1d4db7
    *v10 = *v10 + (int32_t)(int64_t)&v11;
    return result;
}

// Address range: 0x1d4de1 - 0x1d4de3
int64_t function_1d4de1(int64_t a1) {
    // 0x1d4de1
    int64_t v1; // 0x1d4de1
    return v1 & 0xffffffff;
}

// Address range: 0x1d4de5 - 0x1d4dec
int64_t function_1d4de5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 29 + 4 * a3); // 0x1d4de7
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x1d4de5
    return result;
}

// Address range: 0x1d4e09 - 0x1d4e0c
int64_t function_1d4e09(void) {
    // 0x1d4e09
    int64_t result; // 0x1d4e09
    return result;
}

// Address range: 0x1d4e37 - 0x1d4e38
int64_t function_1d4e37(void) {
    // 0x1d4e37
    int64_t result; // 0x1d4e37
    return result;
}

// Address range: 0x1d4e47 - 0x1d4e4a
int64_t function_1d4e47(void) {
    // 0x1d4e47
    int64_t result; // 0x1d4e47
    return result;
}

// Address range: 0x1d4e94 - 0x1d4e96
int64_t function_1d4e94(void) {
    // 0x1d4e94
    return function_1d4e37();
}

// Address range: 0x1d4e96 - 0x1d4e97
int64_t function_1d4e96(int64_t a1) {
    // 0x1d4e96
    int64_t result; // 0x1d4e96
    return result;
}

// Address range: 0x1d4eea - 0x1d4ef0
int64_t function_1d4eea(void) {
    // 0x1d4eea
    return function_4be550d8();
}

// Address range: 0x1d4efc - 0x1d4eff
int64_t function_1d4efc(void) {
    // 0x1d4efc
    int64_t result; // 0x1d4efc
    return result;
}

// Address range: 0x1d4f03 - 0x1d4f06
int64_t function_1d4f03(int64_t a1) {
    // 0x1d4f03
    int64_t result; // 0x1d4f03
    return result;
}

// Address range: 0x1d4f1a - 0x1d4f22
int64_t function_1d4f1a(void) {
    // 0x1d4f1a
    int64_t result; // 0x1d4f1a
    int32_t * v1 = (int32_t *)(result - 0x5ce2c568); // 0x1d4f1a
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1d4f65 - 0x1d4f68
int64_t function_1d4f65(int64_t a1) {
    // 0x1d4f65
    int64_t result; // 0x1d4f65
    return result;
}

// Address range: 0x1d4fcb - 0x1d4fd6
int64_t function_1d4fcb(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = __asm_in_133(100); // 0x1d4fcb
    int64_t v2; // 0x1d4fcb
    *(int32_t *)a1 = (int32_t)v2;
    bool v3; // 0x1d4fcb
    __asm_outsb((int16_t)a3, *(char *)((v3 ? -4 : 4) + a2));
    return (int64_t)((v1 + 232) % 256) | (int64_t)(v1 & -256);
}

// Address range: 0x1d505d - 0x1d5068
int64_t function_1d505d(int64_t a1, int64_t a2) {
    // 0x1d505d
    return unknown_3c256063(a1, a2);
}

// Address range: 0x1d507b - 0x1d507c
int64_t function_1d507b(void) {
    // 0x1d507b
    int64_t result; // 0x1d507b
    return result;
}

// Address range: 0x1d50dc - 0x1d5106
int64_t function_1d50dc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    function_1d507b();
    // 0x1d50de
    *(int32_t *)a2 = (int32_t)a2 - 20;
    int64_t v2 = unknown_ffffffff9a4eb4e7(); // 0x1d50e1
    int64_t v3 = a4 % 256 | a3 & -256; // 0x1d50e6
    *(char *)0x2b01e89f8d654ee8 = (char)v2;
    char * v4 = (char *)v3; // 0x1d50fa
    unsigned char v5 = *v4; // 0x1d50fa
    *v4 = v5 / 2 | 128 * v5;
    *(char *)(v2 & 0xffffffff) = __asm_insb((int16_t)v3);
    return unknown_fffffffffb63d905() & -256 | (int64_t)*(char *)&v1;
}

// Address range: 0x1d5106 - 0x1d5109
int64_t function_1d5106(void) {
    // 0x1d5106
    int64_t result; // 0x1d5106
    return result;
}

// Address range: 0x1d510a - 0x1d5139
int64_t function_1d510a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = __asm_insb((int16_t)a3); // 0x1d510c
    char * v2 = (char *)a1; // 0x1d510c
    *v2 = v1;
    int64_t v3; // 0x1d510a
    *v2 = *(char *)&v3;
    bool v4; // 0x1d510a
    int64_t v5 = v4 ? -1 : 1; // 0x1d510d
    int64_t v6 = v5 + a1; // 0x1d510d
    int64_t v7 = v5 + a2; // 0x1d510d
    uint32_t v8 = *(int32_t *)(unknown_ffffffff969e2314(v6, v7) + 63) + (int32_t)v6; // 0x1d5113
    __asm_iretd(v8);
    unknown_ffffffff80eac521();
    int64_t result = unknown_7ce8b930(); // 0x1d512a
    int32_t * v9 = (int32_t *)(result - 0x5e8e000); // 0x1d512f
    int64_t v10; // 0x1d510a
    *v9 = *v9 | 2 * (int32_t)v10;
    *(char *)(int64_t)v8 = *(char *)v7;
    return result;
}

// Address range: 0x1d51ba - 0x1d51c6
int64_t function_1d51ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1d51ba
    int64_t v1; // 0x1d51ba
    uint64_t v2 = v1;
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)v2;
    char * v3 = (char *)(2 * a4 + 0x5e8fcdc + v2); // 0x1d51bc
    *v3 = *v3 | (char)(v2 / 256);
    return result;
}

// Address range: 0x1d5219 - 0x1d5221
int64_t function_1d5219(int64_t a1) {
    // 0x1d5219
    int64_t result; // 0x1d5219
    return result;
}

// Address range: 0x25eec2 - 0x25eed4
int64_t function_25eec2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x25eec2
    int64_t v1; // 0x25eec2
    int32_t * v2 = (int32_t *)(v1 + 101); // 0x25eec2
    *v2 = *v2 + (int32_t)a2;
    __asm_wait(a1);
    int16_t v3 = a3; // 0x25eec8
    __asm_in(v3);
    int32_t v4 = __asm_insd(v3); // 0x25eecd
    int32_t * v5 = (int32_t *)a1; // 0x25eecd
    *v5 = v4;
    int64_t result = unknown_ffffffffad6b28d4(); // 0x25eece
    int64_t v6; // 0x25eec2
    *v5 = *(int32_t *)&v6;
    return result;
}

// Address range: 0x25eee2 - 0x25eee3
int64_t function_25eee2(int64_t a1) {
    // 0x25eee2
    int64_t result; // 0x25eee2
    return result;
}

// Address range: 0x25eeee - 0x25eeff
int64_t function_25eeee(int64_t a1) {
    int64_t result = unknown_ffffffffc12f87f5(a1); // 0x25eeee
    int32_t * v1 = (int32_t *)(result + 0x1e89600); // 0x25eef4
    *v1 = *v1 & 0x1cd4758d;
    return result;
}

// Address range: 0x25ef05 - 0x25ef0b
int64_t function_25ef05(void) {
    // 0x25ef05
    int64_t result; // 0x25ef05
    return result;
}

// Address range: 0x25ef3f - 0x25ef40
int64_t function_25ef3f(int64_t a1) {
    // 0x25ef3f
    int64_t result; // 0x25ef3f
    return result;
}

// Address range: 0x25ef8d - 0x25ef99
int64_t function_25ef8d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x25ef8d
    int64_t v1; // 0x25ef8d
    *(char *)v1 = 0;
    int64_t v2 = 2 * v1; // 0x25ef94
    return (v2 | a3 / 256) % 256 | v2 & 0xffffff00;
}

// Address range: 0x25efed - 0x25f04b
int64_t function_25efed(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x25efed
    int64_t v1; // 0x25efed
    int64_t v2 = v1;
    char v3 = *(char *)((v1 & 0xffffffff) - 0x7bf627f8); // 0x25eff4
    unknown_551b2100();
    *(int32_t *)a1 = __asm_insd((int16_t)v1);
    int64_t v4 = v2 & -256 | (int64_t)(v3 + (char)v2); // 0x25f005
    char v5 = __asm_in_134(-36); // 0x25f007
    int64_t v6 = a4 & -256 | 232; // 0x25f00a
    int32_t * v7 = (int32_t *)(v6 + 0x2ef92ad5); // 0x25f00c
    *v7 = *v7 + 0x107eac3;
    char v8 = *(char *)v4; // 0x25f012
    int64_t v9; // 0x25efed
    int64_t v10 = 0x10000 * (int32_t)((int64_t)&v9 & 0x9100 | (int64_t)v5) >> 16 & -0x17ff6e83; // 0x25f014
    int32_t * v11 = (int32_t *)((256 * (int64_t)(v8 & (char)(a4 / 256)) | v6 & -0xff18) - 0x69f86906); // 0x25f019
    *v11 = *v11 + 0x107eac3;
    *(int32_t *)(v4 - 52) = 0x107eac3;
    int32_t * v12 = (int32_t *)v10; // 0x25f022
    uint32_t v13 = *v12; // 0x25f022
    *v12 = v13 / 0x1000000 | 256 * v13;
    char * v14 = (char *)v10; // 0x25f024
    unsigned char v15 = *v14; // 0x25f024
    *v14 = v15 / 128 | 2 * v15;
    unknown_ffffffffe272742f();
    return unknown_ffffffffba35663e();
}

// Address range: 0x25f062 - 0x25f06b
int64_t function_25f062(int64_t a1) {
    // 0x25f062
    int64_t result; // 0x25f062
    return result;
}

// Address range: 0x25f0a8 - 0x25f233
int64_t function_25f0a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x25f0a8
    int64_t v1; // 0x25f0a8
    uint64_t v2 = v1;
    uint64_t v3 = v1;
    int64_t v4 = a2;
    int64_t v5 = a6;
    char * v6 = (char *)(v3 + 39); // 0x25f0a8
    unsigned char v7 = *v6; // 0x25f0a8
    *v6 = v7 / 2 | 128 * v7;
    *(int64_t *)v3 = a5;
    uint32_t v8 = (int32_t)((a1 - ((int64_t)&v5 | (int64_t)((char)v3 < 130))) % 256 | a1 & 0xffffff00); // 0x25f0ce
    uint32_t v9 = *(int32_t *)(a3 + 57) + v8; // 0x25f0ce
    if (llvm_ctpop_i8((char)v9) % 2 != 0) {
        // 0x25f0d3
        bool v10; // 0x25f0a8
        int64_t v11 = v10 ? -4 : 4;
        int64_t v12 = a4; // 0x25f0a8
        int64_t v13 = v9; // 0x25f0a8
        int64_t v14 = v4;
        int64_t v15 = v14; // 0x25f0d8
        while (v12 != 0) {
            int32_t v16 = *(int32_t *)v13; // 0x25f0d8
            int64_t v17 = v14 + v11; // 0x25f0d8
            v4 = v17;
            v12--;
            v13 += v11;
            v15 = v17;
            if (*(int32_t *)v14 != v16) {
                // break -> 0x25f0d3
                break;
            }
            v14 = v17;
            v15 = v14;
        }
        // 0x25f0d3
        return (int64_t)*(int32_t *)v15;
    }
    int32_t v18 = *(int32_t *)&v4; // 0x25f0e5
    int64_t v19 = v4;
    *(int32_t *)v19 = v18 + (int32_t)(v9 < v8) + (int32_t)v19;
    *(char *)-0x10bd6a09 = *(char *)-0x10bd6a09 + (char)(v2 / 256);
    *(int32_t *)-0x28fe17d979fe17b5 = 0x49900;
    __asm_outsd(0x26f1, *(int32_t *)&v4);
    int32_t * v20 = (int32_t *)(a4 + 0x4f0a028 + (((v3 / 256 + 138) % 256 | v3 & 0xffffff00) ^ 0xda2ec943)); // 0x25f17c
    *v20 = *v20 + (int32_t)v2;
    unknown_40b7ea8a();
    int32_t * v21 = (int32_t *)(v4 - 102); // 0x25f189
    *v21 = *v21 | 0x1e826f1;
    int32_t * v22 = (int32_t *)(v2 - 118); // 0x25f18d
    uint32_t v23 = *v22; // 0x25f18d
    int32_t v24 = v23 - 113; // 0x25f18d
    unsigned char v25 = llvm_ctpop_i8((char)v24); // 0x25f18d
    *v22 = v24;
    int64_t v26 = unknown_1776797(); // 0x25f191
    unsigned char v27 = *(char *)-0x173283d8; // 0x25f197
    *(char *)-0x173283d8 = v27 / 128 | 2 * v27;
    int32_t v28 = ((int32_t)(256 * (64 * (int64_t)(v24 == 0) | (int64_t)(v23 < 113) | 128 * (int64_t)(v24 < 0) | 16 * (int64_t)(v23 % 16 > 16) | 4 * (int64_t)(v25 % 2 == 0)) | v26 & 0xffff00ff) | 512) + (int32_t)a4; // 0x25f19f
    unsigned char v29 = llvm_ctpop_i8((char)v28); // 0x25f19f
    *(int32_t *)0xe80540a5 = *(int32_t *)&v4;
    int64_t v30 = v4 - 4; // 0x25f1a1
    v4 = v30;
    if (v29 % 2 != 0) {
        // 0x25f1a5
        return unknown_7828ffab(0xe80540a1, v30);
    }
    uint64_t v31 = unknown_12269d27(0xe80540a1, v30, (int64_t)(0x800026 * *(int32_t *)0xe80540a1), v28); // 0x25f221
    char * v32 = (char *)(v31 + 0x482c3a0a); // 0x25f226
    *v32 = *v32 + (char)(v31 / 256);
    return (v31 + v2) % 256 | v31 & -256;
}

// Address range: 0x25f28a - 0x25f28b
int64_t function_25f28a(int64_t a1) {
    // 0x25f28a
    int64_t result; // 0x25f28a
    return result;
}

// Address range: 0x25f32a - 0x25f337
int64_t function_25f32a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x25f32a
    return unknown_611d9537(a1, a2, a3);
}

// Address range: 0x25f379 - 0x25f37a
int64_t function_25f379(int64_t a1) {
    // 0x25f379
    int64_t result; // 0x25f379
    return result;
}

// Address range: 0x25f37f - 0x25f383
int64_t function_25f37f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25f37f
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x25f37f
    return result;
}

// Address range: 0x25f386 - 0x25f424
int64_t function_25f386(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x25f3c7
    int64_t v1; // 0x25f386
    int64_t * v2 = (int64_t *)v1;
    *(char *)0x53bf42ce = *(char *)0x53bf42ce + (char)(v1 / 256);
    bool v3; // 0x25f386
    int64_t v4 = v3 ? -4 : 4; // 0x25f3cd
    int64_t v5 = v4 + a1; // 0x25f3cd
    int64_t v6 = v4 + a2; // 0x25f3cd
    *(char *)v5 = (char)v1;
    int64_t v7 = v5 + (v3 ? -1 : 1); // 0x25f3ce
    int64_t result = unknown_66e0eedf(v7, v6, *v2); // 0x25f3d9
    int32_t * v8 = (int32_t *)(v6 - 0x3000a3e); // 0x25f3e5
    int32_t v9 = *v8; // 0x25f3e5
    int32_t v10 = -v9; // 0x25f3e5
    *v8 = v10;
    if (v9 == 0 || v10 < 0) {
        // 0x25f418
        *v2 = v6 + v4;
        return __asm_wait(v7 + v4) + 0xe8d86fd6 & 0xffffffff;
    }
    // 0x25f3f4
    return result;
}

// Address range: 0x25f463 - 0x25f465
int64_t function_25f463(void) {
    // 0x25f463
    int64_t result; // 0x25f463
    return result;
}

// Address range: 0x25f47e - 0x25f47f
int64_t function_25f47e(void) {
    // 0x25f47e
    int64_t result; // 0x25f47e
    return result;
}

// Address range: 0x25f4ea - 0x25f4eb
int64_t function_25f4ea(void) {
    // 0x25f4ea
    int64_t result; // 0x25f4ea
    return result;
}

// Address range: 0x25f4fe - 0x25f4ff
int64_t function_25f4fe(void) {
    // 0x25f4fe
    int64_t result; // 0x25f4fe
    return result;
}

// Address range: 0x25f560 - 0x25f575
int64_t function_25f560(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x25f560
    int64_t v1; // 0x25f560
    *(char *)a5 = (char)((uint64_t)v1 / 256);
    __asm_iretd((int32_t)a1);
    return function_25f4fe();
}

// Address range: 0x25f634 - 0x25f637
int64_t function_25f634(int64_t a1) {
    // 0x25f634
    int64_t result; // 0x25f634
    return result;
}

// Address range: 0x25f642 - 0x25f64f
int64_t function_25f642(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25f642
    int64_t v1; // 0x25f642
    *(int32_t *)a1 = (int32_t)v1;
    return v1 & -256 | 105;
}

// Address range: 0x25f66b - 0x25f66c
int64_t function_25f66b(void) {
    // 0x25f66b
    int64_t result; // 0x25f66b
    return result;
}

// Address range: 0x25f68e - 0x25f68f
int64_t function_25f68e(int64_t a1) {
    // 0x25f68e
    int64_t result; // 0x25f68e
    return result;
}

// Address range: 0x25f696 - 0x25f730
int64_t function_25f696(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x25f696
    int64_t v1; // 0x25f696
    uint64_t v2 = v1;
    int64_t v3 = a3;
    int32_t v4 = 0x10000 * (int32_t)v1 >> 16; // 0x25f696
    int32_t * v5 = (int32_t *)(a2 + 0xb76b1d5); // 0x25f697
    *v5 = *v5 | (int32_t)v2;
    int64_t v6; // 0x25f696
    *(char *)a1 = *(char *)&v6;
    bool v7; // 0x25f696
    int64_t v8 = v7 ? -1 : 1; // 0x25f69f
    v6 = v8 + a2;
    __writefsbyte(a4, (char)v4);
    if (((v4 + 155) % 256 || v4 & -256) == -0x681d48ff) {
        function_25f634((int64_t)&g2);
    }
    int64_t v9 = v8 + a1; // 0x25f69f
    int64_t v10 = __asm_iretd((int32_t)v9); // 0x25f6ae
    char v11 = *(char *)&v3; // 0x25f6af
    char v12 = a4 / 256; // 0x25f6af
    char v13 = v11 + v12; // 0x25f6af
    *(char *)v3 = v13;
    if (((v13 ^ v11) & (v13 ^ v12)) < 0) {
        // 0x25f723
        *(char *)0x3a672a = *(char *)0x3a672a + (char)(v2 / 256);
        return (v10 + 159) % 256 | v10 & -256;
    }
    // 0x25f6b4
    __asm_int(-126);
    __asm_out_137((int16_t)v3, (int32_t)v10);
    int32_t * v14 = (int32_t *)(v9 - 100); // 0x25f6c0
    *v14 = *v14 + (int32_t)v3;
    *(char *)v9 = (char)v10;
    int64_t v15 = v9 + v8; // 0x25f6c7
    int32_t * v16 = (int32_t *)(v15 + 13); // 0x25f6d1
    uint32_t v17 = *v16; // 0x25f6d1
    *v16 = v17 / 0x40000 | 0x4000 * v17;
    *(int32_t *)0x52a4dc = *(int32_t *)0x52a4dc - (int32_t)v15;
    char v18 = v2; // 0x25f6db
    __asm_out_136((int16_t)v3 % 256 | (int16_t)&g1, v18);
    int32_t * v19 = (int32_t *)(a4 + 125); // 0x25f6dc
    *v19 = *v19 - 78;
    __asm_out_138(-120, v18);
    return v2 & 0xffffffff;
}

// Address range: 0x25f750 - 0x25f753
int64_t function_25f750(int64_t a1) {
    // 0x25f750
    int64_t result; // 0x25f750
    return result;
}

// Address range: 0x25f753 - 0x25f760
int64_t function_25f753(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25f753
    *(int32_t *)-0x4b4b08a5 = *(int32_t *)-0x4b4b08a5 >> 2;
    return a3 & 0xffffffff;
}

// Address range: 0x25f76e - 0x25f77b
int64_t function_25f76e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25f76e
    int64_t v1; // 0x25f76e
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result & 0xb903e50;
    return result;
}

// Address range: 0x25f7ac - 0x25f7ad
int64_t function_25f7ac(void) {
    // 0x25f7ac
    int64_t result; // 0x25f7ac
    return result;
}

// Address range: 0x25f7db - 0x25f7e6
int64_t function_25f7db(int64_t a1, int64_t a2, int64_t a3) {
    // 0x25f7db
    unknown_3b7d3ee1();
    return __asm_in((int16_t)a3);
}

// Address range: 0x25f7e6 - 0x25f7ee
int64_t function_25f7e6(void) {
    char v1 = *(char *)0x3fc196ed; // 0x25f7e6
    int64_t v2; // 0x25f7e6
    *(char *)0x3fc196ed = v1 + (char)((uint64_t)v2 / 256);
    return function_25f7ac();
}

// Address range: 0x25f832 - 0x25f83b
int64_t function_25f832(int64_t a1) {
    // 0x25f832
    int64_t v1; // 0x25f832
    return v1 + 0x1e3a245b & 0xffffffff;
}

// Address range: 0x25f85f - 0x25f87b
int64_t function_25f85f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x25f85f
    int64_t v1; // 0x25f85f
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    int32_t * v3 = (int32_t *)(v1 + 0x440068ba); // 0x25f86a
    *v3 = *v3 + (int32_t)a5;
    char * v4 = (char *)(a5 + 0x3a4cd657); // 0x25f870
    *v4 = 2 * *v4;
    return function_162f8de(a5);
}

// Address range: 0x25f87b - 0x25f87d
int64_t function_25f87b(void) {
    // 0x25f87b
    int64_t v1; // 0x25f87b
    return __asm_iretd((int32_t)v1);
}
