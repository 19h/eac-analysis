/*
 * Targeted RetDec C for native executable gap queue batch 449.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1b6fce-0x1b71ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b71ce-0x1b73ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b73ce-0x1b75ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b75ce-0x1b77ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b77ce-0x1b79ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x273041-0x273241 rank=- name=- kind=- bytes=- uncovered=-
 *   0x273241-0x273441 rank=- name=- kind=- bytes=- uncovered=-
 *   0x273441-0x273641 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1b6fce(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1b716d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1b72b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1b740b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1b752d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1b76ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1b7827(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f291dab();
int64_t function_20f35d7();
int64_t function_20fb272();
int64_t function_273041(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_273092(int64_t a1, int64_t a2);
int64_t function_2730c4(void);
int64_t function_2730cd(void);
int64_t function_2730d4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27310f(void);
int64_t function_273124(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2731a2(void);
int64_t function_2731c4(void);
int64_t function_2731d9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27323f(int64_t a1);
int64_t function_273286(int64_t a1);
int64_t function_2732dc(int64_t a1);
int64_t function_273321(void);
int64_t function_27335a(void);
int64_t function_273392(void);
int64_t function_2733b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_273421(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_273446(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2734b9(int64_t a1);
int64_t function_2734fe(void);
int64_t function_27354f(void);
int64_t function_273569(int64_t a1);
int64_t function_2735c2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_273622(int64_t a1);
int64_t function_cf3c7();
int64_t function_ffffffff9bbe705e();
int64_t function_ffffffffba66e3c7();
int64_t unknown_35fa9198();
int64_t unknown_6919742a();
int64_t unknown_750fd08f();
int64_t unknown_7a7fa146();
int64_t unknown_ffffffff880f4c4a();

// Address range: 0x1b6fce - 0x1b716d
int64_t function_1b6fce(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1b6fce
    int64_t v1; // 0x1b6fce
    int64_t v2 = v1;
    int64_t v3 = 0x100000000 * (int64_t)((int32_t)v2 >> 31) | v2 & 0xffffffff; // 0x1b6fcf
    int64_t v4 = v1 & 0xffffffff; // 0x1b6fcf
    int64_t v5 = v3 / v4; // 0x1b6fcf
    int64_t v6 = v5 & 0xffffffff; // 0x1b6fcf
    char * v7 = (char *)v6; // 0x1b6fd2
    *v7 = *v7 + (char)v5;
    char * v8 = (char *)(v6 - 127); // 0x1b6fd4
    *v8 = *v8 + (char)a4;
    int64_t v9 = __asm_int1(); // 0x1b6fd7
    int32_t * v10 = (int32_t *)(v9 - 1); // 0x1b6fdb
    *v10 = *v10 | (int32_t)a4;
    int64_t * v11 = (int64_t *)v1; // 0x1b6ff1
    int64_t v12 = v1 + 8; // 0x1b7000
    int64_t * v13 = (int64_t *)v12; // 0x1b7005
    *(int64_t *)(v1 + 24) = (a4 / 4 | 0x7e594589) ^ 0x7efb4730;
    int64_t v14 = v1 + 16; // 0x1b700d
    int64_t * v15 = (int64_t *)v14; // 0x1b700d
    *v15 = 0x1b101d;
    *v13 = v9;
    int64_t * v16 = (int64_t *)(v1 - 8); // 0x1b7063
    *v16 = a2;
    *v13 = *v11;
    int64_t * v17 = (int64_t *)(v1 + 48); // 0x1b70a4
    int64_t v18 = *v17; // 0x1b70a4
    *v13 = v18;
    *v11 = v18;
    *v16 = v18;
    int64_t v19 = v1 + 32; // 0x1b70ba
    int64_t * v20 = (int64_t *)v19; // 0x1b70ba
    *v13 = v12;
    *v20 = v18;
    *v15 = 0x4eb1da13;
    *v11 = *v20;
    *v17 = *v15;
    *v13 = v14;
    *v15 = v19;
    return function_cf3c7(a1, a2, v3 % v4 & 0xffffffff, *v13, a5, v1);
}

// Address range: 0x1b716d - 0x1b72b6
int64_t function_1b716d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1b716d
    bool v1; // 0x1b716d
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x1b716d
    int64_t v3 = v2; // bp-48, 0x1b71f5
    int64_t v4 = (int64_t)&v3; // 0x1b7201
    int64_t * v5 = (int64_t *)(v4 + 24); // 0x1b7231
    int64_t v6 = v4 - 8; // 0x1b7239
    *(int64_t *)(v4 - 16) = v6;
    v3 = v4;
    int64_t * v7 = (int64_t *)(v4 + 8); // 0x1b7275
    *v7 = v2;
    *v5 = v2;
    *(int64_t *)v6 = *v5;
    *(int64_t *)(v4 + 40) = *v7;
    int64_t * v8 = (int64_t *)(v4 + 16); // 0x1b7290
    *v7 = *v8;
    int64_t v9 = *v5; // 0x1b729f
    *v8 = v9;
    *v7 = v9;
    int64_t v10; // 0x1b716d
    return function_cf3c7(a1, a2, a3, a4, v10, v10);
}

// Address range: 0x1b72b6 - 0x1b740b
int64_t function_1b72b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1b72b6
    int64_t v1; // 0x1b72b6
    return function_cf3c7(a1, a2, a3, a4, v1, v1);
}

// Address range: 0x1b740b - 0x1b752d
int64_t function_1b740b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1b740b
    bool v1; // 0x1b740b
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // bp-48, 0x1b7487
    int64_t v3 = (int64_t)&v2; // 0x1b7506
    int64_t v4 = *(int64_t *)(v3 + 8); // 0x1b7512
    v2 = v4;
    *(int64_t *)(v3 - 8) = v4;
    int64_t v5; // 0x1b740b
    return function_cf3c7(a1, a2, a3, a4, v5, v5);
}

// Address range: 0x1b752d - 0x1b76ab
int64_t function_1b752d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1b752d
    int64_t v1; // bp-64, 0x1b752d
    int64_t v2 = (int64_t)&v1; // 0x1b7601
    int64_t v3 = v2 + 16; // 0x1b761b
    bool v4; // 0x1b752d
    *(int64_t *)v3 = 0x4000 * (int64_t)(bool)v4 | 2048 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4 | 2;
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x1b7623
    *v5 = 310;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x1b7624
    *v6 = a4;
    v1 = 0x120c5bdd;
    *(int64_t *)(v2 + 32) = 0x120c5bdd;
    int64_t v7 = v2 + 8; // 0x1b763c
    *v6 = a5;
    v1 = v3;
    v1 = *(int64_t *)v7;
    *v5 = v7;
    return function_cf3c7(*v5, a2, a3, a4, a5, a6);
}

// Address range: 0x1b76ab - 0x1b7827
int64_t function_1b76ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1b76ab
    return function_cf3c7(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x1b7827 - 0x1b79a8
int64_t function_1b7827(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1b7827
    int64_t v1; // bp-40, 0x1b7827
    int64_t v2 = (int64_t)&v1 + 16; // bp-24, 0x1b7948
    v1 = (int64_t)&v2;
    int64_t v3; // 0x1b7827
    return function_cf3c7(a1, a2, a3, v3, v3, v3);
}

// Address range: 0x273041 - 0x273091
int64_t function_273041(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x273041
    __asm_sti();
    uint64_t v1 = unknown_ffffffff880f4c4a(); // 0x273044
    char v2 = a4 / 256; // 0x273050
    *(char *)-0x23d6e718 = *(char *)-0x23d6e718 + v2;
    char v3 = *(char *)(v1 - 0x17fe1763); // 0x27305f
    *(int32_t *)-0x17848794 = *(int32_t *)-0x17848794 + (int32_t)a1;
    int64_t v4; // 0x273041
    char * v5 = (char *)((v4 & 0xffffffff) + 20); // 0x27306e
    char v6 = *v5; // 0x27306e
    unsigned char v7 = (char)(v1 / 256); // 0x27306e
    *v5 = v6 + v7;
    uint32_t v8 = (int32_t)v1; // 0x273075
    uint32_t v9 = *(int32_t *)v1 + v8; // 0x273075
    uint32_t v10 = v9 + (int32_t)(-1 - v6 < v7); // 0x273075
    bool v11 = -1 - v6 < v7 ? v10 <= v8 : v9 < v8; // 0x273075
    *(int64_t *)(v4 + 0x23f5) = (int64_t)v10;
    char v12 = *(char *)(v4 & 0xffff00ff | (int64_t)&g2); // 0x27307c
    char v13 = *(char *)0x48331585; // 0x27307e
    *(char *)0x48331585 = v13 + (char)((int64_t)&g2 >> 8);
    uint64_t result = unknown_750fd08f(); // 0x273084
    char * v14 = (char *)(v4 + 0x534c407b + 4 * (256 * (int64_t)(v3 + v2 + v12 + (char)v11) | a4 & 0x3fffffffffff00ff)); // 0x27308a
    *v14 = *v14 ^ (char)(result / 256);
    return result;
}

// Address range: 0x273092 - 0x2730a3
int64_t function_273092(int64_t a1, int64_t a2) {
    int64_t result = unknown_35fa9198(); // 0x273092
    int64_t v1; // 0x273092
    *(int32_t *)a1 = (int32_t)v1;
    return result;
}

// Address range: 0x2730c4 - 0x2730c5
int64_t function_2730c4(void) {
    // 0x2730c4
    int64_t result; // 0x2730c4
    return result;
}

// Address range: 0x2730cd - 0x2730ce
int64_t function_2730cd(void) {
    // 0x2730cd
    int64_t result; // 0x2730cd
    return result;
}

// Address range: 0x2730d4 - 0x2730e5
int64_t function_2730d4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2730d4
    int64_t result; // 0x2730d4
    int64_t v1; // 0x2730d4
    if (llvm_ctpop_i8((char)(v1 & a2)) % 2 == 0) {
        result = function_2730c4();
    }
    int32_t * v2 = (int32_t *)(v1 + 0x318947aa); // 0x2730dc
    *v2 = *v2 + (int32_t)v1;
    return result;
}

// Address range: 0x27310f - 0x273112
int64_t function_27310f(void) {
    // 0x27310f
    int64_t result; // 0x27310f
    return result;
}

// Address range: 0x273124 - 0x273166
int64_t function_273124(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    unknown_6919742a();
    char * v2 = (char *)(a2 + 37); // 0x273129
    *v2 = *v2 + (char)a3;
    __asm_wait();
    int64_t v3; // 0x273124
    char v4 = v3 / 256; // 0x27313c
    *(char *)a3 = *(char *)&v1 | v4;
    int64_t v5 = __asm_wait(); // 0x27313e
    int32_t * v6 = (int32_t *)v5; // 0x27313f
    *v6 = *v6 - (int32_t)v3;
    char v7 = *(char *)0x3a4a0f4b + v4; // 0x273142
    *(char *)0x3a4a0f4b = v7;
    int64_t v8 = v5; // 0x27314a
    if (v7 >= 0) {
        v8 = function_2730cd();
    }
    // 0x27314c
    *(int32_t *)0xe853615 = 2 * *(int32_t *)0xe853615;
    *(int32_t *)v1 = 0x10000 * (int32_t)(int16_t)&g1 >> 16;
    *(char *)-0xfcfbb9e = *(char *)-0xfcfbb9e + v4;
    return function_20fb272(v8 & 0xffffffff);
}

// Address range: 0x2731a2 - 0x2731af
int64_t function_2731a2(void) {
    char v1 = *(char *)-0xf4e9755; // 0x2731a4
    int64_t v2; // 0x2731a2
    *(char *)-0xf4e9755 = v1 + (char)((uint64_t)v2 / 256);
    return function_20f35d7();
}

// Address range: 0x2731c4 - 0x2731c5
int64_t function_2731c4(void) {
    // 0x2731c4
    int64_t result; // 0x2731c4
    return result;
}

// Address range: 0x2731d9 - 0x2731f5
int64_t function_2731d9(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 0x1d47a64); // 0x2731d9
    *v1 = -*v1;
    int64_t v2; // 0x2731d9
    *(int32_t *)-0x3eacbaf90f305338 = (int32_t)v2;
    return a1 & 0xffffffff;
}

// Address range: 0x27323f - 0x273242
int64_t function_27323f(int64_t a1) {
    // 0x27323f
    int64_t result; // 0x27323f
    bool v1; // 0x27323f
    if (!v1) {
        result = function_2731c4();
    }
    // 0x273241
    return result;
}

// Address range: 0x273286 - 0x273287
int64_t function_273286(int64_t a1) {
    // 0x273286
    int64_t result; // 0x273286
    return result;
}

// Address range: 0x2732dc - 0x2732df
int64_t function_2732dc(int64_t a1) {
    // 0x2732dc
    int64_t result; // 0x2732dc
    return result;
}

// Address range: 0x273321 - 0x273327
int64_t function_273321(void) {
    // 0x273321
    int64_t result; // 0x273321
    return result;
}

// Address range: 0x27335a - 0x27335b
int64_t function_27335a(void) {
    // 0x27335a
    int64_t result; // 0x27335a
    return result;
}

// Address range: 0x273392 - 0x273393
int64_t function_273392(void) {
    // 0x273392
    int64_t result; // 0x273392
    return result;
}

// Address range: 0x2733b0 - 0x2733de
int64_t function_2733b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2733b0
    int64_t v1; // 0x2733b0
    *(int32_t *)0x18006f82fd01e8 = (int32_t)v1;
    bool v2; // 0x2733b0
    int64_t v3 = (v2 ? -1 : 1) + a1; // 0x2733c3
    int32_t v4 = *(int32_t *)0x6074b4d99ebc647b; // 0x2733c6
    char * v5 = (char *)v3; // 0x2733cf
    *v5 = *v5 + (char)v1;
    *(int32_t *)v3 = v4;
    return v4 | 0xaa3e8a6;
}

// Address range: 0x273421 - 0x273446
int64_t function_273421(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x273421
    int64_t v1; // 0x273421
    *(char *)a3 = (char)v1 + (char)((uint64_t)v1 / 256);
    int32_t v2 = __asm_in((int16_t)a3); // 0x27342c
    *(char *)-0x17592c8f = *(char *)-0x17592c8f + 1;
    *(char *)-0x6d3759c8c56f6cd7 = (char)v2;
    return unknown_7a7fa146();
}

// Address range: 0x273446 - 0x273487
int64_t function_273446(int64_t a1, int64_t a2, int64_t a3) {
    unsigned char v1 = *(char *)0x5b198055; // 0x27344e
    int64_t v2; // 0x273446
    char v3 = v2 / 256; // 0x27344e
    unsigned char v4 = v1 + v3; // 0x27344e
    *(char *)0x5b198055 = v4;
    int32_t v5 = *(int32_t *)(a1 - 0x219220c5); // 0x273454
    *(char *)a3 = (char)v2 ^ -36;
    int64_t * v6 = (int64_t *)(v2 + 8); // 0x273463
    *(char *)0x384f956d = *(char *)0x384f956d + v3;
    int32_t * v7 = (int32_t *)(v2 + 1); // 0x273472
    *v7 = *v7 + (int32_t)*v6;
    char v8 = __asm_insb(0x42dc); // 0x273475
    *(char *)(int64_t)(v5 + (int32_t)a1 + (int32_t)(v4 < v1)) = v8;
    char v9 = *(char *)0x9da75342; // 0x273479
    unsigned char v10 = v9 + 66; // 0x273479
    int64_t v11 = llvm_ctpop_i8(v9 + 65) % 2 == 0; // 0x273480
    int64_t v12 = (int32_t)(v10 % 16) > 16; // 0x273480
    bool v13; // 0x273446
    *v6 = 0x4000 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 4 * v11 | 16 * v12 | 1155;
    return 1024 * v11 | (int64_t)v10 | 0x1000 * v12 | 0x9da78300;
}

// Address range: 0x2734b9 - 0x2734bc
int64_t function_2734b9(int64_t a1) {
    // 0x2734b9
    int64_t result; // 0x2734b9
    return result;
}

// Address range: 0x2734fe - 0x273503
int64_t function_2734fe(void) {
    // 0x2734fe
    return function_ffffffffba66e3c7();
}

// Address range: 0x27354f - 0x273554
int64_t function_27354f(void) {
    // 0x27354f
    return function_1f291dab();
}

// Address range: 0x273569 - 0x27356a
int64_t function_273569(int64_t a1) {
    // 0x273569
    int64_t result; // 0x273569
    return result;
}

// Address range: 0x2735c2 - 0x2735cb
int64_t function_2735c2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2735c2
    int64_t v1; // 0x2735c2
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2; // 0x2735c2
    *(char *)a3 = *(char *)&v2 + (char)v1;
    bool v3; // 0x2735c2
    return function_ffffffff9bbe705e((v3 ? -4 : 4) + a1);
}

// Address range: 0x273622 - 0x273623
int64_t function_273622(int64_t a1) {
    // 0x273622
    int64_t result; // 0x273622
    return result;
}
