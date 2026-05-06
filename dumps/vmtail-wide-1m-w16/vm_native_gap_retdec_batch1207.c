/*
 * Targeted RetDec C for native executable gap queue batch 1207.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1a66bb-0x1a68bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a68bb-0x1a6abb rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a6cbb-0x1a6ebb rank=- name=- kind=- bytes=- uncovered=-
 *   0x27b241-0x27b441 rank=- name=- kind=- bytes=- uncovered=-
 *   0x27b441-0x27b641 rank=- name=- kind=- bytes=- uncovered=-
 *   0x27b641-0x27b841 rank=- name=- kind=- bytes=- uncovered=-
 *   0x27ba41-0x27bc41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x27bc41-0x27be41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x27be41-0x27c041 rank=- name=- kind=- bytes=- uncovered=-
 *   0x27c041-0x27c241 rank=- name=- kind=- bytes=- uncovered=-
 *   0x378d6a-0x378f6a rank=- name=- kind=- bytes=- uncovered=-
 *   0x378f6a-0x37916a rank=- name=- kind=- bytes=- uncovered=-
 *   0x37916a-0x37936a rank=- name=- kind=- bytes=- uncovered=-
 *   0x37946a-0x37956a rank=- name=- kind=- bytes=- uncovered=-
 *   0x37976a-0x37996a rank=- name=- kind=- bytes=- uncovered=-
 *   0x37996a-0x379b6a rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_17491ed();
int64_t function_1a66bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1a6759(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1a689b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1a6a74(void);
int64_t function_1a6cbb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1a6ce7(void);
int64_t function_1a6d55(void);
int64_t function_1a6d69(void);
int64_t function_1a6d74(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a6e4e(void);
int64_t function_1a6e7f(void);
int64_t function_1a6eab(int64_t a1);
int64_t function_1afb5173();
int64_t function_20ff1a3();
int64_t function_210309f();
int64_t function_27b241(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27b2e5(void);
int64_t function_27b308(void);
int64_t function_27b310(int64_t a1);
int64_t function_27b318(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_27b36a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_27b495(int64_t a1);
int64_t function_27b4ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27b4d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27b4e3(void);
int64_t function_27b515(void);
int64_t function_27b526(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27b559(void);
int64_t function_27b55a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_27b56c(void);
int64_t function_27b56f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_27b5be(int64_t a1);
int64_t function_27b63c(void);
int64_t function_27b668(int64_t a1);
int64_t function_27b707(void);
int64_t function_27b719(void);
int64_t function_27b74c(int64_t a1);
int64_t function_27b75e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27b7aa(void);
int64_t function_27b7de(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27ba41(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_27baac(void);
int64_t function_27bb0a(int64_t a1);
int64_t function_27bb4f(void);
int64_t function_27bb97(int64_t a1);
int64_t function_27bbcc(void);
int64_t function_27bcc9(void);
int64_t function_27bcd7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_27bd19(int64_t a1);
int64_t function_27bd37(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27bd6a(void);
int64_t function_27bd79(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_27be35(void);
int64_t function_27be48(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27be6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27be9a(void);
int64_t function_27beb7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27becc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27bed3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27beed(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27bf0e(void);
int64_t function_27bf21(void);
int64_t function_27bf2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27bf80(void);
int64_t function_27bf83(int64_t a1);
int64_t function_27bfd8(void);
int64_t function_27bfef(void);
int64_t function_27c058(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_27c091(void);
int64_t function_27c0c1(void);
int64_t function_27c0d7(int64_t a1);
int64_t function_27c0e3(void);
int64_t function_27c0e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27c0f5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27c13d(int64_t a1);
int64_t function_27c1a4(int64_t a1);
int64_t function_27c1c8(int64_t a1);
int64_t function_378d6a(void);
int64_t function_378d8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_378df8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_378e20(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_378e81(int64_t a1, int64_t a2, int64_t a3);
int64_t function_378e9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_378eaf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_378ec2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_378fb2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_378ff9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3790ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3790c0(void);
int64_t function_379123(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_379141(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_37920a(void);
int64_t function_37921c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_379239(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_379255(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37928c(int64_t a1);
int64_t function_3792a3(void);
int64_t function_379344(int64_t a1);
int64_t function_37946a(void);
int64_t function_37946c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_379542(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_379559(void);
int64_t function_37976a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_379796(int64_t a1);
int64_t function_3797a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_3797e5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_37982e(void);
int64_t function_37983d(void);
int64_t function_379853(int64_t a1, int64_t a2);
int64_t function_379860(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37987a(int64_t a1);
int64_t function_379882(void);
int64_t function_3798a9(int64_t a1);
int64_t function_3798b6(void);
int64_t function_3798df(int64_t a1);
int64_t function_3798e2(void);
int64_t function_3799a3(int64_t a1);
int64_t function_3799a7(void);
int64_t function_379a34(int64_t a1, int64_t a2, int64_t a3);
int64_t function_379a4d(void);
int64_t function_379a71(int64_t a1, int64_t a2, int64_t a3);
int64_t function_379ac0(int64_t a1);
int64_t function_379add(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_379aee(void);
int64_t function_379b20(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d27c6b0();
int64_t function_5105244();
int64_t function_7962a01f();
int64_t function_830c00();
int64_t function_af89503();
int64_t function_c823b();
int64_t function_db89b2();
int64_t function_ffffffff99eb7d52();
int64_t function_ffffffffa628618c();
int64_t function_ffffffffb02ee075();
int64_t function_ffffffffd7adcc0b();
int64_t function_ffffffffd89e8f9c();
int64_t unknown_110b1a07();
int64_t unknown_122cfcec();
int64_t unknown_1c56665();
int64_t unknown_1d6567ca();
int64_t unknown_21e9f167();
int64_t unknown_2cbb3435();
int64_t unknown_3d658e08();
int64_t unknown_43ec3acb();
int64_t unknown_4521e046();
int64_t unknown_582aa114();
int64_t unknown_5a7731f3();
int64_t unknown_621a1b4a();
int64_t unknown_6ececd70();
int64_t unknown_99dae03();
int64_t unknown_ffffffffa12149ed();
int64_t unknown_ffffffffaa11cbf8();
int64_t unknown_ffffffffab865981();
int64_t unknown_ffffffffac021555();
int64_t unknown_ffffffffb21a1416();
int64_t unknown_ffffffffea99150a();
int64_t unknown_fffffffff92da680();

// Address range: 0x1a66bb - 0x1a6759
int64_t function_1a66bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1a66bb
    int64_t v1; // 0x1a66bb
    return function_c823b(a1, a2, a3, a4, a5, a7, v1);
}

// Address range: 0x1a6759 - 0x1a689b
int64_t function_1a6759(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1a6759
    int64_t v1; // bp-56, 0x1a6759
    int64_t v2 = (int64_t)&v1; // 0x1a682e
    int64_t v3 = v2 + 16; // 0x1a683a
    bool v4; // 0x1a6759
    *(int64_t *)v3 = 0x4000 * (int64_t)(bool)v4 | 2048 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4 | 2;
    *(int64_t *)(v2 + 40) = 0x613ef422;
    int64_t v5 = v2 - 8; // 0x1a6853
    int64_t * v6 = (int64_t *)v5; // 0x1a6853
    int64_t * v7 = (int64_t *)(v2 - 16); // 0x1a6854
    *v7 = v5;
    *v6 = v2 + 8;
    *v6 = v1;
    *v7 = v1;
    v1 = v3;
    return function_c823b(a1, a2, a3, a4, a5, 0x1a5442, 0x4344f6bb);
}

// Address range: 0x1a689b - 0x1a6a09
int64_t function_1a689b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1a689b
    int64_t v1; // bp-40, 0x1a689b
    int64_t v2 = (int64_t)&v1 + 16; // 0x1a694b
    int64_t v3 = v2; // bp-24, 0x1a6971
    v1 = (int64_t)&v3;
    return function_c823b(a1, a2, a3, v2, a5, a6, v2);
}

// Address range: 0x1a6a74 - 0x1a6a77
int64_t function_1a6a74(void) {
    // 0x1a6a74
    int64_t result; // 0x1a6a74
    return result;
}

// Address range: 0x1a6cbb - 0x1a6ce7
int64_t function_1a6cbb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1a6cbb
    int64_t v1; // 0x1a6cbb
    return function_c823b(v1, v1, v1, v1, v1, v1, a1);
}

// Address range: 0x1a6ce7 - 0x1a6cec
int64_t function_1a6ce7(void) {
    // 0x1a6ce7
    int64_t result; // 0x1a6ce7
    return result;
}

// Address range: 0x1a6d55 - 0x1a6d64
int64_t function_1a6d55(void) {
    // 0x1a6d55
    *(char *)-0x175e31ee = *(char *)-0x175e31ee >> 1;
    return function_830c00();
}

// Address range: 0x1a6d69 - 0x1a6d6b
int64_t function_1a6d69(void) {
    // 0x1a6d69
    int64_t result; // 0x1a6d69
    return result;
}

// Address range: 0x1a6d74 - 0x1a6e14
int64_t function_1a6d74(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1a6d74
    int64_t v1; // 0x1a6d74
    int64_t v2 = v1;
    unknown_ffffffffab865981();
    *(int32_t *)0x1119a1ee = *(int32_t *)0x1119a1ee + (int32_t)a1;
    int64_t v3 = unknown_5a7731f3(); // 0x1a6ded
    int32_t * v4 = (int32_t *)(a2 + 68); // 0x1a6df7
    int32_t v5 = *v4; // 0x1a6df7
    int32_t v6 = 1 << (int32_t)a3 % 32; // 0x1a6df7
    *v4 = v5 | v6;
    char v7 = *(char *)(v3 - 51); // 0x1a6dff
    int64_t v8 = unknown_3d658e08(); // 0x1a6e02
    int32_t * v9 = (int32_t *)v8; // 0x1a6e07
    *v9 = *v9 + (int32_t)v8;
    int32_t * v10 = (int32_t *)(a2 + 84 + ((int64_t)(v7 - 30 + (char)((v5 & v6) != 0)) | 0xa7d50000)); // 0x1a6e10
    *v10 = -*v10;
    return 2 * v2 & 254 | v2 & 0xffffff00;
}

// Address range: 0x1a6e4e - 0x1a6e4f
int64_t function_1a6e4e(void) {
    // 0x1a6e4e
    int64_t result; // 0x1a6e4e
    return result;
}

// Address range: 0x1a6e7f - 0x1a6e81
int64_t function_1a6e7f(void) {
    // 0x1a6e7f
    return function_1a6e4e();
}

// Address range: 0x1a6eab - 0x1a6eb0
int64_t function_1a6eab(int64_t a1) {
    // 0x1a6eab
    int64_t result; // 0x1a6eab
    return result;
}

// Address range: 0x27b241 - 0x27b262
int64_t function_27b241(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 + 74); // 0x27b241
    *v1 = *v1 + (char)a3;
    uint64_t result = unknown_ffffffffac021555(); // 0x27b24e
    char * v2 = (char *)(a1 + 9); // 0x27b254
    *v2 = *v2 + (char)(result / 256);
    int32_t * v3 = (int32_t *)(a4 + 88); // 0x27b25f
    *v3 = *v3 + (int32_t)a1;
    return result;
}

// Address range: 0x27b2e5 - 0x27b2e6
int64_t function_27b2e5(void) {
    // 0x27b2e5
    int64_t result; // 0x27b2e5
    return result;
}

// Address range: 0x27b308 - 0x27b309
int64_t function_27b308(void) {
    // 0x27b308
    int64_t result; // 0x27b308
    return result;
}

// Address range: 0x27b310 - 0x27b318
int64_t function_27b310(int64_t a1) {
    int64_t result = unknown_ffffffffb21a1416(a1); // 0x27b315
    // 0x27b317
    return result;
}

// Address range: 0x27b318 - 0x27b347
int64_t function_27b318(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x27b318
    *(char *)a1 = (char)a1 & -5;
    return function_27b308();
}

// Address range: 0x27b36a - 0x27b3b9
int64_t function_27b36a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2; // 0x27b36a
    int64_t v3 = 8 * v2; // 0x27b36a
    char * v4 = (char *)(v3 - 0xfc85169 + v2); // 0x27b36a
    *v4 = *v4 + (char)v2;
    char v5 = __asm_in(122); // 0x27b375
    int64_t v6 = v2 & -256 | (int64_t)v5; // 0x27b375
    char v7 = *(char *)(v6 + v3); // 0x27b377
    char * v8 = (char *)v6; // 0x27b37a
    *v8 = *v8 + v5;
    unsigned char v9 = *(char *)&v1 | (char)(v2 / 256); // 0x27b37c
    int64_t v10 = 256 * (int64_t)v9 | v2 & -0xff01; // 0x27b37c
    *(char *)-0x788ce87b = *(char *)-0x788ce87b + v9;
    int64_t v11 = v6 & 0xffffffff; // 0x27b384
    int64_t v12 = a1 & 0xffffffff; // 0x27b384
    int32_t * v13 = (int32_t *)v10; // 0x27b388
    *v13 = *v13 + (int32_t)v10;
    uint64_t v14 = a4 - v2; // 0x27b38f
    uint32_t v15 = (int32_t)v14 % 32; // 0x27b391
    if (v15 != 0) {
        uint32_t v16 = *(int32_t *)&v11; // 0x27b391
        *(int32_t *)v12 = v16 >> 32 - v15 | v16 << v15;
    }
    *(char *)-0x34e53d65 = *(char *)-0x34e53d65 + v9;
    *v13 = *v13 | (int32_t)v1;
    char * v17 = (char *)((v14 % 256 | a4 & -0x10000 | 256 * (int64_t)(v7 & (char)(a4 / 256))) + 0x64c8e7d7); // 0x27b3a1
    int64_t v18 = v1; // 0x27b39f
    int64_t v19 = v12; // 0x27b39f
    while (true) {
        // 0x27b3a1
        *v17 = *v17 + (char)v18;
        v18 = v1;
        __asm_out_133((int16_t)v18, (char)v19);
        int64_t v20 = v11; // 0x27b3ab
        v11 = __asm_in_134(-13);
        *(char *)0x613bd3b3 = *(char *)0x613bd3b3 + v9;
        v19 = v20 & 0xffffffff;
    }
}

// Address range: 0x27b495 - 0x27b498
int64_t function_27b495(int64_t a1) {
    // 0x27b495
    int64_t result; // 0x27b495
    return result;
}

// Address range: 0x27b4ae - 0x27b4b9
int64_t function_27b4ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 0x44ff44d9); // 0x27b4ae
    *v1 = *v1 + (int32_t)a4;
    return function_af89503();
}

// Address range: 0x27b4d1 - 0x27b4df
int64_t function_27b4d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a2 - 0x3335230 + a3); // 0x27b4d1
    return (int64_t)(-0x52efe18 * v1 & -0xff08) | (int64_t)&g1;
}

// Address range: 0x27b4e3 - 0x27b4e6
int64_t function_27b4e3(void) {
    // 0x27b4e3
    int64_t result; // 0x27b4e3
    return result;
}

// Address range: 0x27b515 - 0x27b516
int64_t function_27b515(void) {
    // 0x27b515
    int64_t result; // 0x27b515
    return result;
}

// Address range: 0x27b526 - 0x27b557
int64_t function_27b526(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 0x57ea9cfa); // 0x27b526
    int64_t v2; // 0x27b526
    *v1 = *v1 + (int32_t)v2;
    unsigned char v3 = *(char *)(a3 + 0x3bb762e); // 0x27b52c
    int32_t * v4 = (int32_t *)(v2 - 101); // 0x27b535
    *v4 = *v4 + (int32_t)v2;
    *(char *)-0x7c7a9bfe17ff6edd = (char)((int16_t)v2 / (int16_t)v3);
    char * v5 = (char *)(a1 - 11); // 0x27b54b
    *v5 = (char)a4;
    int64_t v6 = a4 & -256 | (int64_t)*v5; // 0x27b54b
    int32_t * v7 = (int32_t *)(v6 - 11); // 0x27b551
    *v7 = *v7 - 1 + (int32_t)v6;
    return v2 & 0xffffffff;
}

// Address range: 0x27b559 - 0x27b55a
int64_t function_27b559(void) {
    // 0x27b559
    int64_t result; // 0x27b559
    return result;
}

// Address range: 0x27b55a - 0x27b56b
int64_t function_27b55a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x27b55a
    int64_t v1; // 0x27b55a
    char v2 = v1 | a3 / 256 + a4; // 0x27b55f
    *(char *)v1 = v2;
    int64_t result = unknown_21e9f167(); // 0x27b566
    if (v2 == 0) {
        result = function_27b515();
    }
    // 0x27b568
    return result;
}

// Address range: 0x27b56c - 0x27b56e
int64_t function_27b56c(void) {
    // 0x27b56c
    int64_t v1; // 0x27b56c
    bool v2; // 0x27b56c
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x27b56f - 0x27b587
int64_t function_27b56f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x27b56f
    int64_t v1; // 0x27b56f
    bool v2; // 0x27b56f
    if (v2) {
        v1 = function_27b559();
    }
    // 0x27b571
    *(int32_t *)-0x16e3db86 = *(int32_t *)-0x16e3db86 + (int32_t)a1;
    int64_t v3 = a1 - 111; // 0x27b57b
    int64_t v4; // 0x27b56f
    __writegsbyte(v3, (char)(-1 - (int32_t)a2 < (int32_t)v4) + (char)a4 + __readgsbyte(v3));
    return v4 + 0x6da192c5 + v1 & 0xffffffff;
}

// Address range: 0x27b5be - 0x27b5cb
int64_t function_27b5be(int64_t a1) {
    char v1 = *(char *)0x3aea6ac7; // 0x27b5c0
    int64_t v2; // 0x27b5be
    *(char *)0x3aea6ac7 = v1 + (char)((uint64_t)v2 / 256);
    bool v3; // 0x27b5be
    return function_7962a01f((v3 ? -1 : 1) + a1);
}

// Address range: 0x27b63c - 0x27b63f
int64_t function_27b63c(void) {
    // 0x27b63c
    int64_t result; // 0x27b63c
    return result;
}

// Address range: 0x27b668 - 0x27b669
int64_t function_27b668(int64_t a1) {
    // 0x27b668
    int64_t result; // 0x27b668
    return result;
}

// Address range: 0x27b707 - 0x27b70c
int64_t function_27b707(void) {
    // 0x27b707
    return function_20ff1a3();
}

// Address range: 0x27b719 - 0x27b71a
int64_t function_27b719(void) {
    // 0x27b719
    int64_t result; // 0x27b719
    return result;
}

// Address range: 0x27b74c - 0x27b752
int64_t function_27b74c(int64_t a1) {
    // 0x27b74c
    return unknown_1c56665(a1);
}

// Address range: 0x27b75e - 0x27b773
int64_t function_27b75e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x6e5c644b); // 0x27b765
    int32_t v2 = a1; // 0x27b765
    *v1 = *v1 + v2;
    char * v3 = (char *)(a2 + 16); // 0x27b76b
    *v3 = *v3 + (char)a4;
    int64_t v4; // 0x27b75e
    int32_t * v5 = (int32_t *)(v4 - 73); // 0x27b76e
    *v5 = *v5 | v2;
    return function_27b7de(a1, a2, a3, a4);
}

// Address range: 0x27b7aa - 0x27b7af
int64_t function_27b7aa(void) {
    // 0x27b7aa
    return function_db89b2();
}

// Address range: 0x27b7de - 0x27b7e9
int64_t function_27b7de(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = __asm_in_135((int16_t)a3); // 0x27b7de
    int64_t v2; // 0x27b7de
    *(char *)a3 = (char)v2 + (char)a4;
    int64_t v3; // 0x27b7de
    *(char *)a4 = *(char *)&v3 - v1;
    return v2 & -256 | (int64_t)v1;
}

// Address range: 0x27ba41 - 0x27ba75
int64_t function_27ba41(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_621a1b4a(); // 0x27ba44
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x27ba41
    int64_t v3 = (v2 ? -4 : 4) + a1; // 0x27ba49
    *(char *)v3 = (char)v1;
    int64_t v4; // 0x27ba41
    char * v5 = (char *)(v4 - 0x34fe1766); // 0x27ba52
    *v5 = *v5 + (char)(a3 / 256);
    int32_t v6 = a4; // 0x27ba58
    *(int32_t *)0xcc6276e5a4c00c3 = v6;
    int32_t * v7 = (int32_t *)((v1 & 0xffffffde) + 0x3a2364f5); // 0x27ba63
    *v7 = *v7 + (int32_t)(v3 + (v2 ? 0xffffffff : 1));
    __asm_out((int16_t)a3, v6);
    return function_210309f();
}

// Address range: 0x27baac - 0x27baae
int64_t function_27baac(void) {
    // 0x27baac
    int64_t result; // 0x27baac
    return result;
}

// Address range: 0x27bb0a - 0x27bb0b
int64_t function_27bb0a(int64_t a1) {
    // 0x27bb0a
    int64_t result; // 0x27bb0a
    return result;
}

// Address range: 0x27bb4f - 0x27bb52
int64_t function_27bb4f(void) {
    // 0x27bb4f
    int64_t result; // 0x27bb4f
    return result;
}

// Address range: 0x27bb97 - 0x27bb9a
int64_t function_27bb97(int64_t a1) {
    // 0x27bb97
    int64_t result; // 0x27bb97
    return result;
}

// Address range: 0x27bbcc - 0x27bbcf
int64_t function_27bbcc(void) {
    // 0x27bbcc
    int64_t result; // 0x27bbcc
    return result;
}

// Address range: 0x27bcc9 - 0x27bcca
int64_t function_27bcc9(void) {
    // 0x27bcc9
    int64_t result; // 0x27bcc9
    return result;
}

// Address range: 0x27bcd7 - 0x27bd0f
int64_t function_27bcd7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a2;
    bool v2; // 0x27bcd7
    if (a4 != 1 == v2) {
        function_27bcc9();
    }
    char * v3 = (char *)(a1 - 0x540cf85); // 0x27bcdf
    unsigned char v4 = *v3; // 0x27bcdf
    unsigned char v5 = v4 + (char)(a3 / 256); // 0x27bcdf
    *v3 = v5;
    *(char *)a1 = *(char *)&v1;
    int64_t v6 = v2 ? -1 : 1; // 0x27bce5
    int64_t v7 = unknown_122cfcec(v6 + a1, v1 + v6); // 0x27bce6
    char * v8 = (char *)(v7 - 50); // 0x27bceb
    int64_t v9; // 0x27bcd7
    *v8 = (char)(v5 < v4) + (char)v9 + *v8;
    int32_t * v10 = (int32_t *)v7; // 0x27bcf1
    *v10 = *v10 >> 13;
    *(int32_t *)-0x2c3cc4c557d4fe18 = (int32_t)v7;
    return unknown_ffffffffea99150a() & 0xdf912ee4 | 0x206ed11b;
}

// Address range: 0x27bd19 - 0x27bd21
int64_t function_27bd19(int64_t a1) {
    // 0x27bd19
    int64_t v1; // 0x27bd19
    int64_t v2 = v1;
    bool v3; // 0x27bd19
    return (v2 - v1 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x27bd37 - 0x27bd58
int64_t function_27bd37(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 0x716dc67); // 0x27bd37
    int32_t v2 = a2; // 0x27bd37
    bool v3; // 0x27bd37
    *v1 = (int32_t)v3 - v2 + *v1;
    int64_t v4; // 0x27bd37
    *(int32_t *)a3 = *(int32_t *)&v4 + v2;
    char v5 = *(char *)0x1bf3c4b; // 0x27bd44
    int64_t v6; // 0x27bd37
    *(char *)0x1bf3c4b = v5 + (char)((int64_t)&v6 / 256);
    __asm_in_136((int16_t)a3);
    int64_t result = __asm_sti(); // 0x27bd4b
    float80_t v7; // 0x27bd37
    v6 = v7;
    int32_t * v8 = (int32_t *)(a1 + 46); // 0x27bd50
    *v8 = 0x400000 * *v8;
    return result;
}

// Address range: 0x27bd6a - 0x27bd6b
int64_t function_27bd6a(void) {
    // 0x27bd6a
    int64_t result; // 0x27bd6a
    return result;
}

// Address range: 0x27bd79 - 0x27bd90
int64_t function_27bd79(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a3 + 0x3cd9ee62); // 0x27bd79
    int64_t result; // 0x27bd79
    char * v2 = (char *)(result - 100 + 4 * result); // 0x27bd81
    char v3 = *v2 + (char)(a3 / 256); // 0x27bd81
    *v2 = v3;
    if (v3 != 0) {
        // 0x27bd87
        return result;
    }
    char v4 = *(char *)-0x27549771; // 0x27bd88
    bool v5; // 0x27bd79
    *(char *)-0x27549771 = v4 + (char)(((int32_t)v5 + (int32_t)result - v1) / 256);
    return result;
}

// Address range: 0x27be35 - 0x27be36
int64_t function_27be35(void) {
    // 0x27be35
    int64_t result; // 0x27be35
    return result;
}

// Address range: 0x27be48 - 0x27be4d
int64_t function_27be48(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27be48
    int64_t v1; // 0x27be48
    __asm_outsb((int16_t)a3, (char)v1);
    return function_27be35();
}

// Address range: 0x27be6c - 0x27be80
int64_t function_27be6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27be6c
    int64_t v1; // 0x27be6c
    int32_t * v2 = (int32_t *)(v1 - 79); // 0x27be6c
    *v2 = *v2 + (int32_t)v1;
    *(char *)a1 = (char)v1;
    bool v3; // 0x27be6c
    return unknown_fffffffff92da680((v3 ? -1 : 1) + a1);
}

// Address range: 0x27be9a - 0x27be9c
int64_t function_27be9a(void) {
    // 0x27be9a
    int64_t v1; // 0x27be9a
    return function_27beed(v1, v1, v1);
}

// Address range: 0x27beb7 - 0x27bec2
int64_t function_27beb7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27beb7
    int64_t result; // 0x27beb7
    *(int32_t *)-0x61570717 = *(int32_t *)-0x61570717 + (int32_t)result;
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x27becc - 0x27bed2
int64_t function_27becc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t result; // 0x27becc
    *(char *)a4 = 2 * (char)result;
    uint32_t v2 = (int32_t)a4 % 32; // 0x27bece
    if (v2 != 0) {
        *(int32_t *)v1 = *(int32_t *)&v1 >> v2;
    }
    // 0x27bed5
    return result;
}

// Address range: 0x27bed3 - 0x27bed5
int64_t function_27bed3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27bed3
    int64_t result; // 0x27bed3
    return result;
}

// Address range: 0x27beed - 0x27bef9
int64_t function_27beed(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27beed
    int64_t v1; // 0x27beed
    unsigned char v2 = (char)v1;
    *(char *)v1 = v2 / 128 | 2 * v2;
    unknown_ffffffffaa11cbf8();
    return __asm_hlt(a1);
}

// Address range: 0x27bf0e - 0x27bf19
int64_t function_27bf0e(void) {
    int64_t result = unknown_582aa114(); // 0x27bf0e
    int32_t * v1 = (int32_t *)(result + 106); // 0x27bf13
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x27bf21 - 0x27bf26
int64_t function_27bf21(void) {
    // 0x27bf21
    return function_1afb5173();
}

// Address range: 0x27bf2f - 0x27bf36
int64_t function_27bf2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27bf2f
    int64_t v1; // 0x27bf2f
    *(int32_t *)a4 = 2 * (int32_t)v1;
    return function_5105244();
}

// Address range: 0x27bf80 - 0x27bf81
int64_t function_27bf80(void) {
    // 0x27bf80
    int64_t result; // 0x27bf80
    return result;
}

// Address range: 0x27bf83 - 0x27bf86
int64_t function_27bf83(int64_t a1) {
    // 0x27bf83
    int64_t result; // 0x27bf83
    return result;
}

// Address range: 0x27bfd8 - 0x27bfe7
int64_t function_27bfd8(void) {
    // 0x27bfd8
    return function_3d27c6b0();
}

// Address range: 0x27bfef - 0x27bff2
int64_t function_27bfef(void) {
    // 0x27bfef
    int64_t result; // 0x27bfef
    return result;
}

// Address range: 0x27c058 - 0x27c08f
int64_t function_27c058(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t v2; // 0x27c058
    *(char *)-0x5e875e9f = *(char *)-0x5e875e9f + (char)(v2 / 256);
    *(char *)(a4 + 0x26ad8d89) = -88;
    unknown_6ececd70();
    int64_t v3 = v1; // 0x27c06f
    int64_t v4; // 0x27c058
    unsigned char v5 = *(char *)&v4; // 0x27c070
    int64_t v6; // 0x27c058
    unsigned char v7 = *(char *)&v6; // 0x27c070
    char v8 = v5 - v7; // 0x27c070
    unsigned char v9 = llvm_ctpop_i8(v8); // 0x27c070
    bool v10; // 0x27c058
    int64_t v11 = v10 ? -1 : 1; // 0x27c070
    int64_t v12 = v11 + a2; // 0x27c070
    __asm_out((int16_t)a3, (int32_t)v3);
    v1 = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | (int64_t)(v5 < v7) | 64 * (int64_t)(v8 == 0) | 128 * (int64_t)(v8 < 0) | 16 * (int64_t)(v5 % 16 - v7 % 16 > 15) | 4 * (int64_t)(v9 % 2 == 0) | 2048 * (int64_t)(((v8 ^ v5) & (v7 ^ v5)) < 0) | 2;
    uint64_t v13 = a4 / 256; // 0x27c074
    int32_t * v14 = (int32_t *)(a1 + 99 + v11); // 0x27c078
    *v14 = *v14 + (int32_t)(int64_t)&v1;
    char * v15 = (char *)v12; // 0x27c080
    *v15 = *v15 | (char)v13;
    return function_ffffffffa628618c(((v3 - v13) % 256 | v3 & 0xffffff00) + v2 & 0xffffffff, v12 + v11);
}

// Address range: 0x27c091 - 0x27c096
int64_t function_27c091(void) {
    // 0x27c091
    return function_ffffffffd7adcc0b();
}

// Address range: 0x27c0c1 - 0x27c0c4
int64_t function_27c0c1(void) {
    // 0x27c0c1
    int64_t result; // 0x27c0c1
    return result;
}

// Address range: 0x27c0d7 - 0x27c0d8
int64_t function_27c0d7(int64_t a1) {
    // 0x27c0d7
    int64_t result; // 0x27c0d7
    return result;
}

// Address range: 0x27c0e3 - 0x27c0e5
int64_t function_27c0e3(void) {
    // 0x27c0e3
    int64_t v1; // 0x27c0e3
    return function_27c0f5(v1, v1, v1);
}

// Address range: 0x27c0e7 - 0x27c0f5
int64_t function_27c0e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27c0e7
    int64_t v1; // 0x27c0e7
    uint64_t v2 = v1;
    int64_t v3 = unknown_ffffffffa12149ed(); // 0x27c0e7
    char v4 = *(char *)(v3 + 8 * v2); // 0x27c0ec
    int32_t * v5 = (int32_t *)(256 * (int64_t)(v4 | (char)(v2 / 256)) | v2 & -0xff01); // 0x27c0ef
    *v5 = *v5 + (int32_t)v1;
    return v3 + v1 & 0xffffffff;
}

// Address range: 0x27c0f5 - 0x27c11f
int64_t function_27c0f5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27c0f5
    bool v1; // 0x27c0f5
    if (v1) {
        // 0x27c116
        int64_t result; // 0x27c0f5
        int32_t * v2 = (int32_t *)(result + 0x7ba14771); // 0x27c116
        *v2 = *v2 + (int32_t)result;
        return result;
    }
    // 0x27c0f7
    return unknown_99dae03();
}

// Address range: 0x27c13d - 0x27c140
int64_t function_27c13d(int64_t a1) {
    // 0x27c13d
    int64_t result; // 0x27c13d
    return result;
}

// Address range: 0x27c1a4 - 0x27c1a5
int64_t function_27c1a4(int64_t a1) {
    // 0x27c1a4
    int64_t result; // 0x27c1a4
    return result;
}

// Address range: 0x27c1c8 - 0x27c1cb
int64_t function_27c1c8(int64_t a1) {
    // 0x27c1c8
    int64_t result; // 0x27c1c8
    return result;
}

// Address range: 0x378d6a - 0x378d6f
int64_t function_378d6a(void) {
    // 0x378d6a
    int64_t result; // 0x378d6a
    return result;
}

// Address range: 0x378d8f - 0x378dad
int64_t function_378d8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x378d8f
    int64_t v1; // 0x378d8f
    if ((int32_t)v1 < 0x39f1c701) {
        // 0x378dab
        *(char *)a2 = (char)a2 / 2;
        return v1 & 0xffffffff;
    }
    // 0x378d97
    __asm_outsd((int16_t)a3, (int32_t)a2);
    int32_t * v2 = (int32_t *)(a2 + 0x3c015888); // 0x378d9c
    *v2 = *v2 + (int32_t)a1;
    return result;
}

// Address range: 0x378df8 - 0x378e01
int64_t function_378df8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x378df8
    int64_t v1; // 0x378df8
    uint64_t result = v1;
    int64_t v2 = a4 - 1; // 0x378df8
    char v3; // 0x378df8
    bool v4; // 0x378df8
    if (v2 == 0 || v4) {
        char * v5 = (char *)(a4 - 30); // 0x378dfa
        char v6 = result / 256;
        *v5 = (char)v4 + v6 + *v5;
        v3 = v6;
    } else {
        // 0x378df8
        v3 = result / 256;
    }
    char * v7 = (char *)v2; // 0x378dfd
    *v7 = *v7 + v3;
    return result;
}

// Address range: 0x378e20 - 0x378e75
int64_t function_378e20(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x378e20
    int64_t v1; // 0x378e20
    uint64_t v2 = v1;
    int64_t v3 = a3;
    bool v4; // 0x378e20
    int64_t v5 = 0x4000 * (int64_t)v4 | 2048 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4 | 2; // bp-8, 0x378e20
    int64_t v6 = (int64_t)&v5 - v2 & 0xffffffff; // 0x378e28
    unknown_110b1a07();
    unknown_2cbb3435();
    int32_t v7 = *(int32_t *)(v2 - 0x26f66a59); // 0x378e34
    char v8 = v2 / 256; // 0x378e3c
    *(char *)0x387e8f43 = *(char *)0x387e8f43 + v8;
    char * v9 = (char *)(v2 - 0x542b3400); // 0x378e44
    *v9 = *v9 ^ v8;
    *(int64_t *)(v6 - 8) = a4;
    uint32_t v10 = (int32_t)a4 % 32; // 0x378e4d
    if (v10 != 0) {
        *(int32_t *)v3 = *(int32_t *)&v3 >> v10;
    }
    int16_t v11; // 0x378e20
    uint16_t v12 = v11 % 256; // 0x378e42
    *(int64_t *)(v6 - 16) = 0x7a09fc2e;
    v3 = v12 * v12;
    unsigned char v13 = (char)(a4 / 256) + (char)a4; // 0x378e62
    int64_t result = __asm_int1(); // 0x378e64
    unsigned char v14 = v13 % 32; // 0x378e65
    if (v14 != 0) {
        char * v15 = (char *)((int64_t)(v7 + (int32_t)a2) - 0x1fae9d21); // 0x378e65
        unsigned char v16 = *v15; // 0x378e65
        *v15 = v16 >> 8 - v14 | v16 << v14;
    }
    if (v13 != 0) {
        // 0x378e9f
        return result;
    }
    // 0x378e6d
    *(char *)0x48303274 = *(char *)0x48303274 + v8;
    return result;
}

// Address range: 0x378e81 - 0x378e95
int64_t function_378e81(int64_t a1, int64_t a2, int64_t a3) {
    // 0x378e81
    int64_t result; // 0x378e81
    __asm_out_133((int16_t)a3, (char)result);
    int32_t v1 = result;
    *(int32_t *)result = 2 * v1 | (int32_t)(v1 < 0);
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x378e9a - 0x378e9f
int64_t function_378e9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x378e9a
    int64_t result; // 0x378e9a
    *(char *)a3 = (char)(result ^ result);
    int64_t v1; // 0x378e9a
    *(char *)a4 = *(char *)&v1 - (char)result;
    return result;
}

// Address range: 0x378eaf - 0x378eb5
int64_t function_378eaf(int64_t a1, int64_t a2, int64_t a3) {
    char v1 = __asm_in_135((int16_t)a3); // 0x378eaf
    int64_t v2; // 0x378eaf
    return (v2 | (int64_t)v1) & -256 | (int64_t)(v1 ^ -118);
}

// Address range: 0x378ec2 - 0x378fb1
int64_t function_378ec2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x378ec2
    int64_t v1; // 0x378ec2
    uint64_t v2 = v1;
    int64_t v3 = a4 | a2;
    uint32_t v4 = (int32_t)v3; // 0x378ec3
    int64_t result = unknown_43ec3acb(); // 0x378ec5
    int64_t v5; // bp-8, 0x378ec2
    if (v4 < 2) {
        // 0x378ecc
        v5 = -0x75502800;
        *(char *)0x2742b1d9 = *(char *)0x2742b1d9 + (char)(v2 / 256);
        int32_t * v6 = (int32_t *)(a3 - 0x587cccd6); // 0x378ed9
        *v6 = *v6 + (int32_t)(int64_t)&v5;
        return a1 & 0xffffffff;
    }
    // 0x378f03
    *(char *)0x6f8c730a = *(char *)0x6f8c730a + (char)(v2 / 256);
    int32_t * v7 = (int32_t *)(result - 59); // 0x378f0f
    int32_t v8 = *v7 + (int32_t)a3; // 0x378f0f
    *v7 = v8;
    if (v8 == 0) {
        // 0x378f15
        return unknown_1d6567ca();
    }
    int32_t * v9 = (int32_t *)(a2 - 0x7b41ffd4); // 0x378f81
    *v9 = *v9 + (int32_t)(int64_t)&v5;
    int32_t * v10 = (int32_t *)result; // 0x378f88
    uint32_t v11 = *v10; // 0x378f88
    *v10 = v11 + 116;
    *(char *)result = (char)result;
    char v12; // 0x378ec2
    if (v4 == 2 || v12 == (char)(v11 > 0xffffff8b) + (char)v2) {
        // 0x378f96
        return result;
    }
    int64_t v13 = 0x100000000 * result >> 32; // 0x378fa5
    uint64_t v14 = v13 * v13; // 0x378fa5
    int32_t * v15 = (int32_t *)((v3 & 0xffffffff) - 92); // 0x378fa7
    *v15 = *v15 + (int32_t)(v14 / 0x100000000);
    return v14 & 0xffffffff;
}

// Address range: 0x378fb2 - 0x378fe5
int64_t function_378fb2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x378fb2
    int64_t v1; // 0x378fb2
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    __asm_in_134(-53);
    return a2 & 0xffffffff;
}

// Address range: 0x378ff9 - 0x379086
int64_t function_378ff9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2; // 0x378ff9
    int64_t v3 = v2 ^ v2;
    int32_t * v4 = (int32_t *)(4 * v2 + 0x3d004237); // 0x378ffb
    int32_t v5 = a3; // 0x378ffb
    *v4 = *v4 + v5;
    int32_t * v6 = (int32_t *)(a1 + 0x1e498625); // 0x379002
    *v6 = *v6 + (int32_t)a1;
    if (*(char *)(v2 + 43) <= (char)v3) {
        uint64_t result = (v3 & 0xffffffff) * a5; // 0x379012
        char * v7 = (char *)(v2 - 0x1c5fec3 + result); // 0x379016
        *v7 = *v7 + (char)(result / 256);
        return result;
    }
    char * v8 = (char *)(a3 + 44); // 0x37903c
    *v8 = *v8 | (char)v1;
    int64_t v9 = unknown_4521e046(); // 0x379040
    float80_t v10; // 0x378ff9
    *(int64_t *)(v1 + 0x3d000011) = (int64_t)v10;
    int32_t * v11 = (int32_t *)(a1 - 103); // 0x37904d
    int32_t v12 = v9; // 0x37904d
    *v11 = *v11 + v12;
    *(char *)v1 = *(char *)&v1 | (char)a3;
    int32_t * v13 = (int32_t *)(a5 + 8); // 0x379058
    int32_t v14 = *v13; // 0x379058
    *v13 = 0x8000 * v14;
    uint32_t v15 = (int32_t)((v14 & 0x20000) != 0) + v5 - *(int32_t *)(v1 + 99); // 0x37905e
    uint64_t v16 = (int64_t)v15; // 0x37905e
    uint64_t v17 = ((int64_t)__asm_in_135((int16_t)v15) & 0xffffffff | (int64_t)(0x10000 * v12 >> 16 & -256) | 0x100000000 * v16) / v16; // 0x379069
    int64_t result2 = v17 & 0xffffffff; // 0x379069
    char * v18 = (char *)(a1 + 61 + result2); // 0x37907a
    *v18 = *v18 + (char)v17;
    int32_t * v19 = (int32_t *)(a1 - 0x5890206b); // 0x37907e
    *v19 = *v19 + (int32_t)v17;
    return result2;
}

// Address range: 0x3790ae - 0x3790b4
int64_t function_3790ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 126); // 0x3790ae
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x3790ae
    return result;
}

// Address range: 0x3790c0 - 0x3790c1
int64_t function_3790c0(void) {
    // 0x3790c0
    int64_t result; // 0x3790c0
    return result;
}

// Address range: 0x379123 - 0x379127
int64_t function_379123(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x379123
    int64_t result; // 0x379123
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x379141 - 0x3791c7
int64_t function_379141(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x379141
    int64_t v1; // 0x379141
    uint64_t v2 = v1;
    char * v3 = (char *)a1; // 0x379141
    *v3 = (char)(a3 / 256) + (char)a1;
    int64_t v4 = __asm_wait(); // 0x379143
    int64_t v5; // 0x379141
    *(int32_t *)v5 = *(int32_t *)&v5 - (int32_t)a1;
    int16_t v6 = a3; // 0x379148
    char v7 = __asm_in_135(v6); // 0x379148
    uint64_t v8 = v1 & v1;
    unsigned char v9 = *(char *)(v2 - 0x6cdd43a9) | (char)(a4 / 256); // 0x37914f
    int64_t v10 = (256 * (int64_t)v9 | a4 & -0xff01) - 1; // 0x37915b
    if (v9 == 0 || v10 == 0) {
        int64_t v11 = (v4 | (int64_t)v7) & 0xffffff00 | (int64_t)(v7 + 56); // 0x37914d
        float80_t v12; // 0x379141
        *(float64_t *)(a3 + 0x3ee701e8) = (float64_t)v12;
        float64_t v13 = *(float64_t *)(v11 - 0x28fb6e91); // 0x379167
        *(char *)0x2c337075 = *(char *)0x2c337075 + (char)(v8 / 256);
        *(int32_t *)(v10 + v11) = (int32_t)(v12 - (float80_t)v13);
        char * v14 = (char *)(a2 - 85); // 0x379178
        *v14 = *v14 & (char)(v2 / 256);
        return function_17491ed();
    }
    char v15 = __asm_in(-6); // 0x3791c0
    *v3 = __asm_insb(v6);
    char * v16 = (char *)(v8 & 0xffffffff); // 0x3791c3
    *v16 = *v16 + v15;
    return (int64_t)v15 & -256 | v2 & 0xffffff00 | (int64_t)(v15 | 88);
}

// Address range: 0x37920a - 0x37920e
int64_t function_37920a(void) {
    // 0x37920a
    int64_t result; // 0x37920a
    return result;
}

// Address range: 0x37921c - 0x379239
int64_t function_37921c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x37921c
    int64_t v1; // 0x37921c
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a2 + 0x3a0f4fe7); // 0x37921c
    *v3 = *v3 + (int32_t)a1;
    int64_t v4; // 0x37921c
    int32_t v5 = *(int32_t *)&v4; // 0x379222
    *(int32_t *)a4 = 2 * v5 | (int32_t)(v5 < 0);
    int64_t v6; // 0x37921c
    int64_t v7 = (int64_t)*(int32_t *)&v6; // 0x37922b
    char * v8 = (char *)(a4 + 0x13d00c1); // 0x379230
    *v8 = *v8 + (char)((uint64_t)v1 / 256);
    return ((v2 | a3 / 256) + 24 + (int64_t)(-39 * v7 != -0x2700000000 * v7 >> 32)) % 256 | v2 & -256;
}

// Address range: 0x379239 - 0x379245
int64_t function_379239(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x379239
    *(int32_t *)-0x1708aab2 = *(int32_t *)-0x1708aab2 + (int32_t)a3;
    int32_t * v1 = (int32_t *)(a2 - 111); // 0x37923f
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x379239
    return result;
}

// Address range: 0x379255 - 0x37925b
int64_t function_379255(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x379255
    return function_ffffffffb02ee075();
}

// Address range: 0x37928c - 0x37928f
int64_t function_37928c(int64_t a1) {
    // 0x37928c
    int64_t v1; // 0x37928c
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x3792a3 - 0x3792a4
int64_t function_3792a3(void) {
    // 0x3792a3
    int64_t result; // 0x3792a3
    return result;
}

// Address range: 0x379344 - 0x379345
int64_t function_379344(int64_t a1) {
    // 0x379344
    int64_t result; // 0x379344
    return result;
}

// Address range: 0x37946a - 0x37946b
int64_t function_37946a(void) {
    // 0x37946a
    int64_t result; // 0x37946a
    return result;
}

// Address range: 0x37946c - 0x37948b
int64_t function_37946c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37946c
    int64_t result; // 0x37946c
    return result;
}

// Address range: 0x379542 - 0x379545
int64_t function_379542(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x379542
    int64_t result; // 0x379542
    *(int32_t *)a4 = (int32_t)(result & result);
    return result;
}

// Address range: 0x379559 - 0x379566
int64_t function_379559(void) {
    // 0x379559
    int64_t v1; // 0x379559
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return v2 & 0xffffffff ^ 0xe06f0068;
}

// Address range: 0x37976a - 0x379788
int64_t function_37976a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37976a
    int64_t result; // 0x37976a
    uint64_t v1 = result;
    char * v2 = (char *)(a1 - 0x407e5a46); // 0x37976a
    *v2 = *v2 + (char)a4;
    int64_t v3; // 0x37976a
    *(int32_t *)a4 = *(int32_t *)&v3 + (int32_t)v1;
    __asm_int(-18);
    int32_t * v4 = (int32_t *)(a2 - 115); // 0x379776
    *v4 = *v4 + (int32_t)a4;
    char * v5 = (char *)(result + 0x37811aa3); // 0x37977c
    *v5 = *v5 + (char)(result / 256);
    *(char *)0x7bf8c89 = *(char *)0x7bf8c89 + (char)(v1 / 256);
    return result;
}

// Address range: 0x379796 - 0x37979a
int64_t function_379796(int64_t a1) {
    // 0x379796
    int64_t result; // 0x379796
    return result;
}

// Address range: 0x3797a1 - 0x3797e5
int64_t function_3797a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    int32_t v1 = a5;
    unsigned char v2 = *(char *)-0x190c538f0b60af05; // 0x3797a1
    int64_t v3; // 0x3797a1
    int64_t v4 = v3 & -256; // 0x3797a1
    int64_t v5 = v4 | (int64_t)v2; // 0x3797a1
    *(int32_t *)(2 * v5) = (int32_t)(int64_t)&v1;
    char * v6 = (char *)v5; // 0x3797b7
    *v6 = *v6 + v2;
    char * v7 = (char *)(a2 + 5); // 0x3797b9
    *v7 = *v7 + (char)(v3 / 256);
    char * v8 = (char *)(v5 + 0x5f220072); // 0x3797bc
    unsigned char v9 = *v8; // 0x3797bc
    unsigned char v10 = v9 + v2; // 0x3797bc
    *v8 = v10;
    int32_t v11 = v1; // 0x3797c2
    int64_t v12; // 0x3797a1
    int64_t v13 = v4 | (int64_t)*(char *)&v12; // 0x3797c3
    v1 = v3;
    int16_t v14 = *(int16_t *)((int64_t)v11 - 24); // 0x3797c8
    int64_t v15 = a4 & -0x10000 | (int64_t)((int16_t)(v10 < v9) + (int16_t)a4 + v14); // 0x3797c8
    int32_t * v16 = (int32_t *)(v15 + 0x5b7339b1); // 0x3797cc
    *v16 = *v16 + (int32_t)v15;
    uint32_t result = *(int32_t *)v13 + (int32_t)v13; // 0x3797d2
    *(int32_t *)-0x50d5fe376b00fc20 = result;
    return result;
}

// Address range: 0x3797e5 - 0x379812
int64_t function_3797e5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3797e5
    int64_t v1; // 0x3797e5
    int64_t v2 = v1;
    uint64_t v3 = v1;
    *(char *)v2 = (char)(v3 / 256) + (char)v2;
    int64_t v4 = __asm_hlt(0x5026e900); // 0x3797f5
    int64_t v5; // 0x3797e5
    int64_t v6 = v5; // 0x3797f6
    char * v7 = (char *)(v4 + 95); // 0x3797fc
    unsigned char v8 = *v7; // 0x3797fc
    unsigned char v9 = (char)a4 % 32; // 0x3797fc
    v5 = v6;
    char v10 = v6; // 0x3797fc
    if (v9 != 0) {
        unsigned char v11 = (char)(a3 / 256); // 0x3797f6
        unsigned char v12 = *(char *)(v6 + 0x73677600) + v11; // 0x3797f6
        bool v13 = (int32_t)v3 < 0xcfb61701 ? v12 + (char)((int32_t)v3 < 0xcfb61701) <= v11 : v12 < v11; // 0x3797f6
        *v7 = v8 >> v9 | (char)((int16_t)v8 << (int16_t)(9 - v9)) | (char)v13 << 8 - v9;
        v10 = *(char *)&v5;
    }
    unsigned char v14 = v10 + (char)a3; // 0x3797ff
    *(char *)v5 = v14;
    return v4 + 0x3330460f + (int64_t)(v14 < v10) & 0xffffff17 | 232;
}

// Address range: 0x37982e - 0x37982f
int64_t function_37982e(void) {
    // 0x37982e
    int64_t result; // 0x37982e
    return result;
}

// Address range: 0x37983d - 0x37983e
int64_t function_37983d(void) {
    // 0x37983d
    int64_t result; // 0x37983d
    return result;
}

// Address range: 0x379853 - 0x379860
int64_t function_379853(int64_t a1, int64_t a2) {
    // 0x379853
    int64_t result; // 0x379853
    int32_t * v1 = (int32_t *)(result - 0x17fec2f1); // 0x379853
    *v1 = *v1 | (int32_t)result;
    int32_t v2 = a2; // 0x379859
    int64_t v3; // 0x379853
    *(int32_t *)a2 = *(int32_t *)&v3 + v2;
    *(int32_t *)(a2 + a1) = v2;
    return result;
}

// Address range: 0x379860 - 0x37987a
int64_t function_379860(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = __asm_in_134(26); // 0x379860
    __asm_int(0);
    if (v1 < 0xf8d7da02) {
        function_37983d();
    }
    // 0x37986e
    return __asm_int3();
}

// Address range: 0x37987a - 0x37987b
int64_t function_37987a(int64_t a1) {
    // 0x37987a
    int64_t result; // 0x37987a
    return result;
}

// Address range: 0x379882 - 0x379885
int64_t function_379882(void) {
    // 0x379882
    int64_t result; // 0x379882
    return result;
}

// Address range: 0x3798a9 - 0x3798ac
int64_t function_3798a9(int64_t a1) {
    // 0x3798a9
    int64_t result; // 0x3798a9
    return result;
}

// Address range: 0x3798b6 - 0x3798b9
int64_t function_3798b6(void) {
    // 0x3798b6
    int64_t result; // 0x3798b6
    return result;
}

// Address range: 0x3798df - 0x3798e0
int64_t function_3798df(int64_t a1) {
    // 0x3798df
    int64_t result; // 0x3798df
    return result;
}

// Address range: 0x3798e2 - 0x3798e3
int64_t function_3798e2(void) {
    // 0x3798e2
    int64_t result; // 0x3798e2
    return result;
}

// Address range: 0x3799a3 - 0x3799a7
int64_t function_3799a3(int64_t a1) {
    // 0x3799a3
    int64_t result; // 0x3799a3
    return result;
}

// Address range: 0x3799a7 - 0x3799bd
int64_t function_3799a7(void) {
    // 0x3799a7
    int64_t v1; // 0x3799a7
    char v2 = v1; // 0x3799ac
    *(char *)0x646489a3a2da663a = v2;
    __asm_out_138(-126, v2);
    return v1 & 0x77a9013d;
}

// Address range: 0x379a34 - 0x379a38
int64_t function_379a34(int64_t a1, int64_t a2, int64_t a3) {
    // 0x379a34
    int64_t result; // 0x379a34
    *(char *)a2 = (char)(result & result);
    return result;
}

// Address range: 0x379a4d - 0x379a4e
int64_t function_379a4d(void) {
    // 0x379a4d
    int64_t result; // 0x379a4d
    return result;
}

// Address range: 0x379a71 - 0x379a79
int64_t function_379a71(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 0x383f89d9); // 0x379a71
    int64_t v2; // 0x379a71
    *v1 = *v1 + (int32_t)v2;
    return function_379add(a1, a2, a3, v2, v2);
}

// Address range: 0x379ac0 - 0x379ac3
int64_t function_379ac0(int64_t a1) {
    // 0x379ac0
    int64_t result; // 0x379ac0
    return result;
}

// Address range: 0x379add - 0x379ae1
int64_t function_379add(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x379add
    int64_t result; // 0x379add
    return result;
}

// Address range: 0x379aee - 0x379af3
int64_t function_379aee(void) {
    // 0x379aee
    return function_ffffffff99eb7d52();
}

// Address range: 0x379b20 - 0x379b48
int64_t function_379b20(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 + 91); // 0x379b20
    int64_t result; // 0x379b20
    bool v2; // 0x379b20
    *v1 = *v1 + (char)(result / 256) + (char)v2;
    char * v3 = (char *)(result - 40); // 0x379b28
    char v4 = *v3 + (char)a3; // 0x379b28
    *v3 = v4;
    if (v4 != 0) {
        // 0x379b96
        return result;
    }
    // 0x379b2e
    *(char *)0x277f8635 = *(char *)0x277f8635 + (char)(result / 256);
    *(char *)(result + 0x10a522ed) = 0;
    int32_t * v5 = (int32_t *)(result - 0x33fe8126); // 0x379b3d
    *v5 = *v5 + (int32_t)result;
    return function_ffffffffd89e8f9c(0xd3c88bc6);
}
