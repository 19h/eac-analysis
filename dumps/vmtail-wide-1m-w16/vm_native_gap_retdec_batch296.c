/*
 * Targeted RetDec C for native executable gap queue batch 296.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xedf9c-0xee19c rank=- name=- kind=- bytes=- uncovered=-
 *   0xee19c-0xee39c rank=- name=- kind=- bytes=- uncovered=-
 *   0xee39c-0xee59c rank=- name=- kind=- bytes=- uncovered=-
 *   0xee59c-0xee79c rank=- name=- kind=- bytes=- uncovered=-
 *   0xee79c-0xee99c rank=- name=- kind=- bytes=- uncovered=-
 *   0x191085-0x191285 rank=- name=- kind=- bytes=- uncovered=-
 *   0x191285-0x191485 rank=- name=- kind=- bytes=- uncovered=-
 *   0x191485-0x191685 rank=- name=- kind=- bytes=- uncovered=-
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
int64_t __asm_rsm(void);
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

int64_t function_191085(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6);
int64_t function_191184(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1912fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_19148a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_19162d(void);
int64_t function_191637(void);
int64_t function_caf2a();
int64_t function_cdc60();
int64_t function_edf9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ee0d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_ee22d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_ee391(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ee4ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_ee65b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_ee7d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ee95c(void);
int64_t function_ee95d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ee962(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ee96a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);

// Address range: 0xedf9c - 0xee0d4
int64_t function_edf9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xedf9c
    int64_t v1; // 0xedf9c
    char v2 = v1;
    *(char *)v1 = 2 * v2;
    char * v3 = (char *)(a4 + 82); // 0xedf9e
    *v3 = *v3 + v2;
    int64_t v4; // bp-16, 0xedf9c
    int64_t v5 = (int64_t)&v4; // 0xee037
    int64_t v6 = v5 + 16; // 0xee03d
    v4 = v5;
    int64_t * v7 = (int64_t *)(v5 - 8); // 0xee066
    *(int64_t *)v6 = v4;
    *(int64_t *)(v5 + 40) = *v7;
    *v7 = a4;
    v4 = v6;
    int64_t v8 = *(int64_t *)(v5 + 8); // 0xee0b3
    v4 = v8;
    *v7 = v8;
    return function_cdc60(a1, a2, a3, a4, v1, v1, v6);
}

// Address range: 0xee0d4 - 0xee22d
int64_t function_ee0d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a7; // bp-32, 0xee212
    int64_t v2; // 0xee0d4
    bool v3; // 0xee0d4
    int64_t result = function_cdc60(a1, a2, a3, a4, v2 & -256 | (int64_t)v3, a6, (int64_t)&v1 - 8); // 0xee228
    return result;
}

// Address range: 0xee22d - 0xee391
int64_t function_ee22d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xee22d
    int64_t v1; // 0xee22d
    return function_cdc60(a1, a2, a3, a4, a5, v1, a6);
}

// Address range: 0xee391 - 0xee4ec
int64_t function_ee391(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xee391
    bool v1; // 0xee391
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0xee391
    int64_t v3 = 0xa073af1; // bp-40, 0xee40b
    int64_t * v4 = (int64_t *)(a5 + 16); // 0xee44a
    int64_t v5 = *v4; // 0xee44a
    int64_t * v6 = (int64_t *)(a5 - 8); // 0xee44a
    *v6 = v5;
    int64_t * v7 = (int64_t *)(a5 - 16); // 0xee44e
    *v7 = v2;
    *v4 = v2;
    *(int64_t *)(a5 - 24) = v2;
    *v7 = v5;
    *(int64_t *)(a5 + 24) = *v6;
    int64_t * v8 = (int64_t *)a5; // 0xee49f
    *v6 = *v8;
    *v7 = a5;
    *v6 = *v8;
    *v7 = a5;
    int64_t v9; // 0xee391
    return function_cdc60(a1, a2, a3, *v6, a5, v9, (int64_t)&v3);
}

// Address range: 0xee4ec - 0xee65b
int64_t function_ee4ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xee4ec
    int64_t v1; // 0xee4ec
    return function_cdc60(a1, a2, a3, a4, a5, a6, v1);
}

// Address range: 0xee65b - 0xee7d4
int64_t function_ee65b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xee65b
    int64_t v1; // bp-40, 0xee65b
    int64_t v2 = (int64_t)&v1; // 0xee6cc
    int64_t v3 = *(int64_t *)(v2 + 32); // 0xee6ed
    int64_t v4 = v2 - 8; // 0xee6ed
    int64_t * v5 = (int64_t *)v4; // 0xee6ed
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0xee6f1
    *v6 = v3;
    int64_t v7 = v2 - 24; // 0xee6f8
    int64_t * v8 = (int64_t *)v7; // 0xee707
    *v8 = v4;
    int64_t v9 = *(int64_t *)(v2 + 8); // 0xee710
    *v6 = v9;
    int64_t * v10 = (int64_t *)(v2 - 32); // 0xee720
    *v10 = a6;
    v1 = v3;
    *v8 = v9;
    *v10 = v7;
    int64_t v11 = *v8; // 0xee771
    *(int64_t *)(v2 - 40) = v11;
    *(int64_t *)(v2 + 16) = v11;
    *v8 = *v10;
    *v6 = v2;
    int64_t v12 = *v5; // 0xee7b6
    *v6 = v12;
    *v8 = v12;
    int64_t v13; // 0xee65b
    return function_cdc60(a1, a2, a3, v13, a5, *v8, 0x42b75b70);
}

// Address range: 0xee7d4 - 0xee954
int64_t function_ee7d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xee7d4
    int64_t v1; // bp-32, 0xee7d4
    int64_t v2 = (int64_t)&v1; // 0xee834
    v1 = v2;
    int64_t v3 = v2 - 8; // 0xee83c
    int64_t * v4 = (int64_t *)(v2 - 16); // 0xee844
    int64_t v5 = v2 - 24; // 0xee848
    int64_t * v6 = (int64_t *)v5; // 0xee848
    int64_t v7 = *(int64_t *)(v2 + 24); // 0xee858
    *v4 = v7;
    *v6 = v3;
    int64_t v8 = *(int64_t *)(v2 + 8); // 0xee877
    *v4 = v8;
    *v6 = a4;
    *(int64_t *)(v2 - 32) = v5;
    *v6 = v7;
    v1 = *v4;
    *(int64_t *)(v2 + 16) = v8;
    *v4 = v2;
    *v4 = *(int64_t *)v3;
    *v6 = v3;
    int64_t v9; // 0xee7d4
    return function_cdc60(v9, a2, a3, *v6, a5, v9, 0xe6c67);
}

// Address range: 0xee95c - 0xee95d
int64_t function_ee95c(void) {
    // 0xee95c
    int64_t result; // 0xee95c
    return result;
}

// Address range: 0xee95d - 0xee962
int64_t function_ee95d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0xee95d
    *v1 = *v1 | (char)a4;
    int64_t v2; // 0xee95d
    return function_ee96a(a1, a2, a3, a4, v2, v2);
}

// Address range: 0xee962 - 0xee96a
int64_t function_ee962(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xee962
    int64_t v1; // 0xee962
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(a1 + 28 + 4 * v2); // 0xee964
    *v3 = *v3 + (char)a4;
    return v2 & -164;
}

// Address range: 0xee96a - 0xee999
int64_t function_ee96a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xee96a
    int64_t result; // 0xee96a
    return result;
}

// Address range: 0x191085 - 0x191184
int64_t function_191085(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x191085
    int64_t v1; // 0x191085
    int64_t v2 = (int64_t)&v1; // 0x19111d
    int64_t v3 = 0x100000000 * v2 >> 32; // 0x191128
    v1 = v3;
    int64_t v4; // 0x191085
    int64_t v5 = 0x100000000 * v4 >> 32 ^ v2 ^ v3; // 0x19112c
    int64_t * v6 = (int64_t *)v3; // 0x191134
    *v6 = v5;
    *(int64_t *)(v3 + 32) = v5;
    int64_t v7 = v3 + 8; // 0x191138
    int64_t * v8 = (int64_t *)v7; // 0x19113c
    *v6 = *v8;
    int64_t * v9 = (int64_t *)(v3 - 8); // 0x19113f
    *v9 = v7;
    *v6 = *v8;
    *v9 = v7;
    return function_caf2a(a1, a2, a3, a4, a5, v4, 0x100000000 * v1 >> 32);
}

// Address range: 0x191184 - 0x1912fa
int64_t function_191184(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x191184
    int64_t v1; // 0x191184
    return function_caf2a(a1, a2, a3, 310, a5, v1, a6);
}

// Address range: 0x1912fa - 0x19148a
int64_t function_1912fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1912fa
    return function_caf2a(a1, a2, a3, a4, a5, a6, 0x18eb6d);
}

// Address range: 0x19148a - 0x191618
int64_t function_19148a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x19148a
    int64_t v1; // bp-32, 0x19148a
    int64_t v2 = (int64_t)&v1; // 0x191508
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x19153a
    int64_t * v4 = (int64_t *)v3; // 0x191542
    int64_t v5 = *(int64_t *)(v2 + 32); // 0x191545
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x191549
    *v6 = v5;
    int64_t v7 = v2 + 16; // 0x191558
    int64_t * v8 = (int64_t *)v7; // 0x191558
    *v6 = a3;
    *v8 = v5;
    *v4 = v3;
    v1 = *v8;
    int64_t * v9 = (int64_t *)(v2 + 8); // 0x1915d9
    *(int64_t *)(v2 + 40) = *v9;
    *v9 = *v8;
    *v4 = v2;
    v1 = v7;
    int64_t v10 = *v8; // 0x1915fd
    *v9 = v10;
    v1 = v10;
    return function_caf2a(a1, a2, a3, a4, a5, a6, v2);
}

// Address range: 0x19162d - 0x19162e
int64_t function_19162d(void) {
    // 0x19162d
    int64_t result; // 0x19162d
    return result;
}

// Address range: 0x191637 - 0x191638
int64_t function_191637(void) {
    // 0x191637
    int64_t result; // 0x191637
    return result;
}
