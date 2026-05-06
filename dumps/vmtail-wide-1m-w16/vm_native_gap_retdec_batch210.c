/*
 * Targeted RetDec C for native executable gap queue batch 210.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x17c885-0x17ca85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x17ca85-0x17cc85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x17cc85-0x17ce85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e3a1e-0x2e3c1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e3c1e-0x2e3e1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e3e1e-0x2e401e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e401e-0x2e421e rank=- name=- kind=- bytes=- uncovered=-
 *   0x140f13-0x141113 rank=- name=- kind=- bytes=- uncovered=-
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
char __asm_in_136(uint16_t port);
char __asm_in_137(uint16_t port);
int32_t __asm_in_138(uint16_t port);
char __asm_insb(uint16_t port);
int32_t __asm_insd(uint16_t port);
void __asm_out(uint16_t port, char value);
void __asm_out_133(uint16_t port, int32_t value);
void __asm_out_134(uint16_t port, int32_t value);
void __asm_out_135(uint16_t port, int32_t value);
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
void __asm_rep_movsb_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_stosb_memset(char *dst, char value, int64_t count);
void __asm_rep_stosd_memset(char *dst, int32_t value, int64_t count);
void __asm_rep_stosq_memset(char *dst, int64_t value, int64_t count);
void __asm_rep_movsd_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_movsq_memcpy(char *dst, char *src, int64_t count);
int64_t __asm_hlt();
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_wait(void);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
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

int64_t function_140f13(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_140f36(void);
int64_t function_140f40(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_140f59(void);
int64_t function_140f6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_140fba(void);
int64_t function_140fe3(void);
int64_t function_141027(void);
int64_t function_14102a(void);
int64_t function_14108b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1410f1(void);
int64_t function_17c885(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17c8b0(int64_t a1);
int64_t function_17c8b3(int64_t a1);
int64_t function_17c8cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17c9b7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_17ca3d(int64_t a1, int64_t a2);
int64_t function_17cadd(int64_t a1);
int64_t function_17caec(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_17cb47(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17cb53(int64_t a1, int64_t a2);
int64_t function_17cb6f(int64_t a1);
int64_t function_17cbcb(void);
int64_t function_17cc31(void);
int64_t function_17cc83(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17cce3(void);
int64_t function_17ccec(void);
int64_t function_17cd21(void);
int64_t function_17cd50(int64_t a1, int64_t a2, int64_t a3);
int64_t function_17cd8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e39cd();
int64_t function_2e3a1e(void);
int64_t function_2e3a26(int64_t a1);
int64_t function_2e3a5c(void);
int64_t function_2e3a66(int64_t a1);
int64_t function_2e3a72(void);
int64_t function_2e3aa2(int64_t a1);
int64_t function_2e3afc(void);
int64_t function_2e3c23(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e3c79(void);
int64_t function_2e3c95(void);
int64_t function_2e3c97(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e3cc8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2e3cea(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e3d95(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e3d9c(void);
int64_t function_2e3dad(int64_t a1, int64_t a2);
int64_t function_2e3e22(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2e3ea8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e3f69(void);
int64_t function_2e3f91(int64_t a1);
int64_t function_2e3fb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e404f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2e41bb(int64_t a1);
int64_t function_c4258();
int64_t function_ffffffff83e5d7fb();
int64_t function_ffffffffac33f5e6();
int64_t unknown_106c3797();
int64_t unknown_10a83724();
int64_t unknown_1c90ef6();
int64_t unknown_290773c6();
int64_t unknown_3849d550();
int64_t unknown_3d302537();
int64_t unknown_4d0d5ad7();
int64_t unknown_58a8737f();
int64_t unknown_6a961602();
int64_t unknown_ffffffff9dc42ace();
int64_t unknown_ffffffffab380aa8();
int64_t unknown_ffffffffabccdf7c();
int64_t unknown_ffffffffb4a5a75b();
int64_t unknown_ffffffffbb1610b7();
int64_t unknown_ffffffffbebe9877();
int64_t unknown_ffffffffbf19b5dc();
int64_t unknown_ffffffffdf0f53ae();
int64_t unknown_ffffffffe8177c82();
int64_t unknown_fffffffff72ef13e();

// Address range: 0x140f13 - 0x140f1e
int64_t function_140f13(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x140f13
    int64_t result; // 0x140f13
    bool v1; // 0x140f13
    if (a4 == 1 || v1) {
        // 0x140f15
        return result;
    }
    // 0x140f1b
    __asm_out((int16_t)a3 % 256 | (int16_t)&g2, (char)result);
    return result;
}

// Address range: 0x140f36 - 0x140f37
int64_t function_140f36(void) {
    // 0x140f36
    int64_t result; // 0x140f36
    return result;
}

// Address range: 0x140f40 - 0x140f52
int64_t function_140f40(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x140f40
    return function_ffffffff83e5d7fb();
}

// Address range: 0x140f59 - 0x140f5a
int64_t function_140f59(void) {
    // 0x140f59
    int64_t result; // 0x140f59
    return result;
}

// Address range: 0x140f6b - 0x140fa0
int64_t function_140f6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x140f6b
    int64_t v1; // 0x140f6b
    int64_t v2 = llvm_ctpop_i8((char)v1) % 2 == 0 ? v1 : a3;
    char v3 = v2; // 0x140f71
    char v4 = v3 - 65; // 0x140f71
    int64_t v5 = v2 & 0xffffff00 | (int64_t)v4; // 0x140f71
    if (v4 < 0 != ((v4 ^ v3) & v3 + 63) < 0) {
        v5 = function_140f36();
    }
    int64_t v6 = unknown_58a8737f(); // 0x140f79
    char * v7 = (char *)(int64_t)(*(int32_t *)0x73b176fcf2013d00 | 213); // 0x140f8e
    char v8 = a4; // 0x140f8e
    *v7 = (char)((int32_t)v1 < 123) + v8 + *v7;
    int32_t result = __asm_in((int16_t)v1); // 0x140f90
    *(char *)(v1 & 0xffffffff) = *(char *)&v5 + v8;
    *(int64_t *)((v6 & 0xffffffff) + 8) = -0x53fec300;
    __asm_int(-102);
    return result;
}

// Address range: 0x140fba - 0x140fbc
int64_t function_140fba(void) {
    // 0x140fba
    return function_140f59();
}

// Address range: 0x140fe3 - 0x140fe6
int64_t function_140fe3(void) {
    // 0x140fe3
    int64_t result; // 0x140fe3
    return result;
}

// Address range: 0x141027 - 0x14102a
int64_t function_141027(void) {
    // 0x141027
    int64_t result; // 0x141027
    return result;
}

// Address range: 0x14102a - 0x14102b
int64_t function_14102a(void) {
    // 0x14102a
    int64_t result; // 0x14102a
    return result;
}

// Address range: 0x14108b - 0x1410f0
int64_t function_14108b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x14108b
    bool v3; // 0x14108b
    int64_t v4 = v2 + 0x62008000 + v2 + (int64_t)v3; // 0x141090
    int32_t v5 = (int32_t)v4 + (int32_t)a3; // 0x141092
    *(int32_t *)a3 = v5;
    int64_t v6 = v4 & 0xffffffff; // 0x141095
    if (v5 >= 0) {
        v6 = function_14102a();
    }
    int64_t v7 = v6 / 256 % 256 | v2; // 0x14109f
    __asm_int3();
    unknown_ffffffffab380aa8();
    char * v8 = (char *)(a2 + 24); // 0x1410a7
    unsigned char v9 = (char)v7; // 0x1410a7
    *v8 = *v8 + v9;
    unsigned char v10 = *(char *)(a1 + 4); // 0x1410aa
    int64_t v11 = unknown_ffffffffbb1610b7(); // 0x1410b1
    unsigned char v12 = (char)a4 % 32; // 0x1410b6
    if (v12 != 0) {
        char * v13 = (char *)(v11 - 0x6060f29f); // 0x1410b6
        unsigned char v14 = *v13; // 0x1410b6
        *v13 = (char)(v10 > v9) << 8 - v12 | v14 >> v12 | (char)((int16_t)v14 << (int16_t)(9 - v12));
    }
    int64_t v15 = a2; // bp-23023, 0x1410bc
    uint32_t v16 = __asm_in((int16_t)v1); // 0x1410bd
    unknown_290773c6();
    unsigned char v17 = (char)v1;
    unsigned char v18 = 2 * v17; // 0x1410c5
    *(char *)v1 = v18;
    uint64_t result = (int64_t)&v15; // 0x1410c7
    *(int32_t *)v1 = *(int32_t *)&v1 | (int32_t)a1;
    char * v19 = (char *)((int64_t)v16 + 0x1e848ca); // 0x1410da
    char v20 = *v19 + (char)((v7 - a1 + (int64_t)(v18 < v17)) / 256); // 0x1410da
    *v19 = v20;
    if (v20 < 1) {
        // 0x14111d
        return result;
    }
    // 0x1410e2
    *(char *)v1 = (char)(result / 256);
    return 256 * (int64_t)*(char *)&v1 | result & -0xff08;
}

// Address range: 0x1410f1 - 0x141110
int64_t function_1410f1(void) {
    int64_t result = unknown_6a961602(0x2a18e914); // 0x1410fc
    int64_t v1; // 0x1410f1
    char * v2 = (char *)(v1 + 123); // 0x141101
    char v3 = result; // 0x141101
    *v2 = *v2 | v3;
    *(char *)0x1e8500003bbac8d = v3;
    return result;
}

// Address range: 0x17c885 - 0x17c896
int64_t function_17c885(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17c885
    int64_t v1; // 0x17c885
    int64_t v2 = v1 + a3; // 0x17c88e
    *(char *)a1 = (char)v2;
    int64_t v3; // 0x17c885
    char v4 = *(char *)&v3; // 0x17c893
    *(char *)a4 = (char)(-1 - (int32_t)a2 < (int32_t)a1) - (char)a4 + v4;
    return v2 & 0xffffffff;
}

// Address range: 0x17c8b0 - 0x17c8b3
int64_t function_17c8b0(int64_t a1) {
    // 0x17c8b0
    int64_t v1; // 0x17c8b0
    return function_17c8cf(v1, v1, v1, v1, v1);
}

// Address range: 0x17c8b3 - 0x17c8b4
int64_t function_17c8b3(int64_t a1) {
    // 0x17c8b3
    int64_t result; // 0x17c8b3
    return result;
}

// Address range: 0x17c8cf - 0x17c8da
int64_t function_17c8cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x17c8cf
    int64_t v1; // 0x17c8cf
    return __asm_in((int16_t)v1);
}

// Address range: 0x17c9b7 - 0x17c9e5
int64_t function_17c9b7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x17c9b7
    int64_t result; // 0x17c9b7
    bool v1; // 0x17c9b7
    if (v1) {
        int32_t * v2 = (int32_t *)(a4 - 0x5ffedc88); // 0x17c9c9
        *v2 = *v2 + (int32_t)a4;
        uint64_t v3 = a3 / 256; // 0x17c9cf
        int64_t v4 = unknown_4d0d5ad7(); // 0x17c9d1
        int64_t v5 = (v4 + (2 * (char)v3 < (char)v3 ? 41 : 40)) % 256 | v4 & -256; // 0x17c9d6
        char * v6 = (char *)v5; // 0x17c9d8
        *v6 = *v6 + (char)a4;
        int32_t * v7 = (int32_t *)(result - 0x69e5c5bd); // 0x17c9df
        *v7 = *v7 + (int32_t)(512 * v3 & 0xfe00 | a3 & 0xffff00ff);
        return v5 + 0xe84e7d94 & 0xffffffff;
    }
    // 0x17c9b9
    return result;
}

// Address range: 0x17ca3d - 0x17ca45
int64_t function_17ca3d(int64_t a1, int64_t a2) {
    // 0x17ca3d
    int64_t result; // 0x17ca3d
    return result;
}

// Address range: 0x17cadd - 0x17cadf
int64_t function_17cadd(int64_t a1) {
    // 0x17cadd
    int64_t result; // 0x17cadd
    return result;
}

// Address range: 0x17caec - 0x17cb13
int64_t function_17caec(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x17caec
    int64_t v1; // 0x17caec
    int32_t * v2 = (int32_t *)(v1 - 43); // 0x17caec
    uint32_t v3 = *v2; // 0x17caec
    int32_t v4 = v3 < 0; // 0x17caec
    *v2 = 2 * v3 | v4;
    uint64_t result = unknown_1c90ef6(); // 0x17caf0
    if (v3 / 0x40000000 % 2 != v4) {
        // 0x17caf7
        return result;
    }
    // 0x17cafa
    *(int32_t *)0x1e801e83dc256d2 = (int32_t)result;
    int32_t * v5 = (int32_t *)(v1 - 41); // 0x17cb08
    uint32_t v6 = *v5; // 0x17cb08
    uint32_t v7 = v6 + (int32_t)v1; // 0x17cb08
    *v5 = v7;
    int64_t v8; // 0x17caec
    *(char *)v8 = *(char *)&v8 - (char)v1;
    return 256 * (result / 256 + a3 / 256 + (int64_t)(v7 < v6)) & 0xff00 | result & -0xff01;
}

// Address range: 0x17cb47 - 0x17cb52
int64_t function_17cb47(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17cb47
    int64_t result; // 0x17cb47
    return result;
}

// Address range: 0x17cb53 - 0x17cb60
int64_t function_17cb53(int64_t a1, int64_t a2) {
    // 0x17cb53
    int64_t result; // 0x17cb53
    return result;
}

// Address range: 0x17cb6f - 0x17cb70
int64_t function_17cb6f(int64_t a1) {
    // 0x17cb6f
    int64_t result; // 0x17cb6f
    return result;
}

// Address range: 0x17cbcb - 0x17cbcc
int64_t function_17cbcb(void) {
    // 0x17cbcb
    int64_t result; // 0x17cbcb
    return result;
}

// Address range: 0x17cc31 - 0x17cc33
int64_t function_17cc31(void) {
    // 0x17cc31
    return function_17cbcb();
}

// Address range: 0x17cc83 - 0x17cc88
int64_t function_17cc83(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x17cc83
    int64_t result; // 0x17cc83
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x17cce3 - 0x17cce4
int64_t function_17cce3(void) {
    // 0x17cce3
    int64_t result; // 0x17cce3
    return result;
}

// Address range: 0x17ccec - 0x17cced
int64_t function_17ccec(void) {
    // 0x17ccec
    int64_t result; // 0x17ccec
    return result;
}

// Address range: 0x17cd21 - 0x17cd2b
int64_t function_17cd21(void) {
    // 0x17cd21
    return function_ffffffffac33f5e6();
}

// Address range: 0x17cd50 - 0x17cd6a
int64_t function_17cd50(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 0x1e8ffa8); // 0x17cd50
    int32_t v2 = *v1; // 0x17cd50
    int32_t v3 = a2; // 0x17cd50
    int32_t v4 = v2 + v3; // 0x17cd50
    *v1 = v4;
    if (v4 < 0 != ((v4 ^ v2) & (v4 ^ v3)) < 0) {
        function_17cce3();
    }
    char v5 = *(char *)0x77483c68; // 0x17cd61
    int64_t v6; // 0x17cd50
    *(char *)0x77483c68 = v5 + (char)((uint64_t)v6 / 256);
    __asm_wait();
    return function_17ccec();
}

// Address range: 0x17cd8a - 0x17ce83
int64_t function_17cd8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17cd8a
    *(char *)a2 = (char)a3 + (char)a2;
    int32_t * v1 = (int32_t *)(a3 + 0x70e9b807); // 0x17cd92
    int64_t v2; // 0x17cd8a
    *v1 = *v1 & (int32_t)v2;
    char * v3 = (char *)(a3 + 0x13d0012 & 0xffffffff); // 0x17cd99
    uint64_t v4 = a3 & 0xffffff00; // 0x17cd99
    int64_t v5 = v4 | (int64_t)*v3; // 0x17cd99
    int3_t v6; // 0x17cd8a
    __frontend_reg_load_fpr(v6);
    *v3 = *v3 + (char)(v4 / 256);
    uint64_t v7 = v5 - ((int32_t)v5 < 0xcec48001 ? 0xfcfce73c : 0xfcfce73b); // 0x17cdab
    int64_t v8 = v7 & 0xffffffff; // 0x17cdab
    char v9 = *(char *)(v8 + 59); // 0x17cdb0
    float80_t v10 = __asm_fbstp(__frontend_reg_load_fpr(v6 + 1)); // 0x17cdd3
    *(float80_t *)((a4 & 0xffffff00 | (int64_t)(v9 | (char)a4)) + 85) = v10;
    int64_t v11 = unknown_ffffffffbf19b5dc(); // 0x17cdd6
    int64_t v12 = -0x126ffec3; // bp-24, 0x17cddb
    int64_t v13 = (int64_t)&v12; // 0x17cddb
    int64_t result = v11 & -256 | (int64_t)__asm_in_133(-96); // 0x17cde0
    char * v14 = (char *)(result + 8 * v2); // 0x17cde3
    unsigned char v15 = (char)v7; // 0x17cde3
    *v14 = *v14 + v15;
    int32_t * v16 = (int32_t *)(v2 + 0x162b5077); // 0x17cde6
    int32_t v17 = *v16 + (int32_t)v13; // 0x17cde6
    *v16 = v17;
    if (v17 != 0) {
        // 0x17cdf0
        return result;
    }
    int32_t v18 = __asm_in_134(-24); // 0x17ce12
    int64_t v19 = 2 * v2 & 0xfffffffe; // 0x17ce14
    char * v20 = (char *)(v19 + 0x72e501e8); // 0x17ce1a
    *v20 = *v20 + (char)(v7 / 256);
    int64_t v21 = v18 ^ 250; // 0x17ce22
    __asm_out_135(-97, (char)v13);
    unsigned char v22 = v15 % 32; // 0x17ce2a
    int64_t * v23; // 0x17cd8a
    int64_t v24; // 0x17cd8a
    if (v22 == 0) {
        int64_t v25 = v21 - 8; // 0x17ce35
        v23 = (int64_t *)v25;
        v24 = v25;
    } else {
        char * v26 = (char *)(v2 - 0x3a5c01cf); // 0x17ce2a
        *v26 = *v26 << v22;
        int64_t v27 = v21 - 8; // 0x17ce35
        char * v28 = (char *)(v8 - 0x61eb70eb); // 0x17ce36
        unsigned char v29 = *v28; // 0x17ce36
        *v28 = v29 >> v22 | v29 << 8 - v22;
        v23 = (int64_t *)v27;
        v24 = v27;
    }
    int3_t v30 = v6 + 2; // 0x17cdd3
    float80_t v31 = __frontend_reg_load_fpr(v30); // 0x17ce47
    __frontend_reg_store_fpr(v30, (float80_t)*(int32_t *)(v21 + 0x2601e822) - v31);
    unknown_3849d550();
    int64_t v32 = unknown_ffffffffb4a5a75b(0x2cb53a70); // 0x17ce55
    int32_t * v33 = (int32_t *)(v13 - 0x17f72df9 + v8); // 0x17ce5a
    *v33 = *v33 + (int32_t)v32 + (int32_t)(*v23 % 2 != 0);
    uint64_t v34 = v8 + v19; // 0x17ce61
    *(int32_t *)0x2cb53a70 = (int32_t)v24 + 8 + *(int32_t *)0x2cb53a70;
    char v35 = *(char *)0x2601e7ad; // 0x17ce6e
    int64_t result2 = 256 * (int64_t)(v35 | (char)(v34 / 256)) | v34 & 0xffff00ff; // 0x17ce6e
    *(int32_t *)0x2cb53a70 = __asm_insd((int16_t)result2);
    unknown_ffffffffabccdf7c();
    *(int32_t *)0xeb01e8d4 = *(int32_t *)0xeb01e8d4 + (int32_t)v7;
    return result2;
}

// Address range: 0x2e3a1e - 0x2e3a25
int64_t function_2e3a1e(void) {
    int64_t result = unknown_10a83724(); // 0x2e3a23
    bool v1; // 0x2e3a1e
    if (v1) {
        result = function_2e39cd();
    }
    // 0x2e3a25
    return result;
}

// Address range: 0x2e3a26 - 0x2e3a27
int64_t function_2e3a26(int64_t a1) {
    // 0x2e3a26
    int64_t result; // 0x2e3a26
    return result;
}

// Address range: 0x2e3a5c - 0x2e3a5d
int64_t function_2e3a5c(void) {
    // 0x2e3a5c
    int64_t result; // 0x2e3a5c
    return result;
}

// Address range: 0x2e3a66 - 0x2e3a67
int64_t function_2e3a66(int64_t a1) {
    // 0x2e3a66
    int64_t result; // 0x2e3a66
    return result;
}

// Address range: 0x2e3a72 - 0x2e3a74
int64_t function_2e3a72(void) {
    // 0x2e3a72
    return function_2e3a5c();
}

// Address range: 0x2e3aa2 - 0x2e3aa8
int64_t function_2e3aa2(int64_t a1) {
    // 0x2e3aa2
    int64_t result; // 0x2e3aa2
    return result;
}

// Address range: 0x2e3afc - 0x2e3afd
int64_t function_2e3afc(void) {
    // 0x2e3afc
    int64_t result; // 0x2e3afc
    return result;
}

// Address range: 0x2e3c23 - 0x2e3c3b
int64_t function_2e3c23(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 6 + 2 * a4); // 0x2e3c29
    uint32_t v2 = *v1; // 0x2e3c29
    int64_t v3; // 0x2e3c23
    uint32_t v4 = v2 + (int32_t)v3; // 0x2e3c29
    bool v5; // 0x2e3c23
    uint32_t v6 = v4 + (int32_t)v5; // 0x2e3c29
    bool v7 = v5 ? v6 <= v2 : v4 < v2; // 0x2e3c29
    *v1 = v6;
    uint32_t v8 = *(int32_t *)(a2 - 0x7fffd198); // 0x2e3c32
    return (v3 + 0x7001e83f + (int64_t)v7 & 0xffffffff | 0x100000000 * a3) / (int64_t)v8 & 0xffffffff;
}

// Address range: 0x2e3c79 - 0x2e3c7a
int64_t function_2e3c79(void) {
    // 0x2e3c79
    int64_t result; // 0x2e3c79
    return result;
}

// Address range: 0x2e3c95 - 0x2e3c96
int64_t function_2e3c95(void) {
    // 0x2e3c95
    int64_t result; // 0x2e3c95
    return result;
}

// Address range: 0x2e3c97 - 0x2e3cb5
int64_t function_2e3c97(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e3c97
    int64_t v1; // 0x2e3c97
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return a3 & 0xffffff00 | 114;
}

// Address range: 0x2e3cc8 - 0x2e3cea
int64_t function_2e3cc8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = unknown_ffffffff9dc42ace(); // 0x2e3cc8
    int64_t v2 = v1 & -256 | (int64_t)(*(char *)(v1 - 24) ^ (char)v1); // 0x2e3cd5
    int32_t * v3 = (int32_t *)v2; // 0x2e3cd8
    uint32_t v4 = *v3; // 0x2e3cd8
    uint32_t v5 = v4 + (int32_t)a3; // 0x2e3cd8
    *v3 = v5;
    int64_t v6; // 0x2e3cc8
    unsigned char v7 = *(char *)&v6; // 0x2e3cda
    unsigned char v8 = v7 + (char)(a4 / 256); // 0x2e3cda
    unsigned char v9 = v8 + (char)(v5 < v4); // 0x2e3cda
    *(char *)a3 = v9;
    int64_t result = v2; // 0x2e3cdc
    if (v5 < v4 ? v9 <= v7 : v8 < v7) {
        result = function_2e3c79();
    }
    // 0x2e3cde
    int64_t v10; // 0x2e3cc8
    float80_t v11; // 0x2e3cc8
    *(int32_t *)v10 = (int32_t)v11;
    return result;
}

// Address range: 0x2e3cea - 0x2e3d4b
int64_t function_2e3cea(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e3cea
    *(int32_t *)(a3 + 0x1e824b9) = (int32_t)a1;
    int64_t result2; // 0x2e3cea
    bool v1; // 0x2e3cea
    if (v1 || v1) {
        int64_t v2 = a2; // bp-8, 0x2e3d19
        *(int32_t *)(((a3 + 176) % 256 | a3 & 0xffffff00) + 28) = (int32_t)a2;
        result2 = 0x70122a31;
        if ((char)a3 < 81) {
            // 0x2e3d2f
            __asm_int(-99);
            int64_t v3 = unknown_3d302537(); // 0x2e3d31
            int64_t v4; // 0x2e3cea
            int32_t * v5 = (int32_t *)(v4 + 0x1e8102b); // 0x2e3d36
            *v5 = *v5 + (int32_t)(int64_t)&v2;
            int64_t result = v3 + 30 & 73 | v3 & 0x36108100; // 0x2e3d3c
            *(int32_t *)a1 = (int32_t)result;
            return result;
        }
    } else {
        char * v6 = (char *)(a3 - 44); // 0x2e3cff
        unsigned char v7 = *v6; // 0x2e3cff
        unsigned char v8 = (char)a1 % 32; // 0x2e3cff
        result2 = 0x7012b731;
        if (v8 != 0) {
            *v6 = v7 >> 8 - v8 | v7 << v8;
            result2 = 0x7012b731;
        }
    }
    // 0x2e3d29
    return result2;
}

// Address range: 0x2e3d95 - 0x2e3d9b
int64_t function_2e3d95(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e3d95
    *(int32_t *)a4 = 0;
    int64_t result; // 0x2e3d95
    return result;
}

// Address range: 0x2e3d9c - 0x2e3da0
int64_t function_2e3d9c(void) {
    // 0x2e3d9c
    int64_t result; // 0x2e3d9c
    return result;
}

// Address range: 0x2e3dad - 0x2e3dd2
int64_t function_2e3dad(int64_t a1, int64_t a2) {
    char v1 = *(char *)0x588e9dca; // 0x2e3dc3
    *(char *)0x588e9dca = v1 + (char)((int64_t)&g3 >> 8);
    __asm_sti();
    return unknown_fffffffff72ef13e();
}

// Address range: 0x2e3e22 - 0x2e3e89
int64_t function_2e3e22(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    unsigned char v3 = *(char *)(a3 - 29); // 0x2e3e29
    float80_t v4; // 0x2e3e22
    *(int64_t *)0xcd1be78 = (int64_t)v4;
    uint32_t v5 = (int32_t)a4;
    int64_t v6; // 0x2e3e22
    int32_t v7 = v6; // 0x2e3e3b
    int32_t v8 = v7 + v5; // 0x2e3e3b
    *(int32_t *)a4 = v8;
    if (v8 < 0 != ((v8 ^ v5) & (v8 ^ v7)) < 0) {
        int64_t v9 = (v6 & 0xe8367baf) + v6; // 0x2e3e27
        int32_t * v10 = (int32_t *)(a3 & -256 | (int64_t)v3); // 0x2e3e3f
        *v10 = (int32_t)(v8 < v5) + (int32_t)v6 + *v10;
        return (v9 + 93) % 256 | v9 & 0xffffff00;
    }
    // 0x2e3e49
    __asm_iretd();
    *(char *)v1 = *(char *)&v1 + v3;
    int32_t v11 = *(int32_t *)&v2;
    *(int32_t *)v2 = v11 >> 1;
    int32_t * v12 = (int32_t *)(v6 - 0x5cb0c5ee); // 0x2e3e5e
    *v12 = *v12 + v11;
    __asm_in_134(-24);
    __asm_int1();
    unknown_ffffffffbebe9877(((a5 & (int64_t)&g1) == 0 ? 1 : -1) + a1);
    return unknown_ffffffffe8177c82();
}

// Address range: 0x2e3ea8 - 0x2e3f08
int64_t function_2e3ea8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e3ea8
    unknown_ffffffffdf0f53ae();
    float80_t v1; // 0x2e3ea8
    *(float32_t *)a2 = (float32_t)v1;
    uint32_t v2 = *(int32_t *)a5; // 0x2e3ec0
    int64_t result = v2; // 0x2e3ec0
    int32_t * v3 = (int32_t *)(result + 5); // 0x2e3f03
    *v3 = *v3 + v2;
    return result;
}

// Address range: 0x2e3f69 - 0x2e3f6c
int64_t function_2e3f69(void) {
    // 0x2e3f69
    int64_t result; // 0x2e3f69
    return result;
}

// Address range: 0x2e3f91 - 0x2e3f97
int64_t function_2e3f91(int64_t a1) {
    // 0x2e3f91
    return unknown_106c3797(a1);
}

// Address range: 0x2e3fb0 - 0x2e3fb5
int64_t function_2e3fb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e3fb0
    int64_t result; // 0x2e3fb0
    return result;
}

// Address range: 0x2e404f - 0x2e4182
int64_t function_2e404f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2e404f
    int64_t v1; // 0x2e404f
    char * v2 = (char *)(v1 - 0x1e3f9700); // 0x2e404f
    *v2 = *v2 + (char)v1;
    *(char *)169 = *(char *)169 + 82;
    int64_t v3; // bp-32, 0x2e404f
    int64_t v4 = (int64_t)&v3; // 0x2e4123
    v3 = v4;
    int64_t * v5 = (int64_t *)(v4 - 8); // 0x2e412c
    *v5 = 0x2defa6;
    *(int64_t *)(v4 + 32) = v3;
    int64_t v6 = v4 + 8; // 0x2e412f
    int64_t * v7 = (int64_t *)v6; // 0x2e4133
    v3 = *v7;
    *v5 = v6;
    v3 = *v7;
    *v5 = v6;
    return function_c4258(a1);
}

// Address range: 0x2e41bb - 0x2e421a
int64_t function_2e41bb(int64_t a1) {
    // 0x2e41bb
    int64_t result; // 0x2e41bb
    float80_t v1; // 0x2e41bb
    *(int64_t *)(result - 119) = (int64_t)v1;
    return result;
}
