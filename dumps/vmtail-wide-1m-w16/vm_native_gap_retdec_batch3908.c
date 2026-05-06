/*
 * Targeted RetDec C for native executable gap queue batch 3908.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2a2fb-0x2a320 rank=- name=- kind=- bytes=- uncovered=-
 *   0x68e1a-0x68e3e rank=- name=- kind=- bytes=- uncovered=-
 *   0x48d8ee-0x48d90f rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b17fb-0x4b1820 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b3cce-0x4b3cf0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d46ec-0x4d4710 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ea13d-0x4ea160 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ee7ee-0x4ee810 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4eeb9d-0x4eebc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4efa3b-0x4efa60 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4efc8b-0x4efcb0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f400d-0x4f4030 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f411d-0x4f4140 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f50fd-0x4f5120 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f518d-0x4f51b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ff8cd-0x4ff8f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50888e-0x5088b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5246ac-0x5246d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5367fe-0x536820 rank=- name=- kind=- bytes=- uncovered=-
 *   0x536a7c-0x536aa0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x549aec-0x549b10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54ee9c-0x54eec0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54effc-0x54f020 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54f6cd-0x54f6f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5588ad-0x5588d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x564dbe-0x564de0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x569f6d-0x569f90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56a07d-0x56a0a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57016c-0x570190 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57993e-0x579960 rank=- name=- kind=- bytes=- uncovered=-
 *   0x579cfd-0x579d20 rank=- name=- kind=- bytes=- uncovered=-
 *   0x579f6e-0x579f90 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1fd40();
int64_t function_200c0();
int64_t function_20540();
int64_t function_208a0();
int64_t function_2a2fb(void);
int64_t function_2a301(void);
int64_t function_2a307(int64_t a1, int64_t a2);
int64_t function_48d3bb();
int64_t function_48d8ee(int64_t a1, int64_t a2);
int64_t function_4b16ec();
int64_t function_4b17fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4b1810(int64_t a1, int64_t a2);
int64_t function_4b39af();
int64_t function_4b3cce(int64_t a1);
int64_t function_4b3cd5(void);
int64_t function_4b3ce0(void);
int64_t function_4d46ec(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4d4700(void);
int64_t function_4d4706(void);
int64_t function_4ea068();
int64_t function_4ea13d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4ee7ee(void);
int64_t function_4ee7ef(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4eeb40();
int64_t function_4eeb50();
int64_t function_4eeb85();
int64_t function_4eeb9d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4efa3b(void);
int64_t function_4efa3e(void);
int64_t function_4efa4a(void);
int64_t function_4efc86();
int64_t function_4efc8b(void);
int64_t function_4efca0(int64_t a1);
int64_t function_4efcc0();
int64_t function_4efd10();
int64_t function_4f400d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4f411d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4f50fd(void);
int64_t function_4f518d(void);
int64_t function_4ff8cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4ff8e9(void);
int64_t function_508836();
int64_t function_508858();
int64_t function_50888e(void);
int64_t function_508895(void);
int64_t function_52461d();
int64_t function_5246ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5246b9(void);
int64_t function_5362b4();
int64_t function_53655a();
int64_t function_5367fe(int64_t a1, int64_t a2);
int64_t function_536805(int64_t a1, int64_t a2, int64_t a3);
int64_t function_536a3f();
int64_t function_536a7c(void);
int64_t function_536a7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_536a8e(int64_t a1);
int64_t function_549aec(int64_t a1, int64_t a2, int64_t a3);
int64_t function_549af8(void);
int64_t function_549b00(int64_t a1);
int64_t function_54ee45();
int64_t function_54ee9c(int64_t a1);
int64_t function_54efa5();
int64_t function_54effc(int64_t a1);
int64_t function_54f00f(int64_t a1, int64_t a2);
int64_t function_54f6cd(void);
int64_t function_54f6e0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_55885d();
int64_t function_55886c();
int64_t function_5588ad(void);
int64_t function_5588c0(void);
int64_t function_564dbe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_565970();
int64_t function_569f6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_56a07d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_57016c(void);
int64_t function_57016e(void);
int64_t function_570174(void);
int64_t function_5798fc();
int64_t function_579932();
int64_t function_57993e(void);
int64_t function_579948(void);
int64_t function_579958(void);
int64_t function_579c4e();
int64_t function_579cfd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_579f6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_579f81(int64_t a1);
int64_t function_67df6();
int64_t function_68210();
int64_t function_6837a();
int64_t function_68e1a(int64_t a1, int64_t a2);
int64_t function_68e22(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_68e30(int64_t a1, int64_t a2, int64_t a3, int64_t a4);

// Address range: 0x2a2fb - 0x2a301
int64_t function_2a2fb(void) {
    // 0x2a2fb
    return 16;
}

// Address range: 0x2a301 - 0x2a307
int64_t function_2a301(void) {
    // 0x2a301
    return 16;
}

// Address range: 0x2a307 - 0x2a320
int64_t function_2a307(int64_t a1, int64_t a2) {
    if (a1 == 0 || a2 == 0) {
        // 0x2a31a
        return 10;
    }
    // 0x2a311
    *(int32_t *)a2 = (int32_t)&g1;
    return 0;
}

// Address range: 0x68e1a - 0x68e22
int64_t function_68e1a(int64_t a1, int64_t a2) {
    // 0x68e1a
    return function_67df6(a2);
}

// Address range: 0x68e22 - 0x68e2f
int64_t function_68e22(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x68e22
    return function_6837a(a2, a3, a4 & 0xffffffff);
}

// Address range: 0x68e30 - 0x68e3d
int64_t function_68e30(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x68e30
    return function_68210(a2, a3, a4 & 0xffffffff);
}

// Address range: 0x48d8ee - 0x48d90f
int64_t function_48d8ee(int64_t a1, int64_t a2) {
    int64_t v1 = 2 * function_48d3bb(); // 0x48d8f3
    if (v1 == 0) {
        // 0x48d90e
        return 0;
    }
    int64_t result = 0; // 0x48d904
    int64_t v2 = a1;
    result = *(int16_t *)v2 == (int16_t)a2 ? v2 : result;
    int64_t v3 = v2 + 2; // 0x48d908
    while (v3 != v1 + a1) {
        // 0x48d901
        v2 = v3;
        result = *(int16_t *)v2 == (int16_t)a2 ? v2 : result;
        v3 = v2 + 2;
    }
    // 0x48d90e
    return result;
}

// Address range: 0x4b17fb - 0x4b180c
int64_t function_4b17fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4b17fb
    int64_t v1; // 0x4b17fb
    return v1 & 0xffffffff;
}

// Address range: 0x4b1810 - 0x4b1818
int64_t function_4b1810(int64_t a1, int64_t a2) {
    // 0x4b1810
    return function_4b16ec();
}

// Address range: 0x4b3cce - 0x4b3cd3
int64_t function_4b3cce(int64_t a1) {
    // 0x4b3cce
    int64_t result; // 0x4b3cce
    unsigned char v1 = (char)result;
    *(char *)a1 = v1 / 32 | 8 * v1;
    return result;
}

// Address range: 0x4b3cd5 - 0x4b3ce0
int64_t function_4b3cd5(void) {
    // 0x4b3cd5
    return function_4b39af();
}

// Address range: 0x4b3ce0 - 0x4b3ce8
int64_t function_4b3ce0(void) {
    // 0x4b3ce0
    return function_4b39af();
}

// Address range: 0x4d46ec - 0x4d46f8
int64_t function_4d46ec(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4d46ec
    *(int32_t *)a1 = (int32_t)a3;
    int64_t v1; // 0x4d46ec
    *(char *)(v1 - 1) = -124;
    return 5;
}

// Address range: 0x4d4700 - 0x4d4706
int64_t function_4d4700(void) {
    // 0x4d4700
    return 0xffffff94;
}

// Address range: 0x4d4706 - 0x4d470c
int64_t function_4d4706(void) {
    // 0x4d4706
    return 0xffffff9c;
}

// Address range: 0x4ea13d - 0x4ea151
int64_t function_4ea13d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4ea13d
    *(int64_t *)(a1 + 16) = a3;
    int64_t v1; // 0x4ea13d
    *(int64_t *)(v1 + 264) = 0x1000000000000 * a4 >> 48;
    return function_4ea068();
}

// Address range: 0x4ee7ee - 0x4ee7ef
int64_t function_4ee7ee(void) {
    // 0x4ee7ee
    int64_t result; // 0x4ee7ee
    return result;
}

// Address range: 0x4ee7ef - 0x4ee802
int64_t function_4ee7ef(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4ee7ef
    int64_t v1; // 0x4ee7ef
    int32_t * v2 = (int32_t *)(v1 - 0x3d7ef818); // 0x4ee7ef
    *v2 = *v2 + 1;
    uint32_t v3 = 0x10000 * (int32_t)v1 >> 16; // 0x4ee7f5
    char v4 = v3; // 0x4ee7f6
    *(char *)(int64_t)v3 = v4 + (char)v1;
    char * v5 = (char *)(v1 - 0x3776fc08); // 0x4ee7f8
    unsigned char v6 = *v5; // 0x4ee7f8
    unsigned char v7 = v6 + v4; // 0x4ee7f8
    *v5 = v7;
    return (int64_t)(v7 < v6 ? (int32_t)a3 : v3);
}

// Address range: 0x4eeb9d - 0x4eebb8
int64_t function_4eeb9d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4eeb9d
    int64_t v1; // 0x4eeb9d
    uint64_t v2 = v1;
    int64_t v3 = v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1); // 0x4eeba2
    if (a3 != 1) {
        // 0x4eeba4
        v3 = function_4efcc0();
    }
    // 0x4eeba9
    function_1fd40(v3);
    function_20540();
    return function_4eeb85();
}

// Address range: 0x4efa3b - 0x4efa3c
int64_t function_4efa3b(void) {
    // 0x4efa3b
    int64_t result; // 0x4efa3b
    return result;
}

// Address range: 0x4efa3e - 0x4efa4a
int64_t function_4efa3e(void) {
    // 0x4efa3e
    __stack_chk_fail();
    return (uint32_t)((int32_t)&g5 ^ (int32_t)&g5);
}

// Address range: 0x4efa4a - 0x4efa5c
int64_t function_4efa4a(void) {
    // 0x4efa4a
    return function_1fd40(function_4efd10());
}

// Address range: 0x4efc8b - 0x4efc95
int64_t function_4efc8b(void) {
    // 0x4efc8b
    int64_t v1; // 0x4efc8b
    function_1fd40(v1);
    return function_4efc86();
}

// Address range: 0x4efca0 - 0x4efcae
int64_t function_4efca0(int64_t a1) {
    int64_t result = g4; // 0x4efcaa
    g4 = a1;
    return result;
}

// Address range: 0x4f400d - 0x4f4030
int64_t function_4f400d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4f400d
    int64_t v1; // 0x4f400d
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)(v1 & 0xffffffff));
    return (int64_t)&g5;
}

// Address range: 0x4f411d - 0x4f4140
int64_t function_4f411d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4f411d
    int64_t v1; // 0x4f411d
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)(v1 & 0xffffffff));
    return (int64_t)&g5;
}

// Address range: 0x4f50fd - 0x4f5120
int64_t function_4f50fd(void) {
    // 0x4f50fd
    int64_t v1; // 0x4f50fd
    *(int64_t *)v1 = (int64_t)&g3;
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g5;
}

// Address range: 0x4f518d - 0x4f51b0
int64_t function_4f518d(void) {
    // 0x4f518d
    int64_t v1; // 0x4f518d
    *(int64_t *)v1 = (int64_t)&g2;
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g5;
}

// Address range: 0x4ff8cd - 0x4ff8e1
int64_t function_4ff8cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4ff8cd
    int64_t v1; // 0x4ff8cd
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t result; // 0x4ff8cd
    char * v3 = (char *)(result - 57); // 0x4ff8cf
    char v4 = a4; // 0x4ff8cf
    *v3 = *v3 + v4;
    char * v5 = (char *)a5; // 0x4ff8d2
    int64_t v6; // 0x4ff8cd
    *v5 = *(char *)&v6 & (char)result;
    int64_t v7 = result;
    *(char *)v7 = *(char *)&result + (char)v7;
    char * v8 = (char *)(result - 57); // 0x4ff8d7
    *v8 = *v8 + v4;
    *v5 = *(char *)&v6 ^ (char)result;
    int64_t v9 = result;
    *(char *)v9 = *(char *)&result + (char)v9;
    return result;
}

// Address range: 0x4ff8e9 - 0x4ff8ec
int64_t function_4ff8e9(void) {
    // 0x4ff8e9
    int64_t result; // 0x4ff8e9
    return result;
}

// Address range: 0x50888e - 0x508895
int64_t function_50888e(void) {
    // 0x50888e
    function_4eeb40();
    return function_508836();
}

// Address range: 0x508895 - 0x5088a4
int64_t function_508895(void) {
    // 0x508895
    __stack_chk_fail();
    function_208a0();
    return function_508858();
}

// Address range: 0x5246ac - 0x5246b7
int64_t function_5246ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5246ac
    *(char *)0x6c748 = *(char *)0x6c748 + 72;
    return 0x6c748;
}

// Address range: 0x5246b9 - 0x5246c3
int64_t function_5246b9(void) {
    // 0x5246b9
    return function_52461d();
}

// Address range: 0x5367fe - 0x536805
int64_t function_5367fe(int64_t a1, int64_t a2) {
    // 0x5367fe
    return function_5362b4();
}

// Address range: 0x536805 - 0x536812
int64_t function_536805(int64_t a1, int64_t a2, int64_t a3) {
    // 0x536805
    __stack_chk_fail();
    return function_53655a();
}

// Address range: 0x536a7c - 0x536a7d
int64_t function_536a7c(void) {
    // 0x536a7c
    int64_t result; // 0x536a7c
    return result;
}

// Address range: 0x536a7d - 0x536a8c
int64_t function_536a7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x536a7d
    int64_t v1; // 0x536a7d
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + (char)a5;
    return function_536a3f(v1);
}

// Address range: 0x536a8e - 0x536a93
int64_t function_536a8e(int64_t a1) {
    // 0x536a8e
    int64_t result; // 0x536a8e
    return result;
}

// Address range: 0x549aec - 0x549af4
int64_t function_549aec(int64_t a1, int64_t a2, int64_t a3) {
    // 0x549aec
    return function_4eeb50(a3);
}

// Address range: 0x549af8 - 0x549afa
int64_t function_549af8(void) {
    // 0x549af8
    int64_t result; // 0x549af8
    return result;
}

// Address range: 0x549b00 - 0x549b08
int64_t function_549b00(int64_t a1) {
    // 0x549b00
    return function_4eeb50(a1);
}

// Address range: 0x54ee9c - 0x54eeac
int64_t function_54ee9c(int64_t a1) {
    // 0x54ee9c
    return function_54ee45();
}

// Address range: 0x54effc - 0x54f00c
int64_t function_54effc(int64_t a1) {
    // 0x54effc
    return function_54efa5();
}

// Address range: 0x54f00f - 0x54f013
int64_t function_54f00f(int64_t a1, int64_t a2) {
    // 0x54f00f
    int64_t v1; // 0x54f00f
    return v1 & 0xffffffff;
}

// Address range: 0x54f6cd - 0x54f6d7
int64_t function_54f6cd(void) {
    // 0x54f6cd
    int64_t v1; // 0x54f6cd
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(v1 + 49); // 0x54f6cf
    *v2 = *v2 + (char)v1;
    *(char *)(v1 + 65) = -1;
    return result;
}

// Address range: 0x54f6e0 - 0x54f6ea
int64_t function_54f6e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x54f6e0
    return 2;
}

// Address range: 0x5588ad - 0x5588b8
int64_t function_5588ad(void) {
    // 0x5588ad
    return function_55885d();
}

// Address range: 0x5588c0 - 0x5588c7
int64_t function_5588c0(void) {
    // 0x5588c0
    return function_55886c();
}

// Address range: 0x564dbe - 0x564dd1
int64_t function_564dbe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x564dbe
    int64_t v1; // 0x564dbe
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    *(int32_t *)(v1 + 12) = (int32_t)v1;
    return 0;
}

// Address range: 0x569f6d - 0x569f90
int64_t function_569f6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x569f6d
    int64_t v1; // 0x569f6d
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)(v1 & 0xffffffff));
    return (int64_t)&g5;
}

// Address range: 0x56a07d - 0x56a0a0
int64_t function_56a07d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x56a07d
    int64_t v1; // 0x56a07d
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)(v1 & 0xffffffff));
    return (int64_t)&g5;
}

// Address range: 0x57016c - 0x57016d
int64_t function_57016c(void) {
    // 0x57016c
    int64_t result; // 0x57016c
    return result;
}

// Address range: 0x57016e - 0x570174
int64_t function_57016e(void) {
    // 0x57016e
    int64_t result; // 0x57016e
    int32_t * v1 = (int32_t *)(result - 125); // 0x57016e
    *v1 = *v1 - 1;
    return result;
}

// Address range: 0x570174 - 0x570190
int64_t function_570174(void) {
    // 0x570174
    int64_t v1; // 0x570174
    int64_t v2 = v1 & 0xffffffff; // 0x570174
    bool v3; // 0x570174
    if (v3) {
        // 0x57017f
        return function_200c0(v2);
    }
    // 0x570178
    _Unwind_Resume((struct _Unwind_Exception *)v2);
    return (int64_t)&g5;
}

// Address range: 0x57993e - 0x579943
int64_t function_57993e(void) {
    // 0x57993e
    return function_5798fc();
}

// Address range: 0x579948 - 0x579953
int64_t function_579948(void) {
    // 0x579948
    int64_t v1; // 0x579948
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + 1;
    return function_579932();
}

// Address range: 0x579958 - 0x57995a
int64_t function_579958(void) {
    // 0x579958
    int64_t result; // 0x579958
    return result;
}

// Address range: 0x579cfd - 0x579d1f
int64_t function_579cfd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x579cfd
    *(int32_t *)(a3 + 4) = 0;
    *(int32_t *)a3 = 0;
    int64_t v1; // 0x579cfd
    *(int64_t *)(a3 + 8) = v1 + 0x7654e & 0xffffffff;
    *(int32_t *)(a3 + 16) = 21;
    return function_579c4e();
}

// Address range: 0x579f6e - 0x579f81
int64_t function_579f6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x579f6e
    int64_t result; // 0x579f6e
    *(int32_t *)(result + 56) = (int32_t)a3 + 1;
    return result;
}

// Address range: 0x579f81 - 0x579f85
int64_t function_579f81(int64_t a1) {
    // 0x579f81
    return 0;
}
