/*
 * Targeted RetDec C for native executable gap queue batch 3901.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x35f6e-0x35fcc rank=- name=- kind=- bytes=- uncovered=-
 *   0x3794a-0x379a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38f7b-0x38fcf rank=- name=- kind=- bytes=- uncovered=-
 *   0x40c3e-0x40c8c rank=- name=- kind=- bytes=- uncovered=-
 *   0x413ab-0x413fd rank=- name=- kind=- bytes=- uncovered=-
 *   0x41551-0x415ae rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a2a1-0x4a2f8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x60880-0x608d2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x67c96-0x67ce4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x76dc4-0x76e22 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13c209-0x13c266 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e15ab-0x1e15fc rank=- name=- kind=- bytes=- uncovered=-
 *   0x48db67-0x48dbb8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48e5f4-0x48e641 rank=- name=- kind=- bytes=- uncovered=-
 *   0x490241-0x490294 rank=- name=- kind=- bytes=- uncovered=-
 *   0x499a60-0x499ab0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4afcd2-0x4afd30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b4db5-0x4b4e10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c171e-0x4c1770 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c32a1-0x4c32f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f54b4-0x4f5500 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50520e-0x505260 rank=- name=- kind=- bytes=- uncovered=-
 *   0x514851-0x5148a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5224f9-0x522540 rank=- name=- kind=- bytes=- uncovered=-
 *   0x523463-0x5234b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54c680-0x54c6d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x550a0c-0x550a60 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5660ab-0x566100 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56b1d6-0x56b220 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5764fa-0x576550 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57b298-0x57b2f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57b9b4-0x57ba10 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g6;
extern int g7;
extern int g8;
extern int g10;
extern int g11;
extern int g12;
extern int g13;
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

int64_t function_13c209(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_13c24f(void);
int64_t function_1e15ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1fd40();
int64_t function_200c0();
int64_t function_20540();
int64_t function_20a50();
int64_t function_20d90();
int64_t function_2509a();
int64_t function_250b0();
int64_t function_251e8();
int64_t function_2562c();
int64_t function_25a28();
int64_t function_35f6e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_35fb9(int64_t a1, int64_t a2);
int64_t function_35fc4(int64_t a1);
int64_t function_3794a(int64_t a1, int64_t a2);
int64_t function_37972(int64_t result);
int64_t function_37976(int64_t a1);
int64_t function_3797b(int64_t a1, int64_t a2);
int64_t function_37986(int64_t result);
int64_t function_3798e(int64_t result);
int64_t function_380a0();
int64_t function_38f7b(int64_t a1, int64_t a2);
int64_t function_38fcf();
int64_t function_3aeea();
int64_t function_40adf();
int64_t function_40c3e(int64_t a1, int64_t a2);
int64_t function_40c81(int64_t a1);
int64_t function_40c88(int64_t a1);
int64_t function_41077();
int64_t function_413ab(void);
int64_t function_413c1(int64_t a1);
int64_t function_413cc(int64_t a1, int64_t a2);
int64_t function_41551(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47e0a();
int64_t function_48db67(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48db9a(int64_t a1, int64_t result);
int64_t function_48e5f4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48f642();
int64_t function_490241(int64_t a1, int64_t a2, int64_t a3);
int64_t function_499388();
int64_t function_499a52();
int64_t function_499a60(void);
int64_t function_499a82(void);
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_4a1b4();
int64_t function_4a2a1(int64_t a1);
int64_t function_4a2ba(int64_t a1, int64_t a2);
int64_t function_4a2f6(void);
int64_t function_4afc8b();
int64_t function_4afcd2(void);
int64_t function_4b4da8();
int64_t function_4b4db5(int64_t a1);
int64_t function_4b4dc0(int64_t str);
int64_t function_4c171e(int64_t a1, int64_t a2);
int64_t function_4c32a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4d70e();
int64_t function_4eeb30();
int64_t function_4eeb40();
int64_t function_4eeb50();
int64_t function_4f1720();
int64_t function_4f54b4(void);
int64_t function_4f54c0(int64_t a1);
int64_t function_5050b0();
int64_t function_505172();
int64_t function_50520e(void);
int64_t function_505215(void);
int64_t function_50523b(void);
int64_t function_5147e9();
int64_t function_514820();
int64_t function_514851(void);
int64_t function_514860(void);
int64_t function_51486e(void);
int64_t function_514895(void);
int64_t function_52222d();
int64_t function_52225e();
int64_t function_522268();
int64_t function_52231b();
int64_t function_5224f9(void);
int64_t function_52250b(void);
int64_t function_52251e(void);
int64_t function_522529(uint64_t a1);
int64_t function_522f40();
int64_t function_523145();
int64_t function_5231fd();
int64_t function_523463(void);
int64_t function_523470(void);
int64_t function_52348f(void);
int64_t function_523499(void);
int64_t function_54c5e0();
int64_t function_54c623();
int64_t function_54c680(int64_t a1, int64_t a2, int64_t a3);
int64_t function_54c68e(int64_t a1, int64_t a2);
int64_t function_54cf10();
int64_t function_5509d0();
int64_t function_5509f7();
int64_t function_550a0c(void);
int64_t function_550a0e(int64_t a1);
int64_t function_565fbf();
int64_t function_56602f();
int64_t function_5660ab(void);
int64_t function_5660ad(int64_t a1, int64_t a2);
int64_t function_5660c0(int64_t a1, int64_t a2);
int64_t function_5660c7(void);
int64_t function_5660d9(void);
int64_t function_5660eb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_56b143();
int64_t function_56b1d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_56b1f8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_56b214(int64_t a1, int64_t result);
int64_t function_576494();
int64_t function_5764fa(void);
int64_t function_57650b(int64_t a1);
int64_t function_57654a(void);
int64_t function_57a3c0();
int64_t function_57acd4();
int64_t function_57ad70();
int64_t function_57aeeb();
int64_t function_57b165();
int64_t function_57b298(void);
int64_t function_57b29f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_57b581();
int64_t function_57b5b0();
int64_t function_57b6bf();
int64_t function_57b9b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_57b9c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_599ba();
int64_t function_6080a();
int64_t function_60880(int64_t a1, int64_t a2);
int64_t function_608c4(int64_t result);
int64_t function_67c72();
int64_t function_67c96(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_67cbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_76dc4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_76e16(int64_t result);
int64_t function_76e1a(int64_t a1);

// Address range: 0x35f6e - 0x35fb9
int64_t function_35f6e(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x35f71
    int64_t v2; // 0x35f6e
    uint64_t v3 = (v2 & 0xffffffff) % v1; // 0x35f7a
    int64_t v4 = *(int64_t *)(8 * v3 + a1); // 0x35f80
    if (v4 == 0) {
        // 0x35fb2
        return 0;
    }
    int32_t v5 = v2;
    int64_t result = *(int64_t *)v4; // 0x35f8e
    if (*(int32_t *)(result + 8) == v5) {
        // 0x35fb2
        return result;
    }
    int64_t v6 = result; // 0x35f95
    v6 = *(int64_t *)v6;
    int64_t result2 = 0; // 0x35f9d
    while (v6 != 0) {
        uint32_t v7 = *(int32_t *)(v6 + 8); // 0x35fa5
        result2 = 0;
        if (v3 != (int64_t)v7 % v1) {
            // break -> 0x35fb2
            break;
        }
        // 0x35f91
        result2 = v6;
        if (v7 == v5) {
            // break -> 0x35fb2
            break;
        }
        v6 = *(int64_t *)v6;
        result2 = 0;
    }
    // 0x35fb2
    return result2;
}

// Address range: 0x35fb9 - 0x35fc3
int64_t function_35fb9(int64_t a1, int64_t a2) {
    // 0x35fb9
    return a2 & -256 | (int64_t)(bool)(a1 == a2);
}

// Address range: 0x35fc4 - 0x35fcc
int64_t function_35fc4(int64_t a1) {
    // 0x35fc4
    return a1 + 8;
}

// Address range: 0x3794a - 0x37971
int64_t function_3794a(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x3794d
    *v1 = 0;
    int64_t result; // 0x3794a
    if (a2 != 0) {
        // 0x37957
        *(int64_t *)a1 = a2;
        *(int64_t *)(a1 + 24) = 0x2569a;
        *v1 = 0x256a2;
        result = 0x256a2;
    }
    // 0x37970
    return result;
}

// Address range: 0x37972 - 0x37976
int64_t function_37972(int64_t result) {
    // 0x37972
    return result;
}

// Address range: 0x37976 - 0x3797b
int64_t function_37976(int64_t a1) {
    // 0x37976
    return *(int64_t *)(a1 + 8);
}

// Address range: 0x3797b - 0x37985
int64_t function_3797b(int64_t a1, int64_t a2) {
    // 0x3797b
    return a2 & -256 | (int64_t)(bool)(a1 != a2);
}

// Address range: 0x37986 - 0x3798e
int64_t function_37986(int64_t result) {
    // 0x37986
    *(int64_t *)result = result + 64;
    return result;
}

// Address range: 0x3798e - 0x37992
int64_t function_3798e(int64_t result) {
    // 0x3798e
    return result;
}

// Address range: 0x38f7b - 0x38fcf
int64_t function_38f7b(int64_t a1, int64_t a2) {
    // 0x38f7b
    function_251e8();
    int64_t result = function_38fcf(a1); // 0x38f8c
    if ((char)result == 0) {
        // 0x38fcd
        return result;
    }
    int64_t * v1 = (int64_t *)(a1 - 24); // 0x38f98
    int64_t v2 = *v1; // 0x38f98
    if (v2 == 0) {
        // 0x38fcd
        return a1 & -256 | (int64_t)false;
    }
    int64_t v3 = v2;
    int64_t v4 = v3 - 1;
    while (*(char *)(v4 + a1) != 47) {
        // 0x38fac
        if (v4 == 0) {
            // 0x38fcd
            return a1 & -256 | (int64_t)(v2 != 0);
        }
        v3 = v4;
        v4 = v3 - 1;
    }
    // 0x38fc1
    function_3aeea(a1, 0, v3, v4);
    // 0x38fcd
    return a1 & -256 | (int64_t)(*v1 != 0);
}

// Address range: 0x40c3e - 0x40c81
int64_t function_40c3e(int64_t a1, int64_t a2) {
    // 0x40c3e
    if (a1 == 0) {
        // 0x40c80
        return 0xfffffffe;
    }
    int64_t v1 = *(int64_t *)(a1 + 56); // 0x40c4b
    if (v1 == 0 || *(int64_t *)(a1 + 64) == 0) {
        // 0x40c80
        return 0xfffffffe;
    }
    int64_t result = 0xfffffffe; // 0x40c60
    if (*(int64_t *)(a1 + 72) != 0) {
        // 0x40c62
        *(int64_t *)(a1 + 40) = 0;
        *(int64_t *)(a1 + 16) = 0;
        function_40adf(v1, 0, 0, *(int32_t *)(v1 + 16));
        result = 0;
    }
    // 0x40c80
    return result;
}

// Address range: 0x40c81 - 0x40c88
int64_t function_40c81(int64_t a1) {
    // 0x40c81
    return (int64_t)*(int32_t *)(a1 + 132);
}

// Address range: 0x40c88 - 0x40c8c
int64_t function_40c88(int64_t a1) {
    // 0x40c88
    return (int64_t)*(int32_t *)(a1 + 32);
}

// Address range: 0x413ab - 0x413c1
int64_t function_413ab(void) {
    // 0x413ab
    return function_41077();
}

// Address range: 0x413c1 - 0x413cc
int64_t function_413c1(int64_t a1) {
    int64_t result = 0; // 0x413c6
    if (a1 != 0) {
        // 0x413c8
        result = (int64_t)*(int32_t *)(a1 + 16);
    }
    // 0x413cb
    return result;
}

// Address range: 0x413cc - 0x413fd
int64_t function_413cc(int64_t a1, int64_t a2) {
    // 0x413cc
    if (a1 == 0) {
        // 0x413fc
        return 0;
    }
    int64_t v1 = *(int64_t *)(a1 + 88); // 0x413d3
    if (v1 == 0 || *(int32_t *)(a1 + 16) <= (int32_t)a2 || *(int32_t *)(a1 + 20) != 1) {
        // 0x413fc
        return 0;
    }
    uint32_t v2 = *(int32_t *)(*(int64_t *)(v1 + 32) + (4 * a2 & 0x3fffffffc)); // 0x413ed
    int64_t v3 = *(int64_t *)v1 + (int64_t)v2; // 0x413f0
    int64_t result = 0; // 0x413f3
    if (v3 != 0) {
        // 0x413f5
        result = (int64_t)(*(int16_t *)(v3 + 8) % 2);
    }
    // 0x413fc
    return result;
}

// Address range: 0x41551 - 0x415ae
int64_t function_41551(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = a4 & 0xffffffff; // 0x41554
    if (a1 != 0) {
        int64_t v1 = *(int64_t *)(a1 + 88); // 0x41558
        if (v1 != 0) {
            // 0x41561
            if (*(int32_t *)(a1 + 16) > (int32_t)a2) {
                // 0x41566
                if (*(int32_t *)(a1 + 20) == 1) {
                    uint32_t v2 = *(int32_t *)(*(int64_t *)(v1 + 32) + (4 * a2 & 0x3fffffffc)); // 0x41572
                    int64_t v3 = *(int64_t *)v1 + (int64_t)v2; // 0x41575
                    if (v3 != 0) {
                        uint16_t v4 = *(int16_t *)(v3 + 28); // 0x41586
                        int64_t v5 = v4; // 0x41586
                        int64_t v6 = v5; // 0x4158b
                        if ((int32_t)a4 != 0) {
                            int64_t v7 = result + 0xffffffff; // 0x4158d
                            v6 = ((int32_t)v4 > (int32_t)v7 ? v7 : v5) & 0xffffffff;
                            __asm_rep_movsb_memcpy((char *)a3, (char *)(v3 + 46), v6);
                            *(char *)(v6 + a3) = 0;
                        }
                        // 0x415ad
                        return v6 + 1 & 0xffffffff;
                    }
                }
            }
        }
    }
    // 0x4157a
    if ((int32_t)a4 == 0) {
        // 0x415ad
        return result;
    }
    // 0x4157e
    *(char *)a3 = 0;
    return 0;
}

// Address range: 0x4a2a1 - 0x4a2b9
int64_t function_4a2a1(int64_t a1) {
    // 0x4a2a1
    function_4a1b4();
    return function_4eeb30(a1, L"JZ");
}

// Address range: 0x4a2ba - 0x4a2f6
int64_t function_4a2ba(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a1 + 24); // 0x4a2ba
    if (*v1 != 0) {
        // 0x4a2f3
        int64_t v2; // 0x4a2ba
        return v2 & -256 | 1;
    }
    // 0x4a2c0
    function_380a0(a1 + 16);
    function_4d70e(a1 + 40, a2);
    int64_t v3 = function_47e0a(a1); // 0x4a2e4
    *v1 = 1;
    return v3 & -256 | 1;
}

// Address range: 0x4a2f6 - 0x4a2f7
int64_t function_4a2f6(void) {
    // 0x4a2f6
    int64_t result; // 0x4a2f6
    return result;
}

// Address range: 0x60880 - 0x608c4
int64_t function_60880(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + a1; // 0x6088a
    int64_t v2 = function_6080a(v1, *(int64_t *)(a1 + 8)); // 0x60891
    int64_t result = 0; // 0x608a3
    if (v1 != 0) {
        // 0x608a5
        function_25a28(result, a1 + 24, v1);
    }
    // 0x608b1
    function_2562c(v2, result);
    return result;
}

// Address range: 0x608c4 - 0x608d2
int64_t function_608c4(int64_t result) {
    // 0x608c4
    function_2509a();
    return result;
}

// Address range: 0x67c96 - 0x67cbf
int64_t function_67c96(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x67c96
    function_67c72(a2, 0, (int64_t)*(char *)(a2 + 8), 0, 0);
    return 0;
}

// Address range: 0x67cbf - 0x67ce4
int64_t function_67cbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x67cbf
    function_67c72(a2, 1, 0, 0, 0);
    return 0;
}

// Address range: 0x76dc4 - 0x76e15
int64_t function_76dc4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x76dc4
    int64_t v1; // 0x76dc4
    int64_t v2 = (v1 ^ v1) & 0xffffffff; // 0x76dc5
    *(char *)0x81578221b0d5 = (char)v1;
    char * v3 = (char *)(v1 - 0x772d7740); // 0x76dde
    unsigned char v4 = *v3; // 0x76dde
    *v3 = v4 / 128 | 2 * v4;
    char * v5 = (char *)(v1 - 0x772d7737); // 0x76de4
    unsigned char v6 = *v5; // 0x76de4
    *v5 = v6 / 128 | 2 * v6;
    float80_t v7; // 0x76dc4
    *(int32_t *)(v1 - 0x743f772e) = (int32_t)v7;
    *(int64_t *)(v2 - 8) = v2;
    *(int32_t *)(v2 + 16) = 0;
    int64_t result = v1 & -232; // 0x76e09
    if (*(int64_t *)(v2 + 64) != __readfsqword(40)) {
        // 0x76e0b
        __stack_chk_fail();
        result = (int64_t)&g13;
    }
    // 0x76e10
    return result;
}

// Address range: 0x76e16 - 0x76e1a
int64_t function_76e16(int64_t result) {
    // 0x76e16
    return result;
}

// Address range: 0x76e1a - 0x76e21
int64_t function_76e1a(int64_t a1) {
    // 0x76e1a
    int64_t v1; // 0x76e1a
    return v1 & -256 | (int64_t)(a1 == 0);
}

// Address range: 0x13c209 - 0x13c213
int64_t function_13c209(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x13c209
    int64_t result; // 0x13c209
    char * v1 = (char *)(result - 0x80cc555); // 0x13c209
    *v1 = *v1 + (char)(a4 / 256);
    int64_t v2; // 0x13c209
    *(char *)a4 = *(char *)&v2 + (char)result;
    return result;
}

// Address range: 0x13c24f - 0x13c251
int64_t function_13c24f(void) {
    // 0x13c24f
    int64_t result; // 0x13c24f
    return result;
}

// Address range: 0x1e15ab - 0x1e15f8
int64_t function_1e15ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1e15ab
    int64_t v1; // 0x1e15ab
    return v1 ^ (a4 | 0x1fbdf600) - 0x48a10e621a;
}

// Address range: 0x48db67 - 0x48db9a
int64_t function_48db67(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = -1; // 0x48db70
    int64_t v2 = a1; // 0x48db70
    int64_t v3 = 0; // 0x48db70
    while (v1 != 0) {
        int64_t v4 = v2;
        v1--;
        bool v5; // 0x48db67
        v2 = v4 + (v5 ? -1 : 1);
        v3 = v1;
        if (*(char *)v4 == 0) {
            // break -> 
            break;
        }
        v3 = 0;
    }
    int64_t result = -2 - v3; // 0x48db7a
    if (result == 0) {
        // 0x48db99
        return result;
    }
    int64_t v6 = 0; // 0x48db80
    char * v7 = (char *)(v6 + a1); // 0x48db82
    char v8 = *v7; // 0x48db82
    if (v8 < 123) {
        // 0x48db8e
        *v7 = v8 - 32;
    }
    // 0x48db94
    v6++;
    while (v6 != result) {
        // 0x48db82
        v7 = (char *)(v6 + a1);
        v8 = *v7;
        if (v8 < 123) {
            // 0x48db8e
            *v7 = v8 - 32;
        }
        // 0x48db94
        v6++;
    }
    // 0x48db99
    return result;
}

// Address range: 0x48db9a - 0x48dbb8
int64_t function_48db9a(int64_t a1, int64_t result) {
    // 0x48db9a
    if (result == 0) {
        // 0x48dbb7
        return result;
    }
    int64_t v1 = 0; // 0x48db9f
    int32_t * v2 = (int32_t *)(4 * v1 + a1); // 0x48dba1
    int32_t v3 = *v2; // 0x48dba1
    if (v3 < 91) {
        // 0x48dbac
        *v2 = v3 | 32;
    }
    // 0x48dbb2
    v1++;
    while (v1 != result) {
        // 0x48dba1
        v2 = (int32_t *)(4 * v1 + a1);
        v3 = *v2;
        if (v3 < 91) {
            // 0x48dbac
            *v2 = v3 | 32;
        }
        // 0x48dbb2
        v1++;
    }
    // 0x48dbb7
    return result;
}

// Address range: 0x48e5f4 - 0x48e641
int64_t function_48e5f4(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_599ba(); // 0x48e610
    int64_t v2 = 0; // 0x48e61b
    if (v1 != -1) {
        int64_t v3 = *(int64_t *)-24; // 0x48e62a
        v2 = function_48f642(a1, v1, *(int64_t *)(a2 - 24), 0, v3) & -256;
    }
    // 0x48e633
    return v2 | (int64_t)(v1 != -1);
}

// Address range: 0x490241 - 0x490294
int64_t function_490241(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x49024c
    function_250b0(a1);
    int64_t result = a1; // 0x490287
    if (v1 != __readfsqword(40)) {
        // 0x490289
        __stack_chk_fail();
        result = (int64_t)&g13;
    }
    // 0x49028e
    return result;
}

// Address range: 0x499a60 - 0x499a82
int64_t function_499a60(void) {
    // 0x499a60
    int64_t v1; // 0x499a60
    function_49e8b0(v1, 1);
    return function_499388();
}

// Address range: 0x499a82 - 0x499aac
int64_t function_499a82(void) {
    // 0x499a82
    int64_t v1; // 0x499a82
    function_49e770(v1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g10, "alloc %d bytes failed", 32);
    return function_499a52();
}

// Address range: 0x4afcd2 - 0x4afd2d
int64_t function_4afcd2(void) {
    // 0x4afcd2
    int128_t v1; // 0x4afcd2
    __asm_aeskeygenassist(v1, 1);
    function_4afc8b();
    __asm_aeskeygenassist(v1, 2);
    function_4afc8b();
    __asm_aeskeygenassist(v1, 4);
    function_4afc8b();
    __asm_aeskeygenassist(v1, 8);
    function_4afc8b();
    __asm_aeskeygenassist(v1, 16);
    function_4afc8b();
    __asm_aeskeygenassist(v1, 32);
    function_4afc8b();
    __asm_aeskeygenassist(v1, 64);
    function_4afc8b();
    __asm_aeskeygenassist(v1, -128);
    function_4afc8b();
    return 0;
}

// Address range: 0x4b4db5 - 0x4b4dbb
int64_t function_4b4db5(int64_t a1) {
    // 0x4b4db5
    int64_t result; // 0x4b4db5
    int64_t v1; // 0x4b4db5
    if ((int32_t)v1 != (int32_t)a1) {
        result = function_4b4da8();
    }
    // 0x4b4db9
    return result;
}

// Address range: 0x4b4dc0 - 0x4b4e09
int64_t function_4b4dc0(int64_t str) {
    // 0x4b4dc0
    if (str == 0) {
        // 0x4b4dfd
        return 0;
    }
    int64_t result = (int64_t)g3; // 0x4b4dd3
    if (g3 == NULL) {
        // 0x4b4dfd
        return result;
    }
    int64_t v1 = result; // 0x4b4de4
    int64_t v2 = (int64_t)&g2; // 0x4b4dc0
    int64_t result2 = v1; // 0x4b4dfb
    while (strcmp((char *)*(int64_t *)(v1 + 16), (char *)str) != 0) {
        // 0x4b4de0
        v1 = *(int64_t *)(v2 + 24);
        v2 += 16;
        result2 = 0;
        if (v1 == 0) {
            // break -> 0x4b4dfd
            break;
        }
        result2 = v1;
    }
    // 0x4b4dfd
    return result2;
}

// Address range: 0x4c171e - 0x4c1768
int64_t function_4c171e(int64_t a1, int64_t a2) {
    if (a1 == 0 || a2 == 0) {
        // 0x4c1759
        return 0xffffaf00;
    }
    // 0x4c173f
    return a1 != a2 ? 0xffffaf00 : 0;
}

// Address range: 0x4c32a1 - 0x4c32ee
int64_t function_4c32a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)&g5;
    if (*(int32_t *)(v1 + 36) == (int32_t)a1) {
        // 0x4c32d1
        if (*(int32_t *)(v1 + 32) == (int32_t)a2) {
            // 0x4c32d6
            *(int64_t *)a3 = (int64_t)&g1;
            *(int64_t *)a4 = *(int64_t *)(v1 + 8);
            return 0;
        }
    }
    int64_t v2 = v1 + 40; // 0x4c32c0
    int64_t v3 = *(int64_t *)v2; // 0x4c32c4
    while (v3 != 0) {
        // 0x4c32cc
        v1 = v2;
        if (*(int32_t *)(v1 + 36) == (int32_t)a1) {
            // 0x4c32d1
            if (*(int32_t *)(v1 + 32) == (int32_t)a2) {
                // 0x4c32d6
                *(int64_t *)a3 = v3;
                *(int64_t *)a4 = *(int64_t *)(v1 + 8);
                return 0;
            }
        }
        // 0x4c32c0
        v2 = v1 + 40;
        v3 = *(int64_t *)v2;
    }
    // 0x4c32e8
    return 0xffffffd2;
}

// Address range: 0x4f54b4 - 0x4f54c0
int64_t function_4f54b4(void) {
    // 0x4f54b4
    int64_t result; // 0x4f54b4
    return result;
}

// Address range: 0x4f54c0 - 0x4f54fb
// From class:    std::basic_istream<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_4f54c0(int64_t a1) {
    // 0x4f54c0
    *(int64_t *)(a1 + 8) = 0;
    int64_t v1 = a1 + 16; // 0x4f54d3
    *(int64_t *)a1 = (int64_t)&g6;
    *(int64_t *)v1 = (int64_t)&g7;
    function_54cf10(v1);
    return function_4eeb50(a1);
}

// Address range: 0x50520e - 0x505213
int64_t function_50520e(void) {
    // 0x50520e
    int64_t v1; // 0x50520e
    int64_t result = v1 & -0xff01 | (int64_t)&g11; // 0x50520e
    int32_t * v2 = (int32_t *)(result - 125); // 0x505210
    *v2 = *v2 - 1;
    return result;
}

// Address range: 0x505215 - 0x50523b
int64_t function_505215(void) {
    // 0x505215
    bool v1; // 0x505215
    if (v1) {
        // 0x50521a
        int64_t v2; // 0x505215
        function_1fd40(v2);
        function_4f1720(v2);
        function_20a50();
    }
    // 0x50522c
    int64_t v3; // 0x505215
    function_1fd40(v3);
    function_20540();
    return function_505172();
}

// Address range: 0x50523b - 0x505258
int64_t function_50523b(void) {
    // 0x50523b
    function_20540();
    while (true) {
        // 0x505243
        int64_t v1; // 0x50523b
        function_5050b0(&v1);
        int64_t v2; // 0x50523b
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        v2 = (int64_t)&g13;
    }
}

// Address range: 0x514851 - 0x51485a
int64_t function_514851(void) {
    // 0x514851
    return function_5147e9();
}

// Address range: 0x514860 - 0x51486c
int64_t function_514860(void) {
    // 0x514860
    int64_t v1; // 0x514860
    return function_514820(*(int64_t *)(v1 - 128));
}

// Address range: 0x51486e - 0x514874
int64_t function_51486e(void) {
    // 0x51486e
    int64_t result; // 0x51486e
    return result;
}

// Address range: 0x514895 - 0x514898
int64_t function_514895(void) {
    // 0x514895
    int64_t result; // 0x514895
    return result;
}

// Address range: 0x5224f9 - 0x52250b
int64_t function_5224f9(void) {
    // 0x5224f9
    int64_t v1; // 0x5224f9
    return function_522268(0xffffffff, v1);
}

// Address range: 0x52250b - 0x52251e
int64_t function_52250b(void) {
    // 0x52250b
    int64_t v1; // 0x52250b
    return function_522268(0xffffffff, v1 & 0xffffffff);
}

// Address range: 0x52251e - 0x522529
int64_t function_52251e(void) {
    // 0x52251e
    return function_52222d();
}

// Address range: 0x522529 - 0x52253c
int64_t function_522529(uint64_t a1) {
    // 0x522529
    int64_t v1; // 0x522529
    if ((uint64_t)v1 < a1) {
        function_52225e();
    }
    // 0x522537
    return function_52231b();
}

// Address range: 0x523463 - 0x52346a
int64_t function_523463(void) {
    // 0x523463
    return function_523145();
}

// Address range: 0x523470 - 0x52348f
int64_t function_523470(void) {
    // 0x523470
    int64_t v1; // 0x523470
    return function_5231fd(v1);
}

// Address range: 0x52348f - 0x523499
int64_t function_52348f(void) {
    // 0x52348f
    return function_523145();
}

// Address range: 0x523499 - 0x5234a4
int64_t function_523499(void) {
    // 0x523499
    return function_522f40();
}

// Address range: 0x54c680 - 0x54c68e
int64_t function_54c680(int64_t a1, int64_t a2, int64_t a3) {
    // 0x54c680
    *(char *)a1 = __asm_insb((int16_t)a3);
    int32_t * v1 = (int32_t *)((int64_t)*(int32_t *)(int32_t *)&g12 - 117); // 0x54c683
    *v1 = *v1 - 1;
    return function_54c623();
}

// Address range: 0x54c68e - 0x54c6c5
int64_t function_54c68e(int64_t a1, int64_t a2) {
    // 0x54c68e
    __stack_chk_fail();
    *(int64_t *)a1 = a1 + 16;
    return function_54c5e0();
}

// Address range: 0x550a0c - 0x550a0e
int64_t function_550a0c(void) {
    // 0x550a0c
    return function_5509f7();
}

// Address range: 0x550a0e - 0x550a5b
int64_t function_550a0e(int64_t a1) {
    // 0x550a0e
    if (*(int64_t *)0x848c20 == a1) {
        // 0x550a29
        int64_t result; // 0x550a0e
        return result;
    }
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result2 = *v1;
    *v1 = result2 - 1;
    if (result2 >= 0 == (result2 != 0)) {
        // 0x550a29
        return result2;
    }
    // 0x550a48
    return function_5509d0();
}

// Address range: 0x5660ab - 0x5660ac
int64_t function_5660ab(void) {
    // 0x5660ab
    int64_t result; // 0x5660ab
    return result;
}

// Address range: 0x5660ad - 0x5660b7
int64_t function_5660ad(int64_t a1, int64_t a2) {
    // 0x5660ad
    int64_t v1; // 0x5660ad
    return function_4eeb40(v1);
}

// Address range: 0x5660c0 - 0x5660c7
int64_t function_5660c0(int64_t a1, int64_t a2) {
    // 0x5660c0
    int64_t result; // 0x5660c0
    return result;
}

// Address range: 0x5660c7 - 0x5660d9
int64_t function_5660c7(void) {
    // 0x5660c7
    int64_t v1; // 0x5660c7
    function_1fd40(v1);
    function_20540();
    return function_56602f();
}

// Address range: 0x5660d9 - 0x5660eb
int64_t function_5660d9(void) {
    // 0x5660d9
    int64_t v1; // 0x5660d9
    function_1fd40(v1);
    function_20540();
    return function_565fbf();
}

// Address range: 0x5660eb - 0x566100
int64_t function_5660eb(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 + 1; // 0x5660eb
    int64_t v2; // 0x5660eb
    if (v1 == 0) {
        // 0x5660fb
        return function_200c0(v2);
    }
    // 0x5660f4
    _Unwind_Resume((struct _Unwind_Exception *)v2);
    return function_5660eb(v2, a2, v1);
}

// Address range: 0x56b1d6 - 0x56b1e3
int64_t function_56b1d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x56b1d6
    int64_t v1; // 0x56b1d6
    *(int64_t *)(*(int64_t *)(v1 + 16) + 16) = a4;
    return function_56b143();
}

// Address range: 0x56b1f8 - 0x56b20a
int64_t function_56b1f8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x56b1f8
    int64_t v1; // 0x56b1f8
    char * v2 = (char *)(v1 - 57);
    *v2 = *v2 | (char)a4;
    int64_t v3; // 0x56b1f8
    int64_t v4; // 0x56b1f8
    *(char *)a5 = *(char *)&v3 + (char)v4;
    int64_t v5 = v4;
    *(char *)v5 = *(char *)&v4 + (char)v5;
    int64_t v6 = v4;
    int64_t result = (v6 + a4 / 256) % 256 | v6 & -256; // 0x56b201
    *(int32_t *)a1 = (int32_t)result;
    int32_t * v7 = (int32_t *)(result - 119); // 0x56b206
    *v7 = *v7 - 1;
    return result;
}

// Address range: 0x56b214 - 0x56b219
int64_t function_56b214(int64_t a1, int64_t result) {
    // 0x56b214
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x5764fa - 0x57650b
int64_t function_5764fa(void) {
    // 0x5764fa
    int64_t v1; // 0x5764fa
    int32_t * v2 = (int32_t *)(v1 - 8); // 0x576500
    *v2 = *v2 - 1;
    return function_576494();
}

// Address range: 0x57650b - 0x57654a
int64_t function_57650b(int64_t a1) {
    // 0x57650b
    __stack_chk_fail();
    int64_t v1 = a1 - 24; // 0x576518
    if (v1 != (int64_t)g8) {
      lab_0x57653e:;
        // 0x57653e
        int64_t v2; // bp+15, 0x57650b
        function_20d90(v1, &v2);
    }
    while (true) {
        // 0x576525
        _Unwind_Resume((struct _Unwind_Exception *)&g13);
        int64_t v3; // 0x57650b
        if (v1 != v3) {
            goto lab_0x57653e;
        }
    }
}

// Address range: 0x57654a - 0x57654c
int64_t function_57654a(void) {
    // 0x57654a
    int64_t result; // 0x57654a
    return result;
}

// Address range: 0x57b298 - 0x57b29f
int64_t function_57b298(void) {
    // 0x57b298
    return function_57b165();
}

// Address range: 0x57b29f - 0x57b2e4
int64_t function_57b29f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x57b29f
    int64_t v1; // 0x57b29f
    char v2 = v1; // 0x57b29f
    int64_t v3; // 0x57b29f
    if (v2 != 105 == (v2 != 116)) {
        v3 = function_57acd4();
    }
    int64_t v4 = v3; // 0x57b2af
    if (*(char *)(a4 + 1) != 108) {
        v4 = function_57acd4();
    }
    // 0x57b2b5
    if ((char)v4 == 116) {
        function_57ad70();
    }
    // 0x57b2bf
    *(int64_t *)(v1 + 24) = a4 + 2;
    function_57a3c0(v1, 69);
    return function_57aeeb();
}

// Address range: 0x57b9b4 - 0x57b9c6
int64_t function_57b9b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x57b9b4
    int64_t v1; // 0x57b9b4
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    *(int32_t *)(a4 + 16) = 14;
    return function_57b581();
}

// Address range: 0x57b9c6 - 0x57ba00
int64_t function_57b9c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x57b9c6
    if (v2 == 0) {
        function_57b6bf();
    }
    if (v2 != 0) {
        // 0x57b9d7
        *(int64_t *)(v2 + 8) = a4;
    }
    // 0x57b9e5
    if (*(char *)&v1 != 69) {
        function_57b6bf();
    }
    // 0x57b9ee
    *(int64_t *)(v2 + 24) = v1 + 1;
    return function_57b5b0();
}
