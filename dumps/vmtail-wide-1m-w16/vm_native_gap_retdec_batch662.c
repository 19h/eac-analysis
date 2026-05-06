/*
 * Targeted RetDec C for native executable gap queue batch 662.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x27f2ee-0x27f4ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x27f4ee-0x27f6ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x27f6ee-0x27f8ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x42371f-0x42381f rank=- name=- kind=- bytes=- uncovered=-
 *   0x42391f-0x423a1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x423a1f-0x423c1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x423c1f-0x423e1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x423e1f-0x42401f rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1d72d18a();
int64_t function_27f2ee(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27f3b9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27f3bd(int64_t a1);
int64_t function_27f433(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27f43e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27f458(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_27f48e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_27f4dc(int64_t a1);
int64_t function_27f50e(int64_t a1);
int64_t function_27f54c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27f647(void);
int64_t function_27f650(void);
int64_t function_27f691(int64_t a1);
int64_t function_27f6aa(int64_t a1);
int64_t function_27f727(void);
int64_t function_27f731(void);
int64_t function_27f844(void);
int64_t function_27f85f(int64_t a1);
int64_t function_27f87d(void);
int64_t function_27f89b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42371f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42378c(void);
int64_t function_4237ac(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4237bb(void);
int64_t function_4237ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_423811(void);
int64_t function_4238ad();
int64_t function_4238fa();
int64_t function_42391f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_423957(int64_t a1);
int64_t function_423978(void);
int64_t function_42399e(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_423a91(void);
int64_t function_423ae8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_423b16(void);
int64_t function_423b1d(void);
int64_t function_423b4a(int64_t a1);
int64_t function_423b6f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_423c93(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_423cba(int64_t a1, int64_t a2, int64_t a3);
int64_t function_423cd1(int64_t a1);
int64_t function_423cdd(void);
int64_t function_423d18(int64_t a1);
int64_t function_423d4a(void);
int64_t function_423d69(void);
int64_t function_423db0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_423e26(void);
int64_t function_423e45(int64_t a1, int64_t a2, int64_t a3);
int64_t function_423e53(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_423e66(void);
int64_t function_423e77(void);
int64_t function_423e9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_423eaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_423eef(int64_t a1, int64_t a2, int64_t a3);
int64_t function_423f7a(int64_t a1, int64_t a2);
int64_t function_4b4a23e7();
int64_t function_5c838c1();
int64_t function_70947bfd();
int64_t function_ffffffff8b73f551();
int64_t function_ffffffff99f6bad1();
int64_t function_ffffffffc55b115a();
int64_t function_ffffffffe4833c02();
int64_t unknown_28bf6fa3();
int64_t unknown_3b24ea98();
int64_t unknown_6a2566a3();
int64_t unknown_ffffffffb1ed2f67();
int64_t unknown_ffffffffb703f76a();
int64_t unknown_ffffffffcb74fa54();
int64_t unknown_ffffffffd87afd96();
int64_t unknown_ffffffffffe90358();

// Address range: 0x27f2ee - 0x27f2fb
int64_t function_27f2ee(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27f2ee
    int64_t v1; // 0x27f2ee
    int64_t v2 = 2 * v1 & 0xfffffffe; // bp-8, 0x27f2f5
    int32_t * v3 = (int32_t *)(a3 + 11); // 0x27f2f7
    *v3 = -1 - *v3;
    return (int64_t)&v2;
}

// Address range: 0x27f3b9 - 0x27f3bb
int64_t function_27f3b9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27f3b9
    int64_t result; // 0x27f3b9
    __asm_out_133((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x27f3bd - 0x27f3bf
int64_t function_27f3bd(int64_t a1) {
    // 0x27f3bd
    int64_t result; // 0x27f3bd
    return result;
}

// Address range: 0x27f433 - 0x27f437
int64_t function_27f433(int64_t a1, int64_t a2, int64_t a3) {
    // 0x27f433
    int64_t v1; // 0x27f433
    *(char *)a1 = (char)v1;
    return v1 & 0xffffffff;
}

// Address range: 0x27f43e - 0x27f458
int64_t function_27f43e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = *(int32_t *)0x1d533a0e9301e825; // 0x27f443
    unsigned char v2 = *(char *)(int64_t)v1; // 0x27f44c
    int64_t v3 = unknown_ffffffffcb74fa54(); // 0x27f44e
    int64_t v4; // 0x27f43e
    *(int32_t *)a3 = 2 * (int32_t)v4 + (int32_t)(v2 < (char)v1);
    return v3 | 158;
}

// Address range: 0x27f458 - 0x27f476
int64_t function_27f458(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x27f458
    int64_t v1; // 0x27f458
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a4 + 0x3c0810f1); // 0x27f45a
    int32_t v4 = *v3 + (int32_t)a4; // 0x27f45a
    *v3 = v4;
    if (v4 >= 0) {
        // 0x27f48d
        return (v2 + a4 / 256) % 256 | v2 & -256;
    }
    int64_t v5 = unknown_ffffffffb703f76a(); // 0x27f464
    int32_t * v6 = (int32_t *)(a3 - 0x77fb0fff); // 0x27f469
    *v6 = *v6 + 24;
    int64_t v7; // 0x27f458
    *(int32_t *)v7 = *(int32_t *)&v7 + (int32_t)v5;
    return a3 & 0xffffffff;
}

// Address range: 0x27f48e - 0x27f4b8
int64_t function_27f48e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x27f48e
    unknown_ffffffffd87afd96();
    if (a4 != 0) {
        uint64_t v1 = unknown_28bf6fa3(); // 0x27f49d
        char * v2 = (char *)(v1 + 0x4d97400); // 0x27f4a2
        *v2 = *v2 + (char)v1;
        int64_t v3; // 0x27f48e
        char * v4 = (char *)(v3 + 0x1201e800); // 0x27f4a8
        *v4 = *v4 + (char)(v1 / 256);
        char * v5 = (char *)(v1 + 10); // 0x27f4ae
        *v5 = *v5 + (char)(a4 / 256);
    }
    // 0x27f4b3
    return function_ffffffff8b73f551();
}

// Address range: 0x27f4dc - 0x27f4df
int64_t function_27f4dc(int64_t a1) {
    // 0x27f4dc
    int64_t result; // 0x27f4dc
    return result;
}

// Address range: 0x27f50e - 0x27f50f
int64_t function_27f50e(int64_t a1) {
    // 0x27f50e
    int64_t result; // 0x27f50e
    return result;
}

// Address range: 0x27f54c - 0x27f5af
int64_t function_27f54c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x27f54c
    int32_t * v3 = (int32_t *)(v2 + 0xe64ad09); // 0x27f54c
    int32_t v4 = *v3; // 0x27f54c
    int32_t v5 = a4; // 0x27f54c
    int32_t v6 = v4 + v5; // 0x27f54c
    *v3 = v6;
    int64_t result = unknown_ffffffffffe90358(); // 0x27f552
    if (v6 < 0 == ((v6 ^ v4) & (v6 ^ v5)) < 0) {
        int32_t * v7 = (int32_t *)(4 * v2 - 38 + result); // 0x27f5ab
        *v7 = *v7 ^ (int32_t)v2;
        return result;
    }
    int64_t result2 = unknown_ffffffffb1ed2f67(); // 0x27f561
    *(int32_t *)a1 = *(int32_t *)&v1;
    return result2;
}

// Address range: 0x27f647 - 0x27f648
int64_t function_27f647(void) {
    // 0x27f647
    int64_t result; // 0x27f647
    return result;
}

// Address range: 0x27f650 - 0x27f652
int64_t function_27f650(void) {
    // 0x27f650
    return function_27f647();
}

// Address range: 0x27f691 - 0x27f69d
int64_t function_27f691(int64_t a1) {
    int64_t v1 = unknown_3b24ea98(a1); // 0x27f691
    bool v2; // 0x27f691
    return (v1 - (v2 ? 222 : 221)) % 256 | v1 & -256;
}

// Address range: 0x27f6aa - 0x27f6ab
int64_t function_27f6aa(int64_t a1) {
    // 0x27f6aa
    int64_t result; // 0x27f6aa
    return result;
}

// Address range: 0x27f727 - 0x27f72a
int64_t function_27f727(void) {
    // 0x27f727
    int64_t result; // 0x27f727
    __asm_out_134(58, (char)result);
    return result;
}

// Address range: 0x27f731 - 0x27f736
int64_t function_27f731(void) {
    // 0x27f731
    return function_ffffffffc55b115a();
}

// Address range: 0x27f844 - 0x27f84c
int64_t function_27f844(void) {
    // 0x27f844
    int64_t v1; // 0x27f844
    bool v2; // 0x27f844
    return (v2 ? 255 : 0) | v1 & -256;
}

// Address range: 0x27f85f - 0x27f860
int64_t function_27f85f(int64_t a1) {
    // 0x27f85f
    int64_t result; // 0x27f85f
    return result;
}

// Address range: 0x27f87d - 0x27f87f
int64_t function_27f87d(void) {
    // 0x27f87d
    int64_t result; // 0x27f87d
    return result;
}

// Address range: 0x27f89b - 0x27f8a3
int64_t function_27f89b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27f89b
    return unknown_6a2566a3(a1, a2, a3, a4);
}

// Address range: 0x42371f - 0x423732
int64_t function_42371f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 22); // 0x42372f
    int64_t result; // 0x42371f
    *v1 = *v1 | (int32_t)result;
    return result;
}

// Address range: 0x42378c - 0x423791
int64_t function_42378c(void) {
    // 0x42378c
    return function_4b4a23e7();
}

// Address range: 0x4237ac - 0x4237b3
int64_t function_4237ac(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4237ac
    return function_5c838c1();
}

// Address range: 0x4237bb - 0x4237c2
int64_t function_4237bb(void) {
    // 0x4237bb
    int64_t v1; // 0x4237bb
    int64_t v2 = v1;
    bool v3; // 0x4237bb
    *(char *)v2 = (char)v2 - (char)(v1 / 256) + (char)v3;
    return function_70947bfd();
}

// Address range: 0x4237ec - 0x4237f5
int64_t function_4237ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4237ec
    int64_t result; // 0x4237ec
    return result;
}

// Address range: 0x423811 - 0x423813
int64_t function_423811(void) {
    // 0x423811
    int64_t result; // 0x423811
    return result;
}

// Address range: 0x42391f - 0x423930
int64_t function_42391f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2; // 0x42391f
    bool v3; // 0x42391f
    if (v3 || v3) {
        v2 = function_4238ad();
    }
    char * v4 = (char *)(a2 + 0x10fcb435); // 0x423921
    *v4 = 32 * *v4;
    __asm_out(-66, (int32_t)v2);
    *(char *)v1 = *(char *)&v1 ^ (char)a4;
    return v2 & -256 | 220;
}

// Address range: 0x423957 - 0x42395c
int64_t function_423957(int64_t a1) {
    // 0x423957
    int64_t result; // 0x423957
    bool v1; // 0x423957
    if (true == !v1) {
        result = function_4238fa();
    }
    // 0x423959
    return result;
}

// Address range: 0x423978 - 0x423979
int64_t function_423978(void) {
    // 0x423978
    int64_t result; // 0x423978
    return result;
}

// Address range: 0x42399e - 0x4239c1
int64_t function_42399e(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4;
    int64_t v2 = a3;
    uint32_t v3 = (int32_t)a4 % 32; // 0x42399e
    if (v3 != 0) {
        bool v4; // 0x42399e
        *(int32_t *)a2 = (int32_t)a2 << v3 | (int32_t)((a2 & 0xffffffff) >> (int64_t)(33 - v3)) | (int32_t)v4 << v3 - 1;
    }
    int64_t v5; // 0x42399e
    int64_t v6; // 0x42399e
    if ((78 * *(int32_t *)(a1 + 11) & *(int32_t *)(v6 + 0x4d643717)) < 1) {
        v5 = function_423978();
    }
    int32_t v7 = *(int32_t *)&v1; // 0x4239b7
    *(int32_t *)v1 = v7 - (int32_t)a2 + (int32_t)((v2 & 0xff00 | v6) < a2);
    *(int32_t *)v2 = *(int32_t *)&v2 + (int32_t)v5;
    return function_ffffffffe4833c02();
}

// Address range: 0x423a91 - 0x423a92
int64_t function_423a91(void) {
    // 0x423a91
    int64_t result; // 0x423a91
    return result;
}

// Address range: 0x423ae8 - 0x423b12
int64_t function_423ae8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x423ae8
    int64_t v1; // 0x423ae8
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x423ae8
    int64_t v3 = v2 ? -4 : 4; // 0x423af0
    char v4 = (v3 + a1) / 256; // 0x423af7
    unsigned char v5 = *(char *)(a4 + a2 + v3); // 0x423af7
    if (v5 < v4) {
        function_423a91();
    }
    int64_t v6 = a3 & -256 | (int64_t)((char)a3 - *(char *)(a1 - 0xf2ef4c0)); // 0x423ae9
    int64_t v7 = v3 + (v1 & 0xffffffff); // 0x423af6
    __asm_in(59);
    __asm_iretd();
    int64_t v8 = __asm_int3(v7); // 0x423b05
    char v9 = __asm_in_135((int16_t)v6); // 0x423b06
    int32_t v10 = *(int32_t *)v7; // 0x423b07
    *(char *)0x8dcf1158 = *(char *)0x8dcf1158 ^ (char)(a3 / 256);
    int64_t v11; // 0x423ae8
    char v12 = __asm_insb((int16_t)(*(int32_t *)&v11 + (int32_t)v6)); // 0x423b0f
    *(char *)(int64_t)((int32_t)(v5 > v4) + (int32_t)v7 - v10) = v12;
    return v8 & -256 | (int64_t)v9;
}

// Address range: 0x423b16 - 0x423b19
int64_t function_423b16(void) {
    // 0x423b16
    int64_t result; // 0x423b16
    return result;
}

// Address range: 0x423b1d - 0x423b1f
int64_t function_423b1d(void) {
    // 0x423b1d
    int64_t result; // 0x423b1d
    return result;
}

// Address range: 0x423b4a - 0x423b4b
int64_t function_423b4a(int64_t a1) {
    // 0x423b4a
    int64_t result; // 0x423b4a
    return result;
}

// Address range: 0x423b6f - 0x423c17
int64_t function_423b6f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t v3 = a1;
    bool v4; // 0x423b6f
    if (v4 || v4) {
        // 0x423b71
        return v4 ? 0xbba6623f : 0xbba66240;
    }
    if (v4) {
        // 0x423bec
        int64_t v5; // 0x423b6f
        return v5 & 0xffffffff;
    }
    uint32_t v6 = (int32_t)a4 % 32; // 0x423bfe
    v1 = a4;
    char v7 = a4; // 0x423bfe
    if (v6 != 0) {
        int32_t * v8 = (int32_t *)(a1 + 78); // 0x423bfe
        *v8 = *v8 << v6;
        v7 = *(char *)&v1;
    }
    uint64_t v9 = v1;
    *(char *)v9 = v7 + (char)(v9 / 256);
    int64_t v10 = v3;
    *(int32_t *)v10 = *(int32_t *)&v3 - (int32_t)v10;
    return (int64_t)*(int32_t *)&v2;
}

// Address range: 0x423c93 - 0x423ca3
int64_t function_423c93(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 - 0x659cca89 + a4); // 0x423c93
    *v1 = *v1 + (char)(a3 / 256);
    int64_t result; // 0x423c93
    return result;
}

// Address range: 0x423cba - 0x423cc4
int64_t function_423cba(int64_t a1, int64_t a2, int64_t a3) {
    // 0x423cba
    int64_t result; // 0x423cba
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x423cd1 - 0x423cd2
int64_t function_423cd1(int64_t a1) {
    // 0x423cd1
    int64_t result; // 0x423cd1
    return result;
}

// Address range: 0x423cdd - 0x423ce0
int64_t function_423cdd(void) {
    // 0x423cdd
    int64_t result; // 0x423cdd
    return result;
}

// Address range: 0x423d18 - 0x423d1c
int64_t function_423d18(int64_t a1) {
    // 0x423d18
    int64_t v1; // 0x423d18
    return v1 & 0xffffffff;
}

// Address range: 0x423d4a - 0x423d4c
int64_t function_423d4a(void) {
    // 0x423d4a
    int64_t v1; // 0x423d4a
    return function_423db0(v1, v1, v1, v1, v1, (int64_t)&g1);
}

// Address range: 0x423d69 - 0x423d6e
int64_t function_423d69(void) {
    // 0x423d69
    return function_ffffffff99f6bad1();
}

// Address range: 0x423db0 - 0x423e25
int64_t function_423db0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x423db0
    int64_t v1; // 0x423db0
    int64_t v2 = v1;
    int64_t v3 = a2;
    bool v4; // 0x423db0
    uint32_t v5 = (int32_t)(256 * (64 * (int64_t)v4 | 128 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4) | v1 & 0xffff00ff) | 512; // 0x423db3
    uint32_t v6 = v5 + 0x37ba615e; // 0x423db3
    if (a6 == 1 || v6 == 0) {
        // 0x423dbf
        return a3 & 0xffffffff | 237;
    }
    uint64_t v7 = a3 - (v5 > 0xc8459ea1 ? 109 : 108); // 0x423dc6
    int64_t v8 = a3 & 0xffffff00; // 0x423dc6
    int64_t v9 = v7 % 256 | v8; // 0x423dc6
    char * v10 = (char *)(a2 + 0x1fba131c); // 0x423dc8
    *v10 = *v10 + (char)v6;
    *(int32_t *)-0x2b155586fc28e9ea = (int32_t)v9;
    if (*(int32_t *)(v2 + 103) <= (int32_t)v2) {
        // 0x423dbf
        return v9 | 237;
    }
    uint64_t v11 = (int64_t)v6; // 0x423db8
    int64_t v12 = a6 - 2; // 0x423ddd
    int64_t v13 = v11 / 256 % 256 | v11; // 0x423ddf
    int64_t v14 = v12 & -256 | (int64_t)(*(char *)(v1 + 7) & (char)v12); // 0x423de3
    __asm_out_136((int16_t)v13, (char)v7);
    char * v15 = (char *)(v13 - 29); // 0x423dea
    unsigned char v16 = *v15; // 0x423dea
    *v15 = (char)v13;
    char * v17 = (char *)(v14 - 35); // 0x423df0
    *v17 = *v17 | 77;
    char * v18 = (char *)(v14 - 0x5988bcd0); // 0x423df4
    unsigned char v19 = *v18; // 0x423df4
    unsigned char v20 = v19 + (char)v1; // 0x423df4
    *v18 = v20;
    char * v21 = (char *)(v1 + 1 + 4 * v1 & 0xffffffff); // 0x423dfa
    *v21 = (char)v2;
    int64_t * v22 = (int64_t *)v2; // 0x423e00
    *v22 = a1;
    int64_t v23 = v8 | (int64_t)__asm_in(-67); // 0x423e01
    int32_t v24 = *(int32_t *)((v2 & -256 | (int64_t)*v21) + 24 + v23); // 0x423e09
    uint32_t v25 = (int32_t)(v20 < v19) + (int32_t)v14 + v24; // 0x423e09
    int64_t v26 = v25; // 0x423e09
    uint64_t v27 = v23 & v2;
    char v28 = *(char *)&v3; // 0x423e11
    __asm_outsb((int16_t)v27 + (int16_t)(v11 & 0xff00 | (int64_t)v16), v28);
    int64_t v29 = *v22; // 0x423e16
    char * v30 = (char *)v26; // 0x423e1e
    *v30 = *v30 + (char)v29;
    uint32_t v31 = v25 % 32; // 0x423e21
    int64_t v32 = v26; // 0x423e21
    char v33 = 0; // 0x423e21
    if (v31 != 0) {
        uint32_t v34 = v25 >> 32 - v31 | v25 << v31; // 0x423e21
        v32 = v34;
        v33 = v34 % 2 != 0;
    }
    char * v35 = (char *)v29; // 0x423e23
    *v35 = v33 + (char)(v32 / 256) + *v35;
    return v27 % 256 * (int64_t)*(char *)0xcd6b9d36 | v27 & 0xffff0000;
}

// Address range: 0x423e26 - 0x423e27
int64_t function_423e26(void) {
    // 0x423e26
    int64_t result; // 0x423e26
    return result;
}

// Address range: 0x423e45 - 0x423e53
int64_t function_423e45(int64_t a1, int64_t a2, int64_t a3) {
    // 0x423e45
    int64_t result; // 0x423e45
    bool v1; // 0x423e45
    if (!v1) {
        // 0x423e8c
        return result;
    }
    int32_t * v2 = (int32_t *)(a2 - 0x75fcb960); // 0x423e47
    *v2 = *v2 & (int32_t)result;
    return function_1d72d18a();
}

// Address range: 0x423e53 - 0x423e6e
int64_t function_423e53(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x423e53
    int64_t v1; // 0x423e53
    bool v2; // 0x423e53
    if (v2) {
        v1 = function_423e26();
    }
    int32_t * v3 = (int32_t *)(v1 - 0x1481baf2); // 0x423e55
    uint32_t v4 = *v3; // 0x423e55
    int32_t v5 = v2; // 0x423e55
    int64_t v6; // 0x423e53
    uint32_t v7 = v5 + (int32_t)v6; // 0x423e55
    int32_t v8 = v4 - v7; // 0x423e55
    bool v9 = v2 ? v7 != -1 | v4 < v8 - v5 : v4 < v7; // 0x423e55
    *v3 = v8;
    *(int32_t *)(a4 - 113) = (int32_t)a1;
    return v1 + 0xfa0f44fd + (int64_t)v9 & 0xffffffff;
}

// Address range: 0x423e66 - 0x423e67
int64_t function_423e66(void) {
    // 0x423e66
    int64_t result; // 0x423e66
    return result;
}

// Address range: 0x423e77 - 0x423e78
int64_t function_423e77(void) {
    // 0x423e77
    int64_t result; // 0x423e77
    return result;
}

// Address range: 0x423e9e - 0x423ea7
int64_t function_423e9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x7dbcc8ca); // 0x423e9e
    int64_t v2; // 0x423e9e
    *v1 = *v1 ^ (int32_t)v2;
    return a2 & 0xffffffff;
}

// Address range: 0x423eaa - 0x423ec3
int64_t function_423eaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x423eaa
    int64_t v1; // 0x423eaa
    int32_t v2 = v1 & 0xffffff00 | (int64_t)__asm_in_135((int16_t)a3); // 0x423eae
    int32_t v3 = v2 + 0x74d1900; // 0x423eae
    if (((v3 ^ v2) & (v2 ^ -0x80000000)) >= 0) {
        function_423e77();
    }
    // 0x423eb7
    if (llvm_ctpop_i8((char)v3) % 2 != 0) {
        function_423e66();
    }
    // 0x423eb9
    bool v4; // 0x423eaa
    int64_t v5 = v4 ? -1 : 1; // 0x423eb4
    __asm_outsd((int16_t)*(int32_t *)(a4 + 13), *(int32_t *)(v5 + a2));
    return a3 & 0xffffffff;
}

// Address range: 0x423eef - 0x423ef9
int64_t function_423eef(int64_t a1, int64_t a2, int64_t a3) {
    // 0x423eef
    int64_t v1; // 0x423eef
    return v1 & 0xffff00ff | 0xf700;
}

// Address range: 0x423f7a - 0x423f7f
int64_t function_423f7a(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 - 7); // 0x423f7a
    uint32_t v2 = *v1; // 0x423f7a
    *v1 = v2 / 256 | 0x1000000 * v2;
    int64_t result; // 0x423f7a
    return result;
}
