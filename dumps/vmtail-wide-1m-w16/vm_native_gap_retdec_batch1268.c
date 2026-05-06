/*
 * Targeted RetDec C for native executable gap queue batch 1268.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x159f13-0x15a113 rank=- name=- kind=- bytes=- uncovered=-
 *   0x15a113-0x15a313 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34ec85-0x34ee85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34ee85-0x34f085 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34f085-0x34f285 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34f485-0x34f685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34f685-0x34f885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34f885-0x34fa85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42761f-0x42781f rank=- name=- kind=- bytes=- uncovered=-
 *   0x42781f-0x427a1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x427a1f-0x427c1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x427c1f-0x427e1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x427e1f-0x42801f rank=- name=- kind=- bytes=- uncovered=-
 *   0x42801f-0x42821f rank=- name=- kind=- bytes=- uncovered=-
 *   0x42821f-0x42841f rank=- name=- kind=- bytes=- uncovered=-
 *   0x42841f-0x42861f rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_159f0cbe();
int64_t function_159f13(int64_t a1);
int64_t function_159f3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_15a0c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_15a22c(void);
int64_t function_15a263(void);
int64_t function_15a264(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_15a26f(void);
int64_t function_15a271(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_20a1b31a();
int64_t function_21cf65b();
int64_t function_21d6504();
int64_t function_25344fe7();
int64_t function_2c96ea82();
int64_t function_34ec85(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34ec9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34ece9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34ed52(int64_t a1, int64_t a2);
int64_t function_34ed94(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34ed9d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34edd9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34ee2a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_34ee52(int64_t a1);
int64_t function_34eea1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34ef6f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34ef9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34efb9(void);
int64_t function_34f030(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34f067(int64_t a1);
int64_t function_34f070(void);
int64_t function_34f0d9(void);
int64_t function_34f10d(void);
int64_t function_34f11c(void);
int64_t function_34f13c(void);
int64_t function_34f1cb(int64_t a1);
int64_t function_34f1d6(int64_t a1);
int64_t function_34f20e(void);
int64_t function_34f22a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_34f485(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34f497(void);
int64_t function_34f4b1(void);
int64_t function_34f4b3(void);
int64_t function_34f4be(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_34f665(void);
int64_t function_34f684(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34f765(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34f7e4(void);
int64_t function_34f7f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34f8b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34f8f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34f92c(int64_t a1);
int64_t function_34f9a8(void);
int64_t function_34fa1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3caa57c6();
int64_t function_3f8eb668();
int64_t function_426fb588();
int64_t function_42761f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42764a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4276b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_427837(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_427886(int64_t a1);
int64_t function_427912(void);
int64_t function_427935(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_427a39(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_427acd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_427b5d(void);
int64_t function_427bc0(void);
int64_t function_427bc6(void);
int64_t function_427be5(void);
int64_t function_427c3d(void);
int64_t function_427c5c(void);
int64_t function_427c66(int64_t a1);
int64_t function_427d66(int64_t a1);
int64_t function_427d92(int64_t a1);
int64_t function_427e35(int64_t a1);
int64_t function_427e47(int64_t a1, int64_t a2, int64_t a3);
int64_t function_427e9e(int64_t a1);
int64_t function_427ebc(void);
int64_t function_427ef4(void);
int64_t function_427f20(int64_t a1, int64_t a2, int64_t a3);
int64_t function_427f61(int64_t a1, int64_t a2);
int64_t function_427f93(void);
int64_t function_427fa9(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_428111(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_428130(int64_t a1, int64_t a2, int64_t a3);
int64_t function_428143(void);
int64_t function_428174(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4281ad(void);
int64_t function_4281cf(void);
int64_t function_428200(void);
int64_t function_4282d5(void);
int64_t function_42832f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_42837a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4283a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4284b2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4284ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4284ee(void);
int64_t function_428502(void);
int64_t function_42855d(int64_t a1);
int64_t function_4285fc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5623abc2();
int64_t function_cd7c15();
int64_t function_cdc60();
int64_t function_ffffffff8fe9a08a();
int64_t function_ffffffff92c4327c();
int64_t function_ffffffffc3f6d852();
int64_t unknown_1f86c9e();
int64_t unknown_23e52b79();
int64_t unknown_33649b2b();
int64_t unknown_3acf08b9();
int64_t unknown_40ba8628();
int64_t unknown_4d359239();
int64_t unknown_e3fc501();
int64_t unknown_ffffffff85026168();
int64_t unknown_ffffffff89e67f0c();
int64_t unknown_ffffffff9b3635d2();
int64_t unknown_ffffffffa8b26a62();
int64_t unknown_ffffffffabd0be8e();
int64_t unknown_ffffffffabea2ee5();
int64_t unknown_ffffffffafd24170();
int64_t unknown_ffffffffc91db2cf();
int64_t unknown_ffffffffc9fc617d();
int64_t unknown_ffffffffca7175c5();
int64_t unknown_ffffffffd894c28b();
int64_t unknown_ffffffffd90fafb2();
int64_t unknown_ffffffffe8cdd6a4();
int64_t unknown_ffffffffec29feef();
int64_t unknown_ffffffffec402711();
int64_t unknown_fffffffff358e48f();

// Address range: 0x159f13 - 0x159f3f
int64_t function_159f13(int64_t a1) {
    // 0x159f13
    int64_t v1; // 0x159f13
    return function_cdc60(v1);
}

// Address range: 0x159f3f - 0x15a0c3
int64_t function_159f3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x159f3f
    return function_cdc60(a1);
}

// Address range: 0x15a0c3 - 0x15a1fe
int64_t function_15a0c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x15a0c3
    int64_t v1; // bp-48, 0x15a0c3
    int64_t v2 = (int64_t)&v1; // 0x15a17d
    int64_t v3 = v2 + 8; // 0x15a193
    int64_t * v4 = (int64_t *)v3; // 0x15a193
    *v4 = a7;
    v1 = v3;
    int64_t v5 = *v4; // 0x15a1a2
    *(int64_t *)(v2 - 8) = v5;
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v2 + 16); // 0x15a1af
    int64_t * v7 = (int64_t *)(v2 + 32); // 0x15a1af
    *v7 = *v6;
    *(int64_t *)(v2 + 56) = 310;
    int64_t v8 = *v6; // 0x15a1bc
    *v4 = v8;
    v1 = v8;
    int64_t * v9 = (int64_t *)(v2 + 24); // 0x15a1d1
    int64_t v10 = *v9; // 0x15a1d1
    *v6 = v10;
    *v4 = v10;
    int64_t v11 = *v7; // 0x15a1e0
    *v9 = v11;
    *v6 = v11;
    return function_cdc60(a1);
}

// Address range: 0x15a22c - 0x15a231
int64_t function_15a22c(void) {
    // 0x15a22c
    return function_2c96ea82();
}

// Address range: 0x15a263 - 0x15a264
int64_t function_15a263(void) {
    // 0x15a263
    int64_t result; // 0x15a263
    return result;
}

// Address range: 0x15a264 - 0x15a269
int64_t function_15a264(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x15a264
    int64_t v1; // 0x15a264
    char * v2 = (char *)(v1 - 127); // 0x15a264
    *v2 = *v2 | (char)a4;
    return function_15a271(a1, a2, a3, a4, v1, (int64_t)&g6);
}

// Address range: 0x15a26f - 0x15a271
int64_t function_15a26f(void) {
    // 0x15a26f
    int64_t v1; // 0x15a26f
    return v1 & -184;
}

// Address range: 0x15a271 - 0x15a310
int64_t function_15a271(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x15a271
    int64_t v1; // 0x15a271
    int64_t v2 = 0x100000000 * (v1 ^ a6) >> 32; // 0x15a274
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x15a280
    int64_t v4 = v2 - 16; // 0x15a289
    int64_t * v5 = (int64_t *)v4; // 0x15a289
    *v5 = a5;
    *v3 = v2 ^ v1;
    int64_t result = *(int64_t *)(v2 + 32); // 0x15a2a9
    *v3 = result;
    *v5 = result;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x15a2b0
    *v6 = result;
    int64_t * v7 = (int64_t *)(v2 + 16); // 0x15a2bc
    int64_t v8 = *v7; // 0x15a2bc
    *v6 = v8;
    *v5 = v4;
    *v3 = result;
    *v7 = *(int64_t *)v2;
    *v3 = v8;
    return result;
}

// Address range: 0x34ec85 - 0x34ec9a
int64_t function_34ec85(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34ec85
    int64_t v1; // 0x34ec85
    *(char *)a1 = (char)v1;
    bool v2; // 0x34ec85
    int64_t v3 = (v2 ? -1 : 1) + a1; // 0x34ec88
    int32_t * v4 = (int32_t *)(v3 + v1); // 0x34ec8e
    *v4 = *v4 + (int32_t)a3;
    return function_21d6504(v3);
}

// Address range: 0x34ec9a - 0x34ecaa
int64_t function_34ec9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34ec9a
    int64_t v1; // 0x34ec9a
    uint64_t v2 = v1;
    char * v3 = (char *)(v1 - 83); // 0x34ec9a
    *v3 = *v3 | (char)v2;
    char * v4 = (char *)(a2 + 0x6201e86d); // 0x34ec9e
    *v4 = *v4 - (char)(v1 / 256);
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x34ece9 - 0x34ed52
int64_t function_34ece9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x34ece9
    int64_t v1; // 0x34ece9
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a3;
    int64_t v3; // 0x34ece9
    *(char *)a3 = *(char *)&v3 | (char)(v1 / 256);
    float80_t v4; // 0x34ece9
    *(int16_t *)a1 = (int16_t)v4;
    unknown_e3fc501();
    int64_t v5 = unknown_ffffffff89e67f0c(); // 0x34ed06
    __asm_out(-8, (int32_t)(2 * v5 & 254 | v5 & 0xffffff00) - 0x17d72568);
    *(int64_t *)v1 = unknown_33649b2b();
    int64_t v6 = unknown_4d359239(); // 0x34ed33
    int32_t * v7 = (int32_t *)((2 * v1 & 0xfffffffe) - 23); // 0x34ed38
    *v7 = *v7 + (int32_t)a2;
    char * v8 = (char *)(a1 - 0x20e8d910); // 0x34ed3c
    *v8 = *v8 + (char)(((int32_t)v6 >> 31) / 256);
    uint64_t result = 256 * v2 & 256 ^ a4 & 0xb01901e8; // 0x34ed45
    unsigned char v9 = *(char *)(a1 - 122); // 0x34ed4a
    int32_t * v10 = (int32_t *)result; // 0x34ed4e
    *v10 = 0x80000000 * (int32_t)(v9 <= (char)(result / 256)) | *v10 / 2;
    return result;
}

// Address range: 0x34ed52 - 0x34ed93
int64_t function_34ed52(int64_t a1, int64_t a2) {
    int64_t v1 = a1 & 0xe685ea0c; // 0x34ed5a
    int64_t v2; // 0x34ed52
    __asm_out_133(-49, *(char *)(a2 - 0x3fe175a) + (char)v2 | 32);
    unknown_ffffffff85026168();
    uint64_t v3 = unknown_23e52b79(); // 0x34ed73
    int32_t * v4 = (int32_t *)(v3 + 85); // 0x34ed78
    *v4 = *v4 + (int32_t)v1;
    int64_t v5 = v3 & -256 | (int64_t)*(char *)(v3 % 256 + v2); // 0x34ed7b
    int32_t * v6 = (int32_t *)v1; // 0x34ed7d
    uint32_t v7 = *v6; // 0x34ed7d
    uint32_t v8 = v7 + (int32_t)a2; // 0x34ed7d
    *v6 = v8;
    int32_t * v9 = (int32_t *)v5; // 0x34ed7f
    *v9 = *v9 + 0x6001e8b8 + (int32_t)(v8 < v7);
    return v5 + 0xdb8cf9c7 & 0xffffffff;
}

// Address range: 0x34ed94 - 0x34ed9d
int64_t function_34ed94(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34ed94
    int64_t v1; // 0x34ed94
    int64_t result = v1 + 0x93adf0e4 & 0xffffffff; // 0x34ed94
    char * v2 = (char *)(result - 54); // 0x34ed99
    *v2 = *v2 + (char)a3;
    return result;
}

// Address range: 0x34ed9d - 0x34edb6
int64_t function_34ed9d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 - 0xfe174e); // 0x34ed9d
    int64_t v2; // 0x34ed9d
    *v1 = *v1 + (char)v2;
    int64_t v3; // 0x34ed9d
    __asm_outsb((int16_t)a3, *(char *)&v3);
    return 0x7a358080;
}

// Address range: 0x34edd9 - 0x34ee1c
int64_t function_34edd9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int32_t * v2 = (int32_t *)(a2 + 0x4701e8ba); // 0x34edd9
    int32_t v3 = a3; // 0x34edd9
    *v2 = *v2 + v3;
    int64_t v4; // 0x34edd9
    int32_t * v5 = (int32_t *)(v4 + 0x3a81d741); // 0x34ede3
    *v5 = *v5 | v3;
    int64_t v6 = unknown_ffffffffec29feef(); // 0x34ede9
    int64_t v7 = v6 & -253; // 0x34edf1
    char * v8 = (char *)(a4 + 0x19080988); // 0x34edf3
    *v8 = *v8 - (char)v7;
    int32_t * v9 = (int32_t *)(v7 + 11); // 0x34edfb
    *v9 = *v9 + (int32_t)a1;
    int32_t v10 = v7; // 0x34edfe
    __asm_out(57, v10);
    __asm_out(-120, v10);
    int64_t v11 = v6 & 0xffffff03 ^ 0xe85bd12f; // 0x34ee03
    int32_t * v12 = (int32_t *)(2 * a2 - 0x69b39f85 + v4); // 0x34ee08
    uint32_t v13 = *v12; // 0x34ee08
    uint32_t v14 = v13 + (int32_t)v4; // 0x34ee08
    *v12 = v14;
    unsigned char v15 = *(char *)((v11 & 47) + v4); // 0x34ee0f
    unsigned char v16 = *(char *)&v1; // 0x34ee10
    unsigned char v17 = v16 + (char)(v4 / 256); // 0x34ee10
    unsigned char v18 = v17 + (char)(v14 < v13); // 0x34ee10
    bool v19 = v14 < v13 ? v18 <= v16 : v17 < v16; // 0x34ee10
    *(char *)v1 = v18;
    uint32_t v20 = (int32_t)(v11 & 0xffffff00 | (int64_t)v15); // 0x34ee12
    uint32_t v21 = v20 + 0x3555612e + (int32_t)v19; // 0x34ee12
    int32_t v22 = v19 ? v21 <= v20 : v20 > 0xcaaa9ed1 ? 0x636101e9 : 0x636101e8; // 0x34ee17
    return v21 - v22;
}

// Address range: 0x34ee2a - 0x34ee4f
int64_t function_34ee2a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x34ee2a
    int64_t v1; // 0x34ee2a
    uint32_t v2 = (int32_t)v1; // 0x34ee2a
    bool v3; // 0x34ee2a
    uint32_t v4 = v3 ? 0x1e8013e : 0x1e8013d; // 0x34ee2a
    uint32_t v5 = v2 - v4; // 0x34ee2a
    int32_t * v6 = (int32_t *)(v1 + 2 * v1); // 0x34ee31
    *v6 = *v6 + (int32_t)a3;
    int32_t * v7 = (int32_t *)(a2 - 0x7d7ca7cf); // 0x34ee3b
    *v7 = *v7 - (int32_t)a4;
    return a4 / 256 + (int64_t)v5 + (int64_t)(v3 | v4 > v2) & 208 | (int64_t)(v5 & -0x4b72c200);
}

// Address range: 0x34ee52 - 0x34ee56
int64_t function_34ee52(int64_t a1) {
    // 0x34ee52
    int64_t v1; // 0x34ee52
    return v1 & 0xffffffff;
}

// Address range: 0x34eea1 - 0x34eed1
int64_t function_34eea1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x1fec2ba); // 0x34eea4
    int64_t v2; // 0x34eea1
    *v1 = *v1 - (int32_t)v2;
    *(int32_t *)(a3 + 0x7f559a17) = (int32_t)v2;
    int32_t v3 = __asm_in((int16_t)a3); // 0x34eeb2
    int64_t v4 = v3; // 0x34eeb2
    int64_t v5; // 0x34eea1
    *(char *)a1 = *(char *)&v5;
    bool v6; // 0x34eea1
    int64_t v7 = v6 ? -1 : 1; // 0x34eeb5
    int64_t v8 = v7 + a1; // 0x34eeb5
    int64_t v9 = v7 + a2; // 0x34eeb5
    unsigned char v10 = (char)v3; // 0x34eeb6
    unsigned char v11 = *(char *)v4 + v10; // 0x34eeb6
    int64_t v12 = v4 & -256 | (int64_t)v11; // 0x34eeb6
    int32_t * v13 = (int32_t *)(8 * v12 + v8); // 0x34eeb8
    *v13 = *v13 - (v11 < v10 ? 64 : 63);
    char * v14 = (char *)v12; // 0x34eebe
    *v14 = *v14 + v11;
    char * v15 = (char *)v9; // 0x34eec5
    *v15 = (char)a3;
    return function_20a1b31a(v8, v9, a3 & -256 | (int64_t)*v15);
}

// Address range: 0x34ef6f - 0x34ef9f
int64_t function_34ef6f(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = __asm_in_134(-128); // 0x34ef6f
    int64_t v2; // 0x34ef6f
    int64_t v3 = a3 & -256 | (int64_t)(__readgsbyte(v2 - 124) + (char)a3 + (char)(v1 > 0x3ffe1782)); // 0x34ef76
    int32_t * v4 = (int32_t *)(a2 - 0x45fe1764); // 0x34ef7d
    *v4 = *v4 - 0xffe7177;
    int64_t v5 = unknown_fffffffff358e48f(); // 0x34ef89
    *(int32_t *)-0x178bf9f16d2e0fd4 = (int32_t)v5;
    int64_t v6; // 0x34ef6f
    *(int32_t *)a2 = *(int32_t *)&v6 + (int32_t)v3;
    __asm_out_135((int16_t)v3, (char)v5);
    return function_cd7c15();
}

// Address range: 0x34ef9f - 0x34efb5
int64_t function_34ef9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34ef9f
    int64_t v1; // 0x34ef9f
    *(char *)a1 = (char)v1;
    bool v2; // 0x34ef9f
    int64_t v3 = v2 ? -1 : 1; // 0x34efa8
    int64_t result = unknown_ffffffffd90fafb2(v3 + a1, v3 + a2); // 0x34efac
    int64_t v4; // 0x34ef9f
    int64_t v5 = v4;
    *(char *)v5 = *(char *)&v4 + (char)v5;
    return result;
}

// Address range: 0x34efb9 - 0x34efba
int64_t function_34efb9(void) {
    // 0x34efb9
    int64_t result; // 0x34efb9
    return result;
}

// Address range: 0x34f030 - 0x34f033
int64_t function_34f030(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x34f030
    int64_t result; // 0x34f030
    return result;
}

// Address range: 0x34f067 - 0x34f068
int64_t function_34f067(int64_t a1) {
    // 0x34f067
    int64_t result; // 0x34f067
    return result;
}

// Address range: 0x34f070 - 0x34f073
int64_t function_34f070(void) {
    // 0x34f070
    int64_t result; // 0x34f070
    return result;
}

// Address range: 0x34f0d9 - 0x34f0da
int64_t function_34f0d9(void) {
    // 0x34f0d9
    int64_t result; // 0x34f0d9
    return result;
}

// Address range: 0x34f10d - 0x34f10f
int64_t function_34f10d(void) {
    // 0x34f10d
    return function_34f0d9();
}

// Address range: 0x34f11c - 0x34f11e
int64_t function_34f11c(void) {
    // 0x34f11c
    int64_t result; // 0x34f11c
    return result;
}

// Address range: 0x34f13c - 0x34f13d
int64_t function_34f13c(void) {
    // 0x34f13c
    int64_t result; // 0x34f13c
    return result;
}

// Address range: 0x34f1cb - 0x34f1cc
int64_t function_34f1cb(int64_t a1) {
    // 0x34f1cb
    int64_t result; // 0x34f1cb
    return result;
}

// Address range: 0x34f1d6 - 0x34f1d7
int64_t function_34f1d6(int64_t a1) {
    // 0x34f1d6
    int64_t result; // 0x34f1d6
    return result;
}

// Address range: 0x34f20e - 0x34f20f
int64_t function_34f20e(void) {
    // 0x34f20e
    int64_t result; // 0x34f20e
    return result;
}

// Address range: 0x34f22a - 0x34f282
int64_t function_34f22a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x34f22a
    int64_t v1; // 0x34f22a
    uint64_t v2 = v1;
    char * v3 = (char *)(v1 + 55); // 0x34f22a
    char v4 = a4; // 0x34f22a
    *v3 = *v3 + v4;
    unsigned char v5 = (char)a3; // 0x34f233
    int64_t v6; // 0x34f22a
    unsigned char v7 = *(char *)&v6 + v5; // 0x34f233
    int64_t v8 = a3 & -256; // 0x34f233
    unsigned char v9 = v4 - *(char *)(a1 - 28) + (char)(v7 < v5); // 0x34f235
    int64_t v10; // 0x34f22a
    unsigned char v11 = *(char *)&v10; // 0x34f238
    *(int32_t *)a1 = __asm_insd((int16_t)(v8 | (int64_t)v7));
    *(int32_t *)-0x6b78fe178f7c5e1c = (int32_t)(v1 & 0xffffff00 | (int64_t)v11);
    int64_t v12 = a4 & -0x10000 | (int64_t)v9 | 256 * (int64_t)((char)(a4 / 256) - v11); // 0x34f250
    int32_t * v13 = (int32_t *)v12; // 0x34f252
    *v13 = *v13 + (int32_t)v2;
    int64_t v14 = unknown_ffffffffa8b26a62(); // 0x34f25c
    int32_t * v15 = (int32_t *)v14; // 0x34f261
    int32_t v16 = *v15 + (int32_t)a1; // 0x34f261
    *v15 = v16;
    int64_t v17 = v12 - 1; // 0x34f263
    int64_t v18 = v14; // 0x34f263
    if (v17 != 0 && v16 != 0) {
        v18 = function_34f20e();
    }
    int64_t v19 = v8 | (int64_t)(v9 & v7); // 0x34f254
    *(char *)-0x1704cd53 = *(char *)-0x1704cd53 ^ (char)v17;
    int32_t v20 = v1; // 0x34f273
    if ((2 * v20 ^ v20) < 0) {
        // 0x34f2b3
        return v19 + (v2 / 2 % 128 | v2 & 0xffffff00) & 0xffffffff;
    }
    // 0x34f277
    return (int64_t)(*(int32_t *)v19 * (int32_t)v18);
}

// Address range: 0x34f485 - 0x34f490
int64_t function_34f485(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffffd894c28b(a1, a2, a3, a4); // 0x34f485
    int64_t v1; // 0x34f485
    int32_t * v2 = (int32_t *)((uint64_t)v1 % 256 | a3); // 0x34f48e
    *v2 = *v2 + (int32_t)v1;
    return result;
}

// Address range: 0x34f497 - 0x34f498
int64_t function_34f497(void) {
    // 0x34f497
    int64_t result; // 0x34f497
    return result;
}

// Address range: 0x34f4b1 - 0x34f4b2
int64_t function_34f4b1(void) {
    // 0x34f4b1
    int64_t result; // 0x34f4b1
    return result;
}

// Address range: 0x34f4b3 - 0x34f4be
int64_t function_34f4b3(void) {
    // 0x34f4b3
    unknown_3acf08b9();
    return function_21cf65b();
}

// Address range: 0x34f4be - 0x34f653
int64_t function_34f4be(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x34f4be
    bool v1; // 0x34f4be
    int64_t v2 = v1 ? -4 : 4; // 0x34f4be
    int64_t v3 = v2 + a1; // 0x34f4be
    int64_t v4 = v2 + a2; // 0x34f4be
    int32_t * v5 = (int32_t *)(v4 + 44); // 0x34f4bf
    int64_t v6; // 0x34f4be
    *v5 = (int32_t)v6;
    __asm_out(-22, *v5);
    char * v7 = (char *)v4; // 0x34f4c4
    *v7 = *v7 | (char)(a3 / 256);
    int64_t v8 = unknown_ffffffffc91db2cf(); // 0x34f4c9
    float80_t v9; // 0x34f4be
    *(int64_t *)((v8 + 0xbf967023 & 0xffffffff) - 101) = (int64_t)v9;
    int64_t v10 = unknown_ffffffffabea2ee5(); // 0x34f4df
    uint64_t v11 = (v10 & 0xffffffff) * (int64_t)*(int32_t *)(v3 - 0x1769b5ff + 2 * v10); // 0x34f4e4
    uint64_t v12 = v11 / 0x100000000; // 0x34f4e4
    int32_t * v13 = (int32_t *)(a4 - 8); // 0x34f4eb
    uint32_t v14 = *v13; // 0x34f4eb
    uint32_t v15 = v14 + (int32_t)v6; // 0x34f4eb
    *v13 = v15;
    int64_t v16 = v11 + 0x6603d8c3 + (int64_t)(v15 < v14); // 0x34f4ee
    uint64_t v17 = a4 / 256; // 0x34f4f3
    uint64_t v18 = v16 & 0xffffff00; // 0x34f4f3
    int64_t v19 = (v16 - v17) % 256 | v18; // 0x34f4f3
    int32_t * v20 = (int32_t *)(v19 + 39); // 0x34f4f6
    uint32_t v21 = *v20; // 0x34f4f6
    uint32_t v22 = v21 + (int32_t)v19; // 0x34f4f6
    *v20 = v22;
    char v23 = *(char *)(a4 + 74); // 0x34f4f9
    int64_t v24 = 256 * (int64_t)((char)(v18 / 256) - v23 + (char)(v22 < v21)) | v19 & 0xffff00ff; // 0x34f4f9
    int32_t * v25 = (int32_t *)(v12 - 99); // 0x34f501
    *v25 = *v25 + (int32_t)a4;
    *(int32_t *)v24 = (int32_t)v24;
    __asm_in_136(-20);
    if (a4 == 0) {
        function_34f497();
    }
    int64_t v26 = unknown_ffffffffec402711(); // 0x34f50b
    char * v27 = (char *)v12; // 0x34f510
    *v27 = *v27 >> 1;
    int64_t result = v26 & 0xe8d1e3af; // 0x34f512
    int32_t * v28 = (int32_t *)(result - 0x4462e3d8); // 0x34f517
    int32_t v29 = *v28; // 0x34f517
    int32_t v30 = v6; // 0x34f517
    int32_t v31 = v29 + v30; // 0x34f517
    *v28 = v31;
    if (((v31 ^ v29) & (v31 ^ v30)) < 0) {
        // 0x34f559
        *(char *)(v3 + v2) = (char)result;
        return result;
    }
    int32_t v32 = __asm_in_134(-126); // 0x34f579
    int32_t * v33 = (int32_t *)v4; // 0x34f57d
    *v33 = *v33 + (int32_t)v6;
    return v17 % 256 | (int64_t)(v32 & -256);
}

// Address range: 0x34f665 - 0x34f66a
int64_t function_34f665(void) {
    // 0x34f665
    return function_159f0cbe();
}

// Address range: 0x34f684 - 0x34f720
int64_t function_34f684(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x34f684
    int64_t v1; // 0x34f684
    int64_t v2 = v1;
    char v3 = v2;
    char v4 = 2 * v3; // 0x34f684
    *(char *)v2 = v4;
    int64_t v5 = a3 & -0xff01; // 0x34f68d
    if (v4 < 0 == (v4 ^ v3) < 0) {
        int32_t * v6 = (int32_t *)((v5 | (int64_t)&g5 & -0xff01 | (int64_t)&g4) - 43); // 0x34f6dc
        *v6 = *v6 + (int32_t)a4;
        int32_t * v7 = (int32_t *)(v2 - 0xf5fc78c); // 0x34f6e9
        *v7 = *v7 + (int32_t)v2;
        return (v2 + 168) % 256 | v2 & -256;
    }
    int64_t v8 = v5 | (int64_t)&g5; // 0x34f68d
    uint64_t v9 = 256 * v2 & 0xff00 ^ a4; // 0x34f694
    int64_t v10 = 8 * v1; // 0x34f696
    int32_t * v11 = (int32_t *)(v10 + 0x5f099f0 + v2); // 0x34f696
    *v11 = *v11 + (int32_t)v1;
    unknown_ffffffffe8cdd6a4();
    int32_t * v12 = (int32_t *)(a1 - 0x2bfec298); // 0x34f6a3
    *v12 = *v12 + (int32_t)a1;
    int64_t v13 = __asm_sti(); // 0x34f6a9
    int64_t v14 = v13 ^ v9 / 256 % 256; // 0x34f6aa
    unsigned char v15 = *(char *)-0x57c920bf; // 0x34f6ac
    *(char *)-0x57c920bf = v15 + 91;
    char * v16 = (char *)v14; // 0x34f6b3
    unsigned char v17 = *v16; // 0x34f6b3
    unsigned char v18 = v17 + (char)a4; // 0x34f6b3
    unsigned char v19 = v18 + (char)(v15 > 164); // 0x34f6b3
    *v16 = v19;
    int32_t * v20 = (int32_t *)(v8 + 0x2e2b403e); // 0x34f6c6
    int32_t v21 = a2; // 0x34f6c6
    int32_t v22 = *v20 + v21; // 0x34f6c6
    *v20 = v22;
    if (v22 != 0) {
        // 0x34f6ce
        *(char *)0x2b36df28 = *(char *)0x2b36df28 + (char)(v1 / 256);
        return v9 & 0xffffffff;
    }
    bool v23 = v15 > 164 ? v19 <= v17 : v18 < v17; // 0x34f6b3
    *(int32_t *)0x79947f54 = *(int32_t *)0x79947f54 + (int32_t)v8;
    int32_t * v24 = (int32_t *)(v8 + 0x12543b9c + v10); // 0x34f6ff
    *v24 = *v24 + v21;
    bool v25; // 0x34f684
    char v26 = *(char *)(a1 + 0x3a01e8bd + (v25 ? -1 : 1)); // 0x34f706
    int32_t * v27 = (int32_t *)(a2 - 0x7f7e55f7); // 0x34f715
    *v27 = *v27 + (int32_t)v1;
    return (v13 & 0x58412600 | (int64_t)(((char)(v14 - (int64_t)!v23) - v26) % 2) | 0xa7bed944) + 0xf601e88c & 0xffc1e7d1;
}

// Address range: 0x34f765 - 0x34f791
int64_t function_34f765(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34f765
    *(int32_t *)a1 = (int32_t)unknown_ffffffffafd24170();
    bool v1; // 0x34f765
    int64_t v2 = (v1 ? -4 : 4) + a1; // 0x34f76f
    unknown_1f86c9e(v2);
    int64_t v3 = unknown_ffffffffc9fc617d(); // 0x34f777
    char v4 = *(char *)(a2 - 49); // 0x34f77c
    char * v5 = (char *)v2; // 0x34f77f
    char v6 = *v5; // 0x34f77f
    *v5 = v6 | (char)((256 * (int16_t)v3 >> 8) * (int16_t)v4 / 256);
    return unknown_ffffffffabd0be8e() & -256 | (int64_t)__asm_in_138((int16_t)a3);
}

// Address range: 0x34f7e4 - 0x34f7e9
int64_t function_34f7e4(void) {
    // 0x34f7e4
    return function_ffffffff92c4327c();
}

// Address range: 0x34f7f2 - 0x34f7fa
int64_t function_34f7f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x6015415b); // 0x34f7f2
    *v1 = *v1 + (int32_t)a2;
    return a4 & 0xffffffff;
}

// Address range: 0x34f8b3 - 0x34f8dc
int64_t function_34f8b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 - 112); // 0x34f8b3
    uint32_t v2 = *v1; // 0x34f8b3
    uint32_t v3 = v2 + (int32_t)a2; // 0x34f8b3
    *v1 = v3;
    char * v4 = (char *)a3; // 0x34f8b6
    *v4 = (char)a4;
    uint32_t v5 = (int32_t)a4 % 32; // 0x34f8b8
    int64_t v6; // 0x34f8b3
    if (v5 != 0) {
        int32_t * v7 = (int32_t *)(8 * v6 + 0x35c3f207); // 0x34f8b8
        uint32_t v8 = *v7; // 0x34f8b8
        *v7 = (int32_t)(v3 < v2) << 32 - v5 | v8 >> v5 | (int32_t)((int64_t)v8 << (int64_t)(33 - v5));
    }
    unknown_ffffffffca7175c5();
    bool v9; // 0x34f8b3
    int64_t v10 = (v9 ? -1 : 1) + a1; // 0x34f8c4
    *v4 = (char)(v6 / 256);
    int32_t * v11 = (int32_t *)v10; // 0x34f8c9
    *v11 = *v11 + (int32_t)a3;
    unknown_ffffffff9b3635d2(v10);
    return a2 & 0xffffffff;
}

// Address range: 0x34f8f8 - 0x34f91a
int64_t function_34f8f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a2 + 0x2e066047 + 8 * a2); // 0x34f8fe
    int64_t v2; // 0x34f8f8
    *v1 = *v1 + (char)v2;
    *(char *)0x6f14000a8801e82e = (char)v2;
    int32_t * v3 = (int32_t *)(a4 - 127); // 0x34f913
    *v3 = *v3 + (int32_t)a2;
    return v2 + 0xe8973c36 & 0xffffffff;
}

// Address range: 0x34f92c - 0x34f92d
int64_t function_34f92c(int64_t a1) {
    // 0x34f92c
    int64_t result; // 0x34f92c
    return result;
}

// Address range: 0x34f9a8 - 0x34f9ad
int64_t function_34f9a8(void) {
    // 0x34f9a8
    return function_5623abc2();
}

// Address range: 0x34fa1e - 0x34fa36
int64_t function_34fa1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34fa1e
    int64_t v1; // 0x34fa1e
    int32_t * v2 = (int32_t *)(8 * v1 - 0x17bfe1c6); // 0x34fa24
    *v2 = *v2 + (int32_t)a3;
    int32_t * v3 = (int32_t *)(a1 + 124); // 0x34fa2b
    *v3 = *v3 + (int32_t)a4;
    return (int64_t)*(int32_t *)(a1 + 0x7d49bf6);
}

// Address range: 0x42761f - 0x427624
int64_t function_42761f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42761f
    int64_t result; // 0x42761f
    return result;
}

// Address range: 0x42764a - 0x427659
int64_t function_42764a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42764a
    *(int32_t *)a2 = (int32_t)a2;
    int64_t result; // 0x42764a
    __asm_out(-79, (int32_t)result);
    return result;
}

// Address range: 0x4276b3 - 0x4277fd
int64_t function_4276b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a2;
    int64_t result; // 0x4276b3
    *(int32_t *)a1 = (int32_t)(result ^ result);
    char v2 = result; // 0x4276be
    if (v2 < 13) {
        // 0x42770d
        __asm_out_133(-88, v2);
        char * v3 = (char *)(a4 + 121); // 0x42770f
        *v3 = *v3 + (char)a3;
        return result;
    }
    char v4 = __asm_in_136(101); // 0x4276c2
    int64_t v5 = result | (int64_t)v4; // 0x4276c2
    int64_t v6 = (89 * (v5 & -256 | (int64_t)(v4 + (char)result)) & 0x3a46 | v5 & 0xa0550000) + 0xa2b90ef1; // 0x4276cf
    *(int32_t *)(v6 & 0xe3ff7ff7) = (int32_t)result;
    *(int32_t *)v1 = (int32_t)v6;
    return (int64_t)(*(int32_t *)&v1 + 0x67ea9663);
}

// Address range: 0x427837 - 0x427840
int64_t function_427837(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x427837
    int64_t result; // 0x427837
    return result;
}

// Address range: 0x427886 - 0x427887
int64_t function_427886(int64_t a1) {
    // 0x427886
    int64_t result; // 0x427886
    return result;
}

// Address range: 0x427912 - 0x427920
int64_t function_427912(void) {
    // 0x427912
    int64_t v1; // 0x427912
    *(int32_t *)-0x34972b84ba3ffa5 = (int32_t)v1;
    return v1 ^ 26;
}

// Address range: 0x427935 - 0x4279c2
int64_t function_427935(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x427935
    bool v1; // 0x427935
    if (v1) {
        // 0x4279b6
        __asm_int3();
        return unknown_40ba8628(a5, 0x363c6bee);
    }
    // 0x427937
    int64_t result; // 0x427935
    return result;
}

// Address range: 0x427a39 - 0x427ab6
int64_t function_427a39(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x427a39
    int64_t v1; // 0x427a39
    int64_t v2 = v1;
    bool v3; // 0x427a39
    int64_t v4 = v3 ? -4 : 4; // 0x427a40
    int64_t v5 = v4 + a1; // 0x427a40
    int64_t v6 = v4 + a2; // 0x427a40
    int64_t v7 = v2 + 0x63eea0cb; // 0x427a41
    char v8 = *(char *)v6; // 0x427a4d
    char v9 = *(char *)v5; // 0x427a4d
    int64_t v10 = v3 ? -1 : 1; // 0x427a4d
    int64_t v11 = v6 + v10; // 0x427a4d
    if (((v8 - v9 ^ v8) & (v9 ^ v8)) < 0) {
        // 0x427a50
        *(int32_t *)(v10 + 25 + v5) = (int32_t)v11;
        *(char *)0xb765b7f070a4a50 = (char)v7;
        return v7 & 0xffffffff;
    }
    uint32_t v12 = (int32_t)v6 + (int32_t)((int32_t)v2 < 0x9c115f35); // 0x427a47
    char v13 = *(char *)(v6 + v1); // 0x427a49
    bool v14 = (int32_t)v2 < 0x9c115f35 ? v12 != -1 | (int32_t)((int32_t)v2 < 0x9c115f35) + 0x20666ddc - v12 > 0x20666ddc : v12 > 0x20666ddc; // 0x427a47
    __asm_out_137(256 * (int16_t)((char)v14 + (char)(a3 / 256) + v13) | 28, (int32_t)v7);
    return (int64_t)*(int32_t *)v11;
}

// Address range: 0x427acd - 0x427b4e
int64_t function_427acd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x427acd
    int64_t v1; // 0x427acd
    int64_t v2 = v1;
    int64_t v3 = a3;
    *(char *)a4 = (char)a4 - (char)v1 + (char)(((char)v2 ^ -4) < 20);
    int32_t v4 = *(int32_t *)&v3 + (int32_t)((v2 + 20) % 256 | v2 & 0xffffff00); // 0x427ad8
    int64_t result = v4; // 0x427ad8
    __asm_out(1, v4);
    if (v4 >= 0) {
        // 0x427b4b
        return result;
    }
    // 0x427ade
    int64_t v5; // 0x427acd
    *(char *)v5 = *(char *)&v5 + (char)(a4 / 256);
    return result & 0xffffff0d;
}

// Address range: 0x427b5d - 0x427b62
int64_t function_427b5d(void) {
    // 0x427b5d
    return function_426fb588();
}

// Address range: 0x427bc0 - 0x427bc3
int64_t function_427bc0(void) {
    // 0x427bc0
    int64_t result; // 0x427bc0
    return result;
}

// Address range: 0x427bc6 - 0x427bcb
int64_t function_427bc6(void) {
    // 0x427bc6
    return function_25344fe7();
}

// Address range: 0x427be5 - 0x427be6
int64_t function_427be5(void) {
    // 0x427be5
    int64_t result; // 0x427be5
    return result;
}

// Address range: 0x427c3d - 0x427c3f
int64_t function_427c3d(void) {
    // 0x427c3d
    return function_427be5();
}

// Address range: 0x427c5c - 0x427c60
int64_t function_427c5c(void) {
    // 0x427c5c
    int64_t result; // 0x427c5c
    return result;
}

// Address range: 0x427c66 - 0x427c67
int64_t function_427c66(int64_t a1) {
    // 0x427c66
    int64_t result; // 0x427c66
    return result;
}

// Address range: 0x427d66 - 0x427d69
int64_t function_427d66(int64_t a1) {
    // 0x427d66
    int64_t result; // 0x427d66
    return result;
}

// Address range: 0x427d92 - 0x427dc0
int64_t function_427d92(int64_t a1) {
    // 0x427d92
    int64_t v1; // 0x427d92
    return v1 & -256 | 63;
}

// Address range: 0x427e35 - 0x427e38
int64_t function_427e35(int64_t a1) {
    // 0x427e35
    int64_t result; // 0x427e35
    return result;
}

// Address range: 0x427e47 - 0x427e4f
int64_t function_427e47(int64_t a1, int64_t a2, int64_t a3) {
    // 0x427e47
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x427e47
    return v1 & -0xff01 | (int64_t)&g2;
}

// Address range: 0x427e9e - 0x427ea3
int64_t function_427e9e(int64_t a1) {
    // 0x427e9e
    int64_t v1; // 0x427e9e
    int64_t v2 = v1;
    return (v2 + 219) % 256 | v2 & -256;
}

// Address range: 0x427ebc - 0x427ebf
int64_t function_427ebc(void) {
    // 0x427ebc
    int64_t result; // 0x427ebc
    return result;
}

// Address range: 0x427ef4 - 0x427ef5
int64_t function_427ef4(void) {
    // 0x427ef4
    int64_t result; // 0x427ef4
    return result;
}

// Address range: 0x427f20 - 0x427f2e
int64_t function_427f20(int64_t a1, int64_t a2, int64_t a3) {
    // 0x427f20
    int64_t v1; // 0x427f20
    uint64_t v2 = v1;
    bool v3; // 0x427f20
    int64_t v4 = v3 ? -1 : 1; // 0x427f20
    *(char *)a3 = (char)(v2 / 256) + (char)v1 + (char)((char)v2 > 156);
    return function_ffffffffc3f6d852(v4 + a1, v4 + a2);
}

// Address range: 0x427f61 - 0x427f65
int64_t function_427f61(int64_t a1, int64_t a2) {
    // 0x427f61
    int64_t result; // 0x427f61
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x427f93 - 0x427f94
int64_t function_427f93(void) {
    // 0x427f93
    int64_t result; // 0x427f93
    return result;
}

// Address range: 0x427fa9 - 0x42809f
int64_t function_427fa9(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x427fa9
    int64_t v1; // 0x427fa9
    uint64_t v2 = v1;
    int64_t v3 = a2;
    bool v4; // 0x427fa9
    if (v4) {
        int32_t * v5 = (int32_t *)(a4 - 0x319aca8f); // 0x42800f
        *v5 = (int32_t)v4 + (int32_t)v1 + *v5;
        int64_t result = v1 & 0xbeef4e58 ^ 0x4110b1ff; // 0x42801b
        if (*(char *)(a1 + 95) <= -1 - (char)v2) {
            // 0x42802a
            return result;
        }
        char v6 = *(char *)&v3;
        __asm_outsb((int16_t)a3, v6);
        return result & 0xffffff00 | (int64_t)(v6 & -88);
    }
    int64_t v7 = a5; // 0x427ff5
    if (a4 != 1 == *(char *)(a3 + 12) == (char)(v2 / 256)) {
        v7 = function_427f93();
    }
    // 0x427ff7
    return v7 & -256 | a2 % 256;
}

// Address range: 0x428111 - 0x42812e
int64_t function_428111(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x428111
    int64_t result; // 0x428111
    bool v1; // 0x428111
    if (v1) {
        // 0x42812d
        *(int32_t *)a1 = __asm_insd((int16_t)a3);
        return result;
    }
    // 0x428113
    return result;
}

// Address range: 0x428130 - 0x428141
int64_t function_428130(int64_t a1, int64_t a2, int64_t a3) {
    // 0x428130
    *(char *)a1 = __asm_insb((int16_t)a3);
    return function_3caa57c6();
}

// Address range: 0x428143 - 0x428151
int64_t function_428143(void) {
    // 0x428143
    int64_t result; // 0x428143
    int32_t * v1 = (int32_t *)(result + 68); // 0x428145
    *v1 = *v1 | -113;
    return result;
}

// Address range: 0x428174 - 0x428179
int64_t function_428174(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x428174
    int64_t v1; // 0x428174
    unsigned char v2 = (char)v1;
    unsigned char v3 = v2 + (char)a4; // 0x428174
    *(char *)a2 = v3;
    int64_t result; // 0x428174
    if (v3 < v2 || v3 == 0) {
        result = function_4281ad();
    }
    // 0x428178
    return result;
}

// Address range: 0x4281ad - 0x4281af
int64_t function_4281ad(void) {
    // 0x4281ad
    int64_t v1; // 0x4281ad
    return v1 | 60;
}

// Address range: 0x4281cf - 0x4281d6
int64_t function_4281cf(void) {
    // 0x4281cf
    return function_ffffffff8fe9a08a();
}

// Address range: 0x428200 - 0x428202
int64_t function_428200(void) {
    // 0x428200
    int64_t result; // 0x428200
    return result;
}

// Address range: 0x4282d5 - 0x4282d6
int64_t function_4282d5(void) {
    // 0x4282d5
    int64_t result; // 0x4282d5
    return result;
}

// Address range: 0x42832f - 0x428379
int64_t function_42832f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x42832f
    int64_t v1; // 0x42832f
    int32_t * v2 = (int32_t *)(2 * a3 + 104 + v1 & 0xffffffff); // 0x428367
    int32_t v3 = *v2 & (int32_t)a3; // 0x428367
    *v2 = v3;
    if (v3 < 1) {
        // 0x428352
        return function_4282d5() + 0xa6b774c6 & 0xffffffff;
    }
    // 0x428371
    return a3 & 0xffff00ff | (int64_t)&g1 & 0xffffffff;
}

// Address range: 0x42837a - 0x428396
int64_t function_42837a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42837a
    int64_t v1; // 0x42837a
    *(char *)-0x556051bf244faf93 = (char)v1;
    int64_t v2 = a4 - 1; // 0x428383
    int64_t v3; // 0x42837a
    if (v2 != 0) {
        v3 = function_4283a9(a1, a2, a3, v2, v1, (int64_t)&g6);
    }
    // 0x428386
    *(char *)a2 = -(char)a2;
    return (int64_t)(-0x704d2ff4 * *(int32_t *)(v3 - 0x321d6c9e));
}

// Address range: 0x4283a9 - 0x428461
int64_t function_4283a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4283a9
    int64_t v1; // 0x4283a9
    *(int32_t *)a1 = (int32_t)v1;
    return v1 & 0xffffffff;
}

// Address range: 0x4284b2 - 0x4284c4
int64_t function_4284b2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4284b2
    *(int16_t *)0xae7e375f = *(int16_t *)0xae7e375f + 30;
    return function_4284ee();
}

// Address range: 0x4284ec - 0x4284ee
int64_t function_4284ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4284ec
    int64_t result; // 0x4284ec
    return result;
}

// Address range: 0x4284ee - 0x4284fc
int64_t function_4284ee(void) {
    // 0x4284ee
    bool v1; // 0x4284ee
    bool v2 = v1;
    int64_t v3; // 0x4284ee
    uint32_t v4 = (int32_t)v3;
    uint32_t v5 = (int32_t)v2 + v4; // 0x4284ee
    bool v6 = v2 ? v5 != -1 | (int32_t)v2 + v4 - v5 > v4 : v5 > v4; // 0x4284ee
    uint32_t result = (int32_t)__asm_hlt() - (int32_t)v3 + (int32_t)v6; // 0x4284f2
    __asm_out_133(78, (char)result);
    return result;
}

// Address range: 0x428502 - 0x428507
int64_t function_428502(void) {
    // 0x428502
    return function_3f8eb668();
}

// Address range: 0x42855d - 0x428563
int64_t function_42855d(int64_t a1) {
    // 0x42855d
    int64_t v1; // 0x42855d
    return v1 & 0xffffffff ^ 0x3c157cc8;
}

// Address range: 0x4285fc - 0x428601
int64_t function_4285fc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4285fc
    int64_t result; // 0x4285fc
    return result;
}
