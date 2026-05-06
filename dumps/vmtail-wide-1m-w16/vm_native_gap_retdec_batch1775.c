/*
 * Targeted RetDec C for native executable gap queue batch 1775.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x6771a-0x6791a rank=- name=- kind=- bytes=- uncovered=-
 *   0x6791a-0x67b1a rank=- name=- kind=- bytes=- uncovered=-
 *   0x67b1a-0x67c0c rank=- name=- kind=- bytes=- uncovered=-
 *   0x34a6d8-0x34a8d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34a8d8-0x34aad8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34aad8-0x34abc6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b80c9-0x3b82c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x418342-0x418542 rank=- name=- kind=- bytes=- uncovered=-
 *   0x418542-0x418742 rank=- name=- kind=- bytes=- uncovered=-
 *   0x418742-0x41883d rank=- name=- kind=- bytes=- uncovered=-
 *   0x51a12b-0x51a32b rank=- name=- kind=- bytes=- uncovered=-
 *   0x51a32b-0x51a52b rank=- name=- kind=- bytes=- uncovered=-
 *   0x51a52b-0x51a610 rank=- name=- kind=- bytes=- uncovered=-
 *   0x55b9cc-0x55bbcc rank=- name=- kind=- bytes=- uncovered=-
 *   0x55bbcc-0x55bdcc rank=- name=- kind=- bytes=- uncovered=-
 *   0x55bdcc-0x55bec0 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g7;
extern int g8;
extern int g9;
extern int g10;
extern int g11;
extern int g12;
extern int g13;
extern int g14;
extern int g15;
extern int g17;
extern int g18;
extern int g19;
extern int g20;
extern int g21;
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

int64_t function_134f7d7a();
int64_t function_2508e();
int64_t function_255da();
int64_t function_25856();
int64_t function_2601b();
int64_t function_34a6d8(void);
int64_t function_34a6fb(void);
int64_t function_34a745(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_34a776(int64_t a1, int64_t a2);
int64_t function_34a8e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34a8fa(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34a909(void);
int64_t function_34a91c(int64_t a1, int64_t a2);
int64_t function_34a926(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34a979(int64_t a1);
int64_t function_34a9ee(void);
int64_t function_34aa0e(void);
int64_t function_34aa56(int64_t a1);
int64_t function_34aa6e(void);
int64_t function_34aa94(void);
int64_t function_34aa96(void);
int64_t function_34aaf3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37633238();
int64_t function_3b80ae();
int64_t function_3b80c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3b8196(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b81de(void);
int64_t function_3b821e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b824e(void);
int64_t function_3b8275(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_418342(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4183b1(void);
int64_t function_4184e2(void);
int64_t function_418517(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41852e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41856a(void);
int64_t function_4185ba(void);
int64_t function_4185cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_418606(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_418618(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_418646(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41864c(int64_t a1);
int64_t function_41869a(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_4186ad(void);
int64_t function_4186da(void);
int64_t function_4186eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_418762(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_418795(void);
int64_t function_4187e0(void);
int64_t function_41882d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4482e();
int64_t function_48d7ed();
int64_t function_48eb2b();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_51a12b(int64_t a1, int64_t a2);
int64_t function_51a5b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_51a5c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_51a5d0(int64_t a1, int64_t a2);
int64_t function_51a5f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_51a600(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_542470();
int64_t function_542590();
int64_t function_54d560();
int64_t function_554b00();
int64_t function_55a5d0();
int64_t function_55b97d();
int64_t function_55b9cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_55b9d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_55b9e0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int32_t a9, int32_t a10);
int64_t function_565970();
int64_t function_5679b0();
int64_t function_5679e0();
int64_t function_569370();
int64_t function_569910();
int64_t function_569eb0();
int64_t function_569fc0();
int64_t function_673c2();
int64_t function_6747c();
int64_t function_67668();
int64_t function_6771a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_678a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_781287cd();
int64_t unknown_1b5b6b3c();
int64_t unknown_263209de();
int64_t unknown_63c086f7();
int64_t unknown_ffffffff88ac4a4a();
int64_t unknown_ffffffffb1ddc3db();

// Address range: 0x6771a - 0x678a4
int64_t function_6771a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int64_t v2 = __readfsqword(40); // 0x67728
    int64_t v3 = 0; // 0x6773b
    if (a1 != 0) {
        int32_t * wstr = (int32_t *)a1; // 0x67744
        int32_t n = wcslen(wstr); // 0x67744
        int64_t v4 = (int64_t)&g18; // 0x67757
        if (n != 0) {
            if (n <= 0xffffffff) {
                // 0x67773
                function_542590("basic_string::_S_create");
            }
            int64_t v5 = n; // 0x67744
            int64_t v6 = 4 * v5; // 0x67749
            uint64_t v7 = v6 + 60; // 0x67787
            int64_t v8 = v6; // 0x67791
            int64_t v9 = v5; // 0x67791
            if (v7 > (int64_t)&g1) {
                uint64_t v10 = ((int64_t)&g1 - (v7 & (int64_t)(int32_t)&g20)) / 4 + v5; // 0x677a9
                v9 = v10 < 0xffffffffffffffe ? v10 : 0xffffffffffffffe;
                v8 = 4 * v9;
            }
            int64_t v11 = v8 + 28;
            v1 = v11;
            int64_t v12 = function_4efd30(v11); // 0x677c0
            *(int64_t *)(v12 + 8) = v9;
            int32_t * v13 = (int32_t *)(v12 + 16); // 0x677d0
            *v13 = 0;
            int64_t wstr2 = v12 + 24; // 0x677d7
            if (n != 1) {
                // 0x677eb
                wmemcpy((int32_t *)wstr2, wstr, n);
            } else {
                // 0x677dd
                *(int32_t *)wstr2 = *(int32_t *)&v1;
            }
            // 0x677f9
            v4 = wstr2;
            if (v12 != (int64_t)&g17) {
                // 0x677fe
                *v13 = 0;
                *(int64_t *)v12 = v5;
                *(int32_t *)(wstr2 + v6) = 0;
                v4 = wstr2;
            }
        }
        int64_t v14 = v4; // bp-80, 0x67823
        int64_t v15; // bp-72, 0x6771a
        function_48eb2b(&v15, &v14);
        int64_t v16 = function_6747c(v15); // 0x67835
        function_2508e(&v15);
        int64_t v17 = v14 - 24; // 0x6784a
        v1 = v17;
        v3 = v16;
        if (v17 != (int64_t)&g17) {
            int32_t * v18 = (int32_t *)(v14 - 8);
            int32_t v19 = *v18;
            *v18 = v19 - 1;
            v3 = v16;
            if (v19 >= 0 != v19 != 0) {
                // 0x67874
                function_4eeb50(v1);
                v3 = v16;
            }
        }
    }
    int64_t result = v3; // 0x6788e
    if (v2 != __readfsqword(40)) {
        // 0x67890
        __stack_chk_fail();
        result = (int64_t)&g21;
    }
    // 0x67895
    return result;
}

// Address range: 0x678a4 - 0x67c0b
int64_t function_678a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x678bb
    int64_t v2 = __readfsqword(40); // 0x678bf
    int64_t v3; // bp-833, 0x678a4
    int64_t v4 = (int64_t)&v3; // 0x678e8
    int64_t v5 = -1; // 0x678f0
    int64_t v6 = a2; // 0x678f0
    int64_t v7 = 0; // 0x678f0
    while (v5 != 0) {
        int64_t v8 = v6;
        v5--;
        bool v9; // 0x678a4
        v6 = v8 + (v9 ? -1 : 1);
        v7 = v5;
        if (*(char *)v8 == 0) {
            // break -> 
            break;
        }
        v7 = 0;
    }
    int64_t v10 = 0; // bp-888, 0x678ff
    int64_t v11 = 0; // bp-864, 0x67926
    __asm_rep_movsb_memcpy((char *)&v3, (char *)&g4, (int64_t)&g3);
    int64_t v12 = 0x100000000 * v4 >> 32; // 0x6796d
    int32_t v13 = 0x20eebaa9; // 0x67969
    int64_t v14 = 0;
    *(int32_t *)(v14 + v4) = *(int32_t *)(v14 + v12) ^ v13;
    int64_t v15 = v14 + 4; // 0x6797f
    v13 = llvm_bswap_i32(0xa00f * v13 + 0xedae2);
    while (v15 != (int64_t)&g2) {
        // 0x6796d
        v14 = v15;
        *(int32_t *)(v14 + v4) = *(int32_t *)(v14 + v12) ^ v13;
        v15 = v14 + 4;
        v13 = llvm_bswap_i32(0xa00f * v13 + 0xedae2);
    }
    uint64_t v16 = -2 - v7; // 0x6791d
    char * v17 = (char *)(v4 + (int64_t)&g2); // 0x67999
    *v17 = *v17 ^ (char)v13;
    int64_t v18 = v4; // 0x679aa
    int64_t v19 = v1; // 0x679aa
    char * v20; // bp-928, 0x678a4
    if (v16 == 0) {
        goto lab_0x67bad;
    } else {
        int64_t v21 = (v16 + 1) % 3;
        v18 = 3;
        v19 = v1;
        if (v21 != 0) {
            goto lab_0x67bad;
        } else {
            char * v22 = NULL;
            int64_t v23 = 0;
            int64_t v24 = v21;
            int64_t v25 = a2; // 0x67b4b
            while (true) {
                int64_t v26 = v23;
                char * v27 = v22;
                int64_t v28 = function_673c2(2, 0); // 0x679db
                uint16_t v29 = *(int16_t *)v25; // 0x679e7
                int64_t v30 = v28 + 24; // 0x679ec
                *(int16_t *)v30 = v29;
                if (v28 != (int64_t)g13) {
                    // 0x679f6
                    *(int32_t *)(v28 + 16) = 0;
                    *(int64_t *)v28 = 2;
                    *(char *)(v28 + 26) = 0;
                }
                int64_t v31 = v24 & -0x10000 | (int64_t)v29; // 0x679e7
                v20 = (char *)v30;
                int64_t v32 = function_48d7ed(&v3, v30, v31); // 0x67a10
                int64_t v33; // 0x678a4
                int64_t v34; // 0x678a4
                char * v35; // 0x678a4
                char v36; // bp-929, 0x678a4
                char v37; // 0x678a4
                if (v32 == 0) {
                    // 0x67aed
                    function_255da((int64_t *)&v20);
                    function_255da((int64_t *)&v20);
                    if (*v20 != *(char *)((int64_t)v20 + 1)) {
                        // break -> 0x67b7a
                        break;
                    }
                    // 0x67b10
                    function_255da((int64_t *)&v20);
                    if (*v20 != 63) {
                        // break -> 0x67b7a
                        break;
                    }
                    // 0x67b22
                    v36 = 0;
                    function_4482e(&v10, &v36);
                    v37 = 63;
                    v35 = v27;
                    v34 = v26;
                    v33 = v31;
                } else {
                    int64_t v38 = v32 - v4; // 0x67a1e
                    int64_t v39 = (int64_t)v27; // 0x67a26
                    uint128_t v40 = 0x8000000000000000 * (int128_t)(v38 >> 63) | (int128_t)v38; // 0x67a2d
                    char v41 = v40 / 3; // 0x67a35
                    int64_t v42; // 0x678a4
                    int64_t v43; // 0x678a4
                    int64_t v44; // 0x678a4
                    if (v26 == v39) {
                        int64_t v45 = function_25856(&v10, 1, "vector::_M_realloc_insert", 3); // 0x67a61
                        int64_t v46 = v10; // 0x67a76
                        int64_t v47 = 0; // 0x67a76
                        if (v45 != 0) {
                            // 0x67a78
                            v46 = v10;
                            v47 = function_4efd30(v45);
                        }
                        // 0x67a8d
                        *(char *)(v26 - v10 + v47) = v41;
                        int64_t v48 = function_2601b(v46, v26, v47) + 1; // 0x67aaa
                        int64_t v49 = function_2601b(v26, v26, v48); // 0x67ab1
                        int64_t v50 = v10; // 0x67ab6
                        if (v50 != 0) {
                            // 0x67ac3
                            function_4eeb50(v50);
                        }
                        // 0x67ac8
                        v10 = v47;
                        v44 = v49;
                        v43 = v47 + v45;
                        v42 = v48;
                    } else {
                        // 0x67a3c
                        *v27 = v41;
                        v44 = v39 + 1;
                        v43 = v26;
                        v42 = v40 % 3;
                    }
                    // 0x67adc
                    v37 = 88;
                    v35 = (char *)v44;
                    v34 = v43;
                    v33 = v42;
                }
                // 0x67b46
                v36 = v37;
                function_4482e(&v11, &v36);
                v25 += 3;
                function_2508e((int64_t *)&v20);
                if (v16 <= v25 - a2) {
                    // 0x67b84
                    v20 = NULL;
                    function_4482e(&v11, (char *)&v20);
                    int64_t v51 = function_67668(a1, &v10, v11); // 0x67ba5
                    v18 = 3;
                    v19 = v51;
                    goto lab_0x67bad;
                }
                // 0x67b65
                v24 = v33;
                v23 = v34;
                v22 = v35;
                if (v25 == 0) {
                    // 0x67b6e
                    function_542470("basic_string::_S_construct null not valid");
                    goto lab_0x67b7a;
                }
            }
            goto lab_0x67b7a;
        }
    }
  lab_0x67bad:
    // 0x67bad
    memset2((void *)(int64_t)(&v3), 0, &g3, v18);
    if (v11 != 0) {
        // 0x67bca
        function_4eeb50(v11);
    }
    // 0x67bcf
    if (v10 != 0) {
        // 0x67bd9
        function_4eeb50(v10);
    }
    int64_t result = v19; // 0x67bf2
    if (v2 != __readfsqword(40)) {
        // 0x67bf4
        __stack_chk_fail();
        result = (int64_t)&g21;
    }
    // 0x67bf9
    return result;
  lab_0x67b7a:
    // 0x67b7a
    function_2508e((int64_t *)&v20);
    v18 = 3;
    v19 = v1;
    goto lab_0x67bad;
}

// Address range: 0x34a6d8 - 0x34a6dd
int64_t function_34a6d8(void) {
    // 0x34a6d8
    return unknown_263209de();
}

// Address range: 0x34a6fb - 0x34a6fc
int64_t function_34a6fb(void) {
    // 0x34a6fb
    int64_t result; // 0x34a6fb
    return result;
}

// Address range: 0x34a745 - 0x34a750
int64_t function_34a745(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x3c0aa071); // 0x34a747
    *v1 = *v1 + (int32_t)a4;
    int64_t v2; // 0x34a745
    return v2 & -256 | a4 / 256 % 256;
}

// Address range: 0x34a776 - 0x34a779
int64_t function_34a776(int64_t a1, int64_t a2) {
    // 0x34a776
    int64_t v1; // 0x34a776
    *(char *)a1 = (char)v1;
    return function_34a6fb();
}

// Address range: 0x34a8e0 - 0x34a8f8
int64_t function_34a8e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x34a8e0
    int64_t v1; // 0x34a8e0
    int64_t v2 = v1;
    int64_t result = v1;
    int32_t * v3 = (int32_t *)(result - 0x42057d80 + ((v2 & 0xff00) + result & 0xff00 | v2 & -0xff01)); // 0x34a8e4
    *v3 = *v3 + (int32_t)(256 * result & 0xff00 | a4 & 0xffff00ff);
    int32_t * v4 = (int32_t *)(v1 - 35); // 0x34a8ef
    bool v5; // 0x34a8e0
    *v4 = *v4 + (int32_t)((v5 ? 0xffffffff : 1) + a1);
    return result;
}

// Address range: 0x34a8fa - 0x34a8ff
int64_t function_34a8fa(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34a8fa
    int64_t result; // 0x34a8fa
    return result;
}

// Address range: 0x34a909 - 0x34a90a
int64_t function_34a909(void) {
    // 0x34a909
    int64_t result; // 0x34a909
    return result;
}

// Address range: 0x34a91c - 0x34a922
int64_t function_34a91c(int64_t a1, int64_t a2) {
    // 0x34a91c
    return function_134f7d7a();
}

// Address range: 0x34a926 - 0x34a94d
int64_t function_34a926(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 4); // 0x34a926
    int64_t v2; // 0x34a926
    *v1 = *v1 + (int32_t)v2;
    int64_t result; // 0x34a926
    unsigned char v3 = llvm_ctpop_i8((char)a3 - *(char *)&result); // 0x34a929
    int32_t v4 = result;
    *(int32_t *)-0x56f0a5cfe170e96 = v4;
    if (v3 % 2 != 0) {
        // 0x34a936
        *(char *)(v2 + 0x1e8b8cc) = (char)a4;
        return result;
    }
    // 0x34a93f
    bool v5; // 0x34a926
    int64_t v6 = (v5 ? -1 : 1) + a2; // 0x34a93f
    *(int32_t *)a1 = *(int32_t *)v6;
    int64_t v7 = v5 ? -4 : 4; // 0x34a941
    int64_t v8 = v6 + v7; // 0x34a941
    int64_t v9 = (int64_t)(v4 >> 31 & -0xff01) | (int64_t)&g19; // 0x34a942
    int64_t v10 = unknown_ffffffff88ac4a4a(v7 + a1, v8, v9); // 0x34a944
    result = v10;
    int64_t result2 = v10; // 0x34a94b
    if (*(int32_t *)v8 < (int32_t)v9) {
        result2 = function_34a909();
        result = result2;
    }
    // 0x34a94d
    return result2;
}

// Address range: 0x34a979 - 0x34a97b
int64_t function_34a979(int64_t a1) {
    // 0x34a979
    int64_t result; // 0x34a979
    return result;
}

// Address range: 0x34a9ee - 0x34a9f1
int64_t function_34a9ee(void) {
    // 0x34a9ee
    int64_t result; // 0x34a9ee
    return result;
}

// Address range: 0x34aa0e - 0x34aa1b
int64_t function_34aa0e(void) {
    // 0x34aa0e
    int64_t v1; // 0x34aa0e
    int32_t * v2 = (int32_t *)((int64_t)*(int32_t *)(v1 + 111) + 0x2cbc7bc8); // 0x34aa13
    *v2 = 2 * (int32_t)v1 + *v2;
    return function_34aa96();
}

// Address range: 0x34aa56 - 0x34aa57
int64_t function_34aa56(int64_t a1) {
    // 0x34aa56
    int64_t result; // 0x34aa56
    return result;
}

// Address range: 0x34aa6e - 0x34aa6f
int64_t function_34aa6e(void) {
    // 0x34aa6e
    int64_t result; // 0x34aa6e
    return result;
}

// Address range: 0x34aa94 - 0x34aa96
int64_t function_34aa94(void) {
    // 0x34aa94
    int64_t result; // 0x34aa94
    return result;
}

// Address range: 0x34aa96 - 0x34aa97
int64_t function_34aa96(void) {
    // 0x34aa96
    int64_t result; // 0x34aa96
    return result;
}

// Address range: 0x34aaf3 - 0x34aafa
int64_t function_34aaf3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34aaf3
    return function_37633238();
}

// Address range: 0x3b80c9 - 0x3b817e
int64_t function_3b80c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3b80c9
    int64_t v1; // 0x3b80c9
    int64_t v2 = a3 & -256 | (int64_t)(*(char *)(v1 + 0x79e9400) + (char)a3); // 0x3b80c9
    int32_t * v3 = (int32_t *)(v1 + 0x7bea3a27); // 0x3b80cf
    uint32_t v4 = (int32_t)v2; // 0x3b80cf
    int32_t v5 = *v3 + v4; // 0x3b80cf
    *v3 = v5;
    unknown_ffffffffb1ddc3db();
    int64_t result = __asm_int1(); // 0x3b80da
    if (v5 >= 0) {
        // 0x3b8158
        if (llvm_ctpop_i8((char)v5) % 2 != 0) {
            // 0x3b80fb
            return result;
        }
        char * v6 = (char *)(a1 - 0x6a3fff4d + 2 * a4); // 0x3b8165
        *v6 = *v6 + (char)v1;
        *(char *)(v2 + a4) = (char)(v1 / 256);
        uint32_t v7 = v4 + (int32_t)a1; // 0x3b8172
        int16_t v8 = v7; // 0x3b8175
        char v9 = __asm_sti(); // 0x3b8175
        __asm_out(v8, v9);
        *(char *)a1 = __asm_insb(v8);
        char * v10 = (char *)(4 * v1 + a1); // 0x3b817a
        *v10 = (char)(v7 < v4) - v9 + *v10;
        return a4 & 0xffffffff;
    }
    int32_t * v11 = (int32_t *)(result + 1); // 0x3b80e5
    uint32_t v12 = *v11; // 0x3b80e5
    uint32_t v13 = v12 + (int32_t)v1; // 0x3b80e5
    *v11 = v13;
    int64_t result2 = unknown_63c086f7(); // 0x3b80f1
    *(int32_t *)a1 = *(int32_t *)0x425b9914;
    uint32_t v14 = (int32_t)a4 % 32; // 0x3b80f7
    if (v14 == 0) {
        if (v13 >= v12) {
            // 0x3b80fb
            return result2;
        }
    } else {
        int32_t * v15 = (int32_t *)result2; // 0x3b80f7
        uint32_t v16 = *v15; // 0x3b80f7
        uint32_t v17 = v16 >> 32 - v14 | v16 << v14; // 0x3b80f7
        *v15 = v17;
        if (v17 % 2 == 0) {
            // 0x3b80fb
            return result2;
        }
    }
    // 0x3b80fb
    return function_3b80ae();
}

// Address range: 0x3b8196 - 0x3b819b
int64_t function_3b8196(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3b8196
    int64_t result; // 0x3b8196
    *(int32_t *)a3 = (int32_t)(result | a1);
    int64_t v1; // 0x3b8196
    *(char *)a1 = *(char *)&v1;
    return result;
}

// Address range: 0x3b81de - 0x3b81e1
int64_t function_3b81de(void) {
    // 0x3b81de
    int64_t result; // 0x3b81de
    return result;
}

// Address range: 0x3b821e - 0x3b8222
int64_t function_3b821e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b821e
    return a3 & 0xffffffff;
}

// Address range: 0x3b824e - 0x3b8254
int64_t function_3b824e(void) {
    // 0x3b824e
    int64_t v1; // 0x3b824e
    int64_t result = v1;
    *(char *)result = (char)result + 60;
    return result;
}

// Address range: 0x3b8275 - 0x3b82ac
int64_t function_3b8275(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2; // 0x3b8275
    int32_t * v3 = (int32_t *)(4 * a4 + 84 + v2); // 0x3b8286
    int32_t v4 = a1; // 0x3b8286
    *v3 = *v3 + v4;
    uint32_t v5 = *(int32_t *)&v1; // 0x3b8292
    *(int32_t *)v1 = v4;
    int64_t v6 = v5; // 0x3b8292
    int32_t * v7 = (int32_t *)(v6 + 0x2365e4b4); // 0x3b8297
    *v7 = *v7 + v5;
    int32_t * v8 = (int32_t *)(v6 - 0x17fedcbe); // 0x3b829e
    *v8 = *v8 - 0x4d8a43ff;
    int64_t v9; // 0x3b8275
    *(int32_t *)v9 = *(int32_t *)&v9 + (int32_t)a5;
    return (v2 | v2) & 0xffffffff;
}

// Address range: 0x418342 - 0x4183af
int64_t function_418342(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x418342
    int64_t v1; // 0x418342
    int32_t v2 = a2;
    int64_t v3 = 0x5eb60e12; // bp-8, 0x41837d
    __asm_outsd((int16_t)a3, v2);
    uint64_t v4 = (int64_t)&v3; // 0x418384
    char v5 = *(char *)(v1 + 119); // 0x418387
    int64_t result = 256 * (int64_t)((char)(v4 / 256) - v5) | v4 & -0xff08; // 0x418387
    if (v2 >= (int32_t)a1) {
        // 0x41838d
        return result + 0xf4f899e7 & 0xffffff00 | (int64_t)*(char *)-0x2bb338c1f1c1a3a1;
    }
    // 0x4183ae
    *(int64_t *)((v1 & 0xffffffff) - 8) = result;
    return result;
}

// Address range: 0x4183b1 - 0x4183b6
int64_t function_4183b1(void) {
    // 0x4183b1
    return function_781287cd();
}

// Address range: 0x4184e2 - 0x4184e5
int64_t function_4184e2(void) {
    // 0x4184e2
    int64_t result; // 0x4184e2
    return result;
}

// Address range: 0x418517 - 0x41851c
int64_t function_418517(int64_t a1, int64_t a2, int64_t a3) {
    // 0x418517
    int64_t result; // 0x418517
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x41852e - 0x418563
int64_t function_41852e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41852e
    int64_t v1; // 0x41852e
    return (int64_t)((int32_t)v1 & -0x4b7ba3fa & *(int32_t *)(v1 + a4));
}

// Address range: 0x41856a - 0x41856d
int64_t function_41856a(void) {
    // 0x41856a
    int64_t result; // 0x41856a
    return result;
}

// Address range: 0x4185ba - 0x4185bc
int64_t function_4185ba(void) {
    // 0x4185ba
    int64_t v1; // 0x4185ba
    return function_418606(v1, v1, v1, v1, (int64_t)&g21);
}

// Address range: 0x4185cf - 0x4185dd
int64_t function_4185cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x4185cf
    char v3 = (uint64_t)v2 / 256; // 0x4185cf
    int64_t result = __asm_wait(a1, a2, a3); // 0x4185d1
    if (v3 - (char)v2 >= 0) {
        // 0x418600
        return result;
    }
    // 0x4185d9
    *(char *)a2 = (char)((int32_t)a4 < 0) + (char)a2 + v3;
    __asm_outsd((int16_t)a3, *(int32_t *)&v1);
    return result;
}

// Address range: 0x418606 - 0x41860f
int64_t function_418606(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x418606
    int64_t v1; // 0x418606
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x418618 - 0x41863b
int64_t function_418618(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 - 38 + 2 * a4); // 0x41861b
    *v1 = *v1 | (char)(a3 / 256);
    int64_t v2 = a4; // bp-8, 0x41861f
    int64_t v3; // 0x418618
    int32_t * v4 = (int32_t *)(int64_t)(*(int32_t *)(v3 + 12) ^ (int32_t)a2); // 0x418622
    *v4 = *v4 + (int32_t)(int64_t)&v2;
    char * v5 = (char *)(a3 + 0x4af5e17f + (8 * v3 & -2048 | 1688)); // 0x418624
    *v5 = *v5 | (char)a4;
    int64_t result = unknown_1b5b6b3c(); // 0x41862e
    if (v3 > a1) {
        // 0x418636
        return (result + 113) % 256 | result & -256;
    }
    // 0x418635
    return result;
}

// Address range: 0x418646 - 0x418649
int64_t function_418646(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x418646
    *(int32_t *)a3 = (int32_t)a4;
    int64_t result; // 0x418646
    return result;
}

// Address range: 0x41864c - 0x41864d
int64_t function_41864c(int64_t a1) {
    // 0x41864c
    int64_t result; // 0x41864c
    return result;
}

// Address range: 0x41869a - 0x41869f
int64_t function_41869a(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x41869a
    int64_t v1; // 0x41869a
    char * v2 = (char *)(v1 + 2 * v1); // 0x41869a
    bool v3; // 0x41869a
    *v2 = *v2 + (char)(a3 / 256) + (char)v3;
    return function_4186da();
}

// Address range: 0x4186ad - 0x4186ae
int64_t function_4186ad(void) {
    // 0x4186ad
    int64_t result; // 0x4186ad
    return result;
}

// Address range: 0x4186da - 0x4186db
int64_t function_4186da(void) {
    // 0x4186da
    int64_t result; // 0x4186da
    return result;
}

// Address range: 0x4186eb - 0x418729
int64_t function_4186eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4186eb
    int64_t v1; // 0x4186eb
    int64_t v2 = v1;
    unsigned char v3 = *(char *)-0x1ae5882a6657655; // 0x4186f5
    bool v4; // 0x4186eb
    *(char *)-0x1ae5882a6657655 = v3 / 2 | 128 * (char)v4;
    int64_t v5 = v2 & -256; // 0x418706
    int32_t * v6 = (int32_t *)(a4 - 0x57d6afb1 + 2 * v1); // 0x418708
    *v6 = *v6 & 0x6e680388;
    char * v7 = (char *)(((v2 - ((char)v2 < 242 ? 58 : 57)) % 256 | v5) + 122); // 0x41870f
    *v7 = *v7 - 3;
    unsigned char v8 = (char)a4 % 32; // 0x41871e
    if (v8 != 0) {
        int64_t v9; // 0x4186eb
        char * v10 = (char *)((int64_t)&v9 + 0x373401c40); // 0x41871e
        *v10 = *v10 << v8;
    }
    __asm_int(-118);
    float80_t v11; // 0x4186eb
    *(float32_t *)(a3 + 112) = (float32_t)v11;
    return v5 | (int64_t)*(char *)0x6ea68e66e5e88036;
}

// Address range: 0x418762 - 0x418765
int64_t function_418762(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x418762
    int64_t result; // 0x418762
    return result;
}

// Address range: 0x418795 - 0x418798
int64_t function_418795(void) {
    // 0x418795
    int64_t result; // 0x418795
    return result;
}

// Address range: 0x4187e0 - 0x4187e3
int64_t function_4187e0(void) {
    // 0x4187e0
    int64_t result; // 0x4187e0
    return result;
}

// Address range: 0x41882d - 0x418833
int64_t function_41882d(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a2 + 115); // 0x41882d
    unsigned char v2 = *v1; // 0x41882d
    *v1 = v2 / 128 | 2 * v2;
    int64_t result; // 0x41882d
    return result;
}

// Address range: 0x51a12b - 0x51a5aa
// From class:    std::__cxx11::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          constructor
int64_t function_51a12b(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x51a134
    int64_t result = *(int64_t *)(a1 + 80); // 0x51a147
    int64_t * v2; // 0x51a12b
    int64_t v3; // 0x51a12b
    if (result != g14) {
        // 0x51a170
        if (v1 == __readfsqword(40)) {
            // 0x51a180
            return result;
        }
        // 0x51a170
        v2 = (int64_t *)(a1 + 16);
    } else {
        int64_t * v4 = (int64_t *)(a1 + 16);
        int64_t v5 = __readfsqword(40) ^ v1; // 0x51a15d
        v2 = v4;
        v3 = v5;
        if (v5 == 0) {
            // 0x51a16b
            return (int64_t)*(int32_t *)(*v4 + 96);
        }
    }
    // 0x51a186
    __stack_chk_fail();
    *v2 = 0;
    int64_t v6 = __readfsqword(40); // 0x51a1a6
    *(int32_t *)(a1 + 8) = (int32_t)(v3 != 0);
    int64_t * v7 = (int64_t *)a1; // 0x51a1d0
    *v7 = (int64_t)&g8;
    function_569910(a1, 0, 0);
    *v7 = (int64_t)&g9;
    bool v8; // 0x51a12b
    int64_t v9 = v8 ? -1 : 1;
    int64_t v10 = (int64_t)&g5; // 0x51a12b
    int64_t v11 = a2; // 0x51a1f5
    int64_t v12 = 2; // 0x51a1f5
    unsigned char v13 = *(char *)v11; // 0x51a1f5
    char v14 = *(char *)v10; // 0x51a1f5
    v11 += v9;
    char v15 = v14; // 0x51a1f5
    bool v16 = false; // 0x51a1f5
    while (v13 == v14) {
        v12--;
        v10 += v9;
        v15 = v13;
        v16 = true;
        if (v12 == 0) {
            // break -> 
            break;
        }
        v13 = *(char *)v11;
        v14 = *(char *)v10;
        v11 += v9;
        v15 = v14;
        v16 = false;
    }
    unsigned char v17 = v15;
    int64_t v18 = (int64_t)"POSIX"; // 0x51a1fe
    int64_t v19 = a2; // 0x51a1fe
    int64_t v20 = 6; // 0x51a1fe
    int64_t v21 = v11; // 0x51a1fe
    if ((v13 >= v17 && !v16) != v13 < v17) {
        unsigned char v22 = *(char *)v19; // 0x51a20f
        char v23 = *(char *)v18; // 0x51a20f
        v19 += v9;
        v20--;
        char v24 = v23; // 0x51a20f
        bool v25 = false; // 0x51a20f
        while (v22 == v23) {
            // 0x51a200
            v18 += v9;
            v24 = v22;
            v25 = true;
            if (v20 == 0) {
                // break -> 
                break;
            }
            v22 = *(char *)v19;
            v23 = *(char *)v18;
            v19 += v9;
            v20--;
            v24 = v23;
            v25 = false;
        }
        unsigned char v26 = v24;
        v21 = v19;
        if ((v22 >= v26 && !v25) != v22 < v26) {
            // 0x51a238
            int32_t v27; // bp-64, 0x51a12b
            function_5679b0((int64_t *)&v27, a2, 0, v20);
            function_569910(a1, v27, 0);
            function_5679e0((int64_t *)&v27);
            v21 = v27;
        }
    }
    int64_t result2 = __readfsqword(40) ^ v6; // 0x51a21f
    if (result2 == 0) {
        // 0x51a180
        return result2;
    }
    // 0x51a260
    __stack_chk_fail();
    function_569fc0(a1);
    _Unwind_Resume((struct _Unwind_Exception *)&g21);
    function_565970(a1);
    _Unwind_Resume((struct _Unwind_Exception *)&g21);
    int64_t v28 = *(int64_t *)v21; // 0x51a29b
    *(int64_t *)((int64_t)&g21 + 16) = 0;
    int64_t v29 = __readfsqword(40); // 0x51a2a6
    *(int32_t *)((int64_t)&g21 + 8) = 0;
    *(int64_t *)&g21 = (int64_t)&g8;
    function_569910((int64_t)&g21, 0, 0);
    *(int64_t *)&g21 = (int64_t)&g9;
    int64_t v30 = (int64_t)&g5; // 0x51a12b
    int64_t v31 = v28; // 0x51a2f5
    int64_t v32 = 2; // 0x51a2f5
    unsigned char v33 = *(char *)v31; // 0x51a2f5
    char v34 = *(char *)v30; // 0x51a2f5
    v31 += v9;
    char v35 = v34; // 0x51a2f5
    bool v36 = false; // 0x51a2f5
    while (v33 == v34) {
        v32--;
        v30 += v9;
        v35 = v33;
        v36 = true;
        if (v32 == 0) {
            // break -> 
            break;
        }
        v33 = *(char *)v31;
        v34 = *(char *)v30;
        v31 += v9;
        v35 = v34;
        v36 = false;
    }
    unsigned char v37 = v35;
    int64_t v38 = (int64_t)"POSIX"; // 0x51a2fe
    int64_t v39 = v28; // 0x51a2fe
    int64_t v40 = 6; // 0x51a2fe
    int64_t v41 = v31; // 0x51a2fe
    if ((v33 >= v37 && !v36) != v33 < v37) {
        unsigned char v42 = *(char *)v39; // 0x51a30f
        char v43 = *(char *)v38; // 0x51a30f
        v39 += v9;
        v40--;
        char v44 = v43; // 0x51a30f
        bool v45 = false; // 0x51a30f
        while (v42 == v43) {
            // 0x51a300
            v38 += v9;
            v44 = v42;
            v45 = true;
            if (v40 == 0) {
                // break -> 
                break;
            }
            v42 = *(char *)v39;
            v43 = *(char *)v38;
            v39 += v9;
            v40--;
            v44 = v43;
            v45 = false;
        }
        unsigned char v46 = v44;
        v41 = v39;
        if ((v42 >= v46 && !v45) != v42 < v46) {
            // 0x51a338
            char * v47; // bp-104, 0x51a12b
            function_5679b0((int64_t *)&v47, v28, 0, v40);
            int64_t v48 = (int64_t)v47; // 0x51a348
            function_569910((int64_t)&g21, (int32_t)v48, 0);
            function_5679e0((int64_t *)&v47);
            v41 = v48;
        }
    }
    int64_t result3 = __readfsqword(40) ^ v29; // 0x51a31f
    if (result3 == 0) {
        // 0x51a180
        return result3;
    }
    // 0x51a360
    __stack_chk_fail();
    function_569fc0((int64_t)&g21);
    _Unwind_Resume((struct _Unwind_Exception *)&g21);
    function_565970((int64_t)&g21);
    _Unwind_Resume((struct _Unwind_Exception *)&g21);
    *(int64_t *)((int64_t)&g21 + 16) = 0;
    int64_t v49 = __readfsqword(40); // 0x51a3a6
    *(int32_t *)((int64_t)&g21 + 8) = 0;
    *(int64_t *)&g21 = (int64_t)&g7;
    function_569370((int64_t)&g21, 0, 0);
    *(int64_t *)&g21 = (int64_t)&g10;
    int64_t v50 = (int64_t)&g5; // 0x51a12b
    int64_t v51 = v41; // 0x51a3f5
    int64_t v52 = 2; // 0x51a3f5
    unsigned char v53 = *(char *)v51; // 0x51a3f5
    char v54 = *(char *)v50; // 0x51a3f5
    v51 += v9;
    char v55 = v54; // 0x51a3f5
    bool v56 = false; // 0x51a3f5
    while (v53 == v54) {
        v52--;
        v50 += v9;
        v55 = v53;
        v56 = true;
        if (v52 == 0) {
            // break -> 
            break;
        }
        v53 = *(char *)v51;
        v54 = *(char *)v50;
        v51 += v9;
        v55 = v54;
        v56 = false;
    }
    unsigned char v57 = v55;
    int64_t v58 = (int64_t)"POSIX"; // 0x51a3fe
    int64_t v59 = v41; // 0x51a3fe
    int64_t v60 = 6; // 0x51a3fe
    int64_t v61 = v51; // 0x51a3fe
    if ((v53 >= v57 && !v56) != v53 < v57) {
        unsigned char v62 = *(char *)v59; // 0x51a40f
        char v63 = *(char *)v58; // 0x51a40f
        v59 += v9;
        v60--;
        char v64 = v63; // 0x51a40f
        bool v65 = false; // 0x51a40f
        while (v62 == v63) {
            // 0x51a400
            v58 += v9;
            v64 = v62;
            v65 = true;
            if (v60 == 0) {
                // break -> 
                break;
            }
            v62 = *(char *)v59;
            v63 = *(char *)v58;
            v59 += v9;
            v60--;
            v64 = v63;
            v65 = false;
        }
        unsigned char v66 = v64;
        v61 = v59;
        if ((v62 >= v66 && !v65) != v62 < v66) {
            // 0x51a438
            int64_t v67; // bp-144, 0x51a12b
            function_5679b0(&v67, v41, 0, v60);
            function_569370((int64_t)&g21, (int32_t)v67, 0);
            function_5679e0(&v67);
            v61 = v67;
        }
    }
    int64_t result4 = __readfsqword(40) ^ v49; // 0x51a41f
    if (result4 == 0) {
        // 0x51a180
        return result4;
    }
    // 0x51a460
    __stack_chk_fail();
    function_569eb0((int64_t)&g21);
    _Unwind_Resume((struct _Unwind_Exception *)&g21);
    function_565970((int64_t)&g21);
    _Unwind_Resume((struct _Unwind_Exception *)&g21);
    int64_t v68 = *(int64_t *)v61; // 0x51a49b
    *(int64_t *)((int64_t)&g21 + 16) = 0;
    int64_t v69 = __readfsqword(40); // 0x51a4a6
    *(int32_t *)((int64_t)&g21 + 8) = 0;
    *(int64_t *)&g21 = (int64_t)&g7;
    function_569370((int64_t)&g21, 0, 0);
    *(int64_t *)&g21 = (int64_t)&g10;
    int64_t v70 = (int64_t)&g5; // 0x51a12b
    int64_t v71 = v68; // 0x51a4f5
    int64_t v72 = 2; // 0x51a4f5
    unsigned char v73 = *(char *)v71; // 0x51a4f5
    char v74 = *(char *)v70; // 0x51a4f5
    v71 += v9;
    char v75 = v74; // 0x51a4f5
    bool v76 = false; // 0x51a4f5
    while (v73 == v74) {
        v72--;
        v70 += v9;
        v75 = v73;
        v76 = true;
        if (v72 == 0) {
            // break -> 
            break;
        }
        v73 = *(char *)v71;
        v74 = *(char *)v70;
        v71 += v9;
        v75 = v74;
        v76 = false;
    }
    unsigned char v77 = v75;
    int64_t v78 = (int64_t)"POSIX"; // 0x51a4fe
    int64_t v79 = v68; // 0x51a4fe
    int64_t v80 = 6; // 0x51a4fe
    int64_t v81 = v71; // 0x51a4fe
    if ((v73 >= v77 && !v76) != v73 < v77) {
        unsigned char v82 = *(char *)v79; // 0x51a50f
        char v83 = *(char *)v78; // 0x51a50f
        v79 += v9;
        v80--;
        char v84 = v83; // 0x51a50f
        bool v85 = false; // 0x51a50f
        while (v82 == v83) {
            // 0x51a500
            v78 += v9;
            v84 = v82;
            v85 = true;
            if (v80 == 0) {
                // break -> 
                break;
            }
            v82 = *(char *)v79;
            v83 = *(char *)v78;
            v79 += v9;
            v80--;
            v84 = v83;
            v85 = false;
        }
        unsigned char v86 = v84;
        v81 = v79;
        if ((v82 >= v86 && !v85) != v82 < v86) {
            // 0x51a538
            int32_t v87; // bp-184, 0x51a12b
            function_5679b0((int64_t *)&v87, v68, 0, v80);
            function_569370((int64_t)&g21, v87, 0);
            function_5679e0((int64_t *)&v87);
            v81 = v87;
        }
    }
    int64_t result5 = __readfsqword(40) ^ v69; // 0x51a51f
    if (result5 == 0) {
        // 0x51a180
        return result5;
    }
    // 0x51a560
    __stack_chk_fail();
    function_569eb0((int64_t)&g21);
    _Unwind_Resume((struct _Unwind_Exception *)&g21);
    function_565970((int64_t)&g21);
    _Unwind_Resume((struct _Unwind_Exception *)&g21);
    *(int32_t *)((int64_t)&g21 + 8) = (int32_t)(v81 != 0) | ((int32_t)&g21 ^ (int32_t)&g21) & -256;
    *(int64_t *)&g21 = (int64_t)&g11;
    return (int64_t)&g11;
}

// Address range: 0x51a5b0 - 0x51a5bd
int64_t function_51a5b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x51a5b0
    return *(int64_t *)(a1 + 16);
}

// Address range: 0x51a5c0 - 0x51a5cd
int64_t function_51a5c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x51a5c0
    return *(int64_t *)(a1 + 24);
}

// Address range: 0x51a5d0 - 0x51a5ea
// From class:    std::__cxx11::money_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
// Type:          constructor
int64_t function_51a5d0(int64_t a1, int64_t a2) {
    // 0x51a5d0
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a2 != 0);
    *(int64_t *)a1 = (int64_t)&g12;
    return (int64_t)&g12;
}

// Address range: 0x51a5f0 - 0x51a600
int64_t function_51a5f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x51a5f0
    return *(int64_t *)(a1 + 16);
}

// Address range: 0x51a600 - 0x51a610
int64_t function_51a600(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x51a600
    return *(int64_t *)(a1 + 24);
}

// Address range: 0x55b9cc - 0x55b9cf
int64_t function_55b9cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x55b9cc
    int64_t result; // 0x55b9cc
    int64_t v1 = result;
    bool v2; // 0x55b9cc
    *(char *)v1 = (char)v1 + (char)a6 + (char)v2;
    return result;
}

// Address range: 0x55b9d3 - 0x55b9dc
int64_t function_55b9d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 67); // 0x55b9d3
    *v1 = *v1 + 1;
    int64_t v2; // 0x55b9d3
    int64_t v3 = v2;
    *(int32_t *)v3 = *(int32_t *)&v2 + (int32_t)v3;
    int64_t v4 = v2;
    *(char *)v4 = *(char *)&v2 + (char)v4;
    return function_55b97d();
}

// Address range: 0x55b9e0 - 0x55bec0
int64_t function_55b9e0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int32_t a9, int32_t a10) {
    int64_t v1 = __readfsqword(40); // 0x55ba08
    int64_t v2 = function_554b00(); // 0x55ba43
    int32_t * v3 = (int32_t *)a7; // 0x55ba48
    *v3 = 0;
    int64_t v4; // 0x55b9e0
    if (*(char *)(v2 + 56) == 0) {
        // 0x55bb90
        function_54d560(v2);
        int64_t v5 = *(int64_t *)(*(int64_t *)v2 + 48); // 0x55bbb9
        v4 = v5 == g15 ? 37 : v2 & 0xffffffff;
    } else {
        // 0x55ba62
        v4 = (int64_t)*(char *)(v2 + 94);
    }
    int64_t v6 = a3 & 0xffffffff;
    char v7 = v4; // bp-68, 0x55ba69
    int64_t v8 = a1; // 0x55baaa
    int64_t v9 = function_55a5d0(a1, a2, a3, a4, a5, a6, a7, a8, &v7); // 0x55bab5
    int64_t v10; // 0x55b9e0
    int32_t v11; // 0x55b9e0
    if (v9 == 0) {
        goto lab_0x55bc10;
    } else {
        // 0x55badc
        v11 = a3;
        v10 = v6;
        if (v11 == -1) {
            uint64_t v12 = *(int64_t *)(v9 + 16); // 0x55bb48
            if (v12 >= *(int64_t *)(v9 + 24)) {
                int64_t v13 = *(int64_t *)v9; // 0x55bbf8
                v8 = v9;
                if ((int32_t)v13 == -1) {
                    goto lab_0x55bc10;
                } else {
                    // 0x55bc06
                    v10 = v13 & 0xffffffff;
                    goto lab_0x55bae1;
                }
            } else {
                // 0x55bb56
                v10 = (int64_t)*(char *)v12;
                goto lab_0x55bae1;
            }
        } else {
            goto lab_0x55bae1;
        }
    }
  lab_0x55bc10:;
    int64_t v14 = 0; // 0x55bc16
    int64_t v15 = v6; // 0x55bc16
    int32_t v16; // 0x55b9e0
    char v17; // 0x55b9e0
    int64_t result; // 0x55b9e0
    int64_t v18; // 0x55b9e0
    int64_t v19; // 0x55b9e0
    int64_t v20; // 0x55b9e0
    if (a4 == 0) {
        goto lab_0x55baec;
    } else {
        // 0x55bc1c
        result = 0;
        v19 = v6;
        if ((int32_t)a5 != -1) {
            goto lab_0x55baef;
        } else {
            // 0x55bc26
            result = 0;
            v19 = v6;
            if (*(int64_t *)(a4 + 16) < *(int64_t *)(a4 + 24)) {
                goto lab_0x55baef;
            } else {
                // 0x55bc26
                v16 = a3;
                v17 = 1;
                v18 = 0;
                v20 = v6;
                goto lab_0x55bb71;
            }
        }
    }
  lab_0x55baec:
    // 0x55baec
    *v3 = *v3 | 2;
    result = v14;
    v19 = v15;
    goto lab_0x55baef;
  lab_0x55bae1:
    // 0x55bae1
    result = v9;
    v19 = v10;
    if (a4 == 0) {
        goto lab_0x55baef;
    } else {
        // 0x55bae6
        v14 = v9;
        v15 = v10;
        if ((int32_t)a5 == -1) {
            // 0x55bb60
            v14 = v9;
            v15 = v10;
            v16 = v11;
            v17 = 0;
            v18 = v9;
            v20 = v10;
            if (*(int64_t *)(a4 + 24) > *(int64_t *)(a4 + 16)) {
                goto lab_0x55baec;
            } else {
                goto lab_0x55bb71;
            }
        } else {
            goto lab_0x55baec;
        }
    }
  lab_0x55baef:;
    int64_t v21 = __readfsqword(40) ^ v1; // 0x55bb0a
    if (v21 == 0) {
        // 0x55bb19
        return result;
    }
    // 0x55bc3f
    __stack_chk_fail();
    int64_t v22 = __readfsqword(40); // 0x55bc78
    int64_t v23 = function_554b00(); // 0x55bcb8
    int32_t * v24 = (int32_t *)a1; // 0x55bcbd
    *v24 = 0;
    int64_t v25; // 0x55b9e0
    if (*(char *)(v23 + 56) == 0) {
        // 0x55bde0
        function_54d560(v23);
        int64_t v26 = *(int64_t *)(*(int64_t *)v23 + 48); // 0x55be13
        v25 = v26 == g15 ? 37 : v23 & 0xffffffff;
    } else {
        // 0x55bcdc
        v25 = (int64_t)*(char *)(v23 + 94);
    }
    char v27 = v25; // bp-204, 0x55bce3
    int64_t v28 = a3 < 0xffffffff00000001 ? a3 : a3 + 0xffffffff;
    int64_t v29 = function_55a5d0(v8, v21, v19 | v28, v6, a5, a6, a1, a2, &v27); // 0x55bd2e
    if (v29 == 0) {
        goto lab_0x55be98;
    } else {
        if ((int32_t)v19 == -1) {
            // 0x55bdc0
            if (*(int64_t *)(v29 + 16) >= *(int64_t *)(v29 + 24)) {
                // 0x55be60
                if ((int32_t)*(int64_t *)v29 == -1) {
                    goto lab_0x55be98;
                } else {
                    goto lab_0x55bd4b;
                }
            } else {
                goto lab_0x55bd4b;
            }
        } else {
            goto lab_0x55bd4b;
        }
    }
  lab_0x55be98:;
    int64_t v30 = 0; // 0x55be9e
    int64_t result2; // 0x55b9e0
    int64_t v31; // 0x55b9e0
    char v32; // 0x55b9e0
    if (v6 == 0) {
        goto lab_0x55bd56;
    } else {
        // 0x55bea4
        result2 = 0;
        v31 = 0;
        v32 = 1;
        if ((int32_t)a5 != -1) {
            goto lab_0x55bd59;
        } else {
            goto lab_0x55bda3;
        }
    }
  lab_0x55bd56:
    // 0x55bd56
    *v24 = *(int32_t *)&v8 | 2;
    result2 = v30;
    goto lab_0x55bd59;
  lab_0x55bd4b:
    // 0x55bd4b
    result2 = v29;
    if (v6 == 0) {
        goto lab_0x55bd59;
    } else {
        // 0x55bd50
        v30 = v29;
        v31 = v29;
        v32 = 0;
        if ((int32_t)a5 == -1) {
            goto lab_0x55bda3;
        } else {
            goto lab_0x55bd56;
        }
    }
  lab_0x55bb71:
    // 0x55bb71
    v8 = a4;
    v14 = v18;
    v15 = v20;
    result = v18;
    v19 = v20;
    if (v17 != (char)(v16 == -1)) {
        goto lab_0x55baef;
    } else {
        goto lab_0x55baec;
    }
  lab_0x55bd59:
    // 0x55bd59
    if (v22 != __readfsqword(40)) {
        // 0x55beb9
        __stack_chk_fail();
        return (int64_t)&g21;
    }
    // 0x55bb19
    return result2;
  lab_0x55bda3:;
    char v33 = 0; // 0x55bdad
    if (*(int64_t *)(v6 + 16) >= *(int64_t *)(v6 + 24)) {
        // 0x55be80
        v33 = (int32_t)*(int64_t *)v6 == -1;
    }
    // 0x55bdb3
    v30 = v31;
    result2 = v31;
    if (v32 != v33) {
        goto lab_0x55bd59;
    } else {
        goto lab_0x55bd56;
    }
}
