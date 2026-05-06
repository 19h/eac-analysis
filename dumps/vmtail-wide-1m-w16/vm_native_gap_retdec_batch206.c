/*
 * Targeted RetDec C for native executable gap queue batch 206.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x6b7fa-0x6b800 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f420-0x3f89f rank=- name=- kind=- bytes=- uncovered=-
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
int64_t function_3ef8e();
int64_t function_3f420(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7, int64_t a8);
int64_t function_6b7fa(void);

// Address range: 0x3f420 - 0x3f89f
int64_t function_3f420(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7, int64_t a8) {
    // 0x3f420
    int64_t v1; // 0x3f420
    char * v2 = (char *)(v1 - 0x7a7efc); // 0x3f421
    char v3 = *v2 + (char)a4; // 0x3f421
    *v2 = v3;
    int32_t v4 = v1; // 0x3f42a
    int32_t v5 = v4; // 0x3f430
    int64_t v6; // 0x3f420
    int64_t v7; // 0x3f420
    int64_t v8; // 0x3f420
    char v9; // 0x3f420
    if (v3 != 0) {
        uint32_t v10 = (int32_t)a1; // 0x3f432
        int64_t v11; // 0x3f420
        int64_t v12; // 0x3f420
        int64_t v13; // 0x3f420
        if ((int32_t)v1 < v10) {
            while (true) {
                // 0x3f437
                int64_t v14; // 0x3f420
                int64_t v15 = v14;
                int64_t v16; // 0x3f420
                int64_t v17; // 0x3f420
                if (v15 < a6) {
                    // 0x3f472
                    v17 = (int64_t)*(char *)v15;
                    v16 = v15 + 1;
                } else {
                    // 0x3f44b
                    v17 = 0;
                    v16 = v15;
                    if ((v9 & 2) != 0) {
                        // break -> 0x3f455
                        break;
                    }
                }
                // 0x3f47d
                int64_t v18; // 0x3f420
                int64_t v19 = v18 + 8; // 0x3f480
                int64_t v20 = v19 & 0xffffffff; // 0x3f480
                int64_t v21; // 0x3f420
                int64_t v22 = v17 << v18 % 64 | v21; // 0x3f487
                v21 = v22;
                v18 = v20;
                v14 = v16;
                v11 = v16;
                v12 = v20;
                v13 = v22;
                if ((int32_t)v19 >= v10) {
                    goto lab_0x3f48f;
                }
            }
            // 0x3f455
            *(int32_t *)v1 = 27;
            return function_3e4a6();
        }
      lab_0x3f48f:;
        uint32_t v23 = v10 % 32; // 0x3f49a
        int32_t v24 = v23 == 0 ? 0 : -1 - (-1 << v23);
        v5 = (v24 & (int32_t)v13) + v4;
        v6 = v11;
        v7 = v12 - a1 & 0xffffffff;
        v8 = v13 >> a1 % 64;
    }
    int64_t v25 = a3 - v1; // 0x3f4ae
    uint64_t v26 = (int64_t)v5; // 0x3f4b8
    int64_t v27; // 0x3f420
    int64_t v28; // 0x3f420
    int64_t v29; // 0x3f420
    int64_t v30; // 0x3f420
    int32_t v31; // 0x3f420
    if (v31 == 0 || v25 >= v26) {
        int64_t v32 = (v25 - v26 & v1) + v1; // 0x3f4f5
        if (v1 >= (v32 >= a3 ? v32 : a3) + (v1 & 0xffffffff)) {
            int64_t v33 = v1 + 0xfffffffd; // 0x3f566
            *(char *)a3 = *(char *)v32;
            *(char *)(a3 + 1) = *(char *)(v32 + 1);
            *(char *)(a3 + 2) = *(char *)(v32 + 2);
            int32_t v34 = v33; // 0x3f58b
            int64_t v35 = v32; // 0x3f58b
            int64_t v36 = a3; // 0x3f58b
            int32_t v37 = v34; // 0x3f58b
            if (v34 >= 3) {
                int64_t v38 = v32 + 3; // 0x3f587
                int64_t v39 = a3 + 3; // 0x3f56c
                int64_t v40 = (v33 & 0xffffffff) + 0xfffffffd; // 0x3f566
                *(char *)v39 = *(char *)v38;
                *(char *)(a3 + 4) = *(char *)(v32 + 4);
                *(char *)(a3 + 5) = *(char *)(v32 + 5);
                int32_t v41 = v40;
                int64_t v42 = v40; // 0x3f58b
                int64_t v43 = v39; // 0x3f58b
                int64_t v44 = v38; // 0x3f58b
                v35 = v38;
                v36 = v39;
                v37 = v41;
                while (v41 >= 3) {
                    // 0x3f58d
                    v38 = v44 + 3;
                    v39 = v43 + 3;
                    v40 = (v42 & 0xffffffff) + 0xfffffffd;
                    *(char *)v39 = *(char *)v38;
                    *(char *)(v43 + 4) = *(char *)(v44 + 4);
                    *(char *)(v43 + 5) = *(char *)(v44 + 5);
                    v41 = v40;
                    v42 = v40;
                    v43 = v39;
                    v44 = v38;
                    v35 = v38;
                    v36 = v39;
                    v37 = v41;
                }
            }
            int64_t v45 = v35; // 0x3f594
            if (v37 < 1) {
                v45 = function_3ef8e();
            }
            // 0x3f59a
            *(char *)(v36 + 3) = *(char *)(v45 + 3);
            if (v37 != 2) {
                // 0x3f5ad
                return function_3ef8e();
            }
            // 0x3f5a7
            *(char *)(v36 + 4) = *(char *)(v45 + 4);
            // 0x3f5ad
            return function_3ef8e();
        }
        int64_t v46 = a3;
        int64_t v47 = v25;
        int64_t v48; // 0x3f420
        if ((int32_t)v48 == 0) {
            function_3ef8e();
        }
        int64_t v49 = v48 + 0xffffffff & 0xffffffff; // 0x3f50d
        while (v1 > v46) {
            // 0x3f52f
            *(char *)v46 = *(char *)((v47 - v26 & v1) + v1);
            v46++;
            v47++;
            if ((int32_t)v49 == 0) {
                function_3ef8e();
            }
            // 0x3f517
            v49 = v49 + 0xffffffff & 0xffffffff;
        }
        // 0x3f51e
        *(int32_t *)v1 = 53;
        v30 = v47;
        v28 = 2;
        v29 = v46;
        v27 = v49;
    } else {
        // 0x3f4d4
        *(int32_t *)v1 = 37;
        v30 = v25;
        v28 = 0xffffffff;
        v29 = a3;
    }
    // 0x3f72a
    *(int32_t *)(v1 + 40) = (int32_t)a1;
    int64_t v50 = v29 - a7; // 0x3f73b
    *(int32_t *)(v1 + 4) = (int32_t)v7;
    *(int32_t *)(v1 + 32) = v5;
    *(int64_t *)(v1 + 56) = v8;
    *(int32_t *)(v1 + 36) = (int32_t)v27;
    *(int64_t *)(v1 + 64) = v30;
    *(int64_t *)v1 = v6 - v1;
    *(int64_t *)v1 = v50;
    if ((v9 & 9) != 0 && v28 != 0xffffffff) {
        int32_t * v51 = (int32_t *)(v1 + 28); // 0x3f78d
        uint32_t v52 = *v51; // 0x3f78d
        int64_t v53 = v52 % 0x10000; // 0x3f79c
        int64_t v54 = v52 / 0x10000; // 0x3f79f
        int64_t v55 = v53; // 0x3f7a8
        int64_t v56 = v54; // 0x3f7a8
        if (v50 != 0) {
            int64_t v57 = v50; // 0x3f82e
            uint64_t v58 = v50 % (int64_t)&g1;
            int64_t v59 = v53; // 0x3f7c3
            int64_t v60 = v54; // 0x3f7c3
            int64_t v61 = a7; // 0x3f7c3
            int64_t v62; // 0x3f420
            int64_t v63; // 0x3f420
            int64_t v64; // 0x3f7c9
            int64_t v65; // 0x3f7cd
            int64_t v66; // 0x3f7d4
            int64_t v67; // 0x3f7df
            int64_t v68; // 0x3f7e8
            int64_t v69; // 0x3f7f1
            int64_t v70; // 0x3f7fa
            int64_t v71; // 0x3f803
            int64_t v72; // 0x3f80c
            int64_t v73; // 0x3f80c
            int64_t v74; // 0x3f80e
            if (v58 > 7) {
                v64 = a7 + 8;
                v65 = v53 + (int64_t)*(char *)a7;
                v66 = v65 + (int64_t)*(char *)(a7 + 1);
                v67 = v66 + (int64_t)*(char *)(a7 + 2);
                v68 = v67 + (int64_t)*(char *)(a7 + 3);
                v69 = v68 + (int64_t)*(char *)(a7 + 4);
                v70 = v69 + (int64_t)*(char *)(a7 + 5);
                v71 = v70 + (int64_t)*(char *)(a7 + 6);
                v72 = v71 + (int64_t)*(char *)(a7 + 7);
                v73 = v72 & 0xffffffff;
                v74 = v65 + v54 + v66 + v67 + v68 + v69 + v70 + v71 + v72 & 0xffffffff;
                v59 = v73;
                v60 = v74;
                v61 = v64;
                v62 = v64;
                v63 = v74;
                while ((7 - a7 + v64 & 0xffffffff) < v58) {
                    // 0x3f7c5
                    v64 = v62 + 8;
                    v65 = v73 + (int64_t)*(char *)v62;
                    v66 = v65 + (int64_t)*(char *)(v62 + 1);
                    v67 = v66 + (int64_t)*(char *)(v62 + 2);
                    v68 = v67 + (int64_t)*(char *)(v62 + 3);
                    v69 = v68 + (int64_t)*(char *)(v62 + 4);
                    v70 = v69 + (int64_t)*(char *)(v62 + 5);
                    v71 = v70 + (int64_t)*(char *)(v62 + 6);
                    v72 = v71 + (int64_t)*(char *)(v62 + 7);
                    v73 = v72 & 0xffffffff;
                    v74 = v65 + v63 + v66 + v67 + v68 + v69 + v70 + v71 + v72 & 0xffffffff;
                    v59 = v73;
                    v60 = v74;
                    v61 = v64;
                    v62 = v64;
                    v63 = v74;
                }
            }
            int64_t v75 = v61; // 0x3f81a
            int64_t v76 = v60; // 0x3f81a
            int64_t v77 = v59; // 0x3f81a
            int64_t v78 = v59; // 0x3f81a
            int64_t v79 = v60; // 0x3f81a
            int64_t v80 = v61; // 0x3f81a
            int64_t v81; // 0x3f81c
            int64_t v82; // 0x3f824
            int64_t v83; // 0x3f824
            int64_t v84; // 0x3f826
            if ((v61 - a7 & 0xffffffff) < v58) {
                v81 = v75 + 1;
                v82 = v77 + (int64_t)*(char *)v75;
                v83 = v82 & 0xffffffff;
                v84 = v82 + v76 & 0xffffffff;
                v75 = v81;
                v76 = v84;
                v78 = v83;
                v79 = v84;
                v80 = v81;
                while ((v81 - a7 & 0xffffffff) < v58) {
                    // 0x3f81c
                    v81 = v75 + 1;
                    v82 = v83 + (int64_t)*(char *)v75;
                    v83 = v82 & 0xffffffff;
                    v84 = v82 + v76 & 0xffffffff;
                    v75 = v81;
                    v76 = v84;
                    v78 = v83;
                    v79 = v84;
                    v80 = v81;
                }
            }
            // 0x3f82a
            v57 -= v58;
            int64_t v85 = (v78 & 0xffffffff) % ((int64_t)&g2 & 0xffffffff); // 0x3f831
            int64_t v86 = (v79 & 0xffffffff) % ((int64_t)&g2 & 0xffffffff); // 0x3f845
            v55 = v85;
            v56 = v86;
            while (v57 != 0) {
                // 0x3f7ae
                v58 = (int64_t)&g1;
                int64_t v87 = v80;
                int64_t v88 = 7 - v87; // 0x3f7b9
                v59 = v85;
                v60 = v86;
                v61 = v87;
                v62 = v87;
                v63 = v86;
                int64_t v89 = v85; // 0x3f7c3
                if (v58 > 7) {
                    v64 = v62 + 8;
                    v65 = v89 + (int64_t)*(char *)v62;
                    v66 = v65 + (int64_t)*(char *)(v62 + 1);
                    v67 = v66 + (int64_t)*(char *)(v62 + 2);
                    v68 = v67 + (int64_t)*(char *)(v62 + 3);
                    v69 = v68 + (int64_t)*(char *)(v62 + 4);
                    v70 = v69 + (int64_t)*(char *)(v62 + 5);
                    v71 = v70 + (int64_t)*(char *)(v62 + 6);
                    v72 = v71 + (int64_t)*(char *)(v62 + 7);
                    v73 = v72 & 0xffffffff;
                    v74 = v65 + v63 + v66 + v67 + v68 + v69 + v70 + v71 + v72 & 0xffffffff;
                    v59 = v73;
                    v60 = v74;
                    v61 = v64;
                    v62 = v64;
                    v63 = v74;
                    while ((v88 + v64 & 0xffffffff) < v58) {
                        // 0x3f7c5
                        v64 = v62 + 8;
                        v65 = v73 + (int64_t)*(char *)v62;
                        v66 = v65 + (int64_t)*(char *)(v62 + 1);
                        v67 = v66 + (int64_t)*(char *)(v62 + 2);
                        v68 = v67 + (int64_t)*(char *)(v62 + 3);
                        v69 = v68 + (int64_t)*(char *)(v62 + 4);
                        v70 = v69 + (int64_t)*(char *)(v62 + 5);
                        v71 = v70 + (int64_t)*(char *)(v62 + 6);
                        v72 = v71 + (int64_t)*(char *)(v62 + 7);
                        v73 = v72 & 0xffffffff;
                        v74 = v65 + v63 + v66 + v67 + v68 + v69 + v70 + v71 + v72 & 0xffffffff;
                        v59 = v73;
                        v60 = v74;
                        v61 = v64;
                        v62 = v64;
                        v63 = v74;
                    }
                }
                // 0x3f812
                v75 = v61;
                v76 = v60;
                v77 = v59;
                v78 = v59;
                v79 = v60;
                v80 = v61;
                if ((v61 - v87 & 0xffffffff) < v58) {
                    v81 = v75 + 1;
                    v82 = v77 + (int64_t)*(char *)v75;
                    v83 = v82 & 0xffffffff;
                    v84 = v82 + v76 & 0xffffffff;
                    v75 = v81;
                    v76 = v84;
                    v78 = v83;
                    v79 = v84;
                    v80 = v81;
                    while ((v81 - v87 & 0xffffffff) < v58) {
                        // 0x3f81c
                        v81 = v75 + 1;
                        v82 = v83 + (int64_t)*(char *)v75;
                        v83 = v82 & 0xffffffff;
                        v84 = v82 + v76 & 0xffffffff;
                        v75 = v81;
                        v76 = v84;
                        v78 = v83;
                        v79 = v84;
                        v80 = v81;
                    }
                }
                // 0x3f82a
                v57 -= v58;
                v85 = (v78 & 0xffffffff) % ((int64_t)&g2 & 0xffffffff);
                v86 = (v79 & 0xffffffff) % ((int64_t)&g2 & 0xffffffff);
                v55 = v85;
                v56 = v86;
            }
        }
        // 0x3f84f
        *v51 = (int32_t)(0x10000 * v56 + v55);
    }
    int64_t result = v28; // 0x3f886
    if (v1 != __readfsqword(40)) {
        // 0x3f888
        __stack_chk_fail();
        result = (int64_t)&g3;
    }
    // 0x3f88d
    return result;
}

// Address range: 0x6b7fa - 0x6b7fd
int64_t function_6b7fa(void) {
    // 0x6b7fa
    int64_t result; // 0x6b7fa
    return result;
}
