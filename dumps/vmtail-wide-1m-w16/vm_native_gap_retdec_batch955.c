/*
 * Targeted RetDec C for native executable gap queue batch 955.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x39f914-0x39fb14 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39fb14-0x39fd14 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39fd14-0x39ff14 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39ff14-0x3a0114 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a0114-0x3a0314 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47966e-0x4796ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x4796ee-0x4798ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x4798ee-0x479aee rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_12d9c542();
int64_t function_176fc06();
int64_t function_1a4915de();
int64_t function_39f914(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_39f991(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_39f9ae(int64_t a1, int64_t a2, int64_t a3);
int64_t function_39f9f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39fa6a(int64_t a1);
int64_t function_39fa73(void);
int64_t function_39fac3(void);
int64_t function_39fadd(void);
int64_t function_39faed(int64_t a1);
int64_t function_39fb16(int64_t a1);
int64_t function_39fb26(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39fb38(void);
int64_t function_39fb3a(void);
int64_t function_39fb6b(void);
int64_t function_39fb7b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_39fc73(int64_t a1);
int64_t function_39fcaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39fcc4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_39fcd9(int64_t a1);
int64_t function_39fd58(void);
int64_t function_39fd72(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39fe24(void);
int64_t function_39fe35(void);
int64_t function_39fe68(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39fe77(void);
int64_t function_39feea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a004d(int64_t a1);
int64_t function_3a0054(void);
int64_t function_3a0086(void);
int64_t function_3a00be(void);
int64_t function_3a0141(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a0202(void);
int64_t function_3a0240(void);
int64_t function_3a028e(void);
int64_t function_3b3b9d();
int64_t function_479660();
int64_t function_47966e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_479701(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_479763(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4797e4(void);
int64_t function_479816(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47981e(void);
int64_t function_4798bc(int64_t a1);
int64_t function_47992e(void);
int64_t function_479934(void);
int64_t function_479961(void);
int64_t function_4799a5(void);
int64_t function_479a56(void);
int64_t function_479a77(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_479a81(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_479a9a(int64_t a1);
int64_t function_7a223598();
int64_t function_ffffffffcc3a4fd4();
int64_t function_ffffffffd768c7b9();
int64_t unknown_176fef5();
int64_t unknown_410d10b9();
int64_t unknown_ffffffffa4f56831();
int64_t unknown_ffffffffe22d3972();

// Address range: 0x39f914 - 0x39f97b
int64_t function_39f914(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char v1 = a4 / 256; // 0x39f921
    *(char *)0x5f8b4128 = *(char *)0x5f8b4128 + v1;
    int64_t v2 = unknown_ffffffffa4f56831(); // 0x39f928
    int32_t * v3 = (int32_t *)(a2 - 120); // 0x39f934
    *v3 = *v3 + (int32_t)a3;
    uint64_t v4 = a4 & 0xffffff00; // 0x39f93b
    char v5 = v4 / 256; // 0x39f93d
    *(char *)-0x27c36cbc = *(char *)-0x27c36cbc + v5;
    char v6 = *(char *)0x42215eea; // 0x39f948
    char v7 = __asm_in(104); // 0x39f950
    *(char *)-0x47d47f8f = *(char *)-0x47d47f8f + v5;
    char * v8 = (char *)(((int64_t)((char)a4 > 221) - a2 + (256 * (int64_t)(v6 & v1) | a4 & 0xffff00ff) & 0xffffffff) - 0x602ca0d2); // 0x39f970
    unsigned char v9 = *v8; // 0x39f970
    char v10 = v9 + 125; // 0x39f970
    unsigned char v11 = llvm_ctpop_i8(v10); // 0x39f970
    *v8 = v10;
    float80_t v12; // 0x39f914
    *(int32_t *)(v4 | 34) = (int32_t)v12;
    int64_t v13; // 0x39f914
    return v2 + v13 & 0xffff0000 | (int64_t)v7 & -0x10000 | (int64_t)__asm_in(96) | 256 * (16 * (int64_t)(v9 % 16 > 2) | (int64_t)(v9 > 130) | 64 * (int64_t)(v10 == 0) | 128 * (int64_t)(v10 < 0) | 4 * (int64_t)(v11 % 2 == 0)) | 512;
}

// Address range: 0x39f991 - 0x39f999
int64_t function_39f991(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x39f991
    int64_t result; // 0x39f991
    char * v1 = (char *)(a1 + 0x3a19dbc4 + 2 * result); // 0x39f991
    *v1 = *v1 + (char)(a4 / 256);
    return result;
}

// Address range: 0x39f9ae - 0x39f9b5
int64_t function_39f9ae(int64_t a1, int64_t a2, int64_t a3) {
    // 0x39f9ae
    int64_t v1; // 0x39f9ae
    bool v2; // 0x39f9ae
    *(char *)a3 = 2 * (char)v1 + (char)v2;
    return function_ffffffffcc3a4fd4();
}

// Address range: 0x39f9f5 - 0x39fa53
int64_t function_39f9f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x39f9f5
    int64_t v1; // 0x39f9f5
    uint64_t v2 = v1;
    int64_t v3 = a4;
    int64_t v4 = a2;
    unsigned char v5 = (char)a4;
    unsigned char v6 = v5 % 32; // 0x39f9fb
    int64_t v7; // 0x39f9f5
    int64_t v8; // 0x39f9f5
    int32_t v9; // 0x39f9f5
    if (v6 == 0) {
        // 0x39f9f5
        v7 = a4;
        v8 = a2;
        v9 = a4;
    } else {
        *(char *)a4 = v5 >> v6;
        v7 = v3;
        v8 = v4;
        v9 = *(int32_t *)&v3;
    }
    *(char *)-0x3491b5fb = *(char *)-0x3491b5fb + (char)a1;
    *(int32_t *)v7 = v9 + (int32_t)v8;
    int64_t v10 = v4 | a1;
    int64_t v11 = v10 & 0xffffffff; // 0x39fa0c
    if ((int32_t)v10 >= 0) {
        // 0x39fa0e
        int3_t v12; // 0x39f9f5
        float80_t v13 = __frontend_reg_load_fpr(v12 - 2); // 0x39fa13
        int3_t v14 = v12 - 1; // 0x39fa13
        __frontend_reg_store_fpr(v14, v13);
        int32_t * v15 = (int32_t *)(v4 - 123); // 0x39fa17
        int64_t v16; // 0x39f9f5
        *v15 = *v15 + (int32_t)(int64_t)&v16;
        __frontend_reg_load_fpr(v14);
        *(char *)v4 = *(char *)&v4 ^ (char)(v2 / 256);
        *(char *)0x200068fa = (char)v2;
        v3 = v3 & -0xff01 | (int64_t)&g2;
        v4 &= 0xffffffff;
        *(int32_t *)-0x7bf3f3cc3ab1fff0 = (int32_t)v2;
        bool v17; // 0x39f9f5
        int32_t * v18 = v17 ? (int32_t *)0x5d1dc13d : (int32_t *)0x5d1dc13f; // 0x39fa3e
        *v18 = *v18 / 2;
        v11 = v17 ? 0x200068f5 : 0x200068ff;
    }
    // 0x39fa48
    return function_7a223598(v11);
}

// Address range: 0x39fa6a - 0x39fa72
int64_t function_39fa6a(int64_t a1) {
    // 0x39fa6a
    return unknown_ffffffffe22d3972(a1);
}

// Address range: 0x39fa73 - 0x39fa79
int64_t function_39fa73(void) {
    // 0x39fa73
    int64_t result; // 0x39fa73
    return result;
}

// Address range: 0x39fac3 - 0x39fac6
int64_t function_39fac3(void) {
    // 0x39fac3
    int64_t result; // 0x39fac3
    return result;
}

// Address range: 0x39fadd - 0x39fae0
int64_t function_39fadd(void) {
    // 0x39fadd
    int64_t result; // 0x39fadd
    return result;
}

// Address range: 0x39faed - 0x39faf0
int64_t function_39faed(int64_t a1) {
    // 0x39faed
    int64_t result; // 0x39faed
    return result;
}

// Address range: 0x39fb16 - 0x39fb19
int64_t function_39fb16(int64_t a1) {
    // 0x39fb16
    int64_t result; // 0x39fb16
    return result;
}

// Address range: 0x39fb26 - 0x39fb28
int64_t function_39fb26(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39fb26
    return a4 & 0xffffffff;
}

// Address range: 0x39fb38 - 0x39fb39
int64_t function_39fb38(void) {
    // 0x39fb38
    int64_t result; // 0x39fb38
    return result;
}

// Address range: 0x39fb3a - 0x39fb41
int64_t function_39fb3a(void) {
    // 0x39fb3a
    return function_176fc06();
}

// Address range: 0x39fb6b - 0x39fb70
int64_t function_39fb6b(void) {
    // 0x39fb6b
    int64_t v1; // 0x39fb6b
    int64_t v2 = v1;
    return (2 * v2 & 0xfffffffe | (int64_t)((int32_t)v2 < 0)) ^ 300;
}

// Address range: 0x39fb7b - 0x39fc36
int64_t function_39fb7b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t v2; // 0x39fb7b
    bool v3; // 0x39fb7b
    int64_t v4 = v2 + a2 + (int64_t)v3 & 0xffffffff; // 0x39fb7b
    unsigned char v5 = *(char *)v4; // 0x39fb86
    int64_t v6 = (int64_t)(*(int32_t *)-0x6573fe27015f789c & -256); // 0x39fb86
    int64_t v7 = v4 + (v3 ? -1 : 1); // 0x39fb86
    char * v8 = (char *)(v6 | (int64_t)v5); // 0x39fb87
    *v8 = *v8 + 61;
    int32_t * v9 = (int32_t *)(v2 + 0x640d2708); // 0x39fb8a
    int32_t v10 = *v9; // 0x39fb8a
    int32_t v11 = a3; // 0x39fb8a
    int32_t v12 = v10 + v11; // 0x39fb8a
    *v9 = v12;
    if (v12 < 0 == ((v12 ^ v10) & (v12 ^ v11)) < 0 != v12 != 0) {
        int64_t v13 = (int64_t)(v5 - 36) | v6; // bp-8, 0x39fb94
        char * v14 = (char *)(v7 - 45); // 0x39fb96
        *v14 = *v14 + (char)(a4 / 256);
        v13 = (int64_t)&v1;
        function_39fb38();
        return (int64_t)&v13;
    }
    char * v15 = (char *)(a1 + 56); // 0x39fc09
    unsigned char v16 = *v15; // 0x39fc09
    unsigned char v17 = v16 + (char)(a4 / 256); // 0x39fc09
    *v15 = v17;
    int32_t * v18 = (int32_t *)(v7 - 24 + 2 * ((int64_t)(v5 + 37) | v6)); // 0x39fc0c
    *v18 = *v18 - (int32_t)v7 + (int32_t)(v17 < v16);
    int32_t * v19 = (int32_t *)(v2 - 9); // 0x39fc10
    *v19 = *v19 + (int32_t)v2;
    char * v20 = (char *)v7; // 0x39fc26
    *v20 = *v20 ^ (char)a3;
    return (int64_t)*(int32_t *)0x6af0ec4cbeaa88;
}

// Address range: 0x39fc73 - 0x39fc75
int64_t function_39fc73(int64_t a1) {
    // 0x39fc73
    int64_t result; // 0x39fc73
    return result;
}

// Address range: 0x39fcaa - 0x39fcac
int64_t function_39fcaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39fcaa
    int64_t result; // 0x39fcaa
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x39fcc4 - 0x39fcd2
int64_t function_39fcc4(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 104 * a2; // 0x39fcc6
    int64_t result = v1 & 0xfffffff8; // 0x39fcc6
    char * v2 = (char *)result; // 0x39fccb
    *v2 = *v2 | (char)v1;
    int64_t v3; // 0x39fcc4
    int64_t v4; // 0x39fcc4
    *(int32_t *)a1 = *(int32_t *)&v3 + (int32_t)v4;
    return result;
}

// Address range: 0x39fcd9 - 0x39fcde
int64_t function_39fcd9(int64_t a1) {
    // 0x39fcd9
    int64_t v1; // 0x39fcd9
    return v1 & -256 | (int64_t)__asm_in((char)a1);
}

// Address range: 0x39fd58 - 0x39fd59
int64_t function_39fd58(void) {
    // 0x39fd58
    int64_t result; // 0x39fd58
    return result;
}

// Address range: 0x39fd72 - 0x39fe22
int64_t function_39fd72(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x39fd72
    int64_t v1; // 0x39fd72
    char v2 = (char)v1 - *(char *)(a3 + (int64_t)&g1); // 0x39fd72
    if (v2 >= 0) {
        // 0x39fd99
        return v1 & -256 | (int64_t)v2;
    }
    // 0x39fd7f
    bool v3; // 0x39fd72
    int64_t v4 = v3 ? -1 : 1; // 0x39fd7f
    int64_t v5 = v4 + a1; // 0x39fd7f
    int64_t v6 = a4 - 1; // 0x39fd80
    if ((char)a2 == (char)a1 || v6 == 0) {
        // 0x39fd82
        __asm_hlt(v5, v4 + a2, 0x85793afd, v6);
        if (a4 != 2) {
            // 0x39fdcf
            return function_3b3b9d();
        }
        // 0x39fd88
        *(int32_t *)0xa2135cf6 = *(int32_t *)0xa2135cf6 + (int32_t)v5;
        return 61 * a5 & 0xffffffff;
    }
    int64_t result = unknown_410d10b9(); // 0x39fdaf
    if (a4 != 2) {
        char v7 = result; // 0x39fe14
        *(char *)v5 = v7;
        int32_t * v8 = (int32_t *)result; // 0x39fe1b
        *v8 = *v8 + (int32_t)result;
        char * v9 = (char *)(v5 + v4); // 0x39fe1f
        *v9 = *v9 + v7;
        return result;
    }
    int32_t v10 = result; // 0x39fdbc
    int32_t v11 = v10 - 0x317e01; // 0x39fdbc
    unsigned char v12 = llvm_ctpop_i8((char)v11); // 0x39fdbc
    uint32_t v13 = 0x10000 * v10 >> 16; // 0x39fdc1
    __asm_out(58, v13);
    int64_t result2 = v13; // 0x39fdc4
    if (v11 != 0 == v12 % 2 == 0) {
        result2 = function_39fd58();
    }
    // 0x39fdc8
    return result2;
}

// Address range: 0x39fe24 - 0x39fe26
int64_t function_39fe24(void) {
    // 0x39fe24
    int64_t result; // 0x39fe24
    return result;
}

// Address range: 0x39fe35 - 0x39fe3a
int64_t function_39fe35(void) {
    // 0x39fe35
    return function_12d9c542();
}

// Address range: 0x39fe68 - 0x39fe6b
int64_t function_39fe68(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x39fe68
    *(char *)a3 = (char)a4;
    int64_t result; // 0x39fe68
    return result;
}

// Address range: 0x39fe77 - 0x39fe79
int64_t function_39fe77(void) {
    // 0x39fe77
    int64_t result; // 0x39fe77
    return result;
}

// Address range: 0x39feea - 0x39ff38
int64_t function_39feea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x39feea
    int64_t v1; // 0x39feea
    int64_t v2 = v1;
    bool v3; // 0x39feea
    if (v3) {
        // 0x39ff31
        return (v2 + 198) % 256 | v2 & -256;
    }
    // 0x39feed
    unknown_176fef5();
    return function_ffffffffd768c7b9();
}

// Address range: 0x3a004d - 0x3a0052
int64_t function_3a004d(int64_t a1) {
    // 0x3a004d
    int64_t v1; // 0x3a004d
    return -v1 & 0xffffffff;
}

// Address range: 0x3a0054 - 0x3a0058
int64_t function_3a0054(void) {
    // 0x3a0054
    int64_t v1; // 0x3a0054
    uint64_t result = v1;
    *(char *)result = (char)(result / 256) + (char)result;
    return result;
}

// Address range: 0x3a0086 - 0x3a0090
int64_t function_3a0086(void) {
    // 0x3a0086
    int64_t v1; // 0x3a0086
    bool v2; // 0x3a0086
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x3a00be - 0x3a00c1
int64_t function_3a00be(void) {
    // 0x3a00be
    int64_t result; // 0x3a00be
    return result;
}

// Address range: 0x3a0141 - 0x3a01d5
int64_t function_3a0141(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a0141
    int64_t v1; // 0x3a0141
    char v2 = v1 / 256;
    *(char *)-0x705a98b8 = *(char *)-0x705a98b8 + v2;
    *(int32_t *)0x1643421c = (int32_t)a1;
    int64_t v3 = v1 % 256 ^ v1; // 0x3a014d
    uint32_t v4 = (int32_t)v3; // 0x3a014f
    *(int32_t *)0x17d23a0a55f1f46b = v4;
    *(char *)-0x52bd3ea1 = *(char *)-0x52bd3ea1 + v2;
    int32_t * v5 = (int32_t *)(a2 + 0x1e4bfcd2); // 0x3a0166
    *v5 = *v5 - ((int32_t)v1 < v4 ? 18 : 17);
    __asm_int3();
    int64_t v6; // 0x3a0141
    *(char *)-0x68f1848b = *(char *)-0x68f1848b + (char)(v6 / 256);
    *(int64_t *)((v1 - v3 & 0xffffffff) - 8) = 0;
    int32_t * v7 = (int32_t *)(a5 + 0x45e08d0a); // 0x3a0177
    *v7 = 256 * *v7;
    int64_t v8 = v6;
    *(char *)v8 = *(char *)&v6 + (char)v8;
    __asm_int(6);
    __asm_insd((int16_t)a3);
    abort();
    // UNREACHABLE
}

// Address range: 0x3a0202 - 0x3a0205
int64_t function_3a0202(void) {
    // 0x3a0202
    int64_t result; // 0x3a0202
    return result;
}

// Address range: 0x3a0240 - 0x3a0241
int64_t function_3a0240(void) {
    // 0x3a0240
    int64_t result; // 0x3a0240
    return result;
}

// Address range: 0x3a028e - 0x3a0294
int64_t function_3a028e(void) {
    // 0x3a028e
    int64_t result; // 0x3a028e
    bool v1; // 0x3a028e
    if (!v1) {
        result = function_3a0240();
    }
    // 0x3a0291
    return result;
}

// Address range: 0x47966e - 0x4796eb
int64_t function_47966e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2; // bp-8, 0x47966e
    int64_t v2; // 0x47966e
    bool v3; // 0x47966e
    if (!v3) {
        int64_t v4 = v2 & 0x442cb427; // 0x4796c7
        *(int32_t *)a2 = (int32_t)a2 - (int32_t)v4;
        int64_t v5; // 0x47966e
        *(char *)v5 = *(char *)&v5 + 92 * (char)a1;
        return v4 + 0x51f301d0;
    }
    // 0x479671
    *(int32_t *)v2 = (int32_t)a3;
    uint32_t v6 = *(int32_t *)(2 * v2 + 0x26a04141 + (int64_t)&v1); // 0x479675
    if ((char)v2 < 26) {
        function_479660();
    }
    // 0x47967e
    return *(int64_t *)(int64_t)v6 & 0xffffffff;
}

// Address range: 0x479701 - 0x47973c
int64_t function_479701(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x479701
    int64_t result; // 0x479701
    if (a4 != 0) {
        // 0x479703
        return result;
    }
    char * v1 = (char *)a1; // 0x479736
    *v1 = (char)((int32_t)result < 0) - (char)a3 + *v1;
    return result;
}

// Address range: 0x479763 - 0x479779
int64_t function_479763(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 - 0x6a10e739); // 0x479764
    *v1 = *v1 / 2;
    int64_t v2; // 0x479763
    return v2 & -256 | 88;
}

// Address range: 0x4797e4 - 0x4797e5
int64_t function_4797e4(void) {
    // 0x4797e4
    int64_t result; // 0x4797e4
    return result;
}

// Address range: 0x479816 - 0x47981e
int64_t function_479816(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x479816
    return function_1a4915de();
}

// Address range: 0x47981e - 0x479833
int64_t function_47981e(void) {
    // 0x47981e
    int64_t v1; // 0x47981e
    return (v1 ^ 0xd85bd223) + 0xbc8b34f6 & 0xffffffff;
}

// Address range: 0x4798bc - 0x4798bf
int64_t function_4798bc(int64_t a1) {
    // 0x4798bc
    int64_t v1; // 0x4798bc
    return v1 | 100;
}

// Address range: 0x47992e - 0x47992f
int64_t function_47992e(void) {
    // 0x47992e
    int64_t result; // 0x47992e
    return result;
}

// Address range: 0x479934 - 0x479937
int64_t function_479934(void) {
    // 0x479934
    return function_47992e();
}

// Address range: 0x479961 - 0x479962
int64_t function_479961(void) {
    // 0x479961
    int64_t result; // 0x479961
    return result;
}

// Address range: 0x4799a5 - 0x4799a9
int64_t function_4799a5(void) {
    // 0x4799a5
    int64_t result; // 0x4799a5
    return result;
}

// Address range: 0x479a56 - 0x479a58
int64_t function_479a56(void) {
    // 0x479a56
    int64_t v1; // 0x479a56
    return function_479a81(v1, v1, v1, v1);
}

// Address range: 0x479a77 - 0x479a81
int64_t function_479a77(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a3 + 0x195e2132); // 0x479a77
    int64_t v2; // 0x479a77
    *v1 = *v1 - (char)v2;
    return __asm_hlt(a4, a2, a3, v2);
}

// Address range: 0x479a81 - 0x479a8e
int64_t function_479a81(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x479a81
    int64_t v1; // 0x479a81
    __asm_out_133((int16_t)a3, (char)v1);
    char * v2 = (char *)(v1 + 16); // 0x479a82
    *v2 = *v2 + (char)a4;
    int32_t v3 = 0x10000 * (int32_t)v1 >> 16; // 0x479a85
    char * v4 = (char *)(a2 - 119); // 0x479a8b
    *v4 = (char)((v1 & 0x20000000) != 0) - (char)(a4 / 256) + *v4;
    return (v3 + 58) % 256 | v3 & -256;
}

// Address range: 0x479a9a - 0x479aa6
int64_t function_479a9a(int64_t a1) {
    // 0x479a9a
    int64_t v1; // 0x479a9a
    uint64_t v2 = v1;
    char v3 = *(char *)(v1 - 0x718367c2); // 0x479a9f
    return 256 * (int64_t)(v3 + (char)(v2 / 256)) | v2 & -0xff01;
}
