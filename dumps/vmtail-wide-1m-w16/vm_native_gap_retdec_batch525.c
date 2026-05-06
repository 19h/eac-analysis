/*
 * Targeted RetDec C for native executable gap queue batch 525.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xd85c7-0xd87c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd87c7-0xd89c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd89c7-0xd8bc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1744aa-0x1746aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1746aa-0x1748aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1748aa-0x174aaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x174aaa-0x174caa rank=- name=- kind=- bytes=- uncovered=-
 *   0x174caa-0x174eaa rank=- name=- kind=- bytes=- uncovered=-
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
extern int g6;
extern int g7;
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

int64_t function_1744aa(void);
int64_t function_1744cb(void);
int64_t function_1744d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_174521(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_17466c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1747ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_17493e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_174a9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_174c37(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a2ac166();
int64_t function_323460();
int64_t function_caf2a();
int64_t function_d85a2();
int64_t function_d85c7(int64_t a1, int64_t a2);
int64_t function_d85ef(void);
int64_t function_d8607(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d8633(void);
int64_t function_d8641(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_d8695(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d869c(void);
int64_t function_d86ac(void);
int64_t function_d86f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d86ff(void);
int64_t function_d872d(void);
int64_t function_d8749(void);
int64_t function_d875a(int64_t a1);
int64_t function_d8796(void);
int64_t function_d87b5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_d88fd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_d8910(void);
int64_t function_d892a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d896f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_d899b(int64_t a1);
int64_t function_d8ac7(int64_t a1);
int64_t function_d8b04(void);
int64_t function_d8b07(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d8b09(int64_t a1);
int64_t function_d8b2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d8b72(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_d8b7e(void);
int64_t function_d8b8b(void);
int64_t function_d8bbe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ffffffff96765f21();
int64_t unknown_1642e7b2();
int64_t unknown_3d0d9740();
int64_t unknown_3d713d16();
int64_t unknown_58fe1c1b();
int64_t unknown_7c9c4a3b();
int64_t unknown_897da9();
int64_t unknown_ffffffffbed23d27();

// Address range: 0xd85c7 - 0xd85cf
int64_t function_d85c7(int64_t a1, int64_t a2) {
    // 0xd85c7
    int64_t v1; // 0xd85c7
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0xd85ef - 0xd85f4
int64_t function_d85ef(void) {
    // 0xd85ef
    return function_323460();
}

// Address range: 0xd8607 - 0xd861d
int64_t function_d8607(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)-0x171c877b; // 0xd8609
    *(char *)-0x171c877b = v1 / 128 | 2 * v1;
    int32_t * v2 = (int32_t *)(unknown_3d713d16() - 0x76037ff6); // 0xd8615
    *v2 = *v2 + (int32_t)a4;
    return function_d85a2();
}

// Address range: 0xd8633 - 0xd8634
int64_t function_d8633(void) {
    // 0xd8633
    int64_t result; // 0xd8633
    return result;
}

// Address range: 0xd8641 - 0xd8695
int64_t function_d8641(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int32_t * v2 = (int32_t *)(a3 - 0x1e80983); // 0xd8641
    uint32_t v3 = *v2; // 0xd8641
    uint32_t v4 = (int32_t)a4; // 0xd8641
    uint32_t v5 = v3 + v4; // 0xd8641
    *v2 = v5;
    int64_t v6 = v5 < v3; // 0xd8648
    int32_t v7 = (int32_t)a3 + (int32_t)a2; // 0xd864a
    __asm_rcl(*(int32_t *)&v1);
    int64_t v8; // 0xd8641
    if (v7 >= 0) {
        int16_t v9 = 256 * (int16_t)v8 >> 8; // 0xd868a
        uint32_t v10 = (int32_t)(v8 & 0xffff0000 | (int64_t)(v9 * v9)); // 0xd868c
        uint32_t result = (int32_t)v6 + v10; // 0xd868c
        uint32_t v11 = v4 % 32; // 0xd868f
        if (v11 != 0) {
            int32_t * v12 = (int32_t *)(a3 - 68); // 0xd868f
            uint32_t v13 = *v12; // 0xd868f
            *v12 = v13 << v11 | (int32_t)(result < v10) << v11 - 1 | (int32_t)((int64_t)v13 >> (int64_t)(33 - v11));
        }
        return result;
    }
    // 0xd8650
    __asm_out((int16_t)a3, (int32_t)v8);
    *(char *)(v1 + 0x1e8d781) = -1;
    char * v14 = (char *)(a3 - 0x53fc277c); // 0xd8659
    int32_t * v15 = (int32_t *)((int64_t)v7 - 0x3b084737); // 0xd8662
    int64_t v16 = v6 & 0xffffffff; // 0xd8652
    while (true) {
        // 0xd8659
        *v14 = *v14 + (char)v8;
        int64_t * v17 = (int64_t *)v16; // 0xd865f
        v16 = *v17;
        *v17 = -24;
        *v15 = *v15 + (int32_t)v16;
    }
}

// Address range: 0xd8695 - 0xd869c
int64_t function_d8695(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 74); // 0xd8697
    int64_t result; // 0xd8695
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0xd869c - 0xd869e
int64_t function_d869c(void) {
    // 0xd869c
    int64_t v1; // 0xd869c
    return function_d86f2(v1, v1, v1, v1);
}

// Address range: 0xd86ac - 0xd86b6
int64_t function_d86ac(void) {
    // 0xd86ac
    return unknown_1642e7b2();
}

// Address range: 0xd86f2 - 0xd86fe
int64_t function_d86f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd86f2
    int64_t v1; // 0xd86f2
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a4;
    return v1 + 0x5b20f4c6 & 0xffffffff;
}

// Address range: 0xd86ff - 0xd8702
int64_t function_d86ff(void) {
    // 0xd86ff
    int64_t result; // 0xd86ff
    return result;
}

// Address range: 0xd872d - 0xd8732
int64_t function_d872d(void) {
    // 0xd872d
    return function_1a2ac166();
}

// Address range: 0xd8749 - 0xd874d
int64_t function_d8749(void) {
    // 0xd8749
    int64_t v1; // 0xd8749
    int64_t result = function_d87b5(v1, v1, v1, v1, (int64_t)&g7, (int64_t)&g7, (int64_t)&g7); // 0xd874b
    return result;
}

// Address range: 0xd875a - 0xd875b
int64_t function_d875a(int64_t a1) {
    // 0xd875a
    int64_t result; // 0xd875a
    return result;
}

// Address range: 0xd8796 - 0xd879b
int64_t function_d8796(void) {
    // 0xd8796
    return function_ffffffff96765f21();
}

// Address range: 0xd87b5 - 0xd8875
int64_t function_d87b5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xd87b5
    int64_t v1; // 0xd87b5
    uint64_t v2 = v1;
    int64_t v3 = a3;
    float80_t v4; // 0xd87b5
    *(float64_t *)(a1 + 0x1e801e8) = (float64_t)v4;
    int64_t v5 = v1 + a2; // 0xd87c2
    int64_t result = v5 & 0xffffffff; // 0xd87c2
    int32_t * v6 = (int32_t *)result; // 0xd87c4
    *v6 = *v6 ^ (int32_t)a3;
    char * v7 = (char *)((v2 & -256 | 11) + 4 * a4); // 0xd87cb
    char v8 = a4 / 256; // 0xd87cb
    *v7 = *v7 | v8;
    int64_t v9; // 0xd87b5
    int32_t v10 = *(int32_t *)&v9; // 0xd87d0
    int64_t v11 = ((a5 & (int64_t)&g1) != 0 ? -4 : 4) + a1; // 0xd87d0
    v9 = v11;
    if (v10 > (int32_t)v5) {
        // 0xd87d3
        *(char *)-0x5df89924 = *(char *)-0x5df89924 + (char)(v2 / 256);
        return result;
    }
    // 0xd87dc
    *(char *)v11 = (char)v5 | (char)&g6;
    int64_t v12 = v9 + ((a5 & (int64_t)&g1) != 0 ? -1 : 1); // 0xd87de
    v9 = v12;
    *(char *)v3 = *(char *)&v3 + (char)(v2 / 256);
    char * v13 = (char *)(v12 + 22); // 0xd87e5
    *v13 = v8;
    if ((int32_t)unknown_897da9(v12) != -0x4041a8ff) {
        // 0xd87f6
        return v3 & 0xffffffff;
    }
    int64_t result2 = a2 & 0xffffffff; // 0xd87f3
    char * v14 = (char *)((256 * (int64_t)*v13 | a4 & -0xff01) + 0x13d00b3); // 0xd8863
    unsigned char v15 = *v14; // 0xd8863
    char v16 = a2; // 0xd8863
    char v17 = v15 + v16; // 0xd8863
    *v14 = v17;
    if (v17 < 0 == ((v17 ^ v15) & (v17 ^ v16)) < 0 == (v17 != 0)) {
        // 0xd8871
        return result2;
    }
    uint32_t v18 = (int32_t)a4 % 32; // 0xd886d
    if (v18 != 0) {
        int32_t * v19 = (int32_t *)(result2 - 93); // 0xd886d
        uint32_t v20 = *v19; // 0xd886d
        *v19 = v20 << v18 | (int32_t)(v17 < v15) << v18 - 1 | (int32_t)((int64_t)v20 >> (int64_t)(33 - v18));
    }
    // 0xd8871
    return result2;
}

// Address range: 0xd88fd - 0xd8910
int64_t function_d88fd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0xd88fd
    *(char *)a4 = 0;
    int64_t v1 = unknown_3d0d9740(); // 0xd88ff
    int32_t * v2 = (int32_t *)(v1 - 15); // 0xd8904
    uint32_t v3 = *v2; // 0xd8904
    int64_t v4; // 0xd88fd
    uint32_t v5 = v3 + (int32_t)v4; // 0xd8904
    *v2 = v5;
    int64_t v6; // 0xd88fd
    char v7 = *(char *)&v6; // 0xd8907
    int64_t v8 = 256 * (int64_t)((char)(a4 / 256) - v7 + (char)(v5 < v3)) | a4 & -0xff01; // 0xd8907
    int64_t result; // 0xd8909
    if (v8 == 0) {
        // ._crit_edge
        result = v1 ^ 252;
        __asm_out_133(111, (char)result);
        return result;
    }
    int64_t v9 = v8; // 0xd890b
    int64_t v10; // 0xd88fd
    __asm_outsd((int16_t)a3, *(int32_t *)&v10);
    while (v9 != 1) {
        v9--;
        __asm_outsd((int16_t)a3, *(int32_t *)&v10);
    }
    // ._crit_edge
    result = v1 ^ 252;
    __asm_out_133(111, (char)result);
    return result;
}

// Address range: 0xd8910 - 0xd8911
int64_t function_d8910(void) {
    // 0xd8910
    int64_t result; // 0xd8910
    return result;
}

// Address range: 0xd892a - 0xd896f
int64_t function_d892a(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd892a
    int64_t v1; // 0xd892a
    __asm_out_134((int16_t)a3, (char)v1);
    bool v2; // 0xd892a
    int64_t v3 = v2 ? -4 : 4;
    int64_t v4 = a2; // 0xd892a
    int64_t v5; // 0xd892a
    int64_t v6 = v5 - 8; // 0xd8933
    int64_t v7 = a1 + (v2 ? -1 : 1); // 0xd8938
    int64_t v8 = __asm_wait(v7); // 0xd894c
    char v9 = *(char *)-0x7fe4bac; // 0xd894d
    int64_t v10; // 0xd892a
    *(char *)-0x7fe4bac = v9 + (char)(v10 / 256);
    *(int32_t *)v7 = *(int32_t *)v4;
    int64_t v11; // 0xd892a
    uint32_t v12 = (int32_t)v11 + (int32_t)v1; // 0xd8955
    int64_t v13 = (int64_t)v12 - 1; // 0xd8957
    int64_t v14 = v8; // 0xd8957
    if (v12 != 0 && v13 != 0) {
        v14 = function_d8910();
    }
    int64_t v15 = v7 + v3; // 0xd8954
    int64_t v16 = v14;
    v4 += v3;
    while (v12 < 0) {
        // 0xd892b
        v6 -= 8;
        v7 = v15 + (v2 ? -1 : 1);
        v8 = __asm_wait(v7);
        v9 = *(char *)-0x7fe4bac;
        *(char *)-0x7fe4bac = v9 + (char)(v16 / 256);
        *(int32_t *)v7 = *(int32_t *)v4;
        v12 = (int32_t)v13 + (int32_t)v1;
        v13 = (int64_t)v12 - 1;
        v14 = v8;
        if (v12 != 0 && v13 != 0) {
            v14 = function_d8910();
        }
        // 0xd8959
        v15 = v7 + v3;
        v16 = v14;
        v4 += v3;
    }
    // 0xd895c
    *(int32_t *)0xd742943a = (int32_t)v16;
    int32_t * v17 = (int32_t *)(v15 - 76); // 0xd8967
    *v17 = 0x10000000 * *v17;
    int64_t v18 = (v16 ^ 0xf7013d00) & v6; // 0xd896b
    *(int32_t *)v15 = (int32_t)v18;
    return v18 & 0xffffffff;
}

// Address range: 0xd896f - 0xd898a
int64_t function_d896f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = *(char *)0x3c016880; // 0xd8979
    int64_t v2; // 0xd896f
    *(char *)0x3c016880 = v1 + (char)((uint64_t)v2 / 256);
    return v2 & 0xffffffff ^ 0xc86e4ec2;
}

// Address range: 0xd899b - 0xd899c
int64_t function_d899b(int64_t a1) {
    // 0xd899b
    int64_t result; // 0xd899b
    return result;
}

// Address range: 0xd8ac7 - 0xd8ac9
int64_t function_d8ac7(int64_t a1) {
    // 0xd8ac7
    int64_t result; // 0xd8ac7
    return result;
}

// Address range: 0xd8b04 - 0xd8b06
int64_t function_d8b04(void) {
    // 0xd8b04
    return function_d8b09((int64_t)&g7);
}

// Address range: 0xd8b07 - 0xd8b09
int64_t function_d8b07(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd8b07
    int64_t result; // 0xd8b07
    *(int32_t *)a4 = 2 * (int32_t)result;
    return result;
}

// Address range: 0xd8b09 - 0xd8b25
int64_t function_d8b09(int64_t a1) {
    int64_t v1 = unknown_58fe1c1b(); // 0xd8b14
    int64_t v2; // 0xd8b09
    int32_t * v3 = (int32_t *)(v2 + 0x6d6914ad); // 0xd8b1a
    *v3 = *v3 + (int32_t)v2;
    return v1 ^ 150;
}

// Address range: 0xd8b2e - 0xd8b40
int64_t function_d8b2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd8b2e
    unknown_7c9c4a3b();
    int64_t result = __asm_hlt(); // 0xd8b3a
    int64_t v1; // 0xd8b2e
    int32_t * v2 = (int32_t *)(2 * v1 + a2); // 0xd8b3b
    *v2 = *v2 & -115;
    return result;
}

// Address range: 0xd8b72 - 0xd8b7e
int64_t function_d8b72(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0xd8b72
    int64_t v1; // 0xd8b72
    int64_t v2 = v1;
    bool v3; // 0xd8b72
    int64_t result = (v2 + a4 / 256 + (int64_t)v3) % 256 | v2 & -256; // 0xd8b72
    int32_t * v4 = (int32_t *)(a1 - 0x17fe170b); // 0xd8b74
    int32_t v5 = result; // 0xd8b74
    *v4 = *v4 + v5;
    int64_t v6; // 0xd8b72
    *(int32_t *)a4 = *(int32_t *)&v6 + v5;
    return result;
}

// Address range: 0xd8b7e - 0xd8b81
int64_t function_d8b7e(void) {
    // 0xd8b7e
    int64_t v1; // 0xd8b7e
    return function_d8bbe(v1, v1, v1, v1);
}

// Address range: 0xd8b8b - 0xd8b98
int64_t function_d8b8b(void) {
    // 0xd8b8b
    int64_t v1; // 0xd8b8b
    return v1 & -256 | (int64_t)*(char *)-0x57e97868ae8054d7;
}

// Address range: 0xd8bbe - 0xd8bc7
int64_t function_d8bbe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd8bbe
    int64_t result; // 0xd8bbe
    char * v1 = (char *)(result + 59); // 0xd8bbe
    *v1 = *v1 + (char)a4;
    char v2 = *(char *)0x409dc2c8; // 0xd8bc1
    *(char *)0x409dc2c8 = v2 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x1744aa - 0x1744ab
int64_t function_1744aa(void) {
    // 0x1744aa
    int64_t result; // 0x1744aa
    return result;
}

// Address range: 0x1744cb - 0x1744ce
int64_t function_1744cb(void) {
    // 0x1744cb
    int64_t result; // 0x1744cb
    return result;
}

// Address range: 0x1744d9 - 0x1744e4
int64_t function_1744d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1744d9
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x1744d9
    return v1 & -256 | (int64_t)*(char *)0x159c759101e83200;
}

// Address range: 0x174521 - 0x17466c
int64_t function_174521(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = unknown_ffffffffbed23d27(); // 0x174521
    unsigned char v2 = *(char *)-0x14fe17f803d7a097; // 0x174526
    int64_t v3; // 0x174521
    bool v4; // 0x174521
    uint32_t v5 = (int32_t)v4 + (int32_t)v3 + (int32_t)(v1 & 0xffffff00 | (int64_t)v2); // 0x17452f
    char * v6 = (char *)((int64_t)v5 + 0x53419c00); // 0x174531
    *v6 = *v6 + (char)v5;
    int64_t v7; // bp-32, 0x174521
    int64_t v8 = (int64_t)&v7; // 0x174612
    v7 = v8;
    int64_t * v9 = (int64_t *)(v8 - 8); // 0x17461b
    *v9 = a7;
    int64_t v10 = v8 + 16; // 0x17461e
    *(int64_t *)v10 = v7;
    v7 = 0x6874f81;
    *v9 = 310;
    *(int64_t *)(v8 + 32) = v7;
    v7 = a3;
    *v9 = v8;
    int64_t v11 = v7; // 0x174653
    v7 = v10;
    int64_t v12 = *(int64_t *)(v8 + 8); // 0x174658
    v7 = v12;
    *v9 = v12;
    return function_caf2a(a1, a2, v11, a4, a5, a6, v3, 0x170860);
}

// Address range: 0x17466c - 0x1747ba
int64_t function_17466c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x17466c
    int64_t v1; // 0x17466c
    return function_caf2a(a1, a2, a3, a4, v1, v1, 0x1b5a0f26, (int64_t)&g7);
}

// Address range: 0x1747ba - 0x17493e
int64_t function_1747ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1747ba
    return function_caf2a(a1, a2, a3, a4, a5, a6, 0x1dff36ac, (int64_t)&g7);
}

// Address range: 0x17493e - 0x174a9b
int64_t function_17493e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x17493e
    int64_t v1; // bp-48, 0x17493e
    int64_t v2 = (int64_t)&v1;
    v1 = v2;
    int64_t v3; // bp-72, 0x17493e
    v3 = (int64_t)&v3 + 16;
    int64_t v4; // 0x17493e
    return function_caf2a(a1, a2, a3, a4, a5, a6, v2, v4);
}

// Address range: 0x174a9b - 0x174c37
int64_t function_174a9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x174a9b
    return function_caf2a(a1, a2, a3, a4, a5, a6, 310, 0x17120f);
}

// Address range: 0x174c37 - 0x174d70
int64_t function_174c37(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1; // bp-32, 0x174c62
    int64_t v2 = (int64_t)&v1; // 0x174cce
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x174cd6
    *(int64_t *)(v2 - 8) = v3;
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x174cde
    *(int64_t *)(v2 - 24) = v2;
    *(int64_t *)(v2 - 32) = *v4;
    int64_t v5 = *v4; // 0x174cf9
    int64_t * v6 = (int64_t *)(v5 - 8); // 0x174cfd
    int64_t * v7 = (int64_t *)(v5 - 16); // 0x174d04
    *(int64_t *)(v5 + 8) = a5;
    *v7 = a5;
    *v6 = v3;
    *(int64_t *)(v5 + 24) = v3;
    int64_t * v8 = (int64_t *)v5; // 0x174d3c
    *v7 = *v8;
    *v8 = a4;
    *v6 = v5 + 16;
    int64_t v9 = *v8; // 0x174d5f
    *v7 = v9;
    int64_t v10; // 0x174c37
    return function_caf2a(a1, a2, a3, v9, v10, v10, 0x1714c6, 169);
}
