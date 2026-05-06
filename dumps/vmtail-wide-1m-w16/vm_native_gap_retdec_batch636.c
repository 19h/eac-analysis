/*
 * Targeted RetDec C for native executable gap queue batch 636.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x277041-0x277241 rank=- name=- kind=- bytes=- uncovered=-
 *   0x277241-0x277441 rank=- name=- kind=- bytes=- uncovered=-
 *   0x277441-0x277641 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f6b9e-0x3f6d9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x42f893-0x42fa93 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42fc93-0x42fe93 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42fe93-0x430093 rank=- name=- kind=- bytes=- uncovered=-
 *   0x430093-0x430293 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_254f998e();
int64_t function_277041(void);
int64_t function_277044(int64_t a1);
int64_t function_27708b(void);
int64_t function_2770b1(void);
int64_t function_2770b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2770ed(void);
int64_t function_2770f2(void);
int64_t function_277103(void);
int64_t function_27710f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_277150(void);
int64_t function_2771d2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2771f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_277217(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_277232(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27728a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27729f(void);
int64_t function_2772aa(int64_t a1);
int64_t function_2772f6(void);
int64_t function_277320(int64_t a1);
int64_t function_27733e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27734d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_277377(void);
int64_t function_277378(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27738e(void);
int64_t function_277396(void);
int64_t function_277397(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2773ac(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_2773ae(void);
int64_t function_2773c8(void);
int64_t function_2773cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_277490(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_277584(void);
int64_t function_2775d1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_35601991();
int64_t function_3f6b9e(void);
int64_t function_3f6bb9(void);
int64_t function_3f6bea(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f6c61(void);
int64_t function_3f6c67(int64_t a1);
int64_t function_3f6c82(int64_t a1);
int64_t function_3f6d25(int64_t a1);
int64_t function_3f6d49(void);
int64_t function_3f6d8a(int64_t a1, int64_t a2);
int64_t function_42f83f();
int64_t function_42f893(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_42f96f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_42f99e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_42f9ce(void);
int64_t function_42f9f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42fa89(void);
int64_t function_42fc86();
int64_t function_42fc93(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42fcb5(int64_t a1);
int64_t function_42fcc4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42fce2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_42fcf4(int64_t a1, int64_t a2);
int64_t function_42fcff(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42fd2f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_42fd47(void);
int64_t function_42fd4a(void);
int64_t function_42fd62(int64_t a1, int64_t a2, int64_t a3);
int64_t function_42fd70(void);
int64_t function_42fd8d(void);
int64_t function_42fdbe(void);
int64_t function_42fdc4(void);
int64_t function_42fe08(int64_t a1, int64_t a2, int64_t a3);
int64_t function_42fe0f(void);
int64_t function_42fe3a(int64_t a1);
int64_t function_42fe4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_42fe5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_42fe71(int64_t a1);
int64_t function_42fe74(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42feb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42fed1(void);
int64_t function_42fef3(void);
int64_t function_42ff9b(void);
int64_t function_42ffc1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_42fffd(void);
int64_t function_43001f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4300ca(int64_t a1);
int64_t function_4300d1(void);
int64_t function_4300f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_43011e(int64_t a1);
int64_t function_430152(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_4301bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4301e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_430288(int64_t a1, int64_t a2, int64_t a3);
int64_t function_440d79ab();
int64_t function_762d72df();
int64_t function_ffffffff82112b0f();
int64_t function_ffffffffbd19d914();
int64_t function_ffffffffcb777d96();
int64_t function_ffffffffe8e176bc();
int64_t unknown_125b121f();
int64_t unknown_4a68bcbf();
int64_t unknown_98a3922();
int64_t unknown_ffffffff9bf2784b();
int64_t unknown_ffffffffc57d6815();
int64_t unknown_ffffffffcde373e5();
int64_t unknown_ffffffffda1aa538();

// Address range: 0x277041 - 0x277043
int64_t function_277041(void) {
    // 0x277041
    int64_t result; // 0x277041
    return result;
}

// Address range: 0x277044 - 0x27704d
int64_t function_277044(int64_t a1) {
    // 0x277044
    bool v1; // 0x277044
    return unknown_ffffffff9bf2784b((v1 ? -1 : 1) + a1);
}

// Address range: 0x27708b - 0x27708f
int64_t function_27708b(void) {
    // 0x27708b
    int64_t result; // 0x27708b
    return result;
}

// Address range: 0x2770b1 - 0x2770b2
int64_t function_2770b1(void) {
    // 0x2770b1
    int64_t result; // 0x2770b1
    return result;
}

// Address range: 0x2770b4 - 0x2770be
int64_t function_2770b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2770b4
    return a4 & 0xffffffff;
}

// Address range: 0x2770ed - 0x2770ee
int64_t function_2770ed(void) {
    // 0x2770ed
    int64_t result; // 0x2770ed
    return result;
}

// Address range: 0x2770f2 - 0x2770f7
int64_t function_2770f2(void) {
    // 0x2770f2
    return function_762d72df();
}

// Address range: 0x277103 - 0x277105
int64_t function_277103(void) {
    // 0x277103
    return function_2770ed();
}

// Address range: 0x27710f - 0x27713c
int64_t function_27710f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27710f
    unknown_ffffffffc57d6815();
    bool v1; // 0x27710f
    int64_t v2 = v1 ? -1 : 1; // 0x277114
    int64_t v3 = v2 + a2 + (v1 ? -4 : 4); // 0x277118
    int64_t v4; // 0x27710f
    *(int32_t *)-0x7fd0ee5 = (int32_t)v4;
    *(char *)v3 = (char)a4;
    int32_t * v5 = (int32_t *)(a4 - 0x5800f3bc); // 0x27712c
    int32_t v6 = v2 + a1 + v3; // 0x27712c
    *v5 = *v5 + v6;
    unknown_ffffffffda1aa538(v6, v3);
    return function_ffffffffe8e176bc();
}

// Address range: 0x277150 - 0x277151
int64_t function_277150(void) {
    // 0x277150
    int64_t result; // 0x277150
    return result;
}

// Address range: 0x2771d2 - 0x2771d7
int64_t function_2771d2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2771d2
    int64_t result; // 0x2771d2
    __asm_out((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x2771f7 - 0x277216
int64_t function_2771f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2771f7
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result = unknown_ffffffffcde373e5(); // 0x2771f8
    *(char *)0xa173a8280015e0c = (char)result;
    int32_t * v1 = (int32_t *)(a4 - 8); // 0x277209
    uint32_t v2 = *v1; // 0x277209
    int64_t v3; // 0x2771f7
    uint32_t v4 = v2 + (int32_t)(int64_t)&v3; // 0x277209
    *v1 = v4;
    int64_t v5; // 0x2771f7
    int32_t * v6 = (int32_t *)(v5 + 0xd51f29c); // 0x27720c
    *v6 = *v6 + (int32_t)v5 + (int32_t)(v4 < v2);
    return result;
}

// Address range: 0x277217 - 0x277221
int64_t function_277217(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x277217
    int64_t v1; // 0x277217
    int64_t v2 = v1;
    bool v3; // 0x277217
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a4 + (int32_t)v3;
    return unknown_125b121f(a1, a2, a3, a4);
}

// Address range: 0x277232 - 0x277237
int64_t function_277232(int64_t a1, int64_t a2, int64_t a3) {
    // 0x277232
    int64_t result; // 0x277232
    return result;
}

// Address range: 0x27728a - 0x27729a
int64_t function_27728a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27728a
    int64_t result; // 0x27728a
    *(int32_t *)(result + 8 * a4) = (int32_t)result;
    return result;
}

// Address range: 0x27729f - 0x2772a2
int64_t function_27729f(void) {
    // 0x27729f
    int64_t result; // 0x27729f
    return result;
}

// Address range: 0x2772aa - 0x2772ad
int64_t function_2772aa(int64_t a1) {
    // 0x2772aa
    int64_t result; // 0x2772aa
    return result;
}

// Address range: 0x2772f6 - 0x2772f8
int64_t function_2772f6(void) {
    // 0x2772f6
    int64_t v1; // 0x2772f6
    return function_27734d(v1, v1, v1, v1);
}

// Address range: 0x277320 - 0x277321
int64_t function_277320(int64_t a1) {
    // 0x277320
    int64_t result; // 0x277320
    return result;
}

// Address range: 0x27733e - 0x277349
int64_t function_27733e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27733e
    int64_t v1; // 0x27733e
    *(char *)(v1 + 0x3d08eefa) = (char)a3;
    bool v2; // 0x27733e
    return 2 * v1 & 0xfffffffe | (int64_t)v2;
}

// Address range: 0x27734d - 0x277364
int64_t function_27734d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)0x1f666254; // 0x27734d
    int64_t v2; // 0x27734d
    unsigned char v3 = v1 + (char)((uint64_t)v2 / 256); // 0x27734d
    *(char *)0x1f666254 = v3;
    int64_t v4 = __asm_wait(); // 0x277353
    if (v3 < v1 || v3 == 0) {
        // 0x27735f
        __asm_hlt();
        return __asm_hlt();
    }
    // 0x277356
    return v4 + 33 & 175 | v4 & 0xe8b69b00;
}

// Address range: 0x277377 - 0x277378
int64_t function_277377(void) {
    // 0x277377
    int64_t result; // 0x277377
    return result;
}

// Address range: 0x277378 - 0x27737d
int64_t function_277378(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x277378
    int64_t result; // 0x277378
    *(int32_t *)a4 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x27738e - 0x277396
int64_t function_27738e(void) {
    // 0x27738e
    int64_t v1; // 0x27738e
    *(int32_t *)0x2555780b = *(int32_t *)0x2555780b + (int32_t)v1;
    return function_277377();
}

// Address range: 0x277396 - 0x277397
int64_t function_277396(void) {
    // 0x277396
    int64_t result; // 0x277396
    return result;
}

// Address range: 0x277397 - 0x27739e
int64_t function_277397(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x277397
    int64_t v1; // 0x277397
    int32_t * v2 = (int32_t *)(v1 + 76); // 0x277399
    *v2 = *v2 + (int32_t)v1;
    return function_2773ae();
}

// Address range: 0x2773ac - 0x2773ae
int64_t function_2773ac(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x2773ac
    int64_t v1; // 0x2773ac
    return v1 | a3 % 256;
}

// Address range: 0x2773ae - 0x2773be
int64_t function_2773ae(void) {
    // 0x2773ae
    return unknown_4a68bcbf(0xbd01e89b);
}

// Address range: 0x2773c8 - 0x2773c9
int64_t function_2773c8(void) {
    // 0x2773c8
    int64_t result; // 0x2773c8
    return result;
}

// Address range: 0x2773cd - 0x2773db
int64_t function_2773cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2773cd
    int64_t result; // 0x2773cd
    __asm_out_133(-24, (int32_t)result);
    int32_t * v1 = (int32_t *)(a3 + 104); // 0x2773d0
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x277490 - 0x277529
int64_t function_277490(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x277490
    int64_t result; // 0x277490
    char * v1 = (char *)(result - 57); // 0x277495
    char v2 = *v1 + (char)a4; // 0x277495
    *v1 = v2;
    if (v2 >= 1) {
        // 0x27749a
        return result;
    }
    uint32_t v3 = *(int32_t *)0x1028951d; // 0x277516
    uint32_t v4 = v3 + (int32_t)a1; // 0x277516
    *(int32_t *)0x1028951d = v4;
    int64_t v5 = unknown_98a3922(); // 0x27751c
    uint32_t v6 = (int32_t)result; // 0x277521
    int32_t v7 = v4 < v3; // 0x277521
    int32_t v8 = v6 + 0x2d0054bf + v7; // 0x277521
    unsigned char v9 = llvm_ctpop_i8((char)v8); // 0x277521
    bool v10 = v4 < v3 ? v8 <= v6 : v6 > 0xd2ffab40; // 0x277521
    return v5 & -0xff01 | 256 * (16 * (int64_t)(v6 % 16 + 15 + v7 > 15) | (int64_t)v10 | 64 * (int64_t)(v8 == 0) | 128 * (int64_t)(v8 < 0) | 4 * (int64_t)(v9 % 2 == 0)) | 512;
}

// Address range: 0x277584 - 0x277590
int64_t function_277584(void) {
    char v1 = *(char *)-0x1b139374; // 0x277585
    int64_t v2; // 0x277584
    *(char *)-0x1b139374 = v1 + (char)((uint64_t)v2 / 256);
    return function_ffffffffbd19d914();
}

// Address range: 0x2775d1 - 0x2775d5
int64_t function_2775d1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2775d1
    int64_t result; // 0x2775d1
    return result;
}

// Address range: 0x3f6b9e - 0x3f6b9f
int64_t function_3f6b9e(void) {
    // 0x3f6b9e
    int64_t result; // 0x3f6b9e
    return result;
}

// Address range: 0x3f6bb9 - 0x3f6bbe
int64_t function_3f6bb9(void) {
    // 0x3f6bb9
    return function_ffffffffcb777d96();
}

// Address range: 0x3f6bea - 0x3f6bef
int64_t function_3f6bea(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3f6bea
    int64_t result; // 0x3f6bea
    *(int32_t *)a3 = 0x1000000 * (int32_t)result;
    return result;
}

// Address range: 0x3f6c61 - 0x3f6c66
int64_t function_3f6c61(void) {
    // 0x3f6c61
    return function_254f998e();
}

// Address range: 0x3f6c67 - 0x3f6c69
int64_t function_3f6c67(int64_t a1) {
    // 0x3f6c67
    int64_t result; // 0x3f6c67
    return result;
}

// Address range: 0x3f6c82 - 0x3f6c85
int64_t function_3f6c82(int64_t a1) {
    // 0x3f6c82
    int64_t result; // 0x3f6c82
    return result;
}

// Address range: 0x3f6d25 - 0x3f6d2d
int64_t function_3f6d25(int64_t a1) {
    // 0x3f6d25
    return function_35601991();
}

// Address range: 0x3f6d49 - 0x3f6d4c
int64_t function_3f6d49(void) {
    // 0x3f6d49
    int64_t result; // 0x3f6d49
    return result;
}

// Address range: 0x3f6d8a - 0x3f6d91
int64_t function_3f6d8a(int64_t a1, int64_t a2) {
    // 0x3f6d8a
    *(char *)(a1 + 21) = -1;
    int64_t v1; // 0x3f6d8a
    return v1 ^ 33;
}

// Address range: 0x42f893 - 0x42f968
int64_t function_42f893(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x42f893
    bool v1; // 0x42f893
    if (v1) {
        function_42f83f();
    }
    int64_t v2 = 0x100000000 * a1 >> 32; // 0x42f893
    int32_t * v3 = (int32_t *)(a6 + 126); // 0x42f89b
    *v3 = -1 - *v3;
    if (v1 == (-0x4fa9de76 * v2 != -0x4fa9de7600000000 * v2 >> 32) != !v1) {
        // 0x42f8b0
        return __asm_sti();
    }
    uint64_t v4 = (int64_t)*(int32_t *)0x7e0798126d55d508; // 0x42f8a1
    int64_t v5; // 0x42f893
    int64_t result = v4 & 0xffffff00 | (int64_t)*(char *)(v4 % 256 + v5); // 0x42f92c
    if (v1) {
        // 0x42f95f
        return result;
    }
    // 0x42f930
    *(char *)result = (char)(a3 / 256);
    return result;
}

// Address range: 0x42f96f - 0x42f985
int64_t function_42f96f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x42f96f
    int64_t v1; // 0x42f96f
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 & -20;
    return v1 & -256 | (int64_t)*(char *)-0x1a07b236b246a74c;
}

// Address range: 0x42f99e - 0x42f9a3
int64_t function_42f99e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x42f99e
    int64_t v1; // 0x42f99e
    return function_42f99e(a1, a5, a3, v1 & 0xffffffff, (int64_t)&g3);
}

// Address range: 0x42f9ce - 0x42f9cf
int64_t function_42f9ce(void) {
    // 0x42f9ce
    int64_t result; // 0x42f9ce
    return result;
}

// Address range: 0x42f9f4 - 0x42fa86
int64_t function_42f9f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42f9f4
    *(char *)a1 = __asm_insb((int16_t)a3);
    uint32_t v1 = *(int32_t *)0x2c53a911ded59f00 | 0x1cba0740; // 0x42fa06
    unsigned char v2 = llvm_ctpop_i8((char)v1); // 0x42fa06
    int64_t result = v1; // 0x42fa0b
    if (v2 % 2 != 0) {
        result = function_42f9ce();
    }
    // 0x42fa10
    return result;
}

// Address range: 0x42fa89 - 0x42fa8e
int64_t function_42fa89(void) {
    // 0x42fa89
    return function_ffffffff82112b0f();
}

// Address range: 0x42fc93 - 0x42fcb4
int64_t function_42fc93(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)*(int32_t *)(a1 + 38); // 0x42fc93
    int64_t v2 = -65 * v1; // 0x42fc93
    int64_t v3 = v2 + 0xf05b0589 + (int64_t)(v2 != -0x4100000000 * v1 >> 32); // 0x42fc98
    int32_t * v4 = (int32_t *)(a3 + 53); // 0x42fc9d
    *v4 = 2 * *v4;
    int64_t v5; // 0x42fc93
    uint32_t v6 = *(int32_t *)&v5; // 0x42fca0
    uint32_t v7 = (int32_t)v3; // 0x42fca0
    int32_t * v8 = (int32_t *)(v3 & 0xffffffff); // 0x42fca2
    uint32_t v9 = *v8; // 0x42fca2
    uint32_t v10 = v9 + (int32_t)a2; // 0x42fca2
    uint32_t v11 = v10 + (int32_t)(v6 < v7); // 0x42fca2
    *v8 = v11;
    int64_t v12; // 0x42fc93
    int32_t v13 = *(int32_t *)&v12; // 0x42fca6
    int64_t v14 = (int64_t)(v7 / 0x80000000); // 0x42fcac
    v12 = v14;
    unsigned char v15 = -122 * (char)v13 & 30; // 0x42fcad
    if (v15 != 0) {
        int64_t v16; // 0x42fc93
        char * v17 = (char *)(v16 - 8 + 2 * v14); // 0x42fcad
        unsigned char v18 = *v17; // 0x42fcad
        *v17 = v18 << 8 - v15 | v18 >> v15;
    }
    int64_t v19 = v6 < v7 ? v11 <= v9 : v10 < v9 ? 203 : 202; // 0x42fca4
    return (v3 - v19) % 256 | v3 & 0xffffff00;
}

// Address range: 0x42fcb5 - 0x42fcb6
int64_t function_42fcb5(int64_t a1) {
    // 0x42fcb5
    int64_t result; // 0x42fcb5
    return result;
}

// Address range: 0x42fcc4 - 0x42fcd2
int64_t function_42fcc4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42fcc4
    float80_t v1; // 0x42fcc4
    *(int16_t *)(a2 - 0x46e1bfb7) = (int16_t)v1;
    int64_t result; // 0x42fcc4
    return result;
}

// Address range: 0x42fce2 - 0x42fce7
int64_t function_42fce2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x42fce2
    int64_t v1; // 0x42fce2
    bool v2; // 0x42fce2
    return function_42fd2f(a1, a2, (a3 - v1 + (int64_t)v2) % 256 | a3 & -256);
}

// Address range: 0x42fcf4 - 0x42fcff
int64_t function_42fcf4(int64_t a1, int64_t a2) {
    // 0x42fcf4
    int64_t result; // 0x42fcf4
    int64_t v1; // 0x42fcf4
    if ((int32_t)v1 < 0) {
        result = function_42fc86();
    }
    // 0x42fcfd
    *(char *)a1 = (char)a2;
    return result;
}

// Address range: 0x42fcff - 0x42fd1f
int64_t function_42fcff(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42fcff
    int64_t v1; // 0x42fcff
    char * v2 = (char *)(v1 + 0x797bf00f); // 0x42fcff
    *v2 = *v2 ^ (char)v1;
    uint32_t v3 = (int32_t)v1 + 0x141c1719; // 0x42fd13
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x42fd13
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result = v3; // 0x42fd1b
    if (v4 % 2 == 0) {
        result = function_42fd47();
    }
    // 0x42fd1d
    return result;
}

// Address range: 0x42fd2f - 0x42fd3f
int64_t function_42fd2f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x42fd2f
    bool v1; // 0x42fd2f
    int64_t v2 = (v1 ? -1 : 1) + a2; // 0x42fd32
    __asm_outsd((int16_t)a3, *(int32_t *)v2);
    int64_t v3; // 0x42fd2f
    *(int32_t *)a3 = (int32_t)v3 / 2;
    return v2 & 0xffffffff;
}

// Address range: 0x42fd47 - 0x42fd48
int64_t function_42fd47(void) {
    // 0x42fd47
    int64_t result; // 0x42fd47
    return result;
}

// Address range: 0x42fd4a - 0x42fd61
int64_t function_42fd4a(void) {
    // 0x42fd4a
    __asm_int1();
    int64_t v1 = __asm_int3(); // 0x42fd50
    int64_t v2; // 0x42fd4a
    return v1 & -256 | (int64_t)((char)v1 - *(char *)(v2 + 0xd8a4ae83));
}

// Address range: 0x42fd62 - 0x42fd6c
int64_t function_42fd62(int64_t a1, int64_t a2, int64_t a3) {
    // 0x42fd62
    int64_t v1; // 0x42fd62
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return function_42fd8d();
}

// Address range: 0x42fd70 - 0x42fd73
int64_t function_42fd70(void) {
    // 0x42fd70
    int64_t result; // 0x42fd70
    return result;
}

// Address range: 0x42fd8d - 0x42fd98
int64_t function_42fd8d(void) {
    // 0x42fd8d
    int64_t result; // 0x42fd8d
    return result;
}

// Address range: 0x42fdbe - 0x42fdc0
int64_t function_42fdbe(void) {
    // 0x42fdbe
    int64_t v1; // 0x42fdbe
    return function_42fe08(v1, v1, v1);
}

// Address range: 0x42fdc4 - 0x42fdc7
int64_t function_42fdc4(void) {
    // 0x42fdc4
    int64_t result; // 0x42fdc4
    return result;
}

// Address range: 0x42fe08 - 0x42fe0b
int64_t function_42fe08(int64_t a1, int64_t a2, int64_t a3) {
    // 0x42fe08
    return a3 & 0xffff00ff | (int64_t)(uint32_t)(int32_t)&g2;
}

// Address range: 0x42fe0f - 0x42fe11
int64_t function_42fe0f(void) {
    // 0x42fe0f
    int64_t result; // 0x42fe0f
    return result;
}

// Address range: 0x42fe3a - 0x42fe4f
int64_t function_42fe3a(int64_t a1) {
    unsigned char v1 = *(char *)-0x27ddcbfd11a3ffdd; // 0x42fe3a
    *(char *)-0x2c8de1cc62c55e11 = v1;
    int64_t v2; // 0x42fe3a
    return v2 & -256 | (int64_t)v1;
}

// Address range: 0x42fe4f - 0x42fe5b
int64_t function_42fe4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x42fe4f
    int64_t v1; // 0x42fe4f
    int64_t v2 = v1;
    return (v2 - (int64_t)(int16_t)&g1) % 0x10000 | v2 & -0x10000;
}

// Address range: 0x42fe5c - 0x42fe71
int64_t function_42fe5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x42fe5c
    bool v1; // 0x42fe5c
    if (v1) {
        // 0x42fed3
        return (int64_t)*(int32_t *)-0x19c4dc24b9c92f66;
    }
    uint64_t result = __asm_wait(); // 0x42fe6a
    *(char *)a4 = (char)(result / 256 & a4);
    return result;
}

// Address range: 0x42fe71 - 0x42fe74
int64_t function_42fe71(int64_t a1) {
    // 0x42fe71
    int64_t result; // 0x42fe71
    return result;
}

// Address range: 0x42fe74 - 0x42fe83
int64_t function_42fe74(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42fe74
    int64_t result; // 0x42fe74
    *(char *)0x2d571d4d = *(char *)0x2d571d4d & (char)result;
    return result;
}

// Address range: 0x42feb8 - 0x42fec0
int64_t function_42feb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42feb8
    int64_t v1; // 0x42feb8
    return (int64_t)&v1;
}

// Address range: 0x42fed1 - 0x42fed3
int64_t function_42fed1(void) {
    // 0x42fed1
    int64_t result; // 0x42fed1
    return result;
}

// Address range: 0x42fef3 - 0x42fef4
int64_t function_42fef3(void) {
    // 0x42fef3
    int64_t result; // 0x42fef3
    return result;
}

// Address range: 0x42ff9b - 0x42ff9c
int64_t function_42ff9b(void) {
    // 0x42ff9b
    int64_t result; // 0x42ff9b
    return result;
}

// Address range: 0x42ffc1 - 0x42ffd4
int64_t function_42ffc1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __asm_iretd(); // 0x42ffc4
    int64_t v2; // 0x42ffc1
    *(char *)a1 = (char)v2;
    int64_t result; // 0x42ffc1
    if ((char)((char)v1 < 114) + (char)v2 + (char)(((int32_t)v1 >> 31) / 256) < 0) {
        result = function_42ff9b();
    }
    // 0x42ffd1
    return result;
}

// Address range: 0x42fffd - 0x430000
int64_t function_42fffd(void) {
    // 0x42fffd
    int64_t result; // 0x42fffd
    return result;
}

// Address range: 0x43001f - 0x43008e
int64_t function_43001f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x43001f
    int64_t result; // 0x43001f
    bool v1; // 0x43001f
    if (v1) {
        // 0x43003e
        __asm_out((int16_t)a3, (char)result);
        return result | 66;
    }
    // 0x430021
    *(int32_t *)0x62801f0485e81ecd = (int32_t)result;
    char v2 = result / 256 & result; // 0x43002a
    *(char *)result = v2;
    if (v2 < 0) {
        // 0x43005e
        return result;
    }
    // 0x43007d
    __asm_in_134(90);
    int64_t v3 = (result ^ result) & 0xffffffff; // 0x43008b
    *(int64_t *)(v3 - 8) = v3;
    return (int64_t)*(int32_t *)-0x3ab2be6e9489ce8b;
}

// Address range: 0x4300ca - 0x4300cd
int64_t function_4300ca(int64_t a1) {
    // 0x4300ca
    int64_t result; // 0x4300ca
    return result;
}

// Address range: 0x4300d1 - 0x4300d2
int64_t function_4300d1(void) {
    // 0x4300d1
    int64_t result; // 0x4300d1
    return result;
}

// Address range: 0x4300f6 - 0x430103
int64_t function_4300f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    int32_t * v1 = (int32_t *)(a4 + 0x58a15ed3); // 0x4300f8
    *v1 = *v1 | (int32_t)a2;
    return result;
}

// Address range: 0x43011e - 0x43011f
int64_t function_43011e(int64_t a1) {
    // 0x43011e
    int64_t result; // 0x43011e
    return result;
}

// Address range: 0x430152 - 0x430195
int64_t function_430152(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t v2 = __asm_hlt(); // 0x430154
    bool v3; // 0x430152
    *(int32_t *)a4 = (int32_t)a4 + (int32_t)a2 + (int32_t)v3;
    char * v4 = (char *)(a2 + 120); // 0x430157
    *v4 = *v4 & (char)(a3 / 256);
    uint64_t v5 = v2 + 0xa8f898f2; // 0x43015a
    int64_t v6; // 0x430152
    char v7 = *(char *)&v6; // 0x430161
    return 256 * (int64_t)(v7 | (char)(v5 / 256)) | v5 & 0xffff00ff;
}

// Address range: 0x4301bf - 0x4301ca
int64_t function_4301bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4301bf
    return function_440d79ab();
}

// Address range: 0x4301e9 - 0x4301f9
int64_t function_4301e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4301e9
    int64_t result; // 0x4301e9
    int64_t v1 = (int64_t)*(int32_t *)(2 * result + a4); // 0x4301eb
    int64_t v2 = 31 * v1; // 0x4301eb
    int32_t * v3 = (int32_t *)((v2 & 0xffffffff) + 0x532c3cc5); // 0x4301f0
    *v3 = *v3 + (int32_t)a2 + (int32_t)(v2 != 0x1f00000000 * v1 >> 32);
    return result;
}

// Address range: 0x430288 - 0x43028f
int64_t function_430288(int64_t a1, int64_t a2, int64_t a3) {
    // 0x430288
    int64_t result; // 0x430288
    return result;
}
