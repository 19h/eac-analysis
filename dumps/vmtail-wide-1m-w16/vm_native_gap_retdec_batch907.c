/*
 * Targeted RetDec C for native executable gap queue batch 907.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x12cfdc-0x12d0dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12d0dc-0x12d2dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12d4dc-0x12d6dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x23a6b6-0x23a8b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23a8b6-0x23aab6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23aab6-0x23acb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23acb6-0x23aeb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23aeb6-0x23b0b6 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g6;
extern int g7;
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

int64_t function_12cfdc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12d02e(int64_t a1);
int64_t function_12d09d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12d0fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12d168(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12d170(void);
int64_t function_12d1cd(void);
int64_t function_12d1f4(void);
int64_t function_12d213(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12d234(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12d251(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12d28b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12d2b0(int64_t a1);
int64_t function_12d4dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12d601(void);
int64_t function_12d631(void);
int64_t function_12d666(void);
int64_t function_12d6a4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_20c7f49();
int64_t function_23a6b6(void);
int64_t function_23a6bc(void);
int64_t function_23a6d6(void);
int64_t function_23a6d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23a6fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23a739(void);
int64_t function_23a73f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23a7bc(void);
int64_t function_23a7ca(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23a7d3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_23a817(void);
int64_t function_23a82c(int64_t a1);
int64_t function_23a88d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23a8da(void);
int64_t function_23a972(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23a98b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23a9e7(int64_t a1, int64_t a2, int32_t a3);
int64_t function_23aa04(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23aa1e(void);
int64_t function_23aa4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23aa81(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_23aacc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23aaee(int64_t a1);
int64_t function_23ab13(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_23ab26(void);
int64_t function_23ab32(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23ab39(int64_t a1);
int64_t function_23ab53(int64_t a1);
int64_t function_23ab5e(void);
int64_t function_23ab9b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_23abe6(int64_t a1, int64_t a2);
int64_t function_23ac14(void);
int64_t function_23ac20(void);
int64_t function_23ac81(void);
int64_t function_23acca(void);
int64_t function_23ad0e(void);
int64_t function_23ad24(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23ad46(void);
int64_t function_23ae0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23ae59(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23ae61(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23af34(int64_t a1);
int64_t function_23af60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23af8a(int64_t a1);
int64_t function_23afb7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23afe9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23b001(void);
int64_t function_23b006(void);
int64_t function_23b026(int64_t a1, int64_t a2);
int64_t function_23b04b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_736ee261();
int64_t function_ffffffff83e2d312();
int64_t function_ffffffffab81ae6e();
int64_t function_ffffffffb4b15f24();
int64_t function_ffffffffde48da8a();
int64_t unknown_18aa2072();
int64_t unknown_1913b336();
int64_t unknown_235ea5e1();
int64_t unknown_24770395();
int64_t unknown_2aa8e81d();
int64_t unknown_38a248b2();
int64_t unknown_401b994();
int64_t unknown_514b5947();
int64_t unknown_59ea5a47();
int64_t unknown_5d402366();
int64_t unknown_601ae134();
int64_t unknown_65224ad2();
int64_t unknown_69099a6e();
int64_t unknown_79198648();
int64_t unknown_7c1eb57();
int64_t unknown_a47091();
int64_t unknown_ffffffff9133274a();
int64_t unknown_ffffffff963d909f();
int64_t unknown_ffffffff9bc5dad0();
int64_t unknown_ffffffffab4fa6e1();
int64_t unknown_ffffffffb478d454();
int64_t unknown_ffffffffb92454bd();
int64_t unknown_ffffffffd68f3e16();
int64_t unknown_ffffffffdbe2477d();
int64_t unknown_ffffffffe239c268();
int64_t unknown_ffffffffead6d753();
int64_t unknown_fffffffff5bde507();
int64_t unknown_fffffffffade188b();
int64_t unknown_fffffffffc076fbb();

// Address range: 0x12cfdc - 0x12d001
int64_t function_12cfdc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12cfdc
    int64_t v1; // 0x12cfdc
    int32_t * v2 = (int32_t *)((v1 & -0xff01) - 0x558fabf6); // 0x12cfe9
    *v2 = *v2 | -0x620a0486;
    *(int32_t *)-0x4b8bdf2d25fffec3 = (int32_t)v1;
    return v1 & 0xffffffff;
}

// Address range: 0x12d02e - 0x12d031
int64_t function_12d02e(int64_t a1) {
    // 0x12d02e
    int64_t result; // 0x12d02e
    return result;
}

// Address range: 0x12d09d - 0x12d0a6
int64_t function_12d09d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x12d09d
    int64_t result; // 0x12d09d
    int32_t * v1 = (int32_t *)(result + 0x523de703); // 0x12d09d
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x12d0fd - 0x12d133
int64_t function_12d0fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_fffffffff5bde507(); // 0x12d101
    char * v2 = (char *)(a4 + 102); // 0x12d106
    int64_t v3; // 0x12d0fd
    bool v4; // 0x12d0fd
    *v2 = (char)v4 - (char)v3 + *v2;
    int32_t * v5 = (int32_t *)v1; // 0x12d10c
    *v5 = *v5 | (int32_t)v1;
    unknown_ffffffffd68f3e16((v4 ? -1 : 1) + a1);
    return unknown_601ae134((int64_t)(-0x171a9303 * *(int32_t *)(v1 & 0xffffffff)));
}

// Address range: 0x12d168 - 0x12d170
int64_t function_12d168(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x12d168
    return unknown_69099a6e(a1, a2, a3, a4, a5);
}

// Address range: 0x12d170 - 0x12d175
int64_t function_12d170(void) {
    // 0x12d170
    return function_ffffffff83e2d312();
}

// Address range: 0x12d1cd - 0x12d1d2
int64_t function_12d1cd(void) {
    // 0x12d1cd
    return function_ffffffffde48da8a();
}

// Address range: 0x12d1f4 - 0x12d1f5
int64_t function_12d1f4(void) {
    // 0x12d1f4
    int64_t result; // 0x12d1f4
    return result;
}

// Address range: 0x12d213 - 0x12d230
int64_t function_12d213(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12d213
    int64_t result; // 0x12d213
    return result;
}

// Address range: 0x12d234 - 0x12d250
int64_t function_12d234(int64_t a1, int64_t a2, int64_t a3) {
    // 0x12d234
    float80_t v1; // 0x12d234
    *(float32_t *)a3 = (float32_t)v1;
    int64_t v2; // 0x12d234
    bool v3; // 0x12d234
    return (int64_t)&v2 + 0x6b5520fc & 0xfffffffc | (int64_t)v3;
}

// Address range: 0x12d251 - 0x12d26a
int64_t function_12d251(int64_t a1, int64_t a2, int64_t a3) {
    // 0x12d251
    int64_t result; // 0x12d251
    bool v1; // 0x12d251
    if (!v1 && !v1) {
        result = function_12d1f4();
    }
    // 0x12d25b
    __asm_int(-33);
    char * v2 = (char *)(a2 & 0xffffffff & a3); // 0x12d265
    int64_t v3; // 0x12d251
    *v2 = *v2 + (char)((uint64_t)v3 / 256);
    int64_t v4; // 0x12d251
    unsigned char v5 = *(char *)&v4; // 0x12d267
    *(char *)v4 = v5 / 128 | 2 * v5;
    return result;
}

// Address range: 0x12d28b - 0x12d29a
int64_t function_12d28b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x12d28b
    return unknown_a47091(a1, a2, a3);
}

// Address range: 0x12d2b0 - 0x12d2b5
int64_t function_12d2b0(int64_t a1) {
    // 0x12d2b0
    int64_t result; // 0x12d2b0
    int32_t * v1 = (int32_t *)(result + 58); // 0x12d2b0
    *v1 = *v1 + 83;
    return result;
}

// Address range: 0x12d4dc - 0x12d584
int64_t function_12d4dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_hlt(); // 0x12d4dc
    int64_t result = v1; // 0x12d4dc
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2; // 0x12d4dc
    int64_t v3 = v2 & a2;
    if (llvm_ctpop_i8((char)v3) % 2 != 0) {
        // 0x12d4dc
        return result;
    }
    // 0x12d4e5
    bool v4; // 0x12d4dc
    int64_t v5 = (v4 ? -4 : 4) + a1; // 0x12d4dd
    int64_t v6 = a4 & -256 | 67; // 0x12d4de
    *(int64_t *)v2 = 0x3d009d08;
    int32_t * v7 = (int32_t *)(v5 + 0x7fdbdcbc); // 0x12d4ec
    uint32_t v8 = *v7; // 0x12d4ec
    int32_t v9 = a3; // 0x12d4ec
    int32_t v10 = v8 + v9; // 0x12d4ec
    *v7 = v10;
    if (v10 < 0 == ((v10 ^ v8) & (v10 ^ v9)) < 0 == (v10 != 0)) {
        // 0x12d56c
        unknown_18aa2072();
        int32_t * v11 = (int32_t *)v5; // 0x12d571
        *v11 = *v11 + (v10 < v8 ? -0x50cac531 : -0x50cac532);
        int64_t result2 = unknown_ffffffffdbe2477d(); // 0x12d577
        char * v12 = (char *)(v6 + 0x1e808ae); // 0x12d57e
        unsigned char v13 = *v12; // 0x12d57e
        *v12 = v13 / 128 | 2 * v13;
        return result2;
    }
    // 0x12d4f4
    int3_t v14; // 0x12d4dc
    int3_t v15 = v14 - 1; // 0x12d4f4
    __frontend_reg_store_fpr(v15, (float80_t)*(float64_t *)((v3 & 0xffffffff) + 0x76333e94));
    if (*(int32_t *)(a3 + 123) == v9) {
        int64_t v16 = result;
        *(char *)v16 = *(char *)&result + (char)v16;
        abort();
        // UNREACHABLE
    }
    int3_t v17 = v14 + 3; // 0x12d512
    __frontend_reg_store_fpr(v17, __frontend_reg_load_fpr(v17) / __frontend_reg_load_fpr(v15));
    *(int64_t *)(v2 - 8) = v6 - 1;
    return result;
}

// Address range: 0x12d601 - 0x12d602
int64_t function_12d601(void) {
    // 0x12d601
    int64_t result; // 0x12d601
    return result;
}

// Address range: 0x12d631 - 0x12d632
int64_t function_12d631(void) {
    // 0x12d631
    int64_t result; // 0x12d631
    return result;
}

// Address range: 0x12d666 - 0x12d668
int64_t function_12d666(void) {
    // 0x12d666
    return function_12d601();
}

// Address range: 0x12d6a4 - 0x12d6d5
int64_t function_12d6a4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x12d6a4
    int64_t v1; // 0x12d6a4
    int32_t * v2 = (int32_t *)(v1 + 83); // 0x12d6a9
    *v2 = *v2 + (int32_t)v1;
    int64_t v3 = unknown_79198648(); // 0x12d6ac
    int64_t v4 = (v3 + v1) % 256 | v3 & -256; // 0x12d6b1
    int32_t * v5 = (int32_t *)v4; // 0x12d6b3
    *v5 = *v5 | (int32_t)v4;
    int64_t v6 = unknown_fffffffffc076fbb(); // 0x12d6b5
    char * v7 = (char *)(v1 + 0x1f983800); // 0x12d6ba
    *v7 = *v7 & (char)(a3 / 256);
    int32_t * v8 = (int32_t *)(v6 + 0x4ee1e809); // 0x12d6c0
    *v8 = *v8 | 0x1e801e8;
    return v6 + (a3 % 256 | a4) & 0xffffffff;
}

// Address range: 0x23a6b6 - 0x23a6b8
int64_t function_23a6b6(void) {
    // 0x23a6b6
    int64_t v1; // 0x23a6b6
    int64_t v2 = v1;
    bool v3; // 0x23a6b6
    return (v2 + 182 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x23a6bc - 0x23a6be
int64_t function_23a6bc(void) {
    // 0x23a6bc
    int64_t v1; // 0x23a6bc
    return function_23a6d8(v1, v1, v1, (int64_t)&g7);
}

// Address range: 0x23a6d6 - 0x23a6d7
int64_t function_23a6d6(void) {
    // 0x23a6d6
    int64_t result; // 0x23a6d6
    return result;
}

// Address range: 0x23a6d8 - 0x23a6eb
int64_t function_23a6d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)-0x6f9afc19; // 0x23a6e0
    int64_t v2; // 0x23a6d8
    *(char *)-0x6f9afc19 = v1 + (char)((uint64_t)v2 / 256);
    return __asm_sti();
}

// Address range: 0x23a6fa - 0x23a6ff
int64_t function_23a6fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23a6fa
    int64_t result; // 0x23a6fa
    return result;
}

// Address range: 0x23a739 - 0x23a73a
int64_t function_23a739(void) {
    // 0x23a739
    int64_t result; // 0x23a739
    return result;
}

// Address range: 0x23a73f - 0x23a7a4
int64_t function_23a73f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23a73f
    bool v1; // 0x23a73f
    if (true == !v1) {
        function_23a6d6();
    }
    int64_t v2 = unknown_514b5947(); // 0x23a741
    if (!v1 && !v1) {
        // 0x23a77c
        *(int32_t *)v2 = (int32_t)v2;
        unknown_fffffffffade188b();
        unknown_401b994();
        int64_t v3; // 0x23a73f
        __asm_outsd((int16_t)a3, *(int32_t *)&v3);
        return unknown_ffffffff963d909f();
    }
    // 0x23a748
    *(char *)a1 = __asm_insb((int16_t)a3);
    if (v1) {
        function_23a739();
    }
    int64_t result = unknown_ffffffffb478d454(); // 0x23a74e
    *(char *)-0x916fe17a2c7fe63 = (char)result;
    return result;
}

// Address range: 0x23a7bc - 0x23a7bd
int64_t function_23a7bc(void) {
    // 0x23a7bc
    int64_t result; // 0x23a7bc
    return result;
}

// Address range: 0x23a7ca - 0x23a7d3
int64_t function_23a7ca(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23a7ca
    int64_t v1; // 0x23a7ca
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x23a7ca
    int64_t v3 = v2 ? -4 : 4; // 0x23a7ca
    int64_t v4; // 0x23a7ca
    *(char *)a3 = *(char *)&v4 + (char)v1;
    return function_736ee261(v3 + a1, v3 + a2);
}

// Address range: 0x23a7d3 - 0x23a7f2
int64_t function_23a7d3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x23a7d3
    *(int32_t *)0xc3ae8d = *(int32_t *)0xc3ae8d - 1;
    char * v1 = (char *)unknown_ffffffffab4fa6e1(a4); // 0x23a7e0
    *v1 = *v1 + (char)(a3 / 256);
    int64_t v2; // 0x23a7d3
    char * v3 = (char *)(v2 + 79); // 0x23a7ed
    *v3 = -*v3;
    return function_23a7bc();
}

// Address range: 0x23a817 - 0x23a81f
int64_t function_23a817(void) {
    // 0x23a817
    return unknown_2aa8e81d();
}

// Address range: 0x23a82c - 0x23a82e
int64_t function_23a82c(int64_t a1) {
    // 0x23a82c
    int64_t result; // 0x23a82c
    return result;
}

// Address range: 0x23a88d - 0x23a8a5
int64_t function_23a88d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23a88d
    return (int64_t)*(int32_t *)0x6901e87463eb0d95;
}

// Address range: 0x23a8da - 0x23a8dd
int64_t function_23a8da(void) {
    // 0x23a8da
    int64_t result; // 0x23a8da
    return result;
}

// Address range: 0x23a972 - 0x23a982
int64_t function_23a972(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = *(int32_t *)(__asm_wait() - 0x74ab1f5c) & (int32_t)a3; // 0x23a976
    *(char *)((int64_t)v1 + 64) = 5;
    return function_23a9e7(a1, a2, v1);
}

// Address range: 0x23a98b - 0x23a992
int64_t function_23a98b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23a98b
    int64_t v1; // 0x23a98b
    int64_t v2 = v1;
    return (v2 - ((v2 & 256) == 0 ? 212 : 213)) % 256 | v2 & -256;
}

// Address range: 0x23a9e7 - 0x23a9f0
int64_t function_23a9e7(int64_t a1, int64_t a2, int32_t a3) {
    // 0x23a9e7
    int64_t result; // 0x23a9e7
    int64_t v1 = result + a1; // 0x23a9e7
    int32_t * v2 = (int32_t *)(a2 + 24); // 0x23a9eb
    *v2 = *v2 + a3;
    int64_t v3; // 0x23a9e7
    *(int32_t *)(v1 & 0xffffffff) = *(int32_t *)&v3 + (int32_t)v1;
    return result;
}

// Address range: 0x23aa04 - 0x23aa09
int64_t function_23aa04(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x23aa04
    int64_t result; // 0x23aa04
    if (v1 != 0) {
        uint32_t v2 = (int32_t)result;
        *(int32_t *)result = v2 >> 32 - v1 | v2 << v1;
    }
    return result;
}

// Address range: 0x23aa1e - 0x23aa1f
int64_t function_23aa1e(void) {
    // 0x23aa1e
    int64_t result; // 0x23aa1e
    return result;
}

// Address range: 0x23aa4b - 0x23aa58
int64_t function_23aa4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23aa4b
    bool v1; // 0x23aa4b
    if (a4 != 1 == v1) {
        function_23aa1e();
    }
    // 0x23aa4d
    return unknown_ffffffffead6d753();
}

// Address range: 0x23aa81 - 0x23aaca
int64_t function_23aa81(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    uint64_t v1 = unknown_24770395(); // 0x23aa8f
    char * v2 = (char *)(v1 + 0x3651700); // 0x23aa94
    *v2 = *v2 + (char)v1;
    int64_t v3; // 0x23aa81
    char * v4 = (char *)(v3 + 0x1201e800); // 0x23aa9a
    char v5 = v1 / 256; // 0x23aa9a
    *v4 = *v4 + v5;
    char * v6 = (char *)(v1 + 0x41243a0a); // 0x23aaa0
    *v6 = *v6 + v5;
    int64_t v7 = (int32_t)v1 >> 31; // 0x23aaa6
    char * v8 = (char *)v7; // 0x23aaa7
    *v8 = *v8 + (char)(v3 / 256);
    int64_t v9 = unknown_38a248b2() + 0xabbf8296; // 0x23aab1
    int64_t result = 257 * v9 & 0xff00 | v9 & 0xffff00ff; // 0x23aab6
    char * v10 = (char *)(2 * v7 + 111 + result); // 0x23aac1
    *v10 = *(char *)(v3 - 48) ^ (char)(a4 / 256);
    *(int32_t *)result = (int32_t)result;
    *(char *)(256 * (int64_t)*v10 | a4 & -0xff01) = (char)a4;
    return result;
}

// Address range: 0x23aacc - 0x23aaee
int64_t function_23aacc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23aacc
    unknown_65224ad2();
    unknown_1913b336();
    int64_t v1; // 0x23aacc
    return 2 * unknown_235ea5e1() + v1 & 0xffffffff;
}

// Address range: 0x23aaee - 0x23aaf1
int64_t function_23aaee(int64_t a1) {
    // 0x23aaee
    int64_t result; // 0x23aaee
    return result;
}

// Address range: 0x23ab13 - 0x23ab1e
int64_t function_23ab13(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x23ab13
    int64_t v1; // 0x23ab13
    int64_t v2 = v1;
    return v2 & 0xffffff00 | (int64_t)(int32_t)&g2 | (v2 + a4 / 256) % 256;
}

// Address range: 0x23ab26 - 0x23ab27
int64_t function_23ab26(void) {
    // 0x23ab26
    int64_t result; // 0x23ab26
    return result;
}

// Address range: 0x23ab32 - 0x23ab39
int64_t function_23ab32(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23ab32
    int64_t result; // 0x23ab32
    *(int32_t *)a3 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x23ab39 - 0x23ab50
int64_t function_23ab39(int64_t a1) {
    // 0x23ab39
    unknown_59ea5a47();
    int64_t v1 = unknown_ffffffff9133274a(); // 0x23ab44
    int64_t v2; // 0x23ab39
    char * v3 = (char *)(v2 - 110); // 0x23ab49
    *v3 = *v3 + (char)v1;
    return function_23ab26();
}

// Address range: 0x23ab53 - 0x23ab55
int64_t function_23ab53(int64_t a1) {
    // 0x23ab53
    int64_t result; // 0x23ab53
    return result;
}

// Address range: 0x23ab5e - 0x23ab67
int64_t function_23ab5e(void) {
    // 0x23ab5e
    return unknown_ffffffffe239c268();
}

// Address range: 0x23ab9b - 0x23aba3
int64_t function_23ab9b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)(2 * a3 + 0x761300b3); // 0x23ab9b
    bool v2; // 0x23ab9b
    *v1 = *v1 + (char)(a3 / 256) + (char)v2;
    int64_t result; // 0x23ab9b
    return result;
}

// Address range: 0x23abe6 - 0x23abe8
int64_t function_23abe6(int64_t a1, int64_t a2) {
    // 0x23abe6
    int64_t result; // 0x23abe6
    return result;
}

// Address range: 0x23ac14 - 0x23ac18
int64_t function_23ac14(void) {
    // 0x23ac14
    int64_t result; // 0x23ac14
    return result;
}

// Address range: 0x23ac20 - 0x23ac2c
int64_t function_23ac20(void) {
    // 0x23ac20
    return function_ffffffffb4b15f24();
}

// Address range: 0x23ac81 - 0x23ac86
int64_t function_23ac81(void) {
    // 0x23ac81
    return function_ffffffffab81ae6e();
}

// Address range: 0x23acca - 0x23accd
int64_t function_23acca(void) {
    // 0x23acca
    int64_t result; // 0x23acca
    return result;
}

// Address range: 0x23ad0e - 0x23ad11
int64_t function_23ad0e(void) {
    // 0x23ad0e
    int64_t result; // 0x23ad0e
    return result;
}

// Address range: 0x23ad24 - 0x23ad2b
int64_t function_23ad24(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23ad24
    int64_t v1; // 0x23ad24
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)v1;
    while (true) {
        // continue -> 0x23ad29
    }
}

// Address range: 0x23ad46 - 0x23ad47
int64_t function_23ad46(void) {
    // 0x23ad46
    int64_t result; // 0x23ad46
    return result;
}

// Address range: 0x23ae0d - 0x23ae20
int64_t function_23ae0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 0x509fb71d); // 0x23ae0d
    int64_t v2; // 0x23ae0d
    *v1 = *v1 + (int32_t)v2;
    int32_t v3; // 0x23ae0d
    *(int32_t *)(a4 - 29) = (int32_t)(int64_t)&v3;
    return function_23ae61(a1, a2, a3, a4);
}

// Address range: 0x23ae59 - 0x23ae61
int64_t function_23ae59(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23ae59
    int64_t result; // 0x23ae59
    __asm_out((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x23ae61 - 0x23aec1
int64_t function_23ae61(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23ae61
    int64_t v1; // 0x23ae61
    int64_t v2 = v1 & -256 | (uint64_t)v1 % 256; // 0x23ae62
    char * v3 = (char *)(a4 - 84); // 0x23ae64
    char v4 = a3; // 0x23ae64
    char v5 = *v3 & v4; // 0x23ae64
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x23ae64
    *v3 = v5;
    int64_t result = v2; // 0x23ae68
    if (v6 % 2 == 0) {
        // 0x23ae8b
        *(char *)0x924ec27 = *(char *)0x924ec27 + v4;
        uint32_t v7 = (int32_t)v2 - 0x18506c2e; // 0x23ae91
        *(int32_t *)0x6316fe057e5bbc32 = v7;
        int64_t v8 = a4 & -0xff01 | (int64_t)&g1; // 0x23aea0
        *(char *)a1 = v4;
        int32_t v9 = __asm_in_133(83); // 0x23aeab
        int64_t v10 = v9; // 0x23aeab
        char * v11 = (char *)((int64_t)v7 + 0x682fa1e4); // 0x23aead
        *v11 = *v11 + (char)v1;
        *(char *)v8 = (char)v9;
        result = (v10 & 0xff00) + v8 & 0xff00 | v10 & -0xff01;
    }
    // 0x23ae6c
    return result;
}

// Address range: 0x23af34 - 0x23af37
int64_t function_23af34(int64_t a1) {
    // 0x23af34
    int64_t result; // 0x23af34
    return result;
}

// Address range: 0x23af60 - 0x23af66
int64_t function_23af60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23af60
    int64_t result; // 0x23af60
    return result;
}

// Address range: 0x23af8a - 0x23af8b
int64_t function_23af8a(int64_t a1) {
    // 0x23af8a
    int64_t result; // 0x23af8a
    return result;
}

// Address range: 0x23afb7 - 0x23afd3
int64_t function_23afb7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = unknown_ffffffffb92454bd(); // 0x23afb7
    int64_t v2; // 0x23afb7
    char * v3 = (char *)(v2 - 0x24c8c55c); // 0x23afbc
    *v3 = *v3 + (char)(v1 / 256);
    int64_t v4; // 0x23afb7
    *(char *)v4 = *(char *)&v4 + (char)v1;
    int64_t v5 = unknown_ffffffff9bc5dad0(); // 0x23afca
    return (v5 + ((int64_t)&g6 >> 8) + 136) % 256 | v5 & -256;
}

// Address range: 0x23afe9 - 0x23aff0
int64_t function_23afe9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23afe9
    int64_t result; // 0x23afe9
    int32_t * v1 = (int32_t *)(result + 0x4700af8c); // 0x23afe9
    *v1 = *v1 + (int32_t)a4;
    return result;
}

// Address range: 0x23b001 - 0x23b006
int64_t function_23b001(void) {
    // 0x23b001
    return function_20c7f49();
}

// Address range: 0x23b006 - 0x23b00b
int64_t function_23b006(void) {
    // 0x23b006
    int64_t v1; // 0x23b006
    int64_t v2 = v1;
    return (v2 + 56) % 256 | v2 & -256;
}

// Address range: 0x23b026 - 0x23b038
int64_t function_23b026(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 89); // 0x23b026
    bool v2; // 0x23b026
    *v1 = *v1 + (v2 ? -0x75b0c0da : -0x75b0c0db);
    int64_t result; // 0x23b026
    return result;
}

// Address range: 0x23b04b - 0x23b06d
int64_t function_23b04b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23b04b
    int64_t v1; // 0x23b04b
    *(int32_t *)-0x4585ee52 = (int32_t)v1;
    unknown_7c1eb57();
    int32_t * v2 = (int32_t *)(v1 - 0x7a4c436f); // 0x23b056
    *v2 = *v2 + (int32_t)a3;
    int64_t v3 = unknown_5d402366(); // 0x23b060
    return (v3 + 117) % 256 | v3 & -256;
}
