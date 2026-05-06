/*
 * Targeted RetDec C for native executable gap queue batch 266.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x21d666-0x21d866 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21d866-0x21da66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21da66-0x21dc66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2568c2-0x256ac2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x256ac2-0x256cc2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x256cc2-0x256ec2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x256ec2-0x2570c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2570c2-0x2572c2 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g1;
extern int g2;
extern int g3;
extern int g4;
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

int64_t function_21d666(void);
int64_t function_21d691(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_21d6a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_21d716(void);
int64_t function_21d73a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21d77b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_21d80c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21d824(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_21d836(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_21d893(void);
int64_t function_21d8e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_21d8fc(void);
int64_t function_21d92d(int64_t a1, int64_t a2);
int64_t function_21da33(int64_t a1);
int64_t function_21da4f(void);
int64_t function_21daa4(void);
int64_t function_21dac6(int64_t a1);
int64_t function_21dac8(void);
int64_t function_21dad6(void);
int64_t function_21dadb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21db07(void);
int64_t function_21db09(void);
int64_t function_21db0c(int64_t a1, int64_t a2);
int64_t function_21db51(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_21db62(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_21db9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21dba3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_21dbfb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21dc1d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_21dc39(int64_t a1, int64_t a2, int64_t a3);
int64_t function_21dc57(void);
int64_t function_256877();
int64_t function_25688b();
int64_t function_2568c2(int64_t a1, int64_t a2);
int64_t function_256933(void);
int64_t function_25693b(void);
int64_t function_256959(int64_t a1);
int64_t function_256994(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2569bc(void);
int64_t function_256a16(int64_t a1);
int64_t function_256a57(int64_t a1, int64_t a2, int64_t a3);
int64_t function_256a7e(void);
int64_t function_256b4f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_256bc1(void);
int64_t function_256bc3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_256bcd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_256c2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_256c71(void);
int64_t function_256c9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_256cb0(void);
int64_t function_256cd5(void);
int64_t function_256cde(void);
int64_t function_256ce3(void);
int64_t function_256cfc(void);
int64_t function_256d00(void);
int64_t function_256d12(void);
int64_t function_256d14(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_256d55(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_256dd0(void);
int64_t function_256e22(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_256e50(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_256e8e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_256ed7(void);
int64_t function_256ee0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_256f3c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_256fe9(void);
int64_t function_257036(int64_t a1, int64_t a2, int64_t a3);
int64_t function_25704b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_257067(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_257093(int64_t a1);
int64_t function_2570cc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_257155(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_257165(void);
int64_t function_25717b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25718a(int64_t a1);
int64_t function_2571b8(int64_t a1);
int64_t function_2571b9(void);
int64_t function_2571bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25720e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25728b(void);
int64_t function_3517dc51();
int64_t function_3e51b3b7();
int64_t function_5ead28d0();
int64_t function_75d07265();
int64_t function_ffffffff85b170e0();
int64_t function_ffffffff8a23c367();
int64_t function_ffffffff8cdfdcfd();
int64_t function_ffffffff9bbc6bc0();
int64_t unknown_101db341();
int64_t unknown_217beb74();
int64_t unknown_21f92439();
int64_t unknown_281bb762();
int64_t unknown_2c6f31c2();
int64_t unknown_3ab96c79();
int64_t unknown_472a51a4();
int64_t unknown_6a088e55();
int64_t unknown_795c598c();
int64_t unknown_b2a8870();
int64_t unknown_ffffffff90a1da5e();
int64_t unknown_ffffffffcd1bcb6a();
int64_t unknown_ffffffffd040f054();
int64_t unknown_ffffffffd57cbb28();
int64_t unknown_ffffffffe834ff40();
int64_t unknown_ffffffffe9057779();
int64_t unknown_ffffffffe91186a0();
int64_t unknown_ffffffffef84f303();

// Address range: 0x21d666 - 0x21d66f
int64_t function_21d666(void) {
    // 0x21d666
    int64_t v1; // 0x21d666
    int64_t result = *(int64_t *)(v1 * (int64_t)(int16_t)&g3 & 0xfffc | v1 & -0x10000); // 0x21d66b
    return result;
}

// Address range: 0x21d691 - 0x21d6a8
int64_t function_21d691(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x21d691
    bool v1; // 0x21d691
    *(char *)((v1 ? -1 : 1) + a1) = __asm_insb((int16_t)a3);
    int64_t v2 = unknown_ffffffffe91186a0() + 0xc0d448be; // 0x21d69f
    __asm_out(121, (int32_t)v2);
    return v2 & 0xffffffff;
}

// Address range: 0x21d6a8 - 0x21d6ad
int64_t function_21d6a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x21d6a8
    int64_t result; // 0x21d6a8
    return result;
}

// Address range: 0x21d716 - 0x21d717
int64_t function_21d716(void) {
    // 0x21d716
    int64_t result; // 0x21d716
    return result;
}

// Address range: 0x21d73a - 0x21d778
int64_t function_21d73a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21d73a
    int64_t v1; // 0x21d73a
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)v1; // 0x21d73a
    bool v4; // 0x21d73a
    uint32_t v5 = v3 + 0xc01134b + (int32_t)v4; // 0x21d73a
    int32_t v6 = *(int32_t *)(int64_t)v5; // 0x21d740
    uint32_t v7 = v6 + v5 + (int32_t)(v4 ? v5 <= v3 : v3 > 0xf3feecb4); // 0x21d740
    int64_t result = v7; // 0x21d740
    *(char *)v2 = (char)v2 & 61;
    int32_t * v8 = (int32_t *)result; // 0x21d745
    *v8 = v7 + *v8;
    if (a4 == 1) {
        // 0x21d74a
        return unknown_ffffffffe9057779();
    }
    // 0x21d779
    return result;
}

// Address range: 0x21d77b - 0x21d80c
int64_t function_21d77b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x21d77b
    int64_t v1; // 0x21d77b
    uint64_t v2 = v1;
    int64_t v3 = v1;
    char * v4 = (char *)(v2 - 28); // 0x21d780
    *v4 = (char)((int32_t)v3 < 0x8646a001) - (char)v3 + *v4;
    int64_t v5 = a4 - 1; // 0x21d783
    if (v5 != 0) {
        function_21d716();
    }
    int64_t v6 = unknown_795c598c(); // 0x21d785
    char * v7 = (char *)(a4 + 0x1e8da91); // 0x21d78b
    char v8 = *v7 + (char)(v2 / 256); // 0x21d78b
    *v7 = v8;
    while (v8 >= 0) {
        int64_t v9 = v5;
        v5 = v9 - 1;
        if (v5 != 0) {
            function_21d716();
        }
        // 0x21d785
        v6 = unknown_795c598c();
        v7 = (char *)(v9 + 0x1e8da91);
        v8 = *v7 + (char)(v2 / 256);
        *v7 = v8;
    }
    // 0x21d809
    return 2 * v6 & 0xfffffffe;
}

// Address range: 0x21d80c - 0x21d823
int64_t function_21d80c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21d80c
    int64_t result; // 0x21d80c
    *(char *)0x5101e8ad00a0fcd8 = (char)result;
    return result;
}

// Address range: 0x21d824 - 0x21d836
int64_t function_21d824(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x21d824
    int64_t v1; // 0x21d824
    char * v2 = (char *)v1; // 0x21d826
    *v2 = *v2 + 48;
    int64_t v3; // 0x21d824
    uint32_t v4 = *(int32_t *)&v3 | (int32_t)v1; // 0x21d829
    int32_t * v5 = (int32_t *)(a3 + 1); // 0x21d82d
    *v5 = *v5 + (int32_t)v1;
    int64_t v6; // 0x21d824
    char v7 = *(char *)&v6; // 0x21d830
    return (int64_t)(v7 + (char)(a4 / 256 + (int64_t)v4)) | (int64_t)(v4 & -256);
}

// Address range: 0x21d836 - 0x21d858
int64_t function_21d836(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x21d836
    int64_t v1; // 0x21d836
    *(int32_t *)a3 = (int32_t)v1 - (int32_t)a1;
    char * v2 = (char *)(a3 + a2); // 0x21d844
    *v2 = *v2 + (char)(a3 / 256);
    char v3 = *(char *)-0x645a26e3; // 0x21d847
    __asm_in((int16_t)(a3 & 0xff00 | (int64_t)(v3 & (char)a3)));
    return unknown_ffffffffd040f054();
}

// Address range: 0x21d893 - 0x21d894
int64_t function_21d893(void) {
    // 0x21d893
    int64_t result; // 0x21d893
    return result;
}

// Address range: 0x21d8e3 - 0x21d8f1
int64_t function_21d8e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x21d8e3
    int64_t v1; // 0x21d8e3
    int64_t v2 = v1;
    bool v3; // 0x21d8e3
    int64_t result = (v2 - (v3 ? 233 : 232)) % 256 | v2 & -256; // 0x21d8e3
    int32_t * v4 = (int32_t *)result; // 0x21d8e5
    *v4 = *v4 + (int32_t)a4;
    return result;
}

// Address range: 0x21d8fc - 0x21d905
int64_t function_21d8fc(void) {
    // 0x21d8fc
    int64_t v1; // 0x21d8fc
    __asm_out_133(-80, (char)v1);
    return __asm_hlt();
}

// Address range: 0x21d92d - 0x21d937
int64_t function_21d92d(int64_t a1, int64_t a2) {
    // 0x21d92d
    int64_t result; // 0x21d92d
    return result;
}

// Address range: 0x21da33 - 0x21da39
int64_t function_21da33(int64_t a1) {
    // 0x21da33
    return unknown_21f92439(a1);
}

// Address range: 0x21da4f - 0x21da5d
int64_t function_21da4f(void) {
    // 0x21da4f
    return unknown_6a088e55();
}

// Address range: 0x21daa4 - 0x21daa7
int64_t function_21daa4(void) {
    // 0x21daa4
    int64_t result; // 0x21daa4
    return result;
}

// Address range: 0x21dac6 - 0x21dac7
int64_t function_21dac6(int64_t a1) {
    // 0x21dac6
    int64_t result; // 0x21dac6
    return result;
}

// Address range: 0x21dac8 - 0x21dacd
int64_t function_21dac8(void) {
    // 0x21dac8
    return function_ffffffff8a23c367();
}

// Address range: 0x21dad6 - 0x21dad7
int64_t function_21dad6(void) {
    // 0x21dad6
    int64_t result; // 0x21dad6
    return result;
}

// Address range: 0x21dadb - 0x21dadf
int64_t function_21dadb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21dadb
    return function_21db09();
}

// Address range: 0x21db07 - 0x21db08
int64_t function_21db07(void) {
    // 0x21db07
    int64_t result; // 0x21db07
    return result;
}

// Address range: 0x21db09 - 0x21db0a
int64_t function_21db09(void) {
    // 0x21db09
    int64_t result; // 0x21db09
    return result;
}

// Address range: 0x21db0c - 0x21db18
int64_t function_21db0c(int64_t a1, int64_t a2) {
    // 0x21db0c
    int64_t v1; // 0x21db0c
    int32_t * v2 = (int32_t *)(v1 - 0x747c0074); // 0x21db0c
    *v2 = *v2 - (int32_t)a2;
    return function_21dad6();
}

// Address range: 0x21db51 - 0x21db5d
int64_t function_21db51(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a4 + 0x2b0620f0); // 0x21db54
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x21db51
    return result;
}

// Address range: 0x21db62 - 0x21db9e
int64_t function_21db62(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x21db62
    bool v1; // 0x21db62
    if (v1 || false) {
        function_21db07();
    }
    // 0x21db64
    unknown_ffffffffcd1bcb6a();
    int64_t v2 = unknown_3ab96c79(); // 0x21db73
    int64_t v3 = (v2 + a4 / 256) % 256 | v2 & -256; // 0x21db7f
    int32_t * v4 = (int32_t *)(v3 + 124); // 0x21db81
    int64_t v5; // 0x21db62
    *v4 = *v4 + (int32_t)v5;
    return (v3 | 0x8dca61ab) + 0xa9d301e8 & 0xfffffff7;
}

// Address range: 0x21db9f - 0x21dba1
int64_t function_21db9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21db9f
    int64_t result; // 0x21db9f
    return result;
}

// Address range: 0x21dba3 - 0x21dbd8
int64_t function_21dba3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x21dba3
    int64_t v1; // 0x21dba3
    int32_t * v2 = (int32_t *)(v1 + 11); // 0x21dba7
    *v2 = 2 * *v2;
    int16_t v3 = a3; // 0x21dbb3
    __asm_in(v3);
    int64_t v4 = unknown_2c6f31c2(); // 0x21dbbc
    *(char *)a2 = (char)v4;
    int64_t v5; // 0x21dba3
    __asm_outsd(v3, *(int32_t *)&v5);
    int32_t * v6 = (int32_t *)((v4 & 0xffffffff) - 10); // 0x21dbcc
    *v6 = *v6 + (int32_t)v4;
    __asm_hlt();
    return function_3517dc51();
}

// Address range: 0x21dbfb - 0x21dc04
int64_t function_21dbfb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 - 0x4b861ab7); // 0x21dbfb
    int64_t v2; // 0x21dbfb
    *v1 = *v1 | (char)v2;
    int64_t v3; // 0x21dbfb
    return (int64_t)(*(int32_t *)&v3 & (int32_t)v2);
}

// Address range: 0x21dc1d - 0x21dc39
int64_t function_21dc1d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x21dc1d
    int64_t v1; // 0x21dc1d
    uint32_t v2 = *(int32_t *)(8 * v1 + 0x13d0001 + v1) + (int32_t)v1; // 0x21dc1d
    float80_t v3; // 0x21dc1d
    *(int64_t *)(a1 + 11) = (int64_t)v3;
    int64_t v4 = __asm_hlt(); // 0x21dc2e
    char * v5 = (char *)(v1 - 41); // 0x21dc2f
    *v5 = *v5 - (char)(a4 / 256);
    unsigned char v6 = *(char *)((v4 & 0xffffffff) + (int64_t)(v2 % 256)); // 0x21dc33
    *(char *)a1 = v6;
    return (int64_t)v6 | (int64_t)(v2 & -256);
}

// Address range: 0x21dc39 - 0x21dc4a
int64_t function_21dc39(int64_t a1, int64_t a2, int64_t a3) {
    // 0x21dc39
    bool v1; // 0x21dc39
    int64_t v2 = v1 ? -4 : 4; // 0x21dc44
    return function_ffffffff8cdfdcfd(v2 + 0x3db2f1b3, v2 + a2);
}

// Address range: 0x21dc57 - 0x21dc5c
int64_t function_21dc57(void) {
    // 0x21dc57
    return function_5ead28d0();
}

// Address range: 0x2568c2 - 0x2568df
int64_t function_2568c2(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 0x5c701798); // 0x2568c6
    int32_t v2 = *v1; // 0x2568c6
    int64_t v3; // 0x2568c2
    int32_t v4 = v3; // 0x2568c6
    int32_t v5 = v2 + v4; // 0x2568c6
    *v1 = v5;
    int64_t v6 = v3 | 232; // 0x2568cc
    if (v5 < 0 == ((v5 ^ v2) & (v5 ^ v4)) < 0) {
        v6 = function_25688b();
    }
    unsigned char v7 = *(char *)(v6 % 256 + v3); // 0x2568ce
    *(char *)0x35bc01e8cff2b2ad = v7;
    int64_t result = v6 & -256 | (int64_t)v7; // 0x2568dd
    if (v5 != 0) {
        result = function_256877();
    }
    // 0x2568df
    return result;
}

// Address range: 0x256933 - 0x256934
int64_t function_256933(void) {
    // 0x256933
    int64_t result; // 0x256933
    return result;
}

// Address range: 0x25693b - 0x256942
int64_t function_25693b(void) {
    // 0x25693b
    unknown_101db341();
    return function_2569bc();
}

// Address range: 0x256959 - 0x25695a
int64_t function_256959(int64_t a1) {
    // 0x256959
    int64_t result; // 0x256959
    return result;
}

// Address range: 0x256994 - 0x2569a4
int64_t function_256994(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 0x7cccf8e); // 0x256994
    int64_t v2; // 0x256994
    int32_t v3 = *v1 + (int32_t)v2; // 0x256994
    *v1 = v3;
    if (v3 == 0) {
        function_256933();
    }
    // 0x25699c
    return unknown_472a51a4();
}

// Address range: 0x2569bc - 0x2569c2
int64_t function_2569bc(void) {
    // 0x2569bc
    int64_t result; // 0x2569bc
    return result;
}

// Address range: 0x256a16 - 0x256a19
int64_t function_256a16(int64_t a1) {
    // 0x256a16
    int64_t result; // 0x256a16
    return result;
}

// Address range: 0x256a57 - 0x256a61
int64_t function_256a57(int64_t a1, int64_t a2, int64_t a3) {
    // 0x256a57
    int64_t result; // 0x256a57
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x256a7e - 0x256a83
int64_t function_256a7e(void) {
    // 0x256a7e
    return function_ffffffff9bbc6bc0();
}

// Address range: 0x256b4f - 0x256bbf
int64_t function_256b4f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x256b4f
    int64_t v1; // 0x256b4f
    uint64_t v2 = v1;
    unsigned char v3 = *(char *)(v2 + 2 * v1) | (char)(v2 / 256); // 0x256b4f
    int64_t result = 256 * (int64_t)v3 | v2 & -0xff01; // 0x256b4f
    if (v3 == 0) {
        // 0x256bbc
        return result;
    }
    char * v4 = (char *)result; // 0x256b62
    *v4 = *v4 + 2 * (char)v2;
    int32_t v5 = result; // 0x256b68
    if ((0x761b2200 - v5 & v5) >= 0) {
        // 0x256bbc
        return result;
    }
    // 0x256b70
    __asm_out(-93, v5);
    *(int64_t *)0x7f914efa = 0x7f914f02;
    return result;
}

// Address range: 0x256bc1 - 0x256bc3
int64_t function_256bc1(void) {
    // 0x256bc1
    int64_t v1; // 0x256bc1
    return function_256c2b(v1, v1, v1, v1);
}

// Address range: 0x256bc3 - 0x256bcc
int64_t function_256bc3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x256bc3
    int64_t v1; // 0x256bc3
    *(int32_t *)a3 = (int32_t)(v1 | a1);
    char v2 = *(char *)0x274bcacc; // 0x256bc5
    *(char *)0x274bcacc = v2 + (char)((uint64_t)v1 / 256);
    return a1 & 0xffffffff;
}

// Address range: 0x256bcd - 0x256be9
int64_t function_256bcd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a4 & -0xff01 | (int64_t)&g2; // 0x256bcd
    unsigned char v3 = (char)v2 % 32; // 0x256bd2
    if (v3 != 0) {
        char * v4 = (char *)(v2 + 27); // 0x256bd2
        unsigned char v5 = *v4; // 0x256bd2
        *v4 = v5 >> v3 | v5 << 8 - v3;
    }
    int64_t v6; // 0x256bcd
    char * v7 = (char *)(a1 + 0x6845eccb + v6); // 0x256bd5
    *v7 = *v7 + (char)v6;
    int64_t v8 = v1;
    *(char *)v8 = *(char *)&v1 + (char)v8;
    return __asm_iretd();
}

// Address range: 0x256c2b - 0x256c70
int64_t function_256c2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x256c2b
    int64_t v1; // 0x256c2b
    int64_t result2 = v1;
    bool v2; // 0x256c2b
    if (v2) {
        // 0x256c2d
        *(char *)result2 = 2 * (char)result2;
        int32_t * v3 = (int32_t *)(result2 - 0x1973299c); // 0x256c34
        *v3 = -*v3;
        int64_t result = unknown_ffffffffe834ff40(); // 0x256c3a
        int32_t * v4 = (int32_t *)(v1 - 115); // 0x256c3f
        *v4 = *v4 + (int32_t)result;
        return result;
    }
    int32_t * v5 = (int32_t *)(a2 + 0x243a07e9); // 0x256c43
    uint32_t v6 = (int32_t)result2; // 0x256c43
    *v5 = *v5 ^ v6;
    if (a4 != 1 && v6 != 0x14710001) {
        char * v7 = (char *)(v1 + 0x1c8fc237); // 0x256c53
        *v7 = *v7 + (char)result2;
        return result2;
    }
    if (v6 < 0x14710002) {
        // 0x256c52
        return result2;
    }
    // 0x256c6b
    return result2 + 0x63686e3a & 0xffffffff;
}

// Address range: 0x256c71 - 0x256c7f
int64_t function_256c71(void) {
    // 0x256c71
    int64_t v1; // 0x256c71
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x256c9c - 0x256ca7
int64_t function_256c9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x256c9c
    *(char *)a4 = 0;
    int64_t result; // 0x256c9c
    return result;
}

// Address range: 0x256cb0 - 0x256cb5
int64_t function_256cb0(void) {
    // 0x256cb0
    return function_3e51b3b7();
}

// Address range: 0x256cd5 - 0x256cd6
int64_t function_256cd5(void) {
    // 0x256cd5
    int64_t result; // 0x256cd5
    return result;
}

// Address range: 0x256cde - 0x256cdf
int64_t function_256cde(void) {
    // 0x256cde
    int64_t result; // 0x256cde
    return result;
}

// Address range: 0x256ce3 - 0x256ce4
int64_t function_256ce3(void) {
    // 0x256ce3
    int64_t result; // 0x256ce3
    return result;
}

// Address range: 0x256cfc - 0x256cfd
int64_t function_256cfc(void) {
    // 0x256cfc
    int64_t result; // 0x256cfc
    return result;
}

// Address range: 0x256d00 - 0x256d0a
int64_t function_256d00(void) {
    // 0x256d00
    return function_256cd5();
}

// Address range: 0x256d12 - 0x256d14
int64_t function_256d12(void) {
    // 0x256d12
    return function_256cde();
}

// Address range: 0x256d14 - 0x256d28
int64_t function_256d14(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x256d14
    int64_t v1; // 0x256d14
    uint32_t v2 = (int32_t)v1; // 0x256d19
    int32_t v3 = v2 + 0x309ea0ff; // 0x256d19
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x256d19
    __asm_int1();
    bool v5; // 0x256d14
    *(int64_t *)v1 = 0x4000 * (int64_t)v5 | (int64_t)(v2 < 0xcf615f01) | 1024 * (int64_t)v5 | 64 * (int64_t)(v3 == 0) | 128 * (int64_t)(v3 < 0) | 512 * (int64_t)v5 | 16 * (int64_t)(v2 % 16 > 16) | 256 * (int64_t)v5 | 2048 * (int64_t)(((v3 ^ v2) & (v2 ^ -0x80000000)) < 0) | 4 * (int64_t)(v4 % 2 == 0) | 2;
    int64_t v6; // 0x256d14
    *(char *)a1 = *(char *)&v6;
    return v1 & 0xffffffff;
}

// Address range: 0x256d55 - 0x256d78
int64_t function_256d55(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffff90a1da5e(); // 0x256d58
    int64_t v2 = (int64_t)(*(int32_t *)v1 + (int32_t)v1); // 0x256d61
    int64_t v3; // 0x256d55
    if (a4 != 1 && (int32_t)v3 != (int32_t)v3) {
        v2 = function_256cfc();
    }
    // 0x256d63
    bool v4; // 0x256d55
    int64_t v5 = v4 ? -4 : 4; // 0x256d5f
    int64_t v6 = v5 + a1; // 0x256d5f
    int64_t v7 = v5 + a2; // 0x256d5f
    *(int32_t *)-0x4527137665fe1768 = (int32_t)v2;
    *(int32_t *)v6 = *(int32_t *)v7;
    int64_t result = unknown_217beb74(v6 + (v4 ? -5 : 5), v7 + v5); // 0x256d6e
    char * v8 = (char *)((v3 & -256) + v3); // 0x256d73
    *v8 = *v8 & (char)(v3 / 256);
    return result;
}

// Address range: 0x256dd0 - 0x256dd3
int64_t function_256dd0(void) {
    // 0x256dd0
    int64_t result; // 0x256dd0
    return result;
}

// Address range: 0x256e22 - 0x256e3d
int64_t function_256e22(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffffd57cbb28(); // 0x256e22
    char * v1 = (char *)result; // 0x256e35
    unsigned char v2 = *v1; // 0x256e35
    unsigned char v3 = (char)result; // 0x256e35
    *v1 = v2 - v3;
    int32_t * v4 = (int32_t *)(a3 & -0xff01 | (int64_t)&g7); // 0x256e37
    *v4 = *v4 + 46 + (int32_t)(v2 < v3);
    return result;
}

// Address range: 0x256e50 - 0x256e74
int64_t function_256e50(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 0x2d5255a7); // 0x256e50
    int64_t v2; // 0x256e50
    *v1 = *v1 + (int32_t)v2;
    uint64_t v3 = unknown_281bb762(); // 0x256e5c
    unsigned char v4 = *(char *)(v3 % 256 + (v2 & -0xff01 | (int64_t)&g4)); // 0x256e66
    int64_t v5 = v3 & -256; // 0x256e66
    *(char *)((v5 | (int64_t)v4) - 0x17e102f2) = (char)(a4 / 256);
    int64_t v6; // 0x256e50
    uint32_t v7 = *(int32_t *)&v6; // 0x256e6e
    uint32_t v8 = v7 + (int32_t)a3; // 0x256e6e
    *(int32_t *)a1 = v8;
    return v5 | (int64_t)(v4 + 118 + (char)(v8 < v7));
}

// Address range: 0x256e8e - 0x256ea5
int64_t function_256e8e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x256e8e
    int64_t v1; // 0x256e8e
    *(char *)(a1 + 0x4b153fa9 + 4 * v1) = (char)(a4 / 256);
    int64_t result; // 0x256e8e
    unsigned char v2 = *(char *)&result; // 0x256e95
    *(char *)result = v2 / 128 | 2 * v2;
    __asm_out_133(-30, (char)result);
    *(int32_t *)0x71c891bf = *(int32_t *)0x71c891bf + (int32_t)v1;
    return result;
}

// Address range: 0x256ed7 - 0x256ed8
int64_t function_256ed7(void) {
    // 0x256ed7
    int64_t result; // 0x256ed7
    return result;
}

// Address range: 0x256ee0 - 0x256f3a
int64_t function_256ee0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3 & -0xff01 | (int64_t)&g1; // 0x256ee8
    int64_t v2 = __asm_hlt(); // 0x256eee
    int64_t v3; // 0x256ee0
    if (llvm_ctpop_i8((char)v3 + (char)v1) % 2 != 0) {
        // 0x256f36
        return (v2 + 140) % 256 | v2 & -256;
    }
    int32_t * v4 = (int32_t *)(v2 + *(int64_t *)(0x1801e81f * v3 & 0xffffffff) & 0xffffffff); // 0x256efb
    *v4 = *v4 + (int32_t)v1;
    return unknown_ffffffffef84f303();
}

// Address range: 0x256f3c - 0x256f55
int64_t function_256f3c(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = __asm_in_134((int16_t)a3); // 0x256f3e
    char v2 = *(char *)-0x17ac47b5; // 0x256f44
    int64_t v3; // 0x256f3c
    *(char *)-0x17ac47b5 = v2 + (char)((uint64_t)v3 / 256);
    unsigned char v4 = (char)v1; // 0x256f4a
    int64_t v5 = (int64_t)(v4 - 4) | (int64_t)(v1 & -256); // 0x256f4a
    int32_t v6 = v5; // 0x256f4e
    int32_t v7 = *(int32_t *)v5; // 0x256f4e
    int32_t v8 = v4 > 3; // 0x256f4e
    uint32_t v9 = v7 + v8 + v6; // 0x256f4e
    int32_t v10 = v9 + v8; // 0x256f4e
    int64_t result = v9; // 0x256f50
    if (((v10 ^ v6) & (v10 ^ v7)) < 0) {
        result = function_256ed7();
    }
    // 0x256f52
    return result;
}

// Address range: 0x256fe9 - 0x256fec
int64_t function_256fe9(void) {
    // 0x256fe9
    int64_t result; // 0x256fe9
    return result;
}

// Address range: 0x257036 - 0x25704b
int64_t function_257036(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 0x17ff66fa); // 0x257036
    int64_t v2; // 0x257036
    *v1 = *v1 | (int32_t)v2;
    int32_t * v3 = (int32_t *)(2 * a2 - 0x684ff276 + v2); // 0x25703c
    *v3 = *v3 + (int32_t)a2;
    return __asm_wait();
}

// Address range: 0x25704b - 0x257057
int64_t function_25704b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x25704b
    int64_t v1; // 0x25704b
    int32_t * v2 = (int32_t *)(v1 + 10); // 0x25704d
    *v2 = *v2 + (int32_t)v1;
    return function_ffffffff85b170e0();
}

// Address range: 0x257067 - 0x25707d
int64_t function_257067(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)unknown_b2a8870(); // 0x25706f
    *v1 = *v1 & 6;
    bool v2; // 0x257067
    int64_t v3 = v2 ? -1 : 1; // 0x257077
    return function_75d07265(v3 + a1, v3 + a2);
}

// Address range: 0x257093 - 0x257094
int64_t function_257093(int64_t a1) {
    // 0x257093
    int64_t result; // 0x257093
    return result;
}

// Address range: 0x2570cc - 0x2570d0
int64_t function_2570cc(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 - 127); // 0x2570cc
    *v1 = *v1 + (int32_t)a2;
    int64_t result; // 0x2570cc
    return result;
}

// Address range: 0x257155 - 0x257161
int64_t function_257155(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x257155
    int64_t v1; // 0x257155
    uint64_t result = v1;
    char * v2 = (char *)(a4 - 28); // 0x257155
    *v2 = *v2 + (char)(result / 256);
    return result;
}

// Address range: 0x257165 - 0x257166
int64_t function_257165(void) {
    // 0x257165
    int64_t result; // 0x257165
    return result;
}

// Address range: 0x25717b - 0x257184
int64_t function_25717b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x25717b
    int64_t result; // 0x25717b
    return result;
}

// Address range: 0x25718a - 0x257192
int64_t function_25718a(int64_t a1) {
    // 0x25718a
    int64_t v1; // 0x25718a
    int32_t v2 = v1;
    *(int32_t *)v1 = v2 - 1;
    *(int32_t *)a1 = v2;
    int64_t v3; // 0x25718a
    return (int64_t)*(int32_t *)&v3;
}

// Address range: 0x2571b8 - 0x2571b9
int64_t function_2571b8(int64_t a1) {
    // 0x2571b8
    int64_t result; // 0x2571b8
    return result;
}

// Address range: 0x2571b9 - 0x2571ba
int64_t function_2571b9(void) {
    // 0x2571b9
    int64_t result; // 0x2571b9
    return result;
}

// Address range: 0x2571bf - 0x2571dc
int64_t function_2571bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2571bf
    int64_t v1; // 0x2571bf
    uint64_t v2 = v1;
    char v3 = (char)(v2 / 256) + (char)v2; // 0x2571bf
    float80_t v4; // 0x2571bf
    *(float80_t *)(v1 - 0xafe177e) = __asm_fbstp(v4);
    int64_t v5; // 0x2571bf
    if (v3 != 0) {
        v5 = function_2571b9();
    }
    // 0x2571c9
    *(char *)-0x44da8f2a = *(char *)-0x44da8f2a + v3;
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return v5 + 0x931a644 & 0xffffffff;
}

// Address range: 0x25720e - 0x25725a
int64_t function_25720e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t result; // 0x25720e
    if (a4 != 0) {
        // 0x257210
        return result;
    }
    // 0x25721e
    int32_t v2; // 0x25720e
    *(int32_t *)(result + 7) = (int32_t)(int64_t)&v2;
    uint32_t v3 = *(int32_t *)&v1; // 0x257223
    bool v4; // 0x25720e
    *(int32_t *)v1 = 0x80000000 * v3 | 0x40000000 * (int32_t)v4 | v3 / 4;
    unsigned char v5 = *(char *)-0x464366c7; // 0x257232
    unsigned char v6 = v5 + (char)(result / 256); // 0x257232
    *(char *)-0x464366c7 = v6;
    int32_t v7 = *(int32_t *)&v1; // 0x257238
    *(int32_t *)v1 = v7 - (int32_t)result + (int32_t)(v6 < v5);
    int32_t * v8 = (int32_t *)(result + 0x4181c167); // 0x25723a
    *v8 = *v8 & (int32_t)v1;
    int64_t v9 = a2 & 0xffffff00; // 0x257240
    *(int32_t *)(((a2 + 190) % 256 | v9) + 106) = 255;
    return v9 | 143;
}

// Address range: 0x25728b - 0x25728c
int64_t function_25728b(void) {
    // 0x25728b
    int64_t result; // 0x25728b
    return result;
}
