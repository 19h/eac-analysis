/*
 * Targeted RetDec C for native executable gap queue batch 282.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2584c2-0x2586c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2586c2-0x2588c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2588c2-0x258ac2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x258ac2-0x258cc2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x258cc2-0x258ec2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x435867-0x435a67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x435a67-0x435c67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x435c67-0x435e67 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
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

int64_t function_2584c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2585cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_25873e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_258897(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_258a22(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_258b51(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_258c85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_258e18(int64_t a1);
int64_t function_258e1f(void);
int64_t function_258e21(void);
int64_t function_258e24(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_435867(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4358d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_435901(void);
int64_t function_43591f(void);
int64_t function_435921(void);
int64_t function_43594c(void);
int64_t function_435963(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_43597b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_435a47(void);
int64_t function_435a4f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_435ae1(int64_t a1);
int64_t function_435b4f(int64_t a1, int64_t result, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_435c88(int64_t a1, int64_t a2, int64_t a3);
int64_t function_435cd3(void);
int64_t function_435cee(void);
int64_t function_435cf5(void);
int64_t function_435d0c(void);
int64_t function_435d17(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_435d8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_c4258();
int64_t unknown_fffffffff747cf61();

// Address range: 0x2584c2 - 0x2585cf
int64_t function_2584c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2584c2
    int64_t v1; // 0x2584c2
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // bp-24, 0x2584c2
    int64_t v4 = (int64_t)&v3; // 0x258520
    v3 = v4;
    int64_t * v5 = (int64_t *)(v4 - 8); // 0x258533
    int64_t v6 = *(int64_t *)(v4 + 32); // 0x258536
    *v5 = v6;
    int64_t * v7 = (int64_t *)(v4 - 16); // 0x25853a
    *v7 = v4;
    int64_t v8 = *(int64_t *)(v4 + 8); // 0x25855a
    int64_t * v9 = (int64_t *)(v4 - 24); // 0x25855e
    *v7 = 0x26cb752a;
    *v9 = 0x5ccaef5a;
    *(int64_t *)(v4 - 32) = v6;
    v3 = *v7;
    *v9 = 0x10b30931;
    *v7 = v8;
    *(int64_t *)(v4 + 16) = v8;
    int64_t v10 = *v5; // 0x25859f
    *v7 = v10;
    *v9 = v10;
    *v5 = v3;
    *v7 = v3;
    return function_c4258(a1, a2, a3, a4, a5, v1, v2, 0x256876);
}

// Address range: 0x2585cf - 0x25873e
int64_t function_2585cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2585cf
    int64_t v1; // bp-40, 0x2585cf
    int64_t v2 = (int64_t)&v1; // 0x2586dc
    int64_t * v3 = (int64_t *)(v2 - 16); // 0x2586f1
    *v3 = a3;
    *(int64_t *)(v2 - 24) = v2;
    int64_t v4 = *v3; // 0x258733
    *(int64_t *)(v2 - 8) = v2 + 8;
    bool v5; // 0x2585cf
    return function_c4258(a1, a2, v4, a4, a5, a6, 0x4000 * (int64_t)(bool)v5 | 2048 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | 128 * (int64_t)v5 | 64 * (int64_t)v5 | 16 * (int64_t)v5 | (int64_t)v5 | 4 * (int64_t)v5 | 2, a2);
}

// Address range: 0x25873e - 0x258897
int64_t function_25873e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x25873e
    int64_t v1; // 0x25873e
    int64_t v2 = v1 - 8; // 0x2587bf
    int64_t * v3 = (int64_t *)v2; // 0x2587bf
    *v3 = 0x107da37e;
    int64_t * v4 = (int64_t *)(v1 - 16); // 0x2587c4
    *v4 = 0x21a477ce;
    int64_t * v5 = (int64_t *)(v1 - 24); // 0x2587c9
    int64_t v6 = *(int64_t *)(v1 + 24); // 0x2587d8
    *v4 = v6;
    *v5 = v6;
    int64_t * v7 = (int64_t *)(v1 - 32); // 0x2587df
    *v7 = v6;
    int64_t * v8 = (int64_t *)(v1 + 8); // 0x2587ee
    int64_t v9 = *v8; // 0x2587ee
    *v4 = v9;
    *v5 = 169;
    *v7 = a4;
    int64_t v10 = *v5; // 0x258815
    *v5 = v2;
    *v7 = 0x49466b1;
    int64_t * v11 = (int64_t *)(v1 - 40); // 0x258824
    *v11 = v6;
    *v3 = *v5;
    *v5 = 0x44679ff7;
    *v7 = 0x5295cf00;
    *v11 = v9;
    *v8 = *v5;
    *v5 = a4;
    *v7 = v2;
    int64_t v12 = *v5; // 0x258866
    *v11 = v12;
    int64_t v13 = *v4; // 0x258879
    *v5 = v13;
    *v7 = v13;
    int64_t v14; // bp-32, 0x25873e
    int64_t result = function_c4258(a1, a2, a3, v12, v10, v1, (int64_t)&v14, (int64_t)&g4); // 0x258892
    return result;
}

// Address range: 0x258897 - 0x258a22
int64_t function_258897(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a7; // bp-40, 0x25892f
    int64_t v2 = (int64_t)&v1; // 0x25896b
    int64_t v3 = v2 - 8; // 0x258973
    int64_t * v4 = (int64_t *)v3; // 0x258978
    *(int64_t *)(v2 - 24) = a6;
    *v4 = v3;
    *(int64_t *)(v2 + 16) = a7;
    v1 = *v4;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x2589d2
    *(int64_t *)(v2 + 40) = *v5;
    *v5 = a5;
    v1 = v2 + 24;
    int64_t v6 = *v5; // 0x2589f2
    *v4 = v6;
    int64_t v7 = *v5; // 0x2589fb
    *(int64_t *)(v7 - 8) = *(int64_t *)v7;
    int64_t v8 = v7 - 16; // 0x258a06
    int64_t * v9 = (int64_t *)v8; // 0x258a06
    *v9 = a4;
    *(int64_t *)(v7 - 24) = v8;
    *v9 = v7;
    return function_c4258(a1, a2, a3, *v9, v6, a6, 0x2430c4b3, (int64_t)&g4);
}

// Address range: 0x258a22 - 0x258b51
int64_t function_258a22(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x258a22
    int64_t v1; // bp-32, 0x258a22
    int64_t v2 = (int64_t)&v1; // 0x258aca
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x258ad2
    int64_t v4 = *v3; // 0x258ad2
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x258ad2
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x258ad6
    *v6 = v4;
    *v5 = a5;
    *v3 = v1;
    *v6 = v4;
    *(int64_t *)(v2 + 32) = v1;
    int64_t * v7 = (int64_t *)(v2 + 8); // 0x258b17
    int64_t v8 = *v7; // 0x258b17
    v1 = v8;
    *v5 = v8;
    int64_t v9 = *v3; // 0x258b33
    *v7 = v9;
    v1 = v9;
    int64_t v10; // 0x258a22
    return function_c4258(a1, a2, a3, a4, v10, v10, 0x25757b, 169);
}

// Address range: 0x258b51 - 0x258c85
int64_t function_258b51(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x258b51
    int64_t v1; // bp-56, 0x258b51
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x258b51
    return function_c4258(a1, a2, a3, a4, a5, v2, 0xa8b857c, (int64_t)&g4);
}

// Address range: 0x258c85 - 0x258dd0
int64_t function_258c85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x258c85
    int64_t v1; // bp-48, 0x258c85
    int64_t v2 = (int64_t)&v1; // 0x258d36
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x258d4c
    *v3 = 0xbe9ca99;
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x258d56
    *v4 = a7;
    v1 = a7;
    int64_t v5 = v2 + 24; // 0x258d67
    *(int64_t *)v5 = *v3;
    *v4 = -0x77f70757;
    *(int64_t *)(v2 + 40) = 169;
    v1 = a2;
    int64_t v6; // 0x258c85
    *v3 = v5 ^ v6 ^ *v3;
    int64_t v7 = v1; // 0x258db6
    int64_t v8 = *(int64_t *)(v2 + 16); // 0x258dbc
    *v3 = v8;
    v1 = v8;
    return function_c4258(a1, v7, a3, a4, a5, a6, 0x301efae0, 0x257f71);
}

// Address range: 0x258e18 - 0x258e19
int64_t function_258e18(int64_t a1) {
    // 0x258e18
    int64_t result; // 0x258e18
    return result;
}

// Address range: 0x258e1f - 0x258e21
int64_t function_258e1f(void) {
    // 0x258e1f
    int64_t v1; // 0x258e1f
    return function_258e24(v1, v1, v1, v1, (int64_t)&g4, (int64_t)&g4);
}

// Address range: 0x258e21 - 0x258e24
int64_t function_258e21(void) {
    // 0x258e21
    int64_t result; // 0x258e21
    return result;
}

// Address range: 0x258e24 - 0x258ec2
int64_t function_258e24(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x258e24
    int64_t v1; // 0x258e24
    int64_t v2 = (int64_t)&v1; // 0x258e3b
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x258e5d
    int64_t v4 = v2 - 16; // 0x258e65
    int64_t * v5 = (int64_t *)v4; // 0x258e65
    *v5 = a3;
    *v3 = a5;
    int64_t result = *(int64_t *)(v2 + 32); // 0x258e85
    *v3 = result;
    *v5 = result;
    *v3 = *(int64_t *)(v2 + 16);
    *(int64_t *)(v2 - 24) = v4;
    *v5 = v2;
    *(int64_t *)(v2 - 32) = result;
    return result;
}

// Address range: 0x435867 - 0x43586d
int64_t function_435867(int64_t a1, int64_t a2, int64_t a3) {
    // 0x435867
    int64_t v1; // 0x435867
    __asm_outsb((int16_t)a3, (char)v1);
    bool v2; // 0x435867
    return v1 - (v2 ? 0x2feaa3bf : 0x2feaa3be) & 0xffffffff;
}

// Address range: 0x4358d3 - 0x4358f0
int64_t function_4358d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4358d3
    int64_t v1; // 0x4358d3
    int64_t v2 = 82 * v1 & 0xfffffffe; // 0x4358d3
    unsigned char v3 = *(char *)v2; // 0x4358d6
    __asm_int(-27);
    uint32_t v4 = (int32_t)v1; // 0x4358dc
    int32_t v5 = (char)v1 < 126; // 0x4358dc
    uint32_t v6 = *(int32_t *)(v2 - 0x43df225) + v5; // 0x4358dc
    uint32_t v7 = v4 - v6; // 0x4358dc
    int64_t result = v7; // 0x4358dc
    if (!(((char)v1 < 126 ? v6 != -1 || v7 - v5 > v4 : v6 > v4))) {
        // 0x435923
        return result;
    }
    int64_t result2 = result & 0xffffff00 | (int64_t)__asm_in(66); // 0x4358e4
    __asm_out((int16_t)(a3 & 0xff00 | (int64_t)v3), (int32_t)result2);
    return result2;
}

// Address range: 0x435901 - 0x435908
int64_t function_435901(void) {
    // 0x435901
    int64_t v1; // 0x435901
    return function_435963(v1, v1, v1, v1);
}

// Address range: 0x43591f - 0x435920
int64_t function_43591f(void) {
    // 0x43591f
    int64_t result; // 0x43591f
    return result;
}

// Address range: 0x435921 - 0x435923
int64_t function_435921(void) {
    // 0x435921
    int64_t result; // 0x435921
    return result;
}

// Address range: 0x43594c - 0x43594d
int64_t function_43594c(void) {
    // 0x43594c
    int64_t result; // 0x43594c
    return result;
}

// Address range: 0x435963 - 0x435973
int64_t function_435963(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x435963
    int64_t result; // 0x435963
    bool v1; // 0x435963
    if (!v1) {
        result = function_43591f();
    }
    // 0x435966
    *(char *)0x1b7ba206 = *(char *)0x1b7ba206 | (char)(a4 / 256);
    return result;
}

// Address range: 0x43597b - 0x435a38
int64_t function_43597b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x43597b
    int64_t v1; // 0x43597b
    uint64_t v2 = v1;
    char v3 = v2; // 0x43597b
    char v4 = v3 + 42; // 0x43597b
    if (((v4 ^ v3) & (v3 ^ -128)) < 0) {
        unsigned char v5 = *(char *)-0x4500fa1cd850b4d5; // 0x43597d
        *(char *)a1 = (char)(v2 / 256) + (char)a1;
        *(int32_t *)a1 = *(int32_t *)(v2 & 0xffffff00 | (int64_t)v5);
        return a2 & 0xffffffff;
    }
    unsigned char v6 = llvm_ctpop_i8(v4); // 0x43597b
    int64_t result = unknown_fffffffff747cf61(); // 0x4359f5
    if (v6 % 2 == 0) {
        // 0x4359fd
        __asm_out((int16_t)a3, (int32_t)result);
        return result;
    }
    int32_t * v7 = (int32_t *)(result + 2); // 0x4359d2
    *v7 = *v7 & 74;
    int32_t v8 = __asm_in_133(62); // 0x4359d6
    uint32_t v9 = *(int32_t *)((int64_t)v8 - 0x6ab4fcb3); // 0x4359d8
    return (0x100000000 * a3 | (int64_t)v8) / (int64_t)v9 & 0xffffffff;
}

// Address range: 0x435a47 - 0x435a4f
int64_t function_435a47(void) {
    // 0x435a47
    int64_t v1; // 0x435a47
    int64_t v2 = v1;
    bool v3; // 0x435a47
    return (v2 - (v3 ? 200 : 199)) % 256 | v2 & -256;
}

// Address range: 0x435a4f - 0x435a65
int64_t function_435a4f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x435a4f
    *(char *)0x32e975e8 = *(char *)0x32e975e8 - 24;
    int32_t v1 = __asm_in_134((int16_t)a3); // 0x435a5d
    return (int64_t)((v1 + 49) % 256) | (int64_t)(v1 & -256);
}

// Address range: 0x435ae1 - 0x435ae4
int64_t function_435ae1(int64_t a1) {
    // 0x435ae1
    int64_t result; // 0x435ae1
    return result;
}

// Address range: 0x435b4f - 0x435c0b
int64_t function_435b4f(int64_t a1, int64_t result, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x435b4f
    int64_t v1; // 0x435b4f
    uint64_t v2 = v1;
    int64_t v3 = __asm_iretd(); // 0x435b5a
    if ((v1 & 256) == 0) {
        // 0x435b5f
        *(int32_t *)result = 0x400000 * (int32_t)result;
        __asm_out_135(37, (char)*(int64_t *)0x86d4725f);
        char * v4 = (char *)*(int64_t *)0x86d47257; // 0x435b6b
        *v4 = *v4 | (char)a4;
        return result;
    }
    char v5 = v2 < a3;
    int64_t v6 = a4; // 0x435b4f
    int64_t v7 = 0x86d47257; // 0x435b4f
    int64_t v8 = v3; // 0x435b4f
    int64_t v9; // 0x435b4f
    while (true) {
      lab_0x435bc5:;
        int64_t v10 = v7 - 8; // 0x435bc5
        *(int64_t *)v10 = v8;
        int64_t v11 = v6; // 0x435bc5
        int64_t v12 = v10; // 0x435bc5
        int64_t v13 = v8; // 0x435bc5
        while (true) {
          lab_0x435bc6:
            // 0x435bc6
            v9 = v13;
            v11--;
            if (v2 == a3 || v11 == 0) {
                // break (via goto) -> 0x435bce
                goto lab_0x435bce;
            }
            // 0x435bc0
            v12 -= 8;
            *(int64_t *)v12 = a3;
            char v14 = v9; // 0x435bc1
            char v15 = *(char *)v9 + v5; // 0x435bc1
            v13 = v9 & -256 | (int64_t)(v14 - v15);
            v6 = v11;
            v7 = v12;
            v8 = v13;
            if (v15 > v14) {
                goto lab_0x435bc5;
            } else {
                goto lab_0x435bc6;
            }
        }
    }
  lab_0x435bce:;
    char * v16 = (char *)(v1 + 18); // 0x435bce
    *v16 = (char)v9 + v5 + *v16;
    return v9 | 228;
}

// Address range: 0x435c88 - 0x435caf
int64_t function_435c88(int64_t a1, int64_t a2, int64_t a3) {
    // 0x435c88
    int64_t v1; // 0x435c88
    int64_t v2 = v1 & -256 | (int64_t)__asm_in(9); // 0x435c88
    float80_t v3; // 0x435c88
    *(int32_t *)(v1 - 27) = (int32_t)v3;
    int32_t * v4 = (int32_t *)(2 * a3 + 0x61238602 + v1); // 0x435c8d
    uint32_t v5 = *v4; // 0x435c8d
    bool v6; // 0x435c88
    *v4 = v5 / 64 | 0x4000000 * (int32_t)v6 | 0x8000000 * v5;
    int64_t v7; // 0x435c88
    *(int32_t *)a2 = *(int32_t *)&v7 ^ -0x18e52aea;
    __asm_out((int16_t)a3, (int32_t)v2);
    *(int32_t *)a3 = (int32_t)v3;
    int32_t * v8 = (int32_t *)(a3 - 50); // 0x435ca8
    *v8 = *v8 / 2;
    return v2 & -256 | 230;
}

// Address range: 0x435cd3 - 0x435cd4
int64_t function_435cd3(void) {
    // 0x435cd3
    int64_t result; // 0x435cd3
    return result;
}

// Address range: 0x435cee - 0x435cef
int64_t function_435cee(void) {
    // 0x435cee
    int64_t result; // 0x435cee
    return result;
}

// Address range: 0x435cf5 - 0x435cf7
int64_t function_435cf5(void) {
    // 0x435cf5
    int64_t result; // 0x435cf5
    return result;
}

// Address range: 0x435d0c - 0x435d0e
int64_t function_435d0c(void) {
    // 0x435d0c
    return function_435cd3();
}

// Address range: 0x435d17 - 0x435d49
int64_t function_435d17(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x435d17
    int64_t v1; // 0x435d17
    bool v2; // 0x435d17
    if (v2) {
        v1 = function_435cee();
    }
    int64_t result = v1;
    int64_t v3 = a4 - 1; // 0x435d1a
    if (v3 == 0 || v2) {
        // 0x435d1c
        return result;
    }
    int32_t v4 = *(int32_t *)(a4 + 4); // 0x435d41
    char v5 = *(char *)((int64_t)((int32_t)v3 - v4) + 28); // 0x435d44
    return result & -256 | (int64_t)(v5 & (char)result);
}

// Address range: 0x435d8c - 0x435e65
int64_t function_435d8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x435d8c
    int64_t v1; // 0x435d8c
    unsigned char v2 = __readfsbyte(v1 + 8 * a1) + (char)a4; // 0x435dcb
    int64_t v3 = a4 & -256 | (int64_t)v2; // 0x435dcb
    uint32_t v4 = *(int32_t *)(4 * a3 - 0x3051ec8f + v1); // 0x435dd0
    int64_t v5; // bp-8, 0x435d8c
    int32_t * v6 = (int32_t *)&v5; // bp-16, 0x435dd7
    int64_t v7 = __asm_sti(); // 0x435dd9
    if (v3 == 0) {
        // 0x435e3f
        return v7 & 0x7271ccbb;
    }
    uint32_t v8 = (int32_t)v1; // 0x435dd0
    int64_t v9 = (int64_t)&v5; // 0x435dd8
    if (v4 > v8) {
        if (v4 != v8) {
            // 0x435dbe
            return v7 & -192 | 10;
        }
        // 0x435de1
        __asm_outsb((int16_t)v9, (char)a2);
        int32_t * v10 = (int32_t *)v3; // 0x435de7
        *v10 = *v10 + (int32_t)v1;
        return v7 & -188;
    }
    int32_t * v11 = (int32_t *)(v9 & 0xfffffff8); // 0x435dad
    v6 = v11;
    int32_t * v12 = (int32_t *)v3; // 0x435dae
    int32_t v13 = *v12 & -121; // 0x435dae
    *v12 = v13;
    if (v13 == 0) {
        int64_t result = v9 & 0xffff00e0 | (int64_t)&g3; // 0x435db5
        char * v14 = (char *)(8 * result + (int64_t)&v6); // 0x435db7
        *v14 = *v14 | v2;
        return result;
    }
    // 0x435e0c
    *v11 = *v11 - (int32_t)v7;
    uint32_t v15 = 0x10000 * (int32_t)v9 >> 16; // 0x435e11
    __asm_out((int16_t)v7, v15);
    unsigned char v16 = v2 % 32;
    if (v16 != 0) {
        int32_t * v17 = (int32_t *)(int64_t)v15; // 0x435e15
        uint32_t v18 = *v17; // 0x435e15
        uint32_t v19 = (int32_t)v16; // 0x435e15
        *v17 = v18 >> 32 - v19 | v18 << v19;
    }
    return v15 + 0x733741c0;
}
