/*
 * Targeted RetDec C for native executable gap queue batch 1167.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1aec5a-0x1aee5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1aee5a-0x1af05a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1af25a-0x1af45a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1af45a-0x1af65a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1af85a-0x1afa5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1afa5a-0x1afc5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x246c18-0x246e18 rank=- name=- kind=- bytes=- uncovered=-
 *   0x246e18-0x247018 rank=- name=- kind=- bytes=- uncovered=-
 *   0x533aac-0x533cac rank=- name=- kind=- bytes=- uncovered=-
 *   0x533cac-0x533eac rank=- name=- kind=- bytes=- uncovered=-
 *   0x533eac-0x5340ac rank=- name=- kind=- bytes=- uncovered=-
 *   0x5340ac-0x5342ac rank=- name=- kind=- bytes=- uncovered=-
 *   0x5342ac-0x5344ac rank=- name=- kind=- bytes=- uncovered=-
 *   0x5344ac-0x5346ac rank=- name=- kind=- bytes=- uncovered=-
 *   0x5346ac-0x5348ac rank=- name=- kind=- bytes=- uncovered=-
 *   0x5348ac-0x534aac rank=- name=- kind=- bytes=- uncovered=-
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
int64_t __asm_fnstenv();
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

int64_t function_1aec5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1aecae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1aedec(void);
int64_t function_1aedfd(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1aee21(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1aee76(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1aef2c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1aef5b(int64_t a1);
int64_t function_1aefc9(void);
int64_t function_1aefd1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1af25a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1af332(void);
int64_t function_1af377(void);
int64_t function_1af396(void);
int64_t function_1af3ac(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1af3ef(void);
int64_t function_1af405(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1af4c5(void);
int64_t function_1af4fe(void);
int64_t function_1af547(int64_t a1);
int64_t function_1af54a(void);
int64_t function_1af56f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1af5b2(int64_t a1);
int64_t function_1af642(int64_t a1);
int64_t function_1af85a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1af865(int64_t a1, int64_t a2);
int64_t function_1af90b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1af93c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1af94c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1af94e(void);
int64_t function_1af95c(void);
int64_t function_1af9d1(int64_t a1, int64_t a2);
int64_t function_1af9e1(int64_t a1, int64_t a2);
int64_t function_1afa02(void);
int64_t function_1afa4a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1afb08(void);
int64_t function_1afb35(void);
int64_t function_1afb64(void);
int64_t function_1afb86(void);
int64_t function_1afb90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1afc33(void);
int64_t function_1fd40();
int64_t function_20540();
int64_t function_20a50();
int64_t function_246c18(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_246c61(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_246dbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_246f3a(void);
int64_t function_246fad(int64_t a1, int64_t a2);
int64_t function_246faf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_533642();
int64_t function_5336c9();
int64_t function_533aac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, char a10);
int64_t function_5344dc(void);
int64_t function_5344fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_566390();
int64_t function_cf3c7();
int64_t function_ffffffffa4d31ff4();
int64_t function_ffffffffaeb81c5a();
int64_t function_ffffffffcead4ef6();
int64_t function_ffffffffe0e4f5a2();
int64_t unknown_104f6483();
int64_t unknown_14248722();
int64_t unknown_19108d58();
int64_t unknown_1b7b992c();
int64_t unknown_27df064b();
int64_t unknown_2a6ea08c();
int64_t unknown_2ac1d662();
int64_t unknown_3a257c21();
int64_t unknown_3abb8f4b();
int64_t unknown_4e12186b();
int64_t unknown_ffffffff8820d61b();
int64_t unknown_ffffffffa022600b();
int64_t unknown_ffffffffb10bcd67();
int64_t unknown_ffffffffb4a868d0();
int64_t unknown_ffffffffb55fb96f();
int64_t unknown_ffffffffbd1c4fbd();
int64_t unknown_ffffffffc55cf4d7();
int64_t unknown_ffffffffd3936799();
int64_t unknown_ffffffffe9138f04();
int64_t unknown_ffffffffea46be39();
int64_t unknown_ffffffffff0eda42();

// Address range: 0x1aec5a - 0x1aec6c
int64_t function_1aec5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x1aec5f
    if (v1 != 0) {
        int64_t v2; // 0x1aec5a
        uint32_t v3 = (int32_t)v2;
        *(int32_t *)v2 = v3 >> 32 - v1 | v3 << v1;
    }
    return unknown_ffffffffb10bcd67();
}

// Address range: 0x1aecae - 0x1aedd6
int64_t function_1aecae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1aecae
    int64_t v1; // 0x1aecae
    uint64_t v2 = v1;
    int64_t v3 = a2;
    int32_t * v4 = (int32_t *)(a1 + 0x2bf11f5e); // 0x1aecbc
    int32_t v5 = *v4 - (int32_t)v1; // 0x1aecbc
    *v4 = v5;
    unsigned char v6 = *(char *)&v3; // 0x1aecfa
    bool v7; // 0x1aecae
    v3 += (v7 ? -1 : 1);
    if (v5 != 0) {
        // 0x1aecf4
        return (int64_t)v6 | (int64_t)(*(int32_t *)0x13d000a005f1221 & -256);
    }
    int64_t v8 = unknown_ffffffffe9138f04(); // 0x1aecfe
    int32_t v9 = a1;
    *(int32_t *)0x5edac70a = *(int32_t *)0x5edac70a + v9;
    int64_t v10 = a3; // bp-24, 0x1aed0f
    int64_t v11 = (int64_t)&v10; // 0x1aed0f
    *(int32_t *)a3 = (int32_t)a3 + v9;
    char * v12 = (char *)(v11 - 0x6dd1fc28 + 8 * ((v8 + 24) % 256 | v8 & 0x1fffffffffffff00)); // 0x1aed14
    *v12 = *v12 + 1;
    int64_t v13 = unknown_14248722(); // 0x1aed1b
    int32_t * v14 = (int32_t *)(v1 - 108); // 0x1aed29
    *v14 = (int32_t)v13;
    int32_t v15 = v3;
    int64_t v16 = (int64_t)(*v14 + v15); // 0x1aed35
    int64_t v17 = v3; // bp-32, 0x1aed38
    int32_t * v18 = (int32_t *)v3;
    *v18 = *v18 + v15;
    v3 = 0x1a280c8;
    uint32_t v19 = (int32_t)v1 ^ 0x2a01e8af; // 0x1aed44
    int64_t v20; // 0x1aecae
    int32_t v21; // 0x1aecae
    int64_t v22; // 0x1aecae
    int32_t * v23; // 0x1aecae
    int64_t v24; // 0x1aecae
    int64_t v25; // 0x1aecae
    int64_t v26; // 0x1aecae
    if (llvm_ctpop_i8((char)v19) % 2 == 0) {
        int64_t v27 = a5 & 0xffffffff; // 0x1aed37
        v20 = v27 / 256;
        v21 = v9;
        v24 = v27;
        v23 = (int32_t *)((v2 & -256) - 108);
        v26 = (int64_t)&v17;
        v22 = v19;
        v25 = a1;
    } else {
        // 0x1aed4c
        v3 = 0x1a280cc;
        *(char *)0x1a280cc = (char)a5;
        __asm_out_134(10, (int32_t)a5);
        char v28 = *(char *)0xaa2ef4a; // 0x1aed5c
        int32_t v29 = *(int32_t *)(v16 + 0x70dd0d78); // 0x1aed63
        int64_t result = unknown_ffffffffb55fb96f(); // 0x1aed69
        if (v29 != (int32_t)(256 * (int64_t)(v28 ^ (char)(v2 / 256)) || v2 & 0xffff0000)) {
            // 0x1aed70
            return result;
        }
        int64_t v30 = (int64_t)*(int32_t *)0x1a280c8; // 0x1aed4d
        int64_t v31 = unknown_104f6483(); // 0x1aed7d
        char * v32 = (char *)(v1 + 0x3ad8688d); // 0x1aed82
        *v32 = *v32 | (char)v31;
        int64_t v33 = v30 / 256;
        int32_t v34 = v9 >> 18; // 0x1aed8d
        v20 = v33;
        v21 = v34;
        v24 = v30;
        v23 = (int32_t *)-108;
        v26 = v3 + v11 & 0xffffffff;
        v22 = (v31 - v33) % 256 | v31 & -256;
        v25 = v34;
    }
    int64_t v35 = v24;
    uint64_t v36 = v22 & 0xe84d23af; // 0x1aed91
    int32_t * v37 = (int32_t *)(v16 + 13); // 0x1aed96
    uint32_t v38 = *v37; // 0x1aed96
    uint32_t v39 = v38 + v21; // 0x1aed96
    *v37 = v39;
    __writefsbyte(v35, __readfsbyte(v35) + (char)(v36 / 256) + (char)(v39 < v38));
    *(int32_t *)v25 = (int32_t)v36;
    int32_t * v40 = (int32_t *)(v25 + 57); // 0x1aed9f
    uint32_t v41 = *v40; // 0x1aed9f
    uint32_t v42 = v41 + (int32_t)v26; // 0x1aed9f
    *v40 = v42;
    int32_t v43 = *v23; // 0x1aeda2
    uint32_t v44 = (int32_t)((v36 + v20) % 256 | v22 & 0xe84d2300) - v43 + (int32_t)(v42 < v41); // 0x1aeda2
    int64_t * v45 = (int64_t *)(v26 - 8); // 0x1aeda8
    *v45 = 0x6001e871;
    int64_t v46 = (int64_t)(v44 + -1 - *(int32_t *)(int64_t)v44); // 0x1aedaf
    char * v47 = (char *)v46; // 0x1aedb1
    *v47 = *v47 - 114;
    *v45 = v46;
    unknown_ffffffffbd1c4fbd(0x6001e871);
    int64_t v48 = unknown_ffffffffb4a868d0(); // 0x1aedca
    *(int64_t *)(v26 - 16) = 7;
    return v48 & -0xff01 | (int64_t)&g1;
}

// Address range: 0x1aedec - 0x1aeded
int64_t function_1aedec(void) {
    // 0x1aedec
    int64_t result; // 0x1aedec
    return result;
}

// Address range: 0x1aedfd - 0x1aee21
int64_t function_1aedfd(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t v1 = a6; // 0x1aedfe
    int32_t v2 = a2; // 0x1aedfe
    int32_t result = v1 + v2; // 0x1aedfe
    *(int32_t *)a1 = result;
    if (result < 0 != ((result ^ v1) & (result ^ v2)) < 0) {
        // 0x1aee82
        return result;
    }
    // 0x1aee03
    int64_t v3; // 0x1aedfd
    if (llvm_ctpop_i8((char)v3 + (char)(a3 / 256)) % 2 != 0) {
        function_1aedec();
    }
    uint64_t v4 = unknown_ffffffff8820d61b(); // 0x1aee15
    return v4 & -256 | (int64_t)*(char *)(v4 % 256 + v3);
}

// Address range: 0x1aee21 - 0x1aee46
int64_t function_1aee21(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1aee21
    int64_t v1; // 0x1aee21
    uint64_t v2 = v1;
    unknown_ffffffffea46be39();
    *(int64_t *)0xa4ba01e8 = 0xa4ba01f0;
    return v2 / 2 % 128 | v2 & 0xffffff00;
}

// Address range: 0x1aee76 - 0x1aee82
int64_t function_1aee76(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1aee76
    int64_t result; // 0x1aee76
    // 0x1aee7a
    return result;
    int32_t * v1 = (int32_t *)(a3 + 112); // 0x1aee7f
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1aef2c - 0x1aef2e
int64_t function_1aef2c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1aef2c
    int64_t result; // 0x1aef2c
    return result;
}

// Address range: 0x1aef5b - 0x1aef5c
int64_t function_1aef5b(int64_t a1) {
    // 0x1aef5b
    int64_t result; // 0x1aef5b
    return result;
}

// Address range: 0x1aefc9 - 0x1aefca
int64_t function_1aefc9(void) {
    // 0x1aefc9
    int64_t result; // 0x1aefc9
    return result;
}

// Address range: 0x1aefd1 - 0x1af024
int64_t function_1aefd1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x1aefd1
    *(char *)0x60d9a6da = *(char *)0x60d9a6da + (char)(v2 / 256);
    char * v3 = (char *)(a4 + 0x6a8e39c5); // 0x1aefd9
    *v3 = *v3 - (char)(a4 / 256);
    int64_t v4; // 0x1aefd1
    if (a4 != 1) {
        v4 = function_1aefc9();
    }
    int64_t v5 = a3 ^ 0xff00; // 0x1aefd1
    int32_t * v6 = (int32_t *)(v2 - 120); // 0x1aefe1
    *v6 = *v6 + (int32_t)v5;
    int32_t * v7 = (int32_t *)(2 * v4); // 0x1aefed
    int32_t v8 = *v7 & 0xe03013d; // 0x1aefed
    *v7 = v8;
    int64_t result = __asm_wait(v4 & 0xffffffff); // 0x1aeff5
    if (v8 == 0) {
        // 0x1af06b
        return result;
    }
    int32_t * v9 = (int32_t *)(v2 - 72); // 0x1aeff9
    uint32_t v10 = *v9; // 0x1aeff9
    *v9 = v10 + 110;
    int32_t v11 = *(int32_t *)(v5 + 0x3c013d00); // 0x1af003
    __asm_int(-105);
    char * v12 = (char *)((int64_t)((int32_t)(v10 > 0xffffff91) + (int32_t)v2 - v11) + 0x41d80000); // 0x1af019
    *v12 = 2 * *v12;
    return (int64_t)((0x10000 * *(int32_t *)&v1 >> 16) + 0x30863a0c);
}

// Address range: 0x1af25a - 0x1af324
int64_t function_1af25a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1af25a
    int64_t result; // 0x1af25a
    uint64_t v1 = result;
    int64_t * v2 = (int64_t *)(result + 0x13d0000); // 0x1af25a
    *v2 = *v2 | result;
    char * v3 = (char *)(a1 + 0x4900a90); // 0x1af261
    *v3 = *v3 ^ (char)a4;
    if (a4 == 0) {
        // 0x1af2d7
        __asm_out(-61, (char)result);
        return result;
    }
    // 0x1af26d
    *(int32_t *)a2 = (int32_t)v1;
    *(char *)0x2fab537c = *(char *)0x2fab537c + (char)(v1 / 256);
    int64_t v4; // bp+27582, 0x1af25a
    *(char *)v1 = (char)(int64_t)&v4 + (char)v1;
    __asm_int(-5);
    return a4 & 0xffffffff;
}

// Address range: 0x1af332 - 0x1af333
int64_t function_1af332(void) {
    // 0x1af332
    int64_t result; // 0x1af332
    return result;
}

// Address range: 0x1af377 - 0x1af37a
int64_t function_1af377(void) {
    // 0x1af377
    return function_1af332();
}

// Address range: 0x1af396 - 0x1af397
int64_t function_1af396(void) {
    // 0x1af396
    int64_t result; // 0x1af396
    return result;
}

// Address range: 0x1af3ac - 0x1af3ba
int64_t function_1af3ac(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1af3ac
    bool v1; // 0x1af3ac
    if (v1) {
        function_1af396();
    }
    // 0x1af3ae
    *(int32_t *)a3 = (int32_t)a3 + (int32_t)a1;
    return function_ffffffffe0e4f5a2();
}

// Address range: 0x1af3ef - 0x1af3f0
int64_t function_1af3ef(void) {
    // 0x1af3ef
    int64_t result; // 0x1af3ef
    return result;
}

// Address range: 0x1af405 - 0x1af45a
int64_t function_1af405(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1af405
    unknown_ffffffffa022600b();
    int64_t v1; // 0x1af405
    *(char *)a3 = (char)v1 + 27;
    int32_t * v2 = (int32_t *)(8 * a1 - 0x156c5bc4 + v1); // 0x1af40f
    *v2 = *v2 + (int32_t)v1;
    int64_t v3; // 0x1af405
    __asm_outsd((int16_t)a3, *(int32_t *)&v3);
    unknown_3a257c21();
    char * v4 = (char *)(a1 + 0x74e80b21); // 0x1af420
    *v4 = *v4 - (char)a3;
    int64_t v5 = unknown_1b7b992c(); // 0x1af426
    char * v6 = (char *)(v5 + 0x48eb2b00); // 0x1af42b
    *v6 = *v6 + (char)v5;
    int32_t * v7 = (int32_t *)(v1 - 0x7cfeb300); // 0x1af433
    uint32_t v8 = *v7; // 0x1af433
    int64_t v9; // 0x1af405
    uint32_t v10 = v8 + (int32_t)(int64_t)&v9; // 0x1af433
    *v7 = v10;
    int32_t v11 = unknown_ffffffffc55cf4d7(); // 0x1af440
    unknown_3abb8f4b();
    if ((v11 + 0x548d4ff + 2 * (int32_t)(v10 < v8) & (v11 ^ -0x80000000)) < 0) {
        function_1af3ef();
    }
    // 0x1af44e
    return unknown_19108d58();
}

// Address range: 0x1af4c5 - 0x1af4ca
int64_t function_1af4c5(void) {
    // 0x1af4c5
    return function_ffffffffcead4ef6();
}

// Address range: 0x1af4fe - 0x1af4ff
int64_t function_1af4fe(void) {
    // 0x1af4fe
    int64_t result; // 0x1af4fe
    return result;
}

// Address range: 0x1af547 - 0x1af54a
int64_t function_1af547(int64_t a1) {
    // 0x1af547
    int64_t result; // 0x1af547
    return result;
}

// Address range: 0x1af54a - 0x1af54b
int64_t function_1af54a(void) {
    // 0x1af54a
    int64_t result; // 0x1af54a
    return result;
}

// Address range: 0x1af56f - 0x1af5a1
int64_t function_1af56f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1af56f
    int64_t v1; // 0x1af56f
    uint64_t v2 = v1;
    int64_t v3 = __asm_int1(); // 0x1af574
    char v4 = *(char *)-0x37029583 + (char)(v2 / 256); // 0x1af576
    *(char *)-0x37029583 = v4;
    *(int32_t *)-0x4ac8fec2ff95e4e0 = (int32_t)a3;
    int64_t v5 = a3 & 0xffffffff; // 0x1af595
    if (v4 != 0) {
        v5 = function_1af54a();
    }
    int64_t v6 = v5;
    int32_t * v7 = (int32_t *)((v3 & 0xffffffff) + 42); // 0x1af599
    *v7 = *v7 + (int32_t)v2;
    *(int32_t *)0x21a862c6 = *(int32_t *)0x21a862c6 | 0x13c38b;
    return (v6 + a4 / 256) % 256 | v6 & -256;
}

// Address range: 0x1af5b2 - 0x1af5b4
int64_t function_1af5b2(int64_t a1) {
    // 0x1af5b2
    int64_t result; // 0x1af5b2
    return result;
}

// Address range: 0x1af642 - 0x1af65a
int64_t function_1af642(int64_t a1) {
    // 0x1af642
    int64_t result; // 0x1af642
    bool v1; // 0x1af642
    if (v1) {
        // 0x1af6a6
        return result;
    }
    int64_t v2 = unknown_27df064b(); // 0x1af645
    int32_t * v3 = (int32_t *)(result - 0x42e5a128); // 0x1af64a
    uint32_t v4 = *v3; // 0x1af64a
    uint32_t v5 = v4 + (v1 ? 0x620f01e9 : 0x620f01e8); // 0x1af64a
    bool v6 = v1 ? v5 <= v4 : v4 > 0x9df0fe17; // 0x1af64a
    *v3 = v5;
    int64_t result2 = (int64_t)((int32_t)v2 - *(int32_t *)v2 + (int32_t)v6); // 0x1af654
    char * v7 = (char *)result2; // 0x1af656
    *v7 = *v7 + 60;
    return result2;
}

// Address range: 0x1af85a - 0x1af863
int64_t function_1af85a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int16_t v1 = a3; // 0x1af85a
    int64_t v2; // 0x1af85a
    __asm_out_133(v1, (char)v2);
    __asm_outsd(v1, (int32_t)v2);
    return unknown_2ac1d662();
}

// Address range: 0x1af865 - 0x1af86f
int64_t function_1af865(int64_t a1, int64_t a2) {
    // 0x1af865
    int64_t v1; // 0x1af865
    return unknown_4e12186b(a1, a2) & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x1af90b - 0x1af90e
int64_t function_1af90b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1af90b
    int64_t v1; // 0x1af90b
    int64_t v2 = v1;
    return (v2 & 0xff00) + a3 & 0xff00 | v2 & -0xff01;
}

// Address range: 0x1af93c - 0x1af94b
int64_t function_1af93c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1af93c
    unknown_ffffffffff0eda42(a1, a2, a3, a4);
    return function_1af94e();
}

// Address range: 0x1af94c - 0x1af94e
int64_t function_1af94c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1af94c
    int64_t result; // 0x1af94c
    return result;
}

// Address range: 0x1af94e - 0x1af954
int64_t function_1af94e(void) {
    // 0x1af94e
    int64_t v1; // 0x1af94e
    uint64_t v2 = v1;
    return v2 % 256 * (int64_t)*(char *)(v2 + 0x477c440a) | v2 & -0x10000;
}

// Address range: 0x1af95c - 0x1af961
int64_t function_1af95c(void) {
    // 0x1af95c
    return function_ffffffffaeb81c5a();
}

// Address range: 0x1af9d1 - 0x1af9d4
int64_t function_1af9d1(int64_t a1, int64_t a2) {
    // 0x1af9d1
    int64_t v1; // 0x1af9d1
    *(int32_t *)a1 = (int32_t)v1;
    return v1 & 0xffffffff;
}

// Address range: 0x1af9e1 - 0x1af9ef
int64_t function_1af9e1(int64_t a1, int64_t a2) {
    // 0x1af9e1
    int64_t v1; // 0x1af9e1
    return v1 & 0xffffffff ^ 0x8b364eaa;
}

// Address range: 0x1afa02 - 0x1afa08
int64_t function_1afa02(void) {
    // 0x1afa02
    int64_t result; // 0x1afa02
    return result;
}

// Address range: 0x1afa4a - 0x1afae6
int64_t function_1afa4a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1afa4a
    int64_t v1; // 0x1afa4a
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 - 53 + 8 * v2); // 0x1afa4c
    *v3 = *v3 + (int32_t)a1;
    int64_t v4 = a1; // bp-8, 0x1afa50
    __asm_rcl(*(char *)(a4 - 0x17c84900));
    int32_t v5 = ((int32_t)v1 & -0xff01) + (int32_t)v1; // 0x1afa59
    uint64_t result = (int64_t)v5; // 0x1afa59
    if (v5 >= 1) {
        // 0x1afa5f
        *(char *)a1 = (char)v5;
        bool v6; // 0x1afa4a
        *(char *)((v6 ? -1 : 1) + a1) = __asm_insb((int16_t)a3);
        return result;
    }
    char * v7 = (char *)(a2 - 0x17fffdb0); // 0x1afad8
    *v7 = *v7 + ((char)a4 | (char)")\b");
    int32_t * v8 = (int32_t *)(a3 + 1); // 0x1afade
    *v8 = *v8 + (int32_t)(int64_t)&v4;
    char v9 = *(char *)(result % 256 + v1); // 0x1afae1
    return result & 0xffffff00 | (int64_t)(v9 + (char)((int64_t)")\b" >> 8) - 120);
}

// Address range: 0x1afb08 - 0x1afb09
int64_t function_1afb08(void) {
    // 0x1afb08
    int64_t result; // 0x1afb08
    return result;
}

// Address range: 0x1afb35 - 0x1afb37
int64_t function_1afb35(void) {
    // 0x1afb35
    int64_t v1; // 0x1afb35
    return function_1afb90(v1, v1, v1, v1, (int64_t)&g2);
}

// Address range: 0x1afb64 - 0x1afb6c
int64_t function_1afb64(void) {
    // 0x1afb64
    int64_t v1; // 0x1afb64
    *(char *)(v1 + 0x1e8b45a) = (char)v1;
    return function_1afb08();
}

// Address range: 0x1afb86 - 0x1afb90
int64_t function_1afb86(void) {
    // 0x1afb86
    unknown_2a6ea08c();
    return function_ffffffffa4d31ff4();
}

// Address range: 0x1afb90 - 0x1afbf7
int64_t function_1afb90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_ffffffffd3936799(); // 0x1afb93
    bool v1; // 0x1afb90
    __asm_outsb((int16_t)a3, *(char *)((v1 ? -1 : 1) + a2));
    return result;
}

// Address range: 0x1afc33 - 0x1afc34
int64_t function_1afc33(void) {
    // 0x1afc33
    int64_t result; // 0x1afc33
    return result;
}

// Address range: 0x246c18 - 0x246c61
int64_t function_246c18(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x246c18
    int64_t v1; // 0x246c18
    return function_cf3c7(a1, a2, a3, a4, v1);
}

// Address range: 0x246c61 - 0x246dbb
int64_t function_246c61(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x246c61
    return function_cf3c7(a1, a2, a3, a4, 0x1ac951d9);
}

// Address range: 0x246dbb - 0x246f36
int64_t function_246dbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x246dbb
    int64_t v1; // bp-40, 0x246dbb
    int64_t v2 = (int64_t)&v1; // 0x246e57
    v1 = 169;
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x246e63
    int64_t v4 = v2 - 8; // 0x246e63
    int64_t * v5 = (int64_t *)v4; // 0x246e63
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x246e67
    *v6 = v2;
    int64_t * v7 = (int64_t *)(v2 + 8); // 0x246e7f
    int64_t v8 = *v7; // 0x246e7f
    *v6 = v8;
    int64_t * v9 = (int64_t *)(v2 - 24); // 0x246e83
    int64_t * v10 = (int64_t *)(v2 - 32); // 0x246e99
    *v10 = a1;
    int64_t * v11 = (int64_t *)(v2 - 40); // 0x246ea8
    *v11 = v3;
    v1 = v3;
    *v11 = v8 ^ 0x5bffb481;
    *v10 = v8;
    *v7 = v8;
    int64_t v12 = *v6; // 0x246ee4
    *v9 = v12;
    *v10 = v12;
    *v6 = *v5;
    *v9 = a2;
    *v10 = v4;
    *v6 = v2;
    int64_t v13; // 0x246dbb
    return function_cf3c7(*v10, *v9, a3, a4, v13);
}

// Address range: 0x246f3a - 0x246f3c
int64_t function_246f3a(void) {
    // 0x246f3a
    int64_t v1; // 0x246f3a
    return function_246faf(v1, v1, v1, v1, (int64_t)&g2);
}

// Address range: 0x246fad - 0x246faf
int64_t function_246fad(int64_t a1, int64_t a2) {
    // 0x246fad
    return a2 & 0xffffffff;
}

// Address range: 0x246faf - 0x247018
int64_t function_246faf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x246faf
    int64_t result; // 0x246faf
    return result;
}

// Address range: 0x533aac - 0x5344dc
int64_t function_533aac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, char a10) {
    // 0x533aac
    int64_t v1; // 0x533aac
    uint64_t v2 = *(int64_t *)(v1 + 16); // 0x533aae
    int32_t v3; // 0x533aac
    if (v2 < *(int64_t *)(v1 + 24)) {
        // 0x533e38
        v3 = *(int32_t *)v2;
    } else {
        // 0x533ac1
        v3 = v1;
    }
    // 0x533e3e
    if (v3 == -1) {
        function_5336c9();
    }
    // 0x533e5a
    return function_533642();
}

// Address range: 0x5344dc - 0x5344fc
int64_t function_5344dc(void) {
    // 0x5344dc
    int64_t v1; // 0x5344dc
    function_1fd40(v1);
    while (true) {
        // 0x5344ed
        function_1fd40(function_20a50());
    }
}

// Address range: 0x5344fc - 0x534aab
int64_t function_5344fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x5344fc
    function_20540();
    int64_t v1; // 0x5344fc
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    __readfsqword(40);
    int64_t result = *(int64_t *)(*(int64_t *)(a6 + 208) + 24) + 8 * function_566390(); // 0x534590
    int64_t v2 = *(int64_t *)result; // 0x534594
    if (v2 == 0) {
        // 0x534bf0
        return result;
    }
    int32_t v3 = a3;
    if (a2 == 0 || v3 == -1) {
        // 0x534bf0
        return (*(int32_t *)(a6 + 24) & 74) == 64 ? result : 16;
    }
    if (a4 == 0) {
        goto lab_0x5349e5;
    } else {
        if ((int32_t)a5 == -1) {
            uint64_t result2 = *(int64_t *)(a4 + 16); // 0x53499a
            if (result2 >= *(int64_t *)(a4 + 24)) {
                // 0x534bf0
                return result2;
            }
            // 0x5349a8
            if (*(int32_t *)result2 != -1) {
                goto lab_0x534610;
            } else {
                goto lab_0x5349e5;
            }
        } else {
            goto lab_0x534610;
        }
    }
  lab_0x5349e5:;
    uint32_t v4 = *(int32_t *)(v2 + 224); // 0x5349e5
    int64_t result3 = v4; // 0x5349e5
    if (v4 != v3) {
        // 0x5349fa
        if (*(int32_t *)(v2 + 228) != v3) {
            // 0x534bf0
            return result3;
        }
    }
    if (*(char *)(v2 + 32) != 0) {
        // 0x534a0c
        if (*(int32_t *)(v2 + 76) == v3) {
            // 0x534bf0
            return result3;
        }
    }
    // 0x534a16
    if (*(int32_t *)(v2 + 72) == v3) {
        // 0x534bf0
        return result3;
    }
    int64_t * v5 = (int64_t *)(a2 + 16); // 0x534a29
    uint64_t result4 = *v5; // 0x534a29
    uint64_t v6 = *(int64_t *)(a2 + 24); // 0x534a2d
    if (result4 >= v6) {
        // 0x534bf0
        return result4;
    }
    int64_t v7 = result4 + 4; // 0x534a3a
    *v5 = v7;
    int64_t result5 = v7; // 0x534a45
    if (v7 < v6) {
        // 0x534a4b
        result5 = (int64_t)*(int32_t *)v7;
    }
    // 0x534bf0
    return result5;
  lab_0x534610:;
    char v8 = 0; // bp-88, 0x534638
    if (*(char *)(v2 + 32) != 0) {
        // 0x535088
        return (int64_t)&v8;
    }
    // 0x534bf0
    return (int64_t)*(char *)(v2 + 328);
}
