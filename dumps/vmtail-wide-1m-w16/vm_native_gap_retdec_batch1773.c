/*
 * Targeted RetDec C for native executable gap queue batch 1773.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x231066-0x231266 rank=- name=- kind=- bytes=- uncovered=-
 *   0x231266-0x231466 rank=- name=- kind=- bytes=- uncovered=-
 *   0x231466-0x231586 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c34b3-0x2c36b3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c36b3-0x2c38b3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c38b3-0x2c39c6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a8339-0x3a8539 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a8539-0x3a8739 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a8739-0x3a8871 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bcf54-0x4bd154 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bd154-0x4bd354 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bd354-0x4bd480 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f564b-0x4f584b rank=- name=- kind=- bytes=- uncovered=-
 *   0x52cd59-0x52cf59 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52cf59-0x52d159 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52d159-0x52d290 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g2;
extern int g3;
extern int g4;
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

int64_t function_231066(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23107d(void);
int64_t function_231084(int64_t a1);
int64_t function_2310c9(int64_t a1);
int64_t function_2310d6(void);
int64_t function_2310f4(void);
int64_t function_2310f9(void);
int64_t function_2310fe(int64_t a1, int64_t a2);
int64_t function_23112c(void);
int64_t function_231147(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_231236(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_231265(int64_t a1);
int64_t function_2312a8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_231457(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2c34b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2c361c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2c3786(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2c3949(void);
int64_t function_2c395d(void);
int64_t function_3a8339(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3a838e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3a84e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a8633(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4b0d80();
int64_t function_4b1590();
int64_t function_4b1ca0();
int64_t function_4ba580();
int64_t function_4ba5b0();
int64_t function_4ba6b0();
int64_t function_4ba6e0();
int64_t function_4bbff0();
int64_t function_4bcee5();
int64_t function_4bcf4f();
int64_t function_4bcf54(void);
int64_t function_4bcf60(void);
int64_t function_4bcf90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4bf0f0();
int64_t function_4f564b(void);
int64_t function_4f5660(int64_t result);
int64_t function_4f5680(int64_t result);
int64_t function_4f56a0(int64_t a1);
int64_t function_4f56b0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4f5760(int64_t a1, int64_t a2);
int64_t function_4f57f4(void);
int64_t function_4f5804(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4fc7e0();
int64_t function_52cd59(int64_t result, int64_t a2);
int64_t function_52cd80(int64_t result);
int64_t function_52cd90(int64_t result);
int64_t function_52cda0(int64_t result);
int64_t function_52cdb0(int64_t a1, int64_t str, uint64_t a3, uint64_t n2);
int64_t function_52ce90(int64_t a1, int64_t a2);
int64_t function_52cea0(int64_t a1, int64_t str, int64_t a3);
int64_t function_52ced0(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_52cf20(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_52cfb0(int64_t a1, int64_t a2);
int64_t function_52cfc0(int64_t a1, int64_t str, int64_t a3);
int64_t function_52cff0(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_52d030(int64_t a1, int64_t str, uint64_t a3, int64_t n);
int64_t function_52d0b0(int64_t a1, int64_t a2);
int64_t function_52d0c0(int64_t a1, int64_t str, int64_t a3);
int64_t function_52d0f0(int64_t a1, int64_t a2);
int64_t function_52d100(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_52d190(int64_t a1, int64_t a2);
int64_t function_52d1a0(int64_t a1, int64_t str, int64_t a3);
int64_t function_52d1d0(int64_t a1, int64_t a2);
int64_t function_52d1e0(int64_t a1, int64_t str, int64_t result, int64_t n);
int64_t function_52d250(int64_t a1, int64_t a2);
int64_t function_52d260(int64_t a1, int64_t str, int64_t a3);
int64_t function_5423f0();
int64_t function_54cb80();
int64_t function_54d560();
int64_t function_56c110();
int64_t function_c9849();
int64_t function_cf3c7();
int64_t function_e68fb4f();
int64_t function_ffffffffd603147d();
int64_t unknown_3b7a8d6b();
int64_t unknown_68d0ca4a();
int64_t unknown_ffffffffb17eb874();

// Address range: 0x231066 - 0x23107a
int64_t function_231066(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)0x4f29336e; // 0x231066
    int64_t v2; // 0x231066
    *(char *)0x4f29336e = v1 + (char)((uint64_t)v2 / 256);
    int64_t result = (a4 + 118) % 256 | a4 & 0xffffff00; // 0x23106e
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    *(char *)(result + 8 * a3) = (char)a3;
    return result;
}

// Address range: 0x23107d - 0x231082
int64_t function_23107d(void) {
    // 0x23107d
    int64_t result; // 0x23107d
    return result;
}

// Address range: 0x231084 - 0x231089
int64_t function_231084(int64_t a1) {
    // 0x231084
    int64_t v1; // 0x231084
    return v1 & 0xffffffff & v1;
}

// Address range: 0x2310c9 - 0x2310ca
int64_t function_2310c9(int64_t a1) {
    // 0x2310c9
    int64_t result; // 0x2310c9
    return result;
}

// Address range: 0x2310d6 - 0x2310d7
int64_t function_2310d6(void) {
    // 0x2310d6
    int64_t result; // 0x2310d6
    return result;
}

// Address range: 0x2310f4 - 0x2310f5
int64_t function_2310f4(void) {
    // 0x2310f4
    int64_t result; // 0x2310f4
    return result;
}

// Address range: 0x2310f9 - 0x2310fe
int64_t function_2310f9(void) {
    // 0x2310f9
    return function_ffffffffd603147d();
}

// Address range: 0x2310fe - 0x23110a
int64_t function_2310fe(int64_t a1, int64_t a2) {
    // 0x2310fe
    int64_t v1; // 0x2310fe
    if ((char)v1 < -96) {
        function_2310f4();
    }
    // 0x231104
    bool v2; // 0x2310fe
    int64_t v3 = v2 ? -1 : 1; // 0x231107
    return function_231147(v3 + a1, v3 + a2, v1, v1, (int64_t)&g8);
}

// Address range: 0x23112c - 0x231130
int64_t function_23112c(void) {
    // 0x23112c
    return function_2310d6();
}

// Address range: 0x231147 - 0x231235
int64_t function_231147(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    // 0x2311b2
    *(char *)a3 = (char)a3;
    int32_t v3 = *(int32_t *)&v1; // 0x2311bb
    int64_t v4 = v1;
    *(int32_t *)v4 = (int32_t)v4;
    char v5 = *(char *)0xdeb20c4; // 0x2311bd
    int64_t v6; // 0x231147
    *(char *)0xdeb20c4 = v5 + (char)((uint64_t)v6 / 256);
    int32_t v7 = *(int32_t *)&v2; // 0x2311c3
    *(int32_t *)a1 = v7;
    int32_t v8 = v7 - v3; // 0x2311c5
    int64_t result = (int64_t)(v8 & -0xff01) | (int64_t)&g7; // 0x2311c8
    if (((v8 ^ v7) & (v7 ^ v3)) < 0) {
        // 0x231234
        return result;
    }
    // 0x2311cc
    return result + (int64_t)(((int64_t)&g7 & 256) != 0) + 0x13d00fb & 0xffffffff;
}

// Address range: 0x231236 - 0x23125a
int64_t function_231236(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x231236
    int64_t v1; // 0x231236
    int32_t * v2 = (int32_t *)(v1 - 0x1237c5f6); // 0x23123a
    int32_t v3 = a4; // 0x23123a
    *v2 = *v2 + v3;
    int64_t v4; // 0x231236
    *(int32_t *)v4 = *(int32_t *)&v4 + v3;
    int64_t result = unknown_68d0ca4a(); // 0x231244
    *(int64_t *)0x3af2bfc9c601e8eb = result;
    __asm_out((int16_t)((v1 + a3) % 256 | a3 & 0xff00), (int32_t)result);
    return result;
}

// Address range: 0x231265 - 0x231282
int64_t function_231265(int64_t a1) {
    // 0x231265
    unknown_3b7a8d6b();
    unknown_ffffffffb17eb874();
    bool v1; // 0x231265
    return function_e68fb4f((v1 ? -1 : 1) + a1);
}

// Address range: 0x2312a8 - 0x231457
int64_t function_2312a8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2312a8
    int64_t v1; // 0x2312a8
    int32_t * v2 = (int32_t *)(v1 - 0x6f0f37f6); // 0x2312a8
    *v2 = *v2 + (int32_t)a4;
    int64_t v3 = (int64_t)(-52 * *(int32_t *)(8 * v1 - 0x25cfbfff + v1)); // 0x2312b0
    char * v4 = (char *)((8 * a2 & 0x7fffffff8) + v3); // 0x2312be
    *v4 = *v4 | (char)(a3 / 256);
    *(int32_t *)a1 = (int32_t)a2;
    bool v5; // 0x2312a8
    int64_t v6 = (v5 ? -4 : 4) + a1; // 0x2312c1
    int32_t * v7 = (int32_t *)v3; // 0x2312c9
    *v7 = (int32_t)(2 * a2 & 254 | a2 & 0xffffff00) - 0x17de4b18 + *v7;
    uint32_t v8 = *(int32_t *)-0x171b2297fc270fe7; // 0x2312cb
    int32_t * v9 = (int32_t *)(v6 + 78); // 0x2312d4
    *v9 = *v9 + v8;
    int64_t v10 = v8; // 0x2312d7
    char * v11 = (char *)v10; // 0x2312d9
    *v11 = *v11 - 63;
    int32_t v12 = *(int32_t *)(v3 - 0x1b76b2ac + 2 * v10); // 0x2312dd
    int64_t v13; // bp-16, 0x2312a8
    int64_t v14 = (int64_t)&v13; // 0x231376
    v13 = 0x604c58c1;
    int64_t * v15 = (int64_t *)(v14 - 16); // 0x231399
    *v15 = (int64_t)(v12 + (int32_t)v1);
    int64_t * v16 = (int64_t *)(v14 + 32); // 0x23139f
    int64_t v17 = *v16; // 0x23139f
    int64_t * v18 = (int64_t *)(v14 - 8); // 0x23139f
    *v18 = v17;
    *v15 = v17;
    *(int64_t *)(v14 - 24) = v17;
    int64_t v19 = v14 + 16; // 0x2313b8
    int64_t * v20 = (int64_t *)v19; // 0x2313b8
    int64_t v21 = *v20; // 0x2313b8
    *v15 = v21;
    *v18 = v17;
    *v20 = v13;
    *v18 = 0x6946191f;
    *v15 = v21;
    *v16 = v13;
    *v18 = v14;
    v13 = v19;
    return function_cf3c7(v6, v1 & 0xffffffff, a3, v3, a5, a6, 0x4df8fe3, 0x230b28);
}

// Address range: 0x231457 - 0x231586
int64_t function_231457(int64_t a1, int64_t a2, int64_t a3) {
    // 0x231457
    int64_t v1; // 0x231457
    int32_t v2 = v1; // 0x231457
    int32_t v3 = v2 >> 3; // 0x231457
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x231457
    int64_t v5 = 0x6447b531; // bp-32, 0x231513
    int64_t v6 = (int64_t)&v5; // 0x23154d
    *(int64_t *)(v6 - 8) = 0x6447b531;
    *(int64_t *)(v6 - 16) = v6;
    bool v7; // 0x231457
    int64_t result = function_cf3c7(a1, a2, a3, v1, v1, v1, 128 * (int64_t)(v2 < 0) | (int64_t)((v2 & 4) != 0) | 64 * (int64_t)(v3 == 0) | 0x4000 * (int64_t)v7 | 2048 * (int64_t)v7 | 4 * (int64_t)(v4 % 2 == 0) | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | 16 * (int64_t)v7 | 2, (int64_t)&g8); // 0x231581
    return result;
}

// Address range: 0x2c34b3 - 0x2c361c
int64_t function_2c34b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2c34b3
    int64_t v1; // bp-48, 0x2c34b3
    int64_t v2 = (int64_t)&v1; // 0x2c3527
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x2c353e
    int64_t * v4 = (int64_t *)v3; // 0x2c353f
    int64_t v5 = *(int64_t *)(v2 + 32); // 0x2c3542
    *v4 = v5;
    int64_t v6 = v2 - 16; // 0x2c354a
    int64_t * v7 = (int64_t *)v6; // 0x2c354a
    *v7 = v5;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x2c3552
    int64_t v9 = *v7; // 0x2c3563
    *v7 = v2;
    int64_t v10 = *(int64_t *)(v2 + 16); // 0x2c356b
    *v4 = v10;
    *v7 = a1;
    *v8 = v9;
    v1 = v9;
    *(int64_t *)(v2 + 8) = v10;
    *v8 = a3;
    *(int64_t *)(v2 - 40) = v6;
    *v8 = v3;
    int64_t v11 = *v7; // 0x2c3601
    *v8 = v11;
    *(int64_t *)(v2 - 32) = v11;
    int64_t v12; // 0x2c34b3
    return function_cf3c7(*v7, a2, *v8, a4, a5, a6, v12, (int64_t)&g8);
}

// Address range: 0x2c361c - 0x2c3786
int64_t function_2c361c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2c361c
    int64_t v1; // bp-40, 0x2c361c
    int64_t v2 = (int64_t)&v1; // 0x2c36b2
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x2c36ba
    int64_t * v4 = (int64_t *)v3; // 0x2c36bb
    int64_t v5 = *(int64_t *)(v2 + 32); // 0x2c36be
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x2c36c6
    *v6 = v5;
    int64_t v7 = v2 - 24; // 0x2c36d8
    int64_t * v8 = (int64_t *)v7; // 0x2c36d8
    *v8 = a4;
    int64_t v9 = *v6; // 0x2c36dc
    *v6 = v5 ^ v2 ^ v9;
    int64_t v10 = v2 + 8; // 0x2c36e7
    int64_t * v11 = (int64_t *)v10; // 0x2c36e7
    *v8 = v7;
    *v6 = v9;
    *v11 = *v4;
    *v6 = *v11;
    *(int64_t *)(v2 + 24) = *v4;
    *v6 = v3;
    *v4 = v10;
    int64_t v12; // 0x2c361c
    return function_cf3c7(a1, a2, 0x294df0, *v8, v12, v12, 0x489b47f7, v12);
}

// Address range: 0x2c3786 - 0x2c391d
int64_t function_2c3786(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2c3786
    int64_t v1; // bp-32, 0x2c3786
    int64_t v2 = (int64_t)&v1; // 0x2c3809
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x2c3812
    int64_t v4 = v2 - 16; // 0x2c3819
    int64_t * v5 = (int64_t *)v4; // 0x2c3828
    *v5 = v4;
    int64_t v6 = *(int64_t *)(v2 + 32); // 0x2c3834
    *v3 = v6;
    *v5 = v6;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x2c383b
    *v7 = v6;
    int64_t v8 = *(int64_t *)(v2 + 16); // 0x2c3847
    *v3 = v8;
    *v5 = a5;
    *v7 = v2;
    *(int64_t *)(v2 - 32) = v6;
    *v7 = v6;
    v1 = *v5;
    *v5 = v8;
    *(int64_t *)(v2 + 24) = *v3;
    *v5 = v1;
    *v7 = a1;
    *v3 = v2 + 8;
    int64_t v9; // 0x2c3786
    return function_cf3c7(a1, a2, a3, a4, *v5, v9, 0x295965, 169);
}

// Address range: 0x2c3949 - 0x2c394e
int64_t function_2c3949(void) {
    // 0x2c3949
    int64_t v1; // 0x2c3949
    int64_t result = v1 ^ 36; // 0x2c3949
    __asm_out_133(97, (int32_t)result);
    return result;
}

// Address range: 0x2c395d - 0x2c3960
int64_t function_2c395d(void) {
    // 0x2c395d
    int64_t result; // 0x2c395d
    __asm_out_133(97, (int32_t)result);
    return result;
}

// Address range: 0x3a8339 - 0x3a838e
int64_t function_3a8339(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3a8339
    int64_t v1; // 0x3a8339
    int64_t v2 = v1;
    int64_t v3 = a5;
    *(char *)v2 = 2 * (char)v2;
    char * v4 = (char *)(a1 - 0xdfdbbc); // 0x3a833b
    *v4 = *v4 + (char)a4;
    v3 = (int64_t)&v3 + 16;
    return function_c9849(a1, a2, a3, a4, v1, v1);
}

// Address range: 0x3a838e - 0x3a84e4
int64_t function_3a838e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3a838e
    int64_t v1; // bp-48, 0x3a838e
    v1 = (int64_t)&v1;
    return function_c9849(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x3a84e4 - 0x3a8633
int64_t function_3a84e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a84e4
    int64_t v1; // 0x3a84e4
    return function_c9849(a1, v1, a3, a4, a5, v1);
}

// Address range: 0x3a8633 - 0x3a8771
int64_t function_3a8633(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3a8633
    return function_c9849(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x4bcf54 - 0x4bcf56
int64_t function_4bcf54(void) {
    // 0x4bcf54
    return function_4bcee5();
}

// Address range: 0x4bcf60 - 0x4bcf8d
int64_t function_4bcf60(void) {
    // 0x4bcf60
    int64_t v1; // bp+24, 0x4bcf60
    int64_t v2; // 0x4bcf60
    if ((int32_t)function_4b1590(&v1, v2) != 0) {
        function_4bcf4f();
    }
    // 0x4bcf71
    int64_t v3; // bp+48, 0x4bcf60
    function_4b1590(&v3, v2);
    return function_4bcee5();
}

// Address range: 0x4bcf90 - 0x4bd479
int64_t function_4bcf90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4bcf90
    int64_t v1; // bp-312, 0x4bcf90
    function_4ba5b0(&v1);
    int64_t v2; // bp-472, 0x4bcf90
    function_4ba580(&v2);
    int64_t v3; // bp-392, 0x4bcf90
    function_4ba580(&v3);
    int64_t v4; // bp-552, 0x4bcf90
    function_4b0870(&v4);
    int64_t v5 = function_4bf0f0(&v1, 1); // 0x4bd03a
    int32_t v6 = a1;
    int64_t v7 = v5; // 0x4bd044
    int64_t v8; // 0x4bcf90
    int64_t v9; // 0x4bcf90
    if ((int32_t)v5 == 0) {
        if (v6 != 0) {
            // 0x4bd2b0
            printf("  ECP test #1 (constant op_count, base point G): ");
        }
        int64_t v10 = function_4b0d80(&v4, 2); // 0x4bd058
        v7 = v10;
        if ((int32_t)v10 == 0) {
            // 0x4bd138
            int64_t v11; // bp-232, 0x4bcf90
            int64_t v12 = function_4bbff0(&v1, &v3, &v4, &v11, 0, 0); // 0x4bd15e
            v7 = v12;
            if ((int32_t)v12 == 0) {
                // 0x4bd16e
                g6 = 0;
                g4 = 0;
                g5 = 0;
                int64_t v13 = function_4b1ca0(&v4, 16, "000000000000000000000000000000000000000000000001"); // 0x4bd1a0
                v7 = v13;
                if ((int32_t)v13 == 0) {
                    int64_t v14 = function_4bbff0(&v1, &v2, &v4, &v11, 0, 0); // 0x4bd1cb
                    v7 = v14;
                    if ((int32_t)v14 == 0) {
                        int64_t v15 = g6; // 0x4bd1db
                        int64_t v16 = g4; // 0x4bd1e2
                        int64_t v17 = g5; // 0x4bd1f0
                        g6 = 0;
                        g4 = 0;
                        g5 = 0;
                        int64_t v18 = function_4b1ca0(&v4, 16, "FFFFFFFFFFFFFFFFFFFFFFFF99DEF836146BC9B1B4D22830"); // 0x4bd22d
                        v7 = v18;
                        if ((int32_t)v18 == 0) {
                            // 0x4bd23d
                            int64_t v19; // bp-568, 0x4bcf90
                            v9 = (int64_t)&v19 + 48;
                            int64_t v20 = 1; // 0x4bd294
                            int64_t v21 = function_4bbff0(&v1, &v2, &v4, &v11, 0, 0); // 0x4bd258
                            v7 = v21;
                            while ((int32_t)v21 == 0) {
                                // 0x4bd268
                                v8 = v20;
                                if (g6 != v15) {
                                    goto lab_0x4bd42f_3;
                                }
                                // 0x4bd27a
                                if (g4 != v16) {
                                    goto lab_0x4bd42f_3;
                                }
                                // 0x4bd287
                                if (g5 != v17) {
                                    goto lab_0x4bd42f_3;
                                }
                                if (v8 == 5) {
                                    if (v6 != 0) {
                                        // 0x4bd410
                                        puts("passed");
                                        printf("  ECP test #2 (constant op_count, other point): ");
                                        goto lab_0x4bd2cb;
                                    } else {
                                        goto lab_0x4bd2cb;
                                    }
                                }
                                // 0x4bd29e
                                v20 = v8 + 1;
                                int64_t v22 = *(int64_t *)(8 * v20 + v9); // 0x4bd29e
                                g6 = 0;
                                g4 = 0;
                                g5 = 0;
                                int64_t v23 = function_4b1ca0(&v4, 16, (char *)v22); // 0x4bd22d
                                v7 = v23;
                                if ((int32_t)v23 != 0) {
                                    // break -> 0x4bd068
                                    break;
                                }
                                v21 = function_4bbff0(&v1, &v2, &v4, &v11, 0, 0);
                                v7 = v21;
                            }
                        }
                    }
                }
            }
        }
    }
    goto lab_0x4bd068;
  lab_0x4bd42f_3:;
    int64_t v26 = 1; // 0x4bd431
    if (v6 != 0) {
        // 0x4bd43e
        printf("failed (%u)\n", (int32_t)v8);
        v26 = 1;
        goto lab_0x4bd072;
    } else {
        goto lab_0x4bd072;
    }
  lab_0x4bd068:;
    int64_t v24 = v7 & 0xffffffff;
    int32_t v25 = v7;
    v26 = v24;
    if (v6 != 0 && v25 <= -1) {
        // 0x4bd0e4
        printf("Unexpected error, return code = %08X\n", v25);
        function_4ba6e0(&v1);
        function_4ba6b0(&v2);
        function_4ba6b0(&v3);
        function_4b0890(&v4);
        // 0x4bd123
        putchar(10);
        // 0x4bd0a4
        return v24 & 0xffffffff;
    }
    goto lab_0x4bd072;
  lab_0x4bd072:
    // 0x4bd072
    function_4ba6e0(&v1);
    function_4ba6b0(&v2);
    function_4ba6b0(&v3);
    function_4b0890(&v4);
    if (v6 == 0) {
        // 0x4bd0a4
        return v26 & 0xffffffff;
    }
    // 0x4bd123
    putchar(10);
    // 0x4bd0a4
    return v26 & 0xffffffff;
  lab_0x4bd2cb:
    // 0x4bd2cb
    g6 = 0;
    g4 = 0;
    g5 = 0;
    int64_t v27 = function_4b1ca0(&v4, 16, "000000000000000000000000000000000000000000000001"); // 0x4bd2fd
    v7 = v27;
    int64_t v28; // 0x4bcf90
    int64_t v29; // 0x4bd33d
    int64_t v30; // 0x4bd344
    int64_t v31; // 0x4bd350
    if ((int32_t)v27 != 0) {
        goto lab_0x4bd068;
    } else {
        int64_t v32 = function_4bbff0(&v1, &v2, &v4, &v3, 0, 0); // 0x4bd32d
        v7 = v32;
        if ((int32_t)v32 != 0) {
            goto lab_0x4bd068;
        } else {
            // 0x4bd33d
            v29 = g6;
            v30 = g4;
            v31 = g5;
            v28 = 1;
            goto lab_0x4bd357;
        }
    }
  lab_0x4bd357:;
    int64_t v33 = v28;
    int64_t v34 = *(int64_t *)(8 * v33 + v9); // 0x4bd357
    g6 = 0;
    g4 = 0;
    g5 = 0;
    int64_t v35 = function_4b1ca0(&v4, 16, (char *)v34); // 0x4bd387
    v7 = v35;
    if ((int32_t)v35 != 0) {
        goto lab_0x4bd068;
    } else {
        int64_t v36 = function_4bbff0(&v1, &v2, &v4, &v3, 0, 0); // 0x4bd3b7
        v7 = v36;
        if ((int32_t)v36 != 0) {
            goto lab_0x4bd068;
        } else {
            // 0x4bd3c7
            if (g6 != v29) {
                goto lab_0x4bd45a;
            } else {
                // 0x4bd3d4
                if (g4 != v30) {
                    goto lab_0x4bd45a;
                } else {
                    // 0x4bd3dd
                    if (g5 != v31) {
                        goto lab_0x4bd45a;
                    } else {
                        // 0x4bd3e6
                        v28 = v33 + 1;
                        if (v33 != 5) {
                            goto lab_0x4bd357;
                        } else {
                            int64_t v37 = v36 & 0xffffffff; // 0x4bd3be
                            v26 = v37;
                            if (v6 == 0) {
                                goto lab_0x4bd072;
                            } else {
                                // 0x4bd3fc
                                puts("passed");
                                v26 = v37;
                                goto lab_0x4bd072;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x4bd45a:
    // 0x4bd45a
    v26 = 1;
    if (v6 == 0) {
        goto lab_0x4bd072;
    } else {
        // 0x4bd45e
        printf("failed (%u)\n", (int32_t)v33);
        v26 = 1;
        goto lab_0x4bd072;
    }
}

// Address range: 0x4f564b - 0x4f5652
int64_t function_4f564b(void) {
    // 0x4f564b
    int64_t result; // 0x4f564b
    return result;
}

// Address range: 0x4f5660 - 0x4f5675
int64_t function_4f5660(int64_t result) {
    // 0x4f5660
    return result;
}

// Address range: 0x4f5680 - 0x4f5695
int64_t function_4f5680(int64_t result) {
    // 0x4f5680
    return result;
}

// Address range: 0x4f56a0 - 0x4f56a5
int64_t function_4f56a0(int64_t a1) {
    // 0x4f56a0
    return *(int64_t *)(a1 + 8);
}

// Address range: 0x4f56b0 - 0x4f5755
int64_t function_4f56b0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 240 + *(int64_t *)(a1 - 24)); // 0x4f56bf
    if (v1 != 0) {
        // 0x4f56cc
        if (*(char *)(v1 + 56) == 0) {
            // 0x4f56f0
            function_54d560(v1);
        }
        // 0x4f56dc
        return function_56c110(a1, a2);
    }
    // 0x4f572b
    function_5423f0();
    *(int64_t *)a1 = a2;
    int64_t * v2 = (int64_t *)(a2 - 24); // 0x4f5736
    int64_t v3 = *v2; // 0x4f5736
    *(int64_t *)(v3 + a1) = *(int64_t *)(a2 + 8);
    *(int64_t *)(a1 + 8) = 0;
    return function_4fc7e0(*v2 + a1, 0, v3);
}

// Address range: 0x4f5760 - 0x4f57e5
// From class:    std::istream
// Type:          constructor
int64_t function_4f5760(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 16; // 0x4f5763
    function_54cb80(v1);
    *(int64_t *)(a1 + 232) = 0;
    *(char *)(a1 + 240) = 0;
    *(char *)(a1 + 241) = 0;
    *(int64_t *)(a1 + 248) = 0;
    *(int64_t *)(a1 + 256) = 0;
    *(int64_t *)(a1 + 264) = 0;
    *(int64_t *)(a1 + 272) = 0;
    *(int64_t *)v1 = (int64_t)&g3;
    *(int64_t *)a1 = (int64_t)&g2;
    *(int64_t *)(a1 + 8) = 0;
    return function_4fc7e0(v1, 0, (int64_t)&g2);
}

// Address range: 0x4f57f4 - 0x4f57f7
int64_t function_4f57f4(void) {
    // 0x4f57f4
    int64_t result; // 0x4f57f4
    return result;
}

// Address range: 0x4f5804 - 0x4f5809
int64_t function_4f5804(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4f5804
    int64_t result; // 0x4f5804
    return result;
}

// Address range: 0x52cd59 - 0x52cd7b
int64_t function_52cd59(int64_t result, int64_t a2) {
    // 0x52cd59
    int128_t v1; // 0x52cd59
    __asm_movups(*(int128_t *)(a2 + 16), v1);
    int64_t * v2 = (int64_t *)(result + 8); // 0x52cd64
    *(int64_t *)(a2 + 8) = *v2;
    *v2 = 0;
    *(char *)result = 0;
    return result;
}

// Address range: 0x52cd80 - 0x52cd84
int64_t function_52cd80(int64_t result) {
    // 0x52cd80
    return result;
}

// Address range: 0x52cd90 - 0x52cd94
int64_t function_52cd90(int64_t result) {
    // 0x52cd90
    return result;
}

// Address range: 0x52cda0 - 0x52cda4
int64_t function_52cda0(int64_t result) {
    // 0x52cda0
    return result;
}

// Address range: 0x52cdb0 - 0x52ce8a
int64_t function_52cdb0(int64_t a1, int64_t str, uint64_t a3, uint64_t n2) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x52cdb3
    if (n2 == 0) {
        // 0x52cdb9
        return v1 >= a3 ? a3 : -1;
    }
    // 0x52cdd0
    if (v1 <= a3) {
        // 0x52ce65
        return -1;
    }
    uint64_t v2 = v1 - a3; // 0x52cdf9
    if (v2 < n2) {
        // 0x52ce65
        return -1;
    }
    int64_t v3 = 1 - n2; // 0x52ce12
    int64_t n = v2 + v3; // 0x52ce15
    if (n == 0) {
        // 0x52ce65
        return -1;
    }
    int32_t c = 0x1000000 * (int32_t)str >> 24; // 0x52ce4e
    int64_t * found_byte_pos = memchr((int64_t *)(a3 + a1), c, (int32_t)n); // 0x52ce51
    int64_t result = -1; // 0x52ce5c
    while (found_byte_pos != NULL) {
        int64_t v4 = (int64_t)found_byte_pos;
        if (memcmp(found_byte_pos, (int64_t *)str, (int32_t)n2) == 0) {
            // 0x52ce80
            result = v4 - a1;
            return result;
        }
        uint64_t v5 = v1 + a1 + -1 - v4; // 0x52ce41
        result = -1;
        if (v5 < n2) {
            // break -> 0x52ce65
            break;
        }
        int64_t n3 = v5 + v3; // 0x52ce49
        result = -1;
        if (n3 == 0) {
            // break -> 0x52ce65
            break;
        }
        found_byte_pos = memchr((int64_t *)(v4 + 1), c, (int32_t)n3);
        result = -1;
    }
  lab_0x52ce65:
    // 0x52ce65
    return result;
}

// Address range: 0x52ce90 - 0x52ce9c
int64_t function_52ce90(int64_t a1, int64_t a2) {
    // 0x52ce90
    int64_t v1; // 0x52ce90
    return function_52cdb0(a1, a2, v1, *(int64_t *)(a2 + 8));
}

// Address range: 0x52cea0 - 0x52ceca
int64_t function_52cea0(int64_t a1, int64_t str, int64_t a3) {
    // 0x52cea0
    return function_52cdb0(a1, str, a3, (int64_t)strlen((char *)str));
}

// Address range: 0x52ced0 - 0x52cf17
int64_t function_52ced0(int64_t a1, int64_t a2, uint64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x52cedd
    int64_t result = -1; // 0x52cee4
    if (v1 > a3) {
        int64_t * found_byte_pos = memchr((int64_t *)(a3 + a1), 0x1000000 * (int32_t)a2 >> 24, (int32_t)(v1 - a3)); // 0x52cefb
        result = found_byte_pos != NULL ? (int64_t)found_byte_pos - a1 : -1;
    }
    // 0x52cf0d
    return result;
}

// Address range: 0x52cf20 - 0x52cfa5
int64_t function_52cf20(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x52cf31
    if (v1 < a4) {
        // 0x52cf7d
        return -1;
    }
    uint64_t v2 = v1 - a4; // 0x52cf3a
    int64_t result = v2 > a3 ? a3 : v2; // 0x52cf49
    if (a4 == 0) {
        // 0x52cf7d
        return result;
    }
    int64_t * str = (int64_t *)a2; // 0x52cf5e
    int32_t n = a4; // 0x52cf5e
    if (memcmp((int64_t *)(result + a1), str, n) == 0) {
        // 0x52cf7d
        return result;
    }
    int64_t v3 = result; // 0x52cf65
    int64_t result2 = -1; // 0x52cf6e
    while (v3 != 0) {
        // 0x52cf70
        v3--;
        int32_t memcmp_rc = memcmp((int64_t *)(v3 + a1), str, n); // 0x52cf5e
        result2 = v3;
        if (memcmp_rc == 0) {
            // break -> 0x52cf7d
            break;
        }
        result2 = -1;
    }
    // 0x52cf7d
    return result2;
}

// Address range: 0x52cfb0 - 0x52cfbc
int64_t function_52cfb0(int64_t a1, int64_t a2) {
    // 0x52cfb0
    int64_t v1; // 0x52cfb0
    return function_52cf20(a1, a2, v1, *(int64_t *)(a2 + 8));
}

// Address range: 0x52cfc0 - 0x52cfea
int64_t function_52cfc0(int64_t a1, int64_t str, int64_t a3) {
    // 0x52cfc0
    return function_52cf20(a1, str, a3, (int64_t)strlen((char *)str));
}

// Address range: 0x52cff0 - 0x52d028
int64_t function_52cff0(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x52cff0
    if (v1 == 0) {
        // 0x52d026
        return -1;
    }
    uint64_t v2 = v1 - 1; // 0x52d000
    int64_t result = v2 > a3 ? a3 : v2; // 0x52d006
    if (result == -1) {
        // 0x52d026
        return result;
    }
    int64_t v3 = result;
    int64_t result2 = v3; // 0x52d01b
    while (*(char *)(v3 + a1) != (char)a2) {
        int64_t v4 = v3 - 1; // 0x52d013
        result2 = v4;
        if (v3 == 0) {
            // break -> 0x52d026
            break;
        }
        v3 = v4;
        result2 = v3;
    }
    // 0x52d026
    return result2;
}

// Address range: 0x52d030 - 0x52d0a2
int64_t function_52d030(int64_t a1, int64_t str, uint64_t a3, int64_t n) {
    // 0x52d030
    if (n == 0) {
        // 0x52d081
        return -1;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x52d044
    if (v1 <= a3) {
        // 0x52d081
        return -1;
    }
    int64_t v2 = a3; // 0x52d060
    char c = *(char *)(v2 + a1); // 0x52d069
    int64_t result = v2; // 0x52d07c
    while (memchr((int64_t *)str, (int32_t)c, (int32_t)n) == NULL) {
        // 0x52d060
        v2++;
        result = -1;
        if (v2 == v1) {
            // break -> 0x52d081
            break;
        }
        c = *(char *)(v2 + a1);
        result = v2;
    }
    // 0x52d081
    return result;
}

// Address range: 0x52d0b0 - 0x52d0bc
int64_t function_52d0b0(int64_t a1, int64_t a2) {
    // 0x52d0b0
    int64_t v1; // 0x52d0b0
    return function_52d030(a1, a2, v1, *(int64_t *)(a2 + 8));
}

// Address range: 0x52d0c0 - 0x52d0ea
int64_t function_52d0c0(int64_t a1, int64_t str, int64_t a3) {
    // 0x52d0c0
    return function_52d030(a1, str, a3, (int64_t)strlen((char *)str));
}

// Address range: 0x52d0f0 - 0x52d0f9
int64_t function_52d0f0(int64_t a1, int64_t a2) {
    // 0x52d0f0
    int64_t v1; // 0x52d0f0
    return function_52ced0(a1, 0x100000000000000 * a2 >> 56, v1);
}

// Address range: 0x52d100 - 0x52d185
int64_t function_52d100(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x52d10a
    if (a4 == 0 || v1 == 0) {
        // 0x52d15a
        return -1;
    }
    uint64_t v2 = v1 - 1; // 0x52d118
    int64_t result = v2 > a3 ? a3 : v2; // 0x52d128
    int64_t * str = (int64_t *)a2; // 0x52d150
    int32_t n = a4; // 0x52d150
    if (memchr(str, (int32_t)*(char *)(result + a1), n) != NULL) {
        // 0x52d15a
        return result;
    }
    int64_t v3 = result; // 0x52d158
    int64_t result2 = -1; // 0x52d13f
    while (v3 != 0) {
        // 0x52d141
        v3--;
        result2 = v3;
        if (memchr(str, (int32_t)*(char *)(v3 + a1), n) != NULL) {
            // break -> 0x52d15a
            break;
        }
        result2 = -1;
    }
    // 0x52d15a
    return result2;
}

// Address range: 0x52d190 - 0x52d19c
int64_t function_52d190(int64_t a1, int64_t a2) {
    // 0x52d190
    int64_t v1; // 0x52d190
    return function_52d100(a1, a2, v1, *(int64_t *)(a2 + 8));
}

// Address range: 0x52d1a0 - 0x52d1ca
int64_t function_52d1a0(int64_t a1, int64_t str, int64_t a3) {
    // 0x52d1a0
    return function_52d100(a1, str, a3, (int64_t)strlen((char *)str));
}

// Address range: 0x52d1d0 - 0x52d1d9
int64_t function_52d1d0(int64_t a1, int64_t a2) {
    // 0x52d1d0
    int64_t v1; // 0x52d1d0
    return function_52cff0(a1, 0x100000000000000 * a2 >> 56, v1);
}

// Address range: 0x52d1e0 - 0x52d250
int64_t function_52d1e0(int64_t a1, int64_t str, int64_t result, int64_t n) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x52d1ef
    if (v1 <= result) {
        // 0x52d231
        return -1;
    }
    // 0x52d1f8
    if (n == 0) {
        // 0x52d231
        return result;
    }
    int64_t v2 = result; // 0x52d210
    char c = *(char *)(v2 + a1); // 0x52d219
    int64_t result2 = v2; // 0x52d22c
    while (memchr((int64_t *)str, (int32_t)c, (int32_t)n) != NULL) {
        // 0x52d210
        v2++;
        result2 = -1;
        if (v2 == v1) {
            // break -> 0x52d231
            break;
        }
        c = *(char *)(v2 + a1);
        result2 = v2;
    }
    // 0x52d231
    return result2;
}

// Address range: 0x52d250 - 0x52d25c
int64_t function_52d250(int64_t a1, int64_t a2) {
    // 0x52d250
    int64_t v1; // 0x52d250
    return function_52d1e0(a1, a2, v1, *(int64_t *)(a2 + 8));
}

// Address range: 0x52d260 - 0x52d28a
int64_t function_52d260(int64_t a1, int64_t str, int64_t a3) {
    // 0x52d260
    return function_52d1e0(a1, str, a3, (int64_t)strlen((char *)str));
}
