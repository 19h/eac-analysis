/*
 * Targeted RetDec C for native executable gap queue batch 1053.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x6ea90-0x6ec90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6ec90-0x6ee90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6ee90-0x6f090 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6f190-0x6f290 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6f290-0x6f490 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6f490-0x6f690 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6f690-0x6f890 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6f890-0x6fa90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1383a4-0x1385a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37a6ca-0x37a8ca rank=- name=- kind=- bytes=- uncovered=-
 *   0x37a8ca-0x37aaca rank=- name=- kind=- bytes=- uncovered=-
 *   0x37aaca-0x37acca rank=- name=- kind=- bytes=- uncovered=-
 *   0x37adca-0x37aeca rank=- name=- kind=- bytes=- uncovered=-
 *   0x37aeca-0x37b0ca rank=- name=- kind=- bytes=- uncovered=-
 *   0x37b2ca-0x37b4ca rank=- name=- kind=- bytes=- uncovered=-
 *   0x37b4ca-0x37b6ca rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1383a4(void);
int64_t function_13842d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_138458(int64_t a1, int64_t a2, int64_t a3);
int64_t function_138473(int64_t a1, int64_t a2, int64_t a3);
int64_t function_13848a(void);
int64_t function_1384a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1384d4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_138526(void);
int64_t function_13852c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_174b615();
int64_t function_2d6f9a();
int64_t function_2e6b4d();
int64_t function_2f220d();
int64_t function_37a6ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37a796(void);
int64_t function_37a7b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37a7ba(int64_t a1);
int64_t function_37a7be(void);
int64_t function_37a821(void);
int64_t function_37a83e(void);
int64_t function_37a846(void);
int64_t function_37a852(void);
int64_t function_37a8bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37a90e(void);
int64_t function_37a916(void);
int64_t function_37aa03(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_37aa46(void);
int64_t function_37aa4a(void);
int64_t function_37aa54(void);
int64_t function_37aa5e(int64_t a1);
int64_t function_37aa60(int64_t a1);
int64_t function_37aa70(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37aad1(void);
int64_t function_37aadc(void);
int64_t function_37abbf(void);
int64_t function_37ac2b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_37ac70(int64_t a1, int64_t a2);
int64_t function_37ad7d();
int64_t function_37adca(int64_t a1, int64_t a2);
int64_t function_37adf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37ae03(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37ae41(void);
int64_t function_37ae8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37af26(void);
int64_t function_37af49(void);
int64_t function_37af70(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37af9b(void);
int64_t function_37afe4(int64_t a1);
int64_t function_37affe(void);
int64_t function_37b006(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37b027(void);
int64_t function_37b045(int64_t a1, int64_t a2, int64_t a3);
int64_t function_37b06c(void);
int64_t function_37b2ca(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_37b34a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_37b377(void);
int64_t function_37b3a6(int64_t a1);
int64_t function_37b3ee(void);
int64_t function_37b3f2(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_37b4b9(int64_t a1, int64_t a2);
int64_t function_37b4c7(void);
int64_t function_37b4eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37b54c(int64_t a1);
int64_t function_37b5da(int64_t a1);
int64_t function_37b607(void);
int64_t function_37b64a(void);
int64_t function_423f5be();
int64_t function_59fa99a7();
int64_t function_5ce71106();
int64_t function_6ea2d();
int64_t function_6ea90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6eab4(int64_t a1);
int64_t function_6eac6(void);
int64_t function_6eaee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6eb13(int64_t a1, int64_t a2);
int64_t function_6eb1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6eb33(void);
int64_t function_6eb47(void);
int64_t function_6eb6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6eb8e(void);
int64_t function_6ebde(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6ebe5(int64_t a1);
int64_t function_6ec43(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6ec55(int64_t a1);
int64_t function_6ec59(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6ecd8(int64_t a1);
int64_t function_6ed08(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6eda7(uint64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6edd0(int64_t a1);
int64_t function_6ee76(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6ee8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6eef0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6ef30(void);
int64_t function_6ef74(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6ef96(int64_t a1, int64_t a2);
int64_t function_6f002(void);
int64_t function_6f00a(void);
int64_t function_6f00c(void);
int64_t function_6f012(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6f190(void);
int64_t function_6f196(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6f1b4(void);
int64_t function_6f1c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6f1df(void);
int64_t function_6f202(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6f21c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6f23b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6f24f(void);
int64_t function_6f254(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6f270(int64_t a1, int64_t a2);
int64_t function_6f275(int64_t a1);
int64_t function_6f2e2(void);
int64_t function_6f2fc(void);
int64_t function_6f303(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6f37c(void);
int64_t function_6f39f(void);
int64_t function_6f3a9(int64_t a1);
int64_t function_6f44f(int64_t a1);
int64_t function_6f462(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6f475(int64_t a1);
int64_t function_6f48e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6f4bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_6f510(int64_t a1, int64_t a2);
int64_t function_6f54b(void);
int64_t function_6f555(void);
int64_t function_6f557(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_6f66b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6f6a0(void);
int64_t function_6f6b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6f6fc(int64_t a1, int64_t a2);
int64_t function_6f719(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6f72c(int64_t a1);
int64_t function_6f734(int64_t a1);
int64_t function_6f74d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6f75b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6f7bc(void);
int64_t function_6f831(void);
int64_t function_6f833(int64_t a1);
int64_t function_6f850(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_6f907(int64_t a1, int64_t a2);
int64_t function_6f916(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6f970(int64_t a1, int64_t a2);
int64_t function_6f9aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6fa2c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6fa63(void);
int64_t function_6fa88(void);
int64_t function_edbc4c();
int64_t function_ff5f23a();
int64_t function_ffffffff806618a5();
int64_t function_ffffffff83eb077e();
int64_t function_ffffffff8ac2f223();
int64_t function_ffffffffaa190a47();
int64_t function_ffffffffaa233877();
int64_t function_ffffffffb24cfdda();
int64_t function_ffffffffbaa44d1f();
int64_t function_ffffffffccfad877();
int64_t function_ffffffffe8224d45();
int64_t function_ffffffffe84452d1();
int64_t function_fffffffff9e787a0();
int64_t unknown_23859524();
int64_t unknown_24123ff6();
int64_t unknown_2c31c395();
int64_t unknown_3da52b01();
int64_t unknown_48273805();
int64_t unknown_60719bc9();
int64_t unknown_6dca946e();
int64_t unknown_73603ede();
int64_t unknown_782b8ba4();
int64_t unknown_e2087d();
int64_t unknown_ffffffff8e399058();
int64_t unknown_ffffffff90c72076();
int64_t unknown_ffffffffad22a750();
int64_t unknown_ffffffffc0427ee4();
int64_t unknown_ffffffffd03513d2();
int64_t unknown_ffffffffe02d431d();
int64_t unknown_ffffffffeb288b86();
int64_t unknown_fffffffffb463881();

// Address range: 0x6ea90 - 0x6eaa8
int64_t function_6ea90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x6ea90
    int64_t v1; // 0x6ea90
    if (((char)v1 ^ 87) < 1) {
        function_6ea2d();
    }
    int16_t v2 = a3; // 0x6ea99
    __asm_outsd(v2, (int32_t)v1);
    __asm_out(v2, (char)v1);
    *(char *)a1 = __asm_insb(v2);
    return function_ffffffffbaa44d1f(v1 & 0xffffffff);
}

// Address range: 0x6eab4 - 0x6eab7
int64_t function_6eab4(int64_t a1) {
    // 0x6eab4
    int64_t result; // 0x6eab4
    return result;
}

// Address range: 0x6eac6 - 0x6eac7
int64_t function_6eac6(void) {
    // 0x6eac6
    int64_t result; // 0x6eac6
    return result;
}

// Address range: 0x6eaee - 0x6eaf7
int64_t function_6eaee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 0x4942c71e); // 0x6eaee
    *v1 = *v1 + (int32_t)a2;
    int64_t result; // 0x6eaee
    return result;
}

// Address range: 0x6eb13 - 0x6eb17
int64_t function_6eb13(int64_t a1, int64_t a2) {
    // 0x6eb13
    int64_t result; // 0x6eb13
    return result;
}

// Address range: 0x6eb1b - 0x6eb2e
int64_t function_6eb1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6eb1b
    int64_t v1; // 0x6eb1b
    if ((int32_t)v1 >= 0x2f7d0bc2) {
        function_6eac6();
    }
    // 0x6eb22
    *(char *)a1 = (char)a2;
    bool v2; // 0x6eb1b
    *(int32_t *)((v2 ? -1 : 1) + a1) = __asm_insd((int16_t)a3);
    __asm_rdtsc();
    return 0;
}

// Address range: 0x6eb33 - 0x6eb3c
int64_t function_6eb33(void) {
    // 0x6eb33
    return function_ffffffff83eb077e();
}

// Address range: 0x6eb47 - 0x6eb4c
int64_t function_6eb47(void) {
    // 0x6eb47
    return function_ffffffffaa233877();
}

// Address range: 0x6eb6b - 0x6eb6e
int64_t function_6eb6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x6eb6b
    int64_t result; // 0x6eb6b
    return result;
}

// Address range: 0x6eb8e - 0x6eb95
int64_t function_6eb8e(void) {
    // 0x6eb8e
    int64_t result; // 0x6eb8e
    return result;
}

// Address range: 0x6ebde - 0x6ebe0
int64_t function_6ebde(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x6ebde
    return a4 & 0xffffffff;
}

// Address range: 0x6ebe5 - 0x6ebe8
int64_t function_6ebe5(int64_t a1) {
    // 0x6ebe5
    int64_t result; // 0x6ebe5
    return result;
}

// Address range: 0x6ec43 - 0x6ec55
int64_t function_6ec43(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x186cfffa); // 0x6ec45
    *v1 = *v1 ^ 62;
    return unknown_ffffffffd03513d2();
}

// Address range: 0x6ec55 - 0x6ec59
int64_t function_6ec55(int64_t a1) {
    // 0x6ec55
    int64_t result; // 0x6ec55
    return result;
}

// Address range: 0x6ec59 - 0x6ec8f
int64_t function_6ec59(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int16_t v1 = a5; // 0x6ec61
    __asm_in(v1);
    __asm_in_133(-119);
    char * v2 = (char *)(2 * a2 + a5); // 0x6ec65
    *v2 = *v2 + (char)a5;
    int64_t v3; // 0x6ec59
    *(char *)-0x48200e05 = *(char *)-0x48200e05 + (char)(v3 / 256);
    __asm_outsb(v1, *(char *)0x57791f0b);
    char * v4 = (char *)(v3 - 0x2db4ca2f); // 0x6ec78
    *v4 = *v4 & (char)v3;
    return __asm_in_134(-112);
}

// Address range: 0x6ecd8 - 0x6ece0
int64_t function_6ecd8(int64_t a1) {
    // 0x6ecd8
    int64_t result; // 0x6ecd8
    int32_t * v1 = (int32_t *)(a1 + 0x40256d4b + result); // 0x6ecd8
    bool v2; // 0x6ecd8
    *v1 = *v1 + (int32_t)a1 + (int32_t)v2;
    return result;
}

// Address range: 0x6ed08 - 0x6ed2d
int64_t function_6ed08(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6ed08
    int64_t v1; // 0x6ed08
    int64_t v2 = v1 + 0xb7b06c09; // 0x6ed0a
    int64_t result = v2 & 0xffffffff; // 0x6ed0a
    int32_t v3 = *(int32_t *)(2 * result + 0x51bccdc1); // 0x6ed10
    int64_t v4 = (int32_t)((int32_t)v1 > 0x484f93f6) + (int32_t)a1 - v3; // 0x6ed10
    uint32_t v5 = (int32_t)v1;
    uint32_t v6 = *(int32_t *)v4; // 0x6ed17
    if (a4 == 1 || v6 == v5) {
        // 0x6ed1b
        bool v7; // 0x6ed08
        int64_t v8 = v7 ? -4 : 4; // 0x6ed17
        int64_t v9 = v8 + a2; // 0x6ed17
        char * v10 = (char *)(v9 + 0x779b9020); // 0x6ed1b
        unsigned char v11 = *v10; // 0x6ed1b
        char v12 = v6 > v5; // 0x6ed1b
        unsigned char v13 = v12 + (char)v2; // 0x6ed1b
        char v14 = v11 - v13; // 0x6ed1b
        bool v15 = v6 > v5 ? v13 != -1 | v11 < v14 - v12 : v11 < v13; // 0x6ed1b
        *v10 = v14;
        *(int32_t *)(v8 + v4) = *(int32_t *)v9;
        int32_t * v16 = (int32_t *)((a3 & -0xff01 | (int64_t)&g7) - 0x7e4d272b); // 0x6ed22
        uint32_t v17 = *v16; // 0x6ed22
        *v16 = v17 / 0x10000 | 0x20000 * v17 | 0x10000 * (int32_t)v15;
        return v9 + (v7 ? 0xfffffffc : 4) & 0xffffffff;
    }
    // 0x6ed33
    return result;
}

// Address range: 0x6eda7 - 0x6edd0
int64_t function_6eda7(uint64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6eda7
    __asm_in((int16_t)a3);
    int64_t v1; // 0x6eda7
    unsigned char v2 = *(char *)(v1 + a1 % 256); // 0x6edc1
    uint32_t result = 0x10000 * (int32_t)(a1 & 0xff00 | (int64_t)v2) >> 16; // 0x6edc9
    char * v3 = (char *)(a4 & -0xff01); // 0x6edca
    *v3 = *v3 ^ (char)(result / 256);
    return result;
}

// Address range: 0x6edd0 - 0x6edd1
int64_t function_6edd0(int64_t a1) {
    // 0x6edd0
    int64_t result; // 0x6edd0
    return result;
}

// Address range: 0x6ee76 - 0x6ee8e
int64_t function_6ee76(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x6ee76
    int64_t v1; // 0x6ee76
    int64_t v2 = v1;
    char v3 = *(char *)-0x2c8cf522; // 0x6ee76
    __asm_outsd((int16_t)a3, *(int32_t *)a5);
    uint32_t v4 = *(int32_t *)((v1 & -0x10000 | (int64_t)&g1 & -256 | 138) - 0x7649de1); // 0x6ee82
    *(int32_t *)a1 = 2 * (int32_t)v1 + (int32_t)(v4 < (int32_t)a4);
    bool v5; // 0x6ee76
    return v2 & -256 | (int64_t)((char)v5 + (char)v2 - v3 ^ -94);
}

// Address range: 0x6ee8f - 0x6eee1
int64_t function_6ee8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6ee8f
    int64_t v1; // 0x6ee8f
    int32_t * v2 = (int32_t *)(v1 - 0x7fd63a3d); // 0x6ee95
    *v2 = *v2 & (int32_t)a2;
    char * v3 = (char *)(v1 + 43); // 0x6ee9b
    *v3 = *v3 ^ (*(char *)(a2 + 0x2b9bff2b) | (char)v1);
    char * v4 = (char *)(v1 - 0x773f7725); // 0x6ee9e
    *v4 = *v4 - (char)a4;
    *(int32_t *)(v1 + 36) = 0;
    int64_t result; // 0x6ee8f
    if (*(int64_t *)(v1 + 1696) != __readfsqword(40)) {
        // 0x6eed0
        __stack_chk_fail();
        result = (int64_t)&g8;
    }
    // 0x6eed5
    return result;
}

// Address range: 0x6eef0 - 0x6ef22
int64_t function_6eef0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x6eef0
    __readfsqword(40);
    return function_2d6f9a();
}

// Address range: 0x6ef30 - 0x6ef32
int64_t function_6ef30(void) {
    // 0x6ef30
    int64_t result; // 0x6ef30
    return result;
}

// Address range: 0x6ef74 - 0x6ef7f
int64_t function_6ef74(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x6ef74
    int64_t result; // 0x6ef74
    return result;
}

// Address range: 0x6ef96 - 0x6efa8
int64_t function_6ef96(int64_t a1, int64_t a2) {
    // 0x6ef96
    int64_t v1; // 0x6ef96
    unsigned char v2 = (char)v1; // 0x6ef96
    bool v3; // 0x6ef96
    unsigned char v4 = v2 + 95 + (char)v3; // 0x6ef96
    bool v5 = v3 ? v4 <= v2 : v2 > 160; // 0x6ef96
    int64_t result = v1 & -256 | (int64_t)v4; // 0x6ef96
    *(char *)a1 = v4;
    *(int16_t *)(v1 + 63) = (int16_t)v1;
    uint32_t v6 = (int32_t)v1; // 0x6ef9c
    uint32_t v7 = (int32_t)v1 + v6; // 0x6ef9c
    bool v8 = v5 ? v7 + (int32_t)v5 <= v6 : v7 < v6; // 0x6ef9c
    int32_t * v9 = (int32_t *)(v1 + 114); // 0x6ef9e
    *v9 = *v9 - (int32_t)result + (int32_t)v8;
    return result;
}

// Address range: 0x6f002 - 0x6f003
int64_t function_6f002(void) {
    // 0x6f002
    int64_t result; // 0x6f002
    return result;
}

// Address range: 0x6f00a - 0x6f00b
int64_t function_6f00a(void) {
    // 0x6f00a
    int64_t result; // 0x6f00a
    return result;
}

// Address range: 0x6f00c - 0x6f00d
int64_t function_6f00c(void) {
    // 0x6f00c
    int64_t result; // 0x6f00c
    return result;
}

// Address range: 0x6f012 - 0x6f06b
int64_t function_6f012(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6f012
    int64_t v1; // 0x6f012
    uint32_t v2 = (int32_t)v1; // 0x6f016
    uint32_t v3 = v2 + (int32_t)a2; // 0x6f016
    int64_t v4 = v3; // 0x6f018
    if (v3 >= v2) {
        v4 = function_6f00a();
    }
    int64_t v5 = v4;
    char v6 = *(char *)(v5 - 0x2c653964) | (char)v5; // 0x6f01a
    char v7 = *(char *)(a4 + 0x45932d9e); // 0x6f020
    unsigned char v8 = v6 - v7; // 0x6f020
    unsigned char v9 = llvm_ctpop_i8(v8); // 0x6f020
    *(char *)0x72908496595a3a79 = v8;
    int64_t result = v5 & -256 | (int64_t)v8; // 0x6f034
    if (v6 < v7 == (v9 % 2 != 0)) {
        result = function_6f002();
    }
    // 0x6f03a
    return result;
}

// Address range: 0x6f190 - 0x6f194
int64_t function_6f190(void) {
    // 0x6f190
    int64_t result; // 0x6f190
    return result;
}

// Address range: 0x6f196 - 0x6f1a9
int64_t function_6f196(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6f196
    __asm_int1((int64_t)&g8, (int64_t)&g8, (int64_t)&g8, (int64_t)&g8);
    __asm_in_134(37);
    return function_5ce71106();
}

// Address range: 0x6f1b4 - 0x6f1b5
int64_t function_6f1b4(void) {
    // 0x6f1b4
    int64_t result; // 0x6f1b4
    return result;
}

// Address range: 0x6f1c2 - 0x6f1c6
int64_t function_6f1c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6f1c2
    __asm_hlt(a1, a2, a3, a4);
    return function_6f1b4();
}

// Address range: 0x6f1df - 0x6f1e0
int64_t function_6f1df(void) {
    // 0x6f1df
    int64_t result; // 0x6f1df
    return result;
}

// Address range: 0x6f202 - 0x6f21c
int64_t function_6f202(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)a5; // 0x6f20f
    char v2 = *v1 + *(char *)0x6eea38b8c4e08cdb; // 0x6f20f
    unsigned char v3 = llvm_ctpop_i8(v2); // 0x6f20f
    *v1 = v2;
    int64_t result = __asm_iretd(); // 0x6f212
    if (v3 % 2 == 0) {
        // 0x6f24e
        return result;
    }
    // 0x6f215
    return function_ffffffff8ac2f223();
}

// Address range: 0x6f21c - 0x6f228
int64_t function_6f21c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x6f21c
    bool v1; // 0x6f21c
    bool v2 = v1;
    int64_t v3; // 0x6f21c
    uint32_t v4 = (int32_t)v3;
    uint32_t v5 = 2 * v4; // 0x6f21d
    bool v6 = v2 ? (v5 | (int32_t)v2) <= v4 : v5 < v4; // 0x6f21d
    int32_t * v7 = (int32_t *)(v3 - 35); // 0x6f21f
    uint32_t v8 = *v7; // 0x6f21f
    int32_t v9 = v6; // 0x6f21f
    uint32_t v10 = v9 + (int32_t)v3; // 0x6f21f
    int32_t v11 = v8 - v10; // 0x6f21f
    bool v12 = v6 ? v10 != -1 | v8 < v11 - v9 : v8 < v10; // 0x6f21f
    *v7 = v11;
    int64_t v13 = a3 & -0xff01 | (int64_t)&g6; // 0x6f222
    int32_t * v14 = (int32_t *)v13; // 0x6f224
    *v14 = *v14 + (int32_t)a4 + (int32_t)v12;
    return v13 & 0xffffffff;
}

// Address range: 0x6f23b - 0x6f23d
int64_t function_6f23b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x6f23b
    int64_t result; // 0x6f23b
    return result;
}

// Address range: 0x6f24f - 0x6f254
int64_t function_6f24f(void) {
    // 0x6f24f
    int64_t v1; // 0x6f24f
    return function_6f270(v1, v1);
}

// Address range: 0x6f254 - 0x6f269
int64_t function_6f254(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x6f254
    int64_t v1; // 0x6f254
    float80_t v2; // 0x6f254
    *(int16_t *)v1 = (int16_t)v2;
    char * v3 = (char *)(a5 - 0x4e1e956d); // 0x6f25c
    *v3 = (char)a2 - 4 + *v3;
    int64_t v4; // 0x6f254
    return (int64_t)*(int32_t *)&v4;
}

// Address range: 0x6f270 - 0x6f273
int64_t function_6f270(int64_t a1, int64_t a2) {
    // 0x6f270
    float80_t v1; // 0x6f270
    *(int32_t *)a2 = (int32_t)v1;
    int64_t result; // 0x6f270
    return result;
}

// Address range: 0x6f275 - 0x6f276
int64_t function_6f275(int64_t a1) {
    // 0x6f275
    int64_t result; // 0x6f275
    return result;
}

// Address range: 0x6f2e2 - 0x6f2e3
int64_t function_6f2e2(void) {
    // 0x6f2e2
    int64_t result; // 0x6f2e2
    return result;
}

// Address range: 0x6f2fc - 0x6f301
int64_t function_6f2fc(void) {
    // 0x6f2fc
    return function_ffffffffaa190a47();
}

// Address range: 0x6f303 - 0x6f30a
int64_t function_6f303(int64_t a1, int64_t a2, int64_t a3) {
    // 0x6f303
    *(int32_t *)a1 = __asm_insd((int16_t)a2);
    return function_6f2e2();
}

// Address range: 0x6f37c - 0x6f37f
int64_t function_6f37c(void) {
    // 0x6f37c
    int64_t result; // 0x6f37c
    return result;
}

// Address range: 0x6f39f - 0x6f3a2
int64_t function_6f39f(void) {
    // 0x6f39f
    int64_t v1; // 0x6f39f
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x6f3a9 - 0x6f3aa
int64_t function_6f3a9(int64_t a1) {
    // 0x6f3a9
    int64_t result; // 0x6f3a9
    return result;
}

// Address range: 0x6f44f - 0x6f455
int64_t function_6f44f(int64_t a1) {
    // 0x6f44f
    int64_t result; // 0x6f44f
    return result;
}

// Address range: 0x6f462 - 0x6f46d
int64_t function_6f462(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6f462
    int64_t v1; // 0x6f462
    *(int32_t *)(v1 + a4) = 0x3317d439;
    return __asm_int1(a1, a2, a3, a4);
}

// Address range: 0x6f475 - 0x6f482
int64_t function_6f475(int64_t a1) {
    // 0x6f475
    int64_t v1; // 0x6f475
    *(int32_t *)0x3627ce514b422cf2 = (int32_t)v1;
    bool v2; // 0x6f475
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x6f48e - 0x6f4a4
int64_t function_6f48e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6f48e
    int64_t v1; // 0x6f48e
    uint64_t v2 = v1;
    char * v3 = (char *)(v2 - 17); // 0x6f48e
    *v3 = (char)(v2 / 256);
    int64_t v4 = 256 * (int64_t)*v3 | v2 & -0xff01; // 0x6f48e
    char * v5 = (char *)v4; // 0x6f491
    *v5 = *v5 + (char)a4;
    unsigned char v6 = *(char *)0x85dfd686139e1f; // 0x6f493
    return (v4 & 0xffffff00 | (int64_t)v6) + 0x910bb24b & 0xffffffff;
}

// Address range: 0x6f4bb - 0x6f50c
int64_t function_6f4bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x6f4bb
    *(char *)a1 = __asm_insb((int16_t)a3);
    __asm_in_133(106);
    int64_t v1; // 0x6f4bb
    int64_t result = v1 & 0xffffffff; // 0x6f4fc
    if (v1 != __readfsqword(40)) {
        // 0x6f4fe
        __stack_chk_fail();
        result = (int64_t)&g8;
    }
    // 0x6f503
    return result;
}

// Address range: 0x6f510 - 0x6f542
int64_t function_6f510(int64_t a1, int64_t a2) {
    // 0x6f510
    __readfsqword(40);
    return function_2e6b4d();
}

// Address range: 0x6f54b - 0x6f54c
int64_t function_6f54b(void) {
    // 0x6f54b
    int64_t result; // 0x6f54b
    return result;
}

// Address range: 0x6f555 - 0x6f556
int64_t function_6f555(void) {
    // 0x6f555
    int64_t result; // 0x6f555
    return result;
}

// Address range: 0x6f557 - 0x6f642
int64_t function_6f557(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a7;
    unsigned char v2 = (char)a2;
    int64_t v3; // 0x6f557
    unsigned char v4 = (char)v3 + v2; // 0x6f557
    *(char *)a2 = v4;
    if (v4 < v2 || v4 == 0) {
        // 0x6f560
        *(char *)0x5dad1394 = *(char *)0x5dad1394 - 108;
        char * v5 = (char *)(a1 + 0x5b358500); // 0x6f5a8
        *v5 = *v5 + (char)(a3 / 256);
        char * v6 = (char *)(a4 + 8); // 0x6f5af
        *v6 = -108;
        int64_t result = (int64_t)*v6 | 0x5dad1300; // 0x6f5af
        int32_t * v7 = (int32_t *)result; // 0x6f5b2
        int32_t v8 = *v7 - (int32_t)v3; // 0x6f5b2
        *v7 = v8;
        if (a4 != 1 == v8 == 0) {
            // 0x6f56a
            return result;
        }
        int64_t v9 = a4 - 2; // 0x6f5b6
        if (v9 != 0 && v8 != 0) {
            // 0x6f56a
            return result;
        }
        int64_t v10 = a1 + 4; // 0x6f5ca
        int64_t result2 = v10 & 0xffffffff; // 0x6f5cc
        *(char *)(v3 - 5) = (char)v1;
        *(int64_t *)0x5500af53 = 0x5500af5b;
        *(int64_t *)0x5500af4b = a6;
        int32_t * v11 = (int32_t *)(result2 + 0xff17aa0); // 0x6f5d4
        *v11 = *v11 & (int32_t)v10;
        if (v9 == 1) {
            // 0x6f5dc
            return result2;
        }
        // 0x6f570
        return v10 & 0xffffffe0;
    }
    char v12 = a3; // 0x6f58c
    char v13 = v3 / 256; // 0x6f58c
    char v14 = v13 + v12; // 0x6f58c
    *(int32_t *)(a4 + 59) = (int32_t)(int64_t)&v1;
    if (a4 != 1 != (v14 == 0)) {
        // 0x6f56a
        return 0x1394;
    }
    if (v14 < 0 == ((v14 ^ v12) & (v14 ^ v13)) < 0 == (v14 != 0)) {
        int64_t result3 = __asm_int3(); // 0x6f63c
        char * v15 = (char *)result3; // 0x6f63d
        *v15 = *v15 - 97 + (char)result3;
        return result3;
    }
    int64_t v16 = unknown_60719bc9(); // 0x6f5e5
    int32_t * v17 = (int32_t *)(v3 + 0x811854); // 0x6f5f0
    uint32_t v18 = *v17; // 0x6f5f0
    *v17 = (int32_t)v16;
    int32_t * v19 = (int32_t *)(v3 - 14); // 0x6f5f6
    *v19 = *v19 & 0x1d7376c6;
    return (int64_t)(*(int32_t *)(int64_t)v18 + v18);
}

// Address range: 0x6f66b - 0x6f693
int64_t function_6f66b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6f66b
    int64_t v1; // 0x6f66b
    *(int32_t *)-0x1d6d5aeb9e58fe2e = (int32_t)v1;
    int64_t v2 = v1 & -256 | (int64_t)*(char *)-0x592e4efe6c67024f; // 0x6f674
    __asm_int(39);
    __asm_out_135(11, (int32_t)v2);
    char * v3 = (char *)(v2 + 0x1357eb60); // 0x6f684
    *v3 = *v3 - (char)a3;
    float80_t v4; // 0x6f66b
    *(int64_t *)(a4 + 33) = (int64_t)v4;
    return function_423f5be();
}

// Address range: 0x6f6a0 - 0x6f6a1
int64_t function_6f6a0(void) {
    // 0x6f6a0
    int64_t result; // 0x6f6a0
    return result;
}

// Address range: 0x6f6b9 - 0x6f6ea
int64_t function_6f6b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6f6b9
    *(char *)0x6c978af1 = *(char *)0x6c978af1 >> 7;
    int64_t v1; // 0x6f6b9
    int32_t * v2 = (int32_t *)(v1 - 10); // 0x6f6e0
    *v2 = *v2 + (int32_t)v1;
    return v1 & 0xffffffff;
}

// Address range: 0x6f6fc - 0x6f712
int64_t function_6f6fc(int64_t a1, int64_t a2) {
    // 0x6f6fc
    int64_t v1; // 0x6f6fc
    return (int64_t)*(int32_t *)(v1 + 34);
}

// Address range: 0x6f719 - 0x6f727
int64_t function_6f719(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 & 0xffffffff; // 0x6f71a
    int32_t * v2 = (int32_t *)(v1 + 0x385beb75); // 0x6f71b
    bool v3; // 0x6f719
    *v2 = (int32_t)(bool)v3 + (int32_t)a1 + *v2;
    int64_t v4; // 0x6f719
    *(int32_t *)v1 = *(int32_t *)&v4 + 1;
    return a4 & 0xffffff00 | (int64_t)__asm_in_133(86);
}

// Address range: 0x6f72c - 0x6f72d
int64_t function_6f72c(int64_t a1) {
    // 0x6f72c
    int64_t result; // 0x6f72c
    return result;
}

// Address range: 0x6f734 - 0x6f741
int64_t function_6f734(int64_t a1) {
    // 0x6f734
    int64_t result; // 0x6f734
    *(char *)(a1 - 0x7b8e5e04 + result) = (char)(result / 256);
    return result;
}

// Address range: 0x6f74d - 0x6f75b
int64_t function_6f74d(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 - 93); // 0x6f756
    int64_t v2; // 0x6f74d
    bool v3; // 0x6f74d
    *v1 = (char)v3 - (char)v2 + *v1;
    return v2 & -256 | (int64_t)*(char *)0x12b8c13721855b93;
}

// Address range: 0x6f75b - 0x6f76d
int64_t function_6f75b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x6f75b
    int64_t result; // 0x6f75b
    uint64_t v1 = result;
    __asm_int(-52);
    uint32_t v2 = (int32_t)result; // 0x6f75d
    char v3 = *(char *)(a2 + 115); // 0x6f760
    int32_t * v4 = (int32_t *)(v1 & -0x10000 | (int64_t)(v3 & (char)v1) | 256 * (v1 / 256 + result + (int64_t)((int32_t)result > v2)) & 0xff00); // 0x6f763
    *v4 = *v4 & v2;
    return result;
}

// Address range: 0x6f7bc - 0x6f7bd
int64_t function_6f7bc(void) {
    // 0x6f7bc
    int64_t result; // 0x6f7bc
    return result;
}

// Address range: 0x6f831 - 0x6f832
int64_t function_6f831(void) {
    // 0x6f831
    int64_t result; // 0x6f831
    return result;
}

// Address range: 0x6f833 - 0x6f83a
int64_t function_6f833(int64_t a1) {
    // 0x6f833
    int64_t v1; // 0x6f833
    bool v2; // 0x6f833
    if (!v2 && !v2) {
        v1 = function_6f7bc();
    }
    int64_t v3 = v1;
    *(int32_t *)v3 = (int32_t)v3;
    return v3 & 0xffffffff;
}

// Address range: 0x6f850 - 0x6f8ea
int64_t function_6f850(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2 = a4 - 1; // 0x6f850
    int64_t result; // 0x6f850
    bool v3; // 0x6f850
    if (v2 != 0 == v3) {
        if (v3 || v3) {
            // 0x6f8d7
            *(char *)a1 = (char)a2;
            *(char *)(a4 + 71) = (char)((result + 0x972b + (int64_t)v3) / 256);
            return __asm_in((int16_t)a3 & -256 | 236);
        }
        // 0x6f873
        return result;
    }
    char v4 = (char)result + 16; // 0x6f852
    if (v4 >= 0) {
        int64_t v5 = result & -256; // 0x6f852
        uint64_t v6 = (v5 | (int64_t)v4) + 183; // 0x6f87d
        *(char *)a5 = (char)v6 + (char)a5;
        unsigned char v7 = *(char *)(v6 % 256 + result); // 0x6f882
        *(char *)0x66c4bb98e39d3faa = v7;
        return v5 | (int64_t)v7;
    }
    int32_t * v8 = (int32_t *)(a4 - 0x3ad0e625); // 0x6f856
    *v8 = *v8 | (int32_t)a3;
    char * v9 = (char *)(result + 0x5cc48bb4); // 0x6f85c
    *v9 = *v9 + (char)a3;
    char * v10 = (char *)(a1 + 0x9acae4); // 0x6f862
    *v10 = 2 * *v10;
    int32_t v11 = __asm_in((int16_t)a3); // 0x6f8bd
    uint64_t v12 = (int64_t)v11; // 0x6f8bd
    *(int32_t *)v1 = (int32_t)v2;
    char * v13 = (char *)(v12 - 0x7f94eac); // 0x6f8c4
    *v13 = *v13 & (char)(v12 / 256 + (int64_t)*(int32_t *)&v1);
    return v11 + 0x2a6a9aab + (int32_t)((char)v11 < 129);
}

// Address range: 0x6f907 - 0x6f916
int64_t function_6f907(int64_t a1, int64_t a2) {
    // 0x6f907
    bool v1; // 0x6f907
    int32_t * v2 = (int32_t *)(a2 - 0x76d9a558 + (v1 ? -4 : 4)); // 0x6f909
    *v2 = 0x100000 * *v2;
    int64_t v3; // 0x6f907
    return v3 & 0xffffffff;
}

// Address range: 0x6f916 - 0x6f964
int64_t function_6f916(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a3 - 0x3cca998e); // 0x6f916
    *v1 = *v1 + (char)a3;
    int64_t v2; // 0x6f916
    int64_t v3 = v2 + 0xe10513; // 0x6f91c
    int64_t v4 = v3 & 0xffffffff; // 0x6f91c
    char * v5 = (char *)(v4 - 0x772d772e); // 0x6f921
    unsigned char v6 = (char)a4; // 0x6f921
    *v5 = *v5 + v6;
    float80_t v7; // 0x6f916
    *(int32_t *)(v4 - 0x77367725) = (int32_t)v7;
    unsigned char v8 = v6 % 32; // 0x6f92d
    if (v8 != 0) {
        char * v9 = (char *)(v4 - 0x773f772e); // 0x6f92d
        unsigned char v10 = *v9; // 0x6f92d
        *v9 = v10 >> v8 | v10 << 8 - v8;
    }
    *(int32_t *)(v2 - 0x38dfdbbc) = (int32_t)v7;
    int64_t v11 = v3 & 0xffffff20; // 0x6f939
    char * v12 = (char *)v11; // 0x6f93c
    *v12 = *v12 + 2 * (char)v11;
    int64_t result = v2 & 0xffffffff; // 0x6f953
    if (__readfsqword(40) != a5) {
        // 0x6f955
        __stack_chk_fail();
        result = (int64_t)&g8;
    }
    // 0x6f95a
    return result;
}

// Address range: 0x6f970 - 0x6f9a2
int64_t function_6f970(int64_t a1, int64_t a2) {
    // 0x6f970
    __readfsqword(40);
    return function_2f220d();
}

// Address range: 0x6f9aa - 0x6f9db
int64_t function_6f9aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_e2087d(); // 0x6f9b2
    char * v2 = (char *)(a1 - 105); // 0x6f9b9
    *v2 = *v2 | (char)(*(int32_t *)(a1 - 0x1ce3fcc3) / 256);
    int64_t v3; // 0x6f9aa
    return (int64_t)(*(int32_t *)(4 * a4 - 117 + v3) & (int32_t)v1);
}

// Address range: 0x6fa2c - 0x6fa46
int64_t function_6fa2c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6fa2c
    int64_t v1; // 0x6fa2c
    return ((v1 & 0xffffff00 | (uint64_t)v1 % 256) ^ 192) + 0xe77a2047 & 0xffffff00 | 52;
}

// Address range: 0x6fa63 - 0x6fa66
int64_t function_6fa63(void) {
    // 0x6fa63
    int64_t result; // 0x6fa63
    return result;
}

// Address range: 0x6fa88 - 0x6fa8c
int64_t function_6fa88(void) {
    // 0x6fa88
    int64_t v1; // 0x6fa88
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    while (true) {
        // continue -> 0x6fa8a
    }
}

// Address range: 0x1383a4 - 0x1383a8
int64_t function_1383a4(void) {
    // 0x1383a4
    int64_t v1; // 0x1383a4
    char v2 = v1;
    *(char *)v1 = 2 * v2;
    int64_t v3; // 0x1383a4
    return v1 & -256 | (int64_t)(*(char *)&v3 + v2);
}

// Address range: 0x13842d - 0x138433
int64_t function_13842d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13842d
    return function_138473(a1, a2, a3);
}

// Address range: 0x138458 - 0x13845e
int64_t function_138458(int64_t a1, int64_t a2, int64_t a3) {
    // 0x138458
    int64_t result; // 0x138458
    bool v1; // 0x138458
    if (v1 || false) {
        // 0x138461
        return result;
    }
    // 0x13845a
    *(char *)a1 = __asm_insb((int16_t)a3);
    char * v2 = (char *)(result + 54); // 0x13845b
    *v2 = (char)(result / 256);
    return 256 * (int64_t)*v2 | result & -0xff01;
}

// Address range: 0x138473 - 0x138477
int64_t function_138473(int64_t a1, int64_t a2, int64_t a3) {
    // 0x138473
    int64_t v1; // 0x138473
    int64_t v2 = v1;
    return ((v2 & a3) + 222) % 256 | v2 & -256;
}

// Address range: 0x13848a - 0x13848b
int64_t function_13848a(void) {
    // 0x13848a
    int64_t result; // 0x13848a
    return result;
}

// Address range: 0x1384a6 - 0x1384bc
int64_t function_1384a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1384a6
    int64_t v1; // 0x1384a6
    uint64_t v2 = v1;
    char * v3 = (char *)(a1 - 1); // 0x1384a8
    char v4 = v2; // 0x1384a8
    *v3 = *v3 | v4;
    char * v5 = (char *)(a3 + 0x45a4184e); // 0x1384ab
    *v5 = *v5 - v4;
    *(char *)-0xa4ca448 = *(char *)-0xa4ca448 + (char)(v2 / 256);
    int16_t v6 = a3; // 0x1384b7
    __asm_out(v6, (char)v1);
    return __asm_in(v6);
}

// Address range: 0x1384d4 - 0x138524
int64_t function_1384d4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1384d4
    int64_t v1; // 0x1384d4
    int64_t v2 = v1;
    bool v3; // 0x1384d4
    if (!v3) {
        // 0x13851c
        *(int32_t *)v2 = (int32_t)v2 + (int32_t)a3;
        int64_t v4; // 0x1384d4
        return (int64_t)&v4;
    }
    int64_t v5 = v1 + (int64_t)*(int32_t *)-0x723492d82f1acd4; // 0x1384df
    int32_t * v6 = (int32_t *)(v2 + 0x5849d575); // 0x1384e1
    *v6 = *v6 + (int32_t)a2;
    return (v5 + 24) % 256 | v5 & 0xffffff00;
}

// Address range: 0x138526 - 0x13852c
int64_t function_138526(void) {
    // 0x138526
    int64_t v1; // 0x138526
    return (v1 & 0xffffff00 | (int64_t)__asm_in_133(81)) - v1 & 0xffffffff;
}

// Address range: 0x13852c - 0x138535
int64_t function_13852c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x13852c
    int64_t result; // 0x13852c
    return result;
}

// Address range: 0x37a6ca - 0x37a701
int64_t function_37a6ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37a6ca
    int64_t v1; // 0x37a6ca
    int32_t * v2 = (int32_t *)(v1 - 0x6ed79982); // 0x37a6ca
    *v2 = *v2 ^ (int32_t)v1;
    char * v3 = (char *)(v1 + 0x5f01e888); // 0x37a6d0
    *v3 = *v3 + (char)(v1 / 256);
    int64_t v4 = (unknown_ffffffffc0427ee4() & 0xf002218b) - v1; // 0x37a6e8
    int32_t * v5 = (int32_t *)(a1 + 0x67f03a18); // 0x37a6ea
    *v5 = *v5 + (int32_t)a4;
    int32_t * v6 = (int32_t *)(v1 + 0x1a942129); // 0x37a6f3
    *v6 = *v6 + (int32_t)v4;
    int64_t result = v4 + 0x17ffc76e & 0xffffffff; // 0x37a6f9
    int32_t * v7 = (int32_t *)(result - 128); // 0x37a6fe
    *v7 = *v7 + (int32_t)a3;
    return result;
}

// Address range: 0x37a796 - 0x37a7ae
int64_t function_37a796(void) {
    // 0x37a796
    int64_t v1; // 0x37a796
    int32_t * v2 = (int32_t *)(v1 - 54); // 0x37a799
    uint32_t v3 = *v2; // 0x37a799
    uint32_t v4 = ((int32_t)v1 & -256 | 232) + v3; // 0x37a799
    *v2 = v4;
    if (v4 < v3) {
        function_ff5f23a();
    }
    int64_t v5 = __asm_iretd() + (v4 < v3 ? 0xc8d401e9 : 0xc8d401e8); // 0x37a7a4
    return (v5 + 21) % 256 | v5 & 0xffffff00;
}

// Address range: 0x37a7b1 - 0x37a7ba
int64_t function_37a7b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37a7b1
    return a4 & 0xffffffff;
}

// Address range: 0x37a7ba - 0x37a7bb
int64_t function_37a7ba(int64_t a1) {
    // 0x37a7ba
    int64_t result; // 0x37a7ba
    return result;
}

// Address range: 0x37a7be - 0x37a7bf
int64_t function_37a7be(void) {
    // 0x37a7be
    int64_t result; // 0x37a7be
    return result;
}

// Address range: 0x37a821 - 0x37a822
int64_t function_37a821(void) {
    // 0x37a821
    int64_t result; // 0x37a821
    return result;
}

// Address range: 0x37a83e - 0x37a841
int64_t function_37a83e(void) {
    // 0x37a83e
    int64_t result; // 0x37a83e
    return result;
}

// Address range: 0x37a846 - 0x37a849
int64_t function_37a846(void) {
    // 0x37a846
    int64_t result; // 0x37a846
    return result;
}

// Address range: 0x37a852 - 0x37a85b
int64_t function_37a852(void) {
    int64_t result = unknown_ffffffff8e399058(); // 0x37a852
    __asm_rcl(*(char *)result);
    return result;
}

// Address range: 0x37a8bb - 0x37a8c4
int64_t function_37a8bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37a8bb
    int64_t result; // 0x37a8bb
    char * v1 = (char *)(result - 0x7d261933); // 0x37a8bb
    *v1 = *v1 + (char)a4;
    return result;
}

// Address range: 0x37a90e - 0x37a911
int64_t function_37a90e(void) {
    // 0x37a90e
    int64_t result; // 0x37a90e
    return result;
}

// Address range: 0x37a916 - 0x37a91b
int64_t function_37a916(void) {
    // 0x37a916
    return function_ffffffffe8224d45();
}

// Address range: 0x37aa03 - 0x37aa27
int64_t function_37aa03(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a3 + 37); // 0x37aa03
    int64_t v2; // 0x37aa03
    *v1 = *v1 + (char)(v2 / 256);
    int64_t v3; // 0x37aa03
    *(char *)a1 = *(char *)&v3 + (char)(a4 / 256);
    int64_t v4; // 0x37aa03
    *(int32_t *)a4 = *(int32_t *)&v4 + (int32_t)a1;
    int32_t * v5 = (int32_t *)(a2 - 0x33378636); // 0x37aa0d
    *v5 = *v5 & 0x443d3989;
    unknown_ffffffffe02d431d();
    return v2 + 0x1c2293ae & 0xffffffff;
}

// Address range: 0x37aa46 - 0x37aa47
int64_t function_37aa46(void) {
    // 0x37aa46
    int64_t result; // 0x37aa46
    return result;
}

// Address range: 0x37aa4a - 0x37aa4b
int64_t function_37aa4a(void) {
    // 0x37aa4a
    int64_t result; // 0x37aa4a
    return result;
}

// Address range: 0x37aa54 - 0x37aa55
int64_t function_37aa54(void) {
    // 0x37aa54
    int64_t result; // 0x37aa54
    return result;
}

// Address range: 0x37aa5e - 0x37aa5f
int64_t function_37aa5e(int64_t a1) {
    // 0x37aa5e
    int64_t result; // 0x37aa5e
    return result;
}

// Address range: 0x37aa60 - 0x37aa61
int64_t function_37aa60(int64_t a1) {
    // 0x37aa60
    int64_t result; // 0x37aa60
    return result;
}

// Address range: 0x37aa70 - 0x37aac1
int64_t function_37aa70(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37aa70
    int64_t v1; // 0x37aa70
    uint32_t v2 = (int32_t)v1;
    uint32_t v3 = (int32_t)v1;
    bool v4; // 0x37aa70
    int64_t v5 = v4 ? -4 : 4; // 0x37aa76
    int64_t v6 = v5 + a2; // 0x37aa76
    *(int32_t *)0x720ad8fd7ab2bd09 = (int32_t)v1;
    int64_t v7 = unknown_ffffffffeb288b86(v5 + a1, v6); // 0x37aa80
    if (v2 > v3) {
        uint32_t v8 = (int32_t)a4;
        uint32_t v9 = v8 % 32; // 0x37aabb
        *(int32_t *)a4 = v8 + (int32_t)a3;
        return v9 == 0 ? v7 : (int64_t)((int32_t)v7 >> v9);
    }
    int64_t v10 = v7; // 0x37aa87
    if (a4 != 1 == v2 == v3) {
        v10 = function_37aa46();
    }
    if (a4 != 2 != (v2 == v3)) {
        char * v11 = (char *)(v6 - 102); // 0x37aa8b
        *v11 = (char)(v2 < v3) - (char)v10 + *v11;
        return unknown_2c31c395();
    }
    int32_t v12 = v1; // 0x37aa96
    int32_t v13 = a3; // 0x37aa96
    int32_t v14 = v12 + v13; // 0x37aa96
    if (v14 < 0 == ((v14 ^ v12) & (v14 ^ v13)) < 0 == (v14 != 0)) {
        function_37aa4a();
    }
    int64_t v15 = a4 - 3; // 0x37aa9b
    if (v15 != 0 && v14 != 0) {
        function_37aa54();
    }
    int64_t result = unknown_782b8ba4(); // 0x37aa9e
    unsigned char v16 = (char)v15 % 32; // 0x37aaa5
    if (v16 != 0) {
        char * v17 = (char *)(result + 5); // 0x37aaa5
        *v17 = *v17 << v16;
    }
    return result;
}

// Address range: 0x37aad1 - 0x37aad8
int64_t function_37aad1(void) {
    // 0x37aad1
    return function_fffffffff9e787a0();
}

// Address range: 0x37aadc - 0x37aae1
int64_t function_37aadc(void) {
    // 0x37aadc
    return function_ffffffffb24cfdda();
}

// Address range: 0x37abbf - 0x37abc4
int64_t function_37abbf(void) {
    // 0x37abbf
    return function_ffffffffccfad877();
}

// Address range: 0x37ac2b - 0x37ac3a
int64_t function_37ac2b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x37ac2b
    int64_t v1; // 0x37ac2b
    int64_t result = v1 + 0xe82d1a00 & 0xffffffff; // 0x37ac2b
    int32_t * v2 = (int32_t *)(result - 0x6f4277fd); // 0x37ac31
    *v2 = *v2 + (int32_t)a3;
    return result;
}

// Address range: 0x37ac70 - 0x37ac87
int64_t function_37ac70(int64_t a1, int64_t a2) {
    // 0x37ac70
    unknown_ffffffff90c72076();
    int32_t * v1 = (int32_t *)(a2 + 0xc03909d); // 0x37ac7c
    int64_t v2; // 0x37ac70
    *v1 = *v1 + (int32_t)v2;
    return function_ffffffffe84452d1((int32_t)v2 + (int32_t)a1);
}

// Address range: 0x37adca - 0x37adcc
int64_t function_37adca(int64_t a1, int64_t a2) {
    // 0x37adca
    int64_t result; // 0x37adca
    return result;
}

// Address range: 0x37adf8 - 0x37ae03
int64_t function_37adf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x37adf8
    int64_t v1; // 0x37adf8
    int64_t v2 = v1;
    int64_t result; // 0x37adf8
    bool v3; // 0x37adf8
    if (v3) {
        result = function_37ad7d();
    }
    // 0x37adfa
    if (a4 == 0) {
        // 0x37ae64
        return result;
    }
    // 0x37adfc
    *(char *)a3 = (char)result + (char)a3;
    *(char *)v2 = (char)v2;
    return result;
}

// Address range: 0x37ae03 - 0x37ae0f
int64_t function_37ae03(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37ae03
    int64_t result; // 0x37ae03
    int32_t * v1 = (int32_t *)(8 * a4 + 100 + result); // 0x37ae03
    *v1 = *v1 + (int32_t)result;
    int32_t * v2 = (int32_t *)(result - 73); // 0x37ae07
    *v2 = *v2 & (int32_t)a1;
    return result;
}

// Address range: 0x37ae41 - 0x37ae42
int64_t function_37ae41(void) {
    // 0x37ae41
    int64_t result; // 0x37ae41
    return result;
}

// Address range: 0x37ae8f - 0x37ae96
int64_t function_37ae8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x3c0a8871); // 0x37ae8f
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x37ae8f
    return result;
}

// Address range: 0x37af26 - 0x37af27
int64_t function_37af26(void) {
    // 0x37af26
    int64_t result; // 0x37af26
    return result;
}

// Address range: 0x37af49 - 0x37af4a
int64_t function_37af49(void) {
    // 0x37af49
    int64_t result; // 0x37af49
    return result;
}

// Address range: 0x37af70 - 0x37af87
int64_t function_37af70(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x37af70
    int64_t v1; // 0x37af70
    uint32_t result = 31 * (int32_t)v1; // 0x37af72
    *(char *)a1 = __asm_insb((int16_t)result);
    unknown_fffffffffb463881();
    if (((char)(a2 / 128) & -2 || (char)((char)v1 < 77)) != 0) {
        function_37af26();
    }
    // 0x37af85
    return result;
}

// Address range: 0x37af9b - 0x37af9c
int64_t function_37af9b(void) {
    // 0x37af9b
    int64_t result; // 0x37af9b
    return result;
}

// Address range: 0x37afe4 - 0x37afe7
int64_t function_37afe4(int64_t a1) {
    // 0x37afe4
    int64_t result; // 0x37afe4
    return result;
}

// Address range: 0x37affe - 0x37afff
int64_t function_37affe(void) {
    // 0x37affe
    int64_t result; // 0x37affe
    return result;
}

// Address range: 0x37b006 - 0x37b021
int64_t function_37b006(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37b006
    bool v1; // 0x37b006
    bool v2 = v1;
    uint32_t v3 = (int32_t)a4; // 0x37b006
    int64_t v4; // 0x37b006
    uint32_t v5 = *(int32_t *)(v4 + 0x681201e8) + v3; // 0x37b006
    if (v2 ? v5 + (int32_t)v2 <= v3 : v5 < v3) {
        function_37affe();
    }
    // 0x37b012
    function_37af9b();
    return function_37b045(a1, a2, a3 & -256 | 84);
}

// Address range: 0x37b027 - 0x37b02c
int64_t function_37b027(void) {
    // 0x37b027
    return function_edbc4c();
}

// Address range: 0x37b045 - 0x37b057
int64_t function_37b045(int64_t a1, int64_t a2, int64_t a3) {
    // 0x37b045
    return __asm_sti();
}

// Address range: 0x37b06c - 0x37b071
int64_t function_37b06c(void) {
    // 0x37b06c
    return function_ffffffff806618a5();
}

// Address range: 0x37b2ca - 0x37b2e3
int64_t function_37b2ca(int64_t a1, int64_t a2, uint64_t a3) {
    int32_t v1 = a1; // 0x37b2ca
    *(int32_t *)-0x1735752f = *(int32_t *)-0x1735752f + v1;
    int64_t v2; // 0x37b2ca
    int32_t * v3 = (int32_t *)(v2 - 124); // 0x37b2d0
    uint32_t v4 = *v3; // 0x37b2d0
    uint32_t v5 = v4 + v1; // 0x37b2d0
    *v3 = v5;
    char * v6 = (char *)(v2 + 0x5400b3cf); // 0x37b2d3
    unsigned char v7 = *v6; // 0x37b2d3
    unsigned char v8 = v7 + (char)v2; // 0x37b2d3
    unsigned char v9 = v8 + (char)(v5 < v4); // 0x37b2d3
    *v6 = v9;
    int64_t result = v2 - (v5 < v4 ? v9 <= v7 : v8 < v7 ? 0xc320e463 : 0xc320e462) & 0xffffffff; // 0x37b2d9
    char * v10 = (char *)(4 * result + v2); // 0x37b2de
    *v10 = *v10 + (char)(a3 / 256);
    *(int16_t *)a1 = (int16_t)v2;
    return result;
}

// Address range: 0x37b34a - 0x37b376
int64_t function_37b34a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x37b34a
    unknown_ffffffffad22a750();
    int64_t v1; // 0x37b34a
    int64_t v2 = *(int64_t *)(0xc2ef8b75 * v1 & 0xffffffff); // 0x37b35b
    int32_t * v3 = (int32_t *)(v2 + 0x1347f90); // 0x37b35c
    *v3 = *v3 + (int32_t)v1;
    int64_t v4; // 0x37b34a
    int64_t v5 = v2 & -256 | (int64_t)*(char *)&v4; // 0x37b362
    int32_t * v6 = (int32_t *)v5; // 0x37b36b
    *v6 = *v6 + (int32_t)v5;
    return function_59fa99a7();
}

// Address range: 0x37b377 - 0x37b389
int64_t function_37b377(void) {
    char v1 = *(char *)-0xc03d579; // 0x37b380
    int64_t v2; // 0x37b377
    *(char *)-0xc03d579 = v1 + (char)((uint64_t)v2 / 256);
    return (int64_t)*(int32_t *)0x71821733976000b3;
}

// Address range: 0x37b3a6 - 0x37b3a9
int64_t function_37b3a6(int64_t a1) {
    // 0x37b3a6
    int64_t result; // 0x37b3a6
    return result;
}

// Address range: 0x37b3ee - 0x37b3ef
int64_t function_37b3ee(void) {
    // 0x37b3ee
    int64_t result; // 0x37b3ee
    return result;
}

// Address range: 0x37b3f2 - 0x37b498
int64_t function_37b3f2(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    // 0x37b3f2
    int64_t v1; // 0x37b3f2
    int64_t v2 = v1;
    *(int32_t *)0x1e876230eccd3fb = (int32_t)v1;
    int64_t v3 = unknown_3da52b01(); // 0x37b3fb
    int32_t * v4 = (int32_t *)(a3 + 0x50800b3 + 8 * a3); // 0x37b400
    *v4 = *v4 + (int32_t)a3;
    int64_t v5 = v3 & 0xffffffff; // 0x37b407
    *(int32_t *)a1 = *(int32_t *)v5;
    bool v6; // 0x37b3f2
    int64_t v7 = v6 ? -4 : 4; // 0x37b408
    int64_t v8 = v7 + a1; // 0x37b408
    uint32_t v9 = (int32_t)a4; // 0x37b409
    uint32_t v10 = v9 % 32; // 0x37b409
    uint64_t v11 = v10 == 0 ? a2 & 0xffffffff : (int64_t)((int32_t)a2 >> v10);
    int32_t * v12 = (int32_t *)(a3 + 0x107fb59a); // 0x37b40b
    *v12 = *v12 + v9;
    int64_t v13 = v11 & 0xffffff00; // 0x37b411
    unsigned char v14 = *(char *)(v2 + (int64_t)*(char *)(v2 + v11 % 256)); // 0x37b412
    int64_t v15 = v13 | (int64_t)v14; // 0x37b412
    int32_t * v16 = (int32_t *)v15; // 0x37b416
    *v16 = *v16 + (int32_t)v15;
    char v17 = v14 + (char)(a3 / 256); // 0x37b418
    if (v17 >= 0) {
        if (v17 == 0) {
            // 0x37b445
            return v13 | (int64_t)v17;
        }
        int32_t v18 = v1; // 0x37b42a
        int32_t v19 = v1; // 0x37b42a
        int32_t v20 = v19 + v18; // 0x37b42a
        int64_t v21 = v1 & 0xffffffff & unknown_23859524(); // 0x37b42c
        if (v20 < 0 != ((v20 ^ v18) & (v20 ^ v19)) < 0) {
            v21 = function_37b3ee();
        }
        // 0x37b42e
        *(char *)-0x1777f90f = *(char *)-0x1777f90f | (char)(a4 / 256);
        int32_t * v22 = (int32_t *)(v21 - 83); // 0x37b437
        *v22 = *v22 + (int32_t)v21;
        int64_t v23; // bp-1760262732, 0x37b3f2
        return (int64_t)&v23;
    }
    int64_t v24 = v5 + v7; // 0x37b408
    int32_t * v25 = (int32_t *)(v8 - 0x2771cfb8); // 0x37b484
    int64_t v26 = a4 & -256 | (int64_t)*(char *)(v8 - 24); // 0x37b476
    int64_t v27; // 0x37b3f2
    int64_t v28 = v27;
    int64_t v29 = v13 | (int64_t)*(char *)v24;
    int64_t v30 = v26 & -0xff01 | 256 * v29 & 0xff00; // 0x37b477
    int32_t * v31 = (int32_t *)(v30 - 114); // 0x37b479
    *v31 = *v31 + (int32_t)(v24 + (v6 ? 0xffffffff : 1));
    char * v32 = (char *)v29; // 0x37b47c
    char v33 = v29; // 0x37b47c
    *v32 = *v32 - v33;
    *(char *)-0x16f64614 = *(char *)-0x16f64614 | v33;
    int32_t v34 = v30; // 0x37b484
    *v25 = *v25 + v34;
    uint32_t v35 = v34 + (int32_t)v29; // 0x37b48a
    int64_t v36 = v28 & 0xffffffff; // 0x37b48c
    v26 = (int64_t)v35 - 1;
    while (v35 != 0 && v26 != 0) {
        // 0x37b477
        v28 = v29;
        v29 = v36;
        v30 = v26 & -0xff01 | 256 * v29 & 0xff00;
        v31 = (int32_t *)(v30 - 114);
        *v31 = *v31 + (int32_t)(v24 + (v6 ? 0xffffffff : 1));
        v32 = (char *)v29;
        v33 = v29;
        *v32 = *v32 - v33;
        *(char *)-0x16f64614 = *(char *)-0x16f64614 | v33;
        v34 = v30;
        *v25 = *v25 + v34;
        v35 = v34 + (int32_t)v29;
        v36 = v28 & 0xffffffff;
        v26 = (int64_t)v35 - 1;
    }
    int32_t * v37 = (int32_t *)v36; // 0x37b48f
    *v37 = *v37 + (int32_t)v28;
    return unknown_73603ede();
}

// Address range: 0x37b4b9 - 0x37b4bc
int64_t function_37b4b9(int64_t a1, int64_t a2) {
    // 0x37b4b9
    int64_t v1; // 0x37b4b9
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x37b4c7 - 0x37b4ca
int64_t function_37b4c7(void) {
    // 0x37b4c7
    int64_t result; // 0x37b4c7
    return result;
}

// Address range: 0x37b4eb - 0x37b51a
int64_t function_37b4eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t result = unknown_24123ff6(); // 0x37b4f0
    int64_t v2; // 0x37b4eb
    int64_t v3; // 0x37b4eb
    *(int32_t *)v2 = 0;
    int32_t * v4 = (int32_t *)((result + v3 & 0xffffffff) + 0x12cd3607); // 0x37b4f9
    int64_t v5; // 0x37b4eb
    *v4 = *v4 + (int32_t)v5;
    int32_t * v6 = (int32_t *)(unknown_48273805() - 0xe57dd66); // 0x37b504
    int32_t v7 = *v6 + (int32_t)a4; // 0x37b504
    unsigned char v8 = llvm_ctpop_i8((char)v7); // 0x37b504
    *v6 = v7;
    result = __asm_iretd();
    while (v8 % 2 != 0) {
        // 0x37b4f5
        *(int32_t *)v5 = *(int32_t *)&v5 - (int32_t)v3;
        v4 = (int32_t *)((result + v3 & 0xffffffff) + 0x12cd3607);
        *v4 = *v4 + (int32_t)v5;
        v6 = (int32_t *)(unknown_48273805() - 0xe57dd66);
        v7 = *v6 + (int32_t)a4;
        v8 = llvm_ctpop_i8((char)v7);
        *v6 = v7;
        result = __asm_iretd();
    }
    // 0x37b50d
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v5;
    return result;
}

// Address range: 0x37b54c - 0x37b576
int64_t function_37b54c(int64_t a1) {
    // 0x37b54c
    unknown_6dca946e();
    return __asm_sti();
}

// Address range: 0x37b5da - 0x37b5db
int64_t function_37b5da(int64_t a1) {
    // 0x37b5da
    int64_t result; // 0x37b5da
    return result;
}

// Address range: 0x37b607 - 0x37b60f
int64_t function_37b607(void) {
    // 0x37b607
    int64_t v1; // 0x37b607
    uint64_t v2 = v1;
    char * v3 = (char *)(v2 + 15); // 0x37b607
    *v3 = *v3 + (char)(v2 / 256);
    return function_174b615();
}

// Address range: 0x37b64a - 0x37b64b
int64_t function_37b64a(void) {
    // 0x37b64a
    int64_t result; // 0x37b64a
    return result;
}
