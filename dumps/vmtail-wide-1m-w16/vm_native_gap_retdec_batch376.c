/*
 * Targeted RetDec C for native executable gap queue batch 376.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1d445a-0x1d465a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d465a-0x1d485a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d4a5a-0x1d4c5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x25e4c2-0x25e6c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25e6c2-0x25e8c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25e8c2-0x25eac2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25eac2-0x25ecc2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25ecc2-0x25eec2 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1d445a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d44ca(void);
int64_t function_1d450a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d4511(void);
int64_t function_1d452a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d4573(void);
int64_t function_1d457c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d45b5(int64_t a1);
int64_t function_1d45c9(void);
int64_t function_1d45f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1d46d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d46de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d46fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d475b(int64_t a1);
int64_t function_1d47be(int64_t a1, int64_t a2);
int64_t function_1d4810(int64_t a1);
int64_t function_1d4a5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d4b20(void);
int64_t function_1d4b35(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d4b59(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d4b67(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d4baf(void);
int64_t function_1d4bca(void);
int64_t function_1d4bf2(void);
int64_t function_1d4c28(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_25e4c2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_25e4f8(int64_t a1, int64_t a2);
int64_t function_25e55d(int64_t a1);
int64_t function_25e5a4(void);
int64_t function_25e5e6(int64_t a1);
int64_t function_25e5f0(int64_t a1);
int64_t function_25e5f9(void);
int64_t function_25e626(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_25e652(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25e664(void);
int64_t function_25e668(void);
int64_t function_25e6c4(int64_t a1);
int64_t function_25e73e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25e758(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25e7e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5);
int64_t function_25e812(void);
int64_t function_25e81e(void);
int64_t function_25e837(void);
int64_t function_25e872(int64_t a1, int64_t a2, int64_t a3);
int64_t function_25e91f(void);
int64_t function_25e9a3(int64_t a1);
int64_t function_25e9d0(void);
int64_t function_25e9d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25e9e3(void);
int64_t function_25e9e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25e9ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25ea17(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25ea26(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25ea4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25ea7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25ea8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25ead7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_25eaeb(void);
int64_t function_25eb1a(int64_t a1);
int64_t function_25eb9d(int64_t a1);
int64_t function_25ebff(int64_t a1);
int64_t function_25ec0d(void);
int64_t function_25ec0e(int64_t a1);
int64_t function_25ec2f(void);
int64_t function_25ec33(void);
int64_t function_25ec55(void);
int64_t function_25ec62(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_25ec7e(int64_t a1, int64_t a2);
int64_t function_25eca8(int64_t a1);
int64_t function_25eca9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_25ed1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25ed6d(void);
int64_t function_25ed80(int64_t a1);
int64_t function_25edb1(void);
int64_t function_25edf6(void);
int64_t function_25edfc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_25ee48(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25ee72(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_561f2eb5();
int64_t function_9609cbe();
int64_t function_ffffffff84dc3fb0();
int64_t function_ffffffff9e12ecd2();
int64_t function_ffffffffb472acc8();
int64_t function_ffffffffd83d503e();
int64_t unknown_11364397();
int64_t unknown_1185a54c();
int64_t unknown_13bf7bfd();
int64_t unknown_14a2897b();
int64_t unknown_2ce76acf();
int64_t unknown_35794414();
int64_t unknown_44de340a();
int64_t unknown_839cf86();
int64_t unknown_ffffffffa5047f86();
int64_t unknown_ffffffffb08c15cd();
int64_t unknown_ffffffffb4aa8576();
int64_t unknown_ffffffffbb0acfdc();
int64_t unknown_ffffffffd916c737();
int64_t unknown_ffffffffdaedb6be();
int64_t unknown_ffffffffdc170eec();
int64_t unknown_ffffffffeed11cd0();

// Address range: 0x1d445a - 0x1d447b
int64_t function_1d445a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1d445a
    int64_t v1; // 0x1d445a
    *(char *)a1 = (char)v1;
    bool v2; // 0x1d445a
    int64_t v3 = (v2 ? -1 : 1) + a1; // 0x1d445a
    int64_t v4 = __asm_int3(v3); // 0x1d445d
    *(int32_t *)v3 = __asm_insd((int16_t)a3);
    int64_t v5 = (v4 & 0xff00) + v4 & 0xff00 | v4 & -0xff01; // 0x1d4464
    char v6 = *(char *)v5; // 0x1d4466
    char v7 = *(char *)-0x37079991; // 0x1d4468
    *(char *)-0x37079991 = v7 + (char)((uint64_t)v1 / 256);
    __asm_out(31, (int32_t)(v5 & 0xffffff00 | (int64_t)(v6 + (char)v4)));
    int32_t * v8 = (int32_t *)(a3 - 0x1c2564b1); // 0x1d4471
    *v8 = -1 - *v8;
    return v3 & 0xffffffff;
}

// Address range: 0x1d44ca - 0x1d44cc
int64_t function_1d44ca(void) {
    // 0x1d44ca
    int64_t v1; // 0x1d44ca
    return function_1d452a(v1, v1, v1);
}

// Address range: 0x1d450a - 0x1d450d
int64_t function_1d450a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1d450a
    int64_t result; // 0x1d450a
    return result;
}

// Address range: 0x1d4511 - 0x1d4514
int64_t function_1d4511(void) {
    // 0x1d4511
    int64_t result; // 0x1d4511
    return result;
}

// Address range: 0x1d452a - 0x1d452f
int64_t function_1d452a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1d452a
    return (uint64_t)(a1 + 39) % 256 | a1 & 0xffffff00;
}

// Address range: 0x1d4573 - 0x1d4576
int64_t function_1d4573(void) {
    // 0x1d4573
    int64_t result; // 0x1d4573
    return result;
}

// Address range: 0x1d457c - 0x1d4592
int64_t function_1d457c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d457c
    int64_t v1; // 0x1d457c
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x1d4584
    uint64_t v4 = v3 == 0 ? v2 : (int64_t)((int32_t)v2 >> v3);
    *(int32_t *)0x431f2d8d = *(int32_t *)0x431f2d8d + (int32_t)a1;
    char v5 = v4 / 256 | v1; // 0x1d458c
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x1d458c
    *(char *)v1 = v5;
    return v4 & -0xff01 | 0x4000 * (int64_t)(v5 == 0) | 0x8000 * (int64_t)(v5 < 0) | 1024 * (int64_t)(v6 % 2 == 0) | 512;
}

// Address range: 0x1d45b5 - 0x1d45b8
int64_t function_1d45b5(int64_t a1) {
    // 0x1d45b5
    int64_t result; // 0x1d45b5
    return result;
}

// Address range: 0x1d45c9 - 0x1d45cd
int64_t function_1d45c9(void) {
    // 0x1d45c9
    int64_t result; // 0x1d45c9
    char * v1 = (char *)(result - 66); // 0x1d45c9
    *v1 = *v1 & (char)result;
    return result;
}

// Address range: 0x1d45f5 - 0x1d46d4
int64_t function_1d45f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint64_t v1 = a4 - 1; // 0x1d45f5
    if (v1 == 0) {
        // 0x1d45f7
        return function_561f2eb5();
    }
    bool v2; // 0x1d45f5
    if (true != !v2) {
        // 0x1d4634
        int64_t v3; // 0x1d45f5
        int64_t v4 = v3 - (v2 ? 0x80008001 : 0x80008000); // 0x1d4634
        *(int32_t *)a1 = (int32_t)v4;
        int32_t * v5 = (int32_t *)a4; // 0x1d463f
        *v5 = *v5 + (int32_t)a3;
        return (v4 + v1 / 256) % 256 | v4 & 0xffffff00;
    }
    // 0x1d46ae
    __asm_in_134(116);
    unknown_839cf86();
    unknown_ffffffffdaedb6be();
    unknown_ffffffffb08c15cd();
    int32_t result = __asm_in_134(-99); // 0x1d46ce
    int32_t * v6 = (int32_t *)(8 * a1 + 58 + (int64_t)*(int32_t *)a6); // 0x1d46d0
    *v6 = *v6 + (int32_t)v1;
    return result;
}

// Address range: 0x1d46d5 - 0x1d46de
int64_t function_1d46d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d46d5
    return unknown_ffffffffbb0acfdc(a1, a2, a3, a4);
}

// Address range: 0x1d46de - 0x1d46e8
int64_t function_1d46de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1d46de
    int64_t v1; // 0x1d46de
    *(int32_t *)a4 = 2 * (int32_t)v1;
    return __asm_int1();
}

// Address range: 0x1d46fb - 0x1d4700
int64_t function_1d46fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d46fb
    int64_t result; // 0x1d46fb
    *(int32_t *)a3 = (int32_t)(result | a1);
    return result;
}

// Address range: 0x1d475b - 0x1d4769
int64_t function_1d475b(int64_t a1) {
    char v1 = *(char *)-0x4a079c9d; // 0x1d475c
    int64_t result; // 0x1d475b
    *(char *)-0x4a079c9d = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x1d47be - 0x1d47df
int64_t function_1d47be(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0x31b98633); // 0x1d47be
    int64_t v2; // 0x1d47be
    *v1 = *v1 + (int32_t)v2;
    *(int32_t *)(a1 - 0x1d598d0d) = (int32_t)v2;
    int64_t v3 = unknown_ffffffffeed11cd0() + 0x4b1c95b3; // 0x1d47cf
    *(int32_t *)0x336efcef2ab001e8 = (int32_t)v3;
    return v3 & 0xffffffff;
}

// Address range: 0x1d4810 - 0x1d4815
int64_t function_1d4810(int64_t a1) {
    // 0x1d4810
    int64_t result; // 0x1d4810
    return result;
}

// Address range: 0x1d4a5a - 0x1d4a89
int64_t function_1d4a5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x17fec2a6); // 0x1d4a5a
    int64_t v2; // 0x1d4a5a
    *v1 = *v1 + (int32_t)v2;
    bool v3; // 0x1d4a5a
    int64_t v4 = v3 ? -1 : 1; // 0x1d4a65
    unknown_14a2897b(v4 + a1, 2 * v4 + a2);
    return unknown_ffffffffa5047f86();
}

// Address range: 0x1d4b20 - 0x1d4b23
int64_t function_1d4b20(void) {
    // 0x1d4b20
    int64_t result; // 0x1d4b20
    return result;
}

// Address range: 0x1d4b35 - 0x1d4b40
int64_t function_1d4b35(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d4b35
    int64_t v1; // 0x1d4b35
    int64_t result = v1;
    int32_t * v2 = (int32_t *)(a4 + 0x5e0bba0e); // 0x1d4b35
    *v2 = *v2 + (int32_t)a4;
    *(int32_t *)result = (int32_t)result;
    return result;
}

// Address range: 0x1d4b59 - 0x1d4b67
int64_t function_1d4b59(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1d4b59
    int64_t v1; // 0x1d4b59
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 - 0xa46fe18); // 0x1d4b5d
    *v3 = *v3 | (int32_t)v2;
    *(int32_t *)(v1 & 0xffffffff) = (int32_t)a1;
    *(char *)a3 = (char)(v2 / 256);
    return a1 & 0xffffffff;
}

// Address range: 0x1d4b67 - 0x1d4b7c
int64_t function_1d4b67(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1d4b67
    __asm_in_134(71);
    int32_t * v1 = (int32_t *)(4 * a1 - 0x6ec256e4 + a3); // 0x1d4b69
    *v1 = *v1 + (int32_t)a3;
    unknown_ffffffffb4aa8576();
    int32_t * v2 = (int32_t *)(a1 - 53); // 0x1d4b78
    *v2 = *v2 | (int32_t)a1;
    int64_t v3; // 0x1d4b67
    return (int64_t)&v3;
}

// Address range: 0x1d4baf - 0x1d4bb0
int64_t function_1d4baf(void) {
    // 0x1d4baf
    int64_t result; // 0x1d4baf
    return result;
}

// Address range: 0x1d4bca - 0x1d4bcf
int64_t function_1d4bca(void) {
    // 0x1d4bca
    return function_ffffffffb472acc8();
}

// Address range: 0x1d4bf2 - 0x1d4bf3
int64_t function_1d4bf2(void) {
    // 0x1d4bf2
    int64_t result; // 0x1d4bf2
    return result;
}

// Address range: 0x1d4c28 - 0x1d4c53
int64_t function_1d4c28(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1d4c28
    int64_t v1; // 0x1d4c28
    int64_t v2 = v1;
    int64_t v3 = a4;
    int64_t v4 = a3;
    int64_t v5; // 0x1d4c28
    bool v6; // 0x1d4c28
    if (v6) {
        v5 = function_1d4baf();
    }
    int64_t result = (v2 | a4 / 256) % 256 | v2 & 0xffffff00; // 0x1d4c2d
    *(int32_t *)(v5 & 0xffffffff) = (int32_t)result + (int32_t)a3;
    unsigned char v7 = *(char *)-0x6fed31c7; // 0x1d4c31
    unsigned char v8 = v7 + (char)a1; // 0x1d4c31
    *(char *)-0x6fed31c7 = v8;
    if (v8 == 0) {
        // 0x1d4ca6
        return result;
    }
    unsigned char v9 = *(char *)&v3; // 0x1d4c44
    unsigned char v10 = v9 + (char)(v4 / 256); // 0x1d4c44
    unsigned char v11 = v10 + (char)(v8 < v7); // 0x1d4c44
    *(char *)v3 = v11;
    int64_t result2 = result; // 0x1d4c46
    if (v11 == 0 || (v8 < v7 ? v11 <= v9 : v10 < v9)) {
        result2 = function_1d4bf2();
    }
    // 0x1d4c48
    *(char *)0x26eb884f = *(char *)0x26eb884f + (char)(v5 / 256);
    *(int32_t *)v4 = *(int32_t *)&v4 & (int32_t)a1;
    return result2;
}

// Address range: 0x25e4c2 - 0x25e4d7
int64_t function_25e4c2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x25e4c2
    __asm_in(66);
    int16_t v1 = a3; // 0x25e4c8
    *(int32_t *)a1 = __asm_insd(v1);
    unknown_2ce76acf();
    __asm_in_133(v1);
    *(char *)0x7d27cd9e = *(char *)0x7d27cd9e - 51;
    return __asm_hlt(a1);
}

// Address range: 0x25e4f8 - 0x25e4fa
int64_t function_25e4f8(int64_t a1, int64_t a2) {
    // 0x25e4f8
    return a2 & 0xffffffff;
}

// Address range: 0x25e55d - 0x25e55e
int64_t function_25e55d(int64_t a1) {
    // 0x25e55d
    int64_t result; // 0x25e55d
    return result;
}

// Address range: 0x25e5a4 - 0x25e5a5
int64_t function_25e5a4(void) {
    // 0x25e5a4
    int64_t result; // 0x25e5a4
    return result;
}

// Address range: 0x25e5e6 - 0x25e5ec
int64_t function_25e5e6(int64_t a1) {
    // 0x25e5e6
    return unknown_ffffffffdc170eec(a1);
}

// Address range: 0x25e5f0 - 0x25e5f9
int64_t function_25e5f0(int64_t a1) {
    // 0x25e5f0
    int64_t result; // 0x25e5f0
    return result;
}

// Address range: 0x25e5f9 - 0x25e5fc
int64_t function_25e5f9(void) {
    // 0x25e5f9
    return function_25e5a4();
}

// Address range: 0x25e626 - 0x25e63a
int64_t function_25e626(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x799ac63a); // 0x25e626
    *v1 = *v1 - 1;
    int64_t v2; // 0x25e626
    char * v3 = (char *)(v2 - 106); // 0x25e62c
    *v3 = *v3 + (char)(a4 / 256);
    return unknown_ffffffffd916c737();
}

// Address range: 0x25e652 - 0x25e658
int64_t function_25e652(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25e652
    int64_t v1; // 0x25e652
    uint64_t v2 = v1;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v3; // 0x25e652
    return v2 % 256 * (int64_t)*(char *)&v3 | v2 & -0x10000;
}

// Address range: 0x25e664 - 0x25e665
int64_t function_25e664(void) {
    // 0x25e664
    int64_t result; // 0x25e664
    return result;
}

// Address range: 0x25e668 - 0x25e66a
int64_t function_25e668(void) {
    // 0x25e668
    return function_25e664();
}

// Address range: 0x25e6c4 - 0x25e6c8
int64_t function_25e6c4(int64_t a1) {
    // 0x25e6c4
    int64_t result; // 0x25e6c4
    return result;
}

// Address range: 0x25e73e - 0x25e755
int64_t function_25e73e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x25e73e
    int64_t v1; // 0x25e73e
    int32_t * v2 = (int32_t *)(v1 - 0x13b93f2); // 0x25e73e
    *v2 = *v2 + (int32_t)a1;
    *(char *)a1 = (char)v1;
    bool v3; // 0x25e73e
    return unknown_1185a54c((v3 ? -1 : 1) + a1);
}

// Address range: 0x25e758 - 0x25e787
int64_t function_25e758(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x25e758
    bool v1; // 0x25e758
    int64_t v2 = (v1 ? -1 : 1) + a1; // 0x25e762
    int64_t v3 = __asm_hlt(v2); // 0x25e763
    *(char *)-0x17011e9a = *(char *)-0x17011e9a | (char)v3;
    int64_t v4; // 0x25e758
    int32_t * v5 = (int32_t *)(a4 + 71 + v4); // 0x25e76a
    *v5 = *v5 + (int32_t)v4;
    int32_t * v6 = (int32_t *)v3; // 0x25e76e
    *v6 = *v6 + (int32_t)a4;
    int64_t v7 = v3 + 0xe8586d94; // 0x25e770
    int32_t * v8 = (int32_t *)(4 * a4 + 35 + v4); // 0x25e775
    *v8 = *v8 + (int32_t)v2;
    int32_t * v9 = (int32_t *)(a3 + 0x1e8440a); // 0x25e779
    int32_t v10 = *v9; // 0x25e779
    int32_t v11 = v4; // 0x25e779
    int32_t v12 = v10 + v11; // 0x25e779
    *v9 = v12;
    int64_t v13; // 0x25e758
    *(int32_t *)v2 = *(int32_t *)&v13;
    if (v12 < 0 == ((v12 ^ v10) & (v12 ^ v11)) < 0 == (v12 != 0)) {
        // 0x25e7c2
        return v7 & 0xffffffff;
    }
    // 0x25e782
    return v7 & 0xffffff16;
}

// Address range: 0x25e7e0 - 0x25e811
int64_t function_25e7e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5) {
    // 0x25e7e0
    int64_t v1; // 0x25e7e0
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2;
    char * v3 = (char *)(v2 - 24); // 0x25e7e6
    bool v4; // 0x25e7e0
    *v3 = (char)v4 - (char)v2 + *v3;
    int32_t * v5 = (int32_t *)(a2 - 0x48ff6c99); // 0x25e7e9
    *v5 = *v5 + (int32_t)a3;
    float80_t v6; // 0x25e7e0
    *(int16_t *)(unknown_13bf7bfd() - 127) = (int16_t)v6;
    unknown_44de340a();
    return function_ffffffffd83d503e((v4 ? -1 : 1) + a1);
}

// Address range: 0x25e812 - 0x25e813
int64_t function_25e812(void) {
    // 0x25e812
    int64_t result; // 0x25e812
    return result;
}

// Address range: 0x25e81e - 0x25e821
int64_t function_25e81e(void) {
    // 0x25e81e
    int64_t v1; // 0x25e81e
    return (int64_t)&v1;
}

// Address range: 0x25e837 - 0x25e839
int64_t function_25e837(void) {
    // 0x25e837
    return function_25e812();
}

// Address range: 0x25e872 - 0x25e87b
int64_t function_25e872(int64_t a1, int64_t a2, int64_t a3) {
    // 0x25e872
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x25e872
    return v1 & -79;
}

// Address range: 0x25e91f - 0x25e922
int64_t function_25e91f(void) {
    // 0x25e91f
    int64_t result; // 0x25e91f
    return result;
}

// Address range: 0x25e9a3 - 0x25e9a6
int64_t function_25e9a3(int64_t a1) {
    // 0x25e9a3
    int64_t result; // 0x25e9a3
    return result;
}

// Address range: 0x25e9d0 - 0x25e9d1
int64_t function_25e9d0(void) {
    // 0x25e9d0
    int64_t result; // 0x25e9d0
    return result;
}

// Address range: 0x25e9d8 - 0x25e9e3
int64_t function_25e9d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25e9d8
    int64_t result; // 0x25e9d8
    return result;
}

// Address range: 0x25e9e3 - 0x25e9e6
int64_t function_25e9e3(void) {
    // 0x25e9e3
    int64_t result; // 0x25e9e3
    return result;
}

// Address range: 0x25e9e6 - 0x25e9ee
int64_t function_25e9e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x25e9e6
    int64_t result; // 0x25e9e6
    bool v1; // 0x25e9e6
    if (v1) {
        result = function_25e9d0();
    }
    // 0x25e9e8
    return result;
}

// Address range: 0x25e9ee - 0x25ea02
int64_t function_25e9ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25e9ee
    int64_t v1; // 0x25e9ee
    return v1 + 0x4590ff03 + (int64_t)(-1 - (char)a3 < (char)((uint64_t)v1 / 256)) & 0xffffffff;
}

// Address range: 0x25ea17 - 0x25ea22
int64_t function_25ea17(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25ea17
    int64_t result; // 0x25ea17
    int32_t * v1 = (int32_t *)(result + 6); // 0x25ea17
    bool v2; // 0x25ea17
    *v1 = *v1 - (v2 ? 0x39a0709 : 0x39a0708);
    return result;
}

// Address range: 0x25ea26 - 0x25ea31
int64_t function_25ea26(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x25ea26
    int64_t v1; // 0x25ea26
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x25ea4f - 0x25ea53
int64_t function_25ea4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25ea4f
    int64_t result; // 0x25ea4f
    return result;
}

// Address range: 0x25ea7c - 0x25ea81
int64_t function_25ea7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x25ea7c
    int64_t v1; // 0x25ea7c
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x25ea8f - 0x25ea98
int64_t function_25ea8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 0x689e3084); // 0x25ea8f
    int64_t result; // 0x25ea8f
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x25ead7 - 0x25eaea
int64_t function_25ead7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x25ead7
    int64_t v1; // 0x25ead7
    int32_t * v2 = (int32_t *)(8 * a4 + 97 + (v1 & -256 | 61)); // 0x25eadb
    *v2 = *v2 + (int32_t)a1;
    char * v3 = (char *)(v1 - 0x1671c73b); // 0x25eadf
    *v3 = *v3 - (char)(a4 / 256);
    return function_ffffffff9e12ecd2();
}

// Address range: 0x25eaeb - 0x25eaf0
int64_t function_25eaeb(void) {
    // 0x25eaeb
    return function_ffffffff84dc3fb0();
}

// Address range: 0x25eb1a - 0x25eb1d
int64_t function_25eb1a(int64_t a1) {
    // 0x25eb1a
    int64_t result; // 0x25eb1a
    return result;
}

// Address range: 0x25eb9d - 0x25eba8
int64_t function_25eb9d(int64_t a1) {
    // 0x25eb9d
    *(int32_t *)0x5227d3a4 = *(int32_t *)0x5227d3a4 + (int32_t)a1;
    return function_9609cbe();
}

// Address range: 0x25ebff - 0x25ec02
int64_t function_25ebff(int64_t a1) {
    // 0x25ebff
    int64_t v1; // 0x25ebff
    return v1 & 0xffffffff;
}

// Address range: 0x25ec0d - 0x25ec0e
int64_t function_25ec0d(void) {
    // 0x25ec0d
    int64_t result; // 0x25ec0d
    return result;
}

// Address range: 0x25ec0e - 0x25ec15
int64_t function_25ec0e(int64_t a1) {
    // 0x25ec0e
    return unknown_35794414(a1);
}

// Address range: 0x25ec2f - 0x25ec32
int64_t function_25ec2f(void) {
    // 0x25ec2f
    int64_t result; // 0x25ec2f
    return result;
}

// Address range: 0x25ec33 - 0x25ec36
int64_t function_25ec33(void) {
    // 0x25ec33
    int64_t result; // 0x25ec33
    return result;
}

// Address range: 0x25ec55 - 0x25ec56
int64_t function_25ec55(void) {
    // 0x25ec55
    int64_t result; // 0x25ec55
    return result;
}

// Address range: 0x25ec62 - 0x25ec6a
int64_t function_25ec62(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x25ec62
    int64_t v1; // 0x25ec62
    int64_t v2 = v1;
    int64_t v3 = (v2 + a4 / 256) % 256 | v2 & -256; // 0x25ec63
    int32_t * v4 = (int32_t *)v3; // 0x25ec65
    *v4 = *v4 + (int32_t)v3;
    return function_25ec0d();
}

// Address range: 0x25ec7e - 0x25ec82
int64_t function_25ec7e(int64_t a1, int64_t a2) {
    // 0x25ec7e
    int64_t result; // 0x25ec7e
    return result;
}

// Address range: 0x25eca8 - 0x25eca9
int64_t function_25eca8(int64_t a1) {
    // 0x25eca8
    int64_t result; // 0x25eca8
    return result;
}

// Address range: 0x25eca9 - 0x25ecbe
int64_t function_25eca9(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2;
    int64_t v2; // 0x25eca9
    int64_t v3 = v2 & -256; // 0x25ecaa
    bool v4; // 0x25eca9
    if (v4 || v4) {
        v3 = function_25ec55();
    }
    // 0x25ecac
    *(char *)0x69520220 = 2 * *(char *)0x69520220;
    return v3 & -256 | (int64_t)*(char *)&v1;
}

// Address range: 0x25ed1b - 0x25ed26
int64_t function_25ed1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 - 0x10fc55f); // 0x25ed1b
    int64_t v2; // 0x25ed1b
    *v1 = *v1 + (int32_t)v2;
    uint32_t v3 = (int32_t)a4 % 32; // 0x25ed21
    if (v3 != 0) {
        int64_t v4; // 0x25ed1b
        uint32_t v5 = *(int32_t *)&v4; // 0x25ed21
        *(int32_t *)v4 = v5 >> 32 - v3 | v5 << v3;
    }
    return __asm_in_134(35);
}

// Address range: 0x25ed6d - 0x25ed6e
int64_t function_25ed6d(void) {
    // 0x25ed6d
    int64_t result; // 0x25ed6d
    return result;
}

// Address range: 0x25ed80 - 0x25ed8c
int64_t function_25ed80(int64_t a1) {
    // 0x25ed80
    int64_t v1; // 0x25ed80
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return __asm_iretd();
}

// Address range: 0x25edb1 - 0x25edb5
int64_t function_25edb1(void) {
    // 0x25edb1
    return function_25ed6d();
}

// Address range: 0x25edf6 - 0x25edf7
int64_t function_25edf6(void) {
    // 0x25edf6
    int64_t result; // 0x25edf6
    return result;
}

// Address range: 0x25edfc - 0x25ee01
int64_t function_25edfc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x25edfc
    int64_t result; // 0x25edfc
    __asm_out_136((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x25ee48 - 0x25ee5e
int64_t function_25ee48(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 0x13d00cb); // 0x25ee53
    *v1 = -1 - *v1;
    int64_t v2; // 0x25ee48
    return v2 & -104;
}

// Address range: 0x25ee72 - 0x25eea8
int64_t function_25ee72(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25ee72
    int64_t result; // 0x25ee72
    bool v1; // 0x25ee72
    if (v1 || v1) {
        result = function_25edf6();
    }
    // 0x25ee74
    *(char *)0x388d7d7eae26d843 = (char)result;
    if (v1 || false) {
        // 0x25eec8
        return result;
    }
    uint32_t v2 = (int32_t)a4 % 32; // 0x25ee7f
    if (v2 != 0) {
        int32_t * v3 = (int32_t *)(2 * result); // 0x25ee7f
        uint32_t v4 = *v3; // 0x25ee7f
        *v3 = v4 >> v2 | v4 << 32 - v2;
    }
    int32_t * v5 = (int32_t *)(a2 + 9); // 0x25ee87
    int64_t v6; // 0x25ee72
    *v5 = *v5 + (int32_t)v6;
    int64_t result2 = unknown_11364397(); // 0x25ee91
    int32_t * v7 = (int32_t *)(a1 + 109); // 0x25ee9f
    *v7 = *v7 + (int32_t)v6;
    return result2;
}
