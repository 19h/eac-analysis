/*
 * Targeted RetDec C for native executable gap queue batch 677.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xf9b9c-0xf9d9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf9d9c-0xf9f9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xfa19c-0xfa39c rank=- name=- kind=- bytes=- uncovered=-
 *   0xfa39c-0xfa59c rank=- name=- kind=- bytes=- uncovered=-
 *   0x37556a-0x37576a rank=- name=- kind=- bytes=- uncovered=-
 *   0x37576a-0x37596a rank=- name=- kind=- bytes=- uncovered=-
 *   0x37596a-0x375a6a rank=- name=- kind=- bytes=- uncovered=-
 *   0x375b6a-0x375d6a rank=- name=- kind=- bytes=- uncovered=-
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
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
int64_t __asm_fnstenv(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
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

int64_t function_142f360c();
int64_t function_37554c();
int64_t function_375566();
int64_t function_37556a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_375590(int64_t a1, int64_t a2);
int64_t function_3755b1(void);
int64_t function_375642(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3756b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3756e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_375717(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3757d1(void);
int64_t function_37588c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3758c9(void);
int64_t function_3758ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37594c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_375969(void);
int64_t function_375970(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_375999(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3759a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3759c5(void);
int64_t function_3759dc(int64_t a1);
int64_t function_3759e4(int64_t a1);
int64_t function_3759f0(void);
int64_t function_3759f4(int64_t a1, int64_t a2);
int64_t function_375b6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_375bef(void);
int64_t function_375c01(int64_t a1, int64_t a2, int64_t a3);
int64_t function_375c19(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_375c30(void);
int64_t function_375c34(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_375c45(void);
int64_t function_375c4a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_375cba(int64_t a1, int64_t a2);
int64_t function_375d19(void);
int64_t function_375d43(void);
int64_t function_375d57(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_375d5d(int64_t a1);
int64_t function_3a118cbe();
int64_t function_45118b69();
int64_t function_59f3bd75();
int64_t function_cdc60();
int64_t function_f9b9c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f9c32(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f9d78(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_f9ec3(void);
int64_t function_f9efd(int64_t a1);
int64_t function_f9f0c(int64_t a1, int64_t a2);
int64_t function_f9f1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f9f33(int64_t a1);
int64_t function_f9f58(int64_t a1, int64_t a2, int64_t a3);
int64_t function_fa19c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_fa263(int64_t a1);
int64_t function_fa2af(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fa329(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fa333(int64_t a1);
int64_t function_fa3af(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_fa433(void);
int64_t function_fa451(void);
int64_t function_fa473(void);
int64_t function_fa480(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fb667();
int64_t function_ffffffff87af59d7();
int64_t unknown_109aeab3();
int64_t unknown_14045999();
int64_t unknown_1aef6d7d();
int64_t unknown_23d61557();
int64_t unknown_33c1229c();
int64_t unknown_38901c99();
int64_t unknown_3d118cab();
int64_t unknown_3def78fc();
int64_t unknown_68e55457();
int64_t unknown_d3948e();
int64_t unknown_e748012();
int64_t unknown_ffffffff8a2f6ca7();
int64_t unknown_ffffffff909f5586();
int64_t unknown_ffffffff9db64721();
int64_t unknown_ffffffffa8f0cf9a();
int64_t unknown_ffffffffac104eb7();
int64_t unknown_ffffffffb30f1176();
int64_t unknown_ffffffffdc8eb611();
int64_t unknown_ffffffffdf0cfb99();
int64_t unknown_fffffffffbf51a7c();
int64_t unknown_fffffffffcd05648();

// Address range: 0xf9b9c - 0xf9c32
int64_t function_f9b9c(int64_t a1, int64_t a2, int64_t a3) {
    // 0xf9b9c
    return function_cdc60();
}

// Address range: 0xf9c32 - 0xf9d78
int64_t function_f9c32(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0xf9825; // bp-32, 0xf9cf6
    int64_t v2 = (int64_t)&v1; // 0xf9d1b
    *(int64_t *)(v2 - 8) = 0xf9825;
    *(int64_t *)(v2 - 32) = a3;
    *(int64_t *)(v2 - 16) = v2;
    return function_cdc60();
}

// Address range: 0xf9d78 - 0xf9ec3
int64_t function_f9d78(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xf9d78
    int64_t v1; // bp-40, 0xf9d78
    v1 = (int64_t)&v1;
    return function_cdc60();
}

// Address range: 0xf9ec3 - 0xf9ec8
int64_t function_f9ec3(void) {
    // 0xf9ec3
    return function_fb667();
}

// Address range: 0xf9efd - 0xf9eff
int64_t function_f9efd(int64_t a1) {
    // 0xf9efd
    int64_t result; // 0xf9efd
    return result;
}

// Address range: 0xf9f0c - 0xf9f15
int64_t function_f9f0c(int64_t a1, int64_t a2) {
    int64_t result = unknown_e748012(a1, a2); // 0xf9f0c
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0xf9f1b - 0xf9f24
int64_t function_f9f1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffff9db64721(a1, a2, a3, a4); // 0xf9f1b
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return result;
}

// Address range: 0xf9f33 - 0xf9f36
int64_t function_f9f33(int64_t a1) {
    // 0xf9f33
    int64_t result; // 0xf9f33
    return result;
}

// Address range: 0xf9f58 - 0xf9f5f
int64_t function_f9f58(int64_t a1, int64_t a2, int64_t a3) {
    // 0xf9f58
    int64_t result; // 0xf9f58
    int32_t * v1 = (int32_t *)(result + 0x4e019dd7); // 0xf9f58
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0xfa19c - 0xfa1a4
int64_t function_fa19c(int64_t a1, int64_t a2, int64_t a3) {
    // 0xfa19c
    int64_t v1; // 0xfa19c
    return (int64_t)(-24 * *(int32_t *)(v1 - 105));
}

// Address range: 0xfa263 - 0xfa26b
int64_t function_fa263(int64_t a1) {
    // 0xfa263
    int64_t result; // 0xfa263
    return result;
}

// Address range: 0xfa2af - 0xfa2b2
int64_t function_fa2af(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xfa2af
    int64_t result; // 0xfa2af
    return result;
}

// Address range: 0xfa329 - 0xfa333
int64_t function_fa329(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xfa329
    int64_t v1; // 0xfa329
    int32_t * v2 = (int32_t *)(v1 - 104); // 0xfa32b
    uint32_t v3 = *v2; // 0xfa32b
    uint32_t v4 = v3 + (int32_t)a4; // 0xfa32b
    *v2 = v4;
    uint32_t v5 = __asm_in_133(-2); // 0xfa32e
    return ((int64_t)v5 - (v4 < v3 ? 158 : 157)) % 256 | (int64_t)(v5 & -256);
}

// Address range: 0xfa333 - 0xfa37f
int64_t function_fa333(int64_t a1) {
    // 0xfa333
    bool v1; // 0xfa333
    if (v1) {
        // 0xfa36f
        int64_t v2; // 0xfa333
        int32_t * v3 = (int32_t *)(v2 + 0x6e70000a); // 0xfa36f
        *v3 = *v3 + (int32_t)v2;
        return unknown_1aef6d7d() & -0xff01 | (int64_t)&g4;
    }
    // 0xfa335
    return function_45118b69();
}

// Address range: 0xfa3af - 0xfa3bf
int64_t function_fa3af(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffffac104eb7(a1, a2, a3, a4); // 0xfa3b1
    char * v1 = (char *)(a3 - 0x1fddc51); // 0xfa3b6
    *v1 = *v1 + (char)(a3 / 256);
    return result;
}

// Address range: 0xfa433 - 0xfa43f
int64_t function_fa433(void) {
    // 0xfa433
    int64_t v1; // 0xfa433
    char * v2 = (char *)(v1 + 0x988cfef); // 0xfa433
    *v2 = *v2 - 36;
    return function_3a118cbe();
}

// Address range: 0xfa451 - 0xfa452
int64_t function_fa451(void) {
    // 0xfa451
    int64_t result; // 0xfa451
    return result;
}

// Address range: 0xfa473 - 0xfa474
int64_t function_fa473(void) {
    // 0xfa473
    int64_t result; // 0xfa473
    return result;
}

// Address range: 0xfa480 - 0xfa4bd
int64_t function_fa480(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xfa480
    int64_t v1; // 0xfa480
    int64_t v2 = v1;
    int64_t v3 = v1;
    unsigned char v4 = (char)a4 % 32; // 0xfa482
    int64_t v5; // 0xfa480
    if (v4 != 0) {
        v5 = v2 & -256 | (int64_t)((char)v2 << v4 | (char)((int16_t)v2 % 256 >> (int16_t)(9 - v4)));
    }
    int64_t v6 = (v2 | a1) & 0xffffffff; // 0xfa480
    *(char *)v3 = (char)v3 + (char)a3;
    __asm_in_133(-24);
    int32_t * v7 = (int32_t *)(v6 + 21); // 0xfa488
    int32_t v8 = v5; // 0xfa488
    *v7 = *v7 + v8;
    unknown_33c1229c();
    char * v9 = (char *)(v6 + 0x487bee3a); // 0xfa49b
    *v9 = *v9 | (char)v5;
    __asm_movd(*(int32_t *)(v1 - 27));
    unknown_3d118cab();
    int32_t * v10 = (int32_t *)(v6 - 99); // 0xfa4aa
    *v10 = *v10 + v8;
    return unknown_109aeab3();
}

// Address range: 0x37556a - 0x37558f
int64_t function_37556a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37556a
    int64_t v1; // 0x37556a
    char * v2 = (char *)(v1 | 211); // 0x37556c
    *v2 = *v2 + (char)(v1 / 256);
    int64_t v3 = unknown_ffffffffb30f1176(); // 0x375570
    float80_t v4; // 0x37556a
    *(int32_t *)(((a3 - (uint64_t)v1 / 256) % 256 | a3 & -256) - 24) = (int32_t)v4;
    *(char *)(v3 & 0xffffffff) = 0;
    int64_t result = unknown_d3948e(); // 0x37558d
    if ((char)a4 < -37) {
        result = function_37554c();
    }
    // 0x37558f
    return result;
}

// Address range: 0x375590 - 0x3755a3
int64_t function_375590(int64_t a1, int64_t a2) {
    // 0x375590
    int64_t v1; // 0x375590
    uint64_t v2 = v1;
    char v3 = v2 / 256; // 0x375590
    *(char *)(v1 - 127) = v3;
    int64_t v4 = unknown_14045999(); // 0x375593
    char * v5 = (char *)(a1 + 0x1e8a2b5); // 0x375598
    *v5 = *v5 + v3;
    return v4 & (v2 | -0xff01);
}

// Address range: 0x3755b1 - 0x3755b3
int64_t function_3755b1(void) {
    // 0x3755b1
    return function_375566();
}

// Address range: 0x375642 - 0x3756b6
int64_t function_375642(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x375642
    unknown_fffffffffcd05648();
    uint64_t result = unknown_23d61557(); // 0x375651
    bool v1; // 0x375642
    char * v2; // 0x375658
    if (v1 || v1) {
        // 0x375658
        v2 = (char *)(4 * result - 0x1763c896);
        *v2 = *v2 | (char)result;
        return result;
    }
    int32_t * v3 = (int32_t *)(a3 + 0x3ee82007); // 0x375668
    int32_t v4 = *v3 + (int32_t)a3; // 0x375668
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x375668
    *v3 = v4;
    if (v5 % 2 != 0) {
        // 0x375658
        v2 = (char *)(4 * result - 0x1763c896);
        *v2 = *v2 | (char)result;
        return result;
    }
    // 0x375670
    int64_t v6; // 0x375642
    int32_t * v7 = (int32_t *)(v6 + 71); // 0x375670
    *v7 = *v7 + (int32_t)a1;
    char v8 = result / 256; // 0x375685
    uint64_t v9 = 256 * (128 * (int64_t)(v8 < 0) | (int64_t)((result & 256) != 0) | 4 * (int64_t)((v8 & 4) != 0) | 16 * (int64_t)((v8 & 16) != 0) | 64 * (int64_t)((v8 & 64) != 0)) | 512; // 0x375686
    int64_t v10 = v9 | result & -0x10000 | (int64_t)*(char *)0x2101e80b732c185d; // 0x375686
    int32_t * v11 = (int32_t *)(v10 - 22); // 0x37568e
    *v11 = *v11 - 0x17e2395a;
    char * v12 = (char *)(a1 - 66); // 0x375691
    *v12 = (char)(v9 / 256);
    return 256 * (int64_t)*v12 | v10 & -0xff01;
}

// Address range: 0x3756b7 - 0x3756e5
int64_t function_3756b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3756b7
    __asm_in((int16_t)a3);
    int64_t v1 = __asm_iretd(); // 0x3756c3
    *(char *)a4 = (char)a4;
    return v1 & 0xffffffff ^ 0xa709a36a;
}

// Address range: 0x3756e8 - 0x375716
int64_t function_3756e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3756e8
    int64_t v1; // 0x3756e8
    int32_t * v2 = (int32_t *)(2 * v1 + 0xb4e67c6); // 0x3756e8
    *v2 = *v2 + (int32_t)v1;
    int64_t v3 = unknown_3def78fc() + 2 * v1; // 0x3756fd
    int64_t result = v3 & 0xffffffff; // 0x3756fd
    int32_t * v4 = (int32_t *)(a3 + 0x71be10cf); // 0x3756ff
    *v4 = *v4 + (int32_t)v3;
    int32_t * v5 = (int32_t *)result; // 0x37570b
    *v5 = *v5 / 256;
    return result;
}

// Address range: 0x375717 - 0x3757a1
int64_t function_375717(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x375717
    int64_t v1; // 0x375717
    uint64_t v2 = v1 + 84; // 0x37571d
    int64_t v3 = v2 % 256 | v1 & -256; // 0x37571d
    if (*(char *)(v3 - 0x935635) <= (char)(v1 / 256)) {
        char * v4 = (char *)(a5 + 0x69d2c7a7); // 0x375729
        *v4 = *v4 + (char)v1;
        return 0x10000 * (int32_t)v3 >> 16;
    }
    // 0x37577f
    bool v5; // 0x375717
    int64_t v6 = v5 ? -4 : 4; // 0x375717
    int64_t v7 = v6 + a1; // 0x375717
    int64_t v8 = v6 + a2; // 0x375717
    *(char *)v7 = (char)v2;
    int64_t v9 = v7 + (v5 ? -1 : 1); // 0x37577f
    uint32_t v10 = (int32_t)unknown_ffffffff909f5586(v9); // 0x375785
    uint32_t v11 = *(int32_t *)v8 + v10; // 0x375785
    int32_t * v12 = (int32_t *)(v8 - 0x18fe1748); // 0x37578c
    *v12 = *v12 + (int32_t)v9;
    *(char *)0x21fd8d8 = *(char *)0x21fd8d8 - 1;
    __asm_int(9);
    return v11 - 0x17b3cd67 + (int32_t)(v11 < v10);
}

// Address range: 0x3757d1 - 0x3757d2
int64_t function_3757d1(void) {
    // 0x3757d1
    int64_t result; // 0x3757d1
    return result;
}

// Address range: 0x37588c - 0x3758ab
int64_t function_37588c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 - 127); // 0x375890
    uint32_t v2 = *v1; // 0x375890
    int64_t v3; // 0x37588c
    int32_t v4 = (char)v3 < 78; // 0x375890
    uint32_t v5 = v4 + (int32_t)a4; // 0x375890
    int32_t v6 = v2 - v5; // 0x375890
    bool v7 = (char)v3 < 78 ? v5 != -1 | v2 < v6 - v4 : v2 < v5; // 0x375890
    *v1 = v6;
    int64_t v8 = unknown_ffffffffdf0cfb99() + 0xdcc0acf9 + (int64_t)v7; // 0x375898
    int32_t * v9 = (int32_t *)(2 * a1 + 0x5d3be048 + (v8 & 0xffffffff)); // 0x3758a3
    *v9 = *v9 + (int32_t)v8;
    return v3 & 0xe8e8a8b0;
}

// Address range: 0x3758c9 - 0x3758ca
int64_t function_3758c9(void) {
    // 0x3758c9
    int64_t result; // 0x3758c9
    return result;
}

// Address range: 0x3758ef - 0x375915
int64_t function_3758ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a3 - 0x17d1910a); // 0x3758f7
    int64_t v2; // 0x3758ef
    int32_t * v3 = (int32_t *)((int64_t)(v1 + (0x10000 * (int32_t)v2 >> 16)) + 5); // 0x3758fd
    uint32_t v4 = (int32_t)v2; // 0x3758fd
    *v3 = *v3 + v4;
    char * v5 = (char *)((v2 & -0xff01 | (int64_t)&g2) - 0x67ff1484); // 0x375900
    unsigned char v6 = *v5; // 0x375900
    unsigned char v7 = (char)a4; // 0x375900
    *v5 = v6 - v7;
    int32_t v8 = v6 < v7 ? 3 : 2;
    int32_t v9 = v8 + v4; // 0x375906
    int64_t v10 = a4 - 1; // 0x375910
    int64_t v11 = unknown_ffffffffdc8eb611(); // 0x375910
    if (v10 != 0 == v9 == 0) {
        v11 = function_3758c9();
    }
    char v12 = llvm_ctpop_i8((char)v9); // 0x375906
    uint32_t v13 = (int32_t)v10 % 32; // 0x375912
    bool v14 = v9 == 0; // 0x375912
    int32_t v15 = v9; // 0x375912
    char v16 = v12; // 0x375912
    bool v17 = v6 < v7 ? v9 <= v4 : v4 > 0xfffffffd; // 0x375912
    if (v13 != 0) {
        uint32_t v18 = (int32_t)a3 & -0xff01 | (int32_t)&g5; // 0x375912
        v15 = v18 >> v13;
        v16 = llvm_ctpop_i8((char)v15);
        v14 = v15 == 0;
        v17 = (1 << v13 - 1 & v18) != 0;
    }
    return v11 & -0xff01 | 256 * (64 * (int64_t)v14 | 16 * (int64_t)(v8 + v4 % 16 > 15) | (int64_t)v17 | 128 * (int64_t)(v15 < 0) | 4 * (int64_t)(v16 % 2 == 0)) | 512;
}

// Address range: 0x37594c - 0x375969
int64_t function_37594c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37594c
    int64_t v1; // 0x37594c
    __asm_out((int16_t)a3, (int32_t)v1);
    int64_t v2 = __asm_int1(); // 0x375958
    *(int32_t *)(v1 + 25) = (int32_t)v1;
    return v1 & 0xffffffff & v2;
}

// Address range: 0x375969 - 0x37596f
int64_t function_375969(void) {
    // 0x375969
    return function_ffffffff87af59d7();
}

// Address range: 0x375970 - 0x37597e
int64_t function_375970(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a3 - 0x55fec237); // 0x375970
    *v1 = *v1 + (char)(a4 / 256);
    int64_t result; // 0x375970
    char * v2 = (char *)(result + 123); // 0x375976
    *v2 = *v2 - (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x375999 - 0x37599c
int64_t function_375999(int64_t a1, int64_t a2, int64_t a3) {
    // 0x375999
    int64_t v1; // 0x375999
    return v1 + a3 & 0xffffffff;
}

// Address range: 0x3759a2 - 0x3759c5
int64_t function_3759a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 75); // 0x3759a2
    int64_t v2; // 0x3759a2
    int32_t v3 = v2; // 0x3759a2
    *v1 = *v1 + v3;
    int32_t * v4 = (int32_t *)(a2 - 85); // 0x3759b1
    *v4 = *v4 ^ v3 & -73;
    return function_59f3bd75();
}

// Address range: 0x3759c5 - 0x3759da
int64_t function_3759c5(void) {
    char v1 = *(char *)0x38cf14d8; // 0x3759d1
    int64_t v2; // 0x3759c5
    *(char *)0x38cf14d8 = v1 + (char)((uint64_t)v2 / 256);
    return v2 & -256 | (int64_t)*(char *)-0x5dfcd6996a3fc5e0;
}

// Address range: 0x3759dc - 0x3759df
int64_t function_3759dc(int64_t a1) {
    // 0x3759dc
    int64_t result; // 0x3759dc
    return result;
}

// Address range: 0x3759e4 - 0x3759e7
int64_t function_3759e4(int64_t a1) {
    // 0x3759e4
    int64_t result; // 0x3759e4
    return result;
}

// Address range: 0x3759f0 - 0x3759f1
int64_t function_3759f0(void) {
    // 0x3759f0
    int64_t result; // 0x3759f0
    return result;
}

// Address range: 0x3759f4 - 0x375a0b
int64_t function_3759f4(int64_t a1, int64_t a2) {
    // 0x3759f4
    return function_142f360c();
}

// Address range: 0x375b6a - 0x375bdf
int64_t function_375b6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x375b6a
    int64_t v1; // 0x375b6a
    unsigned char v2 = *(char *)(v1 + a4); // 0x375b6a
    int64_t v3 = unknown_fffffffffbf51a7c(); // 0x375b76
    int32_t v4 = *(int32_t *)((a4 & -256 | (int64_t)v2) + 0x6101e800); // 0x375b80
    uint32_t v5 = v4 + (int32_t)a3; // 0x375b80
    int64_t v6 = v5; // 0x375b80
    char * v7 = (char *)v6; // 0x375b91
    *v7 = *v7 + (char)v5;
    unknown_ffffffffa8f0cf9a();
    int32_t * v8 = (int32_t *)__asm_int3(); // 0x375b9f
    *v8 = *v8 | (int32_t)v3;
    int64_t v9 = unknown_ffffffff8a2f6ca7(); // 0x375ba1
    return v9 - (v6 & 0xff00) & 0xff00 | v9 & -0xff01;
}

// Address range: 0x375bef - 0x375bf1
int64_t function_375bef(void) {
    // 0x375bef
    int64_t result; // 0x375bef
    return result;
}

// Address range: 0x375c01 - 0x375c19
int64_t function_375c01(int64_t a1, int64_t a2, int64_t a3) {
    // 0x375c01
    int64_t v1; // 0x375c01
    bool v2; // 0x375c01
    uint32_t result = (int32_t)v1 - 0x487a3ea7 + (int32_t)v2; // 0x375c0a
    char * v3 = (char *)(a2 - 111); // 0x375c0f
    *v3 = *v3 + (char)result;
    return result;
}

// Address range: 0x375c19 - 0x375c2f
int64_t function_375c19(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x375c19
    int64_t v1; // 0x375c19
    int64_t v2 = v1;
    *(int32_t *)v2 = -1 - (int32_t)v2;
    char * v3 = (char *)(4 * v1 - 22 + v1); // 0x375c1d
    unsigned char v4 = *v3; // 0x375c1d
    char v5 = v4 + (char)(a4 / 256); // 0x375c1d
    *v3 = v5;
    int64_t v6; // 0x375c19
    if (v5 >= 0) {
        v6 = function_375c4a(a1, a2, a3, a4);
    }
    int64_t v7 = v6;
    return v7 & -256 | 2 * v7 & 196 | (int64_t)(v5 < v4) | 58;
}

// Address range: 0x375c30 - 0x375c34
int64_t function_375c30(void) {
    // 0x375c30
    int64_t result; // 0x375c30
    return result;
}

// Address range: 0x375c34 - 0x375c40
int64_t function_375c34(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(2 * a1 + 0x65d643a); // 0x375c36
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x375c34
    return result;
}

// Address range: 0x375c45 - 0x375c46
int64_t function_375c45(void) {
    // 0x375c45
    int64_t result; // 0x375c45
    return result;
}

// Address range: 0x375c4a - 0x375c98
int64_t function_375c4a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = unknown_68e55457(); // 0x375c5b
    if (*(char *)(a2 + 0x900ba0d) < (char)a3) {
        v2 = function_375c45();
    }
    // 0x375c5d
    *(int32_t *)a1 = (int32_t)a4 + (int32_t)a1;
    int32_t * v3 = (int32_t *)(v2 & 0xffffffff ^ 236); // 0x375c71
    *v3 = *v3 + (int32_t)((v2 / 256 + a4) % 256 | a4 & 0xffffff00);
    int64_t v4; // 0x375c4a
    int64_t v5 = __asm_wait(((v4 & (int64_t)&g1) == 0 ? 4 : -4) + a1); // 0x375c75
    __asm_outsd((int16_t)a3, *(int32_t *)&v1);
    char * v6 = (char *)(a3 + 104); // 0x375c90
    *v6 = *v6 & (char)v5;
    return unknown_38901c99();
}

// Address range: 0x375cba - 0x375cc6
int64_t function_375cba(int64_t a1, int64_t a2) {
    // 0x375cba
    int64_t result; // 0x375cba
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x375d19 - 0x375d1a
int64_t function_375d19(void) {
    // 0x375d19
    int64_t result; // 0x375d19
    return result;
}

// Address range: 0x375d43 - 0x375d4a
int64_t function_375d43(void) {
    // 0x375d43
    int64_t result; // 0x375d43
    __asm_out_134(-24, (int32_t)result);
    return result;
}

// Address range: 0x375d57 - 0x375d5a
int64_t function_375d57(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result; // 0x375d57
    if (a4 == 0) {
        result = function_375d19();
    }
    // 0x375d59
    return result;
}

// Address range: 0x375d5d - 0x375d5e
int64_t function_375d5d(int64_t a1) {
    // 0x375d5d
    int64_t result; // 0x375d5d
    return result;
}
