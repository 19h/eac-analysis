/*
 * Targeted RetDec C for native executable gap queue batch 1247.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xc80bb-0xc82bb rank=- name=- kind=- bytes=- uncovered=-
 *   0xc82bb-0xc84bb rank=- name=- kind=- bytes=- uncovered=-
 *   0xc84bb-0xc86bb rank=- name=- kind=- bytes=- uncovered=-
 *   0xc86bb-0xc88bb rank=- name=- kind=- bytes=- uncovered=-
 *   0xc88bb-0xc8abb rank=- name=- kind=- bytes=- uncovered=-
 *   0xc8abb-0xc8cbb rank=- name=- kind=- bytes=- uncovered=-
 *   0xc8cbb-0xc8ebb rank=- name=- kind=- bytes=- uncovered=-
 *   0xc8ebb-0xc90bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1bf3ce-0x1bf5ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1bf5ce-0x1bf7ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1bf7ce-0x1bf9ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1bf9ce-0x1bfbce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1bfdce-0x1bffce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1bffce-0x1c01ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c01ce-0x1c03ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x4930c9-0x4932c9 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_13f3a1e();
int64_t function_1bf3ce(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1bf3e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bf41e(void);
int64_t function_1bf420(void);
int64_t function_1bf43e(void);
int64_t function_1bf454(int64_t a1, int64_t a2);
int64_t function_1bf461(int64_t a1);
int64_t function_1bf50f(int64_t a1);
int64_t function_1bf56f(int64_t a1);
int64_t function_1bf57a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1bf596(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bf5f7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1bf622(void);
int64_t function_1bf654(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bf747(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bf7b3(int64_t a1);
int64_t function_1bf7e5(int64_t a1);
int64_t function_1bf7fe(void);
int64_t function_1bf812(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1bf8c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1bf97f(void);
int64_t function_1bf9a7(void);
int64_t function_1bf9b4(int64_t a1);
int64_t function_1bfa31(int64_t a1);
int64_t function_1bfa44(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1bfa5d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1bfa8c(void);
int64_t function_1bfabe(void);
int64_t function_1bfacd(void);
int64_t function_1bfad3(void);
int64_t function_1bfad8(int64_t a1);
int64_t function_1bfb20(void);
int64_t function_1bfb2c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1bfb62(void);
int64_t function_1bfb76(int64_t a1, int64_t a2);
int64_t function_1bfb95(int64_t a1);
int64_t function_1bfba2(int64_t a1);
int64_t function_1bfdce(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bfe02(void);
int64_t function_1bfe16(int64_t a1, int64_t a2);
int64_t function_1bfe37(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1bfe76(void);
int64_t function_1bfee9(void);
int64_t function_1bff06(void);
int64_t function_1bff24(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1bff38(int64_t a1);
int64_t function_1bffbd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bfffd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c001a(void);
int64_t function_1c0063(void);
int64_t function_1c00f7(void);
int64_t function_1c013b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1c0160(int64_t a1);
int64_t function_1c0193(int64_t a1);
int64_t function_1c01d0(void);
int64_t function_1c0221(int64_t a1);
int64_t function_1c0241(void);
int64_t function_1c0247(int64_t a1);
int64_t function_1c026d(void);
int64_t function_1c0280(int64_t a1, int64_t a2);
int64_t function_1c02a8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1c02b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c0316(void);
int64_t function_1c0318(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c0363(void);
int64_t function_1c03c3(int64_t a1, int64_t a2);
int64_t function_4930c9(void);
int64_t function_493100(void);
int64_t function_493160(int64_t a1);
int64_t function_49319a(int64_t a1);
int64_t function_4931a1(void);
int64_t function_4931d7(void);
int64_t function_49323d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint32_t result);
int64_t function_4e1de2fd();
int64_t function_c80bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, int64_t a8);
int64_t function_ffffffffe2cbfc3a();
int64_t function_ffffffffed78d8fb();
int64_t unknown_3abc2ae0();
int64_t unknown_4c287d2b();
int64_t unknown_6c807f68();
int64_t unknown_71f98cd8();
int64_t unknown_790ce3ce();
int64_t unknown_7a08dbf0();
int64_t unknown_7fe5f54();
int64_t unknown_ffffffff881cce56();
int64_t unknown_ffffffff890cd686();
int64_t unknown_ffffffffd4229752();
int64_t unknown_ffffffffe8e4180c();

// Address range: 0xc80bb - 0xc90ba
int64_t function_c80bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, int64_t a8) {
    // 0xc80bb
    int64_t v1; // bp-16, 0xc80bb
    v1 = (int64_t)&v1 + 24;
    int64_t * v2 = (int64_t *)(a1 + 8); // 0xc81fc
    int64_t * v3 = (int64_t *)a1; // 0xc81fc
    int64_t v4 = a1 - 8; // 0xc81ff
    int64_t * v5 = (int64_t *)v4; // 0xc81ff
    *(int64_t *)(a1 - 24) = v4;
    *v2 = 0x27957e1b;
    *v5 = a3;
    *(int64_t *)(a1 - 16) = a6;
    int64_t v6 = *v5; // 0xc827b
    *v5 = 0x100000000 * a8 >> 32;
    int64_t v7 = *v3; // 0xc828e
    int64_t v8 = *v3 ^ a1 ^ v7; // 0xc828e
    *v3 = v8;
    int64_t * v9 = (int64_t *)(v8 - 8); // 0xc829d
    *(int64_t *)v8 = 0x7e8dd11;
    *v9 = 0x4ba01ca1;
    int64_t * v10 = (int64_t *)(v8 - 32); // 0xc82b5
    int64_t * v11 = (int64_t *)(v8 - 40); // 0xc82ba
    *v11 = a2;
    *v10 = v6;
    int64_t v12 = *v11; // 0xc82c3
    int64_t v13 = v8 - 24; // 0xc82db
    int64_t * v14 = (int64_t *)v13; // 0xc82db
    int64_t v15 = v8 - 16; // 0xc82e4
    int64_t * v16 = (int64_t *)v15; // 0xc82f5
    *v14 = 0x487c9e09;
    *v10 = v12 - 0x5cfe57a7;
    *v16 = v12;
    *v14 = v15;
    *v16 = v15;
    *v9 = *v5;
    *v14 = *v2;
    *v10 = v13;
    int64_t v17 = *v14; // 0xc8392
    *v11 = v17;
    int64_t v18 = *v14; // 0xc839a
    int64_t * v19 = (int64_t *)(v18 - 8); // 0xc83a3
    int64_t v20 = v18 - 16; // 0xc83a7
    int64_t * v21 = (int64_t *)v20; // 0xc83a7
    *v19 = 0x6a3c74d2;
    *v21 = a6;
    int64_t * v22 = (int64_t *)(v18 - 24); // 0xc83bd
    int64_t * v23 = (int64_t *)(v18 - 32); // 0xc83c1
    *v23 = *v16;
    int64_t * v24 = (int64_t *)(v18 - 40); // 0xc83c7
    *v24 = *v14;
    int64_t v25 = *v23; // 0xc83d5
    *v23 = v25 + 0x7fdd74f7;
    int64_t v26 = *v24; // 0xc83da
    *v23 = a5;
    *v21 = v25;
    *v22 = v25;
    int64_t v27 = *v21; // 0xc8443
    *v21 = *v21 ^ v20 ^ v27;
    int64_t v28 = *v22; // 0xc8448
    int64_t * v29 = (int64_t *)v18; // 0xc8459
    *v29 = (int64_t)((int32_t)a4 + a7);
    *v19 = *v22;
    *v21 = v18 + 8;
    *v22 = v7;
    int64_t v30 = *v21; // 0xc84d5
    *v29 = v30 - 8;
    int64_t * v31 = (int64_t *)(v30 - 16); // 0xc84ea
    *v31 = 0x3ded57f;
    int64_t * v32 = (int64_t *)(v30 - 24); // 0xc84fb
    int64_t * v33 = (int64_t *)(v30 - 32); // 0xc8502
    *v32 = a1;
    int64_t v34 = *v32; // 0xc854f
    *v31 = 0x305a986a;
    *v32 = v27;
    *v33 = v17;
    int64_t * v35 = (int64_t *)(v30 - 40); // 0xc859d
    *v35 = v27;
    int64_t * v36 = (int64_t *)(v30 - 48); // 0xc85a1
    int64_t v37 = *v35; // 0xc85b5
    *v33 = 0x2a6a920;
    int64_t * v38 = (int64_t *)(v30 - 56); // 0xc85d2
    int64_t v39 = v30 - 64; // 0xc85da
    int64_t * v40 = (int64_t *)v39; // 0xc85da
    int64_t v41; // 0xc80bb
    *v40 = v41 ^ 0x3de9177d;
    *v38 = a5;
    int64_t v42 = *v36; // 0xc8606
    *v36 = v42 ^ 0x5f7be3f3;
    *v33 = v42;
    *v35 = 0x3f5f1464;
    *v36 = 0x2c2ba826;
    *v38 = 0x5dbd2ff5;
    *v40 = v6;
    *(int64_t *)(v30 - 72) = v39;
    *(int64_t *)(v30 - 80) = *v40;
    int64_t v43 = *v40; // 0xc865a
    int64_t v44 = v43 - 8; // 0xc865e
    int64_t * v45 = (int64_t *)v44; // 0xc8660
    int64_t * v46 = (int64_t *)v43; // 0xc8675
    *v46 = *v19;
    *v45 = v26;
    *(int64_t *)(v43 + 8) = v26;
    int64_t v47 = v43 - 16; // 0xc868b
    int64_t * v48 = (int64_t *)v47; // 0xc868b
    *v48 = v44;
    *v45 = 0x6824b93a;
    *v48 = 0x1f517144;
    int64_t v49 = v43 - 24; // 0xc86b7
    int64_t * v50 = (int64_t *)v49; // 0xc86b7
    int64_t * v51 = (int64_t *)(v43 - 32); // 0xc86b8
    *v51 = v47;
    *v50 = 0x2ec07d8e;
    int64_t v52 = v43 - 40; // 0xc86ee
    int64_t * v53 = (int64_t *)v52; // 0xc86f0
    *v53 = *v45;
    int64_t * v54 = (int64_t *)(v43 - 48); // 0xc86fa
    *v54 = v34;
    int64_t v55 = *v53; // 0xc871b
    *v50 = *v38;
    *v53 = v49;
    int64_t v56 = *(int64_t *)(v43 + 96); // 0xc873e
    *v51 = v56;
    *v53 = 0x1a8ab37a;
    *v54 = v56;
    *v53 = 0x13e980e5;
    *v54 = 0x3ddceca2;
    int64_t v57 = v43 - 56; // 0xc878d
    int64_t * v58 = (int64_t *)v57; // 0xc878d
    int64_t v59 = v43 - 64; // 0xc8792
    int64_t * v60 = (int64_t *)v59; // 0xc8792
    *v60 = 0x61442480;
    int64_t v61 = v43 - 72; // 0xc8797
    int64_t * v62 = (int64_t *)v61; // 0xc8799
    *v62 = v27;
    *v58 = *v53;
    int64_t v63 = *v60; // 0xc87a9
    *(int64_t *)(v43 + 80) = *v53;
    *v54 = v26;
    *v58 = *v46;
    *v53 = v56 - 0xc8240;
    *v54 = *v51;
    *v58 = 0x1fcc8d3a;
    int32_t * v64 = (int32_t *)v57; // 0xc8905
    *v64 = *v64 + 0x5ec88c00;
    int64_t v65 = *v54; // 0xc8913
    *v58 = v65;
    int64_t v66 = *v53; // 0xc8926
    int64_t v67 = v66 + (*v58 + 0x81726a33 & 0xffffffff); // 0xc89bd
    *v53 = 0x246b30f1;
    *v54 = v66;
    *v58 = v66;
    *v60 = *v53;
    *v62 = v66;
    int64_t v68 = v43 - 80; // 0xc8a1b
    int64_t * v69 = (int64_t *)v68; // 0xc8a1b
    *v69 = v55;
    *v58 = *v60;
    *v62 = *v54;
    *v69 = v63;
    *v60 = v63;
    *v62 = v55;
    *v69 = 0x4efe4777;
    int32_t * v70 = (int32_t *)v68; // 0xc8a95
    *v70 = *v70 - 0x7ebf09d4;
    int64_t v71 = *v62; // 0xc8aa5
    *v58 = v65;
    *v60 = *v62;
    *v62 = 0x7f399aa1;
    int32_t * v72 = (int32_t *)v61; // 0xc8b03
    *v72 = *v72 - 0x3f7c326c;
    *v60 = v34;
    int64_t v73 = (0x5bdf4132 - (*v62 + 0x3f7c326c ^ 0x3f7f2b16) ^ 0xe57e756c) + 0x11907c5 & 0xffffffff; // 0xc8b52
    int64_t v74 = *v58; // 0xc8b58
    *v60 = v74;
    int32_t * v75 = (int32_t *)(v73 + v67); // 0xc8b66
    int32_t v76 = *v75; // 0xc8b66
    int32_t v77 = 8 * (int32_t)*v69 - 0xb342f88 ^ 0x76c5bd91; // 0xc8b66
    *v75 = v76 == 0 ? v77 : v76;
    if (v76 != 0) {
        __asm_pause();
        int32_t v78 = *v75; // 0xc8b66
        *v75 = v78 == 0 ? v77 : v78;
        while (v78 != 0) {
            // 0xc8b71
            __asm_pause();
            v78 = *v75;
            *v75 = v78 == 0 ? v77 : v78;
        }
    }
    // 0xc8b78
    *v58 = v73;
    *v60 = v74;
    *v62 = v57;
    int64_t v79 = *v60 ^ v52; // 0xc8bb2
    *v62 = v27;
    *v69 = v79;
    *v60 = *v60 ^ v79;
    *v60 = *v62;
    *v62 = 187;
    *v72 = *v72 - 0x5f7f24e3;
    *v62 = *v54;
    *v69 = 0;
    *v62 = v67;
    *v69 = v57;
    int64_t v80 = *v62; // 0xc8c4b
    int64_t * v81 = (int64_t *)(v43 - 88); // 0xc8c4b
    *v81 = v71;
    *v69 = *v62;
    *(int64_t *)(v80 + (*v62 + 0x5f7f24e3 & 0xffffffff)) = *v62;
    *v69 = *v60;
    *v81 = v28;
    *v69 = 231;
    *v81 = *v36;
    *(int64_t *)(v43 - 96) = v37;
    *v70 = *v70 - 0x3ede9dcb;
    int64_t v82 = *v69 + 0x3ede9dcb & 0xffffffff; // 0xc8d2c
    int64_t v83 = *(int64_t *)(v43 + 16); // 0xc8d33
    *v62 = v83;
    *v69 = v71;
    *v81 = v68;
    *v81 = v83;
    int64_t v84 = *v69 ^ v59 ^ *v69; // 0xc8d64
    *v69 = v84;
    int64_t * v85 = (int64_t *)(v84 - 8); // 0xc8d7c
    *v85 = *v81;
    int64_t * v86 = (int64_t *)(v84 - 16); // 0xc8d89
    *v86 = *v69;
    int64_t * v87 = (int64_t *)(v84 - 24); // 0xc8d9e
    *v87 = v82;
    *v85 = *v62;
    int64_t * v88 = (int64_t *)v84; // 0xc8df4
    *v88 = v34;
    *(int64_t *)(v82 + v80) = *v85;
    *v88 = *v60;
    *v87 = *v86;
    *v86 = *v62;
    *v87 = v37;
    int64_t v89 = v84 - 32; // 0xc8e65
    int64_t * v90 = (int64_t *)v89; // 0xc8e65
    *v90 = 0x2bf3cb4c;
    int64_t v91 = *v85; // 0xc8e89
    int64_t v92 = *(int64_t *)(v84 + 152); // 0xc8e98
    *v88 = v92;
    *(int64_t *)(v84 - 40) = v89;
    *v85 = v92 + v91;
    *v86 = 0x792e9f79;
    *v87 = *v86;
    *v90 = *v88;
    int64_t * v93 = (int64_t *)(v80 + 10); // 0xc8fc4
    *v93 = *v85 + 0x573f01d1;
    *v85 = *v86;
    *v86 = *v87;
    *v93 = *v93 - 0x573f01d1;
    *v85 = v28;
    *v86 = v80;
    *v87 = v91;
    *v90 = 0x2fcf0173;
    return *v87 + 0x13c314352;
}

// Address range: 0x1bf3ce - 0x1bf3e5
int64_t function_1bf3ce(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1bf3ce
    int64_t v1; // 0x1bf3ce
    int64_t v2 = v1 & 0x6692d254 | 0x996d2dab; // 0x1bf3d3
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)a1;
    int32_t * v3 = (int32_t *)(a2 + 0x6b222cc); // 0x1bf3df
    *v3 = *v3 + (int32_t)a5;
    return (v2 + a4 / 256) % 256 | v2 & 0xffffff00;
}

// Address range: 0x1bf3e6 - 0x1bf41c
int64_t function_1bf3e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bf3e6
    int64_t v1; // 0x1bf3e6
    uint64_t v2 = v1;
    int64_t v3 = a4 - 1; // 0x1bf3e6
    int32_t v4 = 0; // 0x1bf3e6
    int64_t v5; // 0x1bf3e6
    bool v6; // 0x1bf3e6
    if (v3 == 0 != !v6) {
        // 0x1bf3ea
        unknown_7a08dbf0();
        unsigned char v7 = *(char *)(a2 - 0x304b2055); // 0x1bf400
        v4 = v3 & 0xffffff00 | (int64_t)v7;
        v5 = unknown_ffffffffe8e4180c();
    }
    // 0x1bf40b
    *(int32_t *)-0x17b5feee = *(int32_t *)-0x17b5feee + (int32_t)a1;
    int32_t * v8 = (int32_t *)(a3 - 46); // 0x1bf411
    uint32_t v9 = *v8; // 0x1bf411
    uint32_t v10 = v9 + v4; // 0x1bf411
    *v8 = v10;
    __asm_wait();
    uint64_t v11 = __asm_iretd(); // 0x1bf417
    unsigned char v12 = *(char *)((256 * (v5 / 256 + v2 / 256 + (int64_t)(v10 < v9)) & 0xff00 | v2 & -0xff01) + v11 % 256); // 0x1bf418
    return v11 & -256 | (int64_t)v12;
}

// Address range: 0x1bf41e - 0x1bf41f
int64_t function_1bf41e(void) {
    // 0x1bf41e
    int64_t result; // 0x1bf41e
    return result;
}

// Address range: 0x1bf420 - 0x1bf425
int64_t function_1bf420(void) {
    // 0x1bf420
    return __asm_iretd();
}

// Address range: 0x1bf43e - 0x1bf445
int64_t function_1bf43e(void) {
    // 0x1bf43e
    return function_ffffffffed78d8fb();
}

// Address range: 0x1bf454 - 0x1bf45e
int64_t function_1bf454(int64_t a1, int64_t a2) {
    // 0x1bf454
    int64_t result; // 0x1bf454
    int32_t * v1 = (int32_t *)(4 * result - 0x3bbb4849 + result); // 0x1bf454
    *v1 = *v1 + (int32_t)result;
    int64_t v2; // 0x1bf454
    *(char *)a1 = *(char *)&v2;
    return result;
}

// Address range: 0x1bf461 - 0x1bf46a
int64_t function_1bf461(int64_t a1) {
    // 0x1bf461
    return unknown_6c807f68(a1);
}

// Address range: 0x1bf50f - 0x1bf510
int64_t function_1bf50f(int64_t a1) {
    // 0x1bf50f
    int64_t result; // 0x1bf50f
    return result;
}

// Address range: 0x1bf56f - 0x1bf575
int64_t function_1bf56f(int64_t a1) {
    // 0x1bf56f
    int64_t result; // 0x1bf56f
    return result;
}

// Address range: 0x1bf57a - 0x1bf593
int64_t function_1bf57a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1bf57a
    int64_t v1; // 0x1bf57a
    int32_t v2 = v1; // 0x1bf57a
    bool v3; // 0x1bf57a
    *(int32_t *)a3 = (int32_t)v1 - v2 + (int32_t)v3;
    unknown_ffffffff890cd686();
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v4 = __asm_int1(); // 0x1bf588
    int64_t v5; // 0x1bf57a
    *(int32_t *)a2 = *(int32_t *)&v5 | v2;
    return (v4 + a3 / 256) % 256 | v4 & -256;
}

// Address range: 0x1bf596 - 0x1bf5db
int64_t function_1bf596(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bf596
    int64_t v1; // 0x1bf596
    *(char *)a4 = (char)(v1 / 256);
    __asm_in(-24);
    int32_t * v2 = (int32_t *)(a2 + 63); // 0x1bf5a7
    uint32_t v3 = *v2; // 0x1bf5a7
    uint32_t v4 = v3 + (int32_t)v1; // 0x1bf5a7
    *v2 = v4;
    unsigned char v5 = (char)a4 % 32; // 0x1bf5d4
    if (v5 != 0) {
        char * v6 = (char *)(a4 + 0x3c197100); // 0x1bf5d4
        unsigned char v7 = *v6; // 0x1bf5d4
        *v6 = (char)(v4 < v3) << v5 - 1 | v7 << v5 | (char)((int16_t)v7 >> (int16_t)(9 - v5));
    }
    bool v8; // 0x1bf596
    return *(int64_t *)(v1 + a1 + (v8 ? 0xfffffffc : 4) & 0xffffffff);
}

// Address range: 0x1bf5f7 - 0x1bf607
int64_t function_1bf5f7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1bf5f7
    int64_t v1; // 0x1bf5f7
    char * v2 = (char *)(v1 - 0x59fe17f2); // 0x1bf5f7
    *v2 = *v2 + (char)a3;
    int64_t v3 = __asm_hlt(); // 0x1bf5ff
    return v3 + 256 * v1 & 0xff00 | v3 & -0xff01;
}

// Address range: 0x1bf622 - 0x1bf625
int64_t function_1bf622(void) {
    // 0x1bf622
    int64_t result; // 0x1bf622
    return result;
}

// Address range: 0x1bf654 - 0x1bf685
int64_t function_1bf654(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 0x60ef5898); // 0x1bf654
    int32_t v2 = a1; // 0x1bf654
    *v1 = *v1 + v2;
    int32_t * v3 = (int32_t *)(a4 + 125); // 0x1bf66a
    uint32_t v4 = *v3; // 0x1bf66a
    *v3 = v4 + 0x1e509a9f;
    __asm_hlt();
    int64_t v5; // 0x1bf654
    uint32_t v6 = *(int32_t *)&v5; // 0x1bf674
    uint32_t v7 = v4 > 0xe1af6560 ? 0x775c6d02 : 0x775c6d01; // 0x1bf674
    *(int32_t *)a4 = v6 - v7;
    int64_t v8; // 0x1bf654
    int32_t v9 = *(int32_t *)&v8; // 0x1bf67a
    char v10 = *(char *)-0x930b87d; // 0x1bf67c
    int64_t v11; // 0x1bf654
    *(char *)-0x930b87d = v10 + (char)((uint64_t)v11 / 256);
    return v9 + v2 + (int32_t)(v4 > 0xe1af6560 | v6 < v7);
}

// Address range: 0x1bf747 - 0x1bf762
int64_t function_1bf747(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bf747
    int64_t v1; // 0x1bf747
    uint64_t v2 = v1;
    char * v3 = (char *)(v2 + 0x29c3a00); // 0x1bf747
    *v3 = *v3 + (char)v2;
    char * v4 = (char *)(a3 + 1); // 0x1bf74d
    *v4 = *v4 + (char)(v2 / 256);
    unknown_ffffffff881cce56();
    return a2 & 0xffffffff;
}

// Address range: 0x1bf7b3 - 0x1bf7b4
int64_t function_1bf7b3(int64_t a1) {
    // 0x1bf7b3
    int64_t result; // 0x1bf7b3
    return result;
}

// Address range: 0x1bf7e5 - 0x1bf7e6
int64_t function_1bf7e5(int64_t a1) {
    // 0x1bf7e5
    int64_t result; // 0x1bf7e5
    return result;
}

// Address range: 0x1bf7fe - 0x1bf7ff
int64_t function_1bf7fe(void) {
    // 0x1bf7fe
    int64_t result; // 0x1bf7fe
    return result;
}

// Address range: 0x1bf812 - 0x1bf81f
int64_t function_1bf812(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1bf812
    int64_t v1; // 0x1bf812
    bool v2; // 0x1bf812
    if (v2 || false) {
        v1 = function_1bf7fe();
    }
    uint64_t v3 = v1;
    int64_t v4; // 0x1bf812
    int32_t * v5 = (int32_t *)(v4 + 0x68de3a98); // 0x1bf816
    *v5 = *v5 + (int32_t)a3;
    return v3 / 256 % 256 | v3;
}

// Address range: 0x1bf8c7 - 0x1bf8d2
int64_t function_1bf8c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1bf8c7
    int64_t result; // 0x1bf8c7
    int32_t * v1 = (int32_t *)(result + 0x3a4044ea); // 0x1bf8c7
    *v1 = *v1 + (int32_t)result;
    *(int32_t *)(a4 - 85) = (int32_t)a5;
    return result;
}

// Address range: 0x1bf97f - 0x1bf980
int64_t function_1bf97f(void) {
    // 0x1bf97f
    int64_t result; // 0x1bf97f
    return result;
}

// Address range: 0x1bf9a7 - 0x1bf9a9
int64_t function_1bf9a7(void) {
    // 0x1bf9a7
    return function_1bf97f();
}

// Address range: 0x1bf9b4 - 0x1bf9b5
int64_t function_1bf9b4(int64_t a1) {
    // 0x1bf9b4
    int64_t result; // 0x1bf9b4
    return result;
}

// Address range: 0x1bfa31 - 0x1bfa32
int64_t function_1bfa31(int64_t a1) {
    // 0x1bfa31
    int64_t result; // 0x1bfa31
    return result;
}

// Address range: 0x1bfa44 - 0x1bfa52
int64_t function_1bfa44(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1bfa44
    return function_ffffffffe2cbfc3a();
}

// Address range: 0x1bfa5d - 0x1bfa74
int64_t function_1bfa5d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1bfa5d
    int64_t v1; // 0x1bfa5d
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a2 + 35); // 0x1bfa65
    *v3 = *v3 + (int32_t)v1;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x1bfa8c - 0x1bfa93
int64_t function_1bfa8c(void) {
    // 0x1bfa8c
    return function_4e1de2fd();
}

// Address range: 0x1bfabe - 0x1bfabf
int64_t function_1bfabe(void) {
    // 0x1bfabe
    int64_t result; // 0x1bfabe
    return result;
}

// Address range: 0x1bfacd - 0x1bfad0
int64_t function_1bfacd(void) {
    // 0x1bfacd
    int64_t result; // 0x1bfacd
    return result;
}

// Address range: 0x1bfad3 - 0x1bfad4
int64_t function_1bfad3(void) {
    // 0x1bfad3
    int64_t result; // 0x1bfad3
    return result;
}

// Address range: 0x1bfad8 - 0x1bfadb
int64_t function_1bfad8(int64_t a1) {
    // 0x1bfad8
    int64_t result; // 0x1bfad8
    return result;
}

// Address range: 0x1bfb20 - 0x1bfb21
int64_t function_1bfb20(void) {
    // 0x1bfb20
    int64_t result; // 0x1bfb20
    return result;
}

// Address range: 0x1bfb2c - 0x1bfb5d
int64_t function_1bfb2c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1bfb2c
    int64_t v1; // 0x1bfb2c
    bool v2; // 0x1bfb2c
    if (v2) {
        v1 = function_1bfabe();
    }
    int16_t v3 = v1; // 0x1bfb37
    int16_t v4 = (int16_t)a3 % 256; // 0x1bfb37
    int16_t v5 = v3 / v4; // 0x1bfb37
    uint64_t v6 = v1 & -0x10000 | (int64_t)(v5 % 256) | (int64_t)(256 * (v3 % v4)); // 0x1bfb37
    int64_t v7; // 0x1bfb2c
    char * v8 = (char *)(v7 + 0x1e8f7cc); // 0x1bfb39
    unsigned char v9 = *v8; // 0x1bfb39
    unsigned char v10 = (char)v5; // 0x1bfb39
    *v8 = v9 - v10;
    int64_t v11 = v6 & -256 | 239; // 0x1bfb41
    if (v9 < v10) {
        v11 = function_1bfad3();
    }
    int64_t v12 = v11; // 0x1bfb43
    if (v6 <= (int64_t)v9) {
        v12 = function_1bfb20();
    }
    char * v13 = (char *)(v12 + 8 * a3); // 0x1bfb47
    *v13 = *v13 & (char)(v12 / 256);
    return unknown_7fe5f54();
}

// Address range: 0x1bfb62 - 0x1bfb63
int64_t function_1bfb62(void) {
    // 0x1bfb62
    int64_t result; // 0x1bfb62
    return result;
}

// Address range: 0x1bfb76 - 0x1bfb7a
int64_t function_1bfb76(int64_t a1, int64_t a2) {
    // 0x1bfb76
    return function_1bfb62();
}

// Address range: 0x1bfb95 - 0x1bfb96
int64_t function_1bfb95(int64_t a1) {
    // 0x1bfb95
    int64_t result; // 0x1bfb95
    return result;
}

// Address range: 0x1bfba2 - 0x1bfba3
int64_t function_1bfba2(int64_t a1) {
    // 0x1bfba2
    int64_t result; // 0x1bfba2
    return result;
}

// Address range: 0x1bfdce - 0x1bfdd7
int64_t function_1bfdce(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 56); // 0x1bfdce
    *v1 = *v1 | -43;
    return unknown_71f98cd8(a1, a2, a3, a4);
}

// Address range: 0x1bfe02 - 0x1bfe05
int64_t function_1bfe02(void) {
    // 0x1bfe02
    int64_t result; // 0x1bfe02
    return result;
}

// Address range: 0x1bfe16 - 0x1bfe1c
int64_t function_1bfe16(int64_t a1, int64_t a2) {
    // 0x1bfe16
    int64_t v1; // 0x1bfe16
    *(char *)a1 = (char)(v1 / 256) + (char)v1;
    return v1 ^ 190;
}

// Address range: 0x1bfe37 - 0x1bfe3a
int64_t function_1bfe37(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1bfe37
    int64_t v1; // 0x1bfe37
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)a4;
    return result;
}

// Address range: 0x1bfe76 - 0x1bfe7c
int64_t function_1bfe76(void) {
    // 0x1bfe76
    int64_t v1; // 0x1bfe76
    int64_t v2 = v1;
    return (v2 + 214) % 256 | v2 & -256;
}

// Address range: 0x1bfee9 - 0x1bfeec
int64_t function_1bfee9(void) {
    // 0x1bfee9
    int64_t result; // 0x1bfee9
    return result;
}

// Address range: 0x1bff06 - 0x1bff07
int64_t function_1bff06(void) {
    // 0x1bff06
    int64_t result; // 0x1bff06
    return result;
}

// Address range: 0x1bff24 - 0x1bff31
int64_t function_1bff24(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1bff24
    int64_t result; // 0x1bff24
    *(char *)0x1e8b2b22003d8c2 = (char)result;
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x1bff38 - 0x1bff3b
int64_t function_1bff38(int64_t a1) {
    // 0x1bff38
    int64_t result; // 0x1bff38
    return result;
}

// Address range: 0x1bffbd - 0x1bffe1
int64_t function_1bffbd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_iretd(); // 0x1bffbf
    *(int32_t *)v1 = (int32_t)v1;
    __asm_out(-24, (char)v1);
    unknown_3abc2ae0();
    return __asm_sti();
}

// Address range: 0x1bfffd - 0x1c0000
int64_t function_1bfffd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1bfffd
    int64_t v1; // 0x1bfffd
    uint64_t v2 = v1 & 0xffffffff; // 0x1bfffd
    return (v2 | 0x100000000 * a3) / v2 & 0xffffffff;
}

// Address range: 0x1c001a - 0x1c001d
int64_t function_1c001a(void) {
    // 0x1c001a
    int64_t result; // 0x1c001a
    return result;
}

// Address range: 0x1c0063 - 0x1c0064
int64_t function_1c0063(void) {
    // 0x1c0063
    int64_t result; // 0x1c0063
    return result;
}

// Address range: 0x1c00f7 - 0x1c00fa
int64_t function_1c00f7(void) {
    // 0x1c00f7
    int64_t result; // 0x1c00f7
    return result;
}

// Address range: 0x1c013b - 0x1c014b
int64_t function_1c013b(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __asm_iretd(); // 0x1c013b
    char v2 = __asm_in_133((int16_t)a3); // 0x1c013c
    char v3 = *(char *)0x55cb1450c201e86d; // 0x1c013d
    bool v4; // 0x1c013b
    return (v1 | (int64_t)v2) & -256 | (int64_t)(v3 - (v4 ? -97 : -98));
}

// Address range: 0x1c0160 - 0x1c0163
int64_t function_1c0160(int64_t a1) {
    // 0x1c0160
    int64_t result; // 0x1c0160
    return result;
}

// Address range: 0x1c0193 - 0x1c0194
int64_t function_1c0193(int64_t a1) {
    // 0x1c0193
    int64_t result; // 0x1c0193
    return result;
}

// Address range: 0x1c01d0 - 0x1c01d3
int64_t function_1c01d0(void) {
    // 0x1c01d0
    int64_t result; // 0x1c01d0
    return result;
}

// Address range: 0x1c0221 - 0x1c022f
int64_t function_1c0221(int64_t a1) {
    // 0x1c0221
    bool v1; // 0x1c0221
    unknown_4c287d2b((v1 ? -4 : 4) + a1);
    return function_13f3a1e();
}

// Address range: 0x1c0241 - 0x1c0244
int64_t function_1c0241(void) {
    // 0x1c0241
    int64_t result; // 0x1c0241
    return result;
}

// Address range: 0x1c0247 - 0x1c024f
int64_t function_1c0247(int64_t a1) {
    // 0x1c0247
    int64_t v1; // 0x1c0247
    __asm_out(-67, (char)v1);
    return unknown_ffffffffd4229752();
}

// Address range: 0x1c026d - 0x1c026e
int64_t function_1c026d(void) {
    // 0x1c026d
    int64_t result; // 0x1c026d
    return result;
}

// Address range: 0x1c0280 - 0x1c028b
int64_t function_1c0280(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 0x2a58b7a7 + 4 * a1); // 0x1c0280
    int64_t result; // 0x1c0280
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1c02a8 - 0x1c02b7
int64_t function_1c02a8(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(2 * a1 + a2); // 0x1c02a8
    *v1 = *v1 - 0x7601e862;
    int32_t v2; // 0x1c02a8
    *(int32_t *)(a3 + 1) = (int32_t)(int64_t)&v2;
    bool v3; // 0x1c02a8
    return function_1c0318(a1, (v3 ? -1 : 1) + a2, a3, (int64_t)&g1);
}

// Address range: 0x1c02b7 - 0x1c02d1
int64_t function_1c02b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c02b7
    int64_t v1; // 0x1c02b7
    int64_t v2 = v1 & 0xffffffff; // 0x1c02b8
    bool v3; // 0x1c02b7
    if (v3) {
        v2 = function_1c026d();
    }
    int64_t v4 = v2 & v1;
    int32_t * v5 = (int32_t *)((v4 & 0xffffffff) - 0x6b9b69b4); // 0x1c02bc
    *v5 = *v5 + (int32_t)a1;
    uint32_t v6 = (int32_t)v4; // 0x1c02c2
    *(int32_t *)a1 = v6 / 2 | 0x80000000 * v6;
    int64_t result = unknown_790ce3ce((v3 ? -4 : 4) + a1); // 0x1c02c8
    *(int32_t *)a3 = (int32_t)a4;
    return result;
}

// Address range: 0x1c0316 - 0x1c0317
int64_t function_1c0316(void) {
    // 0x1c0316
    int64_t result; // 0x1c0316
    return result;
}

// Address range: 0x1c0318 - 0x1c0348
int64_t function_1c0318(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c0318
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x1c0318
    int64_t v1 = result;
    bool v2; // 0x1c0318
    *(char *)v1 = *(char *)&result + (char)v2 + (char)v1;
    int32_t * v3 = (int32_t *)(a3 + 1); // 0x1c032a
    int64_t v4; // 0x1c0318
    *v3 = *v3 - (int32_t)v4;
    int64_t v5 = result;
    *(char *)v5 = *(char *)&result + (char)v5;
    char * v6 = (char *)result; // 0x1c0331
    *v6 = *v6 + (char)result;
    int32_t * v7 = (int32_t *)(a3 + 0x2f097c32); // 0x1c0334
    *v7 = *v7 - 0x41b9affc;
    int32_t * v8 = (int32_t *)(a2 - 0x4c417c5b); // 0x1c033c
    *v8 = *v8 - (int32_t)result;
    char * v9 = (char *)(a4 + 0x1d0003df); // 0x1c0342
    *v9 = *v9 + (char)(result / 256);
    return result;
}

// Address range: 0x1c0363 - 0x1c0364
int64_t function_1c0363(void) {
    // 0x1c0363
    int64_t result; // 0x1c0363
    return result;
}

// Address range: 0x1c03c3 - 0x1c03cb
int64_t function_1c03c3(int64_t a1, int64_t a2) {
    // 0x1c03c3
    return a1 & 0xffffffff;
}

// Address range: 0x4930c9 - 0x4930ca
int64_t function_4930c9(void) {
    // 0x4930c9
    int64_t result; // 0x4930c9
    return result;
}

// Address range: 0x493100 - 0x493103
int64_t function_493100(void) {
    // 0x493100
    int64_t result; // 0x493100
    return result;
}

// Address range: 0x493160 - 0x493163
int64_t function_493160(int64_t a1) {
    // 0x493160
    int64_t result; // 0x493160
    return result;
}

// Address range: 0x49319a - 0x49319d
int64_t function_49319a(int64_t a1) {
    // 0x49319a
    int64_t result; // 0x49319a
    return result;
}

// Address range: 0x4931a1 - 0x4931a9
int64_t function_4931a1(void) {
    // 0x4931a1
    int64_t result; // 0x4931a1
    int32_t * v1 = (int32_t *)((int64_t)*(int32_t *)(result + 22) - 45); // 0x4931a4
    *v1 = *v1 >> 1;
    return result;
}

// Address range: 0x4931d7 - 0x4931d9
int64_t function_4931d7(void) {
    // 0x4931d7
    int64_t result; // 0x4931d7
    return result;
}

// Address range: 0x49323d - 0x4932b2
int64_t function_49323d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint32_t result) {
    char * v1 = (char *)(a2 - 0x24318890); // 0x49323d
    char v2 = a4; // 0x49323d
    *v1 = *v1 + v2;
    int64_t v3; // 0x49323d
    int32_t * v4 = (int32_t *)(v3 + a1); // 0x493243
    int32_t v5 = *v4 ^ 32; // 0x493243
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x493243
    *v4 = v5;
    if (v6 % 2 == 0) {
        // 0x493284
        return result;
    }
    int64_t result2 = (int64_t)*(int32_t *)-0x4ab02f9db3205f4; // 0x49324a
    if (a4 != 0) {
        // 0x493256
        return result2;
    }
    int64_t result3 = result2 & 0xffffffa0; // 0x4932ab
    char * v7 = (char *)result3; // 0x4932ad
    *v7 = *v7 + (char)result3;
    char * v8 = (char *)(result3 - 119); // 0x4932af
    *v8 = *v8 + v2;
    return result3;
}
