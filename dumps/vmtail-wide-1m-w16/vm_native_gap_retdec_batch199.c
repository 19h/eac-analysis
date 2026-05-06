/*
 * Targeted RetDec C for native executable gap queue batch 199.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x41810-0x41840 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b3b00-0x4b3b10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d1770-0x4d17a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57d0b0-0x57d4d7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e19c-0x3ed20 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a4be0-0x4a5380 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
extern int g4;
extern int g5;
extern int g6;
extern int g7;
extern int g8;
extern int g9;
extern int g10;
extern int g11;
extern int g12;
extern int g13;
extern int g14;
extern int g15;
extern int g16;
extern int g17;
extern int g18;
extern int g19;
extern int g20;
extern int g21;
extern int g22;
extern int g23;
extern int g24;
extern int g25;
extern int g26;
extern int g27;
extern int g28;
extern int g29;
extern int g30;
extern int g31;
extern int g32;
extern int g33;
extern int g34;
extern int g35;
extern int g36;
extern int g37;
extern int g38;
extern int g39;
extern int g40;
extern int g41;
extern int g42;
extern int g43;
extern int g44;
extern int g45;
extern int g46;
extern int g47;
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

int64_t function_3e19c(int64_t a1, int64_t a2, int64_t result, uint64_t a4, int64_t a5, int64_t a6, uint32_t a7);
int64_t function_41810(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_4968b0();
int64_t function_496940();
int64_t function_49b4a0();
int64_t function_49bab0();
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_49e960();
int64_t function_4a4be0(int64_t a1);
int64_t function_4b1220();
int64_t function_4b3b00(int64_t a1, int64_t a2);
int64_t function_4d1770(int64_t a1, int64_t a2);
int64_t function_5797e0();
int64_t function_579a30();
int64_t function_579ab0();
int64_t function_57b480();
int64_t function_57c9c0();
int64_t function_57cf40();
int64_t function_57d03b();
int64_t function_57d0b0(void);
int64_t function_57d0b7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_57d0c8(void);
int64_t function_57d110(void);
int64_t function_57d112(int64_t a1, int64_t a2, int64_t a3);
int64_t function_57d138(int64_t a1, int64_t a2, int64_t a3);
int64_t function_57d150(void);
int64_t function_57d170(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_57d1a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_57d1c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);

// Address range: 0x3e19c - 0x3ed1d
int64_t function_3e19c(int64_t a1, int64_t a2, int64_t result, uint64_t a4, int64_t a5, int64_t a6, uint32_t a7) {
    // 0x3e19c
    __readfsqword(40);
    uint64_t v1 = result + a2; // 0x3e1dd
    uint64_t v2 = v1 + a5;
    int64_t v3 = (a7 & 4) != 0 ? -1 : v2 + -1 - a4;
    int64_t v4 = v3 + 1; // 0x3e224
    int64_t v5 = v4; // 0x3e224
    if (a5 >= a4 != ((v4 & v3) == 0)) {
        // 0x3e239
        *(int64_t *)a6 = 0;
        *(int64_t *)result = 0;
        return result;
    }
    // 0x3e25b
    int64_t v6; // 0x3e19c
    uint32_t v7 = (int32_t)v6;
    int64_t v8 = *(int64_t *)(a1 + 56); // 0x3e263
    if (v7 == 24) {
        // 0x3e303
        return 24;
    }
    char v9 = v4;
    int64_t v10 = (int64_t)*(int32_t *)(a1 + 4); // 0x3e25f
    int64_t v11 = (int64_t)*(int32_t *)(a1 + 36); // 0x3e267
    int64_t result2 = v6 & 0xffffffff; // 0x3e27f
    int32_t v12; // 0x3e19c
    int64_t result3; // 0x3e19c
    int64_t v13; // 0x3e19c
    int64_t v14; // 0x3e19c
    int64_t v15; // 0x3e19c
    int64_t v16; // 0x3e19c
    int64_t v17; // 0x3e19c
    int64_t v18; // 0x3e19c
    int64_t v19; // 0x3e19c
    int64_t v20; // 0x3e19c
    int64_t v21; // 0x3e19c
    int64_t v22; // 0x3e19c
    int64_t v23; // 0x3e19c
    int64_t v24; // 0x3e19c
    int64_t v25; // 0x3e19c
    int64_t v26; // 0x3e19c
    int64_t v27; // 0x3e19c
    int64_t v28; // 0x3e19c
    int64_t v29; // 0x3e19c
    int64_t v30; // 0x3e19c
    int64_t v31; // 0x3e19c
    int64_t v32; // 0x3e19c
    int64_t v33; // 0x3e19c
    int64_t v34; // 0x3e19c
    int64_t v35; // 0x3e19c
    int64_t v36; // 0x3e19c
    int64_t v37; // 0x3e19c
    int64_t v38; // 0x3e19c
    int64_t v39; // 0x3e19c
    int64_t v40; // 0x3e19c
    int64_t v41; // 0x3e19c
    int64_t v42; // 0x3e19c
    int64_t v43; // 0x3e19c
    int64_t v44; // 0x3e19c
    int64_t v45; // 0x3e19c
    int64_t v46; // 0x3e19c
    int64_t v47; // 0x3e19c
    int64_t v48; // 0x3e19c
    int64_t v49; // 0x3e19c
    int64_t v50; // 0x3e19c
    int64_t v51; // 0x3e19c
    int64_t v52; // 0x3e19c
    int64_t v53; // 0x3e19c
    int64_t v54; // 0x3e19c
    int64_t v55; // 0x3e19c
    int64_t v56; // 0x3e19c
    int64_t v57; // 0x3e19c
    int64_t v58; // 0x3e19c
    int64_t v59; // 0x3e19c
    int64_t v60; // 0x3e19c
    int64_t v61; // 0x3e19c
    int64_t v62; // 0x3e19c
    int64_t v63; // 0x3e19c
    int64_t v64; // 0x3e19c
    int64_t v65; // 0x3e19c
    int64_t v66; // 0x3e19c
    int64_t v67; // 0x3e19c
    int64_t v68; // 0x3e19c
    int64_t v69; // 0x3e19c
    int64_t v70; // 0x3e19c
    int64_t v71; // 0x3e19c
    int64_t v72; // 0x3e19c
    char v73; // 0x3e19c
    int64_t result16; // 0x3e19c
    char v74; // 0x3e19c
    int64_t result17; // 0x3e19c
    char v75; // 0x3e19c
    int64_t result18; // 0x3e19c
    int64_t result9; // 0x3e19c
    int64_t v76; // 0x3e19c
    int64_t result21; // 0x3e19c
    char v77; // 0x3e19c
    int64_t result6; // 0x3e19c
    int64_t v78; // 0x3e19c
    int64_t result5; // 0x3e19c
    int64_t result19; // 0x3e19c
    char v79; // 0x3e19c
    int64_t result20; // 0x3e19c
    char v80; // 0x3e19c
    int64_t v81; // 0x3e19c
    int64_t result7; // 0x3e19c
    char v82; // 0x3e19c
    int64_t v83; // 0x3e19c
    int64_t v84; // 0x3e19c
    int64_t v85; // 0x3e19c
    int64_t v86; // 0x3e19c
    int64_t v87; // 0x3e19c
    int64_t v88; // 0x3e19c
    int64_t v89; // 0x3e19c
    int64_t v90; // 0x3e19c
    int64_t v91; // 0x3e19c
    int64_t v92; // 0x3e19c
    int64_t v93; // 0x3e19c
    int64_t v94; // 0x3e19c
    int64_t v95; // 0x3e19c
    int64_t v96; // 0x3e19c
    int64_t v97; // 0x3e19c
    int64_t v98; // 0x3e19c
    int64_t v99; // 0x3e19c
    int64_t v100; // 0x3e19c
    int32_t v101; // 0x3e19c
    if (v7 < 25) {
        // 0x3e291
        v78 = 9;
        v99 = a5;
        v90 = v11;
        v23 = a2;
        if (v7 == 9) {
            goto lab_0x3e80b;
        } else {
            if (v7 < 10) {
                if (v7 == 3) {
                    // 0x3e574
                    result7 = 3;
                    v31 = a2;
                    v51 = v10;
                    v71 = v8;
                    if (v1 > a2) {
                        // 0x3e597
                        v82 = v9;
                        v32 = a2 + 1;
                        v52 = v10;
                        v72 = v8;
                        goto lab_0x3e5b3;
                    } else {
                        goto lab_0x3e581;
                    }
                } else {
                    if (v7 < 4) {
                        switch (v7) {
                            case 1: {
                                // 0x3e439
                                v33 = v10;
                                v53 = v8;
                                if (v1 <= a2) {
                                    goto lab_0x3e41e;
                                } else {
                                    // 0x3e43e
                                    *(int32_t *)(a1 + 8) = (int32_t)v4 % 256;
                                    v73 = v9;
                                    v40 = v10;
                                    v60 = v8;
                                    goto lab_0x3e481;
                                }
                            }
                            case 0: {
                                // 0x3e3e0
                                *(int32_t *)(a1 + 28) = 1;
                                int64_t v102 = a1 + 8; // 0x3e3f0
                                *(int64_t *)v102 = 0;
                                *(int32_t *)(a1 + 16) = 1;
                                v81 = 0;
                                v30 = a2;
                                v50 = 0;
                                v70 = 0;
                                if (a7 % 2 == 0) {
                                    goto lab_0x3e56d;
                                } else {
                                    // 0x3e406
                                    v33 = 0;
                                    v53 = 0;
                                    if (v1 > a2) {
                                        unsigned char v103 = *(char *)&v5; // 0x3e460
                                        *(int32_t *)v102 = (int32_t)v103;
                                        v73 = v103;
                                        v40 = 0;
                                        v60 = 0;
                                        goto lab_0x3e481;
                                    } else {
                                        goto lab_0x3e41e;
                                    }
                                }
                            }
                            default: {
                                // 0x3e488
                                result9 = result2;
                                v19 = a2;
                                v46 = v10;
                                v66 = v8;
                                if (v1 > a2) {
                                    int32_t v104 = (int32_t)v4 % 256; // 0x3e4ba
                                    *(int32_t *)(a1 + 12) = v104;
                                    v12 = v104;
                                    v29 = a2 + 1;
                                    v49 = v10;
                                    v69 = v8;
                                    goto lab_0x3e4d5;
                                } else {
                                    goto lab_0x3e490;
                                }
                            }
                        }
                    } else {
                        switch (v7) {
                            case 6: {
                                // 0x3e667
                                result17 = 6;
                                v83 = v11;
                                v15 = a2;
                                v36 = v10;
                                v56 = v8;
                                if (v1 > a2) {
                                    // 0x3e68a
                                    v75 = v9;
                                    v84 = v11;
                                    v16 = a2 + 1;
                                    v37 = v10;
                                    v57 = v8;
                                    goto lab_0x3e6a6;
                                } else {
                                    goto lab_0x3e674;
                                }
                            }
                            case 7: {
                                // 0x3e6d0
                                result18 = 7;
                                v85 = v11;
                                v17 = a2;
                                v38 = v10;
                                v58 = v8;
                                if (v1 > a2) {
                                    // 0x3e6f3
                                    *(char *)(a1 + (int64_t)&g6 + v11) = v9;
                                    v76 = v11;
                                    v86 = v11;
                                    v18 = a2 + 1;
                                    v39 = v10;
                                    v59 = v8;
                                    goto lab_0x3e72a;
                                } else {
                                    goto lab_0x3e6dd;
                                }
                            }
                            default: {
                                // 0x3e2cd
                                if (v7 != 5) {
                                    // 0x3e303
                                    return result2;
                                }
                                // 0x3e5f8
                                result16 = result2;
                                v13 = a2;
                                v34 = v10;
                                v54 = v8;
                                if (v1 > a2) {
                                    // 0x3e61b
                                    v74 = v9;
                                    v14 = a2 + 1;
                                    v35 = v10;
                                    v55 = v8;
                                    goto lab_0x3e637;
                                } else {
                                    goto lab_0x3e605;
                                }
                            }
                        }
                    }
                }
            } else {
                // 0x3e2db
                if (v7 == 16) {
                    // 0x3e303
                    return 16;
                }
                // 0x3e2e4
                if (v7 >= 17) {
                    // 0x3e303
                    return result2;
                }
                if (v7 == 11) {
                    // 0x3e937
                    result19 = 11;
                    v92 = v11;
                    v25 = a2;
                    v44 = v10;
                    v64 = v8;
                    if (v1 > a2) {
                        // 0x3e95a
                        v79 = v9;
                        v93 = v11;
                        v26 = a2 + 1;
                        v45 = v10;
                        v65 = v8;
                        goto lab_0x3e976;
                    } else {
                        goto lab_0x3e944;
                    }
                } else {
                    // 0x3e2ef
                    if (v7 < 11) {
                        // 0x3e894
                        *(int32_t *)a1 = 10;
                        // 0x3e303
                        return result2;
                    }
                    // 0x3e2f5
                    if (v7 != 14) {
                        // 0x3e303
                        return result2;
                    }
                    // 0x3e9fc
                    result20 = 14;
                    v94 = v11;
                    v27 = a2;
                    v47 = v10;
                    v67 = v8;
                    if (v1 > a2) {
                        // 0x3ea1f
                        v80 = v9;
                        v95 = v11;
                        v28 = a2 + 1;
                        v48 = v10;
                        v68 = v8;
                        goto lab_0x3ea3b;
                    } else {
                        goto lab_0x3ea09;
                    }
                }
            }
        }
    } else {
        // 0x3e329
        if (v7 == 37) {
            // 0x3e303
            return 37;
        }
        if (v7 < 38) {
            // 0x3e334
            if (v7 < 33) {
                // 0x3e303
                return result2;
            }
            // 0x3e35c
            if (v7 == 35) {
                // 0x3eb5e
                *(int32_t *)a1 = 35;
                // 0x3e303
                return 35;
            }
            // 0x3e365
            if (v7 < 36) {
                // 0x3e303
                return result2;
            }
            // 0x3e53a
            *(int32_t *)a1 = 36;
            // 0x3e303
            return result2;
        }
        // 0x3e381
        if (v7 == 41) {
            // 0x3e303
            return 41;
        }
        if (v7 < 42) {
            // 0x3e38c
            if (v7 == 39) {
                // 0x3e758
                *(int32_t *)a1 = 39;
                // 0x3e303
                return 39;
            }
            // 0x3e395
            result5 = result2;
            v100 = a5;
            v91 = v11;
            v24 = a2;
            if (v7 >= 40) {
                // 0x3e841
                *(int32_t *)a1 = 40;
                // 0x3e303
                return result2;
            }
            goto lab_0x3e81e;
        } else {
            // 0x3e3a8
            result3 = result2;
            v101 = *(int32_t *)(a1 + 32);
            result6 = 52;
            v98 = a5;
            v89 = v11;
            v22 = a2;
            v43 = v10;
            v63 = v8;
            switch (v7) {
                case 51: {
                    // 0x3e78e
                    result21 = 51;
                    v96 = a5;
                    v87 = v11;
                    v20 = a2;
                    v41 = v10;
                    v61 = v8;
                    if (v1 > a2) {
                        // 0x3e7b1
                        v77 = v9;
                        v97 = a5;
                        v88 = v11;
                        v21 = a2 + 1;
                        v42 = v10;
                        v62 = v8;
                        goto lab_0x3e7cd;
                    } else {
                        goto lab_0x3e79b;
                    }
                }
                case 52: {
                    goto lab_0x3e7ec;
                }
                default: {
                    return result3;
                }
            }
        }
    }
  lab_0x3e80b:;
    int64_t result4 = v78;
    result5 = result4;
    v100 = v99;
    v91 = v90;
    v24 = v23;
    if (v2 <= v99) {
        // 0x3e812
        *(int32_t *)a1 = 9;
        // 0x3e303
        return result4;
    }
    goto lab_0x3e81e;
  lab_0x3e81e:
    // 0x3e81e
    if (v1 <= v24) {
        // 0x3e823
        if ((a7 & 2) == 0) {
            // 0x3e841
            *(int32_t *)a1 = 40;
            // 0x3e303
            return result5;
        }
        // 0x3e82d
        *(int32_t *)a1 = 38;
        // 0x3e303
        return result5;
    }
    uint64_t v105 = v1 - v24; // 0x3e858
    uint64_t v106 = v2 - v100; // 0x3e85e
    uint64_t v107 = v105 > v106 ? v106 : v105; // 0x3e864
    uint64_t v108 = v91 & 0xffffffff; // 0x3e868
    int64_t v109 = v107 > v108 ? v108 : v107; // 0x3e86d
    uint32_t v110 = (int32_t)v91 - (int32_t)v109; // 0x3e874
    __asm_rep_movsb_memcpy((char *)v100, (char *)v24, v109);
    bool v111; // 0x3e19c
    int64_t v112 = v109 * (v111 ? -1 : 1) + v100; // 0x3e876
    result3 = v109;
    v78 = v109;
    v99 = v112;
    v90 = v110;
    v23 = v112;
    if (v110 == 0) {
        // 0x3e303
        return result3;
    }
    goto lab_0x3e80b;
  lab_0x3e7ec:
    // 0x3e7ec
    if (v2 <= v98) {
        // 0x3e7f7
        *(int32_t *)a1 = 52;
        // 0x3e303
        return result6;
    }
    // 0x3e764
    *(char *)v98 = (char)v101;
    int64_t v113 = v101 % 256; // 0x3e76d
    int64_t v114 = v98 + 1; // 0x3e76d
    int64_t v115 = v89 + 0xffffffff & 0xffffffff; // 0x3e76d
    int64_t v116 = v22; // 0x3e76d
    int64_t v117 = v43; // 0x3e76d
    int64_t v118 = v63; // 0x3e76d
    goto lab_0x3e770;
  lab_0x3e79b:
    // 0x3e79b
    v77 = 0;
    v97 = v96;
    v88 = v87;
    v21 = v20;
    v42 = v41;
    v62 = v61;
    if ((a7 & 2) != 0) {
        // 0x3e7a5
        *(int32_t *)a1 = 51;
        // 0x3e303
        return result21;
    }
    goto lab_0x3e7cd;
  lab_0x3e770:
    // 0x3e770
    result3 = v113;
    if (v115 == 0) {
        // 0x3e303
        return result3;
    }
    int64_t v119 = v113; // 0x3e77b
    int64_t v120 = v114; // 0x3e77b
    int64_t v121 = v115; // 0x3e77b
    int64_t v122 = v116; // 0x3e77b
    int64_t v123 = v117; // 0x3e77b
    int64_t v124 = v118; // 0x3e77b
    v78 = v113;
    v99 = v114;
    v90 = v115;
    v23 = v116;
    if ((int32_t)v117 == 0) {
        goto lab_0x3e80b;
    } else {
        goto lab_0x3e781;
    }
  lab_0x3e581:
    // 0x3e581
    v82 = 0;
    v32 = v31;
    v52 = v51;
    v72 = v71;
    if ((a7 & 2) != 0) {
        // 0x3e58b
        *(int32_t *)a1 = 3;
        // 0x3e303
        return result7;
    }
    goto lab_0x3e5b3;
  lab_0x3e944:
    // 0x3e944
    v79 = 0;
    v93 = v92;
    v26 = v25;
    v45 = v44;
    v65 = v64;
    if ((a7 & 2) != 0) {
        // 0x3e94e
        *(int32_t *)a1 = 11;
        // 0x3e303
        return result19;
    }
    goto lab_0x3e976;
  lab_0x3ea09:
    // 0x3ea09
    v80 = 0;
    v95 = v94;
    v28 = v27;
    v48 = v47;
    v68 = v67;
    if ((a7 & 2) != 0) {
        // 0x3ea13
        *(int32_t *)a1 = 14;
        // 0x3e303
        return result20;
    }
    goto lab_0x3ea3b;
  lab_0x3e7cd:;
    int64_t v339 = (int64_t)v77 << v42 % 64;
    v119 = v339;
    v120 = v97;
    v121 = v88;
    v122 = v21;
    v123 = v42 + 8 & 0xffffffff;
    v124 = v339 | v62;
    goto lab_0x3e781;
  lab_0x3e5b3:;
    int64_t v125 = (int64_t)v82 << v52 % 64;
    int64_t v126 = v125; // 0x3e5bd
    int64_t v127 = v32; // 0x3e5bd
    int64_t v128 = v52 + 8 & 0xffffffff; // 0x3e5bd
    int64_t v129 = v125 | v72; // 0x3e5bd
    goto lab_0x3e5c0;
  lab_0x3e976:;
    int64_t v326 = v45 + 8; // 0x3e979
    int64_t v327 = v326 & 0xffffffff; // 0x3e979
    int64_t v328 = (int64_t)v79 << v45 % 64 | v65; // 0x3e987
    int64_t v329 = v93 & 0xffffffff;
    char * v330 = (char *)(v329 + (int64_t)&g28);
    char v331 = *v330; // 0x3e98c
    char v291 = v331; // 0x3e993
    int64_t v292 = v93; // 0x3e993
    int64_t v293 = v26; // 0x3e993
    int64_t v294 = v327; // 0x3e993
    int64_t v295 = v328; // 0x3e993
    char * v296 = v330; // 0x3e993
    int64_t v297 = v329; // 0x3e993
    int64_t v298 = v93; // 0x3e993
    int64_t v299 = v26; // 0x3e993
    int64_t v300 = v327; // 0x3e993
    int64_t v301 = v328; // 0x3e993
    if ((int32_t)v326 < (int32_t)v331) {
        goto lab_0x3e930;
    } else {
        goto lab_0x3e995;
    }
  lab_0x3ea3b:;
    int64_t v332 = (int64_t)v80 << v48 % 64;
    int64_t v211 = v332; // 0x3ea48
    int64_t v212 = v95; // 0x3ea48
    int64_t v214 = v28; // 0x3ea48
    int64_t v215 = v48 + 8 & 0xffffffff; // 0x3ea48
    int64_t v216 = v332 | v68; // 0x3ea48
    goto lab_0x3e9ef;
  lab_0x3e781:;
    int64_t v333 = v124;
    int64_t v334 = v123;
    int64_t v335 = v122;
    int64_t v336 = v121;
    int64_t v337 = v120;
    if ((int32_t)v334 < 8) {
        // 0x3e787
        result21 = v119;
        v96 = v337;
        v87 = v336;
        v20 = v335;
        v41 = v334;
        v61 = v333;
        if (v1 > v335) {
            // 0x3e7c2
            v77 = *(char *)v335;
            v97 = v337;
            v88 = v336;
            v21 = v335 + 1;
            v42 = v334;
            v62 = v333;
            goto lab_0x3e7cd;
        } else {
            goto lab_0x3e79b;
        }
    } else {
        int64_t v338 = v333 % 256; // 0x3e7dc
        v101 = v338;
        result6 = v338;
        v98 = v337;
        v89 = v336;
        v22 = v335;
        v43 = v334 + 0xfffffff8 & 0xffffffff;
        v63 = v333 / 256;
        goto lab_0x3e7ec;
    }
  lab_0x3e5c0:;
    uint64_t v130 = v129;
    int64_t v131 = v128;
    int64_t v132 = v127;
    v81 = v126;
    v30 = v132;
    v50 = v131;
    v70 = v130;
    int32_t * v133; // 0x3e19c
    int64_t v134; // 0x3e19c
    int64_t v135; // 0x3e19c
    int64_t v136; // 0x3e19c
    int64_t v137; // 0x3e19c
    int64_t v138; // 0x3e19c
    int64_t v139; // 0x3e19c
    int64_t v140; // 0x3e19c
    int64_t v141; // 0x3e19c
    int64_t v142; // 0x3e19c
    int64_t result11; // 0x3e19c
    int64_t v143; // 0x3e19c
    if ((int32_t)v131 < 3) {
        goto lab_0x3e56d;
    } else {
        int64_t v144 = v131 + 0xfffffffd & 0xffffffff; // 0x3e5c9
        int64_t v145 = v130 / 8; // 0x3e5cd
        uint64_t v146 = v130 % 8; // 0x3e5d1
        *(int32_t *)(a1 + 20) = (int32_t)v146;
        int64_t result8 = v146 / 2; // 0x3e5d8
        int32_t v147 = result8; // 0x3e5dc
        int32_t * v148 = (int32_t *)(a1 + 24);
        *v148 = v147;
        v136 = v132;
        v137 = v144;
        v140 = v145;
        if (v146 >= 2) {
            // 0x3e885
            if (v147 == 3) {
                // 0x3e894
                *(int32_t *)a1 = 10;
                // 0x3e303
                return result8;
            }
            // 0x3e8a0
            v143 = 0;
            v134 = v132;
            v138 = v144;
            v141 = v145;
            if (v147 != 1) {
                goto lab_0x3e91e;
            } else {
                int128_t v149 = __asm_movaps(g32); // 0x3e8a4
                *(int64_t *)(a1 + 44) = 0x2000000120;
                __asm_movups(*(int128_t *)(a1 + (int64_t)&g45), v149);
                __asm_movups(*(int128_t *)(a1 + (int64_t)&g46), v149);
                int64_t v150 = 0;
                *(char *)(a1 + 72 + v150) = 8;
                int64_t v151 = v150 + 1; // 0x3e8dc
                while (v150 != 143) {
                    // 0x3e8cf
                    v150 = v151;
                    *(char *)(a1 + 72 + v150) = 8;
                    v151 = v150 + 1;
                }
                int64_t v152 = 0;
                *(char *)(a1 + 216 + v152) = 9;
                int64_t v153 = v152 + 1; // 0x3e8ef
                while (v152 != 111) {
                    // 0x3e8e0
                    v152 = v153;
                    *(char *)(a1 + 216 + v152) = 9;
                    v153 = v152 + 1;
                }
                for (int64_t i = 0; i < 24; i++) {
                    // 0x3e8f3
                    *(char *)(a1 + 328 + i) = 7;
                }
                int64_t v154 = 0; // 0x3e90e
                *(char *)(a1 + 352 + v154) = 8;
                v154++;
                v133 = v148;
                result11 = 8;
                v135 = v132;
                v139 = v144;
                v142 = v145;
                while (v154 != 8) {
                    // 0x3e906
                    *(char *)(a1 + 352 + v154) = 8;
                    v154++;
                    v133 = v148;
                    result11 = 8;
                    v135 = v132;
                    v139 = v144;
                    v142 = v145;
                }
                goto lab_0x3ea7c;
            }
        } else {
            goto lab_0x3e5e6;
        }
    }
  lab_0x3e490:;
    int64_t v155 = v19; // 0x3e498
    int64_t v156 = v46; // 0x3e498
    int64_t v157 = v66; // 0x3e498
    if ((a7 & 2) != 0) {
        // 0x3e49a
        *(int32_t *)a1 = 2;
        // 0x3e303
        return result9;
    }
    goto lab_0x3e4c0;
  lab_0x3e41e:
    if ((a7 & 2) != 0) {
        // 0x3e428
        *(int32_t *)a1 = 1;
        // 0x3e303
        return result2;
    }
    // 0x3e44e
    *(int32_t *)(a1 + 8) = 0;
    v155 = a2;
    v156 = v33;
    v157 = v53;
    int64_t v173 = a2; // 0x3e45c
    int64_t v174 = v33; // 0x3e45c
    int64_t v175 = v53; // 0x3e45c
    if (v1 <= a2) {
        goto lab_0x3e4c0;
    } else {
        goto lab_0x3e4ca;
    }
  lab_0x3e56d:;
    int64_t v302 = v70;
    int64_t v303 = v50;
    int64_t v304 = v30;
    result7 = v81;
    v31 = v304;
    v51 = v303;
    v71 = v302;
    if (v1 > v304) {
        // 0x3e5a8
        v82 = *(char *)v304;
        v32 = v304 + 1;
        v52 = v303;
        v72 = v302;
        goto lab_0x3e5b3;
    } else {
        goto lab_0x3e581;
    }
  lab_0x3e605:
    // 0x3e605
    v74 = 0;
    v14 = v13;
    v35 = v34;
    v55 = v54;
    if ((a7 & 2) != 0) {
        // 0x3e60f
        *(int32_t *)a1 = 5;
        // 0x3e303
        return result16;
    }
    goto lab_0x3e637;
  lab_0x3e674:
    // 0x3e674
    v75 = 0;
    v84 = v83;
    v16 = v15;
    v37 = v36;
    v57 = v56;
    if ((a7 & 2) != 0) {
        // 0x3e67e
        *(int32_t *)a1 = 6;
        // 0x3e303
        return result17;
    }
    goto lab_0x3e6a6;
  lab_0x3e6dd:
    if ((a7 & 2) != 0) {
        // 0x3e6e7
        *(int32_t *)a1 = 7;
        // 0x3e303
        return result18;
    }
    int64_t v305 = v85 & 0xffffffff; // 0x3e70d
    *(char *)(a1 + (int64_t)&g6 + v305) = 0;
    v76 = v305;
    v86 = v85;
    v18 = v17;
    v39 = v38;
    v59 = v58;
    goto lab_0x3e72a;
  lab_0x3e930:;
    int64_t v306 = v295;
    int64_t v307 = v294;
    int64_t v308 = v293;
    int64_t v309 = v292;
    result19 = v291;
    v92 = v309;
    v25 = v308;
    v44 = v307;
    v64 = v306;
    if (v1 > v308) {
        // 0x3e96b
        v79 = *(char *)v308;
        v93 = v309;
        v26 = v308 + 1;
        v45 = v307;
        v65 = v306;
        goto lab_0x3e976;
    } else {
        goto lab_0x3e944;
    }
  lab_0x3e995:;
    int64_t v310 = v299;
    v5 = v297;
    unsigned char v311 = *v296; // 0x3e9a0
    unsigned char v312 = v311 % 32;
    int64_t v313 = 1; // 0x3e9ae
    if (v312 != 0) {
        v313 = 1 << (int32_t)v312;
    }
    int64_t v314 = v298 + 1; // 0x3e99e
    uint64_t v315 = (int64_t)v311; // 0x3e9a9
    int64_t v316 = v300 - v315 & 0xffffffff; // 0x3e9ab
    int64_t v317 = v301 >> v315 % 64;
    int64_t v318 = 4 * v297; // 0x3e9bf
    int32_t v319 = *(int32_t *)(v318 + (int64_t)&g29); // 0x3e9bf
    *(int32_t *)(a1 + 44 + v318) = v319 + (int32_t)(v313 + 0xffffffff & v301);
    v143 = v314 & 0xffffffff;
    v134 = v310;
    v138 = v316;
    v141 = v317;
    int64_t v207; // 0x3e19c
    int64_t v205; // 0x3e19c
    int64_t v203; // 0x3e19c
    int64_t v209; // 0x3e19c
    int64_t v213; // 0x3e19c
    if ((int32_t)v314 < 3) {
        goto lab_0x3e91e;
    } else {
        // 0x3e9d0
        __asm_rep_stosd_memset((char *)(a1 + (int64_t)&g3), 0, 72);
        v209 = 0;
        v213 = 0;
        v207 = v310;
        v205 = v316;
        v203 = v317;
        goto lab_0x3e9e5;
    }
  lab_0x3e9ef:;
    int64_t v320 = v216;
    int64_t v321 = v215;
    int64_t v322 = v214;
    int64_t v323 = v212;
    if ((int32_t)v321 < 3) {
        // 0x3e9f5
        result20 = v211;
        v94 = v323;
        v27 = v322;
        v47 = v321;
        v67 = v320;
        if (v1 > v322) {
            // 0x3ea30
            v80 = *(char *)v322;
            v95 = v323;
            v28 = v322 + 1;
            v48 = v321;
            v68 = v320;
            goto lab_0x3ea3b;
        } else {
            goto lab_0x3ea09;
        }
    } else {
        unsigned char v324 = *(char *)((v323 & 0xffffffff) + (int64_t)&g30); // 0x3ea61
        int64_t v325 = v324; // 0x3ea61
        *(char *)(a1 + (int64_t)&g3 + v325) = (char)v320 % 8;
        v209 = v325;
        v213 = v323 + 1 & 0xffffffff;
        v207 = v322;
        v205 = v321 + 0xfffffffd & 0xffffffff;
        v203 = v320 / 8;
        goto lab_0x3e9e5;
    }
  lab_0x3e4d5:;
    int64_t v158 = a1 + 8; // 0x3e4d5
    uint32_t v159 = *(int32_t *)v158; // 0x3e4d5
    uint32_t v160 = 256 * v159 | v12; // 0x3e4e7
    int64_t v161 = v160 / 31; // 0x3e4ef
    int64_t v162 = 1; // 0x3e4ef
    if (v160 % 31 == 0) {
        int64_t v163 = *(int64_t *)v158 % 0x2000000010; // 0x3e4fb
        v161 = v163;
        v162 = v163 != 8;
    }
    int64_t result10 = v161; // 0x3e50b
    int64_t v164 = v162; // 0x3e50b
    if ((a7 & 4) == 0) {
        uint32_t v165 = v159 / 16 + 8; // 0x3e517
        uint32_t v166 = v165 % 32; // 0x3e51a
        uint32_t v167 = 1 << v166;
        int64_t v168 = 1; // 0x3e521
        if (v166 < 15 || v167 == (int32_t)&g40) {
            uint32_t v169 = v165 % 64;
            int64_t v170 = v5;
            int64_t v171 = v170; // 0x3e523
            if (v169 != 0) {
                v171 = v170 >> (int64_t)v169;
                v5 = v171;
            }
            // 0x3e523
            v168 = v171 == 0;
        }
        // 0x3e52c
        result10 = v167;
        v164 = v168 | v162;
    }
    // 0x3e52e
    v126 = result10;
    v127 = v29;
    v128 = v49;
    v129 = v69;
    if (v164 % 256 != 0) {
        // 0x3e53a
        *(int32_t *)a1 = 36;
        // 0x3e303
        return result10;
    }
    goto lab_0x3e5c0;
  lab_0x3e4c0:
    // 0x3e4c0
    *(int32_t *)(a1 + 12) = 0;
    v12 = 0;
    v29 = v155;
    v49 = v156;
    v69 = v157;
    goto lab_0x3e4d5;
  lab_0x3e4ca:;
    int32_t v172 = (int32_t)*(char *)v173; // 0x3e4d1
    *(int32_t *)(a1 + 12) = v172;
    v12 = v172;
    v29 = v173 + 1;
    v49 = v174;
    v69 = v175;
    goto lab_0x3e4d5;
  lab_0x3e481:;
    int64_t v176 = a2 + 1;
    result9 = v73;
    v19 = v176;
    v46 = v40;
    v66 = v60;
    v173 = v176;
    v174 = v40;
    v175 = v60;
    if (v1 > v176) {
        goto lab_0x3e4ca;
    } else {
        goto lab_0x3e490;
    }
  lab_0x3e637:
    // 0x3e637
    v136 = v14;
    v137 = v35 + 8 & 0xffffffff;
    v140 = (int64_t)v74 << v35 % 64 | v55;
    goto lab_0x3e5e6;
  lab_0x3e6a6:;
    int64_t v280 = (int64_t)v75 << v37 % 64;
    int64_t v194 = v280; // 0x3e6b3
    int64_t v193 = v84; // 0x3e6b3
    int64_t v191 = v16; // 0x3e6b3
    int64_t v189 = v37 + 8 & 0xffffffff; // 0x3e6b3
    int64_t v187 = v280 | v57; // 0x3e6b3
    goto lab_0x3e65a;
  lab_0x3e72a:;
    int64_t v281 = v59;
    int64_t v282 = v39;
    int64_t v283 = v18;
    int64_t v284 = v86 + 1; // 0x3e72a
    int64_t v181 = v76; // 0x3e72f
    int64_t v182 = v284 & 0xffffffff; // 0x3e72f
    int64_t v183 = v283; // 0x3e72f
    int64_t v184 = v282; // 0x3e72f
    int64_t v185 = v281; // 0x3e72f
    if ((int32_t)v284 < 4) {
        goto lab_0x3e655;
    } else {
        uint16_t v285 = *(int16_t *)(a1 + (int64_t)&g6); // 0x3e73d
        uint16_t v286 = -1 - *(int16_t *)(a1 + (int64_t)&g7);
        v113 = v286;
        v114 = a5;
        v115 = v285;
        v116 = v283;
        v117 = v282;
        v118 = v281;
        if (v285 != v286) {
            // 0x3e758
            int64_t v287; // 0x3e19c
            int64_t v288 = v287;
            *(int32_t *)a1 = 39;
            result3 = v288;
            int64_t result15 = result3;
            return result15;
        }
        goto lab_0x3e770;
    }
  lab_0x3e91e:;
    char * v289 = (char *)(v143 + (int64_t)&g28); // 0x3e927
    char v290 = *v289; // 0x3e927
    v291 = v290;
    v292 = v143;
    v293 = v134;
    v294 = v138;
    v295 = v141;
    v296 = v289;
    v297 = v143;
    v298 = v143;
    v299 = v134;
    v300 = v138;
    v301 = v141;
    if ((int32_t)v290 > (int32_t)v138) {
        goto lab_0x3e930;
    } else {
        goto lab_0x3e995;
    }
  lab_0x3e5e6:;
    int64_t v177 = v140;
    int64_t v178 = v137;
    int64_t v179 = v136;
    int64_t v180 = v178 % 8; // 0x3e5e9
    if ((int32_t)v178 >= (int32_t)v180) {
        // 0x3e646
        v181 = v180;
        v182 = 0;
        v183 = v179;
        v184 = v178 & 0xfffffff8;
        v185 = v177 >> v180;
        goto lab_0x3e655;
    } else {
        // 0x3e5f1
        result16 = v180;
        v13 = v179;
        v34 = v178;
        v54 = v177;
        if (v1 > v179) {
            // 0x3e62c
            v74 = *(char *)v179;
            v14 = v179 + 1;
            v35 = v178;
            v55 = v177;
            goto lab_0x3e637;
        } else {
            goto lab_0x3e605;
        }
    }
  lab_0x3e65a:;
    int64_t v186 = v187;
    int64_t v188 = v189;
    int64_t v190 = v191;
    int64_t v192 = v193;
    if ((int32_t)v188 < 8) {
        // 0x3e660
        result17 = v194;
        v83 = v192;
        v15 = v190;
        v36 = v188;
        v56 = v186;
        if (v1 > v190) {
            // 0x3e69b
            v75 = *(char *)v190;
            v84 = v192;
            v16 = v190 + 1;
            v37 = v188;
            v57 = v186;
            goto lab_0x3e6a6;
        } else {
            goto lab_0x3e674;
        }
    } else {
        int64_t v195 = v192 & 0xffffffff; // 0x3e6b5
        *(char *)(a1 + (int64_t)&g6 + v195) = (char)v186;
        v76 = v195;
        v86 = v192;
        v18 = v190;
        v39 = v188 + 0xfffffff8 & 0xffffffff;
        v59 = v186 / 256;
        goto lab_0x3e72a;
    }
  lab_0x3e655:;
    int64_t v196 = v185;
    int64_t v197 = v184;
    int64_t v198 = v183;
    int64_t v199 = v182;
    int64_t v200 = v181;
    v194 = v200;
    v193 = v199;
    v191 = v198;
    v189 = v197;
    v187 = v196;
    if ((int32_t)v197 == 0) {
        // 0x3e6c9
        result18 = v200;
        v85 = v199;
        v17 = v198;
        v38 = v197;
        v58 = v196;
        if (v1 > v198) {
            char v201 = *(char *)v198; // 0x3e71a
            *(char *)(a1 + (int64_t)&g6 + v199) = v201;
            v76 = v199;
            v86 = v199;
            v18 = v198 + 1;
            v39 = v197;
            v59 = v196;
            goto lab_0x3e72a;
        } else {
            goto lab_0x3e6dd;
        }
    } else {
        goto lab_0x3e65a;
    }
  lab_0x3e9e5:;
    int64_t v202 = v203;
    int64_t v204 = v205;
    int64_t v206 = v207;
    int64_t v208 = v209;
    int32_t * v210 = (int32_t *)(a1 + 52); // 0x3e9e5
    v211 = v208;
    v212 = v213;
    v214 = v206;
    v215 = v204;
    v216 = v202;
    if (*v210 > (int32_t)v213) {
        goto lab_0x3e9ef;
    } else {
        // 0x3ea74
        *v210 = 19;
        v133 = (int32_t *)(a1 + 24);
        result11 = v208;
        v135 = v206;
        v139 = v204;
        v142 = v202;
        goto lab_0x3ea7c;
    }
  lab_0x3ea7c:;
    uint32_t v217 = *v133; // 0x3ea7c
    if (v217 < 0) {
        // 0x3e303
        return result11;
    }
    // 0x3ea88
    int64_t v218; // bp-328, 0x3e19c
    int64_t v219 = (int64_t)&v218; // 0x3e1af
    int64_t v220 = v217; // 0x3ea7c
    int64_t v221; // bp-196, 0x3e19c
    __asm_rep_stosd_memset((char *)&v221, 0, 16);
    int64_t v222 = v220 * (int64_t)&g44 + a1;
    __asm_rep_stosd_memset((char *)(v222 + 360), 0, (int64_t)&g5);
    __asm_rep_stosd_memset((char *)(v222 + (int64_t)&g41), 0, 288);
    uint32_t v223 = *v133; // 0x3eac4
    int64_t v224 = a1 + 44; // 0x3eacc
    uint32_t v225 = *(int32_t *)(4 * (int64_t)v223 + v224); // 0x3eacc
    if (v225 != 0) {
        int64_t v226 = 0; // 0x3eaf0
        unsigned char v227 = *(char *)(v222 + 72 + v226); // 0x3eaeb
        v226++;
        int32_t * v228 = (int32_t *)(v219 + 132 + 4 * (int64_t)v227); // 0x3eaf3
        *v228 = *v228 + 1;
        while (v226 != (int64_t)v225) {
            // 0x3eae6
            v227 = *(char *)(v222 + 72 + v226);
            v226++;
            v228 = (int32_t *)(v219 + 132 + 4 * (int64_t)v227);
            *v228 = *v228 + 1;
        }
    }
    // 0x3eafc
    int64_t v229; // bp-124, 0x3e19c
    int64_t v230 = 0x100000000 * (int64_t)&v229 >> 32; // 0x3eb32
    int64_t v231 = 0;
    int64_t v232; // bp-192, 0x3e19c
    int32_t v233 = *(int32_t *)(v231 + (int64_t)&v232); // 0x3eb29
    int32_t v234 = v233; // 0x3eb2c
    int32_t result12 = 2 * v233; // 0x3eb37
    *(int32_t *)(v231 + v230) = result12;
    int32_t v235 = v234; // 0x3eb44
    int32_t v236 = result12; // 0x3eb44
    int64_t v237 = v231 + 4; // 0x3eb44
    while (v231 != 56) {
        // 0x3eb29
        v231 = v237;
        v233 = *(int32_t *)(v231 + (int64_t)&v232);
        v234 = v233 + v235;
        result12 = 2 * (v233 + v236);
        *(int32_t *)(v231 + v230) = result12;
        v235 = v234;
        v236 = result12;
        v237 = v231 + 4;
    }
    // 0x3eb46
    if (v234 >= 2 && result12 != (int32_t)&g1) {
        // 0x3eb5e
        *(int32_t *)a1 = 35;
        // 0x3e303
        return result12;
    }
    int64_t result13 = 0; // 0x3eb98
    if (v225 != 0) {
        int64_t v238 = v220 * (int64_t)&g39; // 0x3eb6a
        int64_t v239 = a1 + 360;
        int64_t v240 = a1 + 8;
        int64_t v241 = v238 + (int64_t)&g17;
        int32_t v242 = 0;
        int64_t v243; // bp-1, 0x3e19c
        int64_t v244 = (int64_t)&v243;
        int64_t v245 = v242; // 0x3eba3
        v5 = v245;
        unsigned char v246 = *(char *)(v222 + 72 + v245); // 0x3eba8
        int64_t v247 = v244; // 0x3ebb4
        int64_t v248; // 0x3e19c
        int64_t v249; // 0x3e19c
        int64_t v250; // 0x3e19c
        int64_t v251; // 0x3e19c
        int64_t v252; // 0x3e19c
        int64_t v253; // 0x3e19c
        int64_t v254; // 0x3e19c
        int64_t v255; // 0x3e19c
        int64_t v256; // 0x3e19c
        int64_t v257; // 0x3e19c
        int64_t v258; // 0x3e19c
        int64_t v259; // 0x3eba8
        uint32_t v260; // 0x3ebaf
        int32_t * v261; // 0x3ebc2
        uint32_t v262; // 0x3ebc2
        int64_t v263; // 0x3ebd5
        int64_t v264; // 0x3ebe1
        int32_t v265; // 0x3ebe3
        int16_t * v266; // 0x3ec3f
        int16_t v267; // 0x3ec3f
        int16_t v268; // 0x3ec24
        uint64_t v269; // 0x3ec5b
        int64_t v270; // 0x3ec6e
        int64_t v271; // 0x3ec06
        int16_t * v272; // 0x3ec7f
        int16_t v273; // 0x3ec7f
        int64_t v274; // 0x3ec9e
        uint64_t v275; // 0x3ec5e
        int64_t v276; // 0x3ec6e
        if (v246 != 0) {
            // 0x3ebba
            v259 = v246;
            v260 = (int32_t)v246;
            v5 = 0;
            v261 = (int32_t *)(v219 + 196 + 4 * v259);
            v262 = *v261;
            *v261 = v262 + 1;
            v265 = v246;
            v250 = v262;
            v263 = 2 * v5;
            v264 = v250 % 2 | v263 & 0xfffffffe;
            v265--;
            v250 /= 2;
            while (v265 != 0) {
                // 0x3ebd5
                v263 = 2 * v264;
                v264 = v250 % 2 | v263 & 0xfffffffe;
                v265--;
                v250 /= 2;
            }
            // 0x3ebeb
            v5 = v264;
            if (v246 < 11) {
                // 0x3ebf0
                v247 = v244;
                if ((int32_t)v264 <= (int32_t)&g8) {
                    // 0x3ec12
                    v268 = 512 * v260 | v242;
                    v5 = v264 + (int64_t)(1 << v260 % 32) & 0xffffffff;
                    *(int16_t *)(2 * (v238 + 176 + (v264 & 0xffffffff)) + v240) = v268;
                    v271 = v5;
                    v247 = v244;
                    while ((int32_t)v271 <= (int32_t)&g8) {
                        // 0x3ec12
                        v5 = v271 + (int64_t)(1 << v260 % 32) & 0xffffffff;
                        *(int16_t *)(2 * (v238 + 176 + (v271 & 0xffffffff)) + v240) = v268;
                        v271 = v5;
                        v247 = v244;
                    }
                }
            } else {
                // 0x3ec2c
                v266 = (int16_t *)(v239 + 2 * ((v263 & (int64_t)(int32_t)&g8) + v238));
                v267 = *v266;
                v253 = v244;
                v249 = v264;
                v251 = v267;
                if (v267 == 0) {
                    // 0x3ec4c
                    *v266 = (int16_t)v244;
                    v253 = v244 + 0xfffffffe & 0xffffffff;
                    v249 = v5;
                    v251 = v244 & 0xffffffff;
                }
                // 0x3ec59
                v254 = v253;
                v269 = v249 / 1024;
                v270 = 0x100000000 * ((v251 ^ 0xffffffff) + v269 % 2) / 0x100000000;
                v258 = v254;
                v248 = v270;
                if (v246 != 11) {
                    // 0x3ec73
                    v275 = v269 % 0x400000;
                    v274 = v259;
                    v255 = v254;
                    v272 = (int16_t *)(a1 + (int64_t)&g41 + 2 * (v270 + v238));
                    v273 = *v272;
                    v256 = v255;
                    v252 = v273;
                    if (v273 == 0) {
                        // 0x3ec91
                        *v272 = (int16_t)v255;
                        v256 = v255 + 0xfffffffe & 0xffffffff;
                        v252 = v255 & 0xffffffff;
                    }
                    // 0x3ec9e
                    v257 = v256;
                    v274 = v274 + 0xffffffff & 0xffffffff;
                    v275 /= 2;
                    v276 = 0x100000000 * ((v252 ^ 0xffffffff) + v275 % 2) / 0x100000000;
                    v258 = v257;
                    v248 = v276;
                    while (v274 != 11) {
                        // 0x3ec73
                        v255 = v257;
                        v272 = (int16_t *)(a1 + (int64_t)&g41 + 2 * (v276 + v238));
                        v273 = *v272;
                        v256 = v255;
                        v252 = v273;
                        if (v273 == 0) {
                            // 0x3ec91
                            *v272 = (int16_t)v255;
                            v256 = v255 + 0xfffffffe & 0xffffffff;
                            v252 = v255 & 0xffffffff;
                        }
                        // 0x3ec9e
                        v257 = v256;
                        v274 = v274 + 0xffffffff & 0xffffffff;
                        v275 /= 2;
                        v276 = 0x100000000 * ((v252 ^ 0xffffffff) + v275 % 2) / 0x100000000;
                        v258 = v257;
                        v248 = v276;
                    }
                }
                // 0x3eca2
                *(int16_t *)(2 * (v241 + v248) + v240) = (int16_t)v242;
                v247 = v258;
            }
        }
        int32_t v277 = v242 + 1; // 0x3ecb9
        while (v277 != v225) {
            // 0x3eb9e
            v242 = v277;
            v244 = v247;
            v245 = v242;
            v5 = v245;
            v246 = *(char *)(v222 + 72 + v245);
            v247 = v244;
            if (v246 != 0) {
                // 0x3ebba
                v259 = v246;
                v260 = (int32_t)v246;
                v5 = 0;
                v261 = (int32_t *)(v219 + 196 + 4 * v259);
                v262 = *v261;
                *v261 = v262 + 1;
                v265 = v246;
                v250 = v262;
                v263 = 2 * v5;
                v264 = v250 % 2 | v263 & 0xfffffffe;
                v265--;
                v250 /= 2;
                while (v265 != 0) {
                    // 0x3ebd5
                    v263 = 2 * v264;
                    v264 = v250 % 2 | v263 & 0xfffffffe;
                    v265--;
                    v250 /= 2;
                }
                // 0x3ebeb
                v5 = v264;
                if (v246 < 11) {
                    // 0x3ebf0
                    v247 = v244;
                    if ((int32_t)v264 <= (int32_t)&g8) {
                        // 0x3ec12
                        v268 = 512 * v260 | v242;
                        v5 = v264 + (int64_t)(1 << v260 % 32) & 0xffffffff;
                        *(int16_t *)(2 * (v238 + 176 + (v264 & 0xffffffff)) + v240) = v268;
                        v271 = v5;
                        v247 = v244;
                        while ((int32_t)v271 <= (int32_t)&g8) {
                            // 0x3ec12
                            v5 = v271 + (int64_t)(1 << v260 % 32) & 0xffffffff;
                            *(int16_t *)(2 * (v238 + 176 + (v271 & 0xffffffff)) + v240) = v268;
                            v271 = v5;
                            v247 = v244;
                        }
                    }
                } else {
                    // 0x3ec2c
                    v266 = (int16_t *)(v239 + 2 * ((v263 & (int64_t)(int32_t)&g8) + v238));
                    v267 = *v266;
                    v253 = v244;
                    v249 = v264;
                    v251 = v267;
                    if (v267 == 0) {
                        // 0x3ec4c
                        *v266 = (int16_t)v244;
                        v253 = v244 + 0xfffffffe & 0xffffffff;
                        v249 = v5;
                        v251 = v244 & 0xffffffff;
                    }
                    // 0x3ec59
                    v254 = v253;
                    v269 = v249 / 1024;
                    v270 = 0x100000000 * ((v251 ^ 0xffffffff) + v269 % 2) / 0x100000000;
                    v258 = v254;
                    v248 = v270;
                    if (v246 != 11) {
                        // 0x3ec73
                        v275 = v269 % 0x400000;
                        v274 = v259;
                        v255 = v254;
                        v272 = (int16_t *)(a1 + (int64_t)&g41 + 2 * (v270 + v238));
                        v273 = *v272;
                        v256 = v255;
                        v252 = v273;
                        if (v273 == 0) {
                            // 0x3ec91
                            *v272 = (int16_t)v255;
                            v256 = v255 + 0xfffffffe & 0xffffffff;
                            v252 = v255 & 0xffffffff;
                        }
                        // 0x3ec9e
                        v257 = v256;
                        v274 = v274 + 0xffffffff & 0xffffffff;
                        v275 /= 2;
                        v276 = 0x100000000 * ((v252 ^ 0xffffffff) + v275 % 2) / 0x100000000;
                        v258 = v257;
                        v248 = v276;
                        while (v274 != 11) {
                            // 0x3ec73
                            v255 = v257;
                            v272 = (int16_t *)(a1 + (int64_t)&g41 + 2 * (v276 + v238));
                            v273 = *v272;
                            v256 = v255;
                            v252 = v273;
                            if (v273 == 0) {
                                // 0x3ec91
                                *v272 = (int16_t)v255;
                                v256 = v255 + 0xfffffffe & 0xffffffff;
                                v252 = v255 & 0xffffffff;
                            }
                            // 0x3ec9e
                            v257 = v256;
                            v274 = v274 + 0xffffffff & 0xffffffff;
                            v275 /= 2;
                            v276 = 0x100000000 * ((v252 ^ 0xffffffff) + v275 % 2) / 0x100000000;
                            v258 = v257;
                            v248 = v276;
                        }
                    }
                    // 0x3eca2
                    *(int16_t *)(2 * (v241 + v248) + v240) = (int16_t)v242;
                    v247 = v258;
                }
            }
            // 0x3ecb9
            v277 = v242 + 1;
        }
        // 0x3eb90
        result13 = v225;
    }
    // 0x3ecc3
    if (v223 != 2) {
        // 0x3e303
        return result13;
    }
    uint32_t v278 = *(int32_t *)(a1 + 48); // 0x3ecd4
    result3 = v278;
    if ((int32_t)v139 < 15 != *(int32_t *)v224 != -v278) {
        // 0x3e303
        return result3;
    }
    int64_t v279 = v1 - v135; // 0x3ecf0
    if (v279 > 1) {
        // 0x3edbb
        return v279 - 1;
    }
    int16_t result14 = *(int16_t *)(a1 + (int64_t)&g4 + 2 * (v142 & (int64_t)(int32_t)&g8)); // 0x3ed04
    if (result14 < 0) {
        // 0x3ed22
        return result14;
    }
    // 0x3ed11
    return result14 / 512;
}

// Address range: 0x41810 - 0x4183f
int64_t function_41810(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(2 * a1 + 69); // 0x41810
    *v1 = *v1 + (char)(a3 / 256);
    int64_t v2; // 0x41810
    if ((int32_t)v2 == 0) {
        // 0x41846
        int64_t result; // 0x41810
        return result;
    }
    int64_t result2 = a5 + 0xffffffff & 0xffffffff; // 0x41818
    char v3 = *(char *)(a4 + 46 + result2); // 0x4181c
    if (v3 >= 93 || (1 << (int64_t)((v3 + 17) % 64) & 0x200000000801) == 0) {
        // 0x4183c
        return result2 - 1;
    }
    // 0x41846
    return result2;
}

// Address range: 0x4a4be0 - 0x4a5380
int64_t function_4a4be0(int64_t a1) {
    // 0x4a4be0
    int64_t v1; // 0x4a4be0
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", &g9, "=> parse client hello", v1);
    int32_t * v2 = (int32_t *)(a1 + 12);
    char * v3 = (char *)(a1 + 372);
    int64_t * v4 = (int64_t *)(a1 + 184);
    int32_t v5; // bp-228, 0x4a4be0
    int64_t v6 = (int64_t)&v5;
    int64_t * v7 = (int64_t *)(a1 + 248);
    int64_t result; // 0x4a4be0
    int64_t v8; // 0x4a4dd9
    int64_t v9; // 0x4a4ded
    if (*v2 == 0) {
        // 0x4a4dd1
        v8 = function_49b4a0(a1, 5);
        if ((int32_t)v8 != 0) {
            // 0x4a4de6
            v9 = v8 & 0xffffffff;
            function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g10, "mbedtls_ssl_fetch_input", v9, 0x100000000 * v8 >> 32);
            result = v9;
            return result;
        }
    }
    int64_t v10 = *(int64_t *)(a1 + 176); // 0x4a4c23
    unsigned char v11 = *v3 & 2;
    int64_t v12 = v11; // 0x4a4c4f
    function_49e960(a1, 4, "/home/richard/code/mbedtls/library/ssl_srv.c", &g11, "record header", v10, (v12 - ((int64_t)(v11 == 0) | v12) & -8) + 13);
    char * v13 = (char *)v10; // 0x4a4c68
    unsigned char v14 = *v13; // 0x4a4c68
    int64_t v15 = function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)&g12, "client hello v3, message type: %d", (int64_t)v14); // 0x4a4c8a
    result = v15;
    int64_t v16; // 0x4a4be0
    int64_t v17; // 0x4a4be0
    int64_t v18; // 0x4a4be0
    int64_t v19; // 0x4a4be0
    while (*v13 == 22) {
        int64_t v20 = *v4; // 0x4a4c99
        unsigned char v21 = *(char *)v20; // 0x4a4cb4
        unsigned char v22 = *(char *)(v20 + 1); // 0x4a4cb7
        function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g13, "client hello v3, message len.: %d", 256 * (int64_t)v21 | (int64_t)v22);
        int64_t v23 = v10 + 1; // 0x4a4cd4
        int64_t v24 = (int64_t)*(char *)v23; // 0x4a4cd4
        function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g14, "client hello v3, protocol version: [%d:%d]", v24);
        unsigned char v25 = *v3; // 0x4a4d15
        int64_t v26; // bp-224, 0x4a4be0
        int64_t v27 = function_49bab0((int64_t *)&v5, &v26, (int32_t)(v25 / 2 % 2), v23); // 0x4a4d21
        result = v27;
        if (v5 < 3) {
            // break -> 0x4a4ecf
            break;
        }
        // 0x4a4d34
        v19 = v6;
        if ((*(char *)(v6 + 372) & 2) == 0) {
            goto lab_0x4a4e28;
        }
        // 0x4a4d44
        if (*v2 != 0) {
            // 0x4a4ee8
            v16 = *(int64_t *)(a1 + 272);
            goto lab_0x4a4eef;
        }
        int64_t v28 = *(int64_t *)(a1 + 168); // 0x4a4d4f
        v18 = (int64_t)&g15;
        v17 = v24;
        if (*(char *)v28 != 0) {
            goto lab_0x4a4eb4_2;
        }
        // 0x4a4d5f
        v18 = (int64_t)&g15;
        v17 = v24;
        if (*(char *)(v28 + 1) != 0) {
            goto lab_0x4a4eb4_2;
        }
        int64_t v29 = *(int64_t *)(a1 + 296); // 0x4a4d6c
        *(int32_t *)(v29 + 2) = *(int32_t *)(v28 + 2);
        *(int16_t *)(v29 + 6) = *(int16_t *)(v28 + 6);
        if ((int32_t)function_4968b0(a1) == 0) {
            // 0x4a4e20
            function_496940(a1);
            v19 = a1;
            goto lab_0x4a4e28;
        }
        // 0x4a4d8e
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g16, "replayed record, discarding", v24);
        *v7 = 0;
        *(int64_t *)(a1 + 232) = 0;
        if (*v2 == 0) {
            // 0x4a4dd1
            v8 = function_49b4a0(a1, 5);
            if ((int32_t)v8 != 0) {
                // 0x4a4de6
                v9 = v8 & 0xffffffff;
                function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g10, "mbedtls_ssl_fetch_input", v9, 0x100000000 * v8 >> 32);
                result = v9;
                return result;
            }
        }
        // 0x4a4c20
        v10 = *(int64_t *)(a1 + 176);
        v11 = *v3 & 2;
        v12 = v11;
        function_49e960(a1, 4, "/home/richard/code/mbedtls/library/ssl_srv.c", &g11, "record header", v10, (v12 - ((int64_t)(v11 == 0) | v12) & -8) + 13);
        v13 = (char *)v10;
        v14 = *v13;
        v15 = function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)&g12, "client hello v3, message type: %d", (int64_t)v14);
        result = v15;
    }
  lab_0x4a4ecf:
    // 0x4a4ecf
    return result;
  lab_0x4a4e28:;
    uint32_t v30 = *v2; // 0x4a4e3e
    if (v30 != 0) {
        // 0x4a4ee8
        v16 = *(int64_t *)(a1 + 272);
        goto lab_0x4a4eef;
    } else {
        int64_t v31 = *v4; // 0x4a4e28
        unsigned char v32 = *(char *)(v31 + 1); // 0x4a4e33
        int64_t v33 = 256 * (int64_t)*(char *)v31 | (int64_t)v32; // 0x4a4e3b
        result = v30;
        if (v33 > (int64_t)"le") {
            return result;
        } else {
            unsigned char v34 = *(char *)(v19 + 372) & 2;
            int64_t v35 = v34; // 0x4a4e66
            int64_t v36 = v33 + 13; // 0x4a4e72
            int64_t v37 = function_49b4a0(a1, (v35 - ((int64_t)(v34 == 0) | v35) & -8) + v36); // 0x4a4e77
            result = v37;
            if ((int32_t)v37 != 0) {
                return result;
            } else {
                // 0x4a4e84
                result = a1;
                if ((*v3 & 2) == 0) {
                    return result;
                } else {
                    // 0x4a4e94
                    *v7 = v36;
                    v16 = v33;
                    goto lab_0x4a4eef;
                }
            }
        }
    }
  lab_0x4a4eb4_2:
    // 0x4a4eb4
    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)v18, "bad client hello message", v17);
    result = 0xffff8700;
    return result;
  lab_0x4a4eef:;
    int64_t v38 = *(int64_t *)(a1 + 200); // 0x4a4eef
    function_49e960(a1, 4, "/home/richard/code/mbedtls/library/ssl_srv.c", &g18, "record contents", v38, v16);
    unsigned char v39 = *v3 & 2;
    int64_t v40 = v39; // 0x4a4f46
    v18 = (int64_t)&g19;
    v17 = v38;
    int64_t * v41; // 0x4a51a6
    unsigned char v42; // 0x4a520d
    int64_t v43; // 0x4a5213
    int64_t v44; // 0x4a5226
    uint64_t v45; // 0x4a5007
    int64_t v46; // 0x4a5018
    int64_t v47; // 0x4a510c
    if (v16 < (v40 - ((int64_t)(v39 == 0) | v40) & -8) + 12) {
        goto lab_0x4a4eb4_2;
    } else {
        char * v48 = (char *)v38; // 0x4a4f5f
        int64_t v49 = (int64_t)*v48; // 0x4a4f5f
        function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g20, "client hello v3, handshake type: %d", v49);
        v18 = (int64_t)&g21;
        v17 = v49;
        if (*v48 != 1) {
            goto lab_0x4a4eb4_2;
        } else {
            char * v50 = (char *)(v38 + 1); // 0x4a4f9d
            char * v51 = (char *)(v38 + 2); // 0x4a4fa3
            char * v52 = (char *)(v38 + 3); // 0x4a4fb0
            int64_t v53 = 256 * (int64_t)*v51 | 0x10000 * (int64_t)*v50 | (int64_t)*v52; // 0x4a4fd2
            int64_t v54 = function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g22, "client hello v3, handshake len.: %d", v53); // 0x4a4fd7
            result = v54;
            if (*v50 != 0) {
                goto lab_0x4a4ecf;
            } else {
                // 0x4a4fe8
                result = a1;
                if ((*v3 & 2) != 0) {
                    goto lab_0x4a4ecf;
                } else {
                    // 0x4a4ff8
                    v45 = 256 * (int64_t)*v51 | (int64_t)*v52;
                    result = v45;
                    if (v45 + 4 != v16) {
                        goto lab_0x4a4ecf;
                    } else {
                        // 0x4a5018
                        v18 = (int64_t)&g23;
                        v17 = v53;
                        if (v45 < 38) {
                            goto lab_0x4a4eb4_2;
                        } else {
                            // 0x4a503f
                            v46 = v38 + 4;
                            function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g24, "client hello, version", v46, 2);
                            int64_t v55 = a1 + 24; // 0x4a5074
                            int64_t v56 = a1 + 20; // 0x4a5078
                            unsigned char v57 = *v3; // 0x4a507c
                            function_49bab0((int64_t *)v56, (int64_t *)v55, (int32_t)(v57 / 2 % 2), v46);
                            int64_t * v58 = (int64_t *)(a1 + 96); // 0x4a508d
                            int64_t v59 = *v58; // 0x4a508d
                            int32_t * v60 = (int32_t *)v56; // 0x4a5091
                            uint32_t v61 = *v60; // 0x4a5091
                            uint64_t v62 = (int64_t)v61; // 0x4a5091
                            int32_t * v63 = (int32_t *)v55; // 0x4a5095
                            uint32_t v64 = *v63; // 0x4a5095
                            *(int32_t *)(v59 + (int64_t)&g42) = v61;
                            *(int32_t *)(v59 + (int64_t)&g43) = v64;
                            result = v56;
                            if (v62 < (int64_t)*(char *)(a1 + 390)) {
                                goto lab_0x4a4ecf;
                            } else {
                                // 0x4a50bf
                                result = v56;
                                if ((int64_t)v64 < (int64_t)*(char *)(a1 + 391)) {
                                    goto lab_0x4a4ecf;
                                } else {
                                    unsigned char v65 = *(char *)(a1 + 388); // 0x4a50c7
                                    result = v56;
                                    if (v62 > (int64_t)v65) {
                                        // 0x4a50d7
                                        *v60 = (int32_t)v65;
                                        *v63 = (int32_t)*(char *)(a1 + 389);
                                        v47 = v38 + 6;
                                        function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g25, "client hello, random bytes", v47, 32);
                                        int64_t v66 = *v58; // 0x4a511d
                                        int64_t v67 = v66 + (int64_t)&g38; // 0x4a5125
                                        *(int64_t *)v67 = *(int64_t *)v47;
                                        int64_t v68 = *(int64_t *)(v38 + 14); // 0x4a5133
                                        *(int64_t *)(v66 + (int64_t)&g38 + 8) = v68;
                                        int64_t v69 = *(int64_t *)(v38 + 22); // 0x4a513c
                                        *(int64_t *)(v66 + (int64_t)&g38 + 16) = v69;
                                        int64_t v70 = *(int64_t *)(v38 + 30); // 0x4a5145
                                        *(int64_t *)(v66 + (int64_t)&g38 + 24) = v70;
                                        unsigned char v71 = *(char *)(v38 + 38); // 0x4a514e
                                        result = v67;
                                        if (v71 < 33) {
                                            int64_t v72 = v71; // 0x4a514e
                                            uint64_t v73 = v72 + 36; // 0x4a5164
                                            result = v67;
                                            if (v45 < v73) {
                                                goto lab_0x4a4ecf;
                                            } else {
                                                int64_t v74 = v38 + 39; // 0x4a5196
                                                function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g26, "client hello, session id", v74, v72);
                                                v41 = (int64_t *)(a1 + 88);
                                                int64_t v75 = *v41; // 0x4a51a6
                                                *(int64_t *)(v75 + 24) = 0;
                                                *(int64_t *)(v75 + 32) = 0;
                                                *(int64_t *)(v75 + 40) = 0;
                                                *(int64_t *)(v75 + 48) = 0;
                                                int64_t v76 = *v41; // 0x4a51d2
                                                *(int64_t *)(v75 + 16) = v72;
                                                int64_t v77 = *(int64_t *)(v76 + 16); // 0x4a51da
                                                int64_t v78 = v76 + 24; // 0x4a51de
                                                memcpy((int64_t *)v78, (int64_t *)v74, (int32_t)v77);
                                                result = v78;
                                                if ((*(char *)(v76 + 396) & 2) == 0) {
                                                    goto lab_0x4a4ecf;
                                                } else {
                                                    // 0x4a51f7
                                                    v42 = *(char *)(v74 + v72);
                                                    int64_t v79 = v42; // 0x4a520d
                                                    v43 = v72 + 35 + v79;
                                                    v18 = (int64_t)&g27;
                                                    v17 = v74;
                                                    if (v45 < v43 + 3) {
                                                        goto lab_0x4a4eb4_2;
                                                    } else {
                                                        // 0x4a5226
                                                        v44 = v73 + v46;
                                                        function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g31, "client hello, cookie", v44, v79);
                                                        int64_t v80 = *(int64_t *)(a1 + 144); // 0x4a5255
                                                        if (v80 == 0) {
                                                            goto lab_0x4a526e;
                                                        } else {
                                                            // 0x4a5261
                                                            result = v80;
                                                            if (*v2 == 0) {
                                                                goto lab_0x4a4ecf;
                                                            } else {
                                                                goto lab_0x4a526e;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            goto lab_0x4a4ecf;
                                        }
                                    } else {
                                        goto lab_0x4a4ecf;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x4a526e:
    // 0x4a526e
    v18 = (int64_t)&g33;
    v17 = v44;
    if (v42 != 0) {
        goto lab_0x4a4eb4_2;
    } else {
        // 0x4a5283
        function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", &g34, "cookie verification skipped", v44);
        int64_t v81 = v43 + 1; // 0x4a52a5
        uint64_t v82 = (int64_t)*(char *)(v38 + 5 + v81); // 0x4a52bb
        int64_t v83 = 256 * (int64_t)*(char *)(v81 + v46) | v82; // 0x4a52bb
        result = v83;
        if (v83 < 2) {
            goto lab_0x4a4ecf;
        } else {
            int64_t v84 = v83 + v81; // 0x4a52ca
            uint64_t v85 = v84 + 3;
            result = v83;
            if (v45 < v85) {
                goto lab_0x4a4ecf;
            } else {
                // 0x4a52db
                result = v83;
                if (v82 % 2 != 0) {
                    goto lab_0x4a4ecf;
                } else {
                    // 0x4a52e3
                    function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g35, "client hello, ciphersuitelist", v81 + v47, v83);
                    unsigned char v86 = *(char *)(v84 + v47); // 0x4a5327
                    int64_t v87 = v86; // 0x4a5327
                    result = v87;
                    if (v45 >= v85 + v87 && v86 != 16 != v87 > 15) {
                        // 0x4a534c
                        function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g36, "client hello, compression", v85 + v46, v87);
                        return *v41;
                    }
                    goto lab_0x4a4ecf;
                }
            }
        }
    }
}

// Address range: 0x4b3b00 - 0x4b3b0f
int64_t function_4b3b00(int64_t a1, int64_t a2) {
    // 0x4b3b00
    int64_t result; // 0x4b3b00
    bool v1; // 0x4b3b00
    if (!v1) {
        // 0x4b3b03
        int64_t v2; // bp+112, 0x4b3b00
        return function_4b1220(&v2, a2 - result);
    }
    // 0x4b3b02
    return result;
}

// Address range: 0x4d1770 - 0x4d17a0
int64_t function_4d1770(int64_t a1, int64_t a2) {
    // 0x4d1770
    int64_t v1; // 0x4d1770
    int64_t v2 = v1 + 1; // 0x4d1778
    memcpy((int64_t *)v2, (int64_t *)v1, (int32_t)v1);
    return (int64_t)memset2((void *)(int64_t)((int64_t *)(v2 + a1)), 0, (int32_t)v1 % 256);
}

// Address range: 0x57d0b0 - 0x57d0b7
int64_t function_57d0b0(void) {
    int64_t result = function_57d112((int64_t)&g47, (int64_t)&g47, (int64_t)&g47); // 0x57d0b5
    return result;
}

// Address range: 0x57d0b7 - 0x57d0c5
int64_t function_57d0b7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x57d0b7
    return 0;
}

// Address range: 0x57d0c8 - 0x57d0fc
int64_t function_57d0c8(void) {
    // 0x57d0c8
    int64_t v1; // 0x57d0c8
    *(int64_t *)(v1 + 24) = v1 + 2;
    char v2 = *(char *)(v1 + 1); // 0x57d0de
    int32_t v3 = *(int32_t *)(4 * (int64_t)(v2 - 67) + (int64_t)&g37); // 0x57d0f3
    return (int64_t)v3 + (int64_t)&g37;
}

// Address range: 0x57d110 - 0x57d111
int64_t function_57d110(void) {
    // 0x57d110
    int64_t result; // 0x57d110
    return result;
}

// Address range: 0x57d112 - 0x57d131
int64_t function_57d112(int64_t a1, int64_t a2, int64_t a3) {
    // 0x57d112
    int64_t v1; // 0x57d112
    int64_t v2 = v1;
    return function_5797e0(v2, 3, v1, function_57c9c0(v2));
}

// Address range: 0x57d138 - 0x57d147
int64_t function_57d138(int64_t a1, int64_t a2, int64_t a3) {
    // 0x57d138
    if (*(int64_t *)(a3 + 8) != 0) {
        function_57d03b();
    }
    // 0x57d145
    return function_57d110();
}

// Address range: 0x57d150 - 0x57d170
int64_t function_57d150(void) {
    // 0x57d150
    int64_t v1; // 0x57d150
    function_57b480(v1);
    return function_579ab0(v1);
}

// Address range: 0x57d170 - 0x57d19e
int64_t function_57d170(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x57d170
    int64_t result; // 0x57d170
    char * v1 = (char *)(result + 2); // 0x57d172
    if (*v1 == 0) {
        // 0x57d18d
        return function_57cf40(result, 0);
    }
    // 0x57d17b
    *(int64_t *)(result + 24) = result + 3;
    if (*v1 == 110) {
        // 0x57d56a
        return result;
    }
    // 0x57d18d
    return function_57cf40(result, 0);
}

// Address range: 0x57d1a0 - 0x57d1b7
int64_t function_57d1a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x57d1a0
    int64_t v1; // 0x57d1a0
    return function_57b480(v1);
}

// Address range: 0x57d1c0 - 0x57d4c7
int64_t function_57d1c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x57d1c0
    int64_t v1; // 0x57d1c0
    int64_t v2 = v1 + 24; // 0x57d1c0
    int64_t result = function_579a30(v2); // 0x57d1c4
    int64_t * v3 = (int64_t *)v2; // 0x57d1d2
    int64_t v4 = *v3; // 0x57d1d2
    int64_t v5 = v4 + 1; // 0x57d1df
    *v3 = v5;
    if (*(char *)v5 != 36) {
        // 0x57d299
        return result;
    }
    // 0x57d20b
    switch (*(char *)(v4 + 2)) {
        case 83: {
            // 0x57d299
            return 83;
        }
        case 95: {
            // 0x57d299
            return 95;
        }
    }
    int32_t * v6 = (int32_t *)(v1 + 40);
    uint32_t v7 = *v6; // 0x57d22d
    int64_t v8 = v7; // 0x57d23b
    if (v7 >= *(int32_t *)(v1 + 44)) {
        v8 = function_57d0b7((int64_t)&g47, (int64_t)&g47, (int64_t)&g47);
    }
    int64_t v9 = 0x100000000 * v8;
    int64_t v10 = v8 + 1; // 0x57d244
    int64_t v11 = 8 * ((v9 >> 32) + (v9 >> 31)) + *(int64_t *)(v1 + 32); // 0x57d253
    *(int32_t *)(v11 + 4) = 0;
    *v6 = (int32_t)v10;
    *(int32_t *)v11 = 64;
    *(int32_t *)(v11 + 8) = 36;
    *v3 = v4 + 3;
    return v10 & 0xffffffff;
}
