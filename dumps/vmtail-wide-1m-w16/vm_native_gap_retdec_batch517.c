/*
 * Targeted RetDec C for native executable gap queue batch 517.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1282dc-0x1284dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x1284dc-0x1286dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x1286dc-0x1288dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x128adc-0x128cdc rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b8dce-0x1b8fce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b8fce-0x1b91ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b91ce-0x1b93ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x275041-0x275241 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1282dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_128430(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_128572(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1286d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_12886d(void);
int64_t function_128adc(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_128b2a(int64_t a1);
int64_t function_128b46(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_128b85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_128c45(int64_t a1, int64_t a2, int64_t a3);
int64_t function_128ca8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_128cc5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_128cce(int64_t a1, int64_t a2);
int64_t function_1b8dce(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1b8f66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1b8f78(int64_t a1);
int64_t function_1b8fc7(int64_t a1);
int64_t function_1b900d(void);
int64_t function_1b9014(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1b9020(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1b9042(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1b90a0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_1b9121(int64_t a1);
int64_t function_1b91a3(int64_t a1);
int64_t function_1b91e2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1b9208(int64_t a1);
int64_t function_1b9223(int64_t a1);
int64_t function_1b9256(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1b92f1(void);
int64_t function_1b9347(void);
int64_t function_1b9349(void);
int64_t function_1b9350(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1b93a7(int64_t a1);
int64_t function_1b93ca(void);
int64_t function_275041(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2750d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2a5560d0();
int64_t function_c9849();
int64_t function_cf3c7();
int64_t function_ffffffffb0a3ec0b();
int64_t unknown_2914fcf1();
int64_t unknown_ffffffffabf38695();
int64_t unknown_ffffffffb20fc01c();
int64_t unknown_fffffffff2989477();

// Address range: 0x1282dc - 0x128430
int64_t function_1282dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x7ceca0b6; // bp-24, 0x1283c5
    int64_t v2 = (int64_t)&v1; // 0x1283fe
    *(int64_t *)(v2 - 8) = 0x7ceca0b6;
    *(int64_t *)(v2 - 16) = v2;
    return function_c9849(a1, a2);
}

// Address range: 0x128430 - 0x128572
int64_t function_128430(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x128430
    return function_c9849(a1, a2);
}

// Address range: 0x128572 - 0x1286d1
int64_t function_128572(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x128572
    return function_c9849(a1, a2);
}

// Address range: 0x1286d1 - 0x12881c
int64_t function_1286d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1286d1
    return function_c9849(a1, a2);
}

// Address range: 0x12886d - 0x12886e
int64_t function_12886d(void) {
    // 0x12886d
    int64_t result; // 0x12886d
    return result;
}

// Address range: 0x128adc - 0x128b1d
int64_t function_128adc(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = (a3 - a4) % 256 | a3 & -256; // 0x128ade
    int64_t v2; // 0x128adc
    int64_t v3 = v2 & -256 | (a4 + 255) % 256; // 0x128ae0
    char * v4 = (char *)(a1 + 0x1e8898b + v1); // 0x128ae7
    char v5 = a3 / 256; // 0x128ae7
    *v4 = *v4 + v5;
    bool v6; // 0x128adc
    int64_t v7 = v6 ? -1 : 1; // 0x128af4
    char v8 = *(char *)(v3 + (8 * v2 | 1)); // 0x128af5
    int32_t * v9 = (int32_t *)v3; // 0x128b03
    *v9 = *v9 + (int32_t)v3;
    return unknown_ffffffffb20fc01c(v7 + a1, (int32_t)a2 - (int32_t)v2, 256 * (int64_t)(v8 ^ v5) | v1 & -0xff01, a5);
}

// Address range: 0x128b2a - 0x128b2b
int64_t function_128b2a(int64_t a1) {
    // 0x128b2a
    int64_t result; // 0x128b2a
    return result;
}

// Address range: 0x128b46 - 0x128b4d
int64_t function_128b46(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x128b46
    return function_2a5560d0();
}

// Address range: 0x128b85 - 0x128c21
int64_t function_128b85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2; // 0x128b85
    int32_t * v3 = (int32_t *)(v2 - 0x77a4f3d1); // 0x128b85
    *v3 = *v3 | (int32_t)a2;
    *(int32_t *)a3 = *(int32_t *)&v1 | (int32_t)v2;
    uint64_t v4 = unknown_ffffffffabf38695(); // 0x128b8f
    char * v5 = (char *)(v2 - 0x660c37b8); // 0x128b94
    unsigned char v6 = *v5; // 0x128b94
    unsigned char v7 = v6 + (char)(v4 / 256); // 0x128b94
    *v5 = v7;
    int64_t result = (v4 - (v7 < v6 ? 171 : 170)) % 256 | v4 & -256; // 0x128b9a
    int32_t * v8 = (int32_t *)(result - 100); // 0x128b9f
    int32_t v9 = *v8 + (int32_t)v2; // 0x128b9f
    *v8 = v9;
    if (a4 != 1 == v9 == 0) {
        // 0x128c19
        return result;
    }
    // 0x128ba4
    *(char *)a1 = (char)__asm_hlt(a1, a2);
    bool v10; // 0x128b85
    return __asm_int3((v10 ? -1 : 1) + a1);
}

// Address range: 0x128c45 - 0x128c4b
int64_t function_128c45(int64_t a1, int64_t a2, int64_t a3) {
    // 0x128c45
    int64_t result; // 0x128c45
    *(char *)a3 = 2 * (char)result;
    return result;
}

// Address range: 0x128ca8 - 0x128cbc
int64_t function_128ca8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 - 0x4bfec2b5); // 0x128ca8
    unsigned char v2 = *v1; // 0x128ca8
    char v3 = a3 / 256; // 0x128ca8
    unsigned char v4 = v2 + v3; // 0x128ca8
    *v1 = v4;
    int64_t v5; // 0x128ca8
    char * v6 = (char *)(v5 + 7); // 0x128cae
    *v6 = *v6 + (char)((uint64_t)v5 / 256) + (char)(v4 < v2);
    char * v7 = (char *)(a2 - 90); // 0x128cb7
    *v7 = *v7 & v3;
    return function_128cce(a1, a2);
}

// Address range: 0x128cc5 - 0x128cce
int64_t function_128cc5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x128cc5
    int64_t v1; // 0x128cc5
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a3;
    return __asm_wait() & -256 | (int64_t)__asm_in((int16_t)a3);
}

// Address range: 0x128cce - 0x128cdc
int64_t function_128cce(int64_t a1, int64_t a2) {
    // 0x128cce
    int64_t result; // 0x128cce
    *(char *)0x1e801583f6ec8e8 = (char)result;
    bool v1; // 0x128cce
    if (v1 || v1) {
        // 0x128cda
        return result + a2 & 0xffffffff;
    }
    // 0x128d0a
    return result;
}

// Address range: 0x1b8dce - 0x1b8dd9
int64_t function_1b8dce(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1b8dce
    int64_t v1; // 0x1b8dce
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a4 + 0x3a2ff3f5); // 0x1b8dd3
    *v3 = *v3 + (int32_t)a1;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x1b8f66 - 0x1b8f6a
int64_t function_1b8f66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1b8f66
    int64_t result; // 0x1b8f66
    int32_t * v1 = (int32_t *)(result + 1); // 0x1b8f66
    *v1 = *v1 + (int32_t)a4;
    return result;
}

// Address range: 0x1b8f78 - 0x1b8f7b
int64_t function_1b8f78(int64_t a1) {
    // 0x1b8f78
    int64_t result; // 0x1b8f78
    return result;
}

// Address range: 0x1b8fc7 - 0x1b8fca
int64_t function_1b8fc7(int64_t a1) {
    // 0x1b8fc7
    return __asm_iretd(a1);
}

// Address range: 0x1b900d - 0x1b900e
int64_t function_1b900d(void) {
    // 0x1b900d
    int64_t result; // 0x1b900d
    return result;
}

// Address range: 0x1b9014 - 0x1b901f
int64_t function_1b9014(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1b9014
    bool v1; // 0x1b9014
    int64_t v2 = v1 ? -4 : 4; // 0x1b9014
    return __asm_hlt(v2 + a1, v2 + a2);
}

// Address range: 0x1b9020 - 0x1b9024
int64_t function_1b9020(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1b9020
    int64_t result; // 0x1b9020
    return result;
}

// Address range: 0x1b9042 - 0x1b909f
int64_t function_1b9042(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1b9042
    int64_t v1; // 0x1b9042
    int64_t result = (int64_t)&v1; // 0x1b9042
    bool v2; // 0x1b9042
    if (v2) {
        int64_t v3 = v2 ? 0xfffffffc : 4; // 0x1b908e
        *(char *)a3 = (char)result + (char)a3;
        *(int32_t *)0x1c72a4 = *(int32_t *)0x1c72a4 + (int32_t)(v3 + a1);
        return 0x1c72a4;
    }
    // 0x1b9045
    return result;
}

// Address range: 0x1b90a0 - 0x1b90d1
int64_t function_1b90a0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x1b90a0
    int64_t result; // 0x1b90a0
    int32_t v1 = result; // 0x1b90af
    if (v1 < 0x733b01) {
        // 0x1b90eb
        return result;
    }
    // 0x1b90b1
    *(int32_t *)-0x7fb7bf7db27e1677 = v1;
    *(char *)0xdd9905ef = *(char *)0xdd9905ef + (char)(a3 / 256);
    return result;
}

// Address range: 0x1b9121 - 0x1b9122
int64_t function_1b9121(int64_t a1) {
    // 0x1b9121
    int64_t result; // 0x1b9121
    return result;
}

// Address range: 0x1b91a3 - 0x1b91a6
int64_t function_1b91a3(int64_t a1) {
    // 0x1b91a3
    int64_t result; // 0x1b91a3
    return result;
}

// Address range: 0x1b91e2 - 0x1b91f9
int64_t function_1b91e2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1b91e2
    int64_t v1; // 0x1b91e2
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2;
    int64_t v3 = unknown_2914fcf1(); // 0x1b91eb
    char * v4 = (char *)(a3 + 61); // 0x1b91f0
    *v4 = *v4 + (char)a3;
    int64_t result = v3 & -0xff01 | (int64_t)&g1; // 0x1b91f3
    __asm_out(32, (int32_t)result);
    return result;
}

// Address range: 0x1b9208 - 0x1b920b
int64_t function_1b9208(int64_t a1) {
    // 0x1b9208
    int64_t result; // 0x1b9208
    return result;
}

// Address range: 0x1b9223 - 0x1b9224
int64_t function_1b9223(int64_t a1) {
    // 0x1b9223
    int64_t result; // 0x1b9223
    return result;
}

// Address range: 0x1b9256 - 0x1b92dc
int64_t function_1b9256(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1b9256
    int64_t v1; // 0x1b9256
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 2 * a2); // 0x1b925c
    *v3 = *v3 + (int32_t)a2;
    int32_t * v4 = (int32_t *)(a4 - 14); // 0x1b9262
    int64_t v5; // 0x1b9256
    *v4 = *v4 + -24 * *(int32_t *)&v5;
    return __readfsdword(v2) & (int32_t)v2;
}

// Address range: 0x1b92f1 - 0x1b92fc
int64_t function_1b92f1(void) {
    // 0x1b92f1
    return function_ffffffffb0a3ec0b();
}

// Address range: 0x1b9347 - 0x1b9348
int64_t function_1b9347(void) {
    // 0x1b9347
    int64_t result; // 0x1b9347
    return result;
}

// Address range: 0x1b9349 - 0x1b934a
int64_t function_1b9349(void) {
    // 0x1b9349
    int64_t result; // 0x1b9349
    return result;
}

// Address range: 0x1b9350 - 0x1b938d
int64_t function_1b9350(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3; // 0x1b9350
    *(char *)0x59f828fc5301e81f = (char)v3;
    int64_t v4; // 0x1b9350
    bool v5; // 0x1b9350
    if (v5) {
        v4 = function_1b9347();
    }
    int64_t v6 = v4 ^ v3;
    int32_t * v7 = (int32_t *)((v6 & 0xffffffff) - 74); // 0x1b935e
    *v7 = *v7 + (int32_t)a2;
    *(char *)0x43555301e8815a3a = (char)v6;
    unsigned char v8 = *(char *)&v1; // 0x1b936f
    char v9 = a4 / 256; // 0x1b936f
    unsigned char v10 = v8 + v9; // 0x1b936f
    *(char *)v1 = v10;
    unknown_fffffffff2989477();
    *(char *)v1 = (char)(v10 < v8) + v9 + *(char *)&v1;
    __asm_outsd((int16_t)v1, *(int32_t *)&v2);
    unsigned char v11 = *(char *)0x204863b; // 0x1b9385
    *(char *)0x204863b = v11 / 128 | 2 * v11;
    return function_1b9349();
}

// Address range: 0x1b93a7 - 0x1b93aa
int64_t function_1b93a7(int64_t a1) {
    // 0x1b93a7
    int64_t result; // 0x1b93a7
    return result;
}

// Address range: 0x1b93ca - 0x1b93ce
int64_t function_1b93ca(void) {
    // 0x1b93ca
    int64_t result; // 0x1b93ca
    return result;
}

// Address range: 0x275041 - 0x2750d8
int64_t function_275041(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x275041
    int64_t v1; // bp-8, 0x275041
    int64_t v2 = (int64_t)&v1; // 0x2750a2
    int64_t v3 = v2 + 16; // 0x2750a8
    v1 = v3;
    int64_t v4 = *(int64_t *)v3; // 0x2750b7
    *(int64_t *)(v2 + 8) = v4;
    v1 = v4;
    return function_cf3c7(a1);
}

// Address range: 0x2750d8 - 0x275212
int64_t function_2750d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2750d8
    int64_t v1; // bp-32, 0x2750d8
    int64_t v2 = (int64_t)&v1; // 0x27515f
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x275168
    int64_t v4 = *(int64_t *)(v2 + 32); // 0x27516b
    *v3 = v4;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x27516f
    *v5 = v4;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x275172
    *v6 = v4;
    int64_t v7 = *(int64_t *)(v2 + 16); // 0x275181
    *v5 = v7;
    *v3 = 0x6cf2e80d;
    *v6 = v4;
    int64_t v8 = v2 + 8; // 0x2751a7
    *(int64_t *)v8 = *v3;
    *v5 = 0x5c9d8e79;
    *v6 = v7;
    *(int64_t *)(v2 + 24) = *v3;
    *v3 = v8;
    *v3 = v1;
    *v5 = v2;
    return function_cf3c7(a1);
}
