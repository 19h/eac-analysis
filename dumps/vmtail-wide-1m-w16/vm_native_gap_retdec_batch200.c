/*
 * Targeted RetDec C for native executable gap queue batch 200.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x41840-0x418c6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b3b10-0x4b3bf0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d17a0-0x4d18b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ed20-0x3f000 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a5380-0x4a5ef0 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g23;
extern int g24;
extern int g25;
extern int g26;
extern int g27;
extern int g28;
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

int64_t function_3e4a6();
int64_t function_3ea7c();
int64_t function_3ecd0();
int64_t function_3ecfc();
int64_t function_3ed20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7);
int64_t function_3ef4a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ef89(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3f727();
int64_t function_4174a();
int64_t function_41840(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t str2);
int64_t function_418b3(void);
int64_t function_418b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_418c5(void);
int64_t function_496ab0();
int64_t function_497930();
int64_t function_498b90();
int64_t function_49a900();
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_49e960();
int64_t function_4a4eb4();
int64_t function_4a4eca();
int64_t function_4a4ecf();
int64_t function_4a5380(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4b0f10();
int64_t function_4b1220();
int64_t function_4b1590();
int64_t function_4b1680();
int64_t function_4b2d10();
int64_t function_4b38b0();
int64_t function_4b39af();
int64_t function_4b3b10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4b5070();
int64_t function_4ba4e0();
int64_t function_4d17a0(uint64_t a1, int64_t a2, int32_t a3);

// Address range: 0x3ed20 - 0x3ef4a
int64_t function_3ed20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    // 0x3ed20
    int64_t v1; // 0x3ed20
    uint64_t v2 = v1;
    int64_t v3; // 0x3ed20
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    uint32_t v5 = (int32_t)v1; // 0x3ed22
    int64_t v6 = a1; // 0x3ed26
    int64_t v7; // 0x3ed20
    if (v5 < 11) {
        goto lab_0x3ed5d_2;
    } else {
        int64_t v8 = v1 + 8; // 0x3ed45
        int64_t v9 = 10; // 0x3ed20
        int64_t v10 = v3 & 0xffffffff ^ 0xffffffff; // 0x3ed30
        v3 = v10;
        int64_t v11 = (v2 >> v9 % 64) % 2; // 0x3ed3a
        int16_t v12 = *(int16_t *)(v8 + 2 * ((v11 | (int64_t)&g1) + (0x100000000 * v10 >> 32))); // 0x3ed45
        int64_t v13 = v12; // 0x3ed45
        v3 = v13;
        v7 = v11;
        while (v12 < 0) {
            int64_t v14 = v9 + 2; // 0x3ed53
            v9 = v9 + 1 & 0xffffffff;
            if (v5 < (int32_t)v14) {
                // 0x3ed5d
                v6 = v14 & 0xffffffff;
                goto lab_0x3ed5d_2;
            }
            v10 = v13 & 0xffffffff ^ 0xffffffff;
            v3 = v10;
            v11 = (v2 >> v9 % 64) % 2;
            v12 = *(int16_t *)(v8 + 2 * ((v11 | (int64_t)&g1) + (0x100000000 * v10 >> 32)));
            v13 = v12;
            v3 = v13;
            v7 = v11;
        }
        goto lab_0x3eddf;
    }
  lab_0x3ed5d_2:;
    // 0x3ed5d
    int64_t v15; // 0x3ed20
    int64_t v16; // 0x3ed20
    char v17; // 0x3ed20
    if (v1 < a6) {
        int64_t v18 = v1 % 256; // 0x3ed98
        v3 = v18;
        v16 = v1 + 1;
        v15 = v18;
    } else {
        if ((v17 & 2) != 0) {
            // 0x3ed7b
            *(int32_t *)v1 = 16;
            return function_3e4a6();
        }
        // 0x3eda1
        v3 = 0;
        v15 = 0;
    }
    uint64_t v19 = v1 % 64; // 0x3edaa
    int64_t v20 = v15; // 0x3edaa
    if (v19 != 0) {
        int64_t v21 = v15 << v19; // 0x3edaa
        v3 = v21;
        v20 = v21;
    }
    int64_t v22 = v1 + 8; // 0x3eda6
    int64_t v23 = v16; // 0x3edb4
    v7 = v6;
    int64_t v24 = v22 & 0xffffffff; // 0x3edb4
    int64_t v25 = v20 | v2; // 0x3edb4
    if ((int32_t)v22 < 15) {
        // 0x3edb6
        return function_3ecfc();
    }
    goto lab_0x3eddf;
  lab_0x3eddf:;
    int16_t v26 = *(int16_t *)(v1 + (int64_t)&g2 + 2 * (v25 & (int64_t)(int32_t)&g6)); // 0x3ede7
    int64_t v27 = v26; // 0x3ede7
    v3 = v27;
    int64_t v28; // 0x3ed20
    int64_t v29; // 0x3ed20
    int64_t v30; // 0x3ed20
    if (v26 < 0) {
        int64_t v31 = v1 + 8; // 0x3ee26
        uint64_t v32 = 10;
        int64_t v33 = v32 + 1 & 0xffffffff; // 0x3ee0c
        int64_t v34 = v27 & 0xffffffff ^ 0xffffffff; // 0x3ee0f
        v3 = v34;
        int64_t v35 = v25 >> v32 % 64;
        uint16_t v36 = *(int16_t *)(v31 + 2 * ((v35 % 2 | (int64_t)&g1) + (0x100000000 * v34 >> 32))); // 0x3ee26
        int64_t v37 = v36; // 0x3ee26
        v3 = v37;
        v28 = v37;
        v30 = v33;
        v29 = v35;
        while (v36 < 0) {
            // 0x3ee09
            v32 = v33;
            v33 = v32 + 1 & 0xffffffff;
            v34 = v37 & 0xffffffff ^ 0xffffffff;
            v3 = v34;
            v35 = v25 >> v32 % 64;
            v36 = *(int16_t *)(v31 + 2 * ((v35 % 2 | (int64_t)&g1) + (0x100000000 * v34 >> 32)));
            v37 = v36;
            v3 = v37;
            v28 = v37;
            v30 = v33;
            v29 = v35;
        }
    } else {
        int64_t v38 = v27 % 512; // 0x3edfd
        v3 = v38;
        v28 = v38;
        v30 = v26 / 512;
        v29 = v7;
    }
    uint32_t v39 = (int32_t)v28; // 0x3ee36
    if (v39 <= 15) {
        // 0x3ee42
        *(char *)(v1 + (int64_t)&g3 + (v1 & 0xffffffff)) = (char)v28;
        return function_3ecd0(v29 & -256 | v28 % 256, v30);
    }
    if ((int32_t)v1 == 0 == v39 == 16) {
        // 0x3ee75
        *(int32_t *)v1 = 17;
        return function_3f727();
    }
    int64_t v40 = v24 - v30; // 0x3ee33
    int64_t v41 = v25 >> v30 % 64;
    int64_t v42 = v28 + 0xfffffff0 & 0xffffffff; // 0x3ee88
    char v43 = *(char *)(v42 + (int64_t)&g7); // 0x3ee8b
    int64_t v44 = v43; // 0x3ee8b
    v3 = v44;
    uint32_t v45 = (int32_t)v43;
    int64_t v46 = v41; // 0x3ee95
    if ((int32_t)v40 >= v45) {
      lab_0x3eeef:
        // 0x3eeef
        v3 = v28 & 0xffffffff;
        char v47 = *(char *)(v42 + (int64_t)&g8); // 0x3ef15
        v3 = 0;
        int64_t v48; // 0x3ed20
        char v49; // 0x3ed20
        if (v39 != 16) {
            // 0x3eeef
            v48 = v1 + (int64_t)&g3;
            v49 = 0;
        } else {
            int64_t v50 = v1 + (int64_t)&g3;
            unsigned char v51 = *(char *)((v1 + 0xffffffff & 0xffffffff) + v50); // 0x3ef2b
            v3 = v51;
            v48 = v50;
            v49 = v51;
        }
        unsigned char v52 = v43 % 32;
        int64_t v53 = v52 == 0 ? 0 : (int64_t)(1 << (int32_t)v52) + 0xffffffff; // 0x3ef03
        int64_t v54 = (v46 & v53) + (int64_t)v47 & 0xffffffff; // 0x3ef19
        int64_t v55 = v48 + (v1 & 0xffffffff); // 0x3ef38
        __asm_rep_stosb_memset((char *)v55, v49, v54);
        bool v56; // 0x3ed20
        return function_3ecd0(v55 + v54 * (v56 ? -1 : 1), v54);
    }
    int64_t v57 = v23; // 0x3ed20
    int64_t v58 = v40; // 0x3ed20
    int64_t v59 = v41; // 0x3ed20
    while (true) {
        int64_t v60 = v57; // 0x3ee97
        int64_t v61; // 0x3ed20
        int64_t v62; // 0x3ed20
        if (v60 < a6) {
            int64_t v63 = (int64_t)*(char *)v60; // 0x3eed2
            v3 = v63;
            v61 = v63;
            v62 = v60 + 1;
        } else {
            if ((v17 & 2) != 0) {
                // break -> 0x3eeb5
                break;
            }
            // 0x3eedb
            v3 = 0;
            v61 = 0;
            v62 = v60;
        }
        int64_t v64 = v61; // 0x3eee4
        uint64_t v65 = v58 % 64; // 0x3eee4
        int64_t v66 = v64; // 0x3eee4
        if (v65 != 0) {
            v66 = v64 << v65;
            v3 = v66;
        }
        int64_t v67 = (v58 & 0xffffffff) + 8; // 0x3eee0
        int64_t v68 = v66 | v59; // 0x3eee7
        v3 = v44 & 0xffffffff;
        v57 = v62;
        v58 = v67;
        v59 = v68;
        v46 = v68;
        if ((int32_t)v67 >= v45) {
            goto lab_0x3eeef;
        }
    }
    // 0x3eeb5
    *(int32_t *)v1 = 18;
    return function_3e4a6();
}

// Address range: 0x3ef4a - 0x3ef89
int64_t function_3ef4a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ef4a
    int64_t v1; // 0x3ef4a
    bool v2; // 0x3ef4a
    if (!v2) {
        // 0x3ef56
        *(int32_t *)v1 = 21;
        return function_3f727();
    }
    int64_t v3 = v1 + 72; // 0x3ef62
    int64_t v4 = v1 + (int64_t)&g26; // 0x3ef70
    __asm_rep_movsb_memcpy((char *)v3, (char *)(v1 + (int64_t)&g3), a4);
    int64_t v5 = v2 ? -1 : 1; // 0x3ef77
    int64_t v6 = v1 & 0xffffffff; // 0x3ef79
    __asm_rep_movsb_memcpy((char *)v4, (char *)(v5 * a4 + v3), v6);
    int64_t v7 = v5 * v6 + v4; // 0x3ef7e
    int32_t * v8 = (int32_t *)(v1 + 24); // 0x3ef80
    *v8 = *v8 - 1;
    return function_3ea7c(v7, v7);
}

// Address range: 0x3ef89 - 0x3efff
int64_t function_3ef89(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3ef89
    int64_t v1; // 0x3ef89
    *(char *)a3 = (char)v1;
    int64_t result = a6 - v1; // 0x3ef91
    if (result >= 4) {
        // 0x3ef9a
        return -2 - a3 + a7;
    }
    uint32_t v2 = (int32_t)v1; // 0x3efb0
    if (v2 >= 15) {
        // 0x3f024
        return result;
    }
    if (result > 1) {
        // 0x3f088
        return result - 1;
    }
    int16_t v3 = *(int16_t *)(v1 + 360 + 2 * (v1 & (int64_t)(int32_t)&g6)); // 0x3efcb
    if (v3 >= 0) {
        // 0x3f024
        return v3 / 512;
    }
    int64_t result2 = v3; // 0x3efcb
    if (v2 >= 11) {
        // 0x3efef
        return result2 & 0xffffffff ^ 0xffffffff;
    }
    // 0x3f024
    return result2;
}

// Address range: 0x41840 - 0x418b3
int64_t function_41840(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t str2) {
    int32_t * v1 = (int32_t *)(a4 - 0x72298a3e); // 0x41841
    *v1 = *v1 - 1;
    int64_t str; // 0x41840
    int32_t * v2 = (int32_t *)(str + 99); // 0x41847
    *v2 = *v2 + (int32_t)a4;
    char * v3 = (char *)(a4 + 41); // 0x4184b
    unsigned char v4 = *v3; // 0x4184b
    *v3 = v4 / 128 | 2 * v4;
    if ((a5 & 0xffffffff) != str) {
        // 0x418ab
        return function_4174a();
    }
    int64_t result; // 0x418a9
    if ((int32_t)str != 0) {
        // 0x4185e
        if (memcmp((int64_t *)str, (int64_t *)str2, (int32_t)str) != 0) {
            // 0x418ab
            return function_4174a();
        }
        // 0x418a7
        result = function_418b6((int64_t)&g28, (int64_t)&g28, (int64_t)&g28, (int64_t)&g28, (int64_t)&g28, (int64_t)&g28);
        return result;
    }
    int64_t v5 = 0; // 0x41840
    while ((int32_t)a5 > (int32_t)v5) {
        char v6 = *(char *)(v5 + str); // 0x41879
        int64_t v7 = v6; // 0x41879
        int64_t v8 = v6 < 91 ? v7 + 32 : v7;
        char v9 = *(char *)(v5 + str2); // 0x4188c
        int64_t v10 = v9; // 0x4188c
        v5++;
        if ((int32_t)v8 != (int32_t)(v9 < 91 ? v10 + 32 : v10)) {
            // 0x418ab
            return function_4174a();
        }
    }
    // 0x418a7
    result = function_418b6((int64_t)&g28, (int64_t)&g28, (int64_t)&g28, (int64_t)&g28, (int64_t)&g28, (int64_t)&g28);
    return result;
}

// Address range: 0x418b3 - 0x418b6
int64_t function_418b3(void) {
    // 0x418b3
    return 0xffffffff;
}

// Address range: 0x418b6 - 0x418c5
int64_t function_418b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x418b6
    int64_t result; // 0x418b6
    return result;
}

// Address range: 0x418c5 - 0x418c6
int64_t function_418c5(void) {
    // 0x418c5
    int64_t result; // 0x418c5
    return result;
}

// Address range: 0x4a5380 - 0x4a5ee8
int64_t function_4a5380(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4a5380
    int64_t v1; // 0x4a5380
    *(int32_t *)(v1 + 12) = 0;
    bool v2; // 0x4a5380
    if (v2 || v2) {
        // 0x4a5e9a
        function_49e960(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g9, "client hello extensions", v1 + a4 + 3, 0);
        return a4 + 41 + a5;
    }
    uint64_t v3 = v1 + 3; // 0x4a538d
    int64_t result; // 0x4a5380
    if (v1 < v3) {
        // 0x4a6289
        return result;
    }
    int64_t v4 = v1 + a4;
    unsigned char v5 = *(char *)(v4 + 2); // 0x4a53a5
    int64_t v6 = 256 * (int64_t)*(char *)(v4 + 1) | (int64_t)v5; // 0x4a53ae
    int64_t result2 = v6 - 1; // 0x4a53b3
    if (result2 < 3) {
        // 0x4a6289
        return result2;
    }
    int64_t result3 = v6 + v3; // 0x4a53c1
    if (result3 != v1) {
        // 0x4a6289
        return result3;
    }
    int64_t v7 = v3 + a4; // 0x4a53f3
    int64_t result4 = function_49e960(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g9, "client hello extensions", v7, v6); // 0x4a53f9
    if (v6 == 0) {
        // 0x4a6289
        return result4;
    }
    unsigned char v8 = *(char *)(v7 + 3); // 0x4a541c
    int64_t v9 = 256 * (int64_t)*(char *)(v7 + 2) | (int64_t)v8; // 0x4a5424
    int64_t result5 = v9 + 4; // 0x4a5426
    if (v6 < result5) {
        // 0x4a6289
        return result5;
    }
    unsigned char v10 = *(char *)(v7 + 1); // 0x4a540b
    int64_t * v11 = (int64_t *)v1;
    int64_t * v12 = (int64_t *)(v1 + 96);
    int32_t * v13 = (int32_t *)(v1 + 12);
    int32_t * v14 = (int32_t *)(v1 + 24);
    int64_t * v15 = (int64_t *)(v1 + 88);
    int64_t v16 = v9; // 0x4a5464
    int64_t v17 = 256 * (int64_t)*(char *)v7 | (int64_t)v10; // 0x4a5464
    int64_t v18 = v6; // 0x4a5464
    int64_t v19 = v7; // 0x4a5464
    int64_t v20 = result5; // 0x4a5464
    int64_t v21; // 0x4a5380
    int64_t v22; // 0x4a5380
    int64_t v23; // 0x4a5380
    int64_t v24; // 0x4a5380
    char v25; // 0x4a57d4
    while (true) {
      lab_0x4a5513:
        // 0x4a5513
        v21 = v19;
        int64_t v26 = v17;
        uint64_t v27 = v16;
        uint32_t v28 = (int32_t)v26; // 0x4a5513
        if (v28 == 13) {
            // 0x4a5c60
            function_49e770(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g12, "found signature_algorithms extension", (char)v26);
            if (*v13 == 1) {
                goto lab_0x4a54c8;
            } else {
                int64_t v29 = v21 + 4; // 0x4a5c8c
                uint64_t v30 = (int64_t)*(char *)(v21 + 5); // 0x4a5c9e
                int64_t v31 = 256 * (int64_t)*(char *)v29 | v30; // 0x4a5c9e
                result = v31;
                if (v27 != v31 + 2) {
                    // 0x4a6289
                    return result;
                }
                // 0x4a5cb0
                result = v31;
                if (v30 % 2 != 0) {
                    // 0x4a6289
                    return result;
                }
                uint64_t v32 = v29 + v27; // 0x4a5c96
                int64_t v33 = v21 + 6; // 0x4a5cbb
                int64_t v34 = *(int64_t *)(*v11 + 232); // 0x4a5cbf
                int32_t * v35 = (int32_t *)v34; // 0x4a5cc6
                int32_t v36 = *v35; // 0x4a5cc6
                result = v34;
                if (v32 > v33 != v36 != 0) {
                    // 0x4a6289
                    return result;
                }
                char * v37 = (char *)v33;
                int64_t v38 = function_498b90(*v37); // 0x4a5d15
                int64_t v39 = v38; // 0x4a5d1c
                int64_t v40 = v33; // 0x4a5d1c
                if (v36 != (int32_t)v38) {
                    int64_t v41 = v40 + 2; // 0x4a5d00
                    result = v39;
                    while (v32 > v41) {
                        int64_t v42 = function_498b90(*(char *)v41); // 0x4a5d15
                        if (*v35 == (int32_t)v42) {
                            // break -> 0x4a5d1e
                            break;
                        }
                        v41 += 2;
                        result = v42;
                    }
                    // 0x4a6289
                    return result;
                }
                unsigned char v43 = *v37; // 0x4a5d2e
                *(int32_t *)*v12 = (int32_t)v43;
                v24 = 228;
                v22 = (int64_t)"client hello v3, signature_algorithm ext: %d";
                v23 = v43;
                goto lab_0x4a54ac;
            }
        } else {
            if (v28 < 14) {
                if (v28 == 4) {
                    int64_t v44 = function_49e770(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g16, "found truncated hmac extension", (char)v26); // 0x4a5bcd
                    result = v44;
                    if (v27 != 0) {
                        // 0x4a6289
                        return result;
                    }
                    // 0x4a5bda
                    if (*(char *)(*v11 + 373) < 0) {
                        // 0x4a5bea
                        *(int32_t *)(*v15 + 144) = 1;
                    }
                    goto lab_0x4a54c8;
                } else {
                    if (v28 < 5) {
                        // 0x4a5480
                        v24 = (int64_t)&g21;
                        v22 = (int64_t)"unknown extension found: %d (ignoring)";
                        v23 = v26;
                        switch (v28) {
                            case 0: {
                                char v45 = v26; // 0x4a5adc
                                function_49e770(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g10, "found ServerName extension", v45);
                                if (*(int64_t *)(*v11 + 88) != 0) {
                                    // 0x4a5aef
                                    function_49e770(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", 98, "parse ServerName extension", v45);
                                    unsigned char v46 = *(char *)(v21 + 5); // 0x4a5b16
                                    int64_t v47 = 256 * (int64_t)*(char *)(v21 + 4) | (int64_t)v46; // 0x4a5b1e
                                    int64_t v48 = v47 + 2; // 0x4a5b23
                                    result = v48;
                                    if (v27 != v48) {
                                        // 0x4a6289
                                        return result;
                                    }
                                    if (v47 != 0) {
                                        unsigned char v49 = *(char *)(v21 + 8); // 0x4a5b42
                                        int64_t v50 = 256 * (int64_t)*(char *)(v21 + 7) | (int64_t)v49; // 0x4a5b4a
                                        int64_t v51 = v50 + 3; // 0x4a5b4e
                                        if (v47 < v51) {
                                            // 0x4a5b9f
                                            return function_4a4eb4();
                                        }
                                        int64_t v52 = v21 + 6; // 0x4a5b33
                                        int64_t v53 = v51; // 0x4a5b5c
                                        int64_t v54 = v52; // 0x4a5b5c
                                        int64_t v55 = v47; // 0x4a5b5c
                                        result = v50;
                                        if (*(char *)v52 == 0) {
                                            // 0x4a6289
                                            return result;
                                        }
                                        v55 += -3 - v50;
                                        while (v55 != 0) {
                                            // 0x4a5b87
                                            v54 += v53;
                                            unsigned char v56 = *(char *)(v54 + 2); // 0x4a5b8b
                                            int64_t v57 = 256 * (int64_t)*(char *)(v54 + 1) | (int64_t)v56; // 0x4a5b92
                                            v53 = v57 + 3;
                                            if (v53 > v55) {
                                                // 0x4a5b9f
                                                return function_4a4eb4();
                                            }
                                            // 0x4a5b68
                                            result = v57;
                                            if (*(char *)v54 == 0) {
                                                // 0x4a6289
                                                return result;
                                            }
                                            v55 += -3 - v57;
                                        }
                                    }
                                }
                                goto lab_0x4a54c8;
                            }
                            case 1: {
                                int64_t v58 = function_49e770(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g15, "found max fragment length extension", (char)v26); // 0x4a5a95
                                result = v58;
                                if (v27 != 1) {
                                    // 0x4a6289
                                    return result;
                                }
                                unsigned char v59 = *(char *)(v21 + 4); // 0x4a5aa3
                                if (v59 >= 5) {
                                    // 0x4a6289
                                    result = v59;
                                    return result;
                                }
                                // 0x4a5ab0
                                *(char *)(*v15 + 140) = v59;
                                goto lab_0x4a54c8;
                            }
                            default: {
                                goto lab_0x4a54ac;
                            }
                        }
                    } else {
                        if (v28 == 10) {
                            // 0x4a5968
                            function_49e770(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g13, "found supported elliptic curves extension", (char)v26);
                            uint64_t v60 = (int64_t)*(char *)(v21 + 5); // 0x4a5997
                            int64_t v61 = 256 * (int64_t)*(char *)(v21 + 4) | v60; // 0x4a5997
                            result = v61;
                            if (v27 != v61 + 2) {
                                // 0x4a6289
                                return result;
                            }
                            // 0x4a59aa
                            result = v61;
                            if (v60 % 2 != 0) {
                                // 0x4a6289
                                return result;
                            }
                            int64_t * v62 = (int64_t *)(*v12 + (int64_t)&g5); // 0x4a59b6
                            result = v61;
                            if (*v62 != 0) {
                                // 0x4a6289
                                return result;
                            }
                            uint64_t v63 = v61 / 2 + 1; // 0x4a59d5
                            int64_t nmemb = v63 < 12 ? v63 : 12; // 0x4a59dd
                            int64_t * mem = calloc((int32_t)nmemb, 8); // 0x4a59e9
                            if (mem == NULL) {
                                // 0x4a6289
                                return 0;
                            }
                            int64_t v64 = (int64_t)mem; // 0x4a59e9
                            *v62 = v64;
                            if (v61 != 0 && nmemb >= 2) {
                                int64_t v65 = v21 + 6; // 0x4a5a2a
                                int64_t v66 = v61; // 0x4a5a2a
                                int64_t v67 = v64;
                                int64_t v68 = nmemb;
                                unsigned char v69 = *(char *)v65; // 0x4a5a35
                                unsigned char v70 = *(char *)(v65 + 1); // 0x4a5a39
                                int64_t v71 = function_4ba4e0(256 * (int64_t)v69 | (int64_t)v70); // 0x4a5a45
                                int64_t v72 = v68; // 0x4a5a4d
                                int64_t v73 = v67; // 0x4a5a4d
                                if (v71 != 0) {
                                    // 0x4a5a4f
                                    *(int64_t *)v67 = v71;
                                    v72 = v68 - 1;
                                    v73 = v67 + 8;
                                }
                                int64_t v74 = v72;
                                v66 -= 2;
                                v65 += 2;
                                while (v66 != 0 && v74 >= 2) {
                                    // 0x4a5a35
                                    v67 = v73;
                                    v68 = v74;
                                    v69 = *(char *)v65;
                                    v70 = *(char *)(v65 + 1);
                                    v71 = function_4ba4e0(256 * (int64_t)v69 | (int64_t)v70);
                                    v72 = v68;
                                    v73 = v67;
                                    if (v71 != 0) {
                                        // 0x4a5a4f
                                        *(int64_t *)v67 = v71;
                                        v72 = v68 - 1;
                                        v73 = v67 + 8;
                                    }
                                    // 0x4a5a5b
                                    v74 = v72;
                                    v66 -= 2;
                                    v65 += 2;
                                }
                            }
                            goto lab_0x4a54c8;
                        } else {
                            // 0x4a56f2
                            v24 = (int64_t)&g21;
                            v22 = (int64_t)"unknown extension found: %d (ignoring)";
                            v23 = v26;
                            if (v28 != 11) {
                                goto lab_0x4a54ac;
                            } else {
                                // 0x4a56fc
                                function_49e770(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g14, "found supported point formats extension", (char)v26);
                                int64_t v75 = *v12; // 0x4a571e
                                int32_t * v76 = (int32_t *)(v75 + (int64_t)&g23); // 0x4a5722
                                *v76 = *v76 | 1;
                                unsigned char v77 = *(char *)(v21 + 4); // 0x4a5729
                                int64_t v78 = v77; // 0x4a5729
                                result = v78;
                                if (v27 != v78 + 1) {
                                    // 0x4a6289
                                    return result;
                                }
                                if (v77 != 0) {
                                    int64_t v79 = v21 + 5; // 0x4a573e
                                    char * v80 = (char *)v79;
                                    unsigned char v81 = *v80; // 0x4a5748
                                    int64_t v82 = v78; // 0x4a5750
                                    int64_t v83 = v79; // 0x4a5750
                                    char * v84 = v80; // 0x4a5750
                                    char v85 = v81; // 0x4a5750
                                    if (v81 < 2) {
                                      lab_0x4a576e:
                                        // 0x4a576e
                                        *(int32_t *)(v75 + (int64_t)&g4) = (int32_t)v85;
                                        char v86 = *v84; // 0x4a5774
                                        function_49e770(v1, 4, "/home/richard/code/mbedtls/library/ssl_srv.c", 315, "point format selected: %d", v86);
                                    } else {
                                        int64_t v87 = v82 - 1; // 0x4a575c
                                        while (v87 != 0) {
                                            int64_t v88 = v83 + 1; // 0x4a5758
                                            char * v89 = (char *)v88;
                                            unsigned char v90 = *v89; // 0x4a5766
                                            v82 = v87;
                                            v83 = v88;
                                            v84 = v89;
                                            v85 = v90;
                                            if (v90 < 2) {
                                                goto lab_0x4a576e;
                                            }
                                            v87 = v82 - 1;
                                        }
                                    }
                                }
                                goto lab_0x4a54c8;
                            }
                        }
                    }
                }
            } else {
                if (v28 == 23) {
                    int64_t v91 = function_49e770(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g18, "found extended master secret extension", (char)v26); // 0x4a5c1d
                    result = v91;
                    if (v27 != 0) {
                        // 0x4a6289
                        return result;
                    }
                    // 0x4a5c2a
                    if ((*(char *)(*v11 + 373) & 8) != 0) {
                        // 0x4a5c3a
                        if (*v14 != 0) {
                            // 0x4a5c47
                            *(int32_t *)(*v12 + (int64_t)&g25) = 1;
                        }
                    }
                    goto lab_0x4a54c8;
                } else {
                    if (v28 < 24) {
                        if (v28 == 16) {
                            // 0x4a5d50
                            function_49e770(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g20, "found alpn extension", (char)v26);
                            int64_t v92 = *(int64_t *)(*v11 + 328); // 0x4a5d7c
                            if (v92 != 0) {
                                if (v27 < 4) {
                                    function_4a4eca();
                                }
                                int64_t v93 = v21 + 4; // 0x4a5d78
                                unsigned char v94 = *(char *)(v21 + 5); // 0x4a5da0
                                if ((256 * (int64_t)*(char *)v93 || (int64_t)v94) != v27 - 2) {
                                    function_4a4eca();
                                }
                                int64_t str = *(int64_t *)v92; // 0x4a5dc2
                                result = v92;
                                if (str == 0) {
                                    // 0x4a6289
                                    return result;
                                }
                                uint64_t v95 = v93 + v27; // 0x4a5dbe
                                uint64_t v96 = v21 + 6; // 0x4a5dce
                                int32_t len = strlen((char *)str); // 0x4a5e00
                                int64_t v97 = len; // 0x4a5e00
                                result = v97;
                                if (v95 == v96) {
                                    // 0x4a6289
                                    return result;
                                }
                                int64_t v98 = v97; // 0x4a5e13
                                if (v95 < v96) {
                                    v98 = function_4a4eca();
                                }
                                char v99 = *(char *)v96; // 0x4a5e19
                                if (v99 == 0) {
                                    // 0x4a5e27
                                    return function_4a4eca();
                                }
                                int64_t v100 = v98; // 0x4a5380
                                char v101 = v99; // 0x4a5e46
                                int64_t v102 = v21 + 7; // 0x4a5380
                                while (true) {
                                    int64_t str2 = v102;
                                    int64_t v103 = v101;
                                    int64_t v104 = v100; // 0x4a5e5a
                                    if (v103 == v97) {
                                        int32_t memcmp_rc = memcmp((int64_t *)str2, (int64_t *)str, len); // 0x4a5e65
                                        v104 = memcmp_rc;
                                        if (memcmp_rc == 0) {
                                            // break -> 0x4a5e6e
                                            break;
                                        }
                                    }
                                    uint64_t v105 = str2 + v103; // 0x4a5e30
                                    result = v104;
                                    if (v95 == v105) {
                                        // 0x4a6289
                                        return result;
                                    }
                                    int64_t v106 = v104; // 0x4a5e40
                                    if (v95 < v105) {
                                        v106 = function_4a4eca();
                                    }
                                    // 0x4a5e46
                                    v101 = *(char *)v105;
                                    int64_t v107 = v106; // 0x4a5e51
                                    if (v101 == 0) {
                                        v107 = function_4a4eca();
                                    }
                                    // 0x4a5e57
                                    v100 = v107;
                                    v102 = v105 + 1;
                                }
                                // 0x4a5e6e
                                *(int64_t *)(v1 + 376) = str;
                            }
                            goto lab_0x4a54c8;
                        } else {
                            // 0x4a5540
                            v24 = (int64_t)&g21;
                            v22 = (int64_t)"unknown extension found: %d (ignoring)";
                            v23 = v26;
                            if (v28 != 22) {
                                goto lab_0x4a54ac;
                            } else {
                                int64_t v108 = function_49e770(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g17, "found encrypt then mac extension", (char)v26); // 0x4a5567
                                result = v108;
                                if (v27 != 0) {
                                    // 0x4a6289
                                    return result;
                                }
                                // 0x4a5574
                                if ((*(char *)(*v11 + 373) & 4) != 0) {
                                    // 0x4a5584
                                    if (*v14 != 0) {
                                        // 0x4a5591
                                        *(int32_t *)(*v15 + 148) = 1;
                                    }
                                }
                                goto lab_0x4a54c8;
                            }
                        }
                    } else {
                        if (v28 == 35) {
                            // 0x4a5840
                            function_49e770(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g19, "found session ticket extension", (char)v26);
                            int64_t v109; // bp+176, 0x4a5380
                            function_496ab0(&v109);
                            int64_t v110 = *v11; // 0x4a586f
                            if (*(int64_t *)(v110 + 168) == 0) {
                                goto lab_0x4a54c8;
                            } else {
                                // 0x4a5880
                                if (*(int64_t *)(v110 + 160) == 0) {
                                    goto lab_0x4a54c8;
                                } else {
                                    // 0x4a588e
                                    *(int32_t *)(*v12 + (int64_t)&g24) = 1;
                                    int64_t v111 = function_49e770(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", 457, "ticket length: %d", (char)v27); // 0x4a58bc
                                    if (v27 == 0) {
                                        goto lab_0x4a54c8;
                                    } else {
                                        // 0x4a58ca
                                        result = v111;
                                        if (*v13 != 0) {
                                            // 0x4a6289
                                            return result;
                                        }
                                        int64_t v112 = *v11; // 0x4a58e1
                                        int32_t v113 = v112; // 0x4a5900
                                        result = v112;
                                        if (v113 == 0) {
                                            // 0x4a6289
                                            return result;
                                        }
                                        int64_t v114 = function_497930(&v109, &v109, v21 + 4, v27, "ticket rejected: renegotiating"); // 0x4a5912
                                        result = v114;
                                        switch (v113) {
                                            case -0x7180: {
                                                return result;
                                            }
                                            case -0x6d80: {
                                                return result;
                                            }
                                            default: {
                                                // 0x4a593b
                                                function_49e8b0(v1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", 483, "mbedtls_ssl_ticket_parse", v112 & 0xffffffff);
                                                goto lab_0x4a54c8;
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            // 0x4a57aa
                            v24 = (int64_t)&g21;
                            v22 = (int64_t)"unknown extension found: %d (ignoring)";
                            v23 = v26;
                            if (v28 == (int32_t)&g27) {
                                // 0x4a57b7
                                v25 = v26;
                                int64_t v115 = function_49e770(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g11, "found renegotiation extension", v25); // 0x4a57d4
                                result = v115;
                                if (*v13 == 0) {
                                    return result;
                                } else {
                                    int64_t v116 = *(int64_t *)(v1 + 408); // 0x4a57e6
                                    if (v27 != v116 + 1) {
                                        goto lab_0x4a5804;
                                    } else {
                                        // 0x4a57f6
                                        result = v116;
                                        if (v116 == (int64_t)*(char *)(v21 + 4)) {
                                            return result;
                                        } else {
                                            goto lab_0x4a5804;
                                        }
                                    }
                                }
                            }
                            goto lab_0x4a54ac;
                        }
                    }
                }
            }
        }
    }
    // 0x4a56d0
    return function_4a4eb4();
  lab_0x4a54c8:
    // 0x4a54c8
    v18 -= v20;
    if (v18 < 4) {
        return function_4a4eb4();
    }
    // 0x4a54dc
    if (v18 == 0) {
        // 0x4a6289
        return -1;
    }
    // 0x4a54e5
    v19 = v20 + v21;
    unsigned char v117 = *(char *)(v19 + 1); // 0x4a54e9
    unsigned char v118 = *(char *)(v19 + 3); // 0x4a54fa
    v16 = 256 * (int64_t)*(char *)(v19 + 2) | (int64_t)v118;
    v20 = v16 + 4;
    v17 = 256 * (int64_t)*(char *)v19 | (int64_t)v117;
    result = v20;
    if (v20 > v18) {
        // 0x4a6289
        return result;
    }
    goto lab_0x4a5513;
  lab_0x4a54ac:
    // 0x4a54ac
    function_49e770(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", v24, (char *)v22, (char)v23);
    goto lab_0x4a54c8;
  lab_0x4a5804:
    // 0x4a5804
    function_49e770(v1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", 160, "non-matching renegotiation info", v25);
    if ((int32_t)function_49a900(v1) == 0) {
        // 0x4a5836
        return function_4a4eca();
    }
    function_4a4ecf();
    // 0x4a5836
    return function_4a4eca();
}

// Address range: 0x4b3b10 - 0x4b3bf0
int64_t function_4b3b10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 - 119); // 0x4b3b10
    unsigned char v2 = *v1; // 0x4b3b10
    *v1 = v2 / 4 | 64 * v2;
    bool v3; // 0x4b3b10
    if (!v3) {
        function_4b39af();
    }
    int64_t * v4 = (int64_t *)a5; // 0x4b3b27
    *v4 = *v4 | 3;
    int32_t v5 = 32; // 0x4b3b2b
    while (true) {
        // 0x4b3b4c
        int64_t v6; // bp+112, 0x4b3b10
        int64_t v7; // 0x4b3b10
        int64_t v8 = function_4b38b0(&v6, 8 * *(int64_t *)(v7 + 8), v7, v7); // 0x4b3b5f
        if ((int32_t)v8 != 0) {
            function_4b39af();
        }
        uint64_t v9 = function_4b0f10(&v6); // 0x4b3b74
        int64_t v10; // bp+16, 0x4b3b10
        int64_t v11 = function_4b0f10(&v10); // 0x4b3b81
        int64_t v12 = v11; // 0x4b3b89
        if (v9 > v11) {
            // 0x4b3b8b
            v12 = function_4b1220(&v6, v9 - v11);
            if ((int32_t)v12 != 0) {
                // break -> 0x4b3ba2
                break;
            }
        }
        // 0x4b3b30
        v5--;
        int64_t result = v12; // 0x4b3b33
        if (v5 == 0) {
          lab_0x4b3beb:
            // 0x4b3beb
            return result;
        }
        // 0x4b3b39
        if ((int32_t)function_4b1590(&v6, &v10) < 0) {
            // 0x4b3bb0
            if ((int32_t)function_4b1680(&v6, 1) >= 1) {
                // 0x4b3bc3
                int64_t v13; // bp+144, 0x4b3b10
                int64_t v14; // bp+48, 0x4b3b10
                int64_t v15 = function_4b2d10(&v6, &v6, &v14, v7, &v13); // 0x4b3bdb
                result = v15;
                if ((int32_t)v15 != 0) {
                    result = function_4b39af();
                    return result;
                } else {
                    return result;
                }
            }
        }
    }
    // 0x4b3ba2
    return function_4b39af();
}

// Address range: 0x4d17a0 - 0x4d18af
int64_t function_4d17a0(uint64_t a1, int64_t a2, int32_t a3) {
    // 0x4d17a0
    bool v1; // 0x4d17a0
    if (v1) {
        // 0x4d18b4
        int64_t result; // 0x4d17a0
        return result;
    }
    uint64_t v2 = a1 < 16 ? a1 : 16; // 0x4d17d7
    int64_t v3; // 0x4d17a0
    int64_t * v4 = (int64_t *)v3;
    int64_t v5; // bp+56, 0x4d17a0
    if (a3 == 0) {
        // 0x4d17e1
        *v4 = 0;
        *(int64_t *)(v3 + 8) = 0;
        memcpy(v4, (int64_t *)v3, (int32_t)v2);
        for (int64_t i = 0; i < 16; i++) {
            char * v6 = (char *)(v3 + 80 + i); // 0x4d1804
            *v6 = *v6 ^ *(char *)(i + v3);
        }
        // 0x4d1812
        int64_t v7; // bp+80, 0x4d17a0
        int64_t result2 = function_4b5070(a2, &v7, 16, &v7, &v5); // 0x4d1829
        if ((int32_t)result2 != 0) {
            // 0x4d18b4
            return result2;
        }
    }
    int64_t result3 = function_4b5070(a2, (int64_t *)v3, 16, v4, &v5); // 0x4d184b
    if ((int32_t)result3 != 0) {
        // 0x4d18b4
        return result3;
    }
    int64_t result4 = 0; // 0x4d185f
    if (v2 != 0) {
        uint64_t v8 = 0;
        int64_t v9 = 0;
        uint64_t v10 = v8 + 1; // 0x4d186b
        int64_t v11 = v10 & 0xffffffff; // 0x4d186b
        char v12 = *(char *)(v3 + 64 + v8 % 256); // 0x4d186e
        *(char *)(v9 + v3) = *(char *)(v9 + v3) ^ v12;
        uint64_t v13 = v10 % 256; // 0x4d187c
        result4 = v11;
        while (v2 > v13) {
            // 0x4d1868
            v8 = v11;
            v9 = v13;
            v10 = v8 + 1;
            v11 = v10 & 0xffffffff;
            v12 = *(char *)(v3 + 64 + v8 % 256);
            *(char *)(v9 + v3) = *(char *)(v9 + v3) ^ v12;
            v13 = v10 % 256;
            result4 = v11;
        }
    }
    // 0x4d1884
    if (a3 == 1) {
        // 0x4d18b4
        return result4;
    }
    char * v14 = (char *)(v3 + 15); // 0x4d18a0
    char v15 = *v14 + 1; // 0x4d18a0
    *v14 = v15;
    if (v15 != 0) {
        // 0x4d18b4
        return result4;
    }
    // 0x4d18a6
    return v3 - 1;
}
