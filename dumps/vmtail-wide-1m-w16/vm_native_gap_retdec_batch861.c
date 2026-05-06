/*
 * Targeted RetDec C for native executable gap queue batch 861.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1c8755-0x1c8955 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23a1b6-0x23a2b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23a2b6-0x23a4b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23a4b6-0x23a6b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x468c34-0x468e34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x468e34-0x469034 rank=- name=- kind=- bytes=- uncovered=-
 *   0x469034-0x469234 rank=- name=- kind=- bytes=- uncovered=-
 *   0x469234-0x469434 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_160a4b3();
int64_t function_1c8755(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6);
int64_t function_1c8899(void);
int64_t function_20ba4be();
int64_t function_20c896a();
int64_t function_23a1a0();
int64_t function_23a1b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23a22f(int64_t a1);
int64_t function_23a24c(int64_t a1, int64_t a2);
int64_t function_23a2d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23a344(void);
int64_t function_23a371(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23a387(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23a3bb(void);
int64_t function_23a3df(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23a3fa(void);
int64_t function_23a422(int64_t a1);
int64_t function_23a475(void);
int64_t function_23a47a(void);
int64_t function_23a483(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23a490(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_23a4ba(void);
int64_t function_23a4cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23a518(int64_t a1);
int64_t function_23a51e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23a535(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23a54a(void);
int64_t function_23a54e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23a574(int64_t a1);
int64_t function_23a5a2(int64_t a1, int64_t a2);
int64_t function_23a5a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23a5aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_23a5d1(int64_t a1);
int64_t function_23a60b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_23a616(int64_t a1);
int64_t function_23a668(void);
int64_t function_23a688(void);
int64_t function_23a6a6(void);
int64_t function_468bca();
int64_t function_468c34(void);
int64_t function_468c3a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_468cae(void);
int64_t function_468cb3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_468cca(int64_t a1, int64_t a2, int64_t a3);
int64_t function_468cdd(int64_t a1);
int64_t function_468ce7(void);
int64_t function_468db2(void);
int64_t function_468df1(void);
int64_t function_468e08(void);
int64_t function_468edf(void);
int64_t function_468f47(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_468fdd(void);
int64_t function_468ff7(void);
int64_t function_469028(void);
int64_t function_469065(void);
int64_t function_46908e(int64_t a1);
int64_t function_4690a7(int64_t a1);
int64_t function_469128(void);
int64_t function_469156(void);
int64_t function_469179(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46918a(void);
int64_t function_469196(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4691aa(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_469200(void);
int64_t function_46920a(void);
int64_t function_469260(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46927a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46931e(void);
int64_t function_46937a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_469380(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46938f(void);
int64_t function_4693d4(void);
int64_t function_4693d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4693f5(void);
int64_t function_46940a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4d8a8e90();
int64_t function_636f921d();
int64_t function_65527ef9();
int64_t function_cc59c();
int64_t function_ffffffffbcbc51e8();
int64_t function_ffffffffd312e469();
int64_t function_ffffffffea69061d();
int64_t function_fffffffff738a57d();
int64_t unknown_3abdb0a6();
int64_t unknown_3acfe91c();
int64_t unknown_c529ebe();
int64_t unknown_ffffffff89155599();
int64_t unknown_ffffffffac5a7b44();

// Address range: 0x1c8755 - 0x1c8821
int64_t function_1c8755(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x1c8755
    int64_t v1; // 0x1c8755
    int64_t v2 = 0x100000000 * (int64_t)&v1 >> 32; // 0x1c8775
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x1c877d
    int64_t v4; // 0x1c8755
    *v3 = (int64_t)((int32_t)v4 ^ a6);
    int64_t v5 = v2 - 16; // 0x1c877e
    int64_t * v6 = (int64_t *)v5; // 0x1c877e
    int64_t * v7 = (int64_t *)v2; // 0x1c8780
    int64_t * v8 = (int64_t *)(v2 + 32); // 0x1c8786
    int64_t v9 = *v8; // 0x1c8786
    *v3 = v9;
    *v6 = v9;
    int64_t * v10 = (int64_t *)(v2 - 24); // 0x1c878d
    *v10 = v9;
    int64_t v11 = v2 + 16; // 0x1c879c
    int64_t * v12 = (int64_t *)v11; // 0x1c879c
    int64_t v13 = *v12; // 0x1c879c
    *v3 = v13;
    *v6 = v13;
    *v10 = v9;
    int64_t * v14 = (int64_t *)(v2 + 8); // 0x1c87be
    *v14 = *v3;
    *v6 = v5;
    *v3 = v13;
    *v8 = *v7;
    int64_t v15 = *v14; // 0x1c87e6
    *v7 = v15;
    *v3 = v15;
    *v14 = *v12;
    *v7 = v11;
    return function_cc59c();
}

// Address range: 0x1c8899 - 0x1c889c
int64_t function_1c8899(void) {
    // 0x1c8899
    int64_t result; // 0x1c8899
    return result;
}

// Address range: 0x23a1b6 - 0x23a200
int64_t function_23a1b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23a1b6
    int64_t result; // 0x23a1b6
    bool v1; // 0x23a1b6
    if (!v1) {
        result = function_23a1a0();
    }
    int32_t * v2 = (int32_t *)(a2 - 24); // 0x23a1b8
    int64_t v3; // 0x23a1b6
    *v2 = *v2 + (int32_t)v3;
    int32_t * v4 = (int32_t *)(a3 - 42); // 0x23a1c0
    uint32_t v5 = *v4; // 0x23a1c0
    uint32_t v6 = v5 + (int32_t)a1; // 0x23a1c0
    *v4 = v6;
    unsigned char v7 = (char)v3; // 0x23a1c3
    char v8 = a3;
    unsigned char v9 = v7 + v8; // 0x23a1c3
    bool v10 = v6 < v5 ? v9 + (char)(v6 < v5) <= v7 : v9 < v7; // 0x23a1c3
    int32_t v11 = result; // 0x23a1c5
    uint32_t v12 = v11 + (int32_t)v3 + (int32_t)v10; // 0x23a1c5
    uint64_t v13 = a4 - 1; // 0x23a1c7
    if (v13 != 0 != (v12 == 0)) {
        // 0x23a1c9
        *(char *)a3 = (char)(result / 256) + v8;
        char * v14 = (char *)(result + 0x4a9dcf1d); // 0x23a1cf
        *v14 = *v14 + (char)(v3 / 256);
        return (int64_t)(v11 - *(int32_t *)(a1 - 0x23fec300 + a3));
    }
    uint64_t v15 = v13 / 256; // 0x23a1ec
    unsigned char v16 = 2 * (char)v15; // 0x23a1ec
    if (v16 < (char)v15 || v16 == 0) {
        // 0x23a1f0
        *(char *)0x3d23a1fd = *(char *)0x3d23a1fd + v16;
        *(int32_t *)a3 = v12 + (int32_t)a3;
        return *(int64_t *)(int64_t)v12;
    }
    // 0x23a255
    return result;
}

// Address range: 0x23a22f - 0x23a230
int64_t function_23a22f(int64_t a1) {
    // 0x23a22f
    int64_t result; // 0x23a22f
    return result;
}

// Address range: 0x23a24c - 0x23a255
int64_t function_23a24c(int64_t a1, int64_t a2) {
    // 0x23a24c
    int64_t v1; // 0x23a24c
    int64_t result = v1 & 0xffffffff; // 0x23a24d
    *(char *)result = 2 * (char)v1;
    return result;
}

// Address range: 0x23a2d2 - 0x23a2f3
int64_t function_23a2d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x508caea2); // 0x23a2d3
    int32_t v2 = a3; // 0x23a2d3
    bool v3; // 0x23a2d2
    *v1 = (int32_t)v3 - v2 + *v1;
    int32_t v4; // 0x23a2d2
    *(int32_t *)0x3d23a348 = (int32_t)(int64_t)&v4;
    *(int32_t *)0x622b1938 = *(int32_t *)0x622b1938 + v2;
    return 0x9bd11dbc;
}

// Address range: 0x23a344 - 0x23a345
int64_t function_23a344(void) {
    // 0x23a344
    int64_t result; // 0x23a344
    return result;
}

// Address range: 0x23a371 - 0x23a386
int64_t function_23a371(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23a371
    int64_t result; // 0x23a371
    uint32_t v1 = (int32_t)(result + a4) % 32; // 0x23a37a
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(a1 - 0x49522b55); // 0x23a37a
        uint32_t v3 = *v2; // 0x23a37a
        *v2 = v3 << 32 - v1 | v3 >> v1;
    }
    return result;
}

// Address range: 0x23a387 - 0x23a3af
int64_t function_23a387(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23a387
    __asm_in(-13);
    int64_t v1; // 0x23a387
    int32_t v2 = *(int32_t *)(8 * v1 + a5); // 0x23a38d
    int32_t * v3 = (int32_t *)((int64_t)((int32_t)((char)a2 < (char)v1) + (int32_t)a4 - v2) - 106); // 0x23a390
    *v3 = *v3 + (int32_t)((a2 - v1) % 256 | a2 & 0xffffff00);
    *(char *)0x18e2529f = *(char *)0x18e2529f + (char)(v1 / 256);
    float80_t v4; // 0x23a387
    *(float80_t *)((a5 & 0xb20868df) - 5 + 4 * v1) = __asm_fbstp(v4);
    return function_23a344();
}

// Address range: 0x23a3bb - 0x23a3bc
int64_t function_23a3bb(void) {
    // 0x23a3bb
    int64_t result; // 0x23a3bb
    return result;
}

// Address range: 0x23a3df - 0x23a3e6
int64_t function_23a3df(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23a3df
    return function_160a4b3();
}

// Address range: 0x23a3fa - 0x23a3fb
int64_t function_23a3fa(void) {
    // 0x23a3fa
    int64_t result; // 0x23a3fa
    return result;
}

// Address range: 0x23a422 - 0x23a436
int64_t function_23a422(int64_t a1) {
    // 0x23a422
    int64_t v1; // 0x23a422
    int32_t * v2 = (int32_t *)(2 * v1); // 0x23a427
    int32_t v3 = v1; // 0x23a427
    bool v4; // 0x23a422
    *v2 = (int32_t)v4 - v3 + *v2;
    int64_t result; // 0x23a422
    if (v3 != -0x7cdde7ff) {
        // 0x23a431
        result = function_23a3bb();
    } else {
        result = function_23a3fa();
    }
    // 0x23a433
    return result;
}

// Address range: 0x23a475 - 0x23a476
int64_t function_23a475(void) {
    // 0x23a475
    int64_t result; // 0x23a475
    return result;
}

// Address range: 0x23a47a - 0x23a47b
int64_t function_23a47a(void) {
    // 0x23a47a
    int64_t result; // 0x23a47a
    return result;
}

// Address range: 0x23a483 - 0x23a48a
int64_t function_23a483(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23a483
    return function_20c896a();
}

// Address range: 0x23a490 - 0x23a4ab
int64_t function_23a490(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x23a490
    unknown_ffffffff89155599();
    unknown_3abdb0a6();
    return function_20ba4be();
}

// Address range: 0x23a4ba - 0x23a4bb
int64_t function_23a4ba(void) {
    // 0x23a4ba
    int64_t result; // 0x23a4ba
    return result;
}

// Address range: 0x23a4cd - 0x23a4ea
int64_t function_23a4cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = a3; // 0x23a4e1
    bool v2; // 0x23a4cd
    int64_t v3 = v2 ? -4 : 4;
    int64_t v4 = a2; // 0x23a4cd
    int32_t v5 = a4; // 0x23a4e1
    int32_t v6 = v5 + v1; // 0x23a4e1
    int64_t v7; // 0x23a4cd
    int64_t v8 = v7; // 0x23a4e3
    if (v6 < 0 == ((v6 ^ v5) & (v6 ^ v1)) < 0 == (v6 != 0)) {
        v8 = function_23a475();
    }
    int64_t result = v8;
    int64_t v9; // 0x23a4cd
    int64_t v10 = a1 + v9 & 0xffffffff; // 0x23a4e5
    while (*(int32_t *)v4 >= *(int32_t *)v10) {
        int64_t v11 = (int64_t)v6 - 1; // 0x23a4db
        int64_t v12 = result; // 0x23a4db
        if (v11 != 0) {
            v12 = function_23a47a();
        }
        int64_t v13 = v10 + v3; // 0x23a4e7
        char * v14 = (char *)v13; // 0x23a4dd
        *v14 = *v14 + 95;
        v4 += v3;
        v5 = v11;
        v6 = v5 + v1;
        v8 = v12;
        if (v6 < 0 == ((v6 ^ v5) & (v6 ^ v1)) < 0 == (v6 != 0)) {
            v8 = function_23a475();
        }
        // 0x23a4e5
        result = v8;
        v10 = v13 + v9 & 0xffffffff;
    }
    // 0x23a4ea
    return result;
}

// Address range: 0x23a518 - 0x23a51c
int64_t function_23a518(int64_t a1) {
    // 0x23a518
    int64_t result; // 0x23a518
    return result;
}

// Address range: 0x23a51e - 0x23a525
int64_t function_23a51e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23a51e
    int64_t v1; // 0x23a51e
    return (int64_t)(*(int32_t *)(a3 + 0x1e8edf2) + (int32_t)v1);
}

// Address range: 0x23a535 - 0x23a546
int64_t function_23a535(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23a535
    *(char *)(a3 + 0x221122cc) = (char)a4;
    return unknown_ffffffffac5a7b44();
}

// Address range: 0x23a54a - 0x23a54b
int64_t function_23a54a(void) {
    // 0x23a54a
    int64_t result; // 0x23a54a
    return result;
}

// Address range: 0x23a54e - 0x23a557
int64_t function_23a54e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23a54e
    return function_fffffffff738a57d();
}

// Address range: 0x23a574 - 0x23a575
int64_t function_23a574(int64_t a1) {
    // 0x23a574
    int64_t result; // 0x23a574
    return result;
}

// Address range: 0x23a5a2 - 0x23a5a7
int64_t function_23a5a2(int64_t a1, int64_t a2) {
    // 0x23a5a2
    bool v1; // 0x23a5a2
    if (!v1) {
        function_23a54a();
    }
    // 0x23a5a4
    int64_t v2; // 0x23a5a2
    return function_23a5aa(a1, (v1 ? -1 : 1) + a2, v2, v2, (int64_t)&g1);
}

// Address range: 0x23a5a8 - 0x23a5aa
int64_t function_23a5a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23a5a8
    int64_t result; // 0x23a5a8
    return result;
}

// Address range: 0x23a5aa - 0x23a5d0
int64_t function_23a5aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    int64_t v1 = a5;
    __asm_rep_movsd_memcpy((char *)a1, (char *)a2, a4);
    bool v2; // 0x23a5aa
    int64_t v3 = (v2 ? -4 : 4) * a4 + a1; // 0x23a5aa
    int64_t v4; // 0x23a5aa
    int32_t * v5 = (int32_t *)(v4 + 64); // 0x23a5ad
    int32_t v6 = *v5; // 0x23a5ad
    int64_t v7; // 0x23a5aa
    *v5 = v6 - ((int32_t)(int64_t)&v7 | (int32_t)(a5 % 2 != 0));
    __asm_iretd(v3, v3);
    v1 = a3;
    int64_t v8 = unknown_c529ebe() & 0xffffffff; // 0x23a5bf
    char * v9 = (char *)(v8 - 0x173af8b2); // 0x23a5c0
    *v9 = *v9 + (char)(v4 / 256);
    int32_t * v10 = (int32_t *)(v8 - 14); // 0x23a5c6
    *v10 = *v10 + (int32_t)(int64_t)&v1;
    return 0;
}

// Address range: 0x23a5d1 - 0x23a5d4
int64_t function_23a5d1(int64_t a1) {
    // 0x23a5d1
    int64_t result; // 0x23a5d1
    return result;
}

// Address range: 0x23a60b - 0x23a615
int64_t function_23a60b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x23a60b
    int64_t v1; // 0x23a60b
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v1 + 0x38f68e1a + 2 * v1); // 0x23a60d
    *v3 = *v3 + (int32_t)v1;
    bool v4; // 0x23a60b
    return (v2 + a4 / 256 + (int64_t)v4) % 256 | v2 & -256;
}

// Address range: 0x23a616 - 0x23a61c
int64_t function_23a616(int64_t a1) {
    // 0x23a616
    return unknown_3acfe91c(a1);
}

// Address range: 0x23a668 - 0x23a66b
int64_t function_23a668(void) {
    // 0x23a668
    int64_t result; // 0x23a668
    return result;
}

// Address range: 0x23a688 - 0x23a68b
int64_t function_23a688(void) {
    // 0x23a688
    int64_t result; // 0x23a688
    return result;
}

// Address range: 0x23a6a6 - 0x23a6af
int64_t function_23a6a6(void) {
    // 0x23a6a6
    int64_t result; // 0x23a6a6
    return result;
}

// Address range: 0x468c34 - 0x468c39
int64_t function_468c34(void) {
    int64_t result = __asm_int3(); // 0x468c34
    int64_t v1; // 0x468c34
    *(int64_t *)(v1 - 58) = *(int64_t *)(v1 + 8);
    return result;
}

// Address range: 0x468c3a - 0x468c7f
int64_t function_468c3a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x468c3a
    int64_t v1; // 0x468c3a
    uint64_t result = v1;
    char v2 = result / 256; // 0x468c3a
    if (v2 < 0) {
        // 0x468c7a
        __asm_out((int16_t)a3, (int32_t)result);
        return (result | 29) + 70 & 231 | result & -256;
    }
    if ((v2 & 64) == 0) {
        int32_t * v3 = (int32_t *)(a1 + 83); // 0x468c6e
        uint32_t v4 = *v3; // 0x468c6e
        *v3 = v4 / 0x20000000 | 8 * v4;
        __asm_rep_movsd_memcpy((char *)a1, (char *)a2, a4);
        return result;
    }
    // 0x468c3f
    int64_t v5; // 0x468c3a
    if ((char)result != 117) {
        v5 = function_468bca();
    }
    int64_t v6 = v5;
    uint64_t v7 = a3 / 256; // 0x468c47
    int64_t v8 = -1 - (char)(v7 + a3) < (char)v7 ? 194 : 193; // 0x468c4b
    return (v6 + v8) % 256 | v6 & -256;
}

// Address range: 0x468cae - 0x468cb3
int64_t function_468cae(void) {
    // 0x468cae
    int64_t result; // 0x468cae
    return result;
}

// Address range: 0x468cb3 - 0x468cc3
int64_t function_468cb3(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 0x336859f0); // 0x468cb4
    int32_t v2 = *v1 ^ (int32_t)a1; // 0x468cb4
    unsigned char v3 = llvm_ctpop_i8((char)v2); // 0x468cb4
    *v1 = v2;
    int64_t v4; // 0x468cb3
    if (v3 % 2 != 0) {
        int64_t v5; // 0x468cb3
        v4 = function_468cca(a1, a2, v5);
    }
    // 0x468cbc
    return v4 & 0x6424ee8e | 0x9bdb1171;
}

// Address range: 0x468cca - 0x468ccd
int64_t function_468cca(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 - 85); // 0x468cca
    unsigned char v2 = *v1; // 0x468cca
    *v1 = v2 / 128 | 2 * v2;
    int64_t result; // 0x468cca
    return result;
}

// Address range: 0x468cdd - 0x468cdf
int64_t function_468cdd(int64_t a1) {
    // 0x468cdd
    int64_t result; // 0x468cdd
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x468ce7 - 0x468cea
int64_t function_468ce7(void) {
    // 0x468ce7
    int64_t result; // 0x468ce7
    return result;
}

// Address range: 0x468db2 - 0x468db7
int64_t function_468db2(void) {
    // 0x468db2
    return function_65527ef9();
}

// Address range: 0x468df1 - 0x468df4
int64_t function_468df1(void) {
    // 0x468df1
    int64_t result; // 0x468df1
    return result;
}

// Address range: 0x468e08 - 0x468e0b
int64_t function_468e08(void) {
    // 0x468e08
    int64_t result; // 0x468e08
    return result;
}

// Address range: 0x468edf - 0x468ee6
int64_t function_468edf(void) {
    // 0x468edf
    int64_t v1; // 0x468edf
    int64_t v2 = v1;
    bool v3; // 0x468edf
    *(int32_t *)v2 = 2 * (int32_t)v2 | (int32_t)v3;
    return function_636f921d();
}

// Address range: 0x468f47 - 0x468fae
int64_t function_468f47(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x468f47
    int64_t result; // 0x468f47
    bool v1; // 0x468f47
    if (v1) {
        // 0x468f8d
        *(int32_t *)(a1 + 0x24f9b5a) = 0x52c40b23;
        int32_t * v2 = (int32_t *)((2 * result & 0xfffffffe | (int64_t)v1) + 10); // 0x468fa0
        *v2 = *v2 + (int32_t)a1;
        return result;
    }
    // 0x468f49
    return result;
}

// Address range: 0x468fdd - 0x468fdf
int64_t function_468fdd(void) {
    // 0x468fdd
    int64_t v1; // 0x468fdd
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x468ff7 - 0x468ffe
int64_t function_468ff7(void) {
    // 0x468ff7
    return function_ffffffffd312e469();
}

// Address range: 0x469028 - 0x469032
int64_t function_469028(void) {
    // 0x469028
    return function_ffffffffea69061d();
}

// Address range: 0x469065 - 0x469068
int64_t function_469065(void) {
    // 0x469065
    int64_t result; // 0x469065
    return result;
}

// Address range: 0x46908e - 0x46908f
int64_t function_46908e(int64_t a1) {
    // 0x46908e
    int64_t result; // 0x46908e
    return result;
}

// Address range: 0x4690a7 - 0x4690ae
int64_t function_4690a7(int64_t a1) {
    // 0x4690a7
    int64_t result; // 0x4690a7
    return result;
}

// Address range: 0x469128 - 0x469129
int64_t function_469128(void) {
    // 0x469128
    int64_t result; // 0x469128
    return result;
}

// Address range: 0x469156 - 0x469157
int64_t function_469156(void) {
    // 0x469156
    int64_t result; // 0x469156
    return result;
}

// Address range: 0x469179 - 0x469186
int64_t function_469179(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x469179
    int64_t result; // 0x469179
    return result;
}

// Address range: 0x46918a - 0x469191
int64_t function_46918a(void) {
    // 0x46918a
    return function_ffffffffbcbc51e8();
}

// Address range: 0x469196 - 0x46919b
int64_t function_469196(int64_t a1, int64_t a2, int64_t a3) {
    // 0x469196
    return function_469128();
}

// Address range: 0x4691aa - 0x4691fe
int64_t function_4691aa(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x4691aa
    int32_t v1; // bp-49, 0x4691aa
    int64_t v2 = (int64_t)&v1; // 0x4691b2
    char * v3 = (char *)(a2 - 0x79b3f6b1); // 0x4691b4
    *v3 = *v3 + (char)v2;
    int64_t v4; // 0x4691aa
    uint32_t v5 = *(int32_t *)&v4; // 0x4691bc
    bool v6; // 0x4691aa
    int64_t v7 = (v6 ? -4 : 4) + a1; // 0x4691bc
    v4 = v7;
    unsigned char v8 = (char)(a3 / 256); // 0x4691bd
    char v9 = v5 > (int32_t)v2; // 0x4691bd
    int64_t v10; // 0x4691aa
    char v11 = *(char *)(v10 + 0x7bf43556) + v9; // 0x4691bd
    int64_t result; // 0x4691aa
    if (v11 > v8) {
        uint32_t v12 = (int32_t)a4 % 32; // 0x4691fc
        result = v2;
        if (v12 != 0) {
            v1 >>= v12;
            result = v2;
        }
    } else {
        unsigned char v13 = v8 - v11; // 0x4691bd
        bool v14 = v5 > (int32_t)v2 ? v11 != -1 | v13 - v9 > v8 : v11 > v8; // 0x4691bd
        int64_t v15 = 256 * (int64_t)v13 | a3 & -0xff01; // 0x4691bd
        uint32_t v16 = (int32_t)v7; // 0x4691c6
        uint32_t v17 = v1 + v16; // 0x4691c6
        uint32_t v18 = v17 + (int32_t)v14; // 0x4691c6
        char * v19 = (char *)v15; // 0x4691cd
        char v20 = *v19 + (char)v10 + (char)(v14 ? v18 <= v16 : v17 < v16); // 0x4691cd
        *v19 = v20;
        *(int32_t *)(int64_t)v18 = __asm_insd((int16_t)v15);
        result = v2;
        if (a4 != 1 && v20 != 0) {
            result = function_469156();
        }
    }
    // 0x4691d2
    return result;
}

// Address range: 0x469200 - 0x469203
int64_t function_469200(void) {
    // 0x469200
    int64_t result; // 0x469200
    return result;
}

// Address range: 0x46920a - 0x46920d
int64_t function_46920a(void) {
    // 0x46920a
    int64_t result; // 0x46920a
    return result;
}

// Address range: 0x469260 - 0x469269
int64_t function_469260(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 + 0x39c47a6b); // 0x469260
    int64_t v2; // 0x469260
    *v1 = *v1 & (char)v2;
    return v2 | 27;
}

// Address range: 0x46927a - 0x469285
int64_t function_46927a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x46927a
    int64_t v1; // 0x46927a
    return 256 * (int64_t)*(char *)(a3 - 57) | v1 & -0xff01;
}

// Address range: 0x46931e - 0x469320
int64_t function_46931e(void) {
    // 0x46931e
    return function_46938f();
}

// Address range: 0x46937a - 0x46937d
int64_t function_46937a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x46937a
    int64_t result; // 0x46937a
    unsigned char v1 = (char)result;
    *(char *)a4 = v1 / 128 | 2 * v1;
    return result;
}

// Address range: 0x469380 - 0x46938f
int64_t function_469380(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x469380
    int64_t result; // 0x469380
    float80_t v1; // 0x469380
    *(int32_t *)(result - 0x7f8da75a) = (int32_t)v1;
    int64_t v2; // 0x469380
    __asm_outsd((int16_t)a3, *(int32_t *)&v2);
    return result;
}

// Address range: 0x46938f - 0x469390
int64_t function_46938f(void) {
    // 0x46938f
    int64_t result; // 0x46938f
    return result;
}

// Address range: 0x4693d4 - 0x4693d5
int64_t function_4693d4(void) {
    // 0x4693d4
    int64_t result; // 0x4693d4
    return result;
}

// Address range: 0x4693d7 - 0x4693e1
int64_t function_4693d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4693d7
    int64_t v1; // 0x4693d7
    return v1 & 0xffffffff;
}

// Address range: 0x4693f5 - 0x4693f6
int64_t function_4693f5(void) {
    // 0x4693f5
    int64_t result; // 0x4693f5
    return result;
}

// Address range: 0x46940a - 0x469433
int64_t function_46940a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x46940a
    int64_t v1; // 0x46940a
    int64_t v2 = v1;
    int32_t v3 = *(int32_t *)(a3 + 76); // 0x46940c
    float80_t v4; // 0x46940a
    *(int16_t *)(v2 - 31 + 8 * v2) = (int16_t)v4;
    int64_t v5; // 0x46940a
    *(int32_t *)a3 = *(int32_t *)&v5 + 88;
    if (llvm_ctpop_i8((char)((int32_t)v1 - v3) ^ -12) % 2 != 0) {
        function_4693f5();
    }
    // 0x46942d
    __asm_wait();
    return function_4d8a8e90();
}
