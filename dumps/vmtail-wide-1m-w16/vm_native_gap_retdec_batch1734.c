/*
 * Targeted RetDec C for native executable gap queue batch 1734.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x30db8-0x30fb8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x30fb8-0x311b8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x313b8-0x313eb rank=- name=- kind=- bytes=- uncovered=-
 *   0x6524a-0x6544a rank=- name=- kind=- bytes=- uncovered=-
 *   0x6544a-0x6564a rank=- name=- kind=- bytes=- uncovered=-
 *   0x6584a-0x65850 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1aa6bb-0x1aa8bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1aaabb-0x1aaadd rank=- name=- kind=- bytes=- uncovered=-
 *   0x30e458-0x30e658 rank=- name=- kind=- bytes=- uncovered=-
 *   0x30e658-0x30e858 rank=- name=- kind=- bytes=- uncovered=-
 *   0x30e858-0x30ea58 rank=- name=- kind=- bytes=- uncovered=-
 *   0x30ea58-0x30ea80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4897c0-0x4899c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4899c0-0x489bc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x489bc0-0x489dc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x489dc0-0x489dce rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1aa6a9();
int64_t function_1aa6bb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1aa749(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1aa78e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1aa7c8(void);
int64_t function_1aa865(void);
int64_t function_1aa86d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1aaabb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1da949e2();
int64_t function_2399cd09();
int64_t function_25b8e408();
int64_t function_270248();
int64_t function_2c930();
int64_t function_2d980();
int64_t function_307d0();
int64_t function_30c30();
int64_t function_30db8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30e33(void);
int64_t function_30e3a(void);
int64_t function_30e40(void);
int64_t function_30e458(void);
int64_t function_30e46d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30e5d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30e5e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_30e70c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30e86d(void);
int64_t function_30e8a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30e8b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30e8df(int64_t a1);
int64_t function_30e90b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_30e9a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30e9b(int64_t a1);
int64_t function_30ea0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30ea3a(void);
int64_t function_30ea4(int64_t a1);
int64_t function_30ea45(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_30eac(void);
int64_t function_30ee3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30f0e(void);
int64_t function_30f12(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30f44(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30f57(void);
int64_t function_30f5e(void);
int64_t function_30f77(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30f95(void);
int64_t function_30f99(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3101a(void);
int64_t function_31043(void);
int64_t function_31057(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_310b0(int64_t a1, int64_t a2);
int64_t function_310e0(int64_t a1, int64_t a2);
int64_t function_31110(int64_t a1, int64_t a2);
int64_t function_31140(int64_t a1, int64_t a2);
int64_t function_31160(int64_t a1, int64_t a2);
int64_t function_3139a();
int64_t function_313b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_313df(void);
int64_t function_33be0();
int64_t function_3914a3();
int64_t function_396e5e();
int64_t function_47b8cb34();
int64_t function_4897c0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48980a(void);
int64_t function_48981f(void);
int64_t function_489820(void);
int64_t function_489824(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_489846(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_489878(void);
int64_t function_489889(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_489918(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_489963(void);
int64_t function_489997(void);
int64_t function_4899a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4899c5(int64_t a1);
int64_t function_4899cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4899e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_489a0a(void);
int64_t function_489a12(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_489ab0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_489b12(int64_t a1);
int64_t function_489b60(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_489c73(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_489da2(int64_t result);
int64_t function_489da6(int64_t a1);
int64_t function_4eeb50();
int64_t function_6524a(void);
int64_t function_652fe(void);
int64_t function_6531f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6535b(int64_t a1, int64_t a2);
int64_t function_6536c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6537c(void);
int64_t function_6538e(void);
int64_t function_65398(int64_t a1, int64_t a2, int64_t a3);
int64_t function_653c7(int64_t a1);
int64_t function_6541f(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_6548d(int64_t a1, int64_t a2, int32_t a3);
int64_t function_65537(int64_t a1);
int64_t function_65548(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_6559a(void);
int64_t function_65617(void);
int64_t function_65620(void);
int64_t function_6584a(void);
int64_t function_6584c(int64_t result);
int64_t function_cf3c7();
int64_t function_ffffffff9e6fea1f();
int64_t function_ffffffffb4fdbb78();
int64_t function_ffffffffd62a082a();
int64_t unknown_148fc4c2();
int64_t unknown_2c7d1425();
int64_t unknown_3a90494d();
int64_t unknown_3dee5b9a();
int64_t unknown_5719385e();
int64_t unknown_7e37294f();
int64_t unknown_ffffffff81a76740();
int64_t unknown_ffffffff8848d777();
int64_t unknown_ffffffffb46ee658();
int64_t unknown_ffffffffc22092cd();
int64_t unknown_ffffffffc5008d09();
int64_t unknown_ffffffffcbbf5055();
int64_t unknown_ffffffffdfe3ff34();
int64_t unknown_fffffffff4ab31f5();

// Address range: 0x30db8 - 0x30e07
int64_t function_30db8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30db8
    int64_t v1; // 0x30db8
    int32_t v2 = v1;
    *(int32_t *)v1 = 2 * v2;
    int64_t v3; // 0x30db8
    unsigned char v4 = *(char *)&v3; // 0x30dbd
    unsigned char v5 = v4 + (char)v1; // 0x30dbd
    *(char *)v3 = v5;
    char * v6 = (char *)(v3 + 80); // 0x30dbf
    unsigned char v7 = *v6; // 0x30dbf
    char v8 = v5 < v4; // 0x30dbf
    unsigned char v9 = (char)(v3 / 256) + v8; // 0x30dbf
    char v10 = v7 - v9; // 0x30dbf
    bool v11 = v5 < v4 ? v9 != -1 | v7 < v10 - v8 : v7 < v9; // 0x30dbf
    *v6 = v10;
    int32_t * v12 = (int32_t *)(v3 - 0x7179fe85); // 0x30dc2
    uint32_t v13 = *v12; // 0x30dc2
    uint32_t v14 = v13 + 0x65dc9a4a + (int32_t)v11; // 0x30dc2
    bool v15 = v11 ? v14 <= v13 : v13 > 0x9a2365b5; // 0x30dc2
    *v12 = v14;
    __asm_out((int16_t)a3, (v2 + 0x13a95d1d + (int32_t)v15 & 0x66ea6f6c) + 0x20a4b5);
    __asm_iretd();
    int64_t v16 = __asm_hlt(); // 0x30df1
    int32_t v17 = *(int32_t *)(a3 + 0x61b710d4); // 0x30df2
    int64_t v18 = v3 & 0xffff00ff | (int64_t)(int32_t)&g1; // 0x30df8
    *(char *)v18 = *(char *)(int64_t)(v17 + (int32_t)a2);
    bool v19; // 0x30db8
    return (int64_t)((int32_t)v16 - *(int32_t *)(v18 + (v19 ? -1 : 1)));
}

// Address range: 0x30e33 - 0x30e34
int64_t function_30e33(void) {
    // 0x30e33
    int64_t result; // 0x30e33
    return result;
}

// Address range: 0x30e3a - 0x30e3c
int64_t function_30e3a(void) {
    // 0x30e3a
    int64_t v1; // 0x30e3a
    return function_30e8b(v1, v1, v1, v1);
}

// Address range: 0x30e40 - 0x30e42
int64_t function_30e40(void) {
    // 0x30e40
    int64_t result; // 0x30e40
    return result;
}

// Address range: 0x30e5e - 0x30e63
int64_t function_30e5e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x30e5e
    int64_t result; // 0x30e5e
    return result;
}

// Address range: 0x30e8b - 0x30e90
int64_t function_30e8b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)a4; // 0x30e8b
    int64_t result; // 0x30e8b
    *v1 = 2 * (int32_t)result;
    int64_t v2; // 0x30e8b
    *v1 = *(int32_t *)&v2 & (int32_t)a4;
    return result;
}

// Address range: 0x30e9b - 0x30e9c
int64_t function_30e9b(int64_t a1) {
    // 0x30e9b
    int64_t result; // 0x30e9b
    return result;
}

// Address range: 0x30ea4 - 0x30ea7
int64_t function_30ea4(int64_t a1) {
    // 0x30ea4
    int64_t result; // 0x30ea4
    return result;
}

// Address range: 0x30eac - 0x30eb6
int64_t function_30eac(void) {
    // 0x30eac
    int64_t v1; // 0x30eac
    bool v2; // 0x30eac
    return v1 - (v2 ? 0x78204303 : 0x78204302) & 0xffffffff;
}

// Address range: 0x30ee3 - 0x30ee8
int64_t function_30ee3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30ee3
    int64_t result; // 0x30ee3
    return result;
}

// Address range: 0x30f0e - 0x30f10
int64_t function_30f0e(void) {
    // 0x30f0e
    int64_t v1; // 0x30f0e
    return function_30f77(v1, v1, v1, v1);
}

// Address range: 0x30f12 - 0x30f42
int64_t function_30f12(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30f12
    int64_t v1; // 0x30f12
    int64_t result = v1;
    bool v2; // 0x30f12
    if (a4 == 1 || v2) {
        // 0x30f14
        return result;
    }
    if (!v2) {
        // 0x30f1b
        return result & -0x10000 | (result & 0xff00) + result & 0xff00 | 159;
    }
    // 0x30f3a
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result2; // 0x30f12
    int64_t v3 = result2;
    *(char *)v3 = *(char *)&result2 & (char)v3;
    int64_t v4; // bp-8, 0x30f12
    int32_t * v5 = (int32_t *)(v1 + (int64_t)&v4); // 0x30f3f
    *v5 = *v5 + (int32_t)a3;
    return result2;
}

// Address range: 0x30f44 - 0x30f4c
int64_t function_30f44(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x30f44
    int64_t result; // 0x30f44
    return result;
}

// Address range: 0x30f57 - 0x30f5b
int64_t function_30f57(void) {
    // 0x30f57
    int64_t v1; // 0x30f57
    int64_t result = function_30f99(v1, v1, v1, v1, (int64_t)&g3, (int64_t)&g3, (int64_t)&g3); // 0x30f59
    return result;
}

// Address range: 0x30f5e - 0x30f63
int64_t function_30f5e(void) {
    // 0x30f5e
    return function_47b8cb34();
}

// Address range: 0x30f77 - 0x30f93
int64_t function_30f77(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_int1(a1, a2); // 0x30f77
    __asm_out_133(26, (int32_t)v1);
    __asm_rcl(*(int32_t *)(2 * v1));
    int64_t result = a3 & 0xffffffff; // 0x30f8a
    char * v2 = (char *)(result + 0x46a73cf8); // 0x30f8b
    *v2 = *v2 + (char)a3;
    return result;
}

// Address range: 0x30f95 - 0x30f98
int64_t function_30f95(void) {
    // 0x30f95
    int64_t result; // 0x30f95
    return result;
}

// Address range: 0x30f99 - 0x3100e
int64_t function_30f99(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t result = unknown_ffffffffcbbf5055(); // 0x30f9f
    int64_t v1; // 0x30f99
    *(int32_t *)a4 = (int32_t)v1 + 100;
    *(char *)0x6a2141f87b6cf4b0 = (char)result;
    char * v2 = (char *)(4 * v1 + (int64_t)&g2); // 0x30fb3
    *v2 = *v2 + (char)v1;
    return result;
}

// Address range: 0x3101a - 0x3101b
int64_t function_3101a(void) {
    // 0x3101a
    int64_t result; // 0x3101a
    return result;
}

// Address range: 0x31043 - 0x31044
int64_t function_31043(void) {
    // 0x31043
    int64_t result; // 0x31043
    return result;
}

// Address range: 0x31057 - 0x310a2
int64_t function_31057(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31057
    int64_t v1; // 0x31057
    bool v2; // 0x31057
    if (v2) {
        v1 = function_3101a();
    }
    // 0x31059
    if (llvm_ctpop_i8((char)v1 - (v2 ? -41 : -42)) % 2 != 0) {
        function_31043();
    }
    // 0x31060
    int64_t v3; // 0x31057
    *(int32_t *)(v3 + 36) = 0;
    int64_t result = 0; // 0x31091
    if (*(int64_t *)(v3 + 704) != __readfsqword(40)) {
        // 0x31093
        __stack_chk_fail();
        result = (int64_t)&g3;
    }
    // 0x31098
    return result;
}

// Address range: 0x310b0 - 0x310d3
int64_t function_310b0(int64_t a1, int64_t a2) {
    // 0x310b0
    function_2c930(a2);
    return 1;
}

// Address range: 0x310e0 - 0x31103
int64_t function_310e0(int64_t a1, int64_t a2) {
    // 0x310e0
    function_33be0(a2);
    return 0;
}

// Address range: 0x31110 - 0x31133
int64_t function_31110(int64_t a1, int64_t a2) {
    // 0x31110
    function_2d980(a2);
    return 0;
}

// Address range: 0x31140 - 0x3115e
int64_t function_31140(int64_t a1, int64_t a2) {
    // 0x31140
    return function_307d0(a2);
}

// Address range: 0x31160 - 0x31183
int64_t function_31160(int64_t a1, int64_t a2) {
    // 0x31160
    function_30c30(a2);
    return 0;
}

// Address range: 0x313b8 - 0x313dd
int64_t function_313b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t v3; // 0x313b8
    if (a4 == 0) {
        v3 = function_3139a();
    }
    char * v4 = (char *)(a1 + 0x7f66cd); // 0x313c1
    int64_t v5; // 0x313b8
    *v4 = *v4 + (char)v5;
    char * v6 = (char *)(a1 + 64); // 0x313c7
    *v6 = *v6 + (char)v1;
    int64_t v7 = v1; // bp-16, 0x313cd
    int32_t * v8 = (int32_t *)(v5 - 0x5114f8a1); // 0x313cf
    *v8 = *v8 + (int32_t)(int64_t)&v7;
    char * v9 = (char *)(v5 + 74); // 0x313d7
    *v9 = *v9 & (char)(v5 / 256);
    *(char *)v1 = *(char *)&v1 + (char)(v3 / 256);
    return v3 & -256 | (int64_t)*(char *)&v2;
}

// Address range: 0x313df - 0x313e2
int64_t function_313df(void) {
    // 0x313df
    int64_t result; // 0x313df
    return result;
}

// Address range: 0x6524a - 0x6524b
int64_t function_6524a(void) {
    // 0x6524a
    int64_t result; // 0x6524a
    return result;
}

// Address range: 0x652fe - 0x652ff
int64_t function_652fe(void) {
    // 0x652fe
    int64_t result; // 0x652fe
    return result;
}

// Address range: 0x6531f - 0x6535b
int64_t function_6531f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x6531f
    int64_t v1; // 0x6531f
    uint64_t v2 = (v1 & 0xffffffff) * (int64_t)*(int32_t *)(a1 + 0x76ecf67b); // 0x6531f
    int64_t v3 = (v2 & 22) + 113 | v2 & 0xffffff00; // 0x65327
    *(int32_t *)v3 = (int32_t)a1;
    int64_t v4; // 0x6531f
    *(char *)a2 = *(char *)&v4 | (char)v1;
    int32_t * v5 = (int32_t *)(2 * a1 + 0x3fab9cd4); // 0x6532d
    uint32_t v6 = *v5; // 0x6532d
    *v5 = v6 + 0x53eb6319;
    int32_t v7 = *(int32_t *)&v4; // 0x65340
    int32_t v8 = v7 + (int32_t)(v2 / 0x100000000) + (int32_t)(v6 > 0xac149ce6); // 0x65340
    int64_t result = v3; // 0x65342
    if (llvm_ctpop_i8((char)v8) % 2 != 0) {
        result = function_652fe();
    }
    // 0x65344
    *(char *)a5 = __asm_insb((int16_t)v8);
    char * v9 = (char *)(a4 - 0x592ec81d); // 0x65345
    *v9 = *v9 + (char)result;
    char * v10 = (char *)(result + 0x615400a3); // 0x6534b
    *v10 = *v10 + (char)(result / 256);
    return result;
}

// Address range: 0x6535b - 0x6536a
int64_t function_6535b(int64_t a1, int64_t a2) {
    // 0x6535b
    int64_t v1; // 0x6535b
    uint64_t result = v1;
    *(int32_t *)result = (int32_t)(result & a1);
    char * v2 = (char *)(result - 34); // 0x6535d
    *v2 = *v2 | (char)(result / 256);
    char * v3 = (char *)(a2 + 127); // 0x65361
    *v3 = *v3 / 2;
    return result;
}

// Address range: 0x6536c - 0x65377
int64_t function_6536c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6536c
    int64_t v1; // 0x6536c
    return (int64_t)(*(int32_t *)(a4 - 123) | (int32_t)v1 | 0x5ad4d3a8);
}

// Address range: 0x6537c - 0x65380
int64_t function_6537c(void) {
    // 0x6537c
    int64_t v1; // 0x6537c
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x6538e - 0x65392
int64_t function_6538e(void) {
    // 0x6538e
    int64_t v1; // 0x6538e
    return (int32_t)v1 >> 31;
}

// Address range: 0x65398 - 0x653a1
int64_t function_65398(int64_t a1, int64_t a2, int64_t a3) {
    // 0x65398
    *(char *)a1 = __asm_insb((int16_t)a3);
    return function_1da949e2();
}

// Address range: 0x653c7 - 0x653d7
int64_t function_653c7(int64_t a1) {
    // 0x653c7
    __asm_wait();
    return function_25b8e408();
}

// Address range: 0x6541f - 0x65448
int64_t function_6541f(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x6541f
    int64_t v1; // 0x6541f
    char v2 = v1; // 0x65421
    *(char *)-0x1eaafdbd7ea17b0a = v2;
    uint32_t v3 = (int32_t)a4 % 32; // 0x6542a
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)(a2 + 0x3c0011cf); // 0x6542a
        *v4 = *v4 >> v3;
    }
    char * v5 = (char *)(a4 - 79 + 2 * (a3 % 256 & a4 / 256 | a3 & 0x7fffffffffffff00)); // 0x65436
    *v5 = *v5 + v2;
    int64_t result = a2 & 0xffffffff; // 0x6543a
    int32_t * v6 = (int32_t *)(result + 0x1790a857); // 0x6543d
    *v6 = 2 * *v6;
    return result;
}

// Address range: 0x6548d - 0x65506
int64_t function_6548d(int64_t a1, int64_t a2, int32_t a3) {
    // 0x6548d
    int64_t v1; // 0x6548d
    bool v2; // 0x6548d
    uint32_t v3 = (int32_t)v2 + (int32_t)v1 + *(int32_t *)(v1 + 0x1e16f4ef); // 0x6548d
    int64_t result = v3; // 0x6548d
    char v4 = (char)(v1 / 256) + (char)v1; // 0x65493
    *(char *)a2 = v4;
    if (v4 >= 1) {
        // 0x65497
        return result;
    }
    char * v5 = (char *)result; // 0x654dc
    *v5 = *v5 + 2 * (char)v3;
    __readfsqword(40);
    return function_270248();
}

// Address range: 0x65537 - 0x65547
int64_t function_65537(int64_t a1) {
    // 0x65537
    int64_t v1; // 0x65537
    int64_t v2 = v1;
    bool v3; // 0x65537
    int64_t result = (v2 + 75 + (int64_t)v3) % 256 | v2 & -256; // 0x65537
    int32_t * v4 = (int32_t *)(result + 0x60bd9281); // 0x6553d
    *v4 = *v4 + (int32_t)v1;
    return result;
}

// Address range: 0x65548 - 0x65578
int64_t function_65548(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x65548
    int64_t v1; // 0x65548
    int64_t result = v1;
    bool v2; // 0x65548
    if (!v2) {
        // 0x6554a
        *(char *)result = 2 * (char)result;
        return result;
    }
    unsigned char v3 = (char)a4 % 32; // 0x65573
    if (v3 != 0) {
        char * v4 = (char *)(a3 - 45); // 0x65573
        *v4 = *v4 >> v3;
    }
    return __asm_int1(a1, a2);
}

// Address range: 0x6559a - 0x6559c
int64_t function_6559a(void) {
    // 0x6559a
    int64_t v1; // 0x6559a
    int64_t v2 = v1;
    return (v2 + 64) % 256 | v2 & -256;
}

// Address range: 0x65617 - 0x6561a
int64_t function_65617(void) {
    // 0x65617
    int64_t result; // 0x65617
    return result;
}

// Address range: 0x65620 - 0x65625
int64_t function_65620(void) {
    // 0x65620
    return function_ffffffffb4fdbb78();
}

// Address range: 0x6584a - 0x6584b
int64_t function_6584a(void) {
    // 0x6584a
    int64_t result; // 0x6584a
    return result;
}

// Address range: 0x6584c - 0x65850
int64_t function_6584c(int64_t result) {
    // 0x6584c
    return result;
}

// Address range: 0x1aa6bb - 0x1aa6f6
int64_t function_1aa6bb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1aa6bb
    int64_t v1; // 0x1aa6bb
    unsigned char v2 = (char)(v1 / 128) & -2; // 0x1aa6bb
    int64_t v3; // 0x1aa6bb
    if (v2 == 0) {
        v3 = function_1aa6a9();
    }
    int64_t v4 = 256 * (int64_t)v2 | v1 & -0xff01; // 0x1aa6bb
    int32_t * v5 = (int32_t *)(a4 + 0x3a1237f5); // 0x1aa6c1
    uint32_t v6 = *v5; // 0x1aa6c1
    uint32_t v7 = v6 + (int32_t)a1; // 0x1aa6c1
    *v5 = v7;
    unsigned char v8 = (char)(a4 / 256); // 0x1aa6c7
    char v9 = v7 < v6; // 0x1aa6c7
    unsigned char v10 = *(char *)(v3 - 10) + v9; // 0x1aa6c7
    unsigned char v11 = v8 - v10; // 0x1aa6c7
    bool v12 = v7 < v6 ? v10 != -1 | v11 - v9 > v8 : v10 > v8; // 0x1aa6c7
    int32_t v13 = *(int32_t *)(v1 - 1); // 0x1aa6ca
    uint32_t v14 = v13 + (int32_t)v3 + (int32_t)v12 >> (int32_t)a4 % 32;
    int64_t v15 = v14;
    int32_t * v16 = (int32_t *)((256 * (int64_t)v11 | a4 & -0xff01) - 10); // 0x1aa6d0
    *v16 = *v16 + (int32_t)a3;
    __asm_out((int16_t)a3, v14);
    int64_t v17 = (int64_t)*(int32_t *)v4; // 0x1aa6db
    uint64_t v18 = -99 * v17; // 0x1aa6db
    uint64_t v19 = v18 / 256; // 0x1aa6de
    int64_t v20 = ((int64_t)(v18 != -0x6300000000 * v17 >> 32) - v19 + v15) % 256 | v15 & 0xffffff00; // 0x1aa6de
    int32_t * v21 = (int32_t *)(v20 + 5); // 0x1aa6e1
    *v21 = *v21 + (int32_t)v20;
    char * v22 = (char *)(a3 - 0xe2e31a7); // 0x1aa6e4
    char v23 = v19; // 0x1aa6e4
    *v22 = *v22 ^ v23;
    *(char *)(v4 & 0xfffffeff) = v23;
    return unknown_fffffffff4ab31f5();
}

// Address range: 0x1aa749 - 0x1aa776
int64_t function_1aa749(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1aa749
    unknown_7e37294f();
    uint32_t v1 = -57 * *(int32_t *)(a1 - 0x5bb14e3b); // 0x1aa74e
    __asm_in(-97);
    int64_t v2 = unknown_5719385e(); // 0x1aa758
    int32_t * v3 = (int32_t *)v2; // 0x1aa760
    *v3 = *v3 + (int32_t)v2;
    int32_t * v4 = (int32_t *)(int64_t)v1; // 0x1aa76e
    *v4 = *v4 + (int32_t)a1;
    int64_t v5; // 0x1aa749
    int32_t v6 = *(int32_t *)&v5; // 0x1aa770
    return (v6 & 0xff00) + v1 & 0xff00 | v6 & -0xff01;
}

// Address range: 0x1aa78e - 0x1aa7a8
int64_t function_1aa78e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1aa78e
    int64_t v1; // 0x1aa78e
    int32_t * v2 = (int32_t *)(unknown_3dee5b9a() + 2 * v1 & 0xffffffff); // 0x1aa79d
    *v2 = *v2 + (int32_t)a1;
    int64_t v3; // 0x1aa78e
    *(int32_t *)v3 = *(int32_t *)&v3 - (int32_t)a4;
    return function_ffffffffd62a082a();
}

// Address range: 0x1aa7c8 - 0x1aa7c9
int64_t function_1aa7c8(void) {
    // 0x1aa7c8
    int64_t result; // 0x1aa7c8
    return result;
}

// Address range: 0x1aa865 - 0x1aa866
int64_t function_1aa865(void) {
    // 0x1aa865
    int64_t result; // 0x1aa865
    return result;
}

// Address range: 0x1aa86d - 0x1aa8b7
int64_t function_1aa86d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1aa86d
    int64_t result; // 0x1aa86d
    bool v1; // 0x1aa86d
    if (!v1) {
        // 0x1aa86f
        float80_t v2; // 0x1aa86d
        *(float64_t *)(result - 24) = (float64_t)v2;
        *(int32_t *)(a3 - 50) = (int32_t)result + (int32_t)a3;
        return result;
    }
    if (v1 || v1) {
        // 0x1aa8ab
        return __asm_in(90) - 0x17b801e8;
    }
    // 0x1aa893
    return result;
}

// Address range: 0x1aaabb - 0x1aaacf
int64_t function_1aaabb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1aaabb
    int64_t v1; // 0x1aaabb
    __asm_outsd((int16_t)a3, (int32_t)v1);
    unknown_148fc4c2();
    return unknown_ffffffffc22092cd();
}

// Address range: 0x30e458 - 0x30e46d
int64_t function_30e458(void) {
    // 0x30e458
    int64_t v1; // 0x30e458
    return function_cf3c7(v1, v1, v1, v1, v1);
}

// Address range: 0x30e46d - 0x30e5d5
int64_t function_30e46d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x30e46d
    return function_cf3c7(a1, a2, a3, a4, a5);
}

// Address range: 0x30e5d5 - 0x30e70c
int64_t function_30e5d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30e5d5
    int64_t v1; // bp-64, 0x30e5d5
    v1 = (int64_t)&v1 + 8;
    int64_t v2; // 0x30e5d5
    return function_cf3c7(a1, a2, a3, a4, v2);
}

// Address range: 0x30e70c - 0x30e86d
int64_t function_30e70c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x30e70c
    int64_t v1; // bp-40, 0x30e70c
    int64_t v2 = (int64_t)&v1; // 0x30e795
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x30e7ad
    int64_t * v4 = (int64_t *)(v2 + 32); // 0x30e7b0
    int64_t v5 = *v4; // 0x30e7b0
    *v3 = v5;
    int64_t v6 = v2 - 16; // 0x30e7b4
    int64_t * v7 = (int64_t *)v6; // 0x30e7b4
    *v7 = v5;
    int64_t v8 = v2 + 16; // 0x30e7c6
    int64_t * v9 = (int64_t *)v8; // 0x30e7c6
    *v7 = v6;
    *v3 = v5;
    *v9 = v1;
    v1 = v2;
    *v3 = *v9;
    *v4 = v1;
    v1 = a4;
    *v3 = v8;
    *v7 = v1;
    int64_t v10 = v1; // 0x30e845
    *(int64_t *)(v10 - 16) = *(int64_t *)v10;
    *(int64_t *)(v10 - 8) = v10 + 8;
    return function_cf3c7(a1, a2, a3, v1, a5);
}

// Address range: 0x30e86d - 0x30e872
int64_t function_30e86d(void) {
    // 0x30e86d
    int64_t result; // 0x30e86d
    return result;
}

// Address range: 0x30e8a6 - 0x30e8af
int64_t function_30e8a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30e8a6
    int64_t v1; // 0x30e8a6
    *(int32_t *)a4 = 2 * (int32_t)v1;
    __asm_int1(a1, a2);
    return a2 & 0xffffffff;
}

// Address range: 0x30e8df - 0x30e8e0
int64_t function_30e8df(int64_t a1) {
    // 0x30e8df
    int64_t result; // 0x30e8df
    return result;
}

// Address range: 0x30e90b - 0x30e9a1
int64_t function_30e90b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x30e90b
    int64_t v1; // 0x30e90b
    unsigned char v2 = (char)(v1 | a4 / 256); // 0x30e90b
    int64_t v3 = a4; // 0x30e90b
    int64_t v4 = a3; // 0x30e90b
    int64_t v5 = a2; // 0x30e90b
    while (v2 == 0) {
        // 0x30e91b
        int64_t v6; // 0x30e90b
        int64_t v7 = v6;
        int64_t v8 = v3;
        *(int64_t *)(v7 - 8) = v5;
        v4 = v4 & -0xff01 | (int64_t)"alize";
        unknown_2c7d1425();
        v2 = *(char *)(v4 - 0x2a2c3958) & (char)v5;
        v5 = v5 & -256 | (int64_t)v2;
        v3 = unknown_ffffffffdfe3ff34() & 0xffffffff;
        v6 = v7 + 8;
        if (v2 >= 0) {
            int32_t * v9 = (int32_t *)(v5 + 0x33eb4c06); // 0x30e942
            *v9 = *v9 + (int32_t)v5;
            int16_t v10 = v8; // 0x30e948
            int16_t v11 = (int16_t)*(char *)v4; // 0x30e948
            *(int64_t *)v7 = -106;
            return v8 & 0xbcfe0000 | (int64_t)(v10 / v11 & 249) | (int64_t)(256 * (v10 % v11)) | 0x4301e806;
        }
    }
    // 0x30e90f
    return function_ffffffff9e6fea1f();
}

// Address range: 0x30e9a2 - 0x30ea0a
int64_t function_30e9a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4; // bp-8, 0x30e9a2
    int64_t v2; // 0x30e9a2
    int64_t v3 = v2 + a1; // 0x30e9bc
    int64_t v4 = v3 & 0xffffffff; // 0x30e9bc
    char * v5 = (char *)v4; // 0x30e9be
    unsigned char v6 = *v5; // 0x30e9be
    char v7 = (char)v2 ^ -2; // 0x30e9be
    unsigned char v8 = v6 + v7; // 0x30e9be
    *v5 = v8;
    int32_t * v9 = (int32_t *)(a3 - 0x39983efc); // 0x30e9c0
    *v9 = *v9 + (int32_t)v3 + (int32_t)(v8 < v6);
    *v5 = v7;
    bool v10; // 0x30e9a2
    int64_t v11 = v10 ? -4 : 4; // 0x30e9c7
    int64_t v12 = (v10 ? -1 : 1) + v4 + v11; // 0x30e9c7
    int64_t v13 = v11 + a2; // 0x30e9c7
    __asm_int1(v12, v13);
    int64_t * v14 = (int64_t *)(v2 - 0x45fe1748); // 0x30e9d8
    *v14 = *v14 & -100;
    int32_t * v15 = (int32_t *)(v13 - 0x17c42424); // 0x30e9e4
    *v15 = -1 - *v15;
    int32_t * v16 = (int32_t *)(v12 + 99); // 0x30e9ec
    *v16 = *v16 + (int32_t)(int64_t)&v1;
    v1 = v13;
    unknown_ffffffffc5008d09();
    return v12 & 0xffffffff;
}

// Address range: 0x30ea0a - 0x30ea1e
int64_t function_30ea0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x30ea0a
    int64_t v1; // 0x30ea0a
    char * v2 = (char *)(v1 + 0x1e80805); // 0x30ea0a
    *v2 = *v2 + (char)v1;
    int64_t v3 = v1 + 0xc56e0b6f; // 0x30ea10
    char * v4 = (char *)(v1 + 0x1e8db85); // 0x30ea15
    *v4 = *v4 + (char)a4 + (char)((int32_t)v1 < 0x3a91f491);
    __asm_out_135((int16_t)a3, (char)v3);
    return v3 & 0xffffffff;
}

// Address range: 0x30ea3a - 0x30ea44
int64_t function_30ea3a(void) {
    // 0x30ea3a
    return unknown_ffffffff81a76740();
}

// Address range: 0x30ea45 - 0x30ea7d
int64_t function_30ea45(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x30ea45
    __asm_out_134(-118, (char)unknown_3a90494d());
    int64_t v1; // 0x30ea45
    unsigned char v2 = (char)v1;
    *(char *)a4 = v2 / 128 | 2 * v2;
    int64_t v3 = unknown_ffffffffb46ee658(); // 0x30ea50
    *(int32_t *)v3 = (int32_t)a3;
    char * v4 = (char *)((v1 + a2 & 0xffffffff) - 18); // 0x30ea60
    *v4 = *v4 | (char)v1;
    *(int32_t *)-0x4bc2c5fe177256 = (int32_t)v3;
    *(char *)(v1 & 0xffffffff) = 0;
    return unknown_ffffffff8848d777();
}

// Address range: 0x4897c0 - 0x4897e5
int64_t function_4897c0(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 1); // 0x4897c1
    int64_t v2; // 0x4897c0
    *v1 = *v1 - (int32_t)v2;
    int32_t * v3 = (int32_t *)(a1 - 63); // 0x4897c4
    *v3 = *v3 ^ (int32_t)v2;
    int32_t * v4 = (int32_t *)(a1 + 0x678be9b5); // 0x4897c9
    uint32_t v5 = *v4; // 0x4897c9
    *v4 = v5 / 128 | 0x2000000 * v5;
    int64_t v6; // 0x4897c0
    *(char *)v6 = 26 - (char)v2 + *(char *)&v6;
    int64_t v7; // 0x4897c0
    int64_t result = v2 & -256 | (int64_t)*(char *)&v7; // 0x4897d2
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x48980a - 0x48980b
int64_t function_48980a(void) {
    // 0x48980a
    int64_t result; // 0x48980a
    return result;
}

// Address range: 0x48981f - 0x489820
int64_t function_48981f(void) {
    // 0x48981f
    int64_t result; // 0x48981f
    return result;
}

// Address range: 0x489820 - 0x489821
int64_t function_489820(void) {
    // 0x489820
    int64_t result; // 0x489820
    return result;
}

// Address range: 0x489824 - 0x489845
int64_t function_489824(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x489824
    int64_t v1; // 0x489824
    int32_t * v2 = (int32_t *)((a3 - v1 & 0xffffffff) + 0x2d4064); // 0x489826
    *v2 = *v2 & (int32_t)a1;
    function_489820();
    *(int32_t *)-0x5aabb4f3 = *(int32_t *)-0x5aabb4f3 + (int32_t)v1;
    char * v3 = (char *)(v1 - 0xefd0d0e); // 0x48983c
    *v3 = *v3 + (char)(a4 / 256);
    return function_48981f();
}

// Address range: 0x489846 - 0x48984f
int64_t function_489846(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x489846
    return function_48980a();
}

// Address range: 0x489878 - 0x48987a
int64_t function_489878(void) {
    // 0x489878
    int64_t result; // 0x489878
    return result;
}

// Address range: 0x489889 - 0x489900
int64_t function_489889(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x489889
    int64_t v1; // 0x489889
    uint64_t v2 = v1;
    bool v3; // 0x489889
    if (v3 || false) {
        char * v4 = (char *)(2 * a4 - 117 + v2); // 0x4898e2
        *v4 = *v4 | (char)(v2 / 256);
        return function_3914a3();
    }
    int64_t result = (v2 & 0x87bf0a) + 0x2d773f78; // 0x4898bf
    if (v1 != __readfsqword(40)) {
        // 0x4898c1
        __stack_chk_fail();
        result = (int64_t)&g3;
    }
    // 0x4898c6
    return result;
}

// Address range: 0x489918 - 0x489928
int64_t function_489918(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x489918
    int64_t result; // 0x489918
    *(int32_t *)a1 = (int32_t)result;
    int32_t * v1 = (int32_t *)(a2 + 0x76d508d1 + 4 * a3); // 0x489919
    *v1 = *v1 ^ 0x6168d249;
    return result;
}

// Address range: 0x489963 - 0x489975
int64_t function_489963(void) {
    // 0x489963
    int64_t v1; // 0x489963
    int64_t v2 = v1;
    bool v3; // 0x489963
    *(char *)v2 = (char)(v1 / 256) + (char)v2 + (char)v3;
    *(int32_t *)(v2 - 0x32ff01e5) = 0x7060a170;
    return function_2399cd09();
}

// Address range: 0x489997 - 0x48999a
int64_t function_489997(void) {
    // 0x489997
    int64_t result; // 0x489997
    return result;
}

// Address range: 0x4899a7 - 0x4899b2
int64_t function_4899a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(4 * a4 - 0xa127f78); // 0x4899a7
    *v1 = *v1 >> 1;
    return function_489a12(a1, a2, a3, a4, (int64_t)&g3);
}

// Address range: 0x4899c5 - 0x4899c8
int64_t function_4899c5(int64_t a1) {
    // 0x4899c5
    int64_t result; // 0x4899c5
    return result;
}

// Address range: 0x4899cd - 0x4899e4
int64_t function_4899cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 - 0x7a1b5d73); // 0x4899cd
    *v1 = *v1 + (char)a4;
    int32_t v2; // 0x4899cd
    *(int32_t *)(a3 + 64) = (int32_t)(int64_t)&v2;
    return (int64_t)((int32_t)a4 - *(int32_t *)(a2 + 0x2c5f5720));
}

// Address range: 0x4899e4 - 0x489a0a
int64_t function_4899e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4899e4
    int64_t v1; // 0x4899e4
    int64_t result = v1;
    *(char *)0xa90f9755 = *(char *)0xa90f9755 + (char)(v1 / 256);
    *(char *)0x65d6e8 = *(char *)0x65d6e8 + (char)a4;
    *(int32_t *)result = (int32_t)result - (int32_t)v1;
    return result;
}

// Address range: 0x489a0a - 0x489a0d
int64_t function_489a0a(void) {
    // 0x489a0a
    int64_t result; // 0x489a0a
    return result;
}

// Address range: 0x489a12 - 0x489aac
int64_t function_489a12(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x489a12
    int64_t v1; // 0x489a12
    int32_t * v2 = (int32_t *)(4 * v1 + a1); // 0x489a12
    uint32_t v3 = *v2; // 0x489a12
    uint32_t v4 = v3 / 0x2000000; // 0x489a12
    *v2 = v4;
    if ((v3 & 0x1000000) == 0 && v3 >= 0x2000000) {
        // 0x489a18
        bool v5; // 0x489a12
        return (v1 & 0xffff00ff | 0x1000 * (int64_t)v5 | 1024 * (int64_t)(llvm_ctpop_i8((char)v4) % 2 == 0) | 512) + 0x5e43f2aa & 0xfffffdff;
    }
    char * v6 = (char *)(v1 + 0x24548bc0); // 0x489a83
    unsigned char v7 = *v6; // 0x489a83
    *v6 = v7 / 16 | 16 * v7;
    int64_t result; // 0x489a12
    if (__readfsqword(40) != a5) {
        // 0x489aa2
        __stack_chk_fail();
        result = (int64_t)&g3;
    }
    // 0x489aa7
    return result;
}

// Address range: 0x489ab0 - 0x489af4
int64_t function_489ab0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x489ab0
    __readfsqword(40);
    return function_396e5e();
}

// Address range: 0x489b12 - 0x489b14
int64_t function_489b12(int64_t a1) {
    // 0x489b12
    int64_t result; // 0x489b12
    return result;
}

// Address range: 0x489b60 - 0x489be3
int64_t function_489b60(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x489b60
    int64_t v1; // 0x489b60
    *(char *)a1 = (char)v1;
    bool v2; // 0x489b60
    int64_t v3 = v2 ? -1 : 1; // 0x489b60
    int64_t v4 = v3 + a1; // 0x489b60
    __asm_int(78);
    int64_t v5; // 0x489b60
    *(int32_t *)v5 = *(int32_t *)&v5 - 1;
    uint32_t v6 = __asm_in(-118); // 0x489b66
    int64_t result = v4 & 0xffffffff; // 0x489b6d
    int32_t v7 = v4; // 0x489b77
    if (v7 - *(int32_t *)(int64_t)v6 >= 0) {
        char * v8 = (char *)(v1 + 107); // 0x489b7a
        *v8 = *v8 >> 1;
        return result;
    }
    // 0x489bd2
    __asm_out((int16_t)a3, v7);
    int64_t v9 = result + 0xe83c02c; // 0x489bd5
    int32_t * v10 = (int32_t *)((v9 & 0xffffffff) + 8 * (v3 + a2)); // 0x489bdd
    *v10 = (int32_t)v9;
    return (int64_t)*v10;
}

// Address range: 0x489c73 - 0x489da2
int64_t function_489c73(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x489c73
    int64_t v1; // 0x489c73
    uint64_t result = v1;
    int64_t v2 = a2;
    int64_t v3 = a1;
    int32_t v4 = result;
    int32_t v5 = v1; // 0x489c73
    bool v6; // 0x489c73
    int32_t v7 = v6; // 0x489c73
    int32_t v8 = v4 + v5 + v7; // 0x489c73
    int32_t v9 = v8 + v7; // 0x489c73
    *(int32_t *)result = v8;
    if (((v9 ^ v4) & (v9 ^ v5)) < 0) {
        // 0x489c79
        return result;
    }
    // 0x489cab
    *(int32_t *)0x6b3fbb2b1ba8214f = v4;
    char * v10 = (char *)(a4 - 0x7aa46cb1); // 0x489cb4
    unsigned char v11 = *v10; // 0x489cb4
    *v10 = v11 / 128 | 2 * v11;
    int64_t v12 = result & -54; // 0x489cc9
    int64_t * v13 = (int64_t *)v12; // 0x489ccc
    *v13 = *v13 + v12;
    char v14 = *(char *)((result & 0xffffffca) + 100); // 0x489cd9
    uint32_t v15 = *(int32_t *)-0x2915741877e7a8ee; // 0x489cde
    *(char *)v2 = -1;
    *(int16_t *)0x5c0e961a = (int16_t)v1;
    unsigned char v16 = *(char *)&v3; // 0x489d13
    unsigned char v17 = *(char *)&v2; // 0x489d15
    int32_t * v18 = (int32_t *)(2 * v1 - 0x1ae32c92); // 0x489d16
    uint32_t v19 = *v18; // 0x489d16
    int32_t v20 = v17 < v16; // 0x489d16
    uint32_t v21 = *(int32_t *)-0x9638925a90d192b + v20; // 0x489d16
    int32_t v22 = v19 - v21; // 0x489d16
    bool v23 = v17 < v16 ? v21 != -1 | v19 < v22 - v20 : v19 < v21; // 0x489d16
    *v18 = v22;
    char v24 = *(char *)-0x4d8cdc47; // 0x489d1d
    *(char *)-0x4d8cdc47 = v24 + (char)(a4 / 256) + (char)v23;
    __asm_in_136(0x4a90);
    __asm_int(51);
    return 256 * (int64_t)(v14 ^ (char)(result / 256)) | result & 0xffff0000 | (int64_t)(((char)result & -54) + (char)(v15 > 0x23b55104) - v16);
}

// Address range: 0x489da2 - 0x489da6
int64_t function_489da2(int64_t result) {
    // 0x489da2
    return result;
}

// Address range: 0x489da6 - 0x489dcd
int64_t function_489da6(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result = *v1;
    *v1 = result - 1;
    if (result >= 0 == (result != 0)) {
        // 0x489dcc
        return result;
    }
    // 0x489dc7
    return function_4eeb50();
}
