/*
 * Targeted RetDec C for native executable gap queue batch 433.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1fd434-0x1fd634 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1fd634-0x1fd834 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1fd834-0x1fda34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1fda34-0x1fdc34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1fdc34-0x1fde34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x41e61f-0x41e81f rank=- name=- kind=- bytes=- uncovered=-
 *   0x41e81f-0x41ea1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x41ea1f-0x41ec1f rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1fd434(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1fd450(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fd486(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fd4fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fd541(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fd57a(int64_t a1);
int64_t function_1fd585(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fd5a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1fd5cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1fd775(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1fd934(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1fda81(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1fdc00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1fdd56(int64_t a1);
int64_t function_1fdd5e(void);
int64_t function_1fddf8(void);
int64_t function_1fddfc(void);
int64_t function_2d28fae1();
int64_t function_3a6a031d();
int64_t function_41e5e2();
int64_t function_41e5f6();
int64_t function_41e5fb();
int64_t function_41e61b();
int64_t function_41e61f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41e654(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41e67d(void);
int64_t function_41e681(int64_t a1);
int64_t function_41e6ad(void);
int64_t function_41e6b5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41e6e1(void);
int64_t function_41e704(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41e76c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41e781(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_41e8b3(int64_t a1);
int64_t function_41e8d8(void);
int64_t function_41e904(int64_t a1);
int64_t function_41e905(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41e979(void);
int64_t function_41e992(int64_t a1);
int64_t function_41e999(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_41ea88(void);
int64_t function_41ea8d(int64_t a1);
int64_t function_41ea99(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41eac0(void);
int64_t function_41eadf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41eb11(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_41eb88(void);
int64_t function_41eba5(void);
int64_t function_47c33465();
int64_t function_71d95a67();
int64_t function_77574b99();
int64_t function_c57b8();
int64_t unknown_1e1c6e5f();
int64_t unknown_2a7a2c82();
int64_t unknown_ffffffff98c3a86c();
int64_t unknown_ffffffffb02cf256();
int64_t unknown_ffffffffd3d44d4b();

// Address range: 0x1fd434 - 0x1fd43c
int64_t function_1fd434(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1fd434
    int64_t result; // 0x1fd434
    return result;
}

// Address range: 0x1fd450 - 0x1fd469
int64_t function_1fd450(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffffb02cf256(); // 0x1fd450
    float80_t v1; // 0x1fd450
    *(int16_t *)(a3 + 0x1ad76c4) = (int16_t)v1;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    char * v2 = (char *)(result - 105); // 0x1fd45c
    bool v3; // 0x1fd450
    *v2 = *v2 - (v3 ? -23 : -24);
    int32_t * v4 = (int32_t *)(a4 + 0x1d542ab1); // 0x1fd460
    *v4 = *v4 + (int32_t)a3;
    return result;
}

// Address range: 0x1fd486 - 0x1fd491
int64_t function_1fd486(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fd486
    int64_t result; // 0x1fd486
    char * v1 = (char *)(result - 0x17648a2d); // 0x1fd487
    *v1 = *v1 & (char)result;
    return result;
}

// Address range: 0x1fd4fc - 0x1fd540
int64_t function_1fd4fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fd4fc
    int64_t result; // 0x1fd4fc
    bool v1; // 0x1fd4fc
    if (a4 != 1 != v1) {
        // 0x1fd4fe
        return result;
    }
    if (!v1) {
        // 0x1fd52a
        *(int32_t *)-0x268244cd = *(int32_t *)-0x268244cd + (int32_t)a1;
        int32_t * v2 = (int32_t *)(a2 - 0x5ffb0f3c); // 0x1fd532
        *v2 = *v2 - 0x58f301e8;
        return 2 * result & 0xffffffff;
    }
    uint32_t v3 = (int32_t)result; // 0x1fd512
    uint32_t v4 = 2 * v3; // 0x1fd512
    if (v4 < v3 || v4 == 0) {
        // 0x1fd516
        *(int32_t *)-0x17b21de3 = *(int32_t *)-0x17b21de3 + (int32_t)a1;
        return result;
    }
    // 0x1fd4fe
    return result;
}

// Address range: 0x1fd541 - 0x1fd56e
int64_t function_1fd541(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fd541
    bool v1; // 0x1fd541
    char * v2 = (char *)unknown_ffffffffd3d44d4b((v1 ? -4 : 4) + a1); // 0x1fd54a
    *v2 = *v2 + (char)a4;
    int64_t v3; // 0x1fd541
    int32_t * v4 = (int32_t *)(v3 - 0x5f51d3ab); // 0x1fd551
    *v4 = *v4 + (int32_t)v3;
    unknown_1e1c6e5f();
    __asm_hlt();
    return unknown_ffffffff98c3a86c();
}

// Address range: 0x1fd57a - 0x1fd584
int64_t function_1fd57a(int64_t a1) {
    // 0x1fd57a
    return unknown_2a7a2c82(a1);
}

// Address range: 0x1fd585 - 0x1fd58f
int64_t function_1fd585(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fd585
    int64_t v1; // 0x1fd585
    uint32_t v2 = (int32_t)v1; // 0x1fd585
    bool v3; // 0x1fd585
    uint32_t v4 = v2 + 0x2001e8fe + (int32_t)v3; // 0x1fd585
    bool v5 = v3 ? v4 <= v2 : v2 > 0xdffe1701; // 0x1fd585
    *(int32_t *)a3 = (int32_t)v1 + (int32_t)a1 + (int32_t)v5;
    return v4 | 15;
}

// Address range: 0x1fd5a8 - 0x1fd5ac
int64_t function_1fd5a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1fd5a8
    return a4 & 0xffffffff;
}

// Address range: 0x1fd5cf - 0x1fd775
int64_t function_1fd5cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1fd5cf
    int64_t v1; // 0x1fd5cf
    *(int32_t *)v1 = (int32_t)v1;
    char * v2 = (char *)(v1 - 0x3f6af100); // 0x1fd5d9
    *v2 = *v2 + (char)v1;
    int64_t v3; // bp-48, 0x1fd5cf
    int64_t v4 = (int64_t)&v3; // 0x1fd6dd
    int64_t * v5 = (int64_t *)(v4 + 16); // 0x1fd71c
    int64_t * v6 = (int64_t *)(v4 + 32); // 0x1fd723
    *v6 = a6;
    *v5 = 0x5a51250d;
    v3 = 169;
    *(int64_t *)(v4 + 48) = *v5;
    int64_t * v7 = (int64_t *)(v4 + 24); // 0x1fd73e
    int64_t v8 = *v7; // 0x1fd73e
    *v5 = v8;
    *(int64_t *)(v4 + 8) = v8;
    int64_t v9 = *v6; // 0x1fd757
    *v7 = v9;
    *v5 = v9;
    return function_c57b8(v1 + a1 & 0xffffffff, a2, a3, a4, a5, v1, 0x1fa2a0);
}

// Address range: 0x1fd775 - 0x1fd934
int64_t function_1fd775(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1fd775
    int64_t v1; // 0x1fd775
    return function_c57b8(a1, a2, a3, a4, a5, a6, v1);
}

// Address range: 0x1fd934 - 0x1fda81
int64_t function_1fd934(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1fd934
    int64_t v1; // bp-40, 0x1fd934
    int64_t v2 = (int64_t)&v1; // 0x1fd996
    int64_t v3 = v2 + 16; // 0x1fda13
    int64_t * v4 = (int64_t *)v3; // 0x1fda13
    *v4 = a5;
    v1 = 0x3ef1e1cb;
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x1fda1c
    *(int64_t *)(v2 - 16) = 310;
    *v5 = 310;
    *(int64_t *)(v2 + 32) = v1;
    v1 = 310;
    *v5 = a3;
    int64_t v6 = v1; // 0x1fda4d
    v1 = v3;
    *(int64_t *)(v2 + 8) = *v4;
    v1 = v3;
    int64_t v7; // 0x1fd934
    return function_c57b8(a1, a2, a3, v6, v7, v7, 0x1bf8c6ea);
}

// Address range: 0x1fda81 - 0x1fdc00
int64_t function_1fda81(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1fda81
    int64_t v1; // bp-40, 0x1fda81
    int64_t v2 = (int64_t)&v1; // 0x1fdafe
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x1fdb0a
    int64_t v4 = v2 - 8; // 0x1fdb0a
    *(int64_t *)v4 = v3;
    int64_t v5 = v2 - 16; // 0x1fdb0e
    int64_t * v6 = (int64_t *)v5; // 0x1fdb0e
    int64_t v7 = v2 - 24; // 0x1fdb14
    int64_t * v8 = (int64_t *)v7; // 0x1fdb14
    *v8 = v5;
    *v6 = v2;
    int64_t * v9 = (int64_t *)(v2 + 8); // 0x1fdb27
    int64_t v10 = *v9; // 0x1fdb27
    *v6 = v10;
    *v8 = a3;
    int64_t * v11 = (int64_t *)(v2 - 32); // 0x1fdb37
    *v11 = v3;
    int64_t * v12 = (int64_t *)(v2 - 40); // 0x1fdb5c
    *v12 = v10;
    *v11 = v4;
    *v8 = a4;
    *v11 = v10;
    *v12 = *v11;
    int64_t * v13 = (int64_t *)(v2 - 48); // 0x1fdb7c
    *v13 = a2;
    int64_t v14 = *v12; // 0x1fdb87
    *v12 = v14 ^ 0x5f7a0b7f;
    v1 = v14;
    *v9 = *v8;
    *v11 = v7;
    *v8 = v4;
    int64_t v15; // 0x1fda81
    return function_c57b8(a1, *v13, *v8, *v8, a5, a6, v15);
}

// Address range: 0x1fdc00 - 0x1fdd48
int64_t function_1fdc00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1fdc00
    int64_t v1; // bp-40, 0x1fdc00
    int64_t v2 = (int64_t)&v1; // 0x1fdc58
    int64_t v3 = *(int64_t *)(v2 + 40); // 0x1fdc86
    v1 = v3;
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x1fdc8a
    *v4 = v3;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x1fdc8d
    *v5 = v3;
    int64_t v6 = v2 + 24; // 0x1fdc9f
    int64_t v7 = *(int64_t *)v6; // 0x1fdc9f
    *v5 = v2;
    v1 = v3;
    int64_t * v8 = (int64_t *)(v2 + 16); // 0x1fdce9
    *v8 = v3;
    *v4 = v7;
    *(int64_t *)(v2 + 32) = v7;
    int64_t * v9 = (int64_t *)(v2 + 8); // 0x1fdd0b
    int64_t v10 = *v9; // 0x1fdd0b
    v1 = v10;
    *v4 = v10;
    v1 = *v8;
    *v9 = v6;
    return function_c57b8(a1, a2, a3, a4, a5, a6, 0x1edc09c1);
}

// Address range: 0x1fdd56 - 0x1fdd59
int64_t function_1fdd56(int64_t a1) {
    // 0x1fdd56
    int64_t result; // 0x1fdd56
    return result;
}

// Address range: 0x1fdd5e - 0x1fdd5f
int64_t function_1fdd5e(void) {
    // 0x1fdd5e
    int64_t result; // 0x1fdd5e
    return result;
}

// Address range: 0x1fddf8 - 0x1fddfb
int64_t function_1fddf8(void) {
    // 0x1fddf8
    int64_t result; // 0x1fddf8
    return result;
}

// Address range: 0x1fddfc - 0x1fddff
int64_t function_1fddfc(void) {
    // 0x1fddfc
    int64_t result; // 0x1fddfc
    return result;
}

// Address range: 0x41e61f - 0x41e643
int64_t function_41e61f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a4 + 0x65374d1f); // 0x41e61f
    int64_t v2; // 0x41e61f
    bool v3; // 0x41e61f
    int64_t * v4 = (int64_t *)(int64_t)(v1 + (int32_t)v2 + (int32_t)v3); // 0x41e633
    int64_t result = 0; // 0x41e63c
    if ((*(int32_t *)-0x583ea38029d8da3d + 0x30f6bcf & 0x431733b) != 0) {
        result = function_41e5f6();
    }
    // 0x41e63e
    __asm_out(20, (char)result);
    return result;
}

// Address range: 0x41e654 - 0x41e67b
int64_t function_41e654(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    uint64_t v2 = __asm_int3(); // 0x41e656
    int32_t * v3 = (int32_t *)(4 * a1 + a4); // 0x41e65b
    int32_t v4 = *v3; // 0x41e65b
    int64_t v5; // 0x41e654
    int32_t v6 = v5; // 0x41e65b
    int32_t v7 = v4 - v6; // 0x41e65b
    *v3 = v7;
    *(char *)a3 = (char)(v2 / 256);
    if (((v7 ^ v4) & (v4 ^ v6)) >= 0) {
        function_41e5e2();
    }
    // 0x41e662
    *(char *)a1 = (char)v5;
    int32_t * v8 = (int32_t *)(a2 + 114); // 0x41e669
    *v8 = *v8 | (int32_t)a4;
    if ((*(int32_t *)&v1 & (int32_t)a1) >= 0) {
        function_41e5fb();
    }
    // 0x41e679
    return function_41e61b();
}

// Address range: 0x41e67d - 0x41e67e
int64_t function_41e67d(void) {
    // 0x41e67d
    int64_t result; // 0x41e67d
    return result;
}

// Address range: 0x41e681 - 0x41e682
int64_t function_41e681(int64_t a1) {
    // 0x41e681
    int64_t result; // 0x41e681
    return result;
}

// Address range: 0x41e6ad - 0x41e6b2
int64_t function_41e6ad(void) {
    // 0x41e6ad
    return function_47c33465();
}

// Address range: 0x41e6b5 - 0x41e6b9
int64_t function_41e6b5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41e6b5
    int64_t result; // 0x41e6b5
    return result;
}

// Address range: 0x41e6e1 - 0x41e6e2
int64_t function_41e6e1(void) {
    // 0x41e6e1
    int64_t result; // 0x41e6e1
    return result;
}

// Address range: 0x41e704 - 0x41e742
int64_t function_41e704(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41e704
    int64_t v1; // 0x41e704
    uint32_t v2 = (int32_t)v1; // 0x41e704
    uint32_t v3 = (int32_t)v1 + v2; // 0x41e704
    bool v4; // 0x41e704
    uint32_t v5 = v3 + (int32_t)v4; // 0x41e704
    if (v5 != 0) {
        // 0x41e737
        *(int32_t *)v1 = (int32_t)a3;
        uint32_t v6 = (int32_t)a4 % 32; // 0x41e73a
        if (v6 != 0) {
            int64_t v7; // 0x41e704
            *(int32_t *)v7 = *(int32_t *)&v7 >> v6;
        }
        return function_2d28fae1();
    }
    bool v8 = v4 ? v5 <= v2 : v3 < v2; // 0x41e704
    int16_t v9 = *(int16_t *)0x636789ea; // 0x41e709
    *(int16_t *)0x636789ea = (int16_t)v8 + (int16_t)a4 + v9;
    if (a4 == 0) {
        function_41e6e1();
    }
    // 0x41e712
    __asm_int1();
    return function_3a6a031d();
}

// Address range: 0x41e76c - 0x41e781
int64_t function_41e76c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41e76c
    *(int32_t *)-0x57be0cf2 = *(int32_t *)-0x57be0cf2 - 0x8000b8f;
    int64_t v1; // 0x41e76c
    return v1 & 0xffffffff;
}

// Address range: 0x41e781 - 0x41e7f6
int64_t function_41e781(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x41e781
    int64_t v1; // 0x41e781
    int64_t result = __asm_wait() & -256 | v1 % 256; // 0x41e782
    char * v2 = (char *)(v1 + 48); // 0x41e783
    *v2 = *v2 + (char)v1;
    __asm_out_133(50, (int32_t)result);
    int32_t * v3 = (int32_t *)(v1 - 0x43a5630e); // 0x41e797
    *v3 = *v3 & (int32_t)v1;
    if ((char)v1 > -42) {
        // 0x41e7f5
        __asm_outsb((int16_t)a3, *(char *)0xc594e170);
        return result;
    }
    // 0x41e7a1
    *(char *)0xc594e170 = *(char *)0xc594e170 + (char)v1;
    return a1 & 0xffffffff;
}

// Address range: 0x41e8b3 - 0x41e8b7
int64_t function_41e8b3(int64_t a1) {
    // 0x41e8b3
    int64_t result; // 0x41e8b3
    return result;
}

// Address range: 0x41e8d8 - 0x41e8df
int64_t function_41e8d8(void) {
    // 0x41e8d8
    int64_t v1; // 0x41e8d8
    return function_41e905(v1, v1, v1, v1);
}

// Address range: 0x41e904 - 0x41e905
int64_t function_41e904(int64_t a1) {
    // 0x41e904
    int64_t result; // 0x41e904
    return result;
}

// Address range: 0x41e905 - 0x41e917
int64_t function_41e905(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41e905
    __readgsdword(a4 + 106);
    int64_t v1; // 0x41e905
    int64_t v2 = v1 ^ -0x42db92c0; // 0x41e909
    char v3 = v2; // 0x41e909
    unsigned char v4 = llvm_ctpop_i8(v3); // 0x41e909
    __asm_out(46, v3);
    return v2 & -0xff01 | 0x4000 * (int64_t)(v2 == 0) | 0x8000 * (int64_t)(v2 < 0) | 1024 * (int64_t)(v4 % 2 == 0) | 512;
}

// Address range: 0x41e979 - 0x41e97a
int64_t function_41e979(void) {
    // 0x41e979
    int64_t result; // 0x41e979
    return result;
}

// Address range: 0x41e992 - 0x41e999
int64_t function_41e992(int64_t a1) {
    // 0x41e992
    int64_t v1; // 0x41e992
    return v1 & 0xffffffff ^ 0xb3a04549;
}

// Address range: 0x41e999 - 0x41ea08
int64_t function_41e999(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x41e999
    int64_t v1; // 0x41e999
    int64_t v2 = (int64_t)*(char *)(v1 + 94); // 0x41e9a1
    int64_t v3 = 256 * v2; // 0x41e9a1
    uint32_t v4 = *(int32_t *)((v3 | a3 & -0xff01) + 0x71594e1e) | (int32_t)a5; // 0x41e9a4
    int64_t v5 = v4; // 0x41e9a4
    *(char *)a1 = *(char *)v5;
    if (v4 >= 1) {
        // 0x41e9af
        return (a4 + 74) % 256 | a4 & 0xffffff00;
    }
    // 0x41e9e8
    if (llvm_ctpop_i8((char)v4) % 2 == 0) {
        // 0x41ea05
        return a4 % 256 * v2 | a4 & 0xffff0000;
    }
    // 0x41e9f2
    bool v6; // 0x41e999
    __asm_outsd((int16_t)v3 | 74, *(int32_t *)((v6 ? -1 : 1) + v5));
    return __asm_int3();
}

// Address range: 0x41ea88 - 0x41ea8c
int64_t function_41ea88(void) {
    // 0x41ea88
    int64_t v1; // 0x41ea88
    return function_41ea99(v1, v1, v1, v1);
}

// Address range: 0x41ea8d - 0x41ea99
int64_t function_41ea8d(int64_t a1) {
    // 0x41ea8d
    return __asm_in((int16_t)a1);
}

// Address range: 0x41ea99 - 0x41eaa0
int64_t function_41ea99(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41ea99
    int64_t v1; // 0x41ea99
    return v1 & 0xf91710a3 | 0x6e8ef5c;
}

// Address range: 0x41eac0 - 0x41eac1
int64_t function_41eac0(void) {
    // 0x41eac0
    int64_t result; // 0x41eac0
    return result;
}

// Address range: 0x41eadf - 0x41eaeb
int64_t function_41eadf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41eadf
    int64_t result; // 0x41eadf
    __asm_outsd((int16_t)a3, (int32_t)result);
    *(char *)-0x58b282c8 = *(char *)-0x58b282c8 | (char)a4;
    return result;
}

// Address range: 0x41eb11 - 0x41eb3d
int64_t function_41eb11(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x41eb11
    int64_t v1; // 0x41eb11
    int64_t v2 = v1 & -0xff01 | 256 * a4 & 0xff00; // 0x41eb11
    int64_t v3 = v1 & 0xffffffff ^ 0x4d3fcc2a; // 0x41eb13
    char * v4 = (char *)(v2 - 0x799081c0); // 0x41eb19
    *v4 = *v4 - (char)(a3 / 256);
    int32_t * v5 = (int32_t *)(v2 - 0x6bbfb37a); // 0x41eb1f
    *v5 = *v5 | (int32_t)a3;
    unsigned char v6 = *(char *)0x794c1b23f0265eae; // 0x41eb34
    return v3 - (a3 & 0xff00) & 0xff00 | v3 & 0xffff0000 | (int64_t)v6;
}

// Address range: 0x41eb88 - 0x41eb8d
int64_t function_41eb88(void) {
    // 0x41eb88
    return function_77574b99();
}

// Address range: 0x41eba5 - 0x41ebaa
int64_t function_41eba5(void) {
    // 0x41eba5
    return function_71d95a67();
}
