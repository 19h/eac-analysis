/*
 * Targeted RetDec C for native executable gap queue batch 2166.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x5a61a-0x5a81a rank=- name=- kind=- bytes=- uncovered=-
 *   0x5a81a-0x5a828 rank=- name=- kind=- bytes=- uncovered=-
 *   0x671bf-0x673bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x7227e-0x7247e rank=- name=- kind=- bytes=- uncovered=-
 *   0x7247e-0x72496 rank=- name=- kind=- bytes=- uncovered=-
 *   0x73478-0x73678 rank=- name=- kind=- bytes=- uncovered=-
 *   0x73678-0x7368a rank=- name=- kind=- bytes=- uncovered=-
 *   0xc559f-0xc579f rank=- name=- kind=- bytes=- uncovered=-
 *   0xc579f-0xc57b8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x36ad9e-0x36af9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x36af9e-0x36afd2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49546d-0x49566d rank=- name=- kind=- bytes=- uncovered=-
 *   0x49566d-0x4956b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b8d92-0x4b8f92 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b8f92-0x4b8fc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ce973-0x4ceb73 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ceb73-0x4ceba0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4edf1f-0x4ee11f rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ee11f-0x4ee130 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fc839-0x4fca39 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fca39-0x4fca70 rank=- name=- kind=- bytes=- uncovered=-
 *   0x549b79-0x549d79 rank=- name=- kind=- bytes=- uncovered=-
 *   0x549d79-0x549da0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54c18c-0x54c38c rank=- name=- kind=- bytes=- uncovered=-
 *   0x551840-0x551a40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x551a40-0x551a70 rank=- name=- kind=- bytes=- uncovered=-
 *   0x556ab8-0x556cb8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x556cb8-0x556cf0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5592cb-0x5594cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x5594cb-0x5594e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x567a18-0x567c18 rank=- name=- kind=- bytes=- uncovered=-
 *   0x567c18-0x567c30 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
extern int g7;
extern int g8;
extern int g9;
extern int g10;
extern int g11;
extern int g12;
extern int g13;
extern int g14;
extern int g16;
extern int g17;
extern int g18;
extern int g19;
extern int g20;
extern int g21;
extern int g22;
extern int g23;
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

int64_t function_200c0();
int64_t function_20210();
int64_t function_203b0();
int64_t function_20730();
int64_t function_21a2d();
int64_t function_25018();
int64_t function_2508e();
int64_t function_2509a();
int64_t function_250b0();
int64_t function_2562c();
int64_t function_25856();
int64_t function_25a28();
int64_t function_25e67();
int64_t function_2601b();
int64_t function_29c3a();
int64_t function_29cf4();
int64_t function_29ef7();
int64_t function_35fcc();
int64_t function_360a0();
int64_t function_36ad9e(void);
int64_t function_36ad9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_36ae7c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48e347();
int64_t function_48e480();
int64_t function_48f087();
int64_t function_48f642();
int64_t function_495390();
int64_t function_495420();
int64_t function_49546d(void);
int64_t function_49546e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4b82e0();
int64_t function_4b8b30();
int64_t function_4b8bc0();
int64_t function_4b8c0a();
int64_t function_4b8d92(void);
int64_t function_4b8d94(void);
int64_t function_4b8da0(int64_t a1, int64_t file_path);
int64_t function_4b8f20(int64_t a1);
int64_t function_4c14d0();
int64_t function_4c16b0();
int64_t function_4c1770();
int64_t function_4c19e0();
int64_t function_4c1af0();
int64_t function_4c1b30();
int64_t function_4c1bc0();
int64_t function_4cdd20();
int64_t function_4cddb0();
int64_t function_4cdde0();
int64_t function_4ce440();
int64_t function_4ce580();
int64_t function_4ce973(int64_t a1);
int64_t function_4ceb80(void);
int64_t function_4e9d80();
int64_t function_4edf1f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4edf31(void);
int64_t function_4edf4e(void);
int64_t function_4edf9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4edfc7(void);
int64_t function_4ee006(void);
int64_t function_4ee02d(void);
int64_t function_4ee034(void);
int64_t function_4ee03b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4ee058(void);
int64_t function_4ee077(void);
int64_t function_4ee096(void);
int64_t function_4ee0aa(void);
int64_t function_4ee0c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4ee0c9(int64_t a1, int64_t a2);
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f1b30();
int64_t function_4fc380();
int64_t function_4fc7e0();
int64_t function_4fc839(int64_t a1, int64_t a2);
int64_t function_4fc8b6(int64_t a1, int64_t a2);
int64_t function_4fc940(int64_t a1, int64_t a2);
int64_t function_4fc9d0(int64_t a1, int64_t a2);
int64_t function_4fca40(int64_t a1);
int64_t function_4fca50(int64_t a1);
int64_t function_4fca60(int64_t a1);
int64_t function_5088b0();
int64_t function_52af50();
int64_t function_541f40();
int64_t function_542590();
int64_t function_542650();
int64_t function_542770();
int64_t function_549b10();
int64_t function_549b2c();
int64_t function_549b79(int64_t a1, int64_t a2, int64_t a3);
int64_t function_549b90(void);
int64_t function_549ba0(int64_t result);
int64_t function_549bb0(int64_t result);
int64_t function_549bc0(int64_t a1, uint64_t result, int64_t a3);
int64_t function_549c30(uint64_t a1, uint64_t a2);
int64_t function_549c50(int64_t wstr, int64_t wstr2, int64_t n);
int64_t function_549c70(int64_t wstr, int64_t wstr2, int64_t n);
int64_t function_549c90(int64_t wstr, int64_t n, int64_t wc);
int64_t function_549cc0(int64_t wstr, int64_t wstr2, int64_t a3);
int64_t function_549cf0(int64_t wstr, int64_t wstr2, int64_t a3);
int64_t function_549d20(int64_t wstr, int64_t wstr2, int64_t a3);
int64_t function_549d50(int64_t wstr, int64_t wstr2, int64_t a3);
int64_t function_549d80(int64_t a1, int64_t a2);
int64_t function_54c18c(void);
int64_t function_54c18d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11);
int64_t function_54c270(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, uint64_t a5);
int64_t function_54cb80();
int64_t function_54cf10();
int64_t function_54cf90();
int64_t function_54d0a0();
int64_t function_551750();
int64_t function_551840(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_551850(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, uint64_t a6);
int64_t function_5518e0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_551900(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_551920(int64_t a1, int64_t a2, int64_t a3, int64_t wstr);
int64_t function_551970(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_551990(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_5519b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_5519d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_5519f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_551a10(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_551a30(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_551a50(int64_t a1, int64_t a2);
int64_t function_551a60(int64_t a1, int64_t a2);
int64_t function_556ab8(int64_t a1);
int64_t function_556b10(int64_t a1);
int64_t function_556b60(int64_t a1);
int64_t function_556bb0(int64_t a1);
int64_t function_556c00(int64_t a1);
int64_t function_556c50(int64_t a1);
int64_t function_556ca0(int64_t a1);
int64_t function_556e50();
int64_t function_5571e0();
int64_t function_5591c3();
int64_t function_559214();
int64_t function_559225();
int64_t function_5592cb(void);
int64_t function_5592d0(void);
int64_t function_559330(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_565f30();
int64_t function_566180();
int64_t function_566390();
int64_t function_567a18(int64_t a1, int64_t a2);
int64_t function_5a28a();
int64_t function_5a314();
int64_t function_5a470();
int64_t function_5a560();
int64_t function_5a61a(int64_t a1, int32_t a2);
int64_t function_5a65e(int64_t a1, int64_t a2);
int64_t function_5a690(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_5a72e(int64_t a1, int64_t a2);
int64_t function_5a772(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_66c36();
int64_t function_66c42();
int64_t function_66c4f();
int64_t function_671bf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6725e(int64_t result);
int64_t function_67262(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_71dae();
int64_t function_71e6a();
int64_t function_71e86();
int64_t function_72178();
int64_t function_7227e(int64_t a1);
int64_t function_727da();
int64_t function_72832();
int64_t function_729b6();
int64_t function_729ce();
int64_t function_72e54();
int64_t function_7343e();
int64_t function_73478(int64_t result);
int64_t function_7347c(int64_t a1);
int64_t function_734b2(int64_t result);
int64_t function_734b6(int64_t result);
int64_t function_734ba(int64_t a1, int64_t a2);
int64_t function_734e2(int64_t a1);
int64_t function_734ee(int64_t a1, int64_t a2, int64_t a3);
int64_t function_7368a();
int64_t function_c559f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_c57b8();

// Address range: 0x5a61a - 0x5a65e
int64_t function_5a61a(int64_t a1, int32_t a2) {
    int64_t v1 = (int64_t)a2 + a1; // 0x5a624
    int64_t v2 = function_5a314(v1, *(int64_t *)(a1 + 8)); // 0x5a62b
    int64_t result = 0; // 0x5a63d
    if (v1 != 0) {
        // 0x5a63f
        function_25a28(result, a1 + 24, v1);
    }
    // 0x5a64b
    function_2562c(v2, result);
    return result;
}

// Address range: 0x5a65e - 0x5a68f
int64_t function_5a65e(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 16); // 0x5a65e
    int32_t v2 = *v1; // 0x5a65e
    if (v2 < 0) {
        // 0x5a686
        return function_5a61a(a1, 0);
    }
    // 0x5a669
    if ((int64_t)g12 != a1) {
        // 0x5a672
        *v1 = v2 + 1;
    }
    // 0x5a68a
    return a1 + 24;
}

// Address range: 0x5a690 - 0x5a72e
int64_t function_5a690(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __readfsqword(40); // 0x5a6af
    int64_t v2; // bp-64, 0x5a690
    function_5a470(&v2);
    int64_t v3; // bp-56, 0x5a690
    int64_t v4; // bp-65, 0x5a690
    function_250b0(&v3, a4, &v4);
    function_48f087(&v3, a5);
    function_2509a(result, &v2);
    function_2509a(result + 8, &v3);
    function_2508e(&v3);
    function_2508e(&v2);
    if (v1 != __readfsqword(40)) {
        // 0x5a719
        __stack_chk_fail();
    }
    // 0x5a71e
    return result;
}

// Address range: 0x5a72e - 0x5a772
int64_t function_5a72e(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + a1; // 0x5a738
    int64_t v2 = function_5a28a(v1, *(int64_t *)(a1 + 8)); // 0x5a73f
    int64_t result = 0; // 0x5a751
    if (v1 != 0) {
        // 0x5a753
        function_29ef7(result, a1 + 24, v1);
    }
    // 0x5a75f
    function_29cf4(v2, result);
    return result;
}

// Address range: 0x5a772 - 0x5a828
int64_t function_5a772(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __readfsqword(40); // 0x5a791
    int64_t v2; // bp-72, 0x5a772
    function_5a560(&v2);
    int64_t v3; // bp-56, 0x5a772
    int64_t v4; // bp-73, 0x5a772
    function_250b0(&v3, a4, &v4);
    int64_t v5; // bp-64, 0x5a772
    function_48e347(&v5, &v3);
    function_2508e(&v3);
    function_48e480(&v5, a5);
    function_360a0(result, &v2);
    function_360a0(result + 8, &v5);
    function_29c3a(&v5);
    function_29c3a(&v2);
    if (v1 != __readfsqword(40)) {
        // 0x5a813
        __stack_chk_fail();
    }
    // 0x5a818
    return result;
}

// Address range: 0x671bf - 0x6725e
int64_t function_671bf(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = a3 - a2; // 0x671d1
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x671d4
    if (v1 > *v2 - a1) {
        int64_t v3 = function_66c42(v1); // 0x671e9
        function_66c4f(a2, a3, v3);
        int64_t result = function_66c36(a2); // 0x67202
        *(int64_t *)a1 = v3;
        int64_t v4 = v3 + v1; // 0x6720a
        *(int64_t *)(a1 + 8) = v4;
        *v2 = v4;
        // 0x67255
        return result;
    }
    int64_t * v5 = (int64_t *)(a1 + 8); // 0x67217
    uint64_t v6 = *v5 - a1; // 0x6721b
    int64_t result2; // 0x671bf
    if (v1 > v6) {
        int64_t v7 = v6 + a2; // 0x67234
        function_21a2d(a2, v7, a1);
        int64_t v8 = function_21a2d(v7, a3, *v5); // 0x6724c
        *v5 = v8;
        result2 = v8;
    } else {
        int64_t v9 = function_21a2d(a2, a3, a1); // 0x67229
        *v5 = v9;
        result2 = v9;
    }
    // 0x67255
    return result2;
}

// Address range: 0x6725e - 0x67262
int64_t function_6725e(int64_t result) {
    // 0x6725e
    return result;
}

// Address range: 0x67262 - 0x673be
int64_t function_67262(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x67262
    if (a4 == a3) {
        // 0x673aa
        return a2 - a1 + a1;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x6728c
    int64_t v2 = *v1; // 0x6728c
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x67290
    uint64_t v4 = a4 - a3; // 0x67297
    if (v4 > *v3 - v2) {
        int64_t v5 = function_25856(); // 0x6734a
        int64_t v6 = function_66c42(v5); // 0x67357
        int64_t v7 = function_2601b(a2, *v1, function_21a2d(a3, a4, function_2601b(v5, a2, v6))); // 0x67387
        function_66c36(a2);
        *(int64_t *)a1 = v6;
        *v1 = v7;
        *v3 = v6 + v5;
        // 0x673aa
        return a2 - a1 + a2;
    }
    uint64_t v8 = v2 - a2; // 0x672af
    if (v4 >= v8) {
        int64_t v9 = v8 + a3; // 0x672f2
        function_21a2d(v9, a4, v2);
        int64_t v10 = *v1 + v4 - v8; // 0x67317
        *v1 = v10;
        function_66c4f(a2, v2, v10);
        *v1 = *v1 + v8;
        function_21a2d(a3, v9, a2);
    } else {
        int64_t v11 = v2 - v4; // 0x672c0
        function_66c4f(v11, v2, v2);
        *v1 = *v1 + v4;
        function_25e67(a2, v11, v2);
        function_21a2d(a3, a4, a2);
    }
    // 0x673aa
    return a2 - a1 + a3;
}

// Address range: 0x7227e - 0x72496
int64_t function_7227e(int64_t a1) {
    // 0x7227e
    int32_t v1; // 0x7227e
    uint32_t v2 = v1;
    int64_t v3 = __readfsqword(40); // 0x7228c
    if ((char)function_72e54(a1) == 0) {
        int64_t v4 = a1 + 248;
        int64_t * v5 = (int64_t *)(a1 + 344);
        int32_t * v6 = (int32_t *)(a1 + 352);
        int32_t * v7 = (int32_t *)(a1 + 404);
        while ((char)function_71e6a(a1) == 0) {
            // 0x722c2
            function_72832(v4, function_71dae() & 0xffffffff);
            function_727da(v4);
            int64_t v8; // bp-184, 0x7227e
            function_729b6(&v8, a1 + 360);
            int64_t v9 = 0; // bp-160, 0x72317
            int64_t v10 = 0; // bp-144, 0x7233b
            function_35fcc(&v10);
            function_35fcc(&v9);
            int64_t v11; // bp-136, 0x7227e
            if ((char)function_72178(a1, &v11) != 0) {
                // 0x7239c
                if ((char)function_72e54(a1) != 0) {
                    // 0x72462
                    function_25018(&v11);
                    function_729ce(&v8);
                    goto lab_0x72472;
                }
                // 0x723ac
                *v5 = function_52af50();
                *v6 = 0;
                int64_t v12 = function_541f40(); // 0x723e1
                *v5 = 0;
                *v6 = 0;
                if ((char)v12 != 0) {
                    // 0x7241e
                    function_71e86(a1, &v11, 0, v2, (int64_t)v2);
                }
                // 0x72447
                *v7 = *v7 + 1;
            }
            // 0x7244d
            function_25018(&v11);
            function_729ce(&v8);
            if ((char)function_72e54(a1) != 0) {
                // break -> 0x72472
                break;
            }
        }
    }
    goto lab_0x72472;
  lab_0x72472:;
    int64_t result = 0; // 0x72483
    if (v3 != __readfsqword(40)) {
        // 0x72485
        __stack_chk_fail();
        result = (int64_t)&g23;
    }
    // 0x7248a
    return result;
}

// Address range: 0x73478 - 0x7347c
int64_t function_73478(int64_t result) {
    // 0x73478
    return result;
}

// Address range: 0x7347c - 0x734b2
int64_t function_7347c(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x7348c
    int64_t v2 = *v1; // 0x7348c
    int64_t result; // 0x7347c
    if (v2 == a1) {
        // 0x734a6
        *v1 = a1;
        return result;
    }
    int64_t v3 = a1 + 48; // 0x7349b
    function_7343e(a1);
    while (v2 != v3) {
        int64_t v4 = v3;
        v3 = v4 + 48;
        function_7343e(v4);
    }
    // 0x734a6
    *v1 = a1;
    return result;
}

// Address range: 0x734b2 - 0x734b6
int64_t function_734b2(int64_t result) {
    // 0x734b2
    return result;
}

// Address range: 0x734b6 - 0x734ba
int64_t function_734b6(int64_t result) {
    // 0x734b6
    return result;
}

// Address range: 0x734ba - 0x734e2
int64_t function_734ba(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x734ba
    int64_t v2 = *v1; // 0x734ba
    if (v2 == *(int64_t *)(a1 + 16)) {
        // 0x734d7
        return function_734ee(a1, v2, a2);
    }
    int64_t result = function_7368a(v2, a2); // 0x734cb
    *v1 = *v1 + 48;
    return result;
}

// Address range: 0x734e2 - 0x734ed
int64_t function_734e2(int64_t a1) {
    // 0x734e2
    return a1 & -256 | (int64_t)(*(int64_t *)(a1 + 8) == a1);
}

// Address range: 0x734ee - 0x7368a
int64_t function_734ee(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x73515
    int64_t v2 = 0x555555555555555; // 0x73549
    int64_t v3; // 0x734ee
    int64_t v4; // 0x734ee
    if (v2 > 0x555555555555555 || v2 < -0x5555555555555555 * (*v1 - a1 >> 4)) {
        goto lab_0x73679;
    } else {
        // 0x73558
        v3 = v2;
        v4 = 0;
        if (v2 != 0) {
            goto lab_0x73679;
        } else {
            goto lab_0x73564;
        }
    }
  lab_0x73679:;
    int64_t v5 = function_4efd30((int128_t)(48 * v2)); // 0x7367d
    v3 = v2;
    v4 = v5;
    goto lab_0x73564;
  lab_0x73564:;
    int64_t v6 = v4 + a2 - a1; // 0x73564
    function_7368a(v6, a3);
    int64_t v7 = v4; // 0x73581
    if (v6 != a2) {
        int64_t v8 = v4 + 48; // 0x7357d
        int64_t v9 = v6 + 48; // 0x7358a
        function_7368a(v4, v6);
        int64_t v10 = v9; // 0x73581
        int64_t v11 = v8; // 0x73581
        v7 = v8;
        while (v9 != a2) {
            // 0x73583
            v8 = v11 + 48;
            v9 = v10 + 48;
            function_7368a(v11, v10);
            v10 = v9;
            v11 = v8;
            v7 = v8;
        }
    }
    int64_t v12 = *v1; // 0x735a9
    int64_t v13 = 48 * (0xaaaaaaaaaaaaaab * (a2 - v6) / 16 & 0xfffffffffffffff); // 0x735c2
    int64_t v14 = v13 + v6; // 0x735cd
    int64_t v15 = v4 + 48 + v13; // 0x735d4
    int64_t v16 = v12; // 0x735e8
    int64_t v17 = v7; // 0x735e8
    if (v12 != v14) {
        int64_t v18 = v15;
        int64_t v19 = v14 + 48; // 0x735f0
        function_7368a(v18, v14);
        int64_t v20 = v18 + 48; // 0x735e8
        int64_t v21 = v19; // 0x735e8
        while (v12 != v19) {
            // 0x735ea
            v18 = v20;
            v19 = v21 + 48;
            function_7368a(v18, v21);
            v20 = v18 + 48;
            v21 = v19;
        }
        // 0x735e5
        v16 = *v1;
        v17 = v18;
    }
    int64_t v22 = 0xfffffffffffffff; // 0x73638
    int64_t v23 = v16; // 0x73638
    if (v16 != v17) {
        int64_t v24 = v17 + 48; // 0x7363d
        int64_t v25 = v24; // 0x73638
        v22 = function_7343e(v17);
        v23 = v17;
        while (v16 != v24) {
            int64_t v26 = v25;
            v24 = v26 + 48;
            v25 = v24;
            v22 = function_7343e(v26);
            v23 = v26;
        }
    }
    int64_t result = v22; // 0x7364e
    if (v23 != 0) {
        // 0x73650
        result = function_4eeb50(v23);
    }
    // 0x73655
    *(int64_t *)a1 = v4;
    *v1 = 48 * (0xaaaaaaaaaaaaaab * (v12 - v14) / 16 & 0xfffffffffffffff) + v15;
    *(int64_t *)(a1 + 16) = v4 + 48 * v3;
    return result;
}

// Address range: 0xc559f - 0xc57b8
int64_t function_c559f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xc559f
    int64_t v1; // 0xc559f
    int64_t result = a4 + 0x6deb3f60 + (0x100000000 * v1 - 0x6deb3f6000000000) / 0x100000000 & 0xffffffff; // 0xc56c6
    int64_t v2; // bp-16, 0xc559f
    int64_t v3 = (int64_t)&v2; // 0xc56d4
    int64_t * v4 = (int64_t *)(v3 + 8); // 0xc5771
    *v4 = result;
    *(int64_t *)(v3 + 16) = v3 + 40;
    *v4 = *(int64_t *)(v3 + 24);
    return result;
}

// Address range: 0x36ad9e - 0x36ad9f
int64_t function_36ad9e(void) {
    // 0x36ad9e
    int64_t result; // 0x36ad9e
    return result;
}

// Address range: 0x36ad9f - 0x36ae7c
int64_t function_36ad9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)a2; // 0x36ae3d
    *v1 = a6;
    *(int64_t *)(a2 + 32) = a2;
    int64_t * v2 = (int64_t *)(a2 + 8); // 0x36ae45
    int64_t * v3 = (int64_t *)(a2 - 8); // 0x36ae48
    *v3 = *v2;
    *v2 = a5;
    *v1 = a2 + 24;
    *v3 = *v2;
    return function_c57b8(a1, a2, a3);
}

// Address range: 0x36ae7c - 0x36afd2
int64_t function_36ae7c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x36ae7c
    int64_t v1; // bp-56, 0x36ae7c
    int64_t v2 = (int64_t)&v1; // 0x36af99
    v1 = v2;
    *(int64_t *)(v2 + 32) = v1;
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x36afa9
    int64_t v4 = *v3; // 0x36afa9
    v1 = v4;
    *(int64_t *)(v2 - 8) = v4;
    int64_t v5 = *(int64_t *)(v2 + 16); // 0x36afbb
    *v3 = v5;
    v1 = v5;
    return function_c57b8(a1, a2, a3);
}

// Address range: 0x49546d - 0x49546e
int64_t function_49546d(void) {
    // 0x49546d
    int64_t result; // 0x49546d
    return result;
}

// Address range: 0x49546e - 0x4956a4
int64_t function_49546e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x49546e
    int64_t v1; // 0x49546e
    uint64_t v2 = v1;
    function_4c1b30(v1, v1);
    if (v2 < v1) {
        if (v1 != 0) {
            goto lab_0x495484;
        } else {
            goto lab_0x4954aa;
        }
    } else {
        goto lab_0x495484;
    }
  lab_0x495484:;
    int64_t v3 = 0;
    *(char *)(2 * v1 + v3) = *(char *)(v3 + v1);
    int64_t v4 = v3 + 1; // 0x495498
    while (16 > v4) {
        // 0x495490
        v3 = v4;
        *(char *)(2 * v1 + v3) = *(char *)(v3 + v1);
        v4 = v3 + 1;
    }
    if (v2 > v1) {
        function_495420();
    }
    goto lab_0x4954aa;
  lab_0x4954aa:;
    // 0x4954aa
    int64_t v5; // bp+96, 0x49546e
    function_4c16b0(&v5);
    int64_t v6 = function_4c14d0(4); // 0x4954b9
    if (v6 == 0) {
        // 0x495699
        return function_495390();
    }
    // 0x4954c7
    if ((int32_t)function_4c1770(&v5, v6, 1) != 0) {
        function_495390();
    }
    // 0x4954e4
    function_4c19e0(&v5, a4 - a3 + a5, a3);
    int64_t v7; // bp+148, 0x49546e
    function_4c1af0(&v5, &v7, a1);
    int64_t v8; // bp+128, 0x49546e
    int64_t v9 = (int64_t)&v8; // 0x49551e
    int64_t v10 = (int64_t)&v5; // 0x495526
    function_4c1b30(v10, v9);
    int64_t v11; // bp+64, 0x49546e
    if (v2 != 0) {
        int64_t v12 = (int64_t)&v11; // 0x495559
        uint64_t v13 = 0; // 0x49557c
        v13 += 20;
        function_4c1bc0(&v5);
        function_4c1af0(&v5, &v8, a2);
        function_4c1b30(v10, v12);
        function_4c1bc0(&v5);
        function_4c1af0(&v5, &v8, 20);
        function_4c1b30(v10, v9);
        uint64_t v14 = v2 < v13 ? v2 : 20;
        int64_t v15 = 0; // 0x4955e6
        char * v16; // 0x4955fd
        int64_t v17; // 0x495601
        v16 = (char *)(v15 + a6);
        *v16 = *v16 ^ *(char *)(v15 + v12);
        v17 = v15 + 1;
        v15 = v17;
        while (v14 > v17) {
            // 0x4955f8
            v16 = (char *)(v15 + a6);
            *v16 = *v16 ^ *(char *)(v15 + v12);
            v17 = v15 + 1;
            v15 = v17;
        }
        int64_t v18 = a6 + 20; // 0x495611
        while (v2 > v13) {
            int64_t v19 = v18;
            v13 += 20;
            function_4c1bc0(&v5);
            function_4c1af0(&v5, &v8, a2);
            function_4c1b30(v10, v12);
            function_4c1bc0(&v5);
            function_4c1af0(&v5, &v8, 20);
            function_4c1b30(v10, v9);
            v14 = v2 < v13 ? v2 : 20;
            v15 = 0;
            v16 = (char *)(v15 + v19);
            *v16 = *v16 ^ *(char *)(v15 + v12);
            v17 = v15 + 1;
            v15 = v17;
            while (v14 > v17) {
                // 0x4955f8
                v16 = (char *)(v15 + v19);
                *v16 = *v16 ^ *(char *)(v15 + v12);
                v17 = v15 + 1;
                v15 = v17;
            }
            // 0x49560a
            v18 = v19 + 20;
        }
    }
    // 0x49561c
    function_4c16b0(&v5);
    *(char *)v9 = 0;
    int64_t v20 = v9 + 1; // 0x49563b
    int64_t v21 = v20; // 0x495642
    int64_t v22; // bp+256, 0x49546e
    while (v20 != (int64_t)&v22) {
        // 0x495630
        *(char *)v21 = 0;
        v20 = v21 + 1;
        v21 = v20;
    }
    int64_t v23 = (int64_t)&v11; // 0x49564b
    *(char *)v23 = 0;
    int64_t v24 = v23 + 1; // 0x495654
    v23 = v24;
    int64_t v25; // bp+84, 0x49546e
    while (v24 != (int64_t)&v25) {
        // 0x495650
        *(char *)v23 = 0;
        v24 = v23 + 1;
        v23 = v24;
    }
    // 0x49565d
    return function_495390();
}

// Address range: 0x4b8d92 - 0x4b8d93
int64_t function_4b8d92(void) {
    // 0x4b8d92
    int64_t result; // 0x4b8d92
    return result;
}

// Address range: 0x4b8d94 - 0x4b8d9f
int64_t function_4b8d94(void) {
    // 0x4b8d94
    int64_t v1; // 0x4b8d94
    int32_t * v2 = (int32_t *)(v1 - 117); // 0x4b8d94
    *v2 = *v2 - 1;
    return function_4b8c0a();
}

// Address range: 0x4b8da0 - 0x4b8f15
int64_t function_4b8da0(int64_t a1, int64_t file_path) {
    struct _IO_FILE * file = fopen((char *)file_path, "rb"); // 0x4b8dca
    if (file == NULL) {
        // 0x4b8e9c
        return 0xffffcb80;
    }
    // 0x4b8ddb
    fseek(file, 0, SEEK_END);
    int32_t curr_file_offset = ftell(file); // 0x4b8ded
    if (curr_file_offset == -1) {
        // 0x4b8f06
        fclose(file);
        // 0x4b8e9c
        return 0xffffcb80;
    }
    int64_t v1 = curr_file_offset; // 0x4b8ded
    int64_t size = v1 + 1; // 0x4b8dff
    fseek(file, 0, SEEK_SET);
    int64_t * mem = calloc(1, (int32_t)size); // 0x4b8e18
    if (mem == NULL) {
        // 0x4b8ef0
        fclose(file);
        // 0x4b8e9c
        return 0xffffcc00;
    }
    int32_t items_read = fread(mem, 1, curr_file_offset, file); // 0x4b8e37
    fclose(file);
    if (curr_file_offset != items_read) {
        // 0x4b8ec0
        free(mem);
        // 0x4b8e9c
        return 0xffffcb80;
    }
    int64_t v2 = (int64_t)mem; // 0x4b8e18
    int64_t v3 = v2 + v1;
    *(char *)v3 = 0;
    int64_t v4; // 0x4b8da0
    int64_t v5; // 0x4b8da0
    if (strstr((char *)mem, "-----BEGIN ") == NULL) {
        int64_t v6 = function_4b8bc0(a1, v2, v1); // 0x4b8ee1
        v4 = v3;
        v5 = v6;
        if (curr_file_offset == 0) {
            // 0x4b8e8c
            free(mem);
            // 0x4b8e9c
            return v6 & 0xffffffff;
        }
    } else {
        int64_t v7 = function_4b8bc0(a1, v2, size); // 0x4b8e6b
        v4 = size + v2;
        v5 = v7;
    }
    int64_t v8 = v2; // 0x4b8e77
    *(char *)v8 = 0;
    v8++;
    while (v8 != v4) {
        // 0x4b8e80
        *(char *)v8 = 0;
        v8++;
    }
    // 0x4b8e8c
    free(mem);
    // 0x4b8e9c
    return v5 & 0xffffffff;
}

// Address range: 0x4b8f20 - 0x4b8fbe
int64_t function_4b8f20(int64_t a1) {
    // 0x4b8f20
    int64_t v1; // bp-264, 0x4b8f20
    function_4b82e0(&v1);
    if ((int32_t)a1 == 0) {
        int64_t v2 = function_4b8bc0((int64_t)&v1, (int64_t)"-----BEGIN DH PARAMETERS-----\r\nMIGHAoGBAJ419DBEOgmQTzo5qXl5fQcN9TN455wkOL7052HzxxRVMyhYmwQcgJvh\r\n1sa18fyfR9OiVEMYglOpkqVoGLN7qd5aQNNi5W7/C+VBdHTBJcGZJyyP5B3qcz32\r\n9mLJKudlVudV0Qxk5qUJaPZ/xupz0NyoVpviuiBOI1gNi8ovSXWzAgEC\r\n-----END DH PARAMETERS-----\r\n", 251); // 0x4b8f47
        // 0x4b8f58
        function_4b8b30(&v1);
        return (int32_t)v2 != 0;
    }
    // 0x4b8f70
    printf("  DHM parameter load: ");
    int64_t v3 = function_4b8bc0((int64_t)&v1, (int64_t)"-----BEGIN DH PARAMETERS-----\r\nMIGHAoGBAJ419DBEOgmQTzo5qXl5fQcN9TN455wkOL7052HzxxRVMyhYmwQcgJvh\r\n1sa18fyfR9OiVEMYglOpkqVoGLN7qd5aQNNi5W7/C+VBdHTBJcGZJyyP5B3qcz32\r\n9mLJKudlVudV0Qxk5qUJaPZ/xupz0NyoVpviuiBOI1gNi8ovSXWzAgEC\r\n-----END DH PARAMETERS-----\r\n", 251); // 0x4b8f8d
    int64_t result; // 0x4b8f20
    if ((int32_t)v3 == 0) {
        // 0x4b8fb0
        puts("passed\n");
        result = v3 & 0xffffffff;
    } else {
        // 0x4b8f98
        puts("failed");
        result = 1;
    }
    // 0x4b8f58
    function_4b8b30(&v1);
    return result;
}

// Address range: 0x4ce973 - 0x4ceb7e
int64_t function_4ce973(int64_t a1) {
    int64_t * mem = calloc((int32_t)&g2, 1); // 0x4ce99e
    if (mem == NULL) {
        // 0x4ceb3a
        if ((int32_t)a1 != 0) {
            // 0x4ceb70
            puts("Buffer allocation failed");
        }
        // 0x4ceb44
        return 1;
    }
    // 0x4ce9af
    int64_t v1; // bp-280, 0x4ce973
    function_4cdd20(&v1);
    int64_t v2 = 1;
    int64_t v3 = v2 + 0xffffffff; // 0x4ce9bf
    int64_t v4 = 0x100000000 * v3;
    int32_t v5 = v3; // 0x4ce9d3
    int32_t v6 = -3 * ((int32_t)(0x55555556 * (v4 >> 32) / 0x100000000) - (v5 >> 31)) + v5; // 0x4ce9e3
    int32_t v7 = v5 - 2; // 0x4ce9e5
    bool v8 = v7 == 0 | v7 < 0 != (1 - v5 & v5) < 0; // 0x4ce9e9
    int64_t v9 = v8 ? 3 : 4; // 0x4ce9ec
    if ((int32_t)a1 != 0) {
        // 0x4ceaa0
        printf("  SHA-%d test #%d: ", 128 * v9, (int64_t)(v6 + 1));
    }
    // 0x4ce9f8
    function_4cdde0(&v1, (int64_t)v8);
    int64_t v10; // 0x4ce973
    int64_t v11; // 0x4cea2d
    int32_t v12; // 0x4ceafa
    int32_t v13; // 0x4cea26
    if (v6 == 2) {
        // 0x4ceac8
        __asm_rep_stosq_memset((char *)mem, 0x6161616161616161, 125);
        v12 = (int64_t)&g1;
        function_4ce440(&v1, (int64_t)mem, (int32_t)&g1, 0);
        while (v12 != 1) {
            // 0x4ceae8
            v12--;
            function_4ce440(&v1, (int64_t)mem, (int32_t)&g1, 0);
        }
    } else {
        // 0x4cea0d
        v10 = 0x100000000 * (int64_t)v6;
        v13 = *(int32_t *)((v10 >> 30) + (int64_t)&g3);
        v11 = v10 >> 28;
        function_4ce440(&v1, (int64_t)v6 + (int64_t)&g4 - v11 + (v10 >> 25), v13, v11);
    }
    // 0x4cea43
    int64_t str; // bp-344, 0x4ce973
    function_4ce580(&v1, &str);
    int64_t v14; // 0x4ce973
    while (memcmp(&str, (int64_t *)((v4 >> 26) + (int64_t)&g5), 16 * (int32_t)v9) == 0) {
        if ((int32_t)a1 != 0) {
            // 0x4ceb04
            puts("passed");
            if (v2 == 6) {
                // 0x4ceb1a
                putchar(10);
                v14 = 0;
                goto lab_0x4ceb26;
            }
        } else {
            // 0x4cea87
            v14 = 0;
            if (v2 == 6) {
                goto lab_0x4ceb26;
            }
        }
        // 0x4cea91
        v2 = v2 + 1 & 0xffffffff;
        v3 = v2 + 0xffffffff;
        v4 = 0x100000000 * v3;
        v5 = v3;
        v6 = -3 * ((int32_t)(0x55555556 * (v4 >> 32) / 0x100000000) - (v5 >> 31)) + v5;
        v7 = v5 - 2;
        v8 = v7 == 0 | v7 < 0 != (1 - v5 & v5) < 0;
        v9 = v8 ? 3 : 4;
        if ((int32_t)a1 != 0) {
            // 0x4ceaa0
            printf("  SHA-%d test #%d: ", 128 * v9, (int64_t)(v6 + 1));
        }
        // 0x4ce9f8
        function_4cdde0(&v1, (int64_t)v8);
        if (v6 == 2) {
            // 0x4ceac8
            __asm_rep_stosq_memset((char *)mem, 0x6161616161616161, 125);
            v12 = (int64_t)&g1;
            function_4ce440(&v1, (int64_t)mem, (int32_t)&g1, 0);
            while (v12 != 1) {
                // 0x4ceae8
                v12--;
                function_4ce440(&v1, (int64_t)mem, (int32_t)&g1, 0);
            }
        } else {
            // 0x4cea0d
            v10 = 0x100000000 * (int64_t)v6;
            v13 = *(int32_t *)((v10 >> 30) + (int64_t)&g3);
            v11 = v10 >> 28;
            function_4ce440(&v1, (int64_t)v6 + (int64_t)&g4 - v11 + (v10 >> 25), v13, v11);
        }
        // 0x4cea43
        function_4ce580(&v1, &str);
    }
    // 0x4ceb58
    v14 = 1;
    if ((int32_t)a1 != 0) {
        // 0x4ceb62
        puts("failed");
        v14 = 1;
    }
    goto lab_0x4ceb26;
  lab_0x4ceb26:
    // 0x4ceb26
    function_4cddb0(&v1);
    free(mem);
    // 0x4ceb44
    return v14 & 0xffffffff;
}

// Address range: 0x4ceb80 - 0x4ceb99
int64_t function_4ceb80(void) {
    // 0x4ceb80
    *(int32_t *)&g14 = 1;
    int64_t sig_handler; // 0x4ceb80
    return (int64_t)signal((int32_t)sig_handler, 0x4ceb80);
}

// Address range: 0x4edf1f - 0x4edf31
int64_t function_4edf1f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4edf1f
    int64_t v1; // 0x4edf1f
    bool v2; // 0x4edf1f
    int32_t v3 = *(int32_t *)((4 * (v1 + 108 + (int64_t)v2) & 1020) + a3); // 0x4edf27
    return (int64_t)v3 + a3;
}

// Address range: 0x4edf31 - 0x4edf4e
int64_t function_4edf31(void) {
    // 0x4edf31
    int64_t v1; // 0x4edf31
    *(int16_t *)(v1 - 8) = 256;
    return 2;
}

// Address range: 0x4edf4e - 0x4edf9f
int64_t function_4edf4e(void) {
    // 0x4edf4e
    int64_t v1; // 0x4edf4e
    *(int32_t *)(v1 + 8) = 2;
    *(int32_t *)(v1 + 16) = 1;
    int64_t * v2 = (int64_t *)(v1 + 48); // 0x4edf66
    *v2 = *(int64_t *)(v1 + 264);
    *(char *)(v1 + 40) = 1;
    *v2 = *v2 * (int64_t)*(char *)(v1 + 29);
    return 2;
}

// Address range: 0x4edf9f - 0x4edfc7
int64_t function_4edf9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4edf9f
    int64_t v1; // 0x4edf9f
    *(char *)(v1 - 16) = 0;
    function_4e9d80(v1, v1);
    *(int32_t *)(v1 + 16) = 2;
    return (int64_t)*(int32_t *)(v1 + 8);
}

// Address range: 0x4edfc7 - 0x4ee006
int64_t function_4edfc7(void) {
    // 0x4edfc7
    int64_t v1; // 0x4edfc7
    *(int32_t *)(v1 + 8) = 3;
    *(int32_t *)(v1 + 20) = (int32_t)*(int64_t *)(v1 + 288);
    *(int16_t *)(v1 + 16) = (int16_t)*(int64_t *)(v1 + 312);
    return 3;
}

// Address range: 0x4ee006 - 0x4ee02d
int64_t function_4ee006(void) {
    // 0x4ee006
    int64_t v1; // 0x4ee006
    function_4e9d80(v1, v1);
    *(int32_t *)(v1 + 16) = 4;
    return (int64_t)*(int32_t *)(v1 + 8);
}

// Address range: 0x4ee02d - 0x4ee034
int64_t function_4ee02d(void) {
    // 0x4ee02d
    int64_t result; // 0x4ee02d
    return result;
}

// Address range: 0x4ee034 - 0x4ee03b
int64_t function_4ee034(void) {
    // 0x4ee034
    int64_t result; // 0x4ee034
    return result;
}

// Address range: 0x4ee03b - 0x4ee055
int64_t function_4ee03b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4ee03b
    int64_t v1; // 0x4ee03b
    return function_4e9d80(v1, v1);
}

// Address range: 0x4ee058 - 0x4ee077
int64_t function_4ee058(void) {
    // 0x4ee058
    int64_t v1; // 0x4ee058
    *(int16_t *)(v1 - 8) = 256;
    return 3;
}

// Address range: 0x4ee077 - 0x4ee096
int64_t function_4ee077(void) {
    // 0x4ee077
    int64_t v1; // 0x4ee077
    *(int16_t *)(v1 - 8) = 256;
    return 5;
}

// Address range: 0x4ee096 - 0x4ee0aa
int64_t function_4ee096(void) {
    // 0x4ee096
    return 3;
}

// Address range: 0x4ee0aa - 0x4ee0be
int64_t function_4ee0aa(void) {
    // 0x4ee0aa
    return 6;
}

// Address range: 0x4ee0c0 - 0x4ee0c9
int64_t function_4ee0c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4ee0c0
    int64_t result; // 0x4ee0c0
    *(int16_t *)(result - 8) = (int16_t)a4;
    return result;
}

// Address range: 0x4ee0c9 - 0x4ee122
int64_t function_4ee0c9(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a2 + 8); // 0x4ee0c9
    unsigned char result = *v1; // 0x4ee0c9
    if (result != 2) {
        // 0x4ee0d1
        *v1 = 9;
        return result;
    }
    int64_t result2 = (int64_t)(*(int32_t *)(a2 + 32) != 2) | 8; // 0x4ee117
    *v1 = (char)result2;
    return result2;
}

// Address range: 0x4fc839 - 0x4fc8b6
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_4fc839(int64_t a1, int64_t a2) {
    // 0x4fc839
    function_54cb80();
    *(int64_t *)(a1 + 216) = 0;
    *(char *)(a1 + 224) = 0;
    *(char *)(a1 + 225) = 0;
    *(int64_t *)(a1 + 232) = 0;
    *(int64_t *)(a1 + 240) = 0;
    *(int64_t *)(a1 + 248) = 0;
    *(int64_t *)(a1 + 256) = 0;
    *(int64_t *)a1 = (int64_t)&g9;
    return function_4fc7e0(a1, a2);
}

// Address range: 0x4fc8b6 - 0x4fc935
int64_t function_4fc8b6(int64_t a1, int64_t a2) {
    // 0x4fc8b6
    int64_t v1; // 0x4fc8b6
    int64_t v2 = v1;
    function_54cf10(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v2);
    function_54cf90();
    function_4fc380(v2, v2 + 208);
    int64_t * v3 = (int64_t *)(a2 + 216); // 0x4fc8f0
    *v3 = 0;
    *(int64_t *)(v2 + 216) = *v3;
    *(char *)(v2 + 224) = *(char *)(a2 + 224);
    unsigned char result = *(char *)(a2 + 225); // 0x4fc916
    *(int64_t *)(v2 + 232) = 0;
    *(char *)(v2 + 225) = result;
    return result;
}

// Address range: 0x4fc940 - 0x4fc9c6
int64_t function_4fc940(int64_t a1, int64_t a2) {
    // 0x4fc940
    function_54d0a0();
    function_4fc380(a1, a1 + 208);
    function_4fc380(a2, a2 + 208);
    int64_t * v1 = (int64_t *)(a1 + 216); // 0x4fc96f
    int64_t * v2 = (int64_t *)(a2 + 216); // 0x4fc976
    *v1 = *v2;
    *v2 = *v1;
    char * v3 = (char *)(a2 + 224); // 0x4fc98b
    char * v4 = (char *)(a1 + 224); // 0x4fc992
    *v4 = *v3;
    *v3 = *v4;
    char * v5 = (char *)(a2 + 225); // 0x4fc9a5
    char * v6 = (char *)(a1 + 225); // 0x4fc9ac
    unsigned char result = *v6; // 0x4fc9ac
    *v6 = *v5;
    *v5 = result;
    return result;
}

// Address range: 0x4fc9d0 - 0x4fca35
int64_t function_4fc9d0(int64_t a1, int64_t a2) {
    // 0x4fc9d0
    function_54cf90();
    function_4fc380(a1, a1 + 208);
    int64_t * v1 = (int64_t *)(a2 + 216); // 0x4fc9f0
    *v1 = 0;
    *(int64_t *)(a1 + 216) = *v1;
    *(char *)(a1 + 224) = *(char *)(a2 + 224);
    unsigned char result = *(char *)(a2 + 225); // 0x4fca16
    *(int64_t *)(a1 + 232) = 0;
    *(char *)(a1 + 225) = result;
    return result;
}

// Address range: 0x4fca40 - 0x4fca48
int64_t function_4fca40(int64_t a1) {
    // 0x4fca40
    int64_t v1; // 0x4fca40
    return v1 & -256 | (int64_t)((*(char *)(a1 + 32) & 5) == 0);
}

// Address range: 0x4fca50 - 0x4fca58
int64_t function_4fca50(int64_t a1) {
    // 0x4fca50
    int64_t v1; // 0x4fca50
    return v1 & -256 | (int64_t)((*(char *)(a1 + 32) & 5) != 0);
}

// Address range: 0x4fca60 - 0x4fca64
int64_t function_4fca60(int64_t a1) {
    // 0x4fca60
    return (int64_t)*(int32_t *)(a1 + 32);
}

// Address range: 0x549b79 - 0x549b82
int64_t function_549b79(int64_t a1, int64_t a2, int64_t a3) {
    // 0x549b79
    int64_t v1; // 0x549b79
    *(int64_t *)(v1 + 16) = a3;
    return function_549b2c();
}

// Address range: 0x549b90 - 0x549b95
int64_t function_549b90(void) {
    // 0x549b90
    return function_549b10();
}

// Address range: 0x549ba0 - 0x549ba4
int64_t function_549ba0(int64_t result) {
    // 0x549ba0
    return result;
}

// Address range: 0x549bb0 - 0x549bb4
int64_t function_549bb0(int64_t result) {
    // 0x549bb0
    return result;
}

// Address range: 0x549bc0 - 0x549c2f
int64_t function_549bc0(int64_t a1, uint64_t result, int64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x549bc0
    if (v1 >= result) {
        // 0x549bcc
        return result;
    }
    // 0x549bce
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", a3, result, v1);
    uint64_t v2 = a3 - 0x4863696877282074; // 0x549bfd
    if (v2 >= result) {
        // 0x549bcc
        return 0x1fffffffffffffff;
    }
    // 0x549c08
    function_542590(v1, v2);
    uint64_t v3 = *(int64_t *)(v1 + 8) - v2; // 0x549c24
    return v3 > result ? result : v3;
}

// Address range: 0x549c30 - 0x549c4d
int64_t function_549c30(uint64_t a1, uint64_t a2) {
    int64_t result = 1; // 0x549c3b
    if (a1 <= a2) {
        uint64_t v1 = 4 * *(int64_t *)(a1 + 8) + a1; // 0x549c41
        result = v1 & -256 | (int64_t)(v1 < a2);
    }
    // 0x549c4b
    return result;
}

// Address range: 0x549c50 - 0x549c6d
int64_t function_549c50(int64_t wstr, int64_t wstr2, int64_t n) {
    // 0x549c50
    if (n == 1) {
        // 0x549c68
        *(int32_t *)wstr = (int32_t)wstr2;
        return wstr2 & 0xffffffff;
    }
    if (n != 0) {
        // 0x549c60
        return (int64_t)wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
    }
    // 0x549c5b
    int64_t result; // 0x549c50
    return result;
}

// Address range: 0x549c70 - 0x549c8d
int64_t function_549c70(int64_t wstr, int64_t wstr2, int64_t n) {
    // 0x549c70
    if (n == 1) {
        // 0x549c88
        *(int32_t *)wstr = (int32_t)wstr2;
        return wstr2 & 0xffffffff;
    }
    if (n != 0) {
        // 0x549c80
        return (int64_t)wmemmove((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
    }
    // 0x549c7b
    int64_t result; // 0x549c70
    return result;
}

// Address range: 0x549c90 - 0x549cb3
int64_t function_549c90(int64_t wstr, int64_t n, int64_t wc) {
    int64_t result = wc & 0xffffffff; // 0x549c94
    if (n == 1) {
        // 0x549cb0
        *(int32_t *)wstr = (int32_t)wc;
        return result;
    }
    if (n != 0) {
        // 0x549ca0
        return (int64_t)wmemset((int32_t *)wstr, (int32_t)wc, (int32_t)n);
    }
    // 0x549c9d
    return result;
}

// Address range: 0x549cc0 - 0x549ce5
int64_t function_549cc0(int64_t wstr, int64_t wstr2, int64_t a3) {
    int64_t n = a3 - wstr2 >> 2; // 0x549cc3
    if (n == 1) {
        // 0x549ce0
        *(int32_t *)wstr = (int32_t)wstr2;
        return wstr2 & 0xffffffff;
    }
    if (n != 0) {
        // 0x549cd8
        return (int64_t)wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
    }
    // 0x549cd2
    int64_t result; // 0x549cc0
    return result;
}

// Address range: 0x549cf0 - 0x549d15
int64_t function_549cf0(int64_t wstr, int64_t wstr2, int64_t a3) {
    int64_t n = a3 - wstr2 >> 2; // 0x549cf3
    if (n == 1) {
        // 0x549d10
        *(int32_t *)wstr = (int32_t)wstr2;
        return wstr2 & 0xffffffff;
    }
    if (n != 0) {
        // 0x549d08
        return (int64_t)wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
    }
    // 0x549d02
    int64_t result; // 0x549cf0
    return result;
}

// Address range: 0x549d20 - 0x549d45
int64_t function_549d20(int64_t wstr, int64_t wstr2, int64_t a3) {
    int64_t n = a3 - wstr2 >> 2; // 0x549d23
    if (n == 1) {
        // 0x549d40
        *(int32_t *)wstr = (int32_t)wstr2;
        return wstr2 & 0xffffffff;
    }
    if (n != 0) {
        // 0x549d38
        return (int64_t)wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
    }
    // 0x549d32
    int64_t result; // 0x549d20
    return result;
}

// Address range: 0x549d50 - 0x549d75
int64_t function_549d50(int64_t wstr, int64_t wstr2, int64_t a3) {
    int64_t n = a3 - wstr2 >> 2; // 0x549d53
    if (n == 1) {
        // 0x549d70
        *(int32_t *)wstr = (int32_t)wstr2;
        return wstr2 & 0xffffffff;
    }
    if (n != 0) {
        // 0x549d68
        return (int64_t)wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
    }
    // 0x549d62
    int64_t result; // 0x549d50
    return result;
}

// Address range: 0x549d80 - 0x549da0
int64_t function_549d80(int64_t a1, int64_t a2) {
    uint64_t v1 = a1 - a2; // 0x549d80
    int64_t result = 0x7fffffff; // 0x549d8f
    if (v1 <= 0x7fffffff) {
        int64_t v2 = v1 + 0x80000000; // 0x549d94
        result = v2 < 0 == ((v2 ^ v1) & (v1 ^ -0x8000000000000000)) < 0 ? v1 & 0xffffffff : 0x80000000;
    }
    // 0x549d9e
    return result;
}

// Address range: 0x54c18c - 0x54c18d
int64_t function_54c18c(void) {
    // 0x54c18c
    int64_t result; // 0x54c18c
    return result;
}

// Address range: 0x54c18d - 0x54c267
int64_t function_54c18d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11) {
    // 0x54c18d
    int64_t wstr; // 0x54c18d
    uint64_t v1 = wstr;
    bool v2; // 0x54c18d
    if (true != !v2) {
        // 0x54c18f
        return v1 & 0xffffffff;
    }
    int64_t v3 = wstr & -256 | (int64_t)__asm_in((int16_t)a3); // 0x54c20e
    char * v4 = (char *)(v3 - 117); // 0x54c20f
    char v5 = a4; // 0x54c20f
    *v4 = *v4 | v5;
    char * v6 = (char *)(v3 - 119); // 0x54c213
    *v6 = *v6 | v5;
    int64_t v7 = 0x100000000 * v3 >> 32; // 0x54c216
    uint64_t v8 = v7 * v7 & 0xffffffff; // 0x54c216
    int64_t n = v8 > v1 ? v1 : v8; // 0x54c225
    if (n != 0) {
        int32_t result = wmemcmp((int32_t *)wstr, (int32_t *)wstr, (int32_t)n); // 0x54c235
        if (result != 0) {
            // 0x54c25c
            return result;
        }
    }
    uint64_t v9 = v1 - wstr; // 0x54c23e
    int64_t result2 = 0x7fffffff; // 0x54c24d
    if (v9 <= 0x7fffffff) {
        int64_t v10 = v9 + 0x80000000; // 0x54c252
        result2 = v10 < 0 == ((v10 ^ v9) & (v9 ^ -0x8000000000000000)) < 0 ? v9 & 0xffffffff : 0x80000000;
    }
    // 0x54c25c
    return result2;
}

// Address range: 0x54c270 - 0x54c386
int64_t function_54c270(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, uint64_t a5) {
    uint64_t wstr2 = *(int64_t *)(a1 + 8); // 0x54c27b
    if (wstr2 >= a2) {
        uint64_t v1 = wstr2 - a2; // 0x54c284
        uint64_t v2 = v1 > a3 ? a3 : v1; // 0x54c293
        int32_t * wstr = (int32_t *)a4; // 0x54c297
        uint64_t v3 = (int64_t)wcslen(wstr); // 0x54c297
        int64_t n = v2 < v3 ? v2 : v3; // 0x54c2a5
        if (n != 0) {
            int32_t result = wmemcmp((int32_t *)(4 * a2 + a4), wstr, (int32_t)n); // 0x54c2e3
            if (result != 0) {
                // 0x54c2ec
                return result;
            }
        }
        uint64_t v4 = v2 - v3; // 0x54c2ae
        int64_t result2 = 0x7fffffff; // 0x54c2bd
        if (v4 <= 0x7fffffff) {
            int64_t v5 = v4 + 0x80000000; // 0x54c2c2
            result2 = v5 < 0 == ((v5 ^ v4) & (v4 ^ -0x8000000000000000)) < 0 ? v4 & 0xffffffff : 0x80000000;
        }
        // 0x54c2cc
        return result2;
    }
    int64_t result3 = function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", (int64_t)"basic_string::compare", a2, wstr2); // 0x54c31c
    if (((int64_t)"basic_string::compare" < 0x6863696877282073 || (int64_t)"basic_string::compare" == 0x6863696877282073) ^ true) {
        // 0x54c2cc
        return result3;
    }
    uint64_t v6 = a2 < 0x6863696877282073 - (int64_t)"basic_string::compare" ? a2 : 0x6863696877282073 - (int64_t)"basic_string::compare"; // 0x54c324
    int64_t n2 = v6 > a5 ? a5 : v6; // 0x54c32e
    if (n2 != 0) {
        int32_t result4 = wmemcmp((int32_t *)(4 * (int64_t)"basic_string::compare" + 0x6f705f5f203a7325), (int32_t *)wstr2, (int32_t)n2); // 0x54c36f
        if (result4 != 0) {
            // 0x54c37d
            return result4;
        }
    }
    uint64_t v7 = v6 - a5; // 0x54c337
    int64_t result5 = 0x7fffffff; // 0x54c346
    if (v7 <= 0x7fffffff) {
        int64_t v8 = v7 + 0x80000000; // 0x54c34b
        result5 = v8 < 0 == ((v8 ^ v7) & (v7 ^ -0x8000000000000000)) < 0 ? v7 & 0xffffffff : 0x80000000;
    }
    // 0x54c2cc
    return result5;
}

// Address range: 0x551840 - 0x55184c
int64_t function_551840(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x551840
    return function_48f642(a1, a2, a3, a4, *(int64_t *)(a4 - 24));
}

// Address range: 0x551850 - 0x5518dc
int64_t function_551850(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, uint64_t a6) {
    uint64_t wstr = *(int64_t *)(a4 - 24); // 0x551853
    if (wstr >= a5) {
        uint64_t v1 = wstr - a5; // 0x55185a
        return function_48f642(a1, a2, a3, 4 * a5 + a4, v1 > a6 ? a6 : v1);
    }
    // 0x551875
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", (int64_t)"basic_string::replace", a5, wstr);
    return function_48f642((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int64_t)"basic_string::replace", a5, wstr, (int64_t)wcslen((int32_t *)wstr));
}

// Address range: 0x5518e0 - 0x5518f3
int64_t function_5518e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5518e0
    int64_t v1; // 0x5518e0
    return function_48f642(a1, a2 - a1 >> 2, a3 - a2 >> 2, v1, v1);
}

// Address range: 0x551900 - 0x55191a
int64_t function_551900(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x551900
    return function_48f642(a1, a2 - a1 >> 2, a3 - a2 >> 2, a4, *(int64_t *)(a4 - 24));
}

// Address range: 0x551920 - 0x55196b
int64_t function_551920(int64_t a1, int64_t a2, int64_t a3, int64_t wstr) {
    // 0x551920
    return function_48f642(a1, a2 - a1 >> 2, a3 - a2 >> 2, wstr, (int64_t)wcslen((int32_t *)wstr));
}

// Address range: 0x551970 - 0x55198a
int64_t function_551970(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x551970
    return function_48f642(a1, a2 - a1 >> 2, a3 - a2 >> 2, a4, a5 - a4 >> 2);
}

// Address range: 0x551990 - 0x5519aa
int64_t function_551990(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x551990
    return function_48f642(a1, a2 - a1 >> 2, a3 - a2 >> 2, a4, a5 - a4 >> 2);
}

// Address range: 0x5519b0 - 0x5519cb
int64_t function_5519b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x5519b0
    return function_48f642(a1, a2 - a1 >> 2, a3 - a2 >> 2, a4, 4 * a5 >> 2);
}

// Address range: 0x5519d0 - 0x5519ea
int64_t function_5519d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x5519d0
    return function_48f642(a1, a2 - a1 >> 2, a3 - a2 >> 2, a4, a5 - a4 >> 2);
}

// Address range: 0x5519f0 - 0x551a0a
int64_t function_5519f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x5519f0
    return function_48f642(a1, a2 - a1 >> 2, a3 - a2 >> 2, a4, a5 - a4 >> 2);
}

// Address range: 0x551a10 - 0x551a30
int64_t function_551a10(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x551a10
    *(int64_t *)a1 = function_551750(a2, 4 * a3 + a2, a4);
    return 0;
}

// Address range: 0x551a30 - 0x551a4f
int64_t function_551a30(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x551a30
    *(int64_t *)a1 = function_551750(a2, a3, a4);
    return 0;
}

// Address range: 0x551a50 - 0x551a5a
int64_t function_551a50(int64_t a1, int64_t a2) {
    // 0x551a50
    return a2 & -256 | (int64_t)(bool)(a1 == a2);
}

// Address range: 0x551a60 - 0x551a6a
int64_t function_551a60(int64_t a1, int64_t a2) {
    // 0x551a60
    return a2 & -256 | (int64_t)(bool)(a1 == a2);
}

// Address range: 0x556ab8 - 0x556b08
int64_t function_556ab8(int64_t a1) {
    uint64_t v1 = function_566390(&g22); // 0x556acb
    if (*(int64_t *)((int64_t)&g22 + 16) <= v1) {
        // 0x556b06
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)&g22 + 8); // 0x556ade
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x556ae2
    int64_t result = 0; // 0x556ae9
    if (v3 != 0) {
        int64_t v4 = function_20730(v3, 0x847658, 0x846888, 0); // 0x556afb
        result = v4 & -256 | (int64_t)(v4 != 0);
    }
    // 0x556b06
    return result;
}

// Address range: 0x556b10 - 0x556b58
int64_t function_556b10(int64_t a1) {
    uint64_t v1 = function_566390(&g20); // 0x556b1b
    if (*(int64_t *)((int64_t)&g20 + 16) <= v1) {
        // 0x556b56
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)&g20 + 8); // 0x556b2e
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x556b32
    int64_t result = 0; // 0x556b39
    if (v3 != 0) {
        int64_t v4 = function_20730(v3, (int64_t)&g11, 0x846990, 0); // 0x556b4b
        result = v4 & -256 | (int64_t)(v4 != 0);
    }
    // 0x556b56
    return result;
}

// Address range: 0x556b60 - 0x556ba8
int64_t function_556b60(int64_t a1) {
    uint64_t v1 = function_566390(&g21); // 0x556b6b
    if (*(int64_t *)((int64_t)&g21 + 16) <= v1) {
        // 0x556ba6
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)&g21 + 8); // 0x556b7e
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x556b82
    int64_t result = 0; // 0x556b89
    if (v3 != 0) {
        int64_t v4 = function_20730(v3, (int64_t)&g11, 0x846978, 0); // 0x556b9b
        result = v4 & -256 | (int64_t)(v4 != 0);
    }
    // 0x556ba6
    return result;
}

// Address range: 0x556bb0 - 0x556bf8
int64_t function_556bb0(int64_t a1) {
    uint64_t v1 = function_566390(&g19); // 0x556bbb
    if (*(int64_t *)((int64_t)&g19 + 16) <= v1) {
        // 0x556bf6
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)&g19 + 8); // 0x556bce
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x556bd2
    int64_t result = 0; // 0x556bd9
    if (v3 != 0) {
        int64_t v4 = function_20730(v3, (int64_t)&g11, 0x846838, 0); // 0x556beb
        result = v4 & -256 | (int64_t)(v4 != 0);
    }
    // 0x556bf6
    return result;
}

// Address range: 0x556c00 - 0x556c48
int64_t function_556c00(int64_t a1) {
    uint64_t v1 = function_566390(&g18); // 0x556c0b
    if (*(int64_t *)((int64_t)&g18 + 16) <= v1) {
        // 0x556c46
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)&g18 + 8); // 0x556c1e
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x556c22
    int64_t result = 0; // 0x556c29
    if (v3 != 0) {
        int64_t v4 = function_20730(v3, (int64_t)&g11, (int64_t)&g10, 0); // 0x556c3b
        result = v4 & -256 | (int64_t)(v4 != 0);
    }
    // 0x556c46
    return result;
}

// Address range: 0x556c50 - 0x556c98
int64_t function_556c50(int64_t a1) {
    uint64_t v1 = function_566390(&g17); // 0x556c5b
    if (*(int64_t *)((int64_t)&g17 + 16) <= v1) {
        // 0x556c96
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)&g17 + 8); // 0x556c6e
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x556c72
    int64_t result = 0; // 0x556c79
    if (v3 != 0) {
        int64_t v4 = function_20730(v3, (int64_t)&g11, 0x8469d8, 0); // 0x556c8b
        result = v4 & -256 | (int64_t)(v4 != 0);
    }
    // 0x556c96
    return result;
}

// Address range: 0x556ca0 - 0x556ce8
int64_t function_556ca0(int64_t a1) {
    uint64_t v1 = function_566390(&g16); // 0x556cab
    if (*(int64_t *)((int64_t)&g16 + 16) <= v1) {
        // 0x556ce6
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)&g16 + 8); // 0x556cbe
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x556cc2
    int64_t result = 0; // 0x556cc9
    if (v3 != 0) {
        int64_t v4 = function_20730(v3, (int64_t)&g11, 0x8468c0, 0); // 0x556cdb
        result = v4 & -256 | (int64_t)(v4 != 0);
    }
    // 0x556ce6
    return result;
}

// Address range: 0x5592cb - 0x5592d0
int64_t function_5592cb(void) {
    // 0x5592cb
    return function_559214();
}

// Address range: 0x5592d0 - 0x559327
int64_t function_5592d0(void) {
    // 0x5592d0
    int64_t v1; // 0x5592d0
    int64_t v2 = v1 + 1; // 0x5592d0
    int32_t * v3 = (int32_t *)(v1 - 144); // 0x5592d6
    *v3 = (int32_t)v2;
    int64_t v4 = function_565f30(); // 0x5592ec
    uint32_t v5 = *v3; // 0x5592f5
    int64_t v6 = *(int64_t *)(v1 - 152); // 0x5592ff
    int128_t v7 = __asm_movsd(*(int64_t *)(v1 - 104)); // 0x559306
    *(int64_t *)(v1 - 88) = v4;
    int64_t v8 = function_5088b0(v6, v1 + 15 - ((0x100000000 * v2 >> 32) + 30 & -16) & -16, (int64_t)v5, v7); // 0x55931a
    *(int32_t *)(v1 - 92) = (int32_t)v8;
    return function_5591c3();
}

// Address range: 0x559330 - 0x5594da
int64_t function_559330(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x559330
    int64_t v1; // 0x559330
    if (*(char *)(v1 + 32) == 0) {
        function_559214();
    }
    uint32_t v2 = (int32_t)a6; // 0x55933f
    if (v2 >= 3) {
        unsigned char v3 = *(char *)(v1 + 1); // 0x559341
        int64_t v4 = v3; // 0x559347
        if (v3 > 57) {
            v4 = function_559214();
        }
        int64_t v5 = v4; // 0x559357
        if (*(char *)(v1 + 2) >= 58) {
            v5 = function_559214();
        }
        // 0x55935d
        if ((char)v5 < 48) {
            function_559214();
        }
    }
    int64_t v6 = v1 - (2 * a4 + 30 & -16); // 0x559374
    int64_t v7 = v6 + 15 & -16; // 0x55937f
    int32_t * v8; // 0x559330
    int64_t v9; // 0x559330
    int64_t v10; // 0x559330
    int64_t v11; // 0x559330
    int32_t v12; // 0x559330
    if (((char)v1 - 43 & -3) != 0) {
        int64_t v13 = v1 - 92; // 0x5593af
        v12 = 0;
        v8 = (int32_t *)v13;
        v9 = v13;
        v11 = v7;
    } else {
        int64_t v14 = v1 - 92;
        int32_t * v15 = (int32_t *)v14;
        *v15 = v2 - 1;
        *(char *)v7 = (char)v1;
        v12 = 1;
        v8 = v15;
        v9 = v14;
        v11 = v7 | 1;
        v10 = v1 + 1;
    }
    int64_t v16 = *(int64_t *)(v1 + 24); // 0x5593b3
    int64_t v17 = *(int64_t *)(v1 + 16); // 0x5593b7
    int64_t * v18 = (int64_t *)(v1 - 136); // 0x5593bb
    *(int64_t *)(v6 - 8) = v9;
    int64_t v19 = v6 - 16;
    *(int64_t *)v19 = v10;
    *(int64_t *)(v1 - 104) = v7;
    function_556e50(*v18, v17, v16, *(char *)(v1 + 73), 0, v11);
    int32_t v20 = *v8 + v12; // 0x5593ce
    uint64_t v21 = *(int64_t *)(v1 + 16); // 0x5593d1
    *v8 = v20;
    if (v21 <= (int64_t)v20) {
        function_559225();
    }
    // 0x5593f1
    *(int64_t *)(v19 - (v21 + 30 & -16)) = v9;
    function_5571e0(*v18, *(char *)(v1 - 140));
    return function_559225();
}

// Address range: 0x567a18 - 0x567c30
int64_t function_567a18(int64_t a1, int64_t a2) {
    struct __locale_struct * v1 = __duplocale((struct __locale_struct *)a1); // 0x567a29
    int64_t v2; // 0x567a18
    if (v1 == NULL) {
        // 0x567a52
        function_542770("locale::facet::_S_lc_ctype_c_locale duplocale error");
    } else {
        struct __locale_struct * v3 = __newlocale(1, (char *)a2, v1); // 0x567a41
        v2 = (int64_t)v1;
        if (v3 != NULL) {
            // 0x567a4b
            return (int64_t)v3;
        }
    }
    // 0x567a5e
    __freelocale((struct __locale_struct *)v2);
    function_542770("locale::facet::_S_lc_ctype_c_locale newlocale error");
    if (g13 == 0) {
        goto lab_0x567aa7;
    } else {
        // 0x567a9a
        if (pthread_mutex_lock((int64_t *)"locale::facet::_S_lc_ctype_c_locale newlocale error") != 0) {
            // 0x567be5
            function_4f1b30();
            goto lab_0x567bea;
        } else {
            goto lab_0x567aa7;
        }
    }
  lab_0x567aa7:;
    uint32_t v4 = (int32_t)a2;
    int64_t v5 = 0x89bbd3c; // 0x567a18
    int64_t v6 = 0x726f72;
    int64_t v7 = v5 / 2;
    int64_t v8 = 8 * v7 + v6; // 0x567ac7
    int64_t v9 = v7; // 0x567ad2
    int64_t v10 = v5; // 0x567ad2
    int64_t v11 = v8; // 0x567ad2
    int64_t v12 = v7; // 0x567ad2
    int64_t v13; // 0x567a18
    int64_t result; // 0x567a18
    int64_t v14; // 0x567a18
    int64_t v15; // 0x567ae3
    int64_t v16; // 0x567ae6
    if (*(int32_t *)*(int64_t *)v8 >= v4) {
        v14 = v6;
        result = v9;
        if (v9 == 0) {
            // break (via goto) -> 0x567afb
            goto lab_0x567afb;
        }
        // 0x567ae0
        v15 = v9 >> 1;
        v16 = 8 * v15 + v6;
        v10 = v9;
        v11 = v16;
        v12 = v15;
        while ((a2 & 0xffffffff) <= (int64_t)*(int32_t *)*(int64_t *)v16) {
            // 0x567af6
            v13 = v15;
            v14 = v6;
            result = v13;
            if (v13 == 0) {
                // break (via goto) -> 0x567afb
                goto lab_0x567afb;
            }
            // 0x567ae0
            v15 = v13 >> 1;
            v16 = 8 * v15 + v6;
            v10 = v13;
            v11 = v16;
            v12 = v15;
        }
    }
    int64_t v17 = v10 - v12; // 0x567b40
    int64_t v18 = v11 + 8; // 0x567b43
    int64_t v19 = v17 - 1; // 0x567b47
    v5 = v19;
    v14 = v18;
    result = v17;
    while (v19 >= 1) {
        // 0x567ac1
        v6 = v18;
        v7 = v5 / 2;
        v8 = 8 * v7 + v6;
        v9 = v7;
        v10 = v5;
        v11 = v8;
        v12 = v7;
        if (*(int32_t *)*(int64_t *)v8 >= v4) {
            v14 = v6;
            result = v9;
            if (v9 == 0) {
                // break (via goto) -> 0x567afb
                goto lab_0x567afb;
            }
            // 0x567ae0
            v15 = v9 >> 1;
            v16 = 8 * v15 + v6;
            v10 = v9;
            v11 = v16;
            v12 = v15;
            while ((a2 & 0xffffffff) <= (int64_t)*(int32_t *)*(int64_t *)v16) {
                // 0x567af6
                v13 = v15;
                v14 = v6;
                result = v13;
                if (v13 == 0) {
                    // break (via goto) -> 0x567afb
                    goto lab_0x567afb;
                }
                // 0x567ae0
                v15 = v13 >> 1;
                v16 = 8 * v15 + v6;
                v10 = v13;
                v11 = v16;
                v12 = v15;
            }
        }
        // 0x567b40
        v17 = v10 - v12;
        v18 = v11 + 8;
        v19 = v17 - 1;
        v5 = v19;
        v14 = v18;
        result = v17;
    }
  lab_0x567afb:;
    int64_t v20 = v14;
    if (v20 == 0x45505954) {
        goto lab_0x567b09;
    } else {
        int64_t * v21 = (int64_t *)v20; // 0x567b00
        int64_t v22 = *v21; // 0x567b00
        if (*(int32_t *)v22 == v4) {
            // 0x567b50
            free((int64_t *)*(int64_t *)(v22 + 8));
            function_566180(v22 + 16);
            function_4eeb50(v22);
            if (v20 != 0x4550594c) {
                // 0x567b77
                memmove(v21, (int64_t *)(v20 + 8), 0x4550594c - (int32_t)v20);
            }
            // 0x567b86
            *(int64_t *)"TYPE" = 0x4550594c;
            if (v4 == 0x6c61636e) {
                // 0x567b9a
                *(int32_t *)"ocale error" = v4;
            }
            // 0x567b9e
            if (g13 == 0) {
                // 0x567b1e
                return 0x6c61636e;
            }
            // 0x567ba7
            if (pthread_mutex_unlock((int64_t *)"locale::facet::_S_lc_ctype_c_locale newlocale error") == 0) {
                // 0x567b1e
                return 0;
            }
            int64_t v23 = function_20210(8); // 0x567bbc
            *(int64_t *)v23 = (int64_t)&g8;
            function_203b0(v23, 0x843278, 0x4f1a60);
            // 0x567be5
            function_4f1b30();
            goto lab_0x567bea;
        } else {
            goto lab_0x567b09;
        }
    }
  lab_0x567b09:
    // 0x567b09
    if (g13 == 0) {
        // 0x567b1e
        return result;
    }
    int32_t result2 = pthread_mutex_unlock((int64_t *)"locale::facet::_S_lc_ctype_c_locale newlocale error"); // 0x567b11
    if (result2 == 0) {
        // 0x567b1e
        return result2;
    }
    goto lab_0x567bea;
  lab_0x567bea:;
    int64_t v24 = function_20210(8); // 0x567bef
    *(int64_t *)v24 = (int64_t)&g8;
    _Unwind_Resume((struct _Unwind_Exception *)function_203b0(v24, (int64_t)&g7, 0x4f1a60));
    int64_t v25 = 0x4f1a62; // 0x567c18
    int64_t v26 = v25; // 0x567c1f
    int64_t v27 = (int64_t)&g23; // 0x567c1f
    while (v25 != 0) {
        // 0x567c21
        _Unwind_Resume((struct _Unwind_Exception *)v27);
        v25 = v26 + 1;
        v26 = v25;
        v27 = (int64_t)&g23;
    }
    // 0x567c28
    return function_200c0((int64_t)&g23);
}
