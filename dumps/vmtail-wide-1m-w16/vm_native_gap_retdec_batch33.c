/*
 * Targeted RetDec C for native executable gap queue batch 33.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x47518-0x475dd rank=12 name=fcn.00047518 kind=r2_discovered bytes=197 uncovered=197
 *   0x54b20-0x54be5 rank=13 name=fcn.00054b20 kind=r2_discovered bytes=197 uncovered=197
 *   0x2961e3-0x2962a8 rank=14 name=fcn.002961e3 kind=r2_discovered bytes=197 uncovered=197
 *   0x52e10-0x52ed4 rank=15 name=fcn.00052e10 kind=r2_discovered bytes=196 uncovered=196
 *   0x53270-0x53334 rank=16 name=fcn.00053270 kind=r2_discovered bytes=196 uncovered=196
 *   0x4b94d0-0x4b9594 rank=17 name=fcn.004b94d0 kind=r2_discovered bytes=196 uncovered=196
 *   0x5dc68-0x5dd29 rank=28 name=fcn.0005dc68 kind=r2_discovered bytes=193 uncovered=193
 *   0x56b660-0x56b724 rank=19 name=method.std::messages_char_.virtual_24 kind=native_discovered bytes=196 uncovered=196
 *   0x4ad78-0x4ae3b rank=20 name=fcn.0004ad78 kind=r2_discovered bytes=195 uncovered=195
 *   0x4c6740-0x4c6803 rank=21 name=fcn.004c6740 kind=r2_discovered bytes=195 uncovered=195
 *   0x453e6-0x454a8 rank=22 name=fcn.000453e6 kind=r2_discovered bytes=194 uncovered=194
 *   0x55f42-0x56004 rank=23 name=fcn.00055f42 kind=r2_discovered bytes=194 uncovered=194
 *   0x48d707-0x48d7c9 rank=24 name=fcn.0048d707 kind=r2_discovered bytes=194 uncovered=194
 *   0x4b1820-0x4b18e2 rank=25 name=fcn.004b1820 kind=r2_discovered bytes=194 uncovered=194
 *   0x5512a0-0x551362 rank=26 name=fcn.005512a0 kind=r2_discovered bytes=194 uncovered=194
 *   0x568f00-0x568fc2 rank=27 name=fcn.00568f00 kind=r2_discovered bytes=194 uncovered=194
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
typedef int32_t int3_t;
typedef float float32_t;
typedef double float64_t;
typedef long double float80_t;
static inline int128_t eac_retdec_i128(uint64_t hi, uint64_t lo) { return (int128_t)(((uint128_t)hi << 64) | (uint128_t)lo); }
struct __locale_struct;
struct _TYPEDEF_glob_t;
struct _TYPEDEF___mbstate_t;
struct _IO_FILE;
struct pollfd;
struct sockaddr;
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
#define SYS_getegid32 50
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
extern int g17;
extern int g18;
extern int g19;
extern int g20;
extern int g21;
unsigned char llvm_ctpop_i8(unsigned char value);
uint16_t llvm_bswap_i16(uint16_t value);
void __asm_int(int32_t interrupt);
int64_t __asm_int1();
int64_t __asm_int3(void);
int32_t __asm_in(uint16_t port);
int32_t __asm_in_134(uint16_t port);
char __asm_in_136(uint16_t port);
void __asm_out(uint16_t port, char value);
void __asm_out_135(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint64_t __readfsqword(int64_t offset);
int64_t __asm_iretd(void);
void __asm_rcl(int32_t value);
void __asm_rep_movsb_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_stosb_memset(char *dst, char value, int64_t count);
void __asm_rep_stosd_memset(char *dst, int32_t value, int64_t count);
void __asm_rep_stosq_memset(char *dst, int64_t value, int64_t count);
void __asm_rep_movsd_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_movsq_memcpy(char *dst, char *src, int64_t count);
int64_t __asm_hlt(void);
int64_t __asm_mfence();
struct eac_retdec_cpuid_regs __asm_cpuid(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_133(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_134(uint32_t leaf);
uint64_t __asm_xgetbv(uint64_t index);
void __stack_chk_fail(void);
int __cxa_atexit(void (*func)(int64_t *), void *arg, void *dso);
int128_t __asm_movsd(int64_t value);
int128_t __asm_movss(int32_t value);
int64_t __asm_movss_133(int128_t value);
int128_t __asm_movdqa(int128_t value);
int128_t __asm_movdqu(int128_t value);
void __asm_movdqu_133();
int128_t __asm_movapd(int128_t value);
int128_t __asm_andpd(int128_t left, int128_t right);
int128_t __asm_andnpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_por(int128_t left, int128_t right);
int128_t __asm_pxor(int128_t left, int128_t right);
int128_t __asm_xorps(int128_t left, int128_t right);
int128_t __asm_cmpnlesd(int128_t left, int128_t right);
int128_t __asm_cvtsi2sd(int64_t value);
int128_t __asm_subsd(int128_t left, int128_t right);
int64_t __asm_cvttsd2si(int128_t value);
void __asm_ucomisd(int128_t left, int128_t right);
int128_t __asm_movups();
void __asm_movups_133();
int128_t __asm_movaps(int128_t value);
float80_t __frontend_reg_load_fpr(int32_t reg);
void __frontend_reg_store_fpr(int32_t reg, float80_t value);
char *__nl_langinfo_l(int32_t item, struct __locale_struct *locale);
struct __locale_struct *__uselocale(struct __locale_struct *locale);
char *dgettext(char *domain, char *msgid);
char *gettext(char *msgid);
char *bind_textdomain_codeset(char *domainname, char *codeset);
void *iconv_open(const char *tocode, const char *fromcode);
int32_t iconv(void *cd, char **inbuf, int32_t *inbytesleft, char **outbuf, int32_t *outbytesleft);
int iconv_close(void *cd);
struct _IO_FILE *fopen(const char *path, const char *mode);
size_t fread(void *ptr, size_t size, size_t nmemb, struct _IO_FILE *stream);
int fclose(struct _IO_FILE *stream);
int uname(struct utsname *buf);
int64_t __tls_get_addr(void *arg);
int32_t mbrtowc(int32_t *pwc, const char *s, size_t n, struct _TYPEDEF___mbstate_t *ps);
size_t mbstowcs(int32_t *dest, const char *src, size_t n);
int32_t mbsnrtowcs(int32_t *dst, char **src, size_t nms, size_t len, struct _TYPEDEF___mbstate_t *ps);
size_t wcslen(const int32_t *s);
int wctob(int32_t wc);
int32_t btowc(int c);
int32_t towlower(int32_t wc);
int vswprintf(int32_t *wcs, size_t maxlen, const int32_t *format, int64_t ap);
int32_t *wmemcpy(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemmove(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemset(int32_t *wcs, int32_t wc, size_t n);
int64_t memset2(void *s, int c, size_t n);
int pthread_mutex_lock(void *mutex);
int pthread_mutex_unlock(void *mutex);
int pthread_cond_wait(void *cond, void *mutex);
int pthread_cond_timedwait(void *cond, void *mutex, const struct timespec *abstime);
int fcntl(int fd, int cmd, ...);
int writev(int fd, const struct iovec *iov, int iovcnt);
int epoll_create(int size);
int epoll_ctl(int epfd, int op, int fd, struct epoll_event *event);
int epoll_wait(int epfd, struct epoll_event *events, int maxevents, int timeout);
int close(int fd);
int ioctl(int fd, unsigned long request, ...);
int poll(struct pollfd *fds, unsigned long nfds, int timeout);
int gettimeofday(struct timeval *tv, void *tz);
int64_t sysconf(int name);
int64_t syscall(int64_t number, ...);
int mprotect(void *addr, size_t len, int prot);
int __fxstat64(int ver, int fd, struct stat64 *buf);
int64_t lseek64(int fd, int64_t offset, int whence);
int32_t *__errno_location(void);
int connect(int sockfd, const struct sockaddr *addr, int32_t addrlen);
int getsockopt(int sockfd, int level, int optname, void *optval, int32_t *optlen);
int64_t readlink(const char *path, char *buf, size_t bufsiz);
char *realpath(const char *path, char *resolved_path);
int glob(const char *pattern, int flags, void *errfunc, struct _TYPEDEF_glob_t *pglob);
void globfree(struct _TYPEDEF_glob_t *pglob);
char *__xpg_basename(char *path);
int32_t eac_retdec_vsnprintf(char *str, int32_t size, char *format, int64_t ap);
int64_t __wctype_l(const char *property, struct __locale_struct *locale);
char *strdup(const char *s);
int __sprintf_chk(char *str, int flag, size_t slen, const char *format, ...);
struct _Unwind_Exception;
int64_t _Unwind_GetRegionStart();
void _Unwind_Resume(struct _Unwind_Exception *exception);

int64_t function_24e1e();
int64_t function_2508e();
int64_t function_2509a();
int64_t function_250b0();
int64_t function_27a38();
int64_t function_2961b7();
int64_t function_2961e3();
int64_t function_296255();
int64_t function_29cf4();
int64_t function_453e6();
int64_t function_47518();
int64_t function_48d50f();
int64_t function_48d707();
int64_t function_4ad0c();
int64_t function_4ad78();
int64_t function_4b0460();
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4b0ac0();
int64_t function_4b0fa0();
int64_t function_4b1080();
int64_t function_4b1300();
int64_t function_4b1820();
int64_t function_4b8fd0();
int64_t function_4b94d0();
int64_t function_4c3b10();
int64_t function_4c3b30();
int64_t function_4c40e0();
int64_t function_4c6100();
int64_t function_4c6740();
int64_t function_4daf6();
int64_t function_4e66a();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f0bc0();
int64_t function_4f15a0();
int64_t function_4f6bf0();
int64_t function_4fbd10();
int64_t function_527a4();
int64_t function_52d86();
int64_t function_52e10();
int64_t function_52ed4();
int64_t function_530e6();
int64_t function_531be();
int64_t function_53270();
int64_t function_53a58();
int64_t function_542470();
int64_t function_542590();
int64_t function_542650();
int64_t function_54b20();
int64_t function_5512a0();
int64_t function_55f42();
int64_t function_567c30();
int64_t function_567d40();
int64_t function_568f00();
int64_t function_56b660();
int64_t function_5cab4();
int64_t function_5dc68();
int64_t function_718ad();
int64_t function_7192a();
int64_t function_71a15();

// Address range: 0x453e6 - 0x454a8
int64_t function_453e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = a2 + a1; // 0x453f6
    uint64_t v2 = *(int64_t *)(a1 + 8); // 0x453f9
    if (v1 >= 0x3ffffffffffffffa) {
        // 0x45402
        function_542590("basic_string::_S_create", v1, v2);
    }
    int64_t v3 = v1; // 0x45417
    if (v1 > v2) {
        uint64_t v4 = 2 * v2; // 0x45419
        v3 = v1 < v4 ? v4 : v1;
    }
    uint64_t v5 = v3 + 57; // 0x45424
    int64_t v6 = v3; // 0x4542e
    if (v5 > (int64_t)&g1 && v2 < v3) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g20); // 0x4544b
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t v8 = function_4efd30(v6 + 25); // 0x45459
    *(int64_t *)(v8 + 8) = v6;
    int64_t result = v8 + 24; // 0x45466
    *(int32_t *)(v8 + 16) = 0;
    __asm_rep_movsb_memcpy((char *)result, "basic_string::_S_construct null not valid", 0x74735f6369736162);
    if (v8 != (int64_t)g15) {
        // 0x45499
        *(int64_t *)v8 = 0x74735f6369736162;
        *(char *)(v8 + 0x74735f636973617a) = 0;
    }
    // 0x454a1
    return result;
}

// Address range: 0x47518 - 0x475dd
int64_t function_47518(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x4751d
    char * v2 = (char *)(a1 + (int64_t)&g13); // 0x4752d
    if (*v2 == 0) {
        // 0x4753a
        if ((char)function_4ad0c(a1 + 40) != 0) {
            int64_t * v3 = (int64_t *)(a1 + (int64_t)&g12); // 0x4754a
            int64_t v4 = a1 + (int64_t)&g11; // 0x47551
            if (*v3 - *(int64_t *)v4 >= 4) {
                int64_t v5 = function_24e1e() - *(int64_t *)(a1 + (int64_t)&g14); // 0x47563
                int64_t v6 = (0x8000000000000000 * (int128_t)(v5 >> 63) | (int128_t)v5) / 0x3b9aca00; // 0x47571
                *(int32_t *)(*v3 - 4) = (int32_t)(v6 > 0 ? v6 : 0);
            }
            // 0x4758a
            *v2 = 1;
            int64_t v7 = (int64_t)*(int32_t *)(a1 + (int64_t)&g10); // bp-24, 0x475a8
            function_4e66a(a1 + (int64_t)&g9, &v7, v4);
        }
    }
    int64_t result = 0; // 0x475d0
    if (v1 != __readfsqword(40)) {
        // 0x475d2
        __stack_chk_fail();
        result = (int64_t)&g21;
    }
    // 0x475d7
    return result;
}

// Address range: 0x4ad78 - 0x4ae3b
int64_t function_4ad78(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x4ad7c
    if ((char)function_4ad0c(a1) != 0) {
        int64_t v2 = *(int64_t *)(a3 + 8); // 0x4ad99
        int64_t v3 = a2; // bp-72, 0x4adbb
        int64_t v4; // bp-56, 0x4ad78
        __asm_rep_stosd_memset((char *)&v4, 0, 8);
        uint64_t v5 = v2 - a3; // 0x4adc4
        if (v5 < 0x500001) {
            int64_t v6 = 1; // 0x4add8
            if (a4 != 0) {
                // 0x4adda
                v6 = 1;
                if (*(int64_t *)(a4 + 8) != 0) {
                    // 0x4ade6
                    v4 = 0;
                    v6 = 2;
                }
            }
            int64_t v7 = v6; // 0x4adfb
            if (v2 != a3) {
                int64_t v8 = 16 * v6 + (int64_t)&v3;
                *(int64_t *)v8 = a3;
                *(int64_t *)(v8 + 8) = v5;
                v7 = v6 + 1;
            }
            // 0x4ae10
            function_4daf6(a1 + 104, v7, &v3, 12);
        }
    }
    int64_t result = 0; // 0x4ae2f
    if (v1 != __readfsqword(40)) {
        // 0x4ae31
        __stack_chk_fail();
        result = (int64_t)&g21;
    }
    // 0x4ae36
    return result;
}

// Address range: 0x52e10 - 0x52ed4
int64_t function_52e10(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result2 = function_4efd30(48); // 0x52e27
    int64_t v1 = result2 + 32; // 0x52e36
    *(int64_t *)v1 = a2;
    *(int64_t *)a2 = (int64_t)&g17;
    *(int32_t *)(result2 + 40) = *(int32_t *)(a2 + 8);
    int64_t result = function_52d86(a1, v1); // 0x52e56
    if (a3 == 0) {
        // 0x52eab
        function_2508e(v1);
        function_4eeb50(result2);
        // 0x52ec7
        return result;
    }
    int64_t v2 = 1; // 0x52e6b
    if (a1 + 8 != a3 && result == 0) {
        // 0x52e72
        v2 = function_27a38(v1, a3 + 32) < 0;
    }
    // 0x52e8d
    function_4f0bc0(v2, result2);
    int64_t * v3 = (int64_t *)(a1 + 40); // 0x52e9c
    *v3 = *v3 + 1;
    // 0x52ec7
    return result2;
}

// Address range: 0x53270 - 0x53334
int64_t function_53270(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3 - a2 >> 3; // 0x53289
    int64_t v2 = *(int64_t *)(a1 + 24); // 0x53291
    int64_t * v3 = (int64_t *)(a1 + 8); // 0x53295
    if ((char)function_4fbd10(a1 + 32, *v3, v2, v1) != 0) {
        // 0x532a9
        function_530e6(a1, v2);
    }
    int64_t result; // 0x53270
    if (a3 == a2) {
        // 0x53328
        return result;
    }
    int64_t v4 = a2; // 0x53322
    int64_t v5 = v1; // 0x53270
    int64_t v6; // 0x53270
    int64_t v7; // 0x53270
    uint64_t v8; // 0x532c1
    uint64_t v9; // 0x532cc
    while (true) {
      lab_0x532c1:
        // 0x532c1
        v7 = v5;
        v6 = v4;
        v8 = (int64_t)*(int32_t *)v6;
        v9 = v8 % *v3;
        int64_t v10 = function_52ed4(a1, v9, v6); // 0x532d9
        if (v10 == 0) {
            goto lab_0x532e9;
        } else {
            // 0x532e3
            v5 = v7;
            if (*(int64_t *)v10 != 0) {
                goto lab_0x53322;
            } else {
                goto lab_0x532e9;
            }
        }
    }
  lab_0x53328:
    // 0x53328
    return result;
  lab_0x532e9:;
    int64_t v11; // 0x53270
    if (v7 == 0) {
        // 0x532f9
        v11 = function_4efd30(16);
    } else {
        // 0x532f1
        *(int64_t *)a4 = v7;
        v11 = v7;
    }
    // 0x53303
    *(int64_t *)v11 = 0;
    *(int64_t *)(v11 + 8) = *(int64_t *)v6;
    function_531be(a1, v9, v8, v11);
    v5 = v11;
    goto lab_0x53322;
  lab_0x53322:
    // 0x53322
    v4 = v6 + 8;
    if (v4 == a3) {
        // break -> 0x53328
        goto lab_0x53328;
    }
    goto lab_0x532c1;
}

// Address range: 0x54b20 - 0x54be5
int64_t function_54b20(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    uint64_t v1 = *(int64_t *)(a2 - 24) - a3; // 0x54b33
    int64_t v2 = v1 > a4 ? a4 : v1; // 0x54b39
    uint64_t v3 = 4 * (v2 + a3) + a2; // 0x54b4b
    int64_t v4 = a1; // 0x54b4b
    if (v3 < a3) {
        // 0x54b4d
        function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::basic_string");
        v4 = (int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)";
    }
    int64_t v5 = 4 * a3; // 0x54b65
    int64_t wstr2 = v5 + a2; // 0x54b6c
    if (v3 == wstr2) {
        // 0x54bd8
        *(int64_t *)v4 = (int64_t)&g19;
        return (int64_t)&g18;
    }
    if (wstr2 == 0) {
        // 0x54bc1
        function_542470("basic_string::_S_construct null not valid");
        // 0x54bd8
        *(int64_t *)v4 = (int64_t)&g19;
        return (int64_t)&g18;
    }
    int64_t v6 = 4 * v2; // 0x54b79
    int64_t n = v6 >> 2; // 0x54b7e
    int64_t v7 = function_53a58(n, 0, v5); // 0x54b85
    int64_t wstr = v7 + 24; // 0x54b91
    if (v6 != 4) {
        if (v6 != 0) {
            // 0x54ba6
            wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
        }
    } else {
        // 0x54b97
        *(int32_t *)wstr = *(int32_t *)wstr2;
    }
    int64_t result = function_29cf4(v7, n); // 0x54bbf
    // 0x54bd8
    *(int64_t *)v4 = wstr;
    return result;
}

// Address range: 0x55f42 - 0x56004
int64_t function_55f42(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + (int64_t)&g2); // 0x55f50
    if (*v1 == 0 || *(char *)(a1 + (int64_t)&g7) == 0) {
        // 0x55ff5
        int64_t v2; // 0x55f42
        return v2 & -256;
    }
    int64_t * v3 = (int64_t *)a2; // 0x55f6a
    *v3 = 0;
    int64_t * v4 = (int64_t *)a3; // 0x55f71
    *v4 = 0;
    int64_t v5 = function_4f15a0(a1 + 120); // 0x55f7e
    if ((char)v5 == 0) {
        // 0x55ff5
        return v5 & -256;
    }
    int64_t * v6 = (int64_t *)(a1 + (int64_t)&g5); // 0x55f8a
    uint64_t v7 = *v6; // 0x55f8a
    uint64_t v8 = *(int64_t *)(a1 + (int64_t)&g3); // 0x55f91
    uint64_t v9 = v8 > v7 ? v7 : v8; // 0x55f98
    int64_t v10 = *v1; // 0x55fa5
    int64_t v11 = v5; // 0x55fac
    int64_t v12 = 0; // 0x55fac
    int64_t v13 = v10; // 0x55fac
    if (v9 == 0) {
      lab_0x55fd9:
        // 0x55fd9
        *v3 = v12;
        *v4 = v13;
        int64_t * v14 = (int64_t *)(a1 + (int64_t)&g4); // 0x55fe0
        *v14 = *v14 + v12;
        *v6 = *v6 - v12;
        *(int64_t *)(a1 + (int64_t)&g6) = v12;
        // 0x55ff5
        return v11 & -256 | v5 % 256;
    }
    int64_t v15 = 0;
    function_4f6bf0(a1, v15 + v10, v9 - v15);
    int64_t v16 = *(int64_t *)(a1 + 8); // 0x55fbf
    while (v16 != 0) {
        int64_t v17 = v16 + v15; // 0x55fd4
        int64_t v18 = *v1; // 0x55fa5
        v11 = v16;
        v12 = v17;
        v13 = v18;
        if (v9 <= v17) {
            goto lab_0x55fd9;
        }
        v15 = v17;
        function_4f6bf0(a1, v15 + v18, v9 - v15);
        v16 = *(int64_t *)(a1 + 8);
    }
    // 0x55fc8
    *(int64_t *)(a1 + (int64_t)&g6) = v15;
    // 0x55ff5
    return v16 & -256;
}

// Address range: 0x5dc68 - 0x5dd29
int64_t function_5dc68(int64_t result) {
    int64_t v1 = __readfsqword(40); // 0x5dc7c
    int64_t v2; // bp-112, 0x5dc68
    __asm_rep_stosd_memset((char *)&v2, 0, 16);
    int64_t v3; // bp-136, 0x5dc68
    function_7192a(&v3);
    int64_t v4; // bp-128, 0x5dc68
    function_718ad(&v4);
    int64_t v5; // bp-120, 0x5dc68
    function_71a15(&v5);
    function_48d50f(&v2, 64, "%s %s (Release %s)", v5, v3, v4);
    function_5cab4(result, &v2);
    function_2508e((int64_t)&v5);
    function_2508e((int64_t)&v4);
    function_2508e((int64_t)&v3);
    if (v1 != __readfsqword(40)) {
        // 0x5dd14
        __stack_chk_fail();
    }
    // 0x5dd19
    return result;
}

// Address range: 0x2961e3 - 0x29624a
int64_t function_2961e3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2961e3
    int64_t v1; // 0x2961e3
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x2961e3
    int64_t v3 = (v2 ? -4 : 4) + a1; // 0x2961e5
    unsigned char v4 = *(char *)(v3 + 0x6878c7b4) ^ (char)(a3 / 256); // 0x2961e7
    int64_t v5 = a4 - 1; // 0x2961ee
    int64_t v6; // 0x2961e3
    if (v5 != 0 && v4 != 0) {
        v6 = function_2961b7();
    }
    char * v7 = (char *)(v1 - 0x2e31509d); // 0x2961f0
    *v7 = *v7 - (char)a3;
    int64_t v8 = 256 * (int64_t)v4 | a3 & -0xff01 | v6 & 0xff00; // 0x2961f6
    int64_t v9 = v2 ? 0xffffffff : 1; // 0x2961f8
    char * v10 = (char *)v5; // 0x2961f9
    *v10 = *v10 + (char)(v6 / 256);
    int32_t * v11 = (int32_t *)v8; // 0x296227
    *v11 = *v11 | *(int32_t *)((v6 & 0x2ec8013d) + 0x792f70) & (int32_t)v1;
    *(char *)0x25329930 = *(char *)0x25329930 + (char)(v1 / 256);
    int64_t v12 = (v3 + v9 & 0xffffff00 | 250) + 0xc869f5ec & 0xffffff00 | (int64_t)__asm_in((int16_t)v8); // 0x29622f
    int32_t * v13 = (int32_t *)v12; // 0x296230
    *v13 = *v13 & 0x60f41c06;
    int64_t v14 = v12 + 0x137f0124; // 0x296237
    uint32_t v15 = (int32_t)v14; // 0x29623e
    int32_t v16 = v15 + 0x5807a0ff; // 0x29623e
    return v14 & 0xffff00ff | 256 * (64 * (int64_t)(v16 == 0) | (int64_t)(v15 < 0xa7f85f01) | 128 * (int64_t)(v16 < 0) | 16 * (int64_t)(v15 % 16 > 16) | 4 * (int64_t)(llvm_ctpop_i8((char)v16) % 2 == 0)) | 512;
}

// Address range: 0x296255 - 0x29626a
int64_t function_296255(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = *(char *)-0x340b96a4; // 0x296255
    int64_t v2; // 0x296255
    *(char *)-0x340b96a4 = v1 + (char)((uint64_t)v2 / 256);
    char * v3 = (char *)(a1 - 111); // 0x29625b
    unsigned char v4 = *v3; // 0x29625b
    unsigned char v5 = v4 + (char)a4; // 0x29625b
    *v3 = v5;
    return v2 + 0x4eee6d76 + (int64_t)(v5 < v4) & 0xffffffff;
}

// Address range: 0x48d707 - 0x48d7c9
int64_t function_48d707(int64_t wstr, int64_t maxlen, int64_t format, int64_t a4, int64_t a5, int64_t a6) {
    // 0x48d707
    int64_t v1; // 0x48d707
    if ((char)v1 != 0) {
        // 0x48d725
        int128_t v2; // 0x48d707
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    int64_t v3 = __readfsqword(40); // 0x48d75c
    int64_t v4 = 24; // bp-216, 0x48d784
    int32_t v5 = vswprintf((int32_t *)wstr, (int32_t)maxlen, (int32_t *)format, (int64_t)&v4); // 0x48d798
    int64_t v6 = v5; // 0x48d798
    if (v5 >= 0) {
        // 0x48d7a1
        *(int32_t *)(4 * v6 + wstr) = 0;
    }
    int64_t result = v6; // 0x48d7b9
    if (v3 != __readfsqword(40)) {
        // 0x48d7bb
        __stack_chk_fail();
        result = (int64_t)&g21;
    }
    // 0x48d7c0
    return result;
}

// Address range: 0x4b1820 - 0x4b18e2
int64_t function_4b1820(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = function_4b1300(a2, a3); // 0x4b1839
    if ((int32_t)result < 0) {
        // 0x4b18e2
        return result;
    }
    // 0x4b1846
    int64_t v1; // bp-72, 0x4b1820
    function_4b0870(&v1);
    if (a1 == a3) {
        int64_t result2 = function_4b0ac0((int64_t)&v1, a1); // 0x4b18d6
        if ((int32_t)result2 == 0) {
            // 0x4b18e2
            return result2;
        }
        // 0x4b18b0
        function_4b0890(&v1);
        return result2 & 0xffffffff;
    }
    if (a1 != a2) {
        int64_t v2 = function_4b0ac0(a1, a2); // 0x4b185e
        if ((int32_t)v2 != 0) {
            // 0x4b18b0
            function_4b0890(&v1);
            return v2 & 0xffffffff;
        }
    }
    int64_t v3 = *(int64_t *)(a3 + 8); // 0x4b186a
    *(int32_t *)a1 = 1;
    int64_t v4 = *(int64_t *)(a3 + 16); // 0x4b1874
    int64_t v5 = 0; // 0x4b187b
    if (v3 != 0) {
        int64_t v6 = v3 - 1; // 0x4b187d
        v5 = v3;
        if (*(int64_t *)(v4 + 8 * v6) == 0) {
            // 0x4b189c
            v5 = v6;
            if (v6 != 0) {
                int64_t v7 = v6; // 0x4b1898
                v5 = v7;
                while (*(int64_t *)(v4 - 8 + 8 * v7) == 0) {
                    // 0x4b1898
                    v7--;
                    v5 = v7;
                    if (v7 == 0) {
                        // break -> 0x4b18a4
                        break;
                    }
                    v5 = v7;
                }
            }
        }
    }
    // 0x4b18a4
    function_4b0460(v5);
    // 0x4b18b0
    function_4b0890(&v1);
    return 0;
}

// Address range: 0x4b94d0 - 0x4b958d
int64_t function_4b94d0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    if (a1 == 0) {
        // 0x4b9523
        int64_t result; // 0x4b94d0
        return result;
    }
    int64_t result2 = function_4b8fd0(); // 0x4b951a
    if ((int32_t)result2 != 0) {
        // 0x4b9523
        return result2;
    }
    int64_t v1 = a1 + 416; // 0x4b94f9
    int64_t result3 = function_4b0fa0(v1); // 0x4b9543
    if (result3 > a4) {
        // 0x4b9523
        return result3;
    }
    uint64_t v2 = *(int64_t *)(a1 + 176); // 0x4b954d
    *(int64_t *)a2 = v2 / 8 + (int64_t)(v2 % 8 != 0);
    return function_4b1080(v1, a3);
}

// Address range: 0x4c6740 - 0x4c6800
int64_t function_4c6740(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4c6740
    int64_t v1; // bp-72, 0x4c6740
    function_4c3b10(&v1);
    int64_t v2 = 0; // 0x4c676e
    int64_t v3 = a2; // 0x4c676e
    if (a3 != 0) {
        // 0x4c6770
        v2 = a3;
        v3 = a2;
        if (*(char *)(a2 - 1 + a3) == 0) {
            // 0x4c67c0
            int64_t v4; // bp-80, 0x4c6740
            int64_t result = function_4c3b30(&v1, "-----BEGIN PUBLIC KEY-----", "-----END PUBLIC KEY-----", a2, 0, 0, &v4); // 0x4c67e5
            if ((int32_t)result != 0) {
                // 0x4c6800
                return result;
            }
            // 0x4c67f1
            v3 = v1;
        }
    }
    int64_t v5 = v3; // bp-88, 0x4c6784
    int64_t v6 = function_4c6100(&v5, v3 + v2, a1); // 0x4c6789
    function_4c40e0(&v1);
    return v6 & 0xffffffff;
}

// Address range: 0x5512a0 - 0x55135d
int64_t function_5512a0(int64_t result, uint64_t n, int64_t a3) {
    if (n == 0) {
        // 0x55130b
        return result;
    }
    int64_t v1 = result - 24;
    int64_t * v2 = (int64_t *)v1; // 0x5512c5
    int64_t v3 = *v2; // 0x5512c5
    int64_t v4 = 0xffffffffffffffe - v3; // 0x5512c9
    if (v4 < n) {
        // 0x55130b
        return result;
    }
    uint64_t v5 = v3 + n; // 0x5512d5
    int64_t v6 = v4; // 0x5512dc
    int64_t v7; // 0x5512a0
    if (v5 > *(int64_t *)(result - 16)) {
        goto lab_0x5512de;
    } else {
        uint32_t v8 = *(int32_t *)(result - 8); // 0x551320
        v6 = v8;
        v7 = v3;
        if (v8 >= 0 == (v8 != 0)) {
            goto lab_0x5512de;
        } else {
            goto lab_0x5512ed;
        }
    }
  lab_0x5512de:
    // 0x5512de
    function_527a4(result, v5, (int32_t)v6);
    v7 = *v2;
    goto lab_0x5512ed;
  lab_0x5512ed:;
    int64_t v9 = 4 * v7 + result; // 0x5512f5
    int32_t wc = a3;
    int32_t * wstr = (int32_t *)v9;
    int64_t v10; // 0x5512a0
    int64_t v11; // 0x5512a0
    if (n != 1) {
        // 0x551330
        wmemset(wstr, wc, (int32_t)n);
        v10 = v9 - 24;
        v11 = v9;
    } else {
        // 0x5512fb
        *wstr = wc;
        v10 = v1;
        v11 = result;
    }
    // 0x5512fe
    if (v10 != *(int64_t *)0x848c20) {
        // 0x551348
        *(int32_t *)(v11 - 8) = 0;
        *(int64_t *)v10 = v5;
        *(int32_t *)(v11 + 4 * v5) = 0;
    }
    // 0x55130b
    return result;
}

// Address range: 0x568f00 - 0x568fc2
int64_t function_568f00(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = *(int32_t *)(a1 + 24); // 0x568f00
    int64_t v2 = a2 + 1; // 0x568f03
    *(char *)a2 = 37;
    int64_t v3 = v2; // 0x568f0d
    if ((v1 & 2048) != 0) {
        // 0x568f0f
        *(char *)v2 = 43;
        v3 = a2 + 2;
    }
    int64_t result = v1; // 0x568f00
    int64_t v4 = v3; // 0x568f1a
    if ((result & 1024) != 0) {
        // 0x568f1c
        *(char *)v3 = 35;
        v4 = v3 + 1;
    }
    int64_t v5 = result & 260; // 0x568f25
    char v6 = a3;
    int64_t v7; // 0x568f00
    int64_t v8; // 0x568f00
    if (v5 == 260) {
        if (v6 == 0) {
            // 0x568fb4
            return (result & (int64_t)(int32_t)"le") == 0 ? 0xffffffff : 0;
        }
        // 0x568f87
        *(char *)v4 = v6;
        v7 = v4 + 2;
        v8 = v4 + 1;
    } else {
        int64_t v9 = v4 + 2; // 0x568f3b
        *(int16_t *)v4 = (int16_t)&g8;
        if (v6 != 0) {
            // 0x568f87
            *(char *)v9 = v6;
            int64_t v10 = v4 + 3; // 0x568f89
            int64_t v11 = v4 + 4; // 0x568f90
            v7 = v11;
            v8 = v10;
            if (v5 == 4) {
                // 0x568f96
                *(char *)v10 = 102;
                *(char *)v11 = 0;
                return result;
            }
        } else {
            int64_t v12 = v4 + 3; // 0x568f48
            v7 = v12;
            v8 = v9;
            if (v5 == 4) {
                // 0x568f96
                *(char *)v9 = 102;
                *(char *)v12 = 0;
                return result;
            }
        }
    }
    int64_t v13 = result & (int64_t)(int32_t)"le";
    switch ((int32_t)v5) {
        case 256: {
            int64_t result2 = v13 == 0 ? 101 : 69; // 0x568fa8
            *(char *)v8 = (char)result2;
            *(char *)v7 = 0;
            return result2;
        }
        case 260: {
            // 0x568fb4
            return v13 == 0 ? 0xffffffff : 0;
        }
    }
    int64_t result3 = v13 == 0 ? 103 : 71; // 0x568f6e
    *(char *)v8 = (char)result3;
    *(char *)v7 = 0;
    return result3;
}

// Address range: 0x56b660 - 0x56b722
// From class:    std::messages_byname<char>
// Type:          virtual member function
int64_t function_56b660(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x56b660
    __readfsqword(40);
    int32_t v1 = a3; // 0x56b67f
    if (v1 < 0 || *(int64_t *)(a6 - 24) == 0) {
        // 0x56b68d
        function_2509a(result, a6);
        __readfsqword(40);
        return result;
    }
    int64_t v2 = function_567c30(function_567d40(), a3 & 0xffffffff, v1); // 0x56b6da
    if (v2 == 0) {
        // 0x56b68d
        function_2509a(result, a6);
        __readfsqword(40);
        return result;
    }
    struct __locale_struct * v3 = __uselocale((struct __locale_struct *)*(int64_t *)(a2 + 16)); // 0x56b6f4
    char * v4 = dgettext((char *)*(int64_t *)(v2 + 8), (char *)a6); // 0x56b702
    __uselocale(v3);
    int64_t v5; // bp-49, 0x56b660
    return function_250b0(result, (int64_t)v4, &v5);
}
