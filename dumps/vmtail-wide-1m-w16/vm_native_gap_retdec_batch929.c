/*
 * Targeted RetDec C for native executable gap queue batch 929.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x34d285-0x34d485 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34d485-0x34d685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34d685-0x34d885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34da85-0x34dc85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x425c1f-0x425e1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x42601f-0x42621f rank=- name=- kind=- bytes=- uncovered=-
 *   0x42621f-0x42641f rank=- name=- kind=- bytes=- uncovered=-
 *   0x42651f-0x42661f rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_34d285(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34d33b(int64_t a1);
int64_t function_34d33f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34d35b(void);
int64_t function_34d35e(void);
int64_t function_34d378(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_34d392(int64_t a1);
int64_t function_34d3a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34d4e9(int64_t a1);
int64_t function_34d4f9(int64_t a1);
int64_t function_34d53c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34d550(int64_t a1);
int64_t function_34d56f(int64_t a1);
int64_t function_34d5db(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34d73b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_34d804(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34d82f(int64_t a1);
int64_t function_34da85(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_34dada(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6);
int64_t function_34db02(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34db58(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34dbb0(int64_t a1);
int64_t function_34dbca(void);
int64_t function_34dbf1(void);
int64_t function_34dbf4(void);
int64_t function_34dc0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34dc26(void);
int64_t function_34dc2a(int64_t a1);
int64_t function_34dc4c(void);
int64_t function_34dc50(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_425bf1();
int64_t function_425c1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_425d95(int64_t a1, int64_t a2);
int64_t function_425dda(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_42601f(void);
int64_t function_42602b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_426075(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4260dd(void);
int64_t function_4260fd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_426103(void);
int64_t function_426108(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_42617b(int64_t a1);
int64_t function_426186(int64_t a1);
int64_t function_4261df(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_42627c(void);
int64_t function_426280(void);
int64_t function_42628a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4262e5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_426338(void);
int64_t function_42633d(int64_t a1, int64_t a2);
int64_t function_4263de(void);
int64_t function_42640c(int64_t a1);
int64_t function_42651f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_426590(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4265c9(int64_t a1);
int64_t function_57e2d535();
int64_t function_ffffffffeda10852();
int64_t unknown_10c47f2b();
int64_t unknown_140f15eb();
int64_t unknown_1f3a3b67();
int64_t unknown_21cd6d3();
int64_t unknown_2335af1b();
int64_t unknown_3d36bf4e();
int64_t unknown_5e259c5b();
int64_t unknown_610b86e3();
int64_t unknown_650aca92();
int64_t unknown_ffffffff9192020a();
int64_t unknown_ffffffffb1a187ff();
int64_t unknown_ffffffffe9c1bb11();
int64_t unknown_fffffffffc36d5f6();

// Address range: 0x34d285 - 0x34d28b
int64_t function_34d285(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 0x9fffec3); // 0x34d285
    int64_t result; // 0x34d285
    *v1 = *v1 ^ (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x34d33b - 0x34d33e
int64_t function_34d33b(int64_t a1) {
    // 0x34d33b
    int64_t v1; // 0x34d33b
    return function_34d378(v1, v1, v1, v1);
}

// Address range: 0x34d33f - 0x34d34d
int64_t function_34d33f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34d33f
    return function_57e2d535();
}

// Address range: 0x34d35b - 0x34d35c
int64_t function_34d35b(void) {
    // 0x34d35b
    int64_t result; // 0x34d35b
    return result;
}

// Address range: 0x34d35e - 0x34d360
int64_t function_34d35e(void) {
    // 0x34d35e
    int64_t result; // 0x34d35e
    return result;
}

// Address range: 0x34d378 - 0x34d38c
int64_t function_34d378(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x7fffcad7); // 0x34d378
    *v1 = *v1 + (int32_t)a3;
    int64_t v2; // 0x34d378
    char * v3 = (char *)(v2 + 0x62000250); // 0x34d37e
    *v3 = *v3 + (char)(a3 / 256);
    int32_t * v4 = (int32_t *)(a4 + 0x3aa4a300); // 0x34d386
    *v4 = *v4 + (int32_t)a1;
    return 2 * v2 & 0xffffffff;
}

// Address range: 0x34d392 - 0x34d394
int64_t function_34d392(int64_t a1) {
    // 0x34d392
    int64_t result; // 0x34d392
    return result;
}

// Address range: 0x34d3a6 - 0x34d3bc
int64_t function_34d3a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_hlt(); // 0x34d3a8
    int32_t v2 = v1; // 0x34d3a9
    *(int32_t *)v1 = v2;
    int64_t v3 = a3 & -0xff01 | (int64_t)&g3; // 0x34d3ab
    int64_t v4; // 0x34d3a6
    *(int32_t *)a1 = *(int32_t *)&v4;
    bool v5; // 0x34d3a6
    int64_t v6 = (v5 ? -4 : 4) + a1; // 0x34d3ae
    *(char *)a4 = (char)a4;
    int64_t v7; // 0x34d3a6
    char * v8 = (char *)((2 * v7 & 0xfffffffe) - 0x50dcfe18 + 8 * v6); // 0x34d3b1
    *v8 = 2 * *v8;
    *(char *)v6 = __asm_insb((int16_t)v3);
    return (int64_t)(*(int32_t *)v3 & v2);
}

// Address range: 0x34d4e9 - 0x34d4ea
int64_t function_34d4e9(int64_t a1) {
    // 0x34d4e9
    int64_t result; // 0x34d4e9
    return result;
}

// Address range: 0x34d4f9 - 0x34d501
int64_t function_34d4f9(int64_t a1) {
    // 0x34d4f9
    int64_t result; // 0x34d4f9
    return result;
}

// Address range: 0x34d53c - 0x34d550
int64_t function_34d53c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34d53c
    int64_t result; // 0x34d53c
    __asm_out_134((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x34d550 - 0x34d552
int64_t function_34d550(int64_t a1) {
    // 0x34d550
    int64_t result; // 0x34d550
    return result;
}

// Address range: 0x34d56f - 0x34d575
int64_t function_34d56f(int64_t a1) {
    // 0x34d56f
    int64_t result; // 0x34d56f
    return result;
}

// Address range: 0x34d5db - 0x34d646
int64_t function_34d5db(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x34d5db
    int64_t v1; // 0x34d5db
    int32_t v2 = v1; // 0x34d5db
    __asm_out(-103, v2 - 0x2b67651a + (int32_t)v1);
    int16_t v3 = a3; // 0x34d5e4
    *(int32_t *)a1 = __asm_insd(v3);
    char * v4 = (char *)(unknown_140f15eb() + 0x30901a55); // 0x34d5ea
    unsigned char v5 = *v4; // 0x34d5ea
    char v6 = v1 / 256; // 0x34d5ea
    unsigned char v7 = v5 + v6; // 0x34d5ea
    *v4 = v7;
    int64_t v8 = unknown_fffffffffc36d5f6(); // 0x34d5f0
    if (v7 == 0) {
        // 0x34d5f7
        unknown_ffffffffb1a187ff();
        __asm_int(8);
        return unknown_ffffffff9192020a();
    }
    int64_t v9 = 0x10000 * (int32_t)v8 >> 16; // 0x34d617
    if (((v7 ^ v5) & (v7 ^ v6)) >= 0) {
        // 0x34d619
        v9 = unknown_21cd6d3();
    }
    if (v7 >= v5) {
        // 0x34d620
        return v9 & -256 | (int64_t)__asm_in_135(v3);
    }
    int64_t v10 = unknown_10c47f2b(); // 0x34d625
    __asm_int(29);
    int64_t v11 = (v10 + 24) % 256 | v10 & -256; // 0x34d630
    int32_t * v12 = (int32_t *)(v11 + 110); // 0x34d633
    *v12 = *v12 + v2;
    return v11 + 0x2801e8ca & 0xffffffff;
}

// Address range: 0x34d73b - 0x34d752
int64_t function_34d73b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x34d73b
    int64_t v1; // 0x34d73b
    char * v2 = (char *)(a1 - 0x50ea7d11 + v1); // 0x34d73b
    unsigned char v3 = *v2; // 0x34d73b
    char v4 = a4 / 256; // 0x34d73b
    unsigned char v5 = v3 + v4; // 0x34d73b
    bool v6; // 0x34d73b
    unsigned char v7 = v5 + (char)v6; // 0x34d73b
    *v2 = v7;
    char * v8 = (char *)(a2 - 0x4ec3ff1d); // 0x34d742
    *v8 = *v8 - v4 + (char)(v6 ? v7 <= v3 : v5 < v3);
    return unknown_3d36bf4e();
}

// Address range: 0x34d804 - 0x34d80d
int64_t function_34d804(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x34d804
    int64_t v1; // 0x34d804
    int64_t v2 = v1;
    char * v3 = (char *)(a4 - 0x6d70fa6e); // 0x34d804
    bool v4; // 0x34d804
    *v3 = (char)v4 - (char)v1 + *v3;
    return (v2 + 222) % 256 | v2 & -256;
}

// Address range: 0x34d82f - 0x34d839
int64_t function_34d82f(int64_t a1) {
    // 0x34d82f
    int64_t result; // 0x34d82f
    int32_t * v1 = (int32_t *)(result - 59); // 0x34d831
    *v1 = *v1 - (int32_t)a1;
    return result;
}

// Address range: 0x34da85 - 0x34daa0
int64_t function_34da85(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x34da88
    int64_t v2; // 0x34da85
    if (v1 != 0) {
        char * v3 = (char *)(v2 + 107); // 0x34da88
        *v3 = *v3 << v1;
    }
    bool v4; // 0x34da85
    __asm_in((int16_t)((v2 / 256 + a3 + (int64_t)v4) % 256 | a3 & 0xff00));
    int64_t v5 = unknown_650aca92(); // 0x34da8c
    __asm_out(112, (int32_t)v5);
    uint64_t v6 = v5 + 0xe82b8070; // 0x34da93
    uint32_t v7 = *(int32_t *)-0x7bc93d61; // 0x34da98
    uint32_t v8 = v7 + (int32_t)a1; // 0x34da98
    *(int32_t *)-0x7bc93d61 = v8;
    return 256 * (v6 / 256 + a4 / 256 + (int64_t)(v8 < v7)) & 0xff00 | v6 & 0xffff00ff;
}

// Address range: 0x34dada - 0x34db02
int64_t function_34dada(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6) {
    unsigned char v1 = (char)a1;
    char v2 = v1 + 70; // 0x34dada
    *(char *)a1 = v2;
    int64_t result = unknown_610b86e3(); // 0x34dadd
    if (v1 < 186 || v2 == 0) {
        // 0x34db00
        return result;
    }
    // 0x34dae5
    int64_t v3; // 0x34dada
    *(char *)result = (char)((uint64_t)v3 / 256);
    *(int32_t *)a1 = __asm_insd((int16_t)((a5 & 0xff00) + a5 & 0xff00 | a5 % 256));
    int32_t * v4 = (int32_t *)(result & -0xff01 | (int64_t)&g4); // 0x34daf4
    int32_t v5 = *v4 + (int32_t)a1; // 0x34daf4
    *v4 = v5;
    if (v5 != 0) {
        // 0x34dafb
        return __asm_int1();
    }
    // 0x34daf8
    return a4 & 0xffffffff;
}

// Address range: 0x34db02 - 0x34db44
int64_t function_34db02(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34db02
    bool v1; // 0x34db02
    if (!v1) {
        int32_t * v2 = (int32_t *)(a1 + 62); // 0x34db41
        *v2 = *v2 + (int32_t)a2;
        int64_t result; // 0x34db02
        return result;
    }
    int64_t result2 = unknown_ffffffffe9c1bb11(); // 0x34db0b
    *(char *)a1 = __asm_insb((int16_t)a3);
    return result2;
}

// Address range: 0x34db58 - 0x34db72
int64_t function_34db58(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = unknown_1f3a3b67(); // 0x34db61
    int64_t v2; // 0x34db58
    return v1 % 256 * ((uint64_t)v2 % 256) | v1 & -0x10000;
}

// Address range: 0x34dbb0 - 0x34dbb3
int64_t function_34dbb0(int64_t a1) {
    // 0x34dbb0
    int64_t result; // 0x34dbb0
    return result;
}

// Address range: 0x34dbca - 0x34dbcb
int64_t function_34dbca(void) {
    // 0x34dbca
    int64_t result; // 0x34dbca
    return result;
}

// Address range: 0x34dbf1 - 0x34dbf3
int64_t function_34dbf1(void) {
    // 0x34dbf1
    return function_34dbca();
}

// Address range: 0x34dbf4 - 0x34dbf5
int64_t function_34dbf4(void) {
    // 0x34dbf4
    int64_t result; // 0x34dbf4
    return result;
}

// Address range: 0x34dc0c - 0x34dc21
int64_t function_34dc0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x34dc0c
    unknown_2335af1b(a5);
    return function_34dbf4();
}

// Address range: 0x34dc26 - 0x34dc29
int64_t function_34dc26(void) {
    // 0x34dc26
    int64_t result; // 0x34dc26
    return result;
}

// Address range: 0x34dc2a - 0x34dc30
int64_t function_34dc2a(int64_t a1) {
    // 0x34dc2a
    return 0x23007997;
}

// Address range: 0x34dc4c - 0x34dc4d
int64_t function_34dc4c(void) {
    // 0x34dc4c
    int64_t result; // 0x34dc4c
    return result;
}

// Address range: 0x34dc50 - 0x34dc70
int64_t function_34dc50(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34dc50
    __asm_int1();
    int64_t v1 = unknown_5e259c5b(); // 0x34dc55
    int64_t v2 = v1 & -50; // 0x34dc5a
    uint64_t v3 = a3 + 0xd0ac4dbe + a4; // 0x34dc5c
    int32_t * v4 = (int32_t *)v2; // 0x34dc63
    *v4 = *v4 + (int32_t)v2;
    char * v5 = (char *)(a2 - 90); // 0x34dc6c
    *v5 = *v5 ^ (char)(v3 / 256);
    return v3 & 0xffffffce & v1;
}

// Address range: 0x425c1f - 0x425d74
int64_t function_425c1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x425c1f
    __asm_hlt();
    *(int32_t *)a1 = 0x8000000 * (int32_t)a1;
    int64_t v1 = __asm_int3(); // 0x425c2d
    char v2 = (char)v1 - 43; // 0x425c30
    if (v2 < 0) {
        // 0x425c89
        return v1 & -256 | (int64_t)v2;
    }
    // 0x425c34
    *(char *)a1 = __asm_insb((int16_t)a3);
    int32_t v3 = __asm_in_133(48); // 0x425c41
    int64_t v4; // 0x425c1f
    int32_t * v5 = (int32_t *)(v4 - 0x3f2ce286); // 0x425c50
    *v5 = *v5 & (int32_t)a2;
    int64_t result = v3; // 0x425c58
    if ((v3 & 16) == 0) {
        result = function_425bf1();
    }
    // 0x425c5a
    return result;
}

// Address range: 0x425d95 - 0x425dd8
int64_t function_425d95(int64_t a1, int64_t a2) {
    // 0x425d95
    int64_t v1; // 0x425d95
    *(char *)a2 = (char)(v1 | v1);
    unsigned char v2 = *(char *)(v1 + (int64_t)*(char *)0x12e4a5020390dc72); // 0x425da5
    return v1 & -256 | (int64_t)v2;
}

// Address range: 0x425dda - 0x425de9
int64_t function_425dda(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x425dda
    __asm_frstor(*(int864_t *)(a2 + 68));
    *(int32_t *)(a4 + 112) = (int32_t)a4;
    int64_t v1; // 0x425dda
    int64_t result = v1 & -48; // 0x425de1
    int32_t * v2 = (int32_t *)(2 * result + v1); // 0x425de3
    bool v3; // 0x425dda
    *v2 = *v2 ^ (int32_t)((v3 ? 0xfffffffc : 4) + a2);
    return result;
}

// Address range: 0x42601f - 0x426020
int64_t function_42601f(void) {
    // 0x42601f
    int64_t result; // 0x42601f
    return result;
}

// Address range: 0x42602b - 0x426054
int64_t function_42602b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x42602b
    int64_t result; // 0x42602b
    bool v1; // 0x42602b
    if (v1) {
        // 0x42602d
        return result;
    }
    // 0x42604f
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x426075 - 0x426097
int64_t function_426075(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x426075
    int64_t v1; // 0x426075
    int64_t result = v1 | 142; // 0x42608a
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x4260dd - 0x4260de
int64_t function_4260dd(void) {
    // 0x4260dd
    int64_t result; // 0x4260dd
    return result;
}

// Address range: 0x4260fd - 0x426102
int64_t function_4260fd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4260fd
    int64_t v1; // 0x4260fd
    __asm_outsb((int16_t)a3, (char)v1);
    return function_426108(a1, a2, a3, v1, v1);
}

// Address range: 0x426103 - 0x426108
int64_t function_426103(void) {
    // 0x426103
    int64_t v1; // 0x426103
    return v1 + 0xd86070ef & 0xffffffff;
}

// Address range: 0x426108 - 0x426157
int64_t function_426108(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 - 0x6739dee7); // 0x426108
    bool v2; // 0x426108
    int32_t v3 = *v1 + (int32_t)v2 - (int32_t)a2; // 0x426108
    *v1 = v3;
    if (v3 >= 0) {
        // 0x42612e
        return (int64_t)*(int32_t *)-0x72ea68aa5338d4bd;
    }
    int64_t result; // 0x426108
    if (a4 != 1 && v3 != 0) {
        result = function_4260dd();
    }
    int64_t v4; // 0x426108
    if (-1 - (int32_t)a5 < (int32_t)v4) {
        int64_t v5 = result;
        int32_t * v6 = (int32_t *)(2 * a1 - 16 + a4); // 0x42614a
        *v6 = *v6 ^ 0x5a3422cd;
        return (v5 + 219) % 256 | v5 & -256;
    }
    int32_t * v7 = (int32_t *)(a4 + 0x1f83432); // 0x42611d
    uint32_t v8 = *v7; // 0x42611d
    *v7 = v8 / 2 | 0x80000000 * v8;
    char * v9 = (char *)(result - 0x450dd7b4); // 0x426123
    *v9 = *v9 + (char)v4;
    int64_t v10 = result;
    *(char *)v10 = *(char *)&result | (char)v10;
    return result;
}

// Address range: 0x42617b - 0x426184
int64_t function_42617b(int64_t a1) {
    // 0x42617b
    int64_t result; // 0x42617b
    return result;
}

// Address range: 0x426186 - 0x426189
int64_t function_426186(int64_t a1) {
    // 0x426186
    int64_t result; // 0x426186
    return result;
}

// Address range: 0x4261df - 0x42625f
int64_t function_4261df(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 + 84); // 0x4261df
    *v1 = *v1 ^ (int32_t)a2;
    __asm_in_136(-113);
    char v2 = *(char *)(a4 + 110); // 0x426256
    int32_t v3 = __asm_insd((int16_t)(256 * (int64_t)(v2 & (char)(a3 / 256)) | a3 % 256)); // 0x426259
    *(int32_t *)a1 = v3;
    __asm_in_136(60);
    return (int64_t)*(int32_t *)0x1a5474a505717;
}

// Address range: 0x42627c - 0x42627e
int64_t function_42627c(void) {
    // 0x42627c
    int64_t result; // 0x42627c
    return result;
}

// Address range: 0x426280 - 0x426282
int64_t function_426280(void) {
    // 0x426280
    int64_t result; // 0x426280
    return result;
}

// Address range: 0x42628a - 0x4262b9
int64_t function_42628a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42628a
    int64_t v1; // 0x42628a
    int32_t * v2 = (int32_t *)(8 * v1 + a3); // 0x426292
    *v2 = (int32_t)a4;
    int64_t v3; // 0x42628a
    *(char *)a3 = *(char *)&v3 & -44;
    *(char *)a1 = __asm_insb((int16_t)((int32_t)v1 >> 31));
    int64_t * v4 = (int64_t *)(v1 + 6); // 0x4262b2
    *v4 = *v4 | (int64_t)*v2;
    return v1 & 0xffffffff;
}

// Address range: 0x4262e5 - 0x42630c
int64_t function_4262e5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4262e5
    int64_t v1; // 0x4262e5
    uint64_t v2 = v1;
    unsigned char v3 = (char)(v1 / 256); // 0x426300
    unsigned char v4 = v3 + (char)(v2 / 256); // 0x426300
    int64_t v5 = v4 < v3 ? 0x4065eed3 : 0x4065eed2; // 0x426302
    *(char *)v2 = (char)(v2 | a3);
    return (256 * (int64_t)v4 | v1 & 0xffff00ff) + v5 & 0xffffff20;
}

// Address range: 0x426338 - 0x42633a
int64_t function_426338(void) {
    // 0x426338
    int64_t v1; // 0x426338
    return function_4262e5(v1, v1, v1);
}

// Address range: 0x42633d - 0x426343
int64_t function_42633d(int64_t a1, int64_t a2) {
    // 0x42633d
    float80_t v1; // 0x42633d
    *(float32_t *)(a1 + 90) = (float32_t)v1;
    int64_t result; // 0x42633d
    return result;
}

// Address range: 0x4263de - 0x4263e5
int64_t function_4263de(void) {
    // 0x4263de
    return function_ffffffffeda10852();
}

// Address range: 0x42640c - 0x42640d
int64_t function_42640c(int64_t a1) {
    // 0x42640c
    int64_t result; // 0x42640c
    return result;
}

// Address range: 0x42651f - 0x426540
int64_t function_42651f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x42651f
    bool v1; // 0x42651f
    int32_t * v2 = (int32_t *)(a2 - 36 + (v1 ? -1 : 1)); // 0x426526
    *v2 = *v2 + (v1 ? 0x737add9 : 0x737add8);
    return (int64_t)*(int32_t *)0x7110c5355e309875;
}

// Address range: 0x426590 - 0x4265ad
int64_t function_426590(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x426590
    int64_t v1; // 0x426590
    int32_t v2 = v1;
    *(int32_t *)(v1 - 65) = v2;
    uint32_t v3 = (v2 + 9) % 32; // 0x426599
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)(a3 - 0x449c1fdc); // 0x426599
        *v4 = *v4 >> v3;
    }
    return (int64_t)*(int32_t *)0x5e15542b9015297c;
}

// Address range: 0x4265c9 - 0x4265d7
int64_t function_4265c9(int64_t a1) {
    // 0x4265c9
    *(int32_t *)0x45d08d16 = *(int32_t *)0x45d08d16 - 90;
    int64_t result; // 0x4265c9
    return result;
}
