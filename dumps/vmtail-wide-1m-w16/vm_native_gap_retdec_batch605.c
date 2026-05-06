/*
 * Targeted RetDec C for native executable gap queue batch 605.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xd9dc7-0xd9fc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xda3c7-0xda5c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xda5c7-0xda7c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x441667-0x441867 rank=- name=- kind=- bytes=- uncovered=-
 *   0x441867-0x441a67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x441a67-0x441c67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x441d67-0x441e67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x441e67-0x442067 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1fec12f9();
int64_t function_3b242d98();
int64_t function_441667(int64_t a1, int64_t a2, int64_t a3);
int64_t function_441680(void);
int64_t function_4416a0(void);
int64_t function_4416c0(void);
int64_t function_4416ca(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4417c7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_441840(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_441866(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_441899(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4418ae(void);
int64_t function_4418ba(int64_t a1);
int64_t function_4418d4(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_441912(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_441958(void);
int64_t function_441a04(void);
int64_t function_441a08(int64_t a1);
int64_t function_441a30(void);
int64_t function_441a37(void);
int64_t function_441a50(int64_t a1, int64_t a2, int64_t a3);
int64_t function_441a57(int64_t a1);
int64_t function_441a6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_441ae8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, char a7);
int64_t function_441b8c(void);
int64_t function_441b9e(int64_t a1);
int64_t function_441bb8(void);
int64_t function_441bda(int64_t a1, int64_t a2, int64_t a3);
int64_t function_441bf2(void);
int64_t function_441bf9(void);
int64_t function_441c1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_441d67(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_441da6(void);
int64_t function_441dbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_441dd7(void);
int64_t function_441df8(void);
int64_t function_441e02(void);
int64_t function_441e05(int64_t a1, int64_t a2, int64_t a3);
int64_t function_441e3f(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_441f8d(int64_t a1);
int64_t function_441fe5(void);
int64_t function_442047(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_68543508();
int64_t function_7a58592();
int64_t function_d9dc7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d9e1f(int64_t a1);
int64_t function_d9e24(void);
int64_t function_d9e45(int64_t a1);
int64_t function_d9e4c(int64_t a1);
int64_t function_d9e68(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_d9f52(int64_t a1);
int64_t function_da3c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_da469(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_da4e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_da51a(void);
int64_t function_da56e(void);
int64_t function_da5b4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_da619(int64_t a1);
int64_t function_da664(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_da69d(void);
int64_t function_da6da(int64_t a1, int64_t a2, int64_t a3);
int64_t function_da713(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_da757(int64_t a1);
int64_t function_da75b(int64_t a1);
int64_t function_da774(void);
int64_t function_da77f(int64_t a1);
int64_t function_ffffffffe83bc2ab();
int64_t function_ffffffffea4c8bb8();
int64_t unknown_2390a500();
int64_t unknown_24097ee0();
int64_t unknown_68187e93();
int64_t unknown_79c58256();
int64_t unknown_ffffffff82103e0f();
int64_t unknown_ffffffffc56dfc67();
int64_t unknown_ffffffffe82edc6a();
int64_t unknown_fffffffffa98c57d();

// Address range: 0xd9dc7 - 0xd9dcd
int64_t function_d9dc7(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd9dc7
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0xd9dc7
    return result;
}

// Address range: 0xd9e1f - 0xd9e23
int64_t function_d9e1f(int64_t a1) {
    // 0xd9e1f
    int64_t v1; // 0xd9e1f
    return v1 ^ 56;
}

// Address range: 0xd9e24 - 0xd9e25
int64_t function_d9e24(void) {
    // 0xd9e24
    int64_t result; // 0xd9e24
    return result;
}

// Address range: 0xd9e45 - 0xd9e48
int64_t function_d9e45(int64_t a1) {
    // 0xd9e45
    int64_t result; // 0xd9e45
    return result;
}

// Address range: 0xd9e4c - 0xd9e61
int64_t function_d9e4c(int64_t a1) {
    // 0xd9e4c
    unknown_79c58256(a1);
    return (int64_t)*(int32_t *)-0x41fe17757f7dfa90;
}

// Address range: 0xd9e68 - 0xd9f51
int64_t function_d9e68(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xd9e68
    bool v1; // 0xd9e68
    if (v1) {
        int32_t * v2 = (int32_t *)(a3 + 0x2756a082); // 0xd9e9c
        *v2 = *v2 + (int32_t)a2;
        int64_t result; // 0xd9e68
        return result;
    }
    // 0xd9e6a
    __asm_wait();
    return function_d9e24();
}

// Address range: 0xd9f52 - 0xd9f54
int64_t function_d9f52(int64_t a1) {
    // 0xd9f52
    int64_t result; // 0xd9f52
    return result;
}

// Address range: 0xda3c7 - 0xda3ee
int64_t function_da3c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xda3c7
    int64_t v1; // 0xda3c7
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0xda3c7
    int64_t v3 = (v2 ? -4 : 4) + a1; // 0xda3c7
    *(char *)v3 = (char)v1;
    int64_t v4 = v3 + (v2 ? -1 : 1); // 0xda3c9
    *(char *)v4 = __asm_insb((int16_t)a3);
    uint64_t v5 = __asm_hlt(v4); // 0xda3db
    unsigned char v6 = (char)(v5 / 256); // 0xda3dc
    char v7 = ((int32_t)v1 & -256 | 183) < 0x1ff3e701; // 0xda3dc
    unsigned char v8 = *(char *)(v5 + 5) + v7; // 0xda3dc
    unsigned char v9 = v6 - v8; // 0xda3dc
    bool v10 = ((int32_t)v1 & -256 | 183) < 0x1ff3e701 ? v8 != -1 | v9 - v7 > v6 : v8 > v6; // 0xda3dc
    char * v11 = (char *)(a4 - 61); // 0xda3df
    *v11 = *v11 - (char)a4 + (char)v10;
    unsigned char v12 = *(char *)-0x384188fec2ffcb13; // 0xda3e5
    return v5 & -0x10000 | (int64_t)v12 | 256 * (v5 + (int64_t)v9) & 0xff00;
}

// Address range: 0xda469 - 0xda478
int64_t function_da469(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xda469
    int64_t result; // 0xda469
    return result;
}

// Address range: 0xda4e8 - 0xda511
int64_t function_da4e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6;
    int64_t result; // 0xda4e8
    *(char *)0x726a0861f26101e8 = (char)result;
    *(char *)(a4 - 0x17fdc87d + result) = 1;
    bool v2; // 0xda4e8
    if (v2) {
        // 0xda504
        *(int32_t *)a3 = (int32_t)(int64_t)&v1;
        return unknown_ffffffff82103e0f();
    }
    // 0xda4fe
    return result;
}

// Address range: 0xda51a - 0xda51b
int64_t function_da51a(void) {
    // 0xda51a
    int64_t result; // 0xda51a
    return result;
}

// Address range: 0xda56e - 0xda56f
int64_t function_da56e(void) {
    // 0xda56e
    int64_t result; // 0xda56e
    return result;
}

// Address range: 0xda5b4 - 0xda604
int64_t function_da5b4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0xda5b4
    int64_t v1; // 0xda5b4
    int64_t v2 = v1;
    uint32_t v3 = __asm_in(42); // 0xda5b4
    int32_t * v4 = (int32_t *)(v2 - 0x2dd7f9e0 + 2 * v2); // 0xda5b8
    uint32_t v5 = *v4; // 0xda5b8
    uint32_t v6 = v5 + (int32_t)a3; // 0xda5b8
    *v4 = v6;
    bool v7; // 0xda5b4
    unsigned char v8 = (char)(a4 / 256 + (int64_t)v7 + (int64_t)v3); // 0xda5bf
    unsigned char v9 = v8 + 28 + (char)(v6 < v5); // 0xda5bf
    int64_t v10 = a4 - 1; // 0xda5c1
    int64_t result = (int64_t)v9 | (int64_t)(v3 & -256); // 0xda5c1
    if (v10 != 0) {
        result = function_da56e();
    }
    if (v10 != 1 != (v9 == 0)) {
        // 0xda5c8
        return result;
    }
    bool v11 = v6 < v5 ? v9 <= v8 : v8 > 227; // 0xda5bf
    int32_t * v12 = (int32_t *)(v2 - 80); // 0xda5f7
    *v12 = (int32_t)v11 - (int32_t)v1 + *v12;
    return unknown_2390a500() | 212;
}

// Address range: 0xda619 - 0xda61b
int64_t function_da619(int64_t a1) {
    // 0xda619
    int64_t result; // 0xda619
    return result;
}

// Address range: 0xda664 - 0xda69a
int64_t function_da664(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xda664
    unknown_ffffffffe82edc6a();
    *(int32_t *)-0x2cecd190 = *(int32_t *)-0x2cecd190 + (int32_t)a1;
    int32_t * v1 = (int32_t *)(a2 + 0x19139e3c + (8 * unknown_fffffffffa98c57d() + 0x12aa39d38 & 0x7fffffff8)); // 0xda683
    int64_t v2; // 0xda664
    *v1 = *v1 + (int32_t)v2;
    unknown_68187e93();
    return a4 & 0xfe177c6a | 0x1e88395;
}

// Address range: 0xda69d - 0xda6a2
int64_t function_da69d(void) {
    // 0xda69d
    return function_ffffffffe83bc2ab();
}

// Address range: 0xda6da - 0xda6ea
int64_t function_da6da(int64_t a1, int64_t a2, int64_t a3) {
    // 0xda6da
    int64_t v1; // 0xda6da
    return unknown_24097ee0(a1, a2, a3) + v1 & 0xffffffff;
}

// Address range: 0xda713 - 0xda715
int64_t function_da713(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xda713
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0xda713
    return result;
}

// Address range: 0xda757 - 0xda75a
int64_t function_da757(int64_t a1) {
    // 0xda757
    int64_t result; // 0xda757
    return result;
}

// Address range: 0xda75b - 0xda75d
int64_t function_da75b(int64_t a1) {
    // 0xda75b
    int64_t result; // 0xda75b
    return result;
}

// Address range: 0xda774 - 0xda77c
int64_t function_da774(void) {
    // 0xda774
    int64_t result; // 0xda774
    return result;
}

// Address range: 0xda77f - 0xda782
int64_t function_da77f(int64_t a1) {
    // 0xda77f
    int64_t result; // 0xda77f
    return result;
}

// Address range: 0x441667 - 0x441679
int64_t function_441667(int64_t a1, int64_t a2, int64_t a3) {
    // 0x441667
    int64_t v1; // 0x441667
    uint64_t v2 = v1;
    char v3 = *(char *)(v1 - 0x5bff9c7a); // 0x441668
    unsigned char v4 = *(char *)(v2 % 256 + v1); // 0x441670
    return v2 & -0x10000 | (int64_t)v4 | 256 * (int64_t)(v3 + (char)(v2 / 256));
}

// Address range: 0x441680 - 0x441683
int64_t function_441680(void) {
    // 0x441680
    int64_t result; // 0x441680
    return result;
}

// Address range: 0x4416a0 - 0x4416a1
int64_t function_4416a0(void) {
    // 0x4416a0
    int64_t result; // 0x4416a0
    return result;
}

// Address range: 0x4416c0 - 0x4416ca
int64_t function_4416c0(void) {
    // 0x4416c0
    return function_ffffffffea4c8bb8();
}

// Address range: 0x4416ca - 0x4417c3
int64_t function_4416ca(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4416ca
    int64_t v1; // 0x4416ca
    uint64_t v2 = v1;
    int64_t v3 = (int64_t)*(int32_t *)(v2 - 114) - 8; // 0x4416cd
    int64_t v4 = v3 - (int64_t)&g1; // 0x4416cd
    bool v5; // 0x4416ca
    int64_t v6 = v5 ? -1 : 1; // 0x4416d2
    int64_t v7 = v6 + a1; // 0x4416d2
    int128_t v8 = (int128_t)*(int64_t *)(a5 + 53); // 0x4416d3
    int128_t v9 = 126 * v8; // 0x4416d3
    if (llvm_ctpop_i8((char)v9 + (char)(a3 / 256) + (char)(v9 != 0x7e0000000000000000 * v8 >> 64)) % 2 == 0) {
        // 0x4416dc
        *(char *)v7 = *(char *)(v6 + a2);
        int64_t v10 = v7 + v6; // 0x4416dc
        if (!((a4 == 1 | *(char *)(v10 + 0x365db392) == (char)a3))) {
            function_4416a0();
        }
        int64_t * v11 = (int64_t *)v4; // 0x4416e7
        int64_t v12 = *v11; // 0x4416e7
        *v11 = v3;
        *(int32_t *)v10 = *(int32_t *)v12;
        int64_t v13 = v5 ? -4 : 4; // 0x4416e9
        return function_7a58592(v10 + v13, v12 + v13);
    }
    int64_t v14 = v9; // 0x4416d3
    *(int64_t *)(v4 - 8) = v3;
    __asm_int(103);
    int64_t v15 = (v14 - (v2 & 0xff00) & 0xff00 | v14 & 0xffff00fe) ^ 0x172dd852; // 0x441767
    int64_t * v16 = (int64_t *)(v4 - 16); // 0x44176c
    *v16 = 59;
    unsigned char v17 = (char)v15; // 0x44176e
    unsigned char v18 = *(char *)v15; // 0x44176e
    *(int32_t *)v2 = (int32_t)v3;
    int64_t v19 = v15; // 0x441777
    bool v20 = v18 > v17; // 0x441777
    if (v18 <= v17) {
        int64_t v21 = 2 * v6 + v7; // 0x441766
        int64_t v22 = v4 - 24; // 0x44177e
        *(int64_t *)v22 = v21;
        int32_t * v23 = (int32_t *)(2 * (a4 & -256 | 38) + 0x9071cc3 + v4); // 0x44177f
        uint32_t v24 = *v23; // 0x44177f
        uint32_t v25 = v24 + (int32_t)v22; // 0x44177f
        *v23 = v25;
        int32_t * v26 = (int32_t *)(v21 - 60); // 0x441786
        *v26 = 0x80000000 * (int32_t)(v25 < v24) | *v26 / 2;
        *v16 = 0x66e75a5b;
        v19 = __asm_hlt(*v16);
        v20 = *v16 % 2 != 0;
    }
    bool v27 = v20;
    uint64_t v28 = v19;
    unsigned char v29 = (char)(v2 / 256); // 0x441798
    unsigned char v30 = (char)(v28 / 256) + v29; // 0x441798
    int64_t v31 = v27 ? v30 + (char)v27 <= v29 : v30 < v29 ? 239 : 238; // 0x44179a
    return (v28 - v31) % 256 | v28 & -256;
}

// Address range: 0x4417c7 - 0x441822
int64_t function_4417c7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a3 % 256 | a4; // 0x4417c7
    float80_t v3; // 0x4417c7
    *(float64_t *)(a1 + 75) = (float64_t)v3;
    int64_t result; // 0x4417c7
    *(char *)a1 = (char)result;
    unsigned char v4 = (char)v2 % 32; // 0x4417d6
    if (v4 != 0) {
        char * v5 = (char *)(8 * a3 + 0xec18065b); // 0x4417d6
        unsigned char v6 = *v5; // 0x4417d6
        *v5 = v6 << v4 | (char)((int16_t)v6 >> (int16_t)(9 - v4));
    }
    int64_t v7 = result & result;
    if ((int32_t)v7 < 0) {
        // 0x4417db
        return result;
    }
    int32_t * v8 = (int32_t *)(result + 0x50d02f5); // 0x441800
    *v8 = *v8 & (int32_t)a3;
    uint32_t v9 = *(int32_t *)0x69a18a1f; // 0x441806
    uint32_t v10 = (int32_t)result; // 0x441806
    int32_t v11 = v9 + v10; // 0x441806
    unsigned char v12 = llvm_ctpop_i8((char)v11); // 0x441806
    *(int32_t *)0x69a18a1f = v11;
    bool v13; // 0x4417c7
    *(int64_t *)((v7 & 0xffffffff) - 8) = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | (int64_t)(v11 < v9) | 64 * (int64_t)(v11 == 0) | 128 * (int64_t)(v11 < 0) | 16 * (int64_t)(v9 % 16 + v10 % 16 > 15) | 2048 * (int64_t)(((v11 ^ v9) & (v11 ^ v10)) < 0) | 4 * (int64_t)(v12 % 2 == 0) | 2;
    char * v14 = (char *)(v2 - 0x256bd57a + 4 * v2); // 0x441813
    *v14 = *v14 + (char)(a3 / 256);
    int32_t * v15 = (int32_t *)(result - 81); // 0x44181b
    *v15 = *v15 & (int32_t)result;
    *(char *)0xec18065b = __asm_insb((int16_t)a3);
    return (int64_t)*(int32_t *)&v1;
}

// Address range: 0x441840 - 0x441864
int64_t function_441840(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x441840
    int64_t v1; // 0x441840
    int32_t * v2 = (int32_t *)(v1 + 101); // 0x441840
    *v2 = *v2 >> 17;
    char * v3 = (char *)(v1 - 0x14bfa52b); // 0x441844
    *v3 = *v3 & (char)a3;
    int64_t v4; // 0x441840
    uint32_t v5 = *(int32_t *)&v4; // 0x441858
    int64_t v6; // 0x441840
    uint32_t v7 = *(int32_t *)&v6; // 0x441858
    int64_t v8 = (a4 & (int64_t)&g2) == 0 ? 4 : -4; // 0x441858
    int64_t v9 = v8 + a1; // 0x441858
    int64_t v10 = v8 + a2; // 0x441858
    __writegsbyte(v10, __readgsbyte(v10) - (char)((0xc25d - (a4 % 2 | 0x31c0) + v1) / 256) + (char)(v5 < v7));
    __asm_outsd((int16_t)a3, *(int32_t *)v10);
    char * v11 = (char *)v9; // 0x44185d
    *v11 = *v11 - (char)(a3 / 256);
    return function_441899(v9, v10, a3, (int64_t)&g5);
}

// Address range: 0x441866 - 0x44186f
int64_t function_441866(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(8 * a4 + 0x714ac812); // 0x441866
    int64_t v2; // 0x441866
    *v1 = *v1 | (int32_t)v2;
    return function_4418d4(a1, a2, a3);
}

// Address range: 0x441899 - 0x4418ab
int64_t function_441899(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x441899
    __asm_wait();
    return function_1fec12f9();
}

// Address range: 0x4418ae - 0x4418b0
int64_t function_4418ae(void) {
    // 0x4418ae
    int64_t v1; // 0x4418ae
    return function_441912(v1, v1, v1, v1);
}

// Address range: 0x4418ba - 0x4418bd
int64_t function_4418ba(int64_t a1) {
    // 0x4418ba
    int64_t result; // 0x4418ba
    return result;
}

// Address range: 0x4418d4 - 0x4418da
int64_t function_4418d4(int64_t a1, int64_t a2, uint64_t a3) {
    char * v1 = (char *)(a1 - 0x13c3adbb); // 0x4418d4
    *v1 = *v1 ^ (char)(a3 / 256);
    int64_t result; // 0x4418d4
    return result;
}

// Address range: 0x441912 - 0x441932
int64_t function_441912(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x441912
    int64_t v1; // 0x441912
    int32_t * v2 = (int32_t *)(v1 - 116); // 0x441912
    bool v3; // 0x441912
    *v2 = *v2 - (v3 ? 62 : 61);
    int32_t * v4 = (int32_t *)(8 * v1 + 0x1cd02168 + v1 & 0xffffffff); // 0x44191b
    *v4 = *v4 ^ (int32_t)a2;
    int32_t * v5 = (int32_t *)(a1 + 20); // 0x44191f
    *v5 = *v5 ^ (int32_t)v1;
    int32_t v6 = *(int32_t *)(v1 + 63); // 0x441922
    __asm_rcl(*(char *)(v1 - 5));
    char * v7 = (char *)((int64_t)(v6 ^ (int32_t)a4) - 64); // 0x44192f
    *v7 = *v7 - (char)a3;
    int64_t v8; // 0x441912
    return (int64_t)(*(int32_t *)&v8 | 0x75499f1a);
}

// Address range: 0x441958 - 0x44195b
int64_t function_441958(void) {
    // 0x441958
    int64_t result; // 0x441958
    return result;
}

// Address range: 0x441a04 - 0x441a07
int64_t function_441a04(void) {
    // 0x441a04
    int64_t result; // 0x441a04
    return result;
}

// Address range: 0x441a08 - 0x441a0b
int64_t function_441a08(int64_t a1) {
    // 0x441a08
    int64_t result; // 0x441a08
    return result;
}

// Address range: 0x441a30 - 0x441a36
int64_t function_441a30(void) {
    // 0x441a30
    return function_68543508();
}

// Address range: 0x441a37 - 0x441a38
int64_t function_441a37(void) {
    // 0x441a37
    int64_t result; // 0x441a37
    return result;
}

// Address range: 0x441a50 - 0x441a57
int64_t function_441a50(int64_t a1, int64_t a2, int64_t a3) {
    // 0x441a50
    int64_t v1; // 0x441a50
    int64_t v2 = v1;
    char v3 = *(char *)(a1 + 39 + 2 * a3); // 0x441a50
    return v2 & -0x10000 | (int64_t)((256 * (int16_t)v2 >> 8) * (int16_t)v3);
}

// Address range: 0x441a57 - 0x441a6c
int64_t function_441a57(int64_t a1) {
    // 0x441a57
    int64_t v1; // 0x441a57
    char v2 = v1;
    __asm_out(86, v2);
    char v3 = v2; // 0x441a5b
    int64_t v4; // 0x441a57
    bool v5; // 0x441a57
    if (!v5) {
        int64_t v6 = function_441a37(); // 0x441a5b
        v3 = v6;
        v4 = v6;
    }
    char * v7 = (char *)(v1 + 111); // 0x441a62
    *v7 = v3;
    return v4 & -256 | (int64_t)(*v7 | 66);
}

// Address range: 0x441a6c - 0x441ae7
int64_t function_441a6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x441a6c
    int64_t v1; // 0x441a6c
    uint64_t result = v1;
    char * v2 = (char *)(v1 + 0x67d66052); // 0x441a6c
    char v3 = *v2 + (char)v1; // 0x441a6c
    *v2 = v3;
    if (v3 == 0) {
        // 0x441ad4
        return result;
    }
    char v4 = *(char *)(a5 + 0x6626a7); // 0x441a77
    return 256 * (int64_t)(v4 ^ (char)(result / 256)) | result & -0xff01;
}

// Address range: 0x441ae8 - 0x441b2d
int64_t function_441ae8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, char a7) {
    // 0x441ae8
    int64_t v1; // 0x441ae8
    int64_t v2 = v1;
    int64_t v3 = a2;
    char v4; // 0x441ae8
    char v5 = v4;
    char * v6 = (char *)(a1 + 97); // 0x441ae8
    unsigned char v7 = *v6; // 0x441ae8
    unsigned char v8 = v7 + (char)a3; // 0x441ae8
    *v6 = v8;
    *(char *)a1 = (char)v1;
    uint32_t v9 = (int32_t)a4 % 32; // 0x441aed
    int64_t v10; // 0x441ae8
    if (v9 != 0) {
        v10 = (int32_t)v2 << v9 | (int32_t)((v2 & 0xffffffff) >> (int64_t)(33 - v9)) | (int32_t)(v8 < v7) << v9 - 1;
    }
    bool v11; // 0x441ae8
    int64_t v12 = v11 ? -1 : 1; // 0x441aeb
    int64_t v13; // 0x441ae8
    uint64_t v14 = v13;
    *(char *)v14 = *(char *)&v13 & (char)(v14 / 256);
    char * v15 = (char *)(v10 + 0x5b8bf848 + 2 * v3); // 0x441b04
    *v15 = *v15 & (char)(v1 / 256);
    char * v16 = (char *)(v3 + 27); // 0x441b18
    *v16 = *v16 + (char)v13;
    *(char *)(v12 + a1) = *(char *)&v3;
    char * v17 = (char *)(v3 + v12); // 0x441b1f
    *v17 = *v17 ^ (char)(a3 / 256);
    return (int64_t)v5 & -256 | (int64_t)(v5 ^ 52);
}

// Address range: 0x441b8c - 0x441b8d
int64_t function_441b8c(void) {
    // 0x441b8c
    int64_t result; // 0x441b8c
    return result;
}

// Address range: 0x441b9e - 0x441b9f
int64_t function_441b9e(int64_t a1) {
    // 0x441b9e
    int64_t result; // 0x441b9e
    return result;
}

// Address range: 0x441bb8 - 0x441bb9
int64_t function_441bb8(void) {
    // 0x441bb8
    int64_t result; // 0x441bb8
    return result;
}

// Address range: 0x441bda - 0x441bef
int64_t function_441bda(int64_t a1, int64_t a2, int64_t a3) {
    // 0x441bda
    int64_t v1; // 0x441bda
    int32_t v2 = v1;
    uint32_t v3 = (int32_t)v1; // 0x441bdf
    *(int32_t *)v1 = v2 + v3;
    char v4 = -1 - v2 < v3; // 0x441be3
    unsigned char v5 = *(char *)(a3 - 0x4edf6242) + v4; // 0x441be3
    char v6 = (char)((int64_t)&g4 >> 8) - v5; // 0x441be3
    bool v7 = -1 - v2 < v3 ? v5 != -1 | v6 - v4 > (char)((int64_t)&g4 >> 8) : v5 > (char)((int64_t)&g4 >> 8); // 0x441be3
    __asm_out(117, (char)v1);
    int64_t v8; // 0x441bda
    *(char *)a3 = *(char *)&v8 - v6 + (char)v7;
    return function_441b8c();
}

// Address range: 0x441bf2 - 0x441bf9
int64_t function_441bf2(void) {
    // 0x441bf2
    int64_t v1; // 0x441bf2
    return v1 & 0xffffffff ^ 0x4a2016b5;
}

// Address range: 0x441bf9 - 0x441bfb
int64_t function_441bf9(void) {
    // 0x441bf9
    return function_441b8c();
}

// Address range: 0x441c1a - 0x441c5e
int64_t function_441c1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x441c1a
    if ((a5 & 64) != 0) {
        function_441bb8();
    }
    // 0x441c1f
    __asm_int(51);
    int32_t v1 = *(int32_t *)-0x1ed832d695d953b3; // 0x441c45
    int32_t v2 = v1 >> 15; // 0x441c45
    *(int32_t *)-0x1ed832d695d953b3 = v2;
    __asm_outsd((int16_t)a3, v2);
    char v3 = *(char *)(a1 - 12); // 0x441c48
    int64_t v4; // 0x441c1a
    *(int32_t *)-0x68afa39c8b48976 = (int32_t)v4;
    int64_t result = unknown_ffffffffc56dfc67(); // 0x441c5b
    if ((char)v4 + (char)a3 < 1) {
        result = function_441c1a(a1, -0x1ed832d695d953b3, a3, (int64_t)((char)((v1 & 0x4000) != 0) + 111 - v3) | 0x632e0200, (int64_t)&g5, (int64_t)&g5);
    }
    // 0x441c5d
    return result;
}

// Address range: 0x441d67 - 0x441d7a
int64_t function_441d67(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 + 46); // 0x441d74
    *v1 = *v1 + (char)((int64_t)&g3 >> 8);
    int64_t v2; // 0x441d67
    return function_441dbf(a1, a2, a3, v2, 0x73d52600);
}

// Address range: 0x441da6 - 0x441da7
int64_t function_441da6(void) {
    // 0x441da6
    int64_t result; // 0x441da6
    return result;
}

// Address range: 0x441dbf - 0x441dd6
int64_t function_441dbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = __asm_int3(); // 0x441dbf
    bool v1; // 0x441dbf
    if (a4 == 1 || v1) {
        int32_t * v2 = (int32_t *)(a2 + 40); // 0x441dc5
        *v2 = *v2 - 1;
        return result;
    }
    // 0x441dd0
    int64_t v3; // 0x441dbf
    char * v4 = (char *)(v3 + 109); // 0x441dd1
    *v4 = *v4 % 32;
    int64_t v5; // 0x441dbf
    return (int64_t)&v5;
}

// Address range: 0x441dd7 - 0x441dd8
int64_t function_441dd7(void) {
    // 0x441dd7
    int64_t result; // 0x441dd7
    return result;
}

// Address range: 0x441df8 - 0x441dfe
int64_t function_441df8(void) {
    // 0x441df8
    return function_3b242d98();
}

// Address range: 0x441e02 - 0x441e05
int64_t function_441e02(void) {
    // 0x441e02
    int64_t result; // 0x441e02
    return result;
}

// Address range: 0x441e05 - 0x441e16
int64_t function_441e05(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = __asm_in_133((int16_t)a3); // 0x441e0a
    int64_t v2; // 0x441e05
    int32_t * v3 = (int32_t *)(v2 + 0x1f8f1511); // 0x441e0d
    *v3 = *v3 + 1;
    return ((int64_t)v1 + 229 + (int64_t)((int32_t)v2 < (int32_t)a3)) % 256 | (int64_t)(v1 & -256);
}

// Address range: 0x441e3f - 0x441f67
int64_t function_441e3f(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x441e3f
    bool v1; // 0x441e3f
    if (!v1) {
        // 0x441e48
        return function_441dd7();
    }
    // 0x441eb8
    int64_t v2; // 0x441e3f
    int64_t v3 = (int64_t)*(int32_t *)(v2 - 94); // 0x441e3f
    int64_t v4 = -0x3f24b37c * v3; // 0x441e3f
    unsigned char v5 = (char)v2; // 0x441eb8
    unsigned char v6 = v5 + 123 + (char)(v4 != -0x3f24b37c00000000 * v3 >> 32); // 0x441eb8
    unsigned char v7 = v4 != -0x3f24b37c00000000 * v3 >> 32 ? v6 <= v5 : v5 > 132 ? 7 : 6; // 0x441eba
    int64_t v8 = (v1 ? -4 : 4) + a2; // 0x441ebe
    if (v6 <= v7) {
        // 0x441f01
        return (int64_t)*(int32_t *)v8;
    }
    int64_t v9 = v4 & 0xfffffffc; // 0x441e3f
    int64_t v10 = v2 & 0xffffff00 | (int64_t)(v6 - v7); // 0x441ebd
    uint64_t v11 = a4 + 1 + a2 / 256 % 0x1000000; // 0x441ec1
    int64_t v12 = v11 % 256 | a4 & -256; // 0x441ec1
    int64_t * v13 = (int64_t *)v9; // 0x441ecf
    int64_t v14 = *v13; // 0x441ecf
    uint32_t v15 = (int32_t)a3; // 0x441ed7
    uint32_t v16 = *(int32_t *)(v10 + 0x1553257); // 0x441ed7
    uint32_t v17 = v16 + v15; // 0x441ed7
    char v18 = v17; // 0x441ed7
    unsigned char v19 = llvm_ctpop_i8(v18); // 0x441ed7
    *v13 = 0x4000 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | (int64_t)(v17 < v15) | 64 * (int64_t)(v17 == 0) | 128 * (int64_t)(v17 < 0) | 16 * (int64_t)(v16 % 16 + v15 % 16 > 15) | 2048 * (int64_t)(((v17 ^ v15) & (v17 ^ v16)) < 0) | 4 * (int64_t)(v19 % 2 == 0) | 2;
    char v20 = v2; // 0x441ede
    char v21 = v17 < v15; // 0x441ede
    char v22 = v21 + v18; // 0x441ede
    char v23 = v20 - v22; // 0x441ede
    if (((v23 - v21 ^ v20) & (v22 ^ v20)) >= 0) {
        uint16_t v24 = 15 * (int16_t)*(char *)0x9d8af84e; // 0x441ee4
        char v25 = v24 / 256; // 0x441ee4
        if (v23 == 0 || v25 != 0 == (v25 != -1)) {
            // 0x441f09
            return (int64_t)v24 | 0x9d8a0000;
        }
        // 0x441ee9
        __asm_int(-5);
        *v13 = v14;
        int32_t * v26 = (int32_t *)(v12 - 0x3c0f8332); // 0x441ef4
        *v26 = *v26 + v17;
        return (int64_t)(*(int32_t *)(v12 + 67) & -256 | 118);
    }
    if (v22 < v20) {
        // 0x441f60
        *(char *)v14 = __asm_insb((int16_t)v17);
        char * v27 = (char *)(v10 + 0x9d8af79f); // 0x441f62
        *v27 = *v27 + 8;
        return 0x9d8af80f;
    }
    // 0x441f21
    *(int64_t *)(v9 - 8) = v8;
    *(int64_t *)(v9 - 16) = v12;
    int32_t * v28 = (int32_t *)(v2 + 75); // 0x441f23
    *v28 = *v28 & 0x147df527;
    uint32_t v29 = (int32_t)v11 % 32; // 0x441f2d
    if (v29 != 0) {
        *(int32_t *)-0x1992a45b = *(int32_t *)-0x1992a45b >> v29;
    }
    return 0;
}

// Address range: 0x441f8d - 0x441f95
int64_t function_441f8d(int64_t a1) {
    // 0x441f8d
    int64_t result; // 0x441f8d
    __asm_out(78, (char)result);
    return result;
}

// Address range: 0x441fe5 - 0x441fe8
int64_t function_441fe5(void) {
    // 0x441fe5
    int64_t result; // 0x441fe5
    return result;
}

// Address range: 0x442047 - 0x442053
int64_t function_442047(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x442047
    int64_t result; // 0x442047
    return result;
}
