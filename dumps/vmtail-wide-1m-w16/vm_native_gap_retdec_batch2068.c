/*
 * Targeted RetDec C for native executable gap queue batch 2068.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x30929-0x30b29 rank=- name=- kind=- bytes=- uncovered=-
 *   0x30bac-0x30c30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5862e-0x5882e rank=- name=- kind=- bytes=- uncovered=-
 *   0x58874-0x588ba rank=- name=- kind=- bytes=- uncovered=-
 *   0x588ba-0x58947 rank=- name=- kind=- bytes=- uncovered=-
 *   0x68067-0x68267 rank=- name=- kind=- bytes=- uncovered=-
 *   0x68267-0x6837a rank=- name=- kind=- bytes=- uncovered=-
 *   0x76f8e-0x7700e rank=- name=- kind=- bytes=- uncovered=-
 *   0x7708e-0x7718e rank=- name=- kind=- bytes=- uncovered=-
 *   0x7718e-0x772a6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a2314-0x3a2514 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a2514-0x3a262e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b4fa4-0x3b51a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b51a4-0x3b52bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x3dbcb9-0x3dbdb9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x429817-0x429917 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44aa25-0x44ab25 rank=- name=- kind=- bytes=- uncovered=-
 *   0x493dc9-0x493e49 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b680e-0x4b6a0e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b6a0e-0x4b6b10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c4c87-0x4c4e87 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c4e87-0x4c4f90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4dfb79-0x4dfd79 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4dfd79-0x4dfe79 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f077e-0x4f097e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f097e-0x4f0a80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f584b-0x4f5a4b rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f5a4b-0x4f5b50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52b5d4-0x52b7d4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52b7d4-0x52b8e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54fbfb-0x54fdfb rank=- name=- kind=- bytes=- uncovered=-
 *   0x54fdfb-0x54ff00 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g27;
extern int g28;
extern int g29;
extern int g30;
extern int g31;
extern int g32;
extern int g33;
extern int g34;
extern int g35;
extern int g36;
extern int g37;
extern int g38;
extern int g39;
extern int g40;
extern int g41;
extern int g42;
extern int g43;
extern int g44;
extern int g45;
extern int g46;
extern int g48;
extern int g49;
extern int g50;
extern int g51;
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

int64_t function_1a445e3f();
int64_t function_1fd40();
int64_t function_20540();
int64_t function_221a8();
int64_t function_24ded();
int64_t function_25018();
int64_t function_2508e();
int64_t function_254fe();
int64_t function_256ba();
int64_t function_285b6cf2();
int64_t function_29151f();
int64_t function_2927e7();
int64_t function_29c3a();
int64_t function_2b674();
int64_t function_308dd();
int64_t function_30908();
int64_t function_30929(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3099d(void);
int64_t function_309a7(void);
int64_t function_309b5(int64_t a1);
int64_t function_30a19(int64_t a1);
int64_t function_30a8f(void);
int64_t function_30bac(int64_t a1, int64_t a2, int64_t a3);
int64_t function_30bbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30bf4(int32_t a1);
int64_t function_35fcc();
int64_t function_36966();
int64_t function_3a2314(int64_t a1);
int64_t function_3a2330(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a24b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b4fa4(void);
int64_t function_3b4fb9(void);
int64_t function_3b4fde(void);
int64_t function_3b4ff3(int64_t a1);
int64_t function_3b4ff6(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3b508a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b509a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3b510e(void);
int64_t function_3b5146(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3b5167(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_3b51cf(void);
int64_t function_3b5201(int64_t a1);
int64_t function_3b520b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b5228(int64_t a1);
int64_t function_3b523c(void);
int64_t function_3dbca2();
int64_t function_3dbcb9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7);
int64_t function_3dbcff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3dbd59(void);
int64_t function_429817(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_4298ac(void);
int64_t function_4298c1(void);
int64_t function_44aa25(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_44aaeb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44ab18(int64_t a1);
int64_t function_45a3e();
int64_t function_493d83();
int64_t function_493dc9(void);
int64_t function_4b6270();
int64_t function_4b6300();
int64_t function_4b6330();
int64_t function_4b63a0();
int64_t function_4b6490();
int64_t function_4b66c0();
int64_t function_4b6800();
int64_t function_4b680e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b6830(void);
int64_t function_4b6840(void);
int64_t function_4b6850(void);
int64_t function_4b6860(int64_t a1);
int64_t function_4ba670();
int64_t function_4ba790();
int64_t function_4bce10();
int64_t function_4c4c60();
int64_t function_4c4c87(int64_t a1);
int64_t function_4c4cb0(void);
int64_t function_4c4ce0(void);
int64_t function_4c4cf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_4c4dc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4c4e70(int64_t a1);
int64_t function_4c4e90(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4c4ec0(void);
int64_t function_4c4ed0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7, int64_t a8);
int64_t function_4c4f10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_4c4f50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_4c8db0();
int64_t function_4c8f30();
int64_t function_4c98a0();
int64_t function_4c9d40();
int64_t function_4ca380();
int64_t function_4caa90();
int64_t function_4d2690();
int64_t function_4d2a00();
int64_t function_4d2a10();
int64_t function_4d2a20();
int64_t function_4dfb79(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4dfb7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4efe30();
int64_t function_4f0700();
int64_t function_4f077e(int64_t a1);
int64_t function_4f07a0(int64_t a1);
int64_t function_4f584b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_4f58b0(int64_t a1, int64_t a2);
int64_t function_4f59a7(int64_t a1, int64_t a2);
int64_t function_4f5a90(int64_t a1, int64_t a2);
int64_t function_4fbd10();
int64_t function_4fc100();
int64_t function_4fc380();
int64_t function_4fcb60();
int64_t function_52b0c0();
int64_t function_52b320();
int64_t function_52b5d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_52b5da(int64_t a1);
int64_t function_52b600(int64_t a1);
int64_t function_52b620(int64_t a1, int64_t a2, int64_t a3);
int64_t function_52b630(int64_t a1, int64_t a2);
int64_t function_52b680(int64_t a1, int64_t a2);
int64_t function_52b6e0(int64_t a1);
int64_t function_52b700(int64_t result);
int64_t function_52b710(int64_t result, int64_t a2);
int64_t function_52b7d0(int64_t result);
int64_t function_52b7e0(int64_t result);
int64_t function_52b7f0(int64_t a1);
int64_t function_52b800(int64_t a1);
int64_t function_52b810(int64_t result, int64_t a2);
int64_t function_52b820(int64_t result, int64_t a2);
int64_t function_52b830(int64_t result, int64_t a2);
int64_t function_52b840(int64_t result, int64_t a2);
int64_t function_52b850(int64_t result);
int64_t function_52b860(int64_t a1);
int64_t function_52b870(int64_t result, int64_t a2);
int64_t function_52b880(int64_t result, int64_t a2);
int64_t function_52b890(int64_t a1);
int64_t function_52b8a0(int64_t a1);
int64_t function_52b8b0(void);
int64_t function_52b8c0(int64_t a1);
int64_t function_542650();
int64_t function_54cb80();
int64_t function_54cf10();
int64_t function_54cf90();
int64_t function_54d0a0();
int64_t function_54fbc8();
int64_t function_54fbfb(void);
int64_t function_54fc00(void);
int64_t function_54fc07(int64_t result);
int64_t function_54fc20(int64_t a1, int64_t result);
int64_t function_54fc30(int64_t a1);
int64_t function_54fc40(int64_t result);
int64_t function_54fc50(int64_t a1);
int64_t function_54fc60(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_54fc80(uint64_t a1, uint64_t a2);
int64_t function_54fca0(int64_t wstr, int64_t n, int64_t wc);
int64_t function_54fcd0(int64_t wstr, int64_t wstr2, int64_t a3);
int64_t function_54fd00(int64_t wstr, int64_t wstr2, int64_t a3);
int64_t function_54fd30(int64_t wstr, int64_t wstr2, int64_t a3);
int64_t function_54fd60(int64_t wstr, int64_t wstr2, int64_t a3);
int64_t function_54fd90(int64_t a1, int64_t a2);
int64_t function_54fdb0(void);
int64_t function_54fdc0(int64_t a1, int64_t a2);
int64_t function_54fde0(int64_t result);
int64_t function_54fdf0(int64_t a1);
int64_t function_54fe00(int64_t result, int64_t a2);
int64_t function_54fe20(int64_t result, int64_t a2);
int64_t function_54fe30(int64_t result);
int64_t function_54fe40(int64_t a1);
int64_t function_54fe50(int64_t result, int64_t a2);
int64_t function_54fe70(int64_t result, int64_t a2);
int64_t function_54fe80(void);
int64_t function_54fe90(int64_t a1);
int64_t function_54fea0(int64_t a1, int64_t a2);
int64_t function_54feb0(int64_t a1, uint64_t a2);
int64_t function_54fef0(int64_t a1);
int64_t function_563950();
int64_t function_563d40();
int64_t function_566180();
int64_t function_584db();
int64_t function_5858c();
int64_t function_5862e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_58719(int64_t a1, int64_t a2, int64_t a3);
int64_t function_58874(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_67ce4();
int64_t function_68067(int64_t a1, int64_t a2);
int64_t function_6809c(int64_t a1, int64_t a2);
int64_t function_680ab(int64_t a1);
int64_t function_680ba(void);
int64_t function_680d5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_68138(int64_t a1, int64_t a2);
int64_t function_68168(void);
int64_t function_6817b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_681c5(void);
int64_t function_681cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_68210(int64_t a1, int64_t a2, int64_t a3);
int64_t function_68b30();
int64_t function_68ba4();
int64_t function_68c00();
int64_t function_68c1c();
int64_t function_68d1a();
int64_t function_752cd8e4();
int64_t function_76e22();
int64_t function_76ede();
int64_t function_76f4a();
int64_t function_76f8e(int64_t a1);
int64_t function_76fc6(int64_t a1);
int64_t function_7708e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_770b2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_7713e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_7717a(int64_t a1, int64_t a2);
int64_t function_77184(int64_t a1, int64_t a2);
int64_t function_771a0(int64_t a1);
int64_t function_771a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_772a6();
int64_t function_772f8();
int64_t function_773b0();
int64_t function_7742a();
int64_t function_c6d58();
int64_t function_fffffffffffffff8();
int64_t unknown_3e25d31a();
int64_t unknown_4f314170();
int64_t unknown_7f690c13();
int64_t unknown_ffffffff983edec3();
int64_t unknown_ffffffffbf9f8ea2();
int64_t unknown_ffffffffcc040ad7();
int64_t unknown_ffffffffd4c664cf();

// Address range: 0x30929 - 0x30952
int64_t function_30929(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x30929
    int64_t v1; // 0x30929
    uint64_t v2 = v1;
    int64_t v3; // 0x30929
    bool v4; // 0x30929
    if (!v4) {
        v3 = function_308dd();
    }
    int64_t v5 = v3; // 0x3092c
    uint64_t v6 = v2 / 256; // 0x3092c
    *(char *)v5 = (char)(v5 ^ v6);
    *(char *)-0x20772b6e59392fda = (char)function_30908();
    __asm_out(-108, (char)v1);
    __writefsbyte(v2, __readfsbyte(v2) + (char)v6);
    return __asm_hlt();
}

// Address range: 0x3099d - 0x309a2
int64_t function_3099d(void) {
    // 0x3099d
    return function_752cd8e4();
}

// Address range: 0x309a7 - 0x309a8
int64_t function_309a7(void) {
    // 0x309a7
    int64_t result; // 0x309a7
    return result;
}

// Address range: 0x309b5 - 0x309c3
int64_t function_309b5(int64_t a1) {
    // 0x309b5
    return function_309a7();
}

// Address range: 0x30a19 - 0x30a1c
int64_t function_30a19(int64_t a1) {
    // 0x30a19
    int64_t result; // 0x30a19
    return result;
}

// Address range: 0x30a8f - 0x30ad1
int64_t function_30a8f(void) {
    // 0x30a8f
    int64_t v1; // 0x30a8f
    return v1 & -256 | 178;
}

// Address range: 0x30bac - 0x30bbe
int64_t function_30bac(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a2 + 114); // 0x30bac
    *v1 = 2 * *v1;
    uint64_t v2 = 0x100000000 * a3;
    int64_t v3 = v2 < 0xffffff0000000001 ? v2 : v2 + 0xffffffffff; // 0x30bbc
    bool v4; // 0x30bac
    return (v3 | 0x99660077f3) / ((v4 ? 0xffffffff : 1) + a2 & 0xffffffff) & 0xffffffff;
}

// Address range: 0x30bbf - 0x30be2
int64_t function_30bbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x30bbf
    int64_t v1; // 0x30bbf
    int32_t * v2 = (int32_t *)(v1 + 0xddd4f7); // 0x30bbf
    int32_t v3 = *v2 & (int32_t)v1; // 0x30bbf
    *v2 = v3;
    int64_t v4 = a4 - 1; // 0x30bc6
    if (v4 != 0 == v3 == 0) {
        int32_t * v5 = (int32_t *)(a1 + 20); // 0x30bdb
        *v5 = *v5 - (int32_t)a2;
        return __asm_iretd();
    }
    int64_t result; // 0x30bbf
    if (v4 != 1 && (char)((v1 & v1) / 256) != 0) {
        result = function_30bac(a1, a2, a3);
    }
    // 0x30bcc
    return result;
}

// Address range: 0x30bf4 - 0x30c24
int64_t function_30bf4(int32_t a1) {
    // 0x30bf4
    int64_t v1; // 0x30bf4
    int64_t result = v1 & 0xffffffff; // 0x30c13
    if (v1 != __readfsqword(40)) {
        // 0x30c15
        __stack_chk_fail();
        result = (int64_t)&g51;
    }
    // 0x30c1a
    return result;
}

// Address range: 0x5862e - 0x58719
int64_t function_5862e(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0; // bp-88, 0x58648
    int64_t v2 = __readfsqword(40); // 0x5865a
    uint64_t v3 = function_5858c(); // 0x58676
    if ((char)v3 != 0) {
        int64_t v4 = (int64_t)&g50; // bp-96, 0x586d5
        function_36966(a2, &v4);
        function_29c3a(&v4);
    }
    int64_t result = function_254fe(&v1) & -256 | v3 % 256; // 0x58703
    if (v2 != __readfsqword(40)) {
        // 0x58705
        __stack_chk_fail();
        result = (int64_t)&g51;
    }
    // 0x5870a
    return result;
}

// Address range: 0x58719 - 0x58803
int64_t function_58719(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0; // bp-88, 0x58733
    int64_t v2 = __readfsqword(40); // 0x58745
    uint64_t v3 = function_584db(); // 0x58761
    if ((char)v3 != 0) {
        int64_t v4 = (int64_t)&g48; // bp-96, 0x587bf
        function_256ba(a2, &v4);
        function_2508e(&v4);
    }
    int64_t result = function_254fe(&v1) & -256 | v3 % 256; // 0x587ed
    if (v2 != __readfsqword(40)) {
        // 0x587ef
        __stack_chk_fail();
        result = (int64_t)&g51;
    }
    // 0x587f4
    return result;
}

// Address range: 0x58874 - 0x58947
int64_t function_58874(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x58874
    int64_t v1; // 0x58874
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a4 - 0x647bf03b); // 0x58875
    *v3 = *v3 - 1;
    int64_t v4; // 0x58874
    int64_t v5 = v4;
    *(char *)v5 = *(char *)&v4 + (char)v5;
    char * v6 = (char *)(a1 + (int64_t)&g1); // 0x5887d
    *v6 = *v6 + (char)(v2 / 256);
    int64_t v7 = function_4efd30(a1); // 0x5889d
    int64_t v8 = v7; // 0x588b1
    __asm_rep_stosd_memset((char *)v7, (int32_t)v1, (int64_t)&g3);
    int64_t * v9 = (int64_t *)v1; // 0x588c7
    int64_t buf = *v9; // 0x588c7
    int64_t * v10 = (int64_t *)(v1 + 8); // 0x588cb
    int32_t fd = v1; // 0x588d0
    int32_t v11 = read(fd, (int64_t *)buf, (int32_t)(*v10 - buf)); // 0x588d5
    int64_t v12 = v11; // 0x588d5
    v4 = v12;
    int64_t * v13 = (int64_t *)(v2 + 8);
    if (v11 >= 1) {
        // 0x588df
        function_2b674(&v8, v12);
        *(int64_t *)(v1 - 16) = 0;
        function_45a3e(v2, *v13, *v9, *v10);
        int64_t buf2 = *v9; // 0x588c7
        int32_t v14 = read(fd, (int64_t *)buf2, (int32_t)(*v10 - buf2)); // 0x588d5
        int64_t v15 = v14; // 0x588d5
        v4 = v15;
        while (v14 >= 1) {
            // 0x588df
            function_2b674(&v8, v15);
            *(int64_t *)(v1 - 16) = 0;
            function_45a3e(v2, *v13, *v9, *v10);
            buf2 = *v9;
            v14 = read(fd, (int64_t *)buf2, (int32_t)(*v10 - buf2));
            v15 = v14;
            v4 = v15;
        }
    }
    // 0x5890a
    close(fd);
    function_254fe(&v8);
    int64_t v16 = v2 & -256 | (int64_t)(*v13 != v2); // 0x58920
    v4 = v16;
    int64_t result = v16; // 0x58934
    if (*(int64_t *)(v1 + 168) != __readfsqword(40)) {
        // 0x58936
        __stack_chk_fail();
        v4 = (int64_t)&g51;
        result = (int64_t)&g51;
    }
    // 0x5893b
    return result;
}

// Address range: 0x68067 - 0x6808d
int64_t function_68067(int64_t a1, int64_t a2) {
    // 0x68067
    __readfsqword(40);
    return function_29151f();
}

// Address range: 0x6809c - 0x680a6
int64_t function_6809c(int64_t a1, int64_t a2) {
    // 0x6809c
    int64_t v1; // 0x6809c
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x680ab - 0x680b7
int64_t function_680ab(int64_t a1) {
    // 0x680ab
    return (int64_t)*(int32_t *)-0x7ca4531b3a47471c;
}

// Address range: 0x680ba - 0x680bb
int64_t function_680ba(void) {
    // 0x680ba
    int64_t result; // 0x680ba
    return result;
}

// Address range: 0x680d5 - 0x68138
int64_t function_680d5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x680d5
    int64_t v1; // 0x680d5
    int64_t v2 = v1 & 0xffffffff ^ 0xc6d3e75e; // 0x680d8
    int64_t v3 = v2; // 0x680ea
    if ((char)(v2 & a4 / 256) == 0) {
        v3 = function_680ba();
    }
    int32_t * v4 = (int32_t *)(a3 + 0x5e0e00a9); // 0x680f1
    *v4 = *v4 - ((int32_t)v3 < 0x975a482b ? 0x4f503521 : 0x4f503520);
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    if (v1 != __readfsqword(40)) {
        // 0x6812a
        __stack_chk_fail();
    }
    // 0x6812f
    return 0;
}

// Address range: 0x68138 - 0x6815e
int64_t function_68138(int64_t a1, int64_t a2) {
    // 0x68138
    __readfsqword(40);
    return function_2927e7();
}

// Address range: 0x68168 - 0x6816d
int64_t function_68168(void) {
    // 0x68168
    return function_1a445e3f();
}

// Address range: 0x6817b - 0x68198
int64_t function_6817b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6817b
    bool v1; // 0x6817b
    bool v2 = v1;
    int32_t * v3 = (int32_t *)(a1 + 0x4987d956); // 0x68180
    uint32_t v4 = *v3; // 0x68180
    uint32_t v5 = v4 + 30 + (int32_t)v2; // 0x68180
    *v3 = v5;
    int64_t v6; // 0x6817b
    int64_t v7 = v6 - 8; // 0x68188
    *(int64_t *)v7 = a4;
    int64_t result = __asm_sti((int64_t)&g51, (int64_t)&g51, (int64_t)&g51, (int64_t)&g51); // 0x68189
    while (v5 != 0 && !((v2 ? v5 <= v4 : v4 > 0xffffffe1))) {
        // 0x68187
        v7 -= 8;
        *(int64_t *)v7 = a4;
        result = __asm_sti((int64_t)&g51, (int64_t)&g51, (int64_t)&g51, (int64_t)&g51);
    }
    // 0x6818e
    return result;
}

// Address range: 0x681c5 - 0x681c8
int64_t function_681c5(void) {
    // 0x681c5
    int64_t result; // 0x681c5
    return result;
}

// Address range: 0x681cf - 0x68210
int64_t function_681cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x681cf
    int64_t v1; // 0x681cf
    *(char *)a1 = (char)v1 - (char)a3;
    if (v1 != __readfsqword(40)) {
        // 0x68202
        __stack_chk_fail();
    }
    // 0x68207
    return 0;
}

// Address range: 0x68210 - 0x6837a
int64_t function_68210(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x68224
    int64_t v2; // 0x68210
    if (*(int32_t *)(a1 + 116) != 1) {
        // 0x6833c
        v2 = a2 == 0 | (int32_t)a3 < 1 ? 0xffffffff : a1;
    } else {
        // 0x68241
        int64_t v3; // bp-224, 0x68210
        int64_t v4; // bp-240, 0x68210
        function_68ba4(&v3, 0x100000000 * a3 >> 32, &v4);
        int64_t v5 = a1; // bp-264, 0x68263
        int64_t v6; // bp-256, 0x68210
        function_68d1a(&v4, &v6, &v5, &v3);
        int64_t v7 = v4; // 0x68281
        v4 = 0;
        v6 = v7;
        int64_t v8 = 0; // bp-232, 0x682a4
        function_35fcc(&v8);
        function_68c00(&v4, &v6);
        int64_t v9; // bp-168, 0x68210
        int64_t v10; // bp-200, 0x68210
        function_68b30(&v9, &v10, &v4, a1, 1);
        function_67ce4(a1, &v9, 0);
        function_25018(&v9);
        function_221a8((int64_t)&v10);
        function_35fcc(&v8);
        int64_t v11; // bp-248, 0x68210
        function_35fcc(&v11);
        function_68c1c(&v3);
        v2 = 0;
    }
    int64_t result = v2; // 0x68361
    if (v1 != __readfsqword(40)) {
        // 0x68363
        __stack_chk_fail();
        result = (int64_t)&g51;
    }
    // 0x68368
    return result;
}

// Address range: 0x76f8e - 0x76fc5
int64_t function_76f8e(int64_t a1) {
    int64_t result = a1 + 48; // 0x76f8e
    *(int64_t *)(a1 + 8) = 1;
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 24) = 0;
    *(int32_t *)(a1 + 32) = 0x3f800000;
    *(int64_t *)a1 = result;
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)result = 0;
    return result;
}

// Address range: 0x76fc6 - 0x76fe4
int64_t function_76fc6(int64_t a1) {
    int64_t result = function_772a6(); // 0x76fce
    int64_t v1 = *(int64_t *)a1; // 0x76fd3
    if (v1 == a1 + 48) {
        // 0x76fe2
        return result;
    }
    // 0x76fdc
    return function_4eeb50(v1);
}

// Address range: 0x7708e - 0x770b1
int64_t function_7708e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x7708e
    int64_t v1; // 0x7708e
    if (a2 != 0) {
        // 0x7709d
        v1 = function_24ded(a2);
    }
    // 0x770a5
    *(int64_t *)a1 = v1;
    *(int64_t *)(a1 + 8) = a2;
    int64_t result; // 0x7708e
    return result;
}

// Address range: 0x770b2 - 0x7713d
int64_t function_770b2(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = function_76e22(a2); // 0x770c5
    uint64_t v2 = v1 % *(int64_t *)(a1 + 8);
    int64_t v3 = function_773b0(a1, v2, a2, v1); // 0x770e2
    if (v3 != 0) {
        int64_t result = *(int64_t *)v3; // 0x770ec
        if (result != 0) {
            // 0x77131
            return result;
        }
    }
    int64_t v4 = function_4efd30(24); // 0x770fb
    *(int64_t *)v4 = 0;
    *(int64_t *)(v4 + 8) = v2;
    *(int64_t *)a2 = (int64_t)&g48;
    // 0x77131
    return function_772f8(a1, v2, v1, v4);
}

// Address range: 0x7713e - 0x7717a
int64_t function_7713e(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = function_76e22(a2); // 0x7714d
    int64_t v2 = function_773b0(a1, v1 % *(int64_t *)(a1 + 8), a2, v1); // 0x77164
    int64_t result = 0; // 0x7716e
    if (v2 != 0) {
        // 0x77170
        result = *(int64_t *)v2;
    }
    // 0x77173
    return result;
}

// Address range: 0x7717a - 0x77184
int64_t function_7717a(int64_t a1, int64_t a2) {
    // 0x7717a
    return a2 & -256 | (int64_t)(bool)(a1 != a2);
}

// Address range: 0x77184 - 0x7719f
int64_t function_77184(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 8); // 0x7718b
    int64_t result = function_76ede(v1, v1 + a2); // 0x77195
    *(int64_t *)a1 = result;
    return result;
}

// Address range: 0x771a0 - 0x771a5
int64_t function_771a0(int64_t a1) {
    // 0x771a0
    return *(int64_t *)(a1 + 16);
}

// Address range: 0x771a6 - 0x772a6
int64_t function_771a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2; // 0x771c2
    int64_t v2 = 0; // 0x771c2
    int64_t v3 = 0; // 0x771c2
    int64_t v4 = a2; // 0x771c2
    if (a2 != a3) {
        v1 = *(int64_t *)v1;
        v2++;
        v3 = v2;
        v4 = a3;
        while (v1 != a3) {
            // 0x771c4
            v1 = *(int64_t *)v1;
            v2++;
            v3 = v2;
            v4 = a3;
        }
    }
    int64_t v5 = *(int64_t *)(a1 + 24); // 0x771cd
    int64_t * v6 = (int64_t *)(a1 + 8); // 0x771d1
    if ((char)function_4fbd10(a1 + 32, *v6, v5, v3) != 0) {
        // 0x771e2
        function_7742a(a1, v5);
    }
    int64_t v7 = a2; // 0x771f8
    uint64_t v8; // 0x77205
    uint64_t v9; // 0x771a6
    int64_t v10; // 0x771fe
    if (v4 != a2) {
        while (true) {
          lab_0x771fe:
            // 0x771fe
            v10 = v7 + 8;
            v8 = function_76e22(v10);
            v9 = v8 % *v6;
            int64_t v11 = function_773b0(a1, v9, v10, v8); // 0x77222
            if (v11 == 0) {
                goto lab_0x77232;
            } else {
                // 0x7722c
                if (*(int64_t *)v11 != 0) {
                    goto lab_0x77292;
                } else {
                    goto lab_0x77232;
                }
            }
        }
    }
  lab_0x7729a:;
    // 0x7729a
    int64_t result; // 0x771a6
    return result;
  lab_0x77232:;
    int64_t v12 = function_4efd30(24); // 0x77237
    *(int64_t *)v12 = 0;
    int64_t v13 = *(int64_t *)v10; // 0x77246
    int64_t v14 = v13 - 8; // 0x7724a
    int32_t * v15 = (int32_t *)v14; // 0x7724a
    int32_t v16 = *v15; // 0x7724a
    int64_t v17 = v13 - 24; // 0x7724d
    int64_t v18; // 0x771a6
    if (v16 < 0) {
        // 0x77276
        v18 = function_76f4a(v17, 0, v14, v16);
    } else {
        // 0x77259
        v18 = v13;
        if (v17 != (int64_t)g15) {
            // 0x77262
            *v15 = v16 + 1;
            v18 = v13;
        }
    }
    // 0x7727d
    *(int64_t *)(v12 + 8) = v18;
    function_772f8(a1, v9, v8, v12);
    goto lab_0x77292;
  lab_0x77292:
    // 0x77292
    v7 = *(int64_t *)v7;
    if (v4 == v7) {
        // break -> 0x7729a
        goto lab_0x7729a;
    }
    goto lab_0x771fe;
}

// Address range: 0x3a2314 - 0x3a2330
int64_t function_3a2314(int64_t a1) {
    // 0x3a2314
    int64_t v1; // 0x3a2314
    return function_c6d58(v1, v1);
}

// Address range: 0x3a2330 - 0x3a24b5
int64_t function_3a2330(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a2330
    int64_t v1; // bp-32, 0x3a2330
    int64_t v2 = (int64_t)&v1; // 0x3a23d7
    int64_t v3 = v2 + 16; // 0x3a23df
    int64_t * v4 = (int64_t *)v3; // 0x3a23df
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x3a23df
    int64_t v6 = v2 - 16; // 0x3a23e3
    int64_t * v7 = (int64_t *)v6; // 0x3a23e3
    int64_t * v8 = (int64_t *)(v2 + 8); // 0x3a242d
    *v8 = a5;
    *v7 = v6;
    *v5 = *v4;
    *(int64_t *)(v2 + 32) = v1;
    int64_t v9 = *v8; // 0x3a2456
    v1 = v9;
    *v5 = v9;
    int64_t v10 = *v4; // 0x3a2465
    *v8 = v10;
    v1 = a2;
    *v5 = a4;
    *v7 = v10;
    int64_t v11 = v1; // 0x3a24a7
    v1 = v3;
    return function_c6d58(0x5cf28862, v11);
}

// Address range: 0x3a24b5 - 0x3a25e8
int64_t function_3a24b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a24b5
    return function_c6d58(a1, a2);
}

// Address range: 0x3b4fa4 - 0x3b4fa5
int64_t function_3b4fa4(void) {
    // 0x3b4fa4
    int64_t result; // 0x3b4fa4
    return result;
}

// Address range: 0x3b4fb9 - 0x3b4fba
int64_t function_3b4fb9(void) {
    // 0x3b4fb9
    int64_t result; // 0x3b4fb9
    return result;
}

// Address range: 0x3b4fde - 0x3b4fdf
int64_t function_3b4fde(void) {
    // 0x3b4fde
    int64_t result; // 0x3b4fde
    return result;
}

// Address range: 0x3b4ff3 - 0x3b4ff4
int64_t function_3b4ff3(int64_t a1) {
    // 0x3b4ff3
    int64_t result; // 0x3b4ff3
    return result;
}

// Address range: 0x3b4ff6 - 0x3b5089
int64_t function_3b4ff6(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2; // 0x3b4ff6
    char v3 = v2 / 256; // 0x3b4ffb
    *(char *)-0x5dfc75fe = *(char *)-0x5dfc75fe + v3;
    unsigned char v4 = (char)v2; // 0x3b5001
    unsigned char v5 = v4 - 28; // 0x3b5001
    if (v5 == 0) {
        int64_t v6 = v2 & -256 | (int64_t)v5; // 0x3b5001
        int64_t v7 = *(int64_t *)0x685cd801; // 0x3b5003
        char * v8 = (char *)(v2 + 0x3a78df00); // 0x3b5007
        *v8 = (char)(v4 < 28) - (char)(a3 / 256) + *v8;
        int32_t * v9 = (int32_t *)(v7 + 0x13d2d48); // 0x3b5010
        *v9 = -1 - *v9;
        *(char *)v1 = *(char *)&v1 + (char)v7;
        int32_t * v10 = (int32_t *)(v2 - 20); // 0x3b501b
        *v10 = *v10 - (int32_t)v6;
        *(int64_t *)0x685cd801 = v6;
        return function_3b4fb9();
    }
    // 0x3b5042
    __writegsbyte(-0x20d776b5, __readgsbyte(-0x20d776b5) + v3);
    __asm_iretd();
    __asm_wait(a1);
    __asm_in_136(-114);
    bool v11; // 0x3b4ff6
    int64_t v12 = v11 ? -1 : 1; // 0x3b5051
    int64_t v13 = v12 + a1; // 0x3b5051
    int64_t v14 = v12 + a2; // 0x3b5051
    v1 = v14;
    int32_t v15 = __asm_in(36); // 0x3b5052
    unsigned char v16 = *(char *)0x41175bf8b826c; // 0x3b5054
    int32_t v17 = v13; // 0x3b5062
    *(int32_t *)a3 = v17 + (int32_t)a3;
    int32_t v18 = *(int32_t *)(((int64_t)(v15 & -256) | (int64_t)v16) + 5); // 0x3b5064
    unsigned char v19 = llvm_ctpop_i8((char)(v18 & (int32_t)v14)); // 0x3b5064
    __asm_int3();
    int64_t result = unknown_4f314170(); // 0x3b506a
    if (v19 % 2 == 0) {
        int32_t * v20 = (int32_t *)v13; // 0x3b5087
        *v20 = *v20 + v17;
        return result;
    }
    int32_t * v21 = (int32_t *)v1; // 0x3b507e
    *v21 = *v21 | (int32_t)v2;
    return (result & 0xffffff00 | (int64_t)*(char *)0x13d01e87ed501e8) + a3 & 0xffffffff;
}

// Address range: 0x3b508a - 0x3b509a
int64_t function_3b508a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b508a
    int64_t v1; // 0x3b508a
    int64_t v2 = v1;
    char * v3 = (char *)(v1 + 0x1e8abc3); // 0x3b508c
    unsigned char v4 = *v3; // 0x3b508c
    unsigned char v5 = (char)v1; // 0x3b508c
    *v3 = v4 - v5;
    int64_t result = (v2 + 140 + (int64_t)(v4 < v5)) % 256 | v2 & -256; // 0x3b5093
    uint32_t v6 = (int32_t)a4 % 32; // 0x3b5098
    if (v6 != 0) {
        int32_t * v7 = (int32_t *)result; // 0x3b5098
        uint32_t v8 = *v7; // 0x3b5098
        *v7 = v8 >> 32 - v6 | v8 << v6;
    }
    return result;
}

// Address range: 0x3b509a - 0x3b50f2
int64_t function_3b509a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x3b509a
    int64_t v1; // 0x3b509a
    int64_t v2 = v1;
    int64_t v3 = a5;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a3;
    unknown_ffffffffbf9f8ea2();
    int32_t * v4 = (int32_t *)(a3 + 12 + 8 * a3); // 0x3b50b2
    *v4 = (int32_t)a2;
    char v5 = *(char *)(a4 + 7); // 0x3b50b6
    int64_t v6 = 256 * (int64_t)((char)(a3 / 256) - v5) | a3 & -0xff01; // 0x3b50b6
    unknown_ffffffff983edec3();
    bool v7; // 0x3b509a
    int64_t v8 = v7 ? -4 : 4; // 0x3b50c2
    int64_t v9 = v8 + (int64_t)*v4; // 0x3b50c2
    int64_t v10 = v8 + a1 + (v7 ? -1 : 1); // 0x3b50c5
    int32_t * v11 = (int32_t *)(v6 - 0x6ad04bc3); // 0x3b50c9
    *v11 = *v11 + (int32_t)v10;
    int64_t v12 = unknown_ffffffffcc040ad7(v10, v9); // 0x3b50d1
    int64_t v13 = (v12 & 0xff00) + v2 & 0xff00 | v12 & -0xff01; // 0x3b50d6
    float80_t v14; // 0x3b509a
    *(int64_t *)(v6 + 0x1e8af35) = (int64_t)v14;
    unsigned char v15 = (char)a4 % 32; // 0x3b50de
    if (v15 != 0) {
        char * v16 = (char *)v13; // 0x3b50de
        *v16 = *v16 << v15;
    }
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)v1;
    int32_t * v17 = (int32_t *)(v9 - 0x275941c5); // 0x3b50ea
    *v17 = *v17 + (int32_t)v9;
    return v13 & 0xe84fd23a ^ 24;
}

// Address range: 0x3b510e - 0x3b510f
int64_t function_3b510e(void) {
    // 0x3b510e
    int64_t result; // 0x3b510e
    return result;
}

// Address range: 0x3b5146 - 0x3b5150
int64_t function_3b5146(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t result = __asm_sti(a1, a2, a3, a4); // 0x3b5146
    int64_t v1; // 0x3b5146
    char * v2 = (char *)(v1 - 0x5dfe1800); // 0x3b5147
    *v2 = *v2 + (char)(a4 / 256);
    return result;
}

// Address range: 0x3b5167 - 0x3b5186
int64_t function_3b5167(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x3b5167
    int64_t v1; // 0x3b5167
    if (a4 != 1) {
        v1 = function_3b510e();
    }
    unsigned char v2 = *(char *)0xaa0f70468b901e8; // 0x3b5169
    int64_t v3; // 0x3b5167
    int32_t v4 = *(int32_t *)(a3 + 0x1e80123 + 8 * v3); // 0x3b5172
    int32_t * v5 = (int32_t *)((int64_t)(v4 | (int32_t)(v1 & 0xffffff00 | (int64_t)v2)) - 42); // 0x3b517b
    uint32_t v6 = *v5; // 0x3b517b
    *v5 = v6 / 0x8000 | 0x20000 * v6;
    int32_t * v7 = (int32_t *)(2 * v3 + result); // 0x3b5180
    *v7 = *v7 + (int32_t)result;
    return result;
}

// Address range: 0x3b51cf - 0x3b51d0
int64_t function_3b51cf(void) {
    // 0x3b51cf
    int64_t result; // 0x3b51cf
    return result;
}

// Address range: 0x3b5201 - 0x3b520a
int64_t function_3b5201(int64_t a1) {
    // 0x3b5201
    int64_t result; // 0x3b5201
    int32_t * v1 = (int32_t *)(result + 0x754c3a3a); // 0x3b5201
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x3b520b - 0x3b5218
int64_t function_3b520b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_7f690c13(); // 0x3b5212
    int64_t v2; // 0x3b520b
    if ((int32_t)a4 - (int32_t)v2 < 0) {
        v1 = function_3b51cf();
    }
    int32_t * v3 = (int32_t *)v1; // 0x3b5214
    *v3 = *v3 + (int32_t)a1;
    return function_fffffffffffffff8();
}

// Address range: 0x3b5228 - 0x3b522b
int64_t function_3b5228(int64_t a1) {
    // 0x3b5228
    int64_t result; // 0x3b5228
    return result;
}

// Address range: 0x3b523c - 0x3b523d
int64_t function_3b523c(void) {
    // 0x3b523c
    int64_t result; // 0x3b523c
    return result;
}

// Address range: 0x3dbcb9 - 0x3dbce1
int64_t function_3dbcb9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    // 0x3dbcb9
    int64_t v1; // 0x3dbcb9
    int32_t * v2 = (int32_t *)(2 * v1); // 0x3dbcb9
    uint32_t v3 = *v2; // 0x3dbcb9
    uint32_t v4 = v3 + (int32_t)v1; // 0x3dbcb9
    *v2 = v4;
    *(char *)a3 = (char)a4;
    char * v5 = (char *)(4 * a3 - 19 + v1); // 0x3dbcbe
    *v5 = *v5 + (char)v1 + (char)(v4 < v3);
    __asm_out_133(71, (int32_t)v1);
    int64_t v6 = unknown_ffffffffd4c664cf(); // 0x3dbcc9
    int64_t v7; // 0x3dbcb9
    int32_t v8 = *(int32_t *)&v7 + (int32_t)a2; // 0x3dbcd7
    *(int32_t *)a4 = v8;
    int64_t result = (v6 - (a6 % 2 | 8)) % 256 | v6 & -256; // 0x3dbcda
    if (v8 >= 0) {
        result = function_3dbca2();
    }
    // 0x3dbcdc
    __asm_out(-48, (char)result);
    return result;
}

// Address range: 0x3dbcff - 0x3dbd28
int64_t function_3dbcff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3dbcff
    int64_t v1; // 0x3dbcff
    int32_t * v2 = (int32_t *)(v1 + 126); // 0x3dbcff
    *v2 = 1024 * *v2;
    *(char *)a3 = (char)a4;
    int64_t v3; // 0x3dbcff
    *(int32_t *)a5 = *(int32_t *)&v3 + (int32_t)a6;
    int64_t v4 = unknown_3e25d31a(); // 0x3dbd13
    __asm_fldenv(*(int224_t *)(a3 - 0x2f95ff35 + v4));
    return v4 & 0xffffffff ^ 0x34f801e8;
}

// Address range: 0x3dbd59 - 0x3dbd5a
int64_t function_3dbd59(void) {
    // 0x3dbd59
    int64_t result; // 0x3dbd59
    return result;
}

// Address range: 0x429817 - 0x4298a4
int64_t function_429817(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a6;
    int64_t v2; // 0x429817
    char * v3 = (char *)(v2 + 2 * a2); // 0x429817
    char v4 = *v3 - (char)((uint64_t)v2 / 256); // 0x429817
    *v3 = v4;
    int64_t v5 = a6; // bp-8, 0x42981f
    *(char *)(a3 + 44) = (char)(a3 / 256);
    int64_t v6 = a4 - 1; // 0x429824
    if (v6 == 0 || v4 == 0) {
        int32_t * v7 = (int32_t *)(4 * a3 + 118 + (int64_t)&v5); // 0x429828
        uint32_t v8 = *v7; // 0x429828
        *v7 = v8 / 0x8000 | 0x20000 * v8;
        *(char *)v1 = *(char *)&v1 + (char)v6;
        return 0xc89f7555;
    }
    // 0x4298a1
    return 0xc89f2055;
}

// Address range: 0x4298ac - 0x4298af
int64_t function_4298ac(void) {
    // 0x4298ac
    int64_t result; // 0x4298ac
    return result;
}

// Address range: 0x4298c1 - 0x4298c3
int64_t function_4298c1(void) {
    // 0x4298c1
    int64_t result; // 0x4298c1
    return result;
}

// Address range: 0x44aa25 - 0x44aad4
int64_t function_44aa25(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3; // 0x44aa25
    int64_t v4 = v3 & 0xffffffff; // 0x44aa2a
    bool v5; // 0x44aa25
    if (!v5 && true) {
        // 0x44aa2d
        return __asm_wait(v4);
    }
    if (v5) {
        // 0x44aac4
        *(int32_t *)a2 = (int32_t)a2 ^ 0x6d007352;
        int32_t result = __asm_in(68); // 0x44aacd
        *(int32_t *)v4 = *(int32_t *)&v2;
        return result;
    }
    uint32_t v6 = *(int32_t *)0x6d0073c6; // 0x44aa78
    uint32_t v7 = v6 + (v5 ? 28 : 27); // 0x44aa78
    bool v8 = v5 ? v7 <= v6 : v6 > 0xffffffe4; // 0x44aa78
    *(int32_t *)0x6d0073c6 = v7;
    *(char *)(v3 - 0xb16e73c) = 115;
    int64_t v9 = v2;
    int64_t v10 = (v9 + v3 + (int64_t)v8) % 256 | v9 & -256; // 0x44aa82
    v2 = v10;
    __asm_outsb((int16_t)v1, *(char *)v10);
    unsigned char v11 = ((char)a4 + 31) % 32; // 0x44aa8c
    if (v11 != 0) {
        char * v12 = (char *)((a1 & 0xffffffff) + 125); // 0x44aa8c
        unsigned char v13 = *v12; // 0x44aa8c
        *v12 = v13 >> v11 | v13 << 8 - v11;
    }
    unsigned char v14 = (char)a1 ^ -13; // 0x44aa91
    int64_t result2 = a1 & 0xffffff00 | (int64_t)v14; // 0x44aa91
    if (v14 == 0 || a4 == 2) {
        // 0x44aa96
        *(int32_t *)0x69d6c901 = *(int32_t *)0x69d6c901 + 99;
        return result2;
    }
    // 0x44aaa1
    __asm_out_134((int16_t)v1, v14);
    *(int32_t *)(4 * v3 + 0xf59ea4d) = (int32_t)a5;
    *(int32_t *)v1 = *(int32_t *)&v1 & (int32_t)result2;
    return result2;
}

// Address range: 0x44aaeb - 0x44aafe
int64_t function_44aaeb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 80); // 0x44aaeb
    int64_t v2; // 0x44aaeb
    *v1 = *v1 & (int32_t)v2;
    return v2 & 0xffffff3c ^ 0x64575bc3;
}

// Address range: 0x44ab18 - 0x44ab1e
int64_t function_44ab18(int64_t a1) {
    // 0x44ab18
    int64_t v1; // 0x44ab18
    return (int64_t)*(int32_t *)(v1 + 118);
}

// Address range: 0x493dc9 - 0x493dd1
int64_t function_493dc9(void) {
    // 0x493dc9
    int64_t v1; // 0x493dc9
    int64_t v2 = __asm_wait(v1); // 0x493dc9
    unsigned char v3 = (char)v2;
    unsigned char v4 = v3 + (char)v1; // 0x493dca
    *(char *)v2 = v4;
    int64_t result = v2; // 0x493dcf
    if (v4 < v3) {
        result = function_493d83();
    }
    // 0x493dd1
    return result;
}

// Address range: 0x4b680e - 0x4b6830
int64_t function_4b680e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b680e
    int64_t v1; // 0x4b680e
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x4b6830 - 0x4b683c
int64_t function_4b6830(void) {
    // 0x4b6830
    int64_t file; // 0x4b6830
    fclose((struct _IO_FILE *)file);
    return function_4b6800();
}

// Address range: 0x4b6840 - 0x4b684f
int64_t function_4b6840(void) {
    // 0x4b6840
    int64_t file; // 0x4b6840
    fclose((struct _IO_FILE *)file);
    return function_4b6800();
}

// Address range: 0x4b6850 - 0x4b6857
int64_t function_4b6850(void) {
    // 0x4b6850
    return function_4b6800();
}

// Address range: 0x4b6860 - 0x4b6b07
int64_t function_4b6860(int64_t a1) {
    // 0x4b6860
    int64_t v1; // bp-376, 0x4b6860
    function_4b6270(&v1);
    if ((int32_t)a1 != 0) {
        // 0x4b68d0
        printf("  CTR_DRBG (PR = TRUE) : ");
        g20 = 0;
        int64_t v2 = function_4b6490(&v1, 0x4b5f90, &g4, &g5, 16, 32); // 0x4b690f
        if ((int32_t)v2 != 0) {
            // 0x4b6918
            puts("failed");
            // 0x4b6929
            return 1;
        }
    } else {
        // 0x4b6881
        g20 = 0;
        int64_t v3 = function_4b6490(&v1, 0x4b5f90, &g4, &g5, 16, 32); // 0x4b68b2
        if ((int32_t)v3 != 0) {
            // 0x4b6929
            return 1;
        }
    }
    // 0x4b6948
    function_4b6330(&v1, 1);
    int64_t str; // bp-392, 0x4b6860
    if ((int32_t)function_4b66c0(&v1, &str, 16) == 0) {
        // 0x4b6980
        if ((int32_t)function_4b66c0(&v1, &str, 16) == 0) {
            // 0x4b6996
            if (memcmp(&str, &g6, 16) == 0) {
                // 0x4b69ae
                function_4b6300(&v1);
                if ((int32_t)a1 != 0) {
                    // 0x4b6aa0
                    puts("passed");
                    printf("  CTR_DRBG (PR = FALSE): ");
                    function_4b6270(&v1);
                    g20 = 0;
                    int64_t v4 = function_4b6490(&v1, 0x4b5f90, &g7, &g8, 16, 32); // 0x4b6af5
                    if ((int32_t)v4 != 0) {
                        // 0x4b6918
                        puts("failed");
                        // 0x4b6929
                        return 1;
                    }
                } else {
                    // 0x4b69c0
                    function_4b6270(&v1);
                    g20 = 0;
                    int64_t v5 = function_4b6490(&v1, 0x4b5f90, &g7, &g8, 16, 32); // 0x4b69fb
                    if ((int32_t)v5 != 0) {
                        // 0x4b6929
                        return 1;
                    }
                }
                // 0x4b6a08
                if ((int32_t)function_4b66c0(&v1, &str, 16) == 0) {
                    // 0x4b6a22
                    if ((int32_t)function_4b63a0(&v1, 0, 0) == 0) {
                        // 0x4b6a38
                        if ((int32_t)function_4b66c0(&v1, &str, 16) == 0) {
                            // 0x4b6a52
                            if (memcmp(&str, &g9, 16) == 0) {
                                // 0x4b6a6e
                                function_4b6300(&v1);
                                if ((int32_t)a1 != 0) {
                                    // 0x4b6a82
                                    puts("passed");
                                    putchar(10);
                                }
                                // 0x4b6929
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    // 0x4b696d
    if ((int32_t)a1 == 0) {
        // 0x4b6929
        return 1;
    }
    // 0x4b6918
    puts("failed");
    // 0x4b6929
    return 1;
}

// Address range: 0x4c4c87 - 0x4c4ca2
int64_t function_4c4c87(int64_t a1) {
    // 0x4c4c87
    function_4ba790();
    free((int64_t *)a1);
    return (int64_t)&g51;
}

// Address range: 0x4c4cb0 - 0x4c4cd5
int64_t function_4c4cb0(void) {
    int64_t * mem = calloc(1, 344); // 0x4c4cbb
    int64_t result = (int64_t)mem; // 0x4c4cbb
    if (mem != NULL) {
        // 0x4c4cc8
        function_4ba670(result);
    }
    // 0x4c4cd0
    return result;
}

// Address range: 0x4c4ce0 - 0x4c4ce5
int64_t function_4c4ce0(void) {
    // 0x4c4ce0
    return function_4bce10();
}

// Address range: 0x4c4cf0 - 0x4c4dba
int64_t function_4c4cf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x4c4cf0
    int64_t v1; // bp-408, 0x4c4cf0
    function_4d2a00(&v1);
    int64_t v2 = function_4d2a20(&v1, a1); // 0x4c4d38
    int64_t v3 = v2; // 0x4c4d41
    if ((int32_t)v2 == 0) {
        // 0x4c4d43
        v3 = function_4d2690(&v1, a2 & 0xffffffff, a3, a4, a5, a6, a7, a8);
    }
    // 0x4c4d76
    function_4d2a10(&v1);
    return v3 & 0xffffffff;
}

// Address range: 0x4c4dc0 - 0x4c4e69
int64_t function_4c4dc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4c4dc0
    int64_t v1; // bp-408, 0x4c4dc0
    function_4d2a00(&v1);
    int64_t v2 = function_4d2a20(&v1, a1); // 0x4c4e04
    int64_t v3 = v2; // 0x4c4e0d
    if ((int32_t)v2 == 0) {
        // 0x4c4e0f
        v3 = function_4c4c60(&v1, a2 & 0xffffffff, a3, a4, a5, a6);
    }
    // 0x4c4e27
    function_4d2a10(&v1);
    return v3 & 0xffffffff;
}

// Address range: 0x4c4e70 - 0x4c4e82
int64_t function_4c4e70(int64_t a1) {
    // 0x4c4e70
    function_4caa90();
    free((int64_t *)a1);
    return (int64_t)&g51;
}

// Address range: 0x4c4e90 - 0x4c4eb9
int64_t function_4c4e90(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * mem = calloc(1, 336); // 0x4c4e9b
    int64_t result = (int64_t)mem; // 0x4c4e9b
    if (mem != NULL) {
        // 0x4c4ea8
        function_4c8db0(result, 0, 0);
    }
    // 0x4c4eb4
    return result;
}

// Address range: 0x4c4ec0 - 0x4c4ec5
int64_t function_4c4ec0(void) {
    // 0x4c4ec0
    return function_4c8f30();
}

// Address range: 0x4c4ed0 - 0x4c4f06
int64_t function_4c4ed0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7, int64_t a8) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x4c4ed0
    *(int64_t *)a5 = v1;
    if (v1 > a6) {
        // 0x4c4f00
        return 0xffffbc00;
    }
    // 0x4c4eec
    return function_4c98a0();
}

// Address range: 0x4c4f10 - 0x4c4f46
int64_t function_4c4f10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x4c4f10
    if (*(int64_t *)(a1 + 8) != a3) {
        // 0x4c4f40
        return 0xffffbf80;
    }
    // 0x4c4f26
    return function_4c9d40();
}

// Address range: 0x4c4f50 - 0x4c4f81
int64_t function_4c4f50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x4c4f50
    *(int64_t *)a6 = *(int64_t *)(a1 + 8);
    return function_4ca380();
}

// Address range: 0x4dfb79 - 0x4dfb7a
int64_t function_4dfb79(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4dfb79
    return __asm_in_135((int16_t)a3);
}

// Address range: 0x4dfb7d - 0x4dfe77
int64_t function_4dfb7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = __asm_in(-2); // 0x4dfb7d
    __asm_fbld(*(float80_t *)(a3 + 113));
    bool v2; // 0x4dfb7d
    uint32_t v3 = v1 - (v2 ? 0x62e0ef29 : 0x62e0ef28); // 0x4dfb82
    if ((-1 - v3 + (int32_t)v2 & v1) < 0) {
        // 0x4dfb89
        return function_285b6cf2();
    }
    char * v4 = (char *)(a3 - 47); // 0x4dfb9e
    *v4 = *v4 | (char)(v3 / 256);
    int256_t v5; // 0x4dfb7d
    int256_t v6 = __asm_vprord(v5, 8); // 0x4dfba6
    int256_t v7 = __asm_vprord(v5, 8); // 0x4dfbad
    int256_t v8 = __asm_vpaddd(v5, v5); // 0x4dfbb4
    int256_t v9 = __asm_vpaddd(v5, v5); // 0x4dfbb9
    int256_t v10 = __asm_vpaddd(v5, v6); // 0x4dfbbe
    int256_t v11 = __asm_vpaddd(v5, v7); // 0x4dfbc3
    int256_t v12 = __asm_vpxord(v5, v8); // 0x4dfbc8
    int256_t v13 = __asm_vpxord(v5, v9); // 0x4dfbce
    int256_t v14 = __asm_vpxord(v5, v10); // 0x4dfbd4
    int256_t v15 = __asm_vpxord(v5, v11); // 0x4dfbda
    int256_t v16 = __asm_vprord(v12, 7); // 0x4dfbe0
    int256_t v17 = __asm_vprord(v13, 7); // 0x4dfbe7
    int256_t v18 = __asm_vprord(v14, 7); // 0x4dfbee
    int256_t v19 = __asm_vprord(v15, 7); // 0x4dfbf5
    int256_t v20 = __asm_vpaddd(v5, v5); // 0x4dfbfc
    int256_t v21 = __asm_vpaddd(v5, v5); // 0x4dfc02
    int256_t v22 = __asm_vpaddd(v5, v5); // 0x4dfc08
    int256_t v23 = __asm_vpaddd(v5, v5); // 0x4dfc0e
    int256_t v24 = __asm_vpaddd(v20, v17); // 0x4dfc14
    int256_t v25 = __asm_vpaddd(v21, v18); // 0x4dfc18
    int256_t v26 = __asm_vpaddd(v22, v19); // 0x4dfc1c
    int256_t v27 = __asm_vpaddd(v23, v16); // 0x4dfc20
    int256_t v28 = __asm_vpxord(v7, v24); // 0x4dfc24
    int256_t v29 = __asm_vpxord(v5, v25); // 0x4dfc2a
    int256_t v30 = __asm_vpxord(v5, v26); // 0x4dfc30
    int256_t v31 = __asm_vpxord(v6, v27); // 0x4dfc36
    int256_t v32 = __asm_vprord(v28, 16); // 0x4dfc3c
    int256_t v33 = __asm_vprord(v29, 16); // 0x4dfc43
    int256_t v34 = __asm_vprord(v30, 16); // 0x4dfc4a
    int256_t v35 = __asm_vprord(v31, 16); // 0x4dfc51
    int256_t v36 = __asm_vpaddd(v10, v32); // 0x4dfc58
    int256_t v37 = __asm_vpaddd(v11, v33); // 0x4dfc5d
    int256_t v38 = __asm_vpaddd(v8, v34); // 0x4dfc62
    int256_t v39 = __asm_vpaddd(v9, v35); // 0x4dfc67
    int256_t v40 = __asm_vpxord(v17, v36); // 0x4dfc6c
    int256_t v41 = __asm_vpxord(v18, v37); // 0x4dfc72
    int256_t v42 = __asm_vpxord(v19, v38); // 0x4dfc78
    int256_t v43 = __asm_vpxord(v16, v39); // 0x4dfc7e
    int256_t v44 = __asm_vprord(v40, 12); // 0x4dfc84
    int256_t v45 = __asm_vprord(v41, 12); // 0x4dfc8b
    int256_t v46 = __asm_vprord(v42, 12); // 0x4dfc92
    int256_t v47 = __asm_vprord(v43, 12); // 0x4dfc99
    int256_t v48 = __asm_vpaddd(v24, v5); // 0x4dfca0
    int256_t v49 = __asm_vpaddd(v25, v5); // 0x4dfca6
    int256_t v50 = __asm_vpaddd(v26, v5); // 0x4dfcac
    int256_t v51 = __asm_vpaddd(v27, v5); // 0x4dfcb2
    int256_t v52 = __asm_vpaddd(v48, v44); // 0x4dfcb8
    int256_t v53 = __asm_vpaddd(v49, v45); // 0x4dfcbc
    int256_t v54 = __asm_vpaddd(v50, v46); // 0x4dfcc0
    int256_t v55 = __asm_vpaddd(v51, v47); // 0x4dfcc4
    int256_t v56 = __asm_vpxord(v32, v52); // 0x4dfcc8
    int256_t v57 = __asm_vpxord(v33, v53); // 0x4dfcce
    int256_t v58 = __asm_vpxord(v34, v54); // 0x4dfcd4
    int256_t v59 = __asm_vpxord(v35, v55); // 0x4dfcda
    int256_t v60 = __asm_vprord(v56, 8); // 0x4dfce0
    int256_t v61 = __asm_vprord(v57, 8); // 0x4dfce7
    int256_t v62 = __asm_vprord(v58, 8); // 0x4dfcee
    int256_t v63 = __asm_vprord(v59, 8); // 0x4dfcf5
    int256_t v64 = __asm_vpaddd(v36, v60); // 0x4dfcfc
    int256_t v65 = __asm_vpaddd(v37, v61); // 0x4dfd01
    int256_t v66 = __asm_vpaddd(v38, v62); // 0x4dfd06
    int256_t v67 = __asm_vpaddd(v39, v63); // 0x4dfd0b
    int256_t v68 = __asm_vpxord(v44, v64); // 0x4dfd10
    int256_t v69 = __asm_vpxord(v45, v65); // 0x4dfd16
    int256_t v70 = __asm_vpxord(v46, v66); // 0x4dfd1c
    int256_t v71 = __asm_vpxord(v47, v67); // 0x4dfd22
    int256_t v72 = __asm_vprord(v68, 7); // 0x4dfd28
    int256_t v73 = __asm_vprord(v69, 7); // 0x4dfd2f
    int256_t v74 = __asm_vprord(v70, 7); // 0x4dfd36
    int256_t v75 = __asm_vprord(v71, 7); // 0x4dfd3d
    int256_t v76 = __asm_vpaddd(v52, v5); // 0x4dfd44
    int256_t v77 = __asm_vpaddd(v53, v5); // 0x4dfd4a
    int256_t v78 = __asm_vpaddd(v54, v5); // 0x4dfd50
    int256_t v79 = __asm_vpaddd(v55, v5); // 0x4dfd56
    int256_t v80 = __asm_vpaddd(v76, v75); // 0x4dfd5c
    int256_t v81 = __asm_vpaddd(v77, v72); // 0x4dfd60
    int256_t v82 = __asm_vpaddd(v78, v73); // 0x4dfd64
    int256_t v83 = __asm_vpaddd(v79, v74); // 0x4dfd68
    int256_t v84 = __asm_vpxord(v61, v80); // 0x4dfd6c
    int256_t v85 = __asm_vpxord(v62, v81); // 0x4dfd72
    int256_t v86 = __asm_vpxord(v63, v82); // 0x4dfd78
    int256_t v87 = __asm_vpxord(v60, v83); // 0x4dfd7e
    int256_t v88 = __asm_vprord(v84, 16); // 0x4dfd84
    int256_t v89 = __asm_vprord(v85, 16); // 0x4dfd8b
    int256_t v90 = __asm_vprord(v86, 16); // 0x4dfd92
    int256_t v91 = __asm_vprord(v87, 16); // 0x4dfd99
    int256_t v92 = __asm_vpaddd(v66, v88); // 0x4dfda0
    int256_t v93 = __asm_vpaddd(v67, v89); // 0x4dfda5
    int256_t v94 = __asm_vpaddd(v64, v90); // 0x4dfdaa
    int256_t v95 = __asm_vpaddd(v65, v91); // 0x4dfdaf
    int256_t v96 = __asm_vpxord(v75, v92); // 0x4dfdb4
    int256_t v97 = __asm_vpxord(v72, v93); // 0x4dfdba
    int256_t v98 = __asm_vpxord(v73, v94); // 0x4dfdc0
    int256_t v99 = __asm_vpxord(v74, v95); // 0x4dfdc6
    int256_t v100 = __asm_vprord(v96, 12); // 0x4dfdcc
    int256_t v101 = __asm_vprord(v97, 12); // 0x4dfdd3
    int256_t v102 = __asm_vprord(v98, 12); // 0x4dfdda
    int256_t v103 = __asm_vprord(v99, 12); // 0x4dfde1
    int256_t v104 = __asm_vpaddd(v80, v5); // 0x4dfde8
    int256_t v105 = __asm_vpaddd(v81, v5); // 0x4dfdee
    int256_t v106 = __asm_vpaddd(v82, v5); // 0x4dfdf4
    int256_t v107 = __asm_vpaddd(v83, v5); // 0x4dfdfa
    int256_t v108 = __asm_vpaddd(v104, v100); // 0x4dfe00
    int256_t v109 = __asm_vpaddd(v105, v101); // 0x4dfe04
    int256_t v110 = __asm_vpaddd(v106, v102); // 0x4dfe08
    int256_t v111 = __asm_vpaddd(v107, v103); // 0x4dfe0c
    int256_t v112 = __asm_vpxord(v88, v108); // 0x4dfe10
    int256_t v113 = __asm_vpxord(v89, v109); // 0x4dfe16
    int256_t v114 = __asm_vpxord(v90, v110); // 0x4dfe1c
    int256_t v115 = __asm_vpxord(v91, v111); // 0x4dfe22
    int256_t v116 = __asm_vprord(v112, 8); // 0x4dfe28
    int256_t v117 = __asm_vprord(v113, 8); // 0x4dfe2f
    int256_t v118 = __asm_vprord(v114, 8); // 0x4dfe36
    int256_t v119 = __asm_vprord(v115, 8); // 0x4dfe3d
    int256_t v120 = __asm_vpaddd(v92, v116); // 0x4dfe44
    int256_t v121 = __asm_vpaddd(v93, v117); // 0x4dfe49
    int256_t v122 = __asm_vpaddd(v94, v118); // 0x4dfe4e
    int256_t v123 = __asm_vpaddd(v95, v119); // 0x4dfe53
    int256_t v124 = __asm_vpxord(v100, v120); // 0x4dfe58
    __asm_vpxord(v101, v121);
    __asm_vpxord(v102, v122);
    __asm_vpxord(v103, v123);
    __asm_vprord(v124, 7);
    return v3 + 0x8c57228;
}

// Address range: 0x4f077e - 0x4f0793
int64_t function_4f077e(int64_t a1) {
    // 0x4f077e
    int64_t v1; // 0x4f077e
    function_1fd40(v1 + 0xc4834800 & 0xffffffff);
    return function_20540();
}

// Address range: 0x4f07a0 - 0x4f0a79
int64_t function_4f07a0(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x4f07b3
    unsigned char result = *(char *)&g19; // 0x4f07c7
    int64_t v2; // bp-49, 0x4f07a0
    if ((char)a1 != 1 && result != 0) {
        // 0x4f07d9
        function_4efe30(&v2);
        *(char *)&g19 = 0;
        g37 = (int64_t)&g13;
        function_566180(&g38);
        g35 = (int64_t)&g13;
        function_566180(&g36);
        g33 = (int64_t)&g13;
        function_566180(&g34);
        g28 = (int64_t)&g14;
        function_566180(&g29);
        g26 = (int64_t)&g14;
        function_566180(&g27);
        g24 = (int64_t)&g14;
        function_566180(&g25);
        int64_t * v3 = (int64_t *)g18; // 0x4f088a
        function_563950(&g32, *v3, 16, &g2);
        int64_t * v4 = (int64_t *)g16; // 0x4f08aa
        function_563950(&g31, *v4, 8, &g2);
        int64_t * v5 = (int64_t *)g17; // 0x4f08cb
        function_563950(&g30, *v5, 16, &g2);
        function_4fc100(&g45, &g32);
        function_4fc100(&g46, &g31);
        function_4fc100(&g44, &g30);
        function_4fc100(&g43, &g30);
        function_563d40(&g23, *v3, 16, &g2);
        function_563d40(&g22, *v4, 8, &g2);
        function_563d40(&g21, *v5, 16, &g2);
        function_4fcb60(&g41, &g23);
        function_4fcb60(&g42, &g22);
        function_4fcb60(&g40, &g21);
        function_4fcb60(&g39, &g21);
        function_4f0700(&v2);
    }
    // 0x4f09e1
    if (v1 == __readfsqword(40)) {
        // 0x4f09f3
        return result;
    }
    // 0x4f0a00
    __stack_chk_fail();
    function_4f0700(&v2);
    _Unwind_Resume((struct _Unwind_Exception *)&g51);
    if (g51 == 0) {
        int64_t v6 = *(int64_t *)(*(int64_t *)((int64_t)&g51 + 8) + 8); // 0x4f0a2a
        if (v6 == (int64_t)&g51) {
            // 0x4f0a70
            return *(int64_t *)((int64_t)&g51 + 24);
        }
    }
    int64_t v7 = *(int64_t *)((int64_t)&g51 + 16); // 0x4f0a30
    if (v7 != 0) {
        int64_t result2 = v7;
        int64_t v8 = *(int64_t *)(result2 + 24); // 0x4f0a43
        while (v8 != 0) {
            // 0x4f0a43
            result2 = v8;
            v8 = *(int64_t *)(result2 + 24);
        }
        // 0x4f09f3
        return result2;
    }
    int64_t result3 = *(int64_t *)((int64_t)&g51 + 8); // 0x4f0a50
    if (*(int64_t *)(result3 + 16) != (int64_t)&g51) {
        // 0x4f09f3
        return result3;
    }
    int64_t v9 = result3;
    int64_t result4 = *(int64_t *)(v9 + 8); // 0x4f0a63
    while (*(int64_t *)(result4 + 16) == v9) {
        // 0x4f0a63
        v9 = result4;
        result4 = *(int64_t *)(v9 + 8);
    }
    // 0x4f09f3
    return result4;
}

// Address range: 0x4f584b - 0x4f58a7
int64_t function_4f584b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x4f584b
    int64_t v1; // 0x4f584b
    char * v2 = (char *)(v1 - 115); // 0x4f584b
    char v3 = a4; // 0x4f584b
    *v2 = *v2 + v3;
    int64_t v4 = v1 & -256 | 208; // 0x4f584e
    int64_t v5; // 0x4f584b
    int64_t v6 = v5;
    *(char *)v6 = *(char *)&v5 + (char)v6;
    char * v7 = (char *)(v5 - 119); // 0x4f5852
    *v7 = *v7 + v3;
    int64_t v8 = v1 + 216; // 0x4f585c
    *(int64_t *)v8 = 0;
    *(int64_t *)(v4 + 216) = (int64_t)*(int32_t *)v8;
    *(char *)(v4 + 224) = *(char *)(v1 + 224);
    unsigned char result = *(char *)(v1 + 225); // 0x4f5881
    *(int64_t *)(v4 + 232) = 0;
    *(char *)(v4 + 225) = result;
    *(int64_t *)(v1 + 8) = 0;
    return result;
}

// Address range: 0x4f58b0 - 0x4f59a7
// From class:    std::istream
// Type:          constructor
int64_t function_4f58b0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 16; // 0x4f58b2
    function_54cb80(v1);
    char * v2 = (char *)(a1 + 240); // 0x4f58d3
    *v2 = 0;
    int64_t * v3 = (int64_t *)(a1 + 232); // 0x4f58dd
    *v3 = 0;
    char * v4 = (char *)(a1 + 241); // 0x4f58e8
    *v4 = 0;
    int64_t * v5 = (int64_t *)(a1 + 248); // 0x4f58ef
    *v5 = 0;
    *(int64_t *)(a1 + 256) = 0;
    *(int64_t *)(a1 + 264) = 0;
    *(int64_t *)v1 = (int64_t)&g11;
    int64_t * v6 = (int64_t *)(a2 + 8); // 0x4f591c
    *(int64_t *)a1 = (int64_t)&g10;
    *(int64_t *)(a1 + 272) = 0;
    *(int64_t *)(a1 + 8) = *v6;
    int64_t v7 = *(int64_t *)(a2 - 24) + a2; // 0x4f593b
    function_54cf90(v1, v7);
    function_4fc380(v1, a1 + 224);
    int64_t * v8 = (int64_t *)(v7 + 216); // 0x4f5955
    *v8 = 0;
    *v3 = *v8;
    *v2 = *(char *)(v7 + 224);
    unsigned char result = *(char *)(v7 + 225); // 0x4f597b
    *v5 = 0;
    *v4 = result;
    *v6 = 0;
    return result;
}

// Address range: 0x4f59a7 - 0x4f5a8d
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_4f59a7(int64_t a1, int64_t a2) {
    // 0x4f59a7
    int64_t result; // 0x4f59a7
    *(int64_t *)(result + 16) = (int64_t)&g12;
    function_54cf10(result);
    _Unwind_Resume((struct _Unwind_Exception *)result);
    int64_t v1 = *(int64_t *)((int64_t)&g51 - 24) + result; // 0x4f59ee
    int64_t v2 = *(int64_t *)(a2 - 24) + a2; // 0x4f59f4
    function_54d0a0(v1, v2);
    function_4fc380(v1, v1 + 208);
    function_4fc380(v2, v2 + 208);
    int64_t * v3 = (int64_t *)(v1 + 216); // 0x4f5a1d
    int64_t * v4 = (int64_t *)(v2 + 216); // 0x4f5a24
    *v3 = *v4;
    *v4 = *v3;
    char * v5 = (char *)(v2 + 224); // 0x4f5a39
    char * v6 = (char *)(v1 + 224); // 0x4f5a40
    *v6 = *v5;
    *v5 = *v6;
    char * v7 = (char *)(v2 + 225); // 0x4f5a53
    char * v8 = (char *)(v1 + 225); // 0x4f5a5a
    *v8 = *v7;
    *v7 = *v8;
    int64_t * v9 = (int64_t *)(a2 + 8); // 0x4f5a6d
    int64_t * v10 = (int64_t *)(result + 8); // 0x4f5a71
    *v10 = *v9;
    *v9 = *v10;
    return result;
}

// Address range: 0x4f5a90 - 0x4f5b4a
int64_t function_4f5a90(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x4f5aae
    int64_t v2 = *(int64_t *)(a2 - 24) + a2; // 0x4f5ab4
    function_54d0a0(v1, v2);
    function_4fc380(v1, v1 + 208);
    function_4fc380(v2, v2 + 208);
    int64_t * v3 = (int64_t *)(v1 + 216); // 0x4f5add
    int64_t * v4 = (int64_t *)(v2 + 216); // 0x4f5ae4
    *v3 = *v4;
    *v4 = *v3;
    char * v5 = (char *)(v2 + 224); // 0x4f5af9
    char * v6 = (char *)(v1 + 224); // 0x4f5b00
    *v6 = *v5;
    *v5 = *v6;
    char * v7 = (char *)(v2 + 225); // 0x4f5b13
    char * v8 = (char *)(v1 + 225); // 0x4f5b1a
    *v8 = *v7;
    *v7 = *v8;
    int64_t * v9 = (int64_t *)(a2 + 8); // 0x4f5b2d
    int64_t * v10 = (int64_t *)(a1 + 8); // 0x4f5b32
    int64_t result = *v10; // 0x4f5b32
    *v10 = *v9;
    *v9 = result;
    return result;
}

// Address range: 0x52b5d4 - 0x52b5d9
int64_t function_52b5d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x52b5d4
    int64_t result; // 0x52b5d4
    return result;
}

// Address range: 0x52b5da - 0x52b5f4
int64_t function_52b5da(int64_t a1) {
    // 0x52b5da
    int64_t v1; // 0x52b5da
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x52b5da
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    int64_t result = a1 + 16; // 0x52b5e0
    *(int64_t *)(a1 + 8) = 0;
    *(char *)result = 0;
    *(int64_t *)a1 = result;
    return result;
}

// Address range: 0x52b600 - 0x52b614
int64_t function_52b600(int64_t a1) {
    int64_t result = a1 + 16; // 0x52b600
    *(int64_t *)(a1 + 8) = 0;
    *(char *)result = 0;
    *(int64_t *)a1 = result;
    return result;
}

// Address range: 0x52b620 - 0x52b62f
int64_t function_52b620(int64_t a1, int64_t a2, int64_t a3) {
    // 0x52b620
    *(int64_t *)a1 = a1 + 16;
    return function_52b0c0();
}

// Address range: 0x52b630 - 0x52b67b
int64_t function_52b630(int64_t a1, int64_t a2) {
    int64_t result = a2 + 16; // 0x52b63a
    *(int64_t *)a1 = a2;
    *(int64_t *)(a1 + 16) = *(int64_t *)result;
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x52b64e
    *(int64_t *)(a1 + 8) = *v1;
    *(int64_t *)a2 = result;
    *v1 = 0;
    *(char *)result = 0;
    return result;
}

// Address range: 0x52b680 - 0x52b6e0
int64_t function_52b680(int64_t a1, int64_t a2) {
    int64_t result = a2 + 16; // 0x52b68a
    *(int64_t *)a1 = a2;
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x52b696
    *(int64_t *)(a1 + 8) = *v1;
    *(int64_t *)(a1 + 16) = *(int64_t *)result;
    *(int64_t *)a2 = result;
    *v1 = 0;
    *(char *)result = 0;
    return result;
}

// Address range: 0x52b6e0 - 0x52b6fa
int64_t function_52b6e0(int64_t a1) {
    // 0x52b6e0
    return function_4eeb50(a1);
}

// Address range: 0x52b700 - 0x52b70e
int64_t function_52b700(int64_t result) {
    // 0x52b700
    function_52b320();
    return result;
}

// Address range: 0x52b710 - 0x52b7cf
int64_t function_52b710(int64_t result, int64_t a2) {
    int64_t v1 = a2 + 16; // 0x52b715
    int64_t * v2 = (int64_t *)a2; // 0x52b720
    int64_t v3 = *v2; // 0x52b720
    if (v1 == v3) {
        int64_t * v4 = (int64_t *)(a2 + 8);
        int64_t v5 = *v4; // 0x52b790
        int64_t v6 = 0; // 0x52b797
        if (v5 != 0) {
            if (v5 != 1) {
                // 0x52b7c0
                memcpy((int64_t *)result, (int64_t *)v1, (int32_t)v5);
                v6 = *v4;
            } else {
                // 0x52b79f
                *(char *)result = *(char *)v1;
                v6 = *v4;
            }
        }
        // 0x52b7ad
        *(int64_t *)(result + 8) = v6;
        *(char *)(v6 + result) = 0;
        // 0x52b759
        *v4 = 0;
        *(char *)v1 = 0;
        return result;
    }
    // 0x52b72c
    *(int64_t *)result = v3;
    int64_t * v7 = (int64_t *)(a2 + 8);
    int64_t * v8 = (int64_t *)(result + 16); // 0x52b740
    *(int64_t *)(result + 8) = *v7;
    int64_t * v9 = (int64_t *)v1; // 0x52b748
    *v8 = *v9;
    int64_t v10; // 0x52b710
    if (result == 0) {
        // 0x52b784
        *v2 = v1;
        v10 = v1;
    } else {
        // 0x52b752
        *v2 = result;
        *v9 = *v8;
        v10 = result;
    }
    // 0x52b759
    *v7 = 0;
    *(char *)v10 = 0;
    return result;
}

// Address range: 0x52b7d0 - 0x52b7d4
int64_t function_52b7d0(int64_t result) {
    // 0x52b7d0
    return result;
}

// Address range: 0x52b7e0 - 0x52b7e4
int64_t function_52b7e0(int64_t result) {
    // 0x52b7e0
    return result;
}

// Address range: 0x52b7f0 - 0x52b7f8
int64_t function_52b7f0(int64_t a1) {
    // 0x52b7f0
    return *(int64_t *)(a1 + 8) + a1;
}

// Address range: 0x52b800 - 0x52b808
int64_t function_52b800(int64_t a1) {
    // 0x52b800
    return *(int64_t *)(a1 + 8) + a1;
}

// Address range: 0x52b810 - 0x52b81e
int64_t function_52b810(int64_t result, int64_t a2) {
    // 0x52b810
    *(int64_t *)result = *(int64_t *)(a2 + 8) + a2;
    return result;
}

// Address range: 0x52b820 - 0x52b82e
int64_t function_52b820(int64_t result, int64_t a2) {
    // 0x52b820
    *(int64_t *)result = *(int64_t *)(a2 + 8) + a2;
    return result;
}

// Address range: 0x52b830 - 0x52b83a
int64_t function_52b830(int64_t result, int64_t a2) {
    // 0x52b830
    *(int64_t *)result = a2;
    return result;
}

// Address range: 0x52b840 - 0x52b84a
int64_t function_52b840(int64_t result, int64_t a2) {
    // 0x52b840
    *(int64_t *)result = a2;
    return result;
}

// Address range: 0x52b850 - 0x52b854
int64_t function_52b850(int64_t result) {
    // 0x52b850
    return result;
}

// Address range: 0x52b860 - 0x52b868
int64_t function_52b860(int64_t a1) {
    // 0x52b860
    return *(int64_t *)(a1 + 8) + a1;
}

// Address range: 0x52b870 - 0x52b87e
int64_t function_52b870(int64_t result, int64_t a2) {
    // 0x52b870
    *(int64_t *)result = *(int64_t *)(a2 + 8) + a2;
    return result;
}

// Address range: 0x52b880 - 0x52b88a
int64_t function_52b880(int64_t result, int64_t a2) {
    // 0x52b880
    *(int64_t *)result = a2;
    return result;
}

// Address range: 0x52b890 - 0x52b895
int64_t function_52b890(int64_t a1) {
    // 0x52b890
    return *(int64_t *)(a1 + 8);
}

// Address range: 0x52b8a0 - 0x52b8a5
int64_t function_52b8a0(int64_t a1) {
    // 0x52b8a0
    return *(int64_t *)(a1 + 8);
}

// Address range: 0x52b8b0 - 0x52b8bb
int64_t function_52b8b0(void) {
    // 0x52b8b0
    return 0x7fffffffffffffff;
}

// Address range: 0x52b8c0 - 0x52b8d6
int64_t function_52b8c0(int64_t a1) {
    // 0x52b8c0
    return *(int64_t *)(a1 + 16);
}

// Address range: 0x54fbfb - 0x54fbff
int64_t function_54fbfb(void) {
    // 0x54fbfb
    int64_t v1; // 0x54fbfb
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    return function_54fbc8();
}

// Address range: 0x54fc00 - 0x54fc07
int64_t function_54fc00(void) {
    // 0x54fc00
    return function_54fbc8();
}

// Address range: 0x54fc07 - 0x54fc14
int64_t function_54fc07(int64_t result) {
    // 0x54fc07
    __stack_chk_fail();
    return result;
}

// Address range: 0x54fc20 - 0x54fc27
int64_t function_54fc20(int64_t a1, int64_t result) {
    // 0x54fc20
    *(int64_t *)a1 = result;
    return result;
}

// Address range: 0x54fc30 - 0x54fc38
int64_t function_54fc30(int64_t a1) {
    // 0x54fc30
    return a1 - 24;
}

// Address range: 0x54fc40 - 0x54fc44
int64_t function_54fc40(int64_t result) {
    // 0x54fc40
    return result;
}

// Address range: 0x54fc50 - 0x54fc5c
int64_t function_54fc50(int64_t a1) {
    // 0x54fc50
    return 4 * *(int64_t *)(a1 - 24) + a1;
}

// Address range: 0x54fc60 - 0x54fc72
int64_t function_54fc60(int64_t a1, int64_t a2, uint64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 - 24) - a2; // 0x54fc67
    return v1 > a3 ? a3 : v1;
}

// Address range: 0x54fc80 - 0x54fc9d
int64_t function_54fc80(uint64_t a1, uint64_t a2) {
    int64_t result = 1; // 0x54fc8b
    if (a1 <= a2) {
        uint64_t v1 = 4 * *(int64_t *)(a1 - 24) + a1; // 0x54fc91
        result = v1 & -256 | (int64_t)(v1 < a2);
    }
    // 0x54fc9b
    return result;
}

// Address range: 0x54fca0 - 0x54fcc3
int64_t function_54fca0(int64_t wstr, int64_t n, int64_t wc) {
    int64_t result = wc & 0xffffffff; // 0x54fca4
    if (n == 1) {
        // 0x54fcc0
        *(int32_t *)wstr = (int32_t)wc;
        return result;
    }
    if (n != 0) {
        // 0x54fcb0
        return (int64_t)wmemset((int32_t *)wstr, (int32_t)wc, (int32_t)n);
    }
    // 0x54fcad
    return result;
}

// Address range: 0x54fcd0 - 0x54fcf5
int64_t function_54fcd0(int64_t wstr, int64_t wstr2, int64_t a3) {
    int64_t n = a3 - wstr2 >> 2; // 0x54fcd3
    if (n == 1) {
        // 0x54fcf0
        *(int32_t *)wstr = (int32_t)wstr2;
        return wstr2 & 0xffffffff;
    }
    if (n != 0) {
        // 0x54fce8
        return (int64_t)wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
    }
    // 0x54fce2
    int64_t result; // 0x54fcd0
    return result;
}

// Address range: 0x54fd00 - 0x54fd25
int64_t function_54fd00(int64_t wstr, int64_t wstr2, int64_t a3) {
    int64_t n = a3 - wstr2 >> 2; // 0x54fd03
    if (n == 1) {
        // 0x54fd20
        *(int32_t *)wstr = (int32_t)wstr2;
        return wstr2 & 0xffffffff;
    }
    if (n != 0) {
        // 0x54fd18
        return (int64_t)wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
    }
    // 0x54fd12
    int64_t result; // 0x54fd00
    return result;
}

// Address range: 0x54fd30 - 0x54fd55
int64_t function_54fd30(int64_t wstr, int64_t wstr2, int64_t a3) {
    int64_t n = a3 - wstr2 >> 2; // 0x54fd33
    if (n == 1) {
        // 0x54fd50
        *(int32_t *)wstr = (int32_t)wstr2;
        return wstr2 & 0xffffffff;
    }
    if (n != 0) {
        // 0x54fd48
        return (int64_t)wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
    }
    // 0x54fd42
    int64_t result; // 0x54fd30
    return result;
}

// Address range: 0x54fd60 - 0x54fd85
int64_t function_54fd60(int64_t wstr, int64_t wstr2, int64_t a3) {
    int64_t n = a3 - wstr2 >> 2; // 0x54fd63
    if (n == 1) {
        // 0x54fd80
        *(int32_t *)wstr = (int32_t)wstr2;
        return wstr2 & 0xffffffff;
    }
    if (n != 0) {
        // 0x54fd78
        return (int64_t)wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
    }
    // 0x54fd72
    int64_t result; // 0x54fd60
    return result;
}

// Address range: 0x54fd90 - 0x54fdb0
int64_t function_54fd90(int64_t a1, int64_t a2) {
    uint64_t v1 = a1 - a2; // 0x54fd90
    int64_t result = 0x7fffffff; // 0x54fd9f
    if (v1 <= 0x7fffffff) {
        int64_t v2 = v1 + 0x80000000; // 0x54fda4
        result = v2 < 0 == ((v2 ^ v1) & (v1 ^ -0x8000000000000000)) < 0 ? v1 & 0xffffffff : 0x80000000;
    }
    // 0x54fdae
    return result;
}

// Address range: 0x54fdb0 - 0x54fdb8
int64_t function_54fdb0(void) {
    // 0x54fdb0
    return (int64_t)&g49;
}

// Address range: 0x54fdc0 - 0x54fdd5
int64_t function_54fdc0(int64_t a1, int64_t a2) {
    // 0x54fdc0
    *(int64_t *)a1 = a2;
    *(int64_t *)a2 = (int64_t)&g50;
    return (int64_t)&g50;
}

// Address range: 0x54fde0 - 0x54fde4
int64_t function_54fde0(int64_t result) {
    // 0x54fde0
    return result;
}

// Address range: 0x54fdf0 - 0x54fdfc
int64_t function_54fdf0(int64_t a1) {
    // 0x54fdf0
    return 4 * *(int64_t *)(a1 - 24) + a1;
}

// Address range: 0x54fe00 - 0x54fe12
int64_t function_54fe00(int64_t result, int64_t a2) {
    // 0x54fe00
    *(int64_t *)result = 4 * *(int64_t *)(a2 - 24) + a2;
    return result;
}

// Address range: 0x54fe20 - 0x54fe2a
int64_t function_54fe20(int64_t result, int64_t a2) {
    // 0x54fe20
    *(int64_t *)result = a2;
    return result;
}

// Address range: 0x54fe30 - 0x54fe34
int64_t function_54fe30(int64_t result) {
    // 0x54fe30
    return result;
}

// Address range: 0x54fe40 - 0x54fe4c
int64_t function_54fe40(int64_t a1) {
    // 0x54fe40
    return 4 * *(int64_t *)(a1 - 24) + a1;
}

// Address range: 0x54fe50 - 0x54fe62
int64_t function_54fe50(int64_t result, int64_t a2) {
    // 0x54fe50
    *(int64_t *)result = 4 * *(int64_t *)(a2 - 24) + a2;
    return result;
}

// Address range: 0x54fe70 - 0x54fe7a
int64_t function_54fe70(int64_t result, int64_t a2) {
    // 0x54fe70
    *(int64_t *)result = a2;
    return result;
}

// Address range: 0x54fe80 - 0x54fe8b
int64_t function_54fe80(void) {
    // 0x54fe80
    return 0xffffffffffffffe;
}

// Address range: 0x54fe90 - 0x54fe98
int64_t function_54fe90(int64_t a1) {
    // 0x54fe90
    return *(int64_t *)(a1 - 16);
}

// Address range: 0x54fea0 - 0x54fea8
int64_t function_54fea0(int64_t a1, int64_t a2) {
    // 0x54fea0
    return 4 * a2 + a1;
}

// Address range: 0x54feb0 - 0x54fee4
int64_t function_54feb0(int64_t a1, uint64_t a2) {
    // 0x54feb0
    if (*(int64_t *)(a1 - 24) > a2) {
        // 0x54febc
        return 4 * a2 + a1;
    }
    // 0x54fec1
    function_542650("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)");
    return 0x74735f6369736162;
}

// Address range: 0x54fef0 - 0x54fefd
int64_t function_54fef0(int64_t a1) {
    // 0x54fef0
    return a1 - 4 + 4 * *(int64_t *)(a1 - 24);
}
