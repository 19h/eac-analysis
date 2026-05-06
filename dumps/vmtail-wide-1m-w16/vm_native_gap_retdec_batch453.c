/*
 * Targeted RetDec C for native executable gap queue batch 453.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2340b6-0x2342b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2342b6-0x2344b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2344b6-0x2346b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37cb30-0x37cd30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37cd30-0x37cf30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37cf30-0x37d130 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37d130-0x37d330 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37d330-0x37d530 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_20bd5b5();
int64_t function_2340b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23418a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2342c0(void);
int64_t function_234333(void);
int64_t function_234347(void);
int64_t function_23434c(int64_t a1);
int64_t function_234372(void);
int64_t function_234391(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2343d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_234421(int64_t a1);
int64_t function_234439(int64_t a1);
int64_t function_234443(int64_t a1);
int64_t function_23445f(void);
int64_t function_234490(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2344af(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23454f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_23467b(void);
int64_t function_23467f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_234681(int64_t a1, int64_t a2, int64_t a3);
int64_t function_234691(void);
int64_t function_2346af(void);
int64_t function_37cb30(void);
int64_t function_37cc1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37cc4a(int64_t a1);
int64_t function_37cc60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6);
int64_t function_37cd1c(void);
int64_t function_37cd1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37cd87(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_37ce47(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_37ce81(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37cf24(int64_t a1);
int64_t function_37cf94(void);
int64_t function_37cfb1(void);
int64_t function_37cfe2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_37cfef(void);
int64_t function_37d024(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37d051(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37d083(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_37d0c9(void);
int64_t function_37d0d8(void);
int64_t function_37d10a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37d15e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_37d170(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_37d219(void);
int64_t function_37d265(int64_t a1);
int64_t function_37d2a4(int64_t a1);
int64_t function_37d2b9(void);
int64_t function_37d2d4(void);
int64_t function_37d2db(void);
int64_t function_37d2e7(int64_t a1);
int64_t function_37d2f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37d2fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37d390(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_37d3b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37d4a7(int64_t a1);
int64_t function_37d4be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37d4e3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_37d4f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6439b999();
int64_t function_c6d58();
int64_t function_ffffffffc7a55cc2();
int64_t function_ffffffffc8164d50();
int64_t function_ffffffffe050d296();
int64_t function_ffffffffe891d590();
int64_t unknown_110e8baa();
int64_t unknown_1427cd2a();
int64_t unknown_180c1632();
int64_t unknown_20392984();
int64_t unknown_283768cc();
int64_t unknown_350f19aa();
int64_t unknown_3a514930();
int64_t unknown_3abf91e0();
int64_t unknown_3d252be4();
int64_t unknown_3d39b9a2();
int64_t unknown_3df3f1d();
int64_t unknown_507243ec();
int64_t unknown_5b8d689a();
int64_t unknown_6e386431();
int64_t unknown_76c60f4();
int64_t unknown_d2bb901();
int64_t unknown_ffffffff81f09a6d();
int64_t unknown_ffffffff890c5dea();
int64_t unknown_ffffffff90e313c8();
int64_t unknown_ffffffffa0e392df();
int64_t unknown_ffffffffaed50d40();
int64_t unknown_ffffffffd4d98257();
int64_t unknown_ffffffffe2afad62();
int64_t unknown_ffffffffe9314a2e();
int64_t unknown_ffffffffefca6204();

// Address range: 0x2340b6 - 0x23418a
int64_t function_2340b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2340b6
    return function_c6d58();
}

// Address range: 0x23418a - 0x2342c0
int64_t function_23418a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x23418a
    return function_c6d58();
}

// Address range: 0x2342c0 - 0x2342c5
int64_t function_2342c0(void) {
    // 0x2342c0
    int64_t result; // 0x2342c0
    return result;
}

// Address range: 0x234333 - 0x234338
int64_t function_234333(void) {
    // 0x234333
    return function_20bd5b5();
}

// Address range: 0x234347 - 0x23434c
int64_t function_234347(void) {
    // 0x234347
    return function_ffffffffc8164d50();
}

// Address range: 0x23434c - 0x234357
int64_t function_23434c(int64_t a1) {
    // 0x23434c
    int64_t v1; // 0x23434c
    bool v2; // 0x23434c
    return 2 * v1 & 0xfffffffe | (int64_t)v2;
}

// Address range: 0x234372 - 0x234373
int64_t function_234372(void) {
    // 0x234372
    int64_t result; // 0x234372
    return result;
}

// Address range: 0x234391 - 0x2343a8
int64_t function_234391(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x234391
    int64_t v1; // 0x234391
    *(char *)-0x44d73bff2cff08eb = (char)v1;
    int64_t v2 = -1 - (int32_t)a3 < (int32_t)a2 ? 0x16c401e9 : 0x16c401e8; // 0x23439e
    return v1 - v2 & 0xffffffff;
}

// Address range: 0x2343d0 - 0x2343e7
int64_t function_2343d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2343d0
    float80_t v1; // 0x2343d0
    *(int16_t *)a4 = (int16_t)v1;
    int64_t v2; // 0x2343d0
    int32_t * v3 = (int32_t *)(8 * a4 + 0x3a2a0618 + v2); // 0x2343d4
    *v3 = *v3 + (int32_t)a1;
    __asm_in((int16_t)a3);
    unknown_3d252be4();
    return function_234372();
}

// Address range: 0x234421 - 0x234424
int64_t function_234421(int64_t a1) {
    // 0x234421
    int64_t result; // 0x234421
    return result;
}

// Address range: 0x234439 - 0x23443b
int64_t function_234439(int64_t a1) {
    // 0x234439
    int64_t result; // 0x234439
    return result;
}

// Address range: 0x234443 - 0x234444
int64_t function_234443(int64_t a1) {
    // 0x234443
    int64_t result; // 0x234443
    return result;
}

// Address range: 0x23445f - 0x234460
int64_t function_23445f(void) {
    // 0x23445f
    int64_t result; // 0x23445f
    return result;
}

// Address range: 0x234490 - 0x2344af
int64_t function_234490(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 + 0x620002ce); // 0x234490
    int64_t v2; // 0x234490
    char v3 = v2; // 0x234490
    *v1 = *v1 + v3;
    int32_t * v4 = (int32_t *)(v2 - 0x662c6900); // 0x234498
    *v4 = *v4 + (int32_t)v2;
    int64_t v5; // 0x234490
    *(char *)a3 = *(char *)&v5 + v3;
    int64_t v6 = 2 * v2 & 0xffffff00; // 0x2344a7
    int64_t v7 = v6 | 232; // 0x2344a7
    int32_t * v8 = (int32_t *)(v7 + a2); // 0x2344a9
    *v8 = *v8 + (int32_t)v2;
    return v7 & 0xffff00e8 | v6 - 256 * a3 & 0xff00;
}

// Address range: 0x2344af - 0x2344e3
int64_t function_2344af(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = __asm_in_133(-32); // 0x2344af
    int64_t v2; // 0x2344af
    int32_t * v3 = (int32_t *)(v2 - 0x17fc8b00); // 0x2344b2
    *v3 = *v3 - 1;
    int64_t v4; // 0x2344af
    char v5 = *(char *)&v4 & v1; // 0x2344bd
    *(char *)a2 = v5;
    if (v5 >= 0 == (v5 != 0)) {
        function_23445f();
    }
    uint64_t v6 = unknown_283768cc(); // 0x2344c6
    char * v7 = (char *)(v6 + 5); // 0x2344cb
    unsigned char v8 = *v7; // 0x2344cb
    unsigned char v9 = v8 + (char)(v6 / 256); // 0x2344cb
    *v7 = v9;
    int64_t result = unknown_3df3f1d(); // 0x2344ce
    char * v10 = (char *)(a1 - 22); // 0x2344d9
    char v11 = *v10; // 0x2344d9
    *v10 = v11 - (char)((int32_t)(v2 | (int64_t)v1) >> 31) + (char)(v9 < v8);
    return result;
}

// Address range: 0x23454f - 0x2345f2
int64_t function_23454f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x23454f
    int64_t v1; // 0x23454f
    int64_t v2 = v1;
    if (a4 != 0) {
        char v3 = *(char *)0x3a8073d4963691a8; // 0x234551
        char v4 = *(char *)(8 * a1 + a4); // 0x23455f
        unsigned char v5 = *(char *)((v2 & -256 | (int64_t)(v4 + (char)v2)) + (int64_t)(v3 & 124)); // 0x234564
        return v1 & 0x5601e800 | (int64_t)v5;
    }
    // 0x2345bb
    unknown_ffffffff90e313c8();
    int32_t * v6 = (int32_t *)(a3 + 0x1bd4cb6); // 0x2345ce
    *v6 = *v6 + (int32_t)v1;
    *(int32_t *)(a2 + 42) = 0;
    int64_t v7 = unknown_3abf91e0(); // 0x2345da
    float80_t v8; // 0x23454f
    *(int16_t *)(v7 + 0x4601e8bc) = (int16_t)v8;
    int64_t result = v7 & 0x71b3fc37 | 0x8e4c03c8; // 0x2345e8
    int32_t * v9 = (int32_t *)(result - 19); // 0x2345ef
    *v9 = *v9 + (int32_t)v1;
    return result;
}

// Address range: 0x23467b - 0x23467e
int64_t function_23467b(void) {
    // 0x23467b
    int64_t v1; // 0x23467b
    return function_234681(v1, v1, v1);
}

// Address range: 0x23467f - 0x234681
int64_t function_23467f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23467f
    int64_t result; // 0x23467f
    *(int32_t *)a4 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x234681 - 0x234689
int64_t function_234681(int64_t a1, int64_t a2, int64_t a3) {
    // 0x234681
    return a3 & 0xffffffff;
}

// Address range: 0x234691 - 0x234692
int64_t function_234691(void) {
    // 0x234691
    int64_t result; // 0x234691
    return result;
}

// Address range: 0x2346af - 0x2346b0
int64_t function_2346af(void) {
    // 0x2346af
    int64_t result; // 0x2346af
    return result;
}

// Address range: 0x37cb30 - 0x37cb31
int64_t function_37cb30(void) {
    // 0x37cb30
    int64_t result; // 0x37cb30
    return result;
}

// Address range: 0x37cc1e - 0x37cc31
int64_t function_37cc1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x773907b6); // 0x37cc1e
    *v1 = *v1 - (int32_t)a2;
    while (true) {
        // continue -> 0x37cc2c
    }
}

// Address range: 0x37cc4a - 0x37cc4d
int64_t function_37cc4a(int64_t a1) {
    // 0x37cc4a
    int64_t result; // 0x37cc4a
    return result;
}

// Address range: 0x37cc60 - 0x37cd02
int64_t function_37cc60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6) {
    // 0x37cc60
    int64_t v1; // 0x37cc60
    int64_t v2 = v1;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v3 = unknown_ffffffff81f09a6d(); // 0x37cc67
    char * v4 = (char *)(a1 + 0x6892d7e6); // 0x37cc6c
    *v4 = *v4 - 33;
    *(char *)-0xf04bbf597fe1790 = (char)v3;
    int32_t v5 = v3; // 0x37cc7d
    *(int32_t *)v3 = v5;
    *(int64_t *)v2 = v2 >> 40;
    int32_t * v6 = (int32_t *)(v1 - 0x3b0431ea); // 0x37cc86
    int32_t v7 = *v6 + (int32_t)a1; // 0x37cc86
    *v6 = v7;
    if (v7 < 0) {
        // 0x37cc8e
        int64_t v8; // 0x37cc60
        *(char *)v8 = *(char *)&v8 + (char)(a6 / 256);
        *(int32_t *)a1 = v5;
        bool v9; // 0x37cc60
        int64_t v10 = (v9 ? -4 : 4) + a1; // 0x37cc90
        unknown_5b8d689a(v10);
        int32_t result = __asm_in_134(-100); // 0x37cc9a
        *(char *)v10 = __asm_insb((int16_t)a6);
        *(int32_t *)103 = *(int32_t *)103 + 113;
        // 0x37cca5
        return result;
    }
    int64_t result2 = unknown_76c60f4(); // 0x37ccee
    int32_t * v11 = (int32_t *)(result2 - 0x3bf7dcfd); // 0x37ccf3
    int32_t v12 = *v11; // 0x37ccf3
    int32_t v13 = a2; // 0x37ccf3
    int32_t v14 = v12 + v13; // 0x37ccf3
    *v11 = v14;
    if (v14 < 0 == ((v14 ^ v12) & (v14 ^ v13)) < 0 == (v14 != 0)) {
        // 0x37cca5
        return result2;
    }
    // 0x37ccfb
    unknown_d2bb901();
    return a2 & 0xffffffff;
}

// Address range: 0x37cd1c - 0x37cd1d
int64_t function_37cd1c(void) {
    // 0x37cd1c
    int64_t result; // 0x37cd1c
    return result;
}

// Address range: 0x37cd1d - 0x37cd86
int64_t function_37cd1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37cd1d
    int64_t v1; // 0x37cd1d
    int64_t v2 = (int64_t)&v1; // bp-8, 0x37cd1d
    int64_t v3; // 0x37cd1d
    char v4 = v3 / 256; // 0x37cd24
    char v5 = v3; // 0x37cd24
    char v6 = v4 + v5; // 0x37cd24
    if (v6 < 0 == ((v6 ^ v4) & (v6 ^ v5)) < 0) {
        // 0x37cd28
        unknown_3a514930();
        return function_ffffffffe050d296();
    }
    // 0x37cd62
    __asm_in_135((int16_t)a3);
    int64_t v7 = __asm_sti(a1, a2, a3); // 0x37cd63
    int128_t v8; // 0x37cd1d
    __asm_xorps(v8, *(int128_t *)(256 * (int64_t)v6 | v3 & -0xff01));
    *(char *)0x58025c71 = *(char *)0x58025c71 + v6;
    int32_t * v9 = (int32_t *)v7; // 0x37cd70
    *v9 = *v9 + (int32_t)v3;
    int64_t result = v7; // 0x37cd79
    if ((*(int32_t *)(v7 + 4) & (int32_t)(int64_t)&v2) < 0) {
        result = function_37cd1c();
    }
    // 0x37cd7c
    *(char *)0x164a0187 = *(char *)0x164a0187 + v6;
    return result;
}

// Address range: 0x37cd87 - 0x37cd9a
int64_t function_37cd87(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x37cd87
    int64_t v1; // 0x37cd87
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + (char)(a3 / 256);
    return v2 & 0x8153d200 | 0x7eac2dff;
}

// Address range: 0x37ce47 - 0x37ce7f
int64_t function_37ce47(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a4;
    char * v2 = (char *)(a1 + 0x280188ff + 8 * a2); // 0x37ce47
    int64_t v3; // 0x37ce47
    *v2 = *v2 - (char)(v3 / 256);
    char * v4 = (char *)(a4 - 10); // 0x37ce4e
    *v4 = *v4 + (char)(a4 / 256);
    unknown_ffffffffd4d98257();
    int64_t v5 = unknown_ffffffffe2afad62(); // 0x37ce5c
    int64_t v6 = v5 & 0xe879ca00; // 0x37ce61
    unsigned char v7 = 2 * (char)v5 & 112;
    int64_t v8 = v7;
    int64_t result = v6 | v8; // 0x37ce63
    int32_t * v9 = (int32_t *)(v3 + a4); // 0x37ce68
    *v9 = *v9 + (int32_t)a1;
    char * v10 = (char *)(a4 - 0x17c5fabc); // 0x37ce6b
    *v10 = *v10 & v7;
    int32_t v11 = *(int32_t *)&v1 + (int32_t)a3; // 0x37ce71
    *(int32_t *)a4 = v11;
    if (v11 == 0) {
        // 0x37ce80
        return result;
    }
    char * v12 = (char *)(result + 0x2508e00); // 0x37ce77
    *v12 = *v12 + v7;
    return (v1 / 256 + v8) % 256 | v6;
}

// Address range: 0x37ce81 - 0x37ce9b
int64_t function_37ce81(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37ce81
    int64_t v1; // 0x37ce81
    *(int32_t *)a3 = 2 * (int32_t)v1;
    uint32_t v2 = (int32_t)a1 >> 31; // 0x37ce89
    char * v3 = (char *)(v1 - 0x2920c36d); // 0x37ce8a
    *v3 = *v3 + (char)(v2 / 256);
    bool v4; // 0x37ce81
    return function_ffffffffc7a55cc2(v1 & 0xffffffff, (v4 ? -4 : 4) + a2, v2 + (int32_t)a4);
}

// Address range: 0x37cf24 - 0x37cf25
int64_t function_37cf24(int64_t a1) {
    // 0x37cf24
    int64_t result; // 0x37cf24
    return result;
}

// Address range: 0x37cf94 - 0x37cf95
int64_t function_37cf94(void) {
    // 0x37cf94
    int64_t result; // 0x37cf94
    return result;
}

// Address range: 0x37cfb1 - 0x37cfb3
int64_t function_37cfb1(void) {
    // 0x37cfb1
    return function_37cf94();
}

// Address range: 0x37cfe2 - 0x37cfef
int64_t function_37cfe2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x37cfe2
    int64_t v1; // 0x37cfe2
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x37cfe2
    int64_t v3 = v2 ? -4 : 4; // 0x37cfe2
    int64_t v4 = v3 + a2; // 0x37cfe2
    int64_t v5 = v3 + a1 + (v2 ? -1 : 1); // 0x37cfe3
    unknown_ffffffff890c5dea(v5, v4);
    *(char *)v5 = __asm_insb((int16_t)a3);
    return function_37d024(v5, v4, a3, v1);
}

// Address range: 0x37cfef - 0x37cff1
int64_t function_37cfef(void) {
    // 0x37cfef
    int64_t result; // 0x37cfef
    return result;
}

// Address range: 0x37d024 - 0x37d049
int64_t function_37d024(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37d024
    int64_t v1; // 0x37d024
    uint64_t v2 = v1 + a3; // 0x37d024
    __asm_sti(a1, a2, v2 & 0xffffffff);
    __asm_in_135((int16_t)v2);
    int64_t v3 = unknown_180c1632() & -256; // 0x37d031
    char v4 = *(char *)((v3 | (int64_t)*(char *)-0x178739a9016a7bc6) - 24); // 0x37d042
    return v3 | (int64_t)__asm_in_135((int16_t)(256 * (int64_t)((char)(v2 / 256) - v4) | v2 % 256));
}

// Address range: 0x37d051 - 0x37d054
int64_t function_37d051(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37d051
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x37d051
    return result;
}

// Address range: 0x37d083 - 0x37d09c
int64_t function_37d083(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x37d083
    int64_t v1; // 0x37d083
    int64_t v2 = v1 & -0xff01 | (int64_t)&g2; // 0x37d085
    *(int32_t *)0x188ff925 = *(int32_t *)0x188ff925 + (int32_t)v1;
    *(int32_t *)a1 = (int32_t)v2;
    char * v3 = (char *)(a4 - 0x4ffe1764); // 0x37d08e
    *v3 = *v3 + (char)(a4 / 256);
    return v2 & 0xf16f7f65 | 0xe90809a;
}

// Address range: 0x37d0c9 - 0x37d0ca
int64_t function_37d0c9(void) {
    // 0x37d0c9
    int64_t result; // 0x37d0c9
    return result;
}

// Address range: 0x37d0d8 - 0x37d0d9
int64_t function_37d0d8(void) {
    // 0x37d0d8
    int64_t result; // 0x37d0d8
    return result;
}

// Address range: 0x37d10a - 0x37d147
int64_t function_37d10a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x37d10a
    int64_t v1; // 0x37d10a
    int64_t v2 = v1;
    int64_t result = 0x10000 * (int32_t)v1 >> 16; // 0x37d10c
    bool v3; // 0x37d10a
    if (!v3) {
        result = function_37d0c9();
    }
    if (v3) {
        // 0x37d111
        return result;
    }
    uint64_t v4 = unknown_1427cd2a(); // 0x37d124
    char * v5 = (char *)(a3 + 16); // 0x37d129
    char v6 = *v5; // 0x37d129
    char v7 = v4 / 256; // 0x37d129
    char v8 = v6 + v7; // 0x37d129
    *v5 = v8;
    int64_t result2 = (int64_t)(*(int32_t *)0x6a01e8e1e86b497d & -0xff01 | 0x7400); // 0x37d139
    if (((v8 ^ v6) & (v8 ^ v7)) >= 0) {
        result2 = function_37d0d8();
    }
    int32_t * v9 = (int32_t *)((v2 + 256 * v1 & 0xff00 | v2 & -0xff01) - 0x17fe621e); // 0x37d13b
    *v9 = *v9 + (int32_t)result2;
    int32_t * v10 = (int32_t *)(result2 + 0x744ff336); // 0x37d141
    *v10 = *v10 + (int32_t)a1;
    return result2;
}

// Address range: 0x37d15e - 0x37d170
int64_t function_37d15e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x37d15e
    *(char *)0x672cc8a7 = *(char *)0x672cc8a7 + (char)a3;
    return function_6439b999();
}

// Address range: 0x37d170 - 0x37d1c0
int64_t function_37d170(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x37d170
    int64_t v1; // 0x37d170
    int64_t v2 = v1;
    bool v3; // 0x37d170
    int64_t v4 = v3 ? -4 : 4; // 0x37d175
    int64_t v5 = v4 + a1; // 0x37d175
    int64_t v6 = v4 + (v1 & 0xffffffff); // 0x37d175
    __asm_sti(v5, v6, a3);
    char * v7 = (char *)(v6 + 64); // 0x37d178
    unsigned char v8 = *v7; // 0x37d178
    *v7 = v8 / 128 | 2 * v8;
    unsigned char v9 = (char)(a3 / 256) - *(char *)(v2 - 104); // 0x37d17b
    unsigned char v10 = llvm_ctpop_i8(v9); // 0x37d17b
    int64_t result = unknown_20392984(); // 0x37d17e
    if (v10 % 2 == 0) {
        // 0x37d1ab
        *(int32_t *)-0x5cff4cf3f3269180 = (int32_t)result;
        return result;
    }
    int64_t v11 = 256 * (int64_t)v9 | a3 & -0xff01; // 0x37d17b
    int32_t * v12 = (int32_t *)(result + 19); // 0x37d186
    uint32_t v13 = (int32_t)v6; // 0x37d186
    *v12 = *v12 + v13;
    __asm_outsb((int16_t)v11, *(char *)v6);
    uint32_t v14 = (int32_t)a4; // 0x37d18a
    uint32_t v15 = v14 % 32; // 0x37d18a
    if (v15 != 0) {
        int32_t * v16 = (int32_t *)(v2 - 24 + 4 * v2); // 0x37d18a
        *v16 = *v16 >> v15;
    }
    int32_t * v17 = (int32_t *)(a4 - 0x1b654b4f); // 0x37d18e
    *v17 = *v17 + (int32_t)v11;
    char * v18 = (char *)(v6 + 0x5d31a268); // 0x37d194
    *v18 = *v18 | (char)v1;
    int64_t v19 = v6; // 0x37d19a
    if (v15 != 0) {
        v19 = v13 >> v15 | (int32_t)((v6 & 0xffffffff) << (int64_t)(33 - v15));
    }
    unknown_3d39b9a2();
    *(int32_t *)a4 = (int32_t)v2 + v14;
    *(int32_t *)v5 = *(int32_t *)v19;
    return unknown_110e8baa(v5 + v4, v19 + v4);
}

// Address range: 0x37d219 - 0x37d21c
int64_t function_37d219(void) {
    // 0x37d219
    int64_t result; // 0x37d219
    return result;
}

// Address range: 0x37d265 - 0x37d266
int64_t function_37d265(int64_t a1) {
    // 0x37d265
    int64_t result; // 0x37d265
    return result;
}

// Address range: 0x37d2a4 - 0x37d2ac
int64_t function_37d2a4(int64_t a1) {
    // 0x37d2a4
    return unknown_350f19aa(a1);
}

// Address range: 0x37d2b9 - 0x37d2ba
int64_t function_37d2b9(void) {
    // 0x37d2b9
    int64_t result; // 0x37d2b9
    return result;
}

// Address range: 0x37d2d4 - 0x37d2d5
int64_t function_37d2d4(void) {
    // 0x37d2d4
    int64_t result; // 0x37d2d4
    return result;
}

// Address range: 0x37d2db - 0x37d2de
int64_t function_37d2db(void) {
    // 0x37d2db
    int64_t result; // 0x37d2db
    return result;
}

// Address range: 0x37d2e7 - 0x37d2e9
int64_t function_37d2e7(int64_t a1) {
    // 0x37d2e7
    int64_t result; // 0x37d2e7
    return result;
}

// Address range: 0x37d2f1 - 0x37d2fa
int64_t function_37d2f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37d2f1
    return function_37d2d4();
}

// Address range: 0x37d2fb - 0x37d347
int64_t function_37d2fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = unknown_ffffffffefca6204(); // 0x37d303
    int64_t v3; // 0x37d2fb
    if ((v3 & 0x4000) == 0) {
        v2 = function_37d2b9();
    }
    char v4 = v3;
    int64_t v5 = v2;
    *(char *)v3 = v4 - (char)a3 + (char)((v3 & 256) != 0);
    int32_t * v6 = (int32_t *)(v3 - 0x11303e39); // 0x37d30e
    *v6 = *v6 + (int32_t)v3;
    uint64_t v7 = (v5 & 0xffffffff) * (int64_t)*(int32_t *)v5; // 0x37d314
    uint64_t v8 = v7 / 0x100000000; // 0x37d314
    __asm_outsd((int16_t)v8, *(int32_t *)&v1);
    char v9 = *(char *)((v7 & 0xffffffff) + 0x333801e8); // 0x37d318
    int32_t * v10 = (int32_t *)((v3 & -256 | (int64_t)(v9 + v4)) + 0x5ecd4f86); // 0x37d321
    int32_t v11 = *v10; // 0x37d321
    *v10 = v11 - 0x1e68dc57 + (int32_t)(-1 - (int32_t)v7 < (int32_t)v1);
    int64_t v12 = unknown_6e386431(); // 0x37d32b
    char * v13 = (char *)(v8 - 0x68d54d53); // 0x37d334
    *v13 = *v13 + (char)(v3 / 256);
    unknown_ffffffffaed50d40();
    return v12 & 0xffffffff;
}

// Address range: 0x37d390 - 0x37d3ab
int64_t function_37d390(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x37d390
    int64_t v1; // 0x37d390
    int64_t v2 = 2 * v1; // 0x37d390
    uint64_t v3 = v2 + 61; // 0x37d392
    int64_t v4 = v2 & 0xffffff00; // 0x37d392
    int64_t v5 = v3 % 256 | v4; // 0x37d392
    *(int32_t *)a1 = (int32_t)v5;
    char * v6 = (char *)v5; // 0x37d398
    *v6 = *v6 + (char)v3;
    *(char *)0x3d37d3a0 = *(char *)0x3d37d3a0 + (char)(a4 / 256);
    int64_t v7; // 0x37d390
    *(int32_t *)a3 = *(int32_t *)&v7 + (int32_t)v1;
    return v4 | (int64_t)*(char *)((v3 & 68 | 187) + (v1 + a2 & 0xffffffff));
}

// Address range: 0x37d3b0 - 0x37d3ca
int64_t function_37d3b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)-0x6006f144; // 0x37d3b5
    int64_t v2; // 0x37d3b0
    *(char *)-0x6006f144 = v1 + (char)((uint64_t)v2 / 256);
    char v3 = v2;
    *(char *)v2 = 2 * v3;
    int64_t result = v2 & -256 | (int64_t)(*(char *)0x9d135b33 + v3); // 0x37d3c4
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x37d4a7 - 0x37d4a8
int64_t function_37d4a7(int64_t a1) {
    // 0x37d4a7
    int64_t result; // 0x37d4a7
    return result;
}

// Address range: 0x37d4be - 0x37d4e3
int64_t function_37d4be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x37d4be
    int64_t v1; // 0x37d4be
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)a4;
    char * v2 = (char *)(a1 - 0x4557016f + 2 * v1); // 0x37d4c0
    *v2 = *v2 | (char)v1;
    int32_t * v3 = (int32_t *)(v1 + 0x3d01e89f); // 0x37d4c9
    *v3 = *v3 + (int32_t)v1;
    int64_t v4; // 0x37d4be
    *(int32_t *)a1 = *(int32_t *)&v4 + (int32_t)v1;
    return unknown_ffffffffa0e392df();
}

// Address range: 0x37d4e3 - 0x37d4f0
int64_t function_37d4e3(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)a1; // 0x37d4e3
    int64_t v2; // 0x37d4e3
    *v1 = 2 * (char)v2;
    *v1 = __asm_insb((int16_t)a3);
    unknown_507243ec();
    return function_ffffffffe891d590();
}

// Address range: 0x37d4f0 - 0x37d513
int64_t function_37d4f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37d4f0
    int64_t v1; // 0x37d4f0
    *(int32_t *)0x25635175 = *(int32_t *)0x25635175 + (int32_t)v1;
    int64_t result = unknown_ffffffffe9314a2e(); // 0x37d502
    int32_t * v2 = (int32_t *)(result + 0x20233e3f); // 0x37d508
    *v2 = *v2 + (int32_t)a4;
    return result;
}
