/*
 * Targeted RetDec C for native executable gap queue batch 522.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x11ed46-0x11ef46 rank=- name=- kind=- bytes=- uncovered=-
 *   0x11ef46-0x11f146 rank=- name=- kind=- bytes=- uncovered=-
 *   0x11f146-0x11f346 rank=- name=- kind=- bytes=- uncovered=-
 *   0x11f346-0x11f546 rank=- name=- kind=- bytes=- uncovered=-
 *   0x11f546-0x11f746 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e6e96-0x3e7096 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e7296-0x3e7496 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e7496-0x3e7696 rank=- name=- kind=- bytes=- uncovered=-
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
int128_t __asm_vdivpd(int128_t left, int128_t right);
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

int64_t function_11ece0();
int64_t function_11ecf7();
int64_t function_11ed35();
int64_t function_11ed46(void);
int64_t function_11ed69(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11ee1f(int64_t a1);
int64_t function_11eea6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_11eec8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11eee7(int64_t a1, int64_t a2);
int64_t function_11eeed(void);
int64_t function_11ef10(void);
int64_t function_11ef57(void);
int64_t function_11ef5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11ef9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11efad(void);
int64_t function_11efb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11efe6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11f064(void);
int64_t function_11f08b(void);
int64_t function_11f099(void);
int64_t function_11f0b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_11f0da(int64_t a1, int64_t a2, int64_t a3);
int64_t function_11f110(void);
int64_t function_11f132(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11f13c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11f14a(void);
int64_t function_11f163(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11f16f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_11f191(int64_t a1, int64_t a2, int64_t a3, int32_t a4);
int64_t function_11f1d7(void);
int64_t function_11f1dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11f22e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11f253(void);
int64_t function_11f25b(int64_t a1, int64_t a2);
int64_t function_11f26b(int64_t a1);
int64_t function_11f286(void);
int64_t function_11f288(int64_t a1);
int64_t function_11f2ad(void);
int64_t function_11f2b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11f322(void);
int64_t function_11f330(void);
int64_t function_11f38f(void);
int64_t function_11f400(void);
int64_t function_11f407(int64_t a1);
int64_t function_11f411(void);
int64_t function_11f415(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11f429(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11f596(int64_t a1);
int64_t function_11f5c5(void);
int64_t function_11f5d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11f5f9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_11f629(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e875edd();
int64_t function_3e6e96(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e6ebe(int64_t a1);
int64_t function_3e6ee6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3e6f7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e6f86(void);
int64_t function_3e6fa2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e6fc8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_3e7086(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e723a();
int64_t function_3e7296(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e7309(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3e738b(int64_t a1);
int64_t function_3e741c(void);
int64_t function_3e7422(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3e752f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e753f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3e757c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3e7620(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e7653(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ffffffffad63f25c();
int64_t function_ffffffffb10394cb();
int64_t function_ffffffffd5a55eee();
int64_t unknown_381eb134();
int64_t unknown_388c2541();
int64_t unknown_399a046f();
int64_t unknown_3d13dabb();
int64_t unknown_4c0676b0();
int64_t unknown_571b9df6();
int64_t unknown_681c5c45();
int64_t unknown_69de778e();
int64_t unknown_7141ef75();
int64_t unknown_ffffffff8442d7a5();
int64_t unknown_ffffffff8c0f59e9();
int64_t unknown_ffffffff90300442();
int64_t unknown_ffffffffba007d27();
int64_t unknown_ffffffffc3707295();
int64_t unknown_ffffffffcce139cd();
int64_t unknown_ffffffffce0af205();
int64_t unknown_ffffffffd50cc341();
int64_t unknown_ffffffffe81bfc79();
int64_t unknown_ffffffffea12b161();
int64_t unknown_fffffffff2e2d19f();
int64_t unknown_ffffffffffe8d94f();

// Address range: 0x11ed46 - 0x11ed50
int64_t function_11ed46(void) {
    // 0x11ed46
    bool v1; // 0x11ed46
    if (!v1) {
        function_11ecf7();
    }
    int64_t result = unknown_ffffffffffe8d94f(); // 0x11ed4e
    if (true == !v1) {
        result = function_11ece0();
    }
    // 0x11ed50
    return result;
}

// Address range: 0x11ed69 - 0x11ed90
int64_t function_11ed69(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x11ed69
    int32_t * v3 = (int32_t *)(v2 - 0x465369f6); // 0x11ed6b
    *v3 = *v3 + (int32_t)v2;
    unknown_ffffffffe81bfc79();
    if ((256 * v2 & 0xff00 ^ a4) != 1) {
        function_11ed35();
    }
    // 0x11ed7f
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a3;
    return unknown_7141ef75();
}

// Address range: 0x11ee1f - 0x11ee22
int64_t function_11ee1f(int64_t a1) {
    // 0x11ee1f
    int64_t result; // 0x11ee1f
    return result;
}

// Address range: 0x11eea6 - 0x11eeb1
int64_t function_11eea6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x11eea6
    int64_t v1; // 0x11eea6
    int64_t result = v1 & -0xff01 | 256 * v1 & 0xff00; // 0x11eea6
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x11eec8 - 0x11eecf
int64_t function_11eec8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x11eec8
    int64_t v1; // 0x11eec8
    *(int32_t *)a1 = (int32_t)v1;
    return a4 & 0xffffffff;
}

// Address range: 0x11eee7 - 0x11eee9
int64_t function_11eee7(int64_t a1, int64_t a2) {
    // 0x11eee7
    int64_t result; // 0x11eee7
    return result;
}

// Address range: 0x11eeed - 0x11eef2
int64_t function_11eeed(void) {
    // 0x11eeed
    int64_t result; // 0x11eeed
    return result;
}

// Address range: 0x11ef10 - 0x11ef19
int64_t function_11ef10(void) {
    char v1 = *(char *)-0x796879e9; // 0x11ef10
    int64_t result; // 0x11ef10
    *(char *)-0x796879e9 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x11ef57 - 0x11ef5a
int64_t function_11ef57(void) {
    // 0x11ef57
    int64_t result; // 0x11ef57
    return result;
}

// Address range: 0x11ef5f - 0x11ef6b
int64_t function_11ef5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11ef5f
    int64_t result; // 0x11ef5f
    char v1 = result;
    *(char *)result = 2 * v1;
    int32_t v2 = __asm_insd((int16_t)a3); // 0x11ef61
    int32_t * v3 = (int32_t *)a1; // 0x11ef61
    *v3 = v2;
    int64_t v4; // 0x11ef5f
    *(char *)a3 = *(char *)&v4 + v1;
    int64_t v5; // 0x11ef5f
    *v3 = *(int32_t *)&v5 + (int32_t)a4;
    return result;
}

// Address range: 0x11ef9a - 0x11ef9d
int64_t function_11ef9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11ef9a
    return a3 & 0xffffffff;
}

// Address range: 0x11efad - 0x11efae
int64_t function_11efad(void) {
    // 0x11efad
    int64_t result; // 0x11efad
    return result;
}

// Address range: 0x11efb8 - 0x11efd5
int64_t function_11efb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11efb8
    __asm_fbld(*(float80_t *)(a3 + 52));
    int64_t v1; // 0x11efb8
    int16_t v2 = v1; // 0x11efbb
    int16_t v3 = (int16_t)*(char *)(2 * a4 - 0x67ff2499); // 0x11efbb
    return v1 & 0x1ce60000 | (int64_t)(v2 / v3 & 58) | (int64_t)(256 * (v2 % v3) & -0x7200);
}

// Address range: 0x11efe6 - 0x11f030
int64_t function_11efe6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11efe6
    int64_t result; // 0x11efe6
    int32_t v1 = result; // 0x11eff2
    if (v1 < 0xb98c001) {
        // 0x11f028
        *(int32_t *)(a2 + 80) = (int32_t)a3;
        return result;
    }
    char * v2 = (char *)(a3 - 24); // 0x11f003
    *v2 = *v2 / 2;
    int32_t * v3 = (int32_t *)(a1 + 0x13d000a); // 0x11f006
    *v3 = *v3 + (int32_t)result;
    __asm_out((int16_t)a3, v1 + 0x65cda7a0 | 0x63f080ef);
    return result & 0xffffffff;
}

// Address range: 0x11f064 - 0x11f065
int64_t function_11f064(void) {
    // 0x11f064
    int64_t result; // 0x11f064
    return result;
}

// Address range: 0x11f08b - 0x11f08c
int64_t function_11f08b(void) {
    // 0x11f08b
    int64_t result; // 0x11f08b
    return result;
}

// Address range: 0x11f099 - 0x11f0a0
int64_t function_11f099(void) {
    // 0x11f099
    return function_ffffffffb10394cb();
}

// Address range: 0x11f0b9 - 0x11f0d7
int64_t function_11f0b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x11f0b9
    int64_t v1; // 0x11f0b9
    int32_t * v2 = (int32_t *)(a1 - 46 + v1); // 0x11f0b9
    uint32_t v3 = *v2; // 0x11f0b9
    uint32_t v4 = v3 + (int32_t)v1; // 0x11f0b9
    bool v5; // 0x11f0b9
    uint32_t v6 = v4 + (int32_t)v5; // 0x11f0b9
    *v2 = v6;
    float80_t v7; // 0x11f0b9
    *(int16_t *)(a3 - 0x723965a1) = (int16_t)v7;
    char * v8 = (char *)(a4 + 17); // 0x11f0c3
    int64_t result; // 0x11f0b9
    *v8 = *v8 + (char)(v5 ? v6 <= v3 : v4 < v3) - (char)result;
    int64_t v9 = result;
    *(char *)v9 = *(char *)&result & (char)v9;
    if ((int32_t)result == 0x6c422601) {
        result = function_11f064();
    }
    int32_t * v10 = (int32_t *)(v1 + 23); // 0x11f0cf
    *v10 = *v10 - 1;
    *(int32_t *)(a5 + 5) = (int32_t)a5;
    return result;
}

// Address range: 0x11f0da - 0x11f0f1
int64_t function_11f0da(int64_t a1, int64_t a2, int64_t a3) {
    // 0x11f0da
    int64_t v1; // 0x11f0da
    bool v2; // 0x11f0da
    *(char *)a2 = 128 * (char)v2 | (char)v1 / 2;
    int32_t v3 = v1; // 0x11f0dc
    int64_t v4; // 0x11f0da
    if (((v3 + 0x6a58ffff ^ v3) & (v3 ^ -0x80000000)) >= 0) {
        v4 = function_11f08b();
    }
    // 0x11f0e5
    return v4 & -256 | (int64_t)*(char *)-0x7bffea727b2f501;
}

// Address range: 0x11f110 - 0x11f119
int64_t function_11f110(void) {
    // 0x11f110
    int64_t v1; // 0x11f110
    __asm_out_133(106, (int32_t)v1);
    return function_11f163(v1, v1, v1, (int64_t)&g1);
}

// Address range: 0x11f132 - 0x11f13b
int64_t function_11f132(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 0x3c0aa043); // 0x11f132
    int64_t result; // 0x11f132
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x11f13c - 0x11f149
int64_t function_11f13c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_ffffffff90300442(); // 0x11f13c
    char * v1 = (char *)(result + 2 * a4); // 0x11f144
    *v1 = *v1 / 2;
    return result;
}

// Address range: 0x11f14a - 0x11f14b
int64_t function_11f14a(void) {
    // 0x11f14a
    int64_t result; // 0x11f14a
    return result;
}

// Address range: 0x11f163 - 0x11f16f
int64_t function_11f163(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11f163
    int64_t v1; // 0x11f163
    int64_t v2 = v1;
    __asm_out_133(-92, (int32_t)v2);
    int32_t * v3 = (int32_t *)(v1 + 8 * a3); // 0x11f16b
    *v3 = *v3 + (int32_t)a2;
    bool v4; // 0x11f163
    return v2 & -256 | v2 + 5 + (int64_t)v4 & 23 | 232;
}

// Address range: 0x11f16f - 0x11f179
int64_t function_11f16f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x11f16f
    int64_t result; // 0x11f16f
    char * v1 = (char *)(result - 112); // 0x11f16f
    *v1 = *v1 + (char)a3;
    return result;
}

// Address range: 0x11f191 - 0x11f1b5
int64_t function_11f191(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    int32_t v1 = a4;
    int64_t v2; // 0x11f191
    char * v3 = (char *)(a3 + 46 + 8 * v2); // 0x11f191
    *v3 = *v3 + (char)v2;
    int32_t * v4 = (int32_t *)(a3 + 0x6413ad45); // 0x11f197
    int32_t v5 = *v4; // 0x11f197
    int32_t v6 = a1; // 0x11f197
    int32_t v7 = v5 + v6; // 0x11f197
    *v4 = v7;
    if (v7 < 0 != ((v7 ^ v5) & (v7 ^ v6)) < 0) {
        function_11f14a();
    }
    // 0x11f19f
    unknown_ffffffff8442d7a5();
    *(int32_t *)0x1a428112 = (int32_t)(int64_t)&v1;
    return unknown_4c0676b0();
}

// Address range: 0x11f1d7 - 0x11f1d8
int64_t function_11f1d7(void) {
    // 0x11f1d7
    int64_t result; // 0x11f1d7
    return result;
}

// Address range: 0x11f1dc - 0x11f22e
int64_t function_11f1dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11f1dc
    unknown_ffffffff8c0f59e9();
    int64_t v1 = unknown_571b9df6(); // 0x11f1f0
    int64_t v2 = __asm_int3(); // 0x11f1fc
    char * v3 = (char *)v2; // 0x11f1fd
    *v3 = *v3 - (char)v2;
    int64_t v4 = unknown_ffffffffce0af205(); // 0x11f1ff
    bool v5; // 0x11f1dc
    int64_t v6 = v5 ? -1 : 1; // 0x11f204
    int64_t v7 = v6 + a1; // 0x11f204
    int64_t v8; // 0x11f1dc
    char v9 = __asm_insb((int16_t)(v8 ^ a3)); // 0x11f205
    char * v10 = (char *)v7; // 0x11f205
    *v10 = v9;
    uint32_t v11 = *(int32_t *)((v8 & -0xff01 | a4 & 0xff00) - 0x6bb74151); // 0x11f206
    uint64_t v12 = (v4 & 0xffffffff) * (int64_t)v11; // 0x11f206
    char * v13 = (char *)(v8 + 0x6f01e884 + 4 * (((v8 & 0xff00 | a4 & 0xffff00ff) + 0x93c829bc + v1 & 0xffffffff) + v6)); // 0x11f20c
    *v13 = *v13 ^ (char)(v12 / 0x100000000);
    int32_t * v14 = (int32_t *)(v7 + 0x14d924b3); // 0x11f220
    int32_t v15 = *v14 + (int32_t)v8; // 0x11f220
    *v14 = v15;
    if (v15 != 0) {
        // 0x11f273
        return v12 + 0x177ce585 & 0xffffffff;
    }
    // 0x11f228
    *v10 = *v10 + (char)v8;
    return function_11f1d7();
}

// Address range: 0x11f22e - 0x11f249
int64_t function_11f22e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x11f22e
    unknown_381eb134();
    int64_t v1; // 0x11f22e
    uint32_t v2 = (int32_t)v1; // 0x11f235
    uint32_t v3 = *(int32_t *)(a2 - 0x57d52a62); // 0x11f235
    unknown_ffffffffd50cc341();
    int32_t * v4 = (int32_t *)(int64_t)(v2 - v3); // 0x11f240
    *v4 = *v4 + (int32_t)(v3 > v2);
    return function_ffffffffad63f25c();
}

// Address range: 0x11f253 - 0x11f254
int64_t function_11f253(void) {
    // 0x11f253
    int64_t result; // 0x11f253
    return result;
}

// Address range: 0x11f25b - 0x11f26b
int64_t function_11f25b(int64_t a1, int64_t a2) {
    // 0x11f25b
    unknown_ffffffffea12b161();
    bool v1; // 0x11f25b
    *(int32_t *)-0x26d3ab38 = *(int32_t *)-0x26d3ab38 / 2 | 0x80000000 * (int32_t)v1;
    int64_t v2; // 0x11f25b
    int64_t v3; // 0x11f25b
    *(char *)a2 = (char)v3 - (char)((int64_t)&v2 / 256);
    return function_11f253();
}

// Address range: 0x11f26b - 0x11f273
int64_t function_11f26b(int64_t a1) {
    // 0x11f26b
    int64_t v1; // 0x11f26b
    int32_t * v2 = (int32_t *)((4 * (v1 + a1) & 0x3fffffffc) + v1); // 0x11f26d
    *v2 = (int32_t)a1;
    return __asm_wait(*v2);
}

// Address range: 0x11f286 - 0x11f287
int64_t function_11f286(void) {
    // 0x11f286
    int64_t result; // 0x11f286
    return result;
}

// Address range: 0x11f288 - 0x11f290
int64_t function_11f288(int64_t a1) {
    // 0x11f288
    return unknown_69de778e(a1);
}

// Address range: 0x11f2ad - 0x11f2ae
int64_t function_11f2ad(void) {
    // 0x11f2ad
    int64_t result; // 0x11f2ad
    return result;
}

// Address range: 0x11f2b3 - 0x11f2c3
int64_t function_11f2b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_3d13dabb(); // 0x11f2b5
    int32_t * v1 = (int32_t *)(result + 0x2a01e8c5); // 0x11f2ba
    uint32_t v2 = *v1; // 0x11f2ba
    uint32_t v3 = v2 + (int32_t)a2; // 0x11f2ba
    *v1 = v3;
    unsigned char v4 = (char)a4 % 32; // 0x11f2c0
    if (v4 != 0) {
        char * v5 = (char *)result; // 0x11f2c0
        unsigned char v6 = *v5; // 0x11f2c0
        *v5 = (char)(v3 < v2) << v4 - 1 | v6 << v4 | (char)((int16_t)v6 >> (int16_t)(9 - v4));
    }
    return result;
}

// Address range: 0x11f322 - 0x11f323
int64_t function_11f322(void) {
    // 0x11f322
    int64_t result; // 0x11f322
    return result;
}

// Address range: 0x11f330 - 0x11f332
int64_t function_11f330(void) {
    // 0x11f330
    return function_11f322();
}

// Address range: 0x11f38f - 0x11f390
int64_t function_11f38f(void) {
    // 0x11f38f
    int64_t result; // 0x11f38f
    return result;
}

// Address range: 0x11f400 - 0x11f402
int64_t function_11f400(void) {
    // 0x11f400
    return function_11f38f();
}

// Address range: 0x11f407 - 0x11f408
int64_t function_11f407(int64_t a1) {
    // 0x11f407
    int64_t result; // 0x11f407
    return result;
}

// Address range: 0x11f411 - 0x11f414
int64_t function_11f411(void) {
    // 0x11f411
    int64_t result; // 0x11f411
    return result;
}

// Address range: 0x11f415 - 0x11f427
int64_t function_11f415(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x11f415
    return unknown_ffffffffba007d27();
}

// Address range: 0x11f429 - 0x11f4b4
int64_t function_11f429(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)((256 * a3 + a4 & 0xff00 | a4 & -0xff01) - 10); // 0x11f42f
    *v1 = *v1 + (int32_t)a5;
    int64_t result; // 0x11f429
    char * v2 = (char *)(result + 17); // 0x11f439
    char v3 = *v2 & -122; // 0x11f439
    *v2 = v3;
    if (v3 < 0) {
        // 0x11f4b2
        return result;
    }
    // 0x11f43f
    bool v4; // 0x11f429
    return unknown_681c5c45((v4 ? -1 : 1) + a1);
}

// Address range: 0x11f596 - 0x11f597
int64_t function_11f596(int64_t a1) {
    // 0x11f596
    int64_t result; // 0x11f596
    return result;
}

// Address range: 0x11f5c5 - 0x11f5c6
int64_t function_11f5c5(void) {
    // 0x11f5c5
    int64_t result; // 0x11f5c5
    return result;
}

// Address range: 0x11f5d3 - 0x11f5f8
int64_t function_11f5d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 0x23f97f13); // 0x11f5d8
    *v1 = *v1 & -0x17f326ff;
    int32_t * v2 = (int32_t *)(a1 - 111); // 0x11f5e2
    *v2 = *v2 + (int32_t)a4;
    int64_t v3; // 0x11f5d3
    int64_t v4 = v3 & -256 | (uint64_t)v3 % 256; // bp-8, 0x11f5eb
    int32_t * v5 = (int32_t *)(a4 - 15); // 0x11f5ef
    *v5 = *v5 + (int32_t)(int64_t)&v4;
    return unknown_399a046f();
}

// Address range: 0x11f5f9 - 0x11f5fc
int64_t function_11f5f9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x11f5f9
    int64_t v1; // 0x11f5f9
    return v1 & 0xffffff00 | (uint64_t)v1 % 256;
}

// Address range: 0x11f629 - 0x11f6cf
int64_t function_11f629(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2; // 0x11f629
    __asm_out_134((int16_t)a3, (char)v2);
    int64_t v3; // 0x11f629
    int64_t v4; // 0x11f629
    int32_t v5; // 0x11f629
    int64_t v6; // 0x11f629
    bool v7; // 0x11f629
    if ((int32_t)a4 == 0) {
        // 0x11f629
        v3 = v7 ? -4 : 4;
        v4 = a4;
        v5 = 0;
        v6 = a2;
    } else {
        int32_t * v8 = (int32_t *)(a4 + 0x36cff68b); // 0x11f634
        *v8 = *v8 + (int32_t)a3;
        int64_t v9 = v7 ? -4 : 4;
        v3 = v9;
        v4 = v1;
        v5 = *(int32_t *)&v1;
        v6 = v9 + a2;
    }
    int64_t v10 = unknown_388c2541(); // 0x11f63b
    *(int32_t *)v4 = v5 + (int32_t)a1;
    int64_t v11 = v7 ? -1 : 1;
    int64_t v12 = v6; // 0x11f649
    int64_t v13 = v2 + 16;
    int32_t * v14 = (int32_t *)(v10 - 0x578b71f0); // 0x11f64c
    *v14 = *v14 - 1;
    uint32_t v15 = *(int32_t *)a1; // 0x11f652
    int64_t v16 = a1 + v3; // 0x11f652
    int64_t v17 = v10 - (*(int32_t *)v12 < v15 ? 0xe8a46643 : 0xe8a46642); // 0x11f654
    int32_t * v18 = (int32_t *)(a3 + 11); // 0x11f65a
    uint32_t v19 = *v18; // 0x11f65a
    int64_t v20; // 0x11f629
    uint32_t v21 = v19 + (int32_t)v20; // 0x11f65a
    *v18 = v21;
    int32_t * v22 = (int32_t *)(v17 & 0xffffffff); // 0x11f65d
    *v22 = *v22 - (v21 < v19 ? 21 : 20);
    char v23 = __asm_insb((int16_t)a3); // 0x11f661
    char * v24 = (char *)v16; // 0x11f661
    *v24 = v23;
    uint32_t v25 = *v22; // 0x11f669
    uint32_t v26 = v25 + (int32_t)v16; // 0x11f669
    *v22 = v26;
    int64_t v27 = v26 < v25 ? 0x79e873b5 : 0x79e873b4; // 0x11f66f
    uint64_t v28 = (int64_t)(-0x17f5774d * *(int32_t *)(a3 + 61)) - v27; // 0x11f66f
    int64_t v29 = v28 + (v17 & 0xff00) & 0xff00 | v17 & 0xffff00ff; // 0x11f674
    v1 = v29;
    int32_t * v30 = (int32_t *)v16; // 0x11f678
    *v30 = *v30 + (int32_t)v29;
    unsigned char v31 = (char)v20; // 0x11f67c
    while ((char)(v28 / 256) + v31 < v31 || (char)(v28 / 256) + v31 == 0) {
        int64_t v32 = v12 + v3; // 0x11f652
        unknown_ffffffffc3707295();
        int64_t v33 = v1 & -256 | 250; // 0x11f694
        int64_t * v34 = (int64_t *)v13; // 0x11f698
        int64_t v35 = unknown_fffffffff2e2d19f(); // 0x11f699
        char v36 = *(char *)(v33 + 0x26ddda2a); // 0x11f69e
        v1 = 256 * (int64_t)(v36 & (char)(v1 / 256)) | v33 & -0xff06;
        *v34 = 0x13d0000;
        *v24 = *(char *)v32;
        int64_t v37 = 0x1e826bc; // 0x11f6aa
        v20 = *v34;
        v12 = v32 + v11;
        int64_t v38 = v16 + v11; // 0x11f6aa
        v13 = 0xad07631;
        v14 = (int32_t *)(v35 - 0x578b71f0);
        *v14 = *v14 - 1;
        v15 = *(int32_t *)v38;
        v16 = v38 + v3;
        v17 = v35 - (*(int32_t *)v12 < v15 ? 0xe8a46643 : 0xe8a46642);
        v18 = (int32_t *)(v37 + 11);
        v19 = *v18;
        v21 = v19 + (int32_t)v20;
        *v18 = v21;
        v22 = (int32_t *)(v17 & 0xffffffff);
        *v22 = *v22 - (v21 < v19 ? 21 : 20);
        v23 = __asm_insb((int16_t)v37);
        v24 = (char *)v16;
        *v24 = v23;
        v25 = *v22;
        v26 = v25 + (int32_t)v16;
        *v22 = v26;
        v27 = v26 < v25 ? 0x79e873b5 : 0x79e873b4;
        v28 = (int64_t)(-0x17f5774d * *(int32_t *)(v37 + 61)) - v27;
        v29 = v28 + (v17 & 0xff00) & 0xff00 | v17 & 0xffff00ff;
        v1 = v29;
        v30 = (int32_t *)v16;
        *v30 = *v30 + (int32_t)v29;
        v31 = (char)v20;
    }
    // 0x11f6cd
    return *(int64_t *)(v13 + 8);
}

// Address range: 0x3e6e96 - 0x3e6e9d
int64_t function_3e6e96(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a2 - 45); // 0x3e6e96
    int64_t result; // 0x3e6e96
    bool v2; // 0x3e6e96
    *(int64_t *)((int64_t)(v1 + (int32_t)result + (int32_t)v2) - 8) = a4;
    return result;
}

// Address range: 0x3e6ebe - 0x3e6ebf
int64_t function_3e6ebe(int64_t a1) {
    // 0x3e6ebe
    int64_t result; // 0x3e6ebe
    return result;
}

// Address range: 0x3e6ee6 - 0x3e6f5d
int64_t function_3e6ee6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3e6ee6
    bool v1; // 0x3e6ee6
    if (v1) {
        // 0x3e6f59
        int64_t v2; // 0x3e6ee6
        char * v3 = (char *)(v2 + 58); // 0x3e6f59
        *v3 = *v3 >> 1;
        return a4 & 0xffffffff;
    }
    // 0x3e6ee8
    __asm_int1();
    return __asm_int1();
}

// Address range: 0x3e6f7a - 0x3e6f80
int64_t function_3e6f7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e6f7a
    int64_t result; // 0x3e6f7a
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x3e6f86 - 0x3e6f89
int64_t function_3e6f86(void) {
    // 0x3e6f86
    int64_t result; // 0x3e6f86
    return result;
}

// Address range: 0x3e6fa2 - 0x3e6fc7
int64_t function_3e6fa2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e6fa2
    int64_t v1; // 0x3e6fa2
    int64_t * v2 = (int64_t *)(v1 + 0x205c013f); // 0x3e6fa6
    uint64_t v3 = *v2; // 0x3e6fa6
    *v2 = v3 - 0x59216a5e;
    bool v4; // 0x3e6fa2
    int64_t v5 = unknown_ffffffffcce139cd((v4 ? -1 : 1) + a1); // 0x3e6fb2
    *(int32_t *)(a2 + 74) = (int32_t)a3;
    return ((v5 - (v3 < 0x59216a5e ? 17 : 16)) % 256 | v5 & -256) ^ 109;
}

// Address range: 0x3e6fc8 - 0x3e7062
int64_t function_3e6fc8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x3e6fc8
    int64_t result3; // 0x3e6fc8
    bool v1; // 0x3e6fc8
    if (v1 || v1) {
        int64_t * v2 = (int64_t *)(result3 + 28); // 0x3e6fd0
        *v2 = (int64_t)v1 + a6 + *v2;
        return function_2e875edd();
    }
    if (v1) {
        int32_t v3 = a2;
        __asm_outsd((int16_t)a3, v3);
        uint32_t v4 = (int32_t)result3 + 0x36201762; // 0x3e7043
        unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x3e7043
        int64_t result = v4; // 0x3e7043
        if (v5 % 2 != 0) {
            // 0x3e7012
            return result;
        }
        // 0x3e704a
        *(int32_t *)a1 = v3;
        return (int64_t)(*(int32_t *)(8 * result3 + result) | v4);
    }
    // 0x3e6ff1
    *(char *)-0x285f6ec0a672a2ed = (char)result3;
    char * v6 = (char *)(result3 + a2); // 0x3e6fff
    char v7 = *v6; // 0x3e6fff
    char v8 = result3 / 256; // 0x3e6fff
    char v9 = v7 + v8; // 0x3e6fff
    *v6 = v9;
    if (((v9 ^ v7) & (v9 ^ v8)) >= 0) {
        // 0x3e7012
        int64_t result2; // 0x3e6fc8
        return result2;
    }
    char * v10 = (char *)(4 * a4 + 56 + result3); // 0x3e7004
    *v10 = *v10 + (char)a7;
    return result3;
}

// Address range: 0x3e7086 - 0x3e708f
int64_t function_3e7086(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e7086
    return __asm_sti(a1, a2, a3, a4) + 0x6f730714 & 0xffffffff;
}

// Address range: 0x3e7296 - 0x3e72e7
int64_t function_3e7296(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e7296
    int64_t result; // 0x3e7296
    bool v1; // 0x3e7296
    if (!v1) {
        char * v2 = (char *)(result + 0x5fa92577); // 0x3e72e1
        *v2 = *v2 / 2;
        return result;
    }
    unsigned char v3 = (char)result;
    *(char *)result = v3 + 101;
    int64_t result2; // 0x3e7296
    if (a4 != 1 && v3 >= 155) {
        result2 = function_3e723a();
    }
    // 0x3e729f
    return result2;
}

// Address range: 0x3e7309 - 0x3e732f
int64_t function_3e7309(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3e7309
    int64_t v1; // 0x3e7309
    unsigned char v2 = *(char *)(v1 - 77 + 2 * v1); // 0x3e7309
    int32_t v3 = *(int32_t *)(v1 + 6); // 0x3e730e
    uint32_t v4 = *(int32_t *)(v1 - 0x42bd70bc); // 0x3e7313
    unsigned char v5 = (char)v1; // 0x3e7319
    unsigned char v6 = v4 > (int32_t)a1 ? 88 : 87; // 0x3e7319
    __asm_outsb((int16_t)(v3 + (int32_t)a3 + (int32_t)(v2 > (char)v1)), (char)v1);
    int64_t v7 = (v1 & 0xffffff00 | (int64_t)(v5 - v6)) + 0x173655bf + (int64_t)(v4 > (int32_t)a1 | v6 > v5); // 0x3e731f
    return (v7 + 157) % 256 | v7 & 0xffffff00;
}

// Address range: 0x3e738b - 0x3e738e
int64_t function_3e738b(int64_t a1) {
    // 0x3e738b
    int64_t result; // 0x3e738b
    return result;
}

// Address range: 0x3e741c - 0x3e7421
int64_t function_3e741c(void) {
    // 0x3e741c
    return function_ffffffffd5a55eee();
}

// Address range: 0x3e7422 - 0x3e74bb
int64_t function_3e7422(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3e7422
    int64_t result; // 0x3e7422
    if ((int32_t)result >= 0x2993bb1e) {
        // 0x3e742a
        return result;
    }
    int32_t * v1 = (int32_t *)(2 * result); // 0x3e74a8
    *v1 = *v1 ^ (int32_t)result;
    return __asm_int1();
}

// Address range: 0x3e752f - 0x3e7537
int64_t function_3e752f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e752f
    int64_t v1; // 0x3e752f
    return v1 ^ 148;
}

// Address range: 0x3e753f - 0x3e7550
int64_t function_3e753f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3e753f
    int64_t result; // 0x3e753f
    return result;
}

// Address range: 0x3e757c - 0x3e761c
int64_t function_3e757c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3e757c
    int64_t v1; // 0x3e757c
    int64_t result = v1 & -256 | a4 / 256 % 256; // 0x3e757c
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x3e757c
    if (!v2) {
        // 0x3e75db
        return result;
    }
    int64_t v3; // 0x3e757c
    if (v2) {
        // 0x3e7585
        *(int32_t *)v3 = (int32_t)v2 - (int32_t)v1 + *(int32_t *)&v3;
        return result;
    }
    int64_t v4 = (v2 ? -4 : 4) + a1; // 0x3e7580
    int32_t * v5 = (int32_t *)(result + 0x6d4c874f); // 0x3e75eb
    *v5 = *v5 - (int32_t)v4;
    char * v6 = (char *)(v1 + 39 & 0xffffffff); // 0x3e75f6
    *v6 = (char)a4;
    char * v7 = (char *)v4; // 0x3e75ff
    *v7 = *v7 + (char)(v3 / 256);
    char * v8 = (char *)((256 * v1 & 0xff00 | a4 & -0x10000 | (int64_t)*v6) + 0x1734ed53); // 0x3e7615
    *v8 = *v8 ^ (char)(v3 / 256);
    __asm_outsd((int16_t)a3, *(int32_t *)(0x2b3ed9b7 * a3 & 0xffffffff));
    return result + 0xa124a3ba & 0xffff00ff ^ 0x70270124;
}

// Address range: 0x3e7620 - 0x3e7633
int64_t function_3e7620(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e7620
    *(char *)0x2f11b2d7 = *(char *)0x2f11b2d7 + 35;
    int64_t result; // 0x3e7620
    return result;
}

// Address range: 0x3e7653 - 0x3e7659
int64_t function_3e7653(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 10); // 0x3e7653
    int64_t v2; // 0x3e7653
    *v1 = *v1 | (int32_t)v2;
    int64_t v3; // 0x3e7653
    return (v2 & 0xffffffff | 0x100000000 * a3) / (int64_t)*(int32_t *)&v3 & 0xffffffff;
}
