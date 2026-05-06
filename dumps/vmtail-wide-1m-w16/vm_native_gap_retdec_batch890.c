/*
 * Targeted RetDec C for native executable gap queue batch 890.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1a4cbb-0x1a4ebb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a4ebb-0x1a50bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a50bb-0x1a52bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a54bb-0x1a56bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x2676c2-0x2678c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2678c2-0x267ac2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x267ac2-0x267cc2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x267cc2-0x267ec2 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1a4ca9();
int64_t function_1a4cbb(void);
int64_t function_1a4cd2(void);
int64_t function_1a4cd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a4ce4(int64_t result);
int64_t function_1a4d06(int64_t a1);
int64_t function_1a4d7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1a4eca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a4ee0(void);
int64_t function_1a4f64(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a4fc7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1a500b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1a503d(int64_t a1, int64_t a2);
int64_t function_1a5057(void);
int64_t function_1a5101(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1a5173(void);
int64_t function_1a5185(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1a5220(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a54bb(void);
int64_t function_1a54d9(int64_t a1, int64_t a2);
int64_t function_1a54eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a5514(void);
int64_t function_1a5567(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_1a55d1(void);
int64_t function_1a55fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a5622(void);
int64_t function_202c7b7();
int64_t function_267671();
int64_t function_267696();
int64_t function_2676c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2677a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2677c2(void);
int64_t function_2677c6(void);
int64_t function_2677dd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int32_t a6);
int64_t function_26795f(int64_t a1);
int64_t function_26797a(int64_t a1);
int64_t function_26797e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_267a1b(void);
int64_t function_267a36(int64_t a1);
int64_t function_267a4e(void);
int64_t function_267a88(int64_t a1, int64_t a2, int64_t a3);
int64_t function_267b3a(void);
int64_t function_267b88(int64_t a1);
int64_t function_267b93(void);
int64_t function_267baf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_267bb6(void);
int64_t function_267bd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_267c0f(void);
int64_t function_267c16(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_267c24(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_267caf(void);
int64_t function_267cbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_267d1a(int64_t a1);
int64_t function_267d20(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_267d5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_267dae(int64_t a1);
int64_t function_267dd0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_267dfd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_267e95(void);
int64_t function_267ea2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_267eb4(void);
int64_t function_70c831e1();
int64_t function_ffffffff9a1855f2();
int64_t function_ffffffffa354b95e();
int64_t function_ffffffffa733568e();
int64_t unknown_10c0684a();
int64_t unknown_10c6b67e();
int64_t unknown_1a8041cd();
int64_t unknown_23c9d4ec();
int64_t unknown_240b4319();
int64_t unknown_30c9cbac();
int64_t unknown_3a33552b();
int64_t unknown_3de9c6a5();
int64_t unknown_5043573f();
int64_t unknown_6a84bae8();
int64_t unknown_6ebfd608();
int64_t unknown_74ad442b();
int64_t unknown_76b2666a();
int64_t unknown_7caf7f0c();
int64_t unknown_ffffffff86f1bc00();
int64_t unknown_ffffffff87b840c4();
int64_t unknown_ffffffff972157dd();
int64_t unknown_ffffffff9adc2e62();
int64_t unknown_ffffffff9e13d93c();
int64_t unknown_ffffffffad6bb48e();
int64_t unknown_ffffffffc88e68f1();
int64_t unknown_ffffffffce7aeeae();
int64_t unknown_ffffffffd3c087d3();
int64_t unknown_ffffffffdc0cb5fe();
int64_t unknown_ffffffffe90d7beb();
int64_t unknown_ffffffffea3a34c2();
int64_t unknown_ffffffffebb1efde();
int64_t unknown_ffffffffee12adc1();

// Address range: 0x1a4cbb - 0x1a4cc3
int64_t function_1a4cbb(void) {
    // 0x1a4cbb
    unknown_ffffffffee12adc1();
    return __asm_in(-103);
}

// Address range: 0x1a4cd2 - 0x1a4cd4
int64_t function_1a4cd2(void) {
    // 0x1a4cd2
    return function_1a4ca9();
}

// Address range: 0x1a4cd4 - 0x1a4ce4
int64_t function_1a4cd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1a4cd4
    int64_t result; // 0x1a4cd4
    int32_t * v1 = (int32_t *)(result + 0x5c8001e8 + 4 * result); // 0x1a4cd6
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1a4ce4 - 0x1a4ce8
int64_t function_1a4ce4(int64_t result) {
    // 0x1a4ce4
    return result;
}

// Address range: 0x1a4d06 - 0x1a4d09
int64_t function_1a4d06(int64_t a1) {
    // 0x1a4d06
    int64_t result; // 0x1a4d06
    return result;
}

// Address range: 0x1a4d7d - 0x1a4eb3
int64_t function_1a4d7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1a4d7d
    int64_t v1; // 0x1a4d7d
    bool v2; // 0x1a4d7d
    unsigned char v3 = 2 * (char)v1 | (char)v2; // 0x1a4d7d
    int64_t result = v1 & -256 | (int64_t)v3; // 0x1a4d7d
    if (v3 >= 1) {
        // 0x1a4d83
        return result;
    }
    int32_t * v4 = (int32_t *)(v1 - 0x17c759de); // 0x1a4e08
    *v4 = *v4 - (int32_t)a5;
    int32_t * v5 = (int32_t *)((a3 & 0x6d3d00df | (int64_t)&g1 & 0x6d3dc5df | 0x92c23a20) - 119); // 0x1a4e0f
    *v5 = *v5 + (int32_t)v1;
    if ((int32_t)result >= 0xf59f9f01) {
        // 0x1a4d83
        return result;
    }
    // 0x1a4e21
    __asm_out(116, v3);
    return result;
}

// Address range: 0x1a4eca - 0x1a4ecf
int64_t function_1a4eca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1a4eca
    int64_t result; // 0x1a4eca
    return result;
}

// Address range: 0x1a4ee0 - 0x1a4ee3
int64_t function_1a4ee0(void) {
    // 0x1a4ee0
    int64_t result; // 0x1a4ee0
    return result;
}

// Address range: 0x1a4f64 - 0x1a4f9d
int64_t function_1a4f64(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)unknown_76b2666a(); // 0x1a4f69
    *v1 = *v1 - 1;
    int32_t * v2 = (int32_t *)(a4 - 59); // 0x1a4f70
    *v2 = *v2 + (int32_t)a1;
    bool v3; // 0x1a4f64
    int64_t v4 = (v3 ? -1 : 1) + a1; // 0x1a4f75
    __asm_hlt(v4);
    int64_t v5 = unknown_10c6b67e(); // 0x1a4f78
    char * v6 = (char *)(v4 - 5); // 0x1a4f7d
    int64_t v7; // 0x1a4f64
    *v6 = *v6 | (char)(v7 / 256);
    int32_t * v8 = (int32_t *)(v7 - 104); // 0x1a4f80
    *v8 = *v8 - (int32_t)v7;
    *(char *)((a4 & -256 | 175) + 75) = -1;
    *(int32_t *)v4 = (int32_t)v5 - 0x20001e8;
    return function_202c7b7(v4 + (v3 ? -4 : 4));
}

// Address range: 0x1a4fc7 - 0x1a4fee
int64_t function_1a4fc7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1a4fc7
    int64_t v1; // 0x1a4fc7
    uint64_t v2 = v1;
    int64_t v3 = unknown_1a8041cd(); // 0x1a4fc7
    char * v4 = (char *)(v3 + 0x207c000); // 0x1a4fcc
    *v4 = *v4 + (char)v3;
    char * v5 = (char *)(v2 - 0x62fe1800); // 0x1a4fd2
    char v6 = a4 / 256; // 0x1a4fd2
    *v5 = *v5 + v6;
    int64_t v7; // 0x1a4fc7
    *(char *)a1 = *(char *)&v7 + v6;
    __asm_iretd();
    char * v8 = (char *)(a4 - 0x6975ff67 + 8 * v2); // 0x1a4fdc
    *v8 = *v8 + (char)(v2 / 256);
    return unknown_23c9d4ec();
}

// Address range: 0x1a500b - 0x1a503a
int64_t function_1a500b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1a500b
    int64_t v1; // 0x1a500b
    *(char *)a1 = (char)v1 + (char)a3;
    int64_t v2 = unknown_240b4319(); // 0x1a5013
    int32_t * v3 = (int32_t *)(v2 + 0x2500b68); // 0x1a5018
    *v3 = *v3 + (int32_t)a2;
    uint32_t v4 = (int32_t)v2; // 0x1a5023
    uint32_t v5 = v4 + (int32_t)(a4 % 256 & a4 / 256 | a4 & 0xffffff00); // 0x1a5023
    return v5 - 0x50a8feb9 + (int32_t)(v5 < v4);
}

// Address range: 0x1a503d - 0x1a5046
int64_t function_1a503d(int64_t a1, int64_t a2) {
    // 0x1a503d
    int64_t result; // 0x1a503d
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x1a5057 - 0x1a505a
int64_t function_1a5057(void) {
    // 0x1a5057
    int64_t result; // 0x1a5057
    return result;
}

// Address range: 0x1a5101 - 0x1a5108
int64_t function_1a5101(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1a5101
    bool v1; // 0x1a5101
    int64_t v2 = v1 ? -4 : 4; // 0x1a5101
    return unknown_6ebfd608(v2 + a1, v2 + a2);
}

// Address range: 0x1a5173 - 0x1a5174
int64_t function_1a5173(void) {
    // 0x1a5173
    int64_t result; // 0x1a5173
    return result;
}

// Address range: 0x1a5185 - 0x1a5215
int64_t function_1a5185(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x589f4a67); // 0x1a5185
    int32_t v2 = a2; // 0x1a5185
    *v1 = *v1 + v2;
    int64_t v3; // 0x1a5185
    __asm_out(-64, (char)v3);
    int32_t * v4 = (int32_t *)(v3 + 0xc5d3aae); // 0x1a5192
    *v4 = *v4 + v2;
    int64_t v5 = (v3 + 0xe8b88a24 & 0xffffffff) - v3; // 0x1a5198
    int64_t v6; // 0x1a5185
    int64_t v7 = (int64_t)&v6; // bp-8, 0x1a519d
    char * v8 = (char *)(v5 - 0x54fe1800); // 0x1a51a8
    char v9 = v5; // 0x1a51a8
    *v8 = *v8 + v9;
    char * v10 = (char *)(v3 - 0x6630d100); // 0x1a51ae
    *v10 = *v10 + 81;
    char * v11 = (char *)(a4 - 103 + 8 * v3); // 0x1a51b4
    *v11 = *v11 + v9;
    char * v12 = (char *)(a4 + 77); // 0x1a51b8
    *v12 = *v12 + 83;
    unknown_ffffffff87b840c4((int32_t)v3 + (int32_t)a1);
    if ((v5 & 0x4000) != 0) {
        function_1a5173();
    }
    char v13 = *(char *)(unknown_ffffffffd3c087d3() + 0x516f1c03); // 0x1a51d2
    int64_t v14 = unknown_ffffffffe90d7beb() + v3; // 0x1a51dd
    uint64_t v15 = v14 + 22; // 0x1a51df
    int64_t v16 = v15 % 256 | v14 & 0xffffff00; // 0x1a51df
    char * v17 = (char *)v16; // 0x1a51e6
    *v17 = *v17 - (char)v15;
    uint64_t v18 = a4 / 256; // 0x1a51ea
    int64_t v19 = (int64_t)&v7; // 0x1a51e6
    int64_t v20 = a2; // 0x1a51e6
    v19 -= 8;
    *(int64_t *)v19 = a3 & -256 | (int64_t)(v13 | (char)a3);
    int64_t v21 = v16 ^ v18 % 256; // 0x1a51ea
    int32_t * v22 = (int32_t *)(v21 - 0x15b90520); // 0x1a51ec
    *v22 = *v22 + (int32_t)v20;
    int32_t v23 = *(int32_t *)0x1a6047565b8d531a; // 0x1a51f2
    int64_t v24 = (0x100000000 * v21 >> 32) * (int64_t)v23 / 0x100000000; // 0x1a51f2
    int64_t result = unknown_ffffffff86f1bc00() & -256 | (int64_t)*(char *)v20; // 0x1a51ff
    bool v25; // 0x1a5185
    v20 += (v25 ? -1 : 1);
    while (*(char *)(v24 - 75) >= 253) {
        // 0x1a51e9
        v19 -= 8;
        *(int64_t *)v19 = v24;
        v21 = result ^ v18 % 256;
        v22 = (int32_t *)(v21 - 0x15b90520);
        *v22 = *v22 + (int32_t)v20;
        v23 = *(int32_t *)0x1a6047565b8d531a;
        v24 = (0x100000000 * v21 >> 32) * (int64_t)v23 / 0x100000000;
        result = unknown_ffffffff86f1bc00() & -256 | (int64_t)*(char *)v20;
        v20 += (v25 ? -1 : 1);
    }
    int32_t * v26 = (int32_t *)((a4 & -256 | 253) + 0x6400287e); // 0x1a520a
    *v26 = *v26 + 0x640028b3;
    *(char *)0x2b5404d4 = *(char *)0x2b5404d4 + (char)v18;
    return result;
}

// Address range: 0x1a5220 - 0x1a52bb
int64_t function_1a5220(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x1a5220
    bool v3; // 0x1a5220
    if (!v3) {
        uint32_t v4 = (int32_t)a4 % 32; // 0x1a529d
        int64_t v5; // 0x1a5220
        if (v4 != 0) {
            uint32_t v6 = (int32_t)v2; // 0x1a529d
            v5 = v6 >> v4 | v6 << 32 - v4;
        }
        int64_t v7 = v5;
        int32_t * v8 = (int32_t *)(unknown_3de9c6a5() + v2 & 0xffffffff); // 0x1a52a6
        *v8 = *v8 + (int32_t)a3;
        unknown_ffffffffce7aeeae();
        int64_t result = __asm_wait(); // 0x1a52af
        *(int64_t *)(v7 - 8) = v7;
        return result;
    }
    unsigned char v9 = (char)a3;
    *(char *)a3 = v9 / 2 | 128 * v9;
    __asm_out_134(-59, (int32_t)v2);
    int32_t * v10 = (int32_t *)(a1 + 0x3999cf9b); // 0x1a5228
    int32_t v11 = *v10; // 0x1a5228
    int32_t v12 = a3; // 0x1a5228
    int32_t v13 = v11 + v12; // 0x1a5228
    *v10 = v13;
    while (((v13 ^ v11) & (v13 ^ v12)) < 0) {
        // continue -> 0x1a522e
    }
    uint32_t v14 = *(int32_t *)&v1 & (int32_t)a1; // 0x1a5230
    int64_t v15 = v1 + (v3 ? -4 : 4); // 0x1a5232
    int64_t result2 = unknown_ffffffff9e13d93c(v14, v15, a3 & -256 | 218); // 0x1a5236
    uint32_t v16 = v14 + (int32_t)result2; // 0x1a523b
    char * v17 = (char *)v15; // 0x1a523d
    *v17 = *v17 - 38 + (char)(v16 < v14);
    char * v18 = (char *)((int64_t)v16 - 78); // 0x1a523f
    *v18 = *v18 | (char)(v2 / 256);
    return result2;
}

// Address range: 0x1a54bb - 0x1a54bc
int64_t function_1a54bb(void) {
    // 0x1a54bb
    int64_t result; // 0x1a54bb
    return result;
}

// Address range: 0x1a54d9 - 0x1a54eb
int64_t function_1a54d9(int64_t a1, int64_t a2) {
    // 0x1a54d9
    int64_t v1; // 0x1a54d9
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a2;
    return function_ffffffff9a1855f2();
}

// Address range: 0x1a54eb - 0x1a5505
int64_t function_1a54eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffc88e68f1(); // 0x1a54eb
    *(int32_t *)0x1d1ae699 = *(int32_t *)0x1d1ae699 + (int32_t)v1;
    unknown_ffffffffdc0cb5fe();
    __asm_int1();
    return function_70c831e1();
}

// Address range: 0x1a5514 - 0x1a5515
int64_t function_1a5514(void) {
    // 0x1a5514
    int64_t result; // 0x1a5514
    return result;
}

// Address range: 0x1a5567 - 0x1a5591
int64_t function_1a5567(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x1a5567
    int64_t v1; // 0x1a5567
    uint64_t v2 = v1;
    uint64_t v3 = a3 / 256; // 0x1a5567
    unsigned char v4 = 2 * (char)v3; // 0x1a5567
    int64_t v5 = v1 + (v4 < (char)v3 ? 0x6cae013e : 0x6cae013d); // 0x1a556d
    char * v6 = (char *)(a2 + 0x35ec1f3a); // 0x1a5572
    *v6 = *v6 + v4;
    unsigned char v7 = (char)v2; // 0x1a5582
    unsigned char v8 = *(char *)(v5 & 0xffffffff); // 0x1a5582
    char v9 = v7 - v8; // 0x1a5582
    unsigned char v10 = llvm_ctpop_i8(v9); // 0x1a5582
    *(char *)-0x392bb374 = *(char *)-0x392bb374 + (char)(v2 / 256);
    return v5 & 0xffff00ff | 256 * (64 * (int64_t)(v9 == 0) | (int64_t)(v8 > v7) | 128 * (int64_t)(v9 < 0) | 16 * (int64_t)(v7 % 16 - v8 % 16 > 15) | 4 * (int64_t)(v10 % 2 == 0)) | 512;
}

// Address range: 0x1a55d1 - 0x1a55d4
int64_t function_1a55d1(void) {
    // 0x1a55d1
    int64_t result; // 0x1a55d1
    return result;
}

// Address range: 0x1a55fb - 0x1a5622
int64_t function_1a55fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0xf4338fe); // 0x1a5600
    int64_t v2; // 0x1a55fb
    *v1 = *v1 + (int32_t)v2;
    unknown_7caf7f0c();
    return function_ffffffffa733568e();
}

// Address range: 0x1a5622 - 0x1a5623
int64_t function_1a5622(void) {
    // 0x1a5622
    int64_t result; // 0x1a5622
    return result;
}

// Address range: 0x2676c2 - 0x267790
int64_t function_2676c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int32_t v2 = a3;
    int32_t v3 = v2 & 19; // 0x2676c2
    *(int32_t *)a3 = v3;
    uint64_t v4 = a4 - 1; // 0x2676ca
    int64_t v5; // 0x2676c2
    if (v4 == 0 || v3 == 0) {
        uint64_t v6 = function_267671(); // 0x2676cc
        uint64_t v7 = v4 / 256; // 0x2676ce
        char * v8 = (char *)(8 * v5 + 0xe37d57 + v5); // 0x2676d0
        char v9 = *v8; // 0x2676d0
        *v8 = v9 + (char)((char)v7 < (char)v5) - (char)(v6 / 256);
        unknown_ffffffff972157dd();
        *(int32_t *)a1 = *(int32_t *)&v1;
        bool v10; // 0x2676c2
        int64_t v11 = v10 ? -4 : 4; // 0x2676dc
        int64_t v12 = v11 + a1; // 0x2676dc
        int64_t v13 = v1 + v11; // 0x2676dc
        unknown_6a84bae8(v12, v13);
        __asm_int(48);
        int32_t v14 = *(int32_t *)v13; // 0x2676ec
        int32_t v15 = v14 + 0x1e80cb3; // 0x2676ed
        int64_t v16 = v15; // 0x2676fc
        if (v15 < 0 == (v15 & (v14 ^ -0x80000000)) < 0 == (v15 != 0)) {
            v16 = function_267696();
        }
        int64_t v17 = v7 - v5; // 0x2676ce
        uint64_t v18 = v16;
        char * v19 = (char *)(256 * v17 & 0xff00 | v4 & -0xff01); // 0x2676fe
        *v19 = *v19 & (char)v17;
        char v20 = *(char *)((v5 & 0xffffffff & v12) - 6); // 0x267700
        return 256 * (int64_t)((char)(v18 / 256) - v20) | v18 & -0xff01;
    }
    // 0x26774a
    *(int32_t *)-0x66f6ffffaf47e9a3 = 38 * *(int32_t *)(a1 + 103);
    __asm_in(89);
    uint32_t v21 = (int32_t)v4; // 0x267768
    uint32_t v22 = (int32_t)a1;
    if (v22 != v21) {
        // 0x267729
        return v1 + ((a4 + 60 + (int64_t)(v22 > v21)) % 256 | v4 & 0xffffff00) & 0xffffffff;
    }
    int64_t v23 = (v4 & 0xffffffff) + 0xc25cc154; // 0x26776b
    int32_t * v24 = (int32_t *)(v23 & 0xffffffff); // 0x267770
    *v24 = *v24 + (int32_t)v23;
    int64_t v25 = v23 & 0xffffff00 | (int64_t)__asm_in_133(-21); // 0x267772
    int32_t * v26 = (int32_t *)v25; // 0x267775
    *v26 = *v26 + v2;
    char * v27 = (char *)(v25 + 0x68433a03); // 0x26777b
    *v27 = *v27 + (char)a3;
    int64_t result = v5 & 0xffffffff; // 0x267785
    *(int64_t *)0xa57d013df2 = result;
    return result;
}

// Address range: 0x2677a8 - 0x2677af
int64_t function_2677a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 0x13db2c5); // 0x2677a8
    *v1 = *v1 + (char)a3;
    int64_t result; // 0x2677a8
    return result;
}

// Address range: 0x2677c2 - 0x2677c3
int64_t function_2677c2(void) {
    // 0x2677c2
    int64_t result; // 0x2677c2
    return result;
}

// Address range: 0x2677c6 - 0x2677c7
int64_t function_2677c6(void) {
    // 0x2677c6
    int64_t result; // 0x2677c6
    return result;
}

// Address range: 0x2677dd - 0x26786d
int64_t function_2677dd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int32_t a6) {
    // 0x2677dd
    int64_t v1; // 0x2677dd
    uint64_t v2 = v1;
    int64_t v3 = a1;
    int64_t v4 = a5;
    __asm_int(-126);
    int32_t * v5 = (int32_t *)(a4 - 0x155bd1c8); // 0x2677df
    int32_t v6 = *v5 & (int32_t)v1; // 0x2677df
    *v5 = v6;
    int64_t v7; // 0x2677dd
    if (v6 >= 0 == (v6 != 0)) {
        v7 = function_2677c2();
    }
    // 0x2677e7
    *(int64_t *)v2 = v2 / 2;
    unsigned char v8 = *(char *)0x53aeeaf1; // 0x2677ea
    unsigned char v9 = v8 + (char)(v1 / 256); // 0x2677ea
    *(char *)0x53aeeaf1 = v9;
    int64_t v10 = v7 & -256 | a4 % 256; // 0x2677f0
    int32_t v11 = *(int32_t *)(v10 - 0x1475ec34); // 0x2677f2
    int32_t * v12 = (int32_t *)(v10 + 0x3a05c834); // 0x2677f8
    *v12 = *v12 >> 19;
    int64_t v13 = v3; // 0x26780a
    int64_t v14 = (int64_t)&v4; // 0x26780a
    v3 = v14;
    int64_t result = v13 & 0xffffffff; // 0x26780a
    uint32_t v15 = (int32_t)v14; // 0x267862
    int32_t * v16 = (int32_t *)(int64_t)(v11 + (int32_t)a2 + (int32_t)(v9 < v8)); // 0x267864
    *v16 = (int32_t)(-1 - v15 < v15) - (int32_t)a4 + *v16;
    uint32_t v17 = *(int32_t *)&v3; // 0x267868
    *(int32_t *)result = 0x4000000 * v17 | 0x2000000 * (int32_t)((char)v13 < 41) | v17 / 128;
    __asm_out_134(-63, (int32_t)v13);
    return result;
}

// Address range: 0x26795f - 0x267962
int64_t function_26795f(int64_t a1) {
    // 0x26795f
    int64_t result; // 0x26795f
    return result;
}

// Address range: 0x26797a - 0x26797b
int64_t function_26797a(int64_t a1) {
    // 0x26797a
    int64_t result; // 0x26797a
    return result;
}

// Address range: 0x26797e - 0x2679e1
int64_t function_26797e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x26797e
    int64_t result; // 0x26797e
    *(int32_t *)a3 = 2 * (int32_t)result;
    int32_t * v1 = (int32_t *)(a2 + 0x7a000013 + result); // 0x267980
    *v1 = *v1 & (int32_t)a2;
    if (a4 != 1 != (*(char *)(result + 0x7501e81d) == (char)(a3 / 256))) {
        // 0x26798f
        return result;
    }
    // 0x2679da
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x267a1b - 0x267a1f
int64_t function_267a1b(void) {
    // 0x267a1b
    int64_t v1; // 0x267a1b
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2;
    return unknown_ffffffffad6bb48e(v1, v1, v1);
}

// Address range: 0x267a36 - 0x267a39
int64_t function_267a36(int64_t a1) {
    // 0x267a36
    int64_t result; // 0x267a36
    return result;
}

// Address range: 0x267a4e - 0x267a4f
int64_t function_267a4e(void) {
    // 0x267a4e
    int64_t result; // 0x267a4e
    return result;
}

// Address range: 0x267a88 - 0x267a91
int64_t function_267a88(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_ffffffffad6bb48e(a1, a2, a3); // 0x267a88
    __asm_frstor(*(int864_t *)(a3 - 6));
    int64_t v2; // 0x267a88
    return v1 & -256 | (uint64_t)v2 % 256;
}

// Address range: 0x267b3a - 0x267b40
int64_t function_267b3a(void) {
    // 0x267b3a
    int64_t result; // 0x267b3a
    return result;
}

// Address range: 0x267b88 - 0x267b89
int64_t function_267b88(int64_t a1) {
    // 0x267b88
    int64_t result; // 0x267b88
    return result;
}

// Address range: 0x267b93 - 0x267b9f
int64_t function_267b93(void) {
    // 0x267b93
    int64_t v1; // 0x267b93
    return function_267bd0(v1, v1, v1, v1);
}

// Address range: 0x267baf - 0x267bb1
int64_t function_267baf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x267baf
    int64_t result; // 0x267baf
    return result;
}

// Address range: 0x267bb6 - 0x267bb8
int64_t function_267bb6(void) {
    // 0x267bb6
    int64_t result; // 0x267bb6
    return result;
}

// Address range: 0x267bd0 - 0x267bfc
int64_t function_267bd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x267bd0
    int64_t v1; // 0x267bd0
    int64_t v2 = v1;
    *(char *)0x5f859edd = *(char *)0x5f859edd + (char)(v1 / 256);
    uint32_t v3 = 2 * (int32_t)v1; // 0x267bdc
    *(char *)v1 = (*(char *)(v2 + 0x97832b) | (char)v2) - 90;
    *(int64_t *)(int64_t)v3 = -0x36ec2500;
    int64_t v4; // 0x267bd0
    __asm_outsd((int16_t)a3, *(int32_t *)&v4);
    return v3 ^ -0x67fe1733;
}

// Address range: 0x267c0f - 0x267c11
int64_t function_267c0f(void) {
    // 0x267c0f
    int64_t v1; // 0x267c0f
    return function_267c24(v1, v1, v1, v1);
}

// Address range: 0x267c16 - 0x267c24
int64_t function_267c16(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x267c16
    int64_t v1; // 0x267c16
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    char * v3 = (char *)(4 * a4 - 0x4a38e0f9 + v2); // 0x267c18
    *v3 = *v3 & (char)((uint64_t)v1 / 256);
    return v2 & 0x9eb5ffc2 | 0x614a003d;
}

// Address range: 0x267c24 - 0x267c8d
int64_t function_267c24(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(__asm_iretd() + 0x2c0ad8f2); // 0x267c2d
    int64_t v2; // 0x267c24
    *v1 = *v1 + (int32_t)v2;
    int64_t v3 = unknown_5043573f(); // 0x267c39
    char * v4 = (char *)(v2 + 1); // 0x267c3e
    *v4 = *v4 ^ (char)v3;
    char * v5 = (char *)(a2 - 0x543bd85b); // 0x267c41
    *v5 = *v5 & -79;
    char * v6 = (char *)(v3 + 8 * a2); // 0x267c47
    *v6 = *v6 + 10;
    *(char *)0x4f814753 = *(char *)0x4f814753 + (char)(v2 / 256);
    char * v7 = (char *)(v2 - 56); // 0x267c54
    *v7 = *v7 + (char)v2;
    __asm_wait();
    int64_t result2 = __asm_int3(); // 0x267c6d
    if (a4 == 2 || (int32_t)v3 == 0x63a1aefc) {
        int32_t v8 = *(int32_t *)(((result2 + 0x531e2ad6 * a2) % 256 | result2 & -256) + 56); // 0x267c74
        uint32_t result = (v8 + 126) % 256 | v8 & -256;
        *(int32_t *)-0x2c0924ef15fffec3 = result;
        return result;
    }
    // 0x267ceb
    return result2;
}

// Address range: 0x267caf - 0x267cbb
int64_t function_267caf(void) {
    // 0x267caf
    int64_t v1; // 0x267caf
    char * v2 = (char *)(v1 + 0xaff2f46); // 0x267caf
    *v2 = *v2 ^ (char)v1;
    return function_ffffffffa354b95e();
}

// Address range: 0x267cbb - 0x267ce0
int64_t function_267cbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffea3a34c2(); // 0x267cbc
    int32_t * v2 = (int32_t *)(a4 + 30); // 0x267cc1
    int64_t v3; // 0x267cbb
    *v2 = (int32_t)((v3 & 256) != 0) + (int32_t)v3 + *v2;
    *(char *)0x13d01e875e201e8 = (char)v1;
    float80_t v4; // 0x267cbb
    *(int32_t *)(v3 - 105) = (int32_t)v4;
    return unknown_ffffffffebb1efde(v3);
}

// Address range: 0x267d1a - 0x267d1b
int64_t function_267d1a(int64_t a1) {
    // 0x267d1a
    int64_t result; // 0x267d1a
    return result;
}

// Address range: 0x267d20 - 0x267d57
int64_t function_267d20(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x267d20
    *(char *)a4 = (char)(a4 / 256 | a4);
    int16_t v1 = a3; // 0x267d23
    __asm_outsd(v1, *(int32_t *)a5);
    int64_t v2 = unknown_3a33552b(); // 0x267d24
    int32_t * v3 = (int32_t *)(a1 + 89); // 0x267d2f
    *v3 = *v3 + (int32_t)a5;
    unsigned char v4 = (char)v2; // 0x267d32
    __asm_out_135(v1, (int32_t)__asm_wait());
    if (((v4 + 93 ^ v4) & (v4 ^ -128)) >= 0) {
        // 0x267d38
        return __asm_int3();
    }
    int32_t * v5 = (int32_t *)(a4 + 0x2f8cd226); // 0x267d3d
    *v5 = *v5 + (v4 < 163 ? 24 : 23);
    return (unknown_10c0684a() & 0xffffff00 | 175) + 0x6a9c945 & 0xffffff00 | 252;
}

// Address range: 0x267d5a - 0x267d72
int64_t function_267d5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x267d5a
    unknown_ffffffff9adc2e62();
    *(char *)a1 = __asm_insb((int16_t)a3);
    return function_267dd0(a1, a2, a3);
}

// Address range: 0x267dae - 0x267db3
int64_t function_267dae(int64_t a1) {
    // 0x267dae
    int64_t result; // 0x267dae
    return result;
}

// Address range: 0x267dd0 - 0x267dd8
int64_t function_267dd0(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 0x2f1ef835); // 0x267dd0
    *v1 = *v1 + 44;
    int64_t v2; // 0x267dd0
    return 0x10000 * (int32_t)v2 >> 16;
}

// Address range: 0x267dfd - 0x267e38
int64_t function_267dfd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x267dfd
    int64_t v1; // 0x267dfd
    bool v2; // 0x267dfd
    *(int32_t *)0x1073f845e0b300a = (int32_t)v1 - (v2 ? -0x4f33fe17 : -0x4f33fe18);
    unknown_74ad442b();
    *(char *)a2 = (char)((uint64_t)v1 / 256) + (char)a2;
    return a4 & 0xffffffff;
}

// Address range: 0x267e95 - 0x267ea2
int64_t function_267e95(void) {
    // 0x267e95
    __asm_out(43, *(char *)0x13d01e80ff3e605);
    return function_267eb4();
}

// Address range: 0x267ea2 - 0x267eb4
int64_t function_267ea2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x267ea2
    unknown_30c9cbac();
    int64_t result = __asm_iretd(); // 0x267eb2
    *(int64_t *)0xe800684e = a2;
    return result;
}

// Address range: 0x267eb4 - 0x267eb6
int64_t function_267eb4(void) {
    // 0x267eb4
    int64_t result; // 0x267eb4
    return result;
}
