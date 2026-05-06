/*
 * Targeted RetDec C for native executable gap queue batch 3942.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3614a-0x36166 rank=- name=- kind=- bytes=- uncovered=-
 *   0x725f1-0x7260a rank=- name=- kind=- bytes=- uncovered=-
 *   0x49eb85-0x49eba0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49efd4-0x49eff0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a9774-0x4a9790 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4aa525-0x4aa540 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ac9c7-0x4ac9e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ad0e4-0x4ad100 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ad1e4-0x4ad200 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b0aa4-0x4b0ac0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b9dd5-0x4b9df0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bba05-0x4bba20 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bbf24-0x4bbf40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c53a4-0x4c53c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d19b5-0x4d19d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e9be4-0x4e9c00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ea2d5-0x4ea2f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4eed84-0x4eeda0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53fcc5-0x53fce0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x549fe6-0x54a000 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54de04-0x54de20 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54f1b4-0x54f1d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5509b6-0x5509d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x551735-0x551750 rank=- name=- kind=- bytes=- uncovered=-
 *   0x551806-0x551820 rank=- name=- kind=- bytes=- uncovered=-
 *   0x567995-0x5679b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5684b4-0x5684d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x569085-0x5690a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56b274-0x56b290 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56b544-0x56b560 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56ff76-0x56ff90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57d6e5-0x57d700 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_200c0();
int64_t function_3614a(int64_t result);
int64_t function_3614e(int64_t a1);
int64_t function_49e997();
int64_t function_49eb85(int32_t a1);
int64_t function_49efc8();
int64_t function_49efd4(void);
int64_t function_49efe0(void);
int64_t function_4a9639();
int64_t function_4a976b();
int64_t function_4a9774(int64_t a1);
int64_t function_4a9776(int64_t a1);
int64_t function_4aa4c7();
int64_t function_4aa4f5();
int64_t function_4aa525(void);
int64_t function_4aa530(void);
int64_t function_4ac6c1();
int64_t function_4ac9c7(void);
int64_t function_4ac9cc(void);
int64_t function_4ad0c2();
int64_t function_4ad0e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4ad0f0(void);
int64_t function_4ad15c();
int64_t function_4ad1e4(void);
int64_t function_4ad1e5(void);
int64_t function_4ad1ea(void);
int64_t function_4b08f0();
int64_t function_4b0a8c();
int64_t function_4b0aa4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b0ab1(void);
int64_t function_4b0ac0();
int64_t function_4b9708();
int64_t function_4b9dd5(void);
int64_t function_4bb932();
int64_t function_4bb995();
int64_t function_4bba05(void);
int64_t function_4bba10(void);
int64_t function_4bbd2e();
int64_t function_4bbf24(void);
int64_t function_4bbf26(void);
int64_t function_4c5364();
int64_t function_4c538b();
int64_t function_4c53a4(void);
int64_t function_4c53a5(void);
int64_t function_4c53a7(void);
int64_t function_4d19b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4d19be(void);
int64_t function_4e9be4(void);
int64_t function_4e9be5(void);
int64_t function_4e9beb(int64_t a1);
int64_t function_4ea2b0();
int64_t function_4ea2d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4eeb30();
int64_t function_4eed84(void);
int64_t function_4eed91(void);
int64_t function_53fc2f();
int64_t function_53fc95();
int64_t function_53fcc5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_53fcd6(void);
int64_t function_542470();
int64_t function_549f40();
int64_t function_549fe6(int64_t a1);
int64_t function_549ff3(int64_t a1, int64_t a2);
int64_t function_54ddad();
int64_t function_54de04(void);
int64_t function_54de10(void);
int64_t function_54ed10();
int64_t function_54f117();
int64_t function_54f1b4(int64_t a1, int64_t a2);
int64_t function_54f1c1(void);
int64_t function_550900();
int64_t function_5509b6(void);
int64_t function_5515b0();
int64_t function_551735(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_551806(void);
int64_t function_565970();
int64_t function_567995(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_5679a4(int64_t a1);
int64_t function_5684b4(void);
int64_t function_569085(int64_t a1, int64_t a2, int64_t a3);
int64_t function_56b274(void);
int64_t function_56b544(void);
int64_t function_56ff76(void);
int64_t function_56ff78(void);
int64_t function_56ff7b(void);
int64_t function_57d5c6();
int64_t function_57d61b();
int64_t function_57d6e5(void);
int64_t function_57d6f0(void);
int64_t function_57d6f8(int64_t a1);
int64_t function_7259e();
int64_t function_725f1(int64_t a1);
int64_t function_83e8580348038b48();

// Address range: 0x3614a - 0x3614e
int64_t function_3614a(int64_t result) {
    // 0x3614a
    return result;
}

// Address range: 0x3614e - 0x36166
int64_t function_3614e(int64_t a1) {
    // 0x3614e
    *(int64_t *)a1 = 0;
    *(int64_t *)(a1 + 8) = 0;
    *(int64_t *)(a1 + 16) = 0;
    int64_t result; // 0x3614e
    return result;
}

// Address range: 0x725f1 - 0x72609
int64_t function_725f1(int64_t a1) {
    // 0x725f1
    function_7259e();
    return function_4eeb30(a1, 416);
}

// Address range: 0x49eb85 - 0x49eb97
int64_t function_49eb85(int32_t a1) {
    // 0x49eb85
    int64_t v1; // 0x49eb85
    int64_t v2 = v1;
    bool v3; // 0x49eb85
    int64_t v4 = *(int64_t *)(((v2 + 36 + (int64_t)v3) % 256 | v2 & -256) + 40); // 0x49eb8b
    return function_49e997(v4, a1);
}

// Address range: 0x49efd4 - 0x49efd9
int64_t function_49efd4(void) {
    // 0x49efd4
    bool v1; // 0x49efd4
    if (!v1) {
        function_49efc8();
    }
    // 0x49efd6
    return 0;
}

// Address range: 0x49efe0 - 0x49efe2
int64_t function_49efe0(void) {
    // 0x49efe0
    int64_t result; // 0x49efe0
    return result;
}

// Address range: 0x4a9774 - 0x4a9776
int64_t function_4a9774(int64_t a1) {
    // 0x4a9774
    int64_t result; // 0x4a9774
    return result;
}

// Address range: 0x4a9776 - 0x4a9783
int64_t function_4a9776(int64_t a1) {
    if (a1 != 0) {
        function_4a9639();
    }
    // 0x4a977f
    return function_4a976b();
}

// Address range: 0x4aa525 - 0x4aa527
int64_t function_4aa525(void) {
    // 0x4aa525
    return function_4aa4c7();
}

// Address range: 0x4aa530 - 0x4aa537
int64_t function_4aa530(void) {
    // 0x4aa530
    return function_4aa4f5();
}

// Address range: 0x4ac9c7 - 0x4ac9cc
int64_t function_4ac9c7(void) {
    // 0x4ac9c7
    return function_4ac6c1();
}

// Address range: 0x4ac9cc - 0x4ac9d6
int64_t function_4ac9cc(void) {
    // 0x4ac9cc
    return function_4ac6c1();
}

// Address range: 0x4ad0e4 - 0x4ad0e6
int64_t function_4ad0e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4ad0e4
    int64_t result; // 0x4ad0e4
    return result;
}

// Address range: 0x4ad0f0 - 0x4ad0f7
int64_t function_4ad0f0(void) {
    // 0x4ad0f0
    return function_4ad0c2();
}

// Address range: 0x4ad1e4 - 0x4ad1e5
int64_t function_4ad1e4(void) {
    // 0x4ad1e4
    int64_t result; // 0x4ad1e4
    return result;
}

// Address range: 0x4ad1e5 - 0x4ad1ea
int64_t function_4ad1e5(void) {
    // 0x4ad1e5
    return function_4ad15c();
}

// Address range: 0x4ad1ea - 0x4ad1f4
int64_t function_4ad1ea(void) {
    // 0x4ad1ea
    return function_4ad15c();
}

// Address range: 0x4b0aa4 - 0x4b0ab1
int64_t function_4b0aa4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b0aa4
    int64_t v1; // 0x4b0aa4
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x4b0aa4
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return function_4b08f0();
}

// Address range: 0x4b0ab1 - 0x4b0ab8
int64_t function_4b0ab1(void) {
    // 0x4b0ab1
    return function_4b0a8c();
}

// Address range: 0x4b9dd5 - 0x4b9df0
int64_t function_4b9dd5(void) {
    // 0x4b9dd5
    int64_t v1; // 0x4b9dd5
    if ((int32_t)v1 != 0) {
        function_4b9708();
    }
    // 0x4b9ddd
    int64_t v2; // bp+112, 0x4b9dd5
    function_4b0ac0(v1 + 48, &v2);
    return function_4b9708();
}

// Address range: 0x4bba05 - 0x4bba08
int64_t function_4bba05(void) {
    // 0x4bba05
    return function_4bb995();
}

// Address range: 0x4bba10 - 0x4bba1a
int64_t function_4bba10(void) {
    // 0x4bba10
    return function_4bb932();
}

// Address range: 0x4bbf24 - 0x4bbf25
int64_t function_4bbf24(void) {
    // 0x4bbf24
    int64_t result; // 0x4bbf24
    return result;
}

// Address range: 0x4bbf26 - 0x4bbf35
int64_t function_4bbf26(void) {
    // 0x4bbf26
    return function_4bbd2e();
}

// Address range: 0x4c53a4 - 0x4c53a5
int64_t function_4c53a4(void) {
    // 0x4c53a4
    int64_t result; // 0x4c53a4
    return result;
}

// Address range: 0x4c53a5 - 0x4c53a7
int64_t function_4c53a5(void) {
    // 0x4c53a5
    return function_4c5364();
}

// Address range: 0x4c53a7 - 0x4c53b3
int64_t function_4c53a7(void) {
    // 0x4c53a7
    int64_t v1; // 0x4c53a7
    if ((int32_t)v1 == 5) {
        function_4c538b();
    }
    // 0x4c53ac
    return function_4c5364();
}

// Address range: 0x4d19b5 - 0x4d19bb
int64_t function_4d19b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x4679143f); // 0x4d19b5
    *v1 = *v1 - 1;
    int64_t result; // 0x4d19b5
    return result;
}

// Address range: 0x4d19be - 0x4d19c7
int64_t function_4d19be(void) {
    // 0x4d19be
    int64_t result; // 0x4d19be
    return result;
}

// Address range: 0x4e9be4 - 0x4e9be5
int64_t function_4e9be4(void) {
    // 0x4e9be4
    int64_t result; // 0x4e9be4
    return result;
}

// Address range: 0x4e9be5 - 0x4e9beb
int64_t function_4e9be5(void) {
    // 0x4e9be5
    return function_83e8580348038b48();
}

// Address range: 0x4e9beb - 0x4e9bf3
int64_t function_4e9beb(int64_t a1) {
    // 0x4e9beb
    int64_t result; // 0x4e9beb
    return result;
}

// Address range: 0x4ea2d5 - 0x4ea2e7
int64_t function_4ea2d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4ea2d5
    int64_t v1; // 0x4ea2d5
    char * v2 = (char *)(v1 - 117); // 0x4ea2d5
    char v3 = a4; // 0x4ea2d5
    bool v4; // 0x4ea2d5
    *v2 = *v2 + v3 + (char)v4;
    char * v5 = (char *)(v1 - 125); // 0x4ea2d8
    *v5 = *v5 | v3;
    *(char *)v1 = -1;
    *(int32_t *)(a1 + 24) = (int32_t)a2;
    return function_4ea2b0();
}

// Address range: 0x4eed84 - 0x4eed8d
int64_t function_4eed84(void) {
    // 0x4eed84
    int64_t syscall_number; // 0x4eed84
    return syscall((int32_t)syscall_number);
}

// Address range: 0x4eed91 - 0x4eed94
int64_t function_4eed91(void) {
    // 0x4eed91
    int64_t result; // 0x4eed91
    return result;
}

// Address range: 0x53fcc5 - 0x53fcd6
int64_t function_53fcc5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x53fcc5
    int64_t v1; // 0x53fcc5
    int32_t * v2 = (int32_t *)(v1 - 117); // 0x53fcc5
    *v2 = *v2 - 1;
    char * v3 = (char *)(v1 - 0x3d7cb7fe); // 0x53fcc9
    bool v4; // 0x53fcc5
    *v3 = (char)v4 + (char)a4 + *v3;
    *(int32_t *)(v1 + 16) = (int32_t)a3;
    return function_53fc95();
}

// Address range: 0x53fcd6 - 0x53fcde
int64_t function_53fcd6(void) {
    // 0x53fcd6
    return function_53fc2f();
}

// Address range: 0x549fe6 - 0x549ff2
int64_t function_549fe6(int64_t a1) {
    // 0x549fe6
    int64_t v1; // 0x549fe6
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x549fe6
    *(int32_t *)a1 = *(int32_t *)&v3;
    return function_549f40();
}

// Address range: 0x549ff3 - 0x549ff9
int64_t function_549ff3(int64_t a1, int64_t a2) {
    // 0x549ff3
    int64_t v1; // 0x549ff3
    return v1 & -0x10000 | (uint64_t)v1 % 0x10000;
}

// Address range: 0x54de04 - 0x54de09
int64_t function_54de04(void) {
    // 0x54de04
    return function_54ddad();
}

// Address range: 0x54de10 - 0x54de16
int64_t function_54de10(void) {
    // 0x54de10
    return 0xfffffffe;
}

// Address range: 0x54f1b4 - 0x54f1c0
int64_t function_54f1b4(int64_t a1, int64_t a2) {
    // 0x54f1b4
    function_54ed10(a2 & 0xffffffff);
    return function_54f117();
}

// Address range: 0x54f1c1 - 0x54f1c7
int64_t function_54f1c1(void) {
    int64_t v1 = __asm_sti(); // 0x54f1c1
    bool v2; // 0x54f1c1
    return (v1 + 173 + (int64_t)(bool)v2) % 256 | v1 & -256;
}

// Address range: 0x5509b6 - 0x5509c5
int64_t function_5509b6(void) {
    // 0x5509b6
    return function_550900();
}

// Address range: 0x551735 - 0x55174f
int64_t function_551735(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x551735
    int64_t v1; // 0x551735
    *(int64_t *)v1 = function_5515b0(a2 & 0xffffffff, a3, a4);
    return 0;
}

// Address range: 0x551806 - 0x551820
int64_t function_551806(void) {
    // 0x551806
    return function_542470("basic_string::_S_construct null not valid");
}

// Address range: 0x567995 - 0x5679a1
int64_t function_567995(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x567995
    int64_t result; // 0x567995
    char * v1 = (char *)(result + 9); // 0x567995
    *v1 = *v1 + (char)(a3 / 256);
    return result;
}

// Address range: 0x5679a4 - 0x5679a8
int64_t function_5679a4(int64_t a1) {
    // 0x5679a4
    int64_t result; // 0x5679a4
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x5684b4 - 0x5684d0
int64_t function_5684b4(void) {
    // 0x5684b4
    int64_t v1; // 0x5684b4
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g1;
}

// Address range: 0x569085 - 0x5690a0
int64_t function_569085(int64_t a1, int64_t a2, int64_t a3) {
    // 0x569085
    if (a3 != -1) {
        // 0x56908e
        int64_t v1; // 0x569085
        _Unwind_Resume((struct _Unwind_Exception *)v1);
    }
    // 0x569093
    return function_200c0();
}

// Address range: 0x56b274 - 0x56b290
int64_t function_56b274(void) {
    // 0x56b274
    int64_t v1; // 0x56b274
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g1;
}

// Address range: 0x56b544 - 0x56b560
int64_t function_56b544(void) {
    // 0x56b544
    int64_t v1; // 0x56b544
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g1;
}

// Address range: 0x56ff76 - 0x56ff77
int64_t function_56ff76(void) {
    // 0x56ff76
    int64_t result; // 0x56ff76
    return result;
}

// Address range: 0x56ff78 - 0x56ff79
int64_t function_56ff78(void) {
    // 0x56ff78
    int64_t result; // 0x56ff78
    return result;
}

// Address range: 0x56ff7b - 0x56ff7e
int64_t function_56ff7b(void) {
    // 0x56ff7b
    int64_t result; // 0x56ff7b
    return result;
}

// Address range: 0x57d6e5 - 0x57d6ea
int64_t function_57d6e5(void) {
    // 0x57d6e5
    return function_57d5c6();
}

// Address range: 0x57d6f0 - 0x57d6f3
int64_t function_57d6f0(void) {
    // 0x57d6f0
    return 0;
}

// Address range: 0x57d6f8 - 0x57d6ff
int64_t function_57d6f8(int64_t a1) {
    // 0x57d6f8
    return function_57d61b(0);
}
