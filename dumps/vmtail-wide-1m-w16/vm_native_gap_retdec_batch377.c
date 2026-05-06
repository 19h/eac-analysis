/*
 * Targeted RetDec C for native executable gap queue batch 377.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x14f513-0x14f713 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14f713-0x14f913 rank=- name=- kind=- bytes=- uncovered=-
 *   0x16feaa-0x1700aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x195c85-0x195e85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x195e85-0x196085 rank=- name=- kind=- bytes=- uncovered=-
 *   0x196085-0x196285 rank=- name=- kind=- bytes=- uncovered=-
 *   0x196285-0x196485 rank=- name=- kind=- bytes=- uncovered=-
 *   0x196485-0x196685 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g5;
extern int g6;
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

int64_t function_14f4e5();
int64_t function_14f513(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14f527(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_14f569(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14f572(int64_t a1);
int64_t function_14f60c(void);
int64_t function_14f60f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14f650(void);
int64_t function_14f673(int64_t a1);
int64_t function_14f698(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14f6de(int64_t a1);
int64_t function_14f6e2(int64_t a1);
int64_t function_14f6fa(int64_t a1, int64_t a2, int32_t a3);
int64_t function_14f70c(void);
int64_t function_14f712(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14f72d(void);
int64_t function_14f751(void);
int64_t function_14f75d(void);
int64_t function_14f75f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_14f850(void);
int64_t function_16feaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_16ff0e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_170080(void);
int64_t function_170081(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_170086(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17008e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_195c85(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_195cbd(void);
int64_t function_195cc6(void);
int64_t function_195d31(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_195de6(int64_t a1);
int64_t function_195ef0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_195f09(int64_t a1);
int64_t function_195f2f(void);
int64_t function_195f36(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_195f65(void);
int64_t function_195f6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_195f8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_196036(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_196106(int64_t a1, int64_t a2, int64_t result, int64_t a4);
int64_t function_1961d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_19627b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_196287(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1962a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19640d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19642a(int64_t a1);
int64_t function_19642d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19647b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1964c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19656c(void);
int64_t function_19659c(int64_t a1);
int64_t function_1965e2(int64_t a1);
int64_t function_3401a8fd();
int64_t function_cf3c7();
int64_t function_ffffffffafb27d23();
int64_t unknown_1a2e38c5();
int64_t unknown_1cc8d040();
int64_t unknown_29165918();
int64_t unknown_2f245b55();
int64_t unknown_36960dfd();
int64_t unknown_3a404741();
int64_t unknown_3d16dd45();
int64_t unknown_4ea76e35();
int64_t unknown_541378e2();
int64_t unknown_601adfdf();
int64_t unknown_6076865();
int64_t unknown_75d6ecd2();
int64_t unknown_7a27ca5b();
int64_t unknown_7bf6319e();
int64_t unknown_ffffffff991a07d3();
int64_t unknown_ffffffff9d1ac683();
int64_t unknown_ffffffff9dac46b5();
int64_t unknown_ffffffffa476d5d3();
int64_t unknown_ffffffffb1dab256();
int64_t unknown_ffffffffb41d0413();
int64_t unknown_ffffffffc513493c();
int64_t unknown_ffffffffd3de0bd5();
int64_t unknown_ffffffffde323ba9();
int64_t unknown_ffffffffe512ed48();
int64_t unknown_ffffffffeaa87386();

// Address range: 0x14f513 - 0x14f526
int64_t function_14f513(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x14f513
    int64_t result; // 0x14f513
    int32_t * v1 = (int32_t *)(result + 70); // 0x14f513
    *v1 = *v1 + (int32_t)a1;
    int64_t v2; // 0x14f513
    *(int32_t *)a3 = 0x10000 * *(int32_t *)&v2;
    int32_t * v3 = (int32_t *)(result - 125); // 0x14f522
    *v3 = *v3 + (int32_t)result;
    return result;
}

// Address range: 0x14f527 - 0x14f568
int64_t function_14f527(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x14f527
    int64_t v1; // 0x14f527
    uint64_t v2 = v1;
    int64_t v3 = a2;
    *(char *)-0x5c0efe1765392144 = (char)a5;
    char * v4 = (char *)(v2 - 0x772092a6); // 0x14f535
    *v4 = *v4 + (char)a3;
    int64_t v5; // 0x14f527
    int64_t v6 = v2 | (int64_t)&v5;
    __asm_in(14);
    int64_t v7 = unknown_3d16dd45(); // 0x14f53f
    int64_t v8 = ((v7 - a4 / 256) % 256 | v7 & 0xffffff00) + v6 & 0xffffffff ^ 16; // 0x14f54a
    char * v9 = (char *)v8; // 0x14f54c
    *v9 = *v9 & (char)a4;
    int64_t result = v8; // 0x14f54e
    if (a4 != 1) {
        result = function_14f4e5();
    }
    // 0x14f550
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)a5;
    *(int64_t *)((v6 & 0xffffffff) - 8) = 0x6b7c4a00;
    *(char *)-0x1c2b7f9a = *(char *)-0x1c2b7f9a + (char)(v2 / 256);
    return result;
}

// Address range: 0x14f569 - 0x14f572
int64_t function_14f569(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 0x48aeffba); // 0x14f569
    int64_t result; // 0x14f569
    *v1 = *v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x14f572 - 0x14f575
int64_t function_14f572(int64_t a1) {
    // 0x14f572
    int64_t result; // 0x14f572
    return result;
}

// Address range: 0x14f60c - 0x14f60f
int64_t function_14f60c(void) {
    // 0x14f60c
    int64_t result; // 0x14f60c
    return result;
}

// Address range: 0x14f60f - 0x14f61b
int64_t function_14f60f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14f60f
    int64_t result; // 0x14f60f
    char * v1 = (char *)(result - 0x5df5e7a9); // 0x14f60f
    *v1 = *v1 ^ (char)a3;
    return result;
}

// Address range: 0x14f650 - 0x14f659
int64_t function_14f650(void) {
    // 0x14f650
    return unknown_ffffffffb1dab256();
}

// Address range: 0x14f673 - 0x14f698
int64_t function_14f673(int64_t a1) {
    // 0x14f673
    int64_t v1; // 0x14f673
    int32_t * v2 = (int32_t *)((v1 + 0xe8ba3886 & 0xffffffff) + 0x25999868); // 0x14f678
    *v2 = *v2 + (int32_t)v1;
    uint32_t v3 = (int32_t)unknown_ffffffffeaa87386() >> 31; // 0x14f685
    int32_t * v4 = (int32_t *)((int64_t)v3 + 111); // 0x14f68e
    *v4 = *v4 + (int32_t)v1;
    bool v5; // 0x14f673
    return function_14f6fa((v5 ? -1 : 1) + a1, v1, v3);
}

// Address range: 0x14f698 - 0x14f6d5
int64_t function_14f698(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x14f698
    __writefsbyte(4 * a4 + a2, (char)(unknown_7bf6319e() / 256));
    int64_t v1 = a3 & -0xff01 | (int64_t)&g2; // 0x14f6a1
    int64_t v2 = unknown_ffffffffde323ba9(); // 0x14f6a3
    float80_t v3; // 0x14f698
    *(int16_t *)a4 = (int16_t)v3;
    char v4 = __asm_in_133(90); // 0x14f6aa
    int64_t result = v2 & -256 | (int64_t)v4; // 0x14f6aa
    int64_t v5; // 0x14f698
    int32_t v6 = v5; // 0x14f6af
    int32_t v7 = v1; // 0x14f6af
    int32_t v8 = v6 + v7; // 0x14f6af
    if (v8 < 0 != ((v8 ^ v6) & (v8 ^ v7)) < 0) {
        int32_t * v9 = (int32_t *)((result ^ 202) + 5); // 0x14f6c9
        *v9 = *v9 | (int32_t)a2;
        return unknown_ffffffffd3de0bd5();
    }
    int32_t * v10 = (int32_t *)result; // 0x14f6ba
    *v10 = *v10 + v8;
    if (llvm_ctpop_i8(v4 - (char)*(int32_t *)0x95ea685) % 2 != 0) {
        // 0x14f6c1
        return result & -256 | (int64_t)__asm_in_134((int16_t)v1);
    }
    // 0x14f6c0
    return result;
}

// Address range: 0x14f6de - 0x14f6e2
int64_t function_14f6de(int64_t a1) {
    // 0x14f6de
    int64_t result; // 0x14f6de
    return result;
}

// Address range: 0x14f6e2 - 0x14f6e5
int64_t function_14f6e2(int64_t a1) {
    // 0x14f6e2
    int64_t result; // 0x14f6e2
    return result;
}

// Address range: 0x14f6fa - 0x14f6fc
int64_t function_14f6fa(int64_t a1, int64_t a2, int32_t a3) {
    // 0x14f6fa
    int64_t result; // 0x14f6fa
    return result;
}

// Address range: 0x14f70c - 0x14f711
int64_t function_14f70c(void) {
    // 0x14f70c
    int64_t v1; // 0x14f70c
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + 64;
    return function_14f75f(v1, v1, v1, v1, v1, (int64_t)&g6, (int64_t)&g6);
}

// Address range: 0x14f712 - 0x14f72a
int64_t function_14f712(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14f712
    unknown_29165918();
    int64_t v1; // 0x14f712
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)a2;
    bool v2; // 0x14f712
    return function_ffffffffafb27d23((v2 ? -1 : 1) + a1);
}

// Address range: 0x14f72d - 0x14f72f
int64_t function_14f72d(void) {
    // 0x14f72d
    int64_t result; // 0x14f72d
    return result;
}

// Address range: 0x14f751 - 0x14f752
int64_t function_14f751(void) {
    // 0x14f751
    int64_t result; // 0x14f751
    return result;
}

// Address range: 0x14f75d - 0x14f75f
int64_t function_14f75d(void) {
    // 0x14f75d
    int64_t result; // 0x14f75d
    return result;
}

// Address range: 0x14f75f - 0x14f827
int64_t function_14f75f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = unknown_6076865(); // 0x14f75f
    int64_t v2; // 0x14f75f
    *(int32_t *)a1 = (int32_t)v2;
    bool v3; // 0x14f75f
    int64_t v4 = v3 ? -4 : 4; // 0x14f764
    int64_t v5 = v4 + a1; // 0x14f764
    int64_t v6 = v4 + a2; // 0x14f764
    if (v3) {
        int32_t * v7 = (int32_t *)(v6 - 6); // 0x14f76f
        *v7 = *v7 + (int32_t)v6;
        int32_t v8 = *(int32_t *)((int64_t)(0x47f0f7f8 * *(int32_t *)v1) + 85); // 0x14f775
        return __asm_hlt(v5 + (v3 ? -1 : 1), (int64_t)(-76 * v8), a6);
    }
    int64_t result = unknown_601adfdf(v5, v6); // 0x14f7d9
    if (v3) {
        // 0x14f794
        return result;
    }
    char * v9 = (char *)(v6 + 0x6001e8ad); // 0x14f7e5
    *v9 = *v9 | (char)a3;
    *(int32_t *)v5 = *(int32_t *)v6;
    int64_t v10 = v5 + v4; // 0x14f7eb
    int64_t v11 = v6 + v4; // 0x14f7eb
    int64_t v12 = 0xe97125d0 * v11; // 0x14f7ee
    int64_t v13 = v10; // bp-8, 0x14f7f4
    int64_t v14 = (int64_t)&v13; // 0x14f7f4
    __asm_in_133(38);
    uint64_t v15 = unknown_36960dfd(); // 0x14f7f7
    int32_t * v16 = (int32_t *)(v10 - 0x5997c16e + v11); // 0x14f7fc
    *v16 = *v16 + (int32_t)v15;
    unsigned char v17 = *(char *)(v15 % 256 + v2); // 0x14f803
    int32_t v18 = *(int32_t *)-0x16f555f0; // 0x14f809
    *(int32_t *)-0x16f555f0 = v18 + (int32_t)(v10 + (v3 ? 0xffffffff : 1));
    int32_t * v19 = (int32_t *)(a3 - 47); // 0x14f80f
    uint32_t v20 = *v19; // 0x14f80f
    uint32_t v21 = (int32_t)a4; // 0x14f80f
    uint32_t v22 = v20 + v21; // 0x14f80f
    *v19 = v22;
    char * v23 = (char *)(v12 & 0xfffffff0 | 1); // 0x14f812
    unsigned char v24 = *v23; // 0x14f812
    unsigned char v25 = (char)a4; // 0x14f812
    char v26 = v22 < v20; // 0x14f812
    unsigned char v27 = v24 + v25; // 0x14f812
    char v28 = v27 + v26; // 0x14f812
    char v29 = v28 + v26; // 0x14f812
    char v30 = llvm_ctpop_i8(v28); // 0x14f812
    *v23 = v28;
    uint32_t v31 = v21 % 32; // 0x14f815
    bool v32 = v28 < 0; // 0x14f815
    bool v33 = v28 == 0; // 0x14f815
    bool v34 = ((v29 ^ v24) & (v29 ^ v25)) < 0; // 0x14f815
    char v35 = v30; // 0x14f815
    bool v36 = v22 < v20 ? v28 <= v24 : v27 < v24; // 0x14f815
    int64_t v37 = v14; // 0x14f815
    if (v31 != 0) {
        int32_t v38 = v14; // 0x14f815
        int32_t v39 = v38 << v31; // 0x14f815
        v35 = llvm_ctpop_i8((char)v39);
        v34 = v31 == 1 ? v39 < 0 != v38 << v31 - 1 < 0 : ((v29 ^ v24) & (v29 ^ v25)) < 0;
        v32 = v39 < 0;
        v33 = v39 == 0;
        v36 = v38 << v31 - 1 < 0;
        v37 = v39;
    }
    *(int64_t *)(v37 - 8) = -0x2b437300;
    *(int64_t *)(v37 - 16) = 0x4000 * (int64_t)v3 | 1024 * (int64_t)v3 | 512 * (int64_t)v3 | 256 * (int64_t)v3 | 16 * (int64_t)(v24 % 16 + v25 % 16 + v26 > 15) | 128 * (int64_t)v32 | 64 * (int64_t)v33 | 2048 * (int64_t)v34 | (int64_t)v36 | 4 * (int64_t)(v35 % 2 == 0) | 2;
    *(int64_t *)(v37 - 24) = -0x2f3e0f08;
    return (v15 & 0xffffff00 | (int64_t)v17) + v12 & 0xffffffff;
}

// Address range: 0x14f850 - 0x14f853
int64_t function_14f850(void) {
    // 0x14f850
    int64_t result; // 0x14f850
    return result;
}

// Address range: 0x16feaa - 0x16ff0e
int64_t function_16feaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x16feaa
    int64_t v1; // 0x16feaa
    return function_cf3c7(a1, a2, v1, a4);
}

// Address range: 0x16ff0e - 0x170040
int64_t function_16ff0e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x16ff0e
    int64_t v1; // 0x16ff0e
    return function_cf3c7(a1, a2, v1, v1);
}

// Address range: 0x170080 - 0x170081
int64_t function_170080(void) {
    // 0x170080
    int64_t result; // 0x170080
    return result;
}

// Address range: 0x170081 - 0x170086
int64_t function_170081(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0x170081
    *v1 = *v1 | (char)a4;
    int64_t v2; // 0x170081
    return function_17008e(a1, a2, a3, a4, v2, v2);
}

// Address range: 0x170086 - 0x17008e
int64_t function_170086(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x170086
    int64_t v1; // 0x170086
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(a1 + 28 + 4 * v2); // 0x170088
    *v3 = *v3 + (char)a4;
    return v2 & -164;
}

// Address range: 0x17008e - 0x1700aa
int64_t function_17008e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x17008e
    int64_t result; // 0x17008e
    return result;
}

// Address range: 0x195c85 - 0x195ca5
int64_t function_195c85(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x195c85
    int64_t v1; // 0x195c85
    int64_t v2 = v1;
    unsigned char v3 = *(char *)(v2 + 0xe9e01e8); // 0x195c89
    char v4 = *(char *)((a4 & -0xff01 | (int64_t)&g4) - 0x3185eaf8); // 0x195c8f
    uint64_t v5 = v2 & 0xffffff00 | 0x100000000 * a3 | (int64_t)((char)v2 - v4 + (char)(v3 > (char)(a3 / 256))); // 0x195c95
    uint64_t v6 = (int64_t)*(int32_t *)(v1 - 0x17e26300); // 0x195c95
    int64_t v7 = v5 / v6 + v1; // 0x195c9b
    *(int32_t *)-0x173c8e5c = *(int32_t *)-0x173c8e5c + (int32_t)a5;
    int32_t * v8 = (int32_t *)(v5 % v6); // 0x195ca3
    *v8 = *v8 + (int32_t)v7;
    return v7 & 0xffffffff;
}

// Address range: 0x195cbd - 0x195cc2
int64_t function_195cbd(void) {
    // 0x195cbd
    return function_3401a8fd();
}

// Address range: 0x195cc6 - 0x195cc7
int64_t function_195cc6(void) {
    // 0x195cc6
    int64_t result; // 0x195cc6
    return result;
}

// Address range: 0x195d31 - 0x195d41
int64_t function_195d31(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x195d31
    if (a4 == 0) {
        // 0x195d3a
        return unknown_1cc8d040();
    }
    // 0x195d33
    int64_t result; // 0x195d31
    return result;
}

// Address range: 0x195de6 - 0x195de7
int64_t function_195de6(int64_t a1) {
    // 0x195de6
    int64_t result; // 0x195de6
    return result;
}

// Address range: 0x195ef0 - 0x195f02
int64_t function_195ef0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x195ef0
    int64_t v1; // 0x195ef0
    int64_t v2 = (256 * v1 | a3) & 0xff00 | a3 & 0xffff00ff; // 0x195ef1
    int32_t v3 = *(int32_t *)v2; // 0x195ef7
    char v4 = *(char *)-0x17e20400; // 0x195ef9
    bool v5; // 0x195ef0
    *(char *)-0x17e20400 = (128 * (char)v5 | 64 * (char)v5 | 16 * (char)v5 | (char)v5 | 4 * (char)v5 | 2) + v4;
    return (int32_t)v2 + (int32_t)(-1 - (char)((uint64_t)v1 / 256) < (char)v1) + v3;
}

// Address range: 0x195f09 - 0x195f0a
int64_t function_195f09(int64_t a1) {
    // 0x195f09
    int64_t result; // 0x195f09
    return result;
}

// Address range: 0x195f2f - 0x195f30
int64_t function_195f2f(void) {
    // 0x195f2f
    int64_t result; // 0x195f2f
    return result;
}

// Address range: 0x195f36 - 0x195f5a
int64_t function_195f36(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x195f36
    unknown_3a404741();
    __asm_in_135(108);
    int32_t v1 = __asm_in(98); // 0x195f43
    int64_t v2; // 0x195f36
    int32_t * v3 = (int32_t *)(v2 - 0xd5a502e + 2 * v2); // 0x195f47
    *v3 = *v3 + v1;
    return unknown_2f245b55();
}

// Address range: 0x195f65 - 0x195f66
int64_t function_195f65(void) {
    // 0x195f65
    int64_t result; // 0x195f65
    return result;
}

// Address range: 0x195f6b - 0x195f7a
int64_t function_195f6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x195f6b
    *(char *)(a1 - 0x17edbd34) = (char)a3;
    int64_t result; // 0x195f6b
    int32_t * v1 = (int32_t *)(result + 0x43643a0a); // 0x195f73
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x195f8e - 0x195fe1
int64_t function_195f8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    uint64_t v2 = unknown_1a2e38c5(); // 0x195fbd
    char * v3 = (char *)(v2 + 0x2514000); // 0x195fc4
    *v3 = *v3 + (char)v2;
    char * v4 = (char *)(a3 + 1); // 0x195fca
    *v4 = *v4 + (char)(v2 / 256);
    unknown_ffffffff991a07d3();
    char v5 = *(char *)&v1 + (char)a3; // 0x195fd2
    *(char *)v1 = v5;
    int64_t result = __asm_wait(); // 0x195fd6
    if (a4 == 1 || v5 == 0) {
        // 0x195fda
        return unknown_541378e2();
    }
    // 0x19603f
    return result;
}

// Address range: 0x196036 - 0x19603f
int64_t function_196036(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x196036
    return unknown_ffffffffc513493c(a1, a2, a3) ^ a3 / 256 % 256;
}

// Address range: 0x196106 - 0x196116
int64_t function_196106(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    char * v1 = (char *)(a1 + 9); // 0x196108
    *v1 = *v1 + 1;
    int64_t v2; // 0x196106
    __asm_out((int16_t)v2, (int32_t)result);
    return result;
}

// Address range: 0x1961d8 - 0x19627b
int64_t function_1961d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t result; // 0x1961d8
    bool v3; // 0x1961d8
    if (!v3) {
        int32_t * v4 = (int32_t *)(a4 - 0x62b73db8); // 0x1961f6
        *v4 = *v4 + (int32_t)result;
        return result;
    }
    // 0x196255
    unknown_7a27ca5b();
    __asm_in_133(40);
    char * v5 = (char *)(a4 - 100); // 0x19625d
    *v5 = *v5 + (char)a4;
    *(int32_t *)a1 = *(int32_t *)&v2;
    int64_t v6 = (v3 ? -4 : 4) + a1; // 0x196260
    int32_t v7 = __asm_in(-24); // 0x196262
    int32_t * v8 = (int32_t *)(result - 0x17b41ec1); // 0x196265
    *v8 = *v8 + (int32_t)v1;
    uint32_t v9 = v7 | 0x4c9c643a; // 0x19626b
    int64_t result2 = v9; // 0x19626b
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v6;
    char * v10 = (char *)(v6 - 32); // 0x196275
    char v11 = *v10; // 0x196275
    *v10 = v11 - (char)v9;
    if ((int64_t)v11 <= result2) {
        // 0x19627a
        return result2;
    }
    // 0x196200
    __asm_fbld(*(float80_t *)(a5 + 111));
    unknown_ffffffffb41d0413();
    int64_t v12 = __asm_wait(); // 0x196212
    *(int32_t *)0x161501e8782eeafc = (int32_t)v12;
    char v13 = *(char *)v12; // 0x19621c
    int64_t result3 = v12 & -256 | (int64_t)((char)v12 + (char)((v9 + (int32_t)result ^ -2) < 0x5c092c4e) - v13); // 0x19621c
    char * v14 = (char *)result3; // 0x19621e
    *v14 = *v14 + 64;
    return result3;
}

// Address range: 0x19627b - 0x196286
int64_t function_19627b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19627b
    int64_t result; // 0x19627b
    bool v1; // 0x19627b
    if (!v1) {
        // 0x196284
        return result;
    }
    char * v2 = (char *)(a1 + 1); // 0x19627d
    unsigned char v3 = *v2; // 0x19627d
    *v2 = v3 / 128 | 2 * v3;
    return result;
}

// Address range: 0x196287 - 0x19628e
int64_t function_196287(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x196287
    int64_t result; // 0x196287
    return result;
}

// Address range: 0x1962a1 - 0x1963e4
int64_t function_1962a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3; // 0x1962a1
    int32_t * v4 = (int32_t *)(v3 - 0x2442c55c); // 0x1962a1
    *v4 = *v4 + (int32_t)v3;
    *(char *)0x26136507 = *(char *)0x26136507 + 1;
    unknown_ffffffff9dac46b5();
    uint32_t v5 = *(int32_t *)&v2; // 0x1962b4
    int32_t v6 = v3; // 0x1962b4
    uint32_t v7 = v5 + v6; // 0x1962b4
    *(int32_t *)v2 = v7;
    unsigned char v8 = (char)v3; // 0x1962b6
    unsigned char v9 = *(char *)(a3 - 93) + v8; // 0x1962b6
    unsigned char v10 = v9 + (char)(v7 < v5); // 0x1962b6
    char * v11 = (char *)(v3 - 0x178507ff); // 0x1962b9
    *v11 = 128 * (char)(v7 < v5 ? v10 <= v8 : v9 < v8) | *v11 / 2;
    int64_t v12 = v2;
    *(int32_t *)v12 = *(int32_t *)&v2 + (int32_t)v12;
    uint32_t v13 = *(int32_t *)&v1; // 0x1962c1
    uint32_t v14 = *(int32_t *)&v2; // 0x1962c1
    bool v15; // 0x1962a1
    int64_t v16 = v15 ? -4 : 4; // 0x1962c1
    int64_t v17 = v1 + v16; // 0x1962c1
    v2 += v16;
    v1 = v17;
    int64_t v18 = v3 & -256 | (int64_t)v10; // bp-8, 0x1962c2
    int32_t * v19 = (int32_t *)(a3 + 0x3f921448); // 0x1962c3
    uint32_t v20 = *v19; // 0x1962c3
    uint32_t v21 = (int32_t)a4; // 0x1962c3
    uint32_t v22 = v21 % 32; // 0x1962c3
    v1 = v17;
    bool v23 = v13 < v14; // 0x1962c3
    if (v22 != 0) {
        *v19 = v20 >> v22 | (int32_t)(v13 < v14) << 32 - v22 | (int32_t)((int64_t)v20 << (int64_t)(33 - v22));
        v23 = (v20 & 1 << v22 - 1) != 0;
    }
    float80_t v24; // 0x1962a1
    *(float64_t *)v1 = (float64_t)v24;
    int64_t v25 = (int64_t)&v18; // 0x1962cc
    v1 = v25;
    unknown_ffffffffa476d5d3(v2, v25);
    uint32_t v26 = *(int32_t *)0xc07bfa3bf6c14ab; // 0x1962d2
    int64_t v27 = v26 & -256; // 0x1962db
    int32_t * v28 = (int32_t *)((((int64_t)v26 - (v23 ? 233 : 232)) % 256 | v27) + 39); // 0x1962dd
    uint32_t v29 = *v28; // 0x1962dd
    uint32_t v30 = v29 + v21; // 0x1962dd
    *v28 = v30;
    int16_t v31 = a3; // 0x1962e4
    char v32 = __asm_in_134(v31); // 0x1962e4
    int64_t result = (int64_t)v32 | v27; // 0x1962e4
    if (*(char *)(v25 + 0x19946b3a) > 231) {
        // 0x19630c
        return result;
    }
    int32_t v33 = *(int32_t *)-0x46e4b4da; // 0x1962e6
    int32_t v34 = *(int32_t *)((a4 & -0x10000 | (int64_t)&g5 & -256 | 231) - 0x1772cf46); // 0x1962f5
    v1 = v34 + (int32_t)v1;
    uint32_t v35 = (int32_t)v25 + v6 + (int32_t)(v30 < v29) - v33; // 0x1962fb
    if (llvm_ctpop_i8((char)v35) % 2 != 0) {
        char * v36 = (char *)(result - 0x6897b7f6); // 0x1962ff
        *v36 = *v36 - 25;
        return result;
    }
    // 0x196370
    *(char *)-0x271da805bc5cbee = v32;
    int32_t * v37 = (int32_t *)result; // 0x19637e
    unsigned char v38 = *(char *)-0x3e20c57a; // 0x19637f
    *(char *)-0x3e20c57a = v38 + 9;
    *v37 = *v37 - 0x48f527a3 + (int32_t)(v38 > 246);
    int64_t v39 = result & 0xffffffff ^ 0xd10798f7; // 0x19638b
    __asm_rcl(*(int32_t *)v39);
    *(int32_t *)v2 = *(int32_t *)v1;
    int64_t v40 = v1 + v16; // 0x196396
    v1 = v40;
    if ((char)v39 != -116) {
        int32_t * v41 = (int32_t *)v40; // 0x1963d8
        *v41 = *v41 + (int32_t)a3;
        int16_t v42; // 0x1962a1
        unsigned char v43 = *(char *)((int64_t)(v42 % 256) | 0xf80900); // 0x1963da
        unsigned char v44 = *(char *)-0x1753d001; // 0x1963db
        *(char *)-0x1753d001 = v44 / 128 | 2 * v44;
        return (int64_t)v43 | (int64_t)(v42 & -256);
    }
    // 0x196399
    __asm_outsb((int16_t)v35 + v31, *(char *)v40);
    char * v45 = (char *)result;
    *v45 = *v45 >> 1;
    int64_t v46 = v39 + 50 & 220 | 35; // 0x1963a6
    int64_t v47 = v46 | v39 & 0xffffff00; // 0x1963a6
    char * v48 = (char *)v47; // 0x1963aa
    char v49 = v46; // 0x1963aa
    *v48 = *v48 + v49;
    *(char *)-0x16ef172a = *(char *)-0x16ef172a | v49;
    *v37 = *v37 + (int32_t)result;
    int64_t v50 = ((v18 & (int64_t)&g1) == 0 ? 4 : -4) + result; // 0x1963bf
    int32_t * v51 = (int32_t *)(v50 - 0x17fec29d); // 0x1963c9
    *v51 = *v51 + (int32_t)v1;
    *(int32_t *)v50 = *(int32_t *)v1;
    return v47 + 0xc4751ce1 + (int64_t)v35 & 0xffffffff;
}

// Address range: 0x19640d - 0x196429
int64_t function_19640d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x19640d
    int64_t v1; // 0x19640d
    int32_t * v2 = (int32_t *)(v1 + 0x578983ed); // 0x19640d
    *v2 = *v2 + (int32_t)v1;
    return a2 & 0xffffffff;
}

// Address range: 0x19642a - 0x19642d
int64_t function_19642a(int64_t a1) {
    // 0x19642a
    int64_t result; // 0x19642a
    return result;
}

// Address range: 0x19642d - 0x19647b
int64_t function_19642d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2; // 0x19642d
    bool v3; // 0x19642d
    if (v3) {
        uint32_t v4 = *(int32_t *)-0x17e4fbc587260967; // 0x196468
        int64_t v5 = v4; // 0x196468
        int32_t * v6 = (int32_t *)(v2 + 23); // 0x196472
        uint32_t v7 = *v6; // 0x196472
        uint32_t v8 = v7 + (int32_t)a3; // 0x196472
        *v6 = v8;
        char v9 = *(char *)v5; // 0x196475
        int64_t result = v5 & 0xffffff00 | (int64_t)((char)v4 - v9 + (char)(v8 < v7)); // 0x196475
        char * v10 = (char *)result; // 0x196477
        *v10 = *v10 - 122;
        return result;
    }
    int64_t v11 = unknown_4ea76e35(); // 0x19642f
    int32_t * v12 = (int32_t *)(v11 - 110); // 0x196434
    int32_t v13 = v2; // 0x196434
    *v12 = *v12 + v13;
    *(int32_t *)v1 = *(int32_t *)&v1 + v13;
    uint32_t v14 = *(int32_t *)(a2 - 0x2e1448d2); // 0x19643b
    return (v11 & 0xffffffff | 0x100000000 * a3) / (int64_t)v14 & 0xffffffff;
}

// Address range: 0x19647b - 0x19649d
int64_t function_19647b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x19647b
    int64_t v1; // 0x19647b
    *(char *)a1 = (char)unknown_ffffffff9d1ac683() + (char)v1;
    uint64_t v2 = __asm_iretd(); // 0x196484
    char * v3 = (char *)(8 * a1 - 0x700cccff + a4); // 0x196486
    *v3 = *v3 + (char)(v2 / 256);
    int64_t v4 = v2 & -256 | a4 / 256 % 256; // 0x19648d
    int32_t * v5 = (int32_t *)((256 * v2 & 0xff00 | a4 & -0xff01) - 0x543c900c); // 0x19648f
    *v5 = *v5 + (int32_t)v1;
    char * v6 = (char *)v4; // 0x196495
    *v6 = *v6 + (char)((int32_t)v2 >> 31);
    char * v7 = (char *)(a2 + 97 + 8 * v4); // 0x196497
    *v7 = *v7 | (char)v2;
    return __asm_wait();
}

// Address range: 0x1964c5 - 0x196547
int64_t function_1964c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_75d6ecd2(); // 0x1964cc
    int64_t v1; // 0x1964c5
    if ((v1 & 245) != 0) {
        // 0x1964d3
        return result;
    }
    // 0x19653b
    *(char *)a1 = (char)a2;
    bool v2; // 0x1964c5
    int64_t v3 = v2 ? -1 : 1; // 0x19653b
    int32_t * v4 = (int32_t *)(a4 + 0x25995a00); // 0x19653c
    *v4 = *v4 - (int32_t)a3;
    return unknown_ffffffffe512ed48(v3 + a1, v3 + a2);
}

// Address range: 0x19656c - 0x19656f
int64_t function_19656c(void) {
    // 0x19656c
    int64_t result; // 0x19656c
    return result;
}

// Address range: 0x19659c - 0x19659f
int64_t function_19659c(int64_t a1) {
    // 0x19659c
    int64_t result; // 0x19659c
    return result;
}

// Address range: 0x1965e2 - 0x1965e3
int64_t function_1965e2(int64_t a1) {
    // 0x1965e2
    int64_t result; // 0x1965e2
    return result;
}
