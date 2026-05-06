/*
 * Targeted RetDec C for native executable gap queue batch 3899.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x311b8-0x31238 rank=- name=- kind=- bytes=- uncovered=-
 *   0x367c4-0x36840 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ad9a-0x3ae18 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4247f-0x424fb rank=- name=- kind=- bytes=- uncovered=-
 *   0x4319b-0x43215 rank=- name=- kind=- bytes=- uncovered=-
 *   0x432fb-0x4336c rank=- name=- kind=- bytes=- uncovered=-
 *   0x5060f-0x50688 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56d34-0x56da4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57d60-0x57dda rank=- name=- kind=- bytes=- uncovered=-
 *   0x5993b-0x599ba rank=- name=- kind=- bytes=- uncovered=-
 *   0x5c662-0x5c6d6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x691d8-0x69256 rank=- name=- kind=- bytes=- uncovered=-
 *   0xecf9c-0xed01c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf889c-0xf891c rank=- name=- kind=- bytes=- uncovered=-
 *   0x34d1e6-0x34d253 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48dbe0-0x48dc55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ba508-0x4ba580 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c4072-0x4c40e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c4688-0x4c4700 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d2983-0x4d2a00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4efc12-0x4efc80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f14bf-0x4f1530 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f5212-0x4f5280 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f52b2-0x4f5320 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50b66f-0x50b6e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51ae41-0x51aeb0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51b6e1-0x51b750 rank=- name=- kind=- bytes=- uncovered=-
 *   0x523a66-0x523ad0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54726c-0x5472e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x548f0e-0x548f80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x577053-0x5770c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57c443-0x57c4c0 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g10;
extern int g11;
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

int64_t function_1766a3();
int64_t function_1fd40();
int64_t function_20540();
int64_t function_20a50();
int64_t function_20d90();
int64_t function_2562c();
int64_t function_2570a();
int64_t function_25a28();
int64_t function_29c3a();
int64_t function_311b8(void);
int64_t function_311c4(void);
int64_t function_31200(int64_t a1, int64_t a2, int64_t a3);
int64_t function_31220(int64_t a1);
int64_t function_34d1bf();
int64_t function_34d1e6(void);
int64_t function_34d1eb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_360a0();
int64_t function_367c4(int64_t result);
int64_t function_367c8(int64_t a1, int64_t a2);
int64_t function_36d98();
int64_t function_36e82();
int64_t function_3ad24();
int64_t function_3ad9a(int64_t a1, int32_t a2);
int64_t function_3adde(int64_t a1, int64_t a2);
int64_t function_423a3();
int64_t function_4247f(int64_t a1);
int64_t function_4308a();
int64_t function_4319b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_432fb(int64_t a1, uint64_t a2, uint64_t a3);
int64_t function_455ee();
int64_t function_48d385();
int64_t function_48d3bb();
int64_t function_48d5bb();
int64_t function_48dbb8();
int64_t function_48dbc2();
int64_t function_48dbe0(void);
int64_t function_48dbea(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48dc15(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48dc34(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48e641();
int64_t function_4ba440();
int64_t function_4ba508(int64_t a1);
int64_t function_4ba510(int64_t a1);
int64_t function_4ba520(int64_t str);
int64_t function_4bcd80();
int64_t function_4bf0f0();
int64_t function_4c3a10();
int64_t function_4c3cda();
int64_t function_4c3d08();
int64_t function_4c4072(void);
int64_t function_4c4086(int64_t a1, int64_t a2);
int64_t function_4c40ac(void);
int64_t function_4c40b6(void);
int64_t function_4c40c0(void);
int64_t function_4c4688(void);
int64_t function_4c46a0(int64_t a1, int64_t result);
int64_t function_4d28f2();
int64_t function_4d2983(void);
int64_t function_4d2990(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4eeb30();
int64_t function_4eeb50();
int64_t function_4efb80();
int64_t function_4efb90();
int64_t function_4efc10();
int64_t function_4efc12(int64_t a1);
int64_t function_4efc40(void);
int64_t function_4efc50(void);
int64_t function_4efc60(void);
int64_t function_4efc70(void);
int64_t function_4f14bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4f14d0(void);
int64_t function_4f14e0(void);
int64_t function_4f14f0(void);
int64_t function_4f1500(void);
int64_t function_4f1510(void);
int64_t function_4f1520(void);
int64_t function_4f5212(int64_t a1, int64_t a2);
int64_t function_4f52b2(int64_t a1, int64_t a2);
int64_t function_5060f(void);
int64_t function_508450();
int64_t function_50b5c9();
int64_t function_50b5d6();
int64_t function_50b5f8();
int64_t function_50b64d();
int64_t function_50b657();
int64_t function_50b65a();
int64_t function_50b66f(void);
int64_t function_50b673(void);
int64_t function_50b68c(void);
int64_t function_50b696(void);
int64_t function_50b6a5(void);
int64_t function_50b6b0(void);
int64_t function_50b6b2(void);
int64_t function_50b6c0(void);
int64_t function_50b6c2(void);
int64_t function_50b6c4(void);
int64_t function_50b6c6(void);
int64_t function_50b6c8(void);
int64_t function_50b6cd(void);
int64_t function_50b6d1(void);
int64_t function_51ae1e();
int64_t function_51ae41(int64_t a1, int64_t a2, int64_t a3);
int64_t function_51ae44(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_51ae4f(void);
int64_t function_51ae9e(void);
int64_t function_51b6be();
int64_t function_51b6e1(void);
int64_t function_51b6e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_51b6ef(void);
int64_t function_51b73e(void);
int64_t function_52399f();
int64_t function_523a0d();
int64_t function_523a66(void);
int64_t function_523a7c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_523ab0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_52770();
int64_t function_52c050();
int64_t function_5423f0();
int64_t function_542590();
int64_t function_542650();
int64_t function_5459a0();
int64_t function_547140();
int64_t function_5471db();
int64_t function_54726c(void);
int64_t function_54728e(void);
int64_t function_5472d0(void);
int64_t function_548f0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_548f70(void);
int64_t function_565970();
int64_t function_567a10();
int64_t function_56b60();
int64_t function_56d34(int64_t a1);
int64_t function_576f88();
int64_t function_576fe4();
int64_t function_577053(int64_t a1, int64_t a2, int64_t a3);
int64_t function_577060(void);
int64_t function_57706e(int64_t a1);
int64_t function_5770af(void);
int64_t function_57ac30();
int64_t function_57b2f0();
int64_t function_57bb78();
int64_t function_57bfce();
int64_t function_57c387();
int64_t function_57c443(void);
int64_t function_57c45e(int64_t a1);
int64_t function_57c48d(int64_t a1, int64_t a2);
int64_t function_57d60(int64_t a1);
int64_t function_57d87(int64_t a1, int64_t a2, int64_t a3);
int64_t function_57daa(int64_t a1);
int64_t function_57ebb();
int64_t function_595d4();
int64_t function_5993b(int64_t a1, int64_t a2);
int64_t function_5c5ec();
int64_t function_5c662(int64_t a1);
int64_t function_5c692(int64_t a1, int64_t a2);
int64_t function_68e3e();
int64_t function_691d8(int64_t a1, int32_t a2);
int64_t function_6921c(int64_t a1, int64_t a2);
int64_t function_cc59c();
int64_t function_ecf9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_f889c(int64_t a1, int64_t a2, int64_t a3);

// Address range: 0x311b8 - 0x311bd
int64_t function_311b8(void) {
    // 0x311b8
    return function_1766a3();
}

// Address range: 0x311c4 - 0x311c5
int64_t function_311c4(void) {
    // 0x311c4
    int64_t result; // 0x311c4
    return result;
}

// Address range: 0x31200 - 0x3121e
int64_t function_31200(int64_t a1, int64_t a2, int64_t a3) {
    // 0x31200
    int64_t v1; // 0x31200
    unsigned char v2 = ((char)v1 ^ -91) - 91; // 0x31206
    int64_t v3 = v2; // 0x31208
    if (v2 == 0) {
        v3 = function_311c4();
    }
    // 0x3120a
    __asm_out(-59, (char)v3);
    return *(int64_t *)-0x6ac83818048fde00;
}

// Address range: 0x31220 - 0x3122b
int64_t function_31220(int64_t a1) {
    // 0x31220
    int64_t v1; // 0x31220
    return v1 & 0xffffffff ^ 0x72ef8ce7;
}

// Address range: 0x367c4 - 0x367c8
int64_t function_367c4(int64_t result) {
    // 0x367c4
    return result;
}

// Address range: 0x367c8 - 0x3683f
int64_t function_367c8(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x367d3
    int64_t v2 = *v1; // 0x367d3
    int64_t v3 = __readfsqword(40); // 0x367d7
    int64_t v4; // 0x367c8
    if (v2 == *(int64_t *)(a1 + 16)) {
        // 0x367fe
        function_36d98();
        v4 = *v1;
    } else {
        int64_t v5 = v2 + 8; // 0x367f0
        *(int64_t *)v2 = v2;
        *v1 = v5;
        v4 = v5;
    }
    int64_t v6 = v4; // 0x36803
    int64_t v7; // bp-17, 0x367c8
    function_36e82(a1, (v6 - a1 >> 3) - 1, 0, *(int64_t *)(v6 - 8), &v7);
    int64_t result = 0; // 0x36832
    if (v3 != __readfsqword(40)) {
        // 0x36834
        __stack_chk_fail();
        result = (int64_t)&g11;
    }
    // 0x36839
    return result;
}

// Address range: 0x3ad9a - 0x3adde
int64_t function_3ad9a(int64_t a1, int32_t a2) {
    int64_t v1 = (int64_t)a2 + a1; // 0x3ada4
    int64_t v2 = function_3ad24(v1, *(int64_t *)(a1 + 8)); // 0x3adab
    int64_t result = 0; // 0x3adbd
    if (v1 != 0) {
        // 0x3adbf
        function_25a28(result, a1 + 24, v1);
    }
    // 0x3adcb
    function_2562c(v2, result);
    return result;
}

// Address range: 0x3adde - 0x3ae17
int64_t function_3adde(int64_t a1, int64_t a2) {
    // 0x3adde
    if ((char)function_2570a() != 0) {
        // 0x3ae09
        return function_3ad9a(a1, 0);
    }
    // 0x3adeb
    if ((int64_t)g8 != a1) {
        int32_t * v1 = (int32_t *)(a1 + 16);
        *v1 = *v1 + 1;
    }
    // 0x3ae11
    return a1 + 24;
}

// Address range: 0x4247f - 0x424fb
int64_t function_4247f(int64_t a1) {
    // 0x4247f
    if (a1 == 0) {
        // 0x424fa
        return 0;
    }
    int64_t v1 = *(int64_t *)(a1 + 88); // 0x42486
    if (v1 == 0) {
        // 0x424fa
        return 0;
    }
    int32_t * v2 = (int32_t *)(a1 + 20); // 0x4248f
    if (*v2 != 1) {
        // 0x424fa
        return 0;
    }
    int32_t v3 = *(int32_t *)(a1 + 16); // 0x42495
    if (a1 < 0xffffffb4 != v3 != (int32_t)&g10 || *(int64_t *)(v1 + 96) != 0) {
        // 0x424fa
        return 0;
    }
    // 0x424b6
    if (*(int64_t *)(v1 + 104) == 0) {
        // 0x424d8
        if (*(int64_t *)(a1 + 72) == 0) {
            // 0x424fa
            return 0;
        }
    } else {
        // 0x424bd
        if (*(int64_t *)(a1 + 80) != a1) {
            // 0x424fa
            return 0;
        }
        // 0x424c3
        *(int64_t *)(v1 + 120) = *(int64_t *)(v1 + 112);
        *(int64_t *)(a1 + 72) = 0x3dd61;
    }
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x424df
    *v2 = 2;
    *v4 = 0;
    *(int64_t *)a1 = *v4;
    // 0x424fa
    return 1;
}

// Address range: 0x4319b - 0x43215
int64_t function_4319b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4319b
    if (a1 == 0) {
        // 0x4320d
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 88); // 0x431a0
    if (a3 == 0 | a2 == 0 | *v1 == 0 || *(int64_t *)(a1 + 72) != 0x3dd61) {
        // 0x4320d
        return 0;
    }
    int64_t result = 0; // 0x431d2
    if ((int32_t)function_4308a() != 0) {
        // 0x431d8
        *(int64_t *)a2 = *(int64_t *)(*v1 + 104);
        int64_t v2 = *v1; // 0x431e4
        int64_t * v3 = (int64_t *)(v2 + 112); // 0x431e8
        *(int64_t *)a3 = *v3;
        *(int64_t *)(v2 + 104) = 0;
        *(int64_t *)(v2 + 120) = 0;
        *v3 = 0;
        result = 1;
    }
    // 0x4320d
    return result;
}

// Address range: 0x432fb - 0x4336c
int64_t function_432fb(int64_t a1, uint64_t a2, uint64_t a3) {
    // 0x432fb
    *(int64_t *)(a1 + 80) = a1;
    *(int64_t *)(a1 + 72) = 0x3dd61;
    int64_t result = function_423a3(); // 0x43317
    if ((int32_t)result == 0) {
        // 0x43367
        return result;
    }
    int64_t v1 = a2 < a3 ? a3 : a2; // 0x43328
    if (v1 != 0) {
        int64_t * v2 = (int64_t *)(a1 + 88); // 0x43331
        *(int64_t *)(*v2 + 104) = 1;
        *(int64_t *)(*v2 + 120) = v1;
    }
    // 0x43367
    return 1;
}

// Address range: 0x5060f - 0x50688
int64_t function_5060f(void) {
    int64_t v1 = __readfsqword(40); // 0x5061d
    int64_t v2; // bp-16400, 0x5060f
    function_48d5bb(&v2, function_57ebb(), &g1);
    function_48dbb8(&v2);
    int64_t v3 = function_48d385(&v2); // 0x50650
    int64_t v4 = function_455ee(&v2, 4 * v3, (int32_t)&g1 ^ (int32_t)&g1); // 0x50662
    int64_t result = v4; // 0x50678
    if (v1 != __readfsqword(40)) {
        // 0x5067a
        __stack_chk_fail();
        result = (int64_t)&g11;
    }
    // 0x5067f
    return result;
}

// Address range: 0x56d34 - 0x56da3
int64_t function_56d34(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x56d44
    int64_t v2 = function_56b60(); // 0x56d57
    int64_t v3 = v2 & 0xffffffff; // 0x56d5e
    int64_t v4 = v3; // 0x56d60
    if ((int32_t)v2 == 0) {
        // 0x56d62
        v4 = v3;
        if (*(char *)(a1 + 32) == 0) {
            // 0x56d68
            int64_t str; // bp-64, 0x56d34
            v4 = memcmp(&str, (int64_t *)(a1 + 41), 32) != 0 ? 26 : v3;
        }
    }
    int64_t result = v4 & 0xffffffff; // 0x56d93
    if (v1 != __readfsqword(40)) {
        // 0x56d95
        __stack_chk_fail();
        result = (int64_t)&g11;
    }
    // 0x56d9a
    return result;
}

// Address range: 0x57d60 - 0x57d87
int64_t function_57d60(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result = *v1;
    *v1 = result - 1;
    if (result >= 0 == (result != 0)) {
        // 0x57d86
        return result;
    }
    // 0x57d81
    return function_4eeb50();
}

// Address range: 0x57d87 - 0x57daa
int64_t function_57d87(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 - a1; // 0x57d8e
    int64_t dest_mem = a3; // 0x57d91
    if (v1 != 0) {
        // 0x57d93
        dest_mem = (int64_t)memmove((int64_t *)a3, (int64_t *)a1, (int32_t)v1);
    }
    // 0x57da4
    return dest_mem + v1;
}

// Address range: 0x57daa - 0x57dda
int64_t function_57daa(int64_t a1) {
    // 0x57daa
    if ((int64_t)g8 == a1) {
        // 0x57dd9
        int64_t result; // 0x57daa
        return result;
    }
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result2 = *v1;
    *v1 = result2 - 1;
    if (result2 >= 0 == (result2 != 0)) {
        // 0x57dd9
        return result2;
    }
    // 0x57dd4
    return function_4eeb50();
}

// Address range: 0x5993b - 0x599ba
int64_t function_5993b(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x59945
    int64_t v2 = 0; // 0x5995a
    if (*(int64_t *)(a2 - 24) != 0) {
        // 0x5995c
        v2 = 0;
        if (*(int64_t *)(a1 + 32) == 0) {
            // 0x59966
            function_52770();
            function_48e641(a1);
            int64_t v3; // bp-40, 0x5993b
            function_360a0(&v3, a1);
            v2 = function_29c3a(&v3) & -256 | function_595d4(a1, &v3) % 256;
        }
    }
    int64_t result = v2; // 0x599ac
    if (v1 != __readfsqword(40)) {
        // 0x599ae
        __stack_chk_fail();
        result = (int64_t)&g11;
    }
    // 0x599b3
    return result;
}

// Address range: 0x5c662 - 0x5c692
int64_t function_5c662(int64_t a1) {
    // 0x5c662
    if ((int64_t)g8 == a1) {
        // 0x5c691
        int64_t result; // 0x5c662
        return result;
    }
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result2 = *v1;
    *v1 = result2 - 1;
    if (result2 >= 0 == (result2 != 0)) {
        // 0x5c691
        return result2;
    }
    // 0x5c68c
    return function_4eeb50();
}

// Address range: 0x5c692 - 0x5c6d6
int64_t function_5c692(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + a1; // 0x5c69c
    int64_t v2 = function_5c5ec(v1, *(int64_t *)(a1 + 8)); // 0x5c6a3
    int64_t result = 0; // 0x5c6b5
    if (v1 != 0) {
        // 0x5c6b7
        function_25a28(result, a1 + 24, v1);
    }
    // 0x5c6c3
    function_2562c(v2, result);
    return result;
}

// Address range: 0x691d8 - 0x6921c
int64_t function_691d8(int64_t a1, int32_t a2) {
    int64_t v1 = (int64_t)a2 + a1; // 0x691e2
    int64_t v2 = function_68e3e(v1, *(int64_t *)(a1 + 8)); // 0x691e9
    int64_t result = 0; // 0x691fb
    if (v1 != 0) {
        // 0x691fd
        function_25a28(result, a1 + 24, v1);
    }
    // 0x69209
    function_2562c(v2, result);
    return result;
}

// Address range: 0x6921c - 0x69255
int64_t function_6921c(int64_t a1, int64_t a2) {
    // 0x6921c
    if ((char)function_2570a() != 0) {
        // 0x69247
        return function_691d8(a1, 0);
    }
    // 0x69229
    if ((int64_t)g8 != a1) {
        int32_t * v1 = (int32_t *)(a1 + 16);
        *v1 = *v1 + 1;
    }
    // 0x6924f
    return a1 + 24;
}

// Address range: 0xecf9c - 0xed01c
int64_t function_ecf9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xecf9c
    int64_t v1; // 0xecf9c
    int64_t v2 = v1;
    bool v3; // 0xecf9c
    if (v3 || false) {
        // 0xed018
        return a1 & 0xffffffff;
    }
    char v4 = *(char *)(a4 + 34); // 0xecf9e
    float80_t v5; // 0xecf9c
    *(int16_t *)a3 = (int16_t)v5;
    return v2 & -256 | (int64_t)((v4 & (char)v2) - (char)a4);
}

// Address range: 0xf889c - 0xf8915
int64_t function_f889c(int64_t a1, int64_t a2, int64_t a3) {
    // 0xf889c
    int64_t v1; // 0xf889c
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    return function_cc59c();
}

// Address range: 0x34d1e6 - 0x34d1ea
int64_t function_34d1e6(void) {
    // 0x34d1e6
    int64_t result; // 0x34d1e6
    char * v1 = (char *)(result + 15); // 0x34d1e6
    *v1 = *v1 + (char)(result / 256);
    return result;
}

// Address range: 0x34d1eb - 0x34d203
int64_t function_34d1eb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34d1eb
    int64_t v1; // 0x34d1eb
    int64_t v2 = v1;
    __asm_out_133((int16_t)a3, (int32_t)v2);
    *(char *)v2 = (char)v2 / 16;
    return function_34d1bf();
}

// Address range: 0x48dbe0 - 0x48dbea
int64_t function_48dbe0(void) {
    // 0x48dbe0
    int64_t v1; // 0x48dbe0
    function_48d385((int64_t *)v1);
    return function_48dbc2();
}

// Address range: 0x48dbea - 0x48dc15
int64_t function_48dbea(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = -1; // 0x48dbf3
    int64_t v2 = a1; // 0x48dbf3
    int64_t v3 = 0; // 0x48dbf3
    while (v1 != 0) {
        int64_t v4 = v2;
        v1--;
        bool v5; // 0x48dbea
        v2 = v4 + (v5 ? -1 : 1);
        v3 = v1;
        if (*(char *)v4 == 0) {
            // break -> 
            break;
        }
        v3 = 0;
    }
    int64_t result = -2 - v3; // 0x48dbfd
    if (result == 0) {
        // 0x48dc14
        return result;
    }
    int64_t v6 = 0; // 0x48dc0f
    char * v7 = (char *)(v6 + a1); // 0x48dc05
    if (*v7 == (char)a2) {
        // 0x48dc0b
        *v7 = (char)a3;
    }
    // 0x48dc0f
    v6++;
    while (v6 != result) {
        // 0x48dc05
        v7 = (char *)(v6 + a1);
        if (*v7 == (char)a2) {
            // 0x48dc0b
            *v7 = (char)a3;
        }
        // 0x48dc0f
        v6++;
    }
    // 0x48dc14
    return result;
}

// Address range: 0x48dc15 - 0x48dc34
int64_t function_48dc15(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = function_48d385((int64_t *)a1); // 0x48dc18
    if (result == 0) {
        // 0x48dc33
        return result;
    }
    int64_t v1 = 0; // 0x48dc2e
    int32_t * v2 = (int32_t *)(4 * v1 + a1); // 0x48dc24
    if (*v2 == (int32_t)a2) {
        // 0x48dc2a
        *v2 = (int32_t)a3;
    }
    // 0x48dc2e
    v1++;
    while (v1 != result) {
        // 0x48dc24
        v2 = (int32_t *)(4 * v1 + a1);
        if (*v2 == (int32_t)a2) {
            // 0x48dc2a
            *v2 = (int32_t)a3;
        }
        // 0x48dc2e
        v1++;
    }
    // 0x48dc33
    return result;
}

// Address range: 0x48dc34 - 0x48dc55
int64_t function_48dc34(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = function_48d3bb(); // 0x48dc37
    if (result == 0) {
        // 0x48dc54
        return result;
    }
    int64_t v1 = 0; // 0x48dc4f
    int16_t * v2 = (int16_t *)(2 * v1 + a1); // 0x48dc43
    if (*v2 == (int16_t)a2) {
        // 0x48dc4a
        *v2 = (int16_t)a3;
    }
    // 0x48dc4f
    v1++;
    while (v1 != result) {
        // 0x48dc43
        v2 = (int16_t *)(2 * v1 + a1);
        if (*v2 == (int16_t)a2) {
            // 0x48dc4a
            *v2 = (int16_t)a3;
        }
        // 0x48dc4f
        v1++;
    }
    // 0x48dc54
    return result;
}

// Address range: 0x4ba508 - 0x4ba50a
int64_t function_4ba508(int64_t a1) {
    // 0x4ba508
    int64_t result; // 0x4ba508
    return result;
}

// Address range: 0x4ba510 - 0x4ba514
int64_t function_4ba510(int64_t a1) {
    // 0x4ba510
    return 0;
}

// Address range: 0x4ba520 - 0x4ba57c
int64_t function_4ba520(int64_t str) {
    int64_t v1 = function_4ba440(); // 0x4ba529
    if (*(int32_t *)v1 == 0) {
        // 0x4ba55c
        return 0;
    }
    int64_t v2 = v1; // 0x4ba540
    int64_t result = v2; // 0x4ba55a
    while (strcmp((char *)*(int64_t *)(v2 + 8), (char *)str) != 0) {
        // 0x4ba540
        v2 += 16;
        result = 0;
        if (*(int32_t *)v2 == 0) {
            // break -> 0x4ba55c
            break;
        }
        result = v2;
    }
    // 0x4ba55c
    return result;
}

// Address range: 0x4c4072 - 0x4c4086
int64_t function_4c4072(void) {
    // 0x4c4072
    int64_t v1; // 0x4c4072
    function_4c3a10(v1, 24, v1, v1, v1, v1);
    return function_4c3cda();
}

// Address range: 0x4c4086 - 0x4c40ac
int64_t function_4c4086(int64_t a1, int64_t a2) {
    // 0x4c4086
    int64_t v1; // bp+48, 0x4c4086
    int64_t v2; // 0x4c4086
    function_4c3a10((int64_t)&v1, 32, v2, v2, a1, a2);
    return function_4c3cda();
}

// Address range: 0x4c40ac - 0x4c40b6
int64_t function_4c40ac(void) {
    // 0x4c40ac
    return function_4c3d08();
}

// Address range: 0x4c40b6 - 0x4c40c0
int64_t function_4c40b6(void) {
    // 0x4c40b6
    return function_4c3d08();
}

// Address range: 0x4c40c0 - 0x4c40d2
int64_t function_4c40c0(void) {
    // 0x4c40c0
    int64_t v1; // 0x4c40c0
    free((int64_t *)v1);
    return function_4c3d08();
}

// Address range: 0x4c4688 - 0x4c4696
int64_t function_4c4688(void) {
    // 0x4c4688
    return 0xffffc180;
}

// Address range: 0x4c46a0 - 0x4c46f6
int64_t function_4c46a0(int64_t a1, int64_t result) {
    // 0x4c46a0
    if (a1 == 0 || result == 0 || *(int64_t *)(result + 64) == 0) {
        // 0x4c46cd
        return 0xffffc180;
    }
    if ((int32_t)result == 5) {
        // 0x4c46e0
        if ((int32_t)a1 == 1) {
            // 0x4c46cd
            return result;
        }
        // 0x4c46cd
        return 0xffffc100;
    }
    // 0x4c46c8
    if (result == a1) {
        // 0x4c46cd
        return result;
    }
    // 0x4c46cd
    return 0xffffc100;
}

// Address range: 0x4d2983 - 0x4d2989
int64_t function_4d2983(void) {
    // 0x4d2983
    return function_4d28f2();
}

// Address range: 0x4d2990 - 0x4d29f3
int64_t function_4d2990(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = 1; // 0x4d29b8
    if ((int32_t)function_4bf0f0() == 0) {
        // 0x4d29ba
        result = (int32_t)function_4bcd80(a1, a1 + 248, a1 + 272, a3, a4) != 0;
    }
    // 0x4d29de
    return result;
}

// Address range: 0x4efc12 - 0x4efc37
int64_t function_4efc12(int64_t a1) {
    // 0x4efc12
    function_4efc10();
    return function_4eeb30(a1, 8);
}

// Address range: 0x4efc40 - 0x4efc42
int64_t function_4efc40(void) {
    // 0x4efc40
    int64_t result; // 0x4efc40
    return result;
}

// Address range: 0x4efc50 - 0x4efc55
int64_t function_4efc50(void) {
    // 0x4efc50
    return function_4efb80();
}

// Address range: 0x4efc60 - 0x4efc62
int64_t function_4efc60(void) {
    // 0x4efc60
    int64_t result; // 0x4efc60
    return result;
}

// Address range: 0x4efc70 - 0x4efc75
int64_t function_4efc70(void) {
    // 0x4efc70
    return function_4efb90();
}

// Address range: 0x4f14bf - 0x4f14c8
int64_t function_4f14bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4f14bf
    int64_t v1; // 0x4f14bf
    char * v2 = (char *)(v1 - 115); // 0x4f14bf
    *v2 = *v2 + (char)a4;
    return v1 + 0xf9d6e & 0xffffffff;
}

// Address range: 0x4f14d0 - 0x4f14d8
int64_t function_4f14d0(void) {
    // 0x4f14d0
    return (int64_t)"w+b";
}

// Address range: 0x4f14e0 - 0x4f14e8
int64_t function_4f14e0(void) {
    // 0x4f14e0
    return (int64_t)"rb";
}

// Address range: 0x4f14f0 - 0x4f14f8
int64_t function_4f14f0(void) {
    // 0x4f14f0
    return (int64_t)"w+";
}

// Address range: 0x4f1500 - 0x4f1508
int64_t function_4f1500(void) {
    // 0x4f1500
    return (int64_t)"r+";
}

// Address range: 0x4f1510 - 0x4f1518
int64_t function_4f1510(void) {
    // 0x4f1510
    return (int64_t)&g2;
}

// Address range: 0x4f1520 - 0x4f1523
int64_t function_4f1520(void) {
    // 0x4f1520
    return 0;
}

// Address range: 0x4f5212 - 0x4f527a
int64_t function_4f5212(int64_t a1, int64_t a2) {
    // 0x4f5212
    int64_t v1; // 0x4f5212
    *(int64_t *)v1 = (int64_t)&g7;
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t v2 = a2; // bp-16, 0x4f5250
    *(int32_t *)(v1 + 8) = ((int32_t)&g11 ^ (int32_t)&g11) & -256 | 1;
    *(int64_t *)v1 = (int64_t)&g3;
    int64_t result = function_567a10(&v2); // 0x4f526b
    *(int64_t *)(v1 + 16) = result;
    return result;
}

// Address range: 0x4f52b2 - 0x4f531a
// From class:    std::codecvt<wchar_t, char, __mbstate_t>
// Type:          constructor
int64_t function_4f52b2(int64_t a1, int64_t a2) {
    // 0x4f52b2
    int64_t v1; // 0x4f52b2
    *(int64_t *)v1 = (int64_t)&g5;
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t v2 = a2; // bp-16, 0x4f52f0
    *(int32_t *)(v1 + 8) = ((int32_t)&g11 ^ (int32_t)&g11) & -256 | 1;
    *(int64_t *)v1 = (int64_t)&g4;
    int64_t result = function_567a10(&v2); // 0x4f530b
    *(int64_t *)(v1 + 16) = result;
    return result;
}

// Address range: 0x50b66f - 0x50b670
int64_t function_50b66f(void) {
    // 0x50b66f
    int64_t result; // 0x50b66f
    return result;
}

// Address range: 0x50b673 - 0x50b68c
int64_t function_50b673(void) {
    // 0x50b673
    function_508450();
    return function_50b5d6();
}

// Address range: 0x50b68c - 0x50b696
int64_t function_50b68c(void) {
    // 0x50b68c
    int64_t v1; // 0x50b68c
    function_1fd40(v1);
    return function_50b64d();
}

// Address range: 0x50b696 - 0x50b6a5
int64_t function_50b696(void) {
    // 0x50b696
    return function_50b5d6();
}

// Address range: 0x50b6a5 - 0x50b6b0
int64_t function_50b6a5(void) {
    // 0x50b6a5
    return function_50b5f8();
}

// Address range: 0x50b6b0 - 0x50b6b2
int64_t function_50b6b0(void) {
    // 0x50b6b0
    return function_50b6a5();
}

// Address range: 0x50b6b2 - 0x50b6c0
int64_t function_50b6b2(void) {
    // 0x50b6b2
    return function_50b5f8();
}

// Address range: 0x50b6c0 - 0x50b6c2
int64_t function_50b6c0(void) {
    // 0x50b6c0
    return function_50b696();
}

// Address range: 0x50b6c2 - 0x50b6c4
int64_t function_50b6c2(void) {
    // 0x50b6c2
    return function_50b6a5();
}

// Address range: 0x50b6c4 - 0x50b6c6
int64_t function_50b6c4(void) {
    // 0x50b6c4
    return function_50b65a();
}

// Address range: 0x50b6c6 - 0x50b6c8
int64_t function_50b6c6(void) {
    // 0x50b6c6
    return function_50b657();
}

// Address range: 0x50b6c8 - 0x50b6cd
int64_t function_50b6c8(void) {
    // 0x50b6c8
    return function_50b5c9();
}

// Address range: 0x50b6cd - 0x50b6cf
int64_t function_50b6cd(void) {
    // 0x50b6cd
    return function_50b696();
}

// Address range: 0x50b6d1 - 0x50b6d2
int64_t function_50b6d1(void) {
    // 0x50b6d1
    int64_t result; // 0x50b6d1
    return result;
}

// Address range: 0x51ae41 - 0x51ae43
int64_t function_51ae41(int64_t a1, int64_t a2, int64_t a3) {
    // 0x51ae41
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x51ae41
    return result;
}

// Address range: 0x51ae44 - 0x51ae4f
int64_t function_51ae44(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x51ae44
    int64_t v1; // 0x51ae44
    unsigned char v2 = (char)v1; // 0x51ae44
    unsigned char v3 = v2 + (char)(a4 / 256); // 0x51ae44
    if (v3 < v2 || v3 == 0) {
        // 0x51ae49
        return v1 & -256 | (int64_t)v3;
    }
    // 0x51ae4b
    return function_51ae1e();
}

// Address range: 0x51ae4f - 0x51ae9c
int64_t function_51ae4f(void) {
    // 0x51ae4f
    function_1fd40(function_542590("basic_string::append"));
    while (true) {
        // 0x51ae6c
        function_20a50();
        function_542590("basic_string::append");
        function_1fd40(function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::erase"));
    }
}

// Address range: 0x51ae9e - 0x51ae9f
int64_t function_51ae9e(void) {
    // 0x51ae9e
    int64_t result; // 0x51ae9e
    return result;
}

// Address range: 0x51b6e1 - 0x51b6e3
int64_t function_51b6e1(void) {
    // 0x51b6e1
    __asm_int(-98);
    int64_t result; // 0x51b6e1
    return result;
}

// Address range: 0x51b6e4 - 0x51b6ef
int64_t function_51b6e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x51b6e4
    bool v1; // 0x51b6e4
    __asm_outsb((int16_t)a3, *(char *)((v1 ? -1 : 1) + a2));
    return function_51b6be();
}

// Address range: 0x51b6ef - 0x51b73c
int64_t function_51b6ef(void) {
    // 0x51b6ef
    function_1fd40(function_542590("basic_string::append"));
    while (true) {
        // 0x51b70c
        function_20a50();
        function_542590("basic_string::append");
        function_1fd40(function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::erase"));
    }
}

// Address range: 0x51b73e - 0x51b73f
int64_t function_51b73e(void) {
    // 0x51b73e
    int64_t result; // 0x51b73e
    return result;
}

// Address range: 0x523a66 - 0x523a7c
int64_t function_523a66(void) {
    // 0x523a66
    int64_t v1; // 0x523a66
    int64_t v2 = v1;
    if (*(int64_t *)(v2 + 16) < *(int64_t *)(v2 + 24)) {
        function_52399f();
    }
    // 0x523a74
    return function_523a0d();
}

// Address range: 0x523a7c - 0x523aaa
// From class:    std::__cxx11::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          constructor
int64_t function_523a7c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x523a7c
    __stack_chk_fail();
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a3 != 0) | ((int32_t)&g11 ^ (int32_t)&g11) & -256;
    *(int64_t *)a1 = (int64_t)&g6;
    return (int64_t)&g6;
}

// Address range: 0x523ab0 - 0x523aca
// From class:    std::__cxx11::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          constructor
int64_t function_523ab0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x523ab0
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a3 != 0);
    *(int64_t *)a1 = (int64_t)&g6;
    return (int64_t)&g6;
}

// Address range: 0x54726c - 0x54728e
int64_t function_54726c(void) {
    int64_t v1 = function_5423f0(); // 0x547271
    while (true) {
        // 0x547274
        int64_t v2; // 0x54726c
        function_5459a0(v2);
        _Unwind_Resume((struct _Unwind_Exception *)v1);
        function_20540();
        v1 = (int64_t)&g11;
    }
}

// Address range: 0x54728e - 0x5472c5
int64_t function_54728e(void) {
    // 0x54728e
    int64_t v1; // 0x54728e
    int64_t v2 = v1;
    function_20a50();
    function_1fd40(v1);
    int64_t v3 = *(int64_t *)(v2 - 24) + v2; // 0x54729f
    int32_t * v4 = (int32_t *)(v3 + 32); // 0x5472a2
    *v4 = *v4 | 1;
    if (*(char *)(v3 + 28) % 2 != 0) {
        // 0x5472b6
        function_20a50();
        return function_20540();
    }
    // 0x5472ac
    function_20540();
    return function_5471db();
}

// Address range: 0x5472d0 - 0x5472d5
int64_t function_5472d0(void) {
    // 0x5472d0
    return function_547140();
}

// Address range: 0x548f0e - 0x548f5e
int64_t function_548f0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x548f0e
    *(int64_t *)(a1 + 8) = 0;
    *(char *)(a1 + 16) = 0;
    function_52c050();
    int64_t result; // 0x548f0e
    return result;
}

// Address range: 0x548f70 - 0x548f78
int64_t function_548f70(void) {
    // 0x548f70
    int64_t result; // 0x548f70
    __asm_out_134(-24, (int32_t)result);
    return result;
}

// Address range: 0x577053 - 0x57705b
int64_t function_577053(int64_t a1, int64_t a2, int64_t a3) {
    // 0x577053
    int64_t v1; // 0x577053
    *(int32_t *)(v1 - 8) = (int32_t)a3 - 1;
    return function_576fe4();
}

// Address range: 0x577060 - 0x57706e
int64_t function_577060(void) {
    // 0x577060
    int64_t v1; // 0x577060
    int32_t * v2 = (int32_t *)(v1 - 8); // 0x577060
    *v2 = *v2 - 1;
    return function_576f88();
}

// Address range: 0x57706e - 0x5770af
int64_t function_57706e(int64_t a1) {
    // 0x57706e
    __stack_chk_fail();
    int64_t v1 = a1 - 24; // 0x57707b
    while (true) {
        int64_t v2; // 0x57706e
        if (v1 != v2) {
            // 0x5770a3
            int64_t v3; // bp+15, 0x57706e
            function_20d90(v1, &v3);
        }
        // 0x577084
        _Unwind_Resume((struct _Unwind_Exception *)&g11);
    }
}

// Address range: 0x5770af - 0x5770b1
int64_t function_5770af(void) {
    // 0x5770af
    int64_t result; // 0x5770af
    return result;
}

// Address range: 0x57c443 - 0x57c45e
int64_t function_57c443(void) {
    // 0x57c443
    int64_t v1; // 0x57c443
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x57c443
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    *(int64_t *)(v1 + 24) = v1 + 1;
    function_57b2f0(v1);
    return function_57c387(v1, v1, v1);
}

// Address range: 0x57c45e - 0x57c48d
int64_t function_57c45e(int64_t a1) {
    // 0x57c45e
    if (a1 == 0) {
        function_57bb78();
    }
    // 0x57c46b
    int64_t v1; // 0x57c45e
    int32_t * v2 = (int32_t *)(v1 + 56); // 0x57c46b
    uint32_t v3 = *v2; // 0x57c46b
    if (v3 >= *(int32_t *)(v1 + 60)) {
        function_57bb78();
    }
    int64_t v4 = *(int64_t *)(v1 + 48); // 0x57c477
    uint32_t v5 = v3 + 1; // 0x57c47e
    *(int64_t *)(v4 + (0x100000000 * (int64_t)v3 >> 29)) = a1;
    *v2 = v5;
    return function_57c387((int64_t)v3, v4, (int64_t)v5);
}

// Address range: 0x57c48d - 0x57c4b4
int64_t function_57c48d(int64_t a1, int64_t a2) {
    // 0x57c48d
    int64_t v1; // 0x57c48d
    int32_t * v2 = (int32_t *)(v1 + 84); // 0x57c48d
    *v2 = 1;
    *(int64_t *)(v1 + 24) = a2 + 3;
    function_57ac30(v1);
    return function_57bfce();
}
