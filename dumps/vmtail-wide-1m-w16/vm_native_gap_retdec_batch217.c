/*
 * Targeted RetDec C for native executable gap queue batch 217.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x17fc85-0x17fe85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x17fe85-0x180085 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e741e-0x2e761e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e761e-0x2e781e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e7a1e-0x2e7c1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e7c1e-0x2e7e1e rank=- name=- kind=- bytes=- uncovered=-
 *   0xe519c-0xe539c rank=- name=- kind=- bytes=- uncovered=-
 *   0xe539c-0xe559c rank=- name=- kind=- bytes=- uncovered=-
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
char __asm_in_136(uint16_t port);
char __asm_in_137(uint16_t port);
int32_t __asm_in_138(uint16_t port);
char __asm_insb(uint16_t port);
int32_t __asm_insd(uint16_t port);
void __asm_out(uint16_t port, char value);
void __asm_out_133(uint16_t port, int32_t value);
void __asm_out_134(uint16_t port, int32_t value);
void __asm_out_135(uint16_t port, int32_t value);
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

int64_t function_17fc78();
int64_t function_17fc85(void);
int64_t function_17fc88(void);
int64_t function_17fc8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17fd2d(void);
int64_t function_17fd45(int64_t a1, int64_t a2);
int64_t function_17fd52(int64_t a1);
int64_t function_17fd72(int64_t a1);
int64_t function_17fdf5(void);
int64_t function_17fdf9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17fe56(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e741e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e74dd(int64_t a1);
int64_t function_2e754a(int64_t a1, int64_t a2);
int64_t function_2e75b5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e75c4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2e760f(int64_t a1);
int64_t function_2e7651(void);
int64_t function_2e769f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e775a(void);
int64_t function_2e778d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e7799(void);
int64_t function_2e77a0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e77cc(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2e77f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e79c8();
int64_t function_2e7a1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e7a49(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e7a91(int64_t a1);
int64_t function_2e7b2d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e7b38(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e7b80(int64_t a1);
int64_t function_2e7b8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e7be3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e7c6b(void);
int64_t function_2e7c98(void);
int64_t function_2e7c9a(void);
int64_t function_2e7cbd(void);
int64_t function_2e7ccc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e7cdc(void);
int64_t function_2e7cf5(void);
int64_t function_2e7d1f(void);
int64_t function_2e7d3f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e7d52(int64_t a1, int64_t a2);
int64_t function_2e7dff(void);
int64_t function_7e2fb2dc();
int64_t function_cdc60();
int64_t function_e519c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e52ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e5420(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_e557f(void);
int64_t function_ffffffffc034d441();
int64_t unknown_6308df06();
int64_t unknown_6b004b57();
int64_t unknown_ffffffff82f06ead();
int64_t unknown_ffffffffc4d2f060();

// Address range: 0xe519c - 0xe52ce
int64_t function_e519c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe519c
    return function_cdc60(a1);
}

// Address range: 0xe52ce - 0xe5420
int64_t function_e52ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xe52ce
    return function_cdc60(a1);
}

// Address range: 0xe5420 - 0xe5570
int64_t function_e5420(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xe5420
    int64_t v1; // bp-40, 0xe5420
    int64_t v2 = (int64_t)&v1; // 0xe549a
    int64_t v3 = *(int64_t *)(v2 + 32); // 0xe54bc
    int64_t * v4 = (int64_t *)(v2 - 8); // 0xe54bc
    *v4 = v3;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0xe54c0
    *v5 = v3;
    int64_t v6 = *(int64_t *)(v2 + 16); // 0xe54d2
    *v5 = v6;
    *v4 = 0x2da03727;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0xe54f2
    *v7 = v3;
    int64_t v8 = v2 + 8; // 0xe54f8
    *(int64_t *)v8 = *v4;
    *v4 = 0x2b716c6e;
    *v7 = v6;
    *(int64_t *)(v2 + 24) = *v4;
    *v5 = a1;
    *v4 = v8;
    return function_cdc60(a1);
}

// Address range: 0xe557f - 0xe5584
int64_t function_e557f(void) {
    // 0xe557f
    int64_t result; // 0xe557f
    return result;
}

// Address range: 0x17fc85 - 0x17fc87
int64_t function_17fc85(void) {
    // 0x17fc85
    int64_t v1; // 0x17fc85
    return function_17fc8c(v1, v1, v1, v1);
}

// Address range: 0x17fc88 - 0x17fc8c
int64_t function_17fc88(void) {
    // 0x17fc88
    int64_t result; // 0x17fc88
    result = function_17fc78();
    // 0x17fc8a
    return result;
}

// Address range: 0x17fc8c - 0x17fc93
int64_t function_17fc8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17fc8c
    int64_t v1; // 0x17fc8c
    return v1 & 0x5aa7ffec | 0xa5580013;
}

// Address range: 0x17fd2d - 0x17fd2e
int64_t function_17fd2d(void) {
    // 0x17fd2d
    int64_t result; // 0x17fd2d
    return result;
}

// Address range: 0x17fd45 - 0x17fd49
int64_t function_17fd45(int64_t a1, int64_t a2) {
    // 0x17fd45
    int64_t result; // 0x17fd45
    int32_t * v1 = (int32_t *)(result + 4 * a1); // 0x17fd45
    *v1 = *v1 + (int32_t)a1;
    return result;
}

// Address range: 0x17fd52 - 0x17fd5d
int64_t function_17fd52(int64_t a1) {
    // 0x17fd52
    int64_t result; // 0x17fd52
    return result;
}

// Address range: 0x17fd72 - 0x17fd73
int64_t function_17fd72(int64_t a1) {
    // 0x17fd72
    int64_t result; // 0x17fd72
    return result;
}

// Address range: 0x17fdf5 - 0x17fdf6
int64_t function_17fdf5(void) {
    // 0x17fdf5
    int64_t result; // 0x17fdf5
    return result;
}

// Address range: 0x17fdf9 - 0x17fe22
int64_t function_17fdf9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x17fdf9
    *(char *)a1 = (char)v2;
    bool v3; // 0x17fdf9
    int64_t v4 = unknown_6308df06((v3 ? -1 : 1) + a1); // 0x17fe00
    int64_t v5; // bp-8, 0x17fdf9
    int64_t v6 = (int64_t)&v5; // bp-16, 0x17fe05
    int64_t v7 = v4; // 0x17fe07
    if (v3) {
        v7 = function_17fdf5();
    }
    uint64_t v8 = v1;
    *(char *)v8 = *(char *)&v1 + (char)(v8 / 256);
    int32_t * v9 = (int32_t *)((int64_t)&v6 - 24 + v7); // 0x17fe0c
    uint32_t v10 = *v9; // 0x17fe0c
    *v9 = v10 + 0x5809d6ff;
    uint64_t v11 = v1 - (v10 < 0xa7f62901 ? 0x911934e0 : 0x911934df); // 0x17fe15
    unsigned char v12 = (char)v11; // 0x17fe1a
    unsigned char v13 = (char)(v11 / 256); // 0x17fe1a
    unsigned char v14 = v13 + v12; // 0x17fe1a
    return v11 & 0xffff0000 | (int64_t)v14 | 256 * (64 * (int64_t)(v14 == 0) | (int64_t)(v14 < v12) | 128 * (int64_t)(v14 < 0) | 16 * (int64_t)(v13 % 16 + v12 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v14) % 2 == 0)) | 512;
}

// Address range: 0x17fe56 - 0x180050
int64_t function_17fe56(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = a3;
    int64_t v3 = a2;
    unknown_ffffffffc4d2f060();
    *(int32_t *)-0x17e6199a = *(int32_t *)-0x17e6199a >> 1;
    int32_t * v4 = (int32_t *)(a3 + 0x7db810d5); // 0x17fe65
    *v4 = *v4 + (int32_t)a4;
    uint32_t v5 = *(int32_t *)&v3; // 0x17fe6b
    int64_t result = v5; // 0x17fe6b
    bool v6; // 0x17fe56
    int64_t v7 = v6 ? -4 : 4; // 0x17fe6b
    int64_t v8 = v3 + v7; // 0x17fe6b
    v3 = v8;
    char * v9 = (char *)(a1 + 0x57c601e8 + 4 * v8); // 0x17fe6c
    unsigned char v10 = *v9; // 0x17fe6c
    char v11 = 2 * v10; // 0x17fe6c
    *v9 = v11;
    char v12 = v10 / 128; // 0x17fe6c
    if (v11 != 0 && v11 < 0 == (v10 / 64 % 2 != v12)) {
        char v13 = *(char *)&v1; // 0x17fe76
        return result & 0xffffff00 | (int64_t)((char)(v12 != 0) + (char)v5 + v13);
    }
    int64_t v14 = v1;
    __asm_int(41);
    int64_t v15 = v14 - 1; // 0x17fef5
    v1 = v15;
    char * v16; // 0x17fefe
    if (v15 == 0 | *(char *)&v2 == (char)v14) {
        // 0x17fefc
        v16 = (char *)(result + 5);
        *v16 = *v16 + (char)(result / 256);
        return result;
    }
    // 0x17ff3a
    *(char *)v15 = (char)v5;
    int64_t v17 = v7 + a1; // 0x17ff45
    int3_t v18; // 0x17fe56
    float80_t v19 = __frontend_reg_load_fpr(v18); // 0x17ff46
    int32_t * v20 = (int32_t *)v17; // 0x17ff46
    *v20 = (int32_t)v19;
    v1 = v1 & -256 | 212;
    char v21 = __asm_in((int16_t)v2); // 0x17ff4a
    char * v22 = (char *)v3; // 0x17ff4b
    char v23 = *v22; // 0x17ff4b
    *v22 = v23 >> 1;
    if (v23 >= 0) {
        uint64_t result2 = result & 0xffffff00 | (int64_t)v21;
        v16 = (char *)(result2 + 5);
        *v16 = *v16 + (char)(result2 / 256);
        return result2;
    }
    // 0x17ff4f
    *(char *)(4 * v3 + 0x1e8ec60) = 0;
    *(char *)0x692f0230 = *(char *)0x692f0230 + 48;
    *(int32_t *)v2 = (int32_t)v17;
    *v20 = __asm_insd((int16_t)v2);
    char v24 = *(char *)-0x47a8492a; // 0x17ffcf
    int64_t v25; // 0x17fe56
    *(char *)-0x47a8492a = v24 + (char)((uint64_t)v25 / 256);
    return 0x692f8930;
}

// Address range: 0x2e741e - 0x2e7428
int64_t function_2e741e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e741e
    int64_t result; // 0x2e741e
    return result;
}

// Address range: 0x2e74dd - 0x2e74e0
int64_t function_2e74dd(int64_t a1) {
    // 0x2e74dd
    int64_t result; // 0x2e74dd
    return result;
}

// Address range: 0x2e754a - 0x2e7558
int64_t function_2e754a(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 - 76); // 0x2e754a
    int64_t v2; // 0x2e754a
    *v1 = *v1 + (int32_t)v2;
    int64_t v3; // 0x2e754a
    *(int32_t *)a1 = -1 - *(int32_t *)&v3;
    bool v4; // 0x2e754a
    int64_t v5 = (v4 ? -4 : 4) + a1; // 0x2e754f
    *(char *)v5 = (char)v2;
    return unknown_6b004b57(v5 + (v4 ? -1 : 1));
}

// Address range: 0x2e75b5 - 0x2e75c4
int64_t function_2e75b5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e75b5
    return function_7e2fb2dc();
}

// Address range: 0x2e75c4 - 0x2e760d
int64_t function_2e75c4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2e75c4
    *(char *)a4 = 0;
    uint32_t v1 = *(int32_t *)0x2cd7b79fb83a9750; // 0x2e75cd
    char * v2 = (char *)(int64_t)v1; // 0x2e75d6
    *v2 = *v2 + (char)(a4 / 256);
    int32_t v3 = *(int32_t *)-0x19d04d20; // 0x2e75da
    int64_t v4; // 0x2e75c4
    *(int32_t *)-0x19d04d20 = v3 + (int32_t)v4 + (int32_t)(((char)v1 ^ -2) < 58);
    int32_t * v5 = (int32_t *)(a4 - 0x4ef6cecf); // 0x2e75e2
    *v5 = *v5 + (int32_t)a4;
    int32_t * v6 = (int32_t *)(v4 - 0x43fea785); // 0x2e75ec
    *v6 = *v6 + (int32_t)a1;
    *(int64_t *)(v4 + 0x3d00fecb) = a5;
    int32_t * v7 = (int32_t *)(a1 + 0x7294dff8); // 0x2e75f8
    *v7 = *v7 + (int32_t)v4;
    int64_t v8; // 0x2e75c4
    *(char *)a3 = *(char *)&v8 - (char)(v4 / 256);
    return function_2e7651();
}

// Address range: 0x2e760f - 0x2e7610
int64_t function_2e760f(int64_t a1) {
    // 0x2e760f
    int64_t result; // 0x2e760f
    return result;
}

// Address range: 0x2e7651 - 0x2e7653
int64_t function_2e7651(void) {
    // 0x2e7651
    int64_t result; // 0x2e7651
    return result;
}

// Address range: 0x2e769f - 0x2e76a5
int64_t function_2e769f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 2); // 0x2e769f
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x2e769f
    return result;
}

// Address range: 0x2e775a - 0x2e775b
int64_t function_2e775a(void) {
    // 0x2e775a
    int64_t result; // 0x2e775a
    return result;
}

// Address range: 0x2e778d - 0x2e7797
int64_t function_2e778d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e778d
    int64_t result; // 0x2e778d
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x2e7799 - 0x2e779a
int64_t function_2e7799(void) {
    // 0x2e7799
    int64_t result; // 0x2e7799
    return result;
}

// Address range: 0x2e77a0 - 0x2e77b5
int64_t function_2e77a0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_ffffffff82f06ead(); // 0x2e77a7
    int64_t v2; // 0x2e77a0
    *(int32_t *)a2 = (int32_t)v2;
    int32_t * v3 = (int32_t *)(4 * a3 + 48 + v1); // 0x2e77af
    *v3 = *v3 + (int32_t)v1;
    return function_2e775a();
}

// Address range: 0x2e77cc - 0x2e77da
int64_t function_2e77cc(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 0x1aa4fe18); // 0x2e77d2
    *v1 = *v1 - (char)(a3 / 256);
    return function_2e7799();
}

// Address range: 0x2e77f7 - 0x2e780a
int64_t function_2e77f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x2e77ff
    int64_t result; // 0x2e77f7
    if (v1 != 0) {
        uint32_t v2 = (int32_t)result;
        *(int32_t *)result = v2 >> 32 - v1 | v2 << v1;
    }
    return result;
}

// Address range: 0x2e7a1e - 0x2e7a47
int64_t function_2e7a1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e7a1e
    int64_t v1; // 0x2e7a1e
    bool v2; // 0x2e7a1e
    if (v2) {
        v1 = function_2e79c8();
    }
    uint64_t v3 = v1;
    uint64_t v4 = v3 + 175 + (int64_t)(v3 < 0xffffffffb8ff0001); // 0x2e7a26
    int64_t v5 = v3 & -256; // 0x2e7a26
    int32_t v6 = v4 % 256 | v5; // 0x2e7a28
    *(int32_t *)a1 = v6;
    int64_t v7; // 0x2e7a1e
    *(int32_t *)v7 = *(int32_t *)&v7 ^ v6;
    *(int32_t *)((v2 ? -4 : 4) + a1) = v6;
    int64_t v8; // bp-8, 0x2e7a1e
    int64_t v9 = (int64_t)&v8 - a4 & 0xffffffff; // 0x2e7a33
    *(int64_t *)(v9 - 8) = 0x703b00;
    *(int64_t *)(v9 - 16) = a3;
    return (v4 + 217) % 256 | v5;
}

// Address range: 0x2e7a49 - 0x2e7a86
int64_t function_2e7a49(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = a4;
    unsigned char v2 = v1 % 32; // 0x2e7a59
    if (v2 != 0) {
        *(char *)a4 = v1 >> v2;
    }
    int64_t v3; // 0x2e7a49
    int64_t result = (v3 & 0xb7013d00) + 0xecc47ff8 & 0xffc5fff8; // 0x2e7a54
    if (a4 != 0) {
        // 0x2e7a5d
        return result;
    }
    char v4 = *(char *)-0x3b4f807e; // 0x2e7a7b
    *(char *)-0x3b4f807e = v4 + (char)((uint64_t)v3 / 256);
    return (result | (int64_t)"addrinfo") & -0xff01 | (int64_t)&g1;
}

// Address range: 0x2e7a91 - 0x2e7a92
int64_t function_2e7a91(int64_t a1) {
    // 0x2e7a91
    int64_t result; // 0x2e7a91
    return result;
}

// Address range: 0x2e7b2d - 0x2e7b38
int64_t function_2e7b2d(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 0x2c0727d6); // 0x2e7b2d
    int64_t v2; // 0x2e7b2d
    *v1 = *v1 + (int32_t)v2;
    uint32_t v3 = __asm_in_133(-53); // 0x2e7b33
    int64_t v4; // 0x2e7b2d
    uint32_t v5 = *(int32_t *)&v4; // 0x2e7b35
    return (0x100000000 * a3 | (int64_t)v3) / (int64_t)v5 & 0xffffffff;
}

// Address range: 0x2e7b38 - 0x2e7b41
int64_t function_2e7b38(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e7b38
    int64_t result; // 0x2e7b38
    if (a4 == 0) {
        // 0x2e7ba2
        return result;
    }
    uint64_t v1 = result + a3; // 0x2e7b3a
    int64_t v2 = result & -256; // 0x2e7b3a
    char * v3 = (char *)(v1 % 256 | v2); // 0x2e7b3c
    *v3 = *v3 + (char)v1;
    return (v1 + 141) % 256 | v2;
}

// Address range: 0x2e7b80 - 0x2e7b86
int64_t function_2e7b80(int64_t a1) {
    // 0x2e7b80
    return function_ffffffffc034d441();
}

// Address range: 0x2e7b8d - 0x2e7ba2
int64_t function_2e7b8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2; // 0x2e7b8d
    int64_t v3 = v2 | 81; // 0x2e7b8d
    int32_t * v4 = (int32_t *)v3; // 0x2e7b8f
    *v4 = *v4 & (int32_t)a3;
    *(char *)a3 = *(char *)&v1 + (char)a4;
    unsigned char v5 = *(char *)-0x82e1865; // 0x2e7b94
    unsigned char v6 = (char)((uint64_t)v2 / 256); // 0x2e7b94
    *(char *)-0x82e1865 = v5 + v6;
    int64_t v7 = v3 & -0xff01 | 0x1000 * (int64_t)(v5 % 16 + v6 % 16 > 15) | 512; // 0x2e7b9b
    if (a4 == 0) {
        v7 = function_2e7be3(a5, a2, v1, 0, (int64_t)&g3);
    }
    // 0x2e7b9d
    return v7 & 0x3aec10be;
}

// Address range: 0x2e7be3 - 0x2e7bfc
int64_t function_2e7be3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e7be3
    int64_t v1; // 0x2e7be3
    int32_t * v2 = (int32_t *)(v1 - 0x912000); // 0x2e7be3
    *v2 = *v2 ^ (int32_t)a4;
    int64_t v3; // 0x2e7be3
    __asm_outsd((int16_t)((int32_t)v1 >> 31), *(int32_t *)&v3);
    char v4 = *(char *)0x52c80efd; // 0x2e7bf6
    *(char *)0x52c80efd = v4 + (char)((uint64_t)v1 / 256);
    return v1 ^ 100;
}

// Address range: 0x2e7c6b - 0x2e7c6d
int64_t function_2e7c6b(void) {
    // 0x2e7c6b
    return function_2e7cbd();
}

// Address range: 0x2e7c98 - 0x2e7c99
int64_t function_2e7c98(void) {
    // 0x2e7c98
    int64_t result; // 0x2e7c98
    return result;
}

// Address range: 0x2e7c9a - 0x2e7c9c
int64_t function_2e7c9a(void) {
    // 0x2e7c9a
    int64_t result; // 0x2e7c9a
    return result;
}

// Address range: 0x2e7cbd - 0x2e7cc0
int64_t function_2e7cbd(void) {
    // 0x2e7cbd
    int64_t result; // 0x2e7cbd
    return result;
}

// Address range: 0x2e7ccc - 0x2e7cd1
int64_t function_2e7ccc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e7ccc
    int64_t result; // 0x2e7ccc
    return result;
}

// Address range: 0x2e7cdc - 0x2e7cde
int64_t function_2e7cdc(void) {
    // 0x2e7cdc
    return function_2e7c98();
}

// Address range: 0x2e7cf5 - 0x2e7cf6
int64_t function_2e7cf5(void) {
    // 0x2e7cf5
    int64_t result; // 0x2e7cf5
    return result;
}

// Address range: 0x2e7d1f - 0x2e7d21
int64_t function_2e7d1f(void) {
    // 0x2e7d1f
    int64_t result; // 0x2e7d1f
    return result;
}

// Address range: 0x2e7d3f - 0x2e7d44
int64_t function_2e7d3f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e7d3f
    int64_t result; // 0x2e7d3f
    return result;
}

// Address range: 0x2e7d52 - 0x2e7d54
int64_t function_2e7d52(int64_t a1, int64_t a2) {
    // 0x2e7d52
    int64_t result; // 0x2e7d52
    return result;
}

// Address range: 0x2e7dff - 0x2e7e09
int64_t function_2e7dff(void) {
    // 0x2e7dff
    int64_t result; // 0x2e7dff
    bool v1; // 0x2e7dff
    if (v1) {
        // 0x2e7e04
        return result + 0x5a00013d & 0xffffffff;
    }
    // 0x2e7e02
    return result;
}
