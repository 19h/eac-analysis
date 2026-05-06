/*
 * Targeted RetDec C for native executable gap queue batch 1441.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x342273-0x342473 rank=- name=- kind=- bytes=- uncovered=-
 *   0x342473-0x342673 rank=- name=- kind=- bytes=- uncovered=-
 *   0x342673-0x342873 rank=- name=- kind=- bytes=- uncovered=-
 *   0x342873-0x342a73 rank=- name=- kind=- bytes=- uncovered=-
 *   0x342a73-0x342c73 rank=- name=- kind=- bytes=- uncovered=-
 *   0x342c73-0x342e73 rank=- name=- kind=- bytes=- uncovered=-
 *   0x342e73-0x343073 rank=- name=- kind=- bytes=- uncovered=-
 *   0x343073-0x343193 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3eda96-0x3edc96 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3edc96-0x3ede96 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ede96-0x3ee096 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ee096-0x3ee296 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ee296-0x3ee496 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ee496-0x3ee696 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ee696-0x3ee896 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53e869-0x53ea69 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g6;
extern int g7;
extern int g8;
extern int g9;
extern int g10;
extern int g11;
extern int g12;
extern int g13;
extern int g14;
extern int g15;
extern int g16;
extern int g17;
extern int g18;
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

int64_t function_14c04d25();
int64_t function_1712430();
int64_t function_171243e();
int64_t function_23c5812();
int64_t function_342273(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3422d3(int64_t a1, int64_t a2);
int64_t function_34230f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34238a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3423d6(int64_t a1);
int64_t function_342425(void);
int64_t function_3424e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3425be(void);
int64_t function_3425e4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_342698(void);
int64_t function_3426c5(void);
int64_t function_3426cf(void);
int64_t function_3426ef(void);
int64_t function_34271a(int64_t a1);
int64_t function_342767(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3427b3(void);
int64_t function_34281d(void);
int64_t function_34282f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34284e(void);
int64_t function_3428c6(int64_t a1);
int64_t function_3428ec(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_34293e(int64_t a1);
int64_t function_3429d1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3429ee(void);
int64_t function_3429f4(void);
int64_t function_342a06(void);
int64_t function_342a54(void);
int64_t function_342a5b(int64_t a1);
int64_t function_342b87(void);
int64_t function_342bbd(int64_t a1);
int64_t function_342bed(void);
int64_t function_342c00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_342c5b(void);
int64_t function_342c5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_342cd2(void);
int64_t function_342cd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_342cf5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_342d40(void);
int64_t function_342d4d(void);
int64_t function_342d54(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_342e72(void);
int64_t function_342e7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_342e91(void);
int64_t function_342eed(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_342f23(int64_t a1);
int64_t function_342f25(void);
int64_t function_342fe8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_34307d(void);
int64_t function_3430b8(void);
int64_t function_3430d9(int64_t a1, int64_t a2);
int64_t function_34312e(void);
int64_t function_343133(int64_t a1);
int64_t function_34314e(void);
int64_t function_3eda96(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3edaf1(void);
int64_t function_3edb3b(int64_t a1, int64_t result);
int64_t function_3edb63(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3edbf8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3edc51(void);
int64_t function_3edd50(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3edf31(void);
int64_t function_3edf46(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3edf58(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3edfe4(int64_t a1);
int64_t function_3ee00d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ee08a(int64_t a1);
int64_t function_3ee0a2(int64_t a1);
int64_t function_3ee0a7(void);
int64_t function_3ee0b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result2);
int64_t function_3ee1bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ee202(void);
int64_t function_3ee233(void);
int64_t function_3ee262(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3ee3bb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3ee44c(void);
int64_t function_3ee499(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ee4b4(void);
int64_t function_3ee4b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ee51c(void);
int64_t function_3ee52c(int64_t a1);
int64_t function_3ee538(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_3ee580(int64_t a1);
int64_t function_3ee5a1(void);
int64_t function_3ee5bd(int64_t a1);
int64_t function_3ee5c6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ee649(void);
int64_t function_3ee681(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ee6e4(void);
int64_t function_3ee72f(void);
int64_t function_3ee735(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ee773(int64_t a1, int64_t a2);
int64_t function_3ee793(void);
int64_t function_3ee798(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ee850(int64_t a1);
int64_t function_4eeb50();
int64_t function_4fc7e0();
int64_t function_53e869(int64_t a1);
int64_t function_53e8c0(int64_t a1);
int64_t function_53e8d0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_53e947(int64_t a1, int64_t a2);
int64_t function_54cb80();
int64_t function_54cf10();
int64_t function_7a3acb6();
int64_t function_7a5d996();
int64_t function_8fc4898();
int64_t function_ffffffff85cb2005();
int64_t function_ffffffffaac1027c();
int64_t function_ffffffffc73ebe27();
int64_t function_ffffffffca70569e();
int64_t function_ffffffffcc357c96();
int64_t function_ffffffffd9202291();
int64_t function_ffffffffe4dfe328();
int64_t function_ffffffffff2e5121();
int64_t unknown_242e58a7();
int64_t unknown_69001245();
int64_t unknown_ffffffffc0c05d8b();
int64_t unknown_ffffffffd3705461();
int64_t unknown_ffffffffe844b3e1();

// Address range: 0x342273 - 0x3422a8
int64_t function_342273(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x342273
    int64_t v1; // 0x342273
    int64_t v2 = v1;
    char * v3 = (char *)(v1 - 1); // 0x342273
    bool v4; // 0x342273
    *v3 = (char)v4 + (char)a3 + *v3;
    *(int32_t *)0x3d950192 = *(int32_t *)0x3d950192 + (int32_t)a4;
    int64_t v5; // 0x342273
    int32_t v6 = *(int32_t *)&v5; // 0x342282
    int64_t v7 = (v4 ? -4 : 4) + a1; // 0x342282
    v5 = v7;
    if (a4 == 1 || v6 == (int32_t)v2) {
        // 0x342285
        int64_t v8; // 0x342273
        return v2 & -256 | (int64_t)((char)v2 + 68 + *(char *)&v8);
    }
    // 0x34229f
    __asm_int3(v7);
    return unknown_242e58a7();
}

// Address range: 0x3422d3 - 0x3422e5
int64_t function_3422d3(int64_t a1, int64_t a2) {
    // 0x3422d3
    int64_t result; // 0x3422d3
    int32_t * v1 = (int32_t *)(result + 0x4eaa1f66); // 0x3422d3
    *v1 = *v1 | (int32_t)a1;
    return result;
}

// Address range: 0x34230f - 0x34231f
int64_t function_34230f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34230f
    int64_t result; // 0x34230f
    int32_t * v1 = (int32_t *)(8 * a4 + 0x156c7a7 + result); // 0x34230f
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x34238a - 0x3423a8
int64_t function_34238a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34238a
    int64_t v1; // 0x34238a
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    bool v3; // 0x34238a
    int64_t v4 = v3 ? 0xffffffff : 1; // 0x342393
    int64_t v5; // 0x34238a
    *(int32_t *)a3 = *(int32_t *)&v5 ^ (int32_t)(v4 + a2);
    __asm_out(-107, (char)a4);
    return function_171243e();
}

// Address range: 0x3423d6 - 0x3423da
int64_t function_3423d6(int64_t a1) {
    // 0x3423d6
    int64_t result; // 0x3423d6
    return result;
}

// Address range: 0x342425 - 0x34242f
int64_t function_342425(void) {
    // 0x342425
    return function_1712430();
}

// Address range: 0x3424e4 - 0x3425b7
int64_t function_3424e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3424e4
    int64_t result; // 0x3424e4
    *(char *)a1 = (char)result;
    bool v1; // 0x3424e4
    if (v1 || v1) {
        // 0x342532
        return result;
    }
    char * v2 = (char *)(a4 - 5); // 0x3424e7
    *v2 = *v2 + (char)result;
    return result & -8;
}

// Address range: 0x3425be - 0x3425bf
int64_t function_3425be(void) {
    // 0x3425be
    int64_t result; // 0x3425be
    return result;
}

// Address range: 0x3425e4 - 0x34266c
int64_t function_3425e4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3425e4
    int64_t v1; // 0x3425e4
    while ((char)v1 == (char)v1) {
        // continue -> 0x3425e8
    }
    // 0x34265a
    *(char *)-0x2cc1396 = *(char *)-0x2cc1396 + 28;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return v1 & 0xffffff00 | (int64_t)*(char *)0x22b944b901e86636;
}

// Address range: 0x342698 - 0x34269b
int64_t function_342698(void) {
    // 0x342698
    int64_t result; // 0x342698
    return result;
}

// Address range: 0x3426c5 - 0x3426c6
int64_t function_3426c5(void) {
    // 0x3426c5
    int64_t result; // 0x3426c5
    return result;
}

// Address range: 0x3426cf - 0x3426d0
int64_t function_3426cf(void) {
    // 0x3426cf
    int64_t result; // 0x3426cf
    return result;
}

// Address range: 0x3426ef - 0x3426f1
int64_t function_3426ef(void) {
    // 0x3426ef
    return function_3426cf();
}

// Address range: 0x34271a - 0x34272b
int64_t function_34271a(int64_t a1) {
    char v1 = *(char *)0x6be51427; // 0x342720
    int64_t result; // 0x34271a
    *(char *)0x6be51427 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x342767 - 0x34279c
int64_t function_342767(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x342767
    __asm_int1();
    int64_t v1; // 0x342767
    char v2 = v1 / 256; // 0x34276c
    *(char *)-0x4985a8d = *(char *)-0x4985a8d + v2;
    int64_t v3 = unknown_ffffffffd3705461(); // 0x342774
    __asm_out_134(121, (int32_t)v3);
    *(char *)0x50298489 = *(char *)0x50298489 + v2;
    int64_t v4 = v3 + 256 * v1 & 0xff00 | v3 & -0xff01; // 0x34278c
    unsigned char v5 = *(char *)(a5 - 0x1fecffed + v1); // 0x34278e
    int32_t v6 = *(int32_t *)v4; // 0x342796
    return v6 + (int32_t)v4 + (int32_t)(v5 > (char)v1);
}

// Address range: 0x3427b3 - 0x3427b8
int64_t function_3427b3(void) {
    // 0x3427b3
    return function_ffffffffcc357c96();
}

// Address range: 0x34281d - 0x342821
int64_t function_34281d(void) {
    // 0x34281d
    int64_t result; // 0x34281d
    return result;
}

// Address range: 0x34282f - 0x342839
int64_t function_34282f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34282f
    float80_t v1; // 0x34282f
    *(int16_t *)(a4 - 0x7adb9c0a) = (int16_t)v1;
    int64_t result; // 0x34282f
    return result;
}

// Address range: 0x34284e - 0x34284f
int64_t function_34284e(void) {
    // 0x34284e
    int64_t result; // 0x34284e
    return result;
}

// Address range: 0x3428c6 - 0x3428c7
int64_t function_3428c6(int64_t a1) {
    // 0x3428c6
    int64_t result; // 0x3428c6
    return result;
}

// Address range: 0x3428ec - 0x34290f
int64_t function_3428ec(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3428ec
    *(int64_t *)0x41d90c2ed1013cf8 = a4;
    int64_t v1; // 0x3428ec
    __asm_outsd((int16_t)(256 * v1 + a3 & 0xff00 | a3 % 256), (int32_t)v1);
    int64_t v2 = __asm_sti(); // 0x342904
    return v2 & -256 | (int64_t)(*(char *)v2 & (char)v2);
}

// Address range: 0x34293e - 0x342948
int64_t function_34293e(int64_t a1) {
    int64_t v1 = __asm_fnstenv(a1); // 0x34293e
    int64_t v2; // 0x34293e
    *(int224_t *)v2 = (int224_t)v1;
    return v1 & 0x1cae6717;
}

// Address range: 0x3429d1 - 0x3429d8
int64_t function_3429d1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3429d1
    int64_t v1; // 0x3429d1
    int64_t result = v1;
    *(char *)result = (char)result;
    return result;
}

// Address range: 0x3429ee - 0x3429f3
int64_t function_3429ee(void) {
    // 0x3429ee
    return function_8fc4898();
}

// Address range: 0x3429f4 - 0x3429f7
int64_t function_3429f4(void) {
    // 0x3429f4
    int64_t result; // 0x3429f4
    return result;
}

// Address range: 0x342a06 - 0x342a07
int64_t function_342a06(void) {
    // 0x342a06
    int64_t result; // 0x342a06
    return result;
}

// Address range: 0x342a54 - 0x342a55
int64_t function_342a54(void) {
    // 0x342a54
    int64_t result; // 0x342a54
    return result;
}

// Address range: 0x342a5b - 0x342a5f
int64_t function_342a5b(int64_t a1) {
    // 0x342a5b
    int64_t result; // 0x342a5b
    return result;
}

// Address range: 0x342b87 - 0x342b96
int64_t function_342b87(void) {
    // 0x342b87
    return function_23c5812();
}

// Address range: 0x342bbd - 0x342bbe
int64_t function_342bbd(int64_t a1) {
    // 0x342bbd
    int64_t result; // 0x342bbd
    return result;
}

// Address range: 0x342bed - 0x342bf0
int64_t function_342bed(void) {
    // 0x342bed
    int64_t result; // 0x342bed
    return result;
}

// Address range: 0x342c00 - 0x342c13
int64_t function_342c00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x342c00
    int64_t v1; // 0x342c00
    int16_t v2 = 256 * (int16_t)v1 >> 8; // 0x342c06
    int32_t * v3 = (int32_t *)(a4 - 77); // 0x342c08
    *v3 = *v3 + (int32_t)(v1 & 0xffff0000 | (int64_t)(v2 * v2));
    return function_ffffffffff2e5121();
}

// Address range: 0x342c5b - 0x342c5c
int64_t function_342c5b(void) {
    // 0x342c5b
    int64_t result; // 0x342c5b
    return result;
}

// Address range: 0x342c5f - 0x342cc2
int64_t function_342c5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x342c5f
    int64_t v1; // 0x342c5f
    bool v2; // 0x342c5f
    if (v2) {
        int32_t * v3 = (int32_t *)(v1 + 11); // 0x342ca4
        *v3 = *v3 | (int32_t)v1;
        int64_t v4 = v1 + 0xc2589100; // 0x342ca7
        __asm_out_134(11, (int32_t)v4);
        return v4 & 0xffffffff;
    }
    int32_t v5 = a1; // 0x342c61
    int32_t v6 = a2; // 0x342c61
    int32_t v7 = v6 + v5; // 0x342c61
    int64_t v8 = v1 & 0xffffffff; // 0x342c63
    float80_t v9; // 0x342c5f
    *(int16_t *)(a3 + 0xe333aa7 + v8) = (int16_t)v9;
    int64_t v10; // 0x342c5f
    if (v7 < 0 == ((v7 ^ v5) & (v7 ^ v6)) < 0) {
        char * v11 = (char *)(v1 - 0x48f27901); // 0x342c6f
        *v11 = *v11 ^ (char)a4;
        *(char *)-0x26078b84 = *(char *)-0x26078b84 + (char)(v1 / 256);
        v10 = v1 & 0xffffffff;
    }
    // 0x342c7f
    int64_t v12; // 0x342c5f
    int64_t v13 = (int64_t)&v12; // 0x342c63
    *(int64_t *)(v8 - 8) = v13;
    __asm_out_134(-5, (int32_t)v13);
    *(int64_t *)(v8 - 16) = -0x1882ca00;
    int64_t v14; // bp-14, 0x342c5f
    int64_t v15 = (int64_t)&v14; // 0x342cb6
    return v15 & -256 | (int64_t)*(char *)(v10 + (v15 & 248));
}

// Address range: 0x342cd2 - 0x342cd3
int64_t function_342cd2(void) {
    // 0x342cd2
    int64_t result; // 0x342cd2
    return result;
}

// Address range: 0x342cd3 - 0x342cf5
int64_t function_342cd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = (int32_t)a4 - 1; // 0x342cd5
    int64_t v2; // 0x342cd3
    bool v3; // 0x342cd3
    if (v1 != 0 && (int32_t)a3 + (int32_t)a1 != (int32_t)v3) {
        v2 = function_342c5b();
    }
    int64_t v4 = v2;
    int64_t v5 = (v4 + 206) % 256 | v4 & -256; // 0x342cd8
    char * v6 = (char *)(v5 + 0x3d000002); // 0x342ce1
    char v7 = v1; // 0x342ce1
    *v6 = *v6 + v7;
    int32_t * v8 = (int32_t *)v5; // 0x342ce7
    *v8 = *v8 + (int32_t)v5;
    *(char *)(a3 & -0xff01 | (int64_t)&g16) = v7;
    return function_ffffffffc73ebe27();
}

// Address range: 0x342cf5 - 0x342d23
int64_t function_342cf5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x169f8fa6); // 0x342d00
    *v1 = *v1 + (int32_t)a4;
    __asm_iretd();
    unknown_69001245();
    char v2 = *(char *)0xaeb31c; // 0x342d15
    int64_t v3; // 0x342cf5
    *(char *)0xaeb31c = v2 + (char)((uint64_t)v3 / 256);
    return a3 & 0xffffffff;
}

// Address range: 0x342d40 - 0x342d41
int64_t function_342d40(void) {
    // 0x342d40
    int64_t result; // 0x342d40
    return result;
}

// Address range: 0x342d4d - 0x342d4e
int64_t function_342d4d(void) {
    // 0x342d4d
    int64_t result; // 0x342d4d
    return result;
}

// Address range: 0x342d54 - 0x342e64
int64_t function_342d54(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x342d54
    int64_t v1; // 0x342d54
    uint64_t v2 = v1;
    int64_t v3 = a2;
    int64_t result; // 0x342d54
    bool v4; // 0x342d54
    if (!v4) {
        result = function_342d4d();
    }
    int32_t * v5 = (int32_t *)(v2 - 0x4ff9706); // 0x342d56
    uint32_t v6 = *v5; // 0x342d56
    uint32_t v7 = v6 + (int32_t)a4; // 0x342d56
    *v5 = v7;
    char v8 = *(char *)&result; // 0x342d5c
    int64_t v9 = result;
    int64_t result2 = v9 + 0x396f88be + (int64_t)((int32_t)v9 < 0x2d1601) & 0xffffff00 | (int64_t)__asm_in_136((int16_t)a3); // 0x342d71
    result = result2;
    *(char *)0x3cfc7f = *(char *)0x3cfc7f + (char)(v2 / 256);
    int32_t v10 = *(int32_t *)&v3 - *(int32_t *)a5; // 0x342d7e
    int64_t v11 = (v4 ? -4 : 4) + a5; // 0x342d7e
    int64_t v12 = (256 * (int64_t)(v8 + (char)(a4 / 256) + (char)(v7 < v6)) | a4 & -0xff01) - 1; // 0x342d7f
    if (v12 != 0 && v10 != 0) {
        // 0x342db3
        *(int32_t *)v11 = (int32_t)result2;
        return result;
    }
    if (v10 < 0) {
        // 0x342df7
        return result2;
    }
    // 0x342db0
    return __asm_hlt(v11, a6, a3, v12);
}

// Address range: 0x342e72 - 0x342e73
int64_t function_342e72(void) {
    // 0x342e72
    int64_t result; // 0x342e72
    return result;
}

// Address range: 0x342e7a - 0x342e8f
int64_t function_342e7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x342e7a
    int64_t v1; // 0x342e7a
    uint64_t v2 = v1;
    *(char *)0x5749a581 = *(char *)0x5749a581 + (char)(v2 / 256);
    int32_t * v3 = (int32_t *)(v1 + 98); // 0x342e80
    *v3 = *v3 + (int32_t)v2;
    __asm_hlt(a1, a2, a3, a4);
    int64_t v4; // 0x342e7a
    *(int32_t *)a4 = *(int32_t *)&v4 + (int32_t)a1;
    return function_342e72();
}

// Address range: 0x342e91 - 0x342e94
int64_t function_342e91(void) {
    // 0x342e91
    int64_t result; // 0x342e91
    return result;
}

// Address range: 0x342eed - 0x342ef9
int64_t function_342eed(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 - 43); // 0x342eed
    *v1 = *v1 + (char)a3;
    return function_ffffffffd9202291();
}

// Address range: 0x342f23 - 0x342f24
int64_t function_342f23(int64_t a1) {
    // 0x342f23
    int64_t result; // 0x342f23
    return result;
}

// Address range: 0x342f25 - 0x342f28
int64_t function_342f25(void) {
    // 0x342f25
    int64_t result; // 0x342f25
    return result;
}

// Address range: 0x342fe8 - 0x34304f
int64_t function_342fe8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x342fe8
    int64_t v1; // 0x342fe8
    int64_t v2 = v1;
    int64_t v3 = a4;
    uint64_t v4 = v1 & 0xffffffff | 0x100000000 * (a3 & 0xffff00ff | (int64_t)(int32_t)&g18); // 0x342fea
    uint64_t v5 = v2 & 0xffffffff; // 0x342fea
    uint64_t v6 = v4 / v5; // 0x342fea
    int16_t v7 = v4 % v5; // 0x342fec
    __asm_out_138(v7, (char)v6);
    int64_t v8 = v6 & 0xffffffff; // 0x343000
    int32_t * v9 = (int32_t *)(a1 + 0x13d00ce); // 0x34300c
    uint32_t v10 = *v9; // 0x34300c
    uint32_t v11 = v10 + (int32_t)v6; // 0x34300c
    *v9 = v11;
    if (v11 < v10 || v11 == 0) {
        int32_t * v12 = (int32_t *)(v3 - 0xa605542); // 0x343019
        *v12 = 0x4000 * *v12;
        char * v13 = (char *)(v8 + 78); // 0x343021
        unsigned char v14 = *v13; // 0x343021
        unsigned char v15 = (char)a2 ^ 41; // 0x343021
        *v13 = v14 - v15;
        int32_t * v16 = (int32_t *)(v3 + 0x13d0095); // 0x343024
        uint32_t v17 = *v16; // 0x343024
        *v16 = v17 / 2 | 0x80000000 * (int32_t)(v14 < v15);
        int32_t * v18 = (int32_t *)((v2 | a4 / 256) % 256 | v2 & 0xffffff00); // 0x34302a
        int32_t v19 = *v18; // 0x34302a
        int64_t v20; // bp-16, 0x342fe8
        *v18 = v19 + (int32_t)(int64_t)&v20 + (int32_t)(v17 % 2 != 0);
        int64_t result = v6 & 0xffffff00 | 174; // 0x34302d
        int32_t * v21 = (int32_t *)(result + 47); // 0x343030
        int32_t v22 = *v21; // 0x343030
        int64_t v23; // bp+29049, 0x342fe8
        *v21 = v22 - ((int32_t)(v6 % 2 != 0) | (int32_t)(int64_t)&v23);
        return result;
    }
    // 0x343045
    __asm_outsd(v7, *(int32_t *)v8);
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)a1;
    return __asm_in(v7);
}

// Address range: 0x34307d - 0x343080
int64_t function_34307d(void) {
    // 0x34307d
    int64_t result; // 0x34307d
    return result;
}

// Address range: 0x3430b8 - 0x3430c2
int64_t function_3430b8(void) {
    // 0x3430b8
    return function_ffffffffe4dfe328();
}

// Address range: 0x3430d9 - 0x3430e7
int64_t function_3430d9(int64_t a1, int64_t a2) {
    // 0x3430d9
    int64_t v1; // 0x3430d9
    bool v2; // 0x3430d9
    *(char *)a1 = 2 * (char)v1 + (char)v2;
    int64_t result = unknown_ffffffffe844b3e1(); // 0x3430db
    int32_t * v3 = (int32_t *)(result + 44); // 0x3430e0
    *v3 = *v3 + (int32_t)v1;
    return result;
}

// Address range: 0x34312e - 0x34312f
int64_t function_34312e(void) {
    // 0x34312e
    int64_t result; // 0x34312e
    return result;
}

// Address range: 0x343133 - 0x343134
int64_t function_343133(int64_t a1) {
    // 0x343133
    int64_t result; // 0x343133
    return result;
}

// Address range: 0x34314e - 0x34314f
int64_t function_34314e(void) {
    // 0x34314e
    int64_t result; // 0x34314e
    return result;
}

// Address range: 0x3eda96 - 0x3edaa3
int64_t function_3eda96(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3eda96
    int64_t v1; // 0x3eda96
    *(int32_t *)a1 = (int32_t)v1 / 0x10000;
    int64_t v2; // 0x3eda96
    *(int32_t *)a4 = *(int32_t *)&v2 ^ (int32_t)v1;
    return v1 + 0xa09b9bcf & 0xffffffff;
}

// Address range: 0x3edaf1 - 0x3edaf4
int64_t function_3edaf1(void) {
    // 0x3edaf1
    int64_t result; // 0x3edaf1
    return result;
}

// Address range: 0x3edb3b - 0x3edb48
int64_t function_3edb3b(int64_t a1, int64_t result) {
    char * v1 = (char *)(a1 - 79); // 0x3edb3b
    int64_t v2; // 0x3edb3b
    *v1 = *v1 - (char)v2;
    return result;
}

// Address range: 0x3edb63 - 0x3edb6b
int64_t function_3edb63(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3edb63
    int64_t v1; // 0x3edb63
    int64_t v2 = v1;
    bool v3; // 0x3edb63
    bool v4 = v3;
    uint32_t v5 = (int32_t)a3; // 0x3edb63
    uint32_t v6 = *(int32_t *)(a4 - 66) + (int32_t)v4; // 0x3edb63
    bool v7 = v4 ? v6 != -1 | (int32_t)v4 + v5 - v6 > v5 : v6 > v5; // 0x3edb63
    return (v2 + 111 + (int64_t)v7) % 256 | v2 & -256;
}

// Address range: 0x3edbf8 - 0x3edc1d
int64_t function_3edbf8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int32_t * v1 = (int32_t *)(a5 + 87); // 0x3edc02
    *v1 = *v1 - (int32_t)a4;
    int64_t v2; // 0x3edbf8
    *(int64_t *)(v2 & 0xeee074d6) = a7;
    int64_t v3; // 0x3edbf8
    *(char *)v3 = *(char *)&v3 ^ (char)(a4 / 256);
    return function_7a3acb6(0x3613e17d);
}

// Address range: 0x3edc51 - 0x3edc52
int64_t function_3edc51(void) {
    // 0x3edc51
    int64_t result; // 0x3edc51
    return result;
}

// Address range: 0x3edd50 - 0x3edf1d
int64_t function_3edd50(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    unsigned char v1 = (char)a3;
    char v2 = a3 / 256; // 0x3edd50
    char v3 = v2 + v1; // 0x3edd50
    *(char *)a3 = v3;
    int64_t result; // 0x3edd50
    if (v3 < 0 == ((v3 ^ v1) & (v3 ^ v2)) < 0 == (v3 != 0)) {
        // 0x3ede14
        *(char *)result = *(char *)&result - (char)a4;
        return result;
    }
    char * v4 = (char *)(a1 + 69); // 0x3edda4
    *v4 = (char)(v3 < v1) - (char)a4 + *v4;
    int64_t v5; // 0x3edd50
    *(char *)(a3 - 0x4b25ab2d) = (char)v5;
    *(int32_t *)0x6b9faa3a = *(int32_t *)0x6b9faa3a | (int32_t)a4;
    *(char *)a1 = (char)result;
    return a2 & 0xffffffff;
}

// Address range: 0x3edf31 - 0x3edf36
int64_t function_3edf31(void) {
    // 0x3edf31
    return function_ffffffff85cb2005();
}

// Address range: 0x3edf46 - 0x3edf52
int64_t function_3edf46(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (unsigned char)(char)a4 % 32; // 0x3edf46
    if (v1 != 0) {
        unsigned char v2 = (char)a2;
        *(char *)a2 = v2 << 8 - v1 | v2 >> v1;
    }
    return function_14c04d25();
}

// Address range: 0x3edf58 - 0x3edfe1
int64_t function_3edf58(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffffc0c05d8b(); // 0x3edf5a
    int32_t v2 = a2; // 0x3edf5f
    int32_t v3 = *(int32_t *)(8 * a1 - 0x63179f14 + a3); // 0x3edf5f
    int32_t v4 = v3 + v2; // 0x3edf5f
    uint32_t v5 = 0x10000 * (int32_t)v1 >> 16; // 0x3edf66
    int64_t result = v5; // 0x3edf66
    if (v4 < 0 != ((v4 ^ v2) & (v4 ^ v3)) < 0) {
        int64_t v6 = v4; // 0x3edf5f
        *(int32_t *)a1 = *(int32_t *)v6;
        bool v7; // 0x3edf58
        int64_t v8 = v7 ? -4 : 4; // 0x3edfcd
        *(int32_t *)(v8 + a1) = *(int32_t *)(v8 + v6);
        return result;
    }
    int32_t * v9 = (int32_t *)(a1 - 0x719c84b0); // 0x3edf94
    uint32_t v10 = *v9; // 0x3edf94
    *v9 = v10 - v5;
    if (v10 < v5) {
        // 0x3edf9c
        return result;
    }
    // 0x3edfd1
    __asm_fldenv(*(int224_t *)(a4 - 0x217babb9));
    return result | -0x21d079e9;
}

// Address range: 0x3edfe4 - 0x3edfe5
int64_t function_3edfe4(int64_t a1) {
    // 0x3edfe4
    int64_t result; // 0x3edfe4
    return result;
}

// Address range: 0x3ee00d - 0x3ee00e
int64_t function_3ee00d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ee00d
    int64_t result; // 0x3ee00d
    __asm_out_135((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x3ee08a - 0x3ee08b
int64_t function_3ee08a(int64_t a1) {
    // 0x3ee08a
    int64_t result; // 0x3ee08a
    return result;
}

// Address range: 0x3ee0a2 - 0x3ee0a5
int64_t function_3ee0a2(int64_t a1) {
    // 0x3ee0a2
    int64_t result; // 0x3ee0a2
    return result;
}

// Address range: 0x3ee0a7 - 0x3ee0a8
int64_t function_3ee0a7(void) {
    // 0x3ee0a7
    int64_t result; // 0x3ee0a7
    return result;
}

// Address range: 0x3ee0b6 - 0x3ee1a6
int64_t function_3ee0b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result2) {
    int64_t v1 = a2;
    int64_t v2; // 0x3ee0b6
    int32_t v3 = v2; // 0x3ee0b6
    int64_t v4 = v2 + 0x88711b94; // 0x3ee0b7
    int64_t result = v4 & 0xffffffff; // 0x3ee0b7
    if ((0x778ee46b - v3 & v3) < 0) {
        if (a4 != 0) {
            // 0x3ee123
            return function_ffffffffca70569e();
        }
        // 0x3ee140
        *(int32_t *)a1 = (int32_t)v4;
        char * v5 = (char *)(2 * v2 - 77); // 0x3ee141
        char v6 = *v5 ^ (char)((v3 >> 31) / 256); // 0x3ee141
        unsigned char v7 = llvm_ctpop_i8(v6); // 0x3ee141
        *v5 = v6;
        if (v7 % 2 != 0) {
            // 0x3ee199
            __readfsqword(-0x59e9bc04);
            return result;
        }
        // 0x3ee147
        *(int32_t *)0x122d3a6a = *(int32_t *)0x122d3a6a + (int32_t)v2;
        return result2;
    }
    char * v8 = (char *)(a2 - 0x225fd8f6); // 0x3ee0c1
    *v8 = *v8 | (char)v2;
    int64_t v9 = (int64_t)*(int32_t *)(v2 - 30); // 0x3ee0c7
    int64_t v10 = -12 * v9; // 0x3ee0c7
    int64_t v11 = v10 & 0xfffffffc; // 0x3ee0c7
    char v12 = *(char *)v11; // 0x3ee0cb
    char v13 = v12 + (char)a4 + (char)(v10 != -0xc00000000 * v9 >> 32); // 0x3ee0cb
    __asm_outsd((int16_t)result2, *(int32_t *)&v1);
    __asm_out_134(41, (int32_t)v4);
    if ((-255 * a4 & 0xff00 || a4 & -0x10000 || (int64_t)v13) != 0) {
        // 0x3ee0d2
        *(int32_t *)result = 0x52b8d46d;
        char v14 = __asm_in_133(94); // 0x3ee0da
        bool v15; // 0x3ee0b6
        *(char *)(v11 + (v15 ? -1 : 1)) = v14;
        return v4 & 0xffffff00 | (int64_t)v14;
    }
    int64_t v16 = result; // 0x3ee104
    if (v13 >= 0) {
        v16 = function_3ee0a7();
    }
    int64_t v17 = v16;
    return (v17 + 112) % 256 | v17 & -256;
}

// Address range: 0x3ee1bf - 0x3ee1fe
int64_t function_3ee1bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ee1bf
    int64_t v1; // 0x3ee1bf
    uint32_t v2 = *(int32_t *)(a1 + 104) ^ (int32_t)v1; // 0x3ee1bf
    int64_t v3 = v2; // 0x3ee1bf
    *(int32_t *)a1 = (int32_t)v1;
    bool v4; // 0x3ee1bf
    int64_t v5 = v4 ? -4 : 4; // 0x3ee1ca
    int64_t v6 = v5 + a1; // 0x3ee1ca
    int64_t v7 = v5 + a2; // 0x3ee1ca
    char * v8 = (char *)(v1 + 0x57440fbe); // 0x3ee1cb
    *v8 = *v8 & (char)((v1 + 0x833b) / 256);
    int32_t * v9 = (int32_t *)(2 * a3 - 44 + v7); // 0x3ee1d7
    *v9 = *v9 | v2;
    char * v10 = (char *)v6; // 0x3ee1db
    int64_t v11; // 0x3ee1bf
    *v10 = *v10 ^ (char)v11;
    *(int64_t *)(v3 - 8) = -5;
    *(int64_t *)(v3 - 16) = v6;
    int32_t * v12 = (int32_t *)v7; // 0x3ee1f3
    *v12 = (*v12 ^ (int32_t)v11) + (*(int32_t *)&v11 & (int32_t)v1);
    return function_ffffffffaac1027c();
}

// Address range: 0x3ee202 - 0x3ee203
int64_t function_3ee202(void) {
    // 0x3ee202
    int64_t result; // 0x3ee202
    return result;
}

// Address range: 0x3ee233 - 0x3ee234
int64_t function_3ee233(void) {
    // 0x3ee233
    int64_t result; // 0x3ee233
    return result;
}

// Address range: 0x3ee262 - 0x3ee3ba
int64_t function_3ee262(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3ee262
    int64_t v1; // 0x3ee262
    uint64_t v2 = v1;
    int64_t v3 = v1;
    int64_t v4 = a1;
    unsigned char v5 = (char)a3; // 0x3ee264
    char v6 = (char)v3 > 160; // 0x3ee264
    unsigned char v7 = v6 + (char)v2; // 0x3ee264
    char v8 = v5 - v7; // 0x3ee264
    int64_t v9 = (v3 + 95) % 256 | v3 & -256; // 0x3ee268
    if (v8 < 0) {
        v9 = function_3ee202();
    }
    bool v10 = (char)v3 > 160 ? v7 != -1 | v8 - v6 > v5 : v7 > v5; // 0x3ee264
    int64_t v11 = v9;
    __asm_outsb((int16_t)(a3 & 0xff00 | (int64_t)v8), (char)a2);
    char v12 = *(char *)(a2 - 0x247e86e3); // 0x3ee26c
    int32_t v13 = __readgsdword(-0x5047c85b); // 0x3ee273
    *(int32_t *)v2 = (int32_t)v2 / 2;
    int32_t * v14 = (int32_t *)(v2 + 95); // 0x3ee27e
    *v14 = *v14 << 31;
    int32_t v15 = *(int32_t *)&v4; // 0x3ee282
    int32_t v16 = v15 ^ (int32_t)(v11 & 0xffffff00 | (int64_t)((char)v11 + (char)v10 + v12)); // 0x3ee282
    int64_t v17 = a4 - 1; // 0x3ee285
    int64_t result = v13 ^ (int32_t)a2; // 0x3ee285
    if (v17 != 0 == v16 == 0) {
        result = function_3ee233();
    }
    // 0x3ee287
    if (v16 == 0) {
        // 0x3ee289
        *(char *)-0x63ba859a = *(char *)-0x63ba859a & (char)(v2 / 256);
        return result + 0xfb331477 & 0xffffffff;
    }
    int32_t v18 = result; // 0x3ee29c
    int32_t v19 = v16 + v18; // 0x3ee29c
    if (v19 < 0 != ((v19 ^ v16) & (v19 ^ v18)) < 0) {
        // 0x3ee2a0
        *(char *)0x444145ca46d170c = (char)result;
        return result;
    }
    int64_t v20 = result + 0xeb0c56f9 + (int64_t)((v19 & (int32_t)L"\n2") != 0) & 0xffffffff; // 0x3ee2dc
    int64_t result2 = __asm_in_137(85); // 0x3ee2e6
    *(int32_t *)0x3a699d10 = *(int32_t *)0x3a699d10 & (int32_t)v1;
    char * v21 = (char *)(v20 + 111); // 0x3ee2fb
    *v21 = *v21 + (char)v17;
    if ((256 * (int64_t)*(char *)(v4 + v1) || v17 & -0xff01) == 1) {
        // 0x3ee300
        return result2;
    }
    int32_t * v22 = (int32_t *)v20; // 0x3ee35f
    *v22 = *v22 ^ (int32_t)v4;
    return result2;
}

// Address range: 0x3ee3bb - 0x3ee3c9
int64_t function_3ee3bb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x3ee3bb
    int64_t v1; // 0x3ee3bb
    int64_t v2 = v1;
    int64_t v3 = a4;
    int64_t v4 = a1;
    *(char *)v2 = (char)v2 + (char)a3;
    uint32_t v5 = (int32_t)a4 % 32; // 0x3ee3bd
    if (v5 != 0) {
        *(int32_t *)v3 = *(int32_t *)&v3 >> v5;
    }
    *(char *)v4 = *(char *)&v4 | (char)(a3 / 256);
    int64_t result; // 0x3ee3bb
    *(int32_t *)result = *(int32_t *)&result / 2;
    return result;
}

// Address range: 0x3ee44c - 0x3ee44d
int64_t function_3ee44c(void) {
    // 0x3ee44c
    int64_t result; // 0x3ee44c
    return result;
}

// Address range: 0x3ee499 - 0x3ee4a3
int64_t function_3ee499(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)*(int32_t *)(a4 - 100); // 0x3ee49c
    int64_t result; // 0x3ee499
    if (81 * v1 != 0x5100000000 * v1 >> 32) {
        result = function_3ee44c();
    }
    // 0x3ee4a2
    return result;
}

// Address range: 0x3ee4b4 - 0x3ee4b7
int64_t function_3ee4b4(void) {
    // 0x3ee4b4
    int64_t result; // 0x3ee4b4
    return result;
}

// Address range: 0x3ee4b8 - 0x3ee4d9
int64_t function_3ee4b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ee4b8
    int64_t v1; // 0x3ee4b8
    int64_t v2 = v1;
    float80_t v3; // 0x3ee4b8
    *(int64_t *)(a3 - 118) = (int64_t)v3;
    __asm_rcl(*(char *)(a4 - 0x4a776fce));
    char v4 = *(char *)0x189b640; // 0x3ee4cf
    *(char *)0x189b640 = v4 + (char)((uint64_t)v1 / 256);
    int32_t v5 = __asm_insd((int16_t)(*(int32_t *)(a4 - 0xc9cfe2b) & (int32_t)a3)); // 0x3ee4d5
    *(int32_t *)a1 = v5;
    return (v2 + 26) % 256 | v2 & -256;
}

// Address range: 0x3ee51c - 0x3ee51d
int64_t function_3ee51c(void) {
    // 0x3ee51c
    int64_t result; // 0x3ee51c
    return result;
}

// Address range: 0x3ee52c - 0x3ee52d
int64_t function_3ee52c(int64_t a1) {
    // 0x3ee52c
    int64_t result; // 0x3ee52c
    return result;
}

// Address range: 0x3ee538 - 0x3ee54f
int64_t function_3ee538(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x3ee538
    int64_t v1; // 0x3ee538
    if ((char)v1 != (char)(a3 / 256)) {
        function_3ee51c();
    }
    // 0x3ee549
    return function_7a5d996();
}

// Address range: 0x3ee580 - 0x3ee5a1
int64_t function_3ee580(int64_t a1) {
    // 0x3ee580
    int64_t v1; // 0x3ee580
    int64_t result = 0x100000000 * v1 >> 32; // 0x3ee580
    bool v2; // 0x3ee580
    if (!v2) {
        // 0x3ee5a0
        return result;
    }
    char * v3 = (char *)(v1 + 0x6cdc9609 + v1); // 0x3ee584
    *v3 = *v3 - 89;
    return result;
}

// Address range: 0x3ee5a1 - 0x3ee5a2
int64_t function_3ee5a1(void) {
    // 0x3ee5a1
    int64_t result; // 0x3ee5a1
    return result;
}

// Address range: 0x3ee5bd - 0x3ee5c0
int64_t function_3ee5bd(int64_t a1) {
    // 0x3ee5bd
    int64_t result; // 0x3ee5bd
    return result;
}

// Address range: 0x3ee5c6 - 0x3ee5cb
int64_t function_3ee5c6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ee5c6
    int64_t result; // 0x3ee5c6
    return result;
}

// Address range: 0x3ee649 - 0x3ee64a
int64_t function_3ee649(void) {
    // 0x3ee649
    int64_t result; // 0x3ee649
    return result;
}

// Address range: 0x3ee681 - 0x3ee690
int64_t function_3ee681(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ee681
    int64_t result; // 0x3ee681
    return result;
}

// Address range: 0x3ee6e4 - 0x3ee6e7
int64_t function_3ee6e4(void) {
    // 0x3ee6e4
    int64_t result; // 0x3ee6e4
    return result;
}

// Address range: 0x3ee72f - 0x3ee730
int64_t function_3ee72f(void) {
    // 0x3ee72f
    int64_t result; // 0x3ee72f
    return result;
}

// Address range: 0x3ee735 - 0x3ee74e
int64_t function_3ee735(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ee735
    return __asm_iretd();
}

// Address range: 0x3ee773 - 0x3ee776
int64_t function_3ee773(int64_t a1, int64_t a2) {
    // 0x3ee773
    int64_t result; // 0x3ee773
    return result;
}

// Address range: 0x3ee793 - 0x3ee796
int64_t function_3ee793(void) {
    // 0x3ee793
    int64_t result; // 0x3ee793
    bool v1; // 0x3ee793
    if (!v1) {
        result = function_3ee72f();
    }
    // 0x3ee795
    return result;
}

// Address range: 0x3ee798 - 0x3ee7d1
int64_t function_3ee798(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x3ee798
    char v3 = *(char *)(v2 + 0x13f6fe37); // 0x3ee799
    int32_t * v4 = (int32_t *)(a4 & -256 | (int64_t)(v3 & (char)a4)); // 0x3ee7b4
    int64_t v5; // 0x3ee798
    int64_t v6 = v5 | 141; // 0x3ee7a5
    *(int64_t *)(v2 - 8) = v6;
    int64_t v7; // 0x3ee798
    int32_t v8 = *(int32_t *)&v1 & (int32_t)v7; // 0x3ee7b2
    *v4 = *v4 ^ v8;
    int64_t result = v6 & 0x80002b0 | 0x36ffc001; // 0x3ee7bf
    v7 = (int64_t)(v8 & -0xff01) | (int64_t)&g17;
    while (*(int32_t *)(v1 - 70) < 0xc3787a5c) {
        // 0x3ee79f
        v6 = result | 141;
        *(int64_t *)0xaa886b6a = v6;
        v8 = *(int32_t *)&v1 & (int32_t)v7;
        *v4 = *v4 ^ v8;
        result = v6 & 0x80002b0 | 0x36ffc001;
        v7 = (int64_t)(v8 & -0xff01) | (int64_t)&g17;
    }
    // 0x3ee7cd
    *(int64_t *)0xaa886b6a = result;
    return result;
}

// Address range: 0x3ee850 - 0x3ee853
int64_t function_3ee850(int64_t a1) {
    // 0x3ee850
    int64_t v1; // 0x3ee850
    return v1 ^ 47;
}

// Address range: 0x53e869 - 0x53e8b3
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_53e869(int64_t a1) {
    // 0x53e869
    *(int64_t *)(a1 - 8) = 0;
    int64_t v1 = a1 + 8; // 0x53e883
    *(int64_t *)a1 = (int64_t)&g14;
    int64_t v2 = a1 - 16; // 0x53e892
    *(int64_t *)v2 = (int64_t)&g15;
    *(int64_t *)v1 = (int64_t)&g6;
    function_54cf10(v1);
    return function_4eeb50(v2);
}

// Address range: 0x53e8c0 - 0x53e8c3
int64_t function_53e8c0(int64_t a1) {
    // 0x53e8c0
    return a1 & 0xffffffff;
}

// Address range: 0x53e8d0 - 0x53e947
int64_t function_53e8d0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a2 + 8); // 0x53e8d7
    int64_t * v2 = (int64_t *)a1; // 0x53e8e1
    *v2 = v1;
    int64_t * v3 = (int64_t *)(v1 - 24); // 0x53e8e4
    int64_t v4 = *v3; // 0x53e8e4
    *(int64_t *)(v4 + a1) = *(int64_t *)(a2 + 16);
    *(int64_t *)(a1 + 8) = 0;
    function_4fc7e0(*v3 + a1, a3, v4);
    int64_t v5 = *(int64_t *)(a2 + 24); // 0x53e907
    int64_t v6 = a1 + 16; // 0x53e90e
    int64_t * v7 = (int64_t *)v6; // 0x53e90e
    *v7 = v5;
    int64_t v8 = *(int64_t *)(v5 - 24) + v6; // 0x53e916
    *(int64_t *)v8 = *(int64_t *)(a2 + 32);
    function_4fc7e0(v8, a3, v4);
    *v2 = a3;
    *(int64_t *)(*(int64_t *)(a3 - 24) + a1) = *(int64_t *)(a2 + 40);
    int64_t result = *(int64_t *)(a2 + 48); // 0x53e93a
    *v7 = result;
    return result;
}

// Address range: 0x53e947 - 0x53ea3d
// From class:    std::iostream
// Type:          constructor
int64_t function_53e947(int64_t a1, int64_t a2) {
    // 0x53e947
    int64_t v1; // 0x53e947
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x53e947
    *(int64_t *)v1 = v2;
    int64_t v3 = *(int64_t *)(v2 - 24); // 0x53e951
    *(int64_t *)(v3 + v1) = *(int64_t *)(v1 + 16);
    *(int64_t *)(v1 + 8) = 0;
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t v4 = v1 + 24; // 0x53e97c
    function_54cb80(v4);
    *(int64_t *)(v1 + 240) = 0;
    *(char *)(v1 + 248) = 0;
    *(char *)(v1 + 249) = 0;
    *(int64_t *)(v1 + 256) = 0;
    *(int64_t *)(v1 + 264) = 0;
    *(int64_t *)(v1 + 272) = 0;
    *(int64_t *)(v1 + 280) = 0;
    int64_t * v5 = (int64_t *)v1; // 0x53e9e2
    *v5 = (int64_t)&g9;
    int64_t * v6 = (int64_t *)v4; // 0x53e9e5
    *v6 = (int64_t)&g10;
    *(int64_t *)(v1 + 8) = 0;
    function_4fc7e0(v4, a2, v3);
    int64_t * v7 = (int64_t *)(v1 + 16); // 0x53ea03
    *v7 = (int64_t)&g7;
    *v6 = (int64_t)&g8;
    function_4fc7e0(v4, a2, v3);
    *v5 = (int64_t)&g11;
    *v7 = (int64_t)&g12;
    *v6 = (int64_t)&g13;
    return (int64_t)&g12;
}
