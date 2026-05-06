/*
 * Targeted RetDec C for native executable gap queue batch 3941.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x24f27-0x24f44 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d998-0x4d9b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4da9d-0x4daba rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ad6d2-0x4ad6f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b18e2-0x4b1900 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bcaa3-0x4bcac0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c4893-0x4c48b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c48e3-0x4c4900 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c5bb3-0x4c5bd0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d2e22-0x4d2e40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d9073-0x4d9090 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ea333-0x4ea350 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f1902-0x4f1920 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f4f03-0x4f4f20 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f5003-0x4f5020 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50cef3-0x50cf10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54e624-0x54e640 rank=- name=- kind=- bytes=- uncovered=-
 *   0x564172-0x564190 rank=- name=- kind=- bytes=- uncovered=-
 *   0x568784-0x5687a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x568b33-0x568b50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x569232-0x569250 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56ae63-0x56ae80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56af63-0x56af80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56b7c3-0x56b7e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56bc82-0x56bca0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56beb3-0x56bed0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56e7e2-0x56e800 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56e8d2-0x56e8f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57ca23-0x57ca40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5822a2-0x5822c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5826b4-0x5826d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x582e74-0x582e90 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1fd70();
int64_t function_24f27(int64_t a1, int64_t a2);
int64_t function_25712();
int64_t function_4ad5f4();
int64_t function_4ad6d2(int64_t a1);
int64_t function_4ad6d5(void);
int64_t function_4ad6e0(void);
int64_t function_4b1853();
int64_t function_4b18b8();
int64_t function_4b18e2(void);
int64_t function_4b18ea(void);
int64_t function_4b19a0();
int64_t function_4bcaa3(int32_t a1);
int64_t function_4c47e5();
int64_t function_4c4893(int64_t a1);
int64_t function_4c4896(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4c48e3(void);
int64_t function_4c48e4(void);
int64_t function_4c5a87();
int64_t function_4c5bb3(void);
int64_t function_4c5bb8(void);
int64_t function_4d2dcb();
int64_t function_4d2e22(void);
int64_t function_4d2e25(void);
int64_t function_4d2e30(void);
int64_t function_4d9073(int64_t a1);
int64_t function_4d998(int64_t a1);
int64_t function_4da9d(int64_t a1, int64_t a2);
int64_t function_4daae(int64_t a1, int64_t a2);
int64_t function_4ea333(void);
int64_t function_4ea33a(void);
int64_t function_4ea340(void);
int64_t function_4eeb50();
int64_t function_4efb50();
int64_t function_4f1902(int64_t stream);
int64_t function_4f4f03(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4f5003(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_50cdd1();
int64_t function_50cef3(int64_t a1);
int64_t function_54dd30();
int64_t function_54e5f5();
int64_t function_54e624(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_5640b7();
int64_t function_564123();
int64_t function_564172(int64_t a1, int64_t a2, int64_t a3);
int64_t function_56417c(void);
int64_t function_565970();
int64_t function_566180();
int64_t function_568784(void);
int64_t function_568b33(void);
int64_t function_569165();
int64_t function_569232(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_56ae63(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_56af63(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_56b7c3(void);
int64_t function_56bb60();
int64_t function_56bc82(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_56bc8d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_56bd15();
int64_t function_56bdb8();
int64_t function_56beb3(void);
int64_t function_56bec0(void);
int64_t function_56e7e2(void);
int64_t function_56e8d2(void);
int64_t function_57ca23(int64_t a1, int64_t a2);
int64_t function_58212d();
int64_t function_5822a2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_582662();
int64_t function_58268d();
int64_t function_5826b4(void);
int64_t function_5826cd(void);
int64_t function_582980();
int64_t function_582d09();
int64_t function_582e74(int64_t a1);
int64_t function_7259e();

// Address range: 0x24f27 - 0x24f43
int64_t function_24f27(int64_t a1, int64_t a2) {
    // 0x24f27
    return function_25712();
}

// Address range: 0x4d998 - 0x4d9b5
int64_t function_4d998(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x4d999
    int64_t result = function_7259e(v1); // 0x4d9a0
    if (v1 == 0) {
        // 0x4d9b3
        return result;
    }
    // 0x4d9aa
    return function_4eeb50(v1);
}

// Address range: 0x4da9d - 0x4daad
int64_t function_4da9d(int64_t a1, int64_t a2) {
    uint64_t v1 = a2 + 1; // 0x4da9e
    return v1 < 256 ? v1 : 0;
}

// Address range: 0x4daae - 0x4daba
int64_t function_4daae(int64_t a1, int64_t a2) {
    // 0x4daae
    return *(int64_t *)(a1 + 24) + 0x10000 * a2;
}

// Address range: 0x4ad6d2 - 0x4ad6d4
int64_t function_4ad6d2(int64_t a1) {
    // 0x4ad6d2
    int64_t result; // 0x4ad6d2
    return result;
}

// Address range: 0x4ad6d5 - 0x4ad6d8
int64_t function_4ad6d5(void) {
    // 0x4ad6d5
    int64_t result; // 0x4ad6d5
    return result;
}

// Address range: 0x4ad6e0 - 0x4ad6ea
int64_t function_4ad6e0(void) {
    // 0x4ad6e0
    return function_4ad5f4();
}

// Address range: 0x4b18e2 - 0x4b18ea
int64_t function_4b18e2(void) {
    // 0x4b18e2
    return function_4b1853();
}

// Address range: 0x4b18ea - 0x4b18f2
int64_t function_4b18ea(void) {
    // 0x4b18ea
    return function_4b18b8();
}

// Address range: 0x4bcaa3 - 0x4bcab5
int64_t function_4bcaa3(int32_t a1) {
    // 0x4bcaa3
    return function_4b19a0();
}

// Address range: 0x4c4893 - 0x4c4895
int64_t function_4c4893(int64_t a1) {
    // 0x4c4893
    int64_t result; // 0x4c4893
    *(int32_t *)a1 = (int32_t)result - 1;
    return result;
}

// Address range: 0x4c4896 - 0x4c48a2
int64_t function_4c4896(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 - 0x3f00); // 0x4c4896
    *v1 = *v1 + (char)a1;
    return function_4c47e5();
}

// Address range: 0x4c48e3 - 0x4c48e4
int64_t function_4c48e3(void) {
    // 0x4c48e3
    int64_t result; // 0x4c48e3
    return result;
}

// Address range: 0x4c48e4 - 0x4c48f6
int64_t function_4c48e4(void) {
    // 0x4c48e4
    return 0xffffc180;
}

// Address range: 0x4c5bb3 - 0x4c5bb5
int64_t function_4c5bb3(void) {
    // 0x4c5bb3
    int64_t result; // 0x4c5bb3
    return result;
}

// Address range: 0x4c5bb8 - 0x4c5bc2
int64_t function_4c5bb8(void) {
    // 0x4c5bb8
    return function_4c5a87();
}

// Address range: 0x4d2e22 - 0x4d2e23
int64_t function_4d2e22(void) {
    // 0x4d2e22
    int64_t result; // 0x4d2e22
    return result;
}

// Address range: 0x4d2e25 - 0x4d2e27
int64_t function_4d2e25(void) {
    // 0x4d2e25
    return function_4d2dcb();
}

// Address range: 0x4d2e30 - 0x4d2e37
int64_t function_4d2e30(void) {
    // 0x4d2e30
    return function_4d2dcb();
}

// Address range: 0x4d9073 - 0x4d9082
int64_t function_4d9073(int64_t a1) {
    // 0x4d9073
    return function_1fd70();
}

// Address range: 0x4ea333 - 0x4ea339
int64_t function_4ea333(void) {
    // 0x4ea333
    int64_t result; // 0x4ea333
    char * v1 = (char *)(result + 0x7402fa83); // 0x4ea333
    bool v2; // 0x4ea333
    *v1 = *v1 + (char)result + (char)v2;
    return result;
}

// Address range: 0x4ea33a - 0x4ea33b
int64_t function_4ea33a(void) {
    // 0x4ea33a
    int64_t result; // 0x4ea33a
    return result;
}

// Address range: 0x4ea340 - 0x4ea341
int64_t function_4ea340(void) {
    // 0x4ea340
    int64_t result; // 0x4ea340
    return result;
}

// Address range: 0x4f1902 - 0x4f1918
int64_t function_4f1902(int64_t stream) {
    // 0x4f1902
    return fflush((struct _IO_FILE *)stream);
}

// Address range: 0x4f4f03 - 0x4f4f20
int64_t function_4f4f03(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4f4f03
    int64_t v1; // 0x4f4f03
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)(v1 & 0xffffffff));
    return (int64_t)&g1;
}

// Address range: 0x4f5003 - 0x4f5020
int64_t function_4f5003(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4f5003
    int64_t v1; // 0x4f5003
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)(v1 & 0xffffffff));
    return (int64_t)&g1;
}

// Address range: 0x50cef3 - 0x50cf05
int64_t function_50cef3(int64_t a1) {
    // 0x50cef3
    int64_t wstr; // 0x50cef3
    wmemcpy((int32_t *)wstr, (int32_t *)wstr, (int32_t)wstr);
    return function_50cdd1();
}

// Address range: 0x54e624 - 0x54e635
int64_t function_54e624(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x54e624
    int64_t v1; // 0x54e624
    int64_t v2 = v1;
    int64_t v3 = a5;
    *(int32_t *)v2 = (int32_t)v2;
    int64_t v4 = function_54dd30(); // 0x54e627
    int64_t result = v4; // 0x54e62e
    if ((char)v4 == 0) {
        result = function_54e5f5();
    }
    // 0x54e630
    *(int32_t *)v3 = *(int32_t *)&v3 | 1;
    return result;
}

// Address range: 0x564172 - 0x56417c
int64_t function_564172(int64_t a1, int64_t a2, int64_t a3) {
    if ((int32_t)a3 != 0) {
        function_5640b7();
    }
    // 0x56417a
    return function_564123();
}

// Address range: 0x56417c - 0x564183
int64_t function_56417c(void) {
    // 0x56417c
    return function_564123();
}

// Address range: 0x568784 - 0x5687a0
int64_t function_568784(void) {
    // 0x568784
    int64_t v1; // 0x568784
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g1;
}

// Address range: 0x568b33 - 0x568b50
int64_t function_568b33(void) {
    // 0x568b33
    int64_t v1; // 0x568b33
    function_566180(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g1;
}

// Address range: 0x569232 - 0x569250
int64_t function_569232(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x569232
    int64_t v1; // 0x569232
    int32_t * v2 = (int32_t *)(v1 - 117); // 0x569232
    int32_t v3 = *v2 | (int32_t)a4; // 0x569232
    *v2 = v3;
    if (v3 == 0) {
        // 0x569237
        return function_569165();
    }
    // 0x569247
    int64_t result; // 0x569232
    int64_t v4 = result;
    *(char *)v4 = *(char *)&result + (char)v4;
    int64_t v5 = result;
    *(char *)v5 = *(char *)&result + (char)v5;
    return result;
}

// Address range: 0x56ae63 - 0x56ae80
int64_t function_56ae63(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x56ae63
    int64_t v1; // 0x56ae63
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)(v1 & 0xffffffff));
    return (int64_t)&g1;
}

// Address range: 0x56af63 - 0x56af80
int64_t function_56af63(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x56af63
    int64_t v1; // 0x56af63
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)(v1 & 0xffffffff));
    return (int64_t)&g1;
}

// Address range: 0x56b7c3 - 0x56b7e0
int64_t function_56b7c3(void) {
    // 0x56b7c3
    int64_t v1; // 0x56b7c3
    function_566180(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g1;
}

// Address range: 0x56bc82 - 0x56bc88
int64_t function_56bc82(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x56bc82
    int64_t v1; // 0x56bc82
    return v1 & -241;
}

// Address range: 0x56bc8d - 0x56bc94
int64_t function_56bc8d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x56bc8d
    return function_56bb60();
}

// Address range: 0x56beb3 - 0x56bebb
int64_t function_56beb3(void) {
    // 0x56beb3
    return function_56bd15();
}

// Address range: 0x56bec0 - 0x56beca
int64_t function_56bec0(void) {
    // 0x56bec0
    return function_56bdb8();
}

// Address range: 0x56e7e2 - 0x56e800
int64_t function_56e7e2(void) {
    // 0x56e7e2
    int64_t v1; // 0x56e7e2
    function_4efb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g1;
}

// Address range: 0x56e8d2 - 0x56e8f0
int64_t function_56e8d2(void) {
    // 0x56e8d2
    int64_t v1; // 0x56e8d2
    function_4efb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g1;
}

// Address range: 0x57ca23 - 0x57ca31
int64_t function_57ca23(int64_t a1, int64_t a2) {
    // 0x57ca23
    return 0;
}

// Address range: 0x5822a2 - 0x5822bf
int64_t function_5822a2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5822a2
    int64_t v1; // 0x5822a2
    *(int64_t *)(v1 + 256) = a3;
    *(char *)(2 * v1) = 32;
    *(char *)(v1 + 264) = 32;
    return function_58212d();
}

// Address range: 0x5826b4 - 0x5826c9
int64_t function_5826b4(void) {
    // 0x5826b4
    int64_t v1; // 0x5826b4
    if (v1 == 255) {
        function_582662();
    }
    // 0x5826c0
    return function_58268d();
}

// Address range: 0x5826cd - 0x5826d0
int64_t function_5826cd(void) {
    // 0x5826cd
    int64_t result; // 0x5826cd
    return result;
}

// Address range: 0x582e74 - 0x582e88
int64_t function_582e74(int64_t a1) {
    // 0x582e74
    int64_t v1; // 0x582e74
    function_582980(v1, v1 & 0xffffffff);
    return function_582d09();
}
