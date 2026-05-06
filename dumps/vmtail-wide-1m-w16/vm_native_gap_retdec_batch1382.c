/*
 * Targeted RetDec C for native executable gap queue batch 1382.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x736db-0x738db rank=- name=- kind=- bytes=- uncovered=-
 *   0x738db-0x73adb rank=- name=- kind=- bytes=- uncovered=-
 *   0x73adb-0x73cdb rank=- name=- kind=- bytes=- uncovered=-
 *   0x73cdb-0x73edb rank=- name=- kind=- bytes=- uncovered=-
 *   0x73edb-0x740db rank=- name=- kind=- bytes=- uncovered=-
 *   0x740db-0x742db rank=- name=- kind=- bytes=- uncovered=-
 *   0x742db-0x744db rank=- name=- kind=- bytes=- uncovered=-
 *   0x744db-0x746db rank=- name=- kind=- bytes=- uncovered=-
 *   0x12eedc-0x12f0dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12f2dc-0x12f4dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12f4dc-0x12f6dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12f6dc-0x12f8dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12f8dc-0x12fadc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12fcdc-0x12fedc rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c404e-0x2c424e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c444e-0x2c464e rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
extern int g5;
extern int g6;
extern int g7;
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

int64_t function_12eecf();
int64_t function_12eedc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_12ef91(int64_t a1, int64_t a2);
int64_t function_12ef9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12efcb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12efe6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12f046(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12f053(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12f0b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12f0c4(int64_t a1);
int64_t function_12f2dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12f382(void);
int64_t function_12f38d(void);
int64_t function_12f39a(void);
int64_t function_12f3a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12f492(void);
int64_t function_12f4dd(void);
int64_t function_12f4e5(void);
int64_t function_12f4f4(void);
int64_t function_12f540(int64_t a1);
int64_t function_12f560(void);
int64_t function_12f58a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12f5bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12f66f(void);
int64_t function_12f6cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12f738(void);
int64_t function_12f75e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12f77b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12f7a8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12f7d1(void);
int64_t function_12f7f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12f893(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12f90d(void);
int64_t function_12f918(void);
int64_t function_12f948(int64_t a1);
int64_t function_12f97a(int64_t a1, int64_t a2);
int64_t function_12f993(void);
int64_t function_12f99d(void);
int64_t function_12f9fd(int64_t a1);
int64_t function_12fa14(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12fa56(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12fcc1();
int64_t function_12fcdc(int64_t a1);
int64_t function_12fcea(void);
int64_t function_12fd0f(int64_t a1);
int64_t function_12fd1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12fd6c(void);
int64_t function_12fd73(void);
int64_t function_12fd98(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12fdaa(void);
int64_t function_12fdad(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12fe89(void);
int64_t function_12feb0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1427bd73();
int64_t function_255da();
int64_t function_25622();
int64_t function_2562c();
int64_t function_259ce();
int64_t function_25e90();
int64_t function_2c404e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2c4181(int64_t a1);
int64_t function_2c41ef(void);
int64_t function_2c41f5(int64_t a1);
int64_t function_2c4207(void);
int64_t function_2c444e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2c45e9(void);
int64_t function_2e04426b();
int64_t function_320ac6();
int64_t function_328f53();
int64_t function_331585();
int64_t function_36b14();
int64_t function_3d6867c3();
int64_t function_46f1a0d3();
int64_t function_48de04();
int64_t function_542590();
int64_t function_60ad5f6a();
int64_t function_66702db2();
int64_t function_736db(int64_t result, int64_t a2, int64_t a3, int64_t a4);
int64_t function_73810(int64_t a1);
int64_t function_73865(void);
int64_t function_7387d(int64_t a1);
int64_t function_7387e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_738e1(int64_t a1);
int64_t function_738e7(int64_t a1);
int64_t function_738ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_73903(void);
int64_t function_73925(int64_t a1, int64_t a2);
int64_t function_7393c(void);
int64_t function_73943(int64_t a1);
int64_t function_73968(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_739d3(void);
int64_t function_739ed(int64_t a1);
int64_t function_73a09(int64_t a1);
int64_t function_73a15(int64_t a1);
int64_t function_73a31(int64_t a1);
int64_t function_73a4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_73a60(void);
int64_t function_73a6b(int64_t a1);
int64_t function_73b16(void);
int64_t function_73b33(void);
int64_t function_73b37(void);
int64_t function_73b45(void);
int64_t function_73b60(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_73b6c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_73b70(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_73c39(void);
int64_t function_73c3d(int64_t a1, int64_t a2, int64_t a3, int32_t a4);
int64_t function_73c80(void);
int64_t function_73ca8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_73ccb(void);
int64_t function_73cd7(void);
int64_t function_73cdc(int64_t a1);
int64_t function_73ce4(int64_t a1);
int64_t function_73d3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_73d6d(int64_t a1);
int64_t function_73da7(int64_t a1);
int64_t function_73dee(void);
int64_t function_73e6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_73e7f(void);
int64_t function_73e8b(void);
int64_t function_73e99(void);
int64_t function_73ed6(int64_t a1, int64_t a2);
int64_t function_73f25(void);
int64_t function_73f75(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_73ff9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_74065(void);
int64_t function_74076(int64_t a1);
int64_t function_74116(void);
int64_t function_74130(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_74180(void);
int64_t function_741da(int64_t a1);
int64_t function_741ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_74224(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_7422d(void);
int64_t function_7427b(int64_t a1);
int64_t function_74287(void);
int64_t function_74291(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_742dc(void);
int64_t function_742ed(int64_t a1, int64_t a2, int64_t a3);
int64_t function_74315(uint64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_744ad(void);
int64_t function_744b2(void);
int64_t function_74506(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_7455f(void);
int64_t function_745cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_74615(void);
int64_t function_74621(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_74674(int64_t a1, int64_t a2);
int64_t function_cf3c7();
int64_t function_ffffffff8f6a39bd();
int64_t function_ffffffffe18adf76();
int64_t function_ffffffffe816dfc8();
int64_t function_ffffffffe89c46a7();
int64_t function_fffffffff1bf71c6();
int64_t function_fffffffff885d928();
int64_t unknown_10e0e8f3();
int64_t unknown_111433ed();
int64_t unknown_1837210();
int64_t unknown_463343c8();
int64_t unknown_4789f10e();
int64_t unknown_ffffffff8c72a6ee();
int64_t unknown_ffffffff9133d2f0();
int64_t unknown_ffffffffa00d9f26();
int64_t unknown_ffffffffa3c3bbd2();
int64_t unknown_ffffffffb3f8131d();
int64_t unknown_ffffffffb4503908();
int64_t unknown_ffffffffdc529a28();
int64_t unknown_fffffffff87f83ff();

// Address range: 0x736db - 0x73802
int64_t function_736db(int64_t result, int64_t a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x736f4
    *(int64_t *)result = (int64_t)&g6;
    uint64_t v2 = 2 * (*v1 - a2); // 0x73706
    int64_t v3 = 0x3ffffffffffffff9; // 0x73716
    int64_t v4 = (int64_t)&g5; // 0x73716
    if (v2 >= 0x3ffffffffffffff9) {
        // 0x73718
        v3 = function_542590("basic_string::resize");
        v4 = (int64_t)"basic_string::resize";
    }
    int64_t v5; // 0x736db
    int64_t v6; // 0x736db
    uint64_t v7; // 0x7372f
    if (v2 > g5) {
        // 0x7372c
        v7 = v2 - g5;
        v6 = a2;
        if (v7 == 0) {
            goto lab_0x73791;
        } else {
            int64_t v8 = v4; // 0x7373a
            if (v7 > v3 - g5) {
                // 0x7373c
                function_542590("basic_string::append");
                v8 = (int64_t)"basic_string::append";
            }
            // 0x73748
            if (v2 > *(int64_t *)(v8 + 8)) {
                // 0x7374e
                function_259ce(result, v2);
                v5 = result;
                goto lab_0x73764;
            } else {
                // 0x7375b
                v5 = v8;
                if ((char)function_25622() != 0) {
                    // 0x7374e
                    function_259ce(result, v2);
                    v5 = result;
                    goto lab_0x73764;
                } else {
                    goto lab_0x73764;
                }
            }
        }
    } else {
        // 0x73795
        v6 = a2;
        if (v2 < g5) {
            int64_t v9 = function_36b14(result, v2, "basic_string::erase"); // 0x737aa
            function_25e90(result, v9, g5 - v2, 0);
            v6 = v9;
        }
        goto lab_0x73791;
    }
  lab_0x73791:
    // 0x73791
    if (*v1 == v6) {
        // 0x737f7
        return result;
    }
    int64_t v10 = 0; // 0x737cf
    int64_t v11 = function_48de04(*(char *)(v10 + v6)); // 0x737d5
    function_255da(result);
    *(int16_t *)(2 * v10 + result) = *(int16_t *)v11;
    int64_t v12 = v10 + 1; // 0x737f2
    v10 = v12;
    while (v12 < *v1 - v6) {
        // 0x737d1
        v11 = function_48de04(*(char *)(v10 + v6));
        function_255da(result);
        *(int16_t *)(2 * v10 + result) = *(int16_t *)v11;
        v12 = v10 + 1;
        v10 = v12;
    }
    // 0x737f7
    return result;
  lab_0x73764:;
    int64_t v13 = v5 - 24;
    int64_t v14 = *(int64_t *)v13 + v5; // 0x73768
    char * v15 = (char *)v14;
    int64_t v16; // 0x736db
    if (v7 != 1) {
        // 0x73777
        __asm_rep_stosb_memset(v15, 0, v7);
        bool v17; // 0x736db
        v16 = v7 * (v17 ? -1 : 1) - 24 + v14;
    } else {
        // 0x73772
        *v15 = 0;
        v16 = v13;
    }
    // 0x73781
    function_2562c(v16, v2);
    v6 = v2;
    goto lab_0x73791;
}

// Address range: 0x73810 - 0x7383e
int64_t function_73810(int64_t a1) {
    // 0x73810
    __readfsqword(40);
    return function_320ac6();
}

// Address range: 0x73865 - 0x73867
int64_t function_73865(void) {
    // 0x73865
    int64_t v1; // 0x73865
    return function_7387e(v1, v1, v1, v1, (int64_t)&g7);
}

// Address range: 0x7387d - 0x7387e
int64_t function_7387d(int64_t a1) {
    // 0x7387d
    int64_t result; // 0x7387d
    return result;
}

// Address range: 0x7387e - 0x738df
int64_t function_7387e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t result = *(int64_t *)-0x78fdbe8891e955ca; // 0x7387e
    int64_t v2; // 0x7387e
    int32_t v3; // 0x7387e
    int32_t v4; // 0x7387e
    int64_t result3; // 0x7387e
    bool v5; // 0x7387e
    if (v5) {
        // 0x7387e
        v2 = a1;
        v3 = a1;
        v4 = v5 ? 0x5dc1925 : 0x5dc1924;
        result3 = result;
    } else {
        char * v6 = (char *)(a3 + 0x20b63a4c); // 0x7388c
        *v6 = *v6 | (char)result;
        int32_t * v7 = (int32_t *)(v1 + 49); // 0x73894
        uint32_t v8 = *v7; // 0x73894
        *v7 = v8 + 0x36cc8cfe;
        if (v8 >= 0xc9337303) {
            // 0x7389d
            return result;
        }
        char v9 = *(char *)(a5 + 82 + 8 * a4); // 0x738c9
        int64_t result2 = 256 * (int64_t)(v9 ^ (char)(result / 256)) | result & -0xff01; // 0x738c9
        int64_t v10; // 0x7387e
        *(char *)(a4 + 34) = (char)((uint64_t)v10 / 256);
        char * v11 = (char *)(result2 - 0x20a942dc); // 0x738d0
        unsigned char v12 = *v11; // 0x738d0
        unsigned char v13 = v12 + (char)a3; // 0x738d0
        *v11 = v13;
        if (v13 < v12 || v13 == 0) {
            // 0x7389d
            return result2;
        }
        // 0x738c9
        v2 = v1;
        v3 = *(int32_t *)&v1;
        v4 = 0x5dc1924;
        result3 = result2;
    }
    // 0x738a3
    *(int32_t *)v2 = v4 + v3;
    char * v14 = (char *)result3; // 0x738b3
    *v14 = *v14 + 1;
    __asm_out((int16_t)a3, (char)result3);
    return result3;
}

// Address range: 0x738e1 - 0x738e5
int64_t function_738e1(int64_t a1) {
    // 0x738e1
    int64_t result; // 0x738e1
    return result;
}

// Address range: 0x738e7 - 0x738ea
int64_t function_738e7(int64_t a1) {
    // 0x738e7
    int64_t result; // 0x738e7
    return result;
}

// Address range: 0x738ec - 0x73900
int64_t function_738ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x738ec
    int64_t v1; // 0x738ec
    int64_t v2 = v1;
    __asm_outsb((int16_t)a3, (char)v1);
    *(int32_t *)-0x6c61dc092b1181a9 = (int32_t)v2;
    return 257 * v2 & 0xff00 | v2 & -0xff01;
}

// Address range: 0x73903 - 0x73904
int64_t function_73903(void) {
    // 0x73903
    int64_t result; // 0x73903
    return result;
}

// Address range: 0x73925 - 0x7392b
int64_t function_73925(int64_t a1, int64_t a2) {
    // 0x73925
    int64_t result; // 0x73925
    return result;
}

// Address range: 0x7393c - 0x7393e
int64_t function_7393c(void) {
    // 0x7393c
    int64_t v1; // 0x7393c
    return function_73968(v1, v1, v1, v1);
}

// Address range: 0x73943 - 0x73948
int64_t function_73943(int64_t a1) {
    // 0x73943
    int64_t v1; // 0x73943
    return v1 & -256 | (int64_t)__asm_in_133((char)a1);
}

// Address range: 0x73968 - 0x73989
int64_t function_73968(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x73968
    bool v1; // 0x73968
    if (v1) {
        function_73903();
    }
    int64_t v2 = (v1 ? -1 : 1) + a2; // 0x73979
    int64_t v3; // 0x73968
    uint32_t v4 = (int32_t)v3 - *(int32_t *)v2; // 0x7397a
    *(char *)(int64_t)v4 = (char)(v4 / 256);
    return *(char *)(v2 - 0x5051b51f) < 93 ? 0xcacc0a7e : 0xcacc0a7d;
}

// Address range: 0x739d3 - 0x739d4
int64_t function_739d3(void) {
    // 0x739d3
    int64_t result; // 0x739d3
    return result;
}

// Address range: 0x739ed - 0x739f3
int64_t function_739ed(int64_t a1) {
    // 0x739ed
    int64_t v1; // 0x739ed
    uint64_t result = v1;
    __writefsbyte(a1, __readfsbyte(a1) + (char)(result / 256));
    return result;
}

// Address range: 0x73a09 - 0x73a0c
int64_t function_73a09(int64_t a1) {
    // 0x73a09
    int64_t v1; // 0x73a09
    return v1 & -256 | (int64_t)__asm_in_133((char)a1);
}

// Address range: 0x73a15 - 0x73a18
int64_t function_73a15(int64_t a1) {
    // 0x73a15
    int64_t result; // 0x73a15
    bool v1; // 0x73a15
    if (v1) {
        result = function_739d3();
    }
    // 0x73a17
    return result;
}

// Address range: 0x73a31 - 0x73a32
int64_t function_73a31(int64_t a1) {
    // 0x73a31
    int64_t result; // 0x73a31
    return result;
}

// Address range: 0x73a4e - 0x73a60
int64_t function_73a4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x73a4e
    *(char *)(a4 & -0xff01 | (int64_t)"_Resume") = 0;
    return (int64_t)*(int32_t *)0x3f5ee876cf32f034;
}

// Address range: 0x73a60 - 0x73a63
int64_t function_73a60(void) {
    // 0x73a60
    int64_t result; // 0x73a60
    return result;
}

// Address range: 0x73a6b - 0x73a71
int64_t function_73a6b(int64_t a1) {
    // 0x73a6b
    int64_t v1; // 0x73a6b
    return v1 & -256 | (int64_t)__asm_in_133((char)a1);
}

// Address range: 0x73b16 - 0x73b17
int64_t function_73b16(void) {
    // 0x73b16
    int64_t result; // 0x73b16
    return result;
}

// Address range: 0x73b33 - 0x73b34
int64_t function_73b33(void) {
    // 0x73b33
    int64_t result; // 0x73b33
    return result;
}

// Address range: 0x73b37 - 0x73b38
int64_t function_73b37(void) {
    // 0x73b37
    int64_t result; // 0x73b37
    return result;
}

// Address range: 0x73b45 - 0x73b46
int64_t function_73b45(void) {
    // 0x73b45
    int64_t result; // 0x73b45
    return result;
}

// Address range: 0x73b60 - 0x73b6c
int64_t function_73b60(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 - 1; // 0x73b60
    int64_t v2; // 0x73b60
    bool v3; // 0x73b60
    if (v1 != 0 == v3) {
        v2 = function_73b37();
    }
    // 0x73b62
    if ((char)(v2 / 256) - *(char *)(2 * a3) >= 0) {
        function_73b33();
    }
    int64_t v4 = v3 ? -4 : 4; // 0x73b67
    int64_t result = function_73b70(v4 + a1, a2, a3, v1, (int64_t)&g7, (int64_t)&g7); // 0x73b6a
    return result;
}

// Address range: 0x73b6c - 0x73b70
int64_t function_73b6c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x73b6c
    int64_t result; // 0x73b6c
    bool v1; // 0x73b6c
    if (v1) {
        result = function_73b45();
    }
    // 0x73b6e
    return result;
}

// Address range: 0x73b70 - 0x73c34
int64_t function_73b70(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    char * v2 = (char *)(a1 + 102); // 0x73b70
    char v3 = *v2 & (char)a3; // 0x73b70
    *v2 = v3;
    if (v3 != 0) {
        int64_t result = function_73b16(); // 0x73b75
        int32_t * v4 = (int32_t *)(a1 - 1); // 0x73b78
        *v4 = *v4 & 0x7ec0a14b;
        *(char *)a1 = __asm_insb((int16_t)a3);
        return result;
    }
    // 0x73bef
    __asm_outsb((int16_t)a3, *(char *)&v1);
    int64_t v5; // 0x73b70
    int32_t * v6 = (int32_t *)(v5 + 0x7c177341); // 0x73bf2
    *v6 = *v6 ^ (int32_t)v1;
    char * v7 = (char *)(a4 + 119); // 0x73bf8
    *v7 = *v7 + (char)(a3 / 256);
    char * v8 = (char *)(8 * v5 + 95 + (v5 ^ 19)); // 0x73bfb
    *v8 = *v8 + (char)(v5 / 256);
    return (int64_t)*(int32_t *)0x351e8ccc1f0c000a;
}

// Address range: 0x73c39 - 0x73c3c
int64_t function_73c39(void) {
    // 0x73c39
    int64_t result; // 0x73c39
    return result;
}

// Address range: 0x73c3d - 0x73c80
int64_t function_73c3d(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    // 0x73c3d
    int64_t v1; // 0x73c3d
    int64_t result = v1 & 0xffffffff; // 0x73c70
    if (v1 != __readfsqword(40)) {
        // 0x73c72
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x73c77
    return result;
}

// Address range: 0x73c80 - 0x73ca8
int64_t function_73c80(void) {
    // 0x73c80
    __readfsqword(40);
    return function_328f53();
}

// Address range: 0x73ca8 - 0x73cba
int64_t function_73ca8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x73ca8
    int64_t v1; // 0x73ca8
    uint64_t result = v1;
    int64_t v2 = a1;
    if ((char)a3 == (char)(a4 / 256)) {
        // 0x73cd8
        return result;
    }
    // 0x73cb7
    *(char *)v2 = *(char *)&v2 ^ (char)(result / 256);
    return result;
}

// Address range: 0x73ccb - 0x73cd1
int64_t function_73ccb(void) {
    // 0x73ccb
    int64_t v1; // 0x73ccb
    return 256 * v1 & 0xff00 | v1 & -0xff01;
}

// Address range: 0x73cd7 - 0x73cd8
int64_t function_73cd7(void) {
    // 0x73cd7
    int64_t result; // 0x73cd7
    return result;
}

// Address range: 0x73cdc - 0x73ce1
int64_t function_73cdc(int64_t a1) {
    // 0x73cdc
    int64_t v1; // 0x73cdc
    return __asm_int1(v1, v1);
}

// Address range: 0x73ce4 - 0x73ced
int64_t function_73ce4(int64_t a1) {
    // 0x73ce4
    int64_t v1; // 0x73ce4
    return v1 & -256 | (int64_t)__asm_in_133(98);
}

// Address range: 0x73d3a - 0x73d45
int64_t function_73d3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x73d3a
    int64_t result; // 0x73d3a
    int64_t v1; // 0x73d3a
    if (a4 != 1 == (char)v1 == -(char)v1) {
        result = function_73cd7();
    }
    int32_t * v2 = (int32_t *)(a1 + 66); // 0x73d41
    *v2 = *v2 - (int32_t)a3;
    return result;
}

// Address range: 0x73d6d - 0x73d70
int64_t function_73d6d(int64_t a1) {
    // 0x73d6d
    int64_t result; // 0x73d6d
    return result;
}

// Address range: 0x73da7 - 0x73daa
int64_t function_73da7(int64_t a1) {
    // 0x73da7
    int64_t result; // 0x73da7
    return result;
}

// Address range: 0x73dee - 0x73df3
int64_t function_73dee(void) {
    // 0x73dee
    return function_fffffffff885d928();
}

// Address range: 0x73e6c - 0x73e7f
int64_t function_73e6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x73e6c
    int64_t v1; // 0x73e6c
    int64_t v2 = v1;
    int64_t v3 = 0x100000000 * a3 | v2 & 190 | v2 & 0xffffff00 | 65; // 0x73e70
    int64_t v4 = (int64_t)*(int32_t *)(a2 + 0x73d5474); // 0x73e70
    float80_t v5; // 0x73e6c
    *(float32_t *)((v3 % v4 & 0xffffffff) + 0x4604f453) = (float32_t)v5;
    return v3 / v4 & 0xffffffff;
}

// Address range: 0x73e7f - 0x73e86
int64_t function_73e7f(void) {
    // 0x73e7f
    int64_t v1; // 0x73e7f
    return v1 + 0xd13176ca & 0xffffffff;
}

// Address range: 0x73e8b - 0x73e90
int64_t function_73e8b(void) {
    // 0x73e8b
    return function_fffffffff1bf71c6();
}

// Address range: 0x73e99 - 0x73e9b
int64_t function_73e99(void) {
    // 0x73e99
    int64_t result; // 0x73e99
    return result;
}

// Address range: 0x73ed6 - 0x73ee8
int64_t function_73ed6(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 0x4a66b6c8); // 0x73ed6
    int64_t v2; // 0x73ed6
    *v1 = *v1 | (int32_t)v2;
    return function_ffffffff8f6a39bd();
}

// Address range: 0x73f25 - 0x73f26
int64_t function_73f25(void) {
    // 0x73f25
    int64_t result; // 0x73f25
    return result;
}

// Address range: 0x73f75 - 0x73ff5
int64_t function_73f75(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x73f75
    bool v1; // 0x73f75
    if (!v1 && !v1) {
        // 0x73fe7
        return __asm_hlt();
    }
    if (v1) {
        // 0x73fef
        return __asm_in(44);
    }
    char * v2 = (char *)((a2 - a4 & 0xffffffff) - 0x5d121f9e); // 0x73f82
    *v2 = *v2 & (char)a3;
    return a1 & 0xffffffff;
}

// Address range: 0x73ff9 - 0x74064
int64_t function_73ff9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t result; // 0x73ff9
    bool v2; // 0x73ff9
    if (v2) {
        // 0x74063
        return result;
    }
    int32_t v3 = result;
    __asm_out_137((int16_t)a3, v3);
    *(int32_t *)result = 2 * v3;
    unsigned char v4 = *(char *)&v1; // 0x74004
    unsigned char v5 = (char)(a4 / 256); // 0x74004
    char v6 = v4 + v5; // 0x74004
    unsigned char v7 = llvm_ctpop_i8(v6); // 0x74004
    *(char *)v1 = v6;
    return result & -0xff01 | 256 * (64 * (int64_t)(v6 == 0) | (int64_t)(v6 < v4) | 128 * (int64_t)(v6 < 0) | 16 * (int64_t)(v4 % 16 + v5 % 16 > 15) | 4 * (int64_t)(v7 % 2 == 0)) | 512;
}

// Address range: 0x74065 - 0x7406a
int64_t function_74065(void) {
    // 0x74065
    return function_2e04426b();
}

// Address range: 0x74076 - 0x7407f
int64_t function_74076(int64_t a1) {
    // 0x74076
    int64_t result; // 0x74076
    return result;
}

// Address range: 0x74116 - 0x74118
int64_t function_74116(void) {
    // 0x74116
    int64_t v1; // 0x74116
    return v1 & 0xffffffff;
}

// Address range: 0x74130 - 0x74179
int64_t function_74130(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    char * v1 = (char *)(a1 + 90); // 0x74130
    int64_t v2; // 0x74130
    *v1 = *v1 + (char)v2;
    int64_t result = v2 & 0xffffffff; // 0x74169
    if (v2 != __readfsqword(40)) {
        // 0x7416b
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x74170
    return result;
}

// Address range: 0x74180 - 0x741a9
int64_t function_74180(void) {
    // 0x74180
    __readfsqword(40);
    return function_331585();
}

// Address range: 0x741da - 0x741df
int64_t function_741da(int64_t a1) {
    // 0x741da
    int64_t v1; // 0x741da
    return (v1 | (int64_t)__asm_in_133((char)a1)) & -256 | 26;
}

// Address range: 0x741ea - 0x74208
int64_t function_741ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4; // bp-8, 0x741eb
    uint32_t v2 = (int32_t)a4 % 32; // 0x741f3
    if (v2 != 0) {
        int32_t * v3 = (int32_t *)(4 * a2 - 6 + (int64_t)&v1); // 0x741f3
        uint32_t v4 = *v3; // 0x741f3
        *v3 = v4 << v2 | 1 << v2 - 1 | (int32_t)((int64_t)v4 >> (int64_t)(33 - v2));
    }
    __asm_hlt();
    return __asm_int1(a1, 0x7c96a1e9);
}

// Address range: 0x74224 - 0x74228
int64_t function_74224(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x74224
    int64_t result; // 0x74224
    return result;
}

// Address range: 0x7422d - 0x7422e
int64_t function_7422d(void) {
    // 0x7422d
    int64_t result; // 0x7422d
    return result;
}

// Address range: 0x7427b - 0x7427c
int64_t function_7427b(int64_t a1) {
    // 0x7427b
    int64_t result; // 0x7427b
    return result;
}

// Address range: 0x74287 - 0x74288
int64_t function_74287(void) {
    // 0x74287
    int64_t result; // 0x74287
    return result;
}

// Address range: 0x74291 - 0x7429a
int64_t function_74291(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x74291
    int64_t v1; // 0x74291
    bool v2; // 0x74291
    if (v2) {
        v1 = function_74287();
    }
    // 0x74293
    __asm_out((int16_t)a3, (char)v1);
    return function_7422d();
}

// Address range: 0x742dc - 0x742dd
int64_t function_742dc(void) {
    // 0x742dc
    int64_t result; // 0x742dc
    return result;
}

// Address range: 0x742ed - 0x742f4
int64_t function_742ed(int64_t a1, int64_t a2, int64_t a3) {
    // 0x742ed
    return function_1427bd73();
}

// Address range: 0x74315 - 0x744ab
int64_t function_74315(uint64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a4 & -0xff01 | (int64_t)&g2; // 0x74315
    int64_t v3; // 0x74315
    int64_t v4; // 0x74315
    bool v5; // 0x74315
    if (!v5) {
        char * v6 = (char *)(v4 - 121); // 0x74320
        *v6 = *v6 + (char)(a1 / 256);
        unsigned char v7 = *(char *)&v1; // 0x74323
        v1 += (v5 ? -1 : 1);
        uint32_t v8 = *(int32_t *)((v4 & 0xffffff1a ^ 191) + 0x785e3dff); // 0x74324
        int64_t v9 = v8; // 0x74324
        int32_t * v10 = (int32_t *)((a1 & 0xffffff00 | (int64_t)v7) - 127); // 0x7432a
        *v10 = *v10 & -0x311a8dd8;
        int32_t * v11 = (int32_t *)(v9 + 49); // 0x74339
        *v11 = *v11 / 2;
        if (v2 != 1) {
            function_742dc();
        }
        char * v12 = (char *)((__asm_int3(v9) & 0xffffffff) + 0x71085a70); // 0x74349
        *v12 = *v12 - 16;
        *(int64_t *)0xaec147a9 = v3;
        __asm_outsb(0x6069, *(char *)(v1 + (v5 ? -4 : 4)));
        return (int64_t)(0x10000 * (v8 + (v5 ? 0xffff : 1)) / 0x10000);
    }
    int64_t v13 = v4 & -256; // 0x74369
    int64_t result = v13 | a2 % 256; // 0x74369
    int64_t v14 = (v5 ? -1 : 1) + a2; // 0x74369
    v1 = v14;
    char * v15 = (char *)result; // 0x7436b
    unsigned char v16 = *v15; // 0x7436b
    unsigned char v17 = v16 + (char)(v4 / 256); // 0x7436b
    *v15 = v17;
    unsigned char v18 = (char)(v4 / 256); // 0x7436d
    char v19 = v17 < v16; // 0x7436d
    unsigned char v20 = *(char *)(a3 - 50) + v19; // 0x7436d
    char v21 = v18 - v20; // 0x7436d
    *(char *)(v14 + result) = v21;
    int64_t v22 = v2 - 1; // 0x74373
    if (v22 == 0) {
        // 0x74375
        __asm_outsd((int16_t)a3, *(int32_t *)v1);
        *(int32_t *)v3 = -*(int32_t *)&v3;
        return result;
    }
    // 0x743ea
    if (v17 < v16 ? v20 != -1 || v21 - v19 > v18 : v20 > v18) {
        char * v23 = (char *)v22; // 0x74424
        char v24 = a3 / 256; // 0x74424
        *v23 = *v23 + v24;
        char * v25 = (char *)(v1 + 0x206d7034); // 0x74427
        *v25 = *v25 & v24;
        return result;
    }
    // 0x743ec
    return v13 | (int64_t)__asm_in_136((int16_t)a3);
}

// Address range: 0x744ad - 0x744b2
int64_t function_744ad(void) {
    // 0x744ad
    return function_66702db2();
}

// Address range: 0x744b2 - 0x744ba
int64_t function_744b2(void) {
    // 0x744b2
    int64_t result; // 0x744b2
    return result;
}

// Address range: 0x74506 - 0x7451e
int64_t function_74506(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x74506
    int64_t result; // 0x74506
    int64_t v1 = result;
    int64_t v2 = a5;
    int64_t v3 = a3;
    bool v4; // 0x74506
    if (v4) {
        // 0x74526
        return result;
    }
    // 0x74508
    *(char *)v1 = 2 * (char)v1;
    *(char *)v2 = *(char *)&v2 + (char)result;
    uint32_t v5 = *(int32_t *)&v3; // 0x74512
    *(int32_t *)v3 = v5 / 256 | 0x1000000 * v5;
    char v6 = __asm_in_133(-71); // 0x74515
    int32_t * v7 = (int32_t *)(v1 + 106); // 0x74517
    *v7 = ((int32_t)v6 | -0x15be3f00) & *v7;
    return result & 0xffffffff;
}

// Address range: 0x7455f - 0x74560
int64_t function_7455f(void) {
    // 0x7455f
    int64_t result; // 0x7455f
    return result;
}

// Address range: 0x745cb - 0x745d7
int64_t function_745cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x745cb
    int64_t result; // 0x745cb
    char * v1 = (char *)(result + 58); // 0x745cb
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x74615 - 0x74617
int64_t function_74615(void) {
    // 0x74615
    int64_t result; // 0x74615
    return result;
}

// Address range: 0x74621 - 0x74639
int64_t function_74621(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x74621
    int64_t v1; // 0x74621
    bool v2; // 0x74621
    unsigned char v3 = (char)v2 + (char)v1 - *(char *)(a2 - 0x5a42d510); // 0x74624
    int64_t result = v1 & -256 | (int64_t)v3; // 0x74624
    int32_t v4 = result; // 0x7462e
    __asm_out_137((int16_t)a3, v4);
    *(int32_t *)a1 = v4;
    __asm_out_134(23, v3);
    char * v5 = (char *)(a4 + 39); // 0x74635
    char v6 = *v5; // 0x74635
    *v5 = v6 - (char)(256 * (((int64_t)&g1 & -256 | 135) >> 8 & 255 ^ 135) / 256);
    return result;
}

// Address range: 0x74674 - 0x7467b
int64_t function_74674(int64_t a1, int64_t a2) {
    // 0x74674
    int64_t v1; // 0x74674
    return v1 & -256 | (int64_t)__asm_in_133(66);
}

// Address range: 0x12eedc - 0x12ef8c
int64_t function_12eedc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x12eedc
    int64_t v1; // 0x12eedc
    bool v2; // 0x12eedc
    int32_t * v3 = (int32_t *)((v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512) + 0x187cdf2e); // 0x12eee2
    *v3 = *v3 + (int32_t)a2;
    __readgsdword(a1 + 0x370a01e8);
    int32_t * v4 = (int32_t *)(a1 - 0x49d6537); // 0x12eefc
    *v4 = -*v4;
    unknown_ffffffffb4503908();
    int32_t * v5 = (int32_t *)(8 * a4 + 49 + v1); // 0x12ef0e
    int32_t v6 = *v5 + (int32_t)v1; // 0x12ef0e
    *v5 = v6;
    int64_t v7 = __asm_int1(a1, a2); // 0x12ef1e
    *(int64_t *)0x7364ea87d7de01e8 = v7;
    __asm_out((int16_t)a4, (char)v7);
    if (v6 < 0) {
        // 0x12ef86
        return a6 & 0xffffffff;
    }
    int32_t * v8 = (int32_t *)(a6 + 0x3aa9d300); // 0x12ef35
    *v8 = *v8 + (int32_t)a1;
    *(int32_t *)0x92d7db4d = *(int32_t *)0x92d7db4d + (int32_t)a4;
    int64_t result = a1 & 0xe809ea96; // 0x12ef4b
    if (a6 == 0) {
        result = function_12eecf();
    }
    // 0x12ef4d
    return result;
}

// Address range: 0x12ef91 - 0x12ef9a
int64_t function_12ef91(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 - 0x3169476f); // 0x12ef91
    int64_t result; // 0x12ef91
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x12ef9a - 0x12efab
int64_t function_12ef9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x12ef9a
    int64_t result; // 0x12ef9a
    int64_t v1 = 8 * result; // 0x12ef9a
    int32_t * v2 = (int32_t *)(v1 + a2); // 0x12ef9a
    *v2 = *v2 | (int32_t)a4;
    __asm_frstor(*(int864_t *)(result - 0x5a760ff + v1));
    *(int32_t *)a1 = (int32_t)result;
    char * v3 = (char *)(result - 127); // 0x12efa7
    *v3 = *v3 + (char)a4;
    return result;
}

// Address range: 0x12efcb - 0x12efd5
int64_t function_12efcb(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_ffffffffa3c3bbd2(); // 0x12efcc
    int64_t v2; // 0x12efcb
    int64_t v3 = v2 | a2;
    int32_t v4 = v3; // 0x12efd1
    unsigned char v5 = llvm_ctpop_i8((char)v3); // 0x12efd1
    *(char *)a1 = (char)v1;
    return v1 & -0xff01 | 0x4000 * (int64_t)(v4 == 0) | 0x8000 * (int64_t)(v4 < 0) | 1024 * (int64_t)(v5 % 2 == 0) | 512;
}

// Address range: 0x12efe6 - 0x12f020
int64_t function_12efe6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x12efe6
    __asm_iretd();
    int64_t v1; // 0x12efe6
    char v2 = v1;
    int64_t v3 = a3; // 0x12efe7
    v3 = v3 & -0xff01 | v1 & 0xff00;
    int64_t v4 = unknown_ffffffff9133d2f0(); // 0x12efea
    char * v5 = (char *)(v3 + 67); // 0x12efef
    *v5 = *v5 + v2;
    char * v6 = (char *)(v4 + 0x11649a0a + 8 * v3); // 0x12eff2
    unsigned char v7 = *v6 ^ v2; // 0x12eff2
    *v6 = v7;
    unknown_fffffffff87f83ff();
    while (v7 < 0) {
        // 0x12efe8
        v3 = v3 & -0xff01 | v1 & 0xff00;
        v4 = unknown_ffffffff9133d2f0();
        v5 = (char *)(v3 + 67);
        *v5 = *v5 + v2;
        v6 = (char *)(v4 + 0x11649a0a + 8 * v3);
        v7 = *v6 ^ v2;
        *v6 = v7;
        unknown_fffffffff87f83ff();
    }
    unsigned char v8 = (char)a4 % 32; // 0x12f005
    if (v8 != 0) {
        *(char *)0x39e8629d = *(char *)0x39e8629d << v8;
    }
    int64_t v9 = unknown_4789f10e(); // 0x12f008
    uint32_t v10 = (int32_t)a4 % 32; // 0x12f00d
    if (v10 != 0) {
        int32_t * v11 = (int32_t *)(v9 + 88); // 0x12f00d
        uint32_t v12 = *v11; // 0x12f00d
        *v11 = v12 >> v10 | v12 << 32 - v10;
    }
    int64_t v13 = (a5 & (int64_t)&g3) == 0 ? 1 : -1; // 0x12f010
    return unknown_ffffffffb3f8131d(v13 + a1, v13 + 0x39e8629d);
}

// Address range: 0x12f046 - 0x12f052
int64_t function_12f046(int64_t a1, int64_t a2, int64_t a3) {
    // 0x12f046
    int64_t v1; // 0x12f046
    int32_t * v2 = (int32_t *)(2 * v1); // 0x12f046
    bool v3; // 0x12f046
    *v2 = (int32_t)v3 - (int32_t)v1 + *v2;
    unsigned char v4 = (char)v1; // 0x12f04e
    unsigned char v5 = (char)a3; // 0x12f04e
    char v6 = v4 + v5; // 0x12f04e
    return v1 & -0xff01 | 256 * (64 * (int64_t)(v6 == 0) | (int64_t)(v6 < v4) | 128 * (int64_t)(v6 < 0) | 16 * (int64_t)(v4 % 16 + v5 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v6) % 2 == 0)) | 512;
}

// Address range: 0x12f053 - 0x12f05f
int64_t function_12f053(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int16_t v1 = a3; // 0x12f053
    int64_t v2; // 0x12f053
    __asm_out(v1, (char)v2);
    *(int32_t *)0x5ae33a02 = *(int32_t *)0x5ae33a02 - (int32_t)v2;
    __asm_outsd(v1, (int32_t)v2);
    return v2 & 0xffffffff;
}

// Address range: 0x12f0b0 - 0x12f0b5
int64_t function_12f0b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12f0b0
    int64_t result; // 0x12f0b0
    return result;
}

// Address range: 0x12f0c4 - 0x12f0c5
int64_t function_12f0c4(int64_t a1) {
    // 0x12f0c4
    int64_t result; // 0x12f0c4
    return result;
}

// Address range: 0x12f2dc - 0x12f375
int64_t function_12f2dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12f2dc
    int64_t v1; // 0x12f2dc
    uint64_t v2 = v1 + 0xfcffc783; // 0x12f2dc
    char v3 = *(char *)(a2 + 62); // 0x12f2ee
    return (256 * (int64_t)(v3 | (char)(v2 / 256)) | v2 & 0xffff002c) ^ 0xe89cf9cc;
}

// Address range: 0x12f382 - 0x12f383
int64_t function_12f382(void) {
    // 0x12f382
    int64_t result; // 0x12f382
    return result;
}

// Address range: 0x12f38d - 0x12f38e
int64_t function_12f38d(void) {
    // 0x12f38d
    int64_t result; // 0x12f38d
    return result;
}

// Address range: 0x12f39a - 0x12f39b
int64_t function_12f39a(void) {
    // 0x12f39a
    int64_t result; // 0x12f39a
    return result;
}

// Address range: 0x12f3a2 - 0x12f3ed
int64_t function_12f3a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a4 - 1; // 0x12f3a2
    int64_t v3; // 0x12f3a2
    bool v4; // 0x12f3a2
    if (v2 != 0 == v4) {
        v3 = function_12f38d();
    }
    int32_t v5 = v3; // 0x12f3a5
    *(int32_t *)a2 = v5 + (int32_t)a2;
    int32_t v6 = v5 & -0x15c58471; // 0x12f3a7
    unsigned char v7 = llvm_ctpop_i8((char)v6); // 0x12f3a7
    int64_t v8 = v6; // 0x12f3ae
    if (v7 % 2 == 0) {
        v8 = function_12f382();
    }
    int64_t v9 = v8; // 0x12f3b0
    if (v6 >= 0) {
        v9 = function_12f39a();
    }
    uint64_t v10 = v3 & 0x7b00;
    int32_t * v11 = (int32_t *)(a2 - 128); // 0x12f3b2
    *v11 = *v11 + (int32_t)(v10 | v2 & 0xffff00ff);
    unsigned char v12 = (char)v2; // 0x12f3b5
    unsigned char v13 = v12 % 32; // 0x12f3b5
    if (v13 != 0) {
        unsigned char v14 = *(char *)&v1; // 0x12f3b5
        *(char *)v1 = v14 >> 8 - v13 | v14 << v13;
    }
    unsigned char v15 = (char)(v10 / 256); // 0x12f3d9
    unsigned char v16 = (v12 - v15) % 32; // 0x12f3db
    if (v16 != 0) {
        char * v17 = (char *)((v9 & 0xffffff4c | 179) - 0x72c5fe18); // 0x12f3db
        unsigned char v18 = *v17; // 0x12f3db
        *v17 = v18 >> v16 | (char)(v12 < v15) << 8 - v16 | (char)((int16_t)v18 << (int16_t)(9 - v16));
    }
    return unknown_ffffffff8c72a6ee();
}

// Address range: 0x12f492 - 0x12f497
int64_t function_12f492(void) {
    // 0x12f492
    return function_ffffffffe816dfc8();
}

// Address range: 0x12f4dd - 0x12f4e1
int64_t function_12f4dd(void) {
    // 0x12f4dd
    int64_t result; // 0x12f4dd
    return result;
}

// Address range: 0x12f4e5 - 0x12f4ea
int64_t function_12f4e5(void) {
    // 0x12f4e5
    return function_ffffffffe18adf76();
}

// Address range: 0x12f4f4 - 0x12f4fb
int64_t function_12f4f4(void) {
    // 0x12f4f4
    int64_t result; // 0x12f4f4
    return result;
}

// Address range: 0x12f540 - 0x12f543
int64_t function_12f540(int64_t a1) {
    // 0x12f540
    int64_t result; // 0x12f540
    return result;
}

// Address range: 0x12f560 - 0x12f567
int64_t function_12f560(void) {
    // 0x12f560
    int64_t result; // 0x12f560
    int32_t * v1 = (int32_t *)(result + 0x3c0a88f9); // 0x12f560
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x12f58a - 0x12f594
int64_t function_12f58a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x12f58a
    int64_t result; // 0x12f58a
    return result;
}

// Address range: 0x12f5bf - 0x12f638
int64_t function_12f5bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x12f5bf
    bool v1; // 0x12f5bf
    if (v1) {
        unsigned char v2 = (char)a3;
        __asm_wait();
        unknown_ffffffffdc529a28();
        int64_t result = unknown_1837210(); // 0x12f627
        *(char *)a3 = v2 / 2 | 128 * v2;
        *(int64_t *)0x580123d7d801e896 = result;
        return result;
    }
    int64_t v3 = unknown_463343c8(); // 0x12f5c2
    *(int32_t *)v3 = (int32_t)v3;
    return function_ffffffffe89c46a7();
}

// Address range: 0x12f66f - 0x12f674
int64_t function_12f66f(void) {
    // 0x12f66f
    return function_60ad5f6a();
}

// Address range: 0x12f6cc - 0x12f6f4
int64_t function_12f6cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    uint32_t v2 = (int32_t)a4; // 0x12f6cc
    uint32_t v3 = v2 % 32; // 0x12f6cc
    int64_t v4; // 0x12f6cc
    int32_t v5; // 0x12f6cc
    int64_t v6; // 0x12f6cc
    if (v3 == 0) {
        // 0x12f6cc
        v4 = a2;
        v5 = a2;
    } else {
        int32_t * v7 = (int32_t *)(v6 - 0xab015f5); // 0x12f6cc
        *v7 = *v7 << v3;
        v4 = v1;
        v5 = *(int32_t *)&v1;
    }
    int32_t v8 = *(int32_t *)(v6 + 0x1e87d35); // 0x12f6d2
    __asm_int3(a1);
    unsigned char v9 = llvm_ctpop_i8((char)(v5 - (int32_t)a1)); // 0x12f6d9
    bool v10; // 0x12f6cc
    int64_t v11 = v10 ? -4 : 4; // 0x12f6d9
    int64_t v12 = v11 + a1; // 0x12f6d9
    int64_t v13 = v4 + v11; // 0x12f6d9
    v1 = v13;
    if (v9 % 2 == 0) {
        // 0x12f6dc
        return __asm_sti(v12, v13);
    }
    uint32_t v14 = *(int32_t *)(v13 + 0x4901e850) & (int32_t)v13; // 0x12f6e0
    unknown_111433ed(v12, v14);
    unknown_10e0e8f3();
    return function_12f75e(v12, (int64_t)v14, a3, (int64_t)(v2 - v8));
}

// Address range: 0x12f738 - 0x12f739
int64_t function_12f738(void) {
    // 0x12f738
    int64_t result; // 0x12f738
    return result;
}

// Address range: 0x12f75e - 0x12f779
int64_t function_12f75e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12f75e
    int64_t v1; // 0x12f75e
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t v3; // 0x12f75e
    *(int32_t *)a4 = *(int32_t *)&v3 + 0x968a440;
    return v2 | 46;
}

// Address range: 0x12f77b - 0x12f79b
int64_t function_12f77b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12f77b
    int64_t v1; // 0x12f77b
    *(int32_t *)a1 = (int32_t)v1 / 2;
    int32_t * v2 = (int32_t *)(v1 + 0x3a064a3a + v1); // 0x12f78c
    *v2 = *v2 / 2;
    *(char *)-0x31032d66 = *(char *)-0x31032d66 + (char)(v1 / 256);
    return function_12f738();
}

// Address range: 0x12f7a8 - 0x12f7cd
int64_t function_12f7a8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x12f7a8
    int64_t v1; // 0x12f7a8
    uint64_t v2 = v1;
    unsigned char v3 = __readgsbyte(a1); // 0x12f7a8
    *(char *)a2 = (char)v1;
    *(int32_t *)a1 = (int32_t)(v2 % 256 * (int64_t)v3 | v2 & 0xffff0000);
    char * v4 = (char *)((v1 & -256 | (uint64_t)v1 % 256) + 0xafce880); // 0x12f7b3
    *v4 = *v4 ^ (char)a3;
    __asm_in_136((int16_t)a3);
    int64_t v5; // 0x12f7a8
    uint32_t v6 = *(int32_t *)&v5 | 232;
    int64_t result = v6; // 0x12f7c3
    int32_t * v7 = (int32_t *)result; // 0x12f7c5
    *v7 = *v7 + v6;
    return result;
}

// Address range: 0x12f7d1 - 0x12f7d3
int64_t function_12f7d1(void) {
    // 0x12f7d1
    int64_t result; // 0x12f7d1
    return result;
}

// Address range: 0x12f7f1 - 0x12f7fc
int64_t function_12f7f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12f7f1
    int64_t result; // 0x12f7f1
    char * v1 = (char *)(result + 0x3d003847); // 0x12f7f1
    *v1 = *v1 + (char)(result / 256);
    return result;
}

// Address range: 0x12f893 - 0x12f8b0
int64_t function_12f893(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x12f893
    int64_t result; // 0x12f893
    *(int32_t *)a2 = 2 * (int32_t)result;
    uint64_t v1 = 256 * result & a4;
    char * v2 = (char *)((v1 & 0xff00 | a4 & -0xff01) - 111); // 0x12f8a6
    *v2 = *v2 & (char)(v1 / 256);
    int32_t * v3 = (int32_t *)(a2 - 0x3551ce5e); // 0x12f8a9
    *v3 = *v3 + (int32_t)a2;
    return result;
}

// Address range: 0x12f90d - 0x12f90e
int64_t function_12f90d(void) {
    // 0x12f90d
    int64_t result; // 0x12f90d
    return result;
}

// Address range: 0x12f918 - 0x12f91a
int64_t function_12f918(void) {
    // 0x12f918
    return function_12f90d();
}

// Address range: 0x12f948 - 0x12f94b
int64_t function_12f948(int64_t a1) {
    // 0x12f948
    int64_t result; // 0x12f948
    return result;
}

// Address range: 0x12f97a - 0x12f97e
int64_t function_12f97a(int64_t a1, int64_t a2) {
    // 0x12f97a
    int64_t result; // 0x12f97a
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x12f993 - 0x12f995
int64_t function_12f993(void) {
    // 0x12f993
    int64_t result; // 0x12f993
    return result;
}

// Address range: 0x12f99d - 0x12f99e
int64_t function_12f99d(void) {
    // 0x12f99d
    int64_t result; // 0x12f99d
    return result;
}

// Address range: 0x12f9fd - 0x12fa12
int64_t function_12f9fd(int64_t a1) {
    int64_t v1 = a1;
    int64_t v2; // 0x12f9fd
    unsigned char v3 = (char)v2;
    *(char *)v2 = v3 / 128 | 2 * v3;
    int64_t result = __asm_wait(); // 0x12f9ff
    char * v4 = (char *)(result - 0x38fec2d5); // 0x12fa03
    *v4 = *v4 + (char)v2;
    *(char *)v1 = *(char *)&v1 + (char)result;
    return result;
}

// Address range: 0x12fa14 - 0x12fa2f
int64_t function_12fa14(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int16_t v1 = a3; // 0x12fa14
    *(char *)a1 = __asm_insb(v1);
    int64_t v2; // 0x12fa14
    __asm_outsb(v1, *(char *)&v2);
    int64_t v3; // 0x12fa14
    int64_t v4; // 0x12fa14
    *(int32_t *)a1 = *(int32_t *)&v3 ^ (int32_t)v4;
    char v5 = *(char *)-0x77af59dd; // 0x12fa1c
    *(char *)-0x77af59dd = v5 + (char)((uint64_t)v4 / 256);
    char v6 = __asm_in_136(v1); // 0x12fa24
    return ((v4 | (int64_t)v6) & 0xffffff00 | (int64_t)(v6 - 69)) ^ 0xd6245893;
}

// Address range: 0x12fa56 - 0x12fac7
int64_t function_12fa56(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12fa56
    int64_t v1; // 0x12fa56
    *(char *)-0x2020ec97 = *(char *)-0x2020ec97 + (char)(v1 / 256);
    uint32_t v2 = *(int32_t *)(v1 - 0x691bff98) + (int32_t)a1; // 0x12fa6c
    int64_t result = __asm_int3((int64_t)v2); // 0x12fa72
    int32_t v3 = v2 ^ (int32_t)a3; // 0x12fa80
    if (llvm_ctpop_i8((char)v3) % 2 == 0) {
        // 0x12fa84
        return function_46f1a0d3(v3, 0x2b013d00 * v1 & 0xffffff00, 257 * a3 & 0xff00 | a3 & -0xff01, 0x2042ad0);
    }
    // 0x12fac5
    __asm_out_134(28, (char)result);
    return result;
}

// Address range: 0x12fcdc - 0x12fce5
int64_t function_12fcdc(int64_t a1) {
    // 0x12fcdc
    int64_t v1; // 0x12fcdc
    int32_t * v2 = (int32_t *)(v1 + 0x13d00b1 + 8 * v1); // 0x12fcdc
    *v2 = *v2 | (int32_t)a1;
    int64_t v3; // 0x12fcdc
    return (int64_t)(*(int32_t *)&v3 | (int32_t)v1);
}

// Address range: 0x12fcea - 0x12fcec
int64_t function_12fcea(void) {
    // 0x12fcea
    int64_t result; // 0x12fcea
    return result;
}

// Address range: 0x12fd0f - 0x12fd15
int64_t function_12fd0f(int64_t a1) {
    // 0x12fd0f
    return __asm_in((char)a1);
}

// Address range: 0x12fd1d - 0x12fd31
int64_t function_12fd1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12fd1d
    unknown_ffffffffa00d9f26();
    return function_12fcc1();
}

// Address range: 0x12fd6c - 0x12fd6d
int64_t function_12fd6c(void) {
    // 0x12fd6c
    int64_t result; // 0x12fd6c
    return result;
}

// Address range: 0x12fd73 - 0x12fd77
int64_t function_12fd73(void) {
    // 0x12fd73
    int64_t result; // 0x12fd73
    return result;
}

// Address range: 0x12fd98 - 0x12fd9e
int64_t function_12fd98(int64_t a1, int64_t a2, int64_t a3) {
    // 0x12fd98
    int64_t v1; // 0x12fd98
    __asm_out_138(104, (int32_t)v1);
    *(char *)a3 = (char)(v1 / 256) + (char)v1;
    return function_12fd6c();
}

// Address range: 0x12fdaa - 0x12fdab
int64_t function_12fdaa(void) {
    // 0x12fdaa
    int64_t result; // 0x12fdaa
    return result;
}

// Address range: 0x12fdad - 0x12fdbe
int64_t function_12fdad(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 43); // 0x12fdad
    int64_t result; // 0x12fdad
    bool v2; // 0x12fdad
    *v1 = (int32_t)v2 - (int32_t)result + *v1;
    return result;
}

// Address range: 0x12fe89 - 0x12fe96
int64_t function_12fe89(void) {
    // 0x12fe89
    return function_3d6867c3();
}

// Address range: 0x12feb0 - 0x12febe
int64_t function_12feb0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x12feb0
    int64_t v1; // 0x12feb0
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a1 + 0x3cfaa977); // 0x12feb0
    *v3 = *v3 + (int32_t)v2;
    char v4 = *(char *)(a3 + 16); // 0x12feb6
    return 256 * (int64_t)(v4 | (char)(v2 / 256)) | v2 & -0xff01;
}

// Address range: 0x2c404e - 0x2c4158
int64_t function_2c404e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2c404e
    __asm_in(124);
    return function_cf3c7(a1);
}

// Address range: 0x2c4181 - 0x2c4184
int64_t function_2c4181(int64_t a1) {
    // 0x2c4181
    int64_t result; // 0x2c4181
    return result;
}

// Address range: 0x2c41ef - 0x2c41f0
int64_t function_2c41ef(void) {
    // 0x2c41ef
    int64_t result; // 0x2c41ef
    return result;
}

// Address range: 0x2c41f5 - 0x2c41f6
int64_t function_2c41f5(int64_t a1) {
    // 0x2c41f5
    int64_t result; // 0x2c41f5
    return result;
}

// Address range: 0x2c4207 - 0x2c4208
int64_t function_2c4207(void) {
    // 0x2c4207
    int64_t result; // 0x2c4207
    return result;
}

// Address range: 0x2c444e - 0x2c458c
int64_t function_2c444e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (unsigned char)(char)a4 % 32; // 0x2c444e
    if (v1 != 0) {
        char * v2 = (char *)(a4 + 87); // 0x2c444e
        unsigned char v3 = *v2; // 0x2c444e
        *v2 = v3 >> 8 - v1 | v3 << v1;
    }
    return function_cf3c7(a1);
}

// Address range: 0x2c45e9 - 0x2c45ec
int64_t function_2c45e9(void) {
    // 0x2c45e9
    int64_t result; // 0x2c45e9
    return result;
}
