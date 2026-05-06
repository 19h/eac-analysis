/*
 * Targeted RetDec C for native executable gap queue batch 490.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xf639c-0xf659c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf659c-0xf679c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf679c-0xf699c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf6b9c-0xf6d9c rank=- name=- kind=- bytes=- uncovered=-
 *   0x199485-0x199685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x199685-0x199885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x199885-0x199a85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x199a85-0x199c85 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
extern int g4;
extern int g5;
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

int64_t function_163e981f();
int64_t function_199485(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1994ee(int64_t a1);
int64_t function_1994f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_199525(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_199582(void);
int64_t function_1995ba(void);
int64_t function_199666(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19972f(int64_t a1);
int64_t function_199742(void);
int64_t function_199798(void);
int64_t function_1997b0(void);
int64_t function_1997b2(void);
int64_t function_1997b7(void);
int64_t function_1997cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19985d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_199959(int64_t a1);
int64_t function_199962(void);
int64_t function_199981(void);
int64_t function_1999c8(void);
int64_t function_1999ef(void);
int64_t function_1999fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_199a39(void);
int64_t function_199a62(void);
int64_t function_199a6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_199adc(void);
int64_t function_199b01(void);
int64_t function_199b58(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_199c69(int64_t a1);
int64_t function_21fc956c();
int64_t function_3d6b9a85();
int64_t function_7bad673a();
int64_t function_f639c(void);
int64_t function_f6463(int64_t a1, int64_t a2);
int64_t function_f6493(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f650d(int64_t a1);
int64_t function_f653e(void);
int64_t function_f6585(int64_t a1, uint64_t a2, int64_t a3);
int64_t function_f65d5(int64_t a1);
int64_t function_f6617(void);
int64_t function_f6626(void);
int64_t function_f662e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f6663(void);
int64_t function_f6678(void);
int64_t function_f66a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f6769(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f67a2(void);
int64_t function_f67f0(int64_t a1);
int64_t function_f6845(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f685d(void);
int64_t function_f687b(void);
int64_t function_f68bf(void);
int64_t function_f68c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f6918(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f691a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f6b9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_f6c10(void);
int64_t function_f6c2f(void);
int64_t function_f6c38(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f6c40(int64_t a1);
int64_t function_f6c8d(void);
int64_t function_f6cb4(void);
int64_t function_f6ce5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f6d40(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ffffffff9ed6855e();
int64_t function_ffffffffafe52c44();
int64_t unknown_109bfcd4();
int64_t unknown_13eee7f2();
int64_t unknown_1505be0e();
int64_t unknown_159c5e1f();
int64_t unknown_1a4898df();
int64_t unknown_1a65c604();
int64_t unknown_2bc6ef5();
int64_t unknown_2cba8452();
int64_t unknown_581d27d4();
int64_t unknown_5f6419b2();
int64_t unknown_6300aa43();
int64_t unknown_6a880ef1();
int64_t unknown_7809065b();
int64_t unknown_ffffffff8349bc7b();
int64_t unknown_ffffffff8a67d43e();
int64_t unknown_ffffffff8c13b2ce();
int64_t unknown_ffffffff90a8cd83();
int64_t unknown_ffffffff99ede36e();
int64_t unknown_ffffffffaf1b8034();
int64_t unknown_ffffffffafb76471();
int64_t unknown_ffffffffd0a75d8c();
int64_t unknown_ffffffffe9636dca();
int64_t unknown_fffffffff7d4550e();
int64_t unknown_fffffffffc854601();

// Address range: 0xf639c - 0xf639f
int64_t function_f639c(void) {
    // 0xf639c
    int64_t result; // 0xf639c
    return result;
}

// Address range: 0xf6463 - 0xf6467
int64_t function_f6463(int64_t a1, int64_t a2) {
    // 0xf6463
    return a1 & 0xffffffff;
}

// Address range: 0xf6493 - 0xf64a8
int64_t function_f6493(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf6493
    int64_t result; // 0xf6493
    char * v1 = (char *)(result - 0x7d3987e9); // 0xf6493
    bool v2; // 0xf6493
    *v1 = *v1 - (v2 ? -23 : -24);
    *(int32_t *)(a1 + 0x763a310d) = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0xf650d - 0xf6510
int64_t function_f650d(int64_t a1) {
    // 0xf650d
    int64_t result; // 0xf650d
    return result;
}

// Address range: 0xf653e - 0xf6552
int64_t function_f653e(void) {
    // 0xf653e
    unknown_2cba8452();
    return function_7bad673a();
}

// Address range: 0xf6585 - 0xf65aa
int64_t function_f6585(int64_t a1, uint64_t a2, int64_t a3) {
    // 0xf6585
    int64_t v1; // 0xf6585
    unsigned char v2 = (char)(v1 / 256); // 0xf6589
    unsigned char v3 = *(char *)(v1 + 33) + v2; // 0xf6589
    uint64_t v4 = a2 % 256; // 0xf6591
    int64_t v5 = v4 * v4 | a2 & 0xffff0000; // 0xf6591
    int32_t * v6 = (int32_t *)(v5 - 0x18ff970f); // 0xf6596
    *v6 = *v6 + (int32_t)a3;
    int64_t v7; // 0xf6585
    *(int32_t *)v5 = *(int32_t *)&v7;
    char v8 = *(char *)-0x7169855c; // 0xf659d
    *(char *)-0x7169855c = v3 - (char)(v1 + (int64_t)(v3 < v2)) + v8;
    return a1 & 0xffffffff;
}

// Address range: 0xf65d5 - 0xf65d6
int64_t function_f65d5(int64_t a1) {
    // 0xf65d5
    int64_t result; // 0xf65d5
    return result;
}

// Address range: 0xf6617 - 0xf6618
int64_t function_f6617(void) {
    // 0xf6617
    int64_t result; // 0xf6617
    return result;
}

// Address range: 0xf6626 - 0xf6628
int64_t function_f6626(void) {
    // 0xf6626
    int64_t result; // 0xf6626
    return result;
}

// Address range: 0xf662e - 0xf6653
int64_t function_f662e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 79); // 0xf662e
    *v1 = *v1 + (int32_t)a4;
    int64_t v2; // 0xf662e
    char * v3 = (char *)(v2 + 0xf4c5610); // 0xf6639
    *v3 = *v3 & -111;
    return __asm_iretd((int32_t)v2 + (int32_t)a1) + 0xd5395dff & 0xffffffff;
}

// Address range: 0xf6663 - 0xf6664
int64_t function_f6663(void) {
    // 0xf6663
    int64_t result; // 0xf6663
    return result;
}

// Address range: 0xf6678 - 0xf667b
int64_t function_f6678(void) {
    // 0xf6678
    return function_f6663();
}

// Address range: 0xf66a2 - 0xf66b1
int64_t function_f66a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xf66a2
    int64_t v1; // 0xf66a2
    *(char *)a3 = (char)(v1 | a4);
    bool v2; // 0xf66a2
    return (v2 ? 0xffffffff : 1) + a1 & 0xffffffff;
}

// Address range: 0xf6769 - 0xf676e
int64_t function_f6769(int64_t a1, int64_t a2, int64_t a3) {
    // 0xf6769
    int64_t result; // 0xf6769
    return result;
}

// Address range: 0xf67a2 - 0xf67a5
int64_t function_f67a2(void) {
    // 0xf67a2
    int64_t v1; // 0xf67a2
    int64_t v2 = v1;
    bool v3; // 0xf67a2
    return (v2 - (v3 ? 15 : 14)) % 256 | v2 & -256;
}

// Address range: 0xf67f0 - 0xf67f1
int64_t function_f67f0(int64_t a1) {
    // 0xf67f0
    int64_t result; // 0xf67f0
    return result;
}

// Address range: 0xf6845 - 0xf6858
int64_t function_f6845(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xf6845
    int64_t v1; // 0xf6845
    *(char *)-0x12ec425efe179eec = (char)v1;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int32_t * v2 = (int32_t *)(a4 - 24); // 0xf6851
    *v2 = *v2 - (int32_t)a1;
    int32_t * v3 = (int32_t *)(v1 & -104); // 0xf6854
    *v3 = *v3 + (int32_t)a2;
    int64_t v4; // 0xf6845
    return (int64_t)*(int32_t *)&v4;
}

// Address range: 0xf685d - 0xf685f
int64_t function_f685d(void) {
    // 0xf685d
    int64_t result; // 0xf685d
    return result;
}

// Address range: 0xf687b - 0xf687c
int64_t function_f687b(void) {
    // 0xf687b
    int64_t result; // 0xf687b
    return result;
}

// Address range: 0xf68bf - 0xf68c0
int64_t function_f68bf(void) {
    // 0xf68bf
    int64_t result; // 0xf68bf
    return result;
}

// Address range: 0xf68c5 - 0xf6917
int64_t function_f68c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a3;
    int64_t v3; // 0xf68c5
    char v4 = (char)v3 ^ -57; // 0xf68c7
    char v5 = v4 + 20; // 0xf68c7
    int64_t v6; // 0xf68c5
    if (v4 > -20) {
        if (v5 >= 0) {
            function_f68bf();
        }
        // 0xf6908
        unknown_fffffffff7d4550e();
        int32_t * v7 = (int32_t *)(a1 - 0x43fa9f86); // 0xf690d
        *v7 = *v7 | (int32_t)v3;
        *(int32_t *)v6 = *(int32_t *)&v6 ^ (int32_t)a1;
        return function_f691a(a1, a2, v2);
    }
    if (v4 != -20 || v5 == 0) {
        uint64_t v8 = unknown_109bfcd4(); // 0xf68ce
        int32_t * v9 = (int32_t *)(a2 + 118); // 0xf68d3
        uint32_t v10 = *v9; // 0xf68d3
        *v9 = v10 / 0x200000 | 2048 * v10;
        *(char *)v2 = *(char *)&v2 ^ (char)(v8 / 256);
        return v8 & -256 | (int64_t)*(char *)(v6 + v8 % 256);
    }
    int32_t v11 = a3;
    uint32_t v12 = (int32_t)a4;
    uint32_t v13 = v12 % 32; // 0xf68e5
    int32_t v14 = v11; // 0xf68e5
    v1 = a4;
    float32_t v15 = v12; // 0xf68e5
    if (v13 != 0) {
        *(int32_t *)a3 = v11 << 32 - v13 | v11 >> v13;
        v14 = v2;
        v15 = *(float32_t *)&v1;
    }
    int32_t * v16 = (int32_t *)(v1 - 0x21fb1710); // 0xf68eb
    uint32_t v17 = *v16; // 0xf68eb
    uint32_t v18 = v17 + v14; // 0xf68eb
    *v16 = v18;
    int64_t v19 = v3 & 0xd6c47f00 | 0x293b8000; // 0xf68f1
    if (v18 < v17 || v18 == 0) {
        v19 = function_f687b();
    }
    int32_t v20 = *(int32_t *)&v1; // 0xf68f3
    char v21 = __asm_in((int16_t)v2); // 0xf68f7
    float80_t v22; // 0xf68c5
    *(float80_t *)(((int64_t)((int32_t)v19 & -256 & v20) | (int64_t)v21) - 8) = v22 * (float80_t)v15;
    int64_t result = unknown_fffffffffc854601(); // 0xf68fb
    char * v23 = (char *)result; // 0xf6901
    *v23 = *v23 + (char)v1;
    return result;
}

// Address range: 0xf6918 - 0xf691a
int64_t function_f6918(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf6918
    int64_t result; // 0xf6918
    *(int32_t *)a4 = 2 * (int32_t)result;
    return result;
}

// Address range: 0xf691a - 0xf6935
int64_t function_f691a(int64_t a1, int64_t a2, int64_t a3) {
    // 0xf691a
    int64_t v1; // 0xf691a
    char * v2 = (char *)(v1 - 82); // 0xf691f
    *v2 = *v2 & (char)(v1 / 256);
    uint64_t v3 = __asm_hlt(); // 0xf6922
    unsigned char v4 = *(char *)(a1 + 0x1cb9af92); // 0xf6929
    char * v5 = (char *)(v1 + a3 & 0xffffffff); // 0xf6931
    *v5 = *v5 + (char)v1;
    return v3 & -256 | (v3 | v1) + 19 + (int64_t)(v4 < (char)(v3 / 256)) & 219 | 36;
}

// Address range: 0xf6b9c - 0xf6c10
int64_t function_f6b9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xf6b9c
    int64_t result; // 0xf6b9c
    if ((int32_t)result > 0x11f62a01) {
        // 0xf6bbe
        *(int32_t *)0xcaa20a7 = *(int32_t *)0xcaa20a7 + (int32_t)a1;
        char * v1 = (char *)(result + (8 * result | 1)); // 0xf6bc6
        *v1 = *v1 + (char)(result / 256);
        __asm_out(84, (char)result - 41);
        unknown_ffffffffe9636dca();
        __asm_int3();
        return unknown_6a880ef1();
    }
    char v2 = result; // 0xf6ba1
    if (llvm_ctpop_i8(v2 - 1) % 2 == 0) {
        int32_t * v3 = (int32_t *)(result + 0x16244077); // 0xf6c00
        *v3 = *v3 + (int32_t)result;
        *(int32_t *)0x2a18ff = *(int32_t *)0x2a18ff >> 28;
        return result;
    }
    // 0xf6bab
    *(char *)a1 = v2;
    bool v4; // 0xf6b9c
    int64_t v5 = (v4 ? -1 : 1) + a1; // 0xf6bab
    unknown_5f6419b2(v5);
    return __asm_iretd((int32_t)v5);
}

// Address range: 0xf6c10 - 0xf6c11
int64_t function_f6c10(void) {
    // 0xf6c10
    int64_t result; // 0xf6c10
    return result;
}

// Address range: 0xf6c2f - 0xf6c30
int64_t function_f6c2f(void) {
    // 0xf6c2f
    int64_t result; // 0xf6c2f
    return result;
}

// Address range: 0xf6c38 - 0xf6c3f
int64_t function_f6c38(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_ffffffff8a67d43e(a1, a2, a3); // 0xf6c38
    int64_t v1; // 0xf6c38
    *(int32_t *)a1 = (int32_t)v1;
    return result;
}

// Address range: 0xf6c40 - 0xf6c43
int64_t function_f6c40(int64_t a1) {
    // 0xf6c40
    int64_t result; // 0xf6c40
    return result;
}

// Address range: 0xf6c8d - 0xf6c90
int64_t function_f6c8d(void) {
    // 0xf6c8d
    __asm_hlt();
    return function_f6c10();
}

// Address range: 0xf6cb4 - 0xf6cb5
int64_t function_f6cb4(void) {
    // 0xf6cb4
    int64_t result; // 0xf6cb4
    return result;
}

// Address range: 0xf6ce5 - 0xf6d26
int64_t function_f6ce5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_13eee7f2(); // 0xf6cec
    int64_t v2; // 0xf6ce5
    *(int32_t *)a1 = (int32_t)v2;
    bool v3; // 0xf6ce5
    int64_t v4 = v3 ? -4 : 4; // 0xf6cf3
    int64_t v5 = v4 + a1; // 0xf6cf3
    int32_t * v6 = (int32_t *)(a2 - 107 + v4); // 0xf6cfd
    *v6 = *v6 & (int32_t)v5;
    char * v7 = (char *)(((v1 + 179) % 256 | v1 & -256) + 0x7062c03); // 0xf6d00
    char v8 = *v7; // 0xf6d00
    char v9 = v2; // 0xf6d00
    char v10 = v8 + v9; // 0xf6d00
    *v7 = v10;
    unknown_1505be0e(v5, 0xa68b33d);
    if (v10 < 0 == ((v10 ^ v8) & (v10 ^ v9)) < 0) {
        function_f6cb4();
    }
    // 0xf6d10
    *(char *)0xb701181 = *(char *)0xb701181 | 61;
    int64_t v11 = unknown_159c5e1f(); // 0xf6d19
    return (v11 + 216) % 256 | v11 & -256;
}

// Address range: 0xf6d40 - 0xf6d4b
int64_t function_f6d40(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf6d40
    float80_t v1; // 0xf6d40
    *(int16_t *)(a4 + 0x1e8ba6f) = (int16_t)v1;
    return function_ffffffffafe52c44();
}

// Address range: 0x199485 - 0x19948c
int64_t function_199485(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x199485
    return function_21fc956c();
}

// Address range: 0x1994ee - 0x1994ef
int64_t function_1994ee(int64_t a1) {
    // 0x1994ee
    int64_t result; // 0x1994ee
    return result;
}

// Address range: 0x1994f3 - 0x199525
int64_t function_1994f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1994f3
    float80_t v1; // 0x1994f3
    *(int32_t *)a1 = (int32_t)v1;
    char v2 = __asm_in_133(28); // 0x1994f8
    *(int32_t *)0x3d422000fbf82570 = (int32_t)(a5 & 0xffffff00 | (int64_t)v2);
    int64_t v3; // 0x1994f3
    int32_t * v4 = (int32_t *)((v3 & -0xff01 | (int64_t)&g4) + 86); // 0x199504
    *v4 = *v4 + (int32_t)a4;
    return function_ffffffff9ed6855e();
}

// Address range: 0x199525 - 0x199536
int64_t function_199525(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x199525
    int64_t v1; // 0x199525
    *(char *)a4 = (char)v1 - 1;
    int64_t result; // 0x199525
    bool v2; // 0x199525
    *(int32_t *)result = (int32_t)v2 + (int32_t)a2 + *(int32_t *)&result;
    int64_t v3; // 0x199525
    *(char *)a1 = *(char *)&v3;
    return result;
}

// Address range: 0x199582 - 0x199585
int64_t function_199582(void) {
    // 0x199582
    int64_t result; // 0x199582
    return result;
}

// Address range: 0x1995ba - 0x1995bd
int64_t function_1995ba(void) {
    // 0x1995ba
    int64_t result; // 0x1995ba
    return result;
}

// Address range: 0x199666 - 0x199721
int64_t function_199666(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    *(char *)a4 = (char)(unknown_ffffffff99ede36e() | a4);
    unknown_ffffffff8349bc7b();
    int64_t v3 = a1; // bp-16, 0x19967a
    int64_t v4; // 0x199666
    char v5 = *(char *)(v4 - 0x4079b2fa); // 0x19967b
    int64_t v6 = (a3 | (int64_t)&g2) & -0xff01; // 0x19967b
    int64_t v7 = unknown_ffffffffd0a75d8c(); // 0x199686
    uint32_t v8 = *(int32_t *)((v4 & (v4 | -256)) - 69); // 0x19968b
    int64_t v9 = v8; // 0x19968b
    uint32_t v10 = *(int32_t *)&v1 & (int32_t)v7; // 0x19968e
    int64_t v11 = v2;
    *(int64_t *)v11 = v11 - 24;
    int32_t * v12 = (int32_t *)v9; // 0x199696
    uint32_t v13 = *v12; // 0x199696
    int32_t v14 = a1; // 0x199696
    uint32_t v15 = v13 + v14; // 0x199696
    *v12 = v15;
    v3 = v2;
    *(int32_t *)v1 = (int32_t)(v15 < v13) - v8 + *(int32_t *)&v1;
    char v16 = (int64_t)v10 + (int64_t)(-1 - (int32_t)v4 < (int32_t)v4) + v1 / 256; // 0x1996a7
    char v17 = -1 - (int32_t)(int64_t)&v3 < (int32_t)v1 ? -89 : -90; // 0x1996a7
    unsigned char v18 = v16 - v17; // 0x1996a7
    int64_t result = (int64_t)v18 | (int64_t)(v10 & -256); // 0x1996a7
    int16_t v19 = 256 * (int64_t)((char)((int64_t)&g2 >> 8) - v5) | v6; // 0x1996a9
    *(char *)a1 = __asm_insb(v19);
    if (((v18 - (char)(-1 - (int32_t)(int64_t)&v3 < (int32_t)v1) ^ v16) & (v16 ^ -128)) >= 0) {
        // 0x1996ac
        return result;
    }
    int32_t v20 = *(int32_t *)&v1 + v14; // 0x19971b
    unsigned char v21 = llvm_ctpop_i8((char)v20); // 0x19971b
    *(int32_t *)v1 = v20;
    if (v21 % 2 == 0) {
        // 0x199720
        __asm_outsd(v19, *(int32_t *)&v2);
        return result;
    }
    int32_t * v22 = (int32_t *)(a1 + 0x180e6eb4); // 0x1996e6
    *v22 = *v22 + -1 - (int32_t)v1;
    bool v23; // 0x199666
    int64_t v24 = v23 ? -1 : 1; // 0x1996ee
    int64_t v25 = v24 + a1; // 0x1996ee
    unknown_2bc6ef5(v25, v2 + v24, v9 & 0xff00 | v6);
    int64_t result2 = unknown_1a65c604(); // 0x1996fe
    *(int32_t *)v25 = (int32_t)result2;
    return result2;
}

// Address range: 0x19972f - 0x199730
int64_t function_19972f(int64_t a1) {
    // 0x19972f
    int64_t result; // 0x19972f
    return result;
}

// Address range: 0x199742 - 0x199743
int64_t function_199742(void) {
    // 0x199742
    int64_t result; // 0x199742
    return result;
}

// Address range: 0x199798 - 0x19979a
int64_t function_199798(void) {
    // 0x199798
    int64_t v1; // 0x199798
    return function_1997cc(v1, v1, v1, v1);
}

// Address range: 0x1997b0 - 0x1997b2
int64_t function_1997b0(void) {
    // 0x1997b0
    int64_t result; // 0x1997b0
    return result;
}

// Address range: 0x1997b2 - 0x1997b7
int64_t function_1997b2(void) {
    // 0x1997b2
    return function_163e981f();
}

// Address range: 0x1997b7 - 0x1997b9
int64_t function_1997b7(void) {
    // 0x1997b7
    return function_199742();
}

// Address range: 0x1997cc - 0x19985c
int64_t function_1997cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1997cc
    int64_t v1; // 0x1997cc
    uint64_t v2 = v1;
    int32_t v3 = *(int32_t *)(v1 - 96); // 0x1997cc
    if (llvm_ctpop_i8((char)v3 & (char)"ake3_hasher_finalize_seek") % 2 == 0) {
        // 0x1997d5
        return v2 + a3 & 0xffffffff;
    }
    char v4 = *(char *)(a4 + 33); // 0x199812
    int64_t v5 = 256 * (int64_t)(v4 + (char)(v2 / 256)) | v2 & -0xff01; // 0x199812
    *(char *)-0x19e0a8e4 = *(char *)-0x19e0a8e4 + (char)(v1 / 256);
    unknown_ffffffffaf1b8034();
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    *(int64_t *)((v5 + 0x490501e8 & 0xffffffff) - 8) = (v5 | v1) & 0xffffffff;
    unknown_6300aa43();
    while (true) {
        // 0x19984a
        unknown_7809065b();
    }
}

// Address range: 0x19985d - 0x1998f2
int64_t function_19985d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int16_t v1 = a3; // 0x199862
    int64_t v2; // 0x19985d
    int32_t v3 = v2 & 0xffffff00 | (int64_t)__asm_in(v1); // 0x199863
    int64_t v4 = a4 - 1; // 0x199868
    if (v4 == 0 || v3 == 0x5c00273) {
        // 0x19986a
        unknown_ffffffffafb76471();
        if (v3 < 0x5c00273) {
            // 0x199872
            __asm_hlt();
        }
        // 0x199873
        return function_19985d(a1, a2, a3, v4, (int64_t)&g5);
    }
    // 0x1998cc
    unknown_581d27d4();
    *(char *)a1 = __asm_insb(v1);
    uint64_t v5 = unknown_1a4898df(); // 0x1998d9
    char * v6 = (char *)(v5 + 0x3612600); // 0x1998de
    *v6 = *v6 + (char)v5;
    char * v7 = (char *)(v2 - 0x34fe1800); // 0x1998e4
    *v7 = *v7 + (char)(v5 / 256);
    return a3 & 0xffffffff ^ 0xde0dec76;
}

// Address range: 0x199959 - 0x19995a
int64_t function_199959(int64_t a1) {
    // 0x199959
    int64_t result; // 0x199959
    return result;
}

// Address range: 0x199962 - 0x199964
int64_t function_199962(void) {
    // 0x199962
    int64_t result; // 0x199962
    return result;
}

// Address range: 0x199981 - 0x199982
int64_t function_199981(void) {
    // 0x199981
    int64_t result; // 0x199981
    return result;
}

// Address range: 0x1999c8 - 0x1999d2
int64_t function_1999c8(void) {
    // 0x1999c8
    unknown_ffffffff8c13b2ce();
    return function_3d6b9a85();
}

// Address range: 0x1999ef - 0x1999f2
int64_t function_1999ef(void) {
    // 0x1999ef
    int64_t result; // 0x1999ef
    return result;
}

// Address range: 0x1999fd - 0x199a1a
int64_t function_1999fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t result; // 0x1999fd
    int32_t * v2 = (int32_t *)(result + 0x19bdc6e9); // 0x1999fd
    uint32_t v3 = *v2; // 0x1999fd
    uint32_t v4 = v3 + (int32_t)result; // 0x1999fd
    *v2 = v4;
    char * v5 = (char *)(2 * a1 - 0x78c5dc7d + result); // 0x199a03
    unsigned char v6 = *v5; // 0x199a03
    char v7 = v4 < v3; // 0x199a03
    unsigned char v8 = v7 + (char)(result / 256); // 0x199a03
    char v9 = v6 - v8; // 0x199a03
    *v5 = v9;
    __asm_out_135((int16_t)a3, (int32_t)result);
    char v10 = v4 < v3 ? v8 != -1 | v6 < v9 - v7 : v6 < v8 ? 86 : 85; // 0x199a10
    *(char *)v1 = *(char *)&v1 - v10;
    return result;
}

// Address range: 0x199a39 - 0x199a3a
int64_t function_199a39(void) {
    // 0x199a39
    int64_t result; // 0x199a39
    return result;
}

// Address range: 0x199a62 - 0x199a65
int64_t function_199a62(void) {
    // 0x199a62
    int64_t result; // 0x199a62
    return result;
}

// Address range: 0x199a6a - 0x199ada
int64_t function_199a6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x199a6a
    __asm_hlt();
    unknown_ffffffff90a8cd83();
    int64_t v1 = __asm_int3(); // 0x199a84
    int64_t v2; // 0x199a6a
    char * v3 = (char *)(v2 - 0x38fec27e); // 0x199a85
    unsigned char v4 = *v3; // 0x199a85
    unsigned char v5 = (char)v1; // 0x199a85
    char v6 = v4 + v5; // 0x199a85
    unsigned char v7 = llvm_ctpop_i8(v6); // 0x199a85
    *v3 = v6;
    int64_t v8 = v2 + 1 + v2 & 0xffff00ff | 256 * (64 * (int64_t)(v6 == 0) | (int64_t)(v6 < v4) | 128 * (int64_t)(v6 < 0) | 16 * (int64_t)(v4 % 16 + v5 % 16 > 15) | 4 * (int64_t)(v7 % 2 == 0)) | 512; // 0x199a8d
    int32_t v9 = __asm_insd(((int16_t)a3 | (int16_t)&g3) % 256 | (int16_t)&g2); // 0x199a8e
    *(int32_t *)a1 = v9;
    int64_t result; // 0x199a6a
    if (v6 < 0 == ((v6 ^ v4) & (v6 ^ v5)) < 0 == (v6 != 0)) {
        // 0x199ac1
        result = v8;
        if (v6 > 0) {
            int64_t v10 = __asm_int3(); // 0x199ad3
            char v11 = *(char *)(v10 + 0xee8eaaf); // 0x199ad4
            return v10 & -256 | (int64_t)(v11 | (char)v10);
        }
    } else {
        // 0x199a91
        result = v8;
        if (a4 == 0) {
            result = function_199a39();
        }
    }
    // 0x199a93
    return result;
}

// Address range: 0x199adc - 0x199add
int64_t function_199adc(void) {
    // 0x199adc
    int64_t v1; // 0x199adc
    bool v2; // 0x199adc
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x199b01 - 0x199b02
int64_t function_199b01(void) {
    // 0x199b01
    int64_t result; // 0x199b01
    return result;
}

// Address range: 0x199b58 - 0x199b5e
int64_t function_199b58(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x199b58
    int64_t v1; // 0x199b58
    return v1 & -212;
}

// Address range: 0x199c69 - 0x199c6c
int64_t function_199c69(int64_t a1) {
    // 0x199c69
    int64_t result; // 0x199c69
    return result;
}
