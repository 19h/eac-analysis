/*
 * Targeted RetDec C for native executable gap queue batch 539.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x128cdc-0x128edc rank=- name=- kind=- bytes=- uncovered=-
 *   0x1290dc-0x1292dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x1292dc-0x1294dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x1294dc-0x1296dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x2368b6-0x236ab6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x236ab6-0x236cb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x236cb6-0x236eb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3437d8-0x3439d8 rank=- name=- kind=- bytes=- uncovered=-
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
void __writegsdword(int64_t offset, uint32_t value);
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
int128_t __asm_vdivpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pcmpgtb(int128_t left, int128_t right);
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

int64_t function_128cdc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_128d78(int64_t a1, int64_t a2);
int64_t function_128d99(int64_t a1, int64_t a2, int64_t a3);
int64_t function_128db5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_128dc2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_128dfe(void);
int64_t function_128e05(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_129083();
int64_t function_1290dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_129123(int64_t a1, int64_t a2);
int64_t function_12913a(void);
int64_t function_129182(void);
int64_t function_1291f3(void);
int64_t function_12920e(int64_t a1);
int64_t function_129247(void);
int64_t function_12925d(int64_t a1, uint64_t a2, int64_t a3);
int64_t function_1292d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1292fe(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_12932d(void);
int64_t function_129376(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1293a2(int64_t a1);
int64_t function_1293cd(void);
int64_t function_129491(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12955e(void);
int64_t function_1295bd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_129641(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1296c5(int64_t a1);
int64_t function_1c6396aa();
int64_t function_2368b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2368f9(void);
int64_t function_236910(void);
int64_t function_236953(void);
int64_t function_236a55(void);
int64_t function_236a7b(int64_t a1);
int64_t function_236b2a(int64_t a1, int64_t a2);
int64_t function_236b3c(int64_t a1);
int64_t function_236b94(int64_t a1, int64_t a2, int64_t a3);
int64_t function_236ba7(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_236bdd(void);
int64_t function_236c26(void);
int64_t function_236c49(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_236c6e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_236d08(void);
int64_t function_236d14(int64_t a1, int64_t a2, int64_t a3);
int64_t function_236d34(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_236d56(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_236e2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_236e84(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_236e9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3437d8(void);
int64_t function_3437e0(void);
int64_t function_3437ff(void);
int64_t function_34382a(void);
int64_t function_34384e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34395f(void);
int64_t function_34396f(void);
int64_t function_343989(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34399c(void);
int64_t function_5cc6e72a();
int64_t function_cf76d40();
int64_t function_ffffffff85d08eb7();
int64_t function_ffffffff90d532fc();
int64_t function_ffffffffa1cd923a();
int64_t function_ffffffffbac04b28();
int64_t function_ffffffffd6264e42();
int64_t function_ffffffffe8375924();
int64_t unknown_1c89aeca();
int64_t unknown_2459df5c();
int64_t unknown_263d9c19();
int64_t unknown_3a24e0a7();
int64_t unknown_4cae8bcb();
int64_t unknown_59104d80();
int64_t unknown_65f29ddd();
int64_t unknown_785b22c3();
int64_t unknown_79022470();
int64_t unknown_ffffffff8daabebf();
int64_t unknown_ffffffff90ab7cd2();
int64_t unknown_ffffffffa81aa4b2();
int64_t unknown_ffffffffdc31c487();
int64_t unknown_ffffffffdcd3e579();
int64_t unknown_ffffffffe62e0cd8();

// Address range: 0x128cdc - 0x128d75
int64_t function_128cdc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    uint64_t v2 = __asm_sti(); // 0x128ce3
    int64_t v3; // 0x128cdc
    char * v4 = (char *)(v3 - 0x9a0faa0); // 0x128cea
    *v4 = *v4 | (char)(v2 / 256);
    __asm_out(91, (char)v2);
    int64_t v5 = v2 & 0xc2dae0ff | 0x3d251f00; // 0x128cf2
    int32_t * v6 = (int32_t *)(a2 + 0x4ea656d3); // 0x128cf7
    *v6 = *v6 + (int32_t)(int64_t)&v1;
    __asm_out_133(7, (int32_t)v5);
    char * v7 = (char *)(a2 + 0x1f013d50); // 0x128d09
    *v7 = *v7 - 56;
    int32_t * v8 = (int32_t *)(v5 + 0x6b401cf2 & 0xebffff00 | (v2 + 222) % 256); // 0x128d0f
    *v8 = *v8 + (int32_t)a3;
    uint32_t v9 = 0x10000 * (int32_t)unknown_79022470() >> 16; // 0x128d6f
    int64_t v10 = v9; // 0x128d6f
    int32_t * v11 = (int32_t *)v10; // 0x128d70
    *v11 = *v11 + 1;
    return v10 & 0xffffff00 | (int64_t)(v9 & 58);
}

// Address range: 0x128d78 - 0x128d99
int64_t function_128d78(int64_t a1, int64_t a2) {
    // 0x128d78
    int64_t v1; // 0x128d78
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(8 * v1 - 0x3109fe63 + v1); // 0x128d78
    *v3 = *v3 + (int32_t)v1;
    int32_t * v4 = (int32_t *)(v1 + 84); // 0x128d8c
    *v4 = *v4 + (int32_t)v1;
    int64_t v5; // 0x128d78
    *(char *)a1 = *(char *)&v5 - (char)(v1 / 256);
    return 0x10000 * (int32_t)((v2 + 255) % 256 | v2 & 0xff00) >> 16;
}

// Address range: 0x128d99 - 0x128daa
int64_t function_128d99(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 0x308b2b63); // 0x128d99
    int64_t v2; // 0x128d99
    *v1 = *v1 + (int32_t)v2;
    bool v3; // 0x128d99
    int32_t * v4 = (int32_t *)(a1 + 59 + (v3 ? -4 : 4)); // 0x128da4
    *v4 = *v4 + (int32_t)a2;
    return v2 & 0xffffffff;
}

// Address range: 0x128db5 - 0x128dc2
int64_t function_128db5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x128db5
    int64_t v1; // 0x128db5
    *(int32_t *)(v1 + 0x1e809f8) = (int32_t)a3;
    int64_t v2; // 0x128db5
    *(int32_t *)a1 = *(int32_t *)&v2 - (int32_t)a4;
    return function_ffffffffd6264e42();
}

// Address range: 0x128dc2 - 0x128dd6
int64_t function_128dc2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t result = unknown_1c89aeca(); // 0x128dc4
    int64_t v1; // 0x128dc2
    float80_t v2; // 0x128dc2
    *(int16_t *)(v1 & -256 | a3 % 256) = (int16_t)v2;
    return result;
}

// Address range: 0x128dfe - 0x128dff
int64_t function_128dfe(void) {
    // 0x128dfe
    int64_t result; // 0x128dfe
    return result;
}

// Address range: 0x128e05 - 0x128e0c
int64_t function_128e05(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x128e05
    return function_ffffffff85d08eb7();
}

// Address range: 0x1290dc - 0x129108
int64_t function_1290dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 - 0x7727e318); // 0x1290df
    *v1 = *v1 ^ (int32_t)a2;
    int64_t v2; // 0x1290dc
    *(int32_t *)a4 = *(int32_t *)&v2 + (int32_t)a3;
    int64_t v3; // 0x1290dc
    int64_t v4 = 2 * v3 ^ 55; // 0x1290f2
    *(int32_t *)a1 = (int32_t)v4 + 0x32abfe18;
    char * v5 = (char *)(v3 + 1); // 0x1290fd
    unsigned char v6 = *v5; // 0x1290fd
    unsigned char v7 = v6 + (char)v3; // 0x1290fd
    *v5 = v7;
    int64_t result = v4 + 0x3d83fe2b & 0xffffffff; // 0x129100
    if (v7 >= v6 && v7 != 0) {
        result = function_129083();
    }
    // 0x129102
    return result;
}

// Address range: 0x129123 - 0x12913a
int64_t function_129123(int64_t a1, int64_t a2) {
    // 0x129123
    int64_t v1; // 0x129123
    *(int32_t *)0x1e81f340091b32b = (int32_t)v1 + 0x6889ef80 + (int32_t)v1;
    bool v2; // 0x129123
    int64_t v3 = v2 ? -1 : 1; // 0x129133
    int64_t v4 = v3 + a1; // 0x129133
    *(char *)v4 = (char)v1;
    return function_ffffffffbac04b28(v4 + v3, v3 + a2);
}

// Address range: 0x12913a - 0x12913b
int64_t function_12913a(void) {
    // 0x12913a
    int64_t result; // 0x12913a
    return result;
}

// Address range: 0x129182 - 0x129187
int64_t function_129182(void) {
    // 0x129182
    return function_ffffffffa1cd923a();
}

// Address range: 0x1291f3 - 0x1291f6
int64_t function_1291f3(void) {
    // 0x1291f3
    int64_t result; // 0x1291f3
    return result;
}

// Address range: 0x12920e - 0x129219
int64_t function_12920e(int64_t a1) {
    // 0x12920e
    *(int32_t *)-0x6deb85eb = *(int32_t *)-0x6deb85eb + (int32_t)a1;
    return function_5cc6e72a();
}

// Address range: 0x129247 - 0x129248
int64_t function_129247(void) {
    // 0x129247
    int64_t result; // 0x129247
    return result;
}

// Address range: 0x12925d - 0x129265
int64_t function_12925d(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x12925d
    int64_t v1; // 0x12925d
    bool v2; // 0x12925d
    if (!v2) {
        v1 = function_129247();
    }
    // 0x12925f
    return v1 + a2 & 0xffffff00 | a2 % 256;
}

// Address range: 0x1292d4 - 0x1292dd
int64_t function_1292d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1292d4
    return unknown_65f29ddd(a1, a2, a3, a4);
}

// Address range: 0x1292fe - 0x12931d
int64_t function_1292fe(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1292fe
    bool v1; // 0x1292fe
    int64_t v2 = v1 ? 0xd7749e5e : 0xd7749e5d; // 0x1292fe
    int64_t v3; // 0x1292fe
    int32_t * v4 = (int32_t *)((v3 - v2 & 0xffffff00 | a4 / 256 % 256) + 0x478ce80a); // 0x129305
    *v4 = *v4 + (int32_t)v3;
    *(char *)a1 = __readfsbyte(a2);
    int64_t v5 = v1 ? -1 : 1; // 0x12930d
    int64_t v6 = v5 + a1; // 0x12930d
    int64_t v7 = v5 + a2; // 0x12930d
    unknown_263d9c19(v6, v7);
    __asm_wait();
    return function_129376(v6, v7, a3, a4);
}

// Address range: 0x12932d - 0x129330
int64_t function_12932d(void) {
    // 0x12932d
    int64_t result; // 0x12932d
    return result;
}

// Address range: 0x129376 - 0x129388
int64_t function_129376(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x129376
    int64_t v1; // 0x129376
    int64_t v2 = v1;
    __asm_outsb((int16_t)a3, (char)v1);
    bool v3; // 0x129376
    *(int32_t *)v2 = (int32_t)v2 - (int32_t)a4 + (int32_t)v3;
    int64_t v4 = unknown_59104d80(); // 0x12937a
    int64_t v5; // 0x129376
    *(int32_t *)a1 = *(int32_t *)&v5 + (int32_t)a3;
    int32_t * v6 = (int32_t *)(a1 + 109); // 0x129381
    *v6 = *v6 | (int32_t)a1;
    return v4 + a3 & 0xffffffff;
}

// Address range: 0x1293a2 - 0x1293a5
int64_t function_1293a2(int64_t a1) {
    // 0x1293a2
    int64_t result; // 0x1293a2
    uint64_t v1 = result;
    *(char *)v1 = (char)(v1 / 256) + (char)v1;
    return result;
}

// Address range: 0x1293cd - 0x1293d2
int64_t function_1293cd(void) {
    // 0x1293cd
    return function_cf76d40();
}

// Address range: 0x129491 - 0x129549
int64_t function_129491(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    unsigned char v2 = *(char *)-0xfeb832a; // 0x129491
    *(char *)-0xfeb832a = v2 - 32;
    unknown_3a24e0a7();
    int64_t v3 = unknown_ffffffffa81aa4b2(); // 0x1294ab
    int64_t v4; // 0x129491
    __asm_pmaxsw(v4, *(int64_t *)(a4 + 0x3001e819));
    if (a4 == 1) {
        // 0x1294ba
        return v3 + 0x3ed6520a & 0xffffffff;
    }
    int64_t v5 = (int64_t)(v2 > 31) & 0xffffffff; // 0x129498
    uint64_t v6 = v3 & 0xffffffff ^ 0x28d163; // 0x12953e
    *(int64_t *)v5 = v5 + 8;
    __asm_outsb((int16_t)a3, *(char *)&v1);
    return v6 / 2 % 128 | v6 & 0xffffff00;
}

// Address range: 0x12955e - 0x129563
int64_t function_12955e(void) {
    // 0x12955e
    return function_1c6396aa();
}

// Address range: 0x1295bd - 0x1295d2
int64_t function_1295bd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1295bd
    unknown_785b22c3();
    int64_t v1; // 0x1295bd
    __asm_outsb((int16_t)a3, (char)v1);
    return unknown_ffffffff90ab7cd2();
}

// Address range: 0x129641 - 0x129653
int64_t function_129641(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x129641
    int64_t v1; // 0x129641
    int64_t v2 = v1;
    int64_t v3 = v1;
    *(int32_t *)v3 = 2 * (int32_t)v3;
    int64_t result = __asm_hlt(); // 0x12964d
    *(char *)(256 * v1 + v2 & 0xff00 | v2 & -0xff01) = (char)a3;
    return result;
}

// Address range: 0x1296c5 - 0x1296c8
int64_t function_1296c5(int64_t a1) {
    // 0x1296c5
    int64_t result; // 0x1296c5
    return result;
}

// Address range: 0x2368b6 - 0x2368de
int64_t function_2368b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a3 + 71); // 0x2368b6
    int64_t v2; // 0x2368b6
    *v1 = *v1 ^ (int32_t)v2;
    unknown_ffffffff8daabebf();
    int64_t v3; // 0x2368b6
    *(char *)v3 = *(char *)&v3 - 3;
    *(char *)-0x7f2038 = *(char *)-0x7f2038 + (char)(v3 / 256);
    uint64_t v4 = __asm_wait(); // 0x2368c7
    int64_t v5 = v4 & -256 | (int64_t)*(char *)(v4 % 256 + v3); // 0x2368cb
    int32_t * v6 = (int32_t *)(8 * a6 + 87 + v5); // 0x2368cc
    *v6 = *v6 >> 7;
    return v5 + 0x27bf1165 & 0xffffffff;
}

// Address range: 0x2368f9 - 0x2368fe
int64_t function_2368f9(void) {
    // 0x2368f9
    int64_t result; // 0x2368f9
    return result;
}

// Address range: 0x236910 - 0x236913
int64_t function_236910(void) {
    // 0x236910
    int64_t result; // 0x236910
    return result;
}

// Address range: 0x236953 - 0x236959
int64_t function_236953(void) {
    // 0x236953
    int64_t result; // 0x236953
    return result;
}

// Address range: 0x236a55 - 0x236a56
int64_t function_236a55(void) {
    // 0x236a55
    int64_t result; // 0x236a55
    return result;
}

// Address range: 0x236a7b - 0x236a91
int64_t function_236a7b(int64_t a1) {
    // 0x236a7b
    int64_t v1; // 0x236a7b
    bool v2; // 0x236a7b
    if (v2) {
        v1 = function_236a55();
    }
    // 0x236a7d
    int64_t v3; // 0x236a7b
    if (-1 - (int32_t)v1 < (int32_t)v3) {
        function_236a7b((int64_t)&g3);
    }
    int64_t result = unknown_ffffffffdc31c487(); // 0x236a81
    int32_t * v4 = (int32_t *)(result + 0x1e81a00); // 0x236a86
    *v4 = *v4 & -0x40f0a3b1;
    return result;
}

// Address range: 0x236b2a - 0x236b33
int64_t function_236b2a(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 0x22adad45); // 0x236b2a
    int64_t result; // 0x236b2a
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x236b3c - 0x236b44
int64_t function_236b3c(int64_t a1) {
    // 0x236b3c
    int64_t result; // 0x236b3c
    int32_t * v1 = (int32_t *)(result + 74); // 0x236b3f
    *v1 = *v1 - (int32_t)result;
    return result;
}

// Address range: 0x236b94 - 0x236b9f
int64_t function_236b94(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 0x158cf38); // 0x236b94
    int64_t v2; // 0x236b94
    *v1 = (int32_t)v2;
    return (int64_t)*v1;
}

// Address range: 0x236ba7 - 0x236bbe
int64_t function_236ba7(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x236ba7
    int64_t v1; // 0x236ba7
    int64_t v2 = v1;
    float80_t v3; // 0x236ba7
    *(int16_t *)((256 * v1 + v2 & 0xff00 | v2 & -0xff01) + 0x1e8ff3b) = (int16_t)v3;
    int32_t result = __asm_in(121); // 0x236bb3
    char * v4 = (char *)(a3 + 0x4fa7289b); // 0x236bb5
    *v4 = *v4 + (char)(a3 / 256);
    bool v5; // 0x236ba7
    *(int32_t *)a3 = (int32_t)((v5 ? 0xfffffffc : 4) + a1);
    return result;
}

// Address range: 0x236bdd - 0x236be2
int64_t function_236bdd(void) {
    // 0x236bdd
    return function_ffffffffe8375924();
}

// Address range: 0x236c26 - 0x236c27
int64_t function_236c26(void) {
    // 0x236c26
    int64_t result; // 0x236c26
    return result;
}

// Address range: 0x236c49 - 0x236c6d
int64_t function_236c49(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 + 0x3d00d916); // 0x236c49
    *v1 = *v1 + (char)a1;
    int64_t v2; // 0x236c49
    int32_t * v3 = (int32_t *)(v2 + 0x6cf49eea); // 0x236c50
    *v3 = *v3 + (int32_t)a1;
    int64_t v4; // 0x236c49
    unsigned char v5 = *(char *)&v4; // 0x236c5c
    bool v6; // 0x236c49
    *(char *)((v6 ? -8 : 8) + a1) = __asm_insb((int16_t)a3);
    *(char *)-0x311b8493 = *(char *)-0x311b8493 + (char)(v2 / 256);
    int64_t v7; // 0x236c49
    return ((int64_t)&v7 & 0xffffff00 | (int64_t)v5) + 0x1363bd0c & 0xffffffff;
}

// Address range: 0x236c6e - 0x236d01
int64_t function_236c6e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2 = a6;
    int64_t v3 = __asm_int3(0x829005e8); // 0x236c76
    int64_t v4; // 0x236c6e
    char v5 = *(char *)0x46fde381 + (char)v4; // 0x236c78
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x236c78
    *(char *)0x46fde381 = v5;
    uint32_t v7 = (int32_t)a2;
    int32_t v8; // 0x236c6e
    int64_t v9; // 0x236c6e
    int32_t * v10; // 0x236c6e
    int64_t v11; // 0x236c6e
    int64_t v12; // 0x236c6e
    if (v6 % 2 == 0) {
        // 0x236cd2
        unknown_ffffffffe62e0cd8();
        *(char *)-0x13daaa48 = *(char *)-0x13daaa48 + (char)(a4 / 256);
        unsigned char v13 = *(char *)-0x1790e0b8; // 0x236ce3
        *(char *)-0x1790e0b8 = v13 / 128 | 2 * v13;
        v9 = __asm_in_134((int16_t)a3);
        int16_t v14; // 0x236c6e
        v12 = v14;
        v10 = (int32_t *)((a4 & 0xffffffff) - 55);
        v11 = 0x829005e8;
        v8 = -1 - (int32_t)a3 < v7;
    } else {
        int32_t v15 = *(int32_t *)v3 + (int32_t)v3; // 0x236c83
        uint32_t v16 = v15 + 0x2f224c2a; // 0x236c85
        int64_t v17 = (a5 & (int64_t)&g2) != 0 ? -1 : 1; // 0x236c8b
        int64_t v18 = v17 + 0x829005e8; // 0x236c8b
        __asm_outsd((int16_t)a3, v7);
        __asm_int(19);
        char * v19 = (char *)(int64_t)v16; // 0x236c8f
        char v20 = v16; // 0x236c8f
        *v19 = *v19 + v20;
        *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a4;
        *(char *)v18 = v20;
        int64_t v21 = (a5 & (int64_t)&g2) != 0 ? 0x8d94b824 : 0x8d94b826; // 0x236ca7
        char * v22 = (char *)(a3 + 0xbd0bbb48 & 0xffffffff); // 0x236cb2
        *v22 = 2 * *v22;
        int64_t v23 = (v18 + v21 & 0xffffffff) + v17; // 0x236cb9
        int32_t * v24 = (int32_t *)((int64_t)(v15 - 0x647133e + (int32_t)((v16 & 256) != 0)) - 0x22f326f6); // 0x236cbd
        uint32_t v25 = *v24; // 0x236cbd
        int64_t v26; // bp+16, 0x236c6e
        int32_t v27 = (int64_t)&v26; // 0x236cbd
        int32_t v28 = v25 + v27; // 0x236cbd
        unsigned char v29 = llvm_ctpop_i8((char)v28); // 0x236cbd
        *v24 = v28;
        int64_t v30 = unknown_4cae8bcb(v23); // 0x236cc5
        v2 = 512 * (int64_t)((a5 & (int64_t)&g1) != 0) | 256 * (int64_t)((a5 & 256) != 0) | 1024 * (int64_t)((a5 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((a5 & (int64_t)"le") != 0) | 64 * (int64_t)(v28 == 0) | 128 * (int64_t)(v28 < 0) | 16 * (int64_t)(v25 % 16 + (v27 & 8) > 15) | 2048 * (int64_t)(((v28 ^ v25) & (v28 ^ v27)) < 0) | 4 * (int64_t)(v29 % 2 == 0) | 3;
        v9 = v30;
        v12 = (int64_t)&v2;
        v10 = (int32_t *)0x8d94b7ee;
        v11 = v23;
        v8 = 1;
    }
    int32_t * v31 = v10;
    *(int64_t *)(v12 - 8) = v9;
    int32_t * v32 = (int32_t *)(v11 + 0x1e83a00); // 0x236cf8
    *v32 = (int32_t)v11;
    *v31 = *v32 + v8 + *v31;
    return v1 & 0xffffffff;
}

// Address range: 0x236d08 - 0x236d0a
int64_t function_236d08(void) {
    // 0x236d08
    int64_t result; // 0x236d08
    return result;
}

// Address range: 0x236d14 - 0x236d1a
int64_t function_236d14(int64_t a1, int64_t a2, int64_t a3) {
    // 0x236d14
    return function_ffffffff90d532fc();
}

// Address range: 0x236d34 - 0x236d3b
int64_t function_236d34(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x236d34
    int64_t v1; // 0x236d34
    return (v1 ^ a4 / 256 % 256) + v1 & 0xffffffff;
}

// Address range: 0x236d56 - 0x236dfc
int64_t function_236d56(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = unknown_2459df5c(); // 0x236d56
    char * v3 = (char *)(v2 + 0x361ca00); // 0x236d5b
    *v3 = *v3 + (char)v2;
    int64_t v4; // 0x236d56
    char * v5 = (char *)(v4 - 0x42fe1800); // 0x236d61
    *v5 = *v5 + (char)(a4 / 256);
    char * v6 = (char *)(a4 + 0xae1e400); // 0x236d67
    *v6 = *v6 + (char)v4;
    unknown_ffffffffdcd3e579();
    int64_t v7 = 0x53842822; // bp-25350, 0x236d78
    bool v8; // 0x236d56
    int64_t v9 = v8 ? -1 : 1; // 0x236d80
    int64_t result = __asm_iretd(v9 + a1, v9 + a2); // 0x236d81
    int32_t * v10 = (int32_t *)(result + 8); // 0x236d85
    uint32_t v11 = *v10; // 0x236d85
    uint32_t v12 = v11 + (int32_t)(int64_t)&v7; // 0x236d85
    *v10 = v12;
    unsigned char v13 = (char)v1 % 32; // 0x236d88
    if (v13 != 0) {
        unsigned char v14 = *(char *)&v1; // 0x236d88
        *(char *)v1 = (char)(v12 < v11) << 8 - v13 | v14 >> v13 | (char)((int16_t)v14 << (int16_t)(9 - v13));
    }
    return result;
}

// Address range: 0x236e2b - 0x236e3a
int64_t function_236e2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x236e2b
    int64_t v1; // 0x236e2b
    int64_t result = v1 & -256 | (int64_t)*(char *)-0x36c0ff2cbb837ff6; // 0x236e2b
    uint32_t v2 = (int32_t)a4 % 32; // 0x236e34
    if (v2 != 0) {
        int32_t * v3 = (int32_t *)result; // 0x236e34
        uint32_t v4 = *v3; // 0x236e34
        *v3 = v4 >> 32 - v2 | v4 << v2;
    }
    *(char *)a1 = __asm_insb((int16_t)a3);
    return result;
}

// Address range: 0x236e84 - 0x236e9b
int64_t function_236e84(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x236e84
    int64_t v1; // 0x236e84
    char v2 = (uint64_t)v1 / 256; // 0x236e8a
    *(char *)-0x4632c022 = *(char *)-0x4632c022 & v2;
    *(char *)0x2924f597 = *(char *)0x2924f597 + v2;
    return v1 & -256 | (int64_t)__asm_in_135((int16_t)a3);
}

// Address range: 0x236e9b - 0x236eb5
int64_t function_236e9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x236e9b
    __readfsbyte(a2);
    __writefsbyte(a2, -1);
    __asm_int(59);
    char * v1 = (char *)(a3 + 0x4f2301fd); // 0x236eae
    char v2 = *v1; // 0x236eae
    int64_t v3; // 0x236e9b
    *v1 = (char)v3 + (char)(-1 - (int32_t)a1 < (int32_t)a4) + v2;
    return v3 | 57;
}

// Address range: 0x3437d8 - 0x3437e0
int64_t function_3437d8(void) {
    // 0x3437d8
    int64_t result; // 0x3437d8
    return result;
}

// Address range: 0x3437e0 - 0x3437e4
int64_t function_3437e0(void) {
    // 0x3437e0
    int64_t result; // 0x3437e0
    return result;
}

// Address range: 0x3437ff - 0x343800
int64_t function_3437ff(void) {
    // 0x3437ff
    int64_t result; // 0x3437ff
    return result;
}

// Address range: 0x34382a - 0x34382b
int64_t function_34382a(void) {
    // 0x34382a
    int64_t result; // 0x34382a
    return result;
}

// Address range: 0x34384e - 0x343863
int64_t function_34384e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34384e
    int64_t v1; // 0x34384e
    if ((int32_t)v1 < 0x44169e01) {
        function_34382a();
    }
    // 0x34385c
    return a3 & 0xffffffff;
}

// Address range: 0x34395f - 0x343960
int64_t function_34395f(void) {
    // 0x34395f
    int64_t result; // 0x34395f
    return result;
}

// Address range: 0x34396f - 0x343971
int64_t function_34396f(void) {
    // 0x34396f
    return function_34399c();
}

// Address range: 0x343989 - 0x34399c
int64_t function_343989(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 50); // 0x343998
    *v1 = *v1 | 9;
    int64_t v2; // 0x343989
    return v2 + 0x40be3a3f & 0xffffffff;
}

// Address range: 0x34399c - 0x3439a2
int64_t function_34399c(void) {
    // 0x34399c
    int64_t result; // 0x34399c
    return result;
}
