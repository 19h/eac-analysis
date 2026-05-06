/*
 * Targeted RetDec C for native executable gap queue batch 330.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1b27ce-0x1b29ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b29ce-0x1b2bce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b2fce-0x1b31ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x2abf75-0x2ac175 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ac175-0x2ac375 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ac375-0x2ac575 rank=- name=- kind=- bytes=- uncovered=-
 *   0x45e234-0x45e434 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4dbff9-0x4dc1f9 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1b27c1();
int64_t function_1b27ce(int64_t a1, int64_t a2);
int64_t function_1b27dc(void);
int64_t function_1b2810(int64_t a1);
int64_t function_1b2871(void);
int64_t function_1b292e(void);
int64_t function_1b2a22(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1b2ab8(void);
int64_t function_1b2ac0(int64_t a1);
int64_t function_1b2ace(void);
int64_t function_1b2adb(void);
int64_t function_1b2af0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1b2b2b(int64_t a1);
int64_t function_1b2b58(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1b2fce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1b3183(void);
int64_t function_2abf07();
int64_t function_2abf75(void);
int64_t function_2abf76(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2abf8e(void);
int64_t function_2abf93(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2abfa9(void);
int64_t function_2abfb8(void);
int64_t function_2abfc1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2abfd3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2abfe7(int64_t a1, int64_t a2);
int64_t function_2ac048(int64_t a1);
int64_t function_2ac06f(int64_t a1);
int64_t function_2ac093(void);
int64_t function_2ac0b4(void);
int64_t function_2ac1ca(void);
int64_t function_2ac1d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2ac260(void);
int64_t function_2ac28b(void);
int64_t function_2ac2d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ac328(void);
int64_t function_2ac346(void);
int64_t function_2ac34d(int64_t a1);
int64_t function_2ac375(void);
int64_t function_2ac3b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ac4a9(int64_t a1, int64_t a2);
int64_t function_3296c44b();
int64_t function_3a50c4ca();
int64_t function_45e234(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45e290(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_45e2fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45e352(int64_t a1);
int64_t function_4dbff9(void);
int64_t function_4dc006(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4dc022(void);
int64_t function_4dc028(int64_t a1);
int64_t function_4dc037(void);
int64_t function_4dc046(void);
int64_t function_4dc050(void);
int64_t function_4dc055(void);
int64_t function_4dc0e1(void);
int64_t function_4dc0f6(void);
int64_t function_4dc105(void);
int64_t function_4dc10f(void);
int64_t function_4dc114(void);
int64_t function_4dc123(int64_t a1);
int64_t function_4dc1aa(void);
int64_t function_4dc1bf(void);
int64_t function_4dc1ce(void);
int64_t function_4dc1d8(void);
int64_t function_4dc1dd(void);
int64_t function_4dc1ec(int64_t a1);
int64_t function_56552c4e();
int64_t function_8ead698();
int64_t function_cf3c7();
int64_t function_ffffffffef9b81d1();
int64_t unknown_16b7ff5e();
int64_t unknown_239ac05d();
int64_t unknown_281bec53();
int64_t unknown_3abf5434();
int64_t unknown_797845f7();
int64_t unknown_ab2f431();
int64_t unknown_ffffffff9221ba0d();
int64_t unknown_ffffffff9a29927c();
int64_t unknown_ffffffffae7def94();
int64_t unknown_ffffffffbad297dd();
int64_t unknown_ffffffffd72b64db();
int64_t unknown_fffffffff7560c00();

// Address range: 0x1b27ce - 0x1b27da
int64_t function_1b27ce(int64_t a1, int64_t a2) {
    // 0x1b27ce
    int64_t v1; // 0x1b27ce
    unsigned char v2 = *(char *)((v1 & -256 | 142) + v1 % 256); // 0x1b27d0
    int64_t v3 = v1 & -256; // 0x1b27d0
    char * v4 = (char *)((v3 | (int64_t)v2) + 0x1e82100); // 0x1b27d1
    *v4 = *v4 + (char)(v1 / 256);
    int64_t v5; // 0x1b27ce
    return v3 | (int64_t)*(char *)&v5;
}

// Address range: 0x1b27dc - 0x1b27de
int64_t function_1b27dc(void) {
    // 0x1b27dc
    return function_1b27c1();
}

// Address range: 0x1b2810 - 0x1b2811
int64_t function_1b2810(int64_t a1) {
    // 0x1b2810
    int64_t result; // 0x1b2810
    return result;
}

// Address range: 0x1b2871 - 0x1b2876
int64_t function_1b2871(void) {
    // 0x1b2871
    return function_8ead698();
}

// Address range: 0x1b292e - 0x1b2934
int64_t function_1b292e(void) {
    // 0x1b292e
    return unknown_3abf5434();
}

// Address range: 0x1b2a22 - 0x1b2a66
int64_t function_1b2a22(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    char * v2 = (char *)(a3 + 107); // 0x1b2a22
    *v2 = *v2 << 7;
    int64_t v3; // 0x1b2a22
    char * v4 = (char *)(v3 - 127); // 0x1b2a33
    bool v5; // 0x1b2a22
    int64_t v6 = v5 ? -4 : 4; // 0x1b2a36
    int64_t v7 = a1; // 0x1b2a26
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v3;
    *v4 = 100;
    int64_t v8 = (int64_t)*v4 | 0x387100; // 0x1b2a33
    v7 += v6;
    int64_t v9 = v6 + v3 + a2; // 0x1b2a39
    int64_t v10 = v9 & 0xffffffff; // 0x1b2a42
    while (*(int32_t *)(v8 + 0x22a52af) - (int32_t)v8 < 0) {
        // 0x1b2a2c
        *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v3;
        *v4 = 100;
        v8 = (int64_t)*v4 | 0x387100;
        v7 += v6;
        v9 = v6 + v3 + v10;
        v10 = v9 & 0xffffffff;
    }
    int32_t * v11 = (int32_t *)(v8 + 0x7e3c4e0a); // 0x1b2a44
    *v11 = *v11 + (int32_t)v3;
    int32_t * v12 = (int32_t *)(2 * a5 - 24 + v3); // 0x1b2a4a
    *v12 = *v12 + (int32_t)v3;
    int32_t * v13 = (int32_t *)(v8 + 71); // 0x1b2a4f
    *v13 = *v13 + (int32_t)v1;
    unknown_239ac05d(v7, (int32_t)v9);
    return function_56552c4e();
}

// Address range: 0x1b2ab8 - 0x1b2ab9
int64_t function_1b2ab8(void) {
    // 0x1b2ab8
    int64_t result; // 0x1b2ab8
    return result;
}

// Address range: 0x1b2ac0 - 0x1b2ac3
int64_t function_1b2ac0(int64_t a1) {
    // 0x1b2ac0
    int64_t result; // 0x1b2ac0
    return result;
}

// Address range: 0x1b2ace - 0x1b2ad0
int64_t function_1b2ace(void) {
    // 0x1b2ace
    return function_1b2ab8();
}

// Address range: 0x1b2adb - 0x1b2adc
int64_t function_1b2adb(void) {
    // 0x1b2adb
    int64_t result; // 0x1b2adb
    return result;
}

// Address range: 0x1b2af0 - 0x1b2b08
int64_t function_1b2af0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1b2af0
    int64_t v1; // 0x1b2af0
    *(char *)0x4c17d7d1 = *(char *)0x4c17d7d1 + (char)(v1 / 256);
    *(char *)a4 = (char)v1 + (char)a4;
    int32_t v2 = *(int32_t *)0x73d67ca7; // 0x1b2aff
    *(int32_t *)0x73d67ca7 = (int32_t)a4 + (int32_t)a3 + v2;
    return function_1b2adb();
}

// Address range: 0x1b2b2b - 0x1b2b31
int64_t function_1b2b2b(int64_t a1) {
    // 0x1b2b2b
    return unknown_ab2f431(a1);
}

// Address range: 0x1b2b58 - 0x1b2bc5
int64_t function_1b2b58(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1b2b58
    int64_t v1; // 0x1b2b58
    uint64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = unknown_16b7ff5e(); // 0x1b2b58
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    unsigned char v5 = *(char *)a4; // 0x1b2b62
    bool v6; // 0x1b2b58
    int64_t v7 = (v6 ? -1 : 1) + a4; // 0x1b2b62
    *(int32_t *)-0x5df0040a31c9d4fb = (int32_t)(256 * ((int64_t)v6 + a3) + v4 & 0xff00 | v4 & 0xffff0000 | (int64_t)v5);
    char v8 = *(char *)&v3; // 0x1b2b72
    unknown_ffffffff9a29927c();
    int32_t * v9 = (int32_t *)v7; // 0x1b2b80
    *v9 = *v9 ^ -0x174251ff;
    uint32_t v10 = *(int32_t *)0x10917d8f; // 0x1b2b88
    uint32_t v11 = v10 + (int32_t)a1; // 0x1b2b88
    *(int32_t *)0x10917d8f = v11;
    int64_t result = unknown_ffffffffae7def94(); // 0x1b2b8e
    if (v11 < v10 || v11 == 0) {
        // 0x1b2bed
        return result;
    }
    int64_t v12 = 0x100000000 * v7 >> 32; // 0x1b2b63
    int64_t v13 = 0x1e87652 * v12; // 0x1b2b63
    int64_t v14 = v13 & 0xfffffffe; // 0x1b2b63
    unsigned char v15 = (char)(v13 != 0x1e8765200000000 * v12 >> 32) + (char)(v2 / 256) + v8; // 0x1b2b72
    int32_t * v16 = (int32_t *)(256 * (int64_t)v15 | v2 & -0xff01); // 0x1b2b95
    uint32_t v17 = *v16; // 0x1b2b95
    *v16 = v17 - 14;
    *(int64_t *)(v14 - 8) = 0x38436d00;
    *(int64_t *)(v14 - 16) = v3;
    if (v17 > 13) {
        // 0x1b2bed
        return result;
    }
    // 0x1b2ba0
    *(char *)-0x1327bd54 = *(char *)-0x1327bd54 + v15;
    int64_t result2 = __asm_sti(); // 0x1b2bb7
    char * v18 = (char *)(v7 + 0xc1e7849); // 0x1b2bb8
    *v18 = *v18 - (((int32_t)v3 ^ -4) < 0xbf92002c ? 66 : 65);
    *(char *)0x1f09b7c6 = *(char *)0x1f09b7c6 + 102;
    return result2;
}

// Address range: 0x1b2fce - 0x1b310b
int64_t function_1b2fce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1b2fce
    int64_t v1; // 0x1b2fce
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x1b2fce
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    int64_t v5; // bp-24, 0x1b2fce
    v5 = (int64_t)&v5 + 16;
    return function_cf3c7(a1, a2, a3, v1, a5);
}

// Address range: 0x1b3183 - 0x1b3186
int64_t function_1b3183(void) {
    // 0x1b3183
    int64_t result; // 0x1b3183
    return result;
}

// Address range: 0x2abf75 - 0x2abf76
int64_t function_2abf75(void) {
    // 0x2abf75
    int64_t result; // 0x2abf75
    return result;
}

// Address range: 0x2abf76 - 0x2abf8e
int64_t function_2abf76(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2abf76
    bool v1; // 0x2abf76
    if (v1) {
        function_2abf07();
    }
    // 0x2abf78
    *(char *)a3 = -1;
    int64_t v2; // 0x2abf76
    int32_t * v3 = (int32_t *)(v2 + 0x523cce87); // 0x2abf7b
    *v3 = *v3 + (int32_t)a2;
    int32_t * v4 = (int32_t *)(8 * a1 + 0x2101e83a + v2); // 0x2abf81
    *v4 = *v4 ^ -0x24d1a509;
    return function_2abfe7(a1, a2);
}

// Address range: 0x2abf8e - 0x2abf8f
int64_t function_2abf8e(void) {
    // 0x2abf8e
    int64_t result; // 0x2abf8e
    return result;
}

// Address range: 0x2abf93 - 0x2abf9d
int64_t function_2abf93(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2abf93
    int64_t v1; // 0x2abf93
    int32_t * v2 = (int32_t *)(v1 - 0x557c4b6e); // 0x2abf93
    *v2 = *v2 + (int32_t)v1;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return function_2abfd3(a1, a2, a3, v1);
}

// Address range: 0x2abfa9 - 0x2abfb7
int64_t function_2abfa9(void) {
    // 0x2abfa9
    int64_t v1; // 0x2abfa9
    int32_t * v2 = (int32_t *)(v1 - 26); // 0x2abfa9
    *v2 = *v2 + (int32_t)v1;
    *(char *)-0x171f0591 = *(char *)-0x171f0591 / 2;
    return function_2abfc1(v1, v1, v1, v1);
}

// Address range: 0x2abfb8 - 0x2abfba
int64_t function_2abfb8(void) {
    // 0x2abfb8
    int64_t result; // 0x2abfb8
    return result;
}

// Address range: 0x2abfc1 - 0x2abfcb
int64_t function_2abfc1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2abfc1
    int64_t v1; // 0x2abfc1
    int64_t v2 = v1;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x2abfd3 - 0x2abfe5
int64_t function_2abfd3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t result = unknown_ffffffffd72b64db(); // 0x2abfd5
    char * v1 = (char *)(result + 10); // 0x2abfda
    *v1 = *v1 + (char)(a4 / 256);
    char * v2 = (char *)(a4 - 0xb11f00); // 0x2abfdf
    *v2 = -*v2;
    return result;
}

// Address range: 0x2abfe7 - 0x2abfef
int64_t function_2abfe7(int64_t a1, int64_t a2) {
    // 0x2abfe7
    return 0x7f3400e8;
}

// Address range: 0x2ac048 - 0x2ac049
int64_t function_2ac048(int64_t a1) {
    // 0x2ac048
    int64_t result; // 0x2ac048
    return result;
}

// Address range: 0x2ac06f - 0x2ac072
int64_t function_2ac06f(int64_t a1) {
    // 0x2ac06f
    int64_t result; // 0x2ac06f
    return result;
}

// Address range: 0x2ac093 - 0x2ac096
int64_t function_2ac093(void) {
    // 0x2ac093
    int64_t result; // 0x2ac093
    return result;
}

// Address range: 0x2ac0b4 - 0x2ac0b7
int64_t function_2ac0b4(void) {
    // 0x2ac0b4
    int64_t result; // 0x2ac0b4
    return result;
}

// Address range: 0x2ac1ca - 0x2ac1d1
int64_t function_2ac1ca(void) {
    // 0x2ac1ca
    int64_t result; // 0x2ac1ca
    int16_t * v1 = (int16_t *)(result - 59); // 0x2ac1ca
    bool v2; // 0x2ac1ca
    *v1 = *v1 - (v2 ? -0x334e : -0x334f);
    return result;
}

// Address range: 0x2ac1d1 - 0x2ac25b
int64_t function_2ac1d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a2 - 24); // 0x2ac1d1
    int32_t v2 = a1; // 0x2ac1d1
    *v1 = *v1 & v2;
    int64_t v3; // 0x2ac1d1
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)a3;
    *(int32_t *)-0x23d35618 = *(int32_t *)-0x23d35618 + v2;
    __asm_in(104);
    unknown_797845f7();
    int64_t v4; // 0x2ac1d1
    char * v5 = (char *)(a2 - 81 + v4); // 0x2ac1f6
    unsigned char v6 = *v5; // 0x2ac1f6
    unsigned char v7 = (char)v4; // 0x2ac1f6
    char v8 = v6 + v7; // 0x2ac1f6
    *v5 = v8;
    int64_t result = unknown_fffffffff7560c00(); // 0x2ac1fa
    v3 = result;
    if (((v8 ^ v6) & (v8 ^ v7)) < 0) {
        // 0x2ac25a
        return result;
    }
    unsigned char v9 = llvm_ctpop_i8(v8); // 0x2ac1f6
    __asm_in_133(3072);
    unknown_ffffffff9221ba0d();
    int32_t * v10 = (int32_t *)(v4 + 57); // 0x2ac211
    *v10 = *v10 - 0x17d3f400;
    bool v11; // 0x2ac1d1
    return 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | (int64_t)(v8 < v6) | 64 * (int64_t)(v8 == 0) | 128 * (int64_t)(v8 < 0) | 16 * (int64_t)(v6 % 16 + v7 % 16 > 15) | 4 * (int64_t)(v9 % 2 == 0) | 2;
}

// Address range: 0x2ac260 - 0x2ac261
int64_t function_2ac260(void) {
    // 0x2ac260
    int64_t result; // 0x2ac260
    return result;
}

// Address range: 0x2ac28b - 0x2ac290
int64_t function_2ac28b(void) {
    // 0x2ac28b
    int64_t v1; // 0x2ac28b
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x2ac2d3 - 0x2ac2de
int64_t function_2ac2d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x2ac2d3
    *(char *)v2 = 0;
    unsigned char v3 = (char)a4 % 32; // 0x2ac2d5
    if (v3 != 0) {
        *(char *)v1 = *(char *)&v1 << v3;
    }
    unknown_ffffffffbad297dd(a1, a2, a3, a4);
    return function_2ac260();
}

// Address range: 0x2ac328 - 0x2ac32d
int64_t function_2ac328(void) {
    // 0x2ac328
    return function_3a50c4ca();
}

// Address range: 0x2ac346 - 0x2ac34a
int64_t function_2ac346(void) {
    // 0x2ac346
    int64_t result; // 0x2ac346
    __asm_out(-6, (char)result);
    return result;
}

// Address range: 0x2ac34d - 0x2ac354
int64_t function_2ac34d(int64_t a1) {
    // 0x2ac34d
    return unknown_281bec53(a1);
}

// Address range: 0x2ac375 - 0x2ac37b
int64_t function_2ac375(void) {
    // 0x2ac375
    return function_3296c44b();
}

// Address range: 0x2ac3b6 - 0x2ac418
int64_t function_2ac3b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t result; // 0x2ac3b6
    char * v2 = (char *)(result + 55); // 0x2ac3b6
    unsigned char v3 = *v2; // 0x2ac3b6
    unsigned char v4 = v3 + (char)result; // 0x2ac3b6
    bool v5; // 0x2ac3b6
    unsigned char v6 = v4 + (char)v5; // 0x2ac3b6
    *v2 = v6;
    __asm_outsb((int16_t)a3, *(char *)&v1);
    if (!((v5 ? v6 <= v3 : v4 < v3))) {
        char * v7 = (char *)(result + 90); // 0x2ac3ff
        *v7 = *v7 + (char)a3;
    }
    // 0x2ac402
    return result;
}

// Address range: 0x2ac4a9 - 0x2ac4c1
int64_t function_2ac4a9(int64_t a1, int64_t a2) {
    uint32_t v1 = *(int32_t *)0xa52ce1b3f4; // 0x2ac4a9
    int64_t v2 = v1; // 0x2ac4a9
    char * v3 = (char *)v2; // 0x2ac4b2
    unsigned char v4 = *v3; // 0x2ac4b2
    unsigned char v5 = v4 + (char)v1; // 0x2ac4b2
    *v3 = v5;
    int64_t v6; // 0x2ac4a9
    char * v7 = (char *)(v6 + 1); // 0x2ac4b5
    *v7 = *v7 - (v5 < v4 ? -126 : -127);
    int64_t v8; // 0x2ac4a9
    *(int32_t *)a1 = *(int32_t *)&v8 | (int32_t)a1;
    return (v2 + 183 + (int64_t)((v1 & 256) != 0)) % 256 | v2 & 0xffffff00;
}

// Address range: 0x45e234 - 0x45e236
int64_t function_45e234(int64_t a1, int64_t a2, int64_t a3) {
    // 0x45e234
    int64_t result; // 0x45e234
    return result;
}

// Address range: 0x45e290 - 0x45e2fa
int64_t function_45e290(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x45e290
    int64_t v1; // 0x45e290
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2; // 0x45e290
    int64_t v3 = v2;
    bool v4; // 0x45e290
    while (v4) {
        int64_t result = v3; // 0x45e2a2
        bool v5; // 0x45e290
        if (!v5) {
            // 0x45e2cd
            return result;
        }
        // 0x45e2a4
        int64_t v6; // 0x45e290
        int64_t v7 = v6;
        uint32_t v8 = (int32_t)v3 & 0x73390910; // 0x45e2a4
        int64_t result2 = v7 & 0xffffffff; // 0x45e2a9
        result = result2;
        if (v8 == 0) {
            // 0x45e2cd
            return result;
        }
        // 0x45e2ac
        int64_t v9; // 0x45e290
        int64_t v10 = v9;
        int64_t v11 = v8; // 0x45e2a9
        int32_t v12 = *(int32_t *)(v10 - 20) ^ (int32_t)v10; // 0x45e2ac
        v5 = v12 < 0;
        v4 = false;
        v6 = v11;
        v9 = v12;
        if (v12 >= 0 != v12 != 0) {
            char * v13 = (char *)(v11 - 0x7c6079fa); // 0x45e2d1
            *v13 = *v13 | (char)v7;
            return result2;
        }
        v3 = result2;
    }
    char v14 = *(char *)(v3 + 17); // 0x45e298
    return v3 & -256 | (int64_t)((char)v3 - v14);
}

// Address range: 0x45e2fb - 0x45e319
int64_t function_45e2fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45e2fb
    __asm_in_133((int16_t)a3);
    int32_t * v1 = (int32_t *)(a1 + 0x314e188d); // 0x45e2ff
    *v1 = (int32_t)a4 - 1 + *v1;
    *(int16_t *)(a3 + 0x4b3a078d) = (int16_t)__asm_sldt();
    return __asm_in(49);
}

// Address range: 0x45e352 - 0x45e355
int64_t function_45e352(int64_t a1) {
    // 0x45e352
    int64_t result; // 0x45e352
    return result;
}

// Address range: 0x4dbff9 - 0x4dbffa
int64_t function_4dbff9(void) {
    // 0x4dbff9
    int64_t result; // 0x4dbff9
    return result;
}

// Address range: 0x4dc006 - 0x4dc00d
int64_t function_4dc006(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4dc006
    int64_t v1; // 0x4dc006
    __asm_out_135((int16_t)a3, (int32_t)v1);
    return function_ffffffffef9b81d1();
}

// Address range: 0x4dc022 - 0x4dc023
int64_t function_4dc022(void) {
    // 0x4dc022
    int64_t result; // 0x4dc022
    return result;
}

// Address range: 0x4dc028 - 0x4dc02b
int64_t function_4dc028(int64_t a1) {
    // 0x4dc028
    int64_t result; // 0x4dc028
    return result;
}

// Address range: 0x4dc037 - 0x4dc03a
int64_t function_4dc037(void) {
    // 0x4dc037
    return function_4dc022();
}

// Address range: 0x4dc046 - 0x4dc049
int64_t function_4dc046(void) {
    // 0x4dc046
    int64_t result; // 0x4dc046
    return result;
}

// Address range: 0x4dc050 - 0x4dc051
int64_t function_4dc050(void) {
    // 0x4dc050
    int64_t result; // 0x4dc050
    return result;
}

// Address range: 0x4dc055 - 0x4dc058
int64_t function_4dc055(void) {
    // 0x4dc055
    return function_4dc050();
}

// Address range: 0x4dc0e1 - 0x4dc0e2
int64_t function_4dc0e1(void) {
    // 0x4dc0e1
    int64_t result; // 0x4dc0e1
    return result;
}

// Address range: 0x4dc0f6 - 0x4dc0f9
int64_t function_4dc0f6(void) {
    // 0x4dc0f6
    return function_4dc0e1();
}

// Address range: 0x4dc105 - 0x4dc108
int64_t function_4dc105(void) {
    // 0x4dc105
    int64_t result; // 0x4dc105
    return result;
}

// Address range: 0x4dc10f - 0x4dc110
int64_t function_4dc10f(void) {
    // 0x4dc10f
    int64_t result; // 0x4dc10f
    return result;
}

// Address range: 0x4dc114 - 0x4dc117
int64_t function_4dc114(void) {
    // 0x4dc114
    return function_4dc10f();
}

// Address range: 0x4dc123 - 0x4dc126
int64_t function_4dc123(int64_t a1) {
    // 0x4dc123
    int64_t result; // 0x4dc123
    return result;
}

// Address range: 0x4dc1aa - 0x4dc1ab
int64_t function_4dc1aa(void) {
    // 0x4dc1aa
    int64_t result; // 0x4dc1aa
    return result;
}

// Address range: 0x4dc1bf - 0x4dc1c2
int64_t function_4dc1bf(void) {
    // 0x4dc1bf
    return function_4dc1aa();
}

// Address range: 0x4dc1ce - 0x4dc1d1
int64_t function_4dc1ce(void) {
    // 0x4dc1ce
    int64_t result; // 0x4dc1ce
    return result;
}

// Address range: 0x4dc1d8 - 0x4dc1d9
int64_t function_4dc1d8(void) {
    // 0x4dc1d8
    int64_t result; // 0x4dc1d8
    return result;
}

// Address range: 0x4dc1dd - 0x4dc1e0
int64_t function_4dc1dd(void) {
    // 0x4dc1dd
    return function_4dc1d8();
}

// Address range: 0x4dc1ec - 0x4dc1ef
int64_t function_4dc1ec(int64_t a1) {
    // 0x4dc1ec
    int64_t result; // 0x4dc1ec
    return result;
}
