/*
 * Targeted RetDec C for native executable gap queue batch 528.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1d8c5a-0x1d8e5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d8e5a-0x1d905a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d905a-0x1d925a rank=- name=- kind=- bytes=- uncovered=-
 *   0x42da93-0x42db93 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42dc93-0x42de93 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42de93-0x42e093 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42e093-0x42e293 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42e293-0x42e493 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1d8c5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d8d90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d8ed9(void);
int64_t function_1d8f0d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d8f13(void);
int64_t function_1d8f14(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d8f4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d9012(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d916e(int64_t a1);
int64_t function_1d9170(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d9175(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d91b7(int64_t a1);
int64_t function_1d9237(void);
int64_t function_1d9242(void);
int64_t function_1d924b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a8e63fe();
int64_t function_315819da();
int64_t function_366d10d0();
int64_t function_42da51();
int64_t function_42da79();
int64_t function_42da93(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42dac9(int64_t a1);
int64_t function_42dad6(void);
int64_t function_42db1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42db6c(void);
int64_t function_42dc93(void);
int64_t function_42dca2(int64_t a1);
int64_t function_42dcce(int64_t a1);
int64_t function_42dd72(void);
int64_t function_42ddab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_42dec2(int64_t a1);
int64_t function_42dee8(int64_t a1, int64_t a2);
int64_t function_42df16(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_42df6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_42df9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_42dfe3(int64_t a1);
int64_t function_42e03a(void);
int64_t function_42e050(int64_t a1);
int64_t function_42e066(void);
int64_t function_42e089(void);
int64_t function_42e0ac(void);
int64_t function_42e0d9(int64_t a1);
int64_t function_42e0e5(int64_t a1);
int64_t function_42e123(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42e1ae(void);
int64_t function_42e1c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42e1cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42e20e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5);
int64_t function_42e27e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42e286(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42e35c(int64_t a1);
int64_t function_42e3bb(int64_t a1);
int64_t function_42e404(int64_t a1);
int64_t function_42e41a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_cf3c7();
int64_t function_ffffffffa212d6cc();
int64_t function_ffffffffc09c149e();
int64_t function_ffffffffd479e976();
int64_t unknown_101f918e();
int64_t unknown_3841057f();
int64_t unknown_3a320237();
int64_t unknown_5b1e2350();
int64_t unknown_ffffffff88658855();
int64_t unknown_ffffffff8bceef62();
int64_t unknown_ffffffffd8672b26();

// Address range: 0x1d8c5a - 0x1d8d90
int64_t function_1d8c5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1d8c5a
    int64_t v1; // 0x1d8c5a
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(a4 + 124 + 4 * a4); // 0x1d8c5c
    *v3 = *v3 + (char)a4;
    int64_t v4; // bp-24, 0x1d8c5a
    v4 = (int64_t)&v4;
    return function_cf3c7(a1, a2, a3);
}

// Address range: 0x1d8d90 - 0x1d8ed9
int64_t function_1d8d90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x2a968fa; // bp-40, 0x1d8ded
    int64_t v2; // bp-64, 0x1d8d90
    v2 = (int64_t)&v2 + 24;
    return function_cf3c7((int64_t)&v1, a2, a3);
}

// Address range: 0x1d8ed9 - 0x1d8ede
int64_t function_1d8ed9(void) {
    // 0x1d8ed9
    int64_t result; // 0x1d8ed9
    return result;
}

// Address range: 0x1d8f0d - 0x1d8f11
int64_t function_1d8f0d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1d8f0d
    int64_t v1; // 0x1d8f0d
    return function_1d8f14(a1, a2, a3 & -256 | 173, v1);
}

// Address range: 0x1d8f13 - 0x1d8f14
int64_t function_1d8f13(void) {
    // 0x1d8f13
    int64_t result; // 0x1d8f13
    return result;
}

// Address range: 0x1d8f14 - 0x1d8f4d
int64_t function_1d8f14(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d8f14
    int64_t v1; // 0x1d8f14
    __asm_out(-81, (int32_t)v1);
    char * v2 = (char *)(v1 + 0xffb690b); // 0x1d8f17
    bool v3; // 0x1d8f14
    *v2 = 2 * *v2 | (char)!v3;
    unknown_ffffffffd8672b26();
    unknown_3a320237();
    int32_t * v4 = (int32_t *)((int64_t)((int32_t)a4 >> 1) - 0x6efabf93); // 0x1d8f43
    *v4 = *v4 / 2;
    return __asm_iretd();
}

// Address range: 0x1d8f4e - 0x1d8f64
int64_t function_1d8f4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d8f4e
    unknown_ffffffff88658855();
    return unknown_ffffffff8bceef62();
}

// Address range: 0x1d9012 - 0x1d9015
int64_t function_1d9012(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1d9012
    int64_t result; // 0x1d9012
    *(char *)a1 = (char)result + (char)a3;
    return result;
}

// Address range: 0x1d916e - 0x1d916f
int64_t function_1d916e(int64_t a1) {
    // 0x1d916e
    int64_t result; // 0x1d916e
    return result;
}

// Address range: 0x1d9170 - 0x1d9175
int64_t function_1d9170(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d9170
    int64_t result; // 0x1d9170
    return result;
}

// Address range: 0x1d9175 - 0x1d91a3
int64_t function_1d9175(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1d9175
    int64_t v1; // 0x1d9175
    if ((a5 & 64) != 0 || (char)a5 < 0 != (a5 & (int64_t)L"\n2") != 0) {
        // 0x1d919d
        return v1 & 0xffffffff;
    }
    // 0x1d9178
    unknown_3841057f(v1 & 0xffffffff);
    int64_t result = unknown_101f918e(); // 0x1d9188
    char * v2 = (char *)(a3 + 58 + 4 * a3); // 0x1d918d
    *v2 = *v2 + (char)a3;
    *(int32_t *)0x101e88d800013f0 = (int32_t)result;
    return result;
}

// Address range: 0x1d91b7 - 0x1d91bf
int64_t function_1d91b7(int64_t a1) {
    // 0x1d91b7
    return unknown_5b1e2350(a1);
}

// Address range: 0x1d9237 - 0x1d9239
int64_t function_1d9237(void) {
    // 0x1d9237
    int64_t result; // 0x1d9237
    return result;
}

// Address range: 0x1d9242 - 0x1d9247
int64_t function_1d9242(void) {
    // 0x1d9242
    return function_315819da();
}

// Address range: 0x1d924b - 0x1d9257
int64_t function_1d924b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1d924b
    int64_t result; // 0x1d924b
    *(int32_t *)a2 = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x42da93 - 0x42daa3
int64_t function_42da93(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42da93
    bool v1; // 0x42da93
    bool v2 = v1;
    int64_t v3; // 0x42da93
    if (v1) {
        v3 = function_42da51();
    }
    unsigned char v4 = (char)v3; // 0x42da96
    if (!((v2 ? (v2 ? 68 : 67) + v4 <= v4 : v4 > 188))) {
        function_42da79();
    }
    // 0x42da9a
    return function_366d10d0();
}

// Address range: 0x42dac9 - 0x42daca
int64_t function_42dac9(int64_t a1) {
    // 0x42dac9
    int64_t result; // 0x42dac9
    return result;
}

// Address range: 0x42dad6 - 0x42dad7
int64_t function_42dad6(void) {
    // 0x42dad6
    int64_t result; // 0x42dad6
    return result;
}

// Address range: 0x42db1b - 0x42db23
int64_t function_42db1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 104); // 0x42db1e
    *v1 = *v1 / 2;
    return function_42dad6();
}

// Address range: 0x42db6c - 0x42db6d
int64_t function_42db6c(void) {
    // 0x42db6c
    int64_t result; // 0x42db6c
    return result;
}

// Address range: 0x42dc93 - 0x42dc94
int64_t function_42dc93(void) {
    // 0x42dc93
    int64_t result; // 0x42dc93
    return result;
}

// Address range: 0x42dca2 - 0x42dca5
int64_t function_42dca2(int64_t a1) {
    // 0x42dca2
    int64_t result; // 0x42dca2
    return result;
}

// Address range: 0x42dcce - 0x42dcd1
int64_t function_42dcce(int64_t a1) {
    // 0x42dcce
    int64_t result; // 0x42dcce
    return result;
}

// Address range: 0x42dd72 - 0x42dd77
int64_t function_42dd72(void) {
    // 0x42dd72
    return function_ffffffffa212d6cc();
}

// Address range: 0x42ddab - 0x42de81
int64_t function_42ddab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x42ddab
    int64_t v1; // 0x42ddab
    char * v2 = (char *)(a6 + 116 + 2 * v1); // 0x42ddab
    *v2 = (char)v1;
    return v1 & -256 | (int64_t)(*v2 - 3);
}

// Address range: 0x42dec2 - 0x42ded7
int64_t function_42dec2(int64_t a1) {
    // 0x42dec2
    int64_t v1; // 0x42dec2
    uint64_t v2 = v1;
    bool v3; // 0x42dec2
    *(int32_t *)-0x25c24cbc = *(int32_t *)-0x25c24cbc + (v3 ? 117 : 116);
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x42dee8 - 0x42def4
int64_t function_42dee8(int64_t a1, int64_t a2) {
    // 0x42dee8
    int64_t v1; // 0x42dee8
    return v1 & -256 | 50;
}

// Address range: 0x42df16 - 0x42df22
int64_t function_42df16(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x42df16
    *(char *)a4 = (char)(a4 / 256);
    int64_t result; // 0x42df16
    float80_t v1; // 0x42df16
    *(float32_t *)(256 * result & 0xff00 | a4 & -0xff01) = (float32_t)v1;
    int64_t v2; // 0x42df16
    *(char *)a1 = *(char *)&v2 / 2;
    return result;
}

// Address range: 0x42df6d - 0x42df81
int64_t function_42df6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = __asm_sti(); // 0x42df6d
    int64_t v2; // 0x42df6d
    char * v3 = (char *)(v2 + 102); // 0x42df74
    *v3 = ((char)v1 ^ -128) + *v3;
    __asm_sti();
    int64_t v4; // 0x42df6d
    *(int32_t *)a1 = *(int32_t *)&v4;
    return a6 & 0xffffffff;
}

// Address range: 0x42df9f - 0x42dfa7
int64_t function_42df9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x42df9f
    int64_t result; // 0x42df9f
    __asm_out(54, (int32_t)result);
    return result;
}

// Address range: 0x42dfe3 - 0x42dfe5
int64_t function_42dfe3(int64_t a1) {
    // 0x42dfe3
    int64_t result; // 0x42dfe3
    return result;
}

// Address range: 0x42e03a - 0x42e04a
int64_t function_42e03a(void) {
    // 0x42e03a
    return function_ffffffffd479e976();
}

// Address range: 0x42e050 - 0x42e051
int64_t function_42e050(int64_t a1) {
    // 0x42e050
    int64_t result; // 0x42e050
    return result;
}

// Address range: 0x42e066 - 0x42e068
int64_t function_42e066(void) {
    // 0x42e066
    return function_42e0e5((int64_t)&g1);
}

// Address range: 0x42e089 - 0x42e08a
int64_t function_42e089(void) {
    // 0x42e089
    int64_t result; // 0x42e089
    return result;
}

// Address range: 0x42e0ac - 0x42e0b3
int64_t function_42e0ac(void) {
    // 0x42e0ac
    return function_42e089();
}

// Address range: 0x42e0d9 - 0x42e0dc
int64_t function_42e0d9(int64_t a1) {
    // 0x42e0d9
    int64_t result; // 0x42e0d9
    return result;
}

// Address range: 0x42e0e5 - 0x42e0e8
int64_t function_42e0e5(int64_t a1) {
    // 0x42e0e5
    int64_t result; // 0x42e0e5
    return result;
}

// Address range: 0x42e123 - 0x42e13d
int64_t function_42e123(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42e123
    int64_t v1; // 0x42e123
    int64_t v2 = v1;
    int64_t v3 = (v2 + 74) % 256 | v2 & 0xffffff00; // 0x42e123
    char * v4 = (char *)(v1 - 0x27a32d0e); // 0x42e12a
    *v4 = *v4 + (char)v1 + (char)((int32_t)v3 < 0x8b2c76fe);
    int64_t v5 = v3 + 0x74d38902 & 0xffffffff ^ -0x6cf22bfe; // 0x42e133
    *(char *)a1 = *(char *)(a2 & 0xffffffff & a4);
    return (v5 + 44) % 256 | v5 & -256;
}

// Address range: 0x42e1ae - 0x42e1b1
int64_t function_42e1ae(void) {
    // 0x42e1ae
    int64_t result; // 0x42e1ae
    return result;
}

// Address range: 0x42e1c2 - 0x42e1cb
int64_t function_42e1c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 100); // 0x42e1c2
    *v1 = 2 * *v1;
    int64_t v2; // 0x42e1c2
    return function_42e20e(a1, a2, a3, a4, &v2);
}

// Address range: 0x42e1cb - 0x42e20d
int64_t function_42e1cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42e1cb
    int64_t result; // 0x42e1cb
    // 0x42e1cd
    return result;
    int64_t v1 = __asm_wait(a1); // 0x42e1d1
    int32_t * v2 = (int32_t *)(a4 - 0x32f97188); // 0x42e1d3
    int32_t v3 = *v2 | (int32_t)a1; // 0x42e1d3
    *v2 = v3;
    result = v1;
    if (v3 == 0 == v3 >= 0) {
        int64_t v4; // 0x42e1cb
        result = function_42e286(a1, a4, v4, v4);
    }
    // 0x42e1cd
    return result;
}

// Address range: 0x42e20e - 0x42e27b
int64_t function_42e20e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5) {
    int64_t v1 = __asm_iretd(); // 0x42e20e
    unsigned char v2 = (char)v1;
    *(char *)v1 = v2;
    int64_t v3; // 0x42e20e
    if (v2 >= 0) {
        char * v4 = (char *)(v3 - 23); // 0x42e214
        *v4 = *v4 | (char)v3;
    }
    // 0x42e218
    *(char *)a1 = __asm_insb((int16_t)a3);
    return (int64_t)(*(int32_t *)(v3 - 0x24aa52ac) ^ (int32_t)v1);
}

// Address range: 0x42e27e - 0x42e286
int64_t function_42e27e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42e27e
    int64_t result; // 0x42e27e
    return result;
}

// Address range: 0x42e286 - 0x42e33f
int64_t function_42e286(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42e286
    int64_t v1; // 0x42e286
    int64_t v2 = v1;
    int64_t v3 = a2;
    bool v4; // 0x42e286
    if (!v4 && !v4) {
        int32_t * v5 = (int32_t *)(2 * a2 + a4); // 0x42e2d0
        *v5 = *v5 & (int32_t)a3;
        return (v2 + 138) % 256 | v2 & -256;
    }
    // 0x42e289
    *(int32_t *)a1 = (int32_t)(v1 & a1);
    uint64_t v6 = __asm_int1(); // 0x42e28b
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)v1;
    int64_t v7 = (v4 ? -1 : 1) + a1; // 0x42e291
    int32_t v8 = *(int32_t *)-0x776c8454c38b8528; // 0x42e2a1
    int64_t v9 = a4 - 1; // 0x42e2b0
    int32_t v10 = a3;
    uint32_t v11 = v10 & -256 | 96; // 0x42e2b2
    int32_t v12 = *(int32_t *)(8 * v1 + v9); // 0x42e2b2
    int32_t v13 = -1 - (char)a3 < (char)(v6 / 256); // 0x42e2b2
    uint32_t v14 = v12 + v11; // 0x42e2b2
    uint32_t v15 = v14 + v13; // 0x42e2b2
    int32_t v16 = v15 + v13; // 0x42e2b2
    unsigned char v17 = *(char *)&v3; // 0x42e2b5
    int64_t v18 = v3 - 1; // 0x42e2b5
    v3 = v18;
    int64_t v19 = v8 & -256 | (int32_t)v17; // 0x42e2b6
    if (v15 < 0 == ((v16 ^ v10) & (v16 ^ v12)) < 0) {
        if (v15 == 0) {
            // 0x42e2f4
            *(int32_t *)-0x21dac2954af50f14 = (int32_t)v9;
            unsigned char v20 = *(char *)(2 * v1); // 0x42e305
            return v9 & 0xffff0000 | (int64_t)(((int16_t)v8 >> 8) * (256 * (int16_t)v9 >> 8) % 256 * (int16_t)v20);
        }
        // 0x42e30f
        *(int32_t *)(v7 - 4) = __asm_insd((int16_t)v15);
        int32_t * v21 = (int32_t *)(v19 - 0x26b88d00); // 0x42e315
        *v21 = *v21 ^ (int32_t)v1;
        return function_ffffffffc09c149e();
    }
    int64_t v22 = v15; // 0x42e2b2
    int64_t v23 = v9 & 0xffffffff; // 0x42e2b9
    if (-1 - (char)a3 < (char)(v6 / 256) ? v15 <= v11 : v14 < v11) {
        v23 = function_42e27e(v7, v18, v22, v19);
    }
    char * v24 = (char *)(v22 - 46); // 0x42e2c2
    unsigned char v25 = *v24; // 0x42e2c2
    unsigned char v26 = v25 + (char)(v1 / 256); // 0x42e2c2
    *v24 = v26;
    return v23 - (v26 < v25 ? 0x1c27c57e : 0x1c27c57d) & 0xffffffff;
}

// Address range: 0x42e35c - 0x42e35f
int64_t function_42e35c(int64_t a1) {
    // 0x42e35c
    int64_t result; // 0x42e35c
    return result;
}

// Address range: 0x42e3bb - 0x42e3bd
int64_t function_42e3bb(int64_t a1) {
    // 0x42e3bb
    int64_t result; // 0x42e3bb
    return result;
}

// Address range: 0x42e404 - 0x42e407
int64_t function_42e404(int64_t a1) {
    // 0x42e404
    int64_t result; // 0x42e404
    return result;
}

// Address range: 0x42e41a - 0x42e48b
int64_t function_42e41a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x42e41a
    int64_t v1; // 0x42e41a
    int32_t v2 = v1; // 0x42e41a
    *(int32_t *)0x1168162930a1291d = v2;
    char * v3 = (char *)(v1 + 0x447faeda); // 0x42e423
    *v3 = *v3 - (char)a4;
    int32_t result = v2 ^ -0x33eb250b; // 0x42e434
    if (result >= 0) {
        // 0x42e484
        return result;
    }
    // 0x42e43c
    bool v4; // 0x42e41a
    return function_2a8e63fe((v4 ? -4 : 4) + a1);
}
