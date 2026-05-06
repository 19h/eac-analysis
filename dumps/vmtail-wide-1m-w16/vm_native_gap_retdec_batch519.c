/*
 * Targeted RetDec C for native executable gap queue batch 519.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2ff41e-0x2ff61e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ff61e-0x2ff81e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ff81e-0x2ffa1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x31f8bb-0x31fabb rank=- name=- kind=- bytes=- uncovered=-
 *   0x31fabb-0x31fcbb rank=- name=- kind=- bytes=- uncovered=-
 *   0x31fcbb-0x31febb rank=- name=- kind=- bytes=- uncovered=-
 *   0x31febb-0x3200bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3200bb-0x3202bb rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_124af975();
int64_t function_217faeb();
int64_t function_2ff41e(void);
int64_t function_2ff42f(int64_t a1);
int64_t function_2ff434(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ff445(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ff458(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2ff4dd(void);
int64_t function_2ff501(void);
int64_t function_2ff51b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ff544(void);
int64_t function_2ff551(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ff559(int64_t a1);
int64_t function_2ff59f(void);
int64_t function_2ff5cd(void);
int64_t function_2ff5ed(void);
int64_t function_2ff5f0(void);
int64_t function_2ff62f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ff648(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ff68d(void);
int64_t function_2ff6bc(void);
int64_t function_2ff6cd(void);
int64_t function_2ff6d2(void);
int64_t function_2ff769(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ff797(int64_t a1);
int64_t function_2ff7ad(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2ff7f9(int64_t a1);
int64_t function_2ff821(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ff8be(int64_t a1);
int64_t function_2ff8d7(void);
int64_t function_2ff900(void);
int64_t function_2ff909(int64_t a1);
int64_t function_2ff920(void);
int64_t function_2ff92d(int64_t a1, int64_t a2);
int64_t function_2ff936(int64_t a1);
int64_t function_2ff967(void);
int64_t function_2ff973(void);
int64_t function_2ff9b1(void);
int64_t function_2ffa08(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_31f8bb(int64_t a1, int64_t a2);
int64_t function_31f985(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_31fad2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_31fc64(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31fdd2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_31ff28(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3200a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_320227(int64_t a1);
int64_t function_320232(void);
int64_t function_320245(void);
int64_t function_66ae2abc();
int64_t function_7531ddf8();
int64_t function_c823b();
int64_t function_ffffffffa438b5ce();
int64_t function_ffffffffb4bdb765();
int64_t function_ffffffffd2361535();
int64_t unknown_28338640();
int64_t unknown_3a9c8463();
int64_t unknown_3d31dfb9();
int64_t unknown_3f2df5d8();
int64_t unknown_68301087();
int64_t unknown_ffffffff8631f698();
int64_t unknown_ffffffff8b730f36();
int64_t unknown_ffffffffb2337635();
int64_t unknown_ffffffffbef7e998();
int64_t unknown_ffffffffbf83536c();
int64_t unknown_ffffffffc32ac87b();

// Address range: 0x2ff41e - 0x2ff41f
int64_t function_2ff41e(void) {
    // 0x2ff41e
    int64_t result; // 0x2ff41e
    return result;
}

// Address range: 0x2ff42f - 0x2ff430
int64_t function_2ff42f(int64_t a1) {
    // 0x2ff42f
    int64_t result; // 0x2ff42f
    return result;
}

// Address range: 0x2ff434 - 0x2ff438
int64_t function_2ff434(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ff434
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x2ff434
    return result;
}

// Address range: 0x2ff445 - 0x2ff44c
int64_t function_2ff445(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ff445
    int64_t result; // 0x2ff445
    return result;
}

// Address range: 0x2ff458 - 0x2ff4aa
int64_t function_2ff458(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2ff458
    bool v1; // 0x2ff458
    int64_t v2 = (v1 ? -1 : 1) + a2; // 0x2ff45a
    int64_t v3 = unknown_3a9c8463(); // 0x2ff45d
    *(char *)a1 = __asm_insb((int16_t)a3);
    uint16_t v4 = *(int16_t *)0x7ec7534901e8767c; // 0x2ff464
    int64_t v5 = v3 & 0xffffffff; // bp-8, 0x2ff46f
    int32_t * v6 = (int32_t *)(v2 - 88); // 0x2ff472
    *v6 = *v6 + (int32_t)(int64_t)&v5;
    char * v7 = (char *)(v2 & 0xffff0000 | (int64_t)v4); // 0x2ff477
    *v7 = (*v7 ^ (char)v4) + 86;
    char * v8 = (char *)(v5 + 1); // 0x2ff47e
    *v8 = *v8 + (char)(v4 / 256);
    int32_t v9 = unknown_68301087((v1 ? -4 : 4) + a1); // 0x2ff48a
    uint32_t v10 = v9 >> 31; // 0x2ff48a
    int64_t v11; // 0x2ff458
    char * v12 = (char *)(v11 + 0x2acf2c8b); // 0x2ff48b
    *v12 = *v12 + (char)(v10 / 256);
    int64_t v13 = unknown_ffffffffbef7e998(); // 0x2ff492
    unsigned char v14 = (char)v13 - 62; // 0x2ff49d
    __asm_out((int16_t)v10, v14);
    if (v14 != 0) {
        // 0x2ff48a
        return v13 & -256 | (int64_t)v14;
    }
    int32_t * v15 = (int32_t *)(v2 + 62); // 0x2ff4a2
    *v15 = *v15 + v9;
    return function_ffffffffd2361535();
}

// Address range: 0x2ff4dd - 0x2ff4e7
int64_t function_2ff4dd(void) {
    // 0x2ff4dd
    int64_t result; // 0x2ff4dd
    return result;
}

// Address range: 0x2ff501 - 0x2ff503
int64_t function_2ff501(void) {
    // 0x2ff501
    int64_t result; // 0x2ff501
    return result;
}

// Address range: 0x2ff51b - 0x2ff52a
int64_t function_2ff51b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ff51b
    int64_t result; // 0x2ff51b
    return result;
}

// Address range: 0x2ff544 - 0x2ff547
int64_t function_2ff544(void) {
    // 0x2ff544
    int64_t result; // 0x2ff544
    return result;
}

// Address range: 0x2ff551 - 0x2ff558
int64_t function_2ff551(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x2ff551
    if (v1 != 0) {
        int64_t v2; // 0x2ff551
        uint32_t v3 = (int32_t)v2;
        *(int32_t *)v2 = v3 >> 32 - v1 | v3 << v1;
    }
    return function_7531ddf8();
}

// Address range: 0x2ff559 - 0x2ff55f
int64_t function_2ff559(int64_t a1) {
    // 0x2ff559
    int64_t result; // 0x2ff559
    return result;
}

// Address range: 0x2ff59f - 0x2ff5a7
int64_t function_2ff59f(void) {
    // 0x2ff59f
    int16_t v1; // 0x2ff59f
    return (uint16_t)v1;
}

// Address range: 0x2ff5cd - 0x2ff5d2
int64_t function_2ff5cd(void) {
    // 0x2ff5cd
    return function_66ae2abc();
}

// Address range: 0x2ff5ed - 0x2ff5ee
int64_t function_2ff5ed(void) {
    // 0x2ff5ed
    int64_t result; // 0x2ff5ed
    return result;
}

// Address range: 0x2ff5f0 - 0x2ff5f1
int64_t function_2ff5f0(void) {
    // 0x2ff5f0
    int64_t result; // 0x2ff5f0
    return result;
}

// Address range: 0x2ff62f - 0x2ff648
int64_t function_2ff62f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ff62f
    *(int32_t *)(unknown_ffffffffb2337635() + 0x61103607) = (int32_t)a3;
    unknown_28338640();
    int64_t result = __asm_int1(); // 0x2ff640
    bool v1; // 0x2ff62f
    if (!v1) {
        result = function_2ff5f0();
    }
    // 0x2ff642
    return result;
}

// Address range: 0x2ff648 - 0x2ff676
int64_t function_2ff648(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ff648
    bool v1; // 0x2ff648
    if (v1) {
        // 0x2ff64a
        return function_2ff6bc();
    }
    // 0x2ff666
    unknown_ffffffffbf83536c();
    if (a4 == 0) {
        function_2ff5ed();
    }
    // 0x2ff66d
    return a3 & 0xffffffff;
}

// Address range: 0x2ff68d - 0x2ff69a
int64_t function_2ff68d(void) {
    // 0x2ff68d
    return unknown_ffffffff8631f698();
}

// Address range: 0x2ff6bc - 0x2ff6bd
int64_t function_2ff6bc(void) {
    // 0x2ff6bc
    int64_t result; // 0x2ff6bc
    return result;
}

// Address range: 0x2ff6cd - 0x2ff6d2
int64_t function_2ff6cd(void) {
    // 0x2ff6cd
    return function_ffffffffa438b5ce();
}

// Address range: 0x2ff6d2 - 0x2ff6da
int64_t function_2ff6d2(void) {
    // 0x2ff6d2
    return unknown_3f2df5d8();
}

// Address range: 0x2ff769 - 0x2ff78c
int64_t function_2ff769(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ff769
    int64_t result; // 0x2ff769
    int64_t v1 = result;
    bool v2; // 0x2ff769
    if (!v2) {
        // 0x2ff76c
        *(int32_t *)v1 = (int32_t)(v1 ^ result);
        return result;
    }
    int64_t result2 = unknown_ffffffffc32ac87b(); // 0x2ff775
    char * v3 = (char *)(a4 - 0x69d2f600); // 0x2ff77a
    *v3 = -1 - *v3;
    if (a4 == 0) {
        // 0x2ff78a
        return result2;
    }
    // 0x2ff782
    return a4 & 0xffffffff;
}

// Address range: 0x2ff797 - 0x2ff798
int64_t function_2ff797(int64_t a1) {
    // 0x2ff797
    int64_t result; // 0x2ff797
    return result;
}

// Address range: 0x2ff7ad - 0x2ff7ef
int64_t function_2ff7ad(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2ff7ad
    int64_t v1; // 0x2ff7ad
    int64_t v2 = v1 % 256 * (int64_t)*(char *)(v1 + 22); // 0x2ff7ad
    *(int32_t *)a1 = (int32_t)(v2 & 0xff00 | v1 & 0xffff0000 | v2 & 89) | 166;
    bool v3; // 0x2ff7ad
    int64_t v4 = (v3 ? -4 : 4) + a1; // 0x2ff7b2
    int64_t v5 = unknown_3d31dfb9(v4); // 0x2ff7b3
    int32_t * v6 = (int32_t *)(a3 + 68); // 0x2ff7b8
    uint32_t v7 = *v6; // 0x2ff7b8
    uint32_t v8 = (int32_t)v1; // 0x2ff7b8
    uint32_t v9 = v7 + v8; // 0x2ff7b8
    *v6 = v9;
    uint64_t v10 = a4 / 256; // 0x2ff7bb
    int32_t * v11 = (int32_t *)(2 * v1 - 0x76d4cd51 + v1); // 0x2ff7bd
    *v11 = *v11 + (int32_t)a4;
    int64_t result = a2 & 0xffffffff; // 0x2ff7c5
    int64_t v12; // 0x2ff7ad
    *(char *)a3 = *(char *)&v12 | (char)(v1 / 256);
    int32_t v13 = *(int32_t *)0x140593d8; // 0x2ff7d1
    *(int32_t *)0x140593d8 = (int32_t)v4 + (int32_t)(-1 - (char)v10 < (char)a4) + v13;
    *(int64_t *)v1 = a3;
    float80_t v14; // 0x2ff7ad
    *(int64_t *)(v1 + 68) = (int64_t)v14;
    uint32_t v15 = *(int32_t *)&v12; // 0x2ff7e0
    *(int32_t *)a3 = v15 - v8;
    char v16 = *(char *)((v5 + v10 + (int64_t)(v9 < v7)) % 256 | v5 & 0xffffff00); // 0x2ff7e2
    __asm_outsb((int16_t)a3, v16);
    __asm_int(-87);
    int64_t v17; // 0x2ff7ad
    *(int32_t *)result = (int32_t)(v15 < v8) + v8 + *(int32_t *)&v17;
    return result;
}

// Address range: 0x2ff7f9 - 0x2ff7fc
int64_t function_2ff7f9(int64_t a1) {
    // 0x2ff7f9
    int64_t result; // 0x2ff7f9
    return result;
}

// Address range: 0x2ff821 - 0x2ff8aa
int64_t function_2ff821(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ff821
    int64_t result; // 0x2ff821
    int64_t v1 = result;
    int32_t * v2 = (int32_t *)(result + 0x1e8a405); // 0x2ff821
    uint32_t v3 = *v2; // 0x2ff821
    uint32_t v4 = v3 + (int32_t)result; // 0x2ff821
    *v2 = v4;
    int64_t v5 = a4 - 1; // 0x2ff827
    if (v5 != 0 && v4 != 0) {
        char * v6 = (char *)(a4 + 0x46ad8d79); // 0x2ff8a4
        *v6 = (char)(v4 < v3) + (char)result + *v6;
        return result;
    }
    int64_t v7 = unknown_ffffffff8b730f36(); // 0x2ff830
    uint32_t v8 = (int32_t)v5; // 0x2ff835
    uint32_t v9 = v8 % 32; // 0x2ff835
    bool v10 = *(int32_t *)(v1 + 0x3e821e93) > (int32_t)v1; // 0x2ff835
    if (v9 != 0) {
        bool v11; // 0x2ff821
        int32_t * v12 = (int32_t *)(a2 + 0xd3ec58 + (v11 ? -4 : 4)); // 0x2ff835
        uint32_t v13 = *v12; // 0x2ff835
        *v12 = v13 >> v9;
        v10 = (v13 & 1 << v9 - 1) != 0;
    }
    char * v14 = (char *)(v7 - 24); // 0x2ff83b
    *v14 = (char)v10 - (char)v1 + *v14;
    int32_t * v15 = (int32_t *)(a4 - 0xf21eb0c); // 0x2ff83e
    *v15 = *v15 + v8;
    return v7 + 0x6bfe1746 & 0xffffffff;
}

// Address range: 0x2ff8be - 0x2ff8c2
int64_t function_2ff8be(int64_t a1) {
    // 0x2ff8be
    int64_t result; // 0x2ff8be
    return result;
}

// Address range: 0x2ff8d7 - 0x2ff8dc
int64_t function_2ff8d7(void) {
    // 0x2ff8d7
    return function_124af975();
}

// Address range: 0x2ff900 - 0x2ff903
int64_t function_2ff900(void) {
    // 0x2ff900
    int64_t result; // 0x2ff900
    return result;
}

// Address range: 0x2ff909 - 0x2ff90a
int64_t function_2ff909(int64_t a1) {
    // 0x2ff909
    int64_t result; // 0x2ff909
    return result;
}

// Address range: 0x2ff920 - 0x2ff921
int64_t function_2ff920(void) {
    // 0x2ff920
    int64_t result; // 0x2ff920
    return result;
}

// Address range: 0x2ff92d - 0x2ff935
int64_t function_2ff92d(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 0x60936ce6); // 0x2ff92d
    int64_t v2; // 0x2ff92d
    *v1 = *v1 | (int32_t)v2;
    return function_2ff920();
}

// Address range: 0x2ff936 - 0x2ff937
int64_t function_2ff936(int64_t a1) {
    // 0x2ff936
    int64_t result; // 0x2ff936
    return result;
}

// Address range: 0x2ff967 - 0x2ff96c
int64_t function_2ff967(void) {
    // 0x2ff967
    return function_ffffffffb4bdb765();
}

// Address range: 0x2ff973 - 0x2ff978
int64_t function_2ff973(void) {
    // 0x2ff973
    return function_217faeb();
}

// Address range: 0x2ff9b1 - 0x2ff9b2
int64_t function_2ff9b1(void) {
    // 0x2ff9b1
    int64_t result; // 0x2ff9b1
    return result;
}

// Address range: 0x2ffa08 - 0x2ffa1e
int64_t function_2ffa08(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ffa08
    int64_t v1; // 0x2ffa08
    char v2 = *(char *)(8 * a2 + 0xceae728 + v1); // 0x2ffa08
    int64_t result; // 0x2ffa08
    if ((int32_t)v1 != 0x3f25a701 && (a4 & -256 || (int64_t)((char)a4 - v2)) != 1) {
        result = function_2ff9b1();
    }
    // 0x2ffa1d
    return result;
}

// Address range: 0x31f8bb - 0x31f985
int64_t function_31f8bb(int64_t a1, int64_t a2) {
    int64_t v1 = a2;
    int64_t v2; // bp-8, 0x31f8bb
    v2 = (int64_t)&v2 + 16;
    int64_t v3; // 0x31f8bb
    return function_c823b(a1, v3, v3, v3, v3, v3, (int64_t)&v1);
}

// Address range: 0x31f985 - 0x31fad2
int64_t function_31f985(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x31f985
    int64_t v1; // bp-48, 0x31f985
    v1 = (int64_t)&v1;
    return function_c823b(a1, a2, a3, a4, a5, a6, 310);
}

// Address range: 0x31fad2 - 0x31fc64
int64_t function_31fad2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x31fad2
    int64_t v1; // 0x31fad2
    return function_c823b(a1, a2, a7, a4, v1, a6, 0x66dcd465);
}

// Address range: 0x31fc64 - 0x31fdd2
int64_t function_31fc64(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31fc64
    int64_t v1; // 0x31fc64
    return function_c823b(a3, a2, a3, v1, v1, v1, v1);
}

// Address range: 0x31fdd2 - 0x31ff28
int64_t function_31fdd2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5; // bp-40, 0x31fe5a
    int64_t v2 = (int64_t)&v1; // 0x31fea7
    int64_t * v3 = (int64_t *)(v2 - 16); // 0x31febb
    *v3 = a5;
    int64_t v4 = v2 - 8; // 0x31febb
    int64_t * v5 = (int64_t *)v4; // 0x31febe
    int64_t v6 = v2 + 8; // 0x31febe
    int64_t * v7 = (int64_t *)v6; // 0x31febe
    *v7 = *v5;
    *v5 = a2;
    *(int64_t *)(v2 - 24) = 0x31dc4b;
    *(int64_t *)(v2 + 24) = *v3;
    *v3 = v4;
    *v5 = v6;
    v1 = *v7;
    *v3 = a3;
    *v5 = v6;
    int64_t v8; // 0x31fdd2
    return function_c823b(a1, *v5, a3, a4, v8, v8, 0x3e4c6dd0);
}

// Address range: 0x31ff28 - 0x3200a0
int64_t function_31ff28(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x31ff28
    int64_t v1; // bp-32, 0x31ff28
    int64_t v2 = (int64_t)&v1; // 0x32000d
    v1 = v2;
    int64_t v3; // bp-48, 0x31ff28
    v3 = (int64_t)&v3 + 16;
    return function_c823b(a1, a2, a3, a4, a5, a6, v2);
}

// Address range: 0x3200a0 - 0x3201ee
int64_t function_3200a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3200a0
    int64_t v1; // bp-48, 0x3200a0
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x3200a0
    return function_c823b(a1, a2, a3, v2, v2, v2, a4);
}

// Address range: 0x320227 - 0x320228
int64_t function_320227(int64_t a1) {
    // 0x320227
    int64_t result; // 0x320227
    return result;
}

// Address range: 0x320232 - 0x320233
int64_t function_320232(void) {
    // 0x320232
    int64_t result; // 0x320232
    return result;
}

// Address range: 0x320245 - 0x320247
int64_t function_320245(void) {
    // 0x320245
    return function_320232();
}
