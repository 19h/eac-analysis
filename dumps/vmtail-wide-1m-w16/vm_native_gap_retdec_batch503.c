/*
 * Targeted RetDec C for native executable gap queue batch 503.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xd7dc7-0xd7fc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd7fc7-0xd81c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd81c7-0xd83c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd83c7-0xd85c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x43f867-0x43fa67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x43fa67-0x43fc67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x43fc67-0x43fe67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x43fe67-0x440067 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_35784696();
int64_t function_43f830();
int64_t function_43f867(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_43f88e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_43f8d1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_43f8f6(void);
int64_t function_43f922(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_43f92b(int64_t a1);
int64_t function_43f9e0(void);
int64_t function_43fa22(void);
int64_t function_43fa3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43fa66(void);
int64_t function_43fa6c(int64_t a1);
int64_t function_43faad(void);
int64_t function_43fad3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43fafa(int64_t a1, int64_t a2, int64_t a3);
int64_t function_43fb13(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_43fb66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_43fb90(void);
int64_t function_43fbd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43fc09(void);
int64_t function_43fc16(int64_t a1);
int64_t function_43fc2a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43fd16(void);
int64_t function_43fd1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43fd70(int64_t a1, int64_t a2, int64_t a3);
int64_t function_43fdad(void);
int64_t function_43fe45(void);
int64_t function_43fe77(void);
int64_t function_43fe79(void);
int64_t function_43fe8f(int64_t a1);
int64_t function_43feaf(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_43ff6e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_43ffc6(int64_t a1);
int64_t function_43fff0(void);
int64_t function_44004c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6fa3ebc6();
int64_t function_d7dc7(void);
int64_t function_d7dd6(void);
int64_t function_d7df2(int64_t a1);
int64_t function_d7e3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d7e61(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d7e94(void);
int64_t function_d7e9f(void);
int64_t function_d7eb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_d7f09(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d7f1d(void);
int64_t function_d7f29(void);
int64_t function_d7f5a(void);
int64_t function_d80de(void);
int64_t function_d8119(void);
int64_t function_d813d(void);
int64_t function_d817d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_d81f8(void);
int64_t function_d8243(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d828a(int64_t result);
int64_t function_d82a5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_d8358(int64_t a1);
int64_t function_d83a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d83ed(int64_t a1, int64_t a2);
int64_t function_d83ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d8425(int64_t a1);
int64_t function_d8488(int64_t a1);
int64_t function_d84d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_d8508(void);
int64_t function_d853f(void);
int64_t function_d854c(void);
int64_t function_d854d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ffffffff81424eae();
int64_t function_ffffffff841b0202();
int64_t function_ffffffff9094e049();
int64_t function_ffffffff9c507aaa();
int64_t function_ffffffffac69d310();
int64_t function_ffffffffb01aac3b();
int64_t unknown_38a4b8e0();
int64_t unknown_3a749a5a();
int64_t unknown_5798605();
int64_t unknown_60e69a1b();
int64_t unknown_680e5949();
int64_t unknown_ffffffff9786aa94();
int64_t unknown_ffffffffa8c28f0e();
int64_t unknown_ffffffffc1fa2faf();
int64_t unknown_ffffffffcba0a5eb();
int64_t unknown_ffffffffdf913dcf();
int64_t unknown_ffffffffef1172ae();

// Address range: 0xd7dc7 - 0xd7dce
int64_t function_d7dc7(void) {
    // 0xd7dc7
    return unknown_ffffffffdf913dcf();
}

// Address range: 0xd7dd6 - 0xd7de4
int64_t function_d7dd6(void) {
    char v1 = *(char *)0x793f79dd; // 0xd7dd6
    int64_t v2; // 0xd7dd6
    *(char *)0x793f79dd = v1 + (char)((uint64_t)v2 / 256);
    return v2 + 0x89944602 & 0xffffffff;
}

// Address range: 0xd7df2 - 0xd7df5
int64_t function_d7df2(int64_t a1) {
    // 0xd7df2
    int64_t result; // 0xd7df2
    return result;
}

// Address range: 0xd7e3d - 0xd7e48
int64_t function_d7e3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd7e3d
    int64_t v1; // 0xd7e3d
    return (v1 & 0xffffff00 | (int64_t)__asm_in(58)) + 0xe3c81fcc & 0xffffffff;
}

// Address range: 0xd7e61 - 0xd7e78
int64_t function_d7e61(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd7e61
    int64_t result; // 0xd7e61
    *(int32_t *)result = 0x3267013d;
    __asm_out((int16_t)a3 % 256 | (int16_t)&g3, (int32_t)result);
    char * v1 = (char *)(a1 + 60); // 0xd7e73
    *v1 = *v1 % 8;
    return result;
}

// Address range: 0xd7e94 - 0xd7e9e
int64_t function_d7e94(void) {
    // 0xd7e94
    int64_t result; // 0xd7e94
    return result;
}

// Address range: 0xd7e9f - 0xd7ea1
int64_t function_d7e9f(void) {
    // 0xd7e9f
    int64_t v1; // 0xd7e9f
    return function_d7f09(v1, v1, v1);
}

// Address range: 0xd7eb6 - 0xd7ec5
int64_t function_d7eb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xd7eb6
    int64_t result; // 0xd7eb6
    char * v1 = (char *)(a5 - 0xf2c434a + 8 * result); // 0xd7eb6
    *v1 = *v1 | (char)a2;
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0xd7f09 - 0xd7f0f
int64_t function_d7f09(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = *(int32_t *)0x3acd5610; // 0xd7f09
    int64_t v2; // 0xd7f09
    return (v2 & 0xffffffff | 0x100000000 * a3) / (int64_t)v1 & 0xffffffff;
}

// Address range: 0xd7f1d - 0xd7f29
int64_t function_d7f1d(void) {
    // 0xd7f1d
    int64_t v1; // 0xd7f1d
    return (int64_t)&v1;
}

// Address range: 0xd7f29 - 0xd7f2a
int64_t function_d7f29(void) {
    // 0xd7f29
    int64_t result; // 0xd7f29
    return result;
}

// Address range: 0xd7f5a - 0xd7f5d
int64_t function_d7f5a(void) {
    // 0xd7f5a
    int64_t result; // 0xd7f5a
    return result;
}

// Address range: 0xd80de - 0xd80df
int64_t function_d80de(void) {
    // 0xd80de
    int64_t result; // 0xd80de
    return result;
}

// Address range: 0xd8119 - 0xd811a
int64_t function_d8119(void) {
    // 0xd8119
    int64_t result; // 0xd8119
    return result;
}

// Address range: 0xd813d - 0xd8142
int64_t function_d813d(void) {
    // 0xd813d
    return function_ffffffffb01aac3b();
}

// Address range: 0xd817d - 0xd81f7
int64_t function_d817d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a4 + 0x60f48ce6); // 0xd817d
    int64_t v2; // 0xd817d
    *v1 = *v1 + (int32_t)v2;
    int64_t v3 = a4 - 1; // 0xd8183
    if (v3 != 0) {
        function_d8119();
    }
    int64_t v4 = __asm_int3(); // 0xd8185
    char v5 = __asm_in(-24); // 0xd8186
    *(int32_t *)-0x6bf09671 = *(int32_t *)-0x6bf09671 + (int32_t)a1;
    *(char *)0x35ea0508817c0fc2 = v5;
    int64_t v6; // 0xd817d
    int32_t v7 = *(int32_t *)&v6; // 0xd8199
    int32_t v8 = v3; // 0xd8199
    int32_t v9 = v7 + v8; // 0xd8199
    *(int32_t *)v6 = v9;
    if (v9 < 0 == ((v9 ^ v7) & (v9 ^ v8)) < 0 != v9 != 0) {
        // 0xd819d
        return v4 & -256 | (int64_t)v5;
    }
    uint64_t v10 = unknown_38a4b8e0(); // 0xd81da
    char * v11 = (char *)(v2 + 0x59768941); // 0xd81df
    *v11 = *v11 + (char)(v10 / 256);
    int64_t v12 = unknown_ffffffffcba0a5eb(); // 0xd81e5
    char * v13 = (char *)v12; // 0xd81ea
    *v13 = *v13 + (char)v3;
    int32_t * v14 = (int32_t *)(v6 - 8); // 0xd81f1
    *v14 = *v14 + (int32_t)v6;
    return v12 + 0xe8d48d08 & 0xffffffff;
}

// Address range: 0xd81f8 - 0xd81fa
int64_t function_d81f8(void) {
    // 0xd81f8
    return __asm_sti();
}

// Address range: 0xd8243 - 0xd825a
int64_t function_d8243(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd8243
    unknown_680e5949();
    return unknown_3a749a5a();
}

// Address range: 0xd828a - 0xd82a5
int64_t function_d828a(int64_t result) {
    // 0xd828a
    int64_t v1; // 0xd828a
    int32_t * v2 = (int32_t *)(v1 + 35); // 0xd828a
    *v2 = *v2 | 1;
    unknown_ffffffff9786aa94();
    *(int32_t *)-0x54fe1757cd7664c9 = (int32_t)result;
    return result;
}

// Address range: 0xd82a5 - 0xd8348
int64_t function_d82a5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a3;
    unknown_ffffffffc1fa2faf();
    int64_t v2 = -0x57fe1727; // bp-8, 0xd82aa
    int64_t result = 0xcc3a83a3; // 0xd82b4
    bool v3; // 0xd82a5
    if (v3) {
        result = function_d8243(a1, a2, a3, a4);
    }
    // 0xd82b6
    if (v3) {
        int32_t * v4 = (int32_t *)(a3 - 0x62400211); // 0xd82ec
        *v4 = *v4 | 56;
        return result;
    }
    int64_t v5; // 0xd82a5
    if (!v3) {
        uint64_t v6 = result / 2 % 128; // 0xd82ba
        int64_t v7 = result & -256; // 0xd82ba
        int32_t * v8 = (int32_t *)(8 * a4 + (int64_t)&v2); // 0xd82bc
        int32_t v9 = v5; // 0xd82bc
        *v8 = *v8 + v9;
        *(char *)a1 = __asm_insb((int16_t)v1);
        int32_t * v10 = (int32_t *)((v6 | v7) + 0x4b74af1a); // 0xd82c3
        *v10 = *v10 | v9;
        *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a2;
        return (v6 + a4 / 256) % 256 | v7;
    }
    // 0xd8308
    unknown_ffffffffa8c28f0e();
    int64_t v11 = __asm_int3(); // 0xd830d
    if (v3) {
        unsigned char v12 = *(char *)(v5 - 120); // 0xd8310
        int32_t v13 = *(int32_t *)(a4 - 0x54fe174e); // 0xd8314
        int64_t v14 = __asm_hlt(); // 0xd831a
        return ((v14 + 88) % 256 | v14 & 0xffffff00) + (int64_t)(v13 + (int32_t)v5 + (int32_t)(v12 > (char)v11)) & 0xffffffff;
    }
    int32_t * v15 = (int32_t *)(2 * v5 + 0x147f3fb); // 0xd833f
    uint32_t v16 = *v15; // 0xd833f
    uint32_t v17 = v16 + (int32_t)v5; // 0xd833f
    *v15 = v17;
    return (v11 - (v17 < v16 ? 115 : 114)) % 256 | v11 & -256;
}

// Address range: 0xd8358 - 0xd8361
int64_t function_d8358(int64_t a1) {
    // 0xd8358
    int64_t result; // 0xd8358
    int32_t * v1 = (int32_t *)(result - 0x55e576d6); // 0xd8358
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0xd83a0 - 0xd83a5
int64_t function_d83a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd83a0
    int64_t result; // 0xd83a0
    return result;
}

// Address range: 0xd83ed - 0xd83f1
int64_t function_d83ed(int64_t a1, int64_t a2) {
    // 0xd83ed
    int64_t result; // 0xd83ed
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0xd83ff - 0xd8422
int64_t function_d83ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd83ff
    unknown_5798605();
    char * v1 = (char *)(a4 + 0x1e80168); // 0xd8404
    *v1 = *v1 - 1;
    unknown_60e69a1b();
    int32_t result = __asm_in_134(-59); // 0xd841a
    int32_t * v2 = (int32_t *)(a2 - 53); // 0xd841c
    *v2 = *v2 ^ (int32_t)a1;
    return result;
}

// Address range: 0xd8425 - 0xd8428
int64_t function_d8425(int64_t a1) {
    // 0xd8425
    int64_t result; // 0xd8425
    return result;
}

// Address range: 0xd8488 - 0xd8489
int64_t function_d8488(int64_t a1) {
    // 0xd8488
    int64_t result; // 0xd8488
    return result;
}

// Address range: 0xd84d0 - 0xd84ea
int64_t function_d84d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 0x47b4c3f4); // 0xd84d2
    int64_t v2; // 0xd84d0
    *v1 = *v1 + (int32_t)v2;
    int32_t * v3 = (int32_t *)(a1 - 128); // 0xd84d8
    *v3 = *v3 + (int32_t)a4;
    *(char *)(2 * a1 + 0x3a2c01e8) = (char)a3;
    int64_t v4; // 0xd84d0
    return (int64_t)*(int32_t *)&v4;
}

// Address range: 0xd8508 - 0xd8509
int64_t function_d8508(void) {
    // 0xd8508
    int64_t result; // 0xd8508
    return result;
}

// Address range: 0xd853f - 0xd8540
int64_t function_d853f(void) {
    // 0xd853f
    int64_t result; // 0xd853f
    return result;
}

// Address range: 0xd854c - 0xd854d
int64_t function_d854c(void) {
    // 0xd854c
    int64_t result; // 0xd854c
    return result;
}

// Address range: 0xd854d - 0xd85c6
int64_t function_d854d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xd854d
    int64_t v1; // 0xd854d
    *(char *)a2 = (char)(v1 & v1);
    int32_t * v2 = (int32_t *)(a5 - 0x4d0f3c20); // 0xd8551
    *v2 = *v2 + 0x17e11631;
    char * v3 = (char *)(a3 - 123); // 0xd8563
    *v3 = *v3 + (char)a3;
    int64_t v4 = v1 + a5 & 0xffff00ff | (int64_t)&g2; // 0xd8566
    int64_t v5; // 0xd854d
    uint32_t v6 = (int32_t)(int64_t)&v5; // 0xd856a
    uint32_t v7 = v6 + (int32_t)a5; // 0xd856a
    int64_t result; // 0xd854d
    if (v7 >= v6 && v7 != 0) {
        // 0xd85a8
        unknown_ffffffffef1172ae();
        float80_t v8; // 0xd854d
        *(int16_t *)(a3 + 0x658e018) = (int16_t)v8;
        int64_t v9 = __asm_wait(); // 0xd85bd
        unsigned char v10 = (char)v9 - 66; // 0xd85be
        result = v9 & -256 | (int64_t)v10;
        if ((256 * v4 & 0xff00 || a4) != 1 == v10 == 0) {
            result = function_d854c();
        }
        // 0xd8575
        return result;
    }
    int32_t v11 = *(int32_t *)v4 & (int32_t)v4; // 0xd856e
    int64_t v12 = 0; // 0xd8570
    if (v11 != 0) {
        v12 = function_d853f();
    }
    // 0xd8573
    result = v12;
    if (v11 < 0) {
        result = function_d8508();
    }
    // 0xd8575
    return result;
}

// Address range: 0x43f867 - 0x43f88c
int64_t function_43f867(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = *(int32_t *)(a5 + 60); // 0x43f868
    int32_t * v2 = (int32_t *)a5; // 0x43f86c
    *v2 = *v2 | (int32_t)a3;
    char * v3 = (char *)(a5 - 124); // 0x43f86e
    *v3 = *v3 - 1;
    int64_t v4; // 0x43f867
    unsigned char v5 = (char)v4; // 0x43f871
    bool v6; // 0x43f867
    *(char *)(int64_t)((int32_t)v6 + (int32_t)a1 - v1) = v5;
    char * v7 = (char *)(2 * a5 + a4); // 0x43f872
    *v7 = *v7 + (char)((uint64_t)v4 / 256);
    uint32_t v8 = *v2 + (v5 < 121 ? 0x695a9482 : 0x695a9481); // 0x43f87f
    int64_t v9 = v8; // 0x43f884
    if (v8 == 0) {
        v9 = function_43f830();
    }
    // 0x43f886
    return v9 + 0xa78880fc & 0xffffffff;
}

// Address range: 0x43f88e - 0x43f8b8
int64_t function_43f88e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x43f88e
    int64_t v1; // 0x43f88e
    uint64_t v2 = v1;
    int64_t result = v1;
    bool v3; // 0x43f88e
    if (v3 || false) {
        // 0x43f8ad
        __asm_outsd((int16_t)a3 & -256 | 177, (int32_t)a2);
        char * v4 = (char *)(a1 + 97); // 0x43f8b2
        *v4 = *v4 - (char)v2;
        return (result + a3 / 256) % 256 | result & -256;
    }
    // 0x43f890
    *(char *)a1 = (char)(v2 / 256 & a1);
    return result;
}

// Address range: 0x43f8d1 - 0x43f8f6
int64_t function_43f8d1(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 + 14); // 0x43f8d1
    int64_t result; // 0x43f8d1
    char v2 = *v1 & (char)result; // 0x43f8d1
    unsigned char v3 = llvm_ctpop_i8(v2); // 0x43f8d1
    *v1 = v2;
    *(int32_t *)(a3 - 35) = (int32_t)a2;
    if (v3 % 2 != 0) {
        // 0x43f92a
        return result;
    }
    int32_t * v4 = (int32_t *)(result + 2); // 0x43f8dc
    *v4 = (int32_t)result & -0xff01 | (int32_t)&g1;
    int32_t v5 = *(int32_t *)-0x199cd3bb + 0x6636414; // 0x43f8e0
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x43f8e0
    *(int32_t *)-0x199cd3bb = v5;
    if (v6 % 2 != 0) {
        // 0x43f8ff
        return (int64_t)*v4;
    }
    // 0x43f8ec
    return function_ffffffff841b0202();
}

// Address range: 0x43f8f6 - 0x43f8ff
int64_t function_43f8f6(void) {
    // 0x43f8f6
    int64_t result; // 0x43f8f6
    return result;
}

// Address range: 0x43f922 - 0x43f92a
int64_t function_43f922(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x43f922
    int64_t result; // 0x43f922
    *(int64_t *)result = a5;
    char * v1 = (char *)(result - 0x5f1daaa); // 0x43f924
    bool v2; // 0x43f922
    *v1 = (char)v2 + (char)a4 + *v1;
    return result;
}

// Address range: 0x43f92b - 0x43f930
int64_t function_43f92b(int64_t a1) {
    // 0x43f92b
    int64_t result; // 0x43f92b
    return result;
}

// Address range: 0x43f9e0 - 0x43f9e1
int64_t function_43f9e0(void) {
    // 0x43f9e0
    int64_t result; // 0x43f9e0
    return result;
}

// Address range: 0x43fa22 - 0x43fa25
int64_t function_43fa22(void) {
    // 0x43fa22
    int64_t result; // 0x43fa22
    return result;
}

// Address range: 0x43fa3c - 0x43fa5b
int64_t function_43fa3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x43fa3c
    int64_t v1; // 0x43fa3c
    uint64_t v2 = v1 | a3;
    int16_t v3 = v2 % 256 | a3 & 0xff00; // 0x43fa3f
    __asm_out_135(v3, (char)v1);
    int64_t v4 = v1 & 0xffffffff; // 0x43fa41
    if (a4 != 1 && (char)v2 != 0) {
        v4 = function_43f9e0();
    }
    // 0x43fa43
    __asm_out_135(v3, (char)v4);
    uint32_t v5 = *(int32_t *)0x4ac37a08; // 0x43fa4a
    *(int32_t *)0x4ac37a08 = 512 * v5 | v5 / 0x1000000;
    return function_ffffffff81424eae();
}

// Address range: 0x43fa66 - 0x43fa6b
int64_t function_43fa66(void) {
    // 0x43fa66
    return function_ffffffff9c507aaa();
}

// Address range: 0x43fa6c - 0x43fa6d
int64_t function_43fa6c(int64_t a1) {
    // 0x43fa6c
    int64_t result; // 0x43fa6c
    return result;
}

// Address range: 0x43faad - 0x43faae
int64_t function_43faad(void) {
    // 0x43faad
    int64_t result; // 0x43faad
    return result;
}

// Address range: 0x43fad3 - 0x43fadf
int64_t function_43fad3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x43fad3
    int64_t result; // 0x43fad3
    return result;
}

// Address range: 0x43fafa - 0x43fb13
int64_t function_43fafa(int64_t a1, int64_t a2, int64_t a3) {
    // 0x43fafa
    bool v1; // 0x43fafa
    bool v2 = v1;
    int64_t v3; // 0x43fafa
    uint32_t v4 = (int32_t)v3; // 0x43fafa
    uint32_t v5 = (int32_t)v2 + (int32_t)v3; // 0x43fafa
    bool v6 = v2 ? v5 != -1 | (int32_t)v2 + v4 - v5 > v4 : v5 > v4; // 0x43fafa
    int64_t v7 = __asm_wait(); // 0x43fafe
    return (v7 + 168 + (v6 ? 201 : 202)) % 256 | v7 & -256;
}

// Address range: 0x43fb13 - 0x43fb26
int64_t function_43fb13(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x43fb13
    bool v1; // 0x43fb13
    bool v2 = v1;
    int64_t v3; // bp-8, 0x43fb13
    int64_t v4 = (int64_t)&v3; // 0x43fb15
    if (!v1) {
        v4 = function_43faad();
    }
    // 0x43fb17
    int64_t v5; // 0x43fb13
    int64_t v6 = v5 & 0xffffffff; // 0x43fb14
    uint64_t v7 = v4;
    unsigned char v8 = (char)a4; // 0x43fb17
    unsigned char v9 = (char)v2 + (char)(a3 / 256); // 0x43fb17
    bool v10 = v2 ? v9 != -1 | (char)v2 + v8 - v9 > v8 : v9 > v8; // 0x43fb17
    *(int64_t *)(v6 - 8) = a2;
    int64_t v11; // 0x43fb13
    char v12 = *(char *)&v11; // 0x43fb1a
    int64_t * v13 = (int64_t *)(v6 - 16); // 0x43fb1c
    *v13 = 256 * (int64_t)((char)(v7 / 256) + (char)v10 + v12) | v7 & -0xff01;
    char * v14 = (char *)(a3 + 0x3d002f76); // 0x43fb1d
    unsigned char v15 = *v14; // 0x43fb1d
    *v14 = v15 / 128 | 2 * v15;
    return *v13;
}

// Address range: 0x43fb66 - 0x43fb81
int64_t function_43fb66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x43fb66
    int64_t v1; // 0x43fb66
    uint64_t v2 = v1;
    char v3 = __asm_in(30); // 0x43fb68
    uint64_t v4 = v2 & -256 | (int64_t)v3; // 0x43fb68
    uint64_t v5 = v4 / 256; // 0x43fb6a
    int64_t result = 256 * (v5 - v1) & 0xff00 | v4 & -0xff01; // 0x43fb6a
    int64_t * v6 = (int64_t *)(result + 113); // 0x43fb6d
    *v6 = *v6 + v1 + (int64_t)((char)v5 >= (char)v1);
    *(int32_t *)a1 = __asm_insd((int16_t)((int32_t)v4 >> 31));
    char * v7 = (char *)(2 * v1 + 113); // 0x43fb74
    *v7 = *v7 ^ v3;
    return result;
}

// Address range: 0x43fb90 - 0x43fb99
int64_t function_43fb90(void) {
    // 0x43fb90
    int64_t result; // 0x43fb90
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)v1 - 0x13391617;
    return result;
}

// Address range: 0x43fbd0 - 0x43fbd2
int64_t function_43fbd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x43fbd0
    int64_t result; // 0x43fbd0
    return result;
}

// Address range: 0x43fc09 - 0x43fc0a
int64_t function_43fc09(void) {
    // 0x43fc09
    int64_t result; // 0x43fc09
    return result;
}

// Address range: 0x43fc16 - 0x43fc19
int64_t function_43fc16(int64_t a1) {
    // 0x43fc16
    int64_t result; // 0x43fc16
    return result;
}

// Address range: 0x43fc2a - 0x43fcfe
int64_t function_43fc2a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    char * v2 = (char *)(a3 + 0x7922c2d3); // 0x43fc2f
    int64_t v3; // 0x43fc2a
    char v4 = *v2 ^ (char)((uint64_t)v3 / 256); // 0x43fc2f
    *v2 = v4;
    if (a4 == 1 || v4 == 0) {
        int64_t v5 = __asm_iretd(); // 0x43fc3a
        int32_t * v6 = (int32_t *)(v1 + 94); // 0x43fc3b
        *v6 = *v6 - (int32_t)v1;
        uint32_t result = (0x10000 * (int32_t)v5 >> 16) - 0x23d76a1d; // 0x43fc46
        char * v7 = (char *)(a3 - 0x3bff41f); // 0x43fc4c
        *v7 = *v7 + (char)(result / 256);
        return result;
    }
    int64_t result2 = __asm_hlt(); // 0x43fc6e
    __asm_outsd((int16_t)a3, *(int32_t *)&v1);
    return result2;
}

// Address range: 0x43fd16 - 0x43fd19
int64_t function_43fd16(void) {
    // 0x43fd16
    int64_t result; // 0x43fd16
    return result;
}

// Address range: 0x43fd1b - 0x43fd35
int64_t function_43fd1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x4a776258; // bp-8, 0x43fd1d
    int32_t v2 = __readgsdword(a4); // 0x43fd2c
    int64_t v3; // 0x43fd1b
    __writegsdword(a4, (int32_t)(int64_t)&v1 + (int32_t)a2 + (int32_t)((char)v3 < 18) + v2);
    return function_ffffffff9094e049();
}

// Address range: 0x43fd70 - 0x43fd75
int64_t function_43fd70(int64_t a1, int64_t a2, int64_t a3) {
    // 0x43fd70
    int64_t result; // 0x43fd70
    return result;
}

// Address range: 0x43fdad - 0x43fdb5
int64_t function_43fdad(void) {
    // 0x43fdad
    return function_35784696();
}

// Address range: 0x43fe45 - 0x43fe58
int64_t function_43fe45(void) {
    // 0x43fe45
    __asm_int(8);
    int64_t v1; // 0x43fe45
    __asm_out_136(19, (char)v1 ^ 114);
    return function_43fe8f((int64_t)&g4);
}

// Address range: 0x43fe77 - 0x43fe78
int64_t function_43fe77(void) {
    // 0x43fe77
    int64_t result; // 0x43fe77
    return result;
}

// Address range: 0x43fe79 - 0x43fe7f
int64_t function_43fe79(void) {
    // 0x43fe79
    return function_6fa3ebc6();
}

// Address range: 0x43fe8f - 0x43fe92
int64_t function_43fe8f(int64_t a1) {
    // 0x43fe8f
    int64_t result; // 0x43fe8f
    return result;
}

// Address range: 0x43feaf - 0x43ff3a
int64_t function_43feaf(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = __asm_iretd(); // 0x43feaf
    bool v2; // 0x43feaf
    int64_t v3 = 2 * a3 & 254 | a3 & -256 | (int64_t)v2; // 0x43febc
    char v4; // 0x43feaf
    int64_t v5; // 0x43feaf
    int64_t v6; // 0x43feaf
    int64_t v7; // 0x43feaf
    int64_t v8; // 0x43feaf
    if (v2) {
        // 0x43feaf
        v4 = v1;
        v5 = v1;
        v7 = v3;
        v6 = a1;
    } else {
        int64_t v9 = v3 & a4;
        int32_t v10 = v9; // 0x43fed4
        unsigned char v11 = llvm_ctpop_i8((char)v9); // 0x43fed4
        *(int32_t *)a4 = v10;
        uint64_t v12 = 0xf2b660da * a4 & 0xffff00fe | 0x4000 * (int64_t)(v10 == 0) | 0x8000 * (int64_t)(v10 < 0) | 1024 * (int64_t)(v11 % 2 == 0) | 512; // 0x43fed9
        char * v13 = (char *)(v8 - 0x6ff4ace8); // 0x43fedf
        *v13 = *v13 ^ (char)(v12 / 256);
        uint32_t v14 = (int32_t)v12 | 0x491431b4; // 0x43fee5
        char v15 = llvm_ctpop_i8((char)v14); // 0x43fee5
        __asm_out_133(113, v14);
        uint64_t v16 = a4 % 64; // 0x43feec
        char v17 = v15; // 0x43feec
        if (v16 != 0) {
            int64_t * v18 = (int64_t *)(a1 + 0x776cae2f); // 0x43feec
            int64_t v19 = *v18 << v16; // 0x43feec
            v17 = llvm_ctpop_i8((char)v19);
            *v18 = v19;
        }
        int64_t v20 = v14; // 0x43fef3
        if (v17 % 2 != 0) {
            v20 = function_43fe77();
        }
        char * v21 = (char *)(v20 - 31); // 0x43fefa
        *v21 = *v21 ^ (char)(a4 / 256);
        int64_t v22 = v20 & 0x12ddfd54 | 0xed2202ab; // 0x43fefd
        *(char *)0xbe083130 = *(char *)0xbe083130 / 2;
        *(char *)a2 = 66;
        char * v23 = (char *)(a4 + 10); // 0x43ff08
        char v24 = v22;
        *v23 = *v23 & v24;
        v4 = v24;
        v5 = v22;
        v7 = 66;
        v6 = a5;
    }
    uint64_t v25 = v7;
    float80_t v26; // 0x43feaf
    *(int32_t *)(v8 + 106) = (int32_t)v26;
    unsigned char v27 = v4 ^ 54; // 0x43ff13
    int64_t v28 = v5 & -256 | (int64_t)v27; // 0x43ff13
    *(int32_t *)v6 = (int32_t)v28;
    int32_t v29 = -63 * *(int32_t *)v28; // 0x43ff1b
    __asm_out_133(48, v29);
    int32_t result = v29; // 0x43ff20
    if (v27 != 0) {
        char v30 = *(char *)0x59da8be6; // 0x43ff22
        int32_t * v31 = (int32_t *)((256 * (int64_t)(v30 | (char)(v25 / 256)) | v25 & -0xff01) + 55); // 0x43ff28
        *v31 = 512 * *v31;
        result = v29 + 0x8fdf74e;
    }
    // 0x43ff39
    return result;
}

// Address range: 0x43ff6e - 0x43ffa4
int64_t function_43ff6e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x43ff6e
    int64_t result; // 0x43ff6e
    bool v1; // 0x43ff6e
    *(int32_t *)a3 = (int32_t)result - (int32_t)a2 + (int32_t)v1;
    char * v2 = (char *)(a1 - 0x70ff9559); // 0x43ff70
    *v2 = *v2 + (char)(a4 / 256);
    int64_t v3 = (int64_t)(*(int32_t *)(a2 + 123) | (int32_t)a1); // 0x43ff76
    *(int32_t *)v3 = __asm_insd((int16_t)a3);
    int32_t * v4 = (int32_t *)(a4 + 0x479a7a3); // 0x43ff7f
    *v4 = *v4 - (int32_t)result;
    int64_t v5; // 0x43ff6e
    *(char *)v3 = *(char *)&v5;
    uint32_t v6 = (int32_t)result; // 0x43ff86
    uint32_t v7 = __readgsdword(result + 0x1536200f); // 0x43ff86
    int64_t v8 = v6 - v7; // 0x43ff86
    char * v9 = (char *)((v1 ? -1 : 1) + v3 + v8); // 0x43ff8f
    *v9 = *v9 - (char)a3 + (char)(v7 > v6);
    int32_t * v10 = (int32_t *)(a3 - 61); // 0x43ff92
    *v10 = *v10 | (int32_t)result;
    *(char *)0x733b4dd1ffb00f70 = (char)result;
    __asm_frstor(*(int864_t *)(v8 + 3));
    return result;
}

// Address range: 0x43ffc6 - 0x43ffc9
int64_t function_43ffc6(int64_t a1) {
    // 0x43ffc6
    int64_t result; // 0x43ffc6
    return result;
}

// Address range: 0x43fff0 - 0x43fff5
int64_t function_43fff0(void) {
    // 0x43fff0
    return function_ffffffffac69d310();
}

// Address range: 0x44004c - 0x44004f
int64_t function_44004c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44004c
    int64_t result; // 0x44004c
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}
