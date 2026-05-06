/*
 * Targeted RetDec C for native executable gap queue batch 1208.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x124f46-0x125146 rank=- name=- kind=- bytes=- uncovered=-
 *   0x125146-0x125346 rank=- name=- kind=- bytes=- uncovered=-
 *   0x125346-0x125546 rank=- name=- kind=- bytes=- uncovered=-
 *   0x125546-0x125746 rank=- name=- kind=- bytes=- uncovered=-
 *   0x125746-0x125946 rank=- name=- kind=- bytes=- uncovered=-
 *   0x125946-0x125b46 rank=- name=- kind=- bytes=- uncovered=-
 *   0x125b46-0x125d46 rank=- name=- kind=- bytes=- uncovered=-
 *   0x125d46-0x125f46 rank=- name=- kind=- bytes=- uncovered=-
 *   0x24c17d-0x24c37d rank=- name=- kind=- bytes=- uncovered=-
 *   0x24c37d-0x24c57d rank=- name=- kind=- bytes=- uncovered=-
 *   0x47a9ee-0x47aaee rank=- name=- kind=- bytes=- uncovered=-
 *   0x47aaee-0x47acee rank=- name=- kind=- bytes=- uncovered=-
 *   0x47acee-0x47aeee rank=- name=- kind=- bytes=- uncovered=-
 *   0x47b0ee-0x47b2ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x47b2ee-0x47b3ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x47b6ee-0x47b8ee rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_124f46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_12507c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1251be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12532a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12549b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12560b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12575b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1258cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_125a3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_125bc4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_125d20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_125ed1(void);
int64_t function_125f3e(void);
int64_t function_125f3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24c17d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_24c284(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_24c3c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24c55e(void);
int64_t function_47a99f();
int64_t function_47a9e2();
int64_t function_47a9ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_47ac90(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47ad2d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47ad4d(void);
int64_t function_47ad50(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47ae5a(void);
int64_t function_47ae67(void);
int64_t function_47ae7a(void);
int64_t function_47aeae(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47aec8(void);
int64_t function_47aecd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47aeef();
int64_t function_47af26();
int64_t function_47b0ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_47b104(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47b120(void);
int64_t function_47b139(int64_t a1);
int64_t function_47b161(int64_t a1);
int64_t function_47b16c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_47b1fd(void);
int64_t function_47b215(void);
int64_t function_47b2ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47b31b(void);
int64_t function_47b342(void);
int64_t function_47b366(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47b38c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47b3cf(int64_t a1);
int64_t function_47b3da(void);
int64_t function_47b6ee(int64_t a1, int64_t a2);
int64_t function_47b74e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_47b78d(void);
int64_t function_47b7c2(void);
int64_t function_47b7cd(int64_t a1);
int64_t function_47b805(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47b82f(void);
int64_t function_47b842(int64_t a1);
int64_t function_c4258();
int64_t function_c57b8();
int64_t function_ffffffff955aebee();
int64_t function_fffffffffe5f4224();

// Address range: 0x124f46 - 0x12507c
int64_t function_124f46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x124f46
    int64_t v1; // bp-48, 0x124f46
    v1 = (int64_t)&v1 + 16;
    return function_c57b8(a1, a2, a3, a4, a5, a6, 0x42ba1400);
}

// Address range: 0x12507c - 0x1251be
int64_t function_12507c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x12507c
    int64_t v1; // bp-32, 0x12507c
    int64_t v2 = (int64_t)&v1; // 0x1251a2
    int64_t v3 = v2; // bp-40, 0x1251a2
    v1 = v2 + 16;
    return function_c57b8(a1, a2, a3, a4, a5, a6, (int64_t)&v3);
}

// Address range: 0x1251be - 0x12532a
int64_t function_1251be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1251be
    int64_t v1; // 0x1251be
    return function_c57b8(a1, a2, a3, a4, v1, v1, a5);
}

// Address range: 0x12532a - 0x12549b
int64_t function_12532a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x12532a
    int64_t v1; // 0x12532a
    bool v2; // 0x12532a
    return function_c57b8(a1, a2, v1, a4, v1, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x12549b - 0x12560b
int64_t function_12549b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12549b
    int64_t v1; // bp-40, 0x12549b
    int64_t v2 = (int64_t)&v1; // 0x125520
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x12552c
    int64_t v4 = v2 - 8; // 0x12552c
    int64_t * v5 = (int64_t *)v4; // 0x12552c
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x125530
    *v6 = v2;
    int64_t v7 = *(int64_t *)(v2 + 8); // 0x125550
    *v6 = v7;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x125554
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x125584
    *v9 = 0x5cca7a4d;
    *(int64_t *)(v2 - 40) = v3;
    *v5 = *v9;
    *v9 = 0x11f7eb;
    *(int64_t *)(v2 + 16) = v7;
    *v8 = v3;
    *v6 = v2;
    *v6 = *v5;
    *v8 = v4;
    int64_t v10; // 0x12549b
    return function_c57b8(a1, a2, a3, a4, v10, v10, v10);
}

// Address range: 0x12560b - 0x12575b
int64_t function_12560b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x12560b
    bool v1; // 0x12560b
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x12560b
    int64_t v3 = v2; // bp-48, 0x12569b
    int64_t v4 = (int64_t)&v3; // 0x1256d8
    int64_t * v5 = (int64_t *)(v4 - 8); // 0x1256e0
    *v5 = 0x5a0ed5b4;
    *(int64_t *)(v4 - 16) = 0x13b65965;
    *(int64_t *)(v4 - 24) = v2;
    int64_t * v6 = (int64_t *)(v4 + 8); // 0x1256f1
    *v6 = *v5;
    v3 = a5;
    *v5 = a1;
    *(int64_t *)(v4 + 32) = a1;
    int64_t v7 = v3; // 0x125720
    int64_t v8 = *v6; // 0x125722
    v3 = v8;
    *v5 = v8;
    int64_t v9 = v4 + 16; // 0x125734
    *v6 = *(int64_t *)v9;
    v3 = a1;
    *v5 = v4;
    int64_t v10 = v3; // 0x12574d
    v3 = v9;
    int64_t v11; // 0x12560b
    return function_c57b8(v10, a2, a3, a4, v7, v11, 0x6282d572);
}

// Address range: 0x12575b - 0x1258cc
int64_t function_12575b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x12575b
    int64_t v1; // 0x12575b
    return function_c57b8(a1, a2, a3, a4, a5, a6, v1);
}

// Address range: 0x1258cc - 0x125a3f
int64_t function_1258cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1258cc
    int64_t v1; // bp-32, 0x1258cc
    int64_t v2 = (int64_t)&v1; // 0x125935
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x12593d
    *(int64_t *)v3 = 0x69b2b7c;
    int64_t * v4 = (int64_t *)(v2 - 24); // 0x125953
    int64_t * v5 = (int64_t *)(v2 + 24); // 0x125959
    int64_t v6 = *v5; // 0x125959
    int64_t * v7 = (int64_t *)(v2 - 16); // 0x125959
    *v7 = v6;
    *v4 = v3;
    *(int64_t *)(v2 - 32) = v1;
    *(int64_t *)(v2 - 40) = v1;
    *v7 = a1;
    *(int64_t *)(v2 + 8) = v6;
    *v7 = a2;
    *v4 = v1;
    *v5 = v1;
    *v4 = a4;
    *v7 = v2;
    int64_t v8; // 0x1258cc
    return function_c57b8(*v7, *v7, a3, a4, v8, v8, 0x11fed5);
}

// Address range: 0x125a3f - 0x125bc4
int64_t function_125a3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x125a3f
    int64_t v1; // bp-32, 0x125a3f
    int64_t v2 = (int64_t)&v1; // 0x125b05
    int64_t v3 = v2 - 8; // 0x125b0d
    int64_t * v4 = (int64_t *)v3; // 0x125b0d
    *v4 = a4;
    *(int64_t *)(v2 - 16) = v3;
    int64_t v5 = *v4; // 0x125b25
    *(int64_t *)(v2 - 24) = v5;
    int64_t v6 = v2 + 16; // 0x125b32
    *(int64_t *)v6 = a7;
    *(int64_t *)(v2 + 32) = 0x1201eb;
    v1 = v5;
    int64_t v7 = v1; // 0x125bba
    v1 = v6;
    return function_c57b8(a1, a2, a3, v7, a5, a6, 0x4009b868);
}

// Address range: 0x125bc4 - 0x125d20
int64_t function_125bc4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x125bc4
    int64_t v1; // bp-64, 0x125bc4
    v1 = (int64_t)&v1;
    int64_t v2; // bp-48, 0x125bc4
    int64_t v3 = (int64_t)&v2; // 0x125cdf
    int64_t v4 = v3 + 8; // 0x125cf9
    int64_t * v5 = (int64_t *)v4; // 0x125cfe
    *v5 = a4;
    v2 = v4;
    *v5 = v3 + 24;
    return function_c57b8(a1, a2, a3, *v5, a5, a6, 0x3ef44c79);
}

// Address range: 0x125d20 - 0x125e95
int64_t function_125d20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x125d20
    int64_t v1; // bp-56, 0x125d20
    int64_t v2 = (int64_t)&v1; // 0x125e13
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x125e28
    *v3 = 0x243bb7ba;
    v1 = a5;
    int64_t * v4 = (int64_t *)(v2 + 24); // 0x125e3b
    *v4 = *v3;
    *(int64_t *)(v2 - 8) = 0x120686;
    v1 = 0x120686;
    *(int64_t *)(v2 + 40) = *v3;
    int64_t * v5 = (int64_t *)(v2 + 16); // 0x125e5b
    int64_t v6 = *v5; // 0x125e5b
    *v3 = v6;
    v1 = v6;
    int64_t v7 = *v4; // 0x125e74
    *v5 = v7;
    *v3 = v7;
    int64_t v8; // 0x125d20
    return function_c57b8(a1, a2, a3, a4, v8, v8, 310);
}

// Address range: 0x125ed1 - 0x125ed4
int64_t function_125ed1(void) {
    // 0x125ed1
    int64_t result; // 0x125ed1
    return result;
}

// Address range: 0x125f3e - 0x125f3f
int64_t function_125f3e(void) {
    // 0x125f3e
    int64_t result; // 0x125f3e
    return result;
}

// Address range: 0x125f3f - 0x125f43
int64_t function_125f3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x125f3f
    int64_t result; // 0x125f3f
    char * v1 = (char *)(result - 127); // 0x125f3f
    *v1 = *v1 | (char)a4;
    return result;
}

// Address range: 0x24c17d - 0x24c284
int64_t function_24c17d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x24c17d
    return function_c4258(a1, a2, a3);
}

// Address range: 0x24c284 - 0x24c3c4
int64_t function_24c284(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x24c284
    int64_t v1; // bp-40, 0x24c284
    int64_t v2 = (int64_t)&v1; // 0x24c399
    int64_t v3 = v2 - 16; // 0x24c3a8
    *(int64_t *)(v2 - 24) = v3;
    *(int64_t *)v3 = v2;
    return function_c4258(a1, a2, a3);
}

// Address range: 0x24c3c4 - 0x24c4ec
int64_t function_24c3c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24c3c4
    return function_c4258(a1, a2, a3);
}

// Address range: 0x24c55e - 0x24c562
int64_t function_24c55e(void) {
    // 0x24c55e
    int64_t result; // 0x24c55e
    return result;
}

// Address range: 0x47a9ee - 0x47ac3a
int64_t function_47a9ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x47a9ee
    int64_t v1; // 0x47a9ee
    int32_t v2 = *(int32_t *)(v1 - 98); // 0x47a9ee
    int32_t * v3 = (int32_t *)(v1 - 0x27ee5ec5); // 0x47a9f5
    *v3 = *v3 | (int32_t)a3;
    char v4 = (char)v1 & -38; // 0x47a9fc
    if (v4 >= 0) {
        int64_t result = v1 & -256 | (int64_t)v4; // 0x47aa00
        if (a4 == 0) {
            result = function_47a99f();
        }
        // 0x47aa02
        return result;
    }
    int64_t v5 = function_47a9e2(); // 0x47aa53
    unsigned char v6 = (char)v5 & 121; // 0x47aad1
    int64_t v7 = v6; // 0x47aad1
    int64_t v8 = v5 & -256; // 0x47aad1
    if (v6 != 0) {
        // 0x47aa64
        return v7 + 14 | v8;
    }
    int64_t result2 = v8 | v7; // 0x47aad1
    int32_t * v9 = (int32_t *)(result2 + 116); // 0x47aad7
    *v9 = *v9 ^ 0x7af02c05;
    int32_t v10 = *(int32_t *)(int64_t)(v2 + (int32_t)a2); // 0x47aadf
    __asm_outsd((int16_t)a3, v10);
    __asm_fldenv(*(int224_t *)-0x6f0843c);
    return result2;
}

// Address range: 0x47ac90 - 0x47ac97
int64_t function_47ac90(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47ac90
    int64_t v1; // 0x47ac90
    uint64_t result = v1;
    char * v2 = (char *)(a2 + 0x1b455a9); // 0x47ac90
    *v2 = *v2 + (char)(result / 256);
    return result;
}

// Address range: 0x47ad2d - 0x47ad35
int64_t function_47ad2d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47ad2d
    bool v1; // 0x47ad2d
    char * v2 = (char *)((v1 ? -1 : 1) + a1); // 0x47ad2e
    char v3 = *v2; // 0x47ad2e
    int64_t result; // 0x47ad2d
    *v2 = v3 + (char)a3 + (char)((char)result > (char)result);
    return result;
}

// Address range: 0x47ad4d - 0x47ad50
int64_t function_47ad4d(void) {
    // 0x47ad4d
    int64_t result; // 0x47ad4d
    return result;
}

// Address range: 0x47ad50 - 0x47ad6d
int64_t function_47ad50(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47ad50
    int64_t v1; // 0x47ad50
    int64_t v2 = v1;
    int64_t v3 = (v2 + 236) % 256 | v2 & -256; // 0x47ad50
    *(char *)a1 = (char)(v1 ^ a4);
    int16_t v4 = a3; // 0x47ad54
    int64_t v5; // 0x47ad50
    __asm_outsd(v4, *(int32_t *)&v5);
    __asm_out_133(v4, (int32_t)v3);
    int64_t v6 = v3 + 0x8a17b8c; // 0x47ad61
    int32_t v7 = __asm_insd((int16_t)((int32_t)v6 >> 31)); // 0x47ad67
    *(int32_t *)*(int64_t *)(a2 + 0x36ac703) = v7;
    return v6 & 0xffffffff;
}

// Address range: 0x47ae5a - 0x47ae5b
int64_t function_47ae5a(void) {
    // 0x47ae5a
    int64_t result; // 0x47ae5a
    return result;
}

// Address range: 0x47ae67 - 0x47ae68
int64_t function_47ae67(void) {
    // 0x47ae67
    int64_t result; // 0x47ae67
    return result;
}

// Address range: 0x47ae7a - 0x47ae7b
int64_t function_47ae7a(void) {
    // 0x47ae7a
    int64_t result; // 0x47ae7a
    return result;
}

// Address range: 0x47aeae - 0x47aec0
int64_t function_47aeae(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = __asm_iretd(); // 0x47aeae
    int64_t v1; // 0x47aeae
    if ((*(int32_t *)(v1 + 0x2c414ecf) & (int32_t)a2) != 0) {
        // 0x47aeee
        return result;
    }
    // 0x47aeba
    __asm_int(8);
    return result;
}

// Address range: 0x47aec8 - 0x47aeca
int64_t function_47aec8(void) {
    // 0x47aec8
    return function_47af26();
}

// Address range: 0x47aecd - 0x47aeee
int64_t function_47aecd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    uint32_t v2 = (int32_t)a4 % 32; // 0x47aecd
    if (v2 != 0) {
        int32_t * v3 = (int32_t *)(a4 + 78); // 0x47aecd
        *v3 = *v3 << v2;
    }
    int64_t v4; // 0x47aecd
    char * v5 = (char *)(v4 - 69); // 0x47aed2
    char v6 = *v5 ^ (char)a3; // 0x47aed2
    *v5 = v6;
    int64_t v7 = v4 | 129; // 0x47aed5
    if (v6 == 0) {
        v7 = function_47ae5a();
    }
    int64_t v8 = (int64_t)*(int32_t *)(a4 - 108 + v4); // 0x47aed7
    __asm_out_134(-87, (int32_t)v7);
    int64_t result; // 0x47aecd
    if (v6 < 0 == (10 * v8 != 0xa00000000 * v8 >> 32)) {
        // 0x47aee1
        *(int32_t *)a1 = *(int32_t *)&v1;
        result = a4 & 0xffffffff;
    } else {
        function_47aeef();
        *(int32_t *)a1 = *(int32_t *)&v1;
        result = function_47ae7a();
    }
    // 0x47aee7
    return result;
}

// Address range: 0x47b0ee - 0x47b0fc
int64_t function_47b0ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x47b0ee
    bool v1; // 0x47b0ee
    if (true == !v1) {
        // 0x47b11f
        int64_t result; // 0x47b0ee
        return result;
    }
    // 0x47b0f0
    return __asm_wait(a5);
}

// Address range: 0x47b104 - 0x47b11f
int64_t function_47b104(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47b104
    int64_t v1; // 0x47b104
    int32_t * v2 = (int32_t *)(v1 - 0x48dcc7bb); // 0x47b104
    *v2 = *v2 | -74;
    __asm_int(36);
    return __asm_sti(a1);
}

// Address range: 0x47b120 - 0x47b127
int64_t function_47b120(void) {
    // 0x47b120
    int64_t result; // 0x47b120
    return result;
}

// Address range: 0x47b139 - 0x47b143
int64_t function_47b139(int64_t a1) {
    // 0x47b139
    int64_t v1; // 0x47b139
    int64_t v2 = v1;
    return (v2 + 176) % 256 | v2 & -256;
}

// Address range: 0x47b161 - 0x47b162
int64_t function_47b161(int64_t a1) {
    // 0x47b161
    int64_t result; // 0x47b161
    return result;
}

// Address range: 0x47b16c - 0x47b1f0
int64_t function_47b16c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t result = (int32_t)a4 - 0x18d65dea; // 0x47b175
    if (result != 0) {
        // 0x47b17c
        *(int32_t *)a1 = result;
        return result;
    }
    // 0x47b188
    int64_t v1; // bp+16, 0x47b16c
    int64_t v2 = (int64_t)&v1; // 0x47b188
    while (true) {
        int64_t v3 = v2;
        *(int64_t *)(v3 - 8) = v3;
        v2 = 8;
    }
}

// Address range: 0x47b1fd - 0x47b200
int64_t function_47b1fd(void) {
    // 0x47b1fd
    int64_t result; // 0x47b1fd
    return result;
}

// Address range: 0x47b215 - 0x47b217
int64_t function_47b215(void) {
    // 0x47b215
    int64_t result; // 0x47b215
    return result;
}

// Address range: 0x47b2ea - 0x47b308
int64_t function_47b2ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47b2ea
    bool v1; // 0x47b2ea
    while (!v1) {
        // continue -> 0x47b2f0
    }
    // 0x47b2f2
    int64_t v2; // 0x47b2ea
    int64_t result = v2 & -0xff01 | (int64_t)&g1; // 0x47b2ee
    char * v3 = (char *)result; // 0x47b2f2
    *v3 = *v3 ^ (char)a4;
    *(int32_t *)0x7b70ffa496408790 = (int32_t)result;
    *(char *)-0x4c7b6971 = *(char *)-0x4c7b6971 - (char)a3;
    return result;
}

// Address range: 0x47b31b - 0x47b31c
int64_t function_47b31b(void) {
    // 0x47b31b
    int64_t result; // 0x47b31b
    return result;
}

// Address range: 0x47b342 - 0x47b365
int64_t function_47b342(void) {
    // 0x47b342
    bool v1; // 0x47b342
    if (!v1) {
        // 0x47b35e
        int64_t v2; // 0x47b342
        return __asm_wait(v2);
    }
    // 0x47b344
    return function_ffffffff955aebee();
}

// Address range: 0x47b366 - 0x47b381
int64_t function_47b366(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47b366
    int64_t v1; // 0x47b366
    unsigned char v2 = (char)v1; // 0x47b367
    bool v3; // 0x47b366
    int64_t result = (int64_t)*(int32_t *)((v3 ? -4 : 4) + a2); // 0x47b374
    if (((v2 + 93 ^ v2) & (v2 ^ -128)) >= 0) {
        result = function_47b31b();
    }
    if (v2 < 163) {
        // 0x47b38f
        return result;
    }
    // 0x47b378
    return function_fffffffffe5f4224();
}

// Address range: 0x47b38c - 0x47b38f
int64_t function_47b38c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47b38c
    int64_t v1; // 0x47b38c
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return v1 | 101;
}

// Address range: 0x47b3cf - 0x47b3d2
int64_t function_47b3cf(int64_t a1) {
    // 0x47b3cf
    int64_t result; // 0x47b3cf
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)(result ^ v1);
    return result;
}

// Address range: 0x47b3da - 0x47b3dd
int64_t function_47b3da(void) {
    // 0x47b3da
    int64_t result; // 0x47b3da
    return result;
}

// Address range: 0x47b6ee - 0x47b6f4
int64_t function_47b6ee(int64_t a1, int64_t a2) {
    // 0x47b6ee
    *(int32_t *)0x38ee498f = *(int32_t *)0x38ee498f & (int32_t)a2;
    int64_t result; // 0x47b6ee
    return result;
}

// Address range: 0x47b74e - 0x47b78c
int64_t function_47b74e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x47b74e
    int64_t v1; // 0x47b74e
    uint64_t v2 = v1;
    int64_t v3 = a3;
    bool v4; // 0x47b74e
    if (v4) {
        // 0x47b750
        int16_t result; // 0x47b74e
        return result;
    }
    unsigned char v5 = (char)a4 % 32; // 0x47b76e
    v3 = a3;
    char v6 = a3; // 0x47b76e
    if (v5 != 0) {
        unsigned char v7 = (char)v1;
        *(char *)v1 = v7 >> 8 - v5 | v7 << v5;
        v6 = *(char *)&v3;
    }
    uint64_t v8 = v3;
    char v9 = *(char *)0x3d7aa800; // 0x47b772
    *(char *)v8 = v6 + (char)(v8 / 256);
    int32_t v10 = *(int32_t *)(v3 - 97); // 0x47b77e
    int64_t v11 = v1 + 0xc388b714; // 0x47b781
    char * v12 = (char *)(v2 & -0x10000 | 256 * (int64_t)(v9 | (char)(v2 / 256)) | 45); // 0x47b786
    unsigned char v13 = *v12; // 0x47b786
    unsigned char v14 = v13 + (char)v11; // 0x47b786
    unsigned char v15 = v14 + (char)((int32_t)v1 < 0x3c7748ec); // 0x47b786
    *v12 = v15;
    *(int64_t *)((int64_t)(v10 & (int32_t)v1) - 8) = a4;
    char * v16 = (char *)(a2 + 16); // 0x47b789
    char v17 = (int32_t)v1 < 0x3c7748ec ? v15 <= v13 : v14 < v13 ? 46 : 45; // 0x47b789
    *v16 = *v16 - v17;
    return v11 & 0xffffffff;
}

// Address range: 0x47b78d - 0x47b793
int64_t function_47b78d(void) {
    // 0x47b78d
    int64_t v1; // 0x47b78d
    return function_47b805(v1, v1, v1);
}

// Address range: 0x47b7c2 - 0x47b7c5
int64_t function_47b7c2(void) {
    // 0x47b7c2
    int64_t result; // 0x47b7c2
    return result;
}

// Address range: 0x47b7cd - 0x47b7d6
int64_t function_47b7cd(int64_t a1) {
    // 0x47b7cd
    int64_t v1; // 0x47b7cd
    int32_t * v2 = (int32_t *)(v1 - 0x32492794); // 0x47b7cd
    uint32_t v3 = *v2; // 0x47b7cd
    *v2 = v3 / 8 | 0x20000000 * v3;
    return __asm_wait(a1);
}

// Address range: 0x47b805 - 0x47b812
int64_t function_47b805(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47b805
    int64_t v1; // 0x47b805
    int64_t v2 = v1;
    bool v3; // 0x47b805
    return (v2 - a3 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x47b82f - 0x47b836
int64_t function_47b82f(void) {
    // 0x47b82f
    int64_t v1; // 0x47b82f
    return v1 + 0xa042b1f3 & 0xffffffff;
}

// Address range: 0x47b842 - 0x47b845
int64_t function_47b842(int64_t a1) {
    // 0x47b842
    int64_t result; // 0x47b842
    return result;
}
