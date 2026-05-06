/*
 * Targeted RetDec C for native executable gap queue batch 1559.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x133fa5-0x1341a5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1341a5-0x1343a5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1344a5-0x1345a5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x134693-0x134781 rank=- name=- kind=- bytes=- uncovered=-
 *   0x29b8c9-0x29bac9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x29bac9-0x29bcc9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5149d8-0x514bd8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x514bd8-0x514dd8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x514dd8-0x514fd8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x514fd8-0x5151d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5151d8-0x5153a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x55ee32-0x55f032 rank=- name=- kind=- bytes=- uncovered=-
 *   0x55f032-0x55f232 rank=- name=- kind=- bytes=- uncovered=-
 *   0x55f232-0x55f432 rank=- name=- kind=- bytes=- uncovered=-
 *   0x55f432-0x55f632 rank=- name=- kind=- bytes=- uncovered=-
 *   0x55f632-0x55f800 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g6;
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

int64_t function_133fa5(void);
int64_t function_133fba(void);
int64_t function_133ff5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_134022(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_134065(int64_t a1, int64_t a2);
int64_t function_134072(int64_t a1);
int64_t function_1340bf(void);
int64_t function_1340e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_134100(void);
int64_t function_1341f1(int64_t a1);
int64_t function_13422f(void);
int64_t function_134236(int64_t a1);
int64_t function_13425c(void);
int64_t function_13428b(void);
int64_t function_134295(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1342e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1342eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13435a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_134373(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1344a5(void);
int64_t function_1344b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1344f3(void);
int64_t function_134527(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_134693(int64_t a1, int64_t a2);
int64_t function_13470b(int64_t a1, int64_t a2);
int64_t function_2122cc4();
int64_t function_259ce();
int64_t function_29b8c9(int64_t result);
int64_t function_29b8dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29b93a(void);
int64_t function_29b966(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29b977(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29b998(void);
int64_t function_29b99a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29ba34(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29ba5a(int64_t a1);
int64_t function_29ba7b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29bab6(void);
int64_t function_29bafc(int64_t a1);
int64_t function_29bb10(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29bb2c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29bb6d(void);
int64_t function_29bb7b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_29bbec(int64_t a1);
int64_t function_29bbf3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29bc50(int64_t a1);
int64_t function_29bc57(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29bc6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d4527c1();
int64_t function_451f2();
int64_t function_4c3d8559();
int64_t function_508620();
int64_t function_50d7a0();
int64_t function_50e0e0();
int64_t function_50f6f0();
int64_t function_50f7d0();
int64_t function_5149d8(void);
int64_t function_5149de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_515377(void);
int64_t function_5245c0();
int64_t function_524600();
int64_t function_5246d0();
int64_t function_552550();
int64_t function_558300();
int64_t function_55ed66();
int64_t function_55ee32(void);
int64_t function_55ee3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_569070();
int64_t function_ffffffff9f19ac9d();
int64_t function_ffffffffc40a18e9();
int64_t unknown_20a32f06();
int64_t unknown_23dbac91();
int64_t unknown_2455cf78();
int64_t unknown_3246db46();
int64_t unknown_349972fd();
int64_t unknown_57ab2a02();
int64_t unknown_7a867e21();
int64_t unknown_e95f13();
int64_t unknown_ffffffff91234208();
int64_t unknown_ffffffff9dcc44cb();
int64_t unknown_ffffffffad6f39a0();

// Address range: 0x133fa5 - 0x133fb8
int64_t function_133fa5(void) {
    // 0x133fa5
    int64_t v1; // 0x133fa5
    uint64_t result = v1;
    char * v2 = (char *)(result + 9); // 0x133fb5
    *v2 = *v2 + (char)(result / 256);
    return result;
}

// Address range: 0x133fba - 0x133fc1
int64_t function_133fba(void) {
    // 0x133fba
    return function_3d4527c1();
}

// Address range: 0x133ff5 - 0x134012
int64_t function_133ff5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x133ff5
    bool v1; // 0x133ff5
    if (v1 || false) {
        // 0x133ffe
        float80_t v2; // 0x133ff5
        *(int64_t *)(a3 - 0x30d4ff98) = (int64_t)v2;
        return a3 & 0xffffffff;
    }
    char * v3 = (char *)(a3 + 71); // 0x133ff7
    int64_t result; // 0x133ff5
    *v3 = *v3 + (char)result;
    return result;
}

// Address range: 0x134022 - 0x134050
int64_t function_134022(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3 + a1; // 0x134022
    int64_t result = v1 & 0xffffffff; // 0x134022
    int64_t v2; // 0x134022
    int32_t v3 = *(int32_t *)(v2 + 123); // 0x134024
    char * v4 = (char *)(a2 + 86); // 0x13402d
    *v4 = *v4 + (char)v2;
    int64_t v5; // 0x134022
    *(char *)v5 = *(char *)&v5 & (char)(v3 + (int32_t)a3);
    int32_t * v6 = (int32_t *)(2 * result + 0x69e8e060 + v5); // 0x13403e
    *v6 = *v6 | (int32_t)a2;
    __asm_iretd((int32_t)v1);
    return result;
}

// Address range: 0x134065 - 0x134069
int64_t function_134065(int64_t a1, int64_t a2) {
    // 0x134065
    int64_t result; // 0x134065
    return result;
}

// Address range: 0x134072 - 0x134078
int64_t function_134072(int64_t a1) {
    // 0x134072
    return unknown_2455cf78(a1);
}

// Address range: 0x1340bf - 0x1340c0
int64_t function_1340bf(void) {
    // 0x1340bf
    int64_t result; // 0x1340bf
    return result;
}

// Address range: 0x1340e8 - 0x1340fc
int64_t function_1340e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1340e8
    int64_t v1; // 0x1340e8
    int64_t result = v1 & -201; // 0x1340e8
    if (a4 != 1) {
        // 0x134105
        return result;
    }
    char * v2 = (char *)(result + 23); // 0x1340ed
    *v2 = *v2 + (char)a3;
    return result;
}

// Address range: 0x134100 - 0x134105
int64_t function_134100(void) {
    // 0x134100
    return unknown_20a32f06();
}

// Address range: 0x1341f1 - 0x1341f3
int64_t function_1341f1(int64_t a1) {
    // 0x1341f1
    int64_t result; // 0x1341f1
    return result;
}

// Address range: 0x13422f - 0x134230
int64_t function_13422f(void) {
    // 0x13422f
    int64_t result; // 0x13422f
    return result;
}

// Address range: 0x134236 - 0x134237
int64_t function_134236(int64_t a1) {
    // 0x134236
    int64_t result; // 0x134236
    return result;
}

// Address range: 0x13425c - 0x134260
int64_t function_13425c(void) {
    // 0x13425c
    int64_t result; // 0x13425c
    __asm_out(-2, (int32_t)result);
    return result;
}

// Address range: 0x13428b - 0x13428c
int64_t function_13428b(void) {
    // 0x13428b
    int64_t result; // 0x13428b
    return result;
}

// Address range: 0x134295 - 0x1342a8
int64_t function_134295(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x34d696ff; // bp-8, 0x134295
    int64_t v2; // 0x134295
    unsigned char v3 = (char)v2;
    *(char *)a6 = v3 / 128 | 2 * v3;
    bool v4; // 0x134295
    uint32_t v5 = (int32_t)((v4 ? 0xffffffff : 1) + a2); // 0x1342a0
    uint32_t v6 = (int32_t)(int64_t)&v1 + v5; // 0x1342a0
    if (v6 < v5 || v6 == 0) {
        function_13422f();
    }
    // 0x1342a6
    return function_13428b();
}

// Address range: 0x1342e2 - 0x1342e6
int64_t function_1342e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1342e2
    int64_t result; // 0x1342e2
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x1342eb - 0x134358
int64_t function_1342eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = *(int32_t *)(a2 + 80); // 0x1342eb
    int64_t result; // 0x1342eb
    if (v1 <= -84) {
        // 0x1342f1
        return result;
    }
    unsigned char v2 = *(char *)0x600013d035ee6dc - (v1 < 0xffffffac ? -55 : -56); // 0x13434a
    *(char *)0x68f6ff94d6744608 = v2;
    char * v3 = (char *)(2 * a4 + a1); // 0x134355
    *v3 = *v3 + (char)((uint64_t)result / 256);
    return result & -256 | (int64_t)v2;
}

// Address range: 0x13435a - 0x134373
int64_t function_13435a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)0x4fcd2261; // 0x13435a
    int64_t v2; // 0x13435a
    unsigned char v3 = v1 + (char)((uint64_t)v2 / 256); // 0x13435a
    *(char *)0x4fcd2261 = v3;
    uint32_t v4 = (int32_t)a4 % 32; // 0x134362
    int64_t v5 = a3; // 0x134362
    if (v4 != 0) {
        v5 = (int32_t)a3 >> v4 | (int32_t)((a3 & 0xffffffff) << (int64_t)(33 - v4)) | (int32_t)(v3 < v1) << 32 - v4;
    }
    int64_t result = a2 & 0xffffffff; // 0x13436b
    *(int32_t *)result = (int32_t)v5 + (int32_t)a2;
    return result;
}

// Address range: 0x134373 - 0x13439b
int64_t function_134373(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x134373
    float80_t v1; // 0x134373
    float80_t v2 = __asm_fbstp((float80_t)*(float32_t *)0x15043de - v1); // 0x13438e
    *(float80_t *)(a4 + 0x7f8c97ef) = v2;
    return function_ffffffff9f19ac9d();
}

// Address range: 0x1344a5 - 0x1344a9
int64_t function_1344a5(void) {
    // 0x1344a5
    return __asm_hlt();
}

// Address range: 0x1344b9 - 0x1344ed
int64_t function_1344b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1344b9
    __asm_hlt();
    int64_t v1; // 0x1344b9
    unsigned char v2 = (char)v1;
    *(char *)v1 = v2 / 128 | 2 * v2;
    unknown_ffffffff9dcc44cb();
    char * v3 = (char *)(a2 - 89); // 0x1344d9
    *v3 = *v3 ^ (char)a6;
    int64_t v4; // bp-16, 0x1344b9
    int64_t result = (int64_t)&v4; // 0x1344e7
    *(int64_t *)(a6 & 0xffffffff) = result;
    return result;
}

// Address range: 0x1344f3 - 0x1344f4
int64_t function_1344f3(void) {
    // 0x1344f3
    int64_t result; // 0x1344f3
    return result;
}

// Address range: 0x134527 - 0x13459e
int64_t function_134527(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x134527
    int64_t v1; // 0x134527
    bool v2; // 0x134527
    *(char *)-0x211691f362effeb0 = (char)(v1 - (v2 ? 251 : 250));
    char v3 = __asm_in(-53); // 0x13454d
    unsigned char v4 = *(char *)0x2700b3144c50f9ef; // 0x13454f
    int64_t result = (int64_t)v3 & -256 | a4 & 0xffffff00 | (int64_t)v4; // 0x13454f
    if ((int32_t)(a4 / 256 % 256 || a4) < 0x9fc66901) {
        // 0x134597
        return result;
    }
    // 0x13455a
    *(int32_t *)0x8fc54ce1 = *(int32_t *)0x8fc54ce1 + (int32_t)result;
    int32_t * v5 = (int32_t *)(v1 & -256); // 0x134563
    *v5 = *v5 + (int32_t)a2;
    abort();
    // UNREACHABLE
}

// Address range: 0x134693 - 0x1346a6
int64_t function_134693(int64_t a1, int64_t a2) {
    // 0x134693
    int64_t v1; // 0x134693
    uint64_t v2 = v1;
    uint64_t v3 = v1;
    int32_t v4 = *(int32_t *)(v1 + 86); // 0x134699
    *(char *)a2 = (char)v1 + (char)v2;
    return v4 * (int32_t)(v3 % 256 * (v2 % 256) | v3 & 0xffff0000);
}

// Address range: 0x13470b - 0x134712
int64_t function_13470b(int64_t a1, int64_t a2) {
    // 0x13470b
    int64_t v1; // 0x13470b
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a2;
    return function_4c3d8559();
}

// Address range: 0x29b8c9 - 0x29b8da
int64_t function_29b8c9(int64_t result) {
    // 0x29b8c9
    *(char *)0x5d33163c01e8733a = (char)result;
    *(char *)0x3e2ba122 = *(char *)0x3e2ba122 - 93;
    return result;
}

// Address range: 0x29b8dc - 0x29b913
int64_t function_29b8dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x29b8dc
    int64_t v1; // 0x29b8dc
    int64_t v2 = v1;
    int64_t v3; // 0x29b8dc
    char v4 = *(char *)(a5 + 0x578110 + (int64_t)&v3); // 0x29b8ef
    unknown_349972fd();
    int64_t v5 = unknown_ffffffff91234208(); // 0x29b902
    int32_t v6 = *(int32_t *)(2 * (256 * v1 + v2 & 0xff00 | v2 & 0x7fffffffffff0000 | (int64_t)(v4 | (char)v2))); // 0x29b907
    uint32_t v7 = v6 + (int32_t)a1; // 0x29b907
    *(char *)(8 * a5 + (int64_t)v7) = (char)v5;
    return unknown_e95f13(v7);
}

// Address range: 0x29b93a - 0x29b942
int64_t function_29b93a(void) {
    // 0x29b93a
    __asm_in(-57);
    return function_2122cc4();
}

// Address range: 0x29b966 - 0x29b973
int64_t function_29b966(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29b966
    *(char *)a4 = (char)a4;
    int64_t v1; // 0x29b966
    return v1 & 0xffffffff & v1;
}

// Address range: 0x29b977 - 0x29b997
int64_t function_29b977(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x29b977
    int64_t v2; // 0x29b977
    if (v1 != 0) {
        int32_t * v3 = (int32_t *)(v2 + 0x2901e8b6); // 0x29b977
        uint32_t v4 = *v3; // 0x29b977
        *v3 = v4 >> v1 | v4 << 32 - v1;
    }
    char * v5 = (char *)(a1 - 0x17813768); // 0x29b97d
    *v5 = -1 - *v5;
    uint64_t v6 = a4;
    __asm_in(-59);
    char v7 = *(char *)(8 * unknown_23dbac91() + v2); // 0x29b990
    int64_t v8 = (256 * (int64_t)(v7 + (char)(v6 / 256)) | v6 & -0xff01) - 1; // 0x29b993
    while (v8 != 0) {
        // 0x29b988
        v6 = v8;
        __asm_in(-59);
        v7 = *(char *)(8 * unknown_23dbac91() + v2);
        v8 = (256 * (int64_t)(v7 + (char)(v6 / 256)) | v6 & -0xff01) - 1;
    }
    // 0x29b995
    return function_29b99a(a1, a2, a3, 0, (int64_t)&g6);
}

// Address range: 0x29b998 - 0x29b99a
int64_t function_29b998(void) {
    // 0x29b998
    int64_t result; // 0x29b998
    return result;
}

// Address range: 0x29b99a - 0x29ba2a
int64_t function_29b99a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_ffffffffad6f39a0(); // 0x29b99a
    bool v1; // 0x29b99a
    if (v1) {
        // 0x29b9a1
        return result;
    }
    int32_t * v2 = (int32_t *)result; // 0x29ba04
    int64_t v3; // 0x29b99a
    *v2 = *v2 + (int32_t)v3;
    int64_t result2 = unknown_7a867e21(); // 0x29ba1b
    int32_t * v4 = (int32_t *)(a2 + 20); // 0x29ba20
    uint32_t v5 = *v4; // 0x29ba20
    *v4 = v5 / 0x40000000 | 4 * v5;
    return result2;
}

// Address range: 0x29ba34 - 0x29ba4c
int64_t function_29ba34(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29ba34
    int64_t v1; // 0x29ba34
    int32_t * v2 = (int32_t *)(a2 - 0x4ec50bf1 + 8 * v1); // 0x29ba34
    *v2 = *v2 + (int32_t)v1;
    int32_t v3 = (int32_t)v1 & 0xe5b84db; // 0x29ba3b
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x29ba3b
    return unknown_3246db46() & -0xff01 | 0x4000 * (int64_t)(v3 == 0) | 1024 * (int64_t)(v4 % 2 == 0) | 512;
}

// Address range: 0x29ba5a - 0x29ba5d
int64_t function_29ba5a(int64_t a1) {
    // 0x29ba5a
    int64_t result; // 0x29ba5a
    return result;
}

// Address range: 0x29ba7b - 0x29ba86
int64_t function_29ba7b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29ba7b
    int64_t result; // 0x29ba7b
    uint64_t v1 = result;
    int32_t * v2 = (int32_t *)(a2 - 0x4bcf8549); // 0x29ba7b
    *v2 = *v2 + (int32_t)a2;
    int64_t v3; // 0x29ba7b
    *(char *)a3 = *(char *)&v3 | (char)(v1 / 256);
    float80_t v4; // 0x29ba7b
    *(float80_t *)v1 = __asm_fbstp(v4);
    return result;
}

// Address range: 0x29bab6 - 0x29bab8
int64_t function_29bab6(void) {
    // 0x29bab6
    int64_t v1; // 0x29bab6
    return function_29bb10(v1, v1, v1, v1);
}

// Address range: 0x29bafc - 0x29bb00
int64_t function_29bafc(int64_t a1) {
    // 0x29bafc
    int64_t v1; // 0x29bafc
    return function_29bb2c(a1, v1, v1);
}

// Address range: 0x29bb10 - 0x29bb27
int64_t function_29bb10(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29bb10
    int64_t v1; // 0x29bb10
    char * v2 = (char *)(v1 + 0x3d000002);
    *v2 = *v2 + ((char)a4 | (char)&g5);
    int64_t result; // 0x29bb10
    int64_t v3 = result;
    *(int32_t *)v3 = *(int32_t *)&result + (int32_t)v3;
    char * v4 = (char *)(a1 - 124); // 0x29bb21
    *v4 = *v4 & (char)(result / 256);
    return result;
}

// Address range: 0x29bb2c - 0x29bb2f
int64_t function_29bb2c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29bb2c
    int64_t result; // 0x29bb2c
    return result;
}

// Address range: 0x29bb6d - 0x29bb74
int64_t function_29bb6d(void) {
    // 0x29bb6d
    int64_t result; // 0x29bb6d
    return result;
}

// Address range: 0x29bb7b - 0x29bbe7
int64_t function_29bb7b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x29bb7b
    int64_t v1; // 0x29bb7b
    if (llvm_ctpop_i8(0) % 2 == 0) {
        // 0x29bbe0
        return 0x7f013d00 * v1 + 0xa2c004eb & 0xffffffeb;
    }
    int64_t v2 = ((a5 & (int64_t)&g1) == 0 ? 4 : -4) + a1; // 0x29bb7c
    int64_t v3 = __asm_in_133((int16_t)a3); // 0x29bb8d
    char * v4 = (char *)(v2 - 128); // 0x29bb8e
    *v4 = *v4 + (char)(v1 / 256);
    uint64_t v5 = (int64_t)*(int32_t *)v3 * v3; // 0x29bb92
    char * v6 = (char *)(v2 + 0x2219013d + v1); // 0x29bb95
    unsigned char v7 = *v6; // 0x29bb95
    unsigned char v8 = v7 + (char)(v5 / 0x100000000); // 0x29bb95
    *v6 = v8;
    char * v9 = (char *)((a4 & -0xff01) + 0x257074f1); // 0x29bb9c
    *v9 = 128 * (char)(v8 < v7) | *v9 / 2;
    return v5 & 0xffffffff;
}

// Address range: 0x29bbec - 0x29bbf3
int64_t function_29bbec(int64_t a1) {
    // 0x29bbec
    int64_t result; // 0x29bbec
    return result;
}

// Address range: 0x29bbf3 - 0x29bc3b
int64_t function_29bbf3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29bbf3
    int64_t v1; // 0x29bbf3
    uint64_t v2 = v1;
    *(char *)0x5726bffa = *(char *)0x5726bffa + (char)(v2 / 256);
    int64_t v3 = a3 & 0xffffffff; // 0x29bbfa
    bool v4; // 0x29bbf3
    int64_t v5 = v4 ? -4 : 4; // 0x29bbfb
    int64_t v6 = v5 + a1; // 0x29bbfb
    int64_t v7 = v5 + a2; // 0x29bbfb
    int64_t v8 = unknown_57ab2a02(v6, v7, v3); // 0x29bbfc
    char * v9 = (char *)(v2 + 0xc8b205f); // 0x29bc01
    char v10 = a4; // 0x29bc01
    *v9 = *v9 & v10;
    int32_t * v11 = (int32_t *)(v3 - 54); // 0x29bc0d
    *v11 = *v11 + (int32_t)a3;
    __asm_outsb((int16_t)a3, *(char *)v7);
    int32_t * v12 = (int32_t *)v7; // 0x29bc13
    *v12 = *v12 + (int32_t)v7;
    *(int32_t *)v6 = (int32_t)v8 & -130;
    int64_t v13 = v6 + v5; // 0x29bc17
    int32_t * v14 = (int32_t *)(v7 + 118); // 0x29bc24
    *v14 = *v14 + (int32_t)v13;
    char * v15 = (char *)(v7 + 76); // 0x29bc27
    *v15 = *v15 + v10;
    uint32_t v16 = (int32_t)a4 % 32; // 0x29bc2f
    if (v16 != 0) {
        int32_t * v17 = (int32_t *)((a3 + 166 + (int64_t)((v8 & 256) != 0)) % 256 | a3 & 0xffffff00); // 0x29bc2f
        uint32_t v18 = *v17; // 0x29bc2f
        *v17 = v18 >> 32 - v16 | v18 << v16;
    }
    return function_ffffffffc40a18e9(v13);
}

// Address range: 0x29bc50 - 0x29bc51
int64_t function_29bc50(int64_t a1) {
    // 0x29bc50
    int64_t result; // 0x29bc50
    return result;
}

// Address range: 0x29bc57 - 0x29bc5f
int64_t function_29bc57(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29bc57
    int64_t result; // 0x29bc57
    return result;
}

// Address range: 0x29bc6b - 0x29bc72
int64_t function_29bc6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 + 0x13d004f); // 0x29bc6b
    *v1 = *v1 + (char)a3;
    int64_t result; // 0x29bc6b
    return result;
}

// Address range: 0x5149d8 - 0x5149de
int64_t function_5149d8(void) {
    // 0x5149d8
    int64_t result; // 0x5149d8
    return result;
}

// Address range: 0x5149de - 0x515375
int64_t function_5149de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x5149de
    int64_t v1; // 0x5149de
    int64_t v2 = *(int64_t *)(v1 - 72) - 24; // 0x5149e2
    int64_t v3 = a2; // 0x5149ed
    if (v2 != (int64_t)g2) {
        // 0x5149ef
        v3 = v1 - 64;
        function_508620(v2, v3, a3);
    }
    // 0x5149f8
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t result = v3; // bp-104, 0x514a1c
    int64_t v4 = a4; // bp-120, 0x514a32
    int64_t v5 = __readfsqword(40); // 0x514a4e
    int64_t v6 = function_50e0e0(); // 0x514a61
    int32_t v7 = *(int32_t *)(a6 + 24) & 74; // 0x514a6d
    int64_t v8 = 10; // 0x5149de
    int64_t v9; // 0x5149de
    int64_t v10; // 0x5149de
    char v11; // 0x5149de
    int64_t v12; // 0x5149de
    int64_t v13; // 0x5149de
    int64_t v14; // 0x5149de
    switch (v7) {
        case 64: {
            // 0x5151a8
            v8 = 8;
            goto lab_0x514a8b;
        }
        case 8: {
            int64_t v15 = (int64_t)&result; // 0x514db0
            char v16 = function_50f6f0(&result, &v4); // 0x514db9
            v12 = v15;
            v9 = 16;
            v14 = a3;
            v10 = a5;
            v13 = v15;
            v11 = v16;
            if (v16 != 0) {
                goto lab_0x515350;
            } else {
                goto lab_0x514ab0;
            }
        }
        default: {
            goto lab_0x514a8b;
        }
    }
  lab_0x514bb4:;
    // 0x514bb4
    int64_t v17; // 0x5149de
    int64_t v18 = v17; // 0x514bb9
    int64_t v19; // 0x5149de
    int64_t v20 = v19; // 0x514bb9
    int64_t v21 = 1; // 0x514bb9
    int64_t v22; // 0x5149de
    int64_t v23 = v22; // 0x514bb9
    uint64_t v24; // 0x5149de
    if (v24 >= v17) {
        goto lab_0x514ec8;
    } else {
        goto lab_0x514bc5;
    }
  lab_0x514ec8:;
    // 0x514ec8
    uint64_t v25; // 0x514b4a
    uint64_t v26 = v17 * v25; // 0x514ec8
    int64_t v27 = 0x100000000 * v23 >> 32; // 0x514ece
    v18 = v27 + v26;
    v20 = v19 + 1 & 0xffffffff;
    int64_t v28; // 0x5149de
    v21 = v28 | (int64_t)(v26 > -1 - v27);
    goto lab_0x514bc5;
  lab_0x514bc5:;
    int64_t v29 = v21;
    int64_t v30 = v20;
    int64_t v31 = v18;
    int64_t v32; // 0x5149de
    int64_t v33 = v32; // 0x514bcd
    if (result != 0) {
        int64_t * v34 = (int64_t *)(result + 16); // 0x514bcf
        uint64_t v35 = *v34; // 0x514bcf
        v33 = -1;
        if (v35 < *(int64_t *)(result + 24)) {
            // 0x514bdd
            *v34 = v35 + 4;
            v33 = -1;
        }
    }
    int64_t v36 = v33;
    int64_t v37; // 0x5149de
    int64_t v38 = function_50f7d0(v37); // 0x514bf1
    int64_t v39 = v4; // 0x514bf6
    int64_t v40; // 0x5149de
    int64_t v41 = v40; // 0x514c04
    char v42 = 1; // 0x514c04
    if (v39 != 0) {
        // 0x514c0a
        v41 = v40;
        v42 = 0;
        if ((int32_t)v40 == -1) {
            uint64_t v43 = *(int64_t *)(v39 + 16); // 0x514f00
            int64_t v44; // 0x5149de
            if (v43 >= *(int64_t *)(v39 + 24)) {
                // 0x5152b0
                v44 = *(int64_t *)v39;
            } else {
                // 0x514f0e
                v44 = (int64_t)*(int32_t *)v43;
            }
            int64_t v45 = v44;
            if ((int32_t)v45 == -1) {
                // 0x515230
                v4 = 0;
                v41 = v40;
                v42 = 1;
            } else {
                // 0x514f19
                v41 = 0x100000000 * v45 >> 32;
                v42 = 0;
            }
        }
    }
    int64_t v46 = v41;
    int64_t v47 = v36; // 0x514c19
    int64_t v48 = v46; // 0x514c19
    char v49; // 0x5149de
    char v50 = v49; // 0x514c19
    char v51 = 1; // 0x514c19
    int64_t v52 = v31; // 0x514c19
    int64_t v53 = v30; // 0x514c19
    int64_t v54 = v29; // 0x514c19
    if (v42 == (char)((int32_t)v38 == -1)) {
        // break -> 0x514c24
        goto lab_0x514c24_2;
    }
    int64_t v55 = v36; // 0x514efb
    int64_t v56 = v46; // 0x514efb
    int64_t v57 = function_50f7d0(v37) & 0xffffffff; // 0x514efb
    int64_t v58 = v31; // 0x514efb
    int64_t v59 = v30; // 0x514efb
    int64_t v60 = v29; // 0x514efb
    goto lab_0x514b92;
  lab_0x514b27:;
    // 0x514b27
    int64_t v65; // 0x5149de
    int64_t v66 = v65; // 0x514b2a
    int64_t v67; // 0x5149de
    int64_t v68 = v67; // 0x514b2a
    int64_t v69; // 0x5149de
    int64_t v70 = v69; // 0x514b2a
    char v71; // 0x5149de
    char v72 = v71; // 0x514b2a
    char v73; // 0x5149de
    char v74 = v73; // 0x514b2a
    int32_t v75; // 0x5149de
    int32_t v76 = v75; // 0x514b2a
    int64_t v77; // 0x5149de
    int64_t v78 = v77; // 0x514b2a
    int64_t v79; // 0x5149de
    int64_t v80 = v79; // 0x514b2a
    int64_t v81; // 0x5149de
    int64_t v82 = v81; // 0x514b2a
    int64_t v83; // 0x5149de
    int64_t v84 = v83; // 0x514b2a
    int64_t v85; // 0x5149de
    int64_t v86 = v85; // 0x514b2a
    goto lab_0x514b2f;
  lab_0x514d8e_3:;
    // 0x514d8e
    int64_t v210; // 0x5149de
    int64_t v119 = v210; // 0x514d97
    int64_t v211; // 0x5149de
    int64_t v120 = v211; // 0x514d97
    char v121 = 1; // 0x514d97
    char * v118; // 0x514ac1
    int64_t v122 = (int64_t)*v118; // 0x514d97
    int64_t v138; // 0x5149de
    int64_t v123 = v138; // 0x514d97
    int64_t v212; // 0x5149de
    int64_t v124 = v212; // 0x514d97
    int64_t v213; // 0x5149de
    int64_t v125 = v213; // 0x514d97
    int64_t v214; // 0x5149de
    int64_t v127 = v214; // 0x514d97
    goto lab_0x514b18_3;
  lab_0x514cfb:;
    // 0x514cfb
    int32_t v144; // 0x5149de
    if (*(int32_t *)(v6 + 232) != v144) {
        // 0x514d03
        if (*(int32_t *)(v6 + 236) != v144) {
            // break -> 0x514b18
            goto lab_0x514b18_3;
        }
    }
    // 0x514d0f
    int64_t v136; // 0x5149de
    int32_t v215 = v136;
    v75 = v215;
    int64_t v141; // 0x5149de
    v65 = v141;
    int64_t v140; // 0x5149de
    v67 = v140;
    int64_t v115; // 0x5149de
    v69 = v115;
    v71 = 0;
    char v151; // 0x514ac7
    v73 = v151;
    int64_t v139; // 0x5149de
    v77 = v139;
    v79 = v138;
    v81 = 1;
    v83 = v136;
    int64_t v135; // 0x5149de
    v85 = v135;
    int64_t v147 = 0; // 0x514d1e
    int64_t v148 = 16; // 0x514d1e
    int64_t v149 = 0; // 0x514d1e
    if (v7 != 0 && v215 != 16) {
        goto lab_0x514b27;
    }
    goto lab_0x514d30;
  lab_0x514d30:
    // 0x514d30
    v214 = v149;
    v213 = v148;
    v212 = v147;
    int64_t v216 = result; // 0x514d30
    int64_t v217; // 0x5149de
    int64_t v218; // 0x5149de
    char v219; // 0x5149de
    int64_t v220; // 0x5149de
    int64_t v221; // 0x5149de
    int64_t v222; // 0x5149de
    int64_t v223; // 0x5149de
    if (v216 == 0) {
        // 0x514dec
        v221 = v141;
        v217 = v4;
        goto lab_0x514df1;
    } else {
        int64_t * v224 = (int64_t *)(v216 + 16); // 0x514d3e
        uint64_t v225 = *v224; // 0x514d3e
        int64_t * v226 = (int64_t *)(v216 + 24); // 0x514d42
        uint64_t v227 = *v226; // 0x514d42
        int64_t v228 = v227; // 0x514d46
        int64_t v229 = v225; // 0x514d46
        if (v225 < v227) {
            // 0x514d4c
            v229 = v225 + 4;
            *v224 = v229;
            v228 = *v226;
        }
        uint64_t v230 = v229; // 0x514d5c
        int64_t v231; // 0x5149de
        if (v230 >= v228) {
            // 0x5151f0
            v231 = *(int64_t *)v216;
        } else {
            // 0x514d6a
            v231 = (int64_t)*(int32_t *)v230;
        }
        int64_t v232 = v231;
        int64_t v233 = v4; // 0x514d6f
        if ((int32_t)v232 == -1) {
            // 0x514fc8
            result = 0;
            v221 = -1;
            v217 = v233;
            goto lab_0x514df1;
        } else {
            int64_t v234 = 0x100000000 * v232 >> 32; // 0x514d7d
            v222 = v234;
            v220 = v140;
            if (v233 == 0) {
                goto lab_0x514e02;
            } else {
                // 0x514d83
                v210 = v234;
                v211 = v140;
                v223 = v234;
                v219 = 0;
                v218 = v233;
                if ((int32_t)v140 != -1) {
                    goto lab_0x514d8e_3;
                }
                goto lab_0x514e62;
            }
        }
    }
  lab_0x514df1:;
    int64_t v235 = v217;
    int64_t v236 = v221;
    v210 = v236;
    v211 = v140;
    if (v235 == 0) {
        goto lab_0x514d8e_3;
    }
    // 0x514df6
    v222 = v236;
    v220 = v140;
    v223 = v236;
    v219 = 1;
    v218 = v235;
    if ((int32_t)v140 == -1) {
        goto lab_0x514e62;
    } else {
        goto lab_0x514e02;
    }
  lab_0x514e62:;
    int64_t v237 = v218;
    uint64_t v238 = *(int64_t *)(v237 + 16); // 0x514e62
    int64_t v239; // 0x5149de
    if (v238 >= *(int64_t *)(v237 + 24)) {
        // 0x515200
        v239 = *(int64_t *)v237;
    } else {
        // 0x514e70
        v239 = (int64_t)*(int32_t *)v238;
    }
    int64_t v240 = v239;
    int64_t v241; // 0x5149de
    char v242; // 0x5149de
    if ((int32_t)v240 == -1) {
        // 0x514fe0
        v4 = 0;
        v241 = v140;
        v242 = 1;
    } else {
        // 0x514e7b
        v241 = 0x100000000 * v240 >> 32;
        v242 = 0;
    }
    // 0x514e81
    v210 = v223;
    v211 = v241;
    v222 = v223;
    v220 = v241;
    if (v242 == v219) {
        goto lab_0x514d8e_3;
    }
    goto lab_0x514e02;
  lab_0x514e02:;
    int64_t v243 = function_50f7d0(v115) & 0xffffffff; // 0x514e0e
    int64_t v128 = v222; // 0x514e10
    int64_t v129 = v220; // 0x514e10
    int64_t v130 = (int64_t)*v118; // 0x514e10
    int64_t v131 = v243; // 0x514e10
    int64_t v132 = v212; // 0x514e10
    int64_t v133 = v213; // 0x514e10
    int64_t v134 = v214; // 0x514e10
    if (v212 == 0) {
        // break -> 0x514b18
        goto lab_0x514b18_3;
    }
    goto lab_0x514cd0;
  lab_0x514a8b:;
    int64_t v244 = (int64_t)&result; // 0x514a9b
    char v245 = function_50f6f0(&result, &v4); // 0x514aa4
    v12 = v244;
    v9 = v8;
    if (v245 != 0) {
        // 0x515280
        v75 = v8;
        v65 = a3;
        v67 = a5;
        v69 = v244;
        v71 = v245;
        v73 = 0;
        v77 = (int64_t)*(char *)(v6 + 32);
        v79 = 0;
        v81 = 0;
        v83 = v8;
        v85 = 0;
        goto lab_0x514b27;
    } else {
        goto lab_0x514ab0;
    }
  lab_0x514ab0:;
    int64_t v126 = v9;
    v115 = v12;
    int64_t v246 = function_50f7d0(v115); // 0x514ab4
    int64_t v112 = v246 & 0xffffffff; // 0x514ab9
    int32_t v247 = *(int32_t *)(v6 + 224); // 0x514abb
    v118 = (char *)(v6 + 32);
    unsigned char v190 = *v118; // 0x514ac1
    int64_t v110 = v190; // 0x514ac1
    int32_t v113 = v246; // 0x514ac5
    v151 = v247 == v113;
    int64_t v111; // 0x5149de
    int64_t v109; // 0x5149de
    if (v247 == v113) {
        goto lab_0x514ada;
    } else {
        // 0x514ace
        v109 = v110;
        v111 = v112;
        if (*(int32_t *)(v6 + 228) != v113) {
            goto lab_0x514cc8;
        } else {
            goto lab_0x514ada;
        }
    }
  lab_0x515350:
    // 0x515350
    v66 = v14;
    v68 = v10;
    v70 = v13;
    v72 = v11;
    v74 = 0;
    v76 = 22;
    v78 = (int64_t)*(char *)(v6 + 32);
    v80 = 0;
    v82 = 0;
    v84 = 16;
    v86 = 0;
    goto lab_0x514b2f;
  lab_0x514ada:
    if (v190 != 0) {
        // 0x514cb8
        v109 = v110;
        v111 = v112;
        if (*(int32_t *)(v6 + 76) != v113) {
            goto lab_0x514ae2;
        } else {
            goto lab_0x514cc8;
        }
    } else {
        goto lab_0x514ae2;
    }
  lab_0x514b2f:;
    int64_t v87 = v86;
    int64_t v88 = v82;
    int64_t v89 = v80;
    uint32_t n = v76;
    char v90 = v74;
    v49 = v72;
    v37 = v70;
    int64_t v91 = v68;
    int64_t v92 = v66;
    int64_t v93 = (int64_t)&g4; // bp-72, 0x514b3c
    if ((char)v78 != 0) {
        // 0x5151b8
        function_259ce(&v93, 32);
    }
    // 0x514b4a
    v25 = 0x100000000 * v84 >> 32;
    v24 = 0xffffffffffffffff / v25;
    char v94 = *(char *)(v6 + 328); // 0x514b63
    int64_t v95; // 0x5149de
    int64_t v96; // 0x5149de
    int64_t v97; // 0x5149de
    int64_t v98; // 0x5149de
    int64_t v99; // 0x5149de
    int64_t v100; // 0x5149de
    char v101; // 0x5149de
    int64_t v102; // 0x5149de
    int64_t v103; // 0x5149de
    int64_t v104; // 0x5149de
    int64_t v105; // 0x5149de
    int64_t v106; // 0x5149de
    char * v107; // 0x51505a
    if (v94 != 0) {
        // 0x515030
        v47 = v92;
        v48 = v91;
        v50 = 0;
        v51 = v49;
        v52 = 0;
        v53 = v87;
        v54 = 0;
        if (v49 != 0) {
            goto lab_0x514c24_2;
        } else {
            // 0x51503b
            v107 = (char *)(v6 + 32);
            char v108 = *v107; // 0x51505a
            v105 = v92;
            v103 = v91;
            v102 = v89;
            v95 = 0;
            v98 = v87;
            v99 = 0;
            if (v108 == 0) {
                goto lab_0x51506b;
            } else {
                // 0x515062
                v105 = v92;
                v103 = v91;
                v102 = v89;
                v95 = 0;
                v98 = v87;
                v99 = 0;
                v106 = v92;
                v104 = v91;
                v101 = v108;
                v96 = 0;
                v97 = v87;
                v100 = 0;
                if (*(int32_t *)(v6 + 76) == (int32_t)v89) {
                    goto lab_0x515138;
                } else {
                    goto lab_0x51506b;
                }
            }
        }
    } else {
        // 0x514b76
        v47 = v92;
        v48 = v91;
        v50 = 0;
        v51 = v49;
        v52 = 0;
        v53 = v87;
        v54 = 0;
        if (v49 == 0) {
            int64_t v62 = (int64_t)((0x1000000 * n + 0x30000000) / 0x1000000);
            v55 = v92;
            v56 = v91;
            v57 = v89;
            v58 = 0;
            v59 = v87;
            v60 = 0;
            while (true) {
              lab_0x514b92:
                // 0x514b92
                v28 = v60;
                v19 = v59;
                v17 = v58;
                int64_t v61 = v57;
                v40 = v56;
                v32 = v55;
                if (n < 11) {
                    // 0x514b9e
                    v47 = v32;
                    v48 = v40;
                    v50 = v49;
                    v51 = 0;
                    v52 = v17;
                    v53 = v19;
                    v54 = v28;
                    if (v61 < v62 != (int32_t)v61 > 47) {
                        // break -> 0x514c24
                        break;
                    }
                    // 0x514bb1
                    v22 = v61 + 0xffffffd0;
                    goto lab_0x514bb4;
                } else {
                    int64_t v63 = v61 + 0xffffffd0; // 0x514e90
                    v22 = v63;
                    if ((int32_t)v63 < 10) {
                        goto lab_0x514bb4;
                    } else {
                        int32_t v64 = v61;
                        if (v64 < 103) {
                            // 0x515008
                            v22 = v61 + 0xffffffa9;
                            goto lab_0x514bb4;
                        } else {
                            // 0x514ea8
                            v47 = v32;
                            v48 = v40;
                            v50 = v49;
                            v51 = 0;
                            v52 = v17;
                            v53 = v19;
                            v54 = v28;
                            if (v64 >= 71) {
                                // break -> 0x514c24
                                break;
                            }
                            // 0x514eb4
                            v18 = v17;
                            v20 = v19;
                            v21 = 1;
                            v23 = v61 + 0xffffffc9;
                            if (v24 < v17) {
                                goto lab_0x514bc5;
                            } else {
                                goto lab_0x514ec8;
                            }
                        }
                    }
                }
            }
        }
        goto lab_0x514c24_2;
    }
  lab_0x514ae2:
    // 0x514ae2
    v109 = v110;
    v111 = v112;
    if (*(int32_t *)(v6 + 72) == v113) {
        goto lab_0x514cc8;
    } else {
        int64_t v114 = function_50f6f0((int64_t *)function_50d7a0(v115), &v4); // 0x514afa
        char v116 = v114; // 0x514aff
        if (v116 == 0) {
            int64_t v117 = function_50f7d0(v115); // 0x51526c
            v109 = (int64_t)*v118;
            v111 = v117 & 0xffffffff;
            goto lab_0x514cc8;
        } else {
            // 0x514b0b
            v119 = a3;
            v120 = a5;
            v121 = v116;
            v122 = (int64_t)*v118;
            v123 = v112;
            v124 = 0;
            v125 = v126;
            v127 = 0;
            goto lab_0x514b18_3;
        }
    }
  lab_0x514cc8:
    // 0x514cc8
    v128 = a3;
    v129 = a5;
    v130 = v109;
    v131 = v111;
    v132 = 0;
    v133 = v126;
    v134 = 0;
    while (true) {
      lab_0x514cd0:
        // 0x514cd0
        v135 = v134;
        v136 = v133;
        int64_t v137 = v132;
        v138 = v131;
        v139 = v130;
        v140 = v129;
        v141 = v128;
        int32_t v142; // 0x5149de
        if (v139 == 0) {
            // 0x514cd0
            v142 = v138;
        } else {
            int32_t v143 = v138;
            v119 = v141;
            v120 = v140;
            v121 = 0;
            v122 = v139;
            v123 = v138;
            v124 = v137;
            v125 = v136;
            v127 = v135;
            v142 = v143;
            if (*(int32_t *)(v6 + 76) == v143) {
                // break -> 0x514b18
                break;
            }
        }
        // 0x514cdd
        v144 = v142;
        v119 = v141;
        v120 = v140;
        v121 = 0;
        v122 = v139;
        v123 = v138;
        v124 = v137;
        v125 = v136;
        v127 = v135;
        if (*(int32_t *)(v6 + 72) == v144) {
            // break -> 0x514b18
            break;
        }
        // 0x514ce6
        if (*(int32_t *)(v6 + 240) == v144) {
            int32_t v145 = v136; // 0x514e24
            unsigned char v146 = (char)v137 ^ 1 | (char)(v145 == 10); // 0x514e2b
            if (v146 == 0) {
                goto lab_0x514cfb;
            } else {
                // 0x514e34
                v147 = 1;
                v148 = 8;
                v149 = 0;
                if (v7 != 0 && v145 != 8) {
                    // 0x514ff8
                    v147 = v146;
                    v148 = v136;
                    v149 = v135 + 1 & 0xffffffff;
                }
                goto lab_0x514d30;
            }
        } else {
            // 0x514cf2
            v119 = v141;
            v120 = v140;
            v121 = 0;
            v122 = v139;
            v123 = v138;
            v124 = 0;
            v125 = v136;
            v127 = v135;
            if (v137 == 0) {
                // break -> 0x514b18
                break;
            }
            goto lab_0x514cfb;
        }
    }
    goto lab_0x514b18_3;
  lab_0x514b18_3:;
    int32_t v150 = v125;
    v75 = v150;
    v65 = v119;
    v67 = v120;
    v69 = v115;
    v71 = v121;
    v73 = v151;
    v77 = v122;
    v79 = v123;
    v81 = v124;
    v83 = v125;
    v85 = v127;
    v66 = v119;
    v68 = v120;
    v70 = v115;
    v72 = v121;
    v74 = v151;
    v76 = 22;
    v78 = v122;
    v80 = v123;
    v82 = v124;
    v84 = v125;
    v86 = v127;
    if (v150 == 16) {
        goto lab_0x514b2f;
    } else {
        goto lab_0x514b27;
    }
  lab_0x514c24_2:;
    int64_t v152 = v54;
    int64_t v153 = v53;
    int64_t v154 = v52;
    char v155 = v50;
    int64_t v156 = v47;
    int64_t v157; // 0x5149de
    int64_t v158; // 0x5149de
    if (g3 != 0) {
        // 0x514f30
        function_451f2(&v93, 0x100000000000000 * v153 >> 56);
        int64_t v159 = *(int64_t *)(v6 + 16); // 0x514f48
        if ((char)function_569070(v159, *(int64_t *)(v6 + 24), &v93) == 0) {
            // 0x514f58
            *(int32_t *)a7 = 4;
        }
        int64_t v160 = v93; // 0x514f66
        v158 = v160;
        if ((int32_t)v153 != 0) {
            goto lab_0x514f81;
        } else {
            // 0x514f70
            v157 = v160;
            v158 = v160;
            if ((char)v88 != 1 == g3 == 0) {
                goto lab_0x514c4a;
            } else {
                goto lab_0x514f81;
            }
        }
    } else {
        int64_t v161 = v93; // 0x514c24
        v158 = v161;
        if ((char)v88 == 1) {
            goto lab_0x514f81;
        } else {
            // 0x514c41
            v157 = v161;
            v158 = v161;
            if ((int32_t)v153 != 0) {
                goto lab_0x514f81;
            } else {
                goto lab_0x514c4a;
            }
        }
    }
  lab_0x51506b:;
    int64_t v162 = v99;
    int64_t v163 = v98;
    int64_t v164 = v95;
    int64_t v165 = v103;
    int64_t v166 = v105;
    int32_t c = v102; // 0x51506b
    v47 = v166;
    v48 = v165;
    v50 = v49;
    v51 = 0;
    v52 = v164;
    v53 = v163;
    v54 = v162;
    int64_t v167; // 0x5149de
    int64_t v168; // 0x5149de
    int64_t v169; // 0x5149de
    int64_t v170; // 0x5149de
    int64_t v171; // 0x5149de
    if (*(int32_t *)(v6 + 72) == c) {
        goto lab_0x514c24_2;
    } else {
        int64_t wstr = v6 + 240; // 0x51503b
        int32_t * v172 = wmemchr((int32_t *)wstr, c, n); // 0x51507f
        v47 = v166;
        v48 = v165;
        v50 = v49;
        v51 = 0;
        v52 = v164;
        v53 = v163;
        v54 = v162;
        if (v172 == NULL) {
            goto lab_0x514c24_2;
        } else {
            if (v24 < v164) {
                // 0x515160
                v171 = v166;
                v170 = v165;
                v167 = v164;
                v168 = v163;
                v169 = v94;
            } else {
                int64_t v173 = (int64_t)v172 - wstr >> 2; // 0x51508c
                int32_t v174 = v173; // 0x515093
                int32_t v175 = v174 - 15; // 0x515093
                uint64_t v176 = v164 * v25; // 0x5150a4
                int64_t v177 = 0x100000000 * v173;
                int64_t v178 = (v175 < 0 == (14 - v174 & v174) < 0 == (v175 != 0) ? v177 - 0x600000000 : v177) >> 32; // 0x5150aa
                v171 = v166;
                v170 = v165;
                v167 = v178 + v176;
                v168 = v163 + 1 & 0xffffffff;
                v169 = v162 & 0xffffffff | (int64_t)(v176 > -1 - v178);
            }
            goto lab_0x5150c2;
        }
    }
  lab_0x514f81:;
    int64_t v179 = v158;
    v157 = v179;
    int64_t v180; // 0x5149de
    if (v155 != 0) {
        goto lab_0x514c4a;
    } else {
        if ((char)v152 == 0) {
            // 0x515248
            *(int64_t *)a8 = v90 != 0 ? -v154 : v154;
            v180 = v179;
        } else {
            // 0x514f95
            *(int64_t *)a8 = -1;
            *(int32_t *)a7 = 4;
            v180 = v179;
        }
        goto lab_0x514c61;
    }
  lab_0x515138:;
    int64_t v181 = v100;
    int64_t v182 = v97;
    int64_t v183 = v96;
    int64_t v184 = v104;
    int64_t v185 = v106;
    v47 = v185;
    v48 = v184;
    v50 = v101;
    v51 = 0;
    v52 = v183;
    v53 = v182;
    v54 = v181;
    if ((int32_t)v182 == 0) {
        goto lab_0x514c24_2;
    } else {
        // 0x515141
        function_451f2(&v93, 0x100000000000000 * v182 >> 56);
        v171 = v185;
        v170 = v184;
        v167 = v183;
        v168 = 0;
        v169 = v181;
        goto lab_0x5150c2;
    }
  lab_0x514c4a:
    // 0x514c4a
    *(int64_t *)a8 = 0;
    *(int32_t *)a7 = 4;
    v180 = v157;
    goto lab_0x514c61;
  lab_0x514c61:
    // 0x514c61
    if (v51 != 0) {
        int32_t * v186 = (int32_t *)a7; // 0x514c6d
        *v186 = *v186 | 2;
    }
    int64_t v187 = v180 - 24; // 0x514c70
    int64_t v188 = v37; // 0x514c85
    if (v187 != (int64_t)g2) {
        // 0x5152d0
        int64_t v189; // bp-73, 0x5149de
        function_508620(v187, (int64_t)&v189, v156);
        v188 = result;
    }
    // 0x514c8b
    if (v5 == __readfsqword(40)) {
        // 0x514ca2
        return result;
    }
    // 0x51534b
    __stack_chk_fail();
    v14 = v156;
    v10 = v48;
    v13 = v188;
    v11 = v155;
    goto lab_0x515350;
  lab_0x5150c2:;
    int64_t v191 = v169;
    int64_t v192 = v168;
    int64_t v193 = v167;
    int64_t v194 = v170;
    int64_t v195 = v171; // 0x5150ca
    if (result != 0) {
        int64_t * v196 = (int64_t *)(result + 16); // 0x5150cc
        uint64_t v197 = *v196; // 0x5150cc
        v195 = -1;
        if (v197 < *(int64_t *)(result + 24)) {
            // 0x5150da
            *v196 = v197 + 4;
            v195 = -1;
        }
    }
    int64_t v198 = v195;
    int64_t v199 = function_50f7d0(v37); // 0x5150ee
    int64_t v200 = v4; // 0x5150f3
    int64_t v201 = v194; // 0x515101
    char v202 = v94; // 0x515101
    if (v200 != 0) {
        // 0x515107
        v201 = v194;
        v202 = 0;
        if ((int32_t)v194 == -1) {
            uint64_t v203 = *(int64_t *)(v200 + 16); // 0x515170
            int64_t v204; // 0x5149de
            if (v203 >= *(int64_t *)(v200 + 24)) {
                // 0x5152a0
                v204 = *(int64_t *)v200;
            } else {
                // 0x51517e
                v204 = (int64_t)*(int32_t *)v203;
            }
            int64_t v205 = v204;
            if ((int32_t)v205 == -1) {
                // 0x515218
                v4 = 0;
                v201 = v194;
                v202 = v94;
            } else {
                // 0x515189
                v201 = 0x100000000 * v205 >> 32;
                v202 = 0;
            }
        }
    }
    int64_t v206 = v201;
    v47 = v198;
    v48 = v206;
    v50 = v49;
    v51 = v94;
    v52 = v193;
    v53 = v192;
    v54 = v191;
    if (v202 == (char)((int32_t)v199 == -1)) {
        goto lab_0x514c24_2;
    } else {
        int64_t v207 = function_50f7d0(v37); // 0x51511c
        int64_t v208 = v207 & 0xffffffff; // 0x515121
        char v209 = *v107; // 0x515123
        v105 = v198;
        v103 = v206;
        v102 = v208;
        v95 = v193;
        v98 = v192;
        v99 = v191;
        if (v209 == 0) {
            goto lab_0x51506b;
        } else {
            // 0x51512f
            v105 = v198;
            v103 = v206;
            v102 = v208;
            v95 = v193;
            v98 = v192;
            v99 = v191;
            v106 = v198;
            v104 = v206;
            v101 = v209;
            v96 = v193;
            v97 = v192;
            v100 = v191;
            if (*(int32_t *)(v6 + 76) != (int32_t)v207) {
                goto lab_0x51506b;
            } else {
                goto lab_0x515138;
            }
        }
    }
}

// Address range: 0x515377 - 0x515378
int64_t function_515377(void) {
    // 0x515377
    int64_t result; // 0x515377
    return result;
}

// Address range: 0x55ee32 - 0x55ee3c
int64_t function_55ee32(void) {
    // 0x55ee32
    return function_55ed66();
}

// Address range: 0x55ee3c - 0x55f7fc
int64_t function_55ee3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x55ee3c
    __stack_chk_fail();
    int64_t v1; // 0x55ee3c
    int64_t v2 = *(int64_t *)(v1 - 72) - 24; // 0x55ee48
    int64_t v3 = a2; // 0x55ee53
    if (v2 != (int64_t)g2) {
        // 0x55ee55
        v3 = v1 - 64;
        function_552550(v2, v3, a3);
    }
    // 0x55ee5e
    _Unwind_Resume((struct _Unwind_Exception *)&g6);
    int64_t result = v3; // bp-104, 0x55ee8c
    int64_t v4 = a4; // bp-120, 0x55eea2
    int64_t v5 = __readfsqword(40); // 0x55eebe
    int64_t v6 = function_558300(); // 0x55eed1
    int32_t v7 = *(int32_t *)(a6 + 24) & 74; // 0x55eedd
    int64_t v8 = 10; // 0x55ee3c
    int64_t v9; // 0x55ee3c
    int64_t v10; // 0x55ee3c
    int64_t v11; // 0x55ee3c
    int64_t v12; // 0x55ee3c
    int64_t v13; // 0x55ee3c
    int64_t v14; // 0x55ee3c
    int64_t v15; // 0x55ee3c
    char v16; // 0x55ee3c
    char v17; // 0x55ee3c
    int32_t v18; // 0x55ee3c
    int64_t v19; // 0x55ee3c
    int64_t v20; // 0x55ee3c
    int64_t v21; // 0x55ee3c
    switch (v7) {
        case 64: {
            // 0x55f620
            v8 = 8;
            goto lab_0x55eefb;
        }
        case 8: {
            int64_t v22 = (int64_t)&result; // 0x55f230
            char v23 = function_524600(&result, &v4); // 0x55f239
            v19 = v22;
            v10 = 16;
            if (v23 == 0) {
                goto lab_0x55ef20;
            } else {
                // 0x55f245
                v21 = a3;
                v15 = a5;
                v20 = v22;
                v17 = v23;
                v16 = 0;
                v18 = 22;
                v14 = (int64_t)*(char *)(v6 + 32);
                v13 = 0;
                v9 = 0;
                v11 = 16;
                v12 = 0;
                goto lab_0x55ef97;
            }
        }
        default: {
            goto lab_0x55eefb;
        }
    }
  lab_0x55f0b1_2:;
    // 0x55f0b1
    int64_t v24; // 0x55ee3c
    int64_t v25 = v24; // 0x55f0be
    int64_t v26; // 0x55ee3c
    int64_t v27 = v26; // 0x55f0be
    char v28; // 0x55ee3c
    char v29 = v28; // 0x55f0be
    int32_t v30; // 0x55ee3c
    int32_t v31 = v30; // 0x55f0be
    int64_t v32; // 0x55ee3c
    int64_t v33 = v32; // 0x55f0be
    int64_t v34; // 0x55ee3c
    int64_t v35 = v34; // 0x55f0be
    int64_t v36; // 0x55ee3c
    int64_t v37 = v36; // 0x55f0be
    int64_t v38 = v24; // 0x55f0be
    int64_t v39 = v26; // 0x55f0be
    char v40 = v28; // 0x55f0be
    int32_t v41 = v30; // 0x55f0be
    int64_t v42 = v32; // 0x55f0be
    int64_t v43 = v34; // 0x55f0be
    int64_t v44 = v36; // 0x55f0be
    if (g3 != 0) {
        goto lab_0x55f338;
    } else {
        goto lab_0x55f0c4;
    }
  lab_0x55f020:;
    // 0x55f020
    int64_t v45; // 0x55ee3c
    int64_t v46 = v45; // 0x55f023
    int64_t v47; // 0x55ee3c
    int64_t v48 = v47; // 0x55f023
    int64_t v49; // 0x55ee3c
    int64_t v50 = v49; // 0x55f023
    int64_t v51; // 0x55ee3c
    int64_t v52 = v51; // 0x55f023
    int64_t v53; // 0x55ee3c
    int64_t v54 = v53; // 0x55f023
    int64_t v55; // 0x55ee3c
    int64_t v56 = v55; // 0x55f023
    if ((int32_t)v45 == -1) {
        // break -> 0x55f320
        goto lab_0x55f320_2;
    }
    goto lab_0x55f029;
  lab_0x55f029:;
    int64_t v57 = v51; // 0x55f02e
    int64_t v58 = v53; // 0x55f02e
    int64_t v59 = 1; // 0x55f02e
    uint64_t v60; // 0x55efb2
    uint64_t v61; // 0x55ee3c
    if (v61 >= v51) {
        uint64_t v62 = v51 * v60; // 0x55f034
        int64_t v63 = 0x100000000 * v46 >> 32; // 0x55f03a
        v57 = v63 + v62;
        v58 = v53 + 1 & 0xffffffff;
        v59 = v55 | (int64_t)(v62 > -1 - v63);
    }
    int64_t v64 = v59;
    int64_t v65 = v58;
    int64_t v66 = v57;
    int64_t v67 = v47; // 0x55f05a
    if (result != 0) {
        int64_t * v68 = (int64_t *)(result + 16); // 0x55f05c
        uint64_t v69 = *v68; // 0x55f05c
        v67 = -1;
        if (v69 < *(int64_t *)(result + 24)) {
            // 0x55f06a
            *v68 = v69 + 1;
            v67 = -1;
        }
    }
    int64_t v70 = v67;
    int64_t v71; // 0x55ee3c
    int64_t v72 = function_5246d0(v71); // 0x55f07e
    int64_t v73 = v4; // 0x55f083
    char v74 = 1; // 0x55f091
    int64_t v75; // 0x55ee3c
    if (v73 == 0) {
        goto lab_0x55f0a4;
    } else {
        // 0x55f097
        v74 = 0;
        if ((int32_t)v49 == -1) {
            uint64_t v76 = *(int64_t *)(v73 + 16); // 0x55f3c8
            if (v76 >= *(int64_t *)(v73 + 24)) {
                int64_t v77 = *(int64_t *)v73; // 0x55f6f0
                v75 = v77;
                if ((int32_t)v77 != -1) {
                    goto lab_0x55f3d9;
                } else {
                    // 0x55f6ff
                    v4 = 0;
                    v74 = 1;
                    goto lab_0x55f0a4;
                }
            } else {
                // 0x55f3d6
                v75 = (int64_t)*(char *)v76;
                goto lab_0x55f3d9;
            }
        } else {
            goto lab_0x55f0a4;
        }
    }
  lab_0x55f0a4:
    // 0x55f0a4
    v24 = v70;
    v26 = v49;
    char v78; // 0x55ee3c
    v28 = v78;
    v30 = 1;
    v32 = v66;
    v34 = v65;
    v36 = v64;
    int64_t v79 = v49; // 0x55f0a6
    if (v74 == (char)((int32_t)v72 == -1)) {
        goto lab_0x55f0b1_2;
    }
    goto lab_0x55f3e7;
  lab_0x55f3e7:;
    int64_t v80 = v70; // 0x55f3f2
    int64_t v81 = v79; // 0x55f3f2
    int64_t v82 = function_5246d0(v71) & 0xffffffff; // 0x55f3f2
    int64_t v83 = v66; // 0x55f3f2
    int64_t v84 = v65; // 0x55f3f2
    int64_t v85 = v64; // 0x55f3f2
    goto lab_0x55effb;
  lab_0x55f3d9:;
    int64_t v91 = 0x100000000 * v75 >> 32; // 0x55f3d9
    v24 = v70;
    v26 = v91;
    v28 = v78;
    v30 = 1;
    v32 = v66;
    v34 = v65;
    v36 = v64;
    v79 = v91;
    if ((int32_t)v72 != -1) {
        goto lab_0x55f0b1_2;
    }
    goto lab_0x55f3e7;
  lab_0x55ef8f:;
    // 0x55ef8f
    int64_t v92; // 0x55ee3c
    v21 = v92;
    int64_t v93; // 0x55ee3c
    v15 = v93;
    int64_t v94; // 0x55ee3c
    v20 = v94;
    char v95; // 0x55ee3c
    v17 = v95;
    char v96; // 0x55ee3c
    v16 = v96;
    int32_t v97; // 0x55ee3c
    v18 = v97;
    int64_t v98; // 0x55ee3c
    v14 = v98;
    int64_t v99; // 0x55ee3c
    v13 = v99;
    int64_t v100; // 0x55ee3c
    v9 = v100;
    int64_t v101; // 0x55ee3c
    v11 = v101;
    int64_t v102; // 0x55ee3c
    v12 = v102;
    goto lab_0x55ef97;
  lab_0x55f20d_3:;
    // 0x55f20d
    int64_t v257; // 0x55ee3c
    int64_t v136 = v257; // 0x55f216
    int64_t v258; // 0x55ee3c
    int64_t v137 = v258; // 0x55f216
    char v138 = 1; // 0x55f216
    char * v135; // 0x55ef2f
    int64_t v139 = (int64_t)*v135; // 0x55f216
    int64_t v155; // 0x55ee3c
    int64_t v140 = v155; // 0x55f216
    int64_t v259; // 0x55ee3c
    int64_t v141 = v259; // 0x55f216
    int64_t v260; // 0x55ee3c
    int64_t v142 = v260; // 0x55f216
    int64_t v261; // 0x55ee3c
    int64_t v144 = v261; // 0x55f216
    goto lab_0x55ef80_3;
  lab_0x55f188:;
    // 0x55f188
    char v161; // 0x55ee3c
    int64_t v153; // 0x55ee3c
    int64_t v152; // 0x55ee3c
    int64_t v156; // 0x55ee3c
    int64_t v157; // 0x55ee3c
    int64_t v158; // 0x55ee3c
    if (*(char *)(v6 + 112) != v161) {
        // 0x55f18d
        v136 = v158;
        v137 = v157;
        v138 = 0;
        v139 = v156;
        v140 = v155;
        v141 = 1;
        v142 = v153;
        v144 = v152;
        if (*(char *)(v6 + 113) != v161) {
            // break -> 0x55ef80
            goto lab_0x55ef80_3;
        }
    }
    int32_t v262 = v153;
    v97 = v262;
    v92 = v158;
    v93 = v157;
    int64_t v132; // 0x55ee3c
    v94 = v132;
    v95 = 0;
    char v168; // 0x55ef35
    v96 = v168;
    v98 = v156;
    v99 = v155;
    v100 = 1;
    v101 = v153;
    v102 = v152;
    int64_t v164 = 0; // 0x55f1a5
    int64_t v165 = 16; // 0x55f1a5
    int64_t v166 = 0; // 0x55f1a5
    if (v7 != 0 && v262 != 16) {
        goto lab_0x55ef8f;
    }
    goto lab_0x55f1b7;
  lab_0x55f1b7:
    // 0x55f1b7
    v261 = v166;
    v260 = v165;
    v259 = v164;
    int64_t v263 = v158; // 0x55f1bf
    int64_t v264; // 0x55ee3c
    if (result == 0) {
        goto lab_0x55f41c;
    } else {
        int64_t * v265 = (int64_t *)(result + 16); // 0x55f1c5
        uint64_t v266 = *v265; // 0x55f1c5
        int64_t * v267 = (int64_t *)(result + 24); // 0x55f1c9
        uint64_t v268 = *v267; // 0x55f1c9
        int64_t v269 = v268; // 0x55f1cd
        int64_t v270 = v266; // 0x55f1cd
        if (v266 < v268) {
            // 0x55f1d3
            v270 = v266 + 1;
            *v265 = v270;
            v269 = *v267;
        }
        uint64_t v271 = v270; // 0x55f1e3
        if (v271 >= v269) {
            int64_t v272 = *(int64_t *)result; // 0x55f5d0
            v264 = v272;
            if ((int32_t)v272 != -1) {
                goto lab_0x55f1f4;
            } else {
                // 0x55f5df
                result = 0;
                v263 = -1;
                goto lab_0x55f41c;
            }
        } else {
            // 0x55f1f1
            v264 = (int64_t)*(char *)v271;
            goto lab_0x55f1f4;
        }
    }
  lab_0x55f41c:;
    int64_t v273 = v263;
    int64_t v274 = v4; // 0x55f41c
    v257 = v273;
    v258 = v157;
    if (v274 == 0) {
        goto lab_0x55f20d_3;
    }
    int64_t v275 = v273; // 0x55f434
    char v276 = 1; // 0x55f434
    int64_t v277 = v274; // 0x55f434
    int64_t v278 = v273; // 0x55f434
    int64_t v279 = v157; // 0x55f434
    if ((int32_t)v157 != -1) {
        goto lab_0x55f291;
    } else {
        goto lab_0x55f272;
    }
  lab_0x55f291:;
    int64_t v280 = function_5246d0(v132) & 0xffffffff; // 0x55f29d
    int64_t v281 = (int64_t)*v135;
    v136 = v278;
    v137 = v279;
    v138 = 0;
    v139 = v281;
    v140 = v280;
    v141 = 0;
    v142 = v260;
    v144 = v261;
    int64_t v145 = v278; // 0x55f29f
    int64_t v146 = v279; // 0x55f29f
    int64_t v147 = v281; // 0x55f29f
    int64_t v148 = v280; // 0x55f29f
    int64_t v149 = v259; // 0x55f29f
    int64_t v150 = v260; // 0x55f29f
    int64_t v151 = v261; // 0x55f29f
    if (v259 == 0) {
        // break -> 0x55ef80
        goto lab_0x55ef80_3;
    }
    goto lab_0x55f160;
  lab_0x55f272:;
    int64_t v282 = v277;
    uint64_t v283 = *(int64_t *)(v282 + 16); // 0x55f272
    int64_t v284; // 0x55ee3c
    int64_t v285; // 0x55ee3c
    char v286; // 0x55ee3c
    if (v283 >= *(int64_t *)(v282 + 24)) {
        int64_t v287 = *(int64_t *)v282; // 0x55f5f0
        v284 = v287;
        if ((int32_t)v287 != -1) {
            goto lab_0x55f283;
        } else {
            // 0x55f608
            v4 = 0;
            v285 = v157;
            v286 = 1;
            goto lab_0x55f289;
        }
    } else {
        // 0x55f280
        v284 = (int64_t)*(char *)v283;
        goto lab_0x55f283;
    }
  lab_0x55f1f4:;
    int64_t v288 = v4; // 0x55f1f4
    int64_t v289 = 0x100000000 * v264 >> 32; // 0x55f1f9
    v278 = v289;
    v279 = v157;
    if (v288 == 0) {
        goto lab_0x55f291;
    } else {
        // 0x55f206
        v275 = v289;
        v276 = 0;
        v277 = v288;
        if ((int32_t)v157 != -1) {
            goto lab_0x55f20d_3;
        }
        goto lab_0x55f272;
    }
  lab_0x55f283:
    // 0x55f283
    v285 = 0x100000000 * v284 >> 32;
    v286 = 0;
    goto lab_0x55f289;
  lab_0x55f289:
    // 0x55f289
    v257 = v275;
    v258 = v285;
    v278 = v275;
    v279 = v285;
    if (v286 == v276) {
        goto lab_0x55f20d_3;
    }
    goto lab_0x55f291;
  lab_0x55eefb:;
    int64_t v290 = (int64_t)&result; // 0x55ef0b
    char v291 = function_524600(&result, &v4); // 0x55ef14
    v19 = v290;
    v10 = v8;
    int64_t v230 = a3; // 0x55ef1a
    int64_t v231 = a5; // 0x55ef1a
    int64_t v232 = v290; // 0x55ef1a
    char v233 = v291; // 0x55ef1a
    int64_t v234 = v8; // 0x55ef1a
    if (v291 != 0) {
        goto lab_0x55f7e6;
    } else {
        goto lab_0x55ef20;
    }
  lab_0x55f7e6:
    // 0x55f7e6
    v97 = v234;
    v92 = v230;
    v93 = v231;
    v94 = v232;
    v95 = v233;
    v96 = 0;
    v98 = (int64_t)*(char *)(v6 + 32);
    v99 = 0;
    v100 = 0;
    v101 = v234;
    v102 = 0;
    goto lab_0x55ef8f;
  lab_0x55ef20:;
    int64_t v143 = v10;
    v132 = v19;
    int64_t v235 = function_5246d0(v132); // 0x55ef24
    char v236 = *(char *)(v6 + 110); // 0x55ef29
    int64_t v129 = v235 & 0xffffffff; // 0x55ef2d
    v135 = (char *)(v6 + 32);
    unsigned char v237 = *v135; // 0x55ef2f
    int64_t v127 = v237; // 0x55ef2f
    char v130 = v235; // 0x55ef33
    v168 = v236 == v130;
    int64_t v128; // 0x55ee3c
    int64_t v126; // 0x55ee3c
    if (v236 == v130) {
        goto lab_0x55ef45;
    } else {
        // 0x55ef3c
        v126 = v127;
        v128 = v129;
        if (*(char *)(v6 + 111) != v130) {
            goto lab_0x55f158;
        } else {
            goto lab_0x55ef45;
        }
    }
  lab_0x55ef45:
    if (v237 != 0) {
        // 0x55f148
        v126 = v127;
        v128 = v129;
        if (*(char *)(v6 + 73) != v130) {
            goto lab_0x55ef4d;
        } else {
            goto lab_0x55f158;
        }
    } else {
        goto lab_0x55ef4d;
    }
  lab_0x55ef97:;
    int64_t v103 = v12;
    int64_t v104 = v9;
    int64_t v105 = v13;
    uint32_t n = v18;
    char v106 = v16;
    v78 = v17;
    v71 = v20;
    int64_t v107 = v15;
    int64_t v108 = v21;
    int64_t v109 = (int64_t)&g4; // bp-72, 0x55efa4
    if ((char)v14 != 0) {
        // 0x55f630
        function_259ce(&v109, 32);
    }
    // 0x55efb2
    v60 = 0x100000000 * v11 >> 32;
    v61 = 0xffffffffffffffff / v60;
    char v110 = *(char *)(v6 + 136); // 0x55efcb
    int64_t v111; // 0x55ee3c
    int64_t v112; // 0x55ee3c
    int64_t v113; // 0x55ee3c
    int64_t v114; // 0x55ee3c
    int64_t v115; // 0x55ee3c
    int64_t v116; // 0x55ee3c
    char v117; // 0x55ee3c
    int64_t v118; // 0x55ee3c
    int64_t v119; // 0x55ee3c
    int64_t v120; // 0x55ee3c
    int64_t v121; // 0x55ee3c
    int64_t v122; // 0x55ee3c
    int32_t v123; // 0x55efd4
    char * v124; // 0x55f497
    if (v110 != 0) {
        if (v78 != 0) {
            // 0x55f79e
            v24 = v108;
            v26 = v107;
            v28 = 0;
            v30 = v78;
            v32 = 0;
            v34 = v103;
            v36 = 0;
            goto lab_0x55f0b1_2;
        } else {
            // 0x55f47b
            v123 = v110;
            v124 = (char *)(v6 + 32);
            char v125 = *v124; // 0x55f497
            v121 = v108;
            v119 = v107;
            v118 = v105;
            v111 = 0;
            v113 = v103;
            v115 = 0;
            if (v125 == 0) {
                goto lab_0x55f4a8;
            } else {
                // 0x55f49f
                v121 = v108;
                v119 = v107;
                v118 = v105;
                v111 = 0;
                v113 = v103;
                v115 = 0;
                v122 = v108;
                v120 = v107;
                v117 = v125;
                v112 = 0;
                v114 = v103;
                v116 = 0;
                if (*(char *)(v6 + 73) == (char)v105) {
                    goto lab_0x55f57a;
                } else {
                    goto lab_0x55f4a8;
                }
            }
        }
    } else {
        if (v78 != 0) {
            // 0x55f788
            v24 = v108;
            v26 = v107;
            v28 = 0;
            v30 = v78;
            v32 = 0;
            v34 = v103;
            v36 = 0;
            goto lab_0x55f0b1_2;
        } else {
            // 0x55efec
            v80 = v108;
            v81 = v107;
            v82 = v105;
            v83 = 0;
            v84 = v103;
            v85 = 0;
            while (true) {
              lab_0x55effb:
                // 0x55effb
                v55 = v85;
                v53 = v84;
                v51 = v83;
                v49 = v81;
                v47 = v80;
                int64_t v86 = 0x100000000000000 * v82 >> 56; // 0x55f001
                char v87 = v82;
                if (n < 11) {
                    // 0x55f00a
                    v48 = v47;
                    v50 = v49;
                    v52 = v51;
                    v54 = v53;
                    v56 = v55;
                    int64_t v88; // 0x55ee3c
                    int64_t v89; // 0x55ee3c
                    if (v89 > v88 != v87 > 47) {
                        // break -> 0x55f320
                        break;
                    }
                    // 0x55f01d
                    v45 = v86 + 0xffffffd0;
                    goto lab_0x55f020;
                } else {
                    if (v87 < 58) {
                        // 0x55f01d
                        v45 = v86 + 0xffffffd0;
                        goto lab_0x55f020;
                    } else {
                        if (v87 < 103) {
                            // 0x55f450
                            v45 = v86 + 0xffffffa9;
                            goto lab_0x55f020;
                        } else {
                            // 0x55f308
                            v48 = v47;
                            v50 = v49;
                            v52 = v51;
                            v54 = v53;
                            v56 = v55;
                            if (v87 >= 71) {
                                // break -> 0x55f320
                                break;
                            }
                            int64_t v90 = v86 + 0xffffffc9; // 0x55f310
                            v46 = v90;
                            v48 = v47;
                            v50 = v49;
                            v52 = v51;
                            v54 = v53;
                            v56 = v55;
                            if ((int32_t)v90 == -1) {
                                // break -> 0x55f320
                                break;
                            }
                            goto lab_0x55f029;
                        }
                    }
                }
            }
            goto lab_0x55f320_2;
        }
    }
  lab_0x55ef4d:
    // 0x55ef4d
    v126 = v127;
    v128 = v129;
    if (*(char *)(v6 + 72) == v130) {
        goto lab_0x55f158;
    } else {
        int64_t v131 = function_524600((int64_t *)function_5245c0(v132), &v4); // 0x55ef65
        char v133 = v131; // 0x55ef6a
        if (v133 == 0) {
            int64_t v134 = function_5246d0(v132); // 0x55f694
            v126 = (int64_t)*v135;
            v128 = v134 & 0xffffffff;
            goto lab_0x55f158;
        } else {
            // 0x55ef76
            v136 = a3;
            v137 = a5;
            v138 = v133;
            v139 = (int64_t)*v135;
            v140 = v129;
            v141 = 0;
            v142 = v143;
            v144 = 0;
            goto lab_0x55ef80_3;
        }
    }
  lab_0x55f158:
    // 0x55f158
    v145 = a3;
    v146 = a5;
    v147 = v126;
    v148 = v128;
    v149 = 0;
    v150 = v143;
    v151 = 0;
    while (true) {
      lab_0x55f160:
        // 0x55f160
        v152 = v151;
        v153 = v150;
        int64_t v154 = v149;
        v155 = v148;
        v156 = v147;
        v157 = v146;
        v158 = v145;
        char v159; // 0x55ee3c
        if (v156 == 0) {
            // 0x55f160
            v159 = v155;
        } else {
            char v160 = v155;
            v136 = v158;
            v137 = v157;
            v138 = 0;
            v139 = v156;
            v140 = v155;
            v141 = v154;
            v142 = v153;
            v144 = v152;
            v159 = v160;
            if (*(char *)(v6 + 73) == v160) {
                // break -> 0x55ef80
                break;
            }
        }
        // 0x55f16d
        v161 = v159;
        v136 = v158;
        v137 = v157;
        v138 = 0;
        v139 = v156;
        v140 = v155;
        v141 = v154;
        v142 = v153;
        v144 = v152;
        if (*(char *)(v6 + 72) == v161) {
            // break -> 0x55ef80
            break;
        }
        // 0x55f176
        if (*(char *)(v6 + 114) == v161) {
            int32_t v162 = v153; // 0x55f2b4
            unsigned char v163 = (char)v154 ^ 1 | (char)(v162 == 10); // 0x55f2bb
            if (v163 == 0) {
                goto lab_0x55f188;
            } else {
                // 0x55f2c4
                v164 = 1;
                v165 = 8;
                v166 = 0;
                if (v7 != 0 && v162 != 8) {
                    // 0x55f440
                    v164 = v163;
                    v165 = v153;
                    v166 = v152 + 1 & 0xffffffff;
                }
                goto lab_0x55f1b7;
            }
        } else {
            // 0x55f17f
            v136 = v158;
            v137 = v157;
            v138 = 0;
            v139 = v156;
            v140 = v155;
            v141 = 0;
            v142 = v153;
            v144 = v152;
            if (v154 == 0) {
                // break -> 0x55ef80
                break;
            }
            goto lab_0x55f188;
        }
    }
    goto lab_0x55ef80_3;
  lab_0x55ef80_3:;
    int32_t v167 = v142;
    v97 = v167;
    v92 = v136;
    v93 = v137;
    v94 = v132;
    v95 = v138;
    v96 = v168;
    v98 = v139;
    v99 = v140;
    v100 = v141;
    v101 = v142;
    v102 = v144;
    v21 = v136;
    v15 = v137;
    v20 = v132;
    v17 = v138;
    v16 = v168;
    v18 = 22;
    v14 = v139;
    v13 = v140;
    v9 = v141;
    v11 = v142;
    v12 = v144;
    if (v167 == 16) {
        goto lab_0x55ef97;
    } else {
        goto lab_0x55ef8f;
    }
  lab_0x55f4a8:;
    int64_t v169 = v115;
    int64_t v170 = v113;
    int64_t v171 = v111;
    int64_t v172 = v118;
    int64_t v173 = v119;
    int64_t v174 = v121;
    v48 = v174;
    v50 = v173;
    v52 = v171;
    v54 = v170;
    v56 = v169;
    int64_t v175; // 0x55ee3c
    int64_t v176; // 0x55ee3c
    int64_t v177; // 0x55ee3c
    int64_t v178; // 0x55ee3c
    int64_t v179; // 0x55ee3c
    if (*(char *)(v6 + 72) == (char)v172) {
        goto lab_0x55f320_2;
    } else {
        int64_t str = v6 + 114; // 0x55f47b
        int64_t * found_byte_pos = memchr((int64_t *)str, 0x1000000 * (int32_t)v172 >> 24, n); // 0x55f4c1
        v48 = v174;
        v50 = v173;
        v52 = v171;
        v54 = v170;
        v56 = v169;
        if (found_byte_pos == NULL) {
            goto lab_0x55f320_2;
        } else {
            if (v61 < v171) {
                // 0x55f5a0
                v179 = v174;
                v178 = v173;
                v175 = v171;
                v176 = v170;
                v177 = v123 % 256;
            } else {
                int64_t v180 = (int64_t)found_byte_pos - str; // 0x55f4cf
                int32_t v181 = v180; // 0x55f4d5
                int32_t v182 = v181 - 15; // 0x55f4d5
                uint64_t v183 = v171 * v60; // 0x55f4e6
                int64_t v184 = 0x100000000 * v180;
                int64_t v185 = (v182 < 0 == (14 - v181 & v181) < 0 == (v182 != 0) ? v184 - 0x600000000 : v184) >> 32; // 0x55f4ec
                v179 = v174;
                v178 = v173;
                v175 = v185 + v183;
                v176 = v170 + 1 & 0xffffffff;
                v177 = v169 & 0xffffffff | (int64_t)(v183 > -1 - v185);
            }
            goto lab_0x55f504;
        }
    }
  lab_0x55f320_2:
    // 0x55f320
    v25 = v48;
    v27 = v50;
    v29 = v78;
    v31 = 0;
    v33 = v52;
    v35 = v54;
    v37 = v56;
    v38 = v48;
    v39 = v50;
    v40 = v78;
    v41 = 0;
    v42 = v52;
    v43 = v54;
    v44 = v56;
    if (g3 == 0) {
        goto lab_0x55f0c4;
    } else {
        goto lab_0x55f338;
    }
  lab_0x55f338:;
    int64_t v186 = v44;
    int64_t v187 = v42;
    int32_t v188 = v41;
    char v189 = v40;
    int64_t v190 = v39;
    int64_t v191 = v38;
    function_451f2(&v109, 0x100000000000000 * v43 >> 56);
    int64_t v192 = *(int64_t *)(v6 + 16); // 0x55f350
    if ((char)function_569070(v192, *(int64_t *)(v6 + 24), &v109) == 0) {
        // 0x55f6a8
        *(int32_t *)a7 = 4;
    }
    int64_t v193 = v109; // 0x55f367
    int64_t v194 = v191; // 0x55f36f
    int64_t v195 = v190; // 0x55f36f
    char v196 = v189; // 0x55f36f
    int32_t v197 = v188; // 0x55f36f
    int64_t v198 = v193; // 0x55f36f
    int64_t v199 = v187; // 0x55f36f
    int64_t v200 = v186; // 0x55f36f
    int64_t v201; // 0x55ee3c
    int64_t v202; // 0x55ee3c
    int64_t v203; // 0x55ee3c
    int32_t v204; // 0x55ee3c
    char v205; // 0x55ee3c
    int64_t v206; // 0x55ee3c
    if ((int32_t)v43 != 0) {
        goto lab_0x55f382;
    } else {
        // 0x55f371
        v206 = v191;
        v203 = v190;
        v205 = v189;
        v204 = v188;
        v202 = v193;
        v201 = v187;
        v194 = v191;
        v195 = v190;
        v196 = v189;
        v197 = v188;
        v198 = v193;
        v199 = v187;
        v200 = v186;
        if ((char)v104 != 1 == g3 == 0) {
            goto lab_0x55f0d7;
        } else {
            goto lab_0x55f382;
        }
    }
  lab_0x55f0c4:
    // 0x55f0c4
    v206 = v25;
    v203 = v27;
    v205 = v29;
    v204 = v31;
    v202 = v109;
    v201 = v33;
    v194 = v25;
    v195 = v27;
    v196 = v29;
    v197 = v31;
    v198 = v109;
    v199 = v33;
    v200 = v37;
    if ((char)v104 == 1 || (int32_t)v35 != 0) {
        goto lab_0x55f382;
    } else {
        goto lab_0x55f0d7;
    }
  lab_0x55f57a:;
    int64_t v207 = v116;
    int64_t v208 = v114;
    int64_t v209 = v112;
    int64_t v210 = v120;
    int64_t v211 = v122;
    v24 = v211;
    v26 = v210;
    v28 = v117;
    v30 = 0;
    v32 = v209;
    v34 = v208;
    v36 = v207;
    if ((int32_t)v208 == 0) {
        goto lab_0x55f0b1_2;
    } else {
        // 0x55f583
        function_451f2(&v109, 0x100000000000000 * v208 >> 56);
        v179 = v211;
        v178 = v210;
        v175 = v209;
        v176 = 0;
        v177 = v207;
        goto lab_0x55f504;
    }
  lab_0x55f382:;
    int64_t v212 = v199;
    int64_t v213 = v198;
    int32_t v214 = v197;
    char v215 = v196;
    int64_t v216 = v195;
    int64_t v217 = v194;
    v206 = v217;
    v203 = v216;
    v205 = v215;
    v204 = v214;
    v202 = v213;
    v201 = v212;
    int64_t v218; // 0x55ee3c
    int64_t v219; // 0x55ee3c
    int64_t v220; // 0x55ee3c
    int32_t v221; // 0x55ee3c
    char v222; // 0x55ee3c
    int64_t v223; // 0x55ee3c
    if (v215 != 0) {
        goto lab_0x55f0d7;
    } else {
        // 0x55f38d
        if ((char)v200 == 0) {
            int64_t v224 = v106 != 0 ? -v212 : v212; // 0x55f67b
            *(int64_t *)a8 = v224;
            v223 = v217;
            v220 = v216;
            v222 = v215;
            v221 = v214;
            v219 = v213;
            v218 = v224;
        } else {
            // 0x55f396
            *(int64_t *)a8 = -1;
            *(int32_t *)a7 = 4;
            v223 = v217;
            v220 = v216;
            v222 = v215;
            v221 = v214;
            v219 = v213;
            v218 = v212;
        }
        goto lab_0x55f0ee;
    }
  lab_0x55f0d7:
    // 0x55f0d7
    *(int64_t *)a8 = 0;
    *(int32_t *)a7 = 4;
    v223 = v206;
    v220 = v203;
    v222 = v205;
    v221 = v204;
    v219 = v202;
    v218 = v201;
    goto lab_0x55f0ee;
  lab_0x55f0ee:;
    int64_t v225 = v223;
    if ((char)v221 != 0) {
        int32_t * v226 = (int32_t *)a7; // 0x55f0fa
        *v226 = *v226 | 2;
    }
    int64_t v227 = v219 - 24; // 0x55f0fd
    int64_t v228 = v71; // 0x55f112
    if (v227 != (int64_t)g2) {
        // 0x55f728
        int64_t v229; // bp-73, 0x55ee3c
        function_552550(v227, (int64_t)&v229, v225);
        v228 = result;
    }
    // 0x55f118
    if (v5 == __readfsqword(40)) {
        // 0x55f12f
        return result;
    }
    // 0x55f7e1
    __stack_chk_fail();
    v230 = v225;
    v231 = v220;
    v232 = v228;
    v233 = v222;
    v234 = v218;
    goto lab_0x55f7e6;
  lab_0x55f504:;
    int64_t v238 = v177;
    int64_t v239 = v176;
    int64_t v240 = v175;
    int64_t v241 = v178;
    int64_t v242 = v179; // 0x55f50c
    if (result != 0) {
        int64_t * v243 = (int64_t *)(result + 16); // 0x55f50e
        uint64_t v244 = *v243; // 0x55f50e
        v242 = -1;
        if (v244 < *(int64_t *)(result + 24)) {
            // 0x55f51c
            *v243 = v244 + 1;
            v242 = -1;
        }
    }
    int64_t v245 = v242;
    int64_t v246 = function_5246d0(v71); // 0x55f530
    int64_t v247 = v4; // 0x55f535
    int64_t v248 = v241; // 0x55f543
    char v249 = v110; // 0x55f543
    int64_t v250; // 0x55ee3c
    if (v247 == 0) {
        goto lab_0x55f552;
    } else {
        // 0x55f549
        v248 = v241;
        v249 = 0;
        if ((int32_t)v241 == -1) {
            uint64_t v251 = *(int64_t *)(v247 + 16); // 0x55f5b0
            if (v251 >= *(int64_t *)(v247 + 24)) {
                int64_t v252 = *(int64_t *)v247; // 0x55f6c8
                v250 = v252;
                if ((int32_t)v252 != -1) {
                    goto lab_0x55f5c1;
                } else {
                    // 0x55f6d7
                    v4 = 0;
                    v248 = v241;
                    v249 = v110;
                    goto lab_0x55f552;
                }
            } else {
                // 0x55f5be
                v250 = (int64_t)*(char *)v251;
                goto lab_0x55f5c1;
            }
        } else {
            goto lab_0x55f552;
        }
    }
  lab_0x55f552:;
    int64_t v253 = v248;
    v24 = v245;
    v26 = v253;
    v28 = v78;
    v30 = v123;
    v32 = v240;
    v34 = v239;
    v36 = v238;
    if (v249 == (char)((int32_t)v246 == -1)) {
        goto lab_0x55f0b1_2;
    } else {
        int64_t v254 = function_5246d0(v71); // 0x55f55e
        int64_t v255 = v254 & 0xffffffff; // 0x55f563
        char v256 = *v124; // 0x55f565
        v121 = v245;
        v119 = v253;
        v118 = v255;
        v111 = v240;
        v113 = v239;
        v115 = v238;
        if (v256 == 0) {
            goto lab_0x55f4a8;
        } else {
            // 0x55f571
            v121 = v245;
            v119 = v253;
            v118 = v255;
            v111 = v240;
            v113 = v239;
            v115 = v238;
            v122 = v245;
            v120 = v253;
            v117 = v256;
            v112 = v240;
            v114 = v239;
            v116 = v238;
            if (*(char *)(v6 + 73) != (char)v254) {
                goto lab_0x55f4a8;
            } else {
                goto lab_0x55f57a;
            }
        }
    }
  lab_0x55f5c1:
    // 0x55f5c1
    v248 = 0x100000000 * v250 >> 32;
    v249 = 0;
    goto lab_0x55f552;
}
