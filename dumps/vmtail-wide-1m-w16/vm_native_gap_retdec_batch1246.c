/*
 * Targeted RetDec C for native executable gap queue batch 1246.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1183bf-0x1185bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1185bf-0x1187bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1187bf-0x1189bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1189bf-0x118bbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x118bbf-0x118dbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x118dbf-0x118fbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x118fbf-0x1191bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1191bf-0x1193bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x4501df-0x4503df rank=- name=- kind=- bytes=- uncovered=-
 *   0x4503df-0x4505df rank=- name=- kind=- bytes=- uncovered=-
 *   0x4505df-0x4507df rank=- name=- kind=- bytes=- uncovered=-
 *   0x4509df-0x450bdf rank=- name=- kind=- bytes=- uncovered=-
 *   0x450bdf-0x450ddf rank=- name=- kind=- bytes=- uncovered=-
 *   0x450ddf-0x450fdf rank=- name=- kind=- bytes=- uncovered=-
 *   0x450fdf-0x4511df rank=- name=- kind=- bytes=- uncovered=-
 *   0x53d00b-0x53d20b rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g5;
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

int64_t function_1183bf(int64_t a1, int64_t a2, int32_t a3);
int64_t function_1184e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_118653(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1187b1(void);
int64_t function_1187d5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_118832(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1188ae(void);
int64_t function_1188ea(void);
int64_t function_1188f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_118956(int64_t a1);
int64_t function_11896b(void);
int64_t function_1189f9(void);
int64_t function_1189fc(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_118a10(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_118a12(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_118a4a(int64_t a1);
int64_t function_118a6b(void);
int64_t function_118a70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_118afc(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_118b23(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_118b2c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_118bae(int64_t a1, int64_t a2, int64_t a3);
int64_t function_118bdc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_118c14(int64_t a1, int64_t a2, int64_t a3);
int64_t function_118cb7(void);
int64_t function_118cd2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_118d5d(void);
int64_t function_118d9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_118db2(void);
int64_t function_118dc8(int64_t a1);
int64_t function_118de5(void);
int64_t function_118e50(int64_t a1, int64_t a2, int64_t a3);
int64_t function_118e62(void);
int64_t function_118e6f(int64_t a1, int64_t a2);
int64_t function_118f27(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_118f34(void);
int64_t function_118f82(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_119039(void);
int64_t function_119041(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1190f3(void);
int64_t function_11913e(void);
int64_t function_119161(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1191e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_119262(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_119311(int64_t a1);
int64_t function_119376(void);
int64_t function_1b1375eb();
int64_t function_1f9f15c();
int64_t function_37b09838();
int64_t function_4312d086();
int64_t function_4501cc();
int64_t function_4501df(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4501f3(int64_t a1);
int64_t function_450227(void);
int64_t function_45024a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45028f(void);
int64_t function_45029a(void);
int64_t function_4502b2(void);
int64_t function_4502d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4503d3(void);
int64_t function_4503f5(int64_t a1, int64_t a2);
int64_t function_450415(void);
int64_t function_450432(int64_t a1, int64_t a2);
int64_t function_45044d(void);
int64_t function_45044f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4504ac(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4504c6(int64_t a1);
int64_t function_450503(int64_t a1, int64_t a2, int64_t a3);
int64_t function_450530(int64_t a1, int64_t a2, int64_t a3);
int64_t function_450534(void);
int64_t function_450539(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_450589(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_450598(void);
int64_t function_4505c7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_450648(void);
int64_t function_450670(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_45071c(void);
int64_t function_450799(void);
int64_t function_4507d2(void);
int64_t function_4507d5(void);
int64_t function_45084d();
int64_t function_4509df(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_450a80(void);
int64_t function_450a84(void);
int64_t function_450a9e(int64_t a1);
int64_t function_450aca(void);
int64_t function_450afa(int64_t a1);
int64_t function_450b5b(void);
int64_t function_450b64(void);
int64_t function_450bb4(int64_t a1, int64_t a2);
int64_t function_450bbb(int64_t a1, int64_t a2);
int64_t function_450bd7(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_450c07(void);
int64_t function_450cbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_450cdd(void);
int64_t function_450ce6(void);
int64_t function_450cfb(void);
int64_t function_450d09(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_450df4(void);
int64_t function_450e82(void);
int64_t function_450e85(void);
int64_t function_450e89(void);
int64_t function_450ed0(void);
int64_t function_450ed4(int64_t a1, int64_t a2);
int64_t function_450ee8(void);
int64_t function_450f0f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_450fd5(void);
int64_t function_451006(void);
int64_t function_451016(int64_t a1);
int64_t function_45103b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_451048(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_451055(int64_t a1, int64_t a2);
int64_t function_451065(void);
int64_t function_45108d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_45115e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_5175cdda();
int64_t function_52b400();
int64_t function_52b8e0();
int64_t function_53c712();
int64_t function_53c71f();
int64_t function_53c750();
int64_t function_53c76d();
int64_t function_53c770();
int64_t function_53c847();
int64_t function_53c8c0();
int64_t function_53c920();
int64_t function_53c983();
int64_t function_53ca27();
int64_t function_53caaf();
int64_t function_53cb52();
int64_t function_53cbc5();
int64_t function_53cca1();
int64_t function_53cccf();
int64_t function_53ccf7();
int64_t function_53cd2b();
int64_t function_53cdee();
int64_t function_53cf5b();
int64_t function_53d00b(int64_t a1, int64_t a2);
int64_t function_53d020(int64_t a1);
int64_t function_53d048(int64_t a1);
int64_t function_53d060(int64_t a1, int64_t a2);
int64_t function_53d0a0(int64_t a1, int64_t a2);
int64_t function_53d0c8(int64_t a1, int64_t a2);
int64_t function_53d0f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_53d110(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_53d138(int64_t a1);
int64_t function_53d160(void);
int64_t function_53d170(void);
int64_t function_53d180(int64_t a1);
int64_t function_53d197(int64_t a1);
int64_t function_53d1b0(char a1);
int64_t function_53d1d0(int64_t a1);
int64_t function_53d1e0(void);
int64_t function_53d1f9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_53d470();
int64_t function_53d47b();
int64_t function_66ff51b2();
int64_t function_698d5f1b();
int64_t function_cdc60();
int64_t function_ffffffff8d0c5d75();
int64_t function_ffffffffb311c0a6();
int64_t function_ffffffffb456cc90();
int64_t function_ffffffffedb898aa();
int64_t function_fffffffff2485d38();
int64_t function_fffffffffdc95dbb();
int64_t unknown_10d0aa1a();
int64_t unknown_10e5950a();
int64_t unknown_1376c689();
int64_t unknown_1409c58a();
int64_t unknown_1e71c5e2();
int64_t unknown_3a355230();
int64_t unknown_3a5ae97b();
int64_t unknown_3aad010f();
int64_t unknown_3bc3d470();
int64_t unknown_4acaaa1c();
int64_t unknown_5c6790ef();
int64_t unknown_7a0aa5e4();
int64_t unknown_ffffffff8187e231();
int64_t unknown_ffffffff871778bb();
int64_t unknown_ffffffff8902193a();
int64_t unknown_ffffffff8f0eba10();
int64_t unknown_ffffffff91ef51b7();
int64_t unknown_ffffffff9ddca5ef();
int64_t unknown_ffffffff9e127b2d();
int64_t unknown_ffffffffa71770fc();
int64_t unknown_ffffffffad781136();
int64_t unknown_ffffffffb1d70608();
int64_t unknown_ffffffffb3b5ad71();
int64_t unknown_ffffffffb49ed756();
int64_t unknown_ffffffffcb0fcc17();
int64_t unknown_ffffffffd3c0823d();
int64_t unknown_ffffffffde6ae078();
int64_t unknown_ffffffffe3449251();
int64_t unknown_ffffffffe8ea40d8();
int64_t unknown_fffffffff47a754b();

// Address range: 0x1183bf - 0x1184e6
int64_t function_1183bf(int64_t a1, int64_t a2, int32_t a3) {
    // 0x1183bf
    int64_t v1; // bp-8, 0x1183bf
    int64_t v2 = (int64_t)&v1; // 0x118412
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x11841a
    int64_t * v4 = (int64_t *)v3; // 0x11841b
    int64_t v5 = *(int64_t *)(v2 + 32); // 0x11841e
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x118422
    *v6 = v5;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x118425
    *v7 = v5;
    int64_t * v8 = (int64_t *)(v2 + 16); // 0x118434
    int64_t v9 = *v8; // 0x118434
    *v4 = v9;
    *v7 = a1;
    *(int64_t *)(v2 - 32) = v3;
    *v6 = 0x5308a540;
    *v7 = v5;
    v1 = *v6;
    *v6 = 0x124b4de2;
    *v7 = v9;
    *v8 = *v6;
    int64_t v10 = *v4; // 0x1184a3
    *v6 = v10;
    *v7 = v10;
    *v4 = v2 + 8;
    return function_cdc60(*v7, a2);
}

// Address range: 0x1184e6 - 0x118653
int64_t function_1184e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x11757e; // bp-24, 0x118536
    int64_t v2 = (int64_t)&v1; // 0x118541
    int64_t v3 = v2 - 16; // 0x118570
    *(int64_t *)v3 = 0x14d1cc5e;
    int64_t v4 = v2 - 24; // 0x118575
    int64_t * v5 = (int64_t *)v4; // 0x118575
    *v5 = 0x24ad89bf;
    int64_t * v6 = (int64_t *)(v2 - 32); // 0x11857a
    int64_t v7 = *(int64_t *)(v2 + 16); // 0x118589
    *v5 = v7;
    *v6 = v7;
    int64_t * v8 = (int64_t *)(v2 - 40); // 0x118590
    *v8 = v7;
    *v5 = 0x463c6efd;
    *v6 = 0x29b56aae;
    *v8 = v7;
    *(int64_t *)(v2 - 8) = *v5;
    *v5 = a1;
    *v6 = v1;
    *v8 = v4;
    *(int64_t *)(v2 + 8) = v1;
    *v8 = a5;
    *v6 = v3;
    return function_cdc60(*v6, a2);
}

// Address range: 0x118653 - 0x1187b1
int64_t function_118653(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x118653
    int64_t v1; // bp-64, 0x118653
    v1 = (int64_t)&v1;
    return function_cdc60(a1, a2);
}

// Address range: 0x1187b1 - 0x1187b6
int64_t function_1187b1(void) {
    // 0x1187b1
    int64_t result; // 0x1187b1
    return result;
}

// Address range: 0x1187d5 - 0x118832
int64_t function_1187d5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1187d5
    __readfsbyte(0x46fc8887);
    unknown_1e71c5e2();
    uint64_t v1 = a4 / 256; // 0x1187e1
    int64_t v2; // 0x1187d5
    *(char *)a3 = (char)v2 - (char)v1;
    int64_t v3; // 0x1187d5
    char * v4 = (char *)(v2 + (int64_t)&v3 & 0xffffffff); // 0x118800
    *v4 = *v4 ^ -90;
    unknown_3aad010f();
    int64_t v5; // 0x1187d5
    int32_t v6 = *(int32_t *)(int64_t)(*(int32_t *)&v5 & (int32_t)a5 + 1); // 0x118813
    __asm_outsd(3525, v6);
    __asm_out(-53, (int32_t)unknown_4acaaa1c());
    unknown_ffffffff9e127b2d();
    *(char *)a1 = __asm_insb(((int16_t)v1 + 197) % 256 | 3328);
    return function_ffffffffb311c0a6();
}

// Address range: 0x118832 - 0x118885
int64_t function_118832(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x118832
    int64_t v1; // 0x118832
    uint64_t v2 = v1;
    int64_t v3 = unknown_ffffffff8902193a(); // 0x118833
    *(int32_t *)a1 = __readfsdword(a2);
    bool v4; // 0x118832
    int64_t v5 = v4 ? -4 : 4; // 0x11883c
    int64_t v6 = v5 + a1; // 0x11883c
    int32_t v7 = v3; // 0x11883f
    int32_t v8 = 0x10000 * v7 >> 16; // 0x118840
    char v9 = (char)v8 - 40; // 0x118841
    *(int32_t *)v6 = v8 & -256 | (int32_t)v9;
    int64_t v10 = v6 + v5; // 0x118843
    unknown_fffffffff47a754b(v10, v5 + a2, v7 >> 31);
    int64_t v11 = unknown_5c6790ef(); // 0x11884a
    if (v9 >= 1) {
        // 0x118851
        return function_1f9f15c();
    }
    int64_t v12 = a4 & -256 | (int64_t)(*(char *)(a2 - 68) | (char)a4); // 0x118839
    __asm_out(115, (int32_t)v11);
    char * v13 = (char *)(v10 + 0x33762d9d + 8 * v12); // 0x118867
    *v13 = *v13 | (char)(v2 / 256);
    unknown_ffffffffde6ae078();
    __asm_rcl(*(char *)v12);
    return v2 & 0xffffffff;
}

// Address range: 0x1188ae - 0x1188af
int64_t function_1188ae(void) {
    // 0x1188ae
    int64_t result; // 0x1188ae
    return result;
}

// Address range: 0x1188ea - 0x1188eb
int64_t function_1188ea(void) {
    // 0x1188ea
    int64_t result; // 0x1188ea
    return result;
}

// Address range: 0x1188f4 - 0x118935
int64_t function_1188f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    bool v2; // 0x1188f4
    if (v2) {
        function_1188ae();
    }
    // 0x1188f6
    unknown_ffffffffa71770fc();
    if (v2) {
        function_1188ea();
    }
    // 0x118902
    *(int32_t *)-0x5fbc6f02 = *(int32_t *)-0x5fbc6f02 + (int32_t)a4;
    unknown_ffffffff8f0eba10();
    int16_t v3 = a3; // 0x11891d
    __asm_in(v3);
    *(int32_t *)a1 = (int32_t)a2 + (int32_t)a1;
    unknown_ffffffff8187e231();
    __asm_in(v3);
    int32_t result = __asm_in_133(16); // 0x118931
    *(char *)a1 = *(char *)&v1;
    return result;
}

// Address range: 0x118956 - 0x118961
int64_t function_118956(int64_t a1) {
    // 0x118956
    int64_t v1; // 0x118956
    int64_t v2 = 0x100000000 * v1 >> 32; // 0x118956
    *(int32_t *)0x4c177192 = *(int32_t *)0x4c177192 + (int32_t)v1;
    return v2 * v2 & 0xffffffff;
}

// Address range: 0x11896b - 0x11896e
int64_t function_11896b(void) {
    // 0x11896b
    int64_t result; // 0x11896b
    return result;
}

// Address range: 0x1189f9 - 0x1189fa
int64_t function_1189f9(void) {
    // 0x1189f9
    int64_t result; // 0x1189f9
    return result;
}

// Address range: 0x1189fc - 0x118a0f
int64_t function_1189fc(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x1189fc
    int64_t v1; // 0x1189fc
    char * v2 = (char *)(v1 + 0x35374196); // 0x1189fc
    unsigned char v3 = *v2; // 0x1189fc
    unsigned char v4 = v3 + (char)(a3 / 256); // 0x1189fc
    *v2 = v4;
    if ((v4 < v3 ? -62 : -63) != (char)unknown_ffffffffb1d70608()) {
        function_1189f9();
    }
    // 0x118a0c
    bool v5; // 0x1189fc
    return function_118a12(a1, (v5 ? -1 : 1) + a2, a3, v1);
}

// Address range: 0x118a10 - 0x118a12
int64_t function_118a10(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x118a10
    int64_t result; // 0x118a10
    *(int32_t *)a4 = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x118a12 - 0x118a22
int64_t function_118a12(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x118a12
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x118a12
    return result;
}

// Address range: 0x118a4a - 0x118a52
int64_t function_118a4a(int64_t a1) {
    // 0x118a4a
    unknown_ffffffffe3449251(a1);
    int64_t v1; // 0x118a4a
    return function_118a70(v1, v1, v1, v1, (int64_t)&g5);
}

// Address range: 0x118a6b - 0x118a70
int64_t function_118a6b(void) {
    // 0x118a6b
    return unknown_ffffffffb3b5ad71();
}

// Address range: 0x118a70 - 0x118ae9
int64_t function_118a70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3; // 0x118a70
    char * v4 = (char *)(v3 - 0x71e05367); // 0x118a70
    char v5 = a4; // 0x118a70
    *v4 = *v4 + v5;
    __asm_sti(a1);
    int32_t * v6 = (int32_t *)(v3 - 0x17fe17a9); // 0x118a77
    *v6 = *v6 + (int32_t)a2;
    int32_t v7 = *(int32_t *)0x10ed0e84 + (int32_t)a1; // 0x118a7d
    *(int32_t *)0x10ed0e84 = v7;
    int64_t result = unknown_1376c689(); // 0x118a83
    if (v7 == 0) {
        // 0x118a8a
        *(char *)v2 = *(char *)&v1;
        bool v8; // 0x118a70
        int64_t v9 = v8 ? -1 : 1; // 0x118a8c
        *(char *)(v2 + v9) = *(char *)(v1 + v9);
        return result & -256 | (int64_t)__asm_in_134(64);
    }
    int32_t v10 = *(int32_t *)&v2; // 0x118acd
    int64_t v11 = v2 + ((a5 & (int64_t)&g1) == 0 ? 4 : -4); // 0x118acd
    v2 = v11;
    if (v10 == (int32_t)result) {
        // 0x118abf
        return result;
    }
    int64_t result2 = unknown_ffffffffe8ea40d8(v11); // 0x118ad2
    *(int32_t *)0x824fde = *(int32_t *)0x824fde + (int32_t)v11;
    int64_t v12 = a4 & -256 | (int64_t)(*(char *)(result2 + 111) + v5); // 0x118add
    int32_t * v13 = (int32_t *)(v12 - 13); // 0x118ae4
    *v13 = *v13 + (int32_t)v12;
    return result2;
}

// Address range: 0x118afc - 0x118b23
int64_t function_118afc(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x118afc
    int64_t v1; // 0x118afc
    int32_t * v2 = (int32_t *)(v1 + 0x368cba0a); // 0x118afc
    *v2 = *v2 + (int32_t)v1;
    int64_t v3 = __asm_hlt(a1); // 0x118b02
    char v4 = *(char *)(a4 - 24 + 2 * a3); // 0x118b03
    int32_t * v5 = (int32_t *)(v1 - 0x7f00f85f); // 0x118b07
    *v5 = *v5 + (int32_t)a2;
    int32_t * v6 = (int32_t *)((256 * (int64_t)(v4 | (char)(a3 / 256)) | a3 & -0xff01) - 59); // 0x118b1d
    *v6 = *v6 + (int32_t)a4;
    return v3 + 0x5501e828 & 0xffffffff;
}

// Address range: 0x118b23 - 0x118b2c
int64_t function_118b23(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = a4 & 0xffffffff; // 0x118b23
    int32_t * v1 = (int32_t *)(result - 41); // 0x118b26
    int64_t v2; // 0x118b23
    *v1 = *v1 + (int32_t)v2;
    return result;
}

// Address range: 0x118b2c - 0x118b36
int64_t function_118b2c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x118b2c
    int64_t v1; // 0x118b2c
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x118b2c
    int64_t v3 = v2 ? -4 : 4; // 0x118b2e
    int64_t v4 = v2 ? -1 : 1; // 0x118b2f
    return unknown_ffffffffad781136(v3 + a1 + v4, v3 + a2, a3 - 256 * v1 & 0xff00 | a3 & -0xff01);
}

// Address range: 0x118bae - 0x118bb3
int64_t function_118bae(int64_t a1, int64_t a2, int64_t a3) {
    // 0x118bae
    int64_t result; // 0x118bae
    return result;
}

// Address range: 0x118bdc - 0x118bfc
int64_t function_118bdc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x118bdc
    *(char *)a3 = (char)a4;
    int64_t v1; // 0x118bdc
    *(int32_t *)0x6b1e95764bfc7a1b = (int32_t)v1;
    return unknown_ffffffff9ddca5ef();
}

// Address range: 0x118c14 - 0x118c20
int64_t function_118c14(int64_t a1, int64_t a2, int64_t a3) {
    // 0x118c14
    unknown_10d0aa1a(a1, a2, a3);
    int64_t v1; // 0x118c14
    *(int32_t *)a2 = (int32_t)v1 - (int32_t)a3;
    return function_5175cdda();
}

// Address range: 0x118cb7 - 0x118cb8
int64_t function_118cb7(void) {
    // 0x118cb7
    int64_t result; // 0x118cb7
    return result;
}

// Address range: 0x118cd2 - 0x118d55
int64_t function_118cd2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x118cd2
    int64_t v1; // 0x118cd2
    char v2 = v1;
    *(char *)v1 = 2 * v2;
    char * v3 = (char *)(2 * v1 - 63); // 0x118ce4
    *v3 = *v3 + (char)(v1 / 256);
    int64_t v4; // 0x118cd2
    unsigned char v5 = *(char *)&v4; // 0x118ce8
    unsigned char v6 = v5 + (char)v1; // 0x118ce8
    *(char *)v4 = v6;
    if (v6 >= v5) {
        char * v7 = (char *)(a2 - 0x43d4635); // 0x118d4a
        *v7 = *v7 + (char)((int64_t)&g4 >> 8);
        return unknown_ffffffffb49ed756();
    }
    // 0x118cef
    *(char *)0x7cf7b8b2f0158c8 = v2;
    char v8 = *(char *)-0x752c7a01; // 0x118cf8
    *(char *)-0x752c7a01 = v8 + (char)((int64_t)&g4 >> 8);
    int32_t v9 = __asm_in((int16_t)a3); // 0x118d03
    return 0x10000 * (v9 | (int32_t)&g4 & 0xff00) >> 16;
}

// Address range: 0x118d5d - 0x118d5e
int64_t function_118d5d(void) {
    // 0x118d5d
    int64_t result; // 0x118d5d
    return result;
}

// Address range: 0x118d9f - 0x118da9
int64_t function_118d9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x118d9f
    int64_t result; // 0x118d9f
    return result;
}

// Address range: 0x118db2 - 0x118db3
int64_t function_118db2(void) {
    // 0x118db2
    int64_t result; // 0x118db2
    return result;
}

// Address range: 0x118dc8 - 0x118dcf
int64_t function_118dc8(int64_t a1) {
    // 0x118dc8
    int64_t v1; // 0x118dc8
    bool v2; // 0x118dc8
    if (!v2) {
        v1 = function_118db2();
    }
    // 0x118dca
    return 2 * v1 & 0xfffffffe;
}

// Address range: 0x118de5 - 0x118dea
int64_t function_118de5(void) {
    // 0x118de5
    return function_1b1375eb();
}

// Address range: 0x118e50 - 0x118e55
int64_t function_118e50(int64_t a1, int64_t a2, int64_t a3) {
    // 0x118e50
    int64_t result; // 0x118e50
    return result;
}

// Address range: 0x118e62 - 0x118e63
int64_t function_118e62(void) {
    // 0x118e62
    int64_t result; // 0x118e62
    return result;
}

// Address range: 0x118e6f - 0x118e8f
int64_t function_118e6f(int64_t a1, int64_t a2) {
    // 0x118e6f
    int64_t v1; // 0x118e6f
    bool v2; // 0x118e6f
    if (true == !v2) {
        v1 = function_118e62();
    }
    unsigned char v3 = *(char *)0x13d006e19a71a00; // 0x118e77
    int64_t v4 = v2 ? -4 : 4; // 0x118e84
    int64_t v5; // 0x118e6f
    return function_ffffffffedb898aa(((v1 ^ v5) & 0xffffff00 | (int64_t)v3) + v4, 0xc43e0b08);
}

// Address range: 0x118f27 - 0x118f31
int64_t function_118f27(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x4607e8b4); // 0x118f27
    *v1 = *v1 + (int32_t)a2;
    int64_t result; // 0x118f27
    return result;
}

// Address range: 0x118f34 - 0x118f35
int64_t function_118f34(void) {
    // 0x118f34
    int64_t result; // 0x118f34
    return result;
}

// Address range: 0x118f82 - 0x118fed
int64_t function_118f82(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x118f82
    int64_t v1; // 0x118f82
    int64_t v2 = v1;
    int64_t v3 = a2;
    *(int32_t *)v2 = (int32_t)v2 + 61;
    int32_t * v4 = (int32_t *)(4 * v1 + 0x9ad8fbe); // 0x118f86
    int32_t v5 = v1; // 0x118f86
    *v4 = *v4 + v5;
    int32_t v6 = *(int32_t *)&v3 + (int32_t)a3; // 0x118f92
    *(int32_t *)a2 = v6;
    int64_t v7 = a4 - 1; // 0x118f95
    int64_t v8 = v2 & -256 | (int64_t)__asm_in_135((int16_t)a3); // 0x118f95
    if (v7 != 0 == v6 == 0) {
        v8 = function_118f34();
    }
    char * v9 = (char *)(a4 - 95 + 8 * v1); // 0x118fa2
    unsigned char v10 = *v9; // 0x118fa2
    unsigned char v11 = v10 + (char)(v8 / 256); // 0x118fa2
    *v9 = v11;
    unsigned char v12 = *(char *)&v3 - 8 + (char)(v11 < v10); // 0x118fd7
    int64_t result = v8 & -256 | (int64_t)v12; // 0x118fd7
    int32_t * v13 = (int32_t *)result; // 0x118fdb
    uint32_t v14 = *v13; // 0x118fdb
    uint32_t v15 = v14 + v5; // 0x118fdb
    *v13 = v15;
    *(char *)a1 = v12;
    unsigned char v16 = (char)v7 % 32; // 0x118fe3
    if (v16 != 0) {
        unsigned char v17 = *(char *)0x27a44b6; // 0x118fe3
        *(char *)0x27a44b6 = (char)(v15 < v14) << v16 - 1 | v17 << v16 | (char)((int16_t)v17 >> (int16_t)(9 - v16));
    }
    *(char *)-0x50358112 = *(char *)-0x50358112 + 34;
    return result;
}

// Address range: 0x119039 - 0x11903a
int64_t function_119039(void) {
    // 0x119039
    int64_t result; // 0x119039
    return result;
}

// Address range: 0x119041 - 0x1190cc
int64_t function_119041(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a2;
    bool v2; // 0x119041
    if (!v2) {
        if (v2) {
            function_119039();
        }
        int64_t v3 = unknown_ffffffff871778bb(); // 0x1190b5
        *(int32_t *)a1 = __asm_insd((int16_t)a3);
        return (v3 & 200) + 69 & 205 | v3 & 0x7d70de00;
    }
    char v4 = a1;
    int64_t v5; // 0x119041
    uint64_t v6 = v5 + 91; // 0x119043
    int64_t result2 = v6 % 256 | v5 & -256; // 0x119043
    int64_t v7 = (v5 | v5) & 0xffffffff; // 0x119046
    char v8 = v6; // 0x11904d
    int64_t v9 = (v2 ? -1 : 1) + a1; // 0x11904d
    if (v4 > v8) {
        // 0x11909c
        *(int64_t *)(v7 - 8) = result2;
        int64_t result = __asm_hlt(v9); // 0x11909e
        char * v10 = (char *)v9; // 0x11909f
        *v10 = *v10 - (char)a3;
        *(int64_t *)v9 = v1;
        return result;
    }
    int64_t * v11 = (int64_t *)(v7 - 8);
    if (v4 >= v8) {
        // 0x119085
        *v11 = 0x68d7eb00;
        char * v12 = (char *)(v9 + 0x36ef2f0d + 2 * result2); // 0x11908a
        *v12 = *v12 + (char)(a3 / 256);
        return result2;
    }
    // 0x119053
    *v11 = result2;
    unknown_3bc3d470((int32_t)v9 - *(int32_t *)-0x17246f99);
    __asm_outsb((int16_t)a3, *(char *)&v1);
    *v11 = v7;
    return *v11;
}

// Address range: 0x1190f3 - 0x1190f4
int64_t function_1190f3(void) {
    // 0x1190f3
    int64_t result; // 0x1190f3
    return result;
}

// Address range: 0x11913e - 0x119142
int64_t function_11913e(void) {
    // 0x11913e
    int64_t result; // 0x11913e
    return result;
}

// Address range: 0x119161 - 0x119174
int64_t function_119161(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x119161
    int64_t v1; // 0x119161
    int64_t result = v1 & -256 | (int64_t)*(char *)0x1e8007971f0fe0a; // 0x11916a
    if (a4 != 1) {
        result = function_1190f3();
    }
    // 0x11916c
    return result;
}

// Address range: 0x1191e8 - 0x11923d
int64_t function_1191e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1191e8
    int64_t v1; // 0x1191e8
    uint64_t v2 = v1;
    int64_t v3 = a1;
    char v4 = v2; // 0x1191e8
    __asm_out_136(115, v4);
    char * v5 = (char *)(a4 + 0x34801e8); // 0x1191ec
    *v5 = *v5 + (char)(v2 / 256);
    char v6 = *(char *)&v3; // 0x1191f2
    __asm_outsd((int16_t)a3, *(int32_t *)0x735dbee5);
    *(int32_t *)0x1e800ab00800011 = (int32_t)(v2 & 0xffffff00 | (int64_t)(v6 & (v4 ^ -21))) - 0x5ffe17d2;
    int64_t v7 = unknown_ffffffffcb0fcc17(); // 0x11920e
    int32_t v8 = v7; // 0x119213
    int64_t v9; // 0x1191e8
    *(char *)v9 = *(char *)&v9 + (char)(v8 >> 31);
    __writegsdword(-0x22addb09aefe17ec, v8);
    *(int32_t *)v3 = 0x735dbee5;
    int64_t v10 = (a5 & (int64_t)&g1) == 0 ? 4 : -4; // 0x119227
    int64_t v11 = unknown_3a355230(v3 + v10, v7 & 0xffffffff); // 0x11922a
    unsigned char v12 = *(char *)((int64_t)((int32_t)v11 >> 31) + 0x1e80b3b); // 0x119233
    int16_t v13 = v11; // 0x119233
    int16_t v14 = v12; // 0x119233
    return v11 & -0x10000 | (int64_t)(v13 / v14 % 256) | (int64_t)(256 * (v13 % v14));
}

// Address range: 0x119262 - 0x119310
int64_t function_119262(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3 = a1;
    int64_t result = a5;
    __asm_int(-34);
    unknown_3a5ae97b();
    unknown_1409c58a();
    uint64_t v4 = __asm_wait(); // 0x11928b
    char * v5 = (char *)(a2 - 0x17f75dc1); // 0x11928c
    unsigned char v6 = *v5; // 0x11928c
    *v5 = (char)v4;
    int32_t * v7 = (int32_t *)(a3 + 111); // 0x119292
    int32_t v8 = *v7; // 0x119292
    int64_t v9; // 0x119262
    int32_t v10 = v9; // 0x119292
    int32_t v11 = v8 + v10; // 0x119292
    *v7 = v11;
    int64_t v12 = a4 - 1; // 0x119295
    if (v12 == 0 || v11 == 0) {
        // 0x119297
        return result;
    }
    int64_t v13; // bp-8, 0x119262
    if (v11 < 0 == ((v11 ^ v8) & (v11 ^ v10)) < 0) {
        // 0x1192a9
        v13 = (int64_t)&result;
        int64_t result2 = unknown_ffffffff91ef51b7(); // 0x1192b1
        char * v14 = (char *)((v12 & 0xffffffff) + 5); // 0x1192b6
        *v14 = *v14 + 10;
        return result2;
    }
    int64_t v15 = v4 & -256; // 0x11928c
    int32_t * v16 = (int32_t *)((v15 | (int64_t)v6) + 0x68009176); // 0x1192c1
    *v16 = *v16 + 0x139c0ad0;
    unsigned char v17 = *(char *)&v3 | v6; // 0x1192c7
    __asm_out(-16, (int32_t)(v15 | (int64_t)v17));
    uint64_t v18 = v4 / 256; // 0x1192cc
    int32_t * v19 = (int32_t *)(v2 - 0x597b360b); // 0x1192ce
    uint32_t v20 = *v19; // 0x1192ce
    uint32_t v21 = v20 + (int32_t)v2; // 0x1192ce
    *v19 = v21;
    v13 = -0x7a88df6;
    unsigned char v22 = v17 % 32;
    bool v23 = v21 < v20; // 0x1192da
    if (v22 != 0) {
        int32_t * v24 = (int32_t *)((v18 + v12) % 256 | v12 & 0xffffff00); // 0x1192da
        uint32_t v25 = *v24; // 0x1192da
        uint32_t v26 = (int32_t)v22; // 0x1192da
        uint32_t v27 = v25 >> 32 - v26 | v25 << v26; // 0x1192da
        *v24 = v27;
        v23 = v27 % 2 != 0;
    }
    int32_t v28 = *(int32_t *)&v1; // 0x1192dc
    int64_t v29 = v1;
    *(int32_t *)v29 = v28 + (int32_t)v23 + (int32_t)v29;
    int64_t v30 = unknown_7a0aa5e4(); // 0x1192de
    char * v31 = (char *)(v1 + 0x8d1c7f57); // 0x1192e3
    *v31 = *v31 + (char)(v1 / 256);
    int32_t v32 = *(int32_t *)&v2; // 0x1192ec
    *(int32_t *)v2 = v32 + (int32_t)(int64_t)&v13;
    char * v33 = (char *)(((v30 + v18) % 256 | v30 & -256) - 0x17b06497); // 0x1192f5
    *v33 = *v33 + (char)v18;
    unknown_10e5950a();
    __asm_in_135((int16_t)v1);
    return __asm_iretd();
}

// Address range: 0x119311 - 0x11931f
int64_t function_119311(int64_t a1) {
    // 0x119311
    int64_t v1; // 0x119311
    *(char *)a1 = (char)(__asm_iretd() / 256 ^ v1);
    return function_4312d086();
}

// Address range: 0x119376 - 0x119377
int64_t function_119376(void) {
    // 0x119376
    int64_t result; // 0x119376
    return result;
}

// Address range: 0x4501df - 0x4501f2
int64_t function_4501df(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4501df
    int64_t result; // 0x4501df
    bool v1; // 0x4501df
    if (true == !v1) {
        result = function_4501cc();
    }
    // 0x4501e1
    *(int32_t *)0x2903463d = *(int32_t *)0x2903463d + (int32_t)a2;
    int32_t * v2 = (int32_t *)(a1 + 0x446f055c); // 0x4501ec
    *v2 = *v2 - (int32_t)a3;
    return result;
}

// Address range: 0x4501f3 - 0x4501f7
int64_t function_4501f3(int64_t a1) {
    // 0x4501f3
    int64_t result; // 0x4501f3
    return result;
}

// Address range: 0x450227 - 0x450228
int64_t function_450227(void) {
    // 0x450227
    int64_t result; // 0x450227
    return result;
}

// Address range: 0x45024a - 0x450257
int64_t function_45024a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45024a
    __asm_outsd((int16_t)a3, (int32_t)a2);
    bool v1; // 0x45024a
    if (v1 || v1) {
        function_450227();
    }
    // 0x45024d
    __readfsdword(a2);
    return function_45029a();
}

// Address range: 0x45028f - 0x450290
int64_t function_45028f(void) {
    // 0x45028f
    int64_t result; // 0x45028f
    return result;
}

// Address range: 0x45029a - 0x45029b
int64_t function_45029a(void) {
    // 0x45029a
    int64_t result; // 0x45029a
    return result;
}

// Address range: 0x4502b2 - 0x4502b3
int64_t function_4502b2(void) {
    // 0x4502b2
    int64_t result; // 0x4502b2
    return result;
}

// Address range: 0x4502d9 - 0x4503d1
int64_t function_4502d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x100000000 * a2 >> 32; // 0x4502d9
    int64_t v2 = 0x58077b63 * v1; // 0x4502d9
    int64_t result; // 0x4502d9
    if (v2 != 0x58077b6300000000 * v1 >> 32) {
        // 0x45032b
        *(int32_t *)a1 = __asm_insd((int16_t)a3);
        return result;
    }
    // 0x4502e1
    *(char *)(result + a1) = 1;
    int64_t v3; // 0x4502d9
    bool v4; // 0x4502d9
    if (!v4) {
        v3 = function_45028f();
    }
    char * v5 = (char *)(a4 - 0xbe8284e); // 0x4502e7
    char v6 = v3; // 0x4502e7
    *v5 = *v5 - v6;
    unsigned char v7 = v6 + 45; // 0x4502ed
    int64_t result2 = v3 & -256 | (int64_t)v7; // 0x4502ed
    int64_t v8 = a4 - 1; // 0x4502f0
    if (v8 != 0 && v7 != 0) {
        // 0x450368
        return result2;
    }
    uint32_t v9 = (int32_t)result2 | -0x63bb3e93; // 0x4502f6
    char v10 = v9; // 0x4502f6
    if (llvm_ctpop_i8(v10) % 2 == 0) {
        int32_t * v11 = (int32_t *)(result + 0x3a0b1e37); // 0x450371
        int32_t v12 = *v11 & (int32_t)v8; // 0x450371
        *v11 = v12;
        if (a4 != 2 == v12 == 0) {
            // 0x4503bb
            *(int64_t *)(result - 8) = a1 & 0xffffffff;
            return (a1 & 0x7074c98f) + 0xdbe398cd & 0xfffffbdf;
        }
        // 0x45037e
        *(int16_t *)(result - 2) = (int16_t)v9;
        return 0x10000 * (int32_t)a1 >> 16;
    }
    int64_t v13 = v2 & 0xffffffff; // 0x4502d9
    int64_t v14 = v9; // 0x4502f6
    char * v15 = (char *)(result + 0x77374517); // 0x4502ff
    *v15 = *v15 - (char)(result / 256);
    uint32_t v16 = *(int32_t *)(v13 + 4 * v8); // 0x450305
    char v17 = *(char *)(v14 + 0x680f947); // 0x450309
    char * v18 = (char *)((256 * (int64_t)(v17 + (char)(v9 / 256) + (char)(v16 < (int32_t)a1)) | v14 & 0xffff00ff) + 8 * a6); // 0x450310
    *v18 = *v18 + (char)result;
    char * v19 = (char *)(v13 - 128); // 0x450313
    *v19 = *v19 + v10;
    return function_fffffffff2485d38();
}

// Address range: 0x4503d3 - 0x4503df
int64_t function_4503d3(void) {
    // 0x4503d3
    int64_t v1; // 0x4503d3
    return v1 + 0x45abf4c9 & 0xffffffff;
}

// Address range: 0x4503f5 - 0x4503fd
int64_t function_4503f5(int64_t a1, int64_t a2) {
    // 0x4503f5
    int64_t result; // 0x4503f5
    int64_t * v1 = (int64_t *)(result - 65); // 0x4503f5
    *v1 = *v1 | a2;
    return result;
}

// Address range: 0x450415 - 0x450416
int64_t function_450415(void) {
    // 0x450415
    int64_t result; // 0x450415
    return result;
}

// Address range: 0x450432 - 0x450447
int64_t function_450432(int64_t a1, int64_t a2) {
    // 0x450432
    int64_t v1; // 0x450432
    uint64_t result = v1 & 0xb8f48eb | 0xf470b714; // 0x45043a
    char * v2 = (char *)(8 * a1 + 0x39d13fb2 + v1); // 0x45043f
    *v2 = *v2 + (char)(result / 256);
    return result;
}

// Address range: 0x45044d - 0x45044e
int64_t function_45044d(void) {
    // 0x45044d
    int64_t result; // 0x45044d
    return result;
}

// Address range: 0x45044f - 0x4504ab
int64_t function_45044f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45044f
    int64_t v1; // 0x45044f
    bool v2; // 0x45044f
    if (!v2) {
        v1 = function_450415();
    }
    if (a4 != 1 == v2) {
        // 0x450460
        return v1 + 0xf2003b00 & 0xffffffff;
    }
    // 0x450453
    return function_ffffffff8d0c5d75();
}

// Address range: 0x4504ac - 0x4504c3
int64_t function_4504ac(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4504ac
    int64_t result; // 0x4504ac
    __asm_outsd((int16_t)a3, (int32_t)result);
    *(int32_t *)(a2 - 0x759dc959) = (int32_t)a2;
    return result;
}

// Address range: 0x4504c6 - 0x4504cf
int64_t function_4504c6(int64_t a1) {
    // 0x4504c6
    int64_t v1; // 0x4504c6
    return function_450530(v1, a1, v1);
}

// Address range: 0x450503 - 0x45052e
int64_t function_450503(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = (int32_t)a2; // 0x450503
    int64_t v2; // 0x450503
    uint32_t v3 = (int32_t)v2; // 0x450503
    int32_t v4 = v3 + v1; // 0x450503
    if (v4 < 0) {
        // 0x450508
        return v2 & -0xff01 | 256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v4 < v1) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v3 % 16 + v1 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8((char)v4) % 2 == 0)) | 512;
    }
    int64_t v5 = v4; // 0x450503
    int64_t v6 = (int64_t)(*(int32_t *)(8 * v5 + a3) | 0x25fe5617); // 0x450513
    int64_t v7 = v5; // 0x450513
    int64_t v8; // 0x450503
    int64_t v9 = v8 & -256 | 94; // 0x45051c
    int32_t * v10 = (int32_t *)v9; // 0x450520
    *v10 = *v10 + (int32_t)v9;
    v7 &= *(int64_t *)(v2 - 68);
    int64_t result = 0xda219b4b; // 0x450526
    if (v7 < 1) {
        result = function_450589(v6, v7, *(int64_t *)v2, v2);
    }
    // 0x450528
    while (v7 != 0) {
        // 0x450516
        v9 = v9 & -256 | 94;
        v10 = (int32_t *)v9;
        *v10 = *v10 + (int32_t)v9;
        v7 &= *(int64_t *)(v2 - 68);
        result = 0xda219b4b;
        if (v7 < 1) {
            result = function_450589(v6, v7, *(int64_t *)v2, v2);
        }
    }
    // 0x45052a
    return result;
}

// Address range: 0x450530 - 0x450533
int64_t function_450530(int64_t a1, int64_t a2, int64_t a3) {
    // 0x450530
    int64_t result; // 0x450530
    return result;
}

// Address range: 0x450534 - 0x450539
int64_t function_450534(void) {
    // 0x450534
    return function_ffffffffb456cc90();
}

// Address range: 0x450539 - 0x45057e
int64_t function_450539(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x450539
    int64_t result; // 0x450539
    bool v1; // 0x450539
    if (v1) {
        return result;
    }
    int16_t v2 = a3; // 0x450546
    char v3 = result; // 0x450546
    __asm_out_137(v2, v3);
    if (v1) {
        int32_t v4 = 0x4000 * (int32_t)v1 | 2048 * (int32_t)v1 | 1024 * (int32_t)v1 | 512 * (int32_t)v1 | 256 * (int32_t)v1 | 128 * (int32_t)v1 | 16 * (int32_t)v1 | (int32_t)v1 | 4 * (int32_t)v1 | 2; // 0x450539
        int32_t * v5 = (int32_t *)((int64_t)v4 + 0x1d5415ed); // 0x45055b
        *v5 = *v5 & v4;
        int32_t * v6 = (int32_t *)(2 * a3 + 0x59e7b17d + result); // 0x450561
        *v6 = 2 * *v6;
        __asm_out_137(v2, v3);
        return result + 0x69b625f8 & 0xffffffff;
    }
    unsigned char v7 = (char)a4 % 32; // 0x450549
    if (v7 != 0) {
        char * v8 = (char *)(2 * a4 + 0x3912dfc1); // 0x450549
        unsigned char v9 = *v8; // 0x450549
        *v8 = v9 >> v7 | v9 << 8 - v7;
    }
    return result;
}

// Address range: 0x450589 - 0x450597
int64_t function_450589(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x450589
    int64_t v1; // 0x450589
    int64_t v2 = v1 & 137 | 118; // 0x45058b
    return v1 & 0x47faae00 | v2 + 99 + ((char)v2 < 157 ? 72 : 73) & 191 | 0xb8055140;
}

// Address range: 0x450598 - 0x4505a4
int64_t function_450598(void) {
    // 0x450598
    int64_t v1; // 0x450598
    __asm_hlt(v1);
    int64_t result = v1 & 0xffffffff; // 0x45059b
    char * v2 = (char *)(2 * result + v1); // 0x45059e
    bool v3; // 0x450598
    *v2 = (char)v3 + (char)(v1 / 256) + *v2;
    return result;
}

// Address range: 0x4505c7 - 0x4505cf
int64_t function_4505c7(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 2); // 0x4505c7
    int64_t v2; // 0x4505c7
    *v1 = *v1 ^ (int32_t)v2;
    return function_698d5f1b();
}

// Address range: 0x450648 - 0x450654
int64_t function_450648(void) {
    // 0x450648
    return (int64_t)*(int32_t *)0x606eb282155e6192;
}

// Address range: 0x450670 - 0x450705
int64_t function_450670(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3; // bp-8, 0x450670
    int64_t v2; // 0x450670
    unsigned char v3 = (char)v2; // 0x450671
    unsigned char v4 = v3 + 106; // 0x450671
    if (llvm_ctpop_i8(v4) % 2 == 0) {
        int32_t * v5 = (int32_t *)(a3 - 51); // 0x4506f3
        *v5 = *v5 & (int32_t)a1;
        __asm_in_133(44);
        __asm_in_133(-116);
        return 0x10000 * (int32_t)unknown_ffffffffd3c0823d() - 0x3efd0000 >> 16;
    }
    int64_t v6; // bp-16, 0x450670
    if (v3 > 149 || v4 == 0) {
        // 0x450677
        v6 = (int64_t)&v1;
        return function_fffffffffdc95dbb();
    }
    int64_t v7 = v2 & -256 | (int64_t)v4; // 0x450671
    __asm_frstor(*(int864_t *)(v2 - 97));
    char * v8 = (char *)(a1 + 0x25547347); // 0x4506bb
    *v8 = *v8 ^ (char)a3;
    v6 = a3;
    int64_t result = (int64_t)&v6; // 0x4506c1
    int32_t v9 = *(int32_t *)(4 * a2 - 7 + result); // 0x4506c2
    char v10 = result; // 0x4506ce
    unsigned char v11 = llvm_ctpop_i8(v10 | 48); // 0x4506ce
    __asm_out_136(109, v10);
    *(int64_t *)((v7 & 0xffffffff) - 8) = (int64_t)(-0x59d99ea0 * v9);
    if (v11 % 2 != 0) {
        // 0x4506d9
        return __asm_iretd();
    }
    // 0x4506ae
    *(int32_t *)a1 = __asm_insd(96 * (int16_t)v7);
    return result;
}

// Address range: 0x45071c - 0x45071d
int64_t function_45071c(void) {
    // 0x45071c
    int64_t result; // 0x45071c
    return result;
}

// Address range: 0x450799 - 0x45079b
int64_t function_450799(void) {
    // 0x450799
    return function_45071c();
}

// Address range: 0x4507d2 - 0x4507d4
int64_t function_4507d2(void) {
    // 0x4507d2
    int64_t result; // 0x4507d2
    return result;
}

// Address range: 0x4507d5 - 0x4507d7
int64_t function_4507d5(void) {
    // 0x4507d5
    return function_45084d();
}

// Address range: 0x4509df - 0x450a6f
int64_t function_4509df(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4509df
    int64_t v1; // 0x4509df
    int64_t v2 = v1 - 82; // 0x4509e5
    __writegsbyte(v2, __readgsbyte(v2) & 114);
    *(char *)0x393c586e5d2efb3a = (char)(v1 | v1) + 114;
    return (int64_t)*(char *)-0x30499b848a3ffa8a | 0x9fef0c00;
}

// Address range: 0x450a80 - 0x450a84
int64_t function_450a80(void) {
    // 0x450a80
    int64_t result; // 0x450a80
    return result;
}

// Address range: 0x450a84 - 0x450a86
int64_t function_450a84(void) {
    // 0x450a84
    return function_450aca();
}

// Address range: 0x450a9e - 0x450a9f
int64_t function_450a9e(int64_t a1) {
    // 0x450a9e
    int64_t result; // 0x450a9e
    return result;
}

// Address range: 0x450aca - 0x450ad1
int64_t function_450aca(void) {
    // 0x450aca
    int64_t v1; // 0x450aca
    int64_t v2 = v1;
    bool v3; // 0x450aca
    return (v2 + 87 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x450afa - 0x450afb
int64_t function_450afa(int64_t a1) {
    // 0x450afa
    int64_t result; // 0x450afa
    return result;
}

// Address range: 0x450b5b - 0x450b64
int64_t function_450b5b(void) {
    // 0x450b5b
    int64_t v1; // 0x450b5b
    return function_450bd7(v1, v1, v1, v1, (int64_t)&g5);
}

// Address range: 0x450b64 - 0x450b78
int64_t function_450b64(void) {
    // 0x450b64
    int64_t v1; // 0x450b64
    int64_t v2 = v1;
    *(char *)v2 = (char)(v1 / 256) + (char)v2;
    *(int32_t *)-0x2a7dbedddefcd5e7 = (int32_t)v1;
    return function_450bbb(v1, v1);
}

// Address range: 0x450bb4 - 0x450bbb
int64_t function_450bb4(int64_t a1, int64_t a2) {
    // 0x450bb4
    int64_t result; // 0x450bb4
    return result;
}

// Address range: 0x450bbb - 0x450bc1
int64_t function_450bbb(int64_t a1, int64_t a2) {
    // 0x450bbb
    int64_t result; // 0x450bbb
    return result;
}

// Address range: 0x450bd7 - 0x450be3
int64_t function_450bd7(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    // 0x450bd7
    int64_t v1; // 0x450bd7
    uint64_t v2 = v1;
    char * v3 = (char *)(a3 + 14); // 0x450bd9
    unsigned char v4 = *v3; // 0x450bd9
    char v5 = (char)(v2 / 256) < (char)(a4 / 256); // 0x450bd9
    unsigned char v6 = v5 + (char)(a3 / 256); // 0x450bd9
    char v7 = v4 - v6; // 0x450bd9
    bool v8 = (char)(v2 / 256) < (char)(a4 / 256) ? v6 != -1 | v4 < v7 - v5 : v4 < v6; // 0x450bd9
    *v3 = v7;
    return (v2 + 39 + (int64_t)v8) % 256 | v2 & -256;
}

// Address range: 0x450c07 - 0x450c0b
int64_t function_450c07(void) {
    // 0x450c07
    int64_t result; // 0x450c07
    return result;
}

// Address range: 0x450cbf - 0x450cc6
int64_t function_450cbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 + 0x7865a59c); // 0x450cbf
    int64_t result; // 0x450cbf
    *v1 = *v1 ^ (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x450cdd - 0x450cdf
int64_t function_450cdd(void) {
    // 0x450cdd
    int64_t result; // 0x450cdd
    return result;
}

// Address range: 0x450ce6 - 0x450ce7
int64_t function_450ce6(void) {
    // 0x450ce6
    int64_t result; // 0x450ce6
    return result;
}

// Address range: 0x450cfb - 0x450cfc
int64_t function_450cfb(void) {
    // 0x450cfb
    int64_t result; // 0x450cfb
    return result;
}

// Address range: 0x450d09 - 0x450dca
int64_t function_450d09(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x450d09
    int64_t v1; // 0x450d09
    unsigned char v2 = (char)v1;
    *(char *)v1 = v2 - (char)(a4 / 256);
    int32_t * v3 = (int32_t *)v1; // bp-8, 0x450d11
    int64_t v4 = (int64_t)&v3; // 0x450d11
    unsigned char v5 = (char)(v1 / 256); // 0x450d13
    unsigned char v6 = *(char *)(a2 - 0x5cdec565 + 4 * a1) + v5; // 0x450d13
    int64_t v7 = 256 * (int64_t)v6 | v1 & 0xffff00ff; // 0x450d13
    if (a4 == 0) {
        char * v8 = (char *)(v4 + 0x46005a85 + 2 * v7); // 0x450d7f
        unsigned char v9 = *v8; // 0x450d7f
        char v10 = v1; // 0x450d7f
        char v11 = v6 < v5; // 0x450d7f
        unsigned char v12 = v11 + v10; // 0x450d7f
        char v13 = v9 - v12; // 0x450d7f
        bool v14 = v6 < v5 ? v12 != -1 | v9 < v13 - v11 : v9 < v12; // 0x450d7f
        *v8 = v13;
        char * v15 = (char *)(a1 + 0x24986115); // 0x450d8d
        *v15 = *v15 + v10 + (char)(v14 | (v14 ? -81 : -82) > v2);
        __asm_int(102);
        int32_t * v16 = (int32_t *)(a1 + 59); // 0x450d9c
        *v16 = *v16 ^ (int32_t)v1;
        __asm_outsd((int16_t)a3, *(int32_t *)0x54966667);
        return (int64_t)v3;
    }
    int64_t v17 = v1 & 0xffffffff; // 0x450d12
    int32_t * v18 = (int32_t *)(v17 + 121 + 8 * v7); // 0x450d1c
    *v18 = *v18 ^ (int32_t)v4;
    char * v19 = (char *)(a3 - 0x58f8d40); // 0x450d22
    char v20 = a3; // 0x450d22
    *v19 = *v19 - v20;
    int64_t v21 = (int64_t)v3; // 0x450d2a
    char * v22 = (char *)(v17 - 90); // 0x450d2c
    *v22 = *v22 ^ 104;
    if (a5 == 1) {
        int64_t v23 = v1 | v21;
        int32_t * v24 = (int32_t *)((v23 & 0xffffffff) - 0x739fd1dd); // 0x450d71
        *v24 = 0;
        int64_t result = v7 & 0xffffff00 | 59; // 0x450d77
        if (*v24 != 1 == (int32_t)v23 == 0) {
            result = function_450cfb();
        }
        // 0x450d7a
        return result;
    }
    int16_t v25 = a3; // 0x450d3b
    int64_t v26; // 0x450d09
    __asm_outsb(v25, *(char *)&v26);
    __asm_out_136(-76, (char)v1);
    *v3 = (int32_t)v21;
    function_450ce6();
    *(char *)v3 = __asm_insb(v25);
    *(char *)0x7c8e186d = *(char *)0x7c8e186d + -1 - v20;
    int64_t result2 = a3 & 0xffffff00 | 227; // 0x450d60
    *v3 = (int32_t)result2 - 0x7c5c55e9;
    return result2;
}

// Address range: 0x450df4 - 0x450df7
int64_t function_450df4(void) {
    // 0x450df4
    int64_t result; // 0x450df4
    return result;
}

// Address range: 0x450e82 - 0x450e83
int64_t function_450e82(void) {
    // 0x450e82
    int64_t result; // 0x450e82
    return result;
}

// Address range: 0x450e85 - 0x450e88
int64_t function_450e85(void) {
    // 0x450e85
    int64_t result; // 0x450e85
    return result;
}

// Address range: 0x450e89 - 0x450e8e
int64_t function_450e89(void) {
    // 0x450e89
    return function_66ff51b2();
}

// Address range: 0x450ed0 - 0x450ed4
int64_t function_450ed0(void) {
    // 0x450ed0
    bool v1; // 0x450ed0
    if (!v1) {
        function_450e82();
    }
    // 0x450ed2
    int64_t v2; // 0x450ed0
    return function_450f0f(v2, v2, v2, v2, (int64_t)&g5);
}

// Address range: 0x450ed4 - 0x450ee3
int64_t function_450ed4(int64_t a1, int64_t a2) {
    // 0x450ed4
    return a1 & 0xffffffff;
}

// Address range: 0x450ee8 - 0x450eeb
int64_t function_450ee8(void) {
    // 0x450ee8
    int64_t result; // 0x450ee8
    return result;
}

// Address range: 0x450f0f - 0x450f94
int64_t function_450f0f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x450f0f
    bool v1; // 0x450f0f
    if (false && !v1 && !v1) {
        // 0x450f13
        __asm_outsb((int16_t)a3, (char)a2);
        *(char *)(a2 + 0x5dad3b68) = (char)(a3 / 256);
    }
    // 0x450f1b
    int64_t result; // 0x450f0f
    return result;
}

// Address range: 0x450fd5 - 0x450fd6
int64_t function_450fd5(void) {
    // 0x450fd5
    int64_t result; // 0x450fd5
    return result;
}

// Address range: 0x451006 - 0x451008
int64_t function_451006(void) {
    // 0x451006
    int64_t v1; // 0x451006
    return function_451048(v1, v1, v1, v1, v1, (int64_t)&g5);
}

// Address range: 0x451016 - 0x451019
int64_t function_451016(int64_t a1) {
    // 0x451016
    int64_t result; // 0x451016
    return result;
}

// Address range: 0x45103b - 0x45103f
int64_t function_45103b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x45103b
    int64_t result; // 0x45103b
    int64_t v1 = result;
    *(char *)v1 = (char)(result / 256 & v1);
    int64_t v2; // 0x45103b
    *(char *)a1 = *(char *)&v2;
    return result;
}

// Address range: 0x451048 - 0x451053
int64_t function_451048(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x451048
    int64_t result; // 0x451048
    char * v1 = (char *)(result - 44 + result); // 0x451048
    char v2 = *v1 & (char)a5; // 0x451048
    *v1 = v2;
    if (v2 >= 0 == (v2 != 0)) {
        // 0x451056
        return result;
    }
    // 0x451050
    function_450fd5();
    return __asm_iretd();
}

// Address range: 0x451055 - 0x451056
int64_t function_451055(int64_t a1, int64_t a2) {
    // 0x451055
    return a2 & 0xffffffff;
}

// Address range: 0x451065 - 0x451066
int64_t function_451065(void) {
    // 0x451065
    int64_t result; // 0x451065
    return result;
}

// Address range: 0x45108d - 0x451142
int64_t function_45108d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x45108d
    int64_t v1; // 0x45108d
    unsigned char v2 = *(char *)(v1 - 112); // 0x45108e
    uint32_t result = (int32_t)v1 + 0x2dc78a7b + (int32_t)(v2 > (char)v1); // 0x451092
    *(char *)a1 = (char)result;
    *(int64_t *)v1 = 0x48e0038b;
    int64_t v3 = a4 - 1; // 0x4510a4
    if (v3 != 0 != (result == 0)) {
        // 0x4510a6
        return result;
    }
    // 0x4510d2
    *(int64_t *)(v1 - 8) = v3;
    bool v4; // 0x45108d
    return __asm_sti((v4 ? -1 : 1) + a1);
}

// Address range: 0x45115e - 0x4511de
int64_t function_45115e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x45115e
    int64_t result; // 0x45115e
    uint64_t v1 = result;
    int64_t v2 = a3;
    int64_t v3 = a5;
    bool v4; // 0x45115e
    if (!v4) {
        // 0x451160
        return function_37b09838();
    }
    uint32_t v5 = (int32_t)a2;
    uint32_t v6 = (int32_t)result; // 0x451173
    *(int32_t *)a2 = v5 - v6;
    if (0x100000000 * a2 >> 32 > (int64_t)&v3) {
        // 0x451177
        return result;
    }
    char * v7 = (char *)(a4 - 0x2df74bb8); // 0x4511c3
    unsigned char v8 = *v7; // 0x4511c3
    char v9 = result / 256; // 0x4511c3
    char v10 = v5 < v6; // 0x4511c3
    unsigned char v11 = v8 + v9; // 0x4511c3
    char v12 = v11 + v10; // 0x4511c3
    char v13 = v12 + v10; // 0x4511c3
    *v7 = v12;
    if (v12 < 0 == ((v13 ^ v8) & (v13 ^ v9)) < 0) {
        // 0x451177
        return result;
    }
    bool v14 = v5 < v6 ? v12 <= v8 : v11 < v8; // 0x4511c3
    int64_t v15 = 256 * (2 * v1 / 256 | (int64_t)v14) & 0xff00 | v1 & -0xff01; // 0x4511cc
    *(int32_t *)v2 = *(int32_t *)&v2 + (int32_t)a4;
    int64_t v16; // bp-5266, 0x45115e
    char * v17 = (char *)((int64_t)&v16 + 98 + 2 * v15); // 0x4511d4
    unsigned char v18 = *v17; // 0x4511d4
    unsigned char v19 = v18 + (char)v2; // 0x4511d4
    *v17 = v19;
    int32_t v20 = *(int32_t *)(v15 + 0x43e16d84); // 0x4511d8
    return (int32_t)result - v20 + (int32_t)(v19 < v18);
}

// Address range: 0x53d00b - 0x53d01d
int64_t function_53d00b(int64_t a1, int64_t a2) {
    // 0x53d00b
    int64_t v1; // 0x53d00b
    *(int32_t *)a1 = (int32_t)v1 - 1;
    int64_t v2; // 0x53d00b
    int64_t v3 = v2;
    *(char *)v3 = *(char *)&v2 + (char)v3;
    return function_53caaf();
}

// Address range: 0x53d020 - 0x53d045
int64_t function_53d020(int64_t a1) {
    uint64_t result = *(int64_t *)(a1 + 16); // 0x53d020
    if (result >= *(int64_t *)(a1 + 24) || *(int32_t *)result == -1) {
        // 0x53d3a5
        return result;
    }
    // 0x53d03b
    return function_53c920();
}

// Address range: 0x53d048 - 0x53d05c
int64_t function_53d048(int64_t a1) {
    // 0x53d048
    function_52b8e0(a1, 32);
    return function_53c8c0();
}

// Address range: 0x53d060 - 0x53d09e
int64_t function_53d060(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a1 + 16); // 0x53d060
    int64_t v2 = v1; // 0x53d068
    if (v1 >= *(int64_t *)(a1 + 24)) {
        v2 = function_53d470();
    }
    // 0x53d06e
    if (*(int32_t *)v2 == -1) {
        function_53c847();
    }
    int64_t v3; // 0x53d060
    if (v3 != 0) {
        function_53c712();
    }
    if (a2 != 0) {
        function_53c76d();
    }
    // 0x53d092
    return function_53c770();
}

// Address range: 0x53d0a0 - 0x53d0c1
int64_t function_53d0a0(int64_t a1, int64_t a2) {
    if (a2 == 0) {
        function_53ccf7();
    }
    // 0x53d0bc
    return function_53cb52();
}

// Address range: 0x53d0c8 - 0x53d0e6
int64_t function_53d0c8(int64_t a1, int64_t a2) {
    if (a2 == 0) {
        function_53cca1();
    }
    // 0x53d0e1
    return function_53c983();
}

// Address range: 0x53d0f0 - 0x53d109
int64_t function_53d0f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x53d0f0
    return function_53cdee();
}

// Address range: 0x53d110 - 0x53d131
int64_t function_53d110(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x53d110
    int64_t v1; // 0x53d110
    function_52b400(a5, v1, 0, 0, 1);
    return function_53cf5b(v1);
}

// Address range: 0x53d138 - 0x53d15d
int64_t function_53d138(int64_t a1) {
    // 0x53d138
    if (*(int64_t *)(a1 + 16) >= *(int64_t *)(a1 + 24)) {
        function_53d47b();
    }
    // 0x53d146
    return function_53c770();
}

// Address range: 0x53d160 - 0x53d16e
int64_t function_53d160(void) {
    // 0x53d160
    return function_53ccf7();
}

// Address range: 0x53d170 - 0x53d17e
int64_t function_53d170(void) {
    // 0x53d170
    return function_53cca1();
}

// Address range: 0x53d180 - 0x53d197
int64_t function_53d180(int64_t a1) {
    if (a1 != 0) {
        function_53cd2b();
    }
    // 0x53d18c
    return function_53caaf();
}

// Address range: 0x53d197 - 0x53d1b0
int64_t function_53d197(int64_t a1) {
    if (a1 != 0) {
        function_53cccf();
    }
    // 0x53d1a3
    return function_53c920();
}

// Address range: 0x53d1b0 - 0x53d1cc
int64_t function_53d1b0(char a1) {
    // 0x53d1b0
    int64_t v1; // 0x53d1b0
    int64_t v2 = v1;
    *(int64_t *)v1 = a1 == 0 ? v2 : -v2;
    return function_53cbc5();
}

// Address range: 0x53d1d0 - 0x53d1e0
int64_t function_53d1d0(int64_t a1) {
    // 0x53d1d0
    *(int32_t *)a1 = 4;
    return function_53ca27();
}

// Address range: 0x53d1e0 - 0x53d1f5
int64_t function_53d1e0(void) {
    // 0x53d1e0
    int64_t v1; // 0x53d1e0
    if ((int32_t)v1 != -1) {
        function_53c750();
    }
    // 0x53d1ea
    return function_53c71f();
}

// Address range: 0x53d1f9 - 0x53d205
int64_t function_53d1f9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x53d1f9
    int64_t v1; // 0x53d1f9
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    int64_t result = (v2 + a4 / 256) % 256 | v2 & -256; // 0x53d1fc
    int32_t * v3 = (int32_t *)(result - 119); // 0x53d201
    *v3 = *v3 - 1;
    return result;
}
