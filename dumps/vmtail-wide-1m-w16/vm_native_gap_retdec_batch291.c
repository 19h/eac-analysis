/*
 * Targeted RetDec C for native executable gap queue batch 291.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1087bf-0x1089bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x16a8aa-0x16aaaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16aeaa-0x16b0aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16b0aa-0x16b2aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x436467-0x436667 rank=- name=- kind=- bytes=- uncovered=-
 *   0x436667-0x436867 rank=- name=- kind=- bytes=- uncovered=-
 *   0x436867-0x436a67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x436a67-0x436c67 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
extern int g4;
extern int g5;
extern int g6;
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

int64_t function_1087ae();
int64_t function_1087bf(void);
int64_t function_1087c0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1087f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_108815(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_108903(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_108923(int64_t a1);
int64_t function_108966(void);
int64_t function_108976(int64_t a1);
int64_t function_108981(int64_t a1);
int64_t function_1089a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12b2c6ea();
int64_t function_16a8aa(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_16a8d7(int64_t a1);
int64_t function_16a8ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16a93f(void);
int64_t function_16a960(int64_t a1);
int64_t function_16a991(void);
int64_t function_16a993(void);
int64_t function_16a9c2(void);
int64_t function_16a9f0(int64_t a1);
int64_t function_16aa03(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6);
int64_t function_16aeaa(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_16af6d(int64_t a1);
int64_t function_16af71(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_16b005(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_16b093(void);
int64_t function_16b0a7(void);
int64_t function_16b0f1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_16b104(int64_t a1, int64_t a2);
int64_t function_16b144(void);
int64_t function_16b1ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_16b28d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_179276d5();
int64_t function_1957610a();
int64_t function_2139db();
int64_t function_2553d152();
int64_t function_42a8ecaa();
int64_t function_436461();
int64_t function_436467(int64_t a1, int64_t a2);
int64_t function_43647c(void);
int64_t function_4364b6(void);
int64_t function_4364b8(void);
int64_t function_4364be(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4364e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_436543(int64_t a1, int64_t a2, int64_t a3);
int64_t function_436559(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4365a3(void);
int64_t function_4365d5(void);
int64_t function_4365d6(void);
int64_t function_43660d(int64_t a1);
int64_t function_436650(int64_t a1);
int64_t function_4366b3(int64_t a1);
int64_t function_4366be(void);
int64_t function_4366ea(void);
int64_t function_436717(void);
int64_t function_43671a(void);
int64_t function_43672f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_436737(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_43689a(void);
int64_t function_4368a6(int64_t a1);
int64_t function_4368ae(int64_t a1, int64_t a2);
int64_t function_4368d4(void);
int64_t function_4368e0(void);
int64_t function_4368e4(void);
int64_t function_436915(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_436922(void);
int64_t function_436929(int64_t a1);
int64_t function_436934(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_436961(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4369c5(void);
int64_t function_4369c6(void);
int64_t function_4369e5(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_436b5a(int64_t a1);
int64_t function_436b7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_436bae(void);
int64_t function_436bb1(void);
int64_t function_436bce(void);
int64_t function_436bfc(void);
int64_t function_436c44(int64_t a1);
int64_t function_436c47(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_436c63(void);
int64_t function_ffffffffaf599c9f();
int64_t unknown_13c02e87();
int64_t unknown_29000c41();
int64_t unknown_2eefc4ac();
int64_t unknown_38339c78();
int64_t unknown_3ab3dba5();
int64_t unknown_3e1152c0();
int64_t unknown_41657fe3();
int64_t unknown_44a81934();
int64_t unknown_744e8bc6();
int64_t unknown_8117b16();
int64_t unknown_e21119b();
int64_t unknown_ffffffff90205ded();
int64_t unknown_ffffffff9e166fc8();
int64_t unknown_ffffffffa10e6ad1();
int64_t unknown_ffffffffc3c70c55();
int64_t unknown_ffffffffff0897d0();

// Address range: 0x1087bf - 0x1087c0
int64_t function_1087bf(void) {
    // 0x1087bf
    int64_t result; // 0x1087bf
    return result;
}

// Address range: 0x1087c0 - 0x1087d9
int64_t function_1087c0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1087c0
    unknown_ffffffff9e166fc8();
    int64_t result = unknown_ffffffffa10e6ad1(); // 0x1087cb
    char * v1 = (char *)(((a3 | (int64_t)&g3) & -0xff01 | 256 * (int64_t)(2 * (char)((int64_t)&g3 >> 8))) + 0x331c48b0); // 0x1087d0
    int64_t v2; // 0x1087c0
    *v1 = *v1 | (char)((uint64_t)v2 / 256);
    return result;
}

// Address range: 0x1087f4 - 0x108803
int64_t function_1087f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1087f4
    int64_t v1; // 0x1087f4
    int32_t * v2 = (int32_t *)(v1 - 0x17301f0a); // 0x1087f4
    *v2 = *v2 | (int32_t)a4;
    int64_t v3; // 0x1087f4
    uint32_t v4 = *(int32_t *)&v3; // 0x1087fa
    uint32_t v5 = v4 + (int32_t)v1; // 0x1087fa
    *(int32_t *)a3 = v5;
    int64_t result; // 0x1087f4
    char v6 = *(char *)&result; // 0x1087fd
    int64_t v7 = result;
    *(char *)v7 = v6 + (char)(v5 < v4) + (char)v7;
    *(char *)result = *(char *)&result + 78;
    return result;
}

// Address range: 0x108815 - 0x1088c9
int64_t function_108815(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x108815
    int64_t v1; // 0x108815
    int64_t v2; // 0x108815
    if ((int32_t)v2 > 0x13a00c44) {
        v1 = function_1087ae();
    }
    uint64_t v3 = unknown_38339c78(); // 0x108872
    char * v4 = (char *)(a1 - 0x77ffc70b); // 0x108877
    *v4 = *v4 + (char)(v3 / 256);
    int32_t * v5 = (int32_t *)v3; // 0x10887d
    int32_t v6 = v3; // 0x10887d
    int32_t v7 = *v5 | v6; // 0x10887d
    *v5 = v7;
    if (v7 < 0) {
        int64_t v8 = unknown_13c02e87(); // 0x108881
        char * v9 = (char *)(v2 & -256 | 232); // 0x108886
        *v9 = *v9 + (char)(v2 / 256);
        return v8 & -256 | (int64_t)__asm_in_135(-116);
    }
    int64_t v10 = v2 + a4 & 0xffffffff; // 0x108826
    int32_t * v11 = (int32_t *)v10; // 0x10888f
    *v11 = *v11 + ((int32_t)v1 >> 31);
    if (v10 != 1) {
        // 0x1088c2
        *(int32_t *)a1 = v6;
        return v3 & 0xafce123a | 0x5031edc5;
    }
    int32_t * v12 = (int32_t *)v2; // 0x108896
    *v12 = *v12 - (int32_t)v2;
    unknown_3ab3dba5();
    return __asm_in_133(-109);
}

// Address range: 0x108903 - 0x108923
int64_t function_108903(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x108903
    int64_t v1; // 0x108903
    uint64_t v2 = v1;
    char * v3 = (char *)(a1 - 0x1748757b); // 0x108905
    char v4 = *v3; // 0x108905
    *v3 = (char)((char)v1 > (char)a3) + (char)a4 + v4;
    int64_t v5; // 0x108903
    uint32_t v6 = *(int32_t *)&v5; // 0x10890b
    uint32_t v7 = v6 + (int32_t)v1; // 0x10890b
    *(int32_t *)a2 = v7;
    *(int32_t *)(v1 + 95) = (int32_t)a2;
    unsigned char v8 = (char)(v2 / 256); // 0x108910
    int64_t v9; // 0x108903
    unsigned char v10 = *(char *)&v9 + v8; // 0x108910
    unsigned char v11 = v10 + (char)(v7 < v6); // 0x108910
    int64_t v12 = v7 < v6 ? v11 <= v8 : v10 < v8 ? 4 : 3; // 0x108915
    int64_t result = 256 * (int64_t)v11 | v2 & -0x10000 | (v2 - v12) % 256; // 0x108915
    char * v13 = (char *)result; // 0x108919
    *v13 = *v13 + (char)v1;
    return result;
}

// Address range: 0x108923 - 0x10892a
int64_t function_108923(int64_t a1) {
    // 0x108923
    int64_t result; // 0x108923
    float80_t v1; // 0x108923
    *(int16_t *)(a1 + 76 + result) = (int16_t)v1;
    return result;
}

// Address range: 0x108966 - 0x10896d
int64_t function_108966(void) {
    // 0x108966
    int64_t result; // 0x108966
    return result;
}

// Address range: 0x108976 - 0x108979
int64_t function_108976(int64_t a1) {
    // 0x108976
    int64_t result; // 0x108976
    return result;
}

// Address range: 0x108981 - 0x108982
int64_t function_108981(int64_t a1) {
    // 0x108981
    int64_t result; // 0x108981
    return result;
}

// Address range: 0x1089a2 - 0x1089bd
int64_t function_1089a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1089a2
    unknown_2eefc4ac();
    __asm_iretd();
    int64_t v1; // 0x1089a2
    *(char *)(a4 & 0xffffffff) = (char)(v1 & a4);
    return v1 & 0xffffffff;
}

// Address range: 0x16a8aa - 0x16a8d5
int64_t function_16a8aa(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x16a8aa
    int64_t v1; // 0x16a8aa
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a2 + 0x60008930); // 0x16a8b1
    *v3 = *v3 + (int32_t)a4;
    int64_t v4; // 0x16a8aa
    *(int32_t *)a4 = *(int32_t *)&v4 + (int32_t)a3;
    int64_t v5 = (v2 + a4 / 256 & 232 | v2 & 0xffffff00) + 0xebed8a9c & 0xffff00fc | (int64_t)&g2; // 0x16a8c1
    __asm_out((int16_t)a3, (int32_t)v5);
    int64_t v6 = v5 ^ (int64_t)&g1; // 0x16a8cb
    int64_t result = (v6 + 58) % 256 | v6 & -256; // 0x16a8d1
    char * v7 = (char *)result; // 0x16a8d3
    *v7 = *v7 + (char)(a3 / 256) + (char)((char)v6 > 197);
    return result;
}

// Address range: 0x16a8d7 - 0x16a8e5
int64_t function_16a8d7(int64_t a1) {
    // 0x16a8d7
    return unknown_41657fe3(a1);
}

// Address range: 0x16a8ee - 0x16a8f1
int64_t function_16a8ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x16a8ee
    int64_t result; // 0x16a8ee
    return result;
}

// Address range: 0x16a93f - 0x16a942
int64_t function_16a93f(void) {
    // 0x16a93f
    int64_t result; // 0x16a93f
    return result;
}

// Address range: 0x16a960 - 0x16a961
int64_t function_16a960(int64_t a1) {
    // 0x16a960
    int64_t result; // 0x16a960
    return result;
}

// Address range: 0x16a991 - 0x16a993
int64_t function_16a991(void) {
    // 0x16a991
    int64_t v1; // 0x16a991
    return function_16aa03(v1, v1, v1, v1, (int64_t)&g6, (int64_t)&g6);
}

// Address range: 0x16a993 - 0x16a9a5
int64_t function_16a993(void) {
    // 0x16a993
    unknown_e21119b();
    return __asm_hlt();
}

// Address range: 0x16a9c2 - 0x16a9c3
int64_t function_16a9c2(void) {
    // 0x16a9c2
    int64_t result; // 0x16a9c2
    return result;
}

// Address range: 0x16a9f0 - 0x16a9f1
int64_t function_16a9f0(int64_t a1) {
    // 0x16a9f0
    int64_t result; // 0x16a9f0
    return result;
}

// Address range: 0x16aa03 - 0x16aa83
int64_t function_16aa03(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6) {
    // 0x16aa03
    int64_t v1; // 0x16aa03
    bool v2; // 0x16aa03
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)a4 + (int32_t)v2;
    char * v3 = (char *)(a3 - 89 + a4); // 0x16aa0b
    unsigned char v4 = *v3 | (char)v1; // 0x16aa0b
    *v3 = v4;
    if (v4 >= 0) {
        // 0x16aa14
        return unknown_44a81934(a5);
    }
    uint32_t v5 = (int32_t)a3; // 0x16aa3c
    uint32_t v6 = *(int32_t *)(v1 + 0x1f536f12); // 0x16aa3c
    uint32_t v7 = v6 + v5; // 0x16aa3c
    unsigned char v8 = llvm_ctpop_i8((char)v7); // 0x16aa3c
    int16_t v9 = v7; // 0x16aa42
    __asm_out(v9, (int32_t)v1);
    int64_t v10 = (v1 & 0xffff00ff | 256 * (64 * (int64_t)(v7 == 0) | (int64_t)(v7 < v5) | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v6 % 16 + v5 % 16 > 15) | 4 * (int64_t)(v8 % 2 == 0)) | 512) + 0xd4c1f6bf; // 0x16aa44
    int32_t v11 = v10; // 0x16aa4c
    if ((0x6b7e00 - v11 & v11) >= 0) {
        // 0x16aa7d
        *(char *)0x78d1a384 = *(char *)0x78d1a384 + (char)(a6 / 256);
        return v10 & 0xffffffff;
    }
    int64_t v12 = v7; // 0x16aa3c
    int64_t v13 = (v10 & 0xffffff00 | (int64_t)__asm_in_136(v9)) + 0x56f0af81; // 0x16aa54
    char * v14 = (char *)((a6 & 0xffffffff) + 0x57013d3c); // 0x16aa63
    *v14 = *v14 + (char)v13;
    int32_t * v15 = (int32_t *)(v13 & 0xffffffff); // 0x16aa75
    *v15 = *v15 + (int32_t)((v12 + a4) % 256 | v12 & 0xffffff00);
    return a6 & 0xffffff17 | 232;
}

// Address range: 0x16aeaa - 0x16af5b
int64_t function_16aeaa(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int32_t * v3 = (int32_t *)(a1 - 0x1ffec29d); // 0x16aeaa
    uint32_t v4 = *v3; // 0x16aeaa
    bool v5; // 0x16aeaa
    int32_t v6 = v5; // 0x16aeaa
    int64_t v7; // 0x16aeaa
    uint32_t v8 = v6 + (int32_t)v7; // 0x16aeaa
    int32_t v9 = v4 - v8; // 0x16aeaa
    bool v10 = v5 ? v8 != -1 | v4 < v9 - v6 : v4 < v8; // 0x16aeaa
    *v3 = v9;
    int64_t v11 = 256 * (a4 / 256 + a3 / 256 + (int64_t)v10) & 0xff00 | a3 & -0xff01; // 0x16aeb0
    int16_t v12 = v11; // 0x16aeb8
    __asm_out(v12, (int32_t)a5);
    int32_t * v13 = (int32_t *)((unknown_3e1152c0() + v7 & 0xffffffff) + 14); // 0x16aec1
    *v13 = *v13 + (int32_t)v11;
    int32_t v14 = __asm_in(v12); // 0x16aec5
    uint32_t v15 = (int32_t)a4; // 0x16aecc
    *(int32_t *)a2 = *(int32_t *)&v1 + v15;
    uint32_t v16 = v15 % 32; // 0x16aece
    if (v16 != 0) {
        uint32_t v17 = *(int32_t *)(a1 - 0x5e55cdf1); // 0x16aece
        *(int32_t *)(v2 - 0x5e55cdf1) = v17 >> 32 - v16 | v17 << v16;
    }
    uint32_t v18 = 0x10000 * v14 >> 16; // 0x16aed4
    int64_t result = v18; // 0x16aed4
    uint32_t v19 = (int32_t)v7;
    if (a4 == 0) {
        int32_t v20 = 2 * v19; // 0x16af19
        if (v20 < 0 == (v20 ^ v19) < 0) {
            // 0x16af20
            return (int64_t)(v18 + (int32_t)(v20 < v19) + *(int32_t *)&v2);
        }
        // 0x16af1d
        return result;
    }
    int64_t v21 = v7 & -256; // 0x16aeb5
    uint32_t v22 = v19 + v15; // 0x16aed9
    if (v22 < v15 || v22 == 0) {
        // 0x16af3b
        unknown_29000c41();
        *(int32_t *)v2 = *(int32_t *)&v2 + (int32_t)v21;
        __asm_out_134(v12, (char)__asm_in_133(96));
        return unknown_ffffffffc3c70c55();
    }
    int32_t * v23 = (int32_t *)(v7 - 0x6ee5bb8b); // 0x16aee2
    *v23 = *v23 + v22;
    char * v24 = (char *)(result & 0xffffff00 | (int64_t)((v18 + 24) % 256)); // 0x16aee8
    *v24 = *v24 + (char)v22;
    int32_t * v25 = (int32_t *)(v7 + 92); // 0x16aeef
    *v25 = *v25 + (int32_t)v21;
    int64_t result2 = __asm_wait(); // 0x16aef2
    int32_t * v26 = (int32_t *)(result2 + 0x1e84005); // 0x16aef3
    uint32_t v27 = *v26; // 0x16aef3
    uint32_t v28 = v22 % 32; // 0x16aef3
    if (v28 != 0) {
        *v26 = v27 >> 32 - v28 | v27 << v28;
    }
    // 0x16af1d
    return result2;
}

// Address range: 0x16af6d - 0x16af70
int64_t function_16af6d(int64_t a1) {
    // 0x16af6d
    int64_t result; // 0x16af6d
    return result;
}

// Address range: 0x16af71 - 0x16aff0
int64_t function_16af71(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x16af71
    int64_t result; // 0x16af71
    char * v1 = (char *)(result + 35); // 0x16af89
    char v2 = *v1; // 0x16af89
    char v3 = a3 / 256; // 0x16af89
    bool v4; // 0x16af71
    char v5 = v4; // 0x16af89
    char v6 = v5 + v3 + v2; // 0x16af89
    char v7 = v6 + v5; // 0x16af89
    *v1 = v6;
    int16_t v8 = a3;
    if (v6 < 0 != ((v7 ^ v2) & (v7 ^ v3)) < 0) {
        // 0x16afc1
        int64_t v9; // 0x16af71
        __asm_outsb(v8, *(char *)&v9);
        return result;
    }
    char * v10 = (char *)(int64_t)__asm_in(v8); // 0x16af93
    *v10 = *v10 | (char)result;
    return 0x10000 * (int32_t)a1 >> 16;
}

// Address range: 0x16b005 - 0x16b01f
int64_t function_16b005(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x16b005
    int64_t v1; // 0x16b005
    bool v2; // 0x16b005
    char * v3 = (char *)((v1 + 0x23164ef7 + (int64_t)v2 & 0xffffffff) + 0x140d4830); // 0x16b00a
    *v3 = *v3 | (char)(a4 / 256);
    unknown_8117b16();
    return v1 & 0xffffffff;
}

// Address range: 0x16b093 - 0x16b098
int64_t function_16b093(void) {
    // 0x16b093
    return function_12b2c6ea();
}

// Address range: 0x16b0a7 - 0x16b0a9
int64_t function_16b0a7(void) {
    // 0x16b0a7
    int64_t result; // 0x16b0a7
    return result;
}

// Address range: 0x16b0f1 - 0x16b103
int64_t function_16b0f1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x16b0f1
    int64_t v1; // 0x16b0f1
    return v1 & 0xffffff00 | (uint64_t)v1 % 256;
}

// Address range: 0x16b104 - 0x16b10e
int64_t function_16b104(int64_t a1, int64_t a2) {
    // 0x16b104
    return unknown_ffffffff90205ded(a1, a2);
}

// Address range: 0x16b144 - 0x16b147
int64_t function_16b144(void) {
    // 0x16b144
    int64_t result; // 0x16b144
    return result;
}

// Address range: 0x16b1ca - 0x16b282
int64_t function_16b1ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4;
    unknown_ffffffffff0897d0();
    int64_t v2; // 0x16b1ca
    int32_t * v3 = (int32_t *)(v2 - 74); // 0x16b1d1
    int32_t v4 = *v3; // 0x16b1d1
    int32_t v5 = a5; // 0x16b1d1
    int32_t v6 = v4 + v5; // 0x16b1d1
    *v3 = v6;
    int64_t v7 = function_2139db(); // 0x16b1d5
    if (v6 < 0 == ((v6 ^ v4) & (v6 ^ v5)) < 0) {
        // 0x16b1dc
        return v7 & -0xff01 | (int64_t)&g4;
    }
    int32_t * v8 = (int32_t *)(v2 - 0x3a47d3f6); // 0x16b259
    *v8 = *v8 + (int32_t)v2;
    int32_t v9 = *(int32_t *)(int64_t)(*(int32_t *)&v1 & (int32_t)v7); // 0x16b261
    int64_t v10 = __asm_hlt(); // 0x16b265
    *(int32_t *)a1 = __asm_insd((int16_t)v9);
    return v10 & 0xc530fe17 | 0x3acf01e8;
}

// Address range: 0x16b28d - 0x16b2a2
int64_t function_16b28d(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a1 - 0x17ffc72e); // 0x16b28d
    int64_t result; // 0x16b28d
    *v1 = *v1 + (char)result;
    int32_t * v2 = (int32_t *)(result + a3); // 0x16b293
    int32_t v3 = *v2; // 0x16b293
    int32_t v4 = result; // 0x16b293
    int32_t v5 = v3 + v4; // 0x16b293
    *v2 = v5;
    if (v5 < 0 == ((v5 ^ v3) & (v5 ^ v4)) < 0 == (v5 != 0)) {
        // 0x16b314
        return result;
    }
    // 0x16b298
    int64_t v6; // 0x16b28d
    return (int64_t)(*(int32_t *)&v6 | (int32_t)result);
}

// Address range: 0x436467 - 0x436473
int64_t function_436467(int64_t a1, int64_t a2) {
    int64_t result = __asm_int3(); // 0x43646e
    *(char *)result = (char)result - (char)a2;
    return result;
}

// Address range: 0x43647c - 0x43647d
int64_t function_43647c(void) {
    // 0x43647c
    int64_t result; // 0x43647c
    return result;
}

// Address range: 0x4364b6 - 0x4364b7
int64_t function_4364b6(void) {
    // 0x4364b6
    int64_t result; // 0x4364b6
    return result;
}

// Address range: 0x4364b8 - 0x4364b9
int64_t function_4364b8(void) {
    // 0x4364b8
    int64_t result; // 0x4364b8
    return result;
}

// Address range: 0x4364be - 0x4364e9
int64_t function_4364be(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4364be
    int64_t v1; // 0x4364be
    bool v2; // 0x4364be
    if (a4 != 1 == v2) {
        v1 = function_436461();
    }
    uint64_t v3 = v1;
    int64_t v4; // 0x4364be
    char v5 = *(char *)(v4 + 0x5e7c5b0c); // 0x4364c7
    int64_t v6 = v2 ? -4 : 4; // 0x4364cd
    int64_t v7 = v6 + a1; // 0x4364cd
    int32_t v8 = *(int32_t *)v7; // 0x4364ce
    if (a4 != 2 == v8 == (int32_t)(256 * (int64_t)(v5 & (char)(v3 / 256)) || v3 & 0xffff00ff)) {
        function_4364b8();
    }
    char * v9 = (char *)(a4 + 0x6d4fa794 & 0xffffffff); // 0x4364d2
    *v9 = *v9 | (char)v4;
    unknown_744e8bc6();
    int16_t v10 = a3; // 0x4364e0
    __asm_in(v10);
    __asm_in_135(-1);
    *(char *)(v7 + v6) = __asm_insb(v10);
    return function_ffffffffaf599c9f();
}

// Address range: 0x4364e9 - 0x43652d
int64_t function_4364e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a1 + 47); // 0x4364e9
    uint32_t v3 = *v2; // 0x4364e9
    uint32_t v4 = v3 + (int32_t)a2; // 0x4364e9
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x4364e9
    *v2 = v4;
    int64_t v6; // 0x4364e9
    if (v5 % 2 != 0) {
        v6 = function_43647c();
    }
    // 0x4364ee
    *(int32_t *)0x63f2ee4b5277e718 = (int32_t)v6;
    int64_t v7; // 0x4364e9
    char * v8 = (char *)(v7 - 22); // 0x4364fa
    unsigned char v9 = *v8; // 0x4364fa
    unsigned char v10 = (char)a4 % 32; // 0x4364fa
    bool v11 = v4 < v3; // 0x4364fa
    if (v10 != 0) {
        unsigned char v12 = v9 >> 8 - v10 | v9 << v10; // 0x4364fa
        *v8 = v12;
        v11 = v12 % 2 != 0;
    }
    int64_t result = v6 & -256 | (int64_t)__asm_in_135(41); // 0x4364fd
    if (v4 == 0 || v11) {
        int32_t * v13 = (int32_t *)(result + 84); // 0x436503
        *v13 = *v13 ^ (int32_t)a4;
        return result;
    }
    // 0x43652a
    *(char *)a1 = *(char *)&v1;
    return result;
}

// Address range: 0x436543 - 0x436559
int64_t function_436543(int64_t a1, int64_t a2, int64_t a3) {
    // 0x436543
    int64_t v1; // 0x436543
    int64_t result = v1 & -256 | (uint64_t)v1 % 256; // 0x436552
    bool v2; // 0x436543
    __asm_outsb((int16_t)a3 & -256 | 129, *(char *)((v2 ? -1 : 1) + a2));
    __asm_out_137(-17, (int32_t)result);
    return result;
}

// Address range: 0x436559 - 0x436563
int64_t function_436559(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x436559
    int64_t result; // 0x436559
    return result;
}

// Address range: 0x4365a3 - 0x4365a9
int64_t function_4365a3(void) {
    // 0x4365a3
    return function_42a8ecaa();
}

// Address range: 0x4365d5 - 0x4365d6
int64_t function_4365d5(void) {
    // 0x4365d5
    int64_t result; // 0x4365d5
    return result;
}

// Address range: 0x4365d6 - 0x4365db
int64_t function_4365d6(void) {
    // 0x4365d6
    return function_1957610a();
}

// Address range: 0x43660d - 0x43663a
int64_t function_43660d(int64_t a1) {
    // 0x43660d
    __asm_movups((int128_t)a1);
    int64_t result; // 0x43660d
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x436650 - 0x436653
int64_t function_436650(int64_t a1) {
    // 0x436650
    int64_t result; // 0x436650
    return result;
}

// Address range: 0x4366b3 - 0x4366bb
int64_t function_4366b3(int64_t a1) {
    // 0x4366b3
    int64_t result; // 0x4366b3
    char * v1 = (char *)(result + 0x8962d0a + result); // 0x4366b3
    *v1 = *v1 ^ (char)result;
    return result;
}

// Address range: 0x4366be - 0x4366c1
int64_t function_4366be(void) {
    // 0x4366be
    int64_t result; // 0x4366be
    return result;
}

// Address range: 0x4366ea - 0x4366ec
int64_t function_4366ea(void) {
    // 0x4366ea
    return function_43671a();
}

// Address range: 0x436717 - 0x436719
int64_t function_436717(void) {
    // 0x436717
    int64_t result; // 0x436717
    return result;
}

// Address range: 0x43671a - 0x43671e
int64_t function_43671a(void) {
    // 0x43671a
    int64_t result; // 0x43671a
    return result;
}

// Address range: 0x43672f - 0x436737
int64_t function_43672f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x43672f
    int64_t result; // 0x43672f
    return result;
}

// Address range: 0x436737 - 0x436831
int64_t function_436737(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x436737
    int64_t v1; // 0x436737
    bool v2; // 0x436737
    if (!v2 && !v2) {
        // 0x436739
        return v1 | 124;
    }
    int64_t v3 = a4 & -0xff01 | (int64_t)&g5; // 0x4367b8
    if (!v2) {
        int32_t * v4 = (int32_t *)(v1 + 92); // 0x43682e
        *v4 = *v4 ^ (int32_t)v1;
        return (int64_t)(*(char *)(v3 - 83) + (v2 ? 53 : 52)) | 0x437bff00;
    }
    int64_t v5 = v2 ? -4 : 4; // 0x4367c1
    char * v6 = (char *)(a1 - 71 + v5); // 0x4367c2
    char v7 = *v6; // 0x4367c2
    *v6 = (char)v3 + (char)((int32_t)a2 < (int32_t)a1) + v7;
    uint32_t v8 = (int32_t)v3; // 0x4367c6
    uint32_t v9 = *(int32_t *)(v5 + a2); // 0x4367c6
    unsigned char v10 = (char)a5; // 0x4367c8
    unsigned char v11 = *(char *)(int64_t)(v8 - v9) + v10; // 0x4367c8
    bool v12 = v9 > v8 ? v11 + (char)(v9 > v8) <= v10 : v11 < v10; // 0x4367c8
    *(char *)0xa79399f9 = *(char *)0xa79399f9 + (char)!v12;
    return 0x437bff34;
}

// Address range: 0x43689a - 0x43689b
int64_t function_43689a(void) {
    // 0x43689a
    int64_t result; // 0x43689a
    return result;
}

// Address range: 0x4368a6 - 0x4368a7
int64_t function_4368a6(int64_t a1) {
    // 0x4368a6
    int64_t result; // 0x4368a6
    return result;
}

// Address range: 0x4368ae - 0x4368b1
int64_t function_4368ae(int64_t a1, int64_t a2) {
    // 0x4368ae
    int64_t result; // 0x4368ae
    return result;
}

// Address range: 0x4368d4 - 0x4368d6
int64_t function_4368d4(void) {
    // 0x4368d4
    return function_43689a();
}

// Address range: 0x4368e0 - 0x4368e3
int64_t function_4368e0(void) {
    // 0x4368e0
    int64_t v1; // 0x4368e0
    return function_436961(v1, v1, v1, v1);
}

// Address range: 0x4368e4 - 0x4368e5
int64_t function_4368e4(void) {
    // 0x4368e4
    int64_t result; // 0x4368e4
    return result;
}

// Address range: 0x436915 - 0x436921
int64_t function_436915(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x436915
    *(char *)a1 = __asm_insb((int16_t)a3);
    return function_179276d5();
}

// Address range: 0x436922 - 0x436925
int64_t function_436922(void) {
    // 0x436922
    int64_t result; // 0x436922
    return result;
}

// Address range: 0x436929 - 0x436933
int64_t function_436929(int64_t a1) {
    // 0x436929
    int64_t result; // 0x436929
    bool v1; // 0x436929
    if (!v1) {
        result = function_4368e4();
    }
    // 0x43692d
    return result;
}

// Address range: 0x436934 - 0x436943
int64_t function_436934(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = __asm_int3(); // 0x436935
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return result;
}

// Address range: 0x436961 - 0x436970
int64_t function_436961(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x436961
    int64_t result; // 0x436961
    bool v1; // 0x436961
    if (v1 || v1) {
        // 0x436964
        return result;
    }
    char * v2 = (char *)(a4 - 0x3f47a23d); // 0x436968
    *v2 = *v2 + (char)a4;
    return result ^ 10;
}

// Address range: 0x4369c5 - 0x4369c6
int64_t function_4369c5(void) {
    // 0x4369c5
    int64_t result; // 0x4369c5
    return result;
}

// Address range: 0x4369c6 - 0x4369c7
int64_t function_4369c6(void) {
    // 0x4369c6
    int64_t result; // 0x4369c6
    return result;
}

// Address range: 0x4369e5 - 0x436b59
int64_t function_4369e5(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a2;
    int32_t v2 = __asm_in((int16_t)a3) >> 31; // 0x436a55
    int64_t v3 = a6 & -256 | 141; // 0x436a59
    char v4 = a5; // 0x436a5b
    if (v4 < 0) {
        int64_t result = a7 & -256 | 68; // 0x4369f6
        if (v4 != 0) {
            // 0x436a46
            __asm_out_134((int16_t)v2, (char)result);
            return result;
        }
        char v5 = a5 / 256; // 0x4369fa
        *(char *)a1 = v5;
        __asm_outsb((int16_t)v2, *(char *)&v1);
        int32_t * v6 = (int32_t *)(2 * result + v3); // 0x436a01
        *v6 = *v6 + (*(char *)a5 > -1 - v5 ? 61 : 60);
        return result & 0xbcea5640;
    }
    int32_t v7 = a2;
    int64_t v8 = a5 / 256 ^ a5;
    int16_t v9 = v2;
    int64_t result2 = __asm_in(v9); // 0x436a66
    if ((char)v8 >= 0) {
        // 0x436a69
        __asm_outsd(v9, v7);
        return result2;
    }
    uint64_t v10 = 256 * v8 & 0xff00 | a5 & -0xff01; // 0x436a64
    uint32_t v11 = v7 - (int32_t)v10; // 0x436a3f
    int64_t v12 = v11; // 0x436a3f
    v1 = v12;
    if (v10 >= a2) {
        // 0x436a13
        return result2 & 0x1c97ddfd;
    }
    // 0x436a43
    if (llvm_ctpop_i8((char)v11) % 2 != 0) {
        // 0x436a45
        __asm_outsd(v9, *(int32_t *)v12);
        // 0x436a46
        __asm_out_134(v9, (char)result2);
        return result2;
    }
    char v13 = *(char *)result2; // 0x436a1f
    int32_t * v14 = (int32_t *)(v12 - 86); // 0x436a27
    *v14 = *v14 + (int32_t)v3;
    *(char *)a1 = *(char *)v1;
    return result2 & -0xff5b | 256 * (int64_t)(v13 ^ (char)(result2 / 256)) | 90;
}

// Address range: 0x436b5a - 0x436b5b
int64_t function_436b5a(int64_t a1) {
    // 0x436b5a
    int64_t result; // 0x436b5a
    return result;
}

// Address range: 0x436b7d - 0x436b96
int64_t function_436b7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = __asm_sti(); // 0x436b86
    int64_t v1; // 0x436b7d
    if ((*(int32_t *)(v1 - 109) || (int32_t)a3) < 1) {
        // 0x436baf
        return result;
    }
    // 0x436b8b
    return function_2553d152();
}

// Address range: 0x436bae - 0x436baf
int64_t function_436bae(void) {
    // 0x436bae
    int64_t result; // 0x436bae
    return result;
}

// Address range: 0x436bb1 - 0x436bb2
int64_t function_436bb1(void) {
    // 0x436bb1
    int64_t result; // 0x436bb1
    return result;
}

// Address range: 0x436bce - 0x436bcf
int64_t function_436bce(void) {
    // 0x436bce
    int64_t result; // 0x436bce
    return result;
}

// Address range: 0x436bfc - 0x436bfd
int64_t function_436bfc(void) {
    // 0x436bfc
    int64_t result; // 0x436bfc
    return result;
}

// Address range: 0x436c44 - 0x436c47
int64_t function_436c44(int64_t a1) {
    // 0x436c44
    return function_436c63();
}

// Address range: 0x436c47 - 0x436c63
int64_t function_436c47(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x436c47
    int64_t result; // 0x436c47
    *(char *)a1 = (char)(result / 256 & a1);
    *(int32_t *)(result - 15) = (int32_t)a1;
    return result;
}

// Address range: 0x436c63 - 0x436c65
int64_t function_436c63(void) {
    // 0x436c63
    int64_t v1; // 0x436c63
    return v1 & -256;
}
