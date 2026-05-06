/*
 * Targeted RetDec C for native executable gap queue batch 610.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x113bbf-0x113dbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x113dbf-0x113fbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x113fbf-0x1141bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1143bf-0x1145bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x12a0dc-0x12a2dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12a2dc-0x12a4dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12a4dc-0x12a6dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12a6dc-0x12a8dc rank=- name=- kind=- bytes=- uncovered=-
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
typedef struct { uint8_t bytes[32]; } int256_t;
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
int64_t unknown_b6ccb9(void);
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
int256_t __asm_vpcmpeqw(int256_t left, int256_t right);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psadbw(int128_t left, int128_t right);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_vpunpckhdq(int128_t left, int128_t right);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
int128_t __asm_pavgw(int128_t left, int128_t right);
int128_t __asm_pmaxub(int128_t left, int128_t right);
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

int64_t function_113bbf(int64_t a1, int64_t a2, int64_t a3, int32_t a4);
int64_t function_113d0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_113e5e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_113fc4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_114154(int64_t a1);
int64_t function_11416c(int64_t a1);
int64_t function_1141b2(void);
int64_t function_1141b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1143bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_11456a(void);
int64_t function_12a0dc(int64_t a1, int64_t a2);
int64_t function_12a14e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12a15a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12a1a0(int64_t a1);
int64_t function_12a1e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12a20a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12a25c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12a2b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12a2e3(void);
int64_t function_12a393(void);
int64_t function_12a3ae(void);
int64_t function_12a3ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12a3f8(void);
int64_t function_12a418(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12a459(int64_t a1);
int64_t function_12a460(void);
int64_t function_12a470(void);
int64_t function_12a491(void);
int64_t function_12a4a5(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_12a4b7(int64_t a1);
int64_t function_12a4c9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12a57d(void);
int64_t function_12a583(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12a5fc(void);
int64_t function_12a696(int64_t a1);
int64_t function_12a6c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12a776(void);
int64_t function_12a7a5(void);
int64_t function_12a7af(int64_t a1, int64_t a2);
int64_t function_12a7b1(int64_t a1);
int64_t function_12a829(void);
int64_t function_12a842(int64_t a1);
int64_t function_12a852(void);
int64_t function_12a86d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12a8ab(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12a8bb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_247c3148ff894c57();
int64_t function_24809d15();
int64_t function_392b45();
int64_t function_cf3c7();
int64_t function_ffffffffaeb02e7b();
int64_t function_ffffffffaf07f5c2();
int64_t unknown_19e200ac();
int64_t unknown_1faa3e7();
int64_t unknown_3a3200e8();
int64_t unknown_5ac0b2bb();
int64_t unknown_881161a();
int64_t unknown_ffffffff8a9d6762();
int64_t unknown_ffffffff9808cb9b();
int64_t unknown_ffffffffa92d3814();
int64_t unknown_ffffffffab24f0fc();
int64_t unknown_ffffffffabe2218e();
int64_t unknown_ffffffffbc2ca5cf();
int64_t unknown_ffffffffc1f122c2();
int64_t unknown_ffffffffe813e12f();

// Address range: 0x113bbf - 0x113d0b
int64_t function_113bbf(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    // 0x113bbf
    int64_t v1; // bp-32, 0x113bbf
    v1 = (int64_t)&v1 + 8;
    int64_t v2; // 0x113bbf
    return function_cf3c7(a1, a2, a3, v2, v2, (int64_t)(a4 - 0x777f84ae) + 0x777f84ae, v2, 0x10f967);
}

// Address range: 0x113d0b - 0x113e5e
int64_t function_113d0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x113d0b
    return function_cf3c7(a1, a2, a3, a4, a5, a6, a7, 0x7618a3c7);
}

// Address range: 0x113e5e - 0x113fc4
int64_t function_113e5e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 169; // bp-16, 0x113e83
    int64_t v2 = (int64_t)&v1; // 0x113f32
    int64_t v3 = v2 - 8; // 0x113f3a
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x113f3f
    *v4 = 0x10ff9b;
    int64_t v5 = *v4; // 0x113f48
    int64_t * v6 = (int64_t *)(v2 + 16); // 0x113f60
    *(int64_t *)v3 = v3;
    v1 = a7;
    int64_t * v7 = (int64_t *)(v2 + 8); // 0x113f84
    *(int64_t *)(v2 + 40) = *v7;
    int64_t v8 = *v6; // 0x113f88
    *v7 = v8;
    v1 = v8;
    int64_t v9 = v2 + 24; // 0x113f93
    *v6 = *(int64_t *)v9;
    *v7 = v9;
    bool v10; // 0x113e5e
    return function_cf3c7(a1, a2, a3, v5, a5, a6, v1, 0x4000 * (int64_t)(bool)v10 | 2048 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | 128 * (int64_t)v10 | 64 * (int64_t)v10 | 16 * (int64_t)v10 | (int64_t)v10 | 4 * (int64_t)v10 | 2);
}

// Address range: 0x113fc4 - 0x114120
int64_t function_113fc4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x113fc4
    int64_t v1; // bp-40, 0x113fc4
    int64_t v2 = (int64_t)&v1; // 0x114037
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x114059
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x114059
    *v4 = v3;
    int64_t v5 = v2 - 16; // 0x11405d
    int64_t * v6 = (int64_t *)v5; // 0x11405d
    *v6 = v2;
    int64_t * v7 = (int64_t *)(v2 + 8); // 0x11407c
    int64_t v8 = *v7; // 0x11407c
    int64_t * v9 = (int64_t *)(v2 - 24); // 0x114080
    *v9 = v8;
    *(int64_t *)(v2 - 32) = v8;
    *v6 = v3;
    *v7 = *v4;
    *v9 = v8;
    *v6 = v8;
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = v1;
    *v6 = a1;
    *v9 = v5;
    *v6 = v2;
    *v4 = v1;
    *v6 = v2;
    int64_t v10; // 0x113fc4
    return function_cf3c7(*v6, a2, a3, a4, v8, v10, 0x1101f6, v10);
}

// Address range: 0x114154 - 0x11415c
int64_t function_114154(int64_t a1) {
    // 0x114154
    bool v1; // 0x114154
    return function_247c3148ff894c57((v1 ? -1 : 1) + a1);
}

// Address range: 0x11416c - 0x114175
int64_t function_11416c(int64_t a1) {
    // 0x11416c
    return __asm_int1(a1);
}

// Address range: 0x1141b2 - 0x1141b3
int64_t function_1141b2(void) {
    // 0x1141b2
    int64_t result; // 0x1141b2
    return result;
}

// Address range: 0x1141b3 - 0x1141b7
int64_t function_1141b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0x1141b3
    *v1 = *v1 | (char)a4;
    int64_t result; // 0x1141b3
    return result;
}

// Address range: 0x1143bf - 0x114507
int64_t function_1143bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1143bf
    int64_t v1; // 0x1143bf
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    int64_t v3; // 0x1143bf
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    int64_t v5 = v3;
    *(char *)v5 = *(char *)&v3 + (char)v5;
    char * v6 = (char *)(a4 + 84); // 0x1143c5
    *v6 = *v6 + (char)v3;
    return function_cf3c7(a1, a2, a3, a4, a5, v1, v1, (int64_t)&g3);
}

// Address range: 0x11456a - 0x11456b
int64_t function_11456a(void) {
    // 0x11456a
    int64_t result; // 0x11456a
    return result;
}

// Address range: 0x12a0dc - 0x12a0ee
int64_t function_12a0dc(int64_t a1, int64_t a2) {
    int64_t result = __asm_hlt() + 0x274e3ef4 & 0xffffffff; // 0x12a0e2
    int32_t * v1 = (int32_t *)result; // 0x12a0e7
    *v1 = *v1 + 1;
    return result;
}

// Address range: 0x12a14e - 0x12a155
int64_t function_12a14e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x12a14e
    int64_t v1; // 0x12a14e
    *(char *)a3 = 2 * (char)v1;
    return function_24809d15();
}

// Address range: 0x12a15a - 0x12a198
int64_t function_12a15a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12a15a
    if (a4 == 1) {
        // 0x12a15c
        return unknown_ffffffff8a9d6762();
    }
    // 0x12a191
    int64_t v1; // 0x12a15a
    return v1 & 0xffffffff;
}

// Address range: 0x12a1a0 - 0x12a1a1
int64_t function_12a1a0(int64_t a1) {
    // 0x12a1a0
    int64_t result; // 0x12a1a0
    return result;
}

// Address range: 0x12a1e2 - 0x12a207
int64_t function_12a1e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12a1e2
    bool v1; // 0x12a1e2
    int64_t v2 = v1 ? -1 : 1; // 0x12a1e7
    int64_t v3; // 0x12a1e2
    int64_t v4 = (v3 & 105 | unknown_3a3200e8() & 0xffffff00 | 150) + 0xc5fe1750; // 0x12a1ea
    int64_t v5 = v4 & 0xffffffef; // 0x12a1ea
    int64_t v6 = a3 & -256 | 232; // 0x12a1f7
    int32_t * v7 = (int32_t *)v5; // 0x12a1f9
    *v7 = *v7 + (int32_t)v4;
    char v8 = *(char *)(v5 - 0x34632072); // 0x12a1fb
    int32_t * v9 = (int32_t *)(v6 - 24); // 0x12a201
    *v9 = *v9 / 2;
    int64_t result = function_12a25c(a1, v2 + a2, v6, a4 & -256 | (int64_t)(v8 + (char)a4), (int64_t)&g3); // 0x12a205
    return result;
}

// Address range: 0x12a20a - 0x12a216
int64_t function_12a20a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12a20a
    int64_t v1; // 0x12a20a
    bool v2; // 0x12a20a
    __asm_out((int16_t)a3, 2 * (int32_t)v1 | (int32_t)v2);
    return unknown_ffffffffa92d3814();
}

// Address range: 0x12a25c - 0x12a2b0
int64_t function_12a25c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 + 113); // 0x12a25c
    int64_t v2; // 0x12a25c
    int32_t v3 = v2; // 0x12a25c
    *v1 = *v1 + v3;
    uint32_t v4 = (int32_t)v2 >> 31; // 0x12a262
    uint32_t v5 = *(int32_t *)-0x24979c3e; // 0x12a265
    uint32_t v6 = v5 + (int32_t)a2; // 0x12a265
    *(int32_t *)-0x24979c3e = v6;
    int64_t v7 = v4 & -0xff01; // 0x12a26b
    int16_t v8 = 256 * ((int64_t)(v6 < v5) | (int64_t)(2 * v4 / 256)) | v7; // 0x12a26d
    int64_t v9; // 0x12a25c
    __asm_outsd(v8, *(int32_t *)&v9);
    *(char *)a1 = __asm_insb(v8);
    int64_t v10 = v7 | (int64_t)&g1; // 0x12a26f
    int32_t * v11 = (int32_t *)(v10 + 1); // 0x12a276
    *v11 = *v11 + v3;
    char * v12 = (char *)(a4 - 109); // 0x12a279
    *v12 = *v12 + (char)a1;
    uint64_t v13 = unknown_ffffffffabe2218e(); // 0x12a288
    char * v14 = (char *)((v10 & -0xff01 | 256 * (v2 | (int64_t)(char)((int64_t)&g1 >> 8)) & 0xff00) + 126); // 0x12a28d
    *v14 = *v14 + (char)(v13 / 256);
    unknown_ffffffff9808cb9b();
    *(char *)a2 = (char)v10;
    return unknown_19e200ac();
}

// Address range: 0x12a2b1 - 0x12a2c9
int64_t function_12a2b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12a2b1
    int64_t v1; // 0x12a2b1
    *(char *)v1 = 0;
    int64_t v2; // 0x12a2b1
    __asm_outsb((int16_t)a3, *(char *)&v2);
    int64_t v3 = unknown_5ac0b2bb(); // 0x12a2b5
    int16_t v4 = v3; // 0x12a2ba
    int64_t v5; // 0x12a2b1
    int16_t v6 = (int16_t)*(char *)&v5; // 0x12a2ba
    unknown_1faa3e7(v3 & 0xffff0000 | (int64_t)(v4 / v6 % 256) | (int64_t)(256 * (v4 % v6)));
    return function_ffffffffaf07f5c2();
}

// Address range: 0x12a2e3 - 0x12a2e6
int64_t function_12a2e3(void) {
    // 0x12a2e3
    int64_t result; // 0x12a2e3
    return result;
}

// Address range: 0x12a393 - 0x12a396
int64_t function_12a393(void) {
    // 0x12a393
    int64_t result; // 0x12a393
    return result;
}

// Address range: 0x12a3ae - 0x12a3af
int64_t function_12a3ae(void) {
    // 0x12a3ae
    int64_t result; // 0x12a3ae
    return result;
}

// Address range: 0x12a3ce - 0x12a3dd
int64_t function_12a3ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12a3ce
    int64_t result; // 0x12a3ce
    return result;
}

// Address range: 0x12a3f8 - 0x12a3fc
int64_t function_12a3f8(void) {
    // 0x12a3f8
    int64_t result; // 0x12a3f8
    bool v1; // 0x12a3f8
    if (!v1) {
        result = function_12a3ae();
    }
    // 0x12a3fa
    return result;
}

// Address range: 0x12a418 - 0x12a439
int64_t function_12a418(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x12a418
    *(int32_t *)a2 = 2 * (int32_t)v2;
    int32_t * v3 = (int32_t *)(a4 - 47);
    while (true) {
        // 0x12a421
        *(char *)v1 = *(char *)&v1 | (char)(v2 / 256);
        int64_t v4; // 0x12a418
        int64_t v5 = v4 + 0x662bb8d8 & 0xffffffff; // 0x12a423
        int64_t v6 = unknown_ffffffffe813e12f(); // 0x12a429
        uint32_t v7 = *v3; // 0x12a42e
        uint32_t v8 = v7 + (int32_t)v6; // 0x12a42e
        *v3 = v8;
        char * v9 = (char *)(v5 - 0xb776c51); // 0x12a431
        *v9 = 128 * (char)(v8 < v7) | *v9 / 2;
        v4 = v5;
    }
}

// Address range: 0x12a459 - 0x12a45c
int64_t function_12a459(int64_t a1) {
    // 0x12a459
    int64_t result; // 0x12a459
    return result;
}

// Address range: 0x12a460 - 0x12a461
int64_t function_12a460(void) {
    // 0x12a460
    int64_t result; // 0x12a460
    return result;
}

// Address range: 0x12a470 - 0x12a471
int64_t function_12a470(void) {
    // 0x12a470
    int64_t result; // 0x12a470
    return result;
}

// Address range: 0x12a491 - 0x12a492
int64_t function_12a491(void) {
    // 0x12a491
    int64_t result; // 0x12a491
    return result;
}

// Address range: 0x12a4a5 - 0x12a4b7
int64_t function_12a4a5(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    int64_t result; // 0x12a4a5
    if ((unsigned char)(char)(a4 / 256) > (unsigned char)(char)(a3 / 256)) {
        result = function_12a491();
    }
    int32_t * v1 = (int32_t *)(a2 - 81); // 0x12a4a9
    *v1 = *v1 + (int32_t)a1;
    int64_t v2 = result;
    *(char *)v2 = *(char *)&result - (char)v2;
    return result;
}

// Address range: 0x12a4b7 - 0x12a4c8
int64_t function_12a4b7(int64_t a1) {
    // 0x12a4b7
    int64_t v1; // 0x12a4b7
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2;
    bool v3; // 0x12a4b7
    if (v3) {
        function_12a460();
    }
    // 0x12a4bb
    unknown_ffffffffc1f122c2((v3 ? -1 : 1) + a1);
    __asm_wait();
    __asm_in(32);
    return function_12a470();
}

// Address range: 0x12a4c9 - 0x12a51c
int64_t function_12a4c9(int64_t a1, int64_t a2, int64_t a3) {
    char v1 = *(char *)(unknown_ffffffffbc2ca5cf() & 0xffffffff); // 0x12a4d0
    __asm_outsb((int16_t)((int32_t)a2 >> 31), v1);
    uint32_t v2 = *(int32_t *)0x2cb304001e874d1 & 0x154e1435; // 0x12a4db
    int64_t v3 = v2; // 0x12a4db
    char * v4 = (char *)(v3 - 0x17ff5b00); // 0x12a4e0
    *v4 = *v4 + (char)v2;
    int32_t * v5 = (int32_t *)(v3 + 0x56009900); // 0x12a4e6
    int64_t v6; // 0x12a4c9
    *v5 = *v5 + (int32_t)v6;
    float80_t v7; // 0x12a4c9
    *(float32_t *)(v3 + 0x7b0019f1) = (float32_t)v7;
    __asm_in_133(115);
    int64_t v8 = unknown_ffffffffab24f0fc(); // 0x12a4f6
    char * v9 = (char *)(v8 + 37); // 0x12a4fb
    *v9 = *v9 + (char)v8;
    int32_t * v10 = (int32_t *)(v8 - 0x62437ef6); // 0x12a506
    int64_t v11; // 0x12a4c9
    *v10 = *v10 + (int32_t)(int64_t)&v11;
    *(int32_t *)v8 = (int32_t)v8;
    int32_t * v12 = (int32_t *)(v8 - 0x2ea9305b); // 0x12a50e
    *v12 = *v12 ^ (int32_t)a1;
    return unknown_881161a();
}

// Address range: 0x12a57d - 0x12a582
int64_t function_12a57d(void) {
    // 0x12a57d
    return function_ffffffffaeb02e7b();
}

// Address range: 0x12a583 - 0x12a5a0
int64_t function_12a583(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 0x1e8baff); // 0x12a596
    *v1 = *v1 - (char)a4;
    int64_t v2; // 0x12a583
    return v2 & -256 | (int64_t)*(char *)0x1e82b9bb0560107;
}

// Address range: 0x12a5fc - 0x12a5fd
int64_t function_12a5fc(void) {
    // 0x12a5fc
    int64_t result; // 0x12a5fc
    return result;
}

// Address range: 0x12a696 - 0x12a699
int64_t function_12a696(int64_t a1) {
    // 0x12a696
    int64_t result; // 0x12a696
    return result;
}

// Address range: 0x12a6c3 - 0x12a75f
int64_t function_12a6c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12a6c3
    __asm_wait();
    function_392b45();
    while (a4 == 0) {
        // 0x12a73f
        function_392b45();
    }
    // 0x12a749
    int64_t v1; // 0x12a6c3
    int32_t * v2 = (int32_t *)(v1 + 0x79004200); // 0x12a751
    *v2 = *v2 + (int32_t)v1;
    int64_t result = a3 & 0xffffffff; // 0x12a757
    char * v3 = (char *)(result - 38); // 0x12a75c
    *v3 = *v3 + (char)((int32_t)a3 >> 31);
    return result;
}

// Address range: 0x12a776 - 0x12a779
int64_t function_12a776(void) {
    // 0x12a776
    int64_t result; // 0x12a776
    return result;
}

// Address range: 0x12a7a5 - 0x12a7aa
int64_t function_12a7a5(void) {
    // 0x12a7a5
    return function_12a7b1((int64_t)&g3);
}

// Address range: 0x12a7af - 0x12a7b1
int64_t function_12a7af(int64_t a1, int64_t a2) {
    // 0x12a7af
    int64_t v1; // 0x12a7af
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x12a7b1 - 0x12a7b3
int64_t function_12a7b1(int64_t a1) {
    // 0x12a7b1
    int64_t result; // 0x12a7b1
    return result;
}

// Address range: 0x12a829 - 0x12a82a
int64_t function_12a829(void) {
    // 0x12a829
    int64_t result; // 0x12a829
    return result;
}

// Address range: 0x12a842 - 0x12a843
int64_t function_12a842(int64_t a1) {
    // 0x12a842
    int64_t result; // 0x12a842
    return result;
}

// Address range: 0x12a852 - 0x12a853
int64_t function_12a852(void) {
    // 0x12a852
    int64_t result; // 0x12a852
    return result;
}

// Address range: 0x12a86d - 0x12a8aa
int64_t function_12a86d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x12a86d
    int64_t v1; // 0x12a86d
    bool v2; // 0x12a86d
    if (v2) {
        v1 = function_12a829();
    }
    int32_t * v3 = (int32_t *)(v1 + 0x48b6d703); // 0x12a8a1
    *v3 = *v3 + (int32_t)a3;
    return v1 | 115;
}

// Address range: 0x12a8ab - 0x12a8b5
int64_t function_12a8ab(int64_t a1, int64_t a2, int64_t a3) {
    // 0x12a8ab
    int64_t v1; // 0x12a8ab
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return function_12a852();
}

// Address range: 0x12a8bb - 0x12a8c3
int64_t function_12a8bb(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 0x2a92c1a2); // 0x12a8bb
    *v1 = *v1 - (int32_t)a3;
    int64_t result; // 0x12a8bb
    return result;
}
