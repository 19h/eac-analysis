/*
 * Targeted RetDec C for native executable gap queue batch 22.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x52a5a-0x52b5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x68d1a-0x68e1a rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d2e40-0x4d2f40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c9fa-0x4caf9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x72832-0x72931 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d3c90-0x4d3d8f rank=- name=- kind=- bytes=- uncovered=-
 *   0x5f4d0-0x5f5ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x548b0-0x549ac rank=- name=- kind=- bytes=- uncovered=-
 *   0x488a10-0x488b0c rank=- name=- kind=- bytes=- uncovered=-
 *   0x61fb0-0x620ab rank=- name=- kind=- bytes=- uncovered=-
 *   0x4977a0-0x49789b rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bd480-0x4bd57b rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d9090-0x4d918b rank=- name=- kind=- bytes=- uncovered=-
 *   0x61698-0x61792 rank=- name=- kind=- bytes=- uncovered=-
 *   0x62460-0x6255a rank=- name=- kind=- bytes=- uncovered=-
 *   0x491110-0x49120a rank=- name=- kind=- bytes=- uncovered=-
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
struct eac_retdec_cpuid_regs { uint32_t e0; uint32_t e1; uint32_t e2; uint32_t e3; };
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

int64_t function_1fd70();
int64_t function_20050();
int64_t function_206b0();
int64_t function_24e1e();
int64_t function_254fe();
int64_t function_25622();
int64_t function_25a28();
int64_t function_25e90();
int64_t function_35fcc();
int64_t function_44912();
int64_t function_4885ae();
int64_t function_4886f0();
int64_t function_488a10();
int64_t function_488c50();
int64_t function_488ce0();
int64_t function_491110();
int64_t function_491e06();
int64_t function_494d90();
int64_t function_4977a0();
int64_t function_4b0f10();
int64_t function_4b2e6();
int64_t function_4b8b30();
int64_t function_4b9140();
int64_t function_4bd480();
int64_t function_4c1770();
int64_t function_4c19e0();
int64_t function_4c1d00();
int64_t function_4c1df0();
int64_t function_4c9fa();
int64_t function_4cb4a0();
int64_t function_4cccc0();
int64_t function_4cddb0();
int64_t function_4cf010();
int64_t function_4cf0a0();
int64_t function_4cf0c0();
int64_t function_4cf150();
int64_t function_4d2d40();
int64_t function_4d2e40();
int64_t function_4d3930();
int64_t function_4d3c90();
int64_t function_4d8e90();
int64_t function_4d906();
int64_t function_4d9090();
int64_t function_4d9eb0();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_52a5a();
int64_t function_542590();
int64_t function_542650();
int64_t function_548b0();
int64_t function_5f4d0();
int64_t function_61698();
int64_t function_61c0a();
int64_t function_61fb0();
int64_t function_62350();
int64_t function_62460();
int64_t function_68c41();
int64_t function_68d1a();
int64_t function_6bab2();
int64_t function_72832();
int64_t function_7293a();
int64_t function_729b6();
int64_t function_729ce();

// Address range: 0x4c9fa - 0x4caf9
int64_t function_4c9fa(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x4ca03
    function_4b2e6();
    *(int16_t *)(a1 + (int64_t)&g7) = 443;
    *(int64_t *)a1 = (int64_t)&g22;
    *(int32_t *)(a1 + (int64_t)&g8) = 1;
    function_6bab2(a1 + (int64_t)&g9, "cerberus.easyanticheat.net", 443, 1);
    function_7293a(a1 + (int64_t)&g15);
    int64_t * v2 = (int64_t *)(a1 + (int64_t)&g17); // 0x4ca63
    *v2 = 0;
    int64_t v3 = a1 + (int64_t)&g18; // 0x4ca6e
    *(int64_t *)v3 = 0;
    *(int64_t *)(a1 + (int64_t)&g19) = 0;
    int64_t * v4 = (int64_t *)(a1 + (int64_t)&g20); // 0x4ca84
    *v4 = 0;
    *v2 = function_24e1e();
    *(char *)(a1 + (int64_t)&g16) = 1;
    int64_t v5 = 0; // bp-48, 0x4caac
    int64_t v6 = 0; // bp-40, 0x4cab5
    function_4d906(v3, &v5);
    function_35fcc(&v6);
    *v4 = -0x8000000000000000;
    int64_t result = 0; // 0x4caeb
    if (v1 != __readfsqword(40)) {
        // 0x4caed
        __stack_chk_fail();
        result = (int64_t)&g30;
    }
    // 0x4caf2
    return result;
}

// Address range: 0x52a5a - 0x52b5a
int64_t function_52a5a(int64_t result, uint64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = *(int64_t *)(result - 24); // 0x52a6e
    int64_t v2 = a3; // 0x52a75
    int64_t v3 = result; // 0x52a75
    if (v1 < a2) {
        // 0x52a77
        function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::insert", a2, v1);
        v2 = a2;
        v3 = (int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)";
    }
    uint64_t v4 = v2;
    int64_t v5 = v3; // 0x52a9f
    if (0x3ffffffffffffff9 - v1 < a4) {
        // 0x52aa1
        function_542590("basic_string::insert");
        v5 = (int64_t)"basic_string::insert";
    }
    uint64_t v6 = v5;
    if (v4 >= v6 && v4 <= v6 + v1) {
        int64_t v7 = v6 - 24; // 0x52ae5
        if ((char)function_25622(v7) == 0) {
            int64_t v8 = v4 - v7; // 0x52af2
            function_25e90(result, a2, 0, a4);
            int64_t v9 = v8 + result; // 0x52b0d
            int64_t v10 = a2 + result; // 0x52b12
            int64_t v11 = v9 + a4; // 0x52b15
            int64_t v12 = a4; // 0x52b1c
            int64_t v13 = v9; // 0x52b1c
            int64_t v14 = v10; // 0x52b1c
            if (v10 < v11) {
                // 0x52b1e
                v12 = a4;
                v13 = v11;
                v14 = v10;
                if (v9 < v10) {
                    int64_t v15 = a2 - v8; // 0x52b2b
                    function_25a28(v10, v9, v15);
                    v12 = a4 - v15;
                    v13 = v10 + a4;
                    v14 = v15 + v10;
                }
            }
            // 0x52b49
            function_25a28(v14, v13, v12);
            // 0x52b4e
            return result;
        }
    }
    // 0x52ab5
    function_25e90(result, a2, 0, a4);
    if (a4 == 0) {
        // 0x52b4e
        return result;
    }
    // 0x52b49
    function_25a28(a2 + result, v4, a4);
    // 0x52b4e
    return result;
}

// Address range: 0x548b0 - 0x549ac
int64_t function_548b0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x548d2
    int64_t v2 = a2 - a1;
    int64_t v3 = 0x7ffffffffffffff; // 0x548fa
    int64_t v4; // 0x548b0
    int64_t v5; // 0x548b0
    int64_t v6; // 0x548b0
    int64_t v7; // 0x548b0
    if (v3 > 0x7ffffffffffffff | v3 < *v1 - a1 >> 5) {
        goto lab_0x54998;
    } else {
        // 0x54909
        v4 = v2;
        v5 = v3;
        v6 = a1;
        v7 = 0;
        if (v3 != 0) {
            goto lab_0x54998;
        } else {
            goto lab_0x54915;
        }
    }
  lab_0x54998:;
    int64_t v8 = 32 * v3; // 0x5499b
    int64_t v9 = function_4efd30(v8); // 0x5499f
    v4 = a2 - v8;
    v5 = v3;
    v6 = v8;
    v7 = v9;
    goto lab_0x54915;
  lab_0x54915:;
    // 0x54915
    int64_t v10; // 0x548b0
    int128_t v11 = __asm_movups(*(int128_t *)&v10); // 0x54915
    int128_t v12 = __asm_movups(*(int128_t *)(a3 + 16)); // 0x54919
    int64_t v13 = v7 + v2;
    __asm_movups_133(*(int128_t *)v13, v11);
    __asm_movups_133(*(int128_t *)(v13 + 16), v12);
    if (v6 != a2) {
        // 0x54938
        memmove((int64_t *)v7, (int64_t *)v6, (int32_t)v4);
    }
    int64_t v14 = *v1; // 0x54946
    int64_t v15 = v4 + 32 + v7; // 0x5494a
    int64_t v16 = v14 - a2; // 0x54952
    v10 = v16;
    if (v14 != a2) {
        // 0x5495a
        __asm_rep_movsb_memcpy((char *)v15, (char *)a2, v16);
    }
    if (v6 != 0) {
        // 0x5496e
        function_4eeb50(v6);
    }
    // 0x54976
    *(int64_t *)a1 = v7;
    *v1 = v16 + v15;
    *(int64_t *)(a1 + 16) = v7 + 32 * v5;
    int64_t result; // 0x548b0
    return result;
}

// Address range: 0x5f4d0 - 0x5f5ce
int64_t function_5f4d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5f4d0
    *(int64_t *)(a1 + 48) = 0;
    *(int32_t *)(a1 + 56) = 0;
    int64_t v1 = __readfsqword(40); // 0x5f4ee
    int64_t * v2 = (int64_t *)a1; // 0x5f50b
    *v2 = 0x30938542b805f090;
    int64_t * v3 = (int64_t *)(a1 + 8); // 0x5f50e
    *v3 = 0x30938542b805f090;
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x5f512
    *v4 = 0x30938542b805f090;
    int64_t v5; // bp-296, 0x5f4d0
    if ((char)function_4885ae(a2, (int64_t)sysconf(_SC_PAGESIZE), 0, &v5) != 0) {
        // 0x5f534
        int32_t v6; // 0x5f4d0
        int64_t v7 = (int64_t)v6 + a2; // 0x5f55d
        *v2 = (-0x13c772a311d2c06b * a2 ^ -0x716204840bfb3545) - 0x5e0a76393bfeda2b;
        *v3 = (-0x13c772a311d2c06b * v7 ^ -0x716204840bfb3545) - 0x5e0a76393bfeda2b;
        *v4 = (-0x13c772a311d2c06b * (v7 + (int64_t)(v6 & -0x1000)) ^ -0x716204840bfb3545) - 0x5e0a76393bfeda2b;
    }
    int64_t result = 0; // 0x5f5bd
    if (v1 != __readfsqword(40)) {
        // 0x5f5bf
        __stack_chk_fail();
        result = (int64_t)&g30;
    }
    // 0x5f5c4
    return result;
}

// Address range: 0x61698 - 0x61792
int64_t function_61698(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __readfsqword(40); // 0x616a2
    int32_t v2 = a3; // 0x616bb
    int64_t v3 = 2; // 0x616b5
    if (a5 != 0 && a4 != 0 && a2 != 0 && v2 != 0) {
        int64_t v4 = a3 & 0xffffffff; // 0x616e0
        v3 = 2;
        if (v4 + 22 <= (a5 & 0xffffffff)) {
            // 0x616f1
            v3 = 6;
            if (*(char *)(a1 + (int64_t)&g28) != 0) {
                int32_t * v5 = (int32_t *)(a1 + (int64_t)&g27); // 0x61707
                int32_t v6 = *v5; // 0x61707
                *v5 = v6 + 1;
                v3 = 1;
                if ((char)function_44912() != 0) {
                    int64_t v7 = v4 + a4; // 0x6174c
                    int128_t v8; // 0x61698
                    int128_t v9 = __asm_movups(0x8000000000000000 * v8 >> 64); // 0x61752
                    *(int16_t *)(v7 + 4) = 1;
                    *(int32_t *)v7 = v6;
                    __asm_movups_133(*(int128_t *)(v7 + 6), v9);
                    *(int32_t *)a5 = v2 + 22;
                    v3 = 0;
                }
            }
        }
    }
    int64_t result = v3; // 0x61780
    if (v1 != __readfsqword(40)) {
        // 0x61782
        __stack_chk_fail();
        result = (int64_t)&g30;
    }
    // 0x61787
    return result;
}

// Address range: 0x61fb0 - 0x620ab
int64_t function_61fb0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 + 160; // 0x61fba
    uint64_t v2 = *(int64_t *)(a1 + 168); // 0x61fc5
    int64_t v3 = a2; // bp-32, 0x61fce
    int64_t v4 = function_61c0a(v1, a2 % v2, &v3, &v3); // 0x61fdc
    if (v4 == 0) {
        // 0x620a2
        return 0;
    }
    int64_t v5 = *(int64_t *)v4; // 0x61fec
    if (v5 == 0) {
        // 0x620a2
        return v4 & -256;
    }
    int64_t v6 = *(int64_t *)v1; // 0x61ffe
    int64_t v7 = *(int64_t *)(v5 + 8) % v2;
    int64_t * v8 = (int64_t *)(8 * v7 + v6); // 0x6200f
    int64_t v9 = *v8; // 0x6200f
    int64_t v10 = v9;
    int64_t * v11 = (int64_t *)v10;
    int64_t v12 = *v11; // 0x62015
    while (v5 != v12) {
        // 0x62015
        v10 = v12;
        v11 = (int64_t *)v10;
        v12 = *v11;
    }
    int64_t * v13 = (int64_t *)v5; // 0x62025
    int64_t v14 = *v13; // 0x62025
    int64_t v15; // 0x61fb0
    int64_t v16; // 0x61fb0
    int64_t v17; // 0x61fb0
    if (v9 != v10) {
        // 0x6206a
        v17 = v5;
        if (v14 != 0) {
            int64_t v18 = *(int64_t *)(v14 + 8) % v2;
            v17 = v7;
            if (v7 != v18) {
                // 0x6207d
                *(int64_t *)(8 * v18 + v6) = v10;
                v17 = v18;
            }
        }
        goto lab_0x62081;
    } else {
        // 0x6202b
        v15 = v9;
        v16 = 0;
        if (v14 == 0) {
            goto lab_0x6204e;
        } else {
            int64_t v19 = *(int64_t *)(v14 + 8) % v2;
            v17 = v7;
            if (v7 == v19) {
                goto lab_0x62081;
            } else {
                // 0x6204a
                *(int64_t *)(8 * v19 + v6) = v10;
                v15 = *v8;
                v16 = v19;
                goto lab_0x6204e;
            }
        }
    }
  lab_0x62081:
    // 0x62081
    *v11 = *v13;
    function_254fe(v5 + 16, v10, (int128_t)v17, v14);
    int64_t v20 = function_4eeb50(v5); // 0x62094
    int64_t * v21 = (int64_t *)(a1 + 184); // 0x62099
    *v21 = *v21 - 1;
    // 0x620a2
    return v20 & -256 | 1;
  lab_0x6204e:;
    int64_t v22 = a1 + 176; // 0x6204e
    if (v15 == v22) {
        // 0x6205a
        *(int64_t *)v22 = v14;
    }
    // 0x62061
    *v8 = 0;
    v17 = v16;
    goto lab_0x62081;
}

// Address range: 0x62460 - 0x6255a
int64_t function_62460(int64_t a1) {
    int64_t result = function_24e1e(); // 0x62467
    int64_t v1 = *(int64_t *)(a1 + 176);
    if (v1 == 0) {
        // 0x62555
        return result;
    }
    int64_t v2 = v1;
    int64_t v3; // 0x62460
    int64_t v4; // 0x62460
    int64_t v5; // 0x62460
    int64_t v6; // 0x62460
    int64_t v7; // 0x62460
    int64_t v8; // 0x624a5
    int64_t * v9; // 0x6248a
    int64_t v10; // 0x6248a
    int64_t v11; // 0x62497
    while (true) {
      lab_0x6247f:
        // 0x6247f
        v5 = v2;
        v9 = (int64_t *)(v5 + 80);
        v10 = result - *v9;
        v4 = v10;
        if (0xf4240 * *(int64_t *)(a1 + 32) < v10) {
            // 0x62497
            v11 = *(int64_t *)(a1 + 288);
            int64_t v12 = *(int64_t *)(a1 + 280); // 0x6249e
            v8 = *(int64_t *)(v5 + 8);
            int64_t v13 = v11 - v12;
            v3 = v13;
            v7 = v12;
            if (v13 < 256) {
                goto lab_0x624f7;
            } else {
                int64_t v14 = v13 / 256; // 0x62460
                int64_t v15 = v12;
                v6 = v15;
                while (v8 != *(int64_t *)(v15 + 44)) {
                    // 0x624c1
                    if (v8 == *(int64_t *)(v15 + 108)) {
                        // 0x624c7
                        v6 = v15 + 64;
                        goto lab_0x62533;
                    }
                    // 0x624cd
                    if (v8 == *(int64_t *)(v15 + 172)) {
                        // 0x624d6
                        v6 = v15 + 128;
                        goto lab_0x62533;
                    }
                    // 0x624dc
                    if (v8 == *(int64_t *)(v15 + 236)) {
                        // 0x624e9
                        v6 = v15 + 192;
                        goto lab_0x62533;
                    }
                    int64_t v16 = v14;
                    int64_t v17 = v15 + 256; // 0x624dc
                    v14 = v16 - 1;
                    int64_t v18 = v17; // 0x624b9
                    if (v16 < 2) {
                        // 0x624b3
                        v3 = v11 - v17;
                        v7 = v17;
                        goto lab_0x624f7;
                    }
                    v15 = v18;
                    v6 = v15;
                }
                goto lab_0x62533;
            }
        } else {
            goto lab_0x6254d;
        }
    }
  lab_0x62555:;
    // 0x62555
    int64_t result2; // 0x62460
    return result2;
  lab_0x6254d:
    // 0x6254d
    v2 = *(int64_t *)v5;
    result2 = v4;
    if (v2 == 0) {
        // break -> 0x62555
        goto lab_0x62555;
    }
    goto lab_0x6247f;
  lab_0x624f7:;
    int64_t v19 = v7;
    int64_t v20 = v3 >> 6; // 0x624fd
    int64_t v21 = v19; // 0x62460
    int64_t v22; // 0x62460
    int64_t v23; // 0x62460
    switch (v20) {
        case 2: {
            goto lab_0x6251e;
        }
        case 3: {
            // 0x62514
            v6 = v19;
            if (v8 == *(int64_t *)(v19 + 44)) {
                goto lab_0x62533;
            } else {
                // 0x6251a
                v21 = v19 + 64;
                goto lab_0x6251e;
            }
        }
        default: {
            // 0x6250d
            v23 = v19;
            if (v20 != 1) {
                // 0x62538
                v22 = function_62350(a1, v5 + 16, 1);
                goto lab_0x62549;
            } else {
                goto lab_0x62528;
            }
        }
    }
  lab_0x6251e:;
    int64_t v24 = v21;
    v6 = v24;
    if (v8 == *(int64_t *)(v24 + 44)) {
        goto lab_0x62533;
    } else {
        // 0x62524
        v23 = v24 + 64;
        goto lab_0x62528;
    }
  lab_0x62533:
    // 0x62533
    v22 = v10;
    if (v6 != v11) {
        goto lab_0x62549;
    } else {
        // 0x62538
        v22 = function_62350(a1, v5 + 16, 1);
        goto lab_0x62549;
    }
  lab_0x62528:
    // 0x62528
    v6 = v23;
    if (v8 != *(int64_t *)(v23 + 44)) {
        // 0x62538
        v22 = function_62350(a1, v5 + 16, 1);
        goto lab_0x62549;
    } else {
        goto lab_0x62533;
    }
  lab_0x62549:
    // 0x62549
    *v9 = result;
    v4 = v22;
    goto lab_0x6254d;
}

// Address range: 0x68d1a - 0x68e1a
int64_t function_68d1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)a1; // 0x68d2d
    *v1 = 0;
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x68d34
    *v2 = 0;
    int64_t v3 = __readfsqword(40); // 0x68d41
    int64_t v4 = function_4efd30(32); // 0x68d51
    int64_t * v5 = (int64_t *)(a4 + 8); // 0x68d5d
    int64_t v6 = *v5 - a4; // 0x68d61
    int64_t * v7 = (int64_t *)(v4 + 8); // 0x68d65
    *v7 = 0;
    int64_t * v8 = (int64_t *)(v4 + 16); // 0x68d6d
    *v8 = 0;
    int64_t * v9 = (int64_t *)(v4 + 24); // 0x68d75
    *v9 = 0;
    *(int64_t *)v4 = a3;
    int64_t v10 = 0; // 0x68d85
    if (v6 != 0) {
        // 0x68d87
        v10 = function_4efd30(v6);
    }
    // 0x68d8f
    *v7 = v10;
    *v8 = v10;
    *v9 = v10 + v6;
    *v8 = function_68c41(a4, *v5, v10);
    int64_t v11 = 0; // bp-56, 0x68db7
    int64_t v12 = function_4efd30(32); // 0x68dbf
    *(int64_t *)(v12 + 24) = v4;
    *(int64_t *)(v12 + 8) = 0x100000001;
    *v2 = v12;
    *v1 = v4;
    *(int64_t *)v12 = (int64_t)&g23;
    v11 = *v2;
    function_35fcc(&v11);
    int64_t result = 0; // 0x68e08
    if (v3 != __readfsqword(40)) {
        // 0x68e0a
        __stack_chk_fail();
        result = (int64_t)&g30;
    }
    // 0x68e0f
    return result;
}

// Address range: 0x72832 - 0x72931
int64_t function_72832(int64_t cond, int64_t a2, int64_t a3) {
    unsigned char v1 = *(char *)(cond + 88); // 0x7283c
    int64_t v2 = __readfsqword(40); // 0x72840
    int64_t v3 = 0; // 0x72853
    int64_t v4 = v1; // 0x72853
    if (v1 == 0) {
        int64_t mutex = cond + 48; // 0x72861
        int64_t * v5; // 0x72832
        int64_t tp; // bp-64, 0x72832
        int32_t v6; // 0x72832
        if ((int32_t)a2 != -1) {
            uint64_t v7 = a2 & 0xffffffff; // 0x7285f
            gettimeofday((struct timeval *)&tp, NULL);
            int128_t v8; // 0x72832
            int64_t abstime = tp + v7 / (int64_t)(int32_t)&g11 + (int64_t)((0xf4240 * (v7 % (int64_t)(int32_t)&g11) & 0xffffffc0) + (int64_t)v8 * (int64_t)&g11 > 0x3b9ac9ff);
            int64_t v9; // bp-88, 0x72832
            function_729b6(&v9, mutex);
            int32_t v10 = pthread_cond_timedwait((int64_t *)cond, (int64_t *)mutex, (struct timespec *)&abstime); // 0x728fb
            v5 = &v9;
            v6 = v10;
        } else {
            // 0x7286c
            function_729b6(&tp, mutex);
            int32_t v11 = pthread_cond_wait((int64_t *)cond, (int64_t *)mutex); // 0x7287d
            v5 = &tp;
            v6 = v11;
        }
        // 0x72909
        v3 = function_729ce(v5) & -256;
        v4 = v6 == 0;
    }
    int64_t result = v4 | v3; // 0x7291f
    if (v2 != __readfsqword(40)) {
        // 0x72921
        __stack_chk_fail();
        result = (int64_t)&g30;
    }
    // 0x72926
    return result;
}

// Address range: 0x488a10 - 0x488b0c
int64_t function_488a10(int128_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int64_t v2 = __readfsqword(40); // 0x488a27
    int64_t v3 = 0; // 0x488a3f
    if (v1 != 0 == (a2 != 0)) {
        // 0x488a53
        int64_t v4; // bp-88, 0x488a10
        function_488ce0(&v4);
        int64_t v5 = function_4886f0(v1, &v4, &v4); // 0x488a70
        v3 = 0;
        if ((char)v5 != 0) {
            if (a4 != 0) {
                // 0x488a80
                int32_t v6; // 0x488a10
                *(int32_t *)a4 = v6 % 256;
            }
            int64_t v7 = v1 & -0x1000; // 0x488a93
            int32_t v8 = mprotect((int64_t *)v7, (int32_t)((a2 + (int64_t)&g29 + v1 & 0xfffff000) - v7), (int32_t)a3); // 0x488ad1
            int64_t v9; // 0x488a10
            v3 = v9 & -256 | (int64_t)(v8 == 0);
        }
        // 0x488ae2
        function_488c50(&v4);
    }
    int64_t result = v3 & 0xffffffff; // 0x488aff
    if (v2 != __readfsqword(40)) {
        // 0x488b01
        __stack_chk_fail();
        result = (int64_t)&g30;
    }
    // 0x488b06
    return result;
}

// Address range: 0x491110 - 0x49120a
int64_t function_491110(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x491155
    int64_t v2 = 0x39879829e16013bd * (a1 + 0x5e0a76393bfeda2b ^ -0x716204840bfb3545); // 0x49116b
    int32_t v3; // bp-68, 0x491110
    int64_t v4 = function_488a10((int128_t)v2, 8, 7, (int64_t)&v3); // 0x49116f
    if ((char)v4 != 0) {
        int64_t v5 = *(int64_t *)(a1 + 24); // 0x491185
        int64_t v6 = 0x39879829e16013bd * (v2 + 0x5e0a76393bfeda2b ^ -0x716204840bfb3545); // 0x491193
        int64_t * v7 = (int64_t *)v6; // 0x491197
        int64_t v8 = *v7; // 0x491197
        *v7 = v5 == v8 ? *(int64_t *)(a1 + 16) : v8;
        function_488a10((int128_t)v6, 8, (int64_t)v3, 0);
        if (v5 != v8) {
            // 0x4911c7
            function_491e06(function_4efd30(16), a1 + 32);
        }
    }
    // 0x4911de
    function_35fcc((int64_t *)(a1 + 40));
    int64_t result = 0; // 0x4911f4
    if (v1 != __readfsqword(40)) {
        // 0x4911f6
        __stack_chk_fail();
        result = (int64_t)&g30;
    }
    // 0x4911fb
    return result;
}

// Address range: 0x4977a0 - 0x49789b
int64_t function_4977a0(int64_t a1) {
    if (a1 == 0) {
        // 0x497894
        int64_t result; // 0x4977a0
        return result;
    }
    // 0x4977b2
    function_4c1df0(a1 + (int64_t)&g12);
    function_4cb4a0(a1 + (int64_t)&g13);
    function_4cccc0(a1 + (int64_t)&g14);
    function_4cddb0(a1 + (int64_t)&g21);
    function_4b8b30(a1 + 8);
    function_4b9140(a1 + 256);
    free((int64_t *)*(int64_t *)(a1 + (int64_t)&g2));
    int64_t * v1 = (int64_t *)(a1 + (int64_t)&g3); // 0x497803
    int64_t v2 = *v1; // 0x497803
    if (v2 != 0) {
        int64_t v3 = *(int64_t *)(a1 + (int64_t)&g4); // 0x49780f
        int64_t v4 = v2; // 0x497819
        if (v3 != 0) {
            int64_t v5 = v2; // 0x49781e
            *(char *)v5 = 0;
            v5++;
            while (v5 != v3 + v2) {
                // 0x497820
                *(char *)v5 = 0;
                v5++;
            }
            // 0x49782c
            v4 = *v1;
        }
        // 0x497833
        free((int64_t *)v4);
    }
    int64_t v6 = *(int64_t *)(a1 + (int64_t)&g5); // 0x497838
    if (v6 != 0) {
        int64_t v7 = *(int64_t *)(v6 + 16); // 0x497848
        free((int64_t *)v6);
        while (v7 != 0) {
            int64_t v8 = v7;
            v7 = *(int64_t *)(v8 + 16);
            free((int64_t *)v8);
        }
    }
    // 0x497859
    free((int64_t *)*(int64_t *)(a1 + (int64_t)&g6));
    free((int64_t *)*(int64_t *)(a1 + (int64_t)&g7));
    function_494d90(*(int64_t *)(a1 + (int64_t)&g10));
    int64_t result2 = a1 + (int64_t)&g26; // 0x49787d
    int64_t v9 = a1; // 0x497884
    *(char *)v9 = 0;
    v9++;
    while (v9 != result2) {
        // 0x497888
        *(char *)v9 = 0;
        v9++;
    }
    // 0x497894
    return result2;
}

// Address range: 0x4bd480 - 0x4bd57b
int64_t function_4bd480(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, uint64_t a5, int64_t a6, uint64_t a7, int64_t a8, uint64_t a9, int64_t a10, uint64_t a11, int64_t a12, uint64_t a13) {
    int64_t v1 = a1 + 8; // 0x4bd48b
    *(int32_t *)v1 = 1;
    *(int64_t *)(a1 + 16) = a3 / 8;
    *(int64_t *)(a1 + 24) = a2;
    if (a4 != 0) {
        // 0x4bd49c
        *(int32_t *)(a1 + 32) = 1;
        *(int64_t *)(a1 + 48) = a4;
        *(int64_t *)(a1 + 40) = a5 / 8;
    }
    // 0x4bd4af
    *(int64_t *)(a1 + 72) = a6;
    *(int32_t *)(a1 + 56) = 1;
    int64_t v2 = a1 + 152; // 0x4bd4c3
    *(int32_t *)v2 = 1;
    *(int32_t *)(a1 + 80) = 1;
    *(int32_t *)(a1 + 104) = 1;
    *(int32_t *)(a1 + 128) = 1;
    *(int64_t *)(a1 + 136) = 1;
    *(int64_t *)(a1 + 64) = a7 / 8;
    *(int64_t *)(a1 + 160) = a13 / 8;
    *(int64_t *)(a1 + 168) = a12;
    *(int64_t *)(a1 + 88) = a9 / 8;
    *(int64_t *)(a1 + 96) = a8;
    *(int64_t *)(a1 + 112) = a11 / 8;
    *(int64_t *)(a1 + 120) = a10;
    *(int64_t *)(a1 + 144) = (int64_t)&g24;
    *(int64_t *)(a1 + 176) = function_4b0f10(v1);
    int64_t v3 = function_4b0f10(v2); // 0x4bd561
    *(int32_t *)(a1 + 192) = 1;
    *(int64_t *)(a1 + 184) = v3;
    return 0;
}

// Address range: 0x4d2e40 - 0x4d2f3e
int64_t function_4d2e40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result = function_4c1770(); // 0x4d2e79
    if ((int32_t)result != 0) {
        // 0x4d2e82
        return result;
    }
    int64_t v1 = a1 + 24; // 0x4d2eb0
    uint64_t v2 = function_4c1d00(a2) % 256; // 0x4d2eb4
    function_4c19e0(a1, v1, v2);
    memset((void *)(int64_t)((int64_t *)v1), 1, (int32_t)v2);
    *(int64_t *)(a1 + 112) = a3;
    *(int64_t *)(a1 + 120) = a4;
    *(int32_t *)(a1 + 108) = (int32_t)&g1;
    if (v2 >= 21) {
        // 0x4d2f28
        return v2 < 29 ? 36 : 48;
    }
    int64_t * v3 = (int64_t *)(a1 + 96); // 0x4d2f00
    *v3 = 24;
    int64_t result2 = function_4d2d40(a1, a5, a6); // 0x4d2f0d
    if ((int32_t)result2 == 0) {
        // 0x4d2f1a
        *v3 = 16;
    }
    // 0x4d2e82
    return result2;
}

// Address range: 0x4d3c90 - 0x4d3d8e
int64_t function_4d3c90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x4d3c90
    int64_t v1; // bp-312, 0x4d3c90
    function_4cf010(&v1);
    int64_t v2; // bp-328, 0x4d3c90
    int64_t result = function_4d3930(a1, 4, a3, a4, &v2, 16, 0, 0); // 0x4d3cf3
    if ((int32_t)result != 0) {
        // 0x4d3cfc
        return result;
    }
    // 0x4d3d30
    function_4cf0c0(&v1, &v2, 16);
    int64_t v3 = function_4cf150(&v1, a6, a5, a7); // 0x4d3d57
    int64_t v4 = (int64_t)&v2; // 0x4d3d66
    *(char *)v4 = 0;
    v4++;
    while (v4 != (int64_t)&v1) {
        // 0x4d3d70
        *(char *)v4 = 0;
        v4++;
    }
    // 0x4d3d7c
    function_4cf0a0(&v1);
    return v3 & 0xffffffff;
}

// Address range: 0x4d9090 - 0x4d9189
int64_t function_4d9090(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, uint64_t a5, int64_t a6, int64_t a7) {
    if (a7 == 0) {
        // 0x4d90af
        int64_t result; // 0x4d9090
        return result;
    }
    uint32_t v1 = g25; // 0x4d90cf
    int64_t result2 = v1; // 0x4d90da
    if (v1 == 0x40000000) {
        // 0x4d90dc
        result2 = function_4d8e90();
    }
    uint64_t v2 = a5 % 256; // 0x4d90ef
    uint64_t v3 = a3 % 256; // 0x4d90f2
    if ((result2 & 64) != 0) {
        // 0x4d90af
        return result2;
    }
    int64_t v4 = g25; // 0x4d9127
    if (g25 == 0x40000000) {
        // 0x4d9129
        v4 = function_4d8e90();
    }
    uint64_t v5 = v4;
    int64_t result3; // 0x4d9090
    if ((v5 & 64) != 0) {
        // 0x4d9158
        result3 = function_20050(a1, a2, v3, a4, v2, a6);
    } else {
        if ((v5 & 4) != 0) {
            // 0x4d9160
            result3 = function_1fd70(a1, a2, v3, a4, v2, a6);
        } else {
            if (v5 % 2 == 0) {
                // 0x4d9108
                result3 = function_4d9eb0(a1, a2, v3, a4, v2, a6);
            } else {
                // 0x4d914c
                result3 = function_206b0(a1, a2, v3, a4, v2, a6);
            }
        }
    }
    int64_t v6 = a4 + 1; // 0x4d910d
    int64_t v7 = a6 + 64; // 0x4d911a
    while (a7 + a4 != v6) {
        int64_t v8 = v6;
        int64_t v9 = v7;
        v4 = g25;
        if (g25 == 0x40000000) {
            // 0x4d9129
            v4 = function_4d8e90();
        }
        // 0x4d912e
        v5 = v4;
        if ((v5 & 64) != 0) {
            // 0x4d9158
            result3 = function_20050(a1, a2, v3, v8, v2, v9);
        } else {
            if ((v5 & 4) != 0) {
                // 0x4d9160
                result3 = function_1fd70(a1, a2, v3, v8, v2, v9);
            } else {
                if (v5 % 2 == 0) {
                    // 0x4d9108
                    result3 = function_4d9eb0(a1, a2, v3, v8, v2, v9);
                } else {
                    // 0x4d914c
                    result3 = function_206b0(a1, a2, v3, v8, v2, v9);
                }
            }
        }
        // 0x4d910d
        v6 = v8 + 1;
        v7 = v9 + 64;
    }
    // 0x4d90af
    return result3;
}
