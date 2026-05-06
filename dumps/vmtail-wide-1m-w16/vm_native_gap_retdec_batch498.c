/*
 * Targeted RetDec C for native executable gap queue batch 498.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x229066-0x229266 rank=- name=- kind=- bytes=- uncovered=-
 *   0x229266-0x229466 rank=- name=- kind=- bytes=- uncovered=-
 *   0x229466-0x229666 rank=- name=- kind=- bytes=- uncovered=-
 *   0x229866-0x229a66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42ce93-0x42d093 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42d293-0x42d493 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42d493-0x42d693 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42d693-0x42d893 rank=- name=- kind=- bytes=- uncovered=-
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
void __writegsdword(int64_t offset, uint32_t value);
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

int64_t function_20b07ea();
int64_t function_229006();
int64_t function_229066(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_229162(int64_t a1);
int64_t function_2291b3(void);
int64_t function_2291d0(void);
int64_t function_229245(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_229281(void);
int64_t function_2292b0(void);
int64_t function_2292b2(void);
int64_t function_2292b6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2292e1(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_22938f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2293a1(void);
int64_t function_2293a9(void);
int64_t function_2293b9(int64_t a1);
int64_t function_2293bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2293d1(void);
int64_t function_2293d6(void);
int64_t function_22942c(void);
int64_t function_22942e(void);
int64_t function_229447(void);
int64_t function_229467(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_229495(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_229532(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_229599(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_2295bf(void);
int64_t function_22960c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22961a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_22980b();
int64_t function_229848();
int64_t function_229866(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_229885(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2298bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7);
int64_t function_2298fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22993b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2299a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2299b6(int64_t a1);
int64_t function_2299d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_229a30(void);
int64_t function_26be9275();
int64_t function_3d50957f();
int64_t function_42ce93(void);
int64_t function_42cea4(int64_t a1);
int64_t function_42cf05(void);
int64_t function_42cf86(int64_t a1);
int64_t function_42cff4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_42d04c(void);
int64_t function_42d06a(void);
int64_t function_42d078(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42d293(void);
int64_t function_42d2a7(void);
int64_t function_42d2c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42d2cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_42d48e(int64_t a1);
int64_t function_42d4a1(void);
int64_t function_42d4bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42d4f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42d50c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_42d552(void);
int64_t function_42d561(int64_t a1);
int64_t function_42d5c7(void);
int64_t function_42d5d4(void);
int64_t function_42d5dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6, int64_t a7);
int64_t function_42d6a7(void);
int64_t function_42d6a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42d6b7(void);
int64_t function_42d703(int64_t a1);
int64_t function_42d87f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4872944d();
int64_t function_ffffffff926c20d7();
int64_t function_ffffffffa4040e3f();
int64_t function_ffffffffb02fe745();
int64_t function_ffffffffce19eedc();
int64_t function_ffffffffe9399bf0();
int64_t function_ffffffffef23ceb8();
int64_t unknown_1be80968();
int64_t unknown_2295700f();
int64_t unknown_25c067c2();
int64_t unknown_29653604();
int64_t unknown_2db3e795();
int64_t unknown_34167760();
int64_t unknown_3d0f52d1();
int64_t unknown_5aaddeb3();
int64_t unknown_64daa26c();
int64_t unknown_7d02e144();
int64_t unknown_ffffffff8830fbb0();
int64_t unknown_ffffffff9265ac87();
int64_t unknown_ffffffff9ac094a4();
int64_t unknown_ffffffffb4afe271();
int64_t unknown_ffffffffd3234987();
int64_t unknown_ffffffffd523d5e2();
int64_t unknown_ffffffffe86acbf3();

// Address range: 0x229066 - 0x22909b
int64_t function_229066(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_64daa26c(); // 0x22906b
    bool v1; // 0x229066
    if (!v1) {
        result = function_229006();
    }
    char * v2 = (char *)(result + 0x1e88805); // 0x22906d
    char v3 = result; // 0x22906d
    *v2 = *v2 + v3;
    if (a4 == 1) {
        // 0x22909a
        return result;
    }
    char * v4 = (char *)(result + 0x48d7ed00); // 0x229078
    *v4 = *v4 + v3;
    char * v5 = (char *)(a3 + 1); // 0x22907e
    *v5 = *v5 + (char)(result / 256);
    return unknown_ffffffffd3234987();
}

// Address range: 0x229162 - 0x229168
int64_t function_229162(int64_t a1) {
    // 0x229162
    return unknown_1be80968(a1);
}

// Address range: 0x2291b3 - 0x2291b8
int64_t function_2291b3(void) {
    // 0x2291b3
    return function_ffffffffef23ceb8();
}

// Address range: 0x2291d0 - 0x2291d5
int64_t function_2291d0(void) {
    // 0x2291d0
    return function_4872944d();
}

// Address range: 0x229245 - 0x22924b
int64_t function_229245(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x229245
    int64_t v1; // 0x229245
    int64_t result = v1;
    *(char *)result = (char)result + (char)a4;
    return result;
}

// Address range: 0x229281 - 0x229282
int64_t function_229281(void) {
    // 0x229281
    int64_t result; // 0x229281
    return result;
}

// Address range: 0x2292b0 - 0x2292b1
int64_t function_2292b0(void) {
    // 0x2292b0
    int64_t result; // 0x2292b0
    return result;
}

// Address range: 0x2292b2 - 0x2292b3
int64_t function_2292b2(void) {
    // 0x2292b2
    int64_t result; // 0x2292b2
    return result;
}

// Address range: 0x2292b6 - 0x2292c1
int64_t function_2292b6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2292b6
    int64_t v1; // 0x2292b6
    uint64_t v2 = v1;
    char * v3 = (char *)(a3 + 0x7d1101e8); // 0x2292b8
    *v3 = *v3 & (char)v1;
    return (v2 / 256 + v2) % 256 | v2 & -256;
}

// Address range: 0x2292e1 - 0x229355
int64_t function_2292e1(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x2292e1
    int64_t v1; // 0x2292e1
    uint64_t v2 = v1 + a1; // 0x2292e1
    *(int32_t *)a1 = -(int32_t)a1;
    *(char *)-0x17e3bd24da6b55a8 = (char)v2;
    uint64_t v3 = v1 + a4; // 0x2292f4
    char * v4 = (char *)(v1 - 87 + 4 * v1); // 0x2292f6
    char v5 = *v4 ^ (char)(v2 / 256); // 0x2292f6
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x2292f6
    *v4 = v5;
    int64_t v7 = v3 & 0xffffffff; // bp-8, 0x2292fa
    if (v6 % 2 == 0) {
        function_229281();
    }
    // 0x2292fd
    unknown_29653604();
    char v8 = v3 / 256; // 0x229306
    char v9 = *(char *)(a1 - 119); // 0x229306
    int64_t v10 = unknown_2295700f(); // 0x22930e
    if (((v8 - v9 ^ v8) & (v9 ^ v8)) < 0) {
        v10 = function_2292b0();
    }
    int64_t v11 = (int64_t)&v7; // 0x2292fa
    char * v12 = (char *)(v1 - 0xa4efe18); // 0x229310
    unsigned char v13 = *v12; // 0x229310
    unsigned char v14 = v13 + (char)(v1 / 256); // 0x229310
    *v12 = v14;
    int64_t v15 = *(int64_t *)(a1 + 1); // 0x229316
    int64_t v16 = v14 < v13; // 0x229316
    int64_t v17 = v15 + a5 + v16; // 0x229316
    int64_t v18 = v17 + v16; // 0x229316
    if (((v18 ^ a5) & (v18 ^ v15)) < 0) {
        char v19 = *(char *)(v1 - 0x34f4c455); // 0x229321
        int32_t * v20 = (int32_t *)(a2 + 0x3cfca1aa); // 0x229329
        *v20 = *v20 + (int32_t)v10;
        int64_t v21 = unknown_ffffffff9265ac87(); // 0x22932f
        int64_t v22 = *(int64_t *)(v1 + v11 & 0xffffffff); // 0x229338
        int64_t v23 = (v22 & (int64_t)&g1) == 0 ? 4 : -4; // 0x229339
        *(int32_t *)v21 = (int32_t)v1;
        __asm_in((int16_t)(256 * (int64_t)(v19 ^ (char)(a3 / 256)) | a3 % 256));
        unknown_7d02e144();
        char * v24 = (char *)(a1 + 36 + v23); // 0x229345
        *v24 = *v24 + (char)v3;
        __asm_int(-32);
        while (true) {
            // continue -> 0x229353
        }
    }
    int64_t result = v11; // 0x22931d
    if (llvm_ctpop_i8((char)v17) % 2 != 0) {
        result = function_2292b2();
    }
    // 0x22931f
    return result;
}

// Address range: 0x22938f - 0x229397
int64_t function_22938f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x22938f
    return function_3d50957f();
}

// Address range: 0x2293a1 - 0x2293a2
int64_t function_2293a1(void) {
    // 0x2293a1
    int64_t result; // 0x2293a1
    return result;
}

// Address range: 0x2293a9 - 0x2293aa
int64_t function_2293a9(void) {
    // 0x2293a9
    int64_t result; // 0x2293a9
    return result;
}

// Address range: 0x2293b9 - 0x2293bd
int64_t function_2293b9(int64_t a1) {
    // 0x2293b9
    int64_t v1; // 0x2293b9
    bool v2; // 0x2293b9
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x2293bd - 0x2293c1
int64_t function_2293bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2293bd
    return function_2293a9();
}

// Address range: 0x2293d1 - 0x2293d2
int64_t function_2293d1(void) {
    // 0x2293d1
    int64_t result; // 0x2293d1
    return result;
}

// Address range: 0x2293d6 - 0x2293d8
int64_t function_2293d6(void) {
    // 0x2293d6
    return function_2293a1();
}

// Address range: 0x22942c - 0x22942d
int64_t function_22942c(void) {
    // 0x22942c
    int64_t result; // 0x22942c
    return result;
}

// Address range: 0x22942e - 0x22942f
int64_t function_22942e(void) {
    // 0x22942e
    int64_t result; // 0x22942e
    return result;
}

// Address range: 0x229447 - 0x22944c
int64_t function_229447(void) {
    // 0x229447
    return function_ffffffffb02fe745();
}

// Address range: 0x229467 - 0x229495
int64_t function_229467(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x229467
    int64_t v1; // 0x229467
    __asm_pavgw(v1, a4);
    int64_t v2 = unknown_ffffffffb4afe271(); // 0x229470
    bool v3; // 0x229467
    if (!v3 && !v3) {
        v2 = function_22942e();
    }
    int64_t v4 = v2;
    char v5 = *(char *)0x5ba7227f; // 0x229478
    *(char *)0x5ba7227f = v5 + (char)((uint64_t)v1 / 256);
    *(char *)a3 = ((char)v4 & 77) + (char)a3;
    int32_t * v6 = (int32_t *)((v1 & 0xffffffff) + 0x7c63834d); // 0x229482
    *v6 = *v6 | (int32_t)a2;
    int32_t * v7 = (int32_t *)(a3 + 0x7c013d00); // 0x22948c
    *v7 = *v7 | (int32_t)v1;
    return (1024 * (int64_t)v3 | 0x8000 * (int64_t)v3 | v4 & 0xe6f00000 | v4 & 77) ^ 72;
}

// Address range: 0x229495 - 0x22950f
int64_t function_229495(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x229495
    int64_t result; // 0x229495
    bool v1; // 0x229495
    if (v1) {
        result = function_22942c();
    }
    char v2 = (char)v1 - (char)a3 + (char)a5; // 0x22949d
    *(char *)a5 = v2;
    if (v2 < 0) {
        // 0x229501
        return result + 0x4cc492fc & 0xffffff00 | (int64_t)*(char *)0x6bceb22d01e874c6;
    }
    // 0x2294a2
    return result;
}

// Address range: 0x229532 - 0x22953d
int64_t function_229532(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a4 - 0x6a334bc3); // 0x229536
    int64_t v2; // 0x229532
    *v1 = *v1 & (char)((uint64_t)v2 / 256);
    return v2 | a4 / 256 % 256;
}

// Address range: 0x229599 - 0x2295ab
int64_t function_229599(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x229599
    int64_t v1; // 0x229599
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a4 - 26); // 0x229599
    int32_t v4 = a4; // 0x229599
    *v3 = *v3 + v4;
    char * v5 = (char *)v2; // 0x22959e
    *v5 = *v5 - 1;
    int64_t v6; // 0x229599
    *(int32_t *)a1 = *(int32_t *)&v6;
    int32_t * v7 = (int32_t *)(v1 + 1); // 0x2295a7
    *v7 = *v7 + v4;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x2295bf - 0x2295c1
int64_t function_2295bf(void) {
    // 0x2295bf
    int64_t v1; // 0x2295bf
    return function_22961a(v1, v1, v1, v1, (int64_t)&g2, (int64_t)&g2);
}

// Address range: 0x22960c - 0x229619
int64_t function_22960c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x22960c
    int64_t v1; // 0x22960c
    *(int32_t *)(v1 - 0x17e15a30) = (int32_t)a2;
    return function_26be9275();
}

// Address range: 0x22961a - 0x22965f
int64_t function_22961a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x22961a
    int64_t v1; // 0x22961a
    if ((int32_t)v1 != 0) {
        // 0x22965a
        return unknown_34167760();
    }
    int64_t v2 = __asm_iretd(); // 0x229627
    __asm_int(8);
    __asm_int(-4);
    return v2 & -256 | (int64_t)*(char *)-0x2c0d9efe171102d9;
}

// Address range: 0x229866 - 0x229884
int64_t function_229866(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a5;
    int64_t v3; // 0x229866
    char * v4 = (char *)(v3 - 0x17ac4fc6); // 0x22986c
    *v4 = *v4 - (char)(v3 / 256);
    int32_t v5 = a4; // 0x229872
    int32_t v6 = (int32_t)v3 + 8; // 0x229872
    int32_t v7 = v6 + v5; // 0x229872
    if (v7 < 0 == ((v7 ^ v5) & (v7 ^ v6)) < 0) {
        function_22980b();
    }
    // 0x229876
    *(char *)v1 = *(char *)&v1 + (char)(v3 / 256);
    __asm_out(93, (int32_t)v2);
    bool v8; // 0x229866
    return (int64_t)*(int32_t *)((v8 ? -4 : 4) + (int64_t)&v2);
}

// Address range: 0x229885 - 0x2298bb
int64_t function_229885(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_2db3e795(); // 0x22988f
    bool v1; // 0x229885
    if (v1 || v1) {
        // 0x229903
        return result;
    }
    // 0x229896
    int64_t v2; // 0x229885
    char * v3 = (char *)((256 * v2 & 0xff00 | a4 & -0xff01) - 1); // 0x22989b
    unsigned char v4 = *v3; // 0x22989b
    char v5 = v4 / 128; // 0x22989b
    *v3 = v5 | 2 * v4;
    unknown_ffffffff9ac094a4();
    if (v4 / 64 % 2 != v5) {
        function_229848();
    }
    // 0x2298ad
    unknown_5aaddeb3();
    return function_ffffffffce19eedc();
}

// Address range: 0x2298bb - 0x2298f5
int64_t function_2298bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    int32_t v1 = *(int32_t *)unknown_25c067c2(); // 0x2298c6
    int64_t v2 = a4 & -256 | 167; // 0x2298c9
    uint64_t v3 = unknown_3d0f52d1(); // 0x2298cb
    char * v4 = (char *)(v2 - 124); // 0x2298d0
    *v4 = *v4 << 7;
    int32_t * v5 = (int32_t *)((int64_t)(-54 * v1) - 9); // 0x2298d9
    int32_t v6 = *v5; // 0x2298d9
    *v5 = v6 + (int32_t)(((int128_t)v3 | 0x693a8bcb0000000000000000) / (int128_t)a6);
    int64_t v7 = unknown_ffffffffd523d5e2(); // 0x2298dc
    bool v8; // 0x2298bb
    int64_t v9 = 0x4000 * (int64_t)(bool)v8 | 1024 * (int64_t)v8 | 512 * (int64_t)v8 | 256 * (int64_t)v8; // 0x2298f2
    int64_t v10; // 0x2298bb
    int64_t v11 = (int64_t)&v10; // 0x2298e1
    int64_t v12 = v7 + 0xbfc7fe18 & 0xffffffff; // 0x2298e1
    while (true) {
        char v13 = (char)v12 ^ -68; // 0x2298f0
        unsigned char v14 = llvm_ctpop_i8(v13); // 0x2298f0
        v11 = (v11 + v2 & 0xffffffff) - 8;
        *(int64_t *)v11 = v9 | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v13 < 0) | 4 * (int64_t)(v14 % 2 == 0) | 2;
        v12 = v13;
    }
}

// Address range: 0x2298fe - 0x229903
int64_t function_2298fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 34); // 0x2298fe
    int64_t result; // 0x2298fe
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x22993b - 0x229982
int64_t function_22993b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x22993b
    int64_t v1; // 0x22993b
    int32_t v2 = v1; // 0x229942
    *(int32_t *)a1 = v2 + (int32_t)v1;
    char v3 = *(char *)(a4 - 0x1717342b); // 0x229949
    bool v4; // 0x22993b
    int64_t v5 = v4 ? -1 : 1; // 0x229951
    unknown_ffffffffe86acbf3(v5 + a1, 0x3dc5fc00, 0xb3f5ec, (int32_t)(a4 & 0xffffff00 | (int64_t)(v3 & (char)a4)) + 0xb3f5ec);
    int32_t * v6 = (int32_t *)(v1 + 0x9d01e29); // 0x229969
    *v6 = *v6 + v2;
    return function_20b07ea();
}

// Address range: 0x2299a0 - 0x2299b6
int64_t function_2299a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2299a0
    return unknown_ffffffff8830fbb0();
}

// Address range: 0x2299b6 - 0x2299bf
int64_t function_2299b6(int64_t a1) {
    // 0x2299b6
    int64_t result; // 0x2299b6
    return result;
}

// Address range: 0x2299d4 - 0x229a08
int64_t function_2299d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2299d4
    int64_t v1; // 0x2299d4
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a4;
    int64_t v2 = (int64_t)(*(char *)(a1 + 32 + 4 * a4) ^ 25) | 0x2401e857a1002800; // 0x2299e7
    int64_t v3; // 0x2299d4
    int32_t * v4 = (int32_t *)((v2 + (int64_t)&v3 & 0xffffffff) - 0x15b01885); // 0x2299ed
    int32_t v5 = v2; // 0x2299ed
    *v4 = *v4 + v5;
    int32_t * v6 = (int32_t *)(a5 + 116); // 0x2299fa
    *v6 = *v6 - 0x17d60990 + v5;
    return function_ffffffffe9399bf0();
}

// Address range: 0x229a30 - 0x229a33
int64_t function_229a30(void) {
    // 0x229a30
    int64_t result; // 0x229a30
    return result;
}

// Address range: 0x42ce93 - 0x42cea2
int64_t function_42ce93(void) {
    // 0x42ce93
    int64_t v1; // 0x42ce93
    uint64_t v2 = v1;
    __asm_out(-53, (int32_t)v2);
    int64_t result = v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1); // 0x42ce96
    char * v3 = (char *)(result - 0x69c5fa52); // 0x42ce9c
    *v3 = *v3 | (char)(v2 / 256);
    return result;
}

// Address range: 0x42cea4 - 0x42cea5
int64_t function_42cea4(int64_t a1) {
    // 0x42cea4
    int64_t result; // 0x42cea4
    return result;
}

// Address range: 0x42cf05 - 0x42cf08
int64_t function_42cf05(void) {
    // 0x42cf05
    int64_t result; // 0x42cf05
    return result;
}

// Address range: 0x42cf86 - 0x42cf87
int64_t function_42cf86(int64_t a1) {
    // 0x42cf86
    int64_t result; // 0x42cf86
    return result;
}

// Address range: 0x42cff4 - 0x42d012
int64_t function_42cff4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x42cff4
    int64_t result; // 0x42cff4
    *(int32_t *)-0x28f59eb4859443f5 = (int32_t)result;
    return result;
}

// Address range: 0x42d04c - 0x42d053
int64_t function_42d04c(void) {
    // 0x42d04c
    int64_t result; // 0x42d04c
    return result;
}

// Address range: 0x42d06a - 0x42d06b
int64_t function_42d06a(void) {
    // 0x42d06a
    int64_t result; // 0x42d06a
    return result;
}

// Address range: 0x42d078 - 0x42d093
int64_t function_42d078(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 0x6942f0ae); // 0x42d078
    int64_t v2; // 0x42d078
    *v1 = *v1 + (char)v2;
    int64_t result = __asm_int1(a1); // 0x42d07e
    if (a4 == 0) {
        // 0x42d093
        return result;
    }
    // 0x42d083
    return (result + 239) % 256 | result & -256;
}

// Address range: 0x42d293 - 0x42d294
int64_t function_42d293(void) {
    // 0x42d293
    int64_t result; // 0x42d293
    return result;
}

// Address range: 0x42d2a7 - 0x42d2a8
int64_t function_42d2a7(void) {
    // 0x42d2a7
    int64_t result; // 0x42d2a7
    return result;
}

// Address range: 0x42d2c8 - 0x42d2cf
int64_t function_42d2c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42d2c8
    int64_t result; // 0x42d2c8
    return result;
}

// Address range: 0x42d2cf - 0x42d427
int64_t function_42d2cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x42d2cf
    int64_t result; // 0x42d2cf
    int64_t result2; // 0x42d2cf
    if ((char)result2 > (char)result2) {
        // 0x42d2f7
        return result;
    }
    int32_t * v1 = (int32_t *)(a4 + 89); // 0x42d327
    uint32_t v2 = (int32_t)result2; // 0x42d327
    int32_t v3 = *v1 + v2; // 0x42d327
    *v1 = v3;
    int64_t v4; // 0x42d2cf
    if (v3 == 0) {
        int32_t v5 = *(int32_t *)0x646298b7 & (int32_t)a2; // 0x42d331
        *(int32_t *)0x646298b7 = v5;
        if (v5 != 0) {
            // 0x42d2f7
            return result;
        }
        int32_t * v6 = (int32_t *)(result2 + 0x4768cf14); // 0x42d337
        *v6 = *v6 - (int32_t)v4;
        return result2;
    }
    uint32_t v7 = 256 * (int32_t)*(char *)0xa9df017 | 0x1db00072; // 0x42d388
    uint32_t v8 = *(int32_t *)(a2 - 59); // 0x42d38e
    if (v7 <= v8) {
        char * v9 = (char *)(result2 - 9); // 0x42d376
        *v9 = *v9 + (char)(v7 < v8) - (char)(v4 / 256);
        return result2;
    }
    uint32_t v10 = v7 - v8; // 0x42d38e
    unsigned char v11 = (char)v10; // 0x42d3a9
    unsigned char v12 = v11 % 32; // 0x42d3a9
    bool v13 = v7 < v8; // 0x42d3a9
    if (v12 != 0) {
        char v14 = *(char *)0x646298b7; // 0x42d3a9
        *(char *)0x646298b7 = v14 << v12;
        v13 = (v14 & 128 >> v12 - 1) != 0;
    }
    int64_t v15 = (int64_t)(80 * *(int32_t *)&v4); // 0x42d385
    int64_t v16 = v10; // 0x42d38e
    *(int64_t *)(v15 - 8) = v16;
    int32_t v17 = v13; // 0x42d3ac
    uint32_t v18 = v2 + 0x7410042b + v17; // 0x42d3ac
    int64_t result3 = v18; // 0x42d3ac
    *(char *)(v4 + 0x77e4122d) = (char)v18;
    if (v18 < 0 == (v18 + v17 & (v2 ^ -0x80000000)) < 0) {
        // 0x42d2f7
        return result3;
    }
    // 0x42d3c4
    if (!((v13 ? v18 <= v2 : v2 > 0x8beffbd4))) {
        unsigned char v19 = *(char *)0x6462984e; // 0x42d413
        char * v20 = (char *)(a3 - 26); // 0x42d41f
        *v20 = *v20 - (char)(v10 / 256) + (char)(v19 > v11);
        return function_ffffffffa4040e3f();
    }
    unsigned char v21 = *(char *)(result3 - 25) + v11; // 0x42d3ca
    __asm_in_135(85);
    *(int64_t *)(v15 - 16) = 0x1aa9363c;
    uint64_t v22 = v4;
    char v23 = *(char *)(v22 - 33); // 0x42d3d4
    v4 = 256 * (int64_t)(v23 + (char)(v21 < v11) + (char)(v22 / 256)) | v22 & -0xff01;
    int32_t v24 = *(int32_t *)((v16 & 0xffffff00 | (int64_t)v21) + 0x54321f9d); // 0x42d3d7
    return 14 * v24;
}

// Address range: 0x42d48e - 0x42d48f
int64_t function_42d48e(int64_t a1) {
    // 0x42d48e
    int64_t result; // 0x42d48e
    return result;
}

// Address range: 0x42d4a1 - 0x42d4a2
int64_t function_42d4a1(void) {
    // 0x42d4a1
    int64_t result; // 0x42d4a1
    return result;
}

// Address range: 0x42d4bc - 0x42d4bf
int64_t function_42d4bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42d4bc
    int64_t result; // 0x42d4bc
    int64_t v1 = result;
    uint32_t v2 = (int32_t)a4 % 32; // 0x42d4bc
    if (v2 != 0) {
        *(int32_t *)v1 = (int32_t)v1 << v2;
    }
    return result;
}

// Address range: 0x42d4f2 - 0x42d506
int64_t function_42d4f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42d4f2
    int64_t v1; // 0x42d4f2
    *(char *)a4 = (char)(v1 | (uint64_t)v1 / 256);
    if (*(char *)(a1 + 0x223b2078 + a2) <= -1 - (char)a4) {
        function_42d4a1();
    }
    // 0x42d4fd
    return function_ffffffff926c20d7();
}

// Address range: 0x42d50c - 0x42d518
int64_t function_42d50c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    char * v1 = (char *)(a2 - 68); // 0x42d50c
    *v1 = *v1 | (char)a4;
    int64_t result; // 0x42d50c
    char * v2 = (char *)(result - 0x7e9983f8); // 0x42d50f
    *v2 = *v2 + (char)(a4 / 256);
    return result;
}

// Address range: 0x42d552 - 0x42d553
int64_t function_42d552(void) {
    // 0x42d552
    int64_t result; // 0x42d552
    return result;
}

// Address range: 0x42d561 - 0x42d562
int64_t function_42d561(int64_t a1) {
    // 0x42d561
    int64_t result; // 0x42d561
    return result;
}

// Address range: 0x42d5c7 - 0x42d5cc
int64_t function_42d5c7(void) {
    // 0x42d5c7
    int64_t v1; // 0x42d5c7
    return 2 * v1 & 0xffffffff;
}

// Address range: 0x42d5d4 - 0x42d5d5
int64_t function_42d5d4(void) {
    // 0x42d5d4
    int64_t result; // 0x42d5d4
    return result;
}

// Address range: 0x42d5dc - 0x42d69a
int64_t function_42d5dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6, int64_t a7) {
    // 0x42d5dc
    int64_t v1; // 0x42d5dc
    int64_t result2 = v1 & 0xffffffff; // 0x42d5e5
    char * v2 = (char *)((int64_t)*(int32_t *)0x7a042e2dd63b0f6e + 7); // 0x42d5e6
    char v3 = v1; // 0x42d5e6
    bool v4; // 0x42d5dc
    *v2 = (char)v4 - v3 + *v2;
    char * v5 = (char *)(v1 - 60 + result2); // 0x42d5e9
    *v5 = *v5 - (char)a3;
    float80_t v6; // 0x42d5dc
    *(float80_t *)(v1 + 61) = __asm_fbstp(v6);
    int32_t * v7 = (int32_t *)(v1 + 19); // 0x42d5f0
    *v7 = *v7 / 2;
    char * v8 = (char *)(result2 + 60); // 0x42d5f6
    unsigned char v9 = *v8 & v3; // 0x42d5f6
    *v8 = v9;
    *(int32_t *)(result2 + 2 * a2) = (int32_t)a4;
    if (v9 >= 0) {
        // 0x42d600
        __asm_sti();
        return (int64_t)(0x3efedd00 * *(int32_t *)(v1 + 91));
    }
    if (-1 - v1 >= a5) {
        // 0x42d614
        __asm_int(40);
        *(int32_t *)a1 = __asm_insd(0);
        int64_t result = function_42d5d4(); // 0x42d61e
        __asm_out(55, (int32_t)result);
        return result;
    }
    int32_t * v10 = (int32_t *)(result2 + 0x493e9dc3); // 0x42d67b
    int16_t v11; // 0x42d5dc
    int32_t v12 = v11; // 0x42d67b
    *v10 = *v10 ^ v12;
    if (a6 == 0) {
        // 0x42d63c
        return __asm_iretd();
    }
    int32_t * v13 = (int32_t *)(a1 + 8); // 0x42d683
    *v13 = *v13 & v12;
    char v14 = a6; // 0x42d687
    unsigned char v15 = *(char *)(result2 - 0x68ce3545); // 0x42d687
    unsigned char v16 = v15 + v14; // 0x42d687
    if (v15 > -1 - v14 || v16 == 0) {
        // 0x42d68f
        return result2;
    }
    int32_t * v17 = (int32_t *)(v1 + 51); // 0x42d697
    *v17 = *v17 & (int32_t)(a6 & 0xffffff00 | (int64_t)v16);
    return result2;
}

// Address range: 0x42d6a7 - 0x42d6a9
int64_t function_42d6a7(void) {
    // 0x42d6a7
    int64_t result; // 0x42d6a7
    return result;
}

// Address range: 0x42d6a9 - 0x42d6b7
int64_t function_42d6a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42d6a9
    *(int32_t *)0x169c6aee = *(int32_t *)0x169c6aee ^ (int32_t)a4;
    return a1 & 0xffffffff;
}

// Address range: 0x42d6b7 - 0x42d6b8
int64_t function_42d6b7(void) {
    // 0x42d6b7
    int64_t result; // 0x42d6b7
    return result;
}

// Address range: 0x42d703 - 0x42d707
int64_t function_42d703(int64_t a1) {
    // 0x42d703
    int64_t result; // 0x42d703
    return result;
}

// Address range: 0x42d87f - 0x42d882
int64_t function_42d87f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x42d87f
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x42d87f
    return result;
}
