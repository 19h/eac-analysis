/*
 * Targeted RetDec C for native executable gap queue batch 489.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x228a66-0x228c66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x228c66-0x228e66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x228e66-0x229066 rank=- name=- kind=- bytes=- uncovered=-
 *   0x261cc2-0x261ec2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x261ec2-0x2620c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2620c2-0x2622c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2622c2-0x2624c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2624c2-0x2626c2 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_163aeb76();
int64_t function_1a2476c0();
int64_t function_228a66(void);
int64_t function_228a83(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_228b77(int64_t a1);
int64_t function_228b86(void);
int64_t function_228bc1(int64_t a1);
int64_t function_228bcc(void);
int64_t function_228c00(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_228c48(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_228e01(int64_t a1);
int64_t function_228e0e(int64_t a1, int64_t a2);
int64_t function_228e15(void);
int64_t function_228e1a(void);
int64_t function_228e2f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_228e7b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_228eab(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_228ece(void);
int64_t function_228ed0(void);
int64_t function_228ed3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_228ed8(void);
int64_t function_228eda(int64_t a1);
int64_t function_228eeb(int64_t a1);
int64_t function_228ef2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_228fdc(void);
int64_t function_228feb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_229028(void);
int64_t function_261cc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_261d9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_261ed2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2620a9(void);
int64_t function_2620da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2620e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_262130(void);
int64_t function_262253(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_262351(int64_t a1, int64_t a2);
int64_t function_26238e(int64_t a1, int64_t a2);
int64_t function_2623cc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2623d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_262403(int64_t a1);
int64_t function_262431(void);
int64_t function_26244b(int64_t a1);
int64_t function_262452(int64_t a1);
int64_t function_262460(void);
int64_t function_262506(int64_t a1);
int64_t function_262537(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_262567(int64_t a1, int64_t a2, int64_t a3);
int64_t function_262578(int64_t a1);
int64_t function_26257c(void);
int64_t function_2625d8(void);
int64_t function_26262c(int64_t a1);
int64_t function_262632(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_262640(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_262662(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_262663(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_26268c(void);
int64_t function_2f52c444();
int64_t function_8d97ae1();
int64_t function_caf2a();
int64_t function_ffffffff9e20cd10();
int64_t function_ffffffffa0280db7();
int64_t function_fffffffffef30f9d();
int64_t unknown_2c6949db();
int64_t unknown_30c42fe6();
int64_t unknown_4c8226da();
int64_t unknown_50ee2dee();
int64_t unknown_51649af4();
int64_t unknown_568c56f3();
int64_t unknown_61d006c();
int64_t unknown_796d71d2();
int64_t unknown_7ab5c7c1();
int64_t unknown_7c443214();
int64_t unknown_ffffffff8218e428();
int64_t unknown_ffffffff850b4640();
int64_t unknown_ffffffff962893c4();
int64_t unknown_ffffffff9a174c2b();
int64_t unknown_ffffffff9e223a59();
int64_t unknown_ffffffffa1ee6f0d();
int64_t unknown_ffffffffa62accd7();
int64_t unknown_ffffffffc3ed3ce7();
int64_t unknown_ffffffffc76da758();
int64_t unknown_ffffffffcc5b3835();
int64_t unknown_ffffffffceac9f82();
int64_t unknown_ffffffffd3b86135();
int64_t unknown_fffffffff2bce869();

// Address range: 0x228a66 - 0x228a81
int64_t function_228a66(void) {
    // 0x228a66
    unknown_61d006c();
    int64_t v1 = __asm_sti(); // 0x228a74
    return (int64_t)(*(int32_t *)v1 + (int32_t)v1);
}

// Address range: 0x228a83 - 0x228b0b
int64_t function_228a83(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = a1; // 0x228a87
    int32_t v2 = a2; // 0x228a87
    int32_t v3 = v2 + v1; // 0x228a87
    int64_t result; // 0x228a83
    if (v3 < 0 != ((v3 ^ v1) & (v3 ^ v2)) < 0) {
        // 0x228a8b
        __asm_int(96);
        return a4 + 0x3b2ffec4 + result & 0xffffffff;
    }
    int32_t * v4 = (int32_t *)(a3 - 0x4c854f3); // 0x228b03
    *v4 = *v4 >> 1;
    return result;
}

// Address range: 0x228b77 - 0x228b80
int64_t function_228b77(int64_t a1) {
    // 0x228b77
    int64_t result; // 0x228b77
    return result;
}

// Address range: 0x228b86 - 0x228b8d
int64_t function_228b86(void) {
    // 0x228b86
    int64_t v1; // 0x228b86
    uint64_t result = v1;
    *(char *)result = (char)(result / 256) + (char)result;
    return result;
}

// Address range: 0x228bc1 - 0x228bc2
int64_t function_228bc1(int64_t a1) {
    // 0x228bc1
    int64_t result; // 0x228bc1
    return result;
}

// Address range: 0x228bcc - 0x228bdc
int64_t function_228bcc(void) {
    // 0x228bcc
    int64_t v1; // 0x228bcc
    *(char *)0x3664139c305417c8 = (char)v1;
    return 0x10000 * (int32_t)unknown_2c6949db() >> 16;
}

// Address range: 0x228c00 - 0x228c35
int64_t function_228c00(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a3 >> 32; // 0x228c00
    int64_t v2 = 0x7c01e870 * v1; // 0x228c00
    int64_t v3 = v2 & 0xfffffff0; // 0x228c00
    int64_t * v4 = (int64_t *)(v3 - 8); // 0x228c06
    *v4 = a2;
    uint32_t v5 = (int32_t)a4 % 32; // 0x228c07
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)(a2 + 0x1e8073f + v3); // 0x228c07
        uint32_t v7 = *v6; // 0x228c07
        *v6 = v7 >> v5 | (int32_t)(v2 != 0x7c01e87000000000 * v1 >> 32) << 32 - v5 | (int32_t)((int64_t)v7 << (int64_t)(33 - v5));
    }
    int64_t v8 = unknown_ffffffff8218e428(); // 0x228c22
    char * v9 = (char *)(a4 + 7); // 0x228c29
    int64_t v10; // 0x228c00
    *v9 = *v9 + (0x10000 * (int32_t)v10 >> 16 > 0xab1eff76 ? -100 : -101);
    *v4 = v8;
    return unknown_ffffffffcc5b3835();
}

// Address range: 0x228c48 - 0x228ddf
int64_t function_228c48(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x228c48
    int64_t v1; // 0x228c48
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x228c48
    int64_t v3 = (v2 ? -4 : 4) + a1; // 0x228c48
    char * v4 = (char *)(v1 - 0x6bff6700); // 0x228c49
    char v5 = v1 / 256; // 0x228c49
    *v4 = *v4 + v5;
    *(int32_t *)v3 = __asm_insd((int16_t)a3);
    int32_t v6 = *(int32_t *)(a4 + 6) + (int32_t)v3; // 0x228cbd
    int32_t * v7 = (int32_t *)(v1 - 0x752ea399); // 0x228cc3
    *v7 = *v7 + v6;
    unsigned char v8 = (char)v6; // 0x228cc9
    unsigned char v9 = *(char *)(8 * a3 + 0x51e10013 + v1); // 0x228cc9
    int64_t v10 = (int64_t)(v8 - v9) | (int64_t)(v6 & -256); // 0x228cc9
    int64_t result = unknown_ffffffffa62accd7(v10); // 0x228cd1
    if (v9 <= v8) {
        int64_t v11 = unknown_30c42fe6(); // 0x228ce0
        float80_t v12; // 0x228c48
        *(float32_t *)(v1 + 6) = (float32_t)v12;
        return (int64_t)(*(int32_t *)v10 | (int32_t)v11);
    }
    char v13 = *(char *)0x7ce77c5d + v5; // 0x228d56
    unsigned char v14 = llvm_ctpop_i8(v13); // 0x228d56
    *(char *)0x7ce77c5d = v13;
    if (v14 % 2 != 0) {
        // 0x228dd8
        return result;
    }
    int64_t v15 = unknown_fffffffff2bce869(); // 0x228d62
    int64_t v16 = v15 & -198; // 0x228d6a
    int32_t v17 = v16; // 0x228d6c
    __asm_out(1, v17);
    __asm_psllq(v1, a3);
    __asm_out(-101, v17);
    return v16 + 190 & 254 | v15 & -256;
}

// Address range: 0x228e01 - 0x228e0b
int64_t function_228e01(int64_t a1) {
    // 0x228e01
    return __asm_wait();
}

// Address range: 0x228e0e - 0x228e15
int64_t function_228e0e(int64_t a1, int64_t a2) {
    // 0x228e0e
    int64_t v1; // 0x228e0e
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a2;
    return function_ffffffff9e20cd10();
}

// Address range: 0x228e15 - 0x228e16
int64_t function_228e15(void) {
    // 0x228e15
    int64_t result; // 0x228e15
    return result;
}

// Address range: 0x228e1a - 0x228e1c
int64_t function_228e1a(void) {
    // 0x228e1a
    return function_228e15();
}

// Address range: 0x228e2f - 0x228e52
int64_t function_228e2f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x228e2f
    int64_t v1; // 0x228e2f
    *(int32_t *)0x48af0873 = *(int32_t *)0x48af0873 + (int32_t)v1;
    int32_t * v2 = (int32_t *)((v1 + 0xe8ce623a & 0xffffffff ^ 114) + 0x7dc8c20a); // 0x228e45
    *v2 = (int32_t)v1 - 0x17192e1f + *v2;
    return function_1a2476c0();
}

// Address range: 0x228e7b - 0x228e85
int64_t function_228e7b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x228e7b
    int64_t result; // 0x228e7b
    char * v1 = (char *)result; // 0x228e81
    *v1 = *v1 + 60;
    return result;
}

// Address range: 0x228eab - 0x228eac
int64_t function_228eab(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x228eab
    int64_t result; // 0x228eab
    return result;
}

// Address range: 0x228ece - 0x228ed0
int64_t function_228ece(void) {
    // 0x228ece
    int64_t v1; // 0x228ece
    return function_228eab(v1, v1, v1, v1);
}

// Address range: 0x228ed0 - 0x228ed3
int64_t function_228ed0(void) {
    // 0x228ed0
    return __asm_int3();
}

// Address range: 0x228ed3 - 0x228ed5
int64_t function_228ed3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x228ed3
    int64_t result; // 0x228ed3
    bool v1; // 0x228ed3
    if (a4 != 1 && !v1) {
        result = function_228eab(a1, a2, a3, a4);
    }
    // 0x228ed5
    return result;
}

// Address range: 0x228ed8 - 0x228ed9
int64_t function_228ed8(void) {
    // 0x228ed8
    int64_t result; // 0x228ed8
    return result;
}

// Address range: 0x228eda - 0x228edb
int64_t function_228eda(int64_t a1) {
    // 0x228eda
    int64_t result; // 0x228eda
    return result;
}

// Address range: 0x228eeb - 0x228ef1
int64_t function_228eeb(int64_t a1) {
    // 0x228eeb
    return unknown_51649af4(a1);
}

// Address range: 0x228ef2 - 0x228fc8
int64_t function_228ef2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    char v1 = *(char *)(a2 - 0x37acfe18); // 0x228ef2
    int32_t * v2 = (int32_t *)(a3 & -256 | (int64_t)(v1 & (char)a3)); // 0x228efa
    *v2 = *v2 + 0x1c9c5894;
    int64_t v3; // 0x228ef2
    int32_t * v4 = (int32_t *)(v3 + 0x132ac1bcc); // 0x228f14
    *v4 = *v4 & 112;
    int32_t * v5 = (int32_t *)(v3 - 86); // 0x228f22
    *v5 = *v5 - 0x17e013c2;
    int64_t v6 = v3 + 0x9d85d12; // 0x228f28
    int64_t v7 = 256 * v6 & 0xff00 | a4 & -0xff01; // 0x228f2d
    int32_t * v8 = (int32_t *)(v7 + 0x3a1a0bf5); // 0x228f2f
    uint32_t v9 = *v8 + 0x1e84674; // 0x228f2f
    *v8 = v9;
    if (v9 >= 1) {
        // 0x228f37
        return v6 & 0xffffff00 | a4 / 256 % 256;
    }
    uint32_t v10 = (int32_t)a4 % 32; // 0x228faa
    if (v10 != 0) {
        int32_t * v11 = (int32_t *)((v3 & 0xcef56ab2) + 58); // 0x228faa
        *v11 = *v11 << v10;
    }
    bool v12; // 0x228ef2
    int64_t v13 = v12 ? 0x1e84673 : 0x1e84675; // 0x228f9c
    int32_t * v14 = (int32_t *)v7; // 0x228fb5
    uint32_t v15 = *v14; // 0x228fb5
    *v14 = v15 - 0x17e013c2;
    int64_t v16; // 0x228ef2
    unsigned char v17 = *(char *)&v16; // 0x228fb7
    unsigned char v18 = (char)a5; // 0x228fb7
    char v19 = v15 > 0x17e013c1; // 0x228fb7
    unsigned char v20 = v17 + v18; // 0x228fb7
    char v21 = v20 + v19; // 0x228fb7
    char v22 = v21 + v19; // 0x228fb7
    unsigned char v23 = llvm_ctpop_i8(v21); // 0x228fb7
    bool v24 = v15 > 0x17e013c1 ? v21 <= v17 : v20 < v17; // 0x228fb7
    *(char *)v16 = v21;
    int64_t result = unknown_7ab5c7c1(v13); // 0x228fba
    *(int64_t *)0xe81fec36 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | (int64_t)v24 | 64 * (int64_t)(v21 == 0) | 128 * (int64_t)(v21 < 0) | 16 * (int64_t)(v18 % 16 + v19 + v17 % 16 > 15) | 4 * (int64_t)(v23 % 2 == 0) | 2048 * (int64_t)(((v22 ^ v17) & (v22 ^ v18)) < 0) | 2;
    int64_t v25; // 0x228ef2
    __asm_outsb((int16_t)(*(int32_t *)0x18b32677ef3419a8 >> 31), *(char *)&v25);
    char * v26 = (char *)(v13 + 0x1e8e69c); // 0x228fc2
    *v26 = (char)v24 + (char)v3 + *v26;
    return result;
}

// Address range: 0x228fdc - 0x228fdd
int64_t function_228fdc(void) {
    // 0x228fdc
    int64_t result; // 0x228fdc
    return result;
}

// Address range: 0x228feb - 0x229026
int64_t function_228feb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x228feb
    unknown_568c56f3();
    __asm_sti();
    bool v1; // 0x228feb
    if (v1) {
        function_228fdc();
    }
    // 0x228ff5
    *(int32_t *)a4 = (int32_t)a4 + (int32_t)a3;
    __asm_int(106);
    int64_t v2 = unknown_7c443214() + 0x55190013; // 0x229013
    int64_t result = v2 & 0xffffffff; // 0x229013
    int32_t * v3 = (int32_t *)(result + 0x30b0a4f5); // 0x22901a
    *v3 = *v3 + (int32_t)v2;
    return result;
}

// Address range: 0x229028 - 0x22902d
int64_t function_229028(void) {
    // 0x229028
    return function_8d97ae1();
}

// Address range: 0x261cc2 - 0x261d9a
int64_t function_261cc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x261cc2
    int64_t v1; // 0x261cc2
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x261cc2
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return function_caf2a(a1, a2, a3, a4, v1, a7, v1);
}

// Address range: 0x261d9a - 0x261ed2
int64_t function_261d9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x261d9a
    int64_t v1; // 0x261d9a
    return function_caf2a(a1, a2, a3, v1, v1, v1, 0x4f6180e8);
}

// Address range: 0x261ed2 - 0x2620a9
int64_t function_261ed2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t * v1 = (int64_t *)(a3 + 16); // 0x262004
    int64_t v2 = *v1; // 0x262004
    int64_t * v3 = (int64_t *)(a3 - 8); // 0x262004
    *v3 = v2;
    int64_t * v4 = (int64_t *)(a3 - 16); // 0x26200c
    *v4 = a7;
    int64_t * v5 = (int64_t *)(a3 - 24); // 0x26200d
    *v4 = a1;
    *v5 = a5;
    int64_t * v6 = (int64_t *)(a3 - 32); // 0x26202f
    *v6 = *v4;
    int64_t v7 = *v6; // 0x262043
    *v6 = v7 - 0x7fefb56d;
    *(int64_t *)(a3 + 8) = v7;
    *v4 = 0x76ec946;
    *v5 = v2;
    *v1 = *v4;
    int64_t v8 = *v3; // 0x26206f
    *v4 = v8;
    *v5 = v8;
    int64_t v9 = *(int64_t *)a3; // 0x262088
    *v3 = v9;
    *v4 = v9;
    int64_t v10; // bp-24, 0x261ed2
    return function_caf2a(*v4, a2, a3, a4, *v5, a6, (int64_t)&v10);
}

// Address range: 0x2620a9 - 0x2620ae
int64_t function_2620a9(void) {
    // 0x2620a9
    int64_t result; // 0x2620a9
    return result;
}

// Address range: 0x2620da - 0x2620e9
int64_t function_2620da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2620da
    return unknown_ffffffffc3ed3ce7();
}

// Address range: 0x2620e9 - 0x26211a
int64_t function_2620e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2620e9
    int64_t v1; // 0x2620e9
    __asm_out(42, (int32_t)v1);
    int32_t * v2 = (int32_t *)(v1 - 0x5f33824a); // 0x262104
    *v2 = *v2 - 0x6fba85e4;
    uint16_t v3 = (int16_t)v1; // 0x26210e
    uint16_t v4 = (int16_t)*(char *)(v1 + 8 * v1); // 0x26210e
    uint16_t v5 = v3 / v4; // 0x26210e
    int64_t result = v1 & -0x10000 | (int64_t)(v5 % 256) | (int64_t)(256 * (v3 % v4)); // 0x26210e
    int32_t * v6 = (int32_t *)(a1 + 0x10dea79e); // 0x262111
    *v6 = *v6 + (int32_t)a1;
    char * v7 = (char *)(8 * result + (a4 & -256 | 144)); // 0x262117
    *v7 = *v7 | (char)v5;
    return result;
}

// Address range: 0x262130 - 0x262133
int64_t function_262130(void) {
    // 0x262130
    int64_t result; // 0x262130
    return result;
}

// Address range: 0x262253 - 0x26232a
int64_t function_262253(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2; // 0x262253
    int64_t v3 = v2 & -256 | (int64_t)__asm_in_133(-57); // 0x2622ce
    int64_t v4; // 0x262253
    int64_t v5; // 0x262253
    bool v6; // 0x262253
    if (v6) {
        if (!v6) {
            // 0x26226b
            return v3 & 0xffffffff ^ 0xe8af353e;
        }
        // 0x2622bc
        v4 = unknown_ffffffff962893c4();
        v5 = a1;
    } else {
        // 0x2622d3
        __asm_out_134((int16_t)a3, (int32_t)v3);
        int64_t v7 = unknown_4c8226da(); // 0x2622d4
        *(int32_t *)a3 = (int32_t)a3 + (int32_t)a1;
        int64_t v8 = v6 ? -1 : 1; // 0x2622e0
        int64_t v9 = v8 + a1; // 0x2622e0
        char v10 = *(char *)&v1 + (char)v7; // 0x2622e1
        *(char *)v1 = v10;
        uint64_t v11 = a4 - 1; // 0x2622e3
        if (v11 != 0 != (v10 == 0)) {
            uint64_t v12 = unknown_50ee2dee(v9, v8 + a2); // 0x2622e8
            char * v13 = (char *)(v12 + 0x3641800); // 0x2622ee
            *v13 = *v13 + (char)v12;
            char * v14 = (char *)(v2 + 0x7201e800); // 0x2622f5
            *v14 = *v14 + (char)(v12 / 256);
            char * v15 = (char *)(v2 + 0x3aac8c67); // 0x2622fb
            *v15 = *v15 + (char)(v11 / 256);
            int64_t v16 = v9 + v8; // 0x262302
            __asm_iretd(v16);
            int64_t v17 = unknown_ffffffffa1ee6f0d(); // 0x262307
            int64_t v18 = (int64_t)((int32_t)v12 >> 31 & -0xff01) | (int64_t)&g2; // 0x26230c
            int32_t * v19 = (int32_t *)(v17 - 0x2f00b04f); // 0x26230e
            *v19 = *v19 | (int32_t)v18;
            __asm_sti();
            *(char *)(v18 + v16) = (char)((int32_t)v17 <= 0x1c8728e4);
            return unknown_ffffffff9a174c2b();
        }
        int64_t result = unknown_ffffffff962893c4(); // 0x2622bc
        v4 = result;
        v5 = v9;
        if (v10 != 0) {
            // 0x262338
            return result;
        }
    }
    int32_t * v20 = (int32_t *)(v2 + 100); // 0x2622ca
    *v20 = *v20 + (int32_t)v5;
    return v4 - v2 & 0xffffffff;
}

// Address range: 0x262351 - 0x262359
int64_t function_262351(int64_t a1, int64_t a2) {
    // 0x262351
    int64_t v1; // 0x262351
    *(char *)a1 = (char)v1;
    bool v2; // 0x262351
    return unknown_ffffffffc76da758((v2 ? -1 : 1) + a1);
}

// Address range: 0x26238e - 0x262390
int64_t function_26238e(int64_t a1, int64_t a2) {
    // 0x26238e
    int64_t result; // 0x26238e
    return result;
}

// Address range: 0x2623cc - 0x2623d6
int64_t function_2623cc(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_796d71d2(a1, a2, a3); // 0x2623cc
    char * v1 = (char *)result; // 0x2623d1
    *v1 = *v1 + (char)a3;
    return result;
}

// Address range: 0x2623d8 - 0x2623e1
int64_t function_2623d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2623d8
    int64_t v1; // 0x2623d8
    bool v2; // 0x2623d8
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x262403 - 0x262404
int64_t function_262403(int64_t a1) {
    // 0x262403
    int64_t result; // 0x262403
    return result;
}

// Address range: 0x262431 - 0x262433
int64_t function_262431(void) {
    // 0x262431
    return __asm_sti();
}

// Address range: 0x26244b - 0x262450
int64_t function_26244b(int64_t a1) {
    // 0x26244b
    int64_t result; // 0x26244b
    return result;
}

// Address range: 0x262452 - 0x262460
int64_t function_262452(int64_t a1) {
    // 0x262452
    int64_t v1; // 0x262452
    int32_t * v2 = (int32_t *)(v1 + 62); // 0x262452
    *v2 = *v2 + (int32_t)a1;
    return function_163aeb76();
}

// Address range: 0x262460 - 0x262465
int64_t function_262460(void) {
    // 0x262460
    return function_fffffffffef30f9d();
}

// Address range: 0x262506 - 0x262509
int64_t function_262506(int64_t a1) {
    // 0x262506
    int64_t result; // 0x262506
    return result;
}

// Address range: 0x262537 - 0x262563
int64_t function_262537(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char * v1 = (char *)(a4 - 12); // 0x262537
    int64_t v2; // 0x262537
    *v1 = *v1 + (char)((uint64_t)v2 / 256);
    return unknown_ffffffff850b4640();
}

// Address range: 0x262567 - 0x262574
int64_t function_262567(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = (int32_t)a1; // 0x262567
    int64_t v2; // 0x262567
    uint32_t v3 = (int32_t)v2 + v1; // 0x262567
    char * v4 = (char *)(a3 - 0x7eb2f26b); // 0x262569
    *v4 = *v4 + (char)((uint64_t)v2 / 256) + (char)(v3 < v1);
    return function_ffffffffa0280db7(v3);
}

// Address range: 0x262578 - 0x262579
int64_t function_262578(int64_t a1) {
    // 0x262578
    int64_t result; // 0x262578
    return result;
}

// Address range: 0x26257c - 0x2625bf
int64_t function_26257c(void) {
    struct eac_retdec_cpuid_regs v1; // 0x2625a1
    int64_t v2 = unknown_ffffffffceac9f82() + 0xe8a40580 & 0xffffffff; // 0x262581
    int64_t v3; // 0x26257c
    int32_t * v4 = (int32_t *)(v3 + 85); // 0x262586
    uint32_t v5 = *v4; // 0x262586
    int64_t v6; // 0x26257c
    int32_t v7 = v6; // 0x262586
    uint32_t v8 = v5 + v7; // 0x262586
    *v4 = v8;
    int16_t v9 = v3; // 0x262589
    int64_t v10; // 0x26257c
    *(char *)v10 = __asm_insb(v9);
    int64_t v11 = v2 & 0xffffffff; // 0x26258a
    *(int32_t *)v10 = v7;
    bool v12; // 0x26257c
    int64_t v13 = v10 + (v12 ? -4 : 4); // 0x26258b
    char v14 = *(char *)-0x17662053; // 0x26258c
    int64_t v15; // 0x26257c
    *(char *)-0x17662053 = (char)(v8 < v5) - (char)v15 + v14;
    int64_t v16; // 0x26257c
    *(int32_t *)v16 = *(int32_t *)&v16 + (int32_t)v3;
    unsigned char v17 = (char)v3; // 0x262596
    unsigned char v18 = (char)(v16 / 256); // 0x262596
    char v19 = v17 - v18; // 0x262596
    unsigned char v20 = llvm_ctpop_i8(v19); // 0x262596
    __asm_outsd(v9, *(int32_t *)v11);
    v2 = v6 & 0xffff00ff | 256 * (64 * (int64_t)(v19 == 0) | (int64_t)(v17 < v18) | 128 * (int64_t)(v19 < 0) | 16 * (int64_t)(v17 % 16 - v18 % 16 > 15) | 4 * (int64_t)(v20 % 2 == 0)) | 512;
    int64_t v21 = -4; // 0x26259c
    v3 = *(int64_t *)(v15 + 8);
    v15 += 16;
    v6 = v11;
    while (v19 >= 0) {
        // 0x262586
        v4 = (int32_t *)(v3 + 85);
        v5 = *v4;
        v7 = v6;
        v8 = v5 + v7;
        *v4 = v8;
        v9 = v3;
        *(char *)v13 = __asm_insb(v9);
        v11 = v2 & 0xffffffff;
        *(int32_t *)v13 = v7;
        v13 += v21;
        v14 = *(char *)-0x17662053;
        *(char *)-0x17662053 = (char)(v8 < v5) - (char)v15 + v14;
        *(int32_t *)v16 = *(int32_t *)&v16 + (int32_t)v3;
        v17 = (char)v3;
        v18 = (char)(v16 / 256);
        v19 = v17 - v18;
        v20 = llvm_ctpop_i8(v19);
        __asm_outsd(v9, *(int32_t *)v11);
        v2 = v6 & 0xffff00ff | 256 * (64 * (int64_t)(v19 == 0) | (int64_t)(v17 < v18) | 128 * (int64_t)(v19 < 0) | 16 * (int64_t)(v17 % 16 - v18 % 16 > 15) | 4 * (int64_t)(v20 % 2 == 0)) | 512;
        v21 = -4;
        v3 = *(int64_t *)(v15 + 8);
        v15 += 16;
        v6 = v11;
    }
    int32_t * v22 = (int32_t *)(v13 - 85); // 0x26259e
    int32_t v23 = v2; // 0x26259e
    *v22 = *v22 + v23;
    v1 = __asm_cpuid(v23);
    uint32_t result = v1.e0; // 0x2625a1
    uint32_t v24 = v1.e2; // 0x2625a1
    *(char *)-0x170984d0 = *(char *)-0x170984d0 | (char)result;
    int32_t * v25 = (int32_t *)(v13 + 0x4d5cb66b); // 0x2625a9
    *v25 = *v25 + v1.e3;
    int32_t * v26 = (int32_t *)((int64_t)v24 + 0x5c0111d); // 0x2625b5
    *v26 = *v26 | v24;
    *(int32_t *)v13 = result;
    return result;
}

// Address range: 0x2625d8 - 0x2625e2
int64_t function_2625d8(void) {
    // 0x2625d8
    return function_2f52c444();
}

// Address range: 0x26262c - 0x262632
int64_t function_26262c(int64_t a1) {
    // 0x26262c
    return unknown_ffffffffd3b86135(a1);
}

// Address range: 0x262632 - 0x262640
int64_t function_262632(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x262632
    int64_t v1; // 0x262632
    int64_t v2 = v1;
    int64_t v3 = 2 * ((v2 + a4 / 256) % 256 | v2 & 0x7fffffffffffff00) + v1; // 0x262636
    int64_t result = (v3 | a3 / 256) % 256 | v3 & 0xffffff00; // 0x262638
    char * v4 = (char *)result; // 0x26263c
    *v4 = *v4 & -78;
    return result;
}

// Address range: 0x262640 - 0x262660
int64_t function_262640(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x262640
    int64_t v1; // 0x262640
    int64_t v2 = v1;
    char v3 = a3; // 0x26264e
    *(char *)v2 = (char)v2 + v3;
    char * v4 = (char *)((a2 & 0xffffffff) + 17); // 0x262650
    *v4 = *v4 + v3;
    int32_t * v5 = (int32_t *)(unknown_ffffffff9e223a59() + 15); // 0x262658
    *v5 = *v5 + (int32_t)a1;
    int64_t result = function_262663(a1, v1 + 0xf6fe17ee & 0xffffffff, a3, a4 & -0xff01 | (int64_t)&g3, v1, v1); // 0x26265e
    return result;
}

// Address range: 0x262662 - 0x262663
int64_t function_262662(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x262662
    int64_t result; // 0x262662
    return result;
}

// Address range: 0x262663 - 0x262684
int64_t function_262663(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x262663
    int64_t v1; // 0x262663
    uint64_t v2 = v1;
    int64_t v3 = v2 % 256 * (int64_t)*(char *)(v2 - 121); // 0x262663
    __asm_out_135((int16_t)a3, (char)v3);
    int64_t result = 2 * a4 & 0xfe00 | a4 & 0xffff0000 | ((uint64_t)v1 / 256 + a4) % 256; // 0x26267a
    char * v4 = (char *)result; // 0x26267c
    char v5 = *v4; // 0x26267c
    *v4 = v5 | (char)(((int16_t)v3 + 0x33bb) % ((int16_t)(a3 / 256) % 256));
    return result;
}

// Address range: 0x26268c - 0x262692
int64_t function_26268c(void) {
    // 0x26268c
    int64_t result; // 0x26268c
    return result;
}
