/*
 * Targeted RetDec C for native executable gap queue batch 332.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xf0d9c-0xf0f9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf0f9c-0xf119c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf119c-0xf139c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf139c-0xf159c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf159c-0xf179c rank=- name=- kind=- bytes=- uncovered=-
 *   0x16deaa-0x16e0aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16e2aa-0x16e4aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16e6aa-0x16e8aa rank=- name=- kind=- bytes=- uncovered=-
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
int64_t __asm_rsm(void);
int64_t __asm_sldt(void);
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

int64_t function_16dea4();
int64_t function_16deaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16df25(int64_t a1);
int64_t function_16df51(int64_t a1, int64_t a2);
int64_t function_16df7f(int64_t a1, int64_t a2);
int64_t function_16dff8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16e018(int64_t a1);
int64_t function_16e028(void);
int64_t function_16e05c(void);
int64_t function_16e2aa(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_16e322(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16e3b1(int64_t a1);
int64_t function_16e417(int64_t a1);
int64_t function_16e430(int64_t a1);
int64_t function_16e472(int64_t a1);
int64_t function_16e6aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_16e6f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16e729(void);
int64_t function_16e75d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_16e774(void);
int64_t function_16e77c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16e78b(void);
int64_t function_16e78f(int64_t a1);
int64_t function_16e7fd(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_16e842(void);
int64_t function_16e84f(int64_t a1);
int64_t function_16e878(void);
int64_t function_3d1746ee();
int64_t function_3d175ad2();
int64_t function_cdc60();
int64_t function_f0d9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_f0f05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f103a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f11af(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f12e3(int64_t a1, int64_t a2);
int64_t function_f142c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f157d(int64_t a1, int64_t a2, int64_t a3);
int64_t unknown_141aa8fd();
int64_t unknown_7818e441();
int64_t unknown_7a0c1b0b();
int64_t unknown_ffffffffbec614bc();
int64_t unknown_ffffffffe9077918();
int64_t unknown_fffffffffa94a73a();

// Address range: 0xf0d9c - 0xf0f05
int64_t function_f0d9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xf0d9c
    int64_t v1; // bp-16, 0xf0d9c
    int64_t v2 = (int64_t)&v1; // 0xf0ed5
    int64_t v3 = v2 + 8; // 0xf0edd
    v1 = *(int64_t *)v3;
    *(int64_t *)(v2 - 8) = v3;
    return function_cdc60(a1, a2 - 0x7ddb7e18, a3, a4, a5);
}

// Address range: 0xf0f05 - 0xf103a
int64_t function_f0f05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xf0f05
    int64_t v1; // 0xf0f05
    return function_cdc60(a1, a2, a3, a4, v1);
}

// Address range: 0xf103a - 0xf11af
int64_t function_f103a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xf103a
    int64_t v1; // 0xf103a
    return function_cdc60(a1, a2, a3, a4, v1);
}

// Address range: 0xf11af - 0xf12e3
int64_t function_f11af(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf11af
    int64_t v1; // bp-40, 0xf11af
    int64_t v2 = (int64_t)&v1; // 0xf120c
    int64_t * v3 = (int64_t *)(v2 - 8); // 0xf1229
    int64_t * v4 = (int64_t *)(v2 - 16); // 0xf1234
    int64_t * v5 = (int64_t *)(v2 + 24); // 0xf1251
    int64_t v6 = *v5; // 0xf1251
    *v4 = v6;
    int64_t v7 = v2 - 24; // 0xf1255
    int64_t * v8 = (int64_t *)v7; // 0xf1255
    *v8 = v6;
    int64_t * v9 = (int64_t *)(v2 - 32); // 0xf1258
    *v9 = v6;
    int64_t * v10 = (int64_t *)(v2 + 8); // 0xf1267
    *v8 = a2;
    *v9 = v6;
    *v4 = v6;
    v1 = v6;
    *v8 = v7;
    *v4 = *v10;
    *v5 = *v3;
    *v3 = v1;
    *v4 = v1;
    int64_t v11 = *v10; // 0xf12cf
    v1 = v11;
    *v3 = v11;
    int64_t v12; // 0xf11af
    return function_cdc60(a1, *v8, a3, a4, v12);
}

// Address range: 0xf12e3 - 0xf142c
int64_t function_f12e3(int64_t a1, int64_t a2) {
    // 0xf12e3
    int64_t v1; // 0xf12e3
    int64_t v2 = v1 - 8; // 0xf136a
    int64_t * v3 = (int64_t *)v2; // 0xf136a
    *v3 = 0x328e1974;
    int64_t v4 = v1 - 16; // 0xf136f
    int64_t * v5 = (int64_t *)v4; // 0xf136f
    *v5 = 0x7e309b31;
    int64_t * v6 = (int64_t *)(v1 - 24); // 0xf137f
    int64_t v7 = *(int64_t *)(v1 + 24); // 0xf1385
    *v5 = v7;
    *v6 = v2;
    int64_t * v8 = (int64_t *)(v1 - 32); // 0xf13b0
    int64_t * v9 = (int64_t *)(v1 - 40); // 0xf13b3
    *v6 = 0x2daddd2b;
    *v8 = 0x7ca84129;
    *v9 = v7;
    *v3 = *v6;
    *v6 = 0x15d338a2;
    *v8 = 0x591555c5;
    *v9 = *(int64_t *)v1;
    *(int64_t *)(v1 + 8) = *v6;
    *v6 = *v5;
    *v8 = v4;
    *v8 = *v5;
    *v6 = v2;
    return function_cdc60(a1, a2, v1, v1, v1);
}

// Address range: 0xf142c - 0xf157d
int64_t function_f142c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf142c
    int64_t v1; // bp-40, 0xf142c
    int64_t v2 = (int64_t)&v1; // 0xf14d3
    int64_t v3 = *(int64_t *)(v2 + 16); // 0xf14db
    int64_t * v4 = (int64_t *)(v2 - 8); // 0xf14db
    *v4 = v3;
    *(int64_t *)(v2 - 24) = v3;
    bool v5; // 0xf142c
    *(int64_t *)(v2 - 16) = 0x4000 * (int64_t)v5 | 2048 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | 128 * (int64_t)v5 | 64 * (int64_t)v5 | 16 * (int64_t)v5 | (int64_t)v5 | 4 * (int64_t)v5 | 2;
    int64_t v6 = v2 + 8; // 0xf1501
    int64_t * v7 = (int64_t *)v6; // 0xf1501
    *v7 = *v4;
    *(int64_t *)(v2 + 24) = v3;
    *v4 = v6;
    v1 = *v7;
    *v4 = v6;
    int64_t v8; // 0xf142c
    return function_cdc60(a1, a2, a3, a4, v8);
}

// Address range: 0xf157d - 0xf16b3
int64_t function_f157d(int64_t a1, int64_t a2, int64_t a3) {
    // 0xf157d
    int64_t v1; // 0xf157d
    return function_cdc60(a1, a2, a3, v1, v1);
}

// Address range: 0x16deaa - 0x16decd
int64_t function_16deaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x16deaa
    int64_t v1; // 0x16deaa
    if ((int32_t)v1 >= (int32_t)v1) {
        function_16dea4();
    }
    // 0x16deb1
    bool v2; // 0x16deaa
    int64_t v3 = v2 ? -4 : 4; // 0x16deac
    int64_t v4 = v3 + a1; // 0x16deac
    int64_t v5 = v3 + a2; // 0x16deac
    unknown_ffffffffbec614bc();
    *(char *)v4 = *(char *)v5;
    *(int32_t *)(v5 + 0x620b0132) = (int32_t)a4;
    return __asm_hlt(v4 + 1, v5 + 1);
}

// Address range: 0x16df25 - 0x16df28
int64_t function_16df25(int64_t a1) {
    // 0x16df25
    int64_t result; // 0x16df25
    return result;
}

// Address range: 0x16df51 - 0x16df54
int64_t function_16df51(int64_t a1, int64_t a2) {
    // 0x16df51
    int64_t result; // 0x16df51
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x16df7f - 0x16df81
int64_t function_16df7f(int64_t a1, int64_t a2) {
    // 0x16df7f
    int64_t result; // 0x16df7f
    return result;
}

// Address range: 0x16dff8 - 0x16e004
int64_t function_16dff8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16dff8
    int64_t result; // 0x16dff8
    *(char *)a3 = (char)result - 124;
    int64_t v1; // 0x16dff8
    __asm_outsd((int16_t)a3, *(int32_t *)&v1);
    return result;
}

// Address range: 0x16e018 - 0x16e01c
int64_t function_16e018(int64_t a1) {
    // 0x16e018
    int64_t result; // 0x16e018
    return result;
}

// Address range: 0x16e028 - 0x16e02d
int64_t function_16e028(void) {
    // 0x16e028
    return function_3d1746ee();
}

// Address range: 0x16e05c - 0x16e063
int64_t function_16e05c(void) {
    // 0x16e05c
    int64_t result; // 0x16e05c
    char * v1 = (char *)(result - 0x5526d6d6); // 0x16e05c
    *v1 = 2 * *v1;
    return result;
}

// Address range: 0x16e2aa - 0x16e2c6
int64_t function_16e2aa(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x16e2aa
    int64_t result; // 0x16e2aa
    int64_t v1 = result;
    unsigned char v2 = *(char *)(v1 - 0x748af7b0 + 4 * result); // 0x16e2af
    *(int32_t *)v1 = (int32_t)v1 - 61 + (int32_t)(v2 > -1 - (char)(a4 / 256));
    *(char *)-0x411e1d39 = *(char *)-0x411e1d39 + (char)result;
    return result;
}

// Address range: 0x16e322 - 0x16e373
int64_t function_16e322(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a5 + 0x40c86200); // 0x16e32e
    int64_t v2; // 0x16e322
    *v1 = *v1 ^ (char)(v2 / 256) & -118;
    int64_t result = unknown_fffffffffa94a73a(a5); // 0x16e334
    int64_t v3; // 0x16e322
    char * v4 = (char *)(a5 + 0x22f8013d + (int64_t)&v3); // 0x16e339
    char v5 = (uint64_t)v2 / 256; // 0x16e339
    *v4 = *v4 + v5;
    int32_t * v6 = (int32_t *)(result + 0x3a9d5c42); // 0x16e347
    int32_t v7 = *v6 + 0x2a7f1ab9; // 0x16e347
    *v6 = v7;
    if (a4 != 1 != (v7 == 0)) {
        // 0x16e353
        return result;
    }
    // 0x16e36a
    *(char *)0x582a4971 = *(char *)0x582a4971 + v5;
    int32_t * v8 = (int32_t *)(a3 + 90); // 0x16e370
    *v8 = *v8 + (int32_t)result;
    return result;
}

// Address range: 0x16e3b1 - 0x16e3b4
int64_t function_16e3b1(int64_t a1) {
    // 0x16e3b1
    int64_t result; // 0x16e3b1
    return result;
}

// Address range: 0x16e417 - 0x16e418
int64_t function_16e417(int64_t a1) {
    // 0x16e417
    int64_t result; // 0x16e417
    return result;
}

// Address range: 0x16e430 - 0x16e443
int64_t function_16e430(int64_t a1) {
    // 0x16e430
    return unknown_7818e441(a1);
}

// Address range: 0x16e472 - 0x16e483
int64_t function_16e472(int64_t a1) {
    // 0x16e472
    int64_t v1; // 0x16e472
    int64_t result = v1 & -0xff01 | (int64_t)&g1; // 0x16e475
    char * v2 = (char *)(result + 0x1e8d88c); // 0x16e477
    *v2 = *v2 + 1;
    return result;
}

// Address range: 0x16e6aa - 0x16e6ae
int64_t function_16e6aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x16e6aa
    int64_t v1; // 0x16e6aa
    int32_t * v2 = (int32_t *)(v1 - 94); // 0x16e6aa
    *v2 = *v2 | (int32_t)a4;
    return result;
}

// Address range: 0x16e6f6 - 0x16e6ff
int64_t function_16e6f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16e6f6
    int64_t v1; // 0x16e6f6
    __asm_out((int16_t)a3, (char)v1);
    return unknown_141aa8fd();
}

// Address range: 0x16e729 - 0x16e72e
int64_t function_16e729(void) {
    // 0x16e729
    int64_t v1; // 0x16e729
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + 64;
    return function_16e77c(v1, v1, v1, v1);
}

// Address range: 0x16e75d - 0x16e76f
int64_t function_16e75d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x16e75d
    int64_t v1; // 0x16e75d
    int32_t * v2 = (int32_t *)(v1 - 0x52ffd706); // 0x16e761
    *v2 = *v2 + (int32_t)v1;
    *(char *)(v1 + 0x3a023b07) = (char)(a4 / 256);
    return (a3 + 232 + (int64_t)((char)v1 > (char)v1)) % 256 | a3 & 0xffffff00;
}

// Address range: 0x16e774 - 0x16e775
int64_t function_16e774(void) {
    // 0x16e774
    int64_t result; // 0x16e774
    return result;
}

// Address range: 0x16e77c - 0x16e789
int64_t function_16e77c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x3fc04a1d); // 0x16e781
    int64_t v2; // 0x16e77c
    *v1 = *v1 + (int32_t)v2;
    bool v3; // 0x16e77c
    return v2 + 0x5801e841 + (int64_t)v3 & 0xffffff00 | 25;
}

// Address range: 0x16e78b - 0x16e78d
int64_t function_16e78b(void) {
    // 0x16e78b
    return function_16e774();
}

// Address range: 0x16e78f - 0x16e792
int64_t function_16e78f(int64_t a1) {
    // 0x16e78f
    int64_t v1; // 0x16e78f
    bool v2; // 0x16e78f
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x16e7fd - 0x16e822
int64_t function_16e7fd(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x16e7fd
    unknown_7a0c1b0b();
    char * v1 = (char *)(a1 + 0x3b1a22f9); // 0x16e80a
    *v1 = *v1 + (char)(a3 / 256);
    int64_t v2; // 0x16e7fd
    if (v2 == 0) {
        // ._crit_edge
        unknown_ffffffffe9077918();
        __asm_sti();
        return v2 & 0xffffffff;
    }
    __asm_outsd((int16_t)a3, *(int32_t *)(a3 + 0xa707dc00 + 2 * a3 & 0xffffffff));
    int64_t v3; // 0x16e7fd
    int64_t v4 = v3 - 1; // 0x16e810
    // .lr.ph
    while (v4 != 0) {
        __asm_outsd((int16_t)a3, *(int32_t *)(a3 + 0xa707dc00 + 2 * a3 & 0xffffffff));
        v4--;
    }
    // ._crit_edge
    unknown_ffffffffe9077918();
    __asm_sti();
    return v2 & 0xffffffff;
}

// Address range: 0x16e842 - 0x16e847
int64_t function_16e842(void) {
    // 0x16e842
    return function_3d175ad2();
}

// Address range: 0x16e84f - 0x16e852
int64_t function_16e84f(int64_t a1) {
    // 0x16e84f
    int64_t v1; // 0x16e84f
    return v1 * v1 & 0xffffffff;
}

// Address range: 0x16e878 - 0x16e880
int64_t function_16e878(void) {
    // 0x16e878
    int64_t result; // 0x16e878
    return result;
}
