/*
 * Targeted RetDec C for native executable gap queue batch 438.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2336b6-0x2338b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2338b6-0x233ab6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x233ab6-0x233cb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x233cb6-0x233eb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x233eb6-0x2340b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x40e542-0x40e742 rank=- name=- kind=- bytes=- uncovered=-
 *   0x40e742-0x40e942 rank=- name=- kind=- bytes=- uncovered=-
 *   0x40eb42-0x40ed42 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_2336b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_233825(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_233969(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_233ad6(int64_t a1, int64_t a2);
int64_t function_233bf3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_233d84(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_233f02(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_23407e(int64_t a1);
int64_t function_23408b(void);
int64_t function_40e542(int64_t a1);
int64_t function_40e585(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_40e5e7(void);
int64_t function_40e60b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_40e6ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_40e71c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40e763(int64_t a1);
int64_t function_40e79a(void);
int64_t function_40e7ec(void);
int64_t function_40e7f9(int64_t a1, int64_t a2);
int64_t function_40e836(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40e841(int64_t a1);
int64_t function_40e84d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40e86c(void);
int64_t function_40e873(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40e8be(void);
int64_t function_40e8e8(void);
int64_t function_40e916(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40e926(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_40eb3b();
int64_t function_40eb42(int64_t a1, int64_t a2, int64_t a3);
int64_t function_40eb79(int64_t a1, int64_t a2, int64_t a3);
int64_t function_40eb81(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_40ebed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_40ece5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_40ed0d(void);
int64_t function_40ed36(void);
int64_t function_59649dd1();
int64_t function_597b56ee();
int64_t function_7206594c();
int64_t function_7fbbaf42();
int64_t function_c6d58();

// Address range: 0x2336b6 - 0x233825
int64_t function_2336b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2336b6
    int64_t v1; // 0x2336b6
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x2336b6
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    int64_t v5 = 0x572f9f87; // bp-8, 0x23370d
    int64_t v6 = (int64_t)&v5; // 0x233753
    int64_t * v7 = (int64_t *)(v6 - 8); // 0x23375b
    *v7 = 0x23221d;
    int64_t * v8 = (int64_t *)(v6 - 16); // 0x23375d
    int64_t v9 = v6 + 16; // 0x233773
    *v7 = *v8;
    *(int64_t *)(v6 + 32) = v5;
    int64_t * v10 = (int64_t *)(v6 + 8); // 0x2337a5
    v5 = *v10;
    *v7 = v9;
    *v8 = v5;
    *v7 = *v10;
    *v8 = a5;
    v5 = v9;
    return function_c6d58(a1, a2, a3, a7, a5);
}

// Address range: 0x233825 - 0x233969
int64_t function_233825(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x233825
    int64_t v1; // bp-32, 0x233825
    int64_t v2 = (int64_t)&v1; // 0x2338f6
    int64_t v3 = v2 - 8; // 0x2338fe
    int64_t * v4 = (int64_t *)v3; // 0x2338fe
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x233902
    *v4 = 0x355a8de9;
    *v5 = a4;
    int64_t v6 = v2 + 8; // 0x23391a
    *(int64_t *)v6 = *v4;
    *v4 = 0x1d052d65;
    *v5 = 0x2be0529a;
    *(int64_t *)(v2 - 24) = *(int64_t *)(v2 + 16);
    *(int64_t *)(v2 + 24) = *v4;
    *v5 = v3;
    *v4 = v6;
    *v4 = v1;
    *v5 = v1;
    int64_t v7; // 0x233825
    return function_c6d58(a1, a2, a3, v7, v7);
}

// Address range: 0x233969 - 0x233ad6
int64_t function_233969(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x57a7e607; // bp-40, 0x2339d0
    int64_t v2 = (int64_t)&v1; // 0x233a15
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x233a1d
    *v3 = 0x786c49db;
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x233a22
    bool v5; // 0x233969
    *v4 = 0x4000 * (int64_t)(bool)v5 | 2048 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | 128 * (int64_t)v5 | 64 * (int64_t)v5 | 16 * (int64_t)v5 | (int64_t)v5 | 4 * (int64_t)v5 | 2;
    *(int64_t *)(v2 + 8) = *v3;
    *v4 = a3;
    *(int64_t *)(v2 - 24) = a1;
    *(int64_t *)(v2 + 32) = *v4;
    *v4 = v1;
    v1 = a5;
    *v3 = a2;
    int64_t v6 = v1;
    v1 = v2 + 16;
    return function_c6d58(a1, a2, *v4, a4, v6);
}

// Address range: 0x233ad6 - 0x233bf3
int64_t function_233ad6(int64_t a1, int64_t a2) {
    // 0x233ad6
    int64_t v1; // bp-48, 0x233ad6
    int64_t v2 = (int64_t)&v1; // 0x233b4f
    int64_t * v3 = (int64_t *)(v2 + 40); // 0x233b5e
    int64_t v4 = *v3; // 0x233b5e
    v1 = v4;
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x233b62
    *v5 = v4;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x233b65
    *v6 = v4;
    int64_t * v7 = (int64_t *)(v2 + 24); // 0x233b71
    int64_t v8 = *v7; // 0x233b71
    *v6 = v8;
    v1 = v8;
    int64_t v9 = v1; // 0x233b9d
    v1 = v4;
    int64_t * v10 = (int64_t *)(v2 + 8); // 0x233ba6
    *v7 = *v10;
    *v10 = 0x1ba62067;
    v1 = 0x3d8653e0;
    *v5 = v9;
    *v3 = *v10;
    int64_t * v11 = (int64_t *)(v2 + 16); // 0x233bbf
    int64_t v12 = *v11; // 0x233bbf
    *v10 = v12;
    v1 = v12;
    int64_t v13 = *v7; // 0x233bd5
    *v11 = v13;
    *v10 = v13;
    int64_t v14; // 0x233ad6
    return function_c6d58(a1, a2, v14, v14, v14);
}

// Address range: 0x233bf3 - 0x233d84
int64_t function_233bf3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x233bf3
    return function_c6d58(a1, a2, a3, a4, a5);
}

// Address range: 0x233d84 - 0x233f02
int64_t function_233d84(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x233d84
    int64_t v1; // 0x233d84
    int64_t v2 = *(int64_t *)(v1 + 32); // 0x233e38
    int64_t v3 = v1 - 8; // 0x233e38
    int64_t * v4 = (int64_t *)v3; // 0x233e38
    *v4 = v2;
    int64_t * v5 = (int64_t *)(v1 - 16); // 0x233e3c
    *v5 = v2;
    int64_t * v6 = (int64_t *)(v1 - 24); // 0x233e52
    *v6 = v3;
    int64_t v7 = *(int64_t *)(v1 + 8); // 0x233e5b
    *v5 = v7;
    *v6 = 0x55dc160f;
    int64_t v8 = v1 - 32; // 0x233e84
    int64_t * v9 = (int64_t *)v8; // 0x233e84
    *v9 = v2;
    *v4 = *v6;
    *v9 = v8;
    *v6 = v7;
    *(int64_t *)(v1 + 16) = *v5;
    *v5 = *v4;
    *v6 = v3;
    int64_t v10 = *v4; // 0x233ee7
    *v5 = v10;
    *v6 = v10;
    return function_c6d58(a1, a2, a3, a4, v1);
}

// Address range: 0x233f02 - 0x234048
int64_t function_233f02(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x233f02
    return function_c6d58(a1, a2, a3, a4, a5);
}

// Address range: 0x23407e - 0x23407f
int64_t function_23407e(int64_t a1) {
    // 0x23407e
    int64_t result; // 0x23407e
    return result;
}

// Address range: 0x23408b - 0x234090
int64_t function_23408b(void) {
    // 0x23408b
    return function_59649dd1();
}

// Address range: 0x40e542 - 0x40e552
int64_t function_40e542(int64_t a1) {
    // 0x40e542
    return (int64_t)*(int32_t *)0x51ac4d65a940121d;
}

// Address range: 0x40e585 - 0x40e5e0
int64_t function_40e585(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1;
    int32_t v2 = (int32_t)*(int16_t *)(a4 + 93); // 0x40e58b
    int64_t result; // 0x40e585
    if (34 * v2 == 0x220000 * v2 >> 16) {
        // 0x40e5cf
        *(char *)a1 = (char)a2;
        return result | 238;
    }
    int32_t * v3 = (int32_t *)(result + 102); // 0x40e5c5
    *v3 = *v3 >> 1;
    *(char *)v1 = *(char *)&v1 ^ (char)(a3 / 256);
    *(char *)a3 = (char)a3;
    return result;
}

// Address range: 0x40e5e7 - 0x40e5e8
int64_t function_40e5e7(void) {
    // 0x40e5e7
    int64_t result; // 0x40e5e7
    return result;
}

// Address range: 0x40e60b - 0x40e623
int64_t function_40e60b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x40e60b
    int64_t v1; // 0x40e60b
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x40e60b
    if (v3 != 0) {
        *(int32_t *)v2 = (int32_t)v2 >> v3;
    }
    char * v4 = (char *)(v1 - 100); // 0x40e61e
    *v4 = *v4 & (char)(a3 / 256);
    return (v2 + 154) % 256 | v2 & -256;
}

// Address range: 0x40e6ea - 0x40e71b
int64_t function_40e6ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40e6ea
    int64_t v1; // 0x40e6ea
    uint64_t v2 = v1;
    uint32_t v3 = (int32_t)v1; // 0x40e6ef
    uint32_t v4 = *(int32_t *)(v1 - 0x2ddfeeb6) + v3; // 0x40e6ef
    uint32_t v5 = v4 + (int32_t)((char)v2 < (char)(v2 / 256)); // 0x40e6ef
    bool v6 = (char)v2 < (char)(v2 / 256) ? v5 <= v3 : v4 < v3; // 0x40e6ef
    char v7 = *(char *)((int64_t)v5 - 0x21d2d4f2); // 0x40e6f5
    int64_t v8 = 256 * (int64_t)((char)((v1 | a3) / 256) - v7 + (char)v6) | a3 & -0xff01; // 0x40e6f5
    __readfsdword(v8 + 0x307745f3);
    int16_t v9 = v8; // 0x40e70a
    *(int32_t *)a1 = __asm_insd(v9);
    int64_t v10; // 0x40e6ea
    __asm_outsb(v9, *(char *)&v10);
    return v2 & 0xffffff95 | 106;
}

// Address range: 0x40e71c - 0x40e72b
int64_t function_40e71c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40e71c
    int64_t v1; // 0x40e71c
    *(char *)a3 = (char)v1 & -86;
    return __asm_int1();
}

// Address range: 0x40e763 - 0x40e789
int64_t function_40e763(int64_t a1) {
    // 0x40e763
    bool v1; // 0x40e763
    if (true == !v1) {
        // 0x40e774
        return (int64_t)*(int32_t *)-0x78fbde38779e8aa5;
    }
    // 0x40e765
    int64_t v2; // 0x40e763
    return v2 + 0x8464d44c & 0xffffffff;
}

// Address range: 0x40e79a - 0x40e79b
int64_t function_40e79a(void) {
    // 0x40e79a
    int64_t result; // 0x40e79a
    return result;
}

// Address range: 0x40e7ec - 0x40e7ee
int64_t function_40e7ec(void) {
    // 0x40e7ec
    int64_t result; // 0x40e7ec
    return result;
}

// Address range: 0x40e7f9 - 0x40e811
int64_t function_40e7f9(int64_t a1, int64_t a2) {
    // 0x40e7f9
    int64_t result; // 0x40e7f9
    int64_t v1; // 0x40e7f9
    if (llvm_ctpop_i8((char)(v1 & a2)) % 2 == 0) {
        result = function_40e79a();
    }
    // 0x40e811
    return result;
}

// Address range: 0x40e836 - 0x40e83f
int64_t function_40e836(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 0x43ef0a9e); // 0x40e836
    *v1 = *v1 + (char)a3;
    return function_40e84d(a1, a2, a3, a4);
}

// Address range: 0x40e841 - 0x40e845
int64_t function_40e841(int64_t a1) {
    // 0x40e841
    int64_t result; // 0x40e841
    return result;
}

// Address range: 0x40e84d - 0x40e85b
int64_t function_40e84d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40e84d
    int64_t v1; // 0x40e84d
    int32_t v2 = v1;
    uint32_t v3 = (int32_t)v1 % 32; // 0x40e851
    int32_t v4 = v2; // 0x40e851
    if (v3 != 0) {
        v4 = v2 >> 32 - v3 | v2 << v3;
    }
    int32_t * v5 = (int32_t *)(a2 + 117); // 0x40e853
    *v5 = *v5 + v4;
    return a4 & 0xffffffff;
}

// Address range: 0x40e86c - 0x40e86d
int64_t function_40e86c(void) {
    // 0x40e86c
    int64_t result; // 0x40e86c
    return result;
}

// Address range: 0x40e873 - 0x40e876
int64_t function_40e873(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40e873
    int64_t result; // 0x40e873
    return result;
}

// Address range: 0x40e8be - 0x40e8c1
int64_t function_40e8be(void) {
    // 0x40e8be
    int64_t result; // 0x40e8be
    return result;
}

// Address range: 0x40e8e8 - 0x40e8e9
int64_t function_40e8e8(void) {
    // 0x40e8e8
    int64_t result; // 0x40e8e8
    return result;
}

// Address range: 0x40e916 - 0x40e926
int64_t function_40e916(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40e916
    *(char *)(a3 - 82) = 26;
    bool v1; // 0x40e916
    if (v1) {
        // 0x40e94b
        int64_t result; // 0x40e916
        return result;
    }
    // 0x40e921
    return function_597b56ee();
}

// Address range: 0x40e926 - 0x40e93b
int64_t function_40e926(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40e926
    int64_t v1; // 0x40e926
    uint32_t v2 = (int32_t)v1; // 0x40e92b
    uint32_t v3 = *(int32_t *)(a3 + 61); // 0x40e92b
    int32_t * v4 = (int32_t *)(2 * a2 + 0x770b183b + v1); // 0x40e92e
    *v4 = *v4 - (int32_t)v1 + (int32_t)(v3 > v2);
    return v2 - v3;
}

// Address range: 0x40eb42 - 0x40eb78
int64_t function_40eb42(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40eb42
    int64_t v1; // 0x40eb42
    int64_t result = v1;
    int64_t v2 = a1;
    char * v3 = (char *)(result + 8 * a1); // 0x40eb42
    unsigned char v4 = *v3; // 0x40eb42
    *v3 = v4 / 64 | 4 * v4;
    bool v5; // 0x40eb42
    if (!v5) {
        // 0x40eb68
        return result;
    }
    int32_t * v6 = (int32_t *)(v2 - 0x6949b874); // 0x40eb48
    int32_t v7 = *v6 - (int32_t)a3; // 0x40eb48
    *v6 = v7;
    if (v7 != 0) {
        // 0x40eb6c
        __asm_out(79, (char)result);
        return 256 * (int64_t)*(char *)(result - 0x79ddd902) | result & -0xff01;
    }
    unsigned char v8 = *(char *)&v2; // 0x40eb51
    return result + 0xacce2631 + (int64_t)(v8 > (char)result) & 0xffffffff;
}

// Address range: 0x40eb79 - 0x40eb80
int64_t function_40eb79(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40eb79
    int64_t v1; // 0x40eb79
    char * v2 = (char *)(v1 - 18); // 0x40eb7b
    bool v3; // 0x40eb79
    *v2 = (char)v3 - (char)a3 + *v2;
    return function_40ebed(a1, a2, a3, v1, v1, -119, (int64_t)&g1);
}

// Address range: 0x40eb81 - 0x40ebed
int64_t function_40eb81(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40eb81
    int64_t v1; // 0x40eb81
    uint32_t v2 = (int32_t)v1; // 0x40eb81
    uint32_t v3 = (int32_t)v1;
    bool v4; // 0x40eb81
    int64_t v5 = (v4 ? -4 : 4) + a1; // 0x40eb81
    if (llvm_ctpop_i8((char)(v2 - v3)) % 2 != 0) {
        char v6 = a3; // 0x40eb85
        *(char *)(a3 - 0x24c6c5e2) = v6;
        int64_t v7 = v5 + 71;
        char v8 = __readgsbyte(v7); // 0x40eb8b
        char v9 = v8 + v6; // 0x40eb8b
        __writegsbyte(v7, v9);
        int64_t v10 = 21; // bp-8, 0x40eb8f
        if (v9 < 0 == ((v9 ^ v8) & (v9 ^ v6)) < 0) {
            // 0x40eba6
            return (int64_t)&v10;
        }
        // 0x40eb95
        return function_40eb3b();
    }
    int64_t v11 = v5; // 0x40eb81
    int64_t v12 = a4; // 0x40ebd1
    int64_t v13 = a3; // 0x40ebdf
    int64_t v14 = __asm_int3(); // 0x40ebcc
    int32_t * v15 = (int32_t *)v11; // 0x40ebcd
    int32_t v16 = (int32_t)(v2 < v3) - (int32_t)v14 + *v15; // 0x40ebcd
    *v15 = v16;
    v12--;
    while (v12 == 0 || v16 == 0) {
        int16_t v17 = v13; // 0x40ebd3
        int32_t v18 = __asm_in(v17); // 0x40ebd3
        int64_t v19 = v18; // 0x40ebd3
        int64_t v20; // 0x40eb81
        int64_t v21 = v20 & -256 | 83; // 0x40ebd6
        __asm_out_133(v17, v18);
        uint32_t v22 = (int32_t)v11; // 0x40ebda
        uint32_t v23 = 2 * v22; // 0x40ebda
        uint32_t v24 = v23 | (int32_t)((v19 & 256) != 0); // 0x40ebda
        bool v25 = (v19 & 256) != 0 ? v24 <= v22 : v23 < v22; // 0x40ebda
        unsigned char v26 = (char)v13; // 0x40ebdf
        char v27 = v25; // 0x40ebdf
        unsigned char v28 = v27 + (char)v18; // 0x40ebdf
        unsigned char v29 = v26 - v28; // 0x40ebdf
        bool v30 = v25 ? v28 != -1 | v29 - v27 > v26 : v28 > v26; // 0x40ebdf
        v13 = v13 & -256 | (int64_t)v29;
        int32_t * v31 = (int32_t *)(v21 + 26); // 0x40ebe1
        uint32_t v32 = *v31; // 0x40ebe1
        uint32_t v33 = v32 + (int32_t)v1; // 0x40ebe1
        uint32_t v34 = v33 + (int32_t)v30; // 0x40ebe1
        bool v35 = v30 ? v34 <= v32 : v33 < v32; // 0x40ebe1
        *v31 = v34;
        int64_t v36 = v19 & -0xff01 | (int64_t)"le"; // 0x40ebe4
        unsigned char v37 = (char)v36;
        unsigned char v38 = v35 ? 59 : 58; // 0x40ebe6
        int64_t v39; // 0x40eb81
        __asm_outsd((int16_t)v13, *(int32_t *)&v39);
        v11 = v24;
        v20 = v21;
        if (!v35 && v38 <= v37) {
            // 0x40ebeb
            return v36 & -256 | (int64_t)(v37 - v38);
        }
        v14 = __asm_int3();
        v15 = (int32_t *)v11;
        v16 = -1 - (int32_t)v14 + *v15;
        *v15 = v16;
        v12--;
    }
    // 0x40eb95
    return function_40eb3b();
}

// Address range: 0x40ebed - 0x40ec81
int64_t function_40ebed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x40ebed
    int64_t v1; // 0x40ebed
    int32_t * v2 = (int32_t *)(v1 - 0x4988e948); // 0x40ebf0
    bool v3; // 0x40ebed
    int32_t v4 = *v2 - (v3 ? -0x5f77f780 : -0x5f77f77f); // 0x40ebf0
    *v2 = v4;
    *(int32_t *)a2 = (int32_t)v1;
    uint32_t v5 = *(int32_t *)0x37467a71; // 0x40ebfc
    int64_t result = v5; // 0x40ebfc
    if (v4 == 0) {
        // 0x40ec11
        return result;
    }
    int64_t result2 = result & 0xffffff68 ^ 213; // 0x40ec09
    char * v6 = (char *)(a1 + 97); // 0x40ec0b
    unsigned char v7 = *v6; // 0x40ec0b
    unsigned char v8 = (char)(v5 / 256); // 0x40ec0b
    char v9 = v7 - v8; // 0x40ec0b
    *v6 = v9;
    if (v7 < v8 || v9 == 0) {
        // 0x40ec11
        return result2;
    }
    char * v10 = (char *)(v1 - 0xededb67); // 0x40ec78
    *v10 = *v10 + v8;
    return result2;
}

// Address range: 0x40ece5 - 0x40ecf6
int64_t function_40ece5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40ece5
    int64_t v1; // 0x40ece5
    __asm_out_135((int16_t)a3, (char)v1);
    return function_7206594c();
}

// Address range: 0x40ed0d - 0x40ed10
int64_t function_40ed0d(void) {
    // 0x40ed0d
    int64_t result; // 0x40ed0d
    return result;
}

// Address range: 0x40ed36 - 0x40ed3b
int64_t function_40ed36(void) {
    // 0x40ed36
    return function_7fbbaf42();
}
