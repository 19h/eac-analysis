/*
 * Targeted RetDec C for native executable gap queue batch 281.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xec99c-0xecb9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xecb9c-0xecd9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xecd9c-0xecf9c rank=- name=- kind=- bytes=- uncovered=-
 *   0x149513-0x149713 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f4a1e-0x2f4c1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f4c1e-0x2f4e1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f4e1e-0x2f501e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f521e-0x2f541e rank=- name=- kind=- bytes=- uncovered=-
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
uint32_t __readfsdword(int64_t offset);
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
int864_t __asm_fnsave(void);
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

int64_t function_149513(int32_t a1);
int64_t function_149576(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14957e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1495e6(void);
int64_t function_149680(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_1dc8cdbb();
int64_t function_2f4a1e(void);
int64_t function_2f4a24(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f4a2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f4a6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f4ac2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f4b3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f4b81(void);
int64_t function_2f4bcc(void);
int64_t function_2f4c1f(int64_t a1, int64_t a2);
int64_t function_2f4c63(void);
int64_t function_2f4c6a(void);
int64_t function_2f4c81(int64_t a1);
int64_t function_2f4c86(void);
int64_t function_2f4ccc(void);
int64_t function_2f4cd6(void);
int64_t function_2f4cf2(void);
int64_t function_2f4d03(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f4d0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f4dcb(void);
int64_t function_2f4e0f(int64_t a1);
int64_t function_2f4e3a(void);
int64_t function_2f4e78(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_2f4e8e(void);
int64_t function_2f4e93(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f4f2a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f4f6e(int64_t a1, int64_t a2);
int64_t function_2f4f70(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f4fcf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f4fef(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f521e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2f52f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f5308(int64_t a1);
int64_t function_2f533c(int64_t a1);
int64_t function_2f5348(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f5389(void);
int64_t function_2f538e(void);
int64_t function_2f539d(int64_t a1);
int64_t function_2f53be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f5409(int64_t a1);
int64_t function_2f541b(int64_t a1);
int64_t function_2fdf13();
int64_t function_33f55458();
int64_t function_36deb6();
int64_t function_54a0771d();
int64_t function_5a16cf4a();
int64_t function_68a685f7();
int64_t function_710b4f0();
int64_t function_ec979();
int64_t function_ec99c(int64_t a1, int64_t a2);
int64_t function_ec9c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_eca4d(void);
int64_t function_ecaa3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_ecb14(void);
int64_t function_ecb2b(void);
int64_t function_ecb6c(void);
int64_t function_ecb91(int64_t a1);
int64_t function_ecb9a(int64_t a1);
int64_t function_ecba0(int64_t a1, uint64_t a2, int64_t a3, int64_t a4);
int64_t function_ecc1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ecc9d(int64_t a1);
int64_t function_ecca1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ecccd(void);
int64_t function_ecd46(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_ece25(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_ece7e(void);
int64_t function_ecf72(int64_t a1, int64_t a2);
int64_t function_ffffffffabc3e558();
int64_t function_ffffffffdae7290f();
int64_t function_ffffffffe77f714f();
int64_t function_ffffffffe8fda1e8();
int64_t function_fffffffff0ab55fe();
int64_t function_fffffffff934bf03();
int64_t unknown_1052a563();
int64_t unknown_168f26f9();
int64_t unknown_260f4d8c();
int64_t unknown_363bc514();
int64_t unknown_44245f99();
int64_t unknown_68b3b58d();
int64_t unknown_773f691a();
int64_t unknown_7937aa2e();
int64_t unknown_7a28ca31();
int64_t unknown_ede41a9();
int64_t unknown_ffffffff8622d6e2();
int64_t unknown_ffffffff9016dbc1();
int64_t unknown_ffffffffb44c28b8();
int64_t unknown_ffffffffb8923b41();
int64_t unknown_ffffffffd030875d();
int64_t unknown_ffffffffd14674ab();
int64_t unknown_ffffffffd704687f();
int64_t unknown_ffffffffe82201a2();
int64_t unknown_ffffffffe83b084c();

// Address range: 0xec99c - 0xec9ba
int64_t function_ec99c(int64_t a1, int64_t a2) {
    int64_t v1 = unknown_ffffffffe82201a2(); // 0xec99c
    int32_t v2 = *(int32_t *)(a1 + 0x1e8a602); // 0xec9a1
    int64_t v3 = v1; // 0xec9a7
    int64_t v4; // 0xec99c
    if (llvm_ctpop_i8((char)(v2 & (int32_t)v4)) % 2 != 0) {
        v3 = function_ec979();
    }
    // 0xec9a9
    *(char *)0x7771003842fa3ae5 = (char)v3;
    unknown_ffffffffb44c28b8();
    int64_t v5; // 0xec99c
    return (int64_t)&v5;
}

// Address range: 0xec9c3 - 0xec9e4
int64_t function_ec9c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xec9c3
    int64_t v1; // 0xec9c3
    *(char *)a1 = (char)v1;
    bool v2; // 0xec9c3
    int64_t v3 = v2 ? -1 : 1; // 0xec9c3
    *(char *)0x7a81aa07d601e833 = (char)v1;
    return unknown_ffffffff8622d6e2(v3 + a1, v3 + a2);
}

// Address range: 0xeca4d - 0xeca5f
int64_t function_eca4d(void) {
    // 0xeca4d
    return function_ffffffffabc3e558();
}

// Address range: 0xecaa3 - 0xecab0
int64_t function_ecaa3(int64_t a1, int64_t a2, int64_t a3) {
    // 0xecaa3
    return unknown_ffffffffd14674ab(a1, a2, a3);
}

// Address range: 0xecb14 - 0xecb1a
int64_t function_ecb14(void) {
    // 0xecb14
    return unknown_773f691a();
}

// Address range: 0xecb2b - 0xecb2e
int64_t function_ecb2b(void) {
    // 0xecb2b
    int64_t result; // 0xecb2b
    return result;
}

// Address range: 0xecb6c - 0xecb72
int64_t function_ecb6c(void) {
    // 0xecb6c
    return function_5a16cf4a();
}

// Address range: 0xecb91 - 0xecb92
int64_t function_ecb91(int64_t a1) {
    // 0xecb91
    int64_t result; // 0xecb91
    return result;
}

// Address range: 0xecb9a - 0xecb9b
int64_t function_ecb9a(int64_t a1) {
    // 0xecb9a
    int64_t result; // 0xecb9a
    return result;
}

// Address range: 0xecba0 - 0xecbd3
int64_t function_ecba0(int64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    // 0xecba0
    unknown_ede41a9();
    *(char *)(a4 + 8) = (char)(a2 / 256);
    int64_t v1 = unknown_ffffffff9016dbc1(); // 0xecbba
    int64_t v2; // 0xecba0
    char * v3 = (char *)(v2 - 115); // 0xecbc0
    *v3 = *v3 & (char)v2;
    int32_t * v4 = (int32_t *)(v2 - 0x687243ee + (((v1 + 169) % 256 | v1 & 0xffffff00) + v2 + (int64_t)((char)v1 < 87) & 0xffffffff)); // 0xecbc7
    *v4 = *v4 + (int32_t)a4;
    return function_1dc8cdbb();
}

// Address range: 0xecc1f - 0xecc29
int64_t function_ecc1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x7d94dbfd); // 0xecc1f
    int64_t result; // 0xecc1f
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0xecc9d - 0xecc9f
int64_t function_ecc9d(int64_t a1) {
    // 0xecc9d
    int64_t result; // 0xecc9d
    return result;
}

// Address range: 0xecca1 - 0xecca7
int64_t function_ecca1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xecca1
    int64_t result; // 0xecca1
    return result;
}

// Address range: 0xecccd - 0xeccd2
int64_t function_ecccd(void) {
    // 0xecccd
    return function_710b4f0();
}

// Address range: 0xecd46 - 0xece21
int64_t function_ecd46(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0xecd46
    int64_t v1; // 0xecd46
    __asm_out_133(-44, (char)v1);
    __asm_int3();
    unsigned char v2 = (char)a2; // 0xecdc2
    unsigned char v3 = v2 - 83; // 0xecdc2
    int64_t v4 = v3; // 0xecdc2
    int64_t v5 = a2 & 0xffffff00;
    if (v3 != 0) {
        // 0xecdc6
        return (v4 - (v2 < 83 ? 20 : 19)) % 256 | v5;
    }
    // 0xece1a
    uint64_t v6; // 0xecd46
    unsigned char v7; // 0xece1c
    if ((82 - v2 & v2) >= 0) {
        // 0xece1c
        v6 = v5 | v4;
        v7 = *(char *)(v6 + 19);
        return v6 % 256 * (int64_t)v7 | v6 & -0x10000;
    }
    char * v8 = (char *)(v1 + 8 * a3);
    int64_t v9 = function_2fdf13(); // 0xece0d
    char v10 = *v8; // 0xece17
    char v11 = (int32_t)v9 < 0xde2f7801; // 0xece17
    char v12 = v11 + (char)(a4 / 256); // 0xece17
    char v13 = v10 - v12; // 0xece17
    *v8 = v13;
    while (((v13 - v11 ^ v10) & (v12 ^ v10)) < 0) {
        // 0xece0b
        v9 = function_2fdf13();
        v10 = *v8;
        v11 = (int32_t)v9 < 0xde2f7801;
        v12 = v11 + (char)(a4 / 256);
        v13 = v10 - v12;
        *v8 = v13;
    }
    // 0xece1c
    v6 = v9;
    v7 = *(char *)(v6 + 19);
    return v6 % 256 * (int64_t)v7 | v6 & -0x10000;
}

// Address range: 0xece25 - 0xece5b
int64_t function_ece25(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0xece25
    int64_t v1; // 0xece25
    char v2 = v1; // 0xece25
    __asm_out_133(107, v2);
    *(char *)0x67d0ca2e = *(char *)0x67d0ca2e + (char)(v1 / 256);
    int32_t * v3 = (int32_t *)(v1 - 114); // 0xece2e
    int32_t v4 = *v3; // 0xece2e
    *v3 = 2 * v4 | (int32_t)(v4 < 0);
    char * v5 = (char *)(v1 - 0x7fff6755); // 0xece39
    char v6 = *v5; // 0xece39
    char v7 = a4 / 256; // 0xece39
    char v8 = v6 + v7; // 0xece39
    *v5 = v8;
    int64_t v9 = v1 & -256 | (int64_t)((v2 ^ -114) - *(char *)(a1 - 0x548ab82d)); // 0xece3f
    if (((v8 ^ v6) & (v8 ^ v7)) < 0) {
        v9 = function_ece7e();
    }
    int64_t v10 = v9;
    int32_t * v11 = (int32_t *)(v10 - 0x62a2150b); // 0xece41
    *v11 = *v11 + (int32_t)v10;
    *(int32_t *)0x41f33e4 = *(int32_t *)0x41f33e4 + (int32_t)v1;
    return (v10 + 163) % 256 | v10 & -256;
}

// Address range: 0xece7e - 0xece7f
int64_t function_ece7e(void) {
    // 0xece7e
    int64_t result; // 0xece7e
    return result;
}

// Address range: 0xecf72 - 0xecf82
int64_t function_ecf72(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 43); // 0xecf72
    uint32_t v2 = *v1; // 0xecf72
    *v1 = v2 + 0xdd48729;
    int64_t v3 = unknown_ffffffffd704687f(a1, a2); // 0xecf79
    return (v3 - (v2 < 0xf22b78d7 ? 158 : 157)) % 256 | v3 & -256;
}

// Address range: 0x149513 - 0x14951a
int64_t function_149513(int32_t a1) {
    // 0x149513
    int64_t result; // 0x149513
    return result;
}

// Address range: 0x149576 - 0x149579
int64_t function_149576(int64_t a1, int64_t a2, int64_t a3) {
    // 0x149576
    return function_1495e6();
}

// Address range: 0x14957e - 0x149590
int64_t function_14957e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14957e
    int64_t v1; // 0x14957e
    int64_t v2 = v1;
    *(int32_t *)v2 = ((int32_t)v1 ^ 0x3d00fc8c) + (int32_t)v2;
    return function_149513(*(int32_t *)(a4 + 51) | (int32_t)a1);
}

// Address range: 0x1495e6 - 0x1495e7
int64_t function_1495e6(void) {
    // 0x1495e6
    int64_t result; // 0x1495e6
    return result;
}

// Address range: 0x149680 - 0x149689
int64_t function_149680(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    unsigned char v1 = (char)a4 % 32; // 0x149680
    if (v1 != 0) {
        int64_t v2; // 0x149680
        char * v3 = (char *)(v2 + 98); // 0x149680
        unsigned char v4 = *v3; // 0x149680
        bool v5; // 0x149680
        *v3 = v4 >> v1 | (char)v5 << 8 - v1 | (char)((int16_t)v4 << (int16_t)(9 - v1));
    }
    return result;
}

// Address range: 0x2f4a1e - 0x2f4a23
int64_t function_2f4a1e(void) {
    // 0x2f4a1e
    int64_t v1; // 0x2f4a1e
    int64_t v2 = v1;
    int64_t v3 = v1;
    *(char *)v2 = (char)v2 + 126;
    return (v3 + 8) % 256 | v3 & -256;
}

// Address range: 0x2f4a24 - 0x2f4a2e
int64_t function_2f4a24(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2f4a24
    int64_t v1; // 0x2f4a24
    char * v2 = (char *)(v1 - 78); // 0x2f4a25
    *v2 = *v2 + (char)(v1 / 256);
    return unknown_7937aa2e(a1, a2, a3, a4, a5);
}

// Address range: 0x2f4a2e - 0x2f4a6a
int64_t function_2f4a2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f4a2e
    int64_t v1; // 0x2f4a2e
    __asm_out_134((int16_t)a3, (int32_t)v1);
    bool v2; // 0x2f4a2e
    if (!v2) {
        // 0x2f4a5d
        return unknown_1052a563();
    }
    int64_t v3 = v2 ? -1 : 1; // 0x2f4a51
    int32_t * v4 = (int32_t *)(a4 - 11); // 0x2f4a54
    *v4 = *v4 + (int32_t)a4;
    return unknown_ffffffffd030875d(v3 + a1, v3 + a2);
}

// Address range: 0x2f4a6b - 0x2f4aa5
int64_t function_2f4a6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x2f4a6b
    char * v3 = (char *)((v2 & 0xffffffff) + 0x75582); // 0x2f4a6c
    char v4 = *v3; // 0x2f4a6c
    char v5 = v2; // 0x2f4a6c
    char v6 = v4 + v5; // 0x2f4a6c
    *v3 = v6;
    if (v6 < 0 == ((v6 ^ v4) & (v6 ^ v5)) < 0 == (v6 != 0)) {
        // 0x2f4a9f
        return function_ffffffffe77f714f();
    }
    int64_t v7 = (a4 + 120) % 256 | a4 & 0xffffff00; // 0x2f4a79
    *(int32_t *)a1 = (int32_t)v7;
    *(char *)v1 = *(char *)&v1 & v5;
    int32_t * v8 = (int32_t *)(v7 - 0x2fe1703); // 0x2f4a86
    *v8 = *v8 ^ (int32_t)v1;
    return v7 ^ 0x15cffde0;
}

// Address range: 0x2f4ac2 - 0x2f4acf
int64_t function_2f4ac2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2f4ac2
    int64_t v1; // 0x2f4ac2
    uint64_t v2 = v1;
    uint32_t v3 = (int32_t)v1; // 0x2f4ac2
    uint32_t v4 = v3 + (int32_t)v1; // 0x2f4ac2
    bool v5; // 0x2f4ac2
    uint32_t result = v4 + (int32_t)v5; // 0x2f4ac2
    bool v6 = v5 ? result <= v3 : v4 < v3; // 0x2f4ac2
    *(char *)a4 = -112;
    char * v7 = (char *)(v2 + a3 + (int64_t)v6 & 0xffffffff); // 0x2f4ac9
    *v7 = *v7 | (char)(v2 / 256);
    return result;
}

// Address range: 0x2f4b3b - 0x2f4b65
int64_t function_2f4b3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffb8923b41() & 0xffffffff; // 0x2f4b40
    int64_t v2 = unknown_ffffffffe83b084c() + 0x6cd1240d; // 0x2f4b4b
    *(int32_t *)a1 = *(int32_t *)v1;
    unsigned char v3 = (char)a4 % 32; // 0x2f4b51
    if (v3 != 0) {
        char * v4 = (char *)((v2 & 0xffffffff) - 24); // 0x2f4b51
        *v4 = *v4 << v3;
    }
    bool v5; // 0x2f4b3b
    int64_t v6 = v5 ? -4 : 4; // 0x2f4b50
    int32_t * v7 = (int32_t *)(a3 + 99); // 0x2f4b54
    *v7 = *v7 + (int32_t)a4;
    *(char *)0x1e82a4b2a051dbd = (char)v2;
    return function_fffffffff0ab55fe(v6 + a1, v1 + v6);
}

// Address range: 0x2f4b81 - 0x2f4b86
int64_t function_2f4b81(void) {
    // 0x2f4b81
    return function_ffffffffdae7290f();
}

// Address range: 0x2f4bcc - 0x2f4bcd
int64_t function_2f4bcc(void) {
    // 0x2f4bcc
    int64_t result; // 0x2f4bcc
    return result;
}

// Address range: 0x2f4c1f - 0x2f4c25
int64_t function_2f4c1f(int64_t a1, int64_t a2) {
    // 0x2f4c1f
    int64_t v1; // 0x2f4c1f
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x2f4c1f
    int64_t v3 = v2 ? -4 : 4; // 0x2f4c1f
    return function_33f55458(v3 + a1, v3 + a2);
}

// Address range: 0x2f4c63 - 0x2f4c64
int64_t function_2f4c63(void) {
    // 0x2f4c63
    int64_t result; // 0x2f4c63
    return result;
}

// Address range: 0x2f4c6a - 0x2f4c6f
int64_t function_2f4c6a(void) {
    // 0x2f4c6a
    return function_54a0771d();
}

// Address range: 0x2f4c81 - 0x2f4c82
int64_t function_2f4c81(int64_t a1) {
    // 0x2f4c81
    int64_t result; // 0x2f4c81
    return result;
}

// Address range: 0x2f4c86 - 0x2f4c87
int64_t function_2f4c86(void) {
    // 0x2f4c86
    int64_t result; // 0x2f4c86
    return result;
}

// Address range: 0x2f4ccc - 0x2f4ccd
int64_t function_2f4ccc(void) {
    // 0x2f4ccc
    int64_t result; // 0x2f4ccc
    return result;
}

// Address range: 0x2f4cd6 - 0x2f4cd8
int64_t function_2f4cd6(void) {
    // 0x2f4cd6
    return function_2f4c86();
}

// Address range: 0x2f4cf2 - 0x2f4cf3
int64_t function_2f4cf2(void) {
    // 0x2f4cf2
    int64_t result; // 0x2f4cf2
    return result;
}

// Address range: 0x2f4d03 - 0x2f4d07
int64_t function_2f4d03(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f4d03
    int64_t v1; // 0x2f4d03
    bool v2; // 0x2f4d03
    return v1 & -0x10000 | (int64_t)__asm_in((int16_t)a3) | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x2f4d0a - 0x2f4d56
int64_t function_2f4d0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2f4d0a
    int64_t v1; // 0x2f4d0a
    int64_t v2 = v1;
    int64_t v3 = a3;
    bool v4; // 0x2f4d0a
    if (v4 || false) {
        // 0x2f4d44
        *(int32_t *)v2 = 2 * (int32_t)v2;
        int64_t v5; // 0x2f4d0a
        if ((v2 & 8) == 0) {
            v5 = function_2f4ccc();
        }
        char v6 = *(char *)(2 * v1 - 118); // 0x2f4d4c
        char v7 = *(char *)(a4 & -256 | (int64_t)(v6 | (char)a4)); // 0x2f4d51
        int64_t result = v5; // 0x2f4d54
        if (v7 != (char)v1) {
            result = function_2f4cf2();
        }
        // 0x2f4d56
        return result;
    }
    // 0x2f4d0c
    unknown_363bc514();
    char v8 = *(char *)-0x866cbe6 + (char)(v1 / 256); // 0x2f4d13
    unsigned char v9 = llvm_ctpop_i8(v8); // 0x2f4d13
    *(char *)-0x866cbe6 = v8;
    __asm_wait();
    *(char *)a1 = __asm_insb((int16_t)a3);
    while (v9 % 2 != 0) {
        // continue -> 0x2f4d1b
    }
    // 0x2f4d1d
    __asm_iretd();
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)__asm_sti();
    return function_36deb6();
}

// Address range: 0x2f4dcb - 0x2f4dce
int64_t function_2f4dcb(void) {
    // 0x2f4dcb
    int64_t result; // 0x2f4dcb
    return result;
}

// Address range: 0x2f4e0f - 0x2f4e11
int64_t function_2f4e0f(int64_t a1) {
    // 0x2f4e0f
    int64_t result; // 0x2f4e0f
    return result;
}

// Address range: 0x2f4e3a - 0x2f4e3b
int64_t function_2f4e3a(void) {
    // 0x2f4e3a
    int64_t result; // 0x2f4e3a
    return result;
}

// Address range: 0x2f4e78 - 0x2f4e8d
int64_t function_2f4e78(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    // 0x2f4e78
    int64_t v1; // 0x2f4e78
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a4;
    __asm_wait();
    int64_t result = unknown_260f4d8c(); // 0x2f4e8b
    int64_t v2; // 0x2f4e78
    if (a4 != 1 == *(char *)&v2 == -(char)(a5 / 256)) {
        result = function_2f4e3a();
    }
    // 0x2f4e8d
    return result;
}

// Address range: 0x2f4e8e - 0x2f4e93
int64_t function_2f4e8e(void) {
    // 0x2f4e8e
    return function_fffffffff934bf03();
}

// Address range: 0x2f4e93 - 0x2f4ea1
int64_t function_2f4e93(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f4e93
    unknown_44245f99(a1, a2, a3, a4);
    return function_68a685f7();
}

// Address range: 0x2f4f2a - 0x2f4f3f
int64_t function_2f4f2a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = unknown_7a28ca31(); // 0x2f4f2a
    char * v2 = (char *)(a1 + 9); // 0x2f4f30
    *v2 = *v2 + (char)(v1 / 256);
    int64_t v3; // 0x2f4f2a
    *(char *)a2 = *(char *)&v3 + 1;
    int64_t v4 = -115; // bp-8, 0x2f4f35
    int32_t * v5 = (int32_t *)(a4 - 8); // 0x2f4f39
    *v5 = *v5 + (int32_t)(int64_t)&v4;
    return function_2f4f70(a1, a2, a3);
}

// Address range: 0x2f4f6e - 0x2f4f70
int64_t function_2f4f6e(int64_t a1, int64_t a2) {
    // 0x2f4f6e
    int64_t result; // 0x2f4f6e
    *(char *)a2 = (char)result / 2;
    return result;
}

// Address range: 0x2f4f70 - 0x2f4f7d
int64_t function_2f4f70(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2f4f70
    return __asm_hlt();
}

// Address range: 0x2f4fcf - 0x2f4fd9
int64_t function_2f4fcf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2f4fcf
    int64_t v1; // 0x2f4fcf
    *(char *)a1 = (char)v1 + (char)a3;
    char * v2 = (char *)(v1 - 24); // 0x2f4fd1
    *v2 = *v2 + (char)a4;
    uint32_t v3 = (int32_t)a4 % 32; // 0x2f4fd4
    int64_t result; // 0x2f4fcf
    if (v3 != 0) {
        uint32_t v4 = *(int32_t *)&result; // 0x2f4fd4
        *(int32_t *)result = v4 >> 32 - v3 | v4 << v3;
    }
    return result;
}

// Address range: 0x2f4fef - 0x2f4ff4
int64_t function_2f4fef(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f4fef
    int64_t v1; // 0x2f4fef
    int64_t v2 = v1;
    return (v2 + a4) % 256 | v2 & -0x10000 | (v2 | a3) & 0xff00;
}

// Address range: 0x2f521e - 0x2f5295
int64_t function_2f521e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t result = __asm_hlt(); // 0x2f5223
    int64_t v2; // 0x2f521e
    if (*(char *)(v2 - 89) <= -1 - (char)a3) {
        // 0x2f5226
        *(char *)0x6b86b22d = *(char *)0x6b86b22d + (char)(v2 / 256);
        return result;
    }
    int64_t v3 = a4 & -256 | 208; // 0x2f521e
    char * v4 = (char *)v3; // 0x2f5262
    *v4 = (char)(a4 / 256) + 1 + *v4;
    int64_t v5; // 0x2f521e
    __asm_rcl(*(char *)&v5);
    uint32_t v6 = *(int32_t *)&v1; // 0x2f5266
    int64_t v7 = v3 & 0xffffffd0; // 0x2f5267
    *(int32_t *)(2 * (int64_t)v6 + v7) = (int32_t)a1;
    int32_t * v8 = (int32_t *)(v7 - 0x75ff8ddf); // 0x2f5275
    *v8 = *v8 + (int32_t)v2;
    __asm_int1();
    bool v9; // 0x2f521e
    if (v6 == -*(int32_t *)(v1 + (v9 ? 0x3d001871 : 0x3d001879))) {
        int64_t result2 = __asm_int1(); // 0x2f5291
        __asm_out(15, (int32_t)result2);
        return result2;
    }
    int64_t result3 = unknown_68b3b58d(); // 0x2f5287
    char * v10 = (char *)result3; // 0x2f528c
    *v10 = *v10 + (char)result3;
    return result3;
}

// Address range: 0x2f52f2 - 0x2f52ff
int64_t function_2f52f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f52f2
    int64_t v1; // 0x2f52f2
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a4;
    return function_ffffffffe8fda1e8();
}

// Address range: 0x2f5308 - 0x2f530c
int64_t function_2f5308(int64_t a1) {
    // 0x2f5308
    int64_t v1; // 0x2f5308
    return function_2f5348(a1, v1, v1, v1);
}

// Address range: 0x2f533c - 0x2f533f
int64_t function_2f533c(int64_t a1) {
    // 0x2f533c
    int64_t result; // 0x2f533c
    return result;
}

// Address range: 0x2f5348 - 0x2f5352
int64_t function_2f5348(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = __asm_hlt(); // 0x2f5350
    int64_t v1; // 0x2f5348
    if ((v1 + a4 & 0xffffffff) == 0) {
        result = function_2f52f2(a1, a2, a3, 0);
    }
    // 0x2f5352
    return result;
}

// Address range: 0x2f5389 - 0x2f538a
int64_t function_2f5389(void) {
    // 0x2f5389
    int64_t result; // 0x2f5389
    return result;
}

// Address range: 0x2f538e - 0x2f538f
int64_t function_2f538e(void) {
    // 0x2f538e
    int64_t result; // 0x2f538e
    return result;
}

// Address range: 0x2f539d - 0x2f539e
int64_t function_2f539d(int64_t a1) {
    // 0x2f539d
    int64_t result; // 0x2f539d
    return result;
}

// Address range: 0x2f53be - 0x2f53fa
int64_t function_2f53be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2; // 0x2f53be
    int64_t v3 = v2 & 0xffffffff ^ 0xc1be8ee7; // 0x2f53be
    uint64_t v4 = v3 + 24; // 0x2f53c5
    int64_t v5 = v3 & 0xffffff00; // 0x2f53c5
    int64_t v6 = v4 % 256 | v5; // 0x2f53c5
    int32_t * v7 = (int32_t *)v6; // 0x2f53c7
    *v7 = *v7 + (int32_t)v6;
    unsigned char v8 = (char)v4; // 0x2f53c9
    unsigned char v9 = *(char *)(a1 + 0x532b1a36 + v2) + v8; // 0x2f53c9
    int64_t v10 = v5 | (int64_t)v9; // 0x2f53d0
    if (v9 >= v8 && v9 != 0) {
        v10 = function_2f5389();
    }
    int32_t * v11 = (int32_t *)(a2 - 0x49b4bc3a); // 0x2f53d4
    *v11 = *v11 + (int32_t)v1;
    __asm_out(-26, (int32_t)v10);
    *(int32_t *)v1 = *(int32_t *)&v1 - 0x17a62d0b;
    __asm_sti();
    unknown_168f26f9();
    return function_2f538e();
}

// Address range: 0x2f5409 - 0x2f540c
int64_t function_2f5409(int64_t a1) {
    // 0x2f5409
    int64_t result; // 0x2f5409
    return result;
}

// Address range: 0x2f541b - 0x2f541e
int64_t function_2f541b(int64_t a1) {
    // 0x2f541b
    int64_t result; // 0x2f541b
    return result;
}
