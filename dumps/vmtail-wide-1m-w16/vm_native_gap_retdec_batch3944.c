/*
 * Targeted RetDec C for native executable gap queue batch 3944.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x448fa-0x44912 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44bd2-0x44bea rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bd78-0x4bd90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54860-0x54878 rank=- name=- kind=- bytes=- uncovered=-
 *   0x55c56-0x55c6e rank=- name=- kind=- bytes=- uncovered=-
 *   0x56db8-0x56dd0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5a272-0x5a28a rank=- name=- kind=- bytes=- uncovered=-
 *   0x5f278-0x5f290 rank=- name=- kind=- bytes=- uncovered=-
 *   0x68c2a-0x68c41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6b6ce-0x6b6e6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x7834c-0x78364 rank=- name=- kind=- bytes=- uncovered=-
 *   0x496c69-0x496c80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49a8e8-0x49a900 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4aa639-0x4aa650 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ad559-0x4ad570 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b0069-0x4b0080 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b41e8-0x4b4200 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ba368-0x4ba380 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ba699-0x4ba6b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ba7b9-0x4ba7d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bfab9-0x4bfad0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c4648-0x4c4660 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c946a-0x4c9480 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4eef29-0x4eef40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f1708-0x4f1720 rank=- name=- kind=- bytes=- uncovered=-
 *   0x501a79-0x501a90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50cce9-0x50cd00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5226f9-0x522710 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5553f9-0x555410 rank=- name=- kind=- bytes=- uncovered=-
 *   0x556e3a-0x556e50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56dd19-0x56dd30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56fbea-0x56fc00 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
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

int64_t function_448e6();
int64_t function_448fa(int64_t a1);
int64_t function_44b6c();
int64_t function_44bd2(int64_t a1);
int64_t function_496540();
int64_t function_496c69(int64_t a1, int64_t a2, int64_t a3);
int64_t function_49a88e();
int64_t function_49a8e8(void);
int64_t function_49a8f0(void);
int64_t function_4aa639(void);
int64_t function_4ad515();
int64_t function_4ad559(void);
int64_t function_4ad55a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4b0048();
int64_t function_4b0069(void);
int64_t function_4b006a(void);
int64_t function_4b0ac0();
int64_t function_4b2d10();
int64_t function_4b3d93();
int64_t function_4b41e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4ba347();
int64_t function_4ba368(void);
int64_t function_4ba36d(void);
int64_t function_4ba699(void);
int64_t function_4ba69a(int64_t a1);
int64_t function_4ba7b9(void);
int64_t function_4ba7ba(int64_t a1);
int64_t function_4bcaa();
int64_t function_4bd78(int64_t a1);
int64_t function_4bfa06();
int64_t function_4bfab9(int64_t a1);
int64_t function_4c4648(void);
int64_t function_4c920e();
int64_t function_4c946a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4eeb30();
int64_t function_4eeb50();
int64_t function_4eef29(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4f1708(int64_t result);
int64_t function_501a79(void);
int64_t function_501a81(void);
int64_t function_50cce9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_522629();
int64_t function_52268d();
int64_t function_5226f9(void);
int64_t function_54834();
int64_t function_54860(int64_t a1);
int64_t function_548a30();
int64_t function_555329();
int64_t function_55538d();
int64_t function_5553f9(void);
int64_t function_556e3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_55c2a();
int64_t function_55c56(int64_t a1);
int64_t function_56d3f9();
int64_t function_56da4();
int64_t function_56db8(int64_t a1);
int64_t function_56dd19(int64_t a1, int64_t a2, int64_t a3);
int64_t function_56fbea(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_56fc04();
int64_t function_5a25e();
int64_t function_5a272(int64_t a1);
int64_t function_5f202();
int64_t function_5f278(int64_t a1);
int64_t function_68c1c();
int64_t function_68c2a(int64_t a1);
int64_t function_6b6a6();
int64_t function_6b6ce(int64_t a1);
int64_t function_7834c(int64_t result);
int64_t function_78350(int64_t result);
int64_t function_78354(int64_t result);
int64_t function_78358(int64_t result);
int64_t function_7835c(int64_t result);
int64_t function_78360(int64_t result);

// Address range: 0x448fa - 0x44911
int64_t function_448fa(int64_t a1) {
    // 0x448fa
    function_448e6();
    return function_4eeb30(a1, &g6);
}

// Address range: 0x44bd2 - 0x44be9
int64_t function_44bd2(int64_t a1) {
    // 0x44bd2
    function_44b6c();
    return function_4eeb30(a1, &g5);
}

// Address range: 0x4bd78 - 0x4bd8f
int64_t function_4bd78(int64_t a1) {
    // 0x4bd78
    function_4bcaa();
    return function_4eeb30(a1, &g2);
}

// Address range: 0x54860 - 0x54877
int64_t function_54860(int64_t a1) {
    // 0x54860
    function_54834();
    return function_4eeb30(a1, (int64_t *)24);
}

// Address range: 0x55c56 - 0x55c6d
int64_t function_55c56(int64_t a1) {
    // 0x55c56
    function_55c2a();
    return function_4eeb30(a1, &g3);
}

// Address range: 0x56db8 - 0x56dcf
int64_t function_56db8(int64_t a1) {
    // 0x56db8
    function_56da4();
    return function_4eeb30(a1, &g1);
}

// Address range: 0x5a272 - 0x5a289
int64_t function_5a272(int64_t a1) {
    // 0x5a272
    function_5a25e();
    return function_4eeb30(a1, &g4);
}

// Address range: 0x5f278 - 0x5f28f
int64_t function_5f278(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x5f279
    function_5f202(v1 + 8);
    return function_4eeb50(v1);
}

// Address range: 0x68c2a - 0x68c41
int64_t function_68c2a(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x68c2b
    function_68c1c(v1 + 8);
    return function_4eeb50(v1);
}

// Address range: 0x6b6ce - 0x6b6e5
int64_t function_6b6ce(int64_t a1) {
    // 0x6b6ce
    function_6b6a6();
    return function_4eeb30(a1, (int64_t *)256);
}

// Address range: 0x7834c - 0x78350
int64_t function_7834c(int64_t result) {
    // 0x7834c
    return result;
}

// Address range: 0x78350 - 0x78354
int64_t function_78350(int64_t result) {
    // 0x78350
    return result;
}

// Address range: 0x78354 - 0x78358
int64_t function_78354(int64_t result) {
    // 0x78354
    return result;
}

// Address range: 0x78358 - 0x7835c
int64_t function_78358(int64_t result) {
    // 0x78358
    return result;
}

// Address range: 0x7835c - 0x78360
int64_t function_7835c(int64_t result) {
    // 0x7835c
    return result;
}

// Address range: 0x78360 - 0x78364
int64_t function_78360(int64_t result) {
    // 0x78360
    return result;
}

// Address range: 0x496c69 - 0x496c79
int64_t function_496c69(int64_t a1, int64_t a2, int64_t a3) {
    // 0x496c69
    *(int64_t *)(a1 + 104) = a2;
    *(int64_t *)(a1 + 112) = a3;
    int64_t result; // 0x496c69
    return result;
}

// Address range: 0x49a8e8 - 0x49a8ed
int64_t function_49a8e8(void) {
    // 0x49a8e8
    return function_496540();
}

// Address range: 0x49a8f0 - 0x49a8f7
int64_t function_49a8f0(void) {
    // 0x49a8f0
    return function_49a88e();
}

// Address range: 0x4aa639 - 0x4aa641
int64_t function_4aa639(void) {
    // 0x4aa639
    int64_t result; // 0x4aa639
    char * v1 = (char *)(result - 125); // 0x4aa639
    unsigned char v2 = *v1; // 0x4aa639
    *v1 = v2 / 16 | 16 * v2;
    char * v3 = (char *)(result + 93); // 0x4aa63d
    *v3 = *v3 | (char)result;
    return result;
}

// Address range: 0x4ad559 - 0x4ad55a
int64_t function_4ad559(void) {
    // 0x4ad559
    int64_t result; // 0x4ad559
    return result;
}

// Address range: 0x4ad55a - 0x4ad562
int64_t function_4ad55a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4ad55a
    int64_t v1; // 0x4ad55a
    int32_t * v2 = (int32_t *)(4 * a4 + 124 + v1); // 0x4ad55a
    *v2 = *v2 - 1;
    return function_4ad515();
}

// Address range: 0x4b0069 - 0x4b006a
int64_t function_4b0069(void) {
    // 0x4b0069
    int64_t result; // 0x4b0069
    return result;
}

// Address range: 0x4b006a - 0x4b0077
int64_t function_4b006a(void) {
    // 0x4b006a
    int64_t v1; // 0x4b006a
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x4b006a
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return function_4b0048();
}

// Address range: 0x4b41e8 - 0x4b41f8
int64_t function_4b41e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 17 + 4 * a4); // 0x4b41e8
    *v1 = *v1 + (char)a4;
    function_4b0ac0();
    return function_4b3d93();
}

// Address range: 0x4ba368 - 0x4ba36d
int64_t function_4ba368(void) {
    // 0x4ba368
    return function_4ba347();
}

// Address range: 0x4ba36d - 0x4ba375
int64_t function_4ba36d(void) {
    // 0x4ba36d
    return function_4ba347();
}

// Address range: 0x4ba699 - 0x4ba69a
int64_t function_4ba699(void) {
    // 0x4ba699
    int64_t result; // 0x4ba699
    return result;
}

// Address range: 0x4ba69a - 0x4ba6a2
int64_t function_4ba69a(int64_t a1) {
    // 0x4ba69a
    int64_t v1; // 0x4ba69a
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t result; // 0x4ba69a
    int64_t v3 = result;
    *(char *)v3 = *(char *)&result + (char)v3;
    return result;
}

// Address range: 0x4ba7b9 - 0x4ba7ba
int64_t function_4ba7b9(void) {
    // 0x4ba7b9
    int64_t result; // 0x4ba7b9
    return result;
}

// Address range: 0x4ba7ba - 0x4ba7c2
int64_t function_4ba7ba(int64_t a1) {
    // 0x4ba7ba
    int64_t v1; // 0x4ba7ba
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t result; // 0x4ba7ba
    int64_t v3 = result;
    *(char *)v3 = *(char *)&result + (char)v3;
    return result;
}

// Address range: 0x4bfab9 - 0x4bfac2
int64_t function_4bfab9(int64_t a1) {
    // 0x4bfab9
    return function_4bfa06(a1 + 4);
}

// Address range: 0x4c4648 - 0x4c4656
int64_t function_4c4648(void) {
    // 0x4c4648
    return 0xffffc180;
}

// Address range: 0x4c946a - 0x4c947b
int64_t function_4c946a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 23 + 4 * a4); // 0x4c946a
    *v1 = *v1 + (char)a4;
    function_4b2d10(a2);
    return function_4c920e();
}

// Address range: 0x4eef29 - 0x4eef2e
int64_t function_4eef29(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4eef29
    int64_t result; // 0x4eef29
    *(int64_t *)result = a4;
    return result;
}

// Address range: 0x4f1708 - 0x4f1714
int64_t function_4f1708(int64_t result) {
    // 0x4f1708
    return result;
}

// Address range: 0x501a79 - 0x501a7b
int64_t function_501a79(void) {
    // 0x501a79
    int64_t result; // 0x501a79
    return result;
}

// Address range: 0x501a81 - 0x501a84
int64_t function_501a81(void) {
    // 0x501a81
    int64_t result; // 0x501a81
    return result;
}

// Address range: 0x50cce9 - 0x50ccf4
int64_t function_50cce9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x50cce9
    int64_t result; // 0x50cce9
    return result;
}

// Address range: 0x5226f9 - 0x52270b
int64_t function_5226f9(void) {
    // 0x5226f9
    int64_t v1; // 0x5226f9
    if (*(int64_t *)(v1 + 16) < v1) {
        function_522629();
    }
    // 0x522703
    return function_52268d();
}

// Address range: 0x5553f9 - 0x55540b
int64_t function_5553f9(void) {
    // 0x5553f9
    int64_t v1; // 0x5553f9
    if (*(int64_t *)(v1 + 16) < v1) {
        function_555329();
    }
    // 0x555403
    return function_55538d();
}

// Address range: 0x556e3a - 0x556e49
int64_t function_556e3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)a1; // 0x556e3c
    int64_t v2; // 0x556e3a
    *v1 = (int32_t)v2 | 31;
    char * v3 = (char *)(v2 - 119); // 0x556e3f
    *v3 = *v3 + (char)a4;
    int64_t result = function_548a30(); // 0x556e42
    int64_t v4; // 0x556e3a
    *v1 = *(int32_t *)&v4 - 1;
    return result;
}

// Address range: 0x56dd19 - 0x56dd2a
int64_t function_56dd19(int64_t a1, int64_t a2, int64_t a3) {
    // 0x56dd19
    int64_t v1; // 0x56dd19
    char * v2 = (char *)(v1 + 1); // 0x56dd1b
    *v2 = *v2 | 72;
    *(int32_t *)(v1 + 16) = (int32_t)v1;
    return function_56d3f9();
}

// Address range: 0x56fbea - 0x56fc00
int64_t function_56fbea(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x56fbea
    int64_t v1; // 0x56fbea
    char * v2 = (char *)(v1 + 4 * v1); // 0x56fbec
    unsigned char v3 = *v2; // 0x56fbec
    unsigned char v4 = v3 + (char)v1; // 0x56fbec
    *v2 = v4;
    int32_t * v5 = (int32_t *)(v1 - 117); // 0x56fbef
    int32_t v6 = *v5 - 1; // 0x56fbef
    *v5 = v6;
    if (v4 >= v3 && v6 != 0) {
        function_56fc04();
    }
    // 0x56fbf4
    return __wctype_l("punct", (struct __locale_struct *)a2);
}
