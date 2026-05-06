/*
 * Targeted RetDec C for native executable gap queue batch 1277.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x230066-0x230266 rank=- name=- kind=- bytes=- uncovered=-
 *   0x230266-0x230466 rank=- name=- kind=- bytes=- uncovered=-
 *   0x230466-0x230666 rank=- name=- kind=- bytes=- uncovered=-
 *   0x230666-0x230866 rank=- name=- kind=- bytes=- uncovered=-
 *   0x230a66-0x230c66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x230e66-0x231066 rank=- name=- kind=- bytes=- uncovered=-
 *   0x24c57d-0x24c77d rank=- name=- kind=- bytes=- uncovered=-
 *   0x24c77d-0x24c97d rank=- name=- kind=- bytes=- uncovered=-
 *   0x24c97d-0x24cb7d rank=- name=- kind=- bytes=- uncovered=-
 *   0x24cb7d-0x24cd7d rank=- name=- kind=- bytes=- uncovered=-
 *   0x24cd7d-0x24cf7d rank=- name=- kind=- bytes=- uncovered=-
 *   0x24cf7d-0x24d17d rank=- name=- kind=- bytes=- uncovered=-
 *   0x24d17d-0x24d37d rank=- name=- kind=- bytes=- uncovered=-
 *   0x24d37d-0x24d57d rank=- name=- kind=- bytes=- uncovered=-
 *   0x417542-0x417742 rank=- name=- kind=- bytes=- uncovered=-
 *   0x417b42-0x417d42 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
extern int g4;
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

int64_t function_2069936();
int64_t function_20da93e();
int64_t function_230066(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2300b6(int64_t a1);
int64_t function_2300ca(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_230233(int64_t a1, int64_t a2, int64_t a3);
int64_t function_230247(int64_t a1);
int64_t function_23024d(void);
int64_t function_230280(int64_t a1, int64_t a2);
int64_t function_230298(int64_t a1);
int64_t function_23029e(int64_t a1, int64_t a2);
int64_t function_2302b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_230312(int64_t a1, int64_t a2, int64_t a3);
int64_t function_230316(int64_t a1, int64_t a2);
int64_t function_230319(int64_t a1, int64_t a2, int32_t a3);
int64_t function_230326(int64_t a1, int64_t a2);
int64_t function_23032f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23033d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_23037a(void);
int64_t function_2303a2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_23040b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23049e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2305cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_230719(void);
int64_t function_23071e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_23074c(int64_t a1);
int64_t function_23078c(void);
int64_t function_2307eb(int64_t a1);
int64_t function_230845(void);
int64_t function_230a32();
int64_t function_230a66(int64_t a1, int64_t a2);
int64_t function_230a9b(void);
int64_t function_230abc(int64_t a1, int64_t a2);
int64_t function_230ae8(void);
int64_t function_230af8(int64_t a1);
int64_t function_230b0a(void);
int64_t function_230b20(void);
int64_t function_230b23(void);
int64_t function_230b25(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_230baf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_230bec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_230c53(void);
int64_t function_230e66(void);
int64_t function_230e9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_230ec3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_230f1f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_230fdc(int64_t a1);
int64_t function_230fe3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_230fee(void);
int64_t function_231047(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2316b6();
int64_t function_24c57d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24c63c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24c7a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24c90d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_24ca6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24cb90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24cc8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_24cdf1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24cf2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24d05b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_24d1b5(void);
int64_t function_24d1cc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_24d200(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_24d22d(void);
int64_t function_24d232(void);
int64_t function_24d27e(int64_t a1);
int64_t function_24d286(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24d2ed(int64_t a1);
int64_t function_24d3bd(void);
int64_t function_24d3d8(int64_t a1);
int64_t function_24d3ee(int64_t a1, int64_t a2, int64_t a3);
int64_t function_24d3f4(void);
int64_t function_24d47c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_24d528(void);
int64_t function_24d550(void);
int64_t function_29bd60e1();
int64_t function_41260c8f();
int64_t function_417542(void);
int64_t function_417551(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41755e(int64_t a1);
int64_t function_4175a7(void);
int64_t function_4175c8(void);
int64_t function_41760c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41764e(void);
int64_t function_4176b0(void);
int64_t function_4176fd(void);
int64_t function_417b42(int64_t a1, int64_t a2);
int64_t function_417b8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_417be5(void);
int64_t function_417c05(int64_t a1, int64_t a2, int64_t a3);
int64_t function_417c31(void);
int64_t function_417c43(void);
int64_t function_417c4f(void);
int64_t function_417cc9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_417cd1(void);
int64_t function_417d02(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44b367c7();
int64_t function_7661c35f();
int64_t function_b33960();
int64_t function_c4258();
int64_t function_c823b();
int64_t function_ffffffff880c097b();
int64_t function_ffffffff9f4ee9c3();
int64_t function_ffffffffa108d8a9();
int64_t function_ffffffffaff8c651();
int64_t function_ffffffffc5630c36();
int64_t function_ffffffffd0a5b33b();
int64_t unknown_1e3391d3();
int64_t unknown_20d0a14();
int64_t unknown_3d24ec11();
int64_t unknown_3df88884();
int64_t unknown_4707fbc();
int64_t unknown_4962d4c9();
int64_t unknown_682466e1();
int64_t unknown_7028f3f5();
int64_t unknown_79d688f0();
int64_t unknown_7c1742d5();
int64_t unknown_e1b6c8a();
int64_t unknown_ffffffff9dfc61a5();
int64_t unknown_ffffffffc79547bd();
int64_t unknown_ffffffffe3ac08a6();
int64_t unknown_ffffffffe86f5284();
int64_t unknown_ffffffffeadf5564();

// Address range: 0x230066 - 0x2300b2
int64_t function_230066(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x230066
    int64_t v1; // 0x230066
    int64_t v2 = v1 + 0x34631cbc; // 0x23006d
    *(char *)0x39e60ad801e8632a = (char)v2;
    int64_t v3 = v2 & 0xfe177ea2 | 0x1e8815d; // 0x23007b
    unsigned char v4 = (char)a4 + (char)a3; // 0x230080
    unsigned char v5 = v4 % 32;
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)v3; // 0x230084
        uint32_t v7 = *v6; // 0x230084
        uint32_t v8 = (int32_t)v5; // 0x230084
        *v6 = v7 >> 32 - v8 | v7 << v8;
    }
    int32_t * v9 = (int32_t *)(v3 - 55); // 0x23008c
    *v9 = *v9 + (int32_t)v3;
    int32_t v10 = __readgsdword((a4 & -256 | (int64_t)v4) + 126); // 0x230098
    int32_t * v11 = (int32_t *)(v3 + 14); // 0x2300a2
    *v11 = *v11 + (int32_t)(v1 ^ 256 * a3 & 0xff00);
    *(char *)a1 = (char)v3;
    bool v12; // 0x230066
    int64_t result = unknown_ffffffffe86f5284((v12 ? -1 : 1) + a1, v10 + (int32_t)a2); // 0x2300a6
    int32_t * v13 = (int32_t *)(a3 + 0x400ad82e); // 0x2300ab
    *v13 = *v13 + (int32_t)result;
    return result;
}

// Address range: 0x2300b6 - 0x2300ca
int64_t function_2300b6(int64_t a1) {
    // 0x2300b6
    int64_t v1; // 0x2300b6
    uint32_t result = (int32_t)(unknown_ffffffffc79547bd() & v1) - 0x174ba5e6; // 0x2300be
    *(int32_t *)0x7eab7976 = result + *(int32_t *)0x7eab7976;
    return result;
}

// Address range: 0x2300ca - 0x230231
int64_t function_2300ca(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    unsigned char v2 = (char)a4; // 0x2300ca
    char v3 = a4 / 256; // 0x2300ca
    char v4 = v3 + v2; // 0x2300ca
    int32_t v5 = __asm_insd((int16_t)a3); // 0x2300cc
    int32_t * v6 = (int32_t *)a1; // 0x2300cc
    *v6 = v5;
    uint64_t result = unknown_1e3391d3(); // 0x2300cd
    if (v4 < v2 || v4 == 0) {
        uint64_t v7 = result / 2 % 128; // 0x2300d5
        int64_t v8; // 0x2300ca
        char * v9 = (char *)(v8 - 0x50da1f8b); // 0x2300db
        *v9 = *v9 | v4;
        *(char *)0x498cf001e8e9506f = (char)v7;
        return v7 | result & -256;
    }
    // 0x230104
    *v6 = *(int32_t *)&v1;
    bool v10; // 0x2300ca
    int64_t v11 = v1 + (v10 ? -4 : 4); // 0x230104
    v1 = v11;
    if (v4 < 0 != ((v4 ^ v2) & (v4 ^ v3)) < 0) {
        // 0x23012a
        return result;
    }
    // 0x23010a
    *(int32_t *)(v11 + 0xe896443e * result & 0xffffffff) = *(int32_t *)v11;
    return result;
}

// Address range: 0x230233 - 0x23023e
int64_t function_230233(int64_t a1, int64_t a2, int64_t a3) {
    // 0x230233
    int64_t result; // 0x230233
    *(int32_t *)(result + 0x20373960) = (int32_t)a3;
    return result;
}

// Address range: 0x230247 - 0x230248
int64_t function_230247(int64_t a1) {
    // 0x230247
    int64_t result; // 0x230247
    return result;
}

// Address range: 0x23024d - 0x23025a
int64_t function_23024d(void) {
    // 0x23024d
    return function_2069936();
}

// Address range: 0x230280 - 0x230284
int64_t function_230280(int64_t a1, int64_t a2) {
    // 0x230280
    int64_t result; // 0x230280
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x230298 - 0x23029b
int64_t function_230298(int64_t a1) {
    // 0x230298
    int64_t result; // 0x230298
    return result;
}

// Address range: 0x23029e - 0x2302b8
int64_t function_23029e(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)((int64_t)(0x5800b3d8 * *(int32_t *)-0x24283656) + 0x2ba66282); // 0x2302ac
    int64_t v2; // 0x23029e
    int32_t v3 = v1 | (int32_t)v2; // 0x2302ac
    return 0x4000 * (int64_t)(v3 == 0) | (int64_t)(v3 & -0xff01 | 512) | 0x8000 * (int64_t)(v3 < 0) | 1024 * (int64_t)(llvm_ctpop_i8((char)v3) % 2 == 0);
}

// Address range: 0x2302b8 - 0x230308
int64_t function_2302b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2302b8
    int64_t result; // 0x2302b8
    bool v1; // 0x2302b8
    if (v1) {
        int32_t * v2 = (int32_t *)(2 * result); // 0x2302f7
        *v2 = *v2 + (int32_t)a4;
        return result;
    }
    // 0x2302ba
    *(int32_t *)a3 = (int32_t)result + (int32_t)a3;
    float80_t v3; // 0x2302b8
    *(int16_t *)(a1 - 88 + a4) = (int16_t)v3;
    int64_t v4; // 0x2302b8
    return __asm_hlt((int32_t)(int64_t)&v4 + (int32_t)a1);
}

// Address range: 0x230312 - 0x230316
int64_t function_230312(int64_t a1, int64_t a2, int64_t a3) {
    // 0x230312
    int64_t v1; // 0x230312
    return __asm_iretd(a1, a2, (int32_t)v1 + (int32_t)a3);
}

// Address range: 0x230316 - 0x230319
int64_t function_230316(int64_t a1, int64_t a2) {
    // 0x230316
    __asm_out((char)a1, (char)a2);
    int64_t result; // 0x230316
    return result;
}

// Address range: 0x230319 - 0x230323
int64_t function_230319(int64_t a1, int64_t a2, int32_t a3) {
    // 0x230319
    int64_t v1; // 0x230319
    char * v2 = (char *)(v1 + 0x68a60003); // 0x230319
    *v2 = *v2 + (char)a3;
    int64_t result = __asm_iretd(a1, a2, a3); // 0x23031f
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x230326 - 0x230329
int64_t function_230326(int64_t a1, int64_t a2) {
    // 0x230326
    int64_t result; // 0x230326
    return result;
}

// Address range: 0x23032f - 0x230334
int64_t function_23032f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23032f
    int64_t result; // 0x23032f
    *(char *)a3 = (char)result + (char)a3;
    return result;
}

// Address range: 0x23033d - 0x230372
int64_t function_23033d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t v3 = __asm_wait(); // 0x230342
    char * v4 = (char *)(a4 + 87); // 0x23034a
    *v4 = *v4 + (char)(a3 / 256);
    *(int32_t *)v1 = *(int32_t *)&v1 & 0x34b7a66a;
    bool v5; // 0x23033d
    *(int32_t *)((v5 ? -2 : 2) + a1) = *(int32_t *)&v2;
    int64_t v6; // 0x23033d
    return (int64_t)(*(int32_t *)&v6 + (int32_t)v3);
}

// Address range: 0x23037a - 0x23037b
int64_t function_23037a(void) {
    // 0x23037a
    int64_t result; // 0x23037a
    return result;
}

// Address range: 0x2303a2 - 0x2303f4
int64_t function_2303a2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    char * v1 = (char *)(a4 + 63); // 0x2303a2
    unsigned char v2 = *v1; // 0x2303a2
    unsigned char v3 = v2 + (char)(a4 / 256); // 0x2303a2
    *v1 = v3;
    int64_t v4; // 0x2303a2
    int32_t * v5 = (int32_t *)(8 * v4 + v4); // 0x2303a5
    *v5 = *v5 + (int32_t)v4 + (int32_t)(v3 < v2);
    int64_t v6 = (v4 & 0xffffffff | 0x100000000 * a3) ^ 99; // 0x2303aa
    int64_t v7 = a1 & 0xffffffff; // 0x2303aa
    int64_t v8 = v6 / v7; // 0x2303aa
    int64_t v9 = 257 * v8 & 0xff00 | v8 & 0xffff00ff; // 0x2303b1
    uint32_t v10 = *(int32_t *)v9 - 0x6fe4c7b8 + (int32_t)v9; // 0x2303bc
    int64_t v11; // 0x2303a2
    *(int32_t *)a2 = *(int32_t *)&v11 + (int32_t)v4;
    *(char *)-0x4cd0612d = *(char *)-0x4cd0612d + (char)(v4 / 256);
    char v12 = *(char *)(v4 & 0xffffffff & v6 % v7); // 0x2303d7
    int64_t v13 = 256 * (int64_t)((char)(v10 / 256) - v12) | (int64_t)(v10 & -0xff01); // 0x2303d7
    int32_t v14 = *(int32_t *)(v13 - 0x2c54e9d0); // 0x2303d9
    char v15 = __asm_in_133(104); // 0x2303df
    char * v16 = (char *)(v4 + (int64_t)&g1); // 0x2303e1
    *v16 = *v16 + (char)v4;
    return (int64_t)(v14 & -256 & (int32_t)v13) | (int64_t)v15;
}

// Address range: 0x23040b - 0x230463
int64_t function_23040b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_3d24ec11(); // 0x23040b
    int32_t * v2 = (int32_t *)(a1 - 0x4e3ae504); // 0x230410
    *v2 = *v2 + (int32_t)a1;
    int64_t v3 = a4 - 1; // 0x230418
    if (v3 == 0) {
        // 0x23045e
        return unknown_ffffffffeadf5564();
    }
    // 0x23041a
    __asm_rcl(*(int32_t *)(a4 - 25));
    int64_t v4; // 0x23040b
    int32_t * v5 = (int32_t *)(a1 - 0x7ff3cb51 + 2 * v4); // 0x23041d
    int64_t v6; // 0x23040b
    *v5 = *v5 + (int32_t)v6;
    *(char *)v6 = *(char *)&v6 + (char)v3;
    return v1 | 129;
}

// Address range: 0x23049e - 0x2305cd
int64_t function_23049e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffe3ac08a6(); // 0x2304a0
    bool v2; // 0x23049e
    int64_t v3 = v2 ? 16 : 15; // 0x2304a5
    char v4 = ((int32_t)(v1 - v3 & 248 | v1 & 0xffffff00) ^ -8) < 0x1e8ebc8 ? 19 : 18; // 0x2304b2
    int64_t v5; // 0x23049e
    *(char *)a2 = (char)v5 - v4;
    int64_t v6; // 0x23049e
    __asm_outsd((int16_t)a3, *(int32_t *)&v6);
    int64_t v7 = unknown_4707fbc(); // 0x2304b6
    char * v8 = (char *)(v7 - 0xd08bf00); // 0x2304bb
    *v8 = *v8 + (char)v7;
    return function_c823b(a1, a2, a3, a4, v5, v5, 0x75e1d836);
}

// Address range: 0x2305cd - 0x230719
int64_t function_2305cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2305cd
    bool v1; // 0x2305cd
    return function_c823b(a1, a2, 0x366950a6, a4, a5, a6, 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2);
}

// Address range: 0x230719 - 0x23071e
int64_t function_230719(void) {
    // 0x230719
    return function_2316b6();
}

// Address range: 0x23071e - 0x23074b
int64_t function_23071e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x23071e
    int64_t v1; // 0x23071e
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    uint64_t v3 = v2 + v1; // 0x230720
    int32_t * v4 = (int32_t *)(a3 + 1); // 0x230723
    *v4 = *v4 + (int32_t)v1;
    uint64_t v5 = v3 & 0xffffff00; // 0x230726
    int64_t v6 = v5 | (int64_t)*(char *)(v3 % 256 + v1); // 0x230726
    char * v7 = (char *)(v6 + 10); // 0x230727
    *v7 = *v7 + (char)(a4 / 256);
    unsigned char v8 = (char)(v5 / 256); // 0x23072e
    unsigned char v9 = v8 + (char)(v1 / 256); // 0x23072e
    int64_t v10 = 256 * (int64_t)v9 | v6 & 0xffff00ff; // 0x23072e
    char * v11 = (char *)(v10 + a4); // 0x230730
    *v11 = *v11 - (v9 < v8 ? -23 : -24);
    int32_t * v12 = (int32_t *)(v10 + v1); // 0x230734
    *v12 = *v12 + (int32_t)a2;
    int32_t * v13 = (int32_t *)(a2 + 0xd4c428e); // 0x230737
    *v13 = *v13 - 0x59a9d5d6;
    return __asm_iretd((int64_t)&g4, (int64_t)&g4, (int32_t)&g4);
}

// Address range: 0x23074c - 0x230758
int64_t function_23074c(int64_t a1) {
    // 0x23074c
    return function_ffffffffaff8c651();
}

// Address range: 0x23078c - 0x230793
int64_t function_23078c(void) {
    // 0x23078c
    return function_ffffffff880c097b();
}

// Address range: 0x2307eb - 0x2307ef
int64_t function_2307eb(int64_t a1) {
    // 0x2307eb
    int64_t result; // 0x2307eb
    return result;
}

// Address range: 0x230845 - 0x230848
int64_t function_230845(void) {
    // 0x230845
    int64_t result; // 0x230845
    return result;
}

// Address range: 0x230a66 - 0x230a67
int64_t function_230a66(int64_t a1, int64_t a2) {
    // 0x230a66
    int64_t v1; // 0x230a66
    return v1 & 0xffffffff;
}

// Address range: 0x230a9b - 0x230a9d
int64_t function_230a9b(void) {
    // 0x230a9b
    return function_230a32();
}

// Address range: 0x230abc - 0x230ad8
int64_t function_230abc(int64_t a1, int64_t a2) {
    // 0x230abc
    int64_t result; // 0x230abc
    int32_t * v1 = (int32_t *)(result + 0xa963afe); // 0x230ac2
    *v1 = *v1 + (int32_t)result;
    int32_t * v2 = (int32_t *)(result + 35); // 0x230acd
    *v2 = *v2 + (int32_t)a2;
    *(int64_t *)0xe8510978 = -0x7fdcbd65;
    return result;
}

// Address range: 0x230ae8 - 0x230aed
int64_t function_230ae8(void) {
    // 0x230ae8
    int64_t result; // 0x230ae8
    uint64_t v1 = result;
    *(char *)v1 = (char)(v1 / 256);
    return result;
}

// Address range: 0x230af8 - 0x230afb
int64_t function_230af8(int64_t a1) {
    // 0x230af8
    int64_t result; // 0x230af8
    return result;
}

// Address range: 0x230b0a - 0x230b10
int64_t function_230b0a(void) {
    // 0x230b0a
    int64_t result; // 0x230b0a
    return result;
}

// Address range: 0x230b20 - 0x230b22
int64_t function_230b20(void) {
    // 0x230b20
    int64_t v1; // 0x230b20
    return function_230b25(v1, v1, v1, v1, (int64_t)&g4);
}

// Address range: 0x230b23 - 0x230b25
int64_t function_230b23(void) {
    // 0x230b23
    int64_t v1; // 0x230b23
    uint64_t v2 = v1;
    bool v3; // 0x230b23
    return 256 * (v2 / 256 + v1 + (int64_t)v3) & 0xff00 | v2 & -0xff01;
}

// Address range: 0x230b25 - 0x230b93
int64_t function_230b25(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x230b25
    int64_t v1; // 0x230b25
    char * v2 = (char *)(v1 - 0x17ff5500); // 0x230b25
    char v3 = v1; // 0x230b25
    *v2 = *v2 + v3;
    char * v4 = (char *)(a1 + 110); // 0x230b2d
    *v4 = *v4 + (char)a4;
    unsigned char v5 = v3 | -12; // 0x230b30
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x230b30
    int64_t v7 = v1 & -256; // 0x230b30
    bool v8; // 0x230b25
    *(int64_t *)((2 * v1 & 0xffffffff) - 8) = 0x4000 * (int64_t)v8 | 1024 * (int64_t)v8 | 512 * (int64_t)v8 | 256 * (int64_t)v8 | 4 * (int64_t)(v6 % 2 == 0) | 130;
    int32_t * v9 = (int32_t *)(a3 - 0x6c6fe18); // 0x230b37
    int32_t v10 = a3; // 0x230b37
    *v9 = *v9 | v10;
    int64_t v11; // 0x230b25
    uint32_t v12 = *(int32_t *)&v11 + v10; // 0x230b3d
    *(int32_t *)-0x28a3fb3c978e0909 = (int32_t)(v7 | (int64_t)v5);
    int64_t result = v7 | (int64_t)(v5 - *(char *)(a1 - 24)); // 0x230b48
    int32_t * v13 = (int32_t *)((int64_t)v12 + 0x19b5abb5); // 0x230b4b
    uint32_t v14 = *v13; // 0x230b4b
    int32_t v15 = a1; // 0x230b4b
    uint32_t v16 = v14 + v15; // 0x230b4b
    *v13 = v16;
    *(int32_t *)(result - 20) = v15;
    if (v16 < v14 || v16 == 0) {
        // 0x230b83
        unknown_e1b6c8a();
        int32_t * v17 = (int32_t *)(a4 + 117); // 0x230b89
        *v17 = (int32_t)(v16 < v14) - (int32_t)a2 + *v17;
        *(char *)a1 = __asm_insb((int16_t)v12);
        return function_29bd60e1();
    }
    // 0x230b57
    return result;
}

// Address range: 0x230baf - 0x230bb6
int64_t function_230baf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x230baf
    int64_t v1; // 0x230baf
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x230bec - 0x230c06
int64_t function_230bec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t v2; // 0x230bec
    int32_t * v3 = (int32_t *)(v2 - 102); // 0x230bec
    *v3 = *v3 + (int32_t)v2;
    int64_t v4 = unknown_7028f3f5(); // 0x230bef
    __asm_out(11, (char)v4 ^ -15);
    uint32_t v5 = (int32_t)a4 % 32; // 0x230bf9
    if (v5 != 0) {
        uint32_t v6 = *(int32_t *)&v1; // 0x230bf9
        *(int32_t *)v1 = v6 >> 32 - v5 | v6 << v5;
    }
    return v4 & -256 | (int64_t)*(char *)-0x75ff867c74fe17b6;
}

// Address range: 0x230c53 - 0x230c56
int64_t function_230c53(void) {
    // 0x230c53
    int64_t result; // 0x230c53
    return result;
}

// Address range: 0x230e66 - 0x230e67
int64_t function_230e66(void) {
    // 0x230e66
    int64_t result; // 0x230e66
    return result;
}

// Address range: 0x230e9f - 0x230ea9
int64_t function_230e9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x230e9f
    return unknown_ffffffff9dfc61a5(a1, a2, a3, a4, a5);
}

// Address range: 0x230ec3 - 0x230f06
int64_t function_230ec3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x230ec3
    int64_t v1; // 0x230ec3
    __asm_outsb((int16_t)a3, (char)v1);
    bool v2; // 0x230ec3
    int64_t v3 = (v2 ? -4 : 4) + a2; // 0x230eda
    int64_t v4 = unknown_682466e1(0x60901e8, v3, 0xeb260136); // 0x230edb
    int64_t v5 = unknown_79d688f0(); // 0x230ee9
    char * v6 = (char *)(4 * v3 - 0x52fd0f9f + ((54 - v4) % 256 | 0xeb260100)); // 0x230eef
    *v6 = *v6 - 111;
    int32_t v7 = *(int32_t *)v5; // 0x230efd
    char v8 = *(char *)0xeb2601c3; // 0x230f00
    *(char *)0xeb2601c3 = v8 ^ (char)(v7 & (int32_t)a4);
    return v5 & -0xff01 | (int64_t)&g3;
}

// Address range: 0x230f1f - 0x230f27
int64_t function_230f1f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x230f1f
    int64_t v1; // 0x230f1f
    return (int64_t)(*(int32_t *)(a3 + 0x4108f3bb) + (int32_t)v1);
}

// Address range: 0x230fdc - 0x230fdf
int64_t function_230fdc(int64_t a1) {
    // 0x230fdc
    int64_t result; // 0x230fdc
    return result;
}

// Address range: 0x230fe3 - 0x230feb
int64_t function_230fe3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x230fe3
    return function_44b367c7();
}

// Address range: 0x230fee - 0x231008
int64_t function_230fee(void) {
    // 0x230fee
    int64_t v1; // 0x230fee
    int64_t v2 = v1 + 0xc7192069; // 0x230fee
    char v3 = *(char *)0x14453ffa; // 0x230ff3
    *(char *)0x14453ffa = v3 + (char)((uint64_t)v1 / 256);
    *(char *)-0x4e60ed3b14cdff77 = (char)v2;
    return v2 & 0xffffffff;
}

// Address range: 0x231047 - 0x23105d
int64_t function_231047(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 0x34a52eb1); // 0x231052
    int64_t result; // 0x231047
    *v1 = *v1 - (int32_t)result;
    return result;
}

// Address range: 0x24c57d - 0x24c63c
int64_t function_24c57d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x24c57d
    int64_t v1; // 0x24c57d
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x24c57d
    return function_c4258(a1, a2, a3, v2, a4, v2, v2);
}

// Address range: 0x24c63c - 0x24c7a7
int64_t function_24c63c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x24c63c
    int64_t v1; // 0x24c63c
    return function_c4258(v1, 0x4e1c633e, a3, a4, a5, v1, 0x24a8cf);
}

// Address range: 0x24c7a7 - 0x24c90d
int64_t function_24c7a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x24c7a7
    int64_t v1; // 0x24c7a7
    return function_c4258(a1, a2, a3, a4, v1, v1, 0x24ab74);
}

// Address range: 0x24c90d - 0x24ca6e
int64_t function_24c90d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x24c90d
    return function_c4258(a1, a2, a3, a4, a5, a6, 0x44471c00);
}

// Address range: 0x24ca6e - 0x24cb90
int64_t function_24ca6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24ca6e
    int64_t v1; // bp-40, 0x24ca6e
    int64_t v2 = (int64_t)&v1; // 0x24caca
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x24cae0
    int64_t v4 = *(int64_t *)(v2 + 32); // 0x24cae3
    *v3 = v4;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x24cae7
    *v5 = v2;
    int64_t * v6 = (int64_t *)(v2 + 16); // 0x24cb01
    int64_t v7 = *v6; // 0x24cb01
    *v3 = v7;
    *v5 = 0x133f8900;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x24cb29
    *v8 = 0x61daa40a;
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x24cb2f
    *v9 = v4;
    v1 = *v5;
    *v8 = 0x1b37bf92;
    *v9 = v7;
    *v6 = *v5;
    int64_t v10 = *v3; // 0x24cb4d
    *v5 = v10;
    *v8 = v10;
    *v3 = v2 + 8;
    int64_t v11; // 0x24ca6e
    return function_c4258(a1, a2, a3, a4, v11, v11, 0x24b05c);
}

// Address range: 0x24cb90 - 0x24cc8e
int64_t function_24cb90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x24cb90
    int64_t v1; // 0x24cb90
    return function_c4258(a1, a2, a3, a4, v1, v1, 0x6bda6fa7);
}

// Address range: 0x24cc8e - 0x24cdf1
int64_t function_24cc8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x24cc8e
    int64_t v1; // bp-32, 0x24cc8e
    v1 = (int64_t)&v1 + 16;
    return function_c4258(a1, a2, a3, a4, a5, a6, 0x360bde57);
}

// Address range: 0x24cdf1 - 0x24cf2b
int64_t function_24cdf1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24cdf1
    int64_t v1; // 0x24cdf1
    return function_c4258(a1, a2, a3, v1, v1, v1, a4);
}

// Address range: 0x24cf2b - 0x24d05b
int64_t function_24cf2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x24cf2b
    bool v1; // 0x24cf2b
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x24cf2b
    int64_t v3 = v2; // bp-48, 0x24cf8f
    int64_t v4 = (int64_t)&v3; // 0x24cfd9
    int64_t * v5 = (int64_t *)(v4 - 8); // 0x24cfe1
    *v5 = 0x7f729002;
    int64_t * v6 = (int64_t *)(v4 - 16); // 0x24cfe6
    *v6 = v2;
    *(int64_t *)(v4 + 8) = *v5;
    *v5 = 0x2ca70010;
    *v6 = a4;
    *(int64_t *)(v4 + 24) = *v5;
    *v6 = v3;
    *v5 = v4;
    v3 = v4 + 16;
    int64_t v7; // 0x24cf2b
    return function_c4258(a1, a2, a3, a4, a5, v7, 0x70a74100);
}

// Address range: 0x24d05b - 0x24d1b5
int64_t function_24d05b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x24d05b
    int64_t v1; // 0x24d05b
    return function_c4258(a1, a2, a3, a4, a5, v1, 0x2dc4022f);
}

// Address range: 0x24d1b5 - 0x24d1ba
int64_t function_24d1b5(void) {
    // 0x24d1b5
    int64_t result; // 0x24d1b5
    return result;
}

// Address range: 0x24d1cc - 0x24d1dc
int64_t function_24d1cc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x24d1cc
    unknown_7c1742d5();
    int64_t v1; // 0x24d1cc
    *(char *)a2 = (char)((a3 & 0xff00) != 0) + (char)a3 + (char)v1;
    return function_ffffffffd0a5b33b(a2);
}

// Address range: 0x24d200 - 0x24d223
int64_t function_24d200(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x24d200
    int64_t v1; // 0x24d200
    *(int32_t *)(a3 + 122) = (int32_t)v1;
    bool v2; // 0x24d200
    return unknown_20d0a14((int32_t)a4 + (int32_t)a1 + (int32_t)v2);
}

// Address range: 0x24d22d - 0x24d232
int64_t function_24d22d(void) {
    // 0x24d22d
    return function_ffffffffc5630c36();
}

// Address range: 0x24d232 - 0x24d23b
int64_t function_24d232(void) {
    // 0x24d232
    return __asm_in(50);
}

// Address range: 0x24d27e - 0x24d27f
int64_t function_24d27e(int64_t a1) {
    // 0x24d27e
    int64_t result; // 0x24d27e
    return result;
}

// Address range: 0x24d286 - 0x24d28e
int64_t function_24d286(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x24d289
    int64_t result; // 0x24d286
    if (v1 != 0) {
        uint32_t v2 = (int32_t)result;
        *(int32_t *)result = v2 >> 32 - v1 | v2 << v1;
    }
    return result;
}

// Address range: 0x24d2ed - 0x24d2f0
int64_t function_24d2ed(int64_t a1) {
    // 0x24d2ed
    int64_t result; // 0x24d2ed
    return result;
}

// Address range: 0x24d3bd - 0x24d3c2
int64_t function_24d3bd(void) {
    // 0x24d3bd
    return function_ffffffff9f4ee9c3();
}

// Address range: 0x24d3d8 - 0x24d3db
int64_t function_24d3d8(int64_t a1) {
    // 0x24d3d8
    int64_t result; // 0x24d3d8
    return result;
}

// Address range: 0x24d3ee - 0x24d3f4
int64_t function_24d3ee(int64_t a1, int64_t a2, int64_t a3) {
    // 0x24d3ee
    int64_t v1; // 0x24d3ee
    return v1 & a3;
}

// Address range: 0x24d3f4 - 0x24d3f9
int64_t function_24d3f4(void) {
    // 0x24d3f4
    return function_20da93e();
}

// Address range: 0x24d47c - 0x24d4d4
int64_t function_24d47c(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_3df88884(); // 0x24d47e
    int64_t v2; // 0x24d47c
    int32_t * v3 = (int32_t *)(v2 + 0x54d576f0); // 0x24d490
    *v3 = *v3 + (int32_t)a2;
    return 2 * (v1 + 2 * v2) & 0xfffffffe ^ 0x26002c10;
}

// Address range: 0x24d528 - 0x24d52d
int64_t function_24d528(void) {
    // 0x24d528
    int64_t v1; // 0x24d528
    uint64_t v2 = v1;
    return v2 / 2 % 128 | v2 & -256;
}

// Address range: 0x24d550 - 0x24d55d
int64_t function_24d550(void) {
    unsigned char v1 = *(char *)-0x176b6057; // 0x24d550
    *(char *)-0x176b6057 = v1 / 128 | 2 * v1;
    int64_t result; // 0x24d550
    return result;
}

// Address range: 0x417542 - 0x417543
int64_t function_417542(void) {
    // 0x417542
    int64_t result; // 0x417542
    return result;
}

// Address range: 0x417551 - 0x41755e
int64_t function_417551(int64_t a1, int64_t a2, int64_t a3) {
    // 0x417551
    int64_t v1; // 0x417551
    uint64_t v2 = v1 + 63; // 0x417554
    *(char *)a1 = (char)v2;
    return v2 % 256 | v1 & -256;
}

// Address range: 0x41755e - 0x41755f
int64_t function_41755e(int64_t a1) {
    // 0x41755e
    int64_t result; // 0x41755e
    return result;
}

// Address range: 0x4175a7 - 0x4175ad
int64_t function_4175a7(void) {
    // 0x4175a7
    return function_7661c35f();
}

// Address range: 0x4175c8 - 0x4175cb
int64_t function_4175c8(void) {
    // 0x4175c8
    int64_t result; // 0x4175c8
    return result;
}

// Address range: 0x41760c - 0x41761b
int64_t function_41760c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41760c
    int64_t v1; // 0x41760c
    __asm_out_134((int16_t)a3, (int32_t)v1);
    __asm_iretd((int64_t)&g4, (int64_t)&g4, (int32_t)&g4);
    return function_41260c8f();
}

// Address range: 0x41764e - 0x41764f
int64_t function_41764e(void) {
    // 0x41764e
    int64_t result; // 0x41764e
    return result;
}

// Address range: 0x4176b0 - 0x4176b1
int64_t function_4176b0(void) {
    // 0x4176b0
    int64_t result; // 0x4176b0
    return result;
}

// Address range: 0x4176fd - 0x4176ff
int64_t function_4176fd(void) {
    // 0x4176fd
    return function_4176b0();
}

// Address range: 0x417b42 - 0x417b43
int64_t function_417b42(int64_t a1, int64_t a2) {
    // 0x417b42
    int64_t result; // 0x417b42
    return result;
}

// Address range: 0x417b8a - 0x417ba1
int64_t function_417b8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int16_t v1 = a3; // 0x417b90
    int64_t v2; // 0x417b8a
    __asm_out_135(v1, (char)v2);
    int128_t v3; // 0x417b8a
    __asm_movups(v3);
    *(int32_t *)(v2 + 0xe1e22b4c & 0xffffffff) = __asm_insd(v1);
    return a5 & 0xffffffff;
}

// Address range: 0x417be5 - 0x417be6
int64_t function_417be5(void) {
    // 0x417be5
    int64_t result; // 0x417be5
    return result;
}

// Address range: 0x417c05 - 0x417c22
int64_t function_417c05(int64_t a1, int64_t a2, int64_t a3) {
    // 0x417c05
    int64_t v1; // 0x417c05
    int32_t * v2 = (int32_t *)((v1 & 0xffffff00 | 206) + 0x774537a3); // 0x417c0f
    *v2 = *v2 | (int32_t)a3;
    int32_t * v3 = (int32_t *)(a3 + 39); // 0x417c15
    *v3 = *v3 - 1;
    int64_t v4; // 0x417c05
    *(char *)a3 = *(char *)&v4 + (char)(v1 / 256);
    return function_ffffffffa108d8a9();
}

// Address range: 0x417c31 - 0x417c32
int64_t function_417c31(void) {
    // 0x417c31
    int64_t result; // 0x417c31
    return result;
}

// Address range: 0x417c43 - 0x417c46
int64_t function_417c43(void) {
    // 0x417c43
    return function_417c31();
}

// Address range: 0x417c4f - 0x417c55
int64_t function_417c4f(void) {
    // 0x417c4f
    int64_t v1; // 0x417c4f
    return v1 + 0xd4b4a712 & 0xffffffff;
}

// Address range: 0x417cc9 - 0x417cd1
int64_t function_417cc9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x417cc9
    *(char *)a1 = __asm_in_136((int16_t)a3);
    bool v1; // 0x417cc9
    return function_b33960((v1 ? -1 : 1) + a1);
}

// Address range: 0x417cd1 - 0x417cd9
int64_t function_417cd1(void) {
    // 0x417cd1
    return unknown_4962d4c9();
}

// Address range: 0x417d02 - 0x417d09
int64_t function_417d02(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(8 * a4 + a3); // 0x417d02
    int64_t v2; // 0x417d02
    *v1 = *v1 | (int32_t)v2;
    int64_t result; // 0x417d02
    *(int32_t *)result = *(int32_t *)&result + (int32_t)a3;
    return result;
}
