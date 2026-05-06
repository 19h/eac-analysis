/*
 * Targeted RetDec C for native executable gap queue batch 557.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x275d41-0x275e41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x275e41-0x276041 rank=- name=- kind=- bytes=- uncovered=-
 *   0x276241-0x276441 rank=- name=- kind=- bytes=- uncovered=-
 *   0x276441-0x276641 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42e693-0x42e893 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42e893-0x42ea93 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42ea93-0x42ec93 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42ed93-0x42ee93 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g5;
extern int g6;
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
int128_t __asm_pshufd(int128_t value, int imm);
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

int64_t function_275d41(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_275d51(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_275e7b(void);
int64_t function_275f00(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_275f14(void);
int64_t function_276018(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27601d(int64_t a1);
int64_t function_2761f9();
int64_t function_276241(void);
int64_t function_2762c5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_276396(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_276499(int64_t result);
int64_t function_2764b8(void);
int64_t function_276578(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2765eb(int64_t a1);
int64_t function_42e693(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42e778(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_42e789(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_42e8a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42e8b2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_42e8d3(int64_t a1);
int64_t function_42e91e(void);
int64_t function_42e930(void);
int64_t function_42e943(void);
int64_t function_42e957(int64_t a1);
int64_t function_42e96c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_42ea1a(int64_t a1);
int64_t function_42ea88(void);
int64_t function_42eab6(int64_t a1);
int64_t function_42eaf2(void);
int64_t function_42eb06(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_42ec03(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_42ec26(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_42ed93(int64_t a1, int64_t a2);
int64_t function_42edc1(void);
int64_t function_42edc9(void);
int64_t function_42ede3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_aa2f6d();
int64_t function_ffffffffa2e8a83d();
int64_t function_ffffffffb0fd67c1();
int64_t function_ffffffffc503690e();
int64_t function_ffffffffeb45963f();
int64_t unknown_3b239d5a();

// Address range: 0x275d41 - 0x275d50
int64_t function_275d41(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x275d41
    int64_t v1; // 0x275d41
    char v2 = *(char *)(a2 - 89) | (char)(v1 / 256); // 0x275d41
    unsigned char v3 = llvm_ctpop_i8(v2); // 0x275d41
    *(int32_t *)(v1 + 1) = (int32_t)v1;
    int64_t result = v1 & -0xff01 | 0x4000 * (int64_t)(v2 == 0) | 0x8000 * (int64_t)(v2 < 0) | 1024 * (int64_t)(v3 % 2 == 0) | 512; // 0x275d47
    int32_t * v4 = (int32_t *)(a4 - 10); // 0x275d4c
    *v4 = *v4 + (int32_t)a4;
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x275d51 - 0x275dfc
int64_t function_275d51(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    unsigned char v2 = *(char *)(a1 - 0x787e1401) & (char)a4; // 0x275d51
    int64_t v3; // 0x275d51
    int64_t v4 = (v3 & 0xffffffff) - 1; // 0x275d58
    if (v4 == 0 || v2 == 0) {
        // 0x275d5a
        return a4 & 0xffffff00 | (int64_t)v2;
    }
    int32_t * v5 = (int32_t *)((int64_t)((int32_t)__asm_wait() >> 31) + 0x45c910d5); // 0x275dec
    *v5 = *v5 + (int32_t)v4;
    uint32_t result = *(int32_t *)&v1; // 0x275df2
    *(char *)0x170068efe7cc5388 = (char)result;
    return result;
}

// Address range: 0x275e7b - 0x275e86
int64_t function_275e7b(void) {
    char v1 = *(char *)-0x5313aa7e; // 0x275e7b
    int64_t v2; // 0x275e7b
    *(char *)-0x5313aa7e = v1 + (char)((uint64_t)v2 / 256);
    return function_ffffffffc503690e();
}

// Address range: 0x275f00 - 0x275f04
int64_t function_275f00(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int16_t v1 = a3; // 0x275f00
    char v2 = __asm_in(v1); // 0x275f00
    int64_t v3; // 0x275f00
    int32_t v4 = v3;
    __asm_outsd(v1, v4);
    *(int32_t *)a1 = v4;
    return v3 & -256 | (int64_t)v2;
}

// Address range: 0x275f14 - 0x275f1c
int64_t function_275f14(void) {
    // 0x275f14
    int64_t result; // 0x275f14
    __asm_out_133(-96, (int32_t)result);
    return result;
}

// Address range: 0x276018 - 0x27601c
int64_t function_276018(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 + 119); // 0x276018
    *v1 = *v1 + (char)a3;
    int64_t result; // 0x276018
    return result;
}

// Address range: 0x27601d - 0x276039
int64_t function_27601d(int64_t a1) {
    char v1 = *(char *)-0x75507d0; // 0x276029
    int64_t v2; // 0x27601d
    *(char *)-0x75507d0 = v1 + (char)((uint64_t)v2 / 256);
    return a1 & 0xffffffff;
}

// Address range: 0x276241 - 0x27625e
int64_t function_276241(void) {
    // 0x276241
    int64_t v1; // 0x276241
    bool v2; // 0x276241
    if (v2) {
        v1 = function_2761f9();
    }
    int32_t v3 = *(int32_t *)0x97cca8c4; // 0x27624a
    *(int32_t *)0x97cca8c4 = ((int32_t)v1 & -24) + v3;
    unknown_3b239d5a(0x97cca87d);
    return function_aa2f6d();
}

// Address range: 0x2762c5 - 0x2762d6
int64_t function_2762c5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2762c5
    int64_t v1; // 0x2762c5
    *(char *)a3 = (((char)v1 | (char)&g1) & (char)v1) + (char)v1;
    return a3 & 0xffffffff;
}

// Address range: 0x276396 - 0x276452
int64_t function_276396(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x276396
    int64_t v1; // 0x276396
    int64_t result = v1;
    int64_t v2 = a2;
    *(char *)result = 2 * (char)result;
    char v3 = v1 / 256; // 0x27639b
    *(char *)0x3e39fda2 = *(char *)0x3e39fda2 + v3;
    int64_t v4 = (int64_t)*(int32_t *)(a3 + 101 + 4 * v1); // 0x2763a1
    int32_t v5 = *(int32_t *)&v2; // 0x2763a5
    bool v6; // 0x276396
    int64_t v7 = v6 ? -4 : 4; // 0x2763a5
    v2 += v7;
    int64_t v8 = a4 - 1; // 0x2763a9
    if (v8 == 0 | v5 == *(int32_t *)v4) {
        char * v9 = (char *)(v1 - 24); // 0x2763ab
        *v9 = 2 * *v9;
        float80_t v10; // 0x276396
        *(int16_t *)(v1 + 0x800a8c3) = (int16_t)v10;
        return result;
    }
    char v11 = *(char *)0x3166dd31 + v3; // 0x27642a
    *(char *)0x3166dd31 = v11;
    int64_t v12; // 0x276396
    int64_t v13 = 0x10000 * (int32_t)v12 >> 16; // 0x276430
    while (v11 >= 0) {
        // 0x276430
        v13 = 0x10000 * (int32_t)v13 >> 16;
    }
    int32_t * v14 = (int32_t *)(v7 - 11 + v4 + v13); // 0x276433
    *v14 = *v14 & (int32_t)v8;
    int64_t result2 = __asm_iretd(); // 0x27643c
    char * v15 = (char *)result2; // 0x276447
    *v15 = *v15 + (char)result2;
    int32_t * v16 = (int32_t *)result2; // 0x27644a
    *v16 = *v16 + (int32_t)result2;
    *(char *)-0x348d01ad = *(char *)-0x348d01ad + v3;
    return result2;
}

// Address range: 0x276499 - 0x27649d
int64_t function_276499(int64_t result) {
    // 0x276499
    return result;
}

// Address range: 0x2764b8 - 0x2764bb
int64_t function_2764b8(void) {
    // 0x2764b8
    int64_t result; // 0x2764b8
    return result;
}

// Address range: 0x276578 - 0x276588
int64_t function_276578(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x276578
    int64_t v1; // 0x276578
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    char * v3 = (char *)(a1 - 0x3000000); // 0x27657a
    *v3 = *v3 + (char)a3;
    char * v4 = (char *)(a2 - 62); // 0x276580
    int64_t result; // 0x276578
    *v4 = *v4 + (char)(result / 256);
    int64_t v5 = result;
    *(char *)v5 = *(char *)&result + (char)v5;
    int64_t v6 = result;
    *(char *)v6 = *(char *)&result + (char)v6;
    return result;
}

// Address range: 0x2765eb - 0x2765ec
int64_t function_2765eb(int64_t a1) {
    // 0x2765eb
    int64_t result; // 0x2765eb
    return result;
}

// Address range: 0x42e693 - 0x42e6da
int64_t function_42e693(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42e693
    int64_t v1; // 0x42e693
    int64_t result = v1;
    bool v2; // 0x42e693
    if (v2) {
        // 0x42e6d5
        return result;
    }
    int32_t * v3 = (int32_t *)(a3 - 66 + v1); // 0x42e695
    uint32_t v4 = *v3; // 0x42e695
    *v3 = v4 / 2 | 0x80000000 * v4;
    __asm_int(46);
    if (v4 % 2 != 0) {
        // 0x42e69e
        return (result + 72) % 256 | result & -256;
    }
    char * v5 = (char *)(result - 75); // 0x42e6be
    *v5 = *v5 - (char)a3;
    *(char *)0x2ac78f43760e2335 = (char)result;
    return result;
}

// Address range: 0x42e778 - 0x42e786
int64_t function_42e778(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x42e778
    int64_t v1; // 0x42e778
    int64_t result = v1;
    if ((char)(v1 ^ a4 / 256) != 0) {
        // 0x42e787
        return result;
    }
    // 0x42e77c
    __asm_outsb((int16_t)a3 % 256 | (int16_t)&g4, (char)a2);
    return (result + 244) % 256 | result & -256;
}

// Address range: 0x42e789 - 0x42e8a2
int64_t function_42e789(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a6;
    int64_t v2; // 0x42e789
    unsigned char v3 = (char)v2;
    unsigned char v4 = (char)v2;
    bool v5; // 0x42e789
    int64_t v6 = v5 ? -1 : 1; // 0x42e789
    int64_t v7 = v6 + a2; // 0x42e789
    int64_t v8 = a4 - 1; // 0x42e78a
    if (v8 != 0 == v3 == v4) {
        // 0x42e7e1
        *(int64_t *)0x7fae3b23 = a3;
        char * v9 = (char *)(a4 + 44 + v2); // 0x42e7ec
        *v9 = *v9 + (char)(v2 / 256);
        *(int64_t *)0x7fae3b1b = 0x7fae3b23;
        *(int32_t *)v1 = *(int32_t *)&v1 - (int32_t)v2;
        int32_t v10 = __asm_in_134((int16_t)a3); // 0x42e7f6
        *(char *)-0x6f5604e0 = *(char *)-0x6f5604e0 & (char)v10;
        unsigned char v11 = (char)v8 % 32; // 0x42e811
        if (v11 != 0) {
            char * v12 = (char *)(v6 + 89 + v7); // 0x42e811
            unsigned char v13 = *v12; // 0x42e811
            *v12 = v13 << v11 | (char)((int16_t)v13 >> (int16_t)(9 - v11));
        }
        return __asm_wait();
    }
    char * v14 = (char *)(v7 - 0x7f4c9f5e); // 0x42e78c
    unsigned char v15 = *v14; // 0x42e78c
    char v16 = v3 < v4; // 0x42e78c
    unsigned char v17 = (char)(v2 / 256) + v16; // 0x42e78c
    char v18 = v15 - v17; // 0x42e78c
    bool v19 = v3 < v4 ? v17 != -1 | v15 < v18 - v16 : v15 < v17; // 0x42e78c
    unsigned char v20 = llvm_ctpop_i8(v18); // 0x42e78c
    *v14 = v18;
    __asm_out((int16_t)a3, (int32_t)v2);
    unsigned char v21 = (char)a3; // 0x42e7a3
    unsigned char v22 = v19 ? -93 : -94; // 0x42e7a3
    char * v23 = (char *)(v2 + 0x60815dbb); // 0x42e7ac
    *v23 = *v23 - (char)v2 + (char)(v19 | v22 > v21);
    return (int64_t)(256 * (128 * (int16_t)(v18 < 0) | 64 * (int16_t)(v18 == 0) | 16 * (int16_t)(v16 - v17 % 16 + v15 % 16 > 15) | (int16_t)v19 | 4 * (int16_t)(v20 % 2 == 0)) | (int16_t)(v21 - v22) | 512) & 0xffffffff;
}

// Address range: 0x42e8a3 - 0x42e8b2
int64_t function_42e8a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42e8a3
    __asm_rcl((char)a2);
    int64_t v1; // 0x42e8a3
    return v1 & 0x232bd54c;
}

// Address range: 0x42e8b2 - 0x42e8b9
int64_t function_42e8b2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x42e8b2
    int64_t v1; // 0x42e8b2
    __asm_outsb((int16_t)a3, (char)v1);
    return __asm_int1();
}

// Address range: 0x42e8d3 - 0x42e8d7
int64_t function_42e8d3(int64_t a1) {
    // 0x42e8d3
    int64_t v1; // 0x42e8d3
    return v1 & 0xffffffff;
}

// Address range: 0x42e91e - 0x42e921
int64_t function_42e91e(void) {
    // 0x42e91e
    int64_t result; // 0x42e91e
    return result;
}

// Address range: 0x42e930 - 0x42e931
int64_t function_42e930(void) {
    // 0x42e930
    int64_t result; // 0x42e930
    return result;
}

// Address range: 0x42e943 - 0x42e957
int64_t function_42e943(void) {
    // 0x42e943
    int64_t v1; // 0x42e943
    int64_t v2 = v1;
    bool v3; // 0x42e943
    *(int32_t *)v2 = 2 * (int32_t)v2 | (int32_t)v3;
    return function_ffffffffb0fd67c1();
}

// Address range: 0x42e957 - 0x42e95b
int64_t function_42e957(int64_t a1) {
    // 0x42e957
    int64_t result; // 0x42e957
    return result;
}

// Address range: 0x42e96c - 0x42e9ea
int64_t function_42e96c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x42e96c
    bool v1; // 0x42e96c
    int64_t v2 = v1 ? -4 : 4; // 0x42e974
    int64_t v3 = v2 + a2; // 0x42e974
    int64_t v4 = a4 & -0xff01 | (int64_t)&g6; // 0x42e975
    int32_t * v5 = (int32_t *)(v4 + 74); // 0x42e978
    *v5 = 2 * *v5;
    int32_t * v6 = (int32_t *)v4; // 0x42e98b
    *v6 = *v6 & (int32_t)v3;
    char v7 = *(char *)v4; // 0x42e98d
    char * v8 = (char *)(v4 - 0x18b4f5eb); // 0x42e993
    int64_t v9; // 0x42e96c
    char v10 = *v8 | (char)(v9 / 256); // 0x42e993
    unsigned char v11 = llvm_ctpop_i8(v10); // 0x42e993
    *v8 = v10;
    if (v11 % 2 == 0) {
        // 0x42e9e9
        return v9 & 0xffffffff;
    }
    int64_t v12 = 256 * (int64_t)((char)(a3 / 256) - v7) | a3 & -0xff01; // 0x42e98d
    int32_t v13 = v9; // 0x42e99d
    int64_t v14 = v2 + a1 & 0xffffffff; // 0x42e99d
    *(int64_t *)v9 = v12;
    int32_t * v15 = (int32_t *)v12; // 0x42e9a0
    uint32_t v16 = *v15; // 0x42e9a0
    *v15 = v16 / 2 | 0x80000000 * v16;
    int32_t * v17 = (int32_t *)(v14 + 97); // 0x42e9a2
    int32_t v18 = *v17; // 0x42e9a2
    int32_t v19 = v16 % 2 != 0; // 0x42e9a2
    int32_t v20 = v18 + v13 + v19; // 0x42e9a2
    int32_t v21 = v20 + v19; // 0x42e9a2
    *v17 = v20;
    int64_t result = v14; // 0x42e9a8
    if (((v21 ^ v18) & (v21 ^ v13)) >= 0) {
        result = function_42e930();
    }
    // 0x42e9ab
    *(int32_t *)(v3 + 90) = (int32_t)v4;
    return result;
}

// Address range: 0x42ea1a - 0x42ea1b
int64_t function_42ea1a(int64_t a1) {
    // 0x42ea1a
    int64_t result; // 0x42ea1a
    return result;
}

// Address range: 0x42ea88 - 0x42ea8b
int64_t function_42ea88(void) {
    // 0x42ea88
    int64_t result; // 0x42ea88
    return result;
}

// Address range: 0x42eab6 - 0x42ead5
int64_t function_42eab6(int64_t a1) {
    // 0x42eab6
    bool v1; // 0x42eab6
    if (v1 || false) {
        // 0x42eacd
        float80_t v2; // 0x42eab6
        *(int16_t *)(a1 + 49) = (int16_t)v2;
        int64_t v3; // 0x42eab6
        return v3 & 0xffffffff;
    }
    // 0x42eab8
    __asm_in_136(115);
    return function_ffffffffeb45963f();
}

// Address range: 0x42eaf2 - 0x42eaf3
int64_t function_42eaf2(void) {
    // 0x42eaf2
    int64_t result; // 0x42eaf2
    return result;
}

// Address range: 0x42eb06 - 0x42ebd0
int64_t function_42eb06(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    __asm_sti();
    uint32_t v2 = (int32_t)a4 - 1; // 0x42eb07
    int64_t v3 = v2; // 0x42eb07
    int32_t v4; // 0x42eb06
    int64_t v5; // 0x42eb06
    int32_t * v6; // 0x42eb06
    if (v2 == 0) {
        bool v7; // 0x42eb06
        if (!v7) {
            function_42eaf2();
        }
        // 0x42eb0d
        __asm_outsb((int16_t)a3, (char)a2);
        int64_t v8; // 0x42eb06
        int64_t v9 = 0x100000000 * v8 >> 32; // 0x42eb0f
        char * v10 = (char *)(v3 - 0x7af2bda9); // 0x42eb10
        unsigned char v11 = *v10; // 0x42eb10
        *v10 = v11 / 2 | 128 * v11;
        if (!v7) {
            char * v12 = (char *)(a1 + 113); // 0x42eb83
            char v13 = v8; // 0x42eb83
            *v12 = *v12 + v13;
            int64_t v14 = v8 & -256 | (int64_t)(*(char *)(v9 - 0x54e59688) + v13); // 0x42eb87
            int64_t v15 = a3 & -0xff01 | (int64_t)&g5; // 0x42eb90
            unsigned char v16 = *(char *)0x7fe131557de14044; // 0x42eb94
            int64_t v17; // bp-168, 0x42eb06
            int64_t result = (int64_t)&v17 & -256 | (int64_t)v16; // 0x42eb94
            __asm_out((int16_t)v15, (int32_t)result);
            int32_t * v18 = (int32_t *)(v1 + 0x6607e093); // 0x42eb9f
            *v18 = *v18 | (int32_t)v14;
            char v19 = *(char *)v14; // 0x42eba5
            int32_t v20 = *(int32_t *)v14; // 0x42eba7
            if (v20 == (int32_t)(v15 & 0xffffff00 || (int64_t)((char)v15 - v19))) {
                // 0x42ebab
                return result + 0x28ac5347 & 0xffffffff;
            }
            // 0x42ebcf
            return result;
        }
        // 0x42eb0d
        v4 = *(int32_t *)&v1;
        v6 = (int32_t *)-1;
        v5 = v9;
    } else {
        // 0x42eb06
        v4 = a2;
        v6 = (int32_t *)v3;
    }
    int32_t * v21 = v6;
    *(int32_t *)a1 = v4;
    *v21 = *v21 ^ (int32_t)v5;
    return 0x30e1847;
}

// Address range: 0x42ec03 - 0x42ec1b
int64_t function_42ec03(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char v1 = __readgsbyte(a1); // 0x42ec03
    int64_t result; // 0x42ec03
    *(int32_t *)a4 = (int32_t)result >> 1;
    int64_t v2; // 0x42ec03
    *(char *)a1 = *(char *)&v2;
    bool v3; // 0x42ec03
    int64_t v4 = v3 ? -1 : 1; // 0x42ec0a
    v2 = v4 + a2;
    int32_t * v5 = (int32_t *)(256 * (int64_t)(v1 | (char)(a3 / 256)) | a3 & -0xff01); // 0x42ec0b
    *v5 = *v5 ^ (int32_t)result;
    int32_t * v6 = (int32_t *)(a1 + 77 + v4); // 0x42ec12
    *v6 = *v6 & (int32_t)v2;
    return result;
}

// Address range: 0x42ec26 - 0x42ec92
int64_t function_42ec26(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x42ec26
    int64_t v1; // 0x42ec26
    int64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = a5;
    char * v5 = (char *)(a3 - 127); // 0x42ec27
    char v6 = a4 / 256; // 0x42ec27
    *v5 = *v5 ^ v6;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    *(int32_t *)(a4 - 0x32baefdb) = (int32_t)(int64_t)&v4;
    if (a4 == 0) {
        // 0x42ec90
        return (v2 + 254) % 256 | v2 & -256;
    }
    // 0x42ec34
    *(char *)v3 = *(char *)&v3 + v6;
    return __asm_int3() + 0x8500142f & 0xffffffff;
}

// Address range: 0x42ed93 - 0x42eda1
int64_t function_42ed93(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 0x64369e3b); // 0x42ed93
    *v1 = *v1 | (int32_t)a1;
    int64_t v2; // 0x42ed93
    return (v2 & 0xffffff39) + 0x1a2dff & 0xffffffff;
}

// Address range: 0x42edc1 - 0x42edc4
int64_t function_42edc1(void) {
    // 0x42edc1
    int64_t result; // 0x42edc1
    return result;
}

// Address range: 0x42edc9 - 0x42edcf
int64_t function_42edc9(void) {
    // 0x42edc9
    return function_ffffffffa2e8a83d();
}

// Address range: 0x42ede3 - 0x42ee41
int64_t function_42ede3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4 & 0xffffff00; // 0x42ede3
    int64_t v2; // 0x42ede3
    if (v2 < a4) {
        // 0x42edf2
        return (a4 - v2) % 256 | v1;
    }
    // 0x42ee39
    float80_t v3; // 0x42ede3
    *(float32_t *)(a3 + 81) = (float32_t)v3;
    bool v4; // 0x42ede3
    return v1 | (int64_t)*(char *)((v4 ? -4 : 4) + a2);
}
