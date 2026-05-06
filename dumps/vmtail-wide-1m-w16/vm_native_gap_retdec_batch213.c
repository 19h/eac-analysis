/*
 * Targeted RetDec C for native executable gap queue batch 213.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x17de85-0x17e085 rank=- name=- kind=- bytes=- uncovered=-
 *   0x17e085-0x17e285 rank=- name=- kind=- bytes=- uncovered=-
 *   0x17e485-0x17e685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e521e-0x2e541e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e541e-0x2e561e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e561e-0x2e581e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e581e-0x2e5a1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x141513-0x141713 rank=- name=- kind=- bytes=- uncovered=-
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
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
char __asm_in_136(uint16_t port);
char __asm_in_137(uint16_t port);
int32_t __asm_in_138(uint16_t port);
char __asm_insb(uint16_t port);
int32_t __asm_insd(uint16_t port);
void __asm_out(uint16_t port, char value);
void __asm_out_133(uint16_t port, int32_t value);
void __asm_out_134(uint16_t port, int32_t value);
void __asm_out_135(uint16_t port, int32_t value);
void __asm_out_137(uint16_t port, char value);
void __asm_out_139(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
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
void __asm_rep_movsb_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_stosb_memset(char *dst, char value, int64_t count);
void __asm_rep_stosd_memset(char *dst, int32_t value, int64_t count);
void __asm_rep_stosq_memset(char *dst, int64_t value, int64_t count);
void __asm_rep_movsd_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_movsq_memcpy(char *dst, char *src, int64_t count);
int64_t __asm_hlt();
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_wait(void);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
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
int128_t __asm_por(int128_t left, int128_t right);
int128_t __asm_pxor(int128_t left, int128_t right);
int128_t __asm_xorps(int128_t left, int128_t right);
int128_t __asm_addps(int128_t left, int128_t right);
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

int64_t function_141513(void);
int64_t function_141549(void);
int64_t function_141594(int64_t a1, int64_t a2);
int64_t function_1415a0(void);
int64_t function_1415ad(void);
int64_t function_1415d8(void);
int64_t function_1415ed(void);
int64_t function_141606(void);
int64_t function_141618(void);
int64_t function_141642(void);
int64_t function_141667(void);
int64_t function_1416a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1416da(void);
int64_t function_17de3e();
int64_t function_17de85(void);
int64_t function_17de86(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_17df79(void);
int64_t function_17df87(void);
int64_t function_17df96(int64_t a1, int64_t a2);
int64_t function_17dfa9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17dfd7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_17dfff(void);
int64_t function_17e000(void);
int64_t function_17e001(int64_t a1, int64_t a2, int64_t a3);
int64_t function_17e02d(int64_t a1);
int64_t function_17e066(void);
int64_t function_17e0c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17e15a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17e1f3(int64_t a1, int64_t a2);
int64_t function_17e21d(int64_t a1);
int64_t function_17e26e(void);
int64_t function_17e485(int64_t a1);
int64_t function_17e4b5(void);
int64_t function_17e4fb(void);
int64_t function_17e534(int64_t a1, int64_t a2);
int64_t function_17e54d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_17e5c1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_17e5d6(void);
int64_t function_17e5f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17e60a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_17e665(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e521e(int32_t a1, int64_t a2);
int64_t function_2e5241(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2e5387(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2e551e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2e565d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e578f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2e5970(void);
int64_t function_2e5995(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_44594750();
int64_t function_c4258();
int64_t function_fe61813();
int64_t function_ffffffffd6ca8d76();
int64_t function_ffffffffe5230d0e();
int64_t function_ffffffffed19c8b7();
int64_t unknown_143ba332();
int64_t unknown_34191cee();
int64_t unknown_3aac41ce();
int64_t unknown_5b6519a8();
int64_t unknown_60210202();
int64_t unknown_615f389a();
int64_t unknown_716ef1b5();
int64_t unknown_ffffffff89eaa27d();
int64_t unknown_ffffffff91dce9b0();
int64_t unknown_ffffffffa3f549dd();
int64_t unknown_ffffffffba6bf8e0();
int64_t unknown_ffffffffc073cebf();
int64_t unknown_ffffffffda735dc9();
int64_t unknown_ffffffffe8a5941f();

// Address range: 0x141513 - 0x141517
int64_t function_141513(void) {
    // 0x141513
    int64_t v1; // 0x141513
    char v2 = v1;
    *(char *)v1 = 2 * v2;
    int64_t v3; // 0x141513
    return v1 & -256 | (int64_t)(*(char *)&v3 + v2);
}

// Address range: 0x141549 - 0x14154e
int64_t function_141549(void) {
    // 0x141549
    return function_44594750();
}

// Address range: 0x141594 - 0x14159c
int64_t function_141594(int64_t a1, int64_t a2) {
    // 0x141594
    int64_t result; // 0x141594
    *(int32_t *)a1 = (int32_t)(result | a2);
    return result;
}

// Address range: 0x1415a0 - 0x1415a1
int64_t function_1415a0(void) {
    // 0x1415a0
    int64_t result; // 0x1415a0
    return result;
}

// Address range: 0x1415ad - 0x1415ae
int64_t function_1415ad(void) {
    // 0x1415ad
    int64_t result; // 0x1415ad
    return result;
}

// Address range: 0x1415d8 - 0x1415d9
int64_t function_1415d8(void) {
    // 0x1415d8
    int64_t result; // 0x1415d8
    return result;
}

// Address range: 0x1415ed - 0x1415ee
int64_t function_1415ed(void) {
    // 0x1415ed
    int64_t result; // 0x1415ed
    return result;
}

// Address range: 0x141606 - 0x141612
int64_t function_141606(void) {
    char v1 = *(char *)-0x11a34af3; // 0x141606
    int64_t v2; // 0x141606
    *(char *)-0x11a34af3 = v1 + (char)((uint64_t)v2 / 256);
    return function_fe61813();
}

// Address range: 0x141618 - 0x14161a
int64_t function_141618(void) {
    // 0x141618
    return function_1415d8();
}

// Address range: 0x141642 - 0x141647
int64_t function_141642(void) {
    // 0x141642
    return function_ffffffffd6ca8d76();
}

// Address range: 0x141667 - 0x14166a
int64_t function_141667(void) {
    // 0x141667
    return function_1415ed();
}

// Address range: 0x1416a3 - 0x1416af
int64_t function_1416a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1416a3
    int64_t result; // 0x1416a3
    return result;
}

// Address range: 0x1416da - 0x1416e2
int64_t function_1416da(void) {
    // 0x1416da
    return unknown_ffffffffba6bf8e0();
}

// Address range: 0x17de85 - 0x17de86
int64_t function_17de85(void) {
    // 0x17de85
    int64_t result; // 0x17de85
    return result;
}

// Address range: 0x17de86 - 0x17deb9
int64_t function_17de86(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x17de86
    int64_t v1; // 0x17de86
    int64_t v2 = v1;
    int64_t v3 = a1;
    bool v4; // 0x17de86
    *(int32_t *)v2 = (int32_t)v2 - (int32_t)a3 + (int32_t)v4;
    *(char *)a1 = *(char *)&v3 + (char)(a4 / 256);
    *(int64_t *)(a3 + 0x1e828e7) = a6;
    unknown_615f389a();
    char * v5 = (char *)(v1 + 0x1e850f8); // 0x17de95
    *v5 = *v5 & (char)v2;
    if (a4 == 0) {
        function_17de3e();
    }
    // 0x17de9d
    unknown_5b6519a8();
    __asm_sti();
    unknown_716ef1b5();
    return __asm_wait();
}

// Address range: 0x17df79 - 0x17df7b
int64_t function_17df79(void) {
    // 0x17df79
    int64_t v1; // 0x17df79
    return function_17dfd7(v1, v1, v1, v1);
}

// Address range: 0x17df87 - 0x17df88
int64_t function_17df87(void) {
    // 0x17df87
    int64_t result; // 0x17df87
    return result;
}

// Address range: 0x17df96 - 0x17dfa9
int64_t function_17df96(int64_t a1, int64_t a2) {
    // 0x17df96
    int64_t v1; // 0x17df96
    int64_t v2 = (int64_t)*(int32_t *)(v1 + 0x3901e840); // 0x17df96
    int64_t v3 = -0x45620107 * v2; // 0x17df96
    char v4 = *(char *)(a2 + 20); // 0x17dfa0
    return v3 & 0xffffff00 | (int64_t)((char)v3 - v4 + (char)(v3 != -0x4562010700000000 * v2 >> 32));
}

// Address range: 0x17dfa9 - 0x17dfd0
int64_t function_17dfa9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = unknown_ffffffff91dce9b0(); // 0x17dfaa
    char * v2 = (char *)v1; // 0x17dfaf
    *v2 = *v2 + (char)(v1 / 256);
    unknown_ffffffffc073cebf();
    return unknown_3aac41ce();
}

// Address range: 0x17dfd7 - 0x17dffa
int64_t function_17dfd7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x17dfd7
    int64_t v1; // 0x17dfd7
    int64_t v2 = v1;
    int64_t v3 = unknown_ffffffffa3f549dd(); // 0x17dfd7
    char v4 = *(char *)(a4 + a1); // 0x17dfdc
    int64_t v5 = a3; // bp-8, 0x17dfdf
    char * v6 = (char *)(a1 + 0x4901e806); // 0x17dfe1
    char v7 = *v6; // 0x17dfe1
    unsigned char v8 = (char)((int64_t)&v5 / 256); // 0x17dfe1
    *v6 = v7 + v8;
    unknown_34191cee();
    int32_t * v9 = (int32_t *)(2 * v1 - 19 + (v3 & 0xffffffff)); // 0x17dff0
    *v9 = *v9 + (int32_t)a4;
    return v2 & 0xffffff00 | (int64_t)((v4 | (char)v2) + (char)(a4 / 256) + (char)(-1 - v7 >= v8));
}

// Address range: 0x17dfff - 0x17e000
int64_t function_17dfff(void) {
    // 0x17dfff
    int64_t result; // 0x17dfff
    return result;
}

// Address range: 0x17e000 - 0x17e001
int64_t function_17e000(void) {
    // 0x17e000
    int64_t result; // 0x17e000
    return result;
}

// Address range: 0x17e001 - 0x17e016
int64_t function_17e001(int64_t a1, int64_t a2, int64_t a3) {
    char v1 = *(char *)0x501c9b0a; // 0x17e003
    int64_t v2; // 0x17e001
    *(char *)0x501c9b0a = v1 + (char)((uint64_t)v2 / 256);
    __asm_in((int16_t)a3);
    return function_ffffffffed19c8b7();
}

// Address range: 0x17e02d - 0x17e02e
int64_t function_17e02d(int64_t a1) {
    // 0x17e02d
    int64_t result; // 0x17e02d
    return result;
}

// Address range: 0x17e066 - 0x17e067
int64_t function_17e066(void) {
    // 0x17e066
    int64_t result; // 0x17e066
    return result;
}

// Address range: 0x17e0c6 - 0x17e132
int64_t function_17e0c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int16_t v2 = a3; // 0x17e0c6
    *(char *)a1 = __asm_insb(v2);
    int64_t v3; // 0x17e0c6
    __asm_out_133(v2, (int32_t)v3);
    bool v4; // 0x17e0c6
    if (v4) {
        function_17e066();
    }
    // 0x17e0ce
    __asm_outsb(v2, *(char *)&v1);
    int32_t * v5 = (int32_t *)(a1 - 97); // 0x17e0cf
    *v5 = *v5 / 16;
    char * v6 = (char *)(a4 + 16); // 0x17e0d4
    *v6 = *v6 + (char)v1;
    int64_t v7 = v1 & 0xffffff00 | (int64_t)*(char *)-0x4c96a3c5e5f8ff4d; // 0x17e0dc
    char * v8 = (char *)(a3 - 108); // 0x17e0e5
    *v8 = *v8 + (char)a3;
    uint16_t v9 = (int16_t)v7; // 0x17e0e8
    uint16_t v10 = (int16_t)*(char *)(2 * v7); // 0x17e0e8
    char v11 = (char)(v9 / v10) ^ -13; // 0x17e0f5
    if (v11 >= 0) {
        int64_t v12 = v1 & 0xffff0000 | (int64_t)(256 * (v9 % v10)) | (int64_t)v11; // 0x17e0f5
        uint32_t v13 = (int32_t)a4; // 0x17e0f9
        int32_t v14 = *(int32_t *)v12; // 0x17e0fb
        int32_t * v15 = (int32_t *)(a1 + 0x589a1ea1); // 0x17e102
        int64_t v16; // bp-8, 0x17e0c6
        *v15 = *v15 + (int32_t)(int64_t)&v16;
        return (int32_t)v12 + (int32_t)(2 * v13 < v13) + v14;
    }
    // 0x17e10c
    unknown_ffffffffe8a5941f();
    uint32_t v17 = *(int32_t *)0x35130225; // 0x17e11e
    uint32_t v18 = v17 + (int32_t)a1; // 0x17e11e
    *(int32_t *)0x35130225 = v18;
    char * v19 = (char *)(v3 + 0x3afd1600); // 0x17e124
    *v19 = *v19 - 14 + (char)(v18 < v17);
    return unknown_143ba332();
}

// Address range: 0x17e15a - 0x17e184
int64_t function_17e15a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17e15a
    int64_t result; // 0x17e15a
    *(int32_t *)a4 = (int32_t)(result | a4);
    if (llvm_ctpop_i8(*(char *)(2 * a1 + 0x1e83a78) - (char)(result / 256)) % 2 == 0) {
        // 0x17e165
        return result;
    }
    int32_t * v1 = (int32_t *)(2 * result + a2); // 0x17e178
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x17e1f3 - 0x17e1fa
int64_t function_17e1f3(int64_t a1, int64_t a2) {
    // 0x17e1f3
    int64_t v1; // 0x17e1f3
    return v1 & 0xffffffff;
}

// Address range: 0x17e21d - 0x17e21f
int64_t function_17e21d(int64_t a1) {
    // 0x17e21d
    int64_t v1; // 0x17e21d
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x17e26e - 0x17e273
int64_t function_17e26e(void) {
    // 0x17e26e
    return function_ffffffffe5230d0e();
}

// Address range: 0x17e485 - 0x17e4a1
int64_t function_17e485(int64_t a1) {
    // 0x17e485
    int64_t v1; // 0x17e485
    int32_t * v2 = (int32_t *)(v1 - 0x623e0c43); // 0x17e48d
    *v2 = *v2 | 0x6101e801;
    int64_t result = v1 ^ 173; // 0x17e497
    __asm_out(-0x17da, (char)result);
    return result;
}

// Address range: 0x17e4b5 - 0x17e4b6
int64_t function_17e4b5(void) {
    // 0x17e4b5
    int64_t result; // 0x17e4b5
    return result;
}

// Address range: 0x17e4fb - 0x17e4fe
int64_t function_17e4fb(void) {
    // 0x17e4fb
    int64_t v1; // 0x17e4fb
    int64_t v2 = v1;
    bool v3; // 0x17e4fb
    return (v2 - (v3 ? 102 : 101)) % 256 | v2 & -256;
}

// Address range: 0x17e534 - 0x17e539
int64_t function_17e534(int64_t a1, int64_t a2) {
    // 0x17e534
    int64_t result; // 0x17e534
    bool v1; // 0x17e534
    *(int32_t *)a1 = (int32_t)result - (int32_t)a2 + (int32_t)v1;
    return result;
}

// Address range: 0x17e54d - 0x17e55f
int64_t function_17e54d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x17e54d
    float80_t v1; // 0x17e54d
    *(int16_t *)(a3 - 0x7dd165c1) = (int16_t)v1;
    *(char *)0xc63c25c = *(char *)0xc63c25c + (char)a1;
    int64_t result; // 0x17e54d
    return result;
}

// Address range: 0x17e5c1 - 0x17e5d5
int64_t function_17e5c1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x17e5c1
    __asm_out_133((int16_t)unknown_ffffffffda735dc9() ^ -0x20c0, (int32_t)a3);
    return a3 & 0xffffffff;
}

// Address range: 0x17e5d6 - 0x17e5d9
int64_t function_17e5d6(void) {
    // 0x17e5d6
    int64_t v1; // 0x17e5d6
    return function_17e60a(v1, v1, v1);
}

// Address range: 0x17e5f5 - 0x17e60a
int64_t function_17e5f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17e5f5
    unknown_60210202();
    return __asm_sti();
}

// Address range: 0x17e60a - 0x17e620
int64_t function_17e60a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x17e60a
    int64_t result; // 0x17e60a
    bool v1; // 0x17e60a
    if ((char)v1 + (char)a2 > (char)(result / 256)) {
        // 0x17e67f
        return result;
    }
    // 0x17e60e
    __asm_iretd();
    __asm_sti();
    int64_t result2 = (int64_t)*(int32_t *)(result - 24); // 0x17e610
    int32_t v2 = a1; // 0x17e613
    *(int32_t *)a2 = (int32_t)a2 + v2;
    int32_t * v3 = (int32_t *)(result2 + 46); // 0x17e61c
    *v3 = *v3 + v2;
    return result2;
}

// Address range: 0x17e665 - 0x17e67f
int64_t function_17e665(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 93); // 0x17e66d
    int64_t v2; // 0x17e665
    *v1 = *v1 + (int32_t)v2;
    int64_t result = unknown_ffffffff89eaa27d(); // 0x17e676
    char * v3 = (char *)(result + 1); // 0x17e67c
    *v3 = *v3 + (char)v2;
    return result;
}

// Address range: 0x2e521e - 0x2e5241
int64_t function_2e521e(int32_t a1, int64_t a2) {
    // 0x2e521e
    int64_t v1; // 0x2e521e
    return function_c4258(v1, v1, v1, v1, v1, v1, a1 + 8);
}

// Address range: 0x2e5241 - 0x2e5387
int64_t function_2e5241(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x7064efd9; // bp-32, 0x2e52c7
    int64_t v2 = (int64_t)&v1; // 0x2e52f8
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x2e5300
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x2e5304
    *v3 = 0x28fd0ad0;
    *v4 = a7;
    int64_t v5 = v2 + 8; // 0x2e5324
    *(int64_t *)v5 = *v3;
    *v4 = *(int64_t *)(v2 + 16);
    *(int64_t *)(v2 + 24) = *v3;
    *v4 = a7;
    *v3 = v5;
    *v3 = v1;
    *v4 = v1;
    return function_c4258(a1, a2, a3, a4, a5, a6, (int32_t)v1);
}

// Address range: 0x2e5387 - 0x2e551e
int64_t function_2e5387(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2e5387
    int64_t v1; // bp-56, 0x2e5387
    int64_t v2 = (int64_t)&v1; // 0x2e54d7
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x2e54e0
    *v3 = 0x2e1586;
    *(int64_t *)(v2 + 32) = v1;
    int64_t * v4 = (int64_t *)(v2 + 8); // 0x2e54e7
    int64_t v5 = *v4; // 0x2e54e7
    v1 = v5;
    *v3 = v5;
    int64_t v6 = *(int64_t *)(v2 + 16); // 0x2e5500
    *v4 = v6;
    v1 = v6;
    return function_c4258(a1, a2, a3, a4, a5, a6, (int32_t)a7);
}

// Address range: 0x2e551e - 0x2e565d
int64_t function_2e551e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a7; // bp-40, 0x2e55e0
    int64_t result = function_c4258(a1, (int64_t)&v1, a3, a4, a5, a6, (int32_t)a7); // 0x2e5658
    return result;
}

// Address range: 0x2e565d - 0x2e578f
int64_t function_2e565d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = 0x55ab4240; // bp-40, 0x2e56bf
    int64_t v2 = (int64_t)&v1; // 0x2e56ef
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x2e56f7
    int64_t v4 = *v3; // 0x2e56f7
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x2e56f7
    *(int64_t *)(v2 - 16) = v4;
    *v5 = 0x178c57ff;
    bool v6; // 0x2e565d
    *(int64_t *)(v2 - 24) = 0x4000 * (int64_t)v6 | 2048 * (int64_t)v6 | 1024 * (int64_t)v6 | 512 * (int64_t)v6 | 256 * (int64_t)v6 | 128 * (int64_t)v6 | 64 * (int64_t)v6 | 16 * (int64_t)v6 | (int64_t)v6 | 4 * (int64_t)v6 | 2;
    int64_t v7 = v2 + 8; // 0x2e571a
    int64_t * v8 = (int64_t *)v7; // 0x2e571a
    *v8 = *v5;
    *v5 = v4;
    *(int64_t *)(v2 + 32) = *(int64_t *)&v1;
    *(int64_t *)&v1 = *v8;
    *v5 = v7;
    int64_t v9 = *v3; // 0x2e5774
    *v8 = v9;
    *(int64_t *)&v1 = v9;
    int64_t v10; // 0x2e565d
    return function_c4258(a1, a2, a3, a4, a5, v10, (int32_t)v9);
}

// Address range: 0x2e578f - 0x2e5911
int64_t function_2e578f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2e578f
    int64_t v1; // bp-40, 0x2e578f
    int64_t v2 = (int64_t)&v1; // 0x2e5839
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x2e5854
    int64_t v4 = v2 - 8; // 0x2e5854
    int64_t * v5 = (int64_t *)v4; // 0x2e5854
    *v5 = v3;
    int64_t v6 = v2 - 16; // 0x2e5858
    int64_t * v7 = (int64_t *)v6; // 0x2e5858
    *v7 = v3;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x2e586f
    *v8 = v4;
    int64_t v9 = v2 + 8; // 0x2e5878
    int64_t v10 = *(int64_t *)v9; // 0x2e5878
    *(int64_t *)(v2 - 32) = v3 + 0x7ebff4d3;
    v1 = v3;
    *v7 = a4;
    *v8 = v6;
    *v7 = v6;
    *v5 = v10;
    *(int64_t *)(v2 + 24) = v10;
    *v7 = v1;
    *v5 = v9;
    *v5 = v1;
    *v7 = v1;
    int64_t v11; // 0x2e578f
    return function_c4258(a1, a2, a3, *v7, a5, a6, (int32_t)v11);
}

// Address range: 0x2e5970 - 0x2e5971
int64_t function_2e5970(void) {
    // 0x2e5970
    int64_t result; // 0x2e5970
    return result;
}

// Address range: 0x2e5995 - 0x2e5a1e
int64_t function_2e5995(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char * v1 = (char *)(a4 - 127); // 0x2e5995
    *v1 = *v1 | (char)a4;
    int64_t result; // 0x2e5995
    return result;
}
