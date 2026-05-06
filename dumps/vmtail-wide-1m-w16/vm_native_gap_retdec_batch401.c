/*
 * Targeted RetDec C for native executable gap queue batch 401.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1fbe34-0x1fc034 rank=- name=- kind=- bytes=- uncovered=-
 *   0x31babb-0x31bcbb rank=- name=- kind=- bytes=- uncovered=-
 *   0x31bcbb-0x31bebb rank=- name=- kind=- bytes=- uncovered=-
 *   0x31bebb-0x31c0bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x31c0bb-0x31c2bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x4706ee-0x4708ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x4708ee-0x470aee rank=- name=- kind=- bytes=- uncovered=-
 *   0x470aee-0x470cee rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_18a8df0a();
int64_t function_1fbe34(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1fbe91(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1fbed8(int64_t a1);
int64_t function_1fbeeb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fbefb(int64_t a1);
int64_t function_1fbfd6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_31babb(int64_t a1, int64_t a2);
int64_t function_31bb13(int64_t a1, int64_t a2);
int64_t function_31bb87(void);
int64_t function_31bbae(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_31bbd6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_31bc2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_31bcd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31bd24(void);
int64_t function_31bd32(void);
int64_t function_31bd6e(int64_t a1);
int64_t function_31bd9a(int64_t a1);
int64_t function_31bdc2(void);
int64_t function_31bdda(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31be75(int64_t a1);
int64_t function_31bea6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_31bf05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_31c106(void);
int64_t function_31c134(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_31c1a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_31c26f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_31c295(void);
int64_t function_4706ee(void);
int64_t function_470811(int64_t a1, int64_t a2);
int64_t function_470841(void);
int64_t function_470851(void);
int64_t function_470864(void);
int64_t function_4708b0(void);
int64_t function_4708ca(void);
int64_t function_4708ed(void);
int64_t function_4708f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_47098f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4709e5(void);
int64_t function_470a00(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_470a20(int64_t a1);
int64_t function_470a78(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_470a82(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_470a9e(void);
int64_t function_470ab7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_470aff(void);
int64_t function_470b03(int64_t a1, int64_t a2, int32_t a3);
int64_t function_470b14(int64_t a1);
int64_t function_470b17(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_470c05(void);
int64_t function_470c0d(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10);
int64_t function_4f27c02c();
int64_t function_6a82ded4();
int64_t function_ffffffff97c2093d();
int64_t function_ffffffffa2470f84();
int64_t function_fffffffff40ef2df();
int64_t unknown_21a6b65();
int64_t unknown_36f99c3b();
int64_t unknown_40297d9();
int64_t unknown_451b2f1c();
int64_t unknown_4c68a853();
int64_t unknown_5e88a0f1();
int64_t unknown_7c86e7();
int64_t unknown_c8f5797();
int64_t unknown_ffffffff84158218();
int64_t unknown_ffffffffe2f07f2c();

// Address range: 0x1fbe34 - 0x1fbe5e
int64_t function_1fbe34(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1fbe34
    __asm_in((int16_t)a3);
    int64_t v1; // 0x1fbe34
    int64_t v2 = v1;
    int64_t v3 = unknown_36f99c3b() + v2; // 0x1fbe41
    uint64_t v4 = v3 & v2;
    int64_t result = unknown_4c68a853(); // 0x1fbe4c
    int64_t v5; // 0x1fbe34
    int64_t v6 = v5 - 8; // 0x1fbe52
    *(int64_t *)v6 = 2 * a1 + 0x5520b28c + v3 & 0xffffffff;
    v1 = v4 & 0xff00 | v2 & -0xff01;
    while ((char)(v4 / 256) < 0) {
        // 0x1fbe35
        v2 = v1;
        v3 = unknown_36f99c3b() + v2;
        v4 = v3 & v2;
        result = unknown_4c68a853();
        v6 -= 8;
        *(int64_t *)v6 = 2 * a1 + 0x5520b28c + v3 & 0xffffffff;
        v1 = v4 & 0xff00 | v2 & -0xff01;
    }
    unsigned char v7 = (char)v2 % 32; // 0x1fbe56
    if (v7 != 0) {
        char * v8 = (char *)(a1 - 24); // 0x1fbe56
        *v8 = *v8 >> v7;
    }
    int32_t * v9 = (int32_t *)result; // 0x1fbe59
    *v9 = *v9 + (int32_t)result;
    return result;
}

// Address range: 0x1fbe91 - 0x1fbebf
int64_t function_1fbe91(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = unknown_c8f5797(); // 0x1fbe91
    *(int32_t *)0xad73598d71753d9 = (int32_t)v1;
    int64_t v2; // 0x1fbe91
    *(char *)a5 = (char)v2 - (char)a5;
    int64_t v3; // 0x1fbe91
    *(char *)a3 = *(char *)&v3 / 2;
    int32_t * v4 = (int32_t *)(v1 + 2 * a2); // 0x1fbeb0
    *v4 = *v4 + (int32_t)a1;
    *(char *)a2 = (char)a4;
    return v1 & -256 | v1 + 210 & 171 | 84;
}

// Address range: 0x1fbed8 - 0x1fbed9
int64_t function_1fbed8(int64_t a1) {
    // 0x1fbed8
    int64_t result; // 0x1fbed8
    return result;
}

// Address range: 0x1fbeeb - 0x1fbefa
int64_t function_1fbeeb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fbeeb
    return unknown_5e88a0f1(a1, a2, a3, a4);
}

// Address range: 0x1fbefb - 0x1fbf01
int64_t function_1fbefb(int64_t a1) {
    // 0x1fbefb
    int64_t result; // 0x1fbefb
    int32_t * v1 = (int32_t *)(result + 26); // 0x1fbefb
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1fbfd6 - 0x1fbfdf
int64_t function_1fbfd6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1fbfd6
    return function_4f27c02c();
}

// Address range: 0x31babb - 0x31babc
int64_t function_31babb(int64_t a1, int64_t a2) {
    // 0x31babb
    int64_t result; // 0x31babb
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x31bb13 - 0x31bb44
int64_t function_31bb13(int64_t a1, int64_t a2) {
    // 0x31bb13
    int64_t v1; // 0x31bb13
    uint64_t v2 = v1;
    char v3 = v2 / 256; // 0x31bb13
    *(char *)-0x38de05e6 = *(char *)-0x38de05e6 + v3;
    char * v4 = (char *)(v2 - 121); // 0x31bb33
    int64_t v5; // 0x31bb13
    uint64_t v6 = v5;
    int64_t v7 = v6 / 256 % 256 | v6 & -256; // 0x31bb20
    int64_t v8; // 0x31bb13
    int64_t v9 = v8 & 0xfe17fe19 | 0x1e801e6; // 0x31bb26
    int64_t result = a1 & 0xffffffff; // 0x31bb26
    int64_t v10; // 0x31bb13
    int32_t * v11 = (int32_t *)(v10 - 0x17fe7734); // 0x31bb27
    *v11 = (int32_t)v10;
    char * v12 = (char *)(v7 - 0x15fec27c); // 0x31bb2d
    *v12 = *v12 + v3;
    char v13 = *v4 | (char)a1; // 0x31bb33
    *v4 = v13;
    int64_t v14; // 0x31bb13
    int64_t v15 = v14 - 1; // 0x31bb36
    v10 = (int64_t)*v11;
    while (v15 != 0 == v13 == 0) {
        int64_t v16 = v9;
        v6 = v7;
        v7 = v6 / 256 % 256 | v6 & -256;
        v9 = result & 0xfe17fe19 | 0x1e801e6;
        result = v16 & 0xffffffff;
        v11 = (int32_t *)(v10 - 0x17fe7734);
        *v11 = (int32_t)v10;
        v12 = (char *)(v7 - 0x15fec27c);
        *v12 = *v12 + v3;
        v13 = *v4 | (char)v16;
        *v4 = v13;
        v15--;
        v10 = (int64_t)*v11;
    }
    char v17 = *(char *)(v9 + 72); // 0x31bb3a
    int32_t * v18 = (int32_t *)((v2 & -256 | (int64_t)(v17 + (char)v2)) + 0x5677b26f); // 0x31bb3d
    *v18 = *v18 | (int32_t)v7;
    return result;
}

// Address range: 0x31bb87 - 0x31bb88
int64_t function_31bb87(void) {
    // 0x31bb87
    int64_t result; // 0x31bb87
    return result;
}

// Address range: 0x31bbae - 0x31bbd6
int64_t function_31bbae(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x31bbae
    int64_t v1; // 0x31bbae
    int64_t v2 = v1;
    *(int32_t *)a4 = (int32_t)v1 - (int32_t)v2;
    __asm_out(-89, (char)v2);
    uint64_t v3 = a4 / 256; // 0x31bbba
    int64_t v4 = unknown_21a6b65(); // 0x31bbbc
    char v5 = *(char *)-0x59714d36; // 0x31bbc3
    *(char *)-0x59714d36 = v5 + (char)((uint64_t)v1 / 256);
    char * v6 = (char *)(((v2 + v3) % 256 | v2 & 0xffffff00) - 0xb75bfa3); // 0x31bbcd
    *v6 = *v6 & (char)v3;
    return v4 & -70;
}

// Address range: 0x31bbd6 - 0x31bc2e
int64_t function_31bbd6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2; // 0x31bbd6
    __asm_out_133(99, (int32_t)v2);
    int16_t v3 = a5; // 0x31bbe3
    int16_t v4 = (int16_t)a3 % 256; // 0x31bbe3
    int64_t v5 = 256 * (v3 % v4) | v3 / v4 % 256; // 0x31bbe5
    if ((int32_t)a5 < -0x37ebe6ff) {
        v5 = function_31bb87();
    }
    int32_t v6 = 0x10000 * (int32_t)v5 >> 16; // 0x31bbe7
    unsigned char v7 = *(char *)(v2 + 0x6a2e1ad5) ^ (char)v6; // 0x31bbea
    int64_t v8 = (int64_t)v7 | (int64_t)(v6 & -256); // 0x31bbea
    int32_t * v9 = (int32_t *)(a2 - 92); // 0x31bbf0
    *v9 = *v9 + (int32_t)a1;
    __asm_out_134((int16_t)v1, (int32_t)v8);
    char * v10 = (char *)v8; // 0x31bbfb
    *v10 = *v10 + v7;
    uint32_t v11 = *(int32_t *)&v1; // 0x31bbfd
    *(char *)(int64_t)v11 = 2 * (char)v11;
    char * v12 = (char *)(4 * v2 + 0x685307); // 0x31bc06
    *v12 = *v12 | (char)a1;
    int64_t v13 = unknown_ffffffff84158218(); // 0x31bc12
    *(char *)a1 = __asm_insb((int16_t)v1);
    *(char *)0x6fc1c320 = *(char *)0x6fc1c320 + (char)v2;
    *(int32_t *)-0x56cbd421 = 2 * *(int32_t *)-0x56cbd421;
    int64_t result = 256 * (int64_t)*(char *)(a2 - 62) | v13 & -0xff01; // 0x31bc26
    *(char *)(4 * a1 - 52 + result) = (char)a4;
    return result;
}

// Address range: 0x31bc2e - 0x31bc8f
int64_t function_31bc2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x31bc2e
    int64_t v1; // 0x31bc2e
    int64_t result = v1;
    *(char *)-0x7bfbaf07f644ff45 = (char)result;
    char v2 = (uint64_t)v1 / 256; // 0x31bc42
    unsigned char v3 = (char)a3;
    if (v2 + -1 - v3 < 0) {
        // 0x31bc46
        return result;
    }
    unsigned char v4 = v2 - 1; // 0x31bc8b
    *(char *)a3 = v4;
    return (result + 149 + (int64_t)(v4 < v3)) % 256 | result & -256;
}

// Address range: 0x31bcd3 - 0x31bd04
int64_t function_31bcd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31bcd3
    __asm_out(-67, (char)unknown_40297d9());
    int64_t v1; // 0x31bcd3
    return v1 & 0xffffffff;
}

// Address range: 0x31bd24 - 0x31bd25
int64_t function_31bd24(void) {
    // 0x31bd24
    int64_t result; // 0x31bd24
    return result;
}

// Address range: 0x31bd32 - 0x31bd37
int64_t function_31bd32(void) {
    // 0x31bd32
    return function_fffffffff40ef2df();
}

// Address range: 0x31bd6e - 0x31bd97
int64_t function_31bd6e(int64_t a1) {
    // 0x31bd6e
    bool v1; // 0x31bd6e
    if (v1 || v1) {
        // 0x31bd90
        int64_t result; // 0x31bd6e
        return result;
    }
    // 0x31bd70
    return function_31bd24();
}

// Address range: 0x31bd9a - 0x31bd9d
int64_t function_31bd9a(int64_t a1) {
    // 0x31bd9a
    int64_t result; // 0x31bd9a
    return result;
}

// Address range: 0x31bdc2 - 0x31bdc5
int64_t function_31bdc2(void) {
    // 0x31bdc2
    int64_t result; // 0x31bdc2
    return result;
}

// Address range: 0x31bdda - 0x31bde1
int64_t function_31bdda(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x20c09291); // 0x31bdda
    bool v2; // 0x31bdda
    *v1 = (int32_t)v2 - (int32_t)a4 + *v1;
    int64_t result; // 0x31bdda
    return result;
}

// Address range: 0x31be75 - 0x31be76
int64_t function_31be75(int64_t a1) {
    // 0x31be75
    int64_t result; // 0x31be75
    return result;
}

// Address range: 0x31bea6 - 0x31becb
int64_t function_31bea6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 - 0x6915a6c); // 0x31bea6
    int64_t v2; // 0x31bea6
    *v1 = *v1 ^ (int32_t)v2;
    int64_t v3; // 0x31bea6
    *(char *)a3 = *(char *)&v3 + (char)a4;
    int64_t v4 = unknown_ffffffffe2f07f2c(); // 0x31beb9
    char * v5 = (char *)(a2 + 30); // 0x31bec5
    *v5 = *v5 ^ (char)(a4 / 256);
    return v4 ^ 47;
}

// Address range: 0x31bf05 - 0x31c0b5
int64_t function_31bf05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x31bf0b
    int64_t v1; // 0x31bf05
    return v1 & -256;
}

// Address range: 0x31c106 - 0x31c107
int64_t function_31c106(void) {
    // 0x31c106
    int64_t result; // 0x31c106
    return result;
}

// Address range: 0x31c134 - 0x31c19a
int64_t function_31c134(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x31c134
    int64_t v1; // 0x31c134
    int64_t v2 = v1;
    *(int32_t *)(v2 - 0x3e0156a8) = (int32_t)v2;
    unknown_7c86e7();
    int32_t * v3 = (int32_t *)(a4 - 15); // 0x31c151
    int32_t v4 = a4; // 0x31c151
    *v3 = *v3 & v4;
    int64_t v5; // 0x31c134
    uint32_t v6 = (int32_t)(v1 & 0xffffff00 | (int64_t)*(char *)&v5); // 0x31c158
    __asm_out_133(-44, v6);
    char * v7 = (char *)(a5 - 0x2963ff98); // 0x31c15f
    *v7 = 128 * (char)(v6 < 0x17092701) | *v7 / 2;
    float80_t v8; // 0x31c134
    *(int16_t *)(a5 - 24) = (int16_t)v8;
    int32_t * v9 = (int32_t *)(a3 + 0x6e25a33f); // 0x31c168
    uint32_t v10 = *v9; // 0x31c168
    uint32_t v11 = v10 + (v4 & -0xff01); // 0x31c168
    *v9 = v11;
    bool v12; // 0x31c134
    int32_t * v13 = (int32_t *)(a2 + (int64_t)&g1 + (v12 ? -1 : 1)); // 0x31c16e
    *v13 = 0x80000000 * (int32_t)(v11 < v10) | *v13 / 2;
    uint32_t result = *(int32_t *)0xb2f563376f3872c | 26;
    *(char *)0x473d8d013d00330a = (char)result;
    return result;
}

// Address range: 0x31c1a9 - 0x31c26e
int64_t function_31c1a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2; // 0x31c1a9
    int64_t v3 = v2 & 0xffffffff; // 0x31c1a9
    *(int64_t *)(v3 - 8) = 0xaa90000;
    *(int64_t *)(v3 - 16) = v1;
    int64_t v4 = __asm_sti(0xa4b15f5f); // 0x31c1cf
    unsigned char v5 = (char)v4; // 0x31c1d0
    unsigned char v6 = v5 + (char)(v2 / 256); // 0x31c1d0
    int64_t result = v4 & -256 | (int64_t)v6; // 0x31c1d0
    if (v6 < v5) {
        uint32_t v7 = *(int32_t *)&v1; // 0x31c1d4
        uint32_t v8 = v7 + (int32_t)v2; // 0x31c1d4
        *(int32_t *)v1 = v8;
        if (a4 == 1) {
            // 0x31c1d8
            *(int64_t *)(v3 - 24) = result;
            // 0x31c1b5
            return result;
        }
        char * v9 = (char *)result;
        *v9 = (char)(v8 < v7) - v6 + *v9;
        return result;
    }
    // 0x31c211
    *(int32_t *)0xa4b15f5f = (int32_t)result;
    int64_t result2 = result & -0xff01 | (int64_t)&g2; // 0x31c212
    int64_t v10 = v3 - 24; // 0x31c214
    *(int64_t *)v10 = 0x3a2bf800;
    __asm_out_135((int16_t)a3, (char)result2);
    int32_t v11 = *(int32_t *)(a3 + 0x9208169 + v1); // 0x31c21f
    if (llvm_ctpop_i8((char)(v11 + (int32_t)v10)) % 2 == 0) {
        // 0x31c1b5
        return result2;
    }
    unsigned char v12 = (char)a4 % 32; // 0x31c262
    if (v12 != 0) {
        char * v13 = (char *)(v2 + 77); // 0x31c262
        *v13 = *v13 << v12;
    }
    // 0x31c1b5
    return result2;
}

// Address range: 0x31c26f - 0x31c27a
int64_t function_31c26f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x31c26f
    int64_t result; // 0x31c26f
    if (v1 != 0) {
        uint32_t v2 = (int32_t)result;
        *(int32_t *)result = v2 >> 32 - v1 | v2 << v1;
    }
    return result;
}

// Address range: 0x31c295 - 0x31c298
int64_t function_31c295(void) {
    // 0x31c295
    int64_t result; // 0x31c295
    return result;
}

// Address range: 0x4706ee - 0x4706f3
int64_t function_4706ee(void) {
    // 0x4706ee
    int64_t result; // 0x4706ee
    return result;
}

// Address range: 0x470811 - 0x470816
int64_t function_470811(int64_t a1, int64_t a2) {
    // 0x470811
    int64_t v1; // 0x470811
    uint64_t result = v1;
    char * v2 = (char *)(a1 + 59); // 0x470812
    *v2 = *v2 & (char)(result / 256);
    return result;
}

// Address range: 0x470841 - 0x470846
int64_t function_470841(void) {
    // 0x470841
    return function_ffffffffa2470f84();
}

// Address range: 0x470851 - 0x470859
int64_t function_470851(void) {
    // 0x470851
    return function_18a8df0a();
}

// Address range: 0x470864 - 0x470865
int64_t function_470864(void) {
    // 0x470864
    int64_t result; // 0x470864
    return result;
}

// Address range: 0x4708b0 - 0x4708b5
int64_t function_4708b0(void) {
    // 0x4708b0
    int64_t result; // 0x4708b0
    bool v1; // 0x4708b0
    if (v1) {
        result = function_470864();
    }
    // 0x4708b2
    return result;
}

// Address range: 0x4708ca - 0x4708cf
int64_t function_4708ca(void) {
    // 0x4708ca
    return function_ffffffff97c2093d();
}

// Address range: 0x4708ed - 0x4708ee
int64_t function_4708ed(void) {
    // 0x4708ed
    int64_t result; // 0x4708ed
    return result;
}

// Address range: 0x4708f5 - 0x470948
int64_t function_4708f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    __asm_int1();
    uint32_t v2 = (int32_t)unknown_451b2f1c(0x240d793c); // 0x470906
    uint32_t v3 = v2 + 0x8f475d4; // 0x470906
    int64_t v4 = v3; // 0x470906
    int64_t v5 = v4; // 0x47090b
    int64_t v6 = a4 + 23 & 0xffffffff; // 0x47090b
    bool v7 = v2 < 0xf70b8a2c; // 0x47090b
    if (v3 >= 0) {
        // 0x47090d
        bool v8; // 0x4708f5
        int64_t v9 = v8 ? -1 : 1; // 0x47090d
        int64_t v10 = v9 + 0x240d793c; // 0x47090d
        uint64_t v11 = v4 + 78 + (int64_t)(*(char *)0x240d793c > (char)a2); // 0x47090e
        int32_t * v12 = (int32_t *)(a3 + 0x7f442c84); // 0x470910
        int64_t v13; // 0x4708f5
        *v12 = *v12 ^ (int32_t)v13;
        char v14 = v11; // 0x470916
        __asm_out(3, v14);
        int3_t v15; // 0x4708f5
        __frontend_reg_store_fpr(v15 - 1, (float80_t)*(float32_t *)&v1);
        __asm_out(11, v14);
        *(int32_t *)v10 = *(int32_t *)(v9 + a2);
        char * v16 = (char *)(v10 + (v8 ? -0x4ff38061 : -0x4ff38059)); // 0x47092b
        unsigned char v17 = *v16; // 0x47092b
        *v16 = v17 + 31;
        v5 = v11 % 256 | v4 & 0xffffff00;
        v6 = 0xaa7f1ffe;
        v7 = v17 > 224;
    }
    int64_t v18 = 62; // bp-8, 0x470931
    int64_t v19 = v5 + 0xa11a14cf + (int64_t)v7; // 0x470935
    char * v20 = (char *)(2 * a6); // 0x47093a
    *v20 = *v20 + (char)v6;
    char * v21 = (char *)(4 * v1 + (int64_t)&v18); // 0x47093e
    *v21 = *v21 | (char)(v6 / 256);
    int64_t result = (v19 + 25) % 256 | v19 & 0xffffff00; // 0x470943
    if ((char)v19 < 231) {
        result = function_4708ed();
    }
    // 0x470945
    return result;
}

// Address range: 0x47098f - 0x4709ae
int64_t function_47098f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47098f
    *(int32_t *)((a1 & 0xffffffff) - 0x1f25c872) = (int32_t)a3;
    int64_t v1; // 0x47098f
    return v1 + 0x1ca28c15 & 0xb9edd7a9 | 0x46122856;
}

// Address range: 0x4709e5 - 0x4709e6
int64_t function_4709e5(void) {
    // 0x4709e5
    int64_t result; // 0x4709e5
    return result;
}

// Address range: 0x470a00 - 0x470a0f
int64_t function_470a00(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 + 0x6c3a50ac); // 0x470a00
    unsigned char v2 = *v1; // 0x470a00
    unsigned char v3 = v2 + (char)a4; // 0x470a00
    *v1 = v3;
    int64_t v4; // 0x470a00
    char * v5 = (char *)(v4 - 12); // 0x470a07
    *v5 = *v5 - (char)(a3 / 256) + (char)(v3 < v2);
    int64_t v6; // 0x470a00
    return v4 + (int64_t)&v6 & 0xffffffff;
}

// Address range: 0x470a20 - 0x470a23
int64_t function_470a20(int64_t a1) {
    // 0x470a20
    int64_t result; // 0x470a20
    return result;
}

// Address range: 0x470a78 - 0x470a81
int64_t function_470a78(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x470a78
    int64_t v1; // 0x470a78
    int64_t v2 = v1;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return (v2 + 203) % 256 | v2 & -256;
}

// Address range: 0x470a82 - 0x470a90
int64_t function_470a82(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x470a82
    bool v1; // 0x470a82
    bool v2 = v1;
    uint32_t v3 = (int32_t)a4; // 0x470a86
    int64_t v4; // 0x470a82
    uint32_t v5 = (int32_t)v2 + (int32_t)v4; // 0x470a86
    bool v6 = v2 ? v5 != -1 | (int32_t)v2 + v3 - v5 > v3 : v5 > v3; // 0x470a86
    return function_470b03(a1, a2, (int32_t)a3 - (v6 ? 0x564a13a8 : 0x564a13a7));
}

// Address range: 0x470a9e - 0x470aa0
int64_t function_470a9e(void) {
    // 0x470a9e
    int64_t v1; // 0x470a9e
    return function_470b14(v1);
}

// Address range: 0x470ab7 - 0x470aba
int64_t function_470ab7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x470ab7
    return a2 & 0xffffffff;
}

// Address range: 0x470aff - 0x470b00
int64_t function_470aff(void) {
    // 0x470aff
    int64_t result; // 0x470aff
    return result;
}

// Address range: 0x470b03 - 0x470b05
int64_t function_470b03(int64_t a1, int64_t a2, int32_t a3) {
    // 0x470b03
    int64_t result; // 0x470b03
    __asm_out_134((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x470b14 - 0x470b16
int64_t function_470b14(int64_t a1) {
    // 0x470b14
    int64_t result; // 0x470b14
    *(char *)a1 = (char)(result / 256) + (char)result;
    return result;
}

// Address range: 0x470b17 - 0x470bd4
int64_t function_470b17(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    int64_t v2 = a6;
    int64_t v3; // 0x470b17
    int16_t v4 = (int16_t)((int32_t)a3 - *(int32_t *)(v3 - 12)); // 0x470b23
    *(int32_t *)a1 = __asm_insd(v4);
    int32_t v5 = a4; // 0x470b24
    __asm_out_134(v4, v5);
    uint64_t v6 = v2; // 0x470b2a
    int32_t v7 = (v5 ^ 0x272179ca) + 0x19f3f8b2; // 0x470b2b
    int64_t result = v7; // 0x470b2b
    v2 = a1;
    if (v7 < 0 == (v7 & (v5 ^ -0x80000000)) < 0 != v7 != 0) {
        char * v8 = (char *)(v6 - 0x7024cce5); // 0x470b38
        *v8 = *v8 + (char)a5;
        *(char *)(v6 + 124) = (char)(v6 / 256);
        bool v9; // 0x470b17
        *(char *)a1 = *(char *)(v1 + (v9 ? -1 : 1));
        return result & 0xffffff00 | (int64_t)(*(char *)&v1 ^ 37);
    }
    // 0x470b69
    if (v7 >= 0 | llvm_ctpop_i8((char)v7) % 2 != 0) {
        // 0x470b6e
        return result;
    }
    int64_t v10 = result - ((v5 ^ -0x272179cc) < 0x19f3f8b2 ? 0x6226573b : 0x6226573a); // 0x470b97
    int64_t v11 = v6 & (v10 | -256); // 0x470b9c
    int32_t v12 = 0x10000 * (int32_t)v10 >> 16; // 0x470b9e
    int32_t * v13 = (int32_t *)(v3 + 93 + v11); // 0x470b9f
    uint32_t v14 = *v13; // 0x470b9f
    int32_t v15 = a1; // 0x470b9f
    uint32_t v16 = v14 + v15; // 0x470b9f
    *v13 = v16;
    int64_t v17 = (int64_t)(*(int32_t *)v11 + v15 + (int32_t)(v16 < v14)); // 0x470ba4
    v2 = v17;
    char * v18 = (char *)(v3 + 0x34a52b6); // 0x470ba8
    char v19 = *v18 + (char)v12; // 0x470ba8
    *v18 = v19;
    unsigned char v20 = *(char *)(a5 - 35); // 0x470bae
    int64_t v21 = (int64_t)(v12 & -0xff01) | (int64_t)&g3; // 0x470bb1
    if (v19 >= 0) {
        int32_t v22 = *(int32_t *)((256 * (int64_t)v20 | v3 & 0xffff00ff) - 0x770066a4); // 0x470b71
        char v23 = (char)v21 - 42; // 0x470b77
        int64_t result2 = v21 & -256 | (int64_t)v23; // 0x470b79
        if (v23 < 1) {
            result2 = function_6a82ded4();
        }
        // 0x470b7f
        *(int64_t *)((int64_t)(v22 ^ (int32_t)(int64_t)&v2) - 8) = a5;
        return result2;
    }
    int32_t * v24 = (int32_t *)a5; // 0x470bb7
    *v24 = *v24 - (int32_t)v11;
    int32_t * v25 = (int32_t *)(8 * a5 + v17); // 0x470bbc
    *v25 = *v25 + (int32_t)v3;
    __asm_out_134((int16_t)v11, (int32_t)v21);
    char * v26 = (char *)(v21 & 0xffffffff); // 0x470bc7
    *v26 = *v26 | v20;
    return v1 & 0xffffff00 | (int64_t)__asm_in_136(-1);
}

// Address range: 0x470c05 - 0x470c06
int64_t function_470c05(void) {
    // 0x470c05
    int64_t result; // 0x470c05
    return result;
}

// Address range: 0x470c0d - 0x470cd9
int64_t function_470c0d(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t v1 = a2;
    int64_t v2; // 0x470c0d
    bool v3; // 0x470c0d
    if (v3) {
        int32_t * v4 = (int32_t *)(a4 + 60); // 0x470c14
        *v4 = *v4 - (int32_t)(a3 - 256 * v2 & 0xff00 | a3 & 0xffff00ff);
        unsigned char v5 = (char)a4 % 32; // 0x470c24
        if (v5 != 0) {
            char * v6 = (char *)(a6 - 60); // 0x470c24
            *v6 = *v6 >> v5;
        }
        // 0x470d22
        return v2 & -256 | 240;
    }
    unsigned char v7 = (char)a4 % 32; // 0x470c4c
    if (v7 != 0) {
        char * v8 = (char *)(v2 - 6); // 0x470c4c
        char v9 = *v8; // 0x470c4c
        char v10 = v9 << v7; // 0x470c4c
        *v8 = v10;
        if (v7 == 1 == (v10 ^ v9 << v7 - 1) < 0) {
            function_470c05();
        }
    }
    int16_t v11 = a3; // 0x470c56
    __asm_outsb(v11, *(char *)&v1);
    char * v12 = (char *)(v2 - 72); // 0x470c68
    *v12 = *v12 - 37;
    int64_t v13 = a4 / 256 % 256 ^ a4; // 0x470c6b
    char * v14 = (char *)(v13 + 93); // 0x470c6d
    *v14 = *v14 ^ (char)v13;
    char v15 = *(char *)&v1 | (char)v2; // 0x470c79
    *(char *)v1 = v15;
    int64_t v16 = (int64_t)*(int32_t *)(a7 - 54); // 0x470c7b
    int64_t v17 = -22 * v16; // 0x470c7b
    if (v15 == 0 || v17 != -0x1600000000 * v16 >> 32) {
        // 0x470cd3
        if (v15 == 0) {
            // 0x470d22
            return 0xf1ec74a4;
        }
        char * v18 = (char *)(a7 - 111); // 0x470cd6
        *v18 = *v18 + (char)(a3 / 256);
        return 0xf1ec74a4;
    }
    uint32_t v19 = (int32_t)v17 & 30; // 0x470c87
    if (v19 != 0) {
        int32_t * v20 = (int32_t *)a7; // 0x470c87
        uint32_t v21 = *v20; // 0x470c87
        *v20 = v21 << v19 | (int32_t)((int64_t)v21 >> (int64_t)(33 - v19));
    }
    char * v22 = (char *)(v2 - 84); // 0x470c8a
    *v22 = *v22 ^ -99;
    return (int64_t)__asm_in(v11) & -0x81725400 | 0x817253a6;
}
