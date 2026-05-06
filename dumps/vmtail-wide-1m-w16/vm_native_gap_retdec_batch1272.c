/*
 * Targeted RetDec C for native executable gap queue batch 1272.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1a94bb-0x1a96bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a96bb-0x1a98bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a98bb-0x1a9abb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a9abb-0x1a9cbb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a9cbb-0x1a9ebb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a9ebb-0x1aa0bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1aa0bb-0x1aa2bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1aa2bb-0x1aa4bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x2534bc-0x2536bc rank=- name=- kind=- bytes=- uncovered=-
 *   0x2536bc-0x2538bc rank=- name=- kind=- bytes=- uncovered=-
 *   0x2538bc-0x253abc rank=- name=- kind=- bytes=- uncovered=-
 *   0x253abc-0x253cbc rank=- name=- kind=- bytes=- uncovered=-
 *   0x253cbc-0x253ebc rank=- name=- kind=- bytes=- uncovered=-
 *   0x253ebc-0x2540bc rank=- name=- kind=- bytes=- uncovered=-
 *   0x2540bc-0x2542bc rank=- name=- kind=- bytes=- uncovered=-
 *   0x2542bc-0x2544bc rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_15798b6();
int64_t function_1a94bb(void);
int64_t function_1a94bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a94f3(void);
int64_t function_1a94ff(void);
int64_t function_1a9547(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a9562(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_1a9566(void);
int64_t function_1a9575(void);
int64_t function_1a9580(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a959d(void);
int64_t function_1a95ec(int64_t a1);
int64_t function_1a9606(void);
int64_t function_1a9612(int64_t a1, int64_t a2);
int64_t function_1a9622(void);
int64_t function_1a963a(void);
int64_t function_1a9640(void);
int64_t function_1a9650(void);
int64_t function_1a9654(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a9661(void);
int64_t function_1a96ae(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1a9710(int64_t a1);
int64_t function_1a975d(void);
int64_t function_1a97c9(int64_t a1);
int64_t function_1a97ec(void);
int64_t function_1a980b(void);
int64_t function_1a983b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1a984f(void);
int64_t function_1a9861(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1a98ae(void);
int64_t function_1a98b4(int64_t a1);
int64_t function_1a98b9(void);
int64_t function_1a98ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a9905(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_1a9915(void);
int64_t function_1a9955(int64_t a1);
int64_t function_1a9992(void);
int64_t function_1a9997(void);
int64_t function_1a999c(int64_t a1, int64_t a2, int64_t a3, int16_t a4);
int64_t function_1a9a56(int64_t a1);
int64_t function_1a9a5e(int64_t a1);
int64_t function_1a9a75(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1a9afc(int64_t a1);
int64_t function_1a9aff(void);
int64_t function_1a9b07(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1a9b17(int64_t a1);
int64_t function_1a9b5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a9bae(void);
int64_t function_1a9bc2(int64_t a1);
int64_t function_1a9c99(int64_t a1);
int64_t function_1a9cd0(void);
int64_t function_1a9d4a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a9d77(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1a9dd9(void);
int64_t function_1a9de6(int64_t result, int64_t a2, int64_t a3);
int64_t function_1a9df4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1a9faa(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1a9fcd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1a9fe3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1aa0af(void);
int64_t function_1aa0d3(void);
int64_t function_1aa10d(int64_t a1);
int64_t function_1aa144(int64_t a1);
int64_t function_1aa149(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1aa168(int64_t a1);
int64_t function_1aa198(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1aa1de(int64_t a1);
int64_t function_1aa1ef(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1aa1f6(void);
int64_t function_1aa20f(void);
int64_t function_1aa21f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1aa2a5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1aa2c8(int64_t a1);
int64_t function_1aa2d5(void);
int64_t function_1aa341(int64_t a1);
int64_t function_1aa369(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1aa3e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1aa40c(int64_t a1, int64_t a2);
int64_t function_1aa432(void);
int64_t function_1aa43f(int64_t a1);
int64_t function_1aa4a8(void);
int64_t function_1b81db();
int64_t function_201ef89c();
int64_t function_202989c();
int64_t function_2534bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_253590(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2536f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_253844(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2539ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_253b0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_253c5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_253d70(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_253ed0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_254030(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_254191(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_254332(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_254473(void);
int64_t function_2b933450();
int64_t function_3ae5d651();
int64_t function_5c9a2ee3();
int64_t function_c6d58();
int64_t function_cc59c();
int64_t function_ffffffffdc939917();
int64_t function_ffffffffe8cca445();
int64_t unknown_171bdb8e();
int64_t unknown_1a1fe035();
int64_t unknown_1a65995d();
int64_t unknown_1b537bb4();
int64_t unknown_202a867();
int64_t unknown_26e85bbb();
int64_t unknown_2a1c9def();
int64_t unknown_3aa182db();
int64_t unknown_3d1c860d();
int64_t unknown_4722ab93();
int64_t unknown_531b5301();
int64_t unknown_60c7d49e();
int64_t unknown_6834e6e2();
int64_t unknown_f13d657();
int64_t unknown_ffffffff8628cb15();
int64_t unknown_ffffffff8b21697b();
int64_t unknown_ffffffffa10ffd86();
int64_t unknown_ffffffffdfac3ef9();
int64_t unknown_ffffffffe9115e4f();

// Address range: 0x1a94bb - 0x1a94bc
int64_t function_1a94bb(void) {
    // 0x1a94bb
    int64_t result; // 0x1a94bb
    return result;
}

// Address range: 0x1a94bc - 0x1a94f3
int64_t function_1a94bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 + 84); // 0x1a94bc
    int64_t v2; // 0x1a94bc
    *v1 = *v1 | (char)v2;
    return function_cc59c();
}

// Address range: 0x1a94f3 - 0x1a94f8
int64_t function_1a94f3(void) {
    // 0x1a94f3
    return function_1b81db();
}

// Address range: 0x1a94ff - 0x1a9500
int64_t function_1a94ff(void) {
    // 0x1a94ff
    int64_t result; // 0x1a94ff
    return result;
}

// Address range: 0x1a9547 - 0x1a9562
int64_t function_1a9547(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffe9115e4f(); // 0x1a9549
    uint64_t v2 = v1 + 200; // 0x1a954e
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    *(char *)-0xe144be2b9fe176d = (char)v2;
    return v2 % 256 | v1 & -256;
}

// Address range: 0x1a9562 - 0x1a9566
int64_t function_1a9562(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x1a9562
    int64_t v1; // 0x1a9562
    int64_t result = v1;
    *(char *)result = (char)result + (char)(a3 / 256);
    return result;
}

// Address range: 0x1a9566 - 0x1a9575
int64_t function_1a9566(void) {
    // 0x1a9566
    int64_t v1; // 0x1a9566
    int32_t * v2 = (int32_t *)(v1 + 1); // 0x1a956a
    *v2 = *v2 + (int32_t)v1;
    int64_t v3; // 0x1a9566
    *(char *)v3 = *(char *)&v3 | 114;
    return v3 & -256 | (int64_t)__asm_in(9);
}

// Address range: 0x1a9575 - 0x1a9577
int64_t function_1a9575(void) {
    // 0x1a9575
    return function_1a94ff();
}

// Address range: 0x1a9580 - 0x1a9584
int64_t function_1a9580(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1a9580
    int64_t v1; // 0x1a9580
    __asm_outsb((int16_t)a3, (char)v1);
    return __asm_sti();
}

// Address range: 0x1a959d - 0x1a95a4
int64_t function_1a959d(void) {
    // 0x1a959d
    return function_1a9612(0xbc0065c6, (int64_t)&g4);
}

// Address range: 0x1a95ec - 0x1a95ed
int64_t function_1a95ec(int64_t a1) {
    // 0x1a95ec
    int64_t result; // 0x1a95ec
    return result;
}

// Address range: 0x1a9606 - 0x1a9607
int64_t function_1a9606(void) {
    // 0x1a9606
    int64_t result; // 0x1a9606
    return result;
}

// Address range: 0x1a9612 - 0x1a961d
int64_t function_1a9612(int64_t a1, int64_t a2) {
    // 0x1a9612
    int64_t v1; // 0x1a9612
    *(char *)a1 = 2 * (char)v1;
    return a1 & 0xffffffff;
}

// Address range: 0x1a9622 - 0x1a9635
int64_t function_1a9622(void) {
    uint32_t v1 = *(int32_t *)0x731f02308acd1e86; // 0x1a9622
    return (int64_t)(*(int32_t *)(int64_t)v1 | v1);
}

// Address range: 0x1a963a - 0x1a963b
int64_t function_1a963a(void) {
    // 0x1a963a
    int64_t result; // 0x1a963a
    return result;
}

// Address range: 0x1a9640 - 0x1a964d
int64_t function_1a9640(void) {
    // 0x1a9640
    return function_1a963a();
}

// Address range: 0x1a9650 - 0x1a9651
int64_t function_1a9650(void) {
    // 0x1a9650
    int64_t result; // 0x1a9650
    return result;
}

// Address range: 0x1a9654 - 0x1a965e
int64_t function_1a9654(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1a9654
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x1a9654
    return result;
}

// Address range: 0x1a9661 - 0x1a9663
int64_t function_1a9661(void) {
    // 0x1a9661
    return function_1a9650();
}

// Address range: 0x1a96ae - 0x1a96b4
int64_t function_1a96ae(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1a96ae
    return function_202989c();
}

// Address range: 0x1a9710 - 0x1a9713
int64_t function_1a9710(int64_t a1) {
    // 0x1a9710
    int64_t v1; // 0x1a9710
    return v1 & -256 | 141;
}

// Address range: 0x1a975d - 0x1a975e
int64_t function_1a975d(void) {
    // 0x1a975d
    int64_t result; // 0x1a975d
    return result;
}

// Address range: 0x1a97c9 - 0x1a97ca
int64_t function_1a97c9(int64_t a1) {
    // 0x1a97c9
    int64_t result; // 0x1a97c9
    return result;
}

// Address range: 0x1a97ec - 0x1a97ed
int64_t function_1a97ec(void) {
    // 0x1a97ec
    int64_t result; // 0x1a97ec
    return result;
}

// Address range: 0x1a980b - 0x1a9810
int64_t function_1a980b(void) {
    // 0x1a980b
    return function_ffffffffdc939917();
}

// Address range: 0x1a983b - 0x1a9847
int64_t function_1a983b(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a2 + 0x47ca01e8); // 0x1a983b
    unsigned char v2 = *v1; // 0x1a983b
    bool v3; // 0x1a983b
    char v4 = v3; // 0x1a983b
    int64_t v5; // 0x1a983b
    unsigned char v6 = v4 + (char)v5; // 0x1a983b
    char v7 = v2 - v6; // 0x1a983b
    *v1 = v7;
    int64_t v8 = v3 ? v6 != -1 | v2 < v7 - v4 : v2 < v6 ? 0x24f1a68b : 0x24f1a68a; // 0x1a9841
    return v5 - v8 & 0xffffffff;
}

// Address range: 0x1a984f - 0x1a9856
int64_t function_1a984f(void) {
    // 0x1a984f
    int64_t result; // 0x1a984f
    return result;
}

// Address range: 0x1a9861 - 0x1a9871
int64_t function_1a9861(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_202a867(a1, a2, a3); // 0x1a9861
    int64_t v1; // 0x1a9861
    *(int32_t *)(v1 + 0x78cc00b0) = (int32_t)a3;
    return result;
}

// Address range: 0x1a98ae - 0x1a98b3
int64_t function_1a98ae(void) {
    // 0x1a98ae
    return function_15798b6();
}

// Address range: 0x1a98b4 - 0x1a98b7
int64_t function_1a98b4(int64_t a1) {
    // 0x1a98b4
    int64_t result; // 0x1a98b4
    return result;
}

// Address range: 0x1a98b9 - 0x1a98ba
int64_t function_1a98b9(void) {
    // 0x1a98b9
    int64_t result; // 0x1a98b9
    return result;
}

// Address range: 0x1a98ce - 0x1a98d3
int64_t function_1a98ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a98ce
    int64_t result; // 0x1a98ce
    return result;
}

// Address range: 0x1a9905 - 0x1a9911
int64_t function_1a9905(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x1a9905
    int64_t result; // 0x1a9905
    int64_t v1 = result;
    *(char *)0x12774d61 = -77;
    *(char *)v1 = (char)v1 + (char)(a3 / 256);
    return result;
}

// Address range: 0x1a9915 - 0x1a991a
int64_t function_1a9915(void) {
    // 0x1a9915
    return function_2b933450();
}

// Address range: 0x1a9955 - 0x1a9958
int64_t function_1a9955(int64_t a1) {
    // 0x1a9955
    int64_t result; // 0x1a9955
    return result;
}

// Address range: 0x1a9992 - 0x1a9993
int64_t function_1a9992(void) {
    // 0x1a9992
    int64_t result; // 0x1a9992
    return result;
}

// Address range: 0x1a9997 - 0x1a999a
int64_t function_1a9997(void) {
    // 0x1a9997
    int64_t result; // 0x1a9997
    return result;
}

// Address range: 0x1a999c - 0x1a9a14
int64_t function_1a999c(int64_t a1, int64_t a2, int64_t a3, int16_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x1a999c
    char * v3 = (char *)(v2 + 8 * v2); // 0x1a999c
    *v3 = *v3 + (char)(v2 / 256);
    int32_t * v4 = (int32_t *)(a3 + 0x4c0147b2);
    int64_t v5; // 0x1a999c
    uint32_t v6 = (int32_t)v5; // 0x1a999f
    int64_t v7; // 0x1a999c
    int32_t v8 = v7; // 0x1a999f
    uint32_t v9 = v6 + v8; // 0x1a999f
    int64_t v10; // 0x1a999c
    uint32_t v11 = *(int32_t *)(v10 - 0x73cdff31) + v8 + (int32_t)(v9 >= v6); // 0x1a99a2
    int64_t v12; // 0x1a999c
    int64_t v13 = v12; // 0x1a99a8
    if (v11 != 0) {
        v13 = function_1a9992();
    }
    int64_t v14 = v9; // 0x1a999f
    int64_t result = v13;
    uint32_t v15 = *v4 + (int32_t)v10; // 0x1a99aa
    *v4 = v15;
    int64_t v16 = (int64_t)v11 - 1; // 0x1a99b0
    while (v16 != 0) {
        // 0x1a99b5
        if (v15 >= 0) {
            int32_t * v17 = (int32_t *)(result + 127); // 0x1a99b7
            *v17 = *v17 + (int32_t)v1;
            return (int64_t)(*(int32_t *)v16 & (int32_t)result);
        }
        v6 = (int32_t)v14;
        v8 = v16;
        v9 = v6 + v8;
        v11 = *(int32_t *)(v10 - 0x73cdff31) + v8 + (int32_t)(v9 >= v6);
        v13 = result;
        if (v11 != 0) {
            v13 = function_1a9992();
        }
        // 0x1a99aa
        v14 = v9;
        result = v13;
        v15 = *v4 + (int32_t)v10;
        *v4 = v15;
        v16 = (int64_t)v11 - 1;
    }
    // 0x1a99b2
    if (llvm_ctpop_i8((char)v15) % 2 == 0) {
        // 0x1a99b4
        return result;
    }
    // 0x1a99ee
    *(int32_t *)v10 = *(int32_t *)&v10 + (int32_t)a3;
    char * v18 = (char *)(v14 + 3); // 0x1a99f5
    *v18 = 2 * *v18;
    char * v19 = (char *)(a3 + 1); // 0x1a99f8
    *v19 = *v19 + (char)(result / 256);
    uint64_t result2 = unknown_531b5301(); // 0x1a99fb
    *(char *)-0x65a39d24736a8cc6 = (char)result2;
    *(int32_t *)a1 = (int32_t)result2;
    *(char *)v1 = *(char *)&v1 + (char)(result2 / 256);
    __asm_outsb((int16_t)a3, *(char *)&v1);
    return result2;
}

// Address range: 0x1a9a56 - 0x1a9a5d
int64_t function_1a9a56(int64_t a1) {
    // 0x1a9a56
    return unknown_1a65995d(a1);
}

// Address range: 0x1a9a5e - 0x1a9a5f
int64_t function_1a9a5e(int64_t a1) {
    // 0x1a9a5e
    int64_t result; // 0x1a9a5e
    return result;
}

// Address range: 0x1a9a75 - 0x1a9a79
int64_t function_1a9a75(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1a9a75
    int64_t result; // 0x1a9a75
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x1a9afc - 0x1a9aff
int64_t function_1a9afc(int64_t a1) {
    // 0x1a9afc
    int64_t result; // 0x1a9afc
    return result;
}

// Address range: 0x1a9aff - 0x1a9b04
int64_t function_1a9aff(void) {
    // 0x1a9aff
    return function_5c9a2ee3();
}

// Address range: 0x1a9b07 - 0x1a9b0b
int64_t function_1a9b07(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1a9b07
    int64_t result; // 0x1a9b07
    char * v1 = (char *)(2 * result + a2); // 0x1a9b07
    bool v2; // 0x1a9b07
    *v1 = *v1 + (char)(a4 / 256) + (char)v2;
    return result;
}

// Address range: 0x1a9b17 - 0x1a9b1a
int64_t function_1a9b17(int64_t a1) {
    // 0x1a9b17
    int64_t result; // 0x1a9b17
    return result;
}

// Address range: 0x1a9b5c - 0x1a9b9e
int64_t function_1a9b5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1a9b5c
    int64_t v1; // 0x1a9b5c
    int64_t v2 = v1;
    *(char *)-0x51e37c96 = *(char *)-0x51e37c96 + 13;
    int64_t v3 = (v2 + 24) % 256 | v2 & -256; // 0x1a9b69
    int32_t * v4 = (int32_t *)(v3 + 17); // 0x1a9b6b
    *v4 = *v4 + (int32_t)v1;
    int32_t v5 = *(int32_t *)(v3 + 0x6da20116); // 0x1a9b6f
    int64_t v6 = unknown_ffffffff8b21697b(0x6da20107); // 0x1a9b75
    uint32_t v7 = *(int32_t *)(a2 + 0x5725015); // 0x1a9b7a
    int64_t v8 = unknown_ffffffffa10ffd86(); // 0x1a9b80
    unknown_4722ab93();
    uint32_t v9 = (int32_t)v1 >> 10; // 0x1a9b93
    char * v10 = (char *)((v6 & 0xffffffff | 0x100000000 * a3) % (int64_t)v7 - 24); // 0x1a9b96
    *v10 = *v10 | (char)((v5 + (int32_t)a4) / 256);
    int32_t * v11 = (int32_t *)((int64_t)v9 + 119); // 0x1a9b99
    *v11 = *v11 + v9;
    return v8 & 0xff00 | v1 & 0xffffffff;
}

// Address range: 0x1a9bae - 0x1a9bb4
int64_t function_1a9bae(void) {
    // 0x1a9bae
    return function_201ef89c();
}

// Address range: 0x1a9bc2 - 0x1a9bc3
int64_t function_1a9bc2(int64_t a1) {
    // 0x1a9bc2
    int64_t result; // 0x1a9bc2
    return result;
}

// Address range: 0x1a9c99 - 0x1a9c9c
int64_t function_1a9c99(int64_t a1) {
    // 0x1a9c99
    int64_t result; // 0x1a9c99
    return result;
}

// Address range: 0x1a9cd0 - 0x1a9cd3
int64_t function_1a9cd0(void) {
    // 0x1a9cd0
    int64_t result; // 0x1a9cd0
    return result;
}

// Address range: 0x1a9d4a - 0x1a9d76
int64_t function_1a9d4a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int16_t v1 = a3; // 0x1a9d4e
    *(int32_t *)a1 = __asm_insd(v1);
    int64_t v2 = __asm_int3(); // 0x1a9d4f
    int64_t v3; // 0x1a9d4a
    unsigned char v4 = *(char *)&v3; // 0x1a9d50
    bool v5; // 0x1a9d4a
    unknown_f13d657((v5 ? -1 : 1) + a1);
    int64_t v6; // 0x1a9d4a
    int32_t * v7 = (int32_t *)(v6 + 0x9a3bcdf); // 0x1a9d56
    *v7 = *v7 + (int32_t)v6 + (int32_t)(v4 > (char)v2);
    return __asm_in_133(v1);
}

// Address range: 0x1a9d77 - 0x1a9d7a
int64_t function_1a9d77(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1a9d77
    int64_t result; // 0x1a9d77
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x1a9dd9 - 0x1a9de6
int64_t function_1a9dd9(void) {
    // 0x1a9dd9
    int64_t v1; // 0x1a9dd9
    return v1 & -256 | 41;
}

// Address range: 0x1a9de6 - 0x1a9df4
int64_t function_1a9de6(int64_t result, int64_t a2, int64_t a3) {
    // 0x1a9de6
    unknown_2a1c9def();
    return result;
}

// Address range: 0x1a9df4 - 0x1a9f5c
int64_t function_1a9df4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2; // 0x1a9df4
    int32_t v3 = 25 * (int32_t)v2 + 8; // 0x1a9e06
    int64_t v4 = unknown_3d1c860d(); // 0x1a9e07
    int32_t * v5 = (int32_t *)(a1 + 0x1e810df); // 0x1a9e0c
    *v5 = *v5 + (int32_t)a1;
    int64_t v6 = v4 & 0xffffffff; // 0x1a9e12
    uint64_t v7 = *(int64_t *)v6; // 0x1a9e13
    *(char *)v1 = *(char *)&v1 & (char)v3;
    int64_t * v8 = (int64_t *)(v6 + 8); // 0x1a9e16
    int64_t v9 = *v8; // 0x1a9e16
    char v10 = __asm_in(0); // 0x1a9e19
    int64_t result = (int64_t)v10 | (int64_t)(v3 & -256); // 0x1a9e19
    char * v11 = (char *)v7; // 0x1a9e1b
    unsigned char v12 = *v11; // 0x1a9e1b
    *v11 = 2 * v12;
    int64_t v13; // 0x1a9df4
    __asm_rcl(*(char *)&v13);
    if (v12 / 64 % 2 == v12 / 128) {
        // 0x1a9e61
        return result;
    }
    int64_t v14 = v7 & -256; // 0x1a9e1d
    int32_t * v15 = (int32_t *)(v14 + 0xa54f35); // 0x1a9e24
    *v15 = *v15 + (int32_t)a4;
    char * v16 = (char *)result; // 0x1a9e2a
    unsigned char v17 = *v16; // 0x1a9e2a
    char v18 = v17 + v10; // 0x1a9e2a
    unsigned char v19 = llvm_ctpop_i8(v18); // 0x1a9e2a
    *v16 = v18;
    bool v20; // 0x1a9df4
    int64_t v21 = 0x4000 * (int64_t)v20 | 1024 * (int64_t)v20 | 512 * (int64_t)v20 | 256 * (int64_t)v20 | (int64_t)(v18 < v17) | 64 * (int64_t)(v18 == 0) | 128 * (int64_t)(v18 < 0) | 16 * (int64_t)(v17 % 16 + v10 % 16 > 15) | 4 * (int64_t)(v19 % 2 == 0) | 2048 * (int64_t)(((v18 ^ v17) & (v18 ^ v10)) < 0) | 2; // 0x1a9e2c
    *v8 = v21;
    *(int64_t *)result = v21;
    unsigned char v22 = *(char *)0x52883836; // 0x1a9e2f
    char v23 = v7 / 256;
    unsigned char v24 = v22 + v23; // 0x1a9e2f
    *(char *)0x52883836 = v24;
    if (a4 != 1) {
        // 0x1a9e78
        *(char *)-0x5e486181 = *(char *)-0x5e486181 & v23;
        uint32_t v25 = *(int32_t *)-0x3f3e7148; // 0x1a9e7e
        uint32_t v26 = (int32_t)v14; // 0x1a9e7e
        *(int32_t *)-0x3f3e7148 = v25 - v26;
        char * v27 = (char *)(v14 + 0x1ae1e495); // 0x1a9e84
        *v27 = *v27 + (char)(v25 < v26);
        uint32_t result2 = *(int32_t *)&v1; // 0x1a9e8a
        int32_t v28 = *(int32_t *)-0x304dea68; // 0x1a9e91
        *(int32_t *)(int64_t)((int32_t)v9 - v28) = result2;
        return result2;
    }
    int64_t v29 = 256 * (a3 / 128 & 254 | (int64_t)v20) | a3 & -0xff01; // 0x1a9dfb
    int32_t v30 = *(int32_t *)(v9 + 101); // 0x1a9e37
    int64_t v31 = (int32_t)(v24 < v22) - v30 + (int32_t)v1; // 0x1a9e37
    v1 = v31;
    int64_t v32 = unknown_ffffffff8628cb15(); // 0x1a9e3a
    int16_t v33 = v32; // 0x1a9e3f
    int16_t v34 = (int16_t)*(char *)v32; // 0x1a9e3f
    int64_t v35 = v32 & -0x10000 | (int64_t)(v33 / v34 % 256) | (int64_t)(256 * (v33 % v34)); // 0x1a9e3f
    char * v36 = (char *)__asm_int3(); // 0x1a9e47
    *v36 = *v36 + 1;
    int64_t result3 = unknown_171bdb8e(); // 0x1a9e49
    char * v37 = (char *)v31; // 0x1a9e4f
    char v38 = *v37 & (char)result3; // 0x1a9e4f
    *v37 = v38;
    if (*(int32_t *)(v35 + 8 * v13) != 0) {
        // 0x1a9e53
        *v8 = v35 + v14 & 0xffffffff;
        __asm_int3();
        __asm_out((int16_t)v29, (int16_t)v1);
        return v1 & 0xffffffff;
    }
    // 0x1a9eb0
    if (v38 >= 0 == (v38 != 0)) {
        // 0x1a9e61
        return result3;
    }
    // 0x1a9eb2
    *v8 = v9;
    int64_t v39 = 0;
    uint32_t v40 = (int32_t)v39; // 0x1a9eb6
    *(int32_t *)0x5a0a295f = *(int32_t *)0x5a0a295f + v40;
    int32_t * v41 = (int32_t *)(__asm_wait() + 0x374de1dc); // 0x1a9ed2
    *v41 = *v41 + v40;
    __asm_in_133((int16_t)v29);
    unsigned char v42 = (char)v29; // 0x1a9ed9
    unsigned char v43 = v42 + (char)v39; // 0x1a9ed9
    int64_t v44 = v29 & -256 | (int64_t)v43; // 0x1a9ed9
    uint64_t v45 = unknown_6834e6e2(); // 0x1a9edc
    uint32_t v46 = v40 % 32; // 0x1a9ee3
    bool v47 = v43 < v42; // 0x1a9ee3
    int32_t * v48; // 0x1a9ee3
    uint32_t v49; // 0x1a9ee3
    uint32_t v50; // 0x1a9ee3
    if (v46 != 0) {
        v48 = (int32_t *)v44;
        v49 = *v48;
        v50 = v49 >> 32 - v46 | v49 << v46;
        *v48 = v50;
        v47 = v50 % 2 != 0;
    }
    int64_t v51 = (v39 - v29 / 256 + (int64_t)v47) % 256 | v39 & 0xffffff00; // 0x1a9ee6
    int32_t * v52 = (int32_t *)v51; // 0x1a9ee8
    *v52 = *v52 + (int32_t)v51;
    char v53 = v45 / 256; // 0x1a9eea
    char v54 = *(char *)v51; // 0x1a9eea
    unsigned char v55 = v54 + v53; // 0x1a9eea
    int64_t v56 = 256 * (int64_t)v55; // 0x1a9eea
    int64_t v57 = v56 | v45 & -0xff01; // 0x1a9eee
    while (((v55 ^ v53) & (v55 ^ v54)) < 0) {
        // 0x1a9eb6
        v39 = v44 & 0xffffffff;
        v40 = (int32_t)v39;
        *(int32_t *)0x5a0a295f = *(int32_t *)0x5a0a295f + v40;
        v41 = (int32_t *)(__asm_wait() + 0x374de1dc);
        *v41 = *v41 + v40;
        __asm_in_133((int16_t)v57);
        v42 = (char)v57;
        v43 = v42 + (char)v39;
        v44 = v57 & -256 | (int64_t)v43;
        v45 = unknown_6834e6e2();
        v46 = v40 % 32;
        v47 = v43 < v42;
        if (v46 != 0) {
            v48 = (int32_t *)v44;
            v49 = *v48;
            v50 = v49 >> 32 - v46 | v49 << v46;
            *v48 = v50;
            v47 = v50 % 2 != 0;
        }
        v51 = (v39 - v57 / 256 + (int64_t)v47) % 256 | v39 & 0xffffff00;
        v52 = (int32_t *)v51;
        *v52 = *v52 + (int32_t)v51;
        v53 = v45 / 256;
        v54 = *(char *)v51;
        v55 = v54 + v53;
        v56 = 256 * (int64_t)v55;
        v57 = v56 | v45 & -0xff01;
    }
    int64_t result4 = v56 | v51 & 0xffff00ff; // 0x1a9eec
    int32_t * v58 = (int32_t *)(v9 - 0x4d70c102); // 0x1a9f54
    *v58 = *v58 + (int32_t)result4;
    return result4;
}

// Address range: 0x1a9faa - 0x1a9fc7
int64_t function_1a9faa(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1a9faa
    __asm_in_134(-25);
    int64_t result = unknown_26e85bbb(); // 0x1a9fb5
    int64_t v1; // 0x1a9faa
    *(char *)a3 = (char)v1 + (char)(v1 / 256);
    int32_t * v2 = (int32_t *)(a1 - 0x2ffedc0b); // 0x1a9fbc
    *v2 = *v2 + (int32_t)v1;
    char * v3 = (char *)result; // 0x1a9fc2
    *v3 = *v3 + (char)result;
    return result;
}

// Address range: 0x1a9fcd - 0x1a9fe1
int64_t function_1a9fcd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1a9fcd
    int64_t v1; // 0x1a9fcd
    *(char *)(a3 + 0x1c3503aa) = (char)v1;
    int64_t result = unknown_3aa182db(); // 0x1a9fd5
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x1a9fe3 - 0x1aa05f
int64_t function_1a9fe3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1a9fe3
    int64_t v1; // 0x1a9fe3
    uint64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = a2;
    int32_t v5 = (int32_t)a4 + (int32_t)a3; // 0x1a9fe3
    *(int32_t *)a4 = v5;
    if (v5 < 0) {
        // 0x1a9fea
        __asm_int(-114);
        *(char *)v3 = *(char *)&v3 + (char)v2;
        unknown_ffffffffdfac3ef9();
        return 0x49a44602;
    }
    uint64_t v6 = v1 & 0xffffffff ^ 0xf64901e8; // 0x1aa04a
    if ((char)(v6 / 256) + (char)(v2 / 256) >= 0) {
        // 0x1aa054
        *(char *)a1 = *(char *)&v4;
        bool v7; // 0x1a9fe3
        int64_t v8 = v7 ? -1 : 1; // 0x1aa054
        *(char *)0x1e8cf88f869ee09 = (char)v6;
        return __asm_hlt(v8 + a1, v4 + v8);
    }
    int64_t v9 = unknown_1a1fe035(); // 0x1aa02f
    unsigned char v10 = (char)a4 % 32; // 0x1aa037
    if (v10 != 0) {
        char * v11 = (char *)(v2 + 0x5e2a2c6a); // 0x1aa037
        unsigned char v12 = *v11; // 0x1aa037
        *v11 = v12 >> 8 - v10 | v12 << v10;
    }
    return v9 | 86;
}

// Address range: 0x1aa0af - 0x1aa0b0
int64_t function_1aa0af(void) {
    // 0x1aa0af
    int64_t result; // 0x1aa0af
    return result;
}

// Address range: 0x1aa0d3 - 0x1aa0db
int64_t function_1aa0d3(void) {
    // 0x1aa0d3
    __asm_sti();
    return function_1aa0af();
}

// Address range: 0x1aa10d - 0x1aa11b
int64_t function_1aa10d(int64_t a1) {
    // 0x1aa10d
    int64_t v1; // 0x1aa10d
    return function_1aa198(v1, v1, 0x3a8ec400, v1);
}

// Address range: 0x1aa144 - 0x1aa148
int64_t function_1aa144(int64_t a1) {
    // 0x1aa144
    float80_t v1; // 0x1aa144
    *(float32_t *)(a1 + 51) = (float32_t)v1;
    int64_t result; // 0x1aa144
    return result;
}

// Address range: 0x1aa149 - 0x1aa15f
int64_t function_1aa149(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x1aa149
    int64_t v2; // 0x1aa149
    int32_t v3; // 0x1aa149
    bool v4; // 0x1aa149
    int64_t v5; // 0x1aa149
    if (v1 == 0) {
        // 0x1aa149
        v3 = v5;
    } else {
        char * v6 = (char *)(v5 + 0x553a01e8); // 0x1aa149
        char v7 = *v6; // 0x1aa149
        *v6 = v7 >> v1;
        int64_t v8; // 0x1aa149
        v2 = v8;
        v3 = *(int32_t *)&v8;
        v4 = (v7 & 1 << v1 - 1) != 0;
    }
    *(int32_t *)v2 = v3 - (int32_t)a3 + (int32_t)v4;
    char v9 = *(char *)-0x21e3760d; // 0x1aa153
    *(char *)-0x21e3760d = v9 + ((char)v5 | (char)&g1);
    return function_3ae5d651();
}

// Address range: 0x1aa168 - 0x1aa169
int64_t function_1aa168(int64_t a1) {
    // 0x1aa168
    int64_t result; // 0x1aa168
    return result;
}

// Address range: 0x1aa198 - 0x1aa1c2
int64_t function_1aa198(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1aa198
    int64_t v1; // 0x1aa198
    int64_t v2 = v1;
    int64_t result2 = unknown_60c7d49e(); // 0x1aa198
    uint32_t v3 = (int32_t)a4 % 32; // 0x1aa19d
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)(result2 + 0x1e83f05); // 0x1aa19d
        uint32_t v5 = *v4; // 0x1aa19d
        *v4 = v5 >> 32 - v3 | v5 << v3;
    }
    char * v6 = (char *)(v1 - 120); // 0x1aa1a3
    *v6 = *v6 - (char)result2;
    unsigned char v7 = *(char *)(v2 + 8 * v1) | (char)v2; // 0x1aa1a6
    uint64_t v8 = a4 - 1; // 0x1aa1a9
    if (v8 == 0 || v7 == 0) {
        int64_t result = unknown_1b537bb4(); // 0x1aa1ae
        char * v9 = (char *)(result + 0x365dc00); // 0x1aa1b3
        *v9 = *v9 + (char)result;
        char * v10 = (char *)((v2 & -256 | (int64_t)v7) + 0x201e800); // 0x1aa1b9
        *v10 = *v10 + (char)(v8 / 256);
        int32_t * v11 = (int32_t *)(a2 - 66); // 0x1aa1bf
        *v11 = *v11 + (int32_t)v8;
        return result;
    }
    // 0x1aa1f1
    return result2;
}

// Address range: 0x1aa1de - 0x1aa1e1
int64_t function_1aa1de(int64_t a1) {
    // 0x1aa1de
    int64_t result; // 0x1aa1de
    return result;
}

// Address range: 0x1aa1ef - 0x1aa1f1
int64_t function_1aa1ef(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1aa1ef
    int64_t result; // 0x1aa1ef
    return result;
}

// Address range: 0x1aa1f6 - 0x1aa1f9
int64_t function_1aa1f6(void) {
    // 0x1aa1f6
    int64_t result; // 0x1aa1f6
    return result;
}

// Address range: 0x1aa20f - 0x1aa210
int64_t function_1aa20f(void) {
    // 0x1aa20f
    int64_t result; // 0x1aa20f
    return result;
}

// Address range: 0x1aa21f - 0x1aa226
int64_t function_1aa21f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1aa21f
    int64_t result; // 0x1aa21f
    return result;
}

// Address range: 0x1aa2a5 - 0x1aa2a9
int64_t function_1aa2a5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1aa2a5
    int64_t v1; // 0x1aa2a5
    return v1 & 0xffffffff;
}

// Address range: 0x1aa2c8 - 0x1aa2c9
int64_t function_1aa2c8(int64_t a1) {
    // 0x1aa2c8
    int64_t result; // 0x1aa2c8
    return result;
}

// Address range: 0x1aa2d5 - 0x1aa2d6
int64_t function_1aa2d5(void) {
    // 0x1aa2d5
    int64_t result; // 0x1aa2d5
    return result;
}

// Address range: 0x1aa341 - 0x1aa342
int64_t function_1aa341(int64_t a1) {
    // 0x1aa341
    int64_t result; // 0x1aa341
    return result;
}

// Address range: 0x1aa369 - 0x1aa3a5
int64_t function_1aa369(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1aa369
    bool v1; // 0x1aa369
    int64_t v2 = (v1 ? -1 : 1) + a2; // 0x1aa36b
    int64_t v3; // 0x1aa369
    int32_t * v4 = (int32_t *)(v3 - 0x33f7efee); // 0x1aa36c
    *v4 = *v4 - (int32_t)(v3 & 0xffffff00 | (uint64_t)v3 % 256);
    int32_t * v5 = (int32_t *)(4 * v3 + 0x2ca6013d + v3); // 0x1aa372
    int32_t v6 = v3; // 0x1aa372
    *v5 = *v5 ^ v6;
    int64_t v7 = __asm_hlt(a1 & 0xffffffb7, v2); // 0x1aa37c
    int32_t v8 = *(int32_t *)(v7 + 12) & v6; // 0x1aa380
    int32_t * v9 = (int32_t *)((2 * v2 & 0x1fffffffe) + 61); // 0x1aa389
    *v9 = *v9 - v8;
    int32_t * v10 = (int32_t *)((v7 & 0xffffffff) - 0x544a11ad); // 0x1aa38f
    *v10 = *v10 + v8;
    *(int32_t *)0x44ff2577de01e850 = (int32_t)v2;
    return function_ffffffffe8cca445();
}

// Address range: 0x1aa3e7 - 0x1aa3eb
int64_t function_1aa3e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1aa3e7
    int64_t result; // 0x1aa3e7
    return result;
}

// Address range: 0x1aa40c - 0x1aa415
int64_t function_1aa40c(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0x6674cfb4); // 0x1aa40e
    int64_t result; // 0x1aa40c
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1aa432 - 0x1aa433
int64_t function_1aa432(void) {
    // 0x1aa432
    int64_t result; // 0x1aa432
    return result;
}

// Address range: 0x1aa43f - 0x1aa442
int64_t function_1aa43f(int64_t a1) {
    // 0x1aa43f
    return function_1aa432();
}

// Address range: 0x1aa4a8 - 0x1aa4a9
int64_t function_1aa4a8(void) {
    // 0x1aa4a8
    int64_t result; // 0x1aa4a8
    return result;
}

// Address range: 0x2534bc - 0x253590
int64_t function_2534bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2534bc
    int64_t v1; // bp+24, 0x2534bc
    int64_t v2; // 0x2534bc
    return function_c6d58(a1, a2, a3, a4, v2, v2, (int64_t)&v1);
}

// Address range: 0x253590 - 0x2536f4
int64_t function_253590(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x253590
    int64_t v1; // bp-56, 0x253590
    v1 = (int64_t)&v1;
    int64_t v2; // 0x253590
    return function_c6d58(a1, a2, a3, a4, a5, v2, 0x25177c);
}

// Address range: 0x2536f4 - 0x253844
int64_t function_2536f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2536f4
    int64_t v1; // bp-32, 0x2536f4
    int64_t v2 = (int64_t)&v1; // 0x253803
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x25381a
    *v3 = a1;
    *(int64_t *)(v2 - 16) = v2 + 8;
    int64_t v4 = *v3; // 0x253836
    *(int64_t *)(v2 - 24) = v4;
    int64_t v5; // 0x2536f4
    return function_c6d58(v4, a2, a3, a4, a5, v5, v5);
}

// Address range: 0x253844 - 0x2539ab
int64_t function_253844(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x253844
    bool v1; // 0x253844
    return function_c6d58(a1, a2, a3, a4, a5, a6, 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2);
}

// Address range: 0x2539ab - 0x253b0b
int64_t function_2539ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2539ab
    return function_c6d58(a1, a2, a3, a4, a5, a6, 310);
}

// Address range: 0x253b0b - 0x253c5d
int64_t function_253b0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x4fdabd52; // bp-32, 0x253b90
    int64_t v2 = (int64_t)&v1; // 0x253bba
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x253bc2
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x253bc2
    *v4 = v3;
    int64_t v5 = v2 - 16; // 0x253bca
    int64_t * v6 = (int64_t *)v5; // 0x253bca
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x253bd3
    *v7 = v5;
    *v6 = 0x431743f8;
    int64_t * v8 = (int64_t *)(v2 - 32); // 0x253bee
    *v8 = *v6;
    *v7 = a7;
    v1 = *v6;
    *v7 = v5;
    *v8 = *v6;
    *v4 = v3;
    *(int64_t *)(v2 + 24) = v3;
    *v4 = v1;
    *v6 = v2;
    *v4 = v1;
    *v6 = v1;
    return function_c6d58(a1, a2, a3, a4, a5, a6, v1);
}

// Address range: 0x253c5d - 0x253d70
int64_t function_253c5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x253c5d
    int64_t v1; // bp-56, 0x253c5d
    int64_t v2 = (int64_t)&v1; // 0x253ccf
    int64_t v3 = v2 + 16; // 0x253cd6
    v1 = v3;
    int64_t * v4 = (int64_t *)(v2 + 32); // 0x253ce5
    int64_t v5 = *v4; // 0x253ce5
    int64_t * v6 = (int64_t *)(v2 + 8); // 0x253ce5
    *v6 = v5;
    v1 = 0x2fa62576;
    int64_t * v7 = (int64_t *)(v2 - 8); // 0x253d16
    bool v8; // 0x253c5d
    *v7 = 0x4000 * (int64_t)v8 | 2048 * (int64_t)v8 | 1024 * (int64_t)v8 | 512 * (int64_t)v8 | 256 * (int64_t)v8 | 128 * (int64_t)v8 | 64 * (int64_t)v8 | 16 * (int64_t)v8 | (int64_t)v8 | 4 * (int64_t)v8 | 2;
    *(int64_t *)v3 = v1;
    v1 = 0x1d2d7ba7;
    *v7 = 0x787cab9f;
    *(int64_t *)(v2 - 16) = v5;
    *v4 = v1;
    *v7 = *v6;
    *v6 = a6;
    v1 = v2 + 24;
    int64_t v9 = *v6; // 0x253d61
    *v7 = v9;
    int64_t v10; // 0x253c5d
    return function_c6d58(a1, v10, v10, a4, a5, v9, 0x3b56ca00);
}

// Address range: 0x253d70 - 0x253ed0
int64_t function_253d70(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x253d70
    int64_t v1; // bp-32, 0x253d70
    int64_t v2 = (int64_t)&v1; // 0x253dd0
    int64_t v3 = v2 - 8; // 0x253df3
    *(int64_t *)v3 = 0x1d4d8370;
    int64_t * v4 = (int64_t *)(v2 - 24); // 0x253e04
    int64_t v5 = *(int64_t *)(v2 + 24); // 0x253e0a
    int64_t v6 = v2 - 16; // 0x253e0a
    int64_t * v7 = (int64_t *)v6; // 0x253e0a
    *v7 = v5;
    *v4 = v3;
    *v4 = v1;
    int64_t v8 = v2 - 32; // 0x253e35
    int64_t * v9 = (int64_t *)v8; // 0x253e35
    *v9 = v1;
    int64_t * v10 = (int64_t *)(v2 - 40); // 0x253e3a
    *v10 = v8;
    int64_t v11 = *v9; // 0x253e47
    *v9 = v6;
    *v10 = 0x49c77de;
    *(int64_t *)(v2 - 48) = v5;
    *v7 = *v9;
    *v9 = a2;
    *v10 = v11;
    v1 = v11;
    *v9 = v6;
    int64_t v12 = *v4; // 0x253eb2
    *v9 = v12;
    *v10 = v12;
    int64_t v13; // 0x253d70
    return function_c6d58(a1, *v9, a3, a4, v13, v13, 0x2528d9);
}

// Address range: 0x253ed0 - 0x254030
int64_t function_253ed0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x253ed0
    int64_t v1; // bp-64, 0x253ed0
    int64_t v2; // 0x253ed0
    return function_c6d58(a1, a2, a3, a4, a5, v2, (int64_t)&v1 + 16);
}

// Address range: 0x254030 - 0x254191
int64_t function_254030(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x254030
    return function_c6d58(a1, a2, a3, a4, a5, a6, 0x6ba1cca2);
}

// Address range: 0x254191 - 0x254332
int64_t function_254191(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x254191
    int64_t v1; // bp-32, 0x254191
    int64_t v2 = (int64_t)&v1; // 0x25423a
    int64_t v3 = v2 - 8; // 0x25424f
    int64_t v4 = *(int64_t *)(v2 + 24); // 0x25425f
    int64_t v5 = v2 - 16; // 0x25425f
    int64_t * v6 = (int64_t *)v5; // 0x25425f
    *v6 = v4;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x254263
    *v7 = v3;
    int64_t * v8 = (int64_t *)(v2 + 8); // 0x25427e
    int64_t v9 = *v8; // 0x25427e
    *v6 = v9;
    *v7 = a1;
    int64_t * v10 = (int64_t *)(v2 - 32); // 0x25428e
    *v10 = a6;
    *v7 = 0x23331f43;
    *v10 = v4;
    *(int64_t *)v3 = *v7;
    *v10 = a4;
    *v7 = v9;
    *v8 = v9;
    *v7 = *v6;
    *v10 = v5;
    *v7 = *v6;
    *v10 = v5;
    return function_c6d58(*v7, a2, a3, *v10, a5, a6, v1);
}

// Address range: 0x254332 - 0x254473
int64_t function_254332(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x254332
    bool v1; // 0x254332
    return function_c6d58(a1, a2, a3, a4, a5, a6, 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2);
}

// Address range: 0x254473 - 0x254478
int64_t function_254473(void) {
    // 0x254473
    int64_t result; // 0x254473
    return result;
}
