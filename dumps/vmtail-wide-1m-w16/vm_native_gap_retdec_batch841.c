/*
 * Targeted RetDec C for native executable gap queue batch 841.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xe1566-0xe1766 rank=- name=- kind=- bytes=- uncovered=-
 *   0xe1766-0xe1966 rank=- name=- kind=- bytes=- uncovered=-
 *   0xe1966-0xe1b66 rank=- name=- kind=- bytes=- uncovered=-
 *   0xe1d66-0xe1f66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x115fbf-0x1161bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1161bf-0x1163bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1163bf-0x1165bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1167bf-0x1169bf rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_115fbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_116052(void);
int64_t function_116062(int64_t a1, int64_t a2, int64_t a3);
int64_t function_116085(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1160ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1160dc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1160e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_116124(int64_t a1);
int64_t function_11623d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11626e(void);
int64_t function_1162b8(void);
int64_t function_1162f3(int64_t a1);
int64_t function_1162fe(int64_t a1);
int64_t function_116303(void);
int64_t function_116313(void);
int64_t function_116321(void);
int64_t function_11632a(void);
int64_t function_116384(void);
int64_t function_11638c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1163cd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1163dc(int64_t a1);
int64_t function_116432(int64_t a1, int64_t a2);
int64_t function_11646c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_11647b(int64_t a1);
int64_t function_1164b0(int64_t a1);
int64_t function_1164cb(int64_t a1);
int64_t function_116506(void);
int64_t function_11652c(void);
int64_t function_11653d(int64_t a1);
int64_t function_1167bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1167dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1168d7(void);
int64_t function_1168db(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1561604();
int64_t function_17364d6();
int64_t function_3a232066();
int64_t function_56bede7e();
int64_t function_c57b8();
int64_t function_e1566(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_e15bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e15e2(int64_t a1);
int64_t function_e15e3(int64_t a1);
int64_t function_e15e7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_e1681(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e1712(void);
int64_t function_e1734(int64_t a1);
int64_t function_e1770(int64_t a1, int64_t a2);
int64_t function_e178b(void);
int64_t function_e1791(int64_t a1);
int64_t function_e1794(void);
int64_t function_e1799(int64_t a1, int64_t a2, int64_t a3);
int64_t function_e183b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e1893(int64_t a1, int64_t a2, int64_t a3);
int64_t function_e18c9(int64_t a1);
int64_t function_e18f3(int64_t a1);
int64_t function_e1902(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e1a0f(int64_t a1);
int64_t function_e1a2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e1a4f(void);
int64_t function_e1a5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e1abe(void);
int64_t function_e1ad1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_e1af1(int64_t a1);
int64_t function_e1b08(int64_t a1);
int64_t function_e1b1c(void);
int64_t function_e1b39(void);
int64_t function_e1d66(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e1dca(void);
int64_t function_e1e16(int64_t a1);
int64_t function_e1e1f(void);
int64_t function_e1e58(int64_t a1);
int64_t function_e1e6a(void);
int64_t function_e1e6f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e1e86(void);
int64_t function_e1e8f(void);
int64_t function_e1e93(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, char a5);
int64_t function_e1f46(int64_t a1);
int64_t function_e491b7e();
int64_t function_ffffffff83776f8d();
int64_t function_ffffffffba9587ff();
int64_t function_ffffffffbdee8d84();
int64_t function_ffffffffd6c6611e();
int64_t unknown_118ecc6c();
int64_t unknown_191bc8d6();
int64_t unknown_3908e6fd();
int64_t unknown_3adce4c3();
int64_t unknown_3dd55a77();
int64_t unknown_4a12717d();
int64_t unknown_50f1d6ff();
int64_t unknown_570022e7();
int64_t unknown_5d0e49f5();
int64_t unknown_620a8045();
int64_t unknown_7758cc0c();
int64_t unknown_ffffffff862e23c9();
int64_t unknown_ffffffff96cd3f43();
int64_t unknown_ffffffff9e8253a9();
int64_t unknown_ffffffffa718bf51();
int64_t unknown_ffffffffb0814a96();
int64_t unknown_ffffffffbaff0022();
int64_t unknown_ffffffffd812b17a();
int64_t unknown_ffffffffea04658b();
int64_t unknown_fffffffff822ac06();

// Address range: 0xe1566 - 0xe1596
int64_t function_e1566(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // 0xe1566
    bool v3; // 0xe1566
    if (v3) {
        char * v4 = (char *)(v2 + 94); // 0xe158d
        *v4 = *v4 + (char)((uint64_t)v2 / 256);
        unknown_ffffffffb0814a96();
        return (int64_t)&v1;
    }
    char * v5 = (char *)(a4 + 92); // 0xe1568
    *v5 = *v5 | (char)v2;
    return function_c57b8();
}

// Address range: 0xe15bd - 0xe15e2
int64_t function_e15bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_3adce4c3(); // 0xe15bd
    float80_t v2; // 0xe15bd
    *(int16_t *)(a3 - 0x7fc960d1) = (int16_t)v2;
    int64_t v3 = -0x17e701bd; // bp-8, 0xe15c8
    int32_t * v4 = (int32_t *)(a3 + 13); // 0xe15cd
    *v4 = *v4 + (int32_t)v1;
    int32_t v5 = *(int32_t *)(v1 - 62); // 0xe15d0
    uint32_t v6 = (int32_t)a4; // 0xe15da
    uint32_t v7 = (int32_t)(int64_t)&v3 + v6; // 0xe15da
    char * v8 = (char *)(int64_t)v7; // 0xe15dc
    *v8 = (char)(v7 < v6) - (char)a3 + *v8;
    *(char *)(int64_t)(0x728b5c7e * v5) = (char)a2;
    return a2 & 0xffffffff;
}

// Address range: 0xe15e2 - 0xe15e3
int64_t function_e15e2(int64_t a1) {
    // 0xe15e2
    int64_t result; // 0xe15e2
    return result;
}

// Address range: 0xe15e3 - 0xe15e7
int64_t function_e15e3(int64_t a1) {
    // 0xe15e3
    int64_t result; // 0xe15e3
    char * v1 = (char *)(result - 44); // 0xe15e3
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0xe15e7 - 0xe1680
int64_t function_e15e7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0xe15e7
    int64_t v1; // 0xe15e7
    uint64_t v2 = v1 + a4 / 256; // 0xe15e7
    uint64_t v3 = v1 & 0xffffff00; // 0xe15e7
    int32_t v4 = (int32_t)a4 + (int32_t)a1; // 0xe15e9
    *(int32_t *)a4 = v4;
    __asm_hlt(a1, a2, a3);
    if (v4 == 0) {
        // 0xe15f0
        unknown_3908e6fd();
        int32_t v5 = *(int32_t *)(v2 % 256 | v3) & (int32_t)a3; // 0xe15fc
        __asm_int1(a1, a2, v5);
        int64_t v6 = unknown_7758cc0c(); // 0xe1606
        int16_t v7 = v5; // 0xe160b
        char v8 = a2;
        __asm_outsb(v7, v8);
        __asm_outsb(v7, v8);
        return (v6 + 44) % 256 | v6 & -256;
    }
    char * v9 = (char *)(int64_t)*(int32_t *)-0x2c004fc55e7dfe18; // 0xe164c
    *v9 = *v9 + (char)(v3 / 256);
    float80_t v10; // 0xe15e7
    *(float32_t *)-0x16f001ab = (float32_t)v10;
    unsigned char v11 = *(char *)0x7910920f & (char)v2; // 0xe1655
    char * v12 = (char *)(v3 | (int64_t)v11); // 0xe165b
    *v12 = *v12 + v11;
    int64_t v13 = a3 & -256 | 116; // 0xe1666
    int64_t v14 = a4 & -0xff01 | (int64_t)&g3; // 0xe166c
    unsigned char v15 = (char)v14; // 0xe166f
    *(char *)v13 = v15;
    int64_t result = unknown_3dd55a77() + 2 * v1 & 0xffffffff; // 0xe1678
    int32_t * v16 = (int32_t *)v13; // 0xe167a
    uint32_t v17 = *v16; // 0xe167a
    uint32_t v18 = v17 + (int32_t)v13; // 0xe167a
    *v16 = v18;
    unsigned char v19 = v15 % 32; // 0xe167c
    if (v19 != 0) {
        char * v20 = (char *)result; // 0xe167c
        unsigned char v21 = *v20; // 0xe167c
        *v20 = (char)(v18 < v17) << v19 - 1 | v21 << v19 | (char)((int16_t)v21 >> (int16_t)(9 - v19));
    }
    int32_t * v22 = (int32_t *)v14; // 0xe167e
    uint32_t v23 = *v22; // 0xe167e
    *v22 = v23 / 2 | 0x80000000 * v23;
    return result;
}

// Address range: 0xe1681 - 0xe1704
int64_t function_e1681(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xe1681
    int64_t result; // 0xe1681
    bool v1; // 0xe1681
    if (!v1 && true) {
        // 0xe1685
        return result;
    }
    char * v2 = (char *)(a4 + 87); // 0xe16e3
    unsigned char v3 = (char)a4; // 0xe16e3
    *v2 = *v2 + v3;
    char v4 = *(char *)0x64396df2; // 0xe16eb
    *(char *)0x64396df2 = v4 + (char)((uint64_t)result / 256);
    unsigned char v5 = v3 % 32; // 0xe16f1
    if (v5 != 0) {
        char * v6 = (char *)(a3 + 99); // 0xe16f1
        unsigned char v7 = *v6; // 0xe16f1
        *v6 = v7 >> v5 | v7 << 8 - v5;
    }
    __asm_out_133(-16, (char)result);
    return unknown_50f1d6ff();
}

// Address range: 0xe1712 - 0xe171e
int64_t function_e1712(void) {
    // 0xe1712
    int64_t v1; // 0xe1712
    return v1 & -256 | (int64_t)*(char *)0x2334c49301e8c700;
}

// Address range: 0xe1734 - 0xe173d
int64_t function_e1734(int64_t a1) {
    // 0xe1734
    int64_t v1; // 0xe1734
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0xe1770 - 0xe1778
int64_t function_e1770(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 27); // 0xe1770
    int64_t v2; // 0xe1770
    *v1 = *v1 + (int32_t)v2;
    return function_1561604();
}

// Address range: 0xe178b - 0xe178e
int64_t function_e178b(void) {
    // 0xe178b
    int64_t result; // 0xe178b
    return result;
}

// Address range: 0xe1791 - 0xe1794
int64_t function_e1791(int64_t a1) {
    // 0xe1791
    int64_t result; // 0xe1791
    return result;
}

// Address range: 0xe1794 - 0xe1799
int64_t function_e1794(void) {
    // 0xe1794
    return function_3a232066();
}

// Address range: 0xe1799 - 0xe17a0
int64_t function_e1799(int64_t a1, int64_t a2, int64_t a3) {
    // 0xe1799
    int64_t result; // 0xe1799
    return result;
}

// Address range: 0xe183b - 0xe1850
int64_t function_e183b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xe183b
    int64_t v1; // 0xe183b
    int64_t v2 = v1;
    int64_t v3 = unknown_620a8045(); // 0xe183b
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a2;
    int64_t v4; // 0xe183b
    *(int32_t *)a2 = *(int32_t *)&v4 + (int32_t)v1;
    return v3 & -256 | (int64_t)*(char *)-0x17e64325e1c96c63;
}

// Address range: 0xe1893 - 0xe1897
int64_t function_e1893(int64_t a1, int64_t a2, int64_t a3) {
    // 0xe1893
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0xe1893
    return result;
}

// Address range: 0xe18c9 - 0xe18f2
int64_t function_e18c9(int64_t a1) {
    // 0xe18c9
    bool v1; // 0xe18c9
    int64_t v2 = (v1 ? -4 : 4) + a1; // 0xe18c9
    int32_t * v3 = (int32_t *)(v2 - 0xe96303); // 0xe18e2
    uint32_t v4 = *v3; // 0xe18e2
    int64_t v5; // 0xe18c9
    uint32_t v6 = v4 + ((char)v5 > 84 ? -104 : -105); // 0xe18e2
    bool v7 = (char)v5 > 84 ? v6 <= v4 : v4 > 104; // 0xe18e2
    *v3 = v6;
    int64_t v8; // 0xe18c9
    int64_t v9 = (int64_t)&v8; // 0xe18e9
    int32_t * v10 = (int32_t *)(v2 + 0x524e3aed); // 0xe18ec
    *v10 = *v10 + (int32_t)v5;
    return v9 + 232 & 248 | v9 & -256 | (int64_t)v7;
}

// Address range: 0xe18f3 - 0xe18fd
int64_t function_e18f3(int64_t a1) {
    // 0xe18f3
    int64_t v1; // 0xe18f3
    return 0x77013d00 * v1 & 0xffffff00;
}

// Address range: 0xe1902 - 0xe1996
int64_t function_e1902(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xe1902
    int64_t v1; // 0xe1902
    uint64_t v2 = v1;
    int64_t v3 = a2;
    *(int32_t *)-0x14fc371fdb761602 = (int32_t)v1 & -256 | 112;
    char * v4 = (char *)(a1 - 37); // 0xe191e
    char v5 = v2; // 0xe191e
    *v4 = (char)((v1 & 256) != 0) + v5 + *v4;
    char v6 = __readfsbyte(-0x20db9fd5); // 0xe1922
    char v7 = v2 / 256; // 0xe1922
    char v8 = v6 + v7; // 0xe1922
    __writefsbyte(-0x20db9fd5, v8);
    if (((v8 ^ v6) & (v8 ^ v7)) >= 0) {
        // 0xe192c
        *(char *)0xce2cbd4 = *(char *)0xce2cbd4 - 1;
        *(char *)(v2 & 0xffffffff) = v5 + (char)a4;
        return __asm_in(-114);
    }
    int32_t v9 = __asm_in(-115); // 0xe196d
    unsigned char v10 = (char)v9; // 0xe1974
    __asm_out_134((int16_t)a3, v10);
    int64_t v11 = (int64_t)(v10 - 86) | (int64_t)(v9 & -256); // 0xe1975
    *(char *)v3 = *(char *)&v3 - 79 + (char)(v10 > 85);
    int32_t * v12 = (int32_t *)v11; // 0xe197f
    int32_t v13 = v11; // 0xe197f
    *v12 = *v12 + v13;
    *(int32_t *)(a1 & 0xffffffff) = v13 & -0xff01 | (int32_t)&g1;
    bool v14; // 0xe1902
    int64_t v15 = (v14 ? 0xfffffffc : 4) + a1; // 0xe1983
    int32_t v16 = a3;
    int64_t result = __asm_int1(v15 & 0xffffffff, 0x3dc6b064, v16); // 0xe1987
    *(int32_t *)a3 = v16 - 40;
    int32_t * v17 = (int32_t *)((v15 + v2 & 0xffffffff) - 0x508a1502); // 0xe198f
    *v17 = *v17 ^ -70;
    return result;
}

// Address range: 0xe1a0f - 0xe1a10
int64_t function_e1a0f(int64_t a1) {
    // 0xe1a0f
    int64_t result; // 0xe1a0f
    return result;
}

// Address range: 0xe1a2b - 0xe1a2e
int64_t function_e1a2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe1a2b
    int64_t result; // 0xe1a2b
    *(int32_t *)a3 = (int32_t)result + (int32_t)a4;
    return result;
}

// Address range: 0xe1a4f - 0xe1a50
int64_t function_e1a4f(void) {
    // 0xe1a4f
    int64_t result; // 0xe1a4f
    return result;
}

// Address range: 0xe1a5a - 0xe1a8a
int64_t function_e1a5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 0x17b91e00); // 0xe1a5c
    int64_t v2; // 0xe1a5a
    *v1 = *v1 | (char)v2;
    int32_t * v3 = (int32_t *)(a1 + 0x1800abef); // 0xe1a62
    int32_t v4 = a4; // 0xe1a62
    *v3 = *v3 + v4;
    uint32_t v5 = 0x10000 * (int32_t)v2 >> 16; // 0xe1a68
    int64_t v6 = -1 - v4 < (int32_t)a3 ? 31 : 30; // 0xe1a72
    int64_t v7 = (v6 + (int64_t)v5) % 256 | (int64_t)(v5 & -256); // 0xe1a72
    *(int32_t *)v7 = (int32_t)v7;
    return function_e1a4f();
}

// Address range: 0xe1abe - 0xe1ac3
int64_t function_e1abe(void) {
    // 0xe1abe
    return function_e491b7e();
}

// Address range: 0xe1ad1 - 0xe1adb
int64_t function_e1ad1(int64_t a1, int64_t a2, int64_t a3) {
    // 0xe1ad1
    int64_t result; // 0xe1ad1
    int32_t * v1 = (int32_t *)(a3 - 0x1793fef8 + result); // 0xe1ad1
    bool v2; // 0xe1ad1
    *v1 = *v1 + (int32_t)a1 + (int32_t)v2;
    int64_t v3; // 0xe1ad1
    *(int32_t *)a2 = *(int32_t *)&v3 + (int32_t)a3;
    return result;
}

// Address range: 0xe1af1 - 0xe1af4
int64_t function_e1af1(int64_t a1) {
    // 0xe1af1
    int64_t result; // 0xe1af1
    return result;
}

// Address range: 0xe1b08 - 0xe1b16
int64_t function_e1b08(int64_t a1) {
    // 0xe1b08
    int64_t v1; // 0xe1b08
    *(int32_t *)0x7e123a895c0091f5 = (int32_t)v1;
    return (256 * v1 | -0xff01) & v1;
}

// Address range: 0xe1b1c - 0xe1b21
int64_t function_e1b1c(void) {
    // 0xe1b1c
    return function_ffffffff83776f8d();
}

// Address range: 0xe1b39 - 0xe1b3e
int64_t function_e1b39(void) {
    // 0xe1b39
    return function_ffffffffbdee8d84();
}

// Address range: 0xe1d66 - 0xe1db3
int64_t function_e1d66(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe1d66
    int64_t result; // 0xe1d66
    return result;
}

// Address range: 0xe1dca - 0xe1dd0
int64_t function_e1dca(void) {
    // 0xe1dca
    int64_t result; // 0xe1dca
    return result;
}

// Address range: 0xe1e16 - 0xe1e1d
int64_t function_e1e16(int64_t a1) {
    // 0xe1e16
    int64_t result; // 0xe1e16
    return result;
}

// Address range: 0xe1e1f - 0xe1e20
int64_t function_e1e1f(void) {
    // 0xe1e1f
    int64_t result; // 0xe1e1f
    return result;
}

// Address range: 0xe1e58 - 0xe1e66
int64_t function_e1e58(int64_t a1) {
    // 0xe1e58
    int64_t result; // 0xe1e58
    *(char *)-0x16fa5aaf = *(char *)-0x16fa5aaf | (char)result;
    *(int32_t *)0x303cd029 = *(int32_t *)0x303cd029 + (int32_t)a1;
    return result;
}

// Address range: 0xe1e6a - 0xe1e6d
int64_t function_e1e6a(void) {
    // 0xe1e6a
    int64_t result; // 0xe1e6a
    return result;
}

// Address range: 0xe1e6f - 0xe1e85
int64_t function_e1e6f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe1e6f
    int64_t v1; // 0xe1e6f
    int32_t * v2 = (int32_t *)(4 * a4 - 22 + v1); // 0xe1e74
    int32_t v3 = *v2 ^ (int32_t)a2; // 0xe1e74
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0xe1e74
    *v2 = v3;
    int64_t result = (int64_t)*(int32_t *)0x643cd01e88a753f; // 0xe1e81
    if (v4 % 2 != 0) {
        result = function_e1e1f();
    }
    // 0xe1e83
    return result;
}

// Address range: 0xe1e86 - 0xe1e87
int64_t function_e1e86(void) {
    // 0xe1e86
    int64_t result; // 0xe1e86
    return result;
}

// Address range: 0xe1e8f - 0xe1e90
int64_t function_e1e8f(void) {
    // 0xe1e8f
    int64_t result; // 0xe1e8f
    return result;
}

// Address range: 0xe1e93 - 0xe1f37
int64_t function_e1e93(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, char a5) {
    // 0xe1e93
    int64_t v1; // 0xe1e93
    int32_t * v2 = (int32_t *)(v1 + 0x66274a72); // 0xe1e95
    *v2 = *v2 + (int32_t)a3;
    uint32_t v3 = (int32_t)v1 ^ 0x4201e8af; // 0xe1e9b
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0xe1e9b
    int64_t v5; // 0xe1e93
    uint64_t result = (int64_t)&v5; // 0xe1ea0
    if (v4 % 2 != 0) {
        // 0xe1eba
        return result;
    }
    int64_t v6 = v3; // 0xe1ea0
    uint32_t v7 = *(int32_t *)0xd5caca8e & (int32_t)v1; // 0xe1edc
    int64_t v8 = v7; // 0xe1edc
    int64_t * v9 = (int64_t *)(v6 - 8); // 0xe1ee3
    *v9 = v8;
    char * v10 = (char *)((a2 - (int64_t)(int16_t)&g2) % 0x10000 | a2 & -0x10000); // 0xe1ee4
    *v10 = *v10 + 114;
    char * v11 = (char *)(a3 + 1); // 0xe1eec
    char v12 = *v11 + (char)(result / 256); // 0xe1eec
    *v11 = v12;
    int64_t v13 = unknown_5d0e49f5(); // 0xe1ef4
    if (v12 >= 0) {
        v13 = function_e1e8f();
    }
    char * v14 = (char *)v13; // 0xe1ef6
    char v15 = v13; // 0xe1ef6
    *v14 = *v14 + v15;
    char * v16 = (char *)(8 * v1 - 0x2de5bdf7 + v8); // 0xe1ef8
    *v16 = *v16 + v15;
    int64_t v17 = a1 - 1; // 0xe1eff
    unknown_fffffffff822ac06(v17);
    char v18 = *(char *)(a1 - 66 + 8 * v1); // 0xe1f05
    int64_t v19 = 256 * (int64_t)(v18 | (char)(a3 / 256)) | a3 & -0xff01; // 0xe1f05
    int32_t * v20 = (int32_t *)(2 * v19); // 0xe1f14
    *v20 = *v20 + v7;
    int64_t v21 = *v9 - 4; // 0xe1f1a
    __asm_in_135((int16_t)v19);
    unknown_ffffffffbaff0022();
    int32_t v22 = *(int32_t *)(4 * v19 + v6); // 0xe1f21
    int64_t result2 = __asm_hlt(v17, v21, (int64_t)(v22 ^ (int32_t)v19)); // 0xe1f24
    float80_t v23; // 0xe1e93
    *(int16_t *)0x8c22f927 = (int16_t)v23;
    int32_t * v24 = (int32_t *)(8 * v21 + v8); // 0xe1f34
    *v24 = *v24 - 0x75c57cdd;
    return result2;
}

// Address range: 0xe1f46 - 0xe1f53
int64_t function_e1f46(int64_t a1) {
    // 0xe1f46
    return unknown_ffffffffa718bf51(a1) & -256 | (int64_t)__asm_in_136(93);
}

// Address range: 0x115fbf - 0x115fd2
int64_t function_115fbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x115fbf
    int64_t v1; // 0x115fbf
    __asm_out(106, (int32_t)v1);
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a4;
    return v1 + 0x5501e8e1;
}

// Address range: 0x116052 - 0x116055
int64_t function_116052(void) {
    // 0x116052
    int64_t result; // 0x116052
    return result;
}

// Address range: 0x116062 - 0x116085
int64_t function_116062(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = unknown_118ecc6c(); // 0x116066
    char * v2 = (char *)(v1 + 0x20b3000); // 0x11606b
    *v2 = *v2 + (char)v1;
    char * v3 = (char *)(a3 + 1); // 0x116071
    *v3 = *v3 + (char)(v1 / 256);
    char * v4 = (char *)((int64_t)((int32_t)unknown_ffffffffd812b17a() >> 31) + 29); // 0x11607b
    int64_t v5; // 0x116062
    *v4 = *v4 + (char)v5;
    return function_ffffffffd6c6611e();
}

// Address range: 0x116085 - 0x1160c8
int64_t function_116085(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = unknown_ffffffffea04658b() / 256 % 256 | a4 & -256; // 0x11608a
    int64_t v3 = unknown_ffffffff9e8253a9(); // 0x1160a3
    *(char *)a1 = __asm_insb((int16_t)a3);
    uint32_t v4 = (int32_t)v3 >> 31; // 0x1160af
    *(int32_t *)a1 = *(int32_t *)&v1;
    bool v5; // 0x116085
    int64_t v6 = v5 ? -4 : 4; // 0x1160b0
    int64_t v7; // 0x116085
    int32_t * v8 = (int32_t *)(v7 - 117); // 0x1160b3
    *v8 = *v8 + (int32_t)v2;
    int32_t v9 = *(int32_t *)(v7 - 128); // 0x1160b6
    int32_t v10 = *(int32_t *)(v7 + 107 + 4 * v2); // 0x1160bb
    int64_t v11 = __asm_hlt((int64_t)(v9 & (int32_t)(v6 + a1)), v1 + v6, (int64_t)v4); // 0x1160bf
    int32_t * v12 = (int32_t *)((int64_t)(v10 ^ (int32_t)v7) + 33); // 0x1160c2
    *v12 = *v12 + v4;
    return v11 & -256 | (int64_t)__asm_in_136(32);
}

// Address range: 0x1160ce - 0x1160dc
int64_t function_1160ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1160ce
    unknown_191bc8d6();
    uint64_t result = __asm_wait(); // 0x1160d5
    char * v1 = (char *)(result + 35); // 0x1160d8
    *v1 = *v1 + (char)(result / 256);
    return result;
}

// Address range: 0x1160dc - 0x1160e1
int64_t function_1160dc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1160dc
    int64_t result; // 0x1160dc
    *(char *)a3 = (char)result + (char)a3;
    return result;
}

// Address range: 0x1160e6 - 0x1160fa
int64_t function_1160e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1160e6
    int64_t v1; // 0x1160e6
    uint64_t v2 = v1;
    int64_t result = v2 / 2 & 99 | v2 & -256; // 0x1160ea
    int32_t * v3 = (int32_t *)(9 * a4); // 0x1160ed
    *v3 = *v3 + (int32_t)v1;
    char * v4 = (char *)(result - 76); // 0x1160f6
    *v4 = *v4 + (char)a3;
    return result;
}

// Address range: 0x116124 - 0x116127
int64_t function_116124(int64_t a1) {
    // 0x116124
    int64_t result; // 0x116124
    return result;
}

// Address range: 0x11623d - 0x116254
int64_t function_11623d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11623d
    int64_t v1; // 0x11623d
    return v1 & -239;
}

// Address range: 0x11626e - 0x116271
int64_t function_11626e(void) {
    // 0x11626e
    int64_t v1; // 0x11626e
    return v1 & -256 | 82;
}

// Address range: 0x1162b8 - 0x1162b9
int64_t function_1162b8(void) {
    // 0x1162b8
    int64_t result; // 0x1162b8
    return result;
}

// Address range: 0x1162f3 - 0x1162f4
int64_t function_1162f3(int64_t a1) {
    // 0x1162f3
    int64_t result; // 0x1162f3
    return result;
}

// Address range: 0x1162fe - 0x116300
int64_t function_1162fe(int64_t a1) {
    // 0x1162fe
    int64_t v1; // 0x1162fe
    return v1 & 0xffffffff;
}

// Address range: 0x116303 - 0x116306
int64_t function_116303(void) {
    // 0x116303
    int64_t result; // 0x116303
    return result;
}

// Address range: 0x116313 - 0x116315
int64_t function_116313(void) {
    // 0x116313
    int64_t result; // 0x116313
    return result;
}

// Address range: 0x116321 - 0x116323
int64_t function_116321(void) {
    // 0x116321
    int64_t result; // 0x116321
    return result;
}

// Address range: 0x11632a - 0x116337
int64_t function_11632a(void) {
    // 0x11632a
    bool v1; // 0x11632a
    if (true == !v1) {
        function_1162b8();
    }
    // 0x11632d
    return function_ffffffffba9587ff();
}

// Address range: 0x116384 - 0x116385
int64_t function_116384(void) {
    // 0x116384
    int64_t result; // 0x116384
    return result;
}

// Address range: 0x11638c - 0x116399
int64_t function_11638c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x70054aec); // 0x11638c
    int64_t v2; // 0x11638c
    *v1 = *v1 ^ (int32_t)v2;
    return function_17364d6();
}

// Address range: 0x1163cd - 0x1163d5
int64_t function_1163cd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1163cd
    int64_t result; // 0x1163cd
    *(char *)a2 = 2 * (char)result;
    return result;
}

// Address range: 0x1163dc - 0x1163df
int64_t function_1163dc(int64_t a1) {
    // 0x1163dc
    int64_t result; // 0x1163dc
    return result;
}

// Address range: 0x116432 - 0x116443
int64_t function_116432(int64_t a1, int64_t a2) {
    // 0x116432
    int64_t result; // 0x116432
    return result;
}

// Address range: 0x11646c - 0x11647b
int64_t function_11646c(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 0x7e3117f9); // 0x11646c
    *v1 = *v1 | (int32_t)a3;
    int64_t result; // 0x11646c
    return result;
}

// Address range: 0x11647b - 0x116480
int64_t function_11647b(int64_t a1) {
    // 0x11647b
    int64_t v1; // 0x11647b
    return v1 | 190;
}

// Address range: 0x1164b0 - 0x1164bd
int64_t function_1164b0(int64_t a1) {
    // 0x1164b0
    int64_t result; // 0x1164b0
    __asm_out(-24, (int32_t)result);
    *(int32_t *)a1 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x1164cb - 0x1164d7
int64_t function_1164cb(int64_t a1) {
    // 0x1164cb
    int64_t v1; // 0x1164cb
    char * v2 = (char *)(4 * a1 + 0x7501e890 + v1); // 0x1164cb
    *v2 = *v2 >> 1;
    return function_56bede7e();
}

// Address range: 0x116506 - 0x116507
int64_t function_116506(void) {
    // 0x116506
    int64_t result; // 0x116506
    return result;
}

// Address range: 0x11652c - 0x11652e
int64_t function_11652c(void) {
    // 0x11652c
    return function_116506();
}

// Address range: 0x11653d - 0x11657e
int64_t function_11653d(int64_t a1) {
    int64_t result = unknown_ffffffff96cd3f43(); // 0x11653d
    bool v1; // 0x11653d
    if (true != !v1) {
        // 0x116544
        return result;
    }
    int64_t v2 = unknown_4a12717d(); // 0x116577
    return (v2 + 82) % 256 | v2 & -256;
}

// Address range: 0x1167bf - 0x1167d7
int64_t function_1167bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1167bf
    bool v1; // 0x1167bf
    int64_t v2 = v1 ? -1 : 1; // 0x1167bf
    int64_t v3 = v2 + a1; // 0x1167bf
    int64_t result = unknown_ffffffff862e23c9(v3, v2 + a2); // 0x1167c3
    *(char *)v3 = __asm_insb((int16_t)a3);
    int32_t * v4 = (int32_t *)(a4 - 0xfa4e00b); // 0x1167d1
    int64_t v5; // 0x1167bf
    *v4 = *v4 + (int32_t)v5;
    return result;
}

// Address range: 0x1167dc - 0x1167e9
int64_t function_1167dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1167dc
    __asm_iretd();
    return unknown_570022e7();
}

// Address range: 0x1168d7 - 0x1168d9
int64_t function_1168d7(void) {
    // 0x1168d7
    int64_t result; // 0x1168d7
    return result;
}

// Address range: 0x1168db - 0x1168f7
int64_t function_1168db(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1168db
    int64_t v1; // 0x1168db
    int32_t * v2 = (int32_t *)(v1 + 0x3d00f0b1); // 0x1168db
    *v2 = *v2 + (int32_t)a4;
    int32_t * v3 = (int32_t *)(2 * v1 + 0xfa3c7bf + v1); // 0x1168e1
    uint32_t v4 = *v3; // 0x1168e1
    uint32_t v5 = v4 + (int32_t)v1; // 0x1168e1
    *v3 = v5;
    char * v6 = (char *)(v1 - 115); // 0x1168e8
    *v6 = *v6 + (char)a3 + (char)(v5 < v4);
    char * v7 = (char *)(a4 + 54); // 0x1168f2
    *v7 = 4 * *v7;
    int64_t v8; // 0x1168db
    return (int64_t)(*(int32_t *)&v8 & ((int32_t)v1 ^ 0x5b7ba258));
}
