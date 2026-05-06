/*
 * Targeted RetDec C for native executable gap queue batch 488.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x110fbf-0x1111bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1111bf-0x1113bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1113bf-0x1115bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1115bf-0x1117bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1117bf-0x1119bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x42c893-0x42ca93 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42ca93-0x42cc93 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42cc93-0x42ce93 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g1;
extern int g2;
extern int g3;
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

int64_t function_110fbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_110fe2(void);
int64_t function_111028(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_111073(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1111c6(void);
int64_t function_111211(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_11125c(int64_t a1);
int64_t function_111277(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_111355(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1113b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1113e4(void);
int64_t function_1113fa(void);
int64_t function_111439(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_11146b(int64_t a1);
int64_t function_111517(int64_t a1, int64_t a2);
int64_t function_111541(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_111621(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11163e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_111667(void);
int64_t function_1116b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_111716(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_111757(void);
int64_t function_111776(void);
int64_t function_111781(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_111784(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1117a6(int64_t a1);
int64_t function_1117ae(void);
int64_t function_1117bb(void);
int64_t function_1117bd(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_111805(int64_t a1);
int64_t function_11187e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1118f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11191a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1119af(int64_t a1);
int64_t function_1f9b54a();
int64_t function_2f7c4fa2();
int64_t function_42c889();
int64_t function_42c893(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_42cb5c(void);
int64_t function_42cbf1(void);
int64_t function_42cbf4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_42cc1b(void);
int64_t function_42cc20(void);
int64_t function_42cc29(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_42cce2(void);
int64_t function_42cce5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_43a13c30();
int64_t function_7c14717();
int64_t function_ffffffffe81358d2();
int64_t function_ffffffffe83fb265();
int64_t unknown_10df11e8();
int64_t unknown_14e17e5();
int64_t unknown_1c49d1ba();
int64_t unknown_1c702429();
int64_t unknown_2848b1c0();
int64_t unknown_3d12fd8b();
int64_t unknown_61076a34();
int64_t unknown_65a0e528();
int64_t unknown_6958b6af();
int64_t unknown_6c9bdc48();
int64_t unknown_70771d62();
int64_t unknown_7211b5fc();
int64_t unknown_ffffffff88247d13();
int64_t unknown_ffffffff98be7acb();
int64_t unknown_ffffffff9914a88e();
int64_t unknown_ffffffff9c5ad994();
int64_t unknown_ffffffffa2397ff2();
int64_t unknown_ffffffffa65668f1();
int64_t unknown_ffffffffb211c244();
int64_t unknown_ffffffffb8dd8ee9();
int64_t unknown_ffffffffbe0ff2b4();
int64_t unknown_ffffffffc27a201e();
int64_t unknown_ffffffffc9a80b55();
int64_t unknown_ffffffffd01bb6be();
int64_t unknown_ffffffffec9f62fc();
int64_t unknown_fffffffff3b8bfa5();

// Address range: 0x110fbf - 0x110fd0
int64_t function_110fbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    bool v2; // 0x110fbf
    int64_t v3 = v2 ? 0xffffffff : 1; // 0x110fc0
    char * v4 = (char *)(a4 - 101); // 0x110fc5
    *v4 = *v4 + (char)a3;
    *(int32_t *)v1 = *(int32_t *)&v1 | (int32_t)(v3 + a1);
    int64_t result; // 0x110fbf
    return result;
}

// Address range: 0x110fe2 - 0x110fea
int64_t function_110fe2(void) {
    // 0x110fe2
    return unknown_10df11e8();
}

// Address range: 0x111028 - 0x11102c
int64_t function_111028(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x111028
    int64_t result; // 0x111028
    int32_t * v1 = (int32_t *)(result - 81); // 0x111028
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x111073 - 0x1110fd
int64_t function_111073(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x111073
    int64_t v1; // 0x111073
    int64_t v2 = v1 ^ 30; // 0x1110d5
    *(int32_t *)a1 = (int32_t)v2;
    int64_t v3; // 0x111073
    int32_t * v4 = (int32_t *)((v1 & -256 | v3 / 256 + v2 & 197 | 58) + 0x27a09f68); // 0x1110e0
    int32_t v5 = v1; // 0x1110e0
    *v4 = *v4 + v5;
    int32_t * v6 = (int32_t *)(a3 + 109); // 0x1110e9
    *v6 = *v6 + v5;
    bool v7; // 0x111073
    uint64_t result = unknown_7211b5fc((v7 ? -4 : 4) + a1); // 0x1110f6
    *(char *)v3 = *(char *)&v3 + (char)(result / 256);
    return result;
}

// Address range: 0x1111c6 - 0x1111c7
int64_t function_1111c6(void) {
    // 0x1111c6
    int64_t result; // 0x1111c6
    return result;
}

// Address range: 0x111211 - 0x11123b
int64_t function_111211(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 - 75); // 0x111217
    *v1 = *v1 - (char)(a3 / 256);
    int64_t v2; // 0x111211
    int64_t v3 = v2 & -256; // 0x11121a
    int32_t * v4 = (int32_t *)v3; // 0x11121d
    uint32_t v5 = *v4; // 0x11121d
    uint32_t v6 = v5 + (int32_t)v3; // 0x11121d
    *v4 = v6;
    int64_t v7 = v3 - (v6 < v5 ? 0x8a6c6b0d : 0x8a6c6b0c); // 0x11121f
    char v8 = *(char *)0x1ebe2e2b; // 0x111224
    *(char *)0x1ebe2e2b = v8 + (char)((uint64_t)v2 / 256);
    return v7 + 195 & 191 | v7 & 0xffffff00;
}

// Address range: 0x11125c - 0x11125d
int64_t function_11125c(int64_t a1) {
    // 0x11125c
    int64_t result; // 0x11125c
    return result;
}

// Address range: 0x111277 - 0x111350
int64_t function_111277(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t v2; // 0x111277
    int64_t v3 = v2 ^ 225; // 0x111277
    *(char *)(a4 - 0x75d9c9ba) = -8;
    char * v4 = (char *)(a3 + (int64_t)&g1); // 0x111280
    char v5 = *v4 + (char)v3; // 0x111280
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x111280
    *v4 = v5;
    *(char *)(9 * v3) = (char)(v5 >= 0);
    int64_t v7 = v3; // 0x11128a
    int64_t v8 = a4; // 0x11128a
    int64_t v9 = a2; // 0x11128a
    int64_t v10; // 0x111277
    int64_t v11; // 0x111277
    int64_t v12; // 0x111277
    if (v6 % 2 == 0) {
        goto lab_0x1112d0;
    } else {
        // 0x11128c
        *(char *)v1 = *(char *)&v1 ^ (char)a3;
        int64_t v13 = unknown_ffffffff9c5ad994(); // 0x11128e
        int3_t v14; // 0x111277
        *(float32_t *)0x7d125747 = (float32_t)__frontend_reg_load_fpr(v14);
        v10 = v13;
        v11 = a4;
        v12 = a3;
        v9 = a2;
        goto lab_0x111299;
    }
  lab_0x1112d0:;
    // 0x1112d0
    bool v15; // 0x111277
    int64_t v16 = v15 ? -4 : 4;
    int32_t v17 = *(int32_t *)(v8 - 0x7741c839); // 0x1112d0
    int3_t v18; // 0x111277
    __frontend_reg_load_fpr(v18);
    int3_t v19 = v18 + 1; // 0x1112db
    char v20 = *(char *)0xa16a6472; // 0x1112df
    *(char *)0xa16a6472 = v20 - (char)(v7 / 256);
    uint32_t v21 = (int32_t)v7; // 0x1112e2
    int64_t v22 = v7 & 0xffffffff; // 0x1112ec
    int64_t v23 = v16 + (int64_t)(v17 + (int32_t)v9); // 0x1112ed
    uint32_t v24 = *(int32_t *)v23; // 0x1112ee
    int64_t v25 = v24; // 0x1112ee
    int64_t v26 = v23 + v16; // 0x1112ee
    int32_t * v27 = (int32_t *)v26;
    *v27 = (int32_t)(v21 < 0x845f0001) - (int32_t)v26 + *v27;
    *(int32_t *)v1 = __asm_insd(0x64ae);
    char * v28 = (char *)(2 * v25 + 0x676013d); // 0x1112f6
    unsigned char v29 = *v28; // 0x1112f6
    *v28 = v29 / 128 | 2 * v29;
    char v30 = v24; // 0x1112ff
    char v31 = *(char *)v22; // 0x1112ff
    char v32 = v30 - v31; // 0x1112ff
    int3_t v33 = v19; // 0x111301
    v10 = v25;
    v11 = v22;
    v12 = 0xa16a64ae;
    v9 = v26;
    int64_t result2; // 0x111277
    while (((v32 ^ v30) & (v31 ^ v30)) >= 0) {
        // 0x111303
        if (llvm_ctpop_i8(v32) % 2 != 0) {
            uint32_t v34 = v24 / 2 % 128 | v24 & -256; // 0x111305
            uint32_t v35 = v34 + (int32_t)v1; // 0x111307
            result2 = 0x7400b33e;
            if (v35 >= v34 && v35 != 0) {
                // 0x11134d
                unknown_65a0e528();
                int64_t result = __asm_iretd(); // 0x111327
                *(char *)v1 = __asm_insb(0x64ae);
                *v27 = *v27 + 0x7400b33e;
                return result;
            }
            return result2;
        }
        // 0x11131d
        result2 = v25;
        if (v32 == 0) {
            // 0x11130b
            return result2;
        }
        // 0x1112ce
        *(int32_t *)0xa16a64ae = *(int32_t *)0xa16a64ae + v21;
        v17 = *(int32_t *)(v22 - 0x7741c839);
        __frontend_reg_load_fpr(v19);
        v19++;
        *(char *)0xa16a6472 = *(char *)0xa16a6472 - (char)(v25 / 256);
        v21 = (int32_t)v25;
        v22 = v25 & 0xffffffff;
        v23 = v16 + (int64_t)(v17 + (int32_t)v26);
        v24 = *(int32_t *)v23;
        v25 = v24;
        v26 = v23 + v16;
        v27 = (int32_t *)v26;
        *v27 = (int32_t)(v21 < 0x845f0001) - (int32_t)v26 + *v27;
        *(int32_t *)v1 = __asm_insd(0x64ae);
        v28 = (char *)(2 * v25 + 0x676013d);
        v29 = *v28;
        *v28 = v29 / 128 | 2 * v29;
        v30 = v24;
        v31 = *(char *)v22;
        v32 = v30 - v31;
        v33 = v19;
        v10 = v25;
        v11 = v22;
        v12 = 0xa16a64ae;
        v9 = v26;
    }
    goto lab_0x111299;
  lab_0x111299:
    // 0x111299
    v8 = v11;
    int64_t v36 = v10;
    unsigned char v37 = *(char *)(v36 + 0x78013d00) ^ (char)v36; // 0x111299
    unsigned char v38 = llvm_ctpop_i8(v37); // 0x111299
    v18 = v33;
    v7 = v36 & -256 | (int64_t)v37;
    if (v38 % 2 != 0) {
        uint64_t v39 = v12;
        uint32_t v40 = *(int32_t *)0x78a8c38ec00e2ad1; // 0x1112a2
        int64_t result3 = v40; // 0x1112a2
        *(char *)v39 = (char)(v39 / 256);
        __asm_out_133((int16_t)v39, v40);
        result2 = result3;
        if (v8 != 1) {
          lab_0x11130b:
            // 0x11130b
            return result2;
        }
        char * v41 = (char *)((v2 & -0xff01 | (int64_t)&g2) + 112); // 0x1112b2
        *v41 = *v41 + (char)((int64_t)&g2 >> 8);
        char v42 = *(char *)0x1185cebc; // 0x1112b5
        *(char *)0x1185cebc = v42 + (char)((int64_t)&g2 >> 8);
        return result3;
    }
    goto lab_0x1112d0;
}

// Address range: 0x111355 - 0x111374
int64_t function_111355(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_sti(); // 0x111355
    int64_t v2 = v1 + 0xdff3d145; // 0x111360
    int32_t * v3 = (int32_t *)(v2 & 0xffffffff); // 0x111365
    *v3 = *v3 + (int32_t)a3;
    char * v4 = (char *)(a1 + 76); // 0x111367
    *v4 = *v4 | (char)a4;
    return v2 & 0xffffff00 | (v1 + 71) % 256;
}

// Address range: 0x1113b2 - 0x1113c6
int64_t function_1113b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1113b2
    int64_t v1; // 0x1113b2
    int32_t * v2 = (int32_t *)(v1 + 0x7df0c80a); // 0x1113b2
    *v2 = *v2 + (int32_t)a4;
    int64_t result = unknown_2848b1c0(); // 0x1113ba
    *(int64_t *)a5 = result + a5;
    char * v3 = (char *)result; // 0x1113c2
    *v3 = *v3 - 6;
    return result;
}

// Address range: 0x1113e4 - 0x1113e9
int64_t function_1113e4(void) {
    // 0x1113e4
    return function_ffffffffe83fb265();
}

// Address range: 0x1113fa - 0x1113fb
int64_t function_1113fa(void) {
    // 0x1113fa
    int64_t result; // 0x1113fa
    return result;
}

// Address range: 0x111439 - 0x111469
int64_t function_111439(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = a4; // bp-8, 0x11143e
    int64_t v3; // 0x111439
    char * v4 = (char *)(v3 - 128); // 0x11143f
    *v4 = *v4 | (char)(v3 / 256);
    int64_t v5 = unknown_6c9bdc48(); // 0x111442
    int64_t v6; // 0x111439
    *(int32_t *)v6 = *(int32_t *)&v6 & (int32_t)a3;
    char * v7 = (char *)(a4 - 0x320a1a62 + 2 * v3); // 0x111449
    *v7 = *v7 + (char)v5;
    uint16_t v8 = (int16_t)v5; // 0x111450
    uint16_t v9 = (int16_t)(a3 / 256) % 256; // 0x111450
    *(char *)(a1 - 0x64fe621e) = (char)a4;
    int32_t * v10 = (int32_t *)(8 * a3 + a4); // 0x11145d
    *v10 = *v10 | -0x485ffe18;
    int32_t v11 = *(int32_t *)&v1; // 0x111464
    *(int32_t *)v1 = v11 - (int32_t)(int64_t)&v2;
    return v5 & -0x10000 | (int64_t)(v8 / v9 % 256) | (int64_t)(256 * (v8 % v9));
}

// Address range: 0x11146b - 0x11146e
int64_t function_11146b(int64_t a1) {
    // 0x11146b
    int64_t v1; // 0x11146b
    *(int32_t *)a1 = (int32_t)v1;
    return function_1113fa();
}

// Address range: 0x111517 - 0x111523
int64_t function_111517(int64_t a1, int64_t a2) {
    // 0x111517
    bool v1; // 0x111517
    int64_t v2 = v1 ? -1 : 1; // 0x111517
    return function_1f9b54a(v2 + a1, v2 + a2);
}

// Address range: 0x111541 - 0x111620
int64_t function_111541(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x111541
    int64_t v1; // 0x111541
    uint64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = a1;
    int32_t * v5 = (int32_t *)(a1 + 0x3f9d9f9a); // 0x111541
    uint32_t v6 = *v5 + (int32_t)v1; // 0x111541
    *v5 = v6;
    if (v6 >= 1) {
        uint32_t v7 = (int32_t)v1; // 0x111555
        int32_t v8 = v7 + 0x582984ff; // 0x111555
        return v1 & -0xff01 | 256 * (64 * (int64_t)(v8 == 0) | (int64_t)(v7 < 0xa7d67b01) | 128 * (int64_t)(v8 < 0) | 16 * (int64_t)(v7 % 16 > 16) | 4 * (int64_t)(llvm_ctpop_i8((char)v8) % 2 == 0)) | 512;
    }
    // 0x111583
    unknown_3d12fd8b();
    int32_t v9 = 2 * (int32_t)a4; // 0x11158a
    if (v9 >= 0) {
        int32_t * v10 = (int32_t *)((int64_t)v9 + 61); // 0x111605
        *v10 = *v10 + (int32_t)v4;
        int32_t * v11 = (int32_t *)(v3 - 57); // 0x11160a
        *v11 = *v11 + (int32_t)v4;
        unknown_ffffffff88247d13();
        return unknown_ffffffffc27a201e();
    }
    // 0x11158e
    int64_t v12; // 0x111541
    char v13 = *(char *)&v12; // 0x11158e
    uint32_t v14 = *(int32_t *)&v4; // 0x111590
    bool v15; // 0x111541
    int64_t v16 = v15 ? -4 : 4; // 0x111590
    int64_t v17 = v4 + v16; // 0x111590
    char * v18 = (char *)(v17 - 0x1728993a); // 0x111591
    *v18 = (char)(*(int32_t *)&v3 < v14) - (char)v2 + *v18;
    int32_t * v19 = (int32_t *)v17; // 0x111597
    int32_t v20 = *v19; // 0x111597
    *v19 = v20 + (int32_t)(256 * (int64_t)(v13 + (char)(v2 / 256)) | v2 & 0xffff00ff);
    __asm_hlt(v17, v3 + v16);
    return unknown_fffffffff3b8bfa5();
}

// Address range: 0x111621 - 0x11163a
int64_t function_111621(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x111621
    unknown_1c702429();
    int64_t result = unknown_61076a34(); // 0x11162e
    int64_t * v1 = (int64_t *)result; // 0x111633
    *v1 = *v1 + result;
    char * v2 = (char *)result; // 0x111636
    *v2 = *v2 + 78;
    return result;
}

// Address range: 0x11163e - 0x111656
int64_t function_11163e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11163e
    unknown_ffffffffb211c244();
    bool v1; // 0x11163e
    return unknown_ffffffffc9a80b55((v1 ? -4 : 4) + a1);
}

// Address range: 0x111667 - 0x111668
int64_t function_111667(void) {
    // 0x111667
    int64_t result; // 0x111667
    return result;
}

// Address range: 0x1116b6 - 0x1116eb
int64_t function_1116b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = unknown_ffffffffd01bb6be(); // 0x1116b8
    unsigned char v3 = (char)a2;
    bool v4; // 0x1116b6
    char v5 = v4; // 0x1116bd
    int64_t v6; // 0x1116b6
    unsigned char v7 = v5 + (char)v6; // 0x1116bd
    char v8 = v3 - v7; // 0x1116bd
    bool v9 = v4 ? v7 != -1 | v8 - v5 > v3 : v7 > v3; // 0x1116bd
    *(char *)a2 = v8;
    if (*(int32_t *)v2 + (int32_t)v2 != (int32_t)v9) {
        function_111667();
    }
    int64_t v10 = unknown_ffffffff98be7acb(); // 0x1116c5
    int32_t * v11 = (int32_t *)(v6 - 0x10fe17f5); // 0x1116d3
    *v11 = *v11 + (int32_t)a1;
    *(int32_t *)0xc0108e544742376 = (int32_t)((v10 + 194) % 256 | v10 & 0xffffff00);
    unknown_ffffffffb8dd8ee9();
    return (int64_t)*(int32_t *)&v1;
}

// Address range: 0x111716 - 0x11174f
int64_t function_111716(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x111716
    int64_t v1; // 0x111716
    int32_t * v2 = (int32_t *)(v1 - 0x49a90336); // 0x111718
    *v2 = *v2 + (int32_t)v1;
    int64_t v3 = __asm_iretd(); // 0x11171e
    char v4 = *(char *)(a1 - 0x6c8fe18); // 0x11171f
    uint64_t v5 = a4 - 1; // 0x111727
    char * v6 = (char *)(v1 - 0x17e27ca1); // 0x11172b
    *v6 = *v6 - (char)(v5 / 256);
    int32_t * v7 = (int32_t *)(a1 + 61 + 8 * v5); // 0x111731
    *v7 = *v7 + (int32_t)((v3 + v5) % 256 | v3 & 0xffffff00);
    int32_t * v8 = (int32_t *)((256 * (int64_t)((char)(a3 / 256) - v4) | a3 & -0xff01) - 51); // 0x111739
    uint32_t v9 = *v8; // 0x111739
    uint32_t v10 = v9 + (int32_t)v5; // 0x111739
    *v8 = v10;
    char * v11 = (char *)(v1 + 4 * v5); // 0x11173c
    *v11 = *v11 + (char)v5 + (char)(v10 < v9);
    bool v12; // 0x111716
    return function_ffffffffe81358d2((v12 ? -1 : 1) + a1);
}

// Address range: 0x111757 - 0x111759
int64_t function_111757(void) {
    // 0x111757
    return function_1117ae();
}

// Address range: 0x111776 - 0x11177b
int64_t function_111776(void) {
    // 0x111776
    return function_7c14717();
}

// Address range: 0x111781 - 0x111784
int64_t function_111781(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x111781
    int64_t result; // 0x111781
    return result;
}

// Address range: 0x111784 - 0x1117a6
int64_t function_111784(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x111784
    int64_t result; // 0x111784
    uint64_t v1 = result;
    int32_t v2 = *(int32_t *)(a2 + 0x40f8c28d + v1); // 0x111784
    char * v3 = (char *)((int64_t)(v2 & (int32_t)a4) - 0x516cb07c); // 0x11178e
    *v3 = (char)(v1 / 256);
    int32_t * v4 = (int32_t *)(a2 - 123); // 0x111796
    *v4 = *v4 + (int32_t)(256 * (int64_t)*v3 | v1 & 0xffff00ff);
    return result;
}

// Address range: 0x1117a6 - 0x1117ae
int64_t function_1117a6(int64_t a1) {
    // 0x1117a6
    int64_t v1; // 0x1117a6
    __asm_out_134(98, (char)v1);
    return unknown_ffffffffbe0ff2b4();
}

// Address range: 0x1117ae - 0x1117b8
int64_t function_1117ae(void) {
    // 0x1117ae
    int64_t result; // 0x1117ae
    return result;
}

// Address range: 0x1117bb - 0x1117bd
int64_t function_1117bb(void) {
    // 0x1117bb
    return function_111805((int64_t)&g3);
}

// Address range: 0x1117bd - 0x111805
int64_t function_1117bd(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x1117bd
    int64_t v1; // 0x1117bd
    uint64_t v2 = v1;
    *(char *)v2 = (char)(v2 & a3 / 256);
    char * v3 = (char *)(a4 + 0x275c0773); // 0x1117bf
    *v3 = *v3 | (char)(a4 / 256);
    int64_t v4; // 0x1117bd
    int64_t v5 = (int64_t)(*(int32_t *)&v4 + (int32_t)a1); // 0x1117c5
    unsigned char v6 = *(char *)0x1fc789ce; // 0x1117c7
    unsigned char v7 = (char)(v2 / 256); // 0x1117c7
    char v8 = v6 + v7; // 0x1117c7
    unsigned char v9 = llvm_ctpop_i8(v8); // 0x1117c7
    *(char *)0x1fc789ce = v8;
    int64_t v10 = (int64_t)*(int32_t *)(v1 - 109); // 0x1117d5
    int64_t v11 = 41 * v10 != 0x2900000000 * v10 >> 32; // 0x1117d9
    bool v12; // 0x1117bd
    *(int64_t *)((v1 & 0xffffffff) - 8) = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 64 * (int64_t)(v8 == 0) | 128 * (int64_t)(v8 < 0) | 16 * (int64_t)(v6 % 16 + v7 % 16 > 15) | 4 * (int64_t)(v9 % 2 == 0) | v11 | 2048 * v11 | 2;
    __asm_int(28);
    int64_t v13 = unknown_14e17e5(); // 0x1117df
    int32_t * v14 = (int32_t *)(v5 + 14); // 0x1117e5
    *v14 = *v14 | (int32_t)v2;
    int64_t v15 = unknown_ffffffffa2397ff2(); // 0x1117e8
    int64_t result = v15 | 256 * v13 & 0xff00; // 0x1117f2
    int32_t * v16 = (int32_t *)result; // 0x1117fc
    *v16 = *v16 + (int32_t)result;
    *(char *)v5 = (char)v15;
    int32_t * v17 = (int32_t *)(result + 0x103efe4e); // 0x1117ff
    *v17 = *v17 + 0x3dc062ff;
    return result;
}

// Address range: 0x111805 - 0x111806
int64_t function_111805(int64_t a1) {
    // 0x111805
    int64_t result; // 0x111805
    return result;
}

// Address range: 0x11187e - 0x1118f5
int64_t function_11187e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11187e
    int64_t v1; // 0x11187e
    int64_t v2 = v1 + a1; // 0x11187e
    int64_t v3 = v2 & 0xffffffff; // 0x11187e
    int32_t v4 = v2;
    if ((*(char *)(v3 + 0x4c0570d5) || (char)v1) < 0) {
        // 0x1118eb
        return unknown_ffffffffa65668f1(v4);
    }
    // 0x111888
    unknown_ffffffff9914a88e(v4);
    int32_t * v5 = (int32_t *)(a2 + 78); // 0x11188e
    *v5 = *v5 & -24;
    int32_t * v6 = (int32_t *)(a3 - 0x12122da8); // 0x111892
    *v6 = *v6 + (int32_t)v1;
    *(int64_t *)v1 = v3;
    unknown_6958b6af();
    int64_t result = unknown_1c49d1ba(); // 0x1118b4
    *(char *)-0x22ecfe77 = *(char *)-0x22ecfe77 + 17;
    return result;
}

// Address range: 0x1118f6 - 0x11190b
int64_t function_1118f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1118f6
    unknown_ffffffffec9f62fc();
    int64_t result = a4 & 0xffffffff ^ 0x3201e8af; // 0x1118fc
    char * v1 = (char *)result; // 0x111907
    *v1 = *v1 + 84;
    return result;
}

// Address range: 0x11191a - 0x111977
int64_t function_11191a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x11191a
    int64_t result; // 0x11191a
    bool v1; // 0x11191a
    if (v1) {
        // 0x11191c
        return result;
    }
    if (a4 != 0) {
        // 0x11196f
        return a2 & 0xffffffff;
    }
    if (v1) {
        int64_t result2 = unknown_70771d62(); // 0x11195b
        *(int32_t *)a1 = (int32_t)result2;
        return result2;
    }
    // 0x11191c
    return result;
}

// Address range: 0x1119af - 0x1119b3
int64_t function_1119af(int64_t a1) {
    // 0x1119af
    int64_t result; // 0x1119af
    return result;
}

// Address range: 0x42c893 - 0x42cb19
int64_t function_42c893(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x42c893
    int64_t v1; // 0x42c893
    int64_t result = v1 ^ 79; // 0x42c893
    unsigned char v2 = *(char *)(v1 - 58); // 0x42c896
    unsigned char v3 = (char)(a4 / 256); // 0x42c896
    uint32_t v4 = *(int32_t *)(v1 + 0x62c2f238); // 0x42c899
    if (v2 == v3) {
        // 0x42c8a1
        return result;
    }
    int64_t v5 = (result - (v2 < v3 ? 83 : 82)) % 256 | v1 & -256; // 0x42c8ef
    int64_t v6 = v5; // 0x42c8f8
    if ((v5 & 0x947210f2) != 0) {
        v6 = function_42c889();
    }
    // 0x42c8fa
    *(char *)a1 = (char)a2;
    bool v7; // 0x42c893
    int64_t v8 = (v7 ? -1 : 1) + a2; // 0x42c8fa
    int32_t * v9 = (int32_t *)(a4 - 38); // 0x42c8fb
    int32_t v10 = *v9; // 0x42c8fb
    int32_t v11 = a3; // 0x42c8fb
    int32_t v12 = v10 - v11; // 0x42c8fb
    *v9 = v12;
    if (((v12 ^ v10) & (v10 ^ v11)) < 0) {
        int32_t * v13 = (int32_t *)(a3 - 10); // 0x42c905
        *v13 = *v13 & v4;
        *(char *)0xb233b7e = *(char *)0xb233b7e - 1;
        unsigned char v14 = (char)v6; // 0x42c912
        char v15 = v14 + 25; // 0x42c912
        int64_t v16 = 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | (int64_t)(v14 > 230) | 16 * (int64_t)(v14 % 16 > 6) | 64 * (int64_t)(v15 == 0) | 128 * (int64_t)(v15 < 0) | 2048 * (int64_t)((v15 & (v14 ^ -128)) < 0) | 4 * (int64_t)(llvm_ctpop_i8(v15) % 2 == 0) | 2; // bp-16, 0x42c914
        if (v14 > 230) {
            char * v17 = (char *)(v8 + 0xa0b7a45); // 0x42c974
            *v17 = *v17 + v15;
            *(int32_t *)-0x46236395af3d9dde = (int32_t)(v6 & 0xffffff00 | (int64_t)v15);
            return __asm_sti();
        }
        uint32_t v18 = -0x3ac7ba47 * (int32_t)(int64_t)&v16 ^ 0x5bc6356b; // 0x42c923
        uint32_t v19 = v18 + 0x234affbf; // 0x42c92a
        int64_t v20 = v18 < 0xdcb50041 ? 153 : 152; // 0x42c92f
        return ((int64_t)v19 - v20) % 256 | (int64_t)(v19 & -0x10000 | 0x7a00);
    }
    int64_t v21 = v4; // 0x42c899
    int64_t v22 = v21 & 0xb233b47;
    int16_t v23 = a3; // 0x42c93d
    int32_t * v24 = (int32_t *)v8; // 0x42c93d
    __asm_outsd(v23, *v24);
    int32_t * v25 = (int32_t *)(v21 + 112); // 0x42c944
    int32_t v26 = (int32_t)v6 ^ 0x2a7753c7; // 0x42c944
    *v25 = *v25 | v26;
    int32_t v27 = *v24 | (int32_t)v1; // 0x42c94a
    *v24 = v27;
    if (v27 == 0) {
        int64_t result2 = __asm_int3(v22); // 0x42c9b6
        int32_t * v28 = (int32_t *)(a3 - 47 + v22); // 0x42c9b7
        *v28 = *v28 - (int32_t)v8;
        return result2;
    }
    // 0x42c94e
    *(int32_t *)v22 = __asm_insd(v23);
    __asm_out(121, v26);
    char * v29 = (char *)(a4 - 0x12bed3f9); // 0x42c961
    *v29 = *v29 | 53;
    // 0x42c8a1
    return (int64_t)(v26 - *(int32_t *)(v1 + 0x3b412996));
}

// Address range: 0x42cb5c - 0x42cb61
int64_t function_42cb5c(void) {
    // 0x42cb5c
    return function_43a13c30();
}

// Address range: 0x42cbf1 - 0x42cbf2
int64_t function_42cbf1(void) {
    // 0x42cbf1
    int64_t result; // 0x42cbf1
    return result;
}

// Address range: 0x42cbf4 - 0x42cc02
int64_t function_42cbf4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x42cbf4
    int64_t v1; // 0x42cbf4
    int64_t result = v1;
    *(char *)result = (char)result + (char)(a4 / 256);
    __asm_out(-82, (int32_t)result);
    return result;
}

// Address range: 0x42cc1b - 0x42cc1c
int64_t function_42cc1b(void) {
    // 0x42cc1b
    int64_t result; // 0x42cc1b
    return result;
}

// Address range: 0x42cc20 - 0x42cc21
int64_t function_42cc20(void) {
    // 0x42cc20
    int64_t result; // 0x42cc20
    return result;
}

// Address range: 0x42cc29 - 0x42ccd9
int64_t function_42cc29(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result2 = a6;
    int64_t result; // 0x42cc29
    if (a4 == 0) {
        result = function_42cbf1();
    }
    // 0x42cc2b
    bool v1; // 0x42cc29
    if (*(int32_t *)0xe7ed36c + (int32_t)a3 != (int32_t)v1) {
        // 0x42cc39
        return result;
    }
    uint32_t v2 = (int32_t)result; // 0x42ccb6
    int64_t v3 = __asm_sti(); // 0x42cc67
    if (v2 - 0x71e7537d + (v2 < 0x71e7537d ? -0x4e8bf639 : -0x4e8bf638) < 0) {
        v3 = function_42cc1b();
    }
    uint32_t v4 = (int32_t)a2; // 0x42cc6e
    uint32_t v5 = *(int32_t *)0x861b5be6; // 0x42cc6e
    int64_t result3 = v3; // 0x42cc71
    if (v5 > v4) {
        result3 = function_42cc20();
    }
    int32_t v6 = v4 - v5; // 0x42cc6e
    if (v6 < 0) {
        // 0x42cc76
        __asm_rcl(*(int32_t *)0x861b5c27);
        *(int32_t *)0x861b5c4c = 2 * *(int32_t *)0x861b5c4c;
        return result2;
    }
    unsigned char v7 = llvm_ctpop_i8((char)v6); // 0x42cc6e
    *(int64_t *)((int64_t)&result2 - 8) = 0x4000 * (int64_t)(bool)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | (int64_t)(v5 > v4) | 64 * (int64_t)(v6 == 0) | 16 * (int64_t)(v4 % 16 - v5 % 16 > 15) | 2048 * (int64_t)(((v6 ^ v4) & (v5 ^ v4)) < 0) | 4 * (int64_t)(v7 % 2 == 0) | 2;
    int32_t * v8 = (int32_t *)((a5 & -256 | 205) + 86); // 0x42cc95
    *v8 = *v8 + 0x2e21a808;
    return result3;
}

// Address range: 0x42cce2 - 0x42cce3
int64_t function_42cce2(void) {
    // 0x42cce2
    int64_t result; // 0x42cce2
    return result;
}

// Address range: 0x42cce5 - 0x42ce64
int64_t function_42cce5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x42cce5
    int64_t result; // 0x42cce5
    bool v1; // 0x42cce5
    if (v1) {
        // 0x42cd0b
        return result;
    }
    int32_t v2 = a4;
    if (v2 > -0x2ccc60e3) {
        // 0x42cd23
        float80_t v3; // 0x42cce5
        *(float80_t *)(2 * a3 + 0x6b1eb62 + result) = __asm_fbstp(v3);
        return result;
    }
    int16_t v4 = a3;
    char v5 = result; // 0x42cd85
    __asm_out_136(v4, v5);
    __asm_out_136(v4, v5);
    int16_t v6 = result; // 0x42cd87
    int16_t v7 = (int16_t)a1 % 256; // 0x42cd87
    int16_t v8 = v6 / v7; // 0x42cd87
    *(char *)0x166a7a6399d36d5b = (char)v8;
    __asm_outsb(v4, (char)a2);
    int32_t v9 = v2 == -0x2ccc60e3 ? (int32_t)"ES-128-CBC-SHA" : (int32_t)"ES-128-CBC-SHA" + 1; // 0x42cd94
    *(int32_t *)a1 = (int32_t)a1 - v9;
    __asm_out_136(v4, (char)a4);
    int32_t v10 = (int32_t)(result & 0xffff0000 | (int64_t)(v8 % 256) | (int64_t)(256 * (v6 % v7))) ^ 0x312d5345; // 0x42cd9a
    *(int32_t *)"ES-128-CBC-SHA" = v10;
    if (v10 < 0) {
        // 0x42cda1
        return 0x100000000000000 * result >> 56;
    }
    int64_t v11 = v1 ? -4 : 4; // 0x42cd6d
    return function_2f7c4fa2(v11 + a1, v11 + a2);
}
