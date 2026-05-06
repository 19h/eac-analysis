/*
 * Targeted RetDec C for native executable gap queue batch 837.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1782aa-0x1784aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x28d84c-0x28da4c rank=- name=- kind=- bytes=- uncovered=-
 *   0x28da4c-0x28dc4c rank=- name=- kind=- bytes=- uncovered=-
 *   0x28dc4c-0x28de4c rank=- name=- kind=- bytes=- uncovered=-
 *   0x28de4c-0x28e04c rank=- name=- kind=- bytes=- uncovered=-
 *   0x28e04c-0x28e24c rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d4469-0x2d4669 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d4669-0x2d4869 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1548458();
int64_t function_1782aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1782c8(int64_t a1);
int64_t function_1782eb(void);
int64_t function_1782f3(int64_t a1);
int64_t function_178331(int64_t a1, int64_t a2, int64_t a3);
int64_t function_178390(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1783a5(void);
int64_t function_1783b9(int64_t a1);
int64_t function_1783d6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_178409(void);
int64_t function_17840a(int64_t a1);
int64_t function_17846d(void);
int64_t function_17848f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_215bf85();
int64_t function_281a92a();
int64_t function_28d84c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_28d875(int64_t a1, int64_t a2);
int64_t function_28d87b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_28d93c(int64_t a1);
int64_t function_28d95e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28d996(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28d9be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_28d9ce(void);
int64_t function_28d9f0(void);
int64_t function_28d9f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28da2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_28da7a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_28daf2(int64_t a1);
int64_t function_28db08(void);
int64_t function_28db14(void);
int64_t function_28db4e(void);
int64_t function_28db85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_28dbc1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28dc23(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_28dc55(void);
int64_t function_28dc7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28dcfa(int64_t a1, int64_t a2, int64_t a3);
int64_t function_28ddd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28deac(void);
int64_t function_28ded3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_28def6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_28def9(void);
int64_t function_28df01(int64_t a1, int64_t a2);
int64_t function_28df09(int64_t a1);
int64_t function_28df30(void);
int64_t function_28df43(void);
int64_t function_28df48(int64_t a1);
int64_t function_28df4b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_28dff2(int64_t a1, int64_t a2);
int64_t function_28e032(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28e137(void);
int64_t function_28e14c(void);
int64_t function_28e1a8(void);
int64_t function_28e1b6(void);
int64_t function_28e1d2(void);
int64_t function_28e1d4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_28e20f(int64_t a1);
int64_t function_2961e3();
int64_t function_2d4413();
int64_t function_2d4469(void);
int64_t function_2d446f(void);
int64_t function_2d447a(void);
int64_t function_2d4483(uint64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d44ba(int64_t a1);
int64_t function_2d4517(void);
int64_t function_2d457a(void);
int64_t function_2d4594(void);
int64_t function_2d4598(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d4600(void);
int64_t function_2d4605(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2d4617(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d4626(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d4629(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d4633(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2d4644(void);
int64_t function_2d4677(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2d467a(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_2d46de(int64_t a1);
int64_t function_2d46f1(void);
int64_t function_2d4741(void);
int64_t function_2d4749(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d47b1(void);
int64_t function_2d482a(void);
int64_t function_30e81c();
int64_t function_3fc1d8e9();
int64_t function_416ede69();
int64_t function_4ec5e94();
int64_t function_d046d61();
int64_t function_ffffffffb1f2c5ef();
int64_t function_ffffffffb887f1ee();
int64_t function_ffffffffbf2630b6();
int64_t function_ffffffffdb2c1f15();
int64_t function_ffffffffe8676d8a();
int64_t function_fffffffffc2f1a68();
int64_t unknown_152f5eeb();
int64_t unknown_28d10100();
int64_t unknown_2f8764ad();
int64_t unknown_3129b9a3();
int64_t unknown_312e6d6f();
int64_t unknown_343c400c();
int64_t unknown_3d4aeec2();
int64_t unknown_3dff5c6f();
int64_t unknown_43db5e8d();
int64_t unknown_591dd78c();
int64_t unknown_6d2b76fc();
int64_t unknown_e75942b();
int64_t unknown_ffffffffaf11aeb7();
int64_t unknown_ffffffffbbaaff94();
int64_t unknown_ffffffffd416fc36();
int64_t unknown_ffffffffdf502db4();
int64_t unknown_ffffffffe920ee2b();

// Address range: 0x1782aa - 0x1782c3
int64_t function_1782aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1782aa
    int64_t v1; // 0x1782aa
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x1782aa
    char v4 = *(char *)&v3; // 0x1782b9
    char * v5 = (char *)((a4 & -256 | (int64_t)(v4 & (char)a4)) - 42); // 0x1782bb
    *v5 = *v5 - (char)((uint64_t)v1 / 256);
    return (0x10000 * (int32_t)v2 >> 16) + 0x13d0000;
}

// Address range: 0x1782c8 - 0x1782cb
int64_t function_1782c8(int64_t a1) {
    // 0x1782c8
    int64_t result; // 0x1782c8
    return result;
}

// Address range: 0x1782eb - 0x1782ec
int64_t function_1782eb(void) {
    // 0x1782eb
    int64_t result; // 0x1782eb
    return result;
}

// Address range: 0x1782f3 - 0x1782f4
int64_t function_1782f3(int64_t a1) {
    // 0x1782f3
    int64_t result; // 0x1782f3
    return result;
}

// Address range: 0x178331 - 0x178346
int64_t function_178331(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 59); // 0x17833d
    *v1 = *v1 - 0x6c5d48c7;
    return function_ffffffffdb2c1f15();
}

// Address range: 0x178390 - 0x17839a
int64_t function_178390(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x178390
    *(char *)(a4 - 37) = (char)(a4 / 256);
    return function_1783b9((int64_t)&g2);
}

// Address range: 0x1783a5 - 0x1783a6
int64_t function_1783a5(void) {
    // 0x1783a5
    int64_t result; // 0x1783a5
    return result;
}

// Address range: 0x1783b9 - 0x1783d5
int64_t function_1783b9(int64_t a1) {
    // 0x1783b9
    int64_t v1; // 0x1783b9
    uint64_t v2 = v1;
    int64_t v3 = v1;
    *(char *)v3 = (char)v3 + (char)v2;
    *(char *)-0x984f32c = *(char *)-0x984f32c + (char)(v2 / 256);
    return v3 & -256 | 2 * v3 & 130 | 125;
}

// Address range: 0x1783d6 - 0x178408
int64_t function_1783d6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1783d6
    int64_t v1; // 0x1783d6
    int64_t v2 = v1 | v1 / 256;
    int64_t v3 = 256 * v2 & 0xff00 | v1 & -0xff01; // 0x1783d6
    int32_t * v4 = (int32_t *)(a3 + 67); // 0x1783df
    *v4 = *v4 + (int32_t)v1;
    unsigned char v5 = *(char *)(v3 - 0x5afec2f3); // 0x1783e2
    int64_t v6; // 0x1783d6
    int64_t v7 = v6;
    *(char *)v7 = *(char *)&v6 + (char)v7;
    char * v8 = (char *)v3; // 0x1783ea
    unsigned char v9 = *v8; // 0x1783ea
    unsigned char v10 = v9 + (char)a3; // 0x1783ea
    *v8 = v10;
    int32_t v11 = *(int32_t *)&v6; // 0x1783ec
    int64_t v12 = v6;
    *(int32_t *)v12 = v11 + (int32_t)(v10 < v9) + (int32_t)v12;
    *(char *)0x7499a5f5 = *(char *)0x7499a5f5 + (char)v2;
    *(int32_t *)0x43c46c611da7fecb = (int32_t)v6;
    int32_t v13 = *(int32_t *)(v1 - 11); // 0x1783fe
    return function_1548458(0xfbb1a586, (int64_t)(-117 * v13), 256 * (int64_t)v5 | a3 & -0xff01);
}

// Address range: 0x178409 - 0x17840a
int64_t function_178409(void) {
    // 0x178409
    int64_t result; // 0x178409
    return result;
}

// Address range: 0x17840a - 0x17840d
int64_t function_17840a(int64_t a1) {
    // 0x17840a
    int64_t v1; // 0x17840a
    int64_t v2 = v1;
    bool v3; // 0x17840a
    return (v2 - (v3 ? 12 : 11)) % 256 | v2 & -256;
}

// Address range: 0x17846d - 0x17846e
int64_t function_17846d(void) {
    // 0x17846d
    int64_t result; // 0x17846d
    return result;
}

// Address range: 0x17848f - 0x178495
int64_t function_17848f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 35); // 0x178491
    int64_t result; // 0x17848f
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x28d84c - 0x28d85e
int64_t function_28d84c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x28d84c
    int64_t result; // 0x28d84c
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x28d875 - 0x28d87b
int64_t function_28d875(int64_t a1, int64_t a2) {
    // 0x28d875
    int64_t v1; // 0x28d875
    *(char *)a1 = (char)v1;
    return v1 & -104;
}

// Address range: 0x28d87b - 0x28d93b
int64_t function_28d87b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x28d87b
    char * v3 = (char *)(v2 + 80); // 0x28d87b
    *v3 = *v3 + (char)a1;
    char * v4 = (char *)(a3 + 71); // 0x28d884
    unsigned char v5 = *v4; // 0x28d884
    unsigned char v6 = (char)a4 % 32; // 0x28d884
    bool v7 = (int32_t)v2 < 0x5c996f01; // 0x28d884
    if (v6 != 0) {
        *v4 = v5 >> v6 | (char)((int32_t)v2 < 0x5c996f01) << 8 - v6 | (char)((int16_t)v5 << (int16_t)(9 - v6));
        v7 = (v5 & 1 << v6 - 1) != 0;
    }
    __asm_out_133(59, (v7 ? -0x5b07f7c5 : -0x5b07f7c6) + (int32_t)unknown_43db5e8d());
    uint64_t v8 = v2 + a3; // 0x28d89e
    *(char *)a1 = __asm_insb((int16_t)a3);
    char * v9 = (char *)(a5 - 0x57bd810b); // 0x28d8a1
    *v9 = *v9 ^ 46;
    *(char *)(a5 - 4) = (char)((a4 + 0xffff) / 256);
    int64_t v10 = 0x5fa73a08; // bp-8, 0x28d8c0
    char v11 = *(char *)0x7ff80fcc + (char)(v8 / 256); // 0x28d8c5
    *(char *)0x7ff80fcc = v11;
    int64_t v12 = a5 & 0xffffffff; // 0x28d8cb
    int64_t v13 = a4 - 2; // 0x28d8cc
    if (v13 != 0 == v11 == 0) {
        int64_t v14 = __asm_iretd(v12); // 0x28d931
        *(int32_t *)v14 = (int32_t)((int64_t)&v10 & a5);
        char v15 = (v14 ^ v8) / 256; // 0x28d938
        return v14 & -0xff01 | 0x4000 * (int64_t)(v15 == 0) | 0x8000 * (int64_t)(v15 < 0) | 1024 * (int64_t)(llvm_ctpop_i8(v15) % 2 == 0) | 512;
    }
    int32_t v16 = (int32_t)a1 - *(int32_t *)(a3 + 4); // 0x28d8ce
    unsigned char v17 = *(char *)&v1; // 0x28d8d1
    bool v18; // 0x28d87b
    int64_t v19 = v18 ? -1 : 1; // 0x28d8d1
    int64_t v20 = v1 + v19; // 0x28d8d1
    v1 = v20;
    if (v13 == 0) {
        // 0x28d8e5
        return (int64_t)(v16 & -256) | (int64_t)v17;
    }
    // 0x28d8d7
    *(char *)v12 = *(char *)v20;
    return function_2961e3(v19 + v12, v1 + v19, (int64_t)(v16 & 0xff00) ^ a3, v13);
}

// Address range: 0x28d93c - 0x28d93d
int64_t function_28d93c(int64_t a1) {
    // 0x28d93c
    int64_t result; // 0x28d93c
    return result;
}

// Address range: 0x28d95e - 0x28d973
int64_t function_28d95e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x28d95e
    int64_t result; // 0x28d95e
    char * v1 = (char *)(result - 41); // 0x28d962
    bool v2; // 0x28d95e
    *v1 = (char)v2 - (char)(result / 256) + *v1;
    uint32_t v3 = *(int32_t *)-0x71119bab; // 0x28d967
    uint32_t v4 = v3 + (int32_t)result; // 0x28d967
    *(int32_t *)-0x71119bab = v4;
    char * v5 = (char *)(a1 + 110); // 0x28d96d
    *v5 = *v5 + (char)(result / 256) + (char)(v4 < v3);
    return result;
}

// Address range: 0x28d996 - 0x28d9a7
int64_t function_28d996(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x28d996
    int64_t v1; // 0x28d996
    bool v2; // 0x28d996
    return (v1 & 0xffff00ff | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512) + 0xfec2ff9a & 0xffffffff;
}

// Address range: 0x28d9be - 0x28d9ca
int64_t function_28d9be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = __asm_wait(a1, a2, a3, a4, a5); // 0x28d9be
    int64_t v1; // 0x28d9be
    *(int32_t *)a4 = (int32_t)v1 + 1;
    int32_t * v2 = (int32_t *)(v1 + 0xac8148c); // 0x28d9c1
    bool v3; // 0x28d9be
    *v2 = (int32_t)v3 + (int32_t)v1 + *v2;
    return result;
}

// Address range: 0x28d9ce - 0x28d9cf
int64_t function_28d9ce(void) {
    // 0x28d9ce
    int64_t result; // 0x28d9ce
    return result;
}

// Address range: 0x28d9f0 - 0x28d9f2
int64_t function_28d9f0(void) {
    // 0x28d9f0
    return function_28d9ce();
}

// Address range: 0x28d9f2 - 0x28da2e
int64_t function_28d9f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x28d9f2
    int64_t v1; // 0x28d9f2
    int64_t v2 = v1;
    int64_t v3 = a1;
    int224_t v4 = *(int224_t *)&v3; // 0x28d9f2
    __asm_fldenv(v4);
    uint32_t v5 = (int32_t)a4 % 32; // 0x28d9f4
    v3 = v4;
    bool v6; // 0x28d9f2
    if (v5 != 0) {
        *(int32_t *)v2 = (int32_t)v2 << v5 | (int32_t)((v2 & 0xffffffff) >> (int64_t)(33 - v5)) | (int32_t)v6 << v5 - 1;
    }
    int64_t v7 = unknown_6d2b76fc(); // 0x28d9f6
    *(int32_t *)v3 = (int32_t)v7;
    int64_t v8 = v3 + (v6 ? -4 : 4); // 0x28d9fe
    int16_t v9 = a3; // 0x28d9ff
    *(char *)v8 = __asm_insb(v9);
    *(int32_t *)v8 = __asm_insd(v9);
    char * v10 = (char *)v7; // 0x28da01
    *v10 = *v10 - (char)a3;
    *(char *)0x5b1fb90a = *(char *)0x5b1fb90a + (char)(v1 / 256);
    __asm_iretd(v8);
    *(int32_t *)a3 = (int32_t)v1;
    __asm_hlt();
    return function_fffffffffc2f1a68();
}

// Address range: 0x28da2e - 0x28da54
int64_t function_28da2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x28da2e
    int64_t v1; // 0x28da2e
    int32_t v2 = v1;
    *(int32_t *)a4 = 2 * v2 | (int32_t)(v2 < 0);
    char v3 = *(char *)(v1 - 96); // 0x28da30
    int64_t v4; // 0x28da2e
    *(int32_t *)a2 = *(int32_t *)&v4 + (int32_t)a2;
    char * v5 = (char *)((v1 & -177) + v1); // 0x28da3c
    *v5 = *v5 + (char)a4;
    *(char *)-0x79d603b9 = *(char *)-0x79d603b9 + (char)(v1 / 256);
    __asm_int(90);
    char v6 = __asm_in(-103); // 0x28da48
    __asm_int(104);
    return (v1 | (int64_t)v6) & -256 | (int64_t)(v3 + (char)v1 + (char)(v2 < 0) + v6);
}

// Address range: 0x28da7a - 0x28daa2
int64_t function_28da7a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x28da7a
    int64_t v1; // 0x28da7a
    char * v2 = (char *)(v1 - 24); // 0x28da7a
    *v2 = *v2 + (char)(v1 / 256);
    int64_t v3; // 0x28da7a
    uint64_t v4 = v3;
    *(char *)v4 = (char)(v4 / 256 & v4);
    int32_t * v5 = (int32_t *)(v3 + 103); // 0x28da81
    *v5 = *v5 | (int32_t)(256 * v4 & 0xff00 | a3);
    int32_t * v6 = (int32_t *)(v1 + 0x1201a0d0); // 0x28da84
    uint32_t v7 = *v6; // 0x28da84
    uint32_t v8 = v7 + (int32_t)v1; // 0x28da84
    *v6 = v8;
    int32_t v9 = *(int32_t *)0x2a3c93; // 0x28da8a
    *(int32_t *)0x2a3c93 = v9 + (int32_t)a1 + (int32_t)(v8 < v7);
    *(char *)v3 = *(char *)&v3 + (char)v1;
    *(int32_t *)(v1 - 0x3fb2fd9) = (int32_t)a2;
    return v3 + 0x13d0000 & 0xffffffff;
}

// Address range: 0x28daf2 - 0x28daf5
int64_t function_28daf2(int64_t a1) {
    // 0x28daf2
    int64_t result; // 0x28daf2
    return result;
}

// Address range: 0x28db08 - 0x28db0d
int64_t function_28db08(void) {
    // 0x28db08
    return function_d046d61();
}

// Address range: 0x28db14 - 0x28db15
int64_t function_28db14(void) {
    // 0x28db14
    int64_t result; // 0x28db14
    return result;
}

// Address range: 0x28db4e - 0x28db4f
int64_t function_28db4e(void) {
    // 0x28db4e
    int64_t result; // 0x28db4e
    return result;
}

// Address range: 0x28db85 - 0x28db93
int64_t function_28db85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 + 0x3a0738d9); // 0x28db85
    int64_t v2; // 0x28db85
    *v1 = *v1 + (int32_t)v2;
    if (a4 == 0) {
        function_28db4e();
    }
    // 0x28db90
    return function_28db14();
}

// Address range: 0x28dbc1 - 0x28dc10
int64_t function_28dbc1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    char * v2 = (char *)(a2 - 0x7f7eb73e); // 0x28dbc1
    int64_t v3; // 0x28dbc1
    *v2 = *v2 + (char)v3;
    int64_t v4 = __asm_hlt(); // 0x28dbc7
    int32_t * v5 = (int32_t *)(a2 + 0x7ed6002c); // 0x28dbcd
    *v5 = *v5 + (int32_t)v3;
    uint32_t v6 = (int32_t)a4; // 0x28dbd8
    uint32_t v7 = v6 % 32; // 0x28dbd8
    if (v7 != 0) {
        uint32_t v8 = *(int32_t *)&v4; // 0x28dbd8
        *(int32_t *)v4 = v8 >> 32 - v7 | v8 << v7;
    }
    *(int64_t *)0x13d00e6173abbda = v4;
    *(int32_t *)v1 = *(int32_t *)&v1 + v6;
    int32_t v9 = *(int32_t *)0x158f0453; // 0x28dc0a
    int64_t v10; // bp-16, 0x28dbc1
    *(int32_t *)0x158f0453 = v9 + (int32_t)(int64_t)&v10;
    return v4 | 232;
}

// Address range: 0x28dc23 - 0x28dc4b
int64_t function_28dc23(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char v1 = a3 / 256; // 0x28dc23
    int64_t v2; // 0x28dc23
    *(char *)a1 = (char)v2 - v1;
    unknown_e75942b();
    __asm_hlt();
    int16_t v3 = a3; // 0x28dc2f
    __asm_in_134(v3);
    uint64_t v4 = unknown_ffffffffd416fc36(); // 0x28dc30
    char * v5 = (char *)(a3 + 14); // 0x28dc35
    *v5 = *v5 + (char)(v4 / 256);
    *(char *)0xbbe201e8 = *(char *)0xbbe201e8 + v1;
    __asm_out_135(v3, (char)a4);
    return a4 & 0xffffffff;
}

// Address range: 0x28dc55 - 0x28dc56
int64_t function_28dc55(void) {
    // 0x28dc55
    int64_t result; // 0x28dc55
    return result;
}

// Address range: 0x28dc7a - 0x28dc81
int64_t function_28dc7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    if (a4 != 1) {
        function_28dc55();
    }
    // 0x28dc7c
    return function_416ede69();
}

// Address range: 0x28dcfa - 0x28ddcb
int64_t function_28dcfa(int64_t a1, int64_t a2, int64_t a3) {
    // 0x28dcfa
    int64_t v1; // 0x28dcfa
    int64_t v2 = v1;
    uint64_t v3 = unknown_28d10100(); // 0x28dcfa
    int64_t v4 = (v2 & 0xff00) + v2 & 0xff00 | v2 & -0xff01; // 0x28dcff
    char * v5 = (char *)v3; // 0x28dd01
    *v5 = *v5 + (char)(v1 / 256);
    char * v6 = (char *)(v1 + 0x1e8cc2c); // 0x28dd03
    unsigned char v7 = *v6; // 0x28dd03
    unsigned char v8 = v7 + (char)v2; // 0x28dd03
    *v6 = v8;
    int64_t v9 = v1 + a2 + (int64_t)(v8 < v7); // 0x28dd09
    int32_t * v10 = (int32_t *)(4 * v1 - 0x7117f55d + v4); // 0x28dd19
    uint32_t v11 = *v10 + (int32_t)v9; // 0x28dd19
    *v10 = v11;
    if (v11 >= 1) {
        char * v12 = (char *)(a1 - 121); // 0x28dd22
        *v12 = *v12 | (char)(v3 / 256);
        return unknown_ffffffffe920ee2b();
    }
    int64_t result = v9 & 0xffffffff; // 0x28dd09
    uint32_t v13 = llvm_bswap_i32((int32_t)a2); // 0x28dd0e
    int64_t v14 = v13; // 0x28dd0e
    int64_t v15 = v3 & 0xffffffff; // 0x28dd10
    __asm_int3();
    int32_t * v16 = (int32_t *)v15; // 0x28dd80
    *v16 = *v16 + v13;
    __asm_outsb((int16_t)a3, *(char *)v14);
    char v17 = *(char *)(v15 + 0x544e0a00) | (char)a3; // 0x28dd88
    char v18 = *(char *)(unknown_ffffffffbbaaff94() - 64); // 0x28dd94
    if (v17 > v18) {
        // 0x28dd6b
        return result;
    }
    uint32_t v19 = (int32_t)v3 % 32; // 0x28dd9b
    if (v19 != 0) {
        int32_t * v20 = (int32_t *)result; // 0x28dd9b
        uint32_t v21 = *v20; // 0x28dd9b
        *v20 = v21 >> 32 - v19 | v21 << v19;
    }
    // 0x28ddab
    unknown_3129b9a3();
    int64_t v22 = v1 - 16; // 0x28dda7
    int64_t * v23 = (int64_t *)v22; // 0x28dda7
    *v23 = v1 - 8;
    __asm_out_136(62, *(char *)(__asm_hlt() % 256 + v4));
    int64_t v24 = unknown_ffffffffdf502db4(); // 0x28ddae
    int64_t v25 = *v23; // 0x28ddb3
    char v26 = *(char *)(v25 + 0xd0f376); // 0x28ddb4
    *(int32_t *)-0x17578339 = *(int32_t *)-0x17578339 + (int32_t)v25;
    int32_t * v27 = (int32_t *)(v14 - 22); // 0x28ddc6
    uint32_t v28 = *v27; // 0x28ddc6
    uint32_t v29 = (int32_t)v22 + 8 + v28; // 0x28ddc6
    *v27 = v29;
    char * v30 = (char *)v4; // 0x28ddc9
    *v30 = v17 - v18 + *v30 + (char)(v29 < v28);
    return v24 & -256 | (int64_t)((char)v24 - v26);
}

// Address range: 0x28ddd1 - 0x28de16
int64_t function_28ddd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x28ddd1
    int64_t v1; // 0x28ddd1
    uint64_t result = v1;
    bool v2; // 0x28ddd1
    if (v2) {
        char * v3 = (char *)((v2 ? 0x1fffffffe : 0) + a1); // 0x28de12
        *v3 = *v3 + (char)(result / 256);
        return result;
    }
    // 0x28ddd4
    return result;
}

// Address range: 0x28deac - 0x28debc
int64_t function_28deac(void) {
    // 0x28deac
    int64_t v1; // 0x28deac
    int64_t v2 = v1 | v1;
    int32_t * v3 = (int32_t *)(v2 & 0xffffffff); // 0x28deae
    *v3 = *v3 + (int32_t)v2;
    __asm_int(-113);
    return function_4ec5e94();
}

// Address range: 0x28ded3 - 0x28def5
int64_t function_28ded3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x28ded3
    int64_t result; // 0x28ded3
    bool v1; // 0x28ded3
    if (v1 || v1) {
        // 0x28def8
        return result;
    }
    char v2 = __asm_in_134((int16_t)a3); // 0x28deea
    int64_t result2 = (result | (int64_t)v2) & -256 | (int64_t)(v2 | 104); // 0x28def0
    char * v3 = (char *)(2 * result2); // 0x28def2
    *v3 = *v3 | (char)((uint64_t)result / 256);
    return result2;
}

// Address range: 0x28def6 - 0x28def8
int64_t function_28def6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x28def6
    int64_t result; // 0x28def6
    return result;
}

// Address range: 0x28def9 - 0x28df01
int64_t function_28def9(void) {
    // 0x28def9
    __asm_int1();
    return function_ffffffffbf2630b6();
}

// Address range: 0x28df01 - 0x28df08
int64_t function_28df01(int64_t a1, int64_t a2) {
    // 0x28df01
    int64_t result; // 0x28df01
    return result;
}

// Address range: 0x28df09 - 0x28df0c
int64_t function_28df09(int64_t a1) {
    // 0x28df09
    int64_t result; // 0x28df09
    return result;
}

// Address range: 0x28df30 - 0x28df31
int64_t function_28df30(void) {
    // 0x28df30
    int64_t result; // 0x28df30
    return result;
}

// Address range: 0x28df43 - 0x28df44
int64_t function_28df43(void) {
    // 0x28df43
    int64_t result; // 0x28df43
    return result;
}

// Address range: 0x28df48 - 0x28df4b
int64_t function_28df48(int64_t a1) {
    // 0x28df48
    int64_t result; // 0x28df48
    return result;
}

// Address range: 0x28df4b - 0x28dff0
int64_t function_28df4b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2; // 0x28df4b
    int64_t result = v2 & 0xffffffff; // 0x28df4c
    bool v3; // 0x28df4b
    if (!v3) {
        result = function_28df30();
    }
    char * v4 = (char *)(a3 + 16); // 0x28df50
    *v4 = *v4 & (char)result;
    return result;
    int64_t v5 = v3 ? -4 : 4; // 0x28df4b
    int64_t v6 = v5 + a2; // 0x28df4b
    char * v7 = (char *)v6; // 0x28dfb2
    unsigned char v8 = *v7; // 0x28dfb2
    unsigned char v9 = v8 + (char)(a4 / 256); // 0x28dfb2
    *v7 = v9;
    int32_t v10 = result; // 0x28dfb4
    int32_t v11 = v10 + 1; // 0x28dfb4
    int64_t v12 = v11; // 0x28dfb6
    if (v11 < 0 == (v11 & (v10 ^ -0x80000000)) < 0 == (v11 != 0)) {
        v12 = function_28df43();
    }
    int64_t v13 = a1 - v6 + (int64_t)(v9 < v8) & 0xffffffff; // 0x28dfb8
    char * v14 = (char *)(v12 + 0x6b013d84); // 0x28dfba
    *v14 = *v14 + (char)(v2 / 256);
    *(int32_t *)v13 = (int32_t)v12;
    int64_t v15 = v13 + v5; // 0x28dfc1
    char * v16 = (char *)v12; // 0x28dfc2
    char v17 = v12; // 0x28dfc2
    *v16 = *v16 + v17;
    char * v18 = (char *)(v15 + 0x2b000000); // 0x28dfc4
    *v18 = *v18 + (char)a3;
    char * v19 = (char *)v15; // 0x28dfca
    char v20 = *v19 + v17; // 0x28dfca
    *v19 = v20;
    if (v20 < 1) {
        // 0x28df81
        *v16 = *v16 + v17;
        int64_t v21 = v1; // bp-16, 0x28df85
        int32_t * v22 = (int32_t *)(4 * a3 - 77 + v2); // 0x28df86
        *v22 = *v22 + (int32_t)(int64_t)&v21;
        return 0x8e089c1e;
    }
    char v23 = *(char *)(v6 + 9); // 0x28dfd0
    *(char *)v1 = *(char *)&v1 / 2;
    uint32_t v24 = *(int32_t *)0x2bdf013d00500868; // 0x28dfd7
    int64_t v25 = v24; // 0x28dfd7
    *(int32_t *)v15 = v24;
    char * v26 = (char *)v25; // 0x28dfe4
    char v27 = v24; // 0x28dfe4
    *v26 = *v26 + v27;
    int64_t v28; // 0x28df4b
    char v29 = *(char *)&v28; // 0x28dfe6
    *(char *)v28 = v29 + (v23 ^ (char)((256 * v12 + a3) / 256));
    *v26 = *v26 + v27;
    return v25 & 0xffffff00 | (int64_t)(((v24 | 1) + 10) % 256);
}

// Address range: 0x28dff2 - 0x28e02b
int64_t function_28dff2(int64_t a1, int64_t a2) {
    // 0x28dff2
    int64_t v1; // 0x28dff2
    uint64_t v2 = v1;
    int64_t v3 = v1 & 0xffffffff; // 0x28dff7
    uint32_t v4 = *(int32_t *)0xab0506013d00; // 0x28dfff
    int64_t result = v4; // 0x28dfff
    *(char *)v2 = (char)v2 - 23;
    char * v5 = (char *)result; // 0x28e00b
    *v5 = *v5 + (char)v4;
    char * v6 = (char *)(v3 - 85); // 0x28e00d
    *v6 = *v6 - 23;
    *(int32_t *)-0x773071abf7fe1702 = v4;
    int64_t v7; // 0x28dff2
    *(int32_t *)v3 = *(int32_t *)&v7 - 0x7acce914;
    *(char *)0x54ce9f29 = *(char *)0x54ce9f29 + (char)(v2 / 256);
    return result;
}

// Address range: 0x28e032 - 0x28e062
int64_t function_28e032(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x28e032
    int64_t v1; // 0x28e032
    int32_t v2 = v1; // 0x28e032
    __asm_out((int16_t)a3, v2);
    bool v3; // 0x28e032
    char * v4 = (char *)(a4 - v1 + (int64_t)v3 & 0xffffffff); // 0x28e039
    unsigned char v5 = *v4; // 0x28e039
    *v4 = v5 / 64 | 4 * v5;
    char v6 = (uint64_t)v1 / 256; // 0x28e03c
    *(char *)0x3abd8743 = *(char *)0x3abd8743 + v6;
    int32_t * v7 = (int32_t *)(a1 + 35); // 0x28e042
    *v7 = *v7 | v2 & -177;
    *(char *)-0x57d8e4a8 = *(char *)-0x57d8e4a8 + v6;
    __asm_wait((int64_t)&g2, (int64_t)&g2, (int64_t)&g2, (int64_t)&g2, (int64_t)&g2);
    return function_281a92a();
}

// Address range: 0x28e137 - 0x28e13c
int64_t function_28e137(void) {
    // 0x28e137
    return function_30e81c();
}

// Address range: 0x28e14c - 0x28e14d
int64_t function_28e14c(void) {
    // 0x28e14c
    int64_t result; // 0x28e14c
    return result;
}

// Address range: 0x28e1a8 - 0x28e1ad
int64_t function_28e1a8(void) {
    // 0x28e1a8
    return function_ffffffffb887f1ee();
}

// Address range: 0x28e1b6 - 0x28e1bb
int64_t function_28e1b6(void) {
    // 0x28e1b6
    return function_3fc1d8e9();
}

// Address range: 0x28e1d2 - 0x28e1d4
int64_t function_28e1d2(void) {
    // 0x28e1d2
    int64_t result; // 0x28e1d2
    return result;
}

// Address range: 0x28e1d4 - 0x28e1e5
int64_t function_28e1d4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x28e1d4
    int64_t v1; // 0x28e1d4
    return v1 & -256 | (int64_t)*(char *)-0x77fffe62bbab4df3;
}

// Address range: 0x28e20f - 0x28e21b
int64_t function_28e20f(int64_t a1) {
    // 0x28e20f
    *(int32_t *)0x23e5c918 = *(int32_t *)0x23e5c918 + (int32_t)a1;
    int64_t v1; // 0x28e20f
    return 2 * v1 & 0xffffffff;
}

// Address range: 0x2d4469 - 0x2d446e
int64_t function_2d4469(void) {
    // 0x2d4469
    return unknown_312e6d6f();
}

// Address range: 0x2d446f - 0x2d4471
int64_t function_2d446f(void) {
    // 0x2d446f
    return function_2d4413();
}

// Address range: 0x2d447a - 0x2d447b
int64_t function_2d447a(void) {
    // 0x2d447a
    int64_t result; // 0x2d447a
    return result;
}

// Address range: 0x2d4483 - 0x2d44b2
int64_t function_2d4483(uint64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d4483
    int64_t v1; // 0x2d4483
    *(char *)a4 = (char)(v1 / 256) + (char)a4;
    int32_t * v2 = (int32_t *)((v1 & -256 | (int64_t)__asm_in(-24)) - 0x17975d9c); // 0x2d448a
    *v2 = *v2 + (int32_t)a4;
    char v3 = *(char *)(8 * v1 + (a1 & 0xffffffff)); // 0x2d4496
    uint64_t v4 = 256 * (int64_t)(v3 & (char)(a1 / 256)) | a1 & 0xffff00ff; // 0x2d4496
    int32_t * v5 = (int32_t *)(v1 + 53); // 0x2d4499
    *v5 = *v5 + (int32_t)a2;
    char * v6 = (char *)v4; // 0x2d449c
    char v7 = *v6; // 0x2d449c
    *v6 = v7 - (char)a1;
    __asm_out((int16_t)(v1 % 256 | a3), (int32_t)v4);
    if (v4 >= (int64_t)v7) {
        function_2d447a();
    }
    if (a4 == 0) {
        unknown_312e6d6f();
    }
    uint64_t v8 = unknown_2f8764ad(); // 0x2d44a7
    return v8 & -256 | (int64_t)*(char *)(v8 % 256 + v1);
}

// Address range: 0x2d44ba - 0x2d44bd
int64_t function_2d44ba(int64_t a1) {
    // 0x2d44ba
    int64_t result; // 0x2d44ba
    return result;
}

// Address range: 0x2d4517 - 0x2d451b
int64_t function_2d4517(void) {
    // 0x2d4517
    int64_t v1; // 0x2d4517
    return v1 & -0xff01 | (int64_t)&g1;
}

// Address range: 0x2d457a - 0x2d457b
int64_t function_2d457a(void) {
    // 0x2d457a
    int64_t result; // 0x2d457a
    return result;
}

// Address range: 0x2d4594 - 0x2d4595
int64_t function_2d4594(void) {
    // 0x2d4594
    int64_t result; // 0x2d4594
    return result;
}

// Address range: 0x2d4598 - 0x2d45eb
int64_t function_2d4598(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d4598
    int64_t v1; // 0x2d4598
    char * v2 = (char *)(v1 + a2); // 0x2d4598
    unsigned char v3 = *v2; // 0x2d4598
    *v2 = v3 / 128 | 2 * v3;
    bool v4; // 0x2d4598
    if (v4) {
        // 0x2d45e5
        unknown_152f5eeb();
        return v1 & 0xffffffff;
    }
    int32_t v5 = v1; // 0x2d459e
    char * v6 = (char *)(a1 + 103); // 0x2d45a3
    *v6 = *v6 + (char)(v1 / 256);
    if (((v5 - 0x75395f7 ^ v5 + 0x14c2ec08) & v5 + 0x78ac6a09) < 0) {
        function_2d4594();
    }
    int32_t * v7 = (int32_t *)(a4 + a2); // 0x2d45ae
    *v7 = *v7 | (int32_t)v1;
    unknown_ffffffffaf11aeb7();
    *(int32_t *)a3 = (int32_t)a1;
    unknown_3d4aeec2();
    int64_t v8 = -0x4bf8fe18; // bp-8, 0x2d45ce
    if (llvm_ctpop_i8((char)v1 + (char)a3) % 2 != 0) {
        function_2d457a();
    }
    int32_t v9 = *(int32_t *)0x675cb4d6; // 0x2d45d9
    *(int32_t *)0x675cb4d6 = v9 + (int32_t)(int64_t)&v8;
    return function_2d4644();
}

// Address range: 0x2d4600 - 0x2d4601
int64_t function_2d4600(void) {
    // 0x2d4600
    int64_t result; // 0x2d4600
    return result;
}

// Address range: 0x2d4605 - 0x2d4613
int64_t function_2d4605(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2d4605
    int64_t v1; // 0x2d4605
    __asm_out((int16_t)a3, (int32_t)v1);
    if ((unknown_343c400c() & 1024) != 0) {
        function_2d467a(a1, a2, a3, v1);
    }
    // 0x2d460e
    return function_215bf85();
}

// Address range: 0x2d4617 - 0x2d4624
int64_t function_2d4617(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d4617
    bool v1; // 0x2d4617
    if (v1) {
        char * v2 = (char *)(a1 - 106); // 0x2d461e
        char v3 = *v2 | (char)a4; // 0x2d461e
        *v2 = v3;
        if (v3 >= 0 == (v3 != 0)) {
            function_2d4629(a1, a2, a3, a4);
        }
        // 0x2d4623
        return __asm_iretd(a1);
    }
    int64_t result; // 0x2d4617
    if (a4 != 1 && !v1) {
        result = function_2d4600();
    }
    // 0x2d461c
    return result;
}

// Address range: 0x2d4626 - 0x2d4627
int64_t function_2d4626(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d4626
    return a4 & 0xffffffff;
}

// Address range: 0x2d4629 - 0x2d4633
int64_t function_2d4629(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d4629
    int64_t v1; // 0x2d4629
    int64_t result = v1 & -256 | (uint64_t)v1 % 256; // 0x2d462f
    char * v2 = (char *)(result - 24); // 0x2d4630
    *v2 = *v2 + (char)v1;
    return result;
}

// Address range: 0x2d4633 - 0x2d4644
int64_t function_2d4633(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 + a1; // 0x2d4633
    int32_t v2 = v1; // 0x2d4639
    __asm_sti(v2);
    int64_t result = __asm_sti(v2); // 0x2d4641
    int64_t v3; // 0x2d4633
    int64_t v4; // 0x2d4633
    if ((uint64_t)v4 >= (int64_t)&v3) {
        result = function_2d4677(v1 & 0xffffffff, a2, a3, v4);
    }
    // 0x2d4643
    __asm_outsb((int16_t)a3, (char)a2);
    return result;
}

// Address range: 0x2d4644 - 0x2d4647
int64_t function_2d4644(void) {
    // 0x2d4644
    int64_t result; // 0x2d4644
    return result;
}

// Address range: 0x2d4677 - 0x2d467a
int64_t function_2d4677(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2d4677
    int64_t result; // 0x2d4677
    *(int32_t *)a1 = (int32_t)result;
    int64_t v1; // 0x2d4677
    *(char *)v1 = *(char *)&v1 + (char)(a4 / 256);
    return result;
}

// Address range: 0x2d467a - 0x2d4699
int64_t function_2d467a(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    unsigned char v1 = (char)(a4 / 256); // 0x2d467a
    unsigned char v2 = v1 + (char)(a3 / 256); // 0x2d467a
    int64_t v3 = v2; // 0x2d467a
    int64_t v4 = 256 * v3 | a4 & -0xff01; // 0x2d467a
    if (v2 >= v1 && v2 != 0) {
        function_2d4617(a1, a2, a3, v4);
    }
    // 0x2d467e
    int64_t v5; // 0x2d467a
    char * v6 = (char *)(v5 + 101); // 0x2d467e
    *v6 = *v6 + (char)a4;
    *(int32_t *)a1 = (int32_t)__asm_sti((int32_t)a1);
    bool v7; // 0x2d467a
    int64_t v8 = (v7 ? -4 : 4) + a1; // 0x2d4682
    unknown_591dd78c(v8);
    int32_t * v9 = (int32_t *)v4; // 0x2d468b
    *v9 = *v9 + (int32_t)a3;
    int64_t v10; // 0x2d467a
    if ((int32_t)(v5 || v5) == 0) {
        v10 = function_2d4633(v8, a2, a3);
    } else {
        // 0x2d4691
        v10 = function_2d4626(v8, a2, a3, v4);
    }
    int64_t v11 = v10;
    *(int32_t *)v8 = (int32_t)v11;
    int32_t * v12 = (int32_t *)(a2 + 3); // 0x2d4696
    *v12 = *v12 + (int32_t)a2;
    return (v11 + v3) % 256 | v11 & -256;
}

// Address range: 0x2d46de - 0x2d46e1
int64_t function_2d46de(int64_t a1) {
    // 0x2d46de
    int64_t result; // 0x2d46de
    return result;
}

// Address range: 0x2d46f1 - 0x2d46f6
int64_t function_2d46f1(void) {
    // 0x2d46f1
    return function_ffffffffb1f2c5ef();
}

// Address range: 0x2d4741 - 0x2d4742
int64_t function_2d4741(void) {
    // 0x2d4741
    int64_t result; // 0x2d4741
    return result;
}

// Address range: 0x2d4749 - 0x2d4783
int64_t function_2d4749(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int64_t v2; // 0x2d4749
    int64_t v3; // 0x2d4749
    if ((int32_t)v3 > 0x719108b4) {
        v2 = function_2d4741();
    }
    int32_t * v4 = (int32_t *)(a4 - 0x4cbaec0c); // 0x2d4759
    *v4 = *v4 + (int32_t)v3;
    char * v5 = (char *)(a3 + 0x1a077483); // 0x2d475f
    *v5 = *v5 + (char)(v2 / 256);
    unsigned char v6 = *(char *)(a2 - 110 + 2 * a2) | (char)a3; // 0x2d4765
    int64_t v7 = a3 & -256 | (int64_t)v6; // 0x2d4765
    int64_t v8 = unknown_3dff5c6f() + 2 * v3; // 0x2d4770
    int32_t * v9 = (int32_t *)(v7 - 46); // 0x2d4772
    uint32_t v10 = *v9; // 0x2d4772
    uint32_t v11 = (int32_t)a4; // 0x2d4772
    uint32_t v12 = v10 + v11; // 0x2d4772
    *v9 = v12;
    *(char *)v1 = *(char *)&v1 + v6 + (char)(v12 < v10);
    uint32_t v13 = v11 % 32; // 0x2d477a
    if (v13 != 0) {
        int32_t * v14 = (int32_t *)(v7 + 82); // 0x2d477a
        uint32_t v15 = *v14; // 0x2d477a
        *v14 = v15 << v13 | (int32_t)((char)v8 > 137) << v13 - 1 | (int32_t)((int64_t)v15 >> (int64_t)(33 - v13));
    }
    return v8 & 0xfac74600 | v8 + 118 & 143 | 0x538b970;
}

// Address range: 0x2d47b1 - 0x2d47b2
int64_t function_2d47b1(void) {
    // 0x2d47b1
    int64_t result; // 0x2d47b1
    return result;
}

// Address range: 0x2d482a - 0x2d482f
int64_t function_2d482a(void) {
    // 0x2d482a
    return function_ffffffffe8676d8a();
}
