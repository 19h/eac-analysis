/*
 * Targeted RetDec C for native executable gap queue batch 2067.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2d09e-0x2d29e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d29e-0x2d409 rank=- name=- kind=- bytes=- uncovered=-
 *   0xc3f26-0xc4126 rank=- name=- kind=- bytes=- uncovered=-
 *   0xc4126-0xc4258 rank=- name=- kind=- bytes=- uncovered=-
 *   0x212042-0x212242 rank=- name=- kind=- bytes=- uncovered=-
 *   0x212242-0x212399 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33c842-0x33ca42 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33ca42-0x33cb73 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48cc52-0x48ce52 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48ce52-0x48cfa2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c4b33-0x4c4c60 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d3413-0x4d3530 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4daa69-0x4dac69 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4dac69-0x4dadd1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e9779-0x4e9879 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e9a2c-0x4e9a86 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fcd85-0x4fcf85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fcf85-0x4fd0d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50a0d8-0x50a2d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50a2d8-0x50a420 rank=- name=- kind=- bytes=- uncovered=-
 *   0x544e11-0x545011 rank=- name=- kind=- bytes=- uncovered=-
 *   0x545011-0x545160 rank=- name=- kind=- bytes=- uncovered=-
 *   0x545c09-0x545e09 rank=- name=- kind=- bytes=- uncovered=-
 *   0x545e09-0x545f40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5479ca-0x547bca rank=- name=- kind=- bytes=- uncovered=-
 *   0x547bca-0x547d00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5540c8-0x5542c8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5542c8-0x554420 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5639f3-0x563bf3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x563bf3-0x563d40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x564314-0x564514 rank=- name=- kind=- bytes=- uncovered=-
 *   0x564514-0x564652 rank=- name=- kind=- bytes=- uncovered=-
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
int64_t function_20540();
int64_t function_20a50();
int64_t function_212042(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_21211e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_212274(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_221a8();
int64_t function_24ded();
int64_t function_25018();
int64_t function_2508e();
int64_t function_2562c();
int64_t function_256a2();
int64_t function_25a28();
int64_t function_2d050();
int64_t function_2d097();
int64_t function_2d09e(int64_t a1, int64_t a2);
int64_t function_2d0aa(void);
int64_t function_2d0d7(int64_t a1, int64_t a2);
int64_t function_2d1fc(void);
int64_t function_2d208(void);
int64_t function_2d23c(void);
int64_t function_2d243(int64_t a1);
int64_t function_2d246(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2d261(void);
int64_t function_2d265(void);
int64_t function_2d26f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d29c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2d2f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d353(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_2d406(int64_t a1);
int64_t function_33c842(void);
int64_t function_33c845(void);
int64_t function_33c8d0(void);
int64_t function_33c92d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_33c958(int64_t a1);
int64_t function_33c978(void);
int64_t function_33c985(int64_t a1);
int64_t function_33c9d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33ca01(int64_t a1);
int64_t function_33ca2a(int64_t a1);
int64_t function_33ca61(void);
int64_t function_33ca65(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_392a6b();
int64_t function_48c82e();
int64_t function_48ca0e();
int64_t function_48cc52(void);
int64_t function_48cc53(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_48cf8c(int64_t a1);
int64_t function_4935b2fd();
int64_t function_4c4b33(int32_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4c4b60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4c4b90(int64_t a1);
int64_t function_4c4bc0(void);
int64_t function_4c4c00(int64_t a1);
int64_t function_4c4c20(void);
int64_t function_4c4c50(void);
int64_t function_4d2a00();
int64_t function_4d2a10();
int64_t function_4d2af0();
int64_t function_4d2d40();
int64_t function_4d2e40();
int64_t function_4d30d0();
int64_t function_4d30e0();
int64_t function_4d32f6();
int64_t function_4d334e();
int64_t function_4d335f();
int64_t function_4d3395();
int64_t function_4d3413(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4d34d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4d9310();
int64_t function_4daa69(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, char a8, unsigned char a9, int64_t a10);
int64_t function_4e9779(void);
int64_t function_4e97ab(void);
int64_t function_4e97c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4e97da(void);
int64_t function_4e97de(void);
int64_t function_4e97f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4e980d(void);
int64_t function_4e9818(void);
int64_t function_4e9833(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4e984b(void);
int64_t function_4e9862(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4e9a0e();
int64_t function_4e9a2c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4e9a41(void);
int64_t function_4eeb40();
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_4f15a0();
int64_t function_4f1630();
int64_t function_4f1700();
int64_t function_4f1710();
int64_t function_4f2d50();
int64_t function_4fc010();
int64_t function_4fca70();
int64_t function_4fcce0();
int64_t function_4fcd85(void);
int64_t function_4fcd90(int64_t result, int64_t a2);
int64_t function_4fd0d0();
int64_t function_4fef10();
int64_t function_5009e0();
int64_t function_501020();
int64_t function_5029a0();
int64_t function_50a0d8(int64_t a1, int64_t a2);
int64_t function_50a2e0(int64_t a1, int64_t a2);
int64_t function_50a300(int64_t result, char a2, char a3);
int64_t function_50a320(int64_t a1, int64_t a2, int64_t a3);
int64_t function_50a340(int64_t a1, int64_t a2, int64_t a3);
int64_t function_50a360(int64_t a1, int64_t a2);
int64_t function_50a380(int64_t result);
int64_t function_50a390(int64_t result);
int64_t function_50a3a0(int64_t result);
int64_t function_50a3b0(int64_t result);
int64_t function_50a3c0(int64_t result);
int64_t function_50a3d0(int64_t result);
int64_t function_50a3e0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_50a400(int64_t a1, int64_t a2, int64_t a3);
int64_t function_540380();
int64_t function_5403d0();
int64_t function_5423f0();
int64_t function_542650();
int64_t function_5433f0();
int64_t function_543470();
int64_t function_544df0();
int64_t function_544e11(char a1);
int64_t function_544fc0(void);
int64_t function_544fd0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_544ff0(int64_t a1, int64_t a2);
int64_t function_545074(int64_t a1, int64_t a2);
int64_t function_5450c0(void);
int64_t function_5450d0(int64_t result);
int64_t function_5450f0(int64_t result);
int64_t function_545110(int64_t a1, int64_t a2, int64_t result);
int64_t function_545160();
int64_t function_545920();
int64_t function_5459a0();
int64_t function_545b60();
int64_t function_545bb9();
int64_t function_545bbe();
int64_t function_545c09(void);
int64_t function_545c0b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_545c90(int64_t result, int64_t a2, int64_t a3);
int64_t function_545da0(void);
int64_t function_545db0(int64_t a1, int64_t a2);
int64_t function_545e00(void);
int64_t function_545e10(int64_t result, int64_t a2);
int64_t function_545ea0(int64_t result, int64_t a2);
int64_t function_545ec0(int64_t result, int64_t a2);
int64_t function_545f00(int64_t result, int64_t a2);
int64_t function_545f20(int64_t result, int64_t a2);
int64_t function_5479ca(int64_t a1, int64_t a2, int64_t result);
int64_t function_5479e0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_547a70(int64_t a1, int64_t a2);
int64_t function_547a80(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_547ac0(int64_t a1, uint64_t a2, uint64_t a3, int64_t str, uint64_t a5, uint64_t a6);
int64_t function_547cc0(void);
int64_t function_547cd0(int64_t a1);
int64_t function_547ce0(int64_t a1);
int64_t function_547cf0(int64_t a1);
int64_t function_54cb80();
int64_t function_54ce50();
int64_t function_54ceb0();
int64_t function_54cf10();
int64_t function_5540c8(int64_t a1, int64_t a2);
int64_t function_5542d0(int64_t a1, int64_t a2);
int64_t function_5542f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, char a6, char a7);
int64_t function_554320(int64_t a1, int64_t a2, int64_t a3);
int64_t function_554340(int64_t a1, int64_t a2, int64_t a3);
int64_t function_554360(int64_t a1, int64_t a2);
int64_t function_554380(int64_t result);
int64_t function_554390(int64_t result);
int64_t function_5543a0(int64_t result);
int64_t function_5543b0(int64_t result);
int64_t function_5543c0(int64_t result);
int64_t function_5543d0(int64_t result);
int64_t function_5543e0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_554400(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5639f3(int64_t a1);
int64_t function_5639f5(void);
int64_t function_563a20(int64_t a1);
int64_t function_563a30(int64_t a1);
int64_t function_563a40(int64_t a1, int64_t a2);
int64_t function_563ac0(int64_t a1, int64_t a2);
int64_t function_563b10(int64_t result, int64_t a2);
int64_t function_563b50(int64_t a1, int64_t a2, int64_t result2);
int64_t function_563c60(int64_t a1);
int64_t function_563c80(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_564288();
int64_t function_564291();
int64_t function_5642b4();
int64_t function_564310();
int64_t function_564314(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result2, int64_t a6);
int64_t function_5659d0();
int64_t function_566100();
int64_t function_566180();
int64_t function_568180();
int64_t function_5f453();
int64_t function_7214c();
int64_t function_7260a();
int64_t function_c3f26(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_c3f92(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_c414b(void);
int64_t function_c421a(void);
int64_t function_c823b();
int64_t function_ffffffff858bcbce();
int64_t function_ffffffff8ca97bdc();
int64_t unknown_1f734135();
int64_t unknown_7a0bff();
int64_t unknown_c3f3f7a();
int64_t unknown_ffffffff83ed0b8b();
int64_t unknown_ffffffff87f8f115();
int64_t unknown_ffffffffa4848b6c();
int64_t unknown_ffffffffb34e7689();
int64_t unknown_fffffffff011afee();

// Address range: 0x2d09e - 0x2d0a2
int64_t function_2d09e(int64_t a1, int64_t a2) {
    // 0x2d09e
    int64_t result; // 0x2d09e
    result = function_2d097();
    // 0x2d0a1
    return result;
}

// Address range: 0x2d0aa - 0x2d0ac
int64_t function_2d0aa(void) {
    // 0x2d0aa
    return function_2d050();
}

// Address range: 0x2d0d7 - 0x2d0f2
int64_t function_2d0d7(int64_t a1, int64_t a2) {
    int64_t v1 = unknown_fffffffff011afee(); // 0x2d0d7
    int64_t result = v1; // 0x2d0dc
    // 0x2d0e9
    return result;
}

// Address range: 0x2d1fc - 0x2d1fd
int64_t function_2d1fc(void) {
    // 0x2d1fc
    int64_t result; // 0x2d1fc
    return result;
}

// Address range: 0x2d208 - 0x2d209
int64_t function_2d208(void) {
    // 0x2d208
    int64_t result; // 0x2d208
    return result;
}

// Address range: 0x2d23c - 0x2d243
int64_t function_2d23c(void) {
    // 0x2d23c
    return function_2d1fc();
}

// Address range: 0x2d243 - 0x2d246
int64_t function_2d243(int64_t a1) {
    // 0x2d243
    int64_t v1; // 0x2d243
    return v1 & -87;
}

// Address range: 0x2d246 - 0x2d252
int64_t function_2d246(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2d246
    int64_t result; // 0x2d246
    return result;
}

// Address range: 0x2d261 - 0x2d262
int64_t function_2d261(void) {
    // 0x2d261
    int64_t result; // 0x2d261
    return result;
}

// Address range: 0x2d265 - 0x2d26a
int64_t function_2d265(void) {
    // 0x2d265
    return function_ffffffff8ca97bdc();
}

// Address range: 0x2d26f - 0x2d289
int64_t function_2d26f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    uint32_t v2 = __asm_in_133(-111); // 0x2d26f
    int64_t v3 = v2 / 0x4000000 | 64 * v2; // 0x2d274
    bool v4; // 0x2d26f
    if (!v4 && (v2 & 0x2000000) == 0) {
        v3 = function_2d261();
    }
    // 0x2d276
    int64_t v5; // 0x2d26f
    uint32_t v6 = (int32_t)v5;
    uint32_t v7 = (int32_t)v3; // 0x2d276
    int64_t v8 = v3; // 0x2d278
    if (((v6 - v7 ^ v6) & (int32_t)(v3 ^ v5)) < 0) {
        v8 = function_2d26f(a1, a2, a3, (int64_t)&g26);
    }
    char * v9 = (char *)(v5 - 109); // 0x2d27a
    char v10 = *v9 - (v6 < v7 ? -24 : -25); // 0x2d27a
    unsigned char v11 = llvm_ctpop_i8(v10); // 0x2d27a
    *v9 = v10;
    *(char *)a1 = *(char *)&v1;
    int32_t * v12 = (int32_t *)(a3 + 21); // 0x2d280
    uint32_t v13 = *v12; // 0x2d280
    *v12 = v13 / 0x200000 | 2048 * v13;
    int64_t result = v8; // 0x2d284
    if (v11 % 2 != 0) {
        result = function_2d208();
    }
    // 0x2d286
    return result;
}

// Address range: 0x2d29c - 0x2d2f4
int64_t function_2d29c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2d29c
    int64_t v1; // 0x2d29c
    int32_t * v2 = (int32_t *)(v1 + 0x8e1d565); // 0x2d29c
    *v2 = *v2 & (int32_t)a2;
    char v3 = a4; // 0x2d2a2
    *(char *)0x7822f3aa = *(char *)0x7822f3aa + v3;
    *(char *)0x77ae2d4b = *(char *)0x77ae2d4b & v3;
    char * v4 = (char *)(v1 + 0x632c501cc); // 0x2d2bb
    *v4 = *v4 + v3;
    int32_t * v5 = (int32_t *)(a2 + 0x5ce7553d); // 0x2d2c2
    *v5 = 0x8000 * *v5;
    int32_t * v6 = (int32_t *)(a1 + 98); // 0x2d2cf
    *v6 = 128 * *v6;
    __asm_sti();
    *(int64_t *)((int64_t)(-49 * *(int32_t *)(v1 + 110)) - 8) = a6;
    int64_t result = (int64_t)*(char *)0x644ef505f11cd621 | 0x2d8f0000; // 0x2d2de
    *(int32_t *)0x2396ada3a761d5fb = (int32_t)result;
    return result;
}

// Address range: 0x2d2f7 - 0x2d345
int64_t function_2d2f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d2f7
    int64_t v1; // 0x2d2f7
    int16_t v2; // 0x2d2f7
    int64_t v3; // 0x2d2f7
    bool v4; // 0x2d2f7
    if (!v4) {
        // 0x2d328
        __asm_int3();
        int32_t * v5 = (int32_t *)(v3 - 0x2308fd45); // 0x2d329
        *v5 = *v5 & (int32_t)v3;
        v2 = a3;
        v1 = a1;
    } else {
        if (a4 != 1 == v4) {
            // 0x2d30f
            int64_t result; // 0x2d2f7
            return result;
        }
        int64_t v6 = (v4 ? -4 : 4) + a1; // 0x2d2fe
        *(char *)v6 = (char)v3;
        int64_t result2 = __asm_in_133(-93); // 0x2d306
        char * v7 = (char *)result2; // 0x2d30b
        char v8 = *v7; // 0x2d30b
        char v9 = v8 + 1; // 0x2d30b
        *v7 = v9;
        v2 = -0x195e;
        v1 = v6;
        if (v9 < 0 == (v9 & (v8 ^ -128)) < 0 != v9 != 0) {
            // 0x2d30f
            return result2;
        }
    }
    // 0x2d32f
    __asm_hlt();
    __asm_in(v2);
    return (int64_t)(-66 * *(int32_t *)(v1 + 0x3be7ffb4));
}

// Address range: 0x2d353 - 0x2d403
int64_t function_2d353(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    char * v1 = (char *)(a4 - 0xe3e9c0b); // 0x2d353
    bool v2; // 0x2d353
    *v1 = (char)v2 - (char)(a4 / 256) + *v1;
    char * v3 = (char *)(a1 + 83 + 2 * a3); // 0x2d359
    *v3 = *v3 + (char)a4;
    int64_t v4; // 0x2d353
    uint32_t v5 = (int32_t)v4 ^ 0x55b95eef; // 0x2d361
    int64_t result = v5; // 0x2d361
    if (a4 != 1 != (v5 == 0)) {
        // 0x2d368
        return result;
    }
    uint64_t v6 = a1 & 0xffffff00; // 0x2d3e3
    int64_t result2 = (a1 + 58) % 256 | v6; // 0x2d3e3
    int32_t * v7 = (int32_t *)(v4 & -256 | 241); // 0x2d3e5
    uint32_t v8 = *v7; // 0x2d3e5
    int32_t v9 = result2; // 0x2d3e5
    uint32_t v10 = v8 + v9; // 0x2d3e5
    *v7 = v10;
    char * v11 = (char *)(a2 - 86); // 0x2d3e8
    unsigned char v12 = *v11; // 0x2d3e8
    char v13 = v10 < v8; // 0x2d3e8
    unsigned char v14 = v13 + (char)(v6 / 256); // 0x2d3e8
    char v15 = v12 - v14; // 0x2d3e8
    unsigned char v16 = v15 - v13; // 0x2d3e8
    *v11 = v15;
    if (((v16 ^ v12) & (v14 ^ v12)) >= 0) {
        // 0x2d368
        return result2;
    }
    int32_t v17 = v10 < v8 ? v14 != -1 | v12 < v16 : v12 < v14 ? -0x57312ba7 : -0x57312ba8; // 0x2d3ef
    uint32_t result3 = (v9 & -0xff01 | (int32_t)&g5) - v17; // 0x2d3ef
    if (a4 != 2 == result3 == 0) {
        // 0x2d3de
        return result3;
    }
    // 0x2d3f7
    return __asm_wait(result, a2) & -134;
}

// Address range: 0x2d406 - 0x2d408
int64_t function_2d406(int64_t a1) {
    // 0x2d406
    int64_t v1; // 0x2d406
    return v1 & 0xffffffff;
}

// Address range: 0xc3f26 - 0xc3f70
int64_t function_c3f26(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xc3f26
    int64_t v1; // 0xc3f26
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    uint64_t v3 = v2 + 33; // 0xc3f28
    int64_t v4 = v2 & -256; // 0xc3f28
    unsigned char v5 = *(char *)(v3 % 256 | v4) | (char)v3; // 0xc3f2a
    int64_t v6 = v4 | (int64_t)v5; // 0xc3f2a
    char * v7 = (char *)v6; // 0xc3f2c
    *v7 = 2 * v5 + *v7;
    int64_t v8 = v6 & -0xff01 | (v2 ^ 256 * v1) & 0xff00; // 0xc3f30
    unsigned char v9 = *(char *)v8 | v5; // 0xc3f32
    int64_t v10 = v8 & -256; // 0xc3f32
    char * v11 = (char *)(v10 | (int64_t)v9); // 0xc3f34
    char v12 = 2 * v9 + *v11; // 0xc3f36
    *v11 = v12;
    unsigned char v13 = v12 | v9; // 0xc3f3a
    int64_t v14 = v10 | (int64_t)v13; // 0xc3f3a
    char * v15 = (char *)v14; // 0xc3f3c
    *v15 = 2 * v13 + *v15;
    *(char *)0x200000000000aed = v13;
    int16_t v16 = a3; // 0xc3f49
    __asm_out(v16, (int32_t)v14);
    unsigned char v17 = *v15 | v13; // 0xc3f4a
    char * v18 = (char *)(v10 | (int64_t)v17); // 0xc3f4c
    *v18 = 2 * v17 + *v18;
    *(int32_t *)a1 = __asm_insd(v16);
    unsigned char v19 = *v18 | v17; // 0xc3f51
    char * v20 = (char *)(v10 | (int64_t)v19); // 0xc3f54
    *v20 = 2 * v19 + *v20;
    __asm_iretd();
    int64_t v21 = __asm_hlt(); // 0xc3f59
    unsigned char v22 = *(char *)v21 | (char)v21; // 0xc3f5a
    int64_t v23 = v21 & -256; // 0xc3f5a
    char * v24 = (char *)(v23 | (int64_t)v22); // 0xc3f5c
    char v25 = 2 * v22 + *v24; // 0xc3f5e
    *v24 = v25;
    unsigned char v26 = v25 | v22; // 0xc3f62
    char * v27 = (char *)(v23 | (int64_t)v26); // 0xc3f64
    char v28 = 2 * v26 + *v27; // 0xc3f66
    *v27 = v28;
    unsigned char v29 = v28 | v26; // 0xc3f6a
    int64_t result = v23 | (int64_t)v29; // 0xc3f6a
    char * v30 = (char *)result; // 0xc3f6c
    *v30 = 2 * v29 + *v30;
    return result;
}

// Address range: 0xc3f92 - 0xc3fa3
int64_t function_c3f92(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xc3f92
    int64_t v1; // 0xc3f92
    int64_t v2 = v1 & 0xffffffff; // 0xc3f92
    char * v3 = (char *)v2; // 0xc3f94
    *v3 = 2 * (char)v1 + *v3;
    int64_t v4; // 0xc3f92
    *(char *)a2 = *(char *)&v4 ^ (char)a4;
    uint32_t v5 = *(int32_t *)v2 | (int32_t)v1; // 0xc3f9a
    int64_t result = v5; // 0xc3f9a
    char * v6 = (char *)result; // 0xc3f9c
    *v6 = 2 * (char)v5 + *v6;
    return result;
}

// Address range: 0xc414b - 0xc4152
int64_t function_c414b(void) {
    // 0xc414b
    int64_t v1; // 0xc414b
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t result; // 0xc414b
    int64_t v3 = result;
    *(char *)v3 = *(char *)&result + (char)v3;
    uint64_t v4 = result;
    *(char *)v4 = *(char *)&result + (char)(v4 / 256);
    return result;
}

// Address range: 0xc421a - 0xc4221
int64_t function_c421a(void) {
    // 0xc421a
    int64_t result; // 0xc421a
    char * v1 = (char *)result; // 0xc421c
    *v1 = 2 * (char)result + *v1;
    return result;
}

// Address range: 0x212042 - 0x21211e
int64_t function_212042(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x212042
    return function_c823b(a1);
}

// Address range: 0x21211e - 0x212274
int64_t function_21211e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x21211e
    return function_c823b(a1);
}

// Address range: 0x212274 - 0x212397
int64_t function_212274(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x212274
    int64_t v1; // bp-48, 0x212274
    v1 = (int64_t)&v1 + 16;
    return function_c823b(a1);
}

// Address range: 0x33c842 - 0x33c843
int64_t function_33c842(void) {
    // 0x33c842
    int64_t result; // 0x33c842
    return result;
}

// Address range: 0x33c845 - 0x33c846
int64_t function_33c845(void) {
    // 0x33c845
    int64_t result; // 0x33c845
    return result;
}

// Address range: 0x33c8d0 - 0x33c8d6
int64_t function_33c8d0(void) {
    // 0x33c8d0
    int64_t result; // 0x33c8d0
    int32_t * v1 = (int32_t *)(result + 47); // 0x33c8d0
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x33c92d - 0x33c938
int64_t function_33c92d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x33c92d
    return unknown_1f734135(a1, a2, a3);
}

// Address range: 0x33c958 - 0x33c96e
int64_t function_33c958(int64_t a1) {
    // 0x33c958
    *(char *)0x5c0cec789e001e8 = (char)__asm_in_133(105);
    return unknown_ffffffffa4848b6c();
}

// Address range: 0x33c978 - 0x33c979
int64_t function_33c978(void) {
    // 0x33c978
    int64_t result; // 0x33c978
    return result;
}

// Address range: 0x33c985 - 0x33c98d
int64_t function_33c985(int64_t a1) {
    int64_t result = unknown_ffffffff83ed0b8b(a1); // 0x33c98a
    bool v1; // 0x33c985
    if (v1 || false) {
        result = function_33c978();
    }
    // 0x33c98c
    return result;
}

// Address range: 0x33c9d1 - 0x33c9f0
int64_t function_33c9d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    char * v2 = (char *)(a3 + 0x35459382); // 0x33c9d7
    unsigned char v3 = *v2; // 0x33c9d7
    unsigned char v4 = (char)a4 % 32; // 0x33c9d7
    v1 = a4;
    int64_t v5; // 0x33c9d1
    bool v6 = (int32_t)v5 > 0x31980cbf; // 0x33c9d7
    if (v4 != 0) {
        unsigned char v7 = v3 >> 8 - v4 | v3 << v4; // 0x33c9d7
        *v2 = v7;
        v6 = v7 % 2 != 0;
    }
    int64_t v8 = v5 + 0xce67f340; // 0x33c9d1
    int64_t result = (v8 - v1 / 256 + (int64_t)v6) % 256 | v8 & 0xffffff00; // 0x33c9dd
    int32_t * v9 = (int32_t *)(result - 123); // 0x33c9df
    *v9 = *v9 + (int32_t)result;
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a2;
    return result;
}

// Address range: 0x33ca01 - 0x33ca0b
int64_t function_33ca01(int64_t a1) {
    // 0x33ca01
    int64_t result; // 0x33ca01
    int32_t * v1 = (int32_t *)(result - 0xc888d5a); // 0x33ca01
    uint32_t v2 = *v1; // 0x33ca01
    *v1 = v2 / 0x10000000 | 16 * v2;
    return result;
}

// Address range: 0x33ca2a - 0x33ca31
int64_t function_33ca2a(int64_t a1) {
    // 0x33ca2a
    int64_t v1; // 0x33ca2a
    return function_ffffffff858bcbce((int32_t)v1 + (int32_t)a1);
}

// Address range: 0x33ca61 - 0x33ca62
int64_t function_33ca61(void) {
    // 0x33ca61
    int64_t result; // 0x33ca61
    return result;
}

// Address range: 0x33ca65 - 0x33cb1a
int64_t function_33ca65(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    function_392a6b();
    unknown_c3f3f7a();
    bool v2; // 0x33ca65
    if (a4 != 0) {
        // 0x33ca81
        unknown_ffffffffb34e7689();
        int64_t v3; // 0x33ca65
        *(char *)a3 = (char)((uint64_t)v3 / 256) + (char)a3;
        int64_t v4 = v2 ? -4 : 4; // 0x33ca8d
        return function_4935b2fd(v4 + a1, v1 + v4);
    }
    int64_t v5 = unknown_7a0bff(); // 0x33caf9
    __asm_rcl(*(int32_t *)(a1 - 0x17b0e574));
    int32_t * v6 = (int32_t *)(v5 + 0x5afec180); // 0x33cb07
    *v6 = *v6 + (int32_t)a1;
    *(int32_t *)a1 = *(int32_t *)&v1;
    int64_t v7 = v2 ? -4 : 4; // 0x33cb0d
    int64_t v8 = v7 + a1; // 0x33cb0d
    int64_t v9 = unknown_ffffffff87f8f115(v8 + (v2 ? -1 : 1), v1 + v7); // 0x33cb0f
    int64_t v10 = *(char *)v8 > (char)v5 ? 165 : 164; // 0x33cb18
    return (v9 - v10) % 256 | v9 & -256;
}

// Address range: 0x48cc52 - 0x48cc53
int64_t function_48cc52(void) {
    // 0x48cc52
    int64_t result; // 0x48cc52
    return result;
}

// Address range: 0x48cc53 - 0x48cf8b
int64_t function_48cc53(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x48cc53
    int64_t v1; // 0x48cc53
    function_5f453(v1, v1, v1);
    int64_t v2; // bp+184, 0x48cc53
    int64_t v3 = (int64_t)&v2; // 0x48cc71
    function_5f453(v3, v1, (int64_t)"] ");
    function_5f453(v1, v3, (int64_t)&g2);
    function_5f453(v1, v1, v1);
    int64_t v4; // bp+208, 0x48cc53
    int64_t v5 = (int64_t)&v4; // 0x48ccb2
    function_5f453(v5, v1, (int64_t)"] ");
    char * format; // bp+104, 0x48cc53
    function_5f453((int64_t)&format, v5, v1);
    function_2508e(&v4);
    function_2508e((int64_t *)v1);
    function_2508e((int64_t *)v1);
    function_2508e(&v2);
    function_2508e((int64_t *)v1);
    function_2508e((int64_t *)a7);
    function_2508e((int64_t *)a6);
    function_2508e((int64_t *)a5);
    function_2508e((int64_t *)a4);
    function_2508e((int64_t *)a3);
    function_2508e((int64_t *)v1);
    function_2508e((int64_t *)a2);
    function_2508e((int64_t *)a1);
    int64_t v6 = 32; // bp+216, 0x48cd77
    int64_t str; // bp+376, 0x48cc53
    uint32_t chars_printed = eac_retdec_vsnprintf((char *)&str, (int32_t)&g1, format, (int64_t)&v6); // 0x48cda5
    if (chars_printed >= 1) {
        int64_t v7 = function_24ded(&str); // 0x48cdb5
        int64_t v8; // 0x48cc53
        if (v7 != 0) {
            int64_t v9 = function_48c82e(v7, 0); // 0x48cdca
            int64_t v10 = v9 + 24; // 0x48cdcf
            function_25a28(v10, &str, v7);
            function_2562c(v9, v7);
            v8 = v10;
        }
        // 0x48cdfe
        v4 = v8;
        int64_t v11 = function_4efd30(24); // 0x48ce0b
        *(int32_t *)(v11 + 8) = (int32_t)v1;
        int64_t v12 = v4 - 8; // 0x48ce21
        int32_t * v13 = (int32_t *)v12; // 0x48ce21
        int32_t v14 = *v13; // 0x48ce21
        int64_t v15 = v4 - 24; // 0x48ce24
        int64_t v16; // 0x48cc53
        if (v14 < 0) {
            // 0x48ce4d
            v16 = function_48ca0e(v15, 0, v12, v14);
        } else {
            // 0x48ce30
            v16 = v4;
            if (v15 != (int64_t)g23) {
                // 0x48ce39
                *v13 = v14 + 1;
                v16 = v4;
            }
        }
        // 0x48ce54
        *(int64_t *)(v11 + 16) = v16;
        int64_t v17 = 0x48c9d0; // bp+240, 0x48ce80
        int64_t v18; // bp+272, 0x48cc53
        function_256a2(&v18, &v17, 2);
        function_221a8(&v17);
        function_2508e(&v4);
        function_7214c(v1 + 56, &v18);
        function_25018(&v18);
    }
    // 0x48cf57
    function_2508e((int64_t *)&format);
    int64_t result = 0; // 0x48cf72
    if (v1 != __readfsqword(40)) {
        // 0x48cf74
        __stack_chk_fail();
        result = (int64_t)&g26;
    }
    // 0x48cf79
    return result;
}

// Address range: 0x48cf8c - 0x48cfa2
int64_t function_48cf8c(int64_t a1) {
    int64_t v1 = a1 + 56; // 0x48cf8d
    function_7260a(v1);
    return function_7260a(v1);
}

// Address range: 0x4c4b33 - 0x4c4b5b
int64_t function_4c4b33(int32_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4c4b33
    int64_t result; // 0x4c4b33
    return result;
}

// Address range: 0x4c4b60 - 0x4c4b88
int64_t function_4c4b60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4c4b60
    return 0xffffbf80;
}

// Address range: 0x4c4b90 - 0x4c4bb1
int64_t function_4c4b90(int64_t a1) {
    int64_t v1 = a1; // 0x4c4b97
    *(char *)v1 = 0;
    while (v1 != a1 + 31) {
        // 0x4c4ba0
        v1++;
        *(char *)v1 = 0;
    }
    // 0x4c4bac
    free((int64_t *)a1);
    return (int64_t)&g26;
}

// Address range: 0x4c4bc0 - 0x4c4bfc
int64_t function_4c4bc0(void) {
    int64_t * mem = calloc(1, 32); // 0x4c4bce
    int64_t result = (int64_t)mem; // 0x4c4bce
    if (mem != NULL) {
        // 0x4c4bd8
        *mem = 0;
        *(int64_t *)(result + 8) = 0;
        *(int64_t *)(result + 16) = 0;
        *(int64_t *)(result + 24) = 0;
    }
    // 0x4c4bf7
    return result;
}

// Address range: 0x4c4c00 - 0x4c4c12
int64_t function_4c4c00(int64_t a1) {
    // 0x4c4c00
    function_4d2a10();
    free((int64_t *)a1);
    return (int64_t)&g26;
}

// Address range: 0x4c4c20 - 0x4c4c45
int64_t function_4c4c20(void) {
    int64_t * mem = calloc(1, 344); // 0x4c4c2b
    int64_t result = (int64_t)mem; // 0x4c4c2b
    if (mem != NULL) {
        // 0x4c4c38
        function_4d2a00(result);
    }
    // 0x4c4c40
    return result;
}

// Address range: 0x4c4c50 - 0x4c4c55
int64_t function_4c4c50(void) {
    // 0x4c4c50
    int64_t result; // 0x4c4c50
    return result;
}

// Address range: 0x4d3413 - 0x4d34cf
int64_t function_4d3413(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4d3413
    g24 = 0;
    int64_t v1; // 0x4d3413
    if ((int32_t)function_4d2e40(a1, v1, a3, v1, v1, v1) != 0) {
        function_4d32f6();
    }
    // 0x4d3430
    int64_t v2; // bp+80, 0x4d3413
    if ((int32_t)function_4d2d40(&v2, 0, 0) != 0) {
        function_4d3395();
    }
    // 0x4d3446
    int64_t str; // 0x4d3413
    if ((int32_t)function_4d30d0(&v2, &str, 80) != 0) {
        function_4d3395();
    }
    // 0x4d3460
    if ((int32_t)function_4d30d0(&v2, &str, 80) != 0) {
        function_4d3395();
    }
    // 0x4d347a
    if (memcmp(&str, &g4, 80) != 0) {
        function_4d3395();
    }
    // 0x4d3496
    function_4d30e0(&v2);
    function_4d30e0(&v2);
    if ((int32_t)v1 == 0) {
        function_4d335f();
    }
    // 0x4d34b4
    puts("passed");
    putchar(10);
    return function_4d335f();
}

// Address range: 0x4d34d0 - 0x4d352d
int64_t function_4d34d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4d34d0
    puts("passed");
    printf("  HMAC_DRBG (PR = False) : ");
    int64_t v1; // bp+80, 0x4d34d0
    function_4d2af0(&v1);
    g24 = 0;
    int64_t v2; // 0x4d34d0
    int64_t v3 = function_4d2e40((int64_t)&v1, v2, 0x4d2aa0, (int64_t)&g3, 0, 0); // 0x4d351b
    int64_t result = v3; // 0x4d3522
    if ((int32_t)v3 != 0) {
        result = function_4d334e();
    }
    // 0x4d3528
    return result;
}

// Address range: 0x4daa69 - 0x4dadcc
int64_t function_4daa69(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, char a8, unsigned char a9, int64_t a10) {
    char v1 = a7;
    char v2 = v1 | a8; // 0x4daab8
    __readfsqword(40);
    if (a2 == 0) {
        // 0x4dadd2
        return (int64_t)v2 | (int64_t)(a7 & -256);
    }
    int128_t v3 = __asm_movdqu(*(int128_t *)(a4 + 16)); // 0x4dab02
    int64_t v4; // 0x4daa69
    int128_t v5 = __asm_movdqu(*(int128_t *)&v4); // 0x4dab07
    __asm_movaps(v3);
    int32_t v6 = __asm_movaps(v5); // 0x4dab0f
    int32_t v7 = v6; // bp-104, 0x4dab0f
    uint64_t v8 = __asm_movaps(v3); // 0x4dab14
    v7 = v6;
    if (a3 != 0) {
        int64_t v9 = a9; // 0x4daa8a
        int64_t v10 = v9; // 0x4dab53
        char v11 = v2; // 0x4dab53
        if (a3 != 1) {
            function_4d9310((int64_t *)&v7, v9, 64, a5, v2);
            int64_t v12 = v9 + 64; // 0x4dab43
            int64_t v13 = a3 - 1; // 0x4dab47
            char v14 = v1; // 0x4dab53
            int64_t v15 = v12; // 0x4dab53
            int64_t v16 = v13; // 0x4dab53
            v10 = v12;
            v11 = v1;
            while (v13 != 1) {
                // 0x4dab30
                function_4d9310((int64_t *)&v7, v15, 64, a5, v14);
                v12 = v15 + 64;
                v13 = v16 - 1;
                v14 = v1;
                v15 = v12;
                v16 = v13;
                v10 = v12;
                v11 = v1;
            }
        }
        // 0x4dab55
        function_4d9310((int64_t *)&v7, v10, 64, a5, v11 | a9);
    }
    uint32_t v17 = v7; // 0x4dab96
    int32_t v18; // 0x4daa69
    int128_t v19 = __asm_movdqa((int128_t)(256 * (256 * (256 * (256 * (int64_t)v18 | (int64_t)(v17 / 0x1000000)) | (int64_t)(v17 / 0x10000 % 256)) | (int64_t)(v17 / 256 % 256)) | (int64_t)(v17 % 256))); // 0x4dad11
    __asm_movups(*(int128_t *)a10, v19);
    int128_t v20 = __asm_movdqa((int128_t)(v8 & 0xff000000 | 0x100000000 * (int64_t)(uint32_t)v18 | v8 & 0xff0000 | v8 & 0xff00 | v8 % 256)); // 0x4dadaa
    __asm_movups(*(int128_t *)(a10 + 16), v20);
    return a10 + 32;
}

// Address range: 0x4e9779 - 0x4e977a
int64_t function_4e9779(void) {
    // 0x4e9779
    int64_t result; // 0x4e9779
    return result;
}

// Address range: 0x4e97ab - 0x4e97ac
int64_t function_4e97ab(void) {
    // 0x4e97ab
    int64_t result; // 0x4e97ab
    return result;
}

// Address range: 0x4e97c6 - 0x4e97cd
int64_t function_4e97c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x4e97c6
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(a2 + 15); // 0x4e97c6
        *v2 = *v2 << v1;
    }
    int64_t result; // 0x4e97c6
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x4e97da - 0x4e97db
int64_t function_4e97da(void) {
    // 0x4e97da
    int64_t result; // 0x4e97da
    return result;
}

// Address range: 0x4e97de - 0x4e97e0
int64_t function_4e97de(void) {
    // 0x4e97de
    return function_4e97ab();
}

// Address range: 0x4e97f5 - 0x4e97fc
int64_t function_4e97f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x4e97f5
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(a2 + 15); // 0x4e97f5
        *v2 = *v2 << v1;
    }
    int64_t result; // 0x4e97f5
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x4e980d - 0x4e980f
int64_t function_4e980d(void) {
    // 0x4e980d
    return function_4e97da();
}

// Address range: 0x4e9818 - 0x4e9819
int64_t function_4e9818(void) {
    // 0x4e9818
    int64_t result; // 0x4e9818
    return result;
}

// Address range: 0x4e9833 - 0x4e983a
int64_t function_4e9833(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x4e9833
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(a2 + 15); // 0x4e9833
        *v2 = *v2 << v1;
    }
    int64_t result; // 0x4e9833
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x4e984b - 0x4e984d
int64_t function_4e984b(void) {
    // 0x4e984b
    return function_4e9818();
}

// Address range: 0x4e9862 - 0x4e9869
int64_t function_4e9862(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x4e9862
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(a2 + 15); // 0x4e9862
        *v2 = *v2 << v1;
    }
    int64_t result; // 0x4e9862
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x4e9a2c - 0x4e9a30
int64_t function_4e9a2c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4e9a2c
    int64_t result; // 0x4e9a2c
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x4e9a41 - 0x4e9a43
int64_t function_4e9a41(void) {
    // 0x4e9a41
    return function_4e9a0e();
}

// Address range: 0x4fcd85 - 0x4fcd89
int64_t function_4fcd85(void) {
    // 0x4fcd85
    int64_t result; // 0x4fcd85
    char * v1 = (char *)(result + 93); // 0x4fcd85
    *v1 = *v1 | (char)result;
    return result;
}

// Address range: 0x4fcd90 - 0x4fd0c4
int64_t function_4fcd90(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x4fcd9f
    int64_t v2 = result; // 0x4fcdb2
    int64_t v3; // 0x4fcd90
    int64_t result2; // 0x4fcd90
    int64_t v4; // 0x4fcd90
    int64_t v5; // 0x4fcd90
    int64_t v6; // 0x4fcd90
    int64_t v7; // 0x4fcd90
    int64_t v8; // 0x4fcf9d
    if (result == a2) {
        goto lab_0x4fcf09;
    } else {
        int32_t * v9 = (int32_t *)(a2 + 192); // 0x4fcdb8
        uint32_t v10 = *v9; // 0x4fcdb8
        int64_t v11 = result + 64; // 0x4fcdbe
        int64_t v12 = v11; // 0x4fcdcb
        int64_t v13; // 0x4fcd90
        if (v10 > 8) {
            int64_t v14 = function_4eec00(0x100000000 * (int64_t)v10 >> 28); // 0x4fcf37
            uint32_t v15 = *v9; // 0x4fcf3c
            int64_t v16 = (int64_t)v15 - 1; // 0x4fcf46
            v13 = v16;
            v12 = v14;
            int64_t v17 = v14; // 0x4fcf4a
            if (v15 >= 1) {
                int64_t v18 = v16;
                int64_t v19 = v18 - 1; // 0x4fcf50
                *(int64_t *)v17 = 0;
                *(int64_t *)(v17 + 8) = 0;
                v13 = v19;
                v12 = v14;
                v17 += 16;
                while (v18 != 0) {
                    // 0x4fcf50
                    v18 = v19;
                    v19 = v18 - 1;
                    *(int64_t *)v17 = 0;
                    *(int64_t *)(v17 + 8) = 0;
                    v13 = v19;
                    v12 = v14;
                    v17 += 16;
                }
            }
        }
        int64_t v20 = *(int64_t *)(a2 + 40); // 0x4fcdd1
        if (v20 != 0) {
            int32_t * v21 = (int32_t *)(v20 + 20);
            *v21 = *v21 + 1;
        }
        // 0x4fcdee
        function_54ce50(result, 0);
        int64_t * v22 = (int64_t *)(result + 200); // 0x4fcdf8
        int64_t v23 = *v22; // 0x4fcdf8
        if (v23 != v11) {
            if (v23 != 0) {
                // 0x4fce09
                function_4eeb40(v23);
            }
            // 0x4fce0e
            *v22 = 0;
        }
        // 0x4fce19
        function_54ceb0(result);
        uint32_t v24 = *v9; // 0x4fce21
        int64_t v25 = v24; // 0x4fce21
        *(int64_t *)(result + 40) = v20;
        v4 = v13;
        if (v24 >= 1) {
            int64_t v26 = 0;
            int128_t v27 = __asm_movdqu(*(int128_t *)(v26 + *(int64_t *)(a2 + 200))); // 0x4fce48
            __asm_movups(*(int128_t *)(v26 + v12), v27);
            int64_t v28 = v26 + 16; // 0x4fce52
            v4 = v28;
            while ((16 * v25 + 0xffffffff0 & 0xffffffff0) != v26) {
                // 0x4fce48
                v26 = v28;
                v27 = __asm_movdqu(*(int128_t *)(v26 + *(int64_t *)(a2 + 200)));
                __asm_movups(*(int128_t *)(v26 + v12), v27);
                v28 = v26 + 16;
                v4 = v28;
            }
        }
        char * v29 = (char *)(a2 + 228); // 0x4fce5e
        *v22 = v12;
        *(int32_t *)(result + 192) = v24;
        *(int32_t *)(result + 24) = *(int32_t *)(a2 + 24);
        *(int64_t *)(result + 16) = *(int64_t *)(a2 + 16);
        *(int64_t *)(result + 8) = *(int64_t *)(a2 + 8);
        *(int64_t *)(result + 216) = *(int64_t *)(a2 + 216);
        if (*v29 == 0) {
            int64_t v30 = *(int64_t *)(a2 + 240); // 0x4fcf78
            v5 = v4;
            v7 = v25;
            result2 = 0;
            if (v30 == 0) {
                goto lab_0x4fcfdf;
            } else {
                int64_t v31 = *(int64_t *)v30; // 0x4fcf84
                *v29 = 1;
                v8 = v31 & 0xffffffff;
                *(int32_t *)(a2 + 224) = (int32_t)v31;
                v3 = v8;
                v6 = 32;
                if (*(char *)(result + 228) != 0) {
                    goto lab_0x4fcead;
                } else {
                    goto lab_0x4fcfac;
                }
            }
        } else {
            int64_t v32 = (int64_t)*(int32_t *)(a2 + 224); // 0x4fcea0
            v3 = v32;
            v6 = v25;
            v8 = v32;
            if (*(char *)(result + 228) == 0) {
                goto lab_0x4fcfac;
            } else {
                goto lab_0x4fcead;
            }
        }
    }
  lab_0x4fcf09:
    // 0x4fcf09
    if (v1 == __readfsqword(40)) {
        // 0x4fcf20
        return result;
    }
    // 0x4fcfda
    __stack_chk_fail();
    int64_t v33; // 0x4fcd90
    v5 = v33;
    v7 = v2;
    result2 = result;
    goto lab_0x4fcfdf;
  lab_0x4fcfdf:
    // 0x4fcfdf
    function_5423f0(result2);
    int64_t v34 = __readfsqword(40); // 0x4fd00f
    int64_t * v35 = (int64_t *)result2; // 0x4fd01f
    function_5659d0(v35, v7 + 208);
    int64_t v36; // bp-112, 0x4fcd90
    function_568180(&v36, v7, v5);
    function_566180(&v36);
    function_4fcce0(v7, v5);
    int64_t v37 = *(int64_t *)(v7 + 232); // 0x4fd045
    if (v37 != 0) {
        int64_t v38 = v37 + 56; // 0x4fd051
        function_5659d0(&v36, v38);
        function_566100(v38, (int64_t *)v5);
        function_566180(&v36);
    }
    // 0x4fd07f
    if (v34 == __readfsqword(40)) {
        // 0x4fcf20
        return result2;
    }
    // 0x4fd09f
    __stack_chk_fail();
    function_566180(&v36);
    while (true) {
        // 0x4fd0af
        function_566180(v35);
        _Unwind_Resume((struct _Unwind_Exception *)&g26);
    }
  lab_0x4fcfac:
    // 0x4fcfac
    v5 = v4;
    v7 = v6;
    result2 = 0;
    if (*(int64_t *)(result + 240) == 0) {
        goto lab_0x4fcfdf;
    } else {
        // 0x4fcfb8
        *(char *)(result + 228) = 1;
        v3 = v8;
        goto lab_0x4fcead;
    }
  lab_0x4fcead:
    // 0x4fcead
    *(int32_t *)(result + 224) = (int32_t)v3;
    int64_t v39 = result + 208; // 0x4fcebe
    int64_t v40; // bp-56, 0x4fcd90
    function_5659d0(&v40, a2 + 208);
    function_566100(v39, &v40);
    function_566180(&v40);
    function_4fcce0(result, v39);
    function_54ce50(result, 2);
    uint32_t v41 = *(int32_t *)(result + 32); // 0x4fcefb
    *(int32_t *)(result + 28) = *(int32_t *)(a2 + 28);
    function_4fca70(result, v41, v4);
    v33 = v4;
    v2 = v41;
    goto lab_0x4fcf09;
}

// Address range: 0x50a0d8 - 0x50a2dc
// From class:    std::__timepunct_cache<wchar_t>
// Type:          constructor
int64_t function_50a0d8(int64_t a1, int64_t a2) {
    // 0x50a0d8
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    *(int32_t *)(a1 + 8) = (int32_t)(a2 != 0);
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 48) = 0;
    *(int64_t *)(a1 + 56) = 0;
    *(int64_t *)(a1 + 64) = 0;
    *(int64_t *)(a1 + 72) = 0;
    *(int64_t *)(a1 + 80) = 0;
    *(int64_t *)a1 = (int64_t)&g8;
    *(int64_t *)(a1 + 88) = 0;
    *(int64_t *)(a1 + 96) = 0;
    *(int64_t *)(a1 + 104) = 0;
    *(int64_t *)(a1 + 112) = 0;
    *(int64_t *)(a1 + 120) = 0;
    *(int64_t *)(a1 + 128) = 0;
    *(int64_t *)(a1 + 136) = 0;
    *(int64_t *)(a1 + 144) = 0;
    *(int64_t *)(a1 + 152) = 0;
    *(int64_t *)(a1 + 160) = 0;
    *(int64_t *)(a1 + 168) = 0;
    *(int64_t *)(a1 + 176) = 0;
    *(int64_t *)(a1 + 184) = 0;
    *(int64_t *)(a1 + 192) = 0;
    *(int64_t *)(a1 + 200) = 0;
    *(int64_t *)(a1 + 208) = 0;
    *(int64_t *)(a1 + 216) = 0;
    *(int64_t *)(a1 + 224) = 0;
    *(int64_t *)(a1 + 232) = 0;
    *(int64_t *)(a1 + 240) = 0;
    *(int64_t *)(a1 + 248) = 0;
    *(int64_t *)(a1 + 256) = 0;
    *(int64_t *)(a1 + 264) = 0;
    *(int64_t *)(a1 + 272) = 0;
    *(int64_t *)(a1 + 280) = 0;
    *(int64_t *)(a1 + 288) = 0;
    *(int64_t *)(a1 + 296) = 0;
    *(int64_t *)(a1 + 304) = 0;
    *(int64_t *)(a1 + 312) = 0;
    *(int64_t *)(a1 + 320) = 0;
    *(int64_t *)(a1 + 328) = 0;
    *(int64_t *)(a1 + 336) = 0;
    *(int64_t *)(a1 + 344) = 0;
    *(int64_t *)(a1 + 352) = 0;
    *(int64_t *)(a1 + 360) = 0;
    *(int64_t *)(a1 + 368) = 0;
    *(int64_t *)(a1 + 376) = 0;
    *(int64_t *)(a1 + 384) = 0;
    *(char *)(a1 + 392) = 0;
    return (int64_t)&g8;
}

// Address range: 0x50a2e0 - 0x50a2fa
// From class:    std::time_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          constructor
int64_t function_50a2e0(int64_t a1, int64_t a2) {
    // 0x50a2e0
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a2 != 0);
    *(int64_t *)a1 = (int64_t)&g9;
    return (int64_t)&g9;
}

// Address range: 0x50a300 - 0x50a31c
int64_t function_50a300(int64_t result, char a2, char a3) {
    // 0x50a300
    return result;
}

// Address range: 0x50a320 - 0x50a33a
// From class:    std::time_put_byname<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          constructor
int64_t function_50a320(int64_t a1, int64_t a2, int64_t a3) {
    // 0x50a320
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a3 != 0);
    *(int64_t *)a1 = (int64_t)&g10;
    return (int64_t)&g10;
}

// Address range: 0x50a340 - 0x50a35a
// From class:    std::time_put_byname<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          constructor
int64_t function_50a340(int64_t a1, int64_t a2, int64_t a3) {
    // 0x50a340
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a3 != 0);
    *(int64_t *)a1 = (int64_t)&g10;
    return (int64_t)&g10;
}

// Address range: 0x50a360 - 0x50a37a
// From class:    std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          constructor
int64_t function_50a360(int64_t a1, int64_t a2) {
    // 0x50a360
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a2 != 0);
    *(int64_t *)a1 = (int64_t)&g11;
    return (int64_t)&g11;
}

// Address range: 0x50a380 - 0x50a386
int64_t function_50a380(int64_t result) {
    // 0x50a380
    return result;
}

// Address range: 0x50a390 - 0x50a396
int64_t function_50a390(int64_t result) {
    // 0x50a390
    return result;
}

// Address range: 0x50a3a0 - 0x50a3a6
int64_t function_50a3a0(int64_t result) {
    // 0x50a3a0
    return result;
}

// Address range: 0x50a3b0 - 0x50a3b6
int64_t function_50a3b0(int64_t result) {
    // 0x50a3b0
    return result;
}

// Address range: 0x50a3c0 - 0x50a3c6
int64_t function_50a3c0(int64_t result) {
    // 0x50a3c0
    return result;
}

// Address range: 0x50a3d0 - 0x50a3d6
int64_t function_50a3d0(int64_t result) {
    // 0x50a3d0
    return result;
}

// Address range: 0x50a3e0 - 0x50a3fa
// From class:    std::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          constructor
int64_t function_50a3e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x50a3e0
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a3 != 0);
    *(int64_t *)a1 = (int64_t)&g12;
    return (int64_t)&g12;
}

// Address range: 0x50a400 - 0x50a41a
// From class:    std::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          constructor
int64_t function_50a400(int64_t a1, int64_t a2, int64_t a3) {
    // 0x50a400
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a3 != 0);
    *(int64_t *)a1 = (int64_t)&g12;
    return (int64_t)&g12;
}

// Address range: 0x544e11 - 0x544fba
int64_t function_544e11(char a1) {
    // 0x544e11
    function_5433f0();
    int64_t v1; // 0x544e11
    int64_t v2; // 0x544e11
    int64_t v3; // 0x544e11
    int64_t v4; // 0x544eef
    if (a1 == 0) {
        goto lab_0x544e8e;
    } else {
        int64_t * v5 = (int64_t *)(v3 - 24); // 0x544e2b
        int64_t v6 = *v5; // 0x544e2b
        int64_t v7 = v6 + v3; // 0x544e2f
        if (*(int64_t *)(v7 + 248) == 0) {
            goto lab_0x544f38;
        } else {
            char * v8 = (char *)(v7 + 225); // 0x544e42
            if (*v8 == 0) {
                int64_t v9 = *(int64_t *)(v7 + 240); // 0x544ec0
                if (v9 == 0) {
                    goto lab_0x544f61;
                } else {
                    // 0x544ed0
                    char v10; // 0x544ed7
                    if (*(char *)(v9 + 56) == 0) {
                        // branch -> 0x544edf
                    } else {
                        // 0x544ed7
                        v10 = *(char *)(v9 + 89);
                    }
                    // 0x544edf
                    v1 = v10;
                    *(char *)(v7 + 224) = v10;
                    *v8 = 1;
                    v4 = *v5;
                    v2 = v4 + v3;
                    goto lab_0x544e53;
                }
            } else {
                // 0x544e4b
                v4 = v6;
                v2 = v7;
                v1 = (int64_t)*(char *)(v7 + 224);
                goto lab_0x544e53;
            }
        }
    }
  lab_0x544e8e:;
    // 0x544e8e
    int64_t v11; // 0x544e11
    int64_t result = v11;
    function_543470(v3);
    if ((v3 & 40) == __readfsqword(40)) {
        // 0x544ead
        return result;
    }
    // 0x544f33
    __stack_chk_fail();
    int64_t v12; // 0x544e11
    int64_t v13 = v12; // 0x544f33
    int64_t v14 = result; // 0x544f33
    goto lab_0x544f38;
  lab_0x544f38:;
    int64_t v15 = v14;
    int64_t v16; // 0x544e11
    int64_t v17 = function_5423f0(v16); // 0x544f38
    int64_t v18 = v13 - 1; // 0x544f3d
    int64_t v19 = v15; // 0x544f44
    int64_t v20; // 0x544e11
    if (v18 != 0) {
        goto lab_0x544f88;
    } else {
        // 0x544f46
        function_1fd40(v17);
        int64_t v21 = *(int64_t *)(*(int64_t *)v15 - 24) + v15; // 0x544f4e
        int32_t * v22 = (int32_t *)(v21 + 32); // 0x544f52
        *v22 = *v22 | 1;
        function_20a50();
        v20 = v17;
        v19 = v21;
        if (*(char *)(v21 + 28) % 2 == 0) {
            goto lab_0x544f88;
        } else {
            goto lab_0x544f61;
        }
    }
  lab_0x544f88:;
    int64_t v23 = v19;
    function_1fd40(v17);
    int64_t v24 = *(int64_t *)(*(int64_t *)v23 - 24) + v23; // 0x544f94
    int32_t * v25 = (int32_t *)(v24 + 32); // 0x544f97
    *v25 = *v25 | 1;
    int64_t v26; // 0x544e11
    if (*(char *)(v24 + 28) % 2 != 0) {
        int64_t v27 = function_20a50(); // 0x544fab
        function_20540();
        v26 = v27;
        goto lab_0x544f69;
    } else {
        // 0x544fa1
        function_20540();
        v12 = v18;
        v11 = v23;
        goto lab_0x544e8e;
    }
  lab_0x544f61:
    // 0x544f61
    v26 = function_5423f0(v20);
    goto lab_0x544f69;
  lab_0x544e53:;
    int64_t v29 = *(int64_t *)(v2 + 232); // 0x544e53
    v12 = 0;
    if (v29 == 0) {
        int64_t v30 = v4 + v3; // 0x544e80
        int32_t v31 = *(int32_t *)(v30 + 32); // 0x544e83
        function_4fc010(v30, v31 | 1, (int64_t)(v29 == 0), v2, v1, v3);
        v12 = 1;
    }
    goto lab_0x544e8e;
  lab_0x544f69:;
    int64_t v28 = v26; // 0x544e11
    while (true) {
        // 0x544f69
        function_543470(v3);
        _Unwind_Resume((struct _Unwind_Exception *)v28);
        function_20540();
        v28 = (int64_t)&g26;
    }
}

// Address range: 0x544fc0 - 0x544fc5
int64_t function_544fc0(void) {
    // 0x544fc0
    return function_544df0();
}

// Address range: 0x544fd0 - 0x544fe9
int64_t function_544fd0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x544fd0
    *(int64_t *)a1 = a2;
    int64_t v1 = *(int64_t *)(a2 - 24) + a1; // 0x544fd6
    *(int64_t *)v1 = *(int64_t *)(a2 + 8);
    return function_4fd0d0(v1, a3);
}

// Address range: 0x544ff0 - 0x545074
// From class:    std::basic_ostream<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_544ff0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 8; // 0x544ff3
    function_54cb80(v1);
    *(int64_t *)(a1 + 224) = 0;
    *(int32_t *)(a1 + 232) = 0;
    *(char *)(a1 + 236) = 0;
    *(int64_t *)(a1 + 240) = 0;
    *(int64_t *)(a1 + 248) = 0;
    *(int64_t *)(a1 + 256) = 0;
    *(int64_t *)(a1 + 264) = 0;
    *(int64_t *)v1 = (int64_t)&g15;
    *(int64_t *)a1 = (int64_t)&g14;
    return function_4fd0d0(v1, a2);
}

// Address range: 0x545074 - 0x5450b3
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_545074(int64_t a1, int64_t a2) {
    // 0x545074
    int64_t v1; // 0x545074
    *(int64_t *)(v1 + 8) = (int64_t)&g7;
    function_54cf10(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)v1 = a2;
    int64_t result = *(int64_t *)(a2 - 24); // 0x5450a6
    *(int64_t *)(result + v1) = *(int64_t *)(a2 + 8);
    return result;
}

// Address range: 0x5450c0 - 0x5450c2
int64_t function_5450c0(void) {
    // 0x5450c0
    int64_t result; // 0x5450c0
    return result;
}

// Address range: 0x5450d0 - 0x5450e5
int64_t function_5450d0(int64_t result) {
    // 0x5450d0
    return result;
}

// Address range: 0x5450f0 - 0x545105
int64_t function_5450f0(int64_t result) {
    // 0x5450f0
    return result;
}

// Address range: 0x545110 - 0x54515f
int64_t function_545110(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = *(int64_t *)(a1 + 232 + *(int64_t *)(a1 - 24)); // 0x545123
    if (*(int64_t *)v1 == result) {
        // 0x545158
        return result;
    }
    int64_t v2 = *(int64_t *)(v1 - 24) + a1; // 0x545139
    return function_4fca70(v2, *(int32_t *)(v2 + 32) | 1, result);
}

// Address range: 0x545c09 - 0x545c0b
int64_t function_545c09(void) {
    // 0x545c09
    return function_545bb9();
}

// Address range: 0x545c0b - 0x545c88
int64_t function_545c0b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x545c0b
    int64_t v1; // 0x545c0b
    int64_t v2 = v1;
    __stack_chk_fail();
    int64_t v3; // 0x545c0b
    int64_t v4; // 0x545c0b
    if (a3 != 1) {
        goto lab_0x545c56;
    } else {
        // 0x545c19
        function_1fd40((int64_t)&g26);
        int64_t v5 = *(int64_t *)(v2 - 24) + v2; // 0x545c21
        int32_t * v6 = (int32_t *)(v5 + 32); // 0x545c25
        *v6 = *v6 | 1;
        v3 = function_20a50();
        v4 = v5;
        if (*(char *)(v5 + 28) % 2 == 0) {
            goto lab_0x545c56;
        } else {
            goto lab_0x545c37;
        }
    }
  lab_0x545c56:;
    int64_t v7 = v4;
    function_1fd40((int64_t)&g26);
    int64_t v8 = *(int64_t *)(*(int64_t *)v7 - 24) + v7; // 0x545c62
    int32_t * v9 = (int32_t *)(v8 + 32); // 0x545c65
    *v9 = *v9 | 1;
    if (*(char *)(v8 + 28) % 2 == 0) {
        // 0x545c6f
        function_20540();
        return function_545bbe();
    }
    int64_t v10 = function_20a50(); // 0x545c79
    function_20540();
    v3 = v10;
    goto lab_0x545c37;
  lab_0x545c37:;
    int64_t v11 = v3; // 0x545c0b
    while (true) {
        // 0x545c37
        function_5459a0(v1);
        _Unwind_Resume((struct _Unwind_Exception *)v11);
        function_20540();
        v11 = (int64_t)&g26;
    }
}

// Address range: 0x545c90 - 0x545d9c
int64_t function_545c90(int64_t result, int64_t a2, int64_t a3) {
    // 0x545c90
    char v1; // bp-72, 0x545c90
    int64_t v2 = (int64_t)&v1; // 0x545ca9
    int64_t v3 = __readfsqword(40); // 0x545cac
    function_545920();
    if (v1 != 0) {
        int64_t v4 = *(int64_t *)(result + 232 + *(int64_t *)(v2 - 24)); // 0x545cd4
        if (*(int64_t *)v4 != a3) {
            int64_t v5 = *(int64_t *)(v4 - 24) + result; // 0x545cee
            function_4fca70(v5, *(int32_t *)(v5 + 32) | 1, a3);
        }
    }
    // 0x545cfc
    function_5459a0(v2);
    if (v3 == __readfsqword(40)) {
        // 0x545d17
        return result;
    }
    int64_t v6 = a3; // 0x545d15
    int64_t v7 = result;
    __stack_chk_fail();
    v6--;
    int64_t v8 = v7; // 0x545d2e
    int32_t * v9; // 0x545d3c
    if (v6 == 0) {
        // 0x545d30
        function_1fd40((int64_t)&g26);
        v8 = *(int64_t *)(*(int64_t *)v7 - 24) + v7;
        v9 = (int32_t *)(v8 + 32);
        *v9 = *v9 | 1;
        if (*(char *)(v8 + 28) % 2 == 0) {
            goto lab_0x545d83;
        }
        // 0x545d46
        function_20a50();
    }
    int64_t v10 = v8;
    function_1fd40((int64_t)&g26);
    int64_t v11 = *(int64_t *)(*(int64_t *)v10 - 24) + v10; // 0x545d57
    int32_t * v12 = (int32_t *)(v11 + 32); // 0x545d5a
    *v12 = *v12 | 1;
    while (*(char *)(v11 + 28) % 2 == 0) {
        // 0x545d64
        function_20540();
        function_5459a0(v2);
        int64_t result2 = v10; // 0x545d15
        if (v3 == __readfsqword(40)) {
            // 0x545d17
            return result2;
        }
        v7 = v10;
        __stack_chk_fail();
        v6--;
        v8 = v7;
        if (v6 == 0) {
            // 0x545d30
            function_1fd40((int64_t)&g26);
            v8 = *(int64_t *)(*(int64_t *)v7 - 24) + v7;
            v9 = (int32_t *)(v8 + 32);
            *v9 = *v9 | 1;
            if (*(char *)(v8 + 28) % 2 == 0) {
                goto lab_0x545d83;
            }
            // 0x545d46
            function_20a50();
        }
        // 0x545d4b
        v10 = v8;
        function_1fd40((int64_t)&g26);
        v11 = *(int64_t *)(*(int64_t *)v10 - 24) + v10;
        v12 = (int32_t *)(v11 + 32);
        *v12 = *v12 | 1;
    }
    int64_t v13 = function_20a50(); // 0x545d8d
    function_20540();
    int64_t v14 = v13; // 0x545d9a
    while (true) {
        // 0x545d73
        function_5459a0(v2);
        _Unwind_Resume((struct _Unwind_Exception *)v14);
      lab_0x545d83:
        // 0x545d83
        v14 = function_20a50();
    }
}

// Address range: 0x545da0 - 0x545da4
int64_t function_545da0(void) {
    // 0x545da0
    int64_t v1; // 0x545da0
    return (uint64_t)v1 % 256;
}

// Address range: 0x545db0 - 0x545df7
int64_t function_545db0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 240 + *(int64_t *)(a1 - 24)); // 0x545dbb
    if (v1 != 0) {
        // 0x545dc8
        return function_545160(function_545b60(a1, *(int64_t *)v1 & 0xffffffff));
    }
    // 0x545de6
    function_5423f0(0);
    return function_545b60(0, 0);
}

// Address range: 0x545e00 - 0x545e05
int64_t function_545e00(void) {
    // 0x545e00
    int64_t v1; // 0x545e00
    return function_545160(v1);
}

// Address range: 0x545e10 - 0x545e91
int64_t function_545e10(int64_t result, int64_t a2) {
    int64_t v1 = *(int64_t *)(result - 24) + result; // 0x545e21
    char * v2 = (char *)(v1 + 228); // 0x545e24
    if (*v2 != 0) {
        // 0x545e2d
        *(int32_t *)(v1 + 224) = (int32_t)a2;
        return result;
    }
    // 0x545e40
    if (*(int64_t *)(v1 + 240) == 0) {
        // 0x545e6d
        function_5423f0(0);
        abort();
        // UNREACHABLE
    }
    // 0x545e4c
    *v2 = 1;
    *(int32_t *)(v1 + 224) = (int32_t)a2;
    return result;
}

// Address range: 0x545ea0 - 0x545eb3
int64_t function_545ea0(int64_t result, int64_t a2) {
    int32_t * v1 = (int32_t *)(result + 24 + *(int64_t *)(result - 24)); // 0x545eaf
    *v1 = *v1 & -1 - (int32_t)a2;
    return result;
}

// Address range: 0x545ec0 - 0x545ef8
int64_t function_545ec0(int64_t result, int64_t a2) {
    int32_t v1 = a2; // 0x545ed2
    int32_t v2 = 64; // 0x545ec0
    switch (v1) {
        case 10: {
            // 0x545eec
            v2 = 2;
        }
        case 8: {
          lab_0x545eec:;
            int32_t * v3 = (int32_t *)(result + 24 + *(int64_t *)(result - 24)); // 0x545eec
            *v3 = *v3 & -75 | v2;
            return result;
        }
        default: {
            // 0x545ee1
            v2 = 8 * (int32_t)(v1 == 16);
            // branch (via goto) -> 0x545eec
            goto lab_0x545eec;
        }
    }
}

// Address range: 0x545f00 - 0x545f13
int64_t function_545f00(int64_t result, int64_t a2) {
    // 0x545f00
    *(int64_t *)(result + 8 + *(int64_t *)(result - 24)) = 0x100000000 * a2 >> 32;
    return result;
}

// Address range: 0x545f20 - 0x545f33
int64_t function_545f20(int64_t result, int64_t a2) {
    // 0x545f20
    *(int64_t *)(result + 16 + *(int64_t *)(result - 24)) = 0x100000000 * a2 >> 32;
    return result;
}

// Address range: 0x5479ca - 0x5479d5
int64_t function_5479ca(int64_t a1, int64_t a2, int64_t result) {
    // 0x5479ca
    int64_t v1; // 0x5479ca
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x5479ca
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return result;
}

// Address range: 0x5479e0 - 0x547a65
int64_t function_5479e0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a1 - 24); // 0x5479f4
    if (v1 == 0) {
        // 0x547a3f
        return -1;
    }
    uint64_t v2 = v1 - 1; // 0x5479fd
    int64_t result = v2 > a3 ? a3 : v2; // 0x547a09
    if (a4 == 0) {
        // 0x547a3f
        return result;
    }
    int64_t * str = (int64_t *)a2; // 0x547a24
    int32_t n = a4; // 0x547a24
    if (memchr(str, (int32_t)*(char *)(result + a1), n) == NULL) {
        // 0x547a3f
        return result;
    }
    int64_t v3 = result; // 0x547a2c
    int64_t result2 = -1; // 0x547a35
    while (v3 != 0) {
        // 0x547a37
        v3--;
        result2 = v3;
        if (memchr(str, (int32_t)*(char *)(v3 + a1), n) == NULL) {
            // break -> 0x547a3f
            break;
        }
        result2 = -1;
    }
    // 0x547a3f
    return result2;
}

// Address range: 0x547a70 - 0x547a7c
int64_t function_547a70(int64_t a1, int64_t a2) {
    // 0x547a70
    int64_t v1; // 0x547a70
    return function_5479e0(a1, a2, v1, *(int64_t *)(a2 - 24));
}

// Address range: 0x547a80 - 0x547ac0
int64_t function_547a80(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = *(int64_t *)(a1 - 24); // 0x547a8a
    if (v1 == 0) {
        // 0x547ab2
        return -1;
    }
    uint64_t v2 = v1 - 1; // 0x547a93
    int64_t result = v2 > a3 ? a3 : v2; // 0x547a99
    char v3 = *(char *)(result + a1); // 0x547aac
    if (v3 != (char)a2) {
        // 0x547ab2
        return result;
    }
    int64_t v4 = result; // 0x547ab0
    int64_t result2 = -1; // 0x547aa7
    while (v4 != 0) {
        // 0x547aa9
        v4--;
        result2 = v4;
        if (*(char *)(v4 + a1) != v3) {
            // break -> 0x547ab2
            break;
        }
        result2 = -1;
    }
    // 0x547ab2
    return result2;
}

// Address range: 0x547ac0 - 0x547cb4
int64_t function_547ac0(int64_t a1, uint64_t a2, uint64_t a3, int64_t str, uint64_t a5, uint64_t a6) {
    uint64_t v1 = *(int64_t *)(a1 - 24); // 0x547ac9
    if (v1 >= a2) {
        uint64_t v2 = v1 - a2; // 0x547ad5
        uint64_t v3 = v2 > a3 ? a3 : v2; // 0x547adb
        uint64_t v4 = *(int64_t *)(str - 24); // 0x547adf
        int64_t n = v3 < v4 ? v3 : v4; // 0x547ae9
        if (n != 0) {
            int32_t memcmp_rc = memcmp((int64_t *)(a2 + a1), (int64_t *)str, (int32_t)n); // 0x547b26
            if (memcmp_rc != 0) {
                // 0x547b2f
                return memcmp_rc;
            }
        }
        uint64_t v5 = v3 - v4; // 0x547af2
        int64_t result = 0x7fffffff; // 0x547b01
        if (v5 <= 0x7fffffff) {
            int64_t v6 = v5 + 0x80000000; // 0x547b06
            result = v6 < 0 == ((v6 ^ v5) & (v5 ^ -0x8000000000000000)) < 0 ? v5 & 0xffffffff : 0x80000000;
        }
        // 0x547b10
        return result;
    }
    // 0x547b36
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", a2, v1);
    int64_t result2; // 0x547ca5
    if (((int64_t)"basic_string::compare" < 0x696172745f726168 || (int64_t)"basic_string::compare" == 0x696172745f726168) ^ true) {
        // 0x547c8f
        function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", (int64_t)"basic_string::compare", 0x696172745f726168);
        // 0x547c8f
        result2 = function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", (int64_t)"basic_string::compare", 0x696172745f726168);
        *(int64_t *)"%s: __pos (which is %zu) > this->size() (which is %zu)" = (int64_t)"basic_string::compare";
        return result2;
    }
    int64_t v7 = *(int64_t *)v1; // 0x547b76
    uint64_t v8 = *(int64_t *)(v7 - 24); // 0x547b79
    if (v8 >= a5) {
        uint64_t v9 = a2 < 0x696172745f726168 - (int64_t)"basic_string::compare" ? a2 : 0x696172745f726168 - (int64_t)"basic_string::compare"; // 0x547b88
        uint64_t v10 = v8 - a5; // 0x547b8c
        uint64_t v11 = v10 > a6 ? a6 : v10; // 0x547b95
        int64_t n2 = v9 < v11 ? v9 : v11; // 0x547b9c
        if (n2 != 0) {
            int32_t memcmp_rc2 = memcmp((int64_t *)((int64_t)"basic_string::compare" + 0x6f705f5f203a7325), (int64_t *)(v7 + a5), (int32_t)n2); // 0x547bd9
            if (memcmp_rc2 != 0) {
                // 0x547be2
                return memcmp_rc2;
            }
        }
        uint64_t v12 = v9 - v11; // 0x547ba5
        int64_t result3 = 0x7fffffff; // 0x547bb4
        if (v12 <= 0x7fffffff) {
            int64_t v13 = v12 + 0x80000000; // 0x547bb9
            result3 = v13 < 0 == ((v13 ^ v12) & (v12 ^ -0x8000000000000000)) < 0 ? v12 & 0xffffffff : 0x80000000;
        }
        // 0x547b10
        return result3;
    }
    // 0x547be9
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", a5, v8);
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", (int64_t)"basic_string::compare", 0x696172745f726168);
    if (((int64_t)"basic_string::compare" < 0x696172745f726168 || (int64_t)"basic_string::compare" == 0x696172745f726168) ^ true) {
        // 0x547c8f
        result2 = function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", (int64_t)"basic_string::compare", 0x696172745f726168);
        *(int64_t *)"%s: __pos (which is %zu) > this->size() (which is %zu)" = (int64_t)"basic_string::compare";
        return result2;
    }
    int64_t n3 = a5 < (0x696172745f726168 - (int64_t)"basic_string::compare" > (int64_t)"basic_string::compare" ? (int64_t)"basic_string::compare" : 0x696172745f726168 - (int64_t)"basic_string::compare") ? a5 : 0x696172745f726168 - (int64_t)"basic_string::compare" > (int64_t)"basic_string::compare" ? (int64_t)"basic_string::compare" : 0x696172745f726168 - (int64_t)"basic_string::compare"; // 0x547c41
    if (n3 != 0) {
        int32_t memcmp_rc3 = memcmp((int64_t *)((int64_t)"basic_string::compare" + 0x6f705f5f203a7325), (int64_t *)0x696172745f726168, (int32_t)n3); // 0x547c7b
        if (memcmp_rc3 != 0) {
            // 0x547c89
            return memcmp_rc3;
        }
    }
    uint64_t v14 = (0x696172745f726168 - (int64_t)"basic_string::compare" > (int64_t)"basic_string::compare" ? (int64_t)"basic_string::compare" : 0x696172745f726168 - (int64_t)"basic_string::compare") - a5; // 0x547c4a
    int64_t result4 = 0x7fffffff; // 0x547c59
    if (v14 <= 0x7fffffff) {
        int64_t v15 = v14 + 0x80000000; // 0x547c5e
        result4 = v15 < 0 == ((v15 ^ v14) & (v14 ^ -0x8000000000000000)) < 0 ? v14 & 0xffffffff : 0x80000000;
    }
    // 0x547b10
    return result4;
}

// Address range: 0x547cc0 - 0x547cc8
int64_t function_547cc0(void) {
    // 0x547cc0
    return (int64_t)&g25;
}

// Address range: 0x547cd0 - 0x547cd8
int64_t function_547cd0(int64_t a1) {
    // 0x547cd0
    *(int32_t *)(a1 + 16) = -1;
    int64_t result; // 0x547cd0
    return result;
}

// Address range: 0x547ce0 - 0x547ce8
int64_t function_547ce0(int64_t a1) {
    // 0x547ce0
    *(int32_t *)(a1 + 16) = 0;
    int64_t result; // 0x547ce0
    return result;
}

// Address range: 0x547cf0 - 0x547cf5
int64_t function_547cf0(int64_t a1) {
    // 0x547cf0
    return a1 + 24;
}

// Address range: 0x5540c8 - 0x5542cc
// From class:    std::__timepunct_cache<char>
// Type:          constructor
int64_t function_5540c8(int64_t a1, int64_t a2) {
    // 0x5540c8
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    *(int32_t *)(a1 + 8) = (int32_t)(a2 != 0);
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 48) = 0;
    *(int64_t *)(a1 + 56) = 0;
    *(int64_t *)(a1 + 64) = 0;
    *(int64_t *)(a1 + 72) = 0;
    *(int64_t *)(a1 + 80) = 0;
    *(int64_t *)a1 = (int64_t)&g16;
    *(int64_t *)(a1 + 88) = 0;
    *(int64_t *)(a1 + 96) = 0;
    *(int64_t *)(a1 + 104) = 0;
    *(int64_t *)(a1 + 112) = 0;
    *(int64_t *)(a1 + 120) = 0;
    *(int64_t *)(a1 + 128) = 0;
    *(int64_t *)(a1 + 136) = 0;
    *(int64_t *)(a1 + 144) = 0;
    *(int64_t *)(a1 + 152) = 0;
    *(int64_t *)(a1 + 160) = 0;
    *(int64_t *)(a1 + 168) = 0;
    *(int64_t *)(a1 + 176) = 0;
    *(int64_t *)(a1 + 184) = 0;
    *(int64_t *)(a1 + 192) = 0;
    *(int64_t *)(a1 + 200) = 0;
    *(int64_t *)(a1 + 208) = 0;
    *(int64_t *)(a1 + 216) = 0;
    *(int64_t *)(a1 + 224) = 0;
    *(int64_t *)(a1 + 232) = 0;
    *(int64_t *)(a1 + 240) = 0;
    *(int64_t *)(a1 + 248) = 0;
    *(int64_t *)(a1 + 256) = 0;
    *(int64_t *)(a1 + 264) = 0;
    *(int64_t *)(a1 + 272) = 0;
    *(int64_t *)(a1 + 280) = 0;
    *(int64_t *)(a1 + 288) = 0;
    *(int64_t *)(a1 + 296) = 0;
    *(int64_t *)(a1 + 304) = 0;
    *(int64_t *)(a1 + 312) = 0;
    *(int64_t *)(a1 + 320) = 0;
    *(int64_t *)(a1 + 328) = 0;
    *(int64_t *)(a1 + 336) = 0;
    *(int64_t *)(a1 + 344) = 0;
    *(int64_t *)(a1 + 352) = 0;
    *(int64_t *)(a1 + 360) = 0;
    *(int64_t *)(a1 + 368) = 0;
    *(int64_t *)(a1 + 376) = 0;
    *(int64_t *)(a1 + 384) = 0;
    *(char *)(a1 + 392) = 0;
    return (int64_t)&g16;
}

// Address range: 0x5542d0 - 0x5542ea
// From class:    std::time_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
// Type:          constructor
int64_t function_5542d0(int64_t a1, int64_t a2) {
    // 0x5542d0
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a2 != 0);
    *(int64_t *)a1 = (int64_t)&g17;
    return (int64_t)&g17;
}

// Address range: 0x5542f0 - 0x554313
int64_t function_5542f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, char a6, char a7) {
    // 0x5542f0
    return *(int64_t *)(a1 + 16);
}

// Address range: 0x554320 - 0x55433a
// From class:    std::time_put_byname<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
// Type:          constructor
int64_t function_554320(int64_t a1, int64_t a2, int64_t a3) {
    // 0x554320
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a3 != 0);
    *(int64_t *)a1 = (int64_t)&g18;
    return (int64_t)&g18;
}

// Address range: 0x554340 - 0x55435a
// From class:    std::time_put_byname<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
// Type:          constructor
int64_t function_554340(int64_t a1, int64_t a2, int64_t a3) {
    // 0x554340
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a3 != 0);
    *(int64_t *)a1 = (int64_t)&g18;
    return (int64_t)&g18;
}

// Address range: 0x554360 - 0x55437a
// From class:    std::time_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          constructor
int64_t function_554360(int64_t a1, int64_t a2) {
    // 0x554360
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a2 != 0);
    *(int64_t *)a1 = (int64_t)&g19;
    return (int64_t)&g19;
}

// Address range: 0x554380 - 0x554386
int64_t function_554380(int64_t result) {
    // 0x554380
    return result;
}

// Address range: 0x554390 - 0x554396
int64_t function_554390(int64_t result) {
    // 0x554390
    return result;
}

// Address range: 0x5543a0 - 0x5543a6
int64_t function_5543a0(int64_t result) {
    // 0x5543a0
    return result;
}

// Address range: 0x5543b0 - 0x5543b6
int64_t function_5543b0(int64_t result) {
    // 0x5543b0
    return result;
}

// Address range: 0x5543c0 - 0x5543c6
int64_t function_5543c0(int64_t result) {
    // 0x5543c0
    return result;
}

// Address range: 0x5543d0 - 0x5543d6
int64_t function_5543d0(int64_t result) {
    // 0x5543d0
    return result;
}

// Address range: 0x5543e0 - 0x5543fa
// From class:    std::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          constructor
int64_t function_5543e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5543e0
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a3 != 0);
    *(int64_t *)a1 = (int64_t)&g20;
    return (int64_t)&g20;
}

// Address range: 0x554400 - 0x55441a
// From class:    std::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          constructor
int64_t function_554400(int64_t a1, int64_t a2, int64_t a3) {
    // 0x554400
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a3 != 0);
    *(int64_t *)a1 = (int64_t)&g20;
    return (int64_t)&g20;
}

// Address range: 0x5639f3 - 0x5639f5
int64_t function_5639f3(int64_t a1) {
    // 0x5639f3
    int64_t result; // 0x5639f3
    return result;
}

// Address range: 0x5639f5 - 0x563a15
int64_t function_5639f5(void) {
    // 0x5639f5
    int64_t v1; // 0x5639f5
    function_5029a0(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return function_4fef10();
}

// Address range: 0x563a20 - 0x563a29
int64_t function_563a20(int64_t a1) {
    // 0x563a20
    return function_4f1700(a1 + 104);
}

// Address range: 0x563a30 - 0x563a39
int64_t function_563a30(int64_t a1) {
    // 0x563a30
    return function_4f1710(a1 + 104);
}

// Address range: 0x563a40 - 0x563ab4
// From class:    __gnu_cxx::stdio_sync_filebuf<char, std::char_traits<char> >
// Type:          constructor
int64_t function_563a40(int64_t a1, int64_t a2) {
    // 0x563a40
    *(int64_t *)(a1 + 8) = 0;
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 48) = 0;
    int64_t * v1 = (int64_t *)a1; // 0x563a8b
    *v1 = (int64_t)&g13;
    function_4f2d50(a1 + 56);
    *(int64_t *)(a1 + 64) = a2;
    *(int32_t *)(a1 + 72) = -1;
    *v1 = (int64_t)&g21;
    return (int64_t)&g21;
}

// Address range: 0x563ac0 - 0x563b04
// From class:    __gnu_cxx::stdio_sync_filebuf<char, std::char_traits<char> >
// Type:          constructor
int64_t function_563ac0(int64_t a1, int64_t a2) {
    // 0x563ac0
    function_540380();
    *(int64_t *)a1 = (int64_t)&g21;
    int64_t * v1 = (int64_t *)(a2 + 64); // 0x563ae0
    *(int64_t *)(a1 + 64) = *v1;
    int32_t * v2 = (int32_t *)(a2 + 72); // 0x563ae8
    uint32_t result = *v2; // 0x563ae8
    *(int32_t *)(a1 + 72) = result;
    *v1 = 0;
    *v2 = -1;
    return result;
}

// Address range: 0x563b10 - 0x563b48
int64_t function_563b10(int64_t result, int64_t a2) {
    // 0x563b10
    function_5403d0();
    int64_t * v1 = (int64_t *)(a2 + 64); // 0x563b21
    *v1 = 0;
    *(int64_t *)(result + 64) = *v1;
    int32_t * v2 = (int32_t *)(a2 + 72); // 0x563b31
    *v2 = -1;
    *(int32_t *)(result + 72) = *v2;
    return result;
}

// Address range: 0x563b50 - 0x563c55
int64_t function_563b50(int64_t a1, int64_t a2, int64_t result2) {
    int64_t v1 = a1 + 56; // 0x563b54
    int64_t v2 = a2 + 56; // 0x563b5b
    int64_t * v3 = (int64_t *)(a2 + 8); // 0x563b6a
    int64_t v4 = __readfsqword(40); // 0x563b6e
    int64_t * v5 = (int64_t *)(a1 + 8); // 0x563b7e
    *v5 = *v3;
    int64_t * v6 = (int64_t *)(a2 + 16); // 0x563b89
    *v3 = *v5;
    int64_t * v7 = (int64_t *)(a1 + 16); // 0x563b91
    *v7 = *v6;
    int64_t * v8 = (int64_t *)(a2 + 24); // 0x563b99
    *v6 = *v7;
    int64_t * v9 = (int64_t *)(a1 + 24); // 0x563ba1
    *v9 = *v8;
    int64_t * v10 = (int64_t *)(a2 + 32); // 0x563ba9
    *v8 = *v9;
    int64_t * v11 = (int64_t *)(a1 + 32); // 0x563bb1
    *v11 = *v10;
    int64_t * v12 = (int64_t *)(a2 + 40); // 0x563bb9
    *v10 = *v11;
    int64_t * v13 = (int64_t *)(a1 + 40); // 0x563bc1
    *v13 = *v12;
    int64_t * v14 = (int64_t *)(a2 + 48); // 0x563bc9
    *v12 = *v13;
    int64_t * v15 = (int64_t *)(a1 + 48); // 0x563bd1
    *v15 = *v14;
    *v14 = *v15;
    int64_t v16; // bp-56, 0x563b50
    function_5659d0(&v16, v1);
    function_566100(v1, (int64_t *)v2);
    function_566100(v2, &v16);
    function_566180(&v16);
    int64_t * v17 = (int64_t *)(a1 + 64); // 0x563c06
    int64_t * v18 = (int64_t *)(a2 + 64); // 0x563c0a
    *v17 = *v18;
    *v18 = *v17;
    int32_t * v19 = (int32_t *)(a2 + 72); // 0x563c16
    int32_t * v20 = (int32_t *)(a1 + 72); // 0x563c19
    *v20 = *v19;
    *v19 = *v20;
    int64_t result = __readfsqword(40) ^ v4; // 0x563c27
    if (result == 0) {
        // 0x563c32
        return result;
    }
    // 0x563c3f
    __stack_chk_fail();
    return result2;
}

// Address range: 0x563c60 - 0x563c79
// From class:    __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_563c60(int64_t a1) {
    // 0x563c60
    function_5009e0();
    *(int64_t *)a1 = (int64_t)&g22;
    return (int64_t)&g22;
}

// Address range: 0x563c80 - 0x563d25
// From class:    __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_563c80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1 + 104; // 0x563c94
    function_5009e0();
    *(int64_t *)a1 = (int64_t)&g22;
    function_4f1630(v1, a2 & 0xffffffff, a3 & 0xffffffff);
    int64_t result = function_4f15a0(v1); // 0x563cbc
    if ((char)result == 0) {
        // 0x563cc5
        return result;
    }
    // 0x563cd0
    *(int32_t *)(a1 + 120) = (int32_t)a3;
    *(int64_t *)(a1 + 160) = a4;
    function_501020(a1);
    int64_t result2 = *(int64_t *)(a1 + 152); // 0x563ce3
    *(char *)(a1 + 169) = 0;
    *(char *)(a1 + 170) = 0;
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 32) = 0;
    *(int64_t *)(a1 + 48) = 0;
    *(int64_t *)(a1 + 8) = result2;
    *(int64_t *)(a1 + 16) = result2;
    *(int64_t *)(a1 + 24) = result2;
    return result2;
}

// Address range: 0x564314 - 0x564650
int64_t function_564314(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result2, int64_t a6) {
    // 0x564314
    int64_t v1; // 0x564314
    uint64_t v2 = v1;
    bool v3; // 0x564314
    *(char *)a1 = (char)a4 + (char)a1 + (char)v3;
    int64_t v4 = a4 - 1; // 0x56431d
    if (v4 == 0) {
        // 0x56431f
        return v1 + 0x83410000 & 0xffffffff;
    }
    int64_t v5 = v1 + 0xfecc0000 & 0xffffff7c | 131; // 0x564327
    int32_t * v6 = (int32_t *)(v4 + a1); // 0x564329
    *v6 = *v6 + 1;
    int32_t * v7 = (int32_t *)v5; // 0x56432e
    *v7 = *v7 + (int32_t)v5;
    char * v8 = (char *)(a4 - 126); // 0x564330
    *v8 = *v8 + (char)v4;
    int32_t v9 = __asm_in((int16_t)a3); // 0x564333
    int32_t * v10 = (int32_t *)(a1 + 107 + a4); // 0x564334
    *v10 = *v10 + (int32_t)v4;
    if ((v9 & 24) == 0) {
        // 0x564740
        return v9 & -256;
    }
    int64_t v11 = 16 * v1 + v1;
    int64_t result = *(int64_t *)(v11 + 16); // 0x56435f
    int64_t v12 = result >> 8; // 0x56437d
    int64_t v13 = v12; // 0x564383
    if (result % 2 != 0) {
        // 0x564385
        v13 = *(int64_t *)(v12 + v1);
    }
    char v14; // 0x564314
    if (v2 != 0) {
        // 0x564397
        if (v14 == (char)(v2 < v13 + v1)) {
            // 0x56431f
            return result;
        }
    }
    if (result2 == -2 == (result & 2) == 0) {
        // 0x564590
        if (*(int32_t *)(v1 + 20) % 4 == 0) {
            // 0x56431f
            return result;
        }
    }
    int64_t v15 = *(int64_t *)*(int64_t *)(v11 + 8); // 0x56440c
    if (v14 == 0) {
        v15 = function_564288();
    }
    int64_t v16 = v15; // 0x564415
    if (v1 != 0) {
        v16 = function_564291();
    }
    int32_t * v17 = (int32_t *)(v1 + 16); // 0x564427
    int32_t v18 = *v17; // 0x564427
    int64_t result3 = v16; // 0x56442b
    if (*(int32_t *)(v1 + 12) > 3) {
        result3 = function_5642b4();
    }
    // 0x564431
    if (v18 < 1) {
        // 0x56431f
        return result2;
    }
    // 0x56444f
    if (v18 < 4) {
        // 0x56431f
        return result3;
    }
    uint64_t v19 = (int64_t)v18; // 0x564427
    if (v19 % 2 != 0) {
        // 0x56445f
        if ((*(char *)(v1 + 16) & 2) != 0) {
            // 0x56431f
            return result3;
        }
    }
    int64_t result4 = v19 ^ 1; // 0x564477
    if ((int32_t)result4 >= 4) {
        // 0x564483
        return function_564310();
    }
    // 0x564574
    *(int64_t *)v1 = 0;
    *v17 = 1;
    return result4;
}
