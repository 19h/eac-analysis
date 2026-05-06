/*
 * Targeted RetDec C for native executable gap queue batch 198.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x492870-0x4928c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57c910-0x57c987 rank=- name=- kind=- bytes=- uncovered=-
 *   0x554c70-0x554de0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x41740-0x41810 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4aa9d0-0x4aab60 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b3910-0x4b3af0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d1510-0x4d1770 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57cf40-0x57d0b0 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_41740(int64_t str);
int64_t function_492846();
int64_t function_492870(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_492893(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_4a9850();
int64_t function_4aa650();
int64_t function_4aa952();
int64_t function_4aa9d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4b0ac0();
int64_t function_4b0ec0();
int64_t function_4b0f10();
int64_t function_4b1220();
int64_t function_4b1590();
int64_t function_4b1a80();
int64_t function_4b38b0();
int64_t function_4b3910(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b5070();
int64_t function_4c1d00();
int64_t function_4c4730();
int64_t function_4d1510(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7);
int64_t function_554bcd();
int64_t function_554c70(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_554ce8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_579a10();
int64_t function_57b480();
int64_t function_57c889();
int64_t function_57c910(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_57c920(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_57c938(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_57c950(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_57cf40(int64_t a1, uint64_t a2);

// Address range: 0x41740 - 0x4180c
int64_t function_41740(int64_t str) {
    // 0x41740
    int64_t n; // 0x41740
    *(char *)0x41946 = *(char *)0x41946 + (char)(n / 256);
    int32_t v1; // 0x41740
    if (v1 <= (int32_t)n) {
        // 0x4180c
        int64_t result; // 0x41740
        return result;
    }
    int64_t result2 = *(int64_t *)(n + 32); // 0x41754
    int64_t v2 = n + (int64_t)*(int32_t *)(result2 + 4 * n); // 0x4175c
    uint64_t v3 = (int64_t)*(int16_t *)(v2 + 28); // 0x41760
    if (n == 0 || n > v3) {
        // 0x4180c
        return result2;
    }
    uint16_t v4 = *(int16_t *)(v2 + 32); // 0x4177e
    if (n != (int64_t)v4) {
        // 0x4180c
        return result2;
    }
    int64_t str2 = v2 + 46 + v3 + (int64_t)*(int16_t *)(v2 + 30); // 0x41793
    if ((int32_t)n != 0) {
        // 0x4180c
        return memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n);
    }
    int64_t result3 = 0; // 0x417ff
    while ((int32_t)v4 > (int32_t)result3) {
        char v5 = *(char *)(result3 + str); // 0x417da
        int64_t v6 = v5; // 0x417da
        char v7 = *(char *)(result3 + str2); // 0x417ee
        int64_t v8 = v7; // 0x417ee
        int64_t v9 = v7 < 91 ? v8 + 32 : v8;
        result3++;
        if ((int32_t)(v5 < 91 ? v6 + 32 : v6) != (int32_t)v9) {
            // break -> 0x4180c
            break;
        }
    }
    // 0x4180c
    return result3;
}

// Address range: 0x492870 - 0x492893
int64_t function_492870(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x492870
    int64_t v1; // 0x492870
    if (v1 == 0) {
        // 0x49288a
        return 0;
    }
    // 0x492875
    if (*(int64_t *)(v1 + 24) % *(int64_t *)(a1 + 8) == a2) {
        function_492846();
    }
    // 0x49288a
    return 0;
}

// Address range: 0x492893 - 0x492897
int64_t function_492893(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x492893
    return result;
}

// Address range: 0x4aa9d0 - 0x4aab4c
int64_t function_4aa9d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4aa9d0
    int64_t v1; // 0x4aa9d0
    char * v2 = (char *)(v1 - 119); // 0x4aa9d2
    *v2 = *v2 & (char)a4;
    return function_4c1d00();
    // 0x4aa9f6
    bool v3; // 0x4aa9d0
    *(char *)a3 = (char)a3 - (char)v1 + (char)v3;
    int64_t v4; // 0x4aa9d0
    int64_t v5 = v4;
    *(char *)v5 = *(char *)&v4 + (char)v5;
    int32_t * v6 = (int32_t *)(v1 + (int64_t)&g1); // 0x4aa9fa
    if ((int32_t)function_4c4730(*v6) != 0) {
        function_4aa952();
    }
    // 0x4aaa2f
    if ((int32_t)function_4a9850(v1, *v6, a4) != 0) {
        // branch -> 0x4aaa62
    }
    // 0x4aaa62
    int32_t v7; // 0x4aa9d0
    int32_t * v8; // 0x4aa9d0
    if (*(int64_t *)(v1 + 136) != *(int64_t *)(v1 + 136)) {
        goto lab_0x4aaa8d;
    } else {
        int64_t n = *(int64_t *)(v1 + 112); // 0x4aaa72
        int64_t str2 = *(int64_t *)(v1 + 144); // 0x4aaa76
        int64_t str = *(int64_t *)(v1 + 144); // 0x4aaa7d
        int32_t memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n); // 0x4aaa84
        v4 = memcmp_rc;
        if (memcmp_rc == 0) {
            // 0x4aab00
            if (v1 == 0) {
                // 0x4aaae8
                return 0;
            }
            // 0x4aab00
            v7 = *v8;
            goto lab_0x4aab30;
        } else {
            goto lab_0x4aaa8d;
        }
    }
  lab_0x4aaa8d:;
    int32_t v9 = *v8 | (int32_t)function_4aa650(v1, v1, v1, v1); // 0x4aaab4
    int64_t result = v9; // 0x4aaab4
    v4 = result;
    if (v1 == 0) {
        goto lab_0x4aab3a;
    } else {
        // 0x4aaac3
        v7 = 0;
        if (v9 != 0) {
            // 0x4aaae8
            return result;
        }
        goto lab_0x4aab30;
    }
  lab_0x4aab3a:
    // 0x4aab3a
    v4 = 0;
    // 0x4aaae8
    return 0;
  lab_0x4aab30:
    // 0x4aab30
    v4 = v7;
    goto lab_0x4aab3a;
}

// Address range: 0x4b3910 - 0x4b3aec
int64_t function_4b3910(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b3910
    int64_t v1; // bp-216, 0x4b3910
    function_4b0870(&v1);
    int64_t v2; // bp-184, 0x4b3910
    function_4b0870(&v2);
    int64_t v3; // bp-152, 0x4b3910
    function_4b0870(&v3);
    int64_t v4; // bp-120, 0x4b3910
    function_4b0870(&v4);
    int64_t v5; // bp-88, 0x4b3910
    function_4b0870(&v5);
    int64_t v6 = function_4b1a80(&v1, a1, 1); // 0x4b3980
    int64_t v7 = v6; // 0x4b398a
    if ((int32_t)v6 == 0) {
        int64_t v8 = function_4b0ec0(&v1); // 0x4b3991
        int64_t v9 = function_4b0ac0(&v2, &v1); // 0x4b39a3
        v7 = v9;
        if ((int32_t)v9 == 0) {
            int64_t v10 = function_4b1220(&v2, v8); // 0x4b3a28
            v7 = v10;
            if ((int32_t)v10 == 0) {
                // 0x4b3a38
                function_4b0f10(a1);
                int64_t v11 = function_4b38b0(&v4, 8 * *(int64_t *)(a1 + 8), a2, a3); // 0x4b3ac4
                v7 = v11;
                if ((int32_t)v11 == 0) {
                    // 0x4b3ad4
                    return function_4b1590(&v4, &v1);
                }
            }
        }
    }
    // 0x4b39af
    function_4b0890(&v1);
    function_4b0890(&v2);
    function_4b0890(&v3);
    function_4b0890(&v4);
    function_4b0890(&v5);
    return v7 & 0xffffffff;
}

// Address range: 0x4d1510 - 0x4d176e
int64_t function_4d1510(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7) {
    // 0x4d1510
    char v1; // 0x4d1510
    int64_t result = (int64_t)v1 - 4; // 0x4d153e
    if (v1 != 16 && result >= 12 || v1 % 2 != 0) {
        // 0x4d1940
        return result;
    }
    int64_t result2 = a5 - 7; // 0x4d1567
    if (result2 > 6 || a7 > (int64_t)&g2) {
        // 0x4d1940
        return result2;
    }
    // 0x4d1582
    int64_t v2; // bp-104, 0x4d1510
    int64_t v3 = (int64_t)&v2; // 0x4d1592
    char v4 = a3; // 0x4d15aa
    char v5 = a5; // 0x4d15ac
    unsigned char result5 = 14 - v5; // 0x4d15ac
    v2 = (v4 ^ 127) + v4 + (char)(a7 == 0) & 64 | result5 | 4 * v1 - 8 & -8;
    int64_t v6; // bp-103, 0x4d1510
    memcpy(&v6, (int64_t *)a4, (int32_t)a5);
    int64_t result3 = v3; // 0x4d15e3
    uint64_t v7 = a3;
    *(char *)(result3 + 15) = (char)v7;
    result3--;
    int64_t v8 = v7 / 256; // 0x4d15f3
    while ((char)v3 - (char)result3 < 15 - v5) {
        // 0x4d15e8
        v7 = v8;
        *(char *)(result3 + 15) = (char)v7;
        result3--;
        v8 = v7 / 256;
    }
    // 0x4d15fc
    if (v7 >= 256) {
        // 0x4d1940
        return result3;
    }
    int64_t v9 = 0; // bp-88, 0x4d1605
    char v10; // bp-168, 0x4d1510
    int64_t v11 = (int64_t)&v10 + 80; // 0x4d1628
    char * v12 = (char *)v11;
    *v12 = *(char *)&v2 ^ (char)v8;
    for (int64_t i = 1; i < 16; i++) {
        char * v13 = (char *)(i + v11);
        *v13 = *(char *)(i + v3) ^ *v13;
    }
    // 0x4d1636
    int64_t v14; // bp-112, 0x4d1510
    int64_t result4 = function_4b5070(a1, &v9, 16, &v9, &v14); // 0x4d164d
    if ((int32_t)result4 != 0) {
        // 0x4d1940
        return result4;
    }
    if (a7 == 0) {
        // 0x4d1764
        return result5;
    }
    uint64_t v15 = a7 / 256; // 0x4d1672
    int64_t v16 = a7 < 14 ? a7 : 14; // 0x4d167d
    v2 = 0x100000000000000 * v15 / 0x100000000000000;
    v6 = 0x100000000000000 * a7 / 0x100000000000000;
    v10 = v15;
    int64_t v17; // bp-102, 0x4d1510
    memcpy(&v17, (int64_t *)a6, (int32_t)v16);
    *v12 = *v12 ^ v10;
    for (int64_t i = 1; i < 16; i++) {
        char * v18 = (char *)(i + v11); // 0x4d16b4
        *v18 = *v18 ^ *(char *)(i + v3);
    }
    int64_t result6 = function_4b5070(a1, &v9, 16, &v9, &v14); // 0x4d16d9
    if ((int32_t)result6 != 0) {
        // 0x4d1940
        return result6;
    }
    int64_t v19 = a7 - v16; // 0x4d16e8
    if (v19 == 0) {
        // 0x4d1764
        return result5;
    }
    int64_t v20 = v16 + a6; // 0x4d16f5
    uint64_t v21 = v19;
    int64_t v22 = v21 < 16 ? v21 : 16; // 0x4d1705
    v2 = 0;
    memcpy(&v2, (int64_t *)v20, (int32_t)v22);
    char * v23; // 0x4d172c
    for (int64_t i = 0; i < 16; i++) {
        // 0x4d1728
        v23 = (char *)(i + v11);
        *v23 = *v23 ^ *(char *)(i + v3);
    }
    int64_t result7 = function_4b5070(a1, &v9, 16, &v9, &v14); // 0x4d174f
    while ((int32_t)result7 == 0) {
        int64_t v24 = v21 - v22; // 0x4d175f
        v20 += v22;
        if (v24 == 0) {
            // 0x4d1764
            return result5;
        }
        v21 = v24;
        v22 = v21 < 16 ? v21 : 16;
        v2 = 0;
        memcpy(&v2, (int64_t *)v20, (int32_t)v22);
        for (int64_t i = 0; i < 16; i++) {
            // 0x4d1728
            v23 = (char *)(i + v11);
            *v23 = *v23 ^ *(char *)(i + v3);
        }
        // 0x4d173a
        result7 = function_4b5070(a1, &v9, 16, &v9, &v14);
    }
    // 0x4d1940
    return result7;
}

// Address range: 0x554c70 - 0x554ce5
int64_t function_554c70(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x554c70
    int64_t v1; // 0x554c70
    char v2 = v1;
    *(char *)v1 = 2 * v2;
    char * v3 = (char *)(v1 - 117); // 0x554c74
    char v4 = *v3; // 0x554c74
    char v5 = a4; // 0x554c74
    char v6 = v4 + v5; // 0x554c74
    *v3 = v6;
    if (v6 < 0 == ((v6 ^ v4) & (v6 ^ v5)) < 0) {
        char * v7 = (char *)(v1 - 120); // 0x554c79
        *v7 = *v7 | v2;
        return result;
    }
    // 0x554cca
    return v1 & -224;
}

// Address range: 0x554ce8 - 0x554ddd
int64_t function_554ce8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x554ce8
    int64_t result; // 0x554ce8
    int64_t * v1 = (int64_t *)(result + 40); // 0x554ce8
    uint64_t v2 = *v1; // 0x554ce8
    if (v2 >= *(int64_t *)(result + 48)) {
        // 0x554dc8
        return result;
    }
    // 0x554cfa
    *(char *)v2 = (char)result;
    *v1 = *v1 + 1;
    return function_554bcd();
}

// Address range: 0x57c910 - 0x57c91f
int64_t function_57c910(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x57c910
    int64_t v1; // 0x57c910
    int32_t * v2 = (int32_t *)(v1 + 80); // 0x57c910
    *v2 = *v2 + 9;
    return function_57c889();
}

// Address range: 0x57c920 - 0x57c934
int64_t function_57c920(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x57c920
    return 0;
}

// Address range: 0x57c938 - 0x57c947
int64_t function_57c938(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x57c938
    int64_t v1; // 0x57c938
    int32_t * v2 = (int32_t *)(v1 + 80); // 0x57c938
    *v2 = *v2 + 6;
    return function_57c889();
}

// Address range: 0x57c950 - 0x57c961
int64_t function_57c950(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x57c950
    int64_t v1; // 0x57c950
    int32_t * v2 = (int32_t *)(v1 + 80); // 0x57c950
    *v2 = *v2 + 17;
    return function_57c889();
}

// Address range: 0x57cf40 - 0x57d0b0
int64_t function_57cf40(int64_t a1, uint64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x57cf44
    int64_t result = *v1; // 0x57cf44
    char * v2 = (char *)result; // 0x57cf4b
    switch (*v2) {
        case 71: {
        }
        case 84: {
            int32_t * v3 = (int32_t *)(a1 + 80); // 0x57cfd8
            *v3 = *v3 + 20;
            char v4 = *v2; // 0x57cfe1
            if (v4 == 84 || v4 != 71) {
                // 0x57cf96
                return result;
            }
            int64_t v5 = result + 1; // 0x57cff6
            *v1 = v5;
            if (*(char *)v5 == 0) {
                // 0x57cf96
                return result;
            }
            // 0x57d008
            *v1 = result + 2;
            return result;
        }
    }
    int64_t result3 = function_57b480(); // 0x57cf5f
    if (a2 % 2 != 0 && result3 != 0) {
        // 0x57cf72
        if (*(char *)(a1 + 16) % 2 == 0) {
            int32_t v6 = *(int32_t *)result3; // 0x57cfa4
            int64_t result2 = result3; // 0x57cfad
            int32_t v7 = v6; // 0x57cfad
            if (v6 == 32 || (v6 & -4) == 28) {
                int64_t v8 = *(int64_t *)(result3 + 8); // 0x57cfa0
                int32_t v9 = *(int32_t *)v8; // 0x57cfa4
                int64_t v10 = v8; // 0x57cfad
                result2 = v8;
                v7 = v9;
                while (v9 == 32 || (v9 & -4) == 28) {
                    // 0x57cfa0
                    v8 = *(int64_t *)(v10 + 8);
                    v9 = *(int32_t *)v8;
                    v10 = v8;
                    result2 = v8;
                    v7 = v9;
                }
            }
            // 0x57cfaf
            if (v7 != 2) {
                // 0x57cf96
                return result2;
            }
            int64_t v11 = result2 + 16; // 0x57cfb4
            int64_t v12 = *(int64_t *)v11;
            int64_t v13 = v12 + 8; // 0x57cfcd
            while ((int32_t)function_579a10(*(int32_t *)v12) != 0) {
                // 0x57cfc4
                v12 = *(int64_t *)v13;
                v13 = v12 + 8;
            }
            // 0x57cfcf
            *(int64_t *)v11 = v12;
            // 0x57cf96
            return result2;
        }
    }
    char v14 = *(char *)*v1; // 0x57cf7c
    if (result3 == 0 || v14 == 0 || v14 == 69) {
        // 0x57cf96
        return result3;
    }
    uint32_t result4 = *(int32_t *)result3; // 0x57d03b
    if (result4 > 32 || result4 != 4) {
        // 0x57cf96
        return result4;
    }
    int64_t result5 = *(int64_t *)(result3 + 8); // 0x57d058
    if (result5 == 0) {
        // 0x57cf96
        return 0;
    }
    uint32_t v15 = *(int32_t *)result5; // 0x57d061
    if (v15 >= 53) {
        // 0x57cf96
        return result5;
    }
    uint32_t v16 = v15 % 64;
    int64_t v17 = v16 == 0 ? 1 : 1 << (int64_t)v16;
    if ((v17 & 0x10000000000180) != 0) {
        // 0x57cf96
        return result5;
    }
    // 0x57d083
    if ((v17 & 6) == 0) {
        // 0x57cf96
        return result5;
    }
    int64_t result6 = result5; // 0x57d08b
    result6 += 16;
    while (result6 != 0) {
        uint32_t v18 = *(int32_t *)result6; // 0x57d090
        if (v18 >= 53) {
            // break -> 0x57cf96
            break;
        }
        uint32_t v19 = v18 % 64;
        int64_t v20 = v19 == 0 ? 1 : 1 << (int64_t)v19;
        if ((v20 & 6) == 0 || (v20 & 0x10000000000180) != 0) {
            // break -> 0x57cf96
            break;
        }
        result6 += 16;
    }
    // 0x57cf96
    return result6;
}
