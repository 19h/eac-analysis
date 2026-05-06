/*
 * Targeted RetDec C for native executable gap queue batch 334.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x194085-0x194285 rank=- name=- kind=- bytes=- uncovered=-
 *   0x194285-0x194485 rank=- name=- kind=- bytes=- uncovered=-
 *   0x194485-0x194685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x194885-0x194a85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x223666-0x223866 rank=- name=- kind=- bytes=- uncovered=-
 *   0x223a66-0x223c66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x223c66-0x223e66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x223e66-0x224066 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g2;
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
void __asm_out_139(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint32_t __readfsdword(int64_t offset);
uint64_t __readfsqword(int64_t offset);
uint8_t __readgsbyte(int64_t offset);
uint32_t __readgsdword(int64_t offset);
uint64_t __readgsqword(int64_t offset);
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
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
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

int64_t function_10c63888();
int64_t function_194085(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1940cb(void);
int64_t function_1940d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_194130(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19414c(void);
int64_t function_194158(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_194167(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1942a9(int64_t a1);
int64_t function_1942b7(void);
int64_t function_1942cd(void);
int64_t function_1942ec(int64_t a1);
int64_t function_194312(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19433a(void);
int64_t function_194352(void);
int64_t function_1943ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1943b6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_194421(void);
int64_t function_194497(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1944d2(int64_t a1, int64_t a2);
int64_t function_1944ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_19457a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t result, int64_t a7);
int64_t function_194584(void);
int64_t function_19458e(int64_t a1);
int64_t function_194618(void);
int64_t function_194634(void);
int64_t function_194653(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_194678(void);
int64_t function_194885(void);
int64_t function_194934(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19497d(int64_t a1);
int64_t function_194997(void);
int64_t function_1949dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1949f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_194a28(int64_t a1);
int64_t function_194a62(int64_t a1, int64_t a2, int64_t a3);
int64_t function_223666(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_223678(void);
int64_t function_2236b3(void);
int64_t function_2236d0(int64_t a1);
int64_t function_22371d(int64_t a1);
int64_t function_223747(void);
int64_t function_22375c(void);
int64_t function_223761(int64_t a1);
int64_t function_223773(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22377c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_22379c(void);
int64_t function_2237e2(void);
int64_t function_2237e7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_223814(void);
int64_t function_223836(void);
int64_t function_223a66(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_223a79(void);
int64_t function_223a80(int64_t a1);
int64_t function_223a94(void);
int64_t function_223a9e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_223aee(void);
int64_t function_223bd7(void);
int64_t function_223c7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_223cc5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_223cfd(void);
int64_t function_223d3c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_223d4a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_223d7d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_223dba(void);
int64_t function_223dfb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_223ebd(void);
int64_t function_223ef4(int64_t a1);
int64_t function_223f24(int64_t a1);
int64_t function_223f6d(int64_t a1);
int64_t function_224047(int64_t a1);
int64_t function_3d1b2e95();
int64_t function_4b42cce();
int64_t function_ffffffff88459d00();
int64_t unknown_1a27772a();
int64_t unknown_485c54b9();
int64_t unknown_4cd1fa46();
int64_t unknown_5fdd88ff();
int64_t unknown_6d0152be();
int64_t unknown_ffffffffb4703aa8();
int64_t unknown_ffffffffb4e708e1();
int64_t unknown_ffffffffc4af0b9d();
int64_t unknown_ffffffffd4085bfa();
int64_t unknown_ffffffffdade60c1();
int64_t unknown_fffffffffc0feb1d();

// Address range: 0x194085 - 0x19409d
int64_t function_194085(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x194085
    bool v1; // 0x194085
    char * v2 = (char *)(a1 - 0x79123f03 + (v1 ? -4 : 4)); // 0x19408d
    char v3 = *v2 + (char)(*(int32_t *)(a4 - 44) & (int32_t)a4); // 0x19408d
    *v2 = v3;
    while (v3 >= 0) {
        // continue -> 0x194093
    }
    // 0x194095
    return __asm_sti();
}

// Address range: 0x1940cb - 0x1940cc
int64_t function_1940cb(void) {
    // 0x1940cb
    int64_t result; // 0x1940cb
    return result;
}

// Address range: 0x1940d3 - 0x19410e
int64_t function_1940d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x172b1286); // 0x1940d3
    *v1 = *v1 & (int32_t)&g1;
    char * v2 = (char *)(a2 + 108); // 0x1940ea
    int64_t v3; // 0x1940d3
    unsigned char v4 = (char)v3; // 0x1940ea
    *v2 = *v2 & v4;
    uint32_t v5 = *(int32_t *)0xf3006877; // 0x1940f8
    uint32_t v6 = v5 + (int32_t)v3; // 0x1940f8
    *(int32_t *)0xf3006877 = v6;
    bool v7 = v6 < v5 ? v4 + 64 + (char)(v6 < v5) <= v4 : v4 > 191; // 0x1940fa
    __asm_out((int16_t)a3, v7 ? -0x2a87e025 : -0x2a87e125);
    return function_1940cb();
}

// Address range: 0x194130 - 0x19413d
int64_t function_194130(int64_t a1, int64_t a2, int64_t a3) {
    // 0x194130
    int64_t v1; // 0x194130
    *(int32_t *)(v1 - 0x2be15730) = (int32_t)a1;
    bool v2; // 0x194130
    return (v2 | v2 ? v1 : a3) & 0xffffffff;
}

// Address range: 0x19414c - 0x19414d
int64_t function_19414c(void) {
    // 0x19414c
    int64_t result; // 0x19414c
    return result;
}

// Address range: 0x194158 - 0x19415f
int64_t function_194158(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x194158
    int64_t result; // 0x194158
    int64_t v1; // 0x194158
    if ((char)((uint64_t)v1 / 256) + (char)(a4 / 256) >= 0) {
        result = function_19414c();
    }
    // 0x19415c
    return result;
}

// Address range: 0x194167 - 0x194265
int64_t function_194167(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x194167
    char v3 = (char)v2 + (char)a2; // 0x194167
    *(char *)a2 = v3;
    uint64_t v4 = a4 - 1; // 0x19416e
    if (v4 != 0 != (v3 == 0)) {
        int32_t * v5 = (int32_t *)(v1 - 105); // 0x194172
        *v5 = *v5 | (int32_t)a1;
        return v2 & (v4 / 256 | -256);
    }
    // 0x1941d6
    *(int32_t *)-0x2e4955f4 = *(int32_t *)-0x2e4955f4 + (int32_t)v2;
    unsigned char v6 = (char)v4 % 32; // 0x1941f0
    if (v6 != 0) {
        char * v7 = (char *)v4; // 0x1941f0
        unsigned char v8 = *v7; // 0x1941f0
        *v7 = v8 << v6 | (char)((int16_t)v8 >> (int16_t)(9 - v6));
    }
    // 0x1941d3
    *(int32_t *)(v2 & 0xffffff00) = 0x24cae79b;
    *(char *)-0x493e41fb = *(char *)-0x493e41fb + (char)(v2 / 256);
    char * v9 = (char *)(8 * a1 + 125 + a4); // 0x194206
    *v9 = *v9 + 1;
    return (int64_t)(*(int32_t *)&v1 & 0x50370400);
}

// Address range: 0x1942a9 - 0x1942ac
int64_t function_1942a9(int64_t a1) {
    // 0x1942a9
    int64_t result; // 0x1942a9
    return result;
}

// Address range: 0x1942b7 - 0x1942c1
int64_t function_1942b7(void) {
    // 0x1942b7
    return unknown_ffffffffdade60c1();
}

// Address range: 0x1942cd - 0x1942d3
int64_t function_1942cd(void) {
    // 0x1942cd
    int64_t result; // 0x1942cd
    return result;
}

// Address range: 0x1942ec - 0x1942f6
int64_t function_1942ec(int64_t a1) {
    // 0x1942ec
    int64_t v1; // 0x1942ec
    return function_ffffffff88459d00((int32_t)v1 + (int32_t)a1);
}

// Address range: 0x194312 - 0x19431d
int64_t function_194312(int64_t a1, int64_t a2, int64_t a3) {
    // 0x194312
    int64_t result; // 0x194312
    __asm_out_133(106, (int32_t)result);
    return result;
}

// Address range: 0x19433a - 0x19433d
int64_t function_19433a(void) {
    // 0x19433a
    int64_t result; // 0x19433a
    return result;
}

// Address range: 0x194352 - 0x194357
int64_t function_194352(void) {
    // 0x194352
    int64_t v1; // 0x194352
    int64_t v2 = v1;
    return (v2 & 0xff00) + v1 & 0xff00 | v2 & -0xff01;
}

// Address range: 0x1943ac - 0x1943b6
int64_t function_1943ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 + 96); // 0x1943ac
    int64_t v2; // 0x1943ac
    *v1 = *v1 | (char)v2;
    int64_t result = unknown_485c54b9(a1, a2, a3, a4, a5); // 0x1943af
    int64_t v3; // 0x1943ac
    *(char *)a1 = *(char *)&v3;
    return result;
}

// Address range: 0x1943b6 - 0x1943d0
int64_t function_1943b6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1943b6
    int64_t result; // 0x1943b6
    char v1 = result;
    *(char *)result = v1 - (char)(a4 / 256);
    int64_t v2; // 0x1943b6
    *(char *)a4 = *(char *)&v2 - v1;
    char v3 = *(char *)0x3a486bc5; // 0x1943be
    *(char *)0x3a486bc5 = v3 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x194421 - 0x194422
int64_t function_194421(void) {
    // 0x194421
    int64_t result; // 0x194421
    return result;
}

// Address range: 0x194497 - 0x1944d0
int64_t function_194497(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x194497
    unknown_ffffffffc4af0b9d();
    bool v1; // 0x194497
    if (!v1) {
        function_194421();
    }
    // 0x1944a0
    *(int32_t *)a1 = (int32_t)a2;
    int64_t v2 = v1 ? -4 : 4; // 0x1944a0
    int64_t v3 = v2 + a2; // 0x1944a0
    int64_t v4 = v2 + a1 + (v1 ? -1 : 1); // 0x1944a1
    uint64_t v5 = unknown_ffffffffb4703aa8(v4, v3); // 0x1944a2
    *(char *)v5 = (char)(v5 / 256);
    uint32_t v6 = *(int32_t *)v5 + (int32_t)v3; // 0x1944a9
    int64_t v7 = v6; // 0x1944a9
    uint32_t v8 = 0x10000 * (int32_t)v5 >> 16; // 0x1944ab
    int64_t v9 = v8; // 0x1944ab
    int64_t v10; // 0x194497
    int32_t * v11 = (int32_t *)(2 * v10 + v7); // 0x1944ae
    uint32_t v12 = *v11; // 0x1944ae
    int32_t v13 = v12 + (int32_t)v10; // 0x1944ae
    *v11 = v13;
    if (v13 >= 1) {
        char v14 = *(char *)v9; // 0x1944b3
        int64_t result = v9 & 0xffffff00 | (int64_t)((char)(v13 < v12) + (char)v8 - v14); // 0x1944b3
        char * v15 = (char *)result; // 0x1944b5
        *v15 = *v15 + 72;
        return result;
    }
    char * v16 = (char *)(v10 + 0x5101e800); // 0x1944ba
    *v16 = *v16 + (char)(v8 / 256);
    int32_t * v17 = (int32_t *)(v9 - 103); // 0x1944c0
    *v17 = *v17 + v6;
    int32_t * v18 = (int32_t *)(9 * a4); // 0x1944cd
    *v18 = *v18 + (int32_t)v4;
    return (a4 / 256 + v7) % 256 | v7 & 0xffffff00;
}

// Address range: 0x1944d2 - 0x1944ef
int64_t function_1944d2(int64_t a1, int64_t a2) {
    int64_t v1 = unknown_ffffffffb4e708e1(); // 0x1944db
    char * v2 = (char *)(v1 - 0x55e9977c); // 0x1944e0
    int64_t v3; // 0x1944d2
    *v2 = *v2 + ((char)v3 & 83);
    int64_t v4; // 0x1944d2
    return v1 & -256 | (int64_t)*(char *)&v4;
}

// Address range: 0x1944ef - 0x194563
int64_t function_1944ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a5;
    *(int32_t *)a3 = (int32_t)a3 - (int32_t)a1;
    char * v2 = (char *)(a2 - 48); // 0x1944f6
    int64_t v3; // 0x1944ef
    char v4 = *v2 + (char)v3; // 0x1944f6
    *v2 = v4;
    int64_t v5 = unknown_5fdd88ff(); // 0x1944f9
    if (v4 < 1) {
        int64_t v6 = v5 + v3; // 0x194529
        return (v6 + 58) % 256 | v6 & 0xffffff00;
    }
    char * v7 = (char *)v5; // 0x194500
    *v7 = *v7 + (char)v5;
    int64_t v8 = v5 & 0xde6ffedc | 0x21900123; // 0x194502
    int32_t * v9 = (int32_t *)(a1 - 126 + 4 * a2); // 0x194509
    int32_t v10 = v8; // 0x194509
    *v9 = *v9 + v10;
    char * v11 = (char *)(a2 + 1); // 0x19450d
    *v11 = *v11 + 98;
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a6;
    int32_t * v12 = (int32_t *)v8; // 0x194515
    uint32_t v13 = *v12; // 0x194515
    uint32_t v14 = v13 + v10; // 0x194515
    *v12 = v14;
    int64_t result = unknown_fffffffffc0feb1d(); // 0x194517
    if (v14 < v13) {
        // 0x19451e
        return result;
    }
    // 0x194561
    __asm_out_134((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x19457a - 0x194584
int64_t function_19457a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t result, int64_t a7) {
    // 0x19457a
    int64_t v1; // 0x19457a
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + (char)(a4 / 256);
    return result;
}

// Address range: 0x194584 - 0x194585
int64_t function_194584(void) {
    // 0x194584
    int64_t result; // 0x194584
    return result;
}

// Address range: 0x19458e - 0x194590
int64_t function_19458e(int64_t a1) {
    // 0x19458e
    int64_t result; // 0x19458e
    return result;
}

// Address range: 0x194618 - 0x194619
int64_t function_194618(void) {
    // 0x194618
    int64_t result; // 0x194618
    return result;
}

// Address range: 0x194634 - 0x194637
int64_t function_194634(void) {
    // 0x194634
    int64_t result; // 0x194634
    return result;
}

// Address range: 0x194653 - 0x19466c
int64_t function_194653(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x194653
    bool v1; // 0x194653
    if (v1) {
        function_194618();
    }
    char * v2 = (char *)(a3 - 0x45c46531); // 0x194659
    *v2 = *v2 + (char)a3;
    char v3 = *(char *)-0x60e5969a; // 0x19465f
    int64_t v4; // 0x194653
    *(char *)-0x60e5969a = v3 + (char)((uint64_t)v4 / 256);
    return function_4b42cce();
}

// Address range: 0x194678 - 0x19467d
int64_t function_194678(void) {
    // 0x194678
    return function_3d1b2e95();
}

// Address range: 0x194885 - 0x194887
int64_t function_194885(void) {
    // 0x194885
    int64_t result; // 0x194885
    return result;
}

// Address range: 0x194934 - 0x194947
int64_t function_194934(int64_t a1, int64_t a2, int64_t a3) {
    // 0x194934
    int64_t v1; // 0x194934
    int64_t v2 = a1 - v1; // 0x19493a
    int64_t result = unknown_4cd1fa46((int32_t)v2); // 0x194940
    *(int32_t *)(v2 & 0xffffffff) = (int32_t)result;
    return result;
}

// Address range: 0x19497d - 0x194980
int64_t function_19497d(int64_t a1) {
    // 0x19497d
    int64_t result; // 0x19497d
    return result;
}

// Address range: 0x194997 - 0x194998
int64_t function_194997(void) {
    // 0x194997
    int64_t result; // 0x194997
    return result;
}

// Address range: 0x1949dc - 0x1949eb
int64_t function_1949dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1949dc
    int64_t v1; // 0x1949dc
    uint64_t v2 = v1 & 0xe856fbaf; // 0x1949dc
    int32_t * v3 = (int32_t *)v2; // 0x1949e1
    *v3 = *v3 + (int32_t)a3;
    char * v4 = (char *)(a2 - 50); // 0x1949e3
    *v4 = *v4 | (char)(v2 / 256);
    return function_194997();
}

// Address range: 0x1949f8 - 0x194a00
int64_t function_1949f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1949f8
    int64_t v1; // 0x1949f8
    int64_t result = ((char)v1 > (char)a4 ? 255 : 0) | v1 & -256; // 0x1949fa
    char * v2 = (char *)result; // 0x1949fc
    *v2 = *v2 + 84;
    return result;
}

// Address range: 0x194a28 - 0x194a2d
int64_t function_194a28(int64_t a1) {
    // 0x194a28
    int64_t result; // 0x194a28
    return result;
}

// Address range: 0x194a62 - 0x194a6c
int64_t function_194a62(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 0x2073c8e4); // 0x194a62
    *v1 = *v1 | -5;
    int64_t result; // 0x194a62
    return result;
}

// Address range: 0x223666 - 0x22366d
int64_t function_223666(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x223666
    int64_t result; // 0x223666
    *(int32_t *)a1 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x223678 - 0x223689
int64_t function_223678(void) {
    // 0x223678
    *(char *)-0x77dbe173 = *(char *)-0x77dbe173 + 123;
    int64_t v1; // 0x223678
    return v1 & -256 | (int64_t)*(char *)0x1e8002807b33c0a;
}

// Address range: 0x2236b3 - 0x2236b4
int64_t function_2236b3(void) {
    // 0x2236b3
    int64_t result; // 0x2236b3
    return result;
}

// Address range: 0x2236d0 - 0x2236d6
int64_t function_2236d0(int64_t a1) {
    // 0x2236d0
    return __asm_wait(a1);
}

// Address range: 0x22371d - 0x22371e
int64_t function_22371d(int64_t a1) {
    // 0x22371d
    int64_t result; // 0x22371d
    return result;
}

// Address range: 0x223747 - 0x223748
int64_t function_223747(void) {
    // 0x223747
    int64_t result; // 0x223747
    return result;
}

// Address range: 0x22375c - 0x22375e
int64_t function_22375c(void) {
    // 0x22375c
    int64_t v1; // 0x22375c
    return function_223773(v1, v1, v1, v1);
}

// Address range: 0x223761 - 0x223773
int64_t function_223761(int64_t a1) {
    // 0x223761
    int64_t v1; // 0x223761
    bool v2; // 0x223761
    if (!v2) {
        v1 = function_223747();
    }
    int64_t v3 = v1;
    int64_t v4 = v2 ? 234 : 235; // 0x223765
    int64_t v5; // 0x223761
    return (((v3 - v4) % 256 | v3 & 0xffffff00) + 0x556bb5fc | v5) & 0xffffffff;
}

// Address range: 0x223773 - 0x22377a
int64_t function_223773(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x223773
    int64_t result; // 0x223773
    __asm_out_133(-111, (int32_t)result);
    char * v1 = (char *)(a4 + 119); // 0x223775
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x22377c - 0x22378f
int64_t function_22377c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x22377c
    int64_t v1; // 0x22377c
    int32_t * v2 = (int32_t *)(v1 - 0x69a1fa75); // 0x22377e
    uint32_t v3 = *v2; // 0x22377e
    uint32_t v4 = v3 + (int32_t)a2; // 0x22377e
    *v2 = v4;
    int64_t v5; // 0x22377c
    char v6 = *(char *)&v5; // 0x223784
    *(char *)a4 = v6 - (char)(a3 / 256) + (char)(v4 < v3);
    int64_t v7; // 0x22377c
    *(char *)a1 = *(char *)&v7;
    bool v8; // 0x22377c
    int64_t v9 = v8 ? -1 : 1; // 0x223786
    int64_t v10 = v9 + a1; // 0x223786
    uint64_t v11 = __asm_iretd(v10, v9 + a2, (int32_t)a3 - (int32_t)v10); // 0x22378a
    return v11 & -256 | (int64_t)*(char *)(v11 % 256 + v1);
}

// Address range: 0x22379c - 0x22379d
int64_t function_22379c(void) {
    // 0x22379c
    int64_t result; // 0x22379c
    return result;
}

// Address range: 0x2237e2 - 0x2237e3
int64_t function_2237e2(void) {
    // 0x2237e2
    int64_t result; // 0x2237e2
    return result;
}

// Address range: 0x2237e7 - 0x2237f1
int64_t function_2237e7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2237e7
    int64_t v1; // 0x2237e7
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    float80_t v3; // 0x2237e7
    *(int16_t *)(a3 - 0xfdb8279) = (int16_t)v3;
    return function_22379c();
}

// Address range: 0x223814 - 0x223820
int64_t function_223814(void) {
    // 0x223814
    return function_10c63888();
}

// Address range: 0x223836 - 0x223857
int64_t function_223836(void) {
    // 0x223836
    int64_t v1; // 0x223836
    int64_t result = v1 & -256 | 59; // 0x223855
    bool v2; // 0x223836
    if (v2 || v2) {
        result = function_2237e2();
    }
    // 0x223857
    return result;
}

// Address range: 0x223a66 - 0x223a6f
int64_t function_223a66(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x223a66
    int64_t v1; // 0x223a66
    *(char *)a3 = (char)v1 + 95;
    return (v1 ^ a4) & 0xffffffff;
}

// Address range: 0x223a79 - 0x223a7c
int64_t function_223a79(void) {
    // 0x223a79
    int64_t result; // 0x223a79
    return result;
}

// Address range: 0x223a80 - 0x223a83
int64_t function_223a80(int64_t a1) {
    // 0x223a80
    int64_t result; // 0x223a80
    return result;
}

// Address range: 0x223a94 - 0x223a95
int64_t function_223a94(void) {
    // 0x223a94
    int64_t result; // 0x223a94
    return result;
}

// Address range: 0x223a9e - 0x223aea
int64_t function_223a9e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x223a9e
    int64_t v1; // 0x223a9e
    uint64_t v2 = v1;
    bool v3; // 0x223a9e
    if (!v3) {
        // 0x223ad0
        return 0x10000 * (int32_t)v1 >> 16;
    }
    // 0x223aa1
    *(int32_t *)a1 = (int32_t)a2;
    uint64_t v4 = -((a4 / 256 + (int64_t)v3)); // 0x223aa9
    uint64_t v5 = v4 % 256; // 0x223aa9
    int32_t * v6 = (int32_t *)(v1 - 0x8ff0e03); // 0x223aab
    *v6 = *v6 + (int32_t)v5;
    if ((char)v4 >= (char)(v2 / 256)) {
        // 0x223ae8
        return 256 * v5 + v2 & 0xff00 | v2 & 0xffff00ff;
    }
    // 0x223abc
    __asm_in_135((int16_t)a3);
    return function_223a94();
}

// Address range: 0x223aee - 0x223af1
int64_t function_223aee(void) {
    // 0x223aee
    int64_t result; // 0x223aee
    return result;
}

// Address range: 0x223bd7 - 0x223bd8
int64_t function_223bd7(void) {
    // 0x223bd7
    int64_t result; // 0x223bd7
    return result;
}

// Address range: 0x223c7f - 0x223cc3
int64_t function_223c7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_iretd(a1, a2, (int32_t)a3); // 0x223c85
    int32_t * v2 = (int32_t *)(a2 + 0x220c7f6f); // 0x223c8d
    int32_t v3 = *v2; // 0x223c8d
    *v2 = -v3;
    int64_t v4 = v3 == 0 ? 0xad8503f : 0xad85040; // 0x223c93
    unsigned char v5 = *(char *)(a4 + 0x13d0025); // 0x223c9c
    int32_t v6 = *(int32_t *)(((v1 & 0xffff00ff | (int64_t)(int32_t)&g2) - v4 & 0xffffff00 | 46) - 101); // 0x223ca9
    int64_t v7 = *(int64_t *)0x5f083502; // 0x223cac
    int64_t v8 = *(int64_t *)0x5f08350a; // 0x223cad
    uint32_t v9 = (int32_t)v7; // 0x223cae
    int64_t v10; // 0x223c7f
    uint32_t v11 = *(int32_t *)&v10; // 0x223cae
    int32_t v12 = v9 - v11; // 0x223cae
    int64_t v13; // 0x223c7f
    uint32_t v14 = (v6 + (int32_t)a4 + (int32_t)(v5 > -1 - (char)v13)) % 32; // 0x223caf
    bool v15 = ((v12 ^ v9) & (v11 ^ v9)) < 0; // 0x223caf
    bool v16 = v11 > v9; // 0x223caf
    if (v14 != 0) {
        int32_t * v17 = (int32_t *)v7; // 0x223caf
        uint32_t v18 = *v17; // 0x223caf
        int32_t v19 = v18 >> 32 - v14 | v18 << v14; // 0x223caf
        *v17 = v19;
        uint32_t v20 = v19 % 2; // 0x223caf
        v15 = v14 == 1 ? v20 != (int32_t)(v19 < 0) : ((v12 ^ v9) & (v11 ^ v9)) < 0;
        v16 = v20 != 0;
    }
    unsigned char v21 = llvm_ctpop_i8((char)v12); // 0x223cae
    *(int64_t *)0x5f08350a = 512 * (int64_t)((v8 & 512) != 0) | 256 * (int64_t)((v8 & 256) != 0) | 1024 * (int64_t)((v8 & 1024) != 0) | 0x4000 * (int64_t)((v8 & 0x4000) != 0) | 64 * (int64_t)(v12 == 0) | 128 * (int64_t)(v12 < 0) | 16 * (int64_t)(v9 % 16 - v11 % 16 > 15) | 4 * (int64_t)(v21 % 2 == 0) | (int64_t)v16 | 2048 * (int64_t)v15 | 2;
    __asm_in_136((int16_t)a3 & -256 | 26);
    return unknown_6d0152be();
}

// Address range: 0x223cc5 - 0x223ccb
int64_t function_223cc5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x223cc5
    int64_t result; // 0x223cc5
    return result;
}

// Address range: 0x223cfd - 0x223d05
int64_t function_223cfd(void) {
    char v1 = *(char *)-0x26c9a2fb; // 0x223cfe
    int64_t v2; // 0x223cfd
    *(char *)-0x26c9a2fb = v1 + (char)((uint64_t)v2 / 256);
    return 0x10000 * (int32_t)v2 >> 16;
}

// Address range: 0x223d3c - 0x223d4a
int64_t function_223d3c(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a1 - 44); // 0x223d3e
    *v1 = *v1 & (char)a3;
    char v2 = *(char *)0x57653048; // 0x223d41
    int64_t result; // 0x223d3c
    *(char *)0x57653048 = v2 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x223d4a - 0x223d4f
int64_t function_223d4a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x223d4a
    float80_t v1; // 0x223d4a
    *(float32_t *)a3 = (float32_t)v1;
    int64_t result; // 0x223d4a
    return result;
}

// Address range: 0x223d7d - 0x223d86
int64_t function_223d7d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x223d7d
    int64_t v1; // 0x223d7d
    return (int64_t)*(int32_t *)(4 * a2 - 0x475a0800 + v1);
}

// Address range: 0x223dba - 0x223dbb
int64_t function_223dba(void) {
    // 0x223dba
    int64_t result; // 0x223dba
    return result;
}

// Address range: 0x223dfb - 0x223e03
int64_t function_223dfb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x223dfb
    *(int32_t *)(a4 - 0x200b84a3) = (int32_t)a3;
    int64_t result; // 0x223dfb
    return result;
}

// Address range: 0x223ebd - 0x223ebe
int64_t function_223ebd(void) {
    // 0x223ebd
    int64_t result; // 0x223ebd
    return result;
}

// Address range: 0x223ef4 - 0x223efc
int64_t function_223ef4(int64_t a1) {
    // 0x223ef4
    return unknown_ffffffffd4085bfa(a1);
}

// Address range: 0x223f24 - 0x223f2b
int64_t function_223f24(int64_t a1) {
    // 0x223f24
    return unknown_1a27772a(a1);
}

// Address range: 0x223f6d - 0x223f70
int64_t function_223f6d(int64_t a1) {
    // 0x223f6d
    int64_t result; // 0x223f6d
    return result;
}

// Address range: 0x224047 - 0x22404b
int64_t function_224047(int64_t a1) {
    // 0x224047
    int64_t result; // 0x224047
    return result;
}
