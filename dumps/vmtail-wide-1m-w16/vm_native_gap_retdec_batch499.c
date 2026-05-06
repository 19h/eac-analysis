/*
 * Targeted RetDec C for native executable gap queue batch 499.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x11e346-0x11e546 rank=- name=- kind=- bytes=- uncovered=-
 *   0x11e546-0x11e746 rank=- name=- kind=- bytes=- uncovered=-
 *   0x11e746-0x11e946 rank=- name=- kind=- bytes=- uncovered=-
 *   0x11e946-0x11eb46 rank=- name=- kind=- bytes=- uncovered=-
 *   0x11eb46-0x11ed46 rank=- name=- kind=- bytes=- uncovered=-
 *   0x410342-0x410542 rank=- name=- kind=- bytes=- uncovered=-
 *   0x410542-0x410742 rank=- name=- kind=- bytes=- uncovered=-
 *   0x410742-0x410942 rank=- name=- kind=- bytes=- uncovered=-
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
int128_t __asm_pcmpgtb(int128_t left, int128_t right);
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

int64_t function_11e346(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_11e3bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11e411(void);
int64_t function_11e4dc(int64_t a1);
int64_t function_11e4e0(void);
int64_t function_11e502(void);
int64_t function_11e532(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_11e578(void);
int64_t function_11e5a0(int64_t a1);
int64_t function_11e5d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11e5e9(void);
int64_t function_11e62c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11e6f8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_11e76e(int64_t a1, int64_t a2);
int64_t function_11e806(void);
int64_t function_11e93f(void);
int64_t function_11e975(void);
int64_t function_11e99e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_11e9b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11e9ca(void);
int64_t function_11e9cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11ea01(int64_t a1);
int64_t function_11ea13(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11ea95(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_11eacf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11ebcd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_11ec2d(void);
int64_t function_11ecbc(void);
int64_t function_224213bc();
int64_t function_410342(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_410435(void);
int64_t function_4104c5(void);
int64_t function_4104fa(void);
int64_t function_410518(void);
int64_t function_410531(void);
int64_t function_410536(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_4105f3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4105f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_410618(void);
int64_t function_410665(int64_t a1);
int64_t function_41066e(void);
int64_t function_410676(int64_t a1, int64_t a2);
int64_t function_41068f(void);
int64_t function_4106e8(void);
int64_t function_4106f6(void);
int64_t function_4106f8(int64_t a1);
int64_t function_410748(void);
int64_t function_410760(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4107d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4107d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_410835(void);
int64_t function_410851(void);
int64_t function_410852(void);
int64_t function_410855(void);
int64_t function_41085b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4108a3(int64_t a1);
int64_t function_4108b1(int64_t a1);
int64_t function_6047f3f3();
int64_t function_751f671a();
int64_t function_77601782();
int64_t function_ffffffff882fe7d3();
int64_t function_ffffffffb1777210();
int64_t function_ffffffffb1d7d8c5();
int64_t function_ffffffffc1901b2b();
int64_t function_ffffffffe58cb169();
int64_t unknown_231242dc();
int64_t unknown_2313e9c1();
int64_t unknown_49c16ae6();
int64_t unknown_ffffffff9417fd53();
int64_t unknown_ffffffffcd4c141b();
int64_t unknown_ffffffffd3cf3539();
int64_t unknown_ffffffffda2dccd1();
int64_t unknown_ffffffffe81320c2();
int64_t unknown_ffffffffe8c8c5b0();

// Address range: 0x11e346 - 0x11e352
int64_t function_11e346(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x11e346
    int64_t v1; // 0x11e346
    char * v2 = (char *)(v1 - 0x72b7f868); // 0x11e346
    *v2 = *v2 | (char)(a4 / 256);
    return unknown_ffffffff9417fd53(a1, a2, a3, a4);
}

// Address range: 0x11e3bc - 0x11e3d9
int64_t function_11e3bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11e3bc
    unknown_ffffffffe81320c2();
    int32_t * v1 = (int32_t *)(a3 + 0x42893eb4); // 0x11e3c1
    *v1 = *v1 + (int32_t)a2;
    return unknown_ffffffffda2dccd1() + 0x75bed51c & 0xffffffff;
}

// Address range: 0x11e411 - 0x11e414
int64_t function_11e411(void) {
    // 0x11e411
    int64_t result; // 0x11e411
    return result;
}

// Address range: 0x11e4dc - 0x11e4dd
int64_t function_11e4dc(int64_t a1) {
    // 0x11e4dc
    int64_t result; // 0x11e4dc
    return result;
}

// Address range: 0x11e4e0 - 0x11e4e9
int64_t function_11e4e0(void) {
    // 0x11e4e0
    unknown_49c16ae6();
    return __asm_wait();
}

// Address range: 0x11e502 - 0x11e506
int64_t function_11e502(void) {
    // 0x11e502
    int64_t result; // 0x11e502
    return result;
}

// Address range: 0x11e532 - 0x11e557
int64_t function_11e532(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    // 0x11e532
    int64_t v1; // 0x11e532
    int64_t v2 = v1;
    int64_t v3 = v1 + a4; // 0x11e539
    int64_t v4 = ((v2 + a4 / 256) % 256 | v2 & 0xffffff00) + 0x2c1d844b; // 0x11e53d
    char * v5 = (char *)(v3 & 0xffffffff); // 0x11e542
    *v5 = *v5 + (char)(a3 / 256);
    *(char *)0xd1cbae601e8ef76 = (char)v4;
    char * v6 = (char *)(a3 - 20); // 0x11e54d
    *v6 = *v6 + 1;
    *(char *)a3 = (char)(v1 / 256);
    return (v4 & 0xff00) + v3 & 0xff00 | v4 & 0xffff00ff;
}

// Address range: 0x11e578 - 0x11e579
int64_t function_11e578(void) {
    // 0x11e578
    int64_t result; // 0x11e578
    return result;
}

// Address range: 0x11e5a0 - 0x11e5a3
int64_t function_11e5a0(int64_t a1) {
    // 0x11e5a0
    int64_t result; // 0x11e5a0
    return result;
}

// Address range: 0x11e5d5 - 0x11e5db
int64_t function_11e5d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11e5d5
    *(int32_t *)a3 = (int32_t)a1;
    int64_t result; // 0x11e5d5
    return result;
}

// Address range: 0x11e5e9 - 0x11e5ea
int64_t function_11e5e9(void) {
    // 0x11e5e9
    int64_t result; // 0x11e5e9
    return result;
}

// Address range: 0x11e62c - 0x11e6d1
int64_t function_11e62c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = (int64_t)*(int32_t *)-0x5062d0ab56fe176c; // 0x11e62c
    int64_t v2; // 0x11e62c
    char * v3 = (char *)(a3 - 74 + 8 * v2); // 0x11e635
    *v3 = *v3 | (char)a4;
    uint64_t v4 = a4 - 256 * v1;
    int32_t * v5 = (int32_t *)(v2 - 0x5f07c7fa); // 0x11e63c
    int32_t v6 = v4 & 0xff00 | a4 & 0xffff00ff; // 0x11e63c
    *v5 = *v5 + v6;
    char * v7 = (char *)(v1 - 24); // 0x11e642
    *v7 = *v7 + (char)(v4 / 256);
    int32_t v8 = a3; // 0x11e645
    int32_t v9 = v6 + v8; // 0x11e645
    int64_t result = v1; // 0x11e647
    if (v9 < 0 == ((v9 ^ v6) & (v9 ^ v8)) < 0 == (v9 != 0)) {
        result = function_11e5e9();
    }
    // 0x11e649
    return result;
}

// Address range: 0x11e6f8 - 0x11e708
int64_t function_11e6f8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x11e6f8
    int64_t v1; // 0x11e6f8
    int64_t v2 = v1;
    *(int32_t *)a3 = (int32_t)(v1 & a1);
    int32_t * v3 = (int32_t *)(((v2 - a4 / 256) % 256 | v2 & -256) - 118); // 0x11e6fe
    *v3 = *v3 + (int32_t)v1;
    return function_ffffffff882fe7d3();
}

// Address range: 0x11e76e - 0x11e771
int64_t function_11e76e(int64_t a1, int64_t a2) {
    // 0x11e76e
    int64_t result; // 0x11e76e
    return result;
}

// Address range: 0x11e806 - 0x11e80b
int64_t function_11e806(void) {
    // 0x11e806
    return function_6047f3f3();
}

// Address range: 0x11e93f - 0x11e940
int64_t function_11e93f(void) {
    // 0x11e93f
    int64_t result; // 0x11e93f
    return result;
}

// Address range: 0x11e975 - 0x11e976
int64_t function_11e975(void) {
    // 0x11e975
    int64_t result; // 0x11e975
    return result;
}

// Address range: 0x11e99e - 0x11e9b2
int64_t function_11e99e(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 0x5c0ec632); // 0x11e99e
    *v1 = *v1 + (int32_t)a3;
    __asm_in((int16_t)a3);
    int64_t v2 = unknown_ffffffffe8c8c5b0(); // 0x11e9aa
    return (v2 + 4) % 256 | v2 & -256;
}

// Address range: 0x11e9b3 - 0x11e9c8
int64_t function_11e9b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11e9b3
    function_11e93f();
    int64_t v1 = a4 + a1; // 0x11e9b7
    unknown_2313e9c1((int32_t)v1);
    __asm_in((int16_t)a3);
    return function_11e9cb(v1 & 0xffffffff, 0x3b63b507, a3, a4);
}

// Address range: 0x11e9ca - 0x11e9cb
int64_t function_11e9ca(void) {
    // 0x11e9ca
    int64_t result; // 0x11e9ca
    return result;
}

// Address range: 0x11e9cb - 0x11e9d8
int64_t function_11e9cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11e9cb
    int64_t v1; // 0x11e9cb
    int64_t v2 = v1 + 0x549713cd & 0xffffffff; // 0x11e9d1
    if (a4 != 1) {
        v2 = function_11e975();
    }
    int64_t v3 = v2;
    return (v3 + v1) % 256 | v3 & -256;
}

// Address range: 0x11ea01 - 0x11ea12
int64_t function_11ea01(int64_t a1) {
    // 0x11ea01
    int64_t v1; // 0x11ea01
    return v1 & -256 | (int64_t)*(char *)-0x551afef84e23a1f6;
}

// Address range: 0x11ea13 - 0x11ea3c
int64_t function_11ea13(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x11ea13
    int64_t v1; // 0x11ea13
    __asm_out(30, (char)v1);
    unknown_ffffffffcd4c141b();
    *(char *)(v1 - 0x170abb27) = (char)v1;
    int32_t v2 = a4; // 0x11ea25
    int32_t v3 = a1; // 0x11ea25
    uint32_t v4 = v2 + v3; // 0x11ea25
    if (((v4 ^ v2) & (v4 ^ v3)) >= 0) {
        function_11e9ca();
    }
    int64_t result = unknown_ffffffffd3cf3539(); // 0x11ea33
    char * v5 = (char *)(a1 - 78); // 0x11ea38
    *v5 = *v5 + (char)(v4 / 256);
    return result;
}

// Address range: 0x11ea95 - 0x11eacf
int64_t function_11ea95(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x11ea95
    int64_t v1; // 0x11ea95
    *(char *)a2 = 2 * (char)v1;
    uint16_t v2 = (int16_t)v1; // 0x11ea98
    uint16_t v3 = (int16_t)*(char *)(v1 - 0xfffec3); // 0x11ea98
    int16_t v4 = 256 * (v2 % v3);
    uint64_t v5 = (int64_t)v4; // 0x11ea9e
    float80_t v6; // 0x11ea95
    *(int64_t *)a1 = (int64_t)v6;
    char * v7 = (char *)(a1 + 26); // 0x11eaa6
    *v7 = *v7 + (char)(a4 / 256);
    uint64_t v8 = (int64_t)(v2 / v3) + 19 + (int64_t)(v4 > -1); // 0x11eaba
    int64_t result = v8 % 256 | v5 & 0xffffff00; // 0x11eaba
    char * v9 = (char *)(result + 8); // 0x11eabc
    *v9 = *v9 + (char)(v5 / 256);
    char * v10 = (char *)(result - 91); // 0x11eac4
    *v10 = *v10 + (char)v8;
    return result;
}

// Address range: 0x11eacf - 0x11ebcc
int64_t function_11eacf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x11eacf
    bool v3; // 0x11eacf
    if (!v3) {
        // 0x11ead1
        return v2 ^ 58;
    }
    int32_t * v4 = (int32_t *)(v2 + 102); // 0x11eb3c
    int32_t v5 = *v4; // 0x11eb3c
    int32_t v6 = a3; // 0x11eb3c
    int32_t v7 = v5 + v6; // 0x11eb3c
    *v4 = v7;
    float80_t v8; // 0x11eacf
    *(float32_t *)(a4 + 63) = (float32_t)v8;
    if (((v7 ^ v5) & (v7 ^ v6)) >= 0) {
        int32_t * v9 = (int32_t *)(v1 + 41); // 0x11eb49
        *v9 = *v9 + (int32_t)v2;
        return v2 & 0xe8320300 | (int64_t)__asm_in((int16_t)a3);
    }
    // 0x11ebba
    *(char *)v1 = *(char *)&v1 & (char)v2;
    int32_t * v10 = (int32_t *)(v2 - 98); // 0x11ebbe
    *v10 = -1 - *v10;
    uint32_t v11 = (int32_t)a4 % 32; // 0x11ebc1
    if (v11 != 0) {
        int32_t * v12 = (int32_t *)(v1 + 0x1e8870b); // 0x11ebc1
        uint32_t v13 = *v12; // 0x11ebc1
        *v12 = v13 << v11 | (int32_t)((int64_t)v13 >> (int64_t)(33 - v11));
    }
    return function_ffffffffb1d7d8c5();
}

// Address range: 0x11ebcd - 0x11ebfe
int64_t function_11ebcd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x11ebcd
    int64_t v1; // 0x11ebcd
    uint32_t v2 = (int32_t)v1 >> 31; // 0x11ebd3
    int64_t v3 = unknown_231242dc(); // 0x11ebd6
    int32_t * v4 = (int32_t *)v3; // 0x11ebdb
    *v4 = *v4 + (int32_t)v1;
    int32_t * v5 = (int32_t *)(int64_t)v2; // 0x11ebdd
    *v5 = *v5 | v2;
    uint32_t v6 = ((int32_t)v3 | 252) + (int32_t)v1; // 0x11ebf5
    int32_t v7 = v6 - 0x6fd7f35e; // 0x11ebf7
    return 256 * (16 * (int64_t)((v6 & 14) == 14) | (int64_t)(v6 > 0x6fd7f35d) | 64 * (int64_t)(v7 == 0) | 128 * (int64_t)(v7 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v7) % 2 == 0)) | (int64_t)(v7 & -0xff01 | 512);
}

// Address range: 0x11ec2d - 0x11ec30
int64_t function_11ec2d(void) {
    // 0x11ec2d
    int64_t result; // 0x11ec2d
    return result;
}

// Address range: 0x11ecbc - 0x11ecbd
int64_t function_11ecbc(void) {
    // 0x11ecbc
    int64_t result; // 0x11ecbc
    return result;
}

// Address range: 0x410342 - 0x410427
int64_t function_410342(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x410342
    int64_t result; // 0x410342
    if ((a7 & (int64_t)L"\n2") != 0) {
        // 0x410357
        return result;
    }
    if ((a7 & 64) == 0) {
        // 0x41034f
        return result & 0x587fbeae;
    }
    // 0x410385
    return __asm_sti();
}

// Address range: 0x410435 - 0x41043a
int64_t function_410435(void) {
    // 0x410435
    return function_ffffffffb1777210();
}

// Address range: 0x4104c5 - 0x4104cd
int64_t function_4104c5(void) {
    // 0x4104c5
    int64_t result; // 0x4104c5
    return result;
}

// Address range: 0x4104fa - 0x4104fc
int64_t function_4104fa(void) {
    // 0x4104fa
    int64_t v1; // 0x4104fa
    return function_410536(v1, v1, v1, v1, (int64_t)&g1);
}

// Address range: 0x410518 - 0x41051f
int64_t function_410518(void) {
    // 0x410518
    int64_t v1; // 0x410518
    int64_t v2 = v1;
    bool v3; // 0x410518
    *(int32_t *)v2 = (int32_t)v2 - (int32_t)v1 + (int32_t)v3;
    return function_ffffffffe58cb169();
}

// Address range: 0x410531 - 0x410536
int64_t function_410531(void) {
    // 0x410531
    return function_751f671a();
}

// Address range: 0x410536 - 0x4105f2
int64_t function_410536(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x410536
    int64_t v1; // 0x410536
    int64_t v2 = v1;
    int64_t v3 = a4;
    int64_t v4 = a2;
    int16_t v5 = a3; // 0x410536
    *(int32_t *)a1 = __asm_insd(v5);
    bool v6; // 0x410536
    if (!v6) {
        char v7 = *(char *)&v3 & (char)(a3 / 256); // 0x4105a6
        *(char *)v3 = v7;
        if (v7 >= 0) {
            // 0x410550
            return v2 + 40 & 49 | v2 & -256;
        }
        int64_t result = __asm_int1(v6 ? 0xffffffff : 0); // 0x4105ac
        int64_t v8 = v3; // 0x4105ae
        int64_t v9 = v8 - 1; // 0x4105ae
        v3 = v9;
        if (v9 != 0) {
            // 0x410550
            return result;
        }
        char * v10 = (char *)(v8 + 0x7f6069); // 0x4105b0
        *v10 = *v10 + (char)result;
        __asm_outsd(v5, *(int32_t *)&v4);
        return (v1 & 0xffffffff) - 0x457c3f96;
    }
    int64_t result2 = (v2 | (int64_t)__asm_in(v5)) & -256 | (int64_t)__asm_in_135(-89); // 0x410545
    char * v11 = (char *)((int64_t)(*(int32_t *)&v3 | (int32_t)a3) - 33); // 0x410547
    *v11 = *v11 ^ (char)(v3 / 256);
    char v12 = v3; // 0x41054c
    char v13 = v1; // 0x41054c
    unsigned char v14 = v12 + v13; // 0x41054c
    v3 = v3 & -256 | (int64_t)v14;
    if (v14 < 0 == ((v14 ^ v12) & (v14 ^ v13)) < 0 != v14 != 0) {
        // 0x410550
        return result2;
    }
    unsigned char v15 = v14 % 32;
    if (v15 != 0) {
        int32_t * v16 = (int32_t *)result2; // 0x410599
        *v16 = *v16 << (int32_t)v15;
    }
    return __asm_iretd();
}

// Address range: 0x4105f3 - 0x4105f7
int64_t function_4105f3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4105f3
    int64_t result; // 0x4105f3
    return result;
}

// Address range: 0x4105f7 - 0x410616
int64_t function_4105f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4105f7
    int64_t v1; // 0x4105f7
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a4; // 0x4105f8
    *(int32_t *)-0x3e95d920 = *(int32_t *)-0x3e95d920 & v3;
    uint32_t v4 = (int32_t)v2;
    uint32_t v5 = v3 % 32; // 0x4105fe
    bool v6 = false; // 0x4105fe
    int32_t v7 = 0x7a1d1528; // 0x4105fe
    if (v5 != 0) {
        *(int32_t *)v2 = v4 >> v5 | (int32_t)((v2 & 0xffffffff) << (int64_t)(33 - v5));
        v7 = (1 << v5 - 1 & v4) != 0 ? 0x7a1d1529 : 0x7a1d1528;
        v6 = (1 << v5 - 1 & v4) != 0;
    }
    uint32_t v8 = v4 & -256 | 31;
    int64_t result = v8 - v7; // 0x410602
    int32_t * v9 = (int32_t *)(a3 + 48); // 0x410607
    *v9 = *v9 + (int32_t)v1 + (int32_t)(v6 | v8 < v7);
    *(int32_t *)result = v3;
    return result;
}

// Address range: 0x410618 - 0x41062a
int64_t function_410618(void) {
    // 0x410618
    int64_t result; // 0x410618
    char * v1 = (char *)(result + 106); // 0x410622
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x410665 - 0x410668
int64_t function_410665(int64_t a1) {
    // 0x410665
    int64_t result; // 0x410665
    return result;
}

// Address range: 0x41066e - 0x410673
int64_t function_41066e(void) {
    // 0x41066e
    return function_224213bc();
}

// Address range: 0x410676 - 0x41067d
int64_t function_410676(int64_t a1, int64_t a2) {
    // 0x410676
    bool v1; // 0x410676
    int64_t v2 = v1 ? -1 : 1; // 0x410676
    return function_ffffffffc1901b2b(v2 + a1, v2 + a2);
}

// Address range: 0x41068f - 0x410690
int64_t function_41068f(void) {
    // 0x41068f
    int64_t result; // 0x41068f
    return result;
}

// Address range: 0x4106e8 - 0x4106f5
int64_t function_4106e8(void) {
    // 0x4106e8
    int64_t v1; // 0x4106e8
    int32_t * v2 = (int32_t *)(v1 + 20); // 0x4106ed
    *v2 = *v2 & (int32_t)v1;
    return function_77601782();
}

// Address range: 0x4106f6 - 0x4106f7
int64_t function_4106f6(void) {
    // 0x4106f6
    int64_t result; // 0x4106f6
    return result;
}

// Address range: 0x4106f8 - 0x41070e
int64_t function_4106f8(int64_t a1) {
    // 0x4106f8
    int64_t v1; // 0x4106f8
    *(int32_t *)-0x770ed5e6cb921588 = (int32_t)__asm_int1(v1);
    return function_41068f();
}

// Address range: 0x410748 - 0x41074b
int64_t function_410748(void) {
    // 0x410748
    int64_t result; // 0x410748
    return result;
}

// Address range: 0x410760 - 0x410784
int64_t function_410760(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x410760
    *(char *)a2 = -1;
    int64_t v1; // 0x410760
    int64_t v2; // 0x410760
    *(char *)a4 = *(char *)&v1 | (char)((uint64_t)v2 / 256);
    return function_4107d5(a1, a2, a3, a4);
}

// Address range: 0x4107d1 - 0x4107d5
int64_t function_4107d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4107d1
    int64_t result; // 0x4107d1
    int32_t * v1 = (int32_t *)(result + 122); // 0x4107d2
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x4107d5 - 0x4107e5
int64_t function_4107d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4107d5
    int64_t result; // 0x4107d5
    *(int32_t *)(a4 + 111) = (int32_t)result;
    bool v1; // 0x4107d5
    if (a4 != 1 == v1) {
        // 0x410840
        return result;
    }
    int32_t * v2 = (int32_t *)(a1 - 75); // 0x4107da
    *v2 = *v2 ^ (int32_t)result;
    return result + 0xc5ca8ff0 & 0xffffffff;
}

// Address range: 0x410835 - 0x410840
int64_t function_410835(void) {
    // 0x410835
    int64_t v1; // 0x410835
    return v1 & 0x774b04d1;
}

// Address range: 0x410851 - 0x410852
int64_t function_410851(void) {
    // 0x410851
    int64_t result; // 0x410851
    return result;
}

// Address range: 0x410852 - 0x410855
int64_t function_410852(void) {
    // 0x410852
    int64_t result; // 0x410852
    return result;
}

// Address range: 0x410855 - 0x410858
int64_t function_410855(void) {
    // 0x410855
    int64_t result; // 0x410855
    return result;
}

// Address range: 0x41085b - 0x410893
int64_t function_41085b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = a3; // 0x41085b
    int64_t v2; // 0x41085b
    if (v1 - (int32_t)v2 < 0) {
        function_410851();
    }
    int32_t result = __asm_in_133(-108); // 0x410861
    uint32_t v3 = *(int32_t *)(a3 - 45) ^ v1; // 0x410863
    uint32_t v4 = *(int32_t *)(int64_t)v3; // 0x41088a
    uint32_t v5 = v3 - v4; // 0x41088a
    int32_t * v6 = (int32_t *)(4 * (int64_t)v5 + a4); // 0x41088c
    *v6 = *v6 - (int32_t)a4 + (int32_t)(v3 < v4);
    char * v7 = (char *)(a4 - 48); // 0x41088f
    *v7 = *v7 + (char)(v5 / 256);
    return result;
}

// Address range: 0x4108a3 - 0x4108a9
int64_t function_4108a3(int64_t a1) {
    // 0x4108a3
    int64_t v1; // 0x4108a3
    int64_t v2 = v1;
    return (v2 + 234) % 256 | v2 & -256;
}

// Address range: 0x4108b1 - 0x410908
int64_t function_4108b1(int64_t a1) {
    // 0x4108b1
    int64_t v1; // 0x4108b1
    return v1 & -232;
}
