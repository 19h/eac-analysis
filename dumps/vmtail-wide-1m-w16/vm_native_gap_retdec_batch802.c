/*
 * Targeted RetDec C for native executable gap queue batch 802.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2dcf0e-0x2dd10e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2dd10e-0x2dd30e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2dd50e-0x2dd70e rank=- name=- kind=- bytes=- uncovered=-
 *   0x443667-0x443867 rank=- name=- kind=- bytes=- uncovered=-
 *   0x443867-0x443a67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x443a67-0x443c67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x443c67-0x443e67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x443e67-0x444067 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_2dcf0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2dd038(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2dd182(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2dd50e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2dd585(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_443667(void);
int64_t function_443691(void);
int64_t function_4436c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4436db(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4437c3(void);
int64_t function_4437ed(int64_t a1, uint64_t a2, int64_t a3, int64_t a4);
int64_t function_44388b(void);
int64_t function_443898(void);
int64_t function_4438d6(void);
int64_t function_4438dd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_443903(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_443942(void);
int64_t function_443954(void);
int64_t function_44399b(void);
int64_t function_44399c(void);
int64_t function_4439bb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_443a25(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_443a88(void);
int64_t function_443aab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_443af2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_443b49(void);
int64_t function_443b68(void);
int64_t function_443b90(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_443c4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_443d32(int64_t a1);
int64_t function_443d5c(void);
int64_t function_443d63(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_443d7b(int64_t a1, int64_t a2);
int64_t function_443dd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_443de3(int32_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_443def(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_443e32(void);
int64_t function_443e3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_443e52(void);
int64_t function_443e58(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_44403d(void);
int64_t function_44404d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_caf2a();
int64_t function_ffffffff9b444e69();
int64_t function_ffffffffae85deac();
int64_t function_ffffffffcb6e02e1();
int64_t function_fffffffff290e4f8();
int64_t unknown_6c293968();

// Address range: 0x2dcf0e - 0x2dd038
int64_t function_2dcf0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2dcf0e
    int64_t v1; // 0x2dcf0e
    char * v2 = (char *)(v1 - 127); // 0x2dcf13
    *v2 = *v2 | (char)a4;
    char v3 = __asm_in((int16_t)a3); // 0x2dcf16
    char * v4 = (char *)(v1 & -256 | (int64_t)v3); // 0x2dcf17
    *v4 = (*v4 | v3) + v3;
    int64_t v5; // bp+16, 0x2dcf0e
    int64_t v6 = (int64_t)&v5; // 0x2dcf36
    int64_t v7 = v6 + 16; // 0x2dcf4d
    int64_t v8 = *(int64_t *)v7; // 0x2dcf4d
    int64_t * v9 = (int64_t *)(v6 - 8); // 0x2dcf4d
    *(int64_t *)(v6 - 24) = v8;
    *v9 = 0x21388fb1;
    *(int64_t *)(v6 + 8) = *v9;
    *(int64_t *)(v6 - 16) = a3;
    *v9 = v8;
    *(int64_t *)(v6 + 32) = v5;
    v5 = a3;
    int64_t v10 = v5; // 0x2dd003
    v5 = v7;
    return function_caf2a(a1, 0xec834829, v10, a4, v1, v1);
}

// Address range: 0x2dd038 - 0x2dd182
int64_t function_2dd038(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x2d97eb; // bp-40, 0x2dd086
    int64_t v2 = (int64_t)&v1; // 0x2dd166
    *(int64_t *)(v2 - 8) = 0x2d97eb;
    *(int64_t *)(v2 - 16) = 0x2d97eb;
    return function_caf2a(a1, a2, a3, a4, a5, 0x2cb18512);
}

// Address range: 0x2dd182 - 0x2dd2ce
int64_t function_2dd182(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5; // bp-40, 0x2dd223
    int64_t v2 = (int64_t)&v1; // 0x2dd2ab
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x2dd2b7
    v1 = v3;
    *(int64_t *)(v2 - 8) = v3;
    int64_t v4; // 0x2dd182
    return function_caf2a(a1, a2, a3, a4, v4, v4);
}

// Address range: 0x2dd50e - 0x2dd585
int64_t function_2dd50e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2dd50e
    int64_t v1; // 0x2dd50e
    return function_caf2a(0x100000000 * a1 >> 32, a2, a3, a6, a5, v1);
}

// Address range: 0x2dd585 - 0x2dd6d5
int64_t function_2dd585(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2dd585
    int64_t v1; // bp-40, 0x2dd585
    int64_t v2 = (int64_t)&v1; // 0x2dd606
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x2dd60f
    int64_t v4 = *(int64_t *)(v2 + 32); // 0x2dd612
    *v3 = v4;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x2dd616
    *v5 = v4;
    int64_t * v6 = (int64_t *)(v2 + 16); // 0x2dd625
    int64_t v7 = *v6; // 0x2dd625
    *v5 = v7;
    *(int64_t *)(v2 - 24) = v7;
    *v3 = v4;
    *v6 = v1;
    v1 = v7;
    int64_t * v8 = (int64_t *)(v2 + 8); // 0x2dd67c
    *(int64_t *)(v2 + 40) = *v8;
    *v8 = v2 + 24;
    int64_t v9; // 0x2dd585
    return function_caf2a(a1, a2, a3, a4, 0x2da6e5, v9);
}

// Address range: 0x443667 - 0x443668
int64_t function_443667(void) {
    // 0x443667
    int64_t result; // 0x443667
    return result;
}

// Address range: 0x443691 - 0x443696
int64_t function_443691(void) {
    // 0x443691
    return function_ffffffff9b444e69();
}

// Address range: 0x4436c7 - 0x4436d8
int64_t function_4436c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = a2 & 0xffffffff; // 0x4436c9
    int32_t * v1 = (int32_t *)(a3 - 116 + 4 * result); // 0x4436ca
    *v1 = *v1 / 2;
    return result;
}

// Address range: 0x4436db - 0x443782
int64_t function_4436db(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4436db
    int64_t v1; // 0x4436db
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2;
    int64_t v3 = (v2 + 131) % 256 | v2 & -256; // 0x4436eb
    char * v4 = (char *)(v3 + 122); // 0x4436ed
    *v4 = 100;
    int64_t result = v3 & -0xff01 | v2 - 256 * a4 & 0xff00; // 0x4436f3
    int64_t v5; // 0x4436db
    uint32_t v6 = *(int32_t *)&v5; // 0x4436f9
    int64_t v7; // 0x4436db
    uint32_t v8 = *(int32_t *)&v7; // 0x4436f9
    bool v9; // 0x4436db
    int64_t v10 = v9 ? -4 : 4; // 0x4436f9
    v7 = v10 + a1;
    v5 = v10 + a2;
    int64_t v11; // bp-3666, 0x4436db
    *(int64_t *)result = v11;
    int64_t v12; // 0x4436db
    int64_t v13 = (a4 & -256 | (int64_t)(*(char *)&v12 + (char)a4)) - 1; // 0x4436fc
    v12 = v13;
    if (v13 != 0 != (v6 == v8)) {
        // 0x4436fe
        return result;
    }
    uint64_t v14 = (256 * (int64_t)*v4 | 0x88570021) - (int64_t)&v11; // 0x4436f1
    unsigned char v15 = (char)(v14 / 256); // 0x443771
    char v16 = v6 < v8; // 0x443771
    unsigned char v17 = *(char *)(v5 + 97) + v16; // 0x443771
    unsigned char v18 = v15 - v17; // 0x443771
    bool v19 = v6 < v8 ? v17 != -1 | v18 - v16 > v15 : v17 > v15; // 0x443771
    int64_t v20; // bp-3658, 0x4436db
    uint32_t v21 = (int32_t)(int64_t)&v20; // 0x443774
    uint32_t v22 = *(int32_t *)result; // 0x443774
    int32_t v23 = v19; // 0x443774
    uint32_t v24 = v22 + v21; // 0x443774
    uint32_t v25 = v24 + v23; // 0x443774
    int32_t v26 = v25 + v23; // 0x443774
    unsigned char v27 = llvm_ctpop_i8((char)v25); // 0x443774
    bool v28 = v19 ? v25 <= v21 : v24 < v21; // 0x443774
    int64_t v29 = v25; // 0x443774
    *(int64_t *)(v29 - 8) = 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | (int64_t)v28 | 16 * (int64_t)(v22 % 16 + (v21 & 8) + v23 > 15) | 64 * (int64_t)(v25 == 0) | 128 * (int64_t)(v25 < 0) | 4 * (int64_t)(v27 % 2 == 0) | 2048 * (int64_t)(((v26 ^ v21) & (v26 ^ v22)) < 0) | 2;
    uint64_t v30 = __asm_int3(v7, v5, a3 & -0xff01 | (int64_t)"zydis_decoder_tree_root", v12); // 0x443779
    int64_t v31 = v29 - 16; // 0x44377a
    int64_t v32; // bp-8, 0x4436db
    *(int64_t *)v31 = (int64_t)&v32;
    unsigned char v33 = *(char *)(v30 % 256 + (256 * (int64_t)v18 | v14 & 0xffff00f9)); // 0x44377e
    *(int64_t *)(v29 + 3749) = v31;
    return v30 & -256 | (int64_t)v33;
}

// Address range: 0x4437c3 - 0x4437c7
int64_t function_4437c3(void) {
    // 0x4437c3
    int64_t result; // 0x4437c3
    return result;
}

// Address range: 0x4437ed - 0x44386a
int64_t function_4437ed(int64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    // 0x4437ed
    int64_t v1; // 0x4437ed
    // 0x443868
    return v1 & 0xffffffff;
    // 0x4437f8
    __asm_out(6, (int32_t)v1);
    return v1 & 0xffffff00 | a2 % 256;
}

// Address range: 0x44388b - 0x44388c
int64_t function_44388b(void) {
    // 0x44388b
    int64_t result; // 0x44388b
    return result;
}

// Address range: 0x443898 - 0x443899
int64_t function_443898(void) {
    // 0x443898
    int64_t result; // 0x443898
    return result;
}

// Address range: 0x4438d6 - 0x4438d8
int64_t function_4438d6(void) {
    // 0x4438d6
    int64_t v1; // 0x4438d6
    return function_443903(v1, v1, v1, v1);
}

// Address range: 0x4438dd - 0x4438eb
int64_t function_4438dd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4438dd
    return function_443898();
}

// Address range: 0x443903 - 0x443915
int64_t function_443903(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x443903
    int64_t result; // 0x443903
    bool v1; // 0x443903
    if (!v1 && !v1) {
        result = function_44388b();
    }
    // 0x443905
    __asm_out_133(-84, (char)result);
    char * v2 = (char *)(result - 26); // 0x44390f
    int64_t v3; // 0x443903
    *v2 = *v2 ^ (char)v3;
    return result;
}

// Address range: 0x443942 - 0x443947
int64_t function_443942(void) {
    // 0x443942
    return function_ffffffffae85deac();
}

// Address range: 0x443954 - 0x443957
int64_t function_443954(void) {
    // 0x443954
    int64_t result; // 0x443954
    return result;
}

// Address range: 0x44399b - 0x44399c
int64_t function_44399b(void) {
    // 0x44399b
    int64_t result; // 0x44399b
    return result;
}

// Address range: 0x44399c - 0x4439a3
int64_t function_44399c(void) {
    // 0x44399c
    bool v1; // 0x44399c
    if (!v1) {
        function_44399b();
    }
    // 0x44399e
    return function_fffffffff290e4f8();
}

// Address range: 0x4439bb - 0x4439c2
int64_t function_4439bb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4439bb
    int64_t v1; // 0x4439bb
    int64_t v2 = v1;
    return v2 & -256 | (int64_t)(*(char *)(a3 - 0x7edc955e) | (char)v2);
}

// Address range: 0x443a25 - 0x443a40
int64_t function_443a25(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x443a25
    int64_t v1; // 0x443a25
    *(char *)a3 = (char)v1 + (char)&g2;
    *(char *)a1 = __asm_insb((int16_t)a3);
    char v2 = *(char *)(v1 - 100); // 0x443a2e
    unknown_6c293968();
    int64_t result = function_443aab(0x73f321ff, a2, a3, 256 * (int64_t)(v2 ^ (char)(a4 / 256)) | a4 & -0xff01, (int64_t)&g5); // 0x443a3e
    return result;
}

// Address range: 0x443a88 - 0x443a8d
int64_t function_443a88(void) {
    // 0x443a88
    return function_ffffffffcb6e02e1();
}

// Address range: 0x443aab - 0x443af1
int64_t function_443aab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x443aab
    bool v1; // 0x443aab
    if (v1) {
        // 0x443ae7
        *(int32_t *)a1 = __asm_insd((int16_t)a3);
        int64_t v2 = a1; // bp-8, 0x443ae8
        int64_t result = __asm_in_134(-37); // 0x443ae9
        int32_t v3 = *(int32_t *)(result + 120); // 0x443aeb
        int64_t v4 = v3 + ((int32_t)(int64_t)&v2 | (int32_t)v1); // 0x443aeb
        *(int64_t *)(v4 - 8) = a2;
        int64_t v5 = v4 - 16; // 0x443aef
        *(int64_t *)v5 = a2;
        *(int64_t *)(v4 - 24) = v5;
        return result;
    }
    int32_t * v6 = (int32_t *)((4 * a1 & 0x1fffffffc) + a3); // 0x443ab3
    *v6 = *v6 ^ (int32_t)a3;
    int32_t * v7 = (int32_t *)((a4 & 0xffffffff ^ 0xffffffff) - 10); // 0x443ab6
    uint32_t v8 = *v7; // 0x443ab6
    *v7 = v8 / 512 | 0x1000000 * v8;
    return a2 & 0xffff00ff | (int64_t)&g1;
}

// Address range: 0x443af2 - 0x443b07
int64_t function_443af2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    char * v1 = (char *)(a4 - 0x1fac79e2); // 0x443af2
    int64_t v2; // 0x443af2
    *v1 = *v1 - (char)v2;
    return __asm_rsm();
}

// Address range: 0x443b49 - 0x443b4b
int64_t function_443b49(void) {
    // 0x443b49
    int64_t result; // 0x443b49
    return result;
}

// Address range: 0x443b68 - 0x443b69
int64_t function_443b68(void) {
    // 0x443b68
    int64_t result; // 0x443b68
    return result;
}

// Address range: 0x443b90 - 0x443bc8
int64_t function_443b90(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x443b90
    int64_t v1; // 0x443b90
    char v2 = (uint64_t)v1 / 256; // 0x443b90
    bool v3; // 0x443b90
    char v4 = (char)v3 + (char)(a3 / 256); // 0x443b90
    if (llvm_ctpop_i8(v2 - v4) % 2 != 0) {
        // 0x443b94
        return __asm_int3(a1, a2, a3, v1);
    }
    int64_t v5; // 0x443b90
    if (v4 < v2) {
        v5 = function_443b68();
    }
    char v6 = __asm_in_135(-84); // 0x443bb5
    unsigned char v7 = *(char *)0x4b6a5020228ac93f; // 0x443bba
    return (v5 | (int64_t)v6) & -256 | (int64_t)v7;
}

// Address range: 0x443c4e - 0x443d29
int64_t function_443c4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 8; // bp-8, 0x443c4f
    int64_t v2; // 0x443c4e
    uint32_t v3 = (int32_t)((int32_t)v2 < (int32_t)v2) - (int32_t)v2 + (int32_t)v2; // 0x443c51
    int32_t v4 = *(int32_t *)(int64_t)v3 & v3; // 0x443c53
    int64_t v5; // 0x443c4e
    int64_t v6; // 0x443c4e
    int64_t * v7; // 0x443c4e
    if (v4 < 1) {
        if (v4 != 0) {
            // 0x443c8b
            return (v4 + 255) % 256 | v4 & -256;
        }
        // 0x443c9d
        v5 = 0xaebe1fb3;
        v6 = __asm_sti();
        int64_t v8; // bp-16, 0x443c4e
        v7 = &v8;
    } else {
        // 0x443c5c
        v5 = 0xaebe1fb2;
        v6 = (int64_t)*(int32_t *)-0x69e24d896f96a17;
        v7 = &v1;
    }
    int32_t * v9 = (int32_t *)(v5 + 0x402760da); // 0x443ca6
    uint32_t v10 = *v9; // 0x443ca6
    uint32_t v11 = (int32_t)v5 & 19; // 0x443ca6
    *v9 = v10 << v11 | (int32_t)((int64_t)v10 >> (int64_t)(33 - v11));
    int32_t v12 = *(int32_t *)(v6 + 66); // 0x443cae
    int64_t result = *(int64_t *)(int64_t)(v12 | (int32_t)(int64_t)v7); // 0x443cb7
    return result;
}

// Address range: 0x443d32 - 0x443d33
int64_t function_443d32(int64_t a1) {
    // 0x443d32
    int64_t result; // 0x443d32
    return result;
}

// Address range: 0x443d5c - 0x443d5f
int64_t function_443d5c(void) {
    // 0x443d5c
    int64_t result; // 0x443d5c
    return result;
}

// Address range: 0x443d63 - 0x443d7b
int64_t function_443d63(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x443d63
    int64_t v1; // 0x443d63
    uint32_t v2 = (int32_t)v1;
    uint32_t v3 = v2 - 125 + (int32_t)(-1 - (char)(a4 / 256) < (char)(v1 / 256)); // 0x443d6a
    bool v4 = -1 - (char)(a4 / 256) < (char)(v1 / 256) ? v3 <= v2 : v2 > 124; // 0x443d6a
    *(int32_t *)a2 = v3;
    int32_t v5 = *(int32_t *)(2 * v1 + a2); // 0x443d6d
    bool v6; // 0x443d63
    int64_t v7 = v6 ? -1 : 1; // 0x443d70
    char * v8 = (char *)(v7 + 0x179f15f5 + 2 * (v7 + a1) + (int64_t)((int32_t)a2 - v5 + (int32_t)v4)); // 0x443d71
    *v8 = *v8 & (char)(a3 / 256);
    return v1 + 0x1d4e42e3 & 0xffffffff;
}

// Address range: 0x443d7b - 0x443d80
int64_t function_443d7b(int64_t a1, int64_t a2) {
    // 0x443d7b
    int64_t v1; // 0x443d7b
    bool v2; // 0x443d7b
    int64_t result = function_443de3((int32_t)a2 + (int32_t)a1 + (int32_t)v2, v1, v1, v1, (int64_t)&g5); // 0x443d7e
    return result;
}

// Address range: 0x443dd8 - 0x443de3
int64_t function_443dd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x443dd8
    int64_t v1; // 0x443dd8
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return v1 & (a3 | -256);
}

// Address range: 0x443de3 - 0x443dee
int64_t function_443de3(int32_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __asm_sti(); // 0x443de5
    int64_t v2; // 0x443de3
    *(int32_t *)a4 = (int32_t)v2 + (int32_t)a4;
    return v1 & -256 | (int64_t)(*(char *)v1 & (char)v1);
}

// Address range: 0x443def - 0x443dff
int64_t function_443def(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x443def
    int64_t v1; // 0x443def
    return v1 & 0x48a41d37;
}

// Address range: 0x443e32 - 0x443e37
int64_t function_443e32(void) {
    // 0x443e32
    int64_t v1; // 0x443e32
    int64_t v2 = v1;
    return (v2 + 112) % 256 | v2 & -256;
}

// Address range: 0x443e3f - 0x443e4d
int64_t function_443e3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x443e3f
    int64_t v1; // 0x443e3f
    int64_t v2 = v1;
    return (v2 + 79) % 256 | v2 & -256;
}

// Address range: 0x443e52 - 0x443e53
int64_t function_443e52(void) {
    // 0x443e52
    int64_t result; // 0x443e52
    return result;
}

// Address range: 0x443e58 - 0x444011
int64_t function_443e58(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2; // bp-8, 0x443e58
    int64_t result2; // 0x443e58
    bool v2; // 0x443e58
    if (*(char *)(a2 + 33) >= 135) {
        uint64_t v3 = result2 + 0xd948c401; // 0x443e65
        char v4 = __asm_insb((int16_t)(a3 & 0xff00 | (int64_t)*(char *)(a2 - 128))); // 0x443e6a
        *(char *)((v2 ? -4 : 4) + a1) = v4;
        char * v5 = (char *)(a2 + 0x23cf97); // 0x443e6b
        *v5 = *v5 & (char)(v3 / 256);
        return v3 & 0xffffffff;
    }
    int64_t v6 = result2 & -0xff01 | (int64_t)&g3; // 0x443e76
    if (a4 != 0) {
        int64_t result = __asm_wait(a1); // 0x443ea9
        *(int32_t *)a1 = (int32_t)a1 >> 25;
        char * v7 = (char *)(a3 + 98); // 0x443ead
        *v7 = *v7 & (char)v6;
        uint32_t v8 = (int32_t)a4 % 32; // 0x443eb5
        if (v8 != 0) {
            int64_t v9 = v1; // 0x443eb0
            *(int32_t *)v9 = (int32_t)v9 >> v8;
        }
        char * v10 = (char *)(result + 0x67af6a28); // 0x443eb7
        *v10 = *v10 | (char)result2;
        return result;
    }
    uint32_t v11 = *(int32_t *)result2; // 0x443ec9
    if (llvm_ctpop_i8((char)v11) % 2 == 0) {
        // 0x443ed0
        return result2;
    }
    char v12 = (int64_t)v11 ^ a6; // 0x443f42
    if (v12 == 0) {
        // 0x443ed0
        return result2;
    }
    int32_t v13 = *(int32_t *)(a2 - 0x71af9c7c); // 0x443f4b
    *(int32_t *)0xd9211d64 = (int32_t)a2;
    if (v11 != 1) {
        // 0x443f67
        return __asm_int1();
    }
    uint32_t v14 = v12 < 0 ? v13 : (int32_t)(int64_t)&v1; // 0x443f4b
    int64_t v15 = v2 ? -4 : 4; // 0x443f54
    int64_t v16 = v15 + 0xd9211d64; // 0x443f54
    int64_t v17 = v6 & 0xffffff1e & result2 + 0xfb357405; // 0x443f63
    int64_t result3 = v17 | 225; // 0x443f63
    *(int64_t *)((int64_t)v14 - 8) = v15 + a2;
    char v18 = a3 / 256; // 0x443fe3
    char v19 = *(char *)v16; // 0x443fe3
    int64_t v20 = 256 * (int64_t)(v18 - v19) | a3 & -0xff01; // 0x443fe3
    if (v19 < v18) {
        // 0x443f76
        __asm_out_136((int16_t)v20, (int32_t)result3);
        return result3;
    }
    int32_t * v21 = (int32_t *)v16; // 0x443fe7
    *v21 = *v21 & (int32_t)v20;
    __asm_out(8, (int32_t)result3);
    return v17 ^ 0x33a8a181;
}

// Address range: 0x44403d - 0x44403e
int64_t function_44403d(void) {
    // 0x44403d
    int64_t result; // 0x44403d
    return result;
}

// Address range: 0x44404d - 0x444062
int64_t function_44404d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44404d
    int64_t v1; // 0x44404d
    *(char *)a1 = (char)v1;
    bool v2; // 0x44404d
    if (v2) {
        function_44403d();
    }
    // 0x444055
    return __asm_sti();
}
