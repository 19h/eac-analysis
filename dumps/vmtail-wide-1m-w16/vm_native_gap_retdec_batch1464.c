/*
 * Targeted RetDec C for native executable gap queue batch 1464.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x44f245-0x44f445 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44f445-0x44f645 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44f645-0x44f845 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44f845-0x44fa45 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44fa45-0x44fc45 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44fc45-0x44fe45 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48a14d-0x48a34d rank=- name=- kind=- bytes=- uncovered=-
 *   0x48a34d-0x48a54d rank=- name=- kind=- bytes=- uncovered=-
 *   0x48ad4d-0x48aec0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48b066-0x48b266 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48b266-0x48b466 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48b466-0x48b666 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48b666-0x48b866 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48b866-0x48ba66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48ba66-0x48bc66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48bc66-0x48bde0 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g7;
extern int g8;
extern int g9;
extern int g12;
extern int g13;
extern int g14;
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

int64_t function_1a66dfaa();
int64_t function_39a498();
int64_t function_39d8c5();
int64_t function_3bebdb();
int64_t function_44f245(void);
int64_t function_44f252(void);
int64_t function_44f286(void);
int64_t function_44f28f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44f2a4(int64_t a1);
int64_t function_44f2d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44f32c(int64_t a1);
int64_t function_44f34e(void);
int64_t function_44f3a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44f3aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_44f478(int64_t a1);
int64_t function_44f480(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t result);
int64_t function_44f4cc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_44f549(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44f58c(void);
int64_t function_44f58e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_44f631(void);
int64_t function_44f649(void);
int64_t function_44f681(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_44f844(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_44f88d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44f918(void);
int64_t function_44f924(void);
int64_t function_44f929(void);
int64_t function_44f960(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_44fa13(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44fa4b(int64_t a1, int64_t a2);
int64_t function_44fa8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44fabe(int64_t a1);
int64_t function_44faff(void);
int64_t function_44fb0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_44fb27(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44fb59(int64_t a1, int64_t a2);
int64_t function_44fb8d(void);
int64_t function_44fbb0(void);
int64_t function_44fbd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44fc73(void);
int64_t function_44fc86(void);
int64_t function_44fc95(int64_t a1);
int64_t function_44fcb2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44fd6d(void);
int64_t function_44fd95(void);
int64_t function_44fdb8(void);
int64_t function_44fdbd(void);
int64_t function_44fde5(void);
int64_t function_44fdf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44fe30(int64_t a1);
int64_t function_488f4b0c();
int64_t function_48a13b();
int64_t function_48a14d(int64_t a1);
int64_t function_48a180(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_48a19e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48a1d0(void);
int64_t function_48a1f8(void);
int64_t function_48a206(void);
int64_t function_48a213(int64_t a1);
int64_t function_48a22b(void);
int64_t function_48a238(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_48a250(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_48a28b(void);
int64_t function_48a295(void);
int64_t function_48a2a8(void);
int64_t function_48a2c4(void);
int64_t function_48a2f3(int64_t a1);
int64_t function_48a2f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_48a329(void);
int64_t function_48a361(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48a3a0(int64_t a1);
int64_t function_48a400(int64_t a1);
int64_t function_48a43a(void);
int64_t function_48a481(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48a4dd(void);
int64_t function_48a4e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48a50f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48ad4d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48adeb(int64_t a1);
int64_t function_48ae24(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48ae30(void);
int64_t function_48ae3a(void);
int64_t function_48ae49(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48ae92(void);
int64_t function_48aea0(int64_t a1);
int64_t function_48aeb0(int64_t a1);
int64_t function_48b044();
int64_t function_48b066(void);
int64_t function_48b099(int64_t a1);
int64_t function_48b09d(void);
int64_t function_48b0a6(int64_t a1);
int64_t function_48b0f2(int64_t a1, int64_t a2);
int64_t function_48b10a(int64_t a1);
int64_t function_48b179(void);
int64_t function_48b197(void);
int64_t function_48b1e6(void);
int64_t function_48b1f0(int64_t a1);
int64_t function_48b200(int64_t a1);
int64_t function_48b210(int64_t a1);
int64_t function_48b220(int64_t a1);
int64_t function_48b230(int64_t a1);
int64_t function_48b240(int64_t a1);
int64_t function_48b250(int64_t a1);
int64_t function_48b293(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48b2a3(void);
int64_t function_48b2bf(void);
int64_t function_48b2d2(void);
int64_t function_48b2d6(void);
int64_t function_48b2d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_48b333(void);
int64_t function_48b33f(int64_t a1);
int64_t function_48b364(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_48b475(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48b4a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48b4b2(int64_t a1);
int64_t function_48b4e0(void);
int64_t function_48b4e7(void);
int64_t function_48b4eb(void);
int64_t function_48b52b(void);
int64_t function_48b52e(int64_t a1);
int64_t function_48b55d(void);
int64_t function_48b575(void);
int64_t function_48b619(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48b630(int64_t a1, int64_t a2);
int64_t function_48b652(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_48b6bb(void);
int64_t function_48b6c1(void);
int64_t function_48b6ca(void);
int64_t function_48b6e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48b736(int64_t a1);
int64_t function_48b77c(void);
int64_t function_48b7ed(void);
int64_t function_48b867(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_48b8e0(void);
int64_t function_48b8f0(void);
int64_t function_48b90a(int64_t a1);
int64_t function_48b937(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_48b9ae(void);
int64_t function_48b9ea(void);
int64_t function_48ba1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_48bacf(int64_t a1);
int64_t function_48badd(void);
int64_t function_48bae7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48bafe(void);
int64_t function_48bb0c(void);
int64_t function_48bb37(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_48bc4d(void);
int64_t function_48bc7e(void);
int64_t function_48bcd1(void);
int64_t function_48bce4(void);
int64_t function_48bd1c(int64_t a1, int64_t a2);
int64_t function_48bd35(void);
int64_t function_48bd49(void);
int64_t function_48bd62(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48bdae(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48c2ef();
int64_t function_4b3705bb();
int64_t function_581aacd6();
int64_t function_64a6baca();
int64_t function_751870d2();
int64_t function_9d2ec0();
int64_t function_ffffffff87d95611();
int64_t function_ffffffff914a81ed();
int64_t function_ffffffff9daa9444();
int64_t function_ffffffffb367a150();
int64_t function_ffffffffb45c55f7();
int64_t function_ffffffffcbe768f9();
int64_t function_ffffffffe733f461();
int64_t unknown_23b03754();
int64_t unknown_4148cfd8();
int64_t unknown_a0ff7ba();

// Address range: 0x44f245 - 0x44f24f
int64_t function_44f245(void) {
    // 0x44f245
    int64_t result; // 0x44f245
    bool v1; // 0x44f245
    if (!v1) {
        // 0x44f298
        return result;
    }
    // 0x44f24c
    float80_t v2; // 0x44f245
    *(float64_t *)(result - 40) = (float64_t)v2;
    return result;
}

// Address range: 0x44f252 - 0x44f255
int64_t function_44f252(void) {
    // 0x44f252
    int64_t result; // 0x44f252
    return result;
}

// Address range: 0x44f286 - 0x44f287
int64_t function_44f286(void) {
    // 0x44f286
    int64_t result; // 0x44f286
    return result;
}

// Address range: 0x44f28f - 0x44f298
int64_t function_44f28f(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = (int32_t)a3; // 0x44f293
    int64_t v2; // 0x44f28f
    uint32_t v3 = *(int32_t *)(v2 - 109); // 0x44f293
    int32_t v4 = v1 - v3; // 0x44f293
    bool v5; // 0x44f28f
    return 0x4000 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | (int64_t)(v3 > v1) | 64 * (int64_t)(v4 == 0) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v1 % 16 - v3 % 16 > 15) | 2048 * (int64_t)(((v4 ^ v1) & (v3 ^ v1)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v4) % 2 == 0) | 2;
}

// Address range: 0x44f2a4 - 0x44f2a5
int64_t function_44f2a4(int64_t a1) {
    // 0x44f2a4
    int64_t result; // 0x44f2a4
    return result;
}

// Address range: 0x44f2d0 - 0x44f2df
int64_t function_44f2d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44f2d0
    int64_t v1; // 0x44f2d0
    return (int64_t)&v1;
}

// Address range: 0x44f32c - 0x44f32d
int64_t function_44f32c(int64_t a1) {
    // 0x44f32c
    int64_t result; // 0x44f32c
    return result;
}

// Address range: 0x44f34e - 0x44f353
int64_t function_44f34e(void) {
    // 0x44f34e
    return function_4b3705bb();
}

// Address range: 0x44f3a2 - 0x44f3a7
int64_t function_44f3a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44f3a2
    int64_t v1; // 0x44f3a2
    *(char *)v1 = (char)a3;
    int64_t v2; // 0x44f3a2
    *(int32_t *)a1 = *(int32_t *)&v2;
    bool v3; // 0x44f3a2
    return v1 & -0xff01 | 256 * (64 * (int64_t)v3 | 128 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3) | 512;
}

// Address range: 0x44f3aa - 0x44f46f
int64_t function_44f3aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint32_t v1 = *(int32_t *)-0x5f505bb61c6b30fb; // 0x44f3aa
    int64_t result2; // 0x44f3aa
    bool v2; // 0x44f3aa
    if (v2) {
        int64_t result = __asm_in_133((int16_t)v1); // 0x44f3f2
        result2 = result;
        if (!v2) {
            // 0x44f469
            *(int32_t *)(2 * a4 + 9) = (int32_t)a2;
            return result;
        }
    } else {
        int64_t v3 = v1; // 0x44f3aa
        result2 = v3;
        if (!v2) {
            char v4 = __asm_in(-14); // 0x44f3c8
            char v5 = __asm_in(40); // 0x44f3d5
            uint64_t v6 = v3 & 0xffff0000 | (int64_t)&g12 & -256 | (int64_t)v4 & -256 | (int64_t)v5; // 0x44f3d5
            char v7 = *(char *)(a3 + 0x676722); // 0x44f3e7
            return 256 * (int64_t)(v7 | (char)(v6 / 256)) | v6 & -0xff01;
        }
    }
    // 0x44f3b8
    return result2;
}

// Address range: 0x44f478 - 0x44f47a
int64_t function_44f478(int64_t a1) {
    // 0x44f478
    int64_t v1; // 0x44f478
    return v1 & 0xffffffff;
}

// Address range: 0x44f480 - 0x44f4cc
int64_t function_44f480(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t result) {
    // 0x44f480
    int64_t v1; // 0x44f480
    *(int32_t *)-0x2729b89c = (int32_t)v1;
    *(int32_t *)(v1 + 42) = *(int32_t *)-0x2729b89c;
    *(char *)(a3 + 70) = (char)(a3 / 256);
    int64_t v2 = v1 & 0xf0ddaa29 | 0xf2255d6; // 0x44f491
    int64_t v3; // 0x44f480
    int64_t v4 = (int64_t)(*(int32_t *)&v3 + (int32_t)v1); // 0x44f496
    int64_t v5; // 0x44f480
    *(int32_t *)a4 = *(int32_t *)&v5 & (int32_t)a4;
    *(int64_t *)(v4 - 8) = v2 + 218 & 249 | v2 & 0xffffff00;
    unknown_a0ff7ba();
    int64_t v6 = __asm_int3(a1); // 0x44f4ae
    *(int64_t *)(v4 - 16) = 0x1229885c;
    __asm_out((int16_t)a3, (int32_t)v6);
    char * v7 = (char *)(result + 76); // 0x44f4c6
    *v7 = *v7 + 120;
    return result;
}

// Address range: 0x44f4cc - 0x44f535
int64_t function_44f4cc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x44f4cc
    int64_t v1; // 0x44f4cc
    uint64_t v2 = v1;
    __asm_outsb((int16_t)a3, (char)v1);
    bool v3; // 0x44f4cc
    unsigned char v4 = (char)v3 + (char)v2 - (char)(v2 / 256); // 0x44f4cd
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x44f4cd
    int64_t result = v2 & -256 | (int64_t)v4; // 0x44f4cd
    if (v5 % 2 == 0) {
        char * v6 = (char *)(a1 + 0x2344384b); // 0x44f52c
        *v6 = *v6 + (char)(a4 / 256);
        int32_t * v7 = (int32_t *)(a3 + 60); // 0x44f532
        *v7 = *v7 & (int32_t)result;
        return result;
    }
    int32_t * v8 = (int32_t *)(a1 + 0x6c60e5); // 0x44f4d3
    uint32_t v9 = *v8; // 0x44f4d3
    uint32_t v10 = (int32_t)result; // 0x44f4d3
    int32_t v11 = v9 + v10; // 0x44f4d3
    unsigned char v12 = llvm_ctpop_i8((char)v11); // 0x44f4d3
    *v8 = v11;
    int32_t * v13 = (int32_t *)((4 * (256 * (64 * (int64_t)(v11 == 0) | (int64_t)(v11 < v9) | 128 * (int64_t)(v11 < 0) | 16 * (int64_t)(v9 % 16 + v10 % 16 > 15) | 4 * (int64_t)(v12 % 2 == 0)) | result & 0x3fffffffffff00ff) | 2048) + 0x72e20148); // 0x44f4db
    *v13 = *v13 - (int32_t)a4;
    return function_ffffffffe733f461();
}

// Address range: 0x44f549 - 0x44f589
int64_t function_44f549(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x44f549
    int64_t result; // 0x44f549
    bool v1; // 0x44f549
    if (!v1) {
        // 0x44f54c
        return result;
    }
    uint32_t v2 = (int32_t)result | 0x5df2122f; // 0x44f563
    if (llvm_ctpop_i8((char)v2) % 2 == 0) {
        // 0x44f583
        return v2 - 0x7ce799e2;
    }
    char v3 = __asm_in(65); // 0x44f56a
    return ((int64_t)v3 | (int64_t)v2) & -256 | (int64_t)(v3 + 126);
}

// Address range: 0x44f58c - 0x44f58e
int64_t function_44f58c(void) {
    // 0x44f58c
    int64_t v1; // 0x44f58c
    return v1 | 188;
}

// Address range: 0x44f58e - 0x44f59e
int64_t function_44f58e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x44f58e
    int64_t v1; // 0x44f58e
    *(char *)a5 = (char)v1 + (char)a1;
    return 0xfc14255d;
}

// Address range: 0x44f631 - 0x44f632
int64_t function_44f631(void) {
    // 0x44f631
    int64_t result; // 0x44f631
    return result;
}

// Address range: 0x44f649 - 0x44f64a
int64_t function_44f649(void) {
    // 0x44f649
    int64_t result; // 0x44f649
    return result;
}

// Address range: 0x44f681 - 0x44f83e
int64_t function_44f681(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a1;
    int64_t v2 = a7;
    int64_t v3; // 0x44f681
    bool v4; // 0x44f681
    if (!v4 && !v4) {
        int64_t result = (int64_t)((int32_t)v3 - *(int32_t *)(v3 + 0x65db1c7e)); // 0x44f6b8
        if ((char)(a4 & a2) == 0) {
            result = function_44f649();
        }
        // 0x44f6ba
        *(int32_t *)a1 = (int32_t)result;
        // 0x44f6bc
        return result;
    }
    // 0x44f696
    __asm_outsb((int16_t)a3, (char)a2);
    uint64_t v5 = a7 - 1; // 0x44f69a
    if (v5 == 0 || (int32_t)v3 == 0) {
        int64_t v6 = unknown_23b03754(); // 0x44f69c
        char v7 = __asm_in(20); // 0x44f6a1
        if ((int32_t)v3 == 0) {
            uint32_t v8 = (int32_t)v5 % 32; // 0x44f6a5
            if (v8 != 0) {
                *(int32_t *)-0x552b6ee2 = *(int32_t *)-0x552b6ee2 >> v8;
            }
            v2 = v5;
            return __asm_hlt();
        }
        // 0x44f6c8
        v2 = 29;
        *(int32_t *)a1 = 0;
        char * v9 = (char *)((int64_t)&v2 + 0x38d21141 + 8 * v1); // 0x44f6cc
        *v9 = *v9 + (char)(v5 / 256);
        *(char *)v1 = *(char *)&v1 | v7;
        *(int32_t *)0x4fa609eb = *(int32_t *)0x4fa609eb + (int32_t)v3;
        return v6 & -256 | (int64_t)v7;
    }
    unsigned char v10 = llvm_ctpop_i8((char)v3); // 0x44f698
    int64_t result2 = v3 & -256 | a2 % 256; // 0x44f71b
    if (v10 % 2 != 0) {
        // 0x44f6bc
        return result2;
    }
    int64_t v11 = (int64_t)*(int32_t *)(a1 + 124 + 8 * a1); // 0x44f71e
    uint64_t v12 = 109 * v11; // 0x44f71e
    if (v12 != 0x6d00000000 * v11 >> 32) {
        // 0x44f6bc
        return result2;
    }
    uint64_t v13 = __asm_int1() & v5;
    uint64_t v14 = v5 / 256; // 0x44f713
    unsigned char v15 = (char)v14; // 0x44f713
    if (v15 > 138 != ((v15 ^ -128) & 10 - v15) < 0) {
        // 0x44f6bc
        return v13 & 0xffffffff;
    }
    int64_t v16 = v4 ? -1 : 1; // 0x44f786
    v1 = v16 + a1;
    char * v17 = (char *)(v16 - 72 + ((v4 ? 0xffffffff : 1) + a2 & 0xffffffff)); // 0x44f793
    *v17 = *v17 ^ (char)(v13 / 256) & -92;
    int64_t * v18 = (int64_t *)(a5 + 0xfe31d37); // 0x44f798
    *v18 = *v18 + a5;
    *(char *)v1 = __asm_insb((int16_t)((138 - v14) % 256 | a3 & 0xff00));
    __asm_in(39);
    int64_t v19 = __asm_int1(); // 0x44f7a5
    uint32_t v20 = (int32_t)v19; // 0x44f7a6
    uint32_t result3 = v20 - 0x48f13ae; // 0x44f7a6
    *(char *)(a7 - 0x5c248420) = (char)(v12 / 256);
    if (result3 < 0 != ((result3 ^ v20) & v20 + 0x7b70ec52) < 0) {
        // 0x44f6bc
        return result3;
    }
    // 0x44f819
    int64_t v21; // 0x44f681
    int32_t v22; // 0x44f681
    if (llvm_ctpop_i8((char)result3) % 2 == 0) {
        int32_t v23 = *(int32_t *)0x5fbf036927e87db1; // 0x44f829
        *(char *)v5 = (char)v5;
        int64_t v24 = v23; // 0x44f839
        v21 = v24;
        v22 = v23;
        if (v20 <= 0x48f13ad) {
            return (230 + v24) % 256 | (int64_t)(v23 & -256);
        }
    } else {
        if (result3 <= 0xd31145c1) {
            // 0x44f6bc
            return v19 + 0x285fa690 & 0xffffffff;
        }
        uint32_t v25 = *(int32_t *)0x5fbf036927e87db1; // 0x44f829
        *(char *)v5 = (char)v5;
        v21 = v25;
        v22 = v25;
    }
    return (231 + v21) % 256 | (int64_t)(v22 & -256);
}

// Address range: 0x44f844 - 0x44f881
int64_t function_44f844(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x44f844
    int64_t v1; // 0x44f844
    int64_t v2 = v1;
    *(char *)a3 = (char)(v1 & v1);
    int64_t v3; // 0x44f844
    *(char *)v3 = *(char *)&v3;
    uint64_t v4 = a4 / 256; // 0x44f851
    int64_t v5; // 0x44f844
    int32_t v6 = (int32_t)a1 - *(int32_t *)&v5; // 0x44f853
    int64_t v7 = v3;
    char v8 = *(char *)0x30ad6f8e; // 0x44f855
    char * v9 = (char *)(((v2 + v4) % 256 | v2 & -256) + 71); // 0x44f85f
    *v9 = *v9 | (char)v4;
    int64_t v10; // 0x44f844
    char v11 = *(char *)&v10; // 0x44f86e
    *(char *)(v7 & -256 | (int64_t)(v8 ^ (char)v7)) = v11;
    bool v12; // 0x44f844
    __asm_outsb((int16_t)a3, *(char *)((v12 ? -1 : 1) + a2));
    uint32_t v13 = v6 + 0x40080e48; // 0x44f870
    int64_t v14 = (v6 ^ -8) < 0x40080e48 ? 238 : 237; // 0x44f87a
    return ((int64_t)v13 - v14) % 256 | (int64_t)(v13 & -256);
}

// Address range: 0x44f88d - 0x44f909
int64_t function_44f88d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x44f88d
    int64_t v1; // 0x44f88d
    int64_t v2 = v1;
    bool v3; // 0x44f88d
    if ((int32_t)((v2 + a4 + (int64_t)v3) % 256 || v2 & 0xffffff00) - (int32_t)v1 < 0) {
        // 0x44f907
        return __asm_hlt();
    }
    // 0x44f8af
    return ((v1 & (int64_t)&g1) == 0 ? 4 : 0xfffffffc) + a1 & 0xffffffff;
}

// Address range: 0x44f918 - 0x44f919
int64_t function_44f918(void) {
    // 0x44f918
    int64_t result; // 0x44f918
    return result;
}

// Address range: 0x44f924 - 0x44f927
int64_t function_44f924(void) {
    // 0x44f924
    int64_t result; // 0x44f924
    return result;
}

// Address range: 0x44f929 - 0x44f92a
int64_t function_44f929(void) {
    // 0x44f929
    int64_t result; // 0x44f929
    return result;
}

// Address range: 0x44f960 - 0x44f9b1
int64_t function_44f960(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x44f960
    bool v1; // 0x44f960
    if (!v1) {
        function_44f918();
    }
    if (v1) {
        // 0x44f969
        return function_44f929();
    }
    // 0x44f9a9
    int64_t v2; // 0x44f960
    int64_t v3 = (int64_t)&v2; // 0x44f960
    unsigned char v4 = (char)(a3 / 256); // 0x44f9a9
    unsigned char v5 = *(char *)(a2 + 98); // 0x44f9a9
    char v6 = v4 - v5; // 0x44f9a9
    return v3 & -0x10000 | v3 + 165 & 253 | 256 * (64 * (int64_t)(v6 == 0) | (int64_t)(v5 > v4) | 128 * (int64_t)(v6 < 0) | 16 * (int64_t)(v4 % 16 - v5 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v6) % 2 == 0)) | 512;
}

// Address range: 0x44fa13 - 0x44fa15
int64_t function_44fa13(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x44fa13
    int64_t result; // 0x44fa13
    return result;
}

// Address range: 0x44fa4b - 0x44fa55
int64_t function_44fa4b(int64_t a1, int64_t a2) {
    // 0x44fa4b
    float80_t v1; // 0x44fa4b
    float32_t v2 = v1; // 0x44fa4b
    int64_t result; // 0x44fa4b
    *(float32_t *)(result + 0x7c97bee) = v2;
    *(float32_t *)a1 = v2;
    return result;
}

// Address range: 0x44fa8d - 0x44fa9b
int64_t function_44fa8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44fa8d
    __asm_in(-44);
    return function_44faff();
}

// Address range: 0x44fabe - 0x44fabf
int64_t function_44fabe(int64_t a1) {
    // 0x44fabe
    int64_t result; // 0x44fabe
    return result;
}

// Address range: 0x44faff - 0x44fb02
int64_t function_44faff(void) {
    // 0x44faff
    int64_t v1; // 0x44faff
    uint64_t v2 = v1;
    char v3 = *(char *)(v1 - 99); // 0x44faff
    bool v4; // 0x44faff
    return 256 * (int64_t)((char)v4 - v3 + (char)(v2 / 256)) | v2 & -0xff01;
}

// Address range: 0x44fb0c - 0x44fb1c
int64_t function_44fb0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x44fb0c
    int64_t v1; // 0x44fb0c
    int32_t * v2 = (int32_t *)(4 * a2 + 126 + v1); // 0x44fb16
    bool v3; // 0x44fb0c
    *v2 = (int32_t)v3 - (int32_t)v1 + *v2;
    return function_44fb8d();
}

// Address range: 0x44fb27 - 0x44fb30
int64_t function_44fb27(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44fb27
    int64_t result; // 0x44fb27
    return result;
}

// Address range: 0x44fb59 - 0x44fb61
int64_t function_44fb59(int64_t a1, int64_t a2) {
    // 0x44fb59
    int64_t v1; // 0x44fb59
    return v1 & -256 | (int64_t)*(char *)(a2 + 21);
}

// Address range: 0x44fb8d - 0x44fb9a
int64_t function_44fb8d(void) {
    // 0x44fb8d
    int64_t v1; // 0x44fb8d
    return __asm_int3(v1);
}

// Address range: 0x44fbb0 - 0x44fbb1
int64_t function_44fbb0(void) {
    // 0x44fbb0
    int64_t result; // 0x44fbb0
    return result;
}

// Address range: 0x44fbd8 - 0x44fbee
int64_t function_44fbd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44fbd8
    int64_t result; // 0x44fbd8
    int64_t v1 = result;
    bool v2; // 0x44fbd8
    if (v2) {
        // 0x44fbf0
        return result;
    }
    // 0x44fbda
    *(int32_t *)a3 = (int32_t)(result & a3);
    char v3 = *(char *)(result + 13); // 0x44fbdd
    char v4 = *(char *)((a3 & -256 | (int64_t)(v3 + (char)a3)) - 0x6f139be9); // 0x44fbe1
    int32_t * v5 = (int32_t *)(v1 & -256 | (int64_t)(v4 ^ (char)v1)); // 0x44fbe7
    *v5 = *v5 - (int32_t)result;
    return function_44fbb0();
}

// Address range: 0x44fc73 - 0x44fc74
int64_t function_44fc73(void) {
    // 0x44fc73
    int64_t result; // 0x44fc73
    return result;
}

// Address range: 0x44fc86 - 0x44fc87
int64_t function_44fc86(void) {
    // 0x44fc86
    int64_t result; // 0x44fc86
    return result;
}

// Address range: 0x44fc95 - 0x44fc9f
int64_t function_44fc95(int64_t a1) {
    // 0x44fc95
    *(char *)0x6d0b92fe = *(char *)0x6d0b92fe + 1;
    return function_44fc86();
}

// Address range: 0x44fcb2 - 0x44fd5a
int64_t function_44fcb2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = a1;
    // 0x44fd1a
    *(int32_t *)a4 = (int32_t)a1;
    int64_t result = __asm_hlt(); // 0x44fd1c
    int64_t v3; // 0x44fcb2
    int32_t * v4 = (int32_t *)(v3 - 0x3ccb0d82); // 0x44fd1d
    *v4 = *v4 | (int32_t)v3;
    *(char *)(v2 - 0x2ffbd3e5) = (char)v3;
    if (*(char *)(result - 0x3ccd8cb6) - (char)a3 >= 0) {
        // 0x44fd39
        __writegsdword(result, __readgsdword(result) | 0x4b955ee4);
        return result;
    }
    // 0x44fcd3
    if ((*(char *)&v2 ^ (char)(*(int32_t *)&v1 / 256)) < 0) {
        int32_t * v5 = (int32_t *)(v3 - 41); // 0x44fcdf
        *v5 = *v5 | (int32_t)a5;
        int64_t v6 = a5 & 0xffffffff; // 0x44fced
        if (*(int32_t *)(8 * a3 - 0x7ceb6b2e) == ((int32_t)result & -256 || 97)) {
            v6 = function_44fc73();
        }
        int64_t v7 = v6 & 0xffffffff ^ 0x7e6a1495; // 0x44fcef
        int32_t * v8 = (int32_t *)v7; // 0x44fcf4
        *v8 = *v8 & (int32_t)v7;
    }
    int64_t v9 = __asm_sti(v2) & 0xffffffff ^ 0xb803bd69; // 0x44fd51
    // 0x44fd59
    return (v9 + 174) % 256 | v9 & 0xffffff00;
}

// Address range: 0x44fd6d - 0x44fd6f
int64_t function_44fd6d(void) {
    // 0x44fd6d
    int64_t result; // 0x44fd6d
    return result;
}

// Address range: 0x44fd95 - 0x44fd9a
int64_t function_44fd95(void) {
    // 0x44fd95
    return function_751870d2();
}

// Address range: 0x44fdb8 - 0x44fdbd
int64_t function_44fdb8(void) {
    // 0x44fdb8
    return function_ffffffffb45c55f7();
}

// Address range: 0x44fdbd - 0x44fdca
int64_t function_44fdbd(void) {
    // 0x44fdbd
    float80_t v1; // 0x44fdbd
    *(int64_t *)0x6dad1cf5 = (int64_t)v1;
    return function_44fd6d();
}

// Address range: 0x44fde5 - 0x44fde6
int64_t function_44fde5(void) {
    // 0x44fde5
    int64_t result; // 0x44fde5
    return result;
}

// Address range: 0x44fdf4 - 0x44fe05
int64_t function_44fdf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 + 63); // 0x44fdf4
    *v1 = *v1 + (char)a3;
    int64_t result; // 0x44fdf4
    return result;
}

// Address range: 0x44fe30 - 0x44fe31
int64_t function_44fe30(int64_t a1) {
    // 0x44fe30
    int64_t result; // 0x44fe30
    return result;
}

// Address range: 0x48a14d - 0x48a17d
int64_t function_48a14d(int64_t a1) {
    // 0x48a14d
    __readfsqword(40);
    return function_39a498();
}

// Address range: 0x48a180 - 0x48a187
int64_t function_48a180(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x48a180
    int64_t v1; // 0x48a180
    *(char *)a4 = (char)v1 + (char)a3;
    return 2 * v1 & 0xfffffffe;
}

// Address range: 0x48a19e - 0x48a1ba
int64_t function_48a19e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x48a19e
    int64_t v1; // 0x48a19e
    uint64_t v2 = v1;
    int64_t v3 = a1; // bp-8, 0x48a19e
    int64_t v4 = (int64_t)&v3; // 0x48a19e
    char * v5 = (char *)(8 * v2 + 0xeed69dc + v4); // 0x48a19f
    *v5 = *v5 + (char)(v1 / 256);
    uint64_t v6 = v2 / 256; // 0x48a1a6
    char v7 = v6 | a4; // 0x48a1a6
    int64_t v8; // 0x48a19e
    if ((v6 % 256 || a4) != 1 == v7 == 0) {
        v8 = function_48a13b();
    }
    int64_t result = v8;
    if (llvm_ctpop_i8(v7) % 2 != 0) {
        // 0x48a214
        return result;
    }
    int64_t result2 = (result + 160) % 256 | result & -256; // 0x48a1ac
    *(char *)v2 = (char)v2;
    char * v9 = (char *)(2 * result2 + v4); // 0x48a1b0
    *v9 = *v9 + 13;
    return result2;
}

// Address range: 0x48a1d0 - 0x48a1d1
int64_t function_48a1d0(void) {
    // 0x48a1d0
    int64_t result; // 0x48a1d0
    return result;
}

// Address range: 0x48a1f8 - 0x48a1f9
int64_t function_48a1f8(void) {
    // 0x48a1f8
    int64_t result; // 0x48a1f8
    return result;
}

// Address range: 0x48a206 - 0x48a207
int64_t function_48a206(void) {
    // 0x48a206
    int64_t result; // 0x48a206
    return result;
}

// Address range: 0x48a213 - 0x48a214
int64_t function_48a213(int64_t a1) {
    // 0x48a213
    int64_t result; // 0x48a213
    return result;
}

// Address range: 0x48a22b - 0x48a231
int64_t function_48a22b(void) {
    // 0x48a22b
    int64_t result; // 0x48a22b
    return result;
}

// Address range: 0x48a238 - 0x48a23e
int64_t function_48a238(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x48a238
    int64_t result; // 0x48a238
    int32_t * v1 = (int32_t *)(2 * result + a4); // 0x48a239
    *v1 = -1 - *v1;
    return result;
}

// Address range: 0x48a250 - 0x48a26f
int64_t function_48a250(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x48a250
    int64_t v1; // 0x48a250
    int64_t v2 = v1;
    float80_t v3; // 0x48a250
    *(int64_t *)(v1 + 6 + 4 * v1) = (int64_t)v3;
    int32_t * v4 = (int32_t *)((v1 + (v2 & 0xff00) & 0xff00 | v2 & -0xff01) - 0x1ebcd316); // 0x48a259
    uint32_t v5 = *v4; // 0x48a259
    uint32_t v6 = (int32_t)a3; // 0x48a259
    int32_t v7 = v5 - v6; // 0x48a259
    *v4 = v7;
    int64_t v8 = (v1 ^ a4) & 0xffffff00 | (int64_t)*(char *)0x30fb714cafea651; // 0x48a269
    if (v5 < v6) {
        v8 = function_48a206();
    }
    int64_t result = v8; // 0x48a26b
    if (a4 != 1 == v7 == 0) {
        result = function_48a1f8();
    }
    // 0x48a26d
    return result;
}

// Address range: 0x48a28b - 0x48a28e
int64_t function_48a28b(void) {
    // 0x48a28b
    int64_t result; // 0x48a28b
    return result;
}

// Address range: 0x48a295 - 0x48a29a
int64_t function_48a295(void) {
    // 0x48a295
    return function_488f4b0c();
}

// Address range: 0x48a2a8 - 0x48a2a9
int64_t function_48a2a8(void) {
    // 0x48a2a8
    int64_t result; // 0x48a2a8
    return result;
}

// Address range: 0x48a2c4 - 0x48a2c7
int64_t function_48a2c4(void) {
    // 0x48a2c4
    int64_t result; // 0x48a2c4
    return result;
}

// Address range: 0x48a2f3 - 0x48a2f9
int64_t function_48a2f3(int64_t a1) {
    // 0x48a2f3
    int64_t v1; // 0x48a2f3
    return function_48a361(a1, v1, v1, v1);
}

// Address range: 0x48a2f9 - 0x48a325
int64_t function_48a2f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int32_t * v1 = (int32_t *)(a4 + 93); // 0x48a2f9
    *v1 = *v1 >> 10;
    int64_t v2; // 0x48a2f9
    int32_t * v3 = (int32_t *)((2 * a4 & 0x1fffffffe) - 0x324ec83a + v2); // 0x48a305
    int32_t v4 = *v3 - (int32_t)a4; // 0x48a305
    *v3 = v4;
    int64_t v5; // 0x48a2f9
    *(char *)(a1 - v2 & 0xffffffff) = *(char *)&v5;
    bool v6; // 0x48a2f9
    int64_t v7 = (v6 ? -1 : 1) + a2; // 0x48a30e
    v5 = v7;
    __asm_outsb((int16_t)a8, *(char *)v7);
    int64_t result = a9; // 0x48a310
    if (v4 >= 0) {
        result = function_48a2a8();
    }
    // 0x48a312
    *(int32_t *)result = (int32_t)a8;
    return result;
}

// Address range: 0x48a329 - 0x48a331
int64_t function_48a329(void) {
    // 0x48a329
    int64_t result; // 0x48a329
    __asm_out_135(-78, (int32_t)result);
    return result;
}

// Address range: 0x48a361 - 0x48a3a0
int64_t function_48a361(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x48a361
    int64_t v1; // 0x48a361
    *(int32_t *)(v1 + 28) = 0;
    int64_t result = 0; // 0x48a390
    if (*(int64_t *)(v1 + 176) != __readfsqword(40)) {
        // 0x48a392
        __stack_chk_fail();
        result = (int64_t)&g14;
    }
    // 0x48a397
    return result;
}

// Address range: 0x48a3a0 - 0x48a3fb
int64_t function_48a3a0(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x48a3a9
    int64_t v2 = a1; // bp-24, 0x48a3be
    function_48c2ef(a1, &v2, &v2);
    int64_t result = (int64_t)*(char *)(a1 + 4); // 0x48a3ef
    if (v1 != __readfsqword(40)) {
        // 0x48a3f1
        __stack_chk_fail();
        result = (int64_t)&g14;
    }
    // 0x48a3f6
    return result;
}

// Address range: 0x48a400 - 0x48a42c
int64_t function_48a400(int64_t a1) {
    // 0x48a400
    __readfsqword(40);
    return function_39d8c5();
}

// Address range: 0x48a43a - 0x48a43b
int64_t function_48a43a(void) {
    // 0x48a43a
    int64_t result; // 0x48a43a
    return result;
}

// Address range: 0x48a481 - 0x48a491
int64_t function_48a481(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x48a481
    int64_t v1; // 0x48a481
    bool v2; // 0x48a481
    if (v2) {
        v1 = function_48a43a();
    }
    // 0x48a483
    *(int32_t *)a3 = (int32_t)a3 - 1;
    int64_t v3 = v1;
    *(char *)v3 = *(char *)&v1 | (char)v3;
    int64_t v4 = v1;
    return (v4 + 179) % 256 | v4 & -256;
}

// Address range: 0x48a4dd - 0x48a4e0
int64_t function_48a4dd(void) {
    // 0x48a4dd
    int64_t result; // 0x48a4dd
    return result;
}

// Address range: 0x48a4e4 - 0x48a50f
int64_t function_48a4e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x48a4e4
    int64_t v1; // 0x48a4e4
    int64_t v2 = v1;
    char v3 = *(char *)(a1 + 0x3f429010); // 0x48a4e4
    bool v4; // 0x48a4e4
    int64_t v5 = v2 & -256 | (int64_t)((char)v4 + (char)v2 - v3); // 0x48a4e4
    char * v6 = (char *)(4 * a4 - 25 + v5); // 0x48a4eb
    *v6 = *v6 ^ (char)a4;
    __asm_int(48);
    int32_t * v7 = (int32_t *)(v5 - 112); // 0x48a4fa
    *v7 = *v7 & (int32_t)a3;
    return function_1a66dfaa();
}

// Address range: 0x48a50f - 0x48a516
int64_t function_48a50f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x48a50f
    int64_t result; // 0x48a50f
    if (v1 != 0) {
        char * v2 = (char *)(result - 126); // 0x48a50f
        unsigned char v3 = *v2; // 0x48a50f
        bool v4; // 0x48a50f
        *v2 = (char)v4 << 8 - v1 | v3 >> v1 | (char)((int16_t)v3 << (int16_t)(9 - v1));
    }
    return result;
}

// Address range: 0x48ad4d - 0x48ad51
int64_t function_48ad4d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x48ad4d
    int64_t result; // 0x48ad4d
    return result;
}

// Address range: 0x48adeb - 0x48adf3
int64_t function_48adeb(int64_t a1) {
    // 0x48adeb
    int64_t v1; // 0x48adeb
    return v1 & 0x8411bfca;
}

// Address range: 0x48ae24 - 0x48ae29
int64_t function_48ae24(int64_t a1, int64_t a2, int64_t a3) {
    // 0x48ae24
    int64_t result; // 0x48ae24
    return result;
}

// Address range: 0x48ae30 - 0x48ae31
int64_t function_48ae30(void) {
    // 0x48ae30
    int64_t result; // 0x48ae30
    return result;
}

// Address range: 0x48ae3a - 0x48ae3e
int64_t function_48ae3a(void) {
    // 0x48ae3a
    return function_48ae92();
}

// Address range: 0x48ae49 - 0x48ae50
int64_t function_48ae49(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x48ae49
    int64_t result; // 0x48ae49
    return result;
}

// Address range: 0x48ae92 - 0x48ae95
int64_t function_48ae92(void) {
    // 0x48ae92
    int64_t v1; // 0x48ae92
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x48aea0 - 0x48aead
int64_t function_48aea0(int64_t a1) {
    // 0x48aea0
    return (int64_t)&g2;
}

// Address range: 0x48aeb0 - 0x48aebd
int64_t function_48aeb0(int64_t a1) {
    // 0x48aeb0
    return (int64_t)&g3;
}

// Address range: 0x48b066 - 0x48b067
int64_t function_48b066(void) {
    // 0x48b066
    int64_t result; // 0x48b066
    return result;
}

// Address range: 0x48b099 - 0x48b09c
int64_t function_48b099(int64_t a1) {
    // 0x48b099
    int64_t result; // 0x48b099
    return result;
}

// Address range: 0x48b09d - 0x48b0a0
int64_t function_48b09d(void) {
    // 0x48b09d
    return function_48b044();
}

// Address range: 0x48b0a6 - 0x48b0a7
int64_t function_48b0a6(int64_t a1) {
    // 0x48b0a6
    int64_t result; // 0x48b0a6
    return result;
}

// Address range: 0x48b0f2 - 0x48b10a
int64_t function_48b0f2(int64_t a1, int64_t a2) {
    int64_t v1 = __asm_rdtsc(); // 0x48b0fc
    int64_t v2; // 0x48b0f2
    char * v3 = (char *)(v2 - 0x5b2f097f); // 0x48b0fe
    *v3 = *v3 + (char)v1;
    return function_ffffffffb367a150();
}

// Address range: 0x48b10a - 0x48b10b
int64_t function_48b10a(int64_t a1) {
    // 0x48b10a
    int64_t result; // 0x48b10a
    return result;
}

// Address range: 0x48b179 - 0x48b17c
int64_t function_48b179(void) {
    // 0x48b179
    return function_48b1e6();
}

// Address range: 0x48b197 - 0x48b19a
int64_t function_48b197(void) {
    // 0x48b197
    int64_t result; // 0x48b197
    return result;
}

// Address range: 0x48b1e6 - 0x48b1e7
int64_t function_48b1e6(void) {
    // 0x48b1e6
    int64_t result; // 0x48b1e6
    return result;
}

// Address range: 0x48b1f0 - 0x48b1fd
int64_t function_48b1f0(int64_t a1) {
    // 0x48b1f0
    return (int64_t)&g4;
}

// Address range: 0x48b200 - 0x48b20d
int64_t function_48b200(int64_t a1) {
    // 0x48b200
    return (int64_t)&g5;
}

// Address range: 0x48b210 - 0x48b21d
int64_t function_48b210(int64_t a1) {
    // 0x48b210
    return (int64_t)&g6;
}

// Address range: 0x48b220 - 0x48b22d
int64_t function_48b220(int64_t a1) {
    // 0x48b220
    return (int64_t)&g7;
}

// Address range: 0x48b230 - 0x48b23d
int64_t function_48b230(int64_t a1) {
    // 0x48b230
    return (int64_t)&g8;
}

// Address range: 0x48b240 - 0x48b24d
int64_t function_48b240(int64_t a1) {
    // 0x48b240
    return (int64_t)&g9;
}

// Address range: 0x48b250 - 0x48b27e
int64_t function_48b250(int64_t a1) {
    // 0x48b250
    __readfsqword(40);
    return function_3bebdb();
}

// Address range: 0x48b293 - 0x48b2a1
int64_t function_48b293(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x48b293
    return function_64a6baca();
}

// Address range: 0x48b2a3 - 0x48b2a4
int64_t function_48b2a3(void) {
    // 0x48b2a3
    int64_t result; // 0x48b2a3
    return result;
}

// Address range: 0x48b2bf - 0x48b2c0
int64_t function_48b2bf(void) {
    // 0x48b2bf
    int64_t result; // 0x48b2bf
    return result;
}

// Address range: 0x48b2d2 - 0x48b2d5
int64_t function_48b2d2(void) {
    // 0x48b2d2
    int64_t result; // 0x48b2d2
    return result;
}

// Address range: 0x48b2d6 - 0x48b2d7
int64_t function_48b2d6(void) {
    // 0x48b2d6
    int64_t result; // 0x48b2d6
    return result;
}

// Address range: 0x48b2d9 - 0x48b332
int64_t function_48b2d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x48b2d9
    int64_t v1; // 0x48b2d9
    int32_t v2 = v1; // 0x48b2d9
    *(int32_t *)(a2 - 0x1e8f5106) = v2;
    int32_t v3 = *(int32_t *)(a3 - 0x43dc265c); // 0x48b2df
    uint32_t v4 = v2 + 0x7f3aa9db; // 0x48b2e5
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x48b2e5
    int64_t result = v4; // 0x48b2e5
    int64_t v6; // 0x48b2d9
    *(int32_t *)a1 = *(int32_t *)&v6;
    if (v5 % 2 != 0) {
        char * v7 = (char *)(a4 + (int64_t)&g13); // 0x48b2f4
        *v7 = *v7 + (char)a4;
        return result;
    }
    int64_t result2 = result; // 0x48b32b
    if (((v4 ^ v2) & (v2 ^ -0x80000000)) < 0) {
        result2 = function_48b2bf();
    }
    char v8 = *(char *)((int64_t)(v3 ^ (int32_t)v1) + 0xffffff83 + 8 * result2 & 0xffffffff); // 0x48b331
    __asm_outsb((int16_t)a3, v8);
    return result2;
}

// Address range: 0x48b333 - 0x48b334
int64_t function_48b333(void) {
    // 0x48b333
    int64_t result; // 0x48b333
    return result;
}

// Address range: 0x48b33f - 0x48b342
int64_t function_48b33f(int64_t a1) {
    // 0x48b33f
    int64_t v1; // 0x48b33f
    return v1 & -256 | (int64_t)__asm_in((char)a1);
}

// Address range: 0x48b364 - 0x48b46a
int64_t function_48b364(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x48b3cd
    int64_t v1; // 0x48b364
    uint64_t v2 = v1;
    __asm_rcl((char)v1);
    uint32_t v3 = 8 * *(int32_t *)((v1 % 256 ^ a4) - 89); // 0x48b36c
    int64_t v4 = v3; // 0x48b36c
    int64_t v5 = v1 & 0xffffffff; // 0x48b3ce
    char * v6 = (char *)v4; // 0x48b3cf
    *v6 = (char)(v1 ^ a4);
    uint32_t v7 = __asm_in_136(116); // 0x48b3d1
    bool v8; // 0x48b364
    *(int64_t *)(v5 - 8) = (v8 ? -1 : 1) + a1;
    int32_t * v9 = (int32_t *)v4; // 0x48b3d7
    *v9 = *v9 + v3;
    char * v10 = (char *)(v2 - 0x41f2bf3f); // 0x48b3d9
    *v10 = *v10 + (char)v7;
    unsigned char v11 = ((char)v3 ^ -17) + (char)(v2 / 256); // 0x48b3e4
    int64_t result = (int64_t)v11 | (int64_t)(v3 & -256 ^ -0x6acaf000); // 0x48b3e4
    int32_t v12 = (int32_t)(a4 & 0xffffff00 | (int64_t)*v6) - 1; // 0x48b3e6
    if (v12 != 0 != (v11 == 0)) {
        // 0x48b3e9
        __asm_out_134((int16_t)v7, v11);
        return result;
    }
    char v13 = *(char *)0x328d604a + (char)v12; // 0x48b3ef
    *(char *)0x328d604a = v13;
    if (v13 == 0) {
        // 0x48b3f7
        return result;
    }
    // 0x48b45b
    *(int64_t *)(v5 - 16) = (int64_t)v7;
    return result | 0x1a23e1e9;
}

// Address range: 0x48b475 - 0x48b497
int64_t function_48b475(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = (int32_t)a1; // 0x48b475
    int64_t v2; // 0x48b475
    int64_t v3 = v2 + 0x3ee8b105 & 0xffffffff; // bp-16, 0x48b480
    __asm_sti((int64_t)(v1 / 64 | 0x4000000 * v1));
    int64_t result = (int64_t)&v3; // 0x48b489
    float80_t v4; // 0x48b475
    *(int64_t *)(result + a3) = (int64_t)v4;
    return result;
}

// Address range: 0x48b4a4 - 0x48b4ab
int64_t function_48b4a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 0x70cfd4ac); // 0x48b4a4
    int64_t result; // 0x48b4a4
    bool v2; // 0x48b4a4
    *v1 = *v1 + (int32_t)result + (int32_t)v2;
    return result;
}

// Address range: 0x48b4b2 - 0x48b4b3
int64_t function_48b4b2(int64_t a1) {
    // 0x48b4b2
    int64_t result; // 0x48b4b2
    return result;
}

// Address range: 0x48b4e0 - 0x48b4e7
int64_t function_48b4e0(void) {
    // 0x48b4e0
    return function_48b52b();
}

// Address range: 0x48b4e7 - 0x48b4ea
int64_t function_48b4e7(void) {
    // 0x48b4e7
    int64_t v1; // 0x48b4e7
    int64_t result = v1;
    bool v2; // 0x48b4e7
    *(int32_t *)result = 2 * (int32_t)result | (int32_t)v2;
    return result;
}

// Address range: 0x48b4eb - 0x48b4f1
int64_t function_48b4eb(void) {
    // 0x48b4eb
    return function_ffffffff9daa9444();
}

// Address range: 0x48b52b - 0x48b52e
int64_t function_48b52b(void) {
    // 0x48b52b
    int64_t result; // 0x48b52b
    return result;
}

// Address range: 0x48b52e - 0x48b532
int64_t function_48b52e(int64_t a1) {
    // 0x48b52e
    int64_t result; // 0x48b52e
    return result;
}

// Address range: 0x48b55d - 0x48b564
int64_t function_48b55d(void) {
    // 0x48b55d
    __asm_int(-76);
    return function_ffffffff914a81ed();
}

// Address range: 0x48b575 - 0x48b57a
int64_t function_48b575(void) {
    // 0x48b575
    return function_ffffffff87d95611();
}

// Address range: 0x48b619 - 0x48b62e
int64_t function_48b619(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x48b619
    bool v1; // 0x48b619
    bool v2 = v1;
    uint32_t v3 = *(int32_t *)0x1f60f3ba833dc487; // 0x48b61a
    unsigned char v4 = (char)a4; // 0x48b624
    unsigned char v5 = (char)(v3 / 256) + v4; // 0x48b624
    int32_t * v6 = (int32_t *)(int64_t)v3; // 0x48b626
    int32_t v7 = *v6; // 0x48b626
    *v6 = v7 + v3 + (int32_t)(v2 ? v5 + (char)v2 <= v4 : v5 < v4);
    return function_ffffffffcbe768f9();
}

// Address range: 0x48b630 - 0x48b644
int64_t function_48b630(int64_t a1, int64_t a2) {
    // 0x48b630
    return __asm_sti(a1) & -256 | (int64_t)*(char *)-0x6322e88fa468d835;
}

// Address range: 0x48b652 - 0x48b675
int64_t function_48b652(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x48b652
    int64_t v1; // 0x48b652
    int32_t v2 = v1; // 0x48b655
    __asm_out_135(42, v2);
    int32_t v3 = a5; // 0x48b657
    uint32_t v4 = *(int32_t *)(a4 - 15); // 0x48b657
    int64_t v5 = v4 + v3; // 0x48b657
    int16_t v6 = a3; // 0x48b65a
    unsigned char v7 = (char)v1;
    __asm_out_134(v6, v7);
    *(char *)v1 = 128 * (char)(v4 > -1 - v3) | v7 / 2;
    __asm_out(v6, v2);
    *(char *)v5 = __asm_insb(v6);
    *(int32_t *)v5 = v2;
    return 0xa72c2f0a;
}

// Address range: 0x48b6bb - 0x48b6be
int64_t function_48b6bb(void) {
    uint64_t v1 = __asm_int1(); // 0x48b6bb
    int64_t v2; // 0x48b6bb
    return v1 & -256 | (int64_t)*(char *)(v1 % 256 + v2);
}

// Address range: 0x48b6c1 - 0x48b6c2
int64_t function_48b6c1(void) {
    // 0x48b6c1
    int64_t result; // 0x48b6c1
    return result;
}

// Address range: 0x48b6ca - 0x48b6d4
int64_t function_48b6ca(void) {
    // 0x48b6ca
    int64_t result; // 0x48b6ca
    return result;
}

// Address range: 0x48b6e1 - 0x48b71d
int64_t function_48b6e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x48b6e1
    int64_t v1; // 0x48b6e1
    unsigned char v2 = (char)v1; // 0x48b6e1
    bool v3; // 0x48b6e1
    unsigned char v4 = v2 + 45 + (char)v3; // 0x48b6e1
    int64_t result = v1 & -256 | (int64_t)v4; // 0x48b6e1
    if (v4 == 0 || (v3 ? v4 <= v2 : v2 > 210)) {
        uint32_t v5 = *(int32_t *)(a1 + 0x5e70647e); // 0x48b710
        return (result + 0xdf23f7cd & 0xffffffff | 0x100000000 * a3) / (int64_t)v5 & 0xffffffff;
    }
    // 0x48b6e5
    *(int64_t *)(a2 + 0x69072a98) = a4;
    return result;
}

// Address range: 0x48b736 - 0x48b737
int64_t function_48b736(int64_t a1) {
    // 0x48b736
    int64_t result; // 0x48b736
    return result;
}

// Address range: 0x48b77c - 0x48b783
int64_t function_48b77c(void) {
    // 0x48b77c
    int64_t v1; // 0x48b77c
    return v1 & 0x855081f8 | 0x7aaf7e07;
}

// Address range: 0x48b7ed - 0x48b7f2
int64_t function_48b7ed(void) {
    // 0x48b7ed
    return function_581aacd6();
}

// Address range: 0x48b867 - 0x48b888
int64_t function_48b867(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 + 93); // 0x48b86f
    *v1 = *v1 + (int32_t)a2;
    return a4 & 0xffffffff ^ 0xa9b957b6;
}

// Address range: 0x48b8e0 - 0x48b8ef
int64_t function_48b8e0(void) {
    // 0x48b8e0
    int64_t v1; // bp-8, 0x48b8e0
    return (int64_t)&v1;
}

// Address range: 0x48b8f0 - 0x48b8f1
int64_t function_48b8f0(void) {
    // 0x48b8f0
    int64_t result; // 0x48b8f0
    return result;
}

// Address range: 0x48b90a - 0x48b90b
int64_t function_48b90a(int64_t a1) {
    // 0x48b90a
    int64_t result; // 0x48b90a
    return result;
}

// Address range: 0x48b937 - 0x48b998
int64_t function_48b937(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x48b937
    int64_t v1; // 0x48b937
    int64_t v2 = v1 | a4 / 256;
    __asm_out_135(39, (int32_t)v1);
    if ((char)v2 >= 0) {
        // 0x48b978
        *(char *)a3 = (char)a3;
        return 256 * v2 & 0xff00 | a4 & 0xffff00ff;
    }
    // 0x48b93f
    *(int32_t *)a1 = (int32_t)a2;
    bool v3; // 0x48b937
    int64_t v4 = v3 ? -4 : 4; // 0x48b93f
    int64_t v5 = v4 + a2; // 0x48b93f
    uint64_t v6 = unknown_4148cfd8(v4 + a1, v5); // 0x48b940
    *(int32_t *)a3 = (int32_t)a3;
    char * v7 = (char *)(v6 + 30); // 0x48b947
    char v8 = *v7 + (char)(v6 / 256); // 0x48b947
    *v7 = v8;
    if (v8 != 0) {
        function_48b8f0();
    }
    uint32_t v9 = (int32_t)a4 % 32; // 0x48b94e
    if (v9 != 0) {
        int32_t * v10 = (int32_t *)(v5 + v4); // 0x48b94e
        *v10 = *v10 << v9;
    }
    return (int64_t)*(int32_t *)v5;
}

// Address range: 0x48b9ae - 0x48b9b1
int64_t function_48b9ae(void) {
    // 0x48b9ae
    int64_t result; // 0x48b9ae
    return result;
}

// Address range: 0x48b9ea - 0x48b9eb
int64_t function_48b9ea(void) {
    // 0x48b9ea
    int64_t result; // 0x48b9ea
    return result;
}

// Address range: 0x48ba1d - 0x48bab7
int64_t function_48ba1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x48ba1d
    int64_t result; // 0x48ba1d
    bool v1; // 0x48ba1d
    if (v1) {
        if (v1) {
            // 0x48ba55
            *(int32_t *)(result - 94) = (int32_t)a2;
            return result;
        }
        // 0x48ba5e
        return function_9d2ec0();
    }
    int64_t v2 = a4 - 1; // 0x48ba1f
    if (v2 != 0) {
        // 0x48ba21
        return result & (256 * v2 | -0xff01);
    }
    // 0x48ba4a
    return __asm_iretd();
    // 0x48ba56
    *(int32_t *)result = (int32_t)result;
    int32_t * v3 = (int32_t *)(a4 + 31); // 0x48ba5b
    *v3 = *v3 / 2;
    // 0x48ba5e
    return function_9d2ec0();
}

// Address range: 0x48bacf - 0x48bad5
int64_t function_48bacf(int64_t a1) {
    // 0x48bacf
    int64_t v1; // 0x48bacf
    return v1 & 0xffffffff;
}

// Address range: 0x48badd - 0x48bade
int64_t function_48badd(void) {
    // 0x48badd
    int64_t result; // 0x48badd
    return result;
}

// Address range: 0x48bae7 - 0x48baef
int64_t function_48bae7(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a1 + 0x30db40ac); // 0x48bae7
    *v1 = *v1 + (char)a3;
    int64_t result; // 0x48bae7
    return result;
}

// Address range: 0x48bafe - 0x48baff
int64_t function_48bafe(void) {
    // 0x48bafe
    int64_t result; // 0x48bafe
    return result;
}

// Address range: 0x48bb0c - 0x48bb0d
int64_t function_48bb0c(void) {
    // 0x48bb0c
    int64_t result; // 0x48bb0c
    return result;
}

// Address range: 0x48bb37 - 0x48bc36
int64_t function_48bb37(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = function_48bb0c(); // 0x48bb3e
    *(char *)a4 = (char)(a4 / 256) + (char)a4;
    int32_t * v2 = (int32_t *)(a2 + 34); // 0x48bb47
    int32_t v3 = *v2; // 0x48bb47
    int32_t v4 = v3 - 0x7e9ec790; // 0x48bb47
    *v2 = v4;
    char v5 = __asm_in_138((int16_t)v1 & -0x7428); // 0x48bb4f
    if (v4 < 0 != ((v4 ^ v3) & v3 + 0x1613870) < 0) {
        // 0x48bb52
        return function_48bafe();
    }
    // 0x48bbb2
    __asm_out_137(-34, v5);
    return a3 & 0xffffff00 | (int64_t)(v5 & -46);
}

// Address range: 0x48bc4d - 0x48bc67
int64_t function_48bc4d(void) {
    int64_t result = __asm_hlt(); // 0x48bc4d
    int32_t * v1 = (int32_t *)(result + 0x6100a769); // 0x48bc4e
    *v1 = 2 * *v1;
    *(int32_t *)0x527301058a703af7 = (int32_t)result;
    return result;
}

// Address range: 0x48bc7e - 0x48bc7f
int64_t function_48bc7e(void) {
    // 0x48bc7e
    int64_t result; // 0x48bc7e
    return result;
}

// Address range: 0x48bcd1 - 0x48bcd4
int64_t function_48bcd1(void) {
    // 0x48bcd1
    int64_t result; // 0x48bcd1
    return result;
}

// Address range: 0x48bce4 - 0x48bce6
int64_t function_48bce4(void) {
    // 0x48bce4
    return function_48bc7e();
}

// Address range: 0x48bd1c - 0x48bd22
int64_t function_48bd1c(int64_t a1, int64_t a2) {
    // 0x48bd1c
    int64_t v1; // 0x48bd1c
    return v1 & -256 | (uint64_t)v1 / 256 % 256;
}

// Address range: 0x48bd35 - 0x48bd37
int64_t function_48bd35(void) {
    // 0x48bd35
    int64_t v1; // 0x48bd35
    return function_48bdae(v1, v1, v1, v1);
}

// Address range: 0x48bd49 - 0x48bd4e
int64_t function_48bd49(void) {
    // 0x48bd49
    int64_t result; // 0x48bd49
    return result;
}

// Address range: 0x48bd62 - 0x48bd85
int64_t function_48bd62(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x48bd62
    __asm_out_135(-126, (int32_t)v2);
    int32_t * v3 = (int32_t *)(a4 - 77); // 0x48bd6a
    *v3 = *v3 - (int32_t)v2;
    int64_t result; // 0x48bd62
    uint32_t v4 = -22 * *(int32_t *)&result; // 0x48bd6d
    result = v4;
    *(int32_t *)0x685853df73047049 = v4;
    unsigned char v5 = (char)a4 % 32; // 0x48bd7a
    if (v5 != 0) {
        *(char *)v1 = *(char *)&v1 << v5;
    }
    int32_t * v6 = (int32_t *)(v2 - 0x72946cce); // 0x48bd7c
    *v6 = *v6 - (int32_t)v1;
    return result;
}

// Address range: 0x48bdae - 0x48bddf
int64_t function_48bdae(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x48bdae
    int64_t v1; // 0x48bdae
    *(int32_t *)(v1 + 40) = 0;
    int64_t result; // 0x48bdae
    if (*(int64_t *)(v1 + 784) != __readfsqword(40)) {
        // 0x48bdd0
        __stack_chk_fail();
        result = (int64_t)&g14;
    }
    // 0x48bdd5
    return result;
}
