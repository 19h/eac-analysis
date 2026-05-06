/*
 * Targeted RetDec C for native executable gap queue batch 378.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xd3dc7-0xd3fc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd3fc7-0xd41c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd41c7-0xd43c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd43c7-0xd45c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd45c7-0xd47c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2316b6-0x2318b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2318b6-0x231ab6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x231ab6-0x231cb6 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_2316b6(void);
int64_t function_2316da(void);
int64_t function_231765(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2317ad(void);
int64_t function_2317cc(int64_t a1);
int64_t function_231804(int64_t a1, int64_t a2);
int64_t function_23180b(void);
int64_t function_231884(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_231a0d(int64_t a1);
int64_t function_231a1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_231a64(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_231a92(int64_t a1, int64_t a2, int64_t a3);
int64_t function_231b3f(void);
int64_t function_231b50(void);
int64_t function_231b64(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_231bbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_231c18(void);
int64_t function_231c67(void);
int64_t function_231c68(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_231c6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_231c75(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a33dc83();
int64_t function_3abe4875();
int64_t function_7aa87aea();
int64_t function_cc59c();
int64_t function_d3dc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, int64_t a8);
int64_t function_d3e3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_d3fa3(void);
int64_t function_d4057(void);
int64_t function_d40cc(void);
int64_t function_d40f3(int64_t a1, int64_t a2);
int64_t function_d4202(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d422d(void);
int64_t function_d4287(void);
int64_t function_d42a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_d42ca(void);
int64_t function_d42d1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d434b(void);
int64_t function_d4352(void);
int64_t function_d43ac(void);
int64_t function_d4407(int64_t a1);
int64_t function_d446b(void);
int64_t function_d4478(void);
int64_t function_d4486(int64_t a1);
int64_t function_d4545(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_d4566(void);
int64_t function_d45c2(void);
int64_t function_d45ca(int64_t a1);
int64_t function_d462e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d4636(uint64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_d46f1(void);
int64_t function_d4708(int64_t a1);
int64_t function_ffffffff80ba550b();
int64_t function_ffffffffab0d88e8();
int64_t function_ffffffffbdc84567();
int64_t unknown_10851a3c();
int64_t unknown_1a1d3ad8();
int64_t unknown_2a2df11d();
int64_t unknown_2d659d58();
int64_t unknown_3a297221();
int64_t unknown_614de8e();
int64_t unknown_79acf42e();
int64_t unknown_ffffffff87181dd0();
int64_t unknown_ffffffff8ec5ce99();
int64_t unknown_ffffffffb42a4cc7();
int64_t unknown_ffffffffb6f4a48c();
int64_t unknown_ffffffffbd07f014();
int64_t unknown_ffffffffe7443aa9();
int64_t unknown_fffffffff19f09b8();

// Address range: 0xd3dc7 - 0xd3e3e
int64_t function_d3dc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, int64_t a8) {
    // 0xd3dc7
    int64_t v1; // 0xd3dc7
    int64_t v2 = v1;
    int32_t v3 = a7;
    *(char *)v2 = 2 * (char)v2;
    int64_t v4; // 0xd3dc7
    int64_t v5 = v4;
    *(char *)v5 = *(char *)&v4 + (char)v5;
    int64_t v6 = v4;
    *(char *)v6 = *(char *)&v4 + (char)v6;
    char * v7 = (char *)(v4 + 1); // 0xd3dcd
    *v7 = *v7 + (char)a4;
    float80_t v8; // 0xd3dc7
    *(float64_t *)(v1 + 72) = (float64_t)v8;
    int32_t v9 = (int32_t)(int64_t)&v3 + 16; // 0xd3e22
    v3 = v9;
    int64_t v10 = v9; // 0xd3e26
    int64_t v11 = *(int64_t *)v10; // 0xd3e2a
    *(int64_t *)(v10 - 8) = v11;
    *(int64_t *)(v10 - 16) = v11;
    return function_cc59c();
}

// Address range: 0xd3e3e - 0xd3fa3
int64_t function_d3e3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xd3e3e
    int64_t v1; // bp-40, 0xd3e3e
    int64_t v2 = (int64_t)&v1; // 0xd3ea4
    int64_t * v3 = (int64_t *)(v2 - 8); // 0xd3ec3
    *v3 = v2;
    int64_t * v4 = (int64_t *)(v2 - 16); // 0xd3ec5
    *v4 = v1;
    int64_t v5 = *(int64_t *)(v2 + 40); // 0xd3edb
    v1 = v5;
    *v3 = v5;
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v2 + 24); // 0xd3ef1
    v1 = a2;
    *v3 = v5;
    *v4 = a6;
    *v6 = *v3;
    v1 = 0x49090a05;
    *v3 = *v6;
    *(int64_t *)(v2 + 32) = v1;
    int64_t * v7 = (int64_t *)(v2 + 8); // 0xd3f73
    int64_t v8 = *v7; // 0xd3f73
    v1 = v8;
    *v3 = v8;
    int64_t v9 = *(int64_t *)(v2 + 16); // 0xd3f8c
    *v7 = v9;
    v1 = v9;
    return function_cc59c();
}

// Address range: 0xd3fa3 - 0xd3fa8
int64_t function_d3fa3(void) {
    // 0xd3fa3
    int64_t result; // 0xd3fa3
    return result;
}

// Address range: 0xd4057 - 0xd405c
int64_t function_d4057(void) {
    // 0xd4057
    return function_7aa87aea();
}

// Address range: 0xd40cc - 0xd40cf
int64_t function_d40cc(void) {
    // 0xd40cc
    int64_t result; // 0xd40cc
    return result;
}

// Address range: 0xd40f3 - 0xd40fd
int64_t function_d40f3(int64_t a1, int64_t a2) {
    // 0xd40f3
    int64_t v1; // 0xd40f3
    char * v2 = (char *)(a2 + 9 + 4 * v1); // 0xd40f3
    *v2 = *v2 | (char)v1;
    bool v3; // 0xd40f3
    int64_t v4 = v3 ? -1 : 1; // 0xd40f7
    return function_3abe4875(v4 + a1, v4 + a2);
}

// Address range: 0xd4202 - 0xd4215
int64_t function_d4202(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd4202
    int64_t v1; // 0xd4202
    return v1 + 0x12a60224 & 0xffffffff;
}

// Address range: 0xd422d - 0xd4232
int64_t function_d422d(void) {
    // 0xd422d
    return function_ffffffffab0d88e8();
}

// Address range: 0xd4287 - 0xd4288
int64_t function_d4287(void) {
    // 0xd4287
    int64_t result; // 0xd4287
    return result;
}

// Address range: 0xd42a0 - 0xd42c7
int64_t function_d42a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a2 - 78); // 0xd42a0
    *v1 = 2 * *v1;
    if ((unknown_ffffffffe7443aa9() & 0x40000000) == 0) {
        function_d4287();
    }
    // 0xd42b1
    unknown_fffffffff19f09b8();
    return unknown_ffffffffb42a4cc7();
}

// Address range: 0xd42ca - 0xd42cd
int64_t function_d42ca(void) {
    // 0xd42ca
    int64_t result; // 0xd42ca
    return result;
}

// Address range: 0xd42d1 - 0xd42da
int64_t function_d42d1(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd42d1
    int64_t v1; // 0xd42d1
    uint64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)a3;
    char * v2 = (char *)(a2 - 0x3c9e9efc); // 0xd42d3
    *v2 = *v2 | (char)(result / 256);
    return result;
}

// Address range: 0xd434b - 0xd434f
int64_t function_d434b(void) {
    // 0xd434b
    int64_t result; // 0xd434b
    return result;
}

// Address range: 0xd4352 - 0xd435b
int64_t function_d4352(void) {
    // 0xd4352
    return unknown_2d659d58();
}

// Address range: 0xd43ac - 0xd43af
int64_t function_d43ac(void) {
    // 0xd43ac
    int64_t result; // 0xd43ac
    return result;
}

// Address range: 0xd4407 - 0xd4408
int64_t function_d4407(int64_t a1) {
    // 0xd4407
    int64_t result; // 0xd4407
    return result;
}

// Address range: 0xd446b - 0xd446c
int64_t function_d446b(void) {
    // 0xd446b
    int64_t result; // 0xd446b
    return result;
}

// Address range: 0xd4478 - 0xd447a
int64_t function_d4478(void) {
    // 0xd4478
    return function_d446b();
}

// Address range: 0xd4486 - 0xd448e
int64_t function_d4486(int64_t a1) {
    // 0xd4486
    int64_t v1; // 0xd4486
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a1;
    return function_3a33dc83();
}

// Address range: 0xd4545 - 0xd4556
int64_t function_d4545(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xd4545
    int64_t v1; // 0xd4545
    int32_t * v2 = (int32_t *)(v1 + 0x7817079e); // 0xd4547
    *v2 = *v2 + (int32_t)a4;
    int64_t v3; // 0xd4545
    *(int32_t *)a3 = *(int32_t *)&v3 ^ (int32_t)a2;
    return __asm_iretd((int32_t)v1 + (int32_t)a1);
}

// Address range: 0xd4566 - 0xd456f
int64_t function_d4566(void) {
    // 0xd4566
    int64_t v1; // 0xd4566
    int64_t v2 = v1;
    char v3 = *(char *)-0x30df2091; // 0xd4568
    *(char *)-0x30df2091 = v3 + (char)((uint64_t)v1 / 256);
    return 2 * v2 & 254 | v2 & -256;
}

// Address range: 0xd45c2 - 0xd45c5
int64_t function_d45c2(void) {
    // 0xd45c2
    int64_t result; // 0xd45c2
    return result;
}

// Address range: 0xd45ca - 0xd45d2
int64_t function_d45ca(int64_t a1) {
    // 0xd45ca
    return unknown_ffffffff87181dd0(a1);
}

// Address range: 0xd462e - 0xd4636
int64_t function_d462e(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd462e
    int64_t v1; // 0xd462e
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a3;
    __asm_wait(a1, a2, a3);
    return function_ffffffff80ba550b();
}

// Address range: 0xd4636 - 0xd46e3
int64_t function_d4636(uint64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = a4;
    int64_t v3 = unknown_10851a3c(); // 0xd4636
    int64_t v4; // 0xd4636
    uint32_t v5 = (int32_t)(v4 & 0xff00 | a3); // 0xd4642
    uint32_t v6 = (int32_t)a4; // 0xd4642
    uint32_t v7 = v5 + v6; // 0xd4642
    unsigned char v8 = llvm_ctpop_i8((char)v7); // 0xd4642
    if (v8 % 2 != 0) {
        // 0xd46ab
        return (v3 + 152) % 256 | v3 & -256;
    }
    int64_t v9 = v7; // 0xd4642
    int64_t v10 = __asm_sti(); // 0xd4646
    bool v11; // 0xd4636
    v2 = 0x4000 * (int64_t)v11 | (int64_t)(v7 < v5) | 64 * (int64_t)(v7 == 0) | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v5 % 16 + v6 % 16 > 15) | 1024 * (int64_t)v11 | 2048 * (int64_t)(((v7 ^ v5) & (v7 ^ v6)) < 0) | 512 * (int64_t)v11 | 4 * (int64_t)(v8 % 2 == 0) | 256 * (int64_t)v11 | 2;
    int32_t * v12 = (int32_t *)(v9 - 115); // 0xd46b8
    uint32_t v13 = *v12; // 0xd46b8
    *v12 = v13 / 16 | 0x10000000 * v13;
    *(char *)(v9 - 0x176272d5) = (char)v10;
    int64_t v14; // 0xd4636
    *(int32_t *)v14 = *(int32_t *)&v14 + (int32_t)v1;
    uint64_t v15 = a4 / 256; // 0xd46c7
    int64_t v16 = a1 & 0xffffffff; // 0xd46cf
    char v17 = *(char *)&v1; // 0xd46d0
    int64_t v18 = unknown_1a1d3ad8(v16); // 0xd46d2
    *(int32_t *)v16 = (int32_t)v18;
    int32_t * v19 = (int32_t *)((a4 & -256 | (int64_t)((char)((char)(a1 / 256) < (char)v15) + (char)a4 - v17)) - 14); // 0xd46e0
    *v19 = *v19 + (int32_t)(int64_t)&v2;
    return (v18 + v15) % 256 | v18 & -256;
}

// Address range: 0xd46f1 - 0xd46f4
int64_t function_d46f1(void) {
    // 0xd46f1
    int64_t result; // 0xd46f1
    return result;
}

// Address range: 0xd4708 - 0xd4718
int64_t function_d4708(int64_t a1) {
    // 0xd4708
    unknown_ffffffffbd07f014(a1);
    return function_ffffffffbdc84567();
}

// Address range: 0x2316b6 - 0x2316bb
int64_t function_2316b6(void) {
    // 0x2316b6
    int64_t result; // 0x2316b6
    return result;
}

// Address range: 0x2316da - 0x2316df
int64_t function_2316da(void) {
    // 0x2316da
    int64_t result; // 0x2316da
    return result;
}

// Address range: 0x231765 - 0x231768
int64_t function_231765(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x231765
    int64_t result; // 0x231765
    return result;
}

// Address range: 0x2317ad - 0x2317ae
int64_t function_2317ad(void) {
    // 0x2317ad
    int64_t result; // 0x2317ad
    return result;
}

// Address range: 0x2317cc - 0x2317de
int64_t function_2317cc(int64_t a1) {
    // 0x2317cc
    int64_t v1; // 0x2317cc
    int64_t v2 = v1;
    return (v2 + 134) % 256 | v2 & -256;
}

// Address range: 0x231804 - 0x23180b
int64_t function_231804(int64_t a1, int64_t a2) {
    // 0x231804
    int64_t v1; // 0x231804
    char * v2 = (char *)(a2 + 101 + v1 & 0xffffffff); // 0x231804
    *v2 = *v2 + 1;
    return function_231884(a1, a2, v1, v1);
}

// Address range: 0x23180b - 0x23180e
int64_t function_23180b(void) {
    // 0x23180b
    int64_t result; // 0x23180b
    return result;
}

// Address range: 0x231884 - 0x231922
int64_t function_231884(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x231884
    int64_t v1; // 0x231884
    uint64_t v2 = v1;
    bool v3; // 0x231884
    char v4 = (char)v1 - (v3 ? -9 : -10); // 0x231884
    if (llvm_ctpop_i8(v4) % 2 == 0) {
        unsigned char v5 = (char)a3;
        *(char *)0x1e80c475306f482 = v4;
        unsigned char v6 = *(char *)(v2 + 0x13d01e8); // 0x231906
        unsigned char v7 = (char)a4 + v5; // 0x23190e
        unsigned char v8 = v7 + (char)(v6 > (char)(v2 / 256)); // 0x23190e
        bool v9 = v6 > (char)(v2 / 256) ? v8 <= v5 : v7 < v5; // 0x23190e
        *(char *)(a3 & 0xffffffff) = v8;
        unknown_ffffffffb6f4a48c();
        int64_t result = unknown_2a2df11d(); // 0x231917
        int32_t * v10 = (int32_t *)((v2 & 0xffffffff) + 0x1e809cd); // 0x23191c
        *v10 = *v10 - (int32_t)a1 + (int32_t)v9;
        return result;
    }
    int64_t v11 = unknown_614de8e(); // 0x231888
    char * v12 = (char *)(v11 + 0x22013d00); // 0x23188d
    *v12 = *v12 + (char)v11;
    unknown_ffffffff8ec5ce99();
    int64_t v13 = __asm_wait((int64_t)&g2, (int64_t)&g2, (int64_t)&g2); // 0x2318a1
    uint32_t v14 = (int32_t)a4 % 32; // 0x2318af
    if (v14 != 0) {
        *(int32_t *)0x375d301b = *(int32_t *)0x375d301b >> v14;
    }
    int64_t v15 = v13 & 0xffffffff; // 0x2318b5
    *(char *)-0x437d433c = *(char *)-0x437d433c + (char)(v2 / 256);
    char * v16 = (char *)v15; // 0x2318c3
    *v16 = -*v16;
    *(int32_t *)v15 = __asm_insd((int16_t)a3);
    return a1 & 0xffffffff;
}

// Address range: 0x231a0d - 0x231a0e
int64_t function_231a0d(int64_t a1) {
    // 0x231a0d
    int64_t result; // 0x231a0d
    return result;
}

// Address range: 0x231a1a - 0x231a49
int64_t function_231a1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_3a297221(); // 0x231a1b
    float80_t v2; // 0x231a1a
    *(int16_t *)(a3 + 0x9ceb767) = (int16_t)v2;
    int64_t v3; // 0x231a1a
    bool v4; // 0x231a1a
    *(char *)a4 = (char)v1 + (char)v4 + *(char *)&v3;
    int64_t v5 = unknown_79acf42e(); // 0x231a28
    int16_t v6 = a3; // 0x231a2d
    int16_t v7 = __asm_in(v6); // 0x231a2d
    int64_t v8; // 0x231a1a
    *(int32_t *)a1 = *(int32_t *)&v8;
    int64_t v9; // 0x231a1a
    int32_t * v10 = (int32_t *)(v9 - 43); // 0x231a3a
    *v10 = *v10 + (int32_t)v9;
    *(int32_t *)((v4 ? -8 : 8) + a1) = __asm_insd(v6);
    return v5 & 0xc6510000 | (int64_t)v7 & 0xc6517d00 | 0x39ae821f;
}

// Address range: 0x231a64 - 0x231a70
int64_t function_231a64(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x231a64
    int64_t result; // 0x231a64
    *(char *)0x68ea3c9b5e01e848 = (char)result;
    return result;
}

// Address range: 0x231a92 - 0x231aa5
int64_t function_231a92(int64_t a1, int64_t a2, int64_t a3) {
    // 0x231a92
    int64_t v1; // 0x231a92
    int32_t * v2 = (int32_t *)(v1 - 0x2c6d85fb); // 0x231a94
    *v2 = *v2 + (int32_t)v1;
    *(int32_t *)(a2 - 0x1756c800) = (int32_t)a1;
    int64_t result; // 0x231a92
    int32_t v3 = *(int32_t *)&result; // 0x231aa3
    int64_t v4; // bp-8, 0x231a92
    *(int32_t *)result = v3 + (int32_t)(int64_t)&v4;
    return result;
}

// Address range: 0x231b3f - 0x231b40
int64_t function_231b3f(void) {
    // 0x231b3f
    int64_t result; // 0x231b3f
    return result;
}

// Address range: 0x231b50 - 0x231b51
int64_t function_231b50(void) {
    // 0x231b50
    int64_t result; // 0x231b50
    return result;
}

// Address range: 0x231b64 - 0x231b68
int64_t function_231b64(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x231b64
    bool v1; // 0x231b64
    if (a4 != 1 == v1) {
        function_231b3f();
    }
    // 0x231b66
    return function_231b50();
}

// Address range: 0x231bbb - 0x231bc6
int64_t function_231bbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x231bbb
    int64_t v1; // 0x231bbb
    int64_t result = v1 & -0xff01 | (int64_t)&g1; // 0x231bbb
    char * v2 = (char *)result; // 0x231bc0
    *v2 = *v2 + (char)result;
    char * v3 = (char *)(result - 119); // 0x231bc2
    *v3 = *v3 + (char)a4;
    return result;
}

// Address range: 0x231c18 - 0x231c1b
int64_t function_231c18(void) {
    // 0x231c18
    int64_t result; // 0x231c18
    return result;
}

// Address range: 0x231c67 - 0x231c68
int64_t function_231c67(void) {
    // 0x231c67
    int64_t result; // 0x231c67
    return result;
}

// Address range: 0x231c68 - 0x231c6d
int64_t function_231c68(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0x231c68
    *v1 = *v1 | (char)a4;
    return function_231c75(a1, a2, a3, (int64_t)&g2, (int64_t)&g2);
}

// Address range: 0x231c6d - 0x231c75
int64_t function_231c6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x231c6d
    int64_t v1; // 0x231c6d
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(a1 + 28 + 4 * v2); // 0x231c6f
    *v3 = *v3 + (char)a4;
    return v2 & -164;
}

// Address range: 0x231c75 - 0x231cb3
int64_t function_231c75(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x231c75
    int64_t result; // 0x231c75
    return result;
}
