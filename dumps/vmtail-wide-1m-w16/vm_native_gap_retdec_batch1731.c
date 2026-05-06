/*
 * Targeted RetDec C for native executable gap queue batch 1731.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1a3fa9-0x1a41a9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a41a9-0x1a43a9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a43a9-0x1a45a9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a45a9-0x1a4638 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d7869-0x2d7a69 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d7a69-0x2d7c69 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d7c69-0x2d7e69 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d7e69-0x2d7efd rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cad5d-0x4caf5d rank=- name=- kind=- bytes=- uncovered=-
 *   0x4caf5d-0x4cb15d rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cb15d-0x4cb35d rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cb35d-0x4cb410 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52a8b6-0x52aab6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52aab6-0x52acb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52acb6-0x52aeb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52aeb6-0x52af50 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g5;
extern int g6;
extern int g7;
extern int g8;
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

int64_t function_1455e192();
int64_t function_1a3fa9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1a410a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1a4287(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1a43c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1a45e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_259ce();
int64_t function_25c34();
int64_t function_25cec();
int64_t function_2d7869(int64_t a1);
int64_t function_2d7963(int64_t a1);
int64_t function_2d7996(int64_t a1);
int64_t function_2d79ce(void);
int64_t function_2d79e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d79fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d7a42(int64_t a1);
int64_t function_2d7ae5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2d7b14(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2d7b53(int64_t a1, int64_t a2);
int64_t function_2d7b54(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d7c9d(void);
int64_t function_2d7cb6(int64_t a1);
int64_t function_2d7d0d(int64_t a1);
int64_t function_2d7d39(void);
int64_t function_2d7d45(void);
int64_t function_2d7d7f(void);
int64_t function_2d7d8e(void);
int64_t function_2d7db0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d7df4(int64_t a1);
int64_t function_2d7dfc(void);
int64_t function_2d7e2b(void);
int64_t function_2d7e34(void);
int64_t function_2d7e39(int64_t a1);
int64_t function_2d7e42(void);
int64_t function_2d7e70(void);
int64_t function_4b0890();
int64_t function_4b0bb0();
int64_t function_4b0f10();
int64_t function_4b1590();
int64_t function_4b1680();
int64_t function_4b1a80();
int64_t function_4b1ac0();
int64_t function_4b1ca0();
int64_t function_4b26c0();
int64_t function_4b36d0();
int64_t function_4b3cf0();
int64_t function_4b42a0();
int64_t function_4c8db0();
int64_t function_4c8e60();
int64_t function_4c8ef0();
int64_t function_4c98a0();
int64_t function_4c9d40();
int64_t function_4ca380();
int64_t function_4caa40();
int64_t function_4caa90();
int64_t function_4cad5d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4caf92(void);
int64_t function_4cafa0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4cca30();
int64_t function_4eeb50();
int64_t function_52a8b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_52abed(void);
int64_t function_52ac02(void);
int64_t function_52ac04(void);
int64_t function_52ac06(void);
int64_t function_52ac08(void);
int64_t function_52ac10(int64_t result, int64_t a2);
int64_t function_52af00(int64_t a1);
int64_t function_547e30();
int64_t function_547fb0();
int64_t function_565970();
int64_t function_566390();
int64_t function_61ce7e4b();
int64_t function_8291250();
int64_t function_c57b8();
int64_t function_ffffffffc7b645fa();
int64_t unknown_3d2f61f4();

// Address range: 0x1a3fa9 - 0x1a410a
int64_t function_1a3fa9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 169; // bp-72, 0x1a40d9
    return function_c57b8(a1, a2, a3, a4, a5, a6, (int64_t)&v1);
}

// Address range: 0x1a410a - 0x1a4287
int64_t function_1a410a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1a410a
    int64_t v1; // bp-32, 0x1a410a
    int64_t v2 = (int64_t)&v1; // 0x1a41b3
    int64_t v3 = v2 + 16; // 0x1a424f
    v1 = v3;
    *(int64_t *)(v2 + 8) = *(int64_t *)v3;
    v1 = v3;
    return function_c57b8(a1, a2, a3, a4, a5, a6, a7);
}

// Address range: 0x1a4287 - 0x1a43c0
int64_t function_1a4287(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1a4287
    return function_c57b8(a1, a2, a3, a4, a5, a6, 0x19eb81);
}

// Address range: 0x1a43c0 - 0x1a453f
int64_t function_1a43c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1a43c0
    int64_t v1; // bp-24, 0x1a43c0
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x1a43c0
    return function_c57b8(a1, a2, a3, a4, a5, a6, v2);
}

// Address range: 0x1a45e1 - 0x1a4635
int64_t function_1a45e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a45e1
    int64_t result; // 0x1a45e1
    char * v1 = (char *)(result - 127); // 0x1a45e1
    *v1 = *v1 | (char)a4;
    return result;
}

// Address range: 0x2d7869 - 0x2d786c
int64_t function_2d7869(int64_t a1) {
    // 0x2d7869
    int64_t result; // 0x2d7869
    return result;
}

// Address range: 0x2d7963 - 0x2d7964
int64_t function_2d7963(int64_t a1) {
    // 0x2d7963
    int64_t result; // 0x2d7963
    return result;
}

// Address range: 0x2d7996 - 0x2d7998
int64_t function_2d7996(int64_t a1) {
    // 0x2d7996
    int64_t result; // 0x2d7996
    return result;
}

// Address range: 0x2d79ce - 0x2d79d1
int64_t function_2d79ce(void) {
    // 0x2d79ce
    int64_t result; // 0x2d79ce
    return result;
}

// Address range: 0x2d79e0 - 0x2d79f8
int64_t function_2d79e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d79e0
    __asm_in_133(0);
    int64_t result = unknown_3d2f61f4(); // 0x2d79ee
    int64_t v1; // 0x2d79e0
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a4 + (int32_t)v1;
    return result;
}

// Address range: 0x2d79fb - 0x2d7a1b
int64_t function_2d79fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d79fb
    int64_t v1; // 0x2d79fb
    char * v2 = (char *)(4 * v1 + 9 + v1); // 0x2d79ff
    bool v3; // 0x2d79fb
    *v2 = (char)v3 - (char)v1 + *v2;
    int64_t v4; // bp+1774, 0x2d79fb
    int64_t v5 = v1 ^ (int64_t)&v4;
    int32_t v6 = v5; // 0x2d7a03
    unsigned char v7 = llvm_ctpop_i8((char)v5); // 0x2d7a03
    *(int64_t *)((v5 & 0xffffffff) - 8) = 0x4000 * (int64_t)v3 | 1024 * (int64_t)v3 | 512 * (int64_t)v3 | 256 * (int64_t)v3 | 64 * (int64_t)(v6 == 0) | 128 * (int64_t)(v6 < 0) | 4 * (int64_t)(v7 % 2 == 0) | 2;
    char * v8 = (char *)(v1 - 0x6cb0f862); // 0x2d7a06
    unsigned char v9 = *v8; // 0x2d7a06
    *v8 = v9 / 2 | 128 * v9;
    return v1 + 0x202555ca & 0xffffffff;
}

// Address range: 0x2d7a42 - 0x2d7a43
int64_t function_2d7a42(int64_t a1) {
    // 0x2d7a42
    int64_t result; // 0x2d7a42
    return result;
}

// Address range: 0x2d7ae5 - 0x2d7b03
int64_t function_2d7ae5(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3; // bp-8, 0x2d7ae5
    int64_t v2; // 0x2d7ae5
    *(char *)0x3dd5b7f1c0060110 = (char)v2;
    int32_t * v3 = (int32_t *)(v2 - 0x78000000); // 0x2d7aef
    *v3 = *v3 + (int32_t)(int64_t)&v1;
    *(char *)0xa3d7afe = *(char *)0xa3d7afe + (char)(v2 / 256);
    return function_8291250();
}

// Address range: 0x2d7b14 - 0x2d7b20
int64_t function_2d7b14(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2d7b14
    int64_t v1; // 0x2d7b14
    char * v2 = (char *)(v1 + 98 + 8 * v1); // 0x2d7b14
    *v2 = *v2 + (char)(a4 / 256);
    return function_2d7b54(a1, a2, a3, a4);
}

// Address range: 0x2d7b53 - 0x2d7b54
int64_t function_2d7b53(int64_t a1, int64_t a2) {
    // 0x2d7b53
    int64_t result; // 0x2d7b53
    return result;
}

// Address range: 0x2d7b54 - 0x2d7bec
int64_t function_2d7b54(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    __asm_fldenv(*(int224_t *)&v1);
    bool v2; // 0x2d7b54
    int64_t v3 = (v2 ? -4 : 4) + a1; // 0x2d7b56
    int64_t result; // 0x2d7b54
    int32_t * v4 = (int32_t *)(result - 0xe70891); // 0x2d7b65
    *v4 = *v4 + (int32_t)result;
    char * v5 = (char *)(result + 0x93e0230); // 0x2d7b6b
    *v5 = *v5 | 37;
    *(char *)-0x5fdbe86 = *(char *)-0x5fdbe86 + (char)v3;
    if (v1 != 1) {
        int32_t * v6 = (int32_t *)(v3 - 9); // 0x2d7be9
        *v6 = *v6 + (int32_t)result;
        return result;
    }
    // 0x2d7b7b
    *(int32_t *)(result + 90) = (int32_t)result;
    char * v7 = (char *)(result - 27 + 4 * result); // 0x2d7b83
    *v7 = *v7 - 111;
    return result & -170;
}

// Address range: 0x2d7c9d - 0x2d7ca2
int64_t function_2d7c9d(void) {
    // 0x2d7c9d
    return function_1455e192();
}

// Address range: 0x2d7cb6 - 0x2d7cbc
int64_t function_2d7cb6(int64_t a1) {
    // 0x2d7cb6
    int64_t v1; // 0x2d7cb6
    return function_ffffffffc7b645fa(v1 & 0xffffffff);
}

// Address range: 0x2d7d0d - 0x2d7d0e
int64_t function_2d7d0d(int64_t a1) {
    // 0x2d7d0d
    int64_t result; // 0x2d7d0d
    return result;
}

// Address range: 0x2d7d39 - 0x2d7d3a
int64_t function_2d7d39(void) {
    // 0x2d7d39
    int64_t result; // 0x2d7d39
    return result;
}

// Address range: 0x2d7d45 - 0x2d7d46
int64_t function_2d7d45(void) {
    // 0x2d7d45
    int64_t result; // 0x2d7d45
    return result;
}

// Address range: 0x2d7d7f - 0x2d7d81
int64_t function_2d7d7f(void) {
    // 0x2d7d7f
    return function_2d7d45();
}

// Address range: 0x2d7d8e - 0x2d7d8f
int64_t function_2d7d8e(void) {
    // 0x2d7d8e
    int64_t result; // 0x2d7d8e
    return result;
}

// Address range: 0x2d7db0 - 0x2d7de3
int64_t function_2d7db0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d7db0
    int64_t result; // 0x2d7db0
    bool v1; // 0x2d7db0
    if (!v1) {
        result = function_2d7d39();
    }
    if (v1 || false) {
        // 0x2d7df3
        return result;
    }
    int64_t v2 = __asm_int1(); // 0x2d7dba
    return function_61ce7e4b((v2 + 202) % 256 | v2 & 0xffffff00);
}

// Address range: 0x2d7df4 - 0x2d7df7
int64_t function_2d7df4(int64_t a1) {
    // 0x2d7df4
    int64_t result; // 0x2d7df4
    return result;
}

// Address range: 0x2d7dfc - 0x2d7dfe
int64_t function_2d7dfc(void) {
    // 0x2d7dfc
    return function_2d7d8e();
}

// Address range: 0x2d7e2b - 0x2d7e32
int64_t function_2d7e2b(void) {
    // 0x2d7e2b
    return function_2d7e39((int64_t)&g8);
}

// Address range: 0x2d7e34 - 0x2d7e39
int64_t function_2d7e34(void) {
    // 0x2d7e34
    int64_t v1; // 0x2d7e34
    return v1 + 0xfbc32974 & 0xffffffff;
}

// Address range: 0x2d7e39 - 0x2d7e40
int64_t function_2d7e39(int64_t a1) {
    char v1 = *(char *)-0x58a7f0c0; // 0x2d7e39
    int64_t result; // 0x2d7e39
    *(char *)-0x58a7f0c0 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x2d7e42 - 0x2d7e43
int64_t function_2d7e42(void) {
    // 0x2d7e42
    int64_t result; // 0x2d7e42
    return result;
}

// Address range: 0x2d7e70 - 0x2d7e73
int64_t function_2d7e70(void) {
    // 0x2d7e70
    int64_t result; // 0x2d7e70
    return result;
}

// Address range: 0x4cad5d - 0x4caf92
int64_t function_4cad5d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4cad5d
    int64_t v1; // 0x4cad5d
    int64_t v2 = v1;
    int64_t v3; // bp+32, 0x4cad5d
    int64_t v4 = (int64_t)&v3;
    int64_t v5 = function_4b42a0(v1, v1, 0, v1, v1); // 0x4cad90
    int64_t v6 = v5; // 0x4cad97
    int64_t result; // 0x4cad5d
    int64_t v7; // bp+128, 0x4cad5d
    int64_t v8; // bp+64, 0x4cad5d
    int64_t v9; // bp+96, 0x4cad5d
    while ((int32_t)v5 == 0) {
        int64_t v10 = function_4b42a0(v1, v1, 0, v1, v1); // 0x4cadab
        v6 = v10;
        if ((int32_t)v10 != 0) {
            // break -> 0x4cae70
            break;
        }
        // 0x4cadb8
        if ((int32_t)function_4b1590(v1, v1) != 0) {
            int64_t v11 = function_4b1ac0(a2, v1, v1); // 0x4cadd2
            v6 = v11;
            if ((int32_t)v11 != 0) {
                // break -> 0x4cae70
                break;
            }
            // 0x4caddf
            if (function_4b0f10(a2) == a3) {
                // 0x4cadf4
                if ((int32_t)function_4b1590(v1, v1) < 0) {
                    // 0x4caf82
                    function_4b0bb0(v1, v1);
                }
                int64_t v12 = function_4b1a80(&v3, v1, 1); // 0x4cae14
                v6 = v12;
                if ((int32_t)v12 != 0) {
                    // break -> 0x4cae70
                    break;
                }
                int64_t v13 = function_4b1a80(&v8, v1, 1); // 0x4cae2a
                v6 = v13;
                if ((int32_t)v13 != 0) {
                    // break -> 0x4cae70
                    break;
                }
                int64_t v14 = function_4b1ac0((int64_t)&v9, v4, (int64_t)&v8); // 0x4cae42
                v6 = v14;
                if ((int32_t)v14 != 0) {
                    // break -> 0x4cae70
                    break;
                }
                int64_t v15 = function_4b36d0(&v7, a1, &v9); // 0x4cae5d
                v6 = v15;
                if ((int32_t)v15 != 0) {
                    // break -> 0x4cae70
                    break;
                }
            }
        }
        // 0x4cad68
        if ((int32_t)function_4b1680(&v7, 1) == 0) {
            int64_t v16 = v2 + 64; // 0x4caec0
            int64_t v17 = function_4b3cf0(v16, a1, &v9); // 0x4caed1
            v6 = v17;
            if ((int32_t)v17 != 0) {
                goto lab_0x4cae70;
            } else {
                int64_t v18 = function_4b26c0(v2 + 136, v16, &v3); // 0x4caee9
                v6 = v18;
                if ((int32_t)v18 != 0) {
                    goto lab_0x4cae70;
                } else {
                    int64_t v19 = function_4b26c0(v2 + 160, v16, &v8); // 0x4caf05
                    v6 = v19;
                    if ((int32_t)v19 != 0) {
                        goto lab_0x4cae70;
                    } else {
                        int64_t v20 = function_4b3cf0(v2 + 184, v1, (int64_t *)v1); // 0x4caf1f
                        v6 = v20;
                        if ((int32_t)v20 != 0) {
                            goto lab_0x4cae70;
                        } else {
                            // 0x4caf2c
                            *(int64_t *)(v2 + 8) = (function_4b0f10(v2 + 16) + 7) / 8;
                            function_4b0890(&v3);
                            function_4b0890(&v8);
                            function_4b0890(&v9);
                            function_4b0890(&v7);
                            result = 0;
                            return result;
                        }
                    }
                }
            }
        }
        v5 = function_4b42a0(v1, v1, 0, v1, v1);
        v6 = v5;
    }
    goto lab_0x4cae70;
  lab_0x4cae70:
    // 0x4cae70
    function_4b0890(&v3);
    function_4b0890(&v8);
    function_4b0890(&v9);
    function_4b0890(&v7);
    function_4caa90(v2);
    result = v6 - (int64_t)(int32_t)"angle" & 0xffffffff;
  lab_0x4caeae:
    // 0x4caeae
    return result;
}

// Address range: 0x4caf92 - 0x4caf98
int64_t function_4caf92(void) {
    // 0x4caf92
    return 0xffffbf80;
}

// Address range: 0x4cafa0 - 0x4cb404
int64_t function_4cafa0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4cafa0
    int64_t v1; // bp-376, 0x4cafa0
    function_4c8db0(&v1, 0, 0);
    int64_t v2; // bp-360, 0x4cafa0
    int64_t v3 = function_4b1ca0(&v2, 16, "9292758453063D803DD603D5E777D7888ED1D5BF35786190FA2F23EBC0848AEADDA92CA6C3D80B32C4D109BE0F36D6AE7130B9CED7ACDF54CFC7555AC14EEBAB93A89813FBF3C4F8066D2D800F7C38A81AE31942917403FF4946B0A83D3D3E05EE57C6F5F5606FB5D4BC6CD34EE0801A5E94BB77B07507233A0BC7BAC8F90F79"); // 0x4cafee
    if ((int32_t)v3 != 0) {
        // 0x4cb018
        function_4caa90((int64_t)&v1);
        // 0x4cb025
        return v3 & 0xffffffff & 0xffffffff;
    }
    // 0x4caff9
    int64_t v4; // bp-336, 0x4cafa0
    int64_t v5 = function_4b1ca0(&v4, 16, "10001"); // 0x4cb00d
    if ((int32_t)v5 != 0) {
        // 0x4cb018
        function_4caa90((int64_t)&v1);
        // 0x4cb025
        return v5 & 0xffffffff & 0xffffffff;
    }
    // 0x4cb050
    int64_t v6; // bp-312, 0x4cafa0
    int64_t v7 = function_4b1ca0(&v6, 16, "24BF6185468786FDD303083D25E64EFC66CA472BC44D253102F8B4A9D3BFA75091386C0077937FE33FA3252D28855837AE1B484A8A9A45F7EE8C0C634F99E8CDDF79C5CE07EE72C7F123142198164234CABB724CF78B8173B9F880FC86322407AF1FEDFDDE2BEB674CA15F3E81A1521E071513A1E85B5DFA031F21ECAE91A34D"); // 0x4cb064
    if ((int32_t)v7 != 0) {
        // 0x4cb018
        function_4caa90((int64_t)&v1);
        // 0x4cb025
        return v7 & 0xffffffff & 0xffffffff;
    }
    // 0x4cb06f
    int64_t v8; // bp-288, 0x4cafa0
    int64_t v9 = function_4b1ca0(&v8, 16, "C36D0EB7FCD285223CFB5AABA5BDA3D82C01CAD19EA484A87EA4377637E75500FCB2005C5C7DD6EC4AC023CDA285D796C3D9E75E1EFC42488BB4F1D13AC30A57"); // 0x4cb083
    if ((int32_t)v9 != 0) {
        // 0x4cb018
        function_4caa90((int64_t)&v1);
        // 0x4cb025
        return v9 & 0xffffffff & 0xffffffff;
    }
    // 0x4cb08e
    int64_t v10; // bp-264, 0x4cafa0
    int64_t v11 = function_4b1ca0(&v10, 16, "C000DF51A7C77AE8D7C7370C1FF55B69E211C2B9E5DB1ED0BF61D0D9899620F4910E4168387E3C30AA1E00C339A795088452DD96A9A5EA5D9DCA68DA636032AF"); // 0x4cb0a2
    if ((int32_t)v11 != 0) {
        // 0x4cb018
        function_4caa90((int64_t)&v1);
        // 0x4cb025
        return v11 & 0xffffffff & 0xffffffff;
    }
    // 0x4cb0b1
    int64_t v12; // bp-240, 0x4cafa0
    int64_t v13 = function_4b1ca0(&v12, 16, "C1ACF567564274FB07A0BBAD5D26E2983C94D22288ACD763FD8E5600ED4A702DF84198A5F06C2E72236AE490C93F07F83CC559CD27BC2D1CA488811730BB5725"); // 0x4cb0c5
    if ((int32_t)v13 != 0) {
        // 0x4cb018
        function_4caa90((int64_t)&v1);
        // 0x4cb025
        return v13 & 0xffffffff & 0xffffffff;
    }
    // 0x4cb0d4
    int64_t v14; // bp-216, 0x4cafa0
    int64_t v15 = function_4b1ca0(&v14, 16, "4959CBF6F8FEF750AEE6977C155579C7D8AAEA56749EA28623272E4F7D0592AF7C1F1313CAC9471B5C523BFE592F517B407A1BD76C164B93DA2D32A383E58357"); // 0x4cb0e8
    if ((int32_t)v15 != 0) {
        // 0x4cb018
        function_4caa90((int64_t)&v1);
        // 0x4cb025
        return v15 & 0xffffffff & 0xffffffff;
    }
    // 0x4cb0f7
    int64_t v16; // bp-192, 0x4cafa0
    int64_t v17 = function_4b1ca0(&v16, 16, "9AE7FBC99546432DF71896FC239EADAEF38D18D2B2F0E2DD275AA977E2BF4411F5A3B2A5D33605AEBBCCBA7FEB9F2D2FA74206CEC169D74BF5A8C50D6F48EA08"); // 0x4cb10b
    int64_t v18 = v17 & 0xffffffff; // 0x4cb112
    if ((int32_t)v17 != 0) {
        // 0x4cb018
        function_4caa90((int64_t)&v1);
        // 0x4cb025
        return v18 & 0xffffffff;
    }
    if ((int32_t)a1 != 0) {
        // 0x4cb13d
        printf("  RSA key validation: ");
    }
    // 0x4cb11e
    if ((int32_t)function_4c8e60(&v1) == 0) {
        // 0x4cb15b
        if ((int32_t)function_4c8ef0(&v1) == 0) {
            int64_t v19; // bp-504, 0x4cafa0
            int64_t str; // bp-536, 0x4cafa0
            int64_t str2; // bp-568, 0x4cafa0
            int64_t v20; // bp-600, 0x4cafa0
            int32_t n; // bp-608, 0x4cafa0
            if ((int32_t)a1 == 0) {
                // 0x4cb174
                __asm_rep_movsd_memcpy((char *)&str2, (char *)&g1, 6);
                int64_t v21 = function_4c98a0(&v1, 0x4c8750, 0, 0, 24, &str2, &v19); // 0x4cb1af
                if ((int32_t)v21 != 0) {
                    // 0x4cb025
                    return 1;
                }
                int64_t v22 = function_4c9d40(&v1, 0x4c8750, 0, 1, (int64_t *)&n, &v19, &str, 24); // 0x4cb1ec
                if ((int32_t)v22 != 0 || memcmp(&str, &str2, n) != 0) {
                    // 0x4cb025
                    return 1;
                }
                // 0x4cb213
                function_4cca30(&str2, 24, &v20);
                int64_t v23 = function_4ca380(&v1, 0x4c8750, 0, 1, 4, 0, &v20, &v19); // 0x4cb252
                if ((int32_t)v23 != 0) {
                    // 0x4cb025
                    return 1;
                }
                int64_t v24 = function_4caa40(&v1, 0, 0, 0, 4, 0, &v20, &v19); // 0x4cb27f
                if ((int32_t)v24 != 0) {
                    // 0x4cb025
                    return 1;
                }
                // 0x4cb018
                function_4caa90((int64_t)&v1);
                // 0x4cb025
                return v18 & 0xffffffff;
            }
            // 0x4cb291
            printf("passed\n  PKCS#1 encryption : ");
            __asm_rep_movsd_memcpy((char *)&str2, (char *)&g1, 6);
            int64_t v25 = function_4c98a0(&v1, 0x4c8750, 0, 0, 24, &str2, &v19); // 0x4cb2da
            if ((int32_t)v25 != 0) {
                // 0x4cb14d
                puts("failed");
                // 0x4cb025
                return 1;
            }
            // 0x4cb2e7
            printf("passed\n  PKCS#1 decryption : ");
            int64_t v26 = function_4c9d40(&v1, 0x4c8750, 0, 1, (int64_t *)&n, &v19, &str, 24); // 0x4cb323
            if ((int32_t)v26 != 0 || memcmp(&str, &str2, n) != 0) {
                // 0x4cb14d
                puts("failed");
                // 0x4cb025
                return 1;
            }
            // 0x4cb34a
            puts("passed");
            printf("  PKCS#1 data sign  : ");
            function_4cca30(&str2, 24, &v20);
            int64_t v27 = function_4ca380(&v1, 0x4c8750, 0, 1, 4, 0, &v20, &v19); // 0x4cb3a3
            if ((int32_t)v27 != 0) {
                // 0x4cb14d
                puts("failed");
                // 0x4cb025
                return 1;
            }
            // 0x4cb3b0
            printf("passed\n  PKCS#1 sig. verify: ");
            int64_t v28 = function_4caa40(&v1, 0, 0, 0, 4, 0, &v20, &v19); // 0x4cb3dc
            if ((int32_t)v28 != 0) {
                // 0x4cb14d
                puts("failed");
                // 0x4cb025
                return 1;
            }
            // 0x4cb3e9
            puts("passed");
            putchar(10);
            // 0x4cb018
            function_4caa90((int64_t)&v1);
            // 0x4cb025
            return v18 & 0xffffffff;
        }
    }
    // 0x4cb12f
    if ((int32_t)a1 == 0) {
        // 0x4cb025
        return 1;
    }
    // 0x4cb14d
    puts("failed");
    // 0x4cb025
    return 1;
}

// Address range: 0x52a8b6 - 0x52abed
int64_t function_52a8b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(__asm_sti() - 123); // 0x52a8b8
    *v1 = *v1 - 1;
    __asm_in((int16_t)a3);
    int64_t v2; // 0x52a8b6
    int32_t * v3 = (int32_t *)(v2 + 8);
    *v3 = *v3 + 1;
    function_566390(&g5);
    int64_t result = __readfsqword(40) ^ a4; // 0x52a8e0
    if (result == 0) {
        // 0x52a8ef
        return result;
    }
    // 0x52abcb
    __stack_chk_fail();
    while (true) {
        // 0x52abd0
        function_565970(v2);
        function_4eeb50(v2);
        _Unwind_Resume((struct _Unwind_Exception *)&g8);
    }
}

// Address range: 0x52abed - 0x52ac02
int64_t function_52abed(void) {
    // 0x52abed
    int64_t v1; // 0x52abed
    function_4eeb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g8;
}

// Address range: 0x52ac02 - 0x52ac04
int64_t function_52ac02(void) {
    // 0x52ac02
    int64_t result; // 0x52ac02
    return result;
}

// Address range: 0x52ac04 - 0x52ac06
int64_t function_52ac04(void) {
    // 0x52ac04
    int64_t result; // 0x52ac04
    return result;
}

// Address range: 0x52ac06 - 0x52ac08
int64_t function_52ac06(void) {
    // 0x52ac06
    return function_52abed();
}

// Address range: 0x52ac08 - 0x52ac0a
int64_t function_52ac08(void) {
    // 0x52ac08
    int64_t result; // 0x52ac08
    return result;
}

// Address range: 0x52ac10 - 0x52aefa
int64_t function_52ac10(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x52ac28
    *(int64_t *)result = (int64_t)&g7;
    int64_t v2 = *(int64_t *)(a2 + 32); // 0x52ac42
    int64_t str = *(int64_t *)v2; // 0x52ac46
    int32_t * v3; // 0x52ac10
    int64_t v4; // 0x52ac10
    int64_t v5; // 0x52ac10
    int64_t v6; // 0x52acb4
    int64_t v7; // 0x52acd5
    int64_t * v8; // 0x52acd5
    int64_t v9; // 0x52acd5
    int64_t v10; // 0x52acd9
    int64_t * v11; // 0x52acde
    if (str == 0) {
        // 0x52ae80
        function_547fb0();
        goto lab_0x52ae3b_2;
    } else {
        // 0x52ac58
        if (*(int64_t *)(v2 + 8) == 0) {
            // 0x52ae20
            function_25c34(result, str, (int64_t)strlen((char *)str));
            goto lab_0x52ae3b_2;
        } else {
            int64_t v12 = 1; // 0x52ac70
            int64_t str2 = *(int64_t *)(8 * v12 + v2); // 0x52ac74
            int32_t strcmp_rc = strcmp((char *)str, (char *)str2); // 0x52ac7b
            int64_t v13 = v12; // 0x52ac93
            int64_t str3 = str2; // 0x52ac93
            while (v12 < 11 == strcmp_rc == 0) {
                // 0x52ac70
                v12 = v13 + 1;
                str2 = *(int64_t *)(8 * v12 + v2);
                strcmp_rc = strcmp((char *)str3, (char *)str2);
                v13 = v12;
                str3 = str2;
            }
            if (strcmp_rc == 0) {
                // 0x52ae20
                function_25c34(result, str, (int64_t)strlen((char *)str));
                goto lab_0x52ae3b_2;
            } else {
                // 0x52ac9d
                function_259ce(result, 128);
                v6 = (int64_t)g2;
                function_25cec(result, v6, (int64_t)strlen((char *)g2));
                v7 = result - 24;
                v8 = (int64_t *)v7;
                v9 = *v8;
                v10 = v9 + 1;
                v11 = (int64_t *)(result - 16);
                v3 = (int32_t *)(result - 8);
                if (v10 > *v11) {
                    goto lab_0x52aceb;
                } else {
                    // 0x52ace4
                    v4 = v9;
                    v5 = v6;
                    if (*v3 < 1) {
                        goto lab_0x52acf9;
                    } else {
                        goto lab_0x52aceb;
                    }
                }
            }
        }
    }
  lab_0x52ade0:;
    // 0x52ade0
    uint64_t v14; // 0x52adcf
    function_259ce(result, v14);
    int64_t v15 = *v8; // 0x52adeb
    goto lab_0x52adee;
  lab_0x52adee:
    // 0x52adee
    *(char *)(v15 + result) = 59;
    int64_t v16; // 0x52ac10
    int64_t v17; // 0x52adcb
    if (v7 != (int64_t)&g6) {
        // 0x52ae06
        *v3 = 0;
        *v8 = v14;
        *(char *)(v17 + v16) = 0;
    }
    // 0x52ad40
    int64_t v18; // 0x52ac10
    int64_t str4 = *(int64_t *)(v18 + v6); // 0x52ad45
    function_25cec(result, str4, (int64_t)strlen((char *)str4));
    int64_t v19 = *v8; // 0x52ad62
    int64_t v20 = v19 + 1; // 0x52ad66
    int64_t v21; // 0x52ac10
    int64_t v22; // 0x52ac10
    if (v20 > *v11) {
        goto lab_0x52ad77;
    } else {
        // 0x52ad70
        v21 = v19;
        v22 = str4;
        if (*v3 < 1) {
            goto lab_0x52ad85;
        } else {
            goto lab_0x52ad77;
        }
    }
  lab_0x52ad77:
    // 0x52ad77
    function_259ce(result, v20);
    v21 = *v8;
    v22 = v20;
    goto lab_0x52ad85;
  lab_0x52ad85:
    // 0x52ad85
    *(char *)(v21 + result) = 61;
    if (v7 != (int64_t)&g6) {
        // 0x52ae60
        *v3 = 0;
        *v8 = v20;
        *(char *)(v19 + v16) = 0;
    }
    int64_t str5 = *(int64_t *)(*(int64_t *)(v22 + 32) + v18); // 0x52ada4
    function_25cec(result, str5, (int64_t)strlen((char *)str5));
    int64_t v23 = v18 + 8; // 0x52adc6
    if (v18 == 88) {
        // break -> 0x52ae3b
        goto lab_0x52ae3b_2;
    }
    goto lab_0x52adc8;
  lab_0x52ae3b_2:
    // 0x52ae3b
    if (v1 == __readfsqword(40)) {
        // 0x52ae4e
        return result;
    }
    // 0x52aeae
    __stack_chk_fail();
    int64_t v24 = result - 24; // 0x52aeb9
    int64_t v25 = v24; // 0x52aec0
    if (v24 != (int64_t)&g6) {
        goto lab_0x52aeca;
    } else {
        // 0x52aec2
        _Unwind_Resume((struct _Unwind_Exception *)&g8);
        v25 = (int64_t)&g8;
        goto lab_0x52aeca;
    }
  lab_0x52aeca:;
    // 0x52aeca
    int32_t v26; // 0x52ac10
    if (g4 == 0) {
        int32_t * v27 = (int32_t *)(result - 8); // 0x52aeef
        int32_t v28 = *v27; // 0x52aeef
        *v27 = v28 - 1;
        v26 = v28;
    } else {
        int32_t * v29 = (int32_t *)(v25 + 16); // 0x52aedb
        int32_t v30 = *v29; // 0x52aedb
        *v29 = v30 - 1;
        v26 = v30;
    }
    int32_t v31 = v26;
    if (v31 >= 0 != v31 != 0) {
        // 0x52aee3
        function_547e30();
    }
    // 0x52aec2
    _Unwind_Resume((struct _Unwind_Exception *)&g8);
    v25 = (int64_t)&g8;
    goto lab_0x52aeca;
  lab_0x52aceb:
    // 0x52aceb
    function_259ce(result, v10);
    v4 = *v8;
    v5 = v10;
    goto lab_0x52acf9;
  lab_0x52acf9:
    // 0x52acf9
    *(char *)(v4 + result) = 61;
    if (v7 != (int64_t)&g6) {
        // 0x52ae98
        *v3 = 0;
        *v8 = v10;
        int64_t v32 = result + 1;
        *(char *)(v9 + v32) = 0;
        v16 = v32;
    } else {
        // 0x52acf9
        v16 = result + 1;
    }
    int64_t str6 = *(int64_t *)*(int64_t *)(v5 + 32); // 0x52ad18
    function_25cec(result, str6, (int64_t)strlen((char *)str6));
    v23 = 8;
    while (true) {
      lab_0x52adc8:
        // 0x52adc8
        v18 = v23;
        v17 = *v8;
        v14 = v17 + 1;
        if (v14 > *v11) {
            goto lab_0x52ade0;
        } else {
            // 0x52add9
            v15 = v17;
            if (*v3 < 1) {
                goto lab_0x52adee;
            } else {
                goto lab_0x52ade0;
            }
        }
    }
    goto lab_0x52ae3b_2;
}

// Address range: 0x52af00 - 0x52af50
int64_t function_52af00(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x52af09
    int128_t tp; // bp-40, 0x52af00
    clock_gettime(0, (struct timespec *)&tp);
    if (v1 == __readfsqword(40)) {
        // 0x52af3b
        int64_t v2; // 0x52af00
        return 0x3b9aca00 * (int64_t)tp + v2;
    }
    // 0x52af40
    __stack_chk_fail();
    return (int64_t)&g8;
}
