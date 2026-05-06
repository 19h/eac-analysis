/*
 * Targeted RetDec C for native executable gap queue batch 250.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x165caa-0x165eaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1660aa-0x1662aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x18bc85-0x18be85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18be85-0x18c085 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18c085-0x18c285 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18c285-0x18c485 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18c485-0x18c685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x311abb-0x311cbb rank=- name=- kind=- bytes=- uncovered=-
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
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
void __asm_out_139(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint64_t __readfsqword(int64_t offset);
uint8_t __readgsbyte(int64_t offset);
uint32_t __readgsdword(int64_t offset);
uint64_t __readgsqword(int64_t offset);
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
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
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
int128_t __asm_pmaxsw(int128_t left, int128_t right);
int128_t __asm_por(int128_t left, int128_t right);
int128_t __asm_pxor(int128_t left, int128_t right);
int128_t __asm_xorps(int128_t left, int128_t right);
int128_t __asm_addps(int128_t left, int128_t right);
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

int64_t function_165caa(int64_t a1, int64_t a2, int64_t a3);
int64_t function_165cf4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_165d16(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_165d3d(void);
int64_t function_165d4d(void);
int64_t function_165d53(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_165d6c(void);
int64_t function_165d77(int64_t a1, int64_t a2);
int64_t function_165da7(int64_t a1);
int64_t function_165e92(int64_t a1, int64_t a2, int64_t a3);
int64_t function_165ea7(void);
int64_t function_1660aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16616d(int64_t a1);
int64_t function_166193(int64_t a1);
int64_t function_1661a0(void);
int64_t function_1661b3(void);
int64_t function_166209(int64_t a1);
int64_t function_16626c(void);
int64_t function_16628b(int64_t result);
int64_t function_18bc16();
int64_t function_18bc7b();
int64_t function_18bc85(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18bcc8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_18bdb4(void);
int64_t function_18bdf5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_18be2b(void);
int64_t function_18be7a(void);
int64_t function_18be7d(void);
int64_t function_18beaa(void);
int64_t function_18bed4(void);
int64_t function_18befe(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_18bf54(int64_t a1, int64_t a2);
int64_t function_18bf82(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18c011(void);
int64_t function_18c04e(int64_t a1);
int64_t function_18c088(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18c0ed(int64_t a1);
int64_t function_18c14c(void);
int64_t function_18c192(void);
int64_t function_18c1a9(void);
int64_t function_18c1c6(void);
int64_t function_18c1d1(void);
int64_t function_18c1f3(int64_t a1, int64_t a2);
int64_t function_18c1f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_18c306(int64_t a1);
int64_t function_18c314(int64_t a1);
int64_t function_18c339(void);
int64_t function_18c346(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18c353(int64_t a1, int64_t a2);
int64_t function_18c368(void);
int64_t function_18c36e(void);
int64_t function_18c374(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18c3be(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_18c40f(void);
int64_t function_18c418(int64_t a1);
int64_t function_18c43c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_18c455(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2013874();
int64_t function_311abb(void);
int64_t function_311ae9(void);
int64_t function_311b69(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_311ba5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_311c30(void);
int64_t function_311c7f(void);
int64_t function_671e6c();
int64_t function_c4258();
int64_t function_ffffffff94832f82();
int64_t function_ffffffffb1de1d66();
int64_t unknown_15360c5();
int64_t unknown_200c151();
int64_t unknown_33bc26b();
int64_t unknown_4c23cbc4();
int64_t unknown_69758a1e();
int64_t unknown_7227ef73();
int64_t unknown_772391();
int64_t unknown_c9401d8();
int64_t unknown_e8f2919();
int64_t unknown_f09eff();
int64_t unknown_ffffffff8e20d252();
int64_t unknown_ffffffffa45f4657();
int64_t unknown_ffffffffab4f0a8c();
int64_t unknown_ffffffffabcead17();
int64_t unknown_ffffffffadb1359f();
int64_t unknown_ffffffffbe277586();
int64_t unknown_ffffffffc819ff01();
int64_t unknown_ffffffffcca9b74a();
int64_t unknown_ffffffffe83ec221();
int64_t unknown_ffffffffe90fd5e3();

// Address range: 0x165caa - 0x165cb4
int64_t function_165caa(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 59); // 0x165caa
    *v1 = *v1 + (int32_t)a2;
    int64_t result; // 0x165caa
    return result;
}

// Address range: 0x165cf4 - 0x165cf6
int64_t function_165cf4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x165cf4
    int64_t v1; // 0x165cf4
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x165d16 - 0x165d2d
int64_t function_165d16(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x165d16
    int64_t v1; // 0x165d16
    *(char *)(v1 + 0x206b01e8) = (char)a3;
    int64_t result = __asm_wait(); // 0x165d23
    char v2 = *(char *)0x670e042b; // 0x165d24
    *(char *)0x670e042b = v2 + (char)((v1 + (256 * a4 ^ 0x6800)) / 256);
    return result;
}

// Address range: 0x165d3d - 0x165d43
int64_t function_165d3d(void) {
    // 0x165d3d
    int64_t result; // 0x165d3d
    return result;
}

// Address range: 0x165d4d - 0x165d52
int64_t function_165d4d(void) {
    // 0x165d4d
    return function_671e6c();
}

// Address range: 0x165d53 - 0x165d64
int64_t function_165d53(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x165d53
    return __asm_wait();
}

// Address range: 0x165d6c - 0x165d77
int64_t function_165d6c(void) {
    // 0x165d6c
    int64_t v1; // 0x165d6c
    int64_t v2 = v1;
    return v2 + 0x83ae60ac + (int64_t)((int32_t)v2 < 0x4db91701) & 0xffffffff;
}

// Address range: 0x165d77 - 0x165d7d
int64_t function_165d77(int64_t a1, int64_t a2) {
    // 0x165d77
    float80_t v1; // 0x165d77
    *(int32_t *)(a1 - 117) = (int32_t)v1;
    int64_t result; // 0x165d77
    return result;
}

// Address range: 0x165da7 - 0x165daa
int64_t function_165da7(int64_t a1) {
    // 0x165da7
    int64_t result; // 0x165da7
    return result;
}

// Address range: 0x165e92 - 0x165e97
int64_t function_165e92(int64_t a1, int64_t a2, int64_t a3) {
    // 0x165e92
    int64_t result; // 0x165e92
    return result;
}

// Address range: 0x165ea7 - 0x165ea9
int64_t function_165ea7(void) {
    // 0x165ea7
    int64_t result; // 0x165ea7
    return result;
}

// Address range: 0x1660aa - 0x1660d2
int64_t function_1660aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int16_t v1 = *(int16_t *)-0x3dee5e18; // 0x1660b0
    int64_t v2; // 0x1660aa
    *(int16_t *)-0x3dee5e18 = (int16_t)((int32_t)v2 < 0x9b2ec901) + (int16_t)a4 + v1;
    unknown_15360c5();
    return __asm_int1();
}

// Address range: 0x16616d - 0x166172
int64_t function_16616d(int64_t a1) {
    // 0x16616d
    int64_t result; // 0x16616d
    *(int32_t *)a1 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x166193 - 0x166194
int64_t function_166193(int64_t a1) {
    // 0x166193
    int64_t result; // 0x166193
    return result;
}

// Address range: 0x1661a0 - 0x1661a2
int64_t function_1661a0(void) {
    // 0x1661a0
    int64_t result; // 0x1661a0
    return result;
}

// Address range: 0x1661b3 - 0x1661b6
int64_t function_1661b3(void) {
    // 0x1661b3
    int64_t result; // 0x1661b3
    return result;
}

// Address range: 0x166209 - 0x16620c
int64_t function_166209(int64_t a1) {
    // 0x166209
    int64_t v1; // 0x166209
    int64_t v2 = v1;
    return (v2 + 138) % 256 | v2 & -256;
}

// Address range: 0x16626c - 0x166271
int64_t function_16626c(void) {
    // 0x16626c
    return function_ffffffff94832f82();
}

// Address range: 0x16628b - 0x166299
int64_t function_16628b(int64_t result) {
    // 0x16628b
    unknown_772391();
    return result;
}

// Address range: 0x18bc85 - 0x18bca8
int64_t function_18bc85(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18bc85
    bool v1; // 0x18bc85
    int64_t v2 = v1 ? 0xffffff9b : 0xffffff9a; // 0x18bc85
    function_18bc16();
    *(int32_t *)-0x4ca04360 = *(int32_t *)-0x4ca04360 & (int32_t)(a1 - v2);
    int64_t v3; // bp-8, 0x18bc85
    return (int64_t)&v3;
}

// Address range: 0x18bcc8 - 0x18bd80
int64_t function_18bcc8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18bcc8
    int64_t v1; // 0x18bcc8
    uint32_t v2 = (int32_t)v1;
    int32_t v3 = a3; // 0x18bcc8
    uint32_t v4 = v2 + v3; // 0x18bcc8
    *(int32_t *)v1 = v4;
    __asm_int1();
    int64_t v5 = 0x2fa8f3e; // bp-8, 0x18bccd
    int64_t v6 = unknown_c9401d8(); // 0x18bcd2
    if (v4 < v2 || v4 == 0) {
        if (a4 == 0) {
            function_18bc7b();
        }
        int64_t result = unknown_ffffffffe90fd5e3(); // 0x18bcdd
        int32_t * v7 = (int32_t *)(a1 - 0x77fec29d); // 0x18bce2
        *v7 = *v7 + (int32_t)a2;
        return result;
    }
    int32_t * v8 = (int32_t *)(4 * v1 - 116 + v6); // 0x18bcf1
    *v8 = *v8 + v3;
    unknown_f09eff();
    char * v9 = (char *)(a2 + 0x1e859c6); // 0x18bd00
    *v9 = *v9 + 74;
    __asm_int(-51);
    unknown_ffffffffabcead17();
    bool v10; // 0x18bcc8
    int32_t * v11 = (int32_t *)(a2 - 0x3f52784 + (v10 ? -4 : 4)); // 0x18bd1b
    *v11 = *v11 + (int32_t)a4;
    int64_t result2 = unknown_ffffffffe83ec221(0xe858f7f1); // 0x18bd2c
    *(int64_t *)((v1 + (int64_t)&v5 & 0xffffffff) - 8) = 0x130c0455;
    unsigned char v12 = *(char *)0xa88bf9d9; // 0x18bd44
    char v13 = v12 + (char)(v1 / 256); // 0x18bd44
    *(char *)0xa88bf9d9 = v13;
    if (v13 >= 0) {
        // 0x18bdb1
        return result2;
    }
    int64_t v14 = unknown_ffffffffa45f4657(); // 0x18bd51
    int32_t * v15 = (int32_t *)(v1 + 0x1e8de74); // 0x18bd58
    *v15 = *v15 + v2;
    int64_t v16 = 0x100000000 * a3 >> 32 & -256 | 182; // 0x18bd60
    uint64_t v17 = 0x2f0bed2a * v16; // 0x18bd60
    int64_t v18 = v17 & 0xffffffdc; // 0x18bd60
    char * v19 = (char *)(v18 + 88); // 0x18bd66
    *v19 = *v19 - (v17 == 0x2f0bed2a00000000 * v16 >> 32 ? -24 : -23);
    *(char *)(v18 + 0xe858f7f1) = (char)(v17 / 256);
    return 2 * (v14 + 256 * ((int64_t)(v13 < v12) - v1) & 0xff00 | v14 & 0x7fff0080) | (int64_t)__asm_in((int16_t)v17);
}

// Address range: 0x18bdb4 - 0x18bdba
int64_t function_18bdb4(void) {
    // 0x18bdb4
    return function_2013874();
}

// Address range: 0x18bdf5 - 0x18bdfd
int64_t function_18bdf5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18bdf5
    int64_t result; // 0x18bdf5
    int32_t * v1 = (int32_t *)(a4 + 0x619200cb + result); // 0x18bdf5
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x18be2b - 0x18be2c
int64_t function_18be2b(void) {
    // 0x18be2b
    int64_t result; // 0x18be2b
    return result;
}

// Address range: 0x18be7a - 0x18be7b
int64_t function_18be7a(void) {
    // 0x18be7a
    int64_t result; // 0x18be7a
    return result;
}

// Address range: 0x18be7d - 0x18be7f
int64_t function_18be7d(void) {
    // 0x18be7d
    return function_18be2b();
}

// Address range: 0x18beaa - 0x18beaf
int64_t function_18beaa(void) {
    // 0x18beaa
    int64_t v1; // 0x18beaa
    return function_18bf54(v1, v1);
}

// Address range: 0x18bed4 - 0x18bed5
int64_t function_18bed4(void) {
    // 0x18bed4
    int64_t result; // 0x18bed4
    return result;
}

// Address range: 0x18befe - 0x18bf53
int64_t function_18befe(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    char * v2 = (char *)(a1 - 0x7892c86b); // 0x18befe
    *v2 = *v2 + (char)a4;
    int32_t * v3 = (int32_t *)(a1 - 111); // 0x18bf04
    int64_t v4; // 0x18befe
    int32_t v5 = *v3 & (int32_t)v4; // 0x18bf04
    *v3 = v5;
    if (v5 >= 0 != v5 != 0) {
        // 0x18bf0a
        *(char *)-0x153fe9 = *(char *)-0x153fe9 + (char)(v4 / 256);
        int32_t v6 = v4 | v4; // 0x18bf16
        *(int32_t *)v4 = v6;
        int64_t v7 = a4 - 1; // 0x18bf18
        int64_t result; // 0x18befe
        if (v7 != 0 == v6 == 0) {
            result = function_18bf82(a1, v1, a3, v7);
        }
        char * v8 = (char *)(v4 + 57); // 0x18bf1a
        *v8 = *v8 + (char)(a3 / 256);
        return result;
    }
    unsigned char v9 = *(char *)&v1; // 0x18bf45
    char * v10 = (char *)(4 * a3 + 0x1e80bd0 + v4); // 0x18bf46
    char v11 = *v10; // 0x18bf46
    char v12 = a4 / 256; // 0x18bf46
    char v13 = v11 + v12; // 0x18bf46
    *v10 = v13;
    int64_t result2 = v4 & -0x10000 | (int64_t)&g1 & -256 | (int64_t)v9; // 0x18bf4d
    if (v13 < 0 == ((v13 ^ v11) & (v13 ^ v12)) < 0) {
        result2 = function_18bed4();
    }
    // 0x18bf53
    return result2;
}

// Address range: 0x18bf54 - 0x18bf5f
int64_t function_18bf54(int64_t a1, int64_t a2) {
    // 0x18bf54
    int64_t v1; // 0x18bf54
    int32_t * v2 = (int32_t *)(a2 + 106 + 2 * v1); // 0x18bf54
    *v2 = (int32_t)a1;
    *(char *)0x14f40b5f = *(char *)0x14f40b5f + (char)(v1 / 256);
    return __asm_iretd(*v2);
}

// Address range: 0x18bf82 - 0x18bfc6
int64_t function_18bf82(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18bf82
    int64_t v1; // 0x18bf82
    int64_t v2 = v1;
    uint64_t result = __asm_hlt(); // 0x18bf82
    bool v3; // 0x18bf82
    if (v3) {
        // 0x18bfc3
        __asm_outsd((int16_t)a3, (int32_t)v1);
        *(char *)v2 = (char)(result / 256 ^ v2);
        return result;
    }
    // 0x18bf87
    return result & -256 | 120;
}

// Address range: 0x18c011 - 0x18c014
int64_t function_18c011(void) {
    // 0x18c011
    int64_t result; // 0x18c011
    return result;
}

// Address range: 0x18c04e - 0x18c04f
int64_t function_18c04e(int64_t a1) {
    // 0x18c04e
    int64_t result; // 0x18c04e
    return result;
}

// Address range: 0x18c088 - 0x18c0c3
int64_t function_18c088(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18c088
    int64_t v1; // 0x18c088
    *(int32_t *)v1 = -0x74c5b7f1;
    int32_t * v2 = (int32_t *)(4 * a1 + 18 + v1); // 0x18c08e
    *v2 = *v2 & -31;
    float80_t v3; // 0x18c088
    *(int16_t *)(v1 + 45) = (int16_t)v3;
    return unknown_200c151();
}

// Address range: 0x18c0ed - 0x18c0ee
int64_t function_18c0ed(int64_t a1) {
    // 0x18c0ed
    int64_t result; // 0x18c0ed
    return result;
}

// Address range: 0x18c14c - 0x18c14d
int64_t function_18c14c(void) {
    // 0x18c14c
    int64_t result; // 0x18c14c
    return result;
}

// Address range: 0x18c192 - 0x18c193
int64_t function_18c192(void) {
    // 0x18c192
    int64_t result; // 0x18c192
    return result;
}

// Address range: 0x18c1a9 - 0x18c1ac
int64_t function_18c1a9(void) {
    // 0x18c1a9
    int64_t result; // 0x18c1a9
    return result;
}

// Address range: 0x18c1c6 - 0x18c1c8
int64_t function_18c1c6(void) {
    // 0x18c1c6
    return function_18c14c();
}

// Address range: 0x18c1d1 - 0x18c1d3
int64_t function_18c1d1(void) {
    // 0x18c1d1
    int64_t v1; // 0x18c1d1
    return function_18c1f9(v1, v1, v1, v1, v1, (int64_t)&g2, (int64_t)&g2);
}

// Address range: 0x18c1f3 - 0x18c1f9
int64_t function_18c1f3(int64_t a1, int64_t a2) {
    // 0x18c1f3
    int64_t v1; // 0x18c1f3
    return (int64_t)((int32_t)v1 - *(int32_t *)(a2 + 0x1e80b40));
}

// Address range: 0x18c1f9 - 0x18c29f
int64_t function_18c1f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    int64_t v2 = a6;
    int64_t result = a7;
    bool v3; // 0x18c1f9
    if (v3) {
        // 0x18c1fb
        unknown_ffffffffc819ff01();
        __asm_outsd((int16_t)a3, (int32_t)a2);
        __asm_in_133(-25);
        return unknown_e8f2919();
    }
    int64_t v4 = (v3 ? -4 : 4) + a1; // 0x18c249
    v2 = (int64_t)&result;
    unknown_ffffffff8e20d252(v4);
    int64_t v5 = __asm_wait(); // 0x18c254
    int32_t * v6 = (int32_t *)(a2 + 0x63a3f665); // 0x18c258
    *v6 = *v6 + (int32_t)a6;
    int64_t v7; // 0x18c1f9
    *(int64_t *)(v7 + 0x3a01e850) = a5;
    int64_t v8 = 0x100000000 * (int64_t)&v2 >> 32; // 0x18c265
    __asm_out((int16_t)a3, (char)v5);
    if (-96 * v8 != -0x6000000000 * v8 >> 32) {
        // 0x18c296
        unknown_ffffffffadb1359f();
        return result;
    }
    // 0x18c26b
    *(char *)v4 = *(char *)&v1;
    int64_t v9 = v3 ? -1 : 1; // 0x18c26b
    return unknown_7227ef73(v4 + v9, v1 + v9);
}

// Address range: 0x18c306 - 0x18c309
int64_t function_18c306(int64_t a1) {
    // 0x18c306
    int64_t result; // 0x18c306
    return result;
}

// Address range: 0x18c314 - 0x18c31d
int64_t function_18c314(int64_t a1) {
    // 0x18c314
    int64_t v1; // 0x18c314
    return v1 & -141;
}

// Address range: 0x18c339 - 0x18c33c
int64_t function_18c339(void) {
    // 0x18c339
    int64_t result; // 0x18c339
    return result;
}

// Address range: 0x18c346 - 0x18c352
int64_t function_18c346(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18c346
    int64_t v1; // 0x18c346
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x18c353 - 0x18c357
int64_t function_18c353(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a2 + 24); // 0x18c353
    int64_t result; // 0x18c353
    *v1 = *v1 ^ (char)result;
    return result;
}

// Address range: 0x18c368 - 0x18c36d
int64_t function_18c368(void) {
    // 0x18c368
    return function_ffffffffb1de1d66();
}

// Address range: 0x18c36e - 0x18c371
int64_t function_18c36e(void) {
    // 0x18c36e
    int64_t result; // 0x18c36e
    return result;
}

// Address range: 0x18c374 - 0x18c391
int64_t function_18c374(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = (int32_t)a3; // 0x18c374
    int64_t v2; // 0x18c374
    uint32_t v3 = *(int32_t *)(a1 + 0x621101e8 + 2 * v2) + v1; // 0x18c374
    *(int32_t *)-0xb83c74e = *(int32_t *)-0xb83c74e - (v3 < v1 ? -72 : -73);
    int64_t v4 = unknown_ffffffffab4f0a8c(); // 0x18c386
    int16_t v5 = (int16_t)v3 % 256 | 0x1400; // 0x18c38d
    char v6 = __asm_in(v5); // 0x18c38d
    __asm_outsb(v5, (char)v2);
    return v4 & -256 | (int64_t)v6;
}

// Address range: 0x18c3be - 0x18c3d0
int64_t function_18c3be(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t result = unknown_4c23cbc4(); // 0x18c3be
    int64_t v1; // 0x18c3be
    char * v2 = (char *)(4 * v1 + a3); // 0x18c3c3
    *v2 = *v2 + (char)(a3 / 256);
    *(char *)0x781aac5f = *(char *)0x781aac5f - 38;
    return result;
}

// Address range: 0x18c40f - 0x18c413
int64_t function_18c40f(void) {
    // 0x18c40f
    int64_t v1; // 0x18c40f
    int64_t result = function_18c43c(v1, v1, v1, v1, (int64_t)&g2, (int64_t)&g2, (int64_t)&g2); // 0x18c411
    return result;
}

// Address range: 0x18c418 - 0x18c420
int64_t function_18c418(int64_t a1) {
    // 0x18c418
    return unknown_69758a1e(a1);
}

// Address range: 0x18c43c - 0x18c449
int64_t function_18c43c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x18c43c
    int64_t v1; // 0x18c43c
    *(int32_t *)a1 = (int32_t)(v1 | a2);
    int64_t v2; // 0x18c43c
    *(char *)a4 = *(char *)&v2 + (char)a3;
    __asm_out_134((int16_t)a6, (int32_t)v1);
    return unknown_ffffffffcca9b74a();
}

// Address range: 0x18c455 - 0x18c5ee
int64_t function_18c455(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x18c455
    int64_t v1; // 0x18c455
    uint32_t v2 = (int32_t)v1 >> 31; // 0x18c461
    char * v3 = (char *)((int64_t)v2 + 106); // 0x18c462
    *v3 = *v3 + (char)(a4 / 256);
    int64_t v4 = unknown_33bc26b(); // 0x18c465
    char * v5 = (char *)(v4 - 0x7eb76400); // 0x18c46a
    *v5 = *v5 + (char)v4;
    char v6 = __asm_in((int16_t)v2); // 0x18c470
    char * v7 = (char *)(v4 & -256 | (int64_t)v6); // 0x18c471
    *v7 = (*v7 | v6) + v6;
    return function_c4258(a1, a2, v1, a4);
}

// Address range: 0x311abb - 0x311abd
int64_t function_311abb(void) {
    // 0x311abb
    int64_t result; // 0x311abb
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)v1 + (int32_t)result;
    return result;
}

// Address range: 0x311ae9 - 0x311aea
int64_t function_311ae9(void) {
    // 0x311ae9
    int64_t result; // 0x311ae9
    return result;
}

// Address range: 0x311b69 - 0x311b79
int64_t function_311b69(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x311b69
    int64_t v1; // 0x311b69
    int64_t v2 = v1;
    unsigned char v3 = (char)a4; // 0x311b69
    unsigned char v4 = v3 + (char)(a3 / 256); // 0x311b69
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a1;
    return 0x10000 * (int32_t)(v2 & 0xff00 | (int64_t)(v4 + (char)(v4 < v3) + (char)v2)) >> 16;
}

// Address range: 0x311ba5 - 0x311bbf
int64_t function_311ba5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x311ba5
    *(int32_t *)-0x75a5382c = *(int32_t *)-0x75a5382c | 0x37013d00;
    char * v1 = (char *)(a2 - 122 + 4 * a2); // 0x311bb8
    *v1 = *v1 | (char)(a4 / 256);
    int64_t v2; // 0x311ba5
    return (v2 ^ 43) + 0xd8fb2879 & 0xffffffff;
}

// Address range: 0x311c30 - 0x311c31
int64_t function_311c30(void) {
    // 0x311c30
    int64_t result; // 0x311c30
    return result;
}

// Address range: 0x311c7f - 0x311c88
int64_t function_311c7f(void) {
    // 0x311c7f
    unknown_ffffffffbe277586();
    return function_311c30();
}
