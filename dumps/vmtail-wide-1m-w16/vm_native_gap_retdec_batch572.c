/*
 * Targeted RetDec C for native executable gap queue batch 572.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x154913-0x154b13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x154b13-0x154d13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x154d13-0x154f13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x154f13-0x155113 rank=- name=- kind=- bytes=- uncovered=-
 *   0x155113-0x155313 rank=- name=- kind=- bytes=- uncovered=-
 *   0x327c55-0x327e55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x327e55-0x328055 rank=- name=- kind=- bytes=- uncovered=-
 *   0x328055-0x328255 rank=- name=- kind=- bytes=- uncovered=-
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
typedef struct { uint8_t bytes[32]; } int256_t;
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
int64_t unknown_b6ccb9(void);
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
int128_t __asm_vdivpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pcmpgtb(int128_t left, int128_t right);
int256_t __asm_vpcmpeqw(int256_t left, int256_t right);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psadbw(int128_t left, int128_t right);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
int128_t __asm_pavgw(int128_t left, int128_t right);
int128_t __asm_pmaxub(int128_t left, int128_t right);
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

int64_t function_15147e66();
int64_t function_154913(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_154a88(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_154a94(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_154b0e(void);
int64_t function_154b3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_154b42(int64_t a1);
int64_t function_154b65(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_154cb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_154e14(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_154f66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_155096(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_155232(void);
int64_t function_1552a5(void);
int64_t function_1552fc(void);
int64_t function_1552fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fdc9cb();
int64_t function_327c55(int64_t a1);
int64_t function_327cd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_327e07(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_327f5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3280f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_caf2a();
int64_t function_cdc60();
int64_t function_ffffffffcfec3add();
int64_t unknown_20cedb46();
int64_t unknown_37d07127();
int64_t unknown_3a1a6dd2();
int64_t unknown_ffffffffa90b02c8();
int64_t unknown_ffffffffcafd63e8();
int64_t unknown_ffffffffd3bfc6dd();
int64_t unknown_ffffffffd5101b7c();
int64_t unknown_ffffffffe82942bf();
int64_t unknown_ffffffffee23b7fc();

// Address range: 0x154913 - 0x154a81
int64_t function_154913(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x154913
    char * v3 = (char *)(v2 - 0x60fe1729); // 0x154913
    bool v4; // 0x154913
    *v3 = *v3 + (v4 ? -32 : -33);
    uint32_t v5 = (int32_t)v2 | -0x21e5571b; // 0x15491a
    if (llvm_ctpop_i8((char)v5) % 2 != 0) {
        // 0x154921
        unknown_37d07127();
        __asm_iretd();
        __asm_iretd();
        uint32_t v6 = (int32_t)v1;
        *(int32_t *)v1 = v6 - (-1 - (int32_t)v2 < v6 ? 0x5a5bdb09 : 0x5a5bdb08);
        return unknown_20cedb46();
    }
    int64_t v7 = v5; // 0x15491a
    int32_t * v8 = (int32_t *)(v2 + 0x480390e3); // 0x154999
    *v8 = *v8 + (int32_t)v1;
    char * v9 = (char *)((a1 & 0xffffffff) + 0x3601e8cf); // 0x1549a0
    *v9 = (char)a1;
    unsigned char v10 = *v9 ^ 22; // 0x1549a8
    char * v11 = (char *)((a1 & 0xffffff00 | (int64_t)v10) + 0x24dff00); // 0x1549aa
    *v11 = *v11 + v10;
    int32_t * v12 = (int32_t *)(v2 + 0x3a013300); // 0x1549b2
    int32_t v13 = *v12 + (int32_t)v2; // 0x1549b2
    *v12 = v13;
    uint32_t v14 = *(int32_t *)&v1; // 0x1549b8
    int64_t v15 = v4 ? -4 : 4; // 0x1549b8
    int64_t v16 = v1 + v15; // 0x1549b8
    v1 = v16;
    int64_t result2; // 0x154913
    int64_t v17; // 0x154913
    int64_t v18; // 0x154913
    int32_t v19; // 0x154913
    if (v13 != 0) {
        int64_t v20 = a4 & -0xff01 | (int64_t)")\b"; // 0x1549a6
        int64_t result = v20 & 0xffffffff; // 0x1549bf
        if (v14 != 0) {
            // 0x1549c9
            return result;
        }
        int64_t v21 = v14; // 0x1549bf
        char * v22 = (char *)(v2 - 114); // 0x154a44
        *v22 = *v22 + (char)v20;
        char * v23 = (char *)(4 * v2 + 0x4501e842 + v21); // 0x154a47
        char v24 = *v23 ^ 21; // 0x154a47
        *v23 = v24;
        int64_t v25 = v21 - 1; // 0x154a54
        result2 = result;
        v19 = 0x61eaf6fd;
        v18 = v7;
        if (v25 == 0 || v24 == 0) {
            int32_t * v26 = (int32_t *)(v21 - 0x45f73f4c); // 0x154a5b
            int32_t v27 = v25; // 0x154a5b
            *v26 = *v26 + v27;
            int32_t * v28 = (int32_t *)(v2 - 15); // 0x154a6a
            *v28 = *v28 + v27;
            int64_t v29 = unknown_ffffffffd5101b7c(); // 0x154a76
            char v30 = __asm_in(-45); // 0x154a7b
            *(char *)0x61eaf6ec = *(char *)0x61eaf6ec + v30;
            return v29 & -256 | (int64_t)v30;
        }
    } else {
        int64_t v31 = unknown_ffffffffa90b02c8(v7, v16); // 0x1549c2
        *(int32_t *)v7 = (int32_t)v31;
        int64_t v32 = v15 + v7; // 0x154a03
        float80_t v33; // 0x154913
        *(int32_t *)(v2 + 0xc0b5612) = (int32_t)v33;
        result2 = v31;
        v19 = a3;
        v17 = (int64_t)((int32_t)v2 - *(int32_t *)(v32 - 0x17ca739a));
        v18 = v32;
    }
    int32_t * v34 = (int32_t *)(v17 - 24); // 0x154a1c
    *v34 = *v34 ^ v19;
    int32_t * v35 = (int32_t *)(v18 - 100); // 0x154a1f
    *v35 = *v35 + (int32_t)v2;
    return result2;
}

// Address range: 0x154a88 - 0x154a94
int64_t function_154a88(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x154a88
    return function_ffffffffcfec3add();
}

// Address range: 0x154a94 - 0x154b0e
int64_t function_154a94(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x154a94
    *(int64_t *)a4 = a4 & 0xe501e89b;
    int64_t v1 = __asm_hlt(); // 0x154a9e
    __asm_out(-48, (int32_t)v1);
    int32_t * v2 = (int32_t *)(a1 - 89); // 0x154aa6
    *v2 = *v2 + (int32_t)a4;
    int32_t * v3 = (int32_t *)(a3 + 0x2d0010d6); // 0x154aae
    *v3 = *v3 + (int32_t)a3;
    unknown_ffffffffe82942bf();
    *(int32_t *)0x188b20c5 = *(int32_t *)0x188b20c5 + (int32_t)a1;
    unknown_3a1a6dd2();
    unknown_ffffffffd3bfc6dd();
    char * v4 = (char *)(a1 + 98); // 0x154adc
    char v5 = *v4 + *(char *)((v1 + 0x1745db46 & 0xffffffff) + 68); // 0x154adc
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x154adc
    *v4 = v5;
    __asm_int3();
    int64_t result = unknown_ffffffffcafd63e8(); // 0x154ae2
    if (v6 % 2 == 0) {
        // 0x154aec
        *(char *)-0x17bc024ec5d2fe18 = (char)result;
        return result;
    }
    // 0x154af6
    unknown_ffffffffee23b7fc();
    __asm_iretd();
    return function_1fdc9cb();
}

// Address range: 0x154b0e - 0x154b13
int64_t function_154b0e(void) {
    // 0x154b0e
    return function_15147e66();
}

// Address range: 0x154b3b - 0x154b40
int64_t function_154b3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x154b3b
    int64_t result; // 0x154b3b
    *(int32_t *)a4 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x154b42 - 0x154b4a
int64_t function_154b42(int64_t a1) {
    // 0x154b42
    int64_t result; // 0x154b42
    return result;
}

// Address range: 0x154b65 - 0x154cb6
int64_t function_154b65(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x154b65
    int64_t v1; // 0x154b65
    int32_t * v2 = (int32_t *)(2 * v1); // 0x154b65
    *v2 = *v2 + (int32_t)a3;
    int64_t v3; // 0x154b65
    char * v4 = (char *)(int64_t)(2 * *(int32_t *)&v3); // 0x154b6c
    *v4 = *v4 + 72;
    int32_t v5 = a4; // bp-48, 0x154c86
    int64_t v6 = 0x100000000 * a4 >> 32; // 0x154c8a
    *(int64_t *)(v6 - 8) = v6;
    *(int64_t *)(v6 - 16) = v6;
    int64_t result = function_cdc60(a1, 0x100000000 * a2 >> 32, a3, v6, 0x100000000 * a5 >> 32, v1, 0x100000000 * (int64_t)&v5 >> 32); // 0x154cb1
    return result;
}

// Address range: 0x154cb6 - 0x154e14
int64_t function_154cb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x154cb6
    int64_t v1; // 0x154cb6
    int64_t v2 = 0x100000000 * v1 >> 32; // 0x154cb6
    int64_t v3 = -0x503d05c9 * v2 != -0x503d05c900000000 * v2 >> 32; // 0x154cbc
    bool v4; // 0x154cb6
    return function_cdc60(a1, a2, a3, a4, a5, v1, 0x4000 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | v3 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 2048 * v3 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | 4 * (int64_t)v4 | 2);
}

// Address range: 0x154e14 - 0x154f66
int64_t function_154e14(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x12a4e3; // bp-40, 0x154efb
    int64_t v2 = a5 - 8; // 0x154f43
    int64_t * v3 = (int64_t *)v2; // 0x154f43
    *v3 = a4;
    *(int64_t *)(a5 - 16) = v2;
    *v3 = a5 + 8;
    int64_t v4; // 0x154e14
    return function_cdc60(a1, a2, a3, *v3, a5, v4, (int64_t)&v1);
}

// Address range: 0x154f66 - 0x155096
int64_t function_154f66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x154f66
    int64_t v1; // 0x154f66
    return function_cdc60(a1, a2, a3, 0x36b70ad7, v1, v1, 0x3fd3298);
}

// Address range: 0x155096 - 0x15522d
int64_t function_155096(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x155096
    return function_cdc60(a1, a2, a3, a4, a5, a6, 0x756bc150);
}

// Address range: 0x155232 - 0x155235
int64_t function_155232(void) {
    // 0x155232
    int64_t result; // 0x155232
    return result;
}

// Address range: 0x1552a5 - 0x1552a8
int64_t function_1552a5(void) {
    // 0x1552a5
    int64_t result; // 0x1552a5
    return result;
}

// Address range: 0x1552fc - 0x1552fd
int64_t function_1552fc(void) {
    // 0x1552fc
    int64_t result; // 0x1552fc
    return result;
}

// Address range: 0x1552fd - 0x155301
int64_t function_1552fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0x1552fd
    *v1 = *v1 | (char)a4;
    int64_t result; // 0x1552fd
    return result;
}

// Address range: 0x327c55 - 0x327cd3
int64_t function_327c55(int64_t a1) {
    // 0x327c55
    int64_t v1; // 0x327c55
    return function_caf2a(v1, v1, v1, v1, v1, v1, v1);
}

// Address range: 0x327cd3 - 0x327e07
int64_t function_327cd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x327cd3
    int64_t v1; // bp-32, 0x327cd3
    int64_t v2 = (int64_t)&v1; // 0x327d4a
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x327d52
    int64_t * v4 = (int64_t *)v3; // 0x327d53
    int64_t * v5 = (int64_t *)(v2 - 24); // 0x327d5e
    int64_t v6 = *(int64_t *)(v2 + 24); // 0x327d6d
    int64_t v7 = v2 - 16; // 0x327d6d
    int64_t * v8 = (int64_t *)v7; // 0x327d6d
    *v8 = v6;
    *v5 = v3;
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x327d96
    int64_t * v10 = (int64_t *)(v2 - 40); // 0x327d99
    *v5 = 0x5c8c6f5c;
    *v9 = 0x6eba8e7f;
    *v10 = v6;
    *v4 = *v5;
    *v5 = 0x61437bbb;
    *v10 = v1;
    *(int64_t *)(v2 + 8) = *v5;
    *v5 = *v8;
    *v9 = v7;
    int64_t v11 = *v4; // 0x327df3
    *v8 = v11;
    *v5 = v11;
    int64_t v12; // 0x327cd3
    return function_caf2a(a1, a2, a3, a4, a5, v12, 0x323d6f);
}

// Address range: 0x327e07 - 0x327f5d
int64_t function_327e07(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x327e07
    int64_t v1; // bp-32, 0x327e07
    int64_t v2 = (int64_t)&v1; // 0x327e7f
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x327e87
    int64_t * v4 = (int64_t *)v3; // 0x327e88
    *v4 = 0x765cb2bb;
    int64_t v5 = v2 - 16; // 0x327ea4
    int64_t * v6 = (int64_t *)v5; // 0x327ea5
    int64_t v7 = *(int64_t *)(v2 + 32); // 0x327eab
    *v4 = v7;
    *v6 = v7;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x327eb2
    *v8 = v7;
    int64_t v9 = *(int64_t *)(v2 + 16); // 0x327ebe
    *v4 = v9;
    *v8 = v2;
    *(int64_t *)(v2 - 32) = *v6;
    *v6 = a4;
    *v8 = v5;
    v1 = v7;
    *v6 = a2;
    *v8 = v7;
    *(int64_t *)(v2 + 24) = v9;
    int64_t v10 = *v6; // 0x327f15
    *v8 = v10;
    *v6 = *v4;
    *v8 = v3;
    int64_t v11 = *v4; // 0x327f3c
    *v6 = v11;
    *v8 = v11;
    return function_caf2a(a1, v10, a3, *v6, a5, a6, 0x323fc5);
}

// Address range: 0x327f5d - 0x3280f0
int64_t function_327f5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x327f5d
    int64_t v1; // 0x327f5d
    bool v2; // 0x327f5d
    return function_caf2a(a1, a2, a5, a4, v1, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x3280f0 - 0x328224
int64_t function_3280f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3280f0
    int64_t v1; // bp-40, 0x3280f0
    int64_t v2 = (int64_t)&v1; // 0x32816b
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x328184
    int64_t v4 = v2 - 8; // 0x328184
    int64_t * v5 = (int64_t *)v4; // 0x328184
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x328188
    *v6 = v2;
    int64_t v7 = *(int64_t *)(v2 + 16); // 0x3281a3
    *v6 = v7;
    *v5 = 0x79b078d3;
    *(int64_t *)(v2 - 24) = v3;
    int64_t v8 = v2 + 8; // 0x3281cc
    int64_t * v9 = (int64_t *)v8; // 0x3281cc
    *v9 = *v5;
    *v6 = v7;
    *(int64_t *)(v2 + 24) = *v5;
    *v6 = v4;
    *v5 = v8;
    int64_t v10 = *v9; // 0x32820d
    v1 = v10;
    *v5 = v10;
    int64_t v11; // 0x3280f0
    return function_caf2a(a1, a2, a3, a4, v11, v11, 0x182ebd36);
}
