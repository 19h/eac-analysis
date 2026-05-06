/*
 * Targeted RetDec C for native executable gap queue batch 973.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1171bf-0x1173bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1173bf-0x1175bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1175bf-0x1177bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1179bf-0x117bbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x117bbf-0x117dbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x117dbf-0x117fbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x131ba5-0x131da5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x131da5-0x131fa5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x131fa5-0x1321a5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1321a5-0x1323a5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1323a5-0x1325a5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1327a5-0x1329a5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1329a5-0x132ba5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3dafb9-0x3db1b9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3db1b9-0x3db3b9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3db3b9-0x3db5b9 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
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

int64_t function_1171bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1171ea(void);
int64_t function_117222(void);
int64_t function_11723e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_11725a(void);
int64_t function_1172ac(void);
int64_t function_1172df(void);
int64_t function_1172e3(int64_t a1, int64_t a2);
int64_t function_117358(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11742a(void);
int64_t function_117464(int64_t a1);
int64_t function_1174c9(int64_t a1, int64_t a2);
int64_t function_1174dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_117529(int64_t a1);
int64_t function_117588(void);
int64_t function_11758f(void);
int64_t function_1175b8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1175d0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1175d4(int64_t a1);
int64_t function_1175d7(void);
int64_t function_1175e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11761a(void);
int64_t function_1176aa(int64_t a1);
int64_t function_1176fd(void);
int64_t function_11770c(void);
int64_t function_117716(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1179bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_117ad0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_117c0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_117d6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_117eb3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_117ec5(void);
int64_t function_131ba5(int64_t a1, int64_t a2);
int64_t function_131bd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_131c23(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_131c38(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_131cb6(void);
int64_t function_131cde(int64_t a1);
int64_t function_131d09(void);
int64_t function_131d41(void);
int64_t function_131d5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_131d9d(int64_t a1);
int64_t function_131dc2(int64_t a1);
int64_t function_131df1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_131e53(void);
int64_t function_131e77(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_131fe0(void);
int64_t function_13207d(void);
int64_t function_13218b(void);
int64_t function_1321bd(void);
int64_t function_1321d6(void);
int64_t function_13220e(void);
int64_t function_132215(void);
int64_t function_132229(void);
int64_t function_13222f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_132238(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13224c(void);
int64_t function_132255(int64_t a1, int64_t a2);
int64_t function_132267(int64_t a1, int64_t a2, int64_t a3);
int64_t function_13226b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_13228a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1322cd(void);
int64_t function_1322d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_132321(void);
int64_t function_13234c(void);
int64_t function_1323f2(int64_t a1);
int64_t function_132409(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_132428(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_132437(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_132463(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_132484(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1324b1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1324c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_132500(void);
int64_t function_132515(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13252b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_132546(int64_t a1);
int64_t function_132556(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1327a5(void);
int64_t function_1327d0(void);
int64_t function_1327e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_132806(int64_t a1);
int64_t function_132855(int64_t a1);
int64_t function_1328a8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1328d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13293d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_132966(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1329db(void);
int64_t function_1329e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_132acc(int64_t a1);
int64_t function_132b4e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_14e71fa();
int64_t function_1be1226a();
int64_t function_1f99ef8();
int64_t function_2265079();
int64_t function_3daf8f();
int64_t function_3dafb9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3daff3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3daffd(void);
int64_t function_3db023(int64_t a1);
int64_t function_3db053(int64_t a1);
int64_t function_3db0af(void);
int64_t function_3db189(void);
int64_t function_3db1e8(void);
int64_t function_3db203(void);
int64_t function_3db226(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3db25e(void);
int64_t function_3db27b(int64_t a1);
int64_t function_3db2af(int64_t a1);
int64_t function_3db2b8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_3db352(int64_t a1);
int64_t function_3db3b7(void);
int64_t function_3db3d7(int64_t a1);
int64_t function_3db3ef(void);
int64_t function_3db404(void);
int64_t function_3db409(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3db41a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3db42e(int64_t a1);
int64_t function_3db445(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3db48f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3db4dd(int64_t a1);
int64_t function_3db4e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3db537(void);
int64_t function_3db53e(int64_t a1);
int64_t function_3db552(int64_t a1);
int64_t function_51d778ea();
int64_t function_6d150a84();
int64_t function_795850d7();
int64_t function_9187626();
int64_t function_cdc60();
int64_t function_ffffffff85a340b9();
int64_t function_ffffffff9d921bfc();
int64_t function_ffffffffb12e1171();
int64_t function_ffffffffd8bcb51c();
int64_t function_ffffffffe847af81();
int64_t function_fffffffff3f71d76();
int64_t function_fffffffffb0ff5f8();
int64_t unknown_10788d58();
int64_t unknown_13b0b81d();
int64_t unknown_1c145f80();
int64_t unknown_1fb640f();
int64_t unknown_270b3ace();
int64_t unknown_29ec8b51();
int64_t unknown_3513fb5d();
int64_t unknown_3a36b9ee();
int64_t unknown_3aca1ca8();
int64_t unknown_3b1507d0();
int64_t unknown_410dc7c4();
int64_t unknown_540dcd3d();
int64_t unknown_556ddfb7();
int64_t unknown_5aa0afb();
int64_t unknown_6ced4b5();
int64_t unknown_737f9332();
int64_t unknown_7758eb0e();
int64_t unknown_7d7c517d();
int64_t unknown_819871c();
int64_t unknown_ffffffff8b9bb8f0();
int64_t unknown_ffffffff9245c499();
int64_t unknown_ffffffff9dc4d327();
int64_t unknown_ffffffffae71624e();
int64_t unknown_ffffffffb419ad2c();
int64_t unknown_ffffffffb4511f06();
int64_t unknown_ffffffffb4a05ef0();
int64_t unknown_ffffffffbc31fe5e();
int64_t unknown_ffffffffc162c927();
int64_t unknown_ffffffffc7030c97();
int64_t unknown_ffffffffcb457d46();
int64_t unknown_ffffffffcdbe9bae();
int64_t unknown_ffffffffd3ae4100();
int64_t unknown_ffffffffd512b11b();
int64_t unknown_ffffffffdc072e95();
int64_t unknown_ffffffffe0fea204();
int64_t unknown_ffffffffe216b9c1();
int64_t unknown_ffffffffe8b50039();
int64_t unknown_fffffffff22143fb();
int64_t unknown_fffffffff5040eda();
int64_t unknown_fffffffff912b1cf();
int64_t unknown_fffffffffa0b3ab0();

// Address range: 0x1171bf - 0x1171da
int64_t function_1171bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_sti(); // 0x1171c0
    int64_t v2; // 0x1171bf
    unsigned char v3 = (char)v2;
    *(char *)a3 = v3 / 128 | 2 * v3;
    __asm_out((int16_t)a3, (int32_t)v1);
    return function_14e71fa();
}

// Address range: 0x1171ea - 0x1171ef
int64_t function_1171ea(void) {
    // 0x1171ea
    return function_fffffffff3f71d76();
}

// Address range: 0x117222 - 0x117223
int64_t function_117222(void) {
    // 0x117222
    int64_t result; // 0x117222
    return result;
}

// Address range: 0x11723e - 0x117249
int64_t function_11723e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x11723e
    int64_t v1; // 0x11723e
    int32_t * v2 = (int32_t *)(v1 + 0x6abb0206); // 0x11723e
    *v2 = *v2 & (int32_t)v1;
    return function_117222();
}

// Address range: 0x11725a - 0x11725d
int64_t function_11725a(void) {
    // 0x11725a
    int64_t result; // 0x11725a
    return result;
}

// Address range: 0x1172ac - 0x1172b2
int64_t function_1172ac(void) {
    // 0x1172ac
    return function_1f99ef8();
}

// Address range: 0x1172df - 0x1172e0
int64_t function_1172df(void) {
    // 0x1172df
    int64_t result; // 0x1172df
    return result;
}

// Address range: 0x1172e3 - 0x1172ec
int64_t function_1172e3(int64_t a1, int64_t a2) {
    // 0x1172e3
    int64_t v1; // 0x1172e3
    *(int32_t *)a2 = (int32_t)v1 - 0x1729f552;
    return function_1172df();
}

// Address range: 0x117358 - 0x11741a
int64_t function_117358(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x117358
    int64_t v1; // 0x117358
    int64_t v2 = v1;
    *(char *)v2 = 0;
    if (a4 == 1 | *(int32_t *)(v2 + 88) == -(int32_t)v2) {
        // 0x117406
        return unknown_ffffffffd512b11b();
    }
    // 0x1173f5
    unknown_5aa0afb();
    return __asm_wait();
}

// Address range: 0x11742a - 0x11742c
int64_t function_11742a(void) {
    // 0x11742a
    int64_t result; // 0x11742a
    return result;
}

// Address range: 0x117464 - 0x11746e
int64_t function_117464(int64_t a1) {
    // 0x117464
    int64_t v1; // 0x117464
    return v1 & -256;
}

// Address range: 0x1174c9 - 0x1174da
int64_t function_1174c9(int64_t a1, int64_t a2) {
    // 0x1174c9
    unknown_fffffffff912b1cf();
    return a1 & 0x763960ef | 0x89c69f10;
}

// Address range: 0x1174dc - 0x1174f5
int64_t function_1174dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 0x3601e828); // 0x1174e0
    int64_t v2; // 0x1174dc
    *v1 = *v1 + (char)v2;
    unsigned char v3 = *(char *)-0x173c4634; // 0x1174e9
    *(char *)-0x173c4634 = v3 / 128 | 2 * v3;
    return function_fffffffffb0ff5f8();
}

// Address range: 0x117529 - 0x11752a
int64_t function_117529(int64_t a1) {
    // 0x117529
    int64_t result; // 0x117529
    return result;
}

// Address range: 0x117588 - 0x11758d
int64_t function_117588(void) {
    // 0x117588
    return function_9187626();
}

// Address range: 0x11758f - 0x117596
int64_t function_11758f(void) {
    // 0x11758f
    unknown_ffffffffdc072e95();
    int64_t v1; // 0x11758f
    return function_1175d0(v1, v1, v1);
}

// Address range: 0x1175b8 - 0x1175d0
int64_t function_1175b8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1175b8
    unknown_3513fb5d();
    uint32_t v1 = *(int32_t *)0x18699e76554101e8; // 0x1175bd
    int64_t result = v1; // 0x1175bd
    __asm_int(97);
    char * v2 = (char *)(result - 0x17accbc6); // 0x1175c8
    bool v3; // 0x1175b8
    *v2 = (char)(v1 / 256) + (char)(bool)v3 + *v2;
    int64_t v4; // 0x1175b8
    *(int32_t *)a1 = *(int32_t *)&v4 + (int32_t)a3;
    return result;
}

// Address range: 0x1175d0 - 0x1175d1
int64_t function_1175d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1175d0
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x1175d0
    return result;
}

// Address range: 0x1175d4 - 0x1175d6
int64_t function_1175d4(int64_t a1) {
    // 0x1175d4
    int64_t result; // 0x1175d4
    return result;
}

// Address range: 0x1175d7 - 0x1175d8
int64_t function_1175d7(void) {
    // 0x1175d7
    int64_t result; // 0x1175d7
    return result;
}

// Address range: 0x1175e3 - 0x117602
int64_t function_1175e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1175e3
    int64_t v1; // 0x1175e3
    // 0x1175e5
    *(char *)(a1 & 0xffffffff) = (char)v1;
    return unknown_ffffffffd3ae4100(a4 & 0xffffffff);
}

// Address range: 0x11761a - 0x11761b
int64_t function_11761a(void) {
    // 0x11761a
    int64_t result; // 0x11761a
    return result;
}

// Address range: 0x1176aa - 0x1176b6
int64_t function_1176aa(int64_t a1) {
    // 0x1176aa
    int64_t result; // 0x1176aa
    return result;
}

// Address range: 0x1176fd - 0x117702
int64_t function_1176fd(void) {
    // 0x1176fd
    return function_51d778ea();
}

// Address range: 0x11770c - 0x11770d
int64_t function_11770c(void) {
    // 0x11770c
    int64_t result; // 0x11770c
    return result;
}

// Address range: 0x117716 - 0x11778e
int64_t function_117716(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a5;
    unknown_819871c();
    int64_t v2 = a2 - a1; // 0x11771c
    __asm_sti();
    *(char *)(v2 & 0xffffffff) = (char)(a4 / 256);
    int64_t v3 = unknown_ffffffff9dc4d327(); // 0x117721
    int32_t * v4 = (int32_t *)(a3 + 0x65a09446); // 0x117726
    uint32_t v5 = *v4; // 0x117726
    uint32_t v6 = v5 + (int32_t)v3; // 0x117726
    *v4 = v6;
    unknown_737f9332();
    int64_t result = unknown_540dcd3d(); // 0x117737
    int32_t * v7 = (int32_t *)(result + 0x1e89607); // 0x11773c
    int32_t v8 = v2; // 0x11773c
    *v7 = (int32_t)(v6 < v5) + v8 + *v7;
    if ((char)(result / 256 || a4) >= 0) {
        // 0x117749
        return result;
    }
    int32_t * v9 = (int32_t *)(4 * a3 + (int64_t)&v1); // 0x11776f
    *v9 = *v9 + v8;
    __asm_int(113);
    uint32_t v10 = (int32_t)unknown_7d7c517d() ^ -0x2dfe1751; // 0x117780
    int64_t result2 = v10; // 0x11778a
    if (a3 != 1 && v10 != 0) {
        result2 = function_11770c();
    }
    // 0x117749
    return result2;
}

// Address range: 0x1179bf - 0x117ad0
int64_t function_1179bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1179bf
    int64_t v1; // 0x1179bf
    return function_cdc60(a1, a2, a3, a4, a5, a6, (int64_t)&v1);
}

// Address range: 0x117ad0 - 0x117c0f
int64_t function_117ad0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x117ad0
    int64_t v1; // bp-48, 0x117ad0
    int64_t v2 = (int64_t)&v1; // 0x117bbf
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x117bc8
    *v3 = 310;
    *(int64_t *)(v2 + 32) = v1;
    v1 = a4;
    *v3 = v2 + 16;
    int64_t v4 = v1; // 0x117beb
    *(int64_t *)(v2 - 16) = v4;
    int64_t v5 = *(int64_t *)(v2 + 8); // 0x117bf4
    v1 = v5;
    *v3 = v5;
    int64_t v6; // 0x117ad0
    return function_cdc60(0x176267e7, a2, a3, v4, v6, v6, a1);
}

// Address range: 0x117c0f - 0x117d6c
int64_t function_117c0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x117c0f
    return function_cdc60(a1, a2, a3, a4, a5, a6, 0x673ee72e);
}

// Address range: 0x117d6c - 0x117e90
int64_t function_117d6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x117d6c
    int64_t v1; // 0x117d6c
    return function_cdc60(a1, a2, a3, a4, v1, v1, 169);
}

// Address range: 0x117eb3 - 0x117ebe
int64_t function_117eb3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x117eb3
    int64_t v1; // 0x117eb3
    int64_t result = v1 & -87; // 0x117eb3
    char * v2 = (char *)result; // 0x117eb5
    *v2 = *v2 + (char)result;
    char * v3 = (char *)(result + 56); // 0x117eb7
    *v3 = *v3 + (char)(a4 / 256);
    return result;
}

// Address range: 0x117ec5 - 0x117ec8
int64_t function_117ec5(void) {
    // 0x117ec5
    int64_t result; // 0x117ec5
    return result;
}

// Address range: 0x131ba5 - 0x131bad
int64_t function_131ba5(int64_t a1, int64_t a2) {
    // 0x131ba5
    return unknown_ffffffffcdbe9bae(a1, a2);
}

// Address range: 0x131bd1 - 0x131bea
int64_t function_131bd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x131bd1
    int64_t v1; // 0x131bd1
    __asm_out_133(-114, (int32_t)v1);
    char * v2 = (char *)(a1 + 0x1e8b416 + a3); // 0x131bda
    *v2 = *v2 | (char)v1 ^ -24;
    __asm_int3();
    return function_131c38(a1, a2, a3, a4 - 1);
}

// Address range: 0x131c23 - 0x131c27
int64_t function_131c23(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x131c23
    int64_t result; // 0x131c23
    return result;
}

// Address range: 0x131c38 - 0x131c57
int64_t function_131c38(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x131c38
    bool v1; // 0x131c38
    bool v2 = v1;
    int64_t v3 = a2;
    int64_t v4; // 0x131c38
    *(char *)a1 = (char)v4 + 21 & 38;
    *(char *)0x2369463aae4301e8 = (char)*(int32_t *)&v3;
    int64_t result = __asm_int1((v2 ? -1 : 1) + a1, v3 + (v2 ? -4 : 4)); // 0x131c53
    int64_t v5; // 0x131c38
    char v6 = *(char *)&v5; // 0x131c54
    *(char *)v5 = v6 + ((char)a4 | (char)&g5);
    return result;
}

// Address range: 0x131cb6 - 0x131cb7
int64_t function_131cb6(void) {
    // 0x131cb6
    int64_t result; // 0x131cb6
    return result;
}

// Address range: 0x131cde - 0x131cdf
int64_t function_131cde(int64_t a1) {
    // 0x131cde
    int64_t result; // 0x131cde
    return result;
}

// Address range: 0x131d09 - 0x131d0a
int64_t function_131d09(void) {
    // 0x131d09
    int64_t result; // 0x131d09
    return result;
}

// Address range: 0x131d41 - 0x131d4f
int64_t function_131d41(void) {
    // 0x131d41
    return function_131d09();
}

// Address range: 0x131d5b - 0x131d67
int64_t function_131d5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x131d5b
    int64_t result; // 0x131d5b
    *(char *)0x13d01e801e8a16c = (char)result;
    return result;
}

// Address range: 0x131d9d - 0x131da0
int64_t function_131d9d(int64_t a1) {
    // 0x131d9d
    int64_t result; // 0x131d9d
    return result;
}

// Address range: 0x131dc2 - 0x131dc3
int64_t function_131dc2(int64_t a1) {
    // 0x131dc2
    int64_t result; // 0x131dc2
    return result;
}

// Address range: 0x131df1 - 0x131e08
int64_t function_131df1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x131df1
    int64_t v1; // 0x131df1
    __asm_outsd((int16_t)a3, (int32_t)v1);
    char * v2 = (char *)(unknown_fffffffff22143fb() + 22); // 0x131dfa
    *v2 = *v2 ^ 58;
    unknown_ffffffffe0fea204();
    return function_ffffffff85a340b9();
}

// Address range: 0x131e53 - 0x131e55
int64_t function_131e53(void) {
    // 0x131e53
    int64_t result; // 0x131e53
    return result;
}

// Address range: 0x131e77 - 0x131fa5
int64_t function_131e77(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x131e77
    int64_t v1; // 0x131e77
    int32_t * v2 = (int32_t *)(v1 - 0x14f7f34); // 0x131e78
    int64_t v3; // 0x131e77
    int32_t v4 = *v2 + (int32_t)(int64_t)&v3; // 0x131e78
    *v2 = v4;
    if (v4 != 0) {
        // 0x131e80
        return result;
    }
    // 0x131e95
    unknown_3aca1ca8(result & 0xffffffff);
    *(int32_t *)-0x740145d62f661bce = (int32_t)__asm_iretd();
    char * v5 = (char *)(unknown_556ddfb7() + 0x7128080a); // 0x131eb6
    *v5 = *v5 & (char)a4;
    int64_t v6 = unknown_410dc7c4(); // 0x131ebd
    uint32_t v7 = (int32_t)v6; // 0x131ec5
    if (v7 == 9) {
        // 0x131ecb
        return unknown_3b1507d0();
    }
    int32_t v8 = v7 + 0x203445ff; // 0x131f44
    return v6 & -0xff01 | 256 * (64 * (int64_t)(v8 == 0) | (int64_t)(v7 < 0xdfcbba01) | 128 * (int64_t)(v8 < 0) | 16 * (int64_t)(v7 % 16 > 16) | 4 * (int64_t)(llvm_ctpop_i8((char)v8) % 2 == 0)) | 512;
}

// Address range: 0x131fe0 - 0x131fe4
int64_t function_131fe0(void) {
    // 0x131fe0
    int64_t result; // 0x131fe0
    return result;
}

// Address range: 0x13207d - 0x132082
int64_t function_13207d(void) {
    // 0x13207d
    return function_1be1226a();
}

// Address range: 0x13218b - 0x132190
int64_t function_13218b(void) {
    // 0x13218b
    return function_6d150a84();
}

// Address range: 0x1321bd - 0x1321be
int64_t function_1321bd(void) {
    // 0x1321bd
    int64_t result; // 0x1321bd
    return result;
}

// Address range: 0x1321d6 - 0x1321d8
int64_t function_1321d6(void) {
    // 0x1321d6
    int64_t v1; // 0x1321d6
    return function_132238(v1, v1, v1, v1);
}

// Address range: 0x13220e - 0x132211
int64_t function_13220e(void) {
    // 0x13220e
    return function_1321bd();
}

// Address range: 0x132215 - 0x132217
int64_t function_132215(void) {
    // 0x132215
    int64_t v1; // 0x132215
    return function_13222f(v1, v1, v1);
}

// Address range: 0x132229 - 0x13222a
int64_t function_132229(void) {
    // 0x132229
    int64_t result; // 0x132229
    return result;
}

// Address range: 0x13222f - 0x132231
int64_t function_13222f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x13222f
    int64_t v1; // 0x13222f
    return v1 & -256 | (int64_t)__asm_in((int16_t)a3);
}

// Address range: 0x132238 - 0x132246
int64_t function_132238(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x132238
    int64_t v1; // 0x132238
    return v1 & 0xffffffff ^ 0x429ac04b;
}

// Address range: 0x13224c - 0x13224d
int64_t function_13224c(void) {
    // 0x13224c
    int64_t result; // 0x13224c
    return result;
}

// Address range: 0x132255 - 0x132259
int64_t function_132255(int64_t a1, int64_t a2) {
    // 0x132255
    int64_t v1; // 0x132255
    bool v2; // 0x132255
    return function_13226b(v1 & 0xffffffff, (v2 ? -4 : 4) + a2, v1);
}

// Address range: 0x132267 - 0x13226b
int64_t function_132267(int64_t a1, int64_t a2, int64_t a3) {
    // 0x132267
    int64_t result; // 0x132267
    *(char *)result = (char)a3;
    return result;
}

// Address range: 0x13226b - 0x132288
int64_t function_13226b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x13226b
    int64_t v1; // 0x13226b
    int32_t * v2 = (int32_t *)(8 * v1 + 0x33981401 + v1); // 0x13226b
    *v2 = *v2 - (int32_t)v1;
    int32_t * v3 = (int32_t *)(v1 + 5); // 0x132272
    int32_t v4 = a2; // 0x132272
    int32_t v5 = *v3 & v4; // 0x132272
    *v3 = v5;
    unknown_1fb640f();
    int64_t result = unknown_1c145f80(); // 0x13227f
    if (v5 < 1) {
        result = function_13224c();
    }
    int32_t * v6 = (int32_t *)(a3 + 0x3efab3e8 + v1); // 0x132281
    *v6 = *v6 - v4;
    return result;
}

// Address range: 0x13228a - 0x132291
int64_t function_13228a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x13228a
    int64_t v1; // 0x13228a
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a3;
    return function_795850d7();
}

// Address range: 0x1322cd - 0x1322ce
int64_t function_1322cd(void) {
    // 0x1322cd
    int64_t result; // 0x1322cd
    return result;
}

// Address range: 0x1322d5 - 0x1322dd
int64_t function_1322d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1322d5
    int64_t v1; // 0x1322d5
    int32_t * v2 = (int32_t *)(v1 + 0x779f88dc); // 0x1322d5
    *v2 = *v2 + (int32_t)a4;
    return function_1322cd();
}

// Address range: 0x132321 - 0x13232d
int64_t function_132321(void) {
    int64_t result = unknown_ffffffffc162c927(); // 0x132321
    __asm_rcl(*(char *)0x4013a32c);
    return result;
}

// Address range: 0x13234c - 0x132351
int64_t function_13234c(void) {
    // 0x13234c
    return function_ffffffff9d921bfc();
}

// Address range: 0x1323f2 - 0x1323f3
int64_t function_1323f2(int64_t a1) {
    // 0x1323f2
    int64_t result; // 0x1323f2
    return result;
}

// Address range: 0x132409 - 0x132428
int64_t function_132409(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x132409
    bool v1; // 0x132409
    if (v1) {
        // 0x132440
        int64_t result; // 0x132409
        return result;
    }
    // 0x13240c
    return (a6 + 61) % 256 | a6 & -256;
}

// Address range: 0x132428 - 0x132433
int64_t function_132428(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x132428
    int64_t v1; // 0x132428
    uint64_t v2 = v1 + 2 * v1; // 0x13242a
    return 256 * (v2 / 256 + a4 / 256 + (int64_t)(-1 - (int32_t)a3 < (int32_t)v1)) & 0xff00 | v2 & 0xffff00ff;
}

// Address range: 0x132437 - 0x132440
int64_t function_132437(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = a4 & 0xffffffff; // 0x132438
    int64_t v1; // 0x132437
    int32_t * v2 = (int32_t *)(a1 + 0x3cfb1d9a); // 0x13243a
    bool v3; // 0x132437
    *v2 = (int32_t)v3 + (int32_t)v1 + *v2;
    return result;
}

// Address range: 0x132463 - 0x13246c
int64_t function_132463(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x132463
    int32_t v1; // 0x132463
    *(int32_t *)(a4 + 0x37310080) = (int32_t)(int64_t)&v1;
    int64_t result; // 0x132463
    return result;
}

// Address range: 0x132484 - 0x1324a5
int64_t function_132484(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x132484
    int64_t v1; // 0x132484
    uint64_t v2 = v1;
    char * v3 = (char *)(v2 + 0x13d0000); // 0x132484
    char v4 = *v3; // 0x132484
    *v3 = 2 * v4;
    int64_t v5 = unknown_ffffffffc7030c97(); // 0x13248e
    int32_t v6 = *(int32_t *)v5; // 0x132493
    int32_t v7 = v4 < 0 ? -0x456fbd6 : -0x456fbd7; // 0x132493
    unsigned char v8 = (char)(v2 / 256); // 0x1324a1
    unsigned char v9 = (char)v2; // 0x1324a1
    char v10 = v8 + v9; // 0x1324a1
    unsigned char v11 = llvm_ctpop_i8(v10); // 0x1324a1
    int64_t v12; // 0x132484
    *(int32_t *)a1 = *(int32_t *)&v12;
    return 256 * (64 * (int64_t)(v10 == 0) | (int64_t)(v10 < v8) | 128 * (int64_t)(v10 < 0) | 16 * (int64_t)(v8 % 16 + v9 % 16 > 15) | 4 * (int64_t)(v11 % 2 == 0)) | (int64_t)(v7 + (int32_t)v5 + v6 & -0xff01 | 512);
}

// Address range: 0x1324b1 - 0x1324b6
int64_t function_1324b1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1324b1
    int64_t v1; // 0x1324b1
    char * v2 = (char *)(v1 + 7); // 0x1324b1
    bool v3; // 0x1324b1
    *v2 = (char)v3 - (char)a3 + *v2;
    return unknown_ffffffffb4511f06();
}

// Address range: 0x1324c0 - 0x132500
int64_t function_1324c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1324c0
    int64_t v1; // 0x1324c0
    int32_t * v2 = (int32_t *)(v1 + 0xac33a03); // 0x1324ca
    *v2 = *v2 + (int32_t)a3;
    int64_t v3 = unknown_fffffffff5040eda(); // 0x1324d4
    float80_t v4; // 0x1324c0
    *(float80_t *)(v3 + 46) = __asm_fbstp(v4);
    unsigned char v5 = *(char *)0x1e898f0; // 0x1324e1
    unsigned char v6 = v5 + (char)v3; // 0x1324e1
    *(char *)0x1e898f0 = v6;
    uint32_t v7 = (int32_t)v3; // 0x1324e3
    uint32_t v8 = v6 < v5 ? 0x4d1091db : 0x4d1091da; // 0x1324e3
    unknown_ffffffffb4a05ef0();
    if (v8 >= v7) {
        function_13252b(a1, a2, 0x1e898f0, a4);
    }
    char * v9 = (char *)(a4 - 24); // 0x1324f1
    *v9 = *v9 / 2 | 128 * (char)(v6 < v5 | v8 > v7);
    *(int32_t *)0xe8a2f283 = *(int32_t *)0xe8a2f283 + (int32_t)a2;
    return v1 & 0xffffffff;
}

// Address range: 0x132500 - 0x132509
int64_t function_132500(void) {
    int64_t v1 = unknown_ffffffffb4511f06() | 149; // 0x132505
    return (int64_t)(*(int32_t *)v1 + (int32_t)v1);
}

// Address range: 0x132515 - 0x132528
int64_t function_132515(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x132515
    int64_t v1; // 0x132515
    int32_t * v2 = (int32_t *)(v1 - 0x3f577a9); // 0x132515
    *v2 = *v2 + (int32_t)v1;
    return v1 & 0xffffffff;
}

// Address range: 0x13252b - 0x13253a
int64_t function_13252b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13252b
    int64_t result; // 0x13252b
    bool v1; // 0x13252b
    if (v1) {
        result = function_132515(a1, a2, a3, a4, (int64_t)&g6);
    }
    int32_t * v2 = (int32_t *)(a3 + 0x375e65a9); // 0x13252d
    *v2 = *v2 + (int32_t)a4;
    return result;
}

// Address range: 0x132546 - 0x132551
int64_t function_132546(int64_t a1) {
    // 0x132546
    return unknown_29ec8b51(a1);
}

// Address range: 0x132556 - 0x13256d
int64_t function_132556(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x132556
    int64_t result; // 0x132556
    bool v1; // 0x132556
    if (a4 != 1 == v1) {
        // 0x1325cb
        return result;
    }
    // 0x132558
    unknown_ffffffffbc31fe5e();
    char v2 = result; // 0x13255f
    __asm_out_134(-95, v2);
    *(char *)(a2 - 0x2dcafe18) = v2;
    return result + 0x3c008000 + (int64_t)v1 & 0xffffffff;
}

// Address range: 0x1327a5 - 0x1327a6
int64_t function_1327a5(void) {
    // 0x1327a5
    int64_t result; // 0x1327a5
    return result;
}

// Address range: 0x1327d0 - 0x1327d1
int64_t function_1327d0(void) {
    // 0x1327d0
    int64_t result; // 0x1327d0
    return result;
}

// Address range: 0x1327e2 - 0x1327fc
int64_t function_1327e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1327e2
    int64_t v1; // 0x1327e2
    __asm_outsd((int16_t)a3, (int32_t)v1);
    int64_t v2 = unknown_ffffffff8b9bb8f0(); // 0x1327ea
    *(char *)-0x30839f07 = *(char *)-0x30839f07 + (char)(v1 / 256);
    return (a4 + 118 + v2) % 256 | v2 & -256;
}

// Address range: 0x132806 - 0x13280a
int64_t function_132806(int64_t a1) {
    // 0x132806
    int64_t v1; // 0x132806
    return v1 & 0xffffffff;
}

// Address range: 0x132855 - 0x13285d
int64_t function_132855(int64_t a1) {
    // 0x132855
    int64_t result; // 0x132855
    int32_t * v1 = (int32_t *)(result - 0x752166d4); // 0x132855
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1328a8 - 0x1328b3
int64_t function_1328a8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1328a8
    int64_t v1; // 0x1328a8
    int64_t v2 = v1 & -0xff01 | (int64_t)&g1; // 0x1328a8
    __asm_int(20);
    bool v3; // 0x1328a8
    return (v2 + 190 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x1328d8 - 0x1328dd
int64_t function_1328d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1328d8
    int64_t result; // 0x1328d8
    return result;
}

// Address range: 0x13293d - 0x13294c
int64_t function_13293d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffffcb457d46(); // 0x132940
    unsigned char v1 = (char)(a3 / 256); // 0x132945
    unsigned char v2 = v1 + (char)a4; // 0x132945
    char * v3 = (char *)(256 * (int64_t)v2 | a3 & -0xff01); // 0x132947
    int64_t v4; // 0x13293d
    *v3 = (char)((uint64_t)v4 / 256) + (char)(v2 < v1) + *v3;
    return result;
}

// Address range: 0x132966 - 0x1329cf
int64_t function_132966(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x132966
    unknown_fffffffffa0b3ab0();
    int64_t v1 = unknown_ffffffffe216b9c1(); // 0x1329bb
    *(int32_t *)v1 = (int32_t)v1;
    return unknown_270b3ace();
}

// Address range: 0x1329db - 0x1329dd
int64_t function_1329db(void) {
    // 0x1329db
    int64_t result; // 0x1329db
    return result;
}

// Address range: 0x1329e8 - 0x132a03
int64_t function_1329e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_3a36b9ee(); // 0x1329e8
    int64_t v2; // 0x1329e8
    __asm_outsd((int16_t)a3, (int32_t)v2);
    return v1 & -140;
}

// Address range: 0x132acc - 0x132acf
int64_t function_132acc(int64_t a1) {
    // 0x132acc
    int64_t result; // 0x132acc
    return result;
}

// Address range: 0x132b4e - 0x132b6e
int64_t function_132b4e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x132b4e
    int64_t v1; // 0x132b4e
    uint64_t v2 = v1;
    bool v3; // 0x132b4e
    *(int32_t *)a1 = (int32_t)v3;
    *(char *)(a4 + 117 + v1) = (char)(a4 / 256);
    char v4 = *(char *)(v1 + 0xcdaaf1); // 0x132b65
    return 256 * (int64_t)((char)(v2 / 256) - v4) | v2 & -0xff01;
}

// Address range: 0x3dafb9 - 0x3dafbb
int64_t function_3dafb9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x3dafb9
    int64_t result; // 0x3dafb9
    if (v1 != 0) {
        uint32_t v2 = (int32_t)result;
        *(int32_t *)result = v2 >> 32 - v1 | v2 << v1;
    }
    return result;
}

// Address range: 0x3daff3 - 0x3daff8
int64_t function_3daff3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3daff3
    *(char *)a3 = (char)a4;
    bool v1; // 0x3daff3
    return function_3daf8f((v1 ? -1 : 1) + a1);
}

// Address range: 0x3daffd - 0x3daffe
int64_t function_3daffd(void) {
    // 0x3daffd
    int64_t result; // 0x3daffd
    return result;
}

// Address range: 0x3db023 - 0x3db026
int64_t function_3db023(int64_t a1) {
    // 0x3db023
    int64_t result; // 0x3db023
    return result;
}

// Address range: 0x3db053 - 0x3db05d
int64_t function_3db053(int64_t a1) {
    // 0x3db053
    return (int64_t)*(int32_t *)0x13d003b899b5b89;
}

// Address range: 0x3db0af - 0x3db0bb
int64_t function_3db0af(void) {
    // 0x3db0af
    __asm_out_133(-68, (int32_t)unknown_6ced4b5());
    return function_ffffffffe847af81();
}

// Address range: 0x3db189 - 0x3db18b
int64_t function_3db189(void) {
    // 0x3db189
    int64_t result; // 0x3db189
    return result;
}

// Address range: 0x3db1e8 - 0x3db1eb
int64_t function_3db1e8(void) {
    // 0x3db1e8
    int64_t result; // 0x3db1e8
    return result;
}

// Address range: 0x3db203 - 0x3db205
int64_t function_3db203(void) {
    // 0x3db203
    return function_3db25e();
}

// Address range: 0x3db226 - 0x3db258
int64_t function_3db226(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    unsigned char v1 = (char)unknown_ffffffffb419ad2c(); // 0x3db22b
    uint32_t v2 = (int32_t)a1; // 0x3db22d
    int64_t v3; // 0x3db226
    uint32_t v4 = (int32_t)(-1 - v1 < v1) + (int32_t)v3; // 0x3db22d
    uint32_t v5 = v2 - v4; // 0x3db22d
    if (v5 == 0) {
        int64_t v6 = v5; // 0x3db22d
        bool v7 = -1 - v1 < v1 ? (int32_t)(-1 - v1 < v1) > v2 | v4 != -1 : v4 > v2; // 0x3db22d
        int64_t v8 = unknown_ffffffffae71624e(0); // 0x3db24e
        if (!v7) {
            v8 = function_3db2b8(v6, a2, a3, a4, (int64_t)&g6, (int64_t)&g6);
        }
        char * v9 = (char *)(v6 - 111); // 0x3db250
        *v9 = *v9 + (char)(a4 / 256);
        return v8 + 0x13d00d6 & 0xffffffff;
    }
    int64_t result = unknown_ffffffffe8b50039(v5); // 0x3db233
    *(int32_t *)-0x179470c1 = *(int32_t *)-0x179470c1 + v5;
    int32_t * v10 = (int32_t *)(result + 63); // 0x3db23e
    uint32_t v11 = *v10; // 0x3db23e
    uint32_t v12 = v11 + (int32_t)v3; // 0x3db23e
    *v10 = v12;
    char * v13 = (char *)result; // 0x3db241
    *v13 = *v13 + (char)a3 + (char)(v12 < v11);
    return result;
}

// Address range: 0x3db25e - 0x3db26b
int64_t function_3db25e(void) {
    // 0x3db25e
    int64_t v1; // 0x3db25e
    __asm_out_134(7, (char)v1);
    return v1 & 0xffffffff ^ 0x99d80068;
}

// Address range: 0x3db27b - 0x3db27c
int64_t function_3db27b(int64_t a1) {
    // 0x3db27b
    int64_t result; // 0x3db27b
    return result;
}

// Address range: 0x3db2af - 0x3db2b0
int64_t function_3db2af(int64_t a1) {
    // 0x3db2af
    int64_t result; // 0x3db2af
    return result;
}

// Address range: 0x3db2b8 - 0x3db324
int64_t function_3db2b8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    int64_t result; // 0x3db2b8
    bool v2; // 0x3db2b8
    if (v2 || false) {
        uint64_t v3 = __asm_hlt(); // 0x3db2eb
        uint64_t v4 = v3 % 256 * ((uint64_t)result % 256); // 0x3db2ec
        int32_t * v5 = (int32_t *)(result + 0x13d423); // 0x3db2f1
        *v5 = *v5 >> 1;
        int64_t v6 = v4 & 0xff00 | v3 & -0x10000 | (int64_t)*(char *)(v4 % 256 + result); // 0x3db2f7
        uint32_t v7 = (int32_t)a1 - *(int32_t *)&v1; // 0x3db2f8
        char * v8 = (char *)(a5 - 0x61b8ffff + (int64_t)v7); // 0x3db2fa
        *v8 = *v8 & (char)(v4 / 256);
        *(int32_t *)v1 = *(int32_t *)&v1 + v7;
        int32_t * v9 = (int32_t *)(result + 2 * a5); // 0x3db304
        *v9 = *v9 + (int32_t)v6;
        int64_t v10 = (256 * unknown_7758eb0e(v7) ^ v4) & 0xff00 | v6 & 0xffff00ff; // 0x3db312
        int32_t * v11 = (int32_t *)(v10 + 0x3d01e8fc); // 0x3db314
        *v11 = *v11 + (int32_t)v10;
        return (int64_t)__asm_in((int16_t)v1) | (int64_t)(v7 & -256);
    }
    char * v12 = (char *)(result - 24); // 0x3db2ba
    *v12 = *v12 + (char)(a4 / 256);
    return result;
}

// Address range: 0x3db352 - 0x3db358
int64_t function_3db352(int64_t a1) {
    // 0x3db352
    return unknown_10788d58(a1);
}

// Address range: 0x3db3b7 - 0x3db3bc
int64_t function_3db3b7(void) {
    // 0x3db3b7
    int64_t result; // 0x3db3b7
    return result;
}

// Address range: 0x3db3d7 - 0x3db3d8
int64_t function_3db3d7(int64_t a1) {
    // 0x3db3d7
    int64_t result; // 0x3db3d7
    return result;
}

// Address range: 0x3db3ef - 0x3db3f0
int64_t function_3db3ef(void) {
    // 0x3db3ef
    int64_t result; // 0x3db3ef
    return result;
}

// Address range: 0x3db404 - 0x3db405
int64_t function_3db404(void) {
    // 0x3db404
    int64_t result; // 0x3db404
    return result;
}

// Address range: 0x3db409 - 0x3db41a
int64_t function_3db409(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3db409
    return unknown_13b0b81d();
}

// Address range: 0x3db41a - 0x3db42c
int64_t function_3db41a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3db41a
    int64_t v1; // 0x3db41a
    bool v2; // 0x3db41a
    if (!v2 && !v2) {
        v1 = function_3db404();
    }
    int32_t * v3 = (int32_t *)(v1 + 1); // 0x3db41c
    int64_t v4; // 0x3db41a
    int32_t v5 = *v3 + (int32_t)v4; // 0x3db41c
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x3db41c
    *v3 = v5;
    int64_t v7; // 0x3db41a
    __asm_outsb((int16_t)a3, *(char *)&v7);
    if (v6 % 2 != 0) {
        function_3db3ef();
    }
    // 0x3db422
    return function_2265079(0xe85486b4);
}

// Address range: 0x3db42e - 0x3db42f
int64_t function_3db42e(int64_t a1) {
    // 0x3db42e
    int64_t result; // 0x3db42e
    return result;
}

// Address range: 0x3db445 - 0x3db46a
int64_t function_3db445(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x741e97f5); // 0x3db447
    int64_t v2; // 0x3db445
    *v1 = *v1 + (int32_t)v2;
    int64_t v3; // 0x3db445
    *(int32_t *)a4 = *(int32_t *)&v3 + (int32_t)a1;
    uint64_t v4 = a3 & 0xffffff00; // 0x3db459
    char * v5 = (char *)(v2 + 0x1e861da); // 0x3db462
    *v5 = *v5 ^ (char)(v4 / 256);
    return v4 | (int64_t)(*(char *)-0x9b768f1 | (char)a3);
}

// Address range: 0x3db48f - 0x3db4c1
int64_t function_3db48f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x3db48f
    int64_t v1; // 0x3db48f
    int64_t v2 = v1;
    uint64_t v3 = v1;
    char * v4 = (char *)((a4 & 0xffffffff) + 91); // 0x3db490
    *v4 = *v4 + (char)(a3 / 256);
    unknown_ffffffff9245c499();
    return (v3 / 256 + v2 & 254 | v2 & 0xffff0000 | (v3 + v1 & 0xff00) + (v2 & 0xff00) & 0xff00) / 2;
}

// Address range: 0x3db4dd - 0x3db4de
int64_t function_3db4dd(int64_t a1) {
    // 0x3db4dd
    int64_t result; // 0x3db4dd
    return result;
}

// Address range: 0x3db4e4 - 0x3db4ed
int64_t function_3db4e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3db4e4
    int64_t v1; // 0x3db4e4
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a2 + (int64_t)&g2); // 0x3db4e4
    *v3 = *v3 + (int32_t)a4;
    int64_t v4; // 0x3db4e4
    return v2 & -256 | (int64_t)(*(char *)&v4 | (char)v2);
}

// Address range: 0x3db537 - 0x3db53c
int64_t function_3db537(void) {
    // 0x3db537
    return function_ffffffffd8bcb51c();
}

// Address range: 0x3db53e - 0x3db546
int64_t function_3db53e(int64_t a1) {
    // 0x3db53e
    int64_t v1; // 0x3db53e
    *(int32_t *)a1 = 2 * (int32_t)v1;
    __asm_int1(a1, v1);
    return function_ffffffffb12e1171();
}

// Address range: 0x3db552 - 0x3db563
int64_t function_3db552(int64_t a1) {
    // 0x3db552
    int64_t v1; // 0x3db552
    int64_t v2 = v1;
    int32_t v3 = v1;
    char * v4 = (char *)(int64_t)((v3 >> 31) + (int32_t)(v3 < 0x7c9e3701) - (int32_t)((v1 + v2) % 256 | v2 & 0xffffff00)); // 0x3db55e
    *v4 = *v4 + (char)v1;
    return v1 & 0xffffffff;
}
