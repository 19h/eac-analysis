/*
 * Targeted RetDec C for native executable gap queue batch 531.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x440167-0x440267 rank=- name=- kind=- bytes=- uncovered=-
 *   0x440267-0x440467 rank=- name=- kind=- bytes=- uncovered=-
 *   0x440567-0x440667 rank=- name=- kind=- bytes=- uncovered=-
 *   0x440867-0x440a67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47c230-0x47c430 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47c530-0x47c630 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47c630-0x47c830 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47ca30-0x47cc30 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
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

int64_t function_440167(void);
int64_t function_440192(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4401c5(void);
int64_t function_440214(int64_t a1);
int64_t function_440263(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44027e(int64_t a1);
int64_t function_440294(int64_t a1, int64_t a2);
int64_t function_4402f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4402fc(int64_t a1);
int64_t function_44032c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_440354(void);
int64_t function_440369(void);
int64_t function_440374(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_440388(void);
int64_t function_4403bf(void);
int64_t function_4403d1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44041a(void);
int64_t function_440519();
int64_t function_440567(void);
int64_t function_440583(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_4405cb(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_440623(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_440638(int64_t a1, int64_t a2, int64_t a3);
int64_t function_440804();
int64_t function_440867(void);
int64_t function_4408dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_47c200();
int64_t function_47c230(int64_t a1, int64_t a2);
int64_t function_47c258(void);
int64_t function_47c282(void);
int64_t function_47c2c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_47c33c(void);
int64_t function_47c370(void);
int64_t function_47c391(int64_t a1);
int64_t function_47c3a1(void);
int64_t function_47c3ae(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47c3be(void);
int64_t function_47c3c8(int64_t a1, int64_t a2);
int64_t function_47c3ce(void);
int64_t function_47c3d5(int64_t a1);
int64_t function_47c42c(void);
int64_t function_47c530(int64_t a1, int64_t a2);
int64_t function_47c542(void);
int64_t function_47c588(void);
int64_t function_47c595(void);
int64_t function_47c5b6(int64_t a1);
int64_t function_47c600(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47c621(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47c638(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47c653(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47c68e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47c6a9(int64_t a1, int64_t a2);
int64_t function_47c6ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_47c765(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47c80e(int64_t a1);
int64_t function_47c81a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47ca30(void);
int64_t function_47ca46(int64_t a1);
int64_t function_47caa8(void);
int64_t function_47cabf(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_47cb70(void);
int64_t function_47cbd5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47cc03(void);
int64_t function_4cd2b4ca();
int64_t function_5edf7c3d();
int64_t function_69091ebd();
int64_t function_ffffffffd75f18ae();
int64_t function_ffffffffd82aee7c();
int64_t function_ffffffffe0097295();
int64_t function_ffffffffef8911a1();

// Address range: 0x440167 - 0x44016d
int64_t function_440167(void) {
    // 0x440167
    int64_t v1; // 0x440167
    return v1 & 0xfa0a8af4;
}

// Address range: 0x440192 - 0x440196
int64_t function_440192(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x440192
    int64_t result; // 0x440192
    return result;
}

// Address range: 0x4401c5 - 0x4401c8
int64_t function_4401c5(void) {
    // 0x4401c5
    int64_t result; // 0x4401c5
    return result;
}

// Address range: 0x440214 - 0x440217
int64_t function_440214(int64_t a1) {
    // 0x440214
    int64_t result; // 0x440214
    return result;
}

// Address range: 0x440263 - 0x440267
int64_t function_440263(int64_t a1, int64_t a2, int64_t a3) {
    // 0x440263
    int64_t result; // 0x440263
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x44027e - 0x440281
int64_t function_44027e(int64_t a1) {
    // 0x44027e
    int64_t result; // 0x44027e
    return result;
}

// Address range: 0x440294 - 0x4402db
int64_t function_440294(int64_t a1, int64_t a2) {
    // 0x440294
    return a2 & 0xffffffff;
}

// Address range: 0x4402f4 - 0x4402fc
int64_t function_4402f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4402f4
    int64_t result; // 0x4402f4
    return result;
}

// Address range: 0x4402fc - 0x440301
int64_t function_4402fc(int64_t a1) {
    // 0x4402fc
    int64_t v1; // 0x4402fc
    return v1 & -256;
}

// Address range: 0x44032c - 0x440334
int64_t function_44032c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a4 % 32; // 0x44032c
    int64_t result; // 0x44032c
    if (v1 != 0) {
        char * v2 = (char *)(2 * result - 96); // 0x44032c
        unsigned char v3 = *v2; // 0x44032c
        *v2 = v3 >> v1 | v3 << 8 - v1;
    }
    return result;
}

// Address range: 0x440354 - 0x440357
int64_t function_440354(void) {
    // 0x440354
    int64_t result; // 0x440354
    return result;
}

// Address range: 0x440369 - 0x44036a
int64_t function_440369(void) {
    // 0x440369
    int64_t result; // 0x440369
    return result;
}

// Address range: 0x440374 - 0x440376
int64_t function_440374(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x440374
    return a3 & 0xffffffff;
}

// Address range: 0x440388 - 0x440389
int64_t function_440388(void) {
    // 0x440388
    int64_t result; // 0x440388
    return result;
}

// Address range: 0x4403bf - 0x4403c0
int64_t function_4403bf(void) {
    // 0x4403bf
    int64_t result; // 0x4403bf
    return result;
}

// Address range: 0x4403d1 - 0x44040c
int64_t function_4403d1(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __asm_sti(); // 0x4403f4
    __asm_outsd((int16_t)a3, (int32_t)a2);
    bool v2; // 0x4403d1
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = a2; // 0x4403fb
    int64_t v5 = a1; // 0x4403fb
    int64_t v6 = v1; // 0x4403fc
    bool v7; // 0x4403d1
    bool v8; // 0x4403d1
    if (v8 || v7) {
        v6 = function_440388();
    }
    unsigned char v9 = (char)v6;
    unsigned char v10 = v9 - 6; // 0x4403fe
    int64_t v11 = v6 & -256; // 0x4403fe
    *(char *)v5 = *(char *)v4;
    v4 += v3;
    v5 += v3;
    while (v9 < 6) {
        // 0x4403fc
        v6 = v11 | (int64_t)v10;
        if (v10 == 0 || v9 < 6) {
            v6 = function_440388();
        }
        // 0x4403fe
        v9 = (char)v6;
        v10 = v9 - 6;
        v11 = v6 & -256;
        *(char *)v5 = *(char *)v4;
        v4 += v3;
        v5 += v3;
    }
    char v12 = v9 < 6; // 0x440403
    unsigned char v13 = v9 + 65 + v12; // 0x440403
    int64_t result = v11 | (int64_t)v13; // 0x440403
    if (v13 == 0 || (v9 < 6 ? v13 <= v10 : v10 > 184)) {
        // 0x440409
        return result;
    }
    int64_t result2 = result; // 0x440407
    if (v13 < 0 == (v13 + v12 & v9 + 122) < 0) {
        result2 = function_4403bf();
    }
    // 0x440409
    return result2;
}

// Address range: 0x44041a - 0x44041b
int64_t function_44041a(void) {
    // 0x44041a
    int64_t result; // 0x44041a
    return result;
}

// Address range: 0x440567 - 0x44056f
int64_t function_440567(void) {
    // 0x440567
    return function_440519();
}

// Address range: 0x440583 - 0x4405cb
int64_t function_440583(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x5766ce84); // 0x440583
    int64_t v2; // 0x440583
    *v1 = *v1 + (int32_t)v2;
    uint32_t v3 = (int32_t)v2; // 0x44058a
    int64_t v4; // 0x440583
    uint32_t v5 = *(int32_t *)&v4; // 0x44058a
    int32_t v6 = v3 - v5; // 0x44058a
    unsigned char v7 = llvm_ctpop_i8((char)v6); // 0x44058a
    bool v8; // 0x440583
    int64_t v9 = v8 ? 0xfffffffc : 4; // 0x44058a
    int64_t v10 = v2 & -0xff01 | (int64_t)&g1; // 0x44058c
    uint64_t v11 = 256 * (64 * (int64_t)(v6 == 0) | (int64_t)(v5 > v3) | 128 * (int64_t)(v6 < 0) | 16 * (int64_t)(v3 % 16 - v5 % 16 > 15) | 4 * (int64_t)(v7 % 2 == 0)) | 512; // 0x44058e
    int64_t v12; // 0x440583
    *(int32_t *)a4 = *(int32_t *)&v12 ^ (int32_t)v10;
    int64_t v13 = 2 * a3; // 0x440599
    char v14 = v2;
    char v15 = v14 & -68; // 0x44059d
    char v16 = v15 - 84; // 0x44059d
    int64_t v17 = v2 & -0x10000 | (int64_t)v16 | v11; // 0x44059d
    int64_t v18 = a4 & -256 | (int64_t)(v16 < 0 != ((v16 ^ v14) & v15 + 44) < 0); // 0x44059f
    unsigned char v19 = *(char *)v18; // 0x4405a2
    char v20 = *(char *)(v10 + 0x6c08cd6e); // 0x4405a4
    uint32_t v21 = (int32_t)v18 - *(int32_t *)v17; // 0x4405ab
    int64_t v22 = v21; // 0x4405ab
    int64_t v23 = v17 & -0xff04; // 0x4405ae
    int64_t v24 = 256 * (int64_t)(*(char *)v22 ^ (char)(v11 / 256)) | v23; // 0x4405ae
    uint32_t v25 = *(int32_t *)v24; // 0x4405b0
    char * v26 = (char *)(v22 + 0x601e3f0); // 0x4405b3
    char v27 = *v26; // 0x4405b3
    *v26 = v27 + (char)((int64_t)&g1 >> 8) + (char)(v25 > -1 - (int32_t)(v9 + a1));
    int64_t v28; // 0x440583
    *(char *)a2 = *(char *)&v28 & (char)v13;
    char * v29 = (char *)(v2 + 0xaa77ad15); // 0x4405bd
    *v29 = *v29 ^ (char)((int64_t)&g1 >> 8);
    int32_t * v30 = (int32_t *)(v2 + 0x405370c1 + (v13 & 254 | a3 & -0x10000 | 256 * (int64_t)((char)(a3 / 256) - v20 + (char)(v19 > (char)(a4 / 256))))); // 0x4405c0
    *v30 = *v30 ^ v21;
    return v24 & -256 | v23 + 232 & 252;
}

// Address range: 0x4405cb - 0x440615
int64_t function_4405cb(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x4405cb
    unsigned char v3 = (char)(v2 / 256); // 0x4405cc
    unsigned char v4 = v3 + (char)a3; // 0x4405cc
    int64_t result = 256 * (int64_t)v4 | v2 & -0xff01; // 0x4405cc
    int16_t v5 = a3; // 0x4405ce
    __asm_out(v5, (char)v2);
    unsigned char v6 = (char)v2;
    unsigned char v7 = (char)(v4 < v3) + (char)(a4 / 256); // 0x4405cf
    char v8 = v6 - v7; // 0x4405cf
    *(char *)v2 = v8;
    if (v7 <= v6) {
        // 0x4405ee
        __asm_out_133(8, (int32_t)result);
        __asm_hlt();
        int32_t * v9 = (int32_t *)(a3 - 0x75af30a0); // 0x4405fb
        *v9 = *v9 & (int32_t)a5;
        __asm_outsb(v5, *(char *)&v1);
        return __asm_sti();
    }
    int64_t v10 = a4 - 1; // 0x4405d3
    if (v10 != 0 == v8 == 0) {
        // 0x4405ed
        return result;
    }
    int64_t v11 = __asm_hlt(); // 0x4405d6
    char * v12 = (char *)(a4 + 0x7d5c4b06); // 0x4405e4
    *v12 = *v12 ^ (char)(a3 / 256);
    return v10 == 0 ? v11 : a3 & 0xffffffff;
}

// Address range: 0x440623 - 0x440627
int64_t function_440623(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x440623
    int64_t v1; // 0x440623
    int16_t v2 = v1; // 0x440625
    int16_t v3 = (int16_t)a4 % 256; // 0x440625
    return v1 & -0x10000 | (int64_t)(v2 / v3 % 256) | (int64_t)(256 * (v2 % v3));
}

// Address range: 0x440638 - 0x44063b
int64_t function_440638(int64_t a1, int64_t a2, int64_t a3) {
    // 0x440638
    return a3 & 0xffffffff;
}

// Address range: 0x440867 - 0x440872
int64_t function_440867(void) {
    // 0x440867
    int64_t result; // 0x440867
    int64_t v1; // 0x440867
    if ((v1 & 0xbe2dfbe1) != 0) {
        result = function_440804();
    }
    // 0x440872
    return result;
}

// Address range: 0x4408dd - 0x440a4b
int64_t function_4408dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6;
    int64_t v2; // 0x4408dd
    *(int32_t *)0x5a610cc95f793906 = (int32_t)v2;
    int64_t v3 = a3 & -256 | (int64_t)(*(char *)(v2 - 0x58ef4fa0) + (char)a3); // 0x44093f
    int64_t v4 = v2 & -256 | (int64_t)__asm_in((int16_t)v3); // 0x440945
    int64_t v5 = a5; // 0x440945
    int64_t v6 = v3; // 0x440945
    int64_t v7 = (int64_t)&v1; // 0x440945
    int64_t v8 = a2; // 0x440945
    int64_t v9 = a1; // 0x440945
    int64_t v10 = v4;
    int64_t result = v10; // 0x440949
    while (v5 == 1) {
        int64_t v11 = v7;
        uint64_t v12 = v6;
        result = v10;
        if (v11 <= (int64_t)*(int32_t *)(v12 - 8)) {
            // break -> 0x440915
            break;
        }
        int64_t v13 = v9;
        int64_t v14 = v8;
        int64_t v15; // 0x4408dd
        int64_t v16 = v15;
        int64_t v17; // 0x4408dd
        int64_t v18 = v17;
        char v19 = __asm_insb((int16_t)v12); // 0x44097d
        char * v20 = (char *)v13;
        *v20 = v19;
        int64_t * v21 = (int64_t *)v11; // 0x44097e
        uint64_t v22 = *v21; // 0x44097e
        bool v23; // 0x4408dd
        int64_t v24; // 0x4408dd
        int64_t v25; // 0x4408dd
        int64_t v26; // 0x4408dd
        int64_t v27; // 0x4408dd
        int64_t v28; // 0x4408dd
        if (*(char *)(v12 + 94) >= (char)(v12 / 256)) {
            int32_t * v29 = (int32_t *)v13; // 0x4409d2
            uint32_t v30 = *v29; // 0x4409d2
            *v29 = v30 + 103;
            int64_t v31 = *(int64_t *)(v11 + 8) - (v30 < 0xffffff99 ? 0xb0629c78 : 0xb0629c77); // 0x4409d6
            unsigned char v32 = llvm_ctpop_i8((char)v22); // 0x4409db
            v23 = false;
            v24 = v31;
            v5 = 0;
            v6 = v22;
            v26 = v18;
            v28 = v11 + 16;
            int16_t v33; // 0x4408dd
            v25 = v33;
            v8 = v14;
            v27 = v13;
            if (v32 % 2 != 0) {
                // 0x4409df
                *v20 = __asm_insb((int16_t)((int32_t)v31 >> 31));
                abort();
                // UNREACHABLE
            }
        } else {
            // 0x440981
            *v21 = 0;
            __asm_out_134(95, (char)v14);
            v23 = (int32_t)v13 < (int32_t)&g2;
            v24 = v14;
            v5 = (int64_t)&g2;
            v6 = v22 & -256 | v18 % 256;
            v26 = v22 % 256 | v18 & -256;
            v28 = v11;
            v25 = v16;
            v8 = v10 & 0xffffffff;
            v27 = v13 - (int64_t)&g2 & 0xffffffff;
        }
        int64_t v34 = v25;
        v9 = v24 & 0xffffffff;
        v7 = v28 - 8;
        *(int64_t *)v7 = v28;
        v4 = v27 & 0xffffffff;
        int32_t * v35 = (int32_t *)(v34 + 43); // 0x440993
        int32_t v36 = *v35; // 0x440993
        int32_t v37 = (int32_t)v26 + (int32_t)v23; // 0x440993
        int32_t v38 = v36 - v37; // 0x440993
        *v35 = v38;
        v17 = v26;
        v15 = v34;
        if (v38 != 0) {
            // 0x440999
            result = v4;
            if (v36 <= v37) {
                char * v39 = (char *)v9; // 0x4409a3
                *v39 = *v39 - ((char)v34 > 142 ? -20 : -21);
                return (v34 + 113) % 256 | v34 & 0xffffff00;
            }
            return result;
        }
        v10 = v4;
        result = v10;
    }
  lab_0x440915:
    // 0x440915
    return result;
}

// Address range: 0x47c230 - 0x47c241
int64_t function_47c230(int64_t a1, int64_t a2) {
    // 0x47c230
    int64_t v1; // 0x47c230
    *(int32_t *)0x3c01631ad47a738a = (int32_t)v1;
    int32_t * v2 = (int32_t *)(4 * a2 + 94 + v1); // 0x47c23a
    int32_t v3 = *v2 + (int32_t)v1; // 0x47c23a
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x47c23a
    *v2 = v3;
    int64_t result; // 0x47c230
    if (v4 % 2 == 0) {
        result = function_47c200();
    }
    // 0x47c241
    return result;
}

// Address range: 0x47c258 - 0x47c25b
int64_t function_47c258(void) {
    // 0x47c258
    int64_t result; // 0x47c258
    return result;
}

// Address range: 0x47c282 - 0x47c287
int64_t function_47c282(void) {
    // 0x47c282
    return function_ffffffffe0097295();
}

// Address range: 0x47c2c0 - 0x47c2d9
int64_t function_47c2c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x47c2c0
    int64_t v1; // 0x47c2c0
    *(char *)a1 = (char)v1;
    return (int64_t)*(int32_t *)0x63e121517e7608a8;
}

// Address range: 0x47c33c - 0x47c33e
int64_t function_47c33c(void) {
    // 0x47c33c
    int64_t v1; // 0x47c33c
    return function_47c3ae(v1, v1, v1);
}

// Address range: 0x47c370 - 0x47c372
int64_t function_47c370(void) {
    // 0x47c370
    int64_t v1; // 0x47c370
    return function_47c3d5(v1);
}

// Address range: 0x47c391 - 0x47c394
int64_t function_47c391(int64_t a1) {
    // 0x47c391
    int64_t result; // 0x47c391
    return result;
}

// Address range: 0x47c3a1 - 0x47c3a4
int64_t function_47c3a1(void) {
    // 0x47c3a1
    int64_t result; // 0x47c3a1
    return result;
}

// Address range: 0x47c3ae - 0x47c3af
int64_t function_47c3ae(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47c3ae
    int64_t result; // 0x47c3ae
    return result;
}

// Address range: 0x47c3be - 0x47c3c0
int64_t function_47c3be(void) {
    // 0x47c3be
    return function_47c3ce();
}

// Address range: 0x47c3c8 - 0x47c3ce
int64_t function_47c3c8(int64_t a1, int64_t a2) {
    // 0x47c3c8
    int64_t v1; // 0x47c3c8
    return v1 & 0xffffffff;
}

// Address range: 0x47c3ce - 0x47c3d3
int64_t function_47c3ce(void) {
    // 0x47c3ce
    int64_t result; // 0x47c3ce
    return result;
}

// Address range: 0x47c3d5 - 0x47c3e6
int64_t function_47c3d5(int64_t a1) {
    // 0x47c3d5
    int64_t result; // 0x47c3d5
    char * v1 = (char *)(result + 0x14be51c9); // 0x47c3d8
    *v1 = *v1 + (char)(result / 256);
    return result;
}

// Address range: 0x47c42c - 0x47c42e
int64_t function_47c42c(void) {
    // 0x47c42c
    int64_t v1; // 0x47c42c
    return v1 & -256 | 51;
}

// Address range: 0x47c530 - 0x47c536
int64_t function_47c530(int64_t a1, int64_t a2) {
    // 0x47c530
    int64_t v1; // 0x47c530
    *(char *)a1 = (char)v1;
    return v1 & 0xffffffff;
}

// Address range: 0x47c542 - 0x47c547
int64_t function_47c542(void) {
    // 0x47c542
    return function_ffffffffd82aee7c();
}

// Address range: 0x47c588 - 0x47c58e
int64_t function_47c588(void) {
    // 0x47c588
    int64_t result; // 0x47c588
    return result;
}

// Address range: 0x47c595 - 0x47c59f
int64_t function_47c595(void) {
    // 0x47c595
    return function_4cd2b4ca();
}

// Address range: 0x47c5b6 - 0x47c5c0
int64_t function_47c5b6(int64_t a1) {
    // 0x47c5b6
    int64_t v1; // 0x47c5b6
    return v1 & -165;
}

// Address range: 0x47c600 - 0x47c602
int64_t function_47c600(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47c600
    int64_t result; // 0x47c600
    return result;
}

// Address range: 0x47c621 - 0x47c627
int64_t function_47c621(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47c621
    int64_t v1; // 0x47c621
    __asm_outsb((int16_t)a3, (char)v1);
    return function_5edf7c3d();
}

// Address range: 0x47c638 - 0x47c64c
int64_t function_47c638(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)*(int32_t *)(a3 + 0x2de5ba4); // 0x47c638
    int64_t v2 = -0x5b70afe1 * v1; // 0x47c638
    __asm_out_134(127, (char)v2);
    bool v3; // 0x47c638
    if (v3 == (v2 != -0x5b70afe100000000 * v1 >> 32)) {
        // 0x47c6ae
        return v2 & 0xffffffff;
    }
    // 0x47c646
    int64_t v4; // 0x47c638
    return v4 & 0xffffffff;
}

// Address range: 0x47c653 - 0x47c65f
int64_t function_47c653(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47c653
    int64_t v1; // 0x47c653
    int64_t result = function_47c6ba(a1, a2, a3, v1 & 0xffffffff, (a4 + 120) % 256 | a4 & 0xffffff00, (int64_t)&g3, (int64_t)&g3, (int64_t)&g3, (int64_t)&g3); // 0x47c65d
    return result;
}

// Address range: 0x47c68e - 0x47c6a8
int64_t function_47c68e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47c68e
    int64_t v1; // 0x47c68e
    unsigned char v2 = *(char *)(v1 % 256 + v1); // 0x47c68e
    int64_t result = v1 & -256 | (int64_t)v2; // 0x47c68e
    bool v3; // 0x47c68e
    if (!v3) {
        // 0x47c6aa
        return result;
    }
    int32_t * v4 = (int32_t *)(a1 - 0x37aa15d2); // 0x47c693
    *v4 = *v4 + (int32_t)v1;
    char * v5 = (char *)(v1 - 0x43d3a7c0); // 0x47c699
    *v5 = *v5 + v2;
    int32_t v6 = *(int32_t *)(a4 - 100 + (2 * (result & a2) & 0x1fffffffe)); // 0x47c6a1
    return v6 ^ (int32_t)result;
}

// Address range: 0x47c6a9 - 0x47c6aa
int64_t function_47c6a9(int64_t a1, int64_t a2) {
    // 0x47c6a9
    int64_t result; // 0x47c6a9
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x47c6ba - 0x47c745
int64_t function_47c6ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x47c6ba
    int64_t v1; // 0x47c6ba
    int64_t v2 = v1;
    __asm_out_133(2, (int32_t)v2);
    bool v3; // 0x47c6ba
    if (*(int64_t *)(a2 + 0x2df7eca7 + v1) + v1 != (int64_t)v3) {
        // 0x47c6c6
        return function_ffffffffd75f18ae();
    }
    unsigned char v4 = *(char *)(v2 + 17) + (char)v2; // 0x47c72b
    if ((int32_t)a2 >= (int32_t)a1) {
        // 0x47c71f
        return v2 & -256 | (int64_t)v4;
    }
    int64_t v5 = v3 ? -4 : 4; // 0x47c72e
    int64_t v6 = v5 + a2; // 0x47c72e
    int16_t v7 = a3; // 0x47c731
    int32_t * v8 = (int32_t *)v6;
    __asm_outsd(v7, *v8);
    int64_t result = (int64_t)*v8; // 0x47c734
    if (a4 != 1 == v4 == 30) {
        // 0x47c6d0
        return result;
    }
    int64_t v9 = v6 + v5; // 0x47c734
    __asm_outsb(v7, *(char *)v9);
    __asm_outsd(v7, *(int32_t *)v9);
    return (v4 < 30 ? 0x2b7147e6 : 0x2b7147e5) + result & 0xffffffff;
}

// Address range: 0x47c765 - 0x47c7ae
int64_t function_47c765(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47c765
    int64_t v1; // 0x47c765
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(a3 + 0x2107727f); // 0x47c76f
    *v3 = *v3 & v2;
    int64_t v4 = __asm_iretd(); // 0x47c776
    char * v5 = (char *)(8 * v1 + 85 + (256 * v2 & 0xff00 | v2)); // 0x47c79f
    *v5 = *v5 ^ (char)v4;
    *(char *)a1 = __asm_insb((int16_t)((int32_t)v4 >> 31));
    return function_ffffffffef8911a1();
}

// Address range: 0x47c80e - 0x47c811
int64_t function_47c80e(int64_t a1) {
    // 0x47c80e
    int64_t result; // 0x47c80e
    return result;
}

// Address range: 0x47c81a - 0x47c823
int64_t function_47c81a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = a4 & 0xffffffff; // 0x47c81a
    int32_t * v1 = (int32_t *)(a1 - 121 + result); // 0x47c81b
    int64_t v2; // 0x47c81a
    *v1 = *v1 ^ (int32_t)v2;
    return result;
}

// Address range: 0x47ca30 - 0x47ca31
int64_t function_47ca30(void) {
    // 0x47ca30
    int64_t result; // 0x47ca30
    return result;
}

// Address range: 0x47ca46 - 0x47ca49
int64_t function_47ca46(int64_t a1) {
    // 0x47ca46
    int64_t result; // 0x47ca46
    return result;
}

// Address range: 0x47caa8 - 0x47caad
int64_t function_47caa8(void) {
    // 0x47caa8
    int64_t result; // 0x47caa8
    return result;
}

// Address range: 0x47cabf - 0x47cb59
int64_t function_47cabf(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x47cabf
    int64_t v1; // 0x47cabf
    bool v2; // 0x47cabf
    if (v2) {
        unsigned char v3 = *(char *)(v1 - 0x4dda47d4); // 0x47cac1
        char * v4 = (char *)(v1 & -0x10000 | a2 % 256 | 256 * (int64_t)v3); // 0x47cacb
        *v4 = (char)v2 - (char)a2 + *v4;
        return function_69091ebd();
    }
    if (!v2) {
        // 0x47caee
        return __asm_in_136(-19);
    }
    uint64_t v5 = (0x100000000 * v1 >> 32) * (0x100000000 * v1 >> 32); // 0x47cb2a
    uint64_t v6 = v5 / 0x100000000; // 0x47cb2a
    int64_t result = v5 & 0xffffffff; // 0x47cb2a
    char * v7 = (char *)(result + 109 + 4 * result); // 0x47cb2c
    char v8 = *v7; // 0x47cb2c
    char v9 = v6; // 0x47cb2c
    char v10 = v8 + v9; // 0x47cb2c
    *v7 = v10;
    if (v10 < 0 == ((v10 ^ v8) & (v10 ^ v9)) < 0) {
        // 0x47cb32
        return result;
    }
    char * v11 = (char *)v6; // 0x47cb54
    *v11 = *v11 ^ v9;
    return result;
}

// Address range: 0x47cb70 - 0x47cb71
int64_t function_47cb70(void) {
    // 0x47cb70
    int64_t result; // 0x47cb70
    return result;
}

// Address range: 0x47cbd5 - 0x47cbdb
int64_t function_47cbd5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47cbd5
    int64_t v1; // 0x47cbd5
    *(char *)a4 = (char)v1;
    return function_47cb70();
}

// Address range: 0x47cc03 - 0x47cc06
int64_t function_47cc03(void) {
    // 0x47cc03
    int64_t result; // 0x47cc03
    return result;
}
