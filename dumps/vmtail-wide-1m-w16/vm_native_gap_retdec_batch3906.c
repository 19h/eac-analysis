/*
 * Targeted RetDec C for native executable gap queue batch 3906.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x5343c-0x5346c rank=- name=- kind=- bytes=- uncovered=-
 *   0x5a38a-0x5a3ba rank=- name=- kind=- bytes=- uncovered=-
 *   0x6126f-0x6129c rank=- name=- kind=- bytes=- uncovered=-
 *   0x68eb4-0x68ee4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49aac2-0x49aaf0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49ba82-0x49bab0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49f093-0x49f0c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a1241-0x4a1270 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b5583-0x4b55b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b5662-0x4b5690 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b6334-0x4b6360 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b8b03-0x4b8b30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c5904-0x4c5930 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d5a23-0x4d5a50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4efbe2-0x4efc10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x500b42-0x500b70 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50e495-0x50e4c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51455f-0x514590 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5171d2-0x517200 rank=- name=- kind=- bytes=- uncovered=-
 *   0x523721-0x523750 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52b095-0x52b0c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x548751-0x548780 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54ce81-0x54ceb0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x566ac1-0x566af0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5688b4-0x5688e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x570073-0x5700a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x572205-0x572230 rank=- name=- kind=- bytes=- uncovered=-
 *   0x572581-0x5725b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x576913-0x576940 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5769f3-0x576a20 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57ac05-0x57ac30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5835b3-0x5835e0 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g8;
extern int g9;
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

int64_t function_1fd40();
int64_t function_200c0();
int64_t function_203b0();
int64_t function_20540();
int64_t function_20d68();
int64_t function_20d90();
int64_t function_49aaa7();
int64_t function_49aac2(int64_t a1, int64_t a2);
int64_t function_49aad8(void);
int64_t function_49b76e();
int64_t function_49ba82(void);
int64_t function_49ba84(void);
int64_t function_49e770();
int64_t function_49ef50();
int64_t function_49f093(void);
int64_t function_4a11a9();
int64_t function_4a11bf();
int64_t function_4a1241(void);
int64_t function_4a1243(void);
int64_t function_4a1248(int64_t a1);
int64_t function_4b2d10();
int64_t function_4b5492();
int64_t function_4b5512();
int64_t function_4b555b();
int64_t function_4b5583(void);
int64_t function_4b5585(void);
int64_t function_4b5590(void);
int64_t function_4b559a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b559e(int64_t a1, int64_t a2);
int64_t function_4b5662(void);
int64_t function_4b5663(int64_t a1);
int64_t function_4b567e(void);
int64_t function_4b6334(int64_t a1, int64_t a2);
int64_t function_4b6350(int64_t a1, int64_t a2);
int64_t function_4b88c4();
int64_t function_4b88ed();
int64_t function_4b89c0();
int64_t function_4b8b03(void);
int64_t function_4b8b20(void);
int64_t function_4c5440();
int64_t function_4c5450();
int64_t function_4c5904(void);
int64_t function_4c590e(void);
int64_t function_4c5918(void);
int64_t function_4d559a();
int64_t function_4d55d0();
int64_t function_4d5a23(void);
int64_t function_4d5a32(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4d5a49(void);
int64_t function_4eeb30();
int64_t function_4eeb50();
int64_t function_4efb50();
int64_t function_4efbe0();
int64_t function_4efbe2(int64_t a1);
int64_t function_500b42(int64_t a1, int64_t a2, int64_t a3);
int64_t function_500b69(void);
int64_t function_50e1e0();
int64_t function_50e495(int64_t a1);
int64_t function_51455f(void);
int64_t function_514567(void);
int64_t function_516790();
int64_t function_5171d2(int64_t a1);
int64_t function_52365a();
int64_t function_5236cd();
int64_t function_52370e();
int64_t function_523721(int64_t a1, int64_t a2);
int64_t function_523726(void);
int64_t function_52373d(int64_t a1);
int64_t function_52b095(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_52b09c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_52b0a8(void);
int64_t function_52b0b0(int64_t a1);
int64_t function_5343c(int64_t a1);
int64_t function_5486d0();
int64_t function_548707();
int64_t function_548751(void);
int64_t function_548760(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_54ce74();
int64_t function_54ce81(void);
int64_t function_54ce92(void);
int64_t function_54ce9b(int64_t a1, int64_t a2);
int64_t function_566a6f();
int64_t function_566ac1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_566ae0(int64_t a1);
int64_t function_5688b4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_57001b();
int64_t function_570073(void);
int64_t function_570081(int64_t a1, int64_t a2, int64_t a3);
int64_t function_572205(int64_t a1);
int64_t function_572224(void);
int64_t function_572581(void);
int64_t function_576913(int64_t a1);
int64_t function_5769f3(int64_t a1);
int64_t function_57a5c3();
int64_t function_57abd1();
int64_t function_57ac05(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_57ba10();
int64_t function_5835b3(void);
int64_t function_5835b5(void);
int64_t function_5835c0(int64_t a1);
int64_t function_5a38a(int64_t a1);
int64_t function_61266();
int64_t function_6126f(void);
int64_t function_61272(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_68eb4(int64_t a1);

// Address range: 0x5343c - 0x5346c
int64_t function_5343c(int64_t a1) {
    // 0x5343c
    if ((int64_t)g3 == a1) {
        // 0x5346b
        int64_t result; // 0x5343c
        return result;
    }
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result2 = *v1;
    *v1 = result2 - 1;
    if (result2 >= 0 == (result2 != 0)) {
        // 0x5346b
        return result2;
    }
    // 0x53466
    return function_4eeb50(a1);
}

// Address range: 0x5a38a - 0x5a3ba
int64_t function_5a38a(int64_t a1) {
    // 0x5a38a
    if (*(int64_t *)0x848c20 == a1) {
        // 0x5a3b9
        int64_t result; // 0x5a38a
        return result;
    }
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result2 = *v1;
    *v1 = result2 - 1;
    if (result2 >= 0 == (result2 != 0)) {
        // 0x5a3b9
        return result2;
    }
    // 0x5a3b4
    return function_4eeb50(a1);
}

// Address range: 0x6126f - 0x61272
int64_t function_6126f(void) {
    // 0x6126f
    return function_61266();
}

// Address range: 0x61272 - 0x6129b
int64_t function_61272(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x61272
    *v1 = a4;
    int64_t result = a2 + 16 + *v1; // 0x6127a
    int64_t result2 = result; // 0x61282
    if (a4 <= a3) {
        // 0x6129a
        return result;
    }
    int64_t v2 = a4; // 0x61282
    int64_t * v3 = (int64_t *)(result2 + 8); // 0x61284
    int64_t v4 = *v3; // 0x61284
    *v3 = 0;
    v2 -= v4;
    result2 = result2 + 16 + v4;
    while (v2 > a3) {
        // 0x61284
        v3 = (int64_t *)(result2 + 8);
        v4 = *v3;
        *v3 = 0;
        v2 -= v4;
        result2 = result2 + 16 + v4;
    }
    // 0x6129a
    return result2;
}

// Address range: 0x68eb4 - 0x68ee4
int64_t function_68eb4(int64_t a1) {
    // 0x68eb4
    if ((int64_t)g3 == a1) {
        // 0x68ee3
        int64_t result; // 0x68eb4
        return result;
    }
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result2 = *v1;
    *v1 = result2 - 1;
    if (result2 >= 0 == (result2 != 0)) {
        // 0x68ee3
        return result2;
    }
    // 0x68ede
    return function_4eeb50(a1);
}

// Address range: 0x49aac2 - 0x49aad2
int64_t function_49aac2(int64_t a1, int64_t a2) {
    // 0x49aac2
    int64_t v1; // 0x49aac2
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    function_49e770(v1, v1, v1, v1, v1);
    return 0;
}

// Address range: 0x49aad8 - 0x49aae1
int64_t function_49aad8(void) {
    // 0x49aad8
    int64_t v1; // 0x49aad8
    *(char *)(v1 + (int64_t)&g1) = 3;
    return function_49aaa7();
}

// Address range: 0x49ba82 - 0x49ba83
int64_t function_49ba82(void) {
    // 0x49ba82
    int64_t result; // 0x49ba82
    return result;
}

// Address range: 0x49ba84 - 0x49bab0
int64_t function_49ba84(void) {
    // 0x49ba84
    int64_t v1; // 0x49ba84
    function_49e770(v1, 1, (int64_t)"/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t)&g8, (int64_t)"handshake timeout");
    return function_49b76e();
}

// Address range: 0x49f093 - 0x49f0bf
int64_t function_49f093(void) {
    // 0x49f093
    int64_t v1; // 0x49f093
    *(int32_t *)-0x3cf73b7cb7fff152 = (int32_t)v1;
    int64_t v2 = function_49ef50(); // 0x49f0a4
    if (v2 == 0) {
        // 0x49f0b8
        return 0;
    }
    // 0x49f0ae
    return (int64_t)*(int32_t *)v2;
}

// Address range: 0x4a1241 - 0x4a1242
int64_t function_4a1241(void) {
    // 0x4a1241
    int64_t result; // 0x4a1241
    return result;
}

// Address range: 0x4a1243 - 0x4a1248
int64_t function_4a1243(void) {
    // 0x4a1243
    return function_4a11bf();
}

// Address range: 0x4a1248 - 0x4a1263
int64_t function_4a1248(int64_t a1) {
    // 0x4a1248
    return function_4a11a9();
}

// Address range: 0x4b5583 - 0x4b5584
int64_t function_4b5583(void) {
    // 0x4b5583
    int64_t result; // 0x4b5583
    return result;
}

// Address range: 0x4b5585 - 0x4b558a
int64_t function_4b5585(void) {
    // 0x4b5585
    return function_4b5492();
}

// Address range: 0x4b5590 - 0x4b559a
int64_t function_4b5590(void) {
    // 0x4b5590
    return function_4b5492();
}

// Address range: 0x4b559a - 0x4b559e
int64_t function_4b559a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b559a
    return function_4b555b();
}

// Address range: 0x4b559e - 0x4b55a5
int64_t function_4b559e(int64_t a1, int64_t a2) {
    // 0x4b559e
    return function_4b5512();
}

// Address range: 0x4b5662 - 0x4b5663
int64_t function_4b5662(void) {
    // 0x4b5662
    int64_t result; // 0x4b5662
    return result;
}

// Address range: 0x4b5663 - 0x4b567e
int64_t function_4b5663(int64_t a1) {
    // 0x4b5663
    int64_t v1; // 0x4b5663
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t v3; // 0x4b5663
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 24) = 0x4b4d10;
    return 0;
}

// Address range: 0x4b567e - 0x4b5684
int64_t function_4b567e(void) {
    // 0x4b567e
    return 0xffff9f00;
}

// Address range: 0x4b6334 - 0x4b6345
int64_t function_4b6334(int64_t a1, int64_t a2) {
    // 0x4b6334
    *(int64_t *)(a1 + 24) = a2;
    int64_t result; // 0x4b6334
    return result;
}

// Address range: 0x4b6350 - 0x4b6354
int64_t function_4b6350(int64_t a1, int64_t a2) {
    // 0x4b6350
    *(int32_t *)(a1 + 32) = (int32_t)a2;
    int64_t result; // 0x4b6350
    return result;
}

// Address range: 0x4b8b03 - 0x4b8b18
int64_t function_4b8b03(void) {
    // 0x4b8b03
    int64_t v1; // 0x4b8b03
    if ((int32_t)function_4b2d10(v1) == 0) {
        function_4b89c0();
    }
    // 0x4b8b13
    return function_4b88c4();
}

// Address range: 0x4b8b20 - 0x4b8b2a
int64_t function_4b8b20(void) {
    // 0x4b8b20
    return function_4b88ed();
}

// Address range: 0x4c5904 - 0x4c590e
int64_t function_4c5904(void) {
    // 0x4c5904
    return function_4c5450();
}

// Address range: 0x4c590e - 0x4c5918
int64_t function_4c590e(void) {
    // 0x4c590e
    return function_4c5440();
}

// Address range: 0x4c5918 - 0x4c5922
int64_t function_4c5918(void) {
    // 0x4c5918
    return function_4c5440();
}

// Address range: 0x4d5a23 - 0x4d5a32
int64_t function_4d5a23(void) {
    // 0x4d5a23
    return function_4d559a();
}

// Address range: 0x4d5a32 - 0x4d5a45
int64_t function_4d5a32(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4d5a32
    int64_t v1; // 0x4d5a32
    *(int32_t *)a4 = (int32_t)v1;
    int64_t v2 = a3 & 0xffffffff; // 0x4d5a36
    int64_t v3 = v2 - 4;
    int32_t v4 = *(int32_t *)(v1 + v3); // 0x4d5a38
    *(int32_t *)(v3 + a4) = v4;
    return function_4d55d0(v4, v2);
}

// Address range: 0x4d5a49 - 0x4d5a4c
int64_t function_4d5a49(void) {
    // 0x4d5a49
    int64_t result; // 0x4d5a49
    return result;
}

// Address range: 0x4efbe2 - 0x4efc07
int64_t function_4efbe2(int64_t a1) {
    // 0x4efbe2
    function_4efbe0();
    return function_4eeb30(a1, 8);
}

// Address range: 0x500b42 - 0x500b48
int64_t function_500b42(int64_t a1, int64_t a2, int64_t a3) {
    // 0x500b42
    int64_t result; // 0x500b42
    return result;
}

// Address range: 0x500b69 - 0x500b6c
int64_t function_500b69(void) {
    // 0x500b69
    int64_t result; // 0x500b69
    return result;
}

// Address range: 0x50e495 - 0x50e4ba
int64_t function_50e495(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 24); // 0x50e4a3
    if (result != g5) {
        // 0x50e4b8
        return result;
    }
    // 0x50e4b0
    return function_50e1e0();
}

// Address range: 0x51455f - 0x514560
int64_t function_51455f(void) {
    // 0x51455f
    int64_t result; // 0x51455f
    return result;
}

// Address range: 0x514567 - 0x51456b
int64_t function_514567(void) {
    // 0x514567
    int64_t result; // 0x514567
    int32_t * v1 = (int32_t *)(result - 119); // 0x514567
    *v1 = *v1 - 1;
    return result;
}

// Address range: 0x5171d2 - 0x5171fa
int64_t function_5171d2(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 48); // 0x5171e3
    if (result != g6) {
        // 0x5171f8
        return result;
    }
    // 0x5171f0
    return function_516790();
}

// Address range: 0x523721 - 0x523724
int64_t function_523721(int64_t a1, int64_t a2) {
    // 0x523721
    int64_t result; // 0x523721
    return result;
}

// Address range: 0x523726 - 0x52373c
int64_t function_523726(void) {
    // 0x523726
    int64_t v1; // 0x523726
    int64_t v2 = v1;
    if (*(int64_t *)(v2 + 16) < *(int64_t *)(v2 + 24)) {
        function_52365a();
    }
    // 0x523734
    return function_5236cd();
}

// Address range: 0x52373d - 0x523743
int64_t function_52373d(int64_t a1) {
    // 0x52373d
    int64_t result; // 0x52373d
    bool v1; // 0x52373d
    if (true == !v1) {
        result = function_52370e();
    }
    // 0x52373f
    return result;
}

// Address range: 0x52b095 - 0x52b09c
int64_t function_52b095(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char * v1 = (char *)(a5 + 57); // 0x52b095
    bool v2; // 0x52b095
    *v1 = *v1 + (char)a6 + (char)v2;
    int64_t result; // 0x52b095
    return result;
}

// Address range: 0x52b09c - 0x52b0a4
int64_t function_52b09c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x52b09c
    return function_4eeb50(a3);
}

// Address range: 0x52b0a8 - 0x52b0aa
int64_t function_52b0a8(void) {
    // 0x52b0a8
    int64_t result; // 0x52b0a8
    return result;
}

// Address range: 0x52b0b0 - 0x52b0b8
int64_t function_52b0b0(int64_t a1) {
    // 0x52b0b0
    return function_4eeb50(a1);
}

// Address range: 0x548751 - 0x54875d
int64_t function_548751(void) {
    // 0x548751
    int64_t v1; // 0x548751
    *(char *)(v1 + 24 + v1) = 0;
    return function_548707();
}

// Address range: 0x548760 - 0x54877f
int64_t function_548760(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x548760
    *(int64_t *)a1 = function_5486d0(a2, a3, a4);
    return 0;
}

// Address range: 0x54ce81 - 0x54ce90
int64_t function_54ce81(void) {
    // 0x54ce81
    int64_t v1; // 0x54ce81
    function_1fd40(v1);
    function_20540();
    return function_54ce74();
}

// Address range: 0x54ce92 - 0x54ce95
int64_t function_54ce92(void) {
    // 0x54ce92
    int64_t result; // 0x54ce92
    return result;
}

// Address range: 0x54ce9b - 0x54cea5
int64_t function_54ce9b(int64_t a1, int64_t a2) {
    // 0x54ce9b
    int64_t v1; // 0x54ce9b
    return v1 & 0xffffffff;
}

// Address range: 0x566ac1 - 0x566ae0
int64_t function_566ac1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x566ac1
    int64_t v1; // 0x566ac1
    *(int64_t *)v1 = a3;
    int64_t v2 = function_203b0(); // 0x566acb
    if ((int64_t)&g2 != -1) {
        function_566a6f();
    }
    // 0x566ad9
    return function_200c0(v2);
}

// Address range: 0x566ae0 - 0x566ae5
// From class:    std::logic_error
// Type:          virtual member function
int64_t function_566ae0(int64_t a1) {
    // 0x566ae0
    return *(int64_t *)(a1 + 8);
}

// Address range: 0x5688b4 - 0x5688e0
int64_t function_5688b4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5688b4
    int64_t v1; // 0x5688b4
    function_4efb50(v1);
    if (a3 != -1) {
        // 0x5688cb
        _Unwind_Resume((struct _Unwind_Exception *)v1);
    }
    // 0x5688d0
    return function_200c0(v1);
}

// Address range: 0x570073 - 0x570081
int64_t function_570073(void) {
    // 0x570073
    int64_t v1; // 0x570073
    *(char *)(v1 - 1) = (char)v1;
    // 0x57007f
    return function_57001b();
}

// Address range: 0x570081 - 0x5700a0
int64_t function_570081(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 + 1; // 0x570081
    int64_t v2; // 0x570081
    if (v1 == 0) {
        // 0x570091
        return function_200c0(v2);
    }
    // 0x57008a
    _Unwind_Resume((struct _Unwind_Exception *)v2);
    return function_570081(v2, a2, v1);
}

// Address range: 0x572205 - 0x572224
int64_t function_572205(int64_t a1) {
    // 0x572205
    int64_t v1; // 0x572205
    if (v1 + 16 != a1) {
        // 0x572215
        function_4eeb50(a1);
    }
    // 0x57221a
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return function_572205((int64_t)&g9);
}

// Address range: 0x572224 - 0x572226
int64_t function_572224(void) {
    // 0x572224
    return function_572205((int64_t)&g9);
}

// Address range: 0x572581 - 0x5725b0
int64_t function_572581(void) {
    // 0x572581
    int64_t v1; // 0x572581
    int64_t v2 = *(int64_t *)(v1 - 64); // 0x572581
    if (v2 != v1 + 16) {
        // 0x572594
        function_4eeb50(v2);
    }
    // 0x572599
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g9;
}

// Address range: 0x576913 - 0x576940
int64_t function_576913(int64_t a1) {
    // 0x576913
    __stack_chk_fail();
    int64_t v1 = a1 - 24; // 0x576920
    if (v1 != (int64_t)g3) {
        // 0x57692d
        int64_t v2; // bp+15, 0x576913
        function_20d90(v1, &v2);
    }
    // 0x576937
    _Unwind_Resume((struct _Unwind_Exception *)&g9);
    return (int64_t)&g9;
}

// Address range: 0x5769f3 - 0x576a20
int64_t function_5769f3(int64_t a1) {
    // 0x5769f3
    __stack_chk_fail();
    int64_t v1 = a1 - 24; // 0x576a00
    if (v1 != g4) {
        // 0x576a0d
        int64_t v2; // bp+15, 0x5769f3
        function_20d68(v1, &v2);
    }
    // 0x576a17
    _Unwind_Resume((struct _Unwind_Exception *)&g9);
    return (int64_t)&g9;
}

// Address range: 0x57ac05 - 0x57ac23
int64_t function_57ac05(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x57ac05
    int64_t v1; // 0x57ac05
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(a4 - 9 + 4 * a4); // 0x57ac07
    *v3 = *v3 + (char)a4;
    function_57ba10();
    if (*(char *)(*(int64_t *)(v1 + 24) + 1) == 0) {
        function_57a5c3();
    }
    // 0x57ac21
    return function_57abd1();
}

// Address range: 0x5835b3 - 0x5835b4
int64_t function_5835b3(void) {
    // 0x5835b3
    int64_t result; // 0x5835b3
    return result;
}

// Address range: 0x5835b5 - 0x5835b8
int64_t function_5835b5(void) {
    // 0x5835b5
    int64_t result; // 0x5835b5
    return result;
}

// Address range: 0x5835c0 - 0x5835d3
int64_t function_5835c0(int64_t a1) {
    // 0x5835c0
    free((int64_t *)a1);
    return (int64_t)&g9;
}
