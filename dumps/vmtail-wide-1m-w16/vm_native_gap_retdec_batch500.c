/*
 * Targeted RetDec C for native executable gap queue batch 500.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xd7bc7-0xd7dc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x173caa-0x173eaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x173eaa-0x1740aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1742aa-0x1744aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x3aa415-0x3aa615 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3aa815-0x3aaa15 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42101f-0x42121f rank=- name=- kind=- bytes=- uncovered=-
 *   0x42121f-0x42141f rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_173caa(void);
int64_t function_173d0c(int64_t a1);
int64_t function_173d89(void);
int64_t function_173d95(void);
int64_t function_173dc3(void);
int64_t function_173dd3(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_173e33(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_173e60(int64_t a1);
int64_t function_173e63(int64_t a1);
int64_t function_173e93(int64_t a1, int64_t a2, int64_t a3);
int64_t function_173ec7(void);
int64_t function_173ecb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_173ed0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_173f51(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_173f92(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17400a(void);
int64_t function_1742aa(int64_t a1);
int64_t function_1742cb(int64_t a1);
int64_t function_1742d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1742ec(void);
int64_t function_17431f(void);
int64_t function_174334(void);
int64_t function_174340(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1743b1(void);
int64_t function_1743c8(void);
int64_t function_1743d6(int64_t a1, int64_t a2);
int64_t function_174437(void);
int64_t function_174475(int64_t a1);
int64_t function_174492(void);
int64_t function_174498(void);
int64_t function_1744a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3aa3f7();
int64_t function_3aa415(int64_t a1);
int64_t function_3aa42c(void);
int64_t function_3aa448(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3aa4e6(void);
int64_t function_3aa4ed(void);
int64_t function_3aa539(void);
int64_t function_3aa59f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3aa5c9(void);
int64_t function_3aa7a3();
int64_t function_3aa815(void);
int64_t function_3aa846(void);
int64_t function_3aa854(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3aa895(void);
int64_t function_3aa8c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3aa94e(int64_t a1);
int64_t function_3aa9c2(int64_t a1);
int64_t function_3aa9e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_42101f(void);
int64_t function_421028(void);
int64_t function_421058(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_421061(int64_t a1);
int64_t function_4210af(void);
int64_t function_4210b1(void);
int64_t function_4210bc(int64_t a1);
int64_t function_4210ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4210ef(int64_t a1);
int64_t function_4210f3(void);
int64_t function_421147(int64_t a1, int64_t a2, int64_t a3);
int64_t function_42115e(int64_t a1);
int64_t function_4211de(int64_t a1);
int64_t function_4211e4(void);
int64_t function_421216(int64_t a1);
int64_t function_421272(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_4212b3(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_421366(void);
int64_t function_4213c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_421403(int64_t a1);
int64_t function_d3d2e8d();
int64_t function_d7bc7(void);
int64_t function_d7be3(void);
int64_t function_d7bed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_d7c07(int64_t a1);
int64_t function_d7c65(void);
int64_t function_d7c69(void);
int64_t function_d7c88(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_d7cdc(int64_t a1);
int64_t function_d7ce5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d7d31(void);
int64_t function_d7d54(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_d7d6a(int64_t a1);
int64_t function_d7da0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_ffffffff8c21418b();
int64_t function_ffffffff9044c677();
int64_t function_ffffffff9ade4b24();
int64_t function_ffffffffb1464aa6();
int64_t function_ffffffffe20ff190();
int64_t unknown_138783f9();
int64_t unknown_2236109();
int64_t unknown_2619435b();
int64_t unknown_3a229b3a();
int64_t unknown_4441e44e();
int64_t unknown_74e762ce();
int64_t unknown_7f3b4563();
int64_t unknown_a588bae();
int64_t unknown_ffffffff9ce8e5a3();
int64_t unknown_ffffffffaaa68103();
int64_t unknown_ffffffffca028d9d();
int64_t unknown_fffffffff6a2e285();

// Address range: 0xd7bc7 - 0xd7bc8
int64_t function_d7bc7(void) {
    // 0xd7bc7
    int64_t result; // 0xd7bc7
    return result;
}

// Address range: 0xd7be3 - 0xd7be4
int64_t function_d7be3(void) {
    // 0xd7be3
    int64_t result; // 0xd7be3
    return result;
}

// Address range: 0xd7bed - 0xd7c07
int64_t function_d7bed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xd7bed
    int64_t v1; // 0xd7bed
    char * v2 = (char *)(v1 + 0x1e8a04b); // 0xd7bed
    unsigned char v3 = *v2; // 0xd7bed
    *v2 = v3 / 2 | 128 * v3;
    __asm_out(104, (char)v1);
    uint32_t v4 = (int32_t)a4 % 32; // 0xd7bf7
    if (v4 != 0) {
        int32_t * v5 = (int32_t *)(v1 - 0x79e7ddf8); // 0xd7bf7
        *v5 = *v5 << v4;
    }
    unknown_ffffffffaaa68103(a5);
    return function_ffffffffe20ff190();
}

// Address range: 0xd7c07 - 0xd7c13
int64_t function_d7c07(int64_t a1) {
    // 0xd7c07
    int64_t v1; // 0xd7c07
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a1;
    bool v3; // 0xd7c07
    return (int64_t)v3 & 0xffffffff;
}

// Address range: 0xd7c65 - 0xd7c66
int64_t function_d7c65(void) {
    // 0xd7c65
    int64_t result; // 0xd7c65
    return result;
}

// Address range: 0xd7c69 - 0xd7c6a
int64_t function_d7c69(void) {
    // 0xd7c69
    int64_t result; // 0xd7c69
    return result;
}

// Address range: 0xd7c88 - 0xd7cbd
int64_t function_d7c88(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a2 + 0x42f001e8); // 0xd7c88
    char v2 = *v1; // 0xd7c88
    int64_t v3; // 0xd7c88
    bool v4; // 0xd7c88
    char v5 = (char)v4 + (char)v3; // 0xd7c88
    *v1 = v2 - v5;
    if (v2 > v5) {
        function_d7c65();
    }
    // 0xd7c97
    *(int32_t *)a1 = (int32_t)unknown_ffffffffca028d9d();
    int64_t v6 = v4 ? 0xfffffffc : 4; // 0xd7c9d
    unknown_a588bae((int32_t)(v6 + a1) + (int32_t)a2, (v4 ? -4 : 4) + a2);
    return function_d7c69();
}

// Address range: 0xd7cdc - 0xd7cdd
int64_t function_d7cdc(int64_t a1) {
    // 0xd7cdc
    int64_t result; // 0xd7cdc
    return result;
}

// Address range: 0xd7ce5 - 0xd7d08
int64_t function_d7ce5(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd7ce5
    int64_t v1; // 0xd7ce5
    int64_t v2 = v1 + a1; // 0xd7ce5
    int64_t v3 = unknown_138783f9((int32_t)v2); // 0xd7cf3
    char * v4 = (char *)((v2 & 0xffffffff) + 71); // 0xd7cf8
    *v4 = *v4 + (char)a3;
    unsigned char v5 = (char)v3; // 0xd7cfb
    unsigned char v6 = *(char *)(a2 - 126); // 0xd7cfb
    char v7 = *(char *)0x829b7586; // 0xd7cfe
    *(char *)0x829b7586 = v7 - v5 + (char)(v6 > v5);
    return v3 + 0x9ffe1762 & 0xffffff79 | 134;
}

// Address range: 0xd7d31 - 0xd7d36
int64_t function_d7d31(void) {
    // 0xd7d31
    return function_ffffffff9ade4b24();
}

// Address range: 0xd7d54 - 0xd7d57
int64_t function_d7d54(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xd7d54
    int64_t result; // 0xd7d54
    return result;
}

// Address range: 0xd7d6a - 0xd7d6b
int64_t function_d7d6a(int64_t a1) {
    // 0xd7d6a
    int64_t result; // 0xd7d6a
    return result;
}

// Address range: 0xd7da0 - 0xd7da4
int64_t function_d7da0(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd7da0
    int64_t v1; // 0xd7da0
    bool v2; // 0xd7da0
    int64_t result = v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512; // 0xd7da0
    __asm_out_133((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x173caa - 0x173cab
int64_t function_173caa(void) {
    // 0x173caa
    int64_t result; // 0x173caa
    return result;
}

// Address range: 0x173d0c - 0x173d16
int64_t function_173d0c(int64_t a1) {
    // 0x173d0c
    int64_t result; // 0x173d0c
    *(char *)-0x2b18fe17cb259249 = (char)result;
    return result;
}

// Address range: 0x173d89 - 0x173d8a
int64_t function_173d89(void) {
    // 0x173d89
    int64_t result; // 0x173d89
    return result;
}

// Address range: 0x173d95 - 0x173d97
int64_t function_173d95(void) {
    // 0x173d95
    int64_t v1; // 0x173d95
    return function_173dd3(v1, v1, v1);
}

// Address range: 0x173dc3 - 0x173dd1
int64_t function_173dc3(void) {
    // 0x173dc3
    int64_t result; // 0x173dc3
    bool v1; // 0x173dc3
    if (v1) {
        // 0x173dc7
        *(char *)-0x45b5a314a3fffec3 = (char)result;
        return result;
    }
    // 0x173dc5
    return result;
}

// Address range: 0x173dd3 - 0x173ddb
int64_t function_173dd3(int64_t a1, int64_t a2, uint64_t a3) {
    function_173d89();
    char * v1 = (char *)(a2 - 1); // 0x173dd7
    *v1 = *v1 ^ (char)(a3 / 256);
    return __asm_sti(a1);
}

// Address range: 0x173e33 - 0x173e3a
int64_t function_173e33(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x173e33
    int64_t v1; // 0x173e33
    return 2 * v1 & 0xfffffffe;
}

// Address range: 0x173e60 - 0x173e61
int64_t function_173e60(int64_t a1) {
    // 0x173e60
    int64_t result; // 0x173e60
    return result;
}

// Address range: 0x173e63 - 0x173e64
int64_t function_173e63(int64_t a1) {
    // 0x173e63
    int64_t result; // 0x173e63
    return result;
}

// Address range: 0x173e93 - 0x173e95
int64_t function_173e93(int64_t a1, int64_t a2, int64_t a3) {
    // 0x173e93
    int64_t result; // 0x173e93
    return result;
}

// Address range: 0x173ec7 - 0x173ec8
int64_t function_173ec7(void) {
    // 0x173ec7
    int64_t result; // 0x173ec7
    return result;
}

// Address range: 0x173ecb - 0x173ecf
int64_t function_173ecb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x173ecb
    int64_t v1; // 0x173ecb
    return v1 + a4 & 0xffffffff;
}

// Address range: 0x173ed0 - 0x173edf
int64_t function_173ed0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 - 66); // 0x173ed4
    int64_t v2; // 0x173ed0
    *v1 = *v1 + (int32_t)v2;
    return function_173ec7();
}

// Address range: 0x173f51 - 0x173f60
int64_t function_173f51(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x28ad8ff4); // 0x173f53
    int64_t result; // 0x173f51
    *v1 = *v1 + ((int32_t)result & -256 | 232);
    int64_t v2; // 0x173f51
    *(char *)a4 = *(char *)&v2 + (char)result;
    return result;
}

// Address range: 0x173f92 - 0x173fa3
int64_t function_173f92(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x173f92
    int64_t v1; // 0x173f92
    *(int32_t *)a2 = (int32_t)v1 + 1;
    return function_ffffffff8c21418b();
}

// Address range: 0x17400a - 0x17400f
int64_t function_17400a(void) {
    // 0x17400a
    return function_ffffffffb1464aa6();
}

// Address range: 0x1742aa - 0x1742ae
int64_t function_1742aa(int64_t a1) {
    // 0x1742aa
    int64_t v1; // 0x1742aa
    bool v2; // 0x1742aa
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x1742cb - 0x1742d0
int64_t function_1742cb(int64_t a1) {
    // 0x1742cb
    int64_t v1; // 0x1742cb
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x1742cb
    return __asm_sti((v2 ? -4 : 4) + a1);
}

// Address range: 0x1742d2 - 0x1742df
int64_t function_1742d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)-0x17610320; // 0x1742d7
    *(char *)-0x17610320 = v1 / 128 | 2 * v1;
    int64_t result; // 0x1742d2
    return result;
}

// Address range: 0x1742ec - 0x1742f8
int64_t function_1742ec(void) {
    // 0x1742ec
    int64_t result; // 0x1742ec
    return result;
}

// Address range: 0x17431f - 0x174320
int64_t function_17431f(void) {
    // 0x17431f
    int64_t result; // 0x17431f
    return result;
}

// Address range: 0x174334 - 0x17433b
int64_t function_174334(void) {
    // 0x174334
    return unknown_3a229b3a();
}

// Address range: 0x174340 - 0x174360
int64_t function_174340(int64_t a1, int64_t a2, int64_t a3) {
    // 0x174340
    int64_t v1; // 0x174340
    *(int32_t *)a3 = 2 * (int32_t)v1;
    unknown_4441e44e();
    unknown_2619435b();
    __asm_rcl(*(int32_t *)(a3 + 123));
    return function_17431f();
}

// Address range: 0x1743b1 - 0x1743b3
int64_t function_1743b1(void) {
    // 0x1743b1
    int64_t result; // 0x1743b1
    return result;
}

// Address range: 0x1743c8 - 0x1743cb
int64_t function_1743c8(void) {
    // 0x1743c8
    int64_t result; // 0x1743c8
    return result;
}

// Address range: 0x1743d6 - 0x1743da
int64_t function_1743d6(int64_t a1, int64_t a2) {
    // 0x1743d6
    return a1 & 0xffffffff;
}

// Address range: 0x174437 - 0x17443c
int64_t function_174437(void) {
    // 0x174437
    int64_t result; // 0x174437
    return result;
}

// Address range: 0x174475 - 0x174478
int64_t function_174475(int64_t a1) {
    // 0x174475
    int64_t result; // 0x174475
    return result;
}

// Address range: 0x174492 - 0x174496
int64_t function_174492(void) {
    // 0x174492
    int64_t v1; // 0x174492
    __asm_out(122, (char)v1);
    return function_1744a2(v1, v1, v1, v1);
}

// Address range: 0x174498 - 0x1744a2
int64_t function_174498(void) {
    // 0x174498
    return unknown_ffffffff9ce8e5a3();
}

// Address range: 0x1744a2 - 0x1744a8
int64_t function_1744a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x359f23f6); // 0x1744a2
    *v1 = *v1 >> 1;
    int64_t result; // 0x1744a2
    return result;
}

// Address range: 0x3aa415 - 0x3aa422
int64_t function_3aa415(int64_t a1) {
    // 0x3aa415
    int64_t result; // 0x3aa415
    int64_t v1; // 0x3aa415
    if ((int32_t)v1 < 0x408ed101) {
        result = function_3aa3f7();
    }
    // 0x3aa421
    return result;
}

// Address range: 0x3aa42c - 0x3aa42d
int64_t function_3aa42c(void) {
    // 0x3aa42c
    int64_t result; // 0x3aa42c
    return result;
}

// Address range: 0x3aa448 - 0x3aa465
int64_t function_3aa448(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3aa448
    int64_t v1; // 0x3aa448
    __asm_out_134((int16_t)a3, (char)v1);
    char * v2 = (char *)(8 * a3 - 78 + (v1 & 0xffffffff)); // 0x3aa455
    *v2 = *v2 + (char)v1;
    bool v3; // 0x3aa448
    char * v4 = (char *)(a1 - 108 + (v3 ? -4 : 4)); // 0x3aa460
    *v4 = *v4 | (char)(v1 / 256);
    return function_3aa42c();
}

// Address range: 0x3aa4e6 - 0x3aa4eb
int64_t function_3aa4e6(void) {
    // 0x3aa4e6
    return __asm_in(-79);
}

// Address range: 0x3aa4ed - 0x3aa4ee
int64_t function_3aa4ed(void) {
    // 0x3aa4ed
    int64_t result; // 0x3aa4ed
    return result;
}

// Address range: 0x3aa539 - 0x3aa53b
int64_t function_3aa539(void) {
    // 0x3aa539
    return function_3aa4ed();
}

// Address range: 0x3aa59f - 0x3aa5a9
int64_t function_3aa59f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3aa59f
    int64_t result; // 0x3aa59f
    *(char *)result = (char)a6;
    return result;
}

// Address range: 0x3aa5c9 - 0x3aa5ca
int64_t function_3aa5c9(void) {
    // 0x3aa5c9
    int64_t result; // 0x3aa5c9
    return result;
}

// Address range: 0x3aa815 - 0x3aa81c
int64_t function_3aa815(void) {
    int64_t result = unknown_2236109(); // 0x3aa81a
    bool v1; // 0x3aa815
    if (v1 || false) {
        result = function_3aa7a3();
    }
    // 0x3aa81c
    return result;
}

// Address range: 0x3aa846 - 0x3aa847
int64_t function_3aa846(void) {
    // 0x3aa846
    int64_t result; // 0x3aa846
    return result;
}

// Address range: 0x3aa854 - 0x3aa878
int64_t function_3aa854(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3aa854
    int64_t v1; // 0x3aa854
    char * v2 = (char *)(v1 + 0x48c6c600); // 0x3aa854
    *v2 = *v2 + (char)v1;
    char * v3 = (char *)(a3 + 1); // 0x3aa85a
    *v3 = *v3 + (char)(v1 / 256);
    unknown_7f3b4563();
    char * v4 = (char *)(8 * a4 - 0x76f58ec6 + v1); // 0x3aa864
    *v4 = *v4 + (char)v1;
    return unknown_fffffffff6a2e285();
}

// Address range: 0x3aa895 - 0x3aa896
int64_t function_3aa895(void) {
    // 0x3aa895
    int64_t result; // 0x3aa895
    return result;
}

// Address range: 0x3aa8c4 - 0x3aa8d2
int64_t function_3aa8c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3aa8c4
    int64_t v1; // 0x3aa8c4
    *(char *)a1 = (char)v1;
    bool v2; // 0x3aa8c4
    unknown_74e762ce((v2 ? -1 : 1) + a1);
    return function_ffffffff9044c677();
}

// Address range: 0x3aa94e - 0x3aa951
int64_t function_3aa94e(int64_t a1) {
    // 0x3aa94e
    int64_t result; // 0x3aa94e
    return result;
}

// Address range: 0x3aa9c2 - 0x3aa9c3
int64_t function_3aa9c2(int64_t a1) {
    // 0x3aa9c2
    int64_t result; // 0x3aa9c2
    return result;
}

// Address range: 0x3aa9e4 - 0x3aa9e7
int64_t function_3aa9e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3aa9e4
    int64_t result; // 0x3aa9e4
    return result;
}

// Address range: 0x42101f - 0x421020
int64_t function_42101f(void) {
    // 0x42101f
    int64_t result; // 0x42101f
    return result;
}

// Address range: 0x421028 - 0x42102a
int64_t function_421028(void) {
    // 0x421028
    int64_t v1; // 0x421028
    return function_421061(v1);
}

// Address range: 0x421058 - 0x421061
int64_t function_421058(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x421058
    int64_t result; // 0x421058
    return result;
}

// Address range: 0x421061 - 0x42106d
int64_t function_421061(int64_t a1) {
    // 0x421061
    int64_t v1; // 0x421061
    uint32_t v2 = (int32_t)v1; // 0x421061
    bool v3; // 0x421061
    uint32_t v4 = v3 ? -0x74cfaeb4 : -0x74cfaeb5; // 0x421061
    uint32_t result = (v3 | v4 > v2 ? -0x1f0f9843 : -0x1f0f9842) + v2 - v4; // 0x421066
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x4210af - 0x4210b0
int64_t function_4210af(void) {
    // 0x4210af
    int64_t result; // 0x4210af
    return result;
}

// Address range: 0x4210b1 - 0x4210b2
int64_t function_4210b1(void) {
    // 0x4210b1
    int64_t result; // 0x4210b1
    return result;
}

// Address range: 0x4210bc - 0x4210c1
int64_t function_4210bc(int64_t a1) {
    // 0x4210bc
    int64_t v1; // 0x4210bc
    int64_t v2 = v1;
    return (v2 + 252) % 256 | v2 & -256;
}

// Address range: 0x4210ce - 0x4210d3
int64_t function_4210ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4210ce
    int64_t v1; // 0x4210ce
    *(char *)a4 = 2 * (char)v1;
    return function_4210af();
}

// Address range: 0x4210ef - 0x4210f3
int64_t function_4210ef(int64_t a1) {
    // 0x4210ef
    int64_t result; // 0x4210ef
    bool v1; // 0x4210ef
    if (v1) {
        result = function_4210b1();
    }
    // 0x4210f1
    return result;
}

// Address range: 0x4210f3 - 0x4210f8
int64_t function_4210f3(void) {
    // 0x4210f3
    int64_t result; // 0x4210f3
    return result;
}

// Address range: 0x421147 - 0x421155
int64_t function_421147(int64_t a1, int64_t a2, int64_t a3) {
    // 0x421147
    int64_t v1; // 0x421147
    int64_t v2 = v1;
    return (v2 & 0xff00) + a3 & 0xff00 | v2 & -0xff01;
}

// Address range: 0x42115e - 0x42115f
int64_t function_42115e(int64_t a1) {
    // 0x42115e
    int64_t result; // 0x42115e
    return result;
}

// Address range: 0x4211de - 0x4211e1
int64_t function_4211de(int64_t a1) {
    // 0x4211de
    int64_t result; // 0x4211de
    return result;
}

// Address range: 0x4211e4 - 0x4211e5
int64_t function_4211e4(void) {
    // 0x4211e4
    int64_t result; // 0x4211e4
    return result;
}

// Address range: 0x421216 - 0x421217
int64_t function_421216(int64_t a1) {
    // 0x421216
    int64_t result; // 0x421216
    return result;
}

// Address range: 0x421272 - 0x421279
int64_t function_421272(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x421272
    int64_t v1; // 0x421272
    bool v2; // 0x421272
    *(char *)a1 = (char)v1 + (char)(a4 / 256) + (char)v2;
    return a4 & 0xffffffff;
}

// Address range: 0x4212b3 - 0x421309
int64_t function_4212b3(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4212b3
    int64_t v1; // 0x4212b3
    uint64_t v2 = v1;
    bool v3; // 0x4212b3
    unsigned char v4 = (char)(v2 / 256) + (char)a4 + (char)v3; // 0x4212b3
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x4212b3
    __asm_out_135(108, (int32_t)a1);
    if (v5 % 2 != 0) {
        // 0x4212bc
        return a1 & 0xffffffff;
    }
    char v6 = *(char *)((256 * (int64_t)v4 | v2 & 0xffff00ff) - 16); // 0x421300
    return 256 * (int64_t)((char)(a1 / 256) - v6) | a1 & 0xffff00ff;
}

// Address range: 0x421366 - 0x42136b
int64_t function_421366(void) {
    // 0x421366
    return function_d3d2e8d();
}

// Address range: 0x4213c4 - 0x4213e1
int64_t function_4213c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4213c4
    int64_t v1; // 0x4213c4
    uint64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)(2 * v2 & 254 | v2 & 0xffffff00);
    bool v3; // 0x4213c4
    __readfsbyte(a4 + 7 + 8 * ((v3 ? 0x1ffffffffffffffc : 4) + a1));
    int64_t v4; // 0x4213c4
    uint32_t v5 = *(int32_t *)&v4; // 0x4213d6
    uint64_t v6 = (v2 / 256 % 256 | v2 & 0xffff0000 | 512 * v2 & 0xfe00) * (int64_t)v5; // 0x4213d6
    char v7 = (char)v6 ^ -96; // 0x4213d8
    int64_t result = v6 & 0xffffff00 | (int64_t)v7; // 0x4213d8
    if (v7 >= 0) {
        // 0x421414
        return result;
    }
    // 0x4213dc
    __asm_outsd((int16_t)(v6 / 0x100000000), v5);
    return result;
}

// Address range: 0x421403 - 0x421413
int64_t function_421403(int64_t a1) {
    // 0x421403
    int64_t v1; // 0x421403
    bool v2; // 0x421403
    if (true != !v2) {
        // 0x421405
        v1 = __asm_hlt();
    }
    unsigned char v3 = (char)v1; // 0x42140b
    unsigned char v4 = v2 ? 94 : 93; // 0x42140b
    return v1 & -256 | (int64_t)(v3 - v4 + (v2 | v4 > v3 ? -38 : -37));
}
