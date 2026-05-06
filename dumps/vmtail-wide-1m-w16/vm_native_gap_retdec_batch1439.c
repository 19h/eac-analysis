/*
 * Targeted RetDec C for native executable gap queue batch 1439.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x662e3-0x664e3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32e91e-0x32eb1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x32eb1e-0x32ed1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x32ed1e-0x32ef1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x32ef1e-0x32f11e rank=- name=- kind=- bytes=- uncovered=-
 *   0x32f11e-0x32f31e rank=- name=- kind=- bytes=- uncovered=-
 *   0x32f31e-0x32f51e rank=- name=- kind=- bytes=- uncovered=-
 *   0x32f51e-0x32f71e rank=- name=- kind=- bytes=- uncovered=-
 *   0x41bc40-0x41be40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x41be40-0x41c040 rank=- name=- kind=- bytes=- uncovered=-
 *   0x41c040-0x41c240 rank=- name=- kind=- bytes=- uncovered=-
 *   0x41c240-0x41c440 rank=- name=- kind=- bytes=- uncovered=-
 *   0x41c440-0x41c640 rank=- name=- kind=- bytes=- uncovered=-
 *   0x41c640-0x41c840 rank=- name=- kind=- bytes=- uncovered=-
 *   0x41c840-0x41ca40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x41ca40-0x41cbc6 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1341cce6();
int64_t function_1861c95e();
int64_t function_30a27f88();
int64_t function_32e91e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32e96a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_32e9b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32eab4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_32eafa(void);
int64_t function_32eb25(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_32eb43(int64_t a1);
int64_t function_32eb45(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32ebbe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32ec29(int64_t a1, int64_t a2, int64_t a3);
int64_t function_32ec5d(void);
int64_t function_32ecad(int64_t a1);
int64_t function_32ed66(int64_t a1);
int64_t function_32edef(void);
int64_t function_32ee29(void);
int64_t function_32ee2f(int64_t a1);
int64_t function_32eeb3(int64_t a1);
int64_t function_32ef3b(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_32f0e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_32f260(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_32f392(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_32f4ec(int64_t a1);
int64_t function_32f6b0(void);
int64_t function_32f6b4(void);
int64_t function_32f6dc(void);
int64_t function_40ac2524();
int64_t function_41bc20();
int64_t function_41bc40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41bc58(void);
int64_t function_41bca0(int64_t a1);
int64_t function_41bcaa(int64_t a1);
int64_t function_41bcb8(void);
int64_t function_41bd1a(void);
int64_t function_41bd1f(void);
int64_t function_41bd24(void);
int64_t function_41bd36(int64_t a1);
int64_t function_41bd3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41be45(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41be4d(void);
int64_t function_41be4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41be5e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_41bef7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_41bf29(void);
int64_t function_41c013(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41c09e(void);
int64_t function_41c0f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41c15a(void);
int64_t function_41c19a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_41c225(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41c237(int32_t a1, int64_t a2, int64_t a3, int32_t a4);
int64_t function_41c260(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41c277(void);
int64_t function_41c295(void);
int64_t function_41c33b(void);
int64_t function_41c344(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41c370(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41c516(void);
int64_t function_41c545(void);
int64_t function_41c553(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41c60e(void);
int64_t function_41c618(void);
int64_t function_41c671(void);
int64_t function_41c68a(void);
int64_t function_41c68c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41c699(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41c6dc(int64_t a1);
int64_t function_41c6fc(void);
int64_t function_41c721(int64_t a1);
int64_t function_41c76d(void);
int64_t function_41c772(int64_t a1);
int64_t function_41c78d(void);
int64_t function_41c7b9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41c7de(int64_t a1, uint64_t a2, int64_t a3);
int64_t function_41c805(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41c807(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_41c935(void);
int64_t function_41c940(int64_t a1);
int64_t function_41c947(void);
int64_t function_41c956(void);
int64_t function_41c969(void);
int64_t function_41c976(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41c97b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_41c9b8(void);
int64_t function_41c9cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41ca45(void);
int64_t function_41ca60(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41ca90(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41caa2(int64_t a1);
int64_t function_41caf5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44f5665c();
int64_t function_4914c800();
int64_t function_4ac19921();
int64_t function_662e3(void);
int64_t function_662e6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_662f0(void);
int64_t function_6635a(void);
int64_t function_66397(int64_t a1);
int64_t function_663de(void);
int64_t function_663eb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_663fc(void);
int64_t function_66422(int64_t a1, int64_t a2, int64_t a3);
int64_t function_66495(void);
int64_t function_6649a(void);
int64_t function_664d2(void);
int64_t function_6bcbbdbf();
int64_t function_6e38414a();
int64_t function_c9849();
int64_t function_ffffffff8d84ec7e();
int64_t function_ffffffffd05b3b7f();
int64_t unknown_334444d4();
int64_t unknown_3da0492b();
int64_t unknown_7799fe9();
int64_t unknown_ffffffff885e0e3a();
int64_t unknown_ffffffff9b24144b();
int64_t unknown_ffffffffac0c6247();
int64_t unknown_ffffffffb8798465();
int64_t unknown_ffffffffbb65784e();
int64_t unknown_ffffffffd83ac5fb();

// Address range: 0x662e3 - 0x662e6
int64_t function_662e3(void) {
    // 0x662e3
    int64_t result; // 0x662e3
    return result;
}

// Address range: 0x662e6 - 0x662e9
int64_t function_662e6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x662e6
    int64_t v1; // 0x662e6
    __asm_out((int16_t)a3, (int32_t)v1);
    return function_6635a();
}

// Address range: 0x662f0 - 0x662f5
int64_t function_662f0(void) {
    // 0x662f0
    return function_40ac2524();
}

// Address range: 0x6635a - 0x6635c
int64_t function_6635a(void) {
    // 0x6635a
    int64_t result; // 0x6635a
    return result;
}

// Address range: 0x66397 - 0x66398
int64_t function_66397(int64_t a1) {
    // 0x66397
    int64_t result; // 0x66397
    return result;
}

// Address range: 0x663de - 0x663e2
int64_t function_663de(void) {
    // 0x663de
    return __asm_sti();
}

// Address range: 0x663eb - 0x663ef
int64_t function_663eb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x663eb
    int64_t v1; // 0x663eb
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + (char)(a4 / 256);
    return a1 & 0xffffffff;
}

// Address range: 0x663fc - 0x663fd
int64_t function_663fc(void) {
    // 0x663fc
    int64_t result; // 0x663fc
    return result;
}

// Address range: 0x66422 - 0x66435
int64_t function_66422(int64_t a1, int64_t a2, int64_t a3) {
    // 0x66422
    int64_t result; // 0x66422
    char * v1 = (char *)(result - 55); // 0x66427
    *v1 = *v1 >> 1;
    int32_t * v2 = (int32_t *)(a3 - 0x13ff2ea6); // 0x6642a
    *v2 = *v2 ^ 0x5b95113;
    return result;
}

// Address range: 0x66495 - 0x66498
int64_t function_66495(void) {
    // 0x66495
    int64_t result; // 0x66495
    return result;
}

// Address range: 0x6649a - 0x6649d
int64_t function_6649a(void) {
    // 0x6649a
    int64_t result; // 0x6649a
    return result;
}

// Address range: 0x664d2 - 0x664d3
int64_t function_664d2(void) {
    // 0x664d2
    int64_t result; // 0x664d2
    return result;
}

// Address range: 0x32e91e - 0x32e928
int64_t function_32e91e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32e91e
    int64_t v1; // 0x32e91e
    int64_t v2 = v1;
    return ((v2 & 0xff00) + a4 & 0xff00 | v2 & -0xff01) ^ 104;
}

// Address range: 0x32e96a - 0x32e976
int64_t function_32e96a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x32e96a
    bool v1; // 0x32e96a
    bool v2 = v1;
    int64_t result; // 0x32e96a
    uint32_t v3 = (int32_t)result; // 0x32e96a
    uint32_t v4 = (int32_t)v2 + (int32_t)a3; // 0x32e96a
    bool v5 = v2 ? v4 != -1 | (int32_t)v2 + v3 - v4 > v3 : v4 > v3; // 0x32e96a
    int64_t v6; // 0x32e96a
    uint32_t v7 = (int32_t)(int64_t)&v6; // 0x32e96d
    uint32_t v8 = *(int32_t *)(a3 + 0x75d502f9) + (int32_t)v5; // 0x32e96d
    bool v9 = v5 ? v8 != -1 | (int32_t)v5 + v7 - v8 > v7 : v8 > v7; // 0x32e96d
    *(char *)a4 = (char)result + (char)(a3 / 256) + (char)v9;
    return result;
}

// Address range: 0x32e9b8 - 0x32eaac
int64_t function_32e9b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int32_t v2 = a2;
    uint32_t v3 = (int32_t)a4 - v2; // 0x32e9b9
    __asm_in(-118);
    int64_t v4 = __asm_sti(); // 0x32e9c2
    unsigned char v5 = *(char *)-0x13082836; // 0x32e9c3
    int64_t v6; // 0x32e9b8
    unsigned char v7 = v5 + (char)(v6 / 256); // 0x32e9c3
    *(char *)-0x13082836 = v7;
    uint32_t v8 = v3 % 32; // 0x32e9c9
    int32_t v9 = v3; // 0x32e9c9
    bool v10 = v7 == 0; // 0x32e9c9
    bool v11 = v7 < v5; // 0x32e9c9
    if (v8 != 0) {
        v9 = v3 >> v8;
        v10 = v9 == 0;
        v11 = (1 << v8 - 1 & v3) != 0;
    }
    __asm_int(49);
    if (!v10 && !v11) {
        // 0x32e9d0
        return (int64_t)(-124 * *(int32_t *)(a1 - 12));
    }
    int32_t * v12 = (int32_t *)v6; // 0x32ea40
    int32_t v13 = *v12; // 0x32ea40
    int32_t v14 = v4; // 0x32ea40
    int32_t v15 = v13 + v14; // 0x32ea40
    *v12 = v15;
    int32_t v16 = v2; // 0x32ea42
    int64_t v17 = a2; // 0x32ea42
    bool v18; // 0x32e9b8
    if (v15 < 0 == ((v15 ^ v13) & (v15 ^ v14)) < 0) {
        goto lab_0x32ea44_2;
      lab_0x32ea44_2:;
        int64_t v19 = __asm_wait(); // 0x32ea44
        *(int32_t *)(v1 & 0xffffffff) = *(int32_t *)(v17 & 0xffffffff);
        int32_t v20 = v18 ? -4 : 4; // 0x32ea45
        int64_t v21 = v20 + (int32_t)v1; // 0x32ea45
        int64_t v22 = unknown_ffffffffbb65784e((v18 ? -1 : 1) + v21, v20 + v16); // 0x32ea48
        int64_t v23 = *(char *)v21 > (char)v19 ? 185 : 184; // 0x32ea4d
        return (v22 - v23) % 256 | v22 & -256;
    }
    int64_t v24 = v9; // 0x32e9b8
    int64_t v25; // 0x32e9b8
    uint64_t v26 = v25;
    *(char *)0x3816e90f = *(char *)0x3816e90f + (char)(v26 / 256);
    uint32_t v27 = *(int32_t *)a2; // 0x32ea10
    uint32_t v28 = (int32_t)v24 % 32; // 0x32ea16
    int32_t * v29; // 0x32ea16
    if (v28 != 0) {
        v29 = (int32_t *)((int64_t)v27 - 0x7205fe18);
        *v29 = *v29 << v28;
    }
    uint32_t v30 = v27 / 0x80000000; // 0x32ea12
    int64_t v31 = v30; // 0x32ea12
    v17 = a2 + (v18 ? 60 : 4) & 57;
    int64_t v32 = __asm_hlt(); // 0x32ea1c
    int64_t v33 = v26 % 256 & v31 | v26 & -256; // 0x32ea1d
    *(char *)0x21b3868 = *(char *)0x21b3868 | (char)v32;
    int64_t result = unknown_3da0492b(); // 0x32ea25
    int32_t * v34 = (int32_t *)v33;
    int32_t v35 = *v34 + (int32_t)v6; // 0x32ea2a
    *v34 = v35;
    while (v35 >= 0) {
        // 0x32ea2e
        __asm_in_133((int16_t)v30);
        int64_t v36 = unknown_ffffffff885e0e3a(); // 0x32ea34
        int32_t v37 = *v34; // 0x32ea40
        int32_t v38 = v36 & 0xffffff00 | v24 % 256; // 0x32ea40
        int32_t v39 = v37 + v38; // 0x32ea40
        *v34 = v39;
        v24--;
        if (v39 < 0 == ((v39 ^ v37) & (v39 ^ v38)) < 0) {
            // 0x32ea44
            v16 = v17;
            goto lab_0x32ea44_2;
        }
        v26 = v33;
        *(char *)0x3816e90f = *(char *)0x3816e90f + (char)(v26 / 256);
        v27 = *(int32_t *)v17;
        v28 = (int32_t)v24 % 32;
        if (v28 != 0) {
            v29 = (int32_t *)((int64_t)v27 - 0x7205fe18);
            *v29 = *v29 << v28;
        }
        v30 = v27 / 0x80000000;
        v31 = v30;
        v17 = v17 + (v18 ? 60 : 4) & 57;
        v32 = __asm_hlt();
        v33 = v26 % 256 & v31 | v26 & -256;
        *(char *)0x21b3868 = *(char *)0x21b3868 | (char)v32;
        result = unknown_3da0492b();
        v34 = (int32_t *)v33;
        v35 = *v34 + (int32_t)v6;
        *v34 = v35;
    }
    // 0x32eaa0
    if (*(char *)v17 > *(char *)&v1) {
        // 0x32eaa3
        *v34 = v35 + (int32_t)(v17 + (v18 ? 0xffffffff : 1));
        return result;
    }
    int32_t * v40 = (int32_t *)(v31 + 0x1007663f); // 0x32ea8b
    *v40 = *v40 + (int32_t)v6;
    return result;
}

// Address range: 0x32eab4 - 0x32eae4
int64_t function_32eab4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x32eab4
    int64_t v1; // 0x32eab4
    *(int32_t *)a3 = 2 * (int32_t)v1;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    *(char *)0xe8745b15 = *(char *)0xe8745b15 + 15;
    __asm_int3();
    int64_t v2 = unknown_334444d4(); // 0x32eace
    char * v3 = (char *)(v2 + 0x24dff00); // 0x32ead3
    *v3 = *v3 + (char)v2;
    int32_t * v4 = (int32_t *)((v1 & -256 | 152) + 0x46010200); // 0x32eadb
    *v4 = *v4 + (int32_t)v1;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x32eafa - 0x32eafd
int64_t function_32eafa(void) {
    // 0x32eafa
    int64_t result; // 0x32eafa
    return result;
}

// Address range: 0x32eb25 - 0x32eb33
int64_t function_32eb25(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x32eb25
    int64_t result; // 0x32eb25
    return result;
}

// Address range: 0x32eb43 - 0x32eb44
int64_t function_32eb43(int64_t a1) {
    // 0x32eb43
    int64_t result; // 0x32eb43
    return result;
}

// Address range: 0x32eb45 - 0x32eb60
int64_t function_32eb45(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32eb45
    unknown_ffffffff9b24144b();
    __asm_iretd();
    int64_t v1; // 0x32eb45
    int32_t * v2 = (int32_t *)(v1 + 0x73182606); // 0x32eb57
    *v2 = *v2 + (int32_t)v1;
    int64_t v3; // 0x32eb45
    __asm_outsd((int16_t)a3, *(int32_t *)&v3);
    return a4 & 0xffffffff;
}

// Address range: 0x32ebbe - 0x32ebcb
int64_t function_32ebbe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32ebbe
    return function_ffffffff8d84ec7e();
}

// Address range: 0x32ec29 - 0x32ec2e
int64_t function_32ec29(int64_t a1, int64_t a2, int64_t a3) {
    // 0x32ec29
    int64_t result; // 0x32ec29
    return result;
}

// Address range: 0x32ec5d - 0x32ec60
int64_t function_32ec5d(void) {
    // 0x32ec5d
    int64_t result; // 0x32ec5d
    return result;
}

// Address range: 0x32ecad - 0x32ecae
int64_t function_32ecad(int64_t a1) {
    // 0x32ecad
    int64_t result; // 0x32ecad
    return result;
}

// Address range: 0x32ed66 - 0x32ed67
int64_t function_32ed66(int64_t a1) {
    // 0x32ed66
    int64_t result; // 0x32ed66
    return result;
}

// Address range: 0x32edef - 0x32edf0
int64_t function_32edef(void) {
    // 0x32edef
    int64_t result; // 0x32edef
    return result;
}

// Address range: 0x32ee29 - 0x32ee2e
int64_t function_32ee29(void) {
    // 0x32ee29
    return function_ffffffffd05b3b7f();
}

// Address range: 0x32ee2f - 0x32ee39
int64_t function_32ee2f(int64_t a1) {
    // 0x32ee2f
    int64_t result; // 0x32ee2f
    return result;
}

// Address range: 0x32eeb3 - 0x32eeb4
int64_t function_32eeb3(int64_t a1) {
    // 0x32eeb3
    int64_t result; // 0x32eeb3
    return result;
}

// Address range: 0x32ef3b - 0x32effa
int64_t function_32ef3b(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2; // 0x32ef3b
    int32_t v3 = *(int32_t *)(v2 - 0x63910df9); // 0x32ef3b
    int64_t v4 = unknown_ffffffffac0c6247(); // 0x32ef41
    char * v5 = (char *)(a1 - 54); // 0x32ef46
    *v5 = *v5 + (char)(a4 / 256);
    int64_t v6; // 0x32ef3b
    int64_t v7 = 256 * (int64_t)(*(char *)&v6 ^ (char)(a3 / 256)) | a3 & -0xff01; // 0x32ef49
    int64_t v8 = a4 - 1; // 0x32ef50
    uint64_t v9 = v4 + 0xdd4106d4; // 0x32ef53
    int64_t v10 = v9 & 0xffffffff; // 0x32ef53
    *(int32_t *)v10 = (int32_t)v9;
    *(char *)v10 = (char)(v9 / 256);
    int64_t v11 = unknown_ffffffffb8798465(); // 0x32ef5f
    int32_t * v12 = (int32_t *)v7; // 0x32efd6
    *v12 = *v12 + (int32_t)v11;
    unsigned char v13 = (char)v8; // 0x32efdf
    unsigned char v14 = v13 % 32; // 0x32efdf
    char v15 = 0; // 0x32efdf
    if (v14 != 0) {
        unsigned char v16 = *(char *)&v1; // 0x32efdf
        unsigned char v17 = v16 >> 8 - v14 | v16 << v14; // 0x32efdf
        *(char *)v1 = v17;
        v15 = v17 % 2 != 0;
    }
    char * v18 = (char *)(int64_t)(v3 ^ (int32_t)v2); // 0x32efe1
    *v18 = v15 - v13 + *v18;
    int32_t v19 = *(int32_t *)&v1;
    __asm_outsd((int16_t)v7, v19);
    if (v19 + (int32_t)v8 >= 0) {
        // 0x32ef96
        return v11 & 0x83000091;
    }
    // 0x32eff0
    return unknown_ffffffffd83ac5fb();
}

// Address range: 0x32f0e3 - 0x32f260
int64_t function_32f0e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = unknown_7799fe9(); // 0x32f0e3
    char * v2 = (char *)(v1 - 0x3f60f100); // 0x32f0e8
    unsigned char v3 = *v2; // 0x32f0e8
    unsigned char v4 = (char)v1; // 0x32f0e8
    char v5 = v3 + v4; // 0x32f0e8
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x32f0e8
    *v2 = v5;
    int64_t v7; // bp-40, 0x32f0e3
    int64_t v8 = (int64_t)&v7; // 0x32f155
    v7 = v1;
    int64_t * v9 = (int64_t *)(v8 - 16); // 0x32f16c
    int64_t v10 = *(int64_t *)(v8 + 32); // 0x32f17b
    int64_t v11 = v8 - 8; // 0x32f17b
    int64_t * v12 = (int64_t *)v11; // 0x32f17b
    *v12 = v10;
    *v9 = a3;
    int64_t * v13 = (int64_t *)(v8 - 24); // 0x32f184
    int64_t v14 = *v9; // 0x32f199
    *v9 = v8;
    int64_t * v15 = (int64_t *)(v8 + 8); // 0x32f19e
    int64_t v16 = *v15; // 0x32f19e
    int64_t * v17 = (int64_t *)(v8 - 32); // 0x32f1a5
    *v9 = a4;
    *v17 = v10 + 0x7bf57d31;
    *v15 = v10;
    int64_t v18 = *v9; // 0x32f1d6
    *v9 = a6;
    *v13 = a2 + 0x3fffdbe1;
    int64_t v19 = *v9; // 0x32f204
    *v9 = v16;
    *(int64_t *)(v8 + 16) = v16;
    *v9 = *v12;
    *v17 = v10;
    *v13 = v11;
    *v9 = *v12;
    *v13 = v11;
    bool v20; // 0x32f0e3
    return function_c9849(a1, a2, v14, v18, a5, v19, 0x32cebe, 310, 0x4000 * (int64_t)(bool)v20 | 1024 * (int64_t)v20 | 512 * (int64_t)v20 | 256 * (int64_t)v20 | (int64_t)(v5 < v3) | 64 * (int64_t)(v5 == 0) | 128 * (int64_t)(v5 < 0) | 16 * (int64_t)(v3 % 16 + v4 % 16 > 15) | 4 * (int64_t)(v6 % 2 == 0) | 2048 * (int64_t)(((v5 ^ v3) & (v5 ^ v4)) < 0) | 2);
}

// Address range: 0x32f260 - 0x32f392
int64_t function_32f260(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x32f260
    int64_t v1; // 0x32f260
    int64_t result = function_c9849(v1, a2, a3, a4, a5, 0x3da2522c, a7, (int64_t)&g4, (int64_t)&g4); // 0x32f38d
    return result;
}

// Address range: 0x32f392 - 0x32f4ec
int64_t function_32f392(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x32f392
    int64_t v1; // bp-56, 0x32f392
    int64_t v2 = (int64_t)&v1; // 0x32f45b
    int64_t v3 = v2 + 16; // 0x32f467
    int64_t * v4 = (int64_t *)(v2 + 8); // 0x32f48f
    *(int64_t *)(v2 + 40) = 0x329686;
    v1 = a5;
    *v4 = v2 + 24;
    *v4 = *(int64_t *)v3;
    v1 = v3;
    int64_t v5; // 0x32f392
    return function_c9849(a1, a2, a3, a4, a5, a6, 0x762cd236, v5, (int64_t)&g4);
}

// Address range: 0x32f4ec - 0x32f62b
int64_t function_32f4ec(int64_t a1) {
    // 0x32f4ec
    int64_t v1; // bp-56, 0x32f4ec
    int64_t v2 = (int64_t)&v1; // 0x32f586
    int64_t v3 = v2 + 16; // 0x32f58c
    v1 = v3;
    int64_t * v4 = (int64_t *)(v2 + 8); // 0x32f59b
    *v4 = 0x25265bc3;
    bool v5; // 0x32f4ec
    v1 = 0x4000 * (int64_t)v5 | 2048 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | 128 * (int64_t)v5 | 64 * (int64_t)v5 | 16 * (int64_t)v5 | (int64_t)v5 | 4 * (int64_t)v5 | 2;
    *(int64_t *)(v2 + 24) = *v4;
    v1 = *(int64_t *)(v2 + 32);
    *(int64_t *)(v2 + 40) = *v4;
    int64_t * v6 = (int64_t *)v3; // 0x32f5e6
    *v4 = *v6;
    v1 = a1;
    *(int64_t *)(v2 - 8) = v3;
    int64_t v7 = v1; // 0x32f5fd
    *(int64_t *)(v2 - 16) = v7;
    int64_t v8 = *v6; // 0x32f60a
    *v4 = v8;
    v1 = v8;
    int64_t v9; // 0x32f4ec
    int64_t result = function_c9849(v7, v9, v9, v9, v9, v9, 0x2eeeb03e, (int64_t)&g4, (int64_t)&g4); // 0x32f626
    return result;
}

// Address range: 0x32f6b0 - 0x32f6b3
int64_t function_32f6b0(void) {
    // 0x32f6b0
    int64_t result; // 0x32f6b0
    return result;
}

// Address range: 0x32f6b4 - 0x32f6b7
int64_t function_32f6b4(void) {
    // 0x32f6b4
    int64_t result; // 0x32f6b4
    return result;
}

// Address range: 0x32f6dc - 0x32f6df
int64_t function_32f6dc(void) {
    // 0x32f6dc
    int64_t result; // 0x32f6dc
    return result;
}

// Address range: 0x41bc40 - 0x41bc46
int64_t function_41bc40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41bc40
    bool v1; // 0x41bc40
    if (!v1) {
        function_41bc40(a1, a2, a3, a4, a5);
    }
    // 0x41bc42
    return __asm_int3();
}

// Address range: 0x41bc58 - 0x41bc5b
int64_t function_41bc58(void) {
    // 0x41bc58
    return function_41bc20();
}

// Address range: 0x41bca0 - 0x41bca1
int64_t function_41bca0(int64_t a1) {
    // 0x41bca0
    int64_t result; // 0x41bca0
    return result;
}

// Address range: 0x41bcaa - 0x41bcab
int64_t function_41bcaa(int64_t a1) {
    // 0x41bcaa
    int64_t result; // 0x41bcaa
    return result;
}

// Address range: 0x41bcb8 - 0x41bcc4
int64_t function_41bcb8(void) {
    // 0x41bcb8
    return (int64_t)*(int32_t *)-0x4ed559b933d8699b;
}

// Address range: 0x41bd1a - 0x41bd1b
int64_t function_41bd1a(void) {
    // 0x41bd1a
    int64_t result; // 0x41bd1a
    return result;
}

// Address range: 0x41bd1f - 0x41bd20
int64_t function_41bd1f(void) {
    // 0x41bd1f
    int64_t result; // 0x41bd1f
    return result;
}

// Address range: 0x41bd24 - 0x41bd29
int64_t function_41bd24(void) {
    // 0x41bd24
    return function_4ac19921();
}

// Address range: 0x41bd36 - 0x41bd39
int64_t function_41bd36(int64_t a1) {
    // 0x41bd36
    int64_t result; // 0x41bd36
    return result;
}

// Address range: 0x41bd3c - 0x41be3e
int64_t function_41bd3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int32_t * v3 = (int32_t *)(a3 - 43); // 0x41bd3c
    bool v4; // 0x41bd3c
    *v3 = (int32_t)v4 - (int32_t)a3 + *v3;
    int64_t v5; // 0x41bd3c
    int32_t v6 = (int32_t)v5 < 0x54a33c80 ? 0x707f6864 : 0x707f6863; // 0x41bd4a
    int64_t v7; // 0x41bd3c
    int64_t v8 = (int64_t)(*(int32_t *)&v7 + v6); // 0x41bd4a
    *(int64_t *)(v8 - 8) = a2;
    int64_t v9 = v5 + 0xab5cc380 & 0xffffffff; // 0x41bd4e
    v7 = v9;
    uint32_t v10 = (int32_t)a2; // 0x41bd4f
    uint32_t v11 = *(int32_t *)(4 * v5 - 0x6da167 + v8); // 0x41bd4f
    int32_t v12 = v10 - v11; // 0x41bd4f
    int32_t v13 = __asm_in(13); // 0x41bd56
    int64_t result2 = v13; // 0x41bd56
    if (((v12 ^ v10) & (v11 ^ v10)) >= 0) {
        int64_t result = result2; // 0x41bd87
        if (v11 > v10) {
            result = function_41bd1a();
        }
        // 0x41bd89
        return result;
    }
    int64_t v14 = v9 - 1; // 0x41bd5a
    v7 = v14;
    if (v14 != 0 == v12 == 0) {
        // 0x41bd89
        return result2;
    }
    int64_t v15 = v9 - 2; // 0x41bd5e
    v7 = v15;
    if (v15 != 0) {
        // 0x41bdb7
        *(int64_t *)(v8 - 16) = 0;
        int32_t * v16 = (int32_t *)(v2 + 0x17ff2b96); // 0x41bdc0
        int32_t v17 = v5; // 0x41bdc0
        *v16 = *v16 | v17;
        *(int64_t *)(v8 - 24) = result2 & 0xffffffff;
        return 0x10000 * v17 >> 16;
    }
    char v18 = v13; // 0x41bd65
    unsigned char v19 = *(char *)&v2; // 0x41bd65
    v2 += (v4 ? -1 : 1);
    if (v19 > v18) {
        // 0x41bdcf
        return result2 + 0xf5a12a57 + (int64_t)(v19 > v18) & 0xffffffff ^ 0x3ab32459;
    }
    // 0x41bd69
    __asm_outsb((int16_t)a5, *(char *)&v1);
    return function_6bcbbdbf();
}

// Address range: 0x41be45 - 0x41be4d
int64_t function_41be45(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x41be45
    int64_t result; // 0x41be45
    if (v1 != 0) {
        char * v2 = (char *)(result + 22); // 0x41be45
        unsigned char v3 = *v2; // 0x41be45
        *v2 = v3 >> v1 | v3 << 8 - v1;
    }
    return result;
}

// Address range: 0x41be4d - 0x41be4e
int64_t function_41be4d(void) {
    // 0x41be4d
    int64_t result; // 0x41be4d
    return result;
}

// Address range: 0x41be4e - 0x41be5e
int64_t function_41be4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41be4e
    int64_t v1; // 0x41be4e
    int64_t v2 = v1 + 0xeef63576; // 0x41be4e
    int32_t * v3 = (int32_t *)(v1 + 0x6c97226e); // 0x41be54
    uint32_t v4 = *v3; // 0x41be54
    uint32_t v5 = v4 + (int32_t)v2; // 0x41be54
    *v3 = v5;
    return (v1 + 210 + (int64_t)(v5 < v4)) % 256 | v2 & 0xffffff00;
}

// Address range: 0x41be5e - 0x41beeb
int64_t function_41be5e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x41be5e
    int64_t v1; // 0x41be5e
    int64_t v2 = v1;
    bool v3; // 0x41be5e
    if (!v3) {
        // 0x41bedf
        return 2 * v2 & 254 | v2 & -256;
    }
    if (a4 == 1 || v3) {
        // 0x41be64
        return 0xa143bf02;
    }
    // 0x41bee2
    return v2 + 0xd9a64dc & 0xffffffff;
}

// Address range: 0x41bef7 - 0x41bf1f
int64_t function_41bef7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x41bef7
    int64_t v1; // 0x41bef7
    uint16_t v2 = (256 * (int16_t)v1 >> 8) * ((int16_t)v1 & 97); // 0x41bef9
    char * v3 = (char *)(a1 + 0x694f0f5e); // 0x41beff
    *v3 = *v3 - (char)(a3 / 256);
    return (v1 & -0x10000 | (int64_t)(v2 & -256) | (int64_t)(v2 % 256)) ^ 165;
}

// Address range: 0x41bf29 - 0x41bf37
int64_t function_41bf29(void) {
    // 0x41bf29
    return function_6e38414a();
}

// Address range: 0x41c013 - 0x41c04f
int64_t function_41c013(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41c013
    int64_t v1; // 0x41c013
    int64_t result = v1;
    int32_t * v2 = (int32_t *)(a3 + 0x669c89d); // 0x41c013
    *v2 = *v2 | (int32_t)v1;
    if ((result & 1024) == 0) {
        // 0x41c038
        return result;
    }
    if ((result & 256) != 0) {
        // 0x41c048
        return result & -245 ^ 108;
    }
    // 0x41c022
    *(int64_t *)0x45330aca5a1c7df9 = (result + 252) % 256 | result & -256;
    return a4 & 0xffffffff;
}

// Address range: 0x41c09e - 0x41c0a5
int64_t function_41c09e(void) {
    // 0x41c09e
    int64_t v1; // 0x41c09e
    int64_t result = v1;
    bool v2; // 0x41c09e
    *(char *)result = 2 * (char)result | (char)v2;
    return result;
}

// Address range: 0x41c0f7 - 0x41c137
int64_t function_41c0f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41c0f7
    int64_t v1; // 0x41c0f7
    bool v2; // 0x41c0f7
    int32_t v3 = (int32_t)v2 + (int32_t)v1 - *(int32_t *)(v1 - 0x2d8dcac3); // 0x41c0f7
    char v4 = v3; // 0x41c0ff
    unsigned char v5 = v4 - 97; // 0x41c0ff
    int64_t result = (int64_t)v5 | (int64_t)(v3 & -256); // 0x41c0ff
    if (v4 < 97 || v5 == 0) {
        // 0x41c109
        return result;
    }
    if (v4 <= 97) {
        // 0x41c135
        return __asm_wait();
    }
    // 0x41c112
    __asm_outsb((int16_t)a3, (char)v1);
    return result + 0xb1a5d73c & 0xffffffff;
}

// Address range: 0x41c15a - 0x41c15b
int64_t function_41c15a(void) {
    // 0x41c15a
    int64_t result; // 0x41c15a
    return result;
}

// Address range: 0x41c19a - 0x41c223
int64_t function_41c19a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x41c19a
    int64_t v1; // 0x41c19a
    int32_t v2 = *(int32_t *)(v1 - 0x7ec015e1); // 0x41c19a
    char * v3 = (char *)(v1 + 116); // 0x41c1a1
    *v3 = *v3 + (char)v1;
    *(int32_t *)0x2e4e8e42 = *(int32_t *)0x2e4e8e42 ^ (int32_t)v1;
    uint32_t v4 = (int32_t)a1 - *(int32_t *)(a1 + 21); // 0x41c1ac
    if (llvm_ctpop_i8((char)v4) % 2 != 0) {
        // 0x41c221
        return a5 & 0xffffff24 | 219;
    }
    int64_t v5 = a3 & -256 | 202; // 0x41c1b4
    int64_t v6; // 0x41c19a
    *(int32_t *)v6 = *(int32_t *)&v6 - (int32_t)v5;
    unsigned char v7 = (char)v2 % 32; // 0x41c1b8
    if (v7 != 0) {
        char * v8 = (char *)(int64_t)v4; // 0x41c1b8
        *v8 = *v8 << v7;
    }
    return function_41c237(v4, a2, v5, v2);
}

// Address range: 0x41c225 - 0x41c22e
int64_t function_41c225(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41c225
    int64_t result; // 0x41c225
    char * v1 = (char *)(result + 13); // 0x41c225
    *v1 = *v1 & 75;
    return result;
}

// Address range: 0x41c237 - 0x41c255
int64_t function_41c237(int32_t a1, int64_t a2, int64_t a3, int32_t a4) {
    int32_t * v1 = (int32_t *)a2; // 0x41c247
    int64_t v2; // 0x41c237
    *v1 = (int32_t)(v2 ^ a2);
    uint32_t v3 = (int32_t)v2; // 0x41c249
    int64_t v4; // 0x41c237
    *v1 = (int32_t)(-1 - a4 < v3) - v3 + *(int32_t *)&v4;
    return (int64_t)*(int32_t *)0x550eb746b74f8001;
}

// Address range: 0x41c260 - 0x41c264
int64_t function_41c260(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41c260
    int64_t result; // 0x41c260
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x41c277 - 0x41c278
int64_t function_41c277(void) {
    // 0x41c277
    int64_t result; // 0x41c277
    return result;
}

// Address range: 0x41c295 - 0x41c297
int64_t function_41c295(void) {
    // 0x41c295
    return function_41c277();
}

// Address range: 0x41c33b - 0x41c33c
int64_t function_41c33b(void) {
    // 0x41c33b
    int64_t result; // 0x41c33b
    return result;
}

// Address range: 0x41c344 - 0x41c359
int64_t function_41c344(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41c344
    int64_t result; // 0x41c344
    return result;
}

// Address range: 0x41c370 - 0x41c4ea
int64_t function_41c370(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41c370
    int64_t v1; // 0x41c370
    uint64_t v2 = v1;
    int64_t v3 = (int64_t)(*(int32_t *)(v1 + 0x74222c5b) + (int32_t)v1); // 0x41c375
    char * v4 = (char *)(a2 + 0x374cfed1); // 0x41c37b
    char v5 = *v4 | (char)v1; // 0x41c37b
    *v4 = v5;
    int64_t v6 = v1 & -0xff01 | (int64_t)&g2; // 0x41c381
    if (v5 != 0) {
        int64_t v7 = v6 & -0x10000 | v2 % 0x10000; // 0x41c387
        *(int64_t *)(v3 - 8) = a4;
        return v7 & -256 | (int64_t)((char)v2 - *(char *)v7);
    }
    int64_t v8 = v3 - 8; // 0x41c403
    *(int64_t *)v8 = a4;
    uint64_t v9 = v6 & 0xffffffff | 0x100000000 * a3; // 0x41c409
    uint64_t v10 = (int64_t)*(int32_t *)0x1b1ee51b; // 0x41c409
    uint64_t v11 = v9 / v10; // 0x41c409
    uint64_t v12 = v9 % v10; // 0x41c409
    unsigned char v13 = (char)(v11 / 256); // 0x41c40f
    unsigned char v14 = *(char *)-0x3aa0a4d3; // 0x41c40f
    if (((v13 - v14 ^ v13) & (v14 ^ v13)) < 0) {
        char v15 = v14 > v13 ? -73 : -74; // 0x41c421
        *(int32_t *)a1 = __asm_insd((int16_t)v12);
        return v11 & 0xffffff00 | (int64_t)(*(char *)0x652d4de786119f28 - v15);
    }
    int64_t v16 = (int64_t)(*(int32_t *)(a1 - 67) | (int32_t)v8); // 0x41c492
    char v17 = v11; // 0x41c495
    __asm_out_134(90, v17);
    char * v18 = (char *)(v12 - 61); // 0x41c49f
    *v18 = *v18 ^ v17;
    unsigned char v19 = (char)v12; // 0x41c4a3
    unsigned char v20 = *(char *)(2 * a1 + a4); // 0x41c4a3
    char v21 = v19 - v20; // 0x41c4a3
    unsigned char v22 = llvm_ctpop_i8(v21); // 0x41c4a3
    int64_t v23 = __asm_int1(a1, a2, v12, a4); // 0x41c4a6
    *(int64_t *)v16 = v16 + 8;
    return v23 & -0xff01 | 256 * (64 * (int64_t)(v21 == 0) | (int64_t)(v20 > v19) | 128 * (int64_t)(v21 < 0) | 16 * (int64_t)(v19 % 16 - v20 % 16 > 15) | 4 * (int64_t)(v22 % 2 == 0)) | 512;
}

// Address range: 0x41c516 - 0x41c518
int64_t function_41c516(void) {
    // 0x41c516
    int64_t v1; // 0x41c516
    return function_41c553(v1, v1, v1, v1, (int64_t)&g4);
}

// Address range: 0x41c545 - 0x41c54a
int64_t function_41c545(void) {
    // 0x41c545
    return function_1341cce6();
}

// Address range: 0x41c553 - 0x41c569
int64_t function_41c553(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41c553
    bool v1; // 0x41c553
    int64_t v2 = (v1 ? -1 : 1) + a1; // 0x41c55a
    int64_t v3; // 0x41c553
    *(int32_t *)v2 = (int32_t)v3;
    int64_t v4 = v1 ? -4 : 4; // 0x41c565
    int64_t v5 = __asm_int1(v2 + v4, v4 + a2, a5 & 0xff00 | a3 & -0xff01, a4); // 0x41c566
    return (v5 + 33) % 256 | v5 & -256;
}

// Address range: 0x41c60e - 0x41c60f
int64_t function_41c60e(void) {
    // 0x41c60e
    int64_t result; // 0x41c60e
    return result;
}

// Address range: 0x41c618 - 0x41c619
int64_t function_41c618(void) {
    // 0x41c618
    int64_t result; // 0x41c618
    return result;
}

// Address range: 0x41c671 - 0x41c672
int64_t function_41c671(void) {
    // 0x41c671
    int64_t result; // 0x41c671
    return result;
}

// Address range: 0x41c68a - 0x41c68c
int64_t function_41c68a(void) {
    // 0x41c68a
    int64_t v1; // 0x41c68a
    return function_41c699(v1, v1, v1, v1);
}

// Address range: 0x41c68c - 0x41c699
int64_t function_41c68c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41c68c
    int64_t v1; // 0x41c68c
    __asm_out((int16_t)a3, (int32_t)v1);
    int64_t result; // 0x41c68c
    bool v2; // 0x41c68c
    if (!v2) {
        result = function_41c618();
    }
    // 0x41c695
    *(char *)0xcd80f245 = __asm_insb((int16_t)a4);
    return result;
}

// Address range: 0x41c699 - 0x41c6ae
int64_t function_41c699(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41c699
    int64_t result; // 0x41c699
    int32_t * v1 = (int32_t *)(result + 61); // 0x41c699
    *v1 = *v1 + (int32_t)a3;
    int32_t * v2 = (int32_t *)(a3 - 53); // 0x41c69e
    *v2 = *v2 & (int32_t)a4;
    __asm_fldenv(*(int224_t *)(result + 2));
    __asm_fbld(*(float80_t *)(result + 79));
    return result;
}

// Address range: 0x41c6dc - 0x41c6dd
int64_t function_41c6dc(int64_t a1) {
    // 0x41c6dc
    int64_t result; // 0x41c6dc
    return result;
}

// Address range: 0x41c6fc - 0x41c6fe
int64_t function_41c6fc(void) {
    // 0x41c6fc
    int64_t result; // 0x41c6fc
    return result;
}

// Address range: 0x41c721 - 0x41c722
int64_t function_41c721(int64_t a1) {
    // 0x41c721
    int64_t result; // 0x41c721
    return result;
}

// Address range: 0x41c76d - 0x41c772
int64_t function_41c76d(void) {
    // 0x41c76d
    return function_1861c95e();
}

// Address range: 0x41c772 - 0x41c773
int64_t function_41c772(int64_t a1) {
    // 0x41c772
    int64_t result; // 0x41c772
    return result;
}

// Address range: 0x41c78d - 0x41c78e
int64_t function_41c78d(void) {
    // 0x41c78d
    int64_t result; // 0x41c78d
    return result;
}

// Address range: 0x41c7b9 - 0x41c7bf
int64_t function_41c7b9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41c7b9
    __asm_in_135((int16_t)a3);
    return function_4914c800();
}

// Address range: 0x41c7de - 0x41c803
int64_t function_41c7de(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a3 & -0xff01 | (int64_t)&g1; // 0x41c7de
    char v2 = __asm_in_135((int16_t)v1); // 0x41c7e0
    int64_t v3; // 0x41c7de
    bool v4; // 0x41c7de
    if (v4) {
        // 0x41c7f1
        *(char *)-0x6c638bbf8e3448aa = (char)a2;
        return (v3 | (int64_t)v2) & -256 | a2 % 256;
    }
    // 0x41c7e4
    __asm_sti();
    return function_41c807(a1, a2, v1, v3, v3, v3, (int64_t)&g4);
}

// Address range: 0x41c805 - 0x41c807
int64_t function_41c805(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41c805
    int64_t result; // 0x41c805
    return result;
}

// Address range: 0x41c807 - 0x41c8cb
int64_t function_41c807(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x41c807
    int64_t result; // 0x41c807
    bool v1; // 0x41c807
    if (v1) {
        // 0x41c887
        return result;
    }
    int64_t v2 = __asm_iretd(); // 0x41c809
    int64_t v3 = result & -256 | 35; // 0x41c80a
    char * v4 = (char *)v3; // 0x41c84a
    *v4 = *v4 ^ (char)a4;
    int64_t v5 = v2 & 0xffffffff; // 0x41c84d
    char v6 = *(char *)v5; // 0x41c84f
    float80_t v7; // 0x41c807
    *(int32_t *)(4 * a6 + 54 + v5) = (int32_t)v7;
    return 256 * (int64_t)(v6 & (char)(a3 / 256)) | a3 & 0xffff00ff;
    int32_t v8 = *(int32_t *)v3; // 0x41c80e
    char * v9 = (char *)(result - 0x2892daa7); // 0x41c817
    *v9 = *v9 | (char)a3;
    *(int64_t *)((int64_t)(v8 | (int32_t)result) - 8) = a1;
    int16_t v10 = a3; // 0x41c82e
    char v11 = __asm_insb(v10); // 0x41c82e
    char * v12 = (char *)a1; // 0x41c82e
    *v12 = v11;
    *v12 = __asm_insb(v10);
    return a1 & 0xffffffff;
}

// Address range: 0x41c935 - 0x41c938
int64_t function_41c935(void) {
    // 0x41c935
    int64_t result; // 0x41c935
    return result;
}

// Address range: 0x41c940 - 0x41c943
int64_t function_41c940(int64_t a1) {
    // 0x41c940
    int64_t result; // 0x41c940
    return result;
}

// Address range: 0x41c947 - 0x41c94f
int64_t function_41c947(void) {
    // 0x41c947
    int64_t result; // 0x41c947
    return result;
}

// Address range: 0x41c956 - 0x41c95b
int64_t function_41c956(void) {
    // 0x41c956
    return function_44f5665c();
}

// Address range: 0x41c969 - 0x41c96c
int64_t function_41c969(void) {
    // 0x41c969
    int64_t result; // 0x41c969
    return result;
}

// Address range: 0x41c976 - 0x41c97b
int64_t function_41c976(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41c976
    int64_t result; // 0x41c976
    return result;
}

// Address range: 0x41c97b - 0x41c994
int64_t function_41c97b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x41c97b
    bool v1; // 0x41c97b
    int64_t v2 = (v1 ? -4 : 4) + a1; // 0x41c980
    int32_t * v3 = (int32_t *)(v2 + 1); // 0x41c982
    int64_t v4; // 0x41c97b
    int32_t v5 = *v3 | (int32_t)v4; // 0x41c982
    *v3 = v5;
    int64_t v6 = a4 - 1; // 0x41c985
    int64_t v7; // 0x41c97b
    if (v6 != 0 && v5 != 0) {
        v7 = function_41c9cd(v2, a6, a3, v6);
    }
    int64_t v8 = v7;
    unsigned char v9 = *(char *)0x3cc564b5e3070fdb; // 0x41c989
    __asm_out_134(57, v9);
    return v8 & 0xff00 & 256 * v8 | v8 & -0x10000 | (int64_t)v9;
}

// Address range: 0x41c9b8 - 0x41c9c0
int64_t function_41c9b8(void) {
    // 0x41c9b8
    return __asm_sti();
}

// Address range: 0x41c9cd - 0x41ca0a
int64_t function_41c9cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41c9cd
    bool v1; // 0x41c9cd
    bool v2 = v1;
    int64_t v3; // 0x41c9cd
    unsigned char v4 = (char)v3; // 0x41c9cd
    bool v5 = v2 ? v4 - 60 + (char)v2 <= v4 : v4 > 59; // 0x41c9cd
    int32_t v6 = *(int32_t *)0x34fe21d284382da; // 0x41c9cf
    unsigned char v7 = (char)v6; // 0x41c9d9
    unsigned char v8 = v5 ? -65 : -66; // 0x41c9d9
    int64_t v9 = (int64_t)(v7 - v8) | (int64_t)(v6 & -256); // 0x41c9dd
    if (a4 == 0) {
        v9 = __asm_sti();
    }
    bool v10 = v5 | v8 > v7; // 0x41c9d9
    int64_t v11; // 0x41c9cd
    int64_t v12 = (int64_t)&v11; // bp-8, 0x41c9df
    int32_t * v13 = (int32_t *)(2 * a3 + 56); // 0x41c9e0
    *v13 = (int32_t)(int64_t)&v12;
    uint32_t v14 = (int32_t)v9; // 0x41c9ea
    uint32_t v15 = (v10 ? -0x5215ebc3 : -0x5215ebc4) + v14; // 0x41c9ea
    bool v16 = v10 ? v15 <= v14 : v14 > 0x5215ebc3; // 0x41c9ea
    int32_t * v17 = (int32_t *)(v3 - 100 + 2 * (int64_t)v15); // 0x41c9ef
    uint32_t v18 = *v17; // 0x41c9ef
    uint32_t v19 = v18 + (int32_t)a3; // 0x41c9ef
    uint32_t v20 = v19 + (int32_t)v16; // 0x41c9ef
    bool v21 = v16 ? v20 <= v18 : v19 < v18; // 0x41c9ef
    *v17 = v20;
    int32_t v22 = *(int32_t *)0xd6734c2; // 0x41c9f3
    int64_t v23 = (int32_t)a1 - v22 + (int32_t)v21; // 0x41c9f3
    __asm_frstor(*(int864_t *)v23);
    char v24 = *(char *)(v3 & -0xff01 | (int64_t)&g3); // 0x41c9fc
    int64_t result = __asm_int1(v23, 0xd673465, a3, a4 & -256 | (int64_t)(v24 | (char)a4)); // 0x41ca02
    *(int64_t *)((int64_t)*v13 - 8) = v23;
    return result;
}

// Address range: 0x41ca45 - 0x41ca46
int64_t function_41ca45(void) {
    // 0x41ca45
    int64_t result; // 0x41ca45
    return result;
}

// Address range: 0x41ca60 - 0x41ca66
int64_t function_41ca60(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41ca60
    return function_41ca45();
}

// Address range: 0x41ca90 - 0x41ca95
int64_t function_41ca90(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41ca90
    int64_t result; // 0x41ca90
    return result;
}

// Address range: 0x41caa2 - 0x41caa6
int64_t function_41caa2(int64_t a1) {
    // 0x41caa2
    int64_t v1; // 0x41caa2
    return __asm_int1(a1, v1, v1, v1);
}

// Address range: 0x41caf5 - 0x41cb01
int64_t function_41caf5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41caf5
    int64_t v1; // 0x41caf5
    __asm_outsb((int16_t)a3, (char)v1);
    return function_30a27f88();
}
