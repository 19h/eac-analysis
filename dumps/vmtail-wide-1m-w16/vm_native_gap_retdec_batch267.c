/*
 * Targeted RetDec C for native executable gap queue batch 267.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xeaf9c-0xeb19c rank=- name=- kind=- bytes=- uncovered=-
 *   0xeb39c-0xeb59c rank=- name=- kind=- bytes=- uncovered=-
 *   0xeb79c-0xeb99c rank=- name=- kind=- bytes=- uncovered=-
 *   0x18e485-0x18e685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18ea85-0x18ec85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e20e8-0x1e22e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e22e8-0x1e24e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e24e8-0x1e26e8 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g1;
extern int g2;
extern int g3;
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
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
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

int64_t function_18e485(int64_t a1, int64_t result);
int64_t function_18e507(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18e519(void);
int64_t function_18e52a(void);
int64_t function_18e5d5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_18e5f2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18ea85(int64_t a1);
int64_t function_18eac6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18eadb(int64_t a1);
int64_t function_18eb10(int64_t a1);
int64_t function_18eb1a(int64_t a1);
int64_t function_18eb48(void);
int64_t function_18eb5a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18eb87(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_18ebf6(void);
int64_t function_18ebf7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18ec76(void);
int64_t function_1e20cc();
int64_t function_1e20e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e2136(void);
int64_t function_1e213b(void);
int64_t function_1e2142(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1e2150(int64_t a1);
int64_t function_1e2172(void);
int64_t function_1e21be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1e2288(void);
int64_t function_1e228d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e2295(int64_t a1, int64_t a2);
int64_t function_1e22b9(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_1e2301(int64_t a1, int64_t a2);
int64_t function_1e232d(int64_t a1);
int64_t function_1e23d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e23ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e2526(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e2558(void);
int64_t function_1e25a4(void);
int64_t function_1e25a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e25c8(void);
int64_t function_1e25e1(void);
int64_t function_1e2649(void);
int64_t function_1e2681(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1e2694(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f75bb8();
int64_t function_6268b71b();
int64_t function_7f5c2475();
int64_t function_eaf9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_eb02a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_eb121(void);
int64_t function_eb17d(int64_t a1, int64_t a2);
int64_t function_eb18e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_eb326();
int64_t function_eb39c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_eb45e(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_eb50b(void);
int64_t function_eb588(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_eb79c(void);
int64_t function_eb80e(void);
int64_t function_eb836(void);
int64_t function_eb83e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_eb853(int64_t a1, int64_t a2);
int64_t function_eb958(void);
int64_t function_eb95f(void);
int64_t function_eb97f(void);
int64_t function_ffffffffe8853b38();
int64_t unknown_101a5d93();
int64_t unknown_1475a8de();
int64_t unknown_1e6c0868();
int64_t unknown_2667747();
int64_t unknown_28f0a5d9();
int64_t unknown_4f19af75();
int64_t unknown_54498984();
int64_t unknown_54e8b9e6();
int64_t unknown_6cc524c3();
int64_t unknown_7548b331();
int64_t unknown_7c06b4f();
int64_t unknown_ffffffff9d2ab475();
int64_t unknown_ffffffffa026c609();
int64_t unknown_ffffffffa4acbd9a();
int64_t unknown_ffffffffb34f43a2();
int64_t unknown_ffffffffbd2f27ca();
int64_t unknown_ffffffffcc5a00a2();
int64_t unknown_ffffffffcf1458db();
int64_t unknown_ffffffffd70959cd();
int64_t unknown_ffffffffda109fa2();
int64_t unknown_fffffffffaf752b8();

// Address range: 0xeaf9c - 0xeb029
int64_t function_eaf9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    unknown_ffffffffcc5a00a2();
    int64_t v2; // 0xeaf9c
    int32_t v3 = *(int32_t *)(v2 - 0x17fc553a); // 0xeafa4
    uint32_t v4 = *(int32_t *)(a1 + 9) + (int32_t)v2 ^ v3; // 0xeafa4
    uint32_t v5 = *(int32_t *)-0x10f127fe; // 0xeafaa
    uint32_t v6 = v5 + (int32_t)a2; // 0xeafaa
    *(int32_t *)-0x10f127fe = v6;
    unsigned char v7 = (char)(v4 / 256) + (char)a3 + (char)(v6 < v5); // 0xeafb0
    unknown_fffffffffaf752b8();
    unknown_6cc524c3();
    int32_t * v8 = (int32_t *)((256 * (int64_t)v7 | (int64_t)(v4 & -0xff01)) - 0x7df74020); // 0xeafc2
    *v8 = *v8 & 0x1e873b2;
    __asm_sti();
    int64_t result = unknown_ffffffffcf1458db(); // 0xeafd5
    *(char *)v1 = *(char *)&v1 + v7;
    char * v9 = (char *)(result - 0x54fe1800); // 0xeafe1
    *v9 = *v9 + (char)result;
    char * v10 = (char *)(2 * result); // 0xeafe7
    *v10 = *v10 + (char)v4;
    return result;
}

// Address range: 0xeb02a - 0xeb115
int64_t function_eb02a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a5;
    int64_t v3 = a4 - 1; // 0xeb02a
    int64_t result; // 0xeb02a
    if (v3 == 0) {
        int32_t * v4 = (int32_t *)(a1 + 0x110123f9); // 0xeb02c
        *v4 = *v4 + (int32_t)a1;
        int32_t * v5 = (int32_t *)(result + 5); // 0xeb034
        *v5 = *v5 + (int32_t)result;
        return result;
    }
    // 0xeb04f
    int64_t v6; // 0xeb02a
    int64_t v7 = v6 & 0xffffffff; // 0xeb04f
    int32_t * v8 = (int32_t *)(v6 - 6); // 0xeb052
    *v8 = *v8 + (int32_t)a3;
    char * v9 = (char *)(v6 - 0x17f47ee0); // 0xeb05b
    *v9 = *v9 + (char)(v6 / 256);
    int32_t * v10 = (int32_t *)(2 * v6 + v3); // 0xeb061
    int32_t v11 = v6; // 0xeb061
    *v10 = *v10 + v11;
    int64_t v12 = a1 & 0xffffffde | 33; // 0xeb066
    result = v12;
    uint64_t v13 = a4 - 2; // 0xeb068
    if (v13 == 0) {
        int64_t v14 = unknown_ffffffff9d2ab475(v7); // 0xeb06f
        int32_t * v15 = (int32_t *)(a2 + 31); // 0xeb074
        *v15 = *v15 + (int32_t)v14;
        __asm_out(117, (char)v2);
        return unknown_54498984();
    }
    uint64_t v16 = __asm_iretd(); // 0xeb0bf
    char * v17 = (char *)v7; // 0xeb0c0
    *v17 = (char)(v16 / 256 | v12);
    unknown_ffffffffd70959cd();
    int32_t * v18 = (int32_t *)(a4 + 56 + v1); // 0xeb0ce
    *v18 = *v18 - 0xbef7f43;
    int64_t v19 = (int64_t)&v2; // 0xeb0d6
    *(int32_t *)-0x16f8351e = *(int32_t *)-0x16f8351e + v11;
    int32_t * v20 = (int32_t *)(v1 - 46); // 0xeb0e1
    uint32_t v21 = *v20; // 0xeb0e1
    uint32_t v22 = v21 + (int32_t)v13; // 0xeb0e1
    *v20 = v22;
    *v17 = *(char *)&result + (char)(v22 < v21) + (char)v1;
    uint32_t v23 = *(int32_t *)a2; // 0xeb0ea
    int64_t v24 = v23; // 0xeb0ea
    int32_t * v25 = (int32_t *)(v24 - 0x7ccaf2e1); // 0xeb0ec
    *v25 = *v25 | -126;
    int64_t * v26 = (int64_t *)(v19 + 8); // 0xeb0f2
    char * v27 = (char *)v24; // 0xeb0fa
    *v27 = *v27 + (char)v23;
    char * v28 = (char *)(v1 + 0x3d000002); // 0xeb0fc
    *v28 = *v28 + (char)(v23 / 256);
    *(int32_t *)v1 = (int32_t)v19 + 16 + *(int32_t *)&v1;
    int64_t v29 = *v26 & 0xffffffff; // 0xeb104
    result = v29;
    __asm_movups(*(int128_t *)v29);
    *v26 = v24;
    bool v30; // 0xeb02a
    char * v31 = (char *)(a2 + 0x1e80af0 + (v30 ? -4 : 4) + 4 * v1); // 0xeb10e
    *v31 = *v31 - (char)(v13 / 256);
    return result;
}

// Address range: 0xeb121 - 0xeb124
int64_t function_eb121(void) {
    // 0xeb121
    int64_t result; // 0xeb121
    return result;
}

// Address range: 0xeb17d - 0xeb18c
int64_t function_eb17d(int64_t a1, int64_t a2) {
    // 0xeb17d
    bool v1; // 0xeb17d
    int64_t v2 = v1 ? -4 : 4; // 0xeb17d
    return __asm_int1(v2 + a1, v2 + a2);
}

// Address range: 0xeb18e - 0xeb198
int64_t function_eb18e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xeb18e
    int64_t result; // 0xeb18e
    __asm_outsd((int16_t)a3, (int32_t)result);
    *(int16_t *)a4 = (int16_t)result % 4;
    return result;
}

// Address range: 0xeb39c - 0xeb446
int64_t function_eb39c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t v2; // 0xeb39c
    char * v3 = (char *)(v2 + 6); // 0xeb39c
    unsigned char v4 = *v3; // 0xeb39c
    unsigned char v5 = v4 + (char)v2; // 0xeb39c
    *v3 = v5;
    char v6 = *(char *)&v1 + (char)a3 + (char)(v5 < v4); // 0xeb39f
    *(char *)a1 = v6;
    int64_t v7; // 0xeb39c
    if (v6 == 0) {
        v7 = function_eb326();
    }
    char * v8 = (char *)(v1 - 112); // 0xeb3b4
    *v8 = *v8 - 59;
    int64_t v9 = a4; // 0xeb3b7
    int64_t v10 = (int64_t)(*(int32_t *)(a3 + 9 + 2 * v2) & (int32_t)v7); // 0xeb3b7
    int64_t v11 = v10 | 0x13dc5ea00000000; // 0xeb3bb
    int64_t v12 = (int64_t)*(int32_t *)(v9 + 96); // 0xeb3bb
    v10 = v11 / v12 & 0xffffffff;
    unsigned char v13 = *(char *)v10 + (char)v9; // 0xeb3be
    unsigned char v14 = llvm_ctpop_i8(v13); // 0xeb3be
    v9 = v9 & -256 | (int64_t)v13;
    int64_t v15 = v11 % v12 & 0xffffffff; // 0xeb3c0
    while (v14 % 2 == 0) {
        // 0xeb3bb
        v11 = v10 | 0x100000000 * v15;
        v12 = (int64_t)*(int32_t *)(v9 + 96);
        v10 = v11 / v12 & 0xffffffff;
        v13 = *(char *)v10 + (char)v9;
        v14 = llvm_ctpop_i8(v13);
        v9 = v9 & -256 | (int64_t)v13;
        v15 = v11 % v12 & 0xffffffff;
    }
    // 0xeb3c2
    __asm_int3((int64_t)&g3, (int64_t)&g3, (int64_t)&g3, (int64_t)&g3);
    int64_t v16; // bp-2562, 0xeb39c
    int64_t v17 = v9 + (int64_t)&v16; // 0xeb3c3
    char v18 = v2 / 256; // 0xeb3c6
    *(char *)-0x4353a031 = *(char *)-0x4353a031 + v18;
    *(char *)v1 = (char)v17;
    int64_t result = v17 & 0xffffff0b | 244; // 0xeb3d9
    if (v9 == 1) {
        // 0xeb441
        return result;
    }
    // 0xeb3e1
    *(char *)-0x592b1d18 = *(char *)-0x592b1d18 + v18;
    return result;
}

// Address range: 0xeb45e - 0xeb506
int64_t function_eb45e(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = *(char *)-0x73ffa98c; // 0xeb46d
    int64_t v2; // 0xeb45e
    *(char *)-0x73ffa98c = v1 + (char)((uint64_t)v2 / 256);
    int32_t v3 = *(int32_t *)0x68ad4bea; // 0xeb4e3
    *(int32_t *)0x68ad4bea = v3 + (int32_t)(a1 / 2) % 0x80000000;
    bool v4; // 0xeb45e
    int64_t v5 = (int64_t)*(int32_t *)((v4 ? -1 : 1) + a2); // 0xeb4f6
    int32_t * v6 = (int32_t *)v5; // 0xeb4f7
    *v6 = *v6 + 1;
    return v5 & 0xffff00ff | (int64_t)&g1;
}

// Address range: 0xeb50b - 0xeb510
int64_t function_eb50b(void) {
    // 0xeb50b
    return function_1f75bb8();
}

// Address range: 0xeb588 - 0xeb58b
int64_t function_eb588(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xeb588
    float80_t v1; // 0xeb588
    *(int16_t *)a4 = (int16_t)v1;
    int64_t result; // 0xeb588
    return result;
}

// Address range: 0xeb79c - 0xeb7a3
int64_t function_eb79c(void) {
    int64_t result = unknown_ffffffffda109fa2(); // 0xeb79c
    __asm_rcl(*(char *)result);
    return result;
}

// Address range: 0xeb80e - 0xeb80f
int64_t function_eb80e(void) {
    // 0xeb80e
    int64_t result; // 0xeb80e
    return result;
}

// Address range: 0xeb836 - 0xeb837
int64_t function_eb836(void) {
    // 0xeb836
    int64_t result; // 0xeb836
    return result;
}

// Address range: 0xeb83e - 0xeb853
int64_t function_eb83e(int64_t a1, int64_t a2, int64_t a3) {
    // 0xeb83e
    int64_t v1; // 0xeb83e
    char v2 = *(char *)(v1 - 96); // 0xeb83e
    int32_t * v3 = (int32_t *)((unknown_2667747() & -256 | (uint64_t)v1 % 256) - 24); // 0xeb848
    int32_t v4 = *v3; // 0xeb848
    *v3 = 2 * v4;
    char * v5 = (char *)(a1 - 119); // 0xeb84c
    *v5 = v2 - (char)(v1 / 256) + (char)(v4 < 0) + *v5;
    return function_eb836();
}

// Address range: 0xeb853 - 0xeb868
int64_t function_eb853(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 87); // 0xeb858
    int64_t v2; // 0xeb853
    *v1 = *v1 + (int32_t)v2;
    return unknown_1e6c0868();
}

// Address range: 0xeb958 - 0xeb959
int64_t function_eb958(void) {
    // 0xeb958
    int64_t result; // 0xeb958
    return result;
}

// Address range: 0xeb95f - 0xeb961
int64_t function_eb95f(void) {
    // 0xeb95f
    return function_eb958();
}

// Address range: 0xeb97f - 0xeb981
int64_t function_eb97f(void) {
    // 0xeb97f
    int64_t result; // 0xeb97f
    return result;
}

// Address range: 0x18e485 - 0x18e48c
int64_t function_18e485(int64_t a1, int64_t result) {
    // 0x18e485
    return result;
}

// Address range: 0x18e507 - 0x18e516
int64_t function_18e507(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18e507
    *(char *)a1 = __asm_insb((int16_t)a3);
    return function_ffffffffe8853b38();
}

// Address range: 0x18e519 - 0x18e51f
int64_t function_18e519(void) {
    // 0x18e519
    return function_6268b71b();
}

// Address range: 0x18e52a - 0x18e533
int64_t function_18e52a(void) {
    // 0x18e52a
    return unknown_7548b331();
}

// Address range: 0x18e5d5 - 0x18e5de
int64_t function_18e5d5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x18e5d5
    int64_t v1; // 0x18e5d5
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + (char)(a3 / 256);
    int64_t v3; // 0x18e5d5
    __asm_outsd((int16_t)a3, *(int32_t *)&v3);
    return unknown_1475a8de();
}

// Address range: 0x18e5f2 - 0x18e602
int64_t function_18e5f2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18e5f2
    int64_t v1; // 0x18e5f2
    *(int32_t *)a1 = (int32_t)v1;
    return v1 & 0xfe17617a | 0x1e89e85;
}

// Address range: 0x18ea85 - 0x18ea8e
int64_t function_18ea85(int64_t a1) {
    // 0x18ea85
    int64_t result; // 0x18ea85
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x18eac6 - 0x18eace
int64_t function_18eac6(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 0x29a696eb); // 0x18eac6
    *v1 = *v1 + (int32_t)a1;
    return unknown_7c06b4f();
}

// Address range: 0x18eadb - 0x18eade
int64_t function_18eadb(int64_t a1) {
    // 0x18eadb
    int64_t result; // 0x18eadb
    return result;
}

// Address range: 0x18eb10 - 0x18eb13
int64_t function_18eb10(int64_t a1) {
    // 0x18eb10
    int64_t result; // 0x18eb10
    return result;
}

// Address range: 0x18eb1a - 0x18eb20
int64_t function_18eb1a(int64_t a1) {
    // 0x18eb1a
    int64_t result; // 0x18eb1a
    return result;
}

// Address range: 0x18eb48 - 0x18eb55
int64_t function_18eb48(void) {
    // 0x18eb48
    unknown_7c06b4f();
    unknown_ffffffffa026c609();
    int64_t v1; // 0x18eb48
    return function_18eb87(v1, v1, v1, v1, (int64_t)&g3);
}

// Address range: 0x18eb5a - 0x18eb78
int64_t function_18eb5a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18eb5a
    int64_t v1; // 0x18eb5a
    float80_t v2; // 0x18eb5a
    *(float32_t *)(a2 + 0x1e8c685 + v1) = (float32_t)v2;
    int16_t v3 = a3; // 0x18eb61
    char v4 = v1; // 0x18eb61
    __asm_out_133(v3, v4);
    char * v5 = (char *)(v1 + 0x3235000); // 0x18eb66
    *v5 = *v5 + v4;
    char * v6 = (char *)(a3 + 1); // 0x18eb6c
    *v6 = *v6 + (char)(v1 / 256);
    int64_t v7 = unknown_4f19af75(); // 0x18eb6f
    int64_t v8; // 0x18eb5a
    __asm_outsb(v3, *(char *)&v8);
    return v7 & -256 | (int64_t)__asm_in(v3);
}

// Address range: 0x18eb87 - 0x18ebbf
int64_t function_18eb87(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x18eb87
    int64_t v1; // 0x18eb87
    *(int32_t *)a1 = (int32_t)v1;
    char * v2 = (char *)((a3 & 0xff00) + a4 & 0xff00 | a3 & -0xff01); // 0x18eb8a
    *v2 = *v2 ^ 8;
    bool v3; // 0x18eb87
    char * v4 = (char *)(unknown_101a5d93((v3 ? -4 : 4) + a1) - 60); // 0x18eb92
    *v4 = *v4 | (char)(a4 / 256);
    int32_t v5 = *(int32_t *)(a2 - 72); // 0x18eb97
    int64_t v6 = unknown_ffffffffb34f43a2(); // 0x18eb9c
    __asm_int(122);
    return (v6 - (int64_t)((v5 + (int32_t)a4) / 256)) % 256 | v6 & -256;
}

// Address range: 0x18ebf6 - 0x18ebf7
int64_t function_18ebf6(void) {
    // 0x18ebf6
    int64_t result; // 0x18ebf6
    return result;
}

// Address range: 0x18ebf7 - 0x18ebfe
int64_t function_18ebf7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 74); // 0x18ebf9
    *v1 = *v1 + (int32_t)a1;
    return function_18ebf6();
}

// Address range: 0x18ec76 - 0x18ec79
int64_t function_18ec76(void) {
    // 0x18ec76
    int64_t result; // 0x18ec76
    return result;
}

// Address range: 0x1e20e8 - 0x1e211e
int64_t function_1e20e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = *(int32_t *)0x4de13ac5c186942c; // 0x1e20e8
    int32_t * v2 = (int32_t *)((int64_t)v1 + 2); // 0x1e20f1
    *v2 = (int32_t)a4;
    int32_t v3 = v1 | -0x24817055; // 0x1e20f4
    int64_t v4; // 0x1e20e8
    *(char *)a2 = *(char *)&v4 | (char)*v2;
    *(int32_t *)-0x70e5defe = (int32_t)a1;
    uint32_t v5 = v3 + 20;
    int32_t v6 = v3 & -256;
    *(int32_t *)0x630e21b4 = *(int32_t *)0x630e21b4 + (v5 % 256 | v6);
    return v5 & 122 | v6;
}

// Address range: 0x1e2136 - 0x1e2137
int64_t function_1e2136(void) {
    // 0x1e2136
    int64_t result; // 0x1e2136
    return result;
}

// Address range: 0x1e213b - 0x1e213d
int64_t function_1e213b(void) {
    // 0x1e213b
    return function_1e20cc();
}

// Address range: 0x1e2142 - 0x1e2149
int64_t function_1e2142(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1e2142
    int64_t result; // 0x1e2142
    char * v1 = (char *)(result + 0x20013d18); // 0x1e2142
    *v1 = *v1 + (char)a3;
    return result;
}

// Address range: 0x1e2150 - 0x1e2151
int64_t function_1e2150(int64_t a1) {
    // 0x1e2150
    int64_t result; // 0x1e2150
    return result;
}

// Address range: 0x1e2172 - 0x1e217b
int64_t function_1e2172(void) {
    // 0x1e2172
    int64_t result; // 0x1e2172
    float80_t v1; // 0x1e2172
    *(int32_t *)(result + 0x4b013d00) = (int32_t)v1;
    return result;
}

// Address range: 0x1e21be - 0x1e2259
int64_t function_1e21be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 - 0x27625a61); // 0x1e21be
    int64_t v2; // 0x1e21be
    *v1 = *v1 + (int32_t)v2;
    *(int32_t *)(a4 + 0x13ceef8b + v2) = 0x13d78400;
    char * v3 = (char *)(a4 + 0x13d0003); // 0x1e21cf
    *v3 = *v3 + (char)v2;
    char * v4 = (char *)(v2 + 8 * a1); // 0x1e21d5
    *v4 = *v4 & (char)a3;
    int64_t v5; // 0x1e21be
    *(char *)a1 = *(char *)&v5;
    bool v6; // 0x1e21be
    int64_t v7 = v6 ? -1 : 1; // 0x1e21d8
    int64_t v8 = v7 + a2; // 0x1e21d8
    v5 = v8;
    char * v9 = (char *)(a3 - 0xebb8f35 + v8); // 0x1e21d9
    unsigned char v10 = *v9; // 0x1e21d9
    unsigned char v11 = (char)a4 % 32; // 0x1e21d9
    v5 = v8;
    if (v11 != 0) {
        *v9 = v10 << v11 | (char)((int16_t)v10 >> (int16_t)(9 - v11));
    }
    int64_t v12 = v7 + a1; // 0x1e21d8
    int64_t result = unknown_54e8b9e6(v12, v5); // 0x1e21e0
    if (a4 == 0) {
        // 0x1e2257
        return result;
    }
    // 0x1e21e7
    *(int32_t *)-0x26ae9a0b = *(int32_t *)-0x26ae9a0b + (int32_t)v12;
    return v2 + 0xe8edd8d0 + result & 0xffffffff;
}

// Address range: 0x1e2288 - 0x1e228d
int64_t function_1e2288(void) {
    // 0x1e2288
    return function_7f5c2475();
}

// Address range: 0x1e228d - 0x1e2292
int64_t function_1e228d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (uint32_t)(int32_t)a4 % 32; // 0x1e228d
    if (v1 != 0) {
        *(int32_t *)a3 = (int32_t)a3 >> v1;
    }
    return function_1e22b9(a1, a2, a3, a4, (int64_t)&g3);
}

// Address range: 0x1e2295 - 0x1e229a
int64_t function_1e2295(int64_t a1, int64_t a2) {
    // 0x1e2295
    int64_t result; // 0x1e2295
    return result;
}

// Address range: 0x1e22b9 - 0x1e22dc
int64_t function_1e22b9(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x1e22b9
    int64_t v1; // 0x1e22b9
    int32_t * v2 = (int32_t *)(v1 - 0x717cb02); // 0x1e22b9
    *v2 = *v2 + (int32_t)a1;
    char * v3 = (char *)(v1 - 96); // 0x1e22c0
    *v3 = *v3 | (char)(a3 / 256);
    unknown_ffffffffbd2f27ca();
    int64_t v4; // 0x1e22b9
    __asm_fbld(*(float80_t *)&v4);
    int64_t v5; // 0x1e22b9
    *(int32_t *)a4 = *(int32_t *)&v5 ^ 0x798ee954;
    uint64_t result = unknown_28f0a5d9(((a5 & (int64_t)&g2) == 0 ? 4 : -4) + a1); // 0x1e22d3
    *(char *)a3 = *(char *)&v4 + (char)(result / 256);
    return result;
}

// Address range: 0x1e2301 - 0x1e2305
int64_t function_1e2301(int64_t a1, int64_t a2) {
    // 0x1e2301
    int64_t result; // 0x1e2301
    int32_t * v1 = (int32_t *)(result - 7); // 0x1e2301
    *v1 = *v1 + (int32_t)a1;
    return result;
}

// Address range: 0x1e232d - 0x1e232f
int64_t function_1e232d(int64_t a1) {
    // 0x1e232d
    int64_t result; // 0x1e232d
    return result;
}

// Address range: 0x1e23d7 - 0x1e23ef
int64_t function_1e23d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e23d7
    int64_t v1; // 0x1e23d7
    int32_t * v2 = (int32_t *)(4 * a2 - 2 + v1); // 0x1e23d9
    *v2 = *v2 | (int32_t)v1;
    int32_t * v3 = (int32_t *)(9 * v1); // 0x1e23e6
    *v3 = *v3 + ((int32_t)v1 & -256);
    int64_t v4 = __asm_hlt(); // 0x1e23e9
    unsigned char v5 = (char)a4 % 32; // 0x1e23ea
    int64_t result = v4; // 0x1e23ea
    if (v5 != 0) {
        result = v4 & -256 | (int64_t)((char)v4 >> v5);
    }
    return result;
}

// Address range: 0x1e23ef - 0x1e23f8
int64_t function_1e23ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e23ef
    return __asm_int3(a1, a2, a3, a4);
}

// Address range: 0x1e2526 - 0x1e252b
int64_t function_1e2526(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e2526
    int64_t v1; // 0x1e2526
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x1e2558 - 0x1e2564
int64_t function_1e2558(void) {
    // 0x1e2558
    int64_t result; // 0x1e2558
    *(char *)0x1e8e713474e6576 = (char)result;
    return result;
}

// Address range: 0x1e25a4 - 0x1e25a5
int64_t function_1e25a4(void) {
    // 0x1e25a4
    int64_t result; // 0x1e25a4
    return result;
}

// Address range: 0x1e25a5 - 0x1e25aa
int64_t function_1e25a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e25a5
    int64_t result; // 0x1e25a5
    char * v1 = (char *)(a4 - 6 + 2 * result); // 0x1e25a5
    bool v2; // 0x1e25a5
    *v1 = (char)v2 - (char)(result / 256) + *v1;
    return result;
}

// Address range: 0x1e25c8 - 0x1e25d1
int64_t function_1e25c8(void) {
    // 0x1e25c8
    int64_t result; // 0x1e25c8
    return result;
}

// Address range: 0x1e25e1 - 0x1e25e2
int64_t function_1e25e1(void) {
    // 0x1e25e1
    int64_t result; // 0x1e25e1
    return result;
}

// Address range: 0x1e2649 - 0x1e264b
int64_t function_1e2649(void) {
    // 0x1e2649
    return function_1e25e1();
}

// Address range: 0x1e2681 - 0x1e2691
int64_t function_1e2681(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1e2681
    *(int32_t *)-0x59d27f71 = *(int32_t *)-0x59d27f71 + (int32_t)a1;
    int64_t v1; // 0x1e2681
    *(int32_t *)a1 = (int32_t)v1;
    return (v1 | 0xe88f7be8) + v1 & 0xffffffff;
}

// Address range: 0x1e2694 - 0x1e26ab
int64_t function_1e2694(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffa4acbd9a(); // 0x1e2694
    unsigned char v2 = *(char *)(v1 + 0x4605c082) | (char)v1; // 0x1e2699
    int64_t v3 = v1 & -256; // 0x1e2699
    int64_t v4; // 0x1e2694
    *(int32_t *)a3 = (int32_t)(v3 | (int64_t)v2) + (int32_t)v4;
    return v3 | (int64_t)(v2 - 44);
}
