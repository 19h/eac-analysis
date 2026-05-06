/*
 * Targeted RetDec C for native executable gap queue batch 3907.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2c315-0x2c33c rank=- name=- kind=- bytes=- uncovered=-
 *   0x453be-0x453e6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4abc3-0x4abec rank=- name=- kind=- bytes=- uncovered=-
 *   0x53afc-0x53b22 rank=- name=- kind=- bytes=- uncovered=-
 *   0x55f0a-0x55f32 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6123c-0x61266 rank=- name=- kind=- bytes=- uncovered=-
 *   0x67438-0x6745f rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c3400-0x2c342b rank=- name=- kind=- bytes=- uncovered=-
 *   0x48c8a4-0x48c8cc rank=- name=- kind=- bytes=- uncovered=-
 *   0x49a2a7-0x49a2d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49b344-0x49b370 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b13b8-0x4b13e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ba645-0x4ba670 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bb7aa-0x4bb7d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c433a-0x4c4360 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4eef56-0x4eef80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ef117-0x4ef140 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fbceb-0x4fbd10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fe25a-0x4fe280 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50b198-0x50b1c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50e68c-0x50e6b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5146c8-0x5146f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x535ad8-0x535b00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x550976-0x5509a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5571b9-0x5571e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x55a5a6-0x55a5d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5681c8-0x5681f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56f995-0x56f9c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5724ba-0x5724e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x573559-0x573580 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5736b5-0x5736e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x58295b-0x582980 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_20650();
int64_t function_29d94();
int64_t function_2c315(int64_t result, int64_t a2);
int64_t function_2c3400(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2c438();
int64_t function_453be(int64_t a1);
int64_t function_48c8a4(int64_t a1);
int64_t function_49a09f();
int64_t function_49a22d();
int64_t function_49a2a7(void);
int64_t function_49a2a8(void);
int64_t function_49a2b0(void);
int64_t function_49b06f();
int64_t function_49b344(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_49e770();
int64_t function_4abc3(void);
int64_t function_4abc4(int64_t a1);
int64_t function_4b13b8(void);
int64_t function_4b13d0(void);
int64_t function_4b9df0();
int64_t function_4ba5c4();
int64_t function_4ba5ce();
int64_t function_4ba645(int64_t a1);
int64_t function_4ba650(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4bb112();
int64_t function_4bb34e();
int64_t function_4bb7aa(int64_t a1);
int64_t function_4bb7c4(void);
int64_t function_4c433a(void);
int64_t function_4c4350(void);
int64_t function_4eeb50();
int64_t function_4eef56(void);
int64_t function_4ef037();
int64_t function_4ef03c();
int64_t function_4ef117(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4fbbb6();
int64_t function_4fbca0();
int64_t function_4fbceb(void);
int64_t function_4fbd00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_4fe059();
int64_t function_4fe25a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4fe25d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_50b14f();
int64_t function_50b198(void);
int64_t function_50b1a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_50e640();
int64_t function_50e64f();
int64_t function_50e68c(void);
int64_t function_50e6a0(void);
int64_t function_5146c8(void);
int64_t function_5146e7(void);
int64_t function_535a8f();
int64_t function_535ad8(void);
int64_t function_535ae0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_53afc(int64_t a1);
int64_t function_53b1c(void);
int64_t function_550900();
int64_t function_55094e();
int64_t function_550976(void);
int64_t function_550980(int64_t a1, int64_t a2);
int64_t function_55702c();
int64_t function_557032();
int64_t function_5570e9();
int64_t function_5571b9(int64_t a1);
int64_t function_5571c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5571ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_55a4df();
int64_t function_55a54d();
int64_t function_55a5a6(void);
int64_t function_55a5bd(void);
int64_t function_55a5c0(void);
int64_t function_55f0a(int64_t a1);
int64_t function_5681c8(int64_t a1);
int64_t function_5681e0(int64_t a1);
int64_t function_56f980();
int64_t function_56f995(int64_t a1);
int64_t function_5724ba(int64_t a1);
int64_t function_573559(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5736b5(void);
int64_t function_582722();
int64_t function_58295b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_58295e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6123c(int64_t a1, int64_t a2);
int64_t function_67438(int64_t a1);

// Address range: 0x2c315 - 0x2c33b
int64_t function_2c315(int64_t result, int64_t a2) {
    // 0x2c315
    function_29d94();
    function_2c438(result + 8, a2 + 8);
    return result;
}

// Address range: 0x453be - 0x453e5
int64_t function_453be(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result = *v1;
    uint32_t v2 = result - 1;
    *v1 = v2;
    if (result >= 0 == (result != 0)) {
        // 0x453e4
        return result;
    }
    // 0x453df
    int64_t v3; // 0x453be
    return function_4eeb50(a1, v3, g4 == 0 ? (int64_t)v2 : v3);
}

// Address range: 0x4abc3 - 0x4abc4
int64_t function_4abc3(void) {
    // 0x4abc3
    int64_t result; // 0x4abc3
    return result;
}

// Address range: 0x4abc4 - 0x4abeb
int64_t function_4abc4(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result = *v1;
    uint32_t v2 = result - 1;
    *v1 = v2;
    if (result >= 0 == (result != 0)) {
        // 0x4abea
        return result;
    }
    // 0x4abe5
    int64_t v3; // 0x4abc4
    return function_4eeb50(a1, v3, g4 == 0 ? (int64_t)v2 : v3);
}

// Address range: 0x53afc - 0x53b1b
int64_t function_53afc(int64_t a1) {
    int32_t v1 = _ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii_constprop_31(a1 + 16); // 0x53b0c
    int64_t result; // 0x53afc
    if (v1 >= 0 == (v1 != 0)) {
        // 0x53b19
        return result;
    }
    // 0x53b10
    return function_4eeb50(a1, result, result);
}

// Address range: 0x53b1c - 0x53b22
int64_t function_53b1c(void) {
    // 0x53b1c
    return (int64_t)&g1;
}

// Address range: 0x55f0a - 0x55f31
int64_t function_55f0a(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result = *v1;
    uint32_t v2 = result - 1;
    *v1 = v2;
    if (result >= 0 == (result != 0)) {
        // 0x55f30
        return result;
    }
    // 0x55f2b
    int64_t v3; // 0x55f0a
    return function_4eeb50(a1, v3, g4 == 0 ? (int64_t)v2 : v3);
}

// Address range: 0x6123c - 0x61266
int64_t function_6123c(int64_t a1, int64_t a2) {
    if (a2 == 0) {
        // 0x61265
        int64_t result; // 0x6123c
        return result;
    }
    uint64_t v1 = a2 - 16; // 0x6124d
    __asm_rep_stosb_memset((char *)a2, 0, *(int64_t *)(a2 - 8));
    *(int64_t *)v1 = 0;
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x6125b
    if (v1 < *v2) {
        // 0x61261
        *v2 = v1;
    }
    // 0x61265
    return 0;
}

// Address range: 0x67438 - 0x6745f
int64_t function_67438(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result = *v1;
    uint32_t v2 = result - 1;
    *v1 = v2;
    if (result >= 0 == (result != 0)) {
        // 0x6745e
        return result;
    }
    // 0x67459
    int64_t v3; // 0x67438
    return function_4eeb50(a1, v3, g4 == 0 ? (int64_t)v2 : v3);
}

// Address range: 0x2c3400 - 0x2c3428
int64_t function_2c3400(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2c3400
    int64_t v1; // 0x2c3400
    return v1 & -184;
}

// Address range: 0x48c8a4 - 0x48c8cb
int64_t function_48c8a4(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result = *v1;
    uint32_t v2 = result - 1;
    *v1 = v2;
    if (result >= 0 == (result != 0)) {
        // 0x48c8ca
        return result;
    }
    // 0x48c8c5
    int64_t v3; // 0x48c8a4
    return function_4eeb50(a1, v3, g4 == 0 ? (int64_t)v2 : v3);
}

// Address range: 0x49a2a7 - 0x49a2a8
int64_t function_49a2a7(void) {
    // 0x49a2a7
    int64_t result; // 0x49a2a7
    return result;
}

// Address range: 0x49a2a8 - 0x49a2aa
int64_t function_49a2a8(void) {
    // 0x49a2a8
    return function_49a22d();
}

// Address range: 0x49a2b0 - 0x49a2c3
int64_t function_49a2b0(void) {
    // 0x49a2b0
    int64_t v1; // 0x49a2b0
    int64_t v2 = v1;
    *(int64_t *)(v2 + 328) = *(int64_t *)(v2 + 320);
    return function_49a09f();
}

// Address range: 0x49b344 - 0x49b36b
int64_t function_49b344(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x49b344
    int64_t v1; // 0x49b344
    char * v2 = (char *)(v1 - 115); // 0x49b344
    *v2 = *v2 + (char)a4;
    function_49e770(v1, 1);
    return function_49b06f();
}

// Address range: 0x4b13b8 - 0x4b13ca
int64_t function_4b13b8(void) {
    // 0x4b13b8
    return 0xffffffff;
}

// Address range: 0x4b13d0 - 0x4b13d6
int64_t function_4b13d0(void) {
    // 0x4b13d0
    return 1;
}

// Address range: 0x4ba645 - 0x4ba64e
int64_t function_4ba645(int64_t a1) {
    // 0x4ba645
    return function_4ba5c4(a1 + 1);
}

// Address range: 0x4ba650 - 0x4ba661
int64_t function_4ba650(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4ba650
    *(int16_t *)a1 = 0;
    return function_4ba5ce(a1 + 2);
}

// Address range: 0x4bb7aa - 0x4bb7c4
int64_t function_4bb7aa(int64_t a1) {
    // 0x4bb7aa
    bool v1; // 0x4bb7aa
    if (!v1) {
        function_4bb112();
    }
    // 0x4bb7b0
    int64_t v2; // 0x4bb7aa
    function_4b9df0(v2, a1);
    return function_4bb112();
}

// Address range: 0x4bb7c4 - 0x4bb7ce
int64_t function_4bb7c4(void) {
    // 0x4bb7c4
    return function_4bb34e();
}

// Address range: 0x4c433a - 0x4c4348
int64_t function_4c433a(void) {
    // 0x4c433a
    int64_t v1; // 0x4c433a
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x4c433a
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return (int64_t)&g2;
}

// Address range: 0x4c4350 - 0x4c4358
int64_t function_4c4350(void) {
    // 0x4c4350
    return (int64_t)&g3;
}

// Address range: 0x4eef56 - 0x4eef71
int64_t function_4eef56(void) {
    // 0x4eef56
    return (int64_t)*(int32_t *)(function_20650() + 8);
}

// Address range: 0x4ef117 - 0x4ef133
int64_t function_4ef117(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4ef117
    int64_t v1; // 0x4ef117
    if ((v1 & 64) == 0) {
        function_4ef037();
    }
    // 0x4ef121
    return function_4ef03c();
}

// Address range: 0x4fbceb - 0x4fbcfe
int64_t function_4fbceb(void) {
    // 0x4fbceb
    int128_t v1; // 0x4fbceb
    __asm_ucomisd(__asm_orpd(__asm_addsd(v1, v1), v1), v1);
    bool v2; // 0x4fbceb
    if (!v2) {
        function_4fbca0();
    }
    // 0x4fbcf9
    return function_4fbbb6();
}

// Address range: 0x4fbd00 - 0x4fbd0c
int64_t function_4fbd00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x4fbd00
    *(int64_t *)(a1 + 8) = -1;
    return result;
}

// Address range: 0x4fe25a - 0x4fe25c
int64_t function_4fe25a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4fe25a
    int64_t result; // 0x4fe25a
    return result;
}

// Address range: 0x4fe25d - 0x4fe276
int64_t function_4fe25d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x4fe25d
    int64_t v1; // 0x4fe25d
    *(char *)(a4 + 4) = (char)(v1 + a4 / 256);
    char * v2 = (char *)(a4 - 119); // 0x4fe267
    *v2 = *v2 + (char)a4;
    __asm_int3();
    return function_4fe059();
}

// Address range: 0x50b198 - 0x50b19a
int64_t function_50b198(void) {
    // 0x50b198
    int64_t v1; // 0x50b198
    return v1 & -21;
}

// Address range: 0x50b1a0 - 0x50b1b4
int64_t function_50b1a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x50b1a0
    int64_t v1; // 0x50b1a0
    return function_50b14f(v1);
}

// Address range: 0x50e68c - 0x50e698
int64_t function_50e68c(void) {
    // 0x50e68c
    return function_50e640();
}

// Address range: 0x50e6a0 - 0x50e6a7
int64_t function_50e6a0(void) {
    // 0x50e6a0
    return function_50e64f();
}

// Address range: 0x5146c8 - 0x5146ce
int64_t function_5146c8(void) {
    // 0x5146c8
    int64_t result; // 0x5146c8
    return result;
}

// Address range: 0x5146e7 - 0x5146ee
int64_t function_5146e7(void) {
    // 0x5146e7
    int64_t result; // 0x5146e7
    int32_t * v1 = (int32_t *)(result - 119); // 0x5146e7
    *v1 = *v1 - 1;
    return result;
}

// Address range: 0x535ad8 - 0x535ada
int64_t function_535ad8(void) {
    // 0x535ad8
    int64_t v1; // 0x535ad8
    return v1 & -21;
}

// Address range: 0x535ae0 - 0x535af4
int64_t function_535ae0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x535ae0
    int64_t v1; // 0x535ae0
    return function_535a8f(v1);
}

// Address range: 0x550976 - 0x550980
int64_t function_550976(void) {
    // 0x550976
    int64_t wstr; // 0x550976
    wmemset((int32_t *)wstr, (int32_t)wstr, (int32_t)wstr);
    return function_55094e();
}

// Address range: 0x550980 - 0x550995
int64_t function_550980(int64_t a1, int64_t a2) {
    int64_t result = function_550900(0, 0, a2); // 0x55098b
    *(int64_t *)a1 = result;
    return result;
}

// Address range: 0x5571b9 - 0x5571c7
int64_t function_5571b9(int64_t a1) {
    // 0x5571b9
    int64_t v1; // 0x5571b9
    return function_5570e9(v1);
}

// Address range: 0x5571c7 - 0x5571ce
int64_t function_5571c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5571c7
    return function_557032();
}

// Address range: 0x5571ce - 0x5571d5
int64_t function_5571ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5571ce
    return function_55702c();
}

// Address range: 0x55a5a6 - 0x55a5bc
int64_t function_55a5a6(void) {
    // 0x55a5a6
    int64_t v1; // 0x55a5a6
    int64_t v2 = v1;
    if (*(int64_t *)(v2 + 16) < *(int64_t *)(v2 + 24)) {
        function_55a4df();
    }
    // 0x55a5b4
    return function_55a54d();
}

// Address range: 0x55a5bd - 0x55a5c0
int64_t function_55a5bd(void) {
    // 0x55a5bd
    int64_t result; // 0x55a5bd
    return result;
}

// Address range: 0x55a5c0 - 0x55a5c3
int64_t function_55a5c0(void) {
    // 0x55a5c0
    int64_t result; // 0x55a5c0
    return result;
}

// Address range: 0x5681c8 - 0x5681de
int64_t function_5681c8(int64_t a1) {
    // 0x5681c8
    return (*(char *)(a1 + 32) & 5) == 0 ? a1 : 0;
}

// Address range: 0x5681e0 - 0x5681ee
int64_t function_5681e0(int64_t a1) {
    // 0x5681e0
    return (*(char *)(a1 + 32) & 5) == 0 ? a1 : 0;
}

// Address range: 0x56f995 - 0x56f9b2
int64_t function_56f995(int64_t a1) {
    // 0x56f995
    function_56f980();
    return _ZGTtdlPv(a1);
}

// Address range: 0x5724ba - 0x5724e0
int64_t function_5724ba(int64_t a1) {
    // 0x5724ba
    int64_t v1; // 0x5724ba
    if (v1 + 16 != a1) {
        // 0x5724ca
        function_4eeb50(a1, v1, v1);
    }
    // 0x5724cf
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g5;
}

// Address range: 0x573559 - 0x573580
int64_t function_573559(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 0x7d8b48ff); // 0x57355f
    *v1 = *v1 / 2;
    int64_t v2; // 0x573559
    if ((int32_t)a1 != (int32_t)(int64_t)&v2) {
        // 0x573572
        function_4eeb50(a1, a4, a3);
    }
    // 0x573577
    int64_t v3; // 0x573559
    _Unwind_Resume((struct _Unwind_Exception *)(v3 & (v3 | -256)));
    return (int64_t)&g5;
}

// Address range: 0x5736b5 - 0x5736e0
int64_t function_5736b5(void) {
    // 0x5736b5
    int64_t v1; // 0x5736b5
    int64_t v2 = *(int64_t *)(v1 - 96); // 0x5736bb
    if (v2 != v1 + 16) {
        // 0x5736cb
        function_4eeb50(v2, v1, v1);
    }
    // 0x5736d0
    _Unwind_Resume((struct _Unwind_Exception *)(v1 + 0x552ffb & 0xffffffff));
    return (int64_t)&g5;
}

// Address range: 0x58295b - 0x58295d
int64_t function_58295b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x58295b
    int64_t result; // 0x58295b
    return result;
}

// Address range: 0x58295e - 0x58297b
int64_t function_58295e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x58295e
    int64_t v1; // 0x58295e
    *(char *)(v1 + a3) = 41;
    *(char *)(v1 + 264) = 41;
    return function_582722();
}

// --------------- Statically Linked Functions ----------------

// int64_t _ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii_constprop_31(int64_t a1);
