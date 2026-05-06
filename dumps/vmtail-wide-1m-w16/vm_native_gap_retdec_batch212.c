/*
 * Targeted RetDec C for native executable gap queue batch 212.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x17d685-0x17d885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x17d885-0x17da85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x17dc85-0x17de85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e4a1e-0x2e4c1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e4c1e-0x2e4e1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e4e1e-0x2e501e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e501e-0x2e521e rank=- name=- kind=- bytes=- uncovered=-
 *   0x141313-0x141513 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g6;
extern int g7;
extern int g8;
extern int g9;
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

int64_t function_141313(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_14135f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14137b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_141391(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1413e7(int64_t a1);
int64_t function_1413fa(void);
int64_t function_141433(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_141445(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_141479(void);
int64_t function_1414b0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1414ca(int64_t a1, int64_t a2, int64_t a3);
int64_t function_141501(int64_t a1);
int64_t function_17d685(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_17d699(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17d6e1(int64_t a1);
int64_t function_17d6f5(void);
int64_t function_17d73a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_17d772(void);
int64_t function_17d788(void);
int64_t function_17d790(void);
int64_t function_17d7a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17d7d1(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_17d88f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17d8d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17d911(int64_t a1, int64_t a2);
int64_t function_17d93f(int64_t a1);
int64_t function_17d947(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17d96c(int64_t a1);
int64_t function_17d9bc(int64_t a1, int64_t a2);
int64_t function_17d9fc(void);
int64_t function_17da03(void);
int64_t function_17da0d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_17da1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17da68(void);
int64_t function_17dc85(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_17dc90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_17dd29(void);
int64_t function_17dd35(int64_t a1);
int64_t function_17dd4e(int64_t a1, int64_t a2);
int64_t function_17dd5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17dd85(void);
int64_t function_17dd9d(int64_t a1);
int64_t function_17ddfe(void);
int64_t function_17de00(int64_t a1);
int64_t function_17de01(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e4a1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e4b8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2e4ccf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e4e1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e4f7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2e5112(int64_t a1);
int64_t function_2e511e(int64_t a1);
int64_t function_2e5187(void);
int64_t function_2e51b8(int64_t a1);
int64_t function_c4258();
int64_t function_f20bff();
int64_t unknown_147177fd();
int64_t unknown_150c2475();
int64_t unknown_3f88b12e();
int64_t unknown_4830641e();
int64_t unknown_5dcc626();
int64_t unknown_757d6924();
int64_t unknown_77f513bb();
int64_t unknown_875a1bb();
int64_t unknown_ffffffff8515fc41();
int64_t unknown_ffffffffabc9514a();
int64_t unknown_ffffffffb053c0ad();
int64_t unknown_ffffffffba2337ef();
int64_t unknown_ffffffffcc98d359();
int64_t unknown_ffffffffdbc93ca0();
int64_t unknown_ffffffffdd723407();
int64_t unknown_ffffffffe7a23c75();
int64_t unknown_ffffffffe8a0323f();

// Address range: 0x141313 - 0x14135f
int64_t function_141313(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x141313
    unknown_4830641e();
    int32_t * v1 = (int32_t *)(a3 + 1); // 0x141332
    int64_t v2; // 0x141313
    *v1 = *v1 + (int32_t)v2;
    int64_t v3 = unknown_ffffffffabc9514a(); // 0x141344
    int32_t v4 = (int32_t)(a4 % 2 != 0) + (int32_t)a3 - *(int32_t *)0x5302129d; // 0x141349
    int32_t v5 = v3; // 0x14134f
    *(int32_t *)a1 = v5;
    int64_t v6 = ((a4 & (int64_t)&g2) == 0 ? 4 : -4) + a1; // 0x14134f
    unknown_ffffffffcc98d359(v6);
    int32_t v7 = *(int32_t *)0x28e21a1f; // 0x141358
    *(int32_t *)0x28e21a1f = (v4 + 256 * v5 & 0xff00 | v4 & -0xff01) + v7;
    return v6 & 0xffffffff;
}

// Address range: 0x14135f - 0x14137b
int64_t function_14135f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a1; // 0x14135f
    bool v2; // 0x14135f
    char v3 = v2; // 0x14135f
    int64_t result; // 0x14135f
    unsigned char v4 = *(char *)(result - 0x5062dbff + 8 * result) + v3; // 0x14135f
    unsigned char v5 = v1 - v4; // 0x14135f
    char * v6 = (char *)(a4 + 0x74c4e0dc); // 0x141367
    char v7 = *v6; // 0x141367
    char v8 = v2 ? v4 != -1 | v5 - v3 > v1 : v4 > v1; // 0x141367
    char v9 = v8 + (char)(result / 256); // 0x141367
    char v10 = v7 - v9; // 0x141367
    *v6 = v10;
    if (((v10 - v8 ^ v7) & (v9 ^ v7)) < 0) {
        // 0x141378
        return result;
    }
    // 0x14136f
    return unknown_150c2475(a1 & -256 | (int64_t)v5);
}

// Address range: 0x14137b - 0x14138e
int64_t function_14137b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x14137b
    int64_t v1; // 0x14137b
    int32_t * v2 = (int32_t *)(a1 - 0xc7583f0 + 8 * v1); // 0x141381
    *v2 = *v2 + (int32_t)a4;
    return __asm_iretd(a1);
}

// Address range: 0x141391 - 0x141394
int64_t function_141391(int64_t a1, int64_t a2, int64_t a3) {
    // 0x141391
    int64_t result; // 0x141391
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x1413e7 - 0x1413f2
int64_t function_1413e7(int64_t a1) {
    // 0x1413e7
    return unknown_ffffffffba2337ef(a1);
}

// Address range: 0x1413fa - 0x1413fb
int64_t function_1413fa(void) {
    // 0x1413fa
    int64_t result; // 0x1413fa
    return result;
}

// Address range: 0x141433 - 0x141445
int64_t function_141433(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x141433
    unknown_ffffffff8515fc41(0x5617382b);
    return function_f20bff();
}

// Address range: 0x141445 - 0x14145c
int64_t function_141445(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x141445
    int64_t result; // 0x141445
    if (a4 == 0) {
        // 0x1414c3
        return result;
    }
    unsigned char v1 = *(char *)0xb26b4e; // 0x141447
    char v2 = (uint64_t)result / 256; // 0x141447
    char v3 = v1 + v2; // 0x141447
    *(char *)0xb26b4e = v3;
    int64_t result2 = a1 & 0xffffffff; // 0x14144f
    if (v3 < 0 == ((v3 ^ v1) & (v3 ^ v2)) < 0) {
        result2 = function_1413fa();
    }
    // 0x141452
    *(char *)a4 = (char)a4 - (v3 < v1 ? 59 : 58);
    return result2;
}

// Address range: 0x141479 - 0x14147c
int64_t function_141479(void) {
    // 0x141479
    int64_t result; // 0x141479
    return result;
}

// Address range: 0x1414b0 - 0x1414c3
int64_t function_1414b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1414b0
    int64_t v1; // 0x1414b0
    unsigned char v2 = *(char *)(v1 % 256 + v1); // 0x1414b0
    int64_t v3 = v1 & -0x10000 | (int64_t)&g1 | (int64_t)v2; // 0x1414b1
    int32_t v4 = v3; // 0x1414b7
    __asm_out((int16_t)a3, v4);
    unsigned char v5 = *(char *)(v1 - 19 + v3); // 0x1414b8
    int32_t v6 = *(int32_t *)v3; // 0x1414bc
    return v6 + v4 + (int32_t)(v5 > (char)v3);
}

// Address range: 0x1414ca - 0x1414fe
int64_t function_1414ca(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1414ca
    int64_t v1; // 0x1414ca
    uint64_t v2 = v1;
    int64_t v3 = v1;
    int64_t v4 = v1 & -256 | (int64_t)*(char *)-0x53ed7dfe17f9749d; // 0x1414ca
    int32_t * v5 = (int32_t *)v4; // 0x1414da
    *v5 = *v5 + (int32_t)v4;
    int64_t v6; // 0x1414ca
    int32_t v7 = *(int32_t *)&v6; // 0x1414dc
    __asm_outsd((int16_t)a3 % 256 | (int16_t)&g7, v7);
    unsigned char v8 = *(char *)((8 * v3 & 248 | v3 & -256) + v2 % 256); // 0x1414e8
    int64_t v9 = v2 & 0xffffff00; // 0x1414e8
    char v10 = (int32_t)(v9 | (int64_t)v8) < 0x2300c8b ? -85 : -86; // 0x1414ee
    *(char *)-0x2ee26508 = *(char *)-0x2ee26508 + (char)(v1 / 256);
    return v9 | (int64_t)(v8 - v10);
}

// Address range: 0x141501 - 0x141502
int64_t function_141501(int64_t a1) {
    // 0x141501
    int64_t result; // 0x141501
    return result;
}

// Address range: 0x17d685 - 0x17d695
int64_t function_17d685(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x17d685
    int64_t v1; // 0x17d685
    uint32_t v2 = 2 * (int32_t)v1; // 0x17d685
    *(int32_t *)a1 = v2;
    int64_t result = (a4 / 256 + (int64_t)v2) % 256 | (int64_t)(v2 & -256); // 0x17d688
    bool v3; // 0x17d685
    char * v4 = (char *)(((v3 ? 0xfffffffc : 4) + a1 + result & 0xffffffff) - 0x6125c5b4); // 0x17d68c
    *v4 = *v4 + (char)a4;
    return result;
}

// Address range: 0x17d699 - 0x17d6af
int64_t function_17d699(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x17d699
    int64_t v1; // 0x17d699
    __asm_movq(*(int64_t *)(4 * v1 - 103 + unknown_ffffffffdbc93ca0()));
    unknown_ffffffffb053c0ad();
    bool v2; // 0x17d699
    return (int64_t)*(int32_t *)((v2 ? -4 : 4) + a2);
}

// Address range: 0x17d6e1 - 0x17d6ea
int64_t function_17d6e1(int64_t a1) {
    int32_t result = __asm_in((char)a1); // 0x17d6e4
    int64_t v1; // 0x17d6e1
    int32_t * v2 = (int32_t *)(v1 - 85); // 0x17d6e6
    *v2 = *v2 + (int32_t)v1;
    return result;
}

// Address range: 0x17d6f5 - 0x17d6f8
int64_t function_17d6f5(void) {
    // 0x17d6f5
    int64_t result; // 0x17d6f5
    return result;
}

// Address range: 0x17d73a - 0x17d74a
int64_t function_17d73a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x17d73a
    int64_t v1; // 0x17d73a
    bool v2; // 0x17d73a
    int32_t * v3 = (int32_t *)(v1 - (v2 ? 0xe8f38247 : 0xe8f38246) & 0xffffffff); // 0x17d740
    *v3 = *v3 + (int32_t)a1;
    return unknown_3f88b12e(a3 & 0xffffffff);
}

// Address range: 0x17d772 - 0x17d776
int64_t function_17d772(void) {
    // 0x17d772
    int64_t result; // 0x17d772
    return result;
}

// Address range: 0x17d788 - 0x17d789
int64_t function_17d788(void) {
    // 0x17d788
    int64_t result; // 0x17d788
    return result;
}

// Address range: 0x17d790 - 0x17d791
int64_t function_17d790(void) {
    // 0x17d790
    int64_t result; // 0x17d790
    return result;
}

// Address range: 0x17d7a6 - 0x17d7cf
int64_t function_17d7a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x17d7a6
    int64_t v1; // 0x17d7a6
    uint32_t v2 = (char)v1 > 180 ? -0xd693969 : -0xd69396a; // 0x17d7af
    int16_t v3 = a3; // 0x17d7b4
    __asm_outsb(v3, (char)v1);
    int64_t v4 = unknown_77f513bb(); // 0x17d7b5
    char v5 = *(char *)(v4 & 0xffffffff); // 0x17d7ba
    *(char *)a1 = __asm_insb(v3);
    return v4 & -256 | (int64_t)((char)v4 - v5 + (char)((char)v1 > 180 | v2 > (int32_t)(a4 & 0xff00 & 256 * v1 | a4 & 0xffff00ff)));
}

// Address range: 0x17d7d1 - 0x17d881
int64_t function_17d7d1(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x17d7d1
    bool v3; // 0x17d7d1
    if (v3 || false) {
        char * v4 = (char *)(v2 + 18); // 0x17d812
        unsigned char v5 = (char)(v2 / 256); // 0x17d812
        *v4 = *v4 + v5;
        int64_t result = __asm_int1(); // 0x17d817
        int32_t v6 = *(int32_t *)(a3 - 0x6aa43fb1); // 0x17d818
        uint32_t v7 = v6 + (int32_t)v2 + (int32_t)(*(char *)&v1 < v5); // 0x17d818
        int64_t v8 = v7; // 0x17d818
        *(char *)-0x1ce810db = *(char *)-0x1ce810db + (char)(v7 / 256);
        __asm_out_133(121, (char)result);
        char * v9 = (char *)(v8 - 0x6fbd7d79); // 0x17d826
        *v9 = *v9 + (char)a3;
        uint32_t v10 = (int32_t)v2; // 0x17d82c
        uint32_t v11 = *(int32_t *)(result + 87); // 0x17d82c
        int32_t v12 = v11 + v10; // 0x17d82c
        if (v12 >= 0) {
            // 0x17d832
            *(int16_t *)v8 = (int16_t)a1;
            return result;
        }
        unsigned char v13 = llvm_ctpop_i8((char)v12); // 0x17d82c
        unsigned char v14 = *(char *)&v1; // 0x17d843
        return result & -0x10000 | 256 * (16 * (int64_t)(v11 % 16 + v10 % 16 > 15) | (int64_t)(v12 < v10) | 4 * (int64_t)(v13 % 2 == 0)) | (int64_t)v14 | 0x8200;
    }
    int64_t v15 = __asm_iretd(0x13d1f3a); // 0x17d7e0
    char * v16 = (char *)(a3 - 0x70cdd5b1); // 0x17d7e2
    char v17 = *v16; // 0x17d7e2
    *v16 = 2 * v17;
    int64_t v18 = v15; // 0x17d7e8
    if (v17 >= 0) {
        v18 = function_17d790();
    }
    char v19 = *(char *)-0x1a8a4f0f + (char)((256 * v2 + v2) / 256); // 0x17d7ea
    unsigned char v20 = llvm_ctpop_i8(v19); // 0x17d7ea
    *(char *)-0x1a8a4f0f = v19;
    int64_t result2 = v18 & -0xff01 | (int64_t)&g8; // 0x17d7f0
    if (v20 % 2 == 0) {
        // 0x17d864
        return result2;
    }
    uint64_t v21 = result2 + a3 / 256; // 0x17d7f4
    int64_t v22 = result2 & -256; // 0x17d7f4
    char * v23 = (char *)((v21 % 256 | v22) + 7); // 0x17d7f6
    unsigned char v24 = *v23; // 0x17d7f6
    unsigned char v25 = v24 + (char)a4; // 0x17d7f6
    *v23 = v25;
    int64_t v26 = v22 | v2 | (v21 - (v25 < v24 ? 241 : 240)) % 256;
    int64_t result3 = v26 & 0xffffffff; // 0x17d7fd
    int32_t * v27 = (int32_t *)((a3 & -0xff01 | (int64_t)&g6) - 127); // 0x17d7ff
    *v27 = *v27 + (int32_t)a4;
    if ((int32_t)v26 >= 0xd4fb3a01) {
        // 0x17d876
        *(char *)0x212cb92 = *(char *)0x212cb92 + (char)(a4 / 256);
        return result3;
    }
    // 0x17d80e
    *(char *)0x2019ce = *(char *)0x2019ce + (char)v26;
    return result3;
}

// Address range: 0x17d88f - 0x17d8bb
int64_t function_17d88f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = a1; // 0x17d88f
    int64_t v2; // 0x17d88f
    *(int32_t *)(v2 - 92) = v1;
    bool v3; // 0x17d88f
    uint64_t v4 = v2 - (int64_t)v3; // 0x17d892
    int64_t v5 = v2 & -256; // 0x17d892
    int64_t v6 = (int32_t)(v4 % 256 | v5) < 0x24834a01 ? 20 : 19; // 0x17d899
    char * v7 = (char *)(((v4 - v6) % 256 | v5) - 0x5474c3f8); // 0x17d89b
    *v7 = *v7 + (char)a4;
    __asm_int1();
    return unknown_875a1bb((int32_t)v2 + v1);
}

// Address range: 0x17d8d0 - 0x17d8d9
int64_t function_17d8d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 + 0x5a01e8f1); // 0x17d8d0
    *v1 = *v1 + (char)a3;
    int64_t result; // 0x17d8d0
    return result;
}

// Address range: 0x17d911 - 0x17d925
int64_t function_17d911(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0x7f375dd7); // 0x17d916
    *v1 = *v1 + (int32_t)a1;
    return __asm_iretd(a1);
}

// Address range: 0x17d93f - 0x17d947
int64_t function_17d93f(int64_t a1) {
    // 0x17d93f
    int64_t v1; // 0x17d93f
    return v1 & -256 | (int64_t)__asm_in_134(-24);
}

// Address range: 0x17d947 - 0x17d969
int64_t function_17d947(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x17d947
    int64_t v1; // 0x17d947
    uint64_t result = v1;
    unsigned char v2 = *(char *)(v1 - 0x79fe1752); // 0x17d947
    char * v3 = (char *)((a3 - 256 * (result + (int64_t)(v2 > (char)(result / 256))) & 0xff00 | a3 & -0xff01) + 0x1e8d562); // 0x17d953
    *v3 = *v3 | (char)(v1 / 256);
    return result;
}

// Address range: 0x17d96c - 0x17d96f
int64_t function_17d96c(int64_t a1) {
    // 0x17d96c
    int64_t result; // 0x17d96c
    return result;
}

// Address range: 0x17d9bc - 0x17d9c5
int64_t function_17d9bc(int64_t a1, int64_t a2) {
    // 0x17d9bc
    unknown_ffffffffdd723407(a1, a2);
    int64_t v1; // 0x17d9bc
    return v1 & 0xffffffff;
}

// Address range: 0x17d9fc - 0x17d9fd
int64_t function_17d9fc(void) {
    // 0x17d9fc
    int64_t result; // 0x17d9fc
    return result;
}

// Address range: 0x17da03 - 0x17da04
int64_t function_17da03(void) {
    // 0x17da03
    int64_t result; // 0x17da03
    return result;
}

// Address range: 0x17da0d - 0x17da14
int64_t function_17da0d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x17da0d
    int64_t v1; // 0x17da0d
    __asm_rcl(*(char *)(v1 + 20));
    return function_17d9fc();
}

// Address range: 0x17da1f - 0x17da2c
int64_t function_17da1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17da1f
    int64_t v1; // 0x17da1f
    *(char *)a1 = (char)v1;
    bool v2; // 0x17da1f
    unknown_5dcc626((v2 ? -1 : 1) + a1);
    return function_17da03();
}

// Address range: 0x17da68 - 0x17da69
int64_t function_17da68(void) {
    // 0x17da68
    int64_t result; // 0x17da68
    return result;
}

// Address range: 0x17dc85 - 0x17dc8f
int64_t function_17dc85(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x17dc85
    int64_t v1; // 0x17dc85
    *(char *)a3 = (char)(v1 & a3 / 256);
    return a4 & 0xffffffff;
}

// Address range: 0x17dc90 - 0x17dd27
int64_t function_17dc90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x17dce7
    int3_t v1; // 0x17dc90
    int3_t v2 = v1;
    int32_t v3 = a3;
    __frontend_reg_store_fpr(v2, __frontend_reg_load_fpr(v2) * (float80_t)(float32_t)v3);
    int32_t * v4 = (int32_t *)(a4 + 12); // 0x17dc92
    *v4 = *v4 & (int32_t)a4;
    __asm_iretd(a1);
    char * v5 = (char *)(a1 + 8); // 0x17dcf1
    unsigned char v6 = *v5; // 0x17dcf1
    int64_t v7; // 0x17dc90
    unsigned char v8 = v6 + (char)(v7 / 256); // 0x17dcf1
    *v5 = v8;
    bool v9; // 0x17dc90
    int64_t v10 = v9 ? -4 : 4; // 0x17dcfc
    int64_t v11 = v10 + a1; // 0x17dcfc
    uint32_t v12 = (0x10000 * (int32_t)unknown_147177fd() >> 16) - 0x6e80dace; // 0x17dcfe
    char * v13 = (char *)((int64_t)v12 + 1); // 0x17dd07
    *v13 = -*v13;
    int32_t * v14 = (int32_t *)(int64_t)(v12 + (int32_t)v7); // 0x17dd1c
    *v14 = *(int32_t *)(v7 + 63) + 2 * v3 + (int32_t)(v8 < v6) + *v14;
    int64_t result = unknown_757d6924(v11, v10 + a2); // 0x17dd1e
    int32_t * v15 = (int32_t *)(v11 - 128); // 0x17dd23
    uint32_t v16 = *v15; // 0x17dd23
    uint32_t v17 = (int32_t)v11; // 0x17dd23
    int32_t v18 = v16 + v17; // 0x17dd23
    unsigned char v19 = llvm_ctpop_i8((char)v18); // 0x17dd23
    *v15 = v18;
    *(int64_t *)0xee01e87a = 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | (int64_t)(v18 < v16) | 64 * (int64_t)(v18 == 0) | 128 * (int64_t)(v18 < 0) | 16 * (int64_t)(v16 % 16 + v17 % 16 > 15) | 2048 * (int64_t)(((v18 ^ v16) & (v18 ^ v17)) < 0) | 4 * (int64_t)(v19 % 2 == 0) | 2;
    return result;
}

// Address range: 0x17dd29 - 0x17dd2a
int64_t function_17dd29(void) {
    // 0x17dd29
    int64_t result; // 0x17dd29
    return result;
}

// Address range: 0x17dd35 - 0x17dd38
int64_t function_17dd35(int64_t a1) {
    // 0x17dd35
    int64_t result; // 0x17dd35
    return result;
}

// Address range: 0x17dd4e - 0x17dd5b
int64_t function_17dd4e(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0x45c8ffd2); // 0x17dd4e
    int64_t v2; // 0x17dd4e
    *v1 = *v1 + (int32_t)v2;
    return v2 + 0x1fe2fc6a & 0xffffffff;
}

// Address range: 0x17dd5b - 0x17dd7e
int64_t function_17dd5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17dd5b
    int64_t v1; // 0x17dd5b
    int32_t * v2 = (int32_t *)(v1 - 3); // 0x17dd5b
    *v2 = *v2 - (int32_t)a3;
    int64_t v3; // 0x17dd5b
    char v4 = *(char *)&v3; // 0x17dd61
    *(char *)(a2 & 0xffffffff) = (char)(((char)v1 ^ -4) < 132) - (char)a2 + v4;
    int32_t * v5 = (int32_t *)(a1 + 0x4f1e52f); // 0x17dd69
    *v5 = -*v5;
    unknown_ffffffffe7a23c75();
    return function_17dd29();
}

// Address range: 0x17dd85 - 0x17dd86
int64_t function_17dd85(void) {
    // 0x17dd85
    int64_t result; // 0x17dd85
    return result;
}

// Address range: 0x17dd9d - 0x17dda0
int64_t function_17dd9d(int64_t a1) {
    // 0x17dd9d
    int64_t result; // 0x17dd9d
    return result;
}

// Address range: 0x17ddfe - 0x17de00
int64_t function_17ddfe(void) {
    // 0x17ddfe
    int64_t v1; // 0x17ddfe
    return function_17de01(v1, v1, v1, v1);
}

// Address range: 0x17de00 - 0x17de01
int64_t function_17de00(int64_t a1) {
    // 0x17de00
    int64_t result; // 0x17de00
    return result;
}

// Address range: 0x17de01 - 0x17de44
int64_t function_17de01(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 39); // 0x17de01
    int64_t v2; // 0x17de01
    *v1 = *v1 + (int32_t)v2;
    int64_t v3; // 0x17de01
    uint64_t result = v3 & 0xffffffff; // 0x17de04
    char * v4 = (char *)(v2 + 94); // 0x17de05
    unsigned char v5 = *v4; // 0x17de05
    char v6 = v5 - 74; // 0x17de05
    *v4 = v6;
    if (v5 < 74 || v6 == 0) {
        // 0x17de89
        return result;
    }
    unsigned char v7 = *(char *)(v2 - 0xb730f7); // 0x17de11
    uint32_t v8 = (int32_t)v3; // 0x17de17
    uint32_t v9 = *(int32_t *)&v3 + v8; // 0x17de17
    uint32_t v10 = v9 + (int32_t)(result < 0x2020001); // 0x17de17
    bool v11 = result < 0x2020001 ? v10 <= v8 : v9 < v8; // 0x17de17
    unsigned char v12 = (char)(v2 / 256); // 0x17de19
    char v13 = v11; // 0x17de19
    unsigned char v14 = v13 + v12; // 0x17de19
    unsigned char v15 = (char)v11; // 0x17de19
    bool v16 = v11 ? v15 - v13 > v12 | v14 != -1 : v14 > v12; // 0x17de19
    int64_t v17 = (int64_t)v15 - (int64_t)(v10 / 256) + (int64_t)v16; // 0x17de1b
    *(char *)-0x5f2c22d9 = *(char *)-0x5f2c22d9 + (char)v17;
    int32_t * v18 = (int32_t *)((v2 & -0x10000 | (int64_t)v7 | 256 * v17 & 0xff00) - 0x5c9aba9); // 0x17de2f
    *v18 = *v18 + (int32_t)a4;
    __asm_int(-7);
    int64_t result2 = unknown_ffffffffe8a0323f(); // 0x17de39
    int32_t v19 = *(int32_t *)-0x3af86fbb; // 0x17de3e
    bool v20; // 0x17de01
    *(int32_t *)-0x3af86fbb = v19 + (int32_t)((v20 ? 0xfffffffc : 4) + a1);
    return result2;
}

// Address range: 0x2e4a1e - 0x2e4b8c
int64_t function_2e4a1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e4a1e
    __asm_in(73);
    int64_t v1; // bp-16, 0x2e4a1e
    int64_t v2 = (int64_t)&v1; // 0x2e4b5f
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x2e4b67
    *v3 = a4;
    *(int64_t *)(v2 - 16) = v2 + 8;
    *(int64_t *)(v2 - 24) = *v3;
    int64_t v4; // 0x2e4a1e
    return function_c4258(a1, a2, a3, v4, v4, v4, 0x1a2ab001, v4);
}

// Address range: 0x2e4b8c - 0x2e4ccf
int64_t function_2e4b8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x72200d32; // bp-32, 0x2e4c1c
    int64_t v2 = (int64_t)&v1; // 0x2e4c47
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x2e4c4f
    int64_t v4 = *v3; // 0x2e4c4f
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x2e4c4f
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x2e4c53
    *(int64_t *)(v2 - 24) = v4;
    *v5 = 0x5f78ab88;
    *v6 = a6;
    int64_t * v7 = (int64_t *)(v2 + 8); // 0x2e4c78
    *v7 = *v5;
    *v6 = v4;
    *v5 = v4;
    *(int64_t *)(v2 + 32) = v1;
    int64_t v8 = *v7; // 0x2e4c9f
    v1 = v8;
    *v5 = v8;
    *v7 = *v3;
    int64_t v9; // 0x2e4b8c
    return function_c4258(a1, v4, a3, 0x2e0699, a5, v9, v1, 0x4da2bb90);
}

// Address range: 0x2e4ccf - 0x2e4e1f
int64_t function_2e4ccf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e4ccf
    int64_t v1; // 0x2e4ccf
    return function_c4258(a1, a3, a3, a4, v1, v1, 0x2e0959, (int64_t)&g9);
}

// Address range: 0x2e4e1f - 0x2e4f7e
int64_t function_2e4e1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e4e1f
    int64_t v1; // bp-64, 0x2e4e1f
    int64_t v2 = (int64_t)&v1; // 0x2e4ec8
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x2e4edd
    *v3 = a2;
    v1 = a3;
    bool v4; // 0x2e4e1f
    *(int64_t *)(v2 + 32) = 0x4000 * (int64_t)v4 | 2048 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4 | 2;
    v1 = a5;
    *(int64_t *)(v2 - 8) = 0x477db23;
    *v3 = 0x39a83c57;
    *(int64_t *)(v2 + 40) = 0x39a83c57;
    *v3 = a4;
    int64_t v5 = *v3; // 0x2e4f74
    *v3 = v2 + 24;
    int64_t v6; // 0x2e4e1f
    return function_c4258(a1, *v3, a3, v5, v1, v6, 0x574d31dd, (int64_t)&g9);
}

// Address range: 0x2e4f7e - 0x2e50ed
int64_t function_2e4f7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2e4f7e
    int64_t v1; // 0x2e4f7e
    return function_c4258(a1, a2, a3, a4, v1, v1, 0x55045e73, (int64_t)&g9);
}

// Address range: 0x2e5112 - 0x2e5113
int64_t function_2e5112(int64_t a1) {
    // 0x2e5112
    int64_t result; // 0x2e5112
    return result;
}

// Address range: 0x2e511e - 0x2e511f
int64_t function_2e511e(int64_t a1) {
    // 0x2e511e
    int64_t result; // 0x2e511e
    return result;
}

// Address range: 0x2e5187 - 0x2e518a
int64_t function_2e5187(void) {
    // 0x2e5187
    int64_t result; // 0x2e5187
    return result;
}

// Address range: 0x2e51b8 - 0x2e51bb
int64_t function_2e51b8(int64_t a1) {
    // 0x2e51b8
    int64_t result; // 0x2e51b8
    return result;
}
