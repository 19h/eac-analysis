/*
 * Targeted RetDec C for native executable gap queue batch 1010.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x15caec-0x15ccec rank=- name=- kind=- bytes=- uncovered=-
 *   0x15ccec-0x15ceec rank=- name=- kind=- bytes=- uncovered=-
 *   0x15ceec-0x15d0ec rank=- name=- kind=- bytes=- uncovered=-
 *   0x15d0ec-0x15d2ec rank=- name=- kind=- bytes=- uncovered=-
 *   0x15d2ec-0x15d4ec rank=- name=- kind=- bytes=- uncovered=-
 *   0x15d4ec-0x15d6ec rank=- name=- kind=- bytes=- uncovered=-
 *   0x15d6ec-0x15d8ec rank=- name=- kind=- bytes=- uncovered=-
 *   0x15d8ec-0x15daec rank=- name=- kind=- bytes=- uncovered=-
 *   0x24b57d-0x24b77d rank=- name=- kind=- bytes=- uncovered=-
 *   0x479aee-0x479cee rank=- name=- kind=- bytes=- uncovered=-
 *   0x479cee-0x479eee rank=- name=- kind=- bytes=- uncovered=-
 *   0x479eee-0x47a0ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x47a0ee-0x47a2ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x47a2ee-0x47a4ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x47a4ee-0x47a6ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x47a6ee-0x47a8ee rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_15caec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_15cb18(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_15cc57(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_15cdcc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_15cf32(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_15d0c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_15d235(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_15d36f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_15d498(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_15d621(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_15d78e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_15d8d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_15dab3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_20d0467();
int64_t function_2419aa75();
int64_t function_24b57d(void);
int64_t function_24b5b7(void);
int64_t function_24b5cd(void);
int64_t function_24b5cf(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_24b67b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24b6dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24b751(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3520bb49();
int64_t function_3ba872c7();
int64_t function_479aee(int64_t a1, int64_t a2, int64_t a3);
int64_t function_479af9(void);
int64_t function_479b4a(void);
int64_t function_479ba3(int64_t a1);
int64_t function_479c08(void);
int64_t function_479c24(void);
int64_t function_479c43(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_479d17(int64_t a1);
int64_t function_479d2e(void);
int64_t function_479d39(void);
int64_t function_479d61(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_479d9e(void);
int64_t function_479db7(void);
int64_t function_479dd4(int64_t a1);
int64_t function_479e2e(int64_t a1);
int64_t function_479e65(int64_t a1);
int64_t function_479e6e(void);
int64_t function_479e96(int64_t a1);
int64_t function_479ea7(int64_t a1);
int64_t function_479ef1(void);
int64_t function_479f24(void);
int64_t function_479f63(void);
int64_t function_479f79(void);
int64_t function_479f8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_479f9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_479fd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_479ff5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_47a020(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47a033(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47a04e(void);
int64_t function_47a057(int64_t a1);
int64_t function_47a05c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_47a0fc(int64_t a1, int64_t a2);
int64_t function_47a120(void);
int64_t function_47a123(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47a152(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47a15d(void);
int64_t function_47a17e(void);
int64_t function_47a186(void);
int64_t function_47a266(void);
int64_t function_47a282(void);
int64_t function_47a284(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_47a2f2(void);
int64_t function_47a387(void);
int64_t function_47a3dc(int64_t a1);
int64_t function_47a3e2(int64_t a1);
int64_t function_47a40c(void);
int64_t function_47a461(void);
int64_t function_47a480(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47a4b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_47a680(int64_t a1);
int64_t function_47a6a6(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_47a6cd(int64_t a1);
int64_t function_47a778(void);
int64_t function_47a77e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_47a7d7(int64_t a1);
int64_t function_47a7e4(int64_t a1);
int64_t function_47a80c(void);
int64_t function_47a82a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47a846(void);
int64_t function_47a858(void);
int64_t function_47a875(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47a881(void);
int64_t function_47a88d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47a8a7(void);
int64_t function_47a8b1(void);
int64_t function_47a8c5(void);
int64_t function_576c4b36();
int64_t function_78dffafa();
int64_t function_cdc60();
int64_t function_ffffffff8320b166();
int64_t function_ffffffff951dec7c();
int64_t function_ffffffff96f9a2ca();
int64_t function_ffffffffa0bec112();
int64_t function_ffffffffb23a315b();
int64_t function_ffffffffc1ecbec5();
int64_t function_ffffffffe0203346();
int64_t function_ffffffffe516abe0();
int64_t function_fffffffff0b48d70();
int64_t unknown_179cf29();
int64_t unknown_1acf9e23();
int64_t unknown_282f5602();
int64_t unknown_4049e335();
int64_t unknown_6e2f5639();
int64_t unknown_ffffffffc1269f80();
int64_t unknown_ffffffffc4b75d81();
int64_t unknown_ffffffffdc2a16ea();
int64_t unknown_ffffffffdda6e124();
int64_t unknown_ffffffffe403c816();
int64_t unknown_fffffffffe6063bd();

// Address range: 0x15caec - 0x15cb18
int64_t function_15caec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 - 8; // 0x15caf6
    int64_t * v2 = (int64_t *)v1; // 0x15cafa
    *v2 = a4;
    *(int64_t *)(a5 - 16) = v1;
    *v2 = a5 + 8;
    int64_t v3; // 0x15caec
    return function_cdc60(a1, a2, a3, *v2, v3, v3);
}

// Address range: 0x15cb18 - 0x15cc57
int64_t function_15cb18(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x15cb18
    int64_t v1; // 0x15cb18
    return function_cdc60(a1, a2, a3, v1, v1, v1);
}

// Address range: 0x15cc57 - 0x15cdcc
int64_t function_15cc57(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x15cc57
    int64_t v1; // bp-16, 0x15cc57
    int64_t v2 = (int64_t)&v1; // 0x15cc66
    int64_t v3 = v2 - 8; // 0x15cc6e
    int64_t * v4 = (int64_t *)v3; // 0x15cc6f
    v1 = 310;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x15cc7e
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x15cc7f
    *v4 = 0x131beb;
    *v5 = 0x31a101df;
    int64_t v7 = v2 - 32; // 0x15cca9
    int64_t * v8 = (int64_t *)v7; // 0x15ccb2
    *v6 = 0x12b1e57b;
    *v8 = 0x4179b2ad;
    int64_t * v9 = (int64_t *)(v2 - 40); // 0x15ccca
    int64_t * v10 = (int64_t *)(v2 + 8); // 0x15ccd0
    int64_t v11 = *v10; // 0x15ccd0
    *v8 = v11;
    *v9 = v11;
    int64_t * v12 = (int64_t *)(v2 - 48); // 0x15ccd7
    *v12 = v11;
    *v8 = a4;
    *v12 = a1;
    *v5 = v11;
    *v9 = v7;
    *v10 = *v4;
    *v6 = a6;
    *v6 = v3;
    return function_cdc60(a1, a2, a3, *v8, a5, *v6);
}

// Address range: 0x15cdcc - 0x15cf32
int64_t function_15cdcc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x79b2b40f; // bp-32, 0x15ce31
    int64_t v2 = (int64_t)&v1; // 0x15cf0c
    *(int64_t *)(v2 - 8) = 0x79b2b40f;
    *(int64_t *)(v2 - 16) = 0x79b2b40f;
    return function_cdc60(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x15cf32 - 0x15d0c1
int64_t function_15cf32(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x15cf32
    int64_t v1; // bp-64, 0x15cf32
    v1 = (int64_t)&v1;
    return function_cdc60(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x15d0c1 - 0x15d235
int64_t function_15d0c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x15d0c1
    int64_t v1; // bp-24, 0x15d0c1
    int64_t v2 = (int64_t)&v1; // 0x15d19b
    int64_t v3 = v2 + 16; // 0x15d1a3
    int64_t v4 = v2 - 8; // 0x15d1a3
    int64_t * v5 = (int64_t *)v4; // 0x15d1a3
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x15d1a7
    *v5 = 0x429fe55f;
    *v6 = 0x4f707a4;
    *(int64_t *)(v2 - 24) = a4;
    *(int64_t *)(v2 + 8) = *v5;
    *v5 = 0x666f34a6;
    *v6 = *(int64_t *)v3;
    *(int64_t *)(v2 + 24) = *v5;
    *v6 = v1;
    *v5 = v4;
    v1 = v3;
    int64_t v7; // 0x15d0c1
    return function_cdc60(a1, a2, a3, v7, v7, v7);
}

// Address range: 0x15d235 - 0x15d36f
int64_t function_15d235(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x15d235
    int64_t v1; // bp-48, 0x15d235
    v1 = (int64_t)&v1;
    return function_cdc60(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x15d36f - 0x15d498
int64_t function_15d36f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x15d36f
    int64_t v1; // bp-56, 0x15d36f
    v1 = (int64_t)&v1 + 8;
    int64_t v2; // 0x15d36f
    return function_cdc60(a1, a2, a3, a4, a5, v2);
}

// Address range: 0x15d498 - 0x15d621
int64_t function_15d498(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x15d498
    int64_t v1; // bp-40, 0x15d498
    int64_t v2 = (int64_t)&v1; // 0x15d523
    int64_t * v3 = (int64_t *)(v2 + 40); // 0x15d532
    int64_t v4 = *v3; // 0x15d532
    v1 = v4;
    int64_t v5 = v2 - 8; // 0x15d536
    int64_t * v6 = (int64_t *)v5; // 0x15d536
    int64_t v7 = v2 + 8; // 0x15d543
    *v6 = v7;
    int64_t v8 = v2 + 16; // 0x15d54f
    int64_t * v9 = (int64_t *)v8; // 0x15d54f
    *(int64_t *)(v2 - 16) = v2;
    *v6 = v4;
    *v9 = v1;
    *v6 = v5;
    v1 = *v9;
    int64_t * v10 = (int64_t *)v7; // 0x15d5b2
    *v3 = *v10;
    *v10 = a3;
    *v10 = v2 + 24;
    *v10 = *v9;
    v1 = v8;
    return function_cdc60(a1, a2, *v10, a4, a5, a6);
}

// Address range: 0x15d621 - 0x15d78e
int64_t function_15d621(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x15d621
    int64_t v1; // bp-24, 0x15d621
    int64_t v2 = (int64_t)&v1; // 0x15d68f
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x15d6a4
    int64_t * v4 = (int64_t *)v3; // 0x15d6a5
    *v4 = 0x66749b11;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x15d6ad
    *v5 = 0xd3b8b75;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x15d6bd
    int64_t v7 = *(int64_t *)(v2 + 24); // 0x15d6c3
    *v5 = v7;
    int64_t * v8 = (int64_t *)(v2 - 32); // 0x15d6dd
    *v8 = a3;
    *v6 = v3;
    *v6 = 0x2387e604;
    *v8 = 0x31949cbc;
    *(int64_t *)(v2 - 40) = v7;
    *v4 = *v6;
    *(int64_t *)(v2 + 8) = v1;
    *v8 = a6;
    *v6 = v3;
    int64_t v9 = *v5; // 0x15d773
    *v6 = v9;
    *v8 = v9;
    return function_cdc60(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x15d78e - 0x15d8d9
int64_t function_15d78e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x15d78e
    int64_t v1; // 0x15d78e
    return function_cdc60(0x135f3f, a2, a3, a4, v1, a6);
}

// Address range: 0x15d8d9 - 0x15da5a
int64_t function_15d8d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x15d8d9
    int64_t v1; // bp-40, 0x15d8d9
    v1 = (int64_t)&v1;
    int64_t v2; // 0x15d8d9
    return function_cdc60(a1, a2, a3, v2, a5, v2);
}

// Address range: 0x15dab3 - 0x15dab7
int64_t function_15dab3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x15dab3
    int64_t result; // 0x15dab3
    char * v1 = (char *)(result + 60); // 0x15dab3
    *v1 = *v1 + (char)(a4 / 256);
    return result;
}

// Address range: 0x24b57d - 0x24b585
int64_t function_24b57d(void) {
    // 0x24b57d
    int64_t v1; // 0x24b57d
    int64_t v2 = v1;
    return (v2 + 155) % 256 | v2 & -256;
}

// Address range: 0x24b5b7 - 0x24b5b8
int64_t function_24b5b7(void) {
    // 0x24b5b7
    int64_t result; // 0x24b5b7
    return result;
}

// Address range: 0x24b5cd - 0x24b5cf
int64_t function_24b5cd(void) {
    // 0x24b5cd
    return function_24b5b7();
}

// Address range: 0x24b5cf - 0x24b662
int64_t function_24b5cf(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 0x36866b75); // 0x24b5cf
    *v1 = *v1 + (int32_t)a1;
    int32_t * v2 = (int32_t *)(a2 - 0x45777a04); // 0x24b5da
    *v2 = *v2 + (int32_t)a4;
    __asm_int(-77);
    bool v3; // 0x24b5cf
    int64_t v4 = v3 ? -1 : 1; // 0x24b5ea
    int64_t v5 = v4 + a2; // 0x24b5ea
    int64_t v6 = 2 * v4 + a1; // 0x24b5fa
    int64_t v7; // 0x24b5cf
    __asm_out(0x10de, *(char *)((v7 + 10) % 256 + v7));
    unknown_282f5602();
    int32_t * v8 = (int32_t *)(v7 + 0x81001e8 + 2 * v7); // 0x24b603
    *v8 = *v8 + (int32_t)v7;
    unknown_ffffffffe403c816();
    int64_t v9 = 256 * a4 & 0xff00 | 0x160700de; // 0x24b615
    *(char *)v6 = *(char *)v5;
    int64_t v10 = v5 + v4; // 0x24b61c
    int64_t v11 = unknown_1acf9e23(v6 + v4, v10, v9); // 0x24b61d
    int64_t v12 = (int64_t)(-0x6007fe18 * *(int32_t *)(v9 - 0x5267f633)); // 0x24b622
    *(int32_t *)v12 = (int32_t)v11;
    int64_t v13 = v3 ? -4 : 4; // 0x24b62c
    int64_t v14 = v13 + v12; // 0x24b62c
    char * v15 = (char *)(v7 - 30); // 0x24b62d
    *v15 = *v15 - 34;
    unknown_6e2f5639(v14);
    *(char *)v14 = *(char *)v10;
    int64_t v16 = v14 + v4; // 0x24b638
    *(char *)v16 = __asm_insb((int16_t)v9);
    *(char *)-0x71d9617f = *(char *)-0x71d9617f + (char)(v7 / 256);
    int64_t v17 = __asm_int3() & -256; // 0x24b642
    char * v18 = (char *)v17; // 0x24b644
    char v19 = *v18 - 64; // 0x24b644
    unsigned char v20 = llvm_ctpop_i8(v19); // 0x24b644
    *v18 = v19;
    int32_t v21 = v20 % 2 != 0 ? *(int32_t *)v17 : (int32_t)v17; // 0x24b647
    *(int32_t *)v16 = v21;
    int64_t v22 = v16 + v13; // 0x24b64a
    int32_t * v23 = (int32_t *)a4; // 0x24b64d
    *v23 = (int32_t)(v10 + v4) + (int32_t)v7 + *v23;
    unsigned char v24 = (char)(a4 / 256 + (int64_t)v21); // 0x24b651
    unsigned char v25 = *(char *)v22; // 0x24b651
    char v26 = v24 - v25; // 0x24b651
    int64_t v27 = 0x4000 * (int64_t)v3 | 1024 * (int64_t)v3 | 512 * (int64_t)v3 | 256 * (int64_t)v3 | (int64_t)(v25 > v24) | 64 * (int64_t)(v26 == 0) | 128 * (int64_t)(v26 < 0) | 16 * (int64_t)(v24 % 16 - v25 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v26) % 2 == 0) | 2048 * (int64_t)(((v26 ^ v24) & (v25 ^ v24)) < 0) | 2; // bp-16, 0x24b654
    char * v28 = (char *)((int64_t)&v27 + 0x1e8e918 + 4 * (int64_t)(v21 >> 31)); // 0x24b656
    *v28 = *v28 + (char)((a4 + 0xffff) / 256);
    return function_ffffffffb23a315b(v22 + v4);
}

// Address range: 0x24b67b - 0x24b6bc
int64_t function_24b67b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = unknown_ffffffffc4b75d81(); // 0x24b67b
    int64_t v3; // 0x24b67b
    bool v4; // 0x24b67b
    if (v4) {
        int64_t v5 = v2 & -256; // 0x24b684
        int32_t * v6 = (int32_t *)(((v2 + v3) % 256 | v5) + (8 * v3 | 1)); // 0x24b686
        *v6 = *v6 | (int32_t)a1;
        return v5 | (int64_t)(*(char *)&v1 ^ -7);
    }
    uint32_t v7 = 0x10000 * (int32_t)v2 >> 16; // 0x24b6a6
    __asm_out_133(-24, (char)v7);
    int32_t * v8 = (int32_t *)(9 * (int64_t)v7); // 0x24b6a9
    *v8 = *v8 + (int32_t)a3;
    int32_t * v9 = (int32_t *)(v3 + 11); // 0x24b6ac
    *v9 = *v9 + (int32_t)v1;
    *(char *)a3 = (char)(v3 / 256);
    *(int32_t *)(a3 + 117) = (int32_t)v1;
    return unknown_fffffffffe6063bd();
}

// Address range: 0x24b6dd - 0x24b751
int64_t function_24b6dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24b6dd
    bool v1; // 0x24b6dd
    int64_t v2 = v1 ? -1 : 1; // 0x24b6de
    int64_t v3; // 0x24b6dd
    int64_t v4 = v2 + (v3 & 0xffffffff); // 0x24b6de
    unknown_ffffffffdc2a16ea(v4);
    uint32_t v5 = __asm_in((int16_t)a3 & -256 | 121); // 0x24b6e9
    int64_t v6 = 0x4c8bca00 * v3; // 0x24b6ea
    uint32_t v7 = *(int32_t *)(v3 - 0x51fe17d2) & (int32_t)v3; // 0x24b6f0
    int32_t * v8 = (int32_t *)((v6 & 0xfffffe00) - 49); // 0x24b6fa
    *v8 = -*v8;
    uint32_t v9 = (int32_t)v6; // 0x24b6fd
    int64_t v10; // 0x24b6dd
    uint32_t v11 = *(int32_t *)&v10; // 0x24b6fd
    int64_t v12 = unknown_ffffffffc1269f80(); // 0x24b700
    char * v13 = (char *)(v12 + 0x3af497e1); // 0x24b705
    *v13 = *v13 + (char)v3 + (char)(v11 > v9);
    int64_t * v14 = (int64_t *)(int64_t)v7; // 0x24b70f
    int32_t * v15 = (int32_t *)(v12 - 0x11d6502b); // 0x24b712
    *v15 = *v15 + (int32_t)*v14;
    char v16 = *(char *)&v10; // 0x24b718
    v10 = v2 + a2;
    int64_t result = unknown_ffffffffdda6e124(); // 0x24b71e
    if (v16 != -(char)(v3 / 256 + (int64_t)v5)) {
        // 0x24b786
        return result;
    }
    int32_t v17 = v12; // 0x24b710
    uint32_t v18 = v17 >> 31; // 0x24b71b
    int64_t v19 = v18; // 0x24b71b
    int32_t * v20 = (int32_t *)result; // 0x24b725
    *v20 = *v20 + (int32_t)result;
    int16_t v21 = v18; // 0x24b72a
    __asm_outsd(v21, *(int32_t *)v10);
    char v22 = result; // 0x24b72d
    int64_t result2 = unknown_4049e335(); // 0x24b72f
    *v14 = v19;
    if ((v22 + 2 & (v22 ^ -128)) >= 0) {
        // 0x24b786
        return result2;
    }
    // 0x24b737
    __asm_out_133(-88, (char)result2);
    __asm_outsd(v21, *(int32_t *)v10);
    int32_t * v23 = (int32_t *)(v19 - 44); // 0x24b747
    uint32_t v24 = *v23; // 0x24b747
    uint32_t v25 = v24 + (int32_t)v4; // 0x24b747
    *v23 = v25;
    char * v26 = (char *)(int64_t)((0x10000 * (int32_t)result2 >> 16 & -24) + 2 * (v9 - v11 ^ v17)); // 0x24b74a
    *v26 = (char)v7 - 17 + *v26 + (char)(v25 < v24);
    return function_20d0467();
}

// Address range: 0x24b751 - 0x24b769
int64_t function_24b751(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24b751
    int64_t v1; // 0x24b751
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)(v2 ^ a2);
    return function_3520bb49();
}

// Address range: 0x479aee - 0x479af1
int64_t function_479aee(int64_t a1, int64_t a2, int64_t a3) {
    // 0x479aee
    int64_t v1; // 0x479aee
    return v1 & 0xffffffff;
}

// Address range: 0x479af9 - 0x479afe
int64_t function_479af9(void) {
    // 0x479af9
    return function_78dffafa();
}

// Address range: 0x479b4a - 0x479b4b
int64_t function_479b4a(void) {
    // 0x479b4a
    int64_t result; // 0x479b4a
    return result;
}

// Address range: 0x479ba3 - 0x479baf
int64_t function_479ba3(int64_t a1) {
    // 0x479ba3
    int64_t v1; // 0x479ba3
    int64_t v2; // 0x479ba3
    int64_t v3; // 0x479ba3
    if (0x100000000 * v3 >> 32 > (int64_t)&v2) {
        v1 = function_479b4a();
    }
    // 0x479ba7
    return v1 + 0x53d040b9 & 0xffffffff;
}

// Address range: 0x479c08 - 0x479c09
int64_t function_479c08(void) {
    // 0x479c08
    int64_t result; // 0x479c08
    return result;
}

// Address range: 0x479c24 - 0x479c27
int64_t function_479c24(void) {
    // 0x479c24
    int64_t result; // 0x479c24
    return result;
}

// Address range: 0x479c43 - 0x479c7f
int64_t function_479c43(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x479c43
    int64_t v1; // 0x479c43
    bool v2; // 0x479c43
    int64_t v3 = v1 - (v2 ? 0x99bbb12 : 0x99bbb11) & 0xffffff00; // 0x479c48
    int64_t v4 = v3 | 247; // 0x479c48
    *(char *)a1 = (char)a1 | -9;
    char * v5 = (char *)(8 * a4 - 47 + v4); // 0x479c4e
    unsigned char v6 = *v5; // 0x479c4e
    *v5 = v6 - 109;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return v3 | (int64_t)((char)(v6 > 108) - 9 - *(char *)v4);
}

// Address range: 0x479d17 - 0x479d1e
int64_t function_479d17(int64_t a1) {
    // 0x479d17
    bool v1; // 0x479d17
    if (v1) {
        // 0x479d60
        int64_t result; // 0x479d17
        return result;
    }
    // 0x479d19
    return __asm_sti();
}

// Address range: 0x479d2e - 0x479d31
int64_t function_479d2e(void) {
    // 0x479d2e
    int64_t result; // 0x479d2e
    return result;
}

// Address range: 0x479d39 - 0x479d3c
int64_t function_479d39(void) {
    // 0x479d39
    int64_t result; // 0x479d39
    return result;
}

// Address range: 0x479d61 - 0x479d7a
int64_t function_479d61(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x479d61
    int64_t v1; // 0x479d61
    int64_t v2 = v1;
    uint64_t v3 = a3 / 256; // 0x479d62
    *(char *)v2 = (char)(v2 | v3);
    int64_t v4; // 0x479d61
    *(char *)a1 = *(char *)&v4 - (char)v3;
    int32_t * v5 = (int32_t *)(2 * a1 + a4); // 0x479d71
    *v5 = *v5 & 108;
    return function_ffffffffe516abe0();
}

// Address range: 0x479d9e - 0x479da5
int64_t function_479d9e(void) {
    // 0x479d9e
    int64_t v1; // 0x479d9e
    __asm_out_134(109, (int32_t)v1);
    return function_ffffffffa0bec112();
}

// Address range: 0x479db7 - 0x479db8
int64_t function_479db7(void) {
    // 0x479db7
    int64_t result; // 0x479db7
    return result;
}

// Address range: 0x479dd4 - 0x479dd7
int64_t function_479dd4(int64_t a1) {
    // 0x479dd4
    int64_t result; // 0x479dd4
    return result;
}

// Address range: 0x479e2e - 0x479e32
int64_t function_479e2e(int64_t a1) {
    int64_t result = a1; // 0x479e2f
    bool v1; // 0x479e2e
    if (v1) {
        result = function_479db7();
    }
    // 0x479e31
    return result;
}

// Address range: 0x479e65 - 0x479e66
int64_t function_479e65(int64_t a1) {
    // 0x479e65
    int64_t result; // 0x479e65
    return result;
}

// Address range: 0x479e6e - 0x479e70
int64_t function_479e6e(void) {
    // 0x479e6e
    int64_t result; // 0x479e6e
    return result;
}

// Address range: 0x479e96 - 0x479e9d
int64_t function_479e96(int64_t a1) {
    // 0x479e96
    __asm_int1(a1);
    return function_576c4b36();
}

// Address range: 0x479ea7 - 0x479ea8
int64_t function_479ea7(int64_t a1) {
    // 0x479ea7
    int64_t result; // 0x479ea7
    return result;
}

// Address range: 0x479ef1 - 0x479ef6
int64_t function_479ef1(void) {
    // 0x479ef1
    return function_ffffffff8320b166();
}

// Address range: 0x479f24 - 0x479f27
int64_t function_479f24(void) {
    // 0x479f24
    int64_t result; // 0x479f24
    return result;
}

// Address range: 0x479f63 - 0x479f64
int64_t function_479f63(void) {
    // 0x479f63
    int64_t result; // 0x479f63
    return result;
}

// Address range: 0x479f79 - 0x479f7b
int64_t function_479f79(void) {
    // 0x479f79
    int64_t v1; // 0x479f79
    return function_479fd8(v1, v1, v1, v1);
}

// Address range: 0x479f8c - 0x479f9b
int64_t function_479f8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 + 0xc8f17b8); // 0x479f8c
    unsigned char v2 = *v1; // 0x479f8c
    unsigned char v3 = v2 + (char)a4; // 0x479f8c
    *v1 = v3;
    int32_t v4 = *(int32_t *)(a3 + 103) + (int32_t)a1 + (int32_t)(v3 < v2); // 0x479f94
    int64_t result; // 0x479f8c
    if (v4 < 0) {
        int64_t v5; // 0x479f8c
        int64_t v6 = function_479ff5((int64_t)v4, a2, a3, a4, v5, v5, (int64_t)&g1); // 0x479f97
        result = v6;
    }
    // 0x479f9a
    return result;
}

// Address range: 0x479f9b - 0x479fd8
int64_t function_479f9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x479f9b
    int64_t v1; // 0x479f9b
    int64_t v2 = v1;
    int64_t v3 = a4 - 0x12eec204; // 0x479f9b
    __readfsbyte(v3);
    __writefsbyte(v3, -1);
    int64_t v4 = unknown_179cf29(); // 0x479fa9
    uint32_t v5 = (int32_t)v1; // 0x479fb0
    int32_t v6 = (char)v1 > 110; // 0x479fb0
    uint32_t v7 = 2 * v5; // 0x479fb0
    int32_t v8 = v7 | v6; // 0x479fb0
    *(char *)0x17c9e76d7d7d5726 = 108;
    if (v8 < 0 == (v8 + v6 ^ v5) < 0 == (v8 != 0)) {
        // 0x479fd6
        return ((char)v1 > 110 ? v8 <= v5 : v7 < v5 ? 206 : 205) | v4 & -256;
    }
    unsigned char v9 = *(char *)0x2469add27216abea; // 0x479fc8
    return (v2 & 0xff00 & 256 * v1 | v2 & 0xffff00ff) + 0xa7ab670e & 0xffffff00 | (int64_t)v9;
}

// Address range: 0x479fd8 - 0x479fe9
int64_t function_479fd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x479fd8
    int64_t v1; // 0x479fd8
    *(int32_t *)a1 = (int32_t)v1;
    char * v2 = (char *)(v1 - 18); // 0x479fe0
    *v2 = *v2 + 2 * (char)a4;
    return v1 | 42;
}

// Address range: 0x479ff5 - 0x47a00a
int64_t function_479ff5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x479ff5
    int64_t result; // 0x479ff5
    char * v1 = (char *)(result - 123); // 0x479ffb
    *v1 = *v1 | (char)*(int32_t *)(a6 + 19);
    int32_t * v2 = (int32_t *)(a2 + 0x3811282c); // 0x47a000
    *v2 = *v2 + (int32_t)result;
    return result;
}

// Address range: 0x47a020 - 0x47a030
int64_t function_47a020(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 + 7 + 2 * a4); // 0x47a020
    int64_t v2; // 0x47a020
    *v1 = *v1 + (char)((uint64_t)v2 / 256);
    *(char *)a1 = __asm_insb((int16_t)((int32_t)v2 >> 31));
    return __asm_in_135((char)&g1);
}

// Address range: 0x47a033 - 0x47a038
int64_t function_47a033(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47a033
    int64_t v1; // 0x47a033
    int64_t result = v1;
    *(int32_t *)result = (int32_t)(result ^ a3);
    return result;
}

// Address range: 0x47a04e - 0x47a053
int64_t function_47a04e(void) {
    // 0x47a04e
    return function_2419aa75();
}

// Address range: 0x47a057 - 0x47a05a
int64_t function_47a057(int64_t a1) {
    // 0x47a057
    return __asm_in_135((char)a1);
}

// Address range: 0x47a05c - 0x47a0f5
int64_t function_47a05c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x47a05c
    float80_t v1; // 0x47a05c
    *(float64_t *)(a3 - 113) = (float64_t)v1;
    bool v2; // 0x47a05c
    if (v2) {
        // 0x47a064
        return function_3ba872c7();
    }
    if (v2) {
        // 0x47a0f0
        return function_fffffffff0b48d70();
    }
    int32_t v3 = *(int32_t *)-0x2ed6229604eba824; // 0x47a088
    __asm_int(-10);
    int16_t v4 = a3; // 0x47a095
    int64_t result = (int64_t)__asm_in_136(v4) | (int64_t)(v3 & -256); // 0x47a095
    if ((char)v3 >= -74) {
        // 0x47a0c3
        return result;
    }
    int64_t v5 = a2 + 1 + a3; // 0x47a098
    char * v6 = (char *)(a3 - 0x3d1dd04e); // 0x47a09c
    *v6 = *v6 | (char)(a4 / 256);
    int32_t * v7 = (int32_t *)(v5 & 0xffffffff); // 0x47a0a2
    *v7 = *v7 - (int32_t)v5;
    *(char *)a1 = __asm_insb(v4);
    *(int32_t *)a1 = __asm_insd(v4);
    return result | 65;
}

// Address range: 0x47a0fc - 0x47a102
int64_t function_47a0fc(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 123); // 0x47a0fc
    int64_t v2; // 0x47a0fc
    *v1 = *v1 + (int32_t)v2;
    int64_t result; // 0x47a0fc
    int64_t v3 = result;
    *(int32_t *)v3 = *(int32_t *)&result | (int32_t)v3;
    return result;
}

// Address range: 0x47a120 - 0x47a123
int64_t function_47a120(void) {
    // 0x47a120
    int64_t result; // 0x47a120
    return result;
}

// Address range: 0x47a123 - 0x47a12e
int64_t function_47a123(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47a123
    int64_t result; // 0x47a123
    return result;
}

// Address range: 0x47a152 - 0x47a15d
int64_t function_47a152(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47a152
    int64_t result; // 0x47a152
    int64_t v1 = result;
    *(int32_t *)(v1 + 83) = (int32_t)v1;
    return result;
}

// Address range: 0x47a15d - 0x47a162
int64_t function_47a15d(void) {
    // 0x47a15d
    return function_ffffffff96f9a2ca();
}

// Address range: 0x47a17e - 0x47a181
int64_t function_47a17e(void) {
    // 0x47a17e
    int64_t result; // 0x47a17e
    return result;
}

// Address range: 0x47a186 - 0x47a187
int64_t function_47a186(void) {
    // 0x47a186
    int64_t result; // 0x47a186
    return result;
}

// Address range: 0x47a266 - 0x47a267
int64_t function_47a266(void) {
    // 0x47a266
    int64_t result; // 0x47a266
    return result;
}

// Address range: 0x47a282 - 0x47a283
int64_t function_47a282(void) {
    // 0x47a282
    int64_t result; // 0x47a282
    return result;
}

// Address range: 0x47a284 - 0x47a289
int64_t function_47a284(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x47a284
    int64_t result; // 0x47a284
    bool v1; // 0x47a284
    if (a4 != 1 && !v1) {
        result = function_47a266();
    }
    // 0x47a286
    return result;
}

// Address range: 0x47a2f2 - 0x47a2f7
int64_t function_47a2f2(void) {
    // 0x47a2f2
    return function_ffffffffe0203346();
}

// Address range: 0x47a387 - 0x47a388
int64_t function_47a387(void) {
    // 0x47a387
    int64_t result; // 0x47a387
    return result;
}

// Address range: 0x47a3dc - 0x47a3df
int64_t function_47a3dc(int64_t a1) {
    // 0x47a3dc
    int64_t result; // 0x47a3dc
    return result;
}

// Address range: 0x47a3e2 - 0x47a3ea
int64_t function_47a3e2(int64_t a1) {
    if ((a1 & 64) != 0 || (char)a1 < 0 != (a1 & (int64_t)L"\n2") != 0) {
        function_47a387();
    }
    // 0x47a3e5
    return function_ffffffff951dec7c();
}

// Address range: 0x47a40c - 0x47a40d
int64_t function_47a40c(void) {
    // 0x47a40c
    int64_t result; // 0x47a40c
    return result;
}

// Address range: 0x47a461 - 0x47a463
int64_t function_47a461(void) {
    // 0x47a461
    return function_47a40c();
}

// Address range: 0x47a480 - 0x47a4b1
int64_t function_47a480(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 256 * a4 + a3 & 0xff00 | a3 & -0xff01; // 0x47a480
    int32_t * v2 = (int32_t *)v1; // 0x47a48f
    int32_t v3 = a4; // 0x47a48f
    *v2 = *v2 + v3;
    __asm_wait();
    int64_t v4 = a1; // bp-16, 0x47a49b
    int64_t v5; // 0x47a480
    *(char *)a1 = *(char *)&v5;
    *(int32_t *)(a1 + 0x3e3c4b01) = v3;
    __asm_outsb((int16_t)v1, *(char *)(a2 + 1));
    return (int64_t)&v4;
}

// Address range: 0x47a4b2 - 0x47a65e
int64_t function_47a4b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x47a4b2
    int64_t v1; // 0x47a4b2
    int64_t v2 = v1;
    int64_t v3 = a6;
    *(int32_t *)v2 = (int32_t)(v2 ^ a1);
    char v4 = v1; // 0x47a4b4
    __asm_out_133(92, v4);
    int64_t v5; // 0x47a4b2
    *(char *)a2 = *(char *)&v5 + v4;
    *(int32_t *)(a4 + 62) = (int32_t)a2;
    uint64_t v6 = __asm_int3(); // 0x47a4c0
    int64_t v7 = 256 * a3;
    int64_t v8 = v6 + v7 & 0xff00 | v6 & -0x10000; // 0x47a4c4
    __asm_out_133(111, (char)v6);
    int64_t result = (v8 | v6 % 256) ^ 186; // 0x47a4cb
    *(char *)a1 = (char)result;
    if (a4 == 1) {
        // 0x47a4e3
        return result;
    }
    int64_t v9 = v3; // 0x47a539
    int64_t result2 = ((result + 32) % 256 | v8) + 0x33d9e7d9; // 0x47a53a
    v3 = 0x59340cfa;
    int64_t v10 = v9 | v7 & 0xff00; // 0x47a545
    char * v11 = (char *)v10; // 0x47a547
    *v11 = *v11 + 98;
    int32_t * v12 = (int32_t *)(a3 + 43); // 0x47a54b
    uint32_t v13 = *v12; // 0x47a54b
    uint32_t v14 = (int32_t)(int64_t)&v3; // 0x47a54b
    int32_t v15 = v13 - v14; // 0x47a54b
    *v12 = v15;
    if (((v15 ^ v13) & (v13 ^ v14)) >= 0) {
        // 0x47a550
        return 256 * (v9 + result2 / 256 + (int64_t)(v13 < v14)) & 0xff00 | result2 & -0xff01;
    }
    // 0x47a5ce
    if (v10 == 1 || v15 != 0) {
        // 0x47a4e3
        return result2;
    }
    // 0x47a567
    __asm_outsd((int16_t)a3, *(int32_t *)&v5);
    return result2;
}

// Address range: 0x47a680 - 0x47a681
int64_t function_47a680(int64_t a1) {
    // 0x47a680
    int64_t result; // 0x47a680
    return result;
}

// Address range: 0x47a6a6 - 0x47a6b4
int64_t function_47a6a6(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x47a6a6
    int64_t result; // 0x47a6a6
    __asm_out_137((int16_t)a3, (int32_t)result);
    char * v1 = (char *)(a4 - 112); // 0x47a6ab
    *v1 = *v1 & (char)(result / 256);
    int64_t v2; // 0x47a6a6
    char v3 = *(char *)&v2; // 0x47a6ae
    bool v4; // 0x47a6a6
    __asm_outsb((int16_t)(256 * (result + a3 / 256 + (int64_t)v4) | a3 % 256), v3);
    return result;
}

// Address range: 0x47a6cd - 0x47a6d0
int64_t function_47a6cd(int64_t a1) {
    // 0x47a6cd
    int64_t result; // 0x47a6cd
    return result;
}

// Address range: 0x47a778 - 0x47a779
int64_t function_47a778(void) {
    // 0x47a778
    int64_t result; // 0x47a778
    return result;
}

// Address range: 0x47a77e - 0x47a78f
int64_t function_47a77e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x47a77e
    __asm_iretd();
    __asm_wait();
    return function_ffffffffc1ecbec5();
}

// Address range: 0x47a7d7 - 0x47a7da
int64_t function_47a7d7(int64_t a1) {
    // 0x47a7d7
    int64_t result; // 0x47a7d7
    bool v1; // 0x47a7d7
    if (v1) {
        result = function_47a778();
    }
    // 0x47a7d9
    return result;
}

// Address range: 0x47a7e4 - 0x47a7ed
int64_t function_47a7e4(int64_t a1) {
    // 0x47a7e4
    int64_t v1; // 0x47a7e4
    int64_t v2 = v1;
    int64_t result = (v2 - ((char)v1 > (char)v2 ? 113 : 112)) % 256 | v2 & -256; // 0x47a7e6
    *(int32_t *)result = (int32_t)v1;
    return result;
}

// Address range: 0x47a80c - 0x47a80f
int64_t function_47a80c(void) {
    // 0x47a80c
    int64_t result; // 0x47a80c
    return result;
}

// Address range: 0x47a82a - 0x47a82f
int64_t function_47a82a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47a82a
    int64_t result; // 0x47a82a
    bool v1; // 0x47a82a
    *(int32_t *)a4 = 0x80000000 * (int32_t)v1 | (int32_t)result / 2;
    return result;
}

// Address range: 0x47a846 - 0x47a849
int64_t function_47a846(void) {
    // 0x47a846
    int64_t result; // 0x47a846
    return result;
}

// Address range: 0x47a858 - 0x47a859
int64_t function_47a858(void) {
    // 0x47a858
    int64_t result; // 0x47a858
    return result;
}

// Address range: 0x47a875 - 0x47a879
int64_t function_47a875(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47a875
    int64_t v1; // 0x47a875
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x47a881 - 0x47a882
int64_t function_47a881(void) {
    // 0x47a881
    int64_t result; // 0x47a881
    return result;
}

// Address range: 0x47a88d - 0x47a8a7
int64_t function_47a88d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47a88d
    int64_t v1; // 0x47a88d
    uint64_t v2 = v1;
    int64_t v3 = v2 ^ 15; // 0x47a88d
    char * v4 = (char *)(a1 + 97); // 0x47a891
    unsigned char v5 = *v4; // 0x47a891
    unsigned char v6 = (char)(v2 / 256); // 0x47a891
    char v7 = v5 - v6; // 0x47a891
    *v4 = v7;
    *(char *)-0x7eae1b7e1ee59e1c = (char)v3;
    int64_t result = 2 * v3 & 0xfffffffe | (int64_t)(v5 < v6); // 0x47a89f
    if (v7 == 0) {
        result = function_47a881();
    }
    // 0x47a8a1
    *(char *)a1 = (char)result;
    bool v8; // 0x47a88d
    *(int32_t *)((v8 ? -1 : 1) + a1) = __asm_insd((int16_t)a3);
    return result;
}

// Address range: 0x47a8a7 - 0x47a8af
int64_t function_47a8a7(void) {
    // 0x47a8a7
    int64_t v1; // 0x47a8a7
    return v1 + 0xdd1ec509 & 0xffffffff;
}

// Address range: 0x47a8b1 - 0x47a8b3
int64_t function_47a8b1(void) {
    // 0x47a8b1
    int64_t result; // 0x47a8b1
    return result;
}

// Address range: 0x47a8c5 - 0x47a8c6
int64_t function_47a8c5(void) {
    // 0x47a8c5
    int64_t result; // 0x47a8c5
    return result;
}
