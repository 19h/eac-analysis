/*
 * Targeted RetDec C for native executable gap queue batch 521.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xf739c-0xf759c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf759c-0xf779c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf779c-0xf799c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf7b9c-0xf7d9c rank=- name=- kind=- bytes=- uncovered=-
 *   0x19a485-0x19a685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x229c66-0x229e66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x229e66-0x22a066 rank=- name=- kind=- bytes=- uncovered=-
 *   0x22a066-0x22a266 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_19a485(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19a4c5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_19a4f9(void);
int64_t function_19a50f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19a51a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19a61b(int64_t a1);
int64_t function_19a623(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20ed8ec();
int64_t function_229c66(int64_t a1, int64_t a2);
int64_t function_229c6d(void);
int64_t function_229c77(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_229c83(void);
int64_t function_229ca3(void);
int64_t function_229cb2(void);
int64_t function_229cc9(int64_t a1);
int64_t function_229ccc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_229ce1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_229cec(int64_t a1, int64_t a2);
int64_t function_229d5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_229db5(void);
int64_t function_229dbf(void);
int64_t function_229dd4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_229e5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_229ea4(int64_t a1);
int64_t function_229eac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_229f08(void);
int64_t function_229f17(int64_t a1, int64_t a2, int64_t a3);
int64_t function_229f2d(void);
int64_t function_229f69(void);
int64_t function_229f8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_22a0fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22a101(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_22a113(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22a15c(int64_t a1);
int64_t function_22a199(void);
int64_t function_22a1c4(void);
int64_t function_22a1c9(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_22a248(void);
int64_t function_22a24a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d233490();
int64_t function_cc59c();
int64_t function_f739c(void);
int64_t function_f739d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_f74ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_f75c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f76f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_f7819(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_f7b9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_f7c20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_ffffffff8fb2b63b();
int64_t function_ffffffff9af6e012();
int64_t unknown_122f352a();
int64_t unknown_13fc2ff5();
int64_t unknown_21a566d5();
int64_t unknown_34f0b5b1();
int64_t unknown_361d7e6b();
int64_t unknown_3b177bee();
int64_t unknown_4732a88d();
int64_t unknown_50cb4ec2();
int64_t unknown_83b5a6();
int64_t unknown_ffffffff91b1bfd7();
int64_t unknown_ffffffffce86aaf2();
int64_t unknown_ffffffffd7b505c0();
int64_t unknown_ffffffffd9c51008();
int64_t unknown_ffffffffec27d42b();
int64_t unknown_fffffffff7491ee7();

// Address range: 0xf739c - 0xf739d
int64_t function_f739c(void) {
    // 0xf739c
    int64_t result; // 0xf739c
    return result;
}

// Address range: 0xf739d - 0xf74ad
int64_t function_f739d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xf739d
    int64_t v1; // 0xf739d
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t v3; // 0xf739d
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    int64_t v5 = a4 - 8; // 0xf73f1
    int64_t * v6 = (int64_t *)v5; // 0xf73f2
    int64_t v7 = *(int64_t *)(a4 + 32); // 0xf73f5
    *v6 = v7;
    int64_t * v8 = (int64_t *)(a4 - 16); // 0xf73f9
    int64_t * v9 = (int64_t *)(a4 - 24); // 0xf7406
    *v8 = a4;
    int64_t v10 = *(int64_t *)(a4 + 8); // 0xf7421
    *v8 = v10;
    *v9 = v5;
    int64_t * v11 = (int64_t *)(a4 - 32); // 0xf7454
    *v11 = v7;
    int64_t * v12 = (int64_t *)a4; // 0xf745a
    *v12 = *v8;
    *v8 = 0x7516ada1;
    *v9 = 0x20c889fe;
    *v11 = v10;
    *(int64_t *)(a4 + 16) = *v8;
    int64_t v13 = *v6; // 0xf7473
    *v8 = v13;
    *v9 = v13;
    *v6 = *v12;
    *v8 = a4;
    return function_cc59c(a1, a2, a3, a4, a5, a6);
}

// Address range: 0xf74ad - 0xf75c8
int64_t function_f74ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xf74ad
    int64_t v1; // bp-40, 0xf74ad
    int64_t v2 = (int64_t)&v1; // 0xf750c
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0xf7534
    int64_t v4 = *(int64_t *)(v2 + 40); // 0xf753a
    v1 = v4;
    *v3 = v4;
    int64_t v5 = *(int64_t *)(v2 + 24); // 0xf754d
    *v3 = v5;
    v1 = 0x4e99a300;
    *(int64_t *)(v2 - 16) = v4;
    int64_t v6 = v2 + 16; // 0xf7573
    *(int64_t *)v6 = v1;
    *v3 = v5;
    *(int64_t *)(v2 + 32) = v1;
    *v3 = v2;
    v1 = v6;
    return function_cc59c(a1, a2, a3, a4, a5, a6);
}

// Address range: 0xf75c8 - 0xf76f8
int64_t function_f75c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xf75c8
    int64_t v1; // bp-48, 0xf75c8
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0xf75c8
    return function_cc59c(a1, a2, a3, a4, v2, v2);
}

// Address range: 0xf76f8 - 0xf7819
int64_t function_f76f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xf76f8
    int64_t v1; // bp-40, 0xf76f8
    int64_t v2 = (int64_t)&v1; // 0xf7768
    v1 = 0x3d107b97;
    int64_t v3 = v2 - 16; // 0xf7783
    int64_t * v4 = (int64_t *)v3; // 0xf7784
    int64_t v5 = *(int64_t *)(v2 + 32); // 0xf778a
    int64_t * v6 = (int64_t *)(v2 - 8); // 0xf778a
    *v6 = v5;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0xf7793
    *v7 = v3;
    *v4 = v2;
    int64_t v8 = *(int64_t *)(v2 + 8); // 0xf77a5
    *v4 = v8;
    *v7 = v5;
    v1 = *v4;
    *v4 = a6;
    *v7 = v8;
    *(int64_t *)(v2 + 16) = v8;
    *v4 = v2;
    *v6 = v1;
    *v4 = v1;
    return function_cc59c(a1, a2, a3, a4, a5, *v4);
}

// Address range: 0xf7819 - 0xf7993
int64_t function_f7819(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xf7819
    int64_t v1; // bp-48, 0xf7819
    int64_t v2 = (int64_t)&v1; // 0xf796b
    int64_t v3 = v2 + 16; // 0xf7971
    v1 = v3;
    int64_t v4 = *(int64_t *)v3; // 0xf797f
    *(int64_t *)(v2 + 8) = v4;
    v1 = v4;
    return function_cc59c(a1, a2, a3, a4, a5, a6);
}

// Address range: 0xf7b9c - 0xf7c20
int64_t function_f7b9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xf7b9c
    int64_t result; // 0xf7b9c
    if (a4 == 0) {
        // 0xf7be7
        return function_cc59c(a1, a2, a3, 0, result, result);
    }
    int64_t * v1 = (int64_t *)result; // 0xf7bc0
    *(int64_t *)(result + 16) = *v1;
    *v1 = result + 8 & 0xffffffff;
    return result;
}

// Address range: 0xf7c20 - 0xf7d65
int64_t function_f7c20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xf7c20
    int64_t v1; // bp-32, 0xf7c20
    int64_t v2 = (int64_t)&v1; // 0xf7c95
    int64_t v3 = *(int64_t *)(v2 + 32); // 0xf7cb5
    int64_t * v4 = (int64_t *)(v2 - 8); // 0xf7cb5
    *v4 = v3;
    int64_t v5 = v2 - 16; // 0xf7cb9
    int64_t * v6 = (int64_t *)v5; // 0xf7cb9
    *v6 = v2;
    int64_t * v7 = (int64_t *)(v2 + 8); // 0xf7cd9
    int64_t v8 = *v7; // 0xf7cd9
    *v6 = v8;
    int64_t * v9 = (int64_t *)(v2 - 24); // 0xf7cdd
    int64_t * v10 = (int64_t *)(v2 - 32); // 0xf7cf4
    *v9 = 0x59e9847a;
    *v10 = v3;
    *v4 = *v9;
    *v9 = v3;
    *v10 = v8;
    *v7 = v8;
    *v9 = *v6;
    *v10 = v5;
    int64_t v11 = *v6; // 0xf7d4a
    *v9 = v11;
    *v10 = v11;
    return function_cc59c(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x19a485 - 0x19a4c1
int64_t function_19a485(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x19a485
    int64_t v1; // 0x19a485
    int64_t v2 = v1;
    int64_t v3 = unknown_4732a88d(); // 0x19a487
    int32_t * v4 = (int32_t *)v3; // 0x19a48c
    uint32_t v5 = *v4; // 0x19a48c
    uint32_t v6 = v5 + (int32_t)a4; // 0x19a48c
    *v4 = v6;
    int64_t v7 = v3 + 0xe870527a + (int64_t)(v6 < v5) & 0xffffffff; // 0x19a48e
    int64_t v8 = a2 + a1; // 0x19a493
    char v9 = *(char *)((v8 & 0xffffffff) + 0x3af67af3); // 0x19a495
    int64_t v10 = v2 & -256 | (int64_t)(v9 ^ (char)v2); // 0x19a495
    uint64_t v11 = v7 * (int64_t)*(int32_t *)(v7 + 8 * v1); // 0x19a49b
    int32_t * v12 = (int32_t *)(v10 + 23); // 0x19a49e
    *v12 = *v12 + (int32_t)v10;
    __asm_out((int16_t)(v11 / 0x100000000), (char)v11);
    __asm_out_133(-102, (int32_t)v11);
    int32_t * v13 = (int32_t *)(8 * v1 + a4); // 0x19a4b2
    *v13 = *v13 + (int32_t)v8;
    return unknown_50cb4ec2();
}

// Address range: 0x19a4c5 - 0x19a4f8
int64_t function_19a4c5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x19a4c5
    int64_t v1; // 0x19a4c5
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v1 - 0x1eafe18); // 0x19a4c5
    *v3 = *v3 - (int32_t)a4;
    char v4 = *(char *)(a3 + 3); // 0x19a4d1
    int32_t * v5 = (int32_t *)((v2 & -256 | (int64_t)(v4 + (char)v2)) + 0x60001c00); // 0x19a4d6
    *v5 = *v5 + (int32_t)v1;
    char * v6 = (char *)(2 * a1 - 0x2965ba3f + a4); // 0x19a4e1
    *v6 = *v6 + (char)(a4 / 256);
    unknown_3b177bee();
    return a2 & 0xffffffff;
}

// Address range: 0x19a4f9 - 0x19a4fc
int64_t function_19a4f9(void) {
    // 0x19a4f9
    int64_t v1; // 0x19a4f9
    int64_t v2 = v1;
    bool v3; // 0x19a4f9
    return (v2 + 5 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x19a50f - 0x19a518
int64_t function_19a50f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19a50f
    bool v1; // 0x19a50f
    if (v1) {
        // 0x19a517
        return __asm_wait(a1, a2, a3);
    }
    // 0x19a511
    int64_t result; // 0x19a50f
    return result;
}

// Address range: 0x19a51a - 0x19a5dd
int64_t function_19a51a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x19a51a
    int64_t v1; // 0x19a51a
    int32_t v2 = v1; // 0x19a51a
    __asm_out_133(23, v2);
    bool v3; // 0x19a51a
    if (v3 || v3) {
        // 0x19a51e
        return unknown_122f352a();
    }
    // 0x19a599
    unknown_34f0b5b1();
    int32_t v4 = *(int32_t *)(v1 - 0x2ffa022b); // 0x19a5b0
    int64_t result = unknown_ffffffffd7b505c0(); // 0x19a5ba
    *(char *)v1 = (char)v1;
    if ((v2 + 0x636d575c || 0x69892757) < 1) {
        int32_t * v5 = (int32_t *)(a1 + 104); // 0x19a57f
        int32_t v6 = result; // 0x19a57f
        *v5 = *v5 + v6;
        char * v7 = (char *)(a3 - 0x27f374cf + 8 * result); // 0x19a582
        *v7 = 2 * *v7;
        int32_t * v8 = (int32_t *)(result + 8 * v1); // 0x19a589
        *v8 = *v8 | v6;
        int32_t * v9 = (int32_t *)((-0x11045ff6 * (int64_t)v4 & 0xfffffffe) - 0x6e585c0c); // 0x19a58c
        *v9 = *v9 + (int32_t)v1;
        char * v10 = (char *)(a3 - 0x2f54f734); // 0x19a592
        *v10 = *v10 + (char)(v1 / 256);
        return result;
    }
    char * v11 = (char *)(v1 - 0x178ec000); // 0x19a5c4
    *v11 = 2 * *v11;
    int32_t * v12 = (int32_t *)(result - 0x17fec270); // 0x19a5ca
    *v12 = *v12 + (int32_t)a3;
    int64_t v13 = result + v1; // 0x19a5d0
    int32_t * v14 = (int32_t *)(a3 - 42); // 0x19a5d2
    *v14 = *v14 + (int32_t)v1;
    uint64_t v15 = (0x100000000 * v13 >> 32) * (int64_t)*(int32_t *)(v13 & 0xffffffff); // 0x19a5d7
    int64_t result2 = v15 & 0xffffffff; // 0x19a5d7
    char * v16 = (char *)(result2 - 34); // 0x19a5da
    *v16 = *v16 - (char)(v15 / 0x100000000);
    return result2;
}

// Address range: 0x19a61b - 0x19a61c
int64_t function_19a61b(int64_t a1) {
    // 0x19a61b
    int64_t result; // 0x19a61b
    return result;
}

// Address range: 0x19a623 - 0x19a63d
int64_t function_19a623(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x19a623
    int64_t v1; // 0x19a623
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x19a623
    if (v3 != 0) {
        bool v4; // 0x19a623
        *(int32_t *)v2 = (int32_t)v4 << v3 - 1 | (int32_t)v2 << v3 | (int32_t)((v2 & 0xffffffff) >> (int64_t)(33 - v3));
    }
    return unknown_ffffffffec27d42b();
}

// Address range: 0x229c66 - 0x229c69
int64_t function_229c66(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 103); // 0x229c66
    *v1 = *v1 + (int32_t)a2;
    int64_t result; // 0x229c66
    return result;
}

// Address range: 0x229c6d - 0x229c6e
int64_t function_229c6d(void) {
    // 0x229c6d
    int64_t result; // 0x229c6d
    return result;
}

// Address range: 0x229c77 - 0x229c83
int64_t function_229c77(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x229c77
    int64_t v1; // 0x229c77
    int64_t v2 = v1;
    bool v3; // 0x229c77
    int64_t v4 = v2 & -256 | (int64_t)v3 | 2 * v2 & 254; // 0x229c77
    *(char *)a3 = (char)a4;
    unsigned char v5 = (char)v1; // 0x229c7b
    unsigned char v6 = *(char *)(v4 + 0x270b21f1); // 0x229c7b
    char v7 = v5 - v6; // 0x229c7b
    return v4 & -0xff01 | 256 * (64 * (int64_t)(v7 == 0) | (int64_t)(v6 > v5) | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v5 % 16 - v6 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v7) % 2 == 0)) | 512;
}

// Address range: 0x229c83 - 0x229c85
int64_t function_229c83(void) {
    // 0x229c83
    return function_229c6d();
}

// Address range: 0x229ca3 - 0x229ca4
int64_t function_229ca3(void) {
    // 0x229ca3
    int64_t result; // 0x229ca3
    return result;
}

// Address range: 0x229cb2 - 0x229cb3
int64_t function_229cb2(void) {
    // 0x229cb2
    int64_t result; // 0x229cb2
    return result;
}

// Address range: 0x229cc9 - 0x229ccc
int64_t function_229cc9(int64_t a1) {
    // 0x229cc9
    int64_t result; // 0x229cc9
    return result;
}

// Address range: 0x229ccc - 0x229cdb
int64_t function_229ccc(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_21a566d5(); // 0x229ccf
    int64_t v2; // 0x229ccc
    __asm_outsd((int16_t)a3, (int32_t)v2);
    *(char *)a3 = ((char)v1 & -9) + (char)v2;
    return function_229ca3();
}

// Address range: 0x229ce1 - 0x229ce5
int64_t function_229ce1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x229ce1
    int64_t result; // 0x229ce1
    return result;
}

// Address range: 0x229cec - 0x229d4f
int64_t function_229cec(int64_t a1, int64_t a2) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3 = unknown_13fc2ff5(); // 0x229cef
    int64_t v4; // 0x229cec
    char v5 = (uint64_t)v4 / 256; // 0x229cf4
    char v6 = v3 / 256; // 0x229cf4
    char v7 = v6 + v5; // 0x229cf4
    int64_t v8 = v3; // 0x229cf6
    if (v7 < 1) {
        v8 = function_229cb2();
    }
    int64_t result = v8;
    if (v7 < 0 == ((v7 ^ v5) & (v7 ^ v6)) < 0 != v7 != 0) {
        // 0x229cfa
        return result;
    }
    // 0x229d4a
    *(int32_t *)a2 = 2 * (int32_t)a2;
    unsigned char v9 = *(char *)&v2; // 0x229d4c
    return (result - (*(char *)&v1 < v9 ? 164 : 163)) % 256 | result & -256;
}

// Address range: 0x229d5c - 0x229d6a
int64_t function_229d5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 + 94); // 0x229d5f
    int64_t v2; // 0x229d5c
    *v1 = *v1 | (char)((uint64_t)v2 / 256);
    uint32_t v3 = (int32_t)a4 % 32; // 0x229d62
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)(a1 + 75); // 0x229d62
        *v4 = *v4 << v3;
    }
    return unknown_361d7e6b(a1, a2, a3, a4);
}

// Address range: 0x229db5 - 0x229db6
int64_t function_229db5(void) {
    // 0x229db5
    int64_t result; // 0x229db5
    return result;
}

// Address range: 0x229dbf - 0x229dc2
int64_t function_229dbf(void) {
    // 0x229dbf
    return function_229db5();
}

// Address range: 0x229dd4 - 0x229ddb
int64_t function_229dd4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x229dd4
    int64_t v1; // 0x229dd4
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a3;
    return function_ffffffff9af6e012();
}

// Address range: 0x229e5c - 0x229e7e
int64_t function_229e5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x229e5c
    bool v1; // 0x229e5c
    int32_t v2 = v1 ? -1 : 1; // 0x229e62
    char v3 = *(char *)-0x78bd5693; // 0x229e66
    int64_t v4; // 0x229e5c
    char v5 = v4 / 256; // 0x229e66
    char v6 = v3 + v5; // 0x229e66
    *(char *)-0x78bd5693 = v6;
    int32_t v7 = *(int32_t *)(v4 + 0x7b006f08); // 0x229e6c
    int64_t v8 = v1 ? -1 : 1; // 0x229e72
    int64_t result = __asm_sti(v2 + (int32_t)a1, v8 + (int64_t)(v2 + (int32_t)a2), v7); // 0x229e74
    if (v6 < 0 != ((v6 ^ v3) & (v6 ^ v5)) < 0) {
        result = function_20ed8ec();
    }
    // 0x229e7a
    return result;
}

// Address range: 0x229ea4 - 0x229ea6
int64_t function_229ea4(int64_t a1) {
    // 0x229ea4
    int64_t result; // 0x229ea4
    return result;
}

// Address range: 0x229eac - 0x229ed2
int64_t function_229eac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 - 7); // 0x229ebe
    int64_t v2; // bp-8, 0x229eac
    *v1 = *v1 + (int32_t)(int64_t)&v2;
    return 0x3f01e87b * a4 + 0xb6ba83ba & 0xffffffff;
}

// Address range: 0x229f08 - 0x229f0d
int64_t function_229f08(void) {
    // 0x229f08
    return function_ffffffff8fb2b63b();
}

// Address range: 0x229f17 - 0x229f2c
int64_t function_229f17(int64_t a1, int64_t a2, int64_t a3) {
    // 0x229f17
    int64_t v1; // 0x229f17
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    __asm_outsd((int16_t)a3, *(int32_t *)0x60cb013d);
    int64_t result; // 0x229f17
    int64_t v3 = result;
    *(char *)v3 = *(char *)&result + (char)v3;
    char v4 = *(char *)-0x3619c6d4; // 0x229f25
    *(char *)-0x3619c6d4 = v4 + (char)((uint64_t)v1 / 256);
    return result;
}

// Address range: 0x229f2d - 0x229f2e
int64_t function_229f2d(void) {
    // 0x229f2d
    int64_t result; // 0x229f2d
    return result;
}

// Address range: 0x229f69 - 0x229f6f
int64_t function_229f69(void) {
    // 0x229f69
    return function_3d233490();
}

// Address range: 0x229f8f - 0x229fb4
int64_t function_229f8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a5 - 0x13078f5); // 0x229f90
    *v1 = *v1 + (int32_t)a4;
    int64_t v2 = unknown_83b5a6(); // 0x229fa0
    return v2 + 0x2e65a9b2 + (int64_t)((int32_t)v2 < 0x2ca6a601) & 0xffffffff;
}

// Address range: 0x22a0fb - 0x22a101
int64_t function_22a0fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x22a0fb
    int64_t result; // 0x22a0fb
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x22a101 - 0x22a106
int64_t function_22a101(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x22a101
    int64_t result; // 0x22a101
    *(char *)a3 = (char)result + (char)(a3 / 256);
    return result;
}

// Address range: 0x22a113 - 0x22a117
int64_t function_22a113(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x22a113
    int64_t result; // 0x22a113
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x22a15c - 0x22a161
int64_t function_22a15c(int64_t a1) {
    // 0x22a15c
    int64_t result; // 0x22a15c
    return result;
}

// Address range: 0x22a199 - 0x22a19a
int64_t function_22a199(void) {
    // 0x22a199
    int64_t result; // 0x22a199
    return result;
}

// Address range: 0x22a1c4 - 0x22a1c5
int64_t function_22a1c4(void) {
    // 0x22a1c4
    int64_t result; // 0x22a1c4
    return result;
}

// Address range: 0x22a1c9 - 0x22a228
int64_t function_22a1c9(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffff91b1bfd7(); // 0x22a1cd
    unsigned char v2 = (char)unknown_fffffffff7491ee7(); // 0x22a1e6
    if (v2 != -58) {
        function_22a199();
    }
    if (v2 > 197) {
        function_22a1c4();
    }
    // 0x22a1ec
    int64_t v3; // 0x22a1c9
    int64_t v4 = (int64_t)*(int32_t *)(v3 + 8 * v3); // 0x22a1c9
    int64_t v5 = unknown_ffffffffce86aaf2(); // 0x22a1ec
    *(int32_t *)a1 = (int32_t)v5;
    int16_t v6 = a3; // 0x22a1f2
    __asm_outsd(v6, *(int32_t *)v4);
    *(char *)(v5 & 0xffffffff) = __asm_insb(v6);
    char * v7 = (char *)(4 * a4 + 98 + v4); // 0x22a1f9
    *v7 = *v7 | (char)(a3 / 256);
    bool v8; // 0x22a1c9
    *(int64_t *)((v1 + v3 & 0xffffffff) - 8) = (v8 ? 0xfffffffc : 4) + a1 & 0xffffffff;
    unknown_ffffffffd9c51008();
    return __asm_in(v6);
}

// Address range: 0x22a248 - 0x22a24a
int64_t function_22a248(void) {
    // 0x22a248
    int64_t result; // 0x22a248
    return result;
}

// Address range: 0x22a24a - 0x22a257
int64_t function_22a24a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x22a24a
    *(char *)a1 = (char)a4;
    int64_t v1; // 0x22a24a
    return v1 & -256 | (int64_t)__asm_in_134(79);
}
