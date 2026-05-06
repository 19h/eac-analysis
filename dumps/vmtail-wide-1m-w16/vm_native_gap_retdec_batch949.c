/*
 * Targeted RetDec C for native executable gap queue batch 949.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x28e64c-0x28e84c rank=- name=- kind=- bytes=- uncovered=-
 *   0x28e84c-0x28ea4c rank=- name=- kind=- bytes=- uncovered=-
 *   0x28ea4c-0x28ec4c rank=- name=- kind=- bytes=- uncovered=-
 *   0x28ec4c-0x28ee4c rank=- name=- kind=- bytes=- uncovered=-
 *   0x28ee4c-0x28f04c rank=- name=- kind=- bytes=- uncovered=-
 *   0x32ba55-0x32bc55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32bc55-0x32be55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32be55-0x32c055 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_28e64c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_28e67e(void);
int64_t function_28e685(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28e6cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28e6e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28e6fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28e77c(void);
int64_t function_28e7a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28e854(void);
int64_t function_28e861(void);
int64_t function_28e86c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_28e943(void);
int64_t function_28e959(void);
int64_t function_28e98a(void);
int64_t function_28e9c4(void);
int64_t function_28e9ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28eaf1(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_28eaf6(int64_t a1, int64_t a2);
int64_t function_28eb5c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_28eb92(int64_t a1);
int64_t function_28ebb2(void);
int64_t function_28ebbd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28ec24(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28ec58(int64_t a1);
int64_t function_28ed68(void);
int64_t function_28ed7a(void);
int64_t function_28ed7d(void);
int64_t function_28ed9f(void);
int64_t function_28edb7(void);
int64_t function_28edbf(int64_t a1);
int64_t function_28edd2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_28eebe(int64_t a1);
int64_t function_28eeec(int64_t a1, int64_t a2);
int64_t function_28eefb(void);
int64_t function_28ef18(void);
int64_t function_28ef63(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_28f00f(int64_t a1);
int64_t function_2f90c73();
int64_t function_32ba55(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32bab6(void);
int64_t function_32baf2(int64_t a1);
int64_t function_32bb7d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_32bbcf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32bc0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32bd0b(void);
int64_t function_32bd3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32bda6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32bdde(int64_t a1);
int64_t function_32beaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32bf31(void);
int64_t function_32bf6c(void);
int64_t function_32bfb0(void);
int64_t function_32bffb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32c023(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32c046(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6e6d9c73();
int64_t function_a837bf();
int64_t function_ffffffffda7a005b();
int64_t unknown_165e699();
int64_t unknown_16fbe39();
int64_t unknown_21b7630();
int64_t unknown_3a3fd1d9();
int64_t unknown_40a872dd();
int64_t unknown_479e03d2();
int64_t unknown_5e2ad769();
int64_t unknown_7a4895c9();
int64_t unknown_ffffffff802be28f();
int64_t unknown_ffffffff89ef7dd2();
int64_t unknown_ffffffff8c35d060();
int64_t unknown_ffffffff8e214fbc();
int64_t unknown_ffffffff9863a7f3();
int64_t unknown_ffffffff9e3fa540();
int64_t unknown_ffffffffde2c7c2d();
int64_t unknown_ffffffffeb2dd3d7();
int64_t unknown_ffffffffef338f99();

// Address range: 0x28e64c - 0x28e673
int64_t function_28e64c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    char v2 = *(char *)0x5f2ae953; // 0x28e64c
    int64_t result; // 0x28e64c
    char v3 = result / 256; // 0x28e64c
    char v4 = v2 + v3; // 0x28e64c
    *(char *)0x5f2ae953 = v4;
    if (((v4 ^ v2) & (v4 ^ v3)) >= 0) {
        // 0x28e674
        return result;
    }
    int32_t * v5 = (int32_t *)(result + 3); // 0x28e657
    *v5 = *v5 / 2;
    __asm_int(104);
    char * v6 = (char *)(4 * a3 - 0x1fd6c334 + result); // 0x28e65c
    *v6 = *v6 + (char)result;
    *(char *)v1 = __asm_insb((int16_t)a3);
    *(int32_t *)v1 = *(int32_t *)&v1 ^ (int32_t)result;
    return result;
}

// Address range: 0x28e67e - 0x28e67f
int64_t function_28e67e(void) {
    // 0x28e67e
    int64_t result; // 0x28e67e
    return result;
}

// Address range: 0x28e685 - 0x28e6bb
int64_t function_28e685(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x28e685
    unknown_165e699();
    *(char *)0x37a21010 = -1;
    int64_t v1; // 0x28e685
    __asm_out((int16_t)v1, (int32_t)v1);
    __asm_wait(v1 & 0xffffffff);
    *(char *)0x3ac89db6 = *(char *)0x3ac89db6 + (char)(v1 / 256);
    return function_2f90c73();
}

// Address range: 0x28e6cb - 0x28e6df
int64_t function_28e6cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    if (a4 != 1) {
        // 0x28e6e1
        return a4 & 0xffffffff;
    }
    int64_t v1 = unknown_ffffffffeb2dd3d7((int32_t)(a2 ^ a1)); // 0x28e6d1
    return v1 & -256 | (int64_t)*(char *)0x9f8d574bf766b5;
}

// Address range: 0x28e6e3 - 0x28e6ed
int64_t function_28e6e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x28e6e3
    int64_t v1; // 0x28e6e3
    __asm_out((int16_t)a3, (int32_t)v1);
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a4;
    int64_t result; // 0x28e6e3
    *(int32_t *)result = *(int32_t *)&result & (int32_t)v1;
    return result;
}

// Address range: 0x28e6fa - 0x28e760
int64_t function_28e6fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    *(int32_t *)a4 = (int32_t)a4 + (int32_t)a3;
    int64_t v3; // 0x28e6fa
    uint32_t v4 = *(int32_t *)(v3 - 71) + (int32_t)v3; // 0x28e703
    unsigned char v5 = (char)(v4 / 256); // 0x28e736
    unsigned char v6 = *(char *)&v2 + v5; // 0x28e736
    int64_t v7 = 256 * (int64_t)v6 | (int64_t)(v4 & -0xff01); // 0x28e736
    *(int32_t *)v1 = *(int32_t *)&v1 + 0x3d09f85d + (int32_t)(v6 < v5);
    int32_t * v8 = (int32_t *)((v3 & -256 | 185) + 110); // 0x28e740
    *v8 = *v8 + (int32_t)a1;
    *(char *)v2 = *(char *)&v2 + (char)a4;
    float80_t v9; // 0x28e6fa
    *(float80_t *)(v7 - 0x756c5fa) = __asm_fbstp(v9);
    return v7 & 0x3d00b263;
}

// Address range: 0x28e77c - 0x28e789
int64_t function_28e77c(void) {
    // 0x28e77c
    __asm_int1();
    return function_a837bf();
}

// Address range: 0x28e7a8 - 0x28e7ab
int64_t function_28e7a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x28e7a8
    int64_t result; // 0x28e7a8
    return result;
}

// Address range: 0x28e854 - 0x28e857
int64_t function_28e854(void) {
    // 0x28e854
    int64_t result; // 0x28e854
    return result;
}

// Address range: 0x28e861 - 0x28e862
int64_t function_28e861(void) {
    // 0x28e861
    int64_t result; // 0x28e861
    return result;
}

// Address range: 0x28e86c - 0x28e888
int64_t function_28e86c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x28e86c
    int64_t v1; // 0x28e86c
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return v1 & 0xffffffff ^ 0x52763a;
}

// Address range: 0x28e943 - 0x28e944
int64_t function_28e943(void) {
    // 0x28e943
    int64_t result; // 0x28e943
    return result;
}

// Address range: 0x28e959 - 0x28e95b
int64_t function_28e959(void) {
    // 0x28e959
    return function_28e943();
}

// Address range: 0x28e98a - 0x28e98b
int64_t function_28e98a(void) {
    // 0x28e98a
    int64_t result; // 0x28e98a
    return result;
}

// Address range: 0x28e9c4 - 0x28e9c7
int64_t function_28e9c4(void) {
    // 0x28e9c4
    int64_t result; // 0x28e9c4
    return result;
}

// Address range: 0x28e9ca - 0x28e9d6
int64_t function_28e9ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x28e9ca
    return unknown_ffffffff89ef7dd2(a1, a2, a3, a4);
}

// Address range: 0x28eaf1 - 0x28eaf6
int64_t function_28eaf1(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x28eaf1
    int64_t result; // 0x28eaf1
    *(char *)a3 = (char)(result ^ a3 / 256);
    return result;
}

// Address range: 0x28eaf6 - 0x28eb00
int64_t function_28eaf6(int64_t a1, int64_t a2) {
    // 0x28eaf6
    return (int64_t)(*(int32_t *)0x9f70fd + (int32_t)a1);
}

// Address range: 0x28eb5c - 0x28eb68
int64_t function_28eb5c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x28eb5c
    return a2 & 0xffffffff;
}

// Address range: 0x28eb92 - 0x28eb95
int64_t function_28eb92(int64_t a1) {
    // 0x28eb92
    int64_t result; // 0x28eb92
    return result;
}

// Address range: 0x28ebb2 - 0x28ebb3
int64_t function_28ebb2(void) {
    // 0x28ebb2
    int64_t result; // 0x28ebb2
    return result;
}

// Address range: 0x28ebbd - 0x28ebe6
int64_t function_28ebbd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x28177c77); // 0x28ebbd
    *v1 = *v1 + (int32_t)a4;
    char * v2 = (char *)(a4 - 39); // 0x28ebc3
    int64_t v3; // 0x28ebbd
    char v4 = *v2 + (char)v3; // 0x28ebc3
    *v2 = v4;
    int64_t v5; // 0x28ebbd
    if (v4 < 0) {
        v5 = function_28ebb2();
    }
    int64_t result = v5;
    int32_t * v6 = (int32_t *)(result + 0x5700290 + 4 * result); // 0x28ebca
    *v6 = *v6 + (int32_t)v3;
    char * v7 = (char *)(v3 + 0x4c01e856); // 0x28ebd1
    *v7 = *v7 | (char)v3;
    int32_t * v8 = (int32_t *)(v3 + 0xa4e1800); // 0x28ebd7
    *v8 = *v8 - (int32_t)v3;
    return result;
}

// Address range: 0x28ec24 - 0x28ec35
int64_t function_28ec24(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    char * v2 = (char *)(a4 - 42); // 0x28ec24
    int64_t v3; // 0x28ec24
    *v2 = *v2 + (char)v3;
    int64_t result = unknown_ffffffffde2c7c2d(); // 0x28ec27
    *(char *)v1 = *(char *)&v1 & -85;
    return result;
}

// Address range: 0x28ec58 - 0x28ec59
int64_t function_28ec58(int64_t a1) {
    // 0x28ec58
    int64_t result; // 0x28ec58
    return result;
}

// Address range: 0x28ed68 - 0x28ed6b
int64_t function_28ed68(void) {
    // 0x28ed68
    int64_t result; // 0x28ed68
    return result;
}

// Address range: 0x28ed7a - 0x28ed7d
int64_t function_28ed7a(void) {
    // 0x28ed7a
    int64_t result; // 0x28ed7a
    return result;
}

// Address range: 0x28ed7d - 0x28ed81
int64_t function_28ed7d(void) {
    // 0x28ed7d
    int64_t result; // 0x28ed7d
    __asm_out_133(-75, (int32_t)result);
    return result;
}

// Address range: 0x28ed9f - 0x28eda0
int64_t function_28ed9f(void) {
    // 0x28ed9f
    int64_t result; // 0x28ed9f
    return result;
}

// Address range: 0x28edb7 - 0x28edb8
int64_t function_28edb7(void) {
    // 0x28edb7
    int64_t result; // 0x28edb7
    return result;
}

// Address range: 0x28edbf - 0x28edd2
int64_t function_28edbf(int64_t a1) {
    unknown_7a4895c9();
    int64_t v1; // 0x28edbf
    int64_t v2 = v1 - 1; // 0x28edca
    // 0x28edbf
    int64_t v3; // 0x28edbf
    while (v2 != 0 == (int32_t)v3 == -(int32_t)v3) {
        // 0x28edc1
        unknown_7a4895c9();
        v2--;
    }
    // 0x28edcc
    return unknown_479e03d2();
}

// Address range: 0x28edd2 - 0x28eebc
int64_t function_28edd2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int16_t v2 = a3; // 0x28edd2
    int64_t v3; // 0x28edd2
    __asm_out(v2, (int32_t)v3);
    int64_t v4 = unknown_40a872dd(); // 0x28edd7
    unsigned char v5 = (char)v4 & 22; // 0x28eddc
    if (llvm_ctpop_i8(v5) % 2 != 0) {
        // 0x28ede1
        if (llvm_ctpop_i8(v5 - *(char *)((v3 + a1 & 0xffffffff) - 37)) % 2 == 0) {
            function_28edb7();
        }
        // 0x28eded
        unknown_ffffffff9863a7f3();
        return function_28ed9f();
    }
    int64_t v6 = v5; // 0x28eddc
    int64_t v7 = v4 & -256; // 0x28eddc
    int64_t v8 = v7 | v6; // bp-16, 0x28ee1d
    *(int32_t *)a1 = __asm_insd(v2);
    int64_t v9; // 0x28edd2
    uint32_t v10 = *(int32_t *)&v9; // 0x28ee22
    uint32_t v11 = v10 + (int32_t)a6; // 0x28ee22
    *(int32_t *)v9 = v11;
    int64_t v12 = (v6 - a4 / 256 + (int64_t)(v11 < v10)) % 256 | v7; // 0x28ee25
    int64_t v13 = (v3 & -0xff01 | (int64_t)&g3) + a4; // 0x28ee27
    int64_t v14 = v13 & 0xffffffff; // 0x28ee27
    uint64_t v15 = (0x100000000 * v12 >> 32) * (int64_t)*(int32_t *)v12; // 0x28ee2b
    uint64_t v16 = v15 / 0x100000000; // 0x28ee2b
    uint32_t v17 = (int32_t)v3 - 0x17312d06 + (int32_t)v15; // 0x28ee32
    *(char *)a1 = *(char *)&v1;
    bool v18; // 0x28edd2
    int64_t v19 = v18 ? -1 : 1; // 0x28ee39
    int64_t v20 = v1 + v19; // 0x28ee39
    v1 = v20;
    int64_t v21 = unknown_ffffffff9e3fa540(v19 + a1, v20, v16, (int32_t)v13); // 0x28ee3a
    int64_t v22 = v14 - 1; // 0x28ee3f
    if (v22 != 0 != (v17 == 0x2bee686d)) {
        // 0x28ee41
        *(int32_t *)v21 = (int32_t)v21;
        int64_t v23 = v21 - (v17 > 0x2bee686c ? 0x8601e874 : 0x8601e873); // 0x28ee45
        char * v24 = (char *)(v16 & 0xffff00ff | (int64_t)"_Resume"); // 0x28ee4a
        *v24 = *v24 | (char)((int64_t)&g3 >> 8);
        *(int32_t *)0x1e84c5ddfd0fd = (int32_t)v23;
        return v23 & 0xffffffff;
    }
    int32_t * v25 = (int32_t *)v21; // 0x28ee7b
    *v25 = *v25 + (int32_t)v16;
    char * v26 = (char *)v22; // 0x28ee86
    *v26 = *v26 | (char)v21;
    unknown_ffffffff802be28f();
    int32_t * v27 = (int32_t *)(v14 - 9); // 0x28ee99
    *v27 = *v27 + (int32_t)(int64_t)&v8;
    __asm_in(51);
    char * v28 = (char *)(v14 + 0x174c46cd); // 0x28eeae
    *v28 = *v28 | 75;
    *(char *)75 = (char)((int64_t)&g3 >> 8);
    return unknown_ffffffff8e214fbc();
}

// Address range: 0x28eebe - 0x28eebf
int64_t function_28eebe(int64_t a1) {
    // 0x28eebe
    int64_t result; // 0x28eebe
    return result;
}

// Address range: 0x28eeec - 0x28eefa
int64_t function_28eeec(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 0x3e0ae32b); // 0x28eeed
    bool v2; // 0x28eeec
    *v1 = *v1 - (v2 ? -0xfe17af : -0xfe17b0);
    int64_t result; // 0x28eeec
    return result;
}

// Address range: 0x28eefb - 0x28eefc
int64_t function_28eefb(void) {
    // 0x28eefb
    int64_t result; // 0x28eefb
    return result;
}

// Address range: 0x28ef18 - 0x28ef1a
int64_t function_28ef18(void) {
    // 0x28ef18
    return function_28eefb();
}

// Address range: 0x28ef63 - 0x28efd8
int64_t function_28ef63(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x28ef63
    int64_t v1; // 0x28ef63
    uint64_t v2 = v1;
    int64_t v3 = unknown_5e2ad769(); // 0x28ef63
    int64_t v4 = v3 & 0xffffffff; // 0x28ef68
    int64_t v5 = v2 & -256; // 0x28ef6f
    int32_t * v6 = (int32_t *)(a1 - 0x15fbd3df + 2 * v3); // 0x28ef71
    uint32_t v7 = *v6; // 0x28ef71
    uint32_t v8 = (int32_t)v5; // 0x28ef71
    *v6 = v7 - v8;
    char v9 = v3; // 0x28ef78
    int64_t v10; // 0x28ef63
    *(char *)a2 = *(char *)&v10 + v9 + (char)(v7 < v8);
    int64_t v11 = v3 + 0x13d8581; // 0x28ef7a
    *(int32_t *)a1 = *(int32_t *)&v10;
    bool v12; // 0x28ef63
    int64_t v13 = v12 ? -4 : 4; // 0x28ef80
    int64_t v14 = v13 + a2; // 0x28ef80
    char * v15 = (char *)(v11 & 0xffffffff); // 0x28ef81
    char v16 = v11; // 0x28ef81
    *v15 = *v15 + v16;
    char * v17 = (char *)(v5 + 0x3d000001); // 0x28ef83
    *v17 = *v17 + v16;
    int32_t * v18 = (int32_t *)(a4 + 0x2f35b30d); // 0x28ef89
    *v18 = *v18 + (int32_t)a4;
    unknown_ffffffffef338f99(v13 + a1, v14, v4);
    unsigned char v19 = *(char *)0x4f00681e; // 0x28efa8
    unsigned char v20 = v19 + v9; // 0x28efa8
    *(char *)0x4f00681e = v20;
    char * v21 = (char *)(v14 + 0x68bf07a5); // 0x28efaa
    *v21 = *v21 - v9 + (char)(v20 < v19);
    char * v22 = (char *)v5; // 0x28efb0
    *v22 = *v22 + 30;
    char * v23 = (char *)v4; // 0x28efb3
    *v23 = 2 * *v23;
    char v24 = *(char *)(v14 - 113); // 0x28efb7
    *(char *)-0x18cc413f = *(char *)-0x18cc413f + (char)(v2 / 256);
    __writegsbyte(0x7b33ddd8, __readgsbyte(0x7b33ddd8) + 10);
    return a4 & 0xffff00d8 | 256 * (int64_t)((char)(a4 / 256) - v24) | 39;
}

// Address range: 0x28f00f - 0x28f010
int64_t function_28f00f(int64_t a1) {
    // 0x28f00f
    int64_t result; // 0x28f00f
    return result;
}

// Address range: 0x32ba55 - 0x32ba89
int64_t function_32ba55(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = unknown_ffffffff8c35d060(); // 0x32ba57
    *(char *)(a3 & 0xffffffff) = (char)((int32_t)v2 < 0xa76b01);
    char v3 = *(char *)0x37316582; // 0x32ba7b
    int64_t v4; // 0x32ba55
    *(char *)0x37316582 = v3 + (char)((uint64_t)v4 / 256);
    *(char *)v1 = (char)a3;
    return a3 & 0xffffff00 | (int64_t)*(char *)&v1;
}

// Address range: 0x32bab6 - 0x32bac2
int64_t function_32bab6(void) {
    // 0x32bab6
    int64_t result; // 0x32bab6
    return result;
}

// Address range: 0x32baf2 - 0x32baf3
int64_t function_32baf2(int64_t a1) {
    // 0x32baf2
    int64_t result; // 0x32baf2
    return result;
}

// Address range: 0x32bb7d - 0x32bb82
int64_t function_32bb7d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x32bb7d
    int64_t result; // 0x32bb7d
    return result;
}

// Address range: 0x32bbcf - 0x32bbf0
int64_t function_32bbcf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32bbcf
    int64_t v1; // 0x32bbcf
    uint64_t v2 = v1;
    int64_t v3 = v1;
    *(char *)v3 = 2 * (char)v3;
    int64_t result = v2 & 0xffffffff; // 0x32bbd1
    *(char *)-0x6360a4e160b0fec3 = (char)v2;
    char * v4 = (char *)(result - 43); // 0x32bbdc
    *v4 = *v4 + (char)(v2 / 256);
    *(char *)0x6684bee = *(char *)0x6684bee + (char)(v1 / 256);
    return result;
}

// Address range: 0x32bc0a - 0x32bc2c
int64_t function_32bc0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a3 - 0x30516202); // 0x32bc0a
    int64_t v2; // 0x32bc0a
    char v3 = v2 & a4; // 0x32bc1c
    unsigned char v4 = llvm_ctpop_i8(v3); // 0x32bc1c
    *(int64_t *)((0x13d000a * v2 & 0xffff00fe | 0x8000 * (int64_t)(v3 < 0) | 0x4000 * (int64_t)(v3 == 0) | 1024 * (int64_t)(v4 % 2 == 0) | 512) - 8) = (int64_t)(-77 * v1);
    return function_6e6d9c73();
}

// Address range: 0x32bd0b - 0x32bd10
int64_t function_32bd0b(void) {
    // 0x32bd0b
    return function_ffffffffda7a005b();
}

// Address range: 0x32bd3f - 0x32bd65
int64_t function_32bd3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32bd3f
    unknown_16fbe39();
    uint32_t v1 = *(int32_t *)0x68003f8bfb4d742c; // 0x32bd46
    int64_t v2 = v1; // 0x32bd46
    int64_t v3; // 0x32bd3f
    char * v4 = (char *)(v3 + 0x1fd3a73); // 0x32bd4f
    *v4 = *v4 + (char)a4;
    unsigned char v5 = *(char *)v2 | (char)v1; // 0x32bd58
    int64_t v6 = v2 & 0xffffff00; // 0x32bd58
    int64_t v7; // 0x32bd3f
    int32_t v8 = *(int32_t *)&v7; // 0x32bd5f
    *(int32_t *)a4 = v8 - (int32_t)v3 + (int32_t)((int32_t)(v6 | (int64_t)v5) < 0x9ec6f901);
    return v6 | (int64_t)(v5 + 60);
}

// Address range: 0x32bda6 - 0x32bdb1
int64_t function_32bda6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 + 0x70065504); // 0x32bda6
    int64_t result; // 0x32bda6
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x32bdde - 0x32bde0
int64_t function_32bdde(int64_t a1) {
    // 0x32bdde
    int64_t v1; // 0x32bdde
    bool v2; // 0x32bdde
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x32beaa - 0x32bef3
int64_t function_32beaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    uint32_t v2 = __asm_in_134(-85); // 0x32beaa
    char v3 = *(char *)(a1 + 0x2e013d00); // 0x32bead
    int32_t * v4 = (int32_t *)(a2 + 0x1835aca3); // 0x32beb7
    int32_t v5 = *v4; // 0x32beb7
    *v4 = v5 - ((v2 + 10) % 256 | v2 & -0x10000 | 256 * (int32_t)(v3 | (char)(v2 / 256)));
    uint32_t v6 = (int32_t)a4 ^ 0x50ea5921; // 0x32bebe
    unsigned char v7 = llvm_ctpop_i8((char)v6); // 0x32bebe
    int64_t v8; // 0x32beaa
    char v9 = v8; // 0x32bec5
    __asm_out_135((int16_t)a3, v9);
    __asm_out_136(-62, v9);
    char * v10 = (char *)(4 * a3 - 100 + v8); // 0x32becd
    unsigned char v11 = *v10; // 0x32becd
    *v10 = v11 / 2 | 128 * (char)(((int32_t)(0x4000 * (int64_t)(v6 == 0) | 0x8000 * (int64_t)(v6 < 0) | 1024 * (int64_t)(v7 % 2 == 0) | v8 & 0xffff00ff) | 512) < 0x9537ff01);
    uint64_t v12 = (unknown_3a3fd1d9() & 0xffffffff | 0x100000000 * a3) / (int64_t)*(int32_t *)&v1; // 0x32bed8
    *(char *)-0x45664118 = *(char *)-0x45664118 - (char)(v6 / 256);
    return v12 & 0xffffff00 | (int64_t)*(char *)(v12 % 256 + (int64_t)v6);
}

// Address range: 0x32bf31 - 0x32bf34
int64_t function_32bf31(void) {
    // 0x32bf31
    int64_t result; // 0x32bf31
    return result;
}

// Address range: 0x32bf6c - 0x32bf6f
int64_t function_32bf6c(void) {
    // 0x32bf6c
    int64_t result; // 0x32bf6c
    return result;
}

// Address range: 0x32bfb0 - 0x32bfb9
int64_t function_32bfb0(void) {
    // 0x32bfb0
    int64_t result; // 0x32bfb0
    int32_t * v1 = (int32_t *)(result - 0x79de9906); // 0x32bfb0
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x32bffb - 0x32c016
int64_t function_32bffb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_21b7630(); // 0x32bffb
    bool v2; // 0x32bffb
    int64_t v3 = v2 ? -1 : 1; // 0x32c000
    char * v4 = (char *)(a4 + 0x6e15db9c + 2 * a4); // 0x32c001
    int64_t v5; // 0x32bffb
    *v4 = ((char)v5 < (char)v5 ? 82 : 81) + *v4;
    *(int32_t *)0x13d622c00efadf1 = (int32_t)v1;
    return function_32c046(v3 + a1, v3 + a2, a3, a4);
}

// Address range: 0x32c023 - 0x32c040
int64_t function_32c023(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x32c023
    unsigned char v3 = (char)v2; // 0x32c023
    bool v4; // 0x32c023
    unsigned char v5 = v3 - 61 + (char)v4; // 0x32c023
    unsigned char v6 = (char)a4 % 32; // 0x32c025
    int64_t v7; // 0x32c023
    int32_t v8; // 0x32c023
    if (v6 == 0) {
        // 0x32c023
        v7 = a2;
        v8 = a2;
    } else {
        char * v9 = (char *)(a4 - 0x48fec300); // 0x32c025
        unsigned char v10 = *v9; // 0x32c025
        bool v11 = v4 ? v5 <= v3 : v3 > 60; // 0x32c023
        *v9 = v10 << v6 | (char)((int16_t)v10 >> (int16_t)(9 - v6)) | (char)v11 << v6 - 1;
        v7 = v1;
        v8 = *(int32_t *)&v1;
    }
    *(int32_t *)v7 = v8 + (int32_t)a3;
    *(char *)0x31a7507e6f9e87e6 = v5;
    int32_t v12 = __asm_in_134(85); // 0x32c036
    __asm_out_135((int16_t)a3, (char)v12);
    return v12 | -0x3267d26;
}

// Address range: 0x32c046 - 0x32c054
int64_t function_32c046(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 0x2afe1703); // 0x32c046
    int64_t result; // 0x32c046
    *v1 = *v1 + (char)result;
    if ((char)a4 == -3) {
        // 0x32c0be
        return result;
    }
    // 0x32c051
    return __asm_sti() | 164;
}
