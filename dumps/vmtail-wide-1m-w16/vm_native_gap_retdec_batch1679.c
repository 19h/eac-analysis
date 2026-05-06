/*
 * Targeted RetDec C for native executable gap queue batch 1679.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x26aae-0x26cae rank=- name=- kind=- bytes=- uncovered=-
 *   0x26cae-0x26eae rank=- name=- kind=- bytes=- uncovered=-
 *   0x26eae-0x270ae rank=- name=- kind=- bytes=- uncovered=-
 *   0x270ae-0x27281 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1193bf-0x1195bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1195bf-0x1197bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1197bf-0x1199bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1199bf-0x119b8e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4511df-0x4513df rank=- name=- kind=- bytes=- uncovered=-
 *   0x4513df-0x4515df rank=- name=- kind=- bytes=- uncovered=-
 *   0x4515df-0x4517df rank=- name=- kind=- bytes=- uncovered=-
 *   0x4517df-0x4519a6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5124d4-0x5126d4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5126d4-0x5128d4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5128d4-0x512ad4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x512ad4-0x512ca0 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g6;
extern int g7;
extern int g9;
extern int g10;
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

int64_t function_1193bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1193f3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1193fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11946b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_119518(int64_t a1, int64_t a2, int64_t a3);
int64_t function_119548(void);
int64_t function_11955a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_119566(void);
int64_t function_119576(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1195a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_119747(void);
int64_t function_11976e(void);
int64_t function_11979f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1197ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1197ff(int64_t a1, int64_t a2, int64_t a3);
int64_t function_119893(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1198ba(int64_t a1, int64_t a2);
int64_t function_1198ed(int64_t a1, int64_t a2);
int64_t function_119907(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_119a12(void);
int64_t function_119a2c(void);
int64_t function_119a7e(int64_t a1);
int64_t function_119a82(void);
int64_t function_119a93(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_119af4(void);
int64_t function_119b26(void);
int64_t function_119b47(void);
int64_t function_119b5e(int64_t a1);
int64_t function_119b8c(void);
int64_t function_1913562();
int64_t function_2508e();
int64_t function_255da();
int64_t function_256ba();
int64_t function_260d0();
int64_t function_26106();
int64_t function_26452();
int64_t function_264e5();
int64_t function_26600();
int64_t function_268c9();
int64_t function_26aae(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_26bbf(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_27998();
int64_t function_27a2a();
int64_t function_27a86();
int64_t function_27e1a();
int64_t function_27e7a();
int64_t function_27fbe();
int64_t function_2808e();
int64_t function_3fa60904();
int64_t function_4511df(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_451212(void);
int64_t function_45123c(void);
int64_t function_4512ac(void);
int64_t function_4512c1(void);
int64_t function_4512ca(int64_t a1);
int64_t function_4512ce(int64_t a1);
int64_t function_45136c(int64_t a1);
int64_t function_4513cb(int64_t a1);
int64_t function_4513ec(void);
int64_t function_451411(void);
int64_t function_451545(int64_t a1, int64_t a2, int64_t a3);
int64_t function_451588(void);
int64_t function_4515a3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_451652(int64_t a1);
int64_t function_451661(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_45166d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_45169a(void);
int64_t function_4516a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6, int64_t a7);
int64_t function_4516e8(void);
int64_t function_4516ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_451737(void);
int64_t function_451739(void);
int64_t function_451791(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4517db(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_451801(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45184d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4518bc(void);
int64_t function_4518f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_451950(int64_t a1);
int64_t function_451955(void);
int64_t function_451968(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_45199c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4eeb50();
int64_t function_4eeb60();
int64_t function_4efe20();
int64_t function_508620();
int64_t function_50ab00();
int64_t function_50ca531e();
int64_t function_50f7d0();
int64_t function_510590();
int64_t function_511e18();
int64_t function_511e37();
int64_t function_511e50();
int64_t function_51224d();
int64_t function_512473();
int64_t function_512483();
int64_t function_5124d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5124ec(int64_t a1);
int64_t function_51250e(int64_t a1);
int64_t function_512524(int64_t a1);
int64_t function_51254a(void);
int64_t function_512559(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10);
int64_t function_542470();
int64_t function_5f2415f3();
int64_t function_686ea7ce();
int64_t function_7bbfe1ea();
int64_t function_ffffffff91943733();
int64_t function_ffffffff9cc7a4f8();
int64_t function_ffffffffa24172ef();
int64_t function_ffffffffcd9142db();
int64_t function_ffffffffe0c5a0eb();
int64_t unknown_1f9db32();
int64_t unknown_58769dd0();
int64_t unknown_6908a81d();
int64_t unknown_ffffffff93979dba();
int64_t unknown_ffffffffa2997eaa();
int64_t unknown_ffffffffe7deba61();
int64_t unknown_ffffffffedecc772();
int64_t unknown_fffffffff3959888();

// Address range: 0x26aae - 0x26bbf
int64_t function_26aae(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x26aae
    __readfsqword(40);
    if (*(int64_t *)(a6 + 16) == a6) {
        // 0x26aed
        function_27e1a(a6, a2 / 100, (int128_t)(a2 % 100), 100);
    }
    // 0x26b05
    int64_t v1; // bp-104, 0x26aae
    int64_t v2 = (int64_t)&v1; // 0x26ac1
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x26b13
    int64_t v4 = *v3; // 0x26b13
    int64_t v5 = 0; // 0x26b18
    int64_t v6; // 0x26aae
    int64_t v7; // 0x26aae
    int64_t v8; // 0x26aae
    int64_t v9; // 0x26aae
    int64_t v10; // 0x26aae
    uint64_t v11; // 0x26aae
    int64_t v12; // 0x26aae
    int64_t v13; // 0x26aae
    int64_t v14; // 0x26aae
    int64_t v15; // 0x26aae
    int64_t v16; // 0x26aae
    int64_t v17; // 0x26aae
    unsigned char v18; // 0x26b1a
    int64_t * v19; // 0x26aae
    if (v4 != 0) {
        // 0x26b1a
        v19 = (int64_t *)(a6 + 8);
        v16 = v2 + 39;
        v6 = v4;
        v9 = 0;
        v12 = 0;
        v10 = 0;
        while (true) {
          lab_0x26b1a:
            // 0x26b1a
            v11 = v10;
            v13 = v12;
            v8 = v6;
            v17 = v9 + a1;
            v18 = *(char *)v17;
            if (*(char *)((int64_t)v18 + (int64_t)&g4) == 0) {
                goto lab_0x26b3e;
            } else {
                if (v11 == 0 == v18 < 33) {
                    goto lab_0x26b3e;
                } else {
                    // 0x26b39
                    v7 = v8;
                    v14 = v13;
                    v15 = v11 + 1;
                    goto lab_0x26b90;
                }
            }
        }
    }
  lab_0x26b98_2:;
    int64_t result = v5; // 0x26ba9
    if (*(int64_t *)(v2 + 40) != __readfsqword(40)) {
        // 0x26bab
        __stack_chk_fail();
        result = (int64_t)&g10;
    }
    // 0x26bb0
    return result;
  lab_0x26b3e:
    // 0x26b3e
    v7 = v8;
    v14 = v13;
    v15 = 0;
    if (v18 == 0) {
        // 0x26b42
        v7 = v8;
        v14 = v13;
        v15 = 0;
        if (v11 < 129 == v11 >= *(int64_t *)(v2 + 16)) {
            // 0x26b51
            *(int64_t *)(v2 - 16) = 0;
            int64_t v20 = v13 + 1; // 0x26b67
            function_27e7a(a6, *v19, v17 - v11, v17);
            *(char *)v16 = (char)a5;
            function_27fbe(a6, *v19, v16);
            v5 = v20;
            if (v20 == *(int64_t *)(v2 + 24)) {
                // break -> 0x26b98
                goto lab_0x26b98_2;
            }
            // 0x26b51
            v7 = *v3;
            v14 = v20;
            v15 = 0;
        }
    }
    goto lab_0x26b90;
  lab_0x26b90:;
    int64_t v21 = v9 + 1; // 0x26b90
    v6 = v7;
    v9 = v21;
    v12 = v14;
    v10 = v15;
    v5 = v14;
    if (v21 == v7) {
        // break -> 0x26b98
        goto lab_0x26b98_2;
    }
    goto lab_0x26b1a;
}

// Address range: 0x26bbf - 0x27281
int64_t function_26bbf(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x26bbf
    __readfsqword(40);
    int64_t v1 = a6; // bp-376, 0x26bfc
    if (*(int64_t *)(a6 + 16) == a6) {
        // 0x26c07
        function_27e1a(a6, a2 / 100, (int128_t)(a2 % 100), 100);
    }
    int64_t v2 = 0; // bp-312, 0x26c26
    int64_t v3 = 0; // 0x26c53
    int64_t v4 = 0; // 0x26c53
    uint64_t v5; // 0x26bbf
    int64_t v6; // 0x26bbf
    int64_t v7; // 0x26c59
    unsigned char v8; // 0x26c59
    int64_t v9; // 0x26c59
    if (a2 != 0) {
        while (true) {
          lab_0x26c59:
            // 0x26c59
            v5 = v4;
            v6 = v3;
            v7 = v6 + a1;
            v8 = *(char *)v7;
            v9 = v8;
            if (*(char *)(v9 + (int64_t)&g4) == 0) {
                goto lab_0x26c7f;
            } else {
                if (v5 == 0 == v8 < 33) {
                    goto lab_0x26c7f;
                } else {
                    // 0x26c77
                    v4 = v5 + 1;
                    goto lab_0x26d69;
                }
            }
        }
    }
  lab_0x26d71:;
    // 0x26d71
    int64_t v10; // bp-288, 0x26bbf
    int64_t v11 = (int64_t)&v10; // 0x26d96
    function_27998(&v10, a4);
    int64_t v12; // bp-256, 0x26bbf
    int64_t v13 = (int64_t)&v12; // 0x26db7
    function_27998(&v12, v11);
    int64_t v14 = -v2;
    int64_t v15; // bp-96, 0x26bbf
    function_27998(&v15, v13);
    int64_t v16 = (int64_t)&v15; // 0x26de0
    int64_t v17; // bp-224, 0x26bbf
    int64_t v18 = (int64_t)&v17; // 0x26de6
    function_27998(&v17, v16);
    function_27a2a(&v15);
    int64_t v19; // bp-192, 0x26bbf
    function_27998(&v19, v18);
    int64_t v20 = (int64_t)&v19; // 0x26e05
    int64_t v21; // bp-160, 0x26bbf
    function_27998(&v21, v20);
    int64_t v22 = (int64_t)&v21; // 0x26e18
    function_27998(&v15, v22);
    int64_t v23; // bp-128, 0x26bbf
    function_27998(&v23, v16);
    function_27a2a(&v15);
    int64_t v24 = v14; // 0x26e3c
    int64_t v25 = v2; // 0x26e3c
    int64_t v26; // 0x26bbf
    if (v14 < 32) {
        goto lab_0x26e97;
    } else {
        int64_t v27 = v14 / 32; // 0x26bbf
        int64_t v28 = v2;
        int64_t v29 = function_260d0(&v23, v28); // 0x26e44
        v26 = v28;
        while ((char)v29 != 0) {
            int64_t v30 = v28 + 8; // 0x26e51
            int64_t v31 = function_260d0(&v23, v30); // 0x26e5b
            v26 = v30;
            if ((char)v31 == 0) {
                // break -> 0x26eec
                break;
            }
            int64_t v32 = v28 + 16; // 0x26e68
            int64_t v33 = function_260d0(&v23, v32); // 0x26e72
            v26 = v32;
            if ((char)v33 == 0) {
                // break -> 0x26eec
                break;
            }
            int64_t v34 = v28 + 24; // 0x26e7b
            int64_t v35 = function_260d0(&v23, v34); // 0x26e89
            v26 = v34;
            if ((char)v35 == 0) {
                // break -> 0x26eec
                break;
            }
            int64_t v36 = v27;
            int64_t v37 = v28 + 32; // 0x26e82
            v27 = v36 - 1;
            if (v36 < 2) {
                // 0x26e36
                v24 = -32 - v28;
                v25 = v37;
                goto lab_0x26e97;
            }
            v28 = v37;
            v29 = function_260d0(&v23, v28);
            v26 = v28;
        }
        goto lab_0x26eec;
    }
  lab_0x26c7f:
    // 0x26c7f
    v4 = 0;
    if (v8 == 0) {
        // 0x26c87
        v4 = 0;
        if (v5 >= a3 == v5 < 129) {
            int64_t v38 = v6 - v5; // 0x26ca1
            int64_t v39 = v38 + a1; // 0x26ca4
            int64_t v40 = (int64_t)&g9; // 0x26cac
            if (v7 != v39) {
                if (v39 == 0) {
                    // 0x26cf9
                    function_542470("basic_string::_S_construct null not valid");
                    v40 = (int64_t)&g9;
                } else {
                    int64_t v41 = function_26106(v5, 0, v9, v38); // 0x26cc1
                    int64_t v42 = v41 + 24; // 0x26cc6
                    int64_t v43 = 0;
                    *(char *)(v43 + v42) = *(char *)(v43 + v39);
                    int64_t v44 = v43 + 1; // 0x26cd6
                    while (v44 != v5) {
                        // 0x26ccc
                        v43 = v44;
                        *(char *)(v43 + v42) = *(char *)(v43 + v39);
                        v44 = v43 + 1;
                    }
                    // 0x26cde
                    v40 = v42;
                    if (v41 != (int64_t)g7) {
                        // 0x26ce7
                        *(int32_t *)(v41 + 16) = 0;
                        *(int64_t *)v41 = v5;
                        *(char *)(v42 + v5) = 0;
                        v40 = v42;
                    }
                }
            }
            // 0x26d5a
            v15 = v40;
            function_27a86(&v2, 0, &v15);
            function_2508e(&v15);
            v4 = 0;
        }
    }
    goto lab_0x26d69;
  lab_0x26d69:
    // 0x26d69
    v3 = v6 + 1;
    if (v3 == a2) {
        // break -> 0x26d71
        goto lab_0x26d71;
    }
    goto lab_0x26c59;
  lab_0x26e97:;
    int64_t v45 = v24 >> 3; // 0x26e9d
    int64_t v46 = v25; // 0x26bbf
    int64_t v47; // 0x26bbf
    switch (v45) {
        case 2: {
            goto lab_0x26ec7;
        }
        case 3: {
            int64_t v48 = function_260d0(&v23, v25); // 0x26eba
            v26 = v25;
            if ((char)v48 == 0) {
                goto lab_0x26eec;
            } else {
                // 0x26ec3
                v46 = v25 + 8;
                goto lab_0x26ec7;
            }
        }
        default: {
            // 0x26ead
            v47 = v25;
            if (v45 != 1) {
                // 0x26ee9
                v26 = 0;
                goto lab_0x26eec;
            } else {
                goto lab_0x26eda;
            }
        }
    }
  lab_0x26ec7:;
    int64_t v49 = function_260d0(&v23, v46); // 0x26ecd
    v26 = v46;
    if ((char)v49 == 0) {
        goto lab_0x26eec;
    } else {
        // 0x26ed6
        v47 = v46 + 8;
        goto lab_0x26eda;
    }
  lab_0x26eec:
    // 0x26eec
    function_27a2a(&v23);
    function_27a2a(&v21);
    function_27a2a(&v19);
    int64_t v50 = 0; // 0x26f11
    if (v26 != 0) {
        int64_t v51 = -v26; // 0x26f2e
        int64_t v52 = v51 >> 3; // 0x26f34
        int64_t v53 = -0x7ffffffffffffff8 - v26; // 0x26f38
        int64_t v54 = v53 == 0 | v53 < 0 != (v26 + 0x7ffffffffffffff7 & v51) < 0 ? v52 : 0xfffffffffffffff;
        int64_t v55 = 0; // 0x26f4a
        int64_t v56 = 0; // 0x26f4a
        int64_t v57 = 0; // 0x26f4a
        if (v54 >= 1) {
            int64_t v58 = v54;
            int64_t v59 = 8 * v58;
            int64_t v60 = function_4eeb60(v59, &g5); // 0x26f5b
            while (v60 == 0) {
                // 0x26f68
                v55 = 0;
                v56 = 0;
                v57 = 0;
                if (v58 < 2) {
                    goto lab_0x26fcf;
                }
                v58 /= 2;
                v59 = 8 * v58;
                v60 = function_4eeb60(v59, &g5);
            }
            int64_t v61 = v60 + v59; // 0x26f76
            v55 = v61;
            v56 = v60;
            v57 = v58;
            if (v59 != 0) {
                int64_t * v62 = (int64_t *)v26; // 0x26f81
                int64_t v63 = v60 + 8; // 0x26f84
                *(int64_t *)v60 = *v62;
                *v62 = (int64_t)&g9;
                if (v63 != v61) {
                    int64_t * v64 = (int64_t *)(v63 - 8); // 0x26fa1
                    int64_t v65 = v63 + 8; // 0x26fa5
                    *(int64_t *)v63 = *v64;
                    *v64 = (int64_t)&g9;
                    int64_t v66 = v65; // 0x26f9f
                    while (v65 != v61) {
                        // 0x26fa1
                        v64 = (int64_t *)(v66 - 8);
                        v65 = v66 + 8;
                        *(int64_t *)v66 = *v64;
                        *v64 = (int64_t)&g9;
                        v66 = v65;
                    }
                }
                // 0x26fbe
                function_256ba(v26, v61 - 8);
                v55 = v61;
                v56 = v60;
                v57 = v58;
            }
        }
      lab_0x26fcf:
        // 0x26fcf
        function_27998(&v15, v18);
        int64_t v67 = function_268c9(v26, 0, &v15, v52, v56, v57); // 0x26ff6
        function_27a2a(&v15);
        if (v56 != v55) {
            int64_t v68 = v56 + 8; // 0x2700e
            function_2508e((int64_t *)v56);
            int64_t v69 = v68; // 0x27009
            while (v68 != v55) {
                // 0x2700b
                v68 = v69 + 8;
                function_2508e((int64_t *)v69);
                v69 = v68;
            }
        }
        // 0x27019
        function_4efe20(v56, &g5);
        v50 = v67;
    }
    // 0x27028
    function_27a2a(&v17);
    function_27a2a(&v12);
    function_27a2a(&v10);
    function_27998(&v10, a4);
    function_27998(&v12, v11);
    function_27998(&v15, v13);
    function_27998(&v17, v16);
    function_27a2a(&v15);
    if (v50 != v2) {
        int64_t v70 = v50 - v2; // 0x2709f
        function_27998(&v15, v18);
        int64_t v71 = v70 >> 3; // 0x270ba
        int64_t v72 = v71 == 0 ? 0 : 2 * llvm_ctlz_i64(v71, true) ^ 126; // 0x270d1
        function_26600(v2, v50, v72, &v15);
        function_27a2a(&v15);
        function_27998(&v19, v18);
        int64_t * v73; // 0x26bbf
        if (v70 < 129) {
            // 0x27178
            function_27998(&v15, v20);
            function_264e5(v2, v50, &v15);
            v73 = &v15;
        } else {
            int64_t v74 = v2 + 128; // 0x270fa
            function_27998(&v15, v20);
            function_264e5(v2, v74, &v15);
            function_27a2a(&v15);
            function_27998(&v21, v20);
            v73 = &v21;
            if (v74 != v50) {
                // 0x2713c
                function_27998(&v23, v22);
                function_27998(&v15, (int64_t)&v23);
                int64_t v75 = v74 + 8; // 0x27158
                function_26452(v74, &v15);
                function_27a2a(&v15);
                function_27a2a(&v23);
                v73 = &v21;
                while (v75 != v50) {
                    int64_t v76 = v75;
                    function_27998(&v23, v22);
                    function_27998(&v15, (int64_t)&v23);
                    v75 = v76 + 8;
                    function_26452(v76, &v15);
                    function_27a2a(&v15);
                    function_27a2a(&v23);
                    v73 = &v21;
                }
            }
        }
        // 0x2718e
        function_27a2a(v73);
        function_27a2a(&v19);
    }
    int64_t v77 = (int64_t)&v1; // 0x26bcc
    function_27a2a(&v17);
    function_27a2a(&v12);
    function_27a2a(&v10);
    int64_t * v78 = (int64_t *)(v77 + 72); // 0x271c1
    int64_t v79 = v2; // 0x271c9
    if (*v78 != v2) {
        // 0x271cb
        function_255da(v2);
        int64_t * v80 = (int64_t *)v2; // 0x271d3
        int64_t v81 = *v80; // 0x271d3
        int64_t v82 = v2 + 8; // 0x271d9
        function_255da(v2);
        int64_t v83 = *(int64_t *)(v1 + 8); // 0x271f8
        *(int64_t *)(v77 - 16) = 0;
        function_2808e(v1, v83, *v80, *(int64_t *)(v81 - 24) + v81);
        *(char *)(v77 + 280) = *(char *)(v77 + 63);
        int64_t v84 = v1; // 0x27216
        function_27fbe(v84, *(int64_t *)(v84 + 8), v16);
        v79 = v82;
        while (*v78 != v82) {
            int64_t v85 = v82;
            function_255da(v85);
            v80 = (int64_t *)v85;
            v81 = *v80;
            v82 = v85 + 8;
            function_255da(v85);
            v83 = *(int64_t *)(v1 + 8);
            *(int64_t *)(v77 - 16) = 0;
            function_2808e(v1, v83, *v80, *(int64_t *)(v81 - 24) + v81);
            *(char *)(v77 + 280) = *(char *)(v77 + 63);
            v84 = v1;
            function_27fbe(v84, *(int64_t *)(v84 + 8), v16);
            v79 = v82;
        }
    }
    int64_t * v86 = (int64_t *)(v77 + 64); // 0x2722b
    int64_t v87 = *v86; // 0x2722b
    int64_t v88 = v79; // 0x27233
    if (v79 != v87) {
        int64_t v89 = v87 + 8; // 0x27238
        function_2508e((int64_t *)v87);
        int64_t v90 = v89; // 0x27233
        while (v79 != v89) {
            // 0x27235
            v89 = v90 + 8;
            function_2508e((int64_t *)v90);
            v90 = v89;
        }
        // 0x27230
        v88 = *v86;
    }
    // 0x27243
    if (v88 != 0) {
        // 0x2724d
        function_4eeb50(v88);
    }
    // 0x27252
    if (*(int64_t *)(v77 + 312) == __readfsqword(40)) {
        // 0x2726f
        return *(int64_t *)(v77 + 32);
    }
    // 0x2726a
    __stack_chk_fail();
    // 0x2726f
    return (int64_t)&g10;
  lab_0x26eda:;
    int64_t v91 = function_260d0(&v23, v47); // 0x26ee0
    v26 = v47;
    if ((char)v91 == 0) {
        goto lab_0x26eec;
    } else {
        // 0x26ee9
        v26 = 0;
        goto lab_0x26eec;
    }
}

// Address range: 0x1193bf - 0x1193eb
int64_t function_1193bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1193bf
    int64_t result; // 0x1193bf
    if (a4 != 1) {
        // 0x1193ec
        return result;
    }
    uint64_t v1 = __asm_sti(); // 0x1193c1
    char * v2 = (char *)(v1 + 0x2499e19c); // 0x1193c4
    *v2 = *v2 - (char)(v1 / 256);
    char v3 = (uint64_t)result / 256; // 0x1193ca
    *(char *)-0x775ded2f = *(char *)-0x775ded2f + v3;
    int64_t result2 = __asm_int1(((a5 & (int64_t)&g3) == 0 ? 4 : -4) + a1); // 0x1193de
    int16_t v4 = a3; // 0x1193e1
    int64_t v5; // 0x1193bf
    int32_t v6 = *(int32_t *)&v5; // 0x1193e1
    __asm_outsd(v4, v6);
    *(char *)-0x5afd4517 = v3;
    __asm_outsb(v4, (char)v6);
    return result2;
}

// Address range: 0x1193f3 - 0x1193fa
int64_t function_1193f3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1193f3
    int64_t v1; // 0x1193f3
    return v1 & -256 | (int64_t)__asm_in_133(94);
}

// Address range: 0x1193fa - 0x11943b
int64_t function_1193fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1193fa
    int64_t v1; // 0x1193fa
    int64_t v2 = v1;
    int64_t v3 = a2;
    int64_t result; // 0x1193fa
    bool v4; // 0x1193fa
    if (v4) {
        // 0x119439
        *(int32_t *)v2 = 2 * (int32_t)v2;
        return result;
    }
    int32_t * v5 = (int32_t *)(v1 + 171); // 0x1193fc
    *v5 = *v5 + (int32_t)a3;
    *(char *)a3 = (char)result;
    int64_t v6 = result;
    *(char *)v6 = *(char *)&result + (char)v6;
    char * v7 = (char *)(v1 + 0x23a8377); // 0x11940c
    *v7 = *v7 - (char)v1;
    __asm_in_133(104);
    int64_t v8 = unknown_1f9db32(); // 0x119417
    *(char *)a1 = *(char *)&v3;
    int64_t v9 = (v4 ? -1 : 1) + a1; // 0x11941c
    int32_t * v10 = (int32_t *)(v8 + 47); // 0x119422
    *v10 = *v10 + (int32_t)v9;
    return function_ffffffffa24172ef(v9);
}

// Address range: 0x11946b - 0x119472
int64_t function_11946b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x11946b
    return function_5f2415f3();
}

// Address range: 0x119518 - 0x11951c
int64_t function_119518(int64_t a1, int64_t a2, int64_t a3) {
    // 0x119518
    int64_t v1; // 0x119518
    return v1 & -256 | (int64_t)__asm_in_134((int16_t)a3);
}

// Address range: 0x119548 - 0x11954d
int64_t function_119548(void) {
    // 0x119548
    return function_686ea7ce();
}

// Address range: 0x11955a - 0x119562
int64_t function_11955a(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 - 0x6bfc637b); // 0x11955a
    *v1 = *v1 + (int32_t)a3;
    int64_t v2; // 0x11955a
    return function_1195a3(a1, a2, a3, v2, v2, (int64_t)&g10);
}

// Address range: 0x119566 - 0x119569
int64_t function_119566(void) {
    // 0x119566
    int64_t result; // 0x119566
    return result;
}

// Address range: 0x119576 - 0x119596
int64_t function_119576(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x119576
    *(char *)-0x6ff8e84ca14b6e6 = (char)a2;
    char * v1 = (char *)(a1 + 0x5000f05d); // 0x11958d
    *v1 = *v1 & (char)(a4 / 256);
    return a2 & 0xffffffff ^ 0x4900;
}

// Address range: 0x1195a3 - 0x11971f
int64_t function_1195a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1195a3
    int64_t result; // 0x1195a3
    bool v1; // 0x1195a3
    if (!v1 && !v1) {
        // 0x1195ab
        return result;
    }
    // 0x119605
    int64_t v2; // 0x1195a3
    int64_t v3 = v2 & -0xff01 | (int64_t)&g1; // 0x119606
    float80_t v4; // 0x1195a3
    *(float64_t *)(v3 + 4 * v2) = (float64_t)v4;
    int32_t * v5 = (int32_t *)v3; // 0x11961c
    int32_t v6 = *v5 & -0x37030693; // 0x11961c
    *v5 = v6;
    int32_t * v7 = v5; // bp-24, 0x11961e
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    if (v6 != 0) {
        // 0x119626
        *(char *)-0x1ef371c9 = *(char *)-0x1ef371c9 + (char)v2;
        return (int64_t)&v7;
    }
    // 0x11966d
    *(int64_t *)(v3 - 8) = a5;
    __asm_iretd(a1, a2, a3, a4);
    char v8 = v2 / 256; // 0x1196b5
    *(char *)-0x2f0d2b44 = *(char *)-0x2f0d2b44 + v8;
    if (a4 == 0) {
        // 0x1196f7
        *(char *)-0xe2bcefd = *(char *)-0xe2bcefd + v8;
        int64_t v9; // bp-21, 0x1195a3
        result = (int64_t)&v9 & 0xfffffff8 ^ 0x41303cec;
    } else {
        // 0x1196bd
        unknown_ffffffffe7deba61();
        *(char *)0x23c239d1 = *(char *)0x23c239d1 + v8;
        result = __asm_int1(a1);
    }
    // 0x1195ab
    return result;
}

// Address range: 0x119747 - 0x119748
int64_t function_119747(void) {
    // 0x119747
    int64_t result; // 0x119747
    return result;
}

// Address range: 0x11976e - 0x119771
int64_t function_11976e(void) {
    // 0x11976e
    int64_t result; // 0x11976e
    return result;
}

// Address range: 0x11979f - 0x1197c1
int64_t function_11979f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11979f
    int64_t v1; // 0x11979f
    *(int32_t *)a1 = (int32_t)v1;
    char * v2 = (char *)(v1 & 0x3abf03bd | 0xc540fc42); // 0x1197a5
    *v2 = *v2 + (char)a4;
    bool v3; // 0x11979f
    int64_t result = unknown_ffffffff93979dba((v3 ? -4 : 4) + a1) & -240; // 0x1197bb
    if (a4 == 0) {
        result = function_119747();
    }
    // 0x1197bd
    return result;
}

// Address range: 0x1197ca - 0x1197d1
int64_t function_1197ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1197ca
    int64_t v1; // 0x1197ca
    return v1 ^ 214;
}

// Address range: 0x1197ff - 0x119892
int64_t function_1197ff(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1197ff
    int64_t v1; // 0x1197ff
    int64_t v2 = v1;
    int64_t v3; // 0x1197ff
    int64_t result2 = v3 & -256 | (uint64_t)v3 % 256;
    int32_t * v4 = (int32_t *)(result2 + 0x1e80f43); // 0x119803
    *v4 = *v4 | 0xcf079b;
    int64_t v5 = v2 - 8; // 0x119815
    *(int64_t *)v5 = -0x4b6e7300;
    while (*(int32_t *)-0x3c9dafea >= 4) {
        char * v6 = (char *)result2; // 0x119848
        *v6 = *v6 + (char)result2;
        uint32_t v7 = (int32_t)result2;
        int32_t v8 = v7 + 0x34b4ffff; // 0x11984a
        int64_t v9; // 0x1197ff
        int64_t v10 = v9 & 0xffffffff; // 0x119854
        v9 = result2 & 0xffff00ff | 256 * (64 * (int64_t)(v8 == 0) | (int64_t)(v7 < 0xcb4b0001) | 128 * (int64_t)(v8 < 0) | 16 * (int64_t)(v7 % 16 > 16) | 4 * (int64_t)(llvm_ctpop_i8((char)v8) % 2 == 0)) & 0xfffffd00 | 512;
        if (v7 <= 0xcb4b0000) {
            int32_t * v11 = (int32_t *)(a1 - 126); // 0x11985d
            *v11 = *v11 + (int32_t)v5;
            int32_t * v12 = (int32_t *)(a1 - 112); // 0x119866
            bool v13; // 0x1197ff
            int32_t v14 = *v12 + (int32_t)((v13 ? 0xffffffff : 1) + a2); // 0x119866
            *v12 = v14;
            int64_t result = unknown_ffffffffedecc772(); // 0x119869
            *(int64_t *)(v2 - 16) = 0x587aea00;
            *(int32_t *)0x13d79c2000768c8 = (int32_t)result;
            if (v14 >= 0) {
                return result;
            }
            uint32_t v15 = v7 % 32; // 0x119883
            if (v15 == 0) {
                return result;
            }
            int32_t * v16 = (int32_t *)result; // 0x119883
            uint32_t v17 = *v16; // 0x119883
            *v16 = v17 >> 32 - v15 | v17 << v15;
            return result;
        }
        v2 = v5;
        result2 = v10;
        v4 = (int32_t *)(result2 + 0x1e80f43);
        *v4 = *v4 | 0xcf079b;
        v5 = v2 - 8;
        *(int64_t *)v5 = -0x4b6e7300;
    }
    char * v18 = (char *)(a1 - 113); // 0x11981c
    *v18 = *v18 ^ (char)a3;
    return result2;
}

// Address range: 0x119893 - 0x1198a9
int64_t function_119893(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x119893
    int64_t v1; // 0x119893
    char v2 = v1 / 256; // 0x119893
    *(char *)0x7912c79a = *(char *)0x7912c79a + v2;
    __asm_out(108, (char)v1);
    bool v3; // 0x119893
    int64_t v4 = v3 ? -4 : 4; // 0x119899
    function_119907(v4 + a1, v4 + a2, a3, v1 & 0xffffffff);
    char * v5 = (char *)(v1 + 14); // 0x11989f
    *v5 = *v5 + v2;
    return unknown_ffffffffa2997eaa();
}

// Address range: 0x1198ba - 0x1198c8
int64_t function_1198ba(int64_t a1, int64_t a2) {
    // 0x1198ba
    bool v1; // 0x1198ba
    int64_t v2 = v1 ? 0xffffffff : 1; // 0x1198ba
    int64_t v3; // 0x1198ba
    *(char *)0x3d6a6f5878280846 = (char)v3;
    *(int32_t *)a2 = (int32_t)(v2 + a1) + (int32_t)v3;
    return 0;
}

// Address range: 0x1198ed - 0x1198f0
int64_t function_1198ed(int64_t a1, int64_t a2) {
    // 0x1198ed
    int64_t result; // 0x1198ed
    return result;
}

// Address range: 0x119907 - 0x11992f
int64_t function_119907(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2; // 0x119907
    v2 = function_1198ba(a1, a2);
    char * v3 = (char *)(v2 + 20); // 0x11990a
    char v4 = v2 / 256; // 0x11990a
    *v3 = *v3 + v4;
    char v5 = *(char *)&v1; // 0x119913
    *(char *)v1 = v5 + v4 + (char)((int32_t)v2 < 0xd0ff0d01);
    int64_t result = unknown_6908a81d(); // 0x119917
    char * v6 = (char *)(2 * a3 + a1); // 0x11991c
    char v7 = *v6 + (char)result; // 0x11991c
    *v6 = v7;
    if (v7 == 0) {
        // 0x119923
        return result;
    }
    // 0x119929
    return result & 0xffffffff ^ 0x4cb45514;
}

// Address range: 0x119a12 - 0x119a1c
int64_t function_119a12(void) {
    // 0x119a12
    return function_ffffffff9cc7a4f8();
}

// Address range: 0x119a2c - 0x119a2d
int64_t function_119a2c(void) {
    // 0x119a2c
    int64_t result; // 0x119a2c
    return result;
}

// Address range: 0x119a7e - 0x119a80
int64_t function_119a7e(int64_t a1) {
    // 0x119a7e
    int64_t result; // 0x119a7e
    return result;
}

// Address range: 0x119a82 - 0x119a93
int64_t function_119a82(void) {
    int64_t v1 = unknown_fffffffff3959888(); // 0x119a82
    int16_t v2 = v1; // 0x119a87
    int64_t v3; // 0x119a82
    int16_t v4 = (int16_t)v3 % 256; // 0x119a87
    return v1 & -0x10000 | (int64_t)(v2 / v4 % 256) | (int64_t)(256 * (v2 % v4));
}

// Address range: 0x119a93 - 0x119abc
int64_t function_119a93(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_int1(a1); // 0x119a94
    bool v2; // 0x119a93
    if (!v2) {
        v1 = function_119a2c();
    }
    char v3 = (char)a3 | 32; // 0x119a9d
    uint64_t v4 = 0x8000 * (int64_t)(v3 < 0) | 1024 * (int64_t)(llvm_ctpop_i8(v3) % 2 == 0) | 512; // 0x119aa2
    char * v5 = (char *)(a4 - 48); // 0x119aa5
    *v5 = *v5 + (char)(v4 / 256);
    uint32_t v6 = (int32_t)a4 % 32; // 0x119aaf
    if (v6 != 0) {
        int64_t v7; // 0x119a93
        int32_t * v8 = (int32_t *)(v7 + 12); // 0x119aaf
        uint32_t v9 = *v8; // 0x119aaf
        uint32_t v10 = *(int32_t *)(a3 & -256 | (int64_t)v3); // 0x119aad
        *v8 = v9 >> v6 | (int32_t)((int64_t)v9 << (int64_t)(33 - v6)) | (int32_t)(v10 > -1 - (int32_t)a1) << 32 - v6;
    }
    int64_t v11 = v1 | (int64_t)&g6; // 0x119aa0
    uint64_t v12 = v11 + 54; // 0x119aa3
    int64_t v13 = a2 - 0x18a93c4a; // 0x119ab2
    __writefsbyte(v13, __readfsbyte(v13) + (char)v12);
    return v11 & -0x10000 | v4 | v12 % 256;
}

// Address range: 0x119af4 - 0x119af6
int64_t function_119af4(void) {
    // 0x119af4
    int64_t result; // 0x119af4
    return result;
}

// Address range: 0x119b26 - 0x119b28
int64_t function_119b26(void) {
    // 0x119b26
    int64_t result; // 0x119b26
    return result;
}

// Address range: 0x119b47 - 0x119b4d
int64_t function_119b47(void) {
    // 0x119b47
    return function_ffffffffe0c5a0eb();
}

// Address range: 0x119b5e - 0x119b63
int64_t function_119b5e(int64_t a1) {
    // 0x119b5e
    int64_t result; // 0x119b5e
    __asm_out_135(4, (int32_t)result);
    return result;
}

// Address range: 0x119b8c - 0x119b8e
int64_t function_119b8c(void) {
    // 0x119b8c
    int64_t result; // 0x119b8c
    return result;
}

// Address range: 0x4511df - 0x451203
int64_t function_4511df(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 + 114); // 0x4511df
    *v1 = *v1 | (char)a3;
    int64_t v2; // 0x4511df
    int32_t * v3 = (int32_t *)(v2 - 61); // 0x4511e4
    *v3 = *v3 / 2;
    int32_t * v4 = (int32_t *)(a1 + 54); // 0x4511e7
    int64_t v5; // bp-8, 0x4511df
    *v4 = *v4 | (int32_t)(int64_t)&v5;
    int64_t v6; // 0x4511df
    unsigned char v7 = *(char *)&v6; // 0x4511ea
    int32_t v8 = *(int32_t *)(a2 - 0x40d171f2); // 0x4511f5
    uint32_t v9 = (int32_t)a4 % 32; // 0x4511fb
    if (v9 != 0) {
        uint32_t v10 = *(int32_t *)-0x453879db; // 0x4511fb
        *(int32_t *)-0x453879db = v10 >> v9 | v10 << 32 - v9;
    }
    return __asm_in((int16_t)(v8 + (int32_t)a3 + (int32_t)(v7 > (char)(v2 / 256))));
}

// Address range: 0x451212 - 0x451218
int64_t function_451212(void) {
    // 0x451212
    int64_t result; // 0x451212
    return result;
}

// Address range: 0x45123c - 0x451241
int64_t function_45123c(void) {
    // 0x45123c
    return function_ffffffffcd9142db();
}

// Address range: 0x4512ac - 0x4512ad
int64_t function_4512ac(void) {
    // 0x4512ac
    int64_t result; // 0x4512ac
    return result;
}

// Address range: 0x4512c1 - 0x4512c6
int64_t function_4512c1(void) {
    // 0x4512c1
    return function_50ca531e();
}

// Address range: 0x4512ca - 0x4512cd
int64_t function_4512ca(int64_t a1) {
    // 0x4512ca
    int64_t result; // 0x4512ca
    return result;
}

// Address range: 0x4512ce - 0x45133d
int64_t function_4512ce(int64_t a1) {
    // 0x4512ce
    return __asm_sti();
}

// Address range: 0x45136c - 0x451373
int64_t function_45136c(int64_t a1) {
    // 0x45136c
    int64_t result; // 0x45136c
    return result;
}

// Address range: 0x4513cb - 0x4513df
int64_t function_4513cb(int64_t a1) {
    // 0x4513cb
    int64_t v1; // 0x4513cb
    return function_7bbfe1ea(0x405bce4a * v1 & 0xfffffffe);
}

// Address range: 0x4513ec - 0x4513f1
int64_t function_4513ec(void) {
    // 0x4513ec
    int64_t result; // 0x4513ec
    return result;
}

// Address range: 0x451411 - 0x451416
int64_t function_451411(void) {
    // 0x451411
    return function_ffffffff91943733();
}

// Address range: 0x451545 - 0x45154b
int64_t function_451545(int64_t a1, int64_t a2, int64_t a3) {
    // 0x451545
    return function_1913562();
}

// Address range: 0x451588 - 0x451589
int64_t function_451588(void) {
    // 0x451588
    int64_t result; // 0x451588
    return result;
}

// Address range: 0x4515a3 - 0x451629
int64_t function_4515a3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t result; // 0x4515a3
    *(char *)(a1 & 0xffffffff & result) = __asm_insb((int16_t)a3);
    char v2 = a3 / 256; // 0x4515a7
    char v3 = result / 256; // 0x4515a7
    unsigned char v4 = v3 + v2; // 0x4515a7
    if (((v4 ^ v2) & (v4 ^ v3)) < 0) {
        // 0x451614
        float80_t v5; // 0x4515a3
        *(float64_t *)(result - 0x7cc08dae) = (float64_t)v5;
        return result;
    }
    int64_t v6 = 256 * (int64_t)v4 | a3 & -0xff01; // 0x4515a7
    int32_t * v7 = (int32_t *)(result + 0x2b552ba9 + v6); // 0x4515ab
    *v7 = *v7 & (int32_t)a5;
    v1 = a5;
    int64_t v8 = unknown_58769dd0(); // 0x4515b6
    *(int16_t *)(a2 - 18 + (int64_t)&v1) = (int16_t)result;
    int32_t v9 = v8; // 0x4515c1
    int32_t v10 = result % 2 == 0 ? -0x6bffae2 : -0x6bffae1; // 0x4515c1
    uint32_t result2 = v9 - v10; // 0x4515c1
    if (v10 < v9) {
        // 0x4515c8
        return result2;
    }
    char * v11 = (char *)v6; // 0x4515da
    *v11 = (char)result2 + 89;
    return (int64_t)*v11 | (int64_t)(result2 - 0x69c095a7 & -256);
}

// Address range: 0x451652 - 0x451655
int64_t function_451652(int64_t a1) {
    // 0x451652
    int64_t result; // 0x451652
    return result;
}

// Address range: 0x451661 - 0x45166d
int64_t function_451661(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x451661
    return __asm_int3(a1, a2, a3, a4, a5, a6, a7);
}

// Address range: 0x45166d - 0x451688
int64_t function_45166d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x45166d
    int64_t v1; // 0x45166d
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)((v1 & 0xffffffff) - 49); // 0x45166e
    uint32_t v4 = *v3; // 0x45166e
    uint32_t v5 = v4 + (int32_t)a1; // 0x45166e
    *v3 = v5;
    char * v6 = (char *)(a4 - 100); // 0x451672
    unsigned char v7 = *v6; // 0x451672
    unsigned char v8 = v7 + (char)a4; // 0x451672
    unsigned char v9 = v8 + (char)(v5 < v4); // 0x451672
    *v6 = v9;
    __asm_out_135(92, (int32_t)v2);
    int64_t v10 = v5 < v4 ? v9 <= v7 : v8 < v7 ? 83 : 82; // 0x45167c
    int64_t v11; // 0x45166d
    unsigned char v12 = *(char *)&v11; // 0x45167e
    int32_t * v13 = (int32_t *)(a4 - 46); // 0x451682
    int32_t v14 = *v13; // 0x451682
    int64_t v15; // 0x45166d
    *v13 = v14 - ((int32_t)(v12 > (char)(a3 / 256)) | (int32_t)(int64_t)&v15);
    return (v2 - v10) % 256 | 0x100000000 * v2 >> 32 & -256;
}

// Address range: 0x45169a - 0x4516a1
int64_t function_45169a(void) {
    // 0x45169a
    return function_3fa60904();
}

// Address range: 0x4516a1 - 0x4516e3
int64_t function_4516a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6, int64_t a7) {
    // 0x4516a1
    int64_t v1; // 0x4516a1
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x4516a1
    int64_t v3 = v2 ? -4 : 4; // 0x4516a2
    int64_t v4 = v3 + a1; // 0x4516a2
    uint64_t v5 = a5 / 256; // 0x4516a3
    int64_t v6 = v5 % 256 ^ a4; // 0x4516a3
    char v7 = v5; // 0x4516a5
    int64_t v8; // 0x4516a1
    *(char *)v8 = *(char *)&v8 & v7;
    char * v9 = (char *)(v6 + 3 + 4 * v1); // 0x4516a7
    *v9 = *v9 - v7;
    unsigned char v10 = (char)(v8 / 256); // 0x4516b4
    int64_t v11 = __asm_iretd(v4, v3 + a2, a5, v6) + 0x1b2d500b + (int64_t)(-1 - v10 < v10); // 0x4516b6
    int32_t * v12 = (int32_t *)(v4 + 11); // 0x4516c2
    *v12 = -1 - *v12;
    *(char *)v4 = (char)v11;
    return v11 & 0xffffffff;
}

// Address range: 0x4516e8 - 0x4516e9
int64_t function_4516e8(void) {
    // 0x4516e8
    int64_t result; // 0x4516e8
    return result;
}

// Address range: 0x4516ed - 0x4516f3
int64_t function_4516ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = __asm_in((int16_t)a3); // 0x4516ef
    bool v1; // 0x4516ed
    if (!v1) {
        result = function_4516e8();
    }
    // 0x4516f2
    return result;
}

// Address range: 0x451737 - 0x451738
int64_t function_451737(void) {
    // 0x451737
    int64_t result; // 0x451737
    return result;
}

// Address range: 0x451739 - 0x45173a
int64_t function_451739(void) {
    // 0x451739
    int64_t result; // 0x451739
    return result;
}

// Address range: 0x451791 - 0x4517b5
int64_t function_451791(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x451791
    int64_t v1; // 0x451791
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)(v2 ^ a2);
    *(int32_t *)0x6142c2ee9b73734b = (int32_t)v1;
    unsigned char v3 = (char)a4 % 32; // 0x4517a1
    bool v4 = false; // 0x4517a1
    int64_t v5; // 0x451791
    if (v3 != 0) {
        unsigned char v6 = (char)(v1 / 256); // 0x4517a1
        v5 = v1 & -0xff01;
        v4 = (v6 >> v3 | v6 << 8 - v3) < 0;
    }
    int64_t v7 = v5; // 0x4517a3
    if ((v1 & 104) != 0 && !v4) {
        v7 = function_451737();
    }
    // 0x4517a5
    int64_t v8; // 0x451791
    *(char *)v8 = *(char *)&v8 ^ (char)v7;
    int32_t * v9 = (int32_t *)(v1 + 0x5b1c3e53 + 2 * (256 * v7 & 0xff00 | a3 & 0x7fffffffffff00ff)); // 0x4517a9
    *v9 = *v9 + (int32_t)a4;
    int64_t result = a2 & 0xffffffff; // 0x4517b0
    *(int32_t *)result = (int32_t)a2;
    return result;
}

// Address range: 0x4517db - 0x4517fd
int64_t function_4517db(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4517db
    int64_t v1; // 0x4517db
    int32_t * v2 = (int32_t *)(v1 - 110); // 0x4517e1
    int32_t v3 = a4; // 0x4517e1
    bool v4; // 0x4517db
    *v2 = (int32_t)v4 - v3 + *v2;
    int64_t v5; // 0x4517db
    *(int32_t *)a1 = *(int32_t *)&v5;
    int64_t v6 = (v4 ? -4 : 4) + a2; // 0x4517ec
    *(char *)-0x49aa9acb = *(char *)-0x49aa9acb | (char)a3;
    int32_t * v7 = (int32_t *)(v6 - 0xedcf87c); // 0x4517f3
    *v7 = *v7 | v3;
    return v6 & 0xffffffff;
}

// Address range: 0x451801 - 0x45180d
int64_t function_451801(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x451801
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x451801
    return result;
}

// Address range: 0x45184d - 0x45189b
int64_t function_45184d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x45184d
    int64_t v1; // 0x45184d
    if ((v1 & 0xffffffff) == 1) {
        // 0x451850
        return a4 & 0xffffffff;
    }
    // 0x451898
    return __asm_wait();
}

// Address range: 0x4518bc - 0x4518c2
int64_t function_4518bc(void) {
    // 0x4518bc
    int32_t v1; // 0x4518bc
    int64_t result; // 0x4518bc
    *(int32_t *)(result + 61) = (int32_t)(int64_t)&v1;
    return result;
}

// Address range: 0x4518f9 - 0x451900
int64_t function_4518f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4518f9
    int64_t v1; // 0x4518f9
    int64_t result = v1;
    __asm_outsb((int16_t)a3, (char)v1);
    bool v2; // 0x4518f9
    *(char *)result = (char)result - (v2 ? -8 : -9);
    return result;
}

// Address range: 0x451950 - 0x451951
int64_t function_451950(int64_t a1) {
    // 0x451950
    int64_t result; // 0x451950
    return result;
}

// Address range: 0x451955 - 0x451958
int64_t function_451955(void) {
    // 0x451955
    int64_t result; // 0x451955
    return result;
}

// Address range: 0x451968 - 0x45197f
int64_t function_451968(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x451968
    return a4 & 0x882bb000 | (a3 / 256 ^ a4) + 24 & 51 | 0x77d44fcc;
}

// Address range: 0x45199c - 0x4519a3
int64_t function_45199c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45199c
    *(char *)a1 = __asm_insb((int16_t)a3);
    char * v1 = (char *)(2 * a3); // 0x45199d
    int64_t result; // 0x45199c
    *v1 = *v1 ^ (char)result;
    return result;
}

// Address range: 0x5124d4 - 0x5124ec
int64_t function_5124d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5124d4
    function_508620(a1, a2);
    return function_511e50();
}

// Address range: 0x5124ec - 0x51250e
int64_t function_5124ec(int64_t a1) {
    // 0x5124ec
    if (*(int64_t *)(a1 - 24) != 0) {
        function_511e18();
    }
    // 0x512509
    return function_511e37();
}

// Address range: 0x51250e - 0x512524
int64_t function_51250e(int64_t a1) {
    // 0x51250e
    int64_t v1; // 0x51250e
    function_50f7d0(a1, v1, v1);
    return function_51224d();
}

// Address range: 0x512524 - 0x51254a
int64_t function_512524(int64_t a1) {
    // 0x512524
    int64_t v1; // 0x512524
    int64_t v2 = v1 - 24;
    int64_t v3 = v2; // 0x51252d
    int64_t v4; // 0x512524
    if (v2 == a1) {
        int64_t v5 = function_512483(); // 0x51252d
        v3 = v5 - 24;
        v4 = v5;
    }
    // 0x512533
    *(int32_t *)(v4 - 8) = 0;
    *(int64_t *)v3 = 0;
    *(char *)v4 = 0;
    return function_512483();
}

// Address range: 0x51254a - 0x512559
int64_t function_51254a(void) {
    // 0x51254a
    int64_t v1; // bp+127, 0x51254a
    int64_t v2; // 0x51254a
    function_508620(v2, (int64_t)&v1);
    return function_512473();
}

// Address range: 0x512559 - 0x512ca0
int64_t function_512559(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    // 0x512559
    __stack_chk_fail();
    int64_t v1; // 0x512559
    int64_t v2 = v1 - 24; // 0x512569
    int64_t v3 = a2; // 0x512572
    int64_t v4; // bp+127, 0x512559
    if (v2 != v1) {
        // 0x512574
        v3 = (int64_t)&v4;
        function_508620(v2, v3);
    }
    // 0x51257e
    _Unwind_Resume((struct _Unwind_Exception *)&g10);
    int64_t v5; // bp-216, 0x512559
    int64_t v6 = (int64_t)&v5; // 0x5125a0
    __readfsqword(40);
    v5 = a7;
    int64_t v7 = function_50ab00(a6 + 208, v3, a3, a4); // 0x51260b
    *(int32_t *)a7 = 0;
    int64_t v8; // 0x512559
    int64_t v9; // 0x512559
    int64_t v10; // 0x512559
    int64_t v11; // 0x512559
    int64_t v12; // 0x512559
    int64_t v13; // 0x512559
    int64_t v14; // 0x512559
    int64_t v15; // 0x512559
    int64_t v16; // 0x512559
    int64_t v17; // 0x512559
    int64_t v18; // 0x512559
    int64_t v19; // 0x512559
    int64_t v20; // 0x512559
    int64_t v21; // 0x512648
    int32_t * v22; // 0x512648
    int64_t * v23; // 0x512559
    int64_t * v24; // 0x512559
    char * v25; // 0x512559
    int64_t * v26; // 0x512559
    char * v27; // 0x512559
    int64_t * v28; // 0x512559
    int64_t * v29; // 0x512559
    int32_t * v30; // 0x512559
    int64_t * v31; // 0x512559
    int32_t * v32; // 0x512559
    int64_t * v33; // 0x512559
    int32_t * v34; // 0x512559
    int64_t * v35; // 0x512559
    int64_t * v36; // 0x512559
    int32_t * v37; // 0x512559
    int32_t * v38; // 0x512559
    int32_t * v39; // 0x512559
    if (a9 != a10) {
        // 0x51261c
        v21 = v6 + 120;
        v22 = (int32_t *)v21;
        v23 = (int64_t *)(v6 + 112);
        v24 = (int64_t *)v7;
        int64_t v40 = v6 + 8;
        v25 = (char *)v40;
        v26 = (int64_t *)(v6 + 48);
        int64_t v41 = v6 + 28;
        v27 = (char *)v41;
        v28 = (int64_t *)v40;
        v29 = (int64_t *)(v6 + 64);
        v30 = (int32_t *)(v6 + 104);
        v31 = (int64_t *)(v6 + 56);
        v32 = (int32_t *)(v6 + 108);
        v33 = (int64_t *)(v6 + 32);
        v34 = (int32_t *)v41;
        v35 = (int64_t *)(v6 + 16);
        v36 = (int64_t *)(v6 + 40);
        v37 = (int32_t *)(v6 + 128);
        v38 = (int32_t *)(v6 + 136);
        v39 = (int32_t *)(v6 + 132);
        v17 = a4;
        v14 = a9;
        v20 = (int64_t)&v4;
        v8 = a5 & 0xffffffff;
        v11 = a4;
        while (true) {
          lab_0x512648:
            // 0x512648
            v12 = v11;
            v9 = v8;
            v15 = v14;
            v18 = v17;
            if (*v22 == -1) {
                int64_t v42 = v20;
                uint64_t v43 = *(int64_t *)(v42 + 16); // 0x512a60
                int64_t v44; // 0x512559
                if (v43 >= *(int64_t *)(v42 + 24)) {
                    // 0x512c40
                    v44 = *(int64_t *)v42;
                } else {
                    // 0x512a6e
                    v44 = (int64_t)*(int32_t *)v43;
                }
                int32_t v45 = v44; // 0x512a70
                if (v45 == -1) {
                    // 0x512c20
                    *v23 = 0;
                    v19 = v18;
                    v16 = v15;
                    v10 = v9;
                    v13 = v12;
                    goto lab_0x51279a;
                } else {
                    // 0x512a79
                    *v22 = v45;
                    goto lab_0x512653;
                }
            } else {
                goto lab_0x512653;
            }
        }
      lab_0x51265e_3:
        // 0x51265e
        *(int32_t *)v5 = 6;
    }
    goto lab_0x512668_2;
  lab_0x512668_2:
    // 0x512668
    if (*(int64_t *)(v6 + 152) != __readfsqword(40)) {
        // 0x512c90
        __stack_chk_fail();
        return (int64_t)&g10;
    }
    // 0x512689
    return *(int64_t *)(v6 + 112);
  lab_0x5128f8:;
    // 0x5128f8
    int64_t v46; // 0x512559
    int64_t v47 = v46;
    int64_t v48; // 0x512559
    int64_t v49 = v48;
    int64_t v50; // 0x512559
    int64_t v51 = v50; // 0x5128fb
    int64_t v52; // 0x5127d4
    int64_t v53 = v52; // 0x5128fb
    int64_t v54 = v49; // 0x5128fb
    int64_t v55 = 0; // 0x5128fb
    if (v47 == 0) {
        // break -> 0x512775
        goto lab_0x512775_5;
    }
    int64_t v56 = v49; // 0x512905
    int64_t v57 = v47; // 0x512905
    int64_t v58; // 0x512559
    int64_t v59; // 0x512559
    if ((int32_t)v49 != -1) {
        goto lab_0x51282a;
    } else {
        // 0x51290b
        v58 = v47;
        v59 = (int64_t)*v25;
        goto lab_0x512801;
    }
  lab_0x51282a:;
    int64_t v60 = v57;
    int64_t v61 = v56;
    int64_t v62 = *v23; // 0x51282a
    int64_t v63 = v61; // 0x512834
    int64_t v64 = v60; // 0x512834
    if (v62 != 0) {
        // 0x512836
        v63 = v61;
        v64 = v60;
        if (*v22 == -1) {
            uint64_t v65 = *(int64_t *)(v62 + 16); // 0x5128c0
            int64_t v66; // 0x512559
            if (v65 >= *(int64_t *)(v62 + 24)) {
                // 0x512c30
                v66 = *(int64_t *)v62 & 0xffffffff;
            } else {
                // 0x5128ce
                v66 = (int64_t)*(int32_t *)v65;
            }
            int64_t v67 = v66;
            if (v67 == 0xffffffff) {
                // 0x512b80
                *v23 = 0;
                v63 = v61;
                v64 = v60;
            } else {
                // 0x5128d9
                *v22 = (int32_t)v67;
                v63 = v61;
                v64 = v60;
            }
        }
    }
    goto lab_0x512843;
  lab_0x512843:;
    int64_t v68 = v64;
    int64_t v69 = v63;
    v51 = v50;
    v53 = v52;
    v54 = v69;
    v55 = v68;
    if ((char)*v24 == 0) {
        // break -> 0x512775
        goto lab_0x512775_5;
    }
    int64_t v70 = *v23; // 0x512859
    v48 = v69;
    v46 = v68;
    int64_t v71; // 0x512559
    int64_t v72; // 0x512559
    int64_t v73; // 0x512559
    if (v70 == 0) {
        goto lab_0x5128f8;
    } else {
        int64_t * v74 = (int64_t *)(v70 + 16); // 0x512867
        uint64_t v75 = *v74; // 0x512867
        if (v75 < *(int64_t *)(v70 + 24)) {
            // 0x512875
            *v74 = v75 + 4;
        }
        // 0x51287d
        *v22 = -1;
        v73 = v70;
        v71 = v69;
        v72 = v68;
        goto lab_0x512881;
    }
  lab_0x512801:;
    int64_t v76 = v59;
    int64_t v77 = v58;
    uint64_t v78 = *(int64_t *)(v77 + 16); // 0x512801
    char v79; // 0x512559
    int64_t v80; // 0x512559
    if (v78 >= *(int64_t *)(v77 + 24)) {
        char v81 = v76;
        *v27 = v81;
        v79 = v81;
        v80 = *(int64_t *)v77 & 0xffffffff;
    } else {
        // 0x51280f
        v79 = v76;
        v80 = (int64_t)*(int32_t *)v78;
    }
    int64_t v82 = v80 == 0xffffffff ? 0 : v77; // 0x51281b
    v51 = v50;
    v53 = v52;
    v54 = v80;
    v55 = v82;
    v56 = v80;
    v57 = v82;
    if (v79 == (char)(v80 == 0xffffffff)) {
        // break -> 0x512775
        goto lab_0x512775_5;
    }
    goto lab_0x51282a;
  lab_0x5127f5:
    // 0x5127f5
    v51 = v50;
    v53 = v52;
    int64_t v83; // 0x512559
    v54 = v83;
    int64_t v84; // 0x512559
    v55 = v84;
    v58 = v84;
    v59 = 0;
    if ((int32_t)v83 != -1) {
        // break -> 0x512775
        goto lab_0x512775_5;
    }
    goto lab_0x512801;
  lab_0x512653:;
    int64_t v85 = v18; // 0x512656
    int64_t v86 = v15; // 0x512656
    int64_t v87 = v9; // 0x512656
    int64_t v88 = 0; // 0x512656
    int64_t v89; // 0x512559
    char v90; // 0x512559
    int64_t v91; // 0x512559
    int64_t v92; // 0x512559
    if (v12 == 0) {
        goto lab_0x5126c8;
    } else {
        // 0x512658
        v92 = v18;
        v91 = v15;
        v90 = 0;
        v89 = v12;
        if ((int32_t)v9 != -1) {
            // break -> 0x51265e
            goto lab_0x51265e_3;
        }
        goto lab_0x5126a2;
    }
  lab_0x5126c8:;
    int64_t v93 = v88;
    int64_t v94 = v87;
    int64_t v95 = v86;
    v50 = v85;
    char v96 = (char)*v24; // 0x5126d5
    int64_t v97; // 0x512559
    int64_t v98; // 0x5129d0
    int64_t v99; // 0x512a11
    if (v96 == 37) {
        int64_t v100 = v95 + 4; // 0x512918
        *v28 = v100;
        if (v100 == a10) {
            // 0x512c68
            *(int32_t *)v5 = 4;
            goto lab_0x512668_2;
        }
        int64_t v101 = *v24; // 0x51292a
        int64_t v102; // 0x512559
        switch ((char)v101) {
            case 79: {
            }
            case 69: {
                int64_t v103 = v95 + 8; // 0x512a88
                *v28 = v103;
                if (v103 == a10) {
                    // 0x512c68
                    *(int32_t *)v5 = 4;
                    goto lab_0x512668_2;
                }
                int64_t v104 = 0x100000000000000 * *v24 >> 56; // 0x512aa8
                int64_t v105 = v94 & 0xffffffff; // 0x512ab5
                int64_t v106 = 0x100000000000000 * v101 >> 56; // 0x512ab8
                *v30 = (int32_t)v104;
                *v31 = v105;
                *v32 = (int32_t)v106;
                *v33 = *v23;
                *v34 = *v22;
                uint64_t v107 = *v35; // 0x512ae5
                int64_t v108 = (v107 < 0xffffffff00000001 ? v107 : v107 + 0xffffffff) | v105; // 0x512aea
                *v35 = v108;
                *v36 = v108;
                int64_t v109 = function_50ab00(*v29, (int64_t)*(int32_t *)v103, v104, v106); // 0x512af7
                *(int32_t *)v5 = 0;
                *v37 = (int32_t)v109;
                *v38 = *v30;
                *(int32_t *)(v6 + 140) = 0;
                *v39 = *v32;
                v102 = *v31;
                // break -> 0x5129d0
                break;
            }
            default: {
                int64_t v110 = 0x100000000000000 * v101 >> 56; // 0x51294a
                int64_t v111 = v94 & 0xffffffff; // 0x512957
                *v30 = (int32_t)v110;
                *v31 = v111;
                *v33 = *v23;
                *v34 = *v22;
                uint64_t v112 = *v35; // 0x51297f
                int64_t v113 = (v112 < 0xffffffff00000001 ? v112 : v112 + 0xffffffff) | v111; // 0x512984
                *v35 = v113;
                *v36 = v113;
                int64_t v114 = function_50ab00(*v29, (int64_t)*(int32_t *)v100, v110, v50); // 0x512991
                *(int32_t *)v5 = 0;
                *v37 = (int32_t)v114;
                *v39 = *v30;
                *v38 = 0;
                v102 = *v31;
                // break -> 0x5129d0
                break;
            }
        }
        uint64_t v115 = *(int64_t *)v21;
        uint32_t v116 = *v34; // 0x5129d0
        v98 = v116;
        uint64_t v117 = *v36; // 0x5129d4
        *(int64_t *)(v6 - 16) = *(int64_t *)(v6 + 96);
        *(int64_t *)(v6 - 24) = *(int64_t *)(v6 + 88);
        *(int64_t *)(v6 - 32) = v5;
        int64_t v118 = *(int64_t *)(v6 + 80); // 0x5129f3
        int64_t v119 = v115 < 0xffffffff00000001 ? v115 : v115 + 0xffffffff; // 0x5129f8
        int64_t v120 = *(int64_t *)(v6 + 72); // 0x512a00
        int64_t v121 = v117 < 0xffffffff00000001 ? v117 : v117 + 0xffffffff; // 0x512a05
        v99 = function_510590(v120, *v33, v119 | v98, v93, v121 | v102, v118);
        if (v99 == 0) {
            goto lab_0x512bb8;
        } else {
            // 0x512a28
            v97 = v98;
            if (v116 == -1) {
                uint64_t v122 = *(int64_t *)(v99 + 16); // 0x512b50
                int64_t v123; // 0x512559
                if (v122 >= *(int64_t *)(v99 + 24)) {
                    // 0x512c82
                    v123 = *(int64_t *)v99;
                } else {
                    // 0x512b5e
                    v123 = (int64_t)*(int32_t *)v122;
                }
                int64_t v124 = v123;
                if ((int32_t)v124 == -1) {
                    goto lab_0x512bb8;
                } else {
                    // 0x512b65
                    v97 = v124 & 0xffffffff;
                    goto lab_0x512a31;
                }
            } else {
                goto lab_0x512a31;
            }
        }
    } else {
        int32_t * v125 = (int32_t *)v95; // 0x5126e0
        uint32_t v126 = *v125; // 0x5126e0
        *v25 = v96;
        int64_t v127 = v95; // 0x5126f3
        if (v96 != 0) {
            v52 = v127 + 4;
            while (v52 != a10) {
                // 0x5127c0
                v127 = v52;
                if ((char)*v24 == 0) {
                    // break -> 0x5127dd
                    break;
                }
                v52 = v127 + 4;
            }
            // 0x5127dd
            v73 = *v23;
            v71 = v94;
            v72 = v93;
            while (true) {
              lab_0x512881:
                // 0x512881
                v84 = v72;
                v83 = v71;
                int64_t v128 = v73;
                v48 = v83;
                v46 = v84;
                if (v128 == 0) {
                    goto lab_0x5128f8;
                } else {
                    // 0x512886
                    if (*v22 != -1) {
                        // 0x5127f0
                        v63 = v83;
                        v64 = 0;
                        if (v84 == 0) {
                            goto lab_0x512843;
                        } else {
                            goto lab_0x5127f5;
                        }
                    } else {
                        uint64_t v129 = *(int64_t *)(v128 + 16); // 0x512893
                        int64_t v130; // 0x512559
                        if (v129 >= *(int64_t *)(v128 + 24)) {
                            // 0x512c10
                            v130 = *(int64_t *)v128;
                        } else {
                            // 0x5128a1
                            v130 = (int64_t)*(int32_t *)v129;
                        }
                        int32_t v131 = v130; // 0x5128a3
                        if (v131 == -1) {
                            // 0x5128e8
                            *v23 = 0;
                            v48 = v83;
                            v46 = v84;
                            goto lab_0x5128f8;
                        } else {
                            // 0x5128a8
                            *v22 = v131;
                            v56 = v83;
                            v57 = v84;
                            if (v84 != 0) {
                                goto lab_0x5127f5;
                            } else {
                                goto lab_0x51282a;
                            }
                        }
                    }
                }
            }
        } else {
            int64_t v132 = function_50f7d0(*v26, (int64_t)&g2, (int64_t)v126); // 0x5126fe
            int64_t v133 = *v24; // 0x512710
            if ((int32_t)v133 != (int32_t)v132) {
                int64_t v134 = function_50f7d0(*v26, (int64_t)*v125, v133); // 0x512724
                if ((int32_t)*v24 != (int32_t)v134) {
                    // 0x512c68
                    *(int32_t *)v5 = 4;
                    goto lab_0x512668_2;
                }
            }
            int64_t v135 = *v23; // 0x512749
            if (v135 != 0) {
                int64_t * v136 = (int64_t *)(v135 + 16); // 0x512753
                uint64_t v137 = *v136; // 0x512753
                if (v137 < *(int64_t *)(v135 + 24)) {
                    // 0x512761
                    *v136 = v137 + 4;
                }
                // 0x512769
                *v22 = -1;
            }
            // 0x512771
            v51 = v50;
            v53 = v95 + 4;
            v54 = v94;
            v55 = v93;
        }
        goto lab_0x512775_5;
    }
  lab_0x51279a:
    // 0x51279a
    if (v13 == 0) {
        // break -> 0x51265e
        goto lab_0x51265e_3;
    }
    // 0x5127a3
    v92 = v19;
    v91 = v16;
    v90 = 1;
    v89 = v13;
    v85 = v19;
    v86 = v16;
    v87 = v10;
    v88 = v13;
    if ((int32_t)v10 != -1) {
        goto lab_0x5126c8;
    } else {
        goto lab_0x5126a2;
    }
  lab_0x5126a2:;
    int64_t v138 = v89;
    uint64_t v139 = *(int64_t *)(v138 + 16); // 0x5126a2
    int64_t v140; // 0x512559
    if (v139 >= *(int64_t *)(v138 + 24)) {
        // 0x512c50
        v140 = *(int64_t *)v138 & 0xffffffff;
    } else {
        // 0x5126b0
        v140 = (int64_t)*(int32_t *)v139;
    }
    // 0x5126b3
    v85 = v92;
    v86 = v91;
    v87 = v140;
    v88 = v140 == 0xffffffff ? 0 : v138;
    if (v90 == (char)(v140 == 0xffffffff)) {
        // break -> 0x51265e
        goto lab_0x51265e_3;
    }
    goto lab_0x5126c8;
  lab_0x512bb8:;
    int64_t v141 = 0; // 0x512bbd
    int64_t v142 = v98; // 0x512bbd
    int64_t v143; // 0x512559
    int64_t v144; // 0x512559
    int64_t v145; // 0x512559
    int64_t v146; // 0x512559
    int64_t v147; // 0x512559
    int64_t v148; // 0x512559
    int64_t v149; // 0x512559
    char v150; // 0x512559
    char v151; // 0x512559
    if (v93 == 0) {
        goto lab_0x512a40;
    } else {
        // 0x512bc3
        v149 = 0;
        v144 = v98;
        if ((int32_t)v94 != -1) {
            goto lab_0x512a47;
        } else {
            uint64_t v152 = *(int64_t *)(v93 + 16); // 0x512bd2
            v143 = v152;
            v150 = 1;
            v147 = 0;
            v145 = v98;
            v151 = 1;
            v148 = 0;
            v146 = v98;
            if (v152 < *(int64_t *)(v93 + 24)) {
                goto lab_0x512b9c;
            } else {
                goto lab_0x512bdc;
            }
        }
    }
  lab_0x512775_5:
    // 0x512775
    if (v53 == a10) {
        goto lab_0x512668_2;
    }
    // 0x51277e
    if (*(int32_t *)v5 != 0) {
        goto lab_0x512668_2;
    }
    int64_t v153 = *v23; // 0x51278c
    v17 = v51;
    v14 = v53;
    v20 = v153;
    v8 = v54;
    v11 = v55;
    v19 = v51;
    v16 = v53;
    v10 = v54;
    v13 = v55;
    if (v153 != 0) {
        goto lab_0x512648;
    } else {
        goto lab_0x51279a;
    }
  lab_0x512a40:;
    int32_t * v154 = (int32_t *)v5; // 0x512a44
    *v154 = *v154 | 2;
    v149 = v141;
    v144 = v142;
    goto lab_0x512a47;
  lab_0x512a31:;
    int64_t v159 = v97;
    v149 = v99;
    v144 = v159;
    if (v93 == 0) {
        goto lab_0x512a47;
    } else {
        // 0x512a36
        v141 = v99;
        v142 = v159;
        if ((int32_t)v94 == -1) {
            uint64_t v160 = *(int64_t *)(v93 + 16); // 0x512b92
            v143 = v160;
            v150 = 0;
            v147 = v99;
            v145 = v159;
            v151 = 0;
            v148 = v99;
            v146 = v159;
            if (v160 >= *(int64_t *)(v93 + 24)) {
                goto lab_0x512bdc;
            } else {
                goto lab_0x512b9c;
            }
        } else {
            goto lab_0x512a40;
        }
    }
  lab_0x512a47:
    // 0x512a47
    *v23 = v149;
    *v22 = (int32_t)v144;
    v51 = v93;
    v53 = *v28 + 4;
    v54 = v94;
    v55 = v93;
    goto lab_0x512775_5;
  lab_0x512b9c:;
    int64_t v155 = (int64_t)*(int32_t *)v143; // 0x512b9c
    char v156 = v150; // 0x512b9c
    int64_t v157 = v147; // 0x512b9c
    int64_t v158 = v145; // 0x512b9c
    goto lab_0x512b9e;
  lab_0x512bdc:
    // 0x512bdc
    *v27 = v151;
    v155 = *(int64_t *)v93;
    v156 = v151;
    v157 = v148;
    v158 = v146;
    goto lab_0x512b9e;
  lab_0x512b9e:
    // 0x512b9e
    v141 = v157;
    v142 = v158;
    v149 = v157;
    v144 = v158;
    if (v156 != (char)((int32_t)v155 == -1)) {
        goto lab_0x512a47;
    } else {
        goto lab_0x512a40;
    }
}
