/*
 * Targeted RetDec C for native executable gap queue batch 442.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xf4f9c-0xf519c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf539c-0xf559c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf559c-0xf579c rank=- name=- kind=- bytes=- uncovered=-
 *   0x10fdbf-0x10ffbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x10ffbf-0x1101bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1101bf-0x1103bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1103bf-0x1105bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x3fc6d1-0x3fc8d1 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_10fdbf(void);
int64_t function_10fe17(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10fec5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_10fed5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_10ffe2(void);
int64_t function_10ffe6(void);
int64_t function_110020(void);
int64_t function_11003c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1100aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1100ba(int64_t a1);
int64_t function_11010d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_11019f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1101b1(void);
int64_t function_1101ee(void);
int64_t function_110209(void);
int64_t function_11020f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11021e(void);
int64_t function_110250(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_110260(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_110278(void);
int64_t function_110282(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1102ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_110319(int64_t a1);
int64_t function_110325(void);
int64_t function_110331(int64_t a1);
int64_t function_110361(int64_t a1, int64_t a2, int64_t a3);
int64_t function_110365(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1103a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_110467(void);
int64_t function_110482(int64_t a1, int64_t a2);
int64_t function_1104b0(int64_t a1, int64_t a2);
int64_t function_11055d(void);
int64_t function_1105ae(void);
int64_t function_3fc6d1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3fc6e5(int64_t a1);
int64_t function_3fc6ed(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_3fc7e1(int64_t a1);
int64_t function_3fc827(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3fc83c(int64_t a1);
int64_t function_3fc850(int64_t a1);
int64_t function_f4f9c(void);
int64_t function_f4f9f(int64_t a1);
int64_t function_f4ff6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f50b5(void);
int64_t function_f5126(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f534d();
int64_t function_f539c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f53b8(void);
int64_t function_f53c1(int64_t a1);
int64_t function_f53c9(int64_t a1);
int64_t function_f53fb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_f54ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f5553(void);
int64_t function_f557f(void);
int64_t function_f55f8(void);
int64_t function_f5653(void);
int64_t function_f565d(void);
int64_t function_f5689(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f56aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ffffffff8e1502ac();
int64_t function_ffffffffabc4bbb6();
int64_t function_ffffffffe86eb3dd();
int64_t function_fffffffff7881f30();
int64_t unknown_11019358();
int64_t unknown_2575e391();
int64_t unknown_3d12e6ea();
int64_t unknown_3d1b8bd9();
int64_t unknown_410ef648();
int64_t unknown_4321eeb7();
int64_t unknown_4a769b1a();
int64_t unknown_6815ea0f();
int64_t unknown_ffffffff905638bd();
int64_t unknown_ffffffff9188a8dc();
int64_t unknown_ffffffff91c0774a();
int64_t unknown_ffffffff95069957();
int64_t unknown_ffffffffa46178b2();
int64_t unknown_ffffffffa795b869();
int64_t unknown_ffffffffaf26baee();
int64_t unknown_ffffffffb42ee81e();
int64_t unknown_ffffffffbe2be5eb();
int64_t unknown_ffffffffbec53ce0();
int64_t unknown_ffffffffbf12ec8e();
int64_t unknown_ffffffffbf2716dd();
int64_t unknown_ffffffffc7a12df4();
int64_t unknown_ffffffffd3c5876d();
int64_t unknown_ffffffffe890f3f9();
int64_t unknown_ffffffffef601160();
int64_t unknown_fffffffffdedc33f();

// Address range: 0xf4f9c - 0xf4f9e
int64_t function_f4f9c(void) {
    // 0xf4f9c
    int64_t v1; // 0xf4f9c
    return function_f4ff6(v1, v1, v1, v1, (int64_t)&g2);
}

// Address range: 0xf4f9f - 0xf4fa2
int64_t function_f4f9f(int64_t a1) {
    // 0xf4f9f
    int64_t result; // 0xf4f9f
    return result;
}

// Address range: 0xf4ff6 - 0xf501a
int64_t function_f4ff6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xf4ff6
    int64_t v1; // 0xf4ff6
    int64_t v2 = v1;
    int16_t v3 = a5; // 0xf5002
    __asm_in(v3);
    __asm_in_133(v3);
    int64_t v4 = __asm_int3(a1, a2); // 0xf500b
    int32_t * v5 = (int32_t *)(a2 - 0x3bfe1707); // 0xf500c
    *v5 = *v5 + 1;
    char * v6 = (char *)(v4 + 6); // 0xf5014
    *v6 = *v6 + -1 - (*(char *)(v2 + 4 * a4) | (char)v2);
    __asm_in_134(-41);
    return a5 & 0xffffffff;
}

// Address range: 0xf50b5 - 0xf50bc
int64_t function_f50b5(void) {
    // 0xf50b5
    int64_t result; // 0xf50b5
    return result;
}

// Address range: 0xf5126 - 0xf519c
int64_t function_f5126(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a1;
    int64_t v3; // 0xf5126
    char v4 = v3; // 0xf5126
    *(char *)-0x178765514253fedd = v4;
    *(int32_t *)a3 = (int32_t)a4 + (int32_t)a3;
    unsigned char v5 = *(char *)&v1; // 0xf5133
    unsigned char v6 = v5 + (v4 | (char)&g1); // 0xf5133
    char * v7 = (char *)a3; // 0xf5133
    *v7 = v6;
    *v7 = *(char *)&v1 + (char)(v3 / 256) + (char)(v6 < v5);
    int64_t v8 = unknown_fffffffffdedc33f(); // 0xf5139
    int64_t v9; // 0xf5126
    unsigned char v10 = *(char *)&v9; // 0xf513e
    bool v11; // 0xf5126
    v9 = (v11 ? -1 : 1) + a2;
    int64_t v12 = unknown_410ef648(); // 0xf5142
    unsigned char v13 = (char)v12 & 22; // 0xf5147
    if (llvm_ctpop_i8(v13) % 2 == 0) {
        // 0xf51a2
        return v12 & -256 | (int64_t)v13;
    }
    uint64_t v14 = v8 & 0xffffff00; // 0xf513e
    int64_t v15 = v1; // bp-8, 0xf515f
    int64_t v16 = unknown_ffffffffef601160() + 0x7ffff092; // 0xf5163
    int32_t * v17 = (int32_t *)(v3 - 0x4dff5400); // 0xf516a
    int64_t v18; // 0xf5126
    *v17 = *v17 + (int32_t)(int64_t)&v18;
    uint32_t v19 = *(int32_t *)&v2; // 0xf5170
    v2 += (v11 ? -4 : 4);
    int64_t v20 = v19 > (int32_t)((v16 + v14 / 256) % 256 | v16 & 0xffffff00) ? 3 : 2; // 0xf5174
    __asm_in_135(-123);
    int32_t * v21 = (int32_t *)(v3 & -256 | 226); // 0xf5182
    *v21 = 0x400000 * *v21;
    int64_t v22 = unknown_2575e391(); // 0xf518b
    int32_t v23 = *(int32_t *)((v9 - v20 & 0xffffffff) + 0x7c2d5007); // 0xf5190
    int32_t v24 = v22; // 0xf5196
    int32_t * v25 = (int32_t *)(v14 | (int64_t)v10); // 0xf5199
    *v25 = *v25 + (v24 >> 31);
    return (int32_t)(int64_t)&v15 - v23 + v24;
}

// Address range: 0xf539c - 0xf53b0
int64_t function_f539c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf539c
    *(char *)a1 = (char)a4 + (char)a1;
    int64_t v1; // 0xf539c
    unsigned char v2 = (char)v1 & 58; // 0xf53a1
    unsigned char v3 = llvm_ctpop_i8(v2); // 0xf53a1
    int64_t result = v1 & -256 | (int64_t)v2; // 0xf53a3
    if (v3 % 2 == 0) {
        result = function_f534d();
    }
    char * v4 = (char *)(a2 - 24); // 0xf53a7
    *v4 = *v4 + 1;
    int32_t * v5 = (int32_t *)(a1 - 107); // 0xf53aa
    *v5 = *v5 + *(int32_t *)result;
    return result;
}

// Address range: 0xf53b8 - 0xf53bd
int64_t function_f53b8(void) {
    // 0xf53b8
    return function_ffffffffabc4bbb6();
}

// Address range: 0xf53c1 - 0xf53c4
int64_t function_f53c1(int64_t a1) {
    // 0xf53c1
    int64_t v1; // 0xf53c1
    int64_t v2 = v1;
    return (v2 + 12) % 256 | v2 & -256;
}

// Address range: 0xf53c9 - 0xf53f9
int64_t function_f53c9(int64_t a1) {
    // 0xf53c9
    __asm_in_134(-102);
    int64_t v1 = unknown_ffffffff9188a8dc(); // 0xf53d6
    char * v2 = (char *)v1; // 0xf53db
    *v2 = *v2 + (char)v1;
    int64_t v3; // 0xf53c9
    char * v4 = (char *)(8 * v3 - 0x2ae25167 + v1); // 0xf53dd
    *v4 = *v4 | (char)(v3 / 256);
    unknown_ffffffffbe2be5eb();
    __asm_int(-124);
    return __asm_int1();
}

// Address range: 0xf53fb - 0xf54ea
int64_t function_f53fb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xf53fb
    int64_t v1; // 0xf53fb
    uint64_t v2 = v1;
    int64_t v3 = unknown_ffffffffd3c5876d(); // 0xf53fb
    int32_t * v4 = (int32_t *)(a4 - 10); // 0xf5402
    uint32_t v5 = *v4; // 0xf5402
    uint32_t v6 = v5 + (int32_t)a4; // 0xf5402
    *v4 = v6;
    if (v6 < v5 || v6 == 0) {
        unsigned char v7 = (char)(v2 / 256); // 0xf5407
        unsigned char v8 = v7 + (char)v2; // 0xf5407
        bool v9 = v6 < v5 ? v8 + (char)(v6 < v5) <= v7 : v8 < v7; // 0xf5407
        int32_t v10 = *(int32_t *)0x1e8ff84bcb20079; // 0xf5409
        return (int32_t)v9 + (int32_t)a1 + v10;
    }
    // 0xf5460
    *(char *)a1 = __asm_insb((int16_t)a3);
    return (v3 + a4 / 256) % 256 | v3 & -256;
}

// Address range: 0xf54ec - 0xf54ef
int64_t function_f54ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf54ec
    int64_t result; // 0xf54ec
    return result;
}

// Address range: 0xf5553 - 0xf5554
int64_t function_f5553(void) {
    // 0xf5553
    int64_t result; // 0xf5553
    return result;
}

// Address range: 0xf557f - 0xf5580
int64_t function_f557f(void) {
    // 0xf557f
    int64_t result; // 0xf557f
    return result;
}

// Address range: 0xf55f8 - 0xf55fa
int64_t function_f55f8(void) {
    // 0xf55f8
    return function_f557f();
}

// Address range: 0xf5653 - 0xf5654
int64_t function_f5653(void) {
    // 0xf5653
    int64_t result; // 0xf5653
    return result;
}

// Address range: 0xf565d - 0xf565f
int64_t function_f565d(void) {
    // 0xf565d
    return function_f5653();
}

// Address range: 0xf5689 - 0xf56aa
int64_t function_f5689(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xf5689
    int64_t v1; // 0xf5689
    int32_t * v2 = (int32_t *)(v1 - 24); // 0xf568b
    *v2 = *v2 - (int32_t)a3;
    int64_t v3; // 0xf5689
    int64_t v4 = v3;
    *(int32_t *)v4 = *(int32_t *)&v3 + (int32_t)v4;
    float80_t v5; // 0xf5689
    *(int16_t *)(8 * v1 + 0x5b8cc401 + v3) = (int16_t)v5;
    int64_t v6; // 0xf5689
    unsigned char v7 = *(char *)&v6; // 0xf569d
    unsigned char v8 = (char)a4; // 0xf569d
    char * v9 = (char *)a1; // 0xf569d
    *v9 = v7 - v8;
    int64_t v10; // 0xf5689
    *v9 = *(char *)&v10;
    return v3 - (v7 < v8 ? 0x1e8d301 : 0x1e8d300) & 0xffffffff;
}

// Address range: 0xf56aa - 0xf5750
int64_t function_f56aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    uint32_t v2 = (int32_t)a1; // 0xf56aa
    int64_t v3; // 0xf56aa
    uint32_t v4 = (int32_t)v3 + v2; // 0xf56aa
    unknown_ffffffffa46178b2(v4);
    char * v5 = (char *)(v3 - 0x7d0450ff); // 0xf56b1
    *v5 = (char)(v4 < v2) - (char)v3 + *v5;
    int64_t v6 = unknown_ffffffff905638bd(); // 0xf56b7
    *(int32_t *)a3 = *(int32_t *)&v1 + (int32_t)a3;
    char v7 = *(char *)(a3 - 82) | (char)v6; // 0xf56c7
    if (v7 < 0) {
        // 0xf574f
        return v6 & -256 | (int64_t)v7;
    }
    int64_t v8 = a3 + a2; // 0xf56bc
    char * v9 = (char *)(v8 & 0xffffffff); // 0xf56d6
    *v9 = *v9 | (char)v1;
    int32_t v10 = v8; // 0xf56d9
    __asm_iretd((int64_t)v4, v10, v1);
    unknown_ffffffffbec53ce0();
    int32_t * v11 = (int32_t *)(v3 - 0xf2986ee); // 0xf56e6
    *v11 = *v11 + v10;
    return unknown_ffffffffc7a12df4();
}

// Address range: 0x10fdbf - 0x10fdc0
int64_t function_10fdbf(void) {
    // 0x10fdbf
    int64_t result; // 0x10fdbf
    return result;
}

// Address range: 0x10fe17 - 0x10febe
int64_t function_10fe17(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10fe17
    int64_t v1; // 0x10fe17
    uint64_t v2 = v1;
    *(char *)-0x44e2f5ea = (char)a4;
    __asm_out(78, (int32_t)v2);
    *(char *)0x2792912d = *(char *)0x2792912d + (char)(v1 / 256);
    int64_t v3 = 256 * (int64_t)(*(char *)(v2 - 37) | (char)(v2 / 256)); // 0x10fe32
    int64_t v4 = v2 & -0xff01; // 0x10fe32
    if (a4 == 1) {
        int64_t v5 = v3 + v1 & 0xff00 | v4; // 0x10fe37
        int32_t v6 = *(int32_t *)v5 + (int32_t)v5; // 0x10fe39
        return (v6 + 89) % 256 | v6 & -256;
    }
    int64_t v7 = a3 & -256 | (int64_t)(*(char *)(a1 + 0x1e839c6) & (char)a3); // 0x10fe17
    int64_t result = v3 | v4; // 0x10fe32
    int32_t * v8 = (int32_t *)(a1 - 81); // 0x10fe9f
    uint32_t v9 = *v8; // 0x10fe9f
    int32_t v10 = v7; // 0x10fe9f
    int32_t v11 = v9 + v10; // 0x10fe9f
    *v8 = v11;
    if (v11 < 0) {
        // 0x10fea9
        return result;
    }
    // 0x10feaf
    int64_t v12; // 0x10fe17
    __asm_outsd((int16_t)v7, *(int32_t *)&v12);
    int32_t * v13 = (int32_t *)(v1 + 0x13d0001); // 0x10feb0
    uint32_t v14 = *v13; // 0x10feb0
    *v13 = v14 / 0x10000 | 0x10000 * (int32_t)(v11 < v9) | 0x20000 * v14;
    int32_t * v15 = (int32_t *)(result + 4 * v7); // 0x10feb7
    *v15 = *v15 & v10;
    return result ^ 14;
}

// Address range: 0x10fec5 - 0x10fed4
int64_t function_10fec5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x10fec5
    int64_t v1; // 0x10fec5
    uint32_t result = (int32_t)v1 - *(int32_t *)(a1 + 25); // 0x10fec5
    *(char *)a4 = (char)v1 + (char)(a3 / 256) + (char)(result < 0xcfbc0001);
    return result;
}

// Address range: 0x10fed5 - 0x10ff1d
int64_t function_10fed5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x10fed5
    int64_t v1; // 0x10fed5
    int64_t v2 = v1;
    int64_t v3 = a2;
    *(char *)(a1 + 0x230a2a67) = (char)(unknown_ffffffffbf2716dd() / 256);
    unknown_3d12e6ea();
    int32_t * v4 = (int32_t *)(a3 - 42); // 0x10fee9
    *v4 = *v4 + (int32_t)v1;
    int32_t * v5 = (int32_t *)(2 * a4 - 0x5f43bbc + v3); // 0x10feec
    *v5 = *v5 & (int32_t)a4;
    int32_t v6 = (int32_t)unknown_ffffffffe890f3f9() + 0x6895be1d; // 0x10fef8
    __asm_out(-90, v6);
    while (v6 >= 0) {
        // 0x10fee9
        *v4 = *v4 + (int32_t)v1;
        v5 = (int32_t *)(2 * a4 - 0x5f43bbc + v3);
        *v5 = *v5 & (int32_t)a4;
        v6 = (int32_t)unknown_ffffffffe890f3f9() + 0x6895be1d;
        __asm_out(-90, v6);
    }
    // 0x10ff01
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)a1;
    int32_t * v7 = (int32_t *)(a3 - 125); // 0x10ff03
    *v7 = *v7 | (int32_t)(v2 - 256 * a3 & 0xff00 | v2 & 0xffff00ff);
    *(char *)((int64_t)v6 + 0x7a957000) = (char)v2;
    unknown_4a769b1a();
    return __asm_wait();
}

// Address range: 0x10ffe2 - 0x10ffe4
int64_t function_10ffe2(void) {
    // 0x10ffe2
    int64_t result; // 0x10ffe2
    return result;
}

// Address range: 0x10ffe6 - 0x10ffe7
int64_t function_10ffe6(void) {
    // 0x10ffe6
    int64_t result; // 0x10ffe6
    return result;
}

// Address range: 0x110020 - 0x110021
int64_t function_110020(void) {
    // 0x110020
    int64_t result; // 0x110020
    return result;
}

// Address range: 0x11003c - 0x11006b
int64_t function_11003c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int64_t v2; // 0x11003c
    *(char *)a4 = (char)v2;
    unknown_ffffffff91c0774a();
    *(char *)v1 = *(char *)&v1 + (char)((uint64_t)v2 / 256);
    if (a4 == 0) {
        function_10ffe6();
    }
    // 0x11004f
    unknown_ffffffff95069957();
    int64_t result = unknown_ffffffffaf26baee(); // 0x110057
    int32_t * v3 = (int32_t *)result; // 0x110061
    uint32_t v4 = *v3 + (int32_t)v1; // 0x110061
    *v3 = v4 / 0x2000000 | 128 * v4;
    *(char *)v1 = (char)result;
    return result;
}

// Address range: 0x1100aa - 0x1100b8
int64_t function_1100aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1100aa
    int64_t result; // 0x1100aa
    if (a4 != 1) {
        // 0x1100b9
        return result;
    }
    // 0x1100ac
    *(char *)a1 = (char)result;
    char v1 = *(char *)0x5cce57b4; // 0x1100ad
    *(char *)0x5cce57b4 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x1100ba - 0x1100bb
int64_t function_1100ba(int64_t a1) {
    // 0x1100ba
    int64_t result; // 0x1100ba
    return result;
}

// Address range: 0x11010d - 0x11011e
int64_t function_11010d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x11010d
    return function_fffffffff7881f30();
}

// Address range: 0x11019f - 0x1101a2
int64_t function_11019f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x11019f
    int64_t result; // 0x11019f
    return result;
}

// Address range: 0x1101b1 - 0x1101b8
int64_t function_1101b1(void) {
    // 0x1101b1
    unknown_4321eeb7();
    return unknown_6815ea0f();
}

// Address range: 0x1101ee - 0x1101f4
int64_t function_1101ee(void) {
    // 0x1101ee
    int64_t v1; // 0x1101ee
    int64_t v2 = v1;
    bool v3; // 0x1101ee
    *(int32_t *)v2 = 2 * (int32_t)v2 | (int32_t)v3;
    int64_t result; // 0x1101ee
    *(char *)result = *(char *)&result + 64;
    return result;
}

// Address range: 0x110209 - 0x11020e
int64_t function_110209(void) {
    // 0x110209
    return unknown_6815ea0f();
}

// Address range: 0x11020f - 0x11021e
int64_t function_11020f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11020f
    int64_t v1; // 0x11020f
    __asm_out_136(84, (char)v1);
    return unknown_ffffffffb42ee81e();
}

// Address range: 0x11021e - 0x110223
int64_t function_11021e(void) {
    // 0x11021e
    return function_ffffffff8e1502ac();
}

// Address range: 0x110250 - 0x110260
int64_t function_110250(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = unknown_11019358(); // 0x110252
    char * v2 = (char *)(a3 + 0x39b439e); // 0x110257
    *v2 = *v2 | (char)(v1 / 256);
    return (v1 + 72) % 256 | v1 & -256;
}

// Address range: 0x110260 - 0x110269
int64_t function_110260(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x110260
    return unknown_ffffffffa795b869(a1, a2, a3, a4, a5);
}

// Address range: 0x110278 - 0x110282
int64_t function_110278(void) {
    // 0x110278
    return function_ffffffffe86eb3dd();
}

// Address range: 0x110282 - 0x1102a9
int64_t function_110282(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 - 32); // 0x110282
    int64_t v2; // 0x110282
    *v1 = *v1 + (int32_t)v2;
    int32_t * v3 = (int32_t *)(v2 + 0x9442a8b); // 0x110286
    uint32_t v4 = *v3; // 0x110286
    uint32_t v5 = v4 + (int32_t)a3; // 0x110286
    *v3 = v5;
    char v6 = __asm_in((int16_t)a3); // 0x1102a1
    char * v7 = (char *)(a4 - 0x59af3e00); // 0x1102a2
    *v7 = *v7 & (char)a3;
    return v2 - (v5 < v4 ? 0xe837f28c : 0xe837f28b) & 0xffffff00 | (int64_t)v6;
}

// Address range: 0x1102ba - 0x1102c7
int64_t function_1102ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1102ba
    int64_t v1; // 0x1102ba
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a4 - 0x2c38ec0c); // 0x1102bc
    *v3 = ((int32_t)v1 & -256 | 232) + *v3;
    return (v2 + 232) % 256 | v2 & -256;
}

// Address range: 0x110319 - 0x11031c
int64_t function_110319(int64_t a1) {
    // 0x110319
    int64_t result; // 0x110319
    return result;
}

// Address range: 0x110325 - 0x11032a
int64_t function_110325(void) {
    // 0x110325
    int64_t v1; // 0x110325
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x110331 - 0x110340
int64_t function_110331(int64_t a1) {
    // 0x110331
    int64_t v1; // 0x110331
    *(char *)a1 = 2 * (char)v1;
    __asm_int((char)a1);
    return function_110365(a1, v1, v1, v1, v1);
}

// Address range: 0x110361 - 0x110365
int64_t function_110361(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a2 + 45); // 0x110361
    unsigned char v2 = *v1; // 0x110361
    unsigned char v3 = (char)a3; // 0x110361
    char v4 = v2 - v3; // 0x110361
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x110361
    *v1 = v4;
    int64_t v6; // 0x110361
    return v6 & -0xff01 | 256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v2 < v3) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v2 % 16 - v3 % 16 > 15) | 4 * (int64_t)(v5 % 2 == 0)) | 512;
}

// Address range: 0x110365 - 0x11038d
int64_t function_110365(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x110365
    int64_t v1; // 0x110365
    *(int32_t *)a5 = (int32_t)v1 + 61;
    int32_t * v2 = (int32_t *)(a3 - 0x5a9bbe36); // 0x11036d
    *v2 = *v2 + (int32_t)a2;
    __asm_out(-23, (int32_t)v1);
    return v1 & 0xe5b74f3a;
}

// Address range: 0x1103a9 - 0x1103ea
int64_t function_1103a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1103a9
    int64_t v1; // 0x1103a9
    int64_t v2 = v1 + (a3 & 0xff00) & 0xff00 | a3 & -0xff01; // 0x1103a9
    int32_t * v3 = (int32_t *)(v2 - 48); // 0x1103ab
    uint32_t v4 = *v3; // 0x1103ab
    *v3 = v4 / 512 | 0x800000 * v4;
    *(char *)0xedadfb7 = *(char *)0xedadfb7 + (char)v1;
    int32_t * v5 = (int32_t *)(v1 + 0x1f5c0658); // 0x1103bd
    *v5 = (int32_t)a1;
    __asm_iretd((int64_t)*v5, (int32_t)a2, v2);
    int32_t * v6 = (int32_t *)(v2 + 0x420a87fa); // 0x1103ca
    *v6 = *v6 + (int32_t)a4;
    unknown_3d1b8bd9();
    *(int32_t *)-0x29fffec2f4dfff98 = -0x58aa3f6b;
    return (int64_t)(*(int32_t *)(v1 + 38) & -0x58aa3f6b);
}

// Address range: 0x110467 - 0x110468
int64_t function_110467(void) {
    // 0x110467
    int64_t result; // 0x110467
    return result;
}

// Address range: 0x110482 - 0x110495
int64_t function_110482(int64_t a1, int64_t a2) {
    // 0x110482
    *(int64_t *)0x7500b307 = a2;
    int64_t v1 = unknown_ffffffffbf12ec8e(); // 0x110488
    *(int64_t *)0x7500b2ff = -0x1509fec3;
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x1104b0 - 0x1104bb
int64_t function_1104b0(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)-0x45191261 + (int32_t)a2; // 0x1104b0
    *(int32_t *)-0x45191261 = v1;
    int64_t result; // 0x1104b0
    if (v1 != 0) {
        result = function_110467();
    }
    // 0x1104b8
    return result;
}

// Address range: 0x11055d - 0x110560
int64_t function_11055d(void) {
    // 0x11055d
    int64_t result; // 0x11055d
    return result;
}

// Address range: 0x1105ae - 0x1105b1
int64_t function_1105ae(void) {
    // 0x1105ae
    int64_t result; // 0x1105ae
    return result;
}

// Address range: 0x3fc6d1 - 0x3fc6d6
int64_t function_3fc6d1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3fc6d1
    *(int64_t *)a3 = a2;
    bool v1; // 0x3fc6d1
    int64_t v2 = v1 ? -8 : 8; // 0x3fc6d2
    return __asm_int3(v2 + a3, v2 + a2);
}

// Address range: 0x3fc6e5 - 0x3fc6e8
int64_t function_3fc6e5(int64_t a1) {
    // 0x3fc6e5
    int64_t result; // 0x3fc6e5
    return result;
}

// Address range: 0x3fc6ed - 0x3fc7cf
int64_t function_3fc6ed(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x3fc6ed
    int64_t v1; // 0x3fc6ed
    uint64_t v2 = v1;
    int64_t v3 = a7;
    unsigned char v4 = (char)a3 - *(char *)(a4 + 117); // 0x3fc6ed
    int64_t v5 = v2 & -256 | (int64_t)*(char *)((v2 % 256 ^ 25) + v1); // 0x3fc6f2
    int64_t v6 = a3 / 256; // 0x3fc6f3
    if (v6 > (a3 & -256 || (int64_t)v4)) {
        int64_t result = (int64_t)&v3; // 0x3fc725
        *(char *)-0x57be57ec56f3e6db = (char)result;
        *(int64_t *)((v5 & 0xffffffff) - 8) = a1;
        return result;
    }
    if (v4 != (char)v6) {
        // 0x3fc6fa
        return a1 & 0xffffffff;
    }
    // 0x3fc7c0
    *(int32_t *)a2 = (int32_t)a2 ^ 0x2fa2d3a;
    return v5 & 0x68de23f0 ^ 0x9721dc8f;
}

// Address range: 0x3fc7e1 - 0x3fc7e4
int64_t function_3fc7e1(int64_t a1) {
    // 0x3fc7e1
    int64_t result; // 0x3fc7e1
    return result;
}

// Address range: 0x3fc827 - 0x3fc83b
int64_t function_3fc827(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3fc827
    int64_t v1; // 0x3fc827
    *(char *)a3 = (char)v1 + (char)((uint64_t)v1 / 256);
    int64_t v2; // 0x3fc827
    return (int64_t)&v2;
}

// Address range: 0x3fc83c - 0x3fc83f
int64_t function_3fc83c(int64_t a1) {
    // 0x3fc83c
    int64_t result; // 0x3fc83c
    return result;
}

// Address range: 0x3fc850 - 0x3fc851
int64_t function_3fc850(int64_t a1) {
    // 0x3fc850
    int64_t result; // 0x3fc850
    return result;
}
