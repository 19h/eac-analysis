/*
 * Targeted RetDec C for native executable gap queue batch 3946.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x49620b-0x496220 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49dadb-0x49daf0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a983b-0x4a9850 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b4fdb-0x4b4ff0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e9c9c-0x4e9cb0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4eea1c-0x4eea30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f404c-0x4f4060 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f415c-0x4f4170 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f4f3c-0x4f4f50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f503c-0x4f5050 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f513c-0x4f5150 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f51cc-0x4f51e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50847c-0x508490 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50864c-0x508660 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50e0cc-0x50e0e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x525d0c-0x525d20 rank=- name=- kind=- bytes=- uncovered=-
 *   0x525e5c-0x525e70 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54e6cc-0x54e6e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54f0cc-0x54f0e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x55257c-0x552590 rank=- name=- kind=- bytes=- uncovered=-
 *   0x55b87c-0x55b890 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56505c-0x565070 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56599c-0x5659b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5684ec-0x568500 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5687bc-0x5687d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x569fac-0x569fc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56a0bc-0x56a0d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56ae9c-0x56aeb0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56af9c-0x56afb0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56b2ac-0x56b2c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56b57c-0x56b590 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57c75c-0x57c770 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_495caa();
int64_t function_49620b(void);
int64_t function_49da30();
int64_t function_49daad();
int64_t function_49dadb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_49dae2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4a97c3();
int64_t function_4a983b(void);
int64_t function_4a983c(void);
int64_t function_4b4fc1();
int64_t function_4b4fdb(void);
int64_t function_4b4fdd(void);
int64_t function_4b4fe0(void);
int64_t function_4e9c9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4eea1c(int64_t a1);
int64_t function_4eeb50();
int64_t function_4f404c(void);
int64_t function_4f415c(void);
int64_t function_4f4f3c(void);
int64_t function_4f503c(void);
int64_t function_4f513c(void);
int64_t function_4f51cc(void);
int64_t function_508467();
int64_t function_50847c(void);
int64_t function_508637();
int64_t function_50864c(void);
int64_t function_50d1e0();
int64_t function_50e0cc(void);
int64_t function_525cbd();
int64_t function_525d0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_525d13(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_525e0d();
int64_t function_525e5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_525e63(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_54e6cc(int64_t a1);
int64_t function_54f0cc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_552567();
int64_t function_55257c(void);
int64_t function_552581(void);
int64_t function_55b82d();
int64_t function_55b87c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_55b883(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_56505c(int64_t a1, int64_t a2);
int64_t function_56599c(void);
int64_t function_5684ec(void);
int64_t function_5687bc(void);
int64_t function_569fac(void);
int64_t function_56a0bc(void);
int64_t function_56ae9c(void);
int64_t function_56af9c(void);
int64_t function_56b2ac(void);
int64_t function_56b57c(void);
int64_t function_57c75c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);

// Address range: 0x49620b - 0x496215
int64_t function_49620b(void) {
    // 0x49620b
    return function_495caa();
}

// Address range: 0x49dadb - 0x49dae1
int64_t function_49dadb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x49dadb
    int64_t v1; // 0x49dadb
    int32_t * v2 = (int32_t *)(4 * a4 + 5 + v1); // 0x49dadb
    int32_t v3 = *v2 - 1; // 0x49dadb
    *v2 = v3;
    int64_t result; // 0x49dadb
    bool v4; // 0x49dadb
    if (v4 || v3 == 0) {
        result = function_49daad();
    }
    // 0x49dae1
    return result;
}

// Address range: 0x49dae2 - 0x49daed
int64_t function_49dae2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + (int64_t)&g1); // 0x49dae2
    int64_t v2; // 0x49dae2
    *v1 = *v1 + (char)((uint64_t)v2 / 256);
    return function_49da30();
}

// Address range: 0x4a983b - 0x4a983c
int64_t function_4a983b(void) {
    // 0x4a983b
    int64_t result; // 0x4a983b
    return result;
}

// Address range: 0x4a983c - 0x4a9848
int64_t function_4a983c(void) {
    // 0x4a983c
    int64_t v1; // 0x4a983c
    int32_t * v2 = (int32_t *)(v1 + 0x31d575c0); // 0x4a983c
    *v2 = *v2 + 1;
    return function_4a97c3();
}

// Address range: 0x4b4fdb - 0x4b4fdc
int64_t function_4b4fdb(void) {
    // 0x4b4fdb
    int64_t result; // 0x4b4fdb
    return result;
}

// Address range: 0x4b4fdd - 0x4b4fdf
int64_t function_4b4fdd(void) {
    // 0x4b4fdd
    return function_4b4fc1();
}

// Address range: 0x4b4fe0 - 0x4b4fe7
int64_t function_4b4fe0(void) {
    // 0x4b4fe0
    return function_4b4fc1();
}

// Address range: 0x4e9c9c - 0x4e9cab
int64_t function_4e9c9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4e9c9c
    *(int64_t *)a4 = a3 & (int64_t)(int32_t)&g3;
    int64_t result; // 0x4e9c9c
    return result;
}

// Address range: 0x4eea1c - 0x4eea2b
int64_t function_4eea1c(int64_t a1) {
    int64_t result = g2; // 0x4eea23
    g2 = a1;
    return result;
}

// Address range: 0x4f404c - 0x4f4060
int64_t function_4f404c(void) {
    // 0x4f404c
    int64_t v1; // 0x4f404c
    function_4eeb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g4;
}

// Address range: 0x4f415c - 0x4f4170
int64_t function_4f415c(void) {
    // 0x4f415c
    int64_t v1; // 0x4f415c
    function_4eeb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g4;
}

// Address range: 0x4f4f3c - 0x4f4f50
int64_t function_4f4f3c(void) {
    // 0x4f4f3c
    int64_t v1; // 0x4f4f3c
    function_4eeb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g4;
}

// Address range: 0x4f503c - 0x4f5050
int64_t function_4f503c(void) {
    // 0x4f503c
    int64_t v1; // 0x4f503c
    function_4eeb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g4;
}

// Address range: 0x4f513c - 0x4f5150
int64_t function_4f513c(void) {
    // 0x4f513c
    int64_t v1; // 0x4f513c
    function_4eeb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g4;
}

// Address range: 0x4f51cc - 0x4f51e0
int64_t function_4f51cc(void) {
    // 0x4f51cc
    int64_t v1; // 0x4f51cc
    function_4eeb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g4;
}

// Address range: 0x50847c - 0x50847e
int64_t function_50847c(void) {
    // 0x50847c
    return function_508467();
}

// Address range: 0x50864c - 0x50864e
int64_t function_50864c(void) {
    // 0x50864c
    return function_508637();
}

// Address range: 0x50e0cc - 0x50e0d5
int64_t function_50e0cc(void) {
    // 0x50e0cc
    int64_t v1; // 0x50e0cc
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x50e0cc
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return function_50d1e0();
}

// Address range: 0x525d0c - 0x525d0f
int64_t function_525d0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x525d0c
    int64_t result; // 0x525d0c
    int64_t v1 = result;
    bool v2; // 0x525d0c
    *(char *)v1 = (char)v1 + (char)a6 + (char)v2;
    return result;
}

// Address range: 0x525d13 - 0x525d1c
int64_t function_525d13(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 67); // 0x525d13
    *v1 = *v1 + 1;
    int64_t v2; // 0x525d13
    int64_t v3 = v2;
    *(int32_t *)v3 = *(int32_t *)&v2 + (int32_t)v3;
    int64_t v4 = v2;
    *(char *)v4 = *(char *)&v2 + (char)v4;
    return function_525cbd();
}

// Address range: 0x525e5c - 0x525e5f
int64_t function_525e5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x525e5c
    int64_t result; // 0x525e5c
    int64_t v1 = result;
    bool v2; // 0x525e5c
    *(char *)v1 = (char)v1 + (char)a6 + (char)v2;
    return result;
}

// Address range: 0x525e63 - 0x525e6c
int64_t function_525e63(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 67); // 0x525e63
    *v1 = *v1 + 1;
    int64_t v2; // 0x525e63
    int64_t v3 = v2;
    *(int32_t *)v3 = *(int32_t *)&v2 + (int32_t)v3;
    int64_t v4 = v2;
    *(char *)v4 = *(char *)&v2 + (char)v4;
    return function_525e0d();
}

// Address range: 0x54e6cc - 0x54e6db
int64_t function_54e6cc(int64_t a1) {
    // 0x54e6cc
    int64_t v1; // 0x54e6cc
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x54e6cc
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return 2;
}

// Address range: 0x54f0cc - 0x54f0e0
int64_t function_54f0cc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    uint64_t v1 = a4 / 256; // 0x54f0cc
    __asm_out((int16_t)a3, (char)v1);
    int64_t v2; // 0x54f0cc
    bool v3; // 0x54f0cc
    return (v2 & 0xffffff00 | v1 % 256) + 0x2e66ffad + (int64_t)v3 & 0xffffffff;
}

// Address range: 0x55257c - 0x55257e
int64_t function_55257c(void) {
    // 0x55257c
    return function_552567();
}

// Address range: 0x552581 - 0x552584
int64_t function_552581(void) {
    // 0x552581
    int64_t result; // 0x552581
    return result;
}

// Address range: 0x55b87c - 0x55b87f
int64_t function_55b87c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x55b87c
    int64_t result; // 0x55b87c
    int64_t v1 = result;
    bool v2; // 0x55b87c
    *(char *)v1 = (char)v1 + (char)a6 + (char)v2;
    return result;
}

// Address range: 0x55b883 - 0x55b88c
int64_t function_55b883(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 67); // 0x55b883
    *v1 = *v1 + 1;
    int64_t v2; // 0x55b883
    int64_t v3 = v2;
    *(int32_t *)v3 = *(int32_t *)&v2 + (int32_t)v3;
    int64_t v4 = v2;
    *(char *)v4 = *(char *)&v2 + (char)v4;
    return function_55b82d();
}

// Address range: 0x56505c - 0x565065
int64_t function_56505c(int64_t a1, int64_t a2) {
    // 0x56505c
    int64_t result; // 0x56505c
    char * v1 = (char *)(result + 6); // 0x56505c
    *v1 = *v1 - (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x56599c - 0x5659b0
int64_t function_56599c(void) {
    // 0x56599c
    int64_t v1; // 0x56599c
    function_4eeb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g4;
}

// Address range: 0x5684ec - 0x568500
int64_t function_5684ec(void) {
    // 0x5684ec
    int64_t v1; // 0x5684ec
    function_4eeb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g4;
}

// Address range: 0x5687bc - 0x5687d0
int64_t function_5687bc(void) {
    // 0x5687bc
    int64_t v1; // 0x5687bc
    function_4eeb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g4;
}

// Address range: 0x569fac - 0x569fc0
int64_t function_569fac(void) {
    // 0x569fac
    int64_t v1; // 0x569fac
    function_4eeb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g4;
}

// Address range: 0x56a0bc - 0x56a0d0
int64_t function_56a0bc(void) {
    // 0x56a0bc
    int64_t v1; // 0x56a0bc
    function_4eeb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g4;
}

// Address range: 0x56ae9c - 0x56aeb0
int64_t function_56ae9c(void) {
    // 0x56ae9c
    int64_t v1; // 0x56ae9c
    function_4eeb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g4;
}

// Address range: 0x56af9c - 0x56afb0
int64_t function_56af9c(void) {
    // 0x56af9c
    int64_t v1; // 0x56af9c
    function_4eeb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g4;
}

// Address range: 0x56b2ac - 0x56b2c0
int64_t function_56b2ac(void) {
    // 0x56b2ac
    int64_t v1; // 0x56b2ac
    function_4eeb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g4;
}

// Address range: 0x56b57c - 0x56b590
int64_t function_56b57c(void) {
    // 0x56b57c
    int64_t v1; // 0x56b57c
    function_4eeb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g4;
}

// Address range: 0x57c75c - 0x57c765
int64_t function_57c75c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x57c75c
    int64_t v1; // 0x57c75c
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t v3; // 0x57c75c
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return result;
}
