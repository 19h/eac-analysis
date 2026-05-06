/*
 * Targeted RetDec C for native executable gap queue batch 3866.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x21743-0x217cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cc71-0x4cd00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52f32-0x52fbc rank=- name=- kind=- bytes=- uncovered=-
 *   0x581e3-0x5826b rank=- name=- kind=- bytes=- uncovered=-
 *   0x5926a-0x592ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x5b35c-0x5b3e6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5c0af-0x5c136 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5f7ce-0x5f860 rank=- name=- kind=- bytes=- uncovered=-
 *   0x716c8-0x71754 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4903ab-0x4903f9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x496cc7-0x496d50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4afb27-0x4afbb7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bf758-0x4bf7e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c6803-0x4c6890 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f0b32-0x4f0bc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f13b6-0x4f1440 rank=- name=- kind=- bytes=- uncovered=-
 *   0x504abe-0x504b50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x504bd6-0x504c60 rank=- name=- kind=- bytes=- uncovered=-
 *   0x504cee-0x504d80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x506f8e-0x507020 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5075c6-0x507650 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52af98-0x52b020 rank=- name=- kind=- bytes=- uncovered=-
 *   0x530bfa-0x530c90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53e5dc-0x53e670 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5421a2-0x542230 rank=- name=- kind=- bytes=- uncovered=-
 *   0x547318-0x5473b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x549894-0x549920 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5499c8-0x549a50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5579aa-0x557a40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x55c700-0x55c790 rank=- name=- kind=- bytes=- uncovered=-
 *   0x566e48-0x566ee0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x567715-0x5677a0 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g19;
extern int g20;
extern int g21;
extern int g22;
extern int g23;
extern int g24;
extern int g25;
extern int g26;
extern int g28;
extern int g29;
extern int g30;
extern int g31;
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

int64_t function_1fd40();
int64_t function_200c0();
int64_t function_20a50();
int64_t function_21743(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21794(void);
int64_t function_24e1e();
int64_t function_2508e();
int64_t function_25cec();
int64_t function_29c3a();
int64_t function_29cf4();
int64_t function_29ef7();
int64_t function_35ef6();
int64_t function_48eb2b();
int64_t function_4903ab(int64_t a1);
int64_t function_4945c0();
int64_t function_494ea0();
int64_t function_496cc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_496cf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_496d00(int64_t a1, int64_t a2);
int64_t function_496d10(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_496d30(int64_t a1, int64_t a2);
int64_t function_496d40(int64_t a1);
int64_t function_4afafa();
int64_t function_4afb27(void);
int64_t function_4afba0(int64_t a1, int64_t a2);
int64_t function_4b0890();
int64_t function_4b0d80();
int64_t function_4bf118();
int64_t function_4bf5cb();
int64_t function_4bf758(void);
int64_t function_4bf75a(void);
int64_t function_4bf7a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4c5fc0();
int64_t function_4c6740();
int64_t function_4c6777();
int64_t function_4c6803(void);
int64_t function_4c6804(void);
int64_t function_4c6810(int64_t a1, int64_t a2);
int64_t function_4c7e4();
int64_t function_4cbdc();
int64_t function_4cc71(int64_t a1);
int64_t function_4e1a6();
int64_t function_4eeb50();
int64_t function_4efb50();
int64_t function_4efd30();
int64_t function_4f0ae0();
int64_t function_4f0b32(int64_t a1);
int64_t function_4f0b50(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4f0b60(int64_t a1, int64_t a2);
int64_t function_4f0ed0();
int64_t function_4f1137();
int64_t function_4f1179();
int64_t function_4f11d3();
int64_t function_4f12f3();
int64_t function_4f1383();
int64_t function_4f13b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4f13c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4f13ca(int64_t a1, int64_t a2);
int64_t function_4f13d3(int64_t a1, int64_t a2);
int64_t function_4f13dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4f13ea(int64_t a1, int64_t a2);
int64_t function_4f13f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4f13fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4f1760();
int64_t function_502870();
int64_t function_504abe(void);
int64_t function_504ac0(int64_t a1);
int64_t function_504bd6(void);
int64_t function_504be0(int64_t a1);
int64_t function_504cee(void);
int64_t function_504cf0(int64_t a1);
int64_t function_505130();
int64_t function_506f8e(void);
int64_t function_506f90(int64_t a1);
int64_t function_5075c6(void);
int64_t function_5075d0(int64_t a1);
int64_t function_5246d0();
int64_t function_52768();
int64_t function_52af98(int64_t a1, int64_t a2);
int64_t function_52afb0(int64_t a1, int64_t a2);
int64_t function_52afc0(int64_t result);
int64_t function_52afd0(int64_t a1);
int64_t function_52afe0(int64_t a1);
int64_t function_52aff0(int64_t a1, int64_t a2);
int64_t function_52b000(int64_t result, int64_t a2);
int64_t function_52b010(int64_t a1);
int64_t function_52f32(int64_t a1, int64_t a2);
int64_t function_52f38(int64_t a1);
int64_t function_530bf7();
int64_t function_530bfa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_530c2b(void);
int64_t function_530c7a(void);
int64_t function_53334();
int64_t function_53e5dc(int64_t a1);
int64_t function_53e620(int64_t a1);
int64_t function_5421a0();
int64_t function_5421a2(void);
int64_t function_5421b0(int64_t a1);
int64_t function_5421c0(int64_t a1);
int64_t function_5421e0(int64_t a1);
int64_t function_5421f0(int64_t a1);
int64_t function_542210(int64_t a1);
int64_t function_542470();
int64_t function_542590();
int64_t function_542650();
int64_t function_5472f0();
int64_t function_547318(void);
int64_t function_547350(int64_t a1);
int64_t function_547370(int64_t a1);
int64_t function_547390(int64_t a1);
int64_t function_5484b0();
int64_t function_54970e();
int64_t function_549894(int64_t a1, int64_t a2);
int64_t function_5498a0(int64_t a1);
int64_t function_5498f7(int64_t a1);
int64_t function_5499c8(int64_t a1, int64_t a2);
int64_t function_5499e0(int64_t a1, int64_t a2);
int64_t function_5499f0(int64_t result);
int64_t function_549a00(int64_t a1);
int64_t function_549a10(int64_t a1);
int64_t function_549a20(int64_t a1, int64_t a2);
int64_t function_549a30(int64_t result, int64_t a2);
int64_t function_549a40(int64_t a1);
int64_t function_54cf10();
int64_t function_552550();
int64_t function_557681();
int64_t function_557795();
int64_t function_5577d5();
int64_t function_5579aa(void);
int64_t function_5579ab(void);
int64_t function_5579b8(int64_t a1);
int64_t function_5579e4(void);
int64_t function_5579f3(int64_t a1, int64_t a2);
int64_t function_55c09c();
int64_t function_55c0c3();
int64_t function_55c0dc();
int64_t function_55c463();
int64_t function_55c6ae();
int64_t function_55c6be();
int64_t function_55c700(int32_t a1);
int64_t function_55c709(int64_t a1);
int64_t function_55c720(void);
int64_t function_55c731(int64_t a1);
int64_t function_55c757(void);
int64_t function_55c769(int64_t a1, int64_t a2);
int64_t function_566180();
int64_t function_566e20();
int64_t function_566e48(void);
int64_t function_566e80(int64_t a1);
int64_t function_566ea0(int64_t a1);
int64_t function_566ec0(int64_t a1);
int64_t function_567715(int64_t a1, int64_t a2, int64_t a3);
int64_t function_57ee6();
int64_t function_581e3(int64_t a1, int64_t a2);
int64_t function_591b0();
int64_t function_5926a(int64_t a1);
int64_t function_59270(int64_t a1, int32_t a2);
int64_t function_592b4(int64_t a1, int64_t a2);
int64_t function_5b35c(uint64_t a1, uint64_t a2);
int64_t function_5bff9();
int64_t function_5c0af(int64_t a1, int64_t a2);
int64_t function_5f6f2();
int64_t function_5f7ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5f834(int64_t a1);
int64_t function_715a1();
int64_t function_716c8(int64_t a1, int64_t a2);
int64_t function_d181e();

// Address range: 0x21743 - 0x21777
int64_t function_21743(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21743
    int64_t v1; // 0x21743
    bool v2; // 0x21743
    *(char *)a1 = (char)v1 + (char)a4 + (char)v2;
    __readfsqword(40);
    return function_d181e();
}

// Address range: 0x21794 - 0x21797
int64_t function_21794(void) {
    // 0x21794
    int64_t result; // 0x21794
    return result;
}

// Address range: 0x4cc71 - 0x4ccff
int64_t function_4cc71(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x4cc7b
    int64_t v2 = 0x300000011; // bp-52, 0x4cca6
    int64_t v3 = function_24e1e(); // 0x4ccab
    function_4cbdc(a1, &v2, 20, 0xf4240);
    function_4c7e4(a1);
    int64_t v4 = __readfsqword(40); // 0x4cce1
    *(int64_t *)(a1 + (int64_t)&g2) = v3;
    int64_t result = 0; // 0x4ccf1
    if (v1 != v4) {
        // 0x4ccf3
        __stack_chk_fail();
        result = (int64_t)&g31;
    }
    // 0x4ccf8
    return result;
}

// Address range: 0x52f32 - 0x52f37
int64_t function_52f32(int64_t a1, int64_t a2) {
    // 0x52f32
    *(int64_t *)(a1 + 56) = a2;
    int64_t result; // 0x52f32
    return result;
}

// Address range: 0x52f38 - 0x52fbc
int64_t function_52f38(int64_t a1) {
    int64_t v1 = a1 + 48; // 0x52f38
    *(int64_t *)(a1 + 8) = 1;
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)a1 = v1;
    *(int64_t *)(a1 + 24) = 0;
    *(int32_t *)(a1 + 32) = 0x3f800000;
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)v1 = 0;
    int64_t * v2 = (int64_t *)(a1 + 72); // 0x52f7e
    *v2 = 0;
    int64_t * v3 = (int64_t *)(a1 + 80); // 0x52f86
    *v3 = 0;
    int64_t result = function_53334(); // 0x52f8e
    int64_t v4 = *v3; // 0x52f93
    *(int64_t *)(a1 + 56) = 0;
    *v2 = 0;
    *v3 = 0;
    if (v4 == 0) {
        // 0x52fba
        return result;
    }
    // 0x52fb4
    return function_4e1a6(v4);
}

// Address range: 0x581e3 - 0x5826b
int64_t function_581e3(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x581eb
    int64_t v2 = 0; // 0x581fe
    if (a1 != 0) {
        // 0x58200
        int64_t v3; // bp-48, 0x581e3
        int64_t v4; // bp-49, 0x581e3
        function_35ef6(&v3, a1, &v4);
        int64_t v5; // bp-40, 0x581e3
        function_48eb2b(&v5, &v3);
        uint64_t v6 = function_57ee6(v5, a2); // 0x58230
        function_2508e(&v5);
        v2 = function_29c3a(&v3) & -256 | v6 % 256;
    }
    int64_t result = v2; // 0x5825b
    if (v1 != __readfsqword(40)) {
        // 0x5825d
        __stack_chk_fail();
        result = (int64_t)&g31;
    }
    // 0x58262
    return result;
}

// Address range: 0x5926a - 0x5926f
int64_t function_5926a(int64_t a1) {
    // 0x5926a
    return a1 + 64;
}

// Address range: 0x59270 - 0x592b4
int64_t function_59270(int64_t a1, int32_t a2) {
    int64_t v1 = (int64_t)a2 + a1; // 0x5927a
    int64_t v2 = function_591b0(v1, *(int64_t *)(a1 + 8)); // 0x59281
    int64_t result = 0; // 0x59293
    if (v1 != 0) {
        // 0x59295
        function_29ef7(result, a1 + 24, v1);
    }
    // 0x592a1
    function_29cf4(v2, result);
    return result;
}

// Address range: 0x592b4 - 0x592ed
int64_t function_592b4(int64_t a1, int64_t a2) {
    // 0x592b4
    if ((char)function_52768() != 0) {
        // 0x592df
        return function_59270(a1, 0);
    }
    // 0x592c1
    if (*(int64_t *)0x848c20 != a1) {
        int32_t * v1 = (int32_t *)(a1 + 16);
        *v1 = *v1 + 1;
    }
    // 0x592e7
    return a1 + 24;
}

// Address range: 0x5b35c - 0x5b3e6
int64_t function_5b35c(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x5b36a
    if (a1 >= 0xfffffffffffffff) {
        // 0x5b36c
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x5b37e
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x5b380
        v3 = v2 < v4 ? v4 : v2;
    }
    int64_t v5 = 4 * v3; // 0x5b38b
    uint64_t v6 = v5 + 60; // 0x5b393
    int64_t v7 = v3; // 0x5b39d
    int64_t v8 = v5; // 0x5b39d
    if (v3 > a2 && v6 > (int64_t)&g1) {
        uint64_t v9 = ((int64_t)&g1 - (v6 & (int64_t)(int32_t)&g30)) / 4 + v3; // 0x5b3b8
        v7 = v9 < 0xffffffffffffffe ? v9 : 0xffffffffffffffe;
        v8 = 4 * v7;
    }
    int64_t result = function_4efd30(v8 + 28); // 0x5b3d4
    *(int64_t *)(result + 8) = v7;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x5c0af - 0x5c136
int64_t function_5c0af(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 16);
    int64_t v2; // 0x5c0af
    int64_t v3; // 0x5c0af
    int64_t v4; // 0x5c0af
    if (v1 == 0) {
        // 0x5c0f1
        v3 = a1 + 8;
        goto lab_0x5c0f5;
    } else {
        int64_t v5 = v1;
        int64_t v6 = v5 + 32;
        int64_t v7 = function_5bff9(a2, v6); // 0x5c0d6
        int64_t v8 = *(int64_t *)(((char)v7 == 0 ? 24 : 16) + v5);
        while (v8 != 0) {
            // 0x5c0cf
            v5 = v8;
            v6 = v5 + 32;
            v7 = function_5bff9(a2, v6);
            v8 = *(int64_t *)(((char)v7 == 0 ? 24 : 16) + v5);
        }
        // 0x5c0f1
        v3 = v5;
        v2 = v6;
        v4 = v5;
        if ((char)v7 == 0) {
            return (char)function_5bff9(v2, a2) != 0 ? 0 : v4;
        } else {
            goto lab_0x5c0f5;
        }
    }
  lab_0x5c0f5:
    // 0x5c0f5
    if (*(int64_t *)(a1 + 24) == v3) {
        // 0x5c12b
        return 0;
    }
    int64_t v9 = function_4f0ae0(v3); // 0x5c106
    v2 = v9 + 32;
    v4 = v9;
    return (char)function_5bff9(v2, a2) != 0 ? 0 : v4;
    // 0x5c12b
    return (char)function_5bff9(v2, a2) != 0 ? 0 : v4;
}

// Address range: 0x5f7ce - 0x5f834
int64_t function_5f7ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5f7ce
    int64_t v1; // 0x5f7ce
    uint64_t v2 = v1;
    int64_t v3 = v1;
    *(char *)v3 = 2 * (char)v3;
    uint64_t v4 = a4 - (v3 & (int64_t)(int32_t)&g30); // 0x5f7d8
    int64_t v5 = v4 > v2 ? v2 : v4; // 0x5f7de
    int64_t v6 = function_4efd30(v5 + 25); // 0x5f7eb
    *(int64_t *)(v6 + 8) = v5;
    *(int32_t *)(v6 + 16) = 0;
    int64_t v7 = v6 + 24; // 0x5f7ff
    if (v1 != 1) {
        if (v1 != 0) {
            // 0x5f816
            __asm_rep_movsb_memcpy((char *)v7, (char *)a2, v1);
        }
    } else {
        // 0x5f80a
        *(char *)v7 = (char)a2;
    }
    int64_t v8 = v6; // 0x5f821
    if (v6 == v1) {
        v8 = function_5f6f2();
    }
    // 0x5f827
    *(char *)(v1 + 24 + v8) = 0;
    return function_5f6f2();
}

// Address range: 0x5f834 - 0x5f860
int64_t function_5f834(int64_t a1) {
    // 0x5f834
    function_542470("basic_string::_S_construct null not valid");
    int64_t result = 0; // 0x5f84e
    if (__readfsqword(40) != a1) {
        // 0x5f850
        __stack_chk_fail();
        result = (int64_t)&g31;
    }
    // 0x5f855
    return result;
}

// Address range: 0x716c8 - 0x71754
int64_t function_716c8(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x716d1
    int32_t * wstr = (int32_t *)&g29; // bp-40, 0x716f4
    int64_t v2 = function_715a1(); // 0x716f9
    int64_t v3 = v2; // 0x71700
    if ((char)v2 != 0) {
        int64_t v4 = *(int64_t *)((int64_t)&wstr - 24); // 0x7170f
        v3 = 0;
        if (v4 == (int64_t)g28) {
            // 0x71715
            v3 = v2;
            if (g28 != 0) {
                int32_t v5 = wmemcmp((int32_t *)&g29, (int32_t *)&wstr, g28); // 0x7171a
                v3 = v5 == 0;
            }
        }
    }
    int64_t result = function_29c3a((int64_t *)&wstr) & -256 | v3 % 256; // 0x71746
    if (v1 != __readfsqword(40)) {
        // 0x71748
        __stack_chk_fail();
        result = (int64_t)&g31;
    }
    // 0x7174d
    return result;
}

// Address range: 0x4903ab - 0x4903f9
int64_t function_4903ab(int64_t a1) {
    // 0x4903ab
    __readfsqword(40);
    int64_t time_val = time(NULL); // bp-608, 0x4903e5
    int64_t time2; // bp-600, 0x4903ab
    return (int64_t)gmtime_r((const time_t *)&time_val, (struct tm *)&time2);
}

// Address range: 0x496cc7 - 0x496cec
int64_t function_496cc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x496cc7
    *(int64_t *)(a1 + 136) = a2;
    *(int64_t *)(a1 + 144) = a3;
    *(int64_t *)(a1 + 152) = a4;
    return function_4945c0();
}

// Address range: 0x496cf0 - 0x496cfd
int64_t function_496cf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x496cf0
    *(int64_t *)(a1 + 80) = a2;
    *(int64_t *)(a1 + 64) = a3;
    *(int64_t *)(a1 + 72) = a4;
    int64_t result; // 0x496cf0
    return result;
}

// Address range: 0x496d00 - 0x496d10
int64_t function_496d00(int64_t a1, int64_t a2) {
    // 0x496d00
    *(int64_t *)a1 = a2;
    *(int64_t *)(a1 + 8) = a2;
    *(int64_t *)(a1 + 16) = a2;
    *(int64_t *)(a1 + 24) = a2;
    int64_t result; // 0x496d00
    return result;
}

// Address range: 0x496d10 - 0x496d2d
int64_t function_496d10(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x496d10
    int64_t result; // 0x496d10
    if ((int32_t)a3 == 3 != (int32_t)a4 < 4) {
        // 0x496d15
        return result;
    }
    // 0x496d25
    *(int64_t *)((0x100000000 * a4 >> 29) + a1) = a2;
    return result;
}

// Address range: 0x496d30 - 0x496d38
int64_t function_496d30(int64_t a1, int64_t a2) {
    // 0x496d30
    *(int64_t *)(a1 + 200) = a2;
    int64_t result; // 0x496d30
    return result;
}

// Address range: 0x496d40 - 0x496d4c
int64_t function_496d40(int64_t a1) {
    // 0x496d40
    return function_494ea0(a1 + 208);
}

// Address range: 0x4afb27 - 0x4afb98
int64_t function_4afb27(void) {
    // 0x4afb27
    int128_t v1; // 0x4afb27
    __asm_aeskeygenassist(v1, 1);
    function_4afafa();
    __asm_aeskeygenassist(v1, 2);
    function_4afafa();
    __asm_aeskeygenassist(v1, 4);
    function_4afafa();
    __asm_aeskeygenassist(v1, 8);
    function_4afafa();
    __asm_aeskeygenassist(v1, 16);
    function_4afafa();
    __asm_aeskeygenassist(v1, 32);
    function_4afafa();
    __asm_aeskeygenassist(v1, 64);
    function_4afafa();
    __asm_aeskeygenassist(v1, -128);
    function_4afafa();
    __asm_aeskeygenassist(v1, 27);
    function_4afafa();
    __asm_aeskeygenassist(v1, 54);
    function_4afafa();
    return 0;
}

// Address range: 0x4afba0 - 0x4afbb7
int64_t function_4afba0(int64_t a1, int64_t a2) {
    // 0x4afba0
    int64_t v1; // 0x4afba0
    *(int128_t *)a1 = (int128_t)__asm_movdqu_133(__asm_movdqu(*(int128_t *)&v1));
    int64_t v2 = __asm_movdqu_133(__asm_movdqu(*(int128_t *)(a2 + 16))); // 0x4afbb1
    *(int128_t *)(a1 + 16) = (int128_t)v2;
    int64_t result; // 0x4afba0
    return result;
}

// Address range: 0x4bf758 - 0x4bf759
int64_t function_4bf758(void) {
    // 0x4bf758
    int64_t result; // 0x4bf758
    return result;
}

// Address range: 0x4bf75a - 0x4bf795
int64_t function_4bf75a(void) {
    // 0x4bf75a
    int64_t v1; // 0x4bf75a
    int32_t * v2 = (int32_t *)(v1 - 115); // 0x4bf75a
    *v2 = *v2 - 1;
    if ((int32_t)function_4b0d80() != 0) {
        function_4bf5cb();
    }
    // 0x4bf774
    function_4b0890(232);
    *(int64_t *)312 = 254;
    return function_4bf118();
}

// Address range: 0x4bf7a0 - 0x4bf7d6
int64_t function_4bf7a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4bf7a0
    memset2((void *)(int64_t)((int64_t *)a2), 42, (int32_t)a3);
    *(int64_t *)a4 = a3;
    return 0;
}

// Address range: 0x4c6803 - 0x4c6804
int64_t function_4c6803(void) {
    // 0x4c6803
    int64_t result; // 0x4c6803
    return result;
}

// Address range: 0x4c6804 - 0x4c680c
int64_t function_4c6804(void) {
    // 0x4c6804
    return function_4c6777();
}

// Address range: 0x4c6810 - 0x4c6884
int64_t function_4c6810(int64_t a1, int64_t a2) {
    // 0x4c6810
    int64_t v1; // bp-16, 0x4c6810
    int64_t v2; // bp-24, 0x4c6810
    int64_t result = function_4c5fc0(a2, &v1, &v2); // 0x4c6825
    if ((int32_t)result != 0) {
        // 0x4c682e
        return result;
    }
    int64_t v3 = function_4c6740(a1, v1, v2); // 0x4c6845
    if (v2 == 0) {
        // 0x4c6871
        free((int64_t *)v1);
        return v3 & 0xffffffff;
    }
    int64_t v4 = v1; // 0x4c685c
    *(char *)v4 = 0;
    v4++;
    while (v4 != v1 + v2) {
        // 0x4c6860
        *(char *)v4 = 0;
        v4++;
    }
    // 0x4c6871
    free((int64_t *)v1);
    return v3 & 0xffffffff;
}

// Address range: 0x4f0b32 - 0x4f0b4c
int64_t function_4f0b32(int64_t a1) {
    // 0x4f0b32
    int64_t result; // 0x4f0b32
    bool v1; // 0x4f0b32
    if (v1) {
        // 0x4f0b44
        *(int32_t *)(result + 16) = (int32_t)a1;
        return result;
    }
    // 0x4f0b34
    return result;
}

// Address range: 0x4f0b50 - 0x4f0b5d
int64_t function_4f0b50(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4f0b50
    int64_t result; // 0x4f0b50
    *(int64_t *)(result + 16) = a1;
    return result;
}

// Address range: 0x4f0b60 - 0x4f0bbd
int64_t function_4f0b60(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x4f0b60
    int64_t result = *v1; // 0x4f0b60
    int64_t * v2 = (int64_t *)(result + 24); // 0x4f0b64
    int64_t v3 = *v2; // 0x4f0b64
    *v1 = v3;
    if (v3 != 0) {
        // 0x4f0b71
        *(int64_t *)(v3 + 8) = a1;
    }
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x4f0b75
    *(int64_t *)(result + 8) = *v4;
    if (a1 == a2) {
        // 0x4f0ba0
        *(int64_t *)a1 = result;
        *v2 = a1;
        *v4 = result;
        return result;
    }
    int64_t v5 = *v4; // 0x4f0b82
    int64_t * v6 = (int64_t *)(v5 + 24); // 0x4f0b86
    if (*v6 == a1) {
        // 0x4f0bb0
        *v6 = result;
        *v2 = a1;
        *v4 = result;
        return result;
    }
    // 0x4f0b8c
    *(int64_t *)(v5 + 16) = result;
    *v2 = a1;
    *v4 = result;
    return result;
}

// Address range: 0x4f13b6 - 0x4f13bf
int64_t function_4f13b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4f13b6
    int64_t result; // 0x4f13b6
    char * v1 = (char *)(result - 119); // 0x4f13b6
    *v1 = *v1 | (char)a4;
    return result;
}

// Address range: 0x4f13c1 - 0x4f13ca
int64_t function_4f13c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4f13c1
    *(int64_t *)(a2 + 8) = a6;
    return function_4f12f3();
}

// Address range: 0x4f13ca - 0x4f13d3
int64_t function_4f13ca(int64_t a1, int64_t a2) {
    // 0x4f13ca
    *(int64_t *)(a2 + 8) = a1;
    return function_4f11d3();
}

// Address range: 0x4f13d3 - 0x4f13dc
int64_t function_4f13d3(int64_t a1, int64_t a2) {
    // 0x4f13d3
    *(int64_t *)(a2 + 16) = a1;
    return function_4f11d3();
}

// Address range: 0x4f13dc - 0x4f13ea
int64_t function_4f13dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4f13dc
    int64_t v1; // 0x4f13dc
    if ((int32_t)v1 != 1) {
        function_4f1383();
    }
    // 0x4f13e2
    return function_4f1137();
}

// Address range: 0x4f13ea - 0x4f13f3
int64_t function_4f13ea(int64_t a1, int64_t a2) {
    // 0x4f13ea
    *(int64_t *)(a2 + 8) = a1;
    return function_4f1179();
}

// Address range: 0x4f13f3 - 0x4f13fc
int64_t function_4f13f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4f13f3
    *(int64_t *)(a5 + 24) = a1;
    return function_4f1179();
}

// Address range: 0x4f13fc - 0x4f1404
int64_t function_4f13fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4f13fc
    return function_4f0ed0(a6);
}

// Address range: 0x504abe - 0x504ac0
int64_t function_504abe(void) {
    // 0x504abe
    int64_t result; // 0x504abe
    return result;
}

// Address range: 0x504ac0 - 0x504b47
// From class:    std::basic_ifstream<char, std::char_traits<char> >
// Type:          constructor
int64_t function_504ac0(int64_t a1) {
    int64_t v1 = a1 + 16; // 0x504acb
    int64_t v2 = a1 + 256; // 0x504ad7
    int64_t * v3 = (int64_t *)v2; // 0x504ad7
    *v3 = (int64_t)&g8;
    int64_t * v4 = (int64_t *)a1; // 0x504ae5
    *v4 = (int64_t)&g7;
    int64_t * v5 = (int64_t *)v1; // 0x504aed
    *v5 = (int64_t)&g5;
    function_502870(v1);
    function_4f1760(a1 + 120);
    *v5 = (int64_t)&g18;
    function_566180(a1 + 72);
    *(int64_t *)(a1 + 8) = 0;
    *v4 = (int64_t)&g6;
    *v3 = (int64_t)&g3;
    return function_54cf10(v2);
}

// Address range: 0x504bd6 - 0x504be0
int64_t function_504bd6(void) {
    // 0x504bd6
    int64_t result; // 0x504bd6
    return result;
}

// Address range: 0x504be0 - 0x504c5f
// From class:    std::basic_ofstream<char, std::char_traits<char> >
// Type:          constructor
int64_t function_504be0(int64_t a1) {
    int64_t v1 = a1 + 8; // 0x504beb
    int64_t v2 = a1 + 248; // 0x504bf7
    int64_t * v3 = (int64_t *)v2; // 0x504bf7
    *v3 = (int64_t)&g11;
    int64_t * v4 = (int64_t *)a1; // 0x504c05
    *v4 = (int64_t)&g10;
    int64_t * v5 = (int64_t *)v1; // 0x504c0d
    *v5 = (int64_t)&g5;
    function_502870(v1);
    function_4f1760(a1 + 112);
    *v5 = (int64_t)&g18;
    function_566180(a1 + 64);
    *v4 = (int64_t)&g9;
    *v3 = (int64_t)&g3;
    return function_54cf10(v2);
}

// Address range: 0x504cee - 0x504cf0
int64_t function_504cee(void) {
    // 0x504cee
    int64_t result; // 0x504cee
    return result;
}

// Address range: 0x504cf0 - 0x504d77
// From class:    std::basic_ofstream<char, std::char_traits<char> >
// Type:          constructor
int64_t function_504cf0(int64_t a1) {
    int64_t v1 = a1 + 8; // 0x504cfb
    int64_t v2 = a1 + 248; // 0x504d07
    int64_t * v3 = (int64_t *)v2; // 0x504d07
    *v3 = (int64_t)&g11;
    int64_t * v4 = (int64_t *)a1; // 0x504d15
    *v4 = (int64_t)&g10;
    int64_t * v5 = (int64_t *)v1; // 0x504d1d
    *v5 = (int64_t)&g5;
    function_502870(v1);
    function_4f1760(a1 + 112);
    *v5 = (int64_t)&g18;
    function_566180(a1 + 64);
    *v4 = (int64_t)&g9;
    *v3 = (int64_t)&g3;
    function_54cf10(v2);
    return function_4eeb50(a1);
}

// Address range: 0x506f8e - 0x506f90
int64_t function_506f8e(void) {
    // 0x506f8e
    int64_t result; // 0x506f8e
    return result;
}

// Address range: 0x506f90 - 0x507017
// From class:    std::basic_ofstream<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_506f90(int64_t a1) {
    int64_t v1 = a1 + 8; // 0x506f9b
    int64_t v2 = a1 + 248; // 0x506fa7
    int64_t * v3 = (int64_t *)v2; // 0x506fa7
    *v3 = (int64_t)&g15;
    int64_t * v4 = (int64_t *)a1; // 0x506fb5
    *v4 = (int64_t)&g14;
    int64_t * v5 = (int64_t *)v1; // 0x506fbd
    *v5 = (int64_t)&g12;
    function_505130(v1);
    function_4f1760(a1 + 112);
    *v5 = (int64_t)&g19;
    function_566180(a1 + 64);
    *v4 = (int64_t)&g13;
    *v3 = (int64_t)&g4;
    function_54cf10(v2);
    return function_4eeb50(a1);
}

// Address range: 0x5075c6 - 0x5075d0
int64_t function_5075c6(void) {
    // 0x5075c6
    int64_t result; // 0x5075c6
    return result;
}

// Address range: 0x5075d0 - 0x50764f
// From class:    std::basic_ofstream<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_5075d0(int64_t a1) {
    int64_t v1 = a1 + 8; // 0x5075db
    int64_t v2 = a1 + 248; // 0x5075e7
    int64_t * v3 = (int64_t *)v2; // 0x5075e7
    *v3 = (int64_t)&g15;
    int64_t * v4 = (int64_t *)a1; // 0x5075f5
    *v4 = (int64_t)&g14;
    int64_t * v5 = (int64_t *)v1; // 0x5075fd
    *v5 = (int64_t)&g12;
    function_505130(v1);
    function_4f1760(a1 + 112);
    *v5 = (int64_t)&g19;
    function_566180(a1 + 64);
    *v4 = (int64_t)&g13;
    *v3 = (int64_t)&g4;
    return function_54cf10(v2);
}

// Address range: 0x52af98 - 0x52afa4
int64_t function_52af98(int64_t a1, int64_t a2) {
    // 0x52af98
    *(int64_t *)a1 = a2;
    int64_t result; // 0x52af98
    return result;
}

// Address range: 0x52afb0 - 0x52afb5
int64_t function_52afb0(int64_t a1, int64_t a2) {
    // 0x52afb0
    *(int64_t *)(a1 + 8) = a2;
    int64_t result; // 0x52afb0
    return result;
}

// Address range: 0x52afc0 - 0x52afc4
int64_t function_52afc0(int64_t result) {
    // 0x52afc0
    return result;
}

// Address range: 0x52afd0 - 0x52afd5
int64_t function_52afd0(int64_t a1) {
    // 0x52afd0
    return a1 + 16;
}

// Address range: 0x52afe0 - 0x52afe5
int64_t function_52afe0(int64_t a1) {
    // 0x52afe0
    return a1 + 16;
}

// Address range: 0x52aff0 - 0x52aff5
int64_t function_52aff0(int64_t a1, int64_t a2) {
    // 0x52aff0
    *(int64_t *)(a1 + 16) = a2;
    int64_t result; // 0x52aff0
    return result;
}

// Address range: 0x52b000 - 0x52b00c
int64_t function_52b000(int64_t result, int64_t a2) {
    // 0x52b000
    *(int64_t *)(result + 8) = a2;
    *(char *)(a2 + result) = 0;
    return result;
}

// Address range: 0x52b010 - 0x52b01b
int64_t function_52b010(int64_t a1) {
    // 0x52b010
    return a1 + 16 & -256;
}

// Address range: 0x530bfa - 0x530c2b
int64_t function_530bfa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x530bfa
    if (a3 + 16 != a4) {
        // 0x530c0d
        function_4eeb50(a4);
    }
    // 0x530c12
    int64_t v1; // 0x530bfa
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    function_542590("basic_string::append");
    return function_530bf7();
}

// Address range: 0x530c2b - 0x530c78
int64_t function_530c2b(void) {
    // 0x530c2b
    function_1fd40(function_542590("basic_string::append"));
    while (true) {
        // 0x530c48
        function_20a50();
        function_542590("basic_string::append");
        function_1fd40(function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::erase"));
    }
}

// Address range: 0x530c7a - 0x530c7b
int64_t function_530c7a(void) {
    // 0x530c7a
    int64_t result; // 0x530c7a
    return result;
}

// Address range: 0x53e5dc - 0x53e615
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_53e5dc(int64_t a1) {
    // 0x53e5dc
    *(int64_t *)(a1 - 8) = 0;
    int64_t v1 = a1 + 8; // 0x53e5ef
    *(int64_t *)a1 = (int64_t)&g16;
    *(int64_t *)(a1 - 16) = (int64_t)&g17;
    *(int64_t *)v1 = (int64_t)&g3;
    return function_54cf10(v1);
}

// Address range: 0x53e620 - 0x53e662
// From class:    std::iostream
// Type:          constructor
int64_t function_53e620(int64_t a1) {
    // 0x53e620
    *(int64_t *)(a1 + 8) = 0;
    int64_t v1 = a1 + 24; // 0x53e633
    *(int64_t *)(a1 + 16) = (int64_t)&g16;
    *(int64_t *)a1 = (int64_t)&g17;
    *(int64_t *)v1 = (int64_t)&g3;
    function_54cf10(v1);
    return function_4eeb50(a1);
}

// Address range: 0x5421a2 - 0x5421b0
int64_t function_5421a2(void) {
    // 0x5421a2
    int64_t result; // 0x5421a2
    return result;
}

// Address range: 0x5421b0 - 0x5421bf
// From class:    *N12_GLOBAL__N_121system_error_categoryE
// Type:          constructor
int64_t function_5421b0(int64_t a1) {
    // 0x5421b0
    *(int64_t *)a1 = (int64_t)&g21;
    return function_5421a0();
}

// Address range: 0x5421c0 - 0x5421dc
// From class:    *N12_GLOBAL__N_121system_error_categoryE
// Type:          constructor
int64_t function_5421c0(int64_t a1) {
    // 0x5421c0
    *(int64_t *)a1 = (int64_t)&g21;
    function_5421a0();
    return function_4eeb50(a1);
}

// Address range: 0x5421e0 - 0x5421ef
// From class:    *N12_GLOBAL__N_122generic_error_categoryE
// Type:          constructor
int64_t function_5421e0(int64_t a1) {
    // 0x5421e0
    *(int64_t *)a1 = (int64_t)&g20;
    return function_5421a0();
}

// Address range: 0x5421f0 - 0x54220c
// From class:    *N12_GLOBAL__N_122generic_error_categoryE
// Type:          constructor
int64_t function_5421f0(int64_t a1) {
    // 0x5421f0
    *(int64_t *)a1 = (int64_t)&g20;
    function_5421a0();
    return function_4eeb50(a1);
}

// Address range: 0x542210 - 0x542222
int64_t function_542210(int64_t a1) {
    // 0x542210
    function_5421a0();
    return function_4eeb50(a1);
}

// Address range: 0x547318 - 0x547349
// From class:    std::domain_error
// Type:          constructor
int64_t function_547318(void) {
    // 0x547318
    int64_t v1; // 0x547318
    function_4efb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    function_5472f0();
    *(int64_t *)v1 = (int64_t)&g22;
    return (int64_t)&g22;
}

// Address range: 0x547350 - 0x547369
// From class:    std::invalid_argument
// Type:          constructor
int64_t function_547350(int64_t a1) {
    // 0x547350
    function_5472f0();
    *(int64_t *)a1 = (int64_t)&g23;
    return (int64_t)&g23;
}

// Address range: 0x547370 - 0x547389
// From class:    std::length_error
// Type:          constructor
int64_t function_547370(int64_t a1) {
    // 0x547370
    function_5472f0();
    *(int64_t *)a1 = (int64_t)&g24;
    return (int64_t)&g24;
}

// Address range: 0x547390 - 0x5473a9
// From class:    std::out_of_range
// Type:          constructor
int64_t function_547390(int64_t a1) {
    // 0x547390
    function_5472f0();
    *(int64_t *)a1 = (int64_t)&g25;
    return (int64_t)&g25;
}

// Address range: 0x549894 - 0x5498a0
int64_t function_549894(int64_t a1, int64_t a2) {
    // 0x549894
    int64_t v1; // 0x549894
    return function_54970e(v1, a2 & 0xffffffff);
}

// Address range: 0x5498a0 - 0x5498f7
int64_t function_5498a0(int64_t a1) {
    // 0x5498a0
    __stack_chk_fail();
    int64_t v1; // 0x5498a0
    int64_t v2 = v1 + 16; // 0x5498a9
    if (v2 != a1) {
        // 0x5498b5
        function_4eeb50(a1);
    }
    // 0x5498ba
    _Unwind_Resume((struct _Unwind_Exception *)&g31);
    int64_t v3 = v2; // 0x5498c2
    int64_t v4 = (int64_t)&g31; // 0x5498c2
    while (true) {
        // 0x5498c5
        v3 += 16;
        if (v3 != a1) {
            // 0x5498d2
            function_4eeb50(a1);
        }
        // 0x5498d7
        _Unwind_Resume((struct _Unwind_Exception *)&g31);
        v4 += 16;
        if (v1 != v4) {
            // 0x5498f0
            function_4eeb50(v1);
        }
    }
}

// Address range: 0x5498f7 - 0x549912
int64_t function_5498f7(int64_t a1) {
    // 0x5498f7
    int64_t result; // 0x5498f7
    int64_t v1; // 0x5498f7
    if (v1 + 16 != a1) {
        // 0x549908
        result = function_4eeb50(a1);
    }
    // 0x54990d
    return result;
}

// Address range: 0x5499c8 - 0x5499d4
int64_t function_5499c8(int64_t a1, int64_t a2) {
    // 0x5499c8
    *(int64_t *)a1 = a2;
    int64_t result; // 0x5499c8
    return result;
}

// Address range: 0x5499e0 - 0x5499e5
int64_t function_5499e0(int64_t a1, int64_t a2) {
    // 0x5499e0
    *(int64_t *)(a1 + 8) = a2;
    int64_t result; // 0x5499e0
    return result;
}

// Address range: 0x5499f0 - 0x5499f4
int64_t function_5499f0(int64_t result) {
    // 0x5499f0
    return result;
}

// Address range: 0x549a00 - 0x549a05
int64_t function_549a00(int64_t a1) {
    // 0x549a00
    return a1 + 16;
}

// Address range: 0x549a10 - 0x549a15
int64_t function_549a10(int64_t a1) {
    // 0x549a10
    return a1 + 16;
}

// Address range: 0x549a20 - 0x549a25
int64_t function_549a20(int64_t a1, int64_t a2) {
    // 0x549a20
    *(int64_t *)(a1 + 16) = a2;
    int64_t result; // 0x549a20
    return result;
}

// Address range: 0x549a30 - 0x549a3f
int64_t function_549a30(int64_t result, int64_t a2) {
    // 0x549a30
    *(int64_t *)(result + 8) = a2;
    *(int32_t *)(4 * a2 + result) = 0;
    return result;
}

// Address range: 0x549a40 - 0x549a4b
int64_t function_549a40(int64_t a1) {
    // 0x549a40
    return a1 + 16 & -256;
}

// Address range: 0x5579aa - 0x5579ab
int64_t function_5579aa(void) {
    // 0x5579aa
    int64_t result; // 0x5579aa
    return result;
}

// Address range: 0x5579ab - 0x5579b5
int64_t function_5579ab(void) {
    // 0x5579ab
    int64_t v1; // 0x5579ab
    function_5484b0(v1, v1, v1);
    return function_557795();
}

// Address range: 0x5579b8 - 0x5579e4
int64_t function_5579b8(int64_t a1) {
    // 0x5579b8
    int64_t v1; // 0x5579b8
    function_5484b0(a1, -v1, (int64_t)*(char *)(v1 + 101));
    function_25cec(a1, v1, v1);
    return function_557681();
}

// Address range: 0x5579e4 - 0x5579f3
int64_t function_5579e4(void) {
    // 0x5579e4
    int64_t v1; // bp+95, 0x5579e4
    int64_t v2; // 0x5579e4
    function_552550(v2, &v1);
    return function_5577d5();
}

// Address range: 0x5579f3 - 0x557a40
int64_t function_5579f3(int64_t a1, int64_t a2) {
    // 0x5579f3
    __stack_chk_fail();
    int64_t v1 = a2 - 24; // 0x557a00
    int64_t v2; // bp+95, 0x5579f3
    if (v1 != (int64_t)g26) {
        // 0x557a0d
        function_552550(v1, &v2);
    }
    int64_t v3 = a1 - 24; // 0x557a1c
    while (true) {
        // 0x557a17
        if (v3 != (int64_t)g26) {
            // 0x557a29
            function_552550(v3, &v2);
        }
        // 0x557a33
        _Unwind_Resume((struct _Unwind_Exception *)&g31);
    }
}

// Address range: 0x55c700 - 0x55c709
int64_t function_55c700(int32_t a1) {
    // 0x55c700
    return function_55c0dc();
}

// Address range: 0x55c709 - 0x55c720
int64_t function_55c709(int64_t a1) {
    // 0x55c709
    if (*(int64_t *)(a1 - 24) == 0) {
        function_55c0c3();
    }
    // 0x55c71b
    return function_55c09c();
}

// Address range: 0x55c720 - 0x55c731
int64_t function_55c720(void) {
    // 0x55c720
    int64_t v1; // 0x55c720
    function_5246d0(v1);
    return function_55c463();
}

// Address range: 0x55c731 - 0x55c757
int64_t function_55c731(int64_t a1) {
    // 0x55c731
    int64_t v1; // 0x55c731
    int64_t v2 = v1 - 24;
    int64_t v3 = v2; // 0x55c73a
    int64_t v4; // 0x55c731
    if (v2 == a1) {
        int64_t v5 = function_55c6be(); // 0x55c73a
        v3 = v5 - 24;
        v4 = v5;
    }
    // 0x55c740
    *(int32_t *)(v4 - 8) = 0;
    *(int64_t *)v3 = 0;
    *(char *)v4 = 0;
    return function_55c6be();
}

// Address range: 0x55c757 - 0x55c766
int64_t function_55c757(void) {
    // 0x55c757
    int64_t v1; // bp+111, 0x55c757
    int64_t v2; // 0x55c757
    function_552550(v2, &v1);
    return function_55c6ae();
}

// Address range: 0x55c769 - 0x55c76e
int64_t function_55c769(int64_t a1, int64_t a2) {
    // 0x55c769
    int64_t v1; // 0x55c769
    int64_t result = v1 & -256 | (uint64_t)v1 % 256; // 0x55c769
    int32_t * v2 = (int32_t *)(result - 119); // 0x55c76a
    *v2 = *v2 - 1;
    return result;
}

// Address range: 0x566e48 - 0x566e79
// From class:    std::domain_error
// Type:          constructor
int64_t function_566e48(void) {
    // 0x566e48
    int64_t v1; // 0x566e48
    function_4efb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    function_566e20();
    *(int64_t *)v1 = (int64_t)&g22;
    return (int64_t)&g22;
}

// Address range: 0x566e80 - 0x566e99
// From class:    std::invalid_argument
// Type:          constructor
int64_t function_566e80(int64_t a1) {
    // 0x566e80
    function_566e20();
    *(int64_t *)a1 = (int64_t)&g23;
    return (int64_t)&g23;
}

// Address range: 0x566ea0 - 0x566eb9
// From class:    std::length_error
// Type:          constructor
int64_t function_566ea0(int64_t a1) {
    // 0x566ea0
    function_566e20();
    *(int64_t *)a1 = (int64_t)&g24;
    return (int64_t)&g24;
}

// Address range: 0x566ec0 - 0x566ed9
// From class:    std::out_of_range
// Type:          constructor
int64_t function_566ec0(int64_t a1) {
    // 0x566ec0
    function_566e20();
    *(int64_t *)a1 = (int64_t)&g25;
    return (int64_t)&g25;
}

// Address range: 0x567715 - 0x567795
int64_t function_567715(int64_t a1, int64_t a2, int64_t a3) {
    // 0x567715
    int64_t v1; // 0x567715
    if (a3 != -1) {
        // 0x56771e
        _Unwind_Resume((struct _Unwind_Exception *)v1);
    }
    int64_t v2 = function_200c0(); // 0x567723
    int64_t * v3 = (int64_t *)(v1 + 48); // 0x567737
    int64_t v4 = *v3; // 0x567737
    int64_t * v5 = (int64_t *)(v1 + 56); // 0x56773b
    int64_t v6 = *v5; // 0x56773b
    int64_t v7 = v4; // 0x567742
    int64_t result = v2; // 0x567742
    int64_t v8 = v4; // 0x567742
    if (v4 != v6) {
        int64_t v9 = *(int64_t *)v7; // 0x567748
        int64_t v10 = v6; // 0x56774e
        int64_t v11 = result; // 0x56774e
        if (v9 != 0) {
            // 0x567750
            free((int64_t *)*(int64_t *)(v9 + 8));
            function_566180(v9 + 16);
            v11 = function_4eeb50(v9);
            v10 = *v5;
        }
        // 0x56776a
        result = v11;
        int64_t v12 = v10; // 0x56776e
        v7 += 8;
        while (v12 != v7) {
            // 0x567748
            v9 = *(int64_t *)v7;
            v10 = v12;
            v11 = result;
            if (v9 != 0) {
                // 0x567750
                free((int64_t *)*(int64_t *)(v9 + 8));
                function_566180(v9 + 16);
                v11 = function_4eeb50(v9);
                v10 = *v5;
            }
            // 0x56776a
            result = v11;
            v12 = v10;
            v7 += 8;
        }
        // 0x567775
        v8 = *v3;
    }
    // 0x56777a
    if (v8 == 0) {
        // 0x567790
        return result;
    }
    // 0x56777f
    return function_4eeb50(v8);
}
