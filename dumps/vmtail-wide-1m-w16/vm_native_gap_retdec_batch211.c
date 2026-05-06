/*
 * Targeted RetDec C for native executable gap queue batch 211.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x17d085-0x17d285 rank=- name=- kind=- bytes=- uncovered=-
 *   0x17d285-0x17d485 rank=- name=- kind=- bytes=- uncovered=-
 *   0x17d485-0x17d685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e421e-0x2e441e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e441e-0x2e461e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e461e-0x2e481e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e481e-0x2e4a1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x141113-0x141313 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g5;
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

int64_t function_1410bf();
int64_t function_141113(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_141154(void);
int64_t function_14117e(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_1411f6(int64_t a1);
int64_t function_141253(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17d085(int64_t a1, int64_t a2, int64_t a3);
int64_t function_17d088(void);
int64_t function_17d089(int64_t a1, int64_t a2, int64_t a3);
int64_t function_17d0c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17d1a9(void);
int64_t function_17d1e6(int64_t a1);
int64_t function_17d1ed(void);
int64_t function_17d1f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17d2e3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_17d37f(int64_t a1);
int64_t function_17d39b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17d40b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17d473(int64_t a1);
int64_t function_17d475(int64_t a1, int64_t a2, int64_t a3);
int64_t function_17d4db(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_17d585(void);
int64_t function_17d58b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17d5b2(int64_t a1);
int64_t function_17d621(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17d634(int64_t a1);
int64_t function_17d651(void);
int64_t function_17d6cc();
int64_t function_2e421e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e42eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2e440c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e459a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e4760(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2e48c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d183ed9();
int64_t function_c4258();
int64_t unknown_2dad5320();
int64_t unknown_3b0920b2();
int64_t unknown_4bea9027();
int64_t unknown_62ccafeb();
int64_t unknown_681d0aa1();
int64_t unknown_6c1c22bd();
int64_t unknown_7c8d8f2d();
int64_t unknown_ffffffff97a3eed3();
int64_t unknown_ffffffffaaa6780e();
int64_t unknown_ffffffffd5ff0e84();

// Address range: 0x141113 - 0x141125
int64_t function_141113(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x141113
    int64_t v1; // 0x141113
    char * v2 = (char *)(v1 - 0x3019ff1d + 2 * v1); // 0x141113
    char v3 = *v2 + (char)a4; // 0x141113
    *v2 = v3;
    int64_t result = unknown_2dad5320(a1, a2, a3, a4, a5); // 0x14111f
    if (a4 != 1 == v3 == 0) {
        result = function_1410bf();
    }
    // 0x141121
    return result;
}

// Address range: 0x141154 - 0x141155
int64_t function_141154(void) {
    // 0x141154
    int64_t result; // 0x141154
    return result;
}

// Address range: 0x14117e - 0x1411aa
int64_t function_14117e(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x14117e
    int64_t v1; // 0x14117e
    char v2 = *(char *)(v1 - 0x177eb700); // 0x14117e
    bool v3; // 0x14117e
    int64_t v4 = 256 * (int64_t)((char)v3 + (char)(a3 / 256) - v2) | a3 & -0xff01; // 0x14117e
    *(int32_t *)-0x16f13b73 = *(int32_t *)-0x16f13b73 + (int32_t)a1;
    int32_t * v5 = (int32_t *)(v4 - 42); // 0x14118c
    uint32_t v6 = *v5; // 0x14118c
    uint32_t v7 = v6 + (int32_t)v1; // 0x14118c
    *v5 = v7;
    char v8 = v1; // 0x14118f
    char v9 = v1 / 256; // 0x14118f
    char v10 = v7 < v6; // 0x14118f
    char v11 = v9 + v8 + v10; // 0x14118f
    char v12 = v11 + v10; // 0x14118f
    uint32_t v13 = *(int32_t *)((v1 & -256 | (int64_t)v11) + 0x19897300); // 0x141191
    int64_t result = (0x100000000 * v4 | 2 * v1 & 0xffffffff) / (int64_t)v13 & 0xffffffff; // 0x14119e
    if (v11 < 0 == ((v12 ^ v8) & (v12 ^ v9)) < 0) {
        result = function_141154();
    }
    // 0x1411a1
    return result;
}

// Address range: 0x1411f6 - 0x1411f9
int64_t function_1411f6(int64_t a1) {
    // 0x1411f6
    int64_t result; // 0x1411f6
    return result;
}

// Address range: 0x141253 - 0x1412be
int64_t function_141253(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x141253
    int64_t v1; // 0x141253
    int64_t v2 = v1 & -0x10000 | (int64_t)&g1; // 0x14125f
    char v3 = *(char *)0x10425a68; // 0x141261
    *(char *)0x10425a68 = v3 + (char)((int64_t)&g1 >> 8);
    bool v4; // 0x141253
    int64_t v5 = v4 ? -4 : 4; // 0x14126b
    int32_t v6 = *(int32_t *)(v2 + 0x7201e8e4); // 0x14126c
    unknown_ffffffffd5ff0e84(v6 + (int32_t)(v5 + a1), v5 + a2, 0x12d8aaa5);
    int32_t v7; // 0x141253
    *(int64_t *)((int64_t)(22 * v7) - 8) = v2;
    unknown_3b0920b2();
    return unknown_6c1c22bd();
}

// Address range: 0x17d085 - 0x17d087
int64_t function_17d085(int64_t a1, int64_t a2, int64_t a3) {
    // 0x17d085
    int64_t result; // 0x17d085
    return result;
}

// Address range: 0x17d088 - 0x17d089
int64_t function_17d088(void) {
    // 0x17d088
    int64_t result; // 0x17d088
    return result;
}

// Address range: 0x17d089 - 0x17d099
int64_t function_17d089(int64_t a1, int64_t a2, int64_t a3) {
    // 0x17d089
    int64_t v1; // 0x17d089
    *(char *)a1 = (char)v1;
    char v2 = *(char *)-0x29fc2968; // 0x17d091
    *(char *)-0x29fc2968 = v2 + (char)((uint64_t)v1 / 256);
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x17d0c5 - 0x17d159
int64_t function_17d0c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t result; // 0x17d0c5
    int64_t v2; // 0x17d0c5
    if (a4 == 0) {
        // 0x17d0e7
        int64_t v3; // 0x17d0c5
        bool v4; // 0x17d0c5
        *(char *)v3 = (char)v4;
        int64_t v5 = v2;
        *(char *)v5 = *(char *)&v2 + (char)v5;
        *(char *)v1 = *(char *)&v1 - (char)v2;
        int64_t v6 = v2;
        unsigned char v7 = llvm_ctpop_i8((char)v6 - 1); // 0x17d0f0
        int64_t v8 = v6 & -256 | 62; // 0x17d0f5
        v2 = v8;
        result = v8;
        if (v7 % 2 == 0) {
            unsigned char v9 = *(char *)0xb35ef56; // 0x17d14f
            unsigned char v10 = v9 + (char)((uint64_t)v3 / 256); // 0x17d14f
            *(char *)0xb35ef56 = v10;
            return v6 & -0x10000 | a3 & 0xff00 | (a3 - (v10 < v9 ? 36 : 35)) % 256;
        }
    } else {
        int32_t v11 = *(int32_t *)(a3 - 0x2ec2f063); // 0x17d0c7
        int64_t v12 = unknown_ffffffff97a3eed3((int32_t)a1 - v11) + 0x8e572744 & 0xffffffff; // 0x17d0dd
        v2 = v12;
        unsigned char v13 = (char)a4 % 32; // 0x17d0e2
        result = v12;
        if (v13 != 0) {
            unsigned char v14 = (char)a3;
            *(char *)a3 = v14 >> 8 - v13 | v14 << v13;
            result = v2;
        }
    }
    // 0x17d0f9
    return result;
}

// Address range: 0x17d1a9 - 0x17d1aa
int64_t function_17d1a9(void) {
    // 0x17d1a9
    int64_t result; // 0x17d1a9
    return result;
}

// Address range: 0x17d1e6 - 0x17d1ec
int64_t function_17d1e6(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 61); // 0x17d1e6
    int64_t v2; // 0x17d1e6
    int32_t v3 = *v1 + (int32_t)v2; // 0x17d1e6
    *v1 = v3;
    int64_t result; // 0x17d1e6
    if (v3 == 0) {
        result = function_17d1a9();
    }
    // 0x17d1eb
    return result;
}

// Address range: 0x17d1ed - 0x17d1ee
int64_t function_17d1ed(void) {
    // 0x17d1ed
    int64_t result; // 0x17d1ed
    return result;
}

// Address range: 0x17d1f1 - 0x17d236
int64_t function_17d1f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x17d1f1
    int64_t v1; // 0x17d1f1
    int64_t v2 = v1;
    int64_t v3 = 0; // 0x17d1f1
    *(int32_t *)v2 = (int32_t)v1 + (int32_t)v2;
    int32_t * v4 = (int32_t *)(8 * a2 + 0x3519a9a6 + v2); // 0x17d1fe
    *v4 = *v4 + (int32_t)a1;
    int64_t v5 = *(int64_t *)(v3 & 0xffffffff); // 0x17d206
    uint32_t v6 = *(int32_t *)(a4 - 0x17438bc6 + v5) + (int32_t)unknown_ffffffffaaa6780e(); // 0x17d20d
    int64_t v7 = v6; // 0x17d20d
    int32_t * v8 = (int32_t *)(v7 - 0x7267e2f6); // 0x17d214
    *v8 = (int32_t)v3 + 16 + *v8;
    char * v9 = (char *)v7; // 0x17d21a
    char v10 = *v9 - (char)v6; // 0x17d21a
    *v9 = v10;
    if (v10 == 0) {
        function_17d1ed();
    }
    int64_t result = unknown_7c8d8f2d(); // 0x17d227
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x17d2e3 - 0x17d2f2
int64_t function_17d2e3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x17d2e3
    unknown_62ccafeb();
    int64_t result = __asm_sti(); // 0x17d2eb
    int64_t v1; // 0x17d2e3
    *(int32_t *)a1 = (int32_t)v1;
    return result;
}

// Address range: 0x17d37f - 0x17d381
int64_t function_17d37f(int64_t a1) {
    // 0x17d37f
    int64_t v1; // 0x17d37f
    return v1 & 0xffffffff;
}

// Address range: 0x17d39b - 0x17d3a5
int64_t function_17d39b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_681d0aa1(a1, a2, a3, a4, a5); // 0x17d39b
    int64_t v1; // 0x17d39b
    *(char *)a1 = (char)v1 + (char)a4;
    return result;
}

// Address range: 0x17d40b - 0x17d471
int64_t function_17d40b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a5;
    char v3 = *(char *)-0x4ee9f5ee; // 0x17d40b
    int64_t v4; // 0x17d40b
    *(char *)-0x4ee9f5ee = v3 + (char)((uint64_t)v4 / 256);
    *(char *)a1 = __asm_insb((int16_t)a3);
    char v5 = *(char *)0x67db2229 - 34; // 0x17d422
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x17d422
    *(char *)0x67db2229 = v5;
    int64_t v7; // 0x17d40b
    uint32_t v8 = *(int32_t *)&v7; // 0x17d428
    int64_t result = v8; // 0x17d428
    bool v9; // 0x17d40b
    v7 = (v9 ? -4 : 4) + a2;
    if (v6 % 2 == 0) {
        // 0x17d46f
        return result;
    }
    int32_t v10 = *(int32_t *)&v1; // 0x17d41e
    int32_t v11 = v8; // bp-8, 0x17d42b
    int32_t * v12 = (int32_t *)((result & 0xffffff00 | (int64_t)((v8 | ((int32_t)a4 - v10) / 256) % 256)) - 110); // 0x17d42e
    *v12 = *v12 + (int32_t)(int64_t)&v11;
    *(int32_t *)v1 = *(int32_t *)&v1 - (int32_t)a1;
    int64_t result2 = (int64_t)&v2; // 0x17d436
    *(int64_t *)((int64_t)v11 - 8) = result2;
    char * v13 = (char *)v7; // 0x17d438
    *v13 = 4 * *v13;
    v2 = 0x100000000 * (v2 + result2) >> 32;
    __asm_outsd((int16_t)v1, *(int32_t *)v7);
    return result2;
}

// Address range: 0x17d473 - 0x17d474
int64_t function_17d473(int64_t a1) {
    // 0x17d473
    int64_t result; // 0x17d473
    return result;
}

// Address range: 0x17d475 - 0x17d47d
int64_t function_17d475(int64_t a1, int64_t a2, int64_t a3) {
    // 0x17d475
    int64_t result; // 0x17d475
    int32_t * v1 = (int32_t *)(result + 103); // 0x17d477
    *v1 = *v1 >> 7;
    return result;
}

// Address range: 0x17d4db - 0x17d570
int64_t function_17d4db(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x17d4db
    int64_t v1; // 0x17d4db
    uint64_t v2 = v1;
    int64_t v3 = a3;
    *(int32_t *)0x5d61cde48a9b3a9f = (int32_t)v1;
    int32_t * v4 = (int32_t *)(a1 - 108); // 0x17d4ea
    *v4 = *v4 >> 15;
    int64_t v5 = v1 & -0xff01 | (int64_t)&g4; // 0x17d4ee
    char * v6 = (char *)(2 * a1 - 77); // 0x17d4f0
    *v6 = *v6 + (char)(a3 / 256);
    char * v7 = (char *)v5; // 0x17d4f4
    *v7 = *v7 + (char)((int64_t)&g4 >> 8);
    *(int32_t *)a3 = *(int32_t *)&v3 & (int32_t)a1;
    unsigned char v8 = *(char *)(v5 + 0x794bc564); // 0x17d4f8
    int32_t * v9 = (int32_t *)v5; // 0x17d4fe
    int32_t v10 = v5; // 0x17d4fe
    *v9 = *v9 - v10 + (int32_t)(v8 > (char)(v2 / 256));
    uint32_t v11 = v10 | 0xe60fbbc; // 0x17d505
    unsigned char v12 = llvm_ctpop_i8((char)v11); // 0x17d505
    int64_t v13 = v2 & -0xff01 | (int64_t)&g5; // 0x17d50b
    if (v12 % 2 != 0) {
        // 0x17d50f
        return v13 & 0xffffffff;
    }
    unsigned char v14 = *(char *)(v2 + (int64_t)(v11 % 256)); // 0x17d50a
    int64_t result = (int64_t)v14 | (int64_t)(v11 & -256); // 0x17d50a
    *(char *)0x5917d69f = *(char *)0x5917d69f & 47;
    *(int32_t *)-0x34d0e3cf1963c55a = (int32_t)result;
    char * v15 = (char *)v13; // 0x17d56e
    *v15 = *v15 + v14;
    return result;
}

// Address range: 0x17d585 - 0x17d588
int64_t function_17d585(void) {
    // 0x17d585
    int64_t result; // 0x17d585
    return result;
}

// Address range: 0x17d58b - 0x17d5a3
int64_t function_17d58b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 67); // 0x17d58b
    *v1 = *v1 + (int32_t)a4;
    bool v2; // 0x17d58b
    return function_3d183ed9((v2 ? -4 : 4) + a1);
}

// Address range: 0x17d5b2 - 0x17d5b3
int64_t function_17d5b2(int64_t a1) {
    // 0x17d5b2
    int64_t result; // 0x17d5b2
    return result;
}

// Address range: 0x17d621 - 0x17d633
int64_t function_17d621(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t result = unknown_4bea9027(); // 0x17d621
    int64_t v1; // 0x17d621
    if (a4 != 1 == (char)(v1 / 256) == (char)(result / 256)) {
        // 0x17d698
        return result;
    }
    // 0x17d62b
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a2;
    return a3 & 0xffffffff ^ 139;
}

// Address range: 0x17d634 - 0x17d647
int64_t function_17d634(int64_t a1) {
    // 0x17d634
    int64_t v1; // 0x17d634
    int64_t result = v1 & -256 | (int64_t)*(char *)0x2be28dcc01e83a18; // 0x17d634
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x17d651 - 0x17d653
int64_t function_17d651(void) {
    // 0x17d651
    return function_17d6cc();
}

// Address range: 0x2e421e - 0x2e42eb
int64_t function_2e421e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e421e
    int64_t v1; // 0x2e421e
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(a1 + 44 + 4 * v2); // 0x2e4220
    *v3 = *v3 + (char)a4;
    int64_t v4 = 0x299a1807; // 0x2e4286
    int64_t v5 = (int64_t)&v4; // 0x2e42c8
    *(int64_t *)(v5 - 8) = 0x299a1807;
    *(int64_t *)(v5 - 16) = 0x299a1807;
    return function_c4258(a1, a2, a3, a4, v1, v1, a5);
}

// Address range: 0x2e42eb - 0x2e440c
int64_t function_2e42eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2e42eb
    return function_c4258(a1, a2, a3, a4, a5, 310, 0x2de826);
}

// Address range: 0x2e440c - 0x2e459a
int64_t function_2e440c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e440c
    int64_t v1; // 0x2e440c
    int64_t v2 = *(int64_t *)(v1 + 32); // 0x2e44ba
    int64_t v3 = v1 - 8; // 0x2e44ba
    int64_t * v4 = (int64_t *)v3; // 0x2e44ba
    *v4 = v2;
    int64_t * v5 = (int64_t *)(v1 - 16); // 0x2e44be
    int64_t * v6 = (int64_t *)(v1 + 8); // 0x2e44e0
    int64_t v7 = *v6; // 0x2e44e0
    *v5 = v7;
    int64_t * v8 = (int64_t *)(v1 - 24); // 0x2e44e4
    *v8 = v3;
    int64_t * v9 = (int64_t *)(v1 - 32); // 0x2e4513
    *v9 = v2;
    *v4 = *v8;
    *v9 = a5;
    *(int64_t *)(v1 - 40) = v7 + 0x7f8abf27;
    *v8 = v7;
    *v6 = v7;
    *v8 = v3;
    int64_t v10 = *v5; // 0x2e4586
    *v8 = v10;
    *v9 = v10;
    int64_t v11; // bp-40, 0x2e440c
    return function_c4258(a1, a2, a3, a4, *v9, v1, (int64_t)&v11);
}

// Address range: 0x2e459a - 0x2e4760
int64_t function_2e459a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e459a
    int64_t v1; // 0x2e459a
    bool v2; // 0x2e459a
    return function_c4258(a1, a2, a3, a4, a5, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x2e4760 - 0x2e48c8
int64_t function_2e4760(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x6374e80f; // bp-32, 0x2e47f4
    int64_t v2 = (int64_t)&v1; // 0x2e481d
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x2e4825
    int64_t v4 = *v3; // 0x2e4825
    int64_t v5 = v2 - 8; // 0x2e4825
    int64_t * v6 = (int64_t *)v5; // 0x2e4825
    *v6 = v4;
    int64_t * v7 = (int64_t *)(v2 - 16); // 0x2e4829
    *v7 = v2;
    *(int64_t *)(v2 - 32) = a7;
    v1 = *v7;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x2e486c
    *v8 = v4;
    *v3 = *v7;
    *v7 = v2;
    *v7 = *v6;
    *v8 = v5;
    return function_c4258(a1, a2, a3, a4, a5, a6, v1);
}

// Address range: 0x2e48c8 - 0x2e4a11
int64_t function_2e48c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e48c8
    int64_t v1; // bp-32, 0x2e48c8
    int64_t v2 = (int64_t)&v1; // 0x2e4931
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x2e4939
    int64_t * v4 = (int64_t *)(v2 - 24); // 0x2e494d
    int64_t v5 = *(int64_t *)(v2 + 24); // 0x2e495c
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x2e495c
    *v6 = v5;
    *v4 = v5;
    int64_t * v7 = (int64_t *)(v2 + 8); // 0x2e496f
    int64_t v8 = *v7; // 0x2e496f
    *v6 = v8;
    *v4 = v8;
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x2e4989
    *v9 = v5;
    *(int64_t *)v3 = *v4;
    *v7 = v8;
    *v4 = v5;
    *v9 = v3;
    *(int64_t *)(v2 - 40) = *v4;
    int64_t v10 = *v6; // 0x2e49f6
    *v4 = v10;
    *v9 = v10;
    int64_t v11; // 0x2e48c8
    return function_c4258(a1, a2, a3, a4, v11, v11, v11);
}
