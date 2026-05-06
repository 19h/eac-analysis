/*
 * Targeted RetDec C for native executable gap queue batch 221.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x181e85-0x182085 rank=- name=- kind=- bytes=- uncovered=-
 *   0x182085-0x182285 rank=- name=- kind=- bytes=- uncovered=-
 *   0x182685-0x182885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e9a1e-0x2e9c1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e9c1e-0x2e9e1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e9e1e-0x2ea01e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ea01e-0x2ea21e rank=- name=- kind=- bytes=- uncovered=-
 *   0x1626aa-0x1628aa rank=- name=- kind=- bytes=- uncovered=-
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
int64_t __asm_wait(void);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
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

int64_t function_1626aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1627dc(void);
int64_t function_1627dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1627e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1627ea(int64_t a1, int64_t a2, int64_t result);
int64_t function_16ccc61f();
int64_t function_17b074f3();
int64_t function_181e6f();
int64_t function_181e85(void);
int64_t function_181ea7(void);
int64_t function_181ee5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_181ee7(void);
int64_t function_181f09(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_181f81(void);
int64_t function_181f91(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_181fe0(int64_t a1);
int64_t function_181ff1(int64_t a1);
int64_t function_182009(void);
int64_t function_182047(int64_t a1);
int64_t function_182055(void);
int64_t function_1820b4(void);
int64_t function_1820ce(void);
int64_t function_1820d0(void);
int64_t function_1820d2(void);
int64_t function_18211b(void);
int64_t function_18218c(void);
int64_t function_1821f8(void);
int64_t function_18220a(int64_t a1);
int64_t function_18223d(int64_t a1);
int64_t function_18224e(void);
int64_t function_182255(void);
int64_t function_182264(int64_t a1);
int64_t function_182685(int64_t a1, int64_t a2, int64_t a3);
int64_t function_182736(void);
int64_t function_18273d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18275a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18278a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1827f2(void);
int64_t function_18282d(int64_t a1, int64_t a2);
int64_t function_2e9a0f();
int64_t function_2e9a1e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e9a75(void);
int64_t function_2e9a96(void);
int64_t function_2e9b70(void);
int64_t function_2e9bb4(void);
int64_t function_2e9bf6(void);
int64_t function_2e9c10(void);
int64_t function_2e9c36(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_2e9cb9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e9cda(int64_t a1);
int64_t function_2e9d26(void);
int64_t function_2e9d62(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e9ec7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2e9f20(void);
int64_t function_2e9f2c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2e9fff(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ea08c(int64_t a1, int64_t a2);
int64_t function_2ea0bc(void);
int64_t function_2ea0d9(void);
int64_t function_2ea0fd(void);
int64_t function_34909c96();
int64_t function_3d182b0e();
int64_t function_cdc60();
int64_t function_ffffffffafcbe60e();
int64_t function_ffffffffbedcb8de();
int64_t function_ffffffffe824033f();
int64_t unknown_15d1f313();
int64_t unknown_361fc839();
int64_t unknown_3d5b4836();
int64_t unknown_58c6091b();
int64_t unknown_7c17b853();
int64_t unknown_ffffffffd6b54e5f();
int64_t unknown_ffffffffd8afdefd();

// Address range: 0x1626aa - 0x1627d4
int64_t function_1626aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1626aa
    int64_t v1; // 0x1626aa
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    char * v3 = (char *)(a4 + 80); // 0x1626ac
    *v3 = *v3 + (char)v2;
    int64_t v4; // bp-8, 0x1626aa
    int64_t v5 = (int64_t)&v4; // 0x1626d5
    int64_t v6 = v5 - 8; // 0x162711
    int64_t * v7 = (int64_t *)v6; // 0x162711
    int64_t v8 = v5 - 16; // 0x162716
    int64_t * v9 = (int64_t *)v8; // 0x162725
    *v9 = v8;
    int64_t v10 = *(int64_t *)(v5 + 32); // 0x162731
    *v7 = v10;
    *v9 = v10;
    int64_t * v11 = (int64_t *)(v5 - 24); // 0x16274c
    *v11 = v6;
    int64_t * v12 = (int64_t *)(v5 + 8); // 0x162758
    int64_t v13 = *v12; // 0x162758
    *v9 = v13;
    *v11 = 0x271b72b;
    int64_t * v14 = (int64_t *)(v5 - 40); // 0x162781
    *v14 = v10;
    *v7 = *v11;
    int64_t * v15 = (int64_t *)(v5 - 32); // 0x16278f
    *v14 = v13;
    *v15 = v13;
    *v12 = *v11;
    int64_t v16 = *v9; // 0x16279d
    *v11 = v16;
    *v15 = v16;
    int64_t v17 = *v7; // 0x1627b6
    *v9 = v17;
    *v11 = v17;
    return function_cdc60(a1);
}

// Address range: 0x1627dc - 0x1627dd
int64_t function_1627dc(void) {
    // 0x1627dc
    int64_t result; // 0x1627dc
    return result;
}

// Address range: 0x1627dd - 0x1627e2
int64_t function_1627dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0x1627dd
    *v1 = *v1 | (char)a4;
    return function_1627ea(a1, a2, (int64_t)&g2);
}

// Address range: 0x1627e2 - 0x1627ea
int64_t function_1627e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1627e2
    int64_t v1; // 0x1627e2
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(a1 + 28 + 4 * v2); // 0x1627e4
    *v3 = *v3 + (char)a4;
    return v2 & -164;
}

// Address range: 0x1627ea - 0x1628a6
int64_t function_1627ea(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = 0x1131febb; // bp-16, 0x162845
    int64_t v2 = (int64_t)&v1; // 0x16287e
    *(int64_t *)(v2 - 8) = *(int64_t *)(v2 + 16);
    *(int64_t *)(v2 - 16) = v2;
    return result;
}

// Address range: 0x181e85 - 0x181e9d
int64_t function_181e85(void) {
    // 0x181e85
    int64_t v1; // 0x181e85
    int64_t v2 = v1 + 0x5e45e48a; // 0x181e85
    return v2 - ((int32_t)v2 < 0x9ef24f01 ? 0x1ddfb697 : 0x1ddfb696) & 0xffffffff;
}

// Address range: 0x181ea7 - 0x181eae
int64_t function_181ea7(void) {
    // 0x181ea7
    int64_t v1; // 0x181ea7
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return function_17b074f3();
}

// Address range: 0x181ee5 - 0x181ee7
int64_t function_181ee5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x181ee5
    int64_t result; // 0x181ee5
    return result;
}

// Address range: 0x181ee7 - 0x181ee9
int64_t function_181ee7(void) {
    // 0x181ee7
    return function_181e6f();
}

// Address range: 0x181f09 - 0x181f2b
int64_t function_181f09(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x181f09
    int64_t v1; // 0x181f09
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    int64_t result = unknown_58c6091b(); // 0x181f15
    int32_t * v3 = (int32_t *)(a4 - 0x2a4f570c); // 0x181f1a
    *v3 = *v3 + (int32_t)v1;
    *(char *)-0x6ff3e9d9 = *(char *)-0x6ff3e9d9 + (char)(v1 / 256);
    return result;
}

// Address range: 0x181f81 - 0x181f84
int64_t function_181f81(void) {
    // 0x181f81
    int64_t result; // 0x181f81
    return result;
}

// Address range: 0x181f91 - 0x181fa0
int64_t function_181f91(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x181f91
    int64_t v1; // 0x181f91
    return (int64_t)(0x798f013d * *(int32_t *)(v1 + 0x77251a9b));
}

// Address range: 0x181fe0 - 0x181fe1
int64_t function_181fe0(int64_t a1) {
    // 0x181fe0
    int64_t result; // 0x181fe0
    return result;
}

// Address range: 0x181ff1 - 0x181ff2
int64_t function_181ff1(int64_t a1) {
    // 0x181ff1
    int64_t result; // 0x181ff1
    return result;
}

// Address range: 0x182009 - 0x18200e
int64_t function_182009(void) {
    // 0x182009
    return function_ffffffffe824033f();
}

// Address range: 0x182047 - 0x182055
int64_t function_182047(int64_t a1) {
    // 0x182047
    return unknown_7c17b853(a1);
}

// Address range: 0x182055 - 0x18205e
int64_t function_182055(void) {
    // 0x182055
    return function_3d182b0e();
}

// Address range: 0x1820b4 - 0x1820b5
int64_t function_1820b4(void) {
    // 0x1820b4
    int64_t result; // 0x1820b4
    return result;
}

// Address range: 0x1820ce - 0x1820cf
int64_t function_1820ce(void) {
    // 0x1820ce
    int64_t result; // 0x1820ce
    return result;
}

// Address range: 0x1820d0 - 0x1820d2
int64_t function_1820d0(void) {
    // 0x1820d0
    return function_1820b4();
}

// Address range: 0x1820d2 - 0x1820d3
int64_t function_1820d2(void) {
    // 0x1820d2
    int64_t result; // 0x1820d2
    return result;
}

// Address range: 0x18211b - 0x18211f
int64_t function_18211b(void) {
    // 0x18211b
    return function_1820d2();
}

// Address range: 0x18218c - 0x18218d
int64_t function_18218c(void) {
    // 0x18218c
    int64_t result; // 0x18218c
    return result;
}

// Address range: 0x1821f8 - 0x1821ff
int64_t function_1821f8(void) {
    // 0x1821f8
    unknown_15d1f313();
    return function_18218c();
}

// Address range: 0x18220a - 0x18220b
int64_t function_18220a(int64_t a1) {
    // 0x18220a
    int64_t result; // 0x18220a
    return result;
}

// Address range: 0x18223d - 0x18223e
int64_t function_18223d(int64_t a1) {
    // 0x18223d
    int64_t result; // 0x18223d
    return result;
}

// Address range: 0x18224e - 0x18224f
int64_t function_18224e(void) {
    // 0x18224e
    int64_t result; // 0x18224e
    return result;
}

// Address range: 0x182255 - 0x182257
int64_t function_182255(void) {
    // 0x182255
    return function_18224e();
}

// Address range: 0x182264 - 0x182267
int64_t function_182264(int64_t a1) {
    // 0x182264
    int64_t result; // 0x182264
    return result;
}

// Address range: 0x182685 - 0x182722
int64_t function_182685(int64_t a1, int64_t a2, int64_t a3) {
    // 0x182685
    int64_t v1; // 0x182685
    uint64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = v1 & 0xffffffff; // 0x182685
    int16_t v5 = v1; // 0x182688
    char v6 = __asm_in(v5); // 0x182688
    int64_t result = a3 & 0xffffff00 | (int64_t)v6; // 0x182688
    int32_t * v7 = (int32_t *)(result - 0x6c6c96d4); // 0x182689
    int32_t v8 = *v7; // 0x182689
    int32_t v9 = v8 - 1; // 0x182689
    *v7 = v9;
    bool v10 = v9 < 0; // 0x18268f
    bool v11 = true; // 0x18268f
    int64_t v12 = v4; // 0x18268f
    int64_t v13; // 0x182685
    if ((v8 & -v8) >= 0) {
        // 0x1826d5
        __asm_outsb(v5, *(char *)&v3);
        if (v9 < 1) {
            // 0x1826c8
            if (v1 == 1 || (result & 0xff00) == 0) {
                // 0x1826a1
                *(int32_t *)(v3 + 99) = 0x50310490;
                *(char *)-0x17b9914b = *(char *)-0x17b9914b + (char)(v2 / 256);
                *(int32_t *)a1 = *(int32_t *)&v3;
                return result + 0xc4f4849d & 0xcfaedddb | 0x30512224;
            }
            // 0x1826c5
            return result;
        }
        char v14 = __asm_in_133(29); // 0x1826da
        int64_t v15 = result & -256 | (int64_t)v14; // 0x1826da
        int3_t v16; // 0x182685
        *(int16_t *)(a1 - 0x7c87fb35) = (int16_t)__frontend_reg_load_fpr(v16);
        int3_t v17 = v16 + 1; // 0x1826e1
        char v18 = *(char *)(v15 + 4 * v4); // 0x1826e7
        int64_t v19 = v15 & -256; // 0x1826e7
        uint32_t v20 = (int32_t)v2; // 0x1826ea
        uint32_t v21 = *(int32_t *)(v2 - 0x6f11335c) + v20; // 0x1826ea
        int32_t * v22 = (int32_t *)(v19 | (int64_t)(v14 + (char)(v6 < 158) + v18)); // 0x1826f2
        *v22 = *v22 + (int32_t)v3 + (int32_t)(v21 < v20);
        char v23 = *(char *)(v4 - 7); // 0x1826f4
        int64_t v24 = 256 * (int64_t)(v23 + (char)(v21 / 256)) | (int64_t)(v21 & -0xff01); // 0x1826f4
        __frontend_reg_store_fpr(v17, __frontend_reg_load_fpr(v16 - 1) - __frontend_reg_load_fpr(v17));
        uint32_t v25 = (int32_t)v15 >> 31; // 0x182701
        *(char *)v3 = -12;
        *(char *)((v19 | 36) + 103) = (char)v25;
        char * v26 = (char *)(v24 + 14); // 0x18270a
        unsigned char v27 = *v26; // 0x18270a
        char v28 = 2 * v27; // 0x18270a
        *v26 = v28;
        v10 = v28 < 0;
        v11 = v27 / 64 % 2 != v27 / 128;
        v12 = v25;
        v13 = v24;
    }
    // 0x18270f
    if (v10 == v11) {
        // 0x1826c5
        return 0x946013d;
    }
    char * v29 = (char *)(v12 - 115); // 0x182717
    *v29 = *v29 + (char)(v13 / 256);
    *(char *)0x946d8c5 = (char)(v12 / 256);
    return 0x946d93d;
}

// Address range: 0x182736 - 0x18273c
int64_t function_182736(void) {
    // 0x182736
    int64_t result; // 0x182736
    return result;
}

// Address range: 0x18273d - 0x18273f
int64_t function_18273d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18273d
    int64_t result; // 0x18273d
    return result;
}

// Address range: 0x18275a - 0x18275e
int64_t function_18275a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18275a
    int64_t result; // 0x18275a
    *(char *)a3 = 2 * (char)result;
    return result;
}

// Address range: 0x18278a - 0x1827c0
int64_t function_18278a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)a1; // 0x18278a
    int64_t v2; // 0x18278a
    *v1 = (int32_t)v2 + (int32_t)a1;
    char * v3 = (char *)(a1 - 17); // 0x182796
    *v3 = *v3 - (char)v2;
    *v1 = __asm_insd((int16_t)a3);
    float80_t v4; // 0x18278a
    *(float32_t *)a4 = (float32_t)((float80_t)*(float64_t *)0x4205a6 / v4);
    char * v5 = (char *)(a5 - 49); // 0x1827a9
    *v5 = (char)((int32_t)v2 > 0xa3887385) - (char)v2 + *v5;
    return function_16ccc61f(v2 + 0x5c778c7a & 0xffffffff);
}

// Address range: 0x1827f2 - 0x1827f8
int64_t function_1827f2(void) {
    // 0x1827f2
    int64_t v1; // 0x1827f2
    __asm_out(30, (int32_t)v1);
    bool v2; // 0x1827f2
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x18282d - 0x182840
int64_t function_18282d(int64_t a1, int64_t a2) {
    int64_t v1 = unknown_3d5b4836(); // 0x182830
    int32_t * v2 = (int32_t *)v1; // 0x182835
    *v2 = *v2 + (int32_t)v1;
    int64_t v3; // 0x18282d
    return v3 & 0xffffffff;
}

// Address range: 0x2e9a1e - 0x2e9a4d
int64_t function_2e9a1e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e9a1e
    int64_t v1; // 0x2e9a1e
    *(int32_t *)a3 = (int32_t)v1 - 0x2711fe18;
    int64_t v2; // 0x2e9a1e
    __asm_rcl(*(int32_t *)&v2);
    *(int32_t *)0x3e8a00d872d28c90 = (int32_t)v2;
    return function_2e9a0f();
}

// Address range: 0x2e9a75 - 0x2e9a7a
int64_t function_2e9a75(void) {
    // 0x2e9a75
    return function_ffffffffbedcb8de();
}

// Address range: 0x2e9a96 - 0x2e9a99
int64_t function_2e9a96(void) {
    // 0x2e9a96
    int64_t result; // 0x2e9a96
    return result;
}

// Address range: 0x2e9b70 - 0x2e9b75
int64_t function_2e9b70(void) {
    // 0x2e9b70
    int64_t result; // 0x2e9b70
    return result;
}

// Address range: 0x2e9bb4 - 0x2e9bb7
int64_t function_2e9bb4(void) {
    // 0x2e9bb4
    int64_t result; // 0x2e9bb4
    return result;
}

// Address range: 0x2e9bf6 - 0x2e9bfd
int64_t function_2e9bf6(void) {
    // 0x2e9bf6
    return function_34909c96();
}

// Address range: 0x2e9c10 - 0x2e9c15
int64_t function_2e9c10(void) {
    // 0x2e9c10
    return function_ffffffffafcbe60e();
}

// Address range: 0x2e9c36 - 0x2e9c70
int64_t function_2e9c36(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x2e9c36
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(a3 - 0x29d5fe28); // 0x2e9c36
        uint32_t v3 = *v2; // 0x2e9c36
        *v2 = v3 >> v1 | v3 << 32 - v1;
    }
    int64_t v4; // 0x2e9c36
    *(int32_t *)0x156e5761aa88dc0a = (int32_t)v4;
    *(char *)-0x34805054f201fe18 = (char)__asm_int3(0xaffe01e8);
    *(int32_t *)0xaffe0181 = *(int32_t *)0xaffe0181 + (int32_t)v4;
    unknown_ffffffffd6b54e5f();
    *(char *)0xaffe01e8 = (char)*(int32_t *)0x1e858413111b48d;
    return result;
}

// Address range: 0x2e9cb9 - 0x2e9cbe
int64_t function_2e9cb9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x2e9cb9
    int64_t result; // 0x2e9cb9
    if (v1 != 0) {
        uint32_t v2 = (int32_t)result;
        *(int32_t *)result = v2 >> 32 - v1 | v2 << v1;
    }
    return result;
}

// Address range: 0x2e9cda - 0x2e9ce2
int64_t function_2e9cda(int64_t a1) {
    // 0x2e9cda
    int64_t v1; // 0x2e9cda
    bool v2; // 0x2e9cda
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x2e9d26 - 0x2e9d27
int64_t function_2e9d26(void) {
    // 0x2e9d26
    int64_t result; // 0x2e9d26
    return result;
}

// Address range: 0x2e9d62 - 0x2e9d9d
int64_t function_2e9d62(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e9d62
    int64_t v1; // 0x2e9d62
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a1 - 0x4a689010); // 0x2e9d62
    int32_t v4 = *v3; // 0x2e9d62
    int32_t v5 = v2; // 0x2e9d62
    int32_t v6 = v4 + v5; // 0x2e9d62
    *v3 = v6;
    if (v6 < 0 != ((v6 ^ v4) & (v6 ^ v5)) < 0) {
        // 0x2e9d6a
        return v1 & -256 | 85;
    }
    // 0x2e9d94
    int64_t result; // 0x2e9d62
    if ((*(char *)(v1 + 0xc01a48e) ^ (char)(v2 / 256)) >= 0) {
        result = function_2e9d26();
    }
    // 0x2e9d9c
    return result;
}

// Address range: 0x2e9ec7 - 0x2e9f0d
int64_t function_2e9ec7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x2e9ec7
    int32_t * v3 = (int32_t *)(2 * v2 + 0x560abb3 + v2); // 0x2e9eeb
    *v3 = *v3 + (int32_t)v2;
    char * v4 = (char *)(a4 + 95); // 0x2e9ef2
    *v4 = *v4 + (char)(a3 / 256);
    int64_t v5 = unknown_ffffffffd8afdefd(); // 0x2e9ef7
    uint32_t v6 = (int32_t)a4;
    uint32_t v7 = v6 % 32; // 0x2e9f02
    if (v7 != 0) {
        *(int32_t *)a4 = v6 >> v7;
    }
    *(int32_t *)a1 = (int32_t)v5;
    return v5 & 0xfe17dc00 | (int64_t)*(char *)&v1 | 0x1e82300;
}

// Address range: 0x2e9f20 - 0x2e9f21
int64_t function_2e9f20(void) {
    // 0x2e9f20
    int64_t result; // 0x2e9f20
    return result;
}

// Address range: 0x2e9f2c - 0x2e9fc2
int64_t function_2e9f2c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = 0x7e6d92f; // bp-8, 0x2e9f2c
    int64_t result = unknown_361fc839(); // 0x2e9f33
    if ((char)(a4 / 256 || a4) < 0) {
        // 0x2e9f3c
        return result;
    }
    int32_t * v2 = (int32_t *)result; // 0x2e9fb9
    uint32_t v3 = *v2; // 0x2e9fb9
    *v2 = v3 / 8 | 0x20000000 * v3;
    return result + (int64_t)&v1 & 0xffffffff;
}

// Address range: 0x2e9fff - 0x2ea004
int64_t function_2e9fff(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e9fff
    int64_t result; // 0x2e9fff
    return result;
}

// Address range: 0x2ea08c - 0x2ea090
int64_t function_2ea08c(int64_t a1, int64_t a2) {
    // 0x2ea08c
    int64_t result; // 0x2ea08c
    return result;
}

// Address range: 0x2ea0bc - 0x2ea0bd
int64_t function_2ea0bc(void) {
    // 0x2ea0bc
    int64_t result; // 0x2ea0bc
    return result;
}

// Address range: 0x2ea0d9 - 0x2ea0da
int64_t function_2ea0d9(void) {
    // 0x2ea0d9
    int64_t result; // 0x2ea0d9
    return result;
}

// Address range: 0x2ea0fd - 0x2ea0ff
int64_t function_2ea0fd(void) {
    // 0x2ea0fd
    return function_2ea0d9();
}
