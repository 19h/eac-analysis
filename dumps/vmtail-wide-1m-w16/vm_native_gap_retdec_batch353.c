/*
 * Targeted RetDec C for native executable gap queue batch 353.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x14eb13-0x14ed13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14ed13-0x14ef13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14ef13-0x14f113 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14f113-0x14f313 rank=- name=- kind=- bytes=- uncovered=-
 *   0x16f2aa-0x16f4aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16f4aa-0x16f6aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16f6aa-0x16f8aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16faaa-0x16fcaa rank=- name=- kind=- bytes=- uncovered=-
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
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
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

int64_t function_14eb13(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_14eb96(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14ebae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14ebef(void);
int64_t function_14ebf1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14ec4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_14ec9c(void);
int64_t function_14ed0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14ed3d(void);
int64_t function_14ed76(void);
int64_t function_14edb2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14eddd(int64_t a1, int64_t a2);
int64_t function_14edf6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14ee14(void);
int64_t function_14ee1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14eec6(int64_t a1);
int64_t function_14eee3(int64_t a1, int64_t a2);
int64_t function_14ef08(void);
int64_t function_14ef1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14efc7(void);
int64_t function_14f007(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14f065(void);
int64_t function_14f069(void);
int64_t function_14f085(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14f0bf(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_14f12e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14f189(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_14f1bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14f212(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14f288(int64_t a1);
int64_t function_16f2aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_16f3fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_16f53f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_16f6b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_16f859(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16f8a5(void);
int64_t function_16faaa(int64_t a1);
int64_t function_16fac3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3c7efff3();
int64_t function_cf3c7();
int64_t function_ffffffff8185b624();
int64_t function_ffffffffefc18b7d();
int64_t unknown_281ada28();
int64_t unknown_3b581e8f();
int64_t unknown_786f5803();
int64_t unknown_81f7479();
int64_t unknown_ffffffff88187bce();
int64_t unknown_ffffffffc709cf2f();
int64_t unknown_fffffffff80a1d59();

// Address range: 0x14eb13 - 0x14eb26
int64_t function_14eb13(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x14eb13
    int64_t v1; // 0x14eb13
    int64_t v2 = v1;
    int64_t v3 = -0x3f77800; // bp-8, 0x14eb1a
    __asm_out((int16_t)a3, (char)(v2 + a4 / 256 + (int64_t)((int32_t)v2 < 0x8fb48901)));
    return (int64_t)&v3;
}

// Address range: 0x14eb96 - 0x14ebac
int64_t function_14eb96(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14eb96
    int64_t v1; // 0x14eb96
    return v1 & -256 | (int64_t)__asm_in((int16_t)a3);
}

// Address range: 0x14ebae - 0x14ebe5
int64_t function_14ebae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 - 117); // 0x14ebb3
    *v1 = *v1 + (int32_t)a4;
    int64_t v2; // 0x14ebae
    int32_t * v3 = (int32_t *)(v2 + 54); // 0x14ebbc
    int32_t v4 = a3; // 0x14ebbc
    *v3 = *v3 + v4;
    int64_t v5; // 0x14ebae
    char v6 = *(char *)&v5; // 0x14ebc6
    int64_t v7 = unknown_ffffffff88187bce(); // 0x14ebc8
    int32_t * v8 = (int32_t *)(a2 - 50); // 0x14ebd2
    *v8 = *v8 + v4;
    int32_t * v9 = (int32_t *)(a2 + 0xba55474); // 0x14ebdd
    *v9 = *v9 + (int32_t)v7;
    int64_t result = function_14ebf1(a1, a2, a3, (256 * (int64_t)(v6 ^ (char)((int64_t)&g4 >> 8)) | (a4 | (int64_t)&g4) & -0xff01) - 1); // 0x14ebe3
    return result;
}

// Address range: 0x14ebef - 0x14ebf1
int64_t function_14ebef(void) {
    // 0x14ebef
    int64_t result; // 0x14ebef
    return result;
}

// Address range: 0x14ebf1 - 0x14ec0c
int64_t function_14ebf1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14ebf1
    int64_t v1; // 0x14ebf1
    uint32_t v2 = (int32_t)v1; // 0x14ebf5
    uint32_t v3 = 2 * v2; // 0x14ebf5
    *(char *)a1 = (char)v3;
    bool v4; // 0x14ebf1
    *(char *)((__asm_int1((v4 ? -1 : 1) + a1) & 0xffffffff) + 106) = (char)a2;
    int64_t v5 = unknown_786f5803(); // 0x14ebfd
    return (v5 + (v3 < v2 ? 81 : 80)) % 256 | v5 & -256;
}

// Address range: 0x14ec4b - 0x14ec87
int64_t function_14ec4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x14ec4b
    int64_t v1; // 0x14ec4b
    *(int16_t *)(8 * a3 + a4) = (int16_t)v1;
    int64_t v2 = unknown_fffffffff80a1d59(); // 0x14ec53
    __asm_out_133(-49, (char)v2);
    char * v3 = (char *)(a3 + a1); // 0x14ec5b
    *v3 = *v3 & (char)a4;
    char * v4 = (char *)v2; // 0x14ec5e
    *v4 = *v4 - (char)a5;
    unknown_81f7479();
    return (int64_t)*(int32_t *)0x628001e8b6280147;
}

// Address range: 0x14ec9c - 0x14ec9d
int64_t function_14ec9c(void) {
    // 0x14ec9c
    int64_t result; // 0x14ec9c
    return result;
}

// Address range: 0x14ed0e - 0x14ed14
int64_t function_14ed0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 24 + 4 * a3); // 0x14ed0e
    int64_t v2; // 0x14ed0e
    *v1 = *v1 + (char)((uint64_t)v2 / 256);
    return function_14ec9c();
}

// Address range: 0x14ed3d - 0x14ed40
int64_t function_14ed3d(void) {
    // 0x14ed3d
    int64_t result; // 0x14ed3d
    return result;
}

// Address range: 0x14ed76 - 0x14ed7c
int64_t function_14ed76(void) {
    // 0x14ed76
    int64_t result; // 0x14ed76
    return result;
}

// Address range: 0x14edb2 - 0x14edc4
int64_t function_14edb2(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 0x4b78ffd2); // 0x14edb2
    int64_t result; // 0x14edb2
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x14eddd - 0x14ede0
int64_t function_14eddd(int64_t a1, int64_t a2) {
    // 0x14eddd
    int64_t result; // 0x14eddd
    return result;
}

// Address range: 0x14edf6 - 0x14ee14
int64_t function_14edf6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14edf6
    int64_t v1; // 0x14edf6
    int64_t v2 = v1;
    int64_t v3 = v1;
    char v4 = *(char *)(a1 - 93); // 0x14edf6
    bool v5; // 0x14edf6
    *(int64_t *)((v2 & -256 | (int64_t)((char)v5 + (char)v2 - v4)) - 8) = a3;
    char v6 = *(char *)(v3 - 0x34542900); // 0x14ee08
    int64_t result = v3 & 0xffffff00 | (int64_t)(v6 + (char)((int64_t)"lock" >> 8) | (char)v3); // 0x14ee0f
    int64_t v7; // 0x14edf6
    *(int32_t *)a3 = *(int32_t *)&v7 + (int32_t)result;
    return result;
}

// Address range: 0x14ee14 - 0x14ee1f
int64_t function_14ee14(void) {
    char v1 = *(char *)0x52dccc1b; // 0x14ee14
    int64_t v2; // 0x14ee14
    *(char *)0x52dccc1b = v1 + (char)((uint64_t)v2 / 256);
    return function_ffffffffefc18b7d();
}

// Address range: 0x14ee1f - 0x14eec1
int64_t function_14ee1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4 & -0xff01 | (int64_t)&g2; // 0x14ee1f
    int64_t v2; // 0x14ee1f
    *(char *)a1 = (char)v2;
    bool v3; // 0x14ee1f
    int64_t v4 = v3 ? -1 : 1; // 0x14ee27
    int64_t result; // 0x14ee1f
    int64_t v5 = result;
    *(int32_t *)v5 = *(int32_t *)&result + (int32_t)v5;
    __asm_outsd((int16_t)a3, *(int32_t *)(v4 + a2));
    float80_t v6; // 0x14ee1f
    *(int32_t *)(v2 - 110) = (int32_t)v6;
    uint32_t v7 = (int32_t)v1 % 32; // 0x14ee3f
    if (v7 != 0) {
        uint32_t v8 = *(int32_t *)&result; // 0x14ee3f
        *(int32_t *)result = v8 >> 32 - v7 | v8 << v7;
    }
    if (v1 != 0) {
        // 0x14ee49
        return result;
    }
    // 0x14eea3
    *(int32_t *)0x122c97e071ecaa54 = (int32_t)result & -256 | ((int32_t)result >> 31) % 256;
    uint64_t v9 = __asm_wait(); // 0x14eebb
    char v10 = *(char *)(a1 + 30 + v4); // 0x14eebc
    return 256 * (int64_t)(v10 & (char)(v9 / 256)) | v9 & -0xff01;
}

// Address range: 0x14eec6 - 0x14eed2
int64_t function_14eec6(int64_t a1) {
    // 0x14eec6
    int64_t v1; // 0x14eec6
    return v1 + 0xfec2ffc6 & 0xffffffff;
}

// Address range: 0x14eee3 - 0x14eef5
int64_t function_14eee3(int64_t a1, int64_t a2) {
    // 0x14eee3
    int64_t v1; // 0x14eee3
    int32_t * v2 = (int32_t *)(v1 - 24); // 0x14eee3
    bool v3; // 0x14eee3
    *v2 = *v2 + 0x3d00c611 + (int32_t)v3;
    int32_t * v4 = (int32_t *)(a1 - 107); // 0x14eeea
    *v4 = *v4 + (int32_t)a2;
    return function_ffffffff8185b624();
}

// Address range: 0x14ef08 - 0x14ef09
int64_t function_14ef08(void) {
    // 0x14ef08
    int64_t result; // 0x14ef08
    return result;
}

// Address range: 0x14ef1d - 0x14ef4a
int64_t function_14ef1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4 - 1; // 0x14ef23
    int64_t result; // 0x14ef1d
    bool v2; // 0x14ef1d
    if (v1 == 0 || v2) {
        char * v3 = (char *)(a2 + 57); // 0x14ef26
        *v3 = (char)v2 - (char)result + *v3;
        return result & 0xffffffff;
    }
    int32_t v4 = result; // 0x14ef2b
    *(int32_t *)((!v2 ? a2 : a1) & 0xffffffff) = v4;
    // 0x14ef2e
    return result;
    int32_t * v5 = (int32_t *)v1; // 0x14ef2f
    *v5 = *v5 + v4;
    int64_t v6; // 0x14ef1d
    if ((a5 & 4) != 0) {
        v6 = function_14ef08();
    }
    char * v7 = (char *)(v6 + 10); // 0x14ef35
    *v7 = *v7 + (char)(v6 / 256);
    __asm_out((int16_t)a3, (char)v6);
    __writegsbyte(0x7baa464a, __readgsbyte(0x7baa464a) + (char)(result / 256));
    return 0x60eb8705;
}

// Address range: 0x14efc7 - 0x14efc8
int64_t function_14efc7(void) {
    // 0x14efc7
    int64_t result; // 0x14efc7
    return result;
}

// Address range: 0x14f007 - 0x14f031
int64_t function_14f007(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14f007
    int64_t v1; // 0x14f007
    *(int32_t *)a3 = (int32_t)(v1 ^ v1);
    *(char *)-0x48fe54ed = *(char *)-0x48fe54ed + (char)(v1 / 256);
    *(int32_t *)-0x2860f55f38e8f8c9 = __asm_in_134(-27);
    char * v2 = (char *)(a3 + 0x13d00e8); // 0x14f023
    *v2 = *v2 + (char)a4;
    int32_t * v3 = (int32_t *)(v1 + 0x36be0080); // 0x14f029
    *v3 = *v3 + (int32_t)v1;
    return function_14efc7();
}

// Address range: 0x14f065 - 0x14f066
int64_t function_14f065(void) {
    // 0x14f065
    int64_t result; // 0x14f065
    return result;
}

// Address range: 0x14f069 - 0x14f06a
int64_t function_14f069(void) {
    // 0x14f069
    int64_t result; // 0x14f069
    return result;
}

// Address range: 0x14f085 - 0x14f08c
int64_t function_14f085(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 58); // 0x14f085
    int64_t v2; // 0x14f085
    *v1 = *v1 + (int32_t)v2;
    int64_t v3; // 0x14f085
    uint32_t v4 = *(int32_t *)&v3; // 0x14f088
    uint32_t v5 = (int32_t)v2; // 0x14f088
    int32_t v6 = v4 + v5; // 0x14f088
    unsigned char v7 = llvm_ctpop_i8((char)v6); // 0x14f088
    *(int32_t *)v3 = v6;
    return v3 & -0xff01 | 256 * (64 * (int64_t)(v6 == 0) | (int64_t)(v6 < v4) | 128 * (int64_t)(v6 < 0) | 16 * (int64_t)(v4 % 16 + v5 % 16 > 15) | 4 * (int64_t)(v7 % 2 == 0)) | 512;
}

// Address range: 0x14f0bf - 0x14f12d
int64_t function_14f0bf(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x14f0bf
    int64_t v1; // 0x14f0bf
    uint64_t v2 = v1;
    int64_t v3 = a1;
    int64_t v4 = unknown_ffffffffc709cf2f(); // 0x14f0bf
    unsigned char v5 = *(char *)0x30e46cd3; // 0x14f0cc
    char v6 = v2 / 256; // 0x14f0cc
    unsigned char v7 = v5 + v6; // 0x14f0cc
    *(char *)0x30e46cd3 = v7;
    int32_t * v8 = (int32_t *)(v2 - 114); // 0x14f0d2
    *v8 = *v8 - (int32_t)a3 + (int32_t)(v7 < v5);
    if (*(char *)&v3 > (char)(a4 / 256)) {
        // 0x14f11c
        if (a4 == 1 | (__asm_wait() & -256 | 2) == v3) {
            // 0x14f125
            return v2 & 0xffffffff;
        }
        // 0x14f12b
        return __asm_in_134(40);
    }
    int64_t v9 = v4; // 0x14f0db
    int64_t v10; // 0x14f0bf
    if ((*(char *)&v10 || v6) >= 0) {
        v9 = function_14f069();
    }
    char * v11 = (char *)v9; // 0x14f0dd
    *v11 = *v11 - (char)v9;
    int32_t * v12 = (int32_t *)(8 * a2 + 15 + v9); // 0x14f0e5
    *v12 = *v12 + (int32_t)a2;
    bool v13; // 0x14f0bf
    int64_t result = __asm_sti(v3 + (v13 ? -4 : 4), 0x63fa815f, a5); // 0x14f102
    *(int64_t *)20 = 0xbab000;
    return result;
}

// Address range: 0x14f12e - 0x14f189
int64_t function_14f12e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x14f12e
    int64_t v1; // 0x14f12e
    *(char *)a1 = (char)v1;
    uint32_t v2 = __asm_in_134(114); // 0x14f140
    uint64_t v3 = v1 / 256;
    char v4 = v3;
    *(char *)-0x17bcc5b5 = *(char *)-0x17bcc5b5 + v4;
    int3_t v5; // 0x14f12e
    int64_t v6; // 0x14f12e
    if ((char)(((int64_t)v2 || (int64_t)&g1) + 4 || v3) != 0) {
        // 0x14f155
        *(int32_t *)0x7bb6c4 = (int32_t)a4;
        int3_t v7; // 0x14f12e
        int3_t v8 = v7 + 2; // 0x14f15b
        __frontend_reg_store_fpr(v8, __frontend_reg_load_fpr(v7) * __frontend_reg_load_fpr(v8));
        v5 = v7 + 1;
        v6 = v1 & -256;
    }
    char * v9 = (char *)(v6 - 0x54788fa2); // 0x14f16b
    *v9 = *v9 | (char)v1;
    *(char *)0x276e4478 = *(char *)0x276e4478 + v4;
    int64_t result = __asm_wait(); // 0x14f180
    *(float80_t *)(result + 2) = __frontend_reg_load_fpr(v5);
    return result;
}

// Address range: 0x14f189 - 0x14f1ae
int64_t function_14f189(int64_t a1, int64_t a2, uint64_t a3) {
    char * v1 = (char *)(a3 - 84); // 0x14f194
    *v1 = *v1 + (char)(a3 / 256);
    unknown_3b581e8f();
    return __asm_sti(a1, a2, a3) & -256 | (int64_t)*(char *)0x22b93d4f1980d2c;
}

// Address range: 0x14f1bd - 0x14f1e2
int64_t function_14f1bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int64_t result; // 0x14f1bd
    bool v2; // 0x14f1bd
    int32_t v3 = 2 * (int32_t)result | (int32_t)v2; // 0x14f1bd
    *(int32_t *)result = v3;
    if (v3 > 0) {
        // 0x14f1c3
        return a2 & 0xffffffff;
    }
    unsigned char v4 = *(char *)0x7f35bad7; // 0x14f1d0
    unsigned char v5 = v4 + (char)((uint64_t)result / 256); // 0x14f1d0
    *(char *)0x7f35bad7 = v5;
    uint32_t v6 = (int32_t)a4 % 32; // 0x14f1db
    if (v6 != 0) {
        uint32_t v7 = *(int32_t *)&v1; // 0x14f1db
        *(int32_t *)v1 = (int32_t)(v5 < v4) << v6 - 1 | v7 << v6 | (int32_t)((int64_t)v7 >> (int64_t)(33 - v6));
    }
    return result;
}

// Address range: 0x14f212 - 0x14f252
int64_t function_14f212(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x14f212
    unknown_281ada28();
    uint32_t v1 = *(int32_t *)0xd86675e8e390a4; // 0x14f227
    int32_t v2 = v1 + 0x480f60ff; // 0x14f230
    int64_t v3 = 256 * (64 * (int64_t)(v2 == 0) | (int64_t)(v1 < 0xb7f09f01) | 128 * (int64_t)(v2 < 0) | 16 * (int64_t)(v1 % 16 > 16) | 4 * (int64_t)(llvm_ctpop_i8((char)v2) % 2 == 0)) | (int64_t)(v1 & -0xff01 | 512); // 0x14f235
    int64_t v4; // 0x14f212
    int64_t v5 = a4 + 0xffffffff + v4; // 0x14f23c
    int32_t * v6 = (int32_t *)v3; // 0x14f23e
    *v6 = *v6 & (int32_t)v5;
    bool v7; // 0x14f212
    *(int32_t *)(a1 - v3 & 0xffffffff) = *(int32_t *)((v7 ? -1 : 1) + a2);
    return 90 * v5 & 0xfffffffe;
}

// Address range: 0x14f288 - 0x14f289
int64_t function_14f288(int64_t a1) {
    // 0x14f288
    int64_t result; // 0x14f288
    return result;
}

// Address range: 0x16f2aa - 0x16f3fa
int64_t function_16f2aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x16f2aa
    int64_t v1; // 0x16f2aa
    char * v2 = (char *)(v1 - 119); // 0x16f2aa
    *v2 = *v2 | (char)a4;
    int64_t v3; // bp-24, 0x16f2aa
    int64_t v4 = (int64_t)&v3; // 0x16f32d
    int64_t v5 = *(int64_t *)(v4 + 24); // 0x16f351
    v3 = v5;
    int64_t * v6 = (int64_t *)(v4 - 8); // 0x16f355
    int64_t v7 = v4 + 8; // 0x16f369
    int64_t v8 = v4 + 16; // 0x16f395
    *(int64_t *)v8 = v3;
    *(int64_t *)(v4 - 16) = v5;
    *(int64_t *)(v4 + 32) = v3;
    int64_t * v9 = (int64_t *)v7; // 0x16f3ac
    v3 = *v9;
    *v6 = v7;
    *v6 = *v9;
    v3 = v8;
    return function_cf3c7(a1, a2, a3, a7, a5, a6);
}

// Address range: 0x16f3fa - 0x16f53f
int64_t function_16f3fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x16f3fa
    int64_t v1; // 0x16f3fa
    int64_t v2 = 0x100000000 * v1 >> 32; // 0x16f3fa
    int64_t v3 = 0x60eb995 * v2 != 0x60eb99500000000 * v2 >> 32; // 0x16f400
    bool v4; // 0x16f3fa
    int64_t v5 = 0x4000 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | v3 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 2048 * v3 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | 4 * (int64_t)v4 | 2; // 0x16f400
    int64_t v6 = v5; // bp-40, 0x16f4e8
    int64_t v7 = (int64_t)&v6; // 0x16f514
    *(int64_t *)(v7 - 8) = v5;
    *(int64_t *)(v7 - 16) = v5;
    return function_cf3c7(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x16f53f - 0x16f6b1
int64_t function_16f53f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x16f53f
    int64_t v1; // bp-32, 0x16f53f
    int64_t v2 = (int64_t)&v1; // 0x16f5bf
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x16f5df
    int64_t v4 = v2 - 8; // 0x16f5df
    int64_t * v5 = (int64_t *)v4; // 0x16f5df
    *v5 = v3;
    int64_t v6 = v2 - 16; // 0x16f5e7
    int64_t * v7 = (int64_t *)v6; // 0x16f5e7
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x16f5f4
    *v8 = v6;
    *v7 = v2;
    int64_t * v9 = (int64_t *)(v2 + 8); // 0x16f60b
    int64_t v10 = *v9; // 0x16f60b
    *v7 = v10;
    *v8 = v4;
    int64_t * v11 = (int64_t *)(v2 - 32); // 0x16f633
    *v11 = v3;
    *v5 = *v8;
    *v8 = 0x321ccf4b;
    *v11 = v10;
    *v9 = *v8;
    *v8 = v4;
    return function_cf3c7(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x16f6b1 - 0x16f80f
int64_t function_16f6b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x16f6b1
    return function_cf3c7(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x16f859 - 0x16f866
int64_t function_16f859(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16f859
    int64_t v1; // 0x16f859
    int64_t result = v1;
    __asm_out_135(-84, (int32_t)result);
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(result - 127); // 0x16f860
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x16f8a5 - 0x16f8aa
int64_t function_16f8a5(void) {
    // 0x16f8a5
    return function_3c7efff3();
}

// Address range: 0x16faaa - 0x16fac3
int64_t function_16faaa(int64_t a1) {
    // 0x16faaa
    int64_t v1; // 0x16faaa
    return function_cf3c7(v1, v1, v1, v1, v1, v1);
}

// Address range: 0x16fac3 - 0x16fc66
int64_t function_16fac3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x16fac3
    return function_cf3c7(0x16a88e, a2, a3, a4, a5, a6);
}
