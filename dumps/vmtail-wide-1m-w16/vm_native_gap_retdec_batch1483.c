/*
 * Targeted RetDec C for native executable gap queue batch 1483.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x269bc2-0x269dc2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x269dc2-0x269fc2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x269fc2-0x26a1c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26a1c2-0x26a3c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26a3c2-0x26a5c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26a5c2-0x26a7c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26a7c2-0x26a821 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3bb459-0x3bb659 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3bb659-0x3bb859 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3bb859-0x3bba59 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3bba59-0x3bbc59 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3bbc59-0x3bbe59 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3bbe59-0x3bc059 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3bc059-0x3bc0e4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x46e47e-0x46e67e rank=- name=- kind=- bytes=- uncovered=-
 *   0x46e67e-0x46e87e rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g7;
extern int g8;
extern int g9;
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

int64_t function_20f11de();
int64_t function_269bc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_269bf7(int64_t a1, int64_t a2);
int64_t function_269c0f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_269c73(void);
int64_t function_269cae(void);
int64_t function_269cc9(void);
int64_t function_269d28(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_269da9(void);
int64_t function_269e58(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_269e91(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_269ee7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_269ef7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_269fc1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_269fe8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_26a0a7(void);
int64_t function_26a0c5(void);
int64_t function_26a0cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_26a0fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_26a15c(void);
int64_t function_26a22c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_26a269(int64_t a1);
int64_t function_26a2cb(int64_t a1);
int64_t function_26a45f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26a4cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26a51e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26a544(int64_t a1, int64_t a2);
int64_t function_26a554(int64_t a1);
int64_t function_26a55e(void);
int64_t function_26a56c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26a60e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, uint64_t a5, int64_t a6);
int64_t function_26a6ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3165fce();
int64_t function_3bb459(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3bb5d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3bb722(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3bb843(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3bb96d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3bbacf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3bbc2a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3bbd9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3bbee4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_46e47e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_46e4a6(int64_t a1);
int64_t function_46e4fa(void);
int64_t function_46e506(int64_t a1, int64_t a2, int64_t a3);
int64_t function_46e52a(int64_t a1);
int64_t function_46e573(int64_t a1);
int64_t function_46e5d4(int64_t a1);
int64_t function_46e5fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_46e616(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_46e6cc(int64_t a1);
int64_t function_46e6f8(void);
int64_t function_46e702(void);
int64_t function_46e754(void);
int64_t function_46e852(void);
int64_t function_65f2315();
int64_t function_75fa110();
int64_t function_a6ef470();
int64_t function_c823b();
int64_t unknown_18f7e248();
int64_t unknown_199b4c79();
int64_t unknown_1cdfb6e5();
int64_t unknown_23ff73e6();
int64_t unknown_2abec339();
int64_t unknown_39e7849d();
int64_t unknown_3b28a6b0();
int64_t unknown_3c7c688f();
int64_t unknown_3d288815();
int64_t unknown_3d381e68();
int64_t unknown_582c86b2();
int64_t unknown_62af65f2();
int64_t unknown_70317743();
int64_t unknown_7569e034();
int64_t unknown_77db840();
int64_t unknown_ffffffff802cbbc8();
int64_t unknown_ffffffff8628f030();
int64_t unknown_ffffffff9031778e();
int64_t unknown_ffffffffad6bea31();
int64_t unknown_ffffffffad6c6ebd();
int64_t unknown_fffffffff91c555c();

// Address range: 0x269bc2 - 0x269be7
int64_t function_269bc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x269bc2
    unknown_ffffffff802cbbc8();
    int64_t v1; // 0x269bc2
    int32_t * v2 = (int32_t *)(v1 + 0x27e89825); // 0x269bc7
    uint32_t v3 = *v2; // 0x269bc7
    *v2 = (int32_t)a4;
    char * v4 = (char *)((int64_t)v3 - 126); // 0x269bd6
    *v4 = *v4 + (char)(*(int32_t *)-0x14c0d4fe17e6ccf2 / 256);
    *(char *)a3 = (char)(v3 / 256);
    bool v5; // 0x269bc2
    return unknown_23ff73e6((v5 ? -1 : 1) + a1);
}

// Address range: 0x269bf7 - 0x269bff
int64_t function_269bf7(int64_t a1, int64_t a2) {
    // 0x269bf7
    int64_t result; // 0x269bf7
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x269c0f - 0x269c73
int64_t function_269c0f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x269c0f
    int64_t v1; // 0x269c0f
    char * v2 = (char *)(v1 + 0x2a2f6d4); // 0x269c0f
    *v2 = -*v2;
    int64_t v3; // 0x269c0f
    *(char *)a1 = *(char *)&v3 / 2;
    int64_t v4 = a1; // bp-8, 0x269c20
    int64_t v5 = unknown_ffffffffad6bea31(); // 0x269c2b
    int32_t * v6 = (int32_t *)v5; // 0x269c31
    *v6 = *v6 & -0x623ecc33;
    int32_t * v7 = (int32_t *)(8 * v5 + a2); // 0x269c37
    *v7 = *v7 + (int32_t)(int64_t)&v4;
    bool v8; // 0x269c0f
    int64_t v9 = unknown_77db840((v8 ? -4 : 4) + a1); // 0x269c3a
    int32_t * v10 = (int32_t *)(a2 + 39); // 0x269c3f
    *v10 = *v10 + (*(int32_t *)0x2eb91dfe0013f193 >> 31);
    int32_t v11 = v9; // 0x269c44
    *(int32_t *)0x3a29e3c8b401e896 = v11;
    int64_t v12 = (int64_t)(v11 >> 31 & -0xff01) | (int64_t)&g4; // 0x269c4e
    int64_t v13; // 0x269c0f
    __asm_outsd((int16_t)v12, *(int32_t *)&v13);
    unknown_fffffffff91c555c();
    int64_t v14 = __asm_int3(); // 0x269c63
    float80_t v15; // 0x269c0f
    *(int16_t *)(a2 + (int64_t)&g1) = (int16_t)v15;
    return (int64_t)(*(int32_t *)v12 & (int32_t)v14);
}

// Address range: 0x269c73 - 0x269c78
int64_t function_269c73(void) {
    // 0x269c73
    return function_20f11de();
}

// Address range: 0x269cae - 0x269cb1
int64_t function_269cae(void) {
    // 0x269cae
    int64_t result; // 0x269cae
    return result;
}

// Address range: 0x269cc9 - 0x269ccc
int64_t function_269cc9(void) {
    // 0x269cc9
    int64_t result; // 0x269cc9
    return result;
}

// Address range: 0x269d28 - 0x269d5c
int64_t function_269d28(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x269d28
    int64_t v1; // 0x269d28
    char v2 = v1; // 0x269d28
    __asm_out_133(-47, v2);
    char v3 = (uint64_t)v1 / 256; // 0x269d2c
    *(char *)-0x421985cd = *(char *)-0x421985cd + v3;
    *(char *)a4 = (char)v1 + v3;
    int16_t v4 = a3; // 0x269d35
    char v5 = __asm_insb(v4); // 0x269d35
    char * v6 = (char *)a1; // 0x269d35
    *v6 = v5;
    __asm_out(v4, v2);
    char * v7 = (char *)(v1 + 0x1542c4ab); // 0x269d38
    unsigned char v8 = *v7; // 0x269d38
    *v7 = v8 / 2 | 128 * v8;
    int64_t result = v1 & -0xff01 | (int64_t)&g8; // 0x269d45
    int64_t v9; // 0x269d28
    *v6 = *(char *)&v9 + (char)(a4 / 256);
    char * v10 = (char *)result; // 0x269d4e
    *v10 = *v10 + (char)result;
    *(char *)-0x137540a9 = *(char *)-0x137540a9 + v3;
    return result;
}

// Address range: 0x269da9 - 0x269dac
int64_t function_269da9(void) {
    // 0x269da9
    int64_t result; // 0x269da9
    return result;
}

// Address range: 0x269e58 - 0x269e90
int64_t function_269e58(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x269e58
    int64_t v1; // 0x269e58
    int64_t v2 = unknown_3d381e68() + v1; // 0x269e67
    int32_t * v3 = (int32_t *)(a4 - 75 + 4 * v1); // 0x269e69
    int32_t v4 = *v3 + (int32_t)a1; // 0x269e69
    *v3 = v4;
    if (v4 != 0) {
        // 0x269e8f
        return 0x10000 * (int32_t)v2 >> 16;
    }
    // 0x269e71
    *(char *)a1 = (char)v2;
    bool v5; // 0x269e58
    int64_t v6 = (v5 ? -1 : 1) + a1; // 0x269e72
    unknown_199b4c79(v6);
    __asm_int3();
    *(int864_t *)(a2 - 0x17c3fb10) = (int864_t)__asm_fnsave();
    int64_t v7 = v6 + a3; // 0x269e7f
    return unknown_3c7c688f((int32_t)v7, *(int32_t *)((v7 & 0xffffffff) - 0x65f3f5a7));
}

// Address range: 0x269e91 - 0x269ed1
int64_t function_269e91(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4; // bp-8, 0x269e91
    int64_t v2 = a4; // 0x269e91
    int64_t v3 = (int64_t)&v1; // 0x269e91
    int64_t v4; // 0x269e91
    int64_t v5 = v4;
    int3_t v6; // 0x269e91
    *(int32_t *)(a3 + 0x416501e8) = (int32_t)__frontend_reg_load_fpr(v6);
    *(char *)a1 = __asm_insb((int16_t)a3);
    unsigned char v7 = *(char *)v5; // 0x269e99
    int64_t v8; // 0x269e91
    int64_t v9 = v8 & -0xff01 | (int64_t)"_MODE_CENTAUR"; // 0x269e9b
    v2 += 0x1e88838;
    __asm_int(59);
    char * v10 = (char *)(v5 + 0x730aba2d + 8 * v5); // 0x269ea5
    char v11 = *v10; // 0x269ea5
    *v10 = (char)(v7 > (char)(v8 / 256)) + (char)v9 + v11;
    int64_t v12 = unknown_582c86b2(); // 0x269eac
    int64_t v13 = *(int64_t *)v3; // 0x269eb5
    int64_t result = unknown_ffffffffad6c6ebd(); // 0x269eb6
    *(char *)0x54b7f201e8bbbb83 = (char)result;
    v6++;
    v8 = v9;
    v3 += 8;
    while ((char)v12 >= 229) {
        // 0x269e92
        v5 = result;
        *(int32_t *)(a3 + 0x416501e8) = (int32_t)__frontend_reg_load_fpr(v6);
        *(char *)a1 = __asm_insb((int16_t)a3);
        v7 = *(char *)v5;
        v9 = v8 & -0xff01 | (int64_t)"_MODE_CENTAUR";
        v2 += 0x1e88838;
        __asm_int(59);
        v10 = (char *)(v5 + 0x730aba2d + 8 * v5);
        v11 = *v10;
        *v10 = (char)(v7 > (char)(v8 / 256)) + (char)v9 + v11;
        v12 = unknown_582c86b2();
        v13 = *(int64_t *)v3;
        result = unknown_ffffffffad6c6ebd();
        *(char *)0x54b7f201e8bbbb83 = (char)result;
        v6++;
        v8 = v9;
        v3 += 8;
    }
    char * v14 = (char *)(result + 116); // 0x269ec7
    *v14 = *v14 + (char)(result / 256);
    int32_t * v15 = (int32_t *)v2; // 0x269ecc
    *v15 = *v15 + (int32_t)v13;
    return result;
}

// Address range: 0x269ee7 - 0x269ef1
int64_t function_269ee7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x269ee7
    int64_t result; // 0x269ee7
    return result;
}

// Address range: 0x269ef7 - 0x269fb0
int64_t function_269ef7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a1;
    int64_t v2; // 0x269ef7
    uint32_t v3 = (int32_t)v2 >> 31; // 0x269f08
    char * v4 = (char *)(v2 + 0x1e8f800); // 0x269f09
    *v4 = *v4 + (char)(v2 / 256);
    uint32_t v5 = *(int32_t *)-0x5fff7fffd93d1489; // 0x269f0f
    uint32_t v6 = (int32_t)v2; // 0x269f1e
    int64_t v7; // 0x269ef7
    *(int32_t *)v7 = *(int32_t *)&v7 + v6;
    *(char *)-0x6fd8c766 = *(char *)-0x6fd8c766 + (char)(v5 / 256);
    uint32_t v8 = (int32_t)a2 - 0x414dfe18; // 0x269f26
    int64_t v9 = v8; // 0x269f26
    uint32_t v10 = *(int32_t *)(a2 - 100); // 0x269f28
    int32_t v11 = v8 < 0xbeb201e8; // 0x269f28
    uint32_t v12 = v10 + v6; // 0x269f28
    int32_t v13 = v12 + v11; // 0x269f28
    int32_t v14 = v13 + v11; // 0x269f28
    unsigned char v15 = llvm_ctpop_i8((char)v13); // 0x269f28
    int64_t v16 = v8 < 0xbeb201e8 ? v13 <= v6 : v12 < v6; // 0x269f2b
    int64_t v17 = v9 - 8; // 0x269f2b
    bool v18; // 0x269ef7
    *(int64_t *)v17 = 0x4000 * (int64_t)v18 | 1024 * (int64_t)v18 | 512 * (int64_t)v18 | 256 * (int64_t)v18 | v16 | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v13 < 0) | 16 * (int64_t)(v6 % 16 + v11 + v10 % 16 > 15) | 4 * (int64_t)(v15 % 2 == 0) | 2048 * (int64_t)(((v14 ^ v6) & (v14 ^ v10)) < 0) | 2;
    __asm_out_133(-33, (char)(a4 / 256 + (int64_t)v5));
    int64_t v19 = unknown_7569e034(); // 0x269f2e
    if (v13 < 0 != ((v14 ^ v6) & (v14 ^ v10)) < 0) {
        int64_t v20 = v7;
        v7 = v20 - 256 * (int64_t)v3 & 0xff00 | v20 & -0xff01;
        unknown_ffffffff9031778e();
        unknown_39e7849d();
        int32_t v21 = __asm_in((int16_t)(0x10000 * (int32_t)v19 >> 31)); // 0x269f9e
        uint32_t v22 = *(int32_t *)(int64_t)v21 + v21; // 0x269f9f
        int64_t v23 = v22; // 0x269f9f
        char v24 = *(char *)(v23 - 0x5c27e2c6); // 0x269fa8
        return 256 * (int64_t)(v24 | (char)(v22 / 256)) | v23 & 0xffff00ff;
    }
    // 0x269f35
    unknown_70317743();
    int16_t v25 = v3; // 0x269f42
    int32_t v26 = __asm_in(v25); // 0x269f42
    char v27 = *(char *)-0x8d7789f; // 0x269f49
    *(char *)-0x8d7789f = v27 + (char)((v19 + 0x5b12 + v16) / 256);
    char v28 = __asm_in_134(v25); // 0x269f4f
    int64_t result = ((int64_t)v28 | (int64_t)v26) & -256 | (int64_t)(v28 & (char)((int64_t)&g2 >> 8)); // 0x269f50
    int64_t v29 = v9 - 16; // 0x269f52
    *(int64_t *)v29 = v17;
    uint32_t v30 = *(int32_t *)&v1; // 0x269f60
    uint32_t v31 = v30 + (int32_t)v29; // 0x269f60
    *(int32_t *)v1 = v31;
    char * v32 = (char *)(result + 0xab977f6); // 0x269f62
    char v33 = *v32; // 0x269f62
    *v32 = v33 + (char)((int64_t)&g2 >> 8) + (char)(v31 < v30);
    return result;
}

// Address range: 0x269fc1 - 0x269fd3
int64_t function_269fc1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x269fc1
    int64_t v1; // 0x269fc1
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2 = v1 + a4 & 0xffff00ff | (int64_t)&g7; // 0x269fc7
    char * v3 = (char *)(v2 + 111); // 0x269fca
    *v3 = *v3 + 1 + (char)v2;
    return v1 & 0xffffffff;
}

// Address range: 0x269fe8 - 0x26a0a6
int64_t function_269fe8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x269fe8
    int64_t v1; // 0x269fe8
    int32_t v2 = *(int32_t *)(v1 - 0x332c6c + v1); // 0x269fe8
    bool v3; // 0x269fe8
    int64_t v4 = v2 + (int32_t)v1 + (int32_t)v3; // 0x269fe8
    int64_t * v5 = (int64_t *)v4; // 0x269fef
    int64_t v6 = *v5; // 0x269fef
    int64_t v7 = 0x100000000 * v1 >> 32; // 0x269ff0
    uint64_t v8 = v7 * v7 / 0x100000000; // 0x269ff0
    int32_t v9 = v6; // 0x269ff2
    *(int32_t *)0x588931b0 = *(int32_t *)0x588931b0 + v9;
    uint64_t v10 = v1 / 256; // 0x269ff8
    uint64_t v11 = v8 - v10; // 0x269ff8
    int64_t v12 = v11 % 256 | v8 & 0x7fffff00; // 0x269ff8
    int16_t v13 = v12; // 0x269ffa
    *(char *)a1 = __asm_insb(v13);
    int32_t * v14 = (int32_t *)(v1 - 0x6cdaee35); // 0x26a001
    *v14 = *v14 + v9;
    char * v15 = (char *)v12; // 0x26a007
    char v16 = v10; // 0x26a007
    *v15 = *v15 + v16;
    __asm_outsb(v13, *(char *)v6);
    *v5 = 0x3d22d99b;
    int64_t v17 = unknown_3d288815(); // 0x26a00f
    int32_t * v18 = (int32_t *)v17; // 0x26a014
    *v18 = *v18 + (int32_t)a1;
    int32_t * v19 = (int32_t *)(2 * v1 + a4); // 0x26a019
    *v19 = *v19 + (int32_t)a4;
    __asm_out_135(v13, (int32_t)v17);
    int32_t * v20 = (int32_t *)(a4 + 33); // 0x26a027
    *v20 = *v20 | (int32_t)v1;
    int64_t result = unknown_ffffffff8628f030(); // 0x26a02a
    *(char *)-0x593806c8 = *(char *)-0x593806c8 + v16;
    *v5 = -0x4771f0f3;
    char * v21 = (char *)(4 * v1 - 0x7aebb1b2 + result); // 0x26a03e
    *v21 = *v21 | (char)v11;
    int64_t v22 = v4 - 8; // 0x26a045
    *(int64_t *)v22 = 0x1ce700;
    if ((int32_t)result >= 0x93785701) {
        // 0x26a051
        return function_3165fce();
    }
    // 0x26a0a5
    *(int64_t *)(v4 - 16) = v22;
    return result;
}

// Address range: 0x26a0a7 - 0x26a0ac
int64_t function_26a0a7(void) {
    // 0x26a0a7
    int64_t result; // 0x26a0a7
    return result;
}

// Address range: 0x26a0c5 - 0x26a0cc
int64_t function_26a0c5(void) {
    // 0x26a0c5
    return function_75fa110();
}

// Address range: 0x26a0cc - 0x26a0e7
int64_t function_26a0cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x26a0cc
    int64_t result; // 0x26a0cc
    *(char *)(result + 45) = -1;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    char * v1 = (char *)(a1 - 118); // 0x26a0d1
    char v2 = (uint64_t)result / 256; // 0x26a0d1
    *v1 = *v1 ^ v2;
    char * v3 = (char *)(a4 + 36); // 0x26a0d4
    *v3 = *v3 + v2;
    int32_t * v4 = (int32_t *)(a1 - 0x36fdff53); // 0x26a0dc
    *v4 = *v4 | (int32_t)a1;
    return result;
}

// Address range: 0x26a0fd - 0x26a10e
int64_t function_26a0fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x26a0fd
    int64_t result; // 0x26a0fd
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x26a15c - 0x26a15f
int64_t function_26a15c(void) {
    // 0x26a15c
    int64_t result; // 0x26a15c
    return result;
}

// Address range: 0x26a22c - 0x26a258
int64_t function_26a22c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x26a22c
    __asm_in_136(-36);
    char * v1 = (char *)(unknown_2abec339() + 0x2cda064d); // 0x26a23b
    *v1 = *v1 + (char)a3;
    int64_t v2 = unknown_18f7e248(); // 0x26a241
    __asm_out_137(-110, (int32_t)v2);
    *(char *)a3 = (char)(a3 / 256);
    int64_t v3; // 0x26a22c
    char v4 = *(char *)&v3; // 0x26a254
    int64_t v5; // 0x26a22c
    __asm_outsb((int16_t)((a3 - (uint64_t)v5 / 256) % 256 | a3 & 0xff00), v4);
    return ((v2 + 58) % 256 | v2 & 0xffffff00) + 0xf6fe1768 & 0xffffffff;
}

// Address range: 0x26a269 - 0x26a26c
int64_t function_26a269(int64_t a1) {
    // 0x26a269
    int64_t result; // 0x26a269
    return result;
}

// Address range: 0x26a2cb - 0x26a2cc
int64_t function_26a2cb(int64_t a1) {
    // 0x26a2cb
    int64_t result; // 0x26a2cb
    return result;
}

// Address range: 0x26a45f - 0x26a484
int64_t function_26a45f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x26a45f
    *(char *)0xc73a343 = *(char *)0xc73a343 - 93;
    *(char *)(a4 + 0x3a0bdff4) = -93;
    int64_t v1; // 0x26a45f
    return v1 & 0xffffffff;
}

// Address range: 0x26a4cd - 0x26a504
int64_t function_26a4cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x26a4cd
    int64_t v1; // 0x26a4cd
    __asm_out_133(-127, (char)v1);
    *(int32_t *)0x1a89de95 = *(int32_t *)0x1a89de95 - (int32_t)a2;
    uint64_t v2 = (v1 & 0xffffffff) * (int64_t)*(int32_t *)(8 * v1 + a3); // 0x26a4e2
    __asm_outsb((int16_t)(v2 / 0x100000000), (char)a2);
    uint32_t v3 = 0x2d3a0210 * *(int32_t *)(v2 & 0xffffff00 | (int64_t)__asm_in_138(-5)); // 0x26a4f0
    __asm_out_137(-54, v3);
    int64_t v4 = ((int64_t)v3 ^ a4) & 0xff00 | (int64_t)(v3 & -0xff10); // 0x26a4f8
    char * v5 = (char *)(v4 - 103); // 0x26a4fa
    *v5 = *v5 - (char)(v2 / 0x10000000000);
    return (int64_t)(*(int32_t *)v4 & (int32_t)v4);
}

// Address range: 0x26a51e - 0x26a53d
int64_t function_26a51e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x26a51e
    int64_t v1; // 0x26a51e
    uint64_t v2 = v1;
    uint64_t v3 = v1;
    int64_t v4 = 256 * v3 & 0xff00 ^ v3; // 0x26a524
    char * v5 = (char *)v4; // 0x26a526
    *v5 = *v5 | -90;
    *(char *)a1 = (char)v3;
    *(char *)0x76eb8931 = *(char *)0x76eb8931 + (char)(v2 / 256);
    int64_t result = v4 & -256 | (int64_t)*(char *)(v3 % 256 + v2); // 0x26a536
    char * v6 = (char *)result; // 0x26a539
    unsigned char v7 = *v6; // 0x26a539
    *v6 = v7 / 2 | 128 * v7;
    return result;
}

// Address range: 0x26a544 - 0x26a547
int64_t function_26a544(int64_t a1, int64_t a2) {
    // 0x26a544
    float80_t v1; // 0x26a544
    *(int64_t *)a1 = (int64_t)v1;
    int64_t result; // 0x26a544
    return result;
}

// Address range: 0x26a554 - 0x26a555
int64_t function_26a554(int64_t a1) {
    // 0x26a554
    int64_t result; // 0x26a554
    return result;
}

// Address range: 0x26a55e - 0x26a55f
int64_t function_26a55e(void) {
    // 0x26a55e
    int64_t result; // 0x26a55e
    return result;
}

// Address range: 0x26a56c - 0x26a5e6
int64_t function_26a56c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x26a56c
    bool v1; // 0x26a56c
    if (!v1) {
        function_26a55e();
    }
    // 0x26a56e
    return unknown_1cdfb6e5() & -256 | (int64_t)__asm_in_138(3);
}

// Address range: 0x26a60e - 0x26a6b4
int64_t function_26a60e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, uint64_t a5, int64_t a6) {
    int64_t v1 = a3;
    int32_t v2; // 0x26a60e
    int64_t v3; // 0x26a60e
    int64_t v4; // 0x26a60e
    bool v5; // 0x26a60e
    if (!v5) {
        char * v6 = (char *)(v4 - 87); // 0x26a621
        *v6 = *v6 + (char)v4;
        v2 = v4;
        v3 = a1;
      lab_0x26a62a:
        // 0x26a62a
        __asm_in_138(114);
        int32_t * v7 = (int32_t *)v3; // 0x26a633
        *v7 = *v7 + v2;
        return function_65f2315();
    }
    int32_t v8 = v4;
    int64_t v9 = a1; // 0x26a684
    int64_t v10 = a2 + a4; // 0x26a682
    int64_t v11 = v10 & 0xffffffff; // 0x26a682
    v9 += (v5 ? -1 : 1);
    int32_t * v12 = (int32_t *)(v9 - 24); // 0x26a68c
    *v12 = *v12 ^ (int32_t)v4;
    int64_t v13; // 0x26a60e
    int64_t v14 = v13 + v4; // 0x26a68f
    int32_t v15 = *(int32_t *)-0x7b838668; // 0x26a691
    int32_t v16 = v9; // 0x26a691
    int32_t v17 = v15 + v16; // 0x26a691
    *(int32_t *)-0x7b838668 = v17;
    while (((v17 ^ v15) & (v17 ^ v16)) < 0) {
        int32_t * v18 = (int32_t *)v11; // 0x26a6a0
        uint32_t v19 = *v18; // 0x26a6a0
        uint32_t v20 = v19 + (int32_t)v14; // 0x26a6a0
        *v18 = v20;
        int32_t * v21 = (int32_t *)(v9 + 118); // 0x26a6a2
        uint32_t v22 = *v21; // 0x26a6a2
        int32_t v23 = v20 < v19; // 0x26a6a2
        uint32_t v24 = v23 + v8; // 0x26a6a2
        int32_t v25 = v22 - v24; // 0x26a6a2
        *v21 = v25;
        v2 = v8;
        v3 = v9;
        if (!((v20 < v19 ? v24 != -1 || v22 < v25 - v23 : v22 < v24))) {
            goto lab_0x26a62a;
        }
        unsigned char v26 = *(char *)(a4 + 39); // 0x26a6a7
        int64_t v27 = unknown_3b28a6b0(v9, (int32_t)v10); // 0x26a6aa
        unsigned char v28 = (char)v27; // 0x26a6af
        unsigned char v29 = v28 - 24 + (char)(v26 > (char)v1); // 0x26a6af
        int64_t v30 = v29; // 0x26a6af
        int64_t v31 = v27 & -256; // 0x26a6af
        if (v29 != 0 && !((v26 > (char)v1 ? v29 <= v28 : v28 > 23))) {
            // 0x26a6b4
            return v31 | v30;
        }
        // 0x26a67b
        v10 = v11 + a4;
        v11 = v10 & 0xffffffff;
        v9 += (v5 ? -1 : 1);
        v12 = (int32_t *)(v9 - 24);
        *v12 = *v12 ^ (int32_t)v4;
        v14 = ((a4 / 256 + v30) % 256 | v31) + v4;
        v15 = *(int32_t *)-0x7b838668;
        v16 = v9;
        v17 = v15 + v16;
        *(int32_t *)-0x7b838668 = v17;
    }
    uint64_t v32 = a4 % 64; // 0x26a644
    if (v32 != 0) {
        *(int64_t *)a5 = a5 >> 64 - v32 | a5 << v32;
    }
    *(char *)0x6899ce4e = *(char *)0x6899ce4e + (char)(v4 / 256);
    __asm_out_137(119, (int32_t)v14);
    *(int64_t *)((v14 & 0xffffffff) - 37) = a6;
    char v33 = v14; // 0x26a652
    *(char *)v1 = *(char *)&v1 ^ v33;
    int64_t result = v4 & 0xffffffff; // 0x26a65a
    *(int32_t *)result = 2 * (int32_t)v4;
    *(char *)(v11 + 0x793a0c30) = v33;
    return result;
}

// Address range: 0x26a6ee - 0x26a6f1
int64_t function_26a6ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x26a6ee
    int64_t result; // 0x26a6ee
    *(char *)a2 = (char)(result & a4);
    return result;
}

// Address range: 0x3bb459 - 0x3bb5d2
int64_t function_3bb459(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    char * v1 = (char *)(a4 + 36 + 4 * a4); // 0x3bb459
    *v1 = *v1 + (char)a4;
    return function_c823b(a1, a2, a3, a4, a5, a6, a7, a7);
}

// Address range: 0x3bb5d2 - 0x3bb722
int64_t function_3bb5d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3bb5d2
    bool v1; // 0x3bb5d2
    int64_t v2 = 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x3bb5d2
    int64_t v3 = v2; // bp-48, 0x3bb659
    int64_t v4 = (int64_t)&v3; // 0x3bb68c
    int64_t * v5 = (int64_t *)(v4 - 8); // 0x3bb6a3
    *v5 = 0x1988cbf9;
    int64_t * v6 = (int64_t *)(v4 - 16); // 0x3bb6a8
    *v6 = 0x484a36af;
    *(int64_t *)(v4 - 24) = v2;
    int64_t * v7 = (int64_t *)(v4 + 8); // 0x3bb6b4
    *v7 = *v5;
    *v5 = 0x1a6d94b5;
    *(int64_t *)(v4 + 32) = v3;
    *v5 = v4 + 16;
    *v6 = v3;
    int64_t v8 = *v7; // 0x3bb704
    v3 = v8;
    *v5 = v8;
    return function_c823b(a1, a2, a3, a4, a5, a6, 0x50c626f7, (int64_t)&g9);
}

// Address range: 0x3bb722 - 0x3bb843
int64_t function_3bb722(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3bb722
    int64_t v1; // bp-32, 0x3bb722
    int64_t v2 = (int64_t)&v1; // 0x3bb7ce
    int64_t * v3 = (int64_t *)(v2 - 16); // 0x3bb7da
    *v3 = 0x49f053b1;
    *(int64_t *)(v2 - 24) = a7;
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x3bb7e6
    int64_t v5 = v2 + 8; // 0x3bb7e6
    int64_t * v6 = (int64_t *)v5; // 0x3bb7e6
    *v6 = *v4;
    *v4 = 0x72c60c0f;
    *v3 = a2;
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = a1;
    *v3 = a2;
    *v4 = v5;
    int64_t v7 = *v6; // 0x3bb82c
    v1 = v7;
    *v4 = v7;
    return function_c823b(*v4, a2, a3, a4, a5, a6, 0x3b0df2, (int64_t)&g9);
}

// Address range: 0x3bb843 - 0x3bb96d
int64_t function_3bb843(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3bb843
    int64_t v1; // 0x3bb843
    bool v2; // 0x3bb843
    return function_c823b(a1, a2, a3, v1, v1, v1, 0x144c2c01, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x3bb96d - 0x3bbacf
int64_t function_3bb96d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3bb96d
    return function_c823b(a1, a2, a3, a4, a5, a6, 0x3ea47294, 310);
}

// Address range: 0x3bbacf - 0x3bbc2a
int64_t function_3bbacf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3bbacf
    bool v1; // 0x3bbacf
    int64_t v2 = 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x3bbacf
    int64_t v3 = 0x4b82edb2; // bp-40, 0x3bbb52
    int64_t v4 = (int64_t)&v3; // 0x3bbb9d
    int64_t v5 = v4 - 8; // 0x3bbba5
    int64_t * v6 = (int64_t *)v5; // 0x3bbba5
    *v6 = 0x6b520fc1;
    int64_t * v7 = (int64_t *)(v4 - 16); // 0x3bbbaa
    *(int64_t *)(v4 - 24) = v2;
    *v7 = v2;
    int64_t * v8 = (int64_t *)(v4 + 8); // 0x3bbbc0
    *v8 = *v6;
    *v6 = a2;
    *v7 = v5;
    *v6 = 0x3b1cbf;
    *(int64_t *)(v4 + 32) = v3;
    *v6 = v4;
    v3 = v4 + 16;
    *v8 = v4 + 24;
    return function_c823b(a1, *v6, a3, a4, a5, v2, v3, 0xb35321c);
}

// Address range: 0x3bbc2a - 0x3bbd9f
int64_t function_3bbc2a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3bbc2a
    return function_c823b(a1, a2, 0x3b1f4a, a4, a5, a6, a4, (int64_t)&g9);
}

// Address range: 0x3bbd9f - 0x3bbee4
int64_t function_3bbd9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3bbd9f
    int64_t v1; // bp-48, 0x3bbd9f
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x3bbd9f
    return function_c823b(a1, a2, a3, a4, v2, v2, v2, a1);
}

// Address range: 0x3bbee4 - 0x3bc064
int64_t function_3bbee4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3bbee4
    int64_t v1; // bp-40, 0x3bbee4
    int64_t v2 = (int64_t)&v1; // 0x3bbfe6
    v1 = a7;
    *(int64_t *)(v2 + 16) = a7;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x3bc011
    *v3 = 310;
    *(int64_t *)(v2 + 32) = v1;
    int64_t v4 = v2 + 8; // 0x3bc014
    int64_t * v5 = (int64_t *)v4; // 0x3bc018
    v1 = *v5;
    *v3 = v4;
    v1 = *v5;
    *v3 = v4;
    return function_c823b(a1, a2, a3, a4, a5, a6, 0x3b2432, (int64_t)&g9);
}

// Address range: 0x46e47e - 0x46e47f
int64_t function_46e47e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x46e47e
    int64_t result; // 0x46e47e
    __asm_out((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x46e4a6 - 0x46e4a7
int64_t function_46e4a6(int64_t a1) {
    // 0x46e4a6
    int64_t result; // 0x46e4a6
    return result;
}

// Address range: 0x46e4fa - 0x46e4fb
int64_t function_46e4fa(void) {
    // 0x46e4fa
    int64_t result; // 0x46e4fa
    return result;
}

// Address range: 0x46e506 - 0x46e50a
int64_t function_46e506(int64_t a1, int64_t a2, int64_t a3) {
    // 0x46e506
    return __asm_in((int16_t)a3);
}

// Address range: 0x46e52a - 0x46e52b
int64_t function_46e52a(int64_t a1) {
    // 0x46e52a
    int64_t result; // 0x46e52a
    return result;
}

// Address range: 0x46e573 - 0x46e577
int64_t function_46e573(int64_t a1) {
    // 0x46e573
    int64_t result; // 0x46e573
    return result;
}

// Address range: 0x46e5d4 - 0x46e5d8
int64_t function_46e5d4(int64_t a1) {
    // 0x46e5d4
    int64_t result; // 0x46e5d4
    return result;
}

// Address range: 0x46e5fd - 0x46e60b
int64_t function_46e5fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x46e5fd
    unknown_62af65f2(a1, a2, a3, a4, a5);
    return function_a6ef470();
}

// Address range: 0x46e616 - 0x46e651
int64_t function_46e616(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x46e616
    int64_t result; // 0x46e616
    bool v1; // 0x46e616
    if (true != !v1) {
        // 0x46e618
        return result;
    }
    char * v2 = (char *)(a3 - 6); // 0x46e64a
    *v2 = *v2 ^ (char)result;
    return result;
}

// Address range: 0x46e6cc - 0x46e6cf
int64_t function_46e6cc(int64_t a1) {
    // 0x46e6cc
    int64_t result; // 0x46e6cc
    return result;
}

// Address range: 0x46e6f8 - 0x46e6f9
int64_t function_46e6f8(void) {
    // 0x46e6f8
    int64_t result; // 0x46e6f8
    return result;
}

// Address range: 0x46e702 - 0x46e703
int64_t function_46e702(void) {
    // 0x46e702
    int64_t result; // 0x46e702
    return result;
}

// Address range: 0x46e754 - 0x46e757
int64_t function_46e754(void) {
    // 0x46e754
    int64_t result; // 0x46e754
    bool v1; // 0x46e754
    if (v1) {
        result = function_46e6f8();
    }
    // 0x46e756
    return result;
}

// Address range: 0x46e852 - 0x46e854
int64_t function_46e852(void) {
    // 0x46e852
    int64_t result; // 0x46e852
    return result;
}
