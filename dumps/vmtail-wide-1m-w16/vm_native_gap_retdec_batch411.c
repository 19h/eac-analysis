/*
 * Targeted RetDec C for native executable gap queue batch 411.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x150313-0x150513 rank=- name=- kind=- bytes=- uncovered=-
 *   0x150513-0x150713 rank=- name=- kind=- bytes=- uncovered=-
 *   0x150713-0x150913 rank=- name=- kind=- bytes=- uncovered=-
 *   0x150913-0x150b13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x170caa-0x170eaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1710aa-0x1712aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1712aa-0x1714aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1714aa-0x1716aa rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_150313(int64_t result);
int64_t function_15031a(int64_t a1);
int64_t function_150341(void);
int64_t function_150367(void);
int64_t function_150380(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1503a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_150422(int64_t a1);
int64_t function_150435(void);
int64_t function_15046f(void);
int64_t function_15048b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1504f6(void);
int64_t function_15051c(int64_t a1);
int64_t function_150547(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_15057f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_150618(void);
int64_t function_150619(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1506f5(void);
int64_t function_150729(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_150819(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_15084f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_15089c(void);
int64_t function_15096d(void);
int64_t function_150990(int64_t a1);
int64_t function_15099d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1509a9(void);
int64_t function_1509ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1509dc(void);
int64_t function_150a76(uint64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_150a87(int64_t a1, int64_t a2, int64_t a3);
int64_t function_150a91(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_150aff(void);
int64_t function_150b0c(void);
int64_t function_1521324();
int64_t function_170caa(void);
int64_t function_170d5d(void);
int64_t function_170d68(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_171044();
int64_t function_1710aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1710df(int64_t a1);
int64_t function_17110b(void);
int64_t function_17112a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17118c(int64_t a1);
int64_t function_1711f6(int64_t a1);
int64_t function_17122a(int64_t a1, int64_t a2);
int64_t function_17122c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_171277(int64_t a1);
int64_t function_171315(void);
int64_t function_171316(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_171387(void);
int64_t function_17138b(void);
int64_t function_1713c7(void);
int64_t function_1713d2(void);
int64_t function_1713de(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1713eb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_171415(void);
int64_t function_17142b(void);
int64_t function_171430(void);
int64_t function_171433(void);
int64_t function_171455(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1714c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_171588(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_17167c(int64_t a1);
int64_t function_6868f1f5();
int64_t function_ffffffff8c5d57bb();
int64_t unknown_1b073c73();
int64_t unknown_21d09a6e();
int64_t unknown_24127a55();
int64_t unknown_26104b44();
int64_t unknown_2d41de34();
int64_t unknown_3033b481();
int64_t unknown_3690e92();
int64_t unknown_3b0214e2();
int64_t unknown_4b4fa6be();
int64_t unknown_4c949e87();
int64_t unknown_688fc139();
int64_t unknown_6ca48edf();
int64_t unknown_79a85d4c();
int64_t unknown_c26357();
int64_t unknown_ffffffff8b0c46af();
int64_t unknown_ffffffff9629b237();
int64_t unknown_ffffffffa4b4fd5b();
int64_t unknown_ffffffffb718f8e5();
int64_t unknown_ffffffffc10bf8fc();
int64_t unknown_ffffffffc63c6464();
int64_t unknown_ffffffffcaf7bc3d();
int64_t unknown_ffffffffd423e48e();
int64_t unknown_ffffffffd8dcdf5b();
int64_t unknown_fffffffff21852c2();
int64_t unknown_fffffffff621ec9f();

// Address range: 0x150313 - 0x150318
int64_t function_150313(int64_t result) {
    // 0x150313
    return result;
}

// Address range: 0x15031a - 0x150321
int64_t function_15031a(int64_t a1) {
    // 0x15031a
    int64_t result; // 0x15031a
    return result;
}

// Address range: 0x150341 - 0x150342
int64_t function_150341(void) {
    // 0x150341
    int64_t result; // 0x150341
    return result;
}

// Address range: 0x150367 - 0x15036f
int64_t function_150367(void) {
    // 0x150367
    int64_t v1; // 0x150367
    return function_1503a0(v1, v1, v1, v1);
}

// Address range: 0x150380 - 0x1503a0
int64_t function_150380(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x150380
    float80_t v1; // 0x150380
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x150380
    int32_t v3 = a3 - (v2 ? 0xb2ea5468 : 0xb2ea5467); // 0x15038e
    __asm_out(118, v3);
    int64_t v4; // 0x150380
    uint32_t v5 = *(int32_t *)&v4; // 0x150390
    int64_t v6 = a4 & -256 | 94; // 0x150392
    v4 = v6;
    int64_t result = v5; // 0x150394
    if (v3 < -0x683824fe) {
        result = function_150341();
    }
    int32_t * v7 = (int32_t *)(v6 - 0x5dc83da); // 0x150396
    *v7 = *v7 - 0x2e0050b9;
    return result;
}

// Address range: 0x1503a0 - 0x15040b
int64_t function_1503a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1503a0
    if (a4 != 1 == *(int32_t *)-0x1d95e158 == 127) {
        // 0x15040a
        int64_t result; // 0x1503a0
        return result;
    }
    // 0x1503aa
    return __asm_sti();
}

// Address range: 0x150422 - 0x15042b
int64_t function_150422(int64_t a1) {
    // 0x150422
    int64_t result; // 0x150422
    return result;
}

// Address range: 0x150435 - 0x150436
int64_t function_150435(void) {
    // 0x150435
    int64_t result; // 0x150435
    return result;
}

// Address range: 0x15046f - 0x150470
int64_t function_15046f(void) {
    // 0x15046f
    int64_t result; // 0x15046f
    return result;
}

// Address range: 0x15048b - 0x1504c7
int64_t function_15048b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x15048b
    int64_t v1; // 0x15048b
    int64_t v2; // 0x15048b
    if ((char)v2 < 0) {
        v1 = function_15046f();
    }
    uint32_t v3 = (int32_t)v1; // 0x15048f
    int64_t v4 = v1; // 0x150494
    if (v3 >= 0x72fe02) {
        v4 = function_150435();
    }
    char * v5 = (char *)(v2 - 65); // 0x150496
    *v5 = (char)(v3 < 0x72fe01) + (char)a3 + *v5;
    int32_t v6 = *(int32_t *)(v4 - 0x7f5e71ff); // 0x15049b
    float80_t v7; // 0x15048b
    *(int64_t *)0x2ab60db0 = (int64_t)v7;
    int64_t v8 = unknown_4b4fa6be(); // 0x1504b8
    int32_t v9 = __asm_insd(0x7701 * (int16_t)v6 % 256 | (int16_t)&g2); // 0x1504bd
    *(int32_t *)a1 = v9;
    return (int64_t)(*(int32_t *)v8 | (int32_t)v8);
}

// Address range: 0x1504f6 - 0x1504f7
int64_t function_1504f6(void) {
    // 0x1504f6
    int64_t result; // 0x1504f6
    return result;
}

// Address range: 0x15051c - 0x150523
int64_t function_15051c(int64_t a1) {
    // 0x15051c
    int64_t v1; // 0x15051c
    bool v2; // 0x15051c
    return v1 - (v2 ? 0x57ac007b : 0x57ac007a) & 0xffffffff;
}

// Address range: 0x150547 - 0x15057a
int64_t function_150547(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x150547
    char * v3 = (char *)(v2 + 0x60580079); // 0x150547
    unsigned char v4 = *v3; // 0x150547
    char v5 = v2; // 0x150547
    unsigned char v6 = v4 + v5; // 0x150547
    *v3 = v6;
    char v7 = v6 < v4; // 0x15054d
    char v8 = v5 - 6 + v7; // 0x15054d
    char v9 = v8 + v7; // 0x15054d
    int64_t v10 = -0xb70c800; // bp-8, 0x150555
    int64_t v11 = v2 & -256 | (int64_t)v8; // 0x15055a
    if (v8 < 0 == ((v9 ^ v5) & (v9 ^ -128)) < 0 == (v8 != 0)) {
        v11 = function_1504f6();
    }
    int64_t v12 = v11;
    int64_t v13 = (v12 + 219) % 256 | v12 & -256; // 0x15055c
    *(int32_t *)0x68f283eb3c00013d = (int32_t)v13;
    unsigned char v14 = *(char *)&v1; // 0x150568
    unsigned char v15 = v14 + (char)((uint64_t)v2 / 256); // 0x150568
    *(char *)v1 = v15;
    bool v16 = v15 < v14; // 0x150568
    uint32_t v17 = 0x10000 * (int32_t)v13 >> 16; // 0x15056a
    uint32_t v18 = (int32_t)(int64_t)&v10; // 0x15056b
    int32_t v19 = v16; // 0x15056b
    uint32_t v20 = v17 + v19; // 0x15056b
    uint32_t v21 = v18 - v20; // 0x15056b
    v16 = v16 ? v20 != -1 | v21 - v19 > v18 : v20 > v18;
    unsigned char v22 = llvm_ctpop_i8((char)v21); // 0x15056b
    int64_t v23 = v21; // 0x15056b
    int64_t v24 = v17; // 0x15056d
    while (v22 % 2 != 0) {
        // 0x15056a
        v17 = 0x10000 * (int32_t)v24 >> 16;
        v18 = (int32_t)v23;
        v19 = v16;
        v20 = v17 + v19;
        v21 = v18 - v20;
        v16 = v16 ? v20 != -1 | v21 - v19 > v18 : v20 > v18;
        v22 = llvm_ctpop_i8((char)v21);
        v23 = v21;
        v24 = v17;
    }
    // 0x150570
    *(int64_t *)(v23 - 8) = -0x2038b31;
    return function_1521324();
}

// Address range: 0x15057f - 0x150616
int64_t function_15057f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x15057f
    int64_t v1; // 0x15057f
    uint64_t v2 = v1;
    bool v3; // 0x15057f
    if (true != !v3) {
        // 0x150587
        *(int32_t *)a4 = 2 * (int32_t)a4 | (int32_t)v3;
        *(char *)0x9efe796 = *(char *)0x9efe796 + (char)(v2 / 256);
        return __asm_int3();
    }
    unsigned char v4 = *(char *)(v1 - 0x48c5fdf0); // 0x15057f
    int32_t * v5 = (int32_t *)(a2 + 103); // 0x1505a9
    int32_t v6 = *v5 + (int32_t)a1; // 0x1505a9
    *v5 = v6;
    if (v6 != 0) {
        // 0x1505af
        return function_150619(a1, a2, 256 * (int64_t)v4 | a3 & -0xff01, a4);
    }
    // 0x150606
    int64_t result; // 0x15057f
    *(char *)result = *(char *)&result + (char)v2;
    return result;
}

// Address range: 0x150618 - 0x150619
int64_t function_150618(void) {
    // 0x150618
    int64_t v1; // 0x150618
    bool v2; // 0x150618
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x150619 - 0x15061b
int64_t function_150619(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x150619
    return a4 & 0xffffffff;
}

// Address range: 0x1506f5 - 0x1506f6
int64_t function_1506f5(void) {
    // 0x1506f5
    int64_t result; // 0x1506f5
    return result;
}

// Address range: 0x150729 - 0x150811
int64_t function_150729(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x150729
    int64_t v1; // 0x150729
    uint64_t v2 = v1;
    uint32_t v3 = *(int32_t *)-0x47e32492f9dfa2ee; // 0x150734
    int32_t * v4 = (int32_t *)(a4 - 75); // 0x150742
    uint32_t v5 = *v4; // 0x150742
    uint32_t v6 = v5 + (int32_t)v2; // 0x150742
    uint32_t v7 = v6 + (int32_t)(v3 < 0x29ee01); // 0x150742
    bool v8 = v3 < 0x29ee01 ? v7 <= v5 : v6 < v5; // 0x150742
    *v4 = v7;
    int64_t v9; // 0x150729
    char v10 = *(char *)&v9; // 0x150745
    int64_t v11 = v2 & -256 | (int64_t)(v10 + (char)v2 + (char)v8); // 0x150745
    uint16_t v12 = *(int16_t *)(a1 - 0x28acfa09); // 0x150748
    char v13 = v2 / 256; // 0x150754
    *(char *)-0x3f6d9a5 = *(char *)-0x3f6d9a5 + v13;
    float80_t v14; // 0x150729
    *(int32_t *)(v11 - 50) = (int32_t)v14;
    uint32_t v15 = (int32_t)a1; // 0x150766
    uint32_t v16 = (int32_t)v11 + v15; // 0x150766
    uint64_t v17 = a5 - (v16 < v15 ? 235 : 234); // 0x150769
    int64_t v18 = a5 & -256; // 0x150769
    int64_t v19 = v17 % 256 | v18; // 0x150769
    int64_t v20 = 0x3d008808; // bp-8, 0x15076b
    int32_t * v21 = (int32_t *)((int64_t)v16 + 48); // 0x150770
    *v21 = *v21 + (int32_t)(int64_t)&v20;
    int32_t v22 = v19; // 0x150784
    *(int32_t *)0xf8e1e79f = *(int32_t *)0xf8e1e79f | v22;
    __asm_out_133((int16_t)a3, v22);
    int32_t * v23 = (int32_t *)(v19 + 0x4965cc03); // 0x15078c
    *v23 = *v23 - 0x71f9efee;
    *(char *)0xf8b6049e = (char)v17;
    bool v24; // 0x150729
    int64_t v25 = v24 ? 0xf8b6049d : 0xf8b6049f; // 0x150796
    v9 = v25;
    int64_t v26 = (v17 + 58) % 256 | v18; // 0x150797
    int32_t v27 = (int32_t)v26 - *(int32_t *)v26; // 0x15079b
    *(char *)(v25 - 111) = (char)a4;
    char v28 = v27;
    char v29 = v28 & -3; // 0x1507a9
    unsigned char v30 = v29 - 105; // 0x1507a9
    int64_t result = (int64_t)v30 | (int64_t)(v27 & -256); // 0x1507a9
    if (((v30 ^ v28) & v29 + 23) >= 0) {
        // 0x150802
        if ((*(char *)(int64_t)v12 || v13) < 0) {
            // 0x150828
            return result;
        }
        // 0x15080b
        *(char *)v9 = v30;
        return result;
    }
    uint64_t result2 = result & 0x1e80cdb; // 0x1507b1
    *(char *)0x2ee3dbbd = *(char *)0x2ee3dbbd + 98;
    *(char *)v9 = __asm_insb(v12);
    *(int32_t *)0x7011a296 = *(int32_t *)0x7011a296 ^ 0x771f6209;
    char * v31 = (char *)(v20 + 94); // 0x1507ca
    *v31 = *v31 + (char)(result2 / 256);
    char * v32 = (char *)(v9 + 0x3a94640d); // 0x1507d4
    *v32 = *v32 | (char)(v20 / 256);
    return result2;
}

// Address range: 0x150819 - 0x150828
int64_t function_150819(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x39032dd7); // 0x150819
    int64_t v2; // 0x150819
    *v1 = *v1 + (int32_t)v2;
    int64_t result = v2 & 0xf1807d45 | 0xe7f82ba; // 0x15081f
    __asm_out_135(-18, (char)result);
    return result;
}

// Address range: 0x15084f - 0x150853
int64_t function_15084f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x15084f
    int64_t result; // 0x15084f
    return result;
}

// Address range: 0x15089c - 0x1508a5
int64_t function_15089c(void) {
    // 0x15089c
    int64_t result; // 0x15089c
    int32_t * v1 = (int32_t *)(result + 0x2d9298e8); // 0x15089c
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x15096d - 0x15096e
int64_t function_15096d(void) {
    // 0x15096d
    int64_t result; // 0x15096d
    return result;
}

// Address range: 0x150990 - 0x150993
int64_t function_150990(int64_t a1) {
    // 0x150990
    int64_t result; // 0x150990
    return result;
}

// Address range: 0x15099d - 0x1509a8
int64_t function_15099d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x15099d
    int64_t v1; // 0x15099d
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + (char)(a4 / 256);
    return function_15096d();
}

// Address range: 0x1509a9 - 0x1509ac
int64_t function_1509a9(void) {
    // 0x1509a9
    int64_t result; // 0x1509a9
    return result;
}

// Address range: 0x1509ae - 0x1509b4
int64_t function_1509ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1509ae
    int64_t result; // 0x1509ae
    *(int32_t *)a4 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x1509dc - 0x1509e6
int64_t function_1509dc(void) {
    // 0x1509dc
    unknown_3b0214e2();
    return __asm_int1();
}

// Address range: 0x150a76 - 0x150a87
int64_t function_150a76(uint64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x150a76
    float80_t v1; // 0x150a76
    float80_t v2 = v1;
    unknown_3033b481((v2 == v2 && 0.0L == 0.0L ? 0 : 0x80000000) | a1 / 2 % 0x80000000);
    return function_ffffffff8c5d57bb();
}

// Address range: 0x150a87 - 0x150a91
int64_t function_150a87(int64_t a1, int64_t a2, int64_t a3) {
    // 0x150a87
    *(char *)a1 = __asm_insb((int16_t)a3);
    return unknown_ffffffffd423e48e();
}

// Address range: 0x150a91 - 0x150a98
int64_t function_150a91(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x150a91
    int64_t result; // 0x150a91
    return result;
}

// Address range: 0x150aff - 0x150b00
int64_t function_150aff(void) {
    // 0x150aff
    int64_t result; // 0x150aff
    return result;
}

// Address range: 0x150b0c - 0x150b0e
int64_t function_150b0c(void) {
    // 0x150b0c
    return function_150aff();
}

// Address range: 0x170caa - 0x170cab
int64_t function_170caa(void) {
    // 0x170caa
    int64_t result; // 0x170caa
    return result;
}

// Address range: 0x170d5d - 0x170d5e
int64_t function_170d5d(void) {
    // 0x170d5d
    int64_t result; // 0x170d5d
    return result;
}

// Address range: 0x170d68 - 0x170e6c
int64_t function_170d68(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x170d68
    bool v1; // 0x170d68
    int64_t v2 = (v1 ? -1 : 1) + a1; // 0x170d6c
    int64_t v3 = unknown_1b073c73(v2); // 0x170d6d
    int64_t v4; // 0x170d68
    if ((char)v4 == (char)v4) {
        int64_t v5 = unknown_4c949e87(); // 0x170d81
        int64_t v6 = v5 & 215 | 40; // 0x170d86
        char * v7 = (char *)((v6 | v5 & -256) + 0x1e89405); // 0x170d88
        char v8 = v6; // 0x170d88
        *v7 = *v7 + v8;
        int64_t v9 = v1 ? -4 : 4; // 0x170d90
        *(int32_t *)(v2 + v9) = *(int32_t *)(v9 + a2);
        __asm_out_135(122, v8);
        return unknown_c26357();
    }
    int64_t v10 = v3 + 0x63fe17ff; // 0x170de8
    char v11 = v10 & v4; // 0x170ded
    int64_t v12; // 0x170d68
    int64_t v13; // 0x170d68
    int64_t v14; // 0x170d68
    int64_t * v15; // 0x170d68
    if (v11 >= 0 == (v11 != 0)) {
        int64_t v16 = -106; // bp-14994, 0x170e2b
        __asm_out_135(-104, (char)v10 - *(char *)(v2 - 34));
        v12 = unknown_ffffffffcaf7bc3d();
        v14 = a2 & 0xffffffff & a3;
        v13 = 0x860038c1;
        v15 = &v16;
    } else {
        int64_t result = v10 & 0xffffffff; // 0x170de8
        unsigned char v17 = llvm_ctpop_i8(v11); // 0x170ded
        v12 = result;
        v14 = a3;
        int64_t v18; // bp-14986, 0x170d68
        v15 = &v18;
        if (v17 % 2 == 0) {
            char * v19 = (char *)result; // 0x170df3
            *v19 = *v19 - (char)v10;
            return result;
        }
    }
    int32_t * v20 = (int32_t *)(v12 - 0x6101d2f9); // 0x170e40
    uint32_t v21 = *v20; // 0x170e40
    uint32_t v22 = v21 + (int32_t)v13; // 0x170e40
    *v20 = v22;
    int64_t result2 = unknown_79a85d4c(); // 0x170e46
    if (v22 < v21 || v22 == 0) {
        // 0x170e4d
        *(int64_t *)((int64_t)v15 - 8) = 0xa03a483;
        int64_t v23 = unknown_ffffffffa4b4fd5b(); // 0x170e55
        int32_t v24 = *(int32_t *)(v2 + 0x1e81a1d + v14); // 0x170e5f
        int32_t v25 = v22 < v21 ? -0x6f517fe8 : -0x6f517fe9; // 0x170e5a
        unsigned char v26 = *(char *)(result2 & 0xffffffff); // 0x170e6b
        return (int64_t)(v25 + (int32_t)v23 + v24 & -256) | (int64_t)v26;
    }
    // 0x170eba
    return result2;
}

// Address range: 0x1710aa - 0x1710b4
int64_t function_1710aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1710aa
    int64_t v1; // 0x1710aa
    int64_t v2 = v1 + 0x4abdfe18; // 0x1710ab
    *(int32_t *)a1 = (int32_t)v2;
    int64_t result = v2 & 0xffffffff; // 0x1710b1
    if (a4 == 0) {
        result = function_171044();
    }
    // 0x1710b3
    return result;
}

// Address range: 0x1710df - 0x1710e7
int64_t function_1710df(int64_t a1) {
    // 0x1710df
    return unknown_ffffffffb718f8e5(a1);
}

// Address range: 0x17110b - 0x17110c
int64_t function_17110b(void) {
    // 0x17110b
    int64_t result; // 0x17110b
    return result;
}

// Address range: 0x17112a - 0x17113b
int64_t function_17112a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17112a
    int64_t v1; // 0x17112a
    *(char *)(a4 - 0x74c14bff) = (char)((int32_t)v1 == 0x22f28401);
    int64_t result; // 0x17112a
    if (a4 != 1 && (int32_t)v1 != 0x22f28401) {
        result = function_17110b();
    }
    // 0x171138
    return result;
}

// Address range: 0x17118c - 0x17118f
int64_t function_17118c(int64_t a1) {
    // 0x17118c
    int64_t result; // 0x17118c
    return result;
}

// Address range: 0x1711f6 - 0x1711fe
int64_t function_1711f6(int64_t a1) {
    // 0x1711f6
    return unknown_ffffffffc10bf8fc(a1) & -114;
}

// Address range: 0x17122a - 0x17122c
int64_t function_17122a(int64_t a1, int64_t a2) {
    // 0x17122a
    int64_t result; // 0x17122a
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x17122c - 0x171277
int64_t function_17122c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x17122c
    int64_t v1; // 0x17122c
    unsigned char v2 = (char)v1;
    *(char *)v1 = v2 / 128 | 2 * v2;
    char v3 = *(char *)(a2 - 9); // 0x17122e
    int64_t v4 = unknown_ffffffff9629b237(); // 0x171231
    char v5 = v4; // 0x171236
    __asm_out_135(45, v5);
    int64_t v6 = v1 & 0xffffffff; // 0x171238
    char * v7 = (char *)(v6 - 42); // 0x171239
    *v7 = *v7 + v5;
    *(int32_t *)v6 = (int32_t)v1;
    unknown_26104b44();
    int64_t v8 = a3 & -256 | (int64_t)(*(char *)(v1 - 54) + (char)a3); // 0x171249
    int64_t v9; // 0x17122c
    *(char *)a2 = *(char *)&v9 + v5;
    int64_t v10 = unknown_24127a55(); // 0x17124f
    uint32_t v11 = (int32_t)a4 % 32; // 0x171258
    int64_t v12 = v8; // 0x171258
    if (v11 != 0) {
        v12 = (int32_t)v8 << v11 | (int32_t)((v8 & 0xffffffff) >> (int64_t)(33 - v11)) | (int32_t)((char)(v10 + v1) > 24) << v11 - 1;
    }
    unknown_ffffffffc63c6464();
    int64_t result = unknown_21d09a6e(a6); // 0x171264
    int32_t * v13 = (int32_t *)((256 * (int64_t)((char)(a4 / 256) - v3) | a4 & -0xff01) + 0x1b2b00cb + 8 * v12); // 0x17126e
    *v13 = *v13 + (int32_t)v4;
    return result;
}

// Address range: 0x171277 - 0x171279
int64_t function_171277(int64_t a1) {
    // 0x171277
    int64_t result; // 0x171277
    return result;
}

// Address range: 0x171315 - 0x171316
int64_t function_171315(void) {
    // 0x171315
    int64_t result; // 0x171315
    return result;
}

// Address range: 0x171316 - 0x171325
int64_t function_171316(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x171316
    int64_t v1; // 0x171316
    int64_t v2 = v1;
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return (v2 + a4 / 256 + (int64_t)((char)v1 < (char)a3)) % 256 | v2 & -256;
}

// Address range: 0x171387 - 0x171389
int64_t function_171387(void) {
    // 0x171387
    return function_171315();
}

// Address range: 0x17138b - 0x17138e
int64_t function_17138b(void) {
    // 0x17138b
    int64_t result; // 0x17138b
    return result;
}

// Address range: 0x1713c7 - 0x1713c8
int64_t function_1713c7(void) {
    // 0x1713c7
    int64_t result; // 0x1713c7
    return result;
}

// Address range: 0x1713d2 - 0x1713d4
int64_t function_1713d2(void) {
    // 0x1713d2
    int64_t v1; // 0x1713d2
    return function_1713eb(v1, v1, v1);
}

// Address range: 0x1713de - 0x1713eb
int64_t function_1713de(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1713de
    int64_t v1; // 0x1713de
    *(char *)a4 = (char)v1 + (char)(a3 / 256);
    return (int64_t)*(int32_t *)0x183a79bbe680013d;
}

// Address range: 0x1713eb - 0x1713fc
int64_t function_1713eb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1713eb
    int64_t v1; // 0x1713eb
    v1 = function_1713c7();
    // 0x1713ed
    int64_t v2; // 0x1713eb
    __asm_outsd((int16_t)a3, (int32_t)v2);
    return v1 & -256 | (int64_t)__asm_in(-21);
}

// Address range: 0x171415 - 0x17141a
int64_t function_171415(void) {
    // 0x171415
    return function_6868f1f5();
}

// Address range: 0x17142b - 0x17142c
int64_t function_17142b(void) {
    // 0x17142b
    int64_t result; // 0x17142b
    return result;
}

// Address range: 0x171430 - 0x171431
int64_t function_171430(void) {
    // 0x171430
    int64_t result; // 0x171430
    return result;
}

// Address range: 0x171433 - 0x171434
int64_t function_171433(void) {
    // 0x171433
    int64_t result; // 0x171433
    return result;
}

// Address range: 0x171455 - 0x1714a2
int64_t function_171455(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffd8dcdf5b(); // 0x171455
    unsigned char v2 = (char)a4; // 0x171460
    unsigned char v3 = v2 % 32; // 0x171460
    int64_t v4; // 0x171455
    if (v3 != 0) {
        char * v5 = (char *)(v1 + 8 * v4); // 0x171460
        unsigned char v6 = *v5; // 0x171460
        *v5 = v6 << v3 | (char)((int16_t)v6 >> (int16_t)(9 - v3));
    }
    int64_t v7 = a3 & -256 | (int64_t)(*(char *)0x21b2210f | (char)a3); // 0x17145a
    int32_t * v8 = (int32_t *)(v7 - 0x3f115c5f); // 0x171463
    *v8 = *v8 + (int32_t)a4;
    int64_t v9 = __asm_wait(); // 0x17146e
    char * v10 = (char *)v7; // 0x17146f
    *v10 = v2;
    *v10 = (char)v4;
    int64_t v11 = v9 & -256; // 0x17147f
    if (*(int32_t *)(a2 + 67) != -(int32_t)a2) {
        v11 = function_171430();
    }
    // 0x171481
    *(char *)0x208c7ff1 = *(char *)0x208c7ff1 ^ (char)(v11 / 256);
    unknown_3690e92();
    unknown_2d41de34();
    int64_t result = unknown_fffffffff621ec9f(); // 0x17149e
    if ((char)(v4 / 256) >= -24) {
        result = function_17142b();
    }
    // 0x1714a0
    *(int32_t *)a1 = __asm_insd(-0x1751);
    return result;
}

// Address range: 0x1714c1 - 0x171541
int64_t function_1714c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a3;
    int64_t v2; // 0x1714c1
    char * v3 = (char *)(v2 + 0x62000359); // 0x1714c1
    *v3 = *v3 + (char)a3;
    uint32_t v4 = *(int32_t *)&v1; // 0x1714c9
    uint32_t v5 = v4 + (int32_t)a2; // 0x1714c9
    *(int32_t *)a3 = v5;
    if (v5 >= v4) {
        int64_t result = unknown_688fc139(); // 0x171533
        int32_t * v6 = (int32_t *)result; // 0x171538
        *v6 = *v6 + (int32_t)result;
        return result;
    }
    int64_t result2 = unknown_6ca48edf(); // 0x1714d9
    int32_t * v7 = (int32_t *)(a2 + 96); // 0x1714de
    *v7 = *v7 + (int32_t)a1;
    return result2;
}

// Address range: 0x171588 - 0x171633
int64_t function_171588(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x171588
    int64_t v1; // 0x171588
    int64_t v2 = v1;
    int64_t v3 = ((v2 + 24) % 256 | v2 & 0xffffff00) + a1 & 0xffffffff; // 0x17158c
    int64_t v4 = (v3 | 0x100000000 * a3) % (int64_t)*(int32_t *)(v3 - 0x31d054f3); // 0x17158e
    __asm_wait();
    int64_t v5 = v4 | a2;
    *(int32_t *)-0x6eb01043dda6fe18 = (int32_t)v1;
    if ((int32_t)v5 != 0) {
        int64_t result = v1 & 0xffffffff; // 0x171599
        *(char *)0xf0f982c = *(char *)0xf0f982c + (char)(v1 / 256);
        __asm_fbld(*(float80_t *)(result - 4));
        return result;
    }
    unsigned char v6 = (char)a4;
    bool v7; // 0x171588
    int64_t v8 = (v5 & 0xffffffff) + (v7 ? -4 : 4); // 0x1715a6
    unknown_ffffffff8b0c46af();
    __asm_outsd((int16_t)v4, *(int32_t *)v8);
    unsigned char v9 = v6 % 32; // 0x1715af
    if (v9 != 0) {
        *(char *)a4 = v6 << 8 - v9 | v6 >> v9;
    }
    int32_t * v10 = (int32_t *)(v8 + 0x1cb8714b); // 0x1715b2
    uint32_t v11 = *v10; // 0x1715b2
    *v10 = v11 - 0xab6fe18;
    int64_t v12 = unknown_fffffffff21852c2(); // 0x1715bc
    int64_t result2 = (a4 / 256 + (int64_t)(v11 > 0xab6fe17) + v12) % 256 | v12 & -256; // 0x1715c2
    int32_t * v13 = (int32_t *)(result2 + 2 * v1); // 0x1715c4
    *v13 = *v13 + (int32_t)v4;
    return result2;
}

// Address range: 0x17167c - 0x171680
int64_t function_17167c(int64_t a1) {
    // 0x17167c
    int64_t v1; // 0x17167c
    return v1 | 21;
}
