/*
 * Targeted RetDec C for native executable gap queue batch 1614.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1fa226-0x1fa426 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1fa426-0x1fa626 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1fa626-0x1fa826 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1fa826-0x1faa26 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1faa26-0x1faa2a rank=- name=- kind=- bytes=- uncovered=-
 *   0x23d8b6-0x23d8b8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2968a8-0x2969a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x296aa8-0x296ca8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x296ca8-0x296ea8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x296ea8-0x2970a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2970a8-0x2970b7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4af02a-0x4af22a rank=- name=- kind=- bytes=- uncovered=-
 *   0x4af22a-0x4af42a rank=- name=- kind=- bytes=- uncovered=-
 *   0x4af42a-0x4af62a rank=- name=- kind=- bytes=- uncovered=-
 *   0x4af62a-0x4af82a rank=- name=- kind=- bytes=- uncovered=-
 *   0x4af82a-0x4af830 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1fa226(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1fa2e2(void);
int64_t function_1fa2f8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1fa3b7(void);
int64_t function_1fa3e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fa473(void);
int64_t function_1fa51f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_1fa5c9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1fa5f9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1fa679(int64_t a1);
int64_t function_1fa746(int64_t a1);
int64_t function_1fa74a(void);
int64_t function_1fa792(void);
int64_t function_1fa7b0(int64_t a1);
int64_t function_1fa7e4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1fa80d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1fa827(void);
int64_t function_1fa82d(void);
int64_t function_1fa836(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1fa845(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1fa870(int64_t a1, int64_t a2);
int64_t function_1fa879(int64_t a1, int64_t a2, int64_t a3, int32_t a4);
int64_t function_1fa894(void);
int64_t function_1fa897(void);
int64_t function_1fa8a4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1fa8d3(int64_t a1);
int64_t function_1fa8db(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_1fa963(int64_t a1);
int64_t function_1fa967(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1fa9d3(void);
int64_t function_1fa9eb(int64_t a1);
int64_t function_23d8b6(void);
int64_t function_2968a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2968e5(void);
int64_t function_2968fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29690d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_296978(int64_t a1);
int64_t function_296994(int64_t a1, int64_t a2, int64_t a3);
int64_t function_296aa8(void);
int64_t function_296af0(int64_t a1);
int64_t function_296b4b(void);
int64_t function_296b69(int64_t a1);
int64_t function_296bca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_296c12(int64_t a1);
int64_t function_296c92(int64_t a1, int64_t a2, int64_t a3);
int64_t function_296c9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_296cdf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_296d36(void);
int64_t function_296d61(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_296dd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_296e15(void);
int64_t function_296e1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_296e21(void);
int64_t function_296eba(int64_t a1);
int64_t function_296ede(void);
int64_t function_296efa(int64_t a1, int64_t a2);
int64_t function_296fc7(void);
int64_t function_296ffc(void);
int64_t function_29701b(void);
int64_t function_29703c(void);
int64_t function_297060(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33f11372();
int64_t function_4adc80();
int64_t function_4add10();
int64_t function_4add30();
int64_t function_4ae080();
int64_t function_4aec20();
int64_t function_4aecc0();
int64_t function_4aedd0();
int64_t function_4aef80();
int64_t function_4af02a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4af040(int64_t a1);
int64_t function_aca3ea0();
int64_t function_ffffffff95246be3();
int64_t function_ffffffffe8daba68();
int64_t function_fffffffff4eea842();
int64_t unknown_15ca894();
int64_t unknown_215d3479();
int64_t unknown_23d101d5();
int64_t unknown_240f8105();
int64_t unknown_3a340d68();
int64_t unknown_3d219076();
int64_t unknown_3d21910e();
int64_t unknown_3d2b5520();
int64_t unknown_4584fc7f();
int64_t unknown_5d075a3f();
int64_t unknown_6419bbc6();
int64_t unknown_6e9990f6();
int64_t unknown_72943a9();
int64_t unknown_73e3dc56();
int64_t unknown_82ecdf9();
int64_t unknown_ffffffff860c7461();
int64_t unknown_ffffffff8b1ea189();
int64_t unknown_ffffffff972a0ad9();
int64_t unknown_ffffffff9c1fb715();
int64_t unknown_ffffffffb0372a6d();
int64_t unknown_ffffffffbc357a2a();
int64_t unknown_ffffffffcb64ce04();
int64_t unknown_ffffffffe5b5d615();
int64_t unknown_ffffffffe911b21e();
int64_t unknown_ffffffffe9379b3e();
int64_t unknown_fffffffffcc16149();

// Address range: 0x1fa226 - 0x1fa2cd
int64_t function_1fa226(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1fa226
    int64_t v1; // 0x1fa226
    __asm_out((int16_t)a3, (char)v1);
    int64_t v2 = 2 * v1; // 0x1fa22b
    int64_t result = v2 & 0xffffffff; // 0x1fa22b
    uint32_t v3 = (int32_t)v1 + (int32_t)a3; // 0x1fa22d
    *(int32_t *)a3 = v3;
    if (v3 >= 1) {
        // 0x1fa233
        return result;
    }
    int32_t * v4 = (int32_t *)(a2 + 0x26766e81); // 0x1fa292
    uint32_t v5 = *v4; // 0x1fa292
    uint32_t v6 = v5 + (int32_t)v2; // 0x1fa292
    *v4 = v6;
    if (v6 >= v5 && v6 != 0) {
        // 0x1fa233
        return result;
    }
    int32_t * v7 = (int32_t *)(a1 + 123); // 0x1fa2b4
    *v7 = *v7 + (int32_t)a2;
    uint32_t v8 = *(int32_t *)result ^ (int32_t)a4; // 0x1fa2b7
    int64_t v9 = v8; // 0x1fa2b7
    int64_t result2 = unknown_6419bbc6(); // 0x1fa2bf
    if (v8 != 0) {
        // 0x1fa2c7
        *(int32_t *)(a1 - 104 + 8 * v9) = (int32_t)a1;
        return result2;
    }
    int32_t v10 = ((int32_t)result2 ^ 9) - 0x7d59f47d; // 0x1fa253
    int64_t result3 = v10; // 0x1fa253
    if (v10 < 0) {
        // 0x1fa233
        return result3;
    }
    int32_t * v11 = (int32_t *)(2 * v1 - 0x2f745e2f + v9); // 0x1fa25b
    *v11 = *v11 + v10;
    __asm_out_133(8, (char)v10);
    int32_t * v12 = (int32_t *)v9; // 0x1fa266
    *v12 = *v12 + (int32_t)v1;
    return v1 + result3 & 0xffffffff;
}

// Address range: 0x1fa2e2 - 0x1fa2e3
int64_t function_1fa2e2(void) {
    // 0x1fa2e2
    int64_t result; // 0x1fa2e2
    return result;
}

// Address range: 0x1fa2f8 - 0x1fa307
int64_t function_1fa2f8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1fa2f8
    int64_t v1; // 0x1fa2f8
    char * v2 = (char *)(v1 - 0x65a1fd35); // 0x1fa2f8
    *v2 = *v2 - (char)(a4 / 256);
    int64_t result = unknown_ffffffffcb64ce04(a1, a2, a3, a4, a5); // 0x1fa2fe
    char * v3 = (char *)(result - 81); // 0x1fa303
    *v3 = *v3 + (char)a4;
    return result;
}

// Address range: 0x1fa3b7 - 0x1fa3b8
int64_t function_1fa3b7(void) {
    // 0x1fa3b7
    int64_t result; // 0x1fa3b7
    return result;
}

// Address range: 0x1fa3e6 - 0x1fa41a
int64_t function_1fa3e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fa3e6
    *(int32_t *)a4 = 0;
    int64_t v1; // 0x1fa3e6
    int32_t v2 = *(int32_t *)(v1 - 58); // 0x1fa3e8
    unsigned char v3 = (char)a4 % 32; // 0x1fa3eb
    if (v3 != 0) {
        char * v4 = (char *)(v1 - 0x17c90fa0); // 0x1fa3eb
        unsigned char v5 = *v4; // 0x1fa3eb
        *v4 = v5 >> v3 | (char)((int16_t)v5 << (int16_t)(9 - v3));
    }
    int32_t * v6 = (int32_t *)(a3 - 0x6dfd8728); // 0x1fa3f1
    *v6 = *v6 + (int32_t)v1;
    if ((int32_t)((256 * a4 | 0xffff00ff) & v1) < 0x2d790002) {
        function_1fa3b7();
    }
    // 0x1fa407
    float80_t v7; // 0x1fa3e6
    *(float64_t *)(int64_t)(v2 ^ (int32_t)v1) = (float64_t)v7;
    return __asm_sti();
}

// Address range: 0x1fa473 - 0x1fa47a
int64_t function_1fa473(void) {
    // 0x1fa473
    return unknown_215d3479();
}

// Address range: 0x1fa51f - 0x1fa540
int64_t function_1fa51f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x1fa51f
    int64_t v1; // 0x1fa51f
    char * v2 = (char *)(v1 + 0x38a2000); // 0x1fa51f
    *v2 = *v2 + (char)v1;
    char * v3 = (char *)(v1 + 0x5101e800); // 0x1fa525
    *v3 = *v3 + (char)(a4 / 256);
    int32_t * v4 = (int32_t *)(v1 + 0x53009994); // 0x1fa52b
    *v4 = *v4 + (int32_t)a4;
    __asm_iretd();
    return unknown_5d075a3f();
}

// Address range: 0x1fa5c9 - 0x1fa5dc
int64_t function_1fa5c9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1fa5c9
    return unknown_23d101d5();
}

// Address range: 0x1fa5f9 - 0x1fa625
int64_t function_1fa5f9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t v1 = *(int32_t *)0x13a80a001e8127d; // 0x1fa5f9
    bool v2; // 0x1fa5f9
    int32_t v3 = v2 ? 181 : 180; // 0x1fa602
    int64_t v4; // 0x1fa5f9
    *(int32_t *)a3 = (int32_t)v4 + (int32_t)a3;
    __asm_out((int16_t)a3, (char)(a4 / 256 + (int64_t)(v1 - v3)));
    int64_t v5 = (v2 ? -1 : 1) + a1; // 0x1fa613
    int64_t result = unknown_ffffffffe911b21e(v5, 0xffffff9d * a3 & 0xffffffff); // 0x1fa618
    *(int32_t *)-0x17b644dc = *(int32_t *)-0x17b644dc + (int32_t)v5;
    return result;
}

// Address range: 0x1fa679 - 0x1fa67a
int64_t function_1fa679(int64_t a1) {
    // 0x1fa679
    int64_t result; // 0x1fa679
    return result;
}

// Address range: 0x1fa746 - 0x1fa747
int64_t function_1fa746(int64_t a1) {
    // 0x1fa746
    int64_t result; // 0x1fa746
    return result;
}

// Address range: 0x1fa74a - 0x1fa750
int64_t function_1fa74a(void) {
    // 0x1fa74a
    int64_t v1; // 0x1fa74a
    return v1 + 0xfe174f42 & 0xffffffff;
}

// Address range: 0x1fa792 - 0x1fa797
int64_t function_1fa792(void) {
    // 0x1fa792
    return function_fffffffff4eea842();
}

// Address range: 0x1fa7b0 - 0x1fa7b1
int64_t function_1fa7b0(int64_t a1) {
    // 0x1fa7b0
    int64_t result; // 0x1fa7b0
    return result;
}

// Address range: 0x1fa7e4 - 0x1fa7f4
int64_t function_1fa7e4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1fa7e4
    int64_t v1; // 0x1fa7e4
    __asm_wait((int64_t)(0x10000 * (int32_t)v1 >> 16));
    return __asm_hlt();
}

// Address range: 0x1fa80d - 0x1fa81a
int64_t function_1fa80d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1fa80d
    int64_t v1; // 0x1fa80d
    return (uint64_t)v1 % 256 | (int64_t)(*(int32_t *)0x1e8ffa0b346019d & -256);
}

// Address range: 0x1fa827 - 0x1fa828
int64_t function_1fa827(void) {
    // 0x1fa827
    int64_t result; // 0x1fa827
    return result;
}

// Address range: 0x1fa82d - 0x1fa82e
int64_t function_1fa82d(void) {
    // 0x1fa82d
    int64_t result; // 0x1fa82d
    return result;
}

// Address range: 0x1fa836 - 0x1fa844
int64_t function_1fa836(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1fa836
    float80_t v1; // 0x1fa836
    *(int32_t *)(a1 + 61) = (int32_t)v1;
    return function_ffffffffe8daba68();
}

// Address range: 0x1fa845 - 0x1fa85f
int64_t function_1fa845(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1fa845
    bool v1; // 0x1fa845
    if (v1) {
        function_1fa827();
    }
    // 0x1fa850
    int64_t v2; // 0x1fa845
    int64_t v3 = v2 & 0xffffffff; // 0x1fa845
    int64_t v4 = unknown_73e3dc56(); // 0x1fa850
    char v5 = v4; // 0x1fa855
    *(char *)v3 = v5;
    int64_t v6 = v1 ? -1 : 1; // 0x1fa855
    int64_t v7 = v6 + v3; // 0x1fa855
    char * v8 = (char *)(v7 - 7); // 0x1fa859
    *v8 = *v8 | v5;
    return function_1fa879(v7, v6 + a2, a3, *(int32_t *)(v4 + a3));
}

// Address range: 0x1fa870 - 0x1fa879
int64_t function_1fa870(int64_t a1, int64_t a2) {
    // 0x1fa870
    return unknown_3d219076(a1, a2);
}

// Address range: 0x1fa879 - 0x1fa893
int64_t function_1fa879(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    // 0x1fa879
    int64_t v1; // 0x1fa879
    *(int32_t *)unknown_4584fc7f() = (int32_t)v1;
    return unknown_15ca894();
}

// Address range: 0x1fa894 - 0x1fa897
int64_t function_1fa894(void) {
    // 0x1fa894
    int64_t result; // 0x1fa894
    return result;
}

// Address range: 0x1fa897 - 0x1fa89a
int64_t function_1fa897(void) {
    // 0x1fa897
    int64_t result; // 0x1fa897
    return result;
}

// Address range: 0x1fa8a4 - 0x1fa8c7
int64_t function_1fa8a4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1fa8a4
    int64_t result; // 0x1fa8a4
    *(int32_t *)a1 = (int32_t)result;
    char v1 = *(char *)-0x5602124f; // 0x1fa8aa
    *(char *)-0x5602124f = v1 + (char)((uint64_t)result / 256);
    bool v2; // 0x1fa8a4
    *(char *)((v2 ? -4 : 4) + a1) = (char)result;
    return result;
}

// Address range: 0x1fa8d3 - 0x1fa8d6
int64_t function_1fa8d3(int64_t a1) {
    // 0x1fa8d3
    int64_t result; // 0x1fa8d3
    return result;
}

// Address range: 0x1fa8db - 0x1fa960
int64_t function_1fa8db(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    int64_t v1 = a2;
    int32_t v2 = *(int32_t *)-0x1cda367a + (int32_t)a3; // 0x1fa8db
    *(int32_t *)-0x1cda367a = v2;
    __asm_out((int16_t)a3, (char)result);
    uint64_t v3 = a4 - 1; // 0x1fa8e4
    if (v3 == 0 || v2 == 0) {
        // 0x1fa8e6
        return result;
    }
    // 0x1fa941
    unknown_fffffffffcc16149();
    int64_t v4; // 0x1fa8db
    if ((char)a3 == (char)(v4 / 256)) {
        // 0x1fa959
        return unknown_ffffffff860c7461();
    }
    int64_t v5 = unknown_3d21910e(); // 0x1fa908
    int32_t * v6 = (int32_t *)(v4 - 0x4baa35df); // 0x1fa90d
    *v6 = *v6 + (int32_t)v5;
    int64_t v7; // 0x1fa8db
    int32_t * v8 = (int32_t *)(v7 - 0x17717300); // 0x1fa913
    *v8 = *v8 & (int32_t)v4;
    *(int32_t *)v7 = *(int32_t *)&v7 + (int32_t)v3;
    char v9 = (char)((*(int32_t *)(v5 + 0x99d06ac) | (int32_t)v7) / 256); // 0x1fa922
    unsigned char v10 = *(char *)v5; // 0x1fa922
    int64_t v11 = unknown_ffffffffbc357a2a(); // 0x1fa924
    *(char *)a1 = *(char *)&v1;
    bool v12; // 0x1fa8db
    int64_t v13 = v12 ? -1 : 1; // 0x1fa929
    int64_t v14 = v1 + v13; // 0x1fa929
    v1 = v14;
    int64_t result2 = v11; // 0x1fa931
    if (v10 > -1 - v9 || v10 == -v9) {
        char v15 = *(char *)(v4 - 6); // 0x1fa933
        int64_t v16 = v12 ? -4 : 4; // 0x1fa937
        result2 = unknown_ffffffffe9379b3e(v13 + a1, v14 + v16, 0x1e83862, 256 * (int64_t)((char)(v3 / 256) - v15) | v3 & -0xff01);
    }
    // 0x1fa8e6
    return result2;
}

// Address range: 0x1fa963 - 0x1fa964
int64_t function_1fa963(int64_t a1) {
    // 0x1fa963
    int64_t result; // 0x1fa963
    return result;
}

// Address range: 0x1fa967 - 0x1fa96d
int64_t function_1fa967(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1fa967
    int64_t result; // 0x1fa967
    int32_t * v1 = (int32_t *)(8 * result + a2); // 0x1fa967
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1fa9d3 - 0x1fa9d4
int64_t function_1fa9d3(void) {
    // 0x1fa9d3
    int64_t result; // 0x1fa9d3
    return result;
}

// Address range: 0x1fa9eb - 0x1faa16
int64_t function_1fa9eb(int64_t a1) {
    // 0x1fa9eb
    unknown_6e9990f6();
    int64_t v1; // 0x1fa9eb
    int32_t v2 = (int32_t)v1 < 0x24260dab; // 0x1fa9f6
    int64_t v3; // 0x1fa9eb
    uint32_t v4 = (int32_t)v3 % 32; // 0x1fa9f9
    uint32_t v5; // 0x1fa9f9
    if (v4 != 0) {
        v5 = *(int32_t *)0x66568e15;
        *(int32_t *)0x66568e15 = v5 >> 32 - v4 | v5 << v4;
    }
    uint32_t v6 = (int32_t)unknown_240f8105() + (int32_t)v1; // 0x1faa04
    int64_t v7 = v3 - 1; // 0x1faa0b
    int64_t result = v6 + 0x20d04c7c; // 0x1faa0b
    if (v7 != 0) {
        result = function_1fa9d3();
    }
    // 0x1faa0d
    int64_t v8; // 0x1fa9eb
    uint32_t v9 = (int32_t)(int64_t)&v8 + (int32_t)v1 + v2; // 0x1fa9f7
    int64_t v10 = v9; // 0x1faa0d
    v2 = 1;
    while (v6 > 0xdf2fb383) {
        // 0x1fa9f7
        v4 = (int32_t)v7 % 32;
        if (v4 != 0) {
            v5 = *(int32_t *)0x66568e15;
            *(int32_t *)0x66568e15 = v5 >> 32 - v4 | v5 << v4;
        }
        v6 = (int32_t)unknown_240f8105() + (int32_t)v1;
        v7--;
        result = v6 + 0x20d04c7c;
        if (v7 != 0) {
            result = function_1fa9d3();
        }
        // 0x1faa0d
        v9 = (int32_t)v10 + (int32_t)v1 + v2;
        v10 = v9;
        v2 = 1;
    }
    int32_t * v11 = (int32_t *)(result + 7); // 0x1faa0f
    *v11 = *v11 + v9;
    return result;
}

// Address range: 0x23d8b6 - 0x23d8b7
int64_t function_23d8b6(void) {
    // 0x23d8b6
    int64_t result; // 0x23d8b6
    return result;
}

// Address range: 0x2968a8 - 0x2968ca
int64_t function_2968a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2968a8
    __asm_in(78);
    __asm_out_135(60, __asm_in_134((int16_t)a3));
    int32_t * v1 = (int32_t *)(a2 - 93); // 0x2968bc
    *v1 = *v1 >> 1;
    return function_aca3ea0();
}

// Address range: 0x2968e5 - 0x2968e6
int64_t function_2968e5(void) {
    // 0x2968e5
    int64_t result; // 0x2968e5
    return result;
}

// Address range: 0x2968fa - 0x2968ff
int64_t function_2968fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2968fa
    int64_t result; // 0x2968fa
    *(char *)a1 = (char)result + (char)a4;
    return result;
}

// Address range: 0x29690d - 0x296935
int64_t function_29690d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x29690d
    bool v1; // 0x29690d
    bool v2 = v1;
    int64_t v3; // 0x29690d
    uint64_t v4 = (v3 & 0xffffffff | 0x100000000 * a3) / (int64_t)*(int32_t *)(v3 + 0x6ee50a2); // 0x29690d
    int64_t result = v4 & 0xffffffff; // 0x29690d
    unsigned char v5 = (char)(a4 / 256); // 0x296914
    unsigned char v6 = *(char *)(a4 + 0x5580587e) + (char)v2; // 0x296914
    bool v7 = v2 ? v6 != -1 | (char)v2 + v5 - v6 > v5 : v6 > v5; // 0x296914
    char * v8 = (char *)result; // 0x29691a
    *v8 = *v8 - (char)v4 + (char)v7;
    return result;
}

// Address range: 0x296978 - 0x29697b
int64_t function_296978(int64_t a1) {
    // 0x296978
    int64_t result; // 0x296978
    return result;
}

// Address range: 0x296994 - 0x296998
int64_t function_296994(int64_t a1, int64_t a2, int64_t a3) {
    // 0x296994
    int64_t result; // 0x296994
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x296aa8 - 0x296aa9
int64_t function_296aa8(void) {
    // 0x296aa8
    int64_t result; // 0x296aa8
    return result;
}

// Address range: 0x296af0 - 0x296af3
int64_t function_296af0(int64_t a1) {
    // 0x296af0
    int64_t result; // 0x296af0
    return result;
}

// Address range: 0x296b4b - 0x296b4f
int64_t function_296b4b(void) {
    // 0x296b4b
    int64_t result; // 0x296b4b
    return result;
}

// Address range: 0x296b69 - 0x296b6c
int64_t function_296b69(int64_t a1) {
    // 0x296b69
    int64_t result; // 0x296b69
    return result;
}

// Address range: 0x296bca - 0x296bf3
int64_t function_296bca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x296bca
    int64_t v1; // 0x296bca
    char v2 = (uint64_t)v1 / 256; // 0x296bcb
    *(char *)0x14287ad2 = *(char *)0x14287ad2 + v2;
    char * v3 = (char *)((a4 - 256 * v1 & 0xff00 | a4 & -0xff01) - 44); // 0x296bdc
    int64_t v4 = a1; // 0x296bd1
    while (true) {
        // 0x296bd3
        int64_t v5; // 0x296bca
        *(int64_t *)(v5 - 8) = 0x6837e000;
        *v3 = *v3 + (char)a3;
        bool v6; // 0x296bca
        int64_t v7 = v4 + (v6 ? -4 : 4); // 0x296bdf
        int64_t v8 = v5 - 16; // 0x296be0
        int64_t * v9 = (int64_t *)v8; // 0x296be0
        *v9 = v7;
        char * v10 = (char *)(v7 - 0x5afec22d); // 0x296be1
        *v10 = *v10 + v2;
        v4 = *v9;
        int64_t v11; // 0x296bca
        *v9 = v11;
        v5 = v8 - (int64_t)&g1;
        v11 = v8;
    }
}

// Address range: 0x296c12 - 0x296c18
int64_t function_296c12(int64_t a1) {
    // 0x296c12
    int64_t result; // 0x296c12
    return result;
}

// Address range: 0x296c92 - 0x296c9a
int64_t function_296c92(int64_t a1, int64_t a2, int64_t a3) {
    // 0x296c92
    int64_t result; // 0x296c92
    *(int32_t *)a3 = (int32_t)(result | a1);
    __asm_out_133(28, (char)result);
    return result;
}

// Address range: 0x296c9b - 0x296cae
int64_t function_296c9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x296c9b
    return function_33f11372();
}

// Address range: 0x296cdf - 0x296d34
int64_t function_296cdf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x296cdf
    int64_t v1; // 0x296cdf
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x296cdf
    int64_t v3 = v2 ? -4 : 4; // 0x296cdf
    int64_t v4 = v3 + a1; // 0x296cdf
    __asm_out_136((int16_t)a3, (int32_t)v1);
    int32_t * v5 = (int32_t *)(v4 - 0x57c5c068); // 0x296ce1
    *v5 = *v5 + (int32_t)a3;
    int32_t * v6 = (int32_t *)(v3 + a2); // 0x296ce7
    *v6 = *v6 ^ (int32_t)v1;
    int32_t * v7 = (int32_t *)v4; // 0x296d01
    *v7 = *v7 + (int32_t)v4;
    __asm_in(-20);
    unknown_ffffffffe5b5d615();
    unknown_3d2b5520();
    int32_t * v8 = (int32_t *)(a3 + 55); // 0x296d2a
    int64_t v9; // bp-8, 0x296cdf
    *v8 = *v8 + (int32_t)(int64_t)&v9;
    return (int64_t)(*(int32_t *)-0x177748c37c25f338 & -179);
}

// Address range: 0x296d36 - 0x296d3b
int64_t function_296d36(void) {
    // 0x296d36
    return function_ffffffff95246be3();
}

// Address range: 0x296d61 - 0x296d82
int64_t function_296d61(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x296d61
    unknown_3a340d68();
    *(int32_t *)-0x6d8e9838 = *(int32_t *)-0x6d8e9838 + (int32_t)a2;
    int64_t result = __asm_in(-24); // 0x296d77
    int32_t * v1 = (int32_t *)(result + 0x6dc4646); // 0x296d79
    *v1 = *v1 + (int32_t)a4;
    return result;
}

// Address range: 0x296dd3 - 0x296e15
int64_t function_296dd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int64_t v2 = unknown_ffffffff972a0ad9(); // 0x296dd3
    int32_t * v3 = (int32_t *)(a4 + 0x2dc49a00); // 0x296dd8
    uint32_t v4 = *v3; // 0x296dd8
    uint32_t v5 = (int32_t)a4 % 32; // 0x296dd8
    int32_t v6 = a1;
    int32_t v7 = v6; // 0x296dd8
    int64_t v8 = a1; // 0x296dd8
    int32_t v9 = v6; // 0x296dd8
    if (v5 != 0) {
        bool v10; // 0x296dd3
        *v3 = v4 >> v5 | (int32_t)(bool)v10 << 32 - v5 | (int32_t)((int64_t)v4 << (int64_t)(33 - v5));
        v8 = v1;
        v7 = v8;
        v9 = *(int32_t *)&v1;
    }
    int32_t v11 = v2; // 0x296dde
    *(int32_t *)0x20f93901e8700728 = v11;
    __asm_out_136((int16_t)a3, v11);
    *(char *)0x652e14a46008ef57 = (char)v2;
    unknown_82ecdf9();
    *(int32_t *)v8 = v9 + v7;
    return unknown_ffffffff9c1fb715();
}

// Address range: 0x296e15 - 0x296e1e
int64_t function_296e15(void) {
    // 0x296e15
    return function_296e21();
}

// Address range: 0x296e1f - 0x296e21
int64_t function_296e1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x296e1f
    int64_t result; // 0x296e1f
    return result;
}

// Address range: 0x296e21 - 0x296e25
int64_t function_296e21(void) {
    // 0x296e21
    int64_t result; // 0x296e21
    return result;
}

// Address range: 0x296eba - 0x296ebb
int64_t function_296eba(int64_t a1) {
    // 0x296eba
    int64_t result; // 0x296eba
    return result;
}

// Address range: 0x296ede - 0x296edf
int64_t function_296ede(void) {
    // 0x296ede
    int64_t result; // 0x296ede
    return result;
}

// Address range: 0x296efa - 0x296f0d
int64_t function_296efa(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a2 - 42); // 0x296efa
    int64_t v2; // 0x296efa
    *v1 = *v1 + (char)v2;
    __asm_sti();
    char * v3 = (char *)(v2 + 0xa68ebed); // 0x296f04
    unsigned char v4 = *v3; // 0x296f04
    *v3 = v4 / 128 | 2 * v4;
    return function_296ede();
}

// Address range: 0x296fc7 - 0x296fca
int64_t function_296fc7(void) {
    // 0x296fc7
    int64_t result; // 0x296fc7
    return result;
}

// Address range: 0x296ffc - 0x296ffd
int64_t function_296ffc(void) {
    // 0x296ffc
    int64_t result; // 0x296ffc
    return result;
}

// Address range: 0x29701b - 0x29701d
int64_t function_29701b(void) {
    // 0x29701b
    int64_t v1; // 0x29701b
    return function_297060(v1, v1, v1, v1);
}

// Address range: 0x29703c - 0x297042
int64_t function_29703c(void) {
    // 0x29703c
    int64_t result; // 0x29703c
    return result;
}

// Address range: 0x297060 - 0x2970a8
int64_t function_297060(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x297060
    int64_t v2 = a3; // 0x297060
    if (v1 != 0) {
        v2 = a3 & -256 | (int64_t)((char)a3 >> v1);
    }
    __asm_wait(a1);
    unknown_ffffffffb0372a6d();
    float80_t v3; // 0x297060
    *(int16_t *)(v2 + 0x6ee76bf) = (int16_t)v3;
    __asm_in_137(-75);
    *(int32_t *)0x4e770e01e88c1f38 = (int32_t)unknown_ffffffff8b1ea189();
    return unknown_72943a9();
}

// Address range: 0x4af02a - 0x4af039
int64_t function_4af02a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4af02a
    int64_t result; // 0x4af02a
    return result;
}

// Address range: 0x4af040 - 0x4af825
int64_t function_4af040(int64_t a1) {
    int64_t v1 = 0; // bp-440, 0x4af06a
    int64_t v2; // bp-344, 0x4af040
    function_4adc80(&v2);
    int64_t v3 = 1;
    uint64_t v4 = v3 + 0xffffffff; // 0x4af0a0
    int64_t v5 = (int32_t)v4 >> 1; // 0x4af0ab
    uint64_t v6 = v4 % 2; // 0x4af0ae
    int64_t v7; // 0x4af040
    int64_t v8; // 0x4af1b0
    if ((int32_t)a1 != 0) {
        // 0x4af190
        v8 = 64 * v5 + 128 & 0xffffffc0;
        printf("  AES-ECB-%3d (%s): ", v8, v6 != 0 ? "enc" : "dec");
        v7 = v8;
    } else {
        // 0x4af0bb
        v7 = 64 * v5 + 128 & 0xffffffc0;
    }
    int64_t v9 = v7;
    int64_t str = 0; // bp-408, 0x4af0c5
    int64_t v10; // 0x4af040
    int32_t v11; // 0x4af178
    int32_t v12; // 0x4af105
    if (v6 != 0) {
        // 0x4af150
        function_4add30(&v2, &v1, v9);
        v11 = (int64_t)&g2;
        function_4aec20(&v2, 1, &str, &str);
        v11--;
        v10 = (int64_t)&g4;
        while (v11 != 0) {
            // 0x4af160
            function_4aec20(&v2, 1, &str, &str);
            v11--;
            v10 = (int64_t)&g4;
        }
    } else {
        // 0x4af0e5
        function_4ae080(&v2, &v1, v9);
        v12 = (int64_t)&g2;
        function_4aec20(&v2, 0, &str, &str);
        v12--;
        v10 = (int64_t)&g3;
        while (v12 != 0) {
            // 0x4af0f0
            function_4aec20(&v2, 0, &str, &str);
            v12--;
            v10 = (int64_t)&g3;
        }
    }
    int64_t v13; // 0x4af040
    while (memcmp(&str, (int64_t *)(v10 + (0x100000000 * v5 >> 28)), 16) == 0) {
        if ((int32_t)a1 != 0) {
            // 0x4af1c1
            puts("passed");
            if (v3 == 6) {
                // 0x4af1d7
                putchar(10);
                // 0x4af1e1
                v13 = 1;
                goto lab_0x4af1e7;
            }
        } else {
            if (v3 == 6) {
                // 0x4af1e1
                v13 = 1;
                goto lab_0x4af1e7;
            }
        }
        // 0x4af143
        v3 = v3 + 1 & 0xffffffff;
        v4 = v3 + 0xffffffff;
        v5 = (int32_t)v4 >> 1;
        v6 = v4 % 2;
        if ((int32_t)a1 != 0) {
            // 0x4af190
            v8 = 64 * v5 + 128 & 0xffffffc0;
            printf("  AES-ECB-%3d (%s): ", v8, v6 != 0 ? "enc" : "dec");
            v7 = v8;
        } else {
            // 0x4af0bb
            v7 = 64 * v5 + 128 & 0xffffffc0;
        }
        // 0x4af0c2
        v9 = v7;
        str = 0;
        if (v6 != 0) {
            // 0x4af150
            function_4add30(&v2, &v1, v9);
            v11 = (int64_t)&g2;
            function_4aec20(&v2, 1, &str, &str);
            v11--;
            v10 = (int64_t)&g4;
            while (v11 != 0) {
                // 0x4af160
                function_4aec20(&v2, 1, &str, &str);
                v11--;
                v10 = (int64_t)&g4;
            }
        } else {
            // 0x4af0e5
            function_4ae080(&v2, &v1, v9);
            v12 = (int64_t)&g2;
            function_4aec20(&v2, 0, &str, &str);
            v12--;
            v10 = (int64_t)&g3;
            while (v12 != 0) {
                // 0x4af0f0
                function_4aec20(&v2, 0, &str, &str);
                v12--;
                v10 = (int64_t)&g3;
            }
        }
    }
    goto lab_0x4af38b;
  lab_0x4af38b:;
    int64_t result = 1; // 0x4af393
    if ((int32_t)a1 != 0) {
        // 0x4af80d
        puts("failed");
        result = 1;
    }
  lab_0x4af399:
    // 0x4af399
    function_4add10(&v2);
    return result;
  lab_0x4af1e7:;
    int64_t v14 = v13;
    uint64_t v15 = v14 + 0xffffffff; // 0x4af1e7
    int64_t v16 = (int32_t)v15 >> 1; // 0x4af1f2
    uint64_t v17 = v15 % 2; // 0x4af1f5
    int64_t v18; // 0x4af040
    if ((int32_t)a1 != 0) {
        int64_t v19 = 64 * v16 + 128 & 0xffffffc0; // 0x4af2e6
        printf("  AES-CBC-%3d (%s): ", v19, v17 != 0 ? "enc" : "dec");
        v18 = v19;
        goto lab_0x4af209;
    } else {
        // 0x4af202
        v18 = 64 * v16 + 128 & 0xffffffc0;
        goto lab_0x4af209;
    }
  lab_0x4af209:;
    int64_t v20 = v18;
    int64_t v21 = 0; // bp-504, 0x4af20c
    int64_t str2 = 0; // bp-488, 0x4af21e
    str = 0;
    int32_t v22; // 0x4af040
    int32_t v23; // 0x4af040
    if (v17 != 0) {
        // 0x4af2f7
        function_4add30(&v2, &v1, v20);
        v23 = (int64_t)&g2;
        goto lab_0x4af308;
    } else {
        // 0x4af254
        function_4ae080(&v2, &v1, v20);
        v22 = (int64_t)&g2;
        goto lab_0x4af260;
    }
  lab_0x4af308:
    // 0x4af308
    function_4aecc0(&v2, 1, 16, &v21, &str, &str);
    int64_t v24 = str2; // 0x4af332
    int32_t v25 = v23 - 1; // 0x4af337
    str2 = str;
    str = v24;
    v23 = v25;
    if (v25 != 0) {
        goto lab_0x4af308;
    } else {
        int32_t memcmp_rc = memcmp(&str2, (int64_t *)((0x100000000 * v16 >> 28) + (int64_t)&g6), 16); // 0x4af37e
        if (memcmp_rc == 0) {
            goto lab_0x4af2aa;
        } else {
            goto lab_0x4af38b;
        }
    }
  lab_0x4af260:
    // 0x4af260
    function_4aecc0(&v2, 0, 16, &v21, &str, &str);
    int32_t v26 = v22 - 1; // 0x4af27f
    v22 = v26;
    if (v26 != 0) {
        goto lab_0x4af260;
    } else {
        int32_t memcmp_rc2 = memcmp(&str, (int64_t *)((0x100000000 * v16 >> 28) + (int64_t)&g5), 16); // 0x4af29d
        if (memcmp_rc2 != 0) {
            goto lab_0x4af38b;
        } else {
            goto lab_0x4af2aa;
        }
    }
  lab_0x4af2aa:;
    int64_t v27; // 0x4af040
    if ((int32_t)a1 != 0) {
        // 0x4af3ba
        puts("passed");
        if (v14 != 6) {
            // 0x4af2bd
            v13 = v14 + 1 & 0xffffffff;
            goto lab_0x4af1e7;
        } else {
            // 0x4af3d0
            putchar(10);
            // 0x4af3da
            v27 = 1;
            goto lab_0x4af3df;
        }
    } else {
        if (v14 == 6) {
            // 0x4af3da
            v27 = 1;
            goto lab_0x4af3df;
        } else {
            // 0x4af2bd
            v13 = v14 + 1 & 0xffffffff;
            goto lab_0x4af1e7;
        }
    }
  lab_0x4af3df:;
    int64_t v28 = v27;
    uint64_t v29 = v28 + 0xffffffff; // 0x4af3df
    uint64_t v30 = v29 % 2; // 0x4af3e6
    int32_t v31 = (int32_t)v29 >> 1; // 0x4af3ea
    int64_t v32 = v31; // 0x4af3ea
    int64_t v33 = v32 + 2;
    int64_t v34; // 0x4af040
    if ((int32_t)a1 != 0) {
        int64_t v35 = 64 * v33 & 0xffffffc0; // 0x4af774
        printf("  AES-CFB128-%3d (%s): ", v35, v30 != 0 ? "enc" : "dec");
        v34 = v35;
        goto lab_0x4af402;
    } else {
        // 0x4af3f6
        v34 = 64 * v33 & 0xffffffc0;
        goto lab_0x4af402;
    }
  lab_0x4af402:;
    int64_t v36 = v31; // 0x4af410
    v21 = 0x706050403020100;
    memcpy(&v1, (int64_t *)((0x100000000 * v32 >> 27) + (int64_t)&g7), 8 * v31 + 16);
    int64_t v37 = 0; // bp-512, 0x4af452
    function_4add30(&v2, &v1, v34);
    if (v30 != 0) {
        // 0x4af535
        str = -0x6960bfd11d413e95;
        function_4aedd0(&v2, 1, 64, &v37, &v21, &str, &str);
        int32_t memcmp_rc3 = memcmp(&str, (int64_t *)(64 * v36 + (int64_t)&g8), 64); // 0x4af5ee
        if (memcmp_rc3 != 0) {
            goto lab_0x4af38b;
        } else {
            if ((int32_t)a1 == 0) {
                goto lab_0x4af523;
            } else {
                goto lab_0x4af604;
            }
        }
    } else {
        // 0x4af469
        str = *(int64_t *)(64 * v36 + (int64_t)&g8);
        function_4aedd0(&v2, 0, 64, &v37, &v21, &str, &str);
        if (memcmp(&str, &g9, 64) != 0) {
            goto lab_0x4af38b;
        } else {
            if ((int32_t)a1 != 0) {
                goto lab_0x4af604;
            } else {
                goto lab_0x4af523;
            }
        }
    }
  lab_0x4af523:;
    int64_t v38; // 0x4af040
    if (v28 == 6) {
        // 0x4af623
        v38 = 1;
        goto lab_0x4af630;
    } else {
        // 0x4af52c
        v27 = v28 + 1 & 0xffffffff;
        goto lab_0x4af3df;
    }
  lab_0x4af604:
    // 0x4af604
    puts("passed");
    if (v28 != 6) {
        // 0x4af52c
        v27 = v28 + 1 & 0xffffffff;
        goto lab_0x4af3df;
    } else {
        // 0x4af619
        putchar(10);
        // 0x4af623
        v38 = 1;
        goto lab_0x4af630;
    }
  lab_0x4af630:;
    int64_t v39 = v38;
    uint64_t v40 = v39 + 0xffffffff; // 0x4af630
    uint64_t v41 = v40 % 2; // 0x4af637
    if ((int32_t)a1 == 0) {
        goto lab_0x4af666;
    } else {
        // 0x4af643
        printf("  AES-CTR-128 (%s): ", v41 != 0 ? "enc" : "dec");
        goto lab_0x4af666;
    }
  lab_0x4af666:;
    int32_t v42 = (int32_t)v40 >> 1; // 0x4af63b
    int64_t v43 = v42; // 0x4af666
    v37 = 0;
    int64_t v44 = 0x100000000 * (int64_t)v42 >> 28; // 0x4af682
    int64_t v45 = *(int64_t *)(v44 + (int64_t)&g10); // bp-472, 0x4af69d
    v1 = *(int64_t *)(v44 + (int64_t)&g11);
    function_4add30(&v2, &v1, 128);
    int32_t n = *(int32_t *)(4 * v43 + (int64_t)&g12);
    int64_t v46 = n;
    int64_t v47 = 48 * v43;
    int64_t v48; // bp-456, 0x4af040
    int64_t v49; // 0x4af040
    if (v41 != 0) {
        // 0x4af78d
        memcpy(&str, (int64_t *)(v47 + (int64_t)"Single block msg"), n);
        function_4aef80(&v2, v46, &v37, &v45, &v48, &str, &str);
        v49 = (int64_t)&g13;
        goto lab_0x4af71e;
    } else {
        // 0x4af6c9
        memcpy(&str, (int64_t *)(v47 + (int64_t)&g13), n);
        function_4aef80(&v2, v46, &v37, &v45, &v48, &str, &str);
        v49 = (int64_t)"Single block msg";
        goto lab_0x4af71e;
    }
  lab_0x4af71e:
    // 0x4af71e
    if (memcmp(&str, (int64_t *)(v49 + v47), n) != 0) {
        goto lab_0x4af38b;
    } else {
        if ((int32_t)a1 != 0) {
            // 0x4af7e7
            puts("passed");
            if (v39 != 6) {
                // 0x4af746
                v38 = v39 + 1 & 0xffffffff;
                goto lab_0x4af630;
            } else {
                // 0x4af7fc
                putchar(10);
                result = 0;
                goto lab_0x4af399;
            }
        } else {
            // 0x4af73d
            result = 0;
            if (v39 == 6) {
                goto lab_0x4af399;
            } else {
                // 0x4af746
                v38 = v39 + 1 & 0xffffffff;
                goto lab_0x4af630;
            }
        }
    }
}
