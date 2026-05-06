/*
 * Targeted RetDec C for native executable gap queue batch 398.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x10ddbf-0x10dfbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x10dfbf-0x10e1bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x10e1bf-0x10e3bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1700aa-0x1702aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1702aa-0x1704aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1704aa-0x1706aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1706aa-0x1708aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1708aa-0x170aaa rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_10ddbf(int64_t a1, int64_t a2);
int64_t function_10decf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10e01e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_10e177(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_10e328(void);
int64_t function_10e37e(void);
int64_t function_10e38e(void);
int64_t function_10e3ae(int64_t a1);
int64_t function_1700aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_17017f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1702d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_170446(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1705a0(void);
int64_t function_1705b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1705bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1705bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1706ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1706e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1706fb(int64_t a1);
int64_t function_170730(void);
int64_t function_17074f(int64_t a1);
int64_t function_170775(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1707da(int64_t a1, int64_t a2, int64_t a3);
int64_t function_17082f(void);
int64_t function_170855(void);
int64_t function_17087c(void);
int64_t function_1708ab(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1708f6(void);
int64_t function_170969(void);
int64_t function_17097d(void);
int64_t function_170987(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1709c7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1709e0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_170a4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_170a96(void);
int64_t function_3a7f0795();
int64_t function_caf2a();
int64_t function_cf3c7();
int64_t unknown_4c18479c();
int64_t unknown_500d2ecf();
int64_t unknown_ffffffff98a67258();
int64_t unknown_ffffffff9a0b1ac4();
int64_t unknown_ffffffffde4d4db5();

// Address range: 0x10ddbf - 0x10decf
int64_t function_10ddbf(int64_t a1, int64_t a2) {
    // 0x10ddbf
    int64_t v1; // bp-8, 0x10ddbf
    int64_t v2 = (int64_t)&v1; // 0x10ddf9
    int64_t * v3 = (int64_t *)(v2 + 24); // 0x10de32
    int64_t v4 = *v3; // 0x10de32
    v1 = v4;
    int64_t v5 = v2 - 8; // 0x10de3a
    int64_t * v6 = (int64_t *)v5; // 0x10de3a
    *v6 = a2;
    int64_t * v7 = (int64_t *)(v2 - 16); // 0x10de3b
    *v7 = v5;
    int64_t v8 = v2 + 8; // 0x10de41
    *v6 = v8;
    *v7 = 0x4d1415f1;
    *(int64_t *)v8 = *v6;
    *v6 = 0x68e27fea;
    *(int64_t *)(v2 - 24) = v4;
    *v3 = *v6;
    *v7 = a1;
    int64_t v9; // 0x10ddbf
    *v6 = v8 ^ v9 ^ *v6;
    *v6 = v1;
    *v7 = v1;
    return function_caf2a(*v7, v9, v9, *v6, v9, v9, v9);
}

// Address range: 0x10decf - 0x10e01e
int64_t function_10decf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10decf
    int64_t v1; // bp-40, 0x10decf
    int64_t v2 = (int64_t)&v1; // 0x10df5c
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x10df77
    int64_t v4 = v2 - 8; // 0x10df77
    *(int64_t *)v4 = v3;
    int64_t v5 = v2 - 16; // 0x10df7b
    int64_t * v6 = (int64_t *)v5; // 0x10df7b
    *v6 = v3;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x10df91
    *v7 = v4;
    int64_t * v8 = (int64_t *)(v2 + 8); // 0x10df9a
    int64_t v9 = *v8; // 0x10df9a
    *v6 = v9;
    *v7 = a1;
    int64_t * v10 = (int64_t *)(v2 - 32); // 0x10dfc6
    *v10 = v3;
    v1 = v3;
    *v7 = 0x3e68b0eb;
    *v10 = 0x161253ee;
    *(int64_t *)(v2 - 40) = v9;
    *v8 = *v7;
    *v7 = *v6;
    *v10 = v5;
    int64_t v11 = *v6; // 0x10e00a
    *v7 = v11;
    *v10 = v11;
    int64_t v12; // 0x10decf
    return function_caf2a(*v7, a2, 310, a4, v12, v12, v12);
}

// Address range: 0x10e01e - 0x10e177
int64_t function_10e01e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x10e01e
    int64_t v1; // bp-40, 0x10e01e
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x10e01e
    return function_caf2a(a1, a2, a3, a4, a5, v2, a6);
}

// Address range: 0x10e177 - 0x10e2c1
int64_t function_10e177(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a4; // bp-24, 0x10e19e
    int64_t v2; // bp-32, 0x10e177
    v2 = (int64_t)&v2 + 16;
    return function_caf2a(a1, a2, a3, a4, a5, a6, (int64_t)&v1);
}

// Address range: 0x10e328 - 0x10e32b
int64_t function_10e328(void) {
    // 0x10e328
    int64_t result; // 0x10e328
    return result;
}

// Address range: 0x10e37e - 0x10e381
int64_t function_10e37e(void) {
    // 0x10e37e
    return function_10e3ae((int64_t)&g1);
}

// Address range: 0x10e38e - 0x10e391
int64_t function_10e38e(void) {
    // 0x10e38e
    int64_t result; // 0x10e38e
    return result;
}

// Address range: 0x10e3ae - 0x10e3bd
int64_t function_10e3ae(int64_t a1) {
    // 0x10e3ae
    int64_t v1; // 0x10e3ae
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t result; // 0x10e3ae
    int64_t v3 = result;
    *(char *)v3 = *(char *)&result + (char)v3;
    return result;
}

// Address range: 0x1700aa - 0x17017f
int64_t function_1700aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1700aa
    int64_t v1; // 0x1700aa
    v1 = (int64_t)&v1;
    int64_t v2; // bp-8, 0x1700aa
    int64_t v3 = (int64_t)&v2; // 0x170146
    int64_t v4 = v3 + 16; // 0x17014c
    v2 = v4;
    *(int64_t *)(v3 + 8) = *(int64_t *)v4;
    v2 = v4;
    int64_t v5; // 0x1700aa
    return function_cf3c7(a1, a2, a3, a4, a5, v5, v1);
}

// Address range: 0x17017f - 0x1702d8
int64_t function_17017f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x17017f
    int64_t v1; // bp-32, 0x17017f
    int64_t v2 = (int64_t)&v1; // 0x1701fc
    int64_t v3 = v2 - 8; // 0x170213
    v1 = 0x16e72f;
    *(int64_t *)v3 = 0x16e72f;
    *(int64_t *)(v2 - 16) = 0x16e72f;
    return function_cf3c7(a1, a2, a3, a4, a5, v3, a7);
}

// Address range: 0x1702d8 - 0x170446
int64_t function_1702d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1702d8
    int64_t v1; // bp-48, 0x1702d8
    v1 = (int64_t)&v1;
    int64_t v2; // bp-56, 0x1702d8
    v2 = (int64_t)&v2 + 16;
    bool v3; // 0x1702d8
    return function_cf3c7(a1, a2, a3, a4, a5, 0x11c5acab, 0x4000 * (int64_t)(bool)v3 | 2048 * (int64_t)v3 | 1024 * (int64_t)v3 | 512 * (int64_t)v3 | 256 * (int64_t)v3 | 128 * (int64_t)v3 | 64 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3 | 2);
}

// Address range: 0x170446 - 0x1705a0
int64_t function_170446(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x170446
    int64_t v1; // bp-40, 0x170446
    int64_t v2 = (int64_t)&v1; // 0x1704a2
    int64_t * v3 = (int64_t *)(v2 - 16); // 0x1704c1
    int64_t v4 = *(int64_t *)(v2 + 32); // 0x1704c7
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x1704c7
    *v5 = v4;
    *v3 = v4;
    int64_t v6 = v2 + 16; // 0x1704dd
    int64_t v7 = *(int64_t *)v6; // 0x1704dd
    *v5 = v7;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x1704ee
    *v8 = a1;
    *(int64_t *)(v2 - 32) = a4;
    *v5 = 0x409ed400;
    *v3 = 0x664274b2;
    *v8 = v4;
    int64_t * v9 = (int64_t *)(v2 + 8); // 0x170539
    *v9 = *v5;
    *v3 = 0x3296fd33;
    *v8 = v7;
    *(int64_t *)(v2 + 24) = *v5;
    *v5 = v1;
    *v3 = v1;
    v1 = a3;
    *v5 = *v9;
    int64_t v10 = v1;
    v1 = v6;
    int64_t v11; // 0x170446
    return function_cf3c7(*v8, a2, v10, a4, v11, v11, 0x6d34b766);
}

// Address range: 0x1705a0 - 0x1705a5
int64_t function_1705a0(void) {
    // 0x1705a0
    int64_t result; // 0x1705a0
    return result;
}

// Address range: 0x1705b6 - 0x1705ba
int64_t function_1705b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1705b6
    int64_t v1; // 0x1705b6
    *(char *)a4 = (char)(v1 / 256);
    return function_1705bd(a1, a2, a3, a4, v1, v1, (int64_t)&g1);
}

// Address range: 0x1705bb - 0x1705bd
int64_t function_1705bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1705bb
    int64_t result; // 0x1705bb
    *(int32_t *)a4 = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x1705bd - 0x170669
int64_t function_1705bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a1;
    int64_t v2; // 0x1705bd
    bool v3; // 0x1705bd
    if (v3) {
        // 0x1705db
        *(int32_t *)0x450028c67b934361 = (int32_t)v2;
        int64_t v4 = v2 + 0x48f0e4fe + v2; // 0x1705ec
        __asm_out(-13, (char)v4);
        int64_t v5 = a6 & 0xffffffff & v4; // 0x1705f3
        int64_t v6 = (char)a1 > (char)v5 ? 0xa62201e9 : 0xa62201e8; // 0x1705f7
        unsigned char v7 = *(char *)-0xa66fe176fda8edc; // 0x170600
        __asm_out(-118, v7);
        int32_t * v8 = (int32_t *)(v2 - 0x6060db32); // 0x17060c
        *v8 = 0x40000000 * *v8;
        return v5 - v6 & 0xffffff00 | (int64_t)v7;
    }
    char * v9 = (char *)(a3 - 0x59fe8ac3 + 2 * v2); // 0x1705c2
    char v10 = a3; // 0x1705c2
    char v11 = *v9 + v10; // 0x1705c2
    unsigned char v12 = llvm_ctpop_i8(v11); // 0x1705c2
    *v9 = v11;
    unknown_500d2ecf();
    if (v12 % 2 != 0) {
        // 0x1705d2
        return a4 & 0xffffffff;
    }
    unsigned char v13 = *(char *)&v1; // 0x17064a
    *(char *)v1 = v13 / 128 | 2 * v13;
    char * v14 = (char *)(v1 - 106); // 0x17064d
    *v14 = *v14 + v10;
    uint64_t v15 = unknown_ffffffff98a67258(); // 0x170652
    char v16 = *(char *)(a7 - 0x2f222248); // 0x170657
    int64_t v17 = v15 & -256 | (int64_t)(v16 + (char)v15); // 0x170657
    char v18 = *(char *)(v17 + 0x1e8832b); // 0x17065d
    float80_t v19; // 0x1705bd
    *(int16_t *)(a3 - 0x76b364e3) = (int16_t)(v19 - (float80_t)(int32_t)v2);
    return v17 & -0xff01 | 256 * (int64_t)(v18 | (char)(v15 / 256));
}

// Address range: 0x1706ba - 0x1706e2
int64_t function_1706ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1706ba
    int64_t v1; // 0x1706ba
    int64_t v2 = 0x100000000 * v1 >> 32; // 0x1706ba
    int64_t v3 = v2 * v2; // 0x1706ba
    int32_t * v4 = (int32_t *)(v3 & 0xffffffff); // 0x1706bc
    *v4 = *v4 + (int32_t)v3;
    if ((char)v3 < 29 || llvm_ctpop_i8(*(char *)0x39d22308 ^ (char)a4) % 2 != 0) {
        // 0x17072f
        return (v3 + 227) % 256 | v3 & 0xffffff00;
    }
    // 0x1706d0
    __asm_in(-3);
    char v5 = *(char *)-0x73eeda22; // 0x1706d7
    *(char *)-0x73eeda22 = v5 + (char)((uint64_t)v1 / 256);
    return function_3a7f0795();
}

// Address range: 0x1706e3 - 0x1706e9
int64_t function_1706e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1706e3
    int64_t v1; // 0x1706e3
    uint64_t result = v1;
    char * v2 = (char *)(a4 - 61); // 0x1706e3
    *v2 = *v2 + (char)(result / 256);
    return result;
}

// Address range: 0x1706fb - 0x1706ff
int64_t function_1706fb(int64_t a1) {
    // 0x1706fb
    int64_t result; // 0x1706fb
    return result;
}

// Address range: 0x170730 - 0x170737
int64_t function_170730(void) {
    unsigned char v1 = *(char *)0x30086637; // 0x170730
    int64_t v2; // 0x170730
    unsigned char v3 = (char)((uint64_t)v2 / 256); // 0x170730
    char v4 = v1 + v3; // 0x170730
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x170730
    *(char *)0x30086637 = v4;
    return v2 & -0xff01 | 256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v4 < v1) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v1 % 16 + v3 % 16 > 15) | 4 * (int64_t)(v5 % 2 == 0)) | 512;
}

// Address range: 0x17074f - 0x170750
int64_t function_17074f(int64_t a1) {
    // 0x17074f
    int64_t result; // 0x17074f
    return result;
}

// Address range: 0x170775 - 0x17077a
int64_t function_170775(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x170775
    int64_t result; // 0x170775
    return result;
}

// Address range: 0x1707da - 0x1707e0
int64_t function_1707da(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1707da
    int64_t result; // 0x1707da
    *(int32_t *)a2 = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x17082f - 0x170832
int64_t function_17082f(void) {
    // 0x17082f
    int64_t result; // 0x17082f
    return result;
}

// Address range: 0x170855 - 0x170856
int64_t function_170855(void) {
    // 0x170855
    int64_t result; // 0x170855
    return result;
}

// Address range: 0x17087c - 0x17087e
int64_t function_17087c(void) {
    // 0x17087c
    return function_170855();
}

// Address range: 0x1708ab - 0x1708c4
int64_t function_1708ab(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1708ab
    unknown_ffffffffde4d4db5();
    int64_t v1; // 0x1708ab
    *(int32_t *)v1 = (int32_t)a3;
    return unknown_ffffffff9a0b1ac4();
}

// Address range: 0x1708f6 - 0x1708f7
int64_t function_1708f6(void) {
    // 0x1708f6
    int64_t result; // 0x1708f6
    return result;
}

// Address range: 0x170969 - 0x17096b
int64_t function_170969(void) {
    // 0x170969
    return function_1708f6();
}

// Address range: 0x17097d - 0x17097e
int64_t function_17097d(void) {
    // 0x17097d
    int64_t result; // 0x17097d
    return result;
}

// Address range: 0x170987 - 0x1709c7
int64_t function_170987(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x170987
    int64_t v1; // 0x170987
    *(char *)a3 = (char)v1 + 1;
    if ((int32_t)v1 < 0x793a00d4) {
        // 0x17099e
        *(int32_t *)0x5c5202ee = (int32_t)a4 - 0x13d008f;
    }
    // 0x1709ae
    bool v2; // 0x170987
    __asm_wait((v2 ? -4 : 4) + a1);
    return __asm_iretd();
}

// Address range: 0x1709c7 - 0x1709e0
int64_t function_1709c7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1709c7
    int64_t result; // 0x1709c7
    result = function_1708f6();
    char v1 = *(char *)(result - 114); // 0x1709c9
    __asm_out_133((int16_t)(a3 & 0xff00 | (int64_t)(v1 | (char)a3)), (int32_t)result);
    return result;
}

// Address range: 0x1709e0 - 0x1709e8
int64_t function_1709e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1709e0
    bool v1; // 0x1709e0
    if (!v1) {
        function_17097d();
    }
    // 0x1709e2
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result = __asm_hlt(); // 0x1709e3
    __asm_int(-27);
    return result;
}

// Address range: 0x170a4b - 0x170a54
int64_t function_170a4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x170a4b
    int64_t v1; // 0x170a4b
    int64_t v2 = v1;
    return (v2 + 107) % 256 | v2 & -256;
}

// Address range: 0x170a96 - 0x170a9d
int64_t function_170a96(void) {
    // 0x170a96
    return unknown_4c18479c();
}
