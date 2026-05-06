/*
 * Targeted RetDec C for native executable gap queue batch 1385.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1a6ebb-0x1a70bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a72bb-0x1a74bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a74bb-0x1a76bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a76bb-0x1a78bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a78bb-0x1a7abb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a7cbb-0x1a7ebb rank=- name=- kind=- bytes=- uncovered=-
 *   0x247618-0x247818 rank=- name=- kind=- bytes=- uncovered=-
 *   0x247818-0x247a18 rank=- name=- kind=- bytes=- uncovered=-
 *   0x247a18-0x247c18 rank=- name=- kind=- bytes=- uncovered=-
 *   0x27e19f-0x27e39f rank=- name=- kind=- bytes=- uncovered=-
 *   0x27e39f-0x27e59f rank=- name=- kind=- bytes=- uncovered=-
 *   0x27e59f-0x27e79f rank=- name=- kind=- bytes=- uncovered=-
 *   0x27e79f-0x27e99f rank=- name=- kind=- bytes=- uncovered=-
 *   0x27e99f-0x27eb9f rank=- name=- kind=- bytes=- uncovered=-
 *   0x27ed9f-0x27ef9f rank=- name=- kind=- bytes=- uncovered=-
 *   0x27ef9f-0x27f19f rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_164ee9b();
int64_t function_1a6ebb(void);
int64_t function_1a6f07(int64_t a1, int64_t a2, int64_t result);
int64_t function_1a6f5a(void);
int64_t function_1a6f62(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a7005(void);
int64_t function_1a7011(int64_t a1, int64_t a2);
int64_t function_1a703e(void);
int64_t function_1a7044(int64_t a1, int64_t a2, uint32_t a3, int64_t a4);
int64_t function_1a72a1();
int64_t function_1a72a6();
int64_t function_1a72bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a7321(void);
int64_t function_1a7379(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_1a744d(void);
int64_t function_1a7475(int64_t a1, int64_t a2);
int64_t function_1a74d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a74f3(void);
int64_t function_1a751c(int64_t a1);
int64_t function_1a7541(void);
int64_t function_1a7556(void);
int64_t function_1a7568(void);
int64_t function_1a7570(int64_t a1, int64_t a2);
int64_t function_1a757d(int64_t a1, int64_t a2);
int64_t function_1a7590(void);
int64_t function_1a7598(int64_t a1, int64_t a2);
int64_t function_1a759b(int64_t a1);
int64_t function_1a75d7(int64_t a1);
int64_t function_1a760b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a774b(int64_t a1);
int64_t function_1a777d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1a77ee(int64_t a1);
int64_t function_1a78a5(void);
int64_t function_1a7906(int64_t a1);
int64_t function_1a798a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a79bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a7cbb(int64_t a1);
int64_t function_1a7d2c(int64_t a1);
int64_t function_1a7d85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a7def(int64_t a1);
int64_t function_1a7e12(int64_t a1);
int64_t function_1a7e17(void);
int64_t function_1a7e3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_210986f();
int64_t function_247618(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24761c(int64_t a1);
int64_t function_247655(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2477a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_247918(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_247a83(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_247c15(void);
int64_t function_27e19d();
int64_t function_27e19f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27e242(int64_t a1);
int64_t function_27e2aa(int64_t a1, int64_t a2);
int64_t function_27e2bc(void);
int64_t function_27e2c5(int64_t a1);
int64_t function_27e2d1(int64_t a1);
int64_t function_27e372(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27e384(void);
int64_t function_27e38a(void);
int64_t function_27e3b0(int64_t a1);
int64_t function_27e3bf(void);
int64_t function_27e3f7(void);
int64_t function_27e41b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27e421(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_27e4c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27e4c9(void);
int64_t function_27e4d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27e527(void);
int64_t function_27e544(void);
int64_t function_27e56e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27e64e(void);
int64_t function_27e675(int64_t a1);
int64_t function_27e67c(void);
int64_t function_27e680(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_27e690(void);
int64_t function_27e6f4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_27e6fe(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27e706(void);
int64_t function_27e71b(void);
int64_t function_27e71d(void);
int64_t function_27e738(int64_t a1);
int64_t function_27e75b(void);
int64_t function_27e760(void);
int64_t function_27e76a(int64_t a1, int64_t a2);
int64_t function_27e781(int64_t a1);
int64_t function_27e7a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27e7c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27e7eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27e82e(int64_t a1);
int64_t function_27e868(int64_t a1);
int64_t function_27e86e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27e8a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27e8ce(void);
int64_t function_27e943(void);
int64_t function_27e945(void);
int64_t function_27e981(void);
int64_t function_27e999(void);
int64_t function_27e9cc(void);
int64_t function_27e9f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_27ea4d(void);
int64_t function_27ea57(int64_t a1);
int64_t function_27ea5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_27eb1e(void);
int64_t function_27ed9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27edde(void);
int64_t function_27edec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_27eea9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27eebc(int64_t a1);
int64_t function_27ef32(void);
int64_t function_27ef6b(int64_t a1);
int64_t function_27ef71(void);
int64_t function_27ef7a(void);
int64_t function_27ef86(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t result);
int64_t function_27f056(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27f07d(void);
int64_t function_27f0d7(int64_t a1);
int64_t function_27f106(void);
int64_t function_27f109(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27f156(void);
int64_t function_27f15f(void);
int64_t function_27f165(void);
int64_t function_27f168(void);
int64_t function_27f16e(void);
int64_t function_27f174(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27f185(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d94ad9b();
int64_t function_63aa2231();
int64_t function_7222b72a();
int64_t function_76ca73d8();
int64_t function_87d35a8();
int64_t function_cf3c7();
int64_t function_ffffffff83547958();
int64_t function_ffffffffa67eab92();
int64_t function_ffffffffaf641963();
int64_t function_ffffffffb4b5725f();
int64_t function_ffffffffb87987ee();
int64_t function_ffffffffd88167e2();
int64_t function_ffffffffd9c3d399();
int64_t function_ffffffffe81c60ff();
int64_t unknown_1032501d();
int64_t unknown_13f1ede0();
int64_t unknown_2367dd36();
int64_t unknown_23c24098();
int64_t unknown_259142cc();
int64_t unknown_291d80fd();
int64_t unknown_2e5b437();
int64_t unknown_362fd013();
int64_t unknown_391d8563();
int64_t unknown_399c1d4a();
int64_t unknown_3a328be1();
int64_t unknown_3a32c7f1();
int64_t unknown_3aa42578();
int64_t unknown_3acff7b6();
int64_t unknown_3d1a7744();
int64_t unknown_3d1c5f87();
int64_t unknown_3daa2479();
int64_t unknown_416ddd72();
int64_t unknown_4418542f();
int64_t unknown_5441b24b();
int64_t unknown_7a1fbe43();
int64_t unknown_d7c5f95();
int64_t unknown_ffffffff8849d38b();
int64_t unknown_ffffffff91e61a61();
int64_t unknown_ffffffff95cdf7ba();
int64_t unknown_ffffffff9dfaeabb();
int64_t unknown_ffffffffa3d76a09();
int64_t unknown_ffffffffa6289ddb();
int64_t unknown_ffffffffa7a1de87();
int64_t unknown_ffffffffa8c6de27();
int64_t unknown_ffffffffab1a58b2();
int64_t unknown_ffffffffac1e3b7f();
int64_t unknown_ffffffffb1dfae4d();
int64_t unknown_ffffffffb1edee5c();
int64_t unknown_ffffffffb2238b97();
int64_t unknown_ffffffffb4458118();
int64_t unknown_ffffffffb44c0790();
int64_t unknown_ffffffffb464f0ca();
int64_t unknown_ffffffffb4653ee3();
int64_t unknown_ffffffffb4654eb3();
int64_t unknown_ffffffffb4a9349d();
int64_t unknown_ffffffffcb6f49c2();
int64_t unknown_ffffffffcc257cbd();
int64_t unknown_ffffffffd0b05237();
int64_t unknown_ffffffffe82370c1();
int64_t unknown_ffffffffe8afe4a1();
int64_t unknown_ffffffffe8e40b6e();
int64_t unknown_fffffffff6d4017f();

// Address range: 0x1a6ebb - 0x1a6ed0
int64_t function_1a6ebb(void) {
    // 0x1a6ebb
    unknown_ffffffffe82370c1();
    return function_76ca73d8();
}

// Address range: 0x1a6f07 - 0x1a6f0d
int64_t function_1a6f07(int64_t a1, int64_t a2, int64_t result) {
    // 0x1a6f07
    int64_t v1; // 0x1a6f07
    *(int32_t *)a2 = 2 * (int32_t)v1;
    return result;
}

// Address range: 0x1a6f5a - 0x1a6f5b
int64_t function_1a6f5a(void) {
    // 0x1a6f5a
    int64_t result; // 0x1a6f5a
    return result;
}

// Address range: 0x1a6f62 - 0x1a6fcf
int64_t function_1a6f62(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = (int32_t)unknown_ffffffffe8e40b6e() - 0x239cd384; // 0x1a6f72
    uint32_t v2 = v1 >> 31; // 0x1a6f72
    int64_t v3 = v2; // 0x1a6f72
    *(int32_t *)a1 = v1;
    bool v4; // 0x1a6f62
    int64_t v5 = (v4 ? -4 : 4) + a1; // 0x1a6f73
    int64_t v6; // 0x1a6f62
    int32_t v7 = *(int32_t *)&v6; // 0x1a6f75
    int64_t v8 = a4 - 1; // 0x1a6f78
    v6 = v8;
    int64_t v9 = v7 & v1; // 0x1a6f78
    if (v8 != 0) {
        v9 = function_1a6f62(v5, a2, v3, v8, (int64_t)&g8);
    }
    int32_t * v10 = (int32_t *)v5; // 0x1a6f7a
    int64_t v11; // 0x1a6f62
    *v10 = *v10 + (int32_t)v11;
    char v12 = *(char *)(v9 + 0x471604d8); // 0x1a6f7c
    char v13 = *(char *)(v11 + 0x1101e8b3); // 0x1a6f83
    if (llvm_ctpop_i8((char)(v12 == 0) - v13 + (char)v6) % 2 != 0) {
        // 0x1a6f97
        unknown_ffffffffb4a9349d();
        return function_87d35a8();
    }
    // 0x1a6fb2
    *(char *)v5 = __asm_insb((int16_t)v2);
    int64_t v14 = unknown_ffffffff9dfaeabb(); // 0x1a6fb5
    int32_t * v15 = (int32_t *)(v14 + 0x9f42a8b); // 0x1a6fba
    uint32_t v16 = *v15; // 0x1a6fba
    uint32_t v17 = v16 + v2; // 0x1a6fba
    *v15 = v17;
    int32_t * v18 = (int32_t *)v3; // 0x1a6fc5
    *v18 = *v18 + (int32_t)v14 + (v17 < v16 ? 0x1746fd74 : 0x1746fd75);
    int32_t * v19 = (int32_t *)(a2 + 0x7f0a8868); // 0x1a6fc7
    *v19 = *v19 | (int32_t)v11;
    return function_1a6f5a();
}

// Address range: 0x1a7005 - 0x1a7006
int64_t function_1a7005(void) {
    // 0x1a7005
    int64_t result; // 0x1a7005
    return result;
}

// Address range: 0x1a7011 - 0x1a7015
int64_t function_1a7011(int64_t a1, int64_t a2) {
    // 0x1a7011
    int64_t v1; // 0x1a7011
    bool v2; // 0x1a7011
    return function_1a7044(a1, (v2 ? -1 : 1) + a2, (int32_t)v1 >> 31, v1);
}

// Address range: 0x1a703e - 0x1a7044
int64_t function_1a703e(void) {
    // 0x1a703e
    int64_t result; // 0x1a703e
    int32_t * v1 = (int32_t *)(result + 0x2d000000); // 0x1a703e
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1a7044 - 0x1a7074
int64_t function_1a7044(int64_t a1, int64_t a2, uint32_t a3, int64_t a4) {
    // 0x1a7044
    int64_t v1; // 0x1a7044
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x1a7044
    *(char *)-0x12836db3 = *(char *)-0x12836db3 + (char)(v3 / 256);
    int64_t v4; // 0x1a7044
    float80_t v5; // 0x1a7044
    *(int64_t *)(v4 - 93) = (int64_t)v5;
    uint32_t v6 = (int32_t)v2 + a3; // 0x1a704f
    int64_t v7 = v2 + 0xe8ad00b3 + (int64_t)(v6 < a3); // 0x1a7051
    *(char *)a4 = (char)v7;
    char * v8 = (char *)(v1 + 61 + (v7 & 0xffffffff)); // 0x1a705d
    char v9 = v4; // 0x1a705d
    *v8 = *v8 + v9;
    *(char *)(v4 & 0xffffffff) = *(char *)&v4 + v9;
    unsigned char v10 = *(char *)&v4 & v9; // 0x1a7068
    int64_t v11 = v4 & 0xffffff00; // 0x1a7068
    char * v12 = (char *)(v11 | (int64_t)v10); // 0x1a706a
    *v12 = *v12 + v10;
    char v13 = *(char *)&v3 + (char)(v6 + (int32_t)v4); // 0x1a706c
    *(char *)v3 = v13;
    int64_t v14; // 0x1a7044
    int64_t result = v11 | (int64_t)*(char *)&v14; // 0x1a7072
    if (v13 < 0) {
        result = function_1a7005();
    }
    // 0x1a7074
    return result;
}

// Address range: 0x1a72bb - 0x1a7311
int64_t function_1a72bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x1a72bb
    *(int32_t *)-0x1c1d0bfffec25d62 = (int32_t)v2;
    unsigned char v3 = *(char *)(v2 % 256 + v2); // 0x1a72c6
    int32_t * v4 = (int32_t *)(a1 - 0x2df7cb56 + 8 * a3); // 0x1a72c7
    *v4 = *v4 & (int32_t)a3;
    int32_t v5 = *(int32_t *)(a1 + 0x2ab15093); // 0x1a72ce
    uint32_t v6 = v5 + (int32_t)(v2 & 0xffffff00 | (int64_t)v3); // 0x1a72ce
    int64_t v7; // 0x1a72bb
    *(char *)a5 = *(char *)&v7 & (char)v6;
    int64_t v8 = v6; // 0x1a72dc
    if (v6 == -0x493758ff) {
        v8 = function_1a72a1();
    }
    // 0x1a72de
    bool v9; // 0x1a72bb
    int64_t v10 = 2 * v2 & 0xfffffffe | (int64_t)v9; // 0x1a72bb
    uint64_t v11 = v8;
    char v12 = *(char *)(v2 - 61 + v10); // 0x1a72de
    int64_t v13 = 256 * (int64_t)(v12 | (char)(v11 / 256)) | v11 & -0xff01; // 0x1a72de
    *(int64_t *)(v10 - 8) = v13;
    int32_t * v14 = (int32_t *)(a3 + 0x2dbedb1c); // 0x1a72e3
    *v14 = -*v14;
    int32_t v15 = *(int32_t *)0x953ff26e - 0x7ac5f649; // 0x1a72f9
    *(int32_t *)0x953ff26e = v15;
    int64_t v16 = v13 & -256 | (int64_t)*(char *)&v1; // 0x1a72ff
    if (v15 == 0) {
        v16 = function_1a72a6();
    }
    // 0x1a7301
    *(int32_t *)-0x75e5a5f1 = *(int32_t *)-0x75e5a5f1 + (int32_t)a1;
    return v16 & 0xffffffff ^ 0xe801e831;
}

// Address range: 0x1a7321 - 0x1a7327
int64_t function_1a7321(void) {
    // 0x1a7321
    return unknown_ffffffffa8c6de27();
}

// Address range: 0x1a7379 - 0x1a744c
int64_t function_1a7379(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = unknown_fffffffff6d4017f(); // 0x1a7379
    char * v2 = (char *)(a1 + 0x1e253aef); // 0x1a7389
    *v2 = (char)v1 + 120 + *v2;
    int64_t v3 = unknown_d7c5f95(); // 0x1a738f
    bool v4; // 0x1a7379
    int64_t v5 = (v4 ? -4 : 4) + a1; // 0x1a7394
    *(char *)-0x43e3a426 = *(char *)-0x43e3a426 + 23;
    int64_t v6; // 0x1a7379
    int64_t v7 = (v3 & 0xff00) + v6 & 0xff00 | v3 & -0xff01; // 0x1a739c
    uint64_t v8 = a4 / 256; // 0x1a73a9
    *(char *)-0x17107707 = *(char *)-0x17107707 | (char)v3;
    int32_t * v9 = (int32_t *)((v6 & -256 | 34) - 0x7fffe580); // 0x1a73b1
    *v9 = *v9 + (int32_t)v5;
    uint32_t v10 = *(int32_t *)v7 + (int32_t)v7; // 0x1a73ba
    *(int32_t *)v5 = *(int32_t *)a5;
    int64_t result = (v8 + (int64_t)v10) % 256 | (int64_t)(v10 & -256); // 0x1a73bd
    int32_t * v11 = (int32_t *)((a3 & 0xff00) + a3 & 0xff00 | a3 & -0x10000 | (a3 - v8) % 256); // 0x1a73bf
    *v11 = *v11 + (int32_t)((v4 ? 0xfffffffc : 4) + a5);
    if ((v10 & 0x4000) != 0) {
        // 0x1a73ca
        return result;
    }
    char * v12 = (char *)result; // 0x1a7442
    *v12 = *v12 + 34;
    __asm_in(61);
    return unknown_ffffffffb1dfae4d();
}

// Address range: 0x1a744d - 0x1a744e
int64_t function_1a744d(void) {
    // 0x1a744d
    int64_t result; // 0x1a744d
    return result;
}

// Address range: 0x1a7475 - 0x1a7478
int64_t function_1a7475(int64_t a1, int64_t a2) {
    // 0x1a7475
    int64_t result; // 0x1a7475
    *(int32_t *)a1 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x1a74d4 - 0x1a74db
int64_t function_1a74d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1a74d4
    int64_t v1; // 0x1a74d4
    uint64_t result = v1;
    char * v2 = (char *)(a3 + 0x3a83f3e6); // 0x1a74d4
    *v2 = *v2 + (char)(result / 256);
    return result;
}

// Address range: 0x1a74f3 - 0x1a74f4
int64_t function_1a74f3(void) {
    // 0x1a74f3
    int64_t result; // 0x1a74f3
    return result;
}

// Address range: 0x1a751c - 0x1a751f
int64_t function_1a751c(int64_t a1) {
    // 0x1a751c
    int64_t result; // 0x1a751c
    *(int32_t *)a1 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x1a7541 - 0x1a7542
int64_t function_1a7541(void) {
    // 0x1a7541
    int64_t result; // 0x1a7541
    return result;
}

// Address range: 0x1a7556 - 0x1a7557
int64_t function_1a7556(void) {
    // 0x1a7556
    int64_t result; // 0x1a7556
    return result;
}

// Address range: 0x1a7568 - 0x1a756d
int64_t function_1a7568(void) {
    // 0x1a7568
    return function_ffffffffb87987ee();
}

// Address range: 0x1a7570 - 0x1a7579
int64_t function_1a7570(int64_t a1, int64_t a2) {
    // 0x1a7570
    return unknown_259142cc(a1, a2);
}

// Address range: 0x1a757d - 0x1a7581
int64_t function_1a757d(int64_t a1, int64_t a2) {
    // 0x1a757d
    return function_1a7556();
}

// Address range: 0x1a7590 - 0x1a7593
int64_t function_1a7590(void) {
    // 0x1a7590
    int64_t result; // 0x1a7590
    return result;
}

// Address range: 0x1a7598 - 0x1a759b
int64_t function_1a7598(int64_t a1, int64_t a2) {
    // 0x1a7598
    int64_t result; // 0x1a7598
    return result;
}

// Address range: 0x1a759b - 0x1a75ae
int64_t function_1a759b(int64_t a1) {
    // 0x1a759b
    unknown_3d1a7744();
    int32_t * v1 = (int32_t *)(a1 - 112); // 0x1a75a7
    uint32_t v2 = *v1; // 0x1a75a7
    int64_t v3; // 0x1a759b
    uint32_t v4 = v2 + (int32_t)v3; // 0x1a75a7
    *v1 = v4;
    if (v4 >= v2 && v4 != 0) {
        function_1a7541();
    }
    // 0x1a75ac
    return function_1a760b(a1, v3, v3, v3);
}

// Address range: 0x1a75d7 - 0x1a75e2
int64_t function_1a75d7(int64_t a1) {
    // 0x1a75d7
    *(int32_t *)0x4e1c5dde = *(int32_t *)0x4e1c5dde + (int32_t)a1;
    return function_ffffffff83547958();
}

// Address range: 0x1a760b - 0x1a7633
int64_t function_1a760b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1a760b
    int64_t v1; // 0x1a760b
    uint64_t v2 = (int64_t)&v1; // 0x1a761a
    int32_t * v3 = (int32_t *)(a1 + 0x7001e8d2); // 0x1a761b
    *v3 = *v3 + (int32_t)v2;
    int64_t v4; // 0x1a760b
    int64_t v5 = v4 & 0xffffffff; // 0x1a7621
    *(char *)(a4 + 0x2aebd17) = (char)(v2 / 256);
    *(int64_t *)(v5 - 8) = a1;
    unknown_4418542f();
    int64_t result = __asm_int1(); // 0x1a762e
    *(int64_t *)(v5 - 16) = 256 * v4 & 0xff00 | a3;
    return result;
}

// Address range: 0x1a774b - 0x1a774c
int64_t function_1a774b(int64_t a1) {
    // 0x1a774b
    int64_t result; // 0x1a774b
    return result;
}

// Address range: 0x1a777d - 0x1a779e
int64_t function_1a777d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1a777d
    unknown_3d1c5f87();
    int64_t v1; // 0x1a777d
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a2;
    int32_t * v2 = (int32_t *)(a3 + 0x30b2104e); // 0x1a778a
    *v2 = *v2 + (int32_t)a3;
    __asm_int3(a1);
    return function_ffffffffd88167e2();
}

// Address range: 0x1a77ee - 0x1a77ef
int64_t function_1a77ee(int64_t a1) {
    // 0x1a77ee
    int64_t result; // 0x1a77ee
    return result;
}

// Address range: 0x1a78a5 - 0x1a78aa
int64_t function_1a78a5(void) {
    // 0x1a78a5
    return function_ffffffffe81c60ff();
}

// Address range: 0x1a7906 - 0x1a790a
int64_t function_1a7906(int64_t a1) {
    // 0x1a7906
    int64_t v1; // 0x1a7906
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)v1;
    return result;
}

// Address range: 0x1a798a - 0x1a79ba
int64_t function_1a798a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a798a
    int64_t result; // 0x1a798a
    bool v1; // 0x1a798a
    if (!v1) {
        // 0x1a79b1
        __asm_out(-32, (char)result);
        return unknown_2e5b437();
    }
    int32_t * v2 = (int32_t *)(a2 - 45); // 0x1a798c
    *v2 = *v2 + 0x743cfe18;
    return result;
}

// Address range: 0x1a79bc - 0x1a7a48
int64_t function_1a79bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a79bc
    unknown_ffffffffcb6f49c2();
    int32_t * v1 = (int32_t *)(a1 - 0x646815b6); // 0x1a79cc
    int64_t v2; // 0x1a79bc
    *v1 = *v1 + (int32_t)v2;
    return unknown_13f1ede0();
}

// Address range: 0x1a7cbb - 0x1a7cbe
int64_t function_1a7cbb(int64_t a1) {
    // 0x1a7cbb
    int64_t result; // 0x1a7cbb
    return result;
}

// Address range: 0x1a7d2c - 0x1a7d2d
int64_t function_1a7d2c(int64_t a1) {
    // 0x1a7d2c
    int64_t result; // 0x1a7d2c
    return result;
}

// Address range: 0x1a7d85 - 0x1a7da2
int64_t function_1a7d85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a7d85
    *(char *)-0x24cdcafe17fae1de = (char)unknown_ffffffff8849d38b();
    int64_t v1; // 0x1a7d85
    int32_t * v2 = (int32_t *)(a4 - 40 + 2 * v1); // 0x1a7d93
    bool v3; // 0x1a7d85
    *v2 = (int32_t)v3 - (int32_t)a2 + *v2;
    return unknown_ffffffffe8afe4a1();
}

// Address range: 0x1a7def - 0x1a7df2
int64_t function_1a7def(int64_t a1) {
    // 0x1a7def
    int64_t result; // 0x1a7def
    return result;
}

// Address range: 0x1a7e12 - 0x1a7e13
int64_t function_1a7e12(int64_t a1) {
    // 0x1a7e12
    int64_t result; // 0x1a7e12
    return result;
}

// Address range: 0x1a7e17 - 0x1a7e18
int64_t function_1a7e17(void) {
    // 0x1a7e17
    int64_t result; // 0x1a7e17
    return result;
}

// Address range: 0x1a7e3a - 0x1a7e8f
int64_t function_1a7e3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    unknown_7a1fbe43();
    *(char *)-0x17650cbdddf98728 = (char)a5;
    int32_t * v3 = (int32_t *)a5; // 0x1a7e4d
    int32_t v4 = *v3 + (int32_t)a1; // 0x1a7e4d
    *v3 = v4;
    if (v4 < 1) {
        function_1a7e17();
    }
    int64_t v5 = unknown_ffffffff91e61a61(); // 0x1a7e5b
    __asm_out(66, (char)v5);
    char * v6 = (char *)((v5 & 0x91cfbbdd) + 0x6101e8bd); // 0x1a7e67
    *v6 = *v6 + (char)a4;
    __asm_outsb((int16_t)a3, *(char *)&v1);
    *(int32_t *)v2 = *(int32_t *)&v2 + (int32_t)a3;
    return v1 & 0xffffffff;
}

// Address range: 0x247618 - 0x24761c
int64_t function_247618(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x247618
    int64_t result; // 0x247618
    char * v1 = (char *)(result - 127); // 0x247618
    *v1 = *v1 | (char)a4;
    return result;
}

// Address range: 0x24761c - 0x247655
int64_t function_24761c(int64_t a1) {
    // 0x24761c
    int64_t v1; // 0x24761c
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t v3; // 0x24761c
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    int64_t v5; // 0x24761c
    return function_cf3c7(v1, v1, v1, v1, v1, v1, (int64_t)&v5 + 16);
}

// Address range: 0x247655 - 0x2477a0
int64_t function_247655(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x247655
    int64_t v1; // bp-24, 0x247655
    int64_t v2 = (int64_t)&v1; // 0x2476a5
    int64_t v3 = v2 - 16; // 0x2476cc
    int64_t * v4 = (int64_t *)v3; // 0x2476dc
    *v4 = 310;
    int64_t v5 = *(int64_t *)(v2 + 24); // 0x2476eb
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x2476ef
    *v6 = v5;
    int64_t * v7 = (int64_t *)(v2 - 32); // 0x2476f2
    *v7 = v5;
    int64_t v8 = *(int64_t *)(v2 + 8); // 0x2476fe
    *v7 = v8;
    *v6 = a6;
    *v4 = v5;
    v1 = v5;
    *v4 = 0x69b8e950;
    *v6 = 0x2df156ce;
    *v7 = v8;
    *(int64_t *)(v2 + 16) = *v4;
    *v4 = v5;
    *v6 = v2;
    *v7 = *v4;
    *v6 = v3;
    *v4 = v2;
    int64_t v9; // 0x247655
    return function_cf3c7(a1, a2, a3, 0x23f04b, a5, *v6, v9);
}

// Address range: 0x2477a0 - 0x247918
int64_t function_2477a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2477a0
    int64_t v1; // bp-32, 0x2477a0
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x2477a0
    return function_cf3c7(a1, a2, a3, a4, a5, v2, 169);
}

// Address range: 0x247918 - 0x247a83
int64_t function_247918(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x247918
    int64_t v1; // 0x247918
    bool v2; // 0x247918
    return function_cf3c7(a1, a2, a3, a4, a5, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x247a83 - 0x247bbf
int64_t function_247a83(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x247a83
    int64_t v1; // bp-56, 0x247a83
    int64_t v2 = (int64_t)&v1; // 0x247b18
    *(int64_t *)(v2 + 32) = 0x23f827;
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x247b70
    *v3 = a3;
    v1 = a4;
    int64_t v4 = v1; // 0x247baf
    v1 = v2 + 24;
    int64_t v5 = *v3; // 0x247bb1
    *(int64_t *)(v2 - 8) = v5;
    int64_t v6; // 0x247a83
    bool v7; // 0x247a83
    return function_cf3c7(a1, a2, v5, v4, a5, v6, 0x4000 * (int64_t)v7 | 2048 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | 128 * (int64_t)v7 | 64 * (int64_t)v7 | 16 * (int64_t)v7 | (int64_t)v7 | 4 * (int64_t)v7 | 2);
}

// Address range: 0x247c15 - 0x247c16
int64_t function_247c15(void) {
    // 0x247c15
    int64_t result; // 0x247c15
    return result;
}

// Address range: 0x27e19f - 0x27e1dc
int64_t function_27e19f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27e19f
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x27e19f
    uint32_t v2 = (int32_t)a2 + (int32_t)v1; // 0x27e1ad
    unknown_ffffffff95cdf7ba();
    int64_t v3; // 0x27e19f
    if (v3 != 1 && v2 != 0) {
        function_27e19d();
    }
    int64_t v4 = unknown_ffffffffcc257cbd(); // 0x27e1b7
    int64_t v5 = v3 - 2; // 0x27e1c1
    int64_t v6 = v2; // 0x27e1c1
    while (v5 != 0 && (int32_t)v4 != -0x88ac74c) {
        // 0x27e1ad
        v2 = (int32_t)v6 + (int32_t)v4;
        unknown_ffffffff95cdf7ba();
        if (v5 != 1 && v2 != 0) {
            function_27e19d();
        }
        // 0x27e1b7
        v4 = unknown_ffffffffcc257cbd();
        v5 -= 2;
        v6 = v2;
    }
    int64_t result = unknown_ffffffffb464f0ca(); // 0x27e1c4
    int64_t v7; // 0x27e19f
    int32_t * v8 = (int32_t *)(8 * v7 + a1); // 0x27e1d0
    *v8 = *v8 - 1;
    *(char *)0x5d29ca24 = *(char *)0x5d29ca24 - 44;
    return result;
}

// Address range: 0x27e242 - 0x27e243
int64_t function_27e242(int64_t a1) {
    // 0x27e242
    int64_t result; // 0x27e242
    return result;
}

// Address range: 0x27e2aa - 0x27e2af
int64_t function_27e2aa(int64_t a1, int64_t a2) {
    // 0x27e2aa
    int64_t result; // 0x27e2aa
    return result;
}

// Address range: 0x27e2bc - 0x27e2c1
int64_t function_27e2bc(void) {
    // 0x27e2bc
    return function_7222b72a();
}

// Address range: 0x27e2c5 - 0x27e2c6
int64_t function_27e2c5(int64_t a1) {
    // 0x27e2c5
    int64_t result; // 0x27e2c5
    return result;
}

// Address range: 0x27e2d1 - 0x27e2d6
int64_t function_27e2d1(int64_t a1) {
    // 0x27e2d1
    int64_t result; // 0x27e2d1
    return result;
}

// Address range: 0x27e372 - 0x27e380
int64_t function_27e372(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27e372
    return a1 & 0xffffffff;
}

// Address range: 0x27e384 - 0x27e387
int64_t function_27e384(void) {
    // 0x27e384
    int64_t result; // 0x27e384
    return result;
}

// Address range: 0x27e38a - 0x27e3a3
int64_t function_27e38a(void) {
    // 0x27e38a
    return function_ffffffffa67eab92();
}

// Address range: 0x27e3b0 - 0x27e3b3
int64_t function_27e3b0(int64_t a1) {
    // 0x27e3b0
    int64_t result; // 0x27e3b0
    return result;
}

// Address range: 0x27e3bf - 0x27e3c0
int64_t function_27e3bf(void) {
    // 0x27e3bf
    int64_t result; // 0x27e3bf
    return result;
}

// Address range: 0x27e3f7 - 0x27e3f9
int64_t function_27e3f7(void) {
    // 0x27e3f7
    int64_t v1; // 0x27e3f7
    return function_27e421(v1, v1, v1, v1, (int64_t)&g8);
}

// Address range: 0x27e41b - 0x27e421
int64_t function_27e41b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27e41b
    int64_t v1; // 0x27e41b
    int64_t v2 = v1;
    bool v3; // 0x27e41b
    *(int32_t *)((v3 ? -1 : 1) + a1) = __asm_insd((int16_t)a3);
    return (v2 + 204) % 256 | v2 & -256;
}

// Address range: 0x27e421 - 0x27e4bd
int64_t function_27e421(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x27e421
    int64_t v1; // 0x27e421
    bool v2; // 0x27e421
    if (v2) {
        // 0x27e491
        unknown_23c24098();
        int16_t * v3 = (int16_t *)(v1 + 0x6401e800); // 0x27e49b
        *v3 = *v3 | (int16_t)v1;
        *(int32_t *)(a4 & 0xffffffff) = (int32_t)a4;
        int64_t result = unknown_3acff7b6(); // 0x27e4b0
        int32_t * v4 = (int32_t *)(9 * v1); // 0x27e4b6
        uint32_t v5 = *v4; // 0x27e4b6
        *v4 = 0x80000 * v5 | v5 / 0x4000 | 0x40000 * (int32_t)((result & 256) != 0);
        return result;
    }
    // 0x27e423
    __asm_in_134((int16_t)a3);
    int32_t * v6 = (int32_t *)(v1 + 121); // 0x27e427
    uint32_t v7 = *v6; // 0x27e427
    uint32_t v8 = v7 + (int32_t)a3; // 0x27e427
    *v6 = v8;
    if (v8 >= v7) {
        function_27e3bf();
    }
    int64_t v9 = unknown_ffffffffd0b05237(); // 0x27e431
    uint32_t v10 = *(int32_t *)(v9 + 0x1e8d200); // 0x27e436
    int32_t v11 = *(int32_t *)(v9 - 23); // 0x27e43c
    uint32_t v12 = (int32_t)v9; // 0x27e43f
    int64_t result2 = unknown_5441b24b(); // 0x27e444
    int64_t v13; // 0x27e421
    if (v12 >= 0x1b95fcb4 || v12 == 0x1b95fcb4 || v11 + (int32_t)a4 + (int32_t)(v10 > -1 - (int32_t)(int64_t)&v13) == 1) {
        // 0x27e44c
        return result2;
    }
    // 0x27e456
    return (result2 + 147 + (int64_t)(v12 < 0x1b95fcb4)) % 256 | result2 & -256;
}

// Address range: 0x27e4c0 - 0x27e4c2
int64_t function_27e4c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27e4c0
    int64_t result; // 0x27e4c0
    return result;
}

// Address range: 0x27e4c9 - 0x27e4ca
int64_t function_27e4c9(void) {
    // 0x27e4c9
    int64_t result; // 0x27e4c9
    return result;
}

// Address range: 0x27e4d4 - 0x27e4e5
int64_t function_27e4d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27e4d6
    unknown_ffffffffb4653ee3();
    __asm_int3(a1);
    int64_t v1; // 0x27e4d4
    return (int64_t)&v1;
}

// Address range: 0x27e527 - 0x27e528
int64_t function_27e527(void) {
    // 0x27e527
    int64_t result; // 0x27e527
    return result;
}

// Address range: 0x27e544 - 0x27e551
int64_t function_27e544(void) {
    int64_t result = unknown_399c1d4a(); // 0x27e549
    result = function_27e527();
    // 0x27e54b
    return result;
}

// Address range: 0x27e56e - 0x27e64e
int64_t function_27e56e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x27e56e
    *(char *)a1 = (char)(v2 / 256);
    char * v3 = (char *)(v2 + 8 * v2); // 0x27e570
    *v3 = -1 - *v3;
    unknown_3daa2479();
    int32_t v4 = v2;
    *(int32_t *)-0x274109fe = *(int32_t *)-0x274109fe + v4;
    int32_t v5 = *(int32_t *)(a1 + 0x5ca30b49) ^ v4; // 0x27e582
    int64_t v6 = unknown_ffffffffb44c0790(); // 0x27e58a
    int64_t v7 = v2 & -0xff01 | (int64_t)&g6; // 0x27e58f
    int64_t v8 = *(int64_t *)v2; // 0x27e591
    int64_t v9; // 0x27e56e
    int64_t v10; // 0x27e56e
    int64_t v11; // 0x27e56e
    int32_t v12; // 0x27e56e
    int32_t v13; // 0x27e56e
    if (v5 == 0) {
        // 0x27e595
        int64_t v14; // 0x27e56e
        int64_t v15 = v14 + 8; // 0x27e591
        char v16 = *(char *)-0x37b09364; // 0x27e595
        *(char *)-0x37b09364 = v16 + (char)((int64_t)&g6 >> 8);
        __asm_int3(v8);
        __asm_hlt();
        __readfsbyte(v1);
        int32_t v17 = *(int32_t *)(v8 + 0x5ca30b49); // 0x27e582
        int64_t v18 = unknown_ffffffffb44c0790(); // 0x27e58a
        int64_t v19 = v7 & -0xff01 | (int64_t)&g6; // 0x27e58f
        int64_t v20 = *(int64_t *)v15; // 0x27e591
        int64_t v21 = v20; // 0x27e593
        int64_t v22 = v19; // 0x27e593
        v14 = v15;
        while (v17 == 0) {
            // 0x27e595
            v15 = v14 + 8;
            v16 = *(char *)-0x37b09364;
            *(char *)-0x37b09364 = v16 + (char)((int64_t)&g6 >> 8);
            __asm_int3(v21);
            __asm_hlt();
            __readfsbyte(v1);
            v17 = *(int32_t *)(v21 + 0x5ca30b49);
            v18 = unknown_ffffffffb44c0790();
            v19 = v22 & -0xff01 | (int64_t)&g6;
            v20 = *(int64_t *)v15;
            v21 = v20;
            v22 = v19;
            v14 = v15;
        }
        // 0x27e5d0
        v13 = v1;
        v12 = v17;
        v11 = v18;
        v10 = v19;
        v9 = v20;
    } else {
        // 0x27e56e
        v13 = *(int32_t *)&v1;
        v12 = v5;
        v11 = v6;
        v10 = v7;
        v9 = v8;
    }
    uint32_t v23 = (int32_t)a4 % 32; // 0x27e5d0
    int32_t v24 = 0; // 0x27e5d0
    if (v23 != 0) {
        uint32_t v25 = v13; // 0x27e5d0
        int32_t v26 = v25 >> v23 | v25 << 32 - v23; // 0x27e5d0
        *(int32_t *)v1 = v26;
        v24 = v26 < 0;
    }
    int32_t * v27 = (int32_t *)(a4 - 77 + 4 * v10); // 0x27e5d2
    *v27 = *v27 + v24 - (int32_t)v1;
    int64_t v28 = v11 & 23 | 232; // 0x27e5d6
    int64_t v29 = v11 & -256; // 0x27e5d6
    int64_t v30 = v28 | v29; // 0x27e5d6
    int32_t * v31 = (int32_t *)(v30 + 8); // 0x27e5d8
    *v31 = *v31 + v12;
    if (llvm_ctpop_i8((char)v28 - 1) % 2 != 0) {
        // 0x27e5f2
        return v29 | 26;
    }
    int64_t * v32 = (int64_t *)(int64_t)v12; // 0x27e5e8
    *v32 = 0x10a19100;
    if ((int32_t)v30 >= 0xe44fc701) {
        char v33 = *(char *)0x17ed2511; // 0x27e60a
        *(char *)0x17ed2511 = v33 + (char)((int64_t)&g6 >> 8);
        return function_ffffffffaf641963(v11 & 0xffffff01 | 254);
    }
    int32_t * v34 = (int32_t *)(v10 - 16 + 2 * v9); // 0x27e635
    *v34 = *v34 | v12 + 8;
    *v32 = v30;
    char v35 = __asm_insb((int16_t)((int32_t)v11 >> 31) % 256 | (int16_t)&g7); // 0x27e648
    bool v36; // 0x27e56e
    *(char *)(v9 + (v36 ? -1 : 1)) = v35;
    return function_ffffffffb4b5725f();
}

// Address range: 0x27e64e - 0x27e651
int64_t function_27e64e(void) {
    // 0x27e64e
    int64_t result; // 0x27e64e
    return result;
}

// Address range: 0x27e675 - 0x27e679
int64_t function_27e675(int64_t a1) {
    // 0x27e675
    int64_t result; // 0x27e675
    *(char *)a1 = (char)result >> 1;
    return result;
}

// Address range: 0x27e67c - 0x27e67d
int64_t function_27e67c(void) {
    // 0x27e67c
    int64_t result; // 0x27e67c
    return result;
}

// Address range: 0x27e680 - 0x27e68a
int64_t function_27e680(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 + 54); // 0x27e680
    int32_t v2 = *v1; // 0x27e680
    int32_t v3 = a2; // 0x27e680
    int32_t v4 = v2 + v3; // 0x27e680
    *v1 = v4;
    int64_t result; // 0x27e680
    if (((v4 ^ v2) & (v4 ^ v3)) >= 0) {
        result = function_27e67c();
    }
    // 0x27e685
    return result;
}

// Address range: 0x27e690 - 0x27e691
int64_t function_27e690(void) {
    // 0x27e690
    int64_t result; // 0x27e690
    return result;
}

// Address range: 0x27e6f4 - 0x27e6fe
int64_t function_27e6f4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x27e6f4
    int64_t v1; // 0x27e6f4
    int64_t v2 = v1;
    int32_t v3 = *(int32_t *)0x5f620dfb; // 0x27e6f6
    *(int32_t *)0x5f620dfb = v3 + (int32_t)((v2 + a4 / 256) % 256 | v2 & 0xffffff00);
    return function_27e706();
}

// Address range: 0x27e6fe - 0x27e706
int64_t function_27e6fe(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27e6fe
    int64_t v1; // 0x27e6fe
    return v1 + 0xe8d06548 & 0xffffffff;
}

// Address range: 0x27e706 - 0x27e711
int64_t function_27e706(void) {
    // 0x27e706
    int64_t v1; // 0x27e706
    int64_t v2 = __asm_int3(v1); // 0x27e707
    bool v3; // 0x27e706
    if (!v3) {
        v2 = function_27e690();
    }
    char * v4 = (char *)(v1 - 0x7d01fe18); // 0x27e709
    *v4 = *v4 / 2 | 128 * (char)v3;
    return v2 ^ 116;
}

// Address range: 0x27e71b - 0x27e71c
int64_t function_27e71b(void) {
    // 0x27e71b
    int64_t result; // 0x27e71b
    return result;
}

// Address range: 0x27e71d - 0x27e722
int64_t function_27e71d(void) {
    // 0x27e71d
    return function_63aa2231();
}

// Address range: 0x27e738 - 0x27e73b
int64_t function_27e738(int64_t a1) {
    // 0x27e738
    int64_t result; // 0x27e738
    return result;
}

// Address range: 0x27e75b - 0x27e75e
int64_t function_27e75b(void) {
    // 0x27e75b
    int64_t result; // 0x27e75b
    return result;
}

// Address range: 0x27e760 - 0x27e761
int64_t function_27e760(void) {
    // 0x27e760
    int64_t result; // 0x27e760
    return result;
}

// Address range: 0x27e76a - 0x27e77d
int64_t function_27e76a(int64_t a1, int64_t a2) {
    // 0x27e76a
    int64_t v1; // 0x27e76a
    int32_t * v2 = (int32_t *)(v1 + 0x7e8c500a); // 0x27e76a
    *v2 = *v2 - (int32_t)v1;
    return unknown_3aa42578();
}

// Address range: 0x27e781 - 0x27e78e
int64_t function_27e781(int64_t a1) {
    int64_t v1 = unknown_ffffffffa7a1de87(); // 0x27e786
    bool v2; // 0x27e781
    if (v2 || false) {
        v1 = function_27e71b();
    }
    char * v3 = (char *)v1; // 0x27e789
    *v3 = *v3 - (char)v1;
    int64_t v4; // 0x27e781
    return function_27e7c8(v4, v4, v4, v4);
}

// Address range: 0x27e7a4 - 0x27e7b7
int64_t function_27e7a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    if (a4 == 1) {
        // 0x27e7a6
        unknown_ffffffffab1a58b2();
    }
    // 0x27e7b1
    int64_t v1; // 0x27e7a4
    return (int64_t)&v1;
}

// Address range: 0x27e7c8 - 0x27e7eb
int64_t function_27e7c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27e7c8
    int64_t v1; // 0x27e7c8
    *(int32_t *)-0x7965ae0c1efe1771 = (int32_t)v1;
    int64_t v2 = unknown_3a328be1(); // 0x27e7da
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a4;
    return v2 & -192;
}

// Address range: 0x27e7eb - 0x27e81e
int64_t function_27e7eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27e7eb
    int64_t v1; // 0x27e7eb
    int32_t * v2 = (int32_t *)(v1 + 0x6580107 + v1); // 0x27e7eb
    *v2 = *v2 + (int32_t)a4;
    unknown_291d80fd();
    unsigned char v3 = *(char *)-0x259ac02af9c77261; // 0x27e7fc
    int32_t * v4 = (int32_t *)((v1 & -256 | (int64_t)v3) - 58); // 0x27e809
    *v4 = *v4 + (int32_t)a1;
    __asm_iretd();
    int64_t v5; // 0x27e7eb
    *(char *)a4 = *(char *)&v5 ^ (char)a4;
    return unknown_1032501d();
}

// Address range: 0x27e82e - 0x27e831
int64_t function_27e82e(int64_t a1) {
    // 0x27e82e
    int64_t result; // 0x27e82e
    return result;
}

// Address range: 0x27e868 - 0x27e86c
int64_t function_27e868(int64_t a1) {
    // 0x27e868
    return __asm_wait(2 * (int32_t)a1);
}

// Address range: 0x27e86e - 0x27e878
int64_t function_27e86e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27e86e
    int64_t result; // 0x27e86e
    return result;
}

// Address range: 0x27e8a0 - 0x27e8a7
int64_t function_27e8a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27e8a0
    int64_t v1; // 0x27e8a0
    *(char *)a4 = (char)v1;
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x27e8ce - 0x27e8cf
int64_t function_27e8ce(void) {
    // 0x27e8ce
    int64_t result; // 0x27e8ce
    return result;
}

// Address range: 0x27e943 - 0x27e944
int64_t function_27e943(void) {
    // 0x27e943
    int64_t result; // 0x27e943
    return result;
}

// Address range: 0x27e945 - 0x27e949
int64_t function_27e945(void) {
    // 0x27e945
    bool v1; // 0x27e945
    if (v1) {
        function_27e8ce();
    }
    // 0x27e947
    return function_27e943();
}

// Address range: 0x27e981 - 0x27e984
int64_t function_27e981(void) {
    // 0x27e981
    int64_t v1; // 0x27e981
    return v1 & -0xff01 | (int64_t)&g5;
}

// Address range: 0x27e999 - 0x27e99a
int64_t function_27e999(void) {
    // 0x27e999
    int64_t result; // 0x27e999
    return result;
}

// Address range: 0x27e9cc - 0x27e9cd
int64_t function_27e9cc(void) {
    // 0x27e9cc
    int64_t result; // 0x27e9cc
    return result;
}

// Address range: 0x27e9f9 - 0x27ea41
int64_t function_27e9f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    bool v2; // 0x27e9f9
    if (v2 || v2) {
        function_27e999();
    }
    int32_t * v3 = (int32_t *)(a3 + 91 & 0xffffffff); // 0x27e9fb
    *v3 = *v3 ^ (int32_t)a3;
    __asm_int(-88);
    int64_t v4 = unknown_ffffffffa3d76a09(a5); // 0x27ea03
    *(int32_t *)0x1125fcc0 = *(int32_t *)0x1125fcc0 | (int32_t)v4;
    int64_t v5 = unknown_ffffffffb4458118(); // 0x27ea12
    while (a4 == 0) {
        // 0x27ea0e
        v5 = unknown_ffffffffb4458118();
    }
    // 0x27ea19
    *(int32_t *)v5 = (int32_t)v5;
    int64_t v6 = (a6 & (int64_t)&g1) == 0 ? 1 : -1; // 0x27ea1b
    *(char *)(v6 + a5) = *(char *)&v1;
    if ((int32_t)((v5 + 122) % 256 || v5 & 0xffffff00) < 0x4ce7e26) {
        function_27e9cc();
    }
    int64_t v7 = unknown_2367dd36(); // 0x27ea30
    int32_t * v8 = (int32_t *)(a4 + 0x123af9d); // 0x27ea35
    *v8 = *v8 + (int32_t)v7;
    return function_210986f();
}

// Address range: 0x27ea4d - 0x27ea4e
int64_t function_27ea4d(void) {
    // 0x27ea4d
    int64_t result; // 0x27ea4d
    return result;
}

// Address range: 0x27ea57 - 0x27ea5a
int64_t function_27ea57(int64_t a1) {
    // 0x27ea57
    int64_t v1; // 0x27ea57
    int64_t v2 = v1;
    return (v2 + 154) % 256 | v2 & -256;
}

// Address range: 0x27ea5a - 0x27eb11
int64_t function_27ea5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x27ea5a
    int64_t v1; // 0x27ea5a
    int64_t v2 = 256 * v1 + a4 & 0xff00 | a4 & -0xff01; // 0x27ea5a
    uint64_t v3 = unknown_391d8563(); // 0x27ea5d
    char * v4 = (char *)(a2 + 58 + 8 * v1); // 0x27ea62
    *v4 = *v4 + (char)(v3 / 256);
    unsigned char v5 = llvm_ctpop_i8(*(char *)v3 - (char)v3); // 0x27ea68
    unknown_416ddd72();
    if (v5 % 2 != 0) {
        // 0x27eac0
        __asm_in(101);
        *(int224_t *)(v2 + 8 * a2) = (int224_t)__asm_fnstenv();
        return unknown_ffffffffa6289ddb();
    }
    int32_t * v6 = (int32_t *)(a2 - 60); // 0x27ea75
    *v6 = *v6 + (int32_t)v2;
    unknown_ffffffffac1e3b7f();
    return function_ffffffffd9c3d399();
}

// Address range: 0x27eb1e - 0x27eb23
int64_t function_27eb1e(void) {
    // 0x27eb1e
    int64_t result; // 0x27eb1e
    return result;
}

// Address range: 0x27ed9f - 0x27eda2
int64_t function_27ed9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = __asm_sti(a1, a2, a3, a4); // 0x27ed9f
    int64_t v1; // 0x27ed9f
    *(char *)a4 = (char)v1 + (char)a3;
    return result;
}

// Address range: 0x27edde - 0x27ede5
int64_t function_27edde(void) {
    // 0x27edde
    int64_t v1; // 0x27edde
    return __asm_wait((int32_t)v1);
}

// Address range: 0x27edec - 0x27ee4b
int64_t function_27edec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a3 - 109); // 0x27edec
    uint32_t v3 = *v2; // 0x27edec
    uint32_t v4 = v3 + (int32_t)a3; // 0x27edec
    *v2 = v4;
    int64_t v5; // 0x27edec
    int64_t v6 = v5 + a1 + (int64_t)(v4 < v3); // 0x27edef
    char v7 = *(char *)0x75c5fcf8; // 0x27edf1
    *(char *)0x75c5fcf8 = v7 + (char)((uint64_t)v5 / 256);
    int64_t v8 = v5 & 0xfe8d7d90 | 0x172826f; // 0x27edf7
    uint32_t v9 = *(int32_t *)(v6 & 0xffffffff); // 0x27edfc
    int64_t result = v8 & 0xffffff62; // 0x27edfd
    int32_t * v10 = (int32_t *)(result - 0x61f879cb); // 0x27edff
    int32_t v11 = *v10 + 84 + (int32_t)(v9 > (int32_t)v8); // 0x27edff
    unsigned char v12 = llvm_ctpop_i8((char)v11); // 0x27edff
    *v10 = v11;
    if (v12 % 2 != 0) {
        // 0x27ee47
        return result;
    }
    // 0x27ee0a
    bool v13; // 0x27edec
    int64_t v14 = v13 ? 0xfffffffc : 4; // 0x27edfc
    int32_t * v15 = (int32_t *)result; // 0x27ee0a
    *v15 = *v15 + (int32_t)result;
    *(char *)v1 = *(char *)&v1 & 98;
    __asm_int3(v6 + v14 & 0xffff00ff | (int64_t)(int32_t)"addrinfo");
    return function_164ee9b();
}

// Address range: 0x27eea9 - 0x27eeb7
int64_t function_27eea9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27eea9
    bool v1; // 0x27eea9
    int64_t v2 = v1 ? -4 : 4; // 0x27eeab
    return unknown_ffffffffb4654eb3(v2 + a1, v2 + a2);
}

// Address range: 0x27eebc - 0x27eebf
int64_t function_27eebc(int64_t a1) {
    // 0x27eebc
    int64_t result; // 0x27eebc
    return result;
}

// Address range: 0x27ef32 - 0x27ef33
int64_t function_27ef32(void) {
    // 0x27ef32
    int64_t result; // 0x27ef32
    return result;
}

// Address range: 0x27ef6b - 0x27ef71
int64_t function_27ef6b(int64_t a1) {
    // 0x27ef6b
    int64_t v1; // 0x27ef6b
    return v1 & -256 | 174;
}

// Address range: 0x27ef71 - 0x27ef7a
int64_t function_27ef71(void) {
    // 0x27ef71
    return function_2d94ad9b();
}

// Address range: 0x27ef7a - 0x27ef7b
int64_t function_27ef7a(void) {
    // 0x27ef7a
    int64_t result; // 0x27ef7a
    return result;
}

// Address range: 0x27ef86 - 0x27f017
int64_t function_27ef86(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t result) {
    // 0x27ef86
    int64_t v1; // 0x27ef86
    bool v2; // 0x27ef86
    uint64_t v3 = v1 + a3 + (int64_t)v2; // 0x27ef86
    int64_t v4 = v3 & 0xffffffff; // 0x27ef86
    uint32_t v5 = (int32_t)a1;
    int64_t v6 = __asm_wait(v5); // 0x27ef88
    if (*(char *)v4 < -44) {
        unsigned char v7 = (char)v3; // 0x27f004
        unsigned char v8 = (char)(v3 / 256) + v7; // 0x27f004
        *(char *)(v1 & 0xffffffff) = (char)v6 + (char)v1 + (char)(v8 < v7);
        char * v9 = (char *)(v3 & 0xffffff00 | (int64_t)v8); // 0x27f00a
        *v9 = *v9 + (char)a5;
        int64_t v10 = unknown_362fd013(); // 0x27f00d
        __asm_out_136(87, (int32_t)v10);
        __asm_out(-44, (char)v10);
        return result;
    }
    uint32_t v11 = (int32_t)a2;
    __asm_out(-93, (char)v1);
    unknown_ffffffffb2238b97();
    if (v11 <= v5) {
        function_27ef7a();
    }
    // 0x27efea
    unknown_3a32c7f1();
    int64_t v12 = (int64_t)*(int32_t *)((v2 ? -4 : 4) + a2); // 0x27efa9
    if (v11 != v5) {
        v12 = function_27ef32();
    }
    int64_t v13 = v12;
    char * v14 = (char *)(v4 - 59); // 0x27efb4
    *v14 = *v14 + (char)v3;
    *(int64_t *)0xfa1901e0 = -0x4cc6fe18;
    return (v13 + 145 + (int64_t)((char)v13 < 200)) % 256 | v13 & -256;
}

// Address range: 0x27f056 - 0x27f060
int64_t function_27f056(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27f056
    unknown_ffffffffb1edee5c();
    return a2 & 0xffffffff;
}

// Address range: 0x27f07d - 0x27f080
int64_t function_27f07d(void) {
    // 0x27f07d
    int64_t result; // 0x27f07d
    return result;
}

// Address range: 0x27f0d7 - 0x27f0db
int64_t function_27f0d7(int64_t a1) {
    // 0x27f0d7
    int64_t v1; // 0x27f0d7
    bool v2; // 0x27f0d7
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x27f106 - 0x27f107
int64_t function_27f106(void) {
    // 0x27f106
    int64_t result; // 0x27f106
    return result;
}

// Address range: 0x27f109 - 0x27f111
int64_t function_27f109(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27f109
    int64_t v1; // 0x27f109
    int32_t * v2 = (int32_t *)(v1 - 0x6bff087b); // 0x27f109
    *v2 = *v2 + (int32_t)a3;
    return function_27f106();
}

// Address range: 0x27f156 - 0x27f157
int64_t function_27f156(void) {
    // 0x27f156
    int64_t result; // 0x27f156
    return result;
}

// Address range: 0x27f15f - 0x27f160
int64_t function_27f15f(void) {
    // 0x27f15f
    int64_t result; // 0x27f15f
    return result;
}

// Address range: 0x27f165 - 0x27f166
int64_t function_27f165(void) {
    // 0x27f165
    int64_t result; // 0x27f165
    return result;
}

// Address range: 0x27f168 - 0x27f16a
int64_t function_27f168(void) {
    // 0x27f168
    int64_t v1; // 0x27f168
    return function_27f174(v1, v1, v1);
}

// Address range: 0x27f16e - 0x27f174
int64_t function_27f16e(void) {
    // 0x27f16e
    int64_t result; // 0x27f16e
    return result;
}

// Address range: 0x27f174 - 0x27f17d
int64_t function_27f174(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27f174
    int64_t v1; // 0x27f174
    if ((char)v1 > 10) {
        function_27f15f();
    }
    // 0x27f17b
    return function_27f165();
}

// Address range: 0x27f185 - 0x27f190
int64_t function_27f185(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27f185
    int64_t result; // 0x27f185
    *(int32_t *)a1 = (int32_t)result;
    int64_t v1; // 0x27f185
    *(int32_t *)a3 = *(int32_t *)&v1 + (int32_t)result;
    return result;
}
