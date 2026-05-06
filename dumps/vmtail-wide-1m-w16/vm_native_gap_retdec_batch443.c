/*
 * Targeted RetDec C for native executable gap queue batch 443.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x151713-0x151913 rank=- name=- kind=- bytes=- uncovered=-
 *   0x151913-0x151b13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x151b13-0x151d13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x151f13-0x152113 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1720aa-0x1722aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1724aa-0x1726aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1726aa-0x1728aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1728aa-0x172aaa rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_151713(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_151747(void);
int64_t function_15178d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1517c1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_15183e(int64_t a1);
int64_t function_151867(int64_t a1);
int64_t function_151892(int64_t a1);
int64_t function_1518e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_151904(void);
int64_t function_151910(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_151930(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_15193f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_15195b(void);
int64_t function_151960(void);
int64_t function_151979(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1519f8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_151a67(int64_t a1, int64_t a2, int64_t a3);
int64_t function_151a7e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_151b19(int64_t a1);
int64_t function_151b44(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_151b4f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_151bc4(int64_t a1, int64_t a2);
int64_t function_151c12(void);
int64_t function_151c77(int64_t a1);
int64_t function_151f13(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_151f39(int64_t a1, int64_t a2, int64_t a3);
int64_t function_151fd6(void);
int64_t function_151fdd(int64_t a1);
int64_t function_151fe9(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_152021(int64_t a1);
int64_t function_152060(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1520a4(void);
int64_t function_1520a9(int64_t a1);
int64_t function_152105(int64_t a1, int64_t a2, int64_t a3);
int64_t function_15b147a0();
int64_t function_1720aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_172148(int64_t a1);
int64_t function_17215f(int64_t a1);
int64_t function_172166(void);
int64_t function_17218c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1721a5(int64_t a1);
int64_t function_1721a7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1721ec(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1724aa(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_172538(int64_t a1, int64_t a2, int64_t a3);
int64_t function_17254c(void);
int64_t function_17255c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1725b7(void);
int64_t function_172651(void);
int64_t function_17268a(int64_t a1);
int64_t function_1726a8(void);
int64_t function_1726bd(int64_t a1);
int64_t function_1726e7(void);
int64_t function_1726eb(int64_t a1);
int64_t function_1726f9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_172710(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_172762(int64_t a1);
int64_t function_17277d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1727ff(int64_t a1, int64_t a2, int64_t a3);
int64_t function_17282d(int64_t a1);
int64_t function_17283f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_17286b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_172894(void);
int64_t function_1728a7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1728c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1728f8(int64_t a1);
int64_t function_1728fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_172937(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_172948(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_172959(void);
int64_t function_172961(void);
int64_t function_1729a3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_172a22(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_172a38(int64_t a1);
int64_t function_172a65(void);
int64_t function_172a7c(int64_t a1);
int64_t function_172a8b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38852a63();
int64_t function_57cb2bdf();
int64_t function_74618118();
int64_t function_afad3a8();
int64_t function_ffffffff85631add();
int64_t function_ffffffffab247192();
int64_t function_ffffffffcf5f1b41();
int64_t function_ffffffffe83f95c6();
int64_t unknown_1109d590();
int64_t unknown_1cb0b2e6();
int64_t unknown_1ffa0bd();
int64_t unknown_2e172cf9();
int64_t unknown_3a3e91a6();
int64_t unknown_3a9afff2();
int64_t unknown_3d170188();
int64_t unknown_4816b3d6();
int64_t unknown_4da4ec6f();
int64_t unknown_54625d36();
int64_t unknown_57d3281b();
int64_t unknown_5f1b014c();
int64_t unknown_7ddf0e33();
int64_t unknown_8ec29ed();
int64_t unknown_ffffffff80d094e1();
int64_t unknown_ffffffff860b3b3d();
int64_t unknown_ffffffffb0c42e84();
int64_t unknown_ffffffffc50fea1d();
int64_t unknown_ffffffffca02fef4();
int64_t unknown_ffffffffd21f81ae();
int64_t unknown_ffffffffe01a0742();
int64_t unknown_ffffffffe83ee708();
int64_t unknown_ffffffffe853e4f8();
int64_t unknown_ffffffffe8643fa4();
int64_t unknown_ffffffffe8c3770b();
int64_t unknown_fffffffff2ddd20b();
int64_t unknown_fffffffff7a7f78e();
int64_t unknown_fffffffff8a234e3();
int64_t unknown_fffffffff8ba324e();

// Address range: 0x151713 - 0x151732
int64_t function_151713(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_sti(); // 0x151715
    int64_t v2; // 0x151713
    *(int32_t *)v1 = (int32_t)v2 - (int32_t)v1;
    char * v3 = (char *)(a1 + 0xa76049b); // 0x151720
    *v3 = *v3 + (char)a3;
    return unknown_7ddf0e33();
}

// Address range: 0x151747 - 0x15174a
int64_t function_151747(void) {
    // 0x151747
    int64_t result; // 0x151747
    return result;
}

// Address range: 0x15178d - 0x1517b6
int64_t function_15178d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x15178d
    *(int32_t *)(a3 & 0xffffffff) = __asm_insd((int16_t)a3 & -256 | 145);
    int64_t v1; // 0x15178d
    return v1 & -256 | (int64_t)(*(char *)0xf5d6ac0ffcfd04 ^ -54);
}

// Address range: 0x1517c1 - 0x1517c9
int64_t function_1517c1(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 + 0x13d21fd); // 0x1517c1
    unsigned char v2 = *v1; // 0x1517c1
    *v1 = v2 / 128 | 2 * v2;
    int64_t result; // 0x1517c1
    return result;
}

// Address range: 0x15183e - 0x151849
int64_t function_15183e(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 120); // 0x15183e
    int64_t result; // 0x15183e
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x151867 - 0x151868
int64_t function_151867(int64_t a1) {
    // 0x151867
    int64_t result; // 0x151867
    return result;
}

// Address range: 0x151892 - 0x151893
int64_t function_151892(int64_t a1) {
    // 0x151892
    int64_t result; // 0x151892
    return result;
}

// Address range: 0x1518e7 - 0x1518f8
int64_t function_1518e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_3a9afff2(); // 0x1518ec
    int64_t v1; // 0x1518e7
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return result;
}

// Address range: 0x151904 - 0x151906
int64_t function_151904(void) {
    // 0x151904
    int64_t v1; // 0x151904
    return function_151979(v1, v1, v1, v1);
}

// Address range: 0x151910 - 0x151924
int64_t function_151910(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x151910
    __asm_in_133(37);
    return unknown_ffffffffc50fea1d();
}

// Address range: 0x151930 - 0x151934
int64_t function_151930(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x151930
    return a4 & 0xffffffff;
}

// Address range: 0x15193f - 0x151959
int64_t function_15193f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x15193f
    int64_t v1; // 0x15193f
    *(char *)a2 = (char)(v1 | a4);
    int64_t v2; // 0x15193f
    *(char *)v2 = *(char *)&v2 | (char)(v1 / 256);
    __asm_out(-122, (char)unknown_5f1b014c());
    return function_ffffffffcf5f1b41();
}

// Address range: 0x15195b - 0x151960
int64_t function_15195b(void) {
    // 0x15195b
    return function_15b147a0();
}

// Address range: 0x151960 - 0x15196e
int64_t function_151960(void) {
    // 0x151960
    return 0x71afff63;
}

// Address range: 0x151979 - 0x1519a4
int64_t function_151979(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x151979
    int64_t v1; // 0x151979
    *(char *)a2 = (char)v1 - (char)a3;
    int64_t v2 = unknown_3d170188(); // 0x151982
    int32_t * v3 = (int32_t *)(a4 + 104); // 0x151987
    *v3 = *v3 + (int32_t)v2;
    unknown_1109d590();
    float80_t v4; // 0x151979
    *(int16_t *)a1 = (int16_t)v4;
    return a2 & 0xffffff00 | (int64_t)__asm_in((int16_t)a3);
}

// Address range: 0x1519f8 - 0x151a65
int64_t function_1519f8(int64_t a1, int64_t a2, int64_t a3) {
    unsigned char v1 = *(char *)-0x279dbdf6; // 0x151a03
    int64_t v2; // 0x1519f8
    unsigned char v3 = v1 + (char)((uint64_t)v2 / 256); // 0x151a03
    *(char *)-0x279dbdf6 = v3;
    if (v3 >= v1) {
        // 0x151a19
        return function_ffffffff85631add();
    }
    char * v4 = (char *)(a1 + 67); // 0x151a60
    *v4 = *v4 + 49;
    return v2 & -256 | (int64_t)*(char *)-0x6ce5b07a86c52814;
}

// Address range: 0x151a67 - 0x151a7e
int64_t function_151a67(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_4da4ec6f(); // 0x151a69
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v2; // 0x151a67
    int32_t * v3 = (int32_t *)(8 * v2 - 0x6f000bff + v1); // 0x151a70
    *v3 = *v3 - (int32_t)a1;
    return function_74618118();
}

// Address range: 0x151a7e - 0x151b03
int64_t function_151a7e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x151a7e
    int64_t v1; // 0x151a7e
    int64_t v2 = v1;
    int64_t v3 = a3;
    uint32_t v4 = (int32_t)a4 % 32; // 0x151a7e
    int64_t v5 = v4 == 0 ? v2 : (int64_t)((int32_t)v2 >> v4);
    int32_t * v6 = (int32_t *)(4 * a3 + 0x4f0019d + v1); // 0x151a80
    int32_t v7 = *v6; // 0x151a80
    int32_t v8 = v1; // 0x151a80
    int32_t v9 = v7 + v8; // 0x151a80
    *v6 = v9;
    __asm_out_134((int16_t)v3, (char)v5);
    unknown_fffffffff7a7f78e();
    if (((v9 ^ v7) & (v9 ^ v8)) >= 0) {
        int32_t * v10 = (int32_t *)(a2 + 0x3a9183ba); // 0x151a94
        *v10 = *v10 + (int32_t)v3;
        return unknown_3a3e91a6();
    }
    int64_t v11 = unknown_1cb0b2e6(); // 0x151ae0
    char v12 = *(char *)(a4 - 37); // 0x151ae5
    int32_t * v13 = (int32_t *)(v11 - 64); // 0x151aee
    uint32_t v14 = *v13; // 0x151aee
    *v13 = v14 - 0x17af9d52;
    int64_t v15; // 0x151a7e
    float80_t v16; // 0x151a7e
    *(int16_t *)(v15 + 37) = (int16_t)v16;
    *(char *)a1 = (char)v11;
    int64_t v17 = v11 + 0xab008000 + (int64_t)(v14 > 0x17af9d51); // 0x151af8
    *(int32_t *)v15 = *(int32_t *)&v15 + (int32_t)a2;
    int32_t v18 = *(int32_t *)&v3; // 0x151b01
    bool v19; // 0x151a7e
    *(int32_t *)v3 = v18 + (int32_t)((v19 ? 0xffffffff : 1) + a1);
    return (v17 + (int64_t)(v12 ^ (char)(a4 / 256))) % 256 | v17 & 0xffffff00;
}

// Address range: 0x151b19 - 0x151b1a
int64_t function_151b19(int64_t a1) {
    // 0x151b19
    int64_t result; // 0x151b19
    return result;
}

// Address range: 0x151b44 - 0x151b4b
int64_t function_151b44(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x151b44
    int64_t result; // 0x151b44
    int32_t * v1 = (int32_t *)(result + 0x33012327); // 0x151b44
    *v1 = *v1 + (int32_t)a4;
    return result;
}

// Address range: 0x151b4f - 0x151b6d
int64_t function_151b4f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x151b4f
    int64_t v1; // 0x151b4f
    return v1 & -256 | (int64_t)__asm_in_135(118);
}

// Address range: 0x151bc4 - 0x151bc9
int64_t function_151bc4(int64_t a1, int64_t a2) {
    // 0x151bc4
    int64_t result; // 0x151bc4
    return result;
}

// Address range: 0x151c12 - 0x151c18
int64_t function_151c12(void) {
    // 0x151c12
    int64_t result; // 0x151c12
    int32_t * v1 = (int32_t *)(result + 55); // 0x151c12
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x151c77 - 0x151c7a
int64_t function_151c77(int64_t a1) {
    // 0x151c77
    int64_t result; // 0x151c77
    return result;
}

// Address range: 0x151f13 - 0x151f38
int64_t function_151f13(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x151f13
    int64_t v1; // 0x151f13
    bool v2; // 0x151f13
    uint64_t v3 = v1 + 0x9203fa32 + (int64_t)v2; // 0x151f13
    char * v4 = (char *)((v3 & 0xffffffff) + 8 * v1); // 0x151f18
    *v4 = *v4 + (char)(v3 / 256);
    int64_t v5; // 0x151f13
    *(char *)a2 = *(char *)&v5 ^ (char)(a4 / 256);
    *(char *)-0x1e8f878 = *(char *)-0x1e8f878 + 2;
    int64_t v6 = v2 ? -4 : 4; // 0x151f29
    int32_t v7 = *(int32_t *)-0x5594e44e; // 0x151f2a
    return unknown_54625d36(v7 + (int32_t)a1, v6 + a2, (int32_t)v1 + (int32_t)a3);
}

// Address range: 0x151f39 - 0x151f54
int64_t function_151f39(int64_t a1, int64_t a2, int64_t a3) {
    // 0x151f39
    int64_t v1; // 0x151f39
    float80_t v2; // 0x151f39
    *(int64_t *)(v1 - 10) = (int64_t)v2;
    unknown_fffffffff8ba324e();
    return function_ffffffffe83f95c6();
}

// Address range: 0x151fd6 - 0x151fd8
int64_t function_151fd6(void) {
    // 0x151fd6
    int64_t result; // 0x151fd6
    return result;
}

// Address range: 0x151fdd - 0x151fe5
int64_t function_151fdd(int64_t a1) {
    // 0x151fdd
    return unknown_fffffffff8a234e3(a1);
}

// Address range: 0x151fe9 - 0x151ff1
int64_t function_151fe9(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x151fe9
    int64_t v1; // 0x151fe9
    int64_t v2 = v1;
    return (v2 - a3 / 256) % 256 | v2 & -256;
}

// Address range: 0x152021 - 0x152022
int64_t function_152021(int64_t a1) {
    // 0x152021
    int64_t result; // 0x152021
    return result;
}

// Address range: 0x152060 - 0x15207b
int64_t function_152060(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t result = *(int32_t *)-0x550afe1762c91e0c; // 0x15206e
    __asm_out_134((int16_t)a5, (char)result);
    return result;
}

// Address range: 0x1520a4 - 0x1520a7
int64_t function_1520a4(void) {
    // 0x1520a4
    int64_t result; // 0x1520a4
    return result;
}

// Address range: 0x1520a9 - 0x1520ac
int64_t function_1520a9(int64_t a1) {
    // 0x1520a9
    int64_t result; // 0x1520a9
    return result;
}

// Address range: 0x152105 - 0x152113
int64_t function_152105(int64_t a1, int64_t a2, int64_t a3) {
    // 0x152105
    int64_t result; // 0x152105
    bool v1; // 0x152105
    if (v1) {
        char * v2 = (char *)(a3 - 106); // 0x152110
        unsigned char v3 = *v2; // 0x152110
        *v2 = v3 / 2 | 128 * v3;
        return result;
    }
    // 0x15210b
    return result;
}

// Address range: 0x1720aa - 0x172124
int64_t function_1720aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    uint64_t result = __asm_int3(); // 0x1720aa
    bool v1; // 0x1720aa
    if (v1) {
        // 0x1720ad
        *(char *)-0x5e6f684 = *(char *)-0x5e6f684 + 78;
        char v2 = *(char *)(a2 - 0x5272f77d); // 0x1720b5
        return 256 * (int64_t)(v2 + (char)(result / 256)) | result & -0xff01;
    }
    if (v1) {
        // 0x1720e4
        return result;
    }
    // 0x172111
    __asm_hlt();
    return unknown_57d3281b();
}

// Address range: 0x172148 - 0x172152
int64_t function_172148(int64_t a1) {
    // 0x172148
    int64_t result; // 0x172148
    return result;
}

// Address range: 0x17215f - 0x172166
int64_t function_17215f(int64_t a1) {
    // 0x17215f
    int64_t v1; // 0x17215f
    return v1 & -0xff01 | (int64_t)&g1;
}

// Address range: 0x172166 - 0x17216b
int64_t function_172166(void) {
    // 0x172166
    return function_38852a63();
}

// Address range: 0x17218c - 0x17218f
int64_t function_17218c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x17218c
    int64_t result; // 0x17218c
    return result;
}

// Address range: 0x1721a5 - 0x1721a6
int64_t function_1721a5(int64_t a1) {
    // 0x1721a5
    int64_t result; // 0x1721a5
    return result;
}

// Address range: 0x1721a7 - 0x1721ae
int64_t function_1721a7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1721a7
    return unknown_ffffffffd21f81ae(a1, a2, a3);
}

// Address range: 0x1721ec - 0x172296
int64_t function_1721ec(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    uint64_t v1 = unknown_2e172cf9(); // 0x1721f3
    char * v2 = (char *)(a4 & -256 | 187); // 0x1721fc
    *v2 = *v2 + (char)(v1 / 256);
    int64_t v3 = v1 & 0xffffffff; // 0x1721fe
    int32_t * v4 = (int32_t *)(a2 - 72); // 0x172201
    *v4 = *v4 + (int32_t)a1;
    unknown_ffffffff80d094e1();
    unknown_1ffa0bd((int32_t)(a1 - a3));
    __writefsbyte(a3, __readfsbyte(a3) | (char)(a3 / 256));
    int64_t v5; // 0x1721ec
    uint64_t v6 = (v5 | 256 * a4 & 0xff00) / 256 & a3;
    char v7 = v6; // 0x172246
    unsigned char v8 = llvm_ctpop_i8(v7); // 0x172246
    int64_t v9 = __asm_hlt(); // 0x172248
    *(int64_t *)v3 = 0x38bc9900;
    int64_t v10 = 0x8000 * (int64_t)(v7 < 0) | 0x4000 * (int64_t)(v7 == 0) | 1024 * (int64_t)(v8 % 2 == 0) | 512; // 0x17224e
    int64_t v11 = v9 & -0x10000 | v10 | (int64_t)__asm_in_135(-74); // 0x17224f
    *(int64_t *)(v3 - 8) = v3;
    if (v7 < 0) {
        // 0x172254
        return v11 & -0xff01 | v10;
    }
    // 0x17227a
    __asm_out_136((int16_t)(v6 % 256 | a3 & 0xff00), (int32_t)v11);
    int64_t result = v11; // 0x17227b
    if (v8 % 2 == 0) {
        // 0x17227d
        result = unknown_ffffffffb0c42e84();
    }
    // 0x1722bb
    return result;
}

// Address range: 0x1724aa - 0x1724d9
int64_t function_1724aa(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 0x62d8f784); // 0x1724aa
    int64_t v2; // 0x1724aa
    *v1 = *v1 + (int32_t)v2;
    *(char *)a4 = (char)a4;
    *(char *)(a4 + 0x3401e80f) = (char)(a4 / 256);
    int64_t result = (int64_t)(-114 * *(int32_t *)(a3 + 4)); // 0x1724c6
    char * v3 = (char *)result; // 0x1724ca
    unsigned char v4 = *v3; // 0x1724ca
    *v3 = v4 / 128 | 2 * v4;
    return result;
}

// Address range: 0x172538 - 0x172543
int64_t function_172538(int64_t a1, int64_t a2, int64_t a3) {
    // 0x172538
    int64_t result; // 0x172538
    *(int32_t *)-0x49ef410b9e1b01a6 = (int32_t)result;
    return result;
}

// Address range: 0x17254c - 0x17254d
int64_t function_17254c(void) {
    // 0x17254c
    int64_t result; // 0x17254c
    return result;
}

// Address range: 0x17255c - 0x1725b3
int64_t function_17255c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x17255c
    int64_t v1; // 0x17255c
    int64_t v2 = v1;
    int64_t v3 = a1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    unsigned char v4 = *(char *)-0x4021d825d66de8ba; // 0x17255e
    int32_t * v5 = (int32_t *)(a3 + 0x19d478e + (v2 & 0xffffff00 | (int64_t)v4)); // 0x172568
    int32_t v6 = *v5 - 0x7afec300; // 0x172568
    *v5 = v6;
    int32_t result = __asm_in_137((int16_t)a3); // 0x172573
    if (v6 >= 0) {
        // 0x172576
        return result;
    }
    int64_t v7 = unknown_ffffffffe8643fa4(); // 0x17259e
    int32_t * v8 = (int32_t *)(v3 + 109); // 0x1725a3
    *v8 = *v8 + (int32_t)a2;
    *(char *)v3 = *(char *)&v3 + (char)(a4 / 256);
    return (int64_t)(*(int32_t *)(a3 + 0x1e8314f) | (int32_t)v7);
}

// Address range: 0x1725b7 - 0x1725ba
int64_t function_1725b7(void) {
    // 0x1725b7
    int64_t result; // 0x1725b7
    return result;
}

// Address range: 0x172651 - 0x172652
int64_t function_172651(void) {
    // 0x172651
    int64_t result; // 0x172651
    return result;
}

// Address range: 0x17268a - 0x172695
int64_t function_17268a(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 0x560f307); // 0x17268a
    int64_t v2; // 0x17268a
    *v1 = *v1 + (int32_t)v2;
    return function_afad3a8();
}

// Address range: 0x1726a8 - 0x1726aa
int64_t function_1726a8(void) {
    // 0x1726a8
    return function_172651();
}

// Address range: 0x1726bd - 0x1726be
int64_t function_1726bd(int64_t a1) {
    // 0x1726bd
    int64_t result; // 0x1726bd
    return result;
}

// Address range: 0x1726e7 - 0x1726e8
int64_t function_1726e7(void) {
    // 0x1726e7
    int64_t result; // 0x1726e7
    return result;
}

// Address range: 0x1726eb - 0x1726f8
int64_t function_1726eb(int64_t a1) {
    // 0x1726eb
    int64_t v1; // 0x1726eb
    int64_t v2 = v1;
    *(char *)-0x17fe17e79973f868 = (char)v2;
    return (v2 + 47) % 256 | v2 & -256;
}

// Address range: 0x1726f9 - 0x172704
int64_t function_1726f9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1726f9
    int64_t v1; // 0x1726f9
    uint32_t v2 = (int32_t)v1; // 0x1726f9
    unsigned char v3 = (char)a3; // 0x1726fb
    char v4 = -1 - v2 < v2; // 0x1726fb
    unsigned char v5 = (char)(v1 / 256) + v4; // 0x1726fb
    unsigned char v6 = v3 - v5; // 0x1726fb
    int64_t result; // 0x1726f9
    if (v6 == 0 || (-1 - v2 < v2 ? v5 != -1 || v6 - v4 > v3 : v5 > v3)) {
        result = function_1726e7();
    }
    int32_t * v7 = (int32_t *)(a3 & -256 | (int64_t)v6); // 0x1726ff
    *v7 = *v7 + (int32_t)a1;
    return result;
}

// Address range: 0x172710 - 0x172716
int64_t function_172710(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 57); // 0x172710
    *v1 = *v1 + (int32_t)a2;
    int64_t result; // 0x172710
    return result;
}

// Address range: 0x172762 - 0x172765
int64_t function_172762(int64_t a1) {
    // 0x172762
    return function_1726eb((int64_t)&g4);
}

// Address range: 0x17277d - 0x1727fe
int64_t function_17277d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x17277d
    int64_t v1; // 0x17277d
    uint64_t v2 = v1;
    int64_t v3 = a4 - 1; // 0x172781
    if (v3 == 0 || (char)v2 == 50) {
        uint32_t v4 = (int32_t)v3 % 32; // 0x17278a
        if (v4 != 0) {
            int32_t * v5 = (int32_t *)(v1 - 0x4c22c4c6); // 0x17278a
            uint32_t v6 = *v5; // 0x17278a
            *v5 = v6 >> 32 - v4 | v6 << v4;
        }
        return v1 & -256 | v2 % 256;
    }
    int64_t result = (v1 & 0xffffff00 | (int64_t)*(char *)-0x17515a4527e30007) ^ 0xda01e800; // 0x1727dc
    bool v7; // 0x17277d
    int32_t * v8 = (int32_t *)(a2 + 69 + (v7 ? -1 : 1)); // 0x1727e5
    *v8 = *v8 + (int32_t)a1;
    __asm_out_138(65, (int16_t)result);
    __asm_frstor(*(int864_t *)(result + 0x1e8ba00));
    *(char *)-0x53e6efac = *(char *)-0x53e6efac - 58;
    return result;
}

// Address range: 0x1727ff - 0x172829
int64_t function_1727ff(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1727ff
    int64_t v1; // 0x1727ff
    int32_t * v2 = (int32_t *)((uint64_t)v1 % 256 ^ a3); // 0x172801
    *v2 = *v2 + 53;
    bool v3; // 0x1727ff
    int64_t v4 = (v3 ? -4 : 4) + a1; // 0x172804
    *(char *)-0x17460377fa3fba3d = (char)unknown_fffffffff2ddd20b(v4);
    int32_t * v5 = (int32_t *)(v1 - 0x399703ce); // 0x172813
    *v5 = *v5 + (int32_t)v1;
    int64_t v6 = unknown_ffffffffe83ee708(); // 0x172819
    int64_t v7; // 0x1727ff
    *(int32_t *)v4 = *(int32_t *)&v7;
    return v1 + 0x287917e7 + v6 & 0xffffffff;
}

// Address range: 0x17282d - 0x172830
int64_t function_17282d(int64_t a1) {
    // 0x17282d
    int64_t result; // 0x17282d
    return result;
}

// Address range: 0x17283f - 0x172855
int64_t function_17283f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x17283f
    int64_t v1; // 0x17283f
    *(int32_t *)0x21f0ad8 = *(int32_t *)0x21f0ad8 + (int32_t)v1;
    *(char *)0x2001425 = -66;
    return 2 * v1 & 0xffffffff;
}

// Address range: 0x17286b - 0x172874
int64_t function_17286b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x17286b
    int64_t result; // 0x17286b
    int32_t * v1 = (int32_t *)(result - 0x6af4d9f6); // 0x17286b
    *v1 = *v1 + (int32_t)a4;
    return result;
}

// Address range: 0x172894 - 0x172899
int64_t function_172894(void) {
    // 0x172894
    return function_ffffffffab247192();
}

// Address range: 0x1728a7 - 0x1728c8
int64_t function_1728a7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1728a7
    bool v1; // 0x1728a7
    if (v1) {
        // 0x1728b9
        int64_t v2; // 0x1728a7
        *(char *)v2 = 0;
        __asm_out_134((int16_t)a3, (char)v2);
        char * v3 = (char *)(a2 + 0x7101e8e2); // 0x1728bc
        *v3 = *v3 & (char)(a4 / 256);
        return function_57cb2bdf();
    }
    // 0x1728aa
    *(char *)a1 = __asm_insb((int16_t)a3);
    return 0x7206ab63;
}

// Address range: 0x1728c8 - 0x1728f8
int64_t function_1728c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1728c8
    int64_t v1; // 0x1728c8
    uint64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x1728c8
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)a4;
    uint64_t v4 = unknown_4816b3d6() + a2; // 0x1728d5
    char * v5 = (char *)(a2 - 0x17141667 + v1); // 0x1728d9
    *v5 = *v5 - (char)(v4 / 256);
    int64_t v6; // 0x1728c8
    int32_t * v7 = (int32_t *)((a3 & -256 | (int64_t)*(char *)&v6) + 0x2ad97467); // 0x1728e0
    *v7 = *v7 + (int32_t)v2;
    char * v8 = (char *)(v4 & 0xffffffff); // 0x1728e9
    unsigned char v9 = *v8; // 0x1728e9
    *v8 = v9 / 128 | 2 * v9;
    __asm_wait();
    int64_t v10 = unknown_ffffffffca02fef4(); // 0x1728ee
    int64_t result = __asm_wait(); // 0x1728f4
    char * v11 = (char *)(v10 & 0xffffffff); // 0x1728f5
    *v11 = *v11 & (char)(v2 / 256);
    return result;
}

// Address range: 0x1728f8 - 0x1728fa
int64_t function_1728f8(int64_t a1) {
    // 0x1728f8
    int64_t result; // 0x1728f8
    return result;
}

// Address range: 0x1728fa - 0x172915
int64_t function_1728fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1728fa
    int64_t result; // 0x1728fa
    *(int32_t *)-0x64fe1703d275d8cb = (int32_t)result;
    return result;
}

// Address range: 0x172937 - 0x172945
int64_t function_172937(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffff860b3b3d(a1, a2, a3, a4); // 0x172937
    int64_t v1; // 0x172937
    __asm_outsb((int16_t)a3, (char)v1);
    return result;
}

// Address range: 0x172948 - 0x172954
int64_t function_172948(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x172948
    int64_t v1; // 0x172948
    int64_t v2 = v1 & 0xffffffff ^ 0x33af9db0; // 0x172949
    char v3 = __asm_in((int16_t)a3); // 0x172950
    *(char *)a3 = (char)(v1 | (uint64_t)v1 / 256);
    return v2 & 0xffff0000 | (int64_t)v3 | (v2 | 256 * a3) & 0xff00;
}

// Address range: 0x172959 - 0x17295a
int64_t function_172959(void) {
    // 0x172959
    int64_t result; // 0x172959
    return result;
}

// Address range: 0x172961 - 0x172962
int64_t function_172961(void) {
    // 0x172961
    int64_t result; // 0x172961
    return result;
}

// Address range: 0x1729a3 - 0x172a0d
int64_t function_1729a3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    unknown_8ec29ed();
    char * v2 = (char *)(a2 - 0x602b5e50); // 0x1729ec
    *v2 = *v2 | (char)(a3 / 256);
    int64_t v3 = unknown_ffffffffe853e4f8(); // 0x1729f2
    int32_t v4 = a1;
    *(int32_t *)-0x6bd5bc02 = *(int32_t *)-0x6bd5bc02 + v4;
    bool v5; // 0x1729a3
    *(int32_t *)((v5 ? -4 : 4) + a1) = (int32_t)v3;
    int64_t result = v3 & -256 | (int64_t)__asm_in((int16_t)a3); // 0x1729ff
    if (*(int32_t *)&v1 != v4) {
        // 0x1729b2
        *(int32_t *)0x4c424055ffd0c00a = (int32_t)result;
        return result;
    }
    if (a4 != 1) {
        // 0x172a4b
        return result;
    }
    uint64_t v6 = unknown_ffffffffe8c3770b(); // 0x172a05
    int64_t v7; // 0x1729a3
    return v6 & -256 | (int64_t)*(char *)(v6 % 256 + v7);
}

// Address range: 0x172a22 - 0x172a37
int64_t function_172a22(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x172a22
    int64_t v1; // 0x172a22
    int64_t result = (v1 | v1) & 0xffffffff; // 0x172a25
    int32_t * v2 = (int32_t *)(result + 8 * a4); // 0x172a27
    int32_t v3 = *v2; // 0x172a27
    int32_t v4 = a3; // 0x172a27
    int32_t v5 = v3 + v4; // 0x172a27
    *v2 = v5;
    if (((v5 ^ v3) & (v5 ^ v4)) >= 0) {
        // 0x172a2e
        return result;
    }
    // 0x172a33
    *(char *)a3 = (char)a4;
    return result;
}

// Address range: 0x172a38 - 0x172a46
int64_t function_172a38(int64_t a1) {
    int64_t v1 = unknown_ffffffffe01a0742() & -256 | (int64_t)__asm_in_135(-95); // 0x172a41
    return (int64_t)(*(int32_t *)v1 + (int32_t)v1);
}

// Address range: 0x172a65 - 0x172a66
int64_t function_172a65(void) {
    // 0x172a65
    int64_t result; // 0x172a65
    return result;
}

// Address range: 0x172a7c - 0x172a7f
int64_t function_172a7c(int64_t a1) {
    // 0x172a7c
    int64_t result; // 0x172a7c
    return result;
}

// Address range: 0x172a8b - 0x172a9b
int64_t function_172a8b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 0x75ce8c9f); // 0x172a93
    *v1 = *v1 + (int32_t)a3;
    return function_172a65();
}
