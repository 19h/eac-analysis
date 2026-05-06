/*
 * Targeted RetDec C for native executable gap queue batch 215.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x17ee85-0x17f085 rank=- name=- kind=- bytes=- uncovered=-
 *   0x17f085-0x17f285 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e621e-0x2e641e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e641e-0x2e661e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e661e-0x2e681e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e681e-0x2e6a1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x141913-0x141b13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x141b13-0x141d13 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_141913(void);
int64_t function_141921(int64_t a1, int64_t a2);
int64_t function_141998(void);
int64_t function_1419b1(int64_t a1);
int64_t function_1419c3(int64_t a1);
int64_t function_1419e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1419fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_141a1b(int64_t a1);
int64_t function_141a91(void);
int64_t function_141af1(void);
int64_t function_141afc(void);
int64_t function_141b16(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_141b63(int64_t a1);
int64_t function_141ba0(int64_t a1, int64_t a2);
int64_t function_141c1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17ee85(void);
int64_t function_17ee88(void);
int64_t function_17ef17(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17ef2c(int64_t a1);
int64_t function_17ef48(int64_t a1, int64_t a2, int64_t a3);
int64_t function_17ef4d(void);
int64_t function_17ef6e(int64_t a1);
int64_t function_17ef7a(int64_t a1);
int64_t function_17efce(void);
int64_t function_17efd2(void);
int64_t function_17f061(void);
int64_t function_17f08f(void);
int64_t function_17f0b9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_17f0c6(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_17f0e7(int64_t a1);
int64_t function_17f0ea(void);
int64_t function_17f0ee(int64_t a1, int64_t a2, int64_t a3);
int64_t function_17f13d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17f167(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17f191(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17f1c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6);
int64_t function_17f22d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17f257(void);
int64_t function_2e621e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2e6239(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e634c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2e647f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e65fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2e6747(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2e68b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2e6a0f(void);
int64_t function_7d291b13();
int64_t function_c4258();
int64_t function_ffffffff81081d37();
int64_t function_ffffffff89a4f0fe();
int64_t function_ffffffff95a6f3c6();
int64_t function_ffffffffb4552b18();
int64_t function_ffffffffe8271bed();
int64_t function_ffffffffe8cb0ddf();
int64_t function_ffffffffec7f4eee();
int64_t unknown_20267f45();
int64_t unknown_32d8fa92();
int64_t unknown_3a76a554();
int64_t unknown_3d19da2b();
int64_t unknown_3d604f29();
int64_t unknown_3de0e54b();
int64_t unknown_4811783();
int64_t unknown_57166419();
int64_t unknown_5ab883e2();
int64_t unknown_60a5cb29();
int64_t unknown_6105b25a();
int64_t unknown_6f16033e();
int64_t unknown_723f7047();
int64_t unknown_783b8f3a();
int64_t unknown_7a1604f2();
int64_t unknown_cce008f();
int64_t unknown_fa42081();
int64_t unknown_ffffffff8eda6423();
int64_t unknown_ffffffff990e41d1();
int64_t unknown_ffffffffac23dc20();
int64_t unknown_ffffffffd496314d();

// Address range: 0x141913 - 0x141918
int64_t function_141913(void) {
    // 0x141913
    return unknown_57166419();
}

// Address range: 0x141921 - 0x14192b
int64_t function_141921(int64_t a1, int64_t a2) {
    // 0x141921
    return function_7d291b13();
}

// Address range: 0x141998 - 0x141999
int64_t function_141998(void) {
    // 0x141998
    int64_t result; // 0x141998
    return result;
}

// Address range: 0x1419b1 - 0x1419b2
int64_t function_1419b1(int64_t a1) {
    // 0x1419b1
    int64_t result; // 0x1419b1
    return result;
}

// Address range: 0x1419c3 - 0x1419c4
int64_t function_1419c3(int64_t a1) {
    // 0x1419c3
    int64_t result; // 0x1419c3
    return result;
}

// Address range: 0x1419e4 - 0x1419f6
int64_t function_1419e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(4 * a4 + a1); // 0x1419e4
    uint32_t v2 = *v1; // 0x1419e4
    uint32_t v3 = v2 + (int32_t)a1; // 0x1419e4
    *v1 = v3;
    int64_t v4; // 0x1419e4
    __asm_out(96, (int32_t)v4);
    if (v3 >= v2 && v3 != 0) {
        function_141998();
    }
    // 0x1419ec
    float80_t v5; // 0x1419e4
    *(int16_t *)(a4 + 0x1e876a8) = (int16_t)v5;
    return __asm_iretd();
}

// Address range: 0x1419fd - 0x141a05
int64_t function_1419fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1419fd
    return function_ffffffffe8271bed();
}

// Address range: 0x141a1b - 0x141a32
int64_t function_141a1b(int64_t a1) {
    // 0x141a1b
    unknown_ffffffff8eda6423();
    return unknown_fa42081();
}

// Address range: 0x141a91 - 0x141a96
int64_t function_141a91(void) {
    // 0x141a91
    return function_ffffffffe8cb0ddf();
}

// Address range: 0x141af1 - 0x141af2
int64_t function_141af1(void) {
    // 0x141af1
    int64_t result; // 0x141af1
    return result;
}

// Address range: 0x141afc - 0x141afd
int64_t function_141afc(void) {
    // 0x141afc
    int64_t result; // 0x141afc
    return result;
}

// Address range: 0x141b16 - 0x141b5e
int64_t function_141b16(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x141b16
    bool v1; // 0x141b16
    if (v1 || false) {
        function_141afc();
    }
    // 0x141b28
    *(int32_t *)a1 = (int32_t)a2;
    int64_t v2 = v1 ? -4 : 4; // 0x141b28
    int64_t v3 = v2 + a1; // 0x141b28
    int64_t v4 = unknown_6f16033e(v3, v2 + a2); // 0x141b38
    *(char *)v3 = __asm_insb((int16_t)a3);
    int32_t v5 = v4; // 0x141b3e
    unknown_ffffffffd496314d();
    int64_t v6 = unknown_6105b25a(); // 0x141b5a
    if (v5 < 0xb43ddc01) {
        v6 = function_141af1();
    }
    int64_t result = v6;
    if (v5 > -0x4bc223ff) {
        // 0x141b5e
        return result;
    }
    // 0x141b21
    return (result + 55) % 256 | result & -256;
}

// Address range: 0x141b63 - 0x141b66
int64_t function_141b63(int64_t a1) {
    // 0x141b63
    int64_t result; // 0x141b63
    return result;
}

// Address range: 0x141ba0 - 0x141ba5
int64_t function_141ba0(int64_t a1, int64_t a2) {
    // 0x141ba0
    int64_t result; // 0x141ba0
    return result;
}

// Address range: 0x141c1b - 0x141cf1
int64_t function_141c1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int16_t v1 = a3; // 0x141c21
    *(int32_t *)a1 = __asm_insd(v1);
    uint32_t v2 = (int32_t)unknown_60a5cb29() ^ 0x6b4e8443; // 0x141c28
    if (v2 == 0) {
        int32_t * v3 = (int32_t *)(a3 - 71); // 0x141c31
        *v3 = *v3 + v2;
        int64_t v4 = unknown_723f7047(); // 0x141c41
        *(int64_t *)(int64_t)v2 = -2;
        return v4 & -256 | (int64_t)*(char *)-0x1ba87fe1790e916;
    }
    // 0x141c74
    *(int32_t *)0xe8ee30 = *(int32_t *)0xe8ee30 - v2;
    unknown_4811783();
    __asm_out_133(v1, (char)a3);
    unknown_32d8fa92();
    if (*(int32_t *)(a2 - 62) > (int32_t)a2) {
        // 0x141cec
        return unknown_7a1604f2(0x7e754a8e);
    }
    // 0x141c98
    return function_ffffffff81081d37(0x7e754a8e);
}

// Address range: 0x17ee85 - 0x17ee87
int64_t function_17ee85(void) {
    // 0x17ee85
    int64_t result; // 0x17ee85
    return result;
}

// Address range: 0x17ee88 - 0x17ee9d
int64_t function_17ee88(void) {
    // 0x17ee88
    unknown_cce008f();
    return 0x9567a1aa;
}

// Address range: 0x17ef17 - 0x17ef2a
int64_t function_17ef17(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17ef17
    bool v1; // 0x17ef17
    if (!v1) {
        // 0x17ef2b
        int64_t v2; // 0x17ef17
        return v2 & -256 | 5;
    }
    int64_t result = unknown_3d604f29(); // 0x17ef23
    int32_t * v3 = (int32_t *)result; // 0x17ef28
    *v3 = *v3 + (int32_t)result;
    return result;
}

// Address range: 0x17ef2c - 0x17ef31
int64_t function_17ef2c(int64_t a1) {
    // 0x17ef2c
    int64_t result; // 0x17ef2c
    return result;
}

// Address range: 0x17ef48 - 0x17ef4a
int64_t function_17ef48(int64_t a1, int64_t a2, int64_t a3) {
    // 0x17ef48
    int64_t result; // 0x17ef48
    return result;
}

// Address range: 0x17ef4d - 0x17ef5b
int64_t function_17ef4d(void) {
    // 0x17ef4d
    int64_t v1; // 0x17ef4d
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x17ef6e - 0x17ef6f
int64_t function_17ef6e(int64_t a1) {
    // 0x17ef6e
    int64_t result; // 0x17ef6e
    return result;
}

// Address range: 0x17ef7a - 0x17ef91
int64_t function_17ef7a(int64_t a1) {
    // 0x17ef7a
    int64_t v1; // bp-8, 0x17ef7a
    int64_t v2; // 0x17ef7a
    *(int32_t *)a1 = (int32_t)(int64_t)&v1 + (int32_t)v2;
    return 0x2f3af103;
}

// Address range: 0x17efce - 0x17efd1
int64_t function_17efce(void) {
    // 0x17efce
    int64_t result; // 0x17efce
    return result;
}

// Address range: 0x17efd2 - 0x17efd6
int64_t function_17efd2(void) {
    // 0x17efd2
    int64_t v1; // 0x17efd2
    return (int64_t)&v1;
}

// Address range: 0x17f061 - 0x17f062
int64_t function_17f061(void) {
    // 0x17f061
    int64_t result; // 0x17f061
    return result;
}

// Address range: 0x17f08f - 0x17f091
int64_t function_17f08f(void) {
    // 0x17f08f
    int64_t v1; // 0x17f08f
    return function_17f0ee(v1, v1, v1);
}

// Address range: 0x17f0b9 - 0x17f0c6
int64_t function_17f0b9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x17f0b9
    int64_t v1; // 0x17f0b9
    __asm_out_133((int16_t)a3, (char)(v1 ^ a1));
    return function_ffffffff89a4f0fe();
}

// Address range: 0x17f0c6 - 0x17f0e4
int64_t function_17f0c6(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x17f0c6
    int64_t v1; // 0x17f0c6
    *(int32_t *)a4 = (int32_t)v1 + 1;
    unknown_ffffffff990e41d1(a5);
    char * v2 = (char *)(a2 - 121); // 0x17f0d6
    char v3 = *v2 + (char)(a3 / 256); // 0x17f0d6
    *v2 = v3;
    if (v3 == 0) {
        function_17f061();
    }
    // 0x17f0db
    __asm_iretd();
    return unknown_5ab883e2();
}

// Address range: 0x17f0e7 - 0x17f0e8
int64_t function_17f0e7(int64_t a1) {
    // 0x17f0e7
    int64_t result; // 0x17f0e7
    return result;
}

// Address range: 0x17f0ea - 0x17f0eb
int64_t function_17f0ea(void) {
    // 0x17f0ea
    int64_t result; // 0x17f0ea
    return result;
}

// Address range: 0x17f0ee - 0x17f0ef
int64_t function_17f0ee(int64_t a1, int64_t a2, int64_t a3) {
    // 0x17f0ee
    return a3 & 0xffffffff;
}

// Address range: 0x17f13d - 0x17f15a
int64_t function_17f13d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17f13d
    int64_t v1; // 0x17f13d
    bool v2; // 0x17f13d
    if (!v2) {
        v1 = function_17f0ea();
    }
    int32_t * v3 = (int32_t *)(v1 + 0x5439a809); // 0x17f13f
    *v3 = *v3 + (int32_t)a4;
    int64_t v4; // 0x17f13d
    int32_t * v5 = (int32_t *)(unknown_3de0e54b() + v4 & 0xffffffff); // 0x17f14c
    *v5 = *v5 + (int32_t)a3;
    unknown_3a76a554();
    return function_ffffffffec7f4eee();
}

// Address range: 0x17f167 - 0x17f170
int64_t function_17f167(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17f167
    int64_t result; // 0x17f167
    bool v1; // 0x17f167
    if (v1 || v1) {
        // 0x17f16a
        __asm_out_135((int16_t)a3, (int32_t)result);
        return result;
    }
    // 0x17f169
    return result;
}

// Address range: 0x17f191 - 0x17f1c0
int64_t function_17f191(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x17f191
    int64_t v1; // 0x17f191
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a2 - 0x3540ff82); // 0x17f195
    int64_t v4; // bp+28340, 0x17f191
    *v3 = *v3 + (int32_t)(int64_t)&v4;
    uint32_t v5 = (int32_t)v2 >> 31; // 0x17f19b
    char v6 = *(char *)(v2 + 10); // 0x17f19e
    unsigned char v7 = *(char *)((int64_t)v5 - 0x4868aee3); // 0x17f1a1
    int32_t * v8 = (int32_t *)(5 * a4); // 0x17f1a7
    int32_t v9 = *v8; // 0x17f1a7
    int64_t v10; // bp+28332, 0x17f191
    *v8 = v9 + (int32_t)(int64_t)&v10 + (int32_t)(v7 > (char)v1);
    *(int32_t *)a4 = v5;
    return (256 * (int64_t)(v6 | (char)(v2 / 256)) | v2 & -0xff01) + 0x6023fe18;
}

// Address range: 0x17f1c0 - 0x17f22c
int64_t function_17f1c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6) {
    char * v1 = (char *)(a2 + 11); // 0x17f1c0
    *v1 = *v1 | (char)a3;
    uint64_t v2 = a3 + a1; // 0x17f1d1
    char * v3 = (char *)(a1 - 108); // 0x17f1d3
    *v3 = *v3 ^ (char)(v2 / 256);
    int32_t * v4 = (int32_t *)(a1 - 118 + 8 * a1); // 0x17f1d6
    *v4 = *v4 | (int32_t)a6;
    char * v5 = (char *)((a2 & -256 | 4) + 0x4431f1a5); // 0x17f1e1
    *v5 = *v5 + ((char)(a6 / 256) | 1);
    if (a4 != 0) {
        char * v6 = (char *)((8 * v2 & 0x7fffffff8) + 0x2e7e013d); // 0x17f1ec
        *v6 = *v6 - 13;
        return a2 & 0xffffff00 | 243;
    }
    int16_t v7 = v2; // 0x17f206
    __asm_in(v7);
    __asm_out_133(v7, (char)__asm_wait());
    __asm_in_136(109);
    unknown_ffffffffac23dc20();
    return unknown_3d19da2b();
}

// Address range: 0x17f22d - 0x17f251
int64_t function_17f22d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17f22d
    unknown_783b8f3a();
    unknown_20267f45(a4);
    return function_ffffffff95a6f3c6(0x1e868e6);
}

// Address range: 0x17f257 - 0x17f25c
int64_t function_17f257(void) {
    // 0x17f257
    return function_ffffffffb4552b18();
}

// Address range: 0x2e621e - 0x2e6239
int64_t function_2e621e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2e621e
    int64_t v1; // 0x2e621e
    return function_c4258(a1, a2, a3, a5 ^ a4, v1, v1);
}

// Address range: 0x2e6239 - 0x2e634c
int64_t function_2e6239(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x2e30a8; // bp-32, 0x2e629d
    int64_t v2 = (int64_t)&v1; // 0x2e62d1
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x2e62d9
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x2e62d9
    *v4 = v3;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x2e62dd
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x2e62e0
    *v6 = v3;
    *v5 = a5;
    int64_t * v7 = (int64_t *)(v2 + 8); // 0x2e62fc
    *v7 = *v4;
    *v4 = 0x1fdee5ab;
    *v5 = 0x37783117;
    *v6 = v3;
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = v1;
    *v5 = v1;
    int64_t v8 = *v7; // 0x2e632e
    v1 = v8;
    *v4 = v8;
    int64_t v9; // 0x2e6239
    return function_c4258(a1, a2, a3, a4, v9, v9);
}

// Address range: 0x2e634c - 0x2e647f
int64_t function_2e634c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2e634c
    int64_t v1; // 0x2e634c
    return function_c4258(a1, a2, a3, a4, a5, v1);
}

// Address range: 0x2e647f - 0x2e65fd
int64_t function_2e647f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e647f
    int64_t v1; // bp-48, 0x2e647f
    int64_t v2 = (int64_t)&v1; // 0x2e6506
    *(int64_t *)(v2 + 32) = 0x2e358f;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x2e65c3
    *v3 = v2;
    v1 = v2 + 16;
    int64_t v4 = *(int64_t *)(v2 + 8); // 0x2e65e2
    v1 = v4;
    *v3 = v4;
    int64_t v5; // 0x2e647f
    return function_c4258(a1, a2, a3, a4, v5, v5);
}

// Address range: 0x2e65fd - 0x2e6747
int64_t function_2e65fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2e65fd
    return function_c4258(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x2e6747 - 0x2e68b6
int64_t function_2e6747(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2e6747
    return function_c4258(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x2e68b6 - 0x2e69d4
int64_t function_2e68b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2e68b6
    return function_c4258(a1, a2, 0x3830e77, a4, a5, a6);
}

// Address range: 0x2e6a0f - 0x2e6a13
int64_t function_2e6a0f(void) {
    // 0x2e6a0f
    int64_t v1; // 0x2e6a0f
    int64_t v2 = v1;
    return (v2 + 36) % 256 | v2 & -256;
}
