/*
 * Targeted RetDec C for native executable gap queue batch 1001.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x123f46-0x124146 rank=- name=- kind=- bytes=- uncovered=-
 *   0x124146-0x124346 rank=- name=- kind=- bytes=- uncovered=-
 *   0x124346-0x124546 rank=- name=- kind=- bytes=- uncovered=-
 *   0x124546-0x124746 rank=- name=- kind=- bytes=- uncovered=-
 *   0x124746-0x124946 rank=- name=- kind=- bytes=- uncovered=-
 *   0x124946-0x124b46 rank=- name=- kind=- bytes=- uncovered=-
 *   0x124b46-0x124d46 rank=- name=- kind=- bytes=- uncovered=-
 *   0x124d46-0x124f46 rank=- name=- kind=- bytes=- uncovered=-
 *   0x15c8ec-0x15caec rank=- name=- kind=- bytes=- uncovered=-
 *   0x44c725-0x44c925 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44c925-0x44cb25 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44cb25-0x44cd25 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44cd25-0x44cf25 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44cf25-0x44d125 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44d125-0x44d325 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44d325-0x44d525 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_123f46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_12406b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1241a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1242de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_12440e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_12459d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_124711(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12487f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1249c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_124b4b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_124c7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_124dc6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_15c8ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_15c9d7(void);
int64_t function_15c9ee(void);
int64_t function_15ca01(void);
int64_t function_15ca02(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_15ca07(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_15ca0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44c725(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_44c8b6(void);
int64_t function_44c8f9(void);
int64_t function_44c90c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44c929(void);
int64_t function_44c96d(void);
int64_t function_44c9ad(int64_t a1);
int64_t function_44c9f1(void);
int64_t function_44ca01(int64_t a1);
int64_t function_44ca07(void);
int64_t function_44ca2f(void);
int64_t function_44ca57(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44ca73(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44ca9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44cad4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44caee(int64_t a1);
int64_t function_44cb23(void);
int64_t function_44cb33(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_44cc97(void);
int64_t function_44ccc2(void);
int64_t function_44cd05(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_44cd15(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44cd17(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44cd28(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44cd81(void);
int64_t function_44cd83(int64_t a1);
int64_t function_44cd8f(int64_t a1);
int64_t function_44cd99(int64_t a1, int64_t a2);
int64_t function_44cda1(void);
int64_t function_44cdb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_44ce3d(void);
int64_t function_44ce5c(void);
int64_t function_44ce67(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44ce88(void);
int64_t function_44ce95(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44cece(void);
int64_t function_44cef9(void);
int64_t function_44cf1b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44cf33(void);
int64_t function_44cf3b(void);
int64_t function_44cf4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44cf7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_44d02d(int64_t a1);
int64_t function_44d043(void);
int64_t function_44d050(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44d05d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_44d085(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44d0cb(int64_t a1);
int64_t function_44d0e8(int64_t a1, int64_t a2, uint64_t a3, int64_t result);
int64_t function_44d0fc(void);
int64_t function_44d15a(void);
int64_t function_44d1cc(void);
int64_t function_44d1dc(void);
int64_t function_44d1f0(void);
int64_t function_44d215(void);
int64_t function_44d221(void);
int64_t function_44d22f(void);
int64_t function_44d235(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44d335(void);
int64_t function_44d361(void);
int64_t function_44d397(void);
int64_t function_44d3c9(void);
int64_t function_44d3fa(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_44d496(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44d4dc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44d4f3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44d53b();
int64_t function_5152d8cd();
int64_t function_5e256492();
int64_t function_c57b8();
int64_t function_cdc60();
int64_t function_ffffffff83f7f7e0();
int64_t function_ffffffffae16132b();
int64_t function_ffffffffd53e04b7();

// Address range: 0x123f46 - 0x12406b
int64_t function_123f46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    char * v1 = (char *)(a4 + 68 + 4 * a4); // 0x123f46
    *v1 = *v1 + (char)a4;
    int64_t v2; // bp-16, 0x123f46
    int64_t v3 = (int64_t)&v2; // 0x123fe5
    int64_t * v4 = (int64_t *)(v3 - 8); // 0x123fed
    *v4 = 0x6209732b;
    int64_t v5 = v3 + 8; // 0x124000
    int64_t * v6 = (int64_t *)v5; // 0x124000
    *v6 = *v4;
    int64_t v7 = v3 - 16; // 0x124008
    *(int64_t *)v7 = v7;
    *(int64_t *)(v3 + 32) = v2;
    v2 = *v6;
    *v4 = v5;
    v2 = *v6;
    *v4 = v5;
    return function_c57b8(a1, a2, a3, a4, a7, a6, 0x11cf2b);
}

// Address range: 0x12406b - 0x1241a4
int64_t function_12406b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x12406b
    int64_t v1; // bp-64, 0x12406b
    int64_t v2 = (int64_t)&v1; // 0x12415b
    v1 = v2;
    *(int64_t *)(v2 + 32) = v1;
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x12416b
    v1 = *v3;
    int64_t v4 = v2 + 16; // 0x124179
    *v3 = *(int64_t *)v4;
    v1 = v4;
    bool v5; // 0x12406b
    return function_c57b8(a1, a2, a3, a4, a5, a6, 0x4000 * (int64_t)(bool)v5 | 2048 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | 128 * (int64_t)v5 | 64 * (int64_t)v5 | 16 * (int64_t)v5 | (int64_t)v5 | 4 * (int64_t)v5 | 2);
}

// Address range: 0x1241a4 - 0x1242de
int64_t function_1241a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1241a4
    int64_t v1; // bp-40, 0x1241a4
    v1 = (int64_t)&v1 + 8;
    int64_t v2; // 0x1241a4
    return function_c57b8(a1, a2, a3, v2, v2, v2, a4);
}

// Address range: 0x1242de - 0x12440e
int64_t function_1242de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1242de
    return function_c57b8(a1, a2, a3, a4, a5, a6, 0x11d6ac);
}

// Address range: 0x12440e - 0x12459d
int64_t function_12440e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x12440e
    int64_t v1; // bp-40, 0x12440e
    int64_t v2 = (int64_t)&v1; // 0x124502
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x12450b
    *v3 = a7;
    int64_t v4 = v2 + 16; // 0x12450e
    *(int64_t *)v4 = v1;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x12451b
    *v5 = a1;
    *v3 = 0x11d925;
    *(int64_t *)(v2 + 32) = v1;
    v1 = v4;
    return function_c57b8(*v5, a2, a3, a4, a5, a6, 0x208c3d17);
}

// Address range: 0x12459d - 0x124711
int64_t function_12459d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4; // bp-32, 0x12462f
    int64_t * v2 = (int64_t *)a4; // 0x12464e
    int64_t v3 = *(int64_t *)(a4 + 32); // 0x124652
    int64_t * v4 = (int64_t *)(a4 - 8); // 0x124652
    *v4 = v3;
    int64_t v5 = a4 - 16; // 0x124656
    int64_t * v6 = (int64_t *)v5; // 0x124656
    *v6 = a4;
    int64_t v7 = *(int64_t *)(a4 + 8); // 0x124675
    *v6 = v7;
    int64_t v8 = a4 - 24; // 0x124679
    int64_t * v9 = (int64_t *)v8; // 0x124679
    *v9 = v3;
    *(int64_t *)(a4 - 32) = v8;
    *v2 = *v9;
    *v6 = a3;
    *v9 = v5;
    *v6 = v7;
    *(int64_t *)(a4 + 24) = *v4;
    *v6 = *v2;
    *v4 = a4;
    *v2 = a4 + 16;
    return function_c57b8(a1, a2, *v6, a4, a5, a6, (int64_t)&v1);
}

// Address range: 0x124711 - 0x12487f
int64_t function_124711(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x124711
    int64_t v1; // bp-40, 0x124711
    int64_t v2 = (int64_t)&v1; // 0x12478e
    v1 = a5;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x1247ef
    *v3 = 0x1fd8a0df;
    int64_t v4 = v2 - 16; // 0x1247fd
    int64_t * v5 = (int64_t *)v4; // 0x1247fd
    *v5 = a5;
    int64_t v6 = v2 + 8; // 0x124807
    int64_t * v7 = (int64_t *)v6; // 0x124807
    *v7 = *v3;
    *v5 = v4;
    *v3 = 0x11dcff;
    *(int64_t *)(v2 + 32) = v1;
    v1 = v2 + 16;
    v1 = *v7;
    *v3 = v6;
    int64_t v8; // 0x124711
    return function_c57b8(a1, a2, v8, a4, v8, v8, 0x24df3390);
}

// Address range: 0x12487f - 0x1249c1
int64_t function_12487f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x12487f
    int64_t v1; // bp-64, 0x12487f
    v1 = (int64_t)&v1;
    bool v2; // 0x12487f
    return function_c57b8(a1, a2, a3, a4, a5, a6, 0x4000 * (int64_t)(bool)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x1249c1 - 0x124b4b
int64_t function_1249c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1249c1
    int64_t v1; // bp-32, 0x1249c1
    v1 = (int64_t)&v1;
    return function_c57b8(a1, a2, a3, a4, a5, a6, 0x11e473);
}

// Address range: 0x124b4b - 0x124c7c
int64_t function_124b4b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x124b4b
    int64_t v1; // 0x124b4b
    bool v2; // 0x124b4b
    return function_c57b8(a1, a2, a3, v1, v1, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x124c7c - 0x124dc6
int64_t function_124c7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x124c7c
    int64_t v1; // 0x124c7c
    return function_c57b8(a1, a2, a3, v1, a5, a6, 0x589236c7);
}

// Address range: 0x124dc6 - 0x124f45
int64_t function_124dc6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x124dc6
    return function_c57b8(a1, a2, a3, a4, a5, a6, a7);
}

// Address range: 0x15c8ec - 0x15c996
int64_t function_15c8ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x15c8ec
    int64_t v1; // bp+16, 0x15c8ec
    v1 = (int64_t)&v1;
    return function_cdc60();
}

// Address range: 0x15c9d7 - 0x15c9da
int64_t function_15c9d7(void) {
    // 0x15c9d7
    int64_t result; // 0x15c9d7
    return result;
}

// Address range: 0x15c9ee - 0x15c9f1
int64_t function_15c9ee(void) {
    // 0x15c9ee
    int64_t result; // 0x15c9ee
    return result;
}

// Address range: 0x15ca01 - 0x15ca02
int64_t function_15ca01(void) {
    // 0x15ca01
    int64_t result; // 0x15ca01
    return result;
}

// Address range: 0x15ca02 - 0x15ca07
int64_t function_15ca02(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0x15ca02
    *v1 = *v1 | (char)a4;
    return function_15ca0f(a1, a2, a3, a4, (int64_t)&g3);
}

// Address range: 0x15ca07 - 0x15ca0f
int64_t function_15ca07(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x15ca07
    int64_t v1; // 0x15ca07
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(a1 + 28 + 4 * v2); // 0x15ca09
    *v3 = *v3 + (char)a4;
    return v2 & -164;
}

// Address range: 0x15ca0f - 0x15caeb
int64_t function_15ca0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x15ca0f
    int64_t result; // 0x15ca0f
    return result;
}

// Address range: 0x44c725 - 0x44c8a5
int64_t function_44c725(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t v3 = a1;
    int64_t result; // 0x44c725
    unsigned char v4 = 2 * (char)result; // 0x44c726
    *(char *)result = v4;
    if (v4 >= 0) {
        int32_t * v5 = (int32_t *)(result - 44); // 0x44c72d
        *v5 = *v5 ^ (int32_t)v1;
        return result | 67;
    }
    // 0x44c752
    __asm_outsd((int16_t)a3, *(int32_t *)&v2);
    int32_t v6 = *(int32_t *)&v1; // 0x44c754
    uint64_t v7 = v1; // 0x44c758
    v1 = v7 / 2 % 128 | v7 & -256;
    int32_t v8 = *(int32_t *)&v3 + 17; // 0x44c75e
    unsigned char v9 = llvm_ctpop_i8((char)v8); // 0x44c75e
    *(int32_t *)v3 = v8;
    if (v9 % 2 == 0) {
        // 0x44c763
        return result;
    }
    uint32_t v10 = v6 | (int32_t)result; // 0x44c754
    int64_t result2 = v10; // 0x44c754
    char * v11 = (char *)result2; // 0x44c7d5
    char v12 = v10; // 0x44c7d5
    char v13 = *v11 - v12; // 0x44c7d5
    *v11 = v13;
    if (v13 != 0) {
        // 0x44c7d9
        return result2 & 0xffffff00 | (int64_t)*(char *)&v2;
    }
    // 0x44c840
    __asm_out(124, v12);
    return result2;
}

// Address range: 0x44c8b6 - 0x44c8b7
int64_t function_44c8b6(void) {
    // 0x44c8b6
    int64_t result; // 0x44c8b6
    return result;
}

// Address range: 0x44c8f9 - 0x44c8fd
int64_t function_44c8f9(void) {
    // 0x44c8f9
    int64_t result; // 0x44c8f9
    return result;
}

// Address range: 0x44c90c - 0x44c913
int64_t function_44c90c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44c90c
    return function_5e256492();
}

// Address range: 0x44c929 - 0x44c92e
int64_t function_44c929(void) {
    // 0x44c929
    return function_ffffffffae16132b();
}

// Address range: 0x44c96d - 0x44c970
int64_t function_44c96d(void) {
    // 0x44c96d
    int64_t result; // 0x44c96d
    return result;
}

// Address range: 0x44c9ad - 0x44c9ae
int64_t function_44c9ad(int64_t a1) {
    // 0x44c9ad
    int64_t result; // 0x44c9ad
    return result;
}

// Address range: 0x44c9f1 - 0x44c9f4
int64_t function_44c9f1(void) {
    // 0x44c9f1
    int64_t result; // 0x44c9f1
    return result;
}

// Address range: 0x44ca01 - 0x44ca04
int64_t function_44ca01(int64_t a1) {
    // 0x44ca01
    int64_t result; // 0x44ca01
    return result;
}

// Address range: 0x44ca07 - 0x44ca0b
int64_t function_44ca07(void) {
    // 0x44ca07
    int64_t v1; // 0x44ca07
    return function_44ca73(v1, v1, v1);
}

// Address range: 0x44ca2f - 0x44ca30
int64_t function_44ca2f(void) {
    // 0x44ca2f
    int64_t result; // 0x44ca2f
    return result;
}

// Address range: 0x44ca57 - 0x44ca6f
int64_t function_44ca57(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44ca5d
    __asm_out_133((int16_t)a3, (char)a4);
    int32_t v1 = a4; // 0x44ca65
    uint32_t v2 = v1 - 0x193e9680; // 0x44ca65
    int64_t result = v2; // 0x44ca6d
    if (((v2 ^ v1) & v1 + 0x66c16980) < 0) {
        result = function_44ca2f();
    }
    // 0x44ca6f
    return result;
}

// Address range: 0x44ca73 - 0x44ca7d
int64_t function_44ca73(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44ca73
    int64_t result; // 0x44ca73
    return result;
}

// Address range: 0x44ca9b - 0x44caa5
int64_t function_44ca9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x44ca9b
    int64_t v1; // 0x44ca9b
    int32_t * v2 = (int32_t *)(v1 - 95 + (v1 & 0xffffffff)); // 0x44ca9e
    bool v3; // 0x44ca9b
    *v2 = (int32_t)v3 - (int32_t)a4 + *v2;
    return __asm_sti(a5);
}

// Address range: 0x44cad4 - 0x44cad9
int64_t function_44cad4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44cad4
    int64_t result; // 0x44cad4
    return result;
}

// Address range: 0x44caee - 0x44caf1
int64_t function_44caee(int64_t a1) {
    // 0x44caee
    int64_t result; // 0x44caee
    return result;
}

// Address range: 0x44cb23 - 0x44cb24
int64_t function_44cb23(void) {
    // 0x44cb23
    int64_t result; // 0x44cb23
    return result;
}

// Address range: 0x44cb33 - 0x44cb5e
int64_t function_44cb33(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t v1 = *(int32_t *)(a3 + 17); // 0x44cb33
    bool v2; // 0x44cb33
    int32_t * v3 = (int32_t *)(4 * a3 + (int64_t)((int32_t)v2 + (int32_t)a2 - v1)); // 0x44cb36
    int32_t v4 = *v3; // 0x44cb36
    int32_t v5 = -v4; // 0x44cb36
    *v3 = v5;
    if (v4 == 0 || v5 < 0) {
        function_44cb23();
    }
    uint32_t v6 = (int32_t)a4 % 32; // 0x44cb40
    if (v6 != 0) {
        int32_t * v7 = (int32_t *)(a6 + 78); // 0x44cb40
        *v7 = *v7 >> v6;
    }
    return 0x7fe2258e;
}

// Address range: 0x44cc97 - 0x44cc98
int64_t function_44cc97(void) {
    // 0x44cc97
    int64_t result; // 0x44cc97
    return result;
}

// Address range: 0x44ccc2 - 0x44ccc5
int64_t function_44ccc2(void) {
    // 0x44ccc2
    int64_t result; // 0x44ccc2
    return result;
}

// Address range: 0x44cd05 - 0x44cd14
int64_t function_44cd05(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x44cd05
    __asm_iretd();
    bool v1; // 0x44cd05
    if ((char)(bool)v1 + (char)a3 < (char)(a4 / 256)) {
        function_44cc97();
    }
    // 0x44cd0d
    return function_44cd17(a1, a2, a3, a5);
}

// Address range: 0x44cd15 - 0x44cd17
int64_t function_44cd15(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44cd15
    int64_t result; // 0x44cd15
    return result;
}

// Address range: 0x44cd17 - 0x44cd19
int64_t function_44cd17(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44cd17
    int64_t result; // 0x44cd17
    *(char *)a4 = (char)(result / 256 ^ result);
    return result;
}

// Address range: 0x44cd28 - 0x44cd81
int64_t function_44cd28(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44cd28
    int64_t v1; // 0x44cd28
    int64_t v2 = v1;
    int64_t v3 = a1;
    bool v4; // 0x44cd28
    *(int32_t *)a3 = (int32_t)v4;
    int64_t v5; // 0x44cd28
    unsigned char v6 = *(char *)&v5; // 0x44cd2a
    *(char *)a3 = v6 / 2;
    int64_t v7 = a3 & -256 | (int64_t)*(char *)&v3; // 0x44cd2c
    v5 = v7;
    int32_t * v8 = (int32_t *)(v7 - 11); // 0x44cd73
    *v8 = *v8 + (int32_t)(v6 % 2 != 0) - (int32_t)v3;
    __asm_out_133((int16_t)v5, (char)v2);
    char * v9 = (char *)(v3 - 0x58fa03cb); // 0x44cd77
    *v9 = *v9 ^ (char)a4;
    return v2 - (a4 & 0xff00) & 0xff00 | v2 & -0xff01;
}

// Address range: 0x44cd81 - 0x44cd82
int64_t function_44cd81(void) {
    // 0x44cd81
    int64_t result; // 0x44cd81
    return result;
}

// Address range: 0x44cd83 - 0x44cd87
int64_t function_44cd83(int64_t a1) {
    // 0x44cd83
    return __asm_wait(a1);
}

// Address range: 0x44cd8f - 0x44cd94
int64_t function_44cd8f(int64_t a1) {
    // 0x44cd8f
    int64_t result; // 0x44cd8f
    return result;
}

// Address range: 0x44cd99 - 0x44cda1
int64_t function_44cd99(int64_t a1, int64_t a2) {
    // 0x44cd99
    int64_t result; // 0x44cd99
    return result;
}

// Address range: 0x44cda1 - 0x44cda4
int64_t function_44cda1(void) {
    // 0x44cda1
    int64_t result; // 0x44cda1
    return result;
}

// Address range: 0x44cdb8 - 0x44ce3a
int64_t function_44cdb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x44cdb8
    int64_t v1; // 0x44cdb8
    if (((int32_t)a3 ^ -0x7b08e8bc) > *(int32_t *)(v1 + 100)) {
        int32_t v2 = v1; // 0x44cdca
        uint32_t v3 = v2 >> 31; // 0x44cdca
        int64_t v4 = (v1 | 0xffff00ff) & (int64_t)v3; // 0x44cdcf
        *(int32_t *)(2 * v1 + 63 + v4) = (int32_t)a6;
        *(char *)0xa47043af = (char)v3;
        __asm_out_134((int16_t)v4, v2);
        return function_5152d8cd();
    }
    int32_t v5 = *(int32_t *)(a4 - 14); // 0x44ce2e
    int64_t v6; // bp-16, 0x44cdb8
    int32_t v7 = (int64_t)&v6; // 0x44ce2e
    uint32_t v8 = v5 + v7; // 0x44ce2e
    while (((v8 ^ v7) & (v8 ^ v5)) < 0) {
        // 0x44ce2e
        v7 = v8;
        v8 = v5 + v7;
    }
    // 0x44ce33
    return function_ffffffff83f7f7e0();
}

// Address range: 0x44ce3d - 0x44ce44
int64_t function_44ce3d(void) {
    // 0x44ce3d
    __asm_int3();
    int64_t v1; // 0x44ce3d
    return function_44ce95(v1, v1, v1, v1);
}

// Address range: 0x44ce5c - 0x44ce5d
int64_t function_44ce5c(void) {
    // 0x44ce5c
    int64_t result; // 0x44ce5c
    return result;
}

// Address range: 0x44ce67 - 0x44ce75
int64_t function_44ce67(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t result = 0x44172e49 * *(int32_t *)(a4 - 89); // 0x44ce67
    *(char *)a1 = (char)result;
    int64_t v1; // 0x44ce67
    __asm_outsb((int16_t)a3, *(char *)&v1);
    return result;
}

// Address range: 0x44ce88 - 0x44ce8b
int64_t function_44ce88(void) {
    // 0x44ce88
    return function_44ce5c();
}

// Address range: 0x44ce95 - 0x44ceab
int64_t function_44ce95(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44ce95
    bool v1; // 0x44ce95
    *(int32_t *)((v1 ? -1 : 1) + a1) = __asm_insd((int16_t)a3);
    int64_t v2; // 0x44ce95
    return (int64_t)*(int32_t *)&v2;
}

// Address range: 0x44cece - 0x44ced1
int64_t function_44cece(void) {
    // 0x44cece
    int64_t result; // 0x44cece
    return result;
}

// Address range: 0x44cef9 - 0x44cefa
int64_t function_44cef9(void) {
    // 0x44cef9
    int64_t result; // 0x44cef9
    return result;
}

// Address range: 0x44cf1b - 0x44cf21
int64_t function_44cf1b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44cf1b
    int64_t result; // 0x44cf1b
    return result;
}

// Address range: 0x44cf33 - 0x44cf34
int64_t function_44cf33(void) {
    // 0x44cf33
    int64_t result; // 0x44cf33
    return result;
}

// Address range: 0x44cf3b - 0x44cf3c
int64_t function_44cf3b(void) {
    // 0x44cf3b
    int64_t result; // 0x44cf3b
    return result;
}

// Address range: 0x44cf4c - 0x44cf6b
int64_t function_44cf4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x44cf4c
    int64_t v1; // 0x44cf4c
    bool v2; // 0x44cf4c
    if (!v2) {
        v1 = function_44cf33();
    }
    if (a4 != 0) {
        // 0x44cf50
        return __asm_int1();
    }
    int64_t result = 0x92b826d6; // 0x44cf5c
    if ((v2 ? 0x68295bbc : 0x68295bbb) != (int32_t)v1) {
        result = function_44cef9() + 0x92b826d6 & 0xffffffff;
    }
    // 0x44cf5e
    return result;
}

// Address range: 0x44cf7f - 0x44d02c
int64_t function_44cf7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a8;
    int64_t v2; // 0x44cf7f
    int64_t v3 = v2 & 0xffffffff ^ 0x7a049e64; // 0x44cf83
    uint32_t v4 = (int32_t)v3; // 0x44cf8c
    int32_t v5 = *(int32_t *)v3; // 0x44cf8c
    uint32_t v6 = v5 + v4; // 0x44cf8c
    int64_t result = v6; // 0x44cf8c
    *(char *)(8 * result - 0x3abe1f2) = 45;
    if (v6 < 0 == ((v6 ^ v4) & (v6 ^ v5)) < 0) {
        // 0x44cfdd
        __asm_int(-66);
        char * v7 = (char *)(a1 - 92); // 0x44cfe6
        *v7 = *v7 - 1;
        return result;
    }
    int32_t * v8 = (int32_t *)(a2 - 87); // 0x44cf9a
    *v8 = (int32_t)(v6 < v4) - (int32_t)a2 + *v8;
    int32_t v9 = *(int32_t *)(a1 + 108) ^ (int32_t)(int64_t)&v1; // 0x44cfa0
    if (v9 < 0) {
        // 0x44cff6
        return result;
    }
    int64_t v10 = v9; // 0x44cfa0
    *(char *)a1 = __asm_insb((int16_t)a3);
    __asm_int(-38);
    *(int64_t *)(v10 - 0xffff970f) = v10 - 16;
    *(char *)(a1 + 76) = (char)((result + 0xf718) / 256);
    return v6 + 0x2f0f718;
}

// Address range: 0x44d02d - 0x44d038
int64_t function_44d02d(int64_t a1) {
    // 0x44d02d
    int64_t v1; // 0x44d02d
    return (uint64_t)v1 / 256 % 256 | v1;
}

// Address range: 0x44d043 - 0x44d046
int64_t function_44d043(void) {
    // 0x44d043
    int64_t result; // 0x44d043
    return result;
}

// Address range: 0x44d050 - 0x44d05c
int64_t function_44d050(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44d050
    return function_44d0cb(a1);
}

// Address range: 0x44d05d - 0x44d07c
int64_t function_44d05d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x44d05d
    int64_t v1; // 0x44d05d
    int64_t v2 = v1 & 205 | 50; // 0x44d05d
    char v3 = *(char *)(a1 - 0x27acc544); // 0x44d05f
    char v4 = *(char *)((v2 | v1 & -256) + 0x5e1e6ddd); // 0x44d067
    *(char *)-0x296ddab348a2ed33 = v4 + (char)v2;
    int64_t result = function_44d0e8(a1, a2, 256 * (int64_t)(v3 | (char)(a3 / 256)) | a3 & -0xff01, (int64_t)&g3); // 0x44d07a
    return result;
}

// Address range: 0x44d085 - 0x44d08d
int64_t function_44d085(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x44d085
    int64_t result; // 0x44d085
    return result;
}

// Address range: 0x44d0cb - 0x44d0cd
int64_t function_44d0cb(int64_t a1) {
    // 0x44d0cb
    int64_t result; // 0x44d0cb
    return result;
}

// Address range: 0x44d0e8 - 0x44d0ee
int64_t function_44d0e8(int64_t a1, int64_t a2, uint64_t a3, int64_t result) {
    // 0x44d0e8
    __asm_out(123, (char)result);
    char * v1 = (char *)(a3 - 86); // 0x44d0eb
    bool v2; // 0x44d0e8
    *v1 = (char)(bool)v2 + (char)(a3 / 256) + *v1;
    return result;
}

// Address range: 0x44d0fc - 0x44d102
int64_t function_44d0fc(void) {
    // 0x44d0fc
    int64_t result; // 0x44d0fc
    return result;
}

// Address range: 0x44d15a - 0x44d15f
int64_t function_44d15a(void) {
    // 0x44d15a
    return function_ffffffffd53e04b7();
}

// Address range: 0x44d1cc - 0x44d1cd
int64_t function_44d1cc(void) {
    // 0x44d1cc
    int64_t result; // 0x44d1cc
    return result;
}

// Address range: 0x44d1dc - 0x44d1dd
int64_t function_44d1dc(void) {
    // 0x44d1dc
    int64_t result; // 0x44d1dc
    return result;
}

// Address range: 0x44d1f0 - 0x44d1f2
int64_t function_44d1f0(void) {
    // 0x44d1f0
    return function_44d1cc();
}

// Address range: 0x44d215 - 0x44d216
int64_t function_44d215(void) {
    // 0x44d215
    int64_t result; // 0x44d215
    return result;
}

// Address range: 0x44d221 - 0x44d222
int64_t function_44d221(void) {
    // 0x44d221
    int64_t result; // 0x44d221
    return result;
}

// Address range: 0x44d22f - 0x44d235
int64_t function_44d22f(void) {
    // 0x44d22f
    int64_t result; // 0x44d22f
    bool v1; // 0x44d22f
    if (v1) {
        result = function_44d215();
    }
    // 0x44d232
    return result;
}

// Address range: 0x44d235 - 0x44d28b
int64_t function_44d235(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44d235
    bool v1; // 0x44d235
    if (v1) {
        function_44d1dc();
    }
    // 0x44d239
    int64_t v2; // 0x44d235
    float80_t v3; // 0x44d235
    *(float64_t *)(2 * a1 + 0x30cf2b77 + v2) = (float64_t)v3;
    int32_t v4 = *(int32_t *)0x5156fbf0; // 0x44d244
    *(int32_t *)0x5156fbf0 = v4 + 0x71fff2a3;
    if (v4 < -0x71fff2a2) {
        // 0x44d288
        return function_44d221();
    }
    // 0x44d250
    return __asm_int1();
}

// Address range: 0x44d335 - 0x44d336
int64_t function_44d335(void) {
    // 0x44d335
    int64_t result; // 0x44d335
    return result;
}

// Address range: 0x44d361 - 0x44d363
int64_t function_44d361(void) {
    // 0x44d361
    return function_44d335();
}

// Address range: 0x44d397 - 0x44d398
int64_t function_44d397(void) {
    // 0x44d397
    int64_t result; // 0x44d397
    return result;
}

// Address range: 0x44d3c9 - 0x44d3ca
int64_t function_44d3c9(void) {
    // 0x44d3c9
    int64_t result; // 0x44d3c9
    return result;
}

// Address range: 0x44d3fa - 0x44d47c
int64_t function_44d3fa(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x44d3fa
    int64_t v1; // 0x44d3fa
    int64_t v2 = v1;
    int64_t v3 = a5;
    bool v4; // 0x44d3fa
    if (v4) {
        // 0x44d424
        return (v2 + 162) % 256 | v2 & -256;
    }
    if ((char)v1 + (char)(a3 / 256) >= 0) {
        function_44d397();
    }
    if (a5 == 0) {
        function_44d3c9();
    }
    uint32_t v5 = (int32_t)a1; // 0x44d407
    uint32_t v6 = *(int32_t *)(a2 + 0x4df14865 + v1) + v5; // 0x44d407
    int64_t v7 = __asm_fnstenv(v6); // 0x44d40e
    *(int224_t *)v1 = (int224_t)v7;
    int32_t v8 = v7 & 0xffffff00 | (int64_t)__asm_in(127); // 0x44d413
    int32_t v9 = v8 - (v6 < v5 ? 0x61e412fb : 0x61e412fa); // 0x44d413
    v3 = a5;
    if ((-1 - v9 + (int32_t)(v6 < v5) & v8) >= 0) {
        int32_t v10 = *(int32_t *)a5; // 0x44d452
        return v10 | (int32_t)(int64_t)&v3;
    }
    int64_t result = __asm_int3(); // 0x44d41b
    if (a5 != 1 != (v9 == 0)) {
        // 0x44d424
        return result;
    }
    int64_t result2 = result ^ 69; // 0x44d45f
    *(char *)0x192a48e3 = *(char *)0x192a48e3 + (char)result2;
    return result2;
}

// Address range: 0x44d496 - 0x44d4db
int64_t function_44d496(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x44d496
    int64_t v1; // 0x44d496
    uint32_t v2 = (int32_t)v1; // 0x44d49c
    int32_t v3 = v2 - 0x4eeb0a25; // 0x44d49c
    int64_t v4 = a4 & 0xffffffff; // 0x44d4a2
    if (v3 != 1 == v3 == 0) {
        v4 = function_44d4f3(a1, a2, a3);
    }
    // 0x44d4a4
    if (v3 < 0 == ((v3 ^ v2) & v2 + 0x3114f5db) < 0 != v3 != 0) {
        int64_t result = v4 | 195; // 0x44d4a9
        int32_t * v5 = (int32_t *)result; // 0x44d4ae
        *v5 = *v5 + (int32_t)result;
        return result;
    }
    int64_t result2 = v4; // 0x44d4c9
    if (v2 <= 0x4eeb0a24 && v3 != 0) {
        result2 = function_44d53b();
    }
    // 0x44d4cb
    return result2;
}

// Address range: 0x44d4dc - 0x44d4e7
int64_t function_44d4dc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44d4dc
    int64_t v1; // 0x44d4dc
    v1 = function_44d53b();
    char v2 = (char)v1 & -109 | 32;
    return v1 & 0x509d0000 | (int64_t)v2 | 0x8000 * (int64_t)(v2 < 0) | 1024 * (int64_t)(llvm_ctpop_i8(v2) % 2 == 0) | 512;
}

// Address range: 0x44d4f3 - 0x44d4f9
int64_t function_44d4f3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44d4f3
    int64_t result; // 0x44d4f3
    return result;
}
