/*
 * Targeted RetDec C for native executable gap queue batch 1006.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x12d8dc-0x12dadc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12dcdc-0x12dedc rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f34e8-0x1f36e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f36e8-0x1f38e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f3ae8-0x1f3ce8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f3ce8-0x1f3ee8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f3ee8-0x1f40e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f42e8-0x1f44e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23b0b6-0x23b2b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23b2b6-0x23b4b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23b4b6-0x23b6b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23b6b6-0x23b8b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23b8b6-0x23bab6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23bab6-0x23bcb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23bcb6-0x23beb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23beb6-0x23c0b6 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g2;
extern int g3;
extern int g10;
extern int g11;
extern int g12;
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

int64_t function_12d8cd();
int64_t function_12d8dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12d953(int64_t a1);
int64_t function_12d958(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_12d9f9(int64_t a1);
int64_t function_12da4d(int64_t a1);
int64_t function_12da59(void);
int64_t function_12da65(void);
int64_t function_12da6c(int64_t a1, int64_t a2);
int64_t function_12da90(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12dac0(void);
int64_t function_12dcdc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12dd08(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_12dd29(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12dd60(void);
int64_t function_12dd85(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12ddd9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12ddfb(void);
int64_t function_12de5e(void);
int64_t function_12de70(int64_t a1, int64_t a2);
int64_t function_12de7a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_12dea5(void);
int64_t function_12dec1(int64_t a1);
int64_t function_14fdeae();
int64_t function_1f34e8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1f34f9(int64_t a1, int64_t a2);
int64_t function_1f360e(void);
int64_t function_1f3613(int64_t a1);
int64_t function_1f3625(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f3641(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f3675(int64_t a1);
int64_t function_1f3683(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f36ed(void);
int64_t function_1f370d(void);
int64_t function_1f3710(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f3712(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1f374a(int64_t a1);
int64_t function_1f3754(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1f37df(void);
int64_t function_1f381f(int64_t a1);
int64_t function_1f387d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1f38b7(void);
int64_t function_1f38bd(int64_t a1);
int64_t function_1f38d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f3ae8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f3b3c(void);
int64_t function_1f3b64(void);
int64_t function_1f3b7a(void);
int64_t function_1f3b89(int64_t a1);
int64_t function_1f3c7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f3cc9(int64_t a1);
int64_t function_1f3cfa(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1f3d12(void);
int64_t function_1f3d26(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1f3d8c(void);
int64_t function_1f3dbf(int64_t a1);
int64_t function_1f3e23(void);
int64_t function_1f3e32(void);
int64_t function_1f3e3a(void);
int64_t function_1f3e42(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1f3e90(int64_t a1);
int64_t function_1f3fc9(int64_t a1);
int64_t function_1f3fe4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f4010(void);
int64_t function_1f4028(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f4052(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f40e0(void);
int64_t function_1f42c9();
int64_t function_1f42e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f4355(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f4379(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f446a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_207d663();
int64_t function_23b0b6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_23b0ef(int64_t a1);
int64_t function_23b0fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23b167(void);
int64_t function_23b1d0(int64_t a1);
int64_t function_23b29e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23b2ee(int64_t a1);
int64_t function_23b31f(void);
int64_t function_23b333(int64_t a1);
int64_t function_23b397(void);
int64_t function_23b40e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23b41c(int64_t a1);
int64_t function_23b441(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23b491(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23b51d(void);
int64_t function_23b55c(void);
int64_t function_23b568(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_23b661(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23b6bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23b6fc(int64_t a1);
int64_t function_23b70e(void);
int64_t function_23b72e(int64_t a1);
int64_t function_23b739(void);
int64_t function_23b745(void);
int64_t function_23b75f(void);
int64_t function_23b772(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_23b80d(int64_t a1);
int64_t function_23b857(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23b866(void);
int64_t function_23b8e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23b93a(void);
int64_t function_23b97e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23bab2(void);
int64_t function_23bac5(int64_t a1);
int64_t function_23bad8(int64_t a1, int64_t a2);
int64_t function_23bb10(void);
int64_t function_23bbe3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23bc36(void);
int64_t function_23bc80(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23bcf1(void);
int64_t function_23bd3a(void);
int64_t function_23bd5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23bdb1(void);
int64_t function_23bdc5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23bdea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23be05(int64_t a1);
int64_t function_23be87(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23bf2f(int64_t a1, int64_t a2);
int64_t function_23bf4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23bf9b(void);
int64_t function_23bfd7(int64_t a1);
int64_t function_23bffd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23c02b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23c08e(int64_t a1);
int64_t function_2f45a317();
int64_t function_3d1fa909();
int64_t function_505a699b();
int64_t function_5228f7b9();
int64_t function_56f0c0ed();
int64_t function_ffffffff91c3db6a();
int64_t function_ffffffff9bf7b186();
int64_t function_ffffffffa4033920();
int64_t function_ffffffffae400b36();
int64_t function_ffffffffb1e8da22();
int64_t function_ffffffffb4747c10();
int64_t function_ffffffffd8d86537();
int64_t function_ffffffffe852df54();
int64_t function_ffffffffe8d96742();
int64_t unknown_10630570();
int64_t unknown_1f84ae7f();
int64_t unknown_207c285();
int64_t unknown_28be0225();
int64_t unknown_30bb6d1a();
int64_t unknown_331947ad();
int64_t unknown_3a362d83();
int64_t unknown_3ac25054();
int64_t unknown_3b2f19b3();
int64_t unknown_3d259e30();
int64_t unknown_47707936();
int64_t unknown_50e64a0b();
int64_t unknown_542e95fe();
int64_t unknown_57208181();
int64_t unknown_57de386b();
int64_t unknown_6b509e2();
int64_t unknown_6c2b059e();
int64_t unknown_72224690();
int64_t unknown_76114ece();
int64_t unknown_7bd21dee();
int64_t unknown_82e91a8();
int64_t unknown_b9eac63();
int64_t unknown_d75584();
int64_t unknown_ffffffff8ba48f07();
int64_t unknown_ffffffff90dd250f();
int64_t unknown_ffffffff912991ec();
int64_t unknown_ffffffff9575acff();
int64_t unknown_ffffffff962524ba();
int64_t unknown_ffffffffa0a79e8c();
int64_t unknown_ffffffffabf03f8d();
int64_t unknown_ffffffffb2246c31();
int64_t unknown_ffffffffb3c97f70();
int64_t unknown_ffffffffb58b14af();
int64_t unknown_ffffffffb621282e();
int64_t unknown_ffffffffbba81ff9();
int64_t unknown_ffffffffc17303f0();
int64_t unknown_ffffffffc1d2d278();
int64_t unknown_ffffffffc5b49d87();
int64_t unknown_ffffffffd319e1a9();
int64_t unknown_ffffffffe86bc627();
int64_t unknown_ffffffffe904e8f4();

// Address range: 0x12d8dc - 0x12d909
int64_t function_12d8dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 0x5837f357); // 0x12d8e2
    int64_t v2; // 0x12d8dc
    int32_t v3 = v2; // 0x12d8e2
    *v1 = *v1 + v3;
    int32_t * v4 = (int32_t *)(v2 - 0x1cb7530); // 0x12d8e8
    *v4 = *v4 + v3;
    unknown_ffffffffe904e8f4();
    int32_t v5 = *(int32_t *)0x103ed5fa + (int32_t)a1; // 0x12d8f3
    *(int32_t *)0x103ed5fa = v5;
    unknown_ffffffff9575acff();
    int64_t result = unknown_ffffffff8ba48f07(); // 0x12d907
    if (v5 < 1) {
        result = function_12d8cd();
    }
    // 0x12d909
    return result;
}

// Address range: 0x12d953 - 0x12d958
int64_t function_12d953(int64_t a1) {
    // 0x12d953
    int64_t v1; // 0x12d953
    uint16_t v2 = (int16_t)v1;
    uint16_t v3 = v2 % 256; // 0x12d953
    return v1 & -0x10000 | (int64_t)(v2 / v3 % 256) | (int64_t)(256 * (v2 % v3));
}

// Address range: 0x12d958 - 0x12d96e
int64_t function_12d958(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x12d958
    int64_t v1; // 0x12d958
    int32_t v2 = v1;
    *(int32_t *)v1 = 2 * v2;
    int64_t v3; // bp-8, 0x12d958
    int64_t v4 = (int64_t)&v3; // 0x12d95c
    int64_t v5; // 0x12d958
    *(char *)a2 = *(char *)&v5 + (char)(a3 / 256);
    *(int32_t *)(v1 + 0x6200068 + v4) = (int32_t)v4;
    int64_t v6; // 0x12d958
    return (int64_t)(*(int32_t *)&v6 + v2);
}

// Address range: 0x12d9f9 - 0x12d9fd
int64_t function_12d9f9(int64_t a1) {
    // 0x12d9f9
    int64_t result; // 0x12d9f9
    return result;
}

// Address range: 0x12da4d - 0x12da50
int64_t function_12da4d(int64_t a1) {
    // 0x12da4d
    int64_t result; // 0x12da4d
    return result;
}

// Address range: 0x12da59 - 0x12da64
int64_t function_12da59(void) {
    // 0x12da59
    int64_t v1; // 0x12da59
    int32_t * v2 = (int32_t *)(v1 - 0x385aef21); // 0x12da59
    *v2 = *v2 + (int32_t)v1;
    return function_ffffffffe852df54();
}

// Address range: 0x12da65 - 0x12da66
int64_t function_12da65(void) {
    // 0x12da65
    int64_t result; // 0x12da65
    return result;
}

// Address range: 0x12da6c - 0x12da6f
int64_t function_12da6c(int64_t a1, int64_t a2) {
    // 0x12da6c
    int64_t result; // 0x12da6c
    return result;
}

// Address range: 0x12da90 - 0x12da9c
int64_t function_12da90(int64_t a1, int64_t a2, int64_t a3) {
    // 0x12da90
    return function_2f45a317();
}

// Address range: 0x12dac0 - 0x12dac3
int64_t function_12dac0(void) {
    // 0x12dac0
    int64_t result; // 0x12dac0
    return result;
}

// Address range: 0x12dcdc - 0x12dd03
int64_t function_12dcdc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12dcdc
    bool v1; // 0x12dcdc
    if (v1) {
        unsigned char v2 = *(char *)(a1 + 0x2811ef2a); // 0x12dcde
        char * v3 = (char *)((a3 & -256 | (int64_t)v2) - 0xcfe1712); // 0x12dce4
        *v3 = *v3 + v2;
        return __asm_wait();
    }
    // 0x12dcf3
    int64_t v4; // 0x12dcdc
    int64_t result = v4 + 0x5c79ec8e + v4 & 0xffffffff; // 0x12dcf5
    unsigned char v5 = (char)a4 % 32; // 0x12dcfb
    if (v5 != 0) {
        char * v6 = (char *)(result - 24); // 0x12dcfb
        *v6 = *v6 << v5;
    }
    int32_t * v7 = (int32_t *)((v1 ? -4 : 4) + a1); // 0x12dcfe
    *v7 = *v7 + (int32_t)v4;
    return result;
}

// Address range: 0x12dd08 - 0x12dd12
int64_t function_12dd08(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x12dd08
    int64_t v1; // 0x12dd08
    *(char *)a1 = __asm_insb((int16_t)v1);
    uint64_t v2 = a3 / 256; // 0x12dd0a
    int64_t v3 = (char)v2 < (char)a3 ? 0x40008001 : 0x40008000; // 0x12dd0c
    return (256 * (v2 - a3) & 0xff00 | a3 & 0xffff00ff) + v3 & 0xffffffff;
}

// Address range: 0x12dd29 - 0x12dd44
int64_t function_12dd29(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (uint32_t)(int32_t)a4 % 32; // 0x12dd32
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(a2 + 0x1e81ca2); // 0x12dd32
        *v2 = *v2 << v1;
    }
    return function_ffffffffe8d96742();
}

// Address range: 0x12dd60 - 0x12dd61
int64_t function_12dd60(void) {
    // 0x12dd60
    int64_t result; // 0x12dd60
    return result;
}

// Address range: 0x12dd85 - 0x12dd95
int64_t function_12dd85(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12dd85
    int64_t v1; // 0x12dd85
    int32_t * v2 = (int32_t *)(v1 - 0x6d450bf6); // 0x12dd87
    int32_t v3 = *v2 | (int32_t)v1; // 0x12dd87
    *v2 = v3;
    int64_t result; // 0x12dd85
    if (a4 != 1 == v3 == 0) {
        result = function_12dd60();
    }
    // 0x12dd8f
    return result;
}

// Address range: 0x12ddd9 - 0x12dde1
int64_t function_12ddd9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12ddd9
    int64_t result; // 0x12ddd9
    *(int32_t *)a3 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x12ddfb - 0x12ddfc
int64_t function_12ddfb(void) {
    // 0x12ddfb
    int64_t result; // 0x12ddfb
    return result;
}

// Address range: 0x12de5e - 0x12de61
int64_t function_12de5e(void) {
    // 0x12de5e
    int64_t result; // 0x12de5e
    return result;
}

// Address range: 0x12de70 - 0x12de78
int64_t function_12de70(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 0x2c005384); // 0x12de70
    *v1 = *v1 + (int32_t)a2;
    return function_12ddfb();
}

// Address range: 0x12de7a - 0x12de87
int64_t function_12de7a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x12de7a
    int64_t v1; // 0x12de7a
    *(char *)a2 = (char)(v1 & a4);
    char * v2 = (char *)(a3 + 0xa2b03f1); // 0x12de7c
    *v2 = *v2 | (char)(a3 / 256);
    return function_14fdeae();
}

// Address range: 0x12dea5 - 0x12deaa
int64_t function_12dea5(void) {
    // 0x12dea5
    return function_ffffffffd8d86537();
}

// Address range: 0x12dec1 - 0x12dec2
int64_t function_12dec1(int64_t a1) {
    // 0x12dec1
    int64_t result; // 0x12dec1
    return result;
}

// Address range: 0x1f34e8 - 0x1f34f9
int64_t function_1f34e8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1f34e8
    __asm_in(61);
    int64_t v1; // 0x1f34e8
    int32_t v2 = v1;
    *(int32_t *)v1 = v2 + (int32_t)a3;
    int32_t * v3 = (int32_t *)((a3 & -0xff01 | (int64_t)&g12) + 0x3aaad769); // 0x1f34f1
    *v3 = *v3 + v2;
    return v1 & 0xffffffff;
}

// Address range: 0x1f34f9 - 0x1f352c
int64_t function_1f34f9(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0x326e374); // 0x1f3500
    int64_t v2; // 0x1f34f9
    *v1 = *v1 + (int32_t)v2;
    int64_t v3 = (int64_t)(-0x61e0fec3 * *(int32_t *)(int64_t)__asm_in(22)); // 0x1f3513
    *(int64_t *)v3 = -0x3cf0e300;
    unsigned char v4 = *(char *)v3; // 0x1f351f
    int64_t v5; // 0x1f34f9
    unsigned char v6 = *(char *)&v5; // 0x1f351f
    char v7 = v4 - v6; // 0x1f351f
    int64_t result = a2 & 0xffff00ff | 256 * (64 * (int64_t)(v7 == 0) | (int64_t)(v4 < v6) | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v4 % 16 - v6 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v7) % 2 == 0)) | 512; // 0x1f3520
    __asm_out_133(-104, (int32_t)result);
    return result;
}

// Address range: 0x1f360e - 0x1f360f
int64_t function_1f360e(void) {
    // 0x1f360e
    int64_t result; // 0x1f360e
    return result;
}

// Address range: 0x1f3613 - 0x1f361b
int64_t function_1f3613(int64_t a1) {
    // 0x1f3613
    int64_t v1; // 0x1f3613
    int64_t result = v1;
    *(char *)result = (char)result + 60;
    return result;
}

// Address range: 0x1f3625 - 0x1f3640
int64_t function_1f3625(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f3625
    int64_t v1; // 0x1f3625
    uint32_t v2 = (int32_t)v1 >> 31; // 0x1f3625
    char * v3 = (char *)((int64_t)v2 + 3); // 0x1f3626
    unsigned char v4 = *v3; // 0x1f3626
    unsigned char v5 = v4 + (char)v2; // 0x1f3626
    *v3 = v5;
    int64_t v6; // 0x1f3625
    if (v5 >= v4 && v5 != 0) {
        v6 = function_1f360e();
    }
    char * v7 = (char *)(a2 + 94); // 0x1f3638
    *v7 = *v7 - (char)((int64_t)&g10 >> 8);
    return v6 & -0xff01 | (int64_t)&g10;
}

// Address range: 0x1f3641 - 0x1f3671
int64_t function_1f3641(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f3641
    int64_t result; // 0x1f3641
    bool v1; // 0x1f3641
    if (v1) {
        char * v2 = (char *)(result + 0x3b01e8a3); // 0x1f365a
        *v2 = *v2 + (char)a4;
        return __asm_sti() & -256 | (int64_t)__asm_in_134(39);
    }
    // 0x1f3643
    return result;
}

// Address range: 0x1f3675 - 0x1f3683
int64_t function_1f3675(int64_t a1) {
    // 0x1f3675
    int64_t v1; // 0x1f3675
    int64_t v2 = v1;
    return (v2 + 154) % 256 | v2 & -256;
}

// Address range: 0x1f3683 - 0x1f3687
int64_t function_1f3683(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f3683
    int64_t v1; // 0x1f3683
    int64_t v2 = v1;
    return (v2 & 0xff00) + a3 & 0xff00 | v2 & -0xff01;
}

// Address range: 0x1f36ed - 0x1f36f0
int64_t function_1f36ed(void) {
    // 0x1f36ed
    int64_t result; // 0x1f36ed
    return result;
}

// Address range: 0x1f370d - 0x1f370f
int64_t function_1f370d(void) {
    // 0x1f370d
    int64_t v1; // 0x1f370d
    return function_1f3712(v1, v1, v1);
}

// Address range: 0x1f3710 - 0x1f3712
int64_t function_1f3710(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f3710
    int64_t result; // 0x1f3710
    return result;
}

// Address range: 0x1f3712 - 0x1f371c
int64_t function_1f3712(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1f3712
    int64_t result; // 0x1f3712
    return result;
}

// Address range: 0x1f374a - 0x1f374d
int64_t function_1f374a(int64_t a1) {
    // 0x1f374a
    int64_t result; // 0x1f374a
    return result;
}

// Address range: 0x1f3754 - 0x1f3783
int64_t function_1f3754(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1f3754
    int64_t v1; // 0x1f3754
    *(char *)a4 = (char)v1 + (char)(a4 / 256);
    int64_t v2 = 0x3d06c600; // bp-16, 0x1f375e
    int32_t * v3 = (int32_t *)(a4 - 91); // 0x1f3763
    *v3 = *v3 + (int32_t)v1;
    int32_t * v4 = (int32_t *)(a4 - 0x147c1f74); // 0x1f376a
    *v4 = *v4 - (int32_t)(int64_t)&v2;
    char v5 = *(char *)0x332a6e7f; // 0x1f3778
    *(char *)0x332a6e7f = v5 + (char)((uint64_t)v1 / 256);
    return function_ffffffffa4033920();
}

// Address range: 0x1f37df - 0x1f37e0
int64_t function_1f37df(void) {
    // 0x1f37df
    int64_t result; // 0x1f37df
    return result;
}

// Address range: 0x1f381f - 0x1f3820
int64_t function_1f381f(int64_t a1) {
    // 0x1f381f
    int64_t result; // 0x1f381f
    return result;
}

// Address range: 0x1f387d - 0x1f38b0
int64_t function_1f387d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1f387d
    int64_t v1; // 0x1f387d
    int32_t * v2 = (int32_t *)(v1 + 0x763ae76); // 0x1f387d
    *v2 = *v2 | (int32_t)a4;
    char * v3 = (char *)(v1 - 98); // 0x1f3884
    *v3 = *v3 + (char)v1;
    char * v4 = (char *)(2 * a1 + 0x20073113 + unknown_ffffffffabf03f8d()); // 0x1f388c
    *v4 = *v4 + (char)(((int32_t)v1 >> 31) / 256);
    unsigned char v5 = *(char *)(v1 + a1); // 0x1f389a
    char * v6 = (char *)(v1 + 0x899c37); // 0x1f389d
    *v6 = *v6 + (char)a4 + (char)(v5 > (char)(a4 / 256));
    return unknown_ffffffffd319e1a9() & 0x61c07c00 | (int64_t)__asm_in_134(-107) | 0x9e3f8300;
}

// Address range: 0x1f38b7 - 0x1f38ba
int64_t function_1f38b7(void) {
    // 0x1f38b7
    int64_t result; // 0x1f38b7
    return result;
}

// Address range: 0x1f38bd - 0x1f38be
int64_t function_1f38bd(int64_t a1) {
    // 0x1f38bd
    int64_t result; // 0x1f38bd
    return result;
}

// Address range: 0x1f38d3 - 0x1f38d7
int64_t function_1f38d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f38d3
    int64_t result; // 0x1f38d3
    int32_t * v1 = (int32_t *)(result + a3); // 0x1f38d3
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1f3ae8 - 0x1f3af9
int64_t function_1f3ae8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_7bd21dee(); // 0x1f3ae8
    __asm_out(14, (char)result);
    return result;
}

// Address range: 0x1f3b3c - 0x1f3b3d
int64_t function_1f3b3c(void) {
    // 0x1f3b3c
    int64_t result; // 0x1f3b3c
    return result;
}

// Address range: 0x1f3b64 - 0x1f3b69
int64_t function_1f3b64(void) {
    // 0x1f3b64
    return function_ffffffff91c3db6a();
}

// Address range: 0x1f3b7a - 0x1f3b7d
int64_t function_1f3b7a(void) {
    // 0x1f3b7a
    int64_t result; // 0x1f3b7a
    return result;
}

// Address range: 0x1f3b89 - 0x1f3b8a
int64_t function_1f3b89(int64_t a1) {
    // 0x1f3b89
    int64_t result; // 0x1f3b89
    return result;
}

// Address range: 0x1f3c7e - 0x1f3cb9
int64_t function_1f3c7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f3c7e
    int64_t v1; // 0x1f3c7e
    int32_t * v2 = (int32_t *)(v1 - 0x1e4323f6); // 0x1f3c7e
    uint32_t v3 = *v2; // 0x1f3c7e
    uint32_t v4 = v3 + (int32_t)a4; // 0x1f3c7e
    *v2 = v4;
    __asm_in(74);
    int64_t result = unknown_ffffffffa0a79e8c(); // 0x1f3c86
    int64_t v5; // 0x1f3c7e
    if (*(char *)&v5 + (char)(v4 < v3) <= (char)v1) {
        // 0x1f3c8f
        return result;
    }
    int32_t * v6 = (int32_t *)(a4 + 89); // 0x1f3ca6
    *v6 = *v6 + (int32_t)v1;
    unknown_ffffffffb58b14af();
    return unknown_ffffffff962524ba();
}

// Address range: 0x1f3cc9 - 0x1f3cd7
int64_t function_1f3cc9(int64_t a1) {
    // 0x1f3cc9
    return a1 & 0xffffffff;
}

// Address range: 0x1f3cfa - 0x1f3cff
int64_t function_1f3cfa(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1f3cfa
    int64_t result; // 0x1f3cfa
    return result;
}

// Address range: 0x1f3d12 - 0x1f3d17
int64_t function_1f3d12(void) {
    // 0x1f3d12
    return function_ffffffffb4747c10();
}

// Address range: 0x1f3d26 - 0x1f3d74
int64_t function_1f3d26(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1f3d26
    int64_t v1; // 0x1f3d26
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v1 - 37); // 0x1f3d26
    *v3 = *v3 + (int32_t)v1;
    int64_t v4; // 0x1f3d26
    int64_t v5 = (int64_t)&v4; // bp-8, 0x1f3d29
    int64_t v6; // 0x1f3d26
    *(int32_t *)a1 = *(int32_t *)&v6;
    bool v7; // 0x1f3d26
    int64_t v8 = v7 ? -4 : 4; // 0x1f3d2a
    int64_t v9 = v8 + a1; // 0x1f3d2a
    int64_t v10; // 0x1f3d26
    unsigned char v11 = *(char *)&v10; // 0x1f3d2b
    *(char *)v10 = v11 / 128 | 2 * v11;
    __asm_out_135((int16_t)(a3 / 2 % 128 | a3 & 0xff00), (char)v10);
    int32_t * v12 = (int32_t *)(unknown_47707936() + 8); // 0x1f3d35
    *v12 = *v12 + (int32_t)(int64_t)&v5;
    char * v13 = (char *)(v8 + a2); // 0x1f3d42
    *v13 = *v13 & -39;
    int32_t * v14 = (int32_t *)(v2 + 34 + 4 * v2); // 0x1f3d4a
    *v14 = *v14 ^ (int32_t)v2;
    int64_t v15 = unknown_3ac25054(); // 0x1f3d4e
    uint16_t v16 = (int16_t)v15; // 0x1f3d53
    uint16_t v17 = (int16_t)*(char *)(v9 + 0x7c5cdb2c); // 0x1f3d53
    uint16_t v18 = v16 / v17; // 0x1f3d53
    char * v19 = (char *)(v15 & -0x10000 | (int64_t)(v18 % 256) | (int64_t)(256 * (v16 % v17))); // 0x1f3d5b
    *v19 = *v19 & (char)v18;
    int64_t v20 = unknown_b9eac63(); // 0x1f3d5d
    int32_t * v21 = (int32_t *)(v9 - 104); // 0x1f3d62
    *v21 = *v21 + (int32_t)v20;
    char * v22 = (char *)v20; // 0x1f3d67
    unsigned char v23 = *v22; // 0x1f3d67
    *v22 = v23 / 128 | 2 * v23;
    unknown_207c285();
    return function_ffffffffae400b36(v9 + 1);
}

// Address range: 0x1f3d8c - 0x1f3d90
int64_t function_1f3d8c(void) {
    // 0x1f3d8c
    int64_t result; // 0x1f3d8c
    return result;
}

// Address range: 0x1f3dbf - 0x1f3dc3
int64_t function_1f3dbf(int64_t a1) {
    // 0x1f3dbf
    int64_t result; // 0x1f3dbf
    return result;
}

// Address range: 0x1f3e23 - 0x1f3e26
int64_t function_1f3e23(void) {
    // 0x1f3e23
    int64_t result; // 0x1f3e23
    return result;
}

// Address range: 0x1f3e32 - 0x1f3e36
int64_t function_1f3e32(void) {
    // 0x1f3e32
    int64_t result; // 0x1f3e32
    int32_t * v1 = (int32_t *)(result - 3); // 0x1f3e32
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1f3e3a - 0x1f3e3d
int64_t function_1f3e3a(void) {
    // 0x1f3e3a
    int64_t result; // 0x1f3e3a
    return result;
}

// Address range: 0x1f3e42 - 0x1f3e5e
int64_t function_1f3e42(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1f3e42
    __asm_in_136((int16_t)a3);
    return function_3d1fa909();
}

// Address range: 0x1f3e90 - 0x1f3e93
int64_t function_1f3e90(int64_t a1) {
    // 0x1f3e90
    int64_t result; // 0x1f3e90
    return result;
}

// Address range: 0x1f3fc9 - 0x1f3fca
int64_t function_1f3fc9(int64_t a1) {
    // 0x1f3fc9
    int64_t result; // 0x1f3fc9
    return result;
}

// Address range: 0x1f3fe4 - 0x1f3ffc
int64_t function_1f3fe4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f3fe4
    int64_t v1; // 0x1f3fe4
    __asm_out(-45, (char)v1);
    char * v2 = (char *)unknown_ffffffff912991ec(); // 0x1f3feb
    *v2 = *v2 + (char)a4;
    unknown_ffffffffbba81ff9();
    return __asm_wait();
}

// Address range: 0x1f4010 - 0x1f4015
int64_t function_1f4010(void) {
    // 0x1f4010
    return function_207d663();
}

// Address range: 0x1f4028 - 0x1f4052
int64_t function_1f4028(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f4028
    unknown_ffffffffb621282e();
    int32_t * v1 = (int32_t *)(a1 + 0x2b9bd4e6 + 4 * a1); // 0x1f403a
    *v1 = *v1 + (int32_t)a4;
    int64_t v2; // 0x1f4028
    __asm_outsb(0x681d, *(char *)&v2);
    int32_t v3; // 0x1f4028
    return v3 + 0x307ba93a;
}

// Address range: 0x1f4052 - 0x1f4070
int64_t function_1f4052(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f4052
    int64_t v1; // 0x1f4052
    __asm_outsd((int16_t)a3, *(int32_t *)&v1);
    char * v2 = (char *)(a4 + 0x78013d17); // 0x1f405a
    char v3 = a3; // 0x1f405a
    *v2 = *v2 + v3;
    int64_t v4; // 0x1f4052
    *(char *)v4 = *(char *)&v4 - v3;
    unsigned char v5 = *(char *)-0x776fff4cb64317f6; // 0x1f4065
    int64_t v6; // 0x1f4052
    bool v7; // 0x1f4052
    return v6 & -0x10000 | 256 * (64 * (int64_t)v7 | 128 * (int64_t)v7 | 16 * (int64_t)v7 | (int64_t)v7 | 4 * (int64_t)v7) | (int64_t)v5 | 512;
}

// Address range: 0x1f40e0 - 0x1f40e1
int64_t function_1f40e0(void) {
    // 0x1f40e0
    int64_t result; // 0x1f40e0
    return result;
}

// Address range: 0x1f42e8 - 0x1f4327
int64_t function_1f42e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffffc17303f0(); // 0x1f42ef
    v1 = function_1f42c9();
    int64_t v2 = a3 & -0xff01 | (int64_t)&g2; // 0x1f42e8
    int64_t v3; // 0x1f42e8
    uint32_t v4 = (int32_t)v3; // 0x1f42f1
    uint32_t v5 = *(int32_t *)(v2 + 0x1e8285a) + v4; // 0x1f42f1
    int64_t v6 = a4 - 1; // 0x1f42f7
    if (v6 == 0 || v5 == 0) {
        // 0x1f42f9
        *(int32_t *)a1 = __asm_insd((int16_t)v1);
        return __asm_int3();
    }
    int32_t * v7 = (int32_t *)(v1 - 10); // 0x1f4305
    *v7 = v5 + (int32_t)(v5 < v4) + *v7;
    char * v8 = (char *)(unknown_ffffffff90dd250f() + 0xffffffc2 & 0xffffffff); // 0x1f4310
    *v8 = *v8 | (char)v5;
    int64_t result = unknown_30bb6d1a(*(int32_t *)v2 + (int32_t)a1); // 0x1f4314
    char * v9 = (char *)(v2 + 22 + 8 * v3); // 0x1f431b
    *v9 = *v9 + (char)v6;
    int32_t * v10 = (int32_t *)v6; // 0x1f4322
    *v10 = *v10 + (int32_t)result;
    return result;
}

// Address range: 0x1f4355 - 0x1f4374
int64_t function_1f4355(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f4355
    int64_t v1; // 0x1f4355
    int32_t * v2 = (int32_t *)(v1 + 0x3c008790); // 0x1f4357
    *v2 = *v2 + (int32_t)v1;
    bool v3; // 0x1f4355
    int64_t v4 = v3 ? -4 : 4; // 0x1f435d
    int64_t v5 = v4 + a1; // 0x1f435d
    unsigned char v6 = *(char *)0x5aebf90901e88800; // 0x1f435e
    int64_t result = v1 & -256 | (int64_t)v6; // 0x1f435e
    char v7 = __asm_insb((int16_t)a3 % 256 | (int16_t)&g3); // 0x1f4369
    *(char *)v5 = v7;
    *(int32_t *)v5 = (int32_t)result;
    __asm_out(-24, v6);
    int32_t * v8 = (int32_t *)(a2 + 0x35698a01 + v4); // 0x1f436d
    *v8 = *v8 + (int32_t)(v5 + (v3 ? 0xfffffffc : 4));
    return result;
}

// Address range: 0x1f4379 - 0x1f43b4
int64_t function_1f4379(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_1f84ae7f(); // 0x1f4379
    char * v2 = (char *)(v1 + 0x2c3ee00); // 0x1f437e
    *v2 = *v2 + (char)v1;
    int32_t * v3 = (int32_t *)(a3 + 1); // 0x1f4386
    int64_t v4; // 0x1f4379
    *v3 = *v3 + (int32_t)v4;
    float80_t v5; // 0x1f4379
    *(int16_t *)(a2 + 106) = (int16_t)v5;
    unknown_6c2b059e();
    int32_t * v6 = (int32_t *)(a1 - 0x5dff54b3); // 0x1f439d
    *v6 = *v6 | 0x46562a51;
    return unknown_331947ad();
}

// Address range: 0x1f446a - 0x1f4492
int64_t function_1f446a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f446a
    unknown_ffffffffb3c97f70();
    int64_t v1; // 0x1f446a
    *(char *)a2 = (char)v1 + (char)a3;
    int32_t * v2 = (int32_t *)(a4 - 11); // 0x1f4478
    *v2 = *v2 + (int32_t)a4;
    int64_t result = unknown_57208181(); // 0x1f447b
    int64_t v3; // 0x1f446a
    uint32_t v4 = *(int32_t *)&v3; // 0x1f4482
    uint32_t v5 = v4 + (int32_t)a2; // 0x1f4482
    *(int32_t *)a3 = v5;
    unsigned char v6 = (char)a4 % 32; // 0x1f4484
    if (v6 != 0) {
        char * v7 = (char *)result; // 0x1f4484
        unsigned char v8 = *v7; // 0x1f4484
        *v7 = (char)(v5 < v4) << v6 - 1 | v8 << v6 | (char)((int16_t)v8 >> (int16_t)(9 - v6));
    }
    char * v9 = (char *)(256 * result & 0xff00 | a4 & -0xff01); // 0x1f4486
    char v10 = *v9; // 0x1f4486
    *v9 = 2 * v10;
    char * v11 = (char *)(a1 + 96); // 0x1f4488
    *v11 = *v11 + (char)v1 + (char)(v10 < 0);
    char * v12 = (char *)(v1 + 0x1469d92e); // 0x1f448b
    *v12 = *v12 | (char)result;
    return result;
}

// Address range: 0x23b0b6 - 0x23b0ec
int64_t function_23b0b6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x23b0b6
    int64_t v1; // 0x23b0b6
    int32_t v2 = v1; // 0x23b0bc
    uint32_t v3 = v2 - ((char)v1 > (char)v1 ? -0x2e78fe17 : -0x2e78fe18); // 0x23b0bc
    __asm_out_133(36, (int32_t)v1);
    if (((v3 - (int32_t)((char)v1 > (char)v1) ^ v2) & (v2 ^ -0x80000000)) < 0) {
        uint32_t v4 = *(int32_t *)((int64_t)v3 + 91); // 0x23b0c4
        *(char *)0x34f14cea = *(char *)0x34f14cea + (char)(v4 / 256);
        return a2 & 0xffffffff;
    }
    int64_t result = unknown_ffffffffe86bc627(); // 0x23b0d1
    char * v5 = (char *)result; // 0x23b0d6
    *v5 = *v5 - (char)(a4 / 256);
    return result;
}

// Address range: 0x23b0ef - 0x23b0f2
int64_t function_23b0ef(int64_t a1) {
    // 0x23b0ef
    int64_t result; // 0x23b0ef
    return result;
}

// Address range: 0x23b0fe - 0x23b11e
int64_t function_23b0fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 63); // 0x23b0fe
    *v1 = *v1 + (int32_t)a3;
    __asm_in_137((int16_t)a3);
    return function_ffffffff9bf7b186();
}

// Address range: 0x23b167 - 0x23b16f
int64_t function_23b167(void) {
    // 0x23b167
    int64_t result; // 0x23b167
    return result;
}

// Address range: 0x23b1d0 - 0x23b1d3
int64_t function_23b1d0(int64_t a1) {
    // 0x23b1d0
    int64_t result; // 0x23b1d0
    return result;
}

// Address range: 0x23b29e - 0x23b2bd
int64_t function_23b29e(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 0x533b4d7b); // 0x23b29e
    int64_t v2; // 0x23b29e
    *v1 = *v1 + (int32_t)v2;
    int32_t * v3 = (int32_t *)(v2 + 0x1e8e00a); // 0x23b2a8
    uint32_t v4 = *v3; // 0x23b2a8
    *v3 = (int32_t)a3;
    *(int32_t *)(int64_t)v4 = v4;
    return __asm_int3();
}

// Address range: 0x23b2ee - 0x23b2f0
int64_t function_23b2ee(int64_t a1) {
    // 0x23b2ee
    int64_t result; // 0x23b2ee
    return result;
}

// Address range: 0x23b31f - 0x23b329
int64_t function_23b31f(void) {
    // 0x23b31f
    return function_ffffffffb1e8da22();
}

// Address range: 0x23b333 - 0x23b336
int64_t function_23b333(int64_t a1) {
    // 0x23b333
    int64_t result; // 0x23b333
    return result;
}

// Address range: 0x23b397 - 0x23b398
int64_t function_23b397(void) {
    // 0x23b397
    int64_t result; // 0x23b397
    return result;
}

// Address range: 0x23b40e - 0x23b41a
int64_t function_23b40e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23b40e
    int64_t result; // 0x23b40e
    int32_t * v1 = (int32_t *)(result - 117); // 0x23b414
    *v1 = *v1 + (int32_t)a1;
    return result;
}

// Address range: 0x23b41c - 0x23b41d
int64_t function_23b41c(int64_t a1) {
    // 0x23b41c
    int64_t result; // 0x23b41c
    return result;
}

// Address range: 0x23b441 - 0x23b445
int64_t function_23b441(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23b441
    int64_t result; // 0x23b441
    return result;
}

// Address range: 0x23b491 - 0x23b496
int64_t function_23b491(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23b491
    int64_t result; // 0x23b491
    *(int32_t *)a1 = (int32_t)result + (int32_t)a4;
    return result;
}

// Address range: 0x23b51d - 0x23b520
int64_t function_23b51d(void) {
    // 0x23b51d
    int64_t result; // 0x23b51d
    return result;
}

// Address range: 0x23b55c - 0x23b55d
int64_t function_23b55c(void) {
    // 0x23b55c
    int64_t result; // 0x23b55c
    return result;
}

// Address range: 0x23b568 - 0x23b660
int64_t function_23b568(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x23b568
    __asm_int(45);
    uint64_t v1 = unknown_10630570(); // 0x23b56a
    bool v2; // 0x23b568
    if (!v2) {
        uint32_t v3 = *(int32_t *)-0x2229e0f84e3a45d5; // 0x23b571
        char v4 = *(char *)(int64_t)v3; // 0x23b57a
        char * v5 = (char *)(a3 & -256 | (int64_t)((char)v2 + (char)a3 - v4)); // 0x23b57c
        *v5 = *v5 | (char)v3;
        return unknown_d75584();
    }
    uint64_t v6 = v1 + (v2 ? 105 : 104); // 0x23b5d7
    int64_t v7 = v6 % 256 | v1 & -256; // 0x23b5d7
    char * v8 = (char *)(v7 + 4); // 0x23b5d9
    char v9 = v1 / 256; // 0x23b5d9
    *v8 = *v8 + v9;
    int64_t v10; // 0x23b568
    int64_t v11 = v10 ^ a4;
    int32_t v12 = v11; // 0x23b5dd
    int64_t v13 = v11 & 0xffffffff; // 0x23b5dd
    uint64_t v14 = v13 - 1; // 0x23b5df
    if (v12 == 0 || v14 == 0) {
        int64_t v15 = 0x8000 * (int64_t)(v12 < 0) | 0x4000 * (int64_t)(v12 == 0) | 1024 * (int64_t)(llvm_ctpop_i8((char)v11) % 2 == 0) | 512; // 0x23b5e1
        int64_t v16 = v15 | a3 & 0xffff0000; // 0x23b5e1
        __asm_out_138((int16_t)v7, (int32_t)v16);
        unsigned char v17 = *(char *)(a1 - 0x6afd08f5); // 0x23b5ec
        return v16 + 0x4cb168b4 & 0xffffffff | (int64_t)(v17 > ((char)((v15 + 0xfec3) / 256) & -3));
    }
    // 0x23b606
    *(int32_t *)a1 = __asm_insd((int16_t)v7);
    char * v18 = (char *)(v10 + 19); // 0x23b608
    *v18 = *v18 & v9;
    char * v19 = (char *)((v7 & 0xffffffff) + 0x3d003a73); // 0x23b60b
    *v19 = *v19 + (char)v6;
    int32_t * v20 = (int32_t *)v14; // 0x23b611
    *v20 = *v20 + (int32_t)a1;
    char * v21 = (char *)a5; // 0x23b616
    unsigned char v22 = *v21; // 0x23b616
    unsigned char v23 = v22 + (char)a3; // 0x23b616
    *v21 = v23;
    __asm_int3();
    char * v24 = (char *)(8 * a2 + a5); // 0x23b619
    *v24 = (char)(v23 < v22) + (char)(v14 / 256) + *v24;
    __asm_wait();
    unknown_28be0225();
    char * v25 = (char *)(v13 + 0x656cfbb9); // 0x23b624
    *v25 = *v25 + (char)a5;
    return unknown_3d259e30();
}

// Address range: 0x23b661 - 0x23b690
int64_t function_23b661(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23b661
    unknown_57de386b();
    uint32_t v1 = __asm_in(-4); // 0x23b66a
    int64_t v2 = unknown_ffffffffc1d2d278(); // 0x23b672
    *(char *)0x1438d5e32 = *(char *)0x1438d5e32 & (char)v2;
    uint64_t v3 = unknown_3a362d83(); // 0x23b67d
    *(char *)((int64_t)v1 - 0x1afe17a7) = -81;
    char v4 = *(char *)(v3 + 121); // 0x23b68c
    return 256 * (int64_t)(v4 | (char)(v3 / 256)) | v3 & -0xff01;
}

// Address range: 0x23b6bc - 0x23b6df
int64_t function_23b6bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 - 0xe9d61db); // 0x23b6be
    int64_t v2; // 0x23b6bc
    *v1 = *v1 + (int32_t)v2;
    int64_t result = unknown_76114ece() - (((char)v2 ^ -2) < 18 ? 0x2d8ebe08 : 0x2d8ebe07) & 0xffffff00; // 0x23b6d9
    char * v3 = (char *)result; // 0x23b6db
    *v3 = *v3 - 52;
    return result;
}

// Address range: 0x23b6fc - 0x23b6ff
int64_t function_23b6fc(int64_t a1) {
    // 0x23b6fc
    int64_t result; // 0x23b6fc
    return result;
}

// Address range: 0x23b70e - 0x23b70f
int64_t function_23b70e(void) {
    // 0x23b70e
    int64_t result; // 0x23b70e
    return result;
}

// Address range: 0x23b72e - 0x23b731
int64_t function_23b72e(int64_t a1) {
    // 0x23b72e
    int64_t result; // 0x23b72e
    return result;
}

// Address range: 0x23b739 - 0x23b73b
int64_t function_23b739(void) {
    // 0x23b739
    return function_23b70e();
}

// Address range: 0x23b745 - 0x23b74a
int64_t function_23b745(void) {
    // 0x23b745
    return function_56f0c0ed();
}

// Address range: 0x23b75f - 0x23b760
int64_t function_23b75f(void) {
    // 0x23b75f
    int64_t result; // 0x23b75f
    return result;
}

// Address range: 0x23b772 - 0x23b793
int64_t function_23b772(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x23b772
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x23b772
    int32_t * v2 = (int32_t *)(a2 - 74 + v1); // 0x23b773
    *v2 = *v2 ^ (int32_t)a3;
    *(char *)0x734bb938b50eadd7 = (char)v1;
    *(int64_t *)(v1 - 0x1a03fe18) = a7;
    return function_5228f7b9();
}

// Address range: 0x23b80d - 0x23b810
int64_t function_23b80d(int64_t a1) {
    // 0x23b80d
    int64_t result; // 0x23b80d
    return result;
}

// Address range: 0x23b857 - 0x23b85d
int64_t function_23b857(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23b857
    int64_t result; // 0x23b857
    *(int32_t *)a1 = (int32_t)result;
    __asm_int(3);
    __asm_out_138((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x23b866 - 0x23b869
int64_t function_23b866(void) {
    // 0x23b866
    int64_t result; // 0x23b866
    return result;
}

// Address range: 0x23b8e9 - 0x23b90a
int64_t function_23b8e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23b8e9
    int64_t v1; // 0x23b8e9
    float80_t v2; // 0x23b8e9
    *(float80_t *)(2 * v1 + 32 + v1) = __asm_fbstp(v2);
    char * v3 = (char *)(a3 + 0x3200013d); // 0x23b8ef
    *v3 = *v3 & (char)a4;
    int64_t v4; // 0x23b8e9
    int32_t v5 = *(int32_t *)&v4; // 0x23b8f9
    int64_t v6; // 0x23b8e9
    unsigned char v7 = *(char *)&v6; // 0x23b900
    int64_t result = (int64_t)(v5 + (int32_t)v1 & -256) | (int64_t)v7; // 0x23b900
    bool v8; // 0x23b8e9
    __asm_outsb((int16_t)a3, *(char *)((v8 ? -1 : 1) + a2));
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x23b93a - 0x23b93b
int64_t function_23b93a(void) {
    // 0x23b93a
    int64_t result; // 0x23b93a
    return result;
}

// Address range: 0x23b97e - 0x23b9b5
int64_t function_23b97e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23b97e
    unknown_ffffffffc5b49d87();
    int64_t v1; // 0x23b97e
    unsigned char v2 = (char)v1;
    *(char *)a1 = v2 / 2 | 128 * v2;
    unknown_72224690();
    int32_t * v3 = (int32_t *)((v1 & 0xffffffff) - 0xc05404d); // 0x23b998
    *v3 = *v3 + (int32_t)a4;
    char v4 = unknown_82e91a8(); // 0x23b9a7
    __asm_out(12, v4);
    if (a4 != 1 == v4 == -125) {
        function_23b93a();
    }
    // 0x23b9ad
    unknown_3b2f19b3();
    int64_t v5; // 0x23b97e
    return (int64_t)&v5;
}

// Address range: 0x23bab2 - 0x23bab4
int64_t function_23bab2(void) {
    // 0x23bab2
    int64_t v1; // 0x23bab2
    return unknown_6b509e2(v1, v1);
}

// Address range: 0x23bac5 - 0x23bac8
int64_t function_23bac5(int64_t a1) {
    // 0x23bac5
    int64_t result; // 0x23bac5
    return result;
}

// Address range: 0x23bad8 - 0x23bae1
int64_t function_23bad8(int64_t a1, int64_t a2) {
    // 0x23bad8
    int64_t v1; // 0x23bad8
    char * v2 = (char *)(a2 - 71 + v1); // 0x23bad8
    *v2 = *v2 | (char)v1;
    return unknown_6b509e2(a1, a2);
}

// Address range: 0x23bb10 - 0x23bb15
int64_t function_23bb10(void) {
    // 0x23bb10
    return function_505a699b();
}

// Address range: 0x23bbe3 - 0x23bc25
int64_t function_23bbe3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2; // 0x23bbe3
    unsigned char v3 = (char)v2;
    *(char *)v2 = v3 / 128 | 2 * v3;
    int64_t v4; // 0x23bbe3
    uint32_t v5 = (int32_t)(v4 & 0xffffff00 | (int64_t)__asm_in_134(-31)); // 0x23bbe7
    int32_t v6 = v5 < 0x61520001; // 0x23bbec
    uint32_t v7 = v5 - 0x4b72b572 + v6; // 0x23bbec
    int32_t v8 = v7 + v6; // 0x23bbec
    int64_t v9 = v7; // 0x23bbec
    int3_t v10; // 0x23bbe3
    int3_t v11 = v10 - 1; // 0x23bbf2
    int64_t v12; // 0x23bbe3
    __frontend_reg_store_fpr(v11, (float80_t)*(float32_t *)&v12);
    while (((v8 ^ v5) & (v8 ^ -0x80000000)) < 0) {
        // 0x23bbf6
        __asm_out(127, (char)v7);
        *(char *)(v12 - 86) = (char)(v7 / 256);
        if (v7 < 0) {
            // break -> 0x23bbfd
            break;
        }
        v5 = (int32_t)(v9 & 0xffffff00 | (int64_t)__asm_in_134(-31));
        v6 = v5 < 0x61520001;
        v7 = v5 - 0x4b72b572 + v6;
        v8 = v7 + v6;
        v9 = v7;
        v11--;
        __frontend_reg_store_fpr(v11, (float80_t)*(float32_t *)&v12);
    }
    // 0x23bbfd
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a2;
    __writefsbyte(0x653b7b07, __readfsbyte(0x653b7b07) + (char)(v12 / 256));
    int64_t v13 = (v9 & 0xffff00ff | (int64_t)(v7 + 0xff00 & 0xff00)) + 0xd4de56e3; // 0x23bc09
    char v14 = *(char *)(v13 & 0xffffffff); // 0x23bc14
    return v13 & 0xffffff00 | (int64_t)((v14 | (char)v13) - 101);
}

// Address range: 0x23bc36 - 0x23bc43
int64_t function_23bc36(void) {
    // 0x23bc36
    return (int64_t)*(int32_t *)-0x391dc5ff30ff5474;
}

// Address range: 0x23bc80 - 0x23bcbf
int64_t function_23bc80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int64_t v2; // 0x23bc80
    int64_t v3 = v2 & -0xff01 | (int64_t)&g11; // 0x23bc80
    int32_t v4 = v3; // 0x23bc82
    int32_t v5 = *(int32_t *)v3; // 0x23bc82
    bool v6; // 0x23bc80
    int32_t v7 = v6; // 0x23bc82
    uint32_t v8 = v4 + v7 + v5; // 0x23bc82
    int32_t v9 = v8 + v7; // 0x23bc82
    if (((v9 ^ v4) & (v9 ^ v5)) < 0) {
        // 0x23bc8a
        return a2 & 0xffffffff;
    }
    int32_t v10 = *(int32_t *)((2 * v2 & -512 | 2) + (int64_t)v8); // 0x23bcb3
    *(char *)a3 = (char)a4;
    *(int32_t *)v1 = *(int32_t *)&v1 - 114;
    return 0x1e826ef * v10;
}

// Address range: 0x23bcf1 - 0x23bcf4
int64_t function_23bcf1(void) {
    // 0x23bcf1
    int64_t result; // 0x23bcf1
    return result;
}

// Address range: 0x23bd3a - 0x23bd3b
int64_t function_23bd3a(void) {
    // 0x23bd3a
    int64_t result; // 0x23bd3a
    return result;
}

// Address range: 0x23bd5f - 0x23bd65
int64_t function_23bd5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23bd5f
    int64_t v1; // 0x23bd5f
    int32_t * v2 = (int32_t *)(v1 + 1); // 0x23bd61
    *v2 = *v2 + (int32_t)a4;
    return 2 * v1 & 0xffffffff;
}

// Address range: 0x23bdb1 - 0x23bdb6
int64_t function_23bdb1(void) {
    // 0x23bdb1
    int64_t result; // 0x23bdb1
    // 0x23bdb3
    return result;
}

// Address range: 0x23bdc5 - 0x23bdc8
int64_t function_23bdc5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23bdc5
    int64_t result; // 0x23bdc5
    return result;
}

// Address range: 0x23bdea - 0x23be02
int64_t function_23bdea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23bdea
    int64_t v1; // 0x23bdea
    int32_t * v2 = (int32_t *)(v1 + 0x2480f001); // 0x23bdec
    *v2 = *v2 | (int32_t)v1;
    int32_t * v3 = (int32_t *)(v1 + 0x1e825e61); // 0x23bdf2
    *v3 = *v3 | (int32_t)a4;
    int64_t result = unknown_542e95fe((int32_t)v1 + (int32_t)a1); // 0x23bdf8
    int64_t v4; // 0x23bdea
    *(char *)a3 = *(char *)&v4 + 1;
    return result;
}

// Address range: 0x23be05 - 0x23be0e
int64_t function_23be05(int64_t a1) {
    int64_t v1 = unknown_50e64a0b(a1); // 0x23be05
    return (v1 + 25) % 256 | v1 & -256;
}

// Address range: 0x23be87 - 0x23be8e
int64_t function_23be87(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23be87
    int64_t result; // 0x23be87
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x23bf2f - 0x23bf37
int64_t function_23bf2f(int64_t a1, int64_t a2) {
    // 0x23bf2f
    int64_t v1; // 0x23bf2f
    *(int32_t *)a1 = 2 * (int32_t)v1;
    return 0x2d1aa972;
}

// Address range: 0x23bf4c - 0x23bf6d
int64_t function_23bf4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23bf4c
    int64_t v1; // 0x23bf4c
    uint64_t v2 = v1;
    char * v3 = (char *)(v2 - 118); // 0x23bf4f
    *v3 = *v3 + (char)(v2 / 256);
    *(char *)-0x176cbecc = *(char *)-0x176cbecc | (char)v2;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a2;
    int16_t v4 = 256 * (int16_t)v2 >> 8; // 0x23bf6a
    return v2 & -0x10000 | (int64_t)(v4 * v4);
}

// Address range: 0x23bf9b - 0x23bf9c
int64_t function_23bf9b(void) {
    // 0x23bf9b
    int64_t result; // 0x23bf9b
    return result;
}

// Address range: 0x23bfd7 - 0x23bfd8
int64_t function_23bfd7(int64_t a1) {
    // 0x23bfd7
    int64_t result; // 0x23bfd7
    return result;
}

// Address range: 0x23bffd - 0x23c003
int64_t function_23bffd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 27); // 0x23bffd
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x23bffd
    return result;
}

// Address range: 0x23c02b - 0x23c046
int64_t function_23c02b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23c02b
    int64_t v1; // 0x23c02b
    uint64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = unknown_ffffffffb2246c31(); // 0x23c02b
    char v5 = __asm_in_137((int16_t)a3); // 0x23c033
    int32_t * v6 = (int32_t *)(v2 + 0x6401e865); // 0x23c039
    *v6 = *v6 | (int32_t)v2;
    *(char *)v3 = *(char *)&v3 | (char)(v2 / 256);
    return (v4 | (int64_t)v5) & -256 | (int64_t)(v5 + (char)a2);
}

// Address range: 0x23c08e - 0x23c08f
int64_t function_23c08e(int64_t a1) {
    // 0x23c08e
    int64_t result; // 0x23c08e
    return result;
}
