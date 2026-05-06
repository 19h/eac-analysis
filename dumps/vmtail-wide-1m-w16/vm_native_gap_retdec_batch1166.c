/*
 * Targeted RetDec C for native executable gap queue batch 1166.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x35ce8a-0x35d08a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35d08a-0x35d28a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35d28a-0x35d48a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35d48a-0x35d68a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35d68a-0x35d88a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35d88a-0x35da8a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35da8a-0x35dc8a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35dc8a-0x35de8a rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bd57b-0x4bd77b rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bd77b-0x4bd97b rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bd97b-0x4bdb7b rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bdb7b-0x4bdd7b rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bdd7b-0x4bdf7b rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bdf7b-0x4be17b rank=- name=- kind=- bytes=- uncovered=-
 *   0x4be17b-0x4be37b rank=- name=- kind=- bytes=- uncovered=-
 *   0x4be37b-0x4be57b rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_180ad224();
int64_t function_2f4e33bc();
int64_t function_35ce8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_35cf3f(void);
int64_t function_35cff6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35cfff(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35d001(void);
int64_t function_35d048(void);
int64_t function_35d068(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35d0b6(void);
int64_t function_35d0c1(void);
int64_t function_35d11c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_35d1ae(int64_t a1, int64_t a2, int64_t a3);
int64_t function_35d21c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35d229(int64_t a1);
int64_t function_35d276(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35d2d9(int64_t a1);
int64_t function_35d2df(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35d317(int64_t a1, int64_t a2, int64_t a3);
int64_t function_35d3df(int64_t a1, int64_t a2, int64_t a3);
int64_t function_35d43e(int64_t a1);
int64_t function_35d45c(int16_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_35d515(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35d582(int64_t a1);
int64_t function_35d584(int64_t a1, int64_t a2, int64_t a3);
int64_t function_35d616(void);
int64_t function_35d62a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35d64f(int64_t a1);
int64_t function_35d66b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_35d690(void);
int64_t function_35d6cb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_35d742(void);
int64_t function_35d749(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_35d785(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_35d7b5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_35d84a(void);
int64_t function_35d85a(void);
int64_t function_35d860(void);
int64_t function_35d868(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35d86a(int64_t a1);
int64_t function_35d8a0(int64_t a1);
int64_t function_35d8eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35d96b(void);
int64_t function_35d9f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_35da3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_35da70(void);
int64_t function_35da73(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35daa1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_35db90(void);
int64_t function_35dc2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35dc8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35dc98(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35ddc8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_35dde0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35de07(void);
int64_t function_35de0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35de3d(void);
int64_t function_3bc3d78f();
int64_t function_4242e641();
int64_t function_4b08f0();
int64_t function_4b0e20();
int64_t function_4b1220();
int64_t function_4b16c0();
int64_t function_4b1820();
int64_t function_4b1ac0();
int64_t function_4b1c60();
int64_t function_4bd57b(int64_t a1);
int64_t function_4bd660(int64_t a1);
int64_t function_4bd710(int64_t a1);
int64_t function_4bd920(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4bdfd0(int64_t a1);
int64_t function_4be0c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4be500(void);
int64_t function_4be518(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4be522(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4be526(void);
int64_t function_4be52d(void);
int64_t function_4be537(void);
int64_t function_4be540(void);
int64_t function_4be542(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_4be56b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4beae0();
int64_t function_9d335e();
int64_t function_cf3c7();
int64_t function_ffffffff98333b6d();
int64_t function_ffffffffa381c23c();
int64_t function_ffffffffb1fb2158();
int64_t unknown_13a0bd9b();
int64_t unknown_14470ea1();
int64_t unknown_1f37bd39();
int64_t unknown_1fff1ffa();
int64_t unknown_28c3a08a();
int64_t unknown_290b13f7();
int64_t unknown_2a9949c7();
int64_t unknown_2c497c27();
int64_t unknown_2eacfaab();
int64_t unknown_3d4d1546();
int64_t unknown_484c1c3d();
int64_t unknown_ffffffff89196597();
int64_t unknown_ffffffff8c2aee22();
int64_t unknown_ffffffff9b2c2de6();
int64_t unknown_ffffffffabeaf65f();
int64_t unknown_ffffffffad7af889();
int64_t unknown_ffffffffb37390ae();
int64_t unknown_ffffffffb42be1d8();
int64_t unknown_ffffffffb93676c2();
int64_t unknown_ffffffffbb305273();
int64_t unknown_ffffffffc5338aa6();
int64_t unknown_ffffffffc7371707();
int64_t unknown_ffffffffc737ba45();
int64_t unknown_ffffffffcbd5ca69();
int64_t unknown_ffffffffd26bc433();
int64_t unknown_ffffffffd295f772();
int64_t unknown_ffffffffdf448c96();
int64_t unknown_ffffffffe3a82b8a();
int64_t unknown_ffffffffee0c7479();
int64_t unknown_fffffffff1130faa();
int64_t unknown_fffffffff9e7fcb7();

// Address range: 0x35ce8a - 0x35cf3f
int64_t function_35ce8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x35ce8a
    return function_cf3c7();
}

// Address range: 0x35cf3f - 0x35cf44
int64_t function_35cf3f(void) {
    // 0x35cf3f
    int64_t result; // 0x35cf3f
    return result;
}

// Address range: 0x35cff6 - 0x35cffe
int64_t function_35cff6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (unsigned char)(char)a4 % 32; // 0x35cff6
    if (v1 != 0) {
        char * v2 = (char *)(a4 - 0x5c9aff6f); // 0x35cff6
        *v2 = *v2 << v1;
    }
    return function_35d001();
}

// Address range: 0x35cfff - 0x35d001
int64_t function_35cfff(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x35cfff
    int64_t result; // 0x35cfff
    *(int32_t *)a4 = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x35d001 - 0x35d013
int64_t function_35d001(void) {
    // 0x35d001
    int64_t result; // 0x35d001
    *(int32_t *)-0x6ff52f16076180f7 = (int32_t)result;
    return result;
}

// Address range: 0x35d048 - 0x35d049
int64_t function_35d048(void) {
    // 0x35d048
    int64_t result; // 0x35d048
    return result;
}

// Address range: 0x35d068 - 0x35d082
int64_t function_35d068(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x35d068
    int64_t v1; // 0x35d068
    if (v1 > (int64_t)*(char *)(a3 + 0x13d00aa)) {
        function_35d048();
    }
    // 0x35d079
    __asm_iretd((int64_t)(*(int32_t *)(a1 - 0x7f887fe) | (int32_t)a1));
    __asm_hlt();
    return function_9d335e();
}

// Address range: 0x35d0b6 - 0x35d0be
int64_t function_35d0b6(void) {
    // 0x35d0b6
    return function_2f4e33bc();
}

// Address range: 0x35d0c1 - 0x35d0c2
int64_t function_35d0c1(void) {
    // 0x35d0c1
    int64_t result; // 0x35d0c1
    return result;
}

// Address range: 0x35d11c - 0x35d1ae
int64_t function_35d11c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t v2; // 0x35d11c
    bool v3; // 0x35d11c
    if (!v3) {
        v2 = function_35d0c1();
    }
    int64_t v4 = v3 ? -4 : 4; // 0x35d11e
    int64_t v5 = v4 + a1; // 0x35d11e
    uint64_t v6 = a4 - 1; // 0x35d11f
    int64_t v7; // 0x35d11c
    if (v6 != 0) {
        int64_t v8 = v2;
        char * v9 = (char *)v6; // 0x35d19f
        *v9 = *v9 + (char)v7;
        *(int32_t *)v5 = (int32_t)v8;
        *(int32_t *)0x49a70497 = *(int32_t *)0x49a70497 - (int32_t)v7;
        return (v8 + v6 / 256) % 256 | v8 & -256;
    }
    // 0x35d121
    unknown_2c497c27(v5, v4 + a2);
    *(char *)a3 = -88;
    unknown_484c1c3d();
    __asm_in((int16_t)a3);
    uint32_t v10 = *(int32_t *)0x4fe24ed7 + (int32_t)v7; // 0x35d150
    int64_t v11 = v10; // 0x35d150
    uint32_t v12 = *(int32_t *)0x38d12d0f ^ (int32_t)a3; // 0x35d153
    int64_t v13 = v7 + (int64_t)&v1 & 0xffffffff; // 0x35d159
    *(int32_t *)(v11 - 0x61cf1e37) = (int32_t)v5;
    *(int64_t *)(v13 - 8) = v13;
    *(char *)v5 = (char)unknown_ffffffffcbd5ca69();
    int64_t v14 = v5 + (v3 ? -1 : 1); // 0x35d16b
    unknown_ffffffffd295f772(v14);
    *(int64_t *)(v13 - 24) = v11;
    *(char *)(int64_t)v12 = (char)(v10 / 256);
    *(int32_t *)v14 = __asm_insd((int16_t)v12);
    int64_t result = unknown_28c3a08a(); // 0x35d184
    char * v15 = (char *)(result + 0x1e8b505); // 0x35d189
    *v15 = *v15 + (char)result;
    return result;
}

// Address range: 0x35d1ae - 0x35d1fc
int64_t function_35d1ae(int64_t a1, int64_t a2, int64_t a3) {
    // 0x35d1ae
    int64_t v1; // 0x35d1ae
    char v2 = v1;
    *(char *)-0x7fffca01ecfe178a = v2;
    *(char *)v1 = 2 * v2;
    int64_t v3; // 0x35d1ae
    int64_t v4 = v3;
    *(int32_t *)v4 = *(int32_t *)&v3 + (int32_t)v4;
    unknown_ffffffffb93676c2();
    char * v5 = (char *)(v1 - 0x20c1c560); // 0x35d1c1
    *v5 = *v5 + (char)v1;
    int64_t v6; // 0x35d1ae
    *(int32_t *)a1 = *(int32_t *)&v6 / 0x8000000;
    int128_t v7; // 0x35d1ae
    __asm_addps(v7, v7);
    unknown_ffffffffb37390ae();
    int64_t v8 = unknown_ffffffffc737ba45(); // 0x35d1dc
    int32_t v9 = v8; // 0x35d1e1
    *(int32_t *)v8 = v9;
    __asm_out(-24, v9);
    int32_t * v10 = (int32_t *)(a3 + a2 & 0xffffffff); // 0x35d1ee
    *v10 = *v10 | (int32_t)a1;
    return function_180ad224();
}

// Address range: 0x35d21c - 0x35d21f
int64_t function_35d21c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x35d21c
    int64_t result; // 0x35d21c
    return result;
}

// Address range: 0x35d229 - 0x35d22c
int64_t function_35d229(int64_t a1) {
    // 0x35d229
    int64_t result; // 0x35d229
    return result;
}

// Address range: 0x35d276 - 0x35d29a
int64_t function_35d276(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x35d276
    unknown_ffffffffad7af889();
    int32_t v1 = 0; // 0x35d288
    *(int32_t *)a4 = v1;
    __asm_int(-111);
    while (v1 >= 0) {
        // 0x35d294
        __asm_int(-111);
    }
    // 0x35d298
    return function_35d317(a1, 0x6f9f9f6d, 0x1e89ea5);
}

// Address range: 0x35d2d9 - 0x35d2df
int64_t function_35d2d9(int64_t a1) {
    // 0x35d2d9
    return function_ffffffffa381c23c();
}

// Address range: 0x35d2df - 0x35d2e3
int64_t function_35d2df(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x35d2df
    int64_t result; // 0x35d2df
    return result;
}

// Address range: 0x35d317 - 0x35d355
int64_t function_35d317(int64_t a1, int64_t a2, int64_t a3) {
    // 0x35d317
    int64_t v1; // 0x35d317
    *(char *)((a2 & 0xffffffff) - 81) = (char)((uint64_t)v1 / 256) ^ 123;
    int32_t * v2 = (int32_t *)(a2 & 0xffffff00); // 0x35d346
    *v2 = *v2 | 0xc8cf2e;
    bool v3; // 0x35d317
    return (int64_t)*(int32_t *)((v3 ? -4 : 4) + a2);
}

// Address range: 0x35d3df - 0x35d3f8
int64_t function_35d3df(int64_t a1, int64_t a2, int64_t a3) {
    // 0x35d3df
    int64_t v1; // 0x35d3df
    *(char *)0x4137111a = *(char *)0x4137111a + (char)v1;
    *(int32_t *)a3 = (int32_t)v1 - (int32_t)a2;
    int16_t v2; // 0x35d3df
    return function_35d45c(v2, a2, a3, v1);
}

// Address range: 0x35d43e - 0x35d441
int64_t function_35d43e(int64_t a1) {
    // 0x35d43e
    int64_t result; // 0x35d43e
    return result;
}

// Address range: 0x35d45c - 0x35d4ec
int64_t function_35d45c(int16_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x35d45c
    int64_t v1; // 0x35d45c
    uint64_t v2 = v1 - a4 / 256; // 0x35d45c
    int64_t result = v2 % 256 | v1 & -256; // 0x35d45c
    int32_t * v3 = (int32_t *)(v1 + 0x37807709); // 0x35d45e
    uint32_t v4 = *v3; // 0x35d45e
    uint32_t v5 = v4 + (int32_t)v1; // 0x35d45e
    *v3 = v5;
    if (v5 < v4 || v5 == 0) {
        // 0x35d466
        return result;
    }
    int64_t v6 = result + 0x3d423ed1; // 0x35d4d8
    int32_t * v7 = (int32_t *)(v6 & 0xffffffff); // 0x35d4dd
    *v7 = *v7 + (int32_t)v6;
    int32_t v8 = *(int32_t *)((int64_t)a1 + 78); // 0x35d4e9
    return v8 * (int32_t)(v6 & 0xffffff00 | (v2 + 123) % 256);
}

// Address range: 0x35d515 - 0x35d581
int64_t function_35d515(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x35d515
    int64_t v1; // 0x35d515
    uint64_t v2 = v1;
    unsigned char v3 = *(char *)-0x57f3cad6; // 0x35d523
    unsigned char v4 = (char)(v2 / 256); // 0x35d523
    char v5 = v3 + v4; // 0x35d523
    *(char *)-0x57f3cad6 = v5;
    if (v5 < 1) {
        // 0x35d581
        return v1 & -0xff01 | 256 * (64 * (int64_t)(v5 == 0) | (int64_t)(v5 < v3) | 128 * (int64_t)(v5 != 0) | 16 * (int64_t)(v3 % 16 + v4 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v5) % 2 == 0)) | 512;
    }
    int64_t v6 = v2 & 0xffffff00; // 0x35d531
    int64_t result = unknown_1f37bd39(); // 0x35d533
    *(char *)a1 = __asm_insb((int16_t)v6);
    if ((int32_t)result == -0x1aada2ff) {
        // 0x35d553
        return result;
    }
    // 0x35d540
    return function_35d584(a1, a2, v6);
}

// Address range: 0x35d582 - 0x35d584
int64_t function_35d582(int64_t a1) {
    // 0x35d582
    int64_t result; // 0x35d582
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x35d584 - 0x35d5b7
int64_t function_35d584(int64_t a1, int64_t a2, int64_t a3) {
    // 0x35d584
    unknown_ffffffffe3a82b8a();
    int64_t v1; // 0x35d584
    *(int32_t *)a3 = (int32_t)(v1 | a1);
    int64_t v2; // 0x35d584
    *(char *)a1 = *(char *)&v2;
    bool v3; // 0x35d584
    int64_t v4 = v3 ? -1 : 1; // 0x35d58b
    int64_t v5 = v4 + a1; // 0x35d58b
    int64_t v6 = v4 + a2; // 0x35d58b
    __asm_int1(v5, v6);
    __asm_hlt();
    unknown_ffffffff89196597();
    *(int32_t *)(v1 + 0x2e01c050) = (int32_t)v6;
    uint64_t v7 = unknown_2eacfaab(); // 0x35d5a5
    *(char *)v5 = *(char *)v6;
    char v8 = *(char *)(v1 - 0x41fe1752); // 0x35d5ad
    __asm_out_133(-40, (char)v7);
    return 256 * (int64_t)(v8 | (char)(v7 / 256)) | v7 & -0xff01;
}

// Address range: 0x35d616 - 0x35d617
int64_t function_35d616(void) {
    // 0x35d616
    int64_t result; // 0x35d616
    return result;
}

// Address range: 0x35d62a - 0x35d637
int64_t function_35d62a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x35d62a
    int64_t v1; // 0x35d62a
    if ((int32_t)(v1 & a1) != 0) {
        function_35d616();
    }
    int32_t * v2 = (int32_t *)(a4 - 110); // 0x35d62e
    *v2 = *v2 + (int32_t)v1;
    return function_3bc3d78f();
}

// Address range: 0x35d64f - 0x35d650
int64_t function_35d64f(int64_t a1) {
    // 0x35d64f
    int64_t result; // 0x35d64f
    return result;
}

// Address range: 0x35d66b - 0x35d67d
int64_t function_35d66b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x35d66b
    int64_t v1; // 0x35d66b
    *(int16_t *)(a2 + 0x1e810f5) = (int16_t)v1;
    return v1 & -256 | (int64_t)*(char *)-0x672bffecd0d35ff6;
}

// Address range: 0x35d690 - 0x35d6a1
int64_t function_35d690(void) {
    // 0x35d690
    int64_t v1; // 0x35d690
    return v1 + 0xe38b4a8a & 0xffffffff;
}

// Address range: 0x35d6cb - 0x35d6e5
int64_t function_35d6cb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a3 - 0x1241193b); // 0x35d6cb
    bool v2; // 0x35d6cb
    *v1 = *v1 + 22 + (char)(bool)v2;
    int64_t v3 = unknown_ffffffffb42be1d8(); // 0x35d6d2
    char * v4 = (char *)(a1 + 0x3bb822f9); // 0x35d6d7
    *v4 = *v4 + (char)(a4 / 256);
    return v3 + 0x1efe1790 & 0xffffffff;
}

// Address range: 0x35d742 - 0x35d745
int64_t function_35d742(void) {
    // 0x35d742
    int64_t v1; // 0x35d742
    return function_35d7b5(v1, v1, v1, v1, (int64_t)&g2);
}

// Address range: 0x35d749 - 0x35d75a
int64_t function_35d749(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x35d749
    int64_t v1; // 0x35d749
    int32_t * v2 = (int32_t *)(v1 + 0x70873b0a); // 0x35d74b
    *v2 = *v2 + (int32_t)v1;
    int64_t v3; // 0x35d749
    unsigned char v4 = *(char *)&v3; // 0x35d751
    unsigned char v5 = (char)v3; // 0x35d751
    unsigned char v6 = *(char *)(v3 + (8 * v1 | 1)) + v5; // 0x35d753
    unsigned char v7 = v6 + (char)(v4 < v5); // 0x35d753
    bool v8 = v4 < v5 ? v7 <= v5 : v6 < v5; // 0x35d753
    return v3 & -256 | (int64_t)(v7 - 105 + (char)v8);
}

// Address range: 0x35d785 - 0x35d7ab
int64_t function_35d785(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    char * v1 = (char *)(a3 - 0x1723fb10); // 0x35d785
    bool v2; // 0x35d785
    *v1 = (char)v2 - (char)(a4 / 256) + *v1;
    int32_t * v3 = (int32_t *)(a4 - 99); // 0x35d78b
    int64_t v4; // 0x35d785
    *v3 = *v3 + (int32_t)v4;
    uint32_t v5 = (int32_t)a4 % 32; // 0x35d78e
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)(4 * v4 - 44 + v4); // 0x35d78e
        *v6 = *v6 >> v5;
    }
    *(char *)a1 = (char)v4;
    unknown_13a0bd9b((v2 ? -1 : 1) + a1, a5);
    return unknown_ffffffffc5338aa6();
}

// Address range: 0x35d7b5 - 0x35d7c9
int64_t function_35d7b5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 - 110); // 0x35d7b5
    *v1 = *v1 + (char)a1;
    int64_t result; // 0x35d7b5
    uint32_t v2 = (int32_t)result >> 31; // 0x35d7bc
    int64_t v3; // 0x35d7b5
    unsigned char v4 = *(char *)&v3; // 0x35d7bd
    unsigned char v5 = v4 + (char)(a4 / 256); // 0x35d7bd
    *(char *)a1 = v5;
    char * v6 = (char *)(result - 0x173b75ae); // 0x35d7bf
    *v6 = *v6 + (char)(v2 / 256) + (char)(v5 < v4);
    int64_t v7; // 0x35d7b5
    *(int32_t *)a2 = *(int32_t *)&v7 + v2;
    return result;
}

// Address range: 0x35d84a - 0x35d84d
int64_t function_35d84a(void) {
    // 0x35d84a
    int64_t result; // 0x35d84a
    return result;
}

// Address range: 0x35d85a - 0x35d85f
int64_t function_35d85a(void) {
    // 0x35d85a
    return function_ffffffffb1fb2158();
}

// Address range: 0x35d860 - 0x35d867
int64_t function_35d860(void) {
    // 0x35d860
    int64_t v1; // 0x35d860
    return function_35d86a(v1);
}

// Address range: 0x35d868 - 0x35d86a
int64_t function_35d868(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x35d868
    int64_t result; // 0x35d868
    *(int32_t *)a4 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x35d86a - 0x35d876
int64_t function_35d86a(int64_t a1) {
    // 0x35d86a
    bool v1; // 0x35d86a
    __asm_iretd((v1 ? -1 : 1) + a1);
    return unknown_ffffffffee0c7479() & -0xff01;
}

// Address range: 0x35d8a0 - 0x35d8a3
int64_t function_35d8a0(int64_t a1) {
    // 0x35d8a0
    int64_t result; // 0x35d8a0
    return result;
}

// Address range: 0x35d8eb - 0x35d90b
int64_t function_35d8eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x35d8eb
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v1; // 0x35d8eb
    int32_t * v2 = (int32_t *)(v1 - 85); // 0x35d8f3
    char * v3 = (char *)(a2 + 0x3d000005); // 0x35d8f8
    int32_t * v4 = (int32_t *)(a3 - 0x1f3f0133); // 0x35d8fe
    int64_t v5 = v1 & -0xff01 | (int64_t)"cxa_get_globals_fast"; // 0x35d8f1
    while (true) {
        // 0x35d8f3
        *v2 = *v2 + (int32_t)a3;
        char * v6 = (char *)v5; // 0x35d8f6
        *v6 = *v6 + (char)v5;
        *v3 = *v3 + (char)a4;
        *v4 = *v4 + ((int32_t)v1 & -256);
        v5 = v5 + 0x13a94bd9 & 0xffffffff;
    }
}

// Address range: 0x35d96b - 0x35d96c
int64_t function_35d96b(void) {
    // 0x35d96b
    int64_t result; // 0x35d96b
    return result;
}

// Address range: 0x35d9f4 - 0x35da10
int64_t function_35d9f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x35d9f4
    __asm_out_134((int16_t)a3, (int32_t)unknown_1fff1ffa());
    bool v1; // 0x35d9f4
    int64_t v2 = v1 ? -1 : 1; // 0x35da00
    return unknown_ffffffffc7371707(v2 + a1, v2 + a2 + (v1 ? -4 : 4)) & -256 | 159;
}

// Address range: 0x35da3b - 0x35da6e
int64_t function_35da3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x35da3b
    unknown_3d4d1546();
    *(int32_t *)a4 = (int32_t)a4 + (int32_t)a1;
    int64_t v1; // 0x35da3b
    *(int32_t *)a2 = (int32_t)v1;
    int64_t result = (int64_t)*(char *)0x1e89970c74e2e22 | 0xf7b80100; // 0x35da69
    if ((a5 & 64) != 0 || (char)a5 < 0 != (a5 & (int64_t)L"\n2") != 0) {
        result = function_35daa1(0xdffcfdce, 0x1e8aea5, 0x5df50b3a, a4);
    }
    int32_t * v2 = (int32_t *)(result + 60); // 0x35da6b
    *v2 = *v2 & (int32_t)result;
    return result;
}

// Address range: 0x35da70 - 0x35da71
int64_t function_35da70(void) {
    // 0x35da70
    int64_t result; // 0x35da70
    return result;
}

// Address range: 0x35da73 - 0x35da78
int64_t function_35da73(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 57); // 0x35da73
    *v1 = *v1 + (int32_t)a4;
    bool v2; // 0x35da73
    return __asm_int1(a1, (v2 ? -1 : 1) + a2);
}

// Address range: 0x35daa1 - 0x35db36
int64_t function_35daa1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t v1 = a2;
    int64_t v2; // 0x35daa1
    int32_t v3 = v2; // 0x35daa1
    int32_t v4 = v3 + v1; // 0x35daa1
    *(int32_t *)a2 = v4;
    int64_t v5 = a4 & -256 | 126; // 0x35daa3
    *(char *)a1 = __asm_insb((int16_t)a3);
    if (v4 < 0 != ((v4 ^ v1) & (v4 ^ v3)) < 0) {
        function_35da73(a1, a2, a3, v5);
    }
    int32_t v6 = __asm_in_135(-69); // 0x35daac
    *(int32_t *)a1 = v6;
    bool v7; // 0x35daa1
    int64_t v8 = (v7 ? -4 : 4) + a1; // 0x35daae
    int64_t v9; // 0x35daa1
    if (v3 == -(int32_t)v9) {
        // 0x35dab1
        *(char *)-0x27c83c6e = *(char *)-0x27c83c6e + 100;
        char v10 = *(char *)&v9; // 0x35dabc
        *(char *)v9 = v10 + (char)((int64_t)&g1 >> 8);
        int32_t * v11 = (int32_t *)(((int64_t)(v6 & -0xff01) | (int64_t)&g1) + 107); // 0x35dabe
        *v11 = *v11 + (int32_t)v8;
        return unknown_2a9949c7(v8);
    }
    int64_t v12 = __asm_sti(v8); // 0x35daf7
    int64_t v13 = ((v12 + a4 / 256) % 256 | v12 & 0xffffff00) ^ 0xab008000; // 0x35dafd
    int64_t v14 = v13 + v8; // 0x35daff
    int64_t v15 = v14 & 0xffffffff; // 0x35daff
    char * v16 = (char *)(v15 + 73); // 0x35db01
    *v16 = *v16 + (char)a3;
    int32_t v17 = v13; // 0x35db07
    uint32_t v18 = v17 >> 31; // 0x35db07
    char * v19 = (char *)(v13 - 0x17ff66ba); // 0x35db08
    *v19 = *v19 + (char)(v9 / 256);
    int32_t * v20 = (int32_t *)((int64_t)v18 - 78); // 0x35db0e
    *v20 = *v20 + v17;
    int64_t v21 = __asm_iretd(v15); // 0x35db18
    char * v22 = (char *)v5; // 0x35db19
    *v22 = *v22 | (char)v21;
    int32_t * v23 = (int32_t *)v21; // 0x35db1d
    *v23 = *v23 + (int32_t)v14;
    __asm_in((int16_t)v18);
    return unknown_ffffffffd26bc433();
}

// Address range: 0x35db90 - 0x35db91
int64_t function_35db90(void) {
    // 0x35db90
    int64_t result; // 0x35db90
    return result;
}

// Address range: 0x35dc2b - 0x35dc80
int64_t function_35dc2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x35dc2b
    bool v1; // 0x35dc2b
    int64_t v2 = v1 ? -1 : 1; // 0x35dc2b
    int64_t v3 = v2 + a1; // 0x35dc2b
    int64_t v4; // 0x35dc2b
    char * v5 = (char *)(v4 - 0x17659dc6); // 0x35dc33
    char v6 = *v5; // 0x35dc33
    *v5 = (char)((char)v4 > (char)v4) + (char)a3 + v6;
    int32_t * v7 = (int32_t *)(a2 + 0x40d998d); // 0x35dc39
    *v7 = *v7 + (int32_t)v3;
    __asm_int1(v3, a2);
    char * v8 = (char *)(v4 + 41);
    int64_t v9 = 0x1e8d1a7; // 0x35dc4b
    int64_t v10 = 0xdd0301e0; // 0x35dc51
    *(int64_t *)v10 = v3;
    int3_t v11; // 0x35dc2b
    float80_t v12 = __frontend_reg_load_fpr(v11); // 0x35dc54
    int64_t v13; // 0x35dc2b
    __frontend_reg_store_fpr(v11, v12 + (float80_t)*(float32_t *)v13);
    unsigned char v14 = *v8 + (char)(v9 / 256); // 0x35dc56
    *v8 = v14;
    uint64_t v15 = unknown_ffffffffabeaf65f(); // 0x35dc59
    int64_t v16 = v13 & -0xff01 | v9 & 0xff00; // 0x35dc5e
    v9 = v13 & 0xff00 | v9 & -0xff01;
    v13 = v16;
    v11++;
    while (v14 < 1) {
        // 0x35dc4d
        v10 = (v15 & 0xffffff00 | (int64_t)*(char *)(v15 % 256 + v16)) - 8;
        *(int64_t *)v10 = v3;
        v12 = __frontend_reg_load_fpr(v11);
        __frontend_reg_store_fpr(v11, v12 + (float80_t)*(float32_t *)v13);
        v14 = *v8 + (char)(v9 / 256);
        *v8 = v14;
        v15 = unknown_ffffffffabeaf65f();
        v16 = v13 & -0xff01 | v9 & 0xff00;
        v9 = v13 & 0xff00 | v9 & -0xff01;
        v13 = v16;
        v11++;
    }
    int32_t * v17 = (int32_t *)((v10 & 0xffffffff) + 0x49dd8803); // 0x35dc65
    *v17 = *v17 + (int32_t)v9;
    *(char *)v3 = (char)v10;
    int32_t * v18 = (int32_t *)(a4 - 0x1719fa80 + 4 * unknown_ffffffffbb305273(v3 + v2)); // 0x35dc72
    *v18 = *v18 | (int32_t)a4;
    return __asm_hlt();
}

// Address range: 0x35dc8f - 0x35dc98
int64_t function_35dc8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x35dc8f
    int64_t v1; // 0x35dc8f
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return unknown_ffffffffdf448c96();
}

// Address range: 0x35dc98 - 0x35dd58
int64_t function_35dc98(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x35dc98
    int64_t v1; // 0x35dc98
    uint32_t v2 = (int32_t)v1 >> 14; // 0x35dc98
    int64_t v3 = v2; // 0x35dc98
    char * v4 = (char *)(a2 - 50);
    int64_t v5 = unknown_14470ea1() & 0xffffffff; // 0x35dca0
    int64_t v6 = a3 & 0xffffffff; // 0x35dca0
    int64_t v7 = a1; // 0x35dca0
    int64_t v8; // 0x35dc98
    uint64_t v9 = v8;
    unsigned char v10 = llvm_ctpop_i8(*(char *)v5 ^ (char)(v6 / 256)); // 0x35dca1
    uint32_t v11 = (int32_t)v6 >> 31; // 0x35dca3
    int64_t v12 = unknown_fffffffff1130faa(); // 0x35dca4
    while (v10 % 2 == 0) {
        // 0x35dcab
        *(int32_t *)v7 = __asm_insd((int16_t)v11);
        uint64_t v13 = unknown_fffffffff9e7fcb7(); // 0x35dcb1
        int64_t v14 = v9 & -256 | 169; // 0x35dcb6
        *v4 = *v4 + (char)(v13 / 256);
        v6 = ((v13 + v9 / 256) % 256 | v13 & 0xffffff00) ^ 0xa5008000;
        int64_t v15 = v6 + v7; // 0x35dcc3
        v7 = v15 & 0xffffffff;
        char * v16 = (char *)(v7 - 0x67bdc5b4); // 0x35dcc5
        unsigned char v17 = *v16; // 0x35dcc5
        *v16 = v17 - 87;
        int32_t v18 = *(int32_t *)(v6 + 101); // 0x35dccb
        int32_t v19 = v17 > 86; // 0x35dccb
        int32_t v20 = v18 + v11 + v19; // 0x35dccb
        int32_t v21 = v20 + v19; // 0x35dccb
        if (v20 < 0 == ((v21 ^ v11) & (v21 ^ v18)) < 0) {
            int32_t * v22 = (int32_t *)(v14 - 0x7f38360b); // 0x35dcd2
            *v22 = *v22 + 0x362603d8;
            __asm_in((int16_t)v20);
            int32_t * v23 = (int32_t *)(4 * v1 + a2); // 0x35dcdd
            *v23 = *v23 >> 8;
            *(char *)-0x76b2fb0df2bf092b = (char)unknown_ffffffff9b2c2de6();
            char * v24 = (char *)(v3 + 28); // 0x35dcee
            *v24 = *v24 - 40;
            uint64_t v25 = unknown_290b13f7(); // 0x35dcf1
            *(char *)-0x7743d602 = *(char *)-0x7743d602 + (char)(v25 / 256);
            *(int32_t *)0x6d8ecfd0 = *(int32_t *)0x6d8ecfd0 + (int32_t)v15;
            return v25 & 0xffffffff | v3;
        }
        v9 = v14;
        v10 = llvm_ctpop_i8(*(char *)(int64_t)v20 ^ (char)(v6 / 256));
        v11 = (int32_t)v6 >> 31;
        v12 = unknown_fffffffff1130faa();
    }
    int32_t * v26 = (int32_t *)(v12 + 8); // 0x35dd10
    *v26 = *v26 + (int32_t)v1;
    unsigned char v27 = *(char *)-0x59a46980 | (char)(v9 / 256); // 0x35dd15
    int64_t v28 = unknown_ffffffff8c2aee22(); // 0x35dd1c
    char * v29 = (char *)((256 * (int64_t)v27 | v9 & -0xff01) - 0x38b457cb); // 0x35dd23
    *v29 = *v29 | v27;
    int64_t v30 = v28; // bp-16, 0x35dd29
    int32_t v31 = *(int32_t *)(v28 - 0x9f3ff45); // 0x35dd32
    int32_t * v32 = (int32_t *)((int64_t)v11 - 0xf70a856 + 4 * (int64_t)(v31 ^ v2)); // 0x35dd3d
    uint32_t v33 = *v32; // 0x35dd3d
    uint32_t v34 = v33 + v11; // 0x35dd3d
    *v32 = v34;
    int32_t v35 = *(int32_t *)v28; // 0x35dd44
    unsigned char v36 = *(char *)-0xa64fe17ed11e558; // 0x35dd46
    int16_t v37 = v11; // 0x35dd52
    __asm_out_136(v37, v36);
    int64_t result = __asm_in_137(v37); // 0x35dd55
    *(int64_t *)((((int64_t)(v35 + (int32_t)v28 + (int32_t)(v34 < v33) & -256) | (int64_t)v36) + (int64_t)&v30 & 0xffffffff) - 8) = result;
    return result;
}

// Address range: 0x35ddc8 - 0x35dddf
int64_t function_35ddc8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x35ddc8
    int64_t v1; // 0x35ddc8
    return (int64_t)(((int32_t)v1 | 0xef982f7) & *(int32_t *)(a4 + 0x15b935be));
}

// Address range: 0x35dde0 - 0x35ddee
int64_t function_35dde0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x35dde0
    int64_t v1; // 0x35dde0
    *(char *)0x53addced = *(char *)0x53addced + (char)(v1 / 256);
    *(char *)a1 = (char)v1;
    return v1 & 0xffffffff & v1;
}

// Address range: 0x35de07 - 0x35de0c
int64_t function_35de07(void) {
    // 0x35de07
    return function_ffffffff98333b6d();
}

// Address range: 0x35de0c - 0x35de21
int64_t function_35de0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x35de0c
    int64_t v1; // 0x35de0c
    int64_t result = v1 & 0xffffffff; // 0x35de0f
    char * v2 = (char *)(result - 0x17fec2bf); // 0x35de15
    *v2 = *v2 + (char)v1;
    return result;
}

// Address range: 0x35de3d - 0x35de40
int64_t function_35de3d(void) {
    // 0x35de3d
    int64_t result; // 0x35de3d
    return result;
}

// Address range: 0x4bd57b - 0x4bd65e
int64_t function_4bd57b(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4bd58a
    uint64_t v2 = *v1; // 0x4bd58a
    if (v2 < 4) {
        // 0x4bd5ed
        return 0;
    }
    uint64_t v3 = v2 - 3; // 0x4bd594
    int64_t v4 = 1; // bp-88, 0x4bd5a7
    int64_t v5; // bp-56, 0x4bd57b
    __asm_rep_stosq_memset((char *)&v5, 0, 6);
    int64_t * v6 = (int64_t *)(a1 + 16); // 0x4bd5cf
    int64_t v7 = *v6; // 0x4bd5cf
    memcpy(&v5, (int64_t *)(v7 + 24), 8 * (int32_t)(v3 < 5 ? v3 : 5));
    int64_t result = function_4b1220(&v4, 63); // 0x4bd5e4
    if ((int32_t)result != 0) {
        // 0x4bd5ed
        return result;
    }
    int64_t result2 = function_4b0e20(a1, 255, 0); // 0x4bd608
    if ((int32_t)result2 != 0) {
        // 0x4bd5ed
        return result2;
    }
    // 0x4bd611
    if (*v1 >= 5) {
        for (int64_t i = 4; i < *v1; i++) {
            // 0x4bd628
            *(int64_t *)(8 * i + *v6) = 0;
        }
    }
    int64_t v8 = function_4b1c60(&v4, &v4, 19); // 0x4bd645
    int64_t result3 = v8; // 0x4bd64c
    if ((int32_t)v8 == 0) {
        // 0x4bd64e
        result3 = function_4b16c0(a1, a1, &v4);
    }
    // 0x4bd5ed
    return result3;
}

// Address range: 0x4bd660 - 0x4bd706
int64_t function_4bd660(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4bd66a
    uint64_t v2 = *v1; // 0x4bd66a
    if (v2 < 9) {
        // 0x4bd700
        return 0;
    }
    uint64_t v3 = v2 - 8; // 0x4bd678
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x4bd67c
    int64_t v5 = 1; // bp-120, 0x4bd68a
    int64_t v6 = v3 < 10 ? v3 : 10; // 0x4bd695
    int64_t v7; // bp-88, 0x4bd660
    memcpy(&v7, (int64_t *)(*v4 + 64), 8 * (int32_t)v6);
    int64_t result = function_4b1220(&v5, 9); // 0x4bd6b8
    if ((int32_t)result != 0) {
        // 0x4bd700
        return result;
    }
    int64_t v8 = *v4; // 0x4bd6c1
    int64_t * v9 = (int64_t *)(v8 + 64); // 0x4bd6ca
    *v9 = *v9 % 512;
    int64_t v10 = 9; // 0x4bd6d7
    if (*v1 >= 10) {
        *(int64_t *)(8 * v10 + v8) = 0;
        v10++;
        while (*v1 > v10) {
            // 0x4bd6e0
            *(int64_t *)(8 * v10 + v8) = 0;
            v10++;
        }
    }
    // 0x4bd700
    return function_4b16c0(a1, a1, &v5);
}

// Address range: 0x4bd710 - 0x4bd915
int64_t function_4bd710(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4bd71b
    uint64_t v2 = *v1; // 0x4bd71b
    if (v2 < 4) {
        // 0x4bd816
        return 0;
    }
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x4bd730
    int32_t v4 = 1; // bp-104, 0x4bd739
    uint64_t v5 = v2 - 3; // 0x4bd74f
    int64_t v6 = 1; // bp-136, 0x4bd75b
    int64_t v7 = 0; // bp-72, 0x4bd76b
    int64_t v8 = v5 < 5 ? v5 : 5; // 0x4bd77d
    memcpy(&v7, (int64_t *)(*v3 + 24), 8 * (int32_t)v8);
    int64_t result = function_4b1220(&v6, 32); // 0x4bd7b6
    if ((int32_t)result != 0) {
        // 0x4bd816
        return result;
    }
    int64_t v9 = *v3; // 0x4bd7c9
    int64_t * v10 = (int64_t *)(v9 + 24); // 0x4bd7db
    *v10 = *v10 & 0xffffffff;
    int64_t v11 = 4; // 0x4bd7e9
    if (*v1 >= 5) {
        *(int64_t *)(8 * v11 + v9) = 0;
        v11++;
        while (v11 < *v1) {
            // 0x4bd7f0
            *(int64_t *)(8 * v11 + v9) = 0;
            v11++;
        }
    }
    int64_t result2 = function_4b1ac0(&v6, &v6, &v4); // 0x4bd80d
    if ((int32_t)result2 != 0) {
        // 0x4bd816
        return result2;
    }
    int64_t result3 = function_4b16c0(a1, a1, &v6); // 0x4bd829
    if ((int32_t)result3 != 0) {
        // 0x4bd816
        return result3;
    }
    // 0x4bd832
    v7 = 0;
    uint64_t v12 = *v1 - 3; // 0x4bd866
    int64_t v13 = v12 < 5 ? v12 : 5; // 0x4bd877
    memcpy(&v7, (int64_t *)(*v3 + 24), 8 * (int32_t)v13);
    int64_t result4 = function_4b1220(&v6, 32); // 0x4bd899
    if ((int32_t)result4 != 0) {
        // 0x4bd816
        return result4;
    }
    int64_t v14 = *v3; // 0x4bd8b0
    int64_t * v15 = (int64_t *)(v14 + 24); // 0x4bd8c2
    *v15 = *v15 & 0xffffffff;
    int64_t v16 = 4; // 0x4bd8d0
    if (*v1 >= 5) {
        *(int64_t *)(8 * v16 + v14) = 0;
        v16++;
        while (v16 < *v1) {
            // 0x4bd8d8
            *(int64_t *)(8 * v16 + v14) = 0;
            v16++;
        }
    }
    int64_t v17 = function_4b1ac0(&v6, &v6, &v4); // 0x4bd8f5
    int64_t result5 = v17; // 0x4bd8fc
    if ((int32_t)v17 == 0) {
        // 0x4bd902
        result5 = function_4b16c0(a1, a1, &v6);
    }
    // 0x4bd816
    return result5;
}

// Address range: 0x4bd920 - 0x4bdfc1
int64_t function_4bd920(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t v1 = 1; // bp-136, 0x4bd93e
    int64_t v2 = 0; // bp-104, 0x4bd94f
    int64_t v3 = function_4b08f0(); // 0x4bd984
    if ((int32_t)v3 != 0) {
        // 0x4bdea7
        return v3 & 0xffffffff;
    }
    int64_t v4 = *(int64_t *)(a1 + 16); // 0x4bd995
    int64_t * v5 = (int64_t *)(v4 + 32); // 0x4bd999
    uint64_t v6 = *v5; // 0x4bd999
    int64_t * v7 = (int64_t *)v4; // 0x4bd99d
    uint64_t v8 = *v7; // 0x4bd99d
    uint64_t v9 = *(int64_t *)(v4 + 40); // 0x4bd9a0
    uint64_t v10 = *(int64_t *)(v4 + 56); // 0x4bd9a4
    uint32_t v11 = (int32_t)v6; // 0x4bd9ae
    uint64_t v12 = v6 / 0x100000000; // 0x4bd9b2
    int64_t v13 = v8 + v6; // 0x4bd9b6
    uint64_t v14 = v9 / 0x100000000; // 0x4bd9bf
    uint32_t v15 = (int32_t)v12; // 0x4bd9c3
    int64_t v16 = v13 + v12; // 0x4bd9c7
    uint64_t v17 = *(int64_t *)(v4 + 48); // 0x4bd9ca
    uint32_t v18 = (int32_t)v14; // 0x4bd9ce
    int64_t v19 = v16 - v14; // 0x4bd9dc
    int64_t v20 = v19 - v17; // 0x4bd9e4
    uint64_t v21 = v17 / 0x100000000; // 0x4bd9e6
    int64_t v22 = v20 - v21; // 0x4bd9ec
    uint32_t v23 = (int32_t)v16; // 0x4bd9ee
    uint32_t v24 = (int32_t)v17; // 0x4bda0e
    uint32_t v25 = (int32_t)v21; // 0x4bda18
    uint32_t v26 = (int32_t)v10; // 0x4bda2b
    uint64_t v27 = v8 / 0x100000000; // 0x4bda3c
    char v28 = (char)(v18 > v23) + (char)(v11 > (int32_t)v13) + (char)(v15 > v23) + (char)(v24 > (int32_t)v19) + (char)(v25 > (int32_t)v20) + (char)(v26 > (int32_t)v22); // 0x4bda40
    int64_t v29; // 0x4bd920
    char v30; // 0x4bd920
    if (v28 < 0) {
        // 0x4bded0
        v29 = v27 + (int64_t)v28 & 0xffffffff;
        v30 = (int32_t)v27 < (int32_t)-v28;
    } else {
        uint32_t v31 = (int32_t)v27; // 0x4bda4d
        uint32_t v32 = (int32_t)v28 + v31; // 0x4bda4d
        v29 = v32;
        v30 = v32 < v31;
    }
    uint32_t v33 = (int32_t)v29 + v15; // 0x4bda54
    uint32_t v34 = (int32_t)v9; // 0x4bda59
    uint64_t v35 = v10 / 0x100000000; // 0x4bda61
    uint32_t v36 = v33 + v34; // 0x4bda67
    uint32_t v37 = v36 - v24; // 0x4bda6d
    uint32_t v38 = v37 - v25; // 0x4bda72
    uint32_t v39 = v38 - v26; // 0x4bda78
    int64_t * v40 = (int64_t *)(v4 + 8); // 0x4bdaa9
    uint64_t v41 = *v40; // 0x4bdaa9
    uint32_t v42 = (int32_t)v35; // 0x4bdab4
    char v43 = v30 + (char)(v33 < v15) + (char)(v36 < v24) + (char)(v36 < v34) + (char)(v37 < v25) + (char)(v38 < v26) + (char)(v39 < v42); // 0x4bdac5
    *v7 = 0x100000000 * (int64_t)(v39 - v42) | v22 - v10 & 0xffffffff;
    int32_t v44; // 0x4bd920
    char v45; // 0x4bd920
    if (v43 < 0) {
        int32_t v46 = v43; // 0x4bdfac
        uint32_t v47 = (int32_t)v41; // 0x4bdfaf
        v44 = v46 + v47;
        v45 = v47 < -v46;
    } else {
        uint32_t v48 = (int32_t)v41; // 0x4bdad8
        int32_t v49 = (int32_t)v43 + v48; // 0x4bdad8
        v44 = v49;
        v45 = v49 < v48;
    }
    uint32_t v50 = v44 + v34; // 0x4bdae8
    uint32_t v51 = v50 + v18; // 0x4bdaeb
    uint32_t v52 = v51 - v25; // 0x4bdaf1
    uint32_t v53 = v52 - v26; // 0x4bdaf5
    uint64_t v54 = v41 / 0x100000000; // 0x4bdb3e
    char v55 = v45 + (char)(v50 < v34) + (char)(v51 < v18) + (char)(v51 < v25) + (char)(v52 < v26) + (char)(v53 < v42); // 0x4bdb42
    int64_t v56; // 0x4bd920
    char v57; // 0x4bd920
    if (v55 < 0) {
        // 0x4bdf90
        v56 = v54 + (int64_t)v55 & 0xffffffff;
        v57 = (int32_t)v54 < -(int32_t)v55;
    } else {
        uint32_t v58 = (int32_t)v54; // 0x4bdb4f
        uint32_t v59 = (int32_t)v55 + v58; // 0x4bdb4f
        v56 = v59;
        v57 = v59 < v58;
    }
    uint32_t v60 = (int32_t)v56 + v18; // 0x4bdb56
    uint32_t v61 = v60 + v18; // 0x4bdb60
    uint32_t v62 = v61 + v24; // 0x4bdb63
    uint32_t v63 = v62 + v24; // 0x4bdb68
    uint32_t v64 = v63 + v25; // 0x4bdb6c
    uint32_t v65 = v64 - v42; // 0x4bdb74
    uint32_t v66 = v65 - v11; // 0x4bdb7a
    char v67 = v57 + (char)(v60 < v18) + (char)(v61 < v18) + (char)(v62 < v24) + (char)(v63 < v24) + (char)(v64 < v25) + (char)(v64 < v42) + (char)(v65 < v11) + (char)(v66 < v15); // 0x4bdbdd
    *v40 = 0x100000000 * (int64_t)(v66 - v15) | (int64_t)(v53 - v42);
    int64_t * v68 = (int64_t *)(v4 + 16); // 0x4bdbe4
    uint64_t v69 = *v68; // 0x4bdbe4
    int32_t v70; // 0x4bd920
    char v71; // 0x4bd920
    if (v67 < 0) {
        int32_t v72 = v67; // 0x4bdf74
        uint32_t v73 = (int32_t)v69; // 0x4bdf76
        v70 = v72 + v73;
        v71 = v73 < -v72;
    } else {
        uint32_t v74 = (int32_t)v69; // 0x4bdbf5
        int32_t v75 = (int32_t)v67 + v74; // 0x4bdbf5
        v70 = v75;
        v71 = v75 < v74;
    }
    int64_t v76 = v17 & 0xffffffff; // 0x4bd9e2
    int64_t v77 = v76 + (int64_t)v70; // 0x4bdbfc
    int64_t v78 = v77 + v76; // 0x4bdbff
    int64_t v79 = v78 + v21; // 0x4bdc04
    int64_t v80 = v79 + v21; // 0x4bdc08
    uint32_t v81 = (int32_t)(v80 + v10); // 0x4bdc11
    uint32_t v82 = v81 - v15; // 0x4bdc14
    uint64_t v83 = v69 / 0x100000000; // 0x4bdc74
    char v84 = v71 + (char)(v24 > (int32_t)v77) + (char)(v24 > (int32_t)v78) + (char)(v25 > (int32_t)v79) + (char)(v25 > (int32_t)v80) + (char)(v26 > v81) + (char)(v81 < v15) + (char)(v82 < v34); // 0x4bdc78
    int32_t v85; // 0x4bd920
    char v86; // 0x4bd920
    if (v84 < 0) {
        int32_t v87 = v84; // 0x4bdf54
        uint32_t v88 = (int32_t)v83; // 0x4bdf57
        v85 = v87 + v88;
        v86 = v88 < -v87;
    } else {
        uint32_t v89 = (int32_t)v83; // 0x4bdc85
        int32_t v90 = (int32_t)v84 + v89; // 0x4bdc85
        v85 = v90;
        v86 = v90 < v89;
    }
    int64_t v91 = v10 & 0xffffffff; // 0x4bd9d9
    int64_t v92 = v21 + (int64_t)v85; // 0x4bdc8c
    int64_t v93 = v92 + v21; // 0x4bdc91
    int64_t v94 = v93 + v91; // 0x4bdc96
    int64_t v95 = v94 + v91; // 0x4bdc9a
    uint32_t v96 = (int32_t)(v95 + v35); // 0x4bdca3
    uint32_t v97 = v96 - v34; // 0x4bdca6
    int64_t * v98 = (int64_t *)(v4 + 24); // 0x4bdced
    uint64_t v99 = *v98; // 0x4bdced
    char v100 = v86 + (char)(v25 > (int32_t)v92) + (char)(v25 > (int32_t)v93) + (char)(v26 > (int32_t)v94) + (char)(v26 > (int32_t)v95) + (char)(v42 > v96) + (char)(v96 < v34) + (char)(v97 < v18); // 0x4bdd03
    *v68 = 0x100000000 * (int64_t)(v97 - v18) | (int64_t)(v82 - v34);
    int64_t v101; // 0x4bd920
    char v102; // 0x4bd920
    if (v100 < 0) {
        // 0x4bdf38
        v101 = v99 + (int64_t)v100 & 0xffffffff;
        v102 = (int32_t)v99 < -(int32_t)v100;
    } else {
        uint32_t v103 = (int32_t)v99; // 0x4bdd14
        uint32_t v104 = (int32_t)v100 + v103; // 0x4bdd14
        v101 = v104;
        v102 = v104 < v103;
    }
    int64_t v105 = v101 + v91; // 0x4bdd1b
    int64_t v106 = v105 + v91; // 0x4bdd1e
    int64_t v107 = v106 + v35; // 0x4bdd22
    int64_t v108 = v107 + v35; // 0x4bdd27
    int64_t v109 = v108 + v91; // 0x4bdd2b
    uint32_t v110 = (int32_t)(v109 + v21); // 0x4bdd34
    uint32_t v111 = v110 - v11; // 0x4bdd37
    uint64_t v112 = v99 / 0x100000000; // 0x4bdda2
    char v113 = v102 + (char)(v26 > (int32_t)v105) + (char)(v26 > (int32_t)v106) + (char)(v42 > (int32_t)v107) + (char)(v42 > (int32_t)v108) + (char)(v26 > (int32_t)v109) + (char)(v25 > v110) + (char)(v110 < v11) + (char)(v111 < v15); // 0x4bdda6
    int64_t v114; // 0x4bd920
    char v115; // 0x4bd920
    if (v113 < 0) {
        // 0x4bdf20
        v114 = v112 + (int64_t)v113 & 0xffffffff;
        v115 = (int32_t)v112 < -(int32_t)v113;
    } else {
        uint32_t v116 = (int32_t)v112; // 0x4bddb3
        uint32_t v117 = (int32_t)v113 + v116; // 0x4bddb3
        v114 = v117;
        v115 = v117 < v116;
    }
    int64_t v118 = v114 + v35; // 0x4bddba
    int64_t v119 = v118 + v35; // 0x4bddc4
    uint32_t v120 = (int32_t)(v119 + v35); // 0x4bddcd
    uint32_t v121 = v120 + v11; // 0x4bddcd
    uint32_t v122 = v121 - v34; // 0x4bddd2
    uint32_t v123 = v122 - v18; // 0x4bddda
    uint32_t v124 = v123 - v24; // 0x4bdde1
    char v125 = v115 + (char)(v42 > (int32_t)v118) + (char)(v42 > (int32_t)v119) + (char)(v42 > v120) + (char)(v121 < v34) + (char)(v121 < v11) + (char)(v122 < v18) + (char)(v123 < v24) + (char)(v124 < v25); // 0x4bde43
    *v98 = 0x100000000 * (int64_t)(v124 - v25) | (int64_t)(v111 - v15);
    int64_t v126 = v125;
    *v5 = (v125 >= 0 ? v126 : 0) | (v6 < 0xffffffff00000001 ? v6 : v6 + 0xffffffff);
    int64_t * v127 = (int64_t *)(a1 + 8); // 0x4bde70
    int64_t v128 = 2 * *v127; // 0x4bde78
    int64_t v129 = v128; // 0x4bde7e
    if (v128 > 9) {
        uint64_t v130 = 9;
        int64_t v131 = 8 * v130 / 2 + v4;
        int64_t v132; // 0x4bde8e
        int64_t v133; // 0x4bde9a
        while (v130 % 2 != 0) {
            // 0x4bde8b
            v132 = v130 + 1;
            *(int64_t *)v131 = (int64_t)*(int32_t *)v131;
            v133 = 2 * *v127;
            v129 = v133;
            if (v132 >= v133) {
                // break (via goto) -> 0x4bdea2
                goto lab_0x4bdea2;
            }
            v130 = v132;
            v131 = 8 * v130 / 2 + v4;
        }
        int64_t * v134 = (int64_t *)v131; // 0x4bdec0
        uint64_t v135 = *v134; // 0x4bdec0
        *v134 = v135 < 0xffffffff00000001 ? v135 : v135 + 0xffffffff;
        int64_t v136 = v130 + 1; // 0x4bde74
        int64_t v137 = 2 * *v127; // 0x4bde78
        v129 = v137;
        while (v136 < v137) {
            // 0x4bde80
            v130 = v136;
            v131 = 8 * v130 / 2 + v4;
            while (v130 % 2 != 0) {
                // 0x4bde8b
                v132 = v130 + 1;
                *(int64_t *)v131 = (int64_t)*(int32_t *)v131;
                v133 = 2 * *v127;
                v129 = v133;
                if (v132 >= v133) {
                    // break (via goto) -> 0x4bdea2
                    goto lab_0x4bdea2;
                }
                v130 = v132;
                v131 = 8 * v130 / 2 + v4;
            }
            // 0x4bdec0
            v134 = (int64_t *)v131;
            v135 = *v134;
            *v134 = v135 < 0xffffffff00000001 ? v135 : v135 + 0xffffffff;
            v136 = v130 + 1;
            v137 = 2 * *v127;
            v129 = v137;
        }
    }
  lab_0x4bdea2:
    if (v125 >= 0) {
        // 0x4bdea7
        return v3 & 0xffffffff;
    }
    // 0x4bdee8
    *(int64_t *)((int64_t)&v2 + 32) = -v126;
    if ((int32_t)function_4b1820(a1, &v1, a1, v129) != 0) {
        // 0x4bdea7
        return v3 & 0xffffffff;
    }
    // 0x4bdf15
    *(int32_t *)a1 = -1;
    // 0x4bdea7
    return v3 & 0xffffffff;
}

// Address range: 0x4bdfd0 - 0x4be0ba
int64_t function_4bdfd0(int64_t a1) {
    int64_t result = function_4b08f0(); // 0x4bdfd9
    if ((int32_t)result != 0) {
        // 0x4bdfe2
        return result;
    }
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x4bdfe8
    int64_t * v2 = (int64_t *)(v1 + 24); // 0x4bdff0
    uint64_t v3 = *v2; // 0x4bdff0
    uint64_t v4 = *(int64_t *)(v1 + 40); // 0x4bdff4
    uint64_t v5 = 8 * *(int64_t *)(a1 + 8) + v1; // 0x4bdff8
    int64_t * v6 = (int64_t *)v1; // 0x4bdfff
    int64_t v7 = *v6; // 0x4bdfff
    uint64_t v8 = v7 + v3; // 0x4bdfff
    uint64_t v9 = v8 + v4; // 0x4be002
    *v6 = v9;
    uint64_t v10 = (int64_t)!((v8 == 0 | v4 < v9)) + (int64_t)!((v7 == 0 | v3 < v8)); // 0x4be01f
    int64_t * v11 = (int64_t *)(v1 + 8); // 0x4be022
    uint64_t v12 = v10 + *v11; // 0x4be022
    uint64_t v13 = v12 + v3; // 0x4be02a
    int64_t v14 = v1 + 32; // 0x4be03c
    uint64_t v15 = *(int64_t *)v14; // 0x4be03c
    uint64_t v16 = v13 + v15; // 0x4be040
    uint64_t v17 = v16 + v4; // 0x4be047
    *v11 = v17;
    uint64_t v18 = (int64_t)(v13 < v12) + (int64_t)(v12 < v10) + (int64_t)(v16 < v13) + (int64_t)!((v16 == 0 | v4 < v17)); // 0x4be060
    int64_t * v19 = (int64_t *)(v1 + 16); // 0x4be063
    uint64_t v20 = v18 + *v19; // 0x4be063
    uint64_t v21 = v20 + v15; // 0x4be06b
    uint64_t v22 = v21 + v4; // 0x4be076
    *v19 = v22;
    *v2 = (int64_t)(v21 < v15) + (int64_t)(v20 < v18) + (int64_t)!((v21 == 0 | v4 < v22));
    if (v5 <= v14) {
        // 0x4bdfe2
        return result;
    }
    for (int64_t i = v14; i < v5; i += 8) {
        // 0x4be0a8
        *(int64_t *)i = 0;
    }
    // 0x4bdfe2
    return result;
}

// Address range: 0x4be0c0 - 0x4be471
int64_t function_4be0c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t v1 = 1; // bp-120, 0x4be0db
    int64_t v2 = 0; // bp-88, 0x4be0ec
    int64_t v3 = function_4b08f0(); // 0x4be115
    if ((int32_t)v3 != 0) {
        // 0x4be37f
        return v3 & 0xffffffff;
    }
    int64_t v4 = *(int64_t *)(a1 + 16); // 0x4be124
    int64_t * v5 = (int64_t *)(v4 + 24); // 0x4be132
    uint64_t v6 = *v5; // 0x4be132
    int64_t * v7 = (int64_t *)v4; // 0x4be136
    uint64_t v8 = *v7; // 0x4be136
    uint64_t v9 = *(int64_t *)(v4 + 40); // 0x4be139
    uint64_t v10 = v6 / 0x100000000; // 0x4be143
    int64_t v11 = v8 - v10; // 0x4be14a
    uint64_t v12 = v9 / 0x100000000; // 0x4be14d
    uint32_t v13 = (int32_t)v12; // 0x4be151
    uint32_t v14 = (int32_t)v10; // 0x4be158
    int64_t v15 = (int64_t)(v13 > (int32_t)v11) + (int64_t)((int32_t)v8 < v14); // 0x4be164
    int64_t v16 = -v15; // 0x4be16a
    uint64_t v17 = v8 / 0x100000000; // 0x4be16f
    uint32_t v18 = (int32_t)v17;
    int32_t v19 = v16;
    int64_t v20; // 0x4be0c0
    char v21; // 0x4be0c0
    if ((char)v16 < 0) {
        // 0x4be3a0
        v20 = v17 - v15 & 0xffffffff;
        v21 = v18 < -v19;
    } else {
        uint32_t v22 = v19 + v18; // 0x4be17e
        v20 = v22;
        v21 = v22 < v18;
    }
    uint64_t v23 = *(int64_t *)(v4 + 32); // 0x4be185
    uint64_t v24 = *(int64_t *)(v4 + 48); // 0x4be189
    int64_t v25 = v20 - v23; // 0x4be193
    uint32_t v26 = (int32_t)v23; // 0x4be196
    uint32_t v27 = (int32_t)v24; // 0x4be1a5
    char v28 = v21 - (char)(v26 > (int32_t)v20) + (char)(v27 > (int32_t)v25); // 0x4be1b6
    *v7 = 0x100000000 * (v25 - v24) | v11 - v12 & 0xffffffff;
    int64_t * v29 = (int64_t *)(v4 + 8); // 0x4be1bc
    uint64_t v30 = *v29; // 0x4be1bc
    int32_t v31; // 0x4be0c0
    char v32; // 0x4be0c0
    if (v28 < 0) {
        int32_t v33 = v28; // 0x4be45c
        uint32_t v34 = (int32_t)v30; // 0x4be45f
        v31 = v33 + v34;
        v32 = v34 < -v33;
    } else {
        uint32_t v35 = (int32_t)v30; // 0x4be1cd
        int32_t v36 = (int32_t)v28 + v35; // 0x4be1cd
        v31 = v36;
        v32 = v36 < v35;
    }
    uint64_t v37 = v23 / 0x100000000; // 0x4be1d4
    uint64_t v38 = v24 / 0x100000000; // 0x4be1db
    int64_t v39 = (int64_t)v31 - v37; // 0x4be1df
    uint32_t v40 = (int32_t)v37; // 0x4be1e2
    uint32_t v41 = (int32_t)v38; // 0x4be1ec
    uint64_t v42 = v30 / 0x100000000; // 0x4be20a
    char v43 = v32 - (char)(v31 < v40) + (char)(v41 > (int32_t)v39); // 0x4be20e
    int64_t v44; // 0x4be0c0
    char v45; // 0x4be0c0
    if (v43 < 0) {
        // 0x4be440
        v44 = v42 + (int64_t)v43 & 0xffffffff;
        v45 = (int32_t)v42 < (int32_t)-v43;
    } else {
        uint32_t v46 = (int32_t)v42; // 0x4be21d
        uint32_t v47 = (int32_t)v43 + v46; // 0x4be21d
        v44 = v47;
        v45 = v47 < v46;
    }
    uint32_t v48 = (int32_t)(v10 - v9 + v44); // 0x4be230
    uint32_t v49 = (int32_t)v9; // 0x4be237
    uint32_t v50 = v48 + v13; // 0x4be244
    char v51 = v45 + (char)(v49 > (int32_t)v44) + (char)(v14 > v48) + (char)(v50 < v48); // 0x4be252
    *v29 = 0x100000000 * (int64_t)v50 | v39 - v38 & 0xffffffff;
    int64_t * v52 = (int64_t *)(v4 + 16); // 0x4be259
    uint64_t v53 = *v52; // 0x4be259
    char v54; // 0x4be0c0
    int64_t v55; // 0x4be0c0
    if (v51 < 0) {
        // 0x4be420
        v54 = (int32_t)v53 < (int32_t)-v51;
        v55 = v53 + (int64_t)v51 & 0xffffffff;
    } else {
        uint32_t v56 = (int32_t)v51; // 0x4be26a
        uint32_t v57 = v56 + (int32_t)v53; // 0x4be26a
        v54 = v57 < v56;
        v55 = v57;
    }
    uint32_t v58 = (int32_t)(v23 - v12 + v55); // 0x4be27a
    uint32_t v59 = v58 + v27; // 0x4be28e
    uint64_t v60 = v53 / 0x100000000; // 0x4be2ab
    char v61 = v54 + (char)(v13 > (int32_t)v55) + (char)(v26 > v58) + (char)(v59 < v58); // 0x4be2af
    int64_t v62; // 0x4be0c0
    char v63; // 0x4be0c0
    if (v61 < 0) {
        // 0x4be408
        v62 = v60 + (int64_t)v61 & 0xffffffff;
        v63 = (int32_t)v60 < (int32_t)-v61;
    } else {
        uint32_t v64 = (int32_t)v61; // 0x4be2bc
        uint32_t v65 = v64 + (int32_t)v60; // 0x4be2bc
        v62 = v65;
        v63 = v65 < v64;
    }
    uint32_t v66 = (int32_t)(v37 - v24 + v62); // 0x4be2ce
    uint32_t v67 = v66 + v41; // 0x4be2e2
    char v68 = v63 + (char)(v27 > (int32_t)v62) + (char)(v40 > v66) + (char)(v67 < v66); // 0x4be2f0
    *v52 = 0x100000000 * (int64_t)v67 | (int64_t)v59;
    int64_t v69; // 0x4be0c0
    char v70; // 0x4be0c0
    if (v68 < 0) {
        // 0x4be3f0
        v69 = v6 + (int64_t)v68 & 0xffffffff;
        v70 = (int32_t)v6 < (int32_t)-v68;
    } else {
        uint32_t v71 = (int32_t)v6; // 0x4be301
        uint32_t v72 = (int32_t)v68 + v71; // 0x4be301
        v69 = v72;
        v70 = v72 < v71;
    }
    int64_t v73 = v69 + v9 - v38; // 0x4be30e
    char v74 = (char)(v49 > (int32_t)v73) - (char)(v41 > (int32_t)v69) + v70; // 0x4be321
    int64_t v75 = 0x100000000 * (int64_t)v74;
    *v5 = (v74 >= 0 ? v75 : 0) | v73 & 0xffffffff;
    int64_t * v76 = (int64_t *)(a1 + 8); // 0x4be348
    if (2 * *v76 > 8) {
        uint64_t v77 = 8;
        int64_t v78 = 8 * v77 / 2 + v4;
        int64_t v79; // 0x4be366
        while (v77 % 2 != 0) {
            // 0x4be362
            v79 = v77 + 1;
            *(int64_t *)v78 = (int64_t)*(int32_t *)v78;
            if (v79 >= 2 * *v76) {
                // break (via goto) -> 0x4be37a
                goto lab_0x4be37a;
            }
            v77 = v79;
            v78 = 8 * v77 / 2 + v4;
        }
        int64_t * v80 = (int64_t *)v78; // 0x4be390
        uint64_t v81 = *v80; // 0x4be390
        *v80 = v81 < 0xffffffff00000001 ? v81 : v81 + 0xffffffff;
        int64_t v82 = v77 + 1; // 0x4be34c
        while (v82 < 2 * *v76) {
            // 0x4be358
            v77 = v82;
            v78 = 8 * v77 / 2 + v4;
            while (v77 % 2 != 0) {
                // 0x4be362
                v79 = v77 + 1;
                *(int64_t *)v78 = (int64_t)*(int32_t *)v78;
                if (v79 >= 2 * *v76) {
                    // break (via goto) -> 0x4be37a
                    goto lab_0x4be37a;
                }
                v77 = v79;
                v78 = 8 * v77 / 2 + v4;
            }
            // 0x4be390
            v80 = (int64_t *)v78;
            v81 = *v80;
            *v80 = v81 < 0xffffffff00000001 ? v81 : v81 + 0xffffffff;
            v82 = v77 + 1;
        }
    }
  lab_0x4be37a:
    if (v74 >= 0) {
        // 0x4be37f
        return v3 & 0xffffffff;
    }
    // 0x4be3b8
    *(int64_t *)((int64_t)&v2 + 24) = -v75;
    if ((int32_t)function_4b1820(a1, &v1, a1, v4) != 0) {
        // 0x4be37f
        return v3 & 0xffffffff;
    }
    // 0x4be3e5
    *(int32_t *)a1 = -1;
    // 0x4be37f
    return v3 & 0xffffffff;
}

// Address range: 0x4be500 - 0x4be503
int64_t function_4be500(void) {
    // 0x4be500
    int64_t result; // 0x4be500
    return result;
}

// Address range: 0x4be518 - 0x4be521
int64_t function_4be518(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4be518
    int64_t v1; // 0x4be518
    __asm_out_136((int16_t)a3, (char)v1);
    char * v2 = (char *)(v1 - 63); // 0x4be519
    *v2 = *v2 & (char)a4;
    return function_4242e641();
}

// Address range: 0x4be522 - 0x4be526
int64_t function_4be522(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4be522
    return a3 & 0xffffffff;
}

// Address range: 0x4be526 - 0x4be529
int64_t function_4be526(void) {
    // 0x4be526
    int64_t result; // 0x4be526
    return result;
}

// Address range: 0x4be52d - 0x4be530
int64_t function_4be52d(void) {
    // 0x4be52d
    int64_t result; // 0x4be52d
    return result;
}

// Address range: 0x4be537 - 0x4be53a
int64_t function_4be537(void) {
    // 0x4be537
    int64_t result; // 0x4be537
    return result;
}

// Address range: 0x4be540 - 0x4be542
int64_t function_4be540(void) {
    // 0x4be540
    int64_t v1; // 0x4be540
    return function_4be56b(v1, v1, v1, v1, v1, v1);
}

// Address range: 0x4be542 - 0x4be56b
int64_t function_4be542(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t result = __asm_iretd(a1); // 0x4be554
    int64_t v1; // 0x4be542
    if ((char)v1 - (char)a5 < 0) {
        result = function_4beae0();
    }
    // 0x4be55a
    return result;
}

// Address range: 0x4be56b - 0x4be57a
int64_t function_4be56b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4be56b
    int64_t result; // 0x4be56b
    return result;
}
