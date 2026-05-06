/*
 * Targeted RetDec C for native executable gap queue batch 1344.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1c437d-0x1c457d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c457d-0x1c477d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c477d-0x1c497d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c497d-0x1c4b7d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c4b7d-0x1c4d7d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c4d7d-0x1c4f7d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c517d-0x1c537d rank=- name=- kind=- bytes=- uncovered=-
 *   0x50898b-0x508b8b rank=- name=- kind=- bytes=- uncovered=-
 *   0x508b8b-0x508d8b rank=- name=- kind=- bytes=- uncovered=-
 *   0x508d8b-0x508f8b rank=- name=- kind=- bytes=- uncovered=-
 *   0x508f8b-0x50918b rank=- name=- kind=- bytes=- uncovered=-
 *   0x50918b-0x50938b rank=- name=- kind=- bytes=- uncovered=-
 *   0x50938b-0x50958b rank=- name=- kind=- bytes=- uncovered=-
 *   0x50958b-0x50978b rank=- name=- kind=- bytes=- uncovered=-
 *   0x50978b-0x50998b rank=- name=- kind=- bytes=- uncovered=-
 *   0x53da0b-0x53dc0b rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g5;
extern int g6;
extern int g7;
extern int g8;
extern int g9;
extern int g10;
extern int g11;
extern int g12;
extern int g13;
extern int g14;
extern int g15;
extern int g16;
extern int g17;
extern int g18;
extern int g19;
extern int g20;
extern int g21;
extern int g22;
extern int g23;
extern int g24;
extern int g25;
extern int g26;
extern int g27;
extern int g28;
extern int g29;
extern int g30;
extern int g31;
extern int g32;
extern int g33;
extern int g34;
extern int g35;
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

int64_t function_1c437d(int64_t a1, int64_t a2);
int64_t function_1c4385(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c43ba(int64_t a1, int64_t a2);
int64_t function_1c43c7(int64_t a1);
int64_t function_1c43e3(void);
int64_t function_1c440f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c441f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1c4481(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1c448c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c44fc(void);
int64_t function_1c4504(void);
int64_t function_1c4509(void);
int64_t function_1c4517(int64_t a1);
int64_t function_1c4535(void);
int64_t function_1c4568(void);
int64_t function_1c456d(void);
int64_t function_1c456f(void);
int64_t function_1c457a(void);
int64_t function_1c45ee(int64_t a1);
int64_t function_1c45f6(void);
int64_t function_1c45fd(int64_t a1);
int64_t function_1c4608(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1c4667(void);
int64_t function_1c46c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c4709(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1c47ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c4829(void);
int64_t function_1c485b(void);
int64_t function_1c487a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c48aa(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1c48dd(void);
int64_t function_1c48e1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1c4928(int64_t a1);
int64_t function_1c4941(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1c497b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c4a01(int64_t a1);
int64_t function_1c4a0a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1c4a21(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1c4a36(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1c4a8a(int64_t a1);
int64_t function_1c4b1c(void);
int64_t function_1c4b46(void);
int64_t function_1c4b4f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1c4b8d(void);
int64_t function_1c4b94(int64_t a1);
int64_t function_1c4b97(void);
int64_t function_1c4bb7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c4c00(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1c4c9c(int64_t a1);
int64_t function_1c4cba(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1c4d5a(int64_t a1);
int64_t function_1c4d6f(int64_t a1);
int64_t function_1c4da9(void);
int64_t function_1c4dbe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c4dd7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1c4df5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c4e1d(void);
int64_t function_1c4e20(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c4e22(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1c4ed5(void);
int64_t function_1c4eed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1c517d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1c51c5(int64_t a1);
int64_t function_1c5207(void);
int64_t function_1c527a(void);
int64_t function_1c52c6(int64_t a1);
int64_t function_1c52cd(void);
int64_t function_1c52e7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1c5333(int64_t a1, int64_t a2, int64_t a3);
int64_t function_20480d9();
int64_t function_205127c();
int64_t function_250b0();
int64_t function_26ee18();
int64_t function_35ef6();
int64_t function_4ba64d9b();
int64_t function_4eeb50();
int64_t function_4f4170();
int64_t function_4f47e0();
int64_t function_4f4e50();
int64_t function_4f4f50();
int64_t function_50898b(int64_t a1, int64_t a2);
int64_t function_508a10(int64_t a1, int64_t a2);
int64_t function_508a90(int64_t a1, int64_t a2, int64_t a3);
int64_t function_508aca(int64_t a1, int64_t a2, int64_t a3);
int64_t function_508b16(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_508b66(void);
int64_t function_508bb0(int64_t a1);
int64_t function_508be0(int64_t result, int64_t a2);
int64_t function_508dd0(int64_t a1, int64_t a2);
int64_t function_508eca(int64_t a1, int64_t a2, int64_t a3);
int64_t function_508f16(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_508f66(void);
int64_t function_508fb0(int64_t a1);
int64_t function_508fe0(int64_t result, int64_t a2);
int64_t function_5091d0(int64_t a1, int64_t a2);
int64_t function_5096b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_5096c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_5096d0(int64_t a1, int64_t a2);
int64_t function_5096f0(int64_t result, int64_t a2, int64_t a3, int64_t a4);
int64_t function_509700(int64_t result, int64_t a2, int64_t a3, int64_t a4);
int64_t function_509710(int64_t a1, int64_t a2);
int64_t function_509770(int64_t a1, int64_t a2);
int64_t function_5097a8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5097f4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_509846(void);
int64_t function_509890(int64_t a1);
int64_t function_5098c0(int64_t result, int64_t a2);
int64_t function_53d95b();
int64_t function_53d9d6();
int64_t function_53da0b(void);
int64_t function_53da20(int32_t a1);
int64_t function_53db55(int64_t a1, int64_t a2);
int64_t function_53dbf5(void);
int64_t function_565970();
int64_t function_5679b0();
int64_t function_5679e0();
int64_t function_56b2c0();
int64_t function_ffffffff873854db();
int64_t function_ffffffffb32454cd();
int64_t function_ffffffffdcabea09();
int64_t function_fffffffff3243eb7();
int64_t unknown_133b1548();
int64_t unknown_2a3c704f();
int64_t unknown_2f8f95cd();
int64_t unknown_33179f80();
int64_t unknown_3ac443ee();
int64_t unknown_4b1d8c68();
int64_t unknown_4ddc74d3();
int64_t unknown_59e1d172();
int64_t unknown_7be7e0f();
int64_t unknown_be4fd82();
int64_t unknown_ffffffff8cb6398b();
int64_t unknown_ffffffff9c9aa6ae();
int64_t unknown_ffffffff9f1e34c7();
int64_t unknown_ffffffffa41b849f();
int64_t unknown_ffffffffa58f460f();
int64_t unknown_ffffffffb4a987af();
int64_t unknown_ffffffffc267772e();
int64_t unknown_ffffffffc4914911();
int64_t unknown_ffffffffc516f01e();
int64_t unknown_ffffffffc51adde6();
int64_t unknown_ffffffffd3eb32bd();
int64_t unknown_ffffffffd87f3690();
int64_t unknown_fffffffff98a5d46();
int64_t unknown_fffffffffa5d2a40();

// Address range: 0x1c437d - 0x1c437e
int64_t function_1c437d(int64_t a1, int64_t a2) {
    // 0x1c437d
    int64_t v1; // 0x1c437d
    return v1 & 0xffffffff;
}

// Address range: 0x1c4385 - 0x1c439d
int64_t function_1c4385(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4;
    unsigned char v2 = v1 % 32; // 0x1c4385
    if (v2 != 0) {
        *(char *)a4 = v1 << 8 - v2 | v1 >> v2;
    }
    bool v3; // 0x1c4385
    if (!v3) {
        // 0x1c4389
        int64_t result; // 0x1c4385
        return result;
    }
    // 0x1c438a
    int64_t v4; // 0x1c4385
    int64_t result2 = v4 + a3 & 0xffffffff ^ 0xe801e877; // 0x1c438c
    *(int32_t *)0x1d711298 = *(int32_t *)0x1d711298 + (int32_t)a1;
    if (a4 == 1) {
        // 0x1c4399
        return result2 & 0xffff00ff | (int64_t)"tdi2";
    }
    // 0x1c4389
    return result2;
}

// Address range: 0x1c43ba - 0x1c43c7
int64_t function_1c43ba(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 31); // 0x1c43bf
    int64_t v2; // 0x1c43ba
    *v1 = (int32_t)v2 - 0x17515a5c + *v1;
    return function_ffffffffdcabea09();
}

// Address range: 0x1c43c7 - 0x1c43cc
int64_t function_1c43c7(int64_t a1) {
    // 0x1c43c7
    int64_t result; // 0x1c43c7
    return result;
}

// Address range: 0x1c43e3 - 0x1c43e6
int64_t function_1c43e3(void) {
    // 0x1c43e3
    int64_t result; // 0x1c43e3
    return result;
}

// Address range: 0x1c440f - 0x1c441d
int64_t function_1c440f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c440f
    int64_t result; // 0x1c440f
    __asm_out(-38, (char)result);
    return result;
}

// Address range: 0x1c441f - 0x1c4444
int64_t function_1c441f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1c441f
    int64_t v1; // 0x1c441f
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2;
    unknown_ffffffffa58f460f();
    int64_t v3; // 0x1c441f
    int32_t v4 = *(int32_t *)&v3; // 0x1c442f
    int64_t v5; // 0x1c441f
    *(int32_t *)v3 = v4 + (int32_t)(int64_t)&v5;
    int32_t * v6 = (int32_t *)(a1 - 24); // 0x1c4437
    *v6 = *v6 | (int32_t)a5;
    int32_t * v7 = (int32_t *)(a4 - 60); // 0x1c443a
    uint32_t v8 = *v7; // 0x1c443a
    *v7 = v8 - 0x59f3ae12;
    char * v9 = v8 > 0x59f3ae11 ? (char *)0xa60c51ed : (char *)0xa60c51ee; // 0x1c443f
    *v9 = *v9 + 43;
    return function_1c448c(a1, a5, a3, a4);
}

// Address range: 0x1c4481 - 0x1c448c
int64_t function_1c4481(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1c4481
    int64_t v1; // 0x1c4481
    int64_t v2 = v1;
    int64_t v3 = a2;
    *(int32_t *)v2 = (int32_t)(v2 | v1);
    int32_t * v4 = (int32_t *)(v2 + (8 * v1 | 1)); // 0x1c4483
    *v4 = *v4 + (int32_t)a3;
    *(int32_t *)a1 = *(int32_t *)&v3;
    int64_t v5; // 0x1c4481
    return (int64_t)(*(int32_t *)&v5 & (int32_t)v2);
}

// Address range: 0x1c448c - 0x1c4499
int64_t function_1c448c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c448c
    int64_t v1; // 0x1c448c
    int64_t v2 = v1 + 0x557d1918; // 0x1c448c
    *(int32_t *)a1 = (int32_t)(v2 | v1);
    return v2 & 0xffffffff;
}

// Address range: 0x1c44fc - 0x1c44fd
int64_t function_1c44fc(void) {
    // 0x1c44fc
    int64_t result; // 0x1c44fc
    return result;
}

// Address range: 0x1c4504 - 0x1c4508
int64_t function_1c4504(void) {
    // 0x1c4504
    int64_t v1; // 0x1c4504
    return v1 ^ 128;
}

// Address range: 0x1c4509 - 0x1c450c
int64_t function_1c4509(void) {
    // 0x1c4509
    int64_t result; // 0x1c4509
    return result;
}

// Address range: 0x1c4517 - 0x1c4518
int64_t function_1c4517(int64_t a1) {
    // 0x1c4517
    int64_t result; // 0x1c4517
    return result;
}

// Address range: 0x1c4535 - 0x1c4538
int64_t function_1c4535(void) {
    // 0x1c4535
    int64_t result; // 0x1c4535
    return result;
}

// Address range: 0x1c4568 - 0x1c456b
int64_t function_1c4568(void) {
    // 0x1c4568
    int64_t result; // 0x1c4568
    return result;
}

// Address range: 0x1c456d - 0x1c456e
int64_t function_1c456d(void) {
    // 0x1c456d
    int64_t result; // 0x1c456d
    return result;
}

// Address range: 0x1c456f - 0x1c4571
int64_t function_1c456f(void) {
    // 0x1c456f
    return function_1c44fc();
}

// Address range: 0x1c457a - 0x1c457b
int64_t function_1c457a(void) {
    // 0x1c457a
    int64_t result; // 0x1c457a
    return result;
}

// Address range: 0x1c45ee - 0x1c45f1
int64_t function_1c45ee(int64_t a1) {
    // 0x1c45ee
    int64_t result; // 0x1c45ee
    return result;
}

// Address range: 0x1c45f6 - 0x1c45f7
int64_t function_1c45f6(void) {
    // 0x1c45f6
    int64_t result; // 0x1c45f6
    return result;
}

// Address range: 0x1c45fd - 0x1c4608
int64_t function_1c45fd(int64_t a1) {
    // 0x1c45fd
    int64_t result; // 0x1c45fd
    return result;
}

// Address range: 0x1c4608 - 0x1c4659
int64_t function_1c4608(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = unknown_ffffffffc4914911(); // 0x1c460b
    unsigned char v2 = (char)v1; // 0x1c4615
    if (v2 < 0 || v2 < 2) {
        int64_t result = v1 & -256 | (int64_t)(v2 / 2); // 0x1c4615
        *(int32_t *)a3 = (int32_t)result + (int32_t)a3;
        return result;
    }
    // 0x1c461b
    return function_4ba64d9b();
}

// Address range: 0x1c4667 - 0x1c466d
int64_t function_1c4667(void) {
    // 0x1c4667
    int64_t v1; // 0x1c4667
    int64_t v2 = v1;
    bool v3; // 0x1c4667
    int64_t result = (v2 - (int64_t)v3) % 256 | v2 & -256; // 0x1c4667
    char * v4 = (char *)result; // 0x1c4669
    *v4 = *v4 + 60;
    return result;
}

// Address range: 0x1c46c9 - 0x1c46d9
int64_t function_1c46c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c46c9
    int64_t v1; // 0x1c46c9
    __asm_out_133((int16_t)a3, (char)v1);
    return unknown_4ddc74d3();
}

// Address range: 0x1c4709 - 0x1c4721
int64_t function_1c4709(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 26); // 0x1c470e
    int32_t v2 = unknown_7be7e0f(); // 0x1c470e
    *v1 = *v1 + v2;
    *(int32_t *)a1 = v2;
    int64_t v3; // 0x1c4709
    __asm_outsd((int16_t)a3, *(int32_t *)&v3);
    uint64_t v4 = unknown_ffffffffc516f01e(); // 0x1c4718
    int64_t v5; // 0x1c4709
    return v4 & -256 | (int64_t)*(char *)(v4 % 256 + v5);
}

// Address range: 0x1c47ba - 0x1c47e6
int64_t function_1c47ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 0x341b3ef); // 0x1c47ba
    uint32_t v2 = *v1; // 0x1c47ba
    *v1 = v2 / 1024 | 0x400000 * v2;
    bool v3; // 0x1c47ba
    if (v3 || false) {
        // 0x1c47e4
        int64_t result; // 0x1c47ba
        return result;
    }
    // 0x1c47c3
    return a1 & 0xffffffff;
}

// Address range: 0x1c4829 - 0x1c4831
int64_t function_1c4829(void) {
    // 0x1c4829
    int64_t v1; // 0x1c4829
    int32_t * v2 = (int32_t *)(v1 + 0x1e8b83b); // 0x1c4829
    *v2 = *v2 ^ (int32_t)v1;
    return function_1c48aa(v1, v1, v1);
}

// Address range: 0x1c485b - 0x1c485e
int64_t function_1c485b(void) {
    // 0x1c485b
    int64_t v1; // 0x1c485b
    int64_t v2 = v1;
    return (v2 + 76) % 256 | v2 & -256;
}

// Address range: 0x1c487a - 0x1c48a2
int64_t function_1c487a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c487a
    unknown_33179f80();
    int64_t v1 = unknown_ffffffff8cb6398b(); // 0x1c4885
    unsigned char v2 = *(char *)0x28d2ae01e8bae267; // 0x1c488a
    char * v3 = (char *)((v1 & -256 | (int64_t)v2) + 0x1e17b9e1); // 0x1c4893
    *v3 = *v3 + v2;
    unknown_ffffffffa41b849f();
    return function_1c48aa(a1, a2, a3);
}

// Address range: 0x1c48aa - 0x1c48ad
int64_t function_1c48aa(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1c48aa
    int64_t v1; // 0x1c48aa
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x1c48dd - 0x1c48e0
int64_t function_1c48dd(void) {
    // 0x1c48dd
    int64_t result; // 0x1c48dd
    return result;
}

// Address range: 0x1c48e1 - 0x1c4906
int64_t function_1c48e1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1c48e1
    int64_t v1; // 0x1c48e1
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + (char)(a4 / 256);
    int64_t result = unknown_3ac443ee(); // 0x1c48e7
    *(char *)a1 = __asm_insb((int16_t)a3);
    char v3 = *(char *)(8 * v1 - 0x51fddaff + result); // 0x1c48f4
    int32_t * v4 = (int32_t *)(a3 & -256 | (int64_t)(v3 ^ (char)a3)); // 0x1c48fe
    *v4 = *v4 + (int32_t)a1;
    return result;
}

// Address range: 0x1c4928 - 0x1c4929
int64_t function_1c4928(int64_t a1) {
    // 0x1c4928
    int64_t result; // 0x1c4928
    return result;
}

// Address range: 0x1c4941 - 0x1c4959
int64_t function_1c4941(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1c4941
    int64_t v1; // 0x1c4941
    int64_t v2 = v1;
    uint64_t v3 = unknown_133b1548(); // 0x1c4942
    *(char *)(v2 & 0xffffffff) = (char)(v3 / 256) + (char)v2;
    int32_t * v4 = (int32_t *)(a2 - 59); // 0x1c4952
    *v4 = *v4 + (int32_t)a1;
    return __asm_wait();
}

// Address range: 0x1c497b - 0x1c49c9
int64_t function_1c497b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c497b
    __asm_iretd(a1);
    int64_t v1 = unknown_be4fd82(); // 0x1c497c
    *(int32_t *)a3 = (int32_t)a3 - (int32_t)a1;
    int32_t * v2 = (int32_t *)(v1 - 0x5cd6d6f8); // 0x1c4983
    int64_t v3; // 0x1c497b
    *v2 = *v2 & (int32_t)v3;
    return function_1c4a21(a2, a2, a3, a4);
}

// Address range: 0x1c4a01 - 0x1c4a07
int64_t function_1c4a01(int64_t a1) {
    // 0x1c4a01
    int64_t result; // 0x1c4a01
    return result;
}

// Address range: 0x1c4a0a - 0x1c4a10
int64_t function_1c4a0a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1c4a0a
    int64_t result; // 0x1c4a0a
    *(int32_t *)a1 = 2 * (int32_t)result;
    int64_t v1; // 0x1c4a0a
    *(char *)a1 = *(char *)&v1;
    return result;
}

// Address range: 0x1c4a21 - 0x1c4a35
int64_t function_1c4a21(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1c4a21
    int64_t result; // 0x1c4a21
    char v1 = *(char *)(result - 0x50da9415); // 0x1c4a26
    int32_t v2 = *(int32_t *)(a2 - 24); // 0x1c4a2c
    int32_t v3 = *(int32_t *)-0x4f9e83e6; // 0x1c4a2f
    *(int32_t *)-0x4f9e83e6 = v3 - v2 + (int32_t)(256 * (int64_t)(v1 & (char)(a4 / 256)) | a4 & 0xffff00ff);
    return result;
}

// Address range: 0x1c4a36 - 0x1c4a45
int64_t function_1c4a36(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1c4a36
    int64_t v1; // 0x1c4a36
    int32_t * v2 = (int32_t *)(v1 + 0x3d01e81a); // 0x1c4a38
    *v2 = *v2 + (int32_t)a3;
    return function_ffffffffb32454cd();
}

// Address range: 0x1c4a8a - 0x1c4a98
int64_t function_1c4a8a(int64_t a1) {
    uint64_t v1 = unknown_ffffffffd87f3690(a1); // 0x1c4a8a
    char v2 = *(char *)0x20fcd71f; // 0x1c4a8f
    return 256 * (int64_t)(v2 | (char)(v1 / 256)) | v1 & -0xff01;
}

// Address range: 0x1c4b1c - 0x1c4b1e
int64_t function_1c4b1c(void) {
    // 0x1c4b1c
    return function_1c4b8d();
}

// Address range: 0x1c4b46 - 0x1c4b47
int64_t function_1c4b46(void) {
    // 0x1c4b46
    int64_t result; // 0x1c4b46
    return result;
}

// Address range: 0x1c4b4f - 0x1c4b73
int64_t function_1c4b4f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1c4b4f
    int64_t v1; // 0x1c4b4f
    int32_t * v2 = (int32_t *)(v1 + 0x4e00cb7c); // 0x1c4b4f
    *v2 = *v2 + (int32_t)v1;
    __asm_iretd(a1);
    if (((int32_t)v1 - 0x6f01e892 & -256 ^ -248) < 0xfe36ec64) {
        function_1c4b46();
    }
    int64_t result = unknown_59e1d172(); // 0x1c4b6c
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x1c4b8d - 0x1c4b92
int64_t function_1c4b8d(void) {
    // 0x1c4b8d
    int64_t v1; // 0x1c4b8d
    bool v2; // 0x1c4b8d
    return v1 + 0xe40773dc + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x1c4b94 - 0x1c4b97
int64_t function_1c4b94(int64_t a1) {
    // 0x1c4b94
    int64_t result; // 0x1c4b94
    return result;
}

// Address range: 0x1c4b97 - 0x1c4b9a
int64_t function_1c4b97(void) {
    // 0x1c4b97
    int64_t result; // 0x1c4b97
    return result;
}

// Address range: 0x1c4bb7 - 0x1c4bc8
int64_t function_1c4bb7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffd3eb32bd(a1, a2, a3, a4); // 0x1c4bb7
    char * v2 = (char *)(2 * a2 - 0x1f70cce5 + a4); // 0x1c4bbc
    *v2 = *v2 + (char)v1;
    return function_205127c();
}

// Address range: 0x1c4c00 - 0x1c4c0b
int64_t function_1c4c00(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 0x3d009a98); // 0x1c4c00
    int64_t v2; // 0x1c4c00
    *v1 = *v1 + (int32_t)v2;
    int64_t v3 = 2 * v2; // 0x1c4c06
    __asm_out_134((int16_t)a3, (int32_t)v3);
    return v3 & 0xfffffffe;
}

// Address range: 0x1c4c9c - 0x1c4ca0
int64_t function_1c4c9c(int64_t a1) {
    // 0x1c4c9c
    return __asm_sti(a1);
}

// Address range: 0x1c4cba - 0x1c4d4c
int64_t function_1c4cba(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int16_t v1 = a3; // 0x1c4cbc
    *(char *)a1 = __asm_insb(v1);
    int64_t v2; // 0x1c4cba
    __asm_outsb(v1, *(char *)&v2);
    int64_t result = unknown_ffffffff9f1e34c7(); // 0x1c4cc1
    *(int32_t *)0x280029b9c601e8db = (int32_t)result;
    if ((char)a3 - *(char *)(a2 + 24) < 0) {
        // 0x1c4d1b
        return result;
    }
    int64_t v3 = unknown_ffffffffc267772e(); // 0x1c4d28
    int64_t v4; // 0x1c4cba
    char v5 = *(char *)((v4 & 0xffffffff) + 55); // 0x1c4d2f
    int64_t v6 = 256 * (int64_t)((char)(a4 / 256) - v5) | a4 & -0xff01; // 0x1c4d2f
    int32_t v7 = v3; // 0x1c4d32
    __asm_out_135(-24, v7);
    int32_t * v8 = (int32_t *)(a1 + 0x23167c02); // 0x1c4d34
    *v8 = *v8 + (int32_t)v6;
    int32_t * v9 = (int32_t *)(v6 - 0x92123a7); // 0x1c4d3a
    *v9 = *v9 + v7;
    return unknown_fffffffff98a5d46() + 0x1201e837 & 0xffffffff;
}

// Address range: 0x1c4d5a - 0x1c4d5d
int64_t function_1c4d5a(int64_t a1) {
    // 0x1c4d5a
    int64_t result; // 0x1c4d5a
    return result;
}

// Address range: 0x1c4d6f - 0x1c4d72
int64_t function_1c4d6f(int64_t a1) {
    // 0x1c4d6f
    int64_t result; // 0x1c4d6f
    return result;
}

// Address range: 0x1c4da9 - 0x1c4db3
int64_t function_1c4da9(void) {
    // 0x1c4da9
    unknown_ffffffffb4a987af();
    return function_fffffffff3243eb7();
}

// Address range: 0x1c4dbe - 0x1c4dd6
int64_t function_1c4dbe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c4dbe
    return unknown_2f8f95cd();
}

// Address range: 0x1c4dd7 - 0x1c4ddb
int64_t function_1c4dd7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1c4dd7
    int64_t result; // 0x1c4dd7
    int32_t * v1 = (int32_t *)(result - 6); // 0x1c4dd7
    *v1 = *v1 + (int32_t)a2;
    return result;
}

// Address range: 0x1c4df5 - 0x1c4e17
int64_t function_1c4df5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c4df5
    int64_t result; // 0x1c4df5
    bool v1; // 0x1c4df5
    if (!v1) {
        // 0x1c4e02
        *(int32_t *)-0x4df677151a6075f7 = (int32_t)result;
        return function_26ee18();
    }
    if (a4 != 1 == v1) {
        // 0x1c4e18
        return result;
    }
    // 0x1c4dfc
    *(int32_t *)a3 = (int32_t)(a3 | a1);
    return result;
}

// Address range: 0x1c4e1d - 0x1c4e1f
int64_t function_1c4e1d(void) {
    // 0x1c4e1d
    int64_t v1; // 0x1c4e1d
    return function_1c4e22(v1, v1, v1, v1, (int64_t)&g35, (int64_t)&g35);
}

// Address range: 0x1c4e20 - 0x1c4e22
int64_t function_1c4e20(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c4e20
    int64_t result; // 0x1c4e20
    return result;
}

// Address range: 0x1c4e22 - 0x1c4ecc
int64_t function_1c4e22(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4;
    int64_t result2; // 0x1c4e22
    bool v2; // 0x1c4e22
    if (v2) {
        int32_t * v3 = (int32_t *)(a3 + 0x1e9966c4); // 0x1c4e9e
        *v3 = *v3 | (int32_t)a1;
        uint64_t v4 = unknown_ffffffff9c9aa6ae(); // 0x1c4ea5
        uint64_t v5 = v1; // 0x1c4eaa
        v1 = v4 & 0xffffffff;
        char v6 = v5; // 0x1c4eab
        char * v7 = (char *)(v5 & 0xffffffff); // 0x1c4eab
        *v7 = v6 + (char)v4;
        *(int32_t *)a1 = (int32_t)v5;
        int64_t v8 = (v2 ? -4 : 4) + a1; // 0x1c4eb3
        *v7 = *(char *)&v1 + v6;
        char * v9 = (char *)(v8 + result2); // 0x1c4eb6
        *v9 = *v9 + (char)(v5 / 256);
        *v7 = *(char *)&v1 + v6;
        int64_t v10 = (v2 ? -1 : 1) + a2; // 0x1c4ebb
        char * v11 = (char *)(v10 + 4 * result2); // 0x1c4ebc
        *v11 = *v11 + (char)(v4 / 256);
        float80_t v12; // 0x1c4e22
        *(int32_t *)-0x7b1ef85d = (int32_t)v12;
        int64_t result = __asm_int1(v8, v10); // 0x1c4ec5
        if ((*(char *)v8 || (char)(result2 / 256)) < 0) {
            // 0x1c4e5d
            return result ^ 7;
        }
        // 0x1c4ecc
        return result;
    }
    if (!v2) {
        // 0x1c4e42
        __asm_outsb((int16_t)a2, (char)a2);
        return a2 & 0xffffffff & result2;
    }
    // 0x1c4e29
    __asm_out_134((int16_t)a3, (int32_t)result2);
    return result2;
}

// Address range: 0x1c4ed5 - 0x1c4ed6
int64_t function_1c4ed5(void) {
    // 0x1c4ed5
    int64_t result; // 0x1c4ed5
    return result;
}

// Address range: 0x1c4eed - 0x1c4f6f
int64_t function_1c4eed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1c4eed
    bool v1; // 0x1c4eed
    if (false || !v1) {
        // 0x1c4f68
        int64_t result; // 0x1c4eed
        return result;
    }
    int64_t v2 = (v1 ? -4 : 4) + a1; // 0x1c4ef8
    int64_t v3 = __asm_iretd(v2) & -256 | (int64_t)*(char *)0x13d00671101e85b; // 0x1c4f07
    int64_t v4; // 0x1c4eed
    if (*(char *)v2 > (char)(v4 / 256)) {
        v3 = function_1c4ed5();
    }
    uint32_t v5 = *(int32_t *)(a2 - 0x7e7fa26 + 2 * a2) + (int32_t)v4; // 0x1c4ef1
    int64_t v6 = (int64_t)v5 - 8; // 0x1c4f09
    *(int64_t *)v6 = 0x52ca6b00;
    unsigned char v7 = (char)a4; // 0x1c4f0e
    int64_t v8; // 0x1c4eed
    *(char *)v8 = *(char *)&v8 | v7;
    char * v9 = (char *)(v3 - 0x38fec251); // 0x1c4f18
    *v9 = *v9 + (char)v4;
    int64_t v10 = v3 & 0xffffffff; // 0x1c4f1e
    unsigned char v11 = (char)v6; // 0x1c4f1f
    char v12 = v11 - v7; // 0x1c4f1f
    unsigned char v13 = llvm_ctpop_i8(v12); // 0x1c4f1f
    *(int64_t *)(v10 - 8) = 0x4000 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | (int64_t)(v11 < v7) | 64 * (int64_t)(v12 == 0) | 128 * (int64_t)(v12 < 0) | 16 * (int64_t)(v11 % 16 - v7 % 16 > 15) | 4 * (int64_t)(v13 % 2 == 0) | 2048 * (int64_t)(((v12 ^ v11) & (char)(v6 ^ a4)) < 0) | 2;
    int64_t v14 = v10 - 16; // 0x1c4f24
    *(int64_t *)v14 = 0xfa7f7d1b;
    if (v11 < v7 || v12 == 0) {
        // 0x1c4f61
        unknown_4b1d8c68();
        // 0x1c4f68
        return v14 & 0xffffffff;
    }
    int32_t * v15 = (int32_t *)(v14 & 0xffffffff); // 0x1c4f2a
    *v15 = *v15 ^ 0xd1644a;
    return v5 - 8;
}

// Address range: 0x1c517d - 0x1c5199
int64_t function_1c517d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1c517d
    int64_t result; // 0x1c517d
    char * v1 = (char *)(result + 114); // 0x1c5182
    *v1 = *v1 ^ (char)a4;
    return result;
}

// Address range: 0x1c51c5 - 0x1c51cb
int64_t function_1c51c5(int64_t a1) {
    // 0x1c51c5
    return function_20480d9();
}

// Address range: 0x1c5207 - 0x1c5214
int64_t function_1c5207(void) {
    // 0x1c5207
    int64_t v1; // 0x1c5207
    *(int32_t *)0xa26f0cd0a01e83b = (int32_t)v1;
    int64_t v2; // 0x1c5207
    return (int64_t)&v2;
}

// Address range: 0x1c527a - 0x1c527b
int64_t function_1c527a(void) {
    // 0x1c527a
    int64_t result; // 0x1c527a
    return result;
}

// Address range: 0x1c52c6 - 0x1c52c7
int64_t function_1c52c6(int64_t a1) {
    // 0x1c52c6
    int64_t result; // 0x1c52c6
    return result;
}

// Address range: 0x1c52cd - 0x1c52e7
int64_t function_1c52cd(void) {
    // 0x1c52cd
    int64_t v1; // 0x1c52cd
    *(char *)0x4832201e80f8292 = (char)v1;
    unknown_ffffffffc51adde6();
    return function_1c527a();
}

// Address range: 0x1c52e7 - 0x1c52f3
int64_t function_1c52e7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1c52e7
    int64_t v1; // 0x1c52e7
    char * v2 = (char *)(v1 + 34); // 0x1c52eb
    *v2 = *v2 + (char)a3;
    return function_ffffffff873854db();
}

// Address range: 0x1c5333 - 0x1c5354
int64_t function_1c5333(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1c5333
    int64_t v1; // 0x1c5333
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + 1;
    uint32_t v3 = (int32_t)a3 % 32; // 0x1c5336
    if (v3 != 0) {
        int64_t v4; // 0x1c5333
        uint32_t v5 = *(int32_t *)&v4; // 0x1c5336
        *(int32_t *)v4 = v5 >> 32 - v3 | v5 << v3;
    }
    __asm_int(-40);
    unknown_fffffffffa5d2a40();
    return unknown_2a3c704f();
}

// Address range: 0x50898b - 0x508a0c
// From class:    std::__moneypunct_cache<wchar_t, false>
// Type:          constructor
int64_t function_50898b(int64_t a1, int64_t a2) {
    // 0x50898b
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 24) = 0;
    *(char *)(a1 + 32) = 0;
    *(int32_t *)(a1 + 8) = (int32_t)(a2 != 0);
    *(int64_t *)(a1 + 36) = 0;
    *(int64_t *)(a1 + 48) = 0;
    *(int64_t *)(a1 + 56) = 0;
    *(int64_t *)(a1 + 64) = 0;
    *(int64_t *)(a1 + 72) = 0;
    *(int64_t *)(a1 + 80) = 0;
    *(int64_t *)a1 = (int64_t)&g4;
    *(int64_t *)(a1 + 88) = 0;
    *(int64_t *)(a1 + 96) = 0;
    *(int32_t *)(a1 + 104) = 0;
    *(char *)(a1 + 152) = 0;
    return (int64_t)&g4;
}

// Address range: 0x508a10 - 0x508a8c
// From class:    std::__moneypunct_cache<wchar_t, true>
// Type:          constructor
int64_t function_508a10(int64_t a1, int64_t a2) {
    // 0x508a10
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 24) = 0;
    *(char *)(a1 + 32) = 0;
    *(int32_t *)(a1 + 8) = (int32_t)(a2 != 0);
    *(int64_t *)(a1 + 36) = 0;
    *(int64_t *)(a1 + 48) = 0;
    *(int64_t *)(a1 + 56) = 0;
    *(int64_t *)(a1 + 64) = 0;
    *(int64_t *)(a1 + 72) = 0;
    *(int64_t *)(a1 + 80) = 0;
    *(int64_t *)a1 = (int64_t)&g3;
    *(int64_t *)(a1 + 88) = 0;
    *(int64_t *)(a1 + 96) = 0;
    *(int32_t *)(a1 + 104) = 0;
    *(char *)(a1 + 152) = 0;
    return (int64_t)&g3;
}

// Address range: 0x508a90 - 0x508aca
// From class:    std::moneypunct<wchar_t, false>
// Type:          constructor
int64_t function_508a90(int64_t a1, int64_t a2, int64_t a3) {
    // 0x508a90
    *(int64_t *)(a1 + 16) = 0;
    *(int32_t *)(a1 + 8) = (int32_t)(a2 != 0);
    *(int64_t *)a1 = (int64_t)&g7;
    return function_4f47e0(a1, 0, 0);
}

// Address range: 0x508aca - 0x508b16
// From class:    std::moneypunct<wchar_t, false>
// Type:          constructor
int64_t function_508aca(int64_t a1, int64_t a2, int64_t a3) {
    // 0x508aca
    int64_t v1; // 0x508aca
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)(v1 + 16) = a2;
    *(int32_t *)(v1 + 8) = (int32_t)(a3 != 0) | ((int32_t)&g35 ^ (int32_t)&g35) & -256;
    *(int64_t *)v1 = (int64_t)&g7;
    return function_4f47e0(v1, 0, 0);
}

// Address range: 0x508b16 - 0x508b66
// From class:    std::moneypunct<wchar_t, false>
// Type:          constructor
int64_t function_508b16(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x508b16
    int64_t v1; // 0x508b16
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)(v1 + 16) = 0;
    *(int32_t *)(v1 + 8) = (int32_t)(a4 != 0) | ((int32_t)&g35 ^ (int32_t)&g35) & -256;
    *(int64_t *)v1 = (int64_t)&g7;
    return function_4f47e0(v1, (int32_t)a2, (int32_t)a3);
}

// Address range: 0x508b66 - 0x508ba2
int64_t function_508b66(void) {
    // 0x508b66
    int64_t v1; // 0x508b66
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t result = *(int64_t *)((int64_t)&g35 + 16); // 0x508b83
    if (result != g16) {
        // 0x508ba0
        return result;
    }
    // 0x508b90
    return (int64_t)*(int32_t *)(*(int64_t *)(v1 + 16) + 36);
}

// Address range: 0x508bb0 - 0x508bd2
int64_t function_508bb0(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 24); // 0x508bb3
    if (result != g19) {
        // 0x508bd0
        return result;
    }
    // 0x508bc0
    return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 40);
}

// Address range: 0x508be0 - 0x508dc2
int64_t function_508be0(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x508be8
    int64_t v2 = a2; // 0x508c06
    if (*(int64_t *)(a2 + 32) == g28) {
        // 0x508c08
        v2 = *(int64_t *)(*(int64_t *)(a2 + 16) + 16);
        function_250b0();
    }
    // 0x508c1a
    if (v1 == __readfsqword(40)) {
        // 0x508c2d
        return result;
    }
    // 0x508c3c
    __stack_chk_fail();
    int64_t v3 = __readfsqword(40); // 0x508c58
    int64_t v4 = v2; // 0x508c76
    if (*(int64_t *)(*(int64_t *)v2 + 40) == g24) {
        // 0x508c78
        v4 = *(int64_t *)(*(int64_t *)(v2 + 16) + 48);
        function_35ef6();
    }
    // 0x508c8a
    if (v3 == __readfsqword(40)) {
        // 0x508c2d
        return result;
    }
    // 0x508cac
    __stack_chk_fail();
    int64_t v5 = __readfsqword(40); // 0x508cc8
    int64_t v6 = v4; // 0x508ce6
    if (*(int64_t *)(*(int64_t *)v4 + 48) == g25) {
        // 0x508ce8
        v6 = *(int64_t *)(*(int64_t *)(v4 + 16) + 64);
        function_35ef6();
    }
    // 0x508cfa
    if (v5 == __readfsqword(40)) {
        // 0x508c2d
        return result;
    }
    // 0x508d1c
    __stack_chk_fail();
    int64_t v7 = __readfsqword(40); // 0x508d38
    if (*(int64_t *)(*(int64_t *)v6 + 56) == g18) {
        // 0x508d58
        function_35ef6();
    }
    // 0x508d6a
    if (v7 == __readfsqword(40)) {
        // 0x508c2d
        return result;
    }
    // 0x508d8c
    __stack_chk_fail();
    int64_t result2 = *(int64_t *)(result + 64); // 0x508da3
    if (result2 != g20) {
        // 0x508c2d
        return result2;
    }
    // 0x508db0
    return (int64_t)*(int32_t *)(*(int64_t *)(result + 16) + 96);
}

// Address range: 0x508dd0 - 0x508eca
// From class:    std::moneypunct<wchar_t, true>
// Type:          constructor
int64_t function_508dd0(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x508dd4
    int64_t result = *(int64_t *)(a1 + 72); // 0x508de7
    if (result != g13) {
        // 0x508e10
        if (v1 == __readfsqword(40)) {
            // 0x508e20
            return result;
        }
    } else {
        // 0x508df4
        if (v1 == __readfsqword(40)) {
            // 0x508e0b
            return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 100);
        }
    }
    // 0x508e26
    __stack_chk_fail();
    int64_t v2 = __readfsqword(40); // 0x508e34
    int64_t result2 = *(int64_t *)(a1 + 80); // 0x508e47
    int64_t * v3; // 0x508dd0
    if (result2 != g30) {
        // 0x508e70
        if (v2 == __readfsqword(40)) {
            // 0x508e20
            return result2;
        }
        // 0x508e70
        v3 = (int64_t *)(a1 + 16);
    } else {
        int64_t * v4 = (int64_t *)(a1 + 16);
        v3 = v4;
        if (v2 == __readfsqword(40)) {
            // 0x508e6b
            return (int64_t)*(int32_t *)(*v4 + 104);
        }
    }
    // 0x508e86
    __stack_chk_fail();
    *v3 = 0;
    *(int32_t *)(a1 + 8) = (int32_t)(a2 != 0) | ((int32_t)&g35 ^ (int32_t)&g35) & -256;
    *(int64_t *)a1 = (int64_t)&g6;
    return function_4f4170(a1, 0, 0);
}

// Address range: 0x508eca - 0x508f16
// From class:    std::moneypunct<wchar_t, true>
// Type:          constructor
int64_t function_508eca(int64_t a1, int64_t a2, int64_t a3) {
    // 0x508eca
    int64_t v1; // 0x508eca
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)(v1 + 16) = a2;
    *(int32_t *)(v1 + 8) = (int32_t)(a3 != 0) | ((int32_t)&g35 ^ (int32_t)&g35) & -256;
    *(int64_t *)v1 = (int64_t)&g6;
    return function_4f4170(v1, 0, 0);
}

// Address range: 0x508f16 - 0x508f66
// From class:    std::moneypunct<wchar_t, true>
// Type:          constructor
int64_t function_508f16(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x508f16
    int64_t v1; // 0x508f16
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)(v1 + 16) = 0;
    *(int32_t *)(v1 + 8) = (int32_t)(a4 != 0) | ((int32_t)&g35 ^ (int32_t)&g35) & -256;
    *(int64_t *)v1 = (int64_t)&g6;
    return function_4f4170(v1, (int32_t)a2, (int32_t)a3);
}

// Address range: 0x508f66 - 0x508fa2
int64_t function_508f66(void) {
    // 0x508f66
    int64_t v1; // 0x508f66
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t result = *(int64_t *)((int64_t)&g35 + 16); // 0x508f83
    if (result != g31) {
        // 0x508fa0
        return result;
    }
    // 0x508f90
    return (int64_t)*(int32_t *)(*(int64_t *)(v1 + 16) + 36);
}

// Address range: 0x508fb0 - 0x508fd2
int64_t function_508fb0(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 24); // 0x508fb3
    if (result != g22) {
        // 0x508fd0
        return result;
    }
    // 0x508fc0
    return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 40);
}

// Address range: 0x508fe0 - 0x5091c2
int64_t function_508fe0(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x508fe8
    int64_t v2 = a2; // 0x509006
    if (*(int64_t *)(a2 + 32) == g27) {
        // 0x509008
        v2 = *(int64_t *)(*(int64_t *)(a2 + 16) + 16);
        function_250b0();
    }
    // 0x50901a
    if (v1 == __readfsqword(40)) {
        // 0x50902d
        return result;
    }
    // 0x50903c
    __stack_chk_fail();
    int64_t v3 = __readfsqword(40); // 0x509058
    int64_t v4 = v2; // 0x509076
    if (*(int64_t *)(*(int64_t *)v2 + 40) == g33) {
        // 0x509078
        v4 = *(int64_t *)(*(int64_t *)(v2 + 16) + 48);
        function_35ef6();
    }
    // 0x50908a
    if (v3 == __readfsqword(40)) {
        // 0x50902d
        return result;
    }
    // 0x5090ac
    __stack_chk_fail();
    int64_t v5 = __readfsqword(40); // 0x5090c8
    int64_t v6 = v4; // 0x5090e6
    if (*(int64_t *)(*(int64_t *)v4 + 48) == g32) {
        // 0x5090e8
        v6 = *(int64_t *)(*(int64_t *)(v4 + 16) + 64);
        function_35ef6();
    }
    // 0x5090fa
    if (v5 == __readfsqword(40)) {
        // 0x50902d
        return result;
    }
    // 0x50911c
    __stack_chk_fail();
    int64_t v7 = __readfsqword(40); // 0x509138
    if (*(int64_t *)(*(int64_t *)v6 + 56) == g29) {
        // 0x509158
        function_35ef6();
    }
    // 0x50916a
    if (v7 == __readfsqword(40)) {
        // 0x50902d
        return result;
    }
    // 0x50918c
    __stack_chk_fail();
    int64_t result2 = *(int64_t *)(result + 64); // 0x5091a3
    if (result2 != g15) {
        // 0x50902d
        return result2;
    }
    // 0x5091b0
    return (int64_t)*(int32_t *)(*(int64_t *)(result + 16) + 96);
}

// Address range: 0x5091d0 - 0x5096aa
// From class:    std::money_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          constructor
int64_t function_5091d0(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x5091d4
    int64_t result = *(int64_t *)(a1 + 72); // 0x5091e7
    int64_t v2; // 0x5091d0
    if (result != g23) {
        // 0x509210
        if (v1 == __readfsqword(40)) {
            // 0x509220
            return result;
        }
    } else {
        int64_t v3 = __readfsqword(40) ^ v1; // 0x5091fd
        v2 = v3;
        if (v3 == 0) {
            // 0x50920b
            return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 100);
        }
    }
    // 0x509226
    __stack_chk_fail();
    int64_t v4 = __readfsqword(40); // 0x509234
    int64_t result2 = *(int64_t *)(a1 + 80); // 0x509247
    int64_t * v5; // 0x5091d0
    int64_t v6; // 0x5091d0
    if (result2 != g34) {
        // 0x509270
        if (v4 == __readfsqword(40)) {
            // 0x509220
            return result2;
        }
        // 0x509270
        v5 = (int64_t *)(a1 + 16);
        v6 = v2;
    } else {
        int64_t * v7 = (int64_t *)(a1 + 16);
        int64_t v8 = __readfsqword(40) ^ v4; // 0x50925d
        v5 = v7;
        v6 = v8;
        if (v8 == 0) {
            // 0x50926b
            return (int64_t)*(int32_t *)(*v7 + 104);
        }
    }
    // 0x509286
    __stack_chk_fail();
    *v5 = 0;
    int64_t v9 = __readfsqword(40); // 0x5092a6
    *(int32_t *)(a1 + 8) = (int32_t)(v6 != 0);
    int64_t * v10 = (int64_t *)a1; // 0x5092d0
    *v10 = (int64_t)&g7;
    function_4f47e0(a1, 0, 0);
    *v10 = (int64_t)&g8;
    bool v11; // 0x5091d0
    int64_t v12 = v11 ? -1 : 1;
    int64_t v13 = (int64_t)&g1; // 0x5091d0
    int64_t v14 = a2; // 0x5092f5
    int64_t v15 = 2; // 0x5092f5
    unsigned char v16 = *(char *)v14; // 0x5092f5
    char v17 = *(char *)v13; // 0x5092f5
    v14 += v12;
    char v18 = v17; // 0x5092f5
    bool v19 = false; // 0x5092f5
    while (v16 == v17) {
        v15--;
        v13 += v12;
        v18 = v16;
        v19 = true;
        if (v15 == 0) {
            // break -> 
            break;
        }
        v16 = *(char *)v14;
        v17 = *(char *)v13;
        v14 += v12;
        v18 = v17;
        v19 = false;
    }
    unsigned char v20 = v18;
    int64_t v21 = (int64_t)"POSIX"; // 0x5092fe
    int64_t v22 = a2; // 0x5092fe
    int64_t v23 = 6; // 0x5092fe
    int64_t v24 = v14; // 0x5092fe
    if ((v16 >= v20 && !v19) != v16 < v20) {
        unsigned char v25 = *(char *)v22; // 0x50930f
        char v26 = *(char *)v21; // 0x50930f
        v22 += v12;
        v23--;
        char v27 = v26; // 0x50930f
        bool v28 = false; // 0x50930f
        while (v25 == v26) {
            // 0x509300
            v21 += v12;
            v27 = v25;
            v28 = true;
            if (v23 == 0) {
                // break -> 
                break;
            }
            v25 = *(char *)v22;
            v26 = *(char *)v21;
            v22 += v12;
            v23--;
            v27 = v26;
            v28 = false;
        }
        unsigned char v29 = v27;
        v24 = v22;
        if ((v25 >= v29 && !v28) != v25 < v29) {
            // 0x509338
            int32_t v30; // bp-88, 0x5091d0
            function_5679b0((int64_t *)&v30, a2, 0, v23);
            function_4f47e0(a1, v30, 0);
            function_5679e0((int64_t *)&v30);
            v24 = v30;
        }
    }
    int64_t result3 = __readfsqword(40) ^ v9; // 0x50931f
    if (result3 == 0) {
        // 0x509220
        return result3;
    }
    // 0x509360
    __stack_chk_fail();
    function_4f4f50(a1);
    _Unwind_Resume((struct _Unwind_Exception *)&g35);
    function_565970(a1);
    _Unwind_Resume((struct _Unwind_Exception *)&g35);
    int64_t v31 = *(int64_t *)v24; // 0x50939b
    *(int64_t *)((int64_t)&g35 + 16) = 0;
    int64_t v32 = __readfsqword(40); // 0x5093a6
    *(int32_t *)((int64_t)&g35 + 8) = 0;
    *(int64_t *)&g35 = (int64_t)&g7;
    function_4f47e0((int64_t)&g35, 0, 0);
    *(int64_t *)&g35 = (int64_t)&g8;
    int64_t v33 = (int64_t)&g1; // 0x5091d0
    int64_t v34 = v31; // 0x5093f5
    int64_t v35 = 2; // 0x5093f5
    unsigned char v36 = *(char *)v34; // 0x5093f5
    char v37 = *(char *)v33; // 0x5093f5
    v34 += v12;
    char v38 = v37; // 0x5093f5
    bool v39 = false; // 0x5093f5
    while (v36 == v37) {
        v35--;
        v33 += v12;
        v38 = v36;
        v39 = true;
        if (v35 == 0) {
            // break -> 
            break;
        }
        v36 = *(char *)v34;
        v37 = *(char *)v33;
        v34 += v12;
        v38 = v37;
        v39 = false;
    }
    unsigned char v40 = v38;
    int64_t v41 = (int64_t)"POSIX"; // 0x5093fe
    int64_t v42 = v31; // 0x5093fe
    int64_t v43 = 6; // 0x5093fe
    int64_t v44 = v34; // 0x5093fe
    if ((v36 >= v40 && !v39) != v36 < v40) {
        unsigned char v45 = *(char *)v42; // 0x50940f
        char v46 = *(char *)v41; // 0x50940f
        v42 += v12;
        v43--;
        char v47 = v46; // 0x50940f
        bool v48 = false; // 0x50940f
        while (v45 == v46) {
            // 0x509400
            v41 += v12;
            v47 = v45;
            v48 = true;
            if (v43 == 0) {
                // break -> 
                break;
            }
            v45 = *(char *)v42;
            v46 = *(char *)v41;
            v42 += v12;
            v43--;
            v47 = v46;
            v48 = false;
        }
        unsigned char v49 = v47;
        v44 = v42;
        if ((v45 >= v49 && !v48) != v45 < v49) {
            // 0x509438
            char * v50; // bp-128, 0x5091d0
            function_5679b0((int64_t *)&v50, v31, 0, v43);
            int64_t v51 = (int64_t)v50; // 0x509448
            function_4f47e0((int64_t)&g35, (int32_t)v51, 0);
            function_5679e0((int64_t *)&v50);
            v44 = v51;
        }
    }
    int64_t result4 = __readfsqword(40) ^ v32; // 0x50941f
    if (result4 == 0) {
        // 0x509220
        return result4;
    }
    // 0x509460
    __stack_chk_fail();
    function_4f4f50((int64_t)&g35);
    _Unwind_Resume((struct _Unwind_Exception *)&g35);
    function_565970((int64_t)&g35);
    _Unwind_Resume((struct _Unwind_Exception *)&g35);
    *(int64_t *)((int64_t)&g35 + 16) = 0;
    int64_t v52 = __readfsqword(40); // 0x5094a6
    *(int32_t *)((int64_t)&g35 + 8) = 0;
    *(int64_t *)&g35 = (int64_t)&g6;
    function_4f4170((int64_t)&g35, 0, 0);
    *(int64_t *)&g35 = (int64_t)&g9;
    int64_t v53 = (int64_t)&g1; // 0x5091d0
    int64_t v54 = v44; // 0x5094f5
    int64_t v55 = 2; // 0x5094f5
    unsigned char v56 = *(char *)v54; // 0x5094f5
    char v57 = *(char *)v53; // 0x5094f5
    v54 += v12;
    char v58 = v57; // 0x5094f5
    bool v59 = false; // 0x5094f5
    while (v56 == v57) {
        v55--;
        v53 += v12;
        v58 = v56;
        v59 = true;
        if (v55 == 0) {
            // break -> 
            break;
        }
        v56 = *(char *)v54;
        v57 = *(char *)v53;
        v54 += v12;
        v58 = v57;
        v59 = false;
    }
    unsigned char v60 = v58;
    int64_t v61 = (int64_t)"POSIX"; // 0x5094fe
    int64_t v62 = v44; // 0x5094fe
    int64_t v63 = 6; // 0x5094fe
    int64_t v64 = v54; // 0x5094fe
    if ((v56 >= v60 && !v59) != v56 < v60) {
        unsigned char v65 = *(char *)v62; // 0x50950f
        char v66 = *(char *)v61; // 0x50950f
        v62 += v12;
        v63--;
        char v67 = v66; // 0x50950f
        bool v68 = false; // 0x50950f
        while (v65 == v66) {
            // 0x509500
            v61 += v12;
            v67 = v65;
            v68 = true;
            if (v63 == 0) {
                // break -> 
                break;
            }
            v65 = *(char *)v62;
            v66 = *(char *)v61;
            v62 += v12;
            v63--;
            v67 = v66;
            v68 = false;
        }
        unsigned char v69 = v67;
        v64 = v62;
        if ((v65 >= v69 && !v68) != v65 < v69) {
            // 0x509538
            int64_t v70; // bp-168, 0x5091d0
            function_5679b0(&v70, v44, 0, v63);
            function_4f4170((int64_t)&g35, (int32_t)v70, 0);
            function_5679e0(&v70);
            v64 = v70;
        }
    }
    int64_t result5 = __readfsqword(40) ^ v52; // 0x50951f
    if (result5 == 0) {
        // 0x509220
        return result5;
    }
    // 0x509560
    __stack_chk_fail();
    function_4f4e50((int64_t)&g35);
    _Unwind_Resume((struct _Unwind_Exception *)&g35);
    function_565970((int64_t)&g35);
    _Unwind_Resume((struct _Unwind_Exception *)&g35);
    int64_t v71 = *(int64_t *)v64; // 0x50959b
    *(int64_t *)((int64_t)&g35 + 16) = 0;
    int64_t v72 = __readfsqword(40); // 0x5095a6
    *(int32_t *)((int64_t)&g35 + 8) = 0;
    *(int64_t *)&g35 = (int64_t)&g6;
    function_4f4170((int64_t)&g35, 0, 0);
    *(int64_t *)&g35 = (int64_t)&g9;
    int64_t v73 = (int64_t)&g1; // 0x5091d0
    int64_t v74 = v71; // 0x5095f5
    int64_t v75 = 2; // 0x5095f5
    unsigned char v76 = *(char *)v74; // 0x5095f5
    char v77 = *(char *)v73; // 0x5095f5
    v74 += v12;
    char v78 = v77; // 0x5095f5
    bool v79 = false; // 0x5095f5
    while (v76 == v77) {
        v75--;
        v73 += v12;
        v78 = v76;
        v79 = true;
        if (v75 == 0) {
            // break -> 
            break;
        }
        v76 = *(char *)v74;
        v77 = *(char *)v73;
        v74 += v12;
        v78 = v77;
        v79 = false;
    }
    unsigned char v80 = v78;
    int64_t v81 = (int64_t)"POSIX"; // 0x5095fe
    int64_t v82 = v71; // 0x5095fe
    int64_t v83 = 6; // 0x5095fe
    int64_t v84 = v74; // 0x5095fe
    if ((v76 >= v80 && !v79) != v76 < v80) {
        unsigned char v85 = *(char *)v82; // 0x50960f
        char v86 = *(char *)v81; // 0x50960f
        v82 += v12;
        v83--;
        char v87 = v86; // 0x50960f
        bool v88 = false; // 0x50960f
        while (v85 == v86) {
            // 0x509600
            v81 += v12;
            v87 = v85;
            v88 = true;
            if (v83 == 0) {
                // break -> 
                break;
            }
            v85 = *(char *)v82;
            v86 = *(char *)v81;
            v82 += v12;
            v83--;
            v87 = v86;
            v88 = false;
        }
        unsigned char v89 = v87;
        v84 = v82;
        if ((v85 >= v89 && !v88) != v85 < v89) {
            // 0x509638
            int32_t v90; // bp-208, 0x5091d0
            function_5679b0((int64_t *)&v90, v71, 0, v83);
            function_4f4170((int64_t)&g35, v90, 0);
            function_5679e0((int64_t *)&v90);
            v84 = v90;
        }
    }
    int64_t result6 = __readfsqword(40) ^ v72; // 0x50961f
    if (result6 == 0) {
        // 0x509220
        return result6;
    }
    // 0x509660
    __stack_chk_fail();
    function_4f4e50((int64_t)&g35);
    _Unwind_Resume((struct _Unwind_Exception *)&g35);
    function_565970((int64_t)&g35);
    _Unwind_Resume((struct _Unwind_Exception *)&g35);
    *(int32_t *)((int64_t)&g35 + 8) = (int32_t)(v84 != 0) | ((int32_t)&g35 ^ (int32_t)&g35) & -256;
    *(int64_t *)&g35 = (int64_t)&g10;
    return (int64_t)&g10;
}

// Address range: 0x5096b0 - 0x5096bd
int64_t function_5096b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x5096b0
    return *(int64_t *)(a1 + 16);
}

// Address range: 0x5096c0 - 0x5096cd
int64_t function_5096c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x5096c0
    return *(int64_t *)(a1 + 24);
}

// Address range: 0x5096d0 - 0x5096ea
// From class:    std::money_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          constructor
int64_t function_5096d0(int64_t a1, int64_t a2) {
    // 0x5096d0
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a2 != 0);
    *(int64_t *)a1 = (int64_t)&g11;
    return (int64_t)&g11;
}

// Address range: 0x5096f0 - 0x5096f9
int64_t function_5096f0(int64_t result, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5096f0
    return result;
}

// Address range: 0x509700 - 0x509709
int64_t function_509700(int64_t result, int64_t a2, int64_t a3, int64_t a4) {
    // 0x509700
    return result;
}

// Address range: 0x509710 - 0x50976d
// From class:    std::__numpunct_cache<wchar_t>
// Type:          constructor
int64_t function_509710(int64_t a1, int64_t a2) {
    // 0x509710
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 24) = 0;
    *(char *)(a1 + 32) = 0;
    *(int32_t *)(a1 + 8) = (int32_t)(a2 != 0);
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 48) = 0;
    *(int64_t *)(a1 + 56) = 0;
    *(int64_t *)(a1 + 64) = 0;
    *(int64_t *)(a1 + 72) = 0;
    *(char *)(a1 + 328) = 0;
    *(int64_t *)a1 = (int64_t)&g12;
    return (int64_t)&g12;
}

// Address range: 0x509770 - 0x5097a8
// From class:    std::numpunct<wchar_t>
// Type:          constructor
int64_t function_509770(int64_t a1, int64_t a2) {
    // 0x509770
    *(int64_t *)(a1 + 16) = 0;
    *(int32_t *)(a1 + 8) = (int32_t)(a2 != 0);
    *(int64_t *)a1 = (int64_t)&g5;
    return function_56b2c0();
}

// Address range: 0x5097a8 - 0x5097f4
// From class:    std::numpunct<wchar_t>
// Type:          constructor
int64_t function_5097a8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5097a8
    int64_t v1; // 0x5097a8
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)(v1 + 16) = a2;
    *(int32_t *)(v1 + 8) = (int32_t)(a3 != 0) | ((int32_t)&g35 ^ (int32_t)&g35) & -256;
    *(int64_t *)v1 = (int64_t)&g5;
    return function_56b2c0();
}

// Address range: 0x5097f4 - 0x509846
// From class:    std::numpunct<wchar_t>
// Type:          constructor
int64_t function_5097f4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5097f4
    int64_t v1; // 0x5097f4
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)(v1 + 16) = 0;
    *(int32_t *)(v1 + 8) = (int32_t)(a3 != 0) | ((int32_t)&g35 ^ (int32_t)&g35) & -256;
    *(int64_t *)v1 = (int64_t)&g5;
    return function_56b2c0();
}

// Address range: 0x509846 - 0x509882
int64_t function_509846(void) {
    // 0x509846
    int64_t v1; // 0x509846
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t result = *(int64_t *)((int64_t)&g35 + 16); // 0x509863
    if (result != g21) {
        // 0x509880
        return result;
    }
    // 0x509870
    return (int64_t)*(int32_t *)(*(int64_t *)(v1 + 16) + 72);
}

// Address range: 0x509890 - 0x5098b2
int64_t function_509890(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 24); // 0x509893
    if (result != g26) {
        // 0x5098b0
        return result;
    }
    // 0x5098a0
    return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 76);
}

// Address range: 0x5098c0 - 0x50998a
int64_t function_5098c0(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x5098c8
    int64_t v2 = a2; // 0x5098e6
    if (*(int64_t *)(a2 + 32) == g17) {
        // 0x5098e8
        v2 = *(int64_t *)(*(int64_t *)(a2 + 16) + 16);
        function_250b0();
    }
    // 0x5098fa
    if (v1 == __readfsqword(40)) {
        // 0x50990d
        return result;
    }
    // 0x50991c
    __stack_chk_fail();
    __readfsqword(40);
    int64_t result2 = *(int64_t *)(*(int64_t *)v2 + 40); // 0x50994b
    if (result2 != g14) {
        // 0x50990d
        return result2;
    }
    // 0x509958
    function_35ef6();
    __readfsqword(40);
    return result;
}

// Address range: 0x53da0b - 0x53da19
int64_t function_53da0b(void) {
    // 0x53da0b
    int64_t v1; // 0x53da0b
    *(int32_t *)(v1 & -176) = 4;
    return function_53db55(v1, (int64_t)&g35);
}

// Address range: 0x53da20 - 0x53db55
int64_t function_53da20(int32_t a1) {
    // 0x53da20
    int32_t n; // 0x53da20
    int64_t c; // 0x53da20
    wmemchr((int32_t *)(c + 240), (int32_t)c, n);
    int64_t * v1 = (int64_t *)(c + 16); // 0x53dac4
    *v1 = *v1 + 4;
    if (c != 0) {
        function_53d95b();
    }
    if ((char)c == 1) {
        function_53d9d6();
    }
    if (n != -1) {
        function_53d9d6();
    }
    // 0x53db3e
    *(int64_t *)c = 0;
    int32_t * v2; // 0x53da20
    return (int64_t)v2;
}

// Address range: 0x53db55 - 0x53dbbc
int64_t function_53db55(int64_t a1, int64_t a2) {
    // 0x53db55
    char v1; // 0x53db55
    if (v1 != 0) {
        // branch -> 0x53db64
    }
    if (a2 + 16 != a1) {
        // 0x53db7c
        function_4eeb50();
    }
    // 0x53db93
    __readfsqword(40);
    int64_t result; // 0x53db55
    return result;
}

// Address range: 0x53dbf5 - 0x53dbf8
int64_t function_53dbf5(void) {
    // 0x53dbf5
    int64_t result; // 0x53dbf5
    return result;
}
