/*
 * Targeted RetDec C for native executable gap queue batch 1002.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x324cbb-0x324ebb rank=- name=- kind=- bytes=- uncovered=-
 *   0x324ebb-0x3250bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3250bb-0x3252bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3252bb-0x3254bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3254bb-0x3256bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3256bb-0x3258bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x325abb-0x325cbb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3629be-0x362bbe rank=- name=- kind=- bytes=- uncovered=-
 *   0x362bbe-0x362dbe rank=- name=- kind=- bytes=- uncovered=-
 *   0x362dbe-0x362fbe rank=- name=- kind=- bytes=- uncovered=-
 *   0x362fbe-0x3631be rank=- name=- kind=- bytes=- uncovered=-
 *   0x3631be-0x3633be rank=- name=- kind=- bytes=- uncovered=-
 *   0x3633be-0x3635be rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b5cc9-0x3b5ec9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b64c9-0x3b66c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b66c9-0x3b68c9 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
extern int g6;
extern int g7;
extern int g8;
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

int64_t function_2b62de0a();
int64_t function_324c9d();
int64_t function_324cbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_324d16(void);
int64_t function_324d31(void);
int64_t function_324d3c(void);
int64_t function_324daf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_324db7(void);
int64_t function_324ddd(void);
int64_t function_324e08(int64_t a1, int64_t a2);
int64_t function_324e3c(void);
int64_t function_324e58(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_324ead(void);
int64_t function_324ed9(int64_t a1);
int64_t function_324eea(void);
int64_t function_324efa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_324f07(int64_t a1, int64_t a2, int64_t a3);
int64_t function_324f2a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_324f4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_324f64(void);
int64_t function_324f7b(void);
int64_t function_324fa2(void);
int64_t function_324fd5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32503c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_325047(int64_t a1);
int64_t function_325071(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3250ae(int64_t a1);
int64_t function_3250ca(int64_t a1);
int64_t function_32513e(int64_t a1);
int64_t function_3251a5(void);
int64_t function_3251b1(int64_t a1);
int64_t function_3251ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3251ee(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3251ff(int64_t a1, int64_t a2);
int64_t function_325200(int64_t a1);
int64_t function_325217(int64_t a1, int64_t a2, int64_t a3);
int64_t function_325233(int64_t a1);
int64_t function_325238(void);
int64_t function_32524a(void);
int64_t function_3252e4(void);
int64_t function_325312(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_325349(int64_t a1, int64_t a2, int64_t a3);
int64_t function_325392(void);
int64_t function_325407(void);
int64_t function_3254f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_325549(void);
int64_t function_325554(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3255cd(void);
int64_t function_3256bd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3256cd(void);
int64_t function_3256f3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_32572e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32575b(int64_t a1);
int64_t function_325793(int64_t a1);
int64_t function_3257c4(void);
int64_t function_3257d0(void);
int64_t function_3257d5(void);
int64_t function_3257f8(void);
int64_t function_32581a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_325895(void);
int64_t function_325a70();
int64_t function_325abb(int64_t a1, int64_t a2);
int64_t function_325abe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_325b2e(void);
int64_t function_325b66(void);
int64_t function_325b96(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_325ba4(int64_t a1);
int64_t function_325bf3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_325c8f(int64_t a1);
int64_t function_3629be(int64_t a1, int64_t a2, int64_t a3);
int64_t function_362a0e(int64_t a1);
int64_t function_362ab5(void);
int64_t function_362ac2(void);
int64_t function_362b11(void);
int64_t function_362b3b(int64_t a1);
int64_t function_362b92(int64_t a1);
int64_t function_362bf9(int64_t a1, int64_t a2);
int64_t function_362c24(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_362c7e(void);
int64_t function_362cd8(void);
int64_t function_362cf0(int64_t a1);
int64_t function_362cf5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_362e18(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_362e2e(void);
int64_t function_362e4b(void);
int64_t function_362e57(void);
int64_t function_362e5b(void);
int64_t function_362e5e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_362e61(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_362f57(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_362f87(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_362fc3(int64_t a1);
int64_t function_362fd8(int64_t a1);
int64_t function_363063(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3630f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_363118(void);
int64_t function_363120(void);
int64_t function_363129(void);
int64_t function_36312d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36316e(void);
int64_t function_363176(void);
int64_t function_36317c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3631a9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_36321c(int64_t a1);
int64_t function_36329f(void);
int64_t function_3632b3(int64_t a1);
int64_t function_363318(void);
int64_t function_363327(int64_t a1);
int64_t function_363348(int64_t a1);
int64_t function_3633a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3633cc(int64_t a1);
int64_t function_3633e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_36349e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3634d9(int64_t a1);
int64_t function_3634df(void);
int64_t function_3634e7(void);
int64_t function_3634ef(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_36924d4f();
int64_t function_3b5cc9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b5cee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b5d43(void);
int64_t function_3b5d91(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_3b5e70(void);
int64_t function_3b5e96(void);
int64_t function_3b5ea2(void);
int64_t function_3b5eb4(void);
int64_t function_3b5ec0(void);
int64_t function_3b64c9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b64f5(void);
int64_t function_3b64fa(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_3b662c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b6643(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b66dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b66f9(void);
int64_t function_3b6704(void);
int64_t function_3b6738(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b6767(void);
int64_t function_3b6797(void);
int64_t function_3b679f(void);
int64_t function_3b67ab(void);
int64_t function_3b6838(int64_t a1);
int64_t function_3b68b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d5655bb();
int64_t function_65635a02();
int64_t function_7ed2865e();
int64_t function_b722b5f();
int64_t function_ddd88ed();
int64_t function_ffffffff897950fb();
int64_t function_ffffffffb12f2a9f();
int64_t function_ffffffffcfdae9c7();
int64_t function_ffffffffd40329e5();
int64_t function_ffffffffd72e12a3();
int64_t function_ffffffffdff589bc();
int64_t function_ffffffffe8cdb9c2();
int64_t function_ffffffffea3e4fe8();
int64_t unknown_1ab4b6fd();
int64_t unknown_1dd4205a();
int64_t unknown_2236d49();
int64_t unknown_2c5c1774();
int64_t unknown_3396759f();
int64_t unknown_35c4f24();
int64_t unknown_3ba9d011();
int64_t unknown_3c0b9279();
int64_t unknown_4f0cbcea();
int64_t unknown_4f3711ff();
int64_t unknown_68d3d8d3();
int64_t unknown_68fbec21();
int64_t unknown_6d039fbb();
int64_t unknown_713bb2a();
int64_t unknown_940453();
int64_t unknown_d3b9087();
int64_t unknown_e327932();
int64_t unknown_f276c3f();
int64_t unknown_ffffffff8708394b();
int64_t unknown_ffffffff8f664c6e();
int64_t unknown_ffffffffa4460601();
int64_t unknown_ffffffffaecf8a0c();
int64_t unknown_ffffffffb458b53e();
int64_t unknown_ffffffffb478c400();
int64_t unknown_ffffffffb48b7ab4();
int64_t unknown_ffffffffb9043a00();
int64_t unknown_ffffffffc3ba491a();
int64_t unknown_ffffffffcbf1e058();
int64_t unknown_ffffffffd8ef5e8c();
int64_t unknown_ffffffffdf3d4d36();
int64_t unknown_ffffffffe30d62f9();
int64_t unknown_ffffffffe49bed3f();
int64_t unknown_ffffffffe860bd69();
int64_t unknown_ffffffffea51f3f2();
int64_t unknown_fffffffff004a9a5();

// Address range: 0x324cbb - 0x324d02
int64_t function_324cbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x324cbb
    int64_t v1; // 0x324cbb
    int64_t v2 = v1 & 0xffffffff ^ 0x9737013d; // 0x324cbb
    *(int32_t *)a1 = (int32_t)v2;
    int32_t * v3 = (int32_t *)(a2 - 121); // 0x324cd1
    int32_t v4 = *v3 + (int32_t)a4; // 0x324cd1
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x324cd1
    *v3 = v4;
    int64_t v6; // 0x324cbb
    int32_t v7 = *(int32_t *)&v6; // 0x324cd4
    int64_t v8 = v2 + v1 & 0xffffffff; // 0x324cdb
    if (v5 % 2 != 0) {
        v8 = function_324c9d();
    }
    // 0x324cdd
    float80_t v9; // 0x324cbb
    *(int64_t *)(a2 + 0x490d4735) = (int64_t)v9;
    unsigned char v10 = *(char *)((v6 & -0xff01 | (int64_t)&g7) + v8 % 256); // 0x324ce5
    unsigned char v11 = (char)a4 % 32; // 0x324cea
    if (v11 != 0) {
        int64_t v12 = (a5 & (int64_t)&g2) == 0 ? 4 : -4; // 0x324cc8
        char * v13 = (char *)(a1 - 124 + v12); // 0x324cea
        unsigned char v14 = *v13; // 0x324cea
        *v13 = v14 >> v11 | v14 << 8 - v11;
    }
    *(int64_t *)((int64_t)(-0x3eb8fec3 * v7) - 8) = (v8 & 0xffffff00 | (int64_t)v10) + 0xe7f55c5f & 0xffffffff;
    return 0xffffffa1 * a4 & 0xffffffff;
}

// Address range: 0x324d16 - 0x324d18
int64_t function_324d16(void) {
    // 0x324d16
    return function_324d3c();
}

// Address range: 0x324d31 - 0x324d3c
int64_t function_324d31(void) {
    // 0x324d31
    int64_t result; // 0x324d31
    return result;
}

// Address range: 0x324d3c - 0x324d43
int64_t function_324d3c(void) {
    // 0x324d3c
    int64_t result; // 0x324d3c
    int32_t * v1 = (int32_t *)(result + 0x17a75ce7); // 0x324d3c
    *v1 = *v1 - (int32_t)result;
    return result;
}

// Address range: 0x324daf - 0x324db5
int64_t function_324daf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 14); // 0x324daf
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x324daf
    return result;
}

// Address range: 0x324db7 - 0x324db8
int64_t function_324db7(void) {
    // 0x324db7
    int64_t result; // 0x324db7
    return result;
}

// Address range: 0x324ddd - 0x324dde
int64_t function_324ddd(void) {
    // 0x324ddd
    int64_t result; // 0x324ddd
    return result;
}

// Address range: 0x324e08 - 0x324e1f
int64_t function_324e08(int64_t a1, int64_t a2) {
    // 0x324e08
    return function_324ddd();
}

// Address range: 0x324e3c - 0x324e44
int64_t function_324e3c(void) {
    // 0x324e3c
    int64_t result; // 0x324e3c
    return result;
}

// Address range: 0x324e58 - 0x324e74
int64_t function_324e58(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 0x79cf639e); // 0x324e58
    *v1 = *v1 + (int32_t)a1;
    int64_t v2; // 0x324e58
    char * v3 = (char *)(v2 + 0x72e8488a); // 0x324e5e
    *v3 = *v3 + (char)a4;
    int32_t * v4 = (int32_t *)(v2 + 0x1d45c61d); // 0x324e64
    *v4 = *v4 + (int32_t)a4;
    return function_ffffffffb12f2a9f(0x13d7dae);
}

// Address range: 0x324ead - 0x324eb2
int64_t function_324ead(void) {
    // 0x324ead
    return function_65635a02();
}

// Address range: 0x324ed9 - 0x324edf
int64_t function_324ed9(int64_t a1) {
    // 0x324ed9
    return function_ffffffffd40329e5();
}

// Address range: 0x324eea - 0x324eeb
int64_t function_324eea(void) {
    // 0x324eea
    int64_t result; // 0x324eea
    return result;
}

// Address range: 0x324efa - 0x324f07
int64_t function_324efa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x324efa
    int64_t v1; // 0x324efa
    int32_t * v2 = (int32_t *)(v1 - 0x65b04c62); // 0x324efa
    *v2 = *v2 + (int32_t)a4;
    int32_t * v3 = (int32_t *)(3 * a1); // 0x324f01
    *v3 = *v3 + (int32_t)a1;
    return result;
}

// Address range: 0x324f07 - 0x324f13
int64_t function_324f07(int64_t a1, int64_t a2, int64_t a3) {
    // 0x324f07
    __asm_in(-114);
    int64_t v1; // 0x324f07
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return function_ffffffff897950fb();
}

// Address range: 0x324f2a - 0x324f4e
int64_t function_324f2a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x324f2a
    int64_t v1; // 0x324f2a
    int32_t v2 = v1; // 0x324f2d
    int64_t v3; // 0x324f2a
    if ((0x400d0000 - v2 & v2) >= 0) {
        v3 = function_324eea();
    }
    int64_t v4 = v3;
    *(char *)(v4 + 0x3590015a) = (char)v4;
    int64_t v5 = v4 & -256; // 0x324f36
    char v6 = *(char *)-0x763831b5; // 0x324f43
    *(char *)-0x763831b5 = v6 + (char)((uint64_t)v1 / 256);
    *(char *)(int64_t)(93 * *(int32_t *)(v5 | 117)) = (char)a5;
    return v5 | 80;
}

// Address range: 0x324f4f - 0x324f5b
int64_t function_324f4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffcbf1e058(a1, a2, a3, a4); // 0x324f4f
    uint32_t v2 = (int32_t)a4 % 32; // 0x324f54
    if (v2 != 0) {
        int32_t * v3 = (int32_t *)v1; // 0x324f54
        uint32_t v4 = *v3; // 0x324f54
        *v3 = v4 >> 32 - v2 | v4 << v2;
    }
    return function_3d5655bb();
}

// Address range: 0x324f64 - 0x324f6a
int64_t function_324f64(void) {
    // 0x324f64
    int64_t result; // 0x324f64
    return result;
}

// Address range: 0x324f7b - 0x324f80
int64_t function_324f7b(void) {
    // 0x324f7b
    return function_ffffffffea3e4fe8();
}

// Address range: 0x324fa2 - 0x324fa4
int64_t function_324fa2(void) {
    // 0x324fa2
    int64_t result; // 0x324fa2
    return result;
}

// Address range: 0x324fd5 - 0x324fe2
int64_t function_324fd5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x324fd5
    int64_t result; // 0x324fd5
    char v1 = (uint64_t)result / 256; // 0x324fd5
    *(char *)-0x75a34224 = *(char *)-0x75a34224 + v1;
    char * v2 = (char *)(a3 - 17); // 0x324fdb
    *v2 = *v2 + v1;
    return result;
}

// Address range: 0x32503c - 0x325043
int64_t function_32503c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32503c
    int64_t result; // 0x32503c
    uint32_t v1 = (int32_t)result;
    bool v2; // 0x32503c
    *(int32_t *)a3 = v1 / 4 | 0x80000000 * v1 | 0x40000000 * (int32_t)v2;
    char v3 = result; // 0x32503f
    int64_t v4; // 0x32503c
    *(char *)a2 = *(char *)&v4 + v3;
    __asm_out((int16_t)a3, v3);
    return result;
}

// Address range: 0x325047 - 0x32504a
int64_t function_325047(int64_t a1) {
    // 0x325047
    int64_t result; // 0x325047
    return result;
}

// Address range: 0x325071 - 0x3250ab
int64_t function_325071(int64_t a1, int64_t a2, int64_t a3) {
    // 0x325071
    int64_t v1; // 0x325071
    uint64_t v2 = v1;
    int64_t v3 = a2;
    *(int16_t *)(v2 + 0x5ad37e00) = (int16_t)v1;
    int32_t v4 = v1; // 0x325083
    int64_t v5 = a1; // 0x325083
    while (true) {
        // 0x325088
        *(int32_t *)v5 = v4;
        int64_t v6; // 0x325071
        int64_t v7 = v6 & -0xff01 | (int64_t)"cxa_get_globals_fast"; // 0x325089
        *(int32_t *)v3 = *(int32_t *)&v3 - 0x67df2215;
        int32_t * v8 = (int32_t *)v7; // 0x325090
        bool v9; // 0x325071
        *v8 = (int32_t)(v5 + (v9 ? 0xfffffffb : 5));
        v5 = (int64_t)*v8;
        int64_t v10; // 0x325071
        *(int64_t *)(v10 - 8) = -114;
        int32_t * v11 = (int32_t *)(v5 + 0x3a7b8b5b); // 0x325096
        uint32_t v12 = *v11; // 0x325096
        *v11 = v12 / 0x4000000 | 64 * v12;
        int64_t v13 = v10 - 16; // 0x32509d
        *(int64_t *)v13 = v3;
        *(char *)0x2accffaa = *(char *)0x2accffaa + (char)(v2 / 256);
        v6 = v7;
        v4 = -0x38ee5534;
        v10 = v13;
    }
}

// Address range: 0x3250ae - 0x3250c6
int64_t function_3250ae(int64_t a1) {
    // 0x3250ae
    int64_t v1; // 0x3250ae
    unsigned char v2 = (char)v1; // 0x3250ae
    unsigned char v3 = *(char *)(v1 - 0x6a2b0aee); // 0x3250ae
    char v4 = v2 - v3; // 0x3250ae
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x3250ae
    *(int32_t *)0x3a066e7c000529 = (int32_t)v1;
    return v1 & -0xff01 | 256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v3 > v2) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v2 % 16 - v3 % 16 > 15) | 4 * (int64_t)(v5 % 2 == 0)) | 512;
}

// Address range: 0x3250ca - 0x3250cb
int64_t function_3250ca(int64_t a1) {
    // 0x3250ca
    int64_t result; // 0x3250ca
    return result;
}

// Address range: 0x32513e - 0x325141
int64_t function_32513e(int64_t a1) {
    // 0x32513e
    int64_t result; // 0x32513e
    return result;
}

// Address range: 0x3251a5 - 0x3251a6
int64_t function_3251a5(void) {
    // 0x3251a5
    int64_t result; // 0x3251a5
    return result;
}

// Address range: 0x3251b1 - 0x3251b2
int64_t function_3251b1(int64_t a1) {
    // 0x3251b1
    int64_t result; // 0x3251b1
    return result;
}

// Address range: 0x3251ce - 0x3251ec
int64_t function_3251ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x3251ce
    bool v3; // 0x3251ce
    if (!v3) {
        v2 = function_3251a5();
    }
    // 0x3251d0
    *(int32_t *)v2 = (int32_t)a4;
    __asm_outsb((int16_t)a3, *(char *)&v1);
    int64_t v4 = v2 & -256 | 61; // 0x3251d8
    int32_t * v5 = (int32_t *)v4; // 0x3251da
    *v5 = *v5 + (int32_t)v4;
    return __asm_iretd();
}

// Address range: 0x3251ee - 0x3251f2
int64_t function_3251ee(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3251ee
    int64_t v1; // 0x3251ee
    *(char *)a3 = (char)(v1 ^ v1);
    return function_325200(a1);
}

// Address range: 0x3251ff - 0x325200
int64_t function_3251ff(int64_t a1, int64_t a2) {
    // 0x3251ff
    return a2 & 0xffffffff;
}

// Address range: 0x325200 - 0x325203
int64_t function_325200(int64_t a1) {
    // 0x325200
    int64_t v1; // 0x325200
    int64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)v2;
    bool v3; // 0x325200
    return (v2 + 251 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x325217 - 0x325233
int64_t function_325217(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = unknown_68fbec21(); // 0x325218
    char * v2 = (char *)(a2 + 0x63e55); // 0x32521d
    *v2 = *v2 + (char)(v1 / 256);
    int64_t result = a3 & 0xffffffff; // 0x32522a
    if ((int32_t)v1 >= 0x37c69c01) {
        result = function_3251b1((int64_t)&g8);
    }
    // 0x32522c
    int64_t v3; // 0x325217
    *(int32_t *)v3 = *(int32_t *)&v3 / 0x1000;
    return result;
}

// Address range: 0x325233 - 0x325236
int64_t function_325233(int64_t a1) {
    // 0x325233
    int64_t result; // 0x325233
    return result;
}

// Address range: 0x325238 - 0x325239
int64_t function_325238(void) {
    // 0x325238
    int64_t result; // 0x325238
    return result;
}

// Address range: 0x32524a - 0x32524f
int64_t function_32524a(void) {
    // 0x32524a
    return function_36924d4f();
}

// Address range: 0x3252e4 - 0x3252e5
int64_t function_3252e4(void) {
    // 0x3252e4
    int64_t result; // 0x3252e4
    return result;
}

// Address range: 0x325312 - 0x32531e
int64_t function_325312(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x325312
    bool v1; // 0x325312
    bool v2 = v1;
    unsigned char v3 = *(char *)0x3a6ee012; // 0x325312
    char v4 = a4;
    unsigned char v5 = v3 + v4; // 0x325312
    unsigned char v6 = v5 + (char)v2; // 0x325312
    *(char *)0x3a6ee012 = v6;
    int64_t result = __asm_hlt(); // 0x325318
    unsigned char v7 = v4 % 32; // 0x325319
    if (v7 == 0) {
        if (!((v2 ? v6 <= v3 : v5 < v3))) {
            // 0x32531d
            return result;
        }
    } else {
        *(char *)a4 = v4 >> v7;
        if ((1 << v7 - 1 & v4) == 0) {
            // 0x32531d
            return result;
        }
    }
    // 0x32531d
    return function_3252e4();
}

// Address range: 0x325349 - 0x325359
int64_t function_325349(int64_t a1, int64_t a2, int64_t a3) {
    // 0x325349
    __asm_int(40);
    int64_t v1; // 0x325349
    __asm_fbld(*(float80_t *)&v1);
    int64_t result; // 0x325349
    char * v2 = (char *)(result + 0x13d0021); // 0x32534f
    unsigned char v3 = *v2; // 0x32534f
    *v2 = v3 / 128 | 2 * v3;
    int64_t v4; // 0x325349
    __asm_outsd((int16_t)(int64_t)&v4, *(int32_t *)&v1);
    return result;
}

// Address range: 0x325392 - 0x325393
int64_t function_325392(void) {
    // 0x325392
    int64_t result; // 0x325392
    return result;
}

// Address range: 0x325407 - 0x325408
int64_t function_325407(void) {
    // 0x325407
    int64_t result; // 0x325407
    return result;
}

// Address range: 0x3254f6 - 0x325504
int64_t function_3254f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3254f6
    int64_t v1; // 0x3254f6
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x3254fb
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)(a4 + 0x13d003a); // 0x3254fb
        uint32_t v5 = *v4; // 0x3254fb
        *v4 = v5 >> 32 - v3 | v5 << v3;
    }
    return (v2 + 198) % 256 | v2 & -256;
}

// Address range: 0x325549 - 0x32554c
int64_t function_325549(void) {
    // 0x325549
    int64_t result; // 0x325549
    return result;
}

// Address range: 0x325554 - 0x3255ab
int64_t function_325554(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x325554
    int64_t result; // 0x325554
    bool v1; // 0x325554
    if (!v1 && true) {
        // 0x325557
        return result;
    }
    char v2 = *(char *)(result + 9) & (char)a3; // 0x325565
    int64_t v3 = result & -256; // 0x325568
    if (v2 < 1) {
        int64_t v4 = unknown_3396759f(); // 0x325598
        *(int32_t *)-0x48cbc1de = *(int32_t *)-0x48cbc1de + (int32_t)v3;
        return 0x10000 * (int32_t)v4 >> 16;
    }
    int64_t v5 = a3 & -256 | (int64_t)v2; // 0x325565
    int32_t * v6 = (int32_t *)(a2 + 0x3d06c100); // 0x325573
    int32_t * v7 = (int32_t *)(v5 + 4 * result); // 0x325579
    char v8 = result; // 0x32557c
    int64_t v9 = v3; // 0x325554
    int64_t v10 = a1; // 0x325554
    *v6 = *v6 + (int32_t)v10;
    *v7 = *v7 + (int32_t)v9;
    __asm_out_133(-77, v8);
    *(char *)v10 = v8;
    unsigned char v11 = *(char *)(v5 + 0x1995ae85) + (char)a4; // 0x32557f
    unsigned char v12 = llvm_ctpop_i8(v11); // 0x32557f
    v9 = v9 & -256 | 32;
    v10 += (v1 ? -1 : 1);
    int64_t v13 = v11; // 0x325587
    while (v12 % 2 == 0) {
        // 0x32556d
        *v6 = *v6 + (int32_t)v10;
        *v7 = *v7 + (int32_t)v9;
        __asm_out_133(-77, v8);
        *(char *)v10 = v8;
        v11 = *(char *)(v5 + 0x1995ae85) + (char)v13;
        v12 = llvm_ctpop_i8(v11);
        v9 = v9 & -256 | 32;
        v10 += (v1 ? -1 : 1);
        v13 = v11;
    }
    // 0x325589
    return __asm_in(-128);
}

// Address range: 0x3255cd - 0x3255d4
int64_t function_3255cd(void) {
    // 0x3255cd
    return unknown_68d3d8d3();
}

// Address range: 0x3256bd - 0x3256c8
int64_t function_3256bd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3256bd
    *(char *)a1 = __asm_insb((int16_t)a3);
    return function_ddd88ed();
}

// Address range: 0x3256cd - 0x3256ce
int64_t function_3256cd(void) {
    // 0x3256cd
    int64_t result; // 0x3256cd
    return result;
}

// Address range: 0x3256f3 - 0x325719
int64_t function_3256f3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 58); // 0x3256f4
    uint32_t v2 = *v1; // 0x3256f4
    int64_t v3; // 0x3256f3
    uint32_t v4 = v2 + (int32_t)(int64_t)&v3; // 0x3256f4
    *v1 = v4;
    int64_t v5 = unknown_1ab4b6fd(); // 0x3256f7
    uint32_t v6 = (int32_t)a4 % 32; // 0x3256fc
    bool v7 = v4 < v2; // 0x3256fc
    if (v6 != 0) {
        int32_t * v8 = (int32_t *)v5; // 0x3256fc
        uint32_t v9 = *v8; // 0x3256fc
        uint32_t v10 = v9 >> 32 - v6 | v9 << v6; // 0x3256fc
        *v8 = v10;
        v7 = v10 % 2 != 0;
    }
    int64_t v11; // 0x3256f3
    char * v12 = (char *)((v11 & -0xff01 | (int64_t)&g3) + 0x17348250); // 0x325700
    unsigned char v13 = *v12; // 0x325700
    unsigned char v14 = v13 + (char)(a3 / 256); // 0x325700
    unsigned char v15 = v14 + (char)v7; // 0x325700
    *v12 = v15;
    unknown_ffffffffaecf8a0c();
    if (v15 != 0 && !((v7 ? v15 <= v13 : v14 < v13))) {
        function_3256cd();
    }
    // 0x32570d
    return a4 & 0xffffffff;
}

// Address range: 0x32572e - 0x325733
int64_t function_32572e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x32572e
    *(char *)a4 = (char)a4;
    int64_t result; // 0x32572e
    return result;
}

// Address range: 0x32575b - 0x32575e
int64_t function_32575b(int64_t a1) {
    // 0x32575b
    int64_t result; // 0x32575b
    return result;
}

// Address range: 0x325793 - 0x325796
int64_t function_325793(int64_t a1) {
    // 0x325793
    int64_t result; // 0x325793
    return result;
}

// Address range: 0x3257c4 - 0x3257c5
int64_t function_3257c4(void) {
    // 0x3257c4
    int64_t result; // 0x3257c4
    return result;
}

// Address range: 0x3257d0 - 0x3257d1
int64_t function_3257d0(void) {
    // 0x3257d0
    int64_t result; // 0x3257d0
    return result;
}

// Address range: 0x3257d5 - 0x3257d6
int64_t function_3257d5(void) {
    // 0x3257d5
    int64_t result; // 0x3257d5
    return result;
}

// Address range: 0x3257f8 - 0x3257f9
int64_t function_3257f8(void) {
    // 0x3257f8
    int64_t result; // 0x3257f8
    return result;
}

// Address range: 0x32581a - 0x32588b
int64_t function_32581a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    *(char *)a3 = (char)a4;
    int64_t v3; // 0x32581a
    unsigned char v4 = (char)v3; // 0x32581c
    int64_t v5; // 0x32581a
    unsigned char v6 = *(char *)&v5; // 0x32581c
    char v7 = v4 - v6; // 0x32581c
    bool v8; // 0x32581a
    int64_t v9 = v8 ? -1 : 1; // 0x32581c
    v5 = v9 + a1;
    *(char *)(v3 + 111) = (char)(a3 / 256);
    *(char *)-0x62c37d21fe17ac26 = v4;
    if (((v7 ^ v4) & (v6 ^ v4)) < 0) {
        char v10 = *(char *)&v1 | (char)a3; // 0x325868
        if (v10 < 1) {
            function_3257f8();
        }
        int64_t v11 = a3 & -256 | (int64_t)v10; // 0x325868
        int64_t v12 = unknown_2c5c1774(); // 0x32586e
        unsigned char v13 = *(char *)&v2;
        __asm_outsb((int16_t)v11, v13);
        int64_t v14 = 2 * (v12 & 0x7fff0080 | (int64_t)&g6) & 0xffffff00 | (int64_t)v13; // 0x325878
        int32_t * v15 = (int32_t *)(v14 - 103); // 0x32587c
        *v15 = *v15 + (int32_t)v11;
        return unknown_ffffffffd8ef5e8c(*(int32_t *)v14 | (int32_t)v5, v2 + v9);
    }
    // 0x32582c
    unknown_e327932(v5);
    if (v7 != 0) {
        function_3257c4();
    }
    uint32_t v16 = (int32_t)(v6 > v4) + (int32_t)v3 - *(int32_t *)&v1; // 0x325837
    int64_t v17 = unknown_ffffffffe49bed3f(); // 0x32583e
    if (v1 != 1 == v16 == 0) {
        v17 = function_3257d0();
    }
    int32_t * v18 = (int32_t *)((int64_t)v16 - 87); // 0x325845
    uint32_t v19 = *v18; // 0x325845
    uint32_t v20 = v19 + v16; // 0x325845
    *v18 = v20;
    int32_t * v21 = (int32_t *)(v5 - 114); // 0x32584a
    *v21 = *v21 - 6 + (int32_t)(v20 < v19);
    int64_t v22; // 0x32581a
    int32_t v23 = *(int32_t *)&v22; // 0x325850
    int32_t v24 = v22; // 0x325850
    int32_t v25 = v23 + v24; // 0x325850
    *(int32_t *)v22 = v25;
    int64_t result = v17 & 0x17fd9749 | 0xe80268b6; // 0x325852
    if (v25 < 0 != ((v25 ^ v23) & (v25 ^ v24)) < 0) {
        result = function_3257d5();
    }
    // 0x325854
    return result;
}

// Address range: 0x325895 - 0x32589b
int64_t function_325895(void) {
    // 0x325895
    int64_t v1; // 0x325895
    int64_t result = v1 & -256; // 0x325895
    char * v2 = (char *)result; // 0x325897
    *v2 = *v2 + 60;
    return result;
}

// Address range: 0x325abb - 0x325abc
int64_t function_325abb(int64_t a1, int64_t a2) {
    // 0x325abb
    return a2 & 0xffffffff;
}

// Address range: 0x325abe - 0x325b0c
int64_t function_325abe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = a1;
    int64_t v3; // 0x325abe
    char * v4 = (char *)(2 * v3 + 21 + v3); // 0x325abe
    *v4 = *v4 | (char)v3;
    *(int32_t *)a4 = *(int32_t *)&v1 + (int32_t)v3;
    uint32_t v5 = *(int32_t *)&v2; // 0x325ad6
    int64_t v6; // 0x325abe
    int32_t v7 = v6; // 0x325ad6
    uint32_t v8 = v5 + v7; // 0x325ad6
    *(int32_t *)v2 = v8;
    int32_t v9 = *(int32_t *)&v2; // 0x325ad8
    int32_t v10 = v8 < v5; // 0x325ad8
    uint32_t v11 = v9 + v7 + v10; // 0x325ad8
    int32_t v12 = v11 + v10; // 0x325ad8
    if (((v12 ^ v7) & (v12 ^ v9)) >= 0) {
        function_325a70();
    }
    int64_t v13 = v1; // 0x325adc
    int64_t v14 = v13 - 1; // 0x325adc
    v1 = v14;
    while (v14 == 0) {
        // 0x325adf
        v1 = v13 - 2;
        v5 = v9;
        v7 = v11;
        v8 = v5 + v7;
        *(int32_t *)v2 = v8;
        v9 = *(int32_t *)&v2;
        v10 = v8 < v5;
        v11 = v9 + v7 + v10;
        v12 = v11 + v10;
        if (((v12 ^ v7) & (v12 ^ v9)) >= 0) {
            function_325a70();
        }
        // 0x325adc
        v13 = v1;
        v14 = v13 - 1;
        v1 = v14;
    }
    // 0x325b06
    return 0x16fd73f5;
}

// Address range: 0x325b2e - 0x325b2f
int64_t function_325b2e(void) {
    // 0x325b2e
    int64_t result; // 0x325b2e
    return result;
}

// Address range: 0x325b66 - 0x325b68
int64_t function_325b66(void) {
    // 0x325b66
    int64_t result; // 0x325b66
    return result;
}

// Address range: 0x325b96 - 0x325ba4
int64_t function_325b96(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x325b96
    int64_t v1; // 0x325b96
    char * v2 = (char *)(v1 + 0x3b301f9c + 4 * v1); // 0x325b96
    *v2 = *v2 ^ (char)a3;
    return function_325b2e();
}

// Address range: 0x325ba4 - 0x325bb8
int64_t function_325ba4(int64_t a1) {
    // 0x325ba4
    int64_t v1; // 0x325ba4
    int64_t v2 = v1 & 182 | 73; // 0x325ba4
    int64_t result = v2 | v1 & -256; // 0x325ba4
    char * v3 = (char *)result; // 0x325bad
    *v3 = *v3 + (char)v1 + (char)v2;
    return result;
}

// Address range: 0x325bf3 - 0x325c15
int64_t function_325bf3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x325bf3
    int64_t v1; // 0x325bf3
    int64_t v2 = v1;
    int64_t v3 = (v2 + a4 / 256) % 256 | v2 & -256; // 0x325c03
    int32_t * v4 = (int32_t *)(a3 + 71); // 0x325c05
    uint32_t v5 = *v4; // 0x325c05
    uint32_t v6 = v5 + (int32_t)v3; // 0x325c05
    *v4 = v6;
    int32_t * v7 = (int32_t *)v3; // 0x325c08
    *v7 = *v7 - 24 + (int32_t)(v6 < v5);
    int32_t * v8 = (int32_t *)(v3 - 37); // 0x325c0b
    *v8 = *v8 + (int32_t)a2;
    return a4 & 0xffffffff ^ 219;
}

// Address range: 0x325c8f - 0x325c90
int64_t function_325c8f(int64_t a1) {
    // 0x325c8f
    int64_t result; // 0x325c8f
    return result;
}

// Address range: 0x3629be - 0x3629d0
int64_t function_3629be(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3629be
    bool v1; // 0x3629be
    int64_t v2 = v1 ? -1 : 1; // 0x3629be
    int64_t v3 = v2 + a1; // 0x3629be
    int64_t result = __asm_int1(v3, v2 + a2, a3) & -0xff01 | (int64_t)&g1; // 0x3629c0
    int64_t v4 = a3 & -256 | 177; // 0x3629c2
    int16_t v5 = v4; // 0x3629c4
    *(int32_t *)v3 = __asm_insd(v5);
    *(char *)v3 = __asm_insb(v5);
    char v6 = *(char *)0x16f9d5ce; // 0x3629c7
    int64_t v7; // 0x3629be
    *(char *)0x16f9d5ce = v6 + (char)((uint64_t)v7 / 256);
    int32_t * v8 = (int32_t *)(result + 105); // 0x3629cd
    *v8 = *v8 ^ (int32_t)v4;
    return result;
}

// Address range: 0x362a0e - 0x362a13
int64_t function_362a0e(int64_t a1) {
    // 0x362a0e
    int64_t v1; // 0x362a0e
    int64_t v2 = v1;
    bool v3; // 0x362a0e
    return (v2 + 118 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x362ab5 - 0x362abe
int64_t function_362ab5(void) {
    // 0x362ab5
    int64_t result; // 0x362ab5
    return result;
}

// Address range: 0x362ac2 - 0x362ac7
int64_t function_362ac2(void) {
    // 0x362ac2
    return function_ffffffffcfdae9c7();
}

// Address range: 0x362b11 - 0x362b14
int64_t function_362b11(void) {
    // 0x362b11
    int64_t result; // 0x362b11
    return result;
}

// Address range: 0x362b3b - 0x362b3e
int64_t function_362b3b(int64_t a1) {
    // 0x362b3b
    int64_t result; // 0x362b3b
    return result;
}

// Address range: 0x362b92 - 0x362b9c
int64_t function_362b92(int64_t a1) {
    // 0x362b92
    int64_t v1; // 0x362b92
    uint32_t v2 = (int32_t)v1; // 0x362b92
    __asm_out_135(-101, v2);
    bool v3; // 0x362b92
    uint32_t v4 = v2 + 0x118d2142 + (int32_t)v3; // 0x362b94
    int64_t v5 = v3 ? v4 <= v2 : v2 > 0xee72debd ? 80 : 79; // 0x362b99
    return ((int64_t)v4 - v5) % 256 | (int64_t)(v4 & -256);
}

// Address range: 0x362bf9 - 0x362c08
int64_t function_362bf9(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 0x6ade6df); // 0x362bf9
    *v1 = *v1 & a2;
    char v2 = *(char *)0x54fa2307; // 0x362c00
    int64_t v3; // 0x362bf9
    *(char *)0x54fa2307 = v2 + (char)((uint64_t)v3 / 256);
    return function_362c7e();
}

// Address range: 0x362c24 - 0x362c35
int64_t function_362c24(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x362c24
    int64_t v1; // 0x362c24
    *(char *)a4 = 2 * (char)v1;
    char * v2 = (char *)(v1 + 0x68c39f); // 0x362c2c
    *v2 = (char)(v1 / 256);
    return 256 * (int64_t)*v2 | v1 & -0xff01;
}

// Address range: 0x362c7e - 0x362c80
int64_t function_362c7e(void) {
    // 0x362c7e
    int64_t result; // 0x362c7e
    return result;
}

// Address range: 0x362cd8 - 0x362cdd
int64_t function_362cd8(void) {
    // 0x362cd8
    return function_2b62de0a();
}

// Address range: 0x362cf0 - 0x362cf5
int64_t function_362cf0(int64_t a1) {
    // 0x362cf0
    int64_t result; // 0x362cf0
    return result;
}

// Address range: 0x362cf5 - 0x362df6
int64_t function_362cf5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x362cf5
    bool v1; // 0x362cf5
    if (!v1) {
        // 0x362cf7
        unknown_4f3711ff();
        int32_t v2 = *(int32_t *)(2 * a3 - 0x2b548a1b); // 0x362cfe
        int64_t result = __asm_sti(); // 0x362d0e
        __asm_out_133(-97, (char)result);
        *(int64_t *)((int64_t)(0xc01916 * v2) - 8) = 0x44a0dc00;
        return result;
    }
    int64_t v3; // 0x362cf5
    if ((int32_t)(v3 & a4) == 0) {
        // 0x362dac
        return function_ffffffffe8cdb9c2();
    }
    unsigned char v4 = (char)v3; // 0x362d41
    char v5 = v4 - (char)((int64_t)&g5 >> 8); // 0x362d41
    __asm_out_133(63, v5);
    *(char *)a3 = v5 + (char)a3 + (char)(v4 < (char)((int64_t)&g5 >> 8));
    return unknown_940453();
}

// Address range: 0x362e18 - 0x362e24
int64_t function_362e18(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (unsigned char)(char)a4 % 32; // 0x362e18
    if (v1 != 0) {
        char * v2 = (char *)(a3 + 0x9403f46); // 0x362e18
        unsigned char v3 = *v2; // 0x362e18
        *v2 = v3 >> 8 - v1 | v3 << v1;
    }
    return unknown_35c4f24(a1, a2, a3, a4, a5);
}

// Address range: 0x362e2e - 0x362e30
int64_t function_362e2e(void) {
    // 0x362e2e
    int64_t result; // 0x362e2e
    return result;
}

// Address range: 0x362e4b - 0x362e4c
int64_t function_362e4b(void) {
    // 0x362e4b
    int64_t result; // 0x362e4b
    return result;
}

// Address range: 0x362e57 - 0x362e58
int64_t function_362e57(void) {
    // 0x362e57
    int64_t result; // 0x362e57
    return result;
}

// Address range: 0x362e5b - 0x362e5d
int64_t function_362e5b(void) {
    // 0x362e5b
    int64_t v1; // 0x362e5b
    return function_362e61(v1, v1, v1, v1, (int64_t)&g8);
}

// Address range: 0x362e5e - 0x362e61
int64_t function_362e5e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x362e5e
    int64_t result; // 0x362e5e
    return result;
}

// Address range: 0x362e61 - 0x362f39
int64_t function_362e61(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x362e61
    int64_t v1; // 0x362e61
    uint64_t v2 = v1;
    int64_t v3 = a2;
    uint64_t v4 = a4 - 1; // 0x362e61
    int64_t v5; // 0x362e61
    int64_t v6; // 0x362e61
    bool v7; // 0x362e61
    if (v4 != 0 && !v7) {
        int64_t v8 = function_362e57(); // 0x362e61
        v6 = v8;
        v5 = v8;
    }
    int64_t v9 = v5; // 0x362e65
    *(int32_t *)v9 = (int32_t)v9 - 24;
    char * v10 = (char *)(a1 - 0x5632911b); // 0x362e6a
    *v10 = *v10 | -111;
    uint32_t v11 = 61 * *(int32_t *)&v6; // 0x362e71
    v6 = v11;
    int32_t * v12 = (int32_t *)(a3 - 2); // 0x362e74
    uint32_t v13 = *v12; // 0x362e74
    uint32_t v14 = v13 + (int32_t)v3; // 0x362e74
    *v12 = v14;
    *(char *)0x4da5c497a982ac04 = (char)v11;
    uint64_t v15 = v4 % 64; // 0x362e80
    if (v15 != 0) {
        *(int64_t *)v2 = v2 >> v15 | (int64_t)((int128_t)v2 << (int128_t)(65 - v15)) | (int64_t)(v14 < v13) << 64 - v15;
    }
    __asm_outsd((int16_t)a3, *(int32_t *)&v3);
    unsigned char v16 = *(char *)(v1 - 0x16fc600); // 0x362e90
    v6 &= -250;
    int32_t * v17 = (int32_t *)(256 * (int64_t)v16 | a3 & -0xff01); // 0x362e99
    uint32_t v18 = *v17 | (int32_t)a1; // 0x362e99
    int64_t v19 = v18; // 0x362e99
    int32_t * v20 = (int32_t *)(v19 + 0x3d00fa08); // 0x362e9b
    *v20 = *v20 + 0x7bf3df01;
    *v17 = *v17 | v18;
    char * v21 = (char *)(v19 - 107); // 0x362ea9
    *v21 = *v21 ^ (char)a3;
    int64_t result = v6;
    if ((int32_t)(v4 || a3) == 2) {
        // 0x362eb7
        return result;
    }
    int64_t result2 = (result + 232) % 256 | result & -256; // 0x362f2e
    int32_t * v22 = (int32_t *)result2; // 0x362f30
    *v22 = *v22 + (int32_t)result2;
    return result2;
}

// Address range: 0x362f57 - 0x362f5e
int64_t function_362f57(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x362f57
    int64_t result; // 0x362f57
    return result;
}

// Address range: 0x362f87 - 0x362f9a
int64_t function_362f87(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x362f87
    int64_t v1; // 0x362f87
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2; // 0x362f87
    *(char *)a3 = *(char *)&v2 + (char)(a4 / 256);
    *(int32_t *)a3 = (int32_t)a3;
    float80_t v3; // 0x362f87
    bool v4; // 0x362f87
    *(int32_t *)((v4 ? -4 : 4) + a1) = (int32_t)v3;
    return v1 + 0x60a49ae4 & 0xffffffff;
}

// Address range: 0x362fc3 - 0x362fc4
int64_t function_362fc3(int64_t a1) {
    // 0x362fc3
    int64_t result; // 0x362fc3
    return result;
}

// Address range: 0x362fd8 - 0x362fd9
int64_t function_362fd8(int64_t a1) {
    // 0x362fd8
    int64_t result; // 0x362fd8
    return result;
}

// Address range: 0x363063 - 0x3630c4
int64_t function_363063(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x363063
    int64_t result; // 0x363063
    int64_t v1 = result;
    int32_t * v2 = (int32_t *)(8 * result + 0x70860aa0 + v1); // 0x363063
    uint32_t v3 = *v2; // 0x363063
    uint32_t v4 = v3 + (int32_t)a3; // 0x363063
    *v2 = v4;
    if (v4 >= v3) {
        // 0x36306c
        return function_7ed2865e();
    }
    char * v5 = (char *)(result + 0x7835000); // 0x363094
    char v6 = result; // 0x363094
    *v5 = *v5 + v6;
    char * v7 = (char *)(result - 0x62fe1800); // 0x36309b
    *v7 = *v7 + (char)(result / 256);
    char * v8 = (char *)(a1 - 46); // 0x3630a1
    *v8 = *v8 + v6;
    int32_t v9 = result; // 0x3630a4
    int32_t v10 = v9 >> 31; // 0x3630a4
    unsigned char v11 = *(char *)(a2 - 24) | (char)v10; // 0x3630ad
    int64_t v12 = (int64_t)v11 | (int64_t)(v10 & -256); // 0x3630ad
    int32_t * v13 = (int32_t *)(a1 - 59); // 0x3630b0
    *v13 = *v13 + (int32_t)v12;
    *(int32_t *)a1 = v9;
    char * v14 = (char *)((2 * v1 & 254 | v1 & -256) + 0x2a9b011a + 4 * v12); // 0x3630b4
    *v14 = *v14 + v11;
    int32_t * v15 = (int32_t *)(a2 + 0x8b8e7f); // 0x3630bd
    *v15 = *v15 + (int32_t)a2;
    return result;
}

// Address range: 0x3630f4 - 0x363102
int64_t function_3630f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3630f4
    return unknown_ffffffffb9043a00();
}

// Address range: 0x363118 - 0x363119
int64_t function_363118(void) {
    // 0x363118
    int64_t result; // 0x363118
    return result;
}

// Address range: 0x363120 - 0x363121
int64_t function_363120(void) {
    // 0x363120
    int64_t result; // 0x363120
    return result;
}

// Address range: 0x363129 - 0x36312a
int64_t function_363129(void) {
    // 0x363129
    int64_t result; // 0x363129
    return result;
}

// Address range: 0x36312d - 0x36316d
int64_t function_36312d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36312d
    int64_t v1; // 0x36312d
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 - (char)a4;
    int64_t v3; // 0x36312d
    *(int32_t *)a1 = *(int32_t *)&v3 ^ (int32_t)a1;
    int64_t v4; // 0x36312d
    unsigned char v5 = *(char *)&v4; // 0x363140
    *(char *)a3 = v5 / 2 | 128 * v5;
    int64_t v6 = unknown_ffffffff8708394b(); // 0x363145
    char * v7 = (char *)(a4 - 0x4a06d436); // 0x36314b
    *v7 = *v7 & (char)v6;
    bool v8; // 0x36312d
    unknown_1dd4205a((v8 ? -1 : 1) + a1);
    if (v8) {
        function_363129();
    }
    // 0x36315d
    unknown_ffffffffe860bd69();
    __asm_rsm();
    return function_363118();
}

// Address range: 0x36316e - 0x36316f
int64_t function_36316e(void) {
    // 0x36316e
    int64_t result; // 0x36316e
    return result;
}

// Address range: 0x363176 - 0x363177
int64_t function_363176(void) {
    // 0x363176
    int64_t result; // 0x363176
    return result;
}

// Address range: 0x36317c - 0x36317f
int64_t function_36317c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x36317c
    int64_t result; // 0x36317c
    return result;
}

// Address range: 0x3631a9 - 0x3631ec
int64_t function_3631a9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3631a9
    int64_t v1; // 0x3631a9
    uint64_t v2 = v1;
    int64_t v3 = v2 % 256 | v1 & 0x7dff0800 | 0x8200f700; // 0x3631b0
    *(char *)-0x53bb7047 = *(char *)-0x53bb7047 + (char)(v2 / 256);
    uint32_t v4 = *(int32_t *)(v3 + 0x649e3fee); // 0x3631be
    int64_t v5 = __asm_sti(); // 0x3631c5
    bool v6; // 0x3631a9
    char * v7 = (char *)(a2 + 0x13d6d02 + (v6 ? -1 : 1)); // 0x3631c6
    *v7 = 2 * *v7;
    unsigned char v8 = (char)(v5 + (v3 | 0x100000000 * a3) % (int64_t)v4); // 0x3631d0
    char v9 = v8 + 58; // 0x3631d0
    if (v8 <= 197 && v9 != 0) {
        function_363176();
    }
    if (v9 >= 0) {
        function_36316e();
    }
    // 0x3631d7
    __asm_sti();
    char v10 = *(char *)0x16e808e6; // 0x3631df
    *(char *)0x16e808e6 = v10 + (char)(((v2 & 0xff00) + v2) / 256);
    return function_b722b5f();
}

// Address range: 0x36321c - 0x363220
int64_t function_36321c(int64_t a1) {
    // 0x36321c
    int64_t result; // 0x36321c
    return result;
}

// Address range: 0x36329f - 0x3632a0
int64_t function_36329f(void) {
    // 0x36329f
    int64_t result; // 0x36329f
    return result;
}

// Address range: 0x3632b3 - 0x3632bd
int64_t function_3632b3(int64_t a1) {
    // 0x3632b3
    return function_36329f();
}

// Address range: 0x363318 - 0x363319
int64_t function_363318(void) {
    // 0x363318
    int64_t result; // 0x363318
    return result;
}

// Address range: 0x363327 - 0x36332b
int64_t function_363327(int64_t a1) {
    // 0x363327
    int64_t result; // 0x363327
    return result;
}

// Address range: 0x363348 - 0x363349
int64_t function_363348(int64_t a1) {
    // 0x363348
    int64_t result; // 0x363348
    return result;
}

// Address range: 0x3633a4 - 0x3633bc
int64_t function_3633a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    unsigned char v1 = (unsigned char)(char)a4 % 32; // 0x3633a4
    if (v1 != 0) {
        char * v2 = (char *)(a2 + 0x1e81a5a); // 0x3633a4
        *v2 = *v2 << v1;
    }
    int32_t * v3 = (int32_t *)(a6 - 0x7ef85063); // 0x3633ac
    *v3 = *v3 + (int32_t)a5;
    return unknown_6d039fbb();
}

// Address range: 0x3633cc - 0x3633cd
int64_t function_3633cc(int64_t a1) {
    // 0x3633cc
    int64_t result; // 0x3633cc
    return result;
}

// Address range: 0x3633e4 - 0x363412
int64_t function_3633e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3633e4
    unknown_4f0cbcea();
    *(int64_t *)-0xa42a72f = *(int64_t *)-0xa42a72f & 77;
    int64_t v1 = unknown_ffffffffe30d62f9(); // 0x3633f3
    __asm_out_133(83, (char)v1);
    uint32_t v2 = (int32_t)a4 % 32; // 0x363404
    uint64_t v3 = v2 == 0 ? v1 : (int64_t)((int32_t)v1 << v2);
    return ((v3 / 256 + a4) % 256 | a4 & 0xffffff00) + 0x246ffa84 & 0xffffffff;
}

// Address range: 0x36349e - 0x3634b3
int64_t function_36349e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36349e
    unknown_f276c3f();
    int16_t v1 = a3; // 0x3634a6
    int64_t v2; // 0x36349e
    __asm_out(v1, (char)v2);
    int32_t v3 = v2;
    __asm_outsd(v1, v3);
    __asm_out_133(-99, (char)a2);
    int32_t * v4 = (int32_t *)((v2 & 0xffffffff) - 0x27ffff3b); // 0x3634ac
    *v4 = *v4 + v3;
    return a2 & 0xffffffff;
}

// Address range: 0x3634d9 - 0x3634dc
int64_t function_3634d9(int64_t a1) {
    // 0x3634d9
    int64_t result; // 0x3634d9
    return result;
}

// Address range: 0x3634df - 0x3634e5
int64_t function_3634df(void) {
    // 0x3634df
    int64_t result; // 0x3634df
    return result;
}

// Address range: 0x3634e7 - 0x3634e8
int64_t function_3634e7(void) {
    // 0x3634e7
    int64_t result; // 0x3634e7
    return result;
}

// Address range: 0x3634ef - 0x3635ba
int64_t function_3634ef(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3634ef
    int64_t v1; // 0x3634ef
    char * v2 = (char *)(v1 + 0x1e855b8); // 0x3634ef
    *v2 = *v2 ^ (char)(a3 / 256);
    __asm_out((int16_t)a3, (char)__asm_wait());
    char * v3 = (char *)(a3 + 0x2580a9d8); // 0x3634f7
    unsigned char v4 = *v3; // 0x3634f7
    unsigned char v5 = (char)v1; // 0x3634f7
    *v3 = v4 - v5;
    if (v4 < v5) {
        function_3634e7();
    }
    // 0x3634ff
    bool v6; // 0x3634ef
    int64_t v7 = v6 ? -1 : 1;
    int64_t v8 = a3; // 0x363506
    int64_t v9 = a2; // 0x363506
    int64_t v10 = a1; // 0x363506
    int64_t v11; // 0x363525
    int32_t result; // 0x363534
    while (true) {
        uint64_t v12 = v8;
        unknown_3ba9d011();
        int64_t v13; // 0x3634ef
        char v14 = *(char *)(v13 + 47); // 0x363510
        int64_t v15 = 256 * (int64_t)(v14 & (char)(v12 / 256)) | v12 & -0xff01; // 0x363510
        __asm_int1(v10, v9, v15);
        int64_t v16 = unknown_ffffffffc3ba491a(); // 0x363514
        *(char *)v10 = *(char *)v9;
        v10 += v7;
        v9 += v7;
        int64_t v17; // 0x3634ef
        char v18 = v17 / 256; // 0x36351a
        *(char *)0x60c9c77a = v18;
        int64_t v19 = (v16 + 255) % 256 | v16 & -256; // 0x363520
        char * v20 = (char *)v9; // 0x363523
        char v21 = *v20 + (char)v17; // 0x363523
        *v20 = v21;
        v11 = 256 * (int64_t)(v21 ^ v18) | v17 & -0xff01;
        v8 = (int64_t)(*(int32_t *)(v19 - 0x17f96d88) + (int32_t)v15);
        int32_t * v22 = (int32_t *)(v13 + 16); // 0x36352d
        *v22 = *v22 + (int32_t)v13;
        char * v23 = (char *)v19; // 0x363532
        *v23 = (char)(v13 / 256);
        result = __asm_in(-24);
        int32_t * v24 = (int32_t *)(v9 + 43); // 0x363536
        int32_t * v25 = (int32_t *)(v8 + 10);
        int32_t v26 = v11;
        int64_t v27 = 256 * (int64_t)*v23 | v13 & -0xff01; // 0x363534
        int32_t v28 = *v24; // 0x363536
        int32_t v29 = v27; // 0x363536
        int32_t v30 = v28 + v29; // 0x363536
        *v24 = v30;
        v17 = v11;
        v13 = v27;
        while (((v30 ^ v28) & (v30 ^ v29)) >= 0) {
            int32_t v31 = *v25 + v26; // 0x363543
            unsigned char v32 = llvm_ctpop_i8((char)v31); // 0x363543
            *v25 = v31;
            v27 = 0xe8daa7d5;
            if (v32 % 2 == 0) {
                // break (via goto) -> 0x36354e
                goto lab_0x36354e;
            }
            v28 = *v24;
            v29 = v27;
            v30 = v28 + v29;
            *v24 = v30;
            v17 = v11;
            v13 = v27;
        }
    }
  lab_0x36354e:;
    int32_t * v33 = (int32_t *)v9; // 0x36354e
    int32_t v34 = *v33 + result; // 0x36354e
    *v33 = v34;
    if (v34 != 0) {
        // 0x3635ae
        return unknown_ffffffffb48b7ab4();
    }
    // 0x363553
    *(int64_t *)0x219ba7d9 = v11;
    return result;
}

// Address range: 0x3b5cc9 - 0x3b5ccd
int64_t function_3b5cc9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b5cc9
    int64_t result; // 0x3b5cc9
    return result;
}

// Address range: 0x3b5cee - 0x3b5cf1
int64_t function_3b5cee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b5cee
    int64_t result; // 0x3b5cee
    return result;
}

// Address range: 0x3b5d43 - 0x3b5d54
int64_t function_3b5d43(void) {
    // 0x3b5d43
    unknown_2236d49();
    return function_ffffffffdff589bc();
}

// Address range: 0x3b5d91 - 0x3b5dee
int64_t function_3b5d91(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    char v1 = *(char *)0x1e09baed; // 0x3b5de6
    int64_t v2; // 0x3b5d91
    *(char *)0x1e09baed = v1 + (char)((uint64_t)v2 / 256);
    return result;
}

// Address range: 0x3b5e70 - 0x3b5e71
int64_t function_3b5e70(void) {
    // 0x3b5e70
    int64_t result; // 0x3b5e70
    return result;
}

// Address range: 0x3b5e96 - 0x3b5e97
int64_t function_3b5e96(void) {
    // 0x3b5e96
    int64_t result; // 0x3b5e96
    return result;
}

// Address range: 0x3b5ea2 - 0x3b5ea8
int64_t function_3b5ea2(void) {
    // 0x3b5ea2
    int64_t result; // 0x3b5ea2
    return result;
}

// Address range: 0x3b5eb4 - 0x3b5eb5
int64_t function_3b5eb4(void) {
    // 0x3b5eb4
    int64_t result; // 0x3b5eb4
    return result;
}

// Address range: 0x3b5ec0 - 0x3b5ec8
int64_t function_3b5ec0(void) {
    // 0x3b5ec0
    return function_3b5eb4();
}

// Address range: 0x3b64c9 - 0x3b64ec
int64_t function_3b64c9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3b64c9
    int64_t v1; // 0x3b64c9
    int64_t v2 = v1 + a1 & 0xffffffff; // 0x3b64cb
    *(int32_t *)v2 = (int32_t)v1;
    bool v3; // 0x3b64c9
    int64_t v4 = v3 ? -4 : 4; // 0x3b64d1
    int64_t v5 = v2 + v4; // 0x3b64d1
    int64_t v6 = v4 + a2; // 0x3b64d1
    int32_t * v7 = (int32_t *)(v6 - 112); // 0x3b64d2
    *v7 = *v7 & (int32_t)v6;
    int64_t v8 = unknown_ffffffffdf3d4d36(v5, v6); // 0x3b64d5
    *(char *)-0x16eb49ff = *(char *)-0x16eb49ff | (char)v8 | 32;
    int32_t * v9 = (int32_t *)(v5 + 0x4801578e); // 0x3b64e5
    *v9 = *v9 + (int32_t)v5;
    return v6 & 0xffffffff;
}

// Address range: 0x3b64f5 - 0x3b64fa
int64_t function_3b64f5(void) {
    // 0x3b64f5
    return function_ffffffffd72e12a3();
}

// Address range: 0x3b64fa - 0x3b6620
int64_t function_3b64fa(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = unknown_ffffffffb478c400(); // 0x3b64fa
    bool v2; // 0x3b64fa
    *(int32_t *)a1 = (int32_t)v2 + (int32_t)a1 - (int32_t)v1;
    uint64_t v3 = v1 + a4 / 256; // 0x3b6502
    int32_t * v4 = (int32_t *)(a2 - 0x7a5eddac); // 0x3b6504
    *v4 = *v4 + (int32_t)(v3 % 256 | v1 & 0xffffff00);
    *(char *)a1 = (char)v3;
    int64_t v5 = (v2 ? -1 : 1) + a1; // 0x3b6572
    uint64_t v6 = unknown_3c0b9279(v5); // 0x3b6573
    char * v7 = (char *)(v6 + 0x5678800); // 0x3b6578
    *v7 = *v7 + (char)v6;
    char * v8 = (char *)(a3 + 1); // 0x3b657e
    char v9 = *v8 + (char)(v6 / 256); // 0x3b657e
    unsigned char v10 = llvm_ctpop_i8(v9); // 0x3b657e
    *v8 = v9;
    int64_t v11 = unknown_d3b9087(); // 0x3b6586
    int64_t v12 = a4; // 0x3b6586
    bool v13; // 0x3b64fa
    int64_t v14; // 0x3b64fa
    int64_t v15; // 0x3b64fa
    int64_t v16; // 0x3b64fa
    int64_t v17; // 0x3b64fa
    if (v10 % 2 == 0) {
        int64_t v18 = unknown_713bb2a(); // 0x3b6524
        uint32_t v19 = *(int32_t *)(a4 + 0x2805c080) & (int32_t)(v17 & v17); // 0x3b6530
        int32_t * v20 = (int32_t *)((int64_t)v19 + 0x1924880a); // 0x3b6532
        *v20 = *v20 + (int32_t)v18;
        int32_t * v21 = (int32_t *)v5; // 0x3b653b
        *v21 = *v21 + v19;
        int64_t * v22 = (int64_t *)(v17 - 66); // 0x3b653d
        *v22 = *v22 ^ a6;
        v11 = v19 - 0x1733ee63;
        int32_t * v23 = (int32_t *)(v11 + 0x16633064); // 0x3b6546
        *v23 = *v23 + (int32_t)a2;
        uint32_t v24 = *(int32_t *)(v5 - 0x17292368); // 0x3b654d
        int64_t v25 = v24; // 0x3b654d
        int32_t * v26 = (int32_t *)(a4 + 17); // 0x3b6553
        int32_t v27 = *v26 + v24; // 0x3b6553
        *v26 = v27;
        v12 = a4 - 1;
        v13 = true;
        v15 = v25;
        v16 = v18 & 0xffffffff;
        if (v12 == 0 || v27 == 0) {
            // 0x3b6558
            __asm_in_136((int16_t)a3);
            __asm_int3();
            v14 = v25;
            goto lab_0x3b6561;
        } else {
            goto lab_0x3b6588;
        }
    } else {
        goto lab_0x3b6588;
    }
  lab_0x3b6588:;
    int64_t v28 = v15;
    char * v29 = (char *)(v11 + 0x74b70803); // 0x3b6588
    unsigned char v30 = *v29; // 0x3b6588
    unsigned char v31 = (char)a3; // 0x3b6588
    char v32 = v30 + v31; // 0x3b6588
    unsigned char v33 = llvm_ctpop_i8(v32); // 0x3b6588
    *v29 = v32;
    *(char *)(v28 + 0x1e8a0dd) = (char)(v28 / 256);
    int64_t result = v11 & -0xff01 | 256 * (64 * (int64_t)(v32 == 0) | (int64_t)(v32 < v30) | 128 * (int64_t)(v32 < 0) | 16 * (int64_t)(v30 % 16 + v31 % 16 > 15) | 4 * (int64_t)(v33 % 2 == 0)) | 512; // 0x3b6594
    if (v12 == 0) {
        // 0x3b6570
        return result;
    }
    // 0x3b6599
    *(int32_t *)v5 = (int32_t)result;
    int64_t v34 = (v13 ? -4 : 4) + v5; // 0x3b6599
    char * v35 = (char *)v28; // 0x3b659a
    *v35 = *v35 + (char)(v12 / 256);
    int64_t v36 = unknown_fffffffff004a9a5(v34); // 0x3b659f
    int64_t v37 = v28 + 0xf62901e8 & 0xffffffff;
    char * v38 = (char *)(v28 - 0x7c289cfe);
    int64_t v39 = v34; // 0x3b659f
    int64_t v40 = v36; // 0x3b659f
    int64_t v41 = v12; // 0x3b659f
    int64_t v42 = a3; // 0x3b659f
    int64_t v43 = v16; // 0x3b659f
    int64_t * v44 = (int64_t *)v43; // 0x3b65a4
    int64_t v45 = *v44; // 0x3b65a4
    v14 = v28;
    int3_t v46; // 0x3b64fa
    while ((v45 & 64) != 0) {
        // 0x3b65a7
        *(int16_t *)(8 * v41 + 0xf2e85e8 + v43) = (int16_t)v17;
        uint64_t v47 = (v40 & 0xd401e84a) + 0xa2030028; // 0x3b65b3
        int64_t v48 = v47 & 0xf607e87a; // 0x3b65b3
        char * v49 = (char *)v48; // 0x3b65b8
        char v50 = v47; // 0x3b65b8
        *v49 = *v49 - v50;
        *(int16_t *)(v42 + 0x8aef6f0) = (int16_t)__frontend_reg_load_fpr(v46);
        *v44 = 0x5414fa83;
        *(char *)(v37 - 24) = v50;
        int32_t * v51 = (int32_t *)(v41 & 0xffffffff); // 0x3b65cf
        *v51 = *v51 + (int32_t)v42;
        *v38 = *v38 | (char)v28;
        uint32_t v52 = *(int32_t *)(v37 + 0x201e84b) + (int32_t)v39; // 0x3b65da
        int64_t v53 = v52; // 0x3b65da
        int64_t v54 = unknown_ffffffffea51f3f2(v52); // 0x3b65ec
        int64_t v55 = v43 - 8; // 0x3b65f1
        *(int64_t *)v55 = -0x68b149e0;
        *(int32_t *)v53 = (int32_t)v54;
        int64_t v56 = ((v45 & (int64_t)&g2) == 0 ? 4 : -4) + v53; // 0x3b65f6
        int64_t v57 = unknown_ffffffffa4460601(v56); // 0x3b65fb
        uint64_t v58 = v47 / 256; // 0x3b6600
        int64_t v59 = v58 & 232 | v42; // 0x3b6600
        int32_t v60 = v57; // 0x3b6602
        uint32_t v61 = *(int32_t *)v57; // 0x3b6602
        uint32_t v62 = v61 + v60; // 0x3b6602
        char v63 = v62; // 0x3b6604
        char v64 = v61 > -1 - v60; // 0x3b6604
        unsigned char v65 = v63 - 31 + v64; // 0x3b6604
        char v66 = v65 + v64; // 0x3b6604
        int64_t result2 = (int64_t)v65 | (int64_t)(v62 & -256); // 0x3b6604
        v39 = v56;
        v40 = result2;
        v41 = v48;
        v42 = v59;
        v43 = v55;
        if (((v66 ^ v63) & (v66 ^ -128)) >= 0) {
            char * v67 = (char *)(v56 - 24); // 0x3b6608
            *v67 = *v67 & (char)(v62 / 256);
            int32_t * v68 = (int32_t *)v56; // 0x3b660b
            *v68 = *v68 + (int32_t)v55;
            int64_t v69 = (v54 & 0xffffffff) + 0x62e65d76; // 0x3b660d
            __writegsbyte(v69, __readgsbyte(v69) & (char)v58);
            char * v70 = (char *)result2; // 0x3b6614
            unsigned char v71 = *v70; // 0x3b6614
            *v70 = v71 / 128 | 2 * v71;
            __frontend_reg_store_fpr(v46 - 1, *(float80_t *)(v59 + 0x301e836));
            return result2;
        }
        v44 = (int64_t *)v43;
        v45 = *v44;
        v14 = v28;
    }
    goto lab_0x3b6561;
  lab_0x3b6561:;
    float80_t v72 = __frontend_reg_load_fpr(v46); // 0x3b6563
    __frontend_reg_store_fpr(v46, v72 + (float80_t)*(float32_t *)v14);
    // 0x3b6570
    return unknown_ffffffff8f664c6e();
}

// Address range: 0x3b662c - 0x3b662f
int64_t function_3b662c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b662c
    int64_t result; // 0x3b662c
    int32_t v1 = result;
    *(int32_t *)a4 = 2 * v1 | (int32_t)(v1 < 0);
    return result;
}

// Address range: 0x3b6643 - 0x3b6650
int64_t function_3b6643(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b6643
    int64_t v1; // 0x3b6643
    int64_t result = v1 & 0xffffffff; // 0x3b664a
    *(char *)result = 2 * (char)v1;
    return result;
}

// Address range: 0x3b66dd - 0x3b66e5
int64_t function_3b66dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 1); // 0x3b66dd
    int64_t result; // 0x3b66dd
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x3b66f9 - 0x3b66fa
int64_t function_3b66f9(void) {
    // 0x3b66f9
    int64_t result; // 0x3b66f9
    return result;
}

// Address range: 0x3b6704 - 0x3b670a
int64_t function_3b6704(void) {
    // 0x3b6704
    int64_t v1; // 0x3b6704
    int64_t result = v1 & -0xff01 | (int64_t)"lock"; // 0x3b6706
    bool v2; // 0x3b6704
    if (v2 || false) {
        result = function_3b66f9();
    }
    // 0x3b6709
    return result;
}

// Address range: 0x3b6738 - 0x3b673b
int64_t function_3b6738(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3b6738
    int64_t v1; // 0x3b6738
    return v1 + a2 & 0xffffffff;
}

// Address range: 0x3b6767 - 0x3b676a
int64_t function_3b6767(void) {
    // 0x3b6767
    int64_t result; // 0x3b6767
    return result;
}

// Address range: 0x3b6797 - 0x3b6798
int64_t function_3b6797(void) {
    // 0x3b6797
    int64_t result; // 0x3b6797
    return result;
}

// Address range: 0x3b679f - 0x3b67a0
int64_t function_3b679f(void) {
    // 0x3b679f
    int64_t result; // 0x3b679f
    return result;
}

// Address range: 0x3b67ab - 0x3b67af
int64_t function_3b67ab(void) {
    // 0x3b67ab
    return function_3b6797();
}

// Address range: 0x3b6838 - 0x3b683e
int64_t function_3b6838(int64_t a1) {
    // 0x3b6838
    return unknown_ffffffffb458b53e(a1);
}

// Address range: 0x3b68b2 - 0x3b68be
int64_t function_3b68b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a5 - 0x41c93a26); // 0x3b68b3
    *v1 = *v1 + (int32_t)a4;
    bool v2; // 0x3b68b2
    unsigned char v3 = *(char *)((v2 ? -4 : 4) + a2); // 0x3b68ba
    int64_t v4; // 0x3b68b2
    return (int64_t)(*(int32_t *)&v4 & -256) | (int64_t)v3;
}
