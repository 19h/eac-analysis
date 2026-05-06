/*
 * Targeted RetDec C for native executable gap queue batch 3320.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x24a96-0x24bd0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c53d-0x2c65e rank=- name=- kind=- bytes=- uncovered=-
 *   0x35dbf-0x35ef6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x379d4-0x37af9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x454a8-0x455ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x61562-0x61698 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a1e85-0x1a1fa3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a7ebb-0x1a7ffe rank=- name=- kind=- bytes=- uncovered=-
 *   0x27ca41-0x27cb8e rank=- name=- kind=- bytes=- uncovered=-
 *   0x27f19f-0x27f2ea rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c75f0-0x3c7677 rank=- name=- kind=- bytes=- uncovered=-
 *   0x488b0c-0x488c50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48c6a5-0x48c7e6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48d5fc-0x48d707 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48fbbf-0x48fcf5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4904d6-0x490604 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49735d-0x497480 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b1e79-0x4b1fc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c18d5-0x4c19e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c3653-0x4c3770 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c4fd8-0x4c5100 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cf79f-0x4cf8d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cfa97-0x4cfb40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ed13a-0x4ed250 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f05d2-0x4f0700 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fdc7c-0x4fddc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5070ae-0x5071e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5295e1-0x529720 rank=- name=- kind=- bytes=- uncovered=-
 *   0x547e6c-0x547fb0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54d71d-0x54d830 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5557da-0x555910 rank=- name=- kind=- bytes=- uncovered=-
 *   0x578f7c-0x5790b0 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1a1e85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a1f14(void);
int64_t function_1a1f51(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a1f57(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a7ea5();
int64_t function_1a7ebb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1a7fe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1edd48();
int64_t function_1fd40();
int64_t function_20540();
int64_t function_20a50();
int64_t function_21a2d();
int64_t function_221a8();
int64_t function_24a96(int64_t a1);
int64_t function_24b14(void);
int64_t function_24b52(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24e1e();
int64_t function_255da();
int64_t function_259ce();
int64_t function_25e90();
int64_t function_27bbe();
int64_t function_27c9f4();
int64_t function_27ca41(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27ca5d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_27ca8c(void);
int64_t function_27cab1(void);
int64_t function_27cabf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_27cb15(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_27e7a();
int64_t function_27f19f(void);
int64_t function_27f213(void);
int64_t function_27f23b(int64_t a1);
int64_t function_27f287(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27f2c6(int64_t a1);
int64_t function_2c2fa();
int64_t function_2c53d(int64_t a1, int64_t a2);
int64_t function_2c568(int64_t a1, int64_t a2);
int64_t function_2c654(int64_t a1);
int64_t function_2c7a0();
int64_t function_35a50();
int64_t function_35dbf(void);
int64_t function_35dc6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_35e50(int64_t a1);
int64_t function_35e58(int64_t a1);
int64_t function_35e68(int64_t a1, int64_t a2, int64_t a3);
int64_t function_35e94(int64_t a1);
int64_t function_35e9e(int64_t a1);
int64_t function_35eb2(int64_t a1);
int64_t function_35ec6(int64_t a1);
int64_t function_35ed2(int64_t a1);
int64_t function_35eea(int64_t result);
int64_t function_35eee(int64_t a1);
int64_t function_35ef6();
int64_t function_379d4(int64_t a1, int64_t a2);
int64_t function_37a10(int64_t a1);
int64_t function_37a51(int64_t a1);
int64_t function_37a5b(void);
int64_t function_37a91(void);
int64_t function_37aca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37ae2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_37c20();
int64_t function_3c75f0(void);
int64_t function_3c75f8(int64_t a1);
int64_t function_3c75fd(void);
int64_t function_3c7610(void);
int64_t function_3c7618(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44a22();
int64_t function_451f2();
int64_t function_453e6();
int64_t function_454a8(uint64_t a1);
int64_t function_454b6(int64_t a1, int64_t a2);
int64_t function_488810();
int64_t function_488b0c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_488c24(int64_t result);
int64_t function_488c28(int64_t a1);
int64_t function_48c6a5(void);
int64_t function_48c6a8(void);
int64_t function_48c6aa(int64_t result);
int64_t function_48c6ae(int64_t result);
int64_t function_48c6b2(int64_t result);
int64_t function_48c6b6(int64_t result);
int64_t function_48c6ba(int64_t result);
int64_t function_48c6be(int64_t result);
int64_t function_48c6c2(int64_t result);
int64_t function_48c6c6(int64_t result);
int64_t function_48c6ca(int64_t result);
int64_t function_48c6ce(int64_t result);
int64_t function_48c6d2(int64_t result);
int64_t function_48c6d6(int64_t result);
int64_t function_48c6da(int64_t result);
int64_t function_48c6de(int64_t result);
int64_t function_48c6e2(int64_t result);
int64_t function_48c6e6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48c6f2(int64_t result, int64_t a2);
int64_t function_48c718(int64_t result, int64_t a2);
int64_t function_48c72c(int64_t result, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48c7c2(int64_t a1, int64_t a2);
int64_t function_48c7cc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48d332();
int64_t function_48d385();
int64_t function_48d39b();
int64_t function_48d3bb();
int64_t function_48d5bb();
int64_t function_48d5fc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48d63e(int64_t result, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_48d679(int64_t result, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48d6a9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48d6e1(int64_t a1, int64_t a2);
int64_t function_48fb27();
int64_t function_48fbbf(uint64_t result, uint64_t a2, int64_t a3);
int64_t function_48fbee(int64_t a1, int64_t a2);
int64_t function_48fce0(void);
int64_t function_4904d6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_490595(int64_t a1, int64_t wstr, int64_t a3);
int64_t function_49735d(void);
int64_t function_497370(int64_t a1, int64_t a2);
int64_t function_497390(int64_t a1, int64_t a2);
int64_t function_4973b0(int64_t a1, int64_t a2);
int64_t function_4973d0(int64_t a1, int64_t a2);
int64_t function_4973f0(int64_t a1, int64_t a2);
int64_t function_497400(int64_t a1, int64_t result);
int64_t function_497410(int64_t a1, uint64_t a2);
int64_t function_497430(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_497450(int64_t a1, int64_t a2, int64_t a3);
int64_t function_497460(int64_t a1);
int64_t function_4a3c820();
int64_t function_4b03f0();
int64_t function_4b1ca0();
int64_t function_4b1dcd();
int64_t function_4b1e79(void);
int64_t function_4b1e90(void);
int64_t function_4b1e98(void);
int64_t function_4b1eb0(int64_t a1, int64_t a2);
int64_t function_4c1690();
int64_t function_4c16b0();
int64_t function_4c1770();
int64_t function_4c18d5(void);
int64_t function_4c18e0(int64_t a1, int64_t file_path, int64_t a3);
int64_t function_4c3653(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4c3660(int64_t str, uint64_t size, int64_t a3);
int64_t function_4c4fd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4cf380();
int64_t function_4cf560();
int64_t function_4cf79f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4cf7a4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_4cf8d0();
int64_t function_4cfa68();
int64_t function_4cfa97(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_4cfb37(void);
int64_t function_4ed13a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4ed147(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4ed15c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4ed171(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4ed186(void);
int64_t function_4ed195(void);
int64_t function_4ed19f(void);
int64_t function_4ed1b3(char a1);
int64_t function_4ed1c6(void);
int64_t function_4ed1e8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4ed1fc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4ed210(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4ed224(void);
int64_t function_4ed22e(void);
int64_t function_4eeb40();
int64_t function_4eeb50();
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_4f05d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4f05de(void);
int64_t function_4f05fc(void);
int64_t function_4f0610(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4f0667(void);
int64_t function_4f068c(void);
int64_t function_4f06af(void);
int64_t function_4f0bc0();
int64_t function_4f1760();
int64_t function_4f20e();
int64_t function_4f3f50();
int64_t function_4f4060();
int64_t function_4f4e50();
int64_t function_4f4f50();
int64_t function_4fd895();
int64_t function_4fd972();
int64_t function_4fd9f0();
int64_t function_4fda54();
int64_t function_4fdbd3();
int64_t function_4fdbe0();
int64_t function_4fdc00();
int64_t function_4fdc50();
int64_t function_4fdc7c(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_4fdcb0(void);
int64_t function_4fdcc0(void);
int64_t function_4fdcf8(void);
int64_t function_4fdd00(void);
int64_t function_4fdd10(void);
int64_t function_505130();
int64_t function_5070ae(void);
int64_t function_5070b0(int64_t a1);
int64_t function_507140(int64_t a1);
int64_t function_52848e();
int64_t function_528550();
int64_t function_528565();
int64_t function_52877a();
int64_t function_52880a();
int64_t function_528941();
int64_t function_528b7d();
int64_t function_528d00();
int64_t function_5290db();
int64_t function_529199();
int64_t function_52945c();
int64_t function_5295e1(int64_t a1, int32_t a2);
int64_t function_529607(int64_t a1);
int64_t function_529623(void);
int64_t function_52962d(void);
int64_t function_52964a(int64_t a1, int64_t a2);
int64_t function_529686(int64_t a1, int64_t a2);
int64_t function_5296cc(int32_t a1);
int64_t function_5296d8(int32_t a1);
int64_t function_5296e4(void);
int64_t function_52970c(void);
int64_t function_52970e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_52af50();
int64_t function_542470();
int64_t function_542650();
int64_t function_547e30();
int64_t function_547e57();
int64_t function_547e6c(void);
int64_t function_547e6e(int64_t a1);
int64_t function_547ec0(int64_t result);
int64_t function_547ef0(int64_t a1, uint64_t result, int64_t a3, int64_t a4);
int64_t function_547f70(int64_t a1, int64_t result, int64_t a3, int64_t a4);
int64_t function_549920();
int64_t function_54cf10();
int64_t function_54d6e0();
int64_t function_54d71d(int64_t a1, int64_t a2);
int64_t function_54d790(int64_t a1, int64_t a2, int64_t a3);
int64_t function_552550();
int64_t function_555719();
int64_t function_5557da(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5557e8(void);
int64_t function_5557f7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5558af(void);
int64_t function_5558c1(void);
int64_t function_5558db(void);
int64_t function_5558e0(void);
int64_t function_5558e2(void);
int64_t function_5558f4(void);
int64_t function_555906(void);
int64_t function_555908(void);
int64_t function_55590a(void);
int64_t function_565970();
int64_t function_566180();
int64_t function_5679b0();
int64_t function_5679e0();
int64_t function_567a10();
int64_t function_56b220();
int64_t function_56b4f0();
int64_t function_5700a0();
int64_t function_572060();
int64_t function_578cfb();
int64_t function_578d44();
int64_t function_578e46();
int64_t function_578f47();
int64_t function_578f7c(void);
int64_t function_578f81(void);
int64_t function_578f8b(void);
int64_t function_578f95(void);
int64_t function_578f9c(void);
int64_t function_578fbc(void);
int64_t function_578fd5(void);
int64_t function_579001(void);
int64_t function_57901a(void);
int64_t function_57901c(void);
int64_t function_579038(void);
int64_t function_57903d(void);
int64_t function_579042(void);
int64_t function_579047(void);
int64_t function_57906f(void);
int64_t function_579074(void);
int64_t function_5790ab(void);
int64_t function_613f0();
int64_t function_61562(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6c5a38f6();
int64_t function_7104e();
int64_t function_71d34();
int64_t function_729c2();
int64_t function_729ce();
int64_t function_7604dd56();
int64_t function_c57b8();
int64_t function_ff955();
int64_t function_ffffffffa971d967();
int64_t unknown_10349127();
int64_t unknown_611cbbc5();
int64_t unknown_688f7e24();
int64_t unknown_ffffffffb8c632e4();
int64_t unknown_ffffffffe78443d6();
int64_t unknown_fffffffff9c6fd1b();

// Address range: 0x24a96 - 0x24ac6
int64_t function_24a96(int64_t a1) {
    // 0x24a96
    __readfsqword(40);
    return function_ff955();
}

// Address range: 0x24b14 - 0x24b15
int64_t function_24b14(void) {
    // 0x24b14
    int64_t result; // 0x24b14
    return result;
}

// Address range: 0x24b52 - 0x24bcf
int64_t function_24b52(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24b52
    int64_t v1; // 0x24b52
    if ((v1 & 0xffffffff) != 0) {
        int64_t v2 = a4 & 0xffffffff ^ 198; // 0x24b5d
        char * v3 = (char *)v2; // 0x24b5f
        *v3 = *v3 | (char)v2;
        return function_7604dd56();
    }
    int64_t result = 0; // 0x24bc3
    if ((a4 & 0xffffff18) != __readfsqword(40)) {
        // 0x24bc5
        __stack_chk_fail();
        result = (int64_t)&g40;
    }
    // 0x24bca
    return result;
}

// Address range: 0x2c53d - 0x2c568
int64_t function_2c53d(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x2c541
    int64_t v2 = *v1; // 0x2c541
    int64_t v3 = v2; // 0x2c541
    if (v2 == *(int64_t *)(a1 + 16)) {
        // 0x2c698
        int64_t result; // 0x2c53d
        return result;
    }
    int128_t v4 = *(int128_t *)&v3; // 0x2c54b
    int128_t v5 = __asm_movups(v4); // 0x2c54b
    int64_t v6 = v4;
    __asm_movups_133(*(int128_t *)v6, v5);
    int64_t result2 = *(int64_t *)(a2 + 16); // 0x2c556
    *(int64_t *)(v6 + 16) = result2;
    *v1 = v6 + 24;
    return result2;
}

// Address range: 0x2c568 - 0x2c653
int64_t function_2c568(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 8; // 0x2c56c
    int64_t v2 = *(int64_t *)(a1 + 16);
    uint32_t v3 = (int32_t)a2;
    int64_t v4 = v1; // 0x2c57e
    if (v2 != 0) {
        int64_t v5 = v2;
        int64_t v6; // 0x2c568
        int64_t v7; // 0x2c568
        while (*(int32_t *)(v5 + 32) < v3) {
            // 0x2c590
            v6 = *(int64_t *)(v5 + 24);
            v7 = v1;
            if (v6 == 0) {
                // break (via goto) -> 0x2c596
                goto lab_0x2c596;
            }
            v5 = v6;
        }
        int64_t v8 = *(int64_t *)(v5 + 16);
        v7 = v5;
        while (v8 != 0) {
            int64_t v9 = v5;
            v5 = v8;
            while (*(int32_t *)(v5 + 32) < v3) {
                // 0x2c590
                v6 = *(int64_t *)(v5 + 24);
                v7 = v9;
                if (v6 == 0) {
                    // break (via goto) -> 0x2c596
                    goto lab_0x2c596;
                }
                v5 = v6;
            }
            // 0x2c587
            v8 = *(int64_t *)(v5 + 16);
            v7 = v5;
        }
      lab_0x2c596:
        // 0x2c596
        v4 = v1;
        if (v1 != v7) {
            // 0x2c59b
            v4 = v7;
            if (*(int32_t *)(v7 + 32) <= v3) {
                // 0x2c646
                return v7 + 40;
            }
        }
    }
    int64_t v10 = function_4efd30(72); // 0x2c5b1
    int64_t v11 = v10 + 32; // 0x2c5c0
    *(int64_t *)(v10 + 48) = 0;
    *(int64_t *)(v10 + 56) = 0;
    int64_t v12 = v10 + 64; // 0x2c5d7
    *(int64_t *)v12 = 0;
    int32_t * v13 = (int32_t *)v11; // 0x2c5e2
    *v13 = v3;
    int64_t v14 = v10 + 40; // 0x2c5f0
    *(int64_t *)v14 = (int64_t)&g36;
    int64_t v15 = function_2c7a0(a1, v4, v11); // 0x2c5f4
    if (v11 == 0) {
        // 0x2c636
        function_2c2fa(v14);
        function_4eeb50(v10);
        // 0x2c646
        return v15 + 40;
    }
    bool v16 = v1 == v11 | v15 != 0;
    bool v17 = v16; // 0x2c615
    if (!v16) {
        // 0x2c617
        v17 = *v13 < *(int32_t *)v12;
    }
    // 0x2c621
    function_4f0bc0((int64_t)v17, v10);
    int64_t * v18 = (int64_t *)(a1 + 40); // 0x2c630
    *v18 = *v18 + 1;
    // 0x2c646
    return v10 + 40;
}

// Address range: 0x2c654 - 0x2c65d
int64_t function_2c654(int64_t a1) {
    // 0x2c654
    int64_t v1; // 0x2c654
    return v1 & -256 | (int64_t)(*(int64_t *)(a1 + 40) == 0);
}

// Address range: 0x35dbf - 0x35dc5
int64_t function_35dbf(void) {
    // 0x35dbf
    return function_221a8();
}

// Address range: 0x35dc6 - 0x35e50
int64_t function_35dc6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t * v1 = (int64_t *)(a2 + 16); // 0x35dd9
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x35ddd
    *v2 = 0;
    int64_t result = 0; // 0x35de8
    int64_t v3 = a5; // 0x35de8
    if (*v1 != 0) {
        // 0x35dea
        *(int64_t *)(a1 + 24) = *(int64_t *)(a2 + 24);
        result = *v1;
        *v2 = result;
        v3 = a5 & 0xffffffff;
    }
    // 0x35e0e
    *(int64_t *)(a1 + 48) = a3;
    *(int64_t *)(a1 + 72) = a4;
    *(int64_t *)(a1 + 32) = 0;
    *(int64_t *)(a1 + 40) = 0;
    *(char *)(a1 + 56) = 0;
    *(int64_t *)(a1 + 60) = 0;
    *(int32_t *)(a1 + 80) = (int32_t)v3;
    *(int64_t *)(a1 + 88) = 0;
    *(int32_t *)(a1 + 96) = 0;
    return result;
}

// Address range: 0x35e50 - 0x35e57
int64_t function_35e50(int64_t a1) {
    // 0x35e50
    return (int64_t)*(int32_t *)(a1 + (int64_t)&g4);
}

// Address range: 0x35e58 - 0x35e67
int64_t function_35e58(int64_t a1) {
    // 0x35e58
    *(int64_t *)a1 = (int64_t)&g17;
    return (int64_t)&g17;
}

// Address range: 0x35e68 - 0x35e93
int64_t function_35e68(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_71d34(a1 + (int64_t)&g2); // 0x35e73
    int64_t v2 = v1; // 0x35e7c
    int64_t v3 = 0; // 0x35e7c
    if ((int32_t)v1 == 0) {
        // 0x35e7e
        v2 = function_71d34(a1 + (int64_t)&g3);
        v3 = (int32_t)v2 == 0;
    }
    // 0x35e8f
    return v2 & -256 | v3;
}

// Address range: 0x35e94 - 0x35e9d
int64_t function_35e94(int64_t a1) {
    // 0x35e94
    return function_35a50(*(int64_t *)(a1 + 8));
}

// Address range: 0x35e9e - 0x35eb2
int64_t function_35e9e(int64_t a1) {
    for (int64_t i = 0; i < 37; i += 4) {
        // 0x35ea0
        *(int32_t *)(i + a1) = 0;
    }
    // 0x35eb1
    return 40;
}

// Address range: 0x35eb2 - 0x35ec6
int64_t function_35eb2(int64_t a1) {
    for (int64_t i = 0; i < 49; i += 4) {
        // 0x35eb4
        *(int32_t *)(i + a1) = 0;
    }
    // 0x35ec5
    return 52;
}

// Address range: 0x35ec6 - 0x35ed1
int64_t function_35ec6(int64_t a1) {
    // 0x35ec6
    *(int32_t *)a1 = 0;
    *(char *)(a1 + 4) = 0;
    int64_t result; // 0x35ec6
    return result;
}

// Address range: 0x35ed2 - 0x35ee9
int64_t function_35ed2(int64_t a1) {
    // 0x35ed2
    *(int64_t *)a1 = 0;
    *(int64_t *)(a1 + 8) = 0;
    *(int32_t *)(a1 + 16) = 0;
    int64_t result; // 0x35ed2
    return result;
}

// Address range: 0x35eea - 0x35eee
int64_t function_35eea(int64_t result) {
    // 0x35eea
    return result;
}

// Address range: 0x35eee - 0x35ef6
int64_t function_35eee(int64_t a1) {
    // 0x35eee
    return *(int64_t *)(a1 - 24);
}

// Address range: 0x379d4 - 0x37a03
int64_t function_379d4(int64_t a1, int64_t a2) {
    // 0x379d4
    function_37c20(a2);
    return 1;
}

// Address range: 0x37a10 - 0x37a3d
int64_t function_37a10(int64_t a1) {
    // 0x37a10
    __readfsqword(40);
    return function_1edd48();
}

// Address range: 0x37a51 - 0x37a53
int64_t function_37a51(int64_t a1) {
    // 0x37a51
    return a1 & 0xffffffff;
}

// Address range: 0x37a5b - 0x37a60
int64_t function_37a5b(void) {
    // 0x37a5b
    return function_6c5a38f6();
}

// Address range: 0x37a91 - 0x37a93
int64_t function_37a91(void) {
    // 0x37a91
    int64_t result; // 0x37a91
    return result;
}

// Address range: 0x37aca - 0x37ada
int64_t function_37aca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37aca
    bool v1; // 0x37aca
    if (v1) {
        // 0x37b48
        int64_t v2; // 0x37aca
        return v2 & 0xffffffff;
    }
    // 0x37ad2
    return function_ffffffffa971d967();
}

// Address range: 0x37ae2 - 0x37aeb
int64_t function_37ae2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x37ae2
    int64_t v1; // 0x37ae2
    int64_t result = v1 & -0xff01 | 256 * a3 & 0xff00; // 0x37ae2
    char * v2 = (char *)result; // 0x37ae4
    *v2 = *v2 + (char)a3;
    return result;
}

// Address range: 0x454a8 - 0x454b6
int64_t function_454a8(uint64_t a1) {
    unsigned char v1 = *(char *)(a1 % 16 | (int64_t)"0123456789ABCDEF"); // 0x454b2
    return (int64_t)v1 | (int64_t)"0123456789ABCDEF" & -256;
}

// Address range: 0x454b6 - 0x455ee
int64_t function_454b6(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x454ca
    int64_t v2 = a2 - 24; // 0x454dd
    int64_t v3 = *(int64_t *)v2; // 0x454dd
    int64_t v4; // 0x454b6
    int64_t v5; // 0x454b6
    int64_t v6; // 0x454b6
    int64_t v7; // 0x454b6
    int64_t v8; // bp-72, 0x454b6
    if (v3 != 0) {
        int64_t v9 = 3 * v3; // 0x45534
        v8 = (int64_t)&g36;
        function_259ce(&v8, v9);
        v4 = 0;
        v6 = v9;
        if (*(int64_t *)(v9 - 24) != 0) {
            while (true) {
              lab_0x4555c:;
                unsigned char v10 = *(char *)(v6 + v4); // 0x4555c
                uint64_t v11 = (int64_t)v10; // 0x4555c
                v7 = v10;
                switch (*(char *)(v11 + (int64_t)&g7)) {
                    case 1: {
                        goto lab_0x455b1;
                    }
                    case 2: {
                        // 0x455b1
                        v7 = 43;
                        goto lab_0x455b1;
                    }
                    default: {
                        // 0x45578
                        function_451f2(&v8, 37);
                        char v12 = *(char *)(v11 / 16 | (int64_t)"0123456789ABCDEF"); // 0x4559f
                        function_451f2(&v8, (int64_t)v12);
                        char v13 = *(char *)(v11 % 16 | (int64_t)"0123456789ABCDEF"); // 0x455ad
                        v7 = v13;
                        goto lab_0x455b1;
                    }
                }
            }
        }
      lab_0x455be:
        // 0x455be
        v5 = v8;
    } else {
        int64_t v14 = a2 - 8; // 0x454e6
        int32_t * v15 = (int32_t *)v14; // 0x454e6
        int32_t v16 = *v15; // 0x454e6
        if (v16 < 0) {
            // 0x4551c
            v5 = function_453e6(v2, 0, v14, v16);
        } else {
            // 0x454f5
            v5 = a2;
            if (v2 != (int64_t)g34) {
                // 0x45502
                *v15 = v16 + 1;
                v5 = a2;
            }
        }
    }
    int64_t v17 = __readfsqword(40); // 0x455c8
    *(int64_t *)a1 = v5;
    int64_t result = a1; // 0x455d8
    if (v1 != v17) {
        // 0x455da
        __stack_chk_fail();
        result = (int64_t)&g40;
    }
    // 0x455df
    return result;
  lab_0x455b1:;
    int64_t v18 = v4 + 1; // 0x455b4
    function_451f2(&v8, v7);
    v4 = v18;
    v6 = v7;
    if (v18 >= *(int64_t *)(v7 - 24)) {
        // break -> 0x455be
        goto lab_0x455be;
    }
    goto lab_0x4555c;
}

// Address range: 0x61562 - 0x61697
int64_t function_61562(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x6156f
    if (a2 != 0 == (a3 == 32 || (a3 & -16) == 16)) {
        int64_t v2 = a3 + a2; // 0x615a4
        int64_t v3 = function_4efd30(a3); // 0x615c3
        int64_t v4 = v3; // bp-72, 0x615d2
        int64_t v5 = function_21a2d(a2, v2, v3); // 0x615df
        if (a3 == 16) {
            // 0x615ef
            function_27e7a(&v4, v5, a2, v2);
        }
        // 0x6160a
        int64_t v6; // bp-80, 0x61562
        function_729c2(&v6, a1 + (int64_t)&g39);
        int64_t v7 = v4; // 0x6161e
        int64_t v8 = function_44a22(a1 + 64, v7, v5 - v7); // 0x6162f
        function_729ce(&v6);
        if ((char)v8 != 0) {
            // 0x61644
            *(char *)a1 = 1;
            __asm_mfence();
            if (*(int64_t *)(a1 + 8) == 2) {
                // 0x61651
                *(int64_t *)(a1 + 48) = 0x3b9aca00 * *(int64_t *)(a1 + 40) + function_52af50();
                __asm_mfence();
            }
        }
        // 0x61668
        if (v4 != 0) {
            // 0x61672
            function_4eeb50(v4);
        }
    } else {
        // 0x61591
        function_613f0(a1);
    }
    int64_t result = 0; // 0x61685
    if (v1 != __readfsqword(40)) {
        // 0x61687
        __stack_chk_fail();
        result = (int64_t)&g40;
    }
    // 0x6168c
    return result;
}

// Address range: 0x1a1e85 - 0x1a1eef
int64_t function_1a1e85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a1e85
    int64_t v1; // 0x1a1e85
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    return function_c57b8(a1);
}

// Address range: 0x1a1f14 - 0x1a1f16
int64_t function_1a1f14(void) {
    // 0x1a1f14
    int64_t v1; // 0x1a1f14
    return function_1a1f57(v1, v1, v1, v1, (int64_t)&g40);
}

// Address range: 0x1a1f51 - 0x1a1f57
int64_t function_1a1f51(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = __asm_in_134((int16_t)a3); // 0x1a1f54
    int64_t v2; // 0x1a1f51
    int64_t result = v2 & -256 | (int64_t)v1; // 0x1a1f54
    char * v3 = (char *)result; // 0x1a1f55
    *v3 = *v3 | v1;
    return result;
}

// Address range: 0x1a1f57 - 0x1a1fa0
int64_t function_1a1f57(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a1f57
    int64_t v1; // 0x1a1f57
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // bp-8, 0x1a1f57
    int64_t v4 = (int64_t)&v3; // 0x1a1f74
    v3 = a2;
    int64_t result = *(int64_t *)(v4 + 40); // 0x1a1f89
    *(int64_t *)(v4 - 8) = result;
    *(int64_t *)(v4 - 16) = result;
    return result;
}

// Address range: 0x1a7ebb - 0x1a7ed2
int64_t function_1a7ebb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1a7ebb
    int64_t v1; // 0x1a7ebb
    bool v2; // 0x1a7ebb
    if (v2) {
        v1 = function_1a7ea5();
    }
    // 0x1a7ebd
    *(int32_t *)0x7d3dc6c6 = *(int32_t *)0x7d3dc6c6 + (int32_t)a1;
    int64_t v3; // 0x1a7ebb
    int64_t result = v1 + v3 & 0xffffffff; // 0x1a7ece
    if (v3 != 0) {
        int64_t v4 = v2 ? -4 : 4; // 0x1a7ece
        uint32_t v5 = *(int32_t *)(v4 * (v3 - 1) + (a3 + 0xe807bc86 + 8 * v3 & 0xffffffff)); // 0x1a7ece
        result = v5;
    }
    return result;
}

// Address range: 0x1a7fe0 - 0x1a7fe7
int64_t function_1a7fe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1a7fe0
    return function_4a3c820();
}

// Address range: 0x27ca41 - 0x27ca58
int64_t function_27ca41(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27ca41
    int64_t result; // 0x27ca41
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x27ca5d - 0x27ca7d
int64_t function_27ca5d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    uint64_t v1 = a4 / 256; // 0x27ca62
    int64_t v2 = a3 & -256; // 0x27ca62
    unsigned char v3 = (char)a4; // 0x27ca6b
    unsigned char v4 = *(char *)(v1 % 256 | v2) + v3; // 0x27ca6b
    char v5 = v1; // 0x27ca6d
    int64_t v6; // 0x27ca5d
    char v7 = v6;
    char v8 = (char)(v4 < v3) + v7; // 0x27ca6d
    char v9 = v7; // 0x27ca6f
    int64_t result; // 0x27ca5d
    if (v8 > v5) {
        int64_t v10 = function_27c9f4(); // 0x27ca6f
        v9 = v10;
        result = v10;
    }
    char * v11 = (char *)((a4 & -0x10000 | 256 * a3 & 0xff00 | (int64_t)v4) - 0x17c71fe6); // 0x27ca72
    *v11 = *v11 ^ v9;
    int32_t * v12 = (int32_t *)((v2 | (int64_t)(v5 - v8)) + 91); // 0x27ca78
    *v12 = *v12 + (int32_t)result;
    return result;
}

// Address range: 0x27ca8c - 0x27ca8f
int64_t function_27ca8c(void) {
    // 0x27ca8c
    int64_t result; // 0x27ca8c
    return result;
}

// Address range: 0x27cab1 - 0x27cab3
int64_t function_27cab1(void) {
    // 0x27cab1
    int64_t v1; // 0x27cab1
    return function_27cb15(v1, v1, v1, v1);
}

// Address range: 0x27cabf - 0x27cb15
int64_t function_27cabf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    unknown_611cbbc5();
    int64_t v2 = __asm_fnstenv(); // 0x27cac5
    *(int224_t *)v2 = (int224_t)v2;
    if ((a5 & 64) != 0 || (char)a5 < 0 != (a5 & (int64_t)L"\n2") != 0) {
        function_27cab1();
    }
    int32_t * v3 = (int32_t *)(a4 + 10); // 0x27cac9
    *v3 = *v3 + (int32_t)a3;
    unknown_ffffffffe78443d6();
    v1 = -0x1786a919;
    int32_t * v4 = (int32_t *)(4 * a2 + a1); // 0x27cad6
    *v4 = *v4 + (int32_t)(int64_t)&v1;
    int64_t v5 = unknown_ffffffffb8c632e4(); // 0x27cade
    int64_t v6; // 0x27cabf
    int64_t v7 = v6 & 0xfcf4cbff | 0x30b3400; // 0x27cae3
    int64_t v8 = v5; // bp-8, 0x27cae9
    int32_t * v9 = (int32_t *)(a1 - 84); // 0x27caec
    int32_t v10 = v6; // 0x27caec
    *v9 = *v9 + v10;
    uint32_t v11 = *(int32_t *)0xc8dc848c; // 0x27caf5
    int32_t v12 = v7; // 0x27caf5
    uint32_t v13 = v11 + v12; // 0x27caf5
    *(int32_t *)0xc8dc848c = v13;
    int32_t v14 = *(int32_t *)v7; // 0x27cafc
    int32_t * v15 = (int32_t *)(v6 - 0x47fe17a3); // 0x27cafe
    *v15 = *v15 + v10;
    int64_t result = 0x10000 * (int32_t)v5 >> 16 & -0x17aef5c6 ^ 40; // 0x27cb08
    int32_t * v16 = (int32_t *)(result + 58); // 0x27cb0d
    *v16 = *v16 + v12;
    *(int64_t *)((int64_t)(v14 + (int32_t)(int64_t)&v8 + (int32_t)(v13 < v11)) - 8) = 0x89f430;
    return result;
}

// Address range: 0x27cb15 - 0x27cb40
int64_t function_27cb15(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = unknown_fffffffff9c6fd1b(); // 0x27cb15
    unsigned char v2 = *(char *)0x1e800992180a00a; // 0x27cb24
    int64_t v3 = v2; // 0x27cb24
    int64_t v4 = v1 & -256; // 0x27cb24
    int64_t result = v4 | v3; // 0x27cb24
    char * v5 = (char *)result; // 0x27cb31
    unsigned char v6 = *v5 - v2; // 0x27cb31
    *v5 = v6 + 94;
    if (v6 > 161) {
        // 0x27cb3e
        return result;
    }
    int32_t * v7 = (int32_t *)(a3 + 1); // 0x27cb3a
    int64_t v8; // 0x27cb15
    *v7 = *v7 + (int32_t)v8;
    return (a4 / 256 + v3) % 256 | v4;
}

// Address range: 0x27f19f - 0x27f1a3
int64_t function_27f19f(void) {
    // 0x27f19f
    int64_t result; // 0x27f19f
    char * v1 = (char *)(result + 3); // 0x27f19f
    bool v2; // 0x27f19f
    *v1 = *v1 + (char)result + (char)v2;
    return result;
}

// Address range: 0x27f213 - 0x27f216
int64_t function_27f213(void) {
    // 0x27f213
    int64_t result; // 0x27f213
    return result;
}

// Address range: 0x27f23b - 0x27f23e
int64_t function_27f23b(int64_t a1) {
    // 0x27f23b
    int64_t v1; // 0x27f23b
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x27f287 - 0x27f290
int64_t function_27f287(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x27f287
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(a4 - 0x4d521600); // 0x27f287
        uint32_t v3 = *v2; // 0x27f287
        bool v4; // 0x27f287
        *v2 = (int32_t)v4 << v1 - 1 | v3 << v1 | (int32_t)((int64_t)v3 >> (int64_t)(33 - v1));
    }
    int64_t result; // 0x27f287
    return result;
}

// Address range: 0x27f2c6 - 0x27f2c7
int64_t function_27f2c6(int64_t a1) {
    // 0x27f2c6
    int64_t result; // 0x27f2c6
    return result;
}

// Address range: 0x3c75f0 - 0x3c75f1
int64_t function_3c75f0(void) {
    // 0x3c75f0
    int64_t result; // 0x3c75f0
    return result;
}

// Address range: 0x3c75f8 - 0x3c75fb
int64_t function_3c75f8(int64_t a1) {
    // 0x3c75f8
    int64_t result; // 0x3c75f8
    return result;
}

// Address range: 0x3c75fd - 0x3c75fe
int64_t function_3c75fd(void) {
    // 0x3c75fd
    int64_t result; // 0x3c75fd
    return result;
}

// Address range: 0x3c7610 - 0x3c7618
int64_t function_3c7610(void) {
    // 0x3c7610
    int32_t v1; // 0x3c7610
    int64_t result; // 0x3c7610
    *(int32_t *)(result - 86) = (int32_t)(int64_t)&v1;
    return result;
}

// Address range: 0x3c7618 - 0x3c762d
int64_t function_3c7618(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3c7618
    bool v1; // 0x3c7618
    int64_t v2 = v1 ? -1 : 1; // 0x3c7618
    int64_t v3 = v2 + a1; // 0x3c7618
    int32_t v4 = *(int32_t *)unknown_688f7e24(v3, v2 + a2); // 0x3c7625
    int32_t * v5 = (int32_t *)v3; // 0x3c7628
    *v5 = *v5 + (int32_t)(2 * a4 & 254 | a4 & 0xffffff00);
    return 61 * v4;
}

// Address range: 0x488b0c - 0x488c23
int64_t function_488b0c(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 - a1;
    int64_t v2 = __readfsqword(40); // 0x488b28
    int64_t v3 = a3; // bp-56, 0x488b38
    int64_t v4 = v1; // 0x488b45
    int64_t v5 = a1; // 0x488b45
    int64_t v6; // 0x488b0c
    if (v1 < 256) {
        goto lab_0x488ba9;
    } else {
        int64_t v7 = v1 / 256; // 0x488b0c
        int64_t v8 = a1; // 0x488b0c
        int64_t v9 = function_488810(&v3, v8); // 0x488b4d
        v6 = v8;
        while ((char)v9 == 0) {
            int64_t v10 = v8 + 64; // 0x488b5a
            int64_t v11 = function_488810(&v3, v10); // 0x488b64
            v6 = v10;
            if ((char)v11 != 0) {
                // break -> 0x488bfe
                break;
            }
            int64_t v12 = v8 + 128; // 0x488b71
            int64_t v13 = function_488810(&v3, v12); // 0x488b7e
            v6 = v12;
            if ((char)v13 != 0) {
                // break -> 0x488bfe
                break;
            }
            int64_t v14 = v8 + 192; // 0x488b87
            int64_t v15 = function_488810(&v3, v14); // 0x488b9b
            v6 = v14;
            if ((char)v15 != 0) {
                // break -> 0x488bfe
                break;
            }
            int64_t v16 = v7;
            v5 = v8 + 256;
            v7 = v16 - 1;
            v8 = v5;
            if (v16 < 2) {
                // 0x488b3f
                v4 = a2 - v5;
                goto lab_0x488ba9;
            }
            v9 = function_488810(&v3, v8);
            v6 = v8;
        }
        goto lab_0x488bfe;
    }
  lab_0x488ba9:;
    int64_t v17 = v4 >> 6; // 0x488baf
    int64_t v18 = v5; // 0x488b0c
    int64_t v19; // 0x488b0c
    switch (v17) {
        case 2: {
            goto lab_0x488bd9;
        }
        case 3: {
            int64_t v20 = function_488810(&v3, v5); // 0x488bcc
            v6 = v5;
            if ((char)v20 != 0) {
                goto lab_0x488bfe;
            } else {
                // 0x488bd5
                v18 = v5 + 64;
                goto lab_0x488bd9;
            }
        }
        default: {
            // 0x488bbf
            v19 = v5;
            if (v17 != 1) {
                // 0x488bfb
                v6 = a2;
                goto lab_0x488bfe;
            } else {
                goto lab_0x488bec;
            }
        }
    }
  lab_0x488bd9:;
    int64_t v21 = function_488810(&v3, v18); // 0x488bdf
    v6 = v18;
    if ((char)v21 != 0) {
        goto lab_0x488bfe;
    } else {
        // 0x488be8
        v19 = v18 + 64;
        goto lab_0x488bec;
    }
  lab_0x488bfe:;
    int64_t result = v6; // 0x488c0f
    if (v2 != __readfsqword(40)) {
        // 0x488c11
        __stack_chk_fail();
        result = (int64_t)&g40;
    }
    // 0x488c16
    return result;
  lab_0x488bec:;
    int64_t v22 = function_488810(&v3, v19); // 0x488bf2
    v6 = v19;
    if ((char)v22 != 0) {
        goto lab_0x488bfe;
    } else {
        // 0x488bfb
        v6 = a2;
        goto lab_0x488bfe;
    }
}

// Address range: 0x488c24 - 0x488c28
int64_t function_488c24(int64_t result) {
    // 0x488c24
    return result;
}

// Address range: 0x488c28 - 0x488c4f
int64_t function_488c28(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result = *v1;
    *v1 = result - 1;
    if (result >= 0 == (result != 0)) {
        // 0x488c4e
        return result;
    }
    // 0x488c49
    return function_4eeb50(a1);
}

// Address range: 0x48c6a5 - 0x48c6a7
int64_t function_48c6a5(void) {
    // 0x48c6a5
    int64_t result; // 0x48c6a5
    return result;
}

// Address range: 0x48c6a8 - 0x48c6a9
int64_t function_48c6a8(void) {
    // 0x48c6a8
    int64_t result; // 0x48c6a8
    return result;
}

// Address range: 0x48c6aa - 0x48c6ae
int64_t function_48c6aa(int64_t result) {
    // 0x48c6aa
    return result;
}

// Address range: 0x48c6ae - 0x48c6b2
int64_t function_48c6ae(int64_t result) {
    // 0x48c6ae
    return result;
}

// Address range: 0x48c6b2 - 0x48c6b6
int64_t function_48c6b2(int64_t result) {
    // 0x48c6b2
    return result;
}

// Address range: 0x48c6b6 - 0x48c6ba
int64_t function_48c6b6(int64_t result) {
    // 0x48c6b6
    return result;
}

// Address range: 0x48c6ba - 0x48c6be
int64_t function_48c6ba(int64_t result) {
    // 0x48c6ba
    return result;
}

// Address range: 0x48c6be - 0x48c6c2
int64_t function_48c6be(int64_t result) {
    // 0x48c6be
    return result;
}

// Address range: 0x48c6c2 - 0x48c6c6
int64_t function_48c6c2(int64_t result) {
    // 0x48c6c2
    return result;
}

// Address range: 0x48c6c6 - 0x48c6ca
int64_t function_48c6c6(int64_t result) {
    // 0x48c6c6
    return result;
}

// Address range: 0x48c6ca - 0x48c6ce
int64_t function_48c6ca(int64_t result) {
    // 0x48c6ca
    return result;
}

// Address range: 0x48c6ce - 0x48c6d2
int64_t function_48c6ce(int64_t result) {
    // 0x48c6ce
    return result;
}

// Address range: 0x48c6d2 - 0x48c6d6
int64_t function_48c6d2(int64_t result) {
    // 0x48c6d2
    return result;
}

// Address range: 0x48c6d6 - 0x48c6da
int64_t function_48c6d6(int64_t result) {
    // 0x48c6d6
    return result;
}

// Address range: 0x48c6da - 0x48c6de
int64_t function_48c6da(int64_t result) {
    // 0x48c6da
    return result;
}

// Address range: 0x48c6de - 0x48c6e2
int64_t function_48c6de(int64_t result) {
    // 0x48c6de
    return result;
}

// Address range: 0x48c6e2 - 0x48c6e6
int64_t function_48c6e2(int64_t result) {
    // 0x48c6e2
    return result;
}

// Address range: 0x48c6e6 - 0x48c6f2
int64_t function_48c6e6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x48c6e6
    int64_t v1; // 0x48c6e6
    return (char)v1 >= (char)v1 ? a1 : a2;
}

// Address range: 0x48c6f2 - 0x48c718
int64_t function_48c6f2(int64_t result, int64_t a2) {
    // 0x48c6f2
    function_255da(a2);
    *(int64_t *)result = *(int64_t *)(a2 - 24) + a2;
    return result;
}

// Address range: 0x48c718 - 0x48c72c
int64_t function_48c718(int64_t result, int64_t a2) {
    // 0x48c718
    *(int64_t *)result = function_7104e(a2);
    return result;
}

// Address range: 0x48c72c - 0x48c7c2
int64_t function_48c72c(int64_t result, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2 - a3; // 0x48c738
    char v2 = a4;
    int64_t v3 = a2; // 0x48c745
    if (v1 < 4) {
      lab_0x48c781:;
        int64_t v4 = v3 - a3; // 0x48c784
        int64_t v5 = v3; // 0x48c79d
        int64_t v6; // 0x48c72c
        switch (v4) {
            case 3: {
                // 0x48c79a
                v5 = v3 - 1;
                if (*(char *)v5 == v2) {
                    // 0x48c759
                    *(int64_t *)result = v3;
                    return result;
                }
            }
            case 2: {
                int64_t v7 = v5 - 1; // 0x48c7aa
                v6 = v7;
                if (*(char *)v7 == v2) {
                    // 0x48c7ba
                    *(int64_t *)result = v5;
                    return result;
                }
                // break -> 0x48c7b3
                break;
            }
            default: {
                // 0x48c793
                v6 = v3;
                if (v4 != 1) {
                    // 0x48c7be
                    *(int64_t *)result = a3;
                    return result;
                }
                // break -> 0x48c7b3
                break;
            }
        }
        // 0x48c7b3
        if (*(char *)(v6 - 1) != v2) {
            // 0x48c7be
            *(int64_t *)result = a3;
            return result;
        }
        // 0x48c7ba
        *(int64_t *)result = v6;
        return result;
    }
    int64_t v8 = v1 / 4; // 0x48c72c
    int64_t v9 = a2; // 0x48c76b
    int64_t v10 = v9 - 1; // 0x48c74a
    int64_t v11 = v9; // 0x48c74e
    while (*(char *)v10 != v2) {
        int64_t v12 = v9 - 2; // 0x48c750
        v11 = v10;
        if (*(char *)v12 == v2) {
            // break -> 0x48c759
            break;
        }
        int64_t v13 = v9 - 3; // 0x48c75d
        if (*(char *)v13 == v2) {
            // 0x48c763
            *(int64_t *)result = v12;
            return result;
        }
        // 0x48c76b
        v9 -= 4;
        if (*(char *)v9 == v2) {
            // 0x48c774
            *(int64_t *)result = v13;
            return result;
        }
        int64_t v14 = v8;
        v8 = v14 - 1;
        v3 = v9;
        if (v14 < 2) {
            goto lab_0x48c781;
        }
        v10 = v9 - 1;
        v11 = v9;
    }
    // 0x48c759
    *(int64_t *)result = v11;
    return result;
}

// Address range: 0x48c7c2 - 0x48c7cc
int64_t function_48c7c2(int64_t a1, int64_t a2) {
    // 0x48c7c2
    return a1 & -256 | (int64_t)(bool)(a2 != a1);
}

// Address range: 0x48c7cc - 0x48c7e6
int64_t function_48c7cc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x48c7cc
    return function_4f20e();
}

// Address range: 0x48d5fc - 0x48d63e
int64_t function_48d5fc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x48d5fc
    if (a3 == 0) {
        // 0x48d62c
        return function_48d3bb(a2);
    }
    int64_t v1 = a3 - 1;
    int64_t v2 = v1; // 0x48d60d
    int64_t v3 = a2; // 0x48d60d
    int64_t v4 = a1; // 0x48d60d
    int64_t v5 = a1; // 0x48d60d
    int64_t v6 = a2; // 0x48d60d
    if (v1 != 0) {
        int16_t v7 = *(int16_t *)v3; // 0x48d60f
        *(int16_t *)v4 = v7;
        v5 = v4;
        v6 = v3;
        while (v7 != 0) {
            // 0x48d61a
            v3 += 2;
            v4 += 2;
            v2--;
            v5 = v4;
            v6 = v3;
            if (v2 == 0) {
                // break -> 0x48d627
                break;
            }
            v7 = *(int16_t *)v3;
            *(int16_t *)v4 = v7;
            v5 = v4;
            v6 = v3;
        }
    }
    // 0x48d627
    *(int16_t *)v5 = 0;
    // 0x48d62c
    return function_48d3bb(v6) + (v5 - a1 >> 1);
}

// Address range: 0x48d63e - 0x48d679
int64_t function_48d63e(int64_t result, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = 0; // 0x48d64c
    int64_t v2 = result; // 0x48d64c
    if (a2 == 0) {
        // 0x48d66b
        function_48d332();
        return result;
    }
    int32_t v3 = *(int32_t *)(4 * v1 + a3); // 0x48d64e
    *(int32_t *)v2 = v3;
    while (v1 < a4 && v3 != 0) {
        // 0x48d65f
        v1++;
        v2 += 4;
        if (v1 == a2) {
            // break -> 0x48d66b
            break;
        }
        v3 = *(int32_t *)(4 * v1 + a3);
        *(int32_t *)v2 = v3;
    }
    // 0x48d66b
    function_48d332();
    return result;
}

// Address range: 0x48d679 - 0x48d6a9
int64_t function_48d679(int64_t result, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 4 * function_48d385(result) + result; // 0x48d681
    int64_t v2 = 0; // 0x48d68a
    if (a3 == 0) {
        // 0x48d69f
        *(int32_t *)v1 = 0;
        return result;
    }
    int64_t v3 = v1;
    int32_t v4 = *(int32_t *)(4 * v2 + a2); // 0x48d68c
    int64_t v5 = v3; // 0x48d691
    while (v4 != 0) {
        int64_t v6 = v3 + 4; // 0x48d693
        *(int32_t *)v3 = v4;
        v2++;
        v5 = v6;
        if (v2 == a3) {
            // break -> 0x48d69f
            break;
        }
        v3 = v6;
        v4 = *(int32_t *)(4 * v2 + a2);
        v5 = v3;
    }
    // 0x48d69f
    *(int32_t *)v5 = 0;
    return result;
}

// Address range: 0x48d6a9 - 0x48d6e1
int64_t function_48d6a9(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_48d39b(); // 0x48d6b2
    if (v1 != a3) {
        // 0x48d6cb
        return function_48d5bb(4 * v1 + a1, a2, a3 - v1) + v1;
    }
    // 0x48d6bf
    return function_48d385(a2) + a3;
}

// Address range: 0x48d6e1 - 0x48d707
int64_t function_48d6e1(int64_t a1, int64_t a2) {
    int32_t v1 = a2; // 0x48d6e1
    if (v1 == 0) {
        // 0x48d703
        return 4 * function_48d385(a1) + a1;
    }
    int32_t v2 = *(int32_t *)a1; // 0x48d6fb
    int32_t v3 = v2; // 0x48d6ff
    if (v2 == 0) {
        // 0x48d703
        return 0;
    }
    int64_t v4 = a1; // 0x48d6ff
    int64_t result = v4; // 0x48d6f5
    while (v3 != v1) {
        // 0x48d6f7
        v4 += 4;
        v3 = *(int32_t *)v4;
        result = 0;
        if (v3 == 0) {
            // break -> 0x48d703
            break;
        }
        result = v4;
    }
    // 0x48d703
    return result;
}

// Address range: 0x48fbbf - 0x48fbee
int64_t function_48fbbf(uint64_t result, uint64_t a2, int64_t a3) {
    uint64_t v1 = a2 - result; // 0x48fbcb
    if (v1 == 0) {
        // 0x48fbe7
        return result;
    }
    int64_t result2 = a2; // 0x48fbd3
    if (a2 >= result) {
        // 0x48fbd5
        result2 = function_48fb27() % v1 + result;
    }
    // 0x48fbe7
    return result2;
}

// Address range: 0x48fbee - 0x48fce0
int64_t function_48fbee(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1; // 0x48fc00
    *v1 = 0;
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x48fc07
    *v2 = 0;
    int64_t v3 = __readfsqword(40); // 0x48fc0f
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x48fc22
    *v4 = 0;
    int64_t v5 = a1; // 0x48fc2a
    if (a2 != 0) {
        int64_t v6 = function_4efd30(a2); // 0x48fc2f
        int64_t v7 = *v2 - a2; // 0x48fc4a
        __asm_rep_stosb_memset((char *)v6, 0, a2);
        if (v7 != 0) {
            // 0x48fc51
            memmove((int64_t *)v6, (int64_t *)a2, (int32_t)v7);
        }
        int64_t v8 = v6 + a2; // 0x48fc3e
        function_4eeb50(a2);
        *v1 = v6;
        *v2 = v8;
        *v4 = v8;
        v5 = a2;
    }
    uint64_t v9 = v5 + a2; // 0x48fc7c
    if (v5 < v9) {
        uint64_t v10 = v5 - v9; // 0x48fc87
        int64_t v11 = v10 < 8 ? v10 : 8;
        int64_t v12 = function_48fb27(); // 0x48fc96
        int64_t v13 = v12; // bp-56, 0x48fc9f
        if (v10 <= 7) {
            // 0x48fcab
            __asm_rep_movsb_memcpy((char *)v5, (char *)&v13, v11);
        } else {
            // 0x48fca5
            *(int64_t *)v5 = v12;
        }
        int64_t v14 = v11 + v5; // 0x48fcb6
        while (v14 < v9) {
            int64_t v15 = v14;
            v10 = v15 - v9;
            v11 = v10 < 8 ? v10 : 8;
            v12 = function_48fb27();
            v13 = v12;
            if (v10 <= 7) {
                // 0x48fcab
                __asm_rep_movsb_memcpy((char *)v15, (char *)&v13, v11);
            } else {
                // 0x48fca5
                *(int64_t *)v15 = v12;
            }
            // 0x48fcb6
            v14 = v11 + v15;
        }
    }
    int64_t result = a1; // 0x48fccc
    if (v3 != __readfsqword(40)) {
        // 0x48fcce
        __stack_chk_fail();
        result = (int64_t)&g40;
    }
    // 0x48fcd3
    return result;
}

// Address range: 0x48fce0 - 0x48fcf5
int64_t function_48fce0(void) {
    int64_t v1 = function_24e1e(); // 0x48fce4
    return (0x8000000000000000 * (int128_t)(v1 >> 63) | (int128_t)v1) / 0xf4240;
}

// Address range: 0x4904d6 - 0x490595
int64_t function_4904d6(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x4904fa
    int64_t v2; // bp-116, 0x4904d6
    __asm_rep_movsd_memcpy((char *)&v2, (char *)&g9, 21);
    int64_t v3 = 0x11418aac; // 0x490516
    for (int64_t i = 0; i < 81; i += 4) {
        int64_t v4 = v3;
        uint32_t v5 = (int32_t)(0x2000 * v4 ^ v4); // 0x490527
        int32_t * v6 = (int32_t *)(i + (int64_t)&v2); // 0x490529
        int32_t v7 = v5 / 0x20000 ^ v5; // 0x49052f
        uint32_t v8 = llvm_bswap_i32(32 * v7 ^ v7); // 0x490538
        *v6 = v8 ^ *v6;
        v3 = v8;
    }
    // 0x490550
    int64_t v9; // bp-137, 0x4904d6
    function_35ef6(a1, &v2, &v9, 0x87754828);
    memset2((void *)(int64_t)(&v2), 0, 84);
    int64_t result = a1; // 0x490584
    if (v1 != __readfsqword(40)) {
        // 0x490586
        __stack_chk_fail();
        result = (int64_t)&g40;
    }
    // 0x49058b
    return result;
}

// Address range: 0x490595 - 0x490604
int64_t function_490595(int64_t a1, int64_t wstr, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x4905a1
    int64_t v2; // 0x490595
    if (wstr == 0) {
        // 0x4905da
        v2 = a3;
        goto lab_0x4905dd;
    } else {
        int32_t v3 = wcslen((int32_t *)wstr); // 0x4905c7
        v2 = wstr;
        if (v3 != 0) {
            goto lab_0x4905dd;
        } else {
            // 0x4905da
            v2 = a3;
            goto lab_0x4905dd;
        }
    }
  lab_0x4905dd:;
    // 0x4905dd
    int64_t v4; // bp-33, 0x490595
    int64_t v5; // 0x490595
    function_35ef6(a1, (int64_t *)v2, &v4, v5);
    int64_t result = a1; // 0x4905f6
    if (v1 != __readfsqword(40)) {
        // 0x4905f8
        __stack_chk_fail();
        result = (int64_t)&g40;
    }
    // 0x4905fd
    return result;
}

// Address range: 0x49735d - 0x497366
int64_t function_49735d(void) {
    // 0x49735d
    int64_t v1; // 0x49735d
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(result - 0x7100); // 0x49735f
    *v2 = *v2 + (char)((uint64_t)v1 / 256);
    return result;
}

// Address range: 0x497370 - 0x497386
int64_t function_497370(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a1 + 373); // 0x497370
    int64_t result = 128 * a2 & 0xffffff80 | (int64_t)(*v1 % 128); // 0x49737d
    *v1 = (char)result;
    return result;
}

// Address range: 0x497390 - 0x4973a9
int64_t function_497390(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a1 + 373); // 0x497390
    int64_t result = 32 * a2 & 32 | (int64_t)(*v1 & -33); // 0x4973a0
    *v1 = (char)result;
    return result;
}

// Address range: 0x4973b0 - 0x4973c9
int64_t function_4973b0(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a1 + 372); // 0x4973b0
    int64_t result = 16 * a2 & 48 | (int64_t)(*v1 & -49); // 0x4973c0
    *v1 = (char)result;
    return result;
}

// Address range: 0x4973d0 - 0x4973e9
int64_t function_4973d0(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a1 + 373); // 0x4973d0
    int64_t result = 64 * a2 & 64 | (int64_t)(*v1 & -65); // 0x4973e0
    *v1 = (char)result;
    return result;
}

// Address range: 0x4973f0 - 0x4973f7
int64_t function_4973f0(int64_t a1, int64_t a2) {
    // 0x4973f0
    *(int32_t *)(a1 + 348) = (int32_t)a2;
    int64_t result; // 0x4973f0
    return result;
}

// Address range: 0x497400 - 0x49740b
int64_t function_497400(int64_t a1, int64_t result) {
    // 0x497400
    *(int64_t *)(a1 + 352) = result;
    return result;
}

// Address range: 0x497410 - 0x497426
int64_t function_497410(int64_t a1, uint64_t a2) {
    char * v1 = (char *)(a1 + 374); // 0x497410
    int64_t result = a2 % 2 | (int64_t)(*v1 & -2); // 0x49741d
    *v1 = (char)result;
    return result;
}

// Address range: 0x497430 - 0x497446
int64_t function_497430(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x497430
    *(int64_t *)(a1 + 160) = a2;
    *(int64_t *)(a1 + 168) = a3;
    *(int64_t *)(a1 + 176) = a4;
    int64_t result; // 0x497430
    return result;
}

// Address range: 0x497450 - 0x49745f
int64_t function_497450(int64_t a1, int64_t a2, int64_t a3) {
    // 0x497450
    *(int64_t *)(a1 + 184) = a2;
    *(int64_t *)(a1 + 192) = a3;
    int64_t result; // 0x497450
    return result;
}

// Address range: 0x497460 - 0x49747b
int64_t function_497460(int64_t a1) {
    // 0x497460
    if (*(int64_t *)(a1 + 208) == 0) {
        // 0x497478
        return 0;
    }
    // 0x49746a
    return *(int64_t *)(a1 + 224);
}

// Address range: 0x4b1e79 - 0x4b1e88
int64_t function_4b1e79(void) {
    uint32_t v1 = __asm_in(-1); // 0x4b1e79
    int64_t v2; // 0x4b1e79
    int32_t * v3 = (int32_t *)(v2 + 0x41b074c0); // 0x4b1e7b
    *v3 = *v3 + 1;
    return function_4b1dcd((int64_t)v1);
}

// Address range: 0x4b1e90 - 0x4b1e98
int64_t function_4b1e90(void) {
    // 0x4b1e90
    int64_t v1; // 0x4b1e90
    return function_4b1dcd(v1);
}

// Address range: 0x4b1e98 - 0x4b1ea4
int64_t function_4b1e98(void) {
    // 0x4b1e98
    int64_t v1; // 0x4b1e98
    *(int32_t *)v1 = -1;
    return function_4b1dcd(v1);
}

// Address range: 0x4b1eb0 - 0x4b1fbe
int64_t function_4b1eb0(int64_t a1, int64_t a2) {
    int64_t v1 = a2 & 0xffffffff; // 0x4b1ebe
    int64_t v2; // bp-2552, 0x4b1eb0
    int64_t v3 = (int64_t)&v2; // 0x4b1eca
    int64_t str2; // bp-2536, 0x4b1eb0
    int64_t v4 = (int64_t)&str2; // 0x4b1ed1
    __asm_rep_stosq_memset((char *)&str2, 0, 310);
    bool v5; // 0x4b1eb0
    *(int32_t *)((v5 ? -2480 : 2480) + v4) = 0;
    int64_t stream; // 0x4b1eb0
    char * str = fgets((char *)&str2, (int32_t)&g38, (struct _IO_FILE *)stream); // 0x4b1ee5
    if (str == NULL) {
        // 0x4b1f7f
        return 0xfffffffe;
    }
    int64_t v6 = v4;
    int32_t v7 = *(int32_t *)v6; // 0x4b1ef6
    int64_t v8 = v6 + 4; // 0x4b1ef8
    int32_t v9 = v7 - 0x1010101 & (v7 ^ -0x7f7f7f80); // 0x4b1f04
    uint32_t v10 = v9 & -0x7f7f7f80; // 0x4b1f06
    while (v10 == 0) {
        // 0x4b1ef6
        v6 = v8;
        v7 = *(int32_t *)v6;
        v8 = v6 + 4;
        v9 = v7 - 0x1010101 & (v7 ^ -0x7f7f7f80);
        v10 = v9 & -0x7f7f7f80;
    }
    int32_t v11 = (v9 & (int32_t)&g16 & -0x7f7f7f80) == 0 ? v10 / 0x10000 : v10; // 0x4b1f17
    int64_t v12 = (v9 & (int32_t)&g16 & -0x7f7f7f80) == 0 ? v6 + 6 : v8; // 0x4b1f1e
    unsigned char v13 = (char)v11; // 0x4b1f22
    int64_t v14 = v12 - (-1 - v13 < v13 ? 4 : 3) - v4; // 0x4b1f28
    if (v14 == (int64_t)&g37) {
        // 0x4b1f7f
        return 0xfffffff8;
    }
    int64_t v15 = v3 + 15; // 0x4b1f34
    char v16 = *(char *)(v14 + v15); // 0x4b1f34
    char v17 = v16; // 0x4b1f3b
    int64_t v18 = v14; // 0x4b1f3b
    if (v16 == 10) {
        // 0x4b1fa0
        v18 = v14 - 1;
        *(char *)(v3 + 16 + v18) = 0;
        v17 = *(char *)(v18 + v15);
    }
    int64_t v19 = v18; // 0x4b1f3f
    if (v17 == 13) {
        // 0x4b1f90
        *(char *)(v18 + v15) = 0;
        v19 = v18 - 1;
    }
    int64_t v20 = v19 + v4;
    int64_t v21 = v20 - 1; // 0x4b1f68
    while (v21 >= v4) {
        // 0x4b1f50
        int64_t v22; // bp-2544, 0x4b1eb0
        if ((int32_t)function_4b03f0(&v22, v1, *(char *)v21) != 0) {
            // break -> 0x4b1f71
            break;
        }
        v20 = v21;
        v21 = v20 - 1;
    }
    // 0x4b1f7f
    return function_4b1ca0(a1, v1, v20);
}

// Address range: 0x4c18d5 - 0x4c18d6
int64_t function_4c18d5(void) {
    // 0x4c18d5
    int64_t result; // 0x4c18d5
    return result;
}

// Address range: 0x4c18e0 - 0x4c19d6
int64_t function_4c18e0(int64_t a1, int64_t file_path, int64_t a3) {
    // 0x4c18e0
    if (a1 == 0) {
        // 0x4c1943
        return 0xffffaf00;
    }
    struct _IO_FILE * file = fopen((char *)file_path, "rb"); // 0x4c1906
    if (file == NULL) {
        // 0x4c1943
        return 0xffffae00;
    }
    // 0x4c1917
    int64_t v1; // bp-1096, 0x4c18e0
    function_4c1690(&v1);
    int64_t v2 = function_4c1770(&v1, a1, 0); // 0x4c1927
    int64_t v3 = v2 & 0xffffffff; // 0x4c192e
    int64_t v4 = v3; // 0x4c1931
    if ((int32_t)v2 == 0) {
        int64_t data; // bp-1064, 0x4c18e0
        while (fread(&data, 1, (int32_t)&g6, file) != 0) {
            // continue -> 0x4c1978
        }
        // 0x4c1994
        v4 = ferror(file) == 0 ? v3 : 0xffffae00;
    }
    // 0x4c1933
    fclose(file);
    function_4c16b0(&v1);
    // 0x4c1943
    return v4 & 0xffffffff;
}

// Address range: 0x4c3653 - 0x4c365e
int64_t function_4c3653(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4c3653
    return 0xffffffd2;
}

// Address range: 0x4c3660 - 0x4c3766
int64_t function_4c3660(int64_t str, uint64_t size, int64_t a3) {
    int64_t * v1 = (int64_t *)(a3 + 8); // 0x4c366d
    if (*v1 == 0) {
        // 0x4c3674
        return 0;
    }
    int64_t * v2 = (int64_t *)(a3 + 16); // 0x4c3680
    unsigned char v3 = *(char *)*v2; // 0x4c368f
    int32_t chars_printed = snprintf((char *)str, (int32_t)size, "%d.%d", 0, (int64_t)(v3 % 40)); // 0x4c36b7
    if (chars_printed < 0) {
        // 0x4c3674
        return 0xfffffff5;
    }
    uint64_t v4 = (int64_t)chars_printed; // 0x4c36c4
    if (v4 >= size) {
        // 0x4c3674
        return 0xfffffff5;
    }
    int64_t size2 = size - v4; // 0x4c36d3
    uint64_t v5 = *v1; // 0x4c36d9
    if (v5 < 2) {
        // 0x4c3742
        return size - size2 & 0xffffffff;
    }
    int64_t v6 = 1; // 0x4c36e7
    int64_t str2 = v4 + str;
    unsigned char v7 = *(char *)(*v2 + v6); // 0x4c3702
    int64_t v8 = v7 % 128; // 0x4c370b
    int64_t v9 = v5; // 0x4c370f
    int64_t v10 = v8; // 0x4c370f
    int64_t v11 = size2; // 0x4c370f
    int64_t v12 = str2; // 0x4c370f
    int32_t chars_printed2; // 0x4c3720
    uint64_t v13; // 0x4c3729
    if (v7 >= 0) {
        // 0x4c3711
        chars_printed2 = snprintf((char *)str2, (int32_t)size2, ".%d", v8);
        if (chars_printed2 < 0) {
            // 0x4c3674
            return 0xfffffff5;
        }
        // 0x4c3729
        v13 = (int64_t)chars_printed2;
        if (size2 <= v13) {
            // 0x4c3674
            return 0xfffffff5;
        }
        // 0x4c3730
        v9 = *v1;
        v10 = 0;
        v11 = size2 - v13;
        v12 = str2 + v13;
    }
    int64_t v14 = v11;
    v6++;
    while (v9 > v6) {
        // 0x4c36f0
        if ((int32_t)v10 >= 0x2000000) {
            // 0x4c3674
            return 0xfffffff5;
        }
        str2 = v12;
        int64_t size3 = v14;
        v7 = *(char *)(*v2 + v6);
        v8 = 128 * v10 & 0xffffff80 | (int64_t)(v7 % 128);
        v10 = v8;
        v11 = size3;
        v12 = str2;
        if (v7 >= 0) {
            // 0x4c3711
            chars_printed2 = snprintf((char *)str2, (int32_t)size3, ".%d", v8);
            if (chars_printed2 < 0) {
                // 0x4c3674
                return 0xfffffff5;
            }
            // 0x4c3729
            v13 = (int64_t)chars_printed2;
            if (size3 <= v13) {
                // 0x4c3674
                return 0xfffffff5;
            }
            // 0x4c3730
            v9 = *v1;
            v10 = 0;
            v11 = size3 - v13;
            v12 = str2 + v13;
        }
        // 0x4c3738
        v14 = v11;
        v6++;
    }
    // 0x4c3742
    return size - v14 & 0xffffffff;
}

// Address range: 0x4c4fd8 - 0x4c50f7
int64_t function_4c4fd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4c4fd8
    int64_t v1; // 0x4c4fd8
    return (v1 - *(int64_t *)(a1 + 8) & 0x1fffffffffffffff) != 0 ? 0xffffbe00 : 0x2a2a2a2a;
}

// Address range: 0x4cf79f - 0x4cf7a3
int64_t function_4cf79f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4cf79f
    int64_t result; // 0x4cf79f
    return result;
}

// Address range: 0x4cf7a4 - 0x4cf8c3
int64_t function_4cf7a4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x4cf7a4
    int64_t v1; // 0x4cf7a4
    int32_t * v2 = (int32_t *)(v1 - 57); // 0x4cf7a4
    *v2 = *v2 - 1;
    unsigned char v3 = 2 * (char)v1; // 0x4cf7a7
    char * v4 = (char *)(v1 & -256 | (int64_t)v3); // 0x4cf7a9
    *v4 = *v4 + v3;
    int64_t v5; // 0x4cf7a4
    *(char *)a4 = *(char *)&v5 + (char)(a3 / 256);
    if ((int32_t)a1 != 0) {
        // 0x4cf880
        printf("  Base64 encoding test: ");
    }
    // 0x4cf7c3
    int64_t str; // bp-152, 0x4cf7a4
    int64_t v6; // bp-160, 0x4cf7a4
    int64_t v7 = function_4cf380(&str, 128, &v6, &g10, 64); // 0x4cf7df
    if ((int32_t)v7 == 0) {
        int32_t memcmp_rc = memcmp((int64_t *)"JEhuVodiWr2/F9mixBcaAZTtjx4Rs9cJDLbpEG8i7hPKswcFdsn6MWwINP+Nwmw4AEPpVJevUEvRQbqVMVoLlw==", &str, 88); // 0x4cf7f9
        if (memcmp_rc == 0) {
            if ((int32_t)a1 != 0) {
                // 0x4cf8b0
                printf("passed\n  Base64 decoding test: ");
            }
            int64_t v8 = function_4cf560(&str, 128, &v6, "JEhuVodiWr2/F9mixBcaAZTtjx4Rs9cJDLbpEG8i7hPKswcFdsn6MWwINP+Nwmw4AEPpVJevUEvRQbqVMVoLlw==", 88); // 0x4cf844
            if ((int32_t)v8 == 0) {
                // 0x4cf84d
                if (memcmp(&g10, &str, 64) == 0) {
                    // 0x4cf867
                    if ((int32_t)a1 != 0) {
                        // 0x4cf86d
                        puts("passed\n");
                    }
                    // 0x4cf80f
                    return 0;
                }
            }
        }
    }
    // 0x4cf802
    if ((int32_t)a1 == 0) {
        // 0x4cf80f
        return 1;
    }
    // 0x4cf898
    puts("failed");
    return 1;
}

// Address range: 0x4cfa97 - 0x4cfb37
int64_t function_4cfa97(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x4cfa97
    if (a5 != 72) {
        function_4cfa68();
    }
    int32_t v1 = 0; // 0x4cfaa5
    int32_t v2 = 0; // bp+12, 0x4cfaad
    int64_t v3; // 0x4cfa97
    int64_t v4 = v3;
    int64_t v5; // 0x4cfa97
    function_4cf8d0(v5, &v1, &v2);
    *(int32_t *)v4 = v1;
    *(int32_t *)(v4 + 4) = v2;
    v3 = v4 + 8;
    while (v4 != v5 + 64) {
        // 0x4cfab8
        v4 = v3;
        function_4cf8d0(v5, &v1, &v2);
        *(int32_t *)v4 = v1;
        *(int32_t *)(v4 + 4) = v2;
        v3 = v4 + 8;
    }
    int64_t v6 = 0; // 0x4cfa97
    int32_t v7 = 128; // 0x4cfaf4
    int64_t v8 = v5 + 72 + 1024 * v6; // 0x4cfaf4
    function_4cf8d0(v5, &v1, &v2);
    *(int32_t *)v8 = v1;
    *(int32_t *)(v8 + 4) = v2;
    v7--;
    v8 += 8;
    while (v7 != 0) {
        // 0x4cfaf8
        function_4cf8d0(v5, &v1, &v2);
        *(int32_t *)v8 = v1;
        *(int32_t *)(v8 + 4) = v2;
        v7--;
        v8 += 8;
    }
    int64_t v9 = v6 + 1; // 0x4cfb20
    v6 = v9 & 0xffffffff;
    while ((int32_t)v9 != 4) {
        // 0x4cfae3
        v7 = 128;
        v8 = v5 + 72 + 1024 * v6;
        function_4cf8d0(v5, &v1, &v2);
        *(int32_t *)v8 = v1;
        *(int32_t *)(v8 + 4) = v2;
        v7--;
        v8 += 8;
        while (v7 != 0) {
            // 0x4cfaf8
            function_4cf8d0(v5, &v1, &v2);
            *(int32_t *)v8 = v1;
            *(int32_t *)(v8 + 4) = v2;
            v7--;
            v8 += 8;
        }
        // 0x4cfb20
        v9 = v6 + 1;
        v6 = v9 & 0xffffffff;
    }
    // 0x4cfb2a
    return 0;
}

// Address range: 0x4cfb37 - 0x4cfb3d
int64_t function_4cfb37(void) {
    // 0x4cfb37
    return 0xffffffea;
}

// Address range: 0x4ed13a - 0x4ed147
int64_t function_4ed13a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4ed13a
    int64_t v1; // 0x4ed13a
    int64_t v2 = v1 + 1; // 0x4ed13c
    *(int32_t *)(v1 + 76) = (int32_t)v2;
    return v2 & 0xffffffff;
}

// Address range: 0x4ed147 - 0x4ed15c
int64_t function_4ed147(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4ed147
    int64_t result; // 0x4ed147
    *(int64_t *)(result + 32) = a3 | 0x4000000 * (int64_t)&g5;
    return result;
}

// Address range: 0x4ed15c - 0x4ed171
int64_t function_4ed15c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4ed15c
    int64_t result; // 0x4ed15c
    *(int64_t *)(result + 32) = a3 | 0x4000000 * (int64_t)&g1;
    return result;
}

// Address range: 0x4ed171 - 0x4ed186
int64_t function_4ed171(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4ed171
    int64_t result; // 0x4ed171
    *(int64_t *)(result + 32) = a3 | 0x4000000 * (int64_t)&g15;
    return result;
}

// Address range: 0x4ed186 - 0x4ed195
int64_t function_4ed186(void) {
    // 0x4ed186
    int64_t result; // 0x4ed186
    return result;
}

// Address range: 0x4ed195 - 0x4ed19f
int64_t function_4ed195(void) {
    // 0x4ed195
    int64_t result; // 0x4ed195
    return result;
}

// Address range: 0x4ed19f - 0x4ed1b3
int64_t function_4ed19f(void) {
    // 0x4ed19f
    int64_t result; // 0x4ed19f
    return result;
}

// Address range: 0x4ed1b3 - 0x4ed1c6
int64_t function_4ed1b3(char a1) {
    // 0x4ed1b3
    int64_t result; // 0x4ed1b3
    return result;
}

// Address range: 0x4ed1c6 - 0x4ed1e8
int64_t function_4ed1c6(void) {
    // 0x4ed1c6
    int64_t v1; // 0x4ed1c6
    unsigned char v2 = *(char *)(v1 + 249); // 0x4ed1c6
    unsigned char result = *(char *)((8 * v1 & 24) + (int64_t)&g11 + (int64_t)v2); // 0x4ed1db
    *(char *)(v1 + 29) = result;
    return result;
}

// Address range: 0x4ed1e8 - 0x4ed1fc
int64_t function_4ed1e8(int64_t a1, int64_t a2, int64_t a3) {
    unsigned char result = *(char *)(a3 + (int64_t)&g14); // 0x4ed1ef
    int64_t v1; // 0x4ed1e8
    *(char *)(v1 + 29) = result;
    return result;
}

// Address range: 0x4ed1fc - 0x4ed210
int64_t function_4ed1fc(int64_t a1, int64_t a2, int64_t a3) {
    unsigned char result = *(char *)(a3 + (int64_t)&g12); // 0x4ed203
    int64_t v1; // 0x4ed1fc
    *(char *)(v1 + 29) = result;
    return result;
}

// Address range: 0x4ed210 - 0x4ed224
int64_t function_4ed210(int64_t a1, int64_t a2, int64_t a3) {
    unsigned char result = *(char *)(a3 + (int64_t)&g13); // 0x4ed217
    int64_t v1; // 0x4ed210
    *(char *)(v1 + 29) = result;
    return result;
}

// Address range: 0x4ed224 - 0x4ed22e
int64_t function_4ed224(void) {
    // 0x4ed224
    int64_t result; // 0x4ed224
    *(char *)(result + 29) = 32;
    return result;
}

// Address range: 0x4ed22e - 0x4ed243
int64_t function_4ed22e(void) {
    // 0x4ed22e
    int64_t result; // 0x4ed22e
    *(char *)(result + 29) = 8;
    return result;
}

// Address range: 0x4f05d2 - 0x4f05dc
int64_t function_4f05d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4f05d2
    int64_t result; // 0x4f05d2
    return result;
}

// Address range: 0x4f05de - 0x4f05df
int64_t function_4f05de(void) {
    // 0x4f05de
    int64_t result; // 0x4f05de
    return result;
}

// Address range: 0x4f05fc - 0x4f0602
int64_t function_4f05fc(void) {
    // 0x4f05fc
    int64_t v1; // 0x4f05fc
    int64_t v2 = v1;
    int64_t result = (v2 + 179) % 256 | v2 & -256; // 0x4f05fc
    int32_t * v3 = (int32_t *)(result - 119); // 0x4f05fe
    *v3 = *v3 - 1;
    return result;
}

// Address range: 0x4f0610 - 0x4f0625
int64_t function_4f0610(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4f0610
    int64_t v1; // 0x4f0610
    int64_t v2 = v1;
    char * v3 = (char *)(v2 - 119); // 0x4f0610
    bool v4; // 0x4f0610
    *v3 = (2 * (char)a4 | (char)v4) + *v3;
    int64_t result = (v2 + 179) % 256 | v2 & -256; // 0x4f061f
    int32_t * v5 = (int32_t *)(result - 119); // 0x4f0621
    *v5 = *v5 - 1;
    return result;
}

// Address range: 0x4f0667 - 0x4f066d
int64_t function_4f0667(void) {
    // 0x4f0667
    int64_t v1; // 0x4f0667
    int64_t v2 = v1;
    int64_t result = (v2 + 179) % 256 | v2 & -256; // 0x4f0667
    int32_t * v3 = (int32_t *)(result - 119); // 0x4f0669
    *v3 = *v3 - 1;
    return result;
}

// Address range: 0x4f068c - 0x4f0690
int64_t function_4f068c(void) {
    // 0x4f068c
    int64_t result; // 0x4f068c
    int32_t * v1 = (int32_t *)(result - 119); // 0x4f068c
    *v1 = *v1 - 1;
    return result;
}

// Address range: 0x4f06af - 0x4f06b3
int64_t function_4f06af(void) {
    // 0x4f06af
    int64_t result; // 0x4f06af
    int32_t * v1 = (int32_t *)(result - 119); // 0x4f06af
    *v1 = *v1 - 1;
    return result;
}

// Address range: 0x4fdc7c - 0x4fdcab
int64_t function_4fdc7c(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x4fdc7c
    int64_t v1; // 0x4fdc7c
    int64_t v2 = v1;
    int64_t v3 = v1;
    *(char *)v3 = 2 * (char)v3;
    char * v4 = (char *)(v1 + 106); // 0x4fdc7e
    *v4 = *v4 + (char)(a3 / 256);
    function_549920("basic_filebuf::underflow incomplete character in file");
    if (v2 >= 0 == (v2 != 0)) {
        function_4fdbe0();
    }
    if ((char)v1 == 0) {
        function_4fdbd3();
    }
    // 0x4fdca2
    return function_4fdc50();
}

// Address range: 0x4fdcb0 - 0x4fdcb9
int64_t function_4fdcb0(void) {
    // 0x4fdcb0
    return function_4fdc00();
}

// Address range: 0x4fdcc0 - 0x4fdcf5
int64_t function_4fdcc0(void) {
    // 0x4fdcc0
    int64_t v1; // 0x4fdcc0
    *(int64_t *)(v1 + 40) = 0;
    *(int64_t *)(v1 + 32) = 0;
    *(int64_t *)(v1 + 48) = 0;
    *(char *)(v1 + 169) = 0;
    return function_4fd895();
}

// Address range: 0x4fdcf8 - 0x4fdd00
int64_t function_4fdcf8(void) {
    // 0x4fdcf8
    return function_4fd9f0();
}

// Address range: 0x4fdd00 - 0x4fdd08
int64_t function_4fdd00(void) {
    // 0x4fdd00
    return function_4fda54();
}

// Address range: 0x4fdd10 - 0x4fddaa
int64_t function_4fdd10(void) {
    // 0x4fdd10
    int64_t v1; // 0x4fdd10
    int64_t v2 = function_4eec00(v1); // 0x4fdd13
    if (v1 != 0) {
        int64_t v3 = *(int64_t *)(v1 + 224); // 0x4fdd81
        memcpy((int64_t *)v2, (int64_t *)v3, (int32_t)v1);
    }
    int64_t * v4 = (int64_t *)(v1 + 208); // 0x4fdd20
    int64_t v5 = *v4; // 0x4fdd20
    if (v5 != 0) {
        // 0x4fdd2c
        function_4eeb40(v5);
    }
    // 0x4fdd31
    *v4 = v2;
    return function_4fd972();
}

// Address range: 0x5070ae - 0x5070b0
int64_t function_5070ae(void) {
    // 0x5070ae
    int64_t result; // 0x5070ae
    return result;
}

// Address range: 0x5070b0 - 0x507137
// From class:    std::basic_ifstream<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_5070b0(int64_t a1) {
    int64_t v1 = a1 + 16; // 0x5070bb
    int64_t v2 = a1 + 256; // 0x5070c7
    int64_t * v3 = (int64_t *)v2; // 0x5070c7
    *v3 = (int64_t)&g24;
    int64_t * v4 = (int64_t *)a1; // 0x5070d5
    *v4 = (int64_t)&g23;
    int64_t * v5 = (int64_t *)v1; // 0x5070dd
    *v5 = (int64_t)&g21;
    function_505130(v1);
    function_4f1760(a1 + 120);
    *v5 = (int64_t)&g31;
    function_566180(a1 + 72);
    *(int64_t *)(a1 + 8) = 0;
    *v4 = (int64_t)&g22;
    *v3 = (int64_t)&g20;
    return function_54cf10(v2);
}

// Address range: 0x507140 - 0x5071da
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_507140(int64_t a1) {
    int64_t v1 = a1 + 8; // 0x50714b
    int64_t * v2 = (int64_t *)(a1 - 16); // 0x507153
    *v2 = (int64_t)&g27;
    int64_t * v3 = (int64_t *)a1; // 0x50715f
    *v3 = (int64_t)&g28;
    int64_t v4 = a1 + 248; // 0x50716a
    int64_t * v5 = (int64_t *)v4; // 0x50716a
    *v5 = (int64_t)&g29;
    int64_t * v6 = (int64_t *)v1; // 0x507175
    *v6 = (int64_t)&g21;
    function_505130(v1);
    function_4f1760(a1 + 112);
    *v6 = (int64_t)&g31;
    function_566180(a1 + 64);
    *(int64_t *)(a1 - 8) = 0;
    *v3 = (int64_t)&g25;
    *v2 = (int64_t)&g26;
    *v5 = (int64_t)&g20;
    return function_54cf10(v4);
}

// Address range: 0x5295e1 - 0x529607
int64_t function_5295e1(int64_t a1, int32_t a2) {
    // 0x5295e1
    int64_t v1; // 0x5295e1
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    if (a1 == 0) {
        function_52877a();
    }
    if (a2 != -1) {
        function_528d00();
    }
    // 0x529602
    return function_5290db();
}

// Address range: 0x529607 - 0x529623
int64_t function_529607(int64_t a1) {
    // 0x529607
    *(char *)a1 = 0;
    return function_52880a();
}

// Address range: 0x529623 - 0x52962d
int64_t function_529623(void) {
    // 0x529623
    return function_528550();
}

// Address range: 0x52962d - 0x52964a
int64_t function_52962d(void) {
    // 0x52962d
    int64_t v1; // 0x52962d
    if (*(char *)(2 * v1) == -1) {
        function_52945c();
    }
    // 0x529645
    return function_528565();
}

// Address range: 0x52964a - 0x529686
int64_t function_52964a(int64_t a1, int64_t a2) {
    if ((int32_t)a1 != -1) {
        function_529199();
    }
    // 0x529659
    if ((*(char *)(*(int64_t *)(a2 + 48) + 511) & 32) == 0) {
        function_52877a();
    }
    // 0x529681
    return function_52848e();
}

// Address range: 0x529686 - 0x5296cc
int64_t function_529686(int64_t a1, int64_t a2) {
    // 0x529686
    while (true) {
        // 0x529689
        int64_t v1; // 0x529686
        if (v1 != a2 + 16) {
            // 0x52969f
            function_4eeb50(v1);
        }
        // 0x5296a4
        int64_t v2; // 0x529686
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        if (v1 != a1 + 16) {
            // 0x5296c5
            function_4eeb50(v1);
        }
        // 0x529689
        v2 = (int64_t)&g40;
    }
}

// Address range: 0x5296cc - 0x5296d8
int64_t function_5296cc(int32_t a1) {
    // 0x5296cc
    return function_528941();
}

// Address range: 0x5296d8 - 0x5296e4
int64_t function_5296d8(int32_t a1) {
    // 0x5296d8
    return function_528b7d();
}

// Address range: 0x5296e4 - 0x52970a
int64_t function_5296e4(void) {
    // 0x5296e4
    __stack_chk_fail();
    function_1fd40((int64_t)&g40);
    while (true) {
        // 0x5296fb
        function_1fd40(function_20a50());
    }
}

// Address range: 0x52970c - 0x52970d
int64_t function_52970c(void) {
    // 0x52970c
    int64_t result; // 0x52970c
    return result;
}

// Address range: 0x52970e - 0x52971c
int64_t function_52970e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x52970e
    int64_t result; // 0x52970e
    __asm_outsb((int16_t)a3, (char)result);
    int32_t * v1 = (int32_t *)(result - 119); // 0x529711
    *v1 = *v1 - 1;
    return result;
}

// Address range: 0x547e6c - 0x547e6e
int64_t function_547e6c(void) {
    // 0x547e6c
    return function_547e57();
}

// Address range: 0x547e6e - 0x547ebb
int64_t function_547e6e(int64_t a1) {
    // 0x547e6e
    if ((int64_t)g34 == a1) {
        // 0x547e89
        int64_t result; // 0x547e6e
        return result;
    }
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result2 = *v1;
    *v1 = result2 - 1;
    if (result2 >= 0 == (result2 != 0)) {
        // 0x547e89
        return result2;
    }
    // 0x547ea8
    return function_547e30();
}

// Address range: 0x547ec0 - 0x547ee2
int64_t function_547ec0(int64_t result) {
    // 0x547ec0
    if (*(int32_t *)(result - 8) < 0) {
        // 0x547ee0
        return result;
    }
    // 0x547eca
    function_27bbe();
    return result;
}

// Address range: 0x547ef0 - 0x547f63
int64_t function_547ef0(int64_t a1, uint64_t result, int64_t a3, int64_t a4) {
    // 0x547ef0
    if (*(int64_t *)(a1 - 24) > result) {
        // 0x547f05
        if (*(int32_t *)(a1 - 8) >= 0) {
            // 0x547f0c
            function_27bbe();
        }
        // 0x547f17
        return result + a1;
    }
    // 0x547f21
    function_542650("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)");
    function_25e90();
    *(int32_t *)"create" = -1;
    return result;
}

// Address range: 0x547f70 - 0x547fae
int64_t function_547f70(int64_t a1, int64_t result, int64_t a3, int64_t a4) {
    if (a3 == result) {
        // 0x547f78
        return result;
    }
    // 0x547f80
    function_25e90();
    *(int32_t *)(a1 - 8) = -1;
    return result;
}

// Address range: 0x54d71d - 0x54d786
// From class:    std::ctype<wchar_t>
// Type:          constructor
int64_t function_54d71d(int64_t a1, int64_t a2) {
    // 0x54d71d
    int64_t v1; // 0x54d71d
    *(int64_t *)v1 = (int64_t)&g30;
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t v2 = a2; // bp-16, 0x54d750
    *(int32_t *)(v1 + 8) = ((int32_t)&g40 ^ (int32_t)&g40) & -256 | 1;
    *(int64_t *)v1 = (int64_t)&g32;
    int64_t v3 = function_567a10(&v2); // 0x54d76b
    *(char *)(v1 + 24) = 0;
    *(int64_t *)(v1 + 16) = v3;
    return function_5700a0(v1);
}

// Address range: 0x54d790 - 0x54d815
// From class:    std::ctype_byname<wchar_t>
// Type:          constructor
int64_t function_54d790(int64_t a1, int64_t a2, int64_t a3) {
    // 0x54d790
    function_54d6e0();
    *(int64_t *)a1 = (int64_t)&g33;
    bool v1; // 0x54d790
    int64_t v2 = v1 ? -1 : 1;
    int64_t v3 = (int64_t)&g8; // 0x54d790
    int64_t v4 = a2; // 0x54d790
    int64_t v5 = 2; // 0x54d7bf
    unsigned char v6 = *(char *)v4; // 0x54d7bf
    char v7 = *(char *)v3; // 0x54d7bf
    char v8 = v7; // 0x54d7bf
    bool v9 = false; // 0x54d7bf
    while (v6 == v7) {
        v5--;
        v3 += v2;
        v4 += v2;
        v8 = v6;
        v9 = true;
        if (v5 == 0) {
            // break -> 
            break;
        }
        v6 = *(char *)v4;
        v7 = *(char *)v3;
        v8 = v7;
        v9 = false;
    }
    unsigned char v10 = v8;
    int64_t v11 = (int64_t)!((v6 < v10 | v9)) - (int64_t)(v6 < v10); // 0x54d7c4
    int64_t v12 = (int64_t)"POSIX"; // 0x54d7c8
    int64_t v13 = a2; // 0x54d7c8
    if ((char)v11 == 0) {
        // 0x54d7e4
        return v11 % 256 | (int64_t)&g33 & -256;
    }
    int64_t v14 = 6; // 0x54d7c8
    unsigned char v15 = *(char *)v13; // 0x54d7d9
    char v16 = *(char *)v12; // 0x54d7d9
    v13 += v2;
    char v17 = v16; // 0x54d7d9
    bool v18 = false; // 0x54d7d9
    while (v15 == v16) {
        // 0x54d7ca
        v14--;
        v12 += v2;
        v17 = v15;
        v18 = true;
        if (v14 == 0) {
            // break -> 
            break;
        }
        v15 = *(char *)v13;
        v16 = *(char *)v12;
        v13 += v2;
        v17 = v16;
        v18 = false;
    }
    unsigned char v19 = v17;
    int64_t v20 = (int64_t)!((v15 < v19 | v18)) - (int64_t)(v15 < v19); // 0x54d7de
    if ((char)v20 == 0) {
        // 0x54d7e4
        return v20 % 256 | (int64_t)&g33 & -256;
    }
    int64_t v21 = a1 + 16; // 0x54d7f0
    function_5679e0(v21, v13);
    function_5679b0(v21, a2, 0);
    return function_5700a0(a1);
}

// Address range: 0x5557da - 0x5557e5
int64_t function_5557da(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5557da
    return unknown_10349127(a1, a2, a3);
}

// Address range: 0x5557e8 - 0x5557f7
int64_t function_5557e8(void) {
    // 0x5557e8
    int64_t v1; // bp+31, 0x5557e8
    int64_t v2; // 0x5557e8
    function_552550(v2, &v1);
    return function_555719();
}

// Address range: 0x5557f7 - 0x5558af
int64_t function_5557f7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5557f7
    __stack_chk_fail();
    int64_t v1 = a3 - 24; // 0x55580b
    if (v1 != (int64_t)&g35) {
        // 0x555814
        int64_t v2; // bp+31, 0x5557f7
        function_552550(v1, &v2);
    }
    int64_t v3 = a2 - 24; // 0x55582d
    int64_t v4 = a1 - 24;
    int64_t v5 = (int64_t)&g40; // 0x5557f7
    while (true) {
        // 0x555828
        if (v3 != (int64_t)&g35) {
            // 0x555836
            int64_t v6; // bp+30, 0x5557f7
            function_552550(v3, &v6);
        }
        if (v4 != (int64_t)&g35) {
            // 0x555858
            int64_t v7; // bp+29, 0x5557f7
            function_552550(v4, &v7);
        }
        // 0x55586c
        function_1fd40(v5);
        int64_t v8; // 0x5557f7
        if (v8 != 0) {
            // 0x555879
            function_4eeb40(v8);
        }
        if (v8 != 0) {
            // 0x555886
            function_4eeb40(v8);
        }
        // 0x55589b
        v5 = function_20a50();
    }
}

// Address range: 0x5558af - 0x5558c1
int64_t function_5558af(void) {
    // 0x5558af
    int64_t result; // 0x5558af
    return result;
}

// Address range: 0x5558c1 - 0x5558db
int64_t function_5558c1(void) {
    // 0x5558c1
    function_20540();
    int64_t v1; // 0x5558c1
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return function_1fd40((int64_t)&g40);
}

// Address range: 0x5558db - 0x5558e0
int64_t function_5558db(void) {
    // 0x5558db
    int64_t result; // 0x5558db
    return result;
}

// Address range: 0x5558e0 - 0x5558e2
int64_t function_5558e0(void) {
    // 0x5558e0
    int64_t result; // 0x5558e0
    return result;
}

// Address range: 0x5558e2 - 0x5558f4
int64_t function_5558e2(void) {
    // 0x5558e2
    int64_t result; // 0x5558e2
    return result;
}

// Address range: 0x5558f4 - 0x555906
int64_t function_5558f4(void) {
    // 0x5558f4
    int64_t result; // 0x5558f4
    return result;
}

// Address range: 0x555906 - 0x555908
int64_t function_555906(void) {
    // 0x555906
    int64_t result; // 0x555906
    return result;
}

// Address range: 0x555908 - 0x55590a
int64_t function_555908(void) {
    // 0x555908
    return function_5558f4();
}

// Address range: 0x55590a - 0x55590c
int64_t function_55590a(void) {
    // 0x55590a
    return function_5558f4();
}

// Address range: 0x578f7c - 0x578f81
int64_t function_578f7c(void) {
    // 0x578f7c
    return function_578cfb();
}

// Address range: 0x578f81 - 0x578f8b
int64_t function_578f81(void) {
    // 0x578f81
    int64_t v1; // 0x578f81
    int32_t * v2 = (int32_t *)(v1 + 8); // 0x578f81
    *v2 = *v2 + 1;
    return function_578d44();
}

// Address range: 0x578f8b - 0x578f95
int64_t function_578f8b(void) {
    // 0x578f8b
    int64_t v1; // 0x578f8b
    int32_t * v2 = (int32_t *)(v1 + 8); // 0x578f8b
    *v2 = *v2 + 1;
    return function_578e46();
}

// Address range: 0x578f95 - 0x578f9c
int64_t function_578f95(void) {
    // 0x578f95
    int64_t v1; // 0x578f95
    int32_t * v2 = (int32_t *)(v1 + 8); // 0x578f95
    *v2 = *v2 + 1;
    return function_578f47();
}

// Address range: 0x578f9c - 0x578fbc
int64_t function_578f9c(void) {
    // 0x578f9c
    int64_t v1; // 0x578f9c
    function_565970(v1);
    function_4eeb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return function_578f9c();
}

// Address range: 0x578fbc - 0x578fd5
int64_t function_578fbc(void) {
    // 0x578fbc
    int64_t v1; // 0x578fbc
    function_572060(*(int64_t *)(v1 + 24));
    return function_56b4f0(v1);
}

// Address range: 0x578fd5 - 0x579001
int64_t function_578fd5(void) {
    // 0x578fd5
    int64_t v1; // 0x578fd5
    function_4eeb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    function_572060(*(int64_t *)(v1 + 24));
    return function_4f4f50(v1);
}

// Address range: 0x579001 - 0x57901a
int64_t function_579001(void) {
    // 0x579001
    int64_t v1; // 0x579001
    function_572060(*(int64_t *)(v1 + 24));
    return function_4f3f50(v1);
}

// Address range: 0x57901a - 0x57901c
int64_t function_57901a(void) {
    // 0x57901a
    return function_578fd5();
}

// Address range: 0x57901c - 0x579038
int64_t function_57901c(void) {
    // 0x57901c
    int64_t v1; // 0x57901c
    function_572060(*(int64_t *)(v1 + 24));
    return function_56b220(v1);
}

// Address range: 0x579038 - 0x57903d
int64_t function_579038(void) {
    // 0x579038
    return function_578f9c();
}

// Address range: 0x57903d - 0x579042
int64_t function_57903d(void) {
    // 0x57903d
    return function_578f9c();
}

// Address range: 0x579042 - 0x579047
int64_t function_579042(void) {
    // 0x579042
    return function_578f9c();
}

// Address range: 0x579047 - 0x57906f
int64_t function_579047(void) {
    // 0x579047
    function_542470("cannot create shim for unknown locale::facet");
    int64_t v1; // 0x579047
    function_572060(*(int64_t *)(v1 + 24));
    return function_4f4e50(v1);
}

// Address range: 0x57906f - 0x579074
int64_t function_57906f(void) {
    // 0x57906f
    return function_578f9c();
}

// Address range: 0x579074 - 0x5790ab
int64_t function_579074(void) {
    // 0x579074
    int64_t v1; // 0x579074
    function_565970(v1);
    function_4eeb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    function_572060(*(int64_t *)(v1 + 24));
    return function_4f4060(v1);
}

// Address range: 0x5790ab - 0x5790ad
int64_t function_5790ab(void) {
    // 0x5790ab
    return function_579074();
}
