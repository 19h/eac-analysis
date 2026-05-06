/*
 * Targeted RetDec C for native executable gap queue batch 232.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x142113-0x142313 rank=- name=- kind=- bytes=- uncovered=-
 *   0x142313-0x142513 rank=- name=- kind=- bytes=- uncovered=-
 *   0x142513-0x142713 rank=- name=- kind=- bytes=- uncovered=-
 *   0x142913-0x142b13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x188c85-0x188e85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x188e85-0x189085 rank=- name=- kind=- bytes=- uncovered=-
 *   0x189085-0x189285 rank=- name=- kind=- bytes=- uncovered=-
 *   0x189285-0x189485 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_142113(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_142174(void);
int64_t function_1421bc(int64_t a1);
int64_t function_1421fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1422dd(void);
int64_t function_14232b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14234b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_142401(void);
int64_t function_14245a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1424b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14255b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_142598(int64_t a1);
int64_t function_1425a5(void);
int64_t function_1425f8(void);
int64_t function_142691(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1428e6();
int64_t function_142913(int64_t a1);
int64_t function_142920(int64_t a1);
int64_t function_142947(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_142964(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_142a17(void);
int64_t function_142a30(void);
int64_t function_142a6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_142a8a(int64_t a1);
int64_t function_142a8c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_188c85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_188d95(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_188ef0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_18903c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_18919e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_189313(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_189449(void);
int64_t function_18946d(void);
int64_t function_18947f(void);
int64_t function_1e15df16();
int64_t function_cdc60();
int64_t function_ffffffffb409b302();
int64_t function_ffffffffbf6529e5();
int64_t function_ffffffffe842d644();
int64_t unknown_2a511367();
int64_t unknown_3c7f46b1();
int64_t unknown_3ddc821d();
int64_t unknown_44795d47();
int64_t unknown_7105022d();
int64_t unknown_95998a();
int64_t unknown_f335aa();
int64_t unknown_ffffffffd2caaa20();
int64_t unknown_ffffffffd5be3636();
int64_t unknown_fffffffffde560ed();

// Address range: 0x142113 - 0x142172
int64_t function_142113(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x142113
    int64_t v1; // 0x142113
    uint64_t v2 = v1;
    int16_t v3 = a3; // 0x142118
    int64_t v4 = __asm_in(v3); // 0x142119
    unknown_ffffffffd2caaa20(v4);
    unknown_7105022d();
    *(int32_t *)a3 = (int32_t)v1 | 0x7e73091f;
    bool v5; // 0x142113
    int64_t v6 = (v5 ? -4 : 4) + v4; // 0x142132
    int64_t v7 = v6; // bp-8, 0x142134
    __asm_in_133(v3);
    int32_t * v8 = (int32_t *)(int64_t)*(int32_t *)-0x17fec22e9bfe1705; // 0x14213f
    int32_t v9 = a3; // 0x14213f
    *v8 = *v8 + v9;
    unknown_44795d47();
    char * v10 = (char *)((v2 & 0xffffffff) + 9); // 0x14214c
    *v10 = *v10 + (char)(v2 / 256);
    *(int32_t *)-0x2aaeaf2a = (int32_t)(int64_t)&v7;
    int32_t * v11 = (int32_t *)(a4 - 2); // 0x14215e
    *v11 = *v11 + v9;
    int64_t v12 = unknown_2a511367((int32_t)v6); // 0x142161
    return (v12 + 198) % 256 | v12 & -256;
}

// Address range: 0x142174 - 0x14217d
int64_t function_142174(void) {
    // 0x142174
    __asm_wait();
    return function_1e15df16();
}

// Address range: 0x1421bc - 0x1421bd
int64_t function_1421bc(int64_t a1) {
    // 0x1421bc
    int64_t result; // 0x1421bc
    return result;
}

// Address range: 0x1421fc - 0x142295
int64_t function_1421fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1421fc
    int64_t v1; // 0x1421fc
    uint64_t v2 = v1;
    *(char *)-0x7591afa = *(char *)-0x7591afa + (char)(v2 / 256);
    int32_t * v3 = (int32_t *)(v1 + 24); // 0x14220d
    *v3 = *v3 + 1;
    int64_t result = unknown_3ddc821d(); // 0x142217
    int32_t * v4 = (int32_t *)result; // 0x14221c
    int32_t v5 = *v4 + (int32_t)result; // 0x14221c
    *v4 = v5;
    if (v5 >= 0) {
        // 0x142220
        return result;
    }
    int64_t v6 = a3 & -256 | (int64_t)(*(char *)(v2 - 46) & (char)a3); // 0x142205
    bool v7; // 0x1421fc
    int32_t v8 = *(int32_t *)((v7 ? -4 : 4) + a2); // 0x14226f
    return (int64_t)(((int32_t)v6 & 0x6df9f3d5 & *(int32_t *)v6) + v8);
}

// Address range: 0x1422dd - 0x1422e0
int64_t function_1422dd(void) {
    // 0x1422dd
    int64_t result; // 0x1422dd
    return result;
}

// Address range: 0x14232b - 0x142333
int64_t function_14232b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14232b
    int64_t v1; // 0x14232b
    int64_t v2 = v1;
    unsigned char v3 = (char)a4 % 32; // 0x14232b
    if (v3 != 0) {
        *(char *)v2 = (char)v2 >> v3;
    }
    return function_ffffffffe842d644();
}

// Address range: 0x14234b - 0x142380
int64_t function_14234b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x14234b
    bool v1; // 0x14234b
    if (!v1) {
        // 0x14237c
        int64_t result; // 0x14234b
        __asm_out(-47, (char)result);
        return result;
    }
    int32_t v2 = *(int32_t *)0x3aecbc3ce4478d1b; // 0x14235d
    *(int32_t *)0x3aecbc3ce4478d1b = v2 + (int32_t)a2;
    *(char *)a1 = (char)a2;
    int16_t v3; // 0x14234b
    return function_ffffffffb409b302((v1 ? -1 : 1) + a1, v3, a3 ^ 0xff00, 0x3aecbc3d60013d00);
}

// Address range: 0x142401 - 0x142402
int64_t function_142401(void) {
    // 0x142401
    int64_t result; // 0x142401
    return result;
}

// Address range: 0x14245a - 0x1424b1
int64_t function_14245a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14245a
    int64_t v1; // 0x14245a
    float80_t v2; // 0x14245a
    *(float64_t *)(v1 - 44) = (float64_t)v2;
    if ((int32_t)a2 == -(int32_t)v1) {
        // 0x142465
        return v1 & 0xffffffff;
    }
    unsigned char v3 = *(char *)-0x396fa25e; // 0x14249b
    unsigned char v4 = v3 + (char)(v1 / 256); // 0x14249b
    *(char *)-0x396fa25e = v4;
    int64_t v5 = __asm_int1(); // 0x1424a1
    char * v6 = (char *)(a3 + 18); // 0x1424a2
    *v6 = (char)(v4 < v3) - (char)a3 + *v6;
    char * v7 = (char *)(v5 + 0xbe35f5f); // 0x1424a5
    *v7 = *v7 / 2;
    return unknown_3c7f46b1();
}

// Address range: 0x1424b2 - 0x142541
int64_t function_1424b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(2 * a3 + a4); // 0x1424b5
    int64_t result; // 0x1424b2
    *v1 = *v1 + (char)result;
    int32_t v2 = result; // 0x1424b8
    int32_t v3 = v2 + 0x286468ff; // 0x1424b8
    __asm_int(-82);
    unsigned char v4 = (char)a4 % 32; // 0x1424bf
    bool v5 = ((v3 ^ v2) & (v2 ^ -0x80000000)) < 0; // 0x1424bf
    bool v6 = v3 < 0; // 0x1424bf
    if (v4 != 0) {
        char v7 = a3; // 0x1424bf
        char v8 = v7 << v4; // 0x1424bf
        v5 = v4 == 1 ? (v7 << v4 - 1 ^ v8) < 0 : ((v3 ^ v2) & (v2 ^ -0x80000000)) < 0;
        v6 = v8 < 0;
    }
    if (v6 == v5) {
        // 0x1424c3
        return result & 0xffffffff ^ 0x60ebdad;
    }
    // 0x14253e
    return result;
}

// Address range: 0x14255b - 0x142576
int64_t function_14255b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = -1 - (char)a3 < (char)(a4 / 256) ? 0x17fa013e : 0x17fa013d; // 0x14255d
    int64_t v2; // 0x14255b
    *(char *)a2 = (char)v2 & 28;
    __asm_int(-67);
    return v2 + v1 & 0x3a382610 | 64;
}

// Address range: 0x142598 - 0x142599
int64_t function_142598(int64_t a1) {
    // 0x142598
    int64_t result; // 0x142598
    return result;
}

// Address range: 0x1425a5 - 0x1425a9
int64_t function_1425a5(void) {
    // 0x1425a5
    int64_t result; // 0x1425a5
    return result;
}

// Address range: 0x1425f8 - 0x1425fa
int64_t function_1425f8(void) {
    // 0x1425f8
    int64_t result; // 0x1425f8
    return result;
}

// Address range: 0x142691 - 0x1426a1
int64_t function_142691(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x142691
    int64_t result; // 0x142691
    return result;
}

// Address range: 0x142913 - 0x14291e
int64_t function_142913(int64_t a1) {
    // 0x142913
    int64_t v1; // 0x142913
    *(char *)a1 = (char)v1;
    int64_t result = v1 & 0xc2c9dcfa | 0x3d362305; // 0x142914
    int32_t * v2 = (int32_t *)result; // 0x14291a
    int32_t v3 = result; // 0x14291a
    *v2 = *v2 + v3;
    bool v4; // 0x142913
    *(int32_t *)((v4 ? -1 : 1) + a1) = v3;
    return result;
}

// Address range: 0x142920 - 0x142923
int64_t function_142920(int64_t a1) {
    // 0x142920
    int64_t result; // 0x142920
    return result;
}

// Address range: 0x142947 - 0x14295f
int64_t function_142947(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x142947
    int64_t v1; // 0x142947
    if (61 * (char)v1 != 15) {
        function_1428e6();
    }
    // 0x142955
    return function_ffffffffbf6529e5();
}

// Address range: 0x142964 - 0x1429ec
int64_t function_142964(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t result; // 0x142964
    int32_t * v2 = (int32_t *)(result + 0x50fe2be8); // 0x142964
    uint32_t v3 = *v2; // 0x142964
    uint32_t v4 = v3 + (int32_t)result; // 0x142964
    *v2 = v4;
    if (v4 < v3) {
        // 0x1429d2
        *(char *)a1 = *(char *)&v1;
        return result;
    }
    char * v5 = (char *)(result + 123); // 0x142971
    *v5 = *v5 + (char)a3;
    unsigned char v6 = llvm_ctpop_i8((char)result - 1); // 0x142977
    float80_t v7; // 0x142964
    *(int16_t *)(result - 0x34e616f7) = (int16_t)v7;
    if (v6 % 2 != 0) {
        // 0x14298a
        return result;
    }
    int64_t v8 = unknown_f335aa(); // 0x1429d4
    int64_t v9 = (v8 - ((int32_t)v8 < 0x9e9aa001 ? 208 : 207)) % 256 | v8 & 0xffffff00; // 0x1429de
    *(char *)v9 = (char)result;
    return unknown_fffffffffde560ed(v9);
}

// Address range: 0x142a17 - 0x142a18
int64_t function_142a17(void) {
    // 0x142a17
    int64_t result; // 0x142a17
    return result;
}

// Address range: 0x142a30 - 0x142a46
int64_t function_142a30(void) {
    // 0x142a30
    unknown_ffffffffd5be3636();
    return function_142a17();
}

// Address range: 0x142a6b - 0x142a8a
int64_t function_142a6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x142a6b
    int64_t v1; // 0x142a6b
    char * v2 = (char *)(2 * v1); // 0x142a6b
    *v2 = *v2 - 1;
    uint32_t v3 = *(int32_t *)-0x3affa589; // 0x142a70
    *(int32_t *)-0x3affa589 = (int32_t)a1;
    int64_t v4; // 0x142a6b
    *(char *)a2 = *(char *)&v4 + (char)v1;
    __asm_outsb((int16_t)a3, *(char *)&v4);
    int64_t v5; // 0x142a6b
    char v6 = *(char *)&v5; // 0x142a7b
    *(char *)a3 = (char)((char)a5 > 16) + (char)a4 + v6;
    return unknown_95998a(*(int32_t *)((int64_t)v3 + 14) | v3);
}

// Address range: 0x142a8a - 0x142a8c
int64_t function_142a8a(int64_t a1) {
    // 0x142a8a
    int64_t result; // 0x142a8a
    return result;
}

// Address range: 0x142a8c - 0x142ab1
int64_t function_142a8c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x142a8c
    int64_t v1; // 0x142a8c
    int64_t v2 = v1 & 144 | 111; // 0x142a92
    char * v3 = (char *)(a1 + 0x2f717a8d); // 0x142a94
    unsigned char v4 = *v3; // 0x142a94
    unsigned char v5 = v4 + (char)a3; // 0x142a94
    *v3 = v5;
    char * v6 = (char *)(v1 - 0x66d03981); // 0x142a9a
    *v6 = *v6 + (char)(a4 / 256) + (char)(v5 < v4);
    char * v7 = (char *)(v2 + 130 & 241 | v1 & -256); // 0x142aa2
    *v7 = *v7 + (char)(v1 / 256) + (char)((char)v2 > 125);
    return a3 & 0xffffffff;
}

// Address range: 0x188c85 - 0x188d95
int64_t function_188c85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x188c85
    int64_t v1; // 0x188c85
    int64_t v2 = v1 & -0xff01 | (int64_t)&g1; // bp-16, 0x188cc9
    int64_t v3 = (int64_t)&v2; // 0x188cf1
    int64_t * v4 = (int64_t *)(v3 + 16); // 0x188cf9
    int64_t v5 = *v4; // 0x188cf9
    *(int64_t *)(v3 - 8) = v5;
    int64_t v6 = v3 - 16; // 0x188cfd
    int64_t * v7 = (int64_t *)v6; // 0x188cfd
    *v7 = 0x3d8e6e1f;
    int64_t * v8 = (int64_t *)(v3 - 24); // 0x188d2a
    *v8 = a5;
    v2 = *v7;
    *(int64_t *)(v3 - 32) = v5;
    *v4 = *v7;
    *v7 = a4;
    *v8 = v6;
    *v8 = a2;
    int64_t v9 = *v7; // 0x188d5e
    *v7 = *v7 ^ v3 ^ v9;
    *v7 = v3;
    return function_cdc60(v1, *v8, a3, v9, v1);
}

// Address range: 0x188d95 - 0x188ef0
int64_t function_188d95(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6; // bp-40, 0x188e35
    int64_t v2 = (int64_t)&v1; // 0x188e77
    int64_t * v3 = (int64_t *)(v2 - 16); // 0x188e83
    *v3 = 0x60b786ce;
    *(int64_t *)(v2 - 24) = a6;
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x188e8f
    int64_t v5 = v2 + 8; // 0x188e8f
    *(int64_t *)v5 = *v4;
    *v4 = 0x4df7d3b3;
    *v3 = 0x1848a3;
    *(int64_t *)(v2 + 24) = *v4;
    *v3 = v1;
    *v4 = v5;
    *v4 = v1;
    *v3 = v1;
    return function_cdc60(a1, a2, a3, a4, a5);
}

// Address range: 0x188ef0 - 0x18903c
int64_t function_188ef0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x188ef0
    int64_t v1; // bp-32, 0x188ef0
    int64_t v2 = (int64_t)&v1; // 0x188f37
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x188f4c
    int64_t * v4 = (int64_t *)v3; // 0x188f4d
    *v4 = 0x31d173d0;
    int64_t v5 = v2 - 24; // 0x188f59
    int64_t * v6 = (int64_t *)v5; // 0x188f59
    int64_t * v7 = (int64_t *)(v2 + 24); // 0x188f68
    int64_t v8 = *v7; // 0x188f68
    int64_t * v9 = (int64_t *)(v2 - 16); // 0x188f68
    *v9 = v8;
    *v6 = v3;
    int64_t v10 = v1; // 0x188f8c
    int64_t v11 = v2 - 32; // 0x188f90
    *(int64_t *)(v2 - 40) = v10;
    *(int64_t *)v11 = v11;
    *v6 = v8;
    v1 = *v9;
    *v6 = v5;
    *v9 = v10;
    *v7 = *v4;
    *v9 = a3;
    *v4 = v2 + 8;
    *v4 = v1;
    *v9 = v1;
    return function_cdc60(a1, a2, a3, a4, a5);
}

// Address range: 0x18903c - 0x18919e
int64_t function_18903c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18903c
    int64_t v1; // bp-40, 0x18903c
    int64_t v2 = (int64_t)&v1; // 0x1890e0
    int64_t v3 = v2 + 16; // 0x1890e6
    v1 = v3;
    int64_t * v4 = (int64_t *)(v2 + 32); // 0x1890f5
    int64_t v5 = *v4; // 0x1890f5
    int64_t v6 = v2 + 8; // 0x1890f5
    int64_t * v7 = (int64_t *)v6; // 0x1890f5
    *v7 = v5;
    v1 = a1;
    int64_t * v8 = (int64_t *)(v2 - 8); // 0x189105
    *v8 = v5;
    int64_t v9 = v1; // 0x189122
    v1 = 0x4440cbf;
    int64_t * v10 = (int64_t *)(v2 - 16); // 0x18912e
    *v10 = a5;
    *v8 = a5;
    *(int64_t *)v3 = v1;
    v1 = 0x795fc638;
    *v8 = v5;
    *v4 = v1;
    v1 = *v7;
    *v8 = v6;
    *v8 = v1;
    *v10 = v1;
    int64_t v11; // 0x18903c
    return function_cdc60(v9, a2, a3, a4, v11);
}

// Address range: 0x18919e - 0x189313
int64_t function_18919e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x18919e
    int64_t v1; // 0x18919e
    int64_t v2 = v1 + 16; // 0x189271
    int64_t v3 = *(int64_t *)v2; // 0x189271
    int64_t * v4 = (int64_t *)(v1 - 8); // 0x189271
    *v4 = v3;
    int64_t * v5 = (int64_t *)(v1 - 16); // 0x189275
    *v5 = a6;
    int64_t * v6 = (int64_t *)(v1 + 8); // 0x189290
    *v6 = a6;
    *v5 = v3;
    *v4 = v3;
    int64_t * v7 = (int64_t *)v1; // 0x1892bd
    *(int64_t *)(v1 + 32) = *v7;
    *v4 = *v6;
    *v7 = v2;
    *v4 = *v6;
    *v7 = v2;
    return function_cdc60(a1, *v4, a3, v1, a5);
}

// Address range: 0x189313 - 0x18940f
int64_t function_189313(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x18514a; // bp-24, 0x18934a
    int64_t v2 = (int64_t)&v1; // 0x1893f0
    *(int64_t *)(v2 - 8) = 0x18514a;
    *(int64_t *)(v2 - 16) = 0x18514a;
    int64_t v3; // 0x189313
    return function_cdc60(a1, a2, a3, a4, v3);
}

// Address range: 0x189449 - 0x18944e
int64_t function_189449(void) {
    // 0x189449
    int64_t result; // 0x189449
    return result;
}

// Address range: 0x18946d - 0x189470
int64_t function_18946d(void) {
    // 0x18946d
    int64_t result; // 0x18946d
    return result;
}

// Address range: 0x18947f - 0x189480
int64_t function_18947f(void) {
    // 0x18947f
    int64_t result; // 0x18947f
    return result;
}
