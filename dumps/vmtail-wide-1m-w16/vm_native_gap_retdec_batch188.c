/*
 * Targeted RetDec C for native executable gap queue batch 188.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4d5a50-0x4d7e3c rank=37 name=fcn.004d5a50 kind=r2_discovered bytes=9196 uncovered=9196
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

int64_t function_4d4f10();
int64_t function_4d5a50(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_4d8f60();
int64_t function_4d91a0();

// Address range: 0x4d5a50 - 0x4d7e3b
int64_t function_4d5a50(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x4d5a50
    int128_t v1; // 0x4d5a50
    int128_t v2 = v1;
    int32_t v3; // 0x4d5a50
    uint32_t v4 = v3;
    uint32_t v5 = v3;
    int128_t v6; // bp-1528, 0x4d5a50
    int64_t v7 = (int64_t)&v6; // 0x4d5a60
    char * v8 = (char *)(a1 + 137); // 0x4d5a6c
    int64_t v9 = (int64_t)*v8; // 0x4d5a6c
    int64_t v10 = a1 + 136; // 0x4d5a78
    char * v11 = (char *)v10; // 0x4d5a78
    unsigned char v12 = *v11; // 0x4d5a78
    int64_t v13 = v12; // 0x4d5a78
    int64_t v14 = v13; // 0x4d5a78
    __readfsqword(40);
    int64_t v15 = 64 * v9 + v13; // 0x4d5a99
    int64_t v16; // 0x4d5a50
    int64_t v17; // 0x4d5a50
    int64_t * v18; // 0x4d5a50
    int64_t v19; // 0x4d5a50
    int64_t v20; // 0x4d5a50
    int64_t v21; // 0x4d5a50
    int64_t v22; // 0x4d5a50
    int64_t v23; // 0x4d5a50
    int64_t v24; // 0x4d5a50
    int64_t v25; // 0x4d5a50
    int64_t v26; // 0x4d5a50
    int64_t v27; // 0x4d5a50
    int64_t v28; // 0x4d5ab0
    int64_t v29; // 0x4d5abc
    int64_t v30; // 0x4d5ac6
    if (v15 == 0) {
        if (a3 > (int64_t)&g25) {
            // 0x4d62df
            v19 = *(int64_t *)(a1 + 64);
            goto lab_0x4d62e4;
        } else {
            int64_t v31 = v7 + 48; // 0x4d6bad
            v18 = (int64_t *)v31;
            v17 = v31;
            v20 = a1;
            goto lab_0x4d6bad;
        }
    } else {
        uint64_t v32 = (int64_t)&g25 - v15; // 0x4d5aaa
        v28 = v32 > a3 ? a3 : v32;
        v29 = a1 + 32;
        v30 = a1 + 72;
        v22 = v9;
        v24 = v28;
        v21 = a2;
        if (v12 != 0) {
            uint64_t v33 = 64 - v13; // 0x4d7b8f
            int64_t v34 = v33 > v28 ? v28 : v33; // 0x4d7b95
            memcpy((int64_t *)(v30 + v13), (int64_t *)a2, (int32_t)v34);
            int64_t v35 = v34 + a2; // 0x4d7baa
            uint64_t v36 = v34 + (int64_t)*v11; // 0x4d7bb6
            int64_t v37 = v28 - v34; // 0x4d7bb9
            *v11 = (char)v36;
            if (v37 != 0) {
                int64_t v38 = 0x100000000 * v30 >> 32; // 0x4d7cab
                int64_t v39 = *(int64_t *)(a1 + 64); // 0x4d7cb0
                char v40 = *(char *)(a1 + 138); // 0x4d7ccf
                function_4d8f60(v29, v38, 64, v39, (int64_t)(v40 | (char)(*v8 == 0)));
                int128_t v41 = __asm_pxor(v2, v2); // 0x4d7ce3
                *v11 = 0;
                __asm_movups(*(int128_t *)v30, v41);
                int64_t v42 = (int64_t)*v8 + 1; // 0x4d7cff
                *v8 = (char)v42;
                __asm_movups(*(int128_t *)(v38 + 16), v41);
                __asm_movups(*(int128_t *)(v38 + 32), v41);
                __asm_movups(*(int128_t *)(v38 + 48), v41);
                v22 = v42;
                v24 = v37;
                v21 = v35;
                goto lab_0x4d5ad9;
            } else {
                // 0x4d7bcd
                v16 = v37 & 0xffffffff;
                v23 = v36 % 256;
                v27 = 0;
                v26 = v35;
                v25 = v37;
                goto lab_0x4d5b6d;
            }
        } else {
            goto lab_0x4d5ad9;
        }
    }
  lab_0x4d5ad9:;
    int64_t v43 = v24;
    if (v43 < 65) {
        int64_t v44 = v43 & 0xffffffff;
        v16 = v44;
        v23 = 0;
        v27 = v44;
        v26 = v21;
        v25 = v43;
    } else {
        int64_t v45 = (v43 - 1 & -64) + v21; // 0x4d5afb
        int64_t v46 = *(int64_t *)(a1 + 64); // 0x4d5b02
        char v47 = *(char *)(a1 + 138); // 0x4d5b13
        int64_t v48 = v21 + 64; // 0x4d5b1e
        function_4d8f60(v29, v21, 64, v46, (int64_t)(v47 | (char)((char)v22 == 0)));
        int64_t v49 = (int64_t)*v8 + 1; // 0x4d5b34
        *v8 = (char)v49;
        while (v48 != v45) {
            int64_t v50 = v48;
            v46 = *(int64_t *)(a1 + 64);
            v47 = *(char *)(a1 + 138);
            v48 = v50 + 64;
            function_4d8f60(v29, v50, 64, v46, (int64_t)(v47 | (char)((char)v49 == 0)));
            v49 = (int64_t)*v8 + 1;
            *v8 = (char)v49;
        }
        int64_t v51 = (int64_t)*v11; // 0x4d5b44
        uint64_t v52 = v43 - 64 - (v43 - 65 & -64); // 0x4d5b57
        uint64_t v53 = 64 - v51; // 0x4d5b61
        int64_t v54 = v52 > v53 ? v53 : v52; // 0x4d5b67
        int64_t v55 = v54 & 0xffffffff;
        v16 = v55;
        v23 = v51;
        v27 = v55;
        v26 = v45;
        v25 = v54;
    }
    goto lab_0x4d5b6d;
  lab_0x4d62e4:;
    int64_t v238 = v7 + 48;
    int64_t * v239 = (int64_t *)v238;
    int64_t * v240 = (int64_t *)(v7 + 40); // 0x4d6328
    int64_t * v241 = (int64_t *)(v7 + 112); // 0x4d635d
    int64_t v242 = v7 + 200;
    int64_t v243 = v7 + 264;
    int64_t v244 = v7 + 160;
    char * v245 = (char *)(v7 + 266);
    int64_t * v246 = (int64_t *)(v7 + 192);
    int128_t * v247 = (int128_t *)v244;
    int128_t * v248 = (int128_t *)(v7 + 176);
    int128_t * v249 = (int128_t *)v242;
    int128_t * v250 = (int128_t *)(v7 + 216);
    int128_t * v251 = (int128_t *)(v7 + 232);
    int128_t * v252 = (int128_t *)(v7 + 248);
    int64_t * v253 = (int64_t *)(v7 + 72);
    char * v254 = (char *)(v7 + 265);
    char * v255 = (char *)v243;
    int64_t v256 = v7 + 496;
    int64_t v257 = v7 + (int64_t)&g4;
    int64_t * v258 = (int64_t *)v257;
    int64_t v259 = v7 + (int64_t)&g13;
    int128_t * v260 = (int128_t *)v256;
    int64_t v261 = v7 + (int64_t)&g5;
    int128_t * v262 = (int128_t *)v261;
    int64_t v263 = v7 + (int64_t)&g7;
    int128_t * v264 = (int128_t *)v263;
    int64_t v265 = v7 + (int64_t)&g9;
    int128_t * v266 = (int128_t *)v265;
    int64_t v267 = v7 + (int64_t)&g8;
    int128_t * v268 = (int128_t *)v267;
    int64_t v269 = v7 + (int64_t)&g11;
    int128_t * v270 = (int128_t *)v269;
    int64_t v271 = v7 + (int64_t)&g10;
    int128_t * v272 = (int128_t *)v271;
    int64_t v273 = v7 + (int64_t)&g12;
    int128_t * v274 = (int128_t *)v273;
    int64_t v275 = v7 + (int64_t)&g1;
    int128_t * v276 = (int128_t *)v275;
    int128_t * v277 = (int128_t *)v257;
    int32_t * v278 = (int32_t *)(v7 + 500);
    int32_t * v279 = (int32_t *)v256;
    int64_t v280 = v7 + 504;
    int32_t * v281 = (int32_t *)v280;
    int32_t * v282 = (int32_t *)(v7 + 508);
    int64_t v283 = v7 + 96;
    int32_t * v284 = (int32_t *)v275;
    int64_t v285 = v7 + 16;
    int32_t * v286 = (int32_t *)v285;
    int64_t v287 = v7 + 24;
    int32_t * v288 = (int32_t *)v287;
    char * v289 = (char *)v287;
    int64_t v290 = v7 + 80;
    int64_t v291 = v7 + (int64_t)&g3;
    int32_t * v292 = (int32_t *)v291;
    int32_t * v293 = (int32_t *)(v7 + (int64_t)&g2);
    int64_t * v294 = (int64_t *)(v7 + 88);
    int64_t * v295 = (int64_t *)(v7 + 128);
    int64_t v296 = v7 + 136;
    int64_t v297 = v7 + 148;
    int64_t v298 = v7 + 144;
    int32_t * v299 = (int32_t *)(v7 + (int64_t)"GNU");
    int32_t * v300 = (int32_t *)(v7 + 124);
    int64_t * v301 = (int64_t *)(v7 + 56);
    int64_t v302 = v7 + 424;
    int64_t * v303 = (int64_t *)v285;
    int128_t * v304 = (int128_t *)(v7 + 512);
    char * v305 = (char *)v259;
    char * v306 = (char *)(v7 + (int64_t)&g14);
    int128_t * v307 = (int128_t *)(v7 + 384);
    int64_t v308 = v7 + (int64_t)&g6;
    int128_t * v309 = (int128_t *)v308;
    int128_t * v310 = (int128_t *)(v7 + 400);
    int128_t * v311 = (int128_t *)(v7 + 416);
    int128_t * v312 = (int128_t *)(v7 + 432);
    int128_t * v313 = (int128_t *)(v7 + 448);
    int128_t * v314 = (int128_t *)(v7 + 464);
    int128_t * v315 = (int128_t *)(v7 + 480);
    int64_t v316 = v7 + 32;
    int32_t * v317 = (int32_t *)v316;
    char * v318 = (char *)v275;
    char * v319 = (char *)v316;
    int64_t * v320 = (int64_t *)(v7 + 8);
    int64_t * v321 = (int64_t *)(v7 - 16);
    int64_t v322 = v7 + 688;
    int64_t * v323 = (int64_t *)v287;
    int64_t * v324 = (int64_t *)(v7 + (int64_t)&g15);
    int64_t * v325 = (int64_t *)(v7 + (int64_t)&g16);
    int128_t * v326 = (int128_t *)(v7 + (int64_t)&g17);
    int128_t * v327 = (int128_t *)(v7 + (int64_t)&g18);
    int128_t * v328 = (int128_t *)(v7 + (int64_t)&g19);
    int128_t * v329 = (int128_t *)(v7 + (int64_t)&g20);
    int128_t v143; // 0x4d5a50
    int128_t v330 = v143;
    int64_t v331 = 1024 * v19; // 0x4d631d
    int64_t v332 = 1 << (llvm_ctlz_i64(*v239 | 1, true) ^ 63);
    *v240 = v332;
    int64_t v333 = v332; // 0x4d6330
    int64_t v334 = v332; // 0x4d6330
    int64_t v335; // 0x4d6338
    if ((v332 - 1 & v331) != 0) {
        v335 = v333 / 2;
        v333 = v335;
        while ((v335 - 1 & v331) != 0) {
            // 0x4d6338
            v335 = v333 / 2;
            v333 = v335;
        }
        // 0x4d6344
        *v240 = v335;
        v334 = v335;
    }
    uint64_t v336 = v334; // 0x4d6349
    char * v337 = (char *)(a1 + 138); // 0x4d634e
    unsigned char v338 = *v337; // 0x4d634e
    int64_t v339 = v338; // 0x4d634e
    *v241 = v336 / 1024;
    int64_t * v340; // 0x4d5a50
    int64_t v341; // 0x4d5a50
    int64_t v342; // 0x4d5a50
    int64_t v343; // 0x4d5a50
    int64_t v344; // 0x4d5a50
    int64_t v345; // 0x4d5a50
    int64_t v346; // 0x4d5a50
    int64_t v347; // 0x4d5a50
    uint64_t v348; // 0x4d5a50
    int64_t v349; // 0x4d5a50
    int64_t v350; // 0x4d5a50
    int64_t v351; // 0x4d5a50
    uint64_t v352; // 0x4d5a50
    char v353; // 0x4d5a50
    int64_t v354; // 0x4d5a50
    int64_t v355; // 0x4d5a50
    int64_t v356; // 0x4d5a50
    int64_t v357; // 0x4d5a50
    int64_t v358; // 0x4d5a50
    int64_t v359; // 0x4d5a50
    uint64_t v360; // 0x4d5a50
    int64_t v361; // 0x4d5a50
    int64_t v362; // 0x4d5a50
    int64_t v363; // 0x4d5a50
    int64_t v364; // 0x4d5a50
    int64_t v365; // 0x4d7060
    int64_t v366; // 0x4d7075
    int128_t * v367; // 0x4d636e
    int128_t v368; // 0x4d636e
    int128_t * v369; // 0x4d6374
    int128_t v370; // 0x4d6374
    int128_t v371; // 0x4d637a
    int64_t v372; // 0x4d5a50
    int128_t v373; // 0x4d7310
    int64_t * v374; // 0x4d5a50
    int128_t v375; // 0x4d731d
    int128_t v376; // 0x4d7326
    int128_t v377; // 0x4d7337
    uint64_t v378; // 0x4d735d
    char * v379; // 0x4d7367
    int64_t v380; // 0x4d7367
    int64_t v381; // 0x4d6481
    uint32_t v382; // 0x4d6485
    int64_t v383; // 0x4d6401
    int64_t v384; // 0x4d6432
    int64_t v385; // 0x4d644a
    int64_t v386; // 0x4d5a50
    int64_t v387; // 0x4d7a8d
    int64_t v388; // 0x4d5a50
    int64_t v389; // 0x4d7aa0
    uint32_t v390; // 0x4d7aab
    unsigned char v391; // 0x4d6410
    int64_t v392; // 0x4d6419
    int64_t v393; // 0x4d6432
    int64_t v394; // 0x4d644a
    int64_t v395; // 0x4d6459
    int128_t v396; // 0x4d7394
    int128_t v397; // 0x4d73a2
    uint64_t v398; // 0x4d739f
    int128_t v399; // 0x4d73cf
    unsigned char v400; // 0x4d5a50
    int128_t v401; // 0x4d73e7
    int64_t v402; // 0x4d73f0
    int128_t v403; // 0x4d73ff
    int128_t v404; // 0x4d7403
    int128_t v405; // 0x4d7414
    int128_t v406; // 0x4d7419
    int128_t v407; // 0x4d742e
    int128_t v408; // 0x4d743f
    int128_t v409; // 0x4d7450
    int128_t v410; // 0x4d7461
    int128_t v411; // 0x4d746a
    uint32_t v412; // 0x4d74a8
    uint32_t v413; // 0x4d74af
    uint32_t v414; // 0x4d74b6
    uint32_t v415; // 0x4d74bd
    uint32_t v416; // 0x4d756f
    unsigned char v417; // 0x4d757d
    uint32_t v418; // 0x4d75b9
    unsigned char v419; // 0x4d75cc
    unsigned char v420; // 0x4d75ed
    unsigned char v421; // 0x4d7605
    uint32_t v422; // 0x4d7618
    uint32_t v423; // 0x4d7624
    int128_t v424; // 0x4d762e
    unsigned char v425; // 0x4d768d
    int64_t v426; // 0x4d7695
    int64_t v427; // 0x4d7695
    int128_t v428; // 0x4d76b7
    int128_t v429; // 0x4d76c0
    int64_t v430; // 0x4d76d8
    unsigned char v431; // 0x4d76e2
    int64_t v432; // 0x4d76ee
    uint64_t v433; // 0x4d76fd
    uint64_t v434; // 0x4d729e
    int64_t v435; // 0x4d72aa
    int64_t v436; // 0x4d72cf
    int64_t v437; // 0x4d5a50
    unsigned char v438; // 0x4d64a7
    int64_t v439; // 0x4d64ca
    int64_t v440; // 0x4d64d2
    int64_t v441; // 0x4d64d5
    int128_t v442; // 0x4d64e2
    int128_t v443; // 0x4d64ed
    int128_t v444; // 0x4d64fe
    int128_t v445; // 0x4d650b
    int128_t v446; // 0x4d651c
    int128_t v447; // 0x4d652d
    int128_t v448; // 0x4d6554
    int128_t v449; // 0x4d6565
    int128_t v450; // 0x4d656e
    int128_t v451; // 0x4d6587
    int128_t v452; // 0x4d6598
    uint32_t v453; // 0x4d65d5
    uint32_t v454; // 0x4d65dc
    uint32_t v455; // 0x4d65e3
    uint32_t v456; // 0x4d65ea
    uint32_t v457; // 0x4d6651
    unsigned char v458; // 0x4d66c3
    uint32_t v459; // 0x4d66d8
    unsigned char v460; // 0x4d66f8
    unsigned char v461; // 0x4d6708
    uint32_t v462; // 0x4d671a
    uint64_t v463; // 0x4d67c1
    char * v464; // 0x4d67cb
    unsigned char v465; // 0x4d67cb
    int64_t v466; // 0x4d67cb
    int64_t v467; // 0x4d5a50
    int128_t v468; // 0x4d7a4e
    int128_t v469; // 0x4d7a5b
    int64_t v470; // 0x4d7a6f
    int64_t v471; // 0x4d72e3
    int64_t v472; // 0x4d72f4
    int64_t v473; // 0x4d5a50
    int64_t v474; // 0x4d7abb
    int128_t v475; // 0x4d7734
    int128_t v476; // 0x4d7742
    uint64_t v477; // 0x4d773f
    int128_t v478; // 0x4d776f
    unsigned char v479; // 0x4d5a50
    int128_t v480; // 0x4d7787
    int64_t v481; // 0x4d7790
    int128_t v482; // 0x4d779f
    int128_t v483; // 0x4d77a3
    int128_t v484; // 0x4d77b4
    int128_t v485; // 0x4d77b9
    int128_t v486; // 0x4d77ce
    int128_t v487; // 0x4d77df
    int128_t v488; // 0x4d77f0
    int128_t v489; // 0x4d7801
    int128_t v490; // 0x4d780a
    uint32_t v491; // 0x4d7848
    uint32_t v492; // 0x4d784f
    uint32_t v493; // 0x4d7856
    uint32_t v494; // 0x4d785d
    uint32_t v495; // 0x4d790f
    unsigned char v496; // 0x4d791d
    uint32_t v497; // 0x4d7959
    unsigned char v498; // 0x4d796c
    unsigned char v499; // 0x4d798d
    unsigned char v500; // 0x4d79a5
    uint32_t v501; // 0x4d79b8
    uint32_t v502; // 0x4d79c4
    int128_t v503; // 0x4d79ce
    unsigned char v504; // 0x4d7a2d
    int64_t v505; // 0x4d7a35
    int64_t v506; // 0x4d7a35
    int64_t v507; // 0x4d730c
    int128_t v508; // 0x4d67f4
    int128_t v509; // 0x4d6802
    uint64_t v510; // 0x4d67ff
    int128_t v511; // 0x4d6831
    unsigned char v512; // 0x4d5a50
    int128_t v513; // 0x4d6849
    int64_t v514; // 0x4d6852
    int128_t v515; // 0x4d6861
    int128_t v516; // 0x4d6865
    int128_t v517; // 0x4d6876
    int128_t v518; // 0x4d687b
    int128_t v519; // 0x4d6890
    int128_t v520; // 0x4d68a1
    int128_t v521; // 0x4d68b2
    int128_t v522; // 0x4d68c3
    int128_t v523; // 0x4d68cc
    uint32_t v524; // 0x4d690a
    uint32_t v525; // 0x4d6911
    uint32_t v526; // 0x4d6918
    uint32_t v527; // 0x4d691f
    unsigned char v528; // 0x4d698d
    uint32_t v529; // 0x4d69dd
    unsigned char v530; // 0x4d69e7
    unsigned char v531; // 0x4d6a32
    uint32_t v532; // 0x4d6a3e
    unsigned char v533; // 0x4d6a4d
    uint32_t v534; // 0x4d6a7f
    uint32_t v535; // 0x4d6a8a
    int128_t v536; // 0x4d6a91
    unsigned char v537; // 0x4d6af3
    int64_t v538; // 0x4d6afb
    int64_t v539; // 0x4d6afb
    int128_t v540; // 0x4d6b1d
    int64_t v541; // 0x4d5a50
    int64_t v542; // 0x4d5a50
    int128_t v543; // 0x4d5a50
    int128_t v544; // 0x4d5a50
    int128_t v545; // 0x4d5a50
    int128_t v546; // 0x4d5a50
    if (v336 > (int64_t)&g25) {
        // 0x4d7050
        *v321 = 0;
        v365 = *(int64_t *)(v7 + 152);
        v366 = function_4d4f10(*v253, *v240, a1, v19, v339, v365);
        v507 = a1;
        if (v366 >= 3) {
            // 0x4d7089
            *(int64_t *)&v6 = a1;
            *v286 = (int32_t)(v338 | 4);
            *v323 = v256;
            v348 = v366;
            *(int64_t *)v256 = v365;
            if (v348 != 3) {
                // 0x4d70e4
                *(int64_t *)v280 = *(int64_t *)(v7 + 64);
                v437 = v348 | 1;
                if (v437 != 5) {
                    // 0x4d7100
                    *(int64_t *)v275 = v7 + (int64_t)&g26;
                    if (v437 != 7) {
                        // 0x4d711f
                        *(int64_t *)v291 = v7 + (int64_t)&g27;
                        if (v437 != 9) {
                            // 0x4d713e
                            *v258 = v7 + (int64_t)&g28;
                            if (v437 != 11) {
                                // 0x4d715d
                                *(int64_t *)v261 = v7 + (int64_t)&g29;
                                if (v437 != 13) {
                                    // 0x4d717c
                                    *(int64_t *)v308 = v7 + (int64_t)&g30;
                                    if (v437 != 15) {
                                        // 0x4d719b
                                        *(int64_t *)v263 = v7 + (int64_t)&g31;
                                        if (v437 != 17) {
                                            // 0x4d71ba
                                            *(int64_t *)v267 = v7 + (int64_t)&g32;
                                            if (v437 != 19) {
                                                // 0x4d71d9
                                                *(int64_t *)v265 = v7 + (int64_t)&g34;
                                                if (v437 != 21) {
                                                    // 0x4d71f8
                                                    *(int64_t *)v271 = v7 + (int64_t)&g35;
                                                    if (v437 != 23) {
                                                        // 0x4d7213
                                                        *(int64_t *)v269 = v7 + (int64_t)&g36;
                                                        if (v437 != 25) {
                                                            // 0x4d722e
                                                            *(int64_t *)v273 = v7 + (int64_t)&g37;
                                                            if (v437 != 27) {
                                                                // 0x4d7249
                                                                *(int64_t *)v259 = v7 + (int64_t)&g38;
                                                                if (v437 != 29) {
                                                                    // 0x4d7264
                                                                    *v324 = v7 + (int64_t)&g39;
                                                                    if (v437 != 31) {
                                                                        // 0x4d727f
                                                                        *v325 = v7 + (int64_t)&g40;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            // 0x4d7290
            *(int64_t *)(v7 - 8) = v322;
            *v321 = 0;
            v434 = (v348 - 2) / 2;
            *(int64_t *)(v7 - 24) = 0;
            v435 = v434 + 1;
            *(int64_t *)(v7 - 32) = (int64_t)*v286;
            function_4d91a0(*v323, v435, 1, *(int64_t *)&v6, 0, 0);
            v436 = 32 * v435;
            v364 = v436;
            v346 = v435;
            if (v348 > (v348 & -2)) {
                // 0x4d72e0
                v471 = v436 + v322;
                v472 = 64 * v435 + v365;
                __asm_movups(*(int128_t *)v471, __asm_movdqu(*(int128_t *)v472));
                __asm_movups(*(int128_t *)(v471 + 16), __asm_movdqu(*(int128_t *)(v472 + 16)));
                v364 = v436 + 32;
                v346 = v434 + 2;
            }
            // 0x4d70b3
            v347 = v346;
            __memcpy_chk((int64_t *)v365, (int64_t *)v322, (int32_t)v364, (int32_t)&g1);
            while (v347 >= 3) {
                // 0x4d70cd
                v348 = v347;
                *(int64_t *)v256 = v365;
                if (v348 != 3) {
                    // 0x4d70e4
                    *(int64_t *)v280 = *(int64_t *)(v7 + 64);
                    v437 = v348 | 1;
                    if (v437 != 5) {
                        // 0x4d7100
                        *(int64_t *)v275 = v7 + (int64_t)&g26;
                        if (v437 != 7) {
                            // 0x4d711f
                            *(int64_t *)v291 = v7 + (int64_t)&g27;
                            if (v437 != 9) {
                                // 0x4d713e
                                *v258 = v7 + (int64_t)&g28;
                                if (v437 != 11) {
                                    // 0x4d715d
                                    *(int64_t *)v261 = v7 + (int64_t)&g29;
                                    if (v437 != 13) {
                                        // 0x4d717c
                                        *(int64_t *)v308 = v7 + (int64_t)&g30;
                                        if (v437 != 15) {
                                            // 0x4d719b
                                            *(int64_t *)v263 = v7 + (int64_t)&g31;
                                            if (v437 != 17) {
                                                // 0x4d71ba
                                                *(int64_t *)v267 = v7 + (int64_t)&g32;
                                                if (v437 != 19) {
                                                    // 0x4d71d9
                                                    *(int64_t *)v265 = v7 + (int64_t)&g34;
                                                    if (v437 != 21) {
                                                        // 0x4d71f8
                                                        *(int64_t *)v271 = v7 + (int64_t)&g35;
                                                        if (v437 != 23) {
                                                            // 0x4d7213
                                                            *(int64_t *)v269 = v7 + (int64_t)&g36;
                                                            if (v437 != 25) {
                                                                // 0x4d722e
                                                                *(int64_t *)v273 = v7 + (int64_t)&g37;
                                                                if (v437 != 27) {
                                                                    // 0x4d7249
                                                                    *(int64_t *)v259 = v7 + (int64_t)&g38;
                                                                    if (v437 != 29) {
                                                                        // 0x4d7264
                                                                        *v324 = v7 + (int64_t)&g39;
                                                                        if (v437 != 31) {
                                                                            // 0x4d727f
                                                                            *v325 = v7 + (int64_t)&g40;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                // 0x4d7290
                *(int64_t *)(v7 - 8) = v322;
                *v321 = 0;
                v434 = (v348 - 2) / 2;
                *(int64_t *)(v7 - 24) = 0;
                v435 = v434 + 1;
                *(int64_t *)(v7 - 32) = (int64_t)*v286;
                function_4d91a0(*v323, v435, 1, *(int64_t *)&v6, 0, 0);
                v436 = 32 * v435;
                v364 = v436;
                v346 = v435;
                if (v348 > (v348 & -2)) {
                    // 0x4d72e0
                    v471 = v436 + v322;
                    v472 = 64 * v435 + v365;
                    __asm_movups(*(int128_t *)v471, __asm_movdqu(*(int128_t *)v472));
                    __asm_movups(*(int128_t *)(v471 + 16), __asm_movdqu(*(int128_t *)(v472 + 16)));
                    v364 = v436 + 32;
                    v346 = v434 + 2;
                }
                // 0x4d70b3
                v347 = v346;
                __memcpy_chk((int64_t *)v365, (int64_t *)v322, (int32_t)v364, (int32_t)&g1);
            }
            // 0x4d730c
            v507 = *(int64_t *)&v6;
        }
        // 0x4d7310
        v350 = v507;
        v373 = __asm_movdqa(*(int128_t *)(v7 + (int64_t)&g21));
        v374 = (int64_t *)(v350 + 64);
        v375 = __asm_movdqa(*(int128_t *)(v7 + (int64_t)&g22));
        v376 = __asm_movdqa(*(int128_t *)(v7 + (int64_t)&g23));
        *v326 = (int128_t)__asm_movaps(v373);
        v377 = __asm_movdqa(*(int128_t *)(v7 + (int64_t)&g24));
        *v327 = (int128_t)__asm_movaps(v375);
        *v328 = (int128_t)__asm_movaps(v376);
        *v329 = (int128_t)__asm_movaps(v377);
        v378 = (int64_t)__popcountdi2((int32_t)*v374);
        *v301 = v378;
        v379 = (char *)(v350 + 144);
        v380 = (int64_t)*v379;
        if (v380 > v378) {
            // 0x4d737b
            *v303 = v302;
            v386 = v350 + 145;
            v396 = __asm_movdqu(*(int128_t *)v350);
            v397 = __asm_movdqu(*(int128_t *)(v350 + 16));
            v398 = 0x2000000000 * v380 % 0x1fe000000001;
            *v260 = (int128_t)__asm_movaps(v396);
            *v304 = (int128_t)__asm_movaps(v397);
            v399 = __asm_movdqa(*v260);
            v400 = *(char *)(v350 + 138) | 4;
            *v305 = 64;
            v401 = __asm_movdqa(*v276);
            v402 = (v398 + 0x5100000000) / 0x100000000 + v350;
            *v306 = v400;
            v403 = __asm_movdqu(*(int128_t *)v402);
            v404 = __asm_movdqu(*(int128_t *)(v402 + 16));
            *v258 = 0;
            v405 = __asm_movdqu(*(int128_t *)(v402 + 32));
            v406 = __asm_movdqu(*(int128_t *)(v402 + 48));
            *v307 = (int128_t)__asm_movaps(v399);
            __asm_movups(*v262, v403);
            v407 = __asm_movdqa(*v277);
            __asm_movups(*v264, v404);
            v408 = __asm_movdqa(*v309);
            __asm_movups(*v266, v405);
            v409 = __asm_movdqa(*v268);
            __asm_movups(*v270, v406);
            v410 = __asm_movdqa(*v272);
            v411 = __asm_movdqa(*v274);
            *v310 = (int128_t)__asm_movaps(v401);
            *v311 = (int128_t)__asm_movaps(v407);
            *v312 = (int128_t)__asm_movaps(v408);
            *v313 = (int128_t)__asm_movaps(v409);
            *v314 = (int128_t)__asm_movaps(v410);
            *v315 = (int128_t)__asm_movaps(v411);
            function_4d8f60(v256, *v303, 64, 0, (int64_t)v400);
            v412 = *v278;
            v413 = *v281;
            v414 = *v279;
            v415 = *v282;
            *v288 = v413 / 0x10000;
            *(int32_t *)&v6 = v413 / 256;
            *v317 = v413 / 0x1000000;
            *(char *)((v398 - 0x4000000000) / 0x100000000 + v386) = (char)v414;
            v416 = *v284;
            v417 = *v318;
            v418 = *v293;
            v419 = *v319;
            v420 = *v289;
            v421 = *(char *)&v6;
            *(int64_t *)&v6 = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v413 & 0xff00 | v412 / 0x1000000) | v412 / 0x10000 % 256) | v412 / 256 % 256) | (int64_t)(v412 % 256)) | (int64_t)(v414 / 0x1000000)) | (int64_t)(v414 / 0x10000 % 256)) | (int64_t)(v414 / 256 % 256);
            v422 = *v284;
            *v320 = 256 * (256 * (256 * (256 * (256 * (256 * (256 * (int64_t)v417 | (int64_t)(v415 / 0x1000000)) | (int64_t)(v415 / 0x10000 % 256)) | (int64_t)(v415 / 256 % 256)) | (int64_t)(v415 % 256)) | (int64_t)v419) | (int64_t)v420) | (int64_t)v421;
            v423 = *v292;
            v424 = __asm_movdqa(v6);
            *(char *)(v402 + 25) = (char)(v423 / 256);
            __asm_movups(*(int128_t *)(v402 + 1), v424);
            *(int64_t *)(v402 + 17) = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v423 & 0xff00 | v418 / 0x1000000) | v418 / 0x10000 % 256) | v418 / 256 % 256) | (int64_t)(v418 % 256)) | (int64_t)(v416 / 0x1000000)) | (int64_t)(v416 / 0x10000 % 256)) | (int64_t)(v422 / 256 % 256);
            *(char *)(v402 + 27) = (char)(v423 / 0x1000000);
            *(char *)(v402 + 26) = (char)(v423 / 0x10000);
            *(int32_t *)(v402 + 28) = *v299;
            v425 = *v379;
            v426 = (int64_t)v425 + 0xffffffff;
            v427 = v426 & 0xffffffff;
            *v379 = (char)v426;
            v342 = v386;
            v545 = v408;
            v355 = v427;
            while (*v301 < (int64_t)(v425 - 1)) {
                // 0x4d7390
                v396 = __asm_movdqu(*(int128_t *)v350);
                v397 = __asm_movdqu(*(int128_t *)(v350 + 16));
                v398 = 0x2000000000 * v427 % 0x1fe000000001;
                *v260 = (int128_t)__asm_movaps(v396);
                *v304 = (int128_t)__asm_movaps(v397);
                v399 = __asm_movdqa(*v260);
                v400 = *(char *)(v350 + 138) | 4;
                *v305 = 64;
                v401 = __asm_movdqa(*v276);
                v402 = (v398 + 0x5100000000) / 0x100000000 + v350;
                *v306 = v400;
                v403 = __asm_movdqu(*(int128_t *)v402);
                v404 = __asm_movdqu(*(int128_t *)(v402 + 16));
                *v258 = 0;
                v405 = __asm_movdqu(*(int128_t *)(v402 + 32));
                v406 = __asm_movdqu(*(int128_t *)(v402 + 48));
                *v307 = (int128_t)__asm_movaps(v399);
                __asm_movups(*v262, v403);
                v407 = __asm_movdqa(*v277);
                __asm_movups(*v264, v404);
                v408 = __asm_movdqa(*v309);
                __asm_movups(*v266, v405);
                v409 = __asm_movdqa(*v268);
                __asm_movups(*v270, v406);
                v410 = __asm_movdqa(*v272);
                v411 = __asm_movdqa(*v274);
                *v310 = (int128_t)__asm_movaps(v401);
                *v311 = (int128_t)__asm_movaps(v407);
                *v312 = (int128_t)__asm_movaps(v408);
                *v313 = (int128_t)__asm_movaps(v409);
                *v314 = (int128_t)__asm_movaps(v410);
                *v315 = (int128_t)__asm_movaps(v411);
                function_4d8f60(v256, *v303, 64, 0, (int64_t)v400);
                v412 = *v278;
                v413 = *v281;
                v414 = *v279;
                v415 = *v282;
                *v288 = v413 / 0x10000;
                *(int32_t *)&v6 = v413 / 256;
                *v317 = v413 / 0x1000000;
                *(char *)((v398 - 0x4000000000) / 0x100000000 + v386) = (char)v414;
                v416 = *v284;
                v417 = *v318;
                v418 = *v293;
                v419 = *v319;
                v420 = *v289;
                v421 = *(char *)&v6;
                *(int64_t *)&v6 = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v413 & 0xff00 | v412 / 0x1000000) | v412 / 0x10000 % 256) | v412 / 256 % 256) | (int64_t)(v412 % 256)) | (int64_t)(v414 / 0x1000000)) | (int64_t)(v414 / 0x10000 % 256)) | (int64_t)(v414 / 256 % 256);
                v422 = *v284;
                *v320 = 256 * (256 * (256 * (256 * (256 * (256 * (256 * (int64_t)v417 | (int64_t)(v415 / 0x1000000)) | (int64_t)(v415 / 0x10000 % 256)) | (int64_t)(v415 / 256 % 256)) | (int64_t)(v415 % 256)) | (int64_t)v419) | (int64_t)v420) | (int64_t)v421;
                v423 = *v292;
                v424 = __asm_movdqa(v6);
                *(char *)(v402 + 25) = (char)(v423 / 256);
                __asm_movups(*(int128_t *)(v402 + 1), v424);
                *(int64_t *)(v402 + 17) = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v423 & 0xff00 | v418 / 0x1000000) | v418 / 0x10000 % 256) | v418 / 256 % 256) | (int64_t)(v418 % 256)) | (int64_t)(v416 / 0x1000000)) | (int64_t)(v416 / 0x10000 % 256)) | (int64_t)(v422 / 256 % 256);
                *(char *)(v402 + 27) = (char)(v423 / 0x1000000);
                *(char *)(v402 + 26) = (char)(v423 / 0x10000);
                *(int32_t *)(v402 + 28) = *v299;
                v425 = *v379;
                v426 = (int64_t)v425 + 0xffffffff;
                v427 = v426 & 0xffffffff;
                *v379 = (char)v426;
                v342 = v386;
                v545 = v408;
                v355 = v427;
            }
        } else {
            // 0x4d7310
            v342 = v350 + 145;
            v545 = v330;
            v355 = v380;
        }
        // 0x4d76ae
        v343 = v342;
        v428 = __asm_movdqa(*v326);
        v429 = __asm_movdqa(*v327);
        v430 = (32 * v355 & 0x1fe0) + v343;
        __asm_movups(*(int128_t *)v430, v428);
        __asm_movups(*(int128_t *)(v430 + 16), v429);
        v431 = *v379;
        v432 = (int64_t)v431 + 1;
        *v379 = (char)v432;
        v433 = (int64_t)__popcountdi2((int32_t)(*v374 + *v240 / 2048));
        *v301 = v433;
        v546 = v545;
        v356 = v432;
        if ((int64_t)(v431 + 1) > v433) {
            // 0x4d7714
            *v303 = v302;
            v475 = __asm_movdqu(*(int128_t *)v350);
            v476 = __asm_movdqu(*(int128_t *)(v350 + 16));
            v477 = 0x2000000000 * v432 % 0x1fe000000001;
            *v260 = (int128_t)__asm_movaps(v475);
            *v304 = (int128_t)__asm_movaps(v476);
            v478 = __asm_movdqa(*v260);
            v479 = *(char *)(v350 + 138) | 4;
            *v305 = 64;
            v480 = __asm_movdqa(*v276);
            v481 = (v477 + 0x5100000000) / 0x100000000 + v350;
            *v306 = v479;
            v482 = __asm_movdqu(*(int128_t *)v481);
            v483 = __asm_movdqu(*(int128_t *)(v481 + 16));
            *v258 = 0;
            v484 = __asm_movdqu(*(int128_t *)(v481 + 32));
            v485 = __asm_movdqu(*(int128_t *)(v481 + 48));
            *v307 = (int128_t)__asm_movaps(v478);
            __asm_movups(*v262, v482);
            v486 = __asm_movdqa(*v277);
            __asm_movups(*v264, v483);
            v487 = __asm_movdqa(*v309);
            __asm_movups(*v266, v484);
            v488 = __asm_movdqa(*v268);
            __asm_movups(*v270, v485);
            v489 = __asm_movdqa(*v272);
            v490 = __asm_movdqa(*v274);
            *v310 = (int128_t)__asm_movaps(v480);
            *v311 = (int128_t)__asm_movaps(v486);
            *v312 = (int128_t)__asm_movaps(v487);
            *v313 = (int128_t)__asm_movaps(v488);
            *v314 = (int128_t)__asm_movaps(v489);
            *v315 = (int128_t)__asm_movaps(v490);
            function_4d8f60(v256, *v303, 64, 0, (int64_t)v479);
            v491 = *v278;
            v492 = *v281;
            v493 = *v279;
            v494 = *v282;
            *v288 = v492 / 0x10000;
            *(int32_t *)&v6 = v492 / 256;
            *v317 = v492 / 0x1000000;
            *(char *)((v477 - 0x4000000000) / 0x100000000 + v343) = (char)v493;
            v495 = *v284;
            v496 = *v318;
            v497 = *v293;
            v498 = *v319;
            v499 = *v289;
            v500 = *(char *)&v6;
            *(int64_t *)&v6 = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v492 & 0xff00 | v491 / 0x1000000) | v491 / 0x10000 % 256) | v491 / 256 % 256) | (int64_t)(v491 % 256)) | (int64_t)(v493 / 0x1000000)) | (int64_t)(v493 / 0x10000 % 256)) | (int64_t)(v493 / 256 % 256);
            v501 = *v284;
            *v320 = 256 * (256 * (256 * (256 * (256 * (256 * (256 * (int64_t)v496 | (int64_t)(v494 / 0x1000000)) | (int64_t)(v494 / 0x10000 % 256)) | (int64_t)(v494 / 256 % 256)) | (int64_t)(v494 % 256)) | (int64_t)v498) | (int64_t)v499) | (int64_t)v500;
            v502 = *v292;
            v503 = __asm_movdqa(v6);
            *(char *)(v481 + 25) = (char)(v502 / 256);
            __asm_movups(*(int128_t *)(v481 + 1), v503);
            *(int64_t *)(v481 + 17) = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v502 & 0xff00 | v497 / 0x1000000) | v497 / 0x10000 % 256) | v497 / 256 % 256) | (int64_t)(v497 % 256)) | (int64_t)(v495 / 0x1000000)) | (int64_t)(v495 / 0x10000 % 256)) | (int64_t)(v501 / 256 % 256);
            *(char *)(v481 + 27) = (char)(v502 / 0x1000000);
            *(char *)(v481 + 26) = (char)(v502 / 0x10000);
            *(int32_t *)(v481 + 28) = *v299;
            v504 = *v379;
            v505 = (int64_t)v504 + 0xffffffff;
            v506 = v505 & 0xffffffff;
            *v379 = (char)v505;
            v546 = v489;
            v356 = v506;
            while (*v301 < (int64_t)(v504 - 1)) {
                // 0x4d7730
                v475 = __asm_movdqu(*(int128_t *)v350);
                v476 = __asm_movdqu(*(int128_t *)(v350 + 16));
                v477 = 0x2000000000 * v506 % 0x1fe000000001;
                *v260 = (int128_t)__asm_movaps(v475);
                *v304 = (int128_t)__asm_movaps(v476);
                v478 = __asm_movdqa(*v260);
                v479 = *(char *)(v350 + 138) | 4;
                *v305 = 64;
                v480 = __asm_movdqa(*v276);
                v481 = (v477 + 0x5100000000) / 0x100000000 + v350;
                *v306 = v479;
                v482 = __asm_movdqu(*(int128_t *)v481);
                v483 = __asm_movdqu(*(int128_t *)(v481 + 16));
                *v258 = 0;
                v484 = __asm_movdqu(*(int128_t *)(v481 + 32));
                v485 = __asm_movdqu(*(int128_t *)(v481 + 48));
                *v307 = (int128_t)__asm_movaps(v478);
                __asm_movups(*v262, v482);
                v486 = __asm_movdqa(*v277);
                __asm_movups(*v264, v483);
                v487 = __asm_movdqa(*v309);
                __asm_movups(*v266, v484);
                v488 = __asm_movdqa(*v268);
                __asm_movups(*v270, v485);
                v489 = __asm_movdqa(*v272);
                v490 = __asm_movdqa(*v274);
                *v310 = (int128_t)__asm_movaps(v480);
                *v311 = (int128_t)__asm_movaps(v486);
                *v312 = (int128_t)__asm_movaps(v487);
                *v313 = (int128_t)__asm_movaps(v488);
                *v314 = (int128_t)__asm_movaps(v489);
                *v315 = (int128_t)__asm_movaps(v490);
                function_4d8f60(v256, *v303, 64, 0, (int64_t)v479);
                v491 = *v278;
                v492 = *v281;
                v493 = *v279;
                v494 = *v282;
                *v288 = v492 / 0x10000;
                *(int32_t *)&v6 = v492 / 256;
                *v317 = v492 / 0x1000000;
                *(char *)((v477 - 0x4000000000) / 0x100000000 + v343) = (char)v493;
                v495 = *v284;
                v496 = *v318;
                v497 = *v293;
                v498 = *v319;
                v499 = *v289;
                v500 = *(char *)&v6;
                *(int64_t *)&v6 = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v492 & 0xff00 | v491 / 0x1000000) | v491 / 0x10000 % 256) | v491 / 256 % 256) | (int64_t)(v491 % 256)) | (int64_t)(v493 / 0x1000000)) | (int64_t)(v493 / 0x10000 % 256)) | (int64_t)(v493 / 256 % 256);
                v501 = *v284;
                *v320 = 256 * (256 * (256 * (256 * (256 * (256 * (256 * (int64_t)v496 | (int64_t)(v494 / 0x1000000)) | (int64_t)(v494 / 0x10000 % 256)) | (int64_t)(v494 / 256 % 256)) | (int64_t)(v494 % 256)) | (int64_t)v498) | (int64_t)v499) | (int64_t)v500;
                v502 = *v292;
                v503 = __asm_movdqa(v6);
                *(char *)(v481 + 25) = (char)(v502 / 256);
                __asm_movups(*(int128_t *)(v481 + 1), v503);
                *(int64_t *)(v481 + 17) = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v502 & 0xff00 | v497 / 0x1000000) | v497 / 0x10000 % 256) | v497 / 256 % 256) | (int64_t)(v497 % 256)) | (int64_t)(v495 / 0x1000000)) | (int64_t)(v495 / 0x10000 % 256)) | (int64_t)(v501 / 256 % 256);
                *(char *)(v481 + 27) = (char)(v502 / 0x1000000);
                *(char *)(v481 + 26) = (char)(v502 / 0x10000);
                *(int32_t *)(v481 + 28) = *v299;
                v504 = *v379;
                v505 = (int64_t)v504 + 0xffffffff;
                v506 = v505 & 0xffffffff;
                *v379 = (char)v505;
                v546 = v489;
                v356 = v506;
            }
        }
        // 0x4d7a4e
        v468 = __asm_movdqa(*v328);
        v469 = __asm_movdqa(*v329);
        v470 = (32 * v356 & 0x1fe0) + v343;
        __asm_movups(*(int128_t *)v470, v468);
        __asm_movups(*(int128_t *)(v470 + 16), v469);
        *v379 = *v379 + 1;
        v340 = v374;
        v544 = v546;
        v349 = v350;
    } else {
        // 0x4d636e
        v367 = (int128_t *)a1;
        v368 = __asm_movdqu(*v367);
        v369 = (int128_t *)(a1 + 16);
        v370 = __asm_movdqu(*v369);
        v371 = __asm_pxor(v330, v330);
        *(int16_t *)v243 = 0;
        *(int64_t *)&v6 = v242;
        *v245 = v338;
        *v246 = v19;
        *v247 = (int128_t)__asm_movaps(v368);
        *v248 = (int128_t)__asm_movaps(v370);
        __asm_movups(*v249, v371);
        __asm_movups(*v250, v371);
        __asm_movups(*v251, v371);
        __asm_movups(*v252, v371);
        v372 = *v253;
        v351 = v336;
        v359 = 64;
        v362 = v242;
        v357 = v372;
        if (v336 >= 65) {
            // 0x4d63e6
            v383 = v372 + (v336 - 1 & -64);
            v384 = v372 + 64;
            function_4d8f60(v244, v372, 64, v19, v339 | 1);
            v385 = (int64_t)*v254 + 1;
            *v254 = (char)v385;
            v344 = v385;
            v345 = v384;
            if (v384 != v383) {
                v391 = *v245;
                v392 = *v246;
                v393 = v345 + 64;
                function_4d8f60(v244, v345, 64, v392, (int64_t)((char)v344 == 0) | (int64_t)v391);
                v394 = (int64_t)*v254 + 1;
                *v254 = (char)v394;
                v344 = v394;
                v345 = v393;
                while (v393 != v383) {
                    // 0x4d6410
                    v391 = *v245;
                    v392 = *v246;
                    v393 = v345 + 64;
                    function_4d8f60(v244, v345, 64, v392, (int64_t)((char)v344 == 0) | (int64_t)v391);
                    v394 = (int64_t)*v254 + 1;
                    *v254 = (char)v394;
                    v344 = v394;
                    v345 = v393;
                }
            }
            // 0x4d6459
            v395 = (int64_t)*v255;
            v351 = *v240 + (v336 - 65 & -64 ^ -64);
            v359 = 64 - v395;
            v362 = *(int64_t *)&v6 + v395;
            v357 = v383;
        }
        // 0x4d647e
        v358 = v357;
        v363 = v362;
        v360 = v359;
        v352 = v351;
        v381 = v352 > v360 ? v360 : v352;
        v382 = (int32_t)v381;
        if (v382 >= 8) {
            // 0x4d7a86
            v387 = v363 + 8 & -8;
            v14 = v387;
            *(int64_t *)v363 = *(int64_t *)v358;
            v388 = (v381 & 0xffffffff) - 8;
            *(int64_t *)(v388 + v363) = *(int64_t *)(v388 + v358);
            v389 = v363 - v387;
            v390 = (int32_t)(v389 + v381);
            if (v390 >= 8) {
                // 0x4d7ab9
                v361 = 0;
                v474 = v361 + 8;
                *(int64_t *)(v14 + v361) = *(int64_t *)(v358 - v389 + v361);
                while ((v390 & -8) > (int32_t)v474) {
                    // 0x4d7ab9
                    v361 = v474 & 0xffffffff;
                    v474 = v361 + 8;
                    *(int64_t *)(v14 + v361) = *(int64_t *)(v358 - v389 + v361);
                }
            }
        } else {
            if ((v381 & 4) != 0) {
                // 0x4d7bf8
                *(int32_t *)v363 = *(int32_t *)v358;
                v467 = (v381 & 0xffffffff) - 4;
                *(int32_t *)(v467 + v363) = *(int32_t *)(v467 + v358);
            } else {
                if (v382 != 0) {
                    // 0x4d649a
                    *(char *)v363 = *(char *)v358;
                    if ((v381 & 2) != 0) {
                        // 0x4d7d1e
                        v542 = (v381 & 0xffffffff) - 2;
                        *(int16_t *)(v542 + v363) = *(int16_t *)(v542 + v358);
                    }
                }
            }
        }
        // 0x4d64a7
        v438 = *v255 + (char)v381;
        v439 = *v246;
        v440 = (int64_t)(*v245 | (char)(*v254 == 0) | 2);
        v441 = v438;
        v442 = __asm_movdqa(*v247);
        v443 = __asm_movdqa(*v248);
        *v258 = v439;
        v444 = __asm_movdqu(*v249);
        v445 = __asm_movdqu(*v250);
        *(int16_t *)v259 = (int16_t)(256 * v440 | v441);
        v446 = __asm_movdqu(*v251);
        *v260 = (int128_t)__asm_movaps(v442);
        v447 = __asm_movdqu(*v252);
        __asm_movups(*v262, v444);
        __asm_movups(*v264, v445);
        __asm_movups(*v266, v446);
        v448 = __asm_movdqa(*v268);
        __asm_movups(*v270, v447);
        v449 = __asm_movdqa(*v272);
        v450 = __asm_movdqa(*v274);
        *v276 = (int128_t)__asm_movaps(v443);
        *(int128_t *)(v7 + 272) = (int128_t)__asm_movaps(v442);
        v451 = __asm_movdqa(*v277);
        *(int128_t *)(v7 + 288) = (int128_t)__asm_movaps(v443);
        v452 = __asm_movdqa(*(int128_t *)(v7 + 544));
        *v255 = v438;
        *(int128_t *)(v7 + 304) = (int128_t)__asm_movaps(v451);
        *(int128_t *)(v7 + 320) = (int128_t)__asm_movaps(v452);
        *(int128_t *)(v7 + 336) = (int128_t)__asm_movaps(v448);
        *(int128_t *)(v7 + 352) = (int128_t)__asm_movaps(v449);
        *(int128_t *)(v7 + 368) = (int128_t)__asm_movaps(v450);
        function_4d8f60(v256, v7 + 312, v441, v439, v440);
        v453 = *v278;
        v454 = *v279;
        v455 = *v281;
        v456 = *v282;
        *(int32_t *)v283 = v454;
        v457 = *v284;
        *(int32_t *)&v6 = v455 / 256;
        *v286 = v455 / 0x1000000;
        *v288 = v456 / 256;
        v458 = *v289;
        *(int64_t *)v290 = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v455 & 0xff00 | v453 / 0x1000000) | v453 / 0x10000 % 256) | v453 / 256 % 256) | (int64_t)(v453 % 256)) | (int64_t)(v454 / 0x1000000)) | (int64_t)(v454 / 0x10000 % 256)) | (int64_t)(v454 / 256 % 256);
        v459 = *v292;
        v460 = *(char *)v285;
        v461 = *(char *)&v6;
        v462 = *v293;
        *v294 = 256 * (256 * (256 * (256 * ((int64_t)(256 * (256 * (256 * v457 & 0xff00 | v456 / 0x1000000) | v456 / 0x10000 % 256)) | (int64_t)v458) | (int64_t)(v456 % 256)) | (int64_t)v460) | (int64_t)(v455 / 0x10000 % 256)) | (int64_t)v461;
        *v295 = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (v462 / 0x1000000 | 256 * v459 & 0xff00) | v462 / 0x10000 % 256) | v462 / 256 % 256) | (int64_t)(v462 % 256)) | (int64_t)(v457 / 0x1000000)) | (int64_t)(v457 / 0x10000 % 256)) | (int64_t)(v457 / 256 % 256);
        *(int32_t *)v296 = v459 / 256;
        *(int32_t *)v297 = v459 / 0x1000000;
        *(int32_t *)v298 = v459 / 0x10000;
        *v300 = *v299;
        v463 = (int64_t)__popcountdi2((int32_t)*v246);
        *v301 = v463;
        v464 = (char *)(a1 + 144);
        v465 = *v464;
        v466 = v465;
        if (v466 > v463) {
            // 0x4d67df
            *v303 = v302;
            v473 = a1 + 145;
            v508 = __asm_movdqu(*v367);
            v509 = __asm_movdqu(*v369);
            v510 = 0x2000000000 * v466 % 0x1fe000000001;
            *v260 = (int128_t)__asm_movaps(v508);
            *v304 = (int128_t)__asm_movaps(v509);
            v511 = __asm_movdqa(*v260);
            v512 = *v337 | 4;
            *v305 = 64;
            v513 = __asm_movdqa(*v276);
            v514 = (v510 + 0x5100000000) / 0x100000000 + a1;
            *v306 = v512;
            v515 = __asm_movdqu(*(int128_t *)v514);
            v516 = __asm_movdqu(*(int128_t *)(v514 + 16));
            *v258 = 0;
            v517 = __asm_movdqu(*(int128_t *)(v514 + 32));
            v518 = __asm_movdqu(*(int128_t *)(v514 + 48));
            *v307 = (int128_t)__asm_movaps(v511);
            __asm_movups(*v262, v515);
            v519 = __asm_movdqa(*v277);
            __asm_movups(*v264, v516);
            v520 = __asm_movdqa(*v309);
            __asm_movups(*v266, v517);
            v521 = __asm_movdqa(*v268);
            __asm_movups(*v270, v518);
            v522 = __asm_movdqa(*v272);
            v523 = __asm_movdqa(*v274);
            *v310 = (int128_t)__asm_movaps(v513);
            *v311 = (int128_t)__asm_movaps(v519);
            *v312 = (int128_t)__asm_movaps(v520);
            *v313 = (int128_t)__asm_movaps(v521);
            *v314 = (int128_t)__asm_movaps(v522);
            *v315 = (int128_t)__asm_movaps(v523);
            function_4d8f60(v256, *v303, 64, 0, (int64_t)v512);
            v524 = *v278;
            v525 = *v281;
            v526 = *v279;
            v527 = *v282;
            *(int32_t *)&v6 = v524 / 256;
            *(char *)((v510 - 0x4000000000) / 0x100000000 + v473) = (char)v526;
            *v288 = v525 / 256;
            v528 = *(char *)&v6;
            *v317 = v525 / 0x10000;
            v529 = *v284;
            v530 = *v318;
            *(int64_t *)&v6 = 256 * (256 * (256 * (256 * ((int64_t)(256 * (256 * (256 * v525 & 0xff00 | v524 / 0x1000000) | v524 / 0x10000 % 256)) | (int64_t)v528) | (int64_t)(v524 % 256)) | (int64_t)(v526 / 0x1000000)) | (int64_t)(v526 / 0x10000 % 256)) | (int64_t)(v526 / 256 % 256);
            v531 = *v319;
            v532 = *v293;
            v533 = *v289;
            *v320 = 256 * (256 * (256 * (256 * (256 * (256 * (256 * (int64_t)v530 | (int64_t)(v527 / 0x1000000)) | (int64_t)(v527 / 0x10000 % 256)) | (int64_t)(v527 / 256 % 256)) | (int64_t)(v527 % 256)) | (int64_t)(v525 / 0x1000000)) | (int64_t)v531) | (int64_t)v533;
            v534 = *v292;
            v535 = *v284;
            v536 = __asm_movdqa(v6);
            *(char *)(v514 + 25) = (char)(v534 / 256);
            __asm_movups(*(int128_t *)(v514 + 1), v536);
            *(int64_t *)(v514 + 17) = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v534 & 0xff00 | v532 / 0x1000000) | v532 / 0x10000 % 256) | v532 / 256 % 256) | (int64_t)(v532 % 256)) | (int64_t)(v529 / 0x1000000)) | (int64_t)(v529 / 0x10000 % 256)) | (int64_t)(v535 / 256 % 256);
            *(char *)(v514 + 27) = (char)(v534 / 0x1000000);
            *(char *)(v514 + 26) = (char)(v534 / 0x10000);
            *(int32_t *)(v514 + 28) = *v299;
            v537 = *v464;
            v538 = (int64_t)v537 + 0xffffffff;
            v539 = v538 & 0xffffffff;
            *v464 = (char)v538;
            v341 = v473;
            v543 = v513;
            v353 = v537;
            v354 = v539;
            while (*v301 < (int64_t)(v537 - 1)) {
                // 0x4d67f0
                v508 = __asm_movdqu(*v367);
                v509 = __asm_movdqu(*v369);
                v510 = 0x2000000000 * v539 % 0x1fe000000001;
                *v260 = (int128_t)__asm_movaps(v508);
                *v304 = (int128_t)__asm_movaps(v509);
                v511 = __asm_movdqa(*v260);
                v512 = *v337 | 4;
                *v305 = 64;
                v513 = __asm_movdqa(*v276);
                v514 = (v510 + 0x5100000000) / 0x100000000 + a1;
                *v306 = v512;
                v515 = __asm_movdqu(*(int128_t *)v514);
                v516 = __asm_movdqu(*(int128_t *)(v514 + 16));
                *v258 = 0;
                v517 = __asm_movdqu(*(int128_t *)(v514 + 32));
                v518 = __asm_movdqu(*(int128_t *)(v514 + 48));
                *v307 = (int128_t)__asm_movaps(v511);
                __asm_movups(*v262, v515);
                v519 = __asm_movdqa(*v277);
                __asm_movups(*v264, v516);
                v520 = __asm_movdqa(*v309);
                __asm_movups(*v266, v517);
                v521 = __asm_movdqa(*v268);
                __asm_movups(*v270, v518);
                v522 = __asm_movdqa(*v272);
                v523 = __asm_movdqa(*v274);
                *v310 = (int128_t)__asm_movaps(v513);
                *v311 = (int128_t)__asm_movaps(v519);
                *v312 = (int128_t)__asm_movaps(v520);
                *v313 = (int128_t)__asm_movaps(v521);
                *v314 = (int128_t)__asm_movaps(v522);
                *v315 = (int128_t)__asm_movaps(v523);
                function_4d8f60(v256, *v303, 64, 0, (int64_t)v512);
                v524 = *v278;
                v525 = *v281;
                v526 = *v279;
                v527 = *v282;
                *(int32_t *)&v6 = v524 / 256;
                *(char *)((v510 - 0x4000000000) / 0x100000000 + v473) = (char)v526;
                *v288 = v525 / 256;
                v528 = *(char *)&v6;
                *v317 = v525 / 0x10000;
                v529 = *v284;
                v530 = *v318;
                *(int64_t *)&v6 = 256 * (256 * (256 * (256 * ((int64_t)(256 * (256 * (256 * v525 & 0xff00 | v524 / 0x1000000) | v524 / 0x10000 % 256)) | (int64_t)v528) | (int64_t)(v524 % 256)) | (int64_t)(v526 / 0x1000000)) | (int64_t)(v526 / 0x10000 % 256)) | (int64_t)(v526 / 256 % 256);
                v531 = *v319;
                v532 = *v293;
                v533 = *v289;
                *v320 = 256 * (256 * (256 * (256 * (256 * (256 * (256 * (int64_t)v530 | (int64_t)(v527 / 0x1000000)) | (int64_t)(v527 / 0x10000 % 256)) | (int64_t)(v527 / 256 % 256)) | (int64_t)(v527 % 256)) | (int64_t)(v525 / 0x1000000)) | (int64_t)v531) | (int64_t)v533;
                v534 = *v292;
                v535 = *v284;
                v536 = __asm_movdqa(v6);
                *(char *)(v514 + 25) = (char)(v534 / 256);
                __asm_movups(*(int128_t *)(v514 + 1), v536);
                *(int64_t *)(v514 + 17) = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v534 & 0xff00 | v532 / 0x1000000) | v532 / 0x10000 % 256) | v532 / 256 % 256) | (int64_t)(v532 % 256)) | (int64_t)(v529 / 0x1000000)) | (int64_t)(v529 / 0x10000 % 256)) | (int64_t)(v535 / 256 % 256);
                *(char *)(v514 + 27) = (char)(v534 / 0x1000000);
                *(char *)(v514 + 26) = (char)(v534 / 0x10000);
                *(int32_t *)(v514 + 28) = *v299;
                v537 = *v464;
                v538 = (int64_t)v537 + 0xffffffff;
                v539 = v538 & 0xffffffff;
                *v464 = (char)v538;
                v341 = v473;
                v543 = v513;
                v353 = v537;
                v354 = v539;
            }
        } else {
            // 0x4d7acf
            v341 = a1 + 145;
            v543 = v452;
            v353 = v465 + 1;
            v354 = v466;
        }
        // 0x4d6b14
        v540 = __asm_movdqa(*(int128_t *)v290);
        v541 = (32 * v354 & 0x1fe0) + v341;
        *(char *)v541 = *(char *)v283;
        *(int64_t *)(v541 + 17) = *v295;
        *(char *)(v541 + 27) = *(char *)v297;
        *(char *)(v541 + 25) = *(char *)v296;
        __asm_movups(*(int128_t *)(v541 + 1), v540);
        *(char *)(v541 + 26) = *(char *)v298;
        *(int32_t *)(v541 + 28) = *v300;
        *v464 = v353;
        v340 = (int64_t *)(a1 + 64);
        v544 = v543;
        v349 = a1;
    }
    int64_t v547 = *v240; // 0x4d6b7d
    uint64_t v548 = *v239 - v547; // 0x4d6b82
    *v239 = v548;
    int64_t v549 = *v340 + *v241; // 0x4d6b91
    *v253 = *v253 + v547;
    *v340 = v549;
    v18 = v239;
    v17 = v238;
    int128_t v550 = v544; // 0x4d6ba4
    v20 = v349;
    while (v548 > (int64_t)&g25) {
        int64_t v551 = v349;
        int64_t v552 = v549;
        v330 = v544;
        v331 = 1024 * v552;
        v332 = 1 << (llvm_ctlz_i64(*v239 | 1, true) ^ 63);
        *v240 = v332;
        v333 = v332;
        v334 = v332;
        if ((v332 - 1 & v331) != 0) {
            v335 = v333 / 2;
            v333 = v335;
            while ((v335 - 1 & v331) != 0) {
                // 0x4d6338
                v335 = v333 / 2;
                v333 = v335;
            }
            // 0x4d6344
            *v240 = v335;
            v334 = v335;
        }
        // 0x4d6349
        v336 = v334;
        v337 = (char *)(v551 + 138);
        v338 = *v337;
        v339 = v338;
        *v241 = v336 / 1024;
        if (v336 > (int64_t)&g25) {
            // 0x4d7050
            *v321 = 0;
            v365 = *(int64_t *)(v7 + 152);
            v366 = function_4d4f10(*v253, *v240, v551, v552, v339, v365);
            v507 = v551;
            if (v366 >= 3) {
                // 0x4d7089
                *(int64_t *)&v6 = v551;
                *v286 = (int32_t)(v338 | 4);
                *v323 = v256;
                v348 = v366;
                *(int64_t *)v256 = v365;
                if (v348 != 3) {
                    // 0x4d70e4
                    *(int64_t *)v280 = *(int64_t *)(v7 + 64);
                    v437 = v348 | 1;
                    if (v437 != 5) {
                        // 0x4d7100
                        *(int64_t *)v275 = v7 + (int64_t)&g26;
                        if (v437 != 7) {
                            // 0x4d711f
                            *(int64_t *)v291 = v7 + (int64_t)&g27;
                            if (v437 != 9) {
                                // 0x4d713e
                                *v258 = v7 + (int64_t)&g28;
                                if (v437 != 11) {
                                    // 0x4d715d
                                    *(int64_t *)v261 = v7 + (int64_t)&g29;
                                    if (v437 != 13) {
                                        // 0x4d717c
                                        *(int64_t *)v308 = v7 + (int64_t)&g30;
                                        if (v437 != 15) {
                                            // 0x4d719b
                                            *(int64_t *)v263 = v7 + (int64_t)&g31;
                                            if (v437 != 17) {
                                                // 0x4d71ba
                                                *(int64_t *)v267 = v7 + (int64_t)&g32;
                                                if (v437 != 19) {
                                                    // 0x4d71d9
                                                    *(int64_t *)v265 = v7 + (int64_t)&g34;
                                                    if (v437 != 21) {
                                                        // 0x4d71f8
                                                        *(int64_t *)v271 = v7 + (int64_t)&g35;
                                                        if (v437 != 23) {
                                                            // 0x4d7213
                                                            *(int64_t *)v269 = v7 + (int64_t)&g36;
                                                            if (v437 != 25) {
                                                                // 0x4d722e
                                                                *(int64_t *)v273 = v7 + (int64_t)&g37;
                                                                if (v437 != 27) {
                                                                    // 0x4d7249
                                                                    *(int64_t *)v259 = v7 + (int64_t)&g38;
                                                                    if (v437 != 29) {
                                                                        // 0x4d7264
                                                                        *v324 = v7 + (int64_t)&g39;
                                                                        if (v437 != 31) {
                                                                            // 0x4d727f
                                                                            *v325 = v7 + (int64_t)&g40;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                // 0x4d7290
                *(int64_t *)(v7 - 8) = v322;
                *v321 = 0;
                v434 = (v348 - 2) / 2;
                *(int64_t *)(v7 - 24) = 0;
                v435 = v434 + 1;
                *(int64_t *)(v7 - 32) = (int64_t)*v286;
                function_4d91a0(*v323, v435, 1, *(int64_t *)&v6, 0, 0);
                v436 = 32 * v435;
                v364 = v436;
                v346 = v435;
                if (v348 > (v348 & -2)) {
                    // 0x4d72e0
                    v471 = v436 + v322;
                    v472 = 64 * v435 + v365;
                    __asm_movups(*(int128_t *)v471, __asm_movdqu(*(int128_t *)v472));
                    __asm_movups(*(int128_t *)(v471 + 16), __asm_movdqu(*(int128_t *)(v472 + 16)));
                    v364 = v436 + 32;
                    v346 = v434 + 2;
                }
                // 0x4d70b3
                v347 = v346;
                __memcpy_chk((int64_t *)v365, (int64_t *)v322, (int32_t)v364, (int32_t)&g1);
                while (v347 >= 3) {
                    // 0x4d70cd
                    v348 = v347;
                    *(int64_t *)v256 = v365;
                    if (v348 != 3) {
                        // 0x4d70e4
                        *(int64_t *)v280 = *(int64_t *)(v7 + 64);
                        v437 = v348 | 1;
                        if (v437 != 5) {
                            // 0x4d7100
                            *(int64_t *)v275 = v7 + (int64_t)&g26;
                            if (v437 != 7) {
                                // 0x4d711f
                                *(int64_t *)v291 = v7 + (int64_t)&g27;
                                if (v437 != 9) {
                                    // 0x4d713e
                                    *v258 = v7 + (int64_t)&g28;
                                    if (v437 != 11) {
                                        // 0x4d715d
                                        *(int64_t *)v261 = v7 + (int64_t)&g29;
                                        if (v437 != 13) {
                                            // 0x4d717c
                                            *(int64_t *)v308 = v7 + (int64_t)&g30;
                                            if (v437 != 15) {
                                                // 0x4d719b
                                                *(int64_t *)v263 = v7 + (int64_t)&g31;
                                                if (v437 != 17) {
                                                    // 0x4d71ba
                                                    *(int64_t *)v267 = v7 + (int64_t)&g32;
                                                    if (v437 != 19) {
                                                        // 0x4d71d9
                                                        *(int64_t *)v265 = v7 + (int64_t)&g34;
                                                        if (v437 != 21) {
                                                            // 0x4d71f8
                                                            *(int64_t *)v271 = v7 + (int64_t)&g35;
                                                            if (v437 != 23) {
                                                                // 0x4d7213
                                                                *(int64_t *)v269 = v7 + (int64_t)&g36;
                                                                if (v437 != 25) {
                                                                    // 0x4d722e
                                                                    *(int64_t *)v273 = v7 + (int64_t)&g37;
                                                                    if (v437 != 27) {
                                                                        // 0x4d7249
                                                                        *(int64_t *)v259 = v7 + (int64_t)&g38;
                                                                        if (v437 != 29) {
                                                                            // 0x4d7264
                                                                            *v324 = v7 + (int64_t)&g39;
                                                                            if (v437 != 31) {
                                                                                // 0x4d727f
                                                                                *v325 = v7 + (int64_t)&g40;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    // 0x4d7290
                    *(int64_t *)(v7 - 8) = v322;
                    *v321 = 0;
                    v434 = (v348 - 2) / 2;
                    *(int64_t *)(v7 - 24) = 0;
                    v435 = v434 + 1;
                    *(int64_t *)(v7 - 32) = (int64_t)*v286;
                    function_4d91a0(*v323, v435, 1, *(int64_t *)&v6, 0, 0);
                    v436 = 32 * v435;
                    v364 = v436;
                    v346 = v435;
                    if (v348 > (v348 & -2)) {
                        // 0x4d72e0
                        v471 = v436 + v322;
                        v472 = 64 * v435 + v365;
                        __asm_movups(*(int128_t *)v471, __asm_movdqu(*(int128_t *)v472));
                        __asm_movups(*(int128_t *)(v471 + 16), __asm_movdqu(*(int128_t *)(v472 + 16)));
                        v364 = v436 + 32;
                        v346 = v434 + 2;
                    }
                    // 0x4d70b3
                    v347 = v346;
                    __memcpy_chk((int64_t *)v365, (int64_t *)v322, (int32_t)v364, (int32_t)&g1);
                }
                // 0x4d730c
                v507 = *(int64_t *)&v6;
            }
            // 0x4d7310
            v350 = v507;
            v373 = __asm_movdqa(*(int128_t *)(v7 + (int64_t)&g21));
            v374 = (int64_t *)(v350 + 64);
            v375 = __asm_movdqa(*(int128_t *)(v7 + (int64_t)&g22));
            v376 = __asm_movdqa(*(int128_t *)(v7 + (int64_t)&g23));
            *v326 = (int128_t)__asm_movaps(v373);
            v377 = __asm_movdqa(*(int128_t *)(v7 + (int64_t)&g24));
            *v327 = (int128_t)__asm_movaps(v375);
            *v328 = (int128_t)__asm_movaps(v376);
            *v329 = (int128_t)__asm_movaps(v377);
            v378 = (int64_t)__popcountdi2((int32_t)*v374);
            *v301 = v378;
            v379 = (char *)(v350 + 144);
            v380 = (int64_t)*v379;
            if (v380 > v378) {
                // 0x4d737b
                *v303 = v302;
                v386 = v350 + 145;
                v396 = __asm_movdqu(*(int128_t *)v350);
                v397 = __asm_movdqu(*(int128_t *)(v350 + 16));
                v398 = 0x2000000000 * v380 % 0x1fe000000001;
                *v260 = (int128_t)__asm_movaps(v396);
                *v304 = (int128_t)__asm_movaps(v397);
                v399 = __asm_movdqa(*v260);
                v400 = *(char *)(v350 + 138) | 4;
                *v305 = 64;
                v401 = __asm_movdqa(*v276);
                v402 = (v398 + 0x5100000000) / 0x100000000 + v350;
                *v306 = v400;
                v403 = __asm_movdqu(*(int128_t *)v402);
                v404 = __asm_movdqu(*(int128_t *)(v402 + 16));
                *v258 = 0;
                v405 = __asm_movdqu(*(int128_t *)(v402 + 32));
                v406 = __asm_movdqu(*(int128_t *)(v402 + 48));
                *v307 = (int128_t)__asm_movaps(v399);
                __asm_movups(*v262, v403);
                v407 = __asm_movdqa(*v277);
                __asm_movups(*v264, v404);
                v408 = __asm_movdqa(*v309);
                __asm_movups(*v266, v405);
                v409 = __asm_movdqa(*v268);
                __asm_movups(*v270, v406);
                v410 = __asm_movdqa(*v272);
                v411 = __asm_movdqa(*v274);
                *v310 = (int128_t)__asm_movaps(v401);
                *v311 = (int128_t)__asm_movaps(v407);
                *v312 = (int128_t)__asm_movaps(v408);
                *v313 = (int128_t)__asm_movaps(v409);
                *v314 = (int128_t)__asm_movaps(v410);
                *v315 = (int128_t)__asm_movaps(v411);
                function_4d8f60(v256, *v303, 64, 0, (int64_t)v400);
                v412 = *v278;
                v413 = *v281;
                v414 = *v279;
                v415 = *v282;
                *v288 = v413 / 0x10000;
                *(int32_t *)&v6 = v413 / 256;
                *v317 = v413 / 0x1000000;
                *(char *)((v398 - 0x4000000000) / 0x100000000 + v386) = (char)v414;
                v416 = *v284;
                v417 = *v318;
                v418 = *v293;
                v419 = *v319;
                v420 = *v289;
                v421 = *(char *)&v6;
                *(int64_t *)&v6 = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v413 & 0xff00 | v412 / 0x1000000) | v412 / 0x10000 % 256) | v412 / 256 % 256) | (int64_t)(v412 % 256)) | (int64_t)(v414 / 0x1000000)) | (int64_t)(v414 / 0x10000 % 256)) | (int64_t)(v414 / 256 % 256);
                v422 = *v284;
                *v320 = 256 * (256 * (256 * (256 * (256 * (256 * (256 * (int64_t)v417 | (int64_t)(v415 / 0x1000000)) | (int64_t)(v415 / 0x10000 % 256)) | (int64_t)(v415 / 256 % 256)) | (int64_t)(v415 % 256)) | (int64_t)v419) | (int64_t)v420) | (int64_t)v421;
                v423 = *v292;
                v424 = __asm_movdqa(v6);
                *(char *)(v402 + 25) = (char)(v423 / 256);
                __asm_movups(*(int128_t *)(v402 + 1), v424);
                *(int64_t *)(v402 + 17) = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v423 & 0xff00 | v418 / 0x1000000) | v418 / 0x10000 % 256) | v418 / 256 % 256) | (int64_t)(v418 % 256)) | (int64_t)(v416 / 0x1000000)) | (int64_t)(v416 / 0x10000 % 256)) | (int64_t)(v422 / 256 % 256);
                *(char *)(v402 + 27) = (char)(v423 / 0x1000000);
                *(char *)(v402 + 26) = (char)(v423 / 0x10000);
                *(int32_t *)(v402 + 28) = *v299;
                v425 = *v379;
                v426 = (int64_t)v425 + 0xffffffff;
                v427 = v426 & 0xffffffff;
                *v379 = (char)v426;
                v342 = v386;
                v545 = v408;
                v355 = v427;
                while (*v301 < (int64_t)(v425 - 1)) {
                    // 0x4d7390
                    v396 = __asm_movdqu(*(int128_t *)v350);
                    v397 = __asm_movdqu(*(int128_t *)(v350 + 16));
                    v398 = 0x2000000000 * v427 % 0x1fe000000001;
                    *v260 = (int128_t)__asm_movaps(v396);
                    *v304 = (int128_t)__asm_movaps(v397);
                    v399 = __asm_movdqa(*v260);
                    v400 = *(char *)(v350 + 138) | 4;
                    *v305 = 64;
                    v401 = __asm_movdqa(*v276);
                    v402 = (v398 + 0x5100000000) / 0x100000000 + v350;
                    *v306 = v400;
                    v403 = __asm_movdqu(*(int128_t *)v402);
                    v404 = __asm_movdqu(*(int128_t *)(v402 + 16));
                    *v258 = 0;
                    v405 = __asm_movdqu(*(int128_t *)(v402 + 32));
                    v406 = __asm_movdqu(*(int128_t *)(v402 + 48));
                    *v307 = (int128_t)__asm_movaps(v399);
                    __asm_movups(*v262, v403);
                    v407 = __asm_movdqa(*v277);
                    __asm_movups(*v264, v404);
                    v408 = __asm_movdqa(*v309);
                    __asm_movups(*v266, v405);
                    v409 = __asm_movdqa(*v268);
                    __asm_movups(*v270, v406);
                    v410 = __asm_movdqa(*v272);
                    v411 = __asm_movdqa(*v274);
                    *v310 = (int128_t)__asm_movaps(v401);
                    *v311 = (int128_t)__asm_movaps(v407);
                    *v312 = (int128_t)__asm_movaps(v408);
                    *v313 = (int128_t)__asm_movaps(v409);
                    *v314 = (int128_t)__asm_movaps(v410);
                    *v315 = (int128_t)__asm_movaps(v411);
                    function_4d8f60(v256, *v303, 64, 0, (int64_t)v400);
                    v412 = *v278;
                    v413 = *v281;
                    v414 = *v279;
                    v415 = *v282;
                    *v288 = v413 / 0x10000;
                    *(int32_t *)&v6 = v413 / 256;
                    *v317 = v413 / 0x1000000;
                    *(char *)((v398 - 0x4000000000) / 0x100000000 + v386) = (char)v414;
                    v416 = *v284;
                    v417 = *v318;
                    v418 = *v293;
                    v419 = *v319;
                    v420 = *v289;
                    v421 = *(char *)&v6;
                    *(int64_t *)&v6 = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v413 & 0xff00 | v412 / 0x1000000) | v412 / 0x10000 % 256) | v412 / 256 % 256) | (int64_t)(v412 % 256)) | (int64_t)(v414 / 0x1000000)) | (int64_t)(v414 / 0x10000 % 256)) | (int64_t)(v414 / 256 % 256);
                    v422 = *v284;
                    *v320 = 256 * (256 * (256 * (256 * (256 * (256 * (256 * (int64_t)v417 | (int64_t)(v415 / 0x1000000)) | (int64_t)(v415 / 0x10000 % 256)) | (int64_t)(v415 / 256 % 256)) | (int64_t)(v415 % 256)) | (int64_t)v419) | (int64_t)v420) | (int64_t)v421;
                    v423 = *v292;
                    v424 = __asm_movdqa(v6);
                    *(char *)(v402 + 25) = (char)(v423 / 256);
                    __asm_movups(*(int128_t *)(v402 + 1), v424);
                    *(int64_t *)(v402 + 17) = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v423 & 0xff00 | v418 / 0x1000000) | v418 / 0x10000 % 256) | v418 / 256 % 256) | (int64_t)(v418 % 256)) | (int64_t)(v416 / 0x1000000)) | (int64_t)(v416 / 0x10000 % 256)) | (int64_t)(v422 / 256 % 256);
                    *(char *)(v402 + 27) = (char)(v423 / 0x1000000);
                    *(char *)(v402 + 26) = (char)(v423 / 0x10000);
                    *(int32_t *)(v402 + 28) = *v299;
                    v425 = *v379;
                    v426 = (int64_t)v425 + 0xffffffff;
                    v427 = v426 & 0xffffffff;
                    *v379 = (char)v426;
                    v342 = v386;
                    v545 = v408;
                    v355 = v427;
                }
            } else {
                // 0x4d7310
                v342 = v350 + 145;
                v545 = v330;
                v355 = v380;
            }
            // 0x4d76ae
            v343 = v342;
            v428 = __asm_movdqa(*v326);
            v429 = __asm_movdqa(*v327);
            v430 = (32 * v355 & 0x1fe0) + v343;
            __asm_movups(*(int128_t *)v430, v428);
            __asm_movups(*(int128_t *)(v430 + 16), v429);
            v431 = *v379;
            v432 = (int64_t)v431 + 1;
            *v379 = (char)v432;
            v433 = (int64_t)__popcountdi2((int32_t)(*v374 + *v240 / 2048));
            *v301 = v433;
            v546 = v545;
            v356 = v432;
            if ((int64_t)(v431 + 1) > v433) {
                // 0x4d7714
                *v303 = v302;
                v475 = __asm_movdqu(*(int128_t *)v350);
                v476 = __asm_movdqu(*(int128_t *)(v350 + 16));
                v477 = 0x2000000000 * v432 % 0x1fe000000001;
                *v260 = (int128_t)__asm_movaps(v475);
                *v304 = (int128_t)__asm_movaps(v476);
                v478 = __asm_movdqa(*v260);
                v479 = *(char *)(v350 + 138) | 4;
                *v305 = 64;
                v480 = __asm_movdqa(*v276);
                v481 = (v477 + 0x5100000000) / 0x100000000 + v350;
                *v306 = v479;
                v482 = __asm_movdqu(*(int128_t *)v481);
                v483 = __asm_movdqu(*(int128_t *)(v481 + 16));
                *v258 = 0;
                v484 = __asm_movdqu(*(int128_t *)(v481 + 32));
                v485 = __asm_movdqu(*(int128_t *)(v481 + 48));
                *v307 = (int128_t)__asm_movaps(v478);
                __asm_movups(*v262, v482);
                v486 = __asm_movdqa(*v277);
                __asm_movups(*v264, v483);
                v487 = __asm_movdqa(*v309);
                __asm_movups(*v266, v484);
                v488 = __asm_movdqa(*v268);
                __asm_movups(*v270, v485);
                v489 = __asm_movdqa(*v272);
                v490 = __asm_movdqa(*v274);
                *v310 = (int128_t)__asm_movaps(v480);
                *v311 = (int128_t)__asm_movaps(v486);
                *v312 = (int128_t)__asm_movaps(v487);
                *v313 = (int128_t)__asm_movaps(v488);
                *v314 = (int128_t)__asm_movaps(v489);
                *v315 = (int128_t)__asm_movaps(v490);
                function_4d8f60(v256, *v303, 64, 0, (int64_t)v479);
                v491 = *v278;
                v492 = *v281;
                v493 = *v279;
                v494 = *v282;
                *v288 = v492 / 0x10000;
                *(int32_t *)&v6 = v492 / 256;
                *v317 = v492 / 0x1000000;
                *(char *)((v477 - 0x4000000000) / 0x100000000 + v343) = (char)v493;
                v495 = *v284;
                v496 = *v318;
                v497 = *v293;
                v498 = *v319;
                v499 = *v289;
                v500 = *(char *)&v6;
                *(int64_t *)&v6 = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v492 & 0xff00 | v491 / 0x1000000) | v491 / 0x10000 % 256) | v491 / 256 % 256) | (int64_t)(v491 % 256)) | (int64_t)(v493 / 0x1000000)) | (int64_t)(v493 / 0x10000 % 256)) | (int64_t)(v493 / 256 % 256);
                v501 = *v284;
                *v320 = 256 * (256 * (256 * (256 * (256 * (256 * (256 * (int64_t)v496 | (int64_t)(v494 / 0x1000000)) | (int64_t)(v494 / 0x10000 % 256)) | (int64_t)(v494 / 256 % 256)) | (int64_t)(v494 % 256)) | (int64_t)v498) | (int64_t)v499) | (int64_t)v500;
                v502 = *v292;
                v503 = __asm_movdqa(v6);
                *(char *)(v481 + 25) = (char)(v502 / 256);
                __asm_movups(*(int128_t *)(v481 + 1), v503);
                *(int64_t *)(v481 + 17) = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v502 & 0xff00 | v497 / 0x1000000) | v497 / 0x10000 % 256) | v497 / 256 % 256) | (int64_t)(v497 % 256)) | (int64_t)(v495 / 0x1000000)) | (int64_t)(v495 / 0x10000 % 256)) | (int64_t)(v501 / 256 % 256);
                *(char *)(v481 + 27) = (char)(v502 / 0x1000000);
                *(char *)(v481 + 26) = (char)(v502 / 0x10000);
                *(int32_t *)(v481 + 28) = *v299;
                v504 = *v379;
                v505 = (int64_t)v504 + 0xffffffff;
                v506 = v505 & 0xffffffff;
                *v379 = (char)v505;
                v546 = v489;
                v356 = v506;
                while (*v301 < (int64_t)(v504 - 1)) {
                    // 0x4d7730
                    v475 = __asm_movdqu(*(int128_t *)v350);
                    v476 = __asm_movdqu(*(int128_t *)(v350 + 16));
                    v477 = 0x2000000000 * v506 % 0x1fe000000001;
                    *v260 = (int128_t)__asm_movaps(v475);
                    *v304 = (int128_t)__asm_movaps(v476);
                    v478 = __asm_movdqa(*v260);
                    v479 = *(char *)(v350 + 138) | 4;
                    *v305 = 64;
                    v480 = __asm_movdqa(*v276);
                    v481 = (v477 + 0x5100000000) / 0x100000000 + v350;
                    *v306 = v479;
                    v482 = __asm_movdqu(*(int128_t *)v481);
                    v483 = __asm_movdqu(*(int128_t *)(v481 + 16));
                    *v258 = 0;
                    v484 = __asm_movdqu(*(int128_t *)(v481 + 32));
                    v485 = __asm_movdqu(*(int128_t *)(v481 + 48));
                    *v307 = (int128_t)__asm_movaps(v478);
                    __asm_movups(*v262, v482);
                    v486 = __asm_movdqa(*v277);
                    __asm_movups(*v264, v483);
                    v487 = __asm_movdqa(*v309);
                    __asm_movups(*v266, v484);
                    v488 = __asm_movdqa(*v268);
                    __asm_movups(*v270, v485);
                    v489 = __asm_movdqa(*v272);
                    v490 = __asm_movdqa(*v274);
                    *v310 = (int128_t)__asm_movaps(v480);
                    *v311 = (int128_t)__asm_movaps(v486);
                    *v312 = (int128_t)__asm_movaps(v487);
                    *v313 = (int128_t)__asm_movaps(v488);
                    *v314 = (int128_t)__asm_movaps(v489);
                    *v315 = (int128_t)__asm_movaps(v490);
                    function_4d8f60(v256, *v303, 64, 0, (int64_t)v479);
                    v491 = *v278;
                    v492 = *v281;
                    v493 = *v279;
                    v494 = *v282;
                    *v288 = v492 / 0x10000;
                    *(int32_t *)&v6 = v492 / 256;
                    *v317 = v492 / 0x1000000;
                    *(char *)((v477 - 0x4000000000) / 0x100000000 + v343) = (char)v493;
                    v495 = *v284;
                    v496 = *v318;
                    v497 = *v293;
                    v498 = *v319;
                    v499 = *v289;
                    v500 = *(char *)&v6;
                    *(int64_t *)&v6 = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v492 & 0xff00 | v491 / 0x1000000) | v491 / 0x10000 % 256) | v491 / 256 % 256) | (int64_t)(v491 % 256)) | (int64_t)(v493 / 0x1000000)) | (int64_t)(v493 / 0x10000 % 256)) | (int64_t)(v493 / 256 % 256);
                    v501 = *v284;
                    *v320 = 256 * (256 * (256 * (256 * (256 * (256 * (256 * (int64_t)v496 | (int64_t)(v494 / 0x1000000)) | (int64_t)(v494 / 0x10000 % 256)) | (int64_t)(v494 / 256 % 256)) | (int64_t)(v494 % 256)) | (int64_t)v498) | (int64_t)v499) | (int64_t)v500;
                    v502 = *v292;
                    v503 = __asm_movdqa(v6);
                    *(char *)(v481 + 25) = (char)(v502 / 256);
                    __asm_movups(*(int128_t *)(v481 + 1), v503);
                    *(int64_t *)(v481 + 17) = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v502 & 0xff00 | v497 / 0x1000000) | v497 / 0x10000 % 256) | v497 / 256 % 256) | (int64_t)(v497 % 256)) | (int64_t)(v495 / 0x1000000)) | (int64_t)(v495 / 0x10000 % 256)) | (int64_t)(v501 / 256 % 256);
                    *(char *)(v481 + 27) = (char)(v502 / 0x1000000);
                    *(char *)(v481 + 26) = (char)(v502 / 0x10000);
                    *(int32_t *)(v481 + 28) = *v299;
                    v504 = *v379;
                    v505 = (int64_t)v504 + 0xffffffff;
                    v506 = v505 & 0xffffffff;
                    *v379 = (char)v505;
                    v546 = v489;
                    v356 = v506;
                }
            }
            // 0x4d7a4e
            v468 = __asm_movdqa(*v328);
            v469 = __asm_movdqa(*v329);
            v470 = (32 * v356 & 0x1fe0) + v343;
            __asm_movups(*(int128_t *)v470, v468);
            __asm_movups(*(int128_t *)(v470 + 16), v469);
            *v379 = *v379 + 1;
            v340 = v374;
            v544 = v546;
            v349 = v350;
        } else {
            // 0x4d636e
            v367 = (int128_t *)v551;
            v368 = __asm_movdqu(*v367);
            v369 = (int128_t *)(v551 + 16);
            v370 = __asm_movdqu(*v369);
            v371 = __asm_pxor(v330, v330);
            *(int16_t *)v243 = 0;
            *(int64_t *)&v6 = v242;
            *v245 = v338;
            *v246 = v552;
            *v247 = (int128_t)__asm_movaps(v368);
            *v248 = (int128_t)__asm_movaps(v370);
            __asm_movups(*v249, v371);
            __asm_movups(*v250, v371);
            __asm_movups(*v251, v371);
            __asm_movups(*v252, v371);
            v372 = *v253;
            v351 = v336;
            v359 = 64;
            v362 = v242;
            v357 = v372;
            if (v336 >= 65) {
                // 0x4d63e6
                v383 = v372 + (v336 - 1 & -64);
                v384 = v372 + 64;
                function_4d8f60(v244, v372, 64, v552, v339 | 1);
                v385 = (int64_t)*v254 + 1;
                *v254 = (char)v385;
                v344 = v385;
                v345 = v384;
                if (v384 != v383) {
                    v391 = *v245;
                    v392 = *v246;
                    v393 = v345 + 64;
                    function_4d8f60(v244, v345, 64, v392, (int64_t)((char)v344 == 0) | (int64_t)v391);
                    v394 = (int64_t)*v254 + 1;
                    *v254 = (char)v394;
                    v344 = v394;
                    v345 = v393;
                    while (v393 != v383) {
                        // 0x4d6410
                        v391 = *v245;
                        v392 = *v246;
                        v393 = v345 + 64;
                        function_4d8f60(v244, v345, 64, v392, (int64_t)((char)v344 == 0) | (int64_t)v391);
                        v394 = (int64_t)*v254 + 1;
                        *v254 = (char)v394;
                        v344 = v394;
                        v345 = v393;
                    }
                }
                // 0x4d6459
                v395 = (int64_t)*v255;
                v351 = *v240 + (v336 - 65 & -64 ^ -64);
                v359 = 64 - v395;
                v362 = *(int64_t *)&v6 + v395;
                v357 = v383;
            }
            // 0x4d647e
            v358 = v357;
            v363 = v362;
            v360 = v359;
            v352 = v351;
            v381 = v352 > v360 ? v360 : v352;
            v382 = (int32_t)v381;
            if (v382 >= 8) {
                // 0x4d7a86
                v387 = v363 + 8 & -8;
                v14 = v387;
                *(int64_t *)v363 = *(int64_t *)v358;
                v388 = (v381 & 0xffffffff) - 8;
                *(int64_t *)(v388 + v363) = *(int64_t *)(v388 + v358);
                v389 = v363 - v387;
                v390 = (int32_t)(v389 + v381);
                if (v390 >= 8) {
                    // 0x4d7ab9
                    v361 = 0;
                    v474 = v361 + 8;
                    *(int64_t *)(v14 + v361) = *(int64_t *)(v358 - v389 + v361);
                    while ((v390 & -8) > (int32_t)v474) {
                        // 0x4d7ab9
                        v361 = v474 & 0xffffffff;
                        v474 = v361 + 8;
                        *(int64_t *)(v14 + v361) = *(int64_t *)(v358 - v389 + v361);
                    }
                }
            } else {
                if ((v381 & 4) != 0) {
                    // 0x4d7bf8
                    *(int32_t *)v363 = *(int32_t *)v358;
                    v467 = (v381 & 0xffffffff) - 4;
                    *(int32_t *)(v467 + v363) = *(int32_t *)(v467 + v358);
                } else {
                    if (v382 != 0) {
                        // 0x4d649a
                        *(char *)v363 = *(char *)v358;
                        if ((v381 & 2) != 0) {
                            // 0x4d7d1e
                            v542 = (v381 & 0xffffffff) - 2;
                            *(int16_t *)(v542 + v363) = *(int16_t *)(v542 + v358);
                        }
                    }
                }
            }
            // 0x4d64a7
            v438 = *v255 + (char)v381;
            v439 = *v246;
            v440 = (int64_t)(*v245 | (char)(*v254 == 0) | 2);
            v441 = v438;
            v442 = __asm_movdqa(*v247);
            v443 = __asm_movdqa(*v248);
            *v258 = v439;
            v444 = __asm_movdqu(*v249);
            v445 = __asm_movdqu(*v250);
            *(int16_t *)v259 = (int16_t)(256 * v440 | v441);
            v446 = __asm_movdqu(*v251);
            *v260 = (int128_t)__asm_movaps(v442);
            v447 = __asm_movdqu(*v252);
            __asm_movups(*v262, v444);
            __asm_movups(*v264, v445);
            __asm_movups(*v266, v446);
            v448 = __asm_movdqa(*v268);
            __asm_movups(*v270, v447);
            v449 = __asm_movdqa(*v272);
            v450 = __asm_movdqa(*v274);
            *v276 = (int128_t)__asm_movaps(v443);
            *(int128_t *)(v7 + 272) = (int128_t)__asm_movaps(v442);
            v451 = __asm_movdqa(*v277);
            *(int128_t *)(v7 + 288) = (int128_t)__asm_movaps(v443);
            v452 = __asm_movdqa(*(int128_t *)(v7 + 544));
            *v255 = v438;
            *(int128_t *)(v7 + 304) = (int128_t)__asm_movaps(v451);
            *(int128_t *)(v7 + 320) = (int128_t)__asm_movaps(v452);
            *(int128_t *)(v7 + 336) = (int128_t)__asm_movaps(v448);
            *(int128_t *)(v7 + 352) = (int128_t)__asm_movaps(v449);
            *(int128_t *)(v7 + 368) = (int128_t)__asm_movaps(v450);
            function_4d8f60(v256, v7 + 312, v441, v439, v440);
            v453 = *v278;
            v454 = *v279;
            v455 = *v281;
            v456 = *v282;
            *(int32_t *)v283 = v454;
            v457 = *v284;
            *(int32_t *)&v6 = v455 / 256;
            *v286 = v455 / 0x1000000;
            *v288 = v456 / 256;
            v458 = *v289;
            *(int64_t *)v290 = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v455 & 0xff00 | v453 / 0x1000000) | v453 / 0x10000 % 256) | v453 / 256 % 256) | (int64_t)(v453 % 256)) | (int64_t)(v454 / 0x1000000)) | (int64_t)(v454 / 0x10000 % 256)) | (int64_t)(v454 / 256 % 256);
            v459 = *v292;
            v460 = *(char *)v285;
            v461 = *(char *)&v6;
            v462 = *v293;
            *v294 = 256 * (256 * (256 * (256 * ((int64_t)(256 * (256 * (256 * v457 & 0xff00 | v456 / 0x1000000) | v456 / 0x10000 % 256)) | (int64_t)v458) | (int64_t)(v456 % 256)) | (int64_t)v460) | (int64_t)(v455 / 0x10000 % 256)) | (int64_t)v461;
            *v295 = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (v462 / 0x1000000 | 256 * v459 & 0xff00) | v462 / 0x10000 % 256) | v462 / 256 % 256) | (int64_t)(v462 % 256)) | (int64_t)(v457 / 0x1000000)) | (int64_t)(v457 / 0x10000 % 256)) | (int64_t)(v457 / 256 % 256);
            *(int32_t *)v296 = v459 / 256;
            *(int32_t *)v297 = v459 / 0x1000000;
            *(int32_t *)v298 = v459 / 0x10000;
            *v300 = *v299;
            v463 = (int64_t)__popcountdi2((int32_t)*v246);
            *v301 = v463;
            v464 = (char *)(v551 + 144);
            v465 = *v464;
            v466 = v465;
            if (v466 > v463) {
                // 0x4d67df
                *v303 = v302;
                v473 = v551 + 145;
                v508 = __asm_movdqu(*v367);
                v509 = __asm_movdqu(*v369);
                v510 = 0x2000000000 * v466 % 0x1fe000000001;
                *v260 = (int128_t)__asm_movaps(v508);
                *v304 = (int128_t)__asm_movaps(v509);
                v511 = __asm_movdqa(*v260);
                v512 = *v337 | 4;
                *v305 = 64;
                v513 = __asm_movdqa(*v276);
                v514 = (v510 + 0x5100000000) / 0x100000000 + v551;
                *v306 = v512;
                v515 = __asm_movdqu(*(int128_t *)v514);
                v516 = __asm_movdqu(*(int128_t *)(v514 + 16));
                *v258 = 0;
                v517 = __asm_movdqu(*(int128_t *)(v514 + 32));
                v518 = __asm_movdqu(*(int128_t *)(v514 + 48));
                *v307 = (int128_t)__asm_movaps(v511);
                __asm_movups(*v262, v515);
                v519 = __asm_movdqa(*v277);
                __asm_movups(*v264, v516);
                v520 = __asm_movdqa(*v309);
                __asm_movups(*v266, v517);
                v521 = __asm_movdqa(*v268);
                __asm_movups(*v270, v518);
                v522 = __asm_movdqa(*v272);
                v523 = __asm_movdqa(*v274);
                *v310 = (int128_t)__asm_movaps(v513);
                *v311 = (int128_t)__asm_movaps(v519);
                *v312 = (int128_t)__asm_movaps(v520);
                *v313 = (int128_t)__asm_movaps(v521);
                *v314 = (int128_t)__asm_movaps(v522);
                *v315 = (int128_t)__asm_movaps(v523);
                function_4d8f60(v256, *v303, 64, 0, (int64_t)v512);
                v524 = *v278;
                v525 = *v281;
                v526 = *v279;
                v527 = *v282;
                *(int32_t *)&v6 = v524 / 256;
                *(char *)((v510 - 0x4000000000) / 0x100000000 + v473) = (char)v526;
                *v288 = v525 / 256;
                v528 = *(char *)&v6;
                *v317 = v525 / 0x10000;
                v529 = *v284;
                v530 = *v318;
                *(int64_t *)&v6 = 256 * (256 * (256 * (256 * ((int64_t)(256 * (256 * (256 * v525 & 0xff00 | v524 / 0x1000000) | v524 / 0x10000 % 256)) | (int64_t)v528) | (int64_t)(v524 % 256)) | (int64_t)(v526 / 0x1000000)) | (int64_t)(v526 / 0x10000 % 256)) | (int64_t)(v526 / 256 % 256);
                v531 = *v319;
                v532 = *v293;
                v533 = *v289;
                *v320 = 256 * (256 * (256 * (256 * (256 * (256 * (256 * (int64_t)v530 | (int64_t)(v527 / 0x1000000)) | (int64_t)(v527 / 0x10000 % 256)) | (int64_t)(v527 / 256 % 256)) | (int64_t)(v527 % 256)) | (int64_t)(v525 / 0x1000000)) | (int64_t)v531) | (int64_t)v533;
                v534 = *v292;
                v535 = *v284;
                v536 = __asm_movdqa(v6);
                *(char *)(v514 + 25) = (char)(v534 / 256);
                __asm_movups(*(int128_t *)(v514 + 1), v536);
                *(int64_t *)(v514 + 17) = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v534 & 0xff00 | v532 / 0x1000000) | v532 / 0x10000 % 256) | v532 / 256 % 256) | (int64_t)(v532 % 256)) | (int64_t)(v529 / 0x1000000)) | (int64_t)(v529 / 0x10000 % 256)) | (int64_t)(v535 / 256 % 256);
                *(char *)(v514 + 27) = (char)(v534 / 0x1000000);
                *(char *)(v514 + 26) = (char)(v534 / 0x10000);
                *(int32_t *)(v514 + 28) = *v299;
                v537 = *v464;
                v538 = (int64_t)v537 + 0xffffffff;
                v539 = v538 & 0xffffffff;
                *v464 = (char)v538;
                v341 = v473;
                v543 = v513;
                v353 = v537;
                v354 = v539;
                while (*v301 < (int64_t)(v537 - 1)) {
                    // 0x4d67f0
                    v508 = __asm_movdqu(*v367);
                    v509 = __asm_movdqu(*v369);
                    v510 = 0x2000000000 * v539 % 0x1fe000000001;
                    *v260 = (int128_t)__asm_movaps(v508);
                    *v304 = (int128_t)__asm_movaps(v509);
                    v511 = __asm_movdqa(*v260);
                    v512 = *v337 | 4;
                    *v305 = 64;
                    v513 = __asm_movdqa(*v276);
                    v514 = (v510 + 0x5100000000) / 0x100000000 + v551;
                    *v306 = v512;
                    v515 = __asm_movdqu(*(int128_t *)v514);
                    v516 = __asm_movdqu(*(int128_t *)(v514 + 16));
                    *v258 = 0;
                    v517 = __asm_movdqu(*(int128_t *)(v514 + 32));
                    v518 = __asm_movdqu(*(int128_t *)(v514 + 48));
                    *v307 = (int128_t)__asm_movaps(v511);
                    __asm_movups(*v262, v515);
                    v519 = __asm_movdqa(*v277);
                    __asm_movups(*v264, v516);
                    v520 = __asm_movdqa(*v309);
                    __asm_movups(*v266, v517);
                    v521 = __asm_movdqa(*v268);
                    __asm_movups(*v270, v518);
                    v522 = __asm_movdqa(*v272);
                    v523 = __asm_movdqa(*v274);
                    *v310 = (int128_t)__asm_movaps(v513);
                    *v311 = (int128_t)__asm_movaps(v519);
                    *v312 = (int128_t)__asm_movaps(v520);
                    *v313 = (int128_t)__asm_movaps(v521);
                    *v314 = (int128_t)__asm_movaps(v522);
                    *v315 = (int128_t)__asm_movaps(v523);
                    function_4d8f60(v256, *v303, 64, 0, (int64_t)v512);
                    v524 = *v278;
                    v525 = *v281;
                    v526 = *v279;
                    v527 = *v282;
                    *(int32_t *)&v6 = v524 / 256;
                    *(char *)((v510 - 0x4000000000) / 0x100000000 + v473) = (char)v526;
                    *v288 = v525 / 256;
                    v528 = *(char *)&v6;
                    *v317 = v525 / 0x10000;
                    v529 = *v284;
                    v530 = *v318;
                    *(int64_t *)&v6 = 256 * (256 * (256 * (256 * ((int64_t)(256 * (256 * (256 * v525 & 0xff00 | v524 / 0x1000000) | v524 / 0x10000 % 256)) | (int64_t)v528) | (int64_t)(v524 % 256)) | (int64_t)(v526 / 0x1000000)) | (int64_t)(v526 / 0x10000 % 256)) | (int64_t)(v526 / 256 % 256);
                    v531 = *v319;
                    v532 = *v293;
                    v533 = *v289;
                    *v320 = 256 * (256 * (256 * (256 * (256 * (256 * (256 * (int64_t)v530 | (int64_t)(v527 / 0x1000000)) | (int64_t)(v527 / 0x10000 % 256)) | (int64_t)(v527 / 256 % 256)) | (int64_t)(v527 % 256)) | (int64_t)(v525 / 0x1000000)) | (int64_t)v531) | (int64_t)v533;
                    v534 = *v292;
                    v535 = *v284;
                    v536 = __asm_movdqa(v6);
                    *(char *)(v514 + 25) = (char)(v534 / 256);
                    __asm_movups(*(int128_t *)(v514 + 1), v536);
                    *(int64_t *)(v514 + 17) = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v534 & 0xff00 | v532 / 0x1000000) | v532 / 0x10000 % 256) | v532 / 256 % 256) | (int64_t)(v532 % 256)) | (int64_t)(v529 / 0x1000000)) | (int64_t)(v529 / 0x10000 % 256)) | (int64_t)(v535 / 256 % 256);
                    *(char *)(v514 + 27) = (char)(v534 / 0x1000000);
                    *(char *)(v514 + 26) = (char)(v534 / 0x10000);
                    *(int32_t *)(v514 + 28) = *v299;
                    v537 = *v464;
                    v538 = (int64_t)v537 + 0xffffffff;
                    v539 = v538 & 0xffffffff;
                    *v464 = (char)v538;
                    v341 = v473;
                    v543 = v513;
                    v353 = v537;
                    v354 = v539;
                }
            } else {
                // 0x4d7acf
                v341 = v551 + 145;
                v543 = v452;
                v353 = v465 + 1;
                v354 = v466;
            }
            // 0x4d6b14
            v540 = __asm_movdqa(*(int128_t *)v290);
            v541 = (32 * v354 & 0x1fe0) + v341;
            *(char *)v541 = *(char *)v283;
            *(int64_t *)(v541 + 17) = *v295;
            *(char *)(v541 + 27) = *(char *)v297;
            *(char *)(v541 + 25) = *(char *)v296;
            __asm_movups(*(int128_t *)(v541 + 1), v540);
            *(char *)(v541 + 26) = *(char *)v298;
            *(int32_t *)(v541 + 28) = *v300;
            *v464 = v353;
            v340 = (int64_t *)(v551 + 64);
            v544 = v543;
            v349 = v551;
        }
        // 0x4d6b7d
        v547 = *v240;
        v548 = *v239 - v547;
        *v239 = v548;
        v549 = *v340 + *v241;
        *v253 = *v253 + v547;
        *v340 = v549;
        v18 = v239;
        v17 = v238;
        v550 = v544;
        v20 = v349;
    }
    goto lab_0x4d6bad;
  lab_0x4d6bad:
    // 0x4d6bad
    if (*v18 == 0) {
        // 0x4d6bb5
        return *(int64_t *)(v7 + (int64_t)&g33) - __readfsqword(40);
    }
    int128_t v236 = v550;
    char * v226 = (char *)(v20 + 136); // 0x4d6bde
    unsigned char v553 = *v226; // 0x4d6bde
    int64_t v237 = v20 + 72; // 0x4d6be7
    int64_t * v230 = (int64_t *)(v7 + 56); // 0x4d6bec
    *v230 = v237;
    int64_t * v145 = v18; // 0x4d6bf3
    int64_t v146 = v17; // 0x4d6bf3
    int64_t v147 = v20; // 0x4d6bf3
    int64_t v224; // 0x4d5a50
    int64_t v225; // 0x4d7c1f
    if (v553 != 0) {
        int64_t v554 = v553; // 0x4d6bde
        uint64_t v555 = *v18; // 0x4d7c0b
        uint64_t v556 = 64 - v554; // 0x4d7c19
        v225 = v556 > v555 ? v555 : v556;
        int64_t v557 = v237 + v554; // 0x4d7c23
        uint32_t v558 = (int32_t)v225; // 0x4d7c28
        if (v558 >= 8) {
            int64_t v559 = *(int64_t *)(v7 + 72); // 0x4d7c6f
            int64_t v560 = v557 + 8 & -8; // 0x4d7c78
            *(int64_t *)v557 = *(int64_t *)v559;
            int64_t v561 = (v225 & 0xffffffff) - 8;
            *(int64_t *)(v561 + v557) = *(int64_t *)(v559 + v561);
            int64_t v562 = v557 - v560; // 0x4d7c8f
            __asm_rep_movsq_memcpy((char *)v560, (char *)(v559 - v562), (v225 + v562) / 8 % 0x20000000);
            // 0x4d7ca0
            v224 = (int64_t)*v226;
            goto lab_0x4d7c41;
        } else {
            if ((v225 & 4) != 0) {
                int64_t v563 = *(int64_t *)(v7 + 72); // 0x4d7e19
                *(int32_t *)v557 = *(int32_t *)v563;
                int64_t v564 = (v225 & 0xffffffff) - 4;
                *(int32_t *)(v564 + v557) = *(int32_t *)(v563 + v564);
                v224 = (int64_t)*v226;
                goto lab_0x4d7c41;
            } else {
                // 0x4d7c38
                v224 = v554;
                if (v558 != 0) {
                    int64_t * v565 = (int64_t *)(v7 + 72); // 0x4d7d99
                    *(char *)v557 = *(char *)*v565;
                    if ((v225 & 2) == 0) {
                        // 0x4d7ca0
                        v224 = (int64_t)*v226;
                        goto lab_0x4d7c41;
                    } else {
                        int64_t v566 = (v225 & 0xffffffff) - 2;
                        *(int16_t *)(v566 + v557) = *(int16_t *)(*v565 + v566);
                        v224 = (int64_t)*v226;
                        goto lab_0x4d7c41;
                    }
                } else {
                    goto lab_0x4d7c41;
                }
            }
        }
    } else {
        goto lab_0x4d6bf9;
    }
  lab_0x4d5b6d:;
    int64_t v56 = 0x100000000 * v30 >> 32; // 0x4d5b6d
    int64_t v57 = v23 + v56; // 0x4d5b6d
    uint32_t v58 = (int32_t)v25; // 0x4d5b74
    if (v58 >= 8) {
        // 0x4d7ae9
        *(int64_t *)v57 = *(int64_t *)v26;
        int64_t v59 = *(int64_t *)(v26 + v16 - 8); // 0x4d7af1
        *(int64_t *)(v57 + v16 - 8) = v59;
        int64_t v60 = v57 + 8 & -8; // 0x4d7aff
        int64_t v61 = v57 - v60; // 0x4d7b03
        uint32_t v62 = (int32_t)(v61 + v25); // 0x4d7b10
        if (v62 >= 8) {
            int64_t v63 = 0;
            int64_t v64 = v63 + 8; // 0x4d7b20
            *(int64_t *)(v63 + v60) = *(int64_t *)(v26 - v61 + v63);
            while ((v62 & -8) > (int32_t)v64) {
                // 0x4d7b1e
                v63 = v64 & 0xffffffff;
                v64 = v63 + 8;
                *(int64_t *)(v63 + v60) = *(int64_t *)(v26 - v61 + v63);
            }
        }
    } else {
        if ((v25 & 4) != 0) {
            // 0x4d7dea
            *(int32_t *)v57 = *(int32_t *)v26;
            int32_t v65 = *(int32_t *)(v26 + v16 - 4); // 0x4d7dee
            *(int32_t *)(v57 + v16 - 4) = v65;
        } else {
            if (v58 != 0) {
                // 0x4d7bd7
                *(char *)v57 = *(char *)v26;
                if ((v25 & 2) != 0) {
                    int16_t v66 = *(int16_t *)(v26 + v16 - 2); // 0x4d7be6
                    *(int16_t *)(v57 + v16 - 2) = v66;
                }
            }
        }
    }
    uint64_t v67 = v27 + (int64_t)*v11; // 0x4d5b9c
    uint64_t v68 = a3 - v28; // 0x4d5b9e
    *v11 = (char)v67;
    if (v68 == 0) {
        // 0x4d6bb5
        return *(int64_t *)(v7 + (int64_t)&g33) - __readfsqword(40);
    }
    int128_t * v69 = (int128_t *)v30; // 0x4d5bb1
    int128_t v70 = __asm_movdqu(*v69); // 0x4d5bb1
    int64_t * v71 = (int64_t *)(a1 + 64); // 0x4d5bb8
    int64_t v72 = *v71; // 0x4d5bb8
    int128_t v73; // bp-1032, 0x4d5a50
    int64_t v74 = (int64_t)&v73; // 0x4d5bbd
    char v75 = *v8; // 0x4d5bcd
    __asm_movups(v1, v70);
    int128_t v76 = __asm_movdqu(*(int128_t *)(a1 + 88)); // 0x4d5be8
    int128_t * v77 = (int128_t *)v29; // 0x4d5bf4
    int128_t v78 = __asm_movdqu(*v77); // 0x4d5bf4
    int128_t * v79 = (int128_t *)(a1 + 48); // 0x4d5bfb
    int128_t v80 = __asm_movdqu(*v79); // 0x4d5bfb
    __asm_movups(v1, v76);
    int128_t v81 = __asm_movdqu(*(int128_t *)(a1 + 104)); // 0x4d5c12
    char * v82 = (char *)(a1 + 138); // 0x4d5c19
    char v83 = *v82; // 0x4d5c19
    v73 = __asm_movaps(v78);
    __asm_movups(v1, v81);
    int128_t v84 = __asm_movdqu(*(int128_t *)(a1 + 120)); // 0x4d5c3a
    __asm_movaps(v78);
    int128_t v85 = __asm_movdqa((int128_t)v72); // 0x4d5c4c
    __asm_movups(v1, v84);
    int128_t v86 = __asm_movdqa(v1); // 0x4d5c5d
    uint64_t v87 = __asm_movaps(v80); // 0x4d5c71
    __asm_movaps(v80);
    int128_t v88 = __asm_movdqa(v1); // 0x4d5c81
    __asm_movaps(v85);
    int128_t v89 = __asm_movdqa(v1); // 0x4d5c92
    __asm_movaps(v86);
    int128_t v90 = __asm_movdqa(v1); // 0x4d5ca3
    __asm_movaps(v88);
    __asm_movaps(v89);
    __asm_movaps(v90);
    int64_t v91; // bp-1216, 0x4d5a50
    function_4d8f60(v74, (int64_t)&v91, v67 % 256, v72, (int64_t)(v83 | (char)(v75 == 0) | 2));
    int128_t v92 = v73; // 0x4d5cd7
    v6 = v3 / 256;
    int64_t v93 = 256 * (256 * (int64_t)(256 * (256 * (256 * v3 & 0xff00 | v5 / 0x1000000) | v5 / 0x10000 % 256) | v5 / 256 % 256) | (int64_t)(v5 % 256)); // 0x4d5d75
    int64_t v94 = 256 * (256 * (v87 / 0x1000000 % 256 | 256 * (256 * (int64_t)(256 * (256 * (256 * v3 & 0xff00 | v4 / 0x1000000) | v4 / 0x10000 % 256) | v4 / 256 % 256) | (int64_t)(v4 % 256))) | v87 / 0x10000 % 256) | v87 / 256 % 256; // 0x4d5e72
    uint32_t v95 = v3 / 256; // 0x4d5e7f
    uint32_t v96 = v3 / 0x1000000; // 0x4d5e8b
    uint32_t v97 = v3 / 0x10000; // 0x4d5e8e
    int32_t v98 = __popcountdi2((int32_t)*v71); // 0x4d5ead
    char * v99 = (char *)(a1 + 144); // 0x4d5eb2
    unsigned char v100 = *v99; // 0x4d5eb2
    int64_t v101 = v100; // 0x4d5eb2
    uint64_t v102 = (int64_t)v98; // 0x4d5ebb
    int64_t v103; // 0x4d5a50
    char v104; // 0x4d5a50
    char v105; // 0x4d5a50
    char v106; // 0x4d5a50
    int128_t * v107; // 0x4d5a50
    int64_t v108; // 0x4d5a50
    char v109; // 0x4d5a50
    if (v102 >= v101) {
        // 0x4d7dfb
        v107 = (int128_t *)(a1 + 16);
        v106 = v96;
        v105 = v97;
        v104 = v95;
        v103 = a1 + 145;
        v108 = v101;
        v109 = v100 + 1;
    } else {
        int128_t * v110 = (int128_t *)(a1 + 16);
        int64_t v111 = a1 + 145;
        char v112 = v95;
        char v113 = v96;
        char v114 = v97;
        int128_t v115 = __asm_movdqu(*(int128_t *)&v14); // 0x4d5ee8
        uint64_t v116 = 0x2000000000 * v101 % 0x1fe000000001; // 0x4d5ef0
        v73 = __asm_movaps(v115);
        *(int128_t *)(v74 + 16) = (int128_t)__asm_movaps(__asm_movdqu(*v110));
        int128_t v117 = __asm_movdqa(0x8000000000000000 * v73 >> 64); // 0x4d5f27
        int128_t v118 = __asm_movdqa((int128_t)v87); // 0x4d5f30
        int64_t v119 = (v116 + 0x5100000000) / 0x100000000 + a1; // 0x4d5f39
        int128_t v120 = __asm_movdqu(*(int128_t *)v119); // 0x4d5f48
        int128_t v121 = __asm_movdqu(*(int128_t *)(v119 + 16)); // 0x4d5f4c
        int128_t v122 = __asm_movdqu(*(int128_t *)(v119 + 32)); // 0x4d5f59
        int128_t v123 = __asm_movdqu(*(int128_t *)(v119 + 48)); // 0x4d5f5e
        __asm_movups(v1, v120);
        int128_t v124 = __asm_movdqa(0); // 0x4d5f77
        __asm_movups(v1, v121);
        int128_t v125 = __asm_movdqa(v1); // 0x4d5f88
        __asm_movups(v1, v122);
        int128_t v126 = __asm_movdqa(v1); // 0x4d5f99
        __asm_movups(v1, v123);
        int128_t v127 = __asm_movdqa(v1); // 0x4d5faa
        int128_t v128 = __asm_movdqa(v1); // 0x4d5fb3
        __asm_movaps(v117);
        __asm_movaps(v118);
        __asm_movaps(v124);
        __asm_movaps(v125);
        __asm_movaps(v126);
        __asm_movaps(v127);
        __asm_movaps(v128);
        int64_t v129; // bp-1104, 0x4d5a50
        function_4d8f60(v74, (int64_t)&v129, 64, 0, (int64_t)(*v82 | 4));
        uint64_t v130 = (int64_t)v73; // 0x4d6007
        *(char *)((v116 - 0x4000000000) / 0x100000000 + v111) = (char)v73;
        int128_t v131 = 256 * (256 * (v130 / 0x1000000 % 256 | v93) | v130 / 0x10000 % 256) | v130 / 256 % 256; // 0x4d6153
        v6 = v131;
        int128_t v132 = __asm_movdqa(v131); // 0x4d6180
        *(char *)(v119 + 25) = v112;
        __asm_movups(*(int128_t *)(v119 + 1), v132);
        *(int64_t *)(v119 + 17) = v94;
        *(char *)(v119 + 27) = v113;
        *(char *)(v119 + 26) = v114;
        unsigned char v133 = *v99; // 0x4d61d5
        int64_t v134 = (int64_t)v133 + 0xffffffff; // 0x4d61de
        int64_t v135 = v134 & 0xffffffff; // 0x4d61de
        *v99 = (char)v134;
        v107 = v110;
        v106 = v113;
        v105 = v114;
        v104 = v112;
        v103 = v111;
        v108 = v135;
        v109 = v133;
        while (v102 < (int64_t)(v133 - 1)) {
            // 0x4d5ee0
            v115 = __asm_movdqu(*(int128_t *)&v14);
            v116 = 0x2000000000 * v135 % 0x1fe000000001;
            v73 = __asm_movaps(v115);
            *(int128_t *)(v74 + 16) = (int128_t)__asm_movaps(__asm_movdqu(*v110));
            v117 = __asm_movdqa(0x8000000000000000 * v73 >> 64);
            v118 = __asm_movdqa((int128_t)v87);
            v119 = (v116 + 0x5100000000) / 0x100000000 + a1;
            v120 = __asm_movdqu(*(int128_t *)v119);
            v121 = __asm_movdqu(*(int128_t *)(v119 + 16));
            v122 = __asm_movdqu(*(int128_t *)(v119 + 32));
            v123 = __asm_movdqu(*(int128_t *)(v119 + 48));
            __asm_movups(v1, v120);
            v124 = __asm_movdqa(0);
            __asm_movups(v1, v121);
            v125 = __asm_movdqa(v1);
            __asm_movups(v1, v122);
            v126 = __asm_movdqa(v1);
            __asm_movups(v1, v123);
            v127 = __asm_movdqa(v1);
            v128 = __asm_movdqa(v1);
            __asm_movaps(v117);
            __asm_movaps(v118);
            __asm_movaps(v124);
            __asm_movaps(v125);
            __asm_movaps(v126);
            __asm_movaps(v127);
            __asm_movaps(v128);
            function_4d8f60(v74, (int64_t)&v129, 64, 0, (int64_t)(*v82 | 4));
            v130 = (int64_t)v73;
            *(char *)((v116 - 0x4000000000) / 0x100000000 + v111) = (char)v73;
            v131 = 256 * (256 * (v130 / 0x1000000 % 256 | v93) | v130 / 0x10000 % 256) | v130 / 256 % 256;
            v6 = v131;
            v132 = __asm_movdqa(v131);
            *(char *)(v119 + 25) = v112;
            __asm_movups(*(int128_t *)(v119 + 1), v132);
            *(int64_t *)(v119 + 17) = v94;
            *(char *)(v119 + 27) = v113;
            *(char *)(v119 + 26) = v114;
            v133 = *v99;
            v134 = (int64_t)v133 + 0xffffffff;
            v135 = v134 & 0xffffffff;
            *v99 = (char)v134;
            v107 = v110;
            v106 = v113;
            v105 = v114;
            v104 = v112;
            v103 = v111;
            v108 = v135;
            v109 = v133;
        }
    }
    uint64_t v136 = (int64_t)v92; // 0x4d5cd7
    int128_t v137 = __asm_movdqa((int128_t)(256 * (256 * (v136 / 0x1000000 % 256 | v93) | v136 / 0x10000 % 256) | v136 / 256 % 256)); // 0x4d620e
    int64_t v138 = (32 * v108 & 0x1fe0) + v103;
    *(char *)v138 = (char)v92;
    *(int64_t *)(v138 + 17) = v94;
    __asm_movups(*(int128_t *)(v138 + 1), v137);
    int128_t v139 = __asm_pxor(v137, v137); // 0x4d624b
    *(char *)(v138 + 25) = v104;
    *(char *)(v138 + 26) = v105;
    *(char *)(v138 + 27) = v106;
    int128_t v140 = __asm_movdqu(*(int128_t *)&v14); // 0x4d6277
    int128_t v141 = __asm_movdqu(*v107); // 0x4d627d
    *v99 = v109;
    int64_t v142 = *v71 + 1; // 0x4d628c
    __asm_movups(*v77, v140);
    __asm_movups(*v79, v141);
    *v71 = v142;
    __asm_movups(*v69, v139);
    __asm_movups(*(int128_t *)(v56 + 16), v139);
    __asm_movups(*(int128_t *)(v56 + 32), v139);
    __asm_movups(*(int128_t *)(v56 + 48), v139);
    *(int16_t *)v10 = 0;
    v143 = v139;
    v19 = v142;
    if (v68 > (int64_t)&g25) {
        goto lab_0x4d62e4;
    } else {
        int64_t v144 = v7 + 48; // 0x4d6bf9
        v145 = (int64_t *)v144;
        v146 = v144;
        v147 = a1;
        goto lab_0x4d6bf9;
    }
  lab_0x4d6bf9:;
    uint64_t v148 = *v145; // 0x4d6bf9
    int64_t v149; // 0x4d5a50
    int64_t v150; // 0x4d5a50
    int64_t v151; // 0x4d5a50
    int64_t v152; // 0x4d5a50
    int64_t v153; // 0x4d5a50
    if (v148 < 65) {
        // 0x4d7e03
        v150 = 0;
        v152 = (int64_t)*(char *)v146;
        v151 = *(int64_t *)(v7 + 72);
        v153 = v148;
        v149 = v147;
    } else {
        int64_t v154 = *(int64_t *)(v7 + 72); // 0x4d6c0a
        int64_t v155 = v147 + 32; // 0x4d6c0f
        char * v156 = (char *)(v147 + 137); // 0x4d6c14
        int64_t v157 = v154 + (v148 - 1 & -64); // 0x4d6c30
        int64_t v158 = (int64_t)*v156; // 0x4d6c33
        int64_t v159 = *(int64_t *)(v147 + 64); // 0x4d6c3a
        char v160 = *(char *)(v147 + 138); // 0x4d6c4b
        int64_t v161 = v154 + 64; // 0x4d6c56
        function_4d8f60(v155, v154, 64, v159, (int64_t)(v160 | (char)((char)v158 == 0)));
        v158 = (int64_t)*v156 + 1;
        *v156 = (char)v158;
        while (v161 != v157) {
            int64_t v162 = v161;
            v159 = *(int64_t *)(v147 + 64);
            v160 = *(char *)(v147 + 138);
            v161 = v162 + 64;
            function_4d8f60(v155, v162, 64, v159, (int64_t)(v160 | (char)((char)v158 == 0)));
            v158 = (int64_t)*v156 + 1;
            *v156 = (char)v158;
        }
        int64_t v163 = (int64_t)*(char *)(v147 + 136); // 0x4d6c84
        uint64_t v164 = *v145 + (v148 - 65 & -64 ^ -64); // 0x4d6c94
        uint64_t v165 = 64 - v163; // 0x4d6c9e
        int64_t v166 = v164 > v165 ? v165 : v164; // 0x4d6ca4
        *v145 = v166;
        v150 = v163;
        v152 = v166 & 0xffffffff;
        v151 = v157;
        v153 = v166;
        v149 = v147;
    }
    goto lab_0x4d6cb2;
  lab_0x4d6cb2:;
    int64_t result = *(int64_t *)(v7 + 56) + v150; // 0x4d6cb2
    uint32_t v167 = (int32_t)v153; // 0x4d6cb9
    if (v167 >= 8) {
        // 0x4d7b34
        *(int64_t *)result = *(int64_t *)v151;
        int64_t v168 = *(int64_t *)(v7 + 48); // 0x4d7b3a
        int64_t v169 = (v168 & 0xffffffff) - 8;
        *(int64_t *)(v169 + result) = *(int64_t *)(v169 + v151);
        int64_t v170 = result + 8 & -8; // 0x4d7b51
        int64_t v171 = result - v170; // 0x4d7b55
        uint32_t v172 = (int32_t)(v168 + v171); // 0x4d7b60
        if (v172 >= 8) {
            int64_t v173 = 0;
            int64_t v174 = v173 + 8; // 0x4d7b70
            *(int64_t *)(v173 + v170) = *(int64_t *)(v151 - v171 + v173);
            while ((v172 & -8) > (int32_t)v174) {
                // 0x4d7b6e
                v173 = v174 & 0xffffffff;
                v174 = v173 + 8;
                *(int64_t *)(v173 + v170) = *(int64_t *)(v151 - v171 + v173);
            }
        }
    } else {
        if ((v153 & 4) != 0) {
            // 0x4d7dcd
            *(int32_t *)result = *(int32_t *)v151;
            int64_t v175 = (v153 & 0xffffffff) - 4;
            *(int32_t *)(result + v175) = *(int32_t *)(v175 + v151);
        } else {
            if (v167 != 0) {
                // 0x4d6ccf
                *(char *)result = *(char *)v151;
                if ((v153 & 2) != 0) {
                    // 0x4d7e3b
                    return result;
                }
            }
        }
    }
    char * v176 = (char *)(v149 + 136); // 0x4d6cde
    *v176 = *v176 + (char)v152;
    int32_t v177 = __popcountdi2((int32_t)*(int64_t *)(v149 + 64)); // 0x4d6ceb
    char * v178 = (char *)(v149 + 144); // 0x4d6cf0
    int64_t v179 = (int64_t)*v178; // 0x4d6cf0
    uint64_t v180 = (int64_t)v177; // 0x4d6cf9
    int64_t * v181 = (int64_t *)(v7 + 48); // 0x4d6cfe
    *v181 = v180;
    if (v179 <= v180) {
        // 0x4d6bb5
        return *(int64_t *)(v7 + (int64_t)&g33) - __readfsqword(40);
    }
    int64_t v182 = v7 + 496; // 0x4d6d17
    int64_t * v183 = (int64_t *)(v7 + 40); // 0x4d6d1f
    *v183 = v7 + 424;
    int128_t * v184 = (int128_t *)v182;
    int64_t v185 = v7 + (int64_t)&g1;
    int64_t v186 = v7 + (int64_t)&g4;
    int64_t v187 = v7 + 16;
    int64_t v188 = v7 + 32;
    int64_t v189 = v7 + 24;
    int64_t * v190 = (int64_t *)(v7 + 8);
    int128_t v191 = __asm_movdqu(*(int128_t *)v149); // 0x4d6d2c
    int128_t v192 = __asm_movdqu(*(int128_t *)(v149 + 16)); // 0x4d6d45
    uint64_t v193 = 0x2000000000 * v179 % 0x1fe000000001; // 0x4d6d37
    *v184 = (int128_t)__asm_movaps(v191);
    *(int128_t *)(v7 + 512) = (int128_t)__asm_movaps(v192);
    int128_t v194 = __asm_movdqa(*v184); // 0x4d6d6b
    unsigned char v195 = *(char *)(v149 + 138) | 4;
    int128_t v196 = __asm_movdqa(*(int128_t *)v185); // 0x4d6d7b
    *(char *)(v7 + (int64_t)&g13) = 64;
    int64_t v197 = (v193 + 0x5100000000) / 0x100000000 + v149; // 0x4d6d8c
    *(char *)(v7 + (int64_t)&g14) = v195;
    int128_t v198 = __asm_movdqu(*(int128_t *)v197); // 0x4d6d9b
    int128_t v199 = __asm_movdqu(*(int128_t *)(v197 + 16)); // 0x4d6d9f
    *(int64_t *)v186 = 0;
    int128_t v200 = __asm_movdqu(*(int128_t *)(v197 + 32)); // 0x4d6db0
    int128_t v201 = __asm_movdqu(*(int128_t *)(v197 + 48)); // 0x4d6db5
    *(int128_t *)(v7 + 384) = (int128_t)__asm_movaps(v194);
    __asm_movups(*(int128_t *)(v7 + (int64_t)&g5), v198);
    int128_t v202 = __asm_movdqa(*(int128_t *)v186); // 0x4d6dca
    __asm_movups(*(int128_t *)(v7 + (int64_t)&g7), v199);
    int128_t v203 = __asm_movdqa(*(int128_t *)(v7 + (int64_t)&g6)); // 0x4d6ddb
    __asm_movups(*(int128_t *)(v7 + (int64_t)&g9), v200);
    int128_t v204 = __asm_movdqa(*(int128_t *)(v7 + (int64_t)&g8)); // 0x4d6dec
    __asm_movups(*(int128_t *)(v7 + (int64_t)&g11), v201);
    int128_t v205 = __asm_movdqa(*(int128_t *)(v7 + (int64_t)&g10)); // 0x4d6dfd
    int128_t v206 = __asm_movdqa(*(int128_t *)(v7 + (int64_t)&g12)); // 0x4d6e06
    *(int128_t *)(v7 + 400) = (int128_t)__asm_movaps(v196);
    *(int128_t *)(v7 + 416) = (int128_t)__asm_movaps(v202);
    *(int128_t *)(v7 + 432) = (int128_t)__asm_movaps(v203);
    *(int128_t *)(v7 + 448) = (int128_t)__asm_movaps(v204);
    *(int128_t *)(v7 + 464) = (int128_t)__asm_movaps(v205);
    *(int128_t *)(v7 + 480) = (int128_t)__asm_movaps(v206);
    function_4d8f60(v182, *v183, 64, 0, (int64_t)v195);
    uint32_t v207 = *(int32_t *)(v7 + 504); // 0x4d6e44
    uint32_t v208 = *(int32_t *)(v7 + 500); // 0x4d6e4b
    uint32_t v209 = *(int32_t *)v182; // 0x4d6e52
    uint32_t v210 = *(int32_t *)(v7 + 508); // 0x4d6e59
    *(int32_t *)&v6 = v207 / 256;
    *(char *)(v149 + 145 + (v193 - 0x4000000000) / 0x100000000) = (char)v209;
    uint32_t v211 = *(int32_t *)v185; // 0x4d6eb5
    *(int32_t *)v187 = v207 / 0x10000;
    *(int32_t *)v188 = v210 / 256;
    *(int32_t *)v189 = v207 / 0x1000000;
    unsigned char v212 = *(char *)v188; // 0x4d6f1b
    uint32_t v213 = *(int32_t *)(v7 + (int64_t)&g2); // 0x4d6f3f
    unsigned char v214 = *(char *)v189; // 0x4d6f83
    unsigned char v215 = *(char *)v187; // 0x4d6f96
    unsigned char v216 = *(char *)&v6; // 0x4d6fa2
    *(int64_t *)&v6 = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v207 & 0xff00 | v208 / 0x1000000) | v208 / 0x10000 % 256) | v208 / 256 % 256) | (int64_t)(v208 % 256)) | (int64_t)(v209 / 0x1000000)) | (int64_t)(v209 / 0x10000 % 256)) | (int64_t)(v209 / 256 % 256);
    uint32_t v217 = *(int32_t *)(v7 + (int64_t)&g3); // 0x4d6fae
    *v190 = 256 * (256 * (256 * (256 * ((int64_t)(256 * (256 * (256 * v211 & 0xff00 | v210 / 0x1000000) | v210 / 0x10000 % 256)) | (int64_t)v212) | (int64_t)(v210 % 256)) | (int64_t)v214) | (int64_t)v215) | (int64_t)v216;
    int128_t v218 = __asm_movdqa(v6); // 0x4d6fd3
    *(char *)(v197 + 25) = (char)(v217 / 256);
    __asm_movups(*(int128_t *)(v197 + 1), v218);
    *(int64_t *)(v197 + 17) = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v217 & 0xff00 | v213 / 0x1000000) | v213 / 0x10000 % 256) | v213 / 256 % 256) | (int64_t)(v213 % 256)) | (int64_t)(v211 / 0x1000000)) | (int64_t)(v211 / 0x10000 % 256)) | (int64_t)(v211 / 256 % 256);
    *(char *)(v197 + 27) = (char)(v217 / 0x1000000);
    *(char *)(v197 + 26) = (char)(v217 / 0x10000);
    *(int32_t *)(v197 + 28) = *(int32_t *)(v7 + (int64_t)"GNU");
    unsigned char v219 = *v178; // 0x4d7028
    int64_t v220 = (int64_t)v219 + 0xffffffff; // 0x4d7031
    *v178 = (char)v220;
    int64_t v221 = v220 & 0xffffffff; // 0x4d7044
    while (*v181 < (int64_t)(v219 - 1)) {
        // 0x4d6d28
        v191 = __asm_movdqu(*(int128_t *)v149);
        v192 = __asm_movdqu(*(int128_t *)(v149 + 16));
        v193 = 0x2000000000 * v221 % 0x1fe000000001;
        *v184 = (int128_t)__asm_movaps(v191);
        *(int128_t *)(v7 + 512) = (int128_t)__asm_movaps(v192);
        v194 = __asm_movdqa(*v184);
        v195 = *(char *)(v149 + 138) | 4;
        v196 = __asm_movdqa(*(int128_t *)v185);
        *(char *)(v7 + (int64_t)&g13) = 64;
        v197 = (v193 + 0x5100000000) / 0x100000000 + v149;
        *(char *)(v7 + (int64_t)&g14) = v195;
        v198 = __asm_movdqu(*(int128_t *)v197);
        v199 = __asm_movdqu(*(int128_t *)(v197 + 16));
        *(int64_t *)v186 = 0;
        v200 = __asm_movdqu(*(int128_t *)(v197 + 32));
        v201 = __asm_movdqu(*(int128_t *)(v197 + 48));
        *(int128_t *)(v7 + 384) = (int128_t)__asm_movaps(v194);
        __asm_movups(*(int128_t *)(v7 + (int64_t)&g5), v198);
        v202 = __asm_movdqa(*(int128_t *)v186);
        __asm_movups(*(int128_t *)(v7 + (int64_t)&g7), v199);
        v203 = __asm_movdqa(*(int128_t *)(v7 + (int64_t)&g6));
        __asm_movups(*(int128_t *)(v7 + (int64_t)&g9), v200);
        v204 = __asm_movdqa(*(int128_t *)(v7 + (int64_t)&g8));
        __asm_movups(*(int128_t *)(v7 + (int64_t)&g11), v201);
        v205 = __asm_movdqa(*(int128_t *)(v7 + (int64_t)&g10));
        v206 = __asm_movdqa(*(int128_t *)(v7 + (int64_t)&g12));
        *(int128_t *)(v7 + 400) = (int128_t)__asm_movaps(v196);
        *(int128_t *)(v7 + 416) = (int128_t)__asm_movaps(v202);
        *(int128_t *)(v7 + 432) = (int128_t)__asm_movaps(v203);
        *(int128_t *)(v7 + 448) = (int128_t)__asm_movaps(v204);
        *(int128_t *)(v7 + 464) = (int128_t)__asm_movaps(v205);
        *(int128_t *)(v7 + 480) = (int128_t)__asm_movaps(v206);
        function_4d8f60(v182, *v183, 64, 0, (int64_t)v195);
        v207 = *(int32_t *)(v7 + 504);
        v208 = *(int32_t *)(v7 + 500);
        v209 = *(int32_t *)v182;
        v210 = *(int32_t *)(v7 + 508);
        *(int32_t *)&v6 = v207 / 256;
        *(char *)(v149 + 145 + (v193 - 0x4000000000) / 0x100000000) = (char)v209;
        v211 = *(int32_t *)v185;
        *(int32_t *)v187 = v207 / 0x10000;
        *(int32_t *)v188 = v210 / 256;
        *(int32_t *)v189 = v207 / 0x1000000;
        v212 = *(char *)v188;
        v213 = *(int32_t *)(v7 + (int64_t)&g2);
        v214 = *(char *)v189;
        v215 = *(char *)v187;
        v216 = *(char *)&v6;
        *(int64_t *)&v6 = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v207 & 0xff00 | v208 / 0x1000000) | v208 / 0x10000 % 256) | v208 / 256 % 256) | (int64_t)(v208 % 256)) | (int64_t)(v209 / 0x1000000)) | (int64_t)(v209 / 0x10000 % 256)) | (int64_t)(v209 / 256 % 256);
        v217 = *(int32_t *)(v7 + (int64_t)&g3);
        *v190 = 256 * (256 * (256 * (256 * ((int64_t)(256 * (256 * (256 * v211 & 0xff00 | v210 / 0x1000000) | v210 / 0x10000 % 256)) | (int64_t)v212) | (int64_t)(v210 % 256)) | (int64_t)v214) | (int64_t)v215) | (int64_t)v216;
        v218 = __asm_movdqa(v6);
        *(char *)(v197 + 25) = (char)(v217 / 256);
        __asm_movups(*(int128_t *)(v197 + 1), v218);
        *(int64_t *)(v197 + 17) = 256 * (256 * (256 * (256 * (int64_t)(256 * (256 * (256 * v217 & 0xff00 | v213 / 0x1000000) | v213 / 0x10000 % 256) | v213 / 256 % 256) | (int64_t)(v213 % 256)) | (int64_t)(v211 / 0x1000000)) | (int64_t)(v211 / 0x10000 % 256)) | (int64_t)(v211 / 256 % 256);
        *(char *)(v197 + 27) = (char)(v217 / 0x1000000);
        *(char *)(v197 + 26) = (char)(v217 / 0x10000);
        *(int32_t *)(v197 + 28) = *(int32_t *)(v7 + (int64_t)"GNU");
        v219 = *v178;
        v220 = (int64_t)v219 + 0xffffffff;
        *v178 = (char)v220;
        v221 = v220 & 0xffffffff;
    }
    // 0x4d6bb5
    return *(int64_t *)(v7 + (int64_t)&g33) - __readfsqword(40);
  lab_0x4d7c41:;
    int64_t * v222 = (int64_t *)(v7 + 72); // 0x4d7c41
    uint64_t v223 = v224 + v225; // 0x4d7c46
    *v226 = (char)v223;
    int64_t v227 = *v222 + v225; // 0x4d7c52
    int64_t v228 = *v18 - v225; // 0x4d7c55
    *v18 = v228;
    if (v228 != 0) {
        int64_t v229 = *v230; // 0x4d7d2f
        int64_t v231 = *(int64_t *)(v20 + 64); // 0x4d7d34
        char * v232 = (char *)(v20 + 137); // 0x4d7d43
        char v233 = *v232; // 0x4d7d43
        char v234 = *(char *)(v20 + 138); // 0x4d7d50
        function_4d8f60(v20 + 32, v229, 64, v231, (int64_t)(v234 | (char)(v233 == 0)));
        int128_t v235 = __asm_pxor(v236, v236); // 0x4d7d64
        *v222 = v227;
        *v232 = *v232 + 1;
        *v226 = 0;
        __asm_movups(*(int128_t *)v237, v235);
        __asm_movups(*(int128_t *)(v229 + 16), v235);
        __asm_movups(*(int128_t *)(v229 + 32), v235);
        __asm_movups(*(int128_t *)(v229 + 48), v235);
        v145 = v18;
        v146 = v17;
        v147 = v20;
        goto lab_0x4d6bf9;
    } else {
        // 0x4d7c60
        v150 = v223 % 256;
        v152 = 0;
        v151 = v227;
        v153 = v228;
        v149 = v20;
        goto lab_0x4d6cb2;
    }
}
