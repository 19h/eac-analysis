/*
 * Targeted RetDec C for native executable gap queue batch 209.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x17c485-0x17c685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e341e-0x2e361e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e361e-0x2e381e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e381e-0x2e3a1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x140913-0x140b13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x140b13-0x140d13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x140d13-0x140f13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x161eaa-0x1620aa rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_140913(void);
int64_t function_140976(int64_t a1, int64_t a2, int64_t a3);
int64_t function_140983(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1409ae(void);
int64_t function_1409c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_140a6b(int64_t a1);
int64_t function_140b19(void);
int64_t function_140c05(void);
int64_t function_140c31(int64_t result);
int64_t function_140c49(int64_t a1);
int64_t function_140c81(int64_t a1);
int64_t function_140ca4(void);
int64_t function_140cb5(void);
int64_t function_140d62(int64_t a1);
int64_t function_140e4a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_140e6a(int64_t a1);
int64_t function_140e83(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_161eaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_17c485(int64_t a1);
int64_t function_17c4c5(void);
int64_t function_17c4c7(void);
int64_t function_17c4cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17c520(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17c52e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_17c549(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17c5ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17c5b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17c5c7(void);
int64_t function_17c5ea(void);
int64_t function_17c60b(void);
int64_t function_2163add();
int64_t function_2275b91c();
int64_t function_2b190349();
int64_t function_2e33fb();
int64_t function_2e341e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e3478(void);
int64_t function_2e347e(int64_t a1);
int64_t function_2e3497(void);
int64_t function_2e34dc(void);
int64_t function_2e3515(int64_t a1, int64_t a2);
int64_t function_2e353d(int64_t a1);
int64_t function_2e3589(void);
int64_t function_2e359f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_2e361c(void);
int64_t function_2e3651(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e366a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e3767(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e37e6(void);
int64_t function_2e3831(void);
int64_t function_2e3847(int64_t a1, int64_t a2);
int64_t function_2e387a(void);
int64_t function_2e387e(int64_t a1, int64_t a2);
int64_t function_2e38db(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e3902(void);
int64_t function_2e390d(void);
int64_t function_2e39ac(void);
int64_t function_2e39be(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3d866e7d();
int64_t function_4f19ae45();
int64_t function_aec14b3();
int64_t function_cdc60();
int64_t function_ffffffff908b4b87();
int64_t function_ffffffff9cca3902();
int64_t unknown_182481e6();
int64_t unknown_1c51d98d();
int64_t unknown_1d3ea3b4();
int64_t unknown_237dfcd5();
int64_t unknown_28817b7c();
int64_t unknown_34d5f61b();
int64_t unknown_4977bb73();
int64_t unknown_6fc1157a();
int64_t unknown_79f2c0be();
int64_t unknown_7e2a4e9e();
int64_t unknown_a24fdcd();
int64_t unknown_c1869e8();
int64_t unknown_ffffffff839be153();
int64_t unknown_ffffffff88c20789();
int64_t unknown_ffffffffa340108f();
int64_t unknown_ffffffffa3c85137();
int64_t unknown_ffffffffa8741389();
int64_t unknown_ffffffffabc96171();
int64_t unknown_ffffffffb41f5f69();
int64_t unknown_ffffffffb63a8f46();
int64_t unknown_ffffffffc9180c0d();
int64_t unknown_ffffffffcdb4a6b7();
int64_t unknown_ffffffffdf17bd55();
int64_t unknown_ffffffffdf1d0471();
int64_t unknown_fffffffff823cf00();
int64_t unknown_fffffffffbf00df3();

// Address range: 0x140913 - 0x14091a
int64_t function_140913(void) {
    // 0x140913
    return unknown_34d5f61b();
}

// Address range: 0x140976 - 0x140980
int64_t function_140976(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 0x1e8d456); // 0x140976
    bool v2; // 0x140976
    return __asm_in((int16_t)((int32_t)v2 + (int32_t)a3 - v1));
}

// Address range: 0x140983 - 0x140992
int64_t function_140983(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_ffffffff88c20789(); // 0x140983
    int64_t v1; // 0x140983
    *(int32_t *)a1 = (int32_t)v1 + 0x21fe171a;
    return result;
}

// Address range: 0x1409ae - 0x1409af
int64_t function_1409ae(void) {
    // 0x1409ae
    int64_t result; // 0x1409ae
    return result;
}

// Address range: 0x1409c5 - 0x140a27
int64_t function_1409c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t v2; // 0x1409c5
    *(char *)a1 = (char)a1 - (char)(v2 / 256);
    char * v3 = (char *)(8 * v2 - 0x760e4eff + v2); // 0x1409c7
    char v4 = *v3 | (char)v2; // 0x1409c7
    *v3 = v4;
    if (v4 != 0) {
        int64_t v5 = function_1409ae(); // 0x1409d1
        *(int32_t *)(v2 & 0xffffffff) = ((int32_t)a3 & -256 | 232) + (int32_t)v5;
        return function_aec14b3();
    }
    // 0x140a1f
    *(char *)v1 = __asm_insb((int16_t)a3);
    int64_t result = unknown_ffffffffc9180c0d(); // 0x140a20
    *(int32_t *)v1 = *(int32_t *)&v1 ^ (int32_t)a3;
    return result;
}

// Address range: 0x140a6b - 0x140a71
int64_t function_140a6b(int64_t a1) {
    // 0x140a6b
    int64_t result; // 0x140a6b
    return result;
}

// Address range: 0x140b19 - 0x140b1d
int64_t function_140b19(void) {
    // 0x140b19
    int64_t result; // 0x140b19
    return result;
}

// Address range: 0x140c05 - 0x140c0a
int64_t function_140c05(void) {
    // 0x140c05
    int64_t result; // 0x140c05
    return result;
}

// Address range: 0x140c31 - 0x140c34
int64_t function_140c31(int64_t result) {
    // 0x140c31
    return result;
}

// Address range: 0x140c49 - 0x140c4a
int64_t function_140c49(int64_t a1) {
    // 0x140c49
    int64_t result; // 0x140c49
    return result;
}

// Address range: 0x140c81 - 0x140c82
int64_t function_140c81(int64_t a1) {
    // 0x140c81
    int64_t result; // 0x140c81
    return result;
}

// Address range: 0x140ca4 - 0x140ca5
int64_t function_140ca4(void) {
    // 0x140ca4
    int64_t result; // 0x140ca4
    return result;
}

// Address range: 0x140cb5 - 0x140cbd
int64_t function_140cb5(void) {
    char v1 = *(char *)0xec045bc; // 0x140cb5
    int64_t v2; // 0x140cb5
    *(char *)0xec045bc = v1 + (char)((uint64_t)v2 / 256);
    return function_140ca4();
}

// Address range: 0x140d62 - 0x140d65
int64_t function_140d62(int64_t a1) {
    // 0x140d62
    int64_t result; // 0x140d62
    return result;
}

// Address range: 0x140e4a - 0x140e6a
int64_t function_140e4a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x140e4a
    int64_t v1; // 0x140e4a
    char * v2 = (char *)(v1 - 2); // 0x140e4a
    *v2 = *v2 + (char)a4;
    int64_t v3 = unknown_ffffffff839be153(); // 0x140e4d
    *(int32_t *)-0x43f7effe17006598 = (int32_t)v3;
    char * v4 = (char *)(v3 + 49); // 0x140e61
    *v4 = *v4 ^ (char)(a3 / 256);
    int64_t result = __asm_int3(a1); // 0x140e64
    __asm_int(-16);
    return result;
}

// Address range: 0x140e6a - 0x140e77
int64_t function_140e6a(int64_t a1) {
    int64_t result = unknown_ffffffffabc96171(a1); // 0x140e6a
    int64_t v1; // 0x140e6a
    *(int32_t *)(a1 - 0x6d28b711) = (int32_t)v1;
    return result;
}

// Address range: 0x140e83 - 0x140f0d
int64_t function_140e83(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x140e83
    int64_t v1; // 0x140e83
    *(int32_t *)a3 = (int32_t)v1 + (int32_t)a1;
    __asm_in_133(6);
    int64_t v2 = unknown_ffffffffa340108f(); // 0x140e89
    uint32_t v3 = (int32_t)v2 & 0x6e7965d8; // 0x140e90
    if (v3 != 0) {
        // 0x140f09
        int64_t v4; // 0x140e83
        return (int64_t)(*(int32_t *)&v4 * v3);
    }
    int64_t v5 = v2 | a1;
    int64_t v6 = v3; // 0x140e90
    int64_t v7 = unknown_7e2a4e9e((int32_t)v5, v6); // 0x140e98
    __writegsbyte(v5 & 0xffffffff, (char)v7 ^ -60);
    return v7 & -256 | (int64_t)*(char *)v6;
}

// Address range: 0x161eaa - 0x162023
int64_t function_161eaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = __asm_sti(); // 0x161eaa
    bool v2; // 0x161eaa
    if (!v2) {
        // 0x161f00
        return function_cdc60();
    }
    // 0x161eb8
    return v1 & -256 | (int64_t)*(char *)0x44cc68243c894836;
}

// Address range: 0x17c485 - 0x17c48e
int64_t function_17c485(int64_t a1) {
    // 0x17c485
    __asm_wait();
    return unknown_1c51d98d();
}

// Address range: 0x17c4c5 - 0x17c4c7
int64_t function_17c4c5(void) {
    // 0x17c4c5
    int64_t v1; // 0x17c4c5
    return function_17c520(v1, v1, v1, v1, (int64_t)&g1);
}

// Address range: 0x17c4c7 - 0x17c4c8
int64_t function_17c4c7(void) {
    // 0x17c4c7
    int64_t result; // 0x17c4c7
    return result;
}

// Address range: 0x17c4cc - 0x17c4fc
int64_t function_17c4cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x17c4cc
    int64_t v1; // 0x17c4cc
    int64_t v2 = v1;
    int64_t v3 = v1;
    *(int32_t *)v3 = 2 * (int32_t)v3;
    char v4 = *(char *)(a2 - 0x17c2e2ff + a3); // 0x17c4ce
    int64_t v5; // 0x17c4cc
    __asm_out(101, (char)v5);
    *(char *)v5 = (char)(-1 - (int32_t)(v2 & 0xffffff00 | (int64_t)(v4 + (char)v2)) < (int32_t)a1);
    *(char *)v5 = *(char *)&v5 + 34;
    unknown_c1869e8();
    int32_t * v6 = (int32_t *)(a3 + 28); // 0x17c4e7
    *v6 = *v6 + (int32_t)a4;
    return function_17c549(a1, a2, 0x1e8d036, a4, (int64_t)&g1);
}

// Address range: 0x17c520 - 0x17c528
int64_t function_17c520(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x17c520
    int64_t v1; // 0x17c520
    int64_t v2 = v1;
    int64_t v3 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a4;
    return (v3 + 24) % 256 | v3 & -256;
}

// Address range: 0x17c52e - 0x17c549
int64_t function_17c52e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char * v1 = (char *)(a4 + 256 - (unknown_ffffffffa3c85137() & 0xff00) & 0xff00 | a4 & -0xff01); // 0x17c53b
    *v1 = *v1 + (char)a4;
    return unknown_ffffffffb63a8f46();
}

// Address range: 0x17c549 - 0x17c5a6
int64_t function_17c549(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 - 0x61da236c); // 0x17c549
    int64_t v2; // 0x17c549
    *v1 = *v1 + (char)v2;
    unknown_ffffffffdf17bd55();
    int64_t v3; // 0x17c549
    *(char *)v3 = *(char *)&v3 & (char)__asm_iretd();
    __asm_iretd();
    int64_t v4; // 0x17c549
    unsigned char v5 = *(char *)&v4 | 60; // 0x17c560
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x17c560
    int64_t v7 = v5; // 0x17c560
    if (v6 % 2 == 0) {
        // 0x17c5a5
        return v7 | 0x1e83000;
    }
    // 0x17c565
    bool v8; // 0x17c549
    int64_t v9 = v8 ? -4 : 4; // 0x17c55a
    int64_t v10 = v9 + a1; // 0x17c55a
    int64_t v11 = v3;
    __asm_out(-52, *(char *)(v11 + (int64_t)*(char *)(v11 + v7)));
    *(int32_t *)v10 = (int32_t)unknown_4977bb73() | 0x2df6581a;
    return __asm_int3(v10 + v9);
}

// Address range: 0x17c5ab - 0x17c5b6
int64_t function_17c5ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_1d3ea3b4(a1, a2, a3, a4); // 0x17c5ab
    uint32_t v1 = (int32_t)a4 % 32; // 0x17c5b0
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)result; // 0x17c5b0
        uint32_t v3 = *v2; // 0x17c5b0
        *v2 = v3 >> 32 - v1 | v3 << v1;
    }
    return result;
}

// Address range: 0x17c5b7 - 0x17c5c5
int64_t function_17c5b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_79f2c0be(); // 0x17c5b8
    char * v2 = (char *)(v1 + 24); // 0x17c5bd
    *v2 = *v2 + (char)a3;
    return (v1 ^ a4) & 0xffffffaf | 80;
}

// Address range: 0x17c5c7 - 0x17c5ce
int64_t function_17c5c7(void) {
    // 0x17c5c7
    return unknown_a24fdcd();
}

// Address range: 0x17c5ea - 0x17c5ef
int64_t function_17c5ea(void) {
    // 0x17c5ea
    return function_4f19ae45();
}

// Address range: 0x17c60b - 0x17c62a
int64_t function_17c60b(void) {
    // 0x17c60b
    int64_t v1; // 0x17c60b
    unsigned char v2 = *(char *)-0x4c1640e8f597016e; // 0x17c616
    char * v3 = (char *)((v1 & -256 | (int64_t)v2) + 0x3d76c8); // 0x17c61f
    *v3 = *v3 + (char)(v1 / 256);
    return function_2b190349();
}

// Address range: 0x2e341e - 0x2e3451
int64_t function_2e341e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e341e
    int64_t v1; // 0x2e341e
    int64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = a2;
    *(char *)0x62c3532c = *(char *)0x62c3532c + (char)(v1 / 256);
    *(int32_t *)v2 = 2 * (int32_t)v2;
    int64_t v5; // 0x2e341e
    *(char *)a3 = *(char *)&v3 + (char)(v5 / 256);
    int64_t result; // 0x2e341e
    int64_t v6 = result;
    *(char *)v6 = *(char *)&result + (char)v6;
    char * v7 = (char *)(a3 - 0x4cc3bb00); // 0x2e3431
    *v7 = *v7 + (char)v5;
    unsigned char v8 = *(char *)&v4; // 0x2e3437
    unsigned char v9 = v8 + (char)a3; // 0x2e3437
    *(char *)a2 = v9;
    __asm_outsd((int16_t)a3, *(int32_t *)&v4);
    if (v9 < v8 || v9 == 0) {
        result = function_2e33fb();
    }
    int32_t v10 = *(int32_t *)&v5; // 0x2e343d
    *(int32_t *)(v5 & 0xffffffff) = (int32_t)(v9 < v8) + (int32_t)a1 + v10;
    char * v11 = (char *)(v5 + 0x13d0000); // 0x2e3440
    *v11 = *v11 | (char)(v3 / 256);
    float80_t v12; // 0x2e341e
    *(int64_t *)(v4 + 0x8c2fb8) = (int64_t)v12;
    char * v13 = (char *)(result + 8 * v1); // 0x2e344e
    *v13 = *v13 >> 1;
    return result;
}

// Address range: 0x2e3478 - 0x2e347d
int64_t function_2e3478(void) {
    // 0x2e3478
    return function_3d866e7d();
}

// Address range: 0x2e347e - 0x2e3482
int64_t function_2e347e(int64_t a1) {
    // 0x2e347e
    int64_t v1; // 0x2e347e
    bool v2; // 0x2e347e
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x2e3497 - 0x2e3498
int64_t function_2e3497(void) {
    // 0x2e3497
    int64_t result; // 0x2e3497
    return result;
}

// Address range: 0x2e34dc - 0x2e34e5
int64_t function_2e34dc(void) {
    // 0x2e34dc
    int64_t v1; // 0x2e34dc
    __asm_out_134(106, (int32_t)v1);
    return function_2e3497();
}

// Address range: 0x2e3515 - 0x2e3518
int64_t function_2e3515(int64_t a1, int64_t a2) {
    // 0x2e3515
    int64_t result; // 0x2e3515
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x2e353d - 0x2e353e
int64_t function_2e353d(int64_t a1) {
    // 0x2e353d
    int64_t result; // 0x2e353d
    return result;
}

// Address range: 0x2e3589 - 0x2e358a
int64_t function_2e3589(void) {
    // 0x2e3589
    int64_t result; // 0x2e3589
    return result;
}

// Address range: 0x2e359f - 0x2e3616
int64_t function_2e359f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x2e359f
    int64_t result; // 0x2e359f
    int64_t v1 = result;
    int64_t v2 = a4 - 1; // 0x2e359f
    bool v3; // 0x2e359f
    if (v2 != 0 && !v3) {
        int32_t * v4 = (int32_t *)(result - 0x76377f6); // 0x2e360c
        *v4 = *v4 + (int32_t)(v2 & 0xff00 & 256 * result | v2 & 0xffff00ff);
        return result;
    }
    int32_t * v5 = (int32_t *)(v1 + 0x6c00abaa); // 0x2e35a3
    *v5 = *v5 + (int32_t)result;
    int32_t * v6 = (int32_t *)(v1 - 111);
    int64_t v7 = a3; // 0x2e35a3
    unsigned char v8 = (char)v7; // 0x2e35a9
    unsigned char v9 = *(char *)(a2 + 0x230ad076) + v8; // 0x2e35a9
    int64_t v10; // 0x2e359f
    int64_t v11 = v10; // 0x2e35af
    int64_t v12; // 0x2e35b1
    uint32_t v13; // 0x2e35b6
    int32_t * v14; // 0x2e35bc
    if (v9 != 0) {
        // 0x2e35b1
        v12 = unknown_ffffffffcdb4a6b7();
        v13 = *v6;
        *v6 = 256 * v13 | 128 * (int32_t)(v9 < v8) | v13 / 0x2000000;
        v14 = (int32_t *)v2;
        *v14 = *v14 - 1;
        v11 = v12 & -256 | 124;
    }
    // 0x2e35be
    v7 = v7 & -256 | (int64_t)v9;
    int64_t v15 = v11;
    int64_t v16 = v2 - 1; // 0x2e35bf
    while (v16 != 0 == ((v15 & 0x4000) != 0)) {
        int64_t v17 = v16;
        v8 = (char)v7;
        v9 = *(char *)(a2 + 0x230ad076) + v8;
        v11 = v15;
        if (v9 != 0) {
            // 0x2e35b1
            v12 = unknown_ffffffffcdb4a6b7();
            v13 = *v6;
            *v6 = 256 * v13 | 128 * (int32_t)(v9 < v8) | v13 / 0x2000000;
            v14 = (int32_t *)v17;
            *v14 = *v14 - 1;
            v11 = v12 & -256 | 124;
        }
        // 0x2e35be
        v7 = v7 & -256 | (int64_t)v9;
        v15 = v11;
        v16 = v17 - 1;
    }
    int32_t * v18 = (int32_t *)(a2 + 0x68a354ad); // 0x2e35c1
    *v18 = *v18 + (int32_t)v15;
    char * v19 = (char *)v15; // 0x2e35cb
    char v20 = *v19 - (char)v15; // 0x2e35cb
    *v19 = v20;
    if (v20 != 0) {
        // 0x2e35fa
        return unknown_fffffffff823cf00();
    }
    // 0x2e35cf
    unknown_237dfcd5();
    int32_t * v21 = (int32_t *)v16; // 0x2e35d4
    *v21 = *v21 + (int32_t)v1;
    __asm_in((int16_t)(v15 % 256 | v7));
    int32_t * v22 = (int32_t *)(v1 + 0x10720147 + 8 * v1); // 0x2e35df
    *v22 = *v22 + (int32_t)v16;
    if (v16 != 1) {
        function_2e3589();
    }
    // 0x2e35ed
    return unknown_fffffffffbf00df3();
}

// Address range: 0x2e361c - 0x2e361f
int64_t function_2e361c(void) {
    // 0x2e361c
    int64_t result; // 0x2e361c
    return result;
}

// Address range: 0x2e3651 - 0x2e3669
int64_t function_2e3651(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e3651
    __asm_in_133(-4);
    int64_t v1; // 0x2e3651
    *(char *)(v1 - 0x75dcb854) = (char)a4;
    return unknown_ffffffffb41f5f69();
}

// Address range: 0x2e366a - 0x2e375d
int64_t function_2e366a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e366a
    int64_t v1; // 0x2e366a
    unsigned char v2 = *(char *)(v1 + 70) - 120; // 0x2e3670
    int64_t v3 = (int64_t)v2 | 0x30480a00; // 0x2e3670
    int64_t v4 = unknown_6fc1157a(); // 0x2e3674
    int16_t v5 = a3; // 0x2e367f
    __asm_outsd(v5, (int32_t)v4);
    int64_t v6 = ((v2 < 136 ? 79 : 78) | v4 & 0xffffff00) + v1; // 0x2e3684
    int32_t v7 = a1; // 0x2e3686
    *(int32_t *)-0x17369273 = *(int32_t *)-0x17369273 + v7;
    int32_t * v8 = (int32_t *)(a3 - 42); // 0x2e368c
    uint32_t v9 = *v8; // 0x2e368c
    uint32_t v10 = v9 + v7; // 0x2e368c
    *v8 = v10;
    uint64_t v11 = v6 + a3 + (int64_t)(v10 < v9); // 0x2e368f
    int64_t v12 = v11 % 256 | v6 & 0xffffff00; // 0x2e368f
    __asm_out_135(v5, (int32_t)v12);
    bool v13; // 0x2e366a
    int64_t v14 = v13 ? -4 : 4; // 0x2e3692
    int64_t v15 = v14 + a1; // 0x2e3692
    int64_t v16 = v14 + (v1 & 0xffffffff); // 0x2e3692
    int32_t * v17 = (int32_t *)(v12 + 0x2100800); // 0x2e3694
    uint32_t v18 = *v17; // 0x2e3694
    uint32_t v19 = v18 + (int32_t)v3; // 0x2e3694
    *v17 = v19;
    int32_t v20 = *(int32_t *)(v15 + 34); // 0x2e369a
    int64_t v21; // 0x2e366a
    uint64_t v22 = 256 * v21 ^ v6;
    int64_t result = v22 & 0xff00 | v12 & 0xffff00ff; // 0x2e369e
    int32_t * v23 = (int32_t *)(result + 0x73013d0d); // 0x2e36a0
    *v23 = *v23 | (int32_t)v16;
    *(int32_t *)v15 = *(int32_t *)v16;
    char * v24 = (char *)result; // 0x2e36a7
    char v25 = v11; // 0x2e36a7
    *v24 = *v24 + v25;
    *(char *)v21 = *(char *)&v21 + 10;
    *v24 = *v24 + v25;
    *(char *)0xb1ed0b4 = *(char *)0xb1ed0b4 + (char)(v21 / 256);
    v21 &= -256;
    int32_t v26 = *(int32_t *)result + (int32_t)v1; // 0x2e36bc
    *(int64_t *)(v1 - 8) = -85;
    if (v26 < 0) {
        // 0x2e36fa
        *(char *)0x4f00ab05 = *(char *)0x4f00ab05 + (char)(v21 / 256);
        return result;
    }
    int64_t v27 = v16 + v14; // 0x2e36a6
    *(char *)-0x5a2c0b35 = *(char *)-0x5a2c0b35 + (char)(v21 / 256);
    *v24 = *v24 + v25;
    char * v28 = (char *)v27; // 0x2e36cc
    *v28 = *v28 + (char)(v22 / 256);
    if (*(char *)v21 < 0) {
        int32_t * v29 = (int32_t *)v27; // 0x2e3756
        *v29 = (int32_t)a3 - v20 + (int32_t)(v19 < v18) + *v29;
        return result;
    }
    // 0x2e36d5
    *(int64_t *)(v1 - 16) = 0x3a495700;
    int32_t * v30 = (int32_t *)(v3 - 1); // 0x2e36dd
    uint32_t v31 = *v30; // 0x2e36dd
    uint32_t v32 = v31 + (int32_t)result; // 0x2e36dd
    *v30 = v32;
    return result + (int64_t)v26 + (int64_t)(v32 < v31) & 0xffffffff;
}

// Address range: 0x2e3767 - 0x2e379f
int64_t function_2e3767(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e3767
    unknown_ffffffffdf1d0471();
    int32_t * v1 = (int32_t *)(a4 - 0x57ba9ac1); // 0x2e3770
    uint32_t v2 = *v1; // 0x2e3770
    int64_t v3; // 0x2e3767
    int32_t v4 = ((char)(v3 | a2) ^ -32) < 224; // 0x2e3770
    uint32_t v5 = v4 + (int32_t)a3; // 0x2e3770
    int32_t v6 = v2 - v5; // 0x2e3770
    bool v7 = ((char)(v3 | a2) ^ -32) < 224 ? v5 != -1 | v2 < v6 - v4 : v2 < v5; // 0x2e3770
    *v1 = v6;
    unknown_28817b7c();
    int64_t v8 = unknown_ffffffffa8741389(0xddc40508); // 0x2e3783
    int32_t * v9 = (int32_t *)(v3 - 86); // 0x2e3788
    *v9 = *v9 + 0x774e01e8 + (int32_t)v7;
    int64_t v10; // 0x2e3767
    *(char *)a3 = *(char *)&v10 + (char)v8;
    return function_2275b91c();
}

// Address range: 0x2e37e6 - 0x2e37e9
int64_t function_2e37e6(void) {
    // 0x2e37e6
    int64_t result; // 0x2e37e6
    return result;
}

// Address range: 0x2e3831 - 0x2e3836
int64_t function_2e3831(void) {
    // 0x2e3831
    return function_ffffffff9cca3902();
}

// Address range: 0x2e3847 - 0x2e384a
int64_t function_2e3847(int64_t a1, int64_t a2) {
    // 0x2e3847
    int64_t result; // 0x2e3847
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x2e387a - 0x2e387b
int64_t function_2e387a(void) {
    // 0x2e387a
    int64_t result; // 0x2e387a
    return result;
}

// Address range: 0x2e387e - 0x2e3884
int64_t function_2e387e(int64_t a1, int64_t a2) {
    // 0x2e387e
    int64_t v1; // 0x2e387e
    *(int32_t *)a1 = (int32_t)v1;
    return v1 & -256 | (int64_t)__asm_in_133(-96);
}

// Address range: 0x2e38db - 0x2e38f5
int64_t function_2e38db(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e38db
    int64_t v1; // 0x2e38db
    __asm_out(-40, (char)v1);
    unknown_182481e6();
    __asm_in_136(0x5add);
    return function_2163add();
}

// Address range: 0x2e3902 - 0x2e3903
int64_t function_2e3902(void) {
    // 0x2e3902
    int64_t result; // 0x2e3902
    return result;
}

// Address range: 0x2e390d - 0x2e3926
int64_t function_2e390d(void) {
    // 0x2e390d
    int64_t v1; // 0x2e390d
    char * v2 = (char *)(v1 - 74); // 0x2e3919
    *v2 = *v2 - (char)v1;
    return function_ffffffff908b4b87();
}

// Address range: 0x2e39ac - 0x2e39af
int64_t function_2e39ac(void) {
    // 0x2e39ac
    int64_t result; // 0x2e39ac
    return result;
}

// Address range: 0x2e39be - 0x2e39f1
int64_t function_2e39be(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2e39be
    int64_t v1; // 0x2e39be
    *(int32_t *)0x8561b1f = *(int32_t *)0x8561b1f + (int32_t)v1;
    int64_t v2 = v1 + 0x4414ba7f + v1; // 0x2e39cb
    int32_t * v3 = (int32_t *)((v2 & 0xffffffff) + 0x5611881f); // 0x2e39d2
    uint32_t v4 = *v3; // 0x2e39d2
    uint32_t v5 = v4 + (int32_t)v1; // 0x2e39d2
    *v3 = v5;
    int32_t * v6 = (int32_t *)(v1 + 0x6201e803); // 0x2e39d9
    uint32_t v7 = *v6; // 0x2e39d9
    uint32_t v8 = v7 + (int32_t)v1; // 0x2e39d9
    uint32_t v9 = v8 + (int32_t)(v5 < v4); // 0x2e39d9
    *v6 = v9;
    char * v10 = (char *)(int64_t)(0x10000 * (int32_t)v2 >> 16); // 0x2e39e0
    char v11 = a4 / 256; // 0x2e39e0
    *v10 = *v10 + v11 + (char)(v5 < v4 ? v9 <= v7 : v8 < v7);
    char * v12 = (char *)(v1 + 0x1e8288a); // 0x2e39e5
    *v12 = *v12 - v11;
    return __asm_in_137(-68);
}
