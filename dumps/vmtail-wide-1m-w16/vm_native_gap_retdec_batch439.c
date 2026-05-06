/*
 * Targeted RetDec C for native executable gap queue batch 439.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2606c2-0x2608c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2608c2-0x260ac2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x260cc2-0x260ec2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x260ec2-0x2610c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2afd75-0x2aff75 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2aff75-0x2b0175 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b0175-0x2b0375 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b0375-0x2b0575 rank=- name=- kind=- bytes=- uncovered=-
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
void unknown_b6ccb9(void);
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
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_rsm(void);
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
int64_t __asm_fnstenv(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
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
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pcmpgtb(int128_t left, int128_t right);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
int128_t __asm_pavgw(int128_t left, int128_t right);
int128_t __asm_pmaxsw(int128_t left, int128_t right);
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

int64_t function_26066f();
int64_t function_26068c();
int64_t function_2606c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_260706(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_260748(int64_t a1);
int64_t function_260769(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2607bb(void);
int64_t function_26085a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2608d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26090c(int64_t a1);
int64_t function_260913(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_260945(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_260cc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_260cf7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_260e78(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2afd75(void);
int64_t function_2afd7a(void);
int64_t function_2afda2(void);
int64_t function_2afdea(void);
int64_t function_2afdeb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_2afe44(void);
int64_t function_2afe4b(int64_t a1);
int64_t function_2afe8b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2afec5(void);
int64_t function_2afee0(int64_t a1);
int64_t function_2aff7e(void);
int64_t function_2affd2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b0029(void);
int64_t function_2b00d7(void);
int64_t function_2b00de(void);
int64_t function_2b00f1(void);
int64_t function_2b0101(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2b0114(void);
int64_t function_2b01da(void);
int64_t function_2b01f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2b020a(void);
int64_t function_2b025b(void);
int64_t function_2b031f(void);
int64_t function_2b032b(void);
int64_t function_2b033f(int64_t a1);
int64_t function_2b0347(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2b03bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b040a(void);
int64_t function_2b0412(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_2b046f(int64_t a1, uint64_t a2, int64_t a3, int64_t a4);
int64_t function_caf2a();
int64_t function_ffffffffe896096e();
int64_t function_ffffffffe8fb0c39();
int64_t unknown_238d5292();
int64_t unknown_30fb67b1();
int64_t unknown_3d8ebba4();
int64_t unknown_481c5d19();
int64_t unknown_749f23d4();
int64_t unknown_8828d2f();
int64_t unknown_e2c3b20();
int64_t unknown_ffffffff9134eed7();
int64_t unknown_ffffffffc2d0f18d();
int64_t unknown_ffffffffc894e497();
int64_t unknown_ffffffffe1bd1dc7();

// Address range: 0x2606c2 - 0x2606e6
int64_t function_2606c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 - 1; // 0x2606c2
    int64_t v2; // 0x2606c2
    if (v1 != 0) {
        v2 = function_26068c();
    }
    int64_t v3 = v2;
    int64_t v4; // 0x2606c2
    char v5 = *(char *)(v4 - 0x373801ea); // 0x2606c7
    int64_t v6 = v3 & -256 | (int64_t)(v5 ^ (char)v3); // 0x2606c7
    uint32_t v7 = (int32_t)v6; // 0x2606cf
    int64_t v8 = (v1 & -0xff01) - 1; // 0x2606d4
    int64_t v9 = v6; // 0x2606d4
    if (v8 != 0 == v7 == 0x5886a501) {
        v9 = function_26066f();
    }
    uint32_t v10 = (int32_t)a1;
    uint32_t v11 = (int32_t)v8; // 0x2606d6
    uint32_t v12 = v11 + (int32_t)a2; // 0x2606d6
    bool v13 = v7 < 0x5886a501 ? v12 + (int32_t)(v7 < 0x5886a501) <= v11 : v12 < v11; // 0x2606d6
    uint32_t v14 = (int32_t)v4 + v10; // 0x2606df
    *(int32_t *)a1 = v14;
    return (v13 ? 0x79a7f42d : 0x79a7f42c) + (int64_t)(v14 < v10) + v9 & 0xffffffff;
}

// Address range: 0x260706 - 0x260725
int64_t function_260706(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x260706
    int64_t v1; // 0x260706
    int32_t * v2 = (int32_t *)(v1 - 10); // 0x260708
    *v2 = *v2 ^ (int32_t)v1;
    float80_t v3; // 0x260706
    *(int16_t *)v1 = (int16_t)v3;
    while (true) {
        // continue -> 0x26070d
    }
}

// Address range: 0x260748 - 0x26074f
int64_t function_260748(int64_t a1) {
    // 0x260748
    int64_t result; // 0x260748
    int32_t * v1 = (int32_t *)(result + 0x61ec180a); // 0x260748
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x260769 - 0x2607b6
int64_t function_260769(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x260769
    int64_t v1; // 0x260769
    uint16_t v2 = (int16_t)(v1 + a3); // 0x26076b
    __asm_outsd(v2, (int32_t)v1);
    int64_t v3 = __asm_sti() & 0x178bccd1 | 0xe874332e; // 0x26076f
    int32_t * v4 = (int32_t *)(a1 - 64); // 0x260774
    int32_t v5 = v1; // 0x260774
    *v4 = *v4 + v5;
    uint64_t v6 = 256 * v3 & 0xff00 ^ a4; // 0x26077d
    int32_t * v7 = (int32_t *)(v3 + 11); // 0x26077f
    *v7 = *v7 + v5;
    int32_t * v8 = (int32_t *)v6; // 0x260785
    *v8 = *v8 - 1;
    int64_t v9 = unknown_ffffffffc2d0f18d(); // 0x260787
    char v10 = __asm_in(v2 % 256 | (int16_t)&g1); // 0x26078e
    int64_t v11 = *(char *)(v1 - 70) > (char)(v6 / 256) ? 0x1e8a161 : 0x1e8a160; // 0x26078f
    bool v12; // 0x260769
    int64_t v13 = (v12 ? -1 : 1) + a1; // 0x260794
    uint64_t v14 = (v9 & 0xffffff00 | (int64_t)v10) - v11 + 0xffd9e266; // 0x260795
    char * v15 = (char *)(v14 & 0xffffffff); // 0x26079a
    *v15 = *v15 - 50;
    int32_t * v16 = (int32_t *)v13; // 0x26079d
    *v16 = *v16 - (int32_t)v14;
    char * v17 = (char *)(v1 + 0x2b01e800); // 0x26079f
    *v17 = *v17 + (char)(v14 / 256);
    char * v18 = (char *)(v1 + 123); // 0x2607a5
    *v18 = *v18 + (char)((int64_t)&g1 >> 8);
    char * v19 = (char *)(v13 + 0x2d7607b4); // 0x2607a9
    *v19 = *v19 + (char)v14;
    return 0x1e843b6;
}

// Address range: 0x2607bb - 0x2607be
int64_t function_2607bb(void) {
    // 0x2607bb
    int64_t result; // 0x2607bb
    return result;
}

// Address range: 0x26085a - 0x260866
int64_t function_26085a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(4 * a2 + 0x64e6d1d4); // 0x26085a
    *v1 = *v1 - (char)(a4 / 256);
    return function_ffffffffe896096e();
}

// Address range: 0x2608d1 - 0x2608d9
int64_t function_2608d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2608d1
    return unknown_ffffffff9134eed7(a1, a2, a3, a4);
}

// Address range: 0x26090c - 0x26090d
int64_t function_26090c(int64_t a1) {
    // 0x26090c
    int64_t result; // 0x26090c
    return result;
}

// Address range: 0x260913 - 0x26093a
int64_t function_260913(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = unknown_481c5d19(); // 0x260913
    int64_t v2; // 0x260913
    int32_t * v3 = (int32_t *)(a1 + 0x4401e8d4 + 8 * v2); // 0x260918
    *v3 = *v3 + (int32_t)v1;
    int64_t v4; // 0x260913
    *(char *)a3 = *(char *)&v4 + (char)a5;
    char * v5 = (char *)(a4 + 0x52811a5a); // 0x260922
    *v5 = *v5 | (char)a4;
    int64_t v6 = unknown_8828d2f(); // 0x260929
    int32_t * v7 = (int32_t *)(v6 - 24 + 4 * v6); // 0x26092f
    *v7 = *v7 | (int32_t)a4;
    int32_t * v8 = (int32_t *)(a4 + 71); // 0x260933
    *v8 = *v8 + (int32_t)v6;
    return __asm_in_133((int16_t)a3);
}

// Address range: 0x260945 - 0x260a73
int64_t function_260945(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    unsigned char v1 = *(char *)-0x1717622c; // 0x260945
    *(char *)-0x1717622c = v1 / 128 | 2 * v1;
    int64_t v2; // 0x260945
    *(char *)(v2 - 0x17fc9e72) = (char)(v2 / 256);
    int64_t v3; // 0x260945
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)a4;
    float80_t v4; // 0x260945
    *(int16_t *)(v2 + a5) = (int16_t)(v4 * (float80_t)(float32_t)(int32_t)v2);
    int64_t v5; // 0x260945
    *(char *)v5 = *(char *)&v5 - 100;
    return function_caf2a();
}

// Address range: 0x260cc2 - 0x260cf7
int64_t function_260cc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x260cc2
    return function_caf2a();
}

// Address range: 0x260cf7 - 0x260e78
int64_t function_260cf7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x260cf7
    return function_caf2a();
}

// Address range: 0x260e78 - 0x260ffe
int64_t function_260e78(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x260e78
    int64_t v1; // bp-72, 0x260e78
    v1 = (int64_t)&v1;
    int64_t v2; // bp-56, 0x260e78
    v2 = (int64_t)&v2 + 8;
    return function_caf2a();
}

// Address range: 0x2afd75 - 0x2afd76
int64_t function_2afd75(void) {
    // 0x2afd75
    int64_t result; // 0x2afd75
    return result;
}

// Address range: 0x2afd7a - 0x2afd7b
int64_t function_2afd7a(void) {
    // 0x2afd7a
    int64_t result; // 0x2afd7a
    return result;
}

// Address range: 0x2afda2 - 0x2afda3
int64_t function_2afda2(void) {
    // 0x2afda2
    int64_t result; // 0x2afda2
    return result;
}

// Address range: 0x2afdea - 0x2afdeb
int64_t function_2afdea(void) {
    // 0x2afdea
    int64_t result; // 0x2afdea
    return result;
}

// Address range: 0x2afdeb - 0x2afe37
int64_t function_2afdeb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    char * v2 = (char *)(a1 + 0x2a912495); // 0x2afdeb
    *v2 = *v2 + (char)a4;
    uint32_t v3 = *(int32_t *)&v1; // 0x2afdf1
    *(int32_t *)a1 = v3 / 0x2000000;
    int64_t v4; // 0x2afdeb
    int64_t v5 = 2 * v4 & 0xfffffffe | (int64_t)((v3 & 0x1000000) != 0); // 0x2afdf8
    if (a4 != 1 && (v4 & 119) != 0) {
        v5 = function_2afdea();
    }
    int64_t v6 = a4 - 2; // 0x2afdfa
    int64_t v7 = v5; // 0x2afdfa
    if (v6 != 0 && (v4 & 119) != 0) {
        v7 = function_2afda2();
    }
    int32_t * v8 = (int32_t *)(v4 - 0x44f2b686 + 4 * v1); // 0x2afe05
    *v8 = *v8 + (int32_t)v4;
    *(char *)-0x38fe17d699e7acc6 = (char)v7;
    int64_t result = unknown_e2c3b20(); // 0x2afe1a
    *(char *)v1 = *(char *)&v1 & (char)(a3 / 256);
    int32_t * v9 = (int32_t *)((v6 - 256 * v7 & 0xff00 | v6 & -0xff01) - 0x4abd3952); // 0x2afe2a
    *v9 = *v9 + (int32_t)a3;
    return result;
}

// Address range: 0x2afe44 - 0x2afe45
int64_t function_2afe44(void) {
    // 0x2afe44
    int64_t result; // 0x2afe44
    return result;
}

// Address range: 0x2afe4b - 0x2afe56
int64_t function_2afe4b(int64_t a1) {
    // 0x2afe4b
    int64_t result; // 0x2afe4b
    int32_t * v1 = (int32_t *)(4 * result + 0x5c08231); // 0x2afe4b
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x2afe8b - 0x2afe98
int64_t function_2afe8b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2afe8b
    __asm_int1();
    int64_t v1 = unknown_238d5292(); // 0x2afe8c
    int64_t v2; // 0x2afe8b
    int32_t v3 = 2 * (int32_t)v2; // 0x2afe91
    *(int32_t *)a3 = v3;
    int64_t result = v1; // 0x2afe93
    if (v3 != 0) {
        result = function_2afe44();
    }
    // 0x2afe95
    return result;
}

// Address range: 0x2afec5 - 0x2afec9
int64_t function_2afec5(void) {
    // 0x2afec5
    int64_t result; // 0x2afec5
    return result;
}

// Address range: 0x2afee0 - 0x2afee3
int64_t function_2afee0(int64_t a1) {
    // 0x2afee0
    int64_t result; // 0x2afee0
    return result;
}

// Address range: 0x2aff7e - 0x2aff7f
int64_t function_2aff7e(void) {
    // 0x2aff7e
    int64_t result; // 0x2aff7e
    return result;
}

// Address range: 0x2affd2 - 0x2affd7
int64_t function_2affd2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2affd2
    int64_t v1; // 0x2affd2
    *(int32_t *)(v1 & 0xffffffff) = __asm_insd((int16_t)a3);
    return a1 & 0xffffffff;
}

// Address range: 0x2b0029 - 0x2b002c
int64_t function_2b0029(void) {
    // 0x2b0029
    int64_t result; // 0x2b0029
    return result;
}

// Address range: 0x2b00d7 - 0x2b00d9
int64_t function_2b00d7(void) {
    // 0x2b00d7
    return __asm_sti();
}

// Address range: 0x2b00de - 0x2b00df
int64_t function_2b00de(void) {
    // 0x2b00de
    int64_t result; // 0x2b00de
    return result;
}

// Address range: 0x2b00f1 - 0x2b00f4
int64_t function_2b00f1(void) {
    // 0x2b00f1
    int64_t result; // 0x2b00f1
    return result;
}

// Address range: 0x2b0101 - 0x2b010b
int64_t function_2b0101(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2b0101
    int64_t result; // 0x2b0101
    int32_t * v1 = (int32_t *)(result - 0x61fcc0ba); // 0x2b0101
    *v1 = *v1 + (int32_t)a2;
    char * v2 = (char *)(result + 10); // 0x2b0107
    *v2 = *v2 ^ (char)(a4 / 256);
    return result;
}

// Address range: 0x2b0114 - 0x2b0115
int64_t function_2b0114(void) {
    // 0x2b0114
    int64_t result; // 0x2b0114
    return result;
}

// Address range: 0x2b01da - 0x2b01db
int64_t function_2b01da(void) {
    // 0x2b01da
    int64_t result; // 0x2b01da
    return result;
}

// Address range: 0x2b01f0 - 0x2b01f8
int64_t function_2b01f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2b01f0
    int64_t result; // 0x2b01f0
    bool v1; // 0x2b01f0
    if (v1) {
        result = function_2b01da();
    }
    int32_t * v2 = (int32_t *)(a4 - 77); // 0x2b01f2
    *v2 = *v2 + (int32_t)a3;
    return result;
}

// Address range: 0x2b020a - 0x2b020b
int64_t function_2b020a(void) {
    // 0x2b020a
    int64_t result; // 0x2b020a
    return result;
}

// Address range: 0x2b025b - 0x2b0261
int64_t function_2b025b(void) {
    // 0x2b025b
    return function_ffffffffe8fb0c39();
}

// Address range: 0x2b031f - 0x2b0320
int64_t function_2b031f(void) {
    // 0x2b031f
    int64_t result; // 0x2b031f
    return result;
}

// Address range: 0x2b032b - 0x2b032c
int64_t function_2b032b(void) {
    // 0x2b032b
    int64_t result; // 0x2b032b
    return result;
}

// Address range: 0x2b033f - 0x2b0347
int64_t function_2b033f(int64_t a1) {
    // 0x2b033f
    int64_t result; // 0x2b033f
    return result;
}

// Address range: 0x2b0347 - 0x2b0366
int64_t function_2b0347(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2b0347
    int64_t v1; // 0x2b0347
    int64_t v2 = v1;
    int16_t v3 = a3; // 0x2b0347
    __asm_outsd(v3, (int32_t)v1);
    int64_t v4 = v2 & -256 | (int64_t)(*(char *)(v1 - 92) & (char)v2); // 0x2b0348
    int64_t * v5 = (int64_t *)(v1 + 0x3d004cf0); // 0x2b0350
    *v5 = v4 | *v5;
    int64_t v6; // 0x2b0347
    *(int32_t *)v6 = *(int32_t *)&v6 + (int32_t)v4;
    int64_t v7; // 0x2b0347
    __asm_outsb(v3, *(char *)&v7);
    return function_2b032b();
}

// Address range: 0x2b03bf - 0x2b0401
int64_t function_2b03bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b03bf
    int64_t v1; // 0x2b03bf
    int32_t * v2 = (int32_t *)(v1 + 0x2d000000); // 0x2b03bf
    *v2 = *v2 + (int32_t)v1;
    int64_t v3; // 0x2b03bf
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    unsigned char v5 = *(char *)0x226225ce; // 0x2b03c7
    unsigned char v6 = (char)(v1 / 256); // 0x2b03c7
    char v7 = v5 + v6; // 0x2b03c7
    unsigned char v8 = llvm_ctpop_i8(v7); // 0x2b03c7
    *(char *)0x226225ce = v7;
    int64_t v9; // bp-16, 0x2b03bf
    *(int32_t *)(v1 - 0x6e672dbc) = (int32_t)(int64_t)&v9;
    char * v10 = (char *)(a1 - 0x6e0fbf13 + 8 * v1); // 0x2b03d6
    *v10 = *v10 + (char)a3;
    char * v11 = (char *)(v3 & -0xff01 | 256 * (64 * (int64_t)(v7 == 0) | (int64_t)(v7 < v5) | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v5 % 16 + v6 % 16 > 15) | 4 * (int64_t)(v8 % 2 == 0)) | 512); // 0x2b03dd
    *v11 = *v11 + (char)v3;
    int64_t v12; // 0x2b03bf
    uint32_t v13 = *(int32_t *)&v12; // 0x2b03e4
    bool v14; // 0x2b03bf
    int64_t v15 = v14 ? -4 : 4; // 0x2b03e4
    *(int32_t *)a1 = v13;
    char v16 = v13; // 0x2b03e6
    char * v17 = (char *)(int64_t)v13; // 0x2b03e6
    *v17 = *(char *)&v12 + v16;
    int64_t v18; // 0x2b03bf
    *(char *)a3 = *(char *)&v18 + (char)(v13 / 256);
    *v17 = *(char *)&v12 + v16;
    char * v19 = (char *)(v1 - 0x6e280100); // 0x2b03ec
    *v19 = *v19 + (char)v1;
    return function_2b0412(v15 + a1, v15 + a2, 256 * v1 + a3 & 0xff00 | a3 & -0xff01);
}

// Address range: 0x2b040a - 0x2b040c
int64_t function_2b040a(void) {
    // 0x2b040a
    int64_t v1; // 0x2b040a
    return function_2b046f(v1, v1, v1, v1);
}

// Address range: 0x2b0412 - 0x2b042a
int64_t function_2b0412(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x2b0412
    int64_t v1; // 0x2b0412
    int64_t v2 = v1 & v1;
    char * v3 = (char *)(v2 & 0xffffffff); // 0x2b0414
    char v4 = a3 / 256; // 0x2b0414
    *v3 = *v3 + v4;
    int64_t v5; // 0x2b0412
    uint32_t v6 = *(int32_t *)&v5 & (int32_t)v2; // 0x2b0416
    int64_t v7 = v6; // 0x2b0416
    *(int32_t *)a1 = v6;
    char * v8 = (char *)v7; // 0x2b041e
    char v9 = v6; // 0x2b041e
    *v8 = *v8 + v9;
    bool v10; // 0x2b0412
    char * v11 = (char *)((v10 ? -4 : 4) + a1); // 0x2b0420
    *v11 = *v11 + v4;
    char v12 = *(char *)0x4973262b; // 0x2b0424
    *(char *)0x4973262b = v12 + (char)((uint64_t)v1 / 256);
    return v7 & 0xffffff00 | (int64_t)(*v8 + v9);
}

// Address range: 0x2b046f - 0x2b04f2
int64_t function_2b046f(int64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    // 0x2b046f
    int64_t v1; // 0x2b046f
    int32_t v2 = (int32_t)v1 + 0x246d6572; // 0x2b0471
    if (llvm_ctpop_i8((char)v2) % 2 == 0) {
        int64_t v3 = 0xffffffe9 * (0x100000000 * unknown_ffffffffe1bd1dc7() - 0x264bad4800000000) / 0x100000000 & 0xffffffff; // 0x2b04cb
        int64_t v4 = unknown_749f23d4(v3); // 0x2b04ce
        uint32_t v5 = (int32_t)v4; // 0x2b04d5
        *(char *)0x1e8bea8d5bc156f = (char)v4;
        uint32_t v6 = v5 < 0x5401e80a ? -0x331ff072 : -0x331ff073; // 0x2b04e4
        int32_t v7 = v5 - v6; // 0x2b04e4
        int32_t v8 = v5 < 0x5401e80a; // 0x2b04e4
        bool v9; // 0x2b046f
        int64_t v10 = 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | (int64_t)(v5 < 0x5401e80a | v6 > v5) | 64 * (int64_t)(v7 == 0) | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v5 % 16 + v8 - v6 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8((char)v7) % 2 == 0) | 2048 * (int64_t)(((v7 - v8 ^ v5) & (v5 ^ -0x80000000)) < 0) | 2; // bp-8, 0x2b04e9
        *(int32_t *)a2 = (int32_t)(int64_t)&v10;
        int32_t * v11 = (int32_t *)(v3 + 103); // 0x2b04ee
        *v11 = *v11 + (int32_t)v1;
        return v1 & 0xffffffff;
    }
    int64_t v12 = v1 + a1; // 0x2b046f
    unsigned char v13 = *(char *)0x33118b670c6b0512; // 0x2b0478
    *(char *)0x50765d88 = *(char *)0x50765d88 + (char)(v1 / 256);
    char * v14 = (char *)(v12 & 0xffffffff); // 0x2b0488
    *v14 = *v14 | (char)(a2 / 256);
    char * v15 = (char *)(a3 + 0x386edf2c); // 0x2b048a
    *v15 = *v15 ^ (char)a2;
    int32_t v16 = v12; // 0x2b0491
    int64_t v17 = unknown_ffffffffc894e497(v16, (int64_t)v13 | (int64_t)(v2 & -256)); // 0x2b0491
    unknown_3d8ebba4();
    __asm_iretd();
    uint32_t v18 = *(int32_t *)((v17 & 0xffffffff) - 127) | v16; // 0x2b04a8
    int64_t result = unknown_30fb67b1(v18); // 0x2b04ab
    int32_t * v19 = (int32_t *)((int64_t)v18 + 70); // 0x2b04b7
    *v19 = *v19 + (int32_t)a4;
    return result;
}
