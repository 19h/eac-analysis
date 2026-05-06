/*
 * Targeted RetDec C for native executable gap queue batch 1000.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1a56bb-0x1a58bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a58bb-0x1a5abb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a5cbb-0x1a5ebb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a5ebb-0x1a60bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a60bb-0x1a62bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a62bb-0x1a64bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a64bb-0x1a66bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x27a241-0x27a441 rank=- name=- kind=- bytes=- uncovered=-
 *   0x27a641-0x27a841 rank=- name=- kind=- bytes=- uncovered=-
 *   0x27a841-0x27aa41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x27aa41-0x27ac41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x27ac41-0x27ae41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x27ae41-0x27b041 rank=- name=- kind=- bytes=- uncovered=-
 *   0x27b041-0x27b241 rank=- name=- kind=- bytes=- uncovered=-
 *   0x340873-0x340a73 rank=- name=- kind=- bytes=- uncovered=-
 *   0x340c73-0x340e73 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_164a1632();
int64_t function_1710a6f();
int64_t function_17157b0();
int64_t function_1a56ac();
int64_t function_1a56bb(void);
int64_t function_1a5717(int64_t a1, int64_t a2);
int64_t function_1a580e(void);
int64_t function_1a5899(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a58d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a5907(void);
int64_t function_1a590a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1a5966(void);
int64_t function_1a598c(void);
int64_t function_1a59b1(int64_t a1, int64_t a2);
int64_t function_1a59c9(void);
int64_t function_1a59cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a59ea(int64_t a1);
int64_t function_1a5a2d(int64_t a1);
int64_t function_1a5a81(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a5cbb(void);
int64_t function_1a5cf6(void);
int64_t function_1a5d1a(void);
int64_t function_1a5d25(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1a5d53(void);
int64_t function_1a5d70(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a5d8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1a5db0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a5dd3(void);
int64_t function_1a5ddb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_1a5e22(void);
int64_t function_1a5e29(void);
int64_t function_1a5e3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1a5edc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1a5f13(void);
int64_t function_1a5f56(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1a5f68(int64_t a1);
int64_t function_1a5f7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a5fee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a6020(int64_t a1);
int64_t function_1a6022(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1a6187(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1a6318(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a6454(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20ea8670();
int64_t function_20fd87e();
int64_t function_2101069();
int64_t function_27a225();
int64_t function_27a241(void);
int64_t function_27a273(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27a2bc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27a2dc(void);
int64_t function_27a316(int64_t a1);
int64_t function_27a347(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27a354(void);
int64_t function_27a36c(void);
int64_t function_27a394(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27a3c4(int64_t a1);
int64_t function_27a3cb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27a3e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_27a3ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27a41b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27a433(void);
int64_t function_27a43a(void);
int64_t function_27a641(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27a68a(int64_t a1);
int64_t function_27a695(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_27a6ec(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27a748(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27a7cf(void);
int64_t function_27a835(int64_t a1);
int64_t function_27a83a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27a91d(void);
int64_t function_27a947(void);
int64_t function_27a981(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_27aa37(void);
int64_t function_27aaa6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27aac0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_27ab2d(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_27ab42(int64_t a1);
int64_t function_27ab53(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_27abe6(void);
int64_t function_27ac57(int64_t a1);
int64_t function_27ac6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27aca1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27acc1(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_27ad3c(void);
int64_t function_27ad7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27ada0(int64_t a1);
int64_t function_27adbb(int64_t a1);
int64_t function_27ae0e(void);
int64_t function_27aeac(int64_t a1);
int64_t function_27aee9(int64_t a1, int64_t a2);
int64_t function_27af22(int64_t a1);
int64_t function_27af49(int64_t a1);
int64_t function_27afce(void);
int64_t function_27afd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_27aff7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27b00a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_27b015(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_27b0b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27b0ee(void);
int64_t function_27b0f3(int64_t a1);
int64_t function_27b10d(void);
int64_t function_27b11e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_27b1e0(void);
int64_t function_27b1f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27b219(void);
int64_t function_2fa8ff73();
int64_t function_340873(void);
int64_t function_34087f(void);
int64_t function_340880(void);
int64_t function_34088e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_340991(int64_t a1, int64_t a2, int64_t a3);
int64_t function_340a3b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_340a4c(void);
int64_t function_340a65(int64_t a1);
int64_t function_340c73(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_340cb1(int64_t a1);
int64_t function_340cc6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_340cfe(int64_t a1, int64_t a2);
int64_t function_340d11(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_340d68(void);
int64_t function_340d86(void);
int64_t function_340d98(int64_t a1, int64_t a2);
int64_t function_340dca(void);
int64_t function_340df3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_340e0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_354da897();
int64_t function_563528ca();
int64_t function_706643e8();
int64_t function_78ba6070();
int64_t function_c823b();
int64_t function_e18b8b6();
int64_t function_ffffffff8555c32d();
int64_t function_ffffffff8c5f5a22();
int64_t function_ffffffff985575f0();
int64_t function_ffffffffab27cd20();
int64_t function_ffffffffab597cc1();
int64_t function_ffffffffe82d12df();
int64_t function_fffffffff80a6552();
int64_t function_fffffffffa30a956();
int64_t unknown_1051009f();
int64_t unknown_1057b42();
int64_t unknown_17301784();
int64_t unknown_1a71d495();
int64_t unknown_1c20dcd3();
int64_t unknown_1e922e0();
int64_t unknown_2699482b();
int64_t unknown_3abb2d33();
int64_t unknown_3c252f1e();
int64_t unknown_3d1c40c1();
int64_t unknown_3d1c4682();
int64_t unknown_3d9290c0();
int64_t unknown_5ba8a4b();
int64_t unknown_70964aa9();
int64_t unknown_73d2a584();
int64_t unknown_78471651();
int64_t unknown_bddf04a();
int64_t unknown_ffffffff88fcf438();
int64_t unknown_ffffffff902dd95a();
int64_t unknown_ffffffffac3cdb68();
int64_t unknown_ffffffffad5fd4d9();
int64_t unknown_ffffffffb50cce9f();
int64_t unknown_ffffffffd9d661bf();
int64_t unknown_ffffffffe82b3351();
int64_t unknown_ffffffffe877868d();
int64_t unknown_ffffffffef4bd717();
int64_t unknown_fffffffff1943efc();
int64_t unknown_ffffffffffcda026();
int64_t unknown_ffffffffffedbcbf();

// Address range: 0x1a56bb - 0x1a56be
int64_t function_1a56bb(void) {
    // 0x1a56bb
    int64_t result; // 0x1a56bb
    return result;
}

// Address range: 0x1a5717 - 0x1a571f
int64_t function_1a5717(int64_t a1, int64_t a2) {
    // 0x1a5717
    bool v1; // 0x1a5717
    int64_t v2 = v1 ? -4 : 4; // 0x1a5717
    unknown_3c252f1e(v2 + a1, v2 + a2);
    return function_1a56ac();
}

// Address range: 0x1a580e - 0x1a580f
int64_t function_1a580e(void) {
    // 0x1a580e
    int64_t result; // 0x1a580e
    return result;
}

// Address range: 0x1a5899 - 0x1a58d6
int64_t function_1a5899(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a5899
    unknown_1051009f();
    unsigned char v1 = (unsigned char)(char)a4 % 32; // 0x1a58aa
    if (v1 != 0) {
        char * v2 = (char *)((256 * a3 & 0x6b00 | 0x282794f3) + 0x1811f00); // 0x1a58aa
        *v2 = *v2 << v1;
    }
    int64_t v3 = unknown_3d1c40c1(); // 0x1a58bb
    uint32_t v4 = *(int32_t *)0x7b3d7dba; // 0x1a58c0
    uint32_t v5 = v4 + (int32_t)a2; // 0x1a58c0
    *(int32_t *)0x7b3d7dba = v5;
    int32_t * v6 = (int32_t *)((a3 & -0xff01 | (int64_t)&g3) + 0x7560b43d); // 0x1a58cd
    *v6 = *v6 + (int32_t)a1;
    return (v3 + 98 + (int64_t)(v5 < v4)) % 256 | v3 & -256;
}

// Address range: 0x1a58d8 - 0x1a58de
int64_t function_1a58d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 84); // 0x1a58d8
    int64_t result; // 0x1a58d8
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1a5907 - 0x1a5908
int64_t function_1a5907(void) {
    // 0x1a5907
    int64_t result; // 0x1a5907
    return result;
}

// Address range: 0x1a590a - 0x1a591e
int64_t function_1a590a(int64_t a1, int64_t a2, int64_t a3) {
    char v1 = __asm_in_134(-29); // 0x1a5912
    unsigned char v2 = *(char *)0x149475b901e83a20; // 0x1a5914
    int64_t v3; // 0x1a590a
    return (int64_t)v1 & -256 | v3 + 0xe8a6db01 & 0xffffff00 | (int64_t)v2;
}

// Address range: 0x1a5966 - 0x1a5967
int64_t function_1a5966(void) {
    // 0x1a5966
    int64_t result; // 0x1a5966
    return result;
}

// Address range: 0x1a598c - 0x1a5991
int64_t function_1a598c(void) {
    // 0x1a598c
    return function_ffffffffab597cc1();
}

// Address range: 0x1a59b1 - 0x1a59b7
int64_t function_1a59b1(int64_t a1, int64_t a2) {
    // 0x1a59b1
    int64_t result; // 0x1a59b1
    return result;
}

// Address range: 0x1a59c9 - 0x1a59ca
int64_t function_1a59c9(void) {
    // 0x1a59c9
    int64_t result; // 0x1a59c9
    return result;
}

// Address range: 0x1a59cf - 0x1a59ea
int64_t function_1a59cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1a59cf
    bool v1; // 0x1a59cf
    if (v1 || false) {
        function_1a5966();
    }
    // 0x1a59d3
    unknown_ffffffffad5fd4d9();
    int64_t v2; // 0x1a59cf
    if (*(int32_t *)(a2 - 84 + 4 * a1) <= (int32_t)v2) {
        function_1a59c9();
    }
    int32_t * v3 = (int32_t *)(8 * a4 - 85 + v2); // 0x1a59e1
    *v3 = *v3 + (int32_t)a3;
    return function_ffffffff8c5f5a22();
}

// Address range: 0x1a59ea - 0x1a59eb
int64_t function_1a59ea(int64_t a1) {
    // 0x1a59ea
    int64_t result; // 0x1a59ea
    return result;
}

// Address range: 0x1a5a2d - 0x1a5a33
int64_t function_1a5a2d(int64_t a1) {
    // 0x1a5a2d
    return unknown_3abb2d33(a1);
}

// Address range: 0x1a5a81 - 0x1a5aa2
int64_t function_1a5a81(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a5a81
    int64_t v1; // 0x1a5a81
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t result; // 0x1a5a81
    int64_t v3 = result;
    *(char *)v3 = *(char *)&result + (char)v3;
    return result;
}

// Address range: 0x1a5cbb - 0x1a5cbf
int64_t function_1a5cbb(void) {
    // 0x1a5cbb
    int64_t result; // 0x1a5cbb
    return result;
}

// Address range: 0x1a5cf6 - 0x1a5d0d
int64_t function_1a5cf6(void) {
    // 0x1a5cf6
    unknown_fffffffff1943efc();
    __asm_int3();
    int64_t v1; // 0x1a5cf6
    int32_t * v2 = (int32_t *)(v1 - 0xbf8f851); // 0x1a5d04
    *v2 = *v2 - (int32_t)v1;
    return function_1a5d70(v1, v1, v1, v1);
}

// Address range: 0x1a5d1a - 0x1a5d21
int64_t function_1a5d1a(void) {
    // 0x1a5d1a
    int64_t result; // 0x1a5d1a
    return result;
}

// Address range: 0x1a5d25 - 0x1a5d30
int64_t function_1a5d25(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1a5d25
    int64_t v1; // 0x1a5d25
    uint64_t v2 = v1;
    char v3 = *(char *)((v1 + a2 & 0xffffffff) + 0x2e06287f); // 0x1a5d27
    return 256 * (int64_t)(v3 & (char)(v2 / 256)) | v2 & -0xff01;
}

// Address range: 0x1a5d53 - 0x1a5d54
int64_t function_1a5d53(void) {
    // 0x1a5d53
    int64_t result; // 0x1a5d53
    return result;
}

// Address range: 0x1a5d70 - 0x1a5d74
int64_t function_1a5d70(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1a5d70
    int64_t result; // 0x1a5d70
    *(int32_t *)a3 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x1a5d8f - 0x1a5da2
int64_t function_1a5d8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    char * v1 = (char *)(a3 + 9); // 0x1a5d8f
    int64_t v2; // 0x1a5d8f
    *v1 = *v1 ^ (char)(v2 / 256);
    unknown_ffffffffb50cce9f();
    return v2 & 0xffffffff;
}

// Address range: 0x1a5db0 - 0x1a5dc4
int64_t function_1a5db0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1a5db0
    int64_t v1; // 0x1a5db0
    char * v2 = (char *)(2 * v1 + a2); // 0x1a5db5
    *v2 = *v2 | (char)v1;
    return unknown_ffffffffd9d661bf();
}

// Address range: 0x1a5dd3 - 0x1a5dd4
int64_t function_1a5dd3(void) {
    // 0x1a5dd3
    int64_t result; // 0x1a5dd3
    return result;
}

// Address range: 0x1a5ddb - 0x1a5e00
int64_t function_1a5ddb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    int64_t v1; // 0x1a5ddb
    if (a4 == 0) {
        v1 = function_1a5dd3();
    }
    // 0x1a5ddd
    *(char *)a1 = (char)a2;
    *(int32_t *)0x7689d8ac378801e8 = (int32_t)v1 | 58;
    return result;
}

// Address range: 0x1a5e22 - 0x1a5e27
int64_t function_1a5e22(void) {
    // 0x1a5e22
    return function_ffffffffab27cd20();
}

// Address range: 0x1a5e29 - 0x1a5e2a
int64_t function_1a5e29(void) {
    // 0x1a5e29
    int64_t result; // 0x1a5e29
    return result;
}

// Address range: 0x1a5e3c - 0x1a5ec7
int64_t function_1a5e3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1;
    int64_t v2; // 0x1a5e3c
    *(int32_t *)a4 = (int32_t)v2 - 0x1e89af5;
    char v3 = 2 * *(char *)&v1; // 0x1a5e51
    *(char *)a1 = v3;
    int64_t v4 = a1; // bp-8, 0x1a5e53
    uint64_t v5 = a4 - 1; // 0x1a5e54
    float80_t v6; // 0x1a5e3c
    if (v5 != 0 && v3 != 0) {
        int64_t v7 = v2 + 0x1e8bcbe; // 0x1a5e4c
        int64_t result = v7 & 0xffffffff; // 0x1a5e4c
        char * v8 = (char *)result; // 0x1a5eae
        *v8 = *v8 | (char)v7;
        *(int64_t *)(int64_t)(-0x3286e61c * *(int32_t *)(v2 - 0x2725be96)) = 0xd76ba00;
        *(int32_t *)v1 = (int32_t)v6;
        return result;
    }
    int64_t v9 = (int64_t)&v4; // 0x1a5e53
    int32_t * v10 = (int32_t *)(a2 + 0x38fe5083 + v9); // 0x1a5e56
    *v10 = *v10 + (int32_t)v2;
    *(int32_t *)0x7986b9a4 = (int32_t)v6;
    char * v11 = (char *)(2 * ((v5 / 256 + v9) % 256 | v9 & 0x7fffff00)); // 0x1a5e72
    char v12 = *v11; // 0x1a5e72
    char v13 = v5; // 0x1a5e72
    char v14 = v12 + v13; // 0x1a5e72
    *v11 = v14;
    if (((v14 ^ v12) & (v14 ^ v13)) >= 0) {
        function_1a5e29();
    }
    // 0x1a5e76
    unknown_3d1c4682();
    return function_78ba6070();
}

// Address range: 0x1a5edc - 0x1a5efa
int64_t function_1a5edc(int64_t a1, int64_t a2, int64_t a3) {
    char v1 = *(char *)0xfd951e8; // 0x1a5ee1
    int64_t v2; // 0x1a5edc
    *(char *)0xfd951e8 = v1 + (char)((uint64_t)v2 / 256);
    char v3 = v2;
    __asm_out(-91, v3);
    *(char *)v2 = 2 * v3;
    int64_t v4; // 0x1a5edc
    *(char *)v4 = *(char *)&v4 + (char)a3;
    int64_t v5; // 0x1a5edc
    int64_t v6 = v5;
    *(char *)v6 = *(char *)&v5 + (char)v6;
    return function_fffffffff80a6552();
}

// Address range: 0x1a5f13 - 0x1a5f18
int64_t function_1a5f13(void) {
    // 0x1a5f13
    return function_ffffffff8555c32d();
}

// Address range: 0x1a5f56 - 0x1a5f60
int64_t function_1a5f56(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 0x4ff817a3); // 0x1a5f56
    int64_t result; // 0x1a5f56
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1a5f68 - 0x1a5f6d
int64_t function_1a5f68(int64_t a1) {
    // 0x1a5f68
    int64_t v1; // 0x1a5f68
    int64_t v2 = v1;
    bool v3; // 0x1a5f68
    return (v2 + 214 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x1a5f7a - 0x1a5fd4
int64_t function_1a5f7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t * v1 = (int64_t *)(a5 + 0x6261a462); // 0x1a5f7a
    *v1 = *v1 - a5;
    int64_t v2; // 0x1a5f7a
    if ((int32_t)v2 < 0xe6199e02) {
        unsigned char v3 = *(char *)(a2 + 0xe8088885 + 8 * v2 & 0xffffffff); // 0x1a5fd2
        return v2 & 0xffffff00 | (int64_t)v3;
    }
    int32_t * v4 = (int32_t *)(a1 - 0x77fec29d); // 0x1a5f97
    *v4 = *v4 + (int32_t)a2;
    return function_1a5f68((int64_t)&g4);
}

// Address range: 0x1a5fee - 0x1a5fff
int64_t function_1a5fee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1a5fee
    int64_t v1; // 0x1a5fee
    int32_t * v2 = (int32_t *)(v1 + 9); // 0x1a5ff3
    int32_t v3 = *v2; // 0x1a5ff3
    int32_t v4 = a4; // 0x1a5ff3
    int32_t v5 = v3 + v4; // 0x1a5ff3
    *v2 = v5;
    int64_t result = v1 + 0xe881d548 & 0xffffffff; // 0x1a5ff6
    if (((v5 ^ v3) & (v5 ^ v4)) >= 0) {
        result = function_ffffffff985575f0();
    }
    // 0x1a5ffc
    return result;
}

// Address range: 0x1a6020 - 0x1a6021
int64_t function_1a6020(int64_t a1) {
    // 0x1a6020
    int64_t result; // 0x1a6020
    return result;
}

// Address range: 0x1a6022 - 0x1a6187
int64_t function_1a6022(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int16_t v2 = a3; // 0x1a602b
    int64_t v3; // 0x1a6022
    __asm_outsb(v2, (char)v3);
    char v4 = *(char *)unknown_ffffffff88fcf438(); // 0x1a6037
    int64_t v5 = 256 * (int64_t)(v4 | (char)(a4 / 256)) | a4 & -0xff01; // 0x1a6037
    int32_t * v6 = (int32_t *)(v3 - 0x7ffffcc7); // 0x1a6040
    *v6 = *v6 + (int32_t)a1;
    char v7 = a4; // 0x1a6046
    *(char *)a1 = *(char *)&v1 + v7;
    char * v8 = (char *)((v3 & 0xffffffff) - 125); // 0x1a6051
    *v8 = *v8 + v7;
    __asm_in_133(v2);
    char * v9 = (char *)(v5 + 60 + 4 * v5); // 0x1a6055
    *v9 = *v9 | v7;
    int64_t v10 = 0x503bdc45; // bp-16, 0x1a6107
    int64_t v11 = (int64_t)&v10; // 0x1a6137
    int64_t v12 = v11 + 8; // 0x1a6155
    v10 = *(int64_t *)v12;
    *(int64_t *)(v11 - 8) = v12;
    return function_c823b(v1, (int64_t)*(int32_t *)(v3 + 66), a3, v3, v3, v3, a5);
}

// Address range: 0x1a6187 - 0x1a6318
int64_t function_1a6187(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1a6187
    int64_t v1; // 0x1a6187
    bool v2; // 0x1a6187
    return function_c823b(a1, a2, a3, a4, 310, v1 & -256 | (int64_t)v2, 0x6c52dd98);
}

// Address range: 0x1a6318 - 0x1a6454
int64_t function_1a6318(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x1a4a9b; // bp-32, 0x1a63f2
    int64_t v2 = (int64_t)&v1; // 0x1a6427
    *(int64_t *)(v2 - 8) = 0x1a4a9b;
    int64_t v3 = v2 - 16; // 0x1a6436
    *(int64_t *)(v2 - 24) = v3;
    *(int64_t *)v3 = v2;
    int64_t v4; // 0x1a6318
    return function_c823b(a1, a2, a3, v4, v4, v4, 0x1a4a9b);
}

// Address range: 0x1a6454 - 0x1a65f2
int64_t function_1a6454(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a6454
    bool v1; // 0x1a6454
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // bp-8, 0x1a6454
    int64_t v3 = (int64_t)&v2; // 0x1a65c2
    *(int64_t *)(v3 - 8) = v3 + 8;
    int64_t v4; // 0x1a6454
    return function_c823b(a1, a2, a3, a4, v4, v4, a5);
}

// Address range: 0x27a241 - 0x27a242
int64_t function_27a241(void) {
    // 0x27a241
    int64_t result; // 0x27a241
    return result;
}

// Address range: 0x27a273 - 0x27a28a
int64_t function_27a273(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27a273
    int64_t v1; // 0x27a273
    int64_t v2 = v1;
    __asm_out_135(102, (int32_t)v1);
    function_27a225();
    *(char *)v2 = (char)v2 + (char)a3;
    int32_t v3 = __asm_in_136(62); // 0x27a285
    return (int64_t)((v3 + 179) % 256) | (int64_t)(v3 & -256);
}

// Address range: 0x27a2bc - 0x27a2c5
int64_t function_27a2bc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27a2bc
    return function_ffffffffe82d12df();
}

// Address range: 0x27a2dc - 0x27a2e4
int64_t function_27a2dc(void) {
    // 0x27a2dc
    int64_t v1; // 0x27a2dc
    *(int32_t *)-0x649d6a9f = *(int32_t *)-0x649d6a9f + (int32_t)v1;
    return unknown_ffffffff902dd95a();
}

// Address range: 0x27a316 - 0x27a319
int64_t function_27a316(int64_t a1) {
    // 0x27a316
    int64_t result; // 0x27a316
    return result;
}

// Address range: 0x27a347 - 0x27a351
int64_t function_27a347(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27a347
    bool v1; // 0x27a347
    if (!v1) {
        unknown_1e922e0();
    }
    // 0x27a349
    return unknown_ffffffffe82b3351();
}

// Address range: 0x27a354 - 0x27a35f
int64_t function_27a354(void) {
    int64_t result = unknown_ffffffff902dd95a(); // 0x27a354
    char * v1 = (char *)result; // 0x27a35c
    *v1 = *v1 + 42;
    return result;
}

// Address range: 0x27a36c - 0x27a373
int64_t function_27a36c(void) {
    // 0x27a36c
    return unknown_1e922e0();
}

// Address range: 0x27a394 - 0x27a39b
int64_t function_27a394(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27a394
    int64_t v1; // 0x27a394
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a4;
    return function_20ea8670();
}

// Address range: 0x27a3c4 - 0x27a3c5
int64_t function_27a3c4(int64_t a1) {
    // 0x27a3c4
    int64_t result; // 0x27a3c4
    return result;
}

// Address range: 0x27a3cb - 0x27a3da
int64_t function_27a3cb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27a3cb
    int64_t v1; // 0x27a3cb
    float80_t v2; // 0x27a3cb
    *(int32_t *)v1 = (int32_t)v2;
    int64_t result = unknown_1c20dcd3(); // 0x27a3cd
    int64_t v3; // 0x27a3cb
    *(char *)a1 = *(char *)&v3;
    return result;
}

// Address range: 0x27a3e7 - 0x27a3ed
int64_t function_27a3e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x27a3e7
    int64_t result; // 0x27a3e7
    *(int32_t *)a4 = (int32_t)result - 54;
    return result;
}

// Address range: 0x27a3ee - 0x27a3f8
int64_t function_27a3ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x27a3ee
    int32_t * v3 = (int32_t *)(v2 - 77); // 0x27a3ee
    *v3 = *v3 + (int32_t)a3;
    *(char *)v1 = *(char *)&v1 + (char)a4;
    return 0x10000 * (int32_t)v2 >> 16 & -126;
}

// Address range: 0x27a41b - 0x27a424
int64_t function_27a41b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 120); // 0x27a41b
    int64_t v2; // 0x27a41b
    *v1 = *v1 + (int32_t)v2;
    unsigned char v3 = (char)a4 % 32; // 0x27a41e
    if (v3 != 0) {
        char * v4 = (char *)(v2 - 77); // 0x27a41e
        *v4 = *v4 << v3;
    }
    return function_27a43a();
}

// Address range: 0x27a433 - 0x27a436
int64_t function_27a433(void) {
    // 0x27a433
    int64_t result; // 0x27a433
    return result;
}

// Address range: 0x27a43a - 0x27a440
int64_t function_27a43a(void) {
    // 0x27a43a
    int64_t v1; // 0x27a43a
    return v1 + 0x7539e90d & 0xffffffff;
}

// Address range: 0x27a641 - 0x27a650
int64_t function_27a641(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27a641
    __asm_in((int16_t)a3);
    int64_t v1 = unknown_bddf04a(); // 0x27a643
    char * v2 = (char *)(a2 + 7); // 0x27a64b
    *v2 = 2 * *v2;
    return v1 | 211;
}

// Address range: 0x27a68a - 0x27a68d
int64_t function_27a68a(int64_t a1) {
    // 0x27a68a
    int64_t result; // 0x27a68a
    return result;
}

// Address range: 0x27a695 - 0x27a6ac
int64_t function_27a695(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x27a695
    int64_t v1; // 0x27a695
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a3;
    return a4 & 0xffffffff;
}

// Address range: 0x27a6ec - 0x27a6fa
int64_t function_27a6ec(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 0xa6840e8); // 0x27a6ed
    bool v2; // 0x27a6ec
    return function_354da897(v1 + (int32_t)a1 + (int32_t)(bool)v2);
}

// Address range: 0x27a748 - 0x27a74c
int64_t function_27a748(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27a748
    int64_t result; // 0x27a748
    int32_t * v1 = (int32_t *)(result - 63); // 0x27a748
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x27a7cf - 0x27a7d0
int64_t function_27a7cf(void) {
    // 0x27a7cf
    int64_t result; // 0x27a7cf
    return result;
}

// Address range: 0x27a835 - 0x27a838
int64_t function_27a835(int64_t a1) {
    // 0x27a835
    int64_t result; // 0x27a835
    return result;
}

// Address range: 0x27a83a - 0x27a847
int64_t function_27a83a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27a83a
    int64_t v1; // 0x27a83a
    int64_t result = v1 & -256 | (int64_t)__asm_in_133((int16_t)a3); // 0x27a83c
    int32_t * v2 = (int32_t *)(a1 + 1); // 0x27a83d
    *v2 = *v2 | (int32_t)result;
    return result;
}

// Address range: 0x27a91d - 0x27a91e
int64_t function_27a91d(void) {
    // 0x27a91d
    int64_t result; // 0x27a91d
    return result;
}

// Address range: 0x27a947 - 0x27a94c
int64_t function_27a947(void) {
    // 0x27a947
    return function_fffffffffa30a956();
}

// Address range: 0x27a981 - 0x27a9d7
int64_t function_27a981(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x27a981
    int64_t v1; // 0x27a981
    uint64_t v2 = v1;
    uint16_t v3 = (int16_t)a3; // 0x27a983
    __asm_outsd(v3, (int32_t)a2);
    int64_t v4; // 0x27a981
    bool v5; // 0x27a981
    if (true == !v5) {
        v4 = function_27a91d();
    }
    char v6 = v2 / 256; // 0x27a987
    *(char *)-0x401e5772 = *(char *)-0x401e5772 + v6;
    *(char *)0x5fdfd0a4 = *(char *)0x5fdfd0a4 + v6;
    int32_t * v7 = (int32_t *)(a3 - 0x339d5bfe); // 0x27a9ae
    *v7 = *v7 + ((int32_t)v2 & -256 | 254);
    char v8 = (int32_t)v4 < 0xadca9fa5 ? 111 : 110; // 0x27a996
    *(char *)a1 = v8 + (char)(((int16_t)v4 + 0x605b) / (v3 % 256));
    int64_t result = unknown_3d9290c0((v5 ? -1 : 1) + a1); // 0x27a9ba
    int32_t v9 = result; // 0x27a9c8
    *(int32_t *)0x4cc97c89 = *(int32_t *)0x4cc97c89 + v9;
    int32_t * v10 = (int32_t *)(result + 0x1e81905); // 0x27a9ce
    *v10 = *v10 + v9;
    return result;
}

// Address range: 0x27aa37 - 0x27aa3c
int64_t function_27aa37(void) {
    // 0x27aa37
    return function_2fa8ff73();
}

// Address range: 0x27aaa6 - 0x27aaae
int64_t function_27aaa6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27aaa6
    __asm_in((int16_t)a3);
    return function_164a1632();
}

// Address range: 0x27aac0 - 0x27aad2
int64_t function_27aac0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x27aac0
    *(char *)(a4 + 58) = (char)(a4 / 256);
    int32_t * v1 = (int32_t *)(a1 + 123); // 0x27aace
    *v1 = *v1 + (int32_t)a3;
    int64_t v2; // 0x27aac0
    return v2 & 0x13419438 | 0xe8ba4b47;
}

// Address range: 0x27ab2d - 0x27ab3b
int64_t function_27ab2d(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x27ab2d
    int64_t result; // 0x27ab2d
    *(char *)a1 = (char)(result & a3 / 256);
    *(int32_t *)-0x9aefe175159def6 = (int32_t)result;
    return result;
}

// Address range: 0x27ab42 - 0x27ab4b
int64_t function_27ab42(int64_t a1) {
    // 0x27ab42
    return unknown_5ba8a4b(a1);
}

// Address range: 0x27ab53 - 0x27ab60
int64_t function_27ab53(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x27ab53
    int64_t v1; // 0x27ab53
    char * v2 = (char *)(v1 - 0x4de237fd); // 0x27ab55
    *v2 = -1 - *v2;
    return __asm_sti((int64_t)&g4, (int64_t)&g4);
}

// Address range: 0x27abe6 - 0x27abeb
int64_t function_27abe6(void) {
    // 0x27abe6
    int64_t v1; // 0x27abe6
    return 2 * v1 & 0xffffffff;
}

// Address range: 0x27ac57 - 0x27ac58
int64_t function_27ac57(int64_t a1) {
    // 0x27ac57
    int64_t result; // 0x27ac57
    return result;
}

// Address range: 0x27ac6e - 0x27ac95
int64_t function_27ac6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27ac6e
    int64_t v1; // 0x27ac6e
    *(char *)a2 = (char)v1 + (char)a3;
    *(char *)-0x451e6289 = *(char *)-0x451e6289 | (char)(v1 / 256);
    int64_t v2; // 0x27ac6e
    uint32_t v3 = *(int32_t *)&v2; // 0x27ac76
    bool v4; // 0x27ac6e
    int64_t v5 = v4 ? -4 : 4; // 0x27ac76
    int64_t v6 = v5 + a1; // 0x27ac76
    int64_t v7 = v5 + a2; // 0x27ac76
    char * v8 = (char *)(2 * v1 + 0x70c23a79 + v6); // 0x27ac77
    int64_t v9; // 0x27ac6e
    *v8 = *v8 - (char)(v1 / 256) + (char)(v3 < *(int32_t *)&v9);
    unknown_73d2a584(v6, v7);
    __asm_outsd((int16_t)a3, *(int32_t *)v7);
    __asm_int1();
    int64_t result = unknown_ffffffffe877868d(); // 0x27ac86
    *(int32_t *)-0x41dd626d = *(int32_t *)-0x41dd626d + (int32_t)v6;
    return result;
}

// Address range: 0x27aca1 - 0x27acab
int64_t function_27aca1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27aca1
    return unknown_70964aa9();
}

// Address range: 0x27acc1 - 0x27ad27
int64_t function_27acc1(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x27acc1
    bool v1; // 0x27acc1
    if (true != !v1) {
        // 0x27acc3
        return function_20fd87e();
    }
    // 0x27ad0f
    int64_t v2; // 0x27acc1
    *(char *)v2 = 0;
    int64_t result = unknown_ffffffffef4bd717(); // 0x27ad11
    char * v3 = (char *)(a3 + 43); // 0x27ad16
    *v3 = *v3 / 2;
    char v4 = *(char *)(a3 - 24 + 8 * v2); // 0x27ad19
    int32_t * v5 = (int32_t *)(256 * (int64_t)(v4 ^ (char)(a3 / 256)) | a3 & -0xff01); // 0x27ad1d
    *v5 = *v5 + (int32_t)a2;
    return result;
}

// Address range: 0x27ad3c - 0x27ad3d
int64_t function_27ad3c(void) {
    // 0x27ad3c
    int64_t result; // 0x27ad3c
    return result;
}

// Address range: 0x27ad7c - 0x27ad99
int64_t function_27ad7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27ad7c
    int64_t v1; // 0x27ad7c
    *(char *)v1 = 0;
    unknown_17301784();
    int32_t * v2 = (int32_t *)(a4 - 0x5f42dc02); // 0x27ad89
    *v2 = *v2 + (int32_t)a4;
    int64_t result = unknown_1a71d495(0xd470075); // 0x27ad8f
    __asm_int(-127);
    return result;
}

// Address range: 0x27ada0 - 0x27ada3
int64_t function_27ada0(int64_t a1) {
    // 0x27ada0
    int64_t result; // 0x27ada0
    // 0x27ada2
    return result;
}

// Address range: 0x27adbb - 0x27adc0
int64_t function_27adbb(int64_t a1) {
    // 0x27adbb
    int64_t result; // 0x27adbb
    return result;
}

// Address range: 0x27ae0e - 0x27ae13
int64_t function_27ae0e(void) {
    // 0x27ae0e
    return function_e18b8b6();
}

// Address range: 0x27aeac - 0x27aead
int64_t function_27aeac(int64_t a1) {
    // 0x27aeac
    int64_t result; // 0x27aeac
    return result;
}

// Address range: 0x27aee9 - 0x27aeed
int64_t function_27aee9(int64_t a1, int64_t a2) {
    // 0x27aee9
    int64_t v1; // 0x27aee9
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a1;
    return __asm_sti(a1, a2);
}

// Address range: 0x27af22 - 0x27af23
int64_t function_27af22(int64_t a1) {
    // 0x27af22
    int64_t result; // 0x27af22
    return result;
}

// Address range: 0x27af49 - 0x27af55
int64_t function_27af49(int64_t a1) {
    // 0x27af49
    int64_t v1; // 0x27af49
    int64_t v2 = v1;
    return (v2 + 255) % 256 | v2 & -256;
}

// Address range: 0x27afce - 0x27afcf
int64_t function_27afce(void) {
    // 0x27afce
    int64_t result; // 0x27afce
    return result;
}

// Address range: 0x27afd3 - 0x27afea
int64_t function_27afd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x27afd3
    int64_t v1; // 0x27afd3
    int64_t v2 = v1;
    *(char *)-0x1769ed3f = *(char *)-0x1769ed3f | (char)v1;
    int32_t v3 = a3; // 0x27afdb
    *(int32_t *)a3 = (int32_t)v1 + v3;
    int32_t * v4 = (int32_t *)(v2 - 2 + 4 * v2); // 0x27afdd
    *v4 = *v4 | v3;
    char * v5 = (char *)(v2 - 41); // 0x27afe1
    char v6 = *v5 - (char)((int64_t)&g1 >> 8); // 0x27afe1
    unsigned char v7 = llvm_ctpop_i8(v6); // 0x27afe1
    *v5 = v6;
    if (v7 % 2 == 0) {
        function_27afce();
    }
    // 0x27afe6
    return 2 * a1 & 0xfffffffe;
}

// Address range: 0x27aff7 - 0x27afff
int64_t function_27aff7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27aff7
    return function_27b015(a1, a2, a3, a4, (int64_t)&g4, (int64_t)&g4);
}

// Address range: 0x27b00a - 0x27b015
int64_t function_27b00a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x27b00a
    int64_t v1; // 0x27b00a
    *(char *)v1 = 0;
    int64_t v2; // 0x27b00a
    *(char *)v2 = *(char *)&v2 + 116;
    int64_t v3; // 0x27b00a
    *(int32_t *)a1 = *(int32_t *)&v3;
    int64_t v4 = v2;
    return (v4 + a4 / 256) % 256 | v4 & -256;
}

// Address range: 0x27b015 - 0x27b081
int64_t function_27b015(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x27b015
    int64_t v1; // 0x27b015
    int64_t v2 = v1 + a1; // 0x27b015
    char * v3 = (char *)((v2 & 0xffffffff) + 74); // 0x27b017
    *v3 = *v3 + (char)a3;
    uint64_t v4 = a4 / 256; // 0x27b022
    uint64_t v5 = v1 + v4; // 0x27b022
    int64_t v6 = v1 & -256; // 0x27b022
    int32_t * v7 = (int32_t *)(a4 + 0x3a80bff5); // 0x27b024
    int32_t v8 = v2; // 0x27b024
    int32_t v9 = *v7 + v8; // 0x27b024
    unsigned char v10 = llvm_ctpop_i8((char)v9); // 0x27b024
    *v7 = v9;
    if (v10 % 2 == 0) {
        // 0x27b02f
        return v5 % 256 | v6;
    }
    int32_t * v11 = (int32_t *)(v1 >> 63); // 0x27b07e
    *v11 = *v11 + v8;
    return (v5 + v4) % 256 | v6;
}

// Address range: 0x27b0b0 - 0x27b0c8
int64_t function_27b0b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27b0b0
    int64_t v1; // 0x27b0b0
    *(char *)a4 = *(char *)(a4 + 0x628aaebe) | (char)(v1 | v1);
    bool v2; // 0x27b0b0
    unknown_ffffffffffedbcbf((v2 ? -4 : 4) + a1);
    return function_563528ca();
}

// Address range: 0x27b0ee - 0x27b0ef
int64_t function_27b0ee(void) {
    // 0x27b0ee
    int64_t result; // 0x27b0ee
    return result;
}

// Address range: 0x27b0f3 - 0x27b0f4
int64_t function_27b0f3(int64_t a1) {
    // 0x27b0f3
    int64_t result; // 0x27b0f3
    return result;
}

// Address range: 0x27b10d - 0x27b10e
int64_t function_27b10d(void) {
    // 0x27b10d
    int64_t result; // 0x27b10d
    return result;
}

// Address range: 0x27b11e - 0x27b18b
int64_t function_27b11e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    int64_t v1 = unknown_ffffffffffcda026(); // 0x27b120
    int64_t v2; // 0x27b11e
    uint64_t v3 = (v2 & 0xffffffff) - 1; // 0x27b125
    bool v4; // 0x27b11e
    if (v3 != 0 != v4) {
        int32_t v5 = *(int32_t *)v1 & (int32_t)v1; // 0x27b127
        *(int32_t *)a1 = v5;
        if (v5 < -0x71d287ff) {
            // 0x27b17d
            return 0x1e8013d;
        }
        // 0x27b137
        if (llvm_ctpop_i8((char)v5 - 1) % 2 == 0) {
            function_27b0ee();
        }
        // 0x27b13b
        return __asm_int3();
    }
    // 0x27b140
    *(char *)-0x113a47b9 = *(char *)-0x113a47b9 + (char)(v2 / 256);
    int32_t v6 = __asm_in_136(8); // 0x27b149
    uint64_t v7 = (int64_t)v6; // 0x27b149
    unsigned char v8 = (char)(v3 / 256); // 0x27b14b
    unsigned char v9 = *(char *)((v4 ? -1 : 1) + a2) + v8; // 0x27b14b
    uint64_t result = v7 + 0x66586e4a + (int64_t)(v9 < v8); // 0x27b14d
    int32_t * v10 = (int32_t *)(a3 - 0x46fec300 + 8 * (256 * (int64_t)v9 | v3 & 0x1fffffffffff00ff)); // 0x27b153
    uint32_t v11 = *v10; // 0x27b153
    *v10 = 0x80000000 * (int32_t)(v9 < v8 ? result <= v7 : v6 > 0x99a791b5) | v11 / 2;
    char * v12 = (char *)(v2 - 0x7bd3f4fa); // 0x27b15a
    *v12 = *v12 - (char)result;
    return result;
}

// Address range: 0x27b1e0 - 0x27b1e1
int64_t function_27b1e0(void) {
    // 0x27b1e0
    int64_t result; // 0x27b1e0
    return result;
}

// Address range: 0x27b1f4 - 0x27b206
int64_t function_27b1f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27b1f4
    bool v1; // 0x27b1f4
    if (v1) {
        function_27b1e0();
    }
    int32_t * v2 = (int32_t *)(a3 - 95); // 0x27b1f8
    *v2 = *v2 + (int32_t)a4;
    return function_2101069();
}

// Address range: 0x27b219 - 0x27b221
int64_t function_27b219(void) {
    // 0x27b219
    int64_t v1; // 0x27b219
    *(int32_t *)0x3f5f889e = *(int32_t *)0x3f5f889e + (int32_t)v1;
    return function_27b1f4(v1, v1, v1, v1);
}

// Address range: 0x340873 - 0x340874
int64_t function_340873(void) {
    // 0x340873
    int64_t result; // 0x340873
    return result;
}

// Address range: 0x34087f - 0x340880
int64_t function_34087f(void) {
    // 0x34087f
    int64_t result; // 0x34087f
    return result;
}

// Address range: 0x340880 - 0x340881
int64_t function_340880(void) {
    // 0x340880
    int64_t result; // 0x340880
    return result;
}

// Address range: 0x34088e - 0x340967
int64_t function_34088e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34088e
    int64_t v1; // 0x34088e
    uint64_t v2 = v1;
    int64_t v3 = a1;
    int64_t v4; // 0x34088e
    int64_t result2; // 0x34088e
    bool v5; // 0x34088e
    if (true == !v5) {
        int64_t v6 = function_34087f(); // 0x3408e8
        result2 = v6;
        v4 = v6;
    }
    int64_t v7; // bp-8, 0x34088e
    if (v5) {
        // 0x3408b2
        *(int32_t *)v2 = (int32_t)v2 - (int32_t)v1;
        int32_t * v8 = (int32_t *)(v1 - 83); // 0x3408b9
        *v8 = *v8 & (int32_t)result2;
        v7 = 105;
        __asm_wait();
        int32_t * v9 = (int32_t *)(v3 - 8); // 0x3408bf
        int32_t v10 = a2; // 0x3408bf
        *v9 = *v9 - v10;
        *(int32_t *)0x1710938 = *(int32_t *)0x1710938 + v10;
        *(char *)a2 = (char)v1;
        int64_t result = unknown_78471651(); // 0x3408d5
        __asm_out_137((int16_t)a3 & -256 | 102, (char)result);
        return result;
    }
    char v11 = a1;
    v7 = v4;
    unsigned char v12 = (char)a4; // 0x3408f4
    unsigned char v13 = v12 % 32; // 0x3408f4
    result2 = v4;
    v3 = a1;
    char v14 = v11; // 0x3408f4
    if (v13 != 0) {
        *(char *)a1 = v11 << v13 | (char)((int16_t)a1 % 256 >> (int16_t)(9 - v13)) | (char)v5 << v13 - 1;
        v14 = *(char *)&v3;
    }
    char v15 = v2 / 256; // 0x3408fd
    *(char *)0x10c48004 = *(char *)0x10c48004 + v15;
    char * v16 = (char *)(v3 - 0x7729fe18); // 0x340907
    *v16 = *v16 - (char)(result2 / 256);
    char * v17 = (char *)(v1 + 0xcf971); // 0x340910
    *v17 = *v17 + v15;
    char v18 = (char)(result2 / 256) + (char)v2; // 0x34091b
    if (v18 < 0) {
        // 0x34094f
        return function_706643e8();
    }
    // 0x34091f
    if (-1 - (int32_t)v1 < (int32_t)v3) {
        // 0x34095e
        return unknown_ffffffffac3cdb68();
    }
    // 0x340928
    *(int32_t *)v3 = __asm_insd((int16_t)a3);
    int32_t * v19 = (int32_t *)(result2 + 61); // 0x34092b
    *v19 = *v19 | (int32_t)a2;
    int32_t * v20 = (int32_t *)(a2 + 46); // 0x34092e
    *v20 = *v20 + (int32_t)v3;
    int64_t * v21 = (int64_t *)(result2 - 121); // 0x340934
    int64_t v22 = 256 * (int64_t)v18 + a3 & 0xff00 | a3 & -0xff01 | *v21; // 0x340934
    *v21 = v22;
    if (v22 >= 0 != v22 != 0) {
        char * v23 = (char *)(((a4 & 0xffffff00 | (int64_t)(v14 | v12)) - (int64_t)&v7 & 0xffffffff) + 0x13d00c0); // 0x340943
        *v23 = *v23 + v18;
        return result2;
    }
    int64_t v24 = result2;
    *(char *)v24 = *(char *)&result2 + (char)v24;
    // 0x34094f
    return function_706643e8();
}

// Address range: 0x340991 - 0x340995
int64_t function_340991(int64_t a1, int64_t a2, int64_t a3) {
    // 0x340991
    int64_t result; // 0x340991
    return result;
}

// Address range: 0x340a3b - 0x340a48
int64_t function_340a3b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x340a3b
    int64_t v1; // 0x340a3b
    int32_t * v2 = (int32_t *)(v1 + 0x3c69a5b6); // 0x340a3b
    *v2 = -1 - *v2;
    __asm_out_137((int16_t)a3, (char)v1);
    return function_1710a6f();
}

// Address range: 0x340a4c - 0x340a51
int64_t function_340a4c(void) {
    // 0x340a4c
    int64_t result; // 0x340a4c
    return result;
}

// Address range: 0x340a65 - 0x340a67
int64_t function_340a65(int64_t a1) {
    // 0x340a65
    int64_t v1; // 0x340a65
    return v1 & 0xffffffff;
}

// Address range: 0x340c73 - 0x340c8f
int64_t function_340c73(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x340c73
    int64_t v1; // 0x340c73
    uint64_t v2 = v1;
    char v3 = __asm_in_133((int16_t)a3); // 0x340c73
    *(char *)(a1 + 0x2a5303 + 8 * v2) = (char)a4;
    int64_t v4 = __asm_wait(); // 0x340c88
    return (v4 + a4 / 256 + (int64_t)((v3 ^ (char)(v2 / 256)) > 146)) % 256 | v4 & -256;
}

// Address range: 0x340cb1 - 0x340cb4
int64_t function_340cb1(int64_t a1) {
    // 0x340cb1
    int64_t result; // 0x340cb1
    return result;
}

// Address range: 0x340cc6 - 0x340cfb
int64_t function_340cc6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x340cc6
    int64_t result; // 0x340cc6
    *(char *)(result + 9) = (char)(a4 / 256);
    char v1 = *(char *)0x7924ecfc; // 0x340cf5
    *(char *)0x7924ecfc = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x340cfe - 0x340d0e
int64_t function_340cfe(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 0x328ade55); // 0x340d05
    *v1 = *v1 + (int32_t)a1;
    int64_t v2; // 0x340cfe
    return 2 * v2 & 0xffffffff;
}

// Address range: 0x340d11 - 0x340d1a
int64_t function_340d11(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x340d11
    int64_t result; // 0x340d11
    return result;
}

// Address range: 0x340d68 - 0x340d69
int64_t function_340d68(void) {
    // 0x340d68
    int64_t result; // 0x340d68
    return result;
}

// Address range: 0x340d86 - 0x340d87
int64_t function_340d86(void) {
    // 0x340d86
    int64_t result; // 0x340d86
    return result;
}

// Address range: 0x340d98 - 0x340dc1
int64_t function_340d98(int64_t a1, int64_t a2) {
    int64_t v1 = a2;
    int64_t v2; // 0x340d98
    char * v3 = (char *)(v2 - 0x50bcff54); // 0x340d98
    *v3 = *v3 + (char)v2;
    int64_t v4 = v1; // 0x340da0
    int32_t * v5 = (int32_t *)(v2 - 0x40f06afe); // 0x340da1
    *v5 = *v5 + 0x17f34cff;
    int32_t * v6 = (int32_t *)(v2 + 2); // 0x340dab
    *v6 = *v6 + (int32_t)a1;
    v1 = 0x13d4896;
    char * v7 = (char *)(a1 - 0x7b0b74b); // 0x340db3
    unsigned char v8 = *v7; // 0x340db3
    unsigned char v9 = v8 + (char)v4; // 0x340db3
    *v7 = v9;
    char v10 = __asm_in_134(-48); // 0x340db9
    char * v11 = (char *)v4; // 0x340dbb
    char v12 = *v11; // 0x340dbb
    *v11 = v12 + (char)(int64_t)&v1 + (char)(v9 < v8);
    int64_t result = v2 & -256 | (int64_t)v10; // 0x340dbe
    if (v4 != 1) {
        result = function_340d68();
    }
    // 0x340dc0
    return result;
}

// Address range: 0x340dca - 0x340dcb
int64_t function_340dca(void) {
    // 0x340dca
    int64_t result; // 0x340dca
    return result;
}

// Address range: 0x340df3 - 0x340dfd
int64_t function_340df3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x340df3
    int64_t result; // 0x340df3
    char * v1 = (char *)(a4 + 0x13d0060 + result); // 0x340df5
    *v1 = *v1 + (char)(result & result);
    return result;
}

// Address range: 0x340e0c - 0x340e72
int64_t function_340e0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x340e0c
    int64_t v1; // 0x340e0c
    int64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = a1;
    int32_t v5 = v1; // 0x340e11
    if (v5 < 0x57800001) {
        function_340dca();
    }
    uint64_t v6 = v2 - (256 * (int64_t)(v5 < 0x57800001) + v2 & -256);
    int64_t v7 = unknown_2699482b(); // 0x340e1c
    int64_t v8 = (v7 & 0xff00) + v6 & 0xff00 | v7 & -0xff01; // 0x340e22
    unsigned char v9 = *(char *)v8 + (char)v7; // 0x340e27
    char * v10 = (char *)(a4 - 0x5623537c + (v8 & -256 | (int64_t)v9)); // 0x340e2f
    *v10 = *v10 & v9;
    *(char *)v4 = -*(char *)&v4;
    int64_t v11 = unknown_1057b42(); // 0x340e3a
    *(int32_t *)v4 = *(int32_t *)&v3;
    char v12 = v11; // 0x340e4a
    *(char *)0x48468fc167e30100 = v12;
    __asm_out_137((int16_t)a3 & -256 | 71, v12);
    *(char *)-0x3f32fa9f = *(char *)-0x3f32fa9f + (char)(v6 / 256);
    __asm_out(113, v12);
    return function_17157b0();
}
