/*
 * Targeted RetDec C for native executable gap queue batch 1777.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x42c3c-0x42e3c rank=- name=- kind=- bytes=- uncovered=-
 *   0x4303c-0x4308a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1047ee-0x1049ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x1049ee-0x104bee rank=- name=- kind=- bytes=- uncovered=-
 *   0x104bee-0x104c68 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13a3a4-0x13a5a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13a7a4-0x13a7f8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x217c33-0x217d33 rank=- name=- kind=- bytes=- uncovered=-
 *   0x217d33-0x217f33 rank=- name=- kind=- bytes=- uncovered=-
 *   0x217f33-0x217fac rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e0d0e-0x2e0f0e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e0f0e-0x2e110e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e110e-0x2e117a rank=- name=- kind=- bytes=- uncovered=-
 *   0x37c6ca-0x37c8ca rank=- name=- kind=- bytes=- uncovered=-
 *   0x37c8ca-0x37caca rank=- name=- kind=- bytes=- uncovered=-
 *   0x37caca-0x37cb28 rank=- name=- kind=- bytes=- uncovered=-
 *   0x491976-0x491b76 rank=- name=- kind=- bytes=- uncovered=-
 *   0x491b76-0x491d76 rank=- name=- kind=- bytes=- uncovered=-
 *   0x491d76-0x491e06 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49526d-0x49546d rank=- name=- kind=- bytes=- uncovered=-
 *   0x49bb83-0x49bd83 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49bd83-0x49bf83 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49bf83-0x49bfd1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x502b4f-0x502d4f rank=- name=- kind=- bytes=- uncovered=-
 *   0x502d4f-0x502f4f rank=- name=- kind=- bytes=- uncovered=-
 *   0x502f4f-0x502fa0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x548053-0x548253 rank=- name=- kind=- bytes=- uncovered=-
 *   0x548253-0x548453 rank=- name=- kind=- bytes=- uncovered=-
 *   0x548453-0x5484b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57043a-0x57063a rank=- name=- kind=- bytes=- uncovered=-
 *   0x57063a-0x57083a rank=- name=- kind=- bytes=- uncovered=-
 *   0x57083a-0x570890 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g27;
extern int g28;
extern int g29;
extern int g30;
extern int g31;
extern int g32;
extern int g33;
extern int g34;
extern int g37;
extern int g38;
extern int g39;
extern int g40;
extern int g41;
extern int g42;
extern int g43;
extern int g44;
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

int64_t function_1047ee(int64_t a1, int64_t a2);
int64_t function_104801(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_10487c(void);
int64_t function_104881(int64_t a1, int64_t a2, int64_t a3);
int64_t function_10488d(void);
int64_t function_1048a6(int64_t a1);
int64_t function_1048bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1048dc(int64_t a1);
int64_t function_104949(void);
int64_t function_1049b3(void);
int64_t function_1049bb(int64_t a1);
int64_t function_104a4d(int64_t a1);
int64_t function_104a98(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_104ac4(void);
int64_t function_104b0e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_104b9e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_104bad(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_104be8(void);
int64_t function_104bf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_104c1f(void);
int64_t function_104c20(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_104c68();
int64_t function_104c75();
int64_t function_128f296();
int64_t function_130b7eb1();
int64_t function_13a3a4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_13a7a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f8a6f3();
int64_t function_1fd40();
int64_t function_1ff50();
int64_t function_1ff80();
int64_t function_20540();
int64_t function_20550();
int64_t function_209f7e2();
int64_t function_20b00();
int64_t function_217bdf();
int64_t function_217c33(int64_t a1, int64_t a2);
int64_t function_217cc4(void);
int64_t function_217d0b(void);
int64_t function_217d7b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_217db2(int64_t a1);
int64_t function_217df3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_217e63(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_217e95(int64_t a1);
int64_t function_217ea7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_259ce();
int64_t function_25c34();
int64_t function_25cec();
int64_t function_25e90();
int64_t function_2e0c9f();
int64_t function_2e0d0e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e0d5d(void);
int64_t function_2e0d83(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2e0e29(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e0e54(void);
int64_t function_2e0e5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e0e64(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e0ee8(void);
int64_t function_2e0f70(void);
int64_t function_2e0f75(int64_t a1);
int64_t function_2e0f77(int64_t a1);
int64_t function_2e0f99(int64_t a1);
int64_t function_2e0fda(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e0ff4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e1057(void);
int64_t function_2e109b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e10fa(void);
int64_t function_2e1135(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_35fcc();
int64_t function_37c6ca(int64_t a1, int64_t a2, int64_t a3);
int64_t function_37c6f7(int64_t a1, int64_t a2);
int64_t function_37c701(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_37c723(int64_t a1, int64_t a2);
int64_t function_37c74e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37c77d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37c7e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37c849(void);
int64_t function_37c84c(void);
int64_t function_37c856(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37c972(int64_t a1);
int64_t function_37c9cb(void);
int64_t function_37c9d8(void);
int64_t function_37ca0a(int64_t a1);
int64_t function_37ca1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37ca70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37cad7(void);
int64_t function_37cade(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d75cc00();
int64_t function_424fb();
int64_t function_42c3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_42ce5(void);
int64_t function_42ce8(void);
int64_t function_42d19(void);
int64_t function_42e2c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42e3d();
int64_t function_4303c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_488a10();
int64_t function_49120a();
int64_t function_491976(int64_t a1, int64_t a2, int64_t a3);
int64_t function_491d7a(int64_t a1);
int64_t function_491e06();
int64_t function_491e2c();
int64_t function_491fda();
int64_t function_49212c();
int64_t function_495020();
int64_t function_49526d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_4952a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_4952d0(int64_t a1, int64_t a2, int64_t str, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_4968b0();
int64_t function_49a730();
int64_t function_49b4a0();
int64_t function_49bab0();
int64_t function_49bb30();
int64_t function_49bb83(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_49e960();
int64_t function_4c14d0();
int64_t function_4c1690();
int64_t function_4c1770();
int64_t function_4c19e0();
int64_t function_4c1af0();
int64_t function_4c1b30();
int64_t function_4c1bc0();
int64_t function_4eeb30();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4fc7e0();
int64_t function_4feb80();
int64_t function_5029a0();
int64_t function_502b4f(void);
int64_t function_502b92(void);
int64_t function_502ba0(int64_t a1, int64_t a2);
int64_t function_502c08(void);
int64_t function_502c40(int64_t a1, int64_t a2);
int64_t function_502cf7(void);
int64_t function_502d32(void);
int64_t function_502d40(int64_t a1, int64_t a2);
int64_t function_502df7(void);
int64_t function_502e5a(void);
int64_t function_502e60(int64_t a1, int64_t a2);
int64_t function_502f53(void);
int64_t function_502f9a(void);
int64_t function_502f9c(void);
int64_t function_52a5a();
int64_t function_542650();
int64_t function_547d00();
int64_t function_547fb0();
int64_t function_548053(void);
int64_t function_548060(int64_t result, int64_t a2);
int64_t function_548080(int64_t a1, uint64_t a2, int64_t a3, int64_t a4);
int64_t function_548100(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_548160(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_548180(int64_t result);
int64_t function_548190(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_5481e0(int64_t a1, int64_t a2);
int64_t function_5481f0(int64_t a1, int64_t a2, int64_t a3, uint64_t str, uint64_t a5);
int64_t function_548270(int64_t a1, int64_t a2, int64_t a3);
int64_t function_548280(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5482f0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_548380(int64_t result, int64_t a2);
int64_t function_5483a0(int64_t a1);
int64_t function_5483b0(int64_t result, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_5484a0(void);
int64_t function_54cb80();
int64_t function_54cf10();
int64_t function_57038c();
int64_t function_57043a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_570450(int64_t a1);
int64_t function_570470(int64_t a1);
int64_t function_570490(int64_t a1);
int64_t function_5704b0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5704d0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5704f0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_570510(int64_t a1, int64_t a2, int64_t a3);
int64_t function_570530(int64_t a1, int64_t a2, int64_t a3);
int64_t function_570550(int64_t a1);
int64_t function_570570(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_570620(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_570650(int64_t a1);
int64_t function_570670(int64_t a1, int64_t a2, int64_t a3);
int64_t function_570690(int64_t a1);
int64_t function_5706b0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5706d0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5706f0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_570710(int64_t a1, int64_t a2, int64_t a3);
int64_t function_570730(int64_t a1, int64_t a2, int64_t a3);
int64_t function_570750(int64_t a1);
int64_t function_570770(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_570820(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_570850(int64_t a1);
int64_t function_570870(int64_t a1, int64_t a2, int64_t a3);
int64_t function_576840();
int64_t function_576850();
int64_t function_577860();
int64_t function_577940();
int64_t function_577d60();
int64_t function_577d70();
int64_t function_577d80();
int64_t function_577d90();
int64_t function_577da0();
int64_t function_577e50();
int64_t function_577f00();
int64_t function_578090();
int64_t function_578220();
int64_t function_578380();
int64_t function_715955ff();
int64_t function_7293a();
int64_t function_72994();
int64_t function_73991e6b();
int64_t function_8388b2();
int64_t function_ffffffff87f84d9d();
int64_t function_ffffffffa8e4b8c1();
int64_t function_ffffffffa8f530af();
int64_t function_ffffffffaf2353ff();
int64_t function_ffffffffce6a1b7e();
int64_t unknown_103d0758();
int64_t unknown_13b20350();
int64_t unknown_16b0e0d();
int64_t unknown_216119a();
int64_t unknown_265e87fe();
int64_t unknown_2cd1a6ab();
int64_t unknown_323b5794();
int64_t unknown_3b12ad0c();
int64_t unknown_3d12300d();
int64_t unknown_3d123314();
int64_t unknown_3d23664f();
int64_t unknown_46d1e72f();
int64_t unknown_5336c685();
int64_t unknown_6dd07c2b();
int64_t unknown_73e1b069();
int64_t unknown_7760570d();
int64_t unknown_ffffffff8186a463();
int64_t unknown_ffffffffc1125efb();
int64_t unknown_ffffffffc15ec4a5();
int64_t unknown_ffffffffc81cc243();
int64_t unknown_ffffffffcabf691c();
int64_t unknown_ffffffffdf727c91();
int64_t unknown_fffffffff2bbcea7();

// Address range: 0x42c3c - 0x42c56
int64_t function_42c3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x42c3c
    return function_424fb();
}

// Address range: 0x42ce5 - 0x42ce8
int64_t function_42ce5(void) {
    // 0x42ce5
    int64_t result; // 0x42ce5
    return result;
}

// Address range: 0x42ce8 - 0x42ceb
int64_t function_42ce8(void) {
    // 0x42ce8
    int64_t result; // 0x42ce8
    return result;
}

// Address range: 0x42d19 - 0x42d1f
int64_t function_42d19(void) {
    // 0x42d19
    int64_t result; // 0x42d19
    int32_t * v1 = (int32_t *)(result + 57); // 0x42d19
    *v1 = *v1 - 1;
    return result;
}

// Address range: 0x42e2c - 0x42e32
int64_t function_42e2c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 57); // 0x42e2c
    bool v2; // 0x42e2c
    *v1 = (char)v2 - (char)a4 + *v1;
    int64_t result; // 0x42e2c
    return result;
}

// Address range: 0x4303c - 0x4308a
int64_t function_4303c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4303c
    int64_t v1; // 0x4303c
    if (*(int32_t *)(v1 + 16) < (int32_t)v1) {
        // 0x43047
        if ((int32_t)entry_point(v1, v1, v1, 0) == 0) {
            // 0x4305b
            return function_42e3d();
        }
    }
    int64_t result = v1 & 0xffffffff; // 0x43071
    if (__readfsqword(40) != a5) {
        // 0x43073
        __stack_chk_fail();
        result = (int64_t)&g44;
    }
    // 0x43078
    return result;
}

// Address range: 0x1047ee - 0x1047f2
int64_t function_1047ee(int64_t a1, int64_t a2) {
    // 0x1047ee
    int64_t v1; // 0x1047ee
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x104801 - 0x104837
int64_t function_104801(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a3 - 0x622133b5); // 0x104801
    int64_t v2; // 0x104801
    *v1 = *v1 + (char)v2;
    int64_t result = unknown_3d12300d(); // 0x104807
    int32_t * v3 = (int32_t *)(a4 + 0x37d701e8 + v2); // 0x10480c
    uint32_t v4 = *v3; // 0x10480c
    uint32_t v5 = v4 + (int32_t)a3; // 0x10480c
    *v3 = v5;
    char * v6 = (char *)(result - 0x2e2ee1a7); // 0x104813
    unsigned char v7 = *v6; // 0x104813
    int64_t v8; // 0x104801
    unsigned char v9 = v7 + (char)v8; // 0x104813
    unsigned char v10 = v9 + (char)(v5 < v4); // 0x104813
    bool v11 = v5 < v4 ? v10 <= v7 : v9 < v7; // 0x104813
    *v6 = v10;
    char v12 = *(char *)&v8; // 0x104819
    int64_t v13 = v8;
    *(char *)v13 = v12 - (char)v13 + (char)v11;
    int16_t v14 = a3; // 0x10481b
    int64_t v15; // 0x104801
    __asm_outsd(v14, *(int32_t *)&v15);
    *(char *)a1 = __asm_insb(v14);
    __asm_outsb(v14, *(char *)&v15);
    *(char *)0x47afdb2a = *(char *)0x47afdb2a + (char)(v8 / 256);
    int64_t v16; // 0x104801
    int32_t v17 = *(int32_t *)&v16; // 0x104832
    *(int32_t *)a1 = 2 * v17 | (int32_t)(v17 < 0);
    return result;
}

// Address range: 0x10487c - 0x10487f
int64_t function_10487c(void) {
    // 0x10487c
    int64_t result; // 0x10487c
    return result;
}

// Address range: 0x104881 - 0x104885
int64_t function_104881(int64_t a1, int64_t a2, int64_t a3) {
    // 0x104881
    int64_t result; // 0x104881
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x10488d - 0x104892
int64_t function_10488d(void) {
    // 0x10488d
    return function_73991e6b();
}

// Address range: 0x1048a6 - 0x1048ae
int64_t function_1048a6(int64_t a1) {
    // 0x1048a6
    int64_t result; // 0x1048a6
    char * v1 = (char *)(result + 0x7a803a4); // 0x1048a6
    *v1 = *v1 | 30;
    return result;
}

// Address range: 0x1048bb - 0x1048dc
int64_t function_1048bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x1301c2ec); // 0x1048bb
    int64_t v2; // 0x1048bb
    *v1 = *v1 + (int32_t)v2;
    return v2 + 0xaa3294d & 0xffffffff ^ 0x3d00897c;
}

// Address range: 0x1048dc - 0x1048e3
int64_t function_1048dc(int64_t a1) {
    // 0x1048dc
    int64_t result; // 0x1048dc
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x104949 - 0x10494a
int64_t function_104949(void) {
    // 0x104949
    int64_t result; // 0x104949
    return result;
}

// Address range: 0x1049b3 - 0x1049b8
int64_t function_1049b3(void) {
    // 0x1049b3
    return function_1f8a6f3();
}

// Address range: 0x1049bb - 0x1049be
int64_t function_1049bb(int64_t a1) {
    // 0x1049bb
    int64_t result; // 0x1049bb
    return result;
}

// Address range: 0x104a4d - 0x104a57
int64_t function_104a4d(int64_t a1) {
    // 0x104a4d
    int64_t result; // 0x104a4d
    *(int32_t *)0x448e56e06d86abb5 = (int32_t)result;
    return result;
}

// Address range: 0x104a98 - 0x104ab2
int64_t function_104a98(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    __asm_in(-115);
    unknown_ffffffffc15ec4a5();
    int64_t v2 = unknown_2cd1a6ab(); // 0x104aa5
    *(int32_t *)a1 = (int32_t)v2;
    int64_t v3 = (v2 | 92) + 239; // 0x104aad
    *(char *)v1 = *(char *)&v1 | (char)v3;
    return v3 & 239 | v2 & -256;
}

// Address range: 0x104ac4 - 0x104acc
int64_t function_104ac4(void) {
    // 0x104ac4
    int64_t v1; // 0x104ac4
    int32_t * v2 = (int32_t *)(v1 - 100); // 0x104ac4
    *v2 = *v2 + (int32_t)v1;
    return function_ffffffffa8e4b8c1();
}

// Address range: 0x104b0e - 0x104b90
int64_t function_104b0e(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_3d123314(); // 0x104b0e
    int64_t v2 = v1 + 0xc56ffe18; // 0x104b15
    int64_t v3 = v2 & 0xffffffff; // 0x104b15
    unsigned char v4 = (char)a3; // 0x104b1a
    int64_t v5; // 0x104b0e
    unsigned char v6 = (char)v5 + v4; // 0x104b1a
    unsigned char v7 = v6 + (char)((int32_t)v1 < 0x3a9001e8); // 0x104b1a
    if (v7 == 0 || ((int32_t)v1 < 0x3a9001e8 ? v7 <= v4 : v6 < v4)) {
        char * v8 = (char *)(v3 + 0x54a0245); // 0x104b1e
        *v8 = *v8 - v7;
        char v9 = *(char *)(a3 & -256 | (int64_t)v7); // 0x104b27
        return (v2 - (v5 & 0xff00) & 0xff00 | v2 & 0xffff0000 | (int64_t)(v9 & (char)v2)) ^ 0x535dfefb;
    }
    int64_t v10 = v3 + 0x33af43af; // 0x104b81
    char * v11 = (char *)(v10 & 0xffffffff); // 0x104b86
    *v11 = *v11 + (char)v10;
    return __asm_wait();
}

// Address range: 0x104b9e - 0x104ba6
int64_t function_104b9e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x104b9e
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return function_104be8();
}

// Address range: 0x104bad - 0x104bc8
int64_t function_104bad(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = function_104c68(); // 0x104bb8
    char * v2 = (char *)v1; // 0x104bbe
    *v2 = *v2 + (char)v1;
    char v3 = *(char *)0x550e5c7; // 0x104bc0
    int64_t v4; // 0x104bad
    *(char *)0x550e5c7 = v3 + (char)((uint64_t)v4 / 256);
    int64_t result = v1; // 0x104bc6
    if (a4 == 0) {
        result = function_104c1f();
    }
    // 0x104bc8
    return result;
}

// Address range: 0x104be8 - 0x104bf1
int64_t function_104be8(void) {
    // 0x104be8
    int64_t v1; // 0x104be8
    return v1 & -256 | (int64_t)*(char *)-0x52c4233bc2faca01;
}

// Address range: 0x104bf4 - 0x104c00
int64_t function_104bf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x104bf4
    int64_t v1; // 0x104bf4
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a4;
    return function_ffffffff87f84d9d();
}

// Address range: 0x104c1f - 0x104c20
int64_t function_104c1f(void) {
    // 0x104c1f
    int64_t result; // 0x104c1f
    return result;
}

// Address range: 0x104c20 - 0x104c67
int64_t function_104c20(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x104c20
    int64_t v1; // 0x104c20
    int64_t v2 = v1;
    int32_t v3 = (int32_t)v1 & -256;
    char v4 = *(char *)(v1 - 85); // 0x104c29
    int64_t v5 = a1 & -256 | (int64_t)((char)(v3 < 0xff85c701) + (char)a1 - v4); // 0x104c29
    *(int32_t *)v5 = v3;
    unsigned char v6 = *(char *)-0x202eccbe; // 0x104c3b
    char v7 = ((v2 & 0xff00) + v2) / 256; // 0x104c3b
    unsigned char v8 = v6 + v7; // 0x104c3b
    *(char *)-0x202eccbe = v8;
    int32_t * v9 = (int32_t *)(a2 + 16); // 0x104c41
    int32_t v10 = *v9 + (int32_t)v1 + (int32_t)(v8 < v6); // 0x104c41
    *v9 = v10;
    int64_t v11 = (a4 % 256 & v2 | a4 & -256) - 1; // 0x104c44
    int32_t v12 = v3; // 0x104c44
    if (v11 != 0 == v10 == 0) {
        v12 = function_104c75();
    }
    uint32_t v13 = v12 >> 31; // 0x104c4e
    *(char *)0x7a474b56 = *(char *)0x7a474b56 + v7;
    int32_t v14 = *(int32_t *)(v1 + 0x675400b3 + (int64_t)v13); // 0x104c55
    bool v15; // 0x104c20
    int64_t v16 = v15 ? -1 : 1; // 0x104c5c
    int64_t v17 = v15 ? -5 : 5; // 0x104c31
    int64_t result = unknown_ffffffff8186a463(v5 + v17, v16 + (int64_t)(v14 | -0x71ac6403), v13); // 0x104c5d
    __asm_out((int16_t)v13, (char)result);
    char * v18 = (char *)v11; // 0x104c64
    *v18 = *v18 ^ 11;
    return result;
}

// Address range: 0x13a3a4 - 0x13a513
int64_t function_13a3a4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x13a3a4
    int64_t v1; // 0x13a3a4
    char v2 = v1; // 0x13a3a4
    char v3 = (char)(v1 / 256) + v2; // 0x13a3a4
    int64_t result = 256 * (int64_t)v3 | v1 & -0xff01; // 0x13a3a4
    if (v3 < 0) {
        // 0x13a3a8
        *(char *)a1 = v2;
        *(char *)(a2 + 0x68c3af3a) = v3;
        char * v4 = (char *)(a4 + 45); // 0x13a3b1
        *v4 = *v4 + (char)(a4 / 256);
        char * v5 = (char *)(result + a3 & 0xffffffff); // 0x13a3b4
        *v5 = *v5 ^ (char)(v1 / 256);
        return result;
    }
    int32_t * v6 = (int32_t *)(result + 4 * v1); // 0x13a3ee
    uint32_t v7 = *v6; // 0x13a3ee
    *v6 = v7 / 0x4000000 | 64 * v7;
    unsigned char v8 = (char)a4 % 32; // 0x13a3f7
    if (v8 != 0) {
        char * v9 = (char *)(a3 - 60); // 0x13a3f7
        *v9 = *v9 << v8;
    }
    return result;
}

// Address range: 0x13a7a4 - 0x13a7db
int64_t function_13a7a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4;
    int64_t v2; // 0x13a7a4
    unsigned char v3 = (char)(v2 / 256); // 0x13a7a6
    char v4 = v1 - v3; // 0x13a7a6
    *(char *)a4 = v4;
    int64_t result; // 0x13a7a4
    if (v1 < v3 || v4 == 0) {
        // 0x13a7ac
        return result;
    }
    // 0x13a7d7
    *(char *)result = *(char *)&result & v1;
    char * v5 = (char *)(v2 & -256); // 0x13a7d9
    *v5 = *v5 - (char)a3;
    return result;
}

// Address range: 0x217c33 - 0x217c3f
int64_t function_217c33(int64_t a1, int64_t a2) {
    // 0x217c33
    int64_t result; // 0x217c33
    bool v1; // 0x217c33
    if (!v1) {
        result = function_217bdf();
    }
    // 0x217c35
    return result;
}

// Address range: 0x217cc4 - 0x217cc9
int64_t function_217cc4(void) {
    // 0x217cc4
    return function_130b7eb1();
}

// Address range: 0x217d0b - 0x217d18
int64_t function_217d0b(void) {
    // 0x217d0b
    int64_t v1; // 0x217d0b
    int32_t * v2 = (int32_t *)(v1 - 120); // 0x217d12
    *v2 = *v2 + 10;
    return v1 & 0xfe1700d6 | (int64_t)((int32_t)&g10 | 0x1e86029);
}

// Address range: 0x217d7b - 0x217d82
int64_t function_217d7b(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 0xa46fe18); // 0x217d7b
    int64_t result; // 0x217d7b
    *v1 = *v1 | (int32_t)result;
    return result;
}

// Address range: 0x217db2 - 0x217db3
int64_t function_217db2(int64_t a1) {
    // 0x217db2
    int64_t result; // 0x217db2
    return result;
}

// Address range: 0x217df3 - 0x217e62
int64_t function_217df3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x217df3
    int64_t v1; // 0x217df3
    uint64_t v2 = v1;
    unknown_ffffffffc1125efb();
    char v3 = a3; // 0x217e03
    *(char *)a3 = (char)v1 + v3;
    int64_t v4 = unknown_3b12ad0c(); // 0x217e06
    int64_t v5; // 0x217df3
    char v6 = *(char *)&v5; // 0x217e16
    bool v7; // 0x217df3
    int64_t v8 = (v7 ? -1 : 1) + a1; // 0x217e16
    v5 = v8;
    if (v6 == v3) {
        char * v9 = (char *)((int64_t)(-0xbfe17a8 * *(int32_t *)(v2 + 0x4367c3d0)) - 1); // 0x217e1b
        *v9 = *v9 & (char)(v2 / 256);
        return a3 & 0xffffffff;
    }
    uint32_t v10 = (int32_t)v8; // 0x217e3c
    uint32_t v11 = v10 + (int32_t)((v7 ? 0xffffffff : 1) + a2); // 0x217e3c
    char * v12 = (char *)(v2 - 115); // 0x217e3e
    *v12 = (char)(v11 < v10) + (char)v2 + *v12;
    int64_t result = unknown_3d23664f(v11); // 0x217e49
    int32_t * v13 = (int32_t *)((2 * v2 & 0xfffffffe) + 0x6225c7b2); // 0x217e52
    uint32_t v14 = *v13; // 0x217e52
    *v13 = v14 / 2 | 0x80000000 * v14;
    char * v15 = (char *)(v4 & 0xffffffff); // 0x217e5e
    *v15 = *v15 | (char)result;
    return result;
}

// Address range: 0x217e63 - 0x217e88
int64_t function_217e63(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x217e63
    bool v1; // 0x217e63
    bool v2 = v1;
    int64_t v3; // 0x217e63
    uint32_t v4 = (int32_t)v3; // 0x217e68
    uint32_t v5 = (int32_t)unknown_73e1b069() + v4; // 0x217e68
    bool v6 = v2 ? v5 + (int32_t)v2 <= v4 : v5 < v4; // 0x217e68
    int32_t v7 = *(int32_t *)(a4 + 58); // 0x217e6b
    int32_t * v8 = (int32_t *)(a3 + 55); // 0x217e71
    *v8 = *v8 + (int32_t)a2;
    int64_t v9; // 0x217e63
    char v10 = *(char *)&v9; // 0x217e74
    *(char *)(int64_t)(v7 + (int32_t)a1 + (int32_t)v6) = v10;
    return function_209f7e2(0x6ca8d29f, (v1 ? -1 : 1) + a2, 2 * (int32_t)a3);
}

// Address range: 0x217e95 - 0x217e96
int64_t function_217e95(int64_t a1) {
    // 0x217e95
    int64_t result; // 0x217e95
    return result;
}

// Address range: 0x217ea7 - 0x217eaf
int64_t function_217ea7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 0xf8cb455 + 2 * a4); // 0x217ea7
    *v1 = *v1 & (int32_t)a2;
    int64_t result; // 0x217ea7
    return result;
}

// Address range: 0x2e0d0e - 0x2e0d5a
int64_t function_2e0d0e(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2;
    int64_t v2; // 0x2e0d0e
    int32_t v3 = 2 * (int32_t)v2; // 0x2e0d0e
    *(int32_t *)v2 = v3;
    int64_t v4; // 0x2e0d0e
    if (v3 < 0) {
        // 0x2e0d1d
        __asm_sti();
        return v4 & 0xffff00ff | (int64_t)&g43;
    }
    int64_t v5 = function_2e0c9f(); // 0x2e0d19
    __asm_rcl(*(int32_t *)&v1);
    int32_t * v6 = (int32_t *)(v5 + 95); // 0x2e0d46
    *v6 = *v6 | (int32_t)a1;
    unsigned char v7 = *(char *)&v4; // 0x2e0d4d
    unsigned char v8 = (char)v5; // 0x2e0d4d
    *(char *)v4 = v7 - v8;
    return v5 - (v4 + 256 * (int64_t)(v7 < v8) & 0xff00) & 0xff00 | v5 & -0xff01;
}

// Address range: 0x2e0d5d - 0x2e0d5e
int64_t function_2e0d5d(void) {
    // 0x2e0d5d
    int64_t result; // 0x2e0d5d
    return result;
}

// Address range: 0x2e0d83 - 0x2e0dfe
int64_t function_2e0d83(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2e0d83
    int64_t v1; // 0x2e0d83
    uint64_t v2 = v1;
    int64_t v3 = a2;
    *(int32_t *)v2 = (int32_t)v2 - 0x4e8ff15;
    int64_t v4 = unknown_ffffffffdf727c91(); // 0x2e0d8b
    char * v5 = (char *)v4; // 0x2e0d95
    *v5 = *v5 - (char)v4;
    int64_t v6 = v4 & -256 | (int64_t)__asm_in(-103); // 0x2e0d97
    int32_t * v7 = (int32_t *)v6; // 0x2e0d99
    int32_t v8 = v6; // 0x2e0d99
    *v7 = *v7 - v8;
    int32_t v9 = v8 + 0x520845ff; // 0x2e0d9b
    int64_t v10; // 0x2e0d83
    int64_t v11; // 0x2e0d83
    if (llvm_ctpop_i8((char)v9) % 2 != 0) {
        // 0x2e0da6
        v11 = v6;
        v10 = v6;
        if (((v9 ^ v8) & (v8 ^ -0x80000000)) < 0) {
            goto lab_0x2e0dcf;
        } else {
            goto lab_0x2e0dad;
        }
    } else {
        uint64_t v12 = (v6 & 0xffffffff) * (int64_t)*(int32_t *)(v6 + 4); // 0x2e0da2
        int64_t v13 = v12 & 0xffffff00 | (int64_t)*(char *)(v12 % 256 + v2); // 0x2e0da5
        v11 = v13;
        v10 = v13;
        if (v12 > 0xffffffff) {
            goto lab_0x2e0dcf;
        } else {
            goto lab_0x2e0dad;
        }
    }
  lab_0x2e0dcf:;
    int64_t v14 = v10;
    int32_t * v15 = (int32_t *)(((v14 + 65) % 256 | v14 & -256) - 0x5bfbcb78); // 0x2e0dd3
    *v15 = *v15 + (int32_t)v1;
    int64_t result = unknown_16b0e0d(a5); // 0x2e0ddc
    char * v16 = (char *)(result + 0x57e03b0a); // 0x2e0de1
    *v16 = *v16 | -101;
    *(char *)-0x1193c707 = *(char *)-0x1193c707 + (char)(v2 / 256);
    return result;
  lab_0x2e0dad:;
    uint32_t v17 = *(int32_t *)0x68efaf; // 0x2e0db4
    *(int32_t *)0x68efaf = v17 + 0x68efa3;
    unsigned char v18 = *(char *)&v3; // 0x2e0db7
    unsigned char v19 = v18 + (char)(v2 / 256); // 0x2e0db7
    unsigned char v20 = v19 + (char)(v17 > 0xff97105c); // 0x2e0db7
    *(char *)v3 = v20;
    *(char *)0x13da4fed19ddd = (char)v11;
    int64_t result2 = v11; // 0x2e0dcb
    if (v20 != 0 && !((v17 > 0xff97105c ? v20 <= v18 : v19 < v18))) {
        result2 = function_2e0d5d();
    }
    // 0x2e0dcd
    return result2;
}

// Address range: 0x2e0e29 - 0x2e0e46
int64_t function_2e0e29(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e0e29
    __asm_out((int16_t)a3, (char)unknown_46d1e72f());
    char * v1 = (char *)(a4 + a1); // 0x2e0e39
    *v1 = *v1 + 58;
    return unknown_ffffffffc81cc243();
}

// Address range: 0x2e0e54 - 0x2e0e55
int64_t function_2e0e54(void) {
    // 0x2e0e54
    int64_t result; // 0x2e0e54
    return result;
}

// Address range: 0x2e0e5d - 0x2e0e61
int64_t function_2e0e5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e0e5d
    int64_t result; // 0x2e0e5d
    return result;
}

// Address range: 0x2e0e64 - 0x2e0e70
int64_t function_2e0e64(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e0e64
    int64_t result; // 0x2e0e64
    result = function_2e0e54();
    int32_t * v1 = (int32_t *)(result - 1); // 0x2e0e6c
    int64_t v2; // 0x2e0e64
    *v1 = *v1 + (int32_t)(int64_t)&v2;
    return result;
}

// Address range: 0x2e0ee8 - 0x2e0eeb
int64_t function_2e0ee8(void) {
    // 0x2e0ee8
    int64_t result; // 0x2e0ee8
    return result;
}

// Address range: 0x2e0f70 - 0x2e0f75
int64_t function_2e0f70(void) {
    // 0x2e0f70
    return function_ffffffffa8f530af();
}

// Address range: 0x2e0f75 - 0x2e0f76
int64_t function_2e0f75(int64_t a1) {
    // 0x2e0f75
    int64_t result; // 0x2e0f75
    return result;
}

// Address range: 0x2e0f77 - 0x2e0f79
int64_t function_2e0f77(int64_t a1) {
    // 0x2e0f77
    int64_t result; // 0x2e0f77
    return result;
}

// Address range: 0x2e0f99 - 0x2e0f9c
int64_t function_2e0f99(int64_t a1) {
    // 0x2e0f99
    int64_t result; // 0x2e0f99
    return result;
}

// Address range: 0x2e0fda - 0x2e0fde
int64_t function_2e0fda(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 13); // 0x2e0fda
    int64_t result; // 0x2e0fda
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x2e0ff4 - 0x2e1000
int64_t function_2e0ff4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 + 0x52a80c80); // 0x2e0ff4
    *v1 = *v1 + (char)a4;
    int64_t result; // 0x2e0ff4
    return result;
}

// Address range: 0x2e1057 - 0x2e1059
int64_t function_2e1057(void) {
    // 0x2e1057
    int64_t result; // 0x2e1057
    return result;
}

// Address range: 0x2e109b - 0x2e10a6
int64_t function_2e109b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e109b
    int64_t v1; // 0x2e109b
    unsigned char v2 = (char)v1;
    *(char *)a2 = v2 / 2 | 128 * v2;
    return function_ffffffffce6a1b7e();
}

// Address range: 0x2e10fa - 0x2e1106
int64_t function_2e10fa(void) {
    // 0x2e10fa
    unknown_216119a();
    return function_ffffffffaf2353ff();
}

// Address range: 0x2e1135 - 0x2e1158
int64_t function_2e1135(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e1135
    int64_t v1; // 0x2e1135
    uint64_t v2 = v1;
    *(char *)a1 = (char)(v1 & v1) + (char)v1;
    char v3 = *(char *)(4 * a4 + a3); // 0x2e113f
    *(int32_t *)((256 * (int64_t)(v3 + (char)(v2 / 256)) | v2 & -0xff01) + 8) = (int32_t)a4;
    return unknown_13b20350();
}

// Address range: 0x37c6ca - 0x37c6e5
int64_t function_37c6ca(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a3; // 0x37c6ca
    int64_t result; // 0x37c6ca
    *(int32_t *)a3 = (int32_t)result + v1;
    char * v2 = (char *)(result + 0x6f2b3a03); // 0x37c6cc
    *v2 = *v2 + (char)a3;
    int32_t * v3 = (int32_t *)(a3 - 0x179ccd96); // 0x37c6d3
    *v3 = *v3 & v1;
    int32_t * v4 = (int32_t *)(4 * a1 + 0x1a37fc7 + result); // 0x37c6d9
    *v4 = *v4 + (int32_t)a1;
    return result;
}

// Address range: 0x37c6f7 - 0x37c701
int64_t function_37c6f7(int64_t a1, int64_t a2) {
    // 0x37c6f7
    unknown_265e87fe();
    bool v1; // 0x37c6f7
    int64_t v2 = (v1 ? -1 : 1) + a2; // 0x37c6fd
    *(int32_t *)a1 = *(int32_t *)v2;
    int64_t v3 = v1 ? -4 : 4; // 0x37c6fe
    return function_37c723(v3 + a1, v2 + v3);
}

// Address range: 0x37c701 - 0x37c723
int64_t function_37c701(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a1 + 0x3fcf00e3); // 0x37c701
    *v1 = 2 * *v1;
    unknown_7760570d();
    int64_t result = unknown_ffffffffcabf691c(); // 0x37c716
    int32_t * v2 = (int32_t *)(a1 + (int64_t)&g2); // 0x37c71b
    *v2 = *v2 + (int32_t)a4;
    return result;
}

// Address range: 0x37c723 - 0x37c740
int64_t function_37c723(int64_t a1, int64_t a2) {
    // 0x37c723
    unknown_6dd07c2b();
    int32_t v1 = __asm_in_133(14); // 0x37c72a
    int64_t result = v1; // 0x37c72a
    char * v2 = (char *)(result + 18); // 0x37c730
    char v3 = v1; // 0x37c730
    *v2 = *v2 | v3;
    *(char *)-0x636383bcfa18fe18 = v3;
    return result;
}

// Address range: 0x37c74e - 0x37c75c
int64_t function_37c74e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37c74e
    return unknown_103d0758() & -169;
}

// Address range: 0x37c77d - 0x37c798
int64_t function_37c77d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x37c77d
    unknown_5336c685();
    char * v1 = (char *)(a4 - 0x6efbf900); // 0x37c785
    *v1 = *v1 + 58;
    unknown_323b5794();
    return function_715955ff();
}

// Address range: 0x37c7e1 - 0x37c80a
int64_t function_37c7e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)0x14d72efc; // 0x37c7f4
    int64_t v2; // 0x37c7e1
    *(char *)0x14d72efc = v1 + (char)((uint64_t)v2 / 256);
    return function_128f296();
}

// Address range: 0x37c849 - 0x37c84c
int64_t function_37c849(void) {
    // 0x37c849
    int64_t result; // 0x37c849
    return result;
}

// Address range: 0x37c84c - 0x37c84d
int64_t function_37c84c(void) {
    // 0x37c84c
    int64_t result; // 0x37c84c
    return result;
}

// Address range: 0x37c856 - 0x37c8da
int64_t function_37c856(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_fffffffff2bbcea7(); // 0x37c856
    int32_t * v2 = (int32_t *)(a1 + 86); // 0x37c85c
    uint32_t v3 = *v2; // 0x37c85c
    int32_t v4 = 2 * v3; // 0x37c85c
    *v2 = v4;
    if (v4 < 0 == (v3 / 0x40000000 % 2 != (int32_t)(v3 < 0))) {
        // 0x37c865
        int64_t v5; // 0x37c856
        *(char *)v5 = *(char *)&v5 + (char)a4;
        return function_8388b2();
    }
    uint16_t v6 = (int16_t)v1; // 0x37c85f
    int64_t v7; // 0x37c856
    uint16_t v8 = (int16_t)v7 % 256; // 0x37c85f
    *(int32_t *)0x7b7301d6 = *(int32_t *)0x7b7301d6 + (int32_t)a1;
    return (v1 & 0xffff0000 | (int64_t)(v6 / v8 % 256) | (int64_t)(256 * (v6 % v8))) + v7 & 0xffffffff;
}

// Address range: 0x37c972 - 0x37c975
int64_t function_37c972(int64_t a1) {
    // 0x37c972
    int64_t result; // 0x37c972
    return result;
}

// Address range: 0x37c9cb - 0x37c9ce
int64_t function_37c9cb(void) {
    // 0x37c9cb
    int64_t result; // 0x37c9cb
    return result;
}

// Address range: 0x37c9d8 - 0x37c9dd
int64_t function_37c9d8(void) {
    // 0x37c9d8
    return function_3d75cc00();
}

// Address range: 0x37ca0a - 0x37ca0b
int64_t function_37ca0a(int64_t a1) {
    // 0x37ca0a
    int64_t result; // 0x37ca0a
    return result;
}

// Address range: 0x37ca1a - 0x37ca36
int64_t function_37ca1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37ca1a
    __asm_iretd();
    int64_t v1; // 0x37ca1a
    return v1 & 0xffffffff;
}

// Address range: 0x37ca70 - 0x37ca77
int64_t function_37ca70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x37ca70
    int64_t result; // 0x37ca70
    return result;
}

// Address range: 0x37cad7 - 0x37cada
int64_t function_37cad7(void) {
    // 0x37cad7
    int64_t result; // 0x37cad7
    return result;
}

// Address range: 0x37cade - 0x37caee
int64_t function_37cade(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 0x58c1ff86); // 0x37cae5
    int64_t result; // 0x37cade
    *v1 = *v1 - (int32_t)result;
    return result;
}

// Address range: 0x491976 - 0x491d79
int64_t function_491976(int64_t a1, int64_t a2, int64_t a3) {
    // 0x491976
    int128_t v1; // 0x491976
    int128_t v2 = v1;
    int64_t v3 = __readfsqword(40); // 0x4919a3
    function_491e2c(a3, 0);
    int64_t * v4; // 0x491976
    __asm_movups((int128_t)(int64_t)v4, __asm_xorps(v2, v2));
    int64_t v5; // bp-456, 0x491976
    int64_t * v6 = (int64_t *)((int64_t)&v5 + 8);
    int64_t v7 = (int64_t)&g1;
    if (*(char *)&g25 == 0) {
        // 0x4919d1
        if ((int32_t)function_20550(&g25) != 0) {
            // 0x4919e1
            function_7293a(&g27);
            g28 = (int64_t)&g34;
            g29 = 1;
            g30 = 0;
            g31 = 0;
            *(int32_t *)&g32 = 0x3f800000;
            g33 = 0;
            g34 = 0;
            function_1ff50(&g25);
            __cxa_atexit((void (*)(int64_t *))0x491d7a, &g26, (int64_t *)0x849800);
        }
    }
    // 0x491a5b
    function_49212c(&v5, &g26, a1, v7);
    int64_t v8 = v5; // 0x491a7f
    int64_t * v9; // bp-472, 0x491976
    int64_t * v10 = v9; // 0x491a8e
    v5 = 0;
    v9 = (int64_t *)v8;
    int64_t v11; // bp-464, 0x491976
    int64_t v12 = v11; // 0x491aad
    int64_t v13 = (int64_t)v10; // bp-440, 0x491ab2
    int64_t v14; // 0x491976
    v11 = v14;
    int64_t v15 = v12; // bp-432, 0x491abc
    function_35fcc(&v15);
    function_35fcc(v6);
    int64_t v16; // 0x491976
    int64_t v17; // 0x491976
    int64_t v18; // 0x491976
    while (v8 == 0) {
        // 0x491ae0
        if (v7 == 0x80000000 - (int64_t)&g1) {
            // 0x491c32
            v18 = a2;
            v16 = (int64_t)&v15;
            v17 = 0;
            goto lab_0x491c32_3;
        }
        v7 += (int64_t)&g1;
        if (*(char *)&g25 == 0) {
            // 0x4919d1
            if ((int32_t)function_20550(&g25) != 0) {
                // 0x4919e1
                function_7293a(&g27);
                g28 = (int64_t)&g34;
                g29 = 1;
                g30 = 0;
                g31 = 0;
                *(int32_t *)&g32 = 0x3f800000;
                g33 = 0;
                g34 = 0;
                function_1ff50(&g25);
                __cxa_atexit((void (*)(int64_t *))0x491d7a, &g26, (int64_t *)0x849800);
            }
        }
        // 0x491a5b
        function_49212c(&v5, &g26, a1, v7);
        v8 = v5;
        v10 = v9;
        v5 = 0;
        v9 = (int64_t *)v8;
        v12 = v11;
        v13 = (int64_t)v10;
        v11 = 0;
        v15 = v12;
        function_35fcc(&v15);
        function_35fcc(v6);
    }
    // 0x491c5b
    v18 = a2;
    int64_t v19 = a1; // 0x491c44
    v16 = (int64_t)&v15;
    goto lab_0x491c5b;
  lab_0x491c5b:;
    int64_t v20 = v19;
    function_491e06(&v13, (int128_t *)&v9);
    int64_t v21 = function_4efd30(48); // 0x491c81
    *(int64_t *)(v21 + 8) = 0x30938542b805f090;
    *(int64_t *)v21 = (-0x13c772a311d2c06b * v20 ^ -0x716204840bfb3545) - 0x5e0a76393bfeda2b;
    int64_t v22 = v13; // 0x491cb9
    v13 = 0;
    *(int64_t *)(v21 + 32) = v22;
    int64_t v23 = v15; // 0x491ccb
    v15 = 0;
    *(int64_t *)(v21 + 40) = v23;
    function_491e2c(a3, v21);
    function_35fcc((int64_t *)v16);
    int64_t v24 = *(int64_t *)((int64_t)v9 + 24); // 0x491cfb
    *(int64_t *)(v24 + 6) = v18;
    *(int16_t *)v24 = (int16_t)&g5;
    *(int32_t *)(v24 + 2) = 0;
    function_20b00(&v13, 0, 2);
    int64_t v25 = *(int64_t *)((int64_t)v9 + 16); // 0x491d24
    *(int64_t *)10 = (-0x13c772a311d2c06b * v25 - 0x14e844eaf98685da ^ -0x716204840bfb3545) - 0x5e0a76393bfeda2b;
    int64_t * v26 = (int64_t *)v20; // 0x491ba5
    int64_t v27; // bp-424, 0x491976
    int64_t v28 = (int64_t)&v27;
    int64_t v29; // bp-94, 0x491976
    int64_t v30 = (int64_t)&v29;
    char * v31 = (char *)v20;
    int64_t v32 = 0x7ffffffb - v20;
    int64_t v33 = 32; // 0x491d40
    int64_t v34; // 0x491976
    int64_t v35; // 0x491976
    while (true) {
        int64_t v36 = v33;
        v29 = *v26;
        uint64_t v37 = 0;
        while ((int32_t)function_1ff80(&v13, 0, v37 + v30, 8 - v37, v28) >= 0) {
            // 0x491be6
            char v38; // 0x491976
            int64_t v39 = v37 + (int64_t)v38; // 0x491beb
            if (v39 >= 8) {
                goto lab_0x491bfa;
            }
            v37 = v39;
        }
        if (v37 < 5) {
            // 0x491d4f
            __asm_rep_movsb_memcpy((char *)&v29, v31, 30);
        }
      lab_0x491bfa:;
        int64_t v40 = (int64_t)v9;
        int64_t v41 = *(int64_t *)(v40 + 16); // 0x491c05
        int64_t v42 = *(int64_t *)(v40 + 24); // 0x491c09
        int64_t v43 = function_49120a(&v13, v42 + 14, v41 + 14, &v29, v20); // 0x491c18
        v35 = v28;
        v34 = v30;
        if ((char)v43 == 0) {
            // break -> 0x491c25
            break;
        }
        int64_t v44 = (int64_t)v9;
        int64_t v45 = v29; // 0x491aff
        int64_t * v46 = (int64_t *)(v44 + 16); // 0x491b10
        *v46 = v45;
        v5 = v45;
        v35 = v28;
        v34 = v45;
        if (v32 + *v46 >= 0x100000000) {
            // break -> 0x491c25
            break;
        }
        // 0x491b34
        v5 = -23;
        *(int64_t *)(v44 + 24) = -23;
        int32_t v47; // bp-476, 0x491976
        uint64_t v48 = function_488a10(v20, 8, 7, (int64_t *)&v47); // 0x491b5c
        v35 = -23;
        v34 = v45;
        if ((char)v48 == 0) {
            // break -> 0x491c25
            break;
        }
        int64_t v49 = *v26; // 0x491b73
        *v26 = v45 == v49 ? -23 : v49;
        function_488a10(v20, 8, (int64_t)v47, NULL);
        if (v45 == v49) {
            // 0x491c32
            v18 = -23;
            v16 = v45 == v49;
            v17 = v48 % 256;
            goto lab_0x491c32_3;
        }
        int64_t v50 = v36 - 1; // 0x491b9c
        v33 = v50;
        if (v50 == 0) {
            // 0x491c25
            v35 = -23;
            v34 = v45 == v49;
            goto lab_0x491c25_2;
        }
    }
    goto lab_0x491c25_2;
  lab_0x491c25_2:
    // 0x491c25
    function_491e2c(a3, 0);
    v18 = v35;
    v16 = v34;
    v17 = 0;
    goto lab_0x491c32_3;
  lab_0x491c32_3:;
    int64_t v51 = function_35fcc(&v11); // 0x491c37
    v19 = __readfsqword(40) ^ v3;
    if (v19 == 0) {
        // 0x491d67
        return v51 & -256 | v17;
    }
    // 0x491c56
    __stack_chk_fail();
    goto lab_0x491c5b;
}

// Address range: 0x491d7a - 0x491e05
int64_t function_491d7a(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 64); // 0x491d87
    int64_t v2 = *v1; // 0x491d87
    if (v2 != 0) {
        int64_t v3 = *(int64_t *)(v2 + 16); // 0x491d90
        int64_t v4 = *(int64_t *)v2; // 0x491d94
        if (v3 != 0) {
            // 0x491d9d
            function_491fda(v3);
            function_4eeb30(v3, 32);
        }
        // 0x491db2
        function_4eeb50(v2);
        while (v4 != 0) {
            int64_t v5 = v4;
            v3 = *(int64_t *)(v5 + 16);
            v4 = *(int64_t *)v5;
            if (v3 != 0) {
                // 0x491d9d
                function_491fda(v3);
                function_4eeb30(v3, 32);
            }
            // 0x491db2
            function_4eeb50(v5);
        }
    }
    int64_t * v6 = (int64_t *)(a1 + 48); // 0x491dc3
    __asm_rep_stosb_memset((char *)*v6, 0, 8 * *(int64_t *)(a1 + 56));
    *(int64_t *)(a1 + 72) = 0;
    *v1 = 0;
    int64_t v7 = *v6; // 0x491de7
    if (v7 != a1 + 96) {
        // 0x491df0
        function_4eeb50(v7);
    }
    // 0x491df5
    return function_72994(a1 + 8);
}

// Address range: 0x49526d - 0x4952a0
int64_t function_49526d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x49526d
    return function_495020(6, a1, a2, a3, a4, a5, a6, a7);
}

// Address range: 0x4952a0 - 0x4952d0
int64_t function_4952a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x4952a0
    return function_495020(7, a1, a2, a3, a4, a5, a6, a7);
}

// Address range: 0x4952d0 - 0x495469
int64_t function_4952d0(int64_t a1, int64_t a2, int64_t str, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x4952d0
    int64_t v1; // bp-216, 0x4952d0
    function_4c1690(&v1);
    int32_t len = strlen((char *)str); // 0x495316
    int64_t v2 = len; // 0x495316
    int64_t v3 = v2 + a5; // 0x49531b
    if (v3 >= 109) {
        // 0x495390
        return 0xffff8f00;
    }
    // 0x495339
    int64_t v4; // bp-164, 0x4952d0
    memcpy(&v4, (int64_t *)str, len);
    int64_t v5; // bp-312, 0x4952d0
    memcpy((int64_t *)((int64_t)&v5 + 148 + v2), (int64_t *)a4, (int32_t)a5);
    int64_t v6 = function_4c14d0(3); // 0x495369
    if (v6 == 0) {
        // 0x495390
        return 0;
    }
    int64_t v7 = function_4c1770(&v1, v6, 1); // 0x495384
    if ((int32_t)v7 != 0) {
        // 0x495390
        return v7 & 0xffffffff;
    }
    // 0x4953a5
    function_4c19e0(&v1, a1, (a2 + 1) / 2);
    function_4c1af0(&v1, &v4, v3);
    int64_t v8; // bp-180, 0x4952d0
    int64_t result = function_4c1b30(&v1, &v8); // 0x4953ea
    if (a7 == 0) {
        // 0x495390
        return result;
    }
    // 0x4953f8
    function_4c1bc0(&v1);
    function_4c1af0(&v1, &v8, v3 + 16);
    int64_t v9; // bp-248, 0x4952d0
    function_4c1b30(&v1, &v9);
    function_4c1bc0(&v1);
    return function_4c1af0(&v1, &v8, 16);
}

// Address range: 0x49bb83 - 0x49bfcf
int64_t function_49bb83(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x49bb83
    int64_t v1; // 0x49bb83
    int64_t v2 = v1;
    int64_t v3 = a5;
    int64_t v4 = a6;
    int64_t v5 = v1 & 2; // 0x49bb88
    function_49e960(a1, a2, a3, a4, v1, v1, (v5 - (v5 | (int64_t)(v5 == 0)) & -8) + 13);
    int64_t * v6 = (int64_t *)(v2 + 176); // 0x49bba1
    int64_t v7 = *v6; // 0x49bba1
    int64_t v8 = *(int64_t *)(v2 + 184); // 0x49bba8
    int32_t * v9 = (int32_t *)(v2 + 216); // 0x49bbc0
    *v9 = (int32_t)*(char *)v7;
    unsigned char v10 = *(char *)(v8 + 1); // 0x49bbc9
    int64_t * v11 = (int64_t *)(v2 + 224); // 0x49bbd4
    *v11 = 256 * (int64_t)*(char *)v8 | (int64_t)v10;
    char * v12 = (char *)(v2 + 372); // 0x49bbde
    function_49bab0(&v3, &v4, (int32_t)(*v12 / 2 % 2), v7 + 1);
    int32_t v13 = *v9; // 0x49bbf6
    function_49e770(v2, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g37, "input record: msgtype = %d, version = [%d:%d], msglen = %d", v13);
    int32_t v14 = *v9; // 0x49bc33
    int64_t result3; // 0x49bb83
    int64_t v15; // 0x49bb83
    int32_t v16; // 0x49bb83
    int64_t v17; // 0x49bb83
    int64_t v18; // 0x49bb83
    int64_t v19; // 0x49bb83
    int64_t * v20; // 0x49bc8b
    if ((v14 & -4) == 20) {
        // 0x49bc45
        if (*(int32_t *)(v2 + 20) != (int32_t)v3) {
            // 0x49bfc8
            return v3 & 0xffffffff;
        }
        unsigned char result = *(char *)(v2 + 369); // 0x49bc55
        if ((int32_t)result < (int32_t)v4) {
            // 0x49cdc0
            return result;
        }
        int64_t v21 = *(int64_t *)(v2 + 200); // 0x49bc6d
        int64_t result2 = *v11; // 0x49bc74
        if (result2 > *(int64_t *)(v2 + 160) + (int64_t)&g7 - v21) {
            // 0x49bfea
            return result2;
        }
        // 0x49bc8b
        v20 = (int64_t *)(v2 + 104);
        int64_t v22 = *v20; // 0x49bc8b
        if (v22 == 0) {
            // 0x49bfea
            return result2;
        }
        uint64_t v23 = *(int64_t *)(v22 + 16); // 0x49bc98
        if (result2 < v23) {
            // 0x49bfea
            return result2;
        }
        int64_t v24 = v23; // 0x49bcaa
        if (*(int32_t *)(v2 + 24) >= 1) {
            // 0x49bcac
            v24 = v23 + (int64_t)&g6;
            if (result2 > v24) {
                // 0x49bfea
                return result2;
            }
        }
        // 0x49bcbc
        v17 = result2;
        v19 = 5;
        if ((*v12 & 2) == 0) {
            goto lab_0x49bdd5;
        } else {
            int64_t v25 = *(int64_t *)(v2 + 168); // 0x49bcc9
            int64_t result4 = (int64_t)*(char *)(v25 + 1); // 0x49bcd3
            result3 = result4;
            switch (v14) {
                case 20: {
                    return result3;
                }
                case 23: {
                    return result3;
                }
                default: {
                    unsigned char v26 = *(char *)v25; // 0x49bcd0
                    uint16_t v27 = *(int16_t *)(v2 + 240); // 0x49bcee
                    if ((int32_t)(256 * (int64_t)v26 || result4) != (int32_t)v27) {
                        // 0x49bfea
                        return result4;
                    }
                    int64_t result5 = function_4968b0(v2, v2, v24, v14); // 0x49bd02
                    if ((int32_t)result5 != 0 || (*v12 & 2) == 0) {
                        // 0x49bfea
                        return result5;
                    }
                    // 0x49bd1f
                    v17 = *v11;
                    v19 = 13;
                    goto lab_0x49bdd5;
                }
            }
        }
    } else {
        // 0x49bd30
        function_49e770(v2, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g38, "unknown record type", v13);
        int64_t result6 = function_49a730(v2, 2, 10); // 0x49bd5f
        int32_t v28 = result6; // 0x49bd64
        if (v28 == 0 || (*v12 & 2) == 0) {
            // 0x49bfea
            return result6;
        }
        if (v28 == -0x6780 || v28 != -0x6700) {
            // 0x49bfea
            return result6;
        }
        // 0x49bd96
        *(int64_t *)(v2 + 248) = *v11 + 13;
        v18 = (int64_t)&g41;
        v15 = (int64_t)"discarding unexpected record (header)";
        v16 = v13;
        goto lab_0x49bdb4;
    }
  lab_0x49bdd5:;
    int64_t result7 = function_49b4a0(v2, v19 + v17); // 0x49bddb
    if ((int32_t)result7 != 0 || (*v12 & 2) == 0) {
        // 0x49bfea
        return result7;
    }
    int64_t v29 = *v11 + 13;
    *(int64_t *)(v2 + 248) = v29;
    int64_t v30 = *v6; // 0x49be13
    unsigned char v31 = *v12 & 2;
    int64_t v32 = v31; // 0x49be2e
    int64_t result8 = function_49e960(v2, 4, (int64_t)"/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t)&g39, (int64_t)"input record from network", v30, (v32 - ((int64_t)(v31 == 0) | v32) & -8) + v29); // 0x49be4b
    if (*v20 == 0) {
        // 0x49bfea
        return result8;
    }
    int64_t result9 = function_49e770(v2, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g8, "=> decrypt buf", (int32_t)v30); // 0x49be78
    if (*(int64_t *)(v2 + 64) == 0) {
        // 0x49bfea
        return result9;
    }
    int64_t v33 = *v20; // 0x49be8a
    if (v33 == 0) {
        // 0x49bfea
        return result9;
    }
    int64_t v34 = *(int64_t *)(v33 + 216); // 0x49be97
    if (v34 == 0) {
        // 0x49bfea
        return 0;
    }
    uint64_t v35 = *v11; // 0x49bea7
    uint32_t v36 = *(int32_t *)(v34 + 4); // 0x49beb2
    int64_t result10 = v36; // 0x49beb2
    if (v35 < *(int64_t *)(v33 + 16)) {
        // 0x49bfea
        return result10;
    }
    // 0x49bebe
    result3 = 7;
    switch (v36) {
        case 7: {
            return result3;
        }
        case 8: {
            goto lab_0x49bed6;
        }
        default: {
            // 0x49becc
            if (v36 != 6) {
                // 0x49bfea
                return result10;
            }
            goto lab_0x49bed6;
        }
    }
  lab_0x49bdb4:
    // 0x49bdb4
    function_49e770(v2, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)v18, (char *)v15, v16);
    return function_49bb30();
  lab_0x49bed6:;
    unsigned char v37 = *(char *)(*(int64_t *)v33 + 44) & 2;
    int64_t v38 = *(int64_t *)(v33 + 32); // 0x49bef5
    if (v35 >= *(int64_t *)(v33 + 24) - v38 + (int64_t)((4 * v37 ^ 8) + 8)) {
        int64_t v39 = v37; // 0x49bef3
        return (v39 - ((int64_t)(v37 == 0) | v39) & 8) + 8;
    }
    // 0x49bf0d
    function_49e770(v2, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g9, "msglen (%d) < explicit_iv_len (%d) + taglen (%d)", (int32_t)v35);
    int64_t result11 = function_49e8b0(v2, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g40, "ssl_decrypt_buf", 0xffff8e80); // 0x49bf60
    if ((*v12 & 2) == 0) {
        // 0x49bfea
        return result11;
    }
    uint32_t v40 = *(int32_t *)(v2 + 8); // 0x49bf84
    result3 = v40;
    switch (v40) {
        case 13: {
            return result3;
        }
        case 11: {
            return result3;
        }
        default: {
            uint32_t v41 = *(int32_t *)(v2 + 360); // 0x49bf99
            v18 = (int64_t)&g42;
            v15 = (int64_t)"discarding invalid record (mac)";
            v16 = -0x7180;
            if (v41 != 0) {
                int32_t * v42 = (int32_t *)(v2 + 28); // 0x49bfa3
                uint32_t v43 = *v42 + 1; // 0x49bfa6
                *v42 = v43;
                v18 = (int64_t)&g42;
                v15 = (int64_t)"discarding invalid record (mac)";
                v16 = -0x7180;
                result3 = v41;
                if (v43 >= v41) {
                    // 0x49bfea
                    return result3;
                }
            }
            goto lab_0x49bdb4;
        }
    }
}

// Address range: 0x502b4f - 0x502b92
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_502b4f(void) {
    // 0x502b4f
    while (true) {
        // 0x502b52
        int64_t v1; // 0x502b4f
        *(int64_t *)(v1 + 256) = (int64_t)&g12;
        function_54cf10(v1);
        int64_t v2; // 0x502b4f
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        function_5029a0(v2);
        *(int64_t *)(v1 + 8) = 0;
        v2 = (int64_t)&g44;
    }
}

// Address range: 0x502b92 - 0x502b94
int64_t function_502b92(void) {
    // 0x502b92
    int64_t result; // 0x502b92
    return result;
}

// Address range: 0x502ba0 - 0x502c08
int64_t function_502ba0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 8; // 0x502bac
    int64_t v2 = *(int64_t *)(a2 + 8); // 0x502bb4
    int64_t * v3 = (int64_t *)a1; // 0x502bb8
    *v3 = v2;
    int64_t v4 = *(int64_t *)(v2 - 24) + a1; // 0x502bc5
    *(int64_t *)v4 = *(int64_t *)(a2 + 16);
    int64_t v5; // 0x502ba0
    function_4fc7e0(v4, 0, v5);
    *v3 = 0;
    int64_t v6 = *(int64_t *)(a2 + 24); // 0x502bda
    *(int64_t *)(*(int64_t *)-24 + a1) = v6;
    function_4feb80(v1);
    return function_4fc7e0(*(int64_t *)(a1 - 16) + a1, (int32_t)v1, v6);
}

// Address range: 0x502c08 - 0x502c33
int64_t function_502c08(void) {
    // 0x502c08
    int64_t v1; // 0x502c08
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x502c08
    *(int64_t *)v1 = v2;
    *(int64_t *)(*(int64_t *)(v2 - 24) + v1) = *(int64_t *)(v1 + 16);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    function_5029a0(v1);
    return function_502c08();
}

// Address range: 0x502c40 - 0x502cf7
// From class:    std::basic_ofstream<char, std::char_traits<char> >
// Type:          constructor
int64_t function_502c40(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 248; // 0x502c4e
    function_54cb80(v1);
    *(int64_t *)(a1 + 464) = 0;
    *(char *)(a1 + 472) = 0;
    *(char *)(a1 + 473) = 0;
    *(int64_t *)(a1 + 480) = 0;
    *(int64_t *)(a1 + 488) = 0;
    *(int64_t *)(a1 + 496) = 0;
    *(int64_t *)(a1 + 504) = 0;
    int64_t * v2 = (int64_t *)a1; // 0x502caf
    *v2 = (int64_t)&g13;
    int64_t * v3 = (int64_t *)v1; // 0x502cb2
    *v3 = (int64_t)&g14;
    int64_t v4; // 0x502c40
    function_4fc7e0(v1, 0, v4);
    int64_t v5 = a1 + 8; // 0x502cc5
    *v3 = (int64_t)&g16;
    *v2 = (int64_t)&g15;
    function_4feb80(v5);
    return function_4fc7e0(v1, (int32_t)v5, (int64_t)&g15);
}

// Address range: 0x502cf7 - 0x502d32
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_502cf7(void) {
    // 0x502cf7
    while (true) {
        // 0x502cfa
        int64_t v1; // 0x502cf7
        *(int64_t *)(v1 + 248) = (int64_t)&g12;
        function_54cf10(v1);
        int64_t v2; // 0x502cf7
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        function_5029a0(v2);
        v2 = (int64_t)&g44;
    }
}

// Address range: 0x502d32 - 0x502d34
int64_t function_502d32(void) {
    // 0x502d32
    int64_t result; // 0x502d32
    return result;
}

// Address range: 0x502d40 - 0x502df7
int64_t function_502d40(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 16); // 0x502d50
    int64_t * v2 = (int64_t *)a1; // 0x502d54
    *v2 = v1;
    int64_t * v3 = (int64_t *)(v1 - 24); // 0x502d57
    int64_t v4 = *v3; // 0x502d57
    *(int64_t *)(v4 + a1) = *(int64_t *)(a2 + 24);
    *(int64_t *)(a1 + 8) = 0;
    function_4fc7e0(*v3 + a1, 0, v4);
    int64_t v5 = *(int64_t *)(a2 + 32); // 0x502d79
    int64_t v6 = a1 + 16; // 0x502d7f
    int64_t * v7 = (int64_t *)v6; // 0x502d7f
    *v7 = v5;
    int64_t v8 = *(int64_t *)(v5 - 24) + v6; // 0x502d87
    *(int64_t *)v8 = *(int64_t *)(a2 + 40);
    function_4fc7e0(v8, 0, v4);
    int64_t v9 = *(int64_t *)(a2 + 8); // 0x502d98
    int64_t v10 = a1 + 24; // 0x502d9c
    *v2 = v9;
    *(int64_t *)(*(int64_t *)(v9 - 24) + a1) = *(int64_t *)(a2 + 48);
    *v7 = *(int64_t *)(a2 + 56);
    *v2 = 0;
    int64_t v11 = *(int64_t *)(a2 + 64); // 0x502dc5
    *(int64_t *)(*(int64_t *)-24 + a1) = v11;
    *v7 = *(int64_t *)(a2 + 72);
    function_4feb80(v10);
    return function_4fc7e0(*v2 + a1, (int32_t)v10, v11);
}

// Address range: 0x502df7 - 0x502e5a
int64_t function_502df7(void) {
    // 0x502df7
    int64_t v1; // 0x502df7
    int64_t v2 = *(int64_t *)(v1 + 16); // 0x502df7
    int64_t * v3 = (int64_t *)v1; // 0x502dfe
    *v3 = v2;
    *(int64_t *)(*(int64_t *)(v2 - 24) + v1) = *(int64_t *)(v1 + 24);
    *(int64_t *)(v1 + 8) = 0;
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    function_5029a0(v1);
    int64_t v4 = *(int64_t *)(v1 + 8); // 0x502e28
    *v3 = v4;
    *(int64_t *)(*(int64_t *)(v4 - 24) + v1) = *(int64_t *)(v1 + 48);
    int64_t v5 = v1 + 16; // 0x502e3f
    int64_t * v6 = (int64_t *)v5; // 0x502e3f
    *v6 = *(int64_t *)(v1 + 56);
    int64_t v7 = *(int64_t *)(v1 + 32); // 0x502e43
    *v6 = v7;
    *(int64_t *)(*(int64_t *)(v7 - 24) + v5) = *(int64_t *)(v1 + 40);
    return function_502df7();
}

// Address range: 0x502e5a - 0x502e5c
int64_t function_502e5a(void) {
    // 0x502e5a
    int64_t result; // 0x502e5a
    return result;
}

// Address range: 0x502e60 - 0x502f53
// From class:    std::basic_fstream<char, std::char_traits<char> >
// Type:          constructor
int64_t function_502e60(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 264; // 0x502e70
    function_54cb80(v1);
    *(int64_t *)(a1 + 480) = 0;
    *(char *)(a1 + 488) = 0;
    *(char *)(a1 + 489) = 0;
    *(int64_t *)(a1 + 496) = 0;
    *(int64_t *)(a1 + 504) = 0;
    *(int64_t *)(a1 + (int64_t)&g3) = 0;
    *(int64_t *)(a1 + (int64_t)&g4) = 0;
    int64_t * v2 = (int64_t *)a1; // 0x502ed5
    *v2 = (int64_t)&g19;
    int64_t * v3 = (int64_t *)v1; // 0x502ed8
    *v3 = (int64_t)&g20;
    *(int64_t *)(a1 + 8) = 0;
    int64_t v4; // 0x502e60
    function_4fc7e0(v1, 0, v4);
    int64_t * v5 = (int64_t *)(a1 + 16); // 0x502efc
    *v5 = (int64_t)&g17;
    *v3 = (int64_t)&g18;
    function_4fc7e0(v1, 0, v4);
    int64_t v6 = a1 + 24; // 0x502f13
    *v2 = (int64_t)&g21;
    *v5 = (int64_t)&g22;
    *v3 = (int64_t)&g23;
    function_4feb80(v6);
    return function_4fc7e0(v1, (int32_t)v6, (int64_t)&g23);
}

// Address range: 0x502f53 - 0x502f9a
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_502f53(void) {
    // 0x502f53
    while (true) {
        // 0x502f56
        int64_t v1; // 0x502f53
        *(int64_t *)(v1 + 264) = (int64_t)&g12;
        function_54cf10(v1);
        int64_t v2; // 0x502f53
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        function_5029a0(v2);
        *(int64_t *)(v1 + 8) = 0;
        v2 = (int64_t)&g44;
    }
}

// Address range: 0x502f9a - 0x502f9c
int64_t function_502f9a(void) {
    // 0x502f9a
    int64_t result; // 0x502f9a
    return result;
}

// Address range: 0x502f9c - 0x502f9e
int64_t function_502f9c(void) {
    // 0x502f9c
    int64_t result; // 0x502f9c
    return result;
}

// Address range: 0x548053 - 0x548058
int64_t function_548053(void) {
    // 0x548053
    return function_547fb0();
}

// Address range: 0x548060 - 0x548080
int64_t function_548060(int64_t result, int64_t a2) {
    // 0x548060
    function_547fb0();
    return result;
}

// Address range: 0x548080 - 0x5480f7
int64_t function_548080(int64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = *(int64_t *)(a1 - 24); // 0x548087
    if (v1 >= a2) {
        // 0x548090
        return function_547fb0();
    }
    // 0x54809a
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::insert", a2, v1, 0x100000000000000 * a4 >> 56);
    function_547fb0();
    *(int32_t *)"OSIX" = -1;
    return (int64_t)"basic_string::insert";
}

// Address range: 0x548100 - 0x54815f
int64_t function_548100(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = *(int64_t *)(a1 - 24); // 0x548103
    if (v1 >= a2) {
        // 0x548119
        return function_547fb0();
    }
    // 0x548122
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, v1, a5);
    return function_547fb0();
}

// Address range: 0x548160 - 0x548171
int64_t function_548160(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x548160
    return function_547fb0();
}

// Address range: 0x548180 - 0x54818e
int64_t function_548180(int64_t result) {
    // 0x548180
    function_25c34();
    return result;
}

// Address range: 0x548190 - 0x5481d5
int64_t function_548190(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    uint64_t v1 = *(int64_t *)(a2 - 24); // 0x548193
    if (v1 >= a3) {
        // 0x5481a9
        return function_25c34();
    }
    // 0x5481b4
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::assign", a3, v1, v1);
    return function_25c34();
}

// Address range: 0x5481e0 - 0x5481e8
int64_t function_5481e0(int64_t a1, int64_t a2) {
    // 0x5481e0
    int64_t v1; // 0x5481e0
    return function_52a5a(a1, a2 - a1, v1, v1);
}

// Address range: 0x5481f0 - 0x54826a
int64_t function_5481f0(int64_t a1, int64_t a2, int64_t a3, uint64_t str, uint64_t a5) {
    uint64_t v1 = *(int64_t *)(a3 - 24); // 0x5481f3
    if (v1 >= str) {
        uint64_t v2 = v1 - str; // 0x5481fa
        return function_52a5a(a1, a2, str + a3, v2 > a5 ? a5 : v2);
    }
    // 0x548214
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::insert", str, v1, a5);
    return function_52a5a((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int64_t)"basic_string::insert", str, (int64_t)strlen((char *)str));
}

// Address range: 0x548270 - 0x54827c
int64_t function_548270(int64_t a1, int64_t a2, int64_t a3) {
    // 0x548270
    return function_52a5a(a1, a2, a3, *(int64_t *)(a3 - 24));
}

// Address range: 0x548280 - 0x5482e7
int64_t function_548280(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x548280
    if (*(int64_t *)(a1 - 24) != 0) {
        // 0x548290
        return function_25e90();
    }
    // 0x54829c
    int64_t v1; // 0x548280
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::erase", -1, 0, v1);
    if (g24 != (int64_t *)"%s: __pos (which is %zu) > this->size() (which is %zu)") {
        // 0x5482d0
        *(int32_t *)" is %zu) > this->size() (which is %zu)" = (int32_t)"is %zu) > this->size() (which is %zu)";
    }
    // 0x5482c9
    return (int64_t)" > this->size() (which is %zu)";
}

// Address range: 0x5482f0 - 0x548375
int64_t function_5482f0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 + a1; // 0x5482fc
    int64_t v2 = function_547d00(v1, *(int64_t *)(a1 + 8), a2); // 0x548306
    int64_t result = v2 + 24; // 0x548311
    int64_t result2; // 0x5482f0
    int64_t v3; // 0x5482f0
    if (v1 == 0) {
        goto lab_0x54832a;
    } else {
        int64_t v4 = a1 + 24;
        if (v1 != 1) {
            int64_t dest_mem = (int64_t)memcpy((int64_t *)result, (int64_t *)v4, (int32_t)v1); // 0x548347
            result2 = dest_mem;
            v3 = result;
            if (v2 == (int64_t)g24) {
                // 0x548333
                return dest_mem;
            }
            goto lab_0x54835b;
        } else {
            // 0x548320
            *(char *)result = *(char *)v4;
            goto lab_0x54832a;
        }
    }
  lab_0x54832a:
    // 0x54832a
    result2 = result;
    v3 = v1;
    if (v2 == (int64_t)g24) {
        // 0x548333
        return result;
    }
    goto lab_0x54835b;
  lab_0x54835b:
    // 0x54835b
    *(int32_t *)(v2 + 16) = 0;
    *(int64_t *)v2 = v3;
    *(char *)(v3 + result) = 0;
    return result2;
}

// Address range: 0x548380 - 0x5483a0
int64_t function_548380(int64_t result, int64_t a2) {
    uint64_t v1 = *(int64_t *)(result - 16); // 0x548383
    if (*(int64_t *)(result - 24) < v1) {
        // 0x548390
        return function_259ce(result, 0, v1);
    }
    // 0x54838d
    return result;
}

// Address range: 0x5483a0 - 0x5483ae
int64_t function_5483a0(int64_t a1) {
    // 0x5483a0
    int64_t v1; // 0x5483a0
    function_1fd40(v1);
    return function_20540();
}

// Address range: 0x5483b0 - 0x548495
int64_t function_5483b0(int64_t result, int64_t a2, uint64_t a3, uint64_t a4) {
    uint64_t v1 = *(int64_t *)(a2 - 24); // 0x5483c1
    if (v1 < a3) {
        // 0x54846a
        int64_t v2; // 0x5483b0
        function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::append", a3, v1, v2);
        return function_25cec();
    }
    uint64_t v3 = v1 - a3; // 0x5483ce
    int64_t v4 = v3 > a4 ? a4 : v3; // 0x5483d7
    if (v4 == 0) {
        // 0x548426
        return result;
    }
    int64_t * v5 = (int64_t *)(result - 24); // 0x5483e3
    int64_t v6 = *v5; // 0x5483e3
    int64_t v7 = v6 + v4; // 0x5483e7
    int64_t v8; // 0x5483b0
    int64_t v9; // 0x5483b0
    if (*(int64_t *)(result - 16) >= v7) {
        int32_t v10 = *(int32_t *)(result - 8); // 0x548438
        v8 = v6;
        v9 = a2;
        if (v10 >= 0 == (v10 != 0)) {
            goto lab_0x5483f0;
        } else {
            goto lab_0x548403;
        }
    } else {
        goto lab_0x5483f0;
    }
  lab_0x5483f0:
    // 0x5483f0
    function_259ce(result, (int32_t)v7, a3);
    v8 = *v5;
    v9 = v7;
    goto lab_0x548403;
  lab_0x548403:;
    int64_t v11 = v9 + a3; // 0x548403
    int64_t v12 = v8 + result; // 0x548406
    if (v4 != 1) {
        // 0x548448
        memcpy((int64_t *)v12, (int64_t *)v11, (int32_t)v4);
    } else {
        // 0x548410
        *(char *)v12 = *(char *)v11;
    }
    int64_t v13 = v12 - 24; // 0x548419
    if (v13 != (int64_t)g24) {
        // 0x548458
        *(int32_t *)(v12 - 8) = 0;
        *(int64_t *)v13 = v7;
        *(char *)(v12 + v7) = 0;
    }
    // 0x548426
    return result;
}

// Address range: 0x5484a0 - 0x5484a5
int64_t function_5484a0(void) {
    // 0x5484a0
    return function_25cec();
}

// Address range: 0x57043a - 0x570447
int64_t function_57043a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x57043a
    int64_t v1; // 0x57043a
    *(int64_t *)(a4 + 8) = v1 + 8;
    return function_57038c();
}

// Address range: 0x570450 - 0x57046a
int64_t function_570450(int64_t a1) {
    // 0x570450
    return function_4eeb50(a1);
}

// Address range: 0x570470 - 0x57048a
int64_t function_570470(int64_t a1) {
    // 0x570470
    return function_4eeb50(a1);
}

// Address range: 0x570490 - 0x5704a4
// From class:    *NSt13__facet_shims12_GLOBAL__N_112collate_shimIcEE
// Type:          virtual member function
int64_t function_570490(int64_t a1) {
    // 0x570490
    return function_576840(*(int64_t *)(a1 + 24));
}

// Address range: 0x5704b0 - 0x5704ce
// From class:    *NSt13__facet_shims12_GLOBAL__N_113time_get_shimIcEE
// Type:          virtual member function
int64_t function_5704b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5704b0
    return function_577da0(*(int64_t *)(a1 + 16));
}

// Address range: 0x5704d0 - 0x5704ee
// From class:    *NSt13__facet_shims12_GLOBAL__N_113time_get_shimIcEE
// Type:          virtual member function
int64_t function_5704d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5704d0
    return function_577da0(*(int64_t *)(a1 + 16));
}

// Address range: 0x5704f0 - 0x57050e
// From class:    *NSt13__facet_shims12_GLOBAL__N_113time_get_shimIcEE
// Type:          virtual member function
int64_t function_5704f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5704f0
    return function_577da0(*(int64_t *)(a1 + 16));
}

// Address range: 0x570510 - 0x57052e
// From class:    *NSt13__facet_shims12_GLOBAL__N_113time_get_shimIcEE
// Type:          virtual member function
int64_t function_570510(int64_t a1, int64_t a2, int64_t a3) {
    // 0x570510
    return function_577da0(*(int64_t *)(a1 + 16));
}

// Address range: 0x570530 - 0x57054e
// From class:    *NSt13__facet_shims12_GLOBAL__N_113time_get_shimIcEE
// Type:          virtual member function
int64_t function_570530(int64_t a1, int64_t a2, int64_t a3) {
    // 0x570530
    return function_577da0(*(int64_t *)(a1 + 16));
}

// Address range: 0x570550 - 0x570564
// From class:    *NSt13__facet_shims12_GLOBAL__N_113time_get_shimIcEE
// Type:          virtual member function
int64_t function_570550(int64_t a1) {
    // 0x570550
    return function_577d80(*(int64_t *)(a1 + 16));
}

// Address range: 0x570570 - 0x570620
// From class:    *NSt13__facet_shims12_GLOBAL__N_114money_get_shimIcEE
// Type:          virtual member function
int64_t function_570570(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = __readfsqword(40); // 0x570583
    int64_t result = function_577f00(); // 0x5705bc
    if (v1 == __readfsqword(40)) {
        // 0x5705fe
        return result;
    }
    // 0x57061a
    __stack_chk_fail();
    return (int64_t)&g44;
}

// Address range: 0x570620 - 0x570649
// From class:    *NSt13__facet_shims12_GLOBAL__N_114money_put_shimIcEE
// Type:          virtual member function
int64_t function_570620(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x570620
    return function_578220(*(int64_t *)(a1 + 16));
}

// Address range: 0x570650 - 0x570664
// From class:    *NSt13__facet_shims12_GLOBAL__N_113messages_shimIcEE
// Type:          virtual member function
int64_t function_570650(int64_t a1) {
    // 0x570650
    return function_577d60(*(int64_t *)(a1 + 32));
}

// Address range: 0x570670 - 0x57068e
// From class:    *NSt13__facet_shims12_GLOBAL__N_113messages_shimIcEE
// Type:          virtual member function
int64_t function_570670(int64_t a1, int64_t a2, int64_t a3) {
    // 0x570670
    return function_577860(*(int64_t *)(a1 + 32), a2, *(int64_t *)(a2 + 8), a3);
}

// Address range: 0x570690 - 0x5706a4
// From class:    *NSt13__facet_shims12_GLOBAL__N_112collate_shimIwEE
// Type:          virtual member function
int64_t function_570690(int64_t a1) {
    // 0x570690
    return function_576850(*(int64_t *)(a1 + 24));
}

// Address range: 0x5706b0 - 0x5706ce
// From class:    *NSt13__facet_shims12_GLOBAL__N_113time_get_shimIwEE
// Type:          virtual member function
int64_t function_5706b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5706b0
    return function_577e50(*(int64_t *)(a1 + 16));
}

// Address range: 0x5706d0 - 0x5706ee
// From class:    *NSt13__facet_shims12_GLOBAL__N_113time_get_shimIwEE
// Type:          virtual member function
int64_t function_5706d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5706d0
    return function_577e50(*(int64_t *)(a1 + 16));
}

// Address range: 0x5706f0 - 0x57070e
// From class:    *NSt13__facet_shims12_GLOBAL__N_113time_get_shimIwEE
// Type:          virtual member function
int64_t function_5706f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5706f0
    return function_577e50(*(int64_t *)(a1 + 16));
}

// Address range: 0x570710 - 0x57072e
// From class:    *NSt13__facet_shims12_GLOBAL__N_113time_get_shimIwEE
// Type:          virtual member function
int64_t function_570710(int64_t a1, int64_t a2, int64_t a3) {
    // 0x570710
    return function_577e50(*(int64_t *)(a1 + 16));
}

// Address range: 0x570730 - 0x57074e
// From class:    *NSt13__facet_shims12_GLOBAL__N_113time_get_shimIwEE
// Type:          virtual member function
int64_t function_570730(int64_t a1, int64_t a2, int64_t a3) {
    // 0x570730
    return function_577e50(*(int64_t *)(a1 + 16));
}

// Address range: 0x570750 - 0x570764
// From class:    *NSt13__facet_shims12_GLOBAL__N_113time_get_shimIwEE
// Type:          virtual member function
int64_t function_570750(int64_t a1) {
    // 0x570750
    return function_577d90(*(int64_t *)(a1 + 16));
}

// Address range: 0x570770 - 0x570820
// From class:    *NSt13__facet_shims12_GLOBAL__N_114money_get_shimIwEE
// Type:          virtual member function
int64_t function_570770(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = __readfsqword(40); // 0x570783
    int64_t result = function_578090(); // 0x5707bc
    if (v1 == __readfsqword(40)) {
        // 0x5707fe
        return result;
    }
    // 0x57081a
    __stack_chk_fail();
    return (int64_t)&g44;
}

// Address range: 0x570820 - 0x570845
// From class:    *NSt13__facet_shims12_GLOBAL__N_114money_put_shimIwEE
// Type:          virtual member function
int64_t function_570820(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x570820
    return function_578380(*(int64_t *)(a1 + 16));
}

// Address range: 0x570850 - 0x570864
// From class:    *NSt13__facet_shims12_GLOBAL__N_113messages_shimIwEE
// Type:          virtual member function
int64_t function_570850(int64_t a1) {
    // 0x570850
    return function_577d70(*(int64_t *)(a1 + 32));
}

// Address range: 0x570870 - 0x57088e
// From class:    *NSt13__facet_shims12_GLOBAL__N_113messages_shimIwEE
// Type:          virtual member function
int64_t function_570870(int64_t a1, int64_t a2, int64_t a3) {
    // 0x570870
    return function_577940(*(int64_t *)(a1 + 32), a2, *(int64_t *)(a2 + 8), a3);
}
