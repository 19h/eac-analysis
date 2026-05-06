/*
 * Targeted RetDec C for native executable gap queue batch 1594.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4571e3-0x4573e3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4573e3-0x4575e3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4577e3-0x4579e3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4579e3-0x457abc rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b44c3-0x4b46c3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b48c3-0x4b4ac3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b4cc3-0x4b4d90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f944e-0x4f964e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f964e-0x4f984e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f984e-0x4f9a4e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f9a4e-0x4f9b30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x55cb8f-0x55cd8f rank=- name=- kind=- bytes=- uncovered=-
 *   0x55cd8f-0x55cf8f rank=- name=- kind=- bytes=- uncovered=-
 *   0x55cf8f-0x55d18f rank=- name=- kind=- bytes=- uncovered=-
 *   0x55d18f-0x55d38f rank=- name=- kind=- bytes=- uncovered=-
 *   0x55d38f-0x55d470 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g8;
extern int g10;
extern int g11;
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
int64_t function_20a50();
int64_t function_299c5cdd();
int64_t function_4571e3(void);
int64_t function_4571e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45724d(void);
int64_t function_45728d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_457308(void);
int64_t function_457338(void);
int64_t function_4573d4(void);
int64_t function_4573f9(int64_t a1);
int64_t function_457418(void);
int64_t function_457460(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_457525(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45753a(void);
int64_t function_457540(int64_t a1);
int64_t function_457592(void);
int64_t function_457594(void);
int64_t function_4575be(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4577e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_457887(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4578b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4578c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45792a(void);
int64_t function_45794a(void);
int64_t function_45795c(void);
int64_t function_45796e(void);
int64_t function_457974(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_457a4b(int64_t a1);
int64_t function_457a6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4b0890();
int64_t function_4b0d80();
int64_t function_4b1590();
int64_t function_4b1680();
int64_t function_4b1a40();
int64_t function_4b1ca0();
int64_t function_4b36d0();
int64_t function_4b3cf0();
int64_t function_4b43cb();
int64_t function_4b4412();
int64_t function_4b44c3(void);
int64_t function_4b4502(void);
int64_t function_4b450c(void);
int64_t function_4b4515(int64_t a1);
int64_t function_4b451f(void);
int64_t function_4b4522(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_4b453a(void);
int64_t function_4b453c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_4b4561(void);
int64_t function_4b4568(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4b4609(void);
int64_t function_4b4629(void);
int64_t function_4b4645(void);
int64_t function_4b4668(void);
int64_t function_4b468d(void);
int64_t function_4b4692(void);
int64_t function_4b46c1(int64_t a1);
int64_t function_4b47b0();
int64_t function_4b47c4();
int64_t function_4b47d0();
int64_t function_4b48c3(void);
int64_t function_4b4a40(void);
int64_t function_4b4a80(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4b4cc3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4b4d10(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b4d30(void);
int64_t function_4f8cc0();
int64_t function_4f944e(void);
int64_t function_4f9457(int64_t a1, int64_t a2);
int64_t function_4fca70();
int64_t function_5423f0();
int64_t function_54d560();
int64_t function_552550();
int64_t function_554b00();
int64_t function_55a5d0();
int64_t function_55caa6();
int64_t function_55cb14();
int64_t function_55cb8f(void);
int64_t function_55cba3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10);
int64_t function_72acc479();
int64_t function_ffffffffb279d7f9();
int64_t function_ffffffffc6d31c36();
int64_t function_ffffffffe39b9272();
int64_t unknown_fffffffff95cede9();

// Address range: 0x4571e3 - 0x4571e4
int64_t function_4571e3(void) {
    // 0x4571e3
    int64_t result; // 0x4571e3
    return result;
}

// Address range: 0x4571e6 - 0x4571e9
int64_t function_4571e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4571e6
    int64_t result; // 0x4571e6
    return result;
}

// Address range: 0x45724d - 0x45725b
int64_t function_45724d(void) {
    // 0x45724d
    return function_ffffffffe39b9272();
}

// Address range: 0x45728d - 0x4572b7
int64_t function_45728d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x45728d
    int64_t v1; // 0x45728d
    *(char *)a1 = (char)v1 + 125 + (char)((v1 & 256) != 0);
    while (true) {
        // 0x457293
        int3_t v2; // 0x45728d
        float80_t v3 = __frontend_reg_load_fpr(v2); // 0x457299
        int64_t v4; // 0x45728d
        int32_t v5 = *(int32_t *)v4; // 0x457299
        __frontend_reg_store_fpr(v2, v3 - (float80_t)v5);
        *(float64_t *)a3 = (float64_t)__frontend_reg_load_fpr(v2);
        unknown_fffffffff95cede9();
        *(char *)0x38a3f6c7 = *(char *)0x38a3f6c7 + -1 - (char)(v1 / 256);
        int64_t v6; // 0x45728d
        v4 = *(int64_t *)(v6 - 16);
        v6 -= 8;
        v2++;
    }
}

// Address range: 0x457308 - 0x457309
int64_t function_457308(void) {
    // 0x457308
    int64_t result; // 0x457308
    return result;
}

// Address range: 0x457338 - 0x45733d
int64_t function_457338(void) {
    // 0x457338
    int64_t result; // 0x457338
    bool v1; // 0x457338
    if (true == !v1) {
        result = function_457308();
    }
    // 0x45733a
    return result;
}

// Address range: 0x4573d4 - 0x4573d7
int64_t function_4573d4(void) {
    // 0x4573d4
    int64_t result; // 0x4573d4
    return result;
}

// Address range: 0x4573f9 - 0x4573fc
int64_t function_4573f9(int64_t a1) {
    // 0x4573f9
    int64_t result; // 0x4573f9
    return result;
}

// Address range: 0x457418 - 0x45741a
int64_t function_457418(void) {
    // 0x457418
    int64_t result; // 0x457418
    return result;
}

// Address range: 0x457460 - 0x4574fe
int64_t function_457460(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a4 / 256 ^ a3;
    int64_t v2; // 0x457460
    if ((char)v1 == 0) {
        char * v3 = (char *)((256 * v1 & 0xff00 | a4 & -0xff01) + 0x3cb754df); // 0x45747c
        *v3 = *v3 & (char)a3;
        return function_ffffffffb279d7f9(v2, a5, v2, 0x1047daef);
    }
    uint32_t v4 = *(int32_t *)(v2 & 0xffffffff ^ 0xc0cc290d) ^ (int32_t)v2; // 0x4574d0
    int32_t * v5 = (int32_t *)(v2 + 77); // 0x4574d5
    *v5 = *v5 + (int32_t)a3;
    char * v6 = (char *)(a3 - 42); // 0x4574e7
    *v6 = *v6 ^ (char)(v4 / 256);
    int64_t result = __asm_hlt(); // 0x4574ea
    char * v7 = (char *)(v2 + 19); // 0x4574f5
    *v7 = *v7 + (*(char *)(a1 - 109) | (char)v4);
    return result;
}

// Address range: 0x457525 - 0x457536
int64_t function_457525(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x457525
    return function_72acc479(a4);
}

// Address range: 0x45753a - 0x45753b
int64_t function_45753a(void) {
    // 0x45753a
    int64_t result; // 0x45753a
    return result;
}

// Address range: 0x457540 - 0x45754f
int64_t function_457540(int64_t a1) {
    // 0x457540
    int64_t result; // 0x457540
    return result;
}

// Address range: 0x457592 - 0x457593
int64_t function_457592(void) {
    // 0x457592
    int64_t result; // 0x457592
    return result;
}

// Address range: 0x457594 - 0x45759f
int64_t function_457594(void) {
    // 0x457594
    __asm_in(-64);
    return function_299c5cdd();
}

// Address range: 0x4575be - 0x4575c3
int64_t function_4575be(int64_t a1, int64_t a2, int64_t a3) {
    int16_t v1 = a3; // 0x4575be
    *(char *)a1 = __asm_insb(v1);
    int64_t v2; // 0x4575be
    __asm_outsb(v1, *(char *)&v2);
    int64_t result; // 0x4575be
    return result;
}

// Address range: 0x4577e3 - 0x457877
int64_t function_4577e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x4577e3
    int64_t result; // 0x4577e3
    bool v1; // 0x4577e3
    if (v1) {
        int16_t v2 = a3; // 0x457815
        int32_t v3 = __asm_insd(v2); // 0x457815
        int32_t * v4 = (int32_t *)a1; // 0x457815
        *v4 = v3;
        int64_t v5; // 0x4577e3
        __asm_outsb(v2, *(char *)&v5);
        *v4 = (int32_t)result;
        return result;
    }
    // 0x4577e5
    return result;
}

// Address range: 0x457887 - 0x45788f
int64_t function_457887(int64_t a1, int64_t a2, int64_t a3) {
    // 0x457887
    int64_t v1; // 0x457887
    int64_t v2 = v1;
    bool v3; // 0x457887
    int64_t v4 = v3 ? -1 : 1; // 0x457889
    *(int32_t *)v2 = (int32_t)v2 >> 23;
    return function_4578c9(a1, v4 + a2, (a3 - v1 + (int64_t)v3) % 256 | a3 & -256, v1);
}

// Address range: 0x4578b2 - 0x4578b7
int64_t function_4578b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4578b2
    int64_t result; // 0x4578b2
    return result;
}

// Address range: 0x4578c9 - 0x4578d6
int64_t function_4578c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)(a4 + 15); // 0x4578cd
    int64_t v2; // 0x4578c9
    return 2 * v2 + (int64_t)(v1 > (char)((uint64_t)v2 / 256)) & 0xffff00ff | (int64_t)&g2;
}

// Address range: 0x45792a - 0x45792f
int64_t function_45792a(void) {
    // 0x45792a
    return function_ffffffffc6d31c36();
}

// Address range: 0x45794a - 0x45794b
int64_t function_45794a(void) {
    // 0x45794a
    int64_t result; // 0x45794a
    return result;
}

// Address range: 0x45795c - 0x45795d
int64_t function_45795c(void) {
    // 0x45795c
    int64_t result; // 0x45795c
    return result;
}

// Address range: 0x45796e - 0x45796f
int64_t function_45796e(void) {
    // 0x45796e
    int64_t result; // 0x45796e
    return result;
}

// Address range: 0x457974 - 0x457a43
int64_t function_457974(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x457974
    int64_t v1; // 0x457974
    uint64_t v2 = v1;
    int64_t v3; // 0x457974
    bool v4; // 0x457974
    if (a4 != 1 && !v4) {
        v3 = function_45794a();
    }
    int32_t v5 = *(int32_t *)(2 * a1 + 78) | (int32_t)v3; // 0x457976
    char v6 = (char)v5 ^ -29; // 0x45797a
    int64_t v7 = v5 & -256; // 0x45797a
    if (v6 >= 0 != v6 != 0) {
        uint32_t v8 = *(int32_t *)(a1 + 46); // 0x457981
        return (0x100000000 * a3 | v7 | (int64_t)(v6 - 79)) / (int64_t)v8 & 0xffffffff;
    }
    int64_t result = (int64_t)v6 | v7; // 0x45797a
    int64_t v9 = v4 ? -4 : 4; // 0x45799e
    int32_t * v10 = (int32_t *)(a4 + 0x614ca12a); // 0x45799f
    int32_t v11 = *v10 - (int32_t)a5; // 0x45799f
    unsigned char v12 = llvm_ctpop_i8((char)v11); // 0x45799f
    *v10 = v11;
    if (v12 % 2 != 0) {
        char v13 = v6 + (char)(v2 / 256); // 0x4579a7
        if (v13 >= 0) {
            // 0x457a0d
            return result;
        }
        int32_t * v14 = (int32_t *)(a2 + 84 + v9); // 0x4579b5
        *v14 = *v14 + (int32_t)(256 * (int64_t)v13 | v2 & 0xffff00ff);
        return result;
    }
    int64_t v15 = 2 * v9 + a1; // 0x457a1a
    char * v16 = (char *)(a5 + 63); // 0x457a1c
    *v16 = *v16 + v6;
    int32_t * v17 = (int32_t *)(a4 + 0x4d78b442); // 0x457a23
    *v17 = *v17 + (int32_t)result;
    int32_t * v18 = (int32_t *)(result + 0x66363b77); // 0x457a35
    *v18 = *v18 | (int32_t)v15;
    *(int32_t *)v15 = *(int32_t *)a6;
    int32_t v19 = __asm_insd((int16_t)a3); // 0x457a42
    *(int32_t *)(v15 + ((a3 & (int64_t)&g1) == 0 ? 4 : -4)) = v19;
    return v7 | 18;
}

// Address range: 0x457a4b - 0x457a53
int64_t function_457a4b(int64_t a1) {
    // 0x457a4b
    int64_t v1; // 0x457a4b
    char * v2 = (char *)(4 * v1 + a1); // 0x457a4c
    *v2 = *v2 & 18;
    return v1 & -256 | 98;
}

// Address range: 0x457a6a - 0x457a75
int64_t function_457a6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x457a6a
    int64_t v1; // 0x457a6a
    bool v2; // 0x457a6a
    *(char *)a4 = (char)v1 - (char)((uint64_t)v1 / 256) + (char)v2;
    int64_t v3; // 0x457a6a
    __asm_outsb((int16_t)a3, *(char *)&v3);
    return v1 + 0x556c562d & 0xffffffff;
}

// Address range: 0x4b44c3 - 0x4b44dd
int64_t function_4b44c3(void) {
    // 0x4b44c3
    int64_t v1; // 0x4b44c3
    int64_t v2 = v1;
    int64_t v3 = v1;
    *(char *)v3 = 2 * (char)v3;
    if ((int32_t)function_4b1a40(v2, v2) != 0) {
        function_4b43cb();
    }
    // 0x4b44d8
    return function_4b4412();
}

// Address range: 0x4b4502 - 0x4b4503
int64_t function_4b4502(void) {
    // 0x4b4502
    int64_t result; // 0x4b4502
    return result;
}

// Address range: 0x4b450c - 0x4b450d
int64_t function_4b450c(void) {
    // 0x4b450c
    int64_t result; // 0x4b450c
    return result;
}

// Address range: 0x4b4515 - 0x4b4517
int64_t function_4b4515(int64_t a1) {
    // 0x4b4515
    int64_t result; // 0x4b4515
    return result;
}

// Address range: 0x4b451f - 0x4b4521
int64_t function_4b451f(void) {
    // 0x4b451f
    int64_t result; // 0x4b451f
    return result;
}

// Address range: 0x4b4522 - 0x4b452e
int64_t function_4b4522(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x4b4522
    int64_t v1; // 0x4b4522
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 - 115); // 0x4b4522
    *v3 = *v3 - 1;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x4b453a - 0x4b453b
int64_t function_4b453a(void) {
    // 0x4b453a
    int64_t result; // 0x4b453a
    return result;
}

// Address range: 0x4b453c - 0x4b4548
int64_t function_4b453c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x4b453c
    int64_t v1; // 0x4b453c
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 - 115); // 0x4b453c
    *v3 = *v3 - 1;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x4b4561 - 0x4b4562
int64_t function_4b4561(void) {
    // 0x4b4561
    int64_t result; // 0x4b4561
    return result;
}

// Address range: 0x4b4568 - 0x4b45e7
int64_t function_4b4568(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4b4568
    int64_t v1; // 0x4b4568
    if ((int32_t)v1 != 0) {
        function_4b47d0();
    }
    // 0x4b4570
    int64_t v2; // 0x4b4568
    function_4b0890(&v2);
    int64_t v3; // bp+32, 0x4b4568
    function_4b0890(&v3);
    int64_t v4; // bp+64, 0x4b4568
    function_4b0890(&v4);
    int64_t v5; // bp+96, 0x4b4568
    function_4b0890(&v5);
    int64_t v6; // bp+128, 0x4b4568
    function_4b0890(&v6);
    int64_t v7; // bp+160, 0x4b4568
    function_4b0890(&v7);
    int64_t v8; // bp+192, 0x4b4568
    function_4b0890(&v8);
    return v1 & 0xffffffff;
}

// Address range: 0x4b4609 - 0x4b460a
int64_t function_4b4609(void) {
    // 0x4b4609
    int64_t result; // 0x4b4609
    return result;
}

// Address range: 0x4b4629 - 0x4b462a
int64_t function_4b4629(void) {
    // 0x4b4629
    int64_t result; // 0x4b4629
    return result;
}

// Address range: 0x4b4645 - 0x4b4646
int64_t function_4b4645(void) {
    // 0x4b4645
    int64_t result; // 0x4b4645
    return result;
}

// Address range: 0x4b4668 - 0x4b4669
int64_t function_4b4668(void) {
    // 0x4b4668
    int64_t result; // 0x4b4668
    return result;
}

// Address range: 0x4b468d - 0x4b4692
int64_t function_4b468d(void) {
    // 0x4b468d
    int64_t result; // 0x4b468d
    return result;
}

// Address range: 0x4b4692 - 0x4b46c0
int64_t function_4b4692(void) {
    // 0x4b4692
    int64_t v1; // 0x4b4692
    function_4b0890(&v1);
    int64_t v2; // bp+32, 0x4b4692
    function_4b0890(&v2);
    int64_t v3; // bp+64, 0x4b4692
    function_4b0890(&v3);
    int64_t v4; // bp+96, 0x4b4692
    return function_4b0890(&v4);
}

// Address range: 0x4b46c1 - 0x4b46c2
int64_t function_4b46c1(int64_t a1) {
    // 0x4b46c1
    int64_t result; // 0x4b46c1
    return result;
}

// Address range: 0x4b48c3 - 0x4b4a40
int64_t function_4b48c3(void) {
    // 0x4b48c3
    int64_t v1; // 0x4b48c3
    if ((int32_t)function_4b1590(v1, v1) != 0) {
        function_4b468d();
    }
    // 0x4b48d2
    int64_t v2; // 0x4b48c3
    int64_t v3; // bp+64, 0x4b48c3
    int64_t v4; // bp+96, 0x4b48c3
    if ((int32_t)function_4b3cf0(&v4, &v2, &v3) != 0) {
        function_4b4568((int64_t)&g11, (int64_t)&g11, (int64_t)&g11, (int64_t)&g11);
    }
    // 0x4b48ee
    int64_t v5; // bp+160, 0x4b48c3
    int64_t v6 = function_4b1ca0(&v5, 16, "003A0AAEDD7E784FC07D8F9EC6E3BFD5C3DBA76456363A10869622EAC2DD84ECC5B8A74DAC4D09E03B5E0BE779F2DF61"); // 0x4b4902
    if ((int32_t)v6 != 0) {
        function_4b4568((int64_t)&g11, (int64_t)&g11, (int64_t)&g11, (int64_t)&g11);
    }
    if ((int32_t)v1 != 0) {
        // 0x4b49f9
        printf("  MPI test #4 (inv_mod): ");
        int64_t v7 = function_4b1590((int64_t)&v4, (int64_t)&v5); // 0x4b4a14
        if ((int32_t)v7 != 0) {
            function_4b47b0();
        }
        // 0x4b4a21
        puts("passed");
        printf("  MPI test #5 (simple gcd): ");
    } else {
        int64_t v8 = function_4b1590((int64_t)&v4, (int64_t)&v5); // 0x4b4926
        if ((int32_t)v8 != 0) {
            function_4b468d();
        }
    }
    int64_t v9 = (int64_t)&g3; // 0x4b493a
    int64_t v10 = 0;
    if ((int32_t)function_4b0d80(&v4, *(int32_t *)v9) != 0) {
        function_4b4568((int64_t)&g11, (int64_t)&g11, (int64_t)&g11, (int64_t)&g11);
    }
    // 0x4b4955
    int64_t v11; // bp+128, 0x4b48c3
    if ((int32_t)function_4b0d80(&v11, *(int32_t *)(v9 + 4)) != 0) {
        function_4b4568((int64_t)&g11, (int64_t)&g11, (int64_t)&g11, (int64_t)&g11);
    }
    // 0x4b4971
    if ((int32_t)function_4b36d0(&v2, &v4, &v11) != 0) {
        function_4b4568((int64_t)&g11, (int64_t)&g11, (int64_t)&g11, (int64_t)&g11);
    }
    while ((int32_t)function_4b1680(&v2, *(int32_t *)(v9 + 8)) == 0) {
        int64_t v12 = v10 + 1; // 0x4b49a1
        v9 += 12;
        if ((int32_t)v12 == 3) {
            if ((int32_t)v1 != 0) {
                // 0x4b49b7
                puts("passed");
                return function_4b4692();
            }
            function_4b4692();
            // 0x4b49b7
            puts("passed");
            return function_4b4692();
        }
        v10 = v12 & 0xffffffff;
        if ((int32_t)function_4b0d80(&v4, *(int32_t *)v9) != 0) {
            function_4b4568((int64_t)&g11, (int64_t)&g11, (int64_t)&g11, (int64_t)&g11);
        }
        // 0x4b4955
        if ((int32_t)function_4b0d80(&v11, *(int32_t *)(v9 + 4)) != 0) {
            function_4b4568((int64_t)&g11, (int64_t)&g11, (int64_t)&g11, (int64_t)&g11);
        }
        // 0x4b4971
        if ((int32_t)function_4b36d0(&v2, &v4, &v11) != 0) {
            function_4b4568((int64_t)&g11, (int64_t)&g11, (int64_t)&g11, (int64_t)&g11);
        }
    }
    if ((int32_t)v1 == 0) {
        function_4b468d();
    }
    // 0x4b49e3
    printf("failed at %d\n", v10);
    return function_4b47c4();
}

// Address range: 0x4b4a40 - 0x4b4a79
int64_t function_4b4a40(void) {
    // 0x4b4a40
    printf("  MPI test #3 (exp_mod): ");
    int64_t v1; // bp+160, 0x4b4a40
    int64_t v2; // bp+96, 0x4b4a40
    int64_t v3 = function_4b1590((int64_t)&v2, (int64_t)&v1); // 0x4b4a5b
    if ((int32_t)v3 != 0) {
        function_4b47b0();
    }
    // 0x4b4a68
    return puts("passed");
}

// Address range: 0x4b4a80 - 0x4b4aa4
int64_t function_4b4a80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = a2 - a3; // 0x4b4a80
    if (v1 == 0) {
        // 0x4b4aa2
        return 0;
    }
    uint64_t v2 = 1; // 0x4b4a93
    int64_t result = v2 & 0xffffffff; // 0x4b4a93
    *(char *)(a3 + a1) = (char)v1;
    uint64_t v3 = v2 % 256; // 0x4b4a9a
    while (v1 > v3) {
        // 0x4b4a90
        v2 = result + 1;
        result = v2 & 0xffffffff;
        *(char *)(a3 + a1 + v3) = (char)v1;
        v3 = v2 % 256;
    }
    // 0x4b4aa2
    return result;
}

// Address range: 0x4b4cc3 - 0x4b4d0a
int64_t function_4b4cc3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4b4cc3
    bool v1; // 0x4b4cc3
    if (a1 == 0 || v1) {
        // 0x4b4d01
        return 0xffff9f00;
    }
    int64_t * v2 = (int64_t *)a3; // 0x4b4cd2
    *v2 = 0;
    if (a2 == 0) {
        // 0x4b4d01
        return 0;
    }
    int64_t v3 = 0; // 0x4b4cd9
    int64_t v4 = 0;
    int64_t v5 = a2 - 1;
    int64_t v6 = v4 | (int64_t)(*(char *)(v5 + a1) != 0); // 0x4b4ce8
    v3 |= (v6 ^ v4) % 256 * a2;
    *v2 = v3;
    while (v5 != 0) {
        int64_t v7 = v5;
        v4 = v6;
        v5 = v7 - 1;
        v6 = v4 | (int64_t)(*(char *)(v5 + a1) != 0);
        v3 |= (v6 ^ v4) % 256 * v7;
        *v2 = v3;
    }
    // 0x4b4d01
    return 0;
}

// Address range: 0x4b4d10 - 0x4b4d26
int64_t function_4b4d10(int64_t a1, int64_t a2, int64_t a3) {
    if (a1 == 0 || a3 == 0) {
        // 0x4b4d20
        return 0xffff9f00;
    }
    // 0x4b4d1a
    *(int64_t *)a3 = a2;
    return 0;
}

// Address range: 0x4b4d30 - 0x4b4d88
int64_t function_4b4d30(void) {
    // 0x4b4d30
    if (g8 != 0) {
        // 0x4b4d80
        return (int64_t)&g10;
    }
    int64_t v1 = (int64_t)&g10; // 0x4b4d4f
    int64_t v2 = (int64_t)&g4; // 0x4b4d4f
    if (g4 == 0) {
        // 0x4b4d68
        *(int32_t *)(int64_t)&g10 = 0;
        g8 = 1;
        return (int64_t)&g10;
    }
    v2 += 16;
    *(int32_t *)v1 = g4;
    v1 += 4;
    int32_t v3 = *(int32_t *)v2; // 0x4b4d62
    while (v3 != 0) {
        // 0x4b4d58
        v2 += 16;
        *(int32_t *)v1 = v3;
        v1 += 4;
        v3 = *(int32_t *)v2;
    }
    // 0x4b4d68
    *(int32_t *)v1 = 0;
    g8 = 1;
    return (int64_t)&g10;
}

// Address range: 0x4f944e - 0x4f9457
int64_t function_4f944e(void) {
    // 0x4f944e
    int64_t v1; // 0x4f944e
    bool v2; // 0x4f944e
    int64_t result = v1 + 0xb275fce8 + (int64_t)v2 & 0xffffffff; // 0x4f944e
    int32_t * v3 = (int32_t *)(result - 119); // 0x4f9453
    *v3 = *v3 - 1;
    return result;
}

// Address range: 0x4f9457 - 0x4f9b30
int64_t function_4f9457(int64_t a1, int64_t a2) {
    // 0x4f9457
    function_20540();
    int64_t v1; // 0x4f9457
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    function_20a50();
    int64_t v2 = function_20a50(); // 0x4f9469
    function_20540();
    _Unwind_Resume((struct _Unwind_Exception *)v2);
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x4f9494
    *v3 = 0;
    int64_t v4 = __readfsqword(40); // 0x4f94a1
    function_4f8cc0();
    int64_t v5; // 0x4f9457
    int64_t v6; // 0x4f9457
    int64_t v7; // 0x4f9457
    int64_t v8; // 0x4f9457
    int64_t v9; // 0x4f9457
    int64_t v10; // 0x4f9457
    int64_t v11; // 0x4f9457
    int32_t v12; // 0x4f9457
    char v13; // 0x4f9457
    if (v13 != 0) {
        int64_t v14 = *(int64_t *)(v2 + 232 + *(int64_t *)(*(int64_t *)v2 - 24)); // 0x4f94ff
        int64_t * v15 = (int64_t *)(v14 + 16); // 0x4f9507
        uint64_t v16 = *v15; // 0x4f9507
        int64_t v17; // 0x4f9457
        int64_t v18; // 0x4f9457
        if (*(int64_t *)(v14 + 24) > v16) {
            int64_t v19 = v16 + 4; // 0x4f9513
            *v15 = v19;
            v17 = (int64_t)*(int32_t *)v16;
            v18 = v19;
        } else {
            // 0x4f9530
            v17 = *(int64_t *)v14;
            v18 = v16;
        }
        int32_t v20 = v17; // 0x4f951b
        if (v20 == -1) {
            // 0x4f9540
            v9 = v18;
            v6 = v2;
            v12 = *v3 == 0 ? 6 : 2;
            goto lab_0x4f94c9;
        } else {
            // 0x4f9520
            *v3 = 1;
            *(int32_t *)a2 = v20;
            v10 = v18;
            v7 = v2;
            v11 = v2;
            goto lab_0x4f94db;
        }
    } else {
        // 0x4f94bd
        v8 = 1;
        v5 = v2;
        v10 = 1;
        v7 = v2;
        v11 = v2;
        if (*v3 != 0) {
            goto lab_0x4f94db;
        } else {
            goto lab_0x4f94c4;
        }
    }
  lab_0x4f95be_2:;
    int64_t v21 = function_20a50(); // 0x4f95be
    function_20540();
    _Unwind_Resume((struct _Unwind_Exception *)v21);
    int64_t v22; // 0x4f9457
    int64_t v23 = v22; // 0x4f95dd
    int64_t v24; // 0x4f9557
    int64_t v25 = v24; // 0x4f95dd
    int64_t v26 = v21; // 0x4f95dd
    int64_t v27; // bp-40, 0x4f9457
    int64_t v28 = (int64_t)&v27; // 0x4f95dd
    int64_t v29 = a2; // 0x4f95dd
    int64_t v30; // 0x4f9457
    int64_t v31 = v30; // 0x4f95dd
    goto lab_0x4f95e0;
  lab_0x4f94c4:
    // 0x4f94c4
    v9 = v8;
    v6 = v5;
    v12 = 4;
    goto lab_0x4f94c9;
  lab_0x4f94db:
    // 0x4f94db
    v30 = v11;
    int64_t v201 = v10; // 0x4f9457
    int64_t v202 = v7;
    int64_t v203 = __readfsqword(40) ^ v4; // 0x4f94e0
    int64_t result = v202; // 0x4f94ec
    while (v203 != 0) {
        // 0x4f9552
        __stack_chk_fail();
        v24 = v201 - 1;
        int64_t v204 = v202; // 0x4f955e
        if (v24 == 0) {
            // 0x4f9560
            function_1fd40((int64_t)&g11);
            v204 = *(int64_t *)(*(int64_t *)v202 - 24) + v202;
            int32_t * v205 = (int32_t *)(v204 + 32); // 0x4f956c
            *v205 = *v205 | 1;
            function_20a50();
            if (*(char *)(v204 + 28) % 2 == 0) {
                goto lab_0x4f95be_2;
            }
        }
        int64_t v206 = v204;
        function_1fd40((int64_t)&g11);
        int64_t v207 = *(int64_t *)(*(int64_t *)v206 - 24) + v206; // 0x4f9587
        int32_t * v208 = (int32_t *)(v207 + 32); // 0x4f958a
        *v208 = *v208 | 1;
        v22 = v207;
        if (*(char *)(v207 + 28) % 2 != 0) {
            goto lab_0x4f95be_2;
        }
        // 0x4f9594
        function_20540();
        v8 = v24;
        v5 = v206;
        v201 = v24;
        int64_t v209 = v206; // 0x4f959e
        if (*(int64_t *)(v206 + 8) == 0) {
            goto lab_0x4f94c4;
        }
        v202 = v209;
        v203 = __readfsqword(40) ^ v4;
        result = v202;
    }
  lab_0x4f94ee:
    // 0x4f94ee
    return result;
  lab_0x4f94c9:;
    int64_t v198 = v6;
    int64_t v199 = *(int64_t *)(*(int64_t *)v198 - 24) + v198; // 0x4f94d0
    uint32_t v200 = *(int32_t *)(v199 + 32) | v12; // 0x4f94d3
    function_4fca70(v199, v200);
    v10 = v9;
    v7 = v198;
    v11 = v200;
    goto lab_0x4f94db;
  lab_0x4f95e0:;
    int64_t v32 = v31;
    int64_t v33 = v28;
    int64_t v34 = v26;
    int64_t v35 = v25;
    int64_t v36 = v23;
    int64_t v37; // 0x4f9457
    *(int64_t *)(v33 - 8) = v37;
    int64_t v38; // 0x4f9457
    *(int64_t *)(v33 - 16) = v38;
    int64_t v39; // 0x4f9457
    *(int64_t *)(v33 - 24) = v39;
    *(int64_t *)(v33 - 32) = v29;
    *(int64_t *)(v33 - 40) = v34;
    int64_t * v40 = (int64_t *)(v34 + 8); // 0x4f9600
    *v40 = 0;
    int64_t v41 = __readfsqword(40); // 0x4f960d
    int64_t * v42 = (int64_t *)(v33 - 48); // 0x4f9616
    *v42 = v41;
    function_4f8cc0();
    int64_t v43; // 0x4f9457
    int64_t v44; // 0x4f9457
    int64_t v45; // 0x4f9457
    int64_t v46; // 0x4f9457
    int64_t v47; // 0x4f9457
    int64_t v48; // 0x4f9457
    int64_t v49; // 0x4f9678
    int64_t * v50; // 0x4f9680
    int64_t * v51; // 0x4f9684
    if (*(char *)(v33 - 49) != 0) {
        int64_t v52 = *(int64_t *)(*(int64_t *)v34 - 24); // 0x4f9674
        v49 = *(int64_t *)(v34 + 232 + v52);
        v50 = (int64_t *)(v49 + 16);
        uint64_t v53 = *v50; // 0x4f9680
        v51 = (int64_t *)(v49 + 24);
        v46 = v53;
        v44 = v32;
        v45 = v32;
        if (*v51 > v53) {
            goto lab_0x4f9690;
        } else {
            goto lab_0x4f96e9;
        }
    } else {
        // 0x4f9629
        v47 = *v40;
        v48 = 1;
        v43 = v32;
        goto lab_0x4f962d;
    }
  lab_0x4f9690:;
    int64_t v54 = *v40; // 0x4f9690
    int64_t v55 = (int64_t)*(int32_t *)v46; // 0x4f9694
    int64_t v56 = v54 + 1; // 0x4f9696
    int64_t v57 = v55; // 0x4f969d
    int64_t v58 = v54; // 0x4f969d
    int64_t v59 = v56; // 0x4f969d
    int64_t v60 = v44; // 0x4f969d
    int64_t v61 = v55; // 0x4f969d
    int64_t v62 = v54; // 0x4f969d
    int64_t v63 = v56; // 0x4f969d
    int64_t v64 = v44; // 0x4f969d
    if (v56 < v35) {
        goto lab_0x4f969f;
    } else {
        goto lab_0x4f96ff;
    }
  lab_0x4f96e9:;
    int64_t v65 = *(int64_t *)v49; // 0x4f96e9
    int64_t v66 = *v40; // 0x4f96f2
    int64_t v67 = v66 + 1; // 0x4f96f6
    v57 = v65;
    v58 = v66;
    v59 = v67;
    v60 = v45;
    v61 = v65;
    v62 = v66;
    v63 = v67;
    v64 = v45;
    if (v67 < v35) {
        goto lab_0x4f969f;
    } else {
        goto lab_0x4f96ff;
    }
  lab_0x4f962d:;
    int64_t v68 = v43;
    int64_t v69 = v48;
    int64_t v70 = v47;
    int64_t v71 = v70; // 0x4f9630
    int64_t v72 = v69; // 0x4f9630
    int64_t v73 = v34; // 0x4f9630
    int64_t v74 = v68; // 0x4f9630
    if (v35 < 1) {
        goto lab_0x4f963a;
    } else {
        // 0x4f9632
        *(int32_t *)v68 = 0;
        v71 = v70;
        v72 = v69;
        v73 = v34;
        v74 = v68;
        goto lab_0x4f963a;
    }
  lab_0x4f969f:;
    int64_t v75 = v60;
    int64_t v76 = v59;
    int64_t v77 = v58;
    int32_t v78 = v57; // 0x4f969f
    int64_t v79 = 2; // 0x4f96a2
    int64_t v80; // 0x4f9457
    int64_t v81; // 0x4f9457
    if (v78 == -1) {
        goto lab_0x4f97d2;
    } else {
        // 0x4f96a8
        v79 = 0;
        if ((int32_t)v36 == v78) {
            goto lab_0x4f97d2;
        } else {
            // 0x4f96b1
            *(int32_t *)v75 = v78;
            *v40 = v76;
            uint64_t v82 = *v50; // 0x4f96be
            if (v82 >= *v51) {
                // 0x4f97b0
                v81 = *(int64_t *)v49;
                v80 = v82;
                goto lab_0x4f96d6;
            } else {
                int64_t v83 = v82 + 4; // 0x4f96ce
                *v50 = v83;
                v81 = (int64_t)*(int32_t *)v82;
                v80 = v83;
                goto lab_0x4f96d6;
            }
        }
    }
  lab_0x4f96ff:;
    int64_t v84 = v64;
    int64_t v85 = v63;
    int64_t v86 = v62;
    v47 = v86;
    v48 = v85;
    v43 = v84;
    if ((int32_t)v61 != -1) {
        goto lab_0x4f962d;
    } else {
        if (v35 < 1) {
            goto lab_0x4f9715;
        } else {
            // 0x4f970d
            *(int32_t *)v84 = 0;
            goto lab_0x4f9715;
        }
    }
  lab_0x4f963a:;
    int64_t v87 = v72; // 0x4f963d
    int64_t v88 = v73; // 0x4f963d
    int64_t v89 = v74; // 0x4f963d
    int64_t v90 = v72; // 0x4f963d
    int64_t v91 = v73; // 0x4f963d
    int64_t v92 = v74; // 0x4f963d
    if (v71 == 0) {
        goto lab_0x4f9768;
    } else {
        goto lab_0x4f9643;
    }
  lab_0x4f97d2:;
    int64_t v93 = v79;
    if (v35 < 1) {
        goto lab_0x4f97df;
    } else {
        // 0x4f97d7
        *(int32_t *)v75 = 0;
        goto lab_0x4f97df;
    }
  lab_0x4f9768:;
    int64_t v94 = v90; // 0x4f9768
    int64_t v95 = v91; // 0x4f9768
    int64_t v96 = 4; // 0x4f9768
    int64_t v97 = v92; // 0x4f9768
    goto lab_0x4f976d;
  lab_0x4f9643:;
    int64_t v100 = v36 & 0xffffffff; // 0x4f95f9
    int64_t v101 = v89;
    int64_t v102 = v88;
    int64_t * v103 = (int64_t *)v102;
    int64_t * v104 = (int64_t *)(v102 + 8);
    int32_t * v105 = (int32_t *)v101;
    int64_t v106 = v87; // 0x4f9457
    goto lab_0x4f9643_2;
  lab_0x4f97df:;
    int64_t v190 = v76; // 0x4f97e2
    int64_t v191 = v93; // 0x4f97e2
    int64_t v192 = v75; // 0x4f97e2
    if (v77 == 0) {
        goto lab_0x4f97a3;
    } else {
        // 0x4f97e4
        v87 = v76;
        v88 = v34;
        v89 = v75;
        v94 = v76;
        v95 = v34;
        v96 = v93;
        v97 = v75;
        if (v93 == 0) {
            goto lab_0x4f9643;
        } else {
            goto lab_0x4f976d;
        }
    }
  lab_0x4f9715:;
    int64_t v193 = v85; // 0x4f971d
    int64_t v194 = v84; // 0x4f971d
    v94 = v85;
    v95 = v34;
    v96 = 6;
    v97 = v84;
    if (v86 == 0) {
        goto lab_0x4f976d;
    } else {
        goto lab_0x4f971f;
    }
  lab_0x4f976d:;
    int64_t v98 = v95;
    int64_t v99 = *(int64_t *)(*(int64_t *)v98 - 24) + v98; // 0x4f9775
    function_4fca70(v99, *(int32_t *)(v99 + 32) | (int32_t)v96);
    v87 = v94;
    v88 = v98;
    v89 = v97;
    goto lab_0x4f9643;
  lab_0x4f97a3:
    // 0x4f97a3
    v94 = v190;
    v95 = v34;
    v96 = v191 & 0xfffffffb | 4;
    v97 = v192;
    goto lab_0x4f976d;
  lab_0x4f971f:
    // 0x4f971f
    v94 = v193;
    v95 = v34;
    v96 = 2;
    v97 = v194;
    goto lab_0x4f976d;
  lab_0x4f96d6:;
    int64_t v195 = v75 + 4; // 0x4f96b1
    if ((int32_t)v81 == -1) {
        int64_t v196 = *v40; // 0x4f978b
        int64_t v197; // 0x4f96df
        if (v35 < 1) {
            // 0x4f97c0
            v193 = v197;
            v194 = v195;
            v190 = v197;
            v191 = 2;
            v192 = v195;
            if (v196 != 0) {
                goto lab_0x4f971f;
            } else {
                goto lab_0x4f97a3;
            }
        } else {
            // 0x4f9791
            *(int32_t *)v195 = 0;
            v94 = v197;
            v95 = v34;
            v96 = 2;
            v97 = v195;
            v190 = v197;
            v191 = 2;
            v192 = v195;
            if (v196 != 0) {
                goto lab_0x4f976d;
            } else {
                goto lab_0x4f97a3;
            }
        }
    } else {
        // 0x4f96df
        v46 = v80;
        v44 = v195;
        v45 = v195;
        if (v80 < *v51) {
            goto lab_0x4f9690;
        } else {
            goto lab_0x4f96e9;
        }
    }
  lab_0x4f9643_2:
    // 0x4f9643
    result = v102;
    int64_t * v107; // 0x4f9457
    int64_t v108; // 0x4f9457
    int64_t v109; // 0x4f9457
    int64_t v110; // 0x4f9457
    int64_t v111; // 0x4f9457
    int64_t v112; // 0x4f9457
    int64_t v113; // 0x4f9457
    int64_t v114; // 0x4f9457
    int64_t v115; // 0x4f9457
    int64_t v116; // 0x4f9457
    int64_t v117; // 0x4f9804
    int64_t v118; // 0x4f9457
    if (*v42 != __readfsqword(40)) {
        // 0x4f97ff
        __stack_chk_fail();
        v117 = v106 - 1;
        function_1fd40((int64_t)&g11);
        v118 = *(int64_t *)(*v103 - 24) + v102;
        int32_t * v119 = (int32_t *)(v118 + 32);
        *v119 = *v119 | 1;
        unsigned char v120 = *(char *)(v118 + 28);
        if (v117 != 0) {
            if (v120 % 2 != 0) {
                int64_t v121 = function_20a50(); // 0x4f984b
                function_20540();
                _Unwind_Resume((struct _Unwind_Exception *)v121);
                int64_t * v122 = (int64_t *)(v33 - 64); // 0x4f9860
                *v122 = v101;
                int64_t * v123 = (int64_t *)(v33 - 72); // 0x4f9862
                *v123 = v102;
                int64_t v124 = v33 - 80; // 0x4f9863
                *(int64_t *)v124 = v121;
                int64_t v125 = *(int64_t *)(v121 + 240 + *(int64_t *)(*(int64_t *)v121 - 24)); // 0x4f986e
                if (v125 == 0) {
                    // 0x4f98a0
                    function_5423f0(0);
                    v114 = v117;
                    v112 = v121;
                    v116 = v124;
                    v111 = v102;
                    v115 = v118;
                    v113 = 0;
                    v108 = v101;
                    v109 = v35;
                    goto lab_0x4f98b0;
                } else {
                    // 0x4f987b
                    v23 = *(int64_t *)v125 & 0xffffffff;
                    v25 = v117;
                    v26 = v121;
                    v28 = v33 - 56;
                    v29 = *v123;
                    v31 = v118;
                    v39 = *v122;
                    v38 = v35;
                    v37 = v100;
                    goto lab_0x4f95e0;
                }
            } else {
                // 0x4f9744
                function_20540();
                v107 = v104;
                v110 = v102;
                if (v35 < 1) {
                    goto lab_0x4f9842;
                } else {
                    // 0x4f9752
                    *v105 = 0;
                    v106 = v117;
                    v90 = v117;
                    v91 = v102;
                    v92 = v101;
                    if (*v104 != 0) {
                        goto lab_0x4f9643_2;
                    } else {
                        goto lab_0x4f9768;
                    }
                }
            }
        } else {
            if (v120 % 2 == 0) {
                goto lab_0x4f983d;
            } else {
                int64_t v126 = function_20a50(); // 0x4f9828
                function_20540();
                _Unwind_Resume((struct _Unwind_Exception *)v126);
                goto lab_0x4f983d;
            }
        }
    } else {
        goto lab_0x4f94ee;
    }
  lab_0x4f983d:
    // 0x4f983d
    function_20a50();
    v107 = (int64_t *)(v118 + 8);
    v110 = v118;
    goto lab_0x4f9842;
  lab_0x4f9842:
    // 0x4f9842
    v71 = *v107;
    v72 = v117;
    v73 = v110;
    v74 = v101;
    goto lab_0x4f963a;
  lab_0x4f98b0:;
    int64_t v127 = v113;
    int64_t v128 = v115;
    int64_t v129 = v116;
    int64_t v130 = v114;
    *(int64_t *)(v129 - 8) = v109;
    *(int64_t *)(v129 - 16) = v108;
    *(int64_t *)(v129 - 24) = v111;
    *(int64_t *)(v129 - 32) = v112;
    int64_t * v131 = (int64_t *)(v127 + 8); // 0x4f98cb
    *v131 = 0;
    int64_t v132 = __readfsqword(40); // 0x4f98d8
    int64_t * v133 = (int64_t *)(v129 - 48); // 0x4f98e1
    *v133 = v132;
    function_4f8cc0();
    int64_t * v134; // 0x4f9457
    int64_t v135; // 0x4f9457
    int64_t v136; // 0x4f9457
    int64_t v137; // 0x4f9457
    int64_t v138; // 0x4f9457
    int64_t v139; // 0x4f9457
    int64_t v140; // 0x4f9457
    int32_t v141; // 0x4f9457
    int64_t * v142; // 0x4f9457
    int64_t v143; // 0x4f9900
    int64_t * v144; // 0x4f9908
    int64_t * v145; // 0x4f990c
    if (*(char *)(v129 - 49) == 0) {
        // 0x4f99f0
        v138 = 1;
        v136 = v127;
        v139 = v127;
        if (*v131 != 0) {
            goto lab_0x4f99c8;
        } else {
            // 0x4f99f0
            v134 = (int64_t *)v127;
            v137 = 1;
            v135 = v127;
            v141 = 4;
            goto lab_0x4f99b5;
        }
    } else {
        // 0x4f98f8
        v142 = (int64_t *)v127;
        v143 = *(int64_t *)(v127 + 232 + *(int64_t *)(*v142 - 24));
        v144 = (int64_t *)(v143 + 16);
        uint64_t v146 = *v144; // 0x4f9908
        v145 = (int64_t *)(v143 + 24);
        if (*v145 > v146) {
            // 0x4f9916
            v140 = (int64_t)*(int32_t *)v146;
            goto lab_0x4f9918;
        } else {
            // 0x4f9a30
            v140 = *(int64_t *)v143;
            goto lab_0x4f9918;
        }
    }
  lab_0x4f99c8:;
    int64_t v147 = v130 & 0xffffffff; // 0x4f98b4
    int64_t v148 = v139;
    int64_t v149 = v138; // 0x4f9457
    int64_t v150 = v136; // 0x4f9457
    goto lab_0x4f99c8_2;
  lab_0x4f99c8_2:;
    int64_t v151 = v150;
    result = v151;
    int64_t v152; // 0x4f9457
    int64_t v153; // 0x4f9457
    int64_t v154; // 0x4f9a57
    if (*v133 != __readfsqword(40)) {
        // 0x4f9a52
        __stack_chk_fail();
        v154 = v149 - 1;
        v153 = v151;
        if (v154 != 0) {
            goto lab_0x4f9a7c;
        } else {
            // 0x4f9a60
            function_1fd40((int64_t)&g11);
            int64_t v155 = *(int64_t *)(*(int64_t *)v151 - 24) + v151; // 0x4f9a69
            int32_t * v156 = (int32_t *)(v155 + 32); // 0x4f9a6d
            *v156 = *v156 | 1;
            function_20a50();
            v153 = v155;
            v152 = v155;
            if (*(char *)(v155 + 28) % 2 == 0) {
                goto lab_0x4f9ac0;
            } else {
                goto lab_0x4f9a7c;
            }
        }
    } else {
        goto lab_0x4f94ee;
    }
  lab_0x4f99b5:;
    int64_t v157 = *(int64_t *)(*v134 - 24) + v135; // 0x4f99bd
    uint32_t v158 = *(int32_t *)(v157 + 32) | v141; // 0x4f99c0
    function_4fca70(v157, v158);
    v138 = v137;
    v136 = v135;
    v139 = v158;
    goto lab_0x4f99c8;
  lab_0x4f9918:;
    int64_t v159 = v140;
    int32_t v160 = v159; // 0x4f9918
    int64_t v161 = 1; // 0x4f991d
    int64_t v162; // 0x4f9457
    int64_t v163; // 0x4f9457
    int32_t v164; // 0x4f9923
    int64_t * v165; // 0x4f998c
    int64_t * v166; // 0x4f9457
    int64_t * v167; // 0x4f9457
    if (v160 == -1) {
        goto lab_0x4f9a00;
    } else {
        int64_t v168 = v159 & 0xffffffff; // 0x4f991b
        v164 = v130;
        v163 = v168;
        if (v160 != v164) {
            // 0x4f998c
            v165 = (int64_t *)(v128 + 40);
            v166 = (int64_t *)v128;
            v167 = (int64_t *)v143;
            v162 = v168;
            goto lab_0x4f998c_2;
        } else {
            goto lab_0x4f9a40;
        }
    }
  lab_0x4f9a00:
    // 0x4f9a00
    v134 = v142;
    v137 = v161;
    v135 = v127;
    v141 = *v131 == 0 ? 6 : 2;
    goto lab_0x4f99b5;
  lab_0x4f9a7c:;
    int64_t v169 = v153;
    function_1fd40((int64_t)&g11);
    int64_t * v170 = (int64_t *)v169;
    int64_t v171 = *(int64_t *)(*v170 - 24) + v169; // 0x4f9a89
    int32_t * v172 = (int32_t *)(v171 + 32); // 0x4f9a8c
    *v172 = *v172 | 1;
    v152 = v169;
    if (*(char *)(v171 + 28) % 2 != 0) {
        goto lab_0x4f9ac0;
    } else {
        // 0x4f9a96
        function_20540();
        v134 = v170;
        v137 = v154;
        v135 = v169;
        v141 = 4;
        v149 = v154;
        v150 = v169;
        if (*(int64_t *)(v169 + 8) == 0) {
            goto lab_0x4f99b5;
        } else {
            goto lab_0x4f99c8_2;
        }
    }
  lab_0x4f9a40:;
    int64_t v173 = *v131; // 0x4f9a40
    v134 = v142;
    v137 = 0;
    v135 = v127;
    v141 = 4;
    v138 = v173;
    v136 = v127;
    v139 = v163;
    if (v173 == 0) {
        goto lab_0x4f99b5;
    } else {
        goto lab_0x4f99c8;
    }
  lab_0x4f9ac0:;
    int64_t v174 = function_20a50(); // 0x4f9ac0
    function_20540();
    _Unwind_Resume((struct _Unwind_Exception *)v174);
    int64_t * v175 = (int64_t *)(v129 - 64); // 0x4f9ae0
    *v175 = v152;
    *(int64_t *)(v129 - 72) = v174;
    int64_t v176 = *(int64_t *)(v174 + 240 + *(int64_t *)(*(int64_t *)v174 - 24)); // 0x4f9af0
    if (v176 == 0) {
        // 0x4f9b1e
        return function_5423f0(0);
    }
    // 0x4f9afd
    v114 = *(int64_t *)v176 & 0xffffffff;
    v112 = v174;
    v116 = v129 - 56;
    v111 = *v175;
    v115 = v148;
    v113 = v174;
    v108 = v128;
    v109 = v147;
    goto lab_0x4f98b0;
  lab_0x4f998c_2:;
    int64_t v177 = v162;
    uint64_t v178 = *v165; // 0x4f998c
    int64_t v179; // 0x4f9457
    if (v178 < *(int64_t *)(v128 + 48)) {
        // 0x4f9930
        *(int32_t *)v178 = (int32_t)v177;
        *v165 = v178 + 4;
        v179 = *v131;
        goto lab_0x4f993f;
    } else {
        int64_t v180 = *v131; // 0x4f99a5
        v179 = v180;
        if ((int32_t)*v166 != -1) {
            goto lab_0x4f993f;
        } else {
            // 0x4f99ab
            v134 = v142;
            v137 = v180;
            v135 = v127;
            v141 = 4;
            v138 = v180;
            v136 = v127;
            v139 = v177;
            if (v180 != 0) {
                goto lab_0x4f99c8;
            } else {
                goto lab_0x4f99b5;
            }
        }
    }
  lab_0x4f993f:
    // 0x4f993f
    *v131 = v179 + 1;
    uint64_t v181 = *v144; // 0x4f9947
    int64_t v182; // 0x4f9457
    int64_t v183; // 0x4f9457
    if (v181 >= *v145) {
        // 0x4f9a10
        v183 = *v167;
        v182 = v181;
        goto lab_0x4f995f;
    } else {
        int64_t v184 = v181 + 4; // 0x4f9957
        *v144 = v184;
        v183 = (int64_t)*(int32_t *)v181;
        v182 = v184;
        goto lab_0x4f995f;
    }
  lab_0x4f995f:;
    int64_t v185 = v182; // 0x4f9968
    v161 = v185;
    int64_t v186; // 0x4f9457
    if ((int32_t)v183 == -1) {
        goto lab_0x4f9a00;
    } else {
        // 0x4f9968
        if (v185 >= *v145) {
            // 0x4f9a20
            v186 = *v167;
            goto lab_0x4f9978;
        } else {
            // 0x4f9976
            v186 = (int64_t)*(int32_t *)v185;
            goto lab_0x4f9978;
        }
    }
  lab_0x4f9978:;
    int64_t v187 = v186;
    int32_t v188 = v187; // 0x4f9978
    v161 = v185;
    if (v188 == -1) {
        goto lab_0x4f9a00;
    } else {
        int64_t v189 = v187 & 0xffffffff; // 0x4f997b
        v162 = v189;
        v163 = v189;
        if (v164 == v188) {
            goto lab_0x4f9a40;
        } else {
            goto lab_0x4f998c_2;
        }
    }
}

// Address range: 0x55cb8f - 0x55cba3
int64_t function_55cb8f(void) {
    // 0x55cb8f
    int64_t v1; // 0x55cb8f
    if (*(int64_t *)(v1 + 16) < v1) {
        function_55caa6();
    }
    // 0x55cb99
    return function_55cb14();
}

// Address range: 0x55cba3 - 0x55d470
int64_t function_55cba3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    // 0x55cba3
    __stack_chk_fail();
    int64_t v1; // 0x55cba3
    int64_t v2 = *(int64_t *)(v1 - 72) - 24; // 0x55cbaf
    if (v2 != (int64_t)g5) {
        // 0x55cbbc
        function_552550(v2, v1 - 64);
    }
    // 0x55cbc5
    _Unwind_Resume((struct _Unwind_Exception *)&g11);
    int64_t v3; // bp-184, 0x55cba3
    int64_t v4 = (int64_t)&v3; // 0x55cbe0
    __readfsqword(40);
    v3 = a7;
    int64_t v5 = function_554b00(a6 + 208); // 0x55cc48
    *(int32_t *)a7 = 0;
    int64_t v6; // 0x55cba3
    int64_t v7; // 0x55cba3
    int64_t v8; // 0x55cba3
    int64_t v9; // 0x55cba3
    int64_t v10; // 0x55cba3
    int64_t v11; // 0x55cba3
    int64_t * v12; // 0x55cc70
    int64_t v13; // 0x55cba3
    int32_t * v14; // 0x55cba3
    int64_t v15; // 0x55cba3
    int64_t * v16; // 0x55cba3
    int64_t * v17; // 0x55cba3
    char * v18; // 0x55cba3
    char * v19; // 0x55cba3
    int64_t * v20; // 0x55cba3
    char * v21; // 0x55cba3
    char * v22; // 0x55cba3
    char * v23; // 0x55cba3
    int64_t * v24; // 0x55cba3
    int32_t * v25; // 0x55cba3
    int64_t * v26; // 0x55cba3
    char * v27; // 0x55cba3
    int64_t * v28; // 0x55cba3
    int64_t v29; // 0x55cba3
    char * v30; // 0x55cba3
    char * v31; // 0x55cba3
    int64_t * v32; // 0x55cba3
    if (a9 != a10) {
        // 0x55cc5e
        v12 = (int64_t *)(v4 + 96);
        v13 = v4 + 104;
        v14 = (int32_t *)v13;
        v15 = v5 + 313;
        v16 = (int64_t *)(v4 + 8);
        v17 = (int64_t *)v5;
        int64_t v33 = v4 + 88;
        v18 = (char *)v33;
        int64_t v34 = v4 + 24;
        v19 = (char *)v34;
        v20 = (int64_t *)(v4 + 16);
        v21 = (char *)(v4 + 94);
        v22 = (char *)(v4 + 93);
        int64_t v35 = v4 + 40;
        v23 = (char *)v35;
        v24 = (int64_t *)v34;
        v25 = (int32_t *)v33;
        v26 = (int64_t *)(v4 + 32);
        v27 = (char *)(v4 + 95);
        v28 = (int64_t *)v35;
        v29 = v4 + 116;
        v30 = (char *)(v4 + 117);
        v31 = (char *)(v4 + 118);
        v32 = (int64_t *)(v5 + 48);
        v10 = a9;
        v6 = a5 & 0xffffffff;
        v8 = a4;
        while (true) {
          lab_0x55cc70:
            // 0x55cc70
            v9 = v8;
            v7 = v6;
            v11 = v10;
            int64_t v36 = *v12; // 0x55cc70
            if (v36 == 0) {
                goto lab_0x55d378;
            } else {
                // 0x55cc7e
                if (*v14 == -1) {
                    uint64_t v37 = *(int64_t *)(v36 + 16); // 0x55d060
                    if (v37 >= *(int64_t *)(v36 + 24)) {
                        int32_t v38 = (int32_t)*(int64_t *)v36;
                        int32_t v39 = v38; // 0x55d369
                        if (v38 != -1) {
                            // 0x55d071
                            *v14 = v39;
                            goto lab_0x55cc89;
                        } else {
                            // 0x55d36f
                            *v12 = 0;
                            goto lab_0x55d378;
                        }
                    } else {
                        // 0x55d071
                        *v14 = (int32_t)*(char *)v37;
                        goto lab_0x55cc89;
                    }
                } else {
                    goto lab_0x55cc89;
                }
            }
        }
      lab_0x55d04d_3:
        // 0x55d04d
        *(int32_t *)v3 = 6;
    }
    goto lab_0x55cf58_2;
  lab_0x55cf58_2:
    // 0x55cf58
    if (*(int64_t *)(v4 + 120) != __readfsqword(40)) {
        // 0x55d45c
        __stack_chk_fail();
        return (int64_t)&g11;
    }
    // 0x55cf76
    return *(int64_t *)(v4 + 96);
  lab_0x55cfe5:;
    char v40 = 1; // 0x55cfee
    int64_t v41; // 0x55cba3
    int64_t v42 = v41; // 0x55cfee
    int64_t v43; // 0x55cba3
    int64_t v44 = v43; // 0x55cfee
    int64_t v45 = v41; // 0x55cfee
    int64_t v46 = 0; // 0x55cfee
    int64_t v47; // 0x55cba3
    if (v47 == 0) {
        // break -> 0x55cf45
        goto lab_0x55cf45_6;
    }
    goto lab_0x55cd2c;
  lab_0x55cd2c:;
    int64_t v48 = v47;
    char v49 = 0; // 0x55cd32
    int64_t v50 = v42; // 0x55cd32
    int64_t v51 = v48; // 0x55cd32
    if ((int32_t)v42 == -1) {
        uint64_t v52 = *(int64_t *)(v48 + 16); // 0x55cf90
        if (v52 >= *(int64_t *)(v48 + 24)) {
            int64_t v53 = *(int64_t *)v48; // 0x55d2a0
            v49 = (int32_t)v53 == -1;
            v50 = v53 & 0xffffffff;
            v51 = (int32_t)v53 != -1 ? v48 : 0;
        } else {
            // 0x55cf9e
            v49 = 0;
            v50 = (int64_t)*(char *)v52;
            v51 = v48;
        }
    }
    int64_t v54 = v50; // 0x55cd3b
    int64_t v55 = v51; // 0x55cd3b
    v44 = v43;
    v45 = v50;
    v46 = v51;
    if (v49 == v40) {
        // break -> 0x55cf45
        goto lab_0x55cf45_6;
    }
    goto lab_0x55cd41;
  lab_0x55cd41:;
    int64_t v56 = v55;
    int64_t v57 = v54;
    int64_t v58 = *v12; // 0x55cd41
    int32_t v59; // 0x55cba3
    int64_t v60; // 0x55cba3
    int64_t v61; // 0x55cba3
    int32_t v62; // 0x55cba3
    int64_t v63; // 0x55cba3
    int64_t v64; // 0x55cba3
    if (v58 == 0) {
        goto lab_0x55d318;
    } else {
        int32_t v65 = *v14; // 0x55cd4f
        v62 = v65;
        v64 = v58;
        v60 = v57;
        v61 = v56;
        if (v65 == -1) {
            uint64_t v66 = *(int64_t *)(v58 + 16); // 0x55cfb0
            uint64_t v67 = *(int64_t *)(v58 + 24); // 0x55cfb4
            if (v66 >= v67) {
                int64_t v68 = *(int64_t *)v58; // 0x55d300
                int32_t v69 = v68;
                v59 = v69;
                v63 = v68;
                if (v69 != -1) {
                    goto lab_0x55cfc1;
                } else {
                    // 0x55d30f
                    *v12 = 0;
                    goto lab_0x55d318;
                }
            } else {
                unsigned char v70 = *(char *)v66; // 0x55cfbe
                v59 = v70;
                v63 = v70;
                goto lab_0x55cfc1;
            }
        } else {
            goto lab_0x55cd5c;
        }
    }
  lab_0x55cd5c:;
    int64_t v71 = v64; // 0x55cd68
    int64_t v72 = v60; // 0x55cd68
    int64_t v73 = v61; // 0x55cd68
    v44 = v43;
    v45 = v60;
    v46 = v61;
    if ((*(char *)((2 * (int64_t)v62 & 510 | 1) + *v32) & 32) == 0) {
        // break -> 0x55cf45
        goto lab_0x55cf45_6;
    }
    goto lab_0x55cd6e;
  lab_0x55d318:;
    int64_t v78 = 0; // 0x55d323
    int64_t v79 = v57; // 0x55d323
    int64_t v80 = v56; // 0x55d323
    v44 = v43;
    v45 = v57;
    v46 = v56;
    if ((*(char *)(*v32 + 511) & 32) == 0) {
        // break -> 0x55cf45
        goto lab_0x55cf45_6;
    }
    goto lab_0x55cd8c;
  lab_0x55cd6e:;
    int64_t v74 = v71;
    int64_t * v75 = (int64_t *)(v74 + 16); // 0x55cd6e
    uint64_t v76 = *v75; // 0x55cd6e
    int64_t v77; // 0x55cba3
    if (v76 >= *(int64_t *)(v74 + 24)) {
        // 0x55d138
        v77 = *v12;
    } else {
        // 0x55cd7c
        *v75 = v76 + 1;
        v77 = v74;
    }
    // 0x55cd84
    *v14 = -1;
    v78 = v77;
    v79 = v72;
    v80 = v73;
    goto lab_0x55cd8c;
  lab_0x55cdad:;
    // 0x55cdad
    int32_t v88; // 0x55cba3
    *v14 = v88;
    v54 = v41;
    v55 = v47;
    if (v47 != 0) {
        goto lab_0x55cd2c;
    } else {
        goto lab_0x55cd41;
    }
  lab_0x55cd8c:;
    int64_t v81 = v78; // 0x55cba3
    int64_t v82 = v79; // 0x55cba3
    int64_t v83 = v80; // 0x55cba3
    goto lab_0x55cd8c_2;
  lab_0x55cfc1:;
    int64_t v89 = v63;
    int32_t v90 = v59;
    int64_t v91 = *v32; // 0x55cfc1
    *v14 = v90;
    char v92 = *(char *)(v91 + 1 + (2 * v89 & 510)); // 0x55cfcc
    v44 = v43;
    v45 = v57;
    v46 = v56;
    if ((v92 & 32) == 0) {
        // break -> 0x55cf45
        goto lab_0x55cf45_6;
    }
    int64_t v93 = *v12; // 0x55cfd7
    v71 = v93;
    v72 = v57;
    v73 = v56;
    if (v93 != 0) {
        goto lab_0x55cd6e;
    } else {
        goto lab_0x55cfe5;
    }
  lab_0x55d378:;
    char v94 = 1; // 0x55d37b
    if (v9 == 0) {
        // break -> 0x55d04d
        goto lab_0x55d04d_3;
    }
    goto lab_0x55cc91;
  lab_0x55cc91:;
    char v95 = v94;
    char v96 = 0; // 0x55cc97
    int64_t v97 = v7; // 0x55cc97
    int64_t v98 = v9; // 0x55cc97
    int64_t v99; // 0x55cba3
    if ((int32_t)v7 == -1) {
        uint64_t v100 = *(int64_t *)(v9 + 16); // 0x55d030
        if (v100 >= *(int64_t *)(v9 + 24)) {
            int64_t v101 = *(int64_t *)v9; // 0x55d338
            int64_t v102 = v101 & 0xffffffff; // 0x55d344
            v96 = 1;
            v97 = v102;
            v98 = 0;
            v99 = v102;
            if ((int32_t)v101 != -1) {
                goto lab_0x55d042;
            } else {
                goto lab_0x55cc9d;
            }
        } else {
            // 0x55d03e
            v99 = (int64_t)*(char *)v100;
            goto lab_0x55d042;
        }
    } else {
        goto lab_0x55cc9d;
    }
  lab_0x55cc89:
    // 0x55cc89
    v94 = 0;
    int64_t v103 = v7; // 0x55cc8c
    int64_t v104 = 0; // 0x55cc8c
    if (v9 == 0) {
        goto lab_0x55cca6;
    } else {
        goto lab_0x55cc91;
    }
  lab_0x55cc9d:
    // 0x55cc9d
    v103 = v97;
    v104 = v98;
    if (v96 == v95) {
        // break -> 0x55d04d
        goto lab_0x55d04d_3;
    }
    goto lab_0x55cca6;
  lab_0x55cca6:;
    int64_t v105 = v104;
    int64_t v106 = v103;
    char * v107 = (char *)v11; // 0x55cca6
    unsigned char v108 = *v107; // 0x55cca6
    int64_t v109 = v108; // 0x55cca6
    char * v110 = (char *)(v15 + v109); // 0x55ccab
    unsigned char v111 = *v110; // 0x55ccab
    int64_t v112 = v111; // 0x55ccb9
    char v113; // 0x55cba3
    if (v111 == 0) {
        // 0x55d000
        v113 = 0;
        if (v108 == 0) {
            goto lab_0x55ccc8;
        } else {
            // 0x55d01c
            *v110 = v108;
            v112 = v109;
            goto lab_0x55ccbf;
        }
    } else {
        goto lab_0x55ccbf;
    }
  lab_0x55ccbf:;
    // 0x55ccbf
    char v114; // 0x55cba3
    int64_t v115; // 0x55cba3
    int64_t v116; // 0x55cba3
    int64_t v117; // 0x55cba3
    if (v112 == 37) {
        int64_t v118 = v11 + 1; // 0x55cdc0
        *v16 = v118;
        if (v118 == a10) {
            // 0x55d3cb
            *(int32_t *)v3 = 4;
            goto lab_0x55cf58_2;
        }
        int64_t v119 = (int64_t)*(char *)v118; // 0x55cdd2
        char * v120 = (char *)(v15 + v119); // 0x55cdd7
        unsigned char v121 = *v120; // 0x55cdd7
        if (v121 == 0) {
            int64_t v122 = *(int64_t *)(*v17 + 64); // 0x55d153
            int64_t v123 = v119; // 0x55d15e
            if (v122 != g6) {
                // 0x55d390
                *v18 = 37;
                v123 = v122 & 0xffffffff;
            }
            int64_t v124 = v123;
            char v125 = v124;
            v117 = v124;
            v116 = 0;
            if (v125 == 0) {
                goto lab_0x55ce25;
            } else {
                // 0x55d16c
                *v120 = v125;
                v114 = v125;
                v115 = v124;
                goto lab_0x55cdec;
            }
        } else {
            // 0x55cdd2
            v114 = v121;
            v115 = v121;
            goto lab_0x55cdec;
        }
    } else {
        // 0x55ccbf
        v113 = *v107;
        goto lab_0x55ccc8;
    }
  lab_0x55d042:
    // 0x55d042
    v103 = v99;
    v104 = v9;
    if (v95 == 0) {
        // break -> 0x55d04d
        goto lab_0x55d04d_3;
    }
    goto lab_0x55cca6;
  lab_0x55ccc8:;
    int64_t v126 = *v12; // 0x55ccd0
    int64_t v127 = *v32 + 1; // 0x55ccd5
    int64_t v128; // 0x55cba3
    int64_t v129; // 0x55cba3
    if ((*(char *)(v127 + 2 * (int64_t)v113) & 32) == 0) {
        if (v126 == 0) {
            goto lab_0x55d10f;
        } else {
            // 0x55d089
            v128 = v126;
            if (*v14 == -1) {
                uint64_t v130 = *(int64_t *)(v126 + 16); // 0x55d1d0
                if (v130 >= *(int64_t *)(v126 + 24)) {
                    int64_t v131 = *(int64_t *)v126; // 0x55d415
                    v129 = v131 & 0xffffffff;
                    if ((int32_t)v131 != -1) {
                        goto lab_0x55d0e7;
                    } else {
                        // 0x55d0e7
                        *v12 = 0;
                        goto lab_0x55d10f;
                    }
                } else {
                    // 0x55d1de
                    v129 = (int64_t)*(char *)v130;
                    goto lab_0x55d0e7;
                }
            } else {
                goto lab_0x55d0f1;
            }
        }
    } else {
        int64_t v132 = v11 + 1; // 0x55cce0
        int64_t v133 = a10; // 0x55cce7
        if (v132 != a10) {
            // 0x55cced
            v133 = v132;
            if ((*(char *)(2 * (int64_t)*(char *)v132 + v127) & 32) != 0) {
                int64_t v134; // 0x55cba3
                int64_t v135 = v134 + 1; // 0x55cd0f
                v133 = v135;
                while (v135 != a10) {
                    unsigned char v136 = *(char *)v135; // 0x55cd00
                    char v137 = *(char *)(2 * (int64_t)v136 + v127); // 0x55cd04
                    v134 = v135;
                    v133 = v135;
                    if ((v137 & 32) == 0) {
                        // break -> 0x55cd8c
                        break;
                    }
                    int64_t v138 = v134;
                    v135 = v138 + 1;
                    v133 = v135;
                }
            }
        }
        // 0x55cd8c
        v43 = v133;
        v81 = v126;
        v82 = v106;
        v83 = v105;
        while (true) {
          lab_0x55cd8c_2:
            // 0x55cd8c
            v47 = v83;
            v41 = v82;
            int64_t v84 = v81;
            if (v84 == 0) {
                goto lab_0x55cfe5;
            } else {
                int32_t v85 = *v14; // 0x55cd95
                if (v85 != -1) {
                    // 0x55cd20
                    v40 = 0;
                    v42 = v41;
                    v62 = v85;
                    v64 = v84;
                    v60 = v41;
                    v61 = 0;
                    if (v47 == 0) {
                        goto lab_0x55cd5c;
                    } else {
                        goto lab_0x55cd2c;
                    }
                } else {
                    uint64_t v86 = *(int64_t *)(v84 + 16); // 0x55cd9c
                    if (v86 >= *(int64_t *)(v84 + 24)) {
                        int32_t v87 = (int32_t)*(int64_t *)v84;
                        v88 = v87;
                        if (v87 != -1) {
                            goto lab_0x55cdad;
                        } else {
                            // 0x55d2d7
                            *v12 = 0;
                            goto lab_0x55cfe5;
                        }
                    } else {
                        // 0x55cdaa
                        v88 = (int32_t)*(char *)v86;
                        goto lab_0x55cdad;
                    }
                }
            }
        }
        goto lab_0x55cf45_6;
    }
  lab_0x55d10f:
    // 0x55d10f
    v44 = v11 + 1;
    v45 = v106;
    v46 = v105;
    goto lab_0x55cf45_6;
  lab_0x55cf45_6:
    // 0x55cf45
    if (v44 == a10) {
        goto lab_0x55cf58_2;
    }
    // 0x55cf4a
    v10 = v44;
    v6 = v45;
    v8 = v46;
    if (*(int32_t *)v3 != 0) {
        goto lab_0x55cf58_2;
    }
    goto lab_0x55cc70;
  lab_0x55ce25:;
    uint64_t v139 = *v20; // 0x55ce34
    int64_t v140 = v139 < 0xffffffff00000001 ? v139 : v139 + 0xffffffff; // 0x55ce34
    *v21 = (char)v116;
    *v22 = 37;
    *v23 = (char)v117;
    *v24 = *v12;
    uint64_t v141 = *(int64_t *)v13; // 0x55ce54
    *v25 = *v14;
    int64_t v142 = v106 & 0xffffffff; // 0x55ce5d
    *v26 = v142;
    *v20 = v140 | v142;
    int64_t v143 = function_554b00(*(int64_t *)(v4 + 48)); // 0x55ce6d
    char v144 = *v23; // 0x55ce76
    char v145 = *v22; // 0x55ce7b
    char v146 = *v21; // 0x55ce80
    *(int32_t *)v3 = 0;
    char v147; // 0x55cba3
    int64_t v148; // 0x55cba3
    char v149; // 0x55cba3
    if (*(char *)(v143 + 56) == 0) {
        // 0x55d200
        *v27 = v146;
        *v21 = v145;
        *v22 = v144;
        *v28 = v143;
        function_54d560(v143, v3, v144, v145);
        int64_t v150 = *v28; // 0x55d21a
        char v151 = *v22; // 0x55d21f
        char v152 = *v27; // 0x55d229
        v148 = (int64_t)*v21;
        v149 = v151;
        v147 = v152;
        if (*(int64_t *)(*(int64_t *)v150 + 48) != g7) {
            // 0x55d243
            *v22 = v152;
            *v23 = v151;
            v148 = v150 & 0xffffffff;
            v149 = v151;
            v147 = *v22;
        }
    } else {
        // 0x55ce96
        v148 = (int64_t)*(char *)(v143 + 94);
        v149 = v144;
        v147 = v146;
    }
    char v153 = v147;
    char v154 = v149;
    *(char *)v29 = (char)v148;
    if (v153 != 0) {
        // 0x55d120
        *v30 = v153;
        *v31 = v154;
        *(char *)(v4 + 119) = 0;
    } else {
        // 0x55cea7
        *v30 = v154;
        *v31 = 0;
    }
    uint32_t v155 = *v25; // 0x55ceb0
    int64_t v156 = v155; // 0x55ceb0
    int64_t v157 = v141 < 0xffffffff00000001 ? v141 : v141 + 0xffffffff; // 0x55cec2
    *(int64_t *)(v4 - 16) = v29;
    *(int64_t *)(v4 - 24) = *(int64_t *)(v4 + 72);
    *(int64_t *)(v4 - 32) = v3;
    int64_t v158 = *(int64_t *)(v4 + 64); // 0x55cee4
    int64_t v159 = *(int64_t *)(v4 + 56); // 0x55ceee
    int64_t v160 = function_55a5d0(v159, *v24, v157 | v156, v105, *v26 | v140, v158); // 0x55cef3
    int64_t v161; // 0x55cba3
    if (v160 == 0) {
        goto lab_0x55d434;
    } else {
        // 0x55cf0b
        v161 = v156;
        if (v155 == -1) {
            uint64_t v162 = *(int64_t *)(v160 + 16); // 0x55d1b0
            if (v162 >= *(int64_t *)(v160 + 24)) {
                int64_t v163 = *(int64_t *)v160; // 0x55d3ff
                if ((int32_t)v163 == -1) {
                    goto lab_0x55d434;
                } else {
                    // 0x55d40d
                    v161 = v163 & 0xffffffff;
                    goto lab_0x55cf14;
                }
            } else {
                // 0x55d1be
                v161 = (int64_t)*(char *)v162;
                goto lab_0x55cf14;
            }
        } else {
            goto lab_0x55cf14;
        }
    }
  lab_0x55cdec:;
    int64_t v164 = v115;
    char v165 = v114;
    v117 = v164;
    v116 = 0;
    if (v165 != 69 != v165 != 79) {
        int64_t v166 = v11 + 2; // 0x55cdfc
        *v16 = v166;
        if (v166 == a10) {
            // 0x55d3cb
            *(int32_t *)v3 = 4;
            goto lab_0x55cf58_2;
        }
        unsigned char v167 = *(char *)v166; // 0x55ce0e
        int64_t v168 = v167; // 0x55ce0e
        char * v169 = (char *)(v15 + v168); // 0x55ce12
        unsigned char v170 = *v169; // 0x55ce12
        v117 = v170;
        v116 = v164;
        if (v170 == 0) {
            int64_t v171 = v164; // 0x55d27e
            if (*(int64_t *)(*v17 + 64) != g6) {
                // 0x55d3da
                *v19 = v165;
                *v18 = 37;
                v171 = (int64_t)*v19;
            }
            int64_t v172 = v171;
            v117 = 0;
            v116 = v172;
            if (v167 != 0) {
                // 0x55d28e
                *v169 = v167;
                v117 = v168;
                v116 = v172;
            }
        }
    }
    goto lab_0x55ce25;
  lab_0x55d0f1:;
    int64_t * v173 = (int64_t *)(v128 + 16); // 0x55d0f1
    uint64_t v174 = *v173; // 0x55d0f1
    if (v174 < *(int64_t *)(v128 + 24)) {
        // 0x55d0ff
        *v173 = v174 + 1;
    }
    // 0x55d107
    *v14 = -1;
    goto lab_0x55d10f;
  lab_0x55d434:;
    int64_t v175 = 0; // 0x55d439
    int64_t v176 = v156; // 0x55d439
    char v177 = 1; // 0x55d439
    int64_t v178 = 0; // 0x55d439
    int64_t v179 = v156; // 0x55d439
    if (v105 == 0) {
        goto lab_0x55cf2b;
    } else {
        goto lab_0x55cf1b;
    }
  lab_0x55cf2b:;
    int32_t * v180 = (int32_t *)v3; // 0x55cf2f
    *v180 = *v180 | 2;
    int64_t v181 = v178; // 0x55cf2f
    int64_t v182 = v179; // 0x55cf2f
    goto lab_0x55cf32;
  lab_0x55cf1b:;
    char v183 = v177;
    char v184 = 0; // 0x55cf21
    if ((int32_t)v106 == -1) {
        // 0x55d180
        v184 = 0;
        if (*(int64_t *)(v105 + 16) >= *(int64_t *)(v105 + 24)) {
            // 0x55d18e
            *v18 = v183;
            v184 = (int32_t)*(int64_t *)v105 == -1;
        }
    }
    // 0x55cf27
    v178 = v175;
    v179 = v176;
    v181 = v175;
    v182 = v176;
    if (v183 != v184) {
        goto lab_0x55cf32;
    } else {
        goto lab_0x55cf2b;
    }
  lab_0x55cf14:
    // 0x55cf14
    v175 = v160;
    v176 = v161;
    v177 = 0;
    v181 = v160;
    v182 = v161;
    if (v105 == 0) {
        goto lab_0x55cf32;
    } else {
        goto lab_0x55cf1b;
    }
  lab_0x55d0e7:
    // 0x55d0e7
    *v14 = (int32_t)v129;
    int64_t v185 = *v12;
    v128 = v185;
    if (v185 == 0) {
        goto lab_0x55d10f;
    } else {
        goto lab_0x55d0f1;
    }
  lab_0x55cf32:
    // 0x55cf32
    *v12 = v181;
    *v14 = (int32_t)v182;
    v44 = *v16 + 1;
    v45 = v106;
    v46 = v105;
    goto lab_0x55cf45_6;
}
