/*
 * Targeted RetDec C for native executable gap queue batch 352.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x195285-0x195485 rank=- name=- kind=- bytes=- uncovered=-
 *   0x195485-0x195685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x195685-0x195885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x195885-0x195a85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x195a85-0x195c85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x31a8bb-0x31aabb rank=- name=- kind=- bytes=- uncovered=-
 *   0x31acbb-0x31aebb rank=- name=- kind=- bytes=- uncovered=-
 *   0x31aebb-0x31b0bb rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_195285(void);
int64_t function_1952e1(int64_t a1);
int64_t function_19530f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_195351(void);
int64_t function_195376(void);
int64_t function_195397(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_19540d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19548b(void);
int64_t function_1954a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19553c(void);
int64_t function_1955b0(void);
int64_t function_195606(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_195629(void);
int64_t function_19564e(void);
int64_t function_195663(void);
int64_t function_19566f(void);
int64_t function_195694(void);
int64_t function_195696(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_1956a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1956c8(void);
int64_t function_1956ca(int64_t a1);
int64_t function_1956e4(void);
int64_t function_195758(int64_t a1);
int64_t function_19576b(void);
int64_t function_1958db(void);
int64_t function_19591a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19593c(void);
int64_t function_195941(void);
int64_t function_195947(int64_t a1);
int64_t function_1959ea(void);
int64_t function_195a3b(void);
int64_t function_195a99(void);
int64_t function_195aec(void);
int64_t function_195b65(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_195c6d(void);
int64_t function_31a8bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_31aa1e(void);
int64_t function_31aa23(int64_t a1, int64_t a2, int64_t a3);
int64_t function_31aa6f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_31aa85(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_31aa94(void);
int64_t function_31aa9a(void);
int64_t function_31aaa3(void);
int64_t function_31aaa4(void);
int64_t function_31acaa();
int64_t function_31acbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_31ad82(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31ad96(void);
int64_t function_31adaa(int64_t a1);
int64_t function_31ade5(void);
int64_t function_31ae2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_31af32(void);
int64_t function_31af36(void);
int64_t function_31af38(void);
int64_t function_31af59(void);
int64_t function_31af75(int64_t a1);
int64_t function_31af99(void);
int64_t function_31afc0(int64_t a1);
int64_t function_31afe7(int64_t a1);
int64_t function_31b003(void);
int64_t function_31b00c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31b03e(void);
int64_t function_31b045(int64_t a1);
int64_t function_320be0();
int64_t function_5890bdeb();
int64_t function_69266d8b();
int64_t function_cc59c();
int64_t function_ffffffff8121b100();
int64_t function_ffffffffad774892();
int64_t function_ffffffffaeb6ef3f();
int64_t function_ffffffffafb69f6b();
int64_t function_ffffffffce661389();
int64_t function_ffffffffeb7d4a5a();
int64_t unknown_14d81b6a();
int64_t unknown_1ac49bbc();
int64_t unknown_23690290();
int64_t unknown_2735d7b();
int64_t unknown_3a697ddd();
int64_t unknown_6c316e28();
int64_t unknown_79b8f4ec();
int64_t unknown_a0f934e();
int64_t unknown_ffffffffab271a88();
int64_t unknown_ffffffffaf0de9a6();
int64_t unknown_ffffffffb246e88b();
int64_t unknown_ffffffffb456900e();
int64_t unknown_ffffffffc26b8007();
int64_t unknown_ffffffffd4da03b5();
int64_t unknown_ffffffffe49288b4();
int64_t unknown_ffffffffe81a90a0();
int64_t unknown_ffffffffede5a7d3();
int64_t unknown_ffffffffee23fbfb();
int64_t unknown_fffffffff4ee1974();

// Address range: 0x195285 - 0x195288
int64_t function_195285(void) {
    // 0x195285
    int64_t result; // 0x195285
    return result;
}

// Address range: 0x1952e1 - 0x1952ee
int64_t function_1952e1(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 0x50f42d7e); // 0x1952e1
    int64_t v2; // 0x1952e1
    *v1 = *v1 + (int32_t)v2;
    return function_ffffffffeb7d4a5a();
}

// Address range: 0x19530f - 0x195314
int64_t function_19530f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x19530f
    int64_t result; // 0x19530f
    *(char *)a1 = (char)result + (char)(a3 / 256);
    return result;
}

// Address range: 0x195351 - 0x195352
int64_t function_195351(void) {
    // 0x195351
    int64_t result; // 0x195351
    return result;
}

// Address range: 0x195376 - 0x195378
int64_t function_195376(void) {
    // 0x195376
    return function_195351();
}

// Address range: 0x195397 - 0x1953cd
int64_t function_195397(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x195397
    int64_t v1; // 0x195397
    char * v2 = (char *)(v1 - 116); // 0x195397
    *v2 = *v2 + (char)a4;
    uint64_t v3 = unknown_ffffffffe81a90a0(); // 0x19539a
    int32_t * v4 = (int32_t *)(8 * a3 + 0x31026d3d); // 0x19539f
    *v4 = *v4 + (int32_t)a2;
    int64_t v5 = v3 | a4 / 256 % 256; // 0x1953b3
    int64_t v6; // 0x195397
    *(int32_t *)a4 = *(int32_t *)&v6 + (int32_t)v5;
    char v7 = *(char *)(a1 - 21); // 0x1953b9
    *(int32_t *)0xc0f0bd4b = *(int32_t *)0xc0f0bd4b | (int32_t)v1;
    return (256 * (int64_t)((char)(v3 / 256) - v7) | v5 & 0xffff00ff) + v1 & 0xffffff00 | (int64_t)__asm_in(-117);
}

// Address range: 0x19540d - 0x195489
int64_t function_19540d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x19540d
    int64_t v1; // 0x19540d
    int32_t * v2 = (int32_t *)(v1 + 0x3a17d24f); // 0x19540d
    *v2 = *v2 + (int32_t)a1;
    bool v3; // 0x19540d
    int64_t v4 = (v3 ? -4 : 4) + a1; // 0x195421
    int64_t v5 = unknown_6c316e28(v4); // 0x195422
    unsigned char v6 = (char)v1; // 0x19546b
    unsigned char v7 = (char)v1; // 0x19546b
    char v8 = v6 - v7; // 0x19546b
    if (v6 >= v7 && v8 != 0) {
        // 0x195444
        return 0x10000 * (int32_t)v5 >> 16;
    }
    if (v8 < 0) {
        // 0x19545c
        return unknown_14d81b6a();
    }
    uint32_t v9 = *(int32_t *)(a4 - 0x5bada600); // 0x195427
    char v10 = *(char *)(v4 - 0x131efe18); // 0x19542d
    int32_t * v11 = (int32_t *)(256 * (int64_t)(v10 & (char)(v9 / 256)) | (int64_t)(v9 & -0xff01)); // 0x195474
    *v11 = *v11 + (int32_t)v4;
    return unknown_ffffffffab271a88();
}

// Address range: 0x19548b - 0x195491
int64_t function_19548b(void) {
    // 0x19548b
    int64_t result; // 0x19548b
    return result;
}

// Address range: 0x1954a5 - 0x1954f5
int64_t function_1954a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = unknown_ffffffffd4da03b5(); // 0x1954af
    bool v3; // 0x1954a5
    unsigned char v4 = (v3 ? 53 : 52) + (char)v2; // 0x1954b6
    if (v4 >= 0) {
        // 0x1954ba
        return v2 & -256 | (int64_t)v4;
    }
    uint32_t v5 = (int32_t)unknown_ffffffffede5a7d3() | 0x9080013; // 0x1954d4
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x1954d4
    int64_t v7 = v5; // 0x1954d4
    int64_t v8 = v7; // 0x1954d9
    int64_t v9; // 0x1954a5
    if (v6 % 2 == 0) {
        int64_t v10; // 0x1954a5
        int64_t v11 = v10;
        int64_t v12 = v11 & -0x10000 | (v11 & 0xff00) + v7 & 0xff00 | 42; // 0x1954c5
        uint32_t v13 = (int32_t)unknown_ffffffffede5a7d3() | 0x9080013; // 0x1954d4
        unsigned char v14 = llvm_ctpop_i8((char)v13); // 0x1954d4
        int64_t v15 = v13; // 0x1954d4
        int64_t v16; // 0x1954a5
        v16 -= 8;
        v9 = v12;
        v8 = v15;
        while (v14 % 2 == 0) {
            // 0x1954c3
            v11 = v12;
            v12 = v11 & -0x10000 | (v11 & 0xff00) + v15 & 0xff00 | 42;
            v13 = (int32_t)unknown_ffffffffede5a7d3() | 0x9080013;
            v14 = llvm_ctpop_i8((char)v13);
            v15 = v13;
            v16 -= 8;
            v9 = v12;
            v8 = v15;
        }
    }
    int64_t v17 = (a3 + 1) % 256 | a3 & -256; // 0x1954b4
    int64_t v18; // 0x1954a5
    int32_t * v19 = (int32_t *)(v18 + 0x4daef5b0 + 8 * v8); // 0x1954db
    *v19 = *v19 + (int32_t)v18;
    int32_t * v20 = (int32_t *)v9; // 0x1954ec
    *v20 = *v20 + (int32_t)v17;
    __asm_outsb((int16_t)v17, *(char *)&v1);
    return v1 & 0xffffff00 | 3;
}

// Address range: 0x19553c - 0x19553d
int64_t function_19553c(void) {
    // 0x19553c
    int64_t result; // 0x19553c
    return result;
}

// Address range: 0x1955b0 - 0x1955b2
int64_t function_1955b0(void) {
    // 0x1955b0
    return function_19553c();
}

// Address range: 0x195606 - 0x19561d
int64_t function_195606(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x195606
    unknown_ffffffffb456900e();
    return __asm_in_133((int16_t)a3);
}

// Address range: 0x195629 - 0x19562a
int64_t function_195629(void) {
    // 0x195629
    int64_t result; // 0x195629
    return result;
}

// Address range: 0x19564e - 0x195653
int64_t function_19564e(void) {
    // 0x19564e
    return function_ffffffffce661389();
}

// Address range: 0x195663 - 0x195664
int64_t function_195663(void) {
    // 0x195663
    int64_t result; // 0x195663
    return result;
}

// Address range: 0x19566f - 0x195672
int64_t function_19566f(void) {
    // 0x19566f
    int64_t result; // 0x19566f
    return result;
}

// Address range: 0x195694 - 0x195696
int64_t function_195694(void) {
    // 0x195694
    return function_195663();
}

// Address range: 0x195696 - 0x1956a8
int64_t function_195696(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    // 0x195696
    int64_t v1; // 0x195696
    *(char *)v1 = 0;
    int32_t * v2 = (int32_t *)(a1 + 0x4dbeabc0 + a5); // 0x195699
    *v2 = *v2 + (int32_t)v1;
    unsigned char v3 = *(char *)((v1 + a3 & 0xffffffff) + a5 % 256); // 0x1956a4
    int32_t v4 = *(int32_t *)(a4 - 256 * a5 & 0xff00 | a4 & -0xff01); // 0x1956a5
    return v4 & (int32_t)(a5 & 0xffffff00 | (int64_t)v3);
}

// Address range: 0x1956a8 - 0x1956c7
int64_t function_1956a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1956a8
    int64_t v1; // 0x1956a8
    uint32_t v2 = (int32_t)v1 >> 31; // 0x1956a9
    *(char *)a1 = (char)v1;
    bool v3; // 0x1956a8
    int64_t v4 = v3 ? -1 : 1; // 0x1956ac
    int64_t v5 = v4 + a1; // 0x1956ac
    int64_t v6 = unknown_ffffffffe49288b4(v5, v4 + a2, v2); // 0x1956ae
    char v7 = *(char *)(v5 + 1); // 0x1956b3
    __asm_out(-104, (int32_t)(v6 & 0xffffff00 | (int64_t)((char)v3 - v7 + (char)v6)));
    char v8 = __asm_in(-42); // 0x1956b8
    char * v9 = (char *)(int64_t)v2; // 0x1956ba
    unsigned char v10 = *v9; // 0x1956ba
    *v9 = v10 / 2 | 128 * v10;
    char v11 = __asm_in_134((int16_t)v2); // 0x1956bc
    return (v6 | (int64_t)v8 | (int64_t)v11) & -256 | (int64_t)(v11 - 86);
}

// Address range: 0x1956c8 - 0x1956c9
int64_t function_1956c8(void) {
    // 0x1956c8
    int64_t result; // 0x1956c8
    return result;
}

// Address range: 0x1956ca - 0x1956cb
int64_t function_1956ca(int64_t a1) {
    // 0x1956ca
    int64_t result; // 0x1956ca
    return result;
}

// Address range: 0x1956e4 - 0x1956e7
int64_t function_1956e4(void) {
    // 0x1956e4
    int64_t result; // 0x1956e4
    return result;
}

// Address range: 0x195758 - 0x195759
int64_t function_195758(int64_t a1) {
    // 0x195758
    int64_t result; // 0x195758
    return result;
}

// Address range: 0x19576b - 0x19576e
int64_t function_19576b(void) {
    // 0x19576b
    int64_t result; // 0x19576b
    return result;
}

// Address range: 0x1958db - 0x1958e1
int64_t function_1958db(void) {
    // 0x1958db
    int64_t v1; // 0x1958db
    bool v2; // 0x1958db
    int64_t result = (v2 ? 255 : 0) | v1 & -256; // 0x1958db
    char * v3 = (char *)result; // 0x1958dd
    *v3 = *v3 - 122;
    return result;
}

// Address range: 0x19591a - 0x195920
int64_t function_19591a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x19591a
    int64_t result; // 0x19591a
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x19593c - 0x19593f
int64_t function_19593c(void) {
    // 0x19593c
    int64_t result; // 0x19593c
    return result;
}

// Address range: 0x195941 - 0x195946
int64_t function_195941(void) {
    // 0x195941
    return function_ffffffffaeb6ef3f();
}

// Address range: 0x195947 - 0x195949
int64_t function_195947(int64_t a1) {
    // 0x195947
    int64_t result; // 0x195947
    return result;
}

// Address range: 0x1959ea - 0x1959f0
int64_t function_1959ea(void) {
    // 0x1959ea
    int64_t v1; // 0x1959ea
    int64_t result = v1;
    *(char *)result = (char)result + (char)v1;
    return result;
}

// Address range: 0x195a3b - 0x195a3e
int64_t function_195a3b(void) {
    // 0x195a3b
    int64_t result; // 0x195a3b
    return result;
}

// Address range: 0x195a99 - 0x195a9a
int64_t function_195a99(void) {
    // 0x195a99
    int64_t result; // 0x195a99
    return result;
}

// Address range: 0x195aec - 0x195aee
int64_t function_195aec(void) {
    // 0x195aec
    return function_195a99();
}

// Address range: 0x195b65 - 0x195c42
int64_t function_195b65(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x5033072e); // 0x195b65
    uint32_t v2 = *v1; // 0x195b65
    bool v3; // 0x195b65
    *v1 = 64 * v2 | 32 * (int32_t)v3 | v2 / 0x8000000;
    int64_t v4; // 0x195b65
    if (v3) {
        // 0x195be6
        unknown_79b8f4ec();
        unknown_ffffffffee23fbfb(0xcc0e2a0b);
        *(int32_t *)0xcc0e2a0c = *(int32_t *)0xcc0e2a0c & (int32_t)__asm_hlt();
        int32_t * v5 = (int32_t *)(v4 - 0x60fe1762); // 0x195c00
        *v5 = *v5 + (int32_t)v4;
        int64_t v6 = unknown_3a697ddd(); // 0x195bd7
        *(int64_t *)0xf49f9f98 = -35;
        char * v7 = (char *)v6; // 0x195bde
        *v7 = *v7 - (char)v6;
        return 0x10000 * (int32_t)v6 >> 16;
    }
    // 0x195b6e
    unknown_fffffffff4ee1974();
    int32_t v8 = *(int32_t *)(a3 + 0x46306f95 + v4); // 0x195b7d
    int64_t v9 = unknown_2735d7b(); // 0x195b8e
    int64_t v10 = v9 & 0x81a20c98; // 0x195b93
    char * v11 = (char *)(a1 + 0x137a01e8); // 0x195b98
    *v11 = *v11 | (char)(0x69801e8 * v8 / 256);
    int64_t result = v9 & 0x81a20c00 | (int64_t)((char)v10 - *(char *)v10); // 0x195b9e
    char * v12 = (char *)result; // 0x195ba0
    *v12 = *v12 - 122;
    return result;
}

// Address range: 0x195c6d - 0x195c72
int64_t function_195c6d(void) {
    // 0x195c6d
    return function_ffffffffafb69f6b();
}

// Address range: 0x31a8bb - 0x31aa1e
int64_t function_31a8bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x31a8bb
    int64_t v1; // bp-8, 0x31a8bb
    int64_t v2 = (int64_t)&v1; // 0x31a921
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x31a929
    int64_t * v4 = (int64_t *)v3; // 0x31a934
    *v4 = 0x1e434f23;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x31a93c
    *v5 = 0x4c1812a1;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x31a949
    int64_t v7 = *(int64_t *)(v2 + 24); // 0x31a94f
    *v5 = v7;
    *v6 = v3;
    int64_t v8 = v1; // 0x31a973
    *v6 = v8;
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x31a977
    *v9 = v7;
    *(int64_t *)(v2 - 40) = a7;
    v1 = v7;
    *v6 = *v9;
    *v9 = v8;
    *(int64_t *)(v2 + 8) = v8;
    int64_t v10 = *v5; // 0x31a9ee
    *v6 = v10;
    *v9 = v10;
    int64_t v11 = *v4; // 0x31aa0a
    *v5 = v11;
    *v6 = v11;
    return function_cc59c(a7, a2, a3);
}

// Address range: 0x31aa1e - 0x31aa23
int64_t function_31aa1e(void) {
    // 0x31aa1e
    return function_320be0();
}

// Address range: 0x31aa23 - 0x31aa31
int64_t function_31aa23(int64_t a1, int64_t a2, int64_t a3) {
    // 0x31aa23
    int64_t v1; // 0x31aa23
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3 = v2 + v1; // 0x31aa25
    int32_t * v4 = (int32_t *)(a3 + 1); // 0x31aa28
    *v4 = *v4 + (int32_t)v1;
    int64_t v5; // 0x31aa23
    return v3 & 0xffffff00 | (int64_t)(*(char *)&v5 + (char)v3);
}

// Address range: 0x31aa6f - 0x31aa77
int64_t function_31aa6f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x31aa6f
    int64_t v1; // 0x31aa6f
    bool v2; // 0x31aa6f
    return v1 + a3 + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x31aa85 - 0x31aa91
int64_t function_31aa85(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t result = unknown_ffffffffb246e88b(a1, a2, a3, a4, a5); // 0x31aa85
    *(char *)(2 * a4 + 120 + result) = (char)(a4 / 256);
    return result;
}

// Address range: 0x31aa94 - 0x31aa99
int64_t function_31aa94(void) {
    // 0x31aa94
    return function_ffffffffad774892();
}

// Address range: 0x31aa9a - 0x31aaa1
int64_t function_31aa9a(void) {
    // 0x31aa9a
    return function_31aaa4();
}

// Address range: 0x31aaa3 - 0x31aaa4
int64_t function_31aaa3(void) {
    // 0x31aaa3
    int64_t result; // 0x31aaa3
    return result;
}

// Address range: 0x31aaa4 - 0x31aab1
int64_t function_31aaa4(void) {
    // 0x31aaa4
    __asm_hlt();
    int64_t v1 = __asm_sti(); // 0x31aaa5
    int64_t v2; // 0x31aaa4
    char * v3 = (char *)(v2 - 0x5fdf4141); // 0x31aaa8
    *v3 = *v3 + (char)v2;
    return v1 ^ 255;
}

// Address range: 0x31acbb - 0x31ad03
int64_t function_31acbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a3 - 0x18516276); // 0x31acbb
    *v2 = *v2 - 1;
    *(int32_t *)a2 = *(int32_t *)&v1 + (int32_t)a4;
    function_31acaa();
    int64_t v3; // 0x31acbb
    return v3 & 0xffff00ff | (int64_t)(int32_t)&g2;
}

// Address range: 0x31ad82 - 0x31ad85
int64_t function_31ad82(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31ad82
    int64_t result; // 0x31ad82
    return result;
}

// Address range: 0x31ad96 - 0x31ad9b
int64_t function_31ad96(void) {
    // 0x31ad96
    return function_69266d8b();
}

// Address range: 0x31adaa - 0x31adad
int64_t function_31adaa(int64_t a1) {
    // 0x31adaa
    int64_t result; // 0x31adaa
    *(char *)a1 = (char)(result / 256) + (char)result;
    return result;
}

// Address range: 0x31ade5 - 0x31adea
int64_t function_31ade5(void) {
    // 0x31ade5
    return function_5890bdeb();
}

// Address range: 0x31ae2f - 0x31af06
int64_t function_31ae2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a2;
    int64_t v2 = a8;
    int64_t v3 = a7;
    char v4 = __asm_in(-24); // 0x31ae2f
    int64_t v5; // 0x31ae2f
    uint32_t v6 = (int32_t)v5;
    int32_t v7 = v5; // 0x31ae31
    uint32_t v8 = v7 + v6; // 0x31ae31
    *(int32_t *)a1 = v8;
    int32_t v9 = v5 & 0xffffff00 | (int64_t)v4; // 0x31ae33
    char v10 = *(char *)0x9b03c478; // 0x31ae39
    *(char *)0x9b03c478 = (char)(v8 < v6) - (char)a4 + v10;
    int32_t v11 = v9 + 0x34bcc1e; // 0x31ae40
    if (llvm_ctpop_i8((char)v11) % 2 == 0) {
        int32_t * v12 = (int32_t *)(v5 - 84); // 0x31ae9a
        *v12 = *v12 | 0x2c01db8f;
        int64_t v13 = unknown_ffffffffaf0de9a6(0x2c01db8f); // 0x31aea0
        v3 = v13;
        int32_t * v14 = (int32_t *)(v13 + 0x44b4c80a); // 0x31aeac
        *v14 = *v14 + (int32_t)(int64_t)&v3;
        *(int32_t *)0x2c01db8f = (int32_t)v13;
        int32_t v15 = __asm_insd((int16_t)(v9 >> 31)); // 0x31aeb5
        bool v16; // 0x31ae2f
        *((v16 ? (int32_t *)0x2c01db8b : (int32_t *)0x2c01db93)) = v15;
        return unknown_1ac49bbc();
    }
    int64_t v17 = (int64_t)&v2; // 0x31ae47
    int64_t v18 = unknown_a0f934e(0x2c01db8f); // 0x31ae48
    int32_t v19 = v11; // 0x31ae4d
    bool v20 = false; // 0x31ae4d
    int64_t v21 = v18; // 0x31ae4d
    int64_t v22 = a4; // 0x31ae4d
    int64_t v23 = v3; // 0x31ae4d
    int64_t v24 = v17; // 0x31ae4d
    bool v25 = v9 < 0xfcb433e2; // 0x31ae4d
    bool v26; // 0x31ae2f
    if (((v11 ^ v9) & (v9 ^ -0x80000000)) < 0) {
        int64_t v27 = v3 + v17; // 0x31ae52
        *(int32_t *)0x2c01db8f = __asm_insd((int16_t)v27);
        int64_t v28; // bp+16, 0x31ae2f
        v24 = (int64_t)&v28;
        *(int32_t *)0x2c01db9e = *(int32_t *)0x2c01db9e + (int32_t)v24;
        uint32_t v29 = *(int32_t *)0x2c01db9d; // 0x31ae60
        uint32_t v30 = (int32_t)v27; // 0x31ae60
        *(int32_t *)0x2c01db9d = v29 - v30;
        uint32_t v31 = *(int32_t *)&v1; // 0x31ae68
        v19 = v31 + v7;
        *(int32_t *)v1 = v19;
        v26 = (v2 & (int64_t)&g1) != 0;
        v20 = ((v19 ^ v31) & (v19 ^ v7)) < 0;
        v21 = v5 + 0xe8aa553e + v18 + (int64_t)(v29 < v30) & 0xffffffff;
        v22 = 0x2c760aa0;
        v23 = v27 & 0xffffffff;
        v25 = v19 < v31;
    }
    int32_t v32 = v19;
    int64_t * v33 = (int64_t *)(v24 - 8); // 0x31ae6a
    *v33 = v24;
    if (v32 == 0 || v32 < 0 != v20) {
        uint32_t v34 = *(int32_t *)&v1; // 0x31aeea
        int32_t * v35 = (int32_t *)(v22 - 98); // 0x31aeec
        *v35 = *v35 / 2 | 0x80000000 * (int32_t)v25;
        *(int32_t *)-0x76e1e923f55ffe18 = v34;
        char * v36 = (char *)((int64_t)v34 + 28); // 0x31aefa
        *v36 = *v36 + (char)(v34 / 256);
        *v33 = v24;
        return unknown_ffffffffc26b8007();
    }
    char v37 = *(char *)-0x177a16c6; // 0x31ae7a
    *(char *)-0x177a16c6 = v37 | (char)(v22 / 256);
    int32_t v38 = v23; // 0x31ae80
    *(int32_t *)0x2c01db8f = (int32_t)v21;
    int64_t v39 = v26 ? 0x2c01db8b : 0x2c01db93; // 0x31ae89
    int64_t v40 = unknown_23690290(v39, (int32_t)v1 + v38); // 0x31ae8a
    int32_t * v41 = (int32_t *)(v39 - 113); // 0x31ae8f
    *v41 = *v41 + (int32_t)v39;
    int32_t * v42 = (int32_t *)(v23 - 8); // 0x31ae96
    *v42 = *v42 + v38;
    return (v40 + 34) % 256 | v40 & -256;
}

// Address range: 0x31af32 - 0x31af33
int64_t function_31af32(void) {
    // 0x31af32
    int64_t result; // 0x31af32
    return result;
}

// Address range: 0x31af36 - 0x31af38
int64_t function_31af36(void) {
    // 0x31af36
    int64_t result; // 0x31af36
    return result;
}

// Address range: 0x31af38 - 0x31af39
int64_t function_31af38(void) {
    // 0x31af38
    int64_t result; // 0x31af38
    return result;
}

// Address range: 0x31af59 - 0x31af63
int64_t function_31af59(void) {
    // 0x31af59
    return function_ffffffff8121b100();
}

// Address range: 0x31af75 - 0x31af76
int64_t function_31af75(int64_t a1) {
    // 0x31af75
    int64_t result; // 0x31af75
    return result;
}

// Address range: 0x31af99 - 0x31af9a
int64_t function_31af99(void) {
    // 0x31af99
    int64_t result; // 0x31af99
    return result;
}

// Address range: 0x31afc0 - 0x31afc1
int64_t function_31afc0(int64_t a1) {
    // 0x31afc0
    int64_t result; // 0x31afc0
    return result;
}

// Address range: 0x31afe7 - 0x31afe8
int64_t function_31afe7(int64_t a1) {
    // 0x31afe7
    int64_t result; // 0x31afe7
    return result;
}

// Address range: 0x31b003 - 0x31b006
int64_t function_31b003(void) {
    // 0x31b003
    int64_t result; // 0x31b003
    return result;
}

// Address range: 0x31b00c - 0x31b02b
int64_t function_31b00c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31b00c
    int64_t v1; // 0x31b00c
    int32_t * v2 = (int32_t *)(v1 + 73); // 0x31b00c
    *v2 = *v2 - (int32_t)v1;
    char * v3 = (char *)(a2 + 40); // 0x31b012
    unsigned char v4 = *v3; // 0x31b012
    *v3 = v4 / 128 | 2 * v4;
    return (v1 & 0xffffffc0 | 2) - v1 & 0xffffffff;
}

// Address range: 0x31b03e - 0x31b041
int64_t function_31b03e(void) {
    // 0x31b03e
    int64_t result; // 0x31b03e
    return result;
}

// Address range: 0x31b045 - 0x31b054
int64_t function_31b045(int64_t a1) {
    // 0x31b045
    int64_t v1; // 0x31b045
    int64_t v2 = v1;
    *(char *)-0x25a840b4 = *(char *)-0x25a840b4 + (char)(v1 / 256);
    char v3 = *(char *)(v1 - 0xa6ef22); // 0x31b04b
    return v2 & -0x10000 | (int64_t)((256 * (int16_t)v2 >> 8) * (int16_t)v3);
}
