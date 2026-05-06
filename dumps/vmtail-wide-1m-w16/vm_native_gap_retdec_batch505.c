/*
 * Targeted RetDec C for native executable gap queue batch 505.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xf6d9c-0xf6f9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf6f9c-0xf719c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf719c-0xf739c rank=- name=- kind=- bytes=- uncovered=-
 *   0x2626c2-0x2628c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2628c2-0x262ac2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x262cc2-0x262ec2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x262ec2-0x2630c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e6a96-0x3e6c96 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_2626c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_262740(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_26275c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26285d(void);
int64_t function_26285e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2628b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_26291a(int64_t a1);
int64_t function_262933(int64_t a1, int64_t a2, int64_t a3);
int64_t function_26296a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_26296e(void);
int64_t function_262a6e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_262aa8(int64_t a1);
int64_t function_262cc2(void);
int64_t function_262d07(void);
int64_t function_262d34(void);
int64_t function_262d5c(int64_t a1);
int64_t function_262d75(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_262d80(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_262ddc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_262de7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_262e43(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_262efe(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_262f8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_26300c(int64_t a1, int64_t a2);
int64_t function_263010(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_263092(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2630b5(void);
int64_t function_3e6a90();
int64_t function_3e6a96(int64_t a1, int64_t a2);
int64_t function_3e6ab3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e6b0d(int64_t a1);
int64_t function_3e6b24(void);
int64_t function_3e6b2d(int64_t a1);
int64_t function_3e6b37(void);
int64_t function_3e6b38(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e6b61(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e6b64(void);
int64_t function_3e6b77(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3e6c68(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3e6c70(int64_t a1);
int64_t function_b096330();
int64_t function_cc59c();
int64_t function_f6d9c(void);
int64_t function_f6e10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_f6faa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f70d3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f71fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_ffffffffabdc1d73();
int64_t unknown_10f2ab20();
int64_t unknown_1e3518be();
int64_t unknown_20e36c8();
int64_t unknown_22ecd773();
int64_t unknown_31275126();
int64_t unknown_3c1b364();
int64_t unknown_47276e1b();
int64_t unknown_578d30eb();
int64_t unknown_60c41362();
int64_t unknown_736d9f7();
int64_t unknown_ffffffff8829b8a0();
int64_t unknown_ffffffffaf281139();
int64_t unknown_ffffffffb73373e1();
int64_t unknown_ffffffffb81e3dc8();
int64_t unknown_ffffffffbaf12b68();
int64_t unknown_ffffffffc851eeb8();
int64_t unknown_fffffffffe372ba6();

// Address range: 0xf6d9c - 0xf6d9d
int64_t function_f6d9c(void) {
    // 0xf6d9c
    int64_t result; // 0xf6d9c
    return result;
}

// Address range: 0xf6e10 - 0xf6faa
int64_t function_f6e10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xf6e10
    int64_t v1; // 0xf6e10
    int64_t v2 = v1;
    int64_t v3 = a4 - 1; // 0xf6e16
    bool v4; // 0xf6e10
    if (v3 != 0 == v4) {
        // 0xf6e94
        *(char *)v2 = 2 * (char)v2;
        char * v5 = (char *)(a4 + 71); // 0xf6e96
        *v5 = *v5 + (char)v1;
        return function_cc59c();
    }
    int32_t * v6 = (int32_t *)(a2 - 0x5fec91fc); // 0xf6e1b
    *v6 = *v6 + (int32_t)v1;
    char * v7 = (char *)(a1 - 24); // 0xf6e21
    *v7 = *v7 + (char)v1;
    int32_t * v8 = (int32_t *)(v1 + 126); // 0xf6e24
    *v8 = *v8 + (int32_t)v3;
    int64_t result = 2 * v2 & 254 | v2 & -256; // 0xf6e29
    char * v9 = (char *)result; // 0xf6e2b
    *v9 = *v9 + 72;
    return result;
}

// Address range: 0xf6faa - 0xf70d3
int64_t function_f6faa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf6faa
    int64_t v1; // bp-40, 0xf6faa
    int64_t v2 = (int64_t)&v1; // 0xf701b
    int64_t v3 = *(int64_t *)(v2 + 32); // 0xf703b
    int64_t * v4 = (int64_t *)(v2 - 8); // 0xf703b
    *v4 = v3;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0xf703f
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0xf7042
    *v6 = v3;
    int64_t v7 = v2 + 16; // 0xf704e
    int64_t v8 = *(int64_t *)v7; // 0xf704e
    *v5 = v8;
    *v4 = 0x2ef8520a;
    *v6 = v3;
    *(int64_t *)(v2 + 8) = *v4;
    *v6 = v8;
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = v1;
    *v5 = v1;
    v1 = v7;
    return function_cc59c();
}

// Address range: 0xf70d3 - 0xf71fa
int64_t function_f70d3(int64_t a1, int64_t a2, int64_t a3) {
    // 0xf70d3
    return function_cc59c();
}

// Address range: 0xf71fa - 0xf735a
int64_t function_f71fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xf71fa
    int64_t v1; // bp-48, 0xf71fa
    int64_t v2 = (int64_t)&v1; // 0xf72bc
    int64_t v3 = v2 + 16; // 0xf72c3
    v1 = v3;
    int64_t v4 = v2 + 32; // 0xf72d2
    int64_t * v5 = (int64_t *)v4; // 0xf72d2
    int64_t v6 = *v5; // 0xf72d2
    int64_t * v7 = (int64_t *)(v2 + 8); // 0xf72d2
    v1 = v6;
    *v7 = 0x45ef337a;
    *(int64_t *)(v2 - 8) = a7;
    int64_t * v8 = (int64_t *)(v2 + 24); // 0xf72f5
    *v8 = *v7;
    v1 = v2;
    *v7 = v6;
    int64_t * v9 = (int64_t *)v3; // 0xf7319
    *(int64_t *)(v2 + 48) = *v9;
    int64_t v10 = *v8; // 0xf731d
    *v9 = v10;
    *v7 = v10;
    *v8 = *v5;
    *v9 = v4;
    return function_cc59c();
}

// Address range: 0x2626c2 - 0x26273e
int64_t function_2626c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2626c2
    int64_t v1; // 0x2626c2
    uint64_t v2 = v1;
    uint64_t v3 = v2 % 256; // 0x2626d0
    int64_t v4 = unknown_20e36c8() & -256 | v3; // 0x2626d0
    bool v5; // 0x2626c2
    int64_t v6 = (v5 ? -1 : 1) + a2; // 0x2626d0
    *(char *)a1 = (char)v2;
    int64_t result = v4 + 256 * a5 & 0xff00 | v4 & -0xff01; // 0x2626e5
    int32_t * v7 = (int32_t *)(v6 + 0x2fe5948e); // 0x2626e9
    int32_t v8 = *v7; // 0x2626e9
    int32_t v9 = v6; // 0x2626e9
    int32_t v10 = v8 + v9; // 0x2626e9
    *v7 = v10;
    if (((v10 ^ v8) & (v10 ^ v9)) < 0) {
        // 0x262714
        return result;
    }
    int64_t result2 = result & -256 | (int64_t)*(char *)(v3 + a5); // 0x2626fa
    int64_t v11 = 0x1036000; // bp-8, 0x2626fb
    int32_t * v12 = (int32_t *)(v6 - 89); // 0x262700
    uint32_t v13 = *v12; // 0x262700
    uint32_t v14 = v13 + (int32_t)(int64_t)&v11; // 0x262700
    *v12 = v14;
    char * v15 = (char *)result2; // 0x262703
    *v15 = *v15 + (char)a4 + (char)(v14 < v13);
    if (*(int32_t *)0x9ad511 != 6) {
        // 0x262714
        return result2;
    }
    // 0x262727
    abort();
    // UNREACHABLE
}

// Address range: 0x262740 - 0x262757
int64_t function_262740(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a4 - 1; // 0x262740
    int64_t result; // 0x262740
    if (v1 != 0) {
        result = function_26275c(a1, a2, a3, v1);
    }
    // 0x262742
    *(char *)(a2 + 0x13d39fce) = (char)(a3 / 256);
    int64_t v2 = result;
    *(char *)v2 = *(char *)&result + (char)v2;
    return result;
}

// Address range: 0x26275c - 0x26283b
int64_t function_26275c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x26275c
    int64_t v1; // 0x26275c
    int64_t v2 = v1;
    unknown_60c41362();
    int32_t v3 = *(int32_t *)-0x17fe17ce1517fc28; // 0x262761
    *(int32_t *)-0x67627f8f = *(int32_t *)-0x67627f8f + (int32_t)a1;
    int32_t * v4 = (int32_t *)(v2 - 16 + 2 * v2); // 0x262772
    *v4 = *v4 & -117;
    int32_t * v5 = (int32_t *)(a3 + 61); // 0x262779
    int32_t v6 = *v5 + v3; // 0x262779
    *v5 = v6;
    if (v6 != 0) {
        char * v7 = (char *)(v1 + a3); // 0x262780
        *v7 = *v7 - 24;
        int32_t * v8 = (int32_t *)(v1 - 84); // 0x262784
        *v8 = *v8 + (int32_t)v1;
        return (int64_t)(v3 & -0xff01) | (int64_t)&g4;
    }
    int64_t v9 = v2 & -256 | 232; // 0x262777
    int64_t v10 = unknown_736d9f7() & -256 | (int64_t)*(char *)0x2b7877bd01e80a00; // 0x2627f6
    int64_t v11 = v10 & 0xffffffff | 0x100000000 * a3; // 0x262800
    int64_t v12 = (int64_t)*(int32_t *)(v10 + 0x1e848bf); // 0x262800
    int64_t v13 = v11 % v12; // 0x262800
    int32_t v14 = *(int32_t *)(8 * a1 - 12 + v9); // 0x262808
    int64_t v15 = (int64_t)__asm_in(-40) & 0xe84b36be;
    uint64_t v16 = v15 | v11 / v12 & 0xe84b3600; // 0x26280e
    int32_t * v17 = (int32_t *)v9; // 0x262813
    int32_t v18 = v1;
    *v17 = v18 + 8 + *v17;
    *(int64_t *)v1 = a2;
    char * v19 = (char *)(v16 + 0x65bc600); // 0x262816
    *v19 = *v19 + (char)v15;
    char * v20 = (char *)((v13 & 0xffffffff) + 1); // 0x26281d
    char v21 = *v20 + (char)(v16 / 256); // 0x26281d
    *v20 = v21;
    uint64_t v22 = unknown_31275126(); // 0x262820
    if (v21 < 0) {
        int64_t v23 = unknown_ffffffffb73373e1(); // 0x2627db
        return (int64_t)(*(int32_t *)(v23 + 0x1e84005) + (int32_t)v23);
    }
    int16_t v24 = *(int16_t *)(a2 + 79); // 0x262829
    float80_t v25; // 0x26275c
    *(float32_t *)((int64_t)(v14 + ((int32_t)a4 & -0xff01 | (int32_t)&g2)) - 0x17ceaf00) = (float32_t)((float80_t)v24 - v25);
    int32_t * v26 = (int32_t *)(v9 + 0x706a00ab + (v22 / 256 % 256 | v13 & 0xffffff00)); // 0x262832
    *v26 = *v26 + v18;
    return v22 & -0xff01 | 256 * v13 & 0xff00;
}

// Address range: 0x26285d - 0x26285e
int64_t function_26285d(void) {
    // 0x26285d
    int64_t result; // 0x26285d
    return result;
}

// Address range: 0x26285e - 0x2628af
int64_t function_26285e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x26285e
    unknown_3c1b364();
    __asm_iretd(a1, a2, a3);
    int64_t result2 = unknown_22ecd773(); // 0x26286d
    *(char *)-0x1720b5feb805e328 = (char)result2;
    int64_t v1; // 0x26285e
    uint32_t v2 = (int32_t)v1; // 0x26287d
    uint32_t v3 = v2 + (int32_t)a3; // 0x26287d
    if (v3 >= v2) {
        int64_t result = unknown_ffffffff8829b8a0(); // 0x26289a
        *(int32_t *)a1 = (int32_t)a2;
        return result;
    }
    char * v4 = (char *)((int64_t)v3 - 74); // 0x262882
    *v4 = *v4 | (char)a3;
    return result2;
}

// Address range: 0x2628b0 - 0x2628c9
int64_t function_2628b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2628b0
    int64_t v1; // 0x2628b0
    char * v2 = (char *)(v1 - 0x21936e82 + v1); // 0x2628b0
    *v2 = *v2 | (char)v1;
    int64_t result = unknown_1e3518be(); // 0x2628b8
    char * v3 = (char *)(a1 + 40); // 0x2628c3
    *v3 = *v3 | (char)(v1 / 256);
    return result;
}

// Address range: 0x26291a - 0x262921
int64_t function_26291a(int64_t a1) {
    // 0x26291a
    return unknown_10f2ab20(a1);
}

// Address range: 0x262933 - 0x262941
int64_t function_262933(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_ffffffffaf281139(a1, a2, a3); // 0x262933
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return result;
}

// Address range: 0x26296a - 0x26296d
int64_t function_26296a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x26296a
    int64_t result; // 0x26296a
    *(int32_t *)result = (int32_t)a4;
    return result;
}

// Address range: 0x26296e - 0x262971
int64_t function_26296e(void) {
    // 0x26296e
    int64_t result; // 0x26296e
    return result;
}

// Address range: 0x262a6e - 0x262a7a
int64_t function_262a6e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x262a6e
    int64_t v1; // 0x262a6e
    char * v2 = (char *)(a4 + 0x1e84f0b + 2 * v1); // 0x262a6e
    *v2 = *v2 + (char)(a4 / 256);
    return function_ffffffffabdc1d73();
}

// Address range: 0x262aa8 - 0x262aaa
int64_t function_262aa8(int64_t a1) {
    // 0x262aa8
    int64_t result; // 0x262aa8
    return result;
}

// Address range: 0x262cc2 - 0x262cc7
int64_t function_262cc2(void) {
    // 0x262cc2
    return unknown_ffffffffb81e3dc8();
}

// Address range: 0x262d07 - 0x262d08
int64_t function_262d07(void) {
    // 0x262d07
    int64_t result; // 0x262d07
    return result;
}

// Address range: 0x262d34 - 0x262d35
int64_t function_262d34(void) {
    // 0x262d34
    int64_t result; // 0x262d34
    return result;
}

// Address range: 0x262d5c - 0x262d60
int64_t function_262d5c(int64_t a1) {
    // 0x262d5c
    int64_t result; // 0x262d5c
    return result;
}

// Address range: 0x262d75 - 0x262d7a
int64_t function_262d75(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 20); // 0x262d75
    int64_t v2; // 0x262d75
    bool v3; // 0x262d75
    *v1 = *v1 + (char)((uint64_t)v2 / 256) + (char)v3;
    return function_262d07();
}

// Address range: 0x262d80 - 0x262dad
int64_t function_262d80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 60); // 0x262d88
    int64_t v2; // 0x262d80
    *v1 = *v1 + (int32_t)v2;
    *(char *)-0x39d1fb6e = *(char *)-0x39d1fb6e + (char)(v2 / 256);
    int64_t v3; // 0x262d80
    uint32_t v4 = *(int32_t *)&v3; // 0x262da4
    uint32_t v5 = v4 + (int32_t)a4; // 0x262da4
    *(int32_t *)(a4 & 0xffffffff) = v5;
    if (v5 >= v4) {
        function_262d34();
    }
    // 0x262daa
    __asm_hlt();
    return function_262de7(a1, a2, a3 & -0xff01 | (int64_t)&g3);
}

// Address range: 0x262ddc - 0x262de7
int64_t function_262ddc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x262ddc
    int64_t result; // 0x262ddc
    char * v1 = (char *)(2 * result + a5); // 0x262ddc
    *v1 = 2 * *v1;
    char * v2 = (char *)(a1 + 0x3d6c2211 + 4 * result); // 0x262de0
    *v2 = *v2 | (char)a4;
    return result;
}

// Address range: 0x262de7 - 0x262dec
int64_t function_262de7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x262de7
    int64_t result; // 0x262de7
    int32_t * v1 = (int32_t *)(result + 112); // 0x262de7
    *v1 = *v1 + (int32_t)result;
    int64_t v2; // 0x262de7
    *(char *)a3 = *(char *)&v2 + (char)result;
    return result;
}

// Address range: 0x262e43 - 0x262ec7
int64_t function_262e43(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x262e43
    int64_t v1; // 0x262e43
    int64_t result = v1 & -256 | (int64_t)__asm_in_133((int16_t)a3); // 0x262e4b
    if ((int32_t)v1 >= 0xa0e1e002) {
        // 0x262e4e
        __asm_int(56);
        return result;
    }
    // 0x262ea2
    if (llvm_ctpop_i8((char)v1 - 1) % 2 == 0) {
        char * v2 = (char *)(v1 + 0x13d00ea); // 0x262e6d
        *v2 = *v2 >> 1;
        return result;
    }
    uint32_t v3 = (int32_t)a2;
    uint32_t v4 = (int32_t)a3; // 0x262eab
    int32_t v5 = v4 + v3; // 0x262eab
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x262eab
    *(int32_t *)a2 = v5;
    return 256 * (64 * (int64_t)(v5 == 0) | (int64_t)(v5 < v3) | 128 * (int64_t)(v5 < 0) | 16 * (int64_t)(v4 % 16 + v3 % 16 > 15) | 4 * (int64_t)(v6 % 2 == 0)) | unknown_ffffffffc851eeb8() & -0xff01 | 512;
}

// Address range: 0x262efe - 0x262f7a
int64_t function_262efe(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = unknown_578d30eb(); // 0x262efe
    int64_t v2; // 0x262efe
    uint32_t v3 = *(int32_t *)(v1 - 0x1773a0bf) | (int32_t)v2; // 0x262f05
    int32_t * v4 = (int32_t *)((int64_t)v3 + 75); // 0x262f0b
    *v4 = *v4 + v3;
    uint64_t v5 = a4 / 256; // 0x262f0e
    int64_t v6 = v5 % 256 | a3; // 0x262f0e
    int64_t v7 = (v1 & 0xffffff00 | (int64_t)*(char *)0x538b352b01e8fc00) + 0xee01e8e3; // 0x262f1c
    *(int32_t *)-0x5fe17c8e855ae54 = (int32_t)v7;
    int32_t * v8 = (int32_t *)(v7 & 0xffffffff); // 0x262f2c
    *v8 = *v8 | (int32_t)v6;
    int64_t v9 = (256 * v7 | v7) & 0xff00 | v7 & 0xffff00ff; // 0x262f2e
    int64_t v10; // 0x262efe
    v10 = (int64_t)((int32_t)a1 - *(int32_t *)&v10);
    __asm_int(90);
    char * v11 = (char *)(v9 + 0x729b600); // 0x262f3a
    *v11 = *v11 + (char)v7;
    uint64_t v12 = v7 + v5; // 0x262f41
    int32_t * v13 = (int32_t *)(v6 + 1); // 0x262f43
    uint32_t v14 = *v13; // 0x262f43
    uint32_t v15 = v14 + (int32_t)v2; // 0x262f43
    *v13 = v15;
    char v16 = *(char *)(v9 & 0xffffff00 | v12 % 256); // 0x262f46
    char * v17 = (char *)v6; // 0x262f48
    *v17 = v16 + (char)v12 + (char)(v15 < v14) + *v17;
    uint64_t v18 = unknown_ffffffffbaf12b68(); // 0x262f62
    int64_t v19; // 0x262efe
    *(char *)v19 = *(char *)&v19 - (char)(a3 / 256);
    unsigned char v20 = ((char)a4 - (char)v2) % 32;
    int64_t v21; // 0x262efe
    if (v20 == 0) {
        // 0x262efe
        v21 = v10;
    } else {
        int64_t v22 = (int32_t)v10 << (int32_t)v20; // 0x262f69
        v10 = v22;
        v21 = v22;
    }
    char * v23 = (char *)v21; // 0x262f6d
    *v23 = *v23 + (char)(v18 / 256);
    int32_t * v24 = (int32_t *)(v19 + 36); // 0x262f74
    *v24 = *v24 + (int32_t)v19;
    return v6 & 0xffffffff;
}

// Address range: 0x262f8f - 0x26300a
int64_t function_262f8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char * v1 = (char *)(a2 - 0x4c47fe18); // 0x262f8f
    *v1 = -1 - *v1;
    int64_t result; // 0x262f8f
    bool v2; // 0x262f8f
    if (v2 || v2) {
        // 0x26300b
        return result;
    }
    int32_t * v3 = (int32_t *)(a6 - 0x76f14b7b); // 0x262f99
    *v3 = *v3 + (int32_t)result;
    int64_t result2 = unknown_fffffffffe372ba6(); // 0x262fa0
    *(char *)a1 = __asm_insb((int16_t)a3);
    return result2;
}

// Address range: 0x26300c - 0x26300e
int64_t function_26300c(int64_t a1, int64_t a2) {
    // 0x26300c
    int64_t result; // 0x26300c
    bool v1; // 0x26300c
    *(char *)((v1 ? -1 : 1) + a1) = (char)result;
    return result;
}

// Address range: 0x263010 - 0x263090
int64_t function_263010(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 + 0x37c71fd2); // 0x263010
    bool v2; // 0x263010
    *v1 = *v1 + (char)(a3 / 256) + (char)v2;
    if ((a4 + a1 & 0xffffffff) == 1) {
        // 0x26301e
        return function_b096330();
    }
    // 0x26307e
    int64_t v3; // 0x263010
    *(char *)-0x6b9d5a74 = *(char *)-0x6b9d5a74 + (char)(v3 / 256);
    int64_t result = (v3 & (v3 | 0xffffff00)) + 0x1ed418d7 & 0xffffffa1 | 94; // 0x26308b
    int32_t * v4 = (int32_t *)result; // 0x26308d
    *v4 = *v4 - (int32_t)v3;
    return result;
}

// Address range: 0x263092 - 0x2630b5
int64_t function_263092(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x263092
    bool v1; // 0x263092
    if (!v1) {
        // 0x2630bf
        return a2 & 0xffffffff;
    }
    if (a4 == 0) {
        // 0x2630a5
        return a2 + 0x9f78f021 & 0xffffffff;
    }
    int64_t result = unknown_47276e1b(); // 0x26309c
    int32_t * v2 = (int32_t *)(a3 - 59); // 0x2630a1
    *v2 = *v2 + (int32_t)a1;
    return result;
}

// Address range: 0x2630b5 - 0x2630b8
int64_t function_2630b5(void) {
    // 0x2630b5
    int64_t result; // 0x2630b5
    return result;
}

// Address range: 0x3e6a96 - 0x3e6a9f
int64_t function_3e6a96(int64_t a1, int64_t a2) {
    unsigned char v1 = *(char *)0x6394e7e0; // 0x3e6a96
    int64_t v2; // 0x3e6a96
    unsigned char v3 = v1 + (char)v2; // 0x3e6a96
    bool v4; // 0x3e6a96
    unsigned char v5 = v3 + (char)v4; // 0x3e6a96
    *(char *)0x6394e7e0 = v5;
    int64_t result = a2 & 0xffffffff; // 0x3e6a9d
    if (!((v4 ? v5 <= v1 : v3 < v1))) {
        result = function_3e6a90();
    }
    // 0x3e6a9f
    return result;
}

// Address range: 0x3e6ab3 - 0x3e6ab6
int64_t function_3e6ab3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e6ab3
    int64_t result; // 0x3e6ab3
    *(int32_t *)a3 = (int32_t)(result | result);
    return result;
}

// Address range: 0x3e6b0d - 0x3e6b10
int64_t function_3e6b0d(int64_t a1) {
    // 0x3e6b0d
    int64_t result; // 0x3e6b0d
    return result;
}

// Address range: 0x3e6b24 - 0x3e6b2a
int64_t function_3e6b24(void) {
    // 0x3e6b24
    int64_t result; // 0x3e6b24
    char * v1 = (char *)(result - 69); // 0x3e6b24
    *v1 = *v1 ^ (char)(result / 256);
    return result;
}

// Address range: 0x3e6b2d - 0x3e6b36
int64_t function_3e6b2d(int64_t a1) {
    // 0x3e6b2d
    int64_t v1; // 0x3e6b2d
    return function_3e6b61(a1, v1, v1);
}

// Address range: 0x3e6b37 - 0x3e6b38
int64_t function_3e6b37(void) {
    // 0x3e6b37
    int64_t result; // 0x3e6b37
    return result;
}

// Address range: 0x3e6b38 - 0x3e6b5c
int64_t function_3e6b38(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e6b38
    int64_t v1; // 0x3e6b38
    int64_t v2 = (int64_t)*(int32_t *)(v1 - 0x48a07f16); // 0x3e6b3f
    uint64_t v3 = -0x35dbb559 * v2; // 0x3e6b3f
    unsigned char v4 = (char)a4; // 0x3e6b49
    unsigned char v5 = *(char *)(a2 - 0x476cff9b) + v4; // 0x3e6b49
    bool v6 = v3 != -0x35dbb55900000000 * v2 >> 32 ? v5 + (char)(v3 != -0x35dbb55900000000 * v2 >> 32) <= v4 : v5 < v4; // 0x3e6b49
    char v7 = *(char *)((v3 & 0xffffffff) + 0x661ec2ea); // 0x3e6b4f
    __asm_in_134((int16_t)(256 * (int64_t)(v7 + (char)(v3 / 256) + (char)v6) | v3 % 256));
    return __asm_in_135(111);
}

// Address range: 0x3e6b61 - 0x3e6b64
int64_t function_3e6b61(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e6b61
    int64_t result; // 0x3e6b61
    return result;
}

// Address range: 0x3e6b64 - 0x3e6b65
int64_t function_3e6b64(void) {
    // 0x3e6b64
    int64_t result; // 0x3e6b64
    return result;
}

// Address range: 0x3e6b77 - 0x3e6c67
int64_t function_3e6b77(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint32_t v1 = (int32_t)a2; // 0x3e6b77
    uint32_t v2 = (int32_t)a3 + v1; // 0x3e6b77
    char * v3 = (char *)((int64_t)v2 + 98); // 0x3e6b79
    int64_t v4; // 0x3e6b77
    char v5 = (char)(v4 / 256) + (char)(v2 < v1) + *v3; // 0x3e6b79
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x3e6b79
    *v3 = v5;
    if (v6 % 2 != 0) {
        function_3e6b37();
    }
    // 0x3e6bf9
    bool v7; // 0x3e6b77
    int64_t v8 = __asm_sti((v7 ? -4 : 4) + a1); // 0x3e6bfa
    uint32_t v9 = (int32_t)v8 - 0x884325a + *(int32_t *)(a3 + 0x2623eca4); // 0x3e6c09
    int32_t v10 = __readfsdword(v4 + 17); // 0x3e6c18
    uint32_t v11 = (int32_t)v4;
    int32_t v12 = v9 - v11; // 0x3e6c1d
    unsigned char v13 = llvm_ctpop_i8((char)v12); // 0x3e6c1d
    int64_t * v14 = (int64_t *)((int64_t)(97 * v10) - 8); // 0x3e6c1e
    *v14 = 0x4000 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | (int64_t)(v9 < v11) | 64 * (int64_t)(v12 == 0) | 128 * (int64_t)(v12 < 0) | 16 * (int64_t)(v9 % 16 - v11 % 16 > 15) | 2048 * (int64_t)(((v12 ^ v9) & (v9 ^ v11)) < 0) | 4 * (int64_t)(v13 % 2 == 0) | 2;
    int64_t result = __asm_in_134((int16_t)a3); // 0x3e6c22
    char v15 = *(char *)(result - 0x7bf4148); // 0x3e6c23
    unsigned char v16 = (char)a3 - v15 + (char)(((char)v9 ^ -4) < 108); // 0x3e6c23
    int64_t v17 = a4 - 1; // 0x3e6c2b
    if (v17 == 0 || v16 == 0) {
        // 0x3e6c2e
        return result;
    }
    if (v17 == 1 || (result & 0x4000) != 0) {
        // 0x3e6c2e
        return result;
    }
    // 0x3e6bf7
    *v14 = a3 & -256 | (int64_t)v16;
    return result;
}

// Address range: 0x3e6c68 - 0x3e6c70
int64_t function_3e6c68(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3e6c68
    int64_t v1; // 0x3e6c68
    uint64_t v2 = v1 & a3 / 256;
    int64_t result = v2 % 256 | v1 & -256; // 0x3e6c68
    char * v3 = (char *)result; // 0x3e6c6a
    *v3 = *v3 - (char)v2;
    return result;
}

// Address range: 0x3e6c70 - 0x3e6c75
int64_t function_3e6c70(int64_t a1) {
    // 0x3e6c70
    int64_t result; // 0x3e6c70
    return result;
}
