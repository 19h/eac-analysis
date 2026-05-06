/*
 * Targeted RetDec C for native executable gap queue batch 289.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xed79c-0xed99c rank=- name=- kind=- bytes=- uncovered=-
 *   0xed99c-0xedb9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xedb9c-0xedd9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xedd9c-0xedf9c rank=- name=- kind=- bytes=- uncovered=-
 *   0x16a6aa-0x16a8aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x2590c2-0x2592c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2592c2-0x2594c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2596c2-0x2598c2 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_16291ff();
int64_t function_16589476();
int64_t function_16a6aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16a790(void);
int64_t function_16a7e5(void);
int64_t function_16a7fd(int64_t a1);
int64_t function_16a800(void);
int64_t function_16a840(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_16a85c(void);
int64_t function_16a86a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_16a892(int64_t a1);
int64_t function_1cad06ce();
int64_t function_2590c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2590de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2590ff(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_259107(int64_t a1);
int64_t function_259112(int64_t a1, int64_t a2, int64_t a3);
int64_t function_25911a(void);
int64_t function_25917e(void);
int64_t function_259192(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_259205(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25921c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_259276(int64_t a1);
int64_t function_259289(void);
int64_t function_2592f0(void);
int64_t function_259306(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_259422(void);
int64_t function_259424(int64_t a1, int64_t a2, int64_t a3);
int64_t function_259433(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_259446(void);
int64_t function_2594a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2596c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_259731(void);
int64_t function_259739(int64_t a1);
int64_t function_259771(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_259785(int64_t a1);
int64_t function_2597a3(void);
int64_t function_2597c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25985c(void);
int64_t function_25985f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2598a2(int64_t a1);
int64_t function_2598a7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_7218e1d0();
int64_t function_cdc60();
int64_t function_ed79c(void);
int64_t function_ed7b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_ed92f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_eda7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_edaa5(void);
int64_t function_edafd(void);
int64_t function_edb60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_edcf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_ede3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t unknown_162d9e22();
int64_t unknown_1a2af1ea();
int64_t unknown_20e8940();
int64_t unknown_24011776();
int64_t unknown_4eecdb7e();
int64_t unknown_664d070();
int64_t unknown_6818a846();
int64_t unknown_7303725a();
int64_t unknown_7652c1f8();
int64_t unknown_77d53f77();
int64_t unknown_7a0eca88();
int64_t unknown_ffffffff91e601da();
int64_t unknown_ffffffff983415ac();
int64_t unknown_ffffffffb581640c();
int64_t unknown_ffffffffdd126b81();
int64_t unknown_ffffffffe90915f9();
int64_t unknown_fffffffff484cf83();

// Address range: 0xed79c - 0xed7ab
int64_t function_ed79c(void) {
    // 0xed79c
    int64_t v1; // 0xed79c
    char * v2 = (char *)(v1 + 96); // 0xed7a1
    *v2 = *v2 + (char)v1;
    return unknown_ffffffff983415ac();
}

// Address range: 0xed7b0 - 0xed901
int64_t function_ed7b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a6;
    int32_t v2 = __asm_in(-58); // 0xed7b0
    int16_t v3 = v2; // 0xed7b4
    int16_t v4 = (int16_t)*(char *)(a2 + 68); // 0xed7b4
    int16_t v5 = v3 / v4; // 0xed7b4
    int64_t result = (int64_t)(v5 % 256) | (int64_t)(v2 & -0x10000) | (int64_t)(256 * (v3 % v4)); // 0xed7b4
    int32_t * v6 = (int32_t *)result; // 0xed7bd
    uint32_t v7 = *v6; // 0xed7bd
    int32_t v8 = (int32_t)result < 0x28790001; // 0xed7bd
    int64_t v9; // 0xed7b0
    uint32_t v10 = v8 + (int32_t)v9; // 0xed7bd
    int32_t v11 = v7 - v10; // 0xed7bd
    *v6 = v11;
    if ((int32_t)result < 0x28790001 ? v10 != -1 || v7 < v11 - v8 : v7 < v10) {
        char * v12 = (char *)result; // 0xed833
        *v12 = *v12 | (char)a4;
        int32_t * v13 = (int32_t *)(result - 57); // 0xed835
        *v13 = *v13 & (int32_t)(int64_t)&v1;
        return result;
    }
    char * v14 = (char *)(result - 0x63f577fa); // 0xed7c3
    *v14 = *v14 | (char)(v9 / 256);
    int64_t v15 = (char)v5 < 236 ? 0x13d004c : 0x13d004b; // 0xed7cb
    return (result & 0xffffff00 | (int64_t)((v5 + 20) % 256)) + v15 & 0xffffffff;
}

// Address range: 0xed92f - 0xed96b
int64_t function_ed92f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = a1; // 0xed92f
    bool v2; // 0xed92f
    *(int32_t *)0xa2b64ab = (int32_t)v2 - v1 + *(int32_t *)0xa2b64ab;
    int32_t * v3 = (int32_t *)(a4 - 0x2cf57710); // 0xed937
    *v3 = *v3 + (int32_t)a3;
    int64_t v4; // 0xed92f
    int64_t v5 = (v4 & 0xffffff00 | (int64_t)*(char *)0x50d8ce5808855089) + v4; // 0xed946
    int32_t v6 = v5; // 0xed948
    uint32_t v7 = v6 + v1; // 0xed948
    if (v7 != 0) {
        // 0xed967
        return v4 & 0xffffffff;
    }
    int64_t v8 = v5 & 0xffffffff; // 0xed946
    char * v9 = (char *)(v8 - 94); // 0xed94c
    unsigned char v10 = *v9; // 0xed94c
    unsigned char v11 = v10 + (char)v4; // 0xed94c
    *v9 = v11;
    int32_t v12 = *(int32_t *)v8; // 0xed94f
    char * v13 = (char *)((int64_t)v7 + 90); // 0xed951
    *v13 = *v13 | (char)((v12 + v6 + (int32_t)(v11 < v10)) / 256);
    return unknown_7303725a(v7);
}

// Address range: 0xeda7a - 0xeda83
int64_t function_eda7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xeda7a
    int64_t result; // 0xeda7a
    int32_t * v1 = (int32_t *)(result + 0x473db303); // 0xeda7a
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0xedaa5 - 0xedaaa
int64_t function_edaa5(void) {
    // 0xedaa5
    return function_1cad06ce();
}

// Address range: 0xedafd - 0xedafe
int64_t function_edafd(void) {
    // 0xedafd
    int64_t result; // 0xedafd
    return result;
}

// Address range: 0xedb60 - 0xedcf8
int64_t function_edb60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3 = a1;
    int64_t v4 = (int64_t)*(int32_t *)(a3 - 0x174bcec9); // 0xedb68
    if (a4 == 0) {
        v4 = function_edafd();
    }
    // 0xedb6a
    int64_t v5; // 0xedb60
    int64_t v6 = v5 + a2; // 0xedb66
    unknown_24011776();
    int64_t result = unknown_ffffffffdd126b81(); // 0xedb7a
    int64_t v7 = a2; // bp-8, 0xedb80
    *(char *)a1 = (char)a1 + 69;
    __asm_fbld(*(float80_t *)((v6 & 0xffffffff) - 24));
    int32_t v8 = *(int32_t *)&v3; // 0xedb87
    *(int32_t *)v3 = v8 + (int32_t)(int64_t)&v7;
    *(char *)v3 = *(char *)&v2;
    bool v9; // 0xedb60
    int64_t v10 = v9 ? -1 : 1; // 0xedb8b
    int64_t v11 = v3 + v10; // 0xedb8b
    v2 += v10;
    char * v12 = (char *)(v5 + 0x1e80880); // 0xedb8d
    *v12 = *v12 ^ (char)v6;
    int128_t v13; // 0xedb60
    __asm_maxps(v13, *(int128_t *)&v1);
    *(int32_t *)v11 = (int32_t)result;
    int64_t v14 = v11 + (v9 ? -4 : 4); // 0xedb98
    v3 = v14;
    char * v15 = (char *)(v14 + 0x7801e872); // 0xedb99
    char v16 = *v15; // 0xedb99
    char v17 = v1; // 0xedb99
    char v18 = v16 + v17; // 0xedb99
    *v15 = v18;
    if (((v18 ^ v16) & (v18 ^ v17)) >= 0) {
        // 0xedba4
        return result;
    }
    int64_t v19 = v4 & 0xffffffff; // 0xedb6f
    int64_t v20 = v1; // 0xedc46
    int64_t v21; // bp-80, 0xedb60
    int64_t v22 = (int64_t)&v21; // 0xedcb3
    v21 = v19;
    *(int64_t *)(v22 + 8) = v22 + 24;
    return function_cdc60(0xe8d2e, v2, v20, v19, a5, a6, v20, 0x37e75880, 0xe8d2e);
}

// Address range: 0xedcf8 - 0xede3f
int64_t function_edcf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xedcf8
    int64_t v1; // bp-40, 0xedcf8
    int64_t v2 = (int64_t)&v1; // 0xedd71
    v1 = v2;
    int64_t v3 = v2 - 8; // 0xedd79
    int64_t v4 = *(int64_t *)(v2 + 32); // 0xedd84
    *(int64_t *)v3 = v4;
    int64_t v5 = v2 - 16; // 0xedd88
    int64_t * v6 = (int64_t *)v5; // 0xedd88
    *v6 = v4;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0xedd9e
    *v7 = v3;
    *v6 = 0x59921022;
    *v7 = 0x7896c5a1;
    *(int64_t *)(v2 - 32) = v4;
    v1 = *v6;
    *v6 = v5;
    *v7 = *(int64_t *)(v2 + 8);
    *(int64_t *)(v2 + 16) = *v6;
    *v6 = a6;
    *v7 = a1;
    int64_t v8 = *v6; // 0xede12
    *v7 = v5;
    *v6 = v2;
    int64_t v9; // 0xedcf8
    bool v10; // 0xedcf8
    int64_t result = function_cdc60(a1, a2, a3, a4, a5, v8, v9 & -256 | (int64_t)!v10, (int64_t)&g2, (int64_t)&g2); // 0xede3a
    return result;
}

// Address range: 0xede3f - 0xedf81
int64_t function_ede3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xede3f
    int64_t v1; // bp-32, 0xede3f
    int64_t v2 = (int64_t)&v1; // 0xede89
    int64_t v3; // 0xede3f
    bool v4; // 0xede3f
    v1 = v3 & -256 | (int64_t)!v4;
    int64_t * v5 = (int64_t *)(v2 - 24); // 0xedeb5
    int64_t v6 = *(int64_t *)(v2 + 24); // 0xedebb
    int64_t * v7 = (int64_t *)(v2 - 16); // 0xedebb
    *v7 = v6;
    *v5 = v2 - 8;
    *v5 = v1;
    int64_t v8 = v2 - 32; // 0xededc
    int64_t * v9 = (int64_t *)v8; // 0xededc
    *v9 = 0x159f48da;
    int64_t * v10 = (int64_t *)(v2 - 40); // 0xedf01
    *(int64_t *)(v2 - 48) = v6;
    *v10 = v6;
    *v7 = *v9;
    *v10 = v8;
    *v9 = v6;
    *(int64_t *)(v2 + 8) = *v5;
    *v9 = *v7;
    *v5 = v2;
    *v9 = *v7;
    return function_cdc60(a1, a2, a3, a4, a5, a6, 0xeafe4, 310, 0x4000 * (int64_t)v4 | 2048 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4 | 2);
}

// Address range: 0x16a6aa - 0x16a6b1
int64_t function_16a6aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16a6aa
    int64_t result; // 0x16a6aa
    int32_t * v1 = (int32_t *)(8 * a4 + 0x18c0392 + result); // 0x16a6aa
    *v1 = *v1 + (int32_t)a1;
    return result;
}

// Address range: 0x16a790 - 0x16a79d
int64_t function_16a790(void) {
    // 0x16a790
    return function_7218e1d0();
}

// Address range: 0x16a7e5 - 0x16a7e6
int64_t function_16a7e5(void) {
    // 0x16a7e5
    int64_t result; // 0x16a7e5
    return result;
}

// Address range: 0x16a7fd - 0x16a800
int64_t function_16a7fd(int64_t a1) {
    // 0x16a7fd
    int64_t result; // 0x16a7fd
    *(int32_t *)a1 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x16a800 - 0x16a802
int64_t function_16a800(void) {
    // 0x16a800
    return function_16a85c();
}

// Address range: 0x16a840 - 0x16a85c
int64_t function_16a840(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x16a840
    unknown_6818a846();
    *(char *)0x7b9fd401e83b0cfc = (char)a2;
    char v1 = a3; // 0x16a850
    char v2 = a4 / 256; // 0x16a850
    char v3 = v2 + v1; // 0x16a850
    int64_t result = a2 & 0xffffffff; // 0x16a857
    if (v3 < 0 == ((v3 ^ v1) & (v3 ^ v2)) < 0) {
        result = function_16a7e5();
    }
    // 0x16a859
    return result;
}

// Address range: 0x16a85c - 0x16a865
int64_t function_16a85c(void) {
    // 0x16a85c
    int64_t v1; // 0x16a85c
    int64_t result = v1;
    *(char *)-0x31e76e9e = *(char *)-0x31e76e9e - 77;
    *(int32_t *)result = (int32_t)result;
    return result;
}

// Address range: 0x16a86a - 0x16a885
int64_t function_16a86a(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_664d070(); // 0x16a86a
    int32_t * v2 = (int32_t *)(a3 + 0x2c050880); // 0x16a86f
    *v2 = *v2 | (int32_t)a1;
    int64_t v3; // 0x16a86a
    int32_t * v4 = (int32_t *)((8 * v3 | 1) + v1); // 0x16a875
    *v4 = *v4 | (int32_t)a2;
    uint64_t result = unknown_fffffffff484cf83(); // 0x16a879
    char * v5 = (char *)(v3 + 0x1e8815a); // 0x16a87e
    *v5 = *v5 + (char)(result / 256);
    return result;
}

// Address range: 0x16a892 - 0x16a893
int64_t function_16a892(int64_t a1) {
    // 0x16a892
    int64_t result; // 0x16a892
    return result;
}

// Address range: 0x2590c2 - 0x2590cc
int64_t function_2590c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2590c2
    int64_t v1; // 0x2590c2
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a6 - 0x26fe1707); // 0x2590c2
    *v3 = *v3 + (int32_t)v1;
    int64_t v4; // 0x2590c2
    return v2 & 0xffffff00 | (int64_t)((char)v2 - *(char *)&v4);
}

// Address range: 0x2590de - 0x2590f8
int64_t function_2590de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2590de
    int64_t v1; // 0x2590de
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)(v2 & a1);
    bool v3; // 0x2590de
    int64_t v4 = v3 ? -1 : 1; // 0x2590e0
    int64_t v5 = v4 + a1; // 0x2590e0
    int64_t result = unknown_1a2af1ea(v5, v4 + a2); // 0x2590e4
    __asm_out(23, (char)result);
    int32_t * v6 = (int32_t *)(2 * v5 + 0xfd429a04); // 0x2590f4
    *v6 = *v6 + (int32_t)(256 * result + a4 & 0xff00 | a4 & 0xffff00ff);
    return result;
}

// Address range: 0x2590ff - 0x259104
int64_t function_2590ff(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2590ff
    int64_t v1; // 0x2590ff
    int64_t v2 = v1;
    int64_t result = (v2 - a4 / 256) % 256 | v2 & -256; // 0x2590ff
    *(int32_t *)a2 = (int32_t)result + (int32_t)v1;
    return result;
}

// Address range: 0x259107 - 0x259108
int64_t function_259107(int64_t a1) {
    // 0x259107
    int64_t result; // 0x259107
    return result;
}

// Address range: 0x259112 - 0x259119
int64_t function_259112(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 79); // 0x259112
    int64_t result; // 0x259112
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x25911a - 0x25911b
int64_t function_25911a(void) {
    // 0x25911a
    int64_t result; // 0x25911a
    return result;
}

// Address range: 0x25917e - 0x259187
int64_t function_25917e(void) {
    // 0x25917e
    int64_t v1; // 0x25917e
    __asm_out(-68, (char)v1);
    return function_25911a();
}

// Address range: 0x259192 - 0x259204
int64_t function_259192(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1;
    *(char *)a5 = 61;
    int32_t * v2 = (int32_t *)(4 * a1 + 36 + a4); // 0x259196
    int64_t v3; // 0x259192
    *v2 = *v2 + (int32_t)v3;
    __asm_sti();
    int64_t v4 = ((a6 & (int64_t)&g1) == 0 ? 1 : -1) + a2; // 0x25919c
    char * v5 = (char *)(v4 + 59); // 0x25919d
    *v5 = *v5 ^ (char)v3;
    int32_t * v6 = (int32_t *)(a3 + 39); // 0x2591a4
    int64_t v7; // bp+16, 0x259192
    *v6 = *v6 | (int32_t)(int64_t)&v7;
    int32_t * v8 = (int32_t *)(v1 - 0x7fc0e44b); // 0x2591b1
    *v8 = *v8 + (int32_t)a4;
    if (a4 != 0) {
        int64_t result = __asm_iretd(); // 0x2591bd
        *(int32_t *)(v4 + 119 + 2 * v3) = (int32_t)v4;
        return result;
    }
    int64_t v9 = unknown_ffffffffe90915f9(); // 0x2591f3
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v3;
    *(char *)v1 = __asm_insb((int16_t)a3);
    unsigned char v10 = llvm_ctpop_i8((char)v9 - 1); // 0x2591fb
    int64_t result2 = __asm_hlt(); // 0x259200
    if (v10 % 2 != 0) {
        // 0x2591d9
        return function_16291ff();
    }
    // 0x259204
    return result2;
}

// Address range: 0x259205 - 0x259219
int64_t function_259205(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffb581640c(); // 0x259206
    int64_t result = a3 & 0xffffffff; // 0x25920c
    bool v2; // 0x259205
    if (!v2) {
        // 0x25920e
        result = unknown_20e8940();
    }
    // 0x259213
    int64_t v3; // 0x259205
    int32_t * v4 = (int32_t *)(result + 4 * v3); // 0x259213
    *v4 = *v4 | (int32_t)v1;
    return result;
}

// Address range: 0x25921c - 0x259231
int64_t function_25921c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t result = unknown_162d9e22() + 5 & 0xffffff00 | a4 / 256 % 256; // 0x259226
    int64_t v1; // 0x25921c
    int32_t * v2 = (int32_t *)(v1 - 0x521b82f8); // 0x259228
    *v2 = *v2 + (int32_t)result;
    return result;
}

// Address range: 0x259276 - 0x259277
int64_t function_259276(int64_t a1) {
    // 0x259276
    int64_t result; // 0x259276
    return result;
}

// Address range: 0x259289 - 0x25928e
int64_t function_259289(void) {
    // 0x259289
    return function_16589476();
}

// Address range: 0x2592f0 - 0x2592f1
int64_t function_2592f0(void) {
    // 0x2592f0
    int64_t result; // 0x2592f0
    return result;
}

// Address range: 0x259306 - 0x259402
int64_t function_259306(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = *(int32_t *)(a4 + 110) & (int32_t)a2; // 0x25930c
    int64_t v2 = v1; // 0x25930c
    int64_t v3; // 0x259306
    if (a4 != 1 != (v1 == 0)) {
        // 0x259311
        __asm_outsb((int16_t)a3, *(char *)v2);
        int64_t v4 = __asm_iretd(); // 0x259316
        int64_t v5 = a3 & -256 | 232; // 0x259318
        int32_t * v6 = (int32_t *)v2; // 0x25931a
        uint32_t v7 = *v6; // 0x25931a
        int64_t v8; // 0x259306
        uint32_t v9 = v7 + (int32_t)(int64_t)&v8; // 0x25931a
        *v6 = v9;
        *(int32_t *)a1 = __asm_insd((int16_t)v5);
        unsigned char v10 = (char)(v9 < v7) + (char)v4 - *(char *)(v5 - 105); // 0x25931d
        int64_t v11 = v4 & -256; // 0x25931d
        *(int32_t *)-0x506fe177e566127 = (int32_t)(v11 | (int64_t)v10);
        int64_t v12 = ((v11 | (int64_t)(v10 | 6)) ^ v3) & 0xffffffff; // 0x259336
        int32_t * v13 = (int32_t *)(v12 + 10); // 0x259338
        uint32_t v14 = *v13; // 0x259338
        uint32_t v15 = v14 + (int32_t)v3; // 0x259338
        *v13 = v15;
        int64_t result = v12; // 0x25933b
        if (v15 < v14) {
            result = function_2592f0();
        }
        // 0x25933d
        return result;
    }
    int64_t v16 = unknown_77d53f77(); // 0x259371
    if (v1 != 0) {
        // 0x259343
        return (v16 + 79) / 2 % 128 | v16 & -256;
    }
    int32_t * v17 = (int32_t *)v16; // 0x259378
    *v17 = *v17 + (int32_t)a3;
    char * v18 = (char *)(v2 - 0x1b5a03a1); // 0x25937a
    *v18 = *v18 | (char)(a3 / 256);
    if (a4 != 2) {
        // 0x259396
        __asm_outsd((int16_t)a3, *(int32_t *)v2);
        int64_t v19 = __asm_int1(); // 0x25939a
        char v20 = *(char *)v19; // 0x25939d
        __asm_int(-24);
        *(int32_t *)-0x17645b56 = *(int32_t *)-0x17645b56 + (int32_t)a1;
        int32_t * v21 = (int32_t *)(a3 + 16 + 8 * v3); // 0x2593a9
        *v21 = *v21 + v1;
        return (v19 & 0xffffff00 | (int64_t)(v20 | (char)v19)) + v3 & 0xffffffff;
    }
    int64_t v22 = unknown_7a0eca88(); // 0x259382
    char v23 = v22; // 0x259387
    if (v23 == 0) {
        char * v24 = (char *)(v3 + 0x13d0000 + v3); // 0x2593f9
        *v24 = *v24 - 1;
        return (int64_t)*(int32_t *)-0x72e445676fc5f1d0;
    }
    unsigned char v25 = llvm_ctpop_i8(v23); // 0x259387
    uint32_t v26 = *(int32_t *)0x1e8933c; // 0x25938d
    return v22 & -0x10000 | 0x8000 * (int64_t)(v23 < 0) | 1024 * (int64_t)(v25 % 2 == 0) | (v22 + 149 + (int64_t)(v26 < (int32_t)a1)) % 256 | 512;
}

// Address range: 0x259422 - 0x259423
int64_t function_259422(void) {
    // 0x259422
    int64_t result; // 0x259422
    return result;
}

// Address range: 0x259424 - 0x259429
int64_t function_259424(int64_t a1, int64_t a2, int64_t a3) {
    // 0x259424
    return function_259422();
}

// Address range: 0x259433 - 0x25943a
int64_t function_259433(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x534e3ac5); // 0x259433
    *v1 = *v1 ^ (int32_t)a2;
    int64_t result; // 0x259433
    return result;
}

// Address range: 0x259446 - 0x259447
int64_t function_259446(void) {
    // 0x259446
    int64_t result; // 0x259446
    return result;
}

// Address range: 0x2594a6 - 0x2594b6
int64_t function_2594a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2594a6
    int64_t result; // 0x2594a6
    int32_t * v1 = (int32_t *)(result + 0x3d583100); // 0x2594a6
    int32_t v2 = result; // 0x2594a6
    *v1 = *v1 + v2;
    int32_t * v3 = (int32_t *)(result - 0x6fd4ebe2); // 0x2594ac
    *v3 = *v3 + (int32_t)a4;
    int32_t * v4 = (int32_t *)(a2 - 90); // 0x2594b2
    *v4 = *v4 + v2;
    return result;
}

// Address range: 0x2596c2 - 0x2596ca
int64_t function_2596c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2596c2
    int64_t result; // 0x2596c2
    int32_t * v1 = (int32_t *)(8 * result + a3); // 0x2596c6
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x259731 - 0x259734
int64_t function_259731(void) {
    // 0x259731
    int64_t result; // 0x259731
    return result;
}

// Address range: 0x259739 - 0x25973a
int64_t function_259739(int64_t a1) {
    // 0x259739
    int64_t result; // 0x259739
    return result;
}

// Address range: 0x259771 - 0x259784
int64_t function_259771(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_4eecdb7e() | 210; // 0x25977d
    char * v1 = (char *)(a4 + 58 + 4 * result); // 0x25977f
    int64_t v2; // 0x259771
    *v1 = *v1 + (char)((uint64_t)v2 / 256);
    return result;
}

// Address range: 0x259785 - 0x259786
int64_t function_259785(int64_t a1) {
    // 0x259785
    int64_t result; // 0x259785
    return result;
}

// Address range: 0x2597a3 - 0x2597a6
int64_t function_2597a3(void) {
    // 0x2597a3
    int64_t result; // 0x2597a3
    return result;
}

// Address range: 0x2597c3 - 0x2597f7
int64_t function_2597c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2597c3
    int64_t v1; // 0x2597c3
    char * v2 = (char *)(8 * v1 + 0x6aac9001 + v1); // 0x2597c3
    *v2 = -*v2;
    int32_t * v3 = (int32_t *)(a1 + 69); // 0x2597ca
    *v3 = *v3 - 0x6682b215;
    int64_t v4; // 0x2597c3
    *(int32_t *)a3 = *(int32_t *)&v4 + (int32_t)v1;
    int64_t v5 = unknown_ffffffff91e601da(); // 0x2597d4
    char * v6 = (char *)v5; // 0x2597d9
    *v6 = *v6 + (char)a4;
    *(int64_t *)((v1 & 0xffffffff) - 8) = a4;
    char v7 = *(char *)0x38277ff3 + (char)v5; // 0x2597e0
    unsigned char v8 = llvm_ctpop_i8(v7); // 0x2597e0
    *(char *)0x38277ff3 = v7;
    if (v8 % 2 == 0) {
        // 0x2597ed
        return unknown_7652c1f8();
    }
    // 0x2597eb
    return a4 & 0xffffffff;
}

// Address range: 0x25985c - 0x25985d
int64_t function_25985c(void) {
    // 0x25985c
    int64_t result; // 0x25985c
    return result;
}

// Address range: 0x25985f - 0x25987f
int64_t function_25985f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x25985f
    int64_t result; // 0x25985f
    uint64_t v1 = result;
    char v2 = v1 / 256; // 0x259868
    *(char *)a3 = (char)result + v2;
    unsigned char v3 = *(char *)0x3a9ff972; // 0x25986b
    unsigned char v4 = v3 + v2; // 0x25986b
    *(char *)0x3a9ff972 = v4;
    int32_t * v5 = (int32_t *)(v1 - 0x11830bbd); // 0x259871
    *v5 = *v5 + (int32_t)result + (int32_t)(v4 < v3);
    return result;
}

// Address range: 0x2598a2 - 0x2598a7
int64_t function_2598a2(int64_t a1) {
    // 0x2598a2
    int64_t result; // 0x2598a2
    int64_t v1 = result;
    bool v2; // 0x2598a2
    *(char *)v1 = (char)v1 - (char)(result / 256) + (char)v2;
    return result;
}

// Address range: 0x2598a7 - 0x2598ad
int64_t function_2598a7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2598a7
    int64_t v1; // 0x2598a7
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2; // 0x2598a7
    bool v3; // 0x2598a7
    if (true == !v3) {
        v2 = function_25985c();
    }
    int64_t v4 = v2;
    return (v4 + (v3 ? 49 : 48)) % 256 | v4 & -256;
}
