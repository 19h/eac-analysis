/*
 * Targeted RetDec C for native executable gap queue batch 412.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xd4dc7-0xd4fc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd4fc7-0xd51c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd51c7-0xd53c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd53c7-0xd55c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd55c7-0xd57c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2326b6-0x2328b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2328b6-0x232ab6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x232ab6-0x232cb6 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_14a55f0();
int64_t function_16462e1e();
int64_t function_17cb595e();
int64_t function_2326b6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2326b9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2326c7(int64_t a1, int64_t a2);
int64_t function_2326cd(int64_t a1);
int64_t function_23270e(int64_t a1, int64_t a2);
int64_t function_23271e(void);
int64_t function_232740(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_232768(int64_t a1);
int64_t function_232770(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_23281a(void);
int64_t function_232828(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2328b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2328ca(int64_t a1);
int64_t function_2328d8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23298e(void);
int64_t function_2329bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2329e3(int64_t a1);
int64_t function_232a81(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_232aa1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_232adf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_232ba7(int64_t a1);
int64_t function_232bbc(void);
int64_t function_232c31(void);
int64_t function_290f3749();
int64_t function_712466cd();
int64_t function_845160();
int64_t function_d4dc7(void);
int64_t function_d4dd5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d4e76(int64_t a1);
int64_t function_d4e83(void);
int64_t function_d4ecd(int64_t a1);
int64_t function_d4f0c(int64_t a1);
int64_t function_d4f1a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d4f65(int64_t a1, int64_t a2);
int64_t function_d4f70(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d4f80(void);
int64_t function_d4f82(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d50c0(void);
int64_t function_d50d4(void);
int64_t function_d511c(void);
int64_t function_d5192(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d5196(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d5227(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d528a(int64_t a1, int64_t a2);
int64_t function_d52b1(void);
int64_t function_d5305(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_d5430(void);
int64_t function_d5437(void);
int64_t function_d5473(void);
int64_t function_d547c(int64_t a1);
int64_t function_d549e(int64_t a1);
int64_t function_d54c1(void);
int64_t function_d54fb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d5511(void);
int64_t function_d5524(void);
int64_t function_d552e(int64_t a1);
int64_t function_d5537(void);
int64_t function_d553c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d554d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d5588(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d55cc(void);
int64_t function_d55dc(int32_t a1);
int64_t function_d5629(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d566b(int64_t a1);
int64_t function_ffffffffcf1bd71a();
int64_t function_ffffffffe6cd5679();
int64_t function_fffffffff283fbd4();
int64_t unknown_102e95c0();
int64_t unknown_1105b1e0();
int64_t unknown_1a2e2601();
int64_t unknown_2b2c4415();
int64_t unknown_376e9c2d();
int64_t unknown_3febd931();
int64_t unknown_47664fba();
int64_t unknown_5123cd70();
int64_t unknown_5c24c183();
int64_t unknown_6466a1ac();
int64_t unknown_6f6fd89f();
int64_t unknown_794188f4();
int64_t unknown_87d7d02();
int64_t unknown_8ed0cc7();
int64_t unknown_ac861d5();
int64_t unknown_ffffffff8e418506();
int64_t unknown_ffffffff8f9deecb();
int64_t unknown_ffffffff9116bbc4();
int64_t unknown_ffffffffb5727fa9();
int64_t unknown_ffffffffc4119042();
int64_t unknown_ffffffffdf1e14f7();
int64_t unknown_ffffffffe82464b9();
int64_t unknown_ffffffffe87eda9c();
int64_t unknown_fffffffff0c70792();
int64_t unknown_fffffffffeb3f838();

// Address range: 0xd4dc7 - 0xd4dc8
int64_t function_d4dc7(void) {
    // 0xd4dc7
    int64_t v1; // 0xd4dc7
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0xd4dd5 - 0xd4df1
int64_t function_d4dd5(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 0x3db18bd8); // 0xd4dd5
    int64_t v2; // 0xd4dd5
    *v1 = *v1 - (int32_t)v2;
    int32_t * v3 = (int32_t *)(a3 - 0x59f63f2); // 0xd4ddb
    *v3 = *v3 + (int32_t)a2;
    *(int32_t *)-0x17fec22e2dfe1795 = (int32_t)v2;
    int64_t v4; // 0xd4dd5
    *(int32_t *)a3 = *(int32_t *)&v4 + (int32_t)v2;
    return function_ffffffffcf1bd71a();
}

// Address range: 0xd4e76 - 0xd4e79
int64_t function_d4e76(int64_t a1) {
    // 0xd4e76
    int64_t result; // 0xd4e76
    return result;
}

// Address range: 0xd4e83 - 0xd4e88
int64_t function_d4e83(void) {
    // 0xd4e83
    return function_290f3749();
}

// Address range: 0xd4ecd - 0xd4ed0
int64_t function_d4ecd(int64_t a1) {
    // 0xd4ecd
    int64_t result; // 0xd4ecd
    return result;
}

// Address range: 0xd4f0c - 0xd4f0f
int64_t function_d4f0c(int64_t a1) {
    // 0xd4f0c
    int64_t result; // 0xd4f0c
    return result;
}

// Address range: 0xd4f1a - 0xd4f3c
int64_t function_d4f1a(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd4f1a
    int64_t v1; // 0xd4f1a
    int32_t v2 = *(int32_t *)(v1 - 0x7f67fe18); // 0xd4f1a
    unknown_376e9c2d();
    int32_t * v3 = (int32_t *)(int64_t)((int32_t)v1 - v2); // 0xd4f2c
    int32_t v4 = *v3 + (int32_t)a3; // 0xd4f2c
    *v3 = v4;
    int64_t result = __asm_int1(); // 0xd4f2f
    if (v4 < 0) {
        // 0xd4f6c
        return result;
    }
    // 0xd4f32
    return unknown_fffffffffeb3f838() | 197;
}

// Address range: 0xd4f65 - 0xd4f6c
int64_t function_d4f65(int64_t a1, int64_t a2) {
    // 0xd4f65
    int64_t v1; // 0xd4f65
    *(int32_t *)a2 = 2 * (int32_t)v1;
    return v1 + 0xe8b3dc48 & 0xffffffff;
}

// Address range: 0xd4f70 - 0xd4f79
int64_t function_d4f70(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)0x1f57177; // 0xd4f70
    int64_t result; // 0xd4f70
    *(char *)0x1f57177 = v1 + (char)((uint64_t)result / 256);
    *(char *)a3 = 2 * (char)result;
    return result;
}

// Address range: 0xd4f80 - 0xd4f81
int64_t function_d4f80(void) {
    // 0xd4f80
    int64_t result; // 0xd4f80
    return result;
}

// Address range: 0xd4f82 - 0xd4fdf
int64_t function_d4f82(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = *(int32_t *)0x4ad39321; // 0xd4f82
    uint32_t v2 = v1 + (int32_t)a4; // 0xd4f82
    *(int32_t *)0x4ad39321 = v2;
    int64_t v3; // 0xd4f82
    uint64_t v4 = (v3 + 0x8729013d & 0xffffffff) - 1; // 0xd4f96
    int64_t v5 = unknown_87d7d02(); // 0xd4f96
    if (v4 != 0 && (v2 < v1 ? 59 : 58) != (char)a4) {
        v5 = function_d4f80();
    }
    int64_t v6 = v5 + v3; // 0xd4f98
    uint32_t v7 = *(int32_t *)-0x4f61c85f; // 0xd4f9a
    int32_t v8 = a1; // 0xd4f9a
    uint32_t v9 = v7 + v8; // 0xd4f9a
    *(int32_t *)-0x4f61c85f = v9;
    int64_t v10 = v9 < v7 ? 213 : 214; // 0xd4fa0
    int32_t * v11 = (int32_t *)(a3 - 47); // 0xd4fa7
    *v11 = *v11 + v8;
    bool v12; // 0xd4f82
    int64_t v13 = v12 ? -4 : 4; // 0xd4fbb
    int64_t v14 = v13 + a1; // 0xd4fbb
    *(int32_t *)v14 = (int32_t)((v6 + v4 / 256 + v10) % 256 | v6 & 0xffffff00);
    int64_t v15 = unknown_ffffffff9116bbc4(v14 + v13); // 0xd4fbd
    char * v16 = (char *)(v15 + 0x1e85e05); // 0xd4fc3
    *v16 = *v16 + (char)v15;
    __asm_out((int16_t)a3 & -256 | 32, (int32_t)v15);
    return v15 & -256 | (int64_t)*(char *)0x7401e89e05b57fc7;
}

// Address range: 0xd50c0 - 0xd50c3
int64_t function_d50c0(void) {
    // 0xd50c0
    int64_t result; // 0xd50c0
    return result;
}

// Address range: 0xd50d4 - 0xd50e4
int64_t function_d50d4(void) {
    // 0xd50d4
    __asm_in_133(-25);
    unknown_1105b1e0();
    int64_t v1; // 0xd50d4
    return v1 & 0xffffffff;
}

// Address range: 0xd511c - 0xd5123
int64_t function_d511c(void) {
    // 0xd511c
    int64_t v1; // 0xd511c
    return function_d5196(v1, v1, v1);
}

// Address range: 0xd5192 - 0xd5196
int64_t function_d5192(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd5192
    int64_t result; // 0xd5192
    return result;
}

// Address range: 0xd5196 - 0xd51a8
int64_t function_d5196(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd5196
    unknown_ffffffffe87eda9c();
    __asm_in_133(63);
    __asm_in_134((int16_t)a3);
    return unknown_ffffffffb5727fa9();
}

// Address range: 0xd5227 - 0xd5230
int64_t function_d5227(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 1); // 0xd522c
    int64_t v2; // 0xd5227
    *v1 = *v1 + (int32_t)v2;
    return v2 & 0x17ff7fff | 0xe8008000;
}

// Address range: 0xd528a - 0xd528e
int64_t function_d528a(int64_t a1, int64_t a2) {
    // 0xd528a
    int64_t result; // 0xd528a
    int32_t * v1 = (int32_t *)(result - 38); // 0xd528a
    *v1 = *v1 + (int32_t)a1;
    return result;
}

// Address range: 0xd52b1 - 0xd52be
int64_t function_d52b1(void) {
    // 0xd52b1
    int64_t v1; // 0xd52b1
    int64_t v2 = v1;
    char v3 = *(char *)(v1 + 0x1e84f52 & 0xffffffff); // 0xd52b1
    return v2 & -0x10000 | (int64_t)((256 * (int16_t)v2 >> 8) * (int16_t)v3);
}

// Address range: 0xd5305 - 0xd53c4
int64_t function_d5305(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t v2; // 0xd5305
    uint16_t v3 = (int16_t)v2; // 0xd5307
    uint16_t v4 = (int16_t)a1 % 256; // 0xd5307
    uint16_t v5 = v3 % v4; // 0xd5307
    int64_t v6 = v2 & -0x10000 | (int64_t)(v3 / v4 % 256) | (int64_t)(256 * v5); // 0xd5307
    bool v7; // 0xd5305
    if (v7) {
        int32_t * v8 = (int32_t *)v6; // 0xd5311
        *v8 = *v8 + (int32_t)v6;
        return v1 + (v7 ? 0xffffffff : 1) & 0xffffffff;
    }
    int64_t v9 = -24; // bp-8, 0xd5392
    uint64_t v10 = ((int64_t)&v9 + a4 & 0xffffffff) - 1; // 0xd53a0
    if (v10 == 0 | *(int32_t *)(a2 + 0x2a0588ce) == 0x5cbc01e8) {
        char * v11 = (char *)(2 * a3); // 0xd53b1
        *v11 = *v11 + (char)(v10 / 256);
        unknown_47664fba();
        *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v2;
        return (int64_t)*(int32_t *)0x7242bf01e842e25c;
    }
    // 0xd532e
    *(int32_t *)a1 = (int32_t)a2;
    int64_t v12 = v7 ? -4 : 4; // 0xd5330
    int64_t v13 = v1 + v12; // 0xd5330
    int64_t v14 = v12 + a2; // 0xd5330
    char * v15 = (char *)(8 * a3 - 20 + v14); // 0xd5334
    *v15 = *v15 + (char)v5;
    int64_t v16 = v6 & 0xffffff00 | 21; // 0xd5341
    int32_t * v17 = (int32_t *)(v13 + 109); // 0xd534e
    *v17 = *v17 + (int32_t)v16;
    __asm_out_135((int16_t)a3, *(char *)0x1711013d756a420a);
    int64_t v18 = __asm_iretd((int64_t)&g2, (int64_t)&g2, (int64_t)&g2); // 0xd5357
    *(char *)v13 = (char)v18;
    int64_t v19 = function_845160(v13 + (v7 ? -1 : 1)); // 0xd535a
    char * v20 = (char *)(v16 + 0x1e84a52); // 0xd5363
    *v20 = *v20 - (char)v10;
    return v19 & -256 | (int64_t)(*(char *)v14 + (char)v19);
}

// Address range: 0xd5430 - 0xd5431
int64_t function_d5430(void) {
    // 0xd5430
    int64_t result; // 0xd5430
    return result;
}

// Address range: 0xd5437 - 0xd5438
int64_t function_d5437(void) {
    // 0xd5437
    int64_t result; // 0xd5437
    return result;
}

// Address range: 0xd5473 - 0xd547a
int64_t function_d5473(void) {
    // 0xd5473
    return function_d5430();
}

// Address range: 0xd547c - 0xd547f
int64_t function_d547c(int64_t a1) {
    // 0xd547c
    int64_t result; // 0xd547c
    return result;
}

// Address range: 0xd549e - 0xd549f
int64_t function_d549e(int64_t a1) {
    // 0xd549e
    int64_t result; // 0xd549e
    return result;
}

// Address range: 0xd54c1 - 0xd54ce
int64_t function_d54c1(void) {
    // 0xd54c1
    int64_t result; // 0xd54c1
    return result;
}

// Address range: 0xd54fb - 0xd550e
int64_t function_d54fb(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd54fb
    float80_t v1; // 0xd54fb
    *(int16_t *)a2 = (int16_t)v1;
    int64_t v2; // 0xd54fb
    *(int32_t *)v2 = (int32_t)v1;
    return function_14a55f0();
}

// Address range: 0xd5511 - 0xd5512
int64_t function_d5511(void) {
    // 0xd5511
    int64_t result; // 0xd5511
    return result;
}

// Address range: 0xd5524 - 0xd552b
int64_t function_d5524(void) {
    // 0xd5524
    return function_fffffffff283fbd4();
}

// Address range: 0xd552e - 0xd5532
int64_t function_d552e(int64_t a1) {
    // 0xd552e
    int64_t result; // 0xd552e
    return result;
}

// Address range: 0xd5537 - 0xd553c
int64_t function_d5537(void) {
    // 0xd5537
    return function_ffffffffe6cd5679();
}

// Address range: 0xd553c - 0xd554d
int64_t function_d553c(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd553c
    int64_t v1; // 0xd553c
    *(int32_t *)-0x37d0ff975d24c573 = (int32_t)v1;
    unsigned char v2 = (char)v1;
    unsigned char v3 = (char)v1;
    char v4 = v2 - v3; // 0xd554a
    return v1 & -0xff01 | 256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v2 < v3) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v2 % 16 - v3 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v4) % 2 == 0)) | 512;
}

// Address range: 0xd554d - 0xd5587
int64_t function_d554d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd554d
    int64_t v1; // 0xd554d
    *(char *)0x18d04c54 = *(char *)0x18d04c54 + (char)(v1 / 256);
    int64_t v2 = -0x30fec300 * (0x100000000 * v1 >> 32); // 0xd5562
    *(char *)((v2 & 0xffffff00) + 0x646d5003) = 0;
    *(int32_t *)a1 = (int32_t)v2;
    int32_t v3 = *(int32_t *)(a3 & -0xff01 | (int64_t)&g1); // 0xd5576
    bool v4; // 0xd554d
    return function_17cb595e((int32_t)((v4 ? 0xfffffffc : 4) + a1) - v3);
}

// Address range: 0xd5588 - 0xd5590
int64_t function_d5588(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 0x740073c8); // 0xd5588
    *v1 = *v1 + (int32_t)a1;
    return function_d5511();
}

// Address range: 0xd55cc - 0xd55cf
int64_t function_d55cc(void) {
    // 0xd55cc
    int64_t result; // 0xd55cc
    return result;
}

// Address range: 0xd55dc - 0xd55e1
int64_t function_d55dc(int32_t a1) {
    // 0xd55dc
    return function_17cb595e(a1);
}

// Address range: 0xd5629 - 0xd562c
int64_t function_d5629(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd5629
    int64_t result; // 0xd5629
    return result;
}

// Address range: 0xd566b - 0xd5676
int64_t function_d566b(int64_t a1) {
    // 0xd566b
    int64_t v1; // 0xd566b
    return v1 - 0x565cfe18;
}

// Address range: 0x2326b6 - 0x2326b7
int64_t function_2326b6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2326b6
    int64_t v1; // 0x2326b6
    return v1 & -256 | (int64_t)__asm_in((int16_t)a3);
}

// Address range: 0x2326b9 - 0x2326c0
int64_t function_2326b9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2326b9
    int64_t v1; // 0x2326b9
    uint64_t v2 = v1;
    char v3 = *(char *)(a3 - 0x788c766f); // 0x2326b9
    return 256 * (int64_t)(v3 + (char)(v2 / 256)) | v2 & -0xff01;
}

// Address range: 0x2326c7 - 0x2326c9
int64_t function_2326c7(int64_t a1, int64_t a2) {
    // 0x2326c7
    return a1 & 0xffffffff;
}

// Address range: 0x2326cd - 0x2326ce
int64_t function_2326cd(int64_t a1) {
    // 0x2326cd
    int64_t result; // 0x2326cd
    return result;
}

// Address range: 0x23270e - 0x232717
int64_t function_23270e(int64_t a1, int64_t a2) {
    // 0x23270e
    return a1 & 0xffffffff;
}

// Address range: 0x23271e - 0x232721
int64_t function_23271e(void) {
    // 0x23271e
    int64_t result; // 0x23271e
    return result;
}

// Address range: 0x232740 - 0x232763
int64_t function_232740(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = *(int32_t *)-0x443790a83dd8e500; // 0x23274d
    return ((int64_t)v1 + 105 + (int64_t)(v1 < 0xaca3bd01)) % 256 | (int64_t)(v1 & -256);
}

// Address range: 0x232768 - 0x23276b
int64_t function_232768(int64_t a1) {
    // 0x232768
    int64_t v1; // 0x232768
    int64_t v2 = v1;
    return (v2 & 0xff00) + v2 & 0xff00 | v2 & -0xff01;
}

// Address range: 0x232770 - 0x232800
int64_t function_232770(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x232770
    int64_t v1; // 0x232770
    int32_t * v2 = (int32_t *)(v1 - 37); // 0x232770
    *v2 = *v2 + (int32_t)v1;
    int64_t v3; // 0x232770
    *(char *)(a1 & 0xffffffff) = *(char *)&v3;
    bool v4; // 0x232770
    int32_t v5 = v4 ? -1 : 1; // 0x232778
    int64_t v6 = v5 + (int32_t)a2; // 0x232778
    v3 = v6;
    int64_t v7 = a4 - 1; // 0x23277a
    if (v7 == 0) {
        // 0x23277c
        int64_t result; // 0x232770
        return result;
    }
    // 0x2327df
    int3_t v8; // 0x232770
    float80_t v9 = __frontend_reg_load_fpr(v8); // 0x2327e0
    __frontend_reg_store_fpr(v8, v9 + (float80_t)*(float64_t *)(v1 + 75));
    int32_t * v10 = (int32_t *)(v6 - 0xff86ffd); // 0x2327e6
    *v10 = *v10 + (int32_t)v1;
    int64_t v11 = unknown_794188f4(); // 0x2327ee
    __asm_rcl(*(int32_t *)v7);
    int64_t v12 = a4 - 2; // 0x2327f7
    if (v12 == 0) {
        // 0x2327fa
        return unknown_1a2e2601();
    }
    int64_t v13 = v5 + (int32_t)a1; // 0x232778
    char * v14 = (char *)(v1 + 8 * v1); // 0x2327a3
    *v14 = *v14 + (char)v11;
    unknown_6466a1ac();
    *(int32_t *)v13 = __asm_insd((int16_t)a3);
    int32_t v15 = *(int32_t *)(v1 - 113); // 0x2327ac
    *(char *)(v13 - 11) = (char)((v15 ^ (int32_t)a3) / 256);
    *(int64_t *)(v1 - 8) = 0xe711d65e;
    int64_t v16 = unknown_ffffffffe82464b9(); // 0x2327b3
    int32_t * v17 = (int32_t *)(v13 - 0x4c3b8b77); // 0x2327b8
    *v17 = *v17 - 0x18ee29a2;
    char * v18 = (char *)v16; // 0x2327be
    *v18 = *v18 + (char)v16;
    int32_t * v19 = (int32_t *)(4 * v12 + 117 + v1); // 0x2327c5
    *v19 = *v19 + (int32_t)v3;
    int64_t result2 = unknown_ac861d5(); // 0x2327ce
    int32_t * v20 = (int32_t *)result2; // 0x2327d6
    uint32_t v21 = *v20; // 0x2327d6
    uint32_t v22 = (int32_t)v12 % 32; // 0x2327d6
    if (v22 != 0) {
        *v20 = v21 >> 32 - v22 | v21 << v22;
    }
    // 0x23277c
    return result2;
}

// Address range: 0x23281a - 0x23281b
int64_t function_23281a(void) {
    // 0x23281a
    int64_t result; // 0x23281a
    return result;
}

// Address range: 0x232828 - 0x232893
int64_t function_232828(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x232828
    int64_t v1; // 0x232828
    int32_t * v2 = (int32_t *)(v1 - 0x44133b4e); // 0x232828
    *v2 = *v2 + (int32_t)a4;
    int64_t v3 = unknown_5123cd70(); // 0x23286a
    int32_t * v4 = (int32_t *)v3; // 0x23286f
    *v4 = *v4 + (int32_t)v1;
    char * v5 = (char *)(a1 + 0x25434336); // 0x232873
    *v5 = *v5 + (char)(a4 / 256);
    unknown_5c24c183();
    *(int32_t *)(v1 + 9) = (int32_t)v3 >> 31;
    __asm_iretd((int64_t)&g2, (int64_t)&g2, (int64_t)&g2);
    unknown_fffffffff0c70792();
    return function_23281a();
}

// Address range: 0x2328b0 - 0x2328b3
int64_t function_2328b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2328b0
    int64_t result; // 0x2328b0
    return result;
}

// Address range: 0x2328ca - 0x2328cb
int64_t function_2328ca(int64_t a1) {
    // 0x2328ca
    int64_t result; // 0x2328ca
    return result;
}

// Address range: 0x2328d8 - 0x2328e7
int64_t function_2328d8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2328d8
    int64_t v1; // 0x2328d8
    *(int32_t *)-0x9b4c4d714e761c6 = (int32_t)v1;
    return __asm_iretd(a1, a2, a3);
}

// Address range: 0x23298e - 0x23298f
int64_t function_23298e(void) {
    // 0x23298e
    int64_t result; // 0x23298e
    return result;
}

// Address range: 0x2329bf - 0x2329cd
int64_t function_2329bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2329bf
    unknown_8ed0cc7(a1, a2, a3, a4);
    int64_t v1; // 0x2329bf
    bool v2; // 0x2329bf
    if (a4 != 1 == (v2 ? -69 : -70) == (char)v1) {
        function_23298e();
    }
    // 0x2329c8
    return function_712466cd();
}

// Address range: 0x2329e3 - 0x2329eb
int64_t function_2329e3(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 0x1d41c80e); // 0x2329e3
    *v1 = *v1 + (int32_t)a1;
    int64_t result; // 0x2329e3
    return result;
}

// Address range: 0x232a81 - 0x232aa1
int64_t function_232a81(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x232a81
    int64_t v1; // 0x232a81
    int32_t * v2 = (int32_t *)(a3 + 0x108f00cb + 8 * v1); // 0x232a86
    *v2 = *v2 + (int32_t)a4;
    char v3 = __asm_in((int16_t)a3); // 0x232a8d
    int32_t * v4 = (int32_t *)(a2 + 0x834802); // 0x232a91
    *v4 = *v4 + (int32_t)a2;
    *(char *)a1 = v3;
    bool v5; // 0x232a81
    return unknown_6f6fd89f((v5 ? -1 : 1) + a1);
}

// Address range: 0x232aa1 - 0x232add
int64_t function_232aa1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x232aa1
    int64_t v1; // 0x232aa1
    bool v2; // 0x232aa1
    int64_t v3 = 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | v1 & -0xff01; // 0x232aa1
    if (v2 || v2) {
        // 0x232ade
        return v3 | 512;
    }
    // 0x232aa4
    *(int32_t *)a1 = (int32_t)a2;
    int64_t v4 = v2 ? -4 : 4; // 0x232aa4
    int64_t v5 = v4 + a1; // 0x232aa4
    int32_t v6 = (int32_t)v3 & -0x25e1fe18; // 0x232aa5
    unsigned char v7 = llvm_ctpop_i8((char)v6); // 0x232aa5
    unsigned char v8 = *(char *)-0x17d488ea; // 0x232aac
    *(char *)-0x17d488ea = v8 / 128 | 2 * v8;
    int32_t * v9 = (int32_t *)(a3 + 114 + v5); // 0x232ab3
    *v9 = (int32_t)a3;
    *(int64_t *)v1 = v3 & 0xda1e00e8 | 0x4000 * (int64_t)(v6 == 0) | 0x8000 * (int64_t)(v6 < 0) | 1024 * (int64_t)(v7 % 2 == 0) | 512;
    unknown_102e95c0(v5, v4 + a2, *v9);
    char * v10 = (char *)(v1 + 11); // 0x232abf
    *v10 = *v10 | (char)(v1 / 256);
    int64_t v11 = unknown_ffffffff8f9deecb(); // 0x232ac5
    uint64_t v12 = v11 + 22; // 0x232acb
    int64_t result = v12 % 256 | v11 & -256; // 0x232acb
    char v13 = v12; // 0x232acd
    *(char *)-0x1707c025 = *(char *)-0x1707c025 | v13;
    char * v14 = (char *)(result + 0x35eea00); // 0x232ad7
    *v14 = *v14 + v13;
    return result;
}

// Address range: 0x232adf - 0x232b47
int64_t function_232adf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2; // 0x232adf
    int32_t * v3 = (int32_t *)(v2 + 0x6c009900); // 0x232ae1
    int32_t v4 = *v3; // 0x232ae1
    int32_t v5 = a1; // 0x232ae1
    int32_t v6 = v4 + v5; // 0x232ae1
    *v3 = v6;
    int16_t v7 = a3;
    int32_t v8 = __asm_in_134(v7); // 0x232ae7
    int16_t v9; // 0x232adf
    int64_t v10; // 0x232adf
    int64_t v11; // 0x232adf
    if (v6 < 0 == ((v6 ^ v4) & (v6 ^ v5)) < 0 == (v6 != 0)) {
        int32_t * v12 = (int32_t *)(v2 + 21); // 0x232b1f
        *v12 = *v12 + v8;
        bool v13; // 0x232adf
        int64_t v14 = (v13 ? -4 : 4) + a1; // 0x232b22
        char * v15 = (char *)(a2 + 0x79840093); // 0x232b23
        *v15 = *v15 + (char)(v2 / 256);
        int64_t v16 = unknown_3febd931(v14); // 0x232b2b
        v9 = v7;
        v10 = v16;
        v11 = v14;
        if ((*(int32_t *)&v1 & v8) >= 0) {
            // 0x232b32
            unknown_ffffffffc4119042();
            __asm_in(-0x40e2 * (int16_t)*(int32_t *)v16);
            return __asm_wait();
        }
    } else {
        char * v17 = (char *)(v1 + v2); // 0x232aeb
        *v17 = *v17 + (char)v2;
        int64_t v18 = unknown_ffffffffdf1e14f7(); // 0x232af1
        char * v19 = (char *)(v2 + 112); // 0x232af6
        *v19 = *v19 / 2;
        v9 = v8 >> 31;
        v10 = v18;
        v11 = a1;
    }
    // 0x232af9
    __asm_out_136(0, (char)v10);
    __asm_in_137(-110);
    unknown_ffffffff8e418506();
    *(char *)v11 = __asm_insb(v9);
    int32_t * v20 = (int32_t *)unknown_2b2c4415(); // 0x232b14
    *v20 = *v20 & -0x2972f3fa;
    return __asm_int3();
}

// Address range: 0x232ba7 - 0x232bb1
int64_t function_232ba7(int64_t a1) {
    // 0x232ba7
    return (int64_t)*(int32_t *)0x7d7f63c41ab33a21;
}

// Address range: 0x232bbc - 0x232bbf
int64_t function_232bbc(void) {
    // 0x232bbc
    int64_t result; // 0x232bbc
    return result;
}

// Address range: 0x232c31 - 0x232c36
int64_t function_232c31(void) {
    // 0x232c31
    return function_16462e1e();
}
