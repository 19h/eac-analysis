/*
 * Targeted RetDec C for native executable gap queue batch 1378.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3498d8-0x349ad8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x349ad8-0x349cd8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x349cd8-0x349ed8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x349ed8-0x34a0d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34a0d8-0x34a2d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34a2d8-0x34a4d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34a4d8-0x34a6d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b30b4-0x3b32b4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d78a7-0x3d7aa7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d7aa7-0x3d7ca7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d7ca7-0x3d7ea7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d7ea7-0x3d80a7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d80a7-0x3d82a7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d82a7-0x3d84a7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d84a7-0x3d86a7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d86a7-0x3d88a7 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_12362a88();
int64_t function_128449f();
int64_t function_20fea16c();
int64_t function_23c1ecf9();
int64_t function_2849c86a();
int64_t function_2eb5a106();
int64_t function_31bbf82();
int64_t function_3498d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_349985(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_349a12(void);
int64_t function_349a14(void);
int64_t function_349a23(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_349a61(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_349a9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_349ad3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_349b06(void);
int64_t function_349b30(void);
int64_t function_349b40(int64_t a1, int64_t a2, int64_t a3);
int64_t function_349b9c(void);
int64_t function_349bab(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_349bb1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_349c4a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_349c7f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_349c87(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_349cc4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_349d2a(int64_t a1);
int64_t function_349d5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_349df8(void);
int64_t function_349e48(int64_t a1);
int64_t function_349e67(void);
int64_t function_349e77(void);
int64_t function_349ea6(void);
int64_t function_349ed1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_349ffd(int64_t a1);
int64_t function_34a019(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34a037(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34a0ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34a13b(int64_t a1);
int64_t function_34a149(void);
int64_t function_34a1e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34a23a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34a2c2(int64_t a1, int64_t a2);
int64_t function_34a2f2(void);
int64_t function_34a32e(int64_t a1);
int64_t function_34a3b1(int64_t a1);
int64_t function_34a3e8(int64_t a1);
int64_t function_34a402(void);
int64_t function_34a440(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34a4c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34a4ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34a4f8(int64_t a1);
int64_t function_34a54d(void);
int64_t function_34a57f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34a5b0(int64_t a1);
int64_t function_34a5e0(int64_t a1);
int64_t function_34a629(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34a648(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b3067();
int64_t function_3b30b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b3119(void);
int64_t function_3b3136(void);
int64_t function_3b314e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b3190(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3b3254(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3d78a7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d78d0(void);
int64_t function_3d78fc(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3d793f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d7976(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d79a7(void);
int64_t function_3d79c0(void);
int64_t function_3d7a14(int64_t a1);
int64_t function_3d7a64(void);
int64_t function_3d7ac0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d7b69(void);
int64_t function_3d7bac(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d7bc9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d7c5d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3d7d05(int64_t a1);
int64_t function_3d7dfa(void);
int64_t function_3d7e01(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d7e2b(void);
int64_t function_3d7e31(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d7e4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d7e58(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d7eee(int64_t a1);
int64_t function_3d7fc5(int64_t a1);
int64_t function_3d7fd4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_3d80f8(int64_t a1, int64_t a2);
int64_t function_3d8134(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d8170(int64_t a1);
int64_t function_3d81ad(void);
int64_t function_3d823d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d82f4(int64_t a1, int64_t a2);
int64_t function_3d8348(int64_t a1, int64_t a2);
int64_t function_3d83bc(void);
int64_t function_3d8439(void);
int64_t function_3d8455(void);
int64_t function_3d8476(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d84bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d8516(void);
int64_t function_3d851f(void);
int64_t function_3d8584(void);
int64_t function_3d858e(void);
int64_t function_3d8593(void);
int64_t function_3d8594(int64_t a1);
int64_t function_3d85c2(void);
int64_t function_3d85d6(void);
int64_t function_3d85e4(void);
int64_t function_3d860e(int64_t a1);
int64_t function_3d8635(void);
int64_t function_3d865d(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_3d8684(void);
int64_t function_3d8689(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d8691(void);
int64_t function_3d8720(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d87a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d87bb(int64_t a1);
int64_t function_3d8824(int64_t a1);
int64_t function_3d8852(void);
int64_t function_3d886f(void);
int64_t function_3d888e(void);
int64_t function_560e5de1();
int64_t function_5ce6d19e();
int64_t function_6b0d8749();
int64_t function_ffffffff969f6964();
int64_t function_ffffffffc1e4cb10();
int64_t function_ffffffffd003f554();
int64_t function_ffffffffe8517e4c();
int64_t function_fffffffff025768a();
int64_t function_fffffffff4052761();
int64_t function_fffffffff4deff15();
int64_t unknown_109d643b();
int64_t unknown_111387c8();
int64_t unknown_137239fa();
int64_t unknown_17a7a1c();
int64_t unknown_1b58dac0();
int64_t unknown_1fc9dc0c();
int64_t unknown_2fb25599();
int64_t unknown_30b0ab4f();
int64_t unknown_384e26ca();
int64_t unknown_38f0f126();
int64_t unknown_3a4bfc43();
int64_t unknown_3d368e2f();
int64_t unknown_3d3f6912();
int64_t unknown_48061e7c();
int64_t unknown_482a798a();
int64_t unknown_483d0061();
int64_t unknown_4d854366();
int64_t unknown_543ca99b();
int64_t unknown_683ab0ac();
int64_t unknown_7b35d6a8();
int64_t unknown_bf15b44();
int64_t unknown_c46baa7();
int64_t unknown_ce1925e();
int64_t unknown_f43643a();
int64_t unknown_ffffffff885e103e();
int64_t unknown_ffffffff89ff8a9f();
int64_t unknown_ffffffff90d0902f();
int64_t unknown_ffffffff91417147();
int64_t unknown_ffffffff9f3686e3();
int64_t unknown_ffffffffa3f26dca();
int64_t unknown_ffffffffa6bd32c7();
int64_t unknown_ffffffffac8712f1();
int64_t unknown_ffffffffb1fdb53a();
int64_t unknown_ffffffffb79bea3b();
int64_t unknown_ffffffffb8410c45();
int64_t unknown_ffffffffc04827bb();
int64_t unknown_ffffffffc4062e43();
int64_t unknown_ffffffffc493a5c3();
int64_t unknown_ffffffffca8b2952();
int64_t unknown_ffffffffefbef610();
int64_t unknown_fffffffff097d93c();

// Address range: 0x3498d8 - 0x3498f4
int64_t function_3498d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3498d8
    int64_t v1; // 0x3498d8
    int64_t v2 = v1;
    bool v3; // 0x3498d8
    *(char *)v2 = (char)v2 - (char)v1 + (char)v3;
    int64_t v4 = __asm_hlt(a1); // 0x3498da
    char * v5 = (char *)(v1 - 89); // 0x3498de
    *v5 = *v5 + (char)((int32_t)v4 / 256);
    *(char *)a4 = -72;
    unknown_ffffffffac8712f1();
    *(int32_t *)(a2 - 60) = (int32_t)a3;
    return __asm_wait();
}

// Address range: 0x349985 - 0x349a0c
int64_t function_349985(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x349985
    int64_t result; // 0x349985
    *(char *)(a3 + 0x3884c540) = (char)(result / 256);
    if (a4 == 0) {
        // 0x3499f9
        int64_t v1; // 0x349985
        __asm_outsb((int16_t)a3, *(char *)&v1);
        *(int32_t *)-0x24e385028d01fe18 = (int32_t)result;
        return result;
    }
    // 0x349995
    unknown_543ca99b();
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    *(int32_t *)(result + 0x6fda01e8) = (int32_t)a4;
    int64_t v2 = unknown_7b35d6a8(); // 0x3499a2
    int64_t v3 = (int32_t)result < 0x9e9e6f01 ? 0x21d0a532 : 0x21d0a531; // 0x3499a9
    int64_t result2 = (v2 & 0xffffff00 | (int64_t)*(char *)a5) + v3 & 0xffffffff; // 0x3499a9
    int32_t * v4 = (int32_t *)(result + 0x7990a875); // 0x3499b0
    int32_t v5 = a1; // 0x3499b0
    *v4 = *v4 + v5;
    int32_t * v6 = (int32_t *)(result2 - 0x4cca97b9); // 0x3499bd
    *v6 = *v6 + v5;
    return result2;
}

// Address range: 0x349a12 - 0x349a13
int64_t function_349a12(void) {
    // 0x349a12
    int64_t result; // 0x349a12
    return result;
}

// Address range: 0x349a14 - 0x349a19
int64_t function_349a14(void) {
    // 0x349a14
    return function_fffffffff4deff15();
}

// Address range: 0x349a23 - 0x349a61
int64_t function_349a23(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x349a23
    int64_t v1; // 0x349a23
    int32_t * v2 = (int32_t *)(v1 - 0x57fe1721); // 0x349a25
    *v2 = *v2 | (int32_t)a2;
    float80_t v3; // 0x349a23
    *(float64_t *)(a3 + 56) = (float64_t)v3;
    unknown_ffffffffb79bea3b();
    char * v4 = (char *)(__asm_wait() + 0x16057607); // 0x349a42
    *v4 = *v4 | -81;
    int64_t v5 = unknown_30b0ab4f(); // 0x349a49
    return (v5 + a4 / 256) % 256 | v5 & -256;
}

// Address range: 0x349a61 - 0x349a72
int64_t function_349a61(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x349a61
    int64_t v1; // 0x349a61
    bool v2; // 0x349a61
    if (v2 || v2) {
        v1 = function_349a12();
    }
    // 0x349a68
    __asm_out_133((int16_t)a3, (char)v1);
    return a3 & 0xffffffff;
}

// Address range: 0x349a9a - 0x349ad1
int64_t function_349a9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x349a9a
    int64_t v1; // 0x349a9a
    int32_t * v2 = (int32_t *)(v1 - 0x13f67d03); // 0x349a9a
    *v2 = *v2 - 125;
    unknown_683ab0ac();
    int32_t v3 = __asm_in(-33); // 0x349aae
    char * v4 = (char *)(a1 + 1); // 0x349ab0
    *v4 = *v4 | (char)v3;
    char v5 = *(char *)(a2 - 24); // 0x349ab3
    uint32_t v6 = *(int32_t *)0xff496843; // 0x349ab6
    uint32_t v7 = v6 + (int32_t)a2; // 0x349ab6
    *(int32_t *)0xff496843 = v7;
    char * v8 = (char *)((int64_t)v3 - 0x6dca97f9); // 0x349abe
    *v8 = (v5 | (char)a4) - 60 + *v8 + (char)(v7 < v6);
    uint64_t result = unknown_384e26ca(); // 0x349ac4
    char * v9 = (char *)(result + 5); // 0x349ac9
    *v9 = *v9 + (char)(result / 256);
    return result;
}

// Address range: 0x349ad3 - 0x349ad4
int64_t function_349ad3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x349ad3
    return a4 & 0xffffffff;
}

// Address range: 0x349b06 - 0x349b09
int64_t function_349b06(void) {
    // 0x349b06
    int64_t result; // 0x349b06
    return result;
}

// Address range: 0x349b30 - 0x349b31
int64_t function_349b30(void) {
    // 0x349b30
    int64_t result; // 0x349b30
    return result;
}

// Address range: 0x349b40 - 0x349b65
int64_t function_349b40(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = (int32_t)a2;
    *(int32_t *)a2 = v1 / 256 | 0x1000000 * v1;
    int64_t v2; // 0x349b40
    int64_t v3 = 2 * v2; // 0x349b4c
    int32_t v4 = a1; // 0x349b4e
    *(int32_t *)-0x17a047ab = *(int32_t *)-0x17a047ab + v4;
    int32_t * v5 = (int32_t *)(a3 + 0x7c1310d1); // 0x349b54
    *v5 = *v5 + v4;
    unsigned char v6 = *(char *)(v2 + 67); // 0x349b5a
    int32_t v7 = *(int32_t *)(v3 & 0xffffffff); // 0x349b5d
    uint32_t v8 = v7 + (int32_t)v3 + (int32_t)(v6 > (char)(v2 / 256)); // 0x349b5d
    char v9 = *(char *)(v2 + 112); // 0x349b62
    return 256 * (int64_t)((char)(v8 / 256) - v9) | (int64_t)(v8 & -0xff01);
}

// Address range: 0x349b9c - 0x349b9f
int64_t function_349b9c(void) {
    // 0x349b9c
    int64_t result; // 0x349b9c
    return result;
}

// Address range: 0x349bab - 0x349bb0
int64_t function_349bab(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x349bab
    int64_t v1; // 0x349bab
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x349bab
    if (v3 != 0) {
        *(int32_t *)v2 = (int32_t)v2 << v3;
    }
    return function_349b30();
}

// Address range: 0x349bb1 - 0x349c23
int64_t function_349bb1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x349bb1
    int64_t v1; // 0x349bb1
    *(int32_t *)a4 = 2 * (int32_t)v1;
    unknown_1b58dac0();
    int64_t result = unknown_ffffffffc493a5c3(); // 0x349bbd
    char * v2 = (char *)(v1 - 0x650178ff); // 0x349bc2
    *v2 = *v2 + (char)v1;
    *(char *)-0x17ce9fdb9fe1704 = (char)result;
    int32_t v3 = *(int32_t *)0x7a44adad; // 0x349bdf
    int32_t v4 = v1; // 0x349bdf
    int32_t v5 = v3 + v4; // 0x349bdf
    *(int32_t *)0x7a44adad = v5;
    if (v5 < 0 == ((v5 ^ v3) & (v5 ^ v4)) < 0) {
        // 0x349be7
        return result;
    }
    int64_t v6 = 0x100000000 * v1 >> 32; // 0x349bb1
    *(char *)a1 = __asm_insb((int16_t)(v6 * v6 / 0x100000000));
    return __asm_wait();
}

// Address range: 0x349c4a - 0x349c5a
int64_t function_349c4a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x349c4a
    int64_t v1; // 0x349c4a
    bool v2; // 0x349c4a
    uint64_t v3 = v1 - (v2 ? 0xfac301e9 : 0xfac301e8) & 0xffff00ff | (int64_t)&g7; // 0x349c50
    return v3 % 256 * (int64_t)*(char *)(a3 - 107) | v3 & -0x10000;
}

// Address range: 0x349c7f - 0x349c84
int64_t function_349c7f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x349c7f
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x349c7f
    return result;
}

// Address range: 0x349c87 - 0x349c91
int64_t function_349c87(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 114); // 0x349c89
    int32_t v2 = *v1; // 0x349c89
    int64_t result; // 0x349c87
    bool v3; // 0x349c87
    *v1 = v2 + (int32_t)(256 * (result + a4 / 256 + (int64_t)v3) & 0xff00 | a4 & 0xffff00ff);
    int64_t v4; // 0x349c87
    *(char *)a3 = *(char *)&v4 | (char)result;
    return result;
}

// Address range: 0x349cc4 - 0x349ccf
int64_t function_349cc4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x349cc4
    int64_t v1; // 0x349cc4
    int64_t v2 = v1;
    int64_t v3 = unknown_ffffffffa3f26dca(a1, a2, a3); // 0x349cc4
    *(int32_t *)v2 = (int32_t)(v2 | a3);
    return v3 & -117;
}

// Address range: 0x349d2a - 0x349d5b
int64_t function_349d2a(int64_t a1) {
    // 0x349d2a
    *(int32_t *)0x111a3237 = *(int32_t *)0x111a3237 + (int32_t)a1;
    unknown_fffffffff097d93c();
    bool v1; // 0x349d2a
    unknown_bf15b44((v1 ? -1 : 1) + a1);
    return 0xe801e863;
}

// Address range: 0x349d5b - 0x349dd9
int64_t function_349d5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x349d5b
    int64_t v1; // 0x349d5b
    char v2 = v1 / 256; // 0x349d5b
    bool v3; // 0x349d5b
    *(char *)a2 = (char)v1 - v2 + (char)v3;
    *(char *)a1 = (char)v1;
    *(char *)-0x4732fb92 = *(char *)-0x4732fb92 + v2;
    char * v4 = (char *)(v1 + 4 * a4); // 0x349d6d
    *v4 = *v4 + (char)a3;
    int64_t v5; // 0x349d5b
    *(int32_t *)a6 = *(int32_t *)&v5;
    int64_t v6 = (a5 & (int64_t)&g1) != 0 ? -4 : 4; // 0x349d7a
    int64_t result = ((a5 & (int64_t)&g1) != 0 ? 0xfffffffc : 4) + a6 & 0xffffff00 | 9; // 0x349d87
    if (llvm_ctpop_i8(9 - *(char *)((v1 + 0x61b7ad89 & 0xffffffff) + v6)) % 2 != 0) {
        // 0x349d8e
        return result;
    }
    char * v7 = (char *)result; // 0x349dd2
    *v7 = *v7 + 9;
    return result;
}

// Address range: 0x349df8 - 0x349dfa
int64_t function_349df8(void) {
    // 0x349df8
    int64_t result; // 0x349df8
    return result;
}

// Address range: 0x349e48 - 0x349e4c
int64_t function_349e48(int64_t a1) {
    // 0x349e48
    int64_t v1; // 0x349e48
    uint64_t result = v1;
    *(char *)result = (char)(result / 256 ^ result);
    return result;
}

// Address range: 0x349e67 - 0x349e6a
int64_t function_349e67(void) {
    // 0x349e67
    int64_t result; // 0x349e67
    return result;
}

// Address range: 0x349e77 - 0x349e78
int64_t function_349e77(void) {
    // 0x349e77
    int64_t result; // 0x349e77
    return result;
}

// Address range: 0x349ea6 - 0x349ea7
int64_t function_349ea6(void) {
    // 0x349ea6
    int64_t result; // 0x349ea6
    return result;
}

// Address range: 0x349ed1 - 0x349efa
int64_t function_349ed1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 0x4cec03ab); // 0x349ed1
    *v1 = *v1 + (int32_t)a3;
    int64_t v2 = unknown_ffffffff9f3686e3(*(int32_t *)(a3 - 42) & (int32_t)a1); // 0x349edc
    int64_t v3; // 0x349ed1
    int64_t result = v2 & -256 | (int64_t)*(char *)&v3; // 0x349eef
    int64_t v4; // 0x349ed1
    if (*(char *)(8 * v4 + 0x1e8e1f4 + v4) != (char)a3) {
        // 0x349ef5
        result = function_349ea6();
    }
    // 0x349ef1
    return result;
}

// Address range: 0x349ffd - 0x349ffe
int64_t function_349ffd(int64_t a1) {
    // 0x349ffd
    int64_t result; // 0x349ffd
    return result;
}

// Address range: 0x34a019 - 0x34a01c
int64_t function_34a019(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x34a019
    int64_t result; // 0x34a019
    return result;
}

// Address range: 0x34a037 - 0x34a06b
int64_t function_34a037(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 - 0x64854d53); // 0x34a037
    *v1 = *v1 + (int32_t)a1;
    unknown_3a4bfc43();
    int64_t v2; // 0x34a037
    char * v3 = (char *)((2 * a4 & 0x1fffffffe) - 0x68125e18 + v2); // 0x34a045
    *v3 = *v3 + (char)v2;
    unknown_ffffffffca8b2952();
    char * v4 = (char *)(4 * a1 - 88 + v2); // 0x34a054
    *v4 = *v4 + (char)(v2 / 256);
    int32_t * v5 = (int32_t *)a5; // 0x34a058
    *v5 = *v5 / 0x1000000;
    int64_t result = unknown_483d0061(); // 0x34a05b
    int32_t * v6 = (int32_t *)(v2 + 0x35ec2a8d); // 0x34a060
    *v6 = *v6 - (int32_t)v2;
    *(int32_t *)a1 = __asm_insd((int16_t)a5);
    return result;
}

// Address range: 0x34a0ef - 0x34a104
int64_t function_34a0ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)0x712715f9; // 0x34a0f2
    int64_t v2; // 0x34a0ef
    *(char *)0x712715f9 = v1 + (char)((uint64_t)v2 / 256);
    return function_20fea16c();
}

// Address range: 0x34a13b - 0x34a142
int64_t function_34a13b(int64_t a1) {
    char v1 = *(char *)0x1bf5f042; // 0x34a13b
    int64_t result; // 0x34a13b
    *(char *)0x1bf5f042 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x34a149 - 0x34a14e
int64_t function_34a149(void) {
    // 0x34a149
    return function_12362a88();
}

// Address range: 0x34a1e4 - 0x34a1ee
int64_t function_34a1e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34a1e4
    int64_t result; // 0x34a1e4
    *(int32_t *)a4 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x34a23a - 0x34a241
int64_t function_34a23a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34a23a
    int64_t v1; // 0x34a23a
    *(char *)a1 = (char)v1;
    int64_t result = a3 & 0xffffffff; // 0x34a23b
    *(int32_t *)result = (int32_t)a3;
    return result;
}

// Address range: 0x34a2c2 - 0x34a2c8
int64_t function_34a2c2(int64_t a1, int64_t a2) {
    // 0x34a2c2
    int64_t result; // 0x34a2c2
    return result;
}

// Address range: 0x34a2f2 - 0x34a2f5
int64_t function_34a2f2(void) {
    // 0x34a2f2
    int64_t result; // 0x34a2f2
    return result;
}

// Address range: 0x34a32e - 0x34a331
int64_t function_34a32e(int64_t a1) {
    // 0x34a32e
    int64_t result; // 0x34a32e
    return result;
}

// Address range: 0x34a3b1 - 0x34a3b2
int64_t function_34a3b1(int64_t a1) {
    // 0x34a3b1
    int64_t result; // 0x34a3b1
    return result;
}

// Address range: 0x34a3e8 - 0x34a3e9
int64_t function_34a3e8(int64_t a1) {
    // 0x34a3e8
    int64_t result; // 0x34a3e8
    return result;
}

// Address range: 0x34a402 - 0x34a414
int64_t function_34a402(void) {
    // 0x34a402
    int64_t v1; // 0x34a402
    __asm_hlt(v1);
    return function_2849c86a();
}

// Address range: 0x34a440 - 0x34a44e
int64_t function_34a440(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34a440
    return function_ffffffff969f6964();
}

// Address range: 0x34a4c7 - 0x34a4cf
int64_t function_34a4c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34a4c7
    int64_t v1; // 0x34a4c7
    int32_t * v2 = (int32_t *)(v1 + a4); // 0x34a4c7
    uint32_t v3 = *v2; // 0x34a4c7
    uint32_t v4 = v3 + (int32_t)a1; // 0x34a4c7
    *v2 = v4;
    return 2 * v1 & 0xfffffffe | (int64_t)(v4 < v3);
}

// Address range: 0x34a4ee - 0x34a4f8
int64_t function_34a4ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34a4ee
    int64_t v1; // 0x34a4ee
    *(char *)a4 = (char)v1 + (char)((uint64_t)v1 / 256);
    return v1 + 0xfc01e80e & 0xffffffff;
}

// Address range: 0x34a4f8 - 0x34a506
int64_t function_34a4f8(int64_t a1) {
    // 0x34a4f8
    int64_t result; // 0x34a4f8
    return result;
}

// Address range: 0x34a54d - 0x34a54e
int64_t function_34a54d(void) {
    // 0x34a54d
    int64_t result; // 0x34a54d
    return result;
}

// Address range: 0x34a57f - 0x34a599
int64_t function_34a57f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34a57f
    int64_t v1; // 0x34a57f
    int32_t * v2 = (int32_t *)(v1 - 1); // 0x34a581
    int32_t v3 = v1; // 0x34a581
    *v2 = *v2 + v3;
    int64_t v4 = unknown_482a798a(); // 0x34a584
    int32_t * v5 = (int32_t *)(v4 + 10); // 0x34a589
    *v5 = *v5 + v3;
    int32_t * v6 = (int32_t *)(v4 - 81); // 0x34a590
    *v6 = *v6 + (int32_t)a2;
    return unknown_2fb25599();
}

// Address range: 0x34a5b0 - 0x34a5b3
int64_t function_34a5b0(int64_t a1) {
    // 0x34a5b0
    int64_t result; // 0x34a5b0
    return result;
}

// Address range: 0x34a5e0 - 0x34a5e3
int64_t function_34a5e0(int64_t a1) {
    // 0x34a5e0
    int64_t v1; // 0x34a5e0
    return function_34a648(v1, v1, v1);
}

// Address range: 0x34a629 - 0x34a648
int64_t function_34a629(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34a629
    int64_t v1; // 0x34a629
    int64_t v2 = unknown_3d368e2f() - (v1 + a2); // 0x34a630
    int64_t result = v2 & 0xffffffff; // 0x34a630
    int32_t * v3 = (int32_t *)(result - 0x1a17efc5); // 0x34a632
    *v3 = *v3 + (int32_t)v2;
    return result;
}

// Address range: 0x34a648 - 0x34a666
int64_t function_34a648(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34a648
    int64_t v1; // 0x34a648
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + a3); // 0x34a64f
    *v3 = *v3 + (int32_t)a2 + (int32_t)((int32_t)v2 < 0xcfb8f301);
    return (v2 + 70) % 256 | v2 & -256;
}

// Address range: 0x3b30b4 - 0x3b3104
int64_t function_3b30b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b30b4
    int64_t result; // 0x3b30b4
    int32_t v1 = result; // 0x3b30b4
    __asm_out(-116, v1);
    bool v2; // 0x3b30b4
    if (v2) {
        // 0x3b3121
        return result;
    }
    uint32_t v3 = v1 >> 31; // 0x3b30b8
    int64_t result2 = v3; // 0x3b30b8
    uint32_t v4 = 0x10000 * v1 >> 16 & -0xff01 | 256 * (16 * (int32_t)v2 | 128 * (int32_t)v2 | (int32_t)v2 | 4 * (int32_t)v2) | 512; // 0x3b30ba
    char * v5 = (char *)(result2 + 0x52013d8e); // 0x3b30c5
    char v6 = *v5 + (char)(v4 / 256); // 0x3b30c5
    *v5 = v6;
    int64_t v7 = (int64_t)v4 - 1; // 0x3b30cb
    if (v7 != 0 && v6 != 0) {
        function_3b3067();
    }
    // 0x3b30cd
    int64_t v8; // 0x3b30b4
    *(int32_t *)(v8 - 0x2563b4b) = (int32_t)v7;
    *(int64_t *)result2 = a1;
    *(char *)v8 = *(char *)&v8 - (char)v3;
    char * v9 = (char *)(2 * result2); // 0x3b30f3
    *v9 = *v9 + 80;
    __asm_outsb((int16_t)v3, *(char *)0x8a91b48d);
    *(char *)-0x39031801 = *(char *)-0x39031801 + (char)(v8 / 256);
    return result2;
}

// Address range: 0x3b3119 - 0x3b311e
int64_t function_3b3119(void) {
    // 0x3b3119
    return function_31bbf82();
}

// Address range: 0x3b3136 - 0x3b3137
int64_t function_3b3136(void) {
    // 0x3b3136
    int64_t result; // 0x3b3136
    return result;
}

// Address range: 0x3b314e - 0x3b3190
int64_t function_3b314e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x3b314e
    int64_t result = v2 & -256 | (int64_t)*(char *)-0x5e31bf0d6cfec2ac; // 0x3b3157
    bool v3; // 0x3b314e
    if (v3) {
        int32_t * v4 = (int32_t *)(a3 + 0x13d00b3); // 0x3b3164
        uint32_t v5 = *v4; // 0x3b3164
        *v4 = v5 / 0x20000000 | 8 * v5;
        int16_t v6 = a3; // 0x3b3170
        __asm_outsd(v6, *(int32_t *)&v1);
        int64_t v7 = ((int64_t)__asm_in_134(v6) | a4) & -256 | (int64_t)__asm_in_135(37); // 0x3b317c
        int64_t v8 = (int32_t)v7 < 0x8540e801 ? 0x3bd1091d : 0x3bd1091c; // 0x3b3183
        result = v7 - v8 & 0x23cd247c | 0xdc32db83;
    }
    // 0x3b318d
    return result;
}

// Address range: 0x3b3190 - 0x3b321d
int64_t function_3b3190(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = a1;
    bool v3; // 0x3b3190
    if (!v3 && !v3) {
        function_3b3136();
    }
    // 0x3b3198
    int64_t v4; // 0x3b3190
    char * v5 = (char *)(v4 - 0x3bf62600); // 0x3b3199
    *v5 = (char)v3 + (char)(a3 / 256) + *v5;
    uint64_t v6 = v1;
    *(char *)v6 = *(char *)&v1 | (char)(v6 / 256);
    int64_t result = unknown_c46baa7(); // 0x3b31a1
    *(char *)v2 = __asm_insb((int16_t)a3);
    uint32_t v7 = *(int32_t *)-0x5bc2e64c; // 0x3b31ad
    uint32_t v8 = v7 + (int32_t)v2; // 0x3b31ad
    *(int32_t *)-0x5bc2e64c = v8;
    __asm_out(69, (int32_t)result);
    if (v8 < v7 || v8 == 0) {
        char * v9 = (char *)unknown_137239fa(); // 0x3b31f9
        *v9 = *v9 + (char)v1;
        *(int64_t *)(v4 - result & 0xffffffff) = v2;
        int64_t v10 = unknown_ffffffffefbef610(); // 0x3b320a
        int64_t v11 = v2;
        *(int32_t *)v11 = *(int32_t *)&v2 + (int32_t)v11;
        return (v10 & 0xffffffc0) + 0xe851aa04 & 0xffffffc4;
    }
    // 0x3b31b9
    return result;
}

// Address range: 0x3b3254 - 0x3b3268
int64_t function_3b3254(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3b3254
    int64_t v1; // 0x3b3254
    uint64_t v2 = v1 + 24; // 0x3b3254
    int64_t v3 = v1 & -256; // 0x3b3254
    int32_t * v4 = (int32_t *)(v1 + 0x3bc064f6); // 0x3b3256
    *v4 = *v4 + (int32_t)a4;
    char * v5 = (char *)((v2 % 256 | v3) + 0x48c6de00); // 0x3b325c
    *v5 = *v5 + (char)v2;
    int32_t * v6 = (int32_t *)(a3 + 1); // 0x3b3264
    *v6 = *v6 + (int32_t)v1;
    return (v2 + a4 / 256) % 256 | v3;
}

// Address range: 0x3d78a7 - 0x3d78b9
int64_t function_3d78a7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d78a7
    bool v1; // 0x3d78a7
    *(int32_t *)((v1 ? -4 : 4) + a1) = __asm_insd((int16_t)a3);
    uint64_t result = __asm_iretd(); // 0x3d78b0
    int64_t v2; // 0x3d78a7
    int64_t v3; // 0x3d78a7
    *(int32_t *)a3 = *(int32_t *)&v2 | (int32_t)v3;
    char * v4 = (char *)(v3 + 61 + 2 * result); // 0x3d78b3
    *v4 = *v4 + (char)(result / 256);
    return result;
}

// Address range: 0x3d78d0 - 0x3d78d6
int64_t function_3d78d0(void) {
    // 0x3d78d0
    return function_fffffffff025768a();
}

// Address range: 0x3d78fc - 0x3d793f
int64_t function_3d78fc(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3d78fc
    int64_t v1; // 0x3d78fc
    int64_t v2 = v1 + a4; // 0x3d78fc
    *(char *)a2 = (char)v1 + (char)(a3 / 256);
    int64_t v3; // 0x3d78fc
    *(int32_t *)a1 = *(int32_t *)&v3 - (int32_t)v1;
    int64_t v4; // 0x3d78fc
    *(int32_t *)v4 = *(int32_t *)&v4 + (int32_t)v2;
    __asm_out_136(-35, (char)v4);
    int64_t v5 = v2 | v1;
    int32_t v6 = v5; // 0x3d790f
    unsigned char v7 = llvm_ctpop_i8((char)v5); // 0x3d790f
    bool v8; // 0x3d78fc
    *(int64_t *)0x80013cf8 = 128 * (int64_t)(v6 < 0) | 64 * (int64_t)(v6 == 0) | 0x4000 * (int64_t)v8 | 4 * (int64_t)(v7 % 2 == 0) | 1024 * (int64_t)v8 | 512 * (int64_t)v8 | 256 * (int64_t)v8 | 2;
    __asm_int3();
    __asm_iretd();
    return unknown_ffffffff885e103e();
}

// Address range: 0x3d793f - 0x3d795a
int64_t function_3d793f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d793f
    int64_t result; // 0x3d793f
    return result;
}

// Address range: 0x3d7976 - 0x3d7990
int64_t function_3d7976(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    char * v3 = (char *)(a1 - 39); // 0x3d7976
    int64_t v4; // 0x3d7976
    *v3 = *v3 - (char)((uint64_t)v4 / 256);
    uint32_t v5 = (int32_t)a4 % 32; // 0x3d7979
    int64_t result; // 0x3d7976
    if (v5 != 0) {
        uint32_t v6 = *(int32_t *)&result; // 0x3d7979
        *(int32_t *)result = v6 >> 32 - v5 | v6 << v5;
    }
    *(char *)v1 = *(char *)&v1 + (char)result;
    *(int32_t *)a1 = *(int32_t *)&v2;
    unsigned char v7 = *(char *)-0x43242622; // 0x3d797e
    *(char *)-0x43242622 = v7 / 128 | 2 * v7;
    return result;
}

// Address range: 0x3d79a7 - 0x3d79ac
int64_t function_3d79a7(void) {
    // 0x3d79a7
    return function_560e5de1();
}

// Address range: 0x3d79c0 - 0x3d79c1
int64_t function_3d79c0(void) {
    // 0x3d79c0
    int64_t result; // 0x3d79c0
    return result;
}

// Address range: 0x3d7a14 - 0x3d7a21
int64_t function_3d7a14(int64_t a1) {
    // 0x3d7a14
    int64_t v1; // 0x3d7a14
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x3d7a14
    __asm_hlt((v2 ? -4 : 4) + a1);
    return unknown_17a7a1c();
}

// Address range: 0x3d7a64 - 0x3d7a65
int64_t function_3d7a64(void) {
    // 0x3d7a64
    int64_t result; // 0x3d7a64
    return result;
}

// Address range: 0x3d7ac0 - 0x3d7b67
int64_t function_3d7ac0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    float80_t v2; // 0x3d7ac0
    *(int32_t *)(a1 + 44) = (int32_t)v2;
    int64_t v3; // 0x3d7ac0
    if ((int32_t)v3 < 0x73fa0002) {
        function_3d7a64();
    }
    int64_t v4 = 0; // 0x3d7ac0
    char * v5 = (char *)(v3 + 0x70046f07); // 0x3d7acc
    *v5 = *v5 | (char)(v1 / 256);
    int32_t * v6 = (int32_t *)(8 * v3 + 56 + v1); // 0x3d7ad2
    *v6 = *v6 + (int32_t)v1;
    char v7 = *(char *)0x14c59de2; // 0x3d7adb
    char v8 = v3 / 256; // 0x3d7adb
    char v9 = v7 + v8; // 0x3d7adb
    *(char *)0x14c59de2 = v9;
    if (v9 < 0 == ((v9 ^ v7) & (v9 ^ v8)) < 0 == (v9 != 0)) {
        // 0x3d7b4b
        *(int64_t *)(v4 - 8) = unknown_ffffffffa6bd32c7();
        int64_t result = a3 & 0xffffffff; // 0x3d7b52
        *(char *)-0x59c3d5a6 = *(char *)-0x59c3d5a6 + v8;
        *(char *)result = 2 * (char)a3;
        char * v10 = (char *)(a2 + 5); // 0x3d7b5b
        *v10 = *v10 + v8;
        return result;
    }
    int32_t * v11 = (int32_t *)(2 * a3 + 0x4600068); // 0x3d7ae3
    *v11 = *v11 + (int32_t)a2;
    char v12 = *(char *)&v1 | (char)(v1 / 256); // 0x3d7aea
    unsigned char v13 = llvm_ctpop_i8(v12); // 0x3d7aea
    *(char *)v1 = v12;
    if (v13 % 2 != 0) {
        // 0x3d7b5f
        *(int64_t *)v4 = a5;
        return 0xc78101e8;
    }
    // 0x3d7af0
    *(char *)0x61d109f8 = *(char *)0x61d109f8 + (char)v3;
    *(char *)0xb3f5cfdeccd949 = -24;
    return function_ffffffffc1e4cb10();
}

// Address range: 0x3d7b69 - 0x3d7b6a
int64_t function_3d7b69(void) {
    // 0x3d7b69
    int64_t result; // 0x3d7b69
    return result;
}

// Address range: 0x3d7bac - 0x3d7bc6
int64_t function_3d7bac(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d7bac
    int64_t v1; // 0x3d7bac
    *(int32_t *)0x3aae7700b36a3ba3 = (int32_t)v1;
    return function_fffffffff4052761();
}

// Address range: 0x3d7bc9 - 0x3d7c5a
int64_t function_3d7bc9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d7bc9
    if (a4 == 1) {
        int32_t v1 = __asm_in(-122); // 0x3d7bda
        char * v2 = (char *)(a2 + 48); // 0x3d7bdc
        *v2 = *v2 & (char)a3;
        return v1 - 0x70fe17b8 ^ 14;
    }
    int32_t v3 = a2;
    int16_t v4 = a3; // 0x3d7c33
    __asm_outsb(v4, (char)a2);
    unknown_f43643a();
    __asm_outsd(v4, v3);
    unknown_ffffffffb8410c45();
    int64_t v5; // 0x3d7bc9
    int32_t * v6 = (int32_t *)((v5 & 0xffffffff) - 5); // 0x3d7c56
    *v6 = *v6 + v3;
    return 0x148901e8;
}

// Address range: 0x3d7c5d - 0x3d7d04
int64_t function_3d7c5d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x3d7c5d
    int64_t v1; // 0x3d7c5d
    int64_t v2 = v1;
    bool v3; // 0x3d7c5d
    if (v3) {
        int64_t result = v2 - 256 * v1 & 0xff00 | v2 & 0xffff00ff; // 0x3d7cc8
        char * v4 = (char *)(result + 46); // 0x3d7cca
        *v4 = *v4 | (char)(a3 / 256);
        return result;
    }
    // 0x3d7c5f
    return function_ffffffffe8517e4c();
}

// Address range: 0x3d7d05 - 0x3d7d06
int64_t function_3d7d05(int64_t a1) {
    // 0x3d7d05
    int64_t result; // 0x3d7d05
    return result;
}

// Address range: 0x3d7dfa - 0x3d7dfb
int64_t function_3d7dfa(void) {
    // 0x3d7dfa
    int64_t result; // 0x3d7dfa
    return result;
}

// Address range: 0x3d7e01 - 0x3d7e09
int64_t function_3d7e01(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3d7e01
    int64_t result; // 0x3d7e01
    *(int32_t *)a3 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x3d7e2b - 0x3d7e2f
int64_t function_3d7e2b(void) {
    // 0x3d7e2b
    int64_t v1; // 0x3d7e2b
    return (uint64_t)v1 / 2 % 0x80000000;
}

// Address range: 0x3d7e31 - 0x3d7e4e
int64_t function_3d7e31(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d7e31
    *(char *)a4 = -1;
    int64_t v1 = unknown_109d643b(); // 0x3d7e34
    int64_t v2; // 0x3d7e31
    int64_t v3; // 0x3d7e31
    *(char *)a2 = *(char *)&v2 | (char)v3;
    int32_t * v4 = (int32_t *)(a3 + 0x231c0474); // 0x3d7e41
    *v4 = *v4 + (int32_t)v3;
    int64_t result = v1; // 0x3d7e49
    if ((int32_t)a3 != -(int32_t)v3) {
        result = function_3d7dfa();
    }
    // 0x3d7e4b
    return result;
}

// Address range: 0x3d7e4e - 0x3d7e57
int64_t function_3d7e4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d7e4e
    int64_t v1; // 0x3d7e4e
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return function_5ce6d19e();
}

// Address range: 0x3d7e58 - 0x3d7e78
int64_t function_3d7e58(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ce1925e(); // 0x3d7e58
    uint64_t v1 = a4 - 1; // 0x3d7e5d
    bool v2; // 0x3d7e58
    if (v1 == 0 || v2) {
        // 0x3d7e5f
        return result + 0xe8d489c4 & 0xffffffff;
    }
    // 0x3d7e67
    *(char *)0x1e8cf3b55b60f99 = (char)result;
    char * v3 = (char *)(result + 118); // 0x3d7e70
    *v3 = *v3 ^ (char)(v1 / 256);
    return result;
}

// Address range: 0x3d7eee - 0x3d7eef
int64_t function_3d7eee(int64_t a1) {
    // 0x3d7eee
    int64_t result; // 0x3d7eee
    return result;
}

// Address range: 0x3d7fc5 - 0x3d7fc7
int64_t function_3d7fc5(int64_t a1) {
    // 0x3d7fc5
    int64_t result; // 0x3d7fc5
    return result;
}

// Address range: 0x3d7fd4 - 0x3d80f7
int64_t function_3d7fd4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t result; // 0x3d7fd4
    int64_t v3; // 0x3d7fd4
    // 0x3d80a3
    *(int64_t *)a5 = a5;
    __asm_outsb((int16_t)v1, *(char *)&v2);
    *(char *)a1 = (char)v2;
    *(char *)-0x1f6aef4a = *(char *)-0x1f6aef4a + (char)v3;
    unsigned char v4 = *(char *)&v1; // 0x3d80b6
    unsigned char v5 = *(char *)((result & 0xffffffff) + 54); // 0x3d80b8
    unsigned char v6 = *(char *)&result; // 0x3d80bb
    uint64_t v7 = v1; // 0x3d80bc
    char v8 = *(char *)(v3 + 0x13785b00); // 0x3d80bc
    int64_t v9 = 256 * (int64_t)(v8 + (char)(v4 > (char)a4) + (char)(v7 / 256)) | v7 & -0xff01; // 0x3d80bc
    v1 = v9;
    int32_t v10 = a4 & 0xffff0000 | (int64_t)(256 * ((int16_t)a4 % (int16_t)v5)) | (int64_t)v6; // 0x3d80c9
    __asm_out_137((int16_t)v9, v10);
    *(int32_t *)0xae9532c4 = *(int32_t *)0xae9532c4 - v10;
    int64_t v11 = v3 & 0xffffffff; // 0x3d80db
    result = v11;
    __asm_rcl((char)v3);
    char * v12 = (char *)(v11 - 0x5080f4ec); // 0x3d80e5
    char v13 = v3 / 256; // 0x3d80e5
    *v12 = *v12 + v13;
    int32_t * v14 = (int32_t *)(v1 + 0x3ac7c762); // 0x3d80eb
    *v14 = *v14 & (int32_t)result;
    *(char *)0x799900f8 = *(char *)0x799900f8 + v13;
    return result;
    // 0x3d802c
    bool v15; // 0x3d7fd4
    *(char *)0x47013d00fe39837d = (char)v3 - (v15 ? 10 : 9);
    int64_t v16 = __asm_int1(); // 0x3d803a
    int64_t * v17 = (int64_t *)(v3 + 1); // 0x3d803b
    *v17 = *v17 | v3;
    char * v18 = (char *)v16; // 0x3d803f
    char v19 = v16; // 0x3d803f
    char v20 = *v18 + v19; // 0x3d803f
    *v18 = v20;
    unsigned char v21 = v20 & v19; // 0x3d8041
    int64_t v22 = v16 & -256 | (int64_t)v21; // 0x3d8041
    result = v22;
    char * v23 = (char *)v22; // 0x3d8043
    *v23 = *v23 + v21;
    *(char *)v2 = *(char *)&v2 + (char)(v3 / 256);
    char * v24 = (char *)(v22 + 22); // 0x3d804d
    *v24 = *v24 & (char)(v1 / 256);
    int32_t * v25 = (int32_t *)(result + 0x3a65b1ca); // 0x3d8009
    *v25 = *v25 | (int32_t)a1;
    *(int32_t *)a6 = (int32_t)result;
    char * v26 = (char *)result; // 0x3d8019
    *v26 = *v26 + (char)result;
    *(char *)0x3d3d8021 = *(char *)0x3d3d8021 + (char)(a4 / 256);
    int32_t v27 = *(int32_t *)&v1; // 0x3d8021
    int64_t v28; // 0x3d7fd4
    *(int32_t *)v1 = v27 + (int32_t)(int64_t)&v28;
    int64_t v29 = result + 0x8afdff19; // 0x3d8023
    __asm_out_133((int16_t)v1, (char)v29);
    return v29 & 0xffffffff;
}

// Address range: 0x3d80f8 - 0x3d8118
int64_t function_3d80f8(int64_t a1, int64_t a2) {
    // 0x3d80f8
    unknown_3d3f6912();
    return function_23c1ecf9();
}

// Address range: 0x3d8134 - 0x3d813c
int64_t function_3d8134(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3d8134
    return 0x3ffff850;
}

// Address range: 0x3d8170 - 0x3d8171
int64_t function_3d8170(int64_t a1) {
    // 0x3d8170
    int64_t result; // 0x3d8170
    return result;
}

// Address range: 0x3d81ad - 0x3d81b1
int64_t function_3d81ad(void) {
    // 0x3d81ad
    int64_t result; // 0x3d81ad
    int32_t * v1 = (int32_t *)(result + 81); // 0x3d81ad
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x3d823d - 0x3d82de
int64_t function_3d823d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = unknown_ffffffffc4062e43(); // 0x3d823d
    int64_t v3; // 0x3d823d
    unsigned char v4 = (char)v3;
    unsigned char v5 = (char)(v3 / 256); // 0x3d8242
    *(char *)a3 = v4 - v5;
    uint64_t v6 = (v4 < v5 ? 0x23dac73f : 0x23dac73e) + v2; // 0x3d8244
    float80_t v7; // 0x3d823d
    *(int16_t *)a2 = (int16_t)v7;
    char v8 = v6 / 256; // 0x3d8252
    unsigned char v9 = v8 + 1; // 0x3d8252
    int64_t result = 256 * (int64_t)v9 | v6 & 0xffff00ff; // 0x3d8252
    if ((v9 & (v8 ^ -128)) < 0) {
        // 0x3d8256
        return result;
    }
    unsigned char v10 = *(char *)&v1; // 0x3d825b
    bool v11; // 0x3d823d
    int64_t v12 = v1 + (v11 ? -1 : 1); // 0x3d825b
    v1 = v12;
    uint32_t v13 = (int32_t)(result & 0xffffff00 | (int64_t)v10); // 0x3d825e
    *(int32_t *)-0x175f4211a4554bf7 = (int32_t)a1;
    uint32_t v14 = 2 * v13 + (int32_t)v3; // 0x3d826d
    char v15 = *(char *)((int64_t)v14 - 0x2b61e26e); // 0x3d826f
    int64_t v16 = (char)a4 - v15 + (char)(v14 < v13); // 0x3d8278
    int64_t result2 = v16 * v16 % 0x10000 | a4 & 0xffff0000; // 0x3d8278
    int32_t * v17 = (int32_t *)(v12 + 10); // 0x3d827a
    uint32_t v18 = *v17; // 0x3d827a
    uint32_t v19 = v18 + (int32_t)v12; // 0x3d827a
    *v17 = v19;
    if (v19 >= v18) {
        // 0x3d827f
        return result2 & 0xffff00ff | (int64_t)&g2;
    }
    // 0x3d82d4
    if ((int32_t)result2 >= 0x3469101) {
        // 0x3d8256
        return result2;
    }
    int32_t * v20 = (int32_t *)((v3 ^ a4 & 0xff00) + 0x47834af1); // 0x3d829a
    *v20 = *v20 + (int32_t)v1;
    return result2;
}

// Address range: 0x3d82f4 - 0x3d82f8
int64_t function_3d82f4(int64_t a1, int64_t a2) {
    // 0x3d82f4
    int64_t result; // 0x3d82f4
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x3d8348 - 0x3d8352
int64_t function_3d8348(int64_t a1, int64_t a2) {
    // 0x3d8348
    int64_t v1; // 0x3d8348
    return v1 + 0xe8f07a24 & 0xffffffff;
}

// Address range: 0x3d83bc - 0x3d83bd
int64_t function_3d83bc(void) {
    // 0x3d83bc
    int64_t result; // 0x3d83bc
    return result;
}

// Address range: 0x3d8439 - 0x3d843a
int64_t function_3d8439(void) {
    // 0x3d8439
    int64_t result; // 0x3d8439
    return result;
}

// Address range: 0x3d8455 - 0x3d8469
int64_t function_3d8455(void) {
    // 0x3d8455
    int64_t v1; // 0x3d8455
    *(int32_t *)0x58922320 = *(int32_t *)0x58922320 + (int32_t)v1;
    unknown_4d854366();
    return function_3d8439();
}

// Address range: 0x3d8476 - 0x3d84bb
int64_t function_3d8476(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d8476
    unknown_48061e7c();
    int64_t v1; // 0x3d8476
    int32_t * v2 = (int32_t *)(8 * v1 - 0x17d5e17f + v1); // 0x3d847b
    int32_t v3 = a3; // 0x3d847b
    *v2 = *v2 + v3;
    int64_t v4; // 0x3d8476
    if (a4 == 1) {
        int32_t * v5 = (int32_t *)(4 * v4 + a1); // 0x3d8486
        *v5 = *v5 + v3;
        int64_t v6 = v4;
        *(int32_t *)v6 = *(int32_t *)&v4 + (int32_t)v6;
        unknown_ffffffff89ff8a9f();
    }
    // 0x3d84a5
    return v4 & 0xffffffff;
}

// Address range: 0x3d84bb - 0x3d8512
int64_t function_3d84bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d84bb
    int64_t v1; // 0x3d84bb
    int32_t v2 = v1; // 0x3d84bb
    int32_t v3 = v2 + (int32_t)v1; // 0x3d84bb
    uint64_t v4 = a4 - 1; // 0x3d84bd
    if (v4 == 0 || v3 == 0) {
        char * v5 = (char *)(v1 + 0x493b3000); // 0x3d84bf
        *v5 = *v5 + (char)v1;
        char * v6 = (char *)(v1 + 0x5101e800); // 0x3d84c5
        *v6 = *v6 + (char)(v4 / 256);
        int32_t * v7 = (int32_t *)(v1 - 107); // 0x3d84cb
        *v7 = *v7 + v3;
        int64_t v8 = v1 & -256; // 0x3d84d1
        char * v9 = (char *)(v8 | 153); // 0x3d84d3
        *v9 = *v9 + (char)v1;
        int32_t * v10 = (int32_t *)((v8 | 177) - 0x491421c3); // 0x3d84da
        *v10 = *v10 + (v2 >> 31 & -0xff01 | (int32_t)&g6);
        return function_ffffffffd003f554();
    }
    int64_t v11 = unknown_1fc9dc0c(); // 0x3d8506
    __asm_out_133((int16_t)a3, (char)v11);
    return v11 + 0xe5de4b3 & 0xffffffff;
}

// Address range: 0x3d8516 - 0x3d8519
int64_t function_3d8516(void) {
    // 0x3d8516
    int64_t result; // 0x3d8516
    return result;
}

// Address range: 0x3d851f - 0x3d8524
int64_t function_3d851f(void) {
    // 0x3d851f
    return function_2eb5a106();
}

// Address range: 0x3d8584 - 0x3d8585
int64_t function_3d8584(void) {
    // 0x3d8584
    int64_t result; // 0x3d8584
    return result;
}

// Address range: 0x3d858e - 0x3d858f
int64_t function_3d858e(void) {
    // 0x3d858e
    int64_t result; // 0x3d858e
    return result;
}

// Address range: 0x3d8593 - 0x3d8594
int64_t function_3d8593(void) {
    // 0x3d8593
    int64_t result; // 0x3d8593
    return result;
}

// Address range: 0x3d8594 - 0x3d8599
int64_t function_3d8594(int64_t a1) {
    // 0x3d8594
    int64_t v1; // 0x3d8594
    return v1 & -256 | 182;
}

// Address range: 0x3d85c2 - 0x3d85cd
int64_t function_3d85c2(void) {
    // 0x3d85c2
    return unknown_111387c8();
}

// Address range: 0x3d85d6 - 0x3d85e1
int64_t function_3d85d6(void) {
    // 0x3d85d6
    int64_t v1; // 0x3d85d6
    *(char *)0x4dd013d0015db61 = (char)v1;
    return function_3d865d(v1, v1, v1);
}

// Address range: 0x3d85e4 - 0x3d85e9
int64_t function_3d85e4(void) {
    // 0x3d85e4
    return function_128449f();
}

// Address range: 0x3d860e - 0x3d860f
int64_t function_3d860e(int64_t a1) {
    // 0x3d860e
    int64_t result; // 0x3d860e
    return result;
}

// Address range: 0x3d8635 - 0x3d8649
int64_t function_3d8635(void) {
    // 0x3d8635
    __asm_fldenv(*(int224_t *)(int224_t *)&g8);
    return __asm_wait();
}

// Address range: 0x3d865d - 0x3d867e
int64_t function_3d865d(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x3d865d
    int64_t v1; // 0x3d865d
    int32_t * v2 = (int32_t *)(v1 + 0x1e85020 + v1); // 0x3d8662
    *v2 = *v2 + (int32_t)a1;
    *(char *)(v1 + 0x440968) = (char)(a3 / 256);
    uint64_t v3 = __asm_hlt(a1); // 0x3d8674
    return v3 & -256 | (int64_t)*(char *)(v3 % 256 + v1);
}

// Address range: 0x3d8684 - 0x3d8687
int64_t function_3d8684(void) {
    // 0x3d8684
    int64_t result; // 0x3d8684
    return result;
}

// Address range: 0x3d8689 - 0x3d868e
int64_t function_3d8689(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d8689
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x3d8689
    return result;
}

// Address range: 0x3d8691 - 0x3d8696
int64_t function_3d8691(void) {
    // 0x3d8691
    return function_6b0d8749();
}

// Address range: 0x3d8720 - 0x3d879a
int64_t function_3d8720(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d8720
    unknown_38f0f126();
    unknown_ffffffff90d0902f();
    int64_t v1 = unknown_ffffffffb1fdb53a() + 0x8a3d91a2; // 0x3d8739
    int64_t v2; // 0x3d8720
    if (a4 == 1) {
        // 0x3d8741
        bool v3; // 0x3d8720
        int64_t result = unknown_ffffffff91417147((v3 ? -4 : 4) + a1); // 0x3d8741
        if ((int32_t)v2 < (int32_t)v1) {
            // 0x3d8748
            return result + 0xe8d1e5c8 & 0xffffffff;
        }
        // 0x3d8750
        return result;
    }
    char * v4 = (char *)(a3 + 13); // 0x3d878d
    *v4 = *v4 + (char)v2;
    int64_t result2 = 0x10000 * (int32_t)v1 >> 16 & -256 ^ -0x177dddbf; // 0x3d8793
    int32_t * v5 = (int32_t *)result2; // 0x3d8798
    *v5 = *v5 + (int32_t)v2;
    return result2;
}

// Address range: 0x3d87a8 - 0x3d87ba
int64_t function_3d87a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d87a8
    int64_t v1; // 0x3d87a8
    return unknown_ffffffffc04827bb(v1 & 0xffffffff);
}

// Address range: 0x3d87bb - 0x3d87c2
int64_t function_3d87bb(int64_t a1) {
    // 0x3d87bb
    int64_t result; // 0x3d87bb
    *(char *)result = 0;
    return result;
}

// Address range: 0x3d8824 - 0x3d8829
int64_t function_3d8824(int64_t a1) {
    // 0x3d8824
    int64_t result; // 0x3d8824
    return result;
}

// Address range: 0x3d8852 - 0x3d8856
int64_t function_3d8852(void) {
    // 0x3d8852
    int64_t result; // 0x3d8852
    return result;
}

// Address range: 0x3d886f - 0x3d8870
int64_t function_3d886f(void) {
    // 0x3d886f
    int64_t result; // 0x3d886f
    return result;
}

// Address range: 0x3d888e - 0x3d8891
int64_t function_3d888e(void) {
    // 0x3d888e
    int64_t result; // 0x3d888e
    return result;
}
