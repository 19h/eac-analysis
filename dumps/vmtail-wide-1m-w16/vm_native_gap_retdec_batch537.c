/*
 * Targeted RetDec C for native executable gap queue batch 537.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x200434-0x200634 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f519e-0x3f539e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f559e-0x3f579e rank=- name=- kind=- bytes=- uncovered=-
 *   0x474cee-0x474dee rank=- name=- kind=- bytes=- uncovered=-
 *   0x474eee-0x474fee rank=- name=- kind=- bytes=- uncovered=-
 *   0x4750ee-0x4752ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x4752ee-0x4754ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x4754ee-0x4756ee rank=- name=- kind=- bytes=- uncovered=-
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
int128_t __asm_vdivpd(int128_t left, int128_t right);
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

int64_t function_200434(void);
int64_t function_20043d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_200608(int64_t a1);
int64_t function_3f519e(void);
int64_t function_3f51ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f51dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f52ef(void);
int64_t function_3f5323(void);
int64_t function_3f532b(int64_t a1, uint64_t a2, int64_t a3, int64_t a4);
int64_t function_3f5350(void);
int64_t function_3f559e(void);
int64_t function_3f55a1(int64_t a1);
int64_t function_3f55ae(int64_t a1);
int64_t function_3f55f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f56a1(void);
int64_t function_3f56a4(int64_t a1);
int64_t function_3f571a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3f5743(void);
int64_t function_3f5761(void);
int64_t function_3f5771(int64_t a1, int64_t a2);
int64_t function_474cee(void);
int64_t function_474cf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_474eee(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_474f0e(void);
int64_t function_474f15(int64_t a1);
int64_t function_474f80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4750ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4750f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47515f(void);
int64_t function_475162(int64_t a1);
int64_t function_47517f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4751b8(void);
int64_t function_4751de(int64_t a1);
int64_t function_4751e6(void);
int64_t function_4751ef(void);
int64_t function_47529c(void);
int64_t function_4752a1(void);
int64_t function_4752c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4752d6(void);
int64_t function_4752fe(void);
int64_t function_47531a(void);
int64_t function_475321(void);
int64_t function_475331(void);
int64_t function_475342(int64_t a1);
int64_t function_475347(void);
int64_t function_4753a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4753bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_475429(void);
int64_t function_475467(int64_t a1, int64_t a2, int64_t a3);
int64_t function_475487(void);
int64_t function_4754a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4754e4(void);
int64_t function_4754f5(void);
int64_t function_47551e(int64_t a1);
int64_t function_475529(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_475554(int64_t a1);
int64_t function_475564(int64_t a1);
int64_t function_47557e(void);
int64_t function_475580(int64_t a1, int64_t a2);
int64_t function_4755b0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_7f7c4b54();
int64_t function_c57b8();
int64_t function_ffffffff8df58cbe();
int64_t function_ffffffff903885da();
int64_t function_ffffffffacc6bb18();
int64_t function_ffffffffb147c480();
int64_t function_ffffffffd806585b();
int64_t function_ffffffffdd5e75fb();
int64_t function_ffffffffe17de948();

// Address range: 0x200434 - 0x20043d
int64_t function_200434(void) {
    // 0x200434
    int64_t v1; // 0x200434
    return function_c57b8(v1, v1);
}

// Address range: 0x20043d - 0x200585
int64_t function_20043d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x20043d
    int64_t v1; // bp-40, 0x20043d
    int64_t v2 = (int64_t)&v1; // 0x2004b0
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x2004cb
    int64_t v4 = v2 - 8; // 0x2004cb
    int64_t * v5 = (int64_t *)v4; // 0x2004cb
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x2004cf
    *v6 = v3;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x2004e5
    *v7 = v4;
    int64_t v8 = v2 + 8; // 0x2004ee
    int64_t v9 = *(int64_t *)v8; // 0x2004ee
    *v6 = v9;
    *v7 = a2;
    int64_t v10 = v2 - 32; // 0x2004fe
    int64_t * v11 = (int64_t *)v10; // 0x2004fe
    *v11 = v3;
    *(int64_t *)(v2 - 40) = v3;
    *v5 = v3;
    *v11 = v10;
    *v7 = v9;
    *(int64_t *)(v2 + 16) = *v6;
    int64_t v12 = *v5; // 0x20054f
    *v6 = v12;
    *v7 = v12;
    *v6 = v1;
    *v5 = v8;
    return function_c57b8(a1, *v7);
}

// Address range: 0x200608 - 0x20060b
int64_t function_200608(int64_t a1) {
    // 0x200608
    int64_t result; // 0x200608
    return result;
}

// Address range: 0x3f519e - 0x3f51a0
int64_t function_3f519e(void) {
    // 0x3f519e
    int64_t v1; // 0x3f519e
    return function_3f51dc(v1, v1, v1, v1);
}

// Address range: 0x3f51ca - 0x3f51dc
int64_t function_3f51ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x25bc88f7); // 0x3f51d0
    int64_t v2; // 0x3f51ca
    *v1 = *v1 - (int32_t)v2;
    char * v3 = (char *)(5 * a1); // 0x3f51d6
    *v3 = *v3 ^ -119;
    return v2 & 0xffffff00 | 28;
}

// Address range: 0x3f51dc - 0x3f523a
int64_t function_3f51dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 + 102); // 0x3f51de
    unsigned char v2 = *v1; // 0x3f51de
    *v1 = v2 / 2 | 128 * v2;
    int64_t v3; // 0x3f51dc
    return v3 & -132;
}

// Address range: 0x3f52ef - 0x3f52f0
int64_t function_3f52ef(void) {
    // 0x3f52ef
    int64_t result; // 0x3f52ef
    return result;
}

// Address range: 0x3f5323 - 0x3f532a
int64_t function_3f5323(void) {
    // 0x3f5323
    return function_ffffffff903885da();
}

// Address range: 0x3f532b - 0x3f5340
int64_t function_3f532b(int64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    // 0x3f532b
    bool v1; // 0x3f532b
    if (v1) {
        function_3f52ef();
    }
    // 0x3f532d
    return __asm_int1() & -256 | a2 % 256;
}

// Address range: 0x3f5350 - 0x3f5351
int64_t function_3f5350(void) {
    // 0x3f5350
    int64_t result; // 0x3f5350
    return result;
}

// Address range: 0x3f559e - 0x3f559f
int64_t function_3f559e(void) {
    // 0x3f559e
    int64_t result; // 0x3f559e
    return result;
}

// Address range: 0x3f55a1 - 0x3f55a4
int64_t function_3f55a1(int64_t a1) {
    // 0x3f55a1
    int64_t result; // 0x3f55a1
    return result;
}

// Address range: 0x3f55ae - 0x3f55b1
int64_t function_3f55ae(int64_t a1) {
    // 0x3f55ae
    int64_t result; // 0x3f55ae
    return result;
}

// Address range: 0x3f55f6 - 0x3f55fd
int64_t function_3f55f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (uint32_t)(int32_t)a4 % 32; // 0x3f55f6
    if (v1 != 0) {
        *(int32_t *)a3 = (int32_t)a3 >> v1;
    }
    return function_ffffffffb147c480();
}

// Address range: 0x3f56a1 - 0x3f56a4
int64_t function_3f56a1(void) {
    // 0x3f56a1
    int64_t result; // 0x3f56a1
    return result;
}

// Address range: 0x3f56a4 - 0x3f56b0
int64_t function_3f56a4(int64_t a1) {
    // 0x3f56a4
    int64_t result; // 0x3f56a4
    *(char *)0x724314a4e874c6e1 = (char)result;
    return result;
}

// Address range: 0x3f571a - 0x3f5735
int64_t function_3f571a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3f571a
    int64_t v1; // 0x3f571a
    int64_t v2 = v1 & a2;
    *(int32_t *)-0x70f608b5235f77db = (int32_t)v2;
    char * v3 = (char *)(a3 - 17); // 0x3f5727
    *v3 = *v3 ^ (char)a3;
    char * v4 = (char *)(a3 + 0x2ddc162a); // 0x3f572c
    *v4 = *v4 + (char)(a4 / 256);
    return v2 & 0xffffffff;
}

// Address range: 0x3f5743 - 0x3f5744
int64_t function_3f5743(void) {
    // 0x3f5743
    int64_t result; // 0x3f5743
    return result;
}

// Address range: 0x3f5761 - 0x3f5763
int64_t function_3f5761(void) {
    // 0x3f5761
    int64_t result; // 0x3f5761
    return result;
}

// Address range: 0x3f5771 - 0x3f5776
int64_t function_3f5771(int64_t a1, int64_t a2) {
    // 0x3f5771
    return function_3f5743();
}

// Address range: 0x474cee - 0x474cf0
int64_t function_474cee(void) {
    // 0x474cee
    int64_t v1; // 0x474cee
    return v1 * v1 & 0xffffffff;
}

// Address range: 0x474cf8 - 0x474d85
int64_t function_474cf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t result = 0x6ec69119 * *(int32_t *)(a4 + 121); // 0x474cf8
    bool v1; // 0x474cf8
    if (v1) {
        // 0x474d7f
        return result + 0x798827c7;
    }
    // 0x474d01
    return result;
}

// Address range: 0x474eee - 0x474f09
int64_t function_474eee(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int16_t v1 = a3; // 0x474ef1
    int64_t v2; // 0x474eee
    __asm_outsb(v1, (char)v2);
    int32_t v3 = __asm_in(97); // 0x474ef5
    char * v4 = (char *)(a3 - 64); // 0x474ef7
    *v4 = *v4 & (char)(v2 / 256);
    char * v5 = (char *)(a4 + 55); // 0x474efa
    *v5 = *v5 & (char)(a4 / 256);
    return (int64_t)__asm_in_133(v1) | (int64_t)(v3 & -256);
}

// Address range: 0x474f0e - 0x474f13
int64_t function_474f0e(void) {
    // 0x474f0e
    return function_7f7c4b54();
}

// Address range: 0x474f15 - 0x474f18
int64_t function_474f15(int64_t a1) {
    // 0x474f15
    int64_t result; // 0x474f15
    return result;
}

// Address range: 0x474f80 - 0x474f92
int64_t function_474f80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x474f80
    int64_t result; // 0x474f80
    return result;
}

// Address range: 0x4750ee - 0x4750f0
int64_t function_4750ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4750ee
    int64_t result; // 0x4750ee
    return result;
}

// Address range: 0x4750f1 - 0x475135
int64_t function_4750f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    char * v2 = (char *)(a3 + 0x52bf66da); // 0x4750fb
    *v2 = *v2 - 1;
    int64_t v3 = a4; // bp-16, 0x475103
    int32_t v4 = (int32_t)__asm_int3(a1, a2, a3) ^ -0x2aee1ee6; // 0x475106
    if (v4 < 0) {
        // 0x47510d
        return a4 & 0xffffff00 | (int64_t)*(char *)&v1;
    }
    // 0x475125
    bool v5; // 0x4750f1
    int64_t v6 = (v5 ? -1 : 1) + a1; // 0x475104
    int64_t v7 = (int64_t)&v3; // 0x475125
    *(int32_t *)v6 = (int32_t)v7;
    int64_t v8; // 0x4750f1
    int32_t * v9 = (int32_t *)(v8 + 21); // 0x475127
    *v9 = *v9 - (int32_t)(v6 + (v5 ? 0xfffffffc : 4));
    unsigned char v10 = (char)v7; // 0x47512a
    unsigned char v11 = *(char *)(2 * v8 + a4); // 0x47512a
    char * v12 = (char *)(2 * a3 + (int64_t)v4); // 0x47512d
    *v12 = *v12 + 36 + (char)(v11 > v10);
    return v7 & -256 | (int64_t)(v10 - v11);
}

// Address range: 0x47515f - 0x475162
int64_t function_47515f(void) {
    // 0x47515f
    int64_t result; // 0x47515f
    return result;
}

// Address range: 0x475162 - 0x475163
int64_t function_475162(int64_t a1) {
    // 0x475162
    int64_t result; // 0x475162
    return result;
}

// Address range: 0x47517f - 0x475187
int64_t function_47517f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47517f
    int64_t result; // 0x47517f
    char * v1 = (char *)(result - 0x26ca08b8); // 0x47517f
    bool v2; // 0x47517f
    *v1 = (char)v2 - (char)result + *v1;
    return result;
}

// Address range: 0x4751b8 - 0x4751b9
int64_t function_4751b8(void) {
    // 0x4751b8
    int64_t result; // 0x4751b8
    return result;
}

// Address range: 0x4751de - 0x4751df
int64_t function_4751de(int64_t a1) {
    // 0x4751de
    int64_t result; // 0x4751de
    return result;
}

// Address range: 0x4751e6 - 0x4751eb
int64_t function_4751e6(void) {
    // 0x4751e6
    return function_ffffffffe17de948();
}

// Address range: 0x4751ef - 0x475208
int64_t function_4751ef(void) {
    // 0x4751ef
    bool v1; // 0x4751ef
    if (!v1) {
        // 0x475201
        int64_t v2; // 0x4751ef
        return v2 & -0xff01 | (int64_t)&g2;
    }
    // 0x4751f1
    return function_ffffffffdd5e75fb();
}

// Address range: 0x47529c - 0x47529f
int64_t function_47529c(void) {
    // 0x47529c
    int64_t result; // 0x47529c
    return result;
}

// Address range: 0x4752a1 - 0x4752a4
int64_t function_4752a1(void) {
    // 0x4752a1
    int64_t result; // 0x4752a1
    return result;
}

// Address range: 0x4752c4 - 0x4752cb
int64_t function_4752c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4752c4
    int64_t v1; // 0x4752c4
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return v1 & 0xffffffff;
}

// Address range: 0x4752d6 - 0x4752d9
int64_t function_4752d6(void) {
    // 0x4752d6
    int64_t result; // 0x4752d6
    return result;
}

// Address range: 0x4752fe - 0x475302
int64_t function_4752fe(void) {
    // 0x4752fe
    int64_t v1; // 0x4752fe
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x47531a - 0x475321
int64_t function_47531a(void) {
    // 0x47531a
    int64_t result; // 0x47531a
    return result;
}

// Address range: 0x475321 - 0x475326
int64_t function_475321(void) {
    // 0x475321
    return function_ffffffffd806585b();
}

// Address range: 0x475331 - 0x475332
int64_t function_475331(void) {
    // 0x475331
    int64_t result; // 0x475331
    return result;
}

// Address range: 0x475342 - 0x475343
int64_t function_475342(int64_t a1) {
    // 0x475342
    int64_t result; // 0x475342
    return result;
}

// Address range: 0x475347 - 0x47534b
int64_t function_475347(void) {
    // 0x475347
    int64_t result; // 0x475347
    bool v1; // 0x475347
    if (v1) {
        result = function_475331();
    }
    // 0x47534a
    return result;
}

// Address range: 0x4753a9 - 0x4753b3
int64_t function_4753a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4753a9
    int64_t result; // 0x4753a9
    return result;
}

// Address range: 0x4753bc - 0x47540d
int64_t function_4753bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4753bc
    int64_t v1; // 0x4753bc
    int64_t v2 = v1;
    int64_t v3 = a2;
    bool v4; // 0x4753bc
    int64_t v5 = (v2 - (v4 ? 54 : 53)) % 256 | v2 & 0xffffff00; // 0x4753bc
    uint32_t v6 = (int32_t)v5; // 0x4753be
    int64_t result = v5 + 0xdcdb6bb7 & 0xffffffff; // 0x4753be
    if ((0x23249448 - v6 & v6) < 0) {
        // 0x4753c5
        return result;
    }
    int64_t v7 = v6 < 0x23249449 ? 0x444d18e9 : 0x444d18e8; // 0x4753e3
    int32_t * v8 = (int32_t *)(2 * v1 + 83 + result); // 0x4753e8
    *v8 = *v8 ^ 0x259dcc34;
    uint32_t v9 = *(int32_t *)(a3 + 0x39f1d527); // 0x4753f5
    *(int32_t *)result = *(int32_t *)&v3;
    return (a1 - v7 & 0xffffffff) - 0x3ff9ffbb + (int64_t)(v9 < (int32_t)a4);
}

// Address range: 0x475429 - 0x47542a
int64_t function_475429(void) {
    // 0x475429
    int64_t result; // 0x475429
    return result;
}

// Address range: 0x475467 - 0x47546b
int64_t function_475467(int64_t a1, int64_t a2, int64_t a3) {
    // 0x475467
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x475467
    return result;
}

// Address range: 0x475487 - 0x47548e
int64_t function_475487(void) {
    // 0x475487
    return function_ffffffffacc6bb18();
}

// Address range: 0x4754a0 - 0x4754e3
int64_t function_4754a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4754a0
    int64_t v1; // 0x4754a0
    int64_t v2 = v1 & -256; // 0x4754dd
    char v3 = (char)v1 ^ 117; // 0x4754df
    int64_t result = v2 | (int64_t)v3; // 0x4754df
    if (v3 >= 0 != v3 != 0) {
        // 0x4754e3
        return result;
    }
    int32_t * v4 = (int32_t *)(a3 - 18); // 0x4754c3
    int32_t v5 = a3; // 0x4754c3
    int32_t v6 = *v4 ^ v5; // 0x4754c3
    *v4 = v6;
    int64_t v7 = v2; // 0x4754c6
    int32_t v8 = v6; // 0x4754c6
    if (v6 >= 0) {
      lab_0x4754c9:;
        int16_t v9 = a3; // 0x4754c9
        *(int32_t *)a1 = __asm_insd(v9);
        return v7 | (int64_t)__asm_in_133(v9);
    }
    int64_t v10 = result & -256; // 0x4754dd
    int64_t v11; // 0x4754a0
    char v12 = *(char *)&v11 ^ 117; // 0x4754df
    int64_t result2 = v10 | (int64_t)v12; // 0x4754df
    while (v12 >= 0 == (v12 != 0)) {
        // 0x4754c3
        v8 ^= v5;
        *v4 = v8;
        v7 = v10;
        if (v8 >= 0) {
            goto lab_0x4754c9;
        }
        v10 = result2 & -256;
        v12 = *(char *)&v11 ^ 117;
        result2 = v10 | (int64_t)v12;
    }
    // 0x4754e3
    return result2;
}

// Address range: 0x4754e4 - 0x4754e5
int64_t function_4754e4(void) {
    // 0x4754e4
    int64_t result; // 0x4754e4
    return result;
}

// Address range: 0x4754f5 - 0x4754f6
int64_t function_4754f5(void) {
    // 0x4754f5
    int64_t result; // 0x4754f5
    return result;
}

// Address range: 0x47551e - 0x475528
int64_t function_47551e(int64_t a1) {
    // 0x47551e
    int64_t v1; // 0x47551e
    int64_t v2 = v1;
    return (v2 + 17) % 256 | v2 & -256;
}

// Address range: 0x475529 - 0x47552e
int64_t function_475529(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = __asm_hlt(a1, a2, a3, a4); // 0x475529
    int64_t v1; // 0x475529
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return result;
}

// Address range: 0x475554 - 0x475558
int64_t function_475554(int64_t a1) {
    // 0x475554
    int64_t v1; // 0x475554
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x475564 - 0x475572
int64_t function_475564(int64_t a1) {
    // 0x475564
    int64_t v1; // 0x475564
    int64_t v2 = 0x100000000 * v1 >> 32; // 0x475564
    int32_t v3 = (int32_t)v1 - 0x39f224de + (int32_t)(17 * v2 != 0x1100000000 * v2 >> 32); // 0x475567
    int64_t result = v3; // 0x47556f
    if (v3 < 1) {
        result = function_4754f5();
    }
    // 0x475571
    return result;
}

// Address range: 0x47557e - 0x47557f
int64_t function_47557e(void) {
    // 0x47557e
    int64_t result; // 0x47557e
    return result;
}

// Address range: 0x475580 - 0x47558b
int64_t function_475580(int64_t a1, int64_t a2) {
    // 0x475580
    return function_ffffffff8df58cbe();
}

// Address range: 0x4755b0 - 0x4756ba
int64_t function_4755b0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x4755b0
    int64_t v1; // 0x4755b0
    uint64_t v2 = v1;
    uint64_t v3 = v1;
    unsigned char v4 = (char)a4 - *(char *)(v2 + a1); // 0x4755b0
    int64_t result = a4 & -256 | (int64_t)v4; // 0x4755b0
    int64_t v5 = 0x100000000 * result >> 32; // 0x4755b3
    int64_t v6 = -0x78f15427 * v5; // 0x4755b3
    if (v4 != 0 && v6 == -0x78f1542700000000 * v5 >> 32) {
        // 0x475604
        bool v7; // 0x4755b0
        int64_t v8 = v7 ? -4 : 4; // 0x475606
        *(int32_t *)(v8 + a1) = (int32_t)(256 * (v3 / 256 + v2 / 256 + (int64_t)((int32_t)a1 > (int32_t)v3)) & 0xff00 | v3 & 0xffff00ff);
        char * v9 = (char *)((result & 0xffffffff) - 56); // 0x47560c
        *v9 = (char)(a4 / 256);
        int32_t v10 = *(int32_t *)(256 * (int64_t)*v9 | result & 0xffff00ff); // 0x475611
        return v10 - 0xb1dfe77;
    }
    char v11 = v3; // 0x4755bb
    *(int64_t *)((v6 & 0xffffffff) - 8) = result;
    if ((v11 & -v11) < 0) {
        // 0x4755fc
        return result;
    }
    int32_t v12 = __asm_in(-37); // 0x4755c1
    int32_t * v13 = (int32_t *)((int64_t)v12 - 101); // 0x4755c3
    *v13 = v12 + (int32_t)(v11 == 0) + *v13;
    int32_t * v14 = (int32_t *)(a3 + 86); // 0x4755c7
    *v14 = *v14 / 0x20000000;
    return 0x10000 * v12 >> 16 ^ -0x1fe97cba;
}
