/*
 * Targeted RetDec C for native executable gap queue batch 469.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x228266-0x228466 rank=- name=- kind=- bytes=- uncovered=-
 *   0x228466-0x228666 rank=- name=- kind=- bytes=- uncovered=-
 *   0x228666-0x228866 rank=- name=- kind=- bytes=- uncovered=-
 *   0x228866-0x228a66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b0f75-0x2b1175 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b1175-0x2b1375 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b1375-0x2b1575 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b1575-0x2b1775 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_21314e4();
int64_t function_228266(int64_t a1, int64_t a2, int64_t a3);
int64_t function_228282(int64_t a1, int64_t a2, int64_t a3);
int64_t function_228319(int64_t a1, int64_t a2, int64_t a3);
int64_t function_228323(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_22835f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2283b8(int64_t a1, int64_t a2);
int64_t function_2283c3(int64_t a1, int64_t a2);
int64_t function_228418(void);
int64_t function_22841a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_22841f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_228421(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_228487(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2284a4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2284b7(void);
int64_t function_2284c2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2284d2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_22856d(int64_t a1);
int64_t function_228570(void);
int64_t function_22857a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_228599(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22863c(void);
int64_t function_228656(int64_t a1, int64_t a2, int64_t a3);
int64_t function_22865b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22865d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2286ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22870b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, uint64_t a7, int64_t a8);
int64_t function_2287cd(void);
int64_t function_2287fb(void);
int64_t function_228868(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_228871(int64_t a1);
int64_t function_2288ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2288d4(void);
int64_t function_2288f8(void);
int64_t function_22892b(void);
int64_t function_22895f(void);
int64_t function_228962(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2289c6(void);
int64_t function_2289d5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_228a00(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_228a64(int64_t a1);
int64_t function_2b0f74();
int64_t function_2b0f75(int64_t a1, int64_t a2);
int64_t function_2b0f81(int64_t a1, int64_t a2);
int64_t function_2b0fa1(void);
int64_t function_2b0fed(int64_t a1);
int64_t function_2b1016(void);
int64_t function_2b107a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b10c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b10f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b1132(void);
int64_t function_2b115e(int64_t a1);
int64_t function_2b1165(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b11be(void);
int64_t function_2b11ce(int64_t a1);
int64_t function_2b11cf(void);
int64_t function_2b11ed(void);
int64_t function_2b11f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2b120e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b1224(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b125c(void);
int64_t function_2b127b(int64_t a1, int64_t a2);
int64_t function_2b12ad(void);
int64_t function_2b12bb(void);
int64_t function_2b12c8(int64_t a1);
int64_t function_2b12d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2b1389(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2b13b0(void);
int64_t function_2b13f7(void);
int64_t function_2b1408(int64_t a1);
int64_t function_2b1458(void);
int64_t function_2b147f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2b150d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2b1576(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2b15fd(int64_t a1);
int64_t function_2b1616(void);
int64_t function_2b161e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2b16eb(void);
int64_t function_2b16ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b1727(void);
int64_t function_2b1728(int64_t a1, int64_t a2);
int64_t function_2b1769(void);
int64_t function_4d0b85b2();
int64_t function_ffffffff9a3214a8();
int64_t function_ffffffffab3879ab();
int64_t function_ffffffffcb8e8b1e();
int64_t function_ffffffffd9ce3db1();
int64_t unknown_1097f579();
int64_t unknown_202f4b87();
int64_t unknown_2280c682();
int64_t unknown_2923c454();
int64_t unknown_2c2e5985();
int64_t unknown_3a35997a();
int64_t unknown_3d246c71();
int64_t unknown_3df4f779();
int64_t unknown_408de49b();
int64_t unknown_47be2114();
int64_t unknown_6116390();
int64_t unknown_7d8d50e0();
int64_t unknown_ffffffff8be7c4b2();
int64_t unknown_ffffffff999f8a19();
int64_t unknown_ffffffffa0b39aea();
int64_t unknown_ffffffffa15183fc();
int64_t unknown_ffffffffb84289dd();
int64_t unknown_ffffffffc77a8561();
int64_t unknown_ffffffffcbaacc37();
int64_t unknown_ffffffffd71a7f62();
int64_t unknown_ffffffffd8e58e53();
int64_t unknown_ffffffffdb67a383();
int64_t unknown_ffffffffe4f28090();
int64_t unknown_ffffffffe835996f();
int64_t unknown_ffffffffebc39f44();
int64_t unknown_ffffffffebeaf606();
int64_t unknown_ffffffffeced1328();
int64_t unknown_fffffffffc1fa8fa();

// Address range: 0x228266 - 0x228281
int64_t function_228266(int64_t a1, int64_t a2, int64_t a3) {
    // 0x228266
    int32_t v1; // 0x228266
    *(int32_t *)(a2 - 85 + a3) = (int32_t)(int64_t)&v1;
    int64_t v2; // 0x228266
    int32_t * v3 = (int32_t *)(unknown_3df4f779() + v2 & 0xffffffff); // 0x22827a
    *v3 = *v3 + (int32_t)a3;
    return unknown_2280c682();
}

// Address range: 0x228282 - 0x22828a
int64_t function_228282(int64_t a1, int64_t a2, int64_t a3) {
    // 0x228282
    return a3 & 0xffffffff;
}

// Address range: 0x228319 - 0x228323
int64_t function_228319(int64_t a1, int64_t a2, int64_t a3) {
    // 0x228319
    int64_t result; // 0x228319
    *(char *)-0x17656ed7 = *(char *)-0x17656ed7 | (char)result;
    int32_t * v1 = (int32_t *)(4 * a2 + a1); // 0x22831f
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x228323 - 0x22832e
int64_t function_228323(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x228323
    int64_t result; // 0x228323
    *(char *)a3 = (char)result + (char)(a3 / 256);
    return result;
}

// Address range: 0x22835f - 0x228368
int64_t function_22835f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 + 0x3c081079); // 0x22835f
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x22835f
    return result;
}

// Address range: 0x2283b8 - 0x2283bc
int64_t function_2283b8(int64_t a1, int64_t a2) {
    // 0x2283b8
    int64_t result; // 0x2283b8
    return result;
}

// Address range: 0x2283c3 - 0x228415
int64_t function_2283c3(int64_t a1, int64_t a2) {
    // 0x2283c3
    bool v1; // 0x2283c3
    if (v1) {
        // 0x2283c5
        return function_4d0b85b2();
    }
    // 0x2283df
    unknown_ffffffffa0b39aea();
    unknown_ffffffffebeaf606();
    int64_t v2; // 0x2283c3
    int32_t * v3 = (int32_t *)(v2 + 0x1e02cba6); // 0x22840a
    *v3 = *v3 + (int32_t)v2;
    return 0x7ffc01e8;
}

// Address range: 0x228418 - 0x228419
int64_t function_228418(void) {
    // 0x228418
    int64_t result; // 0x228418
    return result;
}

// Address range: 0x22841a - 0x22841e
int64_t function_22841a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x22841a
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x22841a
    return function_228421(a1, a2, a3, v1);
}

// Address range: 0x22841f - 0x228421
int64_t function_22841f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x22841f
    int64_t result; // 0x22841f
    return result;
}

// Address range: 0x228421 - 0x22847c
int64_t function_228421(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3; // 0x228421
    int64_t v4 = v3 & 0xffff00ff | (int64_t)(int32_t)"lock"; // 0x228427
    char * v5 = (char *)(a2 - 0x4afc44b7); // 0x228428
    char v6 = *v5 + (char)v4; // 0x228428
    unsigned char v7 = llvm_ctpop_i8(v6); // 0x228428
    *v5 = v6;
    if (v7 % 2 == 0) {
        function_228418();
    }
    unsigned char v8 = (char)v3; // 0x228422
    *(char *)(v4 - 0x65494b2d) = (char)((int32_t)"lock" >> 8);
    unknown_ffffffffebc39f44();
    *(char *)v1 = *(char *)&v1 + v8;
    int32_t v9 = *(int32_t *)&v2;
    uint32_t v10 = v9 + (int32_t)v1; // 0x228445
    int64_t v11 = unknown_ffffffffd8e58e53(); // 0x22844d
    __asm_iretd();
    unknown_ffffffffd71a7f62();
    char v12 = *(char *)0x7441f488; // 0x228461
    *(char *)0x7441f488 = v8 / 128 + (char)((int32_t)v11 > 0x4a612ec4) + v12;
    int32_t v13 = unknown_3d246c71(); // 0x228470
    uint32_t v14 = v10 + v13; // 0x228470
    __asm_out((int16_t)v14, v13);
    int64_t result = unknown_1097f579(); // 0x228473
    *(int32_t *)a1 = v9;
    char * v15 = (char *)((int64_t)v14 + 31); // 0x228479
    *v15 = *v15 + (char)(v14 < v10);
    return result;
}

// Address range: 0x228487 - 0x2284a3
int64_t function_228487(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x228487
    int64_t v1; // 0x228487
    int64_t v2 = v1;
    int64_t v3 = a4;
    uint32_t v4 = (int32_t)a4 % 32; // 0x228487
    int64_t v5; // 0x228487
    if (v4 != 0) {
        bool v6; // 0x228487
        v5 = (int32_t)v2 >> v4 | (int32_t)((v2 & 0xffffffff) << (int64_t)(33 - v4)) | (int32_t)v6 << 32 - v4;
    }
    *(int32_t *)0x232990 = *(int32_t *)0x232990 >> 1;
    *(char *)0x3d2284a2 = *(char *)0x3d2284a2 + (char)(a3 / 256);
    int32_t * v7 = (int32_t *)(a3 + 0x7594ef92); // 0x228495
    *v7 = *v7 + (int32_t)v1;
    *(char *)v3 = *(char *)&v3 - (char)v1;
    return *(int64_t *)(v5 + 0x25f5);
}

// Address range: 0x2284a4 - 0x2284b0
int64_t function_2284a4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = __asm_wait(a1, a2); // 0x2284a4
    int32_t * v2 = (int32_t *)(a1 - 16); // 0x2284a7
    *v2 = *v2 + (int32_t)a4;
    bool v3; // 0x2284a4
    return (a4 / 256 + (int64_t)(bool)v3 + v1) % 256 | v1 & -256;
}

// Address range: 0x2284b7 - 0x2284b9
int64_t function_2284b7(void) {
    // 0x2284b7
    int64_t result; // 0x2284b7
    return result;
}

// Address range: 0x2284c2 - 0x2284d2
int64_t function_2284c2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2284c2
    int64_t v1; // 0x2284c2
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return a4 & 0xffffff00 | (int64_t)*(char *)(v1 + a4 % 256);
}

// Address range: 0x2284d2 - 0x2284e3
int64_t function_2284d2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2284d2
    int64_t result; // 0x2284d2
    __asm_out_133(-70, (int32_t)result);
    *(char *)a1 = (char)result + (char)(a3 / 256);
    *(char *)-0x141c41d = *(char *)-0x141c41d + (char)(result / 256);
    return result;
}

// Address range: 0x22856d - 0x228570
int64_t function_22856d(int64_t a1) {
    // 0x22856d
    int64_t v1; // 0x22856d
    return function_228599(a1, v1, v1, v1);
}

// Address range: 0x228570 - 0x228573
int64_t function_228570(void) {
    // 0x228570
    int64_t result; // 0x228570
    return result;
}

// Address range: 0x22857a - 0x228591
int64_t function_22857a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x22857a
    *(char *)a1 = (char)a3;
    bool v1; // 0x22857a
    return unknown_ffffffffdb67a383((v1 ? -1 : 1) + a1);
}

// Address range: 0x228599 - 0x22862d
int64_t function_228599(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x228599
    int64_t v1; // 0x228599
    int64_t v2 = v1;
    *(char *)a1 = (char)v1;
    uint32_t v3 = *(int32_t *)0x7ae9c59e; // 0x22859f
    int32_t v4 = a3; // 0x22859f
    int32_t v5 = v3 + v4; // 0x22859f
    *(int32_t *)0x7ae9c59e = v5;
    if (v5 < 0 != ((v5 ^ v3) & (v5 ^ v4)) < 0) {
        // 0x22861b
        return (v2 + 144 + (v5 < v3 ? 139 : 140)) % 256 | v2 & -256;
    }
    // 0x22861f
    bool v6; // 0x228599
    int64_t v7 = v6 ? -1 : 1; // 0x228599
    int32_t * v8 = (int32_t *)(a4 - 0x53ac0d0b); // 0x22861f
    *v8 = *v8 + (int32_t)v1;
    return __asm_wait(v7 + a1, v7 + a2);
}

// Address range: 0x22863c - 0x22863d
int64_t function_22863c(void) {
    // 0x22863c
    int64_t result; // 0x22863c
    return result;
}

// Address range: 0x228656 - 0x22865a
int64_t function_228656(int64_t a1, int64_t a2, int64_t a3) {
    // 0x228656
    int64_t v1; // 0x228656
    return function_22865d(a1, a2, a3 & -256 | 50, v1, (int64_t)&g3);
}

// Address range: 0x22865b - 0x22865d
int64_t function_22865b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x22865b
    int64_t result; // 0x22865b
    *(int32_t *)a4 = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x22865d - 0x2286ed
int64_t function_22865d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x22865d
    int64_t v1; // 0x22865d
    int64_t result = v1;
    uint64_t v2 = a4 - 1; // 0x22865e
    uint64_t v3 = v2 / 256;
    bool v4; // 0x22865d
    if (v2 == 0 || v4) {
        char v5 = *(char *)(v1 - 119); // 0x228660
        *(int32_t *)a3 = (int32_t)(256 * (int64_t)(v5 + (char)v3) | v2 & 0xffff00ff) + (int32_t)a3;
        return result;
    }
    int32_t * v6 = (int32_t *)(v1 + 0xef2593); // 0x2286e0
    *v6 = *v6 + (int32_t)a1;
    return (result + v3) % 256 | result & -256;
}

// Address range: 0x2286ef - 0x228702
int64_t function_2286ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)(a2 - 18); // 0x2286f8
    int64_t result; // 0x2286ef
    int32_t * v2 = (int32_t *)(result + 39); // 0x2286fc
    int32_t v3 = *v2; // 0x2286fc
    *v2 = (int32_t)result + 8 + v3 + (int32_t)(v1 <= (char)((int32_t)(result & a4) / 256));
    return result;
}

// Address range: 0x22870b - 0x2287b4
int64_t function_22870b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, uint64_t a7, int64_t a8) {
    // 0x22870b
    bool v1; // 0x22870b
    bool v2 = v1;
    int64_t v3 = a8;
    int64_t v4; // 0x22870b
    *(int32_t *)a1 = (int32_t)(v4 ^ a1);
    char v5 = v4; // 0x228712
    *(char *)a1 = v5;
    int64_t v6 = v2 ? -1 : 1; // 0x228712
    *(char *)(v6 + a1) = v5;
    int64_t v7; // 0x22870b
    *(char *)a2 = *(char *)&v7 - (char)(a4 / 256);
    *(char *)a5 = *(char *)-0x5edd77a2 + v5;
    int32_t * v8 = (int32_t *)(a4 + 122); // 0x228729
    *v8 = *v8 + 14;
    char v9 = a7 / 256; // 0x228731
    *(char *)-0x316e21c8 = *(char *)-0x316e21c8 + v9;
    *(char *)(a4 - 24) = v9;
    int32_t * v10 = (int32_t *)a7; // 0x228742
    *v10 = *v10 - 0x54b966aa;
    int64_t v11 = 2 * v6 + a5; // 0x228744
    int64_t v12 = v6 + 0xab469956; // 0x228744
    int64_t v13; // 0x22870b
    int32_t v14 = *(int32_t *)&v13; // 0x22874b
    *(int32_t *)a3 = v14 + (int32_t)(int64_t)&v3;
    unknown_2923c454(v11, v12);
    *(int32_t *)v11 = *(int32_t *)v12;
    return unknown_ffffffffc77a8561(v11 + (v2 ? -5 : 5), v12 + (v2 ? -4 : 4));
}

// Address range: 0x2287cd - 0x2287ce
int64_t function_2287cd(void) {
    // 0x2287cd
    int64_t result; // 0x2287cd
    return result;
}

// Address range: 0x2287fb - 0x228801
int64_t function_2287fb(void) {
    // 0x2287fb
    int64_t result; // 0x2287fb
    char * v1 = (char *)result; // 0x2287fd
    *v1 = *v1 + 60;
    return result;
}

// Address range: 0x228868 - 0x22886a
int64_t function_228868(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x228868
    return a4 & 0xffffffff;
}

// Address range: 0x228871 - 0x228876
int64_t function_228871(int64_t a1) {
    // 0x228871
    int64_t result; // 0x228871
    return result;
}

// Address range: 0x2288ac - 0x2288bb
int64_t function_2288ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffff8be7c4b2(); // 0x2288ac
    int64_t v2 = v1 & 239 | 16; // 0x2288b1
    int64_t v3; // 0x2288ac
    *(char *)a1 = (char)(v2 | v3);
    int32_t * v4 = (int32_t *)(8 * a3 - 38 + v3); // 0x2288b5
    *v4 = 0x40000 * *v4;
    return v2 | v1 & -256;
}

// Address range: 0x2288d4 - 0x2288d7
int64_t function_2288d4(void) {
    // 0x2288d4
    int64_t result; // 0x2288d4
    return result;
}

// Address range: 0x2288f8 - 0x2288f9
int64_t function_2288f8(void) {
    // 0x2288f8
    int64_t result; // 0x2288f8
    return result;
}

// Address range: 0x22892b - 0x22892c
int64_t function_22892b(void) {
    // 0x22892b
    int64_t result; // 0x22892b
    return result;
}

// Address range: 0x22895f - 0x228960
int64_t function_22895f(void) {
    // 0x22895f
    int64_t result; // 0x22895f
    return result;
}

// Address range: 0x228962 - 0x2289a9
int64_t function_228962(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x228962
    int64_t v1; // 0x228962
    int64_t result = v1;
    uint32_t v2 = (int32_t)a4 % 32; // 0x228964
    if (v2 != 0) {
        uint32_t v3 = (int32_t)result;
        *(int32_t *)result = v3 >> 32 - v2 | v3 << v2;
    }
    return result;
    int32_t * v4 = (int32_t *)(2 * a3 + 0x13125cb4); // 0x22898d
    *v4 = *v4 + (int32_t)a1;
    int32_t * v5 = (int32_t *)(a1 - 0x31d9b4fa); // 0x228996
    int32_t v6 = *v5 + (int32_t)a4; // 0x228996
    *v5 = v6;
    int64_t v7 = (result + a4 / 256) % 256 | result & -256; // 0x22899c
    if (v6 >= 0) {
        v7 = function_22892b();
    }
    uint64_t result2 = v7;
    *(char *)(result2 + 0x3dfab48d) = (char)(result2 / 256);
    return result2;
}

// Address range: 0x2289c6 - 0x2289c7
int64_t function_2289c6(void) {
    // 0x2289c6
    int64_t result; // 0x2289c6
    return result;
}

// Address range: 0x2289d5 - 0x228a00
int64_t function_2289d5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_ffffffffb84289dd(); // 0x2289d7
    *(int32_t *)a1 = (int32_t)result;
    bool v1; // 0x2289d5
    char * v2 = (char *)(a1 + 0x1e882d7 + (v1 ? -4 : 4)); // 0x2289de
    *v2 = *v2 + (char)(a3 / 256);
    if (a4 != 1) {
        // 0x228a54
        return result;
    }
    while (true) {
        // continue -> 0x2289e6
    }
}

// Address range: 0x228a00 - 0x228a39
int64_t function_228a00(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x228a00
    int64_t v1; // 0x228a00
    uint64_t v2 = v1;
    char * v3 = (char *)(a1 + 0x6c763592); // 0x228a00
    unsigned char v4 = *v3; // 0x228a00
    unsigned char v5 = v4 + (char)(v2 / 256); // 0x228a00
    *v3 = v5;
    char * v6 = (char *)(((v2 + 153 + (int64_t)(v5 < v4)) % 256 | v2 & -256) - 0x43660df7); // 0x228a08
    unsigned char v7 = *v6; // 0x228a08
    unsigned char v8 = v7 + (char)a4; // 0x228a08
    *v6 = v8;
    int64_t result = unknown_47be2114(); // 0x228a13
    if (v8 >= v7 && v8 != 0) {
        result = function_2289c6();
    }
    // 0x228a15
    *(char *)a2 = (char)a3;
    int32_t * v9 = (int32_t *)result; // 0x228a1c
    uint32_t v10 = *v9; // 0x228a1c
    uint32_t v11 = v10 + (int32_t)v1; // 0x228a1c
    *v9 = v11;
    if (v11 < v10) {
        // 0x228a20
        return result;
    }
    char * v12 = (char *)result; // 0x228a37
    *v12 = *v12 - (char)result;
    return result;
}

// Address range: 0x228a64 - 0x228a65
int64_t function_228a64(int64_t a1) {
    // 0x228a64
    int64_t result; // 0x228a64
    return result;
}

// Address range: 0x2b0f75 - 0x2b0f7c
int64_t function_2b0f75(int64_t a1, int64_t a2) {
    // 0x2b0f75
    int64_t result; // 0x2b0f75
    int32_t * v1 = (int32_t *)(result - 0x4e3aff6e); // 0x2b0f75
    *v1 = *v1 + (int32_t)a2;
    return result;
}

// Address range: 0x2b0f81 - 0x2b0f92
int64_t function_2b0f81(int64_t a1, int64_t a2) {
    // 0x2b0f81
    unknown_202f4b87(a1, a2);
    return unknown_6116390();
}

// Address range: 0x2b0fa1 - 0x2b0fa3
int64_t function_2b0fa1(void) {
    // 0x2b0fa1
    return function_2b0f74();
}

// Address range: 0x2b0fed - 0x2b0ffb
int64_t function_2b0fed(int64_t a1) {
    // 0x2b0fed
    return unknown_fffffffffc1fa8fa(a1);
}

// Address range: 0x2b1016 - 0x2b1017
int64_t function_2b1016(void) {
    // 0x2b1016
    int64_t result; // 0x2b1016
    return result;
}

// Address range: 0x2b107a - 0x2b10c0
int64_t function_2b107a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x4c36980c); // 0x2b107c
    int64_t v2; // 0x2b107a
    *v1 = *v1 + (int32_t)v2;
    int64_t v3 = 256 * v2 + a3 & 0xff00 | a3 & -0xff01; // 0x2b1082
    int64_t v4; // 0x2b107a
    *(char *)a4 = *(char *)&v4 | (char)v2;
    *(char *)a1 = __asm_insb((int16_t)v3);
    unknown_ffffffffe4f28090();
    *(char *)0x102cf896 = *(char *)0x102cf896 >> 1;
    unknown_408de49b();
    int32_t v5 = *(int32_t *)(a4 - 62); // 0x2b109a
    int64_t v6 = v3 + 0x81fec300 & 0xffff00ff | (int64_t)&g1; // 0x2b10b8
    return (v6 + (int64_t)((v5 + (int32_t)a4) / 256)) % 256 | v6 & -256;
}

// Address range: 0x2b10c1 - 0x2b10d7
int64_t function_2b10c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 0x13d0065); // 0x2b10c1
    *v1 = *v1 + (char)a3;
    int64_t v2; // 0x2b10c1
    __asm_out((int16_t)a3, (int32_t)v2);
    int64_t v3; // 0x2b10c1
    unsigned char v4 = (char)a4 - *(char *)&v3; // 0x2b10c9
    unsigned char v5 = (char)v2;
    *(char *)v2 = v5 / 4 | 64 * v5;
    unsigned char v6 = v4 % 32;
    if (v6 != 0) {
        int32_t * v7 = (int32_t *)(a4 & -256 | (int64_t)v4); // 0x2b10d3
        *v7 = *v7 >> (int32_t)v6;
    }
    return function_2b1132();
}

// Address range: 0x2b10f0 - 0x2b1112
int64_t function_2b10f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b10f0
    int64_t v1; // 0x2b10f0
    char * v2 = (char *)(v1 - 0x5ffec27f); // 0x2b10f0
    *v2 = *v2 + (char)a4;
    return function_ffffffffcb8e8b1e();
}

// Address range: 0x2b1132 - 0x2b113a
int64_t function_2b1132(void) {
    char v1 = *(char *)-0x19aa5ec5; // 0x2b1134
    int64_t result; // 0x2b1132
    *(char *)-0x19aa5ec5 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x2b115e - 0x2b1161
int64_t function_2b115e(int64_t a1) {
    // 0x2b115e
    int64_t result; // 0x2b115e
    return result;
}

// Address range: 0x2b1165 - 0x2b11a4
int64_t function_2b1165(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b1165
    bool v1; // 0x2b1165
    __asm_hlt((v1 ? -1 : 1) + a1);
    unknown_ffffffffe835996f();
    unknown_3a35997a();
    int64_t result = unknown_2c2e5985() & -256 | (int64_t)(*(char *)-0x750522fe173bff60 + 25); // 0x2b118e
    *(int32_t *)0x53aae5cd01e83a01 = (int32_t)result;
    return result;
}

// Address range: 0x2b11be - 0x2b11bf
int64_t function_2b11be(void) {
    // 0x2b11be
    int64_t result; // 0x2b11be
    return result;
}

// Address range: 0x2b11ce - 0x2b11cf
int64_t function_2b11ce(int64_t a1) {
    // 0x2b11ce
    int64_t result; // 0x2b11ce
    return result;
}

// Address range: 0x2b11cf - 0x2b11d0
int64_t function_2b11cf(void) {
    // 0x2b11cf
    int64_t result; // 0x2b11cf
    return result;
}

// Address range: 0x2b11ed - 0x2b11ef
int64_t function_2b11ed(void) {
    // 0x2b11ed
    return function_2b11cf();
}

// Address range: 0x2b11f4 - 0x2b11fc
int64_t function_2b11f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2b11f4
    int64_t v1; // 0x2b11f4
    *(char *)a4 = (char)(v1 / 256 & v1);
    return unknown_ffffffffa15183fc(a1, a2, a3, a4, a5);
}

// Address range: 0x2b120e - 0x2b1218
int64_t function_2b120e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b120e
    int64_t result; // 0x2b120e
    return result;
}

// Address range: 0x2b1224 - 0x2b1246
int64_t function_2b1224(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b1224
    int64_t v1; // 0x2b1224
    bool v2; // 0x2b1224
    if (!v2) {
        int64_t result = __asm_int3(); // 0x2b122e
        int32_t * v3 = (int32_t *)(a3 - 24); // 0x2b1231
        *v3 = *v3 | (int32_t)v1;
        int32_t * v4 = (int32_t *)(a4 - 10); // 0x2b1234
        *v4 = *v4 + (int32_t)a3;
        return result;
    }
    int64_t v5 = a4 - 1; // 0x2b123b
    int64_t result2 = v1 | 188; // 0x2b123b
    if (v5 == 0) {
        result2 = function_2b11be();
    }
    int32_t * v6 = (int32_t *)(a2 - 0x9d6fe18); // 0x2b1240
    *v6 = *v6 | (int32_t)v5;
    return result2;
}

// Address range: 0x2b125c - 0x2b125d
int64_t function_2b125c(void) {
    // 0x2b125c
    int64_t result; // 0x2b125c
    return result;
}

// Address range: 0x2b127b - 0x2b1288
int64_t function_2b127b(int64_t a1, int64_t a2) {
    // 0x2b127b
    int64_t v1; // 0x2b127b
    int64_t result = v1;
    *(int32_t *)(result - 0x17a60100) = (int32_t)result;
    int32_t * v2 = (int32_t *)(result + 2 * a2); // 0x2b1281
    *v2 = *v2 + (int32_t)v1;
    return result;
}

// Address range: 0x2b12ad - 0x2b12b2
int64_t function_2b12ad(void) {
    // 0x2b12ad
    return function_ffffffffab3879ab();
}

// Address range: 0x2b12bb - 0x2b12c0
int64_t function_2b12bb(void) {
    // 0x2b12bb
    return function_ffffffff9a3214a8();
}

// Address range: 0x2b12c8 - 0x2b12d5
int64_t function_2b12c8(int64_t a1) {
    // 0x2b12c8
    int64_t v1; // 0x2b12c8
    int64_t v2 = v1;
    int64_t result = v2 * v2; // 0x2b12c9
    int32_t * v3 = (int32_t *)result; // 0x2b12cc
    *v3 = *v3 + (int32_t)v1;
    return result;
}

// Address range: 0x2b12d5 - 0x2b135b
int64_t function_2b12d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2b12d5
    bool v1; // 0x2b12d5
    if (v1) {
        function_2b125c();
    }
    int64_t v2 = unknown_7d8d50e0(); // 0x2b12da
    char v3 = __asm_in_135((int16_t)a3); // 0x2b12e4
    if (a4 == 0) {
        // 0x2b1356
        return v2 & -256 | (int64_t)v3;
    }
    // 0x2b12e7
    return function_21314e4();
}

// Address range: 0x2b1389 - 0x2b1392
int64_t function_2b1389(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2b1389
    return function_ffffffffd9ce3db1();
}

// Address range: 0x2b13b0 - 0x2b13b1
int64_t function_2b13b0(void) {
    // 0x2b13b0
    int64_t result; // 0x2b13b0
    return result;
}

// Address range: 0x2b13f7 - 0x2b13f9
int64_t function_2b13f7(void) {
    // 0x2b13f7
    return function_2b13b0();
}

// Address range: 0x2b1408 - 0x2b1409
int64_t function_2b1408(int64_t a1) {
    // 0x2b1408
    int64_t result; // 0x2b1408
    return result;
}

// Address range: 0x2b1458 - 0x2b1459
int64_t function_2b1458(void) {
    // 0x2b1458
    int64_t result; // 0x2b1458
    return result;
}

// Address range: 0x2b147f - 0x2b1496
int64_t function_2b147f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    unsigned char v1 = *(char *)0x83300ab0498dc0a; // 0x2b147f
    int64_t v2; // 0x2b147f
    int64_t v3 = v2 & -256; // 0x2b147f
    *(int32_t *)a1 = (int32_t)(v3 | (int64_t)v1);
    char v4 = v1 + (char)(a4 / 256); // 0x2b1489
    int32_t * v5 = (int32_t *)(a4 - 0x70f7ef10); // 0x2b148b
    uint32_t v6 = *v5; // 0x2b148b
    uint32_t v7 = v6 + (int32_t)a3; // 0x2b148b
    *v5 = v7;
    char v8 = v7 < v6; // 0x2b1491
    char v9 = v4 - 98 + v8; // 0x2b1491
    char v10 = v9 + v8; // 0x2b1491
    int64_t result = v3 | (int64_t)v9; // 0x2b1493
    if (v9 < 0 == ((v10 ^ v4) & (v10 ^ -128)) < 0) {
        result = function_2b1458();
    }
    // 0x2b1495
    return result;
}

// Address range: 0x2b150d - 0x2b1544
int64_t function_2b150d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2b150d
    int64_t v1; // 0x2b150d
    int32_t * v2 = (int32_t *)(v1 + 0x61b03a96); // 0x2b150d
    *v2 = *v2 + (int32_t)v1;
    int64_t v3 = unknown_ffffffff999f8a19(); // 0x2b1513
    int32_t * v4 = (int32_t *)(a4 + 0x7486aab4); // 0x2b1518
    *v4 = *v4 + (int32_t)v1;
    char * v5 = (char *)(a3 + 77); // 0x2b151f
    unsigned char v6 = *v5; // 0x2b151f
    unsigned char v7 = v6 + (char)(a4 / 256); // 0x2b151f
    *v5 = v7;
    unknown_ffffffffeced1328();
    int32_t v8 = a1;
    int64_t v9 = v3 & 0xffffffff; // 0x2b1522
    bool v10 = v7 < v6; // 0x2b1522
    int64_t v11 = __asm_wait(a1, a2); // 0x2b1527
    uint32_t v12 = (int32_t)v9 % 32; // 0x2b1528
    int64_t v13 = v11; // 0x2b1528
    if (v12 != 0) {
        v13 = (int32_t)v10 << v12 - 1 | (int32_t)v11 << v12 | (int32_t)((v11 & 0xffffffff) >> (int64_t)(33 - v12));
    }
    char * v14 = (char *)(v9 - 0x8427bf7); // 0x2b152b
    *v14 = *v14 + (char)v13;
    int64_t result = unknown_ffffffffcbaacc37(); // 0x2b1531
    int32_t * v15 = (int32_t *)(result + 12); // 0x2b1536
    uint32_t v16 = *v15; // 0x2b1536
    int32_t v17 = v16 + v8; // 0x2b1536
    *v15 = v17;
    uint32_t v18 = (int32_t)v13;
    uint32_t v19 = v18 % 32; // 0x2b1539
    bool v20 = ((v17 ^ v16) & (v17 ^ v8)) < 0; // 0x2b1539
    bool v21 = v17 < v16; // 0x2b1539
    int32_t * v22; // 0x2b1539
    uint32_t v23; // 0x2b1539
    int32_t v24; // 0x2b1539
    uint32_t v25; // 0x2b1539
    if (v19 != 0) {
        v22 = (int32_t *)result;
        v23 = *v22;
        v24 = v23 >> 32 - v19 | v23 << v19;
        *v22 = v24;
        v25 = v24 % 2;
        v20 = v19 == 1 ? v25 != (int32_t)(v24 < 0) : ((v17 ^ v16) & (v17 ^ v8)) < 0;
        v21 = v25 != 0;
    }
    v9 = v13 & 0xffffffff;
    v10 = v21;
    while (v17 == 0 || v17 < 0 != v20) {
        // 0x2b1527
        v11 = __asm_wait(a1, a2);
        v12 = (int32_t)v9 % 32;
        v13 = v11;
        if (v12 != 0) {
            v13 = (int32_t)v10 << v12 - 1 | (int32_t)v11 << v12 | (int32_t)((v11 & 0xffffffff) >> (int64_t)(33 - v12));
        }
        v14 = (char *)(v9 - 0x8427bf7);
        *v14 = *v14 + (char)v13;
        result = unknown_ffffffffcbaacc37();
        v15 = (int32_t *)(result + 12);
        v16 = *v15;
        v17 = v16 + v8;
        *v15 = v17;
        v18 = (int32_t)v13;
        v19 = v18 % 32;
        v20 = ((v17 ^ v16) & (v17 ^ v8)) < 0;
        v21 = v17 < v16;
        if (v19 != 0) {
            v22 = (int32_t *)result;
            v23 = *v22;
            v24 = v23 >> 32 - v19 | v23 << v19;
            *v22 = v24;
            v25 = v24 % 2;
            v20 = v19 == 1 ? v25 != (int32_t)(v24 < 0) : ((v17 ^ v16) & (v17 ^ v8)) < 0;
            v21 = v25 != 0;
        }
        v9 = v13 & 0xffffffff;
        v10 = v21;
    }
    int32_t * v26 = (int32_t *)(v9 - 10); // 0x2b153f
    *v26 = *v26 + v18;
    return result;
}

// Address range: 0x2b1576 - 0x2b157d
int64_t function_2b1576(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2b1576
    int64_t result; // 0x2b1576
    return result;
}

// Address range: 0x2b15fd - 0x2b1601
int64_t function_2b15fd(int64_t a1) {
    // 0x2b15fd
    int64_t result; // 0x2b15fd
    return result;
}

// Address range: 0x2b1616 - 0x2b1619
int64_t function_2b1616(void) {
    // 0x2b1616
    int64_t result; // 0x2b1616
    return result;
}

// Address range: 0x2b161e - 0x2b1636
int64_t function_2b161e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2b161e
    int64_t result; // 0x2b161e
    int32_t * v1 = (int32_t *)(result + 0x3d01e860); // 0x2b1620
    int32_t v2 = a4; // 0x2b1620
    *v1 = *v1 + v2;
    int32_t * v3 = (int32_t *)(result - 0x4473a8a9); // 0x2b1626
    *v3 = *v3 + v2;
    char * v4 = (char *)(result + 14); // 0x2b162c
    *v4 = *v4 + (char)(a3 / 256);
    return result;
}

// Address range: 0x2b16eb - 0x2b16ec
int64_t function_2b16eb(void) {
    // 0x2b16eb
    int64_t result; // 0x2b16eb
    return result;
}

// Address range: 0x2b16ff - 0x2b1725
int64_t function_2b16ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x43e1540b); // 0x2b1708
    int64_t v2; // 0x2b16ff
    *v1 = *v1 + (int32_t)v2;
    int32_t * v3 = (int32_t *)(a1 - 0x3ae447ec); // 0x2b1719
    *v3 = *v3 + (int32_t)a1;
    char * v4 = (char *)(a1 - 81); // 0x2b171f
    *v4 = *v4 | (char)a2;
    return function_2b1728(a1, a2);
}

// Address range: 0x2b1727 - 0x2b1728
int64_t function_2b1727(void) {
    // 0x2b1727
    int64_t result; // 0x2b1727
    return result;
}

// Address range: 0x2b1728 - 0x2b1735
int64_t function_2b1728(int64_t a1, int64_t a2) {
    // 0x2b1728
    int64_t v1; // 0x2b1728
    return v1 & -256 | (int64_t)*(char *)0x5d5af59c6c40540;
}

// Address range: 0x2b1769 - 0x2b176b
int64_t function_2b1769(void) {
    // 0x2b1769
    return function_2b16eb();
}
