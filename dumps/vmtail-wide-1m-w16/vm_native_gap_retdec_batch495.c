/*
 * Targeted RetDec C for native executable gap queue batch 495.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x274441-0x274641 rank=- name=- kind=- bytes=- uncovered=-
 *   0x274641-0x274841 rank=- name=- kind=- bytes=- uncovered=-
 *   0x274841-0x274a41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x274a41-0x274c41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x274c41-0x274e41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e6296-0x3e6496 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e6496-0x3e6696 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e6696-0x3e6896 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_274441(void);
int64_t function_274442(void);
int64_t function_274492(void);
int64_t function_2744a3(void);
int64_t function_2744bf(int64_t a1);
int64_t function_2744c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_274514(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_27467c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2747ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_274904(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_274a2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_274bac(int64_t a1, int64_t a2, int64_t a3);
int64_t function_274ce5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e6296(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e629d(void);
int64_t function_3e62d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e62e0(void);
int64_t function_3e6304(void);
int64_t function_3e6350(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e6382(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e63ca(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e63d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e63f5(void);
int64_t function_3e641c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e6531(void);
int64_t function_3e6544(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e6560(int64_t a1, int64_t a2);
int64_t function_3e6584(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e6658(void);
int64_t function_3e6677(void);
int64_t function_3e668c(void);
int64_t function_3e66ba(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_3e6718(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e6726(int64_t a1);
int64_t function_3e676a(void);
int64_t function_3e678c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4ce6a35b();
int64_t function_529345e2();
int64_t function_565ef748();
int64_t function_5bfd0afb();
int64_t function_743dd842();
int64_t function_cf3c7();
int64_t function_e0dab4e();
int64_t unknown_6860b1c();

// Address range: 0x274441 - 0x274442
int64_t function_274441(void) {
    // 0x274441
    int64_t result; // 0x274441
    return result;
}

// Address range: 0x274442 - 0x27444a
int64_t function_274442(void) {
    // 0x274442
    int64_t result; // 0x274442
    *(char *)(result + 0x1e8d814) = -1;
    return result;
}

// Address range: 0x274492 - 0x274495
int64_t function_274492(void) {
    // 0x274492
    int64_t result; // 0x274492
    return result;
}

// Address range: 0x2744a3 - 0x2744a6
int64_t function_2744a3(void) {
    // 0x2744a3
    return function_274492();
}

// Address range: 0x2744bf - 0x2744c1
int64_t function_2744bf(int64_t a1) {
    // 0x2744bf
    int64_t result; // 0x2744bf
    return result;
}

// Address range: 0x2744c2 - 0x2744d1
int64_t function_2744c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2744c2
    int64_t result; // 0x2744c2
    int64_t v1 = result;
    *(char *)v1 = (char)(v1 & a4);
    return result;
}

// Address range: 0x274514 - 0x27467c
int64_t function_274514(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    unsigned char v1 = (char)a4;
    unsigned char v2 = v1 % 32; // 0x274514
    if (v2 != 0) {
        *(char *)a4 = v1 << v2;
    }
    int64_t v3 = unknown_6860b1c(); // 0x274516
    char * v4 = (char *)(v3 + 0x68579c00); // 0x27451b
    *v4 = *v4 + (char)v3;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v5; // bp-32, 0x274514
    int64_t v6 = (int64_t)&v5; // 0x2745db
    int64_t v7 = v6 + 16; // 0x2745e2
    *(int64_t *)v7 = a7;
    v5 = 0x1053e9d;
    int64_t v8 = v6 - 8; // 0x274619
    int64_t * v9 = (int64_t *)v8; // 0x274622
    *(int64_t *)(v6 + 32) = v5;
    *v9 = v6;
    v5 = v7;
    int64_t v10 = v6 + 8; // 0x274659
    v5 = *(int64_t *)v10;
    *(int64_t *)(v6 - 16) = v8;
    *v9 = v10;
    return function_cf3c7(a1, a2, a3, a4, a5, a6, 0x1a3dd100);
}

// Address range: 0x27467c - 0x2747ca
int64_t function_27467c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x27467c
    int64_t v1; // bp-56, 0x27467c
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x27467c
    return function_cf3c7(a1, a2, 0x272318, a4, v2, v2, 0x7240e907);
}

// Address range: 0x2747ca - 0x274904
int64_t function_2747ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2747ca
    int64_t v1; // 0x2747ca
    return function_cf3c7(a1, a2, a3, 0x12e34d0a, a5, v1, 0x64bef23e);
}

// Address range: 0x274904 - 0x274a2e
int64_t function_274904(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x274904
    int64_t v1; // bp-48, 0x274904
    int64_t v2 = (int64_t)&v1; // 0x2749b0
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x2749b9
    bool v4; // 0x274904
    *v3 = 0x4000 * (int64_t)v4 | 2048 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4 | 2;
    int64_t v5 = v2 + 16; // 0x2749bc
    *(int64_t *)v5 = v1;
    v1 = 0x4e5fc209;
    *v3 = 0x94c2e3c;
    *(int64_t *)(v2 - 16) = a1;
    *(int64_t *)(v2 + 32) = v1;
    int64_t v6 = v2 + 8; // 0x2749d1
    int64_t * v7 = (int64_t *)v6; // 0x2749d5
    int64_t v8 = *v7; // 0x2749d5
    v1 = v8;
    *v3 = a5;
    v1 ^= v8 ^ v5;
    v1 = *v7;
    *v3 = v6;
    int64_t v9; // 0x274904
    return function_cf3c7(a1, a2, 0x27276c, v9, *v3, v9, 0x1ee59706);
}

// Address range: 0x274a2e - 0x274bac
int64_t function_274a2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x272996; // bp-32, 0x274b3b
    int64_t v2; // 0x274a2e
    return function_cf3c7(a1, a2, a3, a4, a5, v2, (int64_t)&v1);
}

// Address range: 0x274bac - 0x274ce5
int64_t function_274bac(int64_t a1, int64_t a2, int64_t a3) {
    // 0x274bac
    int64_t v1; // bp-24, 0x274bac
    int64_t v2 = (int64_t)&v1; // 0x274bec
    v1 = 0x272bc0;
    int64_t * v3 = (int64_t *)(v2 - 16); // 0x274c0c
    int64_t * v4 = (int64_t *)(v2 - 24); // 0x274c13
    *v3 = 0x347f26ca;
    *v4 = 0xc093ef6;
    int64_t * v5 = (int64_t *)(v2 - 32); // 0x274c32
    int64_t v6 = *(int64_t *)(v2 + 16); // 0x274c38
    *v4 = v6;
    *v5 = v6;
    *v4 = v1;
    int64_t * v7 = (int64_t *)(v2 - 40); // 0x274c55
    *v3 = v6;
    *v5 = 0x753b5727;
    *v7 = 0x11ec9e01;
    *(int64_t *)(v2 - 48) = v1;
    v1 = *v5;
    int64_t v8 = *v4; // 0x274ca5
    *v5 = v8;
    *v7 = v8;
    *v4 = v2 - 8;
    int64_t v9; // 0x274bac
    return function_cf3c7(v9, a2, a3, v9, v9, v9, 169);
}

// Address range: 0x274ce5 - 0x274e32
int64_t function_274ce5(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x66e03f39; // bp-32, 0x274d53
    int64_t v2 = (int64_t)&v1; // 0x274d9a
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x274da2
    *v3 = 0x47b01a32;
    int64_t * v4 = (int64_t *)(v2 - 24); // 0x274dab
    *v4 = a1;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x274daf
    *v5 = a3;
    int64_t v6 = v2 + 8; // 0x274db8
    *(int64_t *)v6 = *v3;
    *(int64_t *)(v2 + 24) = *v3;
    *v5 = v6;
    *v4 = *v3;
    *v3 = v1;
    *v5 = v1;
    int64_t v7; // 0x274ce5
    return function_cf3c7(*v4, a2, v7, v7, v7, v7, v1);
}

// Address range: 0x3e6296 - 0x3e629b
int64_t function_3e6296(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e6296
    int64_t v1; // 0x3e6296
    return v1 & -256 | (int64_t)__asm_in(2);
}

// Address range: 0x3e629d - 0x3e629e
int64_t function_3e629d(void) {
    // 0x3e629d
    int64_t result; // 0x3e629d
    return result;
}

// Address range: 0x3e62d4 - 0x3e62e0
int64_t function_3e62d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e62d4
    int64_t v1; // 0x3e62d4
    *(char *)a1 = *(char *)&v1 + (char)a4;
    int64_t result; // 0x3e62d4
    return result;
}

// Address range: 0x3e62e0 - 0x3e62e1
int64_t function_3e62e0(void) {
    // 0x3e62e0
    int64_t result; // 0x3e62e0
    return result;
}

// Address range: 0x3e6304 - 0x3e630a
int64_t function_3e6304(void) {
    // 0x3e6304
    return function_3e62e0();
}

// Address range: 0x3e6350 - 0x3e635b
int64_t function_3e6350(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 0x72e5d290); // 0x3e6350
    *v1 = *v1 ^ 0x65181b31;
    int64_t result; // 0x3e6350
    return result;
}

// Address range: 0x3e6382 - 0x3e63b0
int64_t function_3e6382(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e6382
    int64_t result; // 0x3e6382
    // 0x3e6384
    __asm_out((int16_t)a3, (char)result);
    char * v1 = (char *)(a3 - 65); // 0x3e6386
    *v1 = *v1 - (char)a4;
    return result;
}

// Address range: 0x3e63ca - 0x3e63d2
int64_t function_3e63ca(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e63ca
    bool v1; // 0x3e63ca
    int64_t v2 = v1 ? -1 : 1; // 0x3e63ca
    return function_4ce6a35b(v2 + a1, (int32_t)(v2 + a2) - (int32_t)a3);
}

// Address range: 0x3e63d3 - 0x3e63e6
int64_t function_3e63d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e63d3
    int64_t v1; // 0x3e63d3
    bool v2; // 0x3e63d3
    *(int32_t *)v1 = (int32_t)v2;
    unsigned char v3 = llvm_ctpop_i8((char)v1 - (char)a2); // 0x3e63d5
    *(char *)(a2 + 0x4be01d3c) = (char)(v3 % 2 != 0);
    return function_e0dab4e();
}

// Address range: 0x3e63f5 - 0x3e63f6
int64_t function_3e63f5(void) {
    // 0x3e63f5
    int64_t result; // 0x3e63f5
    return result;
}

// Address range: 0x3e641c - 0x3e6455
int64_t function_3e641c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e641e
    __asm_int(-48);
    uint32_t v1 = *(int32_t *)(a1 - 97); // 0x3e642a
    int64_t v2; // 0x3e641c
    uint32_t v3 = (int32_t)v2 + (int32_t)a4 + (int32_t)(v1 > -1 - ((int32_t)v2 + (int32_t)a1)); // 0x3e642d
    int64_t v4 = v2 & 0xffffffff; // 0x3e6431
    if (llvm_ctpop_i8((char)v3) % 2 == 0) {
        v4 = function_3e63f5();
    }
    int64_t v5 = v4;
    __asm_out_133(2, (int32_t)v5);
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v6; // 0x3e641c
    int64_t v7 = -1 - (int32_t)(int64_t)&v6 < (int32_t)v2 ? 0xf8080e85 : 0xf8080e84; // 0x3e6440
    return (v5 - 256 * (int64_t)v3 & 0xff00 | v5 & 0xffff00ff) + v7 & 0xffffffff;
}

// Address range: 0x3e6531 - 0x3e6534
int64_t function_3e6531(void) {
    // 0x3e6531
    int64_t result; // 0x3e6531
    return result;
}

// Address range: 0x3e6544 - 0x3e655f
int64_t function_3e6544(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e6544
    int64_t v1; // 0x3e6544
    int64_t v2 = v1 + 0x3da4f9b1 & 0xffffff00 | (int64_t)__asm_in(-84); // 0x3e654c
    bool v3; // 0x3e6544
    int64_t * v4 = (int64_t *)(v1 + 25 + (int64_t)v3 & 0xffffffff); // 0x3e6550
    __asm_rcl(*(int32_t *)(v2 - 0x7720fda7));
    int64_t v5; // 0x3e6544
    return (int64_t)((int32_t)v2 - *(int32_t *)&v5);
}

// Address range: 0x3e6560 - 0x3e6581
int64_t function_3e6560(int64_t a1, int64_t a2) {
    // 0x3e6560
    int64_t v1; // 0x3e6560
    char v2 = *(char *)(((uint64_t)v1 % 256 | a2 & -256) + 0x3e585f2e); // 0x3e6574
    int32_t * v3 = (int32_t *)(256 * (int64_t)(v2 ^ 14) | 0x236c00f4); // 0x3e657a
    *v3 = *v3 & ((int32_t)v1 ^ 113);
    return function_565ef748();
}

// Address range: 0x3e6584 - 0x3e658b
int64_t function_3e6584(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e6584
    return function_5bfd0afb();
}

// Address range: 0x3e6658 - 0x3e6659
int64_t function_3e6658(void) {
    // 0x3e6658
    int64_t result; // 0x3e6658
    return result;
}

// Address range: 0x3e6677 - 0x3e6678
int64_t function_3e6677(void) {
    // 0x3e6677
    int64_t result; // 0x3e6677
    return result;
}

// Address range: 0x3e668c - 0x3e6693
int64_t function_3e668c(void) {
    // 0x3e668c
    return function_529345e2();
}

// Address range: 0x3e66ba - 0x3e66e6
int64_t function_3e66ba(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x3e66ba
    int64_t v1; // 0x3e66ba
    *(char *)a2 = -(char)v1;
    char v2 = v1; // 0x3e66be
    char v3 = v2 + 48; // 0x3e66be
    int64_t v4 = v3; // 0x3e66c0
    if (v3 < 0 == (v3 & (v2 ^ -128)) < 0 == (v3 != 0)) {
        v4 = function_3e6658();
    }
    // 0x3e66c2
    __asm_out((int16_t)a3, (char)v4);
    if ((char)((a6 + 0x5b8c) / 256) + (char)(a4 / 256) >= 0) {
        function_3e6677();
    }
    // 0x3e66e1
    return function_743dd842();
}

// Address range: 0x3e6718 - 0x3e6724
int64_t function_3e6718(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = *(int32_t *)-0x148097b3; // 0x3e6718
    bool v2; // 0x3e6718
    *(int32_t *)-0x148097b3 = v1 / 0x20000 | 0x10000 * v1 | 0x8000 * (int32_t)v2;
    int64_t result; // 0x3e6718
    return result;
}

// Address range: 0x3e6726 - 0x3e672e
int64_t function_3e6726(int64_t a1) {
    // 0x3e6726
    int64_t result; // 0x3e6726
    return result;
}

// Address range: 0x3e676a - 0x3e6775
int64_t function_3e676a(void) {
    // 0x3e676a
    int64_t v1; // 0x3e676a
    uint64_t v2 = v1;
    return (v2 & 0xffffff00 | (int64_t)*(char *)(v2 % 256 + v1)) ^ 0x6e920c8f;
}

// Address range: 0x3e678c - 0x3e6864
int64_t function_3e678c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e678c
    int64_t v1; // 0x3e678c
    uint32_t v2 = 0x10000 * (int32_t)v1 >> 16; // 0x3e678c
    int64_t v3 = v2; // 0x3e678c
    bool v4; // 0x3e678c
    int64_t v5 = (v3 & 0xff00) + a4 & 0xff00 | v3 & 0xffff00ff; // 0x3e6818
    uint32_t v6 = (int32_t)a4 % 32; // 0x3e681a
    if (v6 != 0) {
        int32_t * v7 = (int32_t *)v5; // 0x3e681a
        *v7 = *v7 >> v6;
    }
    __asm_out_133(-112, (int32_t)v5);
    char v8 = *(char *)((v4 ? -4 : 4) + a2); // 0x3e6820
    return v5 & 0xffffff00 | (int64_t)((char)v2 - v8);
}
