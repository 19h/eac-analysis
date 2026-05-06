/*
 * Targeted RetDec C for native executable gap queue batch 1512.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xc3926-0xc3b26 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_c3926(int64_t a1, int64_t a2);
int64_t function_c396d(void);
int64_t function_c39bb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_c3a69(int64_t a1, int64_t a2, int64_t a3, int64_t a4);

// Address range: 0xc3926 - 0xc3948
int64_t function_c3926(int64_t a1, int64_t a2) {
    // 0xc3926
    int64_t v1; // 0xc3926
    int64_t v2 = v1;
    int64_t v3 = v1;
    *(char *)v3 = 2 * (char)v3;
    int64_t v4; // 0xc3926
    int64_t v5 = v4;
    *(char *)v5 = *(char *)&v4 + (char)v5;
    int64_t v6 = v4;
    *(char *)v6 = *(char *)&v4 + (char)v6;
    uint64_t v7 = (v4 & -256) + v2;
    int64_t result = v7 & 0xff00 | v4 & -0xff01; // 0xc392f
    char * v8 = (char *)result; // 0xc3932
    char v9 = v4; // 0xc3932
    char v10 = 2 * v9;
    *v8 = v10 + (*v8 | v9);
    *(int32_t *)(v2 + 8) = (int32_t)v2;
    *v8 = *v8 + v10;
    char * v11 = (char *)(2 * v2 + a1); // 0xc393f
    *v11 = *v11 + (char)(v7 / 256);
    *v8 = (*v8 | v9) + v10;
    return result;
}

// Address range: 0xc396d - 0xc396e
int64_t function_c396d(void) {
    // 0xc396d
    int64_t result; // 0xc396d
    return result;
}

// Address range: 0xc39bb - 0xc39f9
int64_t function_c39bb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0xc39bb
    int64_t v1; // 0xc39bb
    int64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = a1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v5; // 0xc39bb
    int64_t v6 = v5;
    *(char *)v6 = *(char *)&v5 + (char)v6;
    char v7 = a3 / 256; // 0xc39bf
    *(char *)a1 = *(char *)&v4 + v7;
    int64_t v8 = __asm_wait(); // 0xc39c1
    v5 = v8;
    char v9 = v8;
    char * v10 = (char *)v8; // 0xc39c2
    *v10 = v9;
    *v10 = *(char *)&v5 + v9;
    char v11 = *(char *)&v5; // 0xc39c6
    char v12 = v11 + v9; // 0xc39c6
    *v10 = v12;
    char v13; // 0xc39bb
    int64_t v14; // 0xc39bb
    char v15; // 0xc39bb
    if (v12 < 0 == ((v12 ^ v11) & (v12 ^ v9)) < 0 == (v12 != 0)) {
        int64_t v16 = function_c396d(); // 0xc39c8
        v5 = v16;
        char v17 = v16;
        v13 = v17;
        v14 = v16;
        v15 = v17;
    } else {
        // 0xc39bb
        v13 = v5;
        v14 = v5;
        v15 = *(char *)&v5;
    }
    // 0xc39ca
    *(char *)v14 = v15 | v13;
    int64_t v18 = v5;
    *(char *)v18 = *(char *)&v5 + (char)v18;
    int64_t v19 = v5;
    *(char *)v19 = *(char *)&v5 + (char)v19;
    *(char *)v4 = *(char *)&v3;
    int64_t v20 = v5;
    *(char *)v20 = *(char *)&v5 | (char)v20;
    int64_t v21 = v5;
    *(char *)v21 = *(char *)&v5 + (char)v21;
    unsigned char v22 = *(char *)&v5; // 0xc39d6
    unsigned char v23 = v22 + (char)v5; // 0xc39d6
    *(char *)v5 = v23;
    uint64_t v24 = v5 + 170 + (int64_t)(v23 < v22); // 0xc39d8
    int64_t v25 = v24 % 256 | v5 & -256; // 0xc39d8
    char * v26 = (char *)v25; // 0xc39da
    char v27 = v24; // 0xc39da
    *v26 = 2 * v27 + (*v26 | v27);
    char * v28 = (char *)(v25 + 8); // 0xc39e0
    *v28 = *v28 - v7;
    *v26 = *v26 + v27;
    int64_t result = v25 ^ 179; // 0xc39e8
    char * v29 = (char *)result; // 0xc39ea
    char v30 = result; // 0xc39ea
    *v29 = 3 * v30 + (*v29 | v30);
    return result;
}

// Address range: 0xc3a69 - 0xc3b21
int64_t function_c3a69(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xc3a69
    int64_t v1; // 0xc3a69
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0xc3a69
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    int64_t v5; // 0xc3a69
    char * v6 = (char *)(v5 - 14); // 0xc3a77
    *v6 = *v6 + (char)a4;
    int64_t v7 = v3;
    *(char *)v7 = *(char *)&v3 | (char)v7;
    int64_t v8 = v3;
    *(char *)v8 = *(char *)&v3 + (char)v8;
    int64_t v9 = v3;
    *(char *)v9 = *(char *)&v3 + (char)v9;
    int64_t v10 = 2 * a2 & 0xfffffffe; // 0xc3a80
    int64_t v11 = v3;
    *(char *)v11 = *(char *)&v3 | (char)v11;
    int64_t v12 = v3;
    *(char *)v12 = *(char *)&v3 + (char)v12;
    int64_t v13 = v3;
    *(char *)v13 = *(char *)&v3 + (char)v13;
    int64_t v14 = v3 ^ 248; // 0xc3a88
    char * v15 = (char *)v14; // 0xc3a8a
    char v16 = v14; // 0xc3a8a
    char v17 = 2 * v16;
    *v15 = (v17 + (*v15 | v16) | v16) + v17;
    int16_t v18 = a3; // 0xc3a98
    char v19 = __asm_in(v18); // 0xc3a98
    uint64_t v20 = v3 & -256 | (int64_t)v19; // 0xc3a98
    char * v21 = (char *)v20; // 0xc3a9a
    char v22 = 2 * v19;
    *v21 = (*v21 | v19) + v22;
    __asm_outsd(v18, *(int32_t *)v10);
    int64_t v23 = 2 * a4 & 254 | a4 & -256; // 0xc3aa1
    *v21 = *v21 + v22;
    char * v24 = (char *)v23; // 0xc3aa7
    *v24 = *v24 + (char)v5;
    uint32_t v25 = *(int32_t *)v23 + (int32_t)v23; // 0xc3aa9
    int64_t v26 = v25; // 0xc3aa9
    *v21 = *v21 + v22;
    char * v27 = (char *)(v1 + (int64_t)&g1); // 0xc3aaf
    char v28 = a3; // 0xc3aaf
    *v27 = *v27 + v28;
    *v21 = *v21 + v19;
    int64_t v29 = v5;
    *(char *)v29 = *(char *)&v5 + (char)v29;
    unsigned char v30 = *(char *)v26 | (char)v25; // 0xc3ab9
    char v31 = *v21 + v22; // 0xc3abd
    *v21 = v31;
    int64_t v32 = v26 & 0xffff0000 | (int64_t)v30 | 256 * (int64_t)(v30 + (char)(v25 / 256)); // 0xc3abf
    unsigned char v33 = *(char *)v32 | v30; // 0xc3ac1
    int64_t v34 = v32 & 0xffffff00; // 0xc3ac1
    int64_t v35 = v34 | (int64_t)v33; // 0xc3ac1
    *v21 = v31 + v22;
    *(char *)v5 = *(char *)&v5 + (char)(v20 / 256);
    unsigned char v36 = v19 | 9; // 0xc3ac9
    int64_t v37 = v20 & -256 | (int64_t)v36; // 0xc3ac9
    v3 = v37;
    char * v38 = (char *)v37; // 0xc3acb
    char v39 = 2 * v36;
    *v38 = *v38 + v39;
    char * v40 = (char *)(v10 + 9 + v35); // 0xc3acf
    *v40 = *v40 + (char)(v5 / 256);
    *v38 = *v38 + v36;
    int32_t * v41 = (int32_t *)v37; // 0xc3ada
    *v41 = *v41 | (int32_t)v37;
    char v42 = *v38 + v39; // 0xc3ade
    *v38 = v42;
    if (v42 < 0) {
        int32_t * v43 = (int32_t *)v3; // 0xc3ae2
        *v43 = *v43 | (int32_t)v3;
        char * v44 = (char *)v3; // 0xc3ae4
        *v44 = *v44 + (char)v3;
        char * v45 = (char *)v3; // 0xc3ae6
        *v45 = *v45 + (char)v3;
        int64_t v46 = v3 | (int64_t)(int32_t)&g2; // 0xc3ae8
        int64_t result = v46 & 0xffffffff; // 0xc3ae8
        char * v47 = (char *)result; // 0xc3aed
        *v47 = *v47 + (char)v46;
        char * v48 = (char *)(v35 + 26); // 0xc3aef
        *v48 = *v48 + (char)v5;
        int32_t * v49 = (int32_t *)result; // 0xc3af2
        *v49 = *v49 | (int32_t)v46;
        return result;
    }
    char * v50 = (char *)v3; // 0xc3af5
    *v50 = *v50 + (char)v3;
    char * v51 = (char *)(v35 + (int64_t)&g3); // 0xc3af7
    *v51 = *v51 + (char)v3;
    char * v52 = (char *)v3; // 0xc3afd
    *v52 = *v52 + (char)v3;
    int64_t v53 = v3;
    int64_t v54 = 257 * v53 & 0xff00 | v53 & -0xff01; // 0xc3aff
    int64_t v55 = v34 | (int64_t)(*(char *)v35 & v33); // 0xc3b01
    char * v56 = (char *)v54; // 0xc3b03
    char v57 = v53; // 0xc3b03
    char v58 = 2 * v57;
    *v56 = *v56 + v58;
    *(char *)0xc4433 = *(char *)0xc4433 + v28;
    *v56 = *v56 + v57;
    int32_t * v59 = (int32_t *)v54; // 0xc3b11
    *v59 = *v59 | (int32_t)v54;
    *v56 = *v56 + v58;
    uint64_t result2 = __asm_wait(); // 0xc3b18
    int32_t * v60 = (int32_t *)v55; // 0xc3b19
    *v60 = *v60 - (int32_t)v55;
    char * v61 = (char *)result2; // 0xc3b1b
    *v61 = *v61 + 2 * (char)result2;
    char * v62 = (char *)v55; // 0xc3b1f
    *v62 = *v62 + (char)(result2 / 256);
    return result2;
}
