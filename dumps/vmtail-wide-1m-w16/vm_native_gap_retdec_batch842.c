/*
 * Targeted RetDec C for native executable gap queue batch 842.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1bcfce-0x1bd1ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1bd1ce-0x1bd3ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1bd3ce-0x1bd5ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1bd5ce-0x1bd7ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1bd7ce-0x1bd9ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x419040-0x419140 rank=- name=- kind=- bytes=- uncovered=-
 *   0x419140-0x4191c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x419240-0x419440 rank=- name=- kind=- bytes=- uncovered=-
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
typedef struct { uint8_t bytes[32]; } int256_t;
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
extern int g2;
extern int g4;
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
int64_t unknown_b6ccb9(void);
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
void __asm_clts(void);
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_rsm(void);
int64_t __asm_emms(void);
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
void __asm_fldenv(int224_t value);
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
int256_t __asm_vpcmpeqw(int256_t left, int256_t right);
int256_t __asm_vprord(int256_t value, int count);
int256_t __asm_vpaddd(int256_t left, int256_t right);
int256_t __asm_vpxord(int256_t left, int256_t right);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psadbw(int128_t left, int128_t right);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_vpunpckhdq(int128_t left, int128_t right);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
int128_t __asm_pavgw(int128_t left, int128_t right);
int128_t __asm_pmaxub(int128_t left, int128_t right);
int128_t __asm_pmaxsw(int128_t left, int128_t right);
int128_t __asm_pmulhw(int128_t left, int128_t right);
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

int64_t function_158d652();
int64_t function_1bcfbe();
int64_t function_1bcfce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1bd072(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1bd099(int64_t a1, int64_t a2);
int64_t function_1bd09f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1bd116(int64_t a1);
int64_t function_1bd144(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bd1e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bd297(void);
int64_t function_1bd2b1(void);
int64_t function_1bd2fe(int64_t a1, int64_t a2);
int64_t function_1bd31d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1bd331(int64_t a1);
int64_t function_1bd344(void);
int64_t function_1bd358(void);
int64_t function_1bd37f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bd3ef(int64_t a1);
int64_t function_1bd430(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1bd4ee(int64_t a1);
int64_t function_1bd4fa(int64_t a1);
int64_t function_1bd51b(void);
int64_t function_1bd533(void);
int64_t function_1bd55a(void);
int64_t function_1bd55e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1bd56f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1bd583(int64_t a1);
int64_t function_1bd596(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1bd5cc(void);
int64_t function_1bd5db(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1bd623(void);
int64_t function_1bd64d(void);
int64_t function_1bd673(void);
int64_t function_1bd6f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bd74f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1bd758(void);
int64_t function_1bd779(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bd784(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1bd89e(int64_t a1, uint64_t a2);
int64_t function_1bd8ec(void);
int64_t function_1bd907(int64_t a1);
int64_t function_1bd91b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1bd936(void);
int64_t function_1bd952(void);
int64_t function_1bd975(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bd9c0(void);
int64_t function_3fc92ef();
int64_t function_419040(void);
int64_t function_419047(int64_t a1, int64_t a2, int64_t a3);
int64_t function_419057(int64_t a1, int64_t a2, int64_t a3);
int64_t function_419061(int64_t a1, int64_t a2, uint64_t a3, int64_t result);
int64_t function_4190a8(int64_t a1);
int64_t function_4190d4(int64_t a1);
int64_t function_4190d8(void);
int64_t function_4190fd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_419114(int64_t a1);
int64_t function_419152(void);
int64_t function_4191b1(int64_t a1);
int64_t function_41920c();
int64_t function_41923d();
int64_t function_419240(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41926e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4192b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4192d2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_4193a1(int64_t a1, int64_t a2);
int64_t function_4193f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41942f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6181473a();
int64_t function_ffffffff801bf19a();
int64_t function_ffffffff91d35104();
int64_t function_ffffffffb42bd260();
int64_t unknown_1599372();
int64_t unknown_24d95f83();
int64_t unknown_3a73dbf7();
int64_t unknown_3d1dba0c();
int64_t unknown_41a890a9();
int64_t unknown_68f1e4b2();
int64_t unknown_7545667e();
int64_t unknown_ffffffff861f6576();
int64_t unknown_ffffffff881f60bf();
int64_t unknown_ffffffff936b7686();
int64_t unknown_ffffffffc99db6a6();
int64_t unknown_ffffffffd3ed38a3();
int64_t unknown_ffffffffd893a191();
int64_t unknown_ffffffffeeceadfa();
int64_t unknown_fffffffff0efc7e0();

// Address range: 0x1bcfce - 0x1bd04e
int64_t function_1bcfce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1bcfce
    int64_t v1; // 0x1bcfce
    uint64_t v2 = v1;
    char * v3 = (char *)(a3 + 80 + a4); // 0x1bcfd1
    *v3 = *v3 + (char)(v2 / 256);
    int16_t v4 = a3; // 0x1bcfd5
    __asm_out(v4, (int32_t)v2);
    *(char *)a1 = (char)v2 & 84;
    bool v5; // 0x1bcfce
    int64_t v6 = (v5 ? -1 : 1) + a1; // 0x1bcfdb
    int32_t * v7 = (int32_t *)(v6 + 81); // 0x1bcfdc
    *v7 = *v7 & 82;
    unknown_ffffffffeeceadfa(v6, 0x13d00e3);
    int32_t * v8 = (int32_t *)(v6 + 0x68472f0c); // 0x1bd000
    *v8 = *v8 + 0x13d00e3;
    int32_t * v9 = (int32_t *)(v6 + 0x2f013d00); // 0x1bd014
    int32_t v10 = a3; // 0x1bd014
    *v9 = *v9 & v10;
    *(char *)0x5ec25a5d = -*(char *)0x5ec25a5d;
    int64_t v11 = a4; // bp-24, 0x1bd020
    __asm_out(v4, (int32_t)a5);
    if ((int32_t)(int64_t)&v11 <= 0x13d00e3) {
        function_1bcfbe();
    }
    // 0x1bd028
    *(int32_t *)v6 = v10;
    int64_t result = __asm_iretd((int64_t)&g6, (int64_t)&g6, (int64_t)&g6, (int64_t)&g6); // 0x1bd037
    *(char *)-0xfed93b7 = *(char *)-0xfed93b7 + 1;
    return result;
}

// Address range: 0x1bd072 - 0x1bd094
int64_t function_1bd072(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1bd072
    int64_t v1; // 0x1bd072
    int32_t * v2 = (int32_t *)(a3 + 54 + 8 * v1); // 0x1bd072
    *v2 = *v2 | (int32_t)v1;
    int32_t * v3 = (int32_t *)19; // 0x1bd078
    *v3 = *v3 + (int32_t)a1;
    int64_t v4 = v1 & 0xffffffff; // 0x1bd07b
    unknown_ffffffff936b7686();
    int32_t * v5 = (int32_t *)(v4 - 0x44f00500); // 0x1bd085
    *v5 = *v5 ^ (int32_t)v1;
    unknown_ffffffffd893a191();
    return function_1bd09f(a1, a2, a3, v4, (int64_t)&g6);
}

// Address range: 0x1bd099 - 0x1bd09f
int64_t function_1bd099(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 93); // 0x1bd099
    *v1 = *v1 + (int32_t)a2;
    int64_t result; // 0x1bd099
    return result;
}

// Address range: 0x1bd09f - 0x1bd10e
int64_t function_1bd09f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t result; // 0x1bd09f
    if (a4 != 1) {
        // 0x1bd0cf
        return result;
    }
    // 0x1bd101
    int64_t v2; // 0x1bd09f
    int64_t v3 = unknown_41a890a9(&v2); // 0x1bd0a3
    char * v4 = (char *)(result - 54); // 0x1bd0a8
    *v4 = *v4 & (char)a3;
    int32_t * v5 = (int32_t *)(result + 0x60160aa0); // 0x1bd0ad
    *v5 = *v5 + (int32_t)v3;
    int32_t v6 = *(int32_t *)&v1;
    __asm_outsd((int16_t)a3, v6);
    int64_t result2 = unknown_ffffffff881f60bf(); // 0x1bd0b9
    *(int32_t *)v1 = v6 + (int32_t)a3;
    *(char *)-0x4b48fe18 = *(char *)-0x4b48fe18 - 1;
    return result2;
}

// Address range: 0x1bd116 - 0x1bd117
int64_t function_1bd116(int64_t a1) {
    // 0x1bd116
    int64_t result; // 0x1bd116
    return result;
}

// Address range: 0x1bd144 - 0x1bd14f
int64_t function_1bd144(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bd144
    int64_t v1; // 0x1bd144
    int32_t * v2 = (int32_t *)(v1 - 6); // 0x1bd144
    *v2 = *v2 + (int32_t)a2;
    int64_t result; // 0x1bd144
    int64_t v3 = result;
    *(char *)v3 = *(char *)&result - (char)v3;
    int64_t v4 = result;
    *(char *)v4 = *(char *)&result - (char)v4;
    return result;
}

// Address range: 0x1bd1e9 - 0x1bd20e
int64_t function_1bd1e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bd1e9
    int64_t v1; // 0x1bd1e9
    uint64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)v2 + (int32_t)v1;
    int64_t v3; // 0x1bd1e9
    *(char *)a1 = *(char *)&v3;
    bool v4; // 0x1bd1e9
    int64_t v5 = v4 ? 0xffffffff : 1; // 0x1bd1eb
    int32_t v6 = *(int32_t *)(a4 + 0x1e86c5d); // 0x1bd1f1
    unsigned char v7 = *(char *)((int64_t)(v6 | (int32_t)v1) - 0x4c5b3cdc); // 0x1bd1f9
    int32_t v8 = *(int32_t *)(v2 % 256 * (int64_t)v7 | v2 & -0x10000); // 0x1bd203
    return unknown_3d1dba0c(0x3a9bc3ea, v8 + (int32_t)(v5 + a2), 256 * v1 + a3 & 0xff00 | a3 & -0xff01);
}

// Address range: 0x1bd297 - 0x1bd298
int64_t function_1bd297(void) {
    // 0x1bd297
    int64_t result; // 0x1bd297
    return result;
}

// Address range: 0x1bd2b1 - 0x1bd2b2
int64_t function_1bd2b1(void) {
    // 0x1bd2b1
    int64_t result; // 0x1bd2b1
    return result;
}

// Address range: 0x1bd2fe - 0x1bd314
int64_t function_1bd2fe(int64_t a1, int64_t a2) {
    // 0x1bd2fe
    int64_t v1; // 0x1bd2fe
    uint64_t v2 = v1;
    *(char *)-0x37b5e4f7 = *(char *)-0x37b5e4f7 + (char)(v1 / 256);
    char v3 = *(char *)(v1 + 15 + 8 * v1); // 0x1bd308
    int64_t result = 256 * (int64_t)(v3 | (char)(v2 / 256)) | v2 & -0xff01; // 0x1bd30d
    if ((char)a2 > (char)a1) {
        result = function_1bd297();
    }
    // 0x1bd30f
    __asm_out_133(-54, (char)result);
    return result;
}

// Address range: 0x1bd31d - 0x1bd320
int64_t function_1bd31d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1bd31d
    return function_1bd2b1();
}

// Address range: 0x1bd331 - 0x1bd339
int64_t function_1bd331(int64_t a1) {
    // 0x1bd331
    int64_t result; // 0x1bd331
    *(int32_t *)a1 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x1bd344 - 0x1bd347
int64_t function_1bd344(void) {
    // 0x1bd344
    int64_t result; // 0x1bd344
    return result;
}

// Address range: 0x1bd358 - 0x1bd35b
int64_t function_1bd358(void) {
    // 0x1bd358
    int64_t result; // 0x1bd358
    return result;
}

// Address range: 0x1bd37f - 0x1bd384
int64_t function_1bd37f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bd37f
    int64_t result; // 0x1bd37f
    return result;
}

// Address range: 0x1bd3ef - 0x1bd3f0
int64_t function_1bd3ef(int64_t a1) {
    // 0x1bd3ef
    int64_t result; // 0x1bd3ef
    return result;
}

// Address range: 0x1bd430 - 0x1bd48a
int64_t function_1bd430(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1bd430
    int64_t v1; // 0x1bd430
    char * v2 = (char *)(v1 - 0x3d043abd); // 0x1bd430
    *v2 = *v2 ^ (char)a6;
    int64_t v3; // 0x1bd430
    *(char *)a2 = *(char *)&v3 + (char)v1;
    int64_t v4 = unknown_1599372(); // 0x1bd43f
    char v5 = *(char *)((256 * a4 + a3 & 0xff00 | a3 & -0xff01) - 0x3c2b4a00); // 0x1bd446
    char v6 = v5 & (char)a3; // 0x1bd446
    int64_t v7 = v4 & -0xff01 | 0x4000 * (int64_t)(v6 == 0) | 0x8000 * (int64_t)(v6 < 0) | 1024 * (int64_t)(llvm_ctpop_i8(v6) % 2 == 0) | 512; // 0x1bd44c
    *(int64_t *)0xd0c59fe7 = v7;
    *(int64_t *)0xd0c59fdf = 0xd0c59fe7;
    *(char *)v7 = 61;
    int64_t v8 = 2 * v7; // 0x1bd459
    uint64_t v9 = v8 + 179; // 0x1bd45e
    char * v10 = (char *)((v9 % 256 | v8 & 0xffffff00) + 0x1e87405); // 0x1bd461
    *v10 = *v10 + (char)v9;
    *(int32_t *)-0x771f138f = *(int32_t *)-0x771f138f + (int32_t)a1;
    return unknown_7545667e() & -256 | (int64_t)(*(char *)&v3 + 33);
}

// Address range: 0x1bd4ee - 0x1bd4f7
int64_t function_1bd4ee(int64_t a1) {
    // 0x1bd4ee
    return unknown_3a73dbf7(a1);
}

// Address range: 0x1bd4fa - 0x1bd4fd
int64_t function_1bd4fa(int64_t a1) {
    // 0x1bd4fa
    int64_t result; // 0x1bd4fa
    return result;
}

// Address range: 0x1bd51b - 0x1bd520
int64_t function_1bd51b(void) {
    // 0x1bd51b
    return function_ffffffff801bf19a();
}

// Address range: 0x1bd533 - 0x1bd534
int64_t function_1bd533(void) {
    // 0x1bd533
    int64_t result; // 0x1bd533
    return result;
}

// Address range: 0x1bd55a - 0x1bd55c
int64_t function_1bd55a(void) {
    // 0x1bd55a
    int64_t v1; // 0x1bd55a
    return function_1bd56f(v1, v1, v1);
}

// Address range: 0x1bd55e - 0x1bd56f
int64_t function_1bd55e(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3;
    char * v2 = (char *)(a3 + 0x2401e82d); // 0x1bd55e
    int64_t v3; // 0x1bd55e
    *v2 = *v2 + (char)v3;
    if (*(char *)&v1 < 213) {
        function_1bd533();
    }
    // 0x1bd56a
    return v1 & 0xffffffff;
}

// Address range: 0x1bd56f - 0x1bd582
int64_t function_1bd56f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1bd56f
    unknown_ffffffff861f6576();
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return unknown_24d95f83();
}

// Address range: 0x1bd583 - 0x1bd584
int64_t function_1bd583(int64_t a1) {
    // 0x1bd583
    int64_t result; // 0x1bd583
    return result;
}

// Address range: 0x1bd596 - 0x1bd5c2
int64_t function_1bd596(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a3 & -0xff01 | (int64_t)&g2; // 0x1bd596
    int32_t * v2 = (int32_t *)v1; // 0x1bd598
    *v2 = *v2 | (int32_t)a2;
    char * v3 = (char *)v1; // 0x1bd59a
    unsigned char v4 = *v3; // 0x1bd59a
    char v5 = v4 / 128; // 0x1bd59a
    *v3 = v5 | 2 * v4;
    __asm_int3(a1);
    int64_t v6 = unknown_ffffffffd3ed38a3(); // 0x1bd59d
    int32_t * v7 = (int32_t *)((256 * (v6 + a4 / 256 + (int64_t)(v5 != 0)) & 0xff00 | a4 & -0xff01) - 0x73fdbc0b); // 0x1bd5ab
    uint32_t v8 = *v7; // 0x1bd5ab
    int64_t v9; // 0x1bd596
    uint32_t v10 = v8 + (int32_t)v9; // 0x1bd5ab
    *v7 = v10;
    *(char *)0x4de5dd3b8e99b726 = (char)v6;
    int64_t v11 = v6 - (v10 < v8 ? 0xfb1f01e9 : 0xfb1f01e8); // 0x1bd5ba
    return (v11 + 25) % 256 | v11 & 0xffffff00;
}

// Address range: 0x1bd5cc - 0x1bd5d2
int64_t function_1bd5cc(void) {
    // 0x1bd5cc
    return function_ffffffff91d35104();
}

// Address range: 0x1bd5db - 0x1bd5e3
int64_t function_1bd5db(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1bd5db
    int64_t v1; // 0x1bd5db
    int64_t v2 = v1;
    unsigned char v3 = (char)v1; // 0x1bd5df
    bool v4; // 0x1bd5db
    unsigned char v5 = v3 - 114 + (char)v4; // 0x1bd5df
    bool v6 = v4 ? v5 <= v3 : v3 > 113; // 0x1bd5df
    *(char *)v2 = (char)v2 - v5 + (char)v6;
    return v1 & -256 | (int64_t)v5;
}

// Address range: 0x1bd623 - 0x1bd628
int64_t function_1bd623(void) {
    // 0x1bd623
    return function_3fc92ef();
}

// Address range: 0x1bd64d - 0x1bd652
int64_t function_1bd64d(void) {
    // 0x1bd64d
    return function_158d652();
}

// Address range: 0x1bd673 - 0x1bd676
int64_t function_1bd673(void) {
    // 0x1bd673
    int64_t result; // 0x1bd673
    return result;
}

// Address range: 0x1bd6f3 - 0x1bd709
int64_t function_1bd6f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bd6f3
    int64_t v1; // 0x1bd6f3
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)a3;
    *(int32_t *)(v1 - 8) = (int32_t)v1;
    int64_t v2; // 0x1bd6f3
    bool v3; // 0x1bd6f3
    int32_t * v4 = (int32_t *)(v2 + (v3 ? -4 : 4)); // 0x1bd703
    *v4 = *v4 ^ (int32_t)v1;
    return (int64_t)*(int32_t *)&v2;
}

// Address range: 0x1bd74f - 0x1bd752
int64_t function_1bd74f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1bd74f
    int64_t result; // 0x1bd74f
    return result;
}

// Address range: 0x1bd758 - 0x1bd75b
int64_t function_1bd758(void) {
    // 0x1bd758
    int64_t result; // 0x1bd758
    return result;
}

// Address range: 0x1bd779 - 0x1bd783
int64_t function_1bd779(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x760ff778); // 0x1bd779
    int64_t v2; // 0x1bd779
    *v1 = *v1 + (int32_t)v2;
    return __asm_iretd(a1, a2, a3, a4);
}

// Address range: 0x1bd784 - 0x1bd824
int64_t function_1bd784(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1bd784
    if (a4 == 1) {
        // 0x1bd786
        return a1 & 0xffffffff;
    }
    // 0x1bd7b4
    int64_t v1; // 0x1bd784
    return v1 & 0xc0b175b4 | 0x3f4e8a4b;
}

// Address range: 0x1bd89e - 0x1bd8d4
int64_t function_1bd89e(int64_t a1, uint64_t a2) {
    int64_t result = unknown_ffffffffc99db6a6(); // 0x1bd89f
    if (llvm_ctpop_i8((char)result + 115) % 2 == 0) {
        int32_t * v1 = (int32_t *)a2; // 0x1bd8af
        int32_t v2 = *v1; // 0x1bd8af
        int64_t v3; // 0x1bd89e
        *v1 = v2 - ((int32_t)((int32_t)result < 0xbe20ad8d) | (int32_t)(int64_t)&v3);
        return result;
    }
    uint64_t v4 = unknown_68f1e4b2(); // 0x1bd8b8
    char * v5 = (char *)(a1 - 7); // 0x1bd8bd
    *v5 = *v5 + (char)(a2 / 256);
    int64_t v6; // 0x1bd89e
    char v7 = *(char *)&v6; // 0x1bd8c0
    int64_t v8; // 0x1bd89e
    *(char *)0x1db777d0 = *(char *)0x1db777d0 + (char)(v8 / 256);
    return (256 * (int64_t)(v7 & (char)(v4 / 256)) | v4 & 0xffff00ff) + v8 & 0xffffffff ^ 0xcc6d0cc3;
}

// Address range: 0x1bd8ec - 0x1bd8ed
int64_t function_1bd8ec(void) {
    // 0x1bd8ec
    int64_t result; // 0x1bd8ec
    return result;
}

// Address range: 0x1bd907 - 0x1bd908
int64_t function_1bd907(int64_t a1) {
    // 0x1bd907
    int64_t result; // 0x1bd907
    return result;
}

// Address range: 0x1bd91b - 0x1bd931
int64_t function_1bd91b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1bd91b
    int64_t v1; // 0x1bd91b
    __asm_out_133(-108, (char)v1);
    *(char *)-0x31d48fd2 = *(char *)-0x31d48fd2 + (char)(v1 / 256);
    __asm_out_134(-83, (int32_t)v1);
    return function_1bd8ec();
}

// Address range: 0x1bd936 - 0x1bd937
int64_t function_1bd936(void) {
    // 0x1bd936
    int64_t result; // 0x1bd936
    return result;
}

// Address range: 0x1bd952 - 0x1bd955
int64_t function_1bd952(void) {
    // 0x1bd952
    int64_t result; // 0x1bd952
    return result;
}

// Address range: 0x1bd975 - 0x1bd9a1
int64_t function_1bd975(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bd975
    int64_t v1; // 0x1bd975
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    int16_t v3 = v2; // 0x1bd97d
    int16_t v4 = v3 + (int16_t)&g4; // 0x1bd97d
    __asm_in_135((int16_t)a3);
    int64_t v5 = unknown_fffffffff0efc7e0(); // 0x1bd98c
    if (((v4 ^ v3) & (v4 ^ -0x8000)) < 0) {
        v5 = function_1bd936();
    }
    int64_t v6 = v5 + 0xc4006800; // 0x1bd98e
    char * v7 = (char *)(v6 & 0xffffffff); // 0x1bd995
    *v7 = *v7 | (char)v6;
    return __asm_int3(a2 + a1 & 0xffffffff);
}

// Address range: 0x1bd9c0 - 0x1bd9c1
int64_t function_1bd9c0(void) {
    // 0x1bd9c0
    int64_t result; // 0x1bd9c0
    return result;
}

// Address range: 0x419040 - 0x419047
int64_t function_419040(void) {
    // 0x419040
    __asm_in(-32);
    return function_ffffffffb42bd260();
}

// Address range: 0x419047 - 0x41904e
int64_t function_419047(int64_t a1, int64_t a2, int64_t a3) {
    // 0x419047
    int64_t v1; // 0x419047
    __asm_outsb((int16_t)a3, (char)v1);
    *(char *)(a3 + 38 + v1) = (char)(v1 / 256);
    return function_419061(a1, a2, a3, (int64_t)&g6);
}

// Address range: 0x419057 - 0x419061
int64_t function_419057(int64_t a1, int64_t a2, int64_t a3) {
    // 0x419057
    return a1 & 0xffffffff;
}

// Address range: 0x419061 - 0x41906c
int64_t function_419061(int64_t a1, int64_t a2, uint64_t a3, int64_t result) {
    // 0x419061
    int64_t v1; // 0x419061
    bool v2; // 0x419061
    __asm_in_136((int16_t)(256 * (v1 + a3 / 256 + (int64_t)v2) | a3 % 256));
    return result;
}

// Address range: 0x4190a8 - 0x4190ab
int64_t function_4190a8(int64_t a1) {
    // 0x4190a8
    int64_t result; // 0x4190a8
    return result;
}

// Address range: 0x4190d4 - 0x4190d7
int64_t function_4190d4(int64_t a1) {
    // 0x4190d4
    int64_t v1; // 0x4190d4
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)a1;
    return result;
}

// Address range: 0x4190d8 - 0x4190df
int64_t function_4190d8(void) {
    // 0x4190d8
    return function_6181473a();
}

// Address range: 0x4190fd - 0x419103
int64_t function_4190fd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4190fd
    int64_t result; // 0x4190fd
    __asm_out_133(-124, (char)result);
    return result;
}

// Address range: 0x419114 - 0x419117
int64_t function_419114(int64_t a1) {
    // 0x419114
    int64_t result; // 0x419114
    return result;
}

// Address range: 0x419152 - 0x419153
int64_t function_419152(void) {
    // 0x419152
    int64_t result; // 0x419152
    return result;
}

// Address range: 0x4191b1 - 0x4191b5
int64_t function_4191b1(int64_t a1) {
    // 0x4191b1
    int64_t result; // 0x4191b1
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x419240 - 0x419245
int64_t function_419240(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x419240
    int64_t result; // 0x419240
    bool v1; // 0x419240
    if (a4 != 1 && !v1) {
        result = function_41920c();
    }
    // 0x419243
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x41926e - 0x419281
int64_t function_41926e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41926e
    int64_t result; // 0x41926e
    return result;
}

// Address range: 0x4192b8 - 0x4192d0
int64_t function_4192b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4192b8
    int64_t result; // 0x4192b8
    bool v1; // 0x4192b8
    if (a4 != 1 && !v1) {
        result = function_41923d();
    }
    // 0x4192ba
    __writegsdword(0x6a13e2840265791b, (int32_t)result);
    int64_t v2; // 0x4192b8
    int32_t * v3 = (int32_t *)(v2 - 0x7401a8c2); // 0x4192c5
    *v3 = *v3 & (int32_t)a2;
    __asm_int(76);
    return result;
}

// Address range: 0x4192d2 - 0x41937b
int64_t function_4192d2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x4192d2
    int32_t * v3 = (int32_t *)(v2 + 45); // 0x4192d3
    int32_t v4 = *v3; // 0x4192d3
    *v3 = v4 == (int32_t)v2 ? (int32_t)a3 : v4;
    int32_t * v5 = (int32_t *)(a2 + 17); // 0x4192d7
    uint32_t v6 = *v5; // 0x4192d7
    uint32_t v7 = v6 + v4; // 0x4192d7
    *v5 = v7;
    unsigned char v8 = (char)a4 % 32; // 0x4192e9
    int64_t v9 = a4; // 0x4192e9
    bool v10 = v7 < v6; // 0x4192e9
    if (v8 != 0) {
        unsigned char v11 = (char)(a4 / 256); // 0x4192e9
        v9 = 256 * (int64_t)(v11 >> v8) | a4 & -0xff01;
        v10 = (1 << v8 - 1 & v11) != 0;
    }
    int64_t v12 = a3 - (256 * (int64_t)v10 + a3 & 0xff00) & 0xff00 | a3 & -0xff01; // 0x4192eb
    uint64_t v13 = v9 - 1; // 0x4192fa
    bool v14; // 0x4192d2
    if (v14 || v13 == 0) {
        int32_t v15 = *(int32_t *)0x1120be24453f5f5d; // 0x419301
        char v16 = v15; // 0x419311
        __asm_out_137((int16_t)v12, v16);
        *(char *)0x46500033 = v16;
        *(int64_t *)((v12 & 0xffffffff) - 8) = -71;
        return (int64_t)(v15 ^ 102 ^ *(int32_t *)&v1);
    }
    char * v17 = (char *)v12; // 0x41936d
    char v18 = v13 / 256; // 0x41936d
    *v17 = *v17 & v18;
    if (v18 + (char)(v2 / 256) >= 0) {
        // 0x419373
        return 0x9b0f3b63;
    }
    // 0x419333
    *(char *)0x464fffcb = *(char *)0x464fffcb / 2;
    return 0xbfdf7bf6;
}

// Address range: 0x4193a1 - 0x4193a5
int64_t function_4193a1(int64_t a1, int64_t a2) {
    // 0x4193a1
    return a1 & 0xffffffff;
}

// Address range: 0x4193f8 - 0x41942e
int64_t function_4193f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4193f8
    bool v1; // 0x4193f8
    if (!v1 != (a4 == 0 == v1)) {
        // 0x4193fd
        int64_t result; // 0x4193f8
        return result;
    }
    // 0x419414
    abort();
    // UNREACHABLE
}

// Address range: 0x41942f - 0x419433
int64_t function_41942f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41942f
    int64_t result; // 0x41942f
    return result;
}
