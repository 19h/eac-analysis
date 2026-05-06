/*
 * Targeted RetDec C for native executable gap queue batch 446.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x227a66-0x227c66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x227c66-0x227e66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x227e66-0x228066 rank=- name=- kind=- bytes=- uncovered=-
 *   0x228066-0x228266 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f299e-0x3f2b9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4724ee-0x4726ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x4726ee-0x4728ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x472aee-0x472cee rank=- name=- kind=- bytes=- uncovered=-
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
int128_t __asm_pcmpgtb(int128_t left, int128_t right);
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

int64_t function_227a66(void);
int64_t function_227a6a(void);
int64_t function_227a6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_227afd(void);
int64_t function_227b2d(void);
int64_t function_227b5f(void);
int64_t function_227b6d(void);
int64_t function_227b71(int64_t a1, int64_t a2);
int64_t function_227bb0(int64_t a1, int64_t a2);
int64_t function_227c08(int64_t a1);
int64_t function_227c26(void);
int64_t function_227ca0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_227ca9(int64_t a1);
int64_t function_227cea(int64_t a1);
int64_t function_227cf6(void);
int64_t function_227d5b(void);
int64_t function_227d5f(void);
int64_t function_227d93(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_227da9(int64_t a1);
int64_t function_227e56(void);
int64_t function_227eef(void);
int64_t function_227f05(void);
int64_t function_227f29(int64_t a1);
int64_t function_227f2b(void);
int64_t function_227f49(void);
int64_t function_227f54(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_228111(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_228124(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2281b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2281c0(void);
int64_t function_2281db(void);
int64_t function_2281e1(int64_t a1);
int64_t function_2281ea(int64_t a1);
int64_t function_22821f(void);
int64_t function_3ad672eb();
int64_t function_3f299e(void);
int64_t function_3f29f6(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3f2b87(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4724ee(int64_t a1, int64_t a2);
int64_t function_4724f1(int64_t a1);
int64_t function_4724ff(void);
int64_t function_4725a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_47267d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_47272c(void);
int64_t function_47272d(void);
int64_t function_472731(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_47288a(int64_t a1, int64_t a2);
int64_t function_4728a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4728b0(int64_t a1);
int64_t function_4728d6(void);
int64_t function_472928();
int64_t function_472aee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_472afd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_472b14(void);
int64_t function_472b5f(void);
int64_t function_472b67(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_472bb5(int64_t a1);
int64_t function_472bc5(void);
int64_t function_472c14(void);
int64_t function_472c24(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_472c95(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_472cc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ffffffff885ffef5();
int64_t function_ffffffff8bc81b2e();
int64_t function_ffffffffb8a750a3();
int64_t function_ffffffffdf2c7c21();
int64_t unknown_13e9db89();
int64_t unknown_232ceda7();
int64_t unknown_ffffffffaf378d75();
int64_t unknown_ffffffffc97e6d2c();

// Address range: 0x227a66 - 0x227a67
int64_t function_227a66(void) {
    // 0x227a66
    int64_t result; // 0x227a66
    return result;
}

// Address range: 0x227a6a - 0x227a6b
int64_t function_227a6a(void) {
    // 0x227a6a
    int64_t result; // 0x227a6a
    return result;
}

// Address range: 0x227a6d - 0x227afc
int64_t function_227a6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1;
    int64_t v2; // 0x227a6d
    unsigned char v3 = *(char *)(v2 % 256 + v2 & 0xffffffff); // 0x227a6d
    *(char *)-0x5f1e8e89 = *(char *)-0x5f1e8e89 + (char)(v2 / 256);
    int32_t * v4 = (int32_t *)(a4 + 0x3fa3fabb); // 0x227a80
    uint32_t v5 = *v4; // 0x227a80
    *v4 = (int32_t)(v2 & 0xffffff00 | (int64_t)v3);
    int32_t * v6 = (int32_t *)((int64_t)v5 - 0x5f563127); // 0x227a8b
    *v6 = *v6 + v5;
    int64_t v7; // 0x227a6d
    *(int32_t *)v7 = *(int32_t *)&v7 + (int32_t)a1;
    int32_t v8 = v2; // 0x227ae7
    *(int32_t *)(a4 + 0x13d2770 + v2) = v8;
    char * v9 = (char *)(2 * a4 + 30); // 0x227aee
    *v9 = *v9 + (char)v7;
    *(int32_t *)v1 = *(int32_t *)&v1 + v8;
    return -0x79342c00;
}

// Address range: 0x227afd - 0x227b11
int64_t function_227afd(void) {
    char v1 = *(char *)-0x30a160f5; // 0x227b04
    int64_t v2; // 0x227afd
    *(char *)-0x30a160f5 = v1 + (char)((uint64_t)v2 / 256);
    return v2 & -256 | 15;
}

// Address range: 0x227b2d - 0x227b31
int64_t function_227b2d(void) {
    // 0x227b2d
    int64_t result; // 0x227b2d
    return result;
}

// Address range: 0x227b5f - 0x227b61
int64_t function_227b5f(void) {
    // 0x227b5f
    int64_t v1; // 0x227b5f
    return function_227b71(v1, v1);
}

// Address range: 0x227b6d - 0x227b71
int64_t function_227b6d(void) {
    // 0x227b6d
    int64_t result; // 0x227b6d
    char v1 = result;
    *(char *)result = 2 * v1;
    __asm_out(4, v1);
    return result;
}

// Address range: 0x227b71 - 0x227baf
int64_t function_227b71(int64_t a1, int64_t a2) {
    // 0x227b71
    int64_t v1; // 0x227b71
    uint64_t v2 = v1;
    char * v3 = (char *)(v1 - 0x2bd8ff63); // 0x227b71
    *v3 = *v3 + (char)v1;
    uint64_t v4 = unknown_13e9db89(); // 0x227b83
    *(char *)0x66fcff8f = *(char *)0x66fcff8f + (char)(v2 / 256);
    char * v5 = (char *)(a1 + 13); // 0x227b8e
    *v5 = *v5 + (char)v2;
    *(int32_t *)a1 = (int32_t)v4;
    int64_t result = v4 | 255; // 0x227b92
    char * v6 = (char *)(result + 0x6d00c5cb); // 0x227b9c
    *v6 = *v6 + (char)(v4 / 256);
    bool v7; // 0x227b71
    *(char *)((v7 ? -4 : 4) + a1) = -1;
    return result;
}

// Address range: 0x227bb0 - 0x227bc2
int64_t function_227bb0(int64_t a1, int64_t a2) {
    char v1 = *(char *)-0xb97b43; // 0x227bb6
    int64_t v2; // 0x227bb0
    *(char *)-0xb97b43 = v1 + (char)((uint64_t)v2 / 256);
    while (true) {
        // 0x227bbc
        int64_t v3; // 0x227bb0
        int64_t v4 = v3 - 8; // 0x227bbc
        int64_t v5; // 0x227bb0
        *(int64_t *)v4 = v5;
        v3 += 0x18f1;
        v5 = v4;
    }
}

// Address range: 0x227c08 - 0x227c09
int64_t function_227c08(int64_t a1) {
    // 0x227c08
    int64_t result; // 0x227c08
    return result;
}

// Address range: 0x227c26 - 0x227c2d
int64_t function_227c26(void) {
    // 0x227c26
    int64_t v1; // 0x227c26
    int32_t v2 = *(int32_t *)(v1 - 0x436ee4ea); // 0x227c26
    bool v3; // 0x227c26
    return (int32_t)v3 + (int32_t)v1 - v2;
}

// Address range: 0x227ca0 - 0x227ca8
int64_t function_227ca0(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a1 + 0x1e8109b); // 0x227ca0
    *v1 = *v1 | (char)a3;
    return function_227cea(a1);
}

// Address range: 0x227ca9 - 0x227cb8
int64_t function_227ca9(int64_t a1) {
    // 0x227ca9
    int64_t v1; // 0x227ca9
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    return v2 + 0x68a73f & 0xffffffff;
}

// Address range: 0x227cea - 0x227ceb
int64_t function_227cea(int64_t a1) {
    // 0x227cea
    int64_t result; // 0x227cea
    return result;
}

// Address range: 0x227cf6 - 0x227d00
int64_t function_227cf6(void) {
    // 0x227cf6
    int64_t result; // 0x227cf6
    *(int32_t *)0x2e20068fe533aab = (int32_t)result;
    return result;
}

// Address range: 0x227d5b - 0x227d5c
int64_t function_227d5b(void) {
    // 0x227d5b
    int64_t result; // 0x227d5b
    return result;
}

// Address range: 0x227d5f - 0x227d61
int64_t function_227d5f(void) {
    // 0x227d5f
    return function_227d5b();
}

// Address range: 0x227d93 - 0x227da2
int64_t function_227d93(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x227d93
    int64_t result; // 0x227d93
    int32_t * v1 = (int32_t *)(result - 82); // 0x227d99
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x227da9 - 0x227dac
int64_t function_227da9(int64_t a1) {
    // 0x227da9
    int64_t result; // 0x227da9
    return result;
}

// Address range: 0x227e56 - 0x227e5d
int64_t function_227e56(void) {
    // 0x227e56
    int64_t result; // 0x227e56
    return result;
}

// Address range: 0x227eef - 0x227ef0
int64_t function_227eef(void) {
    // 0x227eef
    int64_t result; // 0x227eef
    return result;
}

// Address range: 0x227f05 - 0x227f07
int64_t function_227f05(void) {
    // 0x227f05
    return function_227eef();
}

// Address range: 0x227f29 - 0x227f2a
int64_t function_227f29(int64_t a1) {
    // 0x227f29
    int64_t result; // 0x227f29
    return result;
}

// Address range: 0x227f2b - 0x227f2c
int64_t function_227f2b(void) {
    // 0x227f2b
    int64_t result; // 0x227f2b
    return result;
}

// Address range: 0x227f49 - 0x227f4a
int64_t function_227f49(void) {
    // 0x227f49
    int64_t result; // 0x227f49
    return result;
}

// Address range: 0x227f54 - 0x2280fe
int64_t function_227f54(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x227f54
    __asm_outsb((int16_t)a3, (char)a2);
    int64_t v1; // 0x227f54
    *(char *)-0x307c9881ff548f54 = (char)v1;
    unsigned char v2 = *(char *)(a2 + 0x1e1701e8); // 0x227f5e
    unknown_ffffffffaf378d75();
    *(int32_t *)-0x175e5f01644e2df7 = (int32_t)v1;
    if ((a4 & 0xffffffff & (a3 & 0xffffff00 | (int64_t)v2) + v1) == 0) {
        // 0x227ffd
        return 0x4600;
    }
    // 0x227fc4
    *(int32_t *)a2 = llvm_bswap_i32((int32_t)v1);
    bool v3; // 0x227f54
    char * v4 = (char *)(a1 + 0x3a23d353 + 2 * v1 + (v3 ? -1 : 1)); // 0x227fcb
    *v4 = -1 - *v4;
    return __asm_wait();
}

// Address range: 0x228111 - 0x228124
int64_t function_228111(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x228111
    int64_t v1; // 0x228111
    int32_t * v2 = (int32_t *)(v1 - 0x3f60eda7); // 0x228111
    *v2 = *v2 + (int32_t)v1;
    int64_t result = v1 + 0xe88f62a6 & 0xffffffff; // 0x228117
    int32_t * v3 = (int32_t *)(v1 - 79 + 8 * result); // 0x22811c
    *v3 = *v3 + (int32_t)a4;
    return result;
}

// Address range: 0x228124 - 0x2281a9
int64_t function_228124(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x228124
    int64_t v1; // 0x228124
    unsigned char v2 = (char)v1; // 0x228124
    char v3 = v2 / 128; // 0x228124
    uint64_t v4 = unknown_ffffffffc97e6d2c(); // 0x228126
    if (v2 / 64 % 2 == v3) {
        // 0x22812d
        return v4 / 2 % 0x8000 | v4 & -0x10000;
    }
    char v5 = 2 * v2; // 0x228124
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x228124
    bool v7; // 0x228124
    *(int32_t *)a1 = (int32_t)(v4 & 0xffff00ff | 256 * (64 * (int64_t)(v5 == 0) | (int64_t)(v3 != 0) | 128 * (int64_t)(v5 < 0) | 4 * (int64_t)(v6 % 2 == 0) | 16 * (int64_t)v7)) | 512;
    char * v8 = (char *)(a4 - 17); // 0x22819e
    *v8 = *v8 + (char)v4;
    return unknown_232ceda7((v7 ? -4 : 4) + a1);
}

// Address range: 0x2281b0 - 0x2281b2
int64_t function_2281b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2281b0
    int64_t result; // 0x2281b0
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x2281c0 - 0x2281c1
int64_t function_2281c0(void) {
    // 0x2281c0
    int64_t result; // 0x2281c0
    return result;
}

// Address range: 0x2281db - 0x2281dc
int64_t function_2281db(void) {
    // 0x2281db
    int64_t result; // 0x2281db
    return result;
}

// Address range: 0x2281e1 - 0x2281e2
int64_t function_2281e1(int64_t a1) {
    // 0x2281e1
    int64_t result; // 0x2281e1
    return result;
}

// Address range: 0x2281ea - 0x2281ed
int64_t function_2281ea(int64_t a1) {
    // 0x2281ea
    int64_t result; // 0x2281ea
    return result;
}

// Address range: 0x22821f - 0x228221
int64_t function_22821f(void) {
    // 0x22821f
    return function_2281db();
}

// Address range: 0x3f299e - 0x3f29a0
int64_t function_3f299e(void) {
    // 0x3f299e
    int64_t v1; // 0x3f299e
    int64_t v2 = v1;
    return (v2 + 190) % 256 | v2 & -256;
}

// Address range: 0x3f29f6 - 0x3f2b0f
int64_t function_3f29f6(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3f29f6
    int64_t v1; // 0x3f29f6
    int64_t result = v1;
    int64_t v2 = a1;
    bool v3; // 0x3f29f6
    if (!v3) {
        int16_t v4 = a3; // 0x3f2a71
        __asm_outsb(v4, (char)a2);
        *(char *)a1 = __asm_insb(v4);
        return result;
    }
    int64_t result2 = (int64_t)((int32_t)result - *(int32_t *)(result + 46)); // 0x3f2a4a
    if ((char)(a3 / 256) != (char)a1) {
        // 0x3f2a53
        return result2;
    }
    int64_t v5 = result2;
    int64_t result3 = (int64_t)((int32_t)v5 - *(int32_t *)(v5 + 46)); // 0x3f2a4a
    while (*(char *)&v2 == 0) {
        // 0x3f2a3f
        v5 = result3;
        result3 = (int64_t)((int32_t)v5 - *(int32_t *)(v5 + 46));
    }
    // 0x3f2a53
    return result3;
}

// Address range: 0x3f2b87 - 0x3f2b8a
int64_t function_3f2b87(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3f2b87
    int64_t result; // 0x3f2b87
    return result;
}

// Address range: 0x4724ee - 0x4724f0
int64_t function_4724ee(int64_t a1, int64_t a2) {
    // 0x4724ee
    int64_t result; // 0x4724ee
    *(int32_t *)a2 = (int32_t)(result ^ a1);
    return result;
}

// Address range: 0x4724f1 - 0x4724f4
int64_t function_4724f1(int64_t a1) {
    // 0x4724f1
    int64_t result; // 0x4724f1
    return result;
}

// Address range: 0x4724ff - 0x472513
int64_t function_4724ff(void) {
    // 0x4724ff
    return function_ffffffffdf2c7c21();
}

// Address range: 0x4725a2 - 0x472623
int64_t function_4725a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x4725a2
    int64_t v1; // 0x4725a2
    char v2 = ((char)v1 | 68) ^ 34; // 0x4725a4
    int64_t v3 = v1 & -256; // 0x4725a4
    if (v2 >= 0) {
        // 0x472615
        return v3 | (int64_t)__asm_in_136((int16_t)a3);
    }
    // 0x4725a8
    return v3 | (int64_t)v2;
}

// Address range: 0x47267d - 0x47271f
int64_t function_47267d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x47267d
    int64_t v1; // 0x47267d
    bool v2; // 0x47267d
    uint64_t v3 = v1 - (v2 ? 0xd3e21433 : 0xd3e21432); // 0x472681
    *(int32_t *)a2 = (int32_t)a2;
    __asm_int(81);
    char v4 = *(char *)(v3 % 256 - 0x6c4ef7e065d38852); // 0x472694
    int64_t v5 = v3 & 0xffffff00; // 0x472694
    __asm_out(-65, v4);
    unsigned char v6 = v4 + (char)(a3 / 256); // 0x472698
    unsigned char v7 = llvm_ctpop_i8(v6); // 0x472698
    int64_t result = v5 | (int64_t)v6; // 0x472698
    int64_t v8 = 0xe224784; // bp-16, 0x47269b
    if (v7 % 2 != 0) {
        char * v9 = (char *)(result - 0x7acb25b3); // 0x472719
        *v9 = *v9 - v6;
        return result;
    }
    uint32_t v10 = (int32_t)v3 >> 31; // 0x4726aa
    int32_t v11 = *(int32_t *)(4 * (int64_t)v10 + (int64_t)&v8); // 0x4726b2
    unsigned char v12 = (char)a4 % 32; // 0x4726b8
    int64_t result2 = result; // 0x4726b8
    if (v12 != 0) {
        uint32_t v13 = v11 + (int32_t)(v6 < 228); // 0x4726b2
        bool v14 = v6 < 228 ? v13 != -1 | v10 < v10 + (int32_t)(v6 < 228) - v13 : v10 < v13; // 0x4726b2
        result2 = v5 | (int64_t)(v6 >> v12 | (char)((int16_t)v6 << (int16_t)(9 - v12)) | (char)v14 << 8 - v12);
    }
    __asm_out_133(-65, (int32_t)result2);
    return result2;
}

// Address range: 0x47272c - 0x47272d
int64_t function_47272c(void) {
    // 0x47272c
    int64_t result; // 0x47272c
    return result;
}

// Address range: 0x47272d - 0x47272e
int64_t function_47272d(void) {
    // 0x47272d
    int64_t result; // 0x47272d
    return result;
}

// Address range: 0x472731 - 0x472831
int64_t function_472731(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    int64_t v2 = a7;
    int64_t v3; // 0x472731
    bool v4; // 0x472731
    if (v4 || false) {
        int64_t v5; // 0x472731
        v5 = function_47272c();
        char * v6 = (char *)(v3 + 0xbd489057 & 0xffffffff); // 0x47279b
        char v7 = *v6 & (char)(a4 / 256); // 0x47279b
        *v6 = v7;
        if (v7 < 0) {
            // 0x4727a5
            return v5 & -256 | (int64_t)*(char *)&v1;
        }
        int32_t v8 = __asm_in_134((int16_t)a3); // 0x472824
        *(int32_t *)a1 = v8;
        return (int64_t)(*(int32_t *)(a4 + 116) & v8);
    }
    uint32_t v9 = (int32_t)v3; // 0x472734
    uint32_t v10 = (int32_t)(int64_t)&v2 | (int32_t)v4; // 0x472734
    int64_t result = __asm_int3(); // 0x472737
    if (v10 <= v9) {
        // 0x47273f
        return result;
    }
    int32_t * v11 = (int32_t *)(a1 + 22); // 0x472739
    uint32_t v12 = *v11; // 0x472739
    *v11 = v12 / 0x800000 | 512 * v12;
    if (v9 - v10 >= 0) {
        function_47272d();
    }
    // 0x47273f
    return 0x56c8ad51;
}

// Address range: 0x47288a - 0x47289d
int64_t function_47288a(int64_t a1, int64_t a2) {
    // 0x472891
    __asm_wait();
    return function_ffffffff885ffef5();
}

// Address range: 0x4728a0 - 0x4728a9
int64_t function_4728a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4728a0
    int64_t v1; // 0x4728a0
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1 & 0xffffffff);
}

// Address range: 0x4728b0 - 0x4728be
int64_t function_4728b0(int64_t a1) {
    // 0x4728b0
    int64_t result; // 0x4728b0
    bool v1; // 0x4728b0
    if (!v1) {
        result = function_472928();
    }
    // 0x4728b2
    *(char *)-0x6a91c7a2fc449cac = (char)result;
    return result;
}

// Address range: 0x4728d6 - 0x4728e7
int64_t function_4728d6(void) {
    // 0x4728d6
    return function_3ad672eb();
}

// Address range: 0x472aee - 0x472afa
int64_t function_472aee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x472aee
    int64_t result; // 0x472aee
    return result;
}

// Address range: 0x472afd - 0x472b0f
int64_t function_472afd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x472afd
    int64_t v1; // 0x472afd
    uint64_t v2 = v1;
    *(char *)a1 = (char)v1;
    bool v3; // 0x472afd
    int64_t v4 = (v3 ? -1 : 1) + a1; // 0x472afd
    int16_t v5 = a3; // 0x472b01
    char v6 = v2; // 0x472b01
    __asm_out_137(v5, v6);
    char v7 = *(char *)v4; // 0x472b02
    *(int32_t *)v4 = __asm_insd(v5);
    *(char *)0x655f5b56257b5e2f = v6;
    return 256 * (int64_t)(v7 & (char)(v2 / 256)) | v2 & -0xff01;
}

// Address range: 0x472b14 - 0x472b15
int64_t function_472b14(void) {
    // 0x472b14
    int64_t result; // 0x472b14
    return result;
}

// Address range: 0x472b5f - 0x472b60
int64_t function_472b5f(void) {
    // 0x472b5f
    int64_t result; // 0x472b5f
    return result;
}

// Address range: 0x472b67 - 0x472bb4
int64_t function_472b67(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x472b67
    bool v3; // 0x472b67
    if (!v3 && !v3) {
        v2 = function_472b5f();
    }
    if (v3) {
        // 0x472b6c
        return (int64_t)*(int32_t *)0x16e520007662f5;
    }
    int64_t v4 = v2 & 0xffffffff ^ 0x6855291; // 0x472b7f
    char * v5 = (char *)(v4 + 0x13f566ff); // 0x472b84
    int64_t v6; // 0x472b67
    *v5 = *v5 + (char)(v6 / 256);
    __asm_frstor(*(int864_t *)(v6 - 111));
    uint64_t v7 = a1 & 0xffffffff ^ 0x533999c5; // 0x472b92
    char v8 = *(char *)(a3 - 0x7dbdf280); // 0x472b98
    *(int32_t *)v4 = *(int32_t *)&v1;
    return 256 * (int64_t)(v8 & (char)(v7 / 256)) | v7 & 0xffff00ff;
}

// Address range: 0x472bb5 - 0x472bc2
int64_t function_472bb5(int64_t a1) {
    // 0x472bb5
    return __asm_int1();
}

// Address range: 0x472bc5 - 0x472bca
int64_t function_472bc5(void) {
    // 0x472bc5
    return function_ffffffffb8a750a3();
}

// Address range: 0x472c14 - 0x472c1a
int64_t function_472c14(void) {
    // 0x472c14
    int64_t v1; // 0x472c14
    int64_t v2 = v1;
    float80_t v3; // 0x472c14
    *(int32_t *)(v2 + 42 + 2 * v2) = (int32_t)v3;
    return function_472c95(v1, v1, v1, v1);
}

// Address range: 0x472c24 - 0x472c28
int64_t function_472c24(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x472c24
    int64_t result; // 0x472c24
    return result;
}

// Address range: 0x472c95 - 0x472c9d
int64_t function_472c95(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x472c95
    int64_t result; // 0x472c95
    return result;
}

// Address range: 0x472cc7 - 0x472ccf
int64_t function_472cc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x472cc7
    return function_ffffffff8bc81b2e(a4);
}
