/*
 * Targeted RetDec C for native executable gap queue batch 1269.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x17a8aa-0x17aaaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x17aaaa-0x17acaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x17acaa-0x17aeaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x17aeaa-0x17b0aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x17b0aa-0x17b2aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x17b2aa-0x17b4aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x17b4aa-0x17b6aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x17b6aa-0x17b8aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d6869-0x2d6a69 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d6a69-0x2d6c69 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d6c69-0x2d6e69 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d6e69-0x2d7069 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d7069-0x2d7269 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d7269-0x2d7469 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d7469-0x2d7669 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d7669-0x2d7869 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_17a8aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_17a992(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17ab34(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_17aca7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_17adac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17aefa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17b058(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17b1e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17b332(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_17b4b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17b604(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17b73f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_21b96de2();
int64_t function_2d6869(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2d69b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2d6b19(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2d6cab(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d6de9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2d6f9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d7108(void);
int64_t function_2d7120(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d714e(void);
int64_t function_2d715e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d7169(void);
int64_t function_2d716f(void);
int64_t function_2d7173(int64_t a1);
int64_t function_2d7174(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d71ac(int64_t a1);
int64_t function_2d7217(void);
int64_t function_2d7270(void);
int64_t function_2d7272(void);
int64_t function_2d727b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d7292(int64_t a1);
int64_t function_2d72c2(int64_t a1);
int64_t function_2d72c9(void);
int64_t function_2d72d9(int64_t a1);
int64_t function_2d7304(void);
int64_t function_2d7318(void);
int64_t function_2d7320(void);
int64_t function_2d7335(void);
int64_t function_2d7352(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2d736c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d738d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2d7410(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d742d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d747b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d74fa(int64_t a1);
int64_t function_2d750e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2d7595(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d75b5(int64_t a1);
int64_t function_2d76d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d76f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d771d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d774e(int64_t a1);
int64_t function_2d7756(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d7782(int64_t a1);
int64_t function_2d77b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_461febfe();
int64_t function_603698b6();
int64_t function_6fd39b87();
int64_t function_721c771a();
int64_t function_c9849();
int64_t function_cc59c();
int64_t unknown_2bbb4f60();
int64_t unknown_2c93cb69();
int64_t unknown_2df204c3();
int64_t unknown_4b5f5def();
int64_t unknown_589cf6ad();
int64_t unknown_ffffffff98cec681();
int64_t unknown_ffffffffd27d8695();
int64_t unknown_ffffffffd64dd84b();

// Address range: 0x17a8aa - 0x17a992
int64_t function_17a8aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a7; // bp-16, 0x17a977
    int64_t v2; // bp-24, 0x17a8aa
    int64_t result = function_c9849(a1, a2, a3, a4, a5, (int64_t)&v1, (int64_t)&v2); // 0x17a98d
    return result;
}

// Address range: 0x17a992 - 0x17ab34
int64_t function_17a992(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x4c94431a; // bp-32, 0x17aa2e
    int64_t v2; // 0x17a992
    return function_c9849(a1, a2, a3, a4, v2, v2, (int64_t)&v1);
}

// Address range: 0x17ab34 - 0x17aca7
int64_t function_17ab34(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x17ab34
    int64_t v1; // bp-40, 0x17ab34
    int64_t v2 = (int64_t)&v1; // 0x17abf8
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x17ac0f
    int64_t v4 = *v3; // 0x17ac0f
    *(int64_t *)(v2 - 8) = v4;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x17ac13
    *v5 = 0x55d3cfaf;
    int64_t * v6 = (int64_t *)(v2 - 32); // 0x17ac3d
    bool v7; // 0x17ab34
    *v6 = 0x4000 * (int64_t)v7 | 2048 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | 128 * (int64_t)v7 | 64 * (int64_t)v7 | 16 * (int64_t)v7 | (int64_t)v7 | 4 * (int64_t)v7 | 2;
    v1 = *v5;
    *v6 = v4;
    *v3 = *v5;
    *v5 = v2;
    int64_t v8; // 0x17ab34
    return function_c9849(a1, a2, a3, a4, a5, a6, v8);
}

// Address range: 0x17aca7 - 0x17adac
int64_t function_17aca7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x17aca7
    int64_t v1; // bp-64, 0x17aca7
    v1 = (int64_t)&v1 + 16;
    return function_c9849(a1, a2, a3, a4, a5, a6, 0x1770f3);
}

// Address range: 0x17adac - 0x17aefa
int64_t function_17adac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x17adac
    int64_t v1; // 0x17adac
    return function_c9849(a1, a2, a3, a4, v1, v1, 0x6bf61243);
}

// Address range: 0x17aefa - 0x17b058
int64_t function_17aefa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17aefa
    int64_t v1; // bp-32, 0x17aefa
    int64_t v2 = (int64_t)&v1; // 0x17b02c
    *(int64_t *)(v2 - 8) = v2 + 8;
    int64_t v3; // 0x17aefa
    return function_c9849(a1, a2, 0x177779, a4, v3, v3, v1);
}

// Address range: 0x17b058 - 0x17b1e8
int64_t function_17b058(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x177af5; // bp-48, 0x17b108
    *(int64_t *)(a5 - 24) = a4;
    *(int64_t *)(a5 - 8) = a5 + 8;
    int64_t v2; // 0x17b058
    return function_c9849(a1, a2, 310, a4, a5, v2, (int64_t)&v1);
}

// Address range: 0x17b1e8 - 0x17b332
int64_t function_17b1e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x17b1e8
    int64_t v1; // bp-24, 0x17b1e8
    v1 = (int64_t)&v1 + 8;
    int64_t v2; // 0x17b1e8
    return function_c9849(a1, a2, a3, 0x16b74ef, v2, v2, v2);
}

// Address range: 0x17b332 - 0x17b4b6
int64_t function_17b332(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a7; // bp-40, 0x17b3da
    int64_t v2; // 0x17b332
    int64_t v3 = v2 - 8; // 0x17b426
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x17b427
    *(int64_t *)(v2 - 24) = v3;
    int64_t v5 = v2 + 8; // 0x17b449
    *(int64_t *)v5 = a7;
    *v4 = 0xdf30700;
    *(int64_t *)(v2 - 32) = 0x17873c;
    *(int64_t *)(v2 + 16) = *v4;
    *(int64_t *)v3 = v5;
    return function_c9849(a1, a2, a3, a4, a5, a6, (int64_t)&v1);
}

// Address range: 0x17b4b6 - 0x17b604
int64_t function_17b4b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x17b4b6
    int64_t v1; // bp-64, 0x17b4b6
    int64_t v2 = (int64_t)&v1; // 0x17b559
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x17b58c
    bool v4; // 0x17b4b6
    *v3 = 0x4000 * (int64_t)v4 | 2048 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4 | 2;
    int64_t * v5 = (int64_t *)(v2 + 16); // 0x17b58f
    int64_t v6 = v2 + 32; // 0x17b58f
    *(int64_t *)v6 = *v5;
    *v5 = 0xb8d9720;
    *(int64_t *)(v2 + 48) = 0xb8d9720;
    int64_t * v7 = (int64_t *)(v2 + 24); // 0x17b5b4
    *v3 = *v7;
    *v5 = v6;
    int64_t v8 = *v7; // 0x17b5e6
    *v5 = v8;
    *v3 = v8;
    int64_t v9; // 0x17b4b6
    return function_c9849(a1, a2, a3, a4, a5, v9, 0x71ce5914);
}

// Address range: 0x17b604 - 0x17b73f
int64_t function_17b604(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17b604
    int64_t v1; // bp-40, 0x17b604
    int64_t v2 = (int64_t)&v1; // 0x17b678
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x17b684
    int64_t v4 = v2 - 8; // 0x17b684
    int64_t * v5 = (int64_t *)v4; // 0x17b684
    *v5 = v3;
    int64_t v6 = v2 - 16; // 0x17b688
    int64_t * v7 = (int64_t *)v6; // 0x17b688
    *v7 = v2;
    int64_t * v8 = (int64_t *)(v2 + 8); // 0x17b6a8
    int64_t v9 = *v8; // 0x17b6a8
    *v7 = v9;
    int64_t * v10 = (int64_t *)(v2 - 24); // 0x17b6ac
    int64_t * v11 = (int64_t *)(v2 - 32); // 0x17b6b2
    *v10 = 0x14dd67c6;
    int64_t * v12 = (int64_t *)(v2 - 40); // 0x17b6cf
    *v12 = v3;
    *v11 = v3;
    *v5 = *v10;
    *v11 = 0x31f88776;
    *v12 = v9;
    *v8 = *v10;
    *v10 = a4;
    *v11 = v4;
    int64_t v13 = *v10; // 0x17b711
    *v12 = v13;
    *v10 = *v7;
    *v11 = v6;
    int64_t v14; // 0x17b604
    return function_c9849(0x23270872, 169, a3, v13, v14, v14, v14);
}

// Address range: 0x17b73f - 0x17b899
int64_t function_17b73f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x17915c; // bp-24, 0x17b784
    int64_t v2 = (int64_t)&v1; // 0x17b7e2
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x17b7ea
    int64_t v4 = v2 - 8; // 0x17b7ea
    int64_t * v5 = (int64_t *)v4; // 0x17b7ea
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x17b7ee
    int64_t v7 = v2 - 24; // 0x17b815
    *(int64_t *)v7 = v7;
    *v6 = a6;
    int64_t v8 = v2 + 8; // 0x17b831
    int64_t * v9 = (int64_t *)v8; // 0x17b831
    *v9 = *v5;
    *(int64_t *)(v2 + 24) = v3;
    *v5 = a2;
    *v6 = v4;
    *v5 = v8;
    v1 = *v9;
    *v5 = v8;
    int64_t v10; // 0x17b73f
    return function_c9849(a1, *v5, a3, a4, a5, v10, v1);
}

// Address range: 0x2d6869 - 0x2d69b9
int64_t function_2d6869(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2d6869
    int64_t v1; // 0x2d6869
    return function_cc59c(a1, a2, a3, a4, a5, a6, 0x13bfb370, v1, 0x13bfb370);
}

// Address range: 0x2d69b9 - 0x2d6b19
int64_t function_2d69b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2d69b9
    int64_t v1; // bp-64, 0x2d69b9
    int64_t v2 = (int64_t)&v1; // 0x2d6aca
    *(int64_t *)(v2 + 32) = 0x451edf97;
    int64_t v3 = v2 + 16; // 0x2d6af0
    v1 = v3;
    int64_t v4 = *(int64_t *)v3; // 0x2d6afe
    *(int64_t *)(v2 + 8) = v4;
    v1 = v4;
    bool v5; // 0x2d69b9
    int64_t result = function_cc59c(a1, a2, a3, a4, a5, a6, 0x4000 * (int64_t)(bool)v5 | 2048 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | 128 * (int64_t)v5 | 64 * (int64_t)v5 | 16 * (int64_t)v5 | (int64_t)v5 | 4 * (int64_t)v5 | 2, (int64_t)&g2, (int64_t)&g2); // 0x2d6b14
    return result;
}

// Address range: 0x2d6b19 - 0x2d6cab
int64_t function_2d6b19(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2d6b19
    int64_t v1; // 0x2d6b19
    int64_t v2 = v1 - 8; // 0x2d6baf
    int64_t * v3 = (int64_t *)v2; // 0x2d6bb0
    int64_t v4 = *(int64_t *)(v1 + 32); // 0x2d6bb3
    *v3 = v4;
    int64_t v5 = v1 - 16; // 0x2d6bb7
    int64_t * v6 = (int64_t *)v5; // 0x2d6bb7
    *v6 = v4;
    int64_t * v7 = (int64_t *)(v1 - 24); // 0x2d6bce
    *v7 = v2;
    int64_t v8 = v1 + 8; // 0x2d6bd7
    int64_t v9 = *(int64_t *)v8; // 0x2d6bd7
    *v6 = v9;
    int64_t * v10 = (int64_t *)(v1 - 32); // 0x2d6c05
    *v10 = a1;
    *(int64_t *)(v1 - 40) = v5;
    int64_t v11 = *v10; // 0x2d6c40
    *v7 = v4;
    *(int64_t *)v1 = *v6;
    *v6 = 0x266ec952;
    *v10 = v9;
    *(int64_t *)(v1 + 16) = *v6;
    *v6 = *v3;
    *v7 = v2;
    *v3 = v8;
    int64_t v12; // bp-40, 0x2d6b19
    int64_t result = function_cc59c(v11, a2, v1, a4, a5, a6, (int64_t)&v12, (int64_t)&g2, (int64_t)&g2); // 0x2d6ca6
    return result;
}

// Address range: 0x2d6cab - 0x2d6de9
int64_t function_2d6cab(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d6cab
    int64_t v1; // bp-32, 0x2d6cab
    int64_t v2 = (int64_t)&v1; // 0x2d6db1
    *(int64_t *)(v2 - 8) = v2 + 16;
    *(int64_t *)(v2 - 16) = v1;
    int64_t v3; // 0x2d6cab
    bool v4; // 0x2d6cab
    int64_t result = function_cc59c(a1, a2, a3, a4, v3, v3, 0x4000 * (int64_t)v4 | 2048 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4 | 2, (int64_t)&g2, (int64_t)&g2); // 0x2d6de4
    return result;
}

// Address range: 0x2d6de9 - 0x2d6f9a
int64_t function_2d6de9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2d6de9
    int64_t v1; // 0x2d6de9
    int64_t result = function_cc59c(a1, a2, 0x2d574e, a4, a5, v1, v1, (int64_t)&g2, (int64_t)&g2); // 0x2d6f95
    return result;
}

// Address range: 0x2d6f9a - 0x2d7108
int64_t function_2d6f9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d6f9a
    int64_t v1; // bp-32, 0x2d6f9a
    int64_t v2 = (int64_t)&v1; // 0x2d7016
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x2d701e
    int64_t * v4 = (int64_t *)v3; // 0x2d701e
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x2d7022
    *v4 = 0x397c55fc;
    int64_t v6 = *(int64_t *)(v2 + 32); // 0x2d7049
    *v4 = v6;
    *v5 = v2;
    int64_t * v7 = (int64_t *)(v2 + 8); // 0x2d706d
    int64_t v8 = *v7; // 0x2d706d
    *v5 = v8;
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x2d707a
    *v9 = a2;
    int64_t v10 = v2 - 24; // 0x2d707a
    int64_t * v11 = (int64_t *)v10; // 0x2d708b
    *v11 = 0x4a0fe6ce;
    *v9 = 0x2b266fbb;
    int64_t * v12 = (int64_t *)(v2 - 40); // 0x2d709b
    *v12 = v6;
    *v4 = *v11;
    *v12 = v8;
    *v7 = *v11;
    *v11 = a4;
    *v9 = v3;
    int64_t v13 = *v11; // 0x2d70d4
    *v12 = v13;
    *v9 = v10;
    int64_t v14 = *v11; // 0x2d70fe
    *v11 = v3;
    int64_t v15; // 0x2d6f9a
    bool v16; // 0x2d6f9a
    return function_cc59c(v15, v14, a3, v13, a5, v15, 0x2d2e6e, 323, 0x4000 * (int64_t)v16 | 2048 * (int64_t)v16 | 1024 * (int64_t)v16 | 512 * (int64_t)v16 | 256 * (int64_t)v16 | 128 * (int64_t)v16 | 64 * (int64_t)v16 | 16 * (int64_t)v16 | (int64_t)v16 | 4 * (int64_t)v16 | 2);
}

// Address range: 0x2d7108 - 0x2d710d
int64_t function_2d7108(void) {
    // 0x2d7108
    int64_t result; // 0x2d7108
    return result;
}

// Address range: 0x2d7120 - 0x2d7148
int64_t function_2d7120(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d7120
    int64_t v1; // 0x2d7120
    int64_t v2 = v1;
    *(int32_t *)v2 = ((int32_t)v1 | -0x171dbce3) + (int32_t)v2;
    int32_t * v3 = (int32_t *)(a3 - 0x176f1b00); // 0x2d712e
    *v3 = *v3 ^ 1;
    *(char *)a1 = __asm_insb((int16_t)a4);
    int64_t v4 = __asm_int3(); // 0x2d7139
    __asm_rcl(*(int32_t *)(v2 + 0x18620988 + 8 * v2));
    int64_t v5 = v4 + v1; // 0x2d7143
    return (v5 + 144) % 256 | v5 & 0xffffff00;
}

// Address range: 0x2d714e - 0x2d7151
int64_t function_2d714e(void) {
    // 0x2d714e
    int64_t result; // 0x2d714e
    return result;
}

// Address range: 0x2d715e - 0x2d7167
int64_t function_2d715e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d715e
    int64_t result; // 0x2d715e
    char * v1 = (char *)(result - 24); // 0x2d715e
    bool v2; // 0x2d715e
    *v1 = (char)v2 - (char)a3 + *v1;
    int32_t * v3 = (int32_t *)(result + 68); // 0x2d7161
    *v3 = *v3 + (int32_t)result;
    return result;
}

// Address range: 0x2d7169 - 0x2d716b
int64_t function_2d7169(void) {
    // 0x2d7169
    int64_t result; // 0x2d7169
    return result;
}

// Address range: 0x2d716f - 0x2d7172
int64_t function_2d716f(void) {
    // 0x2d716f
    int64_t result; // 0x2d716f
    return result;
}

// Address range: 0x2d7173 - 0x2d7174
int64_t function_2d7173(int64_t a1) {
    // 0x2d7173
    int64_t result; // 0x2d7173
    return result;
}

// Address range: 0x2d7174 - 0x2d7186
int64_t function_2d7174(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d7174
    return function_21b96de2();
}

// Address range: 0x2d71ac - 0x2d71ad
int64_t function_2d71ac(int64_t a1) {
    // 0x2d71ac
    int64_t result; // 0x2d71ac
    return result;
}

// Address range: 0x2d7217 - 0x2d721a
int64_t function_2d7217(void) {
    // 0x2d7217
    int64_t result; // 0x2d7217
    return result;
}

// Address range: 0x2d7270 - 0x2d7272
int64_t function_2d7270(void) {
    // 0x2d7270
    int64_t v1; // 0x2d7270
    return function_2d727b(v1, v1, v1, v1);
}

// Address range: 0x2d7272 - 0x2d7274
int64_t function_2d7272(void) {
    // 0x2d7272
    int64_t result; // 0x2d7272
    return result;
}

// Address range: 0x2d727b - 0x2d728b
int64_t function_2d727b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d727b
    int64_t v1; // 0x2d727b
    char v2 = v1;
    *(char *)v1 = 2 * v2;
    int64_t v3; // 0x2d727b
    return v1 & -256 | (int64_t)(*(char *)&v3 | v2);
}

// Address range: 0x2d7292 - 0x2d7293
int64_t function_2d7292(int64_t a1) {
    // 0x2d7292
    int64_t result; // 0x2d7292
    return result;
}

// Address range: 0x2d72c2 - 0x2d72c6
int64_t function_2d72c2(int64_t a1) {
    // 0x2d72c2
    return __asm_hlt(a1);
}

// Address range: 0x2d72c9 - 0x2d72d3
int64_t function_2d72c9(void) {
    // 0x2d72c9
    int64_t v1; // 0x2d72c9
    char * v2 = (char *)(v1 + 61); // 0x2d72c9
    *v2 = *v2 & (char)v1;
    int64_t v3; // 0x2d72c9
    int64_t v4 = v3;
    *(int32_t *)v4 = *(int32_t *)&v3 + (int32_t)v4;
    return function_461febfe();
}

// Address range: 0x2d72d9 - 0x2d72dc
int64_t function_2d72d9(int64_t a1) {
    // 0x2d72d9
    int64_t result; // 0x2d72d9
    return result;
}

// Address range: 0x2d7304 - 0x2d7305
int64_t function_2d7304(void) {
    // 0x2d7304
    int64_t result; // 0x2d7304
    return result;
}

// Address range: 0x2d7318 - 0x2d731a
int64_t function_2d7318(void) {
    // 0x2d7318
    int64_t result; // 0x2d7318
    return result;
}

// Address range: 0x2d7320 - 0x2d7322
int64_t function_2d7320(void) {
    // 0x2d7320
    int64_t v1; // 0x2d7320
    return function_2d7352(v1, v1, v1, v1, (int64_t)&g2);
}

// Address range: 0x2d7335 - 0x2d7336
int64_t function_2d7335(void) {
    // 0x2d7335
    int64_t result; // 0x2d7335
    return result;
}

// Address range: 0x2d7352 - 0x2d736b
int64_t function_2d7352(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2d7352
    int64_t v1; // 0x2d7352
    int32_t * v2 = (int32_t *)(v1 - 0x48a0f409); // 0x2d7352
    *v2 = *v2 - (int32_t)a3;
    int64_t v3 = unknown_2bbb4f60(); // 0x2d735a
    int32_t * v4 = (int32_t *)(8 * a2 + 124 + a4); // 0x2d7366
    int64_t v5; // 0x2d7352
    *v4 = *v4 + (int32_t)(int64_t)&v5;
    return v3 & 112 ^ a4 / 256 % 256 | v3 & 0x786e0500;
}

// Address range: 0x2d736c - 0x2d7384
int64_t function_2d736c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d736c
    int64_t v1; // 0x2d736c
    uint64_t v2 = v1;
    char * v3 = (char *)(a1 - 24); // 0x2d736c
    bool v4; // 0x2d736c
    *v3 = (char)v4 + (char)(v2 / 256) + *v3;
    int64_t v5; // 0x2d736c
    *(int32_t *)a1 = *(int32_t *)&v5 + (int32_t)a1;
    int64_t v6; // 0x2d736c
    unsigned char v7 = *(char *)&v6 + (char)v2; // 0x2d7371
    char v8 = *(char *)((v2 & -256 | (int64_t)v7) + 0x12ba3a98); // 0x2d7375
    char v9 = v7 + v8; // 0x2d7375
    int64_t result = unknown_ffffffff98cec681(); // 0x2d7380
    if (v9 < 0 == ((v9 ^ v7) & (v9 ^ v8)) < 0) {
        result = function_2d7304();
    }
    // 0x2d7382
    return result;
}

// Address range: 0x2d738d - 0x2d73ff
int64_t function_2d738d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2d738d
    *(int32_t *)a1 = (int32_t)unknown_ffffffffd27d8695();
    bool v1; // 0x2d738d
    int64_t v2 = v1 ? -4 : 4; // 0x2d7394
    int64_t v3 = v2 + a1; // 0x2d7394
    int64_t v4; // 0x2d738d
    uint32_t v5 = *(int32_t *)(unknown_589cf6ad(v3) + 99) + (int32_t)v4; // 0x2d73b5
    int64_t v6 = v5; // 0x2d73b5
    int64_t v7 = unknown_2df204c3(); // 0x2d73bd
    char * v8 = (char *)(v7 + 0x38bd200); // 0x2d73c2
    *v8 = *v8 + (char)v7;
    char * v9 = (char *)(v6 - 0x34fe1800); // 0x2d73c8
    *v9 = *v9 + (char)(a4 / 256);
    char * v10 = (char *)(v3 - 0x4189ca6f); // 0x2d73ce
    *v10 = *v10 + (char)v5;
    int64_t v11; // 0x2d738d
    uint32_t result = *(int32_t *)&v11; // 0x2d73d4
    v11 = v2 + a2;
    if (a4 == 0) {
        // 0x2d73e7
        return unknown_4b5f5def();
    }
    int32_t * v12 = (int32_t *)(v6 + 8); // 0x2d73dd
    *v12 = *v12 + result;
    *(int32_t *)v3 = result;
    return result;
}

// Address range: 0x2d7410 - 0x2d742c
int64_t function_2d7410(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t * v2 = (int64_t *)(a4 + 0x16c0ac3f); // 0x2d7410
    uint64_t v3 = *v2; // 0x2d7410
    int64_t v4; // 0x2d7410
    int32_t v5; // 0x2d7410
    int64_t v6; // 0x2d7410
    int64_t v7; // 0x2d7410
    int64_t v8; // 0x2d7410
    if (v3 == (v8 & 0xffffffff || 0x100000000 * a3)) {
        *v2 = v8 & 0xffffffff | 0x100000000 * a4;
        v4 = v1;
        v5 = *(int32_t *)&v1;
        v7 = a3;
    } else {
        v4 = a1;
        v5 = a1;
        v7 = v3 / 0x100000000;
        v6 = v3 & 0xffffffff;
    }
    int64_t v9 = v6;
    *(int32_t *)v4 = v5 + (int32_t)v9;
    char * v10 = (char *)((v7 & -0xff01 | 0xe800) - 0x274518bd); // 0x2d741b
    *v10 = *v10 + (char)v7;
    *(int32_t *)-0x63d0a3c4 = *(int32_t *)-0x63d0a3c4 + (int32_t)v8;
    return (v9 + 20) % 256 | v9 & -256;
}

// Address range: 0x2d742d - 0x2d745e
int64_t function_2d742d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d742d
    int64_t v1; // 0x2d742d
    uint64_t v2 = v1;
    char v3 = *(char *)(a4 + 5); // 0x2d742d
    bool v4; // 0x2d742d
    char v5 = *(char *)((v2 & -256 | (int64_t)((char)v4 + (char)v2 - v3)) + v1 % 256); // 0x2d7430
    char * v6 = (char *)(a2 + 0x1e83ff4); // 0x2d7432
    *v6 = *v6 | (char)a3;
    char v7 = *(char *)0x65d0d828; // 0x2d743f
    int64_t result = unknown_ffffffffd64dd84b(); // 0x2d7445
    int64_t v8 = result - 0x7226ffed; // 0x2d744a
    __writegsbyte(v8, __readgsbyte(v8) ^ (char)result);
    int32_t * v9 = (int32_t *)((a4 & -256 | (int64_t)((v5 ^ -92) + (char)a4)) - 0x6259a40c); // 0x2d7453
    int32_t v10 = *v9; // 0x2d7453
    *v9 = ((int32_t)(256 * (int64_t)((char)(v2 / 256) - v7) | v2 & 0xffff0000) | 232) + v10;
    return result;
}

// Address range: 0x2d747b - 0x2d748a
int64_t function_2d747b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d747b
    int64_t result; // 0x2d747b
    uint64_t v1 = result;
    uint32_t v2 = (int32_t)a4 % 32; // 0x2d747b
    if (v2 != 0) {
        int32_t * v3 = (int32_t *)(a3 + 0x1e8d044); // 0x2d747b
        uint32_t v4 = *v3; // 0x2d747b
        *v3 = v4 >> 32 - v2 | v4 << v2;
    }
    char * v5 = (char *)(v1 + 0x91141c); // 0x2d7481
    *v5 = *v5 ^ (char)(v1 / 256);
    return result;
}

// Address range: 0x2d74fa - 0x2d74fb
int64_t function_2d74fa(int64_t a1) {
    // 0x2d74fa
    int64_t result; // 0x2d74fa
    return result;
}

// Address range: 0x2d750e - 0x2d7512
int64_t function_2d750e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2d750e
    int64_t result; // 0x2d750e
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x2d7595 - 0x2d75b5
int64_t function_2d7595(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d7595
    int64_t v1; // 0x2d7595
    int16_t v2 = v1; // 0x2d7595
    int16_t v3 = (int16_t)*(char *)(a3 + 0x24613400); // 0x2d7595
    *(char *)0x59387ca2 = *(char *)0x59387ca2 + (char)(v1 / 256);
    int64_t v4 = (v1 & 0xffff0000 | (int64_t)(v2 / v3 % 256) | (int64_t)(256 * (v2 % v3))) + v1; // 0x2d75a1
    int64_t v5 = v4 & 0xffffffff; // 0x2d75a1
    char * v6 = (char *)v5; // 0x2d75a3
    *v6 = 2 * (char)v4 + *v6;
    char * v7 = (char *)(v5 + 0x4e8f7003); // 0x2d75a7
    *v7 = *v7 + (char)a3;
    return function_6fd39b87();
}

// Address range: 0x2d75b5 - 0x2d75f5
int64_t function_2d75b5(int64_t a1) {
    // 0x2d75b5
    int64_t v1; // 0x2d75b5
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x2d75b5
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 ^ (char)v4;
    int64_t v5 = v3;
    *(char *)v5 = *(char *)&v3 + (char)v5;
    int32_t * v6 = (int32_t *)(a1 + 0x13d0013 + 2 * a1); // 0x2d75c6
    *v6 = *v6 + (int32_t)v1;
    char * v7 = (char *)(v3 + 5); // 0x2d75cd
    *v7 = *v7 & -59;
    int64_t v8; // 0x2d75b5
    uint32_t v9 = *(int32_t *)&v8 & (int32_t)v3; // 0x2d75d3
    unsigned char v10 = llvm_ctpop_i8((char)v9); // 0x2d75d3
    v3 = v9;
    if (v10 % 2 != 0) {
        // 0x2d75f3
        return (int64_t)(0x10000 * v9 / 0x10000);
    }
    // 0x2d75d8
    return function_721c771a();
}

// Address range: 0x2d76d0 - 0x2d76f5
int64_t function_2d76d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d76d0
    int64_t v1; // 0x2d76d0
    int64_t v2 = v1 & 0x17f324b5; // 0x2d76d3
    int64_t v3 = v2 | 0xe80cdb4a; // 0x2d76d3
    int32_t * v4 = (int32_t *)v3; // 0x2d76d8
    *v4 = *v4 + (int32_t)v3;
    char * v5 = (char *)(a1 - 121 + 8 * v1); // 0x2d76ec
    *v5 = *v5 + ((char)a4 | (char)&g1);
    return v2 ^ 0x9cb03d4b;
}

// Address range: 0x2d76f5 - 0x2d7707
int64_t function_2d76f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d76f5
    int64_t v1; // 0x2d76f5
    uint32_t v2 = (int32_t)v1;
    uint32_t v3 = (int32_t)a4; // 0x2d76f5
    int32_t v4 = v2 + v3; // 0x2d76f5
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x2d76f5
    *(int32_t *)a1 = v4;
    return v1 & -0xff01 | 256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v4 < v2) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v2 % 16 + v3 % 16 > 15) | 4 * (int64_t)(v5 % 2 == 0)) | 512;
}

// Address range: 0x2d771d - 0x2d772d
int64_t function_2d771d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d771d
    int64_t v1; // 0x2d771d
    int64_t v2 = v1;
    return (v2 + 9) % 256 | v2 & -256;
}

// Address range: 0x2d774e - 0x2d7753
int64_t function_2d774e(int64_t a1) {
    // 0x2d774e
    int64_t result; // 0x2d774e
    __asm_out(-63, (char)result);
    return result;
}

// Address range: 0x2d7756 - 0x2d7769
int64_t function_2d7756(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d7756
    int64_t v1; // 0x2d7756
    int64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)((v2 + 93) % 256 | v2 & 0xffffff00);
    bool v3; // 0x2d7756
    return unknown_2c93cb69((v3 ? -4 : 4) + a1);
}

// Address range: 0x2d7782 - 0x2d7789
int64_t function_2d7782(int64_t a1) {
    // 0x2d7782
    int64_t result; // 0x2d7782
    return result;
}

// Address range: 0x2d77b9 - 0x2d77d6
int64_t function_2d77b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d77b9
    int64_t v1; // 0x2d77b9
    *(char *)0x3d3a06e8d6e4ef42 = (char)v1;
    *(int32_t *)v1 = 0;
    return function_603698b6();
}
