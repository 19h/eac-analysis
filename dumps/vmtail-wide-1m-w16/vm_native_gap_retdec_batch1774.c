/*
 * Targeted RetDec C for native executable gap queue batch 1774.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x24d57d-0x24d77d rank=- name=- kind=- bytes=- uncovered=-
 *   0x24d77d-0x24d97d rank=- name=- kind=- bytes=- uncovered=-
 *   0x24d97d-0x24da7f rank=- name=- kind=- bytes=- uncovered=-
 *   0x3db9b9-0x3dbab9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x466e34-0x466f34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x467034-0x467134 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4671b4-0x467234 rank=- name=- kind=- bytes=- uncovered=-
 *   0x467234-0x467334 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b5ade-0x4b5cde rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b5cde-0x4b5ede rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b5ede-0x4b5fe0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e4779-0x4e47f9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e7b79-0x4e7bf9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x550d9f-0x550f9f rank=- name=- kind=- bytes=- uncovered=-
 *   0x550f9f-0x55119f rank=- name=- kind=- bytes=- uncovered=-
 *   0x55119f-0x5512a0 rank=- name=- kind=- bytes=- uncovered=-
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
void __asm_clts(void);
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_rsm(void);
int64_t __asm_emms(void);
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
void __asm_fldenv(int224_t value);
int64_t __asm_fnstenv();
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
int256_t __asm_vprord(int256_t value, int count);
int256_t __asm_vpaddd(int256_t left, int256_t right);
int256_t __asm_vpxord(int256_t left, int256_t right);
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
int128_t __asm_packsswb(int128_t left, int128_t right);
int128_t __asm_pmulhw(int128_t left, int128_t right);
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

int64_t function_1fd40();
int64_t function_20540();
int64_t function_225d46a();
int64_t function_23dbc33();
int64_t function_24d57d(void);
int64_t function_24d58d(int64_t a1);
int64_t function_24d5b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24d5c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24d60f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_24d643(void);
int64_t function_24d66d(void);
int64_t function_24d670(void);
int64_t function_24d68c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24d6b0(int64_t a1);
int64_t function_24d770(int64_t a1);
int64_t function_24d77b(int64_t a1);
int64_t function_24d7d3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_24d808(int64_t a1, int64_t a2);
int64_t function_24d857(void);
int64_t function_24d885(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_24d903(void);
int64_t function_24d91d(void);
int64_t function_24d9aa(int64_t a1);
int64_t function_24d9ba(int64_t a1);
int64_t function_24da45(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36cda();
int64_t function_36ff8();
int64_t function_3db9b9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3db9d2(void);
int64_t function_3dba05(int64_t a1, int64_t a2);
int64_t function_3dba2b(void);
int64_t function_3dba44(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3dba60(int64_t a1);
int64_t function_466e34(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_466ef3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_467034(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_467074(int64_t a1);
int64_t function_4670bd(void);
int64_t function_4670c8(void);
int64_t function_467118(int64_t a1);
int64_t function_4671b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4671e2(int64_t a1);
int64_t function_4671e7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_467286(void);
int64_t function_4672b5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_4adc80();
int64_t function_4add10();
int64_t function_4add30();
int64_t function_4ae080();
int64_t function_4aec20();
int64_t function_4aecc0();
int64_t function_4aedd0();
int64_t function_4aef80();
int64_t function_4b5ade(void);
int64_t function_4b5adf(void);
int64_t function_4b5b00(void);
int64_t function_4b5b10(int64_t a1);
int64_t function_4b5b30(void);
int64_t function_4b5b60(void);
int64_t function_4b5b70(void);
int64_t function_4b5b80(void);
int64_t function_4b5b90(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4b5ba0(int64_t a1);
int64_t function_4b5bc0(void);
int64_t function_4b5bf0(void);
int64_t function_4b5c00(void);
int64_t function_4b5c10(void);
int64_t function_4b5c20(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4b5c30(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b5c40(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b5c50(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b5c60(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b5c70(int64_t a1);
int64_t function_4b5c90(void);
int64_t function_4b5cc0(void);
int64_t function_4b5cd0(void);
int64_t function_4b5ce0(void);
int64_t function_4b5cf0(void);
int64_t function_4b5d00(void);
int64_t function_4b5d10(void);
int64_t function_4b5d20(int64_t a1);
int64_t function_4b5d40(void);
int64_t function_4b5d70(void);
int64_t function_4b5d80(void);
int64_t function_4b5d90(void);
int64_t function_4b5da0(void);
int64_t function_4b5db0(void);
int64_t function_4b5dc0(int64_t a1);
int64_t function_4b5de0(void);
int64_t function_4b5e10(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_4b5e30(void);
int64_t function_4b5e40(int64_t a1);
int64_t function_4b5e60(void);
int64_t function_4b5e90(int64_t a1);
int64_t function_4b5eb0(void);
int64_t function_4b5ee0(int64_t a1);
int64_t function_4b5f00(void);
int64_t function_4b5f30(void);
int64_t function_4b5f40(void);
int64_t function_4b5f50(void);
int64_t function_4b5f60(void);
int64_t function_4b5f70(void);
int64_t function_4b5f80(void);
int64_t function_4b5f90(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b6b10();
int64_t function_4b6ba0();
int64_t function_4b6bc0();
int64_t function_4b6c50();
int64_t function_4b7330();
int64_t function_4b7340();
int64_t function_4b7390();
int64_t function_4b73d0();
int64_t function_4b7490();
int64_t function_4b7730();
int64_t function_4b7810();
int64_t function_4b7cd0();
int64_t function_4c0310();
int64_t function_4c03a0();
int64_t function_4c0c90();
int64_t function_4cf010();
int64_t function_4cf0a0();
int64_t function_4cf0c0();
int64_t function_4cf150();
int64_t function_4cf940();
int64_t function_4cf9d0();
int64_t function_4cf9f0();
int64_t function_4cfb40();
int64_t function_4cfc60();
int64_t function_4cfd40();
int64_t function_4cfe30();
int64_t function_4cffb0();
int64_t function_4d0040();
int64_t function_4d0060();
int64_t function_4d08f0();
int64_t function_4d09e0();
int64_t function_4d0c20();
int64_t function_4d0d30();
int64_t function_4d0e20();
int64_t function_4d19d0();
int64_t function_4d1a60();
int64_t function_4d1b10();
int64_t function_4e4779(void);
int64_t function_4e4786(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4e7b5b();
int64_t function_4e7b79(void);
int64_t function_527a4();
int64_t function_527fe();
int64_t function_5289c();
int64_t function_542650();
int64_t function_550870();
int64_t function_550d00();
int64_t function_550d9f(void);
int64_t function_550db0(int64_t result, int64_t a2);
int64_t function_550dd0(int64_t a1, uint64_t a2, int64_t a3, int64_t a4);
int64_t function_550e50(int64_t a1, uint64_t a2, int64_t a3);
int64_t function_550eb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_550ed0(int64_t result);
int64_t function_550ee0(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_550f60(void);
int64_t function_550f70(int64_t a1, int64_t a2);
int64_t function_550f80(int64_t a1, int64_t a2, int64_t a3, uint64_t wstr, uint64_t a5);
int64_t function_551000(int64_t a1, int64_t a2, int64_t a3);
int64_t function_551010(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_551080(int64_t a1, int64_t a2, int64_t a3);
int64_t function_551100(int64_t result, int64_t a2);
int64_t function_551120(int64_t a1);
int64_t function_551130(void);
int64_t function_551140(int64_t result, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_551230(int64_t a1, int64_t wstr);
int64_t function_551260(int64_t a1, int64_t wstr);
int64_t function_551290(void);
int64_t function_5b0cc();
int64_t function_d808cc();
int64_t function_ffffffffc9067472();
int64_t function_ffffffffe6e4d7a7();
int64_t function_ffffffffef5d8bf2();
int64_t unknown_50b4c696();
int64_t unknown_ffffffffab406185();
int64_t unknown_ffffffffe4f10894();

// Address range: 0x24d57d - 0x24d587
int64_t function_24d57d(void) {
    int64_t result = unknown_ffffffffab406185(); // 0x24d57f
    char * v1 = (char *)(result + 1); // 0x24d584
    int64_t v2; // 0x24d57d
    *v1 = *v1 + (char)v2;
    return result;
}

// Address range: 0x24d58d - 0x24d58e
int64_t function_24d58d(int64_t a1) {
    // 0x24d58d
    int64_t result; // 0x24d58d
    return result;
}

// Address range: 0x24d5b0 - 0x24d5b8
int64_t function_24d5b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 0xc4be204); // 0x24d5b0
    int64_t result; // 0x24d5b0
    *v1 = *v1 - (char)result;
    return result;
}

// Address range: 0x24d5c5 - 0x24d5db
int64_t function_24d5c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x24d5c5
    int64_t v1; // 0x24d5c5
    __asm_out(-2, (char)v1);
    unsigned char v2 = *(char *)(a2 - 0x27295498); // 0x24d5ce
    uint32_t v3 = (int32_t)a4 % 32; // 0x24d5d6
    if (v3 != 0) {
        uint32_t v4 = (int32_t)a3;
        *(int32_t *)a3 = v4 << 32 - v3 | v4 >> v3;
    }
    int64_t v5 = v1 + 0x839301e8; // 0x24d5c9
    return v5 + v1 + (int64_t)(v2 > (char)v5) & 0xffffffff;
}

// Address range: 0x24d60f - 0x24d612
int64_t function_24d60f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x24d60f
    int64_t result; // 0x24d60f
    *(char *)a2 = (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x24d643 - 0x24d644
int64_t function_24d643(void) {
    // 0x24d643
    int64_t result; // 0x24d643
    return result;
}

// Address range: 0x24d66d - 0x24d66e
int64_t function_24d66d(void) {
    // 0x24d66d
    int64_t result; // 0x24d66d
    return result;
}

// Address range: 0x24d670 - 0x24d673
int64_t function_24d670(void) {
    // 0x24d670
    int64_t result; // 0x24d670
    return result;
}

// Address range: 0x24d68c - 0x24d6b0
int64_t function_24d68c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x24d68c
    int64_t v1; // 0x24d68c
    *(char *)a3 = (char)v1 - (char)a4;
    unknown_50b4c696();
    int32_t * v2 = (int32_t *)(v1 + 41); // 0x24d698
    *v2 = *v2 + (int32_t)a3;
    char v3 = (v1 & a4) / 256; // 0x24d69c
    int64_t v4 = a5; // 0x24d69e
    if (v3 >= 0) {
        v4 = function_24d66d();
    }
    // 0x24d6a0
    __asm_fbld(*(float80_t *)(v1 - 79));
    int64_t result = v4; // 0x24d6a3
    if (v3 == 0) {
        result = function_24d643();
    }
    // 0x24d6a5
    return result;
}

// Address range: 0x24d6b0 - 0x24d6b8
int64_t function_24d6b0(int64_t a1) {
    unsigned char v1 = *(char *)-0x13dded49; // 0x24d6b0
    int64_t v2; // 0x24d6b0
    unsigned char v3 = (char)((uint64_t)v2 / 256); // 0x24d6b0
    char v4 = v1 + v3; // 0x24d6b0
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x24d6b0
    *(char *)-0x13dded49 = v4;
    return v2 & -0xff01 | 256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v4 < v1) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v1 % 16 + v3 % 16 > 15) | 4 * (int64_t)(v5 % 2 == 0)) | 512;
}

// Address range: 0x24d770 - 0x24d771
int64_t function_24d770(int64_t a1) {
    // 0x24d770
    int64_t result; // 0x24d770
    return result;
}

// Address range: 0x24d77b - 0x24d77e
int64_t function_24d77b(int64_t a1) {
    // 0x24d77b
    int64_t result; // 0x24d77b
    return result;
}

// Address range: 0x24d7d3 - 0x24d7e9
int64_t function_24d7d3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x24d7d3
    int64_t v1; // 0x24d7d3
    int64_t v2 = v1 & -0xff01 | (int64_t)"cxa_get_globals_fast"; // 0x24d7d3
    int32_t * v3 = (int32_t *)v2; // 0x24d7d5
    *v3 = *v3 + (int32_t)v2;
    char * v4 = (char *)(v2 + 2 * v1); // 0x24d7d7
    *v4 = *v4 & (char)a3;
    __asm_pmaxub(v1, v1);
    *(char *)(a3 - 0x3462c542) = 0;
    return function_d808cc();
}

// Address range: 0x24d808 - 0x24d80c
int64_t function_24d808(int64_t a1, int64_t a2) {
    // 0x24d808
    int64_t result; // 0x24d808
    return result;
}

// Address range: 0x24d857 - 0x24d85a
int64_t function_24d857(void) {
    // 0x24d857
    int64_t result; // 0x24d857
    return result;
}

// Address range: 0x24d885 - 0x24d896
int64_t function_24d885(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x24d885
    return unknown_ffffffffe4f10894(a1, a2, a3, a4, a5, a6, a7);
}

// Address range: 0x24d903 - 0x24d904
int64_t function_24d903(void) {
    // 0x24d903
    int64_t result; // 0x24d903
    return result;
}

// Address range: 0x24d91d - 0x24d91f
int64_t function_24d91d(void) {
    // 0x24d91d
    return function_24d903();
}

// Address range: 0x24d9aa - 0x24d9ac
int64_t function_24d9aa(int64_t a1) {
    // 0x24d9aa
    int64_t result; // 0x24d9aa
    return result;
}

// Address range: 0x24d9ba - 0x24d9bb
int64_t function_24d9ba(int64_t a1) {
    // 0x24d9ba
    int64_t result; // 0x24d9ba
    return result;
}

// Address range: 0x24da45 - 0x24da5e
int64_t function_24da45(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 - 0x51a53741); // 0x24da4e
    *v1 = *v1 + (char)a4;
    int64_t v2; // 0x24da45
    return v2 & 0xffffffff;
}

// Address range: 0x3db9b9 - 0x3db9d2
int64_t function_3db9b9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3db9b9
    int64_t v1; // 0x3db9b9
    int64_t v2 = v1;
    uint64_t v3 = ((v2 + 147) % 256 | v2 & 0xffffff00) ^ 0xe87a2cfa; // 0x3db9bc
    char * v4 = (char *)v3; // 0x3db9c3
    *v4 = *v4 + (char)(a4 / 256);
    char * v5 = (char *)(v3 + 0x1e81a00); // 0x3db9c5
    *v5 = *v5 + (char)(v3 / 256);
    return function_3dba2b();
}

// Address range: 0x3db9d2 - 0x3db9d3
int64_t function_3db9d2(void) {
    // 0x3db9d2
    int64_t result; // 0x3db9d2
    return result;
}

// Address range: 0x3dba05 - 0x3dba0b
int64_t function_3dba05(int64_t a1, int64_t a2) {
    // 0x3dba05
    bool v1; // 0x3dba05
    int64_t v2 = v1 ? -4 : 4; // 0x3dba05
    return function_225d46a(v2 + a1, v2 + a2);
}

// Address range: 0x3dba2b - 0x3dba2d
int64_t function_3dba2b(void) {
    // 0x3dba2b
    int64_t v1; // 0x3dba2b
    return (int64_t)&v1;
}

// Address range: 0x3dba44 - 0x3dba4b
int64_t function_3dba44(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3dba44
    int64_t v1; // 0x3dba44
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)a3;
    return function_23dbc33();
}

// Address range: 0x3dba60 - 0x3dba63
int64_t function_3dba60(int64_t a1) {
    // 0x3dba60
    int64_t result; // 0x3dba60
    return result;
}

// Address range: 0x466e34 - 0x466eb9
int64_t function_466e34(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x466e34
    int64_t result; // 0x466e34
    bool v1; // 0x466e34
    if (v1) {
        // 0x466eb8
        *(int32_t *)a1 = (int32_t)a2;
        return result;
    }
    // 0x466e39
    return result;
}

// Address range: 0x466ef3 - 0x466efc
int64_t function_466ef3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x50892a27); // 0x466ef3
    int64_t result; // 0x466ef3
    *v1 = *v1 & (int32_t)result;
    return result;
}

// Address range: 0x467034 - 0x46703d
int64_t function_467034(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x467034
    int64_t v1; // 0x467034
    __asm_out(75, (char)v1);
    return v1 & 0xffffffff;
}

// Address range: 0x467074 - 0x467075
int64_t function_467074(int64_t a1) {
    // 0x467074
    int64_t result; // 0x467074
    return result;
}

// Address range: 0x4670bd - 0x4670c2
int64_t function_4670bd(void) {
    // 0x4670bd
    return function_ffffffffe6e4d7a7();
}

// Address range: 0x4670c8 - 0x4670cb
int64_t function_4670c8(void) {
    // 0x4670c8
    int64_t result; // 0x4670c8
    return result;
}

// Address range: 0x467118 - 0x467119
int64_t function_467118(int64_t a1) {
    // 0x467118
    int64_t result; // 0x467118
    return result;
}

// Address range: 0x4671b4 - 0x4671be
int64_t function_4671b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4671b4
    int64_t v1; // 0x4671b4
    int64_t v2 = v1;
    return (v2 + 24) % 256 | v2 & -256;
}

// Address range: 0x4671e2 - 0x4671e7
int64_t function_4671e2(int64_t a1) {
    // 0x4671e2
    int64_t v1; // 0x4671e2
    return v1 & 0xffffffff & v1;
}

// Address range: 0x4671e7 - 0x467269
int64_t function_4671e7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4671e7
    int64_t result; // 0x4671e7
    return result;
}

// Address range: 0x467286 - 0x46728e
int64_t function_467286(void) {
    // 0x467286
    return function_ffffffffc9067472();
}

// Address range: 0x4672b5 - 0x4672ed
int64_t function_4672b5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x4672b5
    int64_t v1; // 0x4672b5
    *(char *)0x5aa8817164cc8963 = (char)v1;
    char v2 = *(char *)(a3 - 127); // 0x4672c6
    __asm_iretd();
    char v3 = *(char *)0x3fb062349a4a553d; // 0x4672ca
    int64_t v4 = 256 * (int64_t)(v3 + (char)(a3 / 256)) | a3 & -0xff01; // 0x4672d8
    bool v5; // 0x4672b5
    int64_t v6 = v5 ? -1 : 1; // 0x4672da
    int64_t v7 = v6 + a1; // 0x4672da
    int64_t v8 = v6 + a2; // 0x4672da
    *(char *)(v8 + 104) = (char)a3;
    __asm_int1(v7, v8, v4);
    int32_t * v9 = (int32_t *)(v7 + 49 + 4 * (a4 & 0x3fffffffffffff00 | (int64_t)(v2 | (char)a4))); // 0x4672e8
    int64_t v10; // bp-31807, 0x4672b5
    *v9 = *v9 ^ (int32_t)(int64_t)&v10;
    return (int64_t)(*(int32_t *)v4 ^ (int32_t)v1);
}

// Address range: 0x4b5ade - 0x4b5adf
int64_t function_4b5ade(void) {
    // 0x4b5ade
    int64_t result; // 0x4b5ade
    return result;
}

// Address range: 0x4b5adf - 0x4b5af5
int64_t function_4b5adf(void) {
    // 0x4b5adf
    int64_t result; // 0x4b5adf
    return result;
}

// Address range: 0x4b5b00 - 0x4b5b05
int64_t function_4b5b00(void) {
    // 0x4b5b00
    int64_t result; // 0x4b5b00
    return result;
}

// Address range: 0x4b5b10 - 0x4b5b22
int64_t function_4b5b10(int64_t a1) {
    // 0x4b5b10
    function_4b6c50();
    free((int64_t *)a1);
    return (int64_t)&g4;
}

// Address range: 0x4b5b30 - 0x4b5b55
int64_t function_4b5b30(void) {
    int64_t * mem = calloc(1, 384); // 0x4b5b3b
    int64_t result = (int64_t)mem; // 0x4b5b3b
    if (mem != NULL) {
        // 0x4b5b48
        function_4b6bc0(result);
    }
    // 0x4b5b50
    return result;
}

// Address range: 0x4b5b60 - 0x4b5b65
int64_t function_4b5b60(void) {
    // 0x4b5b60
    return function_4b73d0();
}

// Address range: 0x4b5b70 - 0x4b5b75
int64_t function_4b5b70(void) {
    // 0x4b5b70
    return function_4b7390();
}

// Address range: 0x4b5b80 - 0x4b5b85
int64_t function_4b5b80(void) {
    // 0x4b5b80
    return function_4b7cd0();
}

// Address range: 0x4b5b90 - 0x4b5b9b
int64_t function_4b5b90(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4b5b90
    return function_4b7810();
}

// Address range: 0x4b5ba0 - 0x4b5bb2
int64_t function_4b5ba0(int64_t a1) {
    // 0x4b5ba0
    function_4b6ba0();
    free((int64_t *)a1);
    return (int64_t)&g4;
}

// Address range: 0x4b5bc0 - 0x4b5be5
int64_t function_4b5bc0(void) {
    int64_t * mem = calloc(1, 128); // 0x4b5bcb
    int64_t result = (int64_t)mem; // 0x4b5bcb
    if (mem != NULL) {
        // 0x4b5bd8
        function_4b6b10(result);
    }
    // 0x4b5be0
    return result;
}

// Address range: 0x4b5bf0 - 0x4b5bf5
int64_t function_4b5bf0(void) {
    // 0x4b5bf0
    return function_4b7340();
}

// Address range: 0x4b5c00 - 0x4b5c05
int64_t function_4b5c00(void) {
    // 0x4b5c00
    return function_4b7330();
}

// Address range: 0x4b5c10 - 0x4b5c15
int64_t function_4b5c10(void) {
    // 0x4b5c10
    return function_4b7730();
}

// Address range: 0x4b5c20 - 0x4b5c2b
int64_t function_4b5c20(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4b5c20
    return function_4b7490();
}

// Address range: 0x4b5c30 - 0x4b5c3f
int64_t function_4b5c30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b5c30
    return function_4d1a60();
}

// Address range: 0x4b5c40 - 0x4b5c4f
int64_t function_4b5c40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b5c40
    return function_4d1a60();
}

// Address range: 0x4b5c50 - 0x4b5c5f
int64_t function_4b5c50(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b5c50
    return function_4c03a0();
}

// Address range: 0x4b5c60 - 0x4b5c6f
int64_t function_4b5c60(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b5c60
    return function_4c03a0();
}

// Address range: 0x4b5c70 - 0x4b5c82
int64_t function_4b5c70(int64_t a1) {
    // 0x4b5c70
    function_4d0040();
    free((int64_t *)a1);
    return (int64_t)&g4;
}

// Address range: 0x4b5c90 - 0x4b5cb5
int64_t function_4b5c90(void) {
    int64_t * mem = calloc(1, 276); // 0x4b5c9b
    int64_t result = (int64_t)mem; // 0x4b5c9b
    if (mem != NULL) {
        // 0x4b5ca8
        function_4cffb0(result);
    }
    // 0x4b5cb0
    return result;
}

// Address range: 0x4b5cc0 - 0x4b5cc5
int64_t function_4b5cc0(void) {
    // 0x4b5cc0
    return function_4d08f0();
}

// Address range: 0x4b5cd0 - 0x4b5cd5
int64_t function_4b5cd0(void) {
    // 0x4b5cd0
    return function_4d0060();
}

// Address range: 0x4b5ce0 - 0x4b5ce5
int64_t function_4b5ce0(void) {
    // 0x4b5ce0
    return function_4d0e20();
}

// Address range: 0x4b5cf0 - 0x4b5cf5
int64_t function_4b5cf0(void) {
    // 0x4b5cf0
    return function_4d0d30();
}

// Address range: 0x4b5d00 - 0x4b5d05
int64_t function_4b5d00(void) {
    // 0x4b5d00
    return function_4d0c20();
}

// Address range: 0x4b5d10 - 0x4b5d15
int64_t function_4b5d10(void) {
    // 0x4b5d10
    return function_4d09e0();
}

// Address range: 0x4b5d20 - 0x4b5d32
int64_t function_4b5d20(int64_t a1) {
    // 0x4b5d20
    function_4cf9d0();
    free((int64_t *)a1);
    return (int64_t)&g4;
}

// Address range: 0x4b5d40 - 0x4b5d65
int64_t function_4b5d40(void) {
    int64_t * mem = calloc(1, (int32_t)&g1); // 0x4b5d4b
    int64_t result = (int64_t)mem; // 0x4b5d4b
    if (mem != NULL) {
        // 0x4b5d58
        function_4cf940(result);
    }
    // 0x4b5d60
    return result;
}

// Address range: 0x4b5d70 - 0x4b5d75
int64_t function_4b5d70(void) {
    // 0x4b5d70
    return function_4cf9f0();
}

// Address range: 0x4b5d80 - 0x4b5d85
int64_t function_4b5d80(void) {
    // 0x4b5d80
    return function_4cfe30();
}

// Address range: 0x4b5d90 - 0x4b5d95
int64_t function_4b5d90(void) {
    // 0x4b5d90
    return function_4cfd40();
}

// Address range: 0x4b5da0 - 0x4b5da5
int64_t function_4b5da0(void) {
    // 0x4b5da0
    return function_4cfc60();
}

// Address range: 0x4b5db0 - 0x4b5db5
int64_t function_4b5db0(void) {
    // 0x4b5db0
    return function_4cfb40();
}

// Address range: 0x4b5dc0 - 0x4b5dd2
int64_t function_4b5dc0(int64_t a1) {
    // 0x4b5dc0
    function_4cf0a0();
    free((int64_t *)a1);
    return (int64_t)&g4;
}

// Address range: 0x4b5de0 - 0x4b5e05
int64_t function_4b5de0(void) {
    int64_t * mem = calloc(1, 264); // 0x4b5deb
    int64_t result = (int64_t)mem; // 0x4b5deb
    if (mem != NULL) {
        // 0x4b5df8
        function_4cf010(result);
    }
    // 0x4b5e00
    return result;
}

// Address range: 0x4b5e10 - 0x4b5e2e
int64_t function_4b5e10(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t result = 0xffff9f00; // 0x4b5e18
    if (a3 % 8 == 0) {
        // 0x4b5e1a
        function_4cf0c0();
        result = 0;
    }
    // 0x4b5e2c
    return result;
}

// Address range: 0x4b5e30 - 0x4b5e35
int64_t function_4b5e30(void) {
    // 0x4b5e30
    return function_4cf150();
}

// Address range: 0x4b5e40 - 0x4b5e52
int64_t function_4b5e40(int64_t a1) {
    // 0x4b5e40
    function_4d1b10();
    free((int64_t *)a1);
    return (int64_t)&g4;
}

// Address range: 0x4b5e60 - 0x4b5e85
int64_t function_4b5e60(void) {
    int64_t * mem = calloc(1, 88); // 0x4b5e6b
    int64_t result = (int64_t)mem; // 0x4b5e6b
    if (mem != NULL) {
        // 0x4b5e78
        function_4d19d0(result);
    }
    // 0x4b5e80
    return result;
}

// Address range: 0x4b5e90 - 0x4b5ea2
int64_t function_4b5e90(int64_t a1) {
    // 0x4b5e90
    function_4c0c90();
    free((int64_t *)a1);
    return (int64_t)&g4;
}

// Address range: 0x4b5eb0 - 0x4b5ed5
int64_t function_4b5eb0(void) {
    int64_t * mem = calloc(1, 416); // 0x4b5ebb
    int64_t result = (int64_t)mem; // 0x4b5ebb
    if (mem != NULL) {
        // 0x4b5ec8
        function_4c0310(result);
    }
    // 0x4b5ed0
    return result;
}

// Address range: 0x4b5ee0 - 0x4b5ef2
int64_t function_4b5ee0(int64_t a1) {
    // 0x4b5ee0
    function_4add10();
    free((int64_t *)a1);
    return (int64_t)&g4;
}

// Address range: 0x4b5f00 - 0x4b5f25
int64_t function_4b5f00(void) {
    int64_t * mem = calloc(1, 288); // 0x4b5f0b
    int64_t result = (int64_t)mem; // 0x4b5f0b
    if (mem != NULL) {
        // 0x4b5f18
        function_4adc80(result);
    }
    // 0x4b5f20
    return result;
}

// Address range: 0x4b5f30 - 0x4b5f35
int64_t function_4b5f30(void) {
    // 0x4b5f30
    return function_4ae080();
}

// Address range: 0x4b5f40 - 0x4b5f45
int64_t function_4b5f40(void) {
    // 0x4b5f40
    return function_4add30();
}

// Address range: 0x4b5f50 - 0x4b5f55
int64_t function_4b5f50(void) {
    // 0x4b5f50
    return function_4aef80();
}

// Address range: 0x4b5f60 - 0x4b5f65
int64_t function_4b5f60(void) {
    // 0x4b5f60
    return function_4aedd0();
}

// Address range: 0x4b5f70 - 0x4b5f75
int64_t function_4b5f70(void) {
    // 0x4b5f70
    return function_4aecc0();
}

// Address range: 0x4b5f80 - 0x4b5f85
int64_t function_4b5f80(void) {
    // 0x4b5f80
    return function_4aec20();
}

// Address range: 0x4b5f90 - 0x4b5fd2
int64_t function_4b5f90(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b5f90
    memcpy((int64_t *)a2, (int64_t *)(g3 + a1), (int32_t)a3);
    g3 += a3;
    return 0;
}

// Address range: 0x4e4779 - 0x4e477a
int64_t function_4e4779(void) {
    // 0x4e4779
    int64_t result; // 0x4e4779
    return result;
}

// Address range: 0x4e4786 - 0x4e478c
int64_t function_4e4786(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4e4786
    int64_t v1; // 0x4e4786
    __asm_out_133((int16_t)a3, (int32_t)v1);
    return function_ffffffffef5d8bf2();
}

// Address range: 0x4e7b79 - 0x4e7b7b
int64_t function_4e7b79(void) {
    // 0x4e7b79
    return function_4e7b5b();
}

// Address range: 0x550d9f - 0x550da4
int64_t function_550d9f(void) {
    // 0x550d9f
    return function_550d00();
}

// Address range: 0x550db0 - 0x550dcf
int64_t function_550db0(int64_t result, int64_t a2) {
    // 0x550db0
    function_550d00();
    return result;
}

// Address range: 0x550dd0 - 0x550e4a
int64_t function_550dd0(int64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = *(int64_t *)(a1 - 24); // 0x550dd6
    if (v1 >= a2) {
        // 0x550ddf
        return function_550d00();
    }
    // 0x550de9
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::insert", a2, v1, a4 & 0xffffffff);
    function_550d00();
    *(int32_t *)"OSIX" = -1;
    return (int64_t)"basic_string::insert";
}

// Address range: 0x550e50 - 0x550ea3
int64_t function_550e50(int64_t a1, uint64_t a2, int64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 - 24); // 0x550e53
    if (v1 >= a2) {
        // 0x550e69
        return function_550d00();
    }
    // 0x550e6e
    int64_t v2; // 0x550e50
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, v1, v2);
    return function_550d00();
}

// Address range: 0x550eb0 - 0x550ec4
int64_t function_550eb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x550eb0
    return function_550d00();
}

// Address range: 0x550ed0 - 0x550ede
int64_t function_550ed0(int64_t result) {
    // 0x550ed0
    int64_t v1; // 0x550ed0
    function_36cda(result, v1, v1);
    return result;
}

// Address range: 0x550ee0 - 0x550f58
int64_t function_550ee0(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    uint64_t v1 = *(int64_t *)(a2 - 24); // 0x550ee3
    if (v1 >= a3) {
        uint64_t v2 = v1 - a3; // 0x550eea
        return function_36cda(a1, 4 * a3 + a2, v2 > a4 ? a4 : v2);
    }
    // 0x550f05
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::assign", a3, v1, a2);
    return function_36cda((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int64_t)"basic_string::assign", (int64_t)wcslen((int32_t *)"basic_string::assign"));
}

// Address range: 0x550f60 - 0x550f65
int64_t function_550f60(void) {
    // 0x550f60
    int64_t v1; // 0x550f60
    return function_36cda(v1, v1, v1);
}

// Address range: 0x550f70 - 0x550f7c
int64_t function_550f70(int64_t a1, int64_t a2) {
    // 0x550f70
    int64_t v1; // 0x550f70
    return function_5b0cc(a1, a2 - a1 >> 2, v1, v1);
}

// Address range: 0x550f80 - 0x550ffa
int64_t function_550f80(int64_t a1, int64_t a2, int64_t a3, uint64_t wstr, uint64_t a5) {
    uint64_t v1 = *(int64_t *)(a3 - 24); // 0x550f83
    if (v1 >= wstr) {
        uint64_t v2 = v1 - wstr; // 0x550f8a
        return function_5b0cc(a1, a2, 4 * wstr + a3, v2 > a5 ? a5 : v2);
    }
    // 0x550fa5
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::insert", wstr, v1, a5);
    return function_5b0cc((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int64_t)"basic_string::insert", wstr, (int64_t)wcslen((int32_t *)wstr));
}

// Address range: 0x551000 - 0x55100c
int64_t function_551000(int64_t a1, int64_t a2, int64_t a3) {
    // 0x551000
    return function_5b0cc(a1, a2, a3, *(int64_t *)(a3 - 24));
}

// Address range: 0x551010 - 0x551077
int64_t function_551010(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x551010
    if (*(int64_t *)(a1 - 24) != 0) {
        // 0x551020
        return function_36ff8();
    }
    // 0x55102c
    int64_t v1; // 0x551010
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::erase", -1, 0, v1);
    int64_t v2 = *(int64_t *)0x848c20; // 0x551050
    if (v2 != (int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)") {
        // 0x551060
        *(int32_t *)" is %zu) > this->size() (which is %zu)" = (int32_t)"is %zu) > this->size() (which is %zu)";
    }
    // 0x551059
    return (int64_t)" > this->size() (which is %zu)";
}

// Address range: 0x551080 - 0x5510fb
int64_t function_551080(int64_t a1, int64_t a2, int64_t a3) {
    int64_t n = a3 + a1; // 0x55108a
    int64_t v1 = function_550870(n, *(int64_t *)(a1 + 8), a2); // 0x551094
    int64_t wstr = v1 + 24; // 0x55109f
    if (n != 0) {
        int64_t wstr2 = a1 + 24;
        if (n != 1) {
            // 0x5510c8
            wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
            if (v1 == g2) {
                // 0x5510bd
                return wstr;
            }
            // 0x5510e0
            *(int32_t *)(v1 + 16) = 0;
            *(int64_t *)v1 = wstr;
            *(int32_t *)(4 * wstr + wstr) = 0;
            return wstr;
        }
        // 0x5510ae
        *(int32_t *)wstr = *(int32_t *)wstr2;
    }
    // 0x5510b4
    if (v1 == g2) {
        // 0x5510bd
        return wstr;
    }
    // 0x5510e0
    *(int32_t *)(v1 + 16) = 0;
    *(int64_t *)v1 = n;
    *(int32_t *)(4 * n + wstr) = 0;
    return wstr;
}

// Address range: 0x551100 - 0x551120
int64_t function_551100(int64_t result, int64_t a2) {
    uint64_t v1 = *(int64_t *)(result - 16); // 0x551103
    if (*(int64_t *)(result - 24) < v1) {
        // 0x551110
        return function_527a4(result, 0, v1);
    }
    // 0x55110d
    return result;
}

// Address range: 0x551120 - 0x55112e
int64_t function_551120(int64_t a1) {
    // 0x551120
    int64_t v1; // 0x551120
    function_1fd40(v1);
    return function_20540();
}

// Address range: 0x551130 - 0x551135
int64_t function_551130(void) {
    // 0x551130
    return function_527fe();
}

// Address range: 0x551140 - 0x551225
int64_t function_551140(int64_t result, int64_t a2, uint64_t a3, uint64_t a4) {
    uint64_t v1 = *(int64_t *)(a2 - 24); // 0x55114e
    if (v1 < a3) {
        // 0x551205
        int64_t v2; // 0x551140
        function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::append", a3, v1, v2);
        return function_5289c((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int64_t)"basic_string::append", a3);
    }
    uint64_t v3 = v1 - a3; // 0x55115b
    int64_t n = v3 > a4 ? a4 : v3; // 0x551164
    if (n == 0) {
        // 0x5511b6
        return result;
    }
    int64_t v4 = result - 24;
    int64_t * v5 = (int64_t *)v4; // 0x551173
    int64_t v6 = *v5; // 0x551173
    int64_t v7 = v6 + n; // 0x551177
    int64_t v8; // 0x551140
    int64_t v9; // 0x551140
    if (*(int64_t *)(result - 16) >= v7) {
        int32_t v10 = *(int32_t *)(result - 8); // 0x5511c8
        v8 = v6;
        v9 = a2;
        if (v10 >= 0 == (v10 != 0)) {
            goto lab_0x551180;
        } else {
            goto lab_0x551193;
        }
    } else {
        goto lab_0x551180;
    }
  lab_0x551180:
    // 0x551180
    function_527a4(result, (int32_t)v7, a2);
    v8 = *v5;
    v9 = v7;
    goto lab_0x551193;
  lab_0x551193:;
    int64_t wstr2 = v9 + 4 * a3; // 0x551193
    int64_t wstr = 4 * v8 + result; // 0x55119f
    int64_t v11; // 0x551140
    int64_t v12; // 0x551140
    if (n != 1) {
        // 0x5511d8
        wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
        v11 = wstr - 24;
        v12 = wstr;
    } else {
        // 0x5511a5
        *(int32_t *)wstr = *(int32_t *)wstr2;
        v11 = v4;
        v12 = result;
    }
    // 0x5511a9
    if (v11 != g2) {
        // 0x5511f0
        *(int32_t *)(v12 - 8) = 0;
        *(int64_t *)v11 = v7;
        *(int32_t *)(v12 + 4 * v7) = 0;
    }
    // 0x5511b6
    return result;
}

// Address range: 0x551230 - 0x551258
int64_t function_551230(int64_t a1, int64_t wstr) {
    // 0x551230
    return function_5289c(a1, wstr, (int64_t)wcslen((int32_t *)wstr));
}

// Address range: 0x551260 - 0x551288
int64_t function_551260(int64_t a1, int64_t wstr) {
    // 0x551260
    return function_5289c(a1, wstr, (int64_t)wcslen((int32_t *)wstr));
}

// Address range: 0x551290 - 0x551295
int64_t function_551290(void) {
    // 0x551290
    int64_t v1; // 0x551290
    return function_5289c(v1, v1, v1);
}
