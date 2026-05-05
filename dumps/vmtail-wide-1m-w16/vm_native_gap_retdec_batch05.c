/*
 * Targeted RetDec C for native executable gap queue batch 5.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x535930-0x535ad8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x527483-0x52762a rank=- name=- kind=- bytes=- uncovered=-
 *   0x54d0a0-0x54d247 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6747c-0x67622 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48aec0-0x48b066 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f3230-0x4f33d6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x542770-0x542916 rank=- name=- kind=- bytes=- uncovered=-
 *   0x69802-0x699a6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b13e0-0x4b1584 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6bd8a-0x6bf2a rank=- name=- kind=- bytes=- uncovered=-
 *   0x568b50-0x568d00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x61082-0x61221 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4886f0-0x48888d rank=- name=- kind=- bytes=- uncovered=-
 *   0x55620-0x557b9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ae080-0x4ae218 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cd900-0x4cda96 rank=- name=- kind=- bytes=- uncovered=-
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
int32_t mbsnrtowcs(int32_t *dst, char **src, size_t nms, size_t len, struct _TYPEDEF___mbstate_t *ps);
size_t wcslen(const int32_t *s);
int wctob(int32_t wc);
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

int64_t function_1fcc0();
int64_t function_20210();
int64_t function_203b0();
int64_t function_20bd8();
int64_t function_2508e();
int64_t function_256ba();
int64_t function_375122();
int64_t function_3ac961();
int64_t function_4886f0();
int64_t function_488745();
int64_t function_488749();
int64_t function_488770();
int64_t function_488791();
int64_t function_4887b3();
int64_t function_4887bb();
int64_t function_488829();
int64_t function_488834();
int64_t function_48aec0();
int64_t function_48af43();
int64_t function_48af61();
int64_t function_48afe0();
int64_t function_48b010();
int64_t function_48b041();
int64_t function_48b046();
int64_t function_48b052();
int64_t function_48d9cf();
int64_t function_4a8c6();
int64_t function_4adc80();
int64_t function_4add10();
int64_t function_4add30();
int64_t function_4ae080();
int64_t function_4af830();
int64_t function_4afa40();
int64_t function_4b0460();
int64_t function_4b04e0();
int64_t function_4b1300();
int64_t function_4b13e0();
int64_t function_4cd7d0();
int64_t function_4cd900();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f0ad0();
int64_t function_4f3230();
int64_t function_4f3270();
int64_t function_50ab00();
int64_t function_50b1c0();
int64_t function_5270e0();
int64_t function_527105();
int64_t function_527116();
int64_t function_527125();
int64_t function_527135();
int64_t function_527483();
int64_t function_5274b0();
int64_t function_52cc60();
int64_t function_535610();
int64_t function_535930();
int64_t function_5423b0();
int64_t function_542770();
int64_t function_5428f0();
int64_t function_54cf10();
int64_t function_54d0a0();
int64_t function_55536();
int64_t function_55620();
int64_t function_55770();
int64_t function_5659d0();
int64_t function_566100();
int64_t function_566180();
int64_t function_567a80();
int64_t function_567c30();
int64_t function_567d40();
int64_t function_567f20();
int64_t function_5689d0();
int64_t function_568b50();
int64_t function_568b70();
int64_t function_568c40();
int64_t function_568cf0();
int64_t function_56e880();
int64_t function_56e8f0();
int64_t function_56e910();
int64_t function_56e930();
int64_t function_5858c();
int64_t function_5f453();
int64_t function_609a8830();
int64_t function_61082();
int64_t function_6747c();
int64_t function_69166();
int64_t function_696e0();
int64_t function_69802();
int64_t function_6bd8a();

// Address range: 0x55620 - 0x556d0
int64_t function_55620(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x55620
    if (a6 == 0 | a5 == 0 | a4 == 0 | a3 == 0 | *(int64_t *)(a2 - 24) == 0) {
        // 0x556bc
        return 27;
    }
    // 0x5565f
    *(int64_t *)(a9 + 8) = *(int64_t *)a9;
    if ((char)function_5858c(a2, a9, -1) == 0) {
        // 0x556bc
        return 27;
    }
    // 0x5568a
    return function_55536(a1, a3, a4, a5, a6, a7, a8, a9);
}

// Address range: 0x55770 - 0x55773
int64_t function_55770(void) {
    // 0x55770
    int64_t result; // 0x55770
    return result;
}

// Address range: 0x61082 - 0x61221
int64_t function_61082(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 16) + a1;
    int64_t * v2 = (int64_t *)(a2 + 8); // 0x61095
    int64_t v3 = *v2; // 0x61095
    int64_t v4 = a2; // 0x6109c
    int64_t * v5 = v2; // 0x6109c
    int64_t v6 = v3; // 0x6109c
    int64_t * v7 = v2; // 0x6109c
    int64_t v8 = a2; // 0x6109c
    int64_t * v9; // 0x61082
    int64_t v10; // 0x61082
    int64_t v11; // 0x61082
    int64_t v12; // 0x61082
    int64_t v13; // 0x61082
    if (v3 != 0) {
        while (true) {
          lab_0x61130:
            // 0x61130
            v12 = v8;
            int64_t * v14 = v7;
            int64_t v15 = v12 + 16 + v6; // 0x61133
            if (v6 >= a3) {
                // break -> 0x6113a
                break;
            }
            int64_t v16 = v12; // 0x611ac
            if (v15 == v1) {
                // 0x6121d
                return 0;
            }
            int64_t v17 = v6; // 0x611ac
            v13 = v15;
            uint64_t v18 = *(int64_t *)(v13 + 8); // 0x611ae
            while (v18 != 0) {
                int64_t v19 = v16;
                int64_t v20 = 0; // 0x611bb
                int64_t v21 = v19; // 0x611bb
                if (*(int64_t *)v13 == 0) {
                    if (v18 > a3) {
                        goto lab_0x611f7_2;
                    }
                    int64_t v22 = v17;
                    v20 = v18;
                    v21 = v13;
                    if (v22 != 0) {
                        int64_t v23 = v18 + 16 + v22; // 0x611c7
                        v20 = v23;
                        v21 = v19;
                        if (v23 > a3) {
                            int64_t * v24 = (int64_t *)(v19 + 8);
                            *v24 = v23;
                            v10 = v23;
                            v9 = v24;
                            v11 = v19;
                            goto lab_0x611d5;
                        }
                    }
                }
                // 0x611e7
                v16 = v21;
                int64_t v25 = v18 + 16 + v13; // 0x611e7
                v17 = v20;
                if (v25 == v1) {
                    // 0x6121d
                    return 0;
                }
                v13 = v25;
                v18 = *(int64_t *)(v13 + 8);
            }
            if (v13 != v15) {
                goto lab_0x611f7_2;
            }
            // 0x61210
            *v14 = 0;
            int64_t * v26 = (int64_t *)(v12 + 8);
            v10 = *v26;
            v9 = v26;
            v11 = v12;
            goto lab_0x611d5;
        }
    } else {
        goto lab_0x610a2;
    }
  lab_0x611f7_2:;
    int64_t v27 = function_61082(a1, v13, a3); // 0x611fa
    int64_t * v28 = (int64_t *)(a1 + 8); // 0x611ff
    int64_t result = v27; // 0x61203
    if (*v28 > v12) {
        // 0x61205
        *v28 = v12;
        result = v27;
        return result;
    } else {
        return result;
    }
  lab_0x610a2:;
    uint64_t v29 = v1 - 16 - v4; // 0x610ac
    if (v29 < a3) {
        // 0x6121d
        return 0;
    }
    uint64_t v30 = a3 + 15 & -16; // 0x610b1
    *(int64_t *)v4 = a3;
    int64_t v31 = v30 > v29 ? v29 : v30; // 0x610c9
    int64_t result2 = v4 + 16;
    int64_t v32 = v31 + result2; // 0x610cd
    *v5 = v31;
    int64_t v33 = v1; // 0x610d9
    if (v1 != v32) {
        int64_t v34 = v32;
        v33 = v34;
        while (*(int64_t *)v34 != 0) {
            int64_t v35 = v34 + 16 + *(int64_t *)(v34 + 8); // 0x610e5
            v33 = v1;
            if (v1 == v35) {
                // break -> 0x610f5
                break;
            }
            v34 = v35;
            v33 = v34;
        }
    }
    uint64_t v36 = v31 - v30; // 0x610f5
    if (v36 < 80) {
        int64_t v37 = v33;
        *(int64_t *)(a1 + 8) = v1 != v37 ? v37 : -1;
        result = result2;
        // 0x6121d
        return result;
    }
    int64_t v38 = result2 + v30; // 0x610fe
    *v5 = v30;
    int64_t v39; // 0x61082
    if (v38 == v1) {
        goto lab_0x61195;
    } else {
        // 0x61110
        *(int64_t *)v38 = 0;
        *(int64_t *)(v38 + 8) = v36 - 16;
        v39 = v38;
        goto lab_0x61199;
    }
  lab_0x611d5:
    // 0x611d5
    v8 = v11;
    v7 = v9;
    v6 = v10;
    v4 = v8;
    v5 = v7;
    if (v6 == 0) {
        goto lab_0x610a2;
    }
    goto lab_0x61130;
  lab_0x61199:
    // 0x61199
    *(int64_t *)(a1 + 8) = v39;
    // 0x6121d
    return result2;
  lab_0x61195:
    // 0x61195
    v39 = -1;
    goto lab_0x61199;
}

// Address range: 0x6747c - 0x67622
int64_t function_6747c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x67490
    int64_t v2 = 0; // 0x674a6
    int64_t file_path; // bp-1112, 0x6747c
    int64_t v3; // 0x6747c
    struct _IO_FILE * file; // 0x67527
    if (a1 == 0) {
        goto lab_0x675f5;
    } else {
        // 0x674ac
        int64_t v4; // bp-1128, 0x6747c
        int64_t v5 = (int64_t)&v4; // 0x67489
        bool v6; // 0x6747c
        int64_t v7 = v6 ? -1 : 1;
        int64_t v8 = -1; // 0x674b8
        int64_t v9 = a1; // 0x6747c
        int64_t v10 = 0; // 0x674b8
        while (v8 != 0) {
            int64_t v11 = v9;
            v8--;
            v9 = v11 + v7;
            v10 = v8;
            if (*(char *)v11 == 0) {
                // break -> 
                break;
            }
            v10 = 0;
        }
        int64_t v12 = (int64_t)&file_path; // 0x674c4
        v4 = v12;
        file_path = 0x28631e416f72702f;
        int64_t v13 = 0xa1b12224b2ff2a2; // 0x67509
        int64_t v14 = 0; // 0x67510
        v14 += 4;
        v13 = 0xfffcbc03 * (v13 & 0xffffffff) + 0xffd9613c;
        *(int32_t *)(v14 + v12) = *(int32_t *)(v14 + v12) ^ (int32_t)v13;
        while (v14 != 12) {
            // 0x674f2
            v14 += 4;
            int32_t v15 = *(int32_t *)(v14 + v4); // 0x67501
            v13 = 0xfffcbc03 * (v13 & 0xffffffff) + 0xffd9613c;
            *(int32_t *)(v14 + v12) = v15 ^ (int32_t)v13;
        }
        // 0x6751a
        file = fopen((char *)&file_path, "r");
        v2 = 0;
        if (file == NULL) {
            goto lab_0x675e2;
        } else {
            // 0x67538
            int64_t str3; // bp-1088, 0x6747c
            char * str = fgets((char *)&str3, (int32_t)&g3, file); // 0x67548
            v3 = 0;
            if (str != NULL) {
                int64_t v16 = -2 - v10; // 0x674e9
                int64_t v17 = (int64_t)&str3; // 0x67538
                int32_t is_feof = feof(file); // 0x6755d
                v3 = 0;
                while (is_feof == 0) {
                    char v18 = is_feof;
                    int64_t v19 = v17; // 0x6747c
                    int64_t v20 = -1; // 0x6756d
                    int64_t v21 = 0; // 0x6756d
                    while (v20 != 0) {
                        int64_t v22 = v19;
                        v20--;
                        v19 = v22 + v7;
                        v21 = v20;
                        if (*(char *)v22 == v18) {
                            // break -> 
                            break;
                        }
                        v21 = 0;
                    }
                    int64_t v23 = v21;
                    uint64_t v24 = -2 - v23; // 0x67579
                    if (v16 + 4 <= v24) {
                        int64_t v25 = -3 - v23; // 0x67585
                        char * v26 = (char *)(v5 + 40 + v25); // 0x67589
                        if (*v26 == 10) {
                            // 0x67590
                            *v26 = 0;
                        }
                        int64_t v27 = v24 - v16; // 0x67595
                        if ((char)function_48d9cf(v17 - 1 + v27, a1, v16, v25) != 0) {
                            // 0x675ac
                            if (*(char *)(v5 + 38 + v27) == 47) {
                                char * found_char_pos = strchr((char *)&str3, 47); // 0x675bc
                                if (found_char_pos != NULL) {
                                    // 0x675ca
                                    v3 = function_20bd8((int64_t)found_char_pos, 5);
                                    goto lab_0x675da;
                                }
                            }
                        }
                    }
                    char * str2 = fgets((char *)&str3, (int32_t)&g3, file); // 0x67548
                    v3 = 0;
                    if (str2 == NULL) {
                        // break -> 0x675da
                        break;
                    }
                    is_feof = feof(file);
                    v3 = 0;
                }
            }
            goto lab_0x675da;
        }
    }
  lab_0x675f5:;
    int64_t result = v2; // 0x67609
    if (v1 != __readfsqword(40)) {
        // 0x6760b
        __stack_chk_fail();
        result = (int64_t)&g14;
    }
    // 0x67610
    return result;
  lab_0x675e2:
    // 0x675e2
    memset2(&file_path, 0, 16);
    goto lab_0x675f5;
  lab_0x675da:
    // 0x675da
    fclose(file);
    v2 = v3;
    goto lab_0x675e2;
}

// Address range: 0x69802 - 0x699a6
int64_t function_69802(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x69816
    int64_t * v2 = (int64_t *)a1; // 0x6984c
    *v2 = (int64_t)&g12;
    int64_t v3; // bp-104, 0x69802
    function_69166(&v3, "host");
    int64_t v4; // bp-96, 0x69802
    function_696e0(&v4, &v3);
    int64_t v5; // bp-88, 0x69802
    function_5f453(&v5, &v4, ": ");
    int64_t * v6 = (int64_t *)function_4a8c6(&v5, a3); // 0x69884
    int64_t v7 = *v6; // bp-80, 0x6988a
    *v6 = (int64_t)&g12;
    int64_t v8; // bp-72, 0x69802
    function_5f453(&v8, &v7, "\r\n");
    function_256ba(a1, &v8);
    function_2508e(&v8);
    function_2508e(&v7);
    function_2508e(&v5);
    function_2508e(&v4);
    function_2508e(&v3);
    int64_t v9 = a2 + 56; // 0x698e3
    int64_t v10 = *(int64_t *)(a2 + 72); // 0x698e7
    if (v9 != v10) {
        int64_t v11 = v10; // 0x69972
        function_696e0(&v4, (int64_t *)(v11 + 32));
        function_5f453(&v5, &v4, ": ");
        int64_t * v12 = (int64_t *)function_4a8c6(&v5, v11 + 40); // 0x69925
        v7 = *v12;
        *v12 = (int64_t)&g12;
        function_5f453(&v8, &v7, "\r\n");
        function_4a8c6(v2, (int64_t)&v8);
        function_2508e(&v8);
        function_2508e(&v7);
        function_2508e(&v5);
        function_2508e(&v4);
        v11 = function_4f0ad0(v11);
        while (v9 != v11) {
            // 0x698fb
            function_696e0(&v4, (int64_t *)(v11 + 32));
            function_5f453(&v5, &v4, ": ");
            v12 = (int64_t *)function_4a8c6(&v5, v11 + 40);
            v7 = *v12;
            *v12 = (int64_t)&g12;
            function_5f453(&v8, &v7, "\r\n");
            function_4a8c6(v2, (int64_t)&v8);
            function_2508e(&v8);
            function_2508e(&v7);
            function_2508e(&v5);
            function_2508e(&v4);
            v11 = function_4f0ad0(v11);
        }
    }
    int64_t result = a1; // 0x69990
    if (v1 != __readfsqword(40)) {
        // 0x69992
        __stack_chk_fail();
        result = (int64_t)&g14;
    }
    // 0x69997
    return result;
}

// Address range: 0x6bd8a - 0x6bf2a
int64_t function_6bd8a(int64_t a1, int64_t a2) {
    int64_t v1 = a2;
    int64_t * v2 = (int64_t *)(a1 + 64); // 0x6bd8a
    int64_t * v3 = (int64_t *)(a1 + 48); // 0x6bd8e
    int64_t v4 = *v3; // 0x6bd8e
    int32_t v5 = a2;
    if (v4 != *v2 - 4) {
        int64_t result = v4 + 4; // 0x6bd9d
        *(int32_t *)v4 = v5;
        *v3 = result;
        return result;
    }
    int64_t * v6 = (int64_t *)(a1 + 72); // 0x6bdbd
    int64_t v7 = *v6; // 0x6bdbd
    int64_t * v8 = (int64_t *)(a1 + 8); // 0x6bdc1
    uint64_t v9 = *v8; // 0x6bdc1
    int64_t * v10; // 0x6bd8a
    int32_t v11; // 0x6bd8a
    int64_t v12; // 0x6bd8a
    int64_t v13; // 0x6bd8a
    int64_t v14; // 0x6bd8a
    int64_t * v15; // 0x6bde2
    uint64_t v16; // 0x6bde2
    int64_t v17; // 0x6bdf4
    int64_t v18; // 0x6be08
    int64_t v19; // 0x6be13
    if (v9 - (v7 - a1 >> 3) < 2) {
        // 0x6bde2
        v15 = (int64_t *)(a1 + 40);
        v16 = *v15;
        v1 = v16;
        int64_t v20 = (v7 - v16) / 8; // 0x6bdec
        int64_t v21 = v20 + 2; // 0x6bdf0
        v17 = v20 + 1;
        uint64_t v22 = 2 * v21; // 0x6bdf8
        if (v9 > v22) {
            // 0x6be02
            v18 = 8 * (v9 - v21) / 2 + a1;
            int64_t v23 = v7 + 8; // 0x6be0c
            v19 = v23 - v16;
            if (v16 > v18) {
                // 0x6be1b
                v14 = v18;
                v13 = v18;
                if (v23 != v16) {
                    goto lab_0x6be3b;
                } else {
                    goto lab_0x6beaf;
                }
            } else {
                // 0x6be28
                v13 = v18;
                if (v23 == v16) {
                    goto lab_0x6beaf;
                } else {
                    // 0x6be35
                    v14 = 8 * v17 - v19 + v18;
                    goto lab_0x6be3b;
                }
            }
        } else {
            int64_t v24 = v9 != 0 ? v9 : 1; // 0x6be4a
            uint64_t v25 = v9 + 2 + v24; // 0x6be4e
            if (v25 >= 0x2000000000000000) {
                // 0x6be62
                function_5423b0(a1, v16, v22, v24);
            }
            int64_t v26 = 8 * v25; // 0x6be67
            int64_t v27 = function_4efd30(v26); // 0x6be6f
            int64_t v28 = *v15; // 0x6be7a
            v1 = v28;
            int64_t v29 = v27 + 8 * (v25 - v21) / 2; // 0x6be84
            int64_t v30 = *v6 + 8; // 0x6be8c
            int64_t v31 = v26; // 0x6be93
            if (v30 != v28) {
                // 0x6be95
                memmove((int64_t *)v29, (int64_t *)v28, (int32_t)(v30 - v28));
                v31 = v29;
            }
            // 0x6bea0
            function_4eeb50(v31);
            *(int64_t *)a1 = v27;
            *v8 = v25;
            v13 = v29;
            goto lab_0x6beaf;
        }
    } else {
        // 0x6bda9
        v10 = (int64_t *)(a1 + 56);
        v11 = v5;
        v12 = v7;
        goto lab_0x6bedf;
    }
  lab_0x6bedf:
    // 0x6bedf
    *(int64_t *)(v12 + 8) = function_4efd30((int64_t)&g1);
    *(int32_t *)*v3 = v11;
    int64_t v32 = *v6 + 8; // 0x6beff
    int64_t v33 = *(int64_t *)v32; // 0x6bf03
    *v6 = v32;
    *v10 = v33;
    *v3 = v33;
    *v2 = v33 + (int64_t)&g1;
    int64_t result2; // 0x6bd8a
    return result2;
  lab_0x6beaf:;
    int64_t v34 = *(int64_t *)v13; // 0x6beaf
    *v15 = v13;
    *(int64_t *)(a1 + 24) = v34;
    *(int64_t *)(a1 + 32) = v34 + (int64_t)&g1;
    int64_t v35 = 8 * v17 - 8 + v13; // 0x6bec5
    *v6 = v35;
    int64_t v36 = *(int64_t *)v35; // 0x6bece
    int64_t * v37 = (int64_t *)(a1 + 56);
    *v37 = v36;
    *v2 = v36 + (int64_t)&g1;
    v10 = v37;
    v11 = *(int32_t *)&v1;
    v12 = *v6;
    goto lab_0x6bedf;
  lab_0x6be3b:
    // 0x6be3b
    memmove((int64_t *)v14, (int64_t *)v16, (int32_t)v19);
    v13 = v18;
    goto lab_0x6beaf;
}

// Address range: 0x4886f0 - 0x48871a
int64_t function_4886f0(int64_t a1, int64_t a2) {
    // 0x4886f0
    __readfsqword(40);
    return function_375122();
}

// Address range: 0x488745 - 0x488749
int64_t function_488745(void) {
    // 0x488745
    int64_t result; // 0x488745
    return result;
}

// Address range: 0x488749 - 0x48874c
int64_t function_488749(int64_t a1) {
    // 0x488749
    int64_t result; // 0x488749
    return result;
}

// Address range: 0x488770 - 0x488783
int64_t function_488770(int64_t a1, int64_t a2) {
    // 0x488770
    return function_609a8830();
}

// Address range: 0x488791 - 0x488792
int64_t function_488791(void) {
    // 0x488791
    int64_t result; // 0x488791
    return result;
}

// Address range: 0x4887b3 - 0x4887bb
int64_t function_4887b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 - 1; // 0x4887b3
    int64_t result; // 0x4887b3
    if (v1 != 0) {
        result = function_488791();
    }
    char * v2 = (char *)v1; // 0x4887b7
    int64_t v3; // 0x4887b3
    bool v4; // 0x4887b3
    *v2 = (char)v3 + (char)a3 + (char)v4 + *v2;
    return result;
}

// Address range: 0x4887bb - 0x488810
int64_t function_4887bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4887bb
    int64_t v1; // 0x4887bb
    int64_t v2 = v1 & 0xffff00ff | (int64_t)&g13; // 0x4887c8
    unsigned char v3 = (char)v2; // 0x4887ca
    unsigned char v4 = *(char *)v2 + v3; // 0x4887ca
    int64_t result = v2 & -256 | (int64_t)v4; // 0x4887ca
    if (v4 >= v3 && v4 != 0) {
        // 0x48880b
        return result;
    }
    int64_t v5 = result & 0x2c29abf8; // 0x4887ce
    unsigned char v6 = ((char)a4 + 31) % 32; // 0x4887db
    int64_t v7; // 0x4887bb
    float80_t v8; // 0x4887bb
    if (v6 == 0) {
        // .thread1
        *(int32_t *)(v5 + 0x24548bdb) = (int32_t)v8;
        v7 = 7;
    } else {
        char * v9 = (char *)(v5 - 0x7724772e); // 0x4887db
        unsigned char v10 = *v9; // 0x4887db
        unsigned char v11 = 8 - v6;
        *v9 = v10 >> v6 | v10 << v11;
        char * v12 = (char *)(v5 - 0x773f7737); // 0x4887e1
        unsigned char v13 = *v12; // 0x4887e1
        char v14 = v13 >> v6 | v13 << v11; // 0x4887e1
        *v12 = v14;
        *(int32_t *)(v5 + 0x24548bdb) = (int32_t)v8;
        v7 = v14 < 0 ? 8 : 7;
    }
    int64_t v15 = v5 - v7 & 28; // 0x4887ef
    int64_t v16 = v15 | v2 & 0x2c29ab00; // 0x4887ef
    char * v17 = (char *)v16; // 0x4887f2
    *v17 = 2 * (char)v15 + *v17;
    int64_t result2 = v16; // 0x488804
    if (__readfsqword(40) != a5) {
        // 0x488806
        __stack_chk_fail();
        result2 = (int64_t)&g14;
    }
    // 0x48880b
    return result2;
}

// Address range: 0x488829 - 0x48882f
int64_t function_488829(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x488829
    int64_t result; // 0x488829
    char * v1 = (char *)(result + 57); // 0x488829
    *v1 = *v1 + (char)a4;
    return result;
}

// Address range: 0x488834 - 0x488852
int64_t function_488834(void) {
    // 0x488834
    int64_t v1; // 0x488834
    return *(int64_t *)(v1 + 8) > *(int64_t *)v1;
}

// Address range: 0x48aec0 - 0x48af12
int64_t function_48aec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x48aec0
    __readfsqword(40);
    return function_3ac961();
}

// Address range: 0x48af43 - 0x48af45
int64_t function_48af43(void) {
    // 0x48af43
    int64_t result; // 0x48af43
    return result;
}

// Address range: 0x48af61 - 0x48af62
int64_t function_48af61(void) {
    // 0x48af61
    int64_t result; // 0x48af61
    return result;
}

// Address range: 0x48afe0 - 0x48afe4
int64_t function_48afe0(void) {
    // 0x48afe0
    int64_t result; // 0x48afe0
    return result;
}

// Address range: 0x48b010 - 0x48b011
int64_t function_48b010(void) {
    // 0x48b010
    int64_t result; // 0x48b010
    return result;
}

// Address range: 0x48b041 - 0x48b042
int64_t function_48b041(void) {
    // 0x48b041
    int64_t result; // 0x48b041
    return result;
}

// Address range: 0x48b046 - 0x48b052
int64_t function_48b046(int64_t a1) {
    // 0x48b046
    int64_t result; // 0x48b046
    *(char *)-0x3ef76dae7a981d2f = (char)result;
    return result;
}

// Address range: 0x48b052 - 0x48b05e
int64_t function_48b052(int64_t a1) {
    // 0x48b052
    int64_t v1; // 0x48b052
    return v1 & 0xffffffff ^ 0xf2ed7e88;
}

// Address range: 0x4ae080 - 0x4ae218
int64_t function_4ae080(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4ae080
    int32_t v1; // bp-344, 0x4ae080
    function_4adc80((int64_t *)&v1);
    int64_t v2 = a1 + 16; // 0x4ae0a4
    int64_t * v3 = (int64_t *)(a1 + 8); // 0x4ae0b3
    *v3 = v2;
    int64_t v4 = function_4add30((int64_t *)&v1, a2, a3 & 0xffffffff); // 0x4ae0b7
    if ((int32_t)v4 != 0) {
        // 0x4ae0c2
        function_4add10((int64_t *)&v1);
        return v4 & 0xffffffff;
    }
    // 0x4ae0e0
    *(int32_t *)a1 = v1;
    int64_t v5; // 0x4ae080
    int64_t v6; // 0x4ae080
    if ((int32_t)function_4af830(0x2000000) != 0) {
        // 0x4ae203
        function_4afa40(*v3, v6, *(int32_t *)&v5);
        // 0x4ae0c2
        function_4add10((int64_t *)&v1);
        return v4 & 0xffffffff;
    }
    int64_t v7 = a1 + 32; // 0x4ae101
    int64_t v8 = 4 * (int64_t)(4 * v1) + v6; // 0x4ae10b
    *(int32_t *)v2 = *(int32_t *)v8;
    *(int32_t *)(a1 + 20) = *(int32_t *)(v8 + 4);
    *(int32_t *)(a1 + 24) = *(int32_t *)(v8 + 8);
    int64_t v9 = v8 - 16; // 0x4ae127
    *(int32_t *)(a1 + 28) = *(int32_t *)(v8 + 12);
    int32_t v10 = *(int32_t *)&v5; // 0x4ae12e
    int32_t v11 = v10 - 1; // 0x4ae137
    int64_t v12 = v7; // 0x4ae13e
    int64_t v13 = v9; // 0x4ae13e
    int32_t v14 = v11; // 0x4ae13e
    int64_t v15 = v7; // 0x4ae13e
    int64_t v16 = v9; // 0x4ae13e
    if (v11 >= 1) {
        int64_t v17 = 0;
        uint32_t v18 = *(int32_t *)(v17 + v13); // 0x4ae172
        unsigned char v19 = *(char *)((int64_t)(v18 % 256) + (int64_t)&g7); // 0x4ae17e
        unsigned char v20 = *(char *)((int64_t)(v18 / 0x1000000) + (int64_t)&g7); // 0x4ae182
        int32_t v21 = *(int32_t *)(4 * (int64_t)v20 + (int64_t)&g11); // 0x4ae186
        int32_t v22 = *(int32_t *)(4 * (int64_t)v19 + (int64_t)&g8); // 0x4ae18a
        unsigned char v23 = *(char *)((int64_t)(v18 / 256 % 256) + (int64_t)&g7); // 0x4ae191
        int32_t v24 = *(int32_t *)(4 * (int64_t)v23 + (int64_t)&g9); // 0x4ae19b
        unsigned char v25 = *(char *)((int64_t)(v18 / 0x10000 % 256) + (int64_t)&g7); // 0x4ae19f
        int32_t v26 = *(int32_t *)(4 * (int64_t)v25 + (int64_t)&g10); // 0x4ae1a3
        *(int32_t *)(v17 + v12) = v22 ^ v21 ^ v24 ^ v26;
        int64_t v27 = v17 + 4; // 0x4ae1b2
        while (v17 != 12) {
            // 0x4ae172
            v17 = v27;
            v18 = *(int32_t *)(v17 + v13);
            v19 = *(char *)((int64_t)(v18 % 256) + (int64_t)&g7);
            v20 = *(char *)((int64_t)(v18 / 0x1000000) + (int64_t)&g7);
            v21 = *(int32_t *)(4 * (int64_t)v20 + (int64_t)&g11);
            v22 = *(int32_t *)(4 * (int64_t)v19 + (int64_t)&g8);
            v23 = *(char *)((int64_t)(v18 / 256 % 256) + (int64_t)&g7);
            v24 = *(int32_t *)(4 * (int64_t)v23 + (int64_t)&g9);
            v25 = *(char *)((int64_t)(v18 / 0x10000 % 256) + (int64_t)&g7);
            v26 = *(int32_t *)(4 * (int64_t)v25 + (int64_t)&g10);
            *(int32_t *)(v17 + v12) = v22 ^ v21 ^ v24 ^ v26;
            v27 = v17 + 4;
        }
        // 0x4ae1b4
        v14--;
        v12 += 16;
        v13 -= 16;
        while (v14 != 0) {
            // 0x4ae170
            v17 = 0;
            v18 = *(int32_t *)(v17 + v13);
            v19 = *(char *)((int64_t)(v18 % 256) + (int64_t)&g7);
            v20 = *(char *)((int64_t)(v18 / 0x1000000) + (int64_t)&g7);
            v21 = *(int32_t *)(4 * (int64_t)v20 + (int64_t)&g11);
            v22 = *(int32_t *)(4 * (int64_t)v19 + (int64_t)&g8);
            v23 = *(char *)((int64_t)(v18 / 256 % 256) + (int64_t)&g7);
            v24 = *(int32_t *)(4 * (int64_t)v23 + (int64_t)&g9);
            v25 = *(char *)((int64_t)(v18 / 0x10000 % 256) + (int64_t)&g7);
            v26 = *(int32_t *)(4 * (int64_t)v25 + (int64_t)&g10);
            *(int32_t *)(v17 + v12) = v22 ^ v21 ^ v24 ^ v26;
            v27 = v17 + 4;
            while (v17 != 12) {
                // 0x4ae172
                v17 = v27;
                v18 = *(int32_t *)(v17 + v13);
                v19 = *(char *)((int64_t)(v18 % 256) + (int64_t)&g7);
                v20 = *(char *)((int64_t)(v18 / 0x1000000) + (int64_t)&g7);
                v21 = *(int32_t *)(4 * (int64_t)v20 + (int64_t)&g11);
                v22 = *(int32_t *)(4 * (int64_t)v19 + (int64_t)&g8);
                v23 = *(char *)((int64_t)(v18 / 256 % 256) + (int64_t)&g7);
                v24 = *(int32_t *)(4 * (int64_t)v23 + (int64_t)&g9);
                v25 = *(char *)((int64_t)(v18 / 0x10000 % 256) + (int64_t)&g7);
                v26 = *(int32_t *)(4 * (int64_t)v25 + (int64_t)&g10);
                *(int32_t *)(v17 + v12) = v22 ^ v21 ^ v24 ^ v26;
                v27 = v17 + 4;
            }
            // 0x4ae1b4
            v14--;
            v12 += 16;
            v13 -= 16;
        }
        int64_t v28 = 16 * (int64_t)(v10 - 2); // 0x4ae1cd
        v15 = a1 + 48 + v28;
        v16 = v8 - 32 - v28;
    }
    // 0x4ae1e0
    *(int32_t *)v15 = *(int32_t *)v16;
    *(int32_t *)(v15 + 4) = *(int32_t *)(v16 + 4);
    *(int32_t *)(v15 + 8) = *(int32_t *)(v16 + 8);
    *(int32_t *)(v15 + 12) = *(int32_t *)(v16 + 12);
    // 0x4ae0c2
    function_4add10((int64_t *)&v1);
    return v4 & 0xffffffff;
}

// Address range: 0x4b13e0 - 0x4b1581
int64_t function_4b13e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t result2) {
    int64_t * v1 = (int64_t *)(a4 + 8); // 0x4b13f1
    int64_t result = *v1 + 1; // 0x4b13fa
    if (result > a6) {
        // 0x4b1581
        return result;
    }
    int64_t * v2 = (int64_t *)result2; // 0x4b140f
    int64_t v3 = *v2; // 0x4b140f
    if (v3 == 0) {
        // 0x4b1581
        return result2;
    }
    int64_t v4 = 8 * a6; // 0x4b141e
    memset((int64_t *)v3, 0, (int32_t)v4);
    int64_t v5 = *v1; // 0x4b1435
    int64_t v6 = *v2; // 0x4b143d
    int64_t * v7; // 0x4b13e0
    int64_t v8; // 0x4b13e0
    int32_t v9; // 0x4b13e0
    if (v5 == 0) {
        // 0x4b141b
        v7 = (int64_t *)(a1 + 16);
        v8 = v6;
        v9 = 8;
    } else {
        int32_t v10 = 8 * (int32_t)v5 + 8; // 0x4b1470
        int64_t * v11 = (int64_t *)(a1 + 16);
        int64_t v12 = 0; // 0x4b1481
        int64_t v13 = v6;
        int64_t v14 = *(int64_t *)(*v11 + 8 * v12); // 0x4b1497
        v12++;
        int64_t * v15 = (int64_t *)v13; // 0x4b14a9
        function_4b04e0(0, v4, v13, v14);
        function_4b04e0(v5, *(int64_t *)(a4 + 16), v13, (v14 * v13 + *v15) * a5);
        *v15 = v14;
        int64_t v16 = v13 + 8; // 0x4b14d8
        *(int64_t *)(v16 + (int64_t)v10) = 0;
        int64_t v17 = v13; // 0x4b14ef
        while (v12 != v5) {
            // 0x4b1488
            v13 = v16;
            v14 = *(int64_t *)(*v11 + 8 * v12);
            v12++;
            v15 = (int64_t *)v13;
            function_4b04e0(0, v17, v13, v14);
            function_4b04e0(v5, *(int64_t *)(a4 + 16), v13, (v14 * v13 + *v15) * a5);
            *v15 = v14;
            v16 = v13 + 8;
            *(int64_t *)(v16 + (int64_t)v10) = 0;
            v17 = v13;
        }
        // 0x4b14f1
        v7 = v11;
        v8 = v6 + 8 * v5;
        v9 = v10;
    }
    int64_t v18 = *v7; // 0x4b1507
    memcpy((int64_t *)v18, (int64_t *)v8, v9);
    int64_t v19 = function_4b1300(a1, a4); // 0x4b1521
    int64_t v20 = *v7;
    if ((int32_t)v19 < 0) {
        // 0x4b1550
        function_4b0460(v5, v20, *v2);
        return 0;
    }
    // 0x4b152a
    function_4b0460(v5, *(int64_t *)(a4 + 16), v20);
    return 0;
}

// Address range: 0x4cd900 - 0x4cda95
// Used cryptographic patterns:
//  - padding_used_in_hashing_algorithms__0x80_0_____0_ (8-bit)
int64_t function_4cd900(int64_t a1, int64_t a2) {
    // 0x4cd900
    int64_t v1; // 0x4cd900
    uint64_t v2 = v1;
    uint32_t v3 = (int32_t)v2 % 64; // 0x4cd922
    int64_t v4 = 0x100000000000000 * (int64_t)(*(int32_t *)(a1 + 4) / 0x200000) >> 56; // bp-40, 0x4cd932
    if (v3 >= 56) {
        // 0x4cda90
        return v2 / 32 % 0x1000000;
    }
    // 0x4cd96e
    function_4cd7d0(a1, "\x80\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 56 - v3, v3);
    function_4cd7d0(a1, (char *)&v4, 8, v3);
    *(char *)a2 = *(char *)(a1 + 11);
    *(char *)(a2 + 1) = (char)*(int16_t *)(a1 + 10);
    int32_t * v5 = (int32_t *)(a1 + 8); // 0x4cd9a2
    *(char *)(a2 + 2) = (char)(*v5 / 256);
    *(char *)(a2 + 3) = (char)*v5;
    *(char *)(a2 + 4) = *(char *)(a1 + 15);
    *(char *)(a2 + 5) = (char)*(int16_t *)(a1 + 14);
    int32_t * v6 = (int32_t *)(a1 + 12); // 0x4cd9bf
    *(char *)(a2 + 6) = (char)(*v6 / 256);
    *(char *)(a2 + 7) = (char)*v6;
    *(char *)(a2 + 8) = *(char *)(a1 + 19);
    *(char *)(a2 + 9) = (char)*(int16_t *)(a1 + 18);
    int32_t * v7 = (int32_t *)(a1 + 16); // 0x4cd9dc
    *(char *)(a2 + 10) = (char)(*v7 / 256);
    *(char *)(a2 + 11) = (char)*v7;
    *(char *)(a2 + 12) = *(char *)(a1 + 23);
    *(char *)(a2 + 13) = (char)*(int16_t *)(a1 + 22);
    int32_t * v8 = (int32_t *)(a1 + 20); // 0x4cd9f9
    *(char *)(a2 + 14) = (char)(*v8 / 256);
    *(char *)(a2 + 15) = (char)*v8;
    *(char *)(a2 + 16) = *(char *)(a1 + 27);
    *(char *)(a2 + 17) = (char)*(int16_t *)(a1 + 26);
    int32_t * v9 = (int32_t *)(a1 + 24); // 0x4cda16
    *(char *)(a2 + 18) = (char)(*v9 / 256);
    *(char *)(a2 + 19) = (char)*v9;
    *(char *)(a2 + 20) = *(char *)(a1 + 31);
    *(char *)(a2 + 21) = (char)*(int16_t *)(a1 + 30);
    int32_t * v10 = (int32_t *)(a1 + 28); // 0x4cda33
    *(char *)(a2 + 22) = (char)(*v10 / 256);
    *(char *)(a2 + 23) = (char)*v10;
    *(char *)(a2 + 24) = *(char *)(a1 + 35);
    *(char *)(a2 + 25) = (char)*(int16_t *)(a1 + 34);
    int32_t * v11 = (int32_t *)(a1 + 32); // 0x4cda50
    *(char *)(a2 + 26) = (char)(*v11 / 256);
    *(char *)(a2 + 27) = (char)*v11;
    int32_t v12 = *(int32_t *)(a1 + 104); // 0x4cda5f
    int32_t result = v12; // 0x4cda64
    if (v12 == 0) {
        // 0x4cda66
        *(char *)(a2 + 28) = *(char *)(a1 + 39);
        *(char *)(a2 + 29) = (char)*(int16_t *)(a1 + 38);
        int32_t * v13 = (int32_t *)(a1 + 36); // 0x4cda74
        *(char *)(a2 + 30) = (char)(*v13 / 256);
        result = *v13;
        *(char *)(a2 + 31) = (char)result;
    }
    // 0x4cda83
    return result;
}

// Address range: 0x4f3230 - 0x4f3267
int64_t function_4f3230(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4f3230
    __readfsqword(40);
    if ((char)a3 < 5) {
        // 0x4f324e
        return a3 & 0xffffffff;
    }
    // 0x4f33f8
    int64_t result; // 0x4f3230
    return result;
}

// Address range: 0x4f3270 - 0x4f33d3
int64_t function_4f3270(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x4f3270
    int64_t v1; // 0x4f3270
    uint64_t result = v1;
    if ((char)a1 == 0) {
        // 0x4f33d0
        return result;
    }
    int64_t v2 = (char)a2 != 0 ? 0x4000000 : 0x1000000 * a5 & 0xff000000; // 0x4f3332
    __readfsqword(40);
    return v2 | ((char)a2 == 0 ? 0x40200 : 0x10200) | result % 256;
}

// Address range: 0x527483 - 0x5274ab
int64_t function_527483(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char * v1 = (char *)(2 * a4 + 57); // 0x527483
    char v2 = *v1 + (char)(a3 / 256); // 0x527483
    *v1 = v2;
    if (v2 != 0) {
        function_527125();
    }
    // 0x52748f
    int64_t v3; // 0x527483
    function_52cc60(v3, v3);
    return function_527135(v3);
}

// Address range: 0x5274b0 - 0x527624
int64_t function_5274b0(int64_t a1, int64_t str) {
    uint64_t result = *(int64_t *)(a1 + 16); // 0x5274b0
    if (result >= *(int64_t *)(a1 + 24)) {
        // 0x5275fc
        return result;
    }
    unsigned char c = *(char *)result; // 0x5274be
    int64_t result2 = c; // 0x5274d0
    int64_t v1; // 0x5274b0
    if (v1 != 0) {
        result2 = function_527105();
    }
    // 0x5274d6
    if (v1 == 0) {
        // 0x5275fc
        return result2;
    }
    int64_t * found_byte_pos = memchr((int64_t *)str, (int32_t)c, 10); // 0x527511
    int64_t result3 = (int64_t)found_byte_pos; // 0x527511
    if (found_byte_pos == NULL) {
        // 0x5275c0
        char v2; // 0x5274b0
        if ((v2 | (char)(*(char *)(v1 + 33) != c)) == 0) {
            // 0x5275fc
            return result3;
        }
        unsigned char v3 = *(char *)(v1 + 32); // 0x5275d3
        int64_t v4 = v3; // 0x5275d9
        if (v3 == 0) {
            v4 = function_527116();
        }
        int64_t result4 = v4; // 0x5275e3
        if (v2 == 0 == *(char *)(v1 + 34) == c) {
            // 0x5275f4
            result4 = (int32_t)v1 == 0 ? v4 : v1;
        }
        // 0x5275fc
        return result4;
    }
    // 0x52751f
    if (v1 + 1 > (v1 == v1 + 16 ? 15 : v1)) {
        // 0x5275fc
        return result2;
    }
    int64_t v5 = 2 * v1;
    *(char *)v5 = *(char *)(result3 - v1 + *(int64_t *)&g6);
    *(char *)(v5 + 1) = 0;
    int64_t * v6 = (int64_t *)(v1 + 16); // 0x52759a
    uint64_t result5 = *v6; // 0x52759a
    if (result5 >= *(int64_t *)(v1 + 24)) {
        // 0x5275fc
        return result5;
    }
    // 0x5275a8
    *v6 = result5 + 1;
    return function_5270e0(v1);
}

// Address range: 0x535930 - 0x535ad5
// From class:    std::__cxx11::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_535930(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x535930
    __readfsqword(40);
    function_50ab00();
    int32_t v1 = 0; // bp-68, 0x535979
    int32_t v2; // bp-72, 0x535930
    int64_t result = function_535610(a1, a2, a3, a4, a5, (int64_t *)&v2, 0, &g2, 4, a6, &v1); // 0x5359b1
    if (v1 != 0) {
        int32_t * v3 = (int32_t *)a7; // 0x535a58
        *v3 = *v3 | 4;
        if (result != 0) {
            goto lab_0x535a01;
        } else {
            goto lab_0x535a61;
        }
    } else {
        int32_t v4 = v2; // 0x5359e4
        *(int32_t *)(a8 + 20) = (v4 < 0 ? 100 : -1900) + v4;
        if (result == 0) {
            goto lab_0x535a61;
        } else {
            goto lab_0x535a01;
        }
    }
  lab_0x535a01:
    if ((int32_t)a3 == -1) {
        uint64_t v5 = *(int64_t *)(result + 16); // 0x535aa8
        if (v5 >= *(int64_t *)(result + 24)) {
            // 0x535ac8
            return result;
        }
        // 0x535ab2
        if (*(int32_t *)v5 == -1) {
            goto lab_0x535a61;
        } else {
            goto lab_0x535a0a;
        }
    } else {
        goto lab_0x535a0a;
    }
  lab_0x535a61:;
    int64_t result2 = 0; // 0x535a66
    int64_t result4; // 0x535930
    char v6; // 0x535930
    if (a4 == 0) {
        goto lab_0x535a15;
    } else {
        // 0x535a68
        result4 = 0;
        v6 = 1;
        if ((int32_t)a5 != -1) {
            // 0x535a19
            __readfsqword(40);
            return 0;
        }
        goto lab_0x535a83;
    }
  lab_0x535a0a:
    // 0x535a0a
    if (a4 == 0) {
        // 0x535a19
        __readfsqword(40);
        return result;
    }
    // 0x535a0f
    result2 = result;
    result4 = result;
    v6 = 0;
    if ((int32_t)a5 == -1) {
        goto lab_0x535a83;
    } else {
        goto lab_0x535a15;
    }
  lab_0x535a15:;
    int32_t * v7 = (int32_t *)a7; // 0x535a15
    *v7 = *v7 | 2;
    // 0x535a19
    __readfsqword(40);
    return result2;
  lab_0x535a83:;
    uint64_t result3 = *(int64_t *)(a4 + 16); // 0x535a83
    if (result3 >= *(int64_t *)(a4 + 24)) {
        // 0x535ac8
        return result3;
    }
    // 0x535a8d
    result2 = result4;
    if (v6 != (char)(*(int32_t *)result3 == -1)) {
        // 0x535a19
        __readfsqword(40);
        return result4;
    }
    goto lab_0x535a15;
}

// Address range: 0x542770 - 0x5428f0
int64_t function_542770(int64_t a1) {
    int64_t v1 = function_20210(16); // 0x54277e
    function_56e880(v1, (int64_t)gettext((char *)a1));
    int64_t v2 = function_203b0(v1, 0x847700, 0x566cb0); // 0x5427aa
    function_1fcc0(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v2);
    int64_t v3 = function_20210(16); // 0x5427de
    function_56e8f0(v3, (int64_t)gettext((char *)v2));
    int64_t v4 = function_203b0(v3, 0x847718, 0x566d60); // 0x54280a
    function_1fcc0(v3);
    _Unwind_Resume((struct _Unwind_Exception *)v4);
    int64_t v5 = function_20210(16); // 0x54283e
    function_56e910(v5, (int64_t)gettext((char *)v4));
    int64_t v6 = function_203b0(v5, 0x847730, 0x566da0); // 0x54286a
    function_1fcc0(v5);
    _Unwind_Resume((struct _Unwind_Exception *)v6);
    int64_t v7 = function_20210(16); // 0x54289e
    function_56e930(v7, (int64_t)gettext((char *)v6));
    int64_t v8 = function_203b0(v7, 0x847748, 0x566de0); // 0x5428ca
    function_1fcc0(v7);
    _Unwind_Resume((struct _Unwind_Exception *)v8);
    return (int64_t)&g14;
}

// Address range: 0x5428f0 - 0x542916
// From class:    std::ostream
// Type:          constructor
int64_t function_5428f0(int64_t a1) {
    int64_t v1 = a1 + 8; // 0x5428f7
    *(int64_t *)a1 = (int64_t)&g5;
    *(int64_t *)v1 = (int64_t)&g4;
    return function_54cf10(v1);
}

// Address range: 0x54d0a0 - 0x54d246
int64_t function_54d0a0(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + 64; // 0x54d0a3
    int64_t * v2 = (int64_t *)(a2 + 8); // 0x54d0ac
    int64_t * v3 = (int64_t *)(a1 + 200); // 0x54d0b0
    int64_t v4 = *v3; // 0x54d0b0
    int64_t v5 = __readfsqword(40); // 0x54d0b7
    int64_t * v6 = (int64_t *)(a1 + 8); // 0x54d0c7
    *v6 = *v2;
    int64_t * v7 = (int64_t *)(a2 + 16); // 0x54d0cf
    *v2 = *v6;
    int64_t * v8 = (int64_t *)(a1 + 16); // 0x54d0d7
    *v8 = *v7;
    int32_t * v9 = (int32_t *)(a2 + 24); // 0x54d0df
    *v7 = *v8;
    int32_t * v10 = (int32_t *)(a1 + 24); // 0x54d0e6
    *v10 = *v9;
    int32_t * v11 = (int32_t *)(a2 + 28); // 0x54d0ec
    *v9 = *v10;
    int32_t * v12 = (int32_t *)(a1 + 28); // 0x54d0f2
    *v12 = *v11;
    int32_t * v13 = (int32_t *)(a2 + 32); // 0x54d0f8
    *v11 = *v12;
    int32_t * v14 = (int32_t *)(a1 + 32); // 0x54d0fe
    *v14 = *v13;
    int64_t * v15 = (int64_t *)(a2 + 40); // 0x54d104
    *v13 = *v14;
    int64_t * v16 = (int64_t *)(a1 + 40); // 0x54d10b
    *v16 = *v15;
    int64_t v17 = a1 + 64; // 0x54d113
    *v15 = *v16;
    int64_t * v18 = (int64_t *)(a2 + 200); // 0x54d11e
    int64_t result = *v18; // 0x54d11e
    int64_t v19 = 0; // 0x54d125
    if (v4 == v17 == result == v1) {
        int64_t v20 = v19 + v4; // 0x54d140
        int64_t v21 = v19 + 72;
        int64_t v22 = v19 + v1; // 0x54d149
        __asm_movups(*(int128_t *)v20, __asm_movdqu(*(int128_t *)v22));
        *(int64_t *)v22 = *(int64_t *)v20;
        *(int64_t *)(v21 + a2) = *(int64_t *)(v21 + a1);
        while (v19 != 112) {
            // 0x54d140
            v19 += 16;
            v20 = v19 + v4;
            v21 = v19 + 72;
            v22 = v19 + v1;
            __asm_movups(*(int128_t *)v20, __asm_movdqu(*(int128_t *)v22));
            *(int64_t *)v22 = *(int64_t *)v20;
            *(int64_t *)(v21 + a2) = *(int64_t *)(v21 + a1);
        }
    } else {
        if (v4 == v17 || result == v1) {
            // 0x54d1f8
            if (v4 == v17) {
                // 0x54d240
                return result;
            }
            int64_t v23 = 64;
            int128_t v24 = __asm_movdqu(*(int128_t *)(v23 + a2)); // 0x54d210
            __asm_movups(*(int128_t *)(v23 + a1), v24);
            int64_t v25 = v23 + 16; // 0x54d225
            while (v23 != 176) {
                // 0x54d210
                v23 = v25;
                v24 = __asm_movdqu(*(int128_t *)(v23 + a2));
                __asm_movups(*(int128_t *)(v23 + a1), v24);
                v25 = v23 + 16;
            }
            // 0x54d227
            *v18 = v4;
            *v3 = v17;
        } else {
            // 0x54d1ca
            *v3 = result;
            *v18 = v4;
        }
        int32_t * v26 = (int32_t *)(a1 + 192); // 0x54d1d8
        int32_t * v27 = (int32_t *)(a2 + 192); // 0x54d1de
        *v26 = *v27;
        *v27 = *v26;
    }
    int64_t v28 = a1 + 208; // 0x54d169
    int64_t v29 = a2 + 208; // 0x54d170
    int64_t v30; // bp-40, 0x54d0a0
    function_5659d0(&v30, v28);
    function_566100(v28, v29);
    function_566100(v29, (int64_t)&v30);
    function_566180(&v30);
    return __readfsqword(40) ^ v5;
}

// Address range: 0x568b50 - 0x568b63
// From class:    std::__cxx11::messages_byname<char>
// Type:          virtual member function
int64_t function_568b50(int64_t a1, int64_t a2) {
    // 0x568b50
    return function_567a80(function_567d40(), a2 & 0xffffffff);
}

// Address range: 0x568b70 - 0x568c3e
// From class:    std::__cxx11::messages_byname<char>
// Type:          virtual member function
int64_t function_568b70(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = result + 16; // 0x568b7a
    int32_t v2 = a3; // 0x568b85
    int64_t * v3 = (int64_t *)(a6 + 8);
    if (v2 < 0 || *v3 == 0) {
        // 0x568b90
        *(int64_t *)result = v1;
        function_5689d0(result, a6, *v3 + a6);
        // 0x568ba5
        return result;
    }
    int64_t v4 = function_567c30(function_567d40(), a3 & 0xffffffff, v2); // 0x568bda
    if (v4 == 0) {
        // 0x568b90
        *(int64_t *)result = v1;
        function_5689d0(result, a6, *v3 + a6);
        // 0x568ba5
        return result;
    }
    struct __locale_struct * v5 = __uselocale((struct __locale_struct *)*(int64_t *)(a2 + 16)); // 0x568bf5
    char * str = dgettext((char *)*(int64_t *)(v4 + 8), (char *)a6); // 0x568c03
    int64_t v6 = (int64_t)str; // 0x568c03
    __uselocale(v5);
    *(int64_t *)result = v1;
    int64_t v7 = -1; // 0x568c20
    if (str != NULL) {
        // 0x568c22
        v7 = (int64_t)strlen(str) + v6;
    }
    // 0x568c2e
    function_5689d0(result, v6, v7);
    // 0x568ba5
    return result;
}

// Address range: 0x568c40 - 0x568cf0
// From class:    std::__cxx11::messages_byname<wchar_t>
// Type:          virtual member function
int64_t function_568c40(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x568c53
    int64_t v2 = *(int64_t *)(function_50b1c0() + 16); // 0x568c68
    bind_textdomain_codeset((char *)v2, __nl_langinfo_l(14, (struct __locale_struct *)v2));
    int64_t v3 = function_567d40(); // 0x568c85
    int64_t v4; // bp-56, 0x568c40
    function_5659d0(&v4, a3);
    int64_t v5 = function_567f20(v3, a3, &v4); // 0x568ca2
    function_566180(&v4);
    if (v1 == __readfsqword(40)) {
        // 0x568cc3
        return v5 & 0xffffffff;
    }
    // 0x568cce
    __stack_chk_fail();
    function_566180(&v4);
    _Unwind_Resume((struct _Unwind_Exception *)&g14);
    return (int64_t)&g14;
}

// Address range: 0x568cf0 - 0x568d00
// From class:    std::__cxx11::messages_byname<wchar_t>
// Type:          virtual member function
int64_t function_568cf0(int64_t a1) {
    // 0x568cf0
    int64_t result; // 0x568cf0
    return result;
}
