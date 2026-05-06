/*
 * Targeted RetDec C for native executable gap queue batch 1327.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x104c78-0x104e78 rank=- name=- kind=- bytes=- uncovered=-
 *   0x104e78-0x105078 rank=- name=- kind=- bytes=- uncovered=-
 *   0x105078-0x105278 rank=- name=- kind=- bytes=- uncovered=-
 *   0x105278-0x105478 rank=- name=- kind=- bytes=- uncovered=-
 *   0x105478-0x105678 rank=- name=- kind=- bytes=- uncovered=-
 *   0x105678-0x105878 rank=- name=- kind=- bytes=- uncovered=-
 *   0x105878-0x105a78 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1393a4-0x1395a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1395a4-0x1397a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1399a4-0x139ba4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x139da4-0x139fa4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x139fa4-0x13a1a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13a1a4-0x13a3a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x30d658-0x30d858 rank=- name=- kind=- bytes=- uncovered=-
 *   0x30da58-0x30dc58 rank=- name=- kind=- bytes=- uncovered=-
 *   0x30e258-0x30e458 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_104c78(void);
int64_t function_104c89(void);
int64_t function_104ce0(int64_t a1);
int64_t function_104d01(void);
int64_t function_104d63(void);
int64_t function_104d68(void);
int64_t function_104d8e(int64_t a1);
int64_t function_104e06(void);
int64_t function_104e08(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_104e70(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_104e96(int64_t a1, int64_t a2);
int64_t function_104eac(void);
int64_t function_104ede(void);
int64_t function_104f29(int64_t a1);
int64_t function_104f7f(void);
int64_t function_104fcc(int64_t a1);
int64_t function_104fdc(int64_t a1);
int64_t function_105060(void);
int64_t function_1050c3(void);
int64_t function_1050db(void);
int64_t function_1050f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_105159(void);
int64_t function_10518e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1051fc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_105233(void);
int64_t function_105256(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_1052ac(void);
int64_t function_105304(int64_t a1, int64_t a2, int64_t a3);
int64_t function_105350(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1053b4(int64_t a1);
int64_t function_1054d8(void);
int64_t function_1054fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_105512(void);
int64_t function_10553d(void);
int64_t function_105557(void);
int64_t function_105567(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1055bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1055de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_105600(void);
int64_t function_105613(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_10572a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1057dc(int64_t a1);
int64_t function_105804(int64_t a1);
int64_t function_10581c(void);
int64_t function_10582a(void);
int64_t function_105832(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10585d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1058a3(void);
int64_t function_1058e7(void);
int64_t function_1059a7(void);
int64_t function_1059ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_105a06(void);
int64_t function_105a2d(void);
int64_t function_105a59(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_105a69(void);
int64_t function_1393a4(void);
int64_t function_1393b5(void);
int64_t function_1393bf(void);
int64_t function_1393e0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_139410(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_139438(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_139534(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13954d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13958f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1395f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_139655(void);
int64_t function_139688(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1396b7(void);
int64_t function_1396ce(void);
int64_t function_1396e0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_139702(int64_t a1, int64_t a2, int64_t a3);
int64_t function_13970d(int64_t a1);
int64_t function_1399a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1399c9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_139a3b(void);
int64_t function_139a47(void);
int64_t function_139a93(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_139a94(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_139ae2(void);
int64_t function_139aeb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_139b03(int64_t a1);
int64_t function_139b63(void);
int64_t function_139d77();
int64_t function_139da4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_139e10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_139e3c(void);
int64_t function_139e65(void);
int64_t function_139e6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_139e90(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_139ede(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_139f48(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_139f51(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_139f95(void);
int64_t function_139fb2(void);
int64_t function_139fc1(void);
int64_t function_139fc6(void);
int64_t function_139fe3(int64_t a1);
int64_t function_13a01b(int64_t a1);
int64_t function_13a05c(void);
int64_t function_13a080(void);
int64_t function_13a0c3(void);
int64_t function_13a108(void);
int64_t function_13a133(void);
int64_t function_13a149(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13a16c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13a1bc(void);
int64_t function_13a1ca(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_13a24a(int64_t a1);
int64_t function_13a2c3(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_25e917a3();
int64_t function_2c09d8eb();
int64_t function_2d31687b();
int64_t function_30d658(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30d7dd(int64_t a1);
int64_t function_30d800(int64_t a1);
int64_t function_30d83c(void);
int64_t function_30da58(int64_t a1, int64_t a2);
int64_t function_30da80(void);
int64_t function_30dab3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30dada(void);
int64_t function_30daec(void);
int64_t function_30daef(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_30dba4(void);
int64_t function_30dc31(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30e235();
int64_t function_30e258(int64_t a1, int64_t a2, int64_t a3);
int64_t function_30e28a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30e2a0(void);
int64_t function_30e2a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30e304(void);
int64_t function_30e392(void);
int64_t function_30e86d();
int64_t function_5cca8030();
int64_t function_633a7215();
int64_t function_6c08a5bb();
int64_t function_c6d58();
int64_t function_ffffffffabc616e5();
int64_t function_ffffffffe85def2a();
int64_t function_ffffffffe86ae865();
int64_t function_fffffffffa4c6191();
int64_t unknown_10831830();
int64_t unknown_1808b2d0();
int64_t unknown_18c20d75();
int64_t unknown_2d3e28d6();
int64_t unknown_376cbfeb();
int64_t unknown_3aa048b1();
int64_t unknown_3ab903e1();
int64_t unknown_436cedf0();
int64_t unknown_4455a41b();
int64_t unknown_4ce694d8();
int64_t unknown_4d3b6ac2();
int64_t unknown_6096bf39();
int64_t unknown_67106197();
int64_t unknown_68179105();
int64_t unknown_68de9e54();
int64_t unknown_68f660a1();
int64_t unknown_69adc96a();
int64_t unknown_741e4927();
int64_t unknown_79158004();
int64_t unknown_acb9f03();
int64_t unknown_d3353e3();
int64_t unknown_ffffffff906b9b39();
int64_t unknown_ffffffff94905fcd();
int64_t unknown_ffffffff9781287e();
int64_t unknown_ffffffff9c3771ff();
int64_t unknown_ffffffffabe61ccd();
int64_t unknown_ffffffffb3905794();
int64_t unknown_ffffffffbb8f6e19();
int64_t unknown_ffffffffbc50c50e();
int64_t unknown_ffffffffc45476ea();
int64_t unknown_ffffffffc4afae3b();
int64_t unknown_ffffffffd0118b1d();
int64_t unknown_ffffffffd5321885();
int64_t unknown_ffffffffd8d6a4f7();
int64_t unknown_ffffffffe2e2611a();
int64_t unknown_ffffffffe59fd748();
int64_t unknown_ffffffffe908f683();
int64_t unknown_fffffffff52d9a9f();
int64_t unknown_fffffffffffffff0();

// Address range: 0x104c78 - 0x104c79
int64_t function_104c78(void) {
    // 0x104c78
    int64_t result; // 0x104c78
    return result;
}

// Address range: 0x104c89 - 0x104c8a
int64_t function_104c89(void) {
    // 0x104c89
    int64_t result; // 0x104c89
    return result;
}

// Address range: 0x104ce0 - 0x104cea
int64_t function_104ce0(int64_t a1) {
    int64_t result = unknown_ffffffffc45476ea(a1); // 0x104ce5
    // 0x104ce7
    return result;
}

// Address range: 0x104d01 - 0x104d02
int64_t function_104d01(void) {
    // 0x104d01
    int64_t result; // 0x104d01
    return result;
}

// Address range: 0x104d63 - 0x104d65
int64_t function_104d63(void) {
    // 0x104d63
    return function_104d01();
}

// Address range: 0x104d68 - 0x104d6b
int64_t function_104d68(void) {
    // 0x104d68
    int64_t result; // 0x104d68
    return result;
}

// Address range: 0x104d8e - 0x104d96
int64_t function_104d8e(int64_t a1) {
    // 0x104d8e
    return unknown_ffffffffb3905794(a1);
}

// Address range: 0x104e06 - 0x104e07
int64_t function_104e06(void) {
    // 0x104e06
    int64_t result; // 0x104e06
    return result;
}

// Address range: 0x104e08 - 0x104e1e
int64_t function_104e08(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 11); // 0x104e14
    *v1 = *v1 + (int32_t)a4;
    unknown_ffffffffd0118b1d();
    return function_104e06();
}

// Address range: 0x104e70 - 0x104e82
int64_t function_104e70(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x104e70
    *(int32_t *)a1 = __asm_insd((int16_t)(a3 % 256 | 256 * a3));
    int64_t v1; // 0x104e70
    return (int64_t)*(int32_t *)&v1;
}

// Address range: 0x104e96 - 0x104e9a
int64_t function_104e96(int64_t a1, int64_t a2) {
    // 0x104e96
    int64_t result; // 0x104e96
    return result;
}

// Address range: 0x104eac - 0x104eaf
int64_t function_104eac(void) {
    // 0x104eac
    int64_t result; // 0x104eac
    return result;
}

// Address range: 0x104ede - 0x104ee1
int64_t function_104ede(void) {
    // 0x104ede
    int64_t result; // 0x104ede
    return result;
}

// Address range: 0x104f29 - 0x104f2a
int64_t function_104f29(int64_t a1) {
    // 0x104f29
    int64_t result; // 0x104f29
    return result;
}

// Address range: 0x104f7f - 0x104f80
int64_t function_104f7f(void) {
    // 0x104f7f
    int64_t result; // 0x104f7f
    return result;
}

// Address range: 0x104fcc - 0x104fcf
int64_t function_104fcc(int64_t a1) {
    // 0x104fcc
    int64_t result; // 0x104fcc
    return result;
}

// Address range: 0x104fdc - 0x105003
int64_t function_104fdc(int64_t a1) {
    // 0x104fdc
    int64_t v1; // 0x104fdc
    *(char *)0x33e1ba3e12e62c50 = (char)v1;
    unknown_376cbfeb();
    char * v2 = (char *)(a1 - 0x17900fc6); // 0x104feb
    unsigned char v3 = *v2; // 0x104feb
    bool v4; // 0x104fdc
    *v2 = 2 * v3 | (char)v4;
    *(char *)a1 = (char)v1;
    int64_t result = v1 & 0xffffffff; // 0x104ff6
    if (v3 / 64 % 2 == v3 / 128) {
        result = function_104f7f();
    }
    // 0x104ff8
    return result;
}

// Address range: 0x105060 - 0x105061
int64_t function_105060(void) {
    // 0x105060
    int64_t result; // 0x105060
    return result;
}

// Address range: 0x1050c3 - 0x1050d0
int64_t function_1050c3(void) {
    // 0x1050c3
    int64_t v1; // 0x1050c3
    *(int32_t *)0x709f4daa = *(int32_t *)0x709f4daa + (int32_t)v1;
    return function_105060();
}

// Address range: 0x1050db - 0x1050df
int64_t function_1050db(void) {
    // 0x1050db
    int64_t result; // 0x1050db
    return result;
}

// Address range: 0x1050f6 - 0x105106
int64_t function_1050f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 0x6210cb03 + 4 * a1); // 0x1050f6
    *v1 = *v1 ^ (int32_t)a4;
    return unknown_79158004(a1, a2, a3, a4, a5);
}

// Address range: 0x105159 - 0x10515a
int64_t function_105159(void) {
    // 0x105159
    int64_t result; // 0x105159
    return result;
}

// Address range: 0x10518e - 0x1051f2
int64_t function_10518e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x10518e
    int64_t v1; // 0x10518e
    bool v2; // 0x10518e
    if (v2 || v2) {
        v1 = function_105159();
    }
    int64_t v3 = v1;
    *(int32_t *)v3 = (int32_t)v3 + (int32_t)a3;
    int64_t v4 = v3 & 0xffffffff; // 0x10519d
    int64_t v5 = a2 + 1; // 0x1051aa
    __asm_sti(v4, v5);
    int32_t v6 = __asm_in(34); // 0x1051b5
    unsigned char v7 = *(char *)(a4 - 0x1e7ec2c6); // 0x1051b7
    uint64_t v8 = (int64_t)v6 + 67 + (int64_t)(v7 < (char)(a4 / 256)); // 0x1051bd
    int64_t v9 = v8 % 256 | (int64_t)(v6 & -256); // 0x1051bd
    __asm_out(-128, (int32_t)v9);
    *(char *)v4 = *(char *)v5;
    uint32_t v10 = v6 >> 31; // 0x1051c2
    char * v11 = (char *)(v4 + 1); // 0x1051ca
    *v11 = *v11 + (char)v10;
    char * v12 = (char *)v9; // 0x1051cd
    *v12 = *v12 + (char)v8;
    int32_t v13 = *(int32_t *)(v4 + 0x71ddb708 + (int64_t)v10); // 0x1051d4
    uint64_t v14 = (int64_t)*(int32_t *)0x2c5fcebb * (int64_t)v13; // 0x1051db
    __asm_outsd((int16_t)(v14 / 0x100000000), *(int32_t *)(a2 + 2));
    int64_t v15; // bp+24, 0x10518e
    int64_t v16; // 0x10518e
    uint32_t v17 = *(int32_t *)(8 * v16 + 0x44e96fd4 + (int64_t)&v15); // 0x1051e8
    int64_t v18 = (v14 & -0xfec2ff46) / (int64_t)v17; // 0x1051e8
    return (v18 + a6) % 256 | v18 & 0xffffff00;
}

// Address range: 0x1051fc - 0x1051fe
int64_t function_1051fc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1051fc
    return a2 & 0xffffffff;
}

// Address range: 0x105233 - 0x105234
int64_t function_105233(void) {
    // 0x105233
    int64_t result; // 0x105233
    return result;
}

// Address range: 0x105256 - 0x10525c
int64_t function_105256(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x105256
    int64_t result; // 0x105256
    char * v1 = (char *)(result - 113); // 0x105258
    *v1 = *v1 + (char)(a3 / 256);
    return result;
}

// Address range: 0x1052ac - 0x1052ae
int64_t function_1052ac(void) {
    // 0x1052ac
    return function_105233();
}

// Address range: 0x105304 - 0x10530f
int64_t function_105304(int64_t a1, int64_t a2, int64_t a3) {
    // 0x105304
    int64_t result; // 0x105304
    *(char *)a3 = 2 * (char)result;
    return result;
}

// Address range: 0x105350 - 0x10535c
int64_t function_105350(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x105350
    int64_t result; // 0x105350
    return result;
}

// Address range: 0x1053b4 - 0x1053b6
int64_t function_1053b4(int64_t a1) {
    // 0x1053b4
    int64_t result; // 0x1053b4
    return result;
}

// Address range: 0x1054d8 - 0x1054d9
int64_t function_1054d8(void) {
    // 0x1054d8
    int64_t result; // 0x1054d8
    return result;
}

// Address range: 0x1054fe - 0x105512
int64_t function_1054fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1054fe
    int64_t v1; // 0x1054fe
    *(char *)a3 = (char)v1 + 88;
    *(int32_t *)0x3d0042914a80c1fe = (int32_t)v1;
    int32_t * v2 = (int32_t *)(a4 - 116); // 0x10550a
    *v2 = *v2 + (int32_t)a1;
    return a1 & 0xffffffff;
}

// Address range: 0x105512 - 0x105514
int64_t function_105512(void) {
    // 0x105512
    int64_t v1; // 0x105512
    return function_105567(v1, v1, v1, v1);
}

// Address range: 0x10553d - 0x10553f
int64_t function_10553d(void) {
    // 0x10553d
    return function_1054d8();
}

// Address range: 0x105557 - 0x105558
int64_t function_105557(void) {
    // 0x105557
    int64_t result; // 0x105557
    return result;
}

// Address range: 0x105567 - 0x1055b9
int64_t function_105567(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a3; // 0x105573
    int32_t * v2 = (int32_t *)(a2 + 66); // 0x105575
    int64_t v3; // 0x105567
    *v2 = *v2 - (-1 - (int32_t)v3 < v1 ? 0x12760b9a : 0x12760b99);
    __asm_hlt(a1, a2);
    unknown_ffffffffe908f683();
    *(int32_t *)-0x25389777 = *(int32_t *)-0x25389777 + (int32_t)a1;
    int64_t v4 = a4 & -256 | 222; // 0x105594
    char v5 = unknown_68f660a1(); // 0x1055a0
    *(char *)0xe01e846ff01148d = v5;
    __asm_out_133((int16_t)(v1 - *(int32_t *)v4), v5);
    int64_t result = v4 + 0x1e84780 & 0xffffff5e; // 0x1055ad
    int32_t * v6 = (int32_t *)(result - 0x773634b6); // 0x1055b3
    *v6 = *v6 - 0x710274a7;
    return result;
}

// Address range: 0x1055bb - 0x1055d8
int64_t function_1055bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    if ((a4 + a2 & 0xffffffff) == 0) {
        function_105557();
    }
    char * v1 = (char *)(unknown_ffffffff94905fcd() + 0x50deaf47); // 0x1055cc
    *v1 = *v1 + (char)a3;
    return unknown_4ce694d8();
}

// Address range: 0x1055de - 0x1055e5
int64_t function_1055de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1055de
    int64_t result; // 0x1055de
    int32_t * v1 = (int32_t *)(result + 0x196858af); // 0x1055de
    *v1 = *v1 + (int32_t)a4;
    return result;
}

// Address range: 0x105600 - 0x105601
int64_t function_105600(void) {
    // 0x105600
    int64_t result; // 0x105600
    return result;
}

// Address range: 0x105613 - 0x105702
int64_t function_105613(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x105613
    int64_t v1; // 0x105613
    uint64_t v2 = v1;
    int64_t v3 = a2;
    int32_t * v4 = (int32_t *)(v1 + 0xf1ede20); // 0x105615
    *v4 = *v4 + (int32_t)a2;
    char v5 = *(char *)(v2 + 0x1e89881); // 0x10561b
    *(int32_t *)a2 = *(int32_t *)&v3 - (int32_t)a1;
    char v6 = *(char *)(4 * v2 + a1); // 0x105625
    int64_t v7 = a3 & -256 | (int64_t)(v6 + (char)a3 + (char)((v5 ^ (char)v1) < 32)); // 0x105625
    int64_t v8 = unknown_10831830(); // 0x10562a
    char * v9 = (char *)(v8 + 0x2aec000); // 0x10562f
    *v9 = *v9 + (char)v8;
    int32_t * v10 = (int32_t *)(v1 - 0x77ffee00); // 0x105637
    *v10 = *v10 + (int32_t)v1;
    char v11 = *(char *)v7; // 0x10563d
    int32_t * v12 = (int32_t *)(256 * (int64_t)(v11 | (char)(v2 / 256)) | v2 & -0xff01);
    int32_t * v13 = (int32_t *)(v1 + 69);
    int32_t v14 = v1;
    int64_t v15 = a4 - 256 * v1 & 0xff00 | a4 & -0xff01; // 0x10563d
    int64_t v16 = a1;
    int32_t v17 = __asm_in_134((int16_t)v7); // 0x105640
    *v12 = *v12 & (int32_t)v15;
    uint32_t v18 = v17 >> 31; // 0x105643
    int32_t * v19 = (int32_t *)v15; // 0x105648
    int64_t v20; // 0x105613
    *v19 = *v19 + (int32_t)v20;
    int64_t v21 = __asm_int1() & 0x5f82e8d | 0xfa07d172; // 0x10564b
    __asm_out_135((int16_t)v18, (int32_t)v21);
    int64_t v22; // 0x105613
    int64_t v23 = *(int64_t *)v22; // 0x10565b
    while ((v23 & 64) == 0) {
        int32_t * v24 = (int32_t *)v21; // 0x105668
        int32_t v25 = *v24 + (int32_t)v3; // 0x105668
        *v24 = v25;
        int64_t v26 = v21; // 0x10566a
        if (v15 != 1 && v25 != 0) {
            v26 = function_105600();
        }
        uint64_t v27 = (int64_t)v18; // 0x105643
        int64_t v28 = v27 % 256 % 256 | v27 & 0xffffff00; // 0x105664
        int64_t result = v26;
        if (v15 != 1) {
            int32_t * v29 = (int32_t *)(v28 - 0x75f893fd); // 0x105677
            *v29 = *v29 + (int32_t)result;
            return result;
        }
        // 0x105681
        *(int32_t *)v16 = (int32_t)result;
        int64_t v30 = (v23 & (int64_t)&g1) == 0 ? 4 : -4; // 0x105681
        int32_t v31 = *v13; // 0x105689
        int32_t v32 = v31 + v14; // 0x105689
        *v13 = v32;
        v3 += v30;
        v15 = -1;
        v22 += 8;
        v20 &= v21;
        if (v32 < 0 == ((v32 ^ v31) & (v32 ^ v14)) < 0) {
            // 0x1056fd
            return unknown_acb9f03();
        }
        v16 += v30;
        v17 = __asm_in_134((int16_t)v28);
        *v12 = *v12 & (int32_t)v15;
        v18 = v17 >> 31;
        v19 = (int32_t *)v15;
        *v19 = *v19 + (int32_t)v20;
        v21 = __asm_int1() & 0x5f82e8d | 0xfa07d172;
        __asm_out_135((int16_t)v18, (int32_t)v21);
        v23 = *(int64_t *)v22;
    }
    // 0x10565e
    *(int16_t *)(v3 - 108) = (int16_t)v1;
    return v16 & 0xffffffff;
}

// Address range: 0x10572a - 0x10574a
int64_t function_10572a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x10572a
    __asm_in_136(-50);
    int64_t result = unknown_ffffffff906b9b39(); // 0x105733
    char v1 = *(char *)(a3 + 0xb33f2f4); // 0x105738
    int32_t * v2 = (int32_t *)(a4 & -256 | (int64_t)(v1 | (char)a4)); // 0x105741
    *v2 = *v2 + (int32_t)a1;
    return result;
}

// Address range: 0x1057dc - 0x1057e2
int64_t function_1057dc(int64_t a1) {
    // 0x1057dc
    int64_t v1; // 0x1057dc
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result;
    return result;
}

// Address range: 0x105804 - 0x105810
int64_t function_105804(int64_t a1) {
    // 0x105804
    int64_t v1; // 0x105804
    *(int32_t *)a1 = (int32_t)v1;
    char * v2 = (char *)(v1 + 0x14009900); // 0x105805
    *v2 = *v2 + (char)(v1 / 256);
    bool v3; // 0x105804
    return function_5cca8030((v3 ? -4 : 4) + a1);
}

// Address range: 0x10581c - 0x10581d
int64_t function_10581c(void) {
    // 0x10581c
    int64_t result; // 0x10581c
    return result;
}

// Address range: 0x10582a - 0x10582d
int64_t function_10582a(void) {
    // 0x10582a
    int64_t result; // 0x10582a
    return result;
}

// Address range: 0x105832 - 0x105852
int64_t function_105832(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x105832
    bool v1; // 0x105832
    if (a4 != 1 && !v1) {
        function_10581c();
    }
    // 0x105834
    unknown_ffffffffe59fd748();
    return function_ffffffffe85def2a();
}

// Address range: 0x10585d - 0x105879
int64_t function_10585d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x10585d
    int64_t v3 = v2 & -256 | (int64_t)__asm_in_136(-24); // 0x10585d
    int32_t * v4 = (int32_t *)(8 * v3 - 0x94be8a3); // 0x10585f
    uint32_t v5 = *v4; // 0x10585f
    uint32_t v6 = (int32_t)v3; // 0x10585f
    int32_t v7 = v5 + v6; // 0x10585f
    unsigned char v8 = llvm_ctpop_i8((char)v7); // 0x10585f
    *v4 = v7;
    uint64_t v9 = 256 * (64 * (int64_t)(v7 == 0) | (int64_t)(v7 < v5) | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v6 % 16 + v5 % 16 > 15) | 4 * (int64_t)(v8 % 2 == 0)) | 512; // 0x105869
    int64_t result = v9 | v3 & -0xff01; // 0x105869
    uint32_t v10 = (int32_t)a4 % 32; // 0x105872
    if (v10 != 0) {
        int32_t * v11 = (int32_t *)result; // 0x105872
        *v11 = *v11 >> v10;
    }
    *(char *)v1 = *(char *)&v1 + (char)(v9 / 256);
    return result;
}

// Address range: 0x1058a3 - 0x1058a7
int64_t function_1058a3(void) {
    // 0x1058a3
    int64_t result; // 0x1058a3
    return result;
}

// Address range: 0x1058e7 - 0x1058ec
int64_t function_1058e7(void) {
    // 0x1058e7
    return function_ffffffffabc616e5();
}

// Address range: 0x1059a7 - 0x1059aa
int64_t function_1059a7(void) {
    // 0x1059a7
    int64_t result; // 0x1059a7
    return result;
}

// Address range: 0x1059ae - 0x1059ba
int64_t function_1059ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1059ae
    int64_t result; // 0x1059ae
    return result;
}

// Address range: 0x105a06 - 0x105a07
int64_t function_105a06(void) {
    // 0x105a06
    int64_t result; // 0x105a06
    return result;
}

// Address range: 0x105a2d - 0x105a2f
int64_t function_105a2d(void) {
    // 0x105a2d
    return function_105a06();
}

// Address range: 0x105a59 - 0x105a62
int64_t function_105a59(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 0x78a73eda); // 0x105a59
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x105a59
    return result;
}

// Address range: 0x105a69 - 0x105a6e
int64_t function_105a69(void) {
    // 0x105a69
    return function_2d31687b();
}

// Address range: 0x1393a4 - 0x1393ab
int64_t function_1393a4(void) {
    // 0x1393a4
    int64_t result; // 0x1393a4
    return result;
}

// Address range: 0x1393b5 - 0x1393b8
int64_t function_1393b5(void) {
    // 0x1393b5
    int64_t result; // 0x1393b5
    return result;
}

// Address range: 0x1393bf - 0x1393c0
int64_t function_1393bf(void) {
    // 0x1393bf
    int64_t result; // 0x1393bf
    return result;
}

// Address range: 0x1393e0 - 0x139410
int64_t function_1393e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1393e0
    int64_t v1; // 0x1393e0
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2; // 0x1393e0
    uint64_t v3 = v2;
    int64_t v4; // 0x1393e0
    int64_t v5 = v4;
    int64_t v6 = (v5 + 209) % 256 | v5 & -256; // 0x1393eb
    int64_t v7 = v6; // 0x1393f4
    if ((int32_t)v6 < 0x50110d01) {
        v7 = function_1393bf();
    }
    char v8 = *(char *)-0x2cc8ce89; // 0x1393f7
    int64_t v9 = v3 & -256 | (int64_t)(v8 & (char)v3); // 0x1393f7
    unsigned char v10 = (char)v7; // 0x139401
    char v11 = v10 + 9; // 0x139401
    unsigned char v12 = llvm_ctpop_i8(v11); // 0x139401
    int64_t result = __asm_int1() & -0xff01 | 256 * (16 * (int64_t)(v10 % 16 > 6) | (int64_t)(v10 > 246) | 64 * (int64_t)(v11 == 0) | 128 * (int64_t)(v11 < 0) | 4 * (int64_t)(v12 % 2 == 0)) | 512; // 0x139404
    char v13 = *(char *)-0x244df4f4; // 0x139405
    *(char *)-0x244df4f4 = v13 + (char)(v3 / 256);
    int32_t * v14 = (int32_t *)result; // 0x13940b
    uint32_t v15 = *v14 & (int32_t)v9; // 0x13940b
    *v14 = v15;
    while (v15 < 0) {
        // 0x1393e9
        v3 = v9;
        v5 = result;
        v6 = (v5 + 209) % 256 | v5 & -256;
        v7 = v6;
        if ((int32_t)v6 < 0x50110d01) {
            v7 = function_1393bf();
        }
        // 0x1393f7
        v8 = *(char *)-0x2cc8ce89;
        v9 = v3 & -256 | (int64_t)(v8 & (char)v3);
        v10 = (char)v7;
        v11 = v10 + 9;
        v12 = llvm_ctpop_i8(v11);
        result = __asm_int1() & -0xff01 | 256 * (16 * (int64_t)(v10 % 16 > 6) | (int64_t)(v10 > 246) | 64 * (int64_t)(v11 == 0) | 128 * (int64_t)(v11 < 0) | 4 * (int64_t)(v12 % 2 == 0)) | 512;
        v13 = *(char *)-0x244df4f4;
        *(char *)-0x244df4f4 = v13 + (char)(v3 / 256);
        v14 = (int32_t *)result;
        v15 = *v14 & (int32_t)v9;
        *v14 = v15;
    }
    // 0x13940f
    return result;
}

// Address range: 0x139410 - 0x139427
int64_t function_139410(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x139410
    return unknown_ffffffffbb8f6e19();
}

// Address range: 0x139438 - 0x1394da
int64_t function_139438(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t result = unknown_fffffffffffffff0(); // 0x139441
    *(char *)result = (char)(a4 / 256);
    return result;
}

// Address range: 0x139534 - 0x139540
int64_t function_139534(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x139534
    *(int32_t *)0x3dc53e18 = *(int32_t *)0x3dc53e18 + 0x3dc53e18;
    int64_t v1; // 0x139534
    *(int32_t *)a4 = (int32_t)(v1 & v1);
    return 0x3dc53e18;
}

// Address range: 0x13954d - 0x13958d
int64_t function_13954d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13954d
    int64_t v1; // 0x13954d
    *(char *)0x4b148457 = *(char *)0x4b148457 + (char)(v1 / 256);
    *(int64_t *)0x2326471d = a2;
    int64_t result = __asm_int1(); // 0x139564
    char v2 = (char)result + (char)a2; // 0x139565
    *(char *)a2 = v2;
    if (v2 < 0) {
        // 0x13958e
        return result;
    }
    int32_t v3 = *(int32_t *)((v1 & -256) - 0x7e86c581); // 0x139573
    *(int64_t *)0x23264715 = a1;
    *(int64_t *)0x2326470d = a2;
    *(int32_t *)(a1 + 0x180989fe) = v3 & (int32_t)v1;
    int64_t v4; // 0x13954d
    return 256 * (int64_t)&v4 + a4 & 0xff00 | a4 & 0xffff00ff;
}

// Address range: 0x13958f - 0x1395c9
int64_t function_13958f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13958f
    int64_t v1; // 0x13958f
    unsigned char v2 = (char)v1; // 0x13958f
    unsigned char v3 = v2 + (char)a4; // 0x13958f
    if (v3 < v2 || v3 == 0) {
        // 0x139593
        *(char *)0x7e873606001d0ef5 = v3;
        return (int64_t)*(int32_t *)-0x515a9fe2a3fd547b;
    }
    int32_t * v4 = (int32_t *)((v1 & -256 | (int64_t)v3) - 0x29ff77fa); // 0x1395b9
    *v4 = *v4 + 0x2c66b7ff;
    return 0x13d009d;
}

// Address range: 0x1395f8 - 0x139615
int64_t function_1395f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1395f8
    int64_t v1; // 0x1395f8
    char v2 = (uint64_t)v1 / 256; // 0x1395f8
    *(char *)-0x7131eb01 = *(char *)-0x7131eb01 + v2;
    *(int32_t *)a3 = (int32_t)(v1 ^ a1);
    int64_t result = (int64_t)(__asm_in_134((int16_t)a3) & -256) | (int64_t)__asm_in_136(38); // 0x139605
    char * v3 = (char *)(result + 0x3d008877); // 0x139609
    *v3 = *v3 | v2;
    int32_t * v4 = (int32_t *)(2 * a4); // 0x13960f
    *v4 = *v4 + (int32_t)a2;
    return result;
}

// Address range: 0x139655 - 0x139658
int64_t function_139655(void) {
    // 0x139655
    int64_t result; // 0x139655
    return result;
}

// Address range: 0x139688 - 0x139690
int64_t function_139688(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 52); // 0x139688
    int64_t v2; // 0x139688
    *v1 = *v1 + (int32_t)v2;
    return function_6c08a5bb();
}

// Address range: 0x1396b7 - 0x1396b8
int64_t function_1396b7(void) {
    // 0x1396b7
    int64_t result; // 0x1396b7
    return result;
}

// Address range: 0x1396ce - 0x1396cf
int64_t function_1396ce(void) {
    // 0x1396ce
    int64_t result; // 0x1396ce
    return result;
}

// Address range: 0x1396e0 - 0x1396e8
int64_t function_1396e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1396e0
    int64_t v1; // 0x1396e0
    uint32_t v2 = (int32_t)v1;
    uint32_t v3 = (int32_t)v1;
    int64_t v4; // 0x1396e0
    if (llvm_ctpop_i8((char)(v2 - v3)) % 2 == 0) {
        v4 = function_1396ce();
    }
    int64_t result = v4;
    *(int32_t *)result = (int32_t)(v2 < v3) - (int32_t)v1 + (int32_t)result;
    return result;
}

// Address range: 0x139702 - 0x13970d
int64_t function_139702(int64_t a1, int64_t a2, int64_t a3) {
    // 0x139702
    int64_t v1; // 0x139702
    int64_t v2 = v1;
    char v3 = *(char *)(a1 + 0x56545c8f); // 0x139704
    return v2 & -0x10000 | (int64_t)((256 * (int16_t)v2 >> 8) * (int16_t)v3);
}

// Address range: 0x13970d - 0x139722
int64_t function_13970d(int64_t a1) {
    // 0x13970d
    int64_t v1; // 0x13970d
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)((8 * a1 & 0x7fffffff8) - 97 + v2); // 0x139710
    *v3 = *v3 | (int32_t)v2;
    *(char *)0x501b051f = *(char *)0x501b051f + (char)(v2 / 256);
    return function_1396b7();
}

// Address range: 0x1399a4 - 0x1399c8
int64_t function_1399a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t v2; // 0x1399a4
    int32_t * v3 = (int32_t *)(v2 - 114); // 0x1399a4
    *v3 = *v3 ^ (int32_t)a1;
    *(char *)-0x17f34cb8bd860848 = (char)v2;
    int32_t * v4 = (int32_t *)(v2 + 1); // 0x1399b0
    *v4 = *v4 + (int32_t)v2;
    __asm_iretd(a1, a2);
    char * v5 = (char *)(a1 + 0x7e51c2b9); // 0x1399bc
    unsigned char v6 = *v5; // 0x1399bc
    *v5 = v6 / 64 | 4 * v6;
    int64_t result = __asm_wait(a1, a2); // 0x1399c3
    *(int32_t *)v1 = *(int32_t *)&v1 ^ (int32_t)a4;
    return result;
}

// Address range: 0x1399c9 - 0x1399e8
int64_t function_1399c9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1399c9
    int64_t result; // 0x1399c9
    *(char *)a3 = (char)result | 58;
    return result;
}

// Address range: 0x139a3b - 0x139a47
int64_t function_139a3b(void) {
    // 0x139a3b
    int64_t v1; // 0x139a3b
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x139a47 - 0x139a57
int64_t function_139a47(void) {
    // 0x139a47
    int64_t v1; // 0x139a47
    return function_139a94(v1, v1, v1, v1);
}

// Address range: 0x139a93 - 0x139a94
int64_t function_139a93(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x139a93
    int64_t result; // 0x139a93
    return result;
}

// Address range: 0x139a94 - 0x139aae
int64_t function_139a94(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = a2;
    __asm_outsd((int16_t)a3, v1);
    char v2 = *(char *)-0x1f0445b; // 0x139a9e
    int64_t v3; // 0x139a94
    *(char *)-0x1f0445b = v2 + (char)((uint64_t)v3 / 256);
    return 0x10000 * v1 >> 16;
}

// Address range: 0x139ae2 - 0x139ae5
int64_t function_139ae2(void) {
    // 0x139ae2
    int64_t result; // 0x139ae2
    return result;
}

// Address range: 0x139aeb - 0x139aff
int64_t function_139aeb(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a1 - 0x4c0fa462); // 0x139aeb
    int64_t v2; // 0x139aeb
    *v1 = *v1 + (char)v2;
    int64_t v3; // 0x139aeb
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    *(int32_t *)v3 = (int32_t)a2;
    *(char *)a1 = *(char *)&v3;
    bool v5; // 0x139aeb
    int64_t v6 = v5 ? -1 : 1; // 0x139af6
    int64_t v7 = v6 + a1; // 0x139af6
    *(char *)v7 = (char)v3 ^ -97;
    int64_t v8 = v7 + v6; // 0x139af9
    char * v9 = (char *)v8; // 0x139afa
    *v9 = *v9 | -9;
    return __asm_wait(v8, v6 + (int64_t)*(int32_t *)&v3);
}

// Address range: 0x139b03 - 0x139b04
int64_t function_139b03(int64_t a1) {
    // 0x139b03
    int64_t result; // 0x139b03
    return result;
}

// Address range: 0x139b63 - 0x139b66
int64_t function_139b63(void) {
    // 0x139b63
    int64_t result; // 0x139b63
    return result;
}

// Address range: 0x139da4 - 0x139dc5
int64_t function_139da4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_3aa048b1(); // 0x139dab
    int32_t * v2 = (int32_t *)(a2 + 0x6101e802); // 0x139db5
    *v2 = *v2 - 0x33a01a0e;
    int64_t result = v1 & -256 | 131; // 0x139dc3
    int64_t v3; // 0x139da4
    if ((int32_t)(v3 & a4) != 1) {
        result = function_139d77();
    }
    // 0x139dc5
    return result;
}

// Address range: 0x139e10 - 0x139e36
int64_t function_139e10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x139e10
    int64_t v1; // 0x139e10
    char v2 = v1; // 0x139e10
    __asm_out_137(-24, v2);
    int32_t * v3 = (int32_t *)(a3 - 58); // 0x139e13
    *v3 = *v3 + (int32_t)a4;
    __asm_out_137(-20, v2);
    int32_t * v4 = (int32_t *)(v1 - 42); // 0x139e18
    *v4 = *v4 | (int32_t)v1;
    unsigned char v5 = (char)a4 % 32; // 0x139e1b
    if (v5 != 0) {
        char * v6 = (char *)(a1 + 73); // 0x139e1b
        *v6 = *v6 << v5;
    }
    int32_t * v7 = (int32_t *)(a3 + 0x205c10d1); // 0x139e2c
    *v7 = *v7 + (int32_t)a1;
    return (v1 ^ 0xe8013d36) + v1 & 0xffffffff;
}

// Address range: 0x139e3c - 0x139e4d
int64_t function_139e3c(void) {
    // 0x139e3c
    int64_t v1; // 0x139e3c
    return function_139e90(v1, v1, v1, v1);
}

// Address range: 0x139e65 - 0x139e66
int64_t function_139e65(void) {
    // 0x139e65
    int64_t result; // 0x139e65
    return result;
}

// Address range: 0x139e6c - 0x139e90
int64_t function_139e6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x139e6c
    int64_t v1; // 0x139e6c
    uint64_t v2 = v1 + 77; // 0x139e6e
    int64_t v3 = (v2 | a3) % 256 | a3 & 0xffffff00; // 0x139e74
    int64_t v4 = v3; // 0x139e7b
    if ((int32_t)v3 < 0x6302f702) {
        v4 = function_139e65();
    }
    int32_t * v5 = (int32_t *)(v4 + 40); // 0x139e7d
    *v5 = *v5 | (int32_t)(v2 % 256 | v1 & 0xffffff00);
    int64_t result = __asm_int3(); // 0x139e80
    *(char *)-0x11fffec2f75fc194 = (char)result;
    return result;
}

// Address range: 0x139e90 - 0x139ec7
int64_t function_139e90(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x139e90
    int64_t v1; // 0x139e90
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + (char)(a4 / 256);
    char * v3 = (char *)(a1 - 26); // 0x139e98
    *v3 = *v3 + (char)(a3 / 256);
    uint64_t v4 = v2 + a4; // 0x139ea2
    int64_t v5 = v4 % 256 | v2 & -256; // 0x139ea2
    unsigned char v6 = (char)((uint64_t)v1 / 256); // 0x139ea5
    *(char *)-0x5de3b853 = *(char *)-0x5de3b853 + v6;
    *(char *)-0x4014a30c5776f62d = (char)v4;
    unsigned char v7 = *(char *)-0x48e67a3b; // 0x139ebc
    char v8 = v7 + v6; // 0x139ebc
    unsigned char v9 = llvm_ctpop_i8(v8); // 0x139ebc
    *(char *)-0x48e67a3b = v8;
    *(int64_t *)(a4 & 0xffffffff) = v5;
    return v5 & -0xff01 | 256 * (64 * (int64_t)(v8 == 0) | (int64_t)(v8 < v7) | 128 * (int64_t)(v8 < 0) | 16 * (int64_t)(v7 % 16 + v6 % 16 > 15) | 4 * (int64_t)(v9 % 2 == 0)) | 512;
}

// Address range: 0x139ede - 0x139f2a
int64_t function_139ede(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x139ede
    int64_t v1; // 0x139ede
    *(char *)a1 = (char)v1;
    bool v2; // 0x139ede
    int64_t v3 = v2 ? -1 : 1; // 0x139ede
    int64_t v4 = v3 + a1; // 0x139ede
    float80_t v5; // 0x139ede
    *(int32_t *)-0x73239e95 = (int32_t)v5;
    if (true == !v2) {
        // 0x139f1c
        int64_t v6; // 0x139ede
        int64_t v7 = v6;
        *(char *)v7 = *(char *)&v6 + (char)v7;
        char * v8 = (char *)v4; // 0x139f1e
        *v8 = *v8 ^ (char)(a3 / 256);
        return v6 & 0xffffffff ^ 0xc6e98069;
    }
    int64_t v9 = __asm_iretd(v4, v3 + a2); // 0x139ee8
    int32_t v10 = v1; // 0x139ee9
    *(int32_t *)(v9 + 61) = v10;
    int32_t * v11 = (int32_t *)(v1 - 0x19d99c83); // 0x139eec
    *v11 = *v11 + v10;
    *(int32_t *)v4 = __asm_insd((int16_t)a3);
    int64_t result = unknown_68179105(); // 0x139eff
    char * v12 = (char *)(a4 - 64); // 0x139f04
    char v13 = result; // 0x139f04
    *v12 = *v12 + v13;
    *(char *)0x4b8abe0e = *(char *)0x4b8abe0e + 8;
    char * v14 = (char *)(result + 0x1bb0068); // 0x139f0f
    *v14 = *v14 >> 1;
    char * v15 = (char *)(8 * a4 + 0xed03086f); // 0x139f15
    *v15 = *v15 + v13;
    return result;
}

// Address range: 0x139f48 - 0x139f50
int64_t function_139f48(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 35); // 0x139f4a
    int64_t v2; // 0x139f48
    *v1 = *v1 + (int32_t)v2;
    return v2 | a4 / 256 % 256;
}

// Address range: 0x139f51 - 0x139f80
int64_t function_139f51(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x139f51
    int64_t v1; // 0x139f51
    int64_t v2 = v1;
    int64_t v3 = a2;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    char * v4 = (char *)(a3 + 0x81e4aff5 & 0xffffffff); // 0x139f53
    *v4 = *v4 | (char)v1;
    unsigned char v5 = (char)a3; // 0x139f5a
    int64_t result; // 0x139f51
    char v6 = *(char *)&result;
    unsigned char v7 = v6 + v5; // 0x139f5a
    *(char *)result = v6 + (char)a4 + (char)(v7 < v5);
    unsigned char v8 = *(char *)(result % 256 + v1); // 0x139f5e
    uint32_t v9 = (int32_t)(result & 0xc22b7300 | (int64_t)v8) | 0x3dd48c00; // 0x139f65
    int32_t * v10 = (int32_t *)(a4 + 46); // 0x139f6a
    uint32_t v11 = (int32_t)a4; // 0x139f6a
    *v10 = *v10 + v11;
    int64_t v12 = v9 + 0x5ba9875d; // 0x139f6d
    result = v12;
    int32_t * v13 = (int32_t *)(v12 - 31); // 0x139f73
    uint32_t v14 = *v13; // 0x139f73
    uint32_t v15 = v11 % 32; // 0x139f73
    result = v12;
    if (v15 != 0) {
        *v13 = v14 << v15 | (int32_t)((int64_t)v14 >> (int64_t)(33 - v15)) | (int32_t)(v9 > 0xa45678a2) << v15 - 1;
    }
    int64_t v16 = a3 & -256 | (int64_t)v7; // 0x139f5a
    __asm_out_135((int16_t)v16, (int32_t)result);
    char * v17 = (char *)(v16 - 0x1f078852); // 0x139f77
    *v17 = *v17 | v7;
    *(char *)v3 = *(char *)&v3 + (char)result;
    return result;
}

// Address range: 0x139f95 - 0x139f96
int64_t function_139f95(void) {
    // 0x139f95
    int64_t result; // 0x139f95
    return result;
}

// Address range: 0x139fb2 - 0x139fb3
int64_t function_139fb2(void) {
    // 0x139fb2
    int64_t result; // 0x139fb2
    return result;
}

// Address range: 0x139fc1 - 0x139fc2
int64_t function_139fc1(void) {
    // 0x139fc1
    int64_t result; // 0x139fc1
    return result;
}

// Address range: 0x139fc6 - 0x139fc8
int64_t function_139fc6(void) {
    // 0x139fc6
    return function_139fb2();
}

// Address range: 0x139fe3 - 0x139fe9
int64_t function_139fe3(int64_t a1) {
    // 0x139fe3
    return function_25e917a3();
}

// Address range: 0x13a01b - 0x13a01e
int64_t function_13a01b(int64_t a1) {
    // 0x13a01b
    return function_139fc1();
}

// Address range: 0x13a05c - 0x13a061
int64_t function_13a05c(void) {
    // 0x13a05c
    return function_2c09d8eb();
}

// Address range: 0x13a080 - 0x13a093
int64_t function_13a080(void) {
    // 0x13a080
    int64_t result; // 0x13a080
    *(int32_t *)-0x38ba6882650c00fa = (int32_t)result;
    return result;
}

// Address range: 0x13a0c3 - 0x13a0c8
int64_t function_13a0c3(void) {
    // 0x13a0c3
    return function_633a7215();
}

// Address range: 0x13a108 - 0x13a10e
int64_t function_13a108(void) {
    // 0x13a108
    return unknown_ffffffffbc50c50e();
}

// Address range: 0x13a133 - 0x13a134
int64_t function_13a133(void) {
    // 0x13a133
    int64_t result; // 0x13a133
    return result;
}

// Address range: 0x13a149 - 0x13a151
int64_t function_13a149(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13a149
    int64_t result; // 0x13a149
    bool v1; // 0x13a149
    if (v1) {
        result = function_13a133();
    }
    int32_t * v2 = (int32_t *)(a3 + 2); // 0x13a14b
    *v2 = *v2 + (int32_t)a3;
    return result;
}

// Address range: 0x13a16c - 0x13a174
int64_t function_13a16c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13a16c
    return function_fffffffffa4c6191();
}

// Address range: 0x13a1bc - 0x13a1bd
int64_t function_13a1bc(void) {
    // 0x13a1bc
    int64_t result; // 0x13a1bc
    return result;
}

// Address range: 0x13a1ca - 0x13a23c
int64_t function_13a1ca(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = unknown_1808b2d0(); // 0x13a1ca
    bool v2; // 0x13a1ca
    int64_t v3 = (v2 ? -1 : 1) + a1; // 0x13a1cf
    *(int32_t *)-0x5f347872f43d33f6 = (int32_t)v1;
    *(int32_t *)v3 = (int32_t)unknown_3ab903e1(v3);
    int64_t v4 = v3 + (v2 ? -4 : 4); // 0x13a1e8
    int64_t result = unknown_436cedf0(v4); // 0x13a1f1
    if (a4 == 0) {
        // 0x13a23a
        return result;
    }
    // 0x13a1f3
    int64_t v5; // 0x13a1ca
    int32_t * v6 = (int32_t *)(v5 + 34); // 0x13a1f3
    *v6 = *v6 + 0x27c803ee * *(int32_t *)(8 * v5 + a4);
    int64_t v7 = unknown_ffffffff9c3771ff(); // 0x13a1f9
    int64_t v8; // 0x13a1ca
    int64_t v9 = (int64_t)&v8; // 0x13a1fe
    int32_t * v10 = (int32_t *)(a2 - 0x34273c10); // 0x13a1ff
    *v10 = *v10 | (int32_t)v5;
    uint64_t v11 = a4 / 256 + v9; // 0x13a205
    char * v12 = (char *)(v11 % 256 | v9 & -256); // 0x13a209
    *v12 = -1 - *v12 | (char)v11;
    *(int64_t *)((v7 & 0xffffffff) - 8) = -25;
    int64_t v13 = unknown_4455a41b(); // 0x13a215
    int32_t * v14 = (int32_t *)(v5 + 0x356cd400); // 0x13a21a
    uint32_t v15 = *v14; // 0x13a21a
    uint32_t v16 = (int32_t)v4; // 0x13a21a
    int32_t v17 = v15 - v16; // 0x13a21a
    *v14 = v17;
    int64_t v18 = v13; // 0x13a228
    if (v15 >= v16 && v17 != 0) {
        v18 = function_13a1bc();
    }
    // 0x13a22a
    __asm_in_138((int16_t)((v18 & 0xffffffff) * (v5 + 0xf64901e8 & 0xffffffff) / 0x100000000));
    // 0x13a23a
    return unknown_ffffffffc4afae3b();
}

// Address range: 0x13a24a - 0x13a24d
int64_t function_13a24a(int64_t a1) {
    // 0x13a24a
    int64_t result; // 0x13a24a
    return result;
}

// Address range: 0x13a2c3 - 0x13a361
int64_t function_13a2c3(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x13a2c3
    int64_t v1; // 0x13a2c3
    int64_t v2 = v1;
    uint32_t v3 = *(int32_t *)(v2 + 0x61ae998f) & (int32_t)v1; // 0x13a2ca
    *(int32_t *)v2 = (int32_t)v2 / 64;
    bool v4; // 0x13a2c3
    int64_t v5 = v4 ? -1 : 1; // 0x13a2d3
    int64_t v6 = v5 + a1; // 0x13a2d3
    int64_t v7 = v5 + a2; // 0x13a2d3
    uint32_t v8 = *(int32_t *)(a3 - 42); // 0x13a2d4
    int64_t result = __asm_hlt(v6, v7); // 0x13a2d7
    int32_t * v9 = (int32_t *)(result + 0x66a59dd9); // 0x13a2d8
    *v9 = (int32_t)(v3 < v8) + (int32_t)v7 + *v9;
    *(int64_t *)((int64_t)(v3 - v8) - 8) = 0x13d0f38;
    char * v10 = (char *)(v6 - 0x3028ee62); // 0x13a2e3
    *v10 = *v10 + (char)(a3 / 256);
    int64_t v11 = v6 + v5; // 0x13a2eb
    int64_t * v12 = (int64_t *)(v1 + 0x4fc1e950 + 8 * v11); // 0x13a2ec
    int64_t v13 = *v12 + 1; // 0x13a2ec
    unsigned char v14 = llvm_ctpop_i8((char)v13); // 0x13a2ec
    *v12 = v13;
    if (v14 % 2 == 0) {
        // 0x13a2f6
        *(char *)-0x2018f903 = *(char *)-0x2018f903 + (char)(v1 / 256);
        return result;
    }
    uint64_t v15 = v1 + 0x13d00ab + 2 * v2; // 0x13a2c3
    int32_t * v16 = (int32_t *)(result - 0xe18f18b); // 0x13a346
    *v16 = -*v16;
    if ((v15 & 0xffffffff) == 0) {
        // 0x13a358
        return (int64_t)*(int32_t *)-0x4dfec2ff379960f4;
    }
    int64_t result2 = unknown_68de9e54(v11, v7 + v5); // 0x13a34e
    char * v17 = (char *)result2; // 0x13a353
    *v17 = *v17 + (char)(v15 / 256);
    return result2;
}

// Address range: 0x30d658 - 0x30d7c9
int64_t function_30d658(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4; // bp-48, 0x30d6ef
    int64_t v2 = (int64_t)&v1; // 0x30d72a
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x30d732
    int64_t v4 = *v3; // 0x30d732
    int64_t v5 = v2 - 8; // 0x30d732
    int64_t * v6 = (int64_t *)v5; // 0x30d732
    *v6 = v4;
    int64_t * v7 = (int64_t *)(v2 - 16); // 0x30d736
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x30d74c
    *v8 = v5;
    *v7 = 0x6855dc52;
    v1 = *v7;
    *v7 = 0x5e734433;
    *v8 = v4;
    *v3 = *v7;
    *v7 = a1;
    *v7 = v2;
    int64_t v9 = *v6; // 0x30d7ab
    *v7 = v9;
    *v8 = v9;
    return function_c6d58(*v7);
}

// Address range: 0x30d7dd - 0x30d7de
int64_t function_30d7dd(int64_t a1) {
    // 0x30d7dd
    int64_t result; // 0x30d7dd
    return result;
}

// Address range: 0x30d800 - 0x30d801
int64_t function_30d800(int64_t a1) {
    // 0x30d800
    int64_t result; // 0x30d800
    return result;
}

// Address range: 0x30d83c - 0x30d83f
int64_t function_30d83c(void) {
    // 0x30d83c
    int64_t result; // 0x30d83c
    return result;
}

// Address range: 0x30da58 - 0x30da80
int64_t function_30da58(int64_t a1, int64_t a2) {
    // 0x30da58
    int64_t v1; // 0x30da58
    return function_c6d58(v1);
}

// Address range: 0x30da80 - 0x30da85
int64_t function_30da80(void) {
    // 0x30da80
    return function_30e86d();
}

// Address range: 0x30dab3 - 0x30dad3
int64_t function_30dab3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30dab3
    float80_t v1; // 0x30dab3
    *(int16_t *)(a4 + 0x1e8e325) = (int16_t)v1;
    uint32_t v2 = __asm_in_134((int16_t)a3); // 0x30dac5
    int64_t v3; // 0x30dab3
    *(char *)a3 = *(char *)&v3 + (char)(v2 / 256);
    return v2 + 0x20117558;
}

// Address range: 0x30dada - 0x30dadd
int64_t function_30dada(void) {
    // 0x30dada
    int64_t result; // 0x30dada
    return result;
}

// Address range: 0x30daec - 0x30daed
int64_t function_30daec(void) {
    // 0x30daec
    int64_t result; // 0x30daec
    return result;
}

// Address range: 0x30daef - 0x30db98
int64_t function_30daef(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x30daef
    int64_t result; // 0x30daef
    uint32_t v1 = (int32_t)result; // 0x30daef
    uint32_t v2 = (int32_t)result;
    uint64_t v3 = a4 - 1; // 0x30daf0
    if (v3 == 0 || v2 == v1) {
        // 0x30daf2
        return result;
    }
    // 0x30db00
    *(char *)v3 = (char)(v3 / 256);
    if (v2 >= v1) {
        function_30daec();
    }
    // 0x30db04
    bool v4; // 0x30daef
    int64_t v5 = (v4 ? -4 : 4) + a1; // 0x30daef
    int32_t * v6 = (int32_t *)(a2 + 0x79ef1357 + 4 * v5); // 0x30db04
    int32_t v7 = *v6; // 0x30db04
    int32_t v8 = a3; // 0x30db04
    int32_t v9 = v7 + v8; // 0x30db04
    *v6 = v9;
    unknown_ffffffffe2e2611a();
    __asm_iretd(v5, a5);
    int32_t * v10 = (int32_t *)(result - 0x17fef7cf); // 0x30db1b
    uint32_t v11 = *v10; // 0x30db1b
    *v10 = (int32_t)v5;
    int64_t result2 = unknown_741e4927(v11); // 0x30db21
    if (v9 < 0 != ((v9 ^ v7) & (v9 ^ v8)) < 0) {
        char * v12 = (char *)(result - 4 + (int64_t)v11); // 0x30db28
        *v12 = *v12 + (char)(a3 / 256);
        return result2;
    }
    int64_t v13 = unknown_ffffffffd5321885(); // 0x30db7f
    char * v14 = (char *)(result + 77); // 0x30db89
    char v15 = *v14; // 0x30db89
    *v14 = v15 + (char)(a3 / 256) + (char)((int32_t)v13 < 0x402001e8);
    return unknown_67106197();
}

// Address range: 0x30dba4 - 0x30dba7
int64_t function_30dba4(void) {
    // 0x30dba4
    int64_t result; // 0x30dba4
    return result;
}

// Address range: 0x30dc31 - 0x30dc49
int64_t function_30dc31(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_6096bf39(); // 0x30dc33
    uint32_t v2 = (int32_t)a4;
    uint32_t v3 = v2 % 32; // 0x30dc38
    if (v3 != 0) {
        *(int32_t *)a4 = v2 << 32 - v3 | v2 >> v3;
    }
    int64_t v4; // 0x30dc31
    int32_t * v5 = (int32_t *)(v4 - 0x1443c5e2); // 0x30dc3f
    *v5 = *v5 + (int32_t)v4;
    return v1 & 0xffffffdd ^ 0xe8681ac1;
}

// Address range: 0x30e258 - 0x30e289
int64_t function_30e258(int64_t a1, int64_t a2, int64_t a3) {
    // 0x30e258
    int64_t v1; // 0x30e258
    *(char *)a1 = (char)v1;
    bool v2; // 0x30e258
    int64_t v3 = v2 ? -1 : 1; // 0x30e25f
    int64_t v4 = v3 + a1; // 0x30e25f
    unknown_69adc96a(v4, v3 + a2);
    char * v5 = (char *)v4; // 0x30e269
    *v5 = *v5 + (char)v1;
    int64_t v6; // 0x30e258
    *(char *)a3 = *(char *)&v6 & (char)(v1 / 256);
    unknown_18c20d75();
    int64_t v7 = unknown_ffffffff9781287e(); // 0x30e278
    int32_t v8 = *(int32_t *)(v4 + 8 * v1); // 0x30e27d
    int32_t * v9 = (int32_t *)((0x100000000 * v7 >> 32) * (int64_t)v8 / 0x100000000); // 0x30e281
    *v9 = *v9 + (int32_t)v4;
    return __asm_int1();
}

// Address range: 0x30e28a - 0x30e2a0
int64_t function_30e28a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30e28a
    bool v1; // 0x30e28a
    if (a4 != 1 == v1) {
        function_30e235();
    }
    // 0x30e28f
    return unknown_fffffffff52d9a9f();
}

// Address range: 0x30e2a0 - 0x30e2a5
int64_t function_30e2a0(void) {
    // 0x30e2a0
    return function_ffffffffe86ae865();
}

// Address range: 0x30e2a5 - 0x30e2fd
int64_t function_30e2a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    unknown_4d3b6ac2();
    int32_t v2 = *(int32_t *)(a3 + 0x7155728c); // 0x30e2c1
    *(int32_t *)a1 = (int32_t)unknown_ffffffffabe61ccd();
    bool v3; // 0x30e2a5
    int64_t v4 = v3 ? -4 : 4; // 0x30e2cc
    int64_t v5 = v4 + a1; // 0x30e2cc
    *(int32_t *)v5 = *(int32_t *)&v1;
    int64_t v6 = unknown_2d3e28d6(v5 + v4, v1 + v4); // 0x30e2d0
    int64_t v7; // 0x30e2a5
    char * v8 = (char *)((int64_t)(v2 ^ (int32_t)v7) + 0x2e693a01); // 0x30e2d7
    *v8 = *v8 + (char)v6;
    *(int32_t *)-0x7752f5fe1750ca81 = (int32_t)unknown_d3353e3();
    int64_t v9 = unknown_ffffffffd8d6a4f7(); // 0x30e2f1
    return v9 & -256 | (int64_t)(*(char *)v9 | (char)v9);
}

// Address range: 0x30e304 - 0x30e30b
int64_t function_30e304(void) {
    // 0x30e304
    int64_t v1; // 0x30e304
    unsigned char v2 = (char)v1;
    char v3 = v2 + 15; // 0x30e304
    unsigned char v4 = llvm_ctpop_i8(v3); // 0x30e304
    *(char *)v1 = v3;
    return v1 & -0xff01 | 256 * (16 * (int64_t)(v2 % 16 != 0) | (int64_t)(v2 > 240) | 64 * (int64_t)(v3 == 0) | 128 * (int64_t)(v3 < 0) | 4 * (int64_t)(v4 % 2 == 0)) | 512;
}

// Address range: 0x30e392 - 0x30e393
int64_t function_30e392(void) {
    // 0x30e392
    int64_t result; // 0x30e392
    return result;
}
