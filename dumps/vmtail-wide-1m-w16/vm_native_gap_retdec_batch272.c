/*
 * Targeted RetDec C for native executable gap queue batch 272.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xeb99c-0xebb9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xebb9c-0xebd9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xebd9c-0xebf9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xec19c-0xec39c rank=- name=- kind=- bytes=- uncovered=-
 *   0x2574c2-0x2576c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2576c2-0x2578c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2578c2-0x257ac2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f3e1e-0x2f401e rank=- name=- kind=- bytes=- uncovered=-
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
void __asm_out_139(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint32_t __readfsdword(int64_t offset);
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
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
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

int64_t function_18497841();
int64_t function_2574c2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_257545(void);
int64_t function_2575d9(void);
int64_t function_257609(void);
int64_t function_257629(void);
int64_t function_25762a(void);
int64_t function_25762b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25762e(void);
int64_t function_257630(void);
int64_t function_257631(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25769e(void);
int64_t function_257702(void);
int64_t function_257746(void);
int64_t function_257751(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25778f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25783a(void);
int64_t function_257857(int64_t a1);
int64_t function_257874(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_257905(int64_t a1, int64_t a2);
int64_t function_257958(int64_t a1);
int64_t function_25795d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2579e7(void);
int64_t function_257a20(void);
int64_t function_257a7c(void);
int64_t function_2f3e1e(void);
int64_t function_2f3e29(int64_t a1);
int64_t function_2f3ed8(void);
int64_t function_2f3f05(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f3f1e(int64_t a1);
int64_t function_2f3f2d(int64_t a1);
int64_t function_2f3f35(void);
int64_t function_2f3f64(void);
int64_t function_2f3f7f(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_2f3fa5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f3fc6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f3fe8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39ed284();
int64_t function_eb99c(void);
int64_t function_eb9b2(int64_t a1);
int64_t function_ebac7(void);
int64_t function_ebadd(int64_t a1);
int64_t function_ebae3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ebb38(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_ebbef(void);
int64_t function_ebc00(void);
int64_t function_ebc2a(int64_t a1);
int64_t function_ebc46(void);
int64_t function_ebd11(int64_t a1);
int64_t function_ebd1a(int64_t a1);
int64_t function_ebd28(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ebd62(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ebd70(int64_t a1);
int64_t function_ebe05(int64_t a1, int64_t a2);
int64_t function_ebe68(void);
int64_t function_ebeaa(void);
int64_t function_ec19c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ec246(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ec344(void);
int64_t function_ec380(int64_t a1);
int64_t function_ffffffffc5b5b967();
int64_t function_ffffffffecf1e776();
int64_t unknown_1a16cc19();
int64_t unknown_3a383fa6();
int64_t unknown_3b2528db();
int64_t unknown_56b2adef();
int64_t unknown_62d0e045();
int64_t unknown_65e8fa37();
int64_t unknown_751f5b65();
int64_t unknown_79498fa8();
int64_t unknown_a290666();
int64_t unknown_ffffffffac141d20();
int64_t unknown_ffffffffb899e578();
int64_t unknown_ffffffffce969d0a();
int64_t unknown_ffffffffd418f96b();
int64_t unknown_ffffffffdf1aa08a();
int64_t unknown_ffffffffe48ab27e();
int64_t unknown_ffffffffe814a373();
int64_t unknown_ffffffffe8e40064();
int64_t unknown_fffffffffc708dec();

// Address range: 0xeb99c - 0xeb99d
int64_t function_eb99c(void) {
    // 0xeb99c
    int64_t result; // 0xeb99c
    return result;
}

// Address range: 0xeb9b2 - 0xeb9b5
int64_t function_eb9b2(int64_t a1) {
    // 0xeb9b2
    int64_t result; // 0xeb9b2
    return result;
}

// Address range: 0xebac7 - 0xebac8
int64_t function_ebac7(void) {
    // 0xebac7
    int64_t result; // 0xebac7
    return result;
}

// Address range: 0xebadd - 0xebae0
int64_t function_ebadd(int64_t a1) {
    // 0xebadd
    int64_t result; // 0xebadd
    return result;
}

// Address range: 0xebae3 - 0xebb36
int64_t function_ebae3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xebae3
    int64_t v1; // 0xebae3
    *(char *)a3 = (char)(v1 / 256) + (char)a3;
    int64_t result = unknown_fffffffffc708dec(); // 0xebae5
    int32_t * v2 = (int32_t *)(a3 - 0x20f677de + 8 * v1); // 0xebaeb
    *v2 = *v2 ^ (int32_t)v1;
    char * v3 = (char *)(v1 - 24); // 0xebaf3
    unsigned char v4 = *v3; // 0xebaf3
    char v5 = 2 * v4; // 0xebaf3
    *v3 = v5;
    if (v5 == 0 || v5 < 0 != v4 / 64 % 2 != v4 / 128) {
        // 0xebb35
        return result;
    }
    int32_t * v6 = (int32_t *)(a3 + 87); // 0xebafe
    int32_t v7 = a3; // 0xebafe
    int32_t v8 = *v6 + v7; // 0xebafe
    unsigned char v9 = llvm_ctpop_i8((char)v8); // 0xebafe
    *v6 = v8;
    if (v9 % 2 == 0) {
        function_ebac7();
    }
    // 0xebb04
    unknown_ffffffffce969d0a();
    int32_t * v10 = (int32_t *)(v1 - 17); // 0xebb09
    *v10 = *v10 + v7;
    int32_t * v11 = (int32_t *)(a5 - 0x67a9ed79); // 0xebb0c
    *v11 = *v11 + (int32_t)v1;
    return unknown_1a16cc19() & -0xff01 | 0x8000;
}

// Address range: 0xebb38 - 0xebbd4
int64_t function_ebb38(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6;
    char * v2 = (char *)(a1 + 39); // 0xebb39
    *v2 = (char)(a3 / 256);
    int64_t v3 = 256 * (int64_t)*v2 | a3 & -0xff01; // 0xebb39
    int64_t v4; // 0xebb38
    bool v5; // 0xebb38
    if (true == !v5) {
        // 0xebbbd
        __asm_out_133(-44, (int32_t)(256 * (64 * (int64_t)v5 | 128 * (int64_t)v5 | 16 * (int64_t)v5 | (int64_t)v5 | 4 * (int64_t)v5) | v4 & 0xffff00ff) | 512);
        int32_t * v6 = (int32_t *)(5 * v3); // 0xebbc0
        *v6 = *v6 + (int32_t)(int64_t)&v1;
        int32_t v7 = __asm_in(53); // 0xebbc3
        *(char *)0x16c892cc = *(char *)0x16c892cc + (char)(v4 / 256);
        return (int64_t)(*(int32_t *)(int64_t)v7 + v7);
    }
    // 0xebb3e
    __asm_out((int16_t)v3, (char)v4);
    int64_t v8 = v4 + a2; // 0xebb41
    int64_t result = v8 & 0xffffffff; // 0xebb43
    uint64_t v9 = a4 / 256; // 0xebb44
    int64_t v10 = 2 * v9;
    if ((char)v10 < 0 == (char)(v10 ^ v9) < 0) {
        // 0xebb48
        return result;
    }
    char * v11 = (char *)(result + 55); // 0xebb66
    *v11 = *v11 + (char)v8;
    char * v12 = (char *)v3; // 0xebb6a
    *v12 = *v12 + (char)a3;
    return unknown_ffffffffe814a373();
}

// Address range: 0xebbef - 0xebbf2
int64_t function_ebbef(void) {
    // 0xebbef
    int64_t result; // 0xebbef
    return result;
}

// Address range: 0xebc00 - 0xebc02
int64_t function_ebc00(void) {
    // 0xebc00
    return function_ebc46();
}

// Address range: 0xebc2a - 0xebc2b
int64_t function_ebc2a(int64_t a1) {
    // 0xebc2a
    int64_t result; // 0xebc2a
    return result;
}

// Address range: 0xebc46 - 0xebc4c
int64_t function_ebc46(void) {
    // 0xebc46
    int64_t result; // 0xebc46
    char * v1 = (char *)(result + 0x6801e811); // 0xebc46
    bool v2; // 0xebc46
    *v1 = *v1 + (char)result + (char)v2;
    return result;
}

// Address range: 0xebd11 - 0xebd17
int64_t function_ebd11(int64_t a1) {
    // 0xebd11
    int64_t result; // 0xebd11
    return result;
}

// Address range: 0xebd1a - 0xebd28
int64_t function_ebd1a(int64_t a1) {
    // 0xebd1a
    unknown_ffffffffac141d20(a1);
    return function_ffffffffc5b5b967();
}

// Address range: 0xebd28 - 0xebd62
int64_t function_ebd28(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x3866b745); // 0xebd37
    int64_t v2; // 0xebd28
    *v1 = *v1 + (int32_t)v2;
    int64_t result = v2 + 0xbdb5527b & 0xffffffff; // 0xebd3d
    int32_t * v3 = (int32_t *)(result - 58); // 0xebd48
    *v3 = *v3 + (int32_t)v2;
    char * v4 = (char *)(v2 - 0x17ab7afd); // 0xebd51
    *v4 = *v4 - (char)(v2 / 256);
    int32_t * v5 = (int32_t *)(result + 32); // 0xebd57
    *v5 = *v5 + (int32_t)a3;
    return result;
}

// Address range: 0xebd62 - 0xebd6f
int64_t function_ebd62(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3 & -0xff01 | (int64_t)&g1; // 0xebd62
    int64_t v2; // 0xebd62
    *(char *)a1 = (char)v2;
    bool v3; // 0xebd62
    int64_t v4 = v3 ? -1 : 1; // 0xebd64
    unknown_ffffffffd418f96b(v4 + a1, v4 + a2, v1);
    return v1 & 0xffffffff;
}

// Address range: 0xebd70 - 0xebd71
int64_t function_ebd70(int64_t a1) {
    // 0xebd70
    int64_t result; // 0xebd70
    return result;
}

// Address range: 0xebe05 - 0xebe13
int64_t function_ebe05(int64_t a1, int64_t a2) {
    // 0xebe05
    int64_t v1; // 0xebe05
    *(char *)0x3e039f52 = *(char *)0x3e039f52 | (char)v1;
    int32_t * v2 = (int32_t *)(a2 - 87); // 0xebe0b
    *v2 = *v2 + (int32_t)a1;
    return function_39ed284();
}

// Address range: 0xebe68 - 0xebe6b
int64_t function_ebe68(void) {
    // 0xebe68
    int64_t result; // 0xebe68
    return result;
}

// Address range: 0xebeaa - 0xebeb2
int64_t function_ebeaa(void) {
    // 0xebeaa
    int64_t v1; // 0xebeaa
    return v1 + 0x1e85417 & 0xffffffff;
}

// Address range: 0xec19c - 0xec1ab
int64_t function_ec19c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xec19c
    int64_t v1; // 0xec19c
    unsigned char v2 = (char)v1;
    unsigned char v3 = 2 * v2; // 0xec19c
    *(char *)v1 = v3;
    int64_t v4; // 0xec19c
    int32_t v5 = *(int32_t *)&v4; // 0xec19e
    return unknown_79498fa8((int32_t)(v3 < v2) + (int32_t)a1 - v5);
}

// Address range: 0xec246 - 0xec277
int64_t function_ec246(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = *(char *)-0x78bd3db3; // 0xec246
    int64_t v2; // 0xec246
    *(char *)-0x78bd3db3 = (char)(v2 / 256);
    int64_t v3 = a4 & 0xffffffff; // 0xec251
    *(int16_t *)v3 = (int16_t)*(int64_t *)(a4 - 24);
    int64_t v4 = unknown_ffffffffe8e40064(v3); // 0xec25e
    *(int32_t *)0x4ff2006a = *(int32_t *)0x4ff2006a + (int32_t)a4;
    int32_t * v5 = (int32_t *)(v3 - 35); // 0xec270
    *v5 = *v5 + (int32_t)(256 * (int64_t)v1 | v2 & 0xffff00ff);
    *(int64_t *)v2 = v3;
    return v4 & -244;
}

// Address range: 0xec344 - 0xec345
int64_t function_ec344(void) {
    // 0xec344
    int64_t result; // 0xec344
    return result;
}

// Address range: 0xec380 - 0xec381
int64_t function_ec380(int64_t a1) {
    // 0xec380
    int64_t result; // 0xec380
    return result;
}

// Address range: 0x2574c2 - 0x2574f9
int64_t function_2574c2(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3;
    *(int32_t *)-0x5f022032 = *(int32_t *)-0x5f022032 + (int32_t)a1;
    int64_t v2 = unknown_3b2528db(); // 0x2574d5
    float80_t v3; // 0x2574c2
    *(int64_t *)a3 = (int64_t)v3;
    int32_t * v4 = (int32_t *)(v1 + 0x1e84fd2); // 0x2574dc
    *v4 = *v4 + (int32_t)v2;
    *(char *)v1 = *(char *)&v1 + (char)v2;
    *(int32_t *)a1 = __asm_insd((int16_t)v1);
    int64_t result = unknown_56b2adef(); // 0x2574e9
    *(char *)result = (char)v1;
    int64_t v5; // 0x2574c2
    char * v6 = (char *)(8 * v5 + a2); // 0x2574f0
    *v6 = *v6 - 17;
    return result;
}

// Address range: 0x257545 - 0x257546
int64_t function_257545(void) {
    // 0x257545
    int64_t result; // 0x257545
    return result;
}

// Address range: 0x2575d9 - 0x2575dd
int64_t function_2575d9(void) {
    // 0x2575d9
    return function_25762e();
}

// Address range: 0x257609 - 0x25760a
int64_t function_257609(void) {
    // 0x257609
    int64_t result; // 0x257609
    return result;
}

// Address range: 0x257629 - 0x25762a
int64_t function_257629(void) {
    // 0x257629
    int64_t result; // 0x257629
    return result;
}

// Address range: 0x25762a - 0x25762b
int64_t function_25762a(void) {
    // 0x25762a
    int64_t result; // 0x25762a
    return result;
}

// Address range: 0x25762b - 0x25762e
int64_t function_25762b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25762b
    int64_t result; // 0x25762b
    int32_t * v1 = (int32_t *)(result - 66); // 0x25762b
    *v1 = *v1 | (int32_t)a4;
    return result;
}

// Address range: 0x25762e - 0x25762f
int64_t function_25762e(void) {
    // 0x25762e
    int64_t result; // 0x25762e
    return result;
}

// Address range: 0x257630 - 0x257631
int64_t function_257630(void) {
    // 0x257630
    int64_t result; // 0x257630
    return result;
}

// Address range: 0x257631 - 0x25769e
int64_t function_257631(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3 = a1;
    int64_t v4 = unknown_65e8fa37(); // 0x257636
    bool v5; // 0x257631
    if (true == !v5) {
        v4 = function_257609();
    }
    int32_t * v6 = (int32_t *)(v4 - 0x2ff865fa); // 0x257638
    int64_t v7; // 0x257631
    int32_t v8 = v7; // 0x257638
    *v6 = *v6 + v8;
    char v9 = __asm_in_134(-24); // 0x257641
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)a4;
    uint32_t v10 = *(int32_t *)&v1; // 0x257645
    uint32_t v11 = v10 + (int32_t)v3; // 0x257645
    *(int32_t *)v1 = v11;
    char * v12 = (char *)(a4 - 120); // 0x25764a
    char v13 = *v12; // 0x25764a
    unsigned char v14 = (char)a4 % 32; // 0x25764a
    bool v15 = v11 < v10; // 0x25764a
    if (v14 != 0) {
        *v12 = v13 >> v14;
        v15 = (v13 & 1 << v14 - 1) != 0;
    }
    char v16 = *(char *)&v2;
    __asm_outsb((int16_t)v1, v16);
    *(char *)-0x6f68aa6768fe1728 = v9;
    *(char *)v2 = (char)v15 - (char)(v7 / 256) + v16;
    unknown_62d0e045();
    *(int32_t *)v3 = __asm_insd((int16_t)v1);
    int64_t v17 = unknown_a290666(); // 0x257660
    int64_t v18 = v3;
    float80_t v19; // 0x257631
    *(int16_t *)(a4 + 0x1e8d74f) = (int16_t)v19;
    int64_t v20 = unknown_ffffffffe48ab27e((v18 - v7) % 256 | v18 & -256); // 0x25767d
    if ((int32_t)v17 != 0x1001e801) {
        v20 = function_25762a();
    }
    int32_t v21 = (int32_t)v20 ^ -0x29b4fe18; // 0x257689
    int64_t v22 = v21; // 0x25768e
    if (v21 < 1) {
        v22 = function_257629();
    }
    char * v23 = (char *)v22; // 0x257690
    *v23 = *v23 + (char)v22;
    int32_t * v24 = (int32_t *)v22; // 0x257697
    *v24 = *v24 & v8;
    return function_18497841();
}

// Address range: 0x25769e - 0x2576a5
int64_t function_25769e(void) {
    // 0x25769e
    int64_t v1; // 0x25769e
    char * v2 = (char *)(v1 + 88); // 0x25769e
    *v2 = *v2 + 1;
    return function_257630();
}

// Address range: 0x257702 - 0x257703
int64_t function_257702(void) {
    // 0x257702
    int64_t result; // 0x257702
    return result;
}

// Address range: 0x257746 - 0x257747
int64_t function_257746(void) {
    // 0x257746
    int64_t result; // 0x257746
    return result;
}

// Address range: 0x257751 - 0x25778d
int64_t function_257751(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x257751
    int64_t v1; // 0x257751
    char * v2 = (char *)(v1 + 8 * v1); // 0x257751
    char v3 = *v2; // 0x257751
    bool v4; // 0x257751
    char v5 = v3 - (v4 ? 2 : 1); // 0x257751
    *v2 = v5;
    int64_t result; // 0x257751
    if ((-1 - v5 + (char)v4 & v3) >= 0) {
        // 0x257757
        return result;
    }
    int64_t v6 = (v4 ? -1 : 1) + a1; // 0x25776f
    __asm_sti(v6);
    int64_t v7 = unknown_ffffffffb899e578(); // 0x257772
    int32_t * v8 = (int32_t *)(v7 + v1); // 0x257777
    *v8 = *v8 & -0x176caee2;
    int32_t * v9 = (int32_t *)(v7 + 0x7fb0201e); // 0x25777e
    uint32_t v10 = (int32_t)v1; // 0x25777e
    *v9 = *v9 + v10;
    __asm_sti(v6);
    result = v1 & 0xffffffff;
    if (-1 - v10 < v10) {
        result = function_257746();
    }
    // 0x257757
    return result;
}

// Address range: 0x25778f - 0x2577ac
int64_t function_25778f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25778f
    bool v1; // 0x25778f
    int64_t v2 = v1 ? -4 : 4; // 0x257798
    int64_t result = unknown_3a383fa6(v2 + a1, v2 + a2); // 0x2577a0
    char * v3 = (char *)(result - 113); // 0x2577a5
    *v3 = 2 * *v3;
    return result;
}

// Address range: 0x25783a - 0x25783d
int64_t function_25783a(void) {
    // 0x25783a
    int64_t result; // 0x25783a
    return result;
}

// Address range: 0x257857 - 0x257858
int64_t function_257857(int64_t a1) {
    // 0x257857
    int64_t result; // 0x257857
    return result;
}

// Address range: 0x257874 - 0x257885
int64_t function_257874(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 44); // 0x257881
    int64_t v2; // 0x257874
    *v1 = (int32_t)(int64_t)&v2 + (int32_t)a4 + *v1;
    return a2 & 0xffffffff;
}

// Address range: 0x257905 - 0x257909
int64_t function_257905(int64_t a1, int64_t a2) {
    // 0x257905
    return a1 & 0xffffffff;
}

// Address range: 0x257958 - 0x25795c
int64_t function_257958(int64_t a1) {
    // 0x257958
    int64_t result; // 0x257958
    return result;
}

// Address range: 0x25795d - 0x2579db
int64_t function_25795d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x25795d
    int64_t result; // 0x25795d
    bool v1; // 0x25795d
    if (!v1) {
        // 0x2579da
        return result;
    }
    // 0x25795f
    unknown_751f5b65();
    __asm_in(4);
    char * v2 = (char *)(a2 - 0x176365c6 + 4 * result); // 0x257966
    *v2 = *v2 + (char)(a4 / 256);
    int32_t * v3 = (int32_t *)(a2 + 9); // 0x25796d
    *v3 = *v3 + (int32_t)result;
    return function_ffffffffecf1e776();
}

// Address range: 0x2579e7 - 0x2579e9
int64_t function_2579e7(void) {
    // 0x2579e7
    int64_t result; // 0x2579e7
    return result;
}

// Address range: 0x257a20 - 0x257a23
int64_t function_257a20(void) {
    // 0x257a20
    int64_t result; // 0x257a20
    return result;
}

// Address range: 0x257a7c - 0x257a7e
int64_t function_257a7c(void) {
    // 0x257a7c
    int64_t result; // 0x257a7c
    return result;
}

// Address range: 0x2f3e1e - 0x2f3e20
int64_t function_2f3e1e(void) {
    // 0x2f3e1e
    int64_t result; // 0x2f3e1e
    int64_t v1 = result;
    *(char *)v1 = (char)v1 + 1;
    return result;
}

// Address range: 0x2f3e29 - 0x2f3e2a
int64_t function_2f3e29(int64_t a1) {
    // 0x2f3e29
    int64_t result; // 0x2f3e29
    return result;
}

// Address range: 0x2f3ed8 - 0x2f3ed9
int64_t function_2f3ed8(void) {
    // 0x2f3ed8
    int64_t result; // 0x2f3ed8
    return result;
}

// Address range: 0x2f3f05 - 0x2f3f0c
int64_t function_2f3f05(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2f3f05
    int64_t result; // 0x2f3f05
    int32_t * v1 = (int32_t *)(result + 110); // 0x2f3f05
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x2f3f1e - 0x2f3f1f
int64_t function_2f3f1e(int64_t a1) {
    // 0x2f3f1e
    int64_t result; // 0x2f3f1e
    return result;
}

// Address range: 0x2f3f2d - 0x2f3f2e
int64_t function_2f3f2d(int64_t a1) {
    // 0x2f3f2d
    int64_t result; // 0x2f3f2d
    return result;
}

// Address range: 0x2f3f35 - 0x2f3f36
int64_t function_2f3f35(void) {
    // 0x2f3f35
    int64_t result; // 0x2f3f35
    return result;
}

// Address range: 0x2f3f64 - 0x2f3f65
int64_t function_2f3f64(void) {
    // 0x2f3f64
    int64_t result; // 0x2f3f64
    return result;
}

// Address range: 0x2f3f7f - 0x2f3f9c
int64_t function_2f3f7f(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x2f3f7f
    int64_t v1; // 0x2f3f7f
    *(int32_t *)a2 = ((int32_t)unknown_ffffffffdf1aa08a() | 232) + (int32_t)v1;
    char * v2 = (char *)(v1 + 0x5a013d68); // 0x2f3f94
    *v2 = *v2 + (char)(a3 / 256);
    return function_2f3fe8(a1, a2, a3, v1);
}

// Address range: 0x2f3fa5 - 0x2f3fb6
int64_t function_2f3fa5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2f3fa5
    int64_t v1; // 0x2f3fa5
    bool v2; // 0x2f3fa5
    if (!v2) {
        v1 = function_2f3f64();
    }
    // 0x2f3fa7
    return v1 & -256 | (int64_t)__asm_in_135((int16_t)a3);
}

// Address range: 0x2f3fc6 - 0x2f3fcf
int64_t function_2f3fc6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f3fc6
    return __asm_in_136((int16_t)a3);
}

// Address range: 0x2f3fe8 - 0x2f401e
int64_t function_2f3fe8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f3fe8
    int64_t v1; // 0x2f3fe8
    uint32_t v2 = *(int32_t *)(v1 + 0x170013d7) | (int32_t)v1; // 0x2f3fe8
    int64_t result = v2; // 0x2f3fe8
    if (v2 >= 0x27e8be01) {
        // 0x2f4035
        return result;
    }
    int32_t * v3 = (int32_t *)(result - 0x6c4e52bb); // 0x2f4002
    *v3 = *v3 + (*(int32_t *)(4 * v1 + a2) & (int32_t)a4);
    bool v4; // 0x2f3fe8
    int32_t * v5 = (int32_t *)(((v4 ? 0xfffffffc : 4) + a1 & 0xffffffff) + 109); // 0x2f400f
    *v5 = *v5 + (int32_t)v1;
    return v1 + result & 0xffffffff ^ 0xe88e271a;
}
