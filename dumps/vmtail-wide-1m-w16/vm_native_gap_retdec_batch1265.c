/*
 * Targeted RetDec C for native executable gap queue batch 1265.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1a0885-0x1a0a85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a0a85-0x1a0c85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a0c85-0x1a0e85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a0e85-0x1a1085 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a1085-0x1a1285 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a1285-0x1a1485 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a1485-0x1a1685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a1685-0x1a1885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b3ba4-0x3b3da4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b3da4-0x3b3fa4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b3fa4-0x3b41a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b41a4-0x3b43a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b43a4-0x3b45a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b45a4-0x3b47a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b47a4-0x3b49a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b49a4-0x3b4ba4 rank=- name=- kind=- bytes=- uncovered=-
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
int128_t __asm_packsswb(int128_t left, int128_t right);
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

int64_t function_1784487();
int64_t function_1a0885(int64_t a1, int64_t a2);
int64_t function_1a08c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a0a3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1a0b7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a0cc8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a0e21(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1a0f7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a10be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a121d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a137a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a14d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a1615(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3b3ba4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_3b3bba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3b3d98(int64_t a1);
int64_t function_3b3de9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b3e49(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b3e5d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3b3efb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b3f42(void);
int64_t function_3b3f4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3b3f6c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3b3fe6(void);
int64_t function_3b3ff9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3b4064(int64_t a1, int64_t a2);
int64_t function_3b40a7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3b40c9(void);
int64_t function_3b4134(int64_t a1);
int64_t function_3b416b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b423c(void);
int64_t function_3b425f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b427d(void);
int64_t function_3b4396(void);
int64_t function_3b43ac(int64_t a1);
int64_t function_3b43ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b43cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b43d4(int64_t a1);
int64_t function_3b4404(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b4493(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3b449e(int64_t a1);
int64_t function_3b4512(void);
int64_t function_3b4530(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3b4628(void);
int64_t function_3b4657(void);
int64_t function_3b465b(void);
int64_t function_3b465d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3b46a3(int64_t a1, int64_t a2);
int64_t function_3b46c5(void);
int64_t function_3b46c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b472a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b473b(int64_t a1, int64_t a2);
int64_t function_3b481d(void);
int64_t function_3b4823(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b4859(void);
int64_t function_3b4872(void);
int64_t function_3b4883(int64_t a1);
int64_t function_3b4929(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b49bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b4a04(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b4a48(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3b4adc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3b4b1b(void);
int64_t function_3b4b3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b4b48(void);
int64_t function_4034a2f();
int64_t function_88c0b3f();
int64_t function_c57b8();
int64_t function_ffffffff98baa0fe();
int64_t function_ffffffffa8714d2a();
int64_t function_ffffffffb47875ab();
int64_t function_ffffffffc93b47b1();
int64_t function_ffffffffd2e36c20();
int64_t unknown_11feafd0();
int64_t unknown_1324896();
int64_t unknown_193e59b();
int64_t unknown_21bc58e5();
int64_t unknown_2adc4820();
int64_t unknown_3d3b7e20();
int64_t unknown_3d3d2701();
int64_t unknown_512c2369();
int64_t unknown_53068296();
int64_t unknown_64473f21();
int64_t unknown_65e2e4();
int64_t unknown_6c44a073();
int64_t unknown_794eeb73();
int64_t unknown_7b5de0a();
int64_t unknown_9819058();
int64_t unknown_ffffffff91eddb87();
int64_t unknown_ffffffffaea52e7e();
int64_t unknown_ffffffffbfae8d12();
int64_t unknown_ffffffffc09960a2();
int64_t unknown_ffffffffc93d423e();
int64_t unknown_ffffffffd5e00eb8();
int64_t unknown_ffffffffdae68def();

// Address range: 0x1a0885 - 0x1a08c2
int64_t function_1a0885(int64_t a1, int64_t a2) {
    // 0x1a0885
    int64_t v1; // 0x1a0885
    return function_c57b8(v1, v1, v1, v1, v1, v1, a1);
}

// Address range: 0x1a08c2 - 0x1a0a3a
int64_t function_1a08c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1a08c2
    int64_t v1; // 0x1a08c2
    return function_c57b8(a1, a2, a3, a4, v1, v1, 0x19472f);
}

// Address range: 0x1a0a3a - 0x1a0b7d
int64_t function_1a0a3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1a0a3a
    return function_c57b8(a1, a2, a3, a4, a5, a6, 0x2b018d8d);
}

// Address range: 0x1a0b7d - 0x1a0cc8
int64_t function_1a0b7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a0b7d
    int64_t v1; // 0x1a0b7d
    return function_c57b8(a1, a2, a3, a4, a5, v1, 0x194c4d);
}

// Address range: 0x1a0cc8 - 0x1a0e21
int64_t function_1a0cc8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1a0cc8
    int64_t v1; // bp-24, 0x1a0cc8
    int64_t v2 = (int64_t)&v1; // 0x1a0d0d
    v1 = 0x194f4d;
    int64_t v3 = v2 - 8; // 0x1a0d31
    *(int64_t *)v3 = 0x27afbf68;
    int64_t v4 = v2 - 24; // 0x1a0d3a
    int64_t * v5 = (int64_t *)v4; // 0x1a0d3a
    *v5 = v4;
    int64_t v6 = v2 - 16; // 0x1a0d67
    int64_t * v7 = (int64_t *)v6; // 0x1a0d6c
    int64_t v8 = *(int64_t *)(v2 + 24); // 0x1a0d6f
    *v7 = v8;
    *v5 = v3;
    *v5 = v1;
    int64_t v9 = v2 - 32; // 0x1a0d9a
    int64_t * v10 = (int64_t *)v9; // 0x1a0d9f
    *v10 = a4;
    int64_t * v11 = (int64_t *)(v2 - 40); // 0x1a0da3
    *v11 = v9;
    *v10 = v6;
    *v11 = 0x2cec907c;
    int64_t * v12 = (int64_t *)(v2 - 48); // 0x1a0dbf
    *v12 = v8;
    *v7 = *v10;
    *v12 = v1;
    v1 = *v10;
    *v11 = v6;
    *v12 = *v10;
    int64_t v13; // 0x1a0cc8
    return function_c57b8(a1, a2, a3, *v10, v13, v13, 310);
}

// Address range: 0x1a0e21 - 0x1a0f7e
int64_t function_1a0e21(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1a0e21
    int64_t v1; // bp-56, 0x1a0e21
    v1 = (int64_t)&v1;
    int64_t v2; // 0x1a0e21
    return function_c57b8(a1, a2, v2, v2, v2, v2, 169);
}

// Address range: 0x1a0f7e - 0x1a10be
int64_t function_1a0f7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1a0f7e
    int64_t v1; // bp-40, 0x1a0f7e
    int64_t v2 = (int64_t)&v1; // 0x1a103c
    v1 = v2;
    int64_t v3; // 0x1a0f7e
    return function_c57b8(a1, a2, a3, a3, v3, v3, v2);
}

// Address range: 0x1a10be - 0x1a121d
int64_t function_1a10be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a10be
    int64_t v1; // bp-56, 0x1a10be
    int64_t v2 = (int64_t)&v1; // 0x1a116a
    int64_t v3 = v2 + 16; // 0x1a1170
    v1 = v3;
    int64_t * v4 = (int64_t *)(v2 + 32); // 0x1a117e
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x1a117e
    v1 = v3;
    bool v6; // 0x1a10be
    *v5 = 0x4000 * (int64_t)v6 | 2048 * (int64_t)v6 | 1024 * (int64_t)v6 | 512 * (int64_t)v6 | 256 * (int64_t)v6 | 128 * (int64_t)v6 | 64 * (int64_t)v6 | 16 * (int64_t)v6 | (int64_t)v6 | 4 * (int64_t)v6 | 2;
    int64_t * v7 = (int64_t *)v3; // 0x1a11c4
    *v4 = *v7;
    *v5 = 0x4537c7c7;
    v1 = *v4;
    *(int64_t *)(v2 + 48) = *v7;
    int64_t v8 = v2 + 24; // 0x1a11d8
    int64_t * v9 = (int64_t *)v8; // 0x1a11dc
    *v7 = *v9;
    *v5 = v8;
    int64_t v10 = *v4; // 0x1a11ff
    *v9 = v10;
    *v7 = v10;
    int64_t v11; // 0x1a10be
    return function_c57b8(a1, a2, a3, a4, a5, v11, a5);
}

// Address range: 0x1a121d - 0x1a137a
int64_t function_1a121d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a121d
    int64_t v1; // 0x1a121d
    return function_c57b8(a1, a2, a3, v1, 169, v1, 0x10bb4e53);
}

// Address range: 0x1a137a - 0x1a14d9
int64_t function_1a137a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a137a
    int64_t v1; // bp-32, 0x1a137a
    int64_t v2 = (int64_t)&v1; // 0x1a13c8
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x1a13d7
    int64_t v4 = v2 - 16; // 0x1a13e8
    int64_t * v5 = (int64_t *)v4; // 0x1a13e8
    *v5 = 0x195ba6;
    *(int64_t *)(v2 - 24) = v4;
    *v5 = v4;
    int64_t v6 = *(int64_t *)(v2 + 32); // 0x1a1402
    *v3 = v6;
    *v5 = v2;
    int64_t * v7 = (int64_t *)(v2 + 16); // 0x1a1428
    int64_t v8 = *v7; // 0x1a1428
    *v5 = v8;
    *v3 = v6;
    *v7 = v1;
    *v3 = v6;
    int64_t v9 = v1; // 0x1a147a
    v1 = v8;
    int64_t * v10 = (int64_t *)(v2 + 8); // 0x1a1483
    *(int64_t *)(v2 + 40) = *v10;
    *v10 = a5;
    v1 = v9;
    *v10 = v2 + 24;
    int64_t v11 = *v7; // 0x1a14be
    *v10 = v11;
    v1 = v11;
    int64_t v12; // 0x1a137a
    return function_c57b8(*v5, a2, v9, a4, *v10, v12, a2);
}

// Address range: 0x1a14d9 - 0x1a1615
int64_t function_1a14d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a14d9
    int64_t v1; // bp-48, 0x1a14d9
    int64_t v2 = (int64_t)&v1; // 0x1a15a2
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x1a15ab
    *v3 = 0x195fcb;
    *(int64_t *)(v2 + 32) = v1;
    v1 = a5;
    *v3 = a1;
    *(int64_t *)(v2 + 8) = v2 + 24;
    int64_t v4; // 0x1a14d9
    bool v5; // 0x1a14d9
    return function_c57b8(a1, a2, a3, a4, v1, v4, 0x4000 * (int64_t)v5 | 2048 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | 128 * (int64_t)v5 | 64 * (int64_t)v5 | 16 * (int64_t)v5 | (int64_t)v5 | 4 * (int64_t)v5 | 2);
}

// Address range: 0x1a1615 - 0x1a1755
int64_t function_1a1615(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1a1615
    int64_t v1; // bp-40, 0x1a1615
    int64_t v2 = (int64_t)&v1; // 0x1a1685
    int64_t v3 = v2 - 8; // 0x1a169b
    int64_t * v4 = (int64_t *)v3; // 0x1a169b
    int64_t v5 = *(int64_t *)(v2 + 32); // 0x1a16a7
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x1a16ab
    *v6 = v5;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x1a16ae
    *v7 = v5;
    int64_t v8 = v2 + 16; // 0x1a16ba
    int64_t v9 = *(int64_t *)v8; // 0x1a16ba
    *v7 = v9;
    *v4 = v3;
    *v6 = v5;
    *(int64_t *)(v2 + 8) = *v4;
    *v6 = 0x231ecd00;
    *v7 = v9;
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = v1;
    *v6 = v2;
    v1 = v8;
    return function_c57b8(a1, a2, a3, a4, a5, a6, 0x274a0a67);
}

// Address range: 0x3b3ba4 - 0x3b3bb3
int64_t function_3b3ba4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x3b3ba4
    return result;
}

// Address range: 0x3b3bba - 0x3b3c9e
int64_t function_3b3bba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2; // 0x3b3bba
    int32_t v3 = v2;
    *(int32_t *)0xe15585f20993709 = v3;
    bool v4; // 0x3b3bba
    uint32_t v5 = (2 * v3 | (int32_t)v4) + *(int32_t *)(a4 - 0x1702894d + v2); // 0x3b3bcc
    int64_t result = v5; // 0x3b3bcc
    int32_t * v6 = (int32_t *)(a2 - 0x4ff5973f); // 0x3b3bd3
    *v6 = *v6 - 0x2cfe18;
    *(int32_t *)0x7e03308508019de9 = v5;
    if ((a5 & 64) == 0 && (char)a5 < 0 == ((a5 & (int64_t)L"\n2") != 0)) {
        char * v7 = (char *)(v2 - 69); // 0x3b3bec
        *v7 = *v7 - (char)v5;
        return result;
    }
    uint32_t v8 = *(int32_t *)(result + 0x2e7cf6441) & -0x2cfe18; // 0x3b3bf0
    if (v8 == 0) {
        int32_t * v9 = (int32_t *)(v2 + 104); // 0x3b3c02
        *v9 = *v9 + (int32_t)a3;
        return result | 0x566620a9;
    }
    int64_t v10 = v8; // 0x3b3bf0
    int16_t v11 = a3; // 0x3b3c0a
    __asm_outsb(v11, *(char *)&v1);
    *(int32_t *)v10 = v5;
    int32_t result2 = v5 | 0x1e8120d; // 0x3b3c0d
    int64_t v12 = v1;
    *(int32_t *)(v12 + 54) = (int32_t)v12;
    if (result2 >= 0) {
        // 0x3b3c19
        return function_ffffffffd2e36c20(v10 - 4);
    }
    // 0x3b3c90
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v2;
    __asm_out(v11, (char)result2);
    return result2;
}

// Address range: 0x3b3d98 - 0x3b3d9b
int64_t function_3b3d98(int64_t a1) {
    // 0x3b3d98
    int64_t result; // 0x3b3d98
    return result;
}

// Address range: 0x3b3de9 - 0x3b3df5
int64_t function_3b3de9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b3de9
    bool v1; // 0x3b3de9
    return function_ffffffffb47875ab((v1 ? -1 : 1) + a1);
}

// Address range: 0x3b3e49 - 0x3b3e5b
int64_t function_3b3e49(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 - 0x7e06fffd); // 0x3b3e49
    int64_t result; // 0x3b3e49
    int32_t * v2 = (int32_t *)((int64_t)(v1 | (int32_t)result) + 0x1e8ff35); // 0x3b3e50
    uint32_t v3 = *v2; // 0x3b3e50
    *v2 = v3 / 2 | 0x80000000 * v3;
    return result;
}

// Address range: 0x3b3e5d - 0x3b3ee1
int64_t function_3b3e5d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3b3e5d
    int64_t v1; // 0x3b3e5d
    uint64_t v2 = v1;
    unsigned char v3 = (char)(v2 / 256) + (char)v2; // 0x3b3e5d
    if (llvm_ctpop_i8(v3) % 2 == 0) {
        // 0x3b3e61
        __asm_outsb((int16_t)a3, (char)v1);
        *(char *)-0x5953bfaf = (char)a3;
        int32_t * v4 = (int32_t *)(v1 - 50); // 0x3b3e69
        *v4 = *v4 - (int32_t)v1;
        return v2 & -256 | (int64_t)v3;
    }
    int64_t v5 = unknown_53068296(); // 0x3b3e90
    bool v6; // 0x3b3e5d
    int64_t v7 = v6 ? -1 : 1; // 0x3b3e95
    int64_t v8 = v7 + a1; // 0x3b3e95
    char v9 = *(char *)(v5 + 62); // 0x3b3e96
    *(char *)v8 = (char)v5 ^ -31;
    int32_t * v10 = (int32_t *)(a3 - 70 + (256 * (int64_t)(v9 & (char)(a4 / 256)) | a4 & -0xff01)); // 0x3b3ea2
    *v10 = *v10 + (int32_t)v1;
    return __asm_iretd(v8 + v7);
}

// Address range: 0x3b3efb - 0x3b3f14
int64_t function_3b3efb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b3efb
    unknown_3d3d2701();
    int64_t v1; // 0x3b3efb
    int32_t * v2 = (int32_t *)(2 * v1 + 0x5493d6e0); // 0x3b3f05
    *v2 = *v2 + (int32_t)a3;
    return unknown_ffffffffbfae8d12();
}

// Address range: 0x3b3f42 - 0x3b3f43
int64_t function_3b3f42(void) {
    // 0x3b3f42
    int64_t result; // 0x3b3f42
    return result;
}

// Address range: 0x3b3f4c - 0x3b3f58
int64_t function_3b3f4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3b3f4c
    int64_t result; // 0x3b3f4c
    *(int32_t *)a2 = (int32_t)result + (int32_t)a2;
    char * v1 = (char *)(a4 - 80 + result); // 0x3b3f4e
    *v1 = *v1 + (char)a4;
    return result;
}

// Address range: 0x3b3f6c - 0x3b3fce
int64_t function_3b3f6c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char v1 = *(char *)0x70e0c185; // 0x3b3f7e
    int64_t v2; // 0x3b3f6c
    *(char *)0x70e0c185 = v1 + (char)((uint64_t)v2 / 256);
    bool v3; // 0x3b3f6c
    char v4 = *((v3 ? (char *)0x1749f99d2 : (char *)0x749f99d3)); // 0x3b3f84
    unknown_193e59b();
    int64_t result = unknown_3d3b7e20(); // 0x3b3f8f
    int32_t * v5 = (int32_t *)(a1 + 39); // 0x3b3f94
    int32_t v6 = *v5; // 0x3b3f94
    int32_t v7 = 256 * (int64_t)(v4 + (char)(a3 / 256)) | a3 & 0xffff00ff; // 0x3b3f94
    int32_t v8 = v6 + v7; // 0x3b3f94
    *v5 = v8;
    if (v8 < 0 == ((v8 ^ v6) & (v8 ^ v7)) < 0) {
        // 0x3b3f99
        return function_3b3f42();
    }
    // 0x3b3fc8
    *(int32_t *)0x3f3cc001 = *(int32_t *)0x3f3cc001 + 0x66ad6e4;
    return result;
}

// Address range: 0x3b3fe6 - 0x3b3ff1
int64_t function_3b3fe6(void) {
    // 0x3b3fe6
    return unknown_ffffffffdae68def();
}

// Address range: 0x3b3ff9 - 0x3b4057
int64_t function_3b3ff9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3; // 0x3b3ff9
    int32_t * v4 = (int32_t *)(v3 + 0x6f0b7d02); // 0x3b3ff9
    int32_t v5 = v3; // 0x3b3ff9
    *v4 = *v4 + v5;
    char v6 = *(char *)&v2 - 14; // 0x3b3fff
    unsigned char v7 = llvm_ctpop_i8(v6); // 0x3b3fff
    *(char *)a1 = v6;
    if (v7 % 2 != 0) {
        // 0x3b4004
        *(int32_t *)v1 = *(int32_t *)&v1 + v5;
        *(int32_t *)v2 = *(int32_t *)&v1;
        int32_t * v8 = (int32_t *)((a4 % 256 | a3) + 0x4c000d5b); // 0x3b4009
        *v8 = *v8 + 1;
        int64_t v9 = a3 & -256 | 61; // 0x3b400f
        __asm_out((int16_t)v9, (char)v3);
        char v10 = __asm_insb((int16_t)(*(int32_t *)(v3 + 5) & (int32_t)v9)); // 0x3b4017
        bool v11; // 0x3b3ff9
        *(char *)(v2 + (v11 ? -4 : 4)) = v10;
        return function_4034a2f();
    }
    char * v12 = (char *)(v3 + 22); // 0x3b4036
    unsigned char v13 = (char)a4; // 0x3b4036
    *v12 = *v12 + v13;
    unsigned char v14 = v13 % 32; // 0x3b4046
    if (v14 != 0) {
        char * v15 = (char *)(a4 - 43); // 0x3b4046
        unsigned char v16 = *v15; // 0x3b4046
        *v15 = v16 >> v14 | v16 << 8 - v14;
    }
    int64_t v17 = v3 & -256; // 0x3b403d
    int64_t v18 = ((int32_t)v17 < 0x7622cf01 ? 39 : 40) | v17; // 0x3b4044
    int32_t * v19 = (int32_t *)(a4 + 0x2d05535f + 4 * v3); // 0x3b4049
    *v19 = 0x400000 * *v19;
    return 256 * (int64_t)(__readgsbyte(8 * v3 + 32 + v18) ^ (char)(v3 / 256)) | v18 & -0xffd1;
}

// Address range: 0x3b4064 - 0x3b406c
int64_t function_3b4064(int64_t a1, int64_t a2) {
    // 0x3b4064
    int64_t result; // 0x3b4064
    return result;
}

// Address range: 0x3b40a7 - 0x3b40c7
int64_t function_3b40a7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3b40a7
    bool v1; // 0x3b40a7
    bool v2 = v1;
    int64_t v3 = a1;
    uint32_t v4 = (int32_t)a4 % 32; // 0x3b40a9
    int64_t v5; // 0x3b40a7
    char v6; // 0x3b40a7
    bool v7; // 0x3b40a7
    int64_t result; // 0x3b40a7
    if (v4 == 0) {
        unsigned char v8 = (char)a3; // 0x3b40a7
        unsigned char v9 = (char)(a3 / 256) + v8; // 0x3b40a7
        v5 = a1;
        v6 = a1;
        v7 = v2 ? v9 + (char)v2 <= v8 : v9 < v8;
    } else {
        int32_t * v10 = (int32_t *)(result - 59); // 0x3b40a9
        uint32_t v11 = *v10; // 0x3b40a9
        *v10 = v11 >> v4;
        v5 = v3;
        v6 = *(char *)&v3;
        v7 = (v11 & 1 << v4 - 1) != 0;
    }
    *(char *)v5 = v6 - (char)a4 + (char)v7;
    *(int32_t *)0x66b9265450f7d4 = (int32_t)result;
    return result;
}

// Address range: 0x3b40c9 - 0x3b40ce
int64_t function_3b40c9(void) {
    // 0x3b40c9
    return function_ffffffff98baa0fe();
}

// Address range: 0x3b4134 - 0x3b4135
int64_t function_3b4134(int64_t a1) {
    // 0x3b4134
    int64_t result; // 0x3b4134
    return result;
}

// Address range: 0x3b416b - 0x3b41b9
int64_t function_3b416b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3b416b
    int64_t v1; // 0x3b416b
    int64_t v2 = v1;
    unknown_794eeb73();
    char * v3 = (char *)(a1 - 0x99da56f); // 0x3b4172
    char v4 = a3; // 0x3b4172
    *v3 = *v3 + v4;
    unknown_ffffffffaea52e7e();
    int64_t result = unknown_ffffffff91eddb87(); // 0x3b4181
    bool v5; // 0x3b416b
    char * v6 = (char *)(8 * ((v1 + v2 + (int64_t)v5) % 256 | v2 & 0x1fffffffffffff00) + a1); // 0x3b4186
    *v6 = *v6 + v4;
    char v7 = *(char *)0x2c3d2a4a; // 0x3b4189
    *(char *)0x2c3d2a4a = v7 + 53;
    if (v7 > -53) {
        // 0x3b41a9
        return (int64_t)*(int32_t *)0x52fca101e80800a0;
    }
    // 0x3b4192
    return result;
}

// Address range: 0x3b423c - 0x3b4241
int64_t function_3b423c(void) {
    // 0x3b423c
    int64_t v1; // 0x3b423c
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result;
    return result;
}

// Address range: 0x3b425f - 0x3b426d
int64_t function_3b425f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3b425f
    bool v1; // 0x3b425f
    int64_t result = unknown_512c2369((v1 ? -4 : 4) + a1); // 0x3b4263
    *(char *)a3 = (char)a3;
    return result;
}

// Address range: 0x3b427d - 0x3b4282
int64_t function_3b427d(void) {
    // 0x3b427d
    return function_ffffffffa8714d2a();
}

// Address range: 0x3b4396 - 0x3b439d
int64_t function_3b4396(void) {
    // 0x3b4396
    unknown_ffffffffc09960a2();
    int64_t v1; // 0x3b4396
    return function_3b43ae(v1, v1, v1, (int64_t)&g2);
}

// Address range: 0x3b43ac - 0x3b43ae
int64_t function_3b43ac(int64_t a1) {
    // 0x3b43ac
    bool v1; // 0x3b43ac
    return __asm_iretd((v1 ? -1 : 1) + a1);
}

// Address range: 0x3b43ae - 0x3b43c9
int64_t function_3b43ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffffd5e00eb8(); // 0x3b43ae
    __asm_out_133(80, (char)result);
    int32_t * v1 = (int32_t *)(a3 - 0x10d4ff4b); // 0x3b43c0
    *v1 = *v1 - (int32_t)a2;
    return result;
}

// Address range: 0x3b43cc - 0x3b43d4
int64_t function_3b43cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b43cc
    int64_t v1; // 0x3b43cc
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return function_1784487();
}

// Address range: 0x3b43d4 - 0x3b43dd
int64_t function_3b43d4(int64_t a1) {
    // 0x3b43d4
    return unknown_21bc58e5(a1);
}

// Address range: 0x3b4404 - 0x3b440c
int64_t function_3b4404(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3b4404
    int64_t v1; // 0x3b4404
    *(int32_t *)a1 = 2 * (int32_t)v1;
    uint32_t v2 = *(int32_t *)(v1 + 32); // 0x3b4406
    return (v1 & 0xffffffff | 0x100000000 * a3) / (int64_t)v2 & 0xffffffff;
}

// Address range: 0x3b4493 - 0x3b4497
int64_t function_3b4493(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 - 79); // 0x3b4493
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x3b4493
    return result;
}

// Address range: 0x3b449e - 0x3b4507
int64_t function_3b449e(int64_t a1) {
    // 0x3b449e
    int64_t result; // 0x3b449e
    return result;
}

// Address range: 0x3b4512 - 0x3b4513
int64_t function_3b4512(void) {
    // 0x3b4512
    int64_t result; // 0x3b4512
    return result;
}

// Address range: 0x3b4530 - 0x3b4612
int64_t function_3b4530(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3b4530
    bool v1; // 0x3b4530
    int64_t v2 = v1 ? -4 : 4; // 0x3b4530
    int64_t v3 = v2 + a2; // 0x3b4530
    int64_t v4 = a3 & -0xff01 | (int64_t)&g1; // 0x3b4531
    char * v5 = (char *)v4; // 0x3b4533
    char v6 = *v5; // 0x3b4533
    int64_t v7; // 0x3b4530
    *v5 = (char)v7 + (char)((int32_t)v7 < (int32_t)v7) + v6;
    char v8 = v7 / 256; // 0x3b4538
    *(char *)0x36f7c13f = *(char *)0x36f7c13f + v8;
    char * v9 = (char *)(a4 + 1);
    int32_t * v10 = (int32_t *)(v4 + 89);
    int64_t v11; // 0x3b4530
    int64_t v12 = v11;
    int3_t v13; // 0x3b4530
    int3_t v14 = v13;
    int64_t v15; // 0x3b4530
    unsigned char v16 = (char)v15 & -29; // 0x3b4548
    unsigned char v17 = llvm_ctpop_i8(v16); // 0x3b4548
    int64_t v18 = v15 & -256 | (int64_t)v16; // 0x3b4548
    *(int64_t *)(v12 - 8) = v18;
    int64_t v19 = v18; // 0x3b454b
    if (v17 % 2 != 0) {
        v19 = function_3b4512();
    }
    // 0x3b454d
    *(int32_t *)(v2 + a1) = __asm_insd((int16_t)v4);
    *v9 = *v9 & (char)(a4 / 256);
    *(char *)0x3900fc58 = *(char *)0x3900fc58 + v8;
    *(int64_t *)(v12 - 16) = v19;
    *(int32_t *)v7 = (int32_t)__frontend_reg_load_fpr(v14);
    int64_t result = __asm_hlt(); // 0x3b4565
    int64_t v20 = v12 - 24; // 0x3b456b
    *(int64_t *)v20 = v3;
    uint32_t v21 = *v10; // 0x3b459d
    uint32_t v22 = (int32_t)v20; // 0x3b459d
    int32_t v23 = v21 - v22; // 0x3b459d
    *v10 = v23;
    int64_t v24 = v12 - 32; // 0x3b45a0
    *(int64_t *)v24 = -113;
    while (v23 >= 0) {
        // 0x3b45a4
        if (llvm_ctpop_i8((char)v23) % 2 == 0) {
            // 0x3b460a
            __frontend_reg_store_fpr(v14, *(float80_t *)0x7925013d);
            *(int64_t *)(v12 - 40) = 0x381bf270;
            return result;
        }
        // 0x3b45a6
        if (v21 < v22) {
            // break -> 0x3b45af
            break;
        }
        v12 = v24;
        v14++;
        v16 = (char)result & -29;
        v17 = llvm_ctpop_i8(v16);
        v18 = result & -256 | (int64_t)v16;
        *(int64_t *)(v12 - 8) = v18;
        v19 = v18;
        if (v17 % 2 != 0) {
            v19 = function_3b4512();
        }
        // 0x3b454d
        *(int32_t *)0x7925013d = __asm_insd((int16_t)v4);
        *v9 = *v9 & (char)(a4 / 256);
        *(char *)0x3900fc58 = *(char *)0x3900fc58 + v8;
        *(int64_t *)(v12 - 16) = v19;
        *(int32_t *)v7 = (int32_t)__frontend_reg_load_fpr(v14);
        result = __asm_hlt();
        v20 = v12 - 24;
        *(int64_t *)v20 = v3;
        v21 = *v10;
        v22 = (int32_t)v20;
        v23 = v21 - v22;
        *v10 = v23;
        v24 = v12 - 32;
        *(int64_t *)v24 = -113;
    }
    // 0x3b45af
    __asm_wait();
    *(char *)0x5edf8ccd = *(char *)0x5edf8ccd + 104;
    __asm_in(104);
    char * v25 = (char *)(a4 + 0x14021a26c); // 0x3b45d4
    *v25 = *v25 + (char)v4;
    int64_t result2 = unknown_65e2e4(); // 0x3b45de
    *(int32_t *)0x7925013d = *(int32_t *)v3;
    return result2;
}

// Address range: 0x3b4628 - 0x3b462e
int64_t function_3b4628(void) {
    // 0x3b4628
    int64_t result; // 0x3b4628
    return result;
}

// Address range: 0x3b4657 - 0x3b465b
int64_t function_3b4657(void) {
    // 0x3b4657
    int64_t v1; // 0x3b4657
    return function_3b465d(v1, v1, v1, v1, (int64_t)&g2);
}

// Address range: 0x3b465b - 0x3b465d
int64_t function_3b465b(void) {
    // 0x3b465b
    int64_t result; // 0x3b465b
    return result;
}

// Address range: 0x3b465d - 0x3b467a
int64_t function_3b465d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3b465d
    int64_t v1; // 0x3b465d
    *(int32_t *)-0x1afec2ffdd0ac579 = (int32_t)v1;
    return v1 & 0xffffff00 | 174;
}

// Address range: 0x3b46a3 - 0x3b46a9
int64_t function_3b46a3(int64_t a1, int64_t a2) {
    // 0x3b46a3
    int64_t result; // 0x3b46a3
    return result;
}

// Address range: 0x3b46c5 - 0x3b46c6
int64_t function_3b46c5(void) {
    // 0x3b46c5
    int64_t result; // 0x3b46c5
    return result;
}

// Address range: 0x3b46c9 - 0x3b4725
int64_t function_3b46c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int32_t * v2 = (int32_t *)(a4 - 95); // 0x3b46d0
    *v2 = *v2 >> 20;
    int64_t v3; // 0x3b46c9
    if ((uint64_t)v3 / 256 > (int64_t)*(char *)(a4 - 122)) {
        unsigned char v4 = (char)a4 % 32; // 0x3b46db
        if (v4 != 0) {
            *(char *)v1 = *(char *)&v1 << v4;
        }
        int64_t v5 = unknown_2adc4820(); // 0x3b46dd
        *(char *)(v5 + 113) = 0;
        *(int32_t *)0x59013d00f68c5614 = (int32_t)v5;
    }
    // 0x3b46fe
    unknown_7b5de0a();
    unknown_1324896();
    __asm_hlt();
    unknown_64473f21();
    return v1 & 0xffffffff;
}

// Address range: 0x3b472a - 0x3b4735
int64_t function_3b472a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3b472a
    int64_t v1; // 0x3b472a
    *(int32_t *)(v1 - 0x7ccfc900) = (int32_t)a3;
    return function_88c0b3f();
}

// Address range: 0x3b473b - 0x3b4749
int64_t function_3b473b(int64_t a1, int64_t a2) {
    // 0x3b473b
    int64_t v1; // 0x3b473b
    return function_ffffffffc93b47b1(v1 & 0xffffffff);
}

// Address range: 0x3b481d - 0x3b481e
int64_t function_3b481d(void) {
    // 0x3b481d
    int64_t result; // 0x3b481d
    return result;
}

// Address range: 0x3b4823 - 0x3b4850
int64_t function_3b4823(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b4823
    int64_t v1; // 0x3b4823
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + (char)a3;
    int64_t v3 = __asm_iretd(-0x434f0600); // 0x3b4831
    char v4 = v3;
    unsigned char v5 = llvm_ctpop_i8(v4 - 1); // 0x3b4832
    int64_t v6; // 0x3b4823
    *(char *)-0x434f0600 = *(char *)&v6;
    char v7 = v4; // 0x3b4839
    if (v5 % 2 == 0) {
        v7 = function_3b481d();
    }
    // 0x3b483b
    bool v8; // 0x3b4823
    char * v9 = v8 ? (char *)-0x434f0601 : (char *)-0x434f05ff; // 0x3b4840
    *v9 = v7 + ((int32_t)v3 < 0x8b23d901 ? -2 : -3);
    int64_t v10 = __asm_sti(v8 ? -0x434f0602 : -0x434f05fe); // 0x3b4842
    unsigned char v11 = (char)a4 % 32; // 0x3b4843
    int64_t v12 = v10; // 0x3b4843
    if (v11 != 0) {
        v12 = 256 * (int64_t)((char)(v10 / 256) >> v11) | v10 & -0xff01;
    }
    return v12 & -256 | (int64_t)*(char *)0x68b70cbc57013d00;
}

// Address range: 0x3b4859 - 0x3b485c
int64_t function_3b4859(void) {
    // 0x3b4859
    int64_t result; // 0x3b4859
    return result;
}

// Address range: 0x3b4872 - 0x3b4875
int64_t function_3b4872(void) {
    // 0x3b4872
    int64_t result; // 0x3b4872
    return result;
}

// Address range: 0x3b4883 - 0x3b4886
int64_t function_3b4883(int64_t a1) {
    // 0x3b4883
    int64_t result; // 0x3b4883
    return result;
}

// Address range: 0x3b4929 - 0x3b493c
int64_t function_3b4929(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b4929
    int64_t result; // 0x3b4929
    *(char *)a4 = (char)(result / 256 | result);
    *(char *)(a3 - 59) = (char)result;
    return result;
}

// Address range: 0x3b49bc - 0x3b49f7
int64_t function_3b49bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 30); // 0x3b49c1
    int64_t v2; // 0x3b49bc
    *v1 = *v1 + (int32_t)v2;
    unknown_ffffffffc93d423e();
    return unknown_11feafd0();
}

// Address range: 0x3b4a04 - 0x3b4a46
int64_t function_3b4a04(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 - 118); // 0x3b4a40
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x3b4a04
    *(char *)result = -7;
    return result;
}

// Address range: 0x3b4a48 - 0x3b4ab8
int64_t function_3b4a48(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3; // 0x3b4a48
    __asm_out_134((int16_t)a3, (int32_t)v3);
    int64_t v4 = unknown_9819058(); // 0x3b4a49
    char v5 = v3;
    char v6 = v5 + 96; // 0x3b4a4e
    *(char *)a4 = v6;
    *(int16_t *)a3 = (int16_t)v3;
    *(int32_t *)a2 = (int32_t)a4;
    *(char *)a1 = (char)v4;
    bool v7; // 0x3b4a48
    int64_t v8 = v7 ? -1 : 1; // 0x3b4a55
    int64_t v9 = v8 + a1; // 0x3b4a55
    int64_t v10 = v4 & 0xffffffff; // 0x3b4a56
    int64_t v11; // 0x3b4a48
    int64_t v12; // 0x3b4a48
    if ((v6 & (v5 ^ -128)) >= 0) {
        // 0x3b4a48
        v11 = v2;
        v12 = v9;
    } else {
        int32_t * v13 = (int32_t *)(v1 + 1); // 0x3b4a59
        *v13 = *v13 + (int32_t)v3;
        *(char *)(a4 & 0xffffffff) = *(char *)&v10 + (char)a4;
        uint32_t v14 = *(int32_t *)&v1; // 0x3b4a5e
        *(char *)(int64_t)v14 = 2 * (char)v14;
        int64_t v15 = unknown_6c44a073(v9); // 0x3b4a6d
        int32_t * v16 = (int32_t *)(v9 + 31); // 0x3b4a72
        *v16 = *v16 & 0x1886bdb;
        *(char *)v9 = *(char *)&v2;
        int64_t v17 = v9 + v8; // 0x3b4a79
        int64_t v18 = v2 + v8; // 0x3b4a79
        char * v19 = (char *)(v3 - 0x77f8fec3 + v1); // 0x3b4a7a
        unsigned char v20 = *v19; // 0x3b4a7a
        unsigned char v21 = v20 + (char)v3; // 0x3b4a7a
        *v19 = v21;
        unsigned char v22 = (char)v15; // 0x3b4a81
        unsigned char v23 = v21 < v20 ? 125 : 124; // 0x3b4a81
        unsigned char v24 = v22 - v23; // 0x3b4a81
        __asm_out_133(-67, v24);
        char * v25 = (char *)v10; // 0x3b4a8a
        *v25 = *v25 + (char)v10 + (char)(v21 < v20 | v23 > v22);
        char * v26 = (char *)(v15 & -256 | (int64_t)v24); // 0x3b4a8c
        *v26 = *v26 + v24;
        __asm_sti(v17);
        int32_t v27 = *(int32_t *)(4 * v3 + 0x3d00e83c + v18); // 0x3b4a8f
        int64_t v28 = v27 + (int32_t)v18; // 0x3b4a8f
        v2 = v28;
        v11 = v28;
        v12 = v17;
    }
    int64_t v29 = v12;
    int32_t * v30 = (int32_t *)(v3 - 65); // 0x3b4a96
    *v30 = *v30 + (int32_t)v11;
    v2 += (v7 ? -4 : 4);
    int64_t v31 = ((v29 + 31) % 256 | v29 & 0xffffff00) ^ 0xff00; // 0x3b4aa5
    uint32_t v32 = (int32_t)v10 % 32; // 0x3b4aa7
    if (v32 != 0) {
        int32_t * v33 = (int32_t *)v31; // 0x3b4aa7
        uint32_t v34 = *v33; // 0x3b4aa7
        *v33 = v34 >> 32 - v32 | v34 << v32;
    }
    __asm_fbld(*(float80_t *)(v31 - 0x50fec300));
    return v31 + 0xf20cef9e & 0xffffffff;
}

// Address range: 0x3b4adc - 0x3b4b06
int64_t function_3b4adc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = *(char *)0x2fb431f9; // 0x3b4af2
    int64_t v2; // 0x3b4adc
    *(char *)0x2fb431f9 = v1 + (char)((uint64_t)v2 / 256);
    return (int64_t)*(int32_t *)0xb3c4470425819b;
}

// Address range: 0x3b4b1b - 0x3b4b21
int64_t function_3b4b1b(void) {
    // 0x3b4b1b
    int64_t result; // 0x3b4b1b
    return result;
}

// Address range: 0x3b4b3c - 0x3b4b46
int64_t function_3b4b3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b4b3c
    int64_t v1; // 0x3b4b3c
    char * v2 = (char *)(a2 + 61 + 8 * v1); // 0x3b4b3c
    *v2 = *v2 + (char)(v1 / 256);
    int64_t v3; // 0x3b4b3c
    *(int32_t *)a1 = *(int32_t *)&v3 + (int32_t)a3;
    return v1 & 0xffffffff;
}

// Address range: 0x3b4b48 - 0x3b4b49
int64_t function_3b4b48(void) {
    // 0x3b4b48
    int64_t result; // 0x3b4b48
    return result;
}
