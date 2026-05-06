/*
 * Targeted RetDec C for native executable gap queue batch 201.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4b3bf0-0x4b3cce rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d18b0-0x4d19b5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f000-0x3f230 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a5ef0-0x4a6a5e rank=- name=- kind=- bytes=- uncovered=-
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
extern int g22;
extern int g23;
extern int g24;
extern int g25;
extern int g26;
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
int64_t function_3ef89();
int64_t function_3efc3();
int64_t function_3eff4();
int64_t function_3f000(uint64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7);
int64_t function_496760();
int64_t function_498c50();
int64_t function_49a900();
int64_t function_49e770();
int64_t function_49ecc0();
int64_t function_49efb0();
int64_t function_49f0c0();
int64_t function_49f0e0();
int64_t function_49f110();
int64_t function_4a4ecf();
int64_t function_4a5810();
int64_t function_4a5ef0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);
int64_t function_4b1590();
int64_t function_4b1680();
int64_t function_4b1ac0();
int64_t function_4b26c0();
int64_t function_4b39af();
int64_t function_4b3ab1();
int64_t function_4b3bf0(uint64_t a1, int64_t a2);
int64_t function_4b5070();
int64_t function_4c4450();
int64_t function_4d17c8();
int64_t function_4d18a0();
int64_t function_4d18b0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_4d19aa(void);

// Address range: 0x3f000 - 0x3f22f
int64_t function_3f000(uint64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    // 0x3f000
    int64_t v1; // 0x3f000
    int64_t v2 = v1 + 8; // 0x3f00c
    int16_t v3 = *(int16_t *)(2 * ((a1 % 2 | (int64_t)&g19) + (int64_t)(0x10000 * (int32_t)v1 >> 16)) + v2); // 0x3f00c
    int64_t v4; // 0x3f000
    if (v3 < 0) {
        uint32_t v5 = (int32_t)v1; // 0x3f01f
        if ((int32_t)a4 + 2 <= v5) {
            function_3eff4();
        }
        int64_t v6; // 0x3f000
        if (v1 < a6) {
            // 0x3f05f
            v6 = v1 % 256;
        } else {
            // 0x3f038
            v6 = 0;
            char v7; // 0x3f000
            if ((v7 & 2) != 0) {
                // 0x3f042
                *(int32_t *)v1 = 23;
                return function_3e4a6();
            }
        }
        // 0x3f06a
        v4 = v6 << v1 % 64 | v1;
        if (v5 < 7) {
            // 0x3f07d
            return function_3efc3();
        }
    }
    int16_t v8 = *(int16_t *)(v1 + 360 + 2 * (v4 & (int64_t)(int32_t)&g18)); // 0x3f0b4
    int64_t v9 = v8; // 0x3f0b4
    int64_t result; // 0x3f000
    int64_t v10; // 0x3f000
    if (v8 < 0) {
        uint64_t v11 = 10;
        int64_t v12 = v11 + 1 & 0xffffffff; // 0x3f0d6
        uint16_t v13 = *(int16_t *)(2 * (((v4 >> v11 % 64) % 2 | (int64_t)&g19) + ((0x100000000 * v9 ^ -0x100000000) >> 32)) + v2); // 0x3f0ef
        int64_t v14 = v13; // 0x3f0ef
        v10 = v14;
        result = v12;
        while (v13 < 0) {
            // 0x3f0d3
            v11 = v12;
            v12 = v11 + 1 & 0xffffffff;
            v13 = *(int16_t *)(2 * (((v4 >> v11 % 64) % 2 | (int64_t)&g19) + ((0x100000000 * v14 ^ -0x100000000) >> 32)) + v2);
            v14 = v13;
            v10 = v14;
            result = v12;
        }
    } else {
        // 0x3f0c1
        v10 = v9 % 512;
        result = v8 / 512;
    }
    // 0x3f0fb
    if ((int32_t)v10 > 255) {
        uint64_t v15 = v10 % 512; // 0x3f210
        if (v15 == 256) {
            // 0x3f5b7
            return result;
        }
        // 0x3f222
        return v15 + 0xfffffeff & 0xffffffff;
    }
    int64_t result2 = result; // 0x3f11e
    if (v1 > a3) {
        result2 = function_3ef89();
    }
    // 0x3f124
    *(int32_t *)v1 = 24;
    return result2;
}

// Address range: 0x4a5ef0 - 0x4a6a5e
int64_t function_4a5ef0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    // 0x4a5ef0
    int64_t v1; // 0x4a5ef0
    uint64_t v2 = v1;
    int64_t v3 = v1 + 2; // 0x4a5ef0
    uint64_t v4 = v3 - a4; // 0x4a5ef7
    int64_t result; // 0x4a5ef0
    if (v2 > v4) {
        int64_t v5 = v3; // 0x4a5f02
        if (*(char *)v3 != 86) {
            v5 = function_4a5ef0(a1, a2, v4, a4, (int64_t)&g26, (int64_t)&g26, (int64_t)&g26, (int64_t)&g26, (int64_t)&g26, (int64_t)&g26, (int64_t)&g26, (int64_t)&g26);
        }
        // 0x4a5f04
        if (*(char *)(v5 + 1) != 0) {
            function_4a5ef0(a1, a2, v4, a4, (int64_t)&g26, (int64_t)&g26, (int64_t)&g26, (int64_t)&g26, (int64_t)&g26, (int64_t)&g26, (int64_t)&g26, (int64_t)&g26);
        }
        // 0x4a5f0a
        function_49e770(v1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", &g20, "received FALLBACK_SCSV", v1);
        int64_t v6 = (int64_t)*(char *)(v1 + 369); // 0x4a5f2f
        result = v6;
        if ((int64_t)*(int32_t *)(v1 + 24) < v6) {
          lab_0x4a6a43:
            // 0x4a6a43
            return result;
        }
    }
    int64_t v7; // 0x4a5ef0
    if (*(char *)v7 == 0) {
        // 0x4a5f4d
        if (*(char *)(v7 + 1) == -1) {
            // 0x4a67b2
            function_49e770(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g21, "received TLS_EMPTY_RENEGOTIATION_INFO ", v1);
            if (*(int32_t *)(v1 + 12) == 1) {
                // 0x4a6a32
                return function_4a5810();
            }
            // 0x4a67de
            *(int32_t *)(v1 + 400) = 1;
            goto lab_0x4a5f95;
        }
    }
    int64_t result2 = v7 + 2; // 0x4a5f57
    while (v2 > result2 - v1) {
        int64_t v8 = result2;
        if (*(char *)v8 == 0) {
            // 0x4a5f4d
            if (*(char *)(v8 + 1) == -1) {
                // 0x4a67b2
                function_49e770(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g21, "received TLS_EMPTY_RENEGOTIATION_INFO ", v1);
                if (*(int32_t *)(v1 + 12) == 1) {
                    // 0x4a6a32
                    return function_4a5810();
                }
                // 0x4a67de
                *(int32_t *)(v1 + 400) = 1;
                goto lab_0x4a5f95;
            }
        }
        // 0x4a5f57
        result2 = v8 + 2;
    }
    int32_t v9 = *(int32_t *)(v1 + 400); // 0x4a5f66
    if (v9 == 1) {
        // 0x4a6a43
        return result2;
    }
    char v10 = *(char *)(v1 + 372) & 48;
    if (v10 == 32) {
        // 0x4a6965
        return function_4a5810();
    }
    // 0x4a5f8b
    int64_t v11; // 0x4a5ef0
    if (!((v9 != 0 | *(int32_t *)(v1 + 12) != 1))) {
        int64_t v12; // 0x4a5ef0
        if (v10 == 0) {
            v12 = function_4a5810();
        }
        // 0x4a68b4
        v11 = v12;
        if ((int32_t)a7 == 1) {
            // 0x4a68cb
            return function_4a5810();
        }
    }
    goto lab_0x4a5f95;
  lab_0x4a60ac_3:;
    // 0x4a60ac
    int64_t v37; // 0x4a5fe6
    int64_t v47 = function_49f0c0(v37); // 0x4a60af
    int64_t * v18; // 0x4a5ef0
    int64_t v80 = *(int64_t *)(*v18 + (int64_t)&g17); // 0x4a60bb
    int64_t v51 = v80; // 0x4a60c5
    if (v80 == 0) {
        // 0x4a67a3
        v51 = *(int64_t *)(v1 + 208);
        goto lab_0x4a60cb;
    } else {
        goto lab_0x4a60cb;
    }
  lab_0x4a5fc0:;
    // 0x4a5fc0
    int64_t v36; // 0x4a5ef0
    int64_t v45 = v36;
    int64_t v35; // 0x4a5ef0
    int64_t v44 = v35;
    int64_t v31; // 0x4a5ef0
    int64_t v81 = v31 + 2; // 0x4a5fc0
    if (v2 <= v81 - v1) {
        // break -> 0x4a6150
        goto lab_0x4a6150;
    }
    // 0x4a5fc0
    int32_t * v25; // 0x4a5ef0
    int32_t v26 = *v25; // 0x4a5ef0
    int64_t v27 = v44; // 0x4a5ef0
    int64_t v32 = v81; // 0x4a5ef0
    int64_t v29 = v45; // 0x4a5ef0
    goto lab_0x4a5fd3;
  lab_0x4a61e0:;
    // 0x4a61e0
    int64_t v41; // 0x4a5ef0
    int64_t v40; // 0x4a5ef0
    int64_t v38; // 0x4a5ff7
    function_49e770(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)v40, (char *)v41, v38);
    v35 = 1;
    v36 = v38;
    goto lab_0x4a5fc0;
  lab_0x4a604d:;
    char v42; // 0x4a6037
    if ((v42 & 64) == 0) {
        goto lab_0x4a6068;
    } else {
        // 0x4a6051
        v40 = (int64_t)&g12;
        v41 = (int64_t)"ciphersuite mismatch: rc4";
        if (*(int32_t *)(v37 + 16) == 42) {
            goto lab_0x4a61e0;
        } else {
            goto lab_0x4a6068;
        }
    }
  lab_0x4a6068:
    // 0x4a6068
    if ((int32_t)function_49f0e0(v37) == 0) {
        goto lab_0x4a6092;
    } else {
        int64_t v82 = *(int64_t *)(*v18 + (int64_t)&g15); // 0x4a6078
        v40 = (int64_t)&g13;
        v41 = (int64_t)"ciphersuite mismatch: no common elliptic curve";
        if (v82 == 0) {
            goto lab_0x4a61e0;
        } else {
            // 0x4a6088
            v40 = (int64_t)&g13;
            v41 = (int64_t)"ciphersuite mismatch: no common elliptic curve";
            if (*(int64_t *)v82 == 0) {
                goto lab_0x4a61e0;
            } else {
                goto lab_0x4a6092;
            }
        }
    }
  lab_0x4a6092:
    // 0x4a6092
    if ((int32_t)function_49f110(v37) == 0) {
        goto lab_0x4a60ac_3;
    }
    // 0x4a609e
    if (*(int64_t *)(v1 + 120) != 0) {
        goto lab_0x4a60ac_3;
    }
    // 0x4a61a7
    v40 = (int64_t)&g14;
    v41 = (int64_t)"ciphersuite mismatch: no pre-shared key";
    if (*(int64_t *)(v1 + 296) != 0) {
        // 0x4a61b1
        v40 = (int64_t)&g14;
        v41 = (int64_t)"ciphersuite mismatch: no pre-shared key";
        if (*(int64_t *)(v1 + 312) != 0) {
            // 0x4a61bb
            v40 = (int64_t)&g14;
            v41 = (int64_t)"ciphersuite mismatch: no pre-shared key";
            if (*(int64_t *)(v1 + 320) != 0) {
                // 0x4a61c5
                v40 = (int64_t)&g14;
                v41 = (int64_t)"ciphersuite mismatch: no pre-shared key";
                if (*(int64_t *)(v1 + 304) != 0) {
                    goto lab_0x4a60ac_3;
                }
            }
        }
    }
    goto lab_0x4a61e0;
  lab_0x4a5f95:;
    int32_t * v13 = (int32_t *)(v1 + 24); // 0x4a5f95
    int64_t v14 = *(int64_t *)(8 * (int64_t)*v13 + v11); // 0x4a5f99
    int32_t v15 = *(int32_t *)v14; // 0x4a5f9d
    if (v15 == 0) {
        // 0x4a68d0
        int64_t v16; // 0x4a5ef0
        function_49e770(v1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g23, "got no ciphersuites in common", v16);
        function_49a900(v1);
        return function_4a4ecf();
    }
    char * v17 = (char *)(v1 + 372);
    v18 = (int64_t *)(v1 + 96);
    int32_t v19 = v15; // 0x4a5ef0
    int64_t v20 = 0; // 0x4a5ef0
    int64_t v21 = v14; // 0x4a5ef0
    int64_t * v22; // 0x4a5ef0
    while (true) {
        int64_t v23 = v21 + 4;
        int32_t * v24 = (int32_t *)v23;
        v25 = (int32_t *)v21;
        v26 = v19;
        v27 = v20;
        int64_t v28; // 0x4a5ef0
        v29 = v28;
        while (true) {
          lab_0x4a5fd3:;
            int64_t v30 = v29;
            v31 = v32;
            int64_t v33 = v27;
            uint32_t v34 = v26; // 0x4a5fd3
            v35 = v33;
            v36 = v30;
            if (*(char *)v31 != (char)(v34 / 256)) {
                goto lab_0x4a5fc0;
            } else {
                // 0x4a5fe0
                v35 = v33;
                v36 = v30;
                if (*(char *)(v31 + 1) != (char)v34) {
                    goto lab_0x4a5fc0;
                } else {
                    // 0x4a5fe6
                    v37 = function_49efb0(v34);
                    if (v37 == 0) {
                        // 0x4a6a06
                        function_49e770(v1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g9, "should never happen", v30);
                        return function_4a4ecf();
                    }
                    // 0x4a5ff7
                    v22 = (int64_t *)(v37 + 8);
                    v38 = *v22;
                    function_49e770(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g10, "trying ciphersuite: %s", v38);
                    uint32_t v39 = *v13; // 0x4a601d
                    v40 = (int64_t)&g11;
                    v41 = (int64_t)"ciphersuite mismatch: version";
                    if ((int64_t)*(int32_t *)(v37 + 32) > (int64_t)v39) {
                        goto lab_0x4a61e0;
                    } else {
                        // 0x4a602a
                        v40 = (int64_t)&g11;
                        v41 = (int64_t)"ciphersuite mismatch: version";
                        if (*(int32_t *)(v37 + 40) < v39) {
                            goto lab_0x4a61e0;
                        } else {
                            // 0x4a6034
                            v42 = *v17;
                            if ((v42 & 2) == 0) {
                                goto lab_0x4a604d;
                            } else {
                                // 0x4a6042
                                if ((*(char *)(v37 + 44) & 4) != 0) {
                                    goto lab_0x4a5fc0;
                                } else {
                                    goto lab_0x4a604d;
                                }
                            }
                        }
                    }
                }
            }
        }
      lab_0x4a6150:;
        int32_t v43 = *v24; // 0x4a6160
        v19 = v43;
        v20 = v44;
        v21 = v23;
        v28 = v45;
        if (v43 == 0) {
            // break -> 0x4a616b
            break;
        }
    }
    // 0x4a616b
    if ((int32_t)v44 == 0) {
        // 0x4a68d0
        function_49e770(v1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g23, "got no ciphersuites in common", v45);
        function_49a900(v1);
        return function_4a4ecf();
    }
    // 0x4a6173
    function_49e770(v1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g22, "got ciphersuites in common, but none of them usable", v45);
    function_49a900(v1);
    return function_4a4ecf();
  lab_0x4a60cb:;
    int32_t v46 = v47; // 0x4a60cb
    int64_t v48; // 0x4a5ef0
    int64_t v49; // 0x4a5ef0
    if (v46 != 0) {
        int64_t v50 = function_49e770(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g2, "ciphersuite requires certificate", v38); // 0x4a6424
        result = v50;
        if (v51 == 0) {
            goto lab_0x4a6a43;
        } else {
            // 0x4a648c
            v49 = v51;
            v48 = 0;
            goto lab_0x4a648c_2;
        }
    } else {
        goto lab_0x4a60d4;
    }
  lab_0x4a60d4:;
    int64_t v52 = *v22; // 0x4a60d4
    function_49e770(v1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", &g24, "selected ciphersuite: %s", v52);
    *(int32_t *)(*(int64_t *)(v1 + 88) + 8) = *v25;
    *(int64_t *)*(int64_t *)(v1 + 128) = v37;
    int32_t * v53 = (int32_t *)(v1 + 8); // 0x4a6111
    *v53 = *v53 + 1;
    if ((*v17 & 2) != 0) {
        // 0x4a6976
        function_496760(v1);
        // 0x4a6122
        function_49e770(v1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", &g25, "<= parse client hello", v52);
        return function_4a4ecf();
    }
    // 0x4a6122
    function_49e770(v1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", &g25, "<= parse client hello", v52);
    return function_4a4ecf();
  lab_0x4a648c_2:;
    int64_t v54 = v48;
    int64_t v55 = v49;
    int64_t * v56 = (int64_t *)v55; // 0x4a648c
    int64_t v57 = *v56; // 0x4a648c
    function_49ecc0(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g3, "candidate certificate chain, certificate", v57);
    int64_t * v58 = (int64_t *)(v55 + 8); // 0x4a64b0
    int64_t v59; // 0x4a5ef0
    int64_t v60; // 0x4a5ef0
    int64_t v61; // 0x4a5ef0
    int64_t v62; // 0x4a5ef0
    int64_t v63; // 0x4a5ef0
    int64_t v64; // 0x4a5ef0
    int64_t v65; // 0x4a5ef0
    int64_t v66; // 0x4a5ef0
    int32_t v67; // 0x4a65aa
    if ((int32_t)function_4c4450(*v58, v47 & 0xffffffff) == 0) {
        int64_t v68 = function_49e770(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g4, "certificate mismatch: key type", v57); // 0x4a647a
        v59 = v54;
        v66 = v68;
        goto lab_0x4a647f;
    } else {
        // 0x4a64c0
        int64_t v69; // bp+172, 0x4a5ef0
        int64_t v70 = function_498c50(*v56, v37, 1, &v69); // 0x4a64d4
        v64 = (int64_t)&g5;
        v61 = (int64_t)"certificate mismatch: (extended) key usage extension";
        v62 = v57;
        v60 = v54;
        if ((int32_t)v70 != 0) {
            goto lab_0x4a6522;
        } else {
            if (v46 == 4) {
                int64_t v71 = *(int64_t *)(*v18 + (int64_t)&g15); // 0x4a659f
                v67 = *(int32_t *)*(int64_t *)(*v58 + 8);
                int64_t v72 = *(int64_t *)v71; // 0x4a65ac
                v64 = (int64_t)&g6;
                v61 = (int64_t)"certificate mismatch: elliptic curve";
                v62 = v57;
                v60 = v54;
                v63 = v71;
                v65 = v72;
                if (v72 == 0) {
                    goto lab_0x4a6522;
                } else {
                    goto lab_0x4a65b8;
                }
            } else {
                goto lab_0x4a64f3;
            }
        }
    }
  lab_0x4a647f:;
    int64_t v73 = v59;
    int64_t v74 = *(int64_t *)(v55 + 16); // 0x4a647f
    v49 = v74;
    v48 = v73;
    int64_t v75; // 0x4a5ef0
    int64_t v76; // 0x4a5ef0
    if (v74 == 0) {
        // 0x4a6869
        result = v66;
        if (v73 == 0) {
            goto lab_0x4a6a43;
        } else {
            // 0x4a6889
            v76 = *(int64_t *)v73;
            v75 = v73;
            goto lab_0x4a668d;
        }
    } else {
        goto lab_0x4a648c_2;
    }
  lab_0x4a6522:
    // 0x4a6522
    v59 = v60;
    v66 = function_49e770(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)v64, (char *)v61, v62);
    goto lab_0x4a647f;
  lab_0x4a64f3:;
    int64_t v77 = *v56;
    v76 = v77;
    v75 = v55;
    if (*v13 > 2) {
        goto lab_0x4a668d;
    } else {
        // 0x4a64fd
        v76 = v77;
        v75 = v55;
        if (*(int32_t *)(v77 + (int64_t)&g1) == 4) {
            goto lab_0x4a668d;
        } else {
            // 0x4a650f
            v64 = (int64_t)&g7;
            v61 = (int64_t)"certificate not preferred: sha-2 with pre-TLS 1.2 client";
            v62 = v77;
            v60 = v54 == 0 ? v55 : v54;
            goto lab_0x4a6522;
        }
    }
  lab_0x4a65b8:
    // 0x4a65b8
    if (*(int32_t *)v65 == v67) {
        goto lab_0x4a64f3;
    } else {
        int64_t v78 = v63 + 8; // 0x4a65c0
        int64_t v79 = *(int64_t *)v78; // 0x4a65c4
        v64 = (int64_t)&g6;
        v61 = (int64_t)"certificate mismatch: elliptic curve";
        v62 = v57;
        v60 = v54;
        v63 = v78;
        v65 = v79;
        if (v79 != 0) {
            goto lab_0x4a65b8;
        } else {
            goto lab_0x4a6522;
        }
    }
  lab_0x4a668d:
    // 0x4a668d
    *(int64_t *)(*v18 + (int64_t)&g16) = v75;
    function_49ecc0(v1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g8, "selected certificate chain, certificate", v76);
    goto lab_0x4a60d4;
}

// Address range: 0x4b3bf0 - 0x4b3ccd
int64_t function_4b3bf0(uint64_t a1, int64_t a2) {
    // 0x4b3bf0
    int64_t v1; // 0x4b3bf0
    uint64_t v2 = v1;
    int64_t v3; // bp+112, 0x4b3bf0
    if ((int32_t)function_4b1590(&v3, v1) != 0) {
        // 0x4b3c2b
        if ((int32_t)function_4b1680(&v3, 1) != 0) {
            // 0x4b3c3e
            int64_t v4; // bp+16, 0x4b3bf0
            int64_t v5 = (int64_t)&v4;
            int64_t v6 = 1; // 0x4b3c47
            if (v2 >= 2) {
                while ((int32_t)function_4b1590(&v3, v5) != 0) {
                    // 0x4b3c50
                    int64_t v7; // bp+80, 0x4b3bf0
                    int64_t v8 = function_4b1ac0(&v7, &v3, &v3); // 0x4b3c5d
                    int64_t result = v8; // 0x4b3c64
                    if ((int32_t)v8 != 0) {
                        // 0x4b3cd5
                        return result;
                    }
                    int64_t v9 = function_4b26c0(&v3, &v7, v1); // 0x4b3c73
                    result = v9;
                    if ((int32_t)v9 != 0) {
                        // 0x4b3cd5
                        return result;
                    }
                    // 0x4b3c7c
                    if ((int32_t)function_4b1680(&v3, 1) == 0) {
                        // break -> 0x4b3cab
                        break;
                    }
                    int64_t v10 = v6 + 1; // 0x4b3c8f
                    v6 = v10;
                    if (v10 == v2) {
                        // break -> 0x4b3cab
                        break;
                    }
                }
            }
            int64_t result2 = function_4b1590(&v3, v5); // 0x4b3cb5
            if ((int32_t)result2 == 0) {
                // 0x4b3cbe
                return function_4b1680(&v3, 1);
            }
            // 0x4b3cd5
            return result2;
        }
    }
    if (a2 + 1 < a1) {
        function_4b3ab1();
    }
    // 0x4b3c13
    return function_4b39af();
}

// Address range: 0x4d18b0 - 0x4d1951
int64_t function_4d18b0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x4d18b0
    if ((char)(a3 / 256) > (char)a3) {
        function_4d18a0();
    }
    if (a4 != 0) {
        function_4d17c8();
    }
    int64_t v1; // 0x4d18b0
    *(char *)(v1 + 15) = 0;
    int64_t v2 = v1 - 1; // 0x4d18d7
    // 0x4d18c0
    int64_t v3; // 0x4d18b0
    while ((char)v3 - (char)v2 < (char)v3) {
        // 0x4d18d0
        *(char *)(v2 + 15) = 0;
        v2--;
    }
    // 0x4d18e2
    int64_t v4; // bp+56, 0x4d18b0
    int64_t v5 = function_4b5070(a5, v3, 16, v3, &v4); // 0x4d18f7
    if ((int32_t)v5 != 0) {
        // 0x4d1940
        return v5 & 0xffffffff;
    }
    for (int64_t i = 0; i < 16; i++) {
        char * v6 = (char *)(v3 + 80 + i); // 0x4d190c
        *v6 = *v6 ^ *(char *)(i + v3);
    }
    // 0x4d191a
    int64_t v7; // bp+80, 0x4d18b0
    int32_t v8; // 0x4d18b0
    memcpy((int64_t *)v3, &v7, v8);
    // 0x4d1940
    return v5 & 0xffffffff;
}

// Address range: 0x4d19aa - 0x4d19ad
int64_t function_4d19aa(void) {
    // 0x4d19aa
    int64_t result; // 0x4d19aa
    return result;
}
