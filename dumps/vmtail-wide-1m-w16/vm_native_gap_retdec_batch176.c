/*
 * Targeted RetDec C for native executable gap queue batch 176.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x496220-0x496505 rank=30 name=fcn.00496220 kind=r2_discovered bytes=741 uncovered=741
 *   0x4d1f80-0x4d2263 rank=31 name=fcn.004d1f80 kind=r2_discovered bytes=739 uncovered=739
 *   0x576a20-0x576d03 rank=32 name=fcn.00576a20 kind=r2_discovered bytes=739 uncovered=739
 *   0x576d70-0x577053 rank=33 name=fcn.00576d70 kind=r2_discovered bytes=739 uncovered=739
 *   0x4a48f0-0x4a4bcd rank=35 name=fcn.004a48f0 kind=r2_discovered bytes=733 uncovered=733
 *   0x555500-0x5557da rank=36 name=fcn.00555500 kind=r2_discovered bytes=730 uncovered=730
 *   0x6a114-0x6a3ea rank=37 name=fcn.0006a114 kind=r2_discovered bytes=726 uncovered=726
 *   0x26600-0x268c9 rank=38 name=fcn.00026600 kind=r2_discovered bytes=713 uncovered=713
 *   0x6941a-0x696e0 rank=39 name=fcn.0006941a kind=r2_discovered bytes=710 uncovered=710
 *   0x62d6e-0x63031 rank=40 name=fcn.00062d6e kind=r2_discovered bytes=707 uncovered=707
 *   0x4bbc70-0x4bbf24 rank=41 name=fcn.004bbc70 kind=r2_discovered bytes=692 uncovered=692
 *   0x576550-0x576801 rank=42 name=fcn.00576550 kind=r2_discovered bytes=689 uncovered=689
 *   0x4fd840-0x4fdaf0 rank=43 name=method.std::basic_filebuf_char__std::char_traits_char___.virtual_72 kind=native_discovered bytes=688 uncovered=688
 *   0x52e580-0x52e827 rank=44 name=method.std::__cxx11::numpunct_wchar_t_.virtual_32 kind=native_discovered bytes=679 uncovered=679
 *   0x71e86-0x7214c rank=45 name=fcn.00071e86 kind=r2_discovered bytes=710 uncovered=674
 *   0x50ec20-0x50eec0 rank=46 name=method.std::num_put_wchar_t__std::ostreambuf_iterator_wchar_t__std::char_traits_wchar_t_____.virtual_40 kind=native_discovered bytes=672 uncovered=672
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
void __asm_int(int32_t interrupt);
int64_t __asm_int1();
int64_t __asm_int3(void);
int32_t __asm_in(uint16_t port);
int32_t __asm_in_133(uint16_t port);
int32_t __asm_in_134(uint16_t port);
char __asm_in_136(uint16_t port);
char __asm_insb(uint16_t port);
int32_t __asm_insd(uint16_t port);
void __asm_out(uint16_t port, char value);
void __asm_out_133(uint16_t port, int32_t value);
void __asm_out_135(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint64_t __readfsqword(int64_t offset);
uint8_t __readgsbyte(int64_t offset);
uint32_t __readgsdword(int64_t offset);
uint64_t __readgsqword(int64_t offset);
int64_t __asm_iretd();
int64_t __asm_sti(int64_t value, ...);
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
int64_t __asm_hlt(void);
int64_t __asm_mfence();
void __asm_wait(void);
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
int128_t __asm_movss(int32_t value);
int64_t __asm_movss_133(int128_t value);
int128_t __asm_movdqa(int128_t value);
void __asm_movq(int64_t value, int128_t dst);
int128_t __asm_aesimc(int128_t value);
int128_t __asm_aeskeygenassist(int128_t value, int imm);
int128_t __asm_movdqu(int128_t value);
int128_t __asm_movdqu_133(int128_t value);
int128_t __asm_movapd(int128_t value);
int128_t __asm_andpd(int128_t left, int128_t right);
int128_t __asm_andnpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pshufd(int128_t value, int imm);
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
void __asm_ucomiss(int128_t left, int64_t right);
void __asm_ucomiss_134(int128_t left, int128_t right);
int128_t __asm_movups();
void __asm_movups_133();
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
int64_t memset2(void *s, int c, size_t n);
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

int64_t function_208a0();
int64_t function_221a8();
int64_t function_24e1e();
int64_t function_25018();
int64_t function_2508e();
int64_t function_250b0();
int64_t function_2515a();
int64_t function_254fe();
int64_t function_255da();
int64_t function_2562c();
int64_t function_256ba();
int64_t function_261a4();
int64_t function_2620b();
int64_t function_26392();
int64_t function_26600(int64_t a1, int64_t a2, int64_t a3, int64_t * a4);
int64_t function_27998();
int64_t function_27a2a();
int64_t function_29d94();
int64_t function_2aec0();
int64_t function_35fcc();
int64_t function_36712();
int64_t function_36902();
int64_t function_36a32();
int64_t function_455ee();
int64_t function_490294();
int64_t function_496220(int64_t result, int64_t a2);
int64_t function_498d10();
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_49eba0();
int64_t function_4a48f0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4b0fa0();
int64_t function_4b1220();
int64_t function_4b1590();
int64_t function_4b1680();
int64_t function_4b1820();
int64_t function_4b1900();
int64_t function_4b1a80();
int64_t function_4b1ac0();
int64_t function_4b26c0();
int64_t function_4b38b0();
int64_t function_4b87a0();
int64_t function_4b94d0();
int64_t function_4b95a0();
int64_t function_4ba580();
int64_t function_4ba6b0();
int64_t function_4bbc70(int64_t a1, int64_t a2);
int64_t function_4bcd80();
int64_t function_4c4450();
int64_t function_4c4620();
int64_t function_4c4700();
int64_t function_4d1ea0();
int64_t function_4d1f80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_4eeb50();
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_4f0bc0();
int64_t function_4f1770();
int64_t function_4fd840(int64_t result2);
int64_t function_50cd00();
int64_t function_50cf10();
int64_t function_50d000();
int64_t function_50e0e0();
int64_t function_50e970();
int64_t function_50ec20(void);
int64_t function_50ec30(int64_t a1);
int64_t function_50ec50(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_50ee90(void);
int64_t function_50eea0(int64_t a1);
int64_t function_519810();
int64_t function_52b020();
int64_t function_52e580(int64_t result, int64_t a2, int64_t a3);
int64_t function_52e650(int64_t result, int64_t a2, int64_t a3);
int64_t function_52e720(int64_t result, int64_t a2, int64_t a3);
int64_t function_52e7f0(int64_t a1, int64_t a2);
int64_t function_542470();
int64_t function_547670();
int64_t function_547e30();
int64_t function_54ff00();
int64_t function_5509d0();
int64_t function_552550();
int64_t function_554b00();
int64_t function_5554b0();
int64_t function_555500(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_576550(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_576a20(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_576d70(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_60c44();
int64_t function_61d6e();
int64_t function_61d90();
int64_t function_61fb0();
int64_t function_62456();
int64_t function_62b92();
int64_t function_62d6e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_6304a();
int64_t function_631a2();
int64_t function_632e0();
int64_t function_63514();
int64_t function_67c0c();
int64_t function_68c41();
int64_t function_68c64();
int64_t function_68e3e();
int64_t function_68fb0();
int64_t function_69044();
int64_t function_690dc();
int64_t function_69166();
int64_t function_6941a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_69c7c();
int64_t function_6a114(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_6a710();
int64_t function_6a892();
int64_t function_6b6a6();
int64_t function_6bab2();
int64_t function_71e86(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_7261c();
int64_t function_7269e();
int64_t function_72782();
int64_t function_729b6();
int64_t function_729ce();

// Address range: 0x26600 - 0x268c9
int64_t function_26600(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = __readfsqword(40); // 0x26617
    int64_t v2 = a2 - a1; // 0x2663c
    int64_t v3; // 0x26600
    int64_t v4; // 0x26600
    int64_t v5; // 0x26600
    int64_t v6; // 0x26600
    int64_t v7; // 0x26600
    int64_t v8; // 0x26600
    int64_t v9; // bp-128, 0x26600
    int64_t v10; // 0x26600
    int64_t v11; // bp-96, 0x26600
    int64_t v12; // 0x26600
    int64_t v13; // 0x26600
    int64_t v14; // 0x26600
    if (v2 >= 129) {
        // 0x2664c
        v12 = (int64_t)a4;
        v13 = (int64_t)&v9;
        v14 = a1 + 8;
        v3 = v2;
        v4 = a2;
        v6 = v12;
        v10 = a3;
        uint64_t v15; // 0x26600
        while (true) {
          lab_0x2664c:
            // 0x2664c
            v5 = v4;
            v15 = v3;
            if (v10 == 0) {
                // break -> 0x26669
                break;
            }
            // 0x26756
            v7 = v6;
            int64_t v16 = v5 - 8; // 0x26767
            function_27998(&v9, v12);
            int64_t v17 = 8 * v15 / 16 + a1; // 0x26770
            function_27998(&v11, v13);
            if ((char)function_261a4(&v11, v14, v17, v7) == 0) {
                int64_t v18 = function_261a4(&v11, v14, v16, v7); // 0x267c8
                v8 = v14;
                if ((char)v18 == 0) {
                    int64_t v19 = function_261a4(&v11, v17, v16, v7); // 0x267e0
                    v8 = v17;
                    if ((char)v19 == 0) {
                        goto lab_0x267f2;
                    } else {
                        // 0x267e9
                        v8 = v16;
                        goto lab_0x267f2;
                    }
                } else {
                    goto lab_0x267f2;
                }
            } else {
                int64_t v20 = function_261a4(&v11, v17, v16, v7); // 0x267a5
                v8 = v17;
                if ((char)v20 != 0) {
                    goto lab_0x267f2;
                } else {
                    int64_t v21 = function_261a4(&v11, v14, v16, v7); // 0x267b7
                    v8 = v14;
                    if ((char)v21 == 0) {
                        goto lab_0x267f2;
                    } else {
                        // 0x267e9
                        v8 = v16;
                        goto lab_0x267f2;
                    }
                }
            }
        }
        uint64_t v22 = v15 / 8;
        int64_t v23; // bp-160, 0x26600
        int64_t v24 = (int64_t)&v23; // 0x26676
        function_27998(&v23, v12);
        function_27998(&v9, v24);
        int64_t v25; // bp-168, 0x26600
        int64_t v26 = (int64_t)&v25;
        int64_t v27; // bp-176, 0x26600
        int64_t v28 = (int64_t)&v27;
        int64_t v29 = (v22 - 2) / 2; // 0x266a2
        int64_t * v30 = (int64_t *)(8 * v29 + a1); // 0x266a5
        *v30 = (int64_t)&g32;
        v27 = *v30;
        function_27998(&v11, v13);
        int64_t v31 = v27; // 0x266bf
        v27 = (int64_t)&g32;
        v25 = v31;
        function_2620b(a1, v29, v22, &v25, &v11, &v25, &v25);
        function_2508e(v26);
        function_27a2a(&v11);
        while (v29 != 0) {
            // 0x2670d
            function_2508e(v28);
            v29--;
            v30 = (int64_t *)(8 * v29 + a1);
            *v30 = (int64_t)&g32;
            v27 = *v30;
            function_27998(&v11, v13);
            v31 = v27;
            v27 = (int64_t)&g32;
            v25 = v31;
            function_2620b(a1, v29, v22, &v25, &v11, &v25, &v25);
            function_2508e(v26);
            function_27a2a(&v11);
        }
        // 0x26717
        function_2508e(v28);
        function_27a2a(&v9);
        if (v5 - a1 >= 9) {
            int64_t v32 = v5 - 8;
            function_26392(a1, v32, v32, v24);
            int64_t v33 = v32; // 0x26732
            while (v32 - a1 >= 9) {
                // 0x26734
                v32 = v33 - 8;
                function_26392(a1, v32, v32, v24);
                v33 = v32;
            }
        }
        // 0x26748
        function_27a2a(&v23);
    }
  lab_0x2689f:;
    int64_t result = 0; // 0x268b0
    if (v1 != __readfsqword(40)) {
        // 0x268b2
        __stack_chk_fail();
        result = (int64_t)&g40;
    }
    // 0x268b7
    return result;
  lab_0x267f2:;
    int64_t v34 = v10 - 1; // 0x26762
    function_256ba(a1, v8);
    function_27a2a(&v11);
    function_27998(&v11, v13);
    int64_t v35 = v7; // 0x2680b
    int64_t v36 = v14; // 0x2680b
    int64_t v37 = v5; // 0x2680b
    int64_t v38; // 0x26600
    while (true) {
        int64_t v39 = v37;
        v38 = v36;
        int64_t v40 = function_261a4(&v11, v38, a1, v35); // 0x26819
        int64_t v41 = v35; // 0x26820
        int64_t v42 = v39; // 0x26820
        if ((char)v40 == 0) {
            int64_t v43 = v39 - 8;
            int64_t v44 = function_261a4(&v11, a1, v43, v43); // 0x2683c
            int64_t v45 = v43 - 8; // 0x26845
            while ((char)v44 != 0) {
                // 0x2682c
                v43 = v45;
                v44 = function_261a4(&v11, a1, v43, v43);
                v45 = v43 - 8;
            }
            if (v38 >= v43) {
                // break -> 0x26852
                break;
            }
            // 0x26892
            function_256ba(v38, v43);
            v41 = v45;
            v42 = v43;
        }
        // 0x26822
        v35 = v41;
        v36 = v38 + 8;
        v37 = v42;
    }
    // 0x26852
    function_27a2a(&v11);
    function_27a2a(&v9);
    function_27998(&v11, v12);
    function_26600(v38, v5, v34, &v11);
    function_27a2a(&v11);
    int64_t v46 = v38 - a1; // 0x2663c
    v3 = v46;
    v4 = v38;
    v6 = (int64_t)&v11;
    v10 = v34;
    if (v46 < 129) {
        goto lab_0x2689f;
    }
    goto lab_0x2664c;
}

// Address range: 0x62d6e - 0x63031
int64_t function_62d6e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x62d92
    int64_t v2; // bp-208, 0x62d6e
    function_729b6(&v2, a1 + 304);
    int64_t v3 = 0; // bp-136, 0x62dca
    *(int64_t *)(a4 + 8) = a4;
    int64_t v4; // 0x62d6e
    if ((char)function_61d90(a1, a2, a3, &v3) != 0) {
        if (a2 == 0 || a3 == 0) {
            // 0x62fe7
            v4 = function_62b92(a1, a4) & 0xffffffff;
            goto lab_0x62ff4;
        } else {
            // 0x62e04
            v4 = 4;
            if (a3 < 24) {
                goto lab_0x62ff4;
            } else {
                // 0x62e13
                if (*(int64_t *)(a1 + 40) != *(int64_t *)(a2 + 4)) {
                    // 0x62f2c
                    v4 = 6;
                    goto lab_0x62ff4;
                } else {
                    // 0x62e1d
                    if ((*(char *)(a2 + 2) & 4) == 0) {
                        // 0x62e41
                        v4 = 4;
                        if (a3 == 24) {
                            goto lab_0x62ff4;
                        } else {
                            // 0x62e50
                            function_631a2(&v3, a2, a3, 4);
                            int64_t v5; // bp-104, 0x62d6e
                            int64_t v6 = function_455ee(&v5, 24, 0); // 0x62e7c
                            int64_t v7 = v3; // 0x62e86
                            int64_t v8 = v6; // 0x62e96
                            int64_t v9; // bp-128, 0x62d6e
                            if (v9 != v7) {
                                // 0x62e98
                                v8 = function_455ee((int64_t *)v7, v9 - v7, (int32_t)v6);
                            }
                            // 0x62ea2
                            function_254fe(&v3);
                            v4 = 4;
                            int32_t v10; // 0x62d6e
                            if (v10 != (int32_t)v8) {
                                goto lab_0x62ff4;
                            } else {
                                int64_t * v11 = (int64_t *)(a2 + 12); // 0x62ec0
                                if ((char)function_61d6e(a1, *v11) == 0) {
                                    // 0x62f36
                                    v3 = 0;
                                    function_6304a(&v9);
                                    v3 = *v11;
                                    int64_t v12; // bp-200, 0x62d6e
                                    function_631a2(&v12, a2, a3, 4);
                                    function_63514(&v9, &v12);
                                    function_254fe(&v12);
                                    function_632e0(a1 + 216, &v3);
                                    function_6304a(&v12);
                                    int64_t v13; // bp-168, 0x62d6e
                                    function_455ee(&v13, 24, 0);
                                    function_62456(a1, &v12);
                                    function_254fe(&v12);
                                    function_254fe(&v9);
                                    // 0x62fe7
                                    v4 = function_62b92(a1, a4) & 0xffffffff;
                                    goto lab_0x62ff4;
                                } else {
                                    // 0x62ed0
                                    function_6304a(&v3);
                                    function_455ee(&v5, 24, 0);
                                    function_62456(a1, &v3);
                                    function_254fe(&v3);
                                    // 0x62f2c
                                    v4 = 6;
                                    goto lab_0x62ff4;
                                }
                            }
                        }
                    } else {
                        // 0x62e23
                        v4 = 1;
                        if ((char)function_61fb0(a1, *(int64_t *)(a2 + 12)) != 0) {
                            goto lab_0x62ff4;
                        } else {
                            // 0x62f2c
                            v4 = 6;
                            goto lab_0x62ff4;
                        }
                    }
                }
            }
        }
    } else {
        // 0x62ddc
        v4 = (char)v3 == 0 ? 0 : 4;
        goto lab_0x62ff4;
    }
  lab_0x62ff4:
    // 0x62ff4
    function_729ce((int64_t)&v2);
    int64_t result = v4; // 0x63018
    if (v1 != __readfsqword(40)) {
        // 0x6301a
        __stack_chk_fail();
        result = (int64_t)&g40;
    }
    // 0x6301f
    return result;
}

// Address range: 0x6941a - 0x696e0
int64_t function_6941a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x69428
    int64_t v2 = (int64_t)&g32; // bp-112, 0x6944d
    int64_t v3 = (int64_t)&g32; // bp-104, 0x69452
    int64_t v4 = (int64_t)&g32; // bp-96, 0x69457
    int64_t v5 = (int64_t)&g32; // bp-88, 0x6945c
    int64_t v6 = (int64_t)&v2; // 0x6946e
    int64_t v7 = (int64_t)&v3; // 0x69478
    int64_t v8 = 0; // 0x6947d
    int64_t v9; // bp-72, 0x6941a
    int64_t v10; // 0x6948b
    int64_t v11; // 0x694c7
    if (*(int64_t *)(a1 - 24) != 0) {
        // 0x69486
        v10 = (int64_t)&v9;
        int64_t v12; // bp-80, 0x6941a
        function_69166(&v12, "://", a3, a4);
        function_490294(&v9, a1, &v12, 0);
        function_256ba(v6, v10);
        int64_t v13; // bp-255, 0x6941a
        v11 = (int64_t)&v13;
        int64_t v14 = v11; // 0x694d0
        if (g31 != 0) {
            int64_t v15 = *(int64_t *)(v6 - 24); // 0x694da
            v14 = v6 & -256 | (int64_t)(v15 == (int64_t)g31 + 3);
        }
        // 0x694e1
        function_2508e(v10);
        int64_t v16 = (int64_t)&v12; // 0x694ed
        function_2508e(v16);
        v8 = 0;
        if ((char)v14 != 0) {
            goto lab_0x69696;
        } else {
            int64_t v17 = (int64_t)g31 + 3; // 0x69510
            function_69166(&v12, "/", v14, v17);
            function_490294(&v9, a1, &v12, (int32_t)(0x100000000000000 * v17 >> 56));
            int64_t v18 = (int64_t)&v4; // 0x69534
            function_256ba(v18, v10);
            function_2508e(v10);
            function_2508e(v16);
            if (g31 == 0) {
                // 0x69564
                function_36712(&v9, a1, (int64_t)g31 + 3, -1);
                function_256ba(v18, v10);
                function_2508e(v10);
            }
            uint64_t v19 = function_60c44(&v4, 46, -1) - 1; // 0x695a4
            if (v19 < 0xfffffffffffffffe) {
                uint64_t v20 = function_60c44(&v4, 46, v19); // 0x695b6
                if (v20 == -1) {
                    // 0x695fc
                    function_29d94(v7, &v4);
                    goto lab_0x69609;
                } else {
                    // 0x695c1
                    if ((int64_t)g31 - 1 > v20) {
                        // 0x695d2
                        function_36712(&v9, v18, v20 + 1, -1);
                        function_256ba(v7, v10);
                        function_2508e(v10);
                        goto lab_0x69609;
                    } else {
                        // 0x695fc
                        function_29d94(v7, &v4);
                        goto lab_0x69609;
                    }
                }
            } else {
                // 0x695fc
                function_29d94(v7, &v4);
                goto lab_0x69609;
            }
        }
    } else {
        goto lab_0x69696;
    }
  lab_0x69696:
    // 0x69696
    function_2508e((int64_t)&v5);
    function_2508e((int64_t)&v4);
    function_2508e(v7);
    int64_t result = function_2508e(v6) & -256 | v8; // 0x696ca
    if (v1 != __readfsqword(40)) {
        // 0x696cc
        __stack_chk_fail();
        result = (int64_t)&g40;
    }
    // 0x696d1
    return result;
  lab_0x69609:
    // 0x69609
    function_36712(&v9, a1, 2 * (int64_t)g31 + 3, -1);
    function_256ba((int64_t)&v5, v10);
    function_2508e(v10);
    if (g31 == 0) {
        // 0x6964f
        function_2aec0(&v5, (int64_t *)"/");
    }
    // 0x6965e
    function_29d94(a2, &v2);
    function_29d94(a2 + 8, &v3);
    function_29d94(a2 + 16, &v4);
    function_29d94(a2 + 24, &v5);
    v8 = v11 & 248;
    goto lab_0x69696;
}

// Address range: 0x6a114 - 0x6a3ea
int64_t function_6a114(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x6a137
    int64_t v2 = 0; // bp-368, 0x6a14a
    int64_t v3 = 0; // bp-360, 0x6a153
    int64_t v4 = function_68e3e(); // 0x6a15c
    int64_t v5 = v4 + 24; // 0x6a161
    __asm_rep_stosd_memset((char *)v5, 0, (int64_t)L"\n2");
    function_2562c(v4);
    int64_t v6 = a1 + 144; // 0x6a181
    int64_t v7 = a1 + 168; // 0x6a188
    *(int32_t *)v7 = 0;
    int32_t v8 = v5; // bp-352, 0x6a192
    *(int64_t *)(a1 + 152) = *(int64_t *)v6;
    int64_t v9 = a1 + 96; // 0x6a1a3
    function_6a710(v9);
    int64_t v10 = a3 % 0x10000; // 0x6a1b3
    int64_t v11; // bp-320, 0x6a114
    function_6bab2(&v11, *(int64_t *)(a2 + 16), v10, 0, v10);
    function_67c0c(&v11);
    function_690dc(a1, &v11);
    int64_t v12 = function_68fb0(a1, &v11); // 0x6a1ea
    int64_t v13 = v12 & 0xffffffff; // 0x6a1f1
    int64_t v14 = v13; // 0x6a1f4
    int64_t v15; // 0x6a114
    if ((int32_t)v12 != 0) {
        goto lab_0x6a3ad;
    } else {
        // 0x6a1fa
        v15 = 0;
        if (*(char *)(a1 + 40) != 0) {
            int64_t v16 = function_69044(a1, &v11, a2, v10, v10); // 0x6a228
            v15 = v10;
            v14 = 7;
            if ((char)v16 != 0) {
                goto lab_0x6a204;
            } else {
                goto lab_0x6a3ad;
            }
        } else {
            goto lab_0x6a204;
        }
    }
  lab_0x6a3ad:
    // 0x6a3ad
    function_6b6a6(&v11);
    function_2508e((int64_t)&v8);
    int64_t result = v14 & 0xffffffff; // 0x6a3d1
    if (v1 != __readfsqword(40)) {
        // 0x6a3d3
        __stack_chk_fail();
        result = (int64_t)&g40;
    }
    // 0x6a3d8
    return result;
  lab_0x6a204:
    // 0x6a204
    v14 = 7;
    if ((char)a1 != 0) {
        int32_t v17 = *(int32_t *)(v15 - 24); // 0x6a210
        int64_t v18 = *(int64_t *)((int64_t)v8 - 24); // 0x6a24b
        int64_t v19 = function_255da((int64_t *)&v8, &v11, v15, v17); // 0x6a24f
        v14 = 7;
        if ((int32_t)v19 >= 1) {
            // 0x6a269
            function_36a32((int64_t *)&v8, 0x100000000 * v19 >> 32, 0, v18 & 0xffffffff);
            int64_t v20 = function_69c7c((int64_t *)&v8, v7, &v2, &v3, v9); // 0x6a28e
            v14 = 7;
            if ((char)v20 != 0) {
                // 0x6a297
                v14 = v13;
                if (v3 != 0) {
                    // 0x6a2a5
                    v14 = 7;
                    if (v3 < 0xa00000) {
                        int64_t v21 = function_4efd30(v3); // 0x6a2cc
                        int64_t v22 = v21; // bp-344, 0x6a2db
                        __asm_rep_stosb_memset((char *)v21, 0, v3);
                        int64_t v23 = *(int64_t *)((int64_t)v8 - 24) - v2; // 0x6a2fa
                        int64_t v24 = 0; // 0x6a305
                        int64_t v25 = v23; // 0x6a305
                        if (v3 != 0) {
                            int64_t v26 = function_6a892((int64_t *)&v8); // 0x6a30a
                            function_255da((int64_t *)&v8, (int64_t *)v7, v2, 0);
                            int64_t v27 = v2 + (int64_t)v8; // 0x6a329
                            function_68c41(v27, v26, v21);
                            v24 = v3;
                            v25 = v23;
                            if (v3 > v23 && (int32_t)v27 >= 1) {
                                int64_t v28 = v23; // 0x6a36d
                                v28 += (0x100000000 * v27 >> 32);
                                v24 = v3;
                                v25 = v28;
                                while ((int32_t)a1 >= 1 && v3 > v28) {
                                    // 0x6a36b
                                    v28 += (0x100000000 * a1 >> 32);
                                    v24 = v3;
                                    v25 = v28;
                                }
                            }
                        }
                        int64_t v29 = 7; // 0x6a377
                        if (v24 == v25) {
                            // 0x6a379
                            function_68c64(v6, &v22);
                            v29 = v13;
                        }
                        // 0x6a392
                        v14 = v29;
                        if (v22 != 0) {
                            // 0x6a39c
                            function_4eeb50(v22);
                            v14 = v29;
                        }
                    }
                }
            }
        }
    }
    goto lab_0x6a3ad;
}

// Address range: 0x71e86 - 0x7214c
int64_t function_71e86(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __readfsqword(40); // 0x71e97
    if (*(int64_t *)(a2 + 16) != 0) {
        // 0x71eb5
        if (*(char *)(a1 + 408) == 0) {
            int64_t v2 = *(int64_t *)(a2 + 40); // 0x71ec9
            uint32_t v3 = *(int32_t *)(a2 + 80); // 0x71ed2
            int64_t v4 = *(int64_t *)(a2 + 32); // 0x71ede
            int64_t v5 = v2; // bp-208, 0x71ee5
            int64_t v6 = v4; // bp-216, 0x71eea
            int64_t v7 = v4; // 0x71eef
            int64_t v8 = a5; // 0x71eef
            if (v2 != 0) {
                // 0x71ef1
                function_36902();
                v7 = v6;
                v8 = a5 & 0xffffffff;
            }
            // 0x71f0a
            int64_t v9; // bp-200, 0x71e86
            function_2515a(&v9, a2);
            int64_t v10; // bp-168, 0x71e86
            function_2515a(&v10, (int64_t)&v9);
            int64_t v11 = a1 + 168; // 0x71f51
            v5 = 0;
            v6 = 0;
            int64_t v12 = function_24e1e(); // 0x71fba
            function_221a8(&v9);
            function_35fcc(&v5);
            int32_t * v13 = (int32_t *)(a1 + 400); // 0x71fed
            *v13 = *v13 + 1;
            function_729b6(&v6, a1 + 208);
            int64_t v14 = *(int64_t *)(a1 + 176);
            int64_t v15 = v11; // 0x72013
            int64_t v16 = 1; // 0x72013
            if (v14 != 0) {
                int64_t v17 = v14;
                uint32_t v18 = *(int32_t *)(v17 + 112); // 0x72015
                int64_t v19 = *(int64_t *)((v18 < v3 ? 16 : 24) + v17);
                while (v19 != 0) {
                    // 0x72015
                    v17 = v19;
                    v18 = *(int32_t *)(v17 + 112);
                    v19 = *(int64_t *)((v18 < v3 ? 16 : 24) + v17);
                }
                // 0x7202c
                v15 = v17;
                v16 = v11 == v17 | v18 < v3;
            }
            int64_t v20 = (int64_t)&v10; // 0x71f30
            int64_t v21 = function_4efd30(136); // 0x72041
            *(int64_t *)(v21 + 48) = 0;
            int64_t * v22 = (int64_t *)(v21 + 64); // 0x72057
            *v22 = 0;
            int64_t v23 = v21 + 72; // 0x7205f
            *(int64_t *)v23 = 0;
            int64_t * v24 = (int64_t *)(v21 + 120); // 0x7206a
            *v24 = 0;
            function_7261c(v21 + 32, v20);
            *(int64_t *)(v21 + 80) = 0x100000000 * *(int64_t *)(a2 + 48) >> 32;
            *v22 = v7;
            function_7269e(v23, v20 + 40);
            *(char *)(v21 + 88) = (char)a3;
            *(int32_t *)(v21 + 92) = (int32_t)a4;
            *(int32_t *)(v21 + 96) = (int32_t)v8;
            *(int64_t *)(v21 + 104) = *(int64_t *)(a2 + 72);
            *(int32_t *)(v21 + 112) = v3;
            *v24 = v12 + 0xf4240 * (a4 & 0xffffffff);
            *(int32_t *)(v21 + 128) = *(int32_t *)(a2 + 96);
            function_4f0bc0(v16, v21, v15, v11);
            int64_t * v25 = (int64_t *)(a1 + 200); // 0x720fd
            *v25 = *v25 + 1;
            function_72782(a1 + 248);
            function_729ce((int64_t)&v6);
            function_25018(v20);
        }
    }
    int64_t result = 0; // 0x72133
    if (v1 != __readfsqword(40)) {
        // 0x72135
        __stack_chk_fail();
        result = (int64_t)&g40;
    }
    // 0x7213a
    return result;
}

// Address range: 0x496220 - 0x496501
int64_t function_496220(int64_t result, int64_t a2) {
    int64_t * v1 = (int64_t *)(result + 96); // 0x496245
    int64_t v2 = *v1; // 0x496245
    int64_t v3 = *(int64_t *)(v2 + (int64_t)&g3); // 0x49624c
    int64_t v4; // 0x496220
    int64_t v5; // 0x496220
    if (v3 == 0) {
        // 0x4964d0
        v5 = result + 304;
        v4 = *(int64_t *)(result + 296);
    } else {
        // 0x496271
        v5 = v2 + (int64_t)&g4;
        v4 = v3;
    }
    uint64_t v6 = v2 + (int64_t)&g34; // 0x496253
    uint64_t v7 = *(int64_t *)v5;
    int32_t v8 = a2; // 0x496278
    int64_t v9; // 0x496220
    int64_t v10; // 0x496220
    int64_t v11; // 0x496220
    char v12; // bp-64, 0x496220
    int64_t v13; // 0x496220
    int64_t v14; // 0x496220
    switch (v8) {
        case 5: {
            // 0x496398
            if ((int64_t)&g34 - (int64_t)&g13 < 2) {
                // 0x496370
                return 0xffff8f00;
            }
            // 0x4963af
            *(char *)(v2 + (int64_t)&g14) = (char)v7;
            *(char *)(v2 + (int64_t)&g13) = (char)(v7 / 256);
            uint64_t v15 = v2 + (int64_t)&g15; // 0x4963c3
            if (v6 < v15 || v7 > (int64_t)&g34 - (int64_t)&g15) {
                // 0x496370
                return 0xffff8f00;
            }
            // 0x4963e2
            memset((void *)(int64_t)((int64_t *)v15), 0, (int32_t)v7);
            v11 = v7 + v15;
            goto lab_0x496314;
        }
        case 7: {
            // 0x496400
            *(char *)(v2 + (int64_t)&g13) = 0;
            *(char *)(v2 + (int64_t)&g14) = 48;
            v11 = v2 + (int64_t)&g16;
            goto lab_0x496314;
        }
        case 6: {
            int64_t v16 = v2 + (int64_t)&g15; // 0x496420
            int64_t v17 = *(int64_t *)(result + 56); // 0x496427
            int64_t v18 = *(int64_t *)(result + 48); // 0x49642b
            int64_t v19 = function_4b87a0(v2 + 8, v16, (int64_t)&g34 - (int64_t)&g15, (int64_t *)&v12, v18, v17, v14, v14, v14, v14, v14, v14); // 0x496441
            v10 = v19;
            v9 = (int64_t)"mbedtls_dhm_calc_secret";
            v13 = (int64_t)&g7;
            if ((int32_t)v19 != 0) {
                goto lab_0x4964af;
            } else {
                // 0x49644e
                *(char *)(v2 + (int64_t)&g14) = v12;
                *(char *)(v2 + (int64_t)&g13) = v12 >> 7;
                function_49eba0(result, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g8, "DHM: K ", *v1 + 136);
                v11 = v16 + (int64_t)v12;
                goto lab_0x496314;
            }
        }
        default: {
            // 0x496293
            if (v8 != 8) {
                // 0x496370
                return result;
            }
            int64_t v20 = v2 + (int64_t)&g15; // 0x49629c
            int64_t v21 = *(int64_t *)(result + 56); // 0x4962a3
            int64_t v22 = *(int64_t *)(result + 48); // 0x4962a7
            int64_t v23 = function_4b94d0(v2 + 256, (int64_t *)&v12, v20, (int64_t)&g34 - (int64_t)&g15, v22, v21, v14, v14, v14, v14, v14, v14); // 0x4962c0
            v10 = v23;
            v9 = (int64_t)"mbedtls_ecdh_calc_secret";
            v13 = (int64_t)&g9;
            if ((int32_t)v23 != 0) {
                goto lab_0x4964af;
            } else {
                // 0x4962cd
                *(char *)(v2 + (int64_t)&g14) = v12;
                *(char *)(v2 + (int64_t)&g13) = v12 >> 7;
                int64_t v24 = *v1; // 0x4962f9
                function_49eba0(result, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g10, "ECDH: z", v24 + (int64_t)&g2);
                v11 = v20 + (int64_t)v12;
                goto lab_0x496314;
            }
        }
    }
  lab_0x4964af:;
    int64_t result2 = v10 & 0xffffffff;
    function_49e8b0(result, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)v13, (char *)v9, result2, 0x100000000 * v10 >> 32);
    // 0x496370
    return result2;
  lab_0x496314:
    // 0x496314
    if (v6 - v11 < 2) {
        // 0x496370
        return 0xffff8f00;
    }
    // 0x496324
    *(char *)(v11 + 1) = (char)v7;
    *(char *)v11 = (char)(v7 / 256);
    uint64_t v25 = v11 + 2; // 0x496331
    int64_t result3 = 0xffff8f00; // 0x496338
    if (v6 >= v25 && v7 <= v6 - v25) {
        // 0x49634a
        memcpy((int64_t *)v25, (int64_t *)v4, (int32_t)v7);
        int64_t v26 = *v1; // 0x496358
        *(int64_t *)(v26 + (int64_t)&g11) = v7 - 1624 + v25 - v26;
        result3 = 0;
    }
    // 0x496370
    return result3;
}

// Address range: 0x4a48f0 - 0x4a4bcb
int64_t function_4a48f0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t * v1 = (int64_t *)(a1 + 96); // 0x4a490d
    int64_t v2 = *v1; // 0x4a490d
    int64_t v3; // 0x4a48f0
    if (v2 == 0) {
        goto lab_0x4a4b20;
    } else {
        int64_t v4 = *(int64_t *)(v2 + (int64_t)&g5); // 0x4a491d
        v3 = v4;
        if (v4 == 0) {
            goto lab_0x4a4b20;
        } else {
            goto lab_0x4a492d;
        }
    }
  lab_0x4a4b20:;
    int64_t v5 = *(int64_t *)(a1 + 208); // 0x4a4b20
    v3 = v5;
    int64_t v6 = 0; // 0x4a4b2c
    if (v5 == 0) {
        goto lab_0x4a4931;
    } else {
        goto lab_0x4a492d;
    }
  lab_0x4a4931:;
    int64_t v7 = function_4c4700((int32_t)v6); // 0x4a4931
    int64_t v8 = *v1; // 0x4a4936
    int64_t v9; // 0x4a48f0
    if (v8 == 0) {
        goto lab_0x4a4b00;
    } else {
        int64_t v10 = *(int64_t *)(v8 + (int64_t)&g5); // 0x4a494e
        v9 = v10;
        if (v10 == 0) {
            goto lab_0x4a4b00;
        } else {
            goto lab_0x4a495e;
        }
    }
  lab_0x4a492d:
    // 0x4a492d
    v6 = *(int64_t *)(v3 + 8);
    goto lab_0x4a4931;
  lab_0x4a4b00:;
    int64_t v11 = *(int64_t *)(v6 + 208); // 0x4a4b00
    v9 = v11;
    int64_t v12 = 0; // 0x4a4b0c
    if (v11 == 0) {
        goto lab_0x4a4962;
    } else {
        goto lab_0x4a495e;
    }
  lab_0x4a4962:;
    int64_t result = function_4c4450((int32_t)v12, 1, v6); // 0x4a4967
    if ((int32_t)result == 0) {
        // 0x4a4aeb
        return result;
    }
    uint64_t v13 = v7 + 7; // 0x4a493a
    uint64_t v14 = v13 / 8; // 0x4a4941
    int64_t v15 = a2; // 0x4a4979
    int64_t v16; // 0x4a48f0
    if (*(int32_t *)(a1 + 24) != 0) {
        // 0x4a497b
        int64_t v17; // 0x4a48f0
        if ((char)v17 != (char)(v13 / 2048)) {
            // 0x4a4b43
            v16 = (int64_t)&g37;
            function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)v16, "bad client key exchange message");
            // 0x4a4aeb
            return 0xffff8400;
        }
        // 0x4a498b
        v15 = a2 + 2;
        if (*(char *)(a2 + 1) != (char)v14) {
            // 0x4a4b43
            v16 = (int64_t)&g37;
            function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)v16, "bad client key exchange message");
            // 0x4a4aeb
            return 0xffff8400;
        }
    }
    // 0x4a49a1
    if (v15 + v14 != a3) {
        // 0x4a4b43
        v16 = (int64_t)&g38;
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)v16, "bad client key exchange message");
        // 0x4a4aeb
        return 0xffff8400;
    }
    int64_t v18 = *v1; // 0x4a49b1
    unsigned char v19 = *(char *)(v12 + 372); // 0x4a49ba
    int32_t v20 = *(int32_t *)(v18 + (int64_t)&g36); // 0x4a49c1
    uint32_t v21 = *(int32_t *)(v18 + (int64_t)&g35); // 0x4a49c7
    int64_t result2 = v21; // 0x4a49c7
    int64_t v22; // bp-168, 0x4a48f0
    function_498d10(v21, v20, (int32_t)(v19 / 2 % 2), &v22);
    int64_t v23 = *(int64_t *)(result2 + 56); // 0x4a49e4
    if (v21 != 0) {
        // 0x4a4aeb
        return result2;
    }
    int64_t v24 = *v1; // 0x4a49f6
    int64_t v25 = *(int64_t *)(v23 + 56); // 0x4a4a00
    int64_t v26 = *(int64_t *)(v23 + 48); // 0x4a4a04
    int64_t v27; // 0x4a48f0
    if (v24 == 0) {
        goto lab_0x4a4b6f;
    } else {
        int64_t v28 = *(int64_t *)(v24 + (int64_t)&g5); // 0x4a4a0e
        v27 = v28;
        if (v28 == 0) {
            goto lab_0x4a4b6f;
        } else {
            goto lab_0x4a4a1e;
        }
    }
  lab_0x4a495e:
    // 0x4a495e
    v12 = *(int64_t *)(v9 + 8);
    goto lab_0x4a4962;
  lab_0x4a4b6f:;
    int64_t v29 = *(int64_t *)(v23 + 208); // 0x4a4b6f
    v27 = v29;
    int32_t v30 = 0; // 0x4a4b7b
    if (v29 == 0) {
        goto lab_0x4a4a22;
    } else {
        goto lab_0x4a4a1e;
    }
  lab_0x4a4a22:;
    int64_t v31 = v26; // bp-184, 0x4a4a22
    int32_t v32; // bp-104, 0x4a48f0
    int64_t v33; // bp-160, 0x4a48f0
    int64_t v34 = function_4c4620(v30, v15, v14, (int64_t *)&v32, &v33, 48, v26, v25); // 0x4a4a41
    if (a4 > (int64_t)&g6 || (int64_t)&g6 - a4 < 48) {
        // 0x4a4b86
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g39, "should never happen");
        // 0x4a4aeb
        return 0xffff9400;
    }
    int64_t v35 = (int64_t)&v31; // 0x4a4906
    *(int64_t *)(*v1 + (int64_t)&g11) = 48;
    char v36; // 0x4a48f0
    int32_t v37 = v34 | (int64_t)(v36 ^ v36) | v33 ^ 48 | (v22 ^ (int64_t)v32) % 256; // 0x4a4aa4
    char v38 = (-v37 | v37) >> 31;
    char v39 = -1 - v38;
    int64_t v40 = v35 + 32; // 0x4a4ac7
    int64_t v41 = a4 + (int64_t)&g12 + 8 + v8; // 0x4a4a92
    *(char *)v41 = *(char *)v40 & v38 | (char)v32 & v39;
    if (*(int64_t *)(*v1 + (int64_t)&g11) <= 1) {
        // 0x4a4aeb
        return result2;
    }
    int64_t v42 = 1;
    char v43 = *(char *)(v35 + 80 + v42); // 0x4a4ac0
    int64_t v44 = v42 + 1; // 0x4a4ad3
    *(char *)(v41 + v42) = *(char *)(v40 + v42) & v38 | v43 & v39;
    while (*(int64_t *)(*v1 + (int64_t)&g11) > v44) {
        // 0x4a4ac0
        v42 = v44;
        v43 = *(char *)(v35 + 80 + v42);
        v44 = v42 + 1;
        *(char *)(v41 + v42) = *(char *)(v40 + v42) & v38 | v43 & v39;
    }
    // 0x4a4aeb
    return result2;
  lab_0x4a4a1e:
    // 0x4a4a1e
    v30 = (int32_t)*(int64_t *)(v27 + 8);
    goto lab_0x4a4a22;
}

// Address range: 0x4bbc70 - 0x4bbf21
int64_t function_4bbc70(int64_t a1, int64_t a2) {
    // 0x4bbc70
    int64_t v1; // 0x4bbc70
    if ((int32_t)function_4b1680(a2 + 48, 1, v1) != 0) {
        // 0x4bbd40
        return 0xffffb380;
    }
    // 0x4bbca4
    if (*(int64_t *)(a1 + 96) == 0) {
        // 0x4bbd40
        return 0xffffb080;
    }
    // 0x4bbcb5
    if (*(int64_t *)(a1 + 120) == 0) {
        // 0x4bbd40
        return (*(int64_t *)(a1 + 184) + 7) / 8 < function_4b0fa0(a2) ? 0xffffb380 : 0;
    }
    // 0x4bbcc1
    if ((int32_t)function_4b1680(a2, 0, v1) < 0) {
        // 0x4bbd40
        return 0xffffb380;
    }
    int64_t v2 = a2 + 24; // 0x4bbcd3
    if ((int32_t)function_4b1680(v2, 0, v1) < 0) {
        // 0x4bbd40
        return 0xffffb380;
    }
    int64_t v3 = a1 + 8; // 0x4bbce5
    if ((int32_t)function_4b1590(a2, v3) >= 0 || (int32_t)function_4b1590(v2, v3) >= 0) {
        // 0x4bbd40
        return 0xffffb380;
    }
    // 0x4bbd08
    int64_t v4; // bp-104, 0x4bbc70
    function_4b0870(&v4);
    int32_t v5; // bp-72, 0x4bbc70
    function_4b0870((int64_t *)&v5);
    int64_t v6 = function_4b1ac0(&v4, v2, v2); // 0x4bbd23
    int64_t v7 = v6; // 0x4bbd2c
    int64_t v8; // 0x4bbc70
    if ((int32_t)v6 == 0) {
        int64_t v9 = function_4b95a0(&v4, a1); // 0x4bbd9e
        v7 = v9;
        if ((int32_t)v9 != 0) {
            goto lab_0x4bbd2e_3;
        } else {
            // 0x4bbda9
            g30++;
            int64_t v10 = function_4b1ac0((int64_t *)&v5, a2, a2); // 0x4bbdbc
            v7 = v10;
            if ((int32_t)v10 != 0) {
                goto lab_0x4bbd2e_3;
            } else {
                int64_t v11 = function_4b95a0((int64_t *)&v5, a1); // 0x4bbdd3
                v7 = v11;
                if ((int32_t)v11 != 0) {
                    goto lab_0x4bbd2e_3;
                } else {
                    // 0x4bbde2
                    g30++;
                    if (*(int64_t *)(a1 + 48) == 0) {
                        int64_t v12 = function_4b1a80((int64_t *)&v5, (int64_t *)&v5, 3); // 0x4bbecd
                        v7 = v12;
                        if ((int32_t)v12 != 0) {
                            goto lab_0x4bbd2e_3;
                        } else {
                            int64_t v13 = (int64_t)&v5;
                            int64_t v14 = 3; // 0x4bbc70
                            v8 = v13;
                            while (v5 < 0) {
                                int64_t v15 = function_4b1680(v13, 0, v14); // 0x4bbef1
                                v8 = v13;
                                if ((int32_t)v15 == 0) {
                                    // break -> 0x4bbe3f
                                    break;
                                }
                                int64_t v16 = function_4b1900((int64_t *)&v5, (int64_t *)&v5, v3); // 0x4bbf09
                                v7 = v16;
                                v14 = v3;
                                if ((int32_t)v16 != 0) {
                                    goto lab_0x4bbd2e_3;
                                }
                                v8 = v13;
                            }
                            goto lab_0x4bbe3f;
                        }
                    } else {
                        int64_t v17 = function_4b1900((int64_t *)&v5, (int64_t *)&v5, a1 + 32); // 0x4bbe03
                        v7 = v17;
                        if ((int32_t)v17 != 0) {
                            goto lab_0x4bbd2e_3;
                        } else {
                            int64_t v18 = (int64_t)&v5;
                            int64_t v19 = function_4b1590(v18, v3); // 0x4bbe36
                            v8 = v18;
                            while ((int32_t)v19 >= 0) {
                                int64_t v20 = function_4b1820((int64_t *)&v5, (int64_t *)&v5, v3); // 0x4bbe1f
                                v7 = v20;
                                if ((int32_t)v20 != 0) {
                                    goto lab_0x4bbd2e_3;
                                }
                                v19 = function_4b1590(v18, v3);
                                v8 = v18;
                            }
                            goto lab_0x4bbe3f;
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x4bbd2e_3;
    }
  lab_0x4bbd2e_3:
    // 0x4bbd2e
    function_4b0890(&v4);
    function_4b0890((int64_t *)&v5);
    // 0x4bbd40
    return v7 & 0xffffffff;
  lab_0x4bbe3f:;
    int64_t v21 = function_4b1ac0((int64_t *)&v5, v8, a2); // 0x4bbe4a
    v7 = v21;
    if ((int32_t)v21 == 0) {
        int64_t v22 = function_4b95a0((int64_t *)&v5, a1); // 0x4bbe61
        v7 = v22;
        if ((int32_t)v22 == 0) {
            // 0x4bbe70
            g30++;
            int64_t v23 = function_4b1900((int64_t *)&v5, (int64_t *)&v5, a1 + 56); // 0x4bbe85
            v7 = v23;
            if ((int32_t)v23 == 0) {
                int64_t result = function_4b1590(v8, v3); // 0x4bbe9c
                while ((int32_t)result >= 0) {
                    int64_t v24 = function_4b1820((int64_t *)&v5, (int64_t *)&v5, v3); // 0x4bbeb0
                    v7 = v24;
                    if ((int32_t)v24 != 0) {
                        goto lab_0x4bbd2e_3;
                    }
                    result = function_4b1590(v8, v3);
                }
                // 0x4bbd40
                return result;
            }
        }
    }
    goto lab_0x4bbd2e_3;
}

// Address range: 0x4d1f80 - 0x4d225f
int64_t function_4d1f80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x4d1f80
    int64_t result; // 0x4d1f80
    if (*(int64_t *)(a1 + 168) == 0) {
        // 0x4d2260
        return result;
    }
    // 0x4d1fc6
    int64_t v1; // bp-136, 0x4d1f80
    function_4ba580(&v1);
    int64_t v2; // bp-232, 0x4d1f80
    function_4b0870(&v2);
    int64_t v3; // bp-200, 0x4d1f80
    function_4b0870(&v3);
    int64_t v4; // bp-168, 0x4d1f80
    function_4b0870(&v4);
    int64_t v5 = a1 + 152; // 0x4d1ff7
    int64_t * v6 = (int64_t *)(a1 + 184);
    int64_t v7 = (int64_t)&v4;
    int32_t v8 = 12; // 0x4d2010
    int64_t v9 = function_4bcd80(a1, &v2, &v1, a7, a8); // 0x4d202b
    int64_t v10 = v9; // 0x4d2032
    if ((int32_t)v9 != 0) {
        // break (via goto) -> 0x4d2250
        goto lab_0x4d2250_4;
    }
    int64_t v11 = function_4b26c0(a2, &v1, v5); // 0x4d2046
    v10 = v11;
    if ((int32_t)v11 != 0) {
        // break (via goto) -> 0x4d2250
        goto lab_0x4d2250_4;
    }
    // 0x4d2053
    v8--;
    int64_t result2 = 0xffffb300; // 0x4d2056
    if (v8 == 0) {
        goto lab_0x4d2200_11;
    }
    while ((int32_t)function_4b1680(a2, 0, v5) == 0) {
        // 0x4d2015
        v9 = function_4bcd80(a1, &v2, &v1, a7, a8);
        v10 = v9;
        if ((int32_t)v9 != 0) {
            // break (via goto) -> 0x4d2250
            goto lab_0x4d2250_4;
        }
        // 0x4d2038
        v11 = function_4b26c0(a2, &v1, v5);
        v10 = v11;
        if ((int32_t)v11 != 0) {
            // break (via goto) -> 0x4d2250
            goto lab_0x4d2250_4;
        }
        // 0x4d2053
        v8--;
        result2 = 0xffffb300;
        if (v8 == 0) {
            goto lab_0x4d2200_11;
        }
    }
    int64_t v12 = function_4d1ea0(a1, &v3, a5, a6); // 0x4d207c
    if ((int32_t)v12 != 0) {
        // 0x4d2200
        result2 = v12 & 0xffffffff;
        goto lab_0x4d2200_11;
    }
    int64_t v13 = *v6 + 7; // 0x4d20a5
    int64_t v14 = function_4b38b0(&v4, v13 / 8, a7, a8); // 0x4d20b0
    int32_t v15 = 31; // 0x4d20b7
    v10 = v14;
    while ((int32_t)v14 == 0) {
        int64_t v16 = function_4b1220(&v4, (v13 & -8) - *v6); // 0x4d20d4
        v10 = v16;
        if ((int32_t)v16 != 0) {
            // break (via goto) -> 0x4d2250
            goto lab_0x4d2250_4;
        }
        // 0x4d20e1
        v15--;
        result = v16;
        while (v15 != 0) {
            // 0x4d20ea
            if ((int32_t)function_4b1680(v7, 1, a7) >= 0) {
                // 0x4d2100
                if ((int32_t)function_4b1590(v7, v5) < 0) {
                    // break -> 0x4d211a
                    break;
                }
            }
            int64_t v17 = *v6 + 7; // 0x4d20a5
            int64_t v18 = function_4b38b0(&v4, v17 / 8, a7, a8); // 0x4d20b0
            v10 = v18;
            if ((int32_t)v18 != 0) {
                // break (via goto) -> 0x4d2250
                goto lab_0x4d2250_4;
            }
            v16 = function_4b1220(&v4, (v17 & -8) - *v6);
            v10 = v16;
            if ((int32_t)v16 != 0) {
                // break (via goto) -> 0x4d2250
                goto lab_0x4d2250_4;
            }
            // 0x4d20e1
            v15--;
            result = v16;
        }
        // 0x4d2260
        return result;
    }
  lab_0x4d2250_4:
    // 0x4d2250
    result2 = v10 & 0xffffffff;
    goto lab_0x4d2200_11;
  lab_0x4d2200_11:
    // 0x4d2200
    function_4ba6b0(&v1);
    function_4b0890(&v2);
    function_4b0890(&v3);
    function_4b0890(&v4);
    return result2;
}

// Address range: 0x4fd840 - 0x4fdaeb
// From class:    __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
// Type:          virtual member function
int64_t function_4fd840(int64_t result2) {
    // 0x4fd840
    __readfsqword(40);
    if ((*(char *)(result2 + 120) & 8) == 0) {
        // 0x4fdae4
        return 0;
    }
    // 0x4fd868
    int64_t result; // 0x4fd840
    if (*(char *)(result2 + 170) != 0) {
        // 0x4fdad0
        result = result2;
        if ((int32_t)result2 != -1) {
            // 0x4fdae4
            return result;
        }
        // 0x4fd895
        __readfsqword(40);
        return result2;
    }
    int64_t result3 = *(int64_t *)(result2 + 16); // 0x4fd87f
    if (*(char *)(result2 + 192) != 0) {
        // 0x4fdae4
        return result3;
    }
    uint64_t v1 = *(int64_t *)(result2 + 24); // 0x4fd889
    if (v1 > result3) {
        // 0x4fd895
        __readfsqword(40);
        return (int64_t)*(char *)result3;
    }
    uint64_t v2 = *(int64_t *)(result2 + 160); // 0x4fd8c0
    int64_t * v3 = (int64_t *)(result2 + 200); // 0x4fd8ce
    int64_t v4 = *v3; // 0x4fd8ce
    if (v4 == 0) {
        // 0x4fdae4
        return result3;
    }
    int64_t result4 = *(int64_t *)v4; // 0x4fd8eb
    if ((int32_t)result4 < 1 || (char)result4 != 0) {
        // 0x4fdae4
        return result4;
    }
    uint64_t v5 = v2 >= 2 ? v2 - 1 : 1; // 0x4fd8e0
    int64_t v6 = (0x100000000 * result4 >> 32) * v5; // 0x4fd911
    int64_t * v7 = (int64_t *)(result2 + 224); // 0x4fd918
    int64_t * v8 = (int64_t *)(result2 + 232); // 0x4fd91f
    int64_t * v9 = (int64_t *)(result2 + 216); // 0x4fd942
    int64_t result5 = *v9; // 0x4fd942
    if (*(char *)(result2 + 169) == 0) {
        // 0x4fd959
        if (v6 > result5) {
            // 0x4fdae4
            return result5;
        }
    } else {
        // 0x4fd94b
        if (v6 > result5 | v1 == *(int64_t *)(result2 + 8)) {
            // 0x4fdae4
            return result5;
        }
    }
    int64_t v10 = *v8 - *v7; // 0x4fd929
    int64_t * v11 = (int64_t *)(result2 + 208); // 0x4fd965
    uint64_t v12 = *v11; // 0x4fd965
    if (v10 != 0) {
        // 0x4fdae4
        return result5;
    }
    int64_t v13 = v6 - v10; // 0x4fd92c
    int64_t result6 = *(int64_t *)(result2 + 132); // 0x4fd972
    uint64_t v14 = v12 + v10; // 0x4fd979
    *v7 = v12;
    *v8 = v14;
    *(int64_t *)(result2 + 140) = result6;
    if (v13 != 0 && v13 < 0 == ((v13 ^ v6) & (v10 ^ v6)) < 0) {
        // 0x4fdae4
        return result6;
    }
    int64_t * v15 = (int64_t *)(result2 + 8); // 0x4fd99b
    int64_t v16 = *v15; // bp-72, 0x4fd9a5
    if (v14 > v12) {
        // 0x4fdae4
        return result6;
    }
    int64_t v17 = (int64_t)&v16; // 0x4fd84a
    int64_t v18 = 0; // 0x4fd840
    int32_t v19; // 0x4fd840
    int64_t v20; // 0x4fd840
    int64_t v21; // 0x4fd840
    int64_t v22; // 0x4fd840
    int64_t v23; // 0x4fd840
    int64_t v24; // 0x4fd840
    while (true) {
      lab_0x4fd9dc:;
        int64_t v25 = *v8; // 0x4fd9dc
        int64_t v26 = v25 - *v11 + 1; // 0x4fd9f6
        result = v26;
        if (v26 > *v9) {
            // break -> 0x4fdae4
            break;
        }
        int64_t v27 = function_4f1770(result2 + 104, v25, 1); // 0x4fda10
        result = v27;
        switch (v27) {
            case 0: {
                return result;
            }
            case -1: {
                return result;
            }
            default: {
                int64_t v28 = v18;
                int64_t v29 = *v8 + v27; // 0x4fda2b
                int64_t v30 = *v15; // 0x4fda39
                *v8 = v29;
                v16 = v30;
                if (v29 > *v7) {
                    int64_t v31 = *(int64_t *)*v3; // 0x4fda6c
                    *(int64_t *)(v17 - 8) = v17;
                    int64_t v32 = v30 + v5; // 0x4fda70
                    *(int64_t *)(v17 - 16) = v32;
                    int64_t v33 = v31 & 0xffffffff; // 0x4fda7b
                    int32_t v34 = v31; // 0x4fda82
                    v24 = v32;
                    v21 = v33;
                    if (v34 != 3) {
                        // 0x4fda54
                        v19 = v34;
                        v23 = v32;
                        v22 = *v15;
                        v20 = v33;
                        goto lab_0x4fd9ba;
                    } else {
                        goto lab_0x4fda8e;
                    }
                } else {
                    int32_t v35 = v28;
                    v19 = v35;
                    v23 = v29;
                    v22 = v30;
                    v20 = v28;
                    v24 = v29;
                    v21 = v28;
                    if (v35 == 3) {
                        goto lab_0x4fda8e;
                    } else {
                        goto lab_0x4fd9ba;
                    }
                }
            }
        }
    }
  lab_0x4fdae4_4:
    // 0x4fdae4
    return result;
  lab_0x4fda8e:;
    int64_t v36 = *v8; // 0x4fda95
    uint64_t v37 = v36 - *v11; // 0x4fda9c
    result = v24;
    if (v5 < v37 || v37 != 0) {
        return result;
    }
    // 0x4fdab4
    *v7 = v36;
    v18 = v21;
    int64_t v38 = v24 & 0xffffff00; // 0x4fdac7
    goto lab_0x4fd9d4;
  lab_0x4fd9ba:
    // 0x4fd9ba
    if (v19 == 2) {
        // break -> 0x4fdae4
        goto lab_0x4fdae4_4;
    }
    // 0x4fd9cb
    v18 = v20;
    v38 = v23 & 0xffffff00 | (int64_t)(v16 != v22);
    goto lab_0x4fd9d4;
  lab_0x4fd9d4:
    // 0x4fd9d4
    result = v38;
    if ((char)v38 != 0) {
        // break -> 0x4fdae4
        goto lab_0x4fdae4_4;
    }
    goto lab_0x4fd9dc;
}

// Address range: 0x50ec20 - 0x50ec25
// From class:    std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_50ec20(void) {
    // 0x50ec20
    return function_50e970();
}

// Address range: 0x50ec30 - 0x50ec4a
int64_t function_50ec30(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 40); // 0x50ec33
    if (result != g23) {
        // 0x50ec48
        return result;
    }
    // 0x50ec40
    return function_50e970();
}

// Address range: 0x50ec50 - 0x50ee90
int64_t function_50ec50(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = __readfsqword(40); // 0x50ec81
    int64_t v2 = function_50e0e0(); // 0x50ec90
    uint32_t v3 = *(int32_t *)(a4 + 24); // 0x50ec95
    int64_t v4; // bp-296, 0x50ec50
    int64_t v5 = (int64_t)&v4; // 0x50ec99
    int32_t v6 = v3 & 74; // 0x50ecbf
    int64_t v7; // bp-128, 0x50ec50
    int64_t v8 = function_50d000(&v7, a6); // 0x50ece5
    int32_t v9 = v8; // bp-68, 0x50ecf9
    int64_t v10 = 0x100000000 * v8; // 0x50ecf7
    int64_t v11; // bp-288, 0x50ec50
    int64_t v12 = (0x2800000000 - v10 >> 30) + (int64_t)&v11; // 0x50ed04
    int64_t v13; // 0x50ec50
    int64_t v14; // 0x50ec50
    int64_t v15; // 0x50ec50
    int64_t v16; // 0x50ec50
    int64_t v17; // 0x50ec50
    if (*(char *)(v2 + 32) != 0) {
        int64_t v18 = *(int64_t *)(v2 + 16); // 0x50ed87
        int64_t v19 = *(int64_t *)(v2 + 24); // 0x50ed8d
        int64_t v20 = v5 - ((v10 + 0x100000000 >> 29) + 30 & -16); // 0x50eda4
        int64_t v21 = v20 + 15 & -16 | 8; // 0x50edb0
        *(int64_t *)(v20 - 8) = (int64_t)&v9;
        *(int64_t *)(v20 - 16) = v12;
        function_50cd00(a1, v18, v19, *(int32_t *)(v2 + 76), a4, v21, v21);
        int64_t v22 = v9; // 0x50edcd
        v14 = v22;
        v16 = v20;
        v15 = v22;
        v17 = v20;
        v13 = v21;
        if (v6 != 64 && v6 != 8) {
            goto lab_0x50ed12;
        } else {
            goto lab_0x50eddf;
        }
    } else {
        // 0x50ed0a
        v14 = v8;
        v16 = v5;
        v15 = v8;
        v17 = v5;
        v13 = v12;
        if (v6 == 64 || v6 == 8) {
            goto lab_0x50eddf;
        } else {
            goto lab_0x50ed12;
        }
    }
  lab_0x50ed12:;
    int64_t * v23 = (int64_t *)(a4 + 16); // 0x50ed12
    int64_t v24 = *v23; // 0x50ed12
    if (0x100000000 * v14 >> 32 < v24) {
        // 0x50ee30
        *(int64_t *)(v16 - 16 - (4 * v24 + 30 & -16)) = (int64_t)&v9;
        function_50cf10(a1, (int32_t)a5);
    }
    // 0x50ed22
    *v23 = 0;
    if (v1 != __readfsqword(40)) {
        // 0x50ee87
        __stack_chk_fail();
        return (int64_t)&g40;
    }
    // 0x50ed69
    return result;
  lab_0x50eddf:
    // 0x50eddf
    v14 = v15;
    v16 = v17;
    if (a6 != 0 && (v3 & (int32_t)&g1) != 0) {
        // 0x50edf7
        if (v6 == 64) {
            int64_t v25 = v15 + 1; // 0x50ee75
            v9 = v25;
            *(int32_t *)(v13 - 4) = *(int32_t *)(v2 + 96);
            v14 = v25 & 0xffffffff;
            v16 = v17;
        } else {
            int64_t v26 = v15 + 2; // 0x50ee05
            int32_t v27 = *(int32_t *)(v2 + 80 + (int64_t)(v3 / 0x1000 & 4 | 8)); // 0x50ee17
            v9 = v26;
            *(int32_t *)(v13 - 4) = v27;
            *(int32_t *)(v13 - 8) = *(int32_t *)(v2 + 96);
            v14 = v26 & 0xffffffff;
            v16 = v17;
        }
    }
    goto lab_0x50ed12;
}

// Address range: 0x50ee90 - 0x50ee95
// From class:    std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_50ee90(void) {
    // 0x50ee90
    int64_t v1; // 0x50ee90
    return function_50ec50(v1, v1, v1, v1, v1, v1);
}

// Address range: 0x50eea0 - 0x50eeba
int64_t function_50eea0(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 48); // 0x50eea3
    if (result != g20) {
        // 0x50eeb8
        return result;
    }
    // 0x50eeb0
    int64_t v1; // 0x50eea0
    return function_50ec50(a1, v1, v1, v1, v1, v1);
}

// Address range: 0x52e580 - 0x52e650
// From class:    *NSt13__facet_shims12_GLOBAL__N_113numpunct_shimIwEE
// Type:          virtual member function
int64_t function_52e580(int64_t result, int64_t a2, int64_t a3) {
    int64_t v1 = result + 16; // 0x52e586
    int64_t v2 = __readfsqword(40); // 0x52e58e
    int64_t v3 = *(int64_t *)(*(int64_t *)(a2 + 16) + 16); // 0x52e5a2
    int64_t * v4 = (int64_t *)result; // 0x52e5a6
    *v4 = v1;
    if (v3 == 0) {
        // 0x52e644
        return function_542470("basic_string::_M_construct null not valid");
    }
    char * str = (char *)v3; // 0x52e5b8
    int32_t len = strlen(str); // 0x52e5b8
    int64_t v5 = len; // 0x52e5b8
    int64_t v6 = v5; // bp-56, 0x52e5c4
    int64_t v7; // 0x52e580
    int64_t v8; // 0x52e580
    int64_t v9; // 0x52e580
    if (len < 16) {
        if (len != 1) {
            // 0x52e638
            v7 = 0;
            v8 = v1;
            v9 = v1;
            if (len == 0) {
                goto lab_0x52e5d8;
            } else {
                goto lab_0x52e61b;
            }
        } else {
            // 0x52e5d0
            *(char *)v1 = *str;
            v7 = v5;
            v8 = v1;
            goto lab_0x52e5d8;
        }
    } else {
        int64_t v10 = function_52b020(result, &v6, 0); // 0x52e608
        *v4 = v10;
        *(int64_t *)v1 = v6;
        v9 = v10;
        goto lab_0x52e61b;
    }
  lab_0x52e61b:
    // 0x52e61b
    memcpy((int64_t *)v9, (int64_t *)v3, len);
    v7 = v6;
    v8 = v9;
    goto lab_0x52e5d8;
  lab_0x52e5d8:;
    int64_t v11 = __readfsqword(40); // 0x52e5dd
    *(int64_t *)(result + 8) = v7;
    *(char *)(v8 + v7) = 0;
    if (v2 == v11) {
        // 0x52e5f4
        return result;
    }
    // 0x52e63f
    __stack_chk_fail();
    // 0x52e644
    return function_542470("basic_string::_M_construct null not valid");
}

// Address range: 0x52e650 - 0x52e720
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIwLb0EEE
// Type:          virtual member function
int64_t function_52e650(int64_t result, int64_t a2, int64_t a3) {
    int64_t v1 = result + 16; // 0x52e656
    int64_t v2 = __readfsqword(40); // 0x52e65e
    int64_t v3 = *(int64_t *)(*(int64_t *)(a2 + 16) + 16); // 0x52e672
    int64_t * v4 = (int64_t *)result; // 0x52e676
    *v4 = v1;
    if (v3 == 0) {
        // 0x52e714
        return function_542470("basic_string::_M_construct null not valid");
    }
    char * str = (char *)v3; // 0x52e688
    int32_t len = strlen(str); // 0x52e688
    int64_t v5 = len; // 0x52e688
    int64_t v6 = v5; // bp-56, 0x52e694
    int64_t v7; // 0x52e650
    int64_t v8; // 0x52e650
    int64_t v9; // 0x52e650
    if (len < 16) {
        if (len != 1) {
            // 0x52e708
            v7 = 0;
            v8 = v1;
            v9 = v1;
            if (len == 0) {
                goto lab_0x52e6a8;
            } else {
                goto lab_0x52e6eb;
            }
        } else {
            // 0x52e6a0
            *(char *)v1 = *str;
            v7 = v5;
            v8 = v1;
            goto lab_0x52e6a8;
        }
    } else {
        int64_t v10 = function_52b020(result, &v6, 0); // 0x52e6d8
        *v4 = v10;
        *(int64_t *)v1 = v6;
        v9 = v10;
        goto lab_0x52e6eb;
    }
  lab_0x52e6eb:
    // 0x52e6eb
    memcpy((int64_t *)v9, (int64_t *)v3, len);
    v7 = v6;
    v8 = v9;
    goto lab_0x52e6a8;
  lab_0x52e6a8:;
    int64_t v11 = __readfsqword(40); // 0x52e6ad
    *(int64_t *)(result + 8) = v7;
    *(char *)(v8 + v7) = 0;
    if (v2 == v11) {
        // 0x52e6c4
        return result;
    }
    // 0x52e70f
    __stack_chk_fail();
    // 0x52e714
    return function_542470("basic_string::_M_construct null not valid");
}

// Address range: 0x52e720 - 0x52e7f0
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIwLb1EEE
// Type:          virtual member function
int64_t function_52e720(int64_t result, int64_t a2, int64_t a3) {
    int64_t v1 = result + 16; // 0x52e726
    int64_t v2 = __readfsqword(40); // 0x52e72e
    int64_t v3 = *(int64_t *)(*(int64_t *)(a2 + 16) + 16); // 0x52e742
    int64_t * v4 = (int64_t *)result; // 0x52e746
    *v4 = v1;
    if (v3 == 0) {
        // 0x52e7e4
        return function_542470("basic_string::_M_construct null not valid");
    }
    char * str = (char *)v3; // 0x52e758
    int32_t len = strlen(str); // 0x52e758
    int64_t v5 = len; // 0x52e758
    int64_t v6 = v5; // bp-56, 0x52e764
    int64_t v7; // 0x52e720
    int64_t v8; // 0x52e720
    int64_t v9; // 0x52e720
    if (len < 16) {
        if (len != 1) {
            // 0x52e7d8
            v7 = 0;
            v8 = v1;
            v9 = v1;
            if (len == 0) {
                goto lab_0x52e778;
            } else {
                goto lab_0x52e7bb;
            }
        } else {
            // 0x52e770
            *(char *)v1 = *str;
            v7 = v5;
            v8 = v1;
            goto lab_0x52e778;
        }
    } else {
        int64_t v10 = function_52b020(result, &v6, 0); // 0x52e7a8
        *v4 = v10;
        *(int64_t *)v1 = v6;
        v9 = v10;
        goto lab_0x52e7bb;
    }
  lab_0x52e7bb:
    // 0x52e7bb
    memcpy((int64_t *)v9, (int64_t *)v3, len);
    v7 = v6;
    v8 = v9;
    goto lab_0x52e778;
  lab_0x52e778:;
    int64_t v11 = __readfsqword(40); // 0x52e77d
    *(int64_t *)(result + 8) = v7;
    *(char *)(v8 + v7) = 0;
    if (v2 == v11) {
        // 0x52e794
        return result;
    }
    // 0x52e7df
    __stack_chk_fail();
    // 0x52e7e4
    return function_542470("basic_string::_M_construct null not valid");
}

// Address range: 0x52e7f0 - 0x52e825
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIwLb0EEE
// Type:          virtual member function
int64_t function_52e7f0(int64_t a1, int64_t a2) {
    int64_t wstr = *(int64_t *)(*(int64_t *)(a2 + 16) + 48); // 0x52e804
    int64_t v1 = a1 + 16; // 0x52e808
    *(int64_t *)a1 = v1;
    int64_t result = v1; // 0x52e812
    if (wstr != 0) {
        // 0x52e814
        result = wcslen((int32_t *)wstr);
    }
    // 0x52e821
    return result;
}

// Address range: 0x555500 - 0x5557d7
int64_t function_555500(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x555514
    int64_t v2 = function_5554b0(); // 0x555529
    int64_t * v3 = (int64_t *)v2; // 0x555531
    int64_t v4 = v2; // 0x55553f
    int64_t v5; // 0x555500
    int64_t v6; // bp-72, 0x555500
    int64_t result; // bp-88, 0x555500
    if (*(int64_t *)(*v3 + 32) == g25) {
        // 0x555545
        v4 = *(int64_t *)(*(int64_t *)(v2 + 16) + 16);
        function_250b0(&result, v4, &v6);
        v5 = result;
    }
    int64_t v7 = *(int64_t *)(v5 - 24); // 0x555564
    int64_t * v8 = (int64_t *)(a1 + 24); // 0x555568
    *v8 = v7;
    int64_t v9 = function_4eec00(v7, v4); // 0x55556c
    function_547670(&result, v9, *v8, 0);
    char v10 = 0; // 0x55558c
    if (*v8 != 0) {
        // 0x55558e
        v10 = *(char *)v9 < 127;
    }
    // 0x55559b
    *(char *)(a1 + 32) = v10;
    int64_t v11 = v2; // 0x5555ad
    int64_t v12; // bp-80, 0x555500
    if (*(int64_t *)(*v3 + 40) == g17) {
        // 0x5555b3
        v11 = *(int64_t *)(*(int64_t *)(v2 + 16) + 40);
        int64_t v13; // bp-90, 0x555500
        function_250b0(&v12, v11, &v13);
    }
    int64_t v14 = *(int64_t *)(v12 - 24); // 0x5555d2
    int64_t * v15 = (int64_t *)(a1 + 48); // 0x5555d6
    *v15 = v14;
    int64_t v16 = function_4eec00(v14, v11); // 0x5555da
    function_547670(&v12, v16, *v15, 0);
    int64_t v17 = v2; // 0x555602
    int64_t v18; // bp-89, 0x555500
    if (*(int64_t *)(*v3 + 48) == g18) {
        // 0x555608
        v17 = *(int64_t *)(*(int64_t *)(v2 + 16) + 56);
        function_250b0(&v6, v17, &v18);
    }
    int64_t v19 = *(int64_t *)(v6 - 24); // 0x555627
    int64_t * v20 = (int64_t *)(a1 + 64); // 0x55562b
    *v20 = v19;
    int64_t v21 = function_4eec00(v19, v17); // 0x55562f
    function_547670(&v6, v21, *v20, 0);
    int64_t v22 = *(int64_t *)(*v3 + 16); // 0x55564c
    int64_t v23 = v22; // 0x555657
    if (v22 == g22) {
        // 0x55565d
        v23 = (int64_t)*(char *)(*(int64_t *)(v2 + 16) + 72);
    }
    // 0x555665
    *(char *)(a1 + 72) = (char)v23;
    int64_t v24 = *(int64_t *)(*v3 + 24); // 0x55566c
    int64_t v25 = v24; // 0x555677
    if (v24 == g21) {
        // 0x55567d
        v25 = (int64_t)*(char *)(*(int64_t *)(v2 + 16) + 73);
    }
    // 0x555685
    *(char *)(a1 + 73) = (char)v25;
    int64_t v26 = function_554b00(a2); // 0x55568d
    function_519810(v26, *(int64_t *)&g26, &g29, a1 + 74);
    function_519810(v26, *(int64_t *)&g27, &g28, a1 + 110);
    *(int64_t *)(a1 + 16) = v9;
    *(int64_t *)(a1 + 40) = v16;
    *(int64_t *)(a1 + 56) = v21;
    *(char *)(a1 + 136) = 1;
    int64_t v27 = v6 - 24; // 0x5556e8
    if (v27 != (int64_t)&g31) {
        // 0x5557a8
        function_552550(v27, &v18);
        int64_t v28 = v12 - 24; // 0x5557b7
        if (v28 != (int64_t)&g31) {
            // 0x5557c8
            function_552550(v28, &v18);
            return result;
        }
    } else {
        int64_t v29 = v12 - 24; // 0x5556fa
        if (v29 != (int64_t)&g31) {
            // 0x5557c8
            function_552550(v29, &v18);
            return result;
        }
    }
    // 0x555707
    if (result - 24 != (int64_t)&g31) {
        // 0x5557e8
        return result;
    }
    // 0x555719
    return __readfsqword(40) ^ v1;
}

// Address range: 0x576550 - 0x5767ff
int64_t function_576550(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x576564
    int32_t v2 = a1; // 0x57657f
    *(int32_t *)(a2 + 72) = v2;
    *(int32_t *)(a2 + 76) = v2;
    int64_t * v3 = (int64_t *)(a2 + 16); // 0x576596
    *v3 = 0;
    int64_t * v4 = (int64_t *)(a2 + 40); // 0x57659e
    *v4 = 0;
    int64_t * v5 = (int64_t *)(a2 + 56); // 0x5765a9
    *v5 = 0;
    *(char *)(a2 + 328) = 1;
    int64_t result; // bp-72, 0x576550
    int64_t v6 = *(int64_t *)(result - 24); // 0x5765c0
    int64_t v7 = function_4eec00(v6 + 1, a1); // 0x5765c8
    function_547670(&result, v7, v6, 0);
    *(char *)(v7 + v6) = 0;
    *v3 = v7;
    *(int64_t *)(a2 + 24) = v6;
    int64_t v8 = result - 24; // 0x5765f2
    int64_t v9; // bp-73, 0x576550
    if (v8 != (int64_t)g19) {
        int32_t * v10 = (int32_t *)(result - 8);
        int32_t v11 = *v10;
        *v10 = v11 - 1;
        if (v11 >= 0 != v11 != 0) {
            // 0x576730
            function_547e30(v8, &v9, v11);
        }
    }
    int64_t v12 = *(int64_t *)(result - 24); // 0x576615
    uint64_t v13 = v12 + 1; // 0x576623
    if (v13 < 0x1fffffffffffffff) {
        int64_t v14 = 4 * v13; // 0x576630
        int64_t v15 = function_4eec00(v14, a1); // 0x57663b
        function_54ff00(&result, v15, v12, 0);
        *(int32_t *)(v14 - 4 + v15) = 0;
        *v4 = v15;
        *(int64_t *)(a2 + 48) = v12;
        int64_t v16 = result - 24; // 0x576670
        if (v16 != (int64_t)&g33) {
            int32_t * v17 = (int32_t *)(result - 8);
            int32_t v18 = *v17;
            *v17 = v18 - 1;
            if (v18 >= 0 != v18 != 0) {
                // 0x57675c
                function_5509d0(v16, &v9, v18);
            }
        }
        int64_t v19 = *(int64_t *)(result - 24); // 0x57668f
        uint64_t v20 = v19 + 1; // 0x57669d
        if (v20 >= 0x1fffffffffffffff) {
            // 0x5767f2
            function_208a0();
            return result;
        }
        int64_t v21 = 4 * v20; // 0x5766aa
        int64_t v22 = function_4eec00(v21, a1); // 0x5766b1
        function_54ff00(&result, v22, v19, 0);
        *(int32_t *)(v21 - 4 + v22) = 0;
        *v5 = v22;
        *(int64_t *)(a2 + 64) = v19;
        int64_t v23 = result - 24; // 0x5766df
        if (v23 != (int64_t)&g33) {
            int32_t * v24 = (int32_t *)(result - 8);
            int32_t v25 = *v24;
            *v24 = v25 - 1;
            if (v25 >= 0 != v25 != 0) {
                // 0x57678c
                function_5509d0(v23, &v9, v25);
            }
        }
        int64_t result2 = __readfsqword(40) ^ v1; // 0x5766f1
        if (result2 == 0) {
            // 0x576700
            return result2;
        }
        // 0x5767cb
        __stack_chk_fail();
    }
    int64_t v26 = function_208a0(); // 0x5767d0
    if (result - 24 != *(int64_t *)0x848c20) {
        // 0x576700
        return result;
    }
    // 0x5767ea
    _Unwind_Resume((struct _Unwind_Exception *)v26);
    // 0x5767f2
    function_208a0();
    return result;
}

// Address range: 0x576a20 - 0x576d03
int64_t function_576a20(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x576a34
    char v2 = a1; // 0x576a4f
    *(char *)(a2 + 33) = v2;
    *(char *)(a2 + 34) = v2;
    int64_t * v3 = (int64_t *)(a2 + 16); // 0x576a69
    *v3 = 0;
    int32_t v4 = a1; // 0x576a71
    *(int32_t *)(a2 + 88) = v4;
    int64_t * v5 = (int64_t *)(a2 + 40); // 0x576a77
    *v5 = 0;
    int64_t * v6 = (int64_t *)(a2 + 56); // 0x576a7f
    *v6 = 0;
    int64_t * v7 = (int64_t *)(a2 + 72); // 0x576a8a
    *v7 = 0;
    *(char *)(a2 + 111) = 1;
    int64_t result; // bp-72, 0x576a20
    int64_t v8 = *(int64_t *)(result - 24); // 0x576aa2
    int64_t v9 = function_4eec00(v8 + 1, a1); // 0x576aaa
    function_547670(&result, v9, v8, 0);
    *(char *)(v9 + v8) = 0;
    *(int64_t *)(a2 + 24) = v8;
    *v3 = v9;
    int64_t v10 = result - 24; // 0x576adb
    int64_t v11; // bp-73, 0x576a20
    if (v10 != (int64_t)&g31) {
        // 0x576c20
        if (g24 == 0) {
            // 0x576d00
            return result;
        }
        int32_t * v12 = (int32_t *)(result - 8); // 0x576c33
        int32_t v13 = *v12; // 0x576c33
        *v12 = v13 - 1;
        if (v13 >= 0 != v13 != 0) {
            // 0x576c40
            function_547e30(v10, &v11, v13);
        }
    }
    int64_t v14 = *(int64_t *)(result - 24); // 0x576afa
    int64_t v15 = function_4eec00(v14 + 1, a1); // 0x576b02
    function_547670(&result, v15, v14, 0);
    *(char *)(v15 + v14) = 0;
    *v5 = v15;
    *(int64_t *)(a2 + 48) = v14;
    int64_t v16 = result - 24; // 0x576b2c
    if (v16 != (int64_t)&g31) {
        int32_t * v17 = (int32_t *)(result - 8);
        int32_t v18 = *v17;
        *v17 = v18 - 1;
        if (v18 >= 0 != v18 != 0) {
            // 0x576c70
            function_547e30(v16, &v11, v18);
        }
    }
    int64_t v19 = *(int64_t *)(result - 24); // 0x576b4b
    int64_t v20 = function_4eec00(v19 + 1, a1); // 0x576b53
    function_547670(&result, v20, v19, 0);
    *(char *)(v20 + v19) = 0;
    *v6 = v20;
    *(int64_t *)(a2 + 64) = v19;
    int64_t v21 = result - 24; // 0x576b7d
    if (v21 != (int64_t)&g31) {
        // 0x576c80
        if (g24 == 0) {
            // 0x576d00
            return result;
        }
        int32_t * v22 = (int32_t *)(result - 8); // 0x576c8f
        int32_t v23 = *v22; // 0x576c8f
        *v22 = v23 - 1;
        if (v23 >= 0 != v23 != 0) {
            // 0x576c9c
            function_547e30(v21, &v11, v23);
        }
    }
    int64_t v24 = *(int64_t *)(result - 24); // 0x576b9c
    int64_t v25 = function_4eec00(v24 + 1, a1); // 0x576ba4
    function_547670(&result, v25, v24, 0);
    *(char *)(v25 + v24) = 0;
    *v7 = v25;
    *(int64_t *)(a2 + 80) = v24;
    int64_t v26 = result - 24; // 0x576bce
    if (v26 == (int64_t)&g31) {
        // 0x576bdb
        *(int32_t *)(a2 + 92) = (int32_t)v26;
        *(int32_t *)(a2 + 96) = v4;
        return __readfsqword(40) ^ v1;
    }
    int32_t * v27 = (int32_t *)(result - 8);
    int32_t v28 = *v27;
    *v27 = v28 - 1;
    if (v28 >= 0 != v28 != 0) {
        // 0x576ccc
        function_547e30(v26, &v11, v28);
    }
    // 0x576bdb
    *(int32_t *)(a2 + 92) = (int32_t)v26;
    *(int32_t *)(a2 + 96) = v4;
    return __readfsqword(40) ^ v1;
}

// Address range: 0x576d70 - 0x577053
int64_t function_576d70(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x576d84
    char v2 = a1; // 0x576d9f
    *(char *)(a2 + 33) = v2;
    *(char *)(a2 + 34) = v2;
    int64_t * v3 = (int64_t *)(a2 + 16); // 0x576db9
    *v3 = 0;
    int32_t v4 = a1; // 0x576dc1
    *(int32_t *)(a2 + 88) = v4;
    int64_t * v5 = (int64_t *)(a2 + 40); // 0x576dc7
    *v5 = 0;
    int64_t * v6 = (int64_t *)(a2 + 56); // 0x576dcf
    *v6 = 0;
    int64_t * v7 = (int64_t *)(a2 + 72); // 0x576dda
    *v7 = 0;
    *(char *)(a2 + 111) = 1;
    int64_t result; // bp-72, 0x576d70
    int64_t v8 = *(int64_t *)(result - 24); // 0x576df2
    int64_t v9 = function_4eec00(v8 + 1, a1); // 0x576dfa
    function_547670(&result, v9, v8, 0);
    *(char *)(v9 + v8) = 0;
    *(int64_t *)(a2 + 24) = v8;
    *v3 = v9;
    int64_t v10 = result - 24; // 0x576e2b
    int64_t v11; // bp-73, 0x576d70
    if (v10 != (int64_t)&g31) {
        // 0x576f70
        if (g24 == 0) {
            // 0x577050
            return result;
        }
        int32_t * v12 = (int32_t *)(result - 8); // 0x576f83
        int32_t v13 = *v12; // 0x576f83
        *v12 = v13 - 1;
        if (v13 >= 0 != v13 != 0) {
            // 0x576f90
            function_547e30(v10, &v11, v13);
        }
    }
    int64_t v14 = *(int64_t *)(result - 24); // 0x576e4a
    int64_t v15 = function_4eec00(v14 + 1, a1); // 0x576e52
    function_547670(&result, v15, v14, 0);
    *(char *)(v15 + v14) = 0;
    *v5 = v15;
    *(int64_t *)(a2 + 48) = v14;
    int64_t v16 = result - 24; // 0x576e7c
    if (v16 != (int64_t)&g31) {
        int32_t * v17 = (int32_t *)(result - 8);
        int32_t v18 = *v17;
        *v17 = v18 - 1;
        if (v18 >= 0 != v18 != 0) {
            // 0x576fc0
            function_547e30(v16, &v11, v18);
        }
    }
    int64_t v19 = *(int64_t *)(result - 24); // 0x576e9b
    int64_t v20 = function_4eec00(v19 + 1, a1); // 0x576ea3
    function_547670(&result, v20, v19, 0);
    *(char *)(v20 + v19) = 0;
    *v6 = v20;
    *(int64_t *)(a2 + 64) = v19;
    int64_t v21 = result - 24; // 0x576ecd
    if (v21 != (int64_t)&g31) {
        // 0x576fd0
        if (g24 == 0) {
            // 0x577050
            return result;
        }
        int32_t * v22 = (int32_t *)(result - 8); // 0x576fdf
        int32_t v23 = *v22; // 0x576fdf
        *v22 = v23 - 1;
        if (v23 >= 0 != v23 != 0) {
            // 0x576fec
            function_547e30(v21, &v11, v23);
        }
    }
    int64_t v24 = *(int64_t *)(result - 24); // 0x576eec
    int64_t v25 = function_4eec00(v24 + 1, a1); // 0x576ef4
    function_547670(&result, v25, v24, 0);
    *(char *)(v25 + v24) = 0;
    *v7 = v25;
    *(int64_t *)(a2 + 80) = v24;
    int64_t v26 = result - 24; // 0x576f1e
    if (v26 == (int64_t)&g31) {
        // 0x576f2b
        *(int32_t *)(a2 + 92) = (int32_t)v26;
        *(int32_t *)(a2 + 96) = v4;
        return __readfsqword(40) ^ v1;
    }
    int32_t * v27 = (int32_t *)(result - 8);
    int32_t v28 = *v27;
    *v27 = v28 - 1;
    if (v28 >= 0 != v28 != 0) {
        // 0x57701c
        function_547e30(v26, &v11, v28);
    }
    // 0x576f2b
    *(int32_t *)(a2 + 92) = (int32_t)v26;
    *(int32_t *)(a2 + 96) = v4;
    return __readfsqword(40) ^ v1;
}
