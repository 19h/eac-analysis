/*
 * Targeted RetDec C for native executable gap queue batch 444.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xd61c7-0xd63c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd63c7-0xd65c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd65c7-0xd67c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd67c7-0xd69c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x462634-0x462834 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e49f9-0x4e4bf9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e4ff9-0x4e51f9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e51f9-0x4e53f9 rank=- name=- kind=- bytes=- uncovered=-
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
void unknown_b6ccb9(void);
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
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pcmpgtb(int128_t left, int128_t right);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
int128_t __asm_pavgw(int128_t left, int128_t right);
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

int64_t function_462634(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4627e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_4e49f9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4e4a5b(void);
int64_t function_4e4a71(void);
int64_t function_4e4a78(void);
int64_t function_4e4a86(void);
int64_t function_4e4a92(void);
int64_t function_4e4a95(void);
int64_t function_4e4a9b(void);
int64_t function_4e4ab0(void);
int64_t function_4e4ae2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4e4b44(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4e4b4f(void);
int64_t function_4e4b6c(void);
int64_t function_4e4b6d(void);
int64_t function_4e4b82(void);
int64_t function_4e4b89(void);
int64_t function_4e4b97(void);
int64_t function_4e4ba6(void);
int64_t function_4e4bac(void);
int64_t function_4e4be3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4e4ff9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4e5003(void);
int64_t function_4e5009(void);
int64_t function_4e5041(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4e50cb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4e50d6(void);
int64_t function_4e50f3(void);
int64_t function_4e50f4(void);
int64_t function_4e5109(void);
int64_t function_4e5110(void);
int64_t function_4e511e(void);
int64_t function_4e512d(void);
int64_t function_4e5133(void);
int64_t function_4e51e3(void);
int64_t function_4e51f9(void);
int64_t function_4e5200(void);
int64_t function_4e520e(void);
int64_t function_4e521a(void);
int64_t function_4e521d(void);
int64_t function_4e5223(void);
int64_t function_4e5238(void);
int64_t function_4e5309(void);
int64_t function_4e531f(void);
int64_t function_4e5326(void);
int64_t function_4e5334(void);
int64_t function_4e5340(void);
int64_t function_4e5343(void);
int64_t function_4e5349(void);
int64_t function_4e535e(void);
int64_t function_4e539c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_c823b();
int64_t function_d61c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_d631b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_d6452(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_d6642(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_d67a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_d6975(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ffffffffef5d8cb0();
int64_t function_ffffffffef5d8f4e();
int64_t function_ffffffffef5d904f();
int64_t function_ffffffffef5d9237();
int64_t function_ffffffffef5d94ad();
int64_t function_ffffffffef5d9808();

// Address range: 0xd61c7 - 0xd631b
int64_t function_d61c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xd61c7
    int64_t v1; // bp-32, 0xd61c7
    int64_t v2; // 0xd61c7
    return function_c823b(a1, a2, a3, a4, a5, v2, (int64_t)&v1 + 16);
}

// Address range: 0xd631b - 0xd6452
int64_t function_d631b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xd631b
    int64_t v1; // 0xd631b
    return function_c823b(a1, a2, a3, a4, v1, v1, a5);
}

// Address range: 0xd6452 - 0xd6642
int64_t function_d6452(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xd6452
    int64_t v1; // bp-56, 0xd6452
    int64_t v2 = (int64_t)&v1; // 0xd65b9
    v1 = a3;
    *(int64_t *)(v2 + 8) = v2 + 24;
    return function_c823b(a1, a2, v1, a4, a5, a6, a7);
}

// Address range: 0xd6642 - 0xd67a4
int64_t function_d6642(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xd6642
    int64_t v1; // bp-32, 0xd6642
    int64_t v2 = (int64_t)&v1; // 0xd66cd
    int64_t v3 = *(int64_t *)(v2 + 32); // 0xd66d9
    int64_t * v4 = (int64_t *)(v2 - 8); // 0xd66d9
    *v4 = v3;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0xd66dd
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0xd66e0
    *v6 = v3;
    int64_t v7 = *(int64_t *)(v2 + 16); // 0xd66ec
    *v4 = v7;
    *v6 = v7;
    *v5 = v3;
    int64_t v8 = v2 + 8; // 0xd6717
    *(int64_t *)v8 = *v4;
    *v5 = *v6;
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = v3;
    *v5 = a3;
    *v6 = a4;
    int64_t v9 = *v5; // 0xd6773
    *v4 = a1;
    *v5 = a6;
    *v6 = v9;
    *v4 = v8;
    int64_t v10; // 0xd6642
    return function_c823b(*v4, 0xd4893, v9, a4, a5, *v5, v10);
}

// Address range: 0xd67a4 - 0xd68fb
int64_t function_d67a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xd67a4
    int64_t v1; // bp-48, 0xd67a4
    v1 = (int64_t)&v1 + 8;
    return function_c823b(a1, a2, a3, a4, a5, 0x2d3d50bc, 0x12949e70);
}

// Address range: 0xd6975 - 0xd697d
int64_t function_d6975(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd6975
    int64_t v1; // 0xd6975
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(a4 - 125); // 0xd6977
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x462634 - 0x4626bf
int64_t function_462634(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x462634
    int64_t v1; // 0x462634
    unsigned char v2 = (char)v1; // 0x462638
    char v3 = v2 + 61; // 0x462638
    int64_t result = v1 & -256 | (int64_t)v3; // 0x462638
    if (v3 < 0 != (v3 & (v2 ^ -128)) < 0) {
        // 0x4626af
        *(char *)a1 = 94;
        int32_t * v4 = (int32_t *)(a4 - 0x3aeba3b0); // 0x4626b9
        *v4 = *v4 ^ (int32_t)v1;
        return result - (v2 > 194 ? 0xd0e9d3b : 0xd0e9d3a) & 0xffffffff ^ 75;
    }
    if (v3 != 0) {
        // 0x462640
        return result;
    }
    // 0x46269f
    __asm_out(36, 0);
    return __asm_sti();
}

// Address range: 0x4627e1 - 0x4627f5
int64_t function_4627e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x4627e1
    int64_t v1; // 0x4627e1
    __asm_out_133(3, (int32_t)v1);
    return a3 & 0x25dc013c;
}

// Address range: 0x4e49f9 - 0x4e49fa
int64_t function_4e49f9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4e49f9
    int64_t result; // 0x4e49f9
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x4e4a5b - 0x4e4a5c
int64_t function_4e4a5b(void) {
    // 0x4e4a5b
    int64_t result; // 0x4e4a5b
    return result;
}

// Address range: 0x4e4a71 - 0x4e4a73
int64_t function_4e4a71(void) {
    // 0x4e4a71
    return function_4e4a5b();
}

// Address range: 0x4e4a78 - 0x4e4a79
int64_t function_4e4a78(void) {
    // 0x4e4a78
    int64_t result; // 0x4e4a78
    return result;
}

// Address range: 0x4e4a86 - 0x4e4a88
int64_t function_4e4a86(void) {
    // 0x4e4a86
    return function_4e4a78();
}

// Address range: 0x4e4a92 - 0x4e4a93
int64_t function_4e4a92(void) {
    // 0x4e4a92
    int64_t result; // 0x4e4a92
    return result;
}

// Address range: 0x4e4a95 - 0x4e4a96
int64_t function_4e4a95(void) {
    // 0x4e4a95
    int64_t result; // 0x4e4a95
    return result;
}

// Address range: 0x4e4a9b - 0x4e4a9d
int64_t function_4e4a9b(void) {
    // 0x4e4a9b
    return function_4e4a95();
}

// Address range: 0x4e4ab0 - 0x4e4ab2
int64_t function_4e4ab0(void) {
    // 0x4e4ab0
    return function_4e4a92();
}

// Address range: 0x4e4ae2 - 0x4e4ae8
int64_t function_4e4ae2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4e4ae2
    int64_t v1; // 0x4e4ae2
    __asm_out_134((int16_t)a3, (int32_t)v1);
    return function_ffffffffef5d8f4e();
}

// Address range: 0x4e4b44 - 0x4e4b4a
int64_t function_4e4b44(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4e4b44
    int64_t v1; // 0x4e4b44
    __asm_out_134((int16_t)a3, (int32_t)v1);
    return function_ffffffffef5d8cb0();
}

// Address range: 0x4e4b4f - 0x4e4b50
int64_t function_4e4b4f(void) {
    // 0x4e4b4f
    int64_t result; // 0x4e4b4f
    return result;
}

// Address range: 0x4e4b6c - 0x4e4b6d
int64_t function_4e4b6c(void) {
    // 0x4e4b6c
    int64_t result; // 0x4e4b6c
    return result;
}

// Address range: 0x4e4b6d - 0x4e4b6f
int64_t function_4e4b6d(void) {
    // 0x4e4b6d
    return function_4e4b4f();
}

// Address range: 0x4e4b82 - 0x4e4b84
int64_t function_4e4b82(void) {
    // 0x4e4b82
    return function_4e4b6c();
}

// Address range: 0x4e4b89 - 0x4e4b8a
int64_t function_4e4b89(void) {
    // 0x4e4b89
    int64_t result; // 0x4e4b89
    return result;
}

// Address range: 0x4e4b97 - 0x4e4b99
int64_t function_4e4b97(void) {
    // 0x4e4b97
    return function_4e4b89();
}

// Address range: 0x4e4ba6 - 0x4e4ba7
int64_t function_4e4ba6(void) {
    // 0x4e4ba6
    int64_t result; // 0x4e4ba6
    return result;
}

// Address range: 0x4e4bac - 0x4e4bae
int64_t function_4e4bac(void) {
    // 0x4e4bac
    return function_4e4ba6();
}

// Address range: 0x4e4be3 - 0x4e4be9
int64_t function_4e4be3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4e4be3
    int64_t v1; // 0x4e4be3
    __asm_out_134((int16_t)a3, (int32_t)v1);
    return function_ffffffffef5d904f();
}

// Address range: 0x4e4ff9 - 0x4e4ffa
int64_t function_4e4ff9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4e4ff9
    int64_t result; // 0x4e4ff9
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x4e5003 - 0x4e5004
int64_t function_4e5003(void) {
    // 0x4e5003
    int64_t result; // 0x4e5003
    return result;
}

// Address range: 0x4e5009 - 0x4e500b
int64_t function_4e5009(void) {
    // 0x4e5009
    return function_4e5003();
}

// Address range: 0x4e5041 - 0x4e5047
int64_t function_4e5041(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4e5041
    int64_t v1; // 0x4e5041
    __asm_out_134((int16_t)a3, (int32_t)v1);
    return function_ffffffffef5d94ad();
}

// Address range: 0x4e50cb - 0x4e50d1
int64_t function_4e50cb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4e50cb
    int64_t v1; // 0x4e50cb
    __asm_out_134((int16_t)a3, (int32_t)v1);
    return function_ffffffffef5d9237();
}

// Address range: 0x4e50d6 - 0x4e50d7
int64_t function_4e50d6(void) {
    // 0x4e50d6
    int64_t result; // 0x4e50d6
    return result;
}

// Address range: 0x4e50f3 - 0x4e50f4
int64_t function_4e50f3(void) {
    // 0x4e50f3
    int64_t result; // 0x4e50f3
    return result;
}

// Address range: 0x4e50f4 - 0x4e50f6
int64_t function_4e50f4(void) {
    // 0x4e50f4
    return function_4e50d6();
}

// Address range: 0x4e5109 - 0x4e510b
int64_t function_4e5109(void) {
    // 0x4e5109
    return function_4e50f3();
}

// Address range: 0x4e5110 - 0x4e5111
int64_t function_4e5110(void) {
    // 0x4e5110
    int64_t result; // 0x4e5110
    return result;
}

// Address range: 0x4e511e - 0x4e5120
int64_t function_4e511e(void) {
    // 0x4e511e
    return function_4e5110();
}

// Address range: 0x4e512d - 0x4e512e
int64_t function_4e512d(void) {
    // 0x4e512d
    int64_t result; // 0x4e512d
    return result;
}

// Address range: 0x4e5133 - 0x4e5135
int64_t function_4e5133(void) {
    // 0x4e5133
    return function_4e512d();
}

// Address range: 0x4e51e3 - 0x4e51e4
int64_t function_4e51e3(void) {
    // 0x4e51e3
    int64_t result; // 0x4e51e3
    return result;
}

// Address range: 0x4e51f9 - 0x4e51fb
int64_t function_4e51f9(void) {
    // 0x4e51f9
    return function_4e51e3();
}

// Address range: 0x4e5200 - 0x4e5201
int64_t function_4e5200(void) {
    // 0x4e5200
    int64_t result; // 0x4e5200
    return result;
}

// Address range: 0x4e520e - 0x4e5210
int64_t function_4e520e(void) {
    // 0x4e520e
    return function_4e5200();
}

// Address range: 0x4e521a - 0x4e521b
int64_t function_4e521a(void) {
    // 0x4e521a
    int64_t result; // 0x4e521a
    return result;
}

// Address range: 0x4e521d - 0x4e521e
int64_t function_4e521d(void) {
    // 0x4e521d
    int64_t result; // 0x4e521d
    return result;
}

// Address range: 0x4e5223 - 0x4e5225
int64_t function_4e5223(void) {
    // 0x4e5223
    return function_4e521d();
}

// Address range: 0x4e5238 - 0x4e523a
int64_t function_4e5238(void) {
    // 0x4e5238
    return function_4e521a();
}

// Address range: 0x4e5309 - 0x4e530a
int64_t function_4e5309(void) {
    // 0x4e5309
    int64_t result; // 0x4e5309
    return result;
}

// Address range: 0x4e531f - 0x4e5321
int64_t function_4e531f(void) {
    // 0x4e531f
    return function_4e5309();
}

// Address range: 0x4e5326 - 0x4e5327
int64_t function_4e5326(void) {
    // 0x4e5326
    int64_t result; // 0x4e5326
    return result;
}

// Address range: 0x4e5334 - 0x4e5336
int64_t function_4e5334(void) {
    // 0x4e5334
    return function_4e5326();
}

// Address range: 0x4e5340 - 0x4e5341
int64_t function_4e5340(void) {
    // 0x4e5340
    int64_t result; // 0x4e5340
    return result;
}

// Address range: 0x4e5343 - 0x4e5344
int64_t function_4e5343(void) {
    // 0x4e5343
    int64_t result; // 0x4e5343
    return result;
}

// Address range: 0x4e5349 - 0x4e534b
int64_t function_4e5349(void) {
    // 0x4e5349
    return function_4e5343();
}

// Address range: 0x4e535e - 0x4e5360
int64_t function_4e535e(void) {
    // 0x4e535e
    return function_4e5340();
}

// Address range: 0x4e539c - 0x4e53a2
int64_t function_4e539c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4e539c
    int64_t v1; // 0x4e539c
    __asm_out_134((int16_t)a3, (int32_t)v1);
    return function_ffffffffef5d9808();
}
