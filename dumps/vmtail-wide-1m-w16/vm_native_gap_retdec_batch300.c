/*
 * Targeted RetDec C for native executable gap queue batch 300.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x191685-0x191885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x191885-0x191a85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x191a85-0x191c85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x191c85-0x191e85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x45bc34-0x45be34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x45be34-0x45c034 rank=- name=- kind=- bytes=- uncovered=-
 *   0x45c034-0x45c234 rank=- name=- kind=- bytes=- uncovered=-
 *   0x45c234-0x45c434 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_191685(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_19178a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19189b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1919fa(int64_t a1, int64_t a2, int64_t a3);
int64_t function_191b4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_191c8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_191e0d(void);
int64_t function_45bc34(void);
int64_t function_45bcc6(void);
int64_t function_45bce3(void);
int64_t function_45bcf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45bd00(int64_t a1);
int64_t function_45bd38(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_45bdc2(void);
int64_t function_45bdc4(int64_t a1);
int64_t function_45bde3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45be27(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_45be8c(void);
int64_t function_45bec6(void);
int64_t function_45bed6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45bf0f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_45bf2c(int64_t a1, int64_t a2);
int64_t function_45bf38(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45bf50(int64_t a1, int64_t a2);
int64_t function_45bf6b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45bf7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t result);
int64_t function_45bfca(int64_t a1);
int64_t function_45bfe0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_45c004(void);
int64_t function_45c03c(void);
int64_t function_45c03f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_45c083(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_45c0a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_45c143(int64_t a1);
int64_t function_45c15a(void);
int64_t function_45c18b(void);
int64_t function_45c18e(int64_t a1, int64_t a2);
int64_t function_45c1bc(int64_t a1);
int64_t function_45c1bd(void);
int64_t function_45c1d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_45c21c(void);
int64_t function_45c21e(int64_t a1);
int64_t function_45c228(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45c356(void);
int64_t function_45c387(void);
int64_t function_45c39a(int64_t a1);
int64_t function_caf2a();

// Address range: 0x191685 - 0x19178a
int64_t function_191685(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = 0x3d56621f; // bp+16, 0x1916ff
    int64_t v2 = (int64_t)&v1; // 0x191757
    *(int64_t *)(v2 - 8) = 0x3d56621f;
    *(int64_t *)(v2 - 16) = v2;
    return function_caf2a(a1, a2, a3, 0x7fc0ffae, a5, a6, v1);
}

// Address range: 0x19178a - 0x19189b
int64_t function_19178a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19178a
    int64_t v1; // 0x19178a
    return function_caf2a(a1, v1, a3, a4, v1, v1, 0x4d34aad1);
}

// Address range: 0x19189b - 0x1919fa
int64_t function_19189b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x19189b
    int64_t v1; // bp-64, 0x19189b
    v1 = (int64_t)&v1;
    int64_t v2; // bp-48, 0x19189b
    int64_t v3 = (int64_t)&v2; // 0x1919a8
    v2 = v3;
    int64_t * v4 = (int64_t *)(v3 - 8); // 0x1919b1
    *v4 = 0x18fdb8;
    *(int64_t *)(v3 + 32) = v2;
    *v4 = a4;
    int64_t v5; // 0x19189b
    v2 ^= v3 + 16 ^ v5;
    int64_t v6 = *v4; // 0x1919d9
    int64_t v7 = *(int64_t *)(v3 + 8); // 0x1919df
    v2 = v7;
    *v4 = v7;
    bool v8; // 0x19189b
    return function_caf2a(310, a2, a3, v6, a5, v5, 0x4000 * (int64_t)v8 | 2048 * (int64_t)v8 | 1024 * (int64_t)v8 | 512 * (int64_t)v8 | 256 * (int64_t)v8 | 128 * (int64_t)v8 | 64 * (int64_t)v8 | 16 * (int64_t)v8 | (int64_t)v8 | 4 * (int64_t)v8 | 2);
}

// Address range: 0x1919fa - 0x191b4c
int64_t function_1919fa(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1919fa
    int64_t v1; // bp-48, 0x1919fa
    v1 = (int64_t)&v1;
    int64_t v2; // bp-64, 0x1919fa
    int64_t v3 = (int64_t)&v2; // 0x191b08
    v2 = v3 + 16;
    *(int64_t *)(v3 + 8) = v3 + 24;
    int64_t v4; // 0x1919fa
    return function_caf2a(a1, a2, a3, v4, v4, v4, 0x551f267d);
}

// Address range: 0x191b4c - 0x191c8d
int64_t function_191b4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x191b4c
    int64_t v1; // bp-40, 0x191b4c
    int64_t v2 = (int64_t)&v1; // 0x191bb5
    v1 = 0x6bd2b998;
    int64_t v3 = v2 - 16; // 0x191bcd
    int64_t * v4 = (int64_t *)v3; // 0x191bce
    int64_t v5 = *(int64_t *)(v2 + 32); // 0x191bd4
    int64_t * v6 = (int64_t *)(v2 - 8); // 0x191bd4
    *v6 = v5;
    *v4 = v5;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x191bdb
    *v7 = v5;
    int64_t v8 = *(int64_t *)(v2 + 16); // 0x191bea
    *v6 = v8;
    *v4 = 0x2372c565;
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x191c1e
    *v9 = v5;
    *v7 = v5;
    v1 = *v4;
    *v7 = v3;
    *v9 = *v4;
    int64_t v10 = *v4; // 0x191c43
    int64_t * v11 = (int64_t *)v10; // 0x191c47
    *v11 = v8;
    *(int64_t *)(v10 + 32) = v8;
    int64_t * v12 = (int64_t *)(v10 + 8); // 0x191c4f
    int64_t * v13 = (int64_t *)(v10 - 8); // 0x191c52
    *v13 = *v12;
    *v12 = a5;
    *v11 = v10 + 24;
    int64_t v14 = *v12; // 0x191c7e
    *v13 = v14;
    int64_t v15; // 0x191b4c
    return function_caf2a(a1, a2, v5, a4, v14, v15, 0x5fd066fa);
}

// Address range: 0x191c8d - 0x191e0d
int64_t function_191c8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x191c8d
    int64_t v1; // bp-40, 0x191c8d
    int64_t v2 = (int64_t)&v1; // 0x191d44
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x191d50
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x191d50
    *v4 = v3;
    int64_t v5 = v2 - 16; // 0x191d54
    int64_t * v6 = (int64_t *)v5; // 0x191d54
    *v6 = v2;
    int64_t * v7 = (int64_t *)(v2 + 8); // 0x191d76
    int64_t v8 = *v7; // 0x191d76
    *v6 = v8;
    int64_t * v9 = (int64_t *)(v2 - 24); // 0x191d7a
    *v9 = v8;
    int64_t * v10 = (int64_t *)(v2 - 32); // 0x191d8f
    *v10 = 0x1874798f;
    int64_t * v11 = (int64_t *)(v2 - 40); // 0x191da2
    *v11 = v3;
    *v4 = *v9;
    *v9 = 0x3fcb51ea;
    *v11 = v8;
    *v10 = v8;
    *v7 = *v9;
    *v9 = *v6;
    *v10 = a1;
    *v11 = v8;
    *v10 = v5;
    int64_t v12 = *v6; // 0x191df9
    *v9 = v12;
    *v10 = v12;
    int64_t v13; // 0x191c8d
    return function_caf2a(*v10, a2, a3, a4, a5, a6, v13);
}

// Address range: 0x191e0d - 0x191e12
int64_t function_191e0d(void) {
    // 0x191e0d
    int64_t result; // 0x191e0d
    return result;
}

// Address range: 0x45bc34 - 0x45bc36
int64_t function_45bc34(void) {
    // 0x45bc34
    int64_t v1; // 0x45bc34
    return v1 & -32;
}

// Address range: 0x45bcc6 - 0x45bcc8
int64_t function_45bcc6(void) {
    // 0x45bcc6
    int64_t v1; // 0x45bcc6
    return function_45bcf4(v1, v1, v1, v1);
}

// Address range: 0x45bce3 - 0x45bce8
int64_t function_45bce3(void) {
    // 0x45bce3
    int64_t v1; // 0x45bce3
    int64_t v2 = v1;
    return (v2 + 197) % 256 | v2 & -256;
}

// Address range: 0x45bcf4 - 0x45bcff
int64_t function_45bcf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t result = __asm_hlt(a1); // 0x45bcfa
    int64_t v1; // 0x45bcf4
    char * v2 = (char *)(result - 30 + (v1 & 0xffffffff)); // 0x45bcfb
    *v2 = *v2 - (char)(result / 256);
    return result;
}

// Address range: 0x45bd00 - 0x45bd01
int64_t function_45bd00(int64_t a1) {
    // 0x45bd00
    int64_t result; // 0x45bd00
    return result;
}

// Address range: 0x45bd38 - 0x45bd5b
int64_t function_45bd38(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2; // 0x45bd38
    __asm_out(-76, (int32_t)v2);
    int64_t v3 = a1; // 0x45bd3e
    while (true) {
        // 0x45bd41
        int64_t v4; // 0x45bd38
        *(int64_t *)(v2 - 8) = v4;
        int64_t v5 = (int64_t)(*(int32_t *)v4 | (int32_t)v3); // 0x45bd46
        int3_t v6; // 0x45bd38
        int3_t v7 = v6 - 2; // 0x45bd49
        __frontend_reg_store_fpr(v7, __frontend_reg_load_fpr(v6) / __frontend_reg_load_fpr(v7));
        int64_t v8 = v4 & 0xffffffff ^ 0x51959c9; // 0x45bd4b
        *(char *)v1 = *(char *)&v1 + (char)(v4 / 256);
        *(int32_t *)v5 = (int32_t)v8;
        bool v9; // 0x45bd38
        v3 = (v9 ? -4 : 4) + v5;
        int32_t * v10 = (int32_t *)(v3 + 0x4a7c6f); // 0x45bd53
        *v10 = *v10 | (int32_t)v2;
        v6++;
        v4 = v8;
    }
}

// Address range: 0x45bdc2 - 0x45bdc3
int64_t function_45bdc2(void) {
    // 0x45bdc2
    int64_t result; // 0x45bdc2
    return result;
}

// Address range: 0x45bdc4 - 0x45bdc9
int64_t function_45bdc4(int64_t a1) {
    // 0x45bdc4
    int64_t result; // 0x45bdc4
    return result;
}

// Address range: 0x45bde3 - 0x45be0d
int64_t function_45bde3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)(a4 + a1); // 0x45bde9
    int32_t * v2 = (int32_t *)((a3 & -256 | (int64_t)((char)a3 - v1)) - 120); // 0x45bdf3
    int64_t v3; // 0x45bde3
    *v2 = *v2 & (int32_t)v3;
    return (int64_t)(*(int32_t *)-0x60800114bdcfd053 - 0x3b5f4f37);
}

// Address range: 0x45be27 - 0x45be86
int64_t function_45be27(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x45be27
    *(int64_t *)(a1 + 91) = a5;
    int64_t v1 = a4 / 256 % 256 | a3; // 0x45be2c
    int64_t v2 = function_45bdc2(); // 0x45be2f
    uint32_t v3 = (int32_t)a4 % 32; // 0x45be31
    bool v4 = false; // 0x45be31
    int32_t v5 = -90; // 0x45be31
    int64_t v6; // 0x45be27
    if (v3 != 0) {
        // 0x45be82
        *(int32_t *)v6 = *(int32_t *)&v6 >> v3;
        int32_t * v7 = (int32_t *)(v1 + 0x735b4cf2); // 0x45be33
        int32_t v8 = *v7; // 0x45be33
        *v7 = v8 << v3;
        v5 = (v8 & 0x80000000 >> v3 - 1) != 0 ? -89 : -90;
        v4 = (v8 & 0x80000000 >> v3 - 1) != 0;
    }
    int32_t * v9 = (int32_t *)(v1 + 43);
    uint32_t v10 = *v9;
    *v9 = v10 - v5;
    int64_t v11 = v2 - (v4 | v10 < v5 ? 0xe0fbb268 : 0xe0fbb267); // 0x45be3e
    char * v12 = (char *)((v11 & 0xffffffff) + 126); // 0x45be43
    *v12 = *v12 & (char)(v6 / 256);
    *(char *)a1 = (char)v11;
    int64_t v13 = __asm_hlt(a1 - 1); // 0x45be5c
    int64_t v14 = v6;
    __asm_rcl(*(int32_t *)(v14 - 60 + 8 * v14));
    return (v13 + 21) % 256 | v13 & -256;
}

// Address range: 0x45be8c - 0x45be8d
int64_t function_45be8c(void) {
    // 0x45be8c
    int64_t result; // 0x45be8c
    return result;
}

// Address range: 0x45bec6 - 0x45beca
int64_t function_45bec6(void) {
    // 0x45bec6
    int64_t v1; // 0x45bec6
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 - (char)v1;
    return function_45bf0f(v1, v1, v1, v1);
}

// Address range: 0x45bed6 - 0x45bf0f
int64_t function_45bed6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45bed6
    int64_t v1; // 0x45bed6
    int32_t * v2 = (int32_t *)(v1 - 11); // 0x45bed8
    *v2 = *v2 >> 25;
    uint32_t v3 = (int32_t)v1; // 0x45bee3
    uint32_t v4 = *(int32_t *)(v1 - 23) + v3; // 0x45bee3
    int64_t v5; // 0x45bed6
    *(int32_t *)a1 = *(int32_t *)&v5;
    bool v6; // 0x45bed6
    int64_t v7 = v6 ? -4 : 4; // 0x45bee6
    int64_t v8 = v7 + a2; // 0x45bee6
    v5 = v8;
    char v9 = *(char *)0x4c69f2d5; // 0x45bee7
    *(char *)0x4c69f2d5 = (char)(v4 < v3) + (char)v1 + v9;
    __asm_outsd((int16_t)a3, *(int32_t *)v8);
    int32_t * v10 = (int32_t *)(4 * v1 + a3); // 0x45beef
    int32_t v11 = *v10 - (int32_t)v1; // 0x45beef
    unsigned char v12 = llvm_ctpop_i8((char)v11); // 0x45beef
    *v10 = v11;
    int64_t v13; // 0x45bed6
    if (v12 % 2 != 0) {
        v13 = function_45be8c();
    }
    int64_t v14 = v7 + a1; // 0x45bee6
    int64_t v15 = a4 & -256 | 119; // 0x45bef5
    *(int32_t *)-0x2adf7b36 = *(int32_t *)-0x2adf7b36 & v4;
    uint32_t v16 = *(int32_t *)v5; // 0x45befd
    uint32_t v17 = *(int32_t *)v14; // 0x45befd
    int64_t v18 = v5 + v7; // 0x45befd
    v5 = v18;
    uint32_t v19 = (int32_t)v13; // 0x45bf03
    int32_t v20 = v16 < v17; // 0x45bf03
    uint32_t v21 = *(int32_t *)v15 + v20; // 0x45bf03
    uint32_t v22 = v19 - v21; // 0x45bf03
    int64_t result = v22; // 0x45bf05
    if (v22 == 0 || (v16 < v17 ? v21 != -1 || v22 - v20 > v19 : v21 > v19)) {
        result = function_45bf38(v14 + v7, v18, a3, v15);
    }
    // 0x45bf07
    float80_t v23; // 0x45bed6
    *(int32_t *)(v18 - 43) = (int32_t)v23;
    return result;
}

// Address range: 0x45bf0f - 0x45bf21
int64_t function_45bf0f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x45bf0f
    int64_t v1; // 0x45bf0f
    char * v2 = (char *)(v1 - 61); // 0x45bf0f
    *v2 = *v2 & (char)(a4 / 256);
    int64_t v3 = (v1 & 0xffff00ff | (int64_t)(int32_t)&g1) + 0x2e6e52c9; // 0x45bf15
    char v4 = v3; // 0x45bf1d
    __asm_out_133((int16_t)a3, v4);
    *(char *)a1 = v4;
    return v3 & 0xffffffff;
}

// Address range: 0x45bf2c - 0x45bf38
int64_t function_45bf2c(int64_t a1, int64_t a2) {
    // 0x45bf2c
    int64_t result; // 0x45bf2c
    return result;
}

// Address range: 0x45bf38 - 0x45bf42
int64_t function_45bf38(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45bf38
    bool v1; // 0x45bf38
    int32_t * v2 = (int32_t *)(a1 - 60 + (v1 ? -1 : 1)); // 0x45bf3f
    int64_t result; // 0x45bf38
    *v2 = *v2 + (int32_t)result;
    return result;
}

// Address range: 0x45bf50 - 0x45bf5a
int64_t function_45bf50(int64_t a1, int64_t a2) {
    // 0x45bf50
    __asm_rcl(*(int32_t *)(a1 + 16));
    int64_t result; // 0x45bf50
    return result;
}

// Address range: 0x45bf6b - 0x45bf6f
int64_t function_45bf6b(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 118); // 0x45bf6b
    int64_t result; // 0x45bf6b
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x45bf7f - 0x45bf92
int64_t function_45bf7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t result) {
    int32_t * v1 = (int32_t *)(a3 - 99); // 0x45bf7f
    uint32_t v2 = *v1; // 0x45bf7f
    int64_t v3; // 0x45bf7f
    uint32_t v4 = (int32_t)v3; // 0x45bf7f
    *v1 = v2 - v4;
    int32_t * v5 = (int32_t *)(a4 - 16); // 0x45bf82
    *v5 = *v5 + (int32_t)a3 + (int32_t)(v2 < v4);
    int64_t v6; // 0x45bf7f
    *(int32_t *)a1 = *(int32_t *)&v6 & (int32_t)a1;
    char * v7 = (char *)(a3 + 52); // 0x45bf8a
    *v7 = *v7 - (char)(result / 256);
    char * v8 = (char *)(result + a4); // 0x45bf8d
    *v8 = *v8 & -49;
    return result;
}

// Address range: 0x45bfca - 0x45bfce
int64_t function_45bfca(int64_t a1) {
    // 0x45bfca
    return __asm_wait(a1);
}

// Address range: 0x45bfe0 - 0x45bfea
int64_t function_45bfe0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x45bfe0
    int64_t v1; // 0x45bfe0
    char * v2 = (char *)(v1 + 0x259e15ea); // 0x45bfe0
    *v2 = *v2 - (char)(a4 / 256);
    return __asm_sti(a1, a2, a3, a4);
}

// Address range: 0x45c004 - 0x45c005
int64_t function_45c004(void) {
    // 0x45c004
    int64_t result; // 0x45c004
    return result;
}

// Address range: 0x45c03c - 0x45c03f
int64_t function_45c03c(void) {
    // 0x45c03c
    int64_t v1; // 0x45c03c
    return function_45c0a8(v1, v1, v1, v1, v1);
}

// Address range: 0x45c03f - 0x45c050
int64_t function_45c03f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x45c03f
    int64_t v1; // 0x45c03f
    *(char *)a2 = (char)(v1 ^ a3 / 256);
    return v1 & 0xf6cc1c86 | 0x933e379;
}

// Address range: 0x45c083 - 0x45c08f
int64_t function_45c083(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x45c083
    int64_t v1; // 0x45c083
    int64_t v2 = v1;
    bool v3; // 0x45c083
    return (v2 + 189 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x45c0a8 - 0x45c13b
int64_t function_45c0a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x45c0a8
    int64_t v1; // 0x45c0a8
    bool v2; // 0x45c0a8
    if (a4 == 1 || v2) {
        // 0x45c0aa
        return v1 & -151;
    }
    int64_t v3 = 0x100000000 * v1 >> 32; // 0x45c10c
    int64_t v4 = -25 * v3; // 0x45c10c
    char v5 = *(char *)0x41a88a2d; // 0x45c10f
    *(char *)0x41a88a2d = (char)(v4 != -0x1900000000 * v3 >> 32) + (char)v1 + v5;
    int32_t v6 = *(int32_t *)(a1 + 69); // 0x45c115
    __asm_out_133((int16_t)v4, (char)(v6 ^ (int32_t)v1));
    return __asm_hlt(a1);
}

// Address range: 0x45c143 - 0x45c147
int64_t function_45c143(int64_t a1) {
    // 0x45c143
    int64_t result; // 0x45c143
    return result;
}

// Address range: 0x45c15a - 0x45c15e
int64_t function_45c15a(void) {
    // 0x45c15a
    int64_t result; // 0x45c15a
    return result;
}

// Address range: 0x45c18b - 0x45c18c
int64_t function_45c18b(void) {
    // 0x45c18b
    int64_t result; // 0x45c18b
    return result;
}

// Address range: 0x45c18e - 0x45c193
int64_t function_45c18e(int64_t a1, int64_t a2) {
    // 0x45c18e
    int64_t v1; // 0x45c18e
    *(int32_t *)a2 = (int32_t)((int32_t)v1 < 0);
    return function_45c18b();
}

// Address range: 0x45c1bc - 0x45c1bd
int64_t function_45c1bc(int64_t a1) {
    // 0x45c1bc
    int64_t result; // 0x45c1bc
    return result;
}

// Address range: 0x45c1bd - 0x45c1c0
int64_t function_45c1bd(void) {
    // 0x45c1bd
    int64_t result; // 0x45c1bd
    return result;
}

// Address range: 0x45c1d1 - 0x45c1dd
int64_t function_45c1d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x45c1d1
    int64_t v1; // 0x45c1d1
    bool v2; // 0x45c1d1
    return v1 - (v2 ? 0x2cde25f0 : 0x2cde25ef) & 0xffffffff;
}

// Address range: 0x45c21c - 0x45c21d
int64_t function_45c21c(void) {
    // 0x45c21c
    int64_t result; // 0x45c21c
    return result;
}

// Address range: 0x45c21e - 0x45c21f
int64_t function_45c21e(int64_t a1) {
    // 0x45c21e
    int64_t result; // 0x45c21e
    return result;
}

// Address range: 0x45c228 - 0x45c2be
int64_t function_45c228(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45c228
    int64_t v1; // 0x45c228
    __asm_out_134((int16_t)a3, (int32_t)v1);
    int64_t v2 = (int64_t)(*(int32_t *)(v1 + 0x6831813f) & (int32_t)a4) - 1; // 0x45c232
    if (v2 == 0) {
        // 0x45c234
        int64_t result; // 0x45c228
        return result;
    }
    // 0x45c2ad
    int64_t v3; // 0x45c228
    int64_t result2 = (int64_t)&v3; // 0x45c2ad
    char * v4 = (char *)v2; // 0x45c2ae
    char v5 = *v4 | (char)v2; // 0x45c2ae
    *v4 = v5;
    if (v5 < 0) {
        // 0x45c234
        return result2;
    }
    // 0x45c2b2
    *(int64_t *)((v1 & 0xffffffff) - 8) = a2;
    return result2;
}

// Address range: 0x45c356 - 0x45c357
int64_t function_45c356(void) {
    // 0x45c356
    int64_t result; // 0x45c356
    return result;
}

// Address range: 0x45c387 - 0x45c38f
int64_t function_45c387(void) {
    // 0x45c387
    return function_45c356();
}

// Address range: 0x45c39a - 0x45c3a0
int64_t function_45c39a(int64_t a1) {
    // 0x45c39a
    int64_t result; // 0x45c39a
    *(char *)(result + 73) = (char)(result / 256);
    return result;
}
