/*
 * Targeted RetDec C for native executable gap queue batch 675.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xff7ee-0xff9ee rank=- name=- kind=- bytes=- uncovered=-
 *   0xffbee-0xffdee rank=- name=- kind=- bytes=- uncovered=-
 *   0x2384b6-0x2386b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x329455-0x329655 rank=- name=- kind=- bytes=- uncovered=-
 *   0x329655-0x329855 rank=- name=- kind=- bytes=- uncovered=-
 *   0x329855-0x329a55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x329a55-0x329c55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x329c55-0x329e55 rank=- name=- kind=- bytes=- uncovered=-
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
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
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

int64_t function_10b1784();
int64_t function_16f9d24();
int64_t function_17245ac1();
int64_t function_172fc743();
int64_t function_2384b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_238544(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_238553(void);
int64_t function_238555(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2385f5(void);
int64_t function_23864a(int64_t a1);
int64_t function_238668(void);
int64_t function_241300f9();
int64_t function_329455(void);
int64_t function_32945f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_329481(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3294e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_329549(int64_t a1);
int64_t function_32958a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3295bd(void);
int64_t function_329665(int64_t a1, int64_t a2);
int64_t function_329702(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_329756(int64_t a1);
int64_t function_329785(void);
int64_t function_3297a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3297fd(int64_t a1);
int64_t function_32983a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3298b7(void);
int64_t function_3298cc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3298f8(int64_t a1);
int64_t function_329939(void);
int64_t function_32993d(void);
int64_t function_329990(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3299d3(int64_t a1);
int64_t function_3299d7(int64_t a1, int64_t a2);
int64_t function_329a27(void);
int64_t function_329a74(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_329a8b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_329b1d(int64_t a1);
int64_t function_329b6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_329b97(void);
int64_t function_329bf8(void);
int64_t function_329c31(void);
int64_t function_329c4f(void);
int64_t function_329c74(void);
int64_t function_329ce8(void);
int64_t function_329cef(void);
int64_t function_329d21(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_329d8c(void);
int64_t function_329d91(void);
int64_t function_329d92(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_329df0(void);
int64_t function_329e0e(void);
int64_t function_329e3a(void);
int64_t function_704fe8fb();
int64_t function_c4258();
int64_t function_ff7ee(int64_t a1, int64_t a2, int64_t a3);
int64_t function_ff836(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_ff97d(void);
int64_t function_ff981(void);
int64_t function_ff9dd(int64_t a1);
int64_t function_ffbee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ffcb7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ffcd2(int64_t a1);
int64_t function_ffd0c(void);
int64_t function_ffd18(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ffd31(void);
int64_t function_ffd4d(int64_t a1);
int64_t function_ffd51(void);
int64_t function_ffd58(void);
int64_t function_ffd80(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ffd92(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ffdbc(int64_t a1);
int64_t function_ffffffff869898e9();
int64_t function_ffffffff9033d2a2();
int64_t function_ffffffffbeecc371();
int64_t function_ffffffffd7327b24();
int64_t function_ffffffffe811e576();
int64_t unknown_13f794ff();
int64_t unknown_27e56d51();
int64_t unknown_3327844c();
int64_t unknown_3dfa08c8();
int64_t unknown_450d8d16();
int64_t unknown_589218d1();
int64_t unknown_589fc6b0();
int64_t unknown_642c6433();
int64_t unknown_67b39be8();
int64_t unknown_75dd4192();
int64_t unknown_79a59760();
int64_t unknown_ffffffff91792f44();
int64_t unknown_ffffffff9aca5608();
int64_t unknown_ffffffff9df6f415();
int64_t unknown_ffffffffb460bef7();
int64_t unknown_ffffffffb5dcdcd9();
int64_t unknown_ffffffffd72a73e6();
int64_t unknown_ffffffffe83f7671();
int64_t unknown_fffffffffe46aa89();

// Address range: 0xff7ee - 0xff836
int64_t function_ff7ee(int64_t a1, int64_t a2, int64_t a3) {
    // 0xff7ee
    int64_t v1; // 0xff7ee
    return function_c4258(a1, v1);
}

// Address range: 0xff836 - 0xff955
int64_t function_ff836(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xff836
    return function_c4258(a1, a2);
}

// Address range: 0xff97d - 0xff980
int64_t function_ff97d(void) {
    // 0xff97d
    int64_t result; // 0xff97d
    return result;
}

// Address range: 0xff981 - 0xff984
int64_t function_ff981(void) {
    // 0xff981
    int64_t result; // 0xff981
    return result;
}

// Address range: 0xff9dd - 0xff9e2
int64_t function_ff9dd(int64_t a1) {
    // 0xff9dd
    int64_t v1; // 0xff9dd
    return v1 & -152;
}

// Address range: 0xffbee - 0xffc15
int64_t function_ffbee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0xffbee
    int32_t * v3 = (int32_t *)(v2 + 0x7990d8f5); // 0xffbf0
    int32_t v4 = *v3; // 0xffbf0
    int32_t v5 = a1; // 0xffbf0
    int32_t v6 = v4 + v5; // 0xffbf0
    *v3 = v6;
    int16_t v7 = v2; // 0xffbf6
    int16_t v8 = (int16_t)v2 % 256; // 0xffbf6
    int64_t v9 = v2 & -0x10000; // 0xffbf6
    uint16_t v10 = v7 / v8 % 256;
    if (v6 < 0 != ((v6 ^ v4) & (v6 ^ v5)) < 0) {
        // 0xffc16
        return v9 | (int64_t)v10 | (int64_t)(256 * (v7 % v8));
    }
    // 0xffbfa
    __asm_outsd((int16_t)a3, *(int32_t *)&v1);
    int16_t v11 = 256 * v10 / 256; // 0xffbfb
    int64_t v12; // 0xffbee
    *(char *)v12 = *(char *)&v12 + (char)a1;
    *(char *)((v9 | (int64_t)(v11 * v11)) + 0x2e00a020) = 2 * (char)v2;
    return unknown_450d8d16(0x8c01e82e);
}

// Address range: 0xffcb7 - 0xffcc0
int64_t function_ffcb7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x200ad8a1); // 0xffcb7
    *v1 = *v1 - (int32_t)a4;
    int64_t result; // 0xffcb7
    return result;
}

// Address range: 0xffcd2 - 0xffcd3
int64_t function_ffcd2(int64_t a1) {
    // 0xffcd2
    int64_t result; // 0xffcd2
    return result;
}

// Address range: 0xffd0c - 0xffd0d
int64_t function_ffd0c(void) {
    // 0xffd0c
    int64_t result; // 0xffd0c
    return result;
}

// Address range: 0xffd18 - 0xffd31
int64_t function_ffd18(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xffd18
    return function_241300f9();
}

// Address range: 0xffd31 - 0xffd34
int64_t function_ffd31(void) {
    // 0xffd31
    return function_ffd0c();
}

// Address range: 0xffd4d - 0xffd4e
int64_t function_ffd4d(int64_t a1) {
    // 0xffd4d
    int64_t result; // 0xffd4d
    return result;
}

// Address range: 0xffd51 - 0xffd56
int64_t function_ffd51(void) {
    // 0xffd51
    int64_t result; // 0xffd51
    return result;
}

// Address range: 0xffd58 - 0xffd5d
int64_t function_ffd58(void) {
    // 0xffd58
    return function_ffffffffe811e576();
}

// Address range: 0xffd80 - 0xffd8f
int64_t function_ffd80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x2bf9a724); // 0xffd80
    int64_t result; // 0xffd80
    *v1 = *v1 + (int32_t)result;
    *(char *)0x2911e592 = *(char *)0x2911e592 - 119;
    return result;
}

// Address range: 0xffd92 - 0xffda0
int64_t function_ffd92(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 - 0x734f1c94 + a2); // 0xffd98
    *v1 = *v1 + (int32_t)a1;
    int64_t result; // 0xffd92
    return result;
}

// Address range: 0xffdbc - 0xffdbd
int64_t function_ffdbc(int64_t a1) {
    // 0xffdbc
    int64_t result; // 0xffdbc
    return result;
}

// Address range: 0x2384b6 - 0x238535
int64_t function_2384b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2384b6
    int64_t v1; // 0x2384b6
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)v1;
    unsigned char v3 = *(char *)(a3 - 51) | (char)(v1 / 256); // 0x2384b8
    *(char *)0x65190123d4c701e8 = (char)unknown_ffffffffd72a73e6();
    int64_t v4 = unknown_ffffffffb5dcdcd9(); // 0x2384d3
    if (v3 == 0) {
        // 0x2384fd
        __asm_out(-40, (char)v4 + 23);
        *(int32_t *)0x123be7d = -0x7ffcfe18 - (int32_t)v4 + *(int32_t *)0x123be7d;
        return unknown_ffffffff9df6f415();
    }
    int64_t v5 = a4 & -0xff01; // 0x2384d1
    int64_t v6 = v5 | (int64_t)&g6; // 0x2384d1
    char * v7 = (char *)((256 * (int64_t)v3 | v1 & -0xff01) - 101); // 0x2384df
    unsigned char v8 = *v7; // 0x2384df
    unsigned char v9 = v8 + (char)v6; // 0x2384df
    *v7 = v9;
    unknown_67b39be8();
    if (v9 < v8 || v9 == 0) {
        int64_t v10 = v5 | (int64_t)&g6 & -0xff01 | (int64_t)&g1; // 0x2384ea
        *(char *)v10 = (char)v10;
        return unknown_ffffffffb460bef7();
    }
    // 0x238529
    bool v11; // 0x2384b6
    char * v12 = (char *)(a2 - 64 + (v11 ? -1 : 1)); // 0x238529
    *v12 = *v12 | (char)v1;
    int64_t result = unknown_642c6433(); // 0x23852c
    *(char *)(v6 - 95) = v3;
    return result;
}

// Address range: 0x238544 - 0x238553
int64_t function_238544(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_27e56d51(); // 0x23854b
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return result;
}

// Address range: 0x238553 - 0x238555
int64_t function_238553(void) {
    // 0x238553
    int64_t result; // 0x238553
    return result;
}

// Address range: 0x238555 - 0x238569
int64_t function_238555(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x238555
    int64_t v1; // 0x238555
    __asm_out(94, (char)v1);
    int64_t v2 = __asm_iretd(); // 0x238557
    int64_t result = unknown_79a59760(); // 0x23855a
    char * v3 = (char *)(4 * a1 - 67 + a4); // 0x23855f
    *v3 = *v3 + (char)((int32_t)v2 >> 31);
    return result;
}

// Address range: 0x2385f5 - 0x2385fa
int64_t function_2385f5(void) {
    // 0x2385f5
    return function_10b1784();
}

// Address range: 0x23864a - 0x23864d
int64_t function_23864a(int64_t a1) {
    // 0x23864a
    int64_t result; // 0x23864a
    return result;
}

// Address range: 0x238668 - 0x23866f
int64_t function_238668(void) {
    // 0x238668
    bool v1; // 0x238668
    if (!v1) {
        // 0x2386d4
        int64_t result; // 0x238668
        return result;
    }
    // 0x23866a
    return function_17245ac1();
}

// Address range: 0x329455 - 0x329456
int64_t function_329455(void) {
    // 0x329455
    int64_t result; // 0x329455
    return result;
}

// Address range: 0x32945f - 0x32947f
int64_t function_32945f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int32_t * v2 = (int32_t *)(a1 - 0x33e0fb6e); // 0x329469
    uint32_t v3 = *v2; // 0x329469
    int64_t v4; // bp-1704300318, 0x32945f
    uint32_t v5 = v3 + (int32_t)(int64_t)&v4; // 0x329469
    *v2 = v5;
    int32_t v6 = *(int32_t *)&v1; // 0x32946f
    int64_t v7; // 0x32945f
    *(int32_t *)v1 = v6 + (int32_t)(v5 < v3) - (int32_t)v7;
    *(int32_t *)v7 = *(int32_t *)&v7 + (int32_t)a4;
    int32_t * v8 = (int32_t *)(a3 + 0x793601e8); // 0x329473
    *v8 = *v8 + (int32_t)a3;
    return 256 * a3 + a4 & 0xff00 | a4 & 0xffff00ff;
}

// Address range: 0x329481 - 0x3294dd
int64_t function_329481(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x329481
    int64_t v1; // 0x329481
    int64_t v2 = v1 & -0xff01 | (int64_t)&g7; // 0x329481
    unknown_75dd4192();
    *(char *)a1 = (char)v1;
    bool v3; // 0x329481
    int64_t v4 = v3 ? -5 : 5;
    int64_t v5 = v4 + a1; // 0x32948e
    int32_t * v6 = (int32_t *)(8 * a4 - 6 + v2); // 0x329494
    *v6 = *v6 + (int32_t)a4;
    int32_t * v7 = (int32_t *)(a4 & -256 | 252); // 0x3294a3
    *v7 = *v7 + (int32_t)v1;
    int64_t v8 = __asm_int1(v5, v4 + a2); // 0x3294a5
    int64_t v9 = v8 & 0x888cbcef; // 0x3294a8
    char * v10 = (char *)v5; // 0x3294ad
    *v10 = *v10 + 115;
    *(char *)0x1e8734c = 115;
    int32_t * v11 = (int32_t *)v2; // 0x3294b4
    *v11 = *v11 + (int32_t)v9;
    __asm_out_133(-69, (int32_t)((a4 / 256 + 232 + v9) % 256 | v8 & 0x888cbc00));
    int32_t * v12 = (int32_t *)(unknown_3dfa08c8() + v1 & 0xffffffff); // 0x3294c9
    *v12 = *v12 + 0x1e87314;
    int64_t v13 = unknown_589218d1() & -256; // 0x3294d0
    uint16_t v14 = (int16_t)v13 | 80; // 0x3294d2
    uint16_t v15 = (int16_t)*(char *)((v2 & -256) - 0x6ffe17f4); // 0x3294d2
    int64_t v16 = ((v13 | (int64_t)(v14 / v15)) & 0xffff00ff | (int64_t)(256 * (v14 % v15))) + v1; // 0x3294d8
    *v10 = (char)v16;
    return v16 & 0xffffffff;
}

// Address range: 0x3294e6 - 0x3294f0
int64_t function_3294e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 0x6859ff05); // 0x3294e6
    *v1 = *v1 + (int32_t)a2;
    char * v2 = (char *)(a3 + 11); // 0x3294ec
    int64_t result; // 0x3294e6
    *v2 = *v2 + (char)result;
    return result;
}

// Address range: 0x329549 - 0x32954c
int64_t function_329549(int64_t a1) {
    // 0x329549
    int64_t result; // 0x329549
    return result;
}

// Address range: 0x32958a - 0x3295a2
int64_t function_32958a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32958a
    int64_t v1; // 0x32958a
    uint64_t v2 = v1;
    char * v3 = (char *)(a1 - 0x295bb60f); // 0x32958a
    *v3 = *v3 + (char)(v2 / 256);
    int16_t v4 = a3; // 0x329590
    __asm_out_134(v4, (int32_t)v2);
    *(int32_t *)a1 = __asm_insd(v4);
    return function_ffffffff9033d2a2();
}

// Address range: 0x3295bd - 0x3295c2
int64_t function_3295bd(void) {
    // 0x3295bd
    return function_704fe8fb();
}

// Address range: 0x329665 - 0x32966c
int64_t function_329665(int64_t a1, int64_t a2) {
    // 0x329665
    int64_t v1; // 0x329665
    *(int32_t *)a2 = 2 * (int32_t)v1;
    return function_ffffffffd7327b24();
}

// Address range: 0x329702 - 0x329745
int64_t function_329702(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    __asm_out_133(19, (int32_t)unknown_ffffffff9aca5608());
    char v2 = a4; // 0x32970a
    *(char *)a1 = v2 + (char)a1;
    int32_t * v3 = (int32_t *)(a1 - 0xa60eb65); // 0x329721
    *v3 = *v3 + (int32_t)v1;
    int64_t v4 = (int64_t)(28 * *(int32_t *)&v1); // 0x329727
    int64_t * v5 = (int64_t *)(v4 + 8); // 0x329736
    *v5 = ((*v5 & (int64_t)&g2) == 0 ? 1 : -1) + a1;
    __asm_int(-111);
    *(char *)0x5afe11a6 = *(char *)0x5afe11a6 + v2;
    int64_t result = unknown_ffffffff91792f44(); // 0x32973e
    char * v6 = (char *)*(int64_t *)v4; // 0x329743
    *v6 = *v6 + (char)(v1 / 256);
    return result;
}

// Address range: 0x329756 - 0x329759
int64_t function_329756(int64_t a1) {
    // 0x329756
    int64_t result; // 0x329756
    return result;
}

// Address range: 0x329785 - 0x329786
int64_t function_329785(void) {
    // 0x329785
    int64_t result; // 0x329785
    return result;
}

// Address range: 0x3297a8 - 0x3297c1
int64_t function_3297a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3297a8
    bool v1; // 0x3297a8
    if (v1 || v1) {
        function_329785();
    }
    // 0x3297aa
    unknown_589fc6b0();
    int32_t * v2 = (int32_t *)(a4 + 0x1622b07f); // 0x3297b6
    int64_t v3; // 0x3297a8
    *v2 = *v2 + (int32_t)(int64_t)&v3;
    return __asm_int3();
}

// Address range: 0x3297fd - 0x3297fe
int64_t function_3297fd(int64_t a1) {
    // 0x3297fd
    int64_t result; // 0x3297fd
    return result;
}

// Address range: 0x32983a - 0x32985d
int64_t function_32983a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x32983a
    int64_t v1; // 0x32983a
    int32_t * v2 = (int32_t *)(v1 + 6); // 0x32983a
    *v2 = *v2 + (int32_t)a3;
    int64_t v3 = unknown_3327844c(); // 0x329846
    char * v4 = (char *)(v3 + 0x2008000); // 0x32984b
    *v4 = *v4 + (char)v3;
    int32_t * v5 = (int32_t *)(v1 + 0x4f00c400); // 0x329853
    *v5 = *v5 + (int32_t)v1;
    int16_t v6 = a3; // 0x329859
    int64_t v7; // 0x32983a
    __asm_outsb(v6, *(char *)&v7);
    return v3 & -256 | (int64_t)__asm_in(v6);
}

// Address range: 0x3298b7 - 0x3298b8
int64_t function_3298b7(void) {
    // 0x3298b7
    int64_t result; // 0x3298b7
    return result;
}

// Address range: 0x3298cc - 0x3298d6
int64_t function_3298cc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3298cc
    bool v1; // 0x3298cc
    if (v1) {
        function_3298b7();
    }
    // 0x3298cf
    return function_ffffffff869898e9();
}

// Address range: 0x3298f8 - 0x329906
int64_t function_3298f8(int64_t a1) {
    // 0x3298f8
    __asm_iretd();
    return unknown_13f794ff() & -0xff01 | (int64_t)&g8;
}

// Address range: 0x329939 - 0x32993a
int64_t function_329939(void) {
    // 0x329939
    int64_t result; // 0x329939
    return result;
}

// Address range: 0x32993d - 0x329946
int64_t function_32993d(void) {
    // 0x32993d
    int64_t result; // 0x32993d
    bool v1; // 0x32993d
    if (!v1) {
        result = function_329939();
    }
    // 0x329940
    return result;
}

// Address range: 0x329990 - 0x3299a1
int64_t function_329990(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x329990
    int64_t v1; // 0x329990
    int64_t v2 = v1;
    __asm_outsd((int16_t)a3, (int32_t)v1);
    char * v3 = (char *)(a3 + 97); // 0x329993
    *v3 = *v3 + (char)v2;
    __writegsbyte(-0xd029762, __readgsbyte(-0xd029762) + (char)(v1 / 256));
    return (v2 + 1) % 256 | v2 & -256;
}

// Address range: 0x3299d3 - 0x3299d6
int64_t function_3299d3(int64_t a1) {
    // 0x3299d3
    int64_t result; // 0x3299d3
    __asm_out(28, (char)result);
    return result;
}

// Address range: 0x3299d7 - 0x3299da
int64_t function_3299d7(int64_t a1, int64_t a2) {
    // 0x3299d7
    int64_t result; // 0x3299d7
    return result;
}

// Address range: 0x329a27 - 0x329a29
int64_t function_329a27(void) {
    // 0x329a27
    int64_t v1; // 0x329a27
    return function_329a8b(v1, v1, v1);
}

// Address range: 0x329a74 - 0x329a8b
int64_t function_329a74(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x329a74
    int64_t v1; // 0x329a74
    *(char *)a3 = (char)(v1 / 256 | v1);
    return unknown_fffffffffe46aa89();
}

// Address range: 0x329a8b - 0x329abd
int64_t function_329a8b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x329a8b
    int64_t v1; // 0x329a8b
    bool v2; // 0x329a8b
    if (v2) {
        // 0x329a8d
        return (v1 & 0xe0006165) + 0xda09fec3 & 0xfa0bffef;
    }
    // 0x329aa9
    float80_t v3; // 0x329a8b
    *(int64_t *)0x745435f1 = (int64_t)v3;
    int32_t * v4 = (int32_t *)(a3 + 2); // 0x329aba
    *v4 = *v4 | (int32_t)v1;
    return 0xffffffaa;
}

// Address range: 0x329b1d - 0x329b20
int64_t function_329b1d(int64_t a1) {
    // 0x329b1d
    int64_t result; // 0x329b1d
    return result;
}

// Address range: 0x329b6a - 0x329b7e
int64_t function_329b6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffe83f7671(); // 0x329b6b
    int32_t * v2 = (int32_t *)v1; // 0x329b70
    *v2 = *v2 + (int32_t)v1;
    int32_t * v3 = (int32_t *)(a1 - 41); // 0x329b77
    int64_t v4; // 0x329b6a
    *v3 = *v3 - (int32_t)v4;
    int64_t v5; // 0x329b6a
    *(char *)v5 = *(char *)&v5 ^ (char)a4;
    return __asm_iretd();
}

// Address range: 0x329b97 - 0x329b98
int64_t function_329b97(void) {
    // 0x329b97
    int64_t result; // 0x329b97
    return result;
}

// Address range: 0x329bf8 - 0x329bfa
int64_t function_329bf8(void) {
    // 0x329bf8
    return function_329b97();
}

// Address range: 0x329c31 - 0x329c32
int64_t function_329c31(void) {
    // 0x329c31
    int64_t result; // 0x329c31
    return result;
}

// Address range: 0x329c4f - 0x329c57
int64_t function_329c4f(void) {
    // 0x329c4f
    bool v1; // 0x329c4f
    if (v1 || false) {
        function_329c31();
    }
    // 0x329c52
    return function_16f9d24();
}

// Address range: 0x329c74 - 0x329c75
int64_t function_329c74(void) {
    // 0x329c74
    int64_t result; // 0x329c74
    return result;
}

// Address range: 0x329ce8 - 0x329ce9
int64_t function_329ce8(void) {
    // 0x329ce8
    int64_t result; // 0x329ce8
    return result;
}

// Address range: 0x329cef - 0x329cf1
int64_t function_329cef(void) {
    // 0x329cef
    return function_329c74();
}

// Address range: 0x329d21 - 0x329d60
int64_t function_329d21(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x329d21
    bool v1; // 0x329d21
    int64_t v2 = !v1 ? a4 : a3 & 0xffff00ff | (int64_t)(int32_t)&g3; // 0x329d23
    int64_t v3 = v2 & 0xffffffff; // 0x329d23
    int64_t v4; // 0x329d21
    *(int32_t *)0x7010ccde = *(int32_t *)0x7010ccde + (int32_t)v4;
    int32_t * v5 = (int32_t *)v3; // 0x329d31
    *v5 = *v5 & 0x3d45f900;
    *(int32_t *)0xe81063ef = *(int32_t *)0xe81063ef - 0x17ef9c11;
    int32_t * v6 = (int32_t *)(v3 + 0x4ba7f364); // 0x329d39
    *v6 = *v6 ^ 0x4006807;
    int64_t v7 = a2 + 0xe81063ef & 0xffffffff; // 0x329d45
    int64_t v8 = v4 & 0xffffffff; // 0x329d48
    int64_t v9; // 0x329d21
    if (*(char *)v7 > *(char *)&v9) {
        v8 = function_329ce8();
    }
    // 0x329d4a
    return v8 & -256 | (int64_t)*(char *)(v7 + 0x34020318 + (v1 ? -1 : 1));
}

// Address range: 0x329d8c - 0x329d91
int64_t function_329d8c(void) {
    // 0x329d8c
    return function_ffffffffbeecc371();
}

// Address range: 0x329d91 - 0x329d92
int64_t function_329d91(void) {
    // 0x329d91
    int64_t result; // 0x329d91
    return result;
}

// Address range: 0x329d92 - 0x329da9
int64_t function_329d92(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 14); // 0x329d92
    bool v2; // 0x329d92
    *v1 = *v1 + (int32_t)a3 + (int32_t)v2;
    int64_t result; // 0x329d92
    *(char *)result = 46;
    return result;
}

// Address range: 0x329df0 - 0x329df7
int64_t function_329df0(void) {
    // 0x329df0
    return function_172fc743();
}

// Address range: 0x329e0e - 0x329e12
int64_t function_329e0e(void) {
    // 0x329e0e
    int64_t result; // 0x329e0e
    bool v1; // 0x329e0e
    if (true == !v1) {
        result = function_329e3a();
    }
    // 0x329e10
    return result;
}

// Address range: 0x329e3a - 0x329e3b
int64_t function_329e3a(void) {
    // 0x329e3a
    int64_t result; // 0x329e3a
    return result;
}
