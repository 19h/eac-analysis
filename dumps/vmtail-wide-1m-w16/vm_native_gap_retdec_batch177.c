/*
 * Targeted RetDec C for native executable gap queue batch 177.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x50ec20-0x50eec0 rank=46 name=method.std::num_put_wchar_t__std::ostreambuf_iterator_wchar_t__std::char_traits_wchar_t_____.virtual_40 kind=native_discovered bytes=672 uncovered=672
 *   0x4b7490-0x4b772d rank=47 name=fcn.004b7490 kind=r2_discovered bytes=669 uncovered=669
 *   0x50e1e0-0x50e47b rank=48 name=fcn.0050e1e0 kind=r2_discovered bytes=667 uncovered=667
 *   0x55026-0x552bd rank=49 name=fcn.00055026 kind=r2_discovered bytes=663 uncovered=663
 *   0x4d23f0-0x4d2687 rank=50 name=fcn.004d23f0 kind=r2_discovered bytes=663 uncovered=663
 *   0x501a90-0x501d23 rank=51 name=method.std::basic_filebuf_wchar_t__std::char_traits_wchar_t___.virtual_16 kind=native_discovered bytes=659 uncovered=659
 *   0x558e30-0x5590c3 rank=52 name=method.std::num_put_char__std::ostreambuf_iterator_char__std::char_traits_char_____.virtual_40 kind=native_discovered bytes=659 uncovered=659
 *   0x4fd9ea-0x4fdc7c rank=53 name=fcn.004fd9ea kind=r2_discovered bytes=658 uncovered=658
 *   0x48f087-0x48f316 rank=54 name=fcn.0048f087 kind=r2_discovered bytes=655 uncovered=655
 *   0x4f0bc0-0x4f0e4f rank=55 name=fcn.004f0bc0 kind=r2_discovered bytes=655 uncovered=655
 *   0x4ffbf0-0x4ffe7e rank=56 name=method.std::basic_filebuf_char__std::char_traits_char___.virtual_16 kind=native_discovered bytes=654 uncovered=654
 *   0x4caa40-0x4cad5d rank=57 name=fcn.004caa40 kind=r2_discovered bytes=797 uncovered=651
 *   0x5826d0-0x58295b rank=58 name=fcn.005826d0 kind=r2_discovered bytes=651 uncovered=651
 *   0x558400-0x55868a rank=59 name=fcn.00558400 kind=r2_discovered bytes=650 uncovered=650
 *   0x4931c-0x495a4 rank=60 name=fcn.0004931c kind=r2_discovered bytes=648 uncovered=648
 *   0x48b48-0x48dcd rank=61 name=fcn.00048b48 kind=r2_discovered bytes=645 uncovered=645
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
extern int32_t RawDES_sbox8_at_594960;
extern int32_t RawDES_sbox6_at_594a60;
extern int32_t RawDES_sbox4_at_594b60;
extern int32_t RawDES_sbox2_at_594c60;
extern int32_t RawDES_sbox7_at_594d60;
extern int32_t RawDES_sbox5_at_594e60;
extern int32_t RawDES_sbox3_at_594f60;
extern int32_t RawDES_sbox1_at_595060;
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

int64_t function_24ded();
int64_t function_2508e();
int64_t function_254fe();
int64_t function_25622();
int64_t function_2562c();
int64_t function_256ba();
int64_t function_259ce();
int64_t function_25a28();
int64_t function_25e90();
int64_t function_27e1a();
int64_t function_35fcc();
int64_t function_36126();
int64_t function_36712();
int64_t function_36990();
int64_t function_36a32();
int64_t function_36b14();
int64_t function_3b222();
int64_t function_48b48(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48d50f();
int64_t function_48f087(int64_t a1, int64_t a2);
int64_t function_48f79e();
int64_t function_4931c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4a8c6();
int64_t function_4a93a();
int64_t function_4ad1a();
int64_t function_4ae3c();
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4b0ac0();
int64_t function_4b1590();
int64_t function_4b1680();
int64_t function_4b1ac0();
int64_t function_4b26c0();
int64_t function_4b3cf0();
int64_t function_4b7490(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4ba580();
int64_t function_4ba6b0();
int64_t function_4bb7d0();
int64_t function_4bbc70();
int64_t function_4bcac0();
int64_t function_4ca730();
int64_t function_4ca770();
int64_t function_4caa40(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4caa90(int64_t a1);
int64_t function_4cab30(int64_t a1, int64_t a2);
int64_t function_4d1ea0();
int64_t function_4d23f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4ea04();
int64_t function_4ee38();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f0bc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4f15a0();
int64_t function_4f1770();
int64_t function_4f658();
int64_t function_4f6a0();
int64_t function_4f71a();
int64_t function_4f9c0();
int64_t function_4fa50();
int64_t function_4fb7c();
int64_t function_4fc50();
int64_t function_4fd892();
int64_t function_4fd9b0();
int64_t function_4fd9ba();
int64_t function_4fd9d4();
int64_t function_4fd9ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4ff460();
int64_t function_4ffbf0(int64_t a1, int64_t a2);
int64_t function_5012d0();
int64_t function_501a90(int64_t a1, int64_t a2);
int64_t function_50b1c0();
int64_t function_50c700();
int64_t function_50cd00();
int64_t function_50cf10();
int64_t function_50cf40();
int64_t function_50d000();
int64_t function_50e0e0();
int64_t function_50e1e0(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_50e970();
int64_t function_50ec20(void);
int64_t function_50ec30(int64_t a1);
int64_t function_50ec50(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_50ee90(void);
int64_t function_50eea0(int64_t a1);
int64_t function_5423f0();
int64_t function_542590();
int64_t function_54878();
int64_t function_548b0();
int64_t function_549920();
int64_t function_55026(int64_t a1, int64_t a2, int64_t a3);
int64_t function_555410();
int64_t function_556930();
int64_t function_556f00();
int64_t function_5571e0();
int64_t function_557210();
int64_t function_5572d0();
int64_t function_558300();
int64_t function_558400(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_558b90();
int64_t function_558e30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_558e40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_558e70(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_5590a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_55c6e();
int64_t function_573fe();
int64_t function_581610();
int64_t function_5822c0();
int64_t function_5826d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5f43e();

// Address range: 0x48b48 - 0x48dcd
int64_t function_48b48(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x48b5c
    char * v2 = (char *)&g19; // bp-80, 0x48b7f
    char * v3 = (char *)&g19; // bp-72, 0x48b84
    int64_t v4 = function_4ea04(a2); // 0x48b89
    int64_t * v5 = (int64_t *)v4; // 0x48b91
    int64_t v6 = *v5; // 0x48b91
    int64_t * v7 = (int64_t *)(v4 + 8); // 0x48b94
    int64_t v8; // 0x48b48
    int64_t v9; // 0x48b48
    int64_t v10; // 0x48b48
    int64_t v11; // 0x48b48
    int64_t v12; // 0x48b48
    uint64_t v13; // 0x48d2d
    if (*v7 - v6 <= 15) {
        // branch -> 0x48d99
    } else {
        int64_t v14 = a1 + (int64_t)&g8;
        v9 = v6;
        v12 = 0;
        v10 = a3;
        while (true) {
          lab_0x48bb2:
            // 0x48bb2
            v11 = v10;
            int64_t v15 = 16 * v12 + v9; // 0x48bbc
            function_4a8c6((int64_t *)&v2, v15 + 8);
            char * v16 = (char *)v15; // 0x48bc8
            int64_t v17 = *v16 != 115 ? (int64_t)": " : (int64_t)": '"; // 0x48bdd
            function_4a93a((int64_t *)&v2, v17);
            if (*v16 != 112) {
                // 0x48d02
                v8 = function_4ee38(v15, v11, (int64_t *)&v3);
            } else {
                int64_t v18 = function_4f9c0(v14, *(int16_t *)v11); // 0x48c09
                int64_t v19 = 0; // 0x48c1a
                if (v18 != 0) {
                    // 0x48c1c
                    v19 = *(int64_t *)v18;
                    function_4fa50(v14, v18);
                }
                // 0x48c34
                function_36a32((int64_t *)&v3, 32, 0);
                if (g18 >= 0) {
                    int64_t v20 = (int64_t)v3 - 24; // 0x48c58
                    if (v20 != (int64_t)g12) {
                        // 0x48c65
                        if ((char)function_25622(v20) != 0) {
                            // 0x48c6e
                            function_25e90((int64_t *)&v3, 0, 0, 0);
                        }
                        // 0x48c7c
                        g18 = -1;
                    }
                }
                int64_t v21 = function_48d50f((int64_t)v3, g16, "%p", 0x100000000 * v19 >> 32); // 0x48ca0
                if ((int32_t)v21 < 1) {
                    // 0x48cb8
                    function_3b222((int64_t *)&v3, g16, 1, "basic_string::_M_replace_aux");
                    function_25e90((int64_t *)&v3, 0, (int32_t)g16, 1);
                    *v3 = 48;
                    v8 = 2;
                } else {
                    // 0x48ca9
                    function_36a32((int64_t *)&v3, 0x100000000 * v21 >> 32, 0);
                    v8 = 2;
                }
            }
            // 0x48d13
            function_4a8c6((int64_t *)&v2, (int64_t)&v3);
            if (*v16 != 115) {
                goto lab_0x48d6f;
            } else {
                // 0x48d24
                v13 = g16 + 1;
                if (v13 > g17) {
                    // 0x48d37
                    function_259ce((int64_t *)&v2, v13);
                    goto lab_0x48d51;
                } else {
                    // 0x48d44
                    if ((char)function_25622((int64_t)v2 - 24) != 0) {
                        // 0x48d37
                        function_259ce((int64_t *)&v2, v13);
                        goto lab_0x48d51;
                    } else {
                        goto lab_0x48d51;
                    }
                }
            }
        }
    }
  lab_0x48d99:
    // 0x48d99
    function_2508e((int64_t *)&v3);
    function_2508e((int64_t *)&v2);
    int64_t result = 0; // 0x48db7
    if (v1 != __readfsqword(40)) {
        // 0x48db9
        __stack_chk_fail();
        result = (int64_t)&g21;
    }
    // 0x48dbe
    return result;
  lab_0x48d6f:;
    int64_t v22 = *v5; // 0x48d73
    int64_t v23 = *v7 - v22 >> 4;
    int64_t v24 = v12 + 1; // 0x48d7d
    int64_t v25 = v23; // 0x48d80
    int64_t v26 = v22; // 0x48d80
    if (v23 != v24) {
        // 0x48d82
        function_4a93a((int64_t *)&v2, (int64_t)", ");
        int64_t v27 = *v5;
        v25 = *v7 - v27 >> 4;
        v26 = v27;
    }
    // 0x48d91
    v9 = v26;
    v12 = v24;
    v10 = v8 + v11;
    if (v24 >= v25) {
        // break -> 0x48d99
        goto lab_0x48d99;
    }
    goto lab_0x48bb2;
  lab_0x48d51:
    // 0x48d51
    *(char *)(g16 + (int64_t)v2) = 39;
    function_2562c(&g16, v13, g16);
    goto lab_0x48d6f;
}

// Address range: 0x4931c - 0x495a4
int64_t function_4931c(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x49330
    int64_t v2 = a1 + (int64_t)&g8; // 0x49343
    int64_t v3 = a2; // bp-80, 0x49357
    int64_t v4; // bp-96, 0x4931c
    if ((char)function_4fc50(v2, 2, &v3, &v4) != 0) {
        int64_t v5 = 0; // bp-120, 0x49391
        int64_t v6 = a1 + 40; // 0x493b0
        int64_t v7 = function_4ae3c(v6); // 0x493bc
        uint64_t v8 = function_4f71a(v4); // 0x493c8
        uint64_t v9 = *(int64_t *)(v7 + 24); // 0x493cd
        uint64_t v10 = v9 > v8 ? v8 : v9; // 0x493d4
        int64_t v11; // 0x4931c
        int64_t v12 = function_4f71a(v11); // 0x493dc
        if (v12 != 0 && v10 != 0) {
            // 0x493f6
            if (*(int64_t *)(function_4ae3c(v6) + 16) <= v10) {
                int64_t v13 = v10 - 1; // 0x49409
                int64_t v14 = function_4f658(v4, v13); // 0x49414
                int64_t v15 = function_4f658(v11, v12 - 1); // 0x49423
                function_27e1a(&v5, 232 * v10 | 4);
                int32_t v16 = v10; // bp-140, 0x49440
                int64_t * v17 = (int64_t *)(v14 + 8);
                int64_t * v18 = (int64_t *)(v11 + 80);
                bool v19; // 0x4931c
                int64_t * v20 = (int64_t *)(v15 + (v19 ? -126 : 126));
                int64_t v21 = v13;
                __asm_rep_movsb_memcpy((char *)v14, (char *)function_4f658(v4, v21), 126);
                uint64_t v22 = *v17; // 0x4946a
                int64_t v23; // bp-136, 0x4931c
                if (v22 >= *v18) {
                    // 0x49486
                    __asm_rep_movsb_memcpy((char *)v15, (char *)function_4f6a0(v11, v15, v22, 0), 126);
                    v23 = *v17;
                    function_36126(&v5, 0, &v23, &v5);
                    function_36126(&v5, 0, (int64_t *)(v14 + 18), (int64_t *)(v14 + 126));
                    function_36126(&v5, 0, (int64_t *)(v15 + 18), v20);
                } else {
                    // 0x49474
                    v16--;
                }
                int64_t v24 = v21 - 1; // 0x4947b
                while (v21 != 0) {
                    // 0x49451
                    v21 = v24;
                    __asm_rep_movsb_memcpy((char *)v14, (char *)function_4f658(v4, v21), 126);
                    v22 = *v17;
                    if (v22 >= *v18) {
                        // 0x49486
                        __asm_rep_movsb_memcpy((char *)v15, (char *)function_4f6a0(v11, v15, v22, 0), 126);
                        v23 = *v17;
                        function_36126(&v5, 0, &v23, &v5);
                        function_36126(&v5, 0, (int64_t *)(v14 + 18), (int64_t *)(v14 + 126));
                        function_36126(&v5, 0, (int64_t *)(v15 + 18), v20);
                    } else {
                        // 0x49474
                        v16--;
                    }
                    // 0x49478
                    v24 = v21 - 1;
                }
                // 0x4950c
                if (v16 != 0) {
                    // 0x49514
                    if (*(int64_t *)(function_4ae3c(v6) + 16) <= (int64_t)v16) {
                        // 0x49524
                        function_36126(&v5, v5, (int64_t *)&v16, &v23);
                        function_4ad1a(v6, 13, &v5);
                        *v18 = *(int64_t *)(a1 + (int64_t)&g10);
                    }
                }
            }
        }
        // 0x4955c
        function_4fb7c(v2, 2, (int64_t)&v4);
        function_254fe(&v5);
    }
    int64_t result = 0; // 0x4958b
    if (v1 != __readfsqword(40)) {
        // 0x4958d
        __stack_chk_fail();
        result = (int64_t)&g21;
    }
    // 0x49592
    return result;
}

// Address range: 0x55026 - 0x552bd
int64_t function_55026(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x55037
    int64_t v2 = 7; // 0x55052
    if (a2 != 0) {
        int32_t * v3 = (int32_t *)(a2 + (int64_t)&g6); // 0x55058
        v2 = 7;
        if (*v3 != 0) {
            // 0x55068
            function_54878(a3);
            v2 = 0;
            if (*v3 != 0) {
                int64_t * v4 = (int64_t *)(a3 + 8);
                int64_t v5 = a2 + (int64_t)&g7; // 0x55026
                int64_t v6 = 0; // 0x55286
                int64_t v7; // bp-648, 0x55026
                __asm_rep_stosd_memset((char *)&v7, 0, 146);
                v7 = *(int64_t *)v5;
                int128_t v8 = __asm_movups(*(int128_t *)(v5 + (int64_t)"GNU")); // 0x550b9
                int64_t v9; // bp-636, 0x55026
                __asm_rep_movsd_memcpy((char *)&v9, (char *)(v5 + 12), 128);
                int128_t v10; // 0x55026
                __asm_movups_133(v10, v8);
                int128_t v11 = *(int128_t *)(v5 + (int64_t)&g2); // 0x550d6
                __asm_movups_133(v10, __asm_movups(v11));
                int64_t v12 = v5 + (int64_t)&g4; // 0x550f4
                int32_t * v13 = (int32_t *)(v5 + (int64_t)&g3); // 0x5510c
                int64_t v14 = v12; // 0x55116
                char * v15; // 0x55026
                char * v16 = v15; // 0x55116
                char * v17 = v15; // 0x55116
                int64_t v18 = 0; // 0x55116
                int64_t v19; // 0x55026
                int64_t v20; // 0x55026
                int64_t v21; // bp-680, 0x55026
                char * v22; // 0x55026
                char * v23; // 0x55026
                int64_t v24; // bp-88, 0x55026
                int64_t v25; // 0x55026
                int64_t v26; // 0x55026
                int64_t v27; // 0x55146
                int64_t v28; // 0x5517e
                int128_t v29; // 0x55185
                int128_t v30; // 0x5518e
                int64_t v31; // 0x5510c
                if (*v13 != 0) {
                    v22 = v16;
                    v26 = (int64_t)v22;
                    __asm_rep_stosd_memset((char *)&v21, 0, 8);
                    if (v25 == v26) {
                        // 0x55151
                        function_548b0(&v24);
                        v23 = v22;
                    } else {
                        // 0x5513c
                        __asm_rep_stosd_memset(v22, 0, 8);
                        v27 = v26 + 32;
                        v19 = v27;
                        v23 = (char *)v27;
                    }
                    // 0x55176
                    v28 = 1;
                    v29 = __asm_movups(*(int128_t *)v14);
                    __asm_movups_133(*(int128_t *)(v19 - 32), v29);
                    v30 = __asm_movups(*(int128_t *)(v14 + 16));
                    __asm_movups_133(*(int128_t *)(v19 - 16), v30);
                    v31 = (int64_t)*v13;
                    v20 = v28;
                    v14 += 32;
                    v17 = v23;
                    v18 = v31;
                    while (v28 < v31) {
                        // 0x5511c
                        v22 = v23;
                        v26 = (int64_t)v22;
                        __asm_rep_stosd_memset((char *)&v21, 0, 8);
                        if (v25 == v26) {
                            // 0x55151
                            function_548b0(&v24);
                            v23 = v22;
                        } else {
                            // 0x5513c
                            __asm_rep_stosd_memset(v22, 0, 8);
                            v27 = v26 + 32;
                            v19 = v27;
                            v23 = (char *)v27;
                        }
                        // 0x55176
                        v28 = v20 + 1;
                        v29 = __asm_movups(*(int128_t *)v14);
                        __asm_movups_133(*(int128_t *)(v19 - 32), v29);
                        v30 = __asm_movups(*(int128_t *)(v14 + 16));
                        __asm_movups_133(*(int128_t *)(v19 - 16), v30);
                        v31 = (int64_t)*v13;
                        v20 = v28;
                        v14 += 32;
                        v17 = v23;
                        v18 = v31;
                    }
                }
                int64_t v32 = 0; // bp-696, 0x551a1
                int64_t v33 = 0; // bp-688, 0x551aa
                int64_t v34 = function_4efd30(&g5); // 0x551b3
                function_573fe(v34, &v7);
                int64_t v35 = 0; // bp-704, 0x551cb
                int64_t v36 = function_4efd30((int64_t *)32); // 0x551d9
                int64_t v37 = v33; // 0x551e8
                *(int64_t *)(v36 + 8) = 0x100000001;
                *(int64_t *)(v36 + 24) = v34;
                v33 = v36;
                v32 = v34;
                *(int64_t *)v36 = (int64_t)&g11;
                v35 = v37;
                function_35fcc(&v35);
                int64_t v38 = *v4; // 0x55218
                int64_t * v39; // 0x55227
                int64_t v40; // 0x55237
                if (v38 == *(int64_t *)(a3 + 16)) {
                    // 0x55258
                    function_55c6e(a3, v38, &v32);
                } else {
                    // 0x55222
                    v39 = (int64_t *)(v38 + 8);
                    *v39 = 0;
                    *(int64_t *)v38 = v32;
                    v40 = v33;
                    v33 = 0;
                    v32 = 0;
                    *v39 = v40;
                    *v4 = v38 + 16;
                }
                // 0x55263
                function_35fcc(&v33);
                if (v24 != 0) {
                    // 0x55279
                    function_4eeb50(v24);
                }
                // 0x5527e
                v6++;
                v5 = 32 * v18 + v12;
                v15 = v17;
                v2 = 0;
                while (v6 < (int64_t)*v3) {
                    // 0x5508e
                    __asm_rep_stosd_memset((char *)&v7, 0, 146);
                    v7 = *(int64_t *)v5;
                    v8 = __asm_movups(*(int128_t *)(v5 + (int64_t)"GNU"));
                    __asm_rep_movsd_memcpy((char *)&v9, (char *)(v5 + 12), 128);
                    __asm_movups_133(v10, v8);
                    v11 = *(int128_t *)(v5 + (int64_t)&g2);
                    __asm_movups_133(v10, __asm_movups(v11));
                    v12 = v5 + (int64_t)&g4;
                    v13 = (int32_t *)(v5 + (int64_t)&g3);
                    v14 = v12;
                    v16 = v15;
                    v17 = v15;
                    v18 = 0;
                    if (*v13 != 0) {
                        v22 = v16;
                        v26 = (int64_t)v22;
                        __asm_rep_stosd_memset((char *)&v21, 0, 8);
                        if (v25 == v26) {
                            // 0x55151
                            function_548b0(&v24);
                            v23 = v22;
                        } else {
                            // 0x5513c
                            __asm_rep_stosd_memset(v22, 0, 8);
                            v27 = v26 + 32;
                            v19 = v27;
                            v23 = (char *)v27;
                        }
                        // 0x55176
                        v28 = 1;
                        v29 = __asm_movups(*(int128_t *)v14);
                        __asm_movups_133(*(int128_t *)(v19 - 32), v29);
                        v30 = __asm_movups(*(int128_t *)(v14 + 16));
                        __asm_movups_133(*(int128_t *)(v19 - 16), v30);
                        v31 = (int64_t)*v13;
                        v20 = v28;
                        v14 += 32;
                        v17 = v23;
                        v18 = v31;
                        while (v28 < v31) {
                            // 0x5511c
                            v22 = v23;
                            v26 = (int64_t)v22;
                            __asm_rep_stosd_memset((char *)&v21, 0, 8);
                            if (v25 == v26) {
                                // 0x55151
                                function_548b0(&v24);
                                v23 = v22;
                            } else {
                                // 0x5513c
                                __asm_rep_stosd_memset(v22, 0, 8);
                                v27 = v26 + 32;
                                v19 = v27;
                                v23 = (char *)v27;
                            }
                            // 0x55176
                            v28 = v20 + 1;
                            v29 = __asm_movups(*(int128_t *)v14);
                            __asm_movups_133(*(int128_t *)(v19 - 32), v29);
                            v30 = __asm_movups(*(int128_t *)(v14 + 16));
                            __asm_movups_133(*(int128_t *)(v19 - 16), v30);
                            v31 = (int64_t)*v13;
                            v20 = v28;
                            v14 += 32;
                            v17 = v23;
                            v18 = v31;
                        }
                    }
                    // 0x5519c
                    v32 = 0;
                    v33 = 0;
                    v34 = function_4efd30(&g5);
                    function_573fe(v34, &v7);
                    v35 = 0;
                    v36 = function_4efd30((int64_t *)32);
                    v37 = v33;
                    *(int64_t *)(v36 + 8) = 0x100000001;
                    *(int64_t *)(v36 + 24) = v34;
                    v33 = v36;
                    v32 = v34;
                    *(int64_t *)v36 = (int64_t)&g11;
                    v35 = v37;
                    function_35fcc(&v35);
                    v38 = *v4;
                    if (v38 == *(int64_t *)(a3 + 16)) {
                        // 0x55258
                        function_55c6e(a3, v38, &v32);
                    } else {
                        // 0x55222
                        v39 = (int64_t *)(v38 + 8);
                        *v39 = 0;
                        *(int64_t *)v38 = v32;
                        v40 = v33;
                        v33 = 0;
                        v32 = 0;
                        *v39 = v40;
                        *v4 = v38 + 16;
                    }
                    // 0x55263
                    function_35fcc(&v33);
                    if (v24 != 0) {
                        // 0x55279
                        function_4eeb50(v24);
                    }
                    // 0x5527e
                    v6++;
                    v5 = 32 * v18 + v12;
                    v15 = v17;
                    v2 = 0;
                }
            }
        }
    }
    int64_t result = v2; // 0x552a4
    if (v1 != __readfsqword(40)) {
        // 0x552a6
        __stack_chk_fail();
        result = (int64_t)&g21;
    }
    // 0x552ab
    return result;
}

// Address range: 0x48f087 - 0x48f316
int64_t function_48f087(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x48f09e
    int64_t * v2 = (int64_t *)(a2 + 8); // 0x48f0ae
    int64_t v3; // 0x48f087
    int64_t v4; // 0x48f087
    int64_t v5; // 0x48f087
    int64_t v6; // 0x48f087
    int64_t v7; // 0x48f087
    int64_t v8; // bp-104, 0x48f087
    int64_t v9; // bp-80, 0x48f087
    int64_t v10; // bp-88, 0x48f087
    int32_t v11; // bp-96, 0x48f087
    int64_t v12; // 0x48f087
    if (*v2 != a2) {
        // 0x48f0b8
        int64_t v13; // bp-72, 0x48f087
        int64_t v14 = (int64_t)&v13; // 0x48f0d1
        int64_t v15 = (int64_t)&v11;
        int64_t v16 = (int64_t)&v10;
        v12 = (int64_t)&v9;
        v3 = a2;
        v6 = a2;
        while (true) {
          lab_0x48f0b8:
            // 0x48f0b8
            v4 = v3;
            int64_t v17 = function_48d50f(v14, 8, "{%u}", v4 - v6 >> 3); // 0x48f0d8
            int64_t v18 = function_24ded(&v13); // 0x48f0e2
            int64_t v19 = function_36990(a1, &v13, (int32_t)"{%u}" ^ (int32_t)"{%u}", v18); // 0x48f0f2
            v7 = v14;
            if (v19 == -1) {
                goto lab_0x48f2e9;
            } else {
                // 0x48f104
                function_36712(&v10, a1, (0x100000000 * v17 >> 32) + v19, -1);
                function_36712(&v8, a1, 0, v19);
                int64_t * v20 = (int64_t *)function_4a8c6(&v8, v4); // 0x48f14c
                int64_t v21 = *v20; // 0x48f14c
                v11 = v21;
                *v20 = (int64_t)&g19;
                int64_t v22 = 0x100000000 * v21 >> 32; // 0x48f165
                int64_t v23 = *(int64_t *)(v22 - 24); // 0x48f16f
                int64_t v24 = v10 - 24; // 0x48f173
                int64_t v25 = *(int64_t *)v24; // 0x48f173
                uint64_t v26 = v25 + v23; // 0x48f177
                if (v26 > *(int64_t *)(v22 - 16)) {
                    // 0x48f185
                    if (v26 > *(int64_t *)(v10 - 16)) {
                        // 0x48f292
                        v5 = function_4a8c6((int64_t *)&v11, v16);
                        goto lab_0x48f29f;
                    } else {
                        int64_t v27 = function_36b14(v15, 0, "basic_string::insert", v22, v25); // 0x48f1a6
                        function_36b14(v16, 0, "basic_string::insert", v22, v25);
                        if (v23 > 0x3ffffffffffffff9 - v25) {
                            // 0x48f1de
                            function_542590("basic_string::insert");
                        }
                        int64_t v28 = 0x100000000 * (v27 + v22) >> 32; // 0x48f1ea
                        if ((char)function_5f43e(&v10, v28) == 0) {
                            // 0x48f212
                            if ((char)function_25622(v24) != 0) {
                                // 0x48f1fa
                                v5 = function_48f79e(&v10, 0, 0, v28, v23);
                                goto lab_0x48f29f;
                            } else {
                                int64_t v29 = v28 - v10; // 0x48f22a
                                function_25e90(&v10, 0, 0, (int32_t)v23);
                                int64_t v30 = v10; // 0x48f237
                                int64_t v31 = v30 + v29; // 0x48f23f
                                int64_t v32 = v31 + v23; // 0x48f243
                                int64_t v33 = v23; // 0x48f24a
                                int64_t v34 = v31; // 0x48f24a
                                int64_t v35 = v30; // 0x48f24a
                                if (v30 < v32) {
                                    // 0x48f24c
                                    v33 = v23;
                                    v34 = v32;
                                    v35 = v30;
                                    if (v30 > v31) {
                                        int64_t v36 = -v29; // 0x48f26c
                                        function_25a28(v30, v31, v36, v30);
                                        v33 = v29 + v23;
                                        v34 = v30 + v23;
                                        v35 = (0x100000000 * v36 >> 32) + v30;
                                    }
                                }
                                // 0x48f257
                                function_25a28(v35, v34, v33, v30);
                                v5 = v16;
                                goto lab_0x48f29f;
                            }
                        } else {
                            // 0x48f1fa
                            v5 = function_48f79e(&v10, 0, 0, v28, v23);
                            goto lab_0x48f29f;
                        }
                    }
                } else {
                    // 0x48f292
                    v5 = function_4a8c6((int64_t *)&v11, v16);
                    goto lab_0x48f29f;
                }
            }
        }
    }
  lab_0x48f2f2:;
    int64_t result = 0; // 0x48f300
    if (v1 != __readfsqword(40)) {
        // 0x48f302
        __stack_chk_fail();
        result = (int64_t)&g21;
    }
    // 0x48f307
    return result;
  lab_0x48f2e9:;
    int64_t v37 = v4 + 8; // 0x48f2e9
    v3 = v37;
    v6 = v7;
    if (v37 == *v2) {
        // break -> 0x48f2f2
        goto lab_0x48f2f2;
    }
    goto lab_0x48f0b8;
  lab_0x48f29f:;
    int64_t * v38 = (int64_t *)v5; // 0x48f29f
    v9 = *v38;
    *v38 = (int64_t)&g19;
    function_256ba(a1, &v9);
    function_2508e(&v9);
    function_2508e((int64_t *)&v11);
    function_2508e(&v8);
    function_2508e(&v10);
    v7 = v12;
    goto lab_0x48f2e9;
}

// Address range: 0x4b7490 - 0x4b772d
// Used cryptographic patterns:
//  - RawDES_sbox1 (32-bit, little endian)
//  - RawDES_sbox2 (32-bit, little endian)
//  - RawDES_sbox3 (32-bit, little endian)
//  - RawDES_sbox4 (32-bit, little endian)
//  - RawDES_sbox5 (32-bit, little endian)
//  - RawDES_sbox6 (32-bit, little endian)
//  - RawDES_sbox7 (32-bit, little endian)
//  - RawDES_sbox8 (32-bit, little endian)
int64_t function_4b7490(int64_t a1, int64_t a2, int64_t a3) {
    unsigned char v1 = *(char *)(a2 + 5); // 0x4b74d5
    unsigned char v2 = *(char *)(a2 + 1); // 0x4b74de
    unsigned char v3 = *(char *)(a2 + 3); // 0x4b74ed
    unsigned char v4 = *(char *)(a2 + 2); // 0x4b74f3
    int64_t v5; // 0x4b7490
    uint32_t v6 = 0x10000 * (int32_t)v2 | 0x1000000 * (int32_t)v5 | (int32_t)v3 | 256 * (int32_t)v4; // 0x4b74fa
    unsigned char v7 = *(char *)(a2 + 4); // 0x4b74fc
    unsigned char v8 = *(char *)(a2 + 7); // 0x4b7505
    unsigned char v9 = *(char *)(a2 + 6); // 0x4b750b
    int32_t v10 = 0x1000000 * (int32_t)v7 | 0x10000 * (int32_t)v1 | (int32_t)v8 | 256 * (int32_t)v9; // 0x4b7512
    int32_t v11 = (v10 ^ v6 / 16) & 0xf0f0f0f; // 0x4b751b
    int32_t v12 = v11 ^ v10; // 0x4b7521
    uint32_t v13 = 16 * v11 ^ v6; // 0x4b7526
    int32_t v14 = (v13 / 0x10000 ^ v12) & (int32_t)&g20; // 0x4b7532
    uint32_t v15 = v14 ^ v12; // 0x4b7539
    int32_t v16 = 0x10000 * v14 ^ v13; // 0x4b7542
    int32_t v17 = (v15 / 4 ^ v16) & 0x33333333; // 0x4b754b
    int32_t v18 = v17 ^ v16; // 0x4b7557
    uint32_t v19 = 4 * v17 ^ v15; // 0x4b755a
    int32_t v20 = (v19 / 256 ^ v18) & 0xff00ff; // 0x4b7564
    int32_t v21 = v20 ^ v18; // 0x4b7569
    int32_t v22 = 256 * v20 ^ v19; // 0x4b756f
    int32_t v23 = 2 * v22; // 0x4b7571
    int32_t v24 = (v23 ^ v21) & -0x55555556; // 0x4b7578
    int32_t v25 = v24 ^ v21; // 0x4b757e
    int64_t v26 = a1; // 0x4b7592
    int32_t v27 = 2 * v25 | (int32_t)(v25 < 0); // 0x4b7592
    uint32_t v28 = v24 ^ (v23 | (int32_t)(v22 < 0));
    uint32_t v29 = *(int32_t *)(v26 + 4) ^ (v28 / 16 | 0x10000000 * v28); // 0x4b759f
    uint32_t v30 = *(int32_t *)v26 ^ v28; // 0x4b75a2
    int32_t v31 = *(int32_t *)((int64_t)(4 * v29 & 252) + (int64_t)&RawDES_sbox7_at_594d60); // 0x4b75b1
    int32_t v32 = *(int32_t *)((int64_t)(4 * v30 & 252) + (int64_t)&RawDES_sbox8_at_594960); // 0x4b75b5
    int32_t v33 = *(int32_t *)((int64_t)(v30 / 64 & 252) + (int64_t)&RawDES_sbox6_at_594a60); // 0x4b75c5
    int32_t v34 = *(int32_t *)((int64_t)(v30 / 0x4000 & 252) + (int64_t)&RawDES_sbox4_at_594b60); // 0x4b75da
    int32_t v35 = *(int32_t *)((int64_t)(v30 / 0x400000 & 252) + (int64_t)&RawDES_sbox2_at_594c60); // 0x4b75df
    int32_t v36 = *(int32_t *)((int64_t)(v29 / 64 & 252) + (int64_t)&RawDES_sbox5_at_594e60); // 0x4b75ea
    int32_t v37 = *(int32_t *)((int64_t)(v29 / 0x4000 & 252) + (int64_t)&RawDES_sbox3_at_594f60); // 0x4b75fc
    int32_t v38 = *(int32_t *)((int64_t)(v29 / 0x400000 & 252) + (int64_t)&RawDES_sbox1_at_595060); // 0x4b7600
    v27 = v31 ^ v27 ^ v32 ^ v33 ^ v34 ^ v35 ^ v36 ^ v37 ^ v38;
    uint32_t v39 = v27 ^ *(int32_t *)(v26 + 8); // 0x4b760a
    uint32_t v40 = (v27 / 16 | 0x10000000 * v27) ^ *(int32_t *)(v26 + 12); // 0x4b7616
    int32_t v41 = *(int32_t *)((int64_t)(4 * v39 & 252) + (int64_t)&RawDES_sbox8_at_594960); // 0x4b7620
    int32_t v42 = *(int32_t *)((int64_t)(v39 / 64 & 252) + (int64_t)&RawDES_sbox6_at_594a60); // 0x4b762d
    int32_t v43 = *(int32_t *)((int64_t)(v39 / 0x4000 & 252) + (int64_t)&RawDES_sbox4_at_594b60); // 0x4b763f
    int32_t v44 = *(int32_t *)((int64_t)(v39 / 0x400000 & 252) + (int64_t)&RawDES_sbox2_at_594c60); // 0x4b7643
    int32_t v45 = *(int32_t *)((int64_t)(4 * v40 & 252) + (int64_t)&RawDES_sbox7_at_594d60); // 0x4b764c
    int32_t v46 = *(int32_t *)((int64_t)(v40 / 64 & 252) + (int64_t)&RawDES_sbox5_at_594e60); // 0x4b7658
    int32_t v47 = *(int32_t *)((int64_t)(v40 / 0x4000 & 252) + (int64_t)&RawDES_sbox3_at_594f60); // 0x4b766a
    int32_t v48 = *(int32_t *)((int64_t)(v40 / 0x400000 & 252) + (int64_t)&RawDES_sbox1_at_595060); // 0x4b766e
    int32_t v49 = v41 ^ v28 ^ v42 ^ v43 ^ v44 ^ v45 ^ v46 ^ v47 ^ v48; // 0x4b766e
    while (a1 + 112 != v26) {
        // 0x4b7598
        v26 += 16;
        v28 = v49;
        v29 = *(int32_t *)(v26 + 4) ^ (v28 / 16 | 0x10000000 * v28);
        v30 = *(int32_t *)v26 ^ v28;
        v31 = *(int32_t *)((int64_t)(4 * v29 & 252) + (int64_t)&RawDES_sbox7_at_594d60);
        v32 = *(int32_t *)((int64_t)(4 * v30 & 252) + (int64_t)&RawDES_sbox8_at_594960);
        v33 = *(int32_t *)((int64_t)(v30 / 64 & 252) + (int64_t)&RawDES_sbox6_at_594a60);
        v34 = *(int32_t *)((int64_t)(v30 / 0x4000 & 252) + (int64_t)&RawDES_sbox4_at_594b60);
        v35 = *(int32_t *)((int64_t)(v30 / 0x400000 & 252) + (int64_t)&RawDES_sbox2_at_594c60);
        v36 = *(int32_t *)((int64_t)(v29 / 64 & 252) + (int64_t)&RawDES_sbox5_at_594e60);
        v37 = *(int32_t *)((int64_t)(v29 / 0x4000 & 252) + (int64_t)&RawDES_sbox3_at_594f60);
        v38 = *(int32_t *)((int64_t)(v29 / 0x400000 & 252) + (int64_t)&RawDES_sbox1_at_595060);
        v27 = v31 ^ v27 ^ v32 ^ v33 ^ v34 ^ v35 ^ v36 ^ v37 ^ v38;
        v39 = v27 ^ *(int32_t *)(v26 + 8);
        v40 = (v27 / 16 | 0x10000000 * v27) ^ *(int32_t *)(v26 + 12);
        v41 = *(int32_t *)((int64_t)(4 * v39 & 252) + (int64_t)&RawDES_sbox8_at_594960);
        v42 = *(int32_t *)((int64_t)(v39 / 64 & 252) + (int64_t)&RawDES_sbox6_at_594a60);
        v43 = *(int32_t *)((int64_t)(v39 / 0x4000 & 252) + (int64_t)&RawDES_sbox4_at_594b60);
        v44 = *(int32_t *)((int64_t)(v39 / 0x400000 & 252) + (int64_t)&RawDES_sbox2_at_594c60);
        v45 = *(int32_t *)((int64_t)(4 * v40 & 252) + (int64_t)&RawDES_sbox7_at_594d60);
        v46 = *(int32_t *)((int64_t)(v40 / 64 & 252) + (int64_t)&RawDES_sbox5_at_594e60);
        v47 = *(int32_t *)((int64_t)(v40 / 0x4000 & 252) + (int64_t)&RawDES_sbox3_at_594f60);
        v48 = *(int32_t *)((int64_t)(v40 / 0x400000 & 252) + (int64_t)&RawDES_sbox1_at_595060);
        v49 = v41 ^ v28 ^ v42 ^ v43 ^ v44 ^ v45 ^ v46 ^ v47 ^ v48;
    }
    int32_t v50 = v49 / 2 | 0x80000000 * v49; // 0x4b767d
    int32_t v51 = (v50 ^ v27) & -0x55555556; // 0x4b7689
    int32_t v52 = v51 ^ v50; // 0x4b7692
    uint32_t v53 = (v51 ^ v27) / 2 | 0x80000000 * v27; // 0x4b7694
    int32_t v54 = (v53 / 256 ^ v52) & 0xff00ff; // 0x4b76a0
    int32_t v55 = v54 ^ v52; // 0x4b76a8
    uint32_t v56 = 256 * v54 ^ v53; // 0x4b76ad
    int32_t v57 = (v56 / 4 ^ v55) & 0x33333333; // 0x4b76b7
    uint32_t v58 = v57 ^ v55; // 0x4b76bd
    int32_t v59 = 4 * v57 ^ v56; // 0x4b76c2
    int32_t v60 = (v58 / 0x10000 ^ v59) & (int32_t)&g20; // 0x4b76cb
    int32_t v61 = v60 ^ v59; // 0x4b76d1
    uint32_t v62 = 0x10000 * v60 ^ v58; // 0x4b76d6
    int32_t v63 = (v62 / 16 ^ v61) & 0xf0f0f0f; // 0x4b76df
    uint32_t v64 = v63 ^ v61; // 0x4b76e4
    uint32_t v65 = 16 * v63 ^ v62; // 0x4b76e9
    *(char *)(a3 + 7) = (char)v64;
    *(char *)(a3 + 3) = (char)v65;
    *(char *)a3 = (char)(v65 / 0x1000000);
    *(char *)(a3 + 1) = (char)(v65 / 0x10000);
    *(char *)(a3 + 4) = (char)(v64 / 0x1000000);
    *(char *)(a3 + 2) = (char)(v65 / 256);
    *(char *)(a3 + 5) = (char)(v64 / 0x10000);
    *(char *)(a3 + 6) = (char)(v64 / 256);
    return 0;
}

// Address range: 0x4caa40 - 0x4caa87
int64_t function_4caa40(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 328); // 0x4caa40
    if (v1 == 0) {
        // 0x4caa54
        return function_4ca770();
    }
    if (v1 == 1) {
        // 0x4caa78
        return function_4ca730();
    }
    // 0x4caa6d
    return 0xffffbf00;
}

// Address range: 0x4caa90 - 0x4cab22
int64_t function_4caa90(int64_t a1) {
    // 0x4caa90
    function_4b0890(a1 + 280);
    function_4b0890(a1 + 304);
    function_4b0890(a1 + 256);
    function_4b0890(a1 + 232);
    function_4b0890(a1 + 208);
    function_4b0890(a1 + 184);
    function_4b0890(a1 + 160);
    function_4b0890(a1 + 136);
    function_4b0890(a1 + 112);
    function_4b0890(a1 + 88);
    function_4b0890(a1 + 64);
    function_4b0890(a1 + 40);
    return function_4b0890(a1 + 16);
}

// Address range: 0x4cab30 - 0x4caca5
int64_t function_4cab30(int64_t a1, int64_t a2) {
    // 0x4cab30
    int64_t v1; // 0x4cab30
    *(int32_t *)a1 = (int32_t)v1;
    *(int64_t *)(a1 + 8) = *(int64_t *)(a2 + 8);
    int64_t v2 = function_4b0ac0(a1 + 16, a2 + 16); // 0x4cab50
    if ((int32_t)v2 != 0) {
        // 0x4cab59
        function_4caa90(a1);
        // 0x4cab69
        return v2 & 0xffffffff;
    }
    int64_t v3 = function_4b0ac0(a1 + 40, a2 + 40); // 0x4cab78
    if ((int32_t)v3 != 0) {
        // 0x4cab59
        function_4caa90(a1);
        // 0x4cab69
        return v3 & 0xffffffff;
    }
    int64_t v4 = function_4b0ac0(a1 + 64, a2 + 64); // 0x4cab89
    if ((int32_t)v4 != 0) {
        // 0x4cab59
        function_4caa90(a1);
        // 0x4cab69
        return v4 & 0xffffffff;
    }
    int64_t v5 = function_4b0ac0(a1 + 88, a2 + 88); // 0x4cab9a
    if ((int32_t)v5 != 0) {
        // 0x4cab59
        function_4caa90(a1);
        // 0x4cab69
        return v5 & 0xffffffff;
    }
    int64_t v6 = function_4b0ac0(a1 + 112, a2 + 112); // 0x4cabab
    if ((int32_t)v6 != 0) {
        // 0x4cab59
        function_4caa90(a1);
        // 0x4cab69
        return v6 & 0xffffffff;
    }
    int64_t v7 = function_4b0ac0(a1 + 136, a2 + 136); // 0x4cabc2
    if ((int32_t)v7 != 0) {
        // 0x4cab59
        function_4caa90(a1);
        // 0x4cab69
        return v7 & 0xffffffff;
    }
    int64_t v8 = function_4b0ac0(a1 + 160, a2 + 160); // 0x4cabd9
    if ((int32_t)v8 != 0) {
        // 0x4cab59
        function_4caa90(a1);
        // 0x4cab69
        return v8 & 0xffffffff;
    }
    int64_t v9 = function_4b0ac0(a1 + 184, a2 + 184); // 0x4cabf4
    if ((int32_t)v9 != 0) {
        // 0x4cab59
        function_4caa90(a1);
        // 0x4cab69
        return v9 & 0xffffffff;
    }
    int64_t v10 = function_4b0ac0(a1 + 208, a2 + 208); // 0x4cac0f
    if ((int32_t)v10 != 0) {
        // 0x4cab59
        function_4caa90(a1);
        // 0x4cab69
        return v10 & 0xffffffff;
    }
    int64_t v11 = function_4b0ac0(a1 + 232, a2 + 232); // 0x4cac2a
    if ((int32_t)v11 != 0) {
        // 0x4cab59
        function_4caa90(a1);
        // 0x4cab69
        return v11 & 0xffffffff;
    }
    int64_t v12 = function_4b0ac0(a1 + 256, a2 + 256); // 0x4cac45
    if ((int32_t)v12 != 0) {
        // 0x4cab59
        function_4caa90(a1);
        // 0x4cab69
        return v12 & 0xffffffff;
    }
    int64_t v13 = function_4b0ac0(a1 + 280, a2 + 280); // 0x4cac60
    if ((int32_t)v13 != 0) {
        // 0x4cab59
        function_4caa90(a1);
        // 0x4cab69
        return v13 & 0xffffffff;
    }
    int64_t result = function_4b0ac0(a1 + 304, a2 + 304); // 0x4cac7b
    if ((int32_t)result != 0) {
        // 0x4cab59
        function_4caa90(a1);
        // 0x4cab69
        return result & 0xffffffff;
    }
    // 0x4cac88
    *(int32_t *)(a1 + 328) = *(int32_t *)(a2 + 328);
    *(int32_t *)(a1 + 332) = *(int32_t *)(a2 + 332);
    // 0x4cab69
    return result;
}

// Address range: 0x4d23f0 - 0x4d2686
int64_t function_4d23f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4d23f0
    int64_t v1; // bp-136, 0x4d23f0
    function_4ba580(&v1);
    int64_t v2; // bp-264, 0x4d23f0
    function_4b0870(&v2);
    int64_t v3; // bp-232, 0x4d23f0
    function_4b0870(&v3);
    int64_t v4; // bp-200, 0x4d23f0
    function_4b0870(&v4);
    int64_t v5; // bp-168, 0x4d23f0
    int64_t result = function_4b0870(&v5); // 0x4d2459
    if (*(int64_t *)(a1 + 168) == 0) {
        // 0x4d2680
        return result;
    }
    int64_t v6 = 0xffffb200; // 0x4d247b
    if ((int32_t)function_4b1680(a5, 1) >= 0) {
        int64_t v7 = a1 + 152; // 0x4d247d
        v6 = 0xffffb200;
        if ((int32_t)function_4b1590(a5, v7) < 0) {
            // 0x4d2510
            v6 = 0xffffb200;
            if ((int32_t)function_4b1680(a6, 1) >= 0) {
                // 0x4d2525
                v6 = 0xffffb200;
                if ((int32_t)function_4b1590(a6, v7) < 0) {
                    int64_t v8 = function_4bbc70(a1, a4); // 0x4d253f
                    v6 = v8 & 0xffffffff;
                    if ((int32_t)v8 == 0) {
                        int64_t v9 = function_4d1ea0(a1, &v2, a2, a3); // 0x4d255f
                        v6 = v9 & 0xffffffff;
                        if ((int32_t)v9 == 0) {
                            int64_t v10 = function_4b3cf0(&v3, a6, v7); // 0x4d257b
                            v6 = v10 & 0xffffffff;
                            if ((int32_t)v10 == 0) {
                                int64_t v11 = function_4b1ac0(&v4, &v2, &v3); // 0x4d259a
                                v6 = v11 & 0xffffffff;
                                if ((int32_t)v11 == 0) {
                                    int64_t v12 = function_4b26c0(&v4, &v4, v7); // 0x4d25b6
                                    v6 = v12 & 0xffffffff;
                                    if ((int32_t)v12 == 0) {
                                        int64_t v13 = function_4b1ac0(&v5, (int64_t *)a5, &v3); // 0x4d25d3
                                        v6 = v13 & 0xffffffff;
                                        if ((int32_t)v13 == 0) {
                                            int64_t v14 = function_4b26c0(&v5, &v5, v7); // 0x4d25ef
                                            v6 = v14 & 0xffffffff;
                                            if ((int32_t)v14 == 0) {
                                                int64_t v15 = function_4bcac0(a1, &v1, &v4, a1 + 80, &v5, a4); // 0x4d261b
                                                v6 = v15 & 0xffffffff;
                                                if ((int32_t)v15 == 0) {
                                                    int64_t v16 = function_4bb7d0(&v1); // 0x4d2633
                                                    v6 = 0xffffb200;
                                                    if ((int32_t)v16 == 0) {
                                                        int64_t v17 = function_4b26c0(&v1, &v1, v7); // 0x4d264f
                                                        int64_t v18 = v17 & 0xffffffff; // 0x4d2656
                                                        v6 = v18;
                                                        if ((int32_t)v17 == 0) {
                                                            int64_t v19 = function_4b1590((int64_t)&v1, a5); // 0x4d266a
                                                            v6 = (int32_t)v19 != 0 ? 0xffffb200 : v18;
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
    // 0x4d249d
    function_4ba6b0(&v1);
    function_4b0890((int64_t)&v2);
    function_4b0890((int64_t)&v3);
    function_4b0890((int64_t)&v4);
    function_4b0890((int64_t)&v5);
    return v6 & 0xffffffff;
}

// Address range: 0x4f0bc0 - 0x4f0e49
int64_t function_4f0bc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4f0bc0
    *(int64_t *)(a2 + 8) = a3;
    *(int64_t *)(a2 + 16) = 0;
    *(int64_t *)(a2 + 24) = 0;
    *(int32_t *)a2 = 0;
    int64_t result; // 0x4f0bc0
    if ((char)a1 == 0) {
        // 0x4f0c60
        *(int64_t *)(a3 + 24) = a2;
        int64_t * v1 = (int64_t *)(a4 + 24); // 0x4f0c64
        if (*v1 == a3) {
            // 0x4f0c6a
            *v1 = a2;
        }
    } else {
        // 0x4f0be3
        *(int64_t *)(a3 + 16) = a2;
        if (a4 == a3 || *(int64_t *)(a4 + 16) == a3) {
            // 0x4f0e50
            return result;
        }
    }
    int64_t * v2 = (int64_t *)(a4 + 8); // 0x4f0c00
    int64_t v3 = *v2; // 0x4f0c00
    int64_t v4 = v3; // 0x4f0c07
    int64_t v5 = a2; // 0x4f0c07
    int64_t v6 = a2; // 0x4f0c07
    int64_t result2; // 0x4f0bc0
    if (v3 == a2) {
      lab_0x4f0c52_3:
        // 0x4f0c52
        *(int32_t *)v6 = 1;
        return result2;
    }
    int64_t v7; // 0x4f0bc0
    uint32_t result4; // 0x4f0c0d
    while (true) {
        int64_t v8 = v4; // 0x4f0cca
        int64_t v9 = v5;
        int64_t v10; // 0x4f0bc0
        int64_t * v11; // 0x4f0bc0
        int64_t v12; // 0x4f0c17
        int64_t * v13; // 0x4f0bc0
        int64_t * v14; // 0x4f0bc0
        int64_t v15; // 0x4f0c09
        int32_t * v16; // 0x4f0bc0
        while (true) {
            // 0x4f0c09
            v7 = v8;
            int64_t v17 = v9; // 0x4f0bc0
            while (true) {
                // 0x4f0c09
                v10 = v17;
                v14 = (int64_t *)(v10 + 8);
                v15 = *v14;
                v16 = (int32_t *)v15;
                result4 = *v16;
                if (result4 != 0) {
                    // break (via goto) -> 0x4f0dd0
                    goto lab_0x4f0dd0;
                }
                // 0x4f0c17
                v11 = (int64_t *)(v15 + 8);
                v12 = *v11;
                v13 = (int64_t *)(v12 + 16);
                int64_t v18 = *v13; // 0x4f0c1b
                while (v15 != v18) {
                    if (v18 == 0) {
                        // break (via goto) -> 0x4f0c70
                        goto lab_0x4f0c70_2;
                    }
                    int32_t * v19 = (int32_t *)v18; // 0x4f0c30
                    if (*v19 != 0) {
                        // break (via goto) -> 0x4f0c70
                        goto lab_0x4f0c70_2;
                    }
                    // 0x4f0c38
                    *v16 = 1;
                    *v19 = 1;
                    int32_t * v20 = (int32_t *)v12;
                    *v20 = 0;
                    int32_t * v21 = v20; // 0x4f0c50
                    int64_t result3 = v12; // 0x4f0c50
                    if (v12 == v7) {
                        // 0x4f0c52
                        *v21 = 1;
                        return result3;
                    }
                    v10 = v12;
                    v14 = (int64_t *)(v10 + 8);
                    v15 = *v14;
                    v16 = (int32_t *)v15;
                    result4 = *v16;
                    if (result4 != 0) {
                        // break (via goto) -> 0x4f0dd0
                        goto lab_0x4f0dd0;
                    }
                    // 0x4f0c17
                    v11 = (int64_t *)(v15 + 8);
                    v12 = *v11;
                    v13 = (int64_t *)(v12 + 16);
                    v18 = *v13;
                }
                int64_t v22 = *(int64_t *)(v12 + 24); // 0x4f0cd8
                if (v22 == 0) {
                    // break (via goto) -> 0x4f0d08
                    goto lab_0x4f0d08_2;
                }
                int32_t * v23 = (int32_t *)v22; // 0x4f0ce1
                if (*v23 != 0) {
                    // break (via goto) -> 0x4f0d08
                    goto lab_0x4f0d08_2;
                }
                // 0x4f0ce9
                *v16 = 1;
                *v23 = 1;
                *(int32_t *)v12 = 0;
                v17 = v12;
                result2 = v7;
                v6 = v7;
                if (v12 == v7) {
                    goto lab_0x4f0c52_3;
                }
            }
          lab_0x4f0c70_2:;
            int64_t * v24 = (int64_t *)(v15 + 16); // 0x4f0c70
            int32_t * v25 = v16; // 0x4f0c77
            int64_t v26 = v10; // 0x4f0c77
            if (*v24 == v10) {
                int64_t * v27 = (int64_t *)(v10 + 24); // 0x4f0d60
                int64_t v28 = *v27; // 0x4f0d60
                *v24 = v28;
                int64_t v29 = v12; // 0x4f0d6e
                if (v28 != 0) {
                    // 0x4f0d70
                    *(int64_t *)(v28 + 8) = v15;
                    v29 = *v11;
                }
                // 0x4f0d78
                *v14 = v29;
                if (v15 == *v2) {
                    // 0x4f0e40
                    *v2 = v10;
                } else {
                    int64_t v30 = *v11; // 0x4f0d86
                    result = v12;
                    if (v15 == *(int64_t *)(v30 + 24)) {
                        // 0x4f0e50
                        return result;
                    }
                    // 0x4f0d94
                    *(int64_t *)(v30 + 16) = v10;
                }
                // 0x4f0d98
                *v27 = v15;
                *v11 = v10;
                v25 = (int32_t *)v10;
                v26 = v15;
            }
            // 0x4f0c7d
            v9 = v26;
            *v25 = 1;
            int64_t * v31 = (int64_t *)(v12 + 24); // 0x4f0c83
            int64_t v32 = *v31; // 0x4f0c83
            *(int32_t *)v12 = 0;
            int64_t * v33 = (int64_t *)(v32 + 16); // 0x4f0c8d
            int64_t v34 = *v33; // 0x4f0c8d
            *v31 = v34;
            if (v34 != 0) {
                // 0x4f0c9a
                *(int64_t *)(v34 + 8) = v12;
            }
            int64_t * v35 = (int64_t *)(v12 + 8); // 0x4f0c9e
            *(int64_t *)(v32 + 8) = *v35;
            if (v12 == *v2) {
                // 0x4f0db0
                *v2 = v32;
            } else {
                int64_t v36 = *v35; // 0x4f0cb0
                int64_t * v37 = (int64_t *)(v36 + 16); // 0x4f0cb4
                if (v12 == *v37) {
                    // 0x4f0dc0
                    *v37 = v32;
                } else {
                    // 0x4f0cbe
                    *(int64_t *)(v36 + 24) = v32;
                }
            }
            // 0x4f0cc2
            *v33 = v12;
            *v35 = v32;
            v8 = *v2;
            result2 = v12;
            v6 = v9;
            if (v9 == v8) {
                goto lab_0x4f0c52_3;
            }
        }
      lab_0x4f0d08_2:;
        int64_t * v38 = (int64_t *)(v15 + 24); // 0x4f0d08
        int64_t v39 = *v38; // 0x4f0d08
        int32_t * v40 = v16; // 0x4f0d0f
        int64_t v41 = v15; // 0x4f0d0f
        int64_t v42 = v10; // 0x4f0d0f
        int64_t v43 = v39; // 0x4f0d0f
        if (v39 == v10) {
            int64_t * v44 = (int64_t *)(v10 + 16); // 0x4f0df0
            int64_t v45 = *v44; // 0x4f0df0
            *v38 = v45;
            int64_t v46 = v12; // 0x4f0dfb
            if (v45 != 0) {
                // 0x4f0dfd
                *(int64_t *)(v45 + 8) = v15;
                v46 = *v11;
            }
            // 0x4f0e05
            *v14 = v46;
            result = v46;
            if (v15 == *v2) {
                // 0x4f0e50
                return result;
            }
            int64_t v47 = *v11; // 0x4f0e13
            result = v47;
            if (v15 == *(int64_t *)(v47 + 16)) {
                // 0x4f0e50
                return result;
            }
            // 0x4f0e1d
            *(int64_t *)(v47 + 24) = v10;
            *v44 = v15;
            v41 = *v13;
            *v11 = v10;
            v43 = *(int64_t *)(v41 + 24);
            v40 = (int32_t *)v10;
            v42 = v15;
        }
        int64_t v48 = v43;
        v5 = v42;
        int64_t v49 = v41;
        *v40 = 1;
        *(int32_t *)v12 = 0;
        *v13 = v48;
        if (v48 != 0) {
            // 0x4f0d2b
            *(int64_t *)(v48 + 8) = v12;
        }
        int64_t * v50 = (int64_t *)(v12 + 8); // 0x4f0d2f
        int64_t v51 = *v50; // 0x4f0d2f
        *(int64_t *)(v49 + 8) = v51;
        int64_t v52; // 0x4f0bc0
        if (v12 == *v2) {
            // 0x4f0de0
            *v2 = v49;
            v52 = v51;
        } else {
            int64_t v53 = *v50; // 0x4f0d41
            result = v53;
            if (v12 == *(int64_t *)(v53 + 24)) {
                // 0x4f0e50
                return result;
            }
            // 0x4f0d4f
            *(int64_t *)(v53 + 16) = v49;
            v52 = v53;
        }
        // 0x4f0d53
        *(int64_t *)(v49 + 24) = v12;
        *v50 = v49;
        v4 = *v2;
        result2 = v52;
        v6 = v5;
        if (v5 == v4) {
            goto lab_0x4f0c52_3;
        }
    }
  lab_0x4f0dd0:
    // 0x4f0dd0
    *(int32_t *)v7 = 1;
    return result4;
}

// Address range: 0x4fd9ea - 0x4fdc78
int64_t function_4fd9ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4fd9ea
    int64_t v1; // 0x4fd9ea
    int64_t result = a4 - v1 + 1; // 0x4fd9f6
    if (result > *(int64_t *)(v1 + 216)) {
        // 0x4fdcb0
        return result;
    }
    int64_t v2 = function_4f1770(v1 + 104, a4, 1); // 0x4fda10
    if (v2 == -1) {
        // 0x4fdbd3
        function_549920("basic_filebuf::underflow error reading the file");
        int64_t result2 = *(int64_t *)(v1 + 152); // 0x4fdbe4
        *(int64_t *)(v1 + 8) = result2;
        *(int64_t *)(v1 + 16) = result2;
        if ((*(char *)(v1 + 120) & 8) == 0) {
            // 0x4fdcb0
            return result2;
        }
        // 0x4fdbf9
        *(int64_t *)(v1 + 24) = result2 + v1;
        *(int64_t *)(v1 + 40) = 0;
        *(int64_t *)(v1 + 32) = 0;
        *(int64_t *)(v1 + 48) = 0;
        *(char *)(v1 + 169) = 1;
        return function_4fd892();
    }
    int64_t * v3 = (int64_t *)(v1 + 232); // 0x4fda2b
    uint64_t v4 = *v3 + v2; // 0x4fda2b
    int64_t * v5 = (int64_t *)(v1 + 224); // 0x4fda32
    *v3 = v4;
    if (v4 <= *v5) {
        function_4fd9b0();
    }
    int64_t v6 = *(int64_t *)(v1 + 8); // 0x4fda7e
    if ((int32_t)*(int64_t *)*(int64_t *)(v1 + 200) != 3) {
        function_4fd9ba();
    }
    int64_t * v7 = (int64_t *)(v1 + 208); // 0x4fda8e
    int64_t v8 = *v7; // 0x4fda8e
    int64_t v9 = *v3 - v8; // 0x4fda9c
    int64_t v10; // 0x4fd9ea
    if (v1 >= v9) {
        // 0x4fdaab
        v10 = v9;
        if (v9 == 0) {
            // 0x4fdab4
            *v5 = v9 + v8;
            return function_4fd9d4();
        }
    }
    // 0x4fdb9e
    memcpy((int64_t *)v6, (int64_t *)v8, (int32_t)v10);
    // 0x4fdab4
    *v5 = v10 + *v7;
    return function_4fd9d4();
}

// Address range: 0x4ffbf0 - 0x4ffe7c
// From class:    __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
// Type:          virtual member function
int64_t function_4ffbf0(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x4ffc01
    int64_t v2 = 0; // 0x4ffc18
    if ((char)function_556930() != 0) {
        // 0x4ffc1e
        v2 = function_555410(a2);
    }
    int64_t v3 = a1 + 104; // 0x4ffc29
    int64_t v4 = function_4f15a0(v3); // 0x4ffc2d
    int64_t v5 = a2; // 0x4ffc34
    int64_t v6 = v3; // 0x4ffc34
    char v7; // 0x4ffc36
    if ((char)v4 == 0) {
        goto lab_0x4ffca0;
    } else {
        // 0x4ffc36
        v7 = *(char *)(a1 + 169);
        if (v7 == 0) {
            // 0x4ffcc8
            v5 = a2;
            v6 = v3;
            if (*(char *)(a1 + 170) == 0) {
                goto lab_0x4ffca0;
            } else {
                goto lab_0x4ffc43;
            }
        } else {
            goto lab_0x4ffc43;
        }
    }
  lab_0x4ffca0:
    // 0x4ffca0
    *(int64_t *)(a1 + 200) = v2;
    int64_t v8 = v5; // 0x4ffca0
    int64_t v9 = v6; // 0x4ffca0
    goto lab_0x4ffca7;
  lab_0x4ffca7:;
    int64_t result = __readfsqword(40) ^ v1; // 0x4ffcac
    if (result == 0) {
        // 0x4ffcbb
        return result;
    }
    // 0x4ffe34
    __stack_chk_fail();
    int64_t v10 = v8; // 0x4ffe34
    int64_t v11 = v9; // 0x4ffe34
    goto lab_0x4ffe39;
  lab_0x4ffc43:;
    int64_t * v12 = (int64_t *)(a1 + 200); // 0x4ffc43
    int64_t v15 = *v12; // 0x4ffc43
    v10 = a2;
    v11 = 0;
    int64_t v14; // 0x4ffbf0
    int64_t v13; // 0x4ffbf0
    if (v15 == 0) {
        goto lab_0x4ffe39;
    } else {
        int64_t v16 = *(int64_t *)v15; // 0x4ffc53
        v13 = a2;
        v14 = v15;
        if ((int32_t)v16 == -1) {
            goto lab_0x4ffcf9;
        } else {
            if (v7 == 0) {
                // 0x4ffce0
                v5 = a2;
                v6 = v15;
                if (*(char *)(a1 + 170) == 0) {
                    goto lab_0x4ffca0;
                } else {
                    int64_t v17 = function_4ff460(a1); // 0x4ffcec
                    v13 = a2;
                    v14 = a1;
                    if ((char)v17 != 0) {
                        int64_t v18 = *(int64_t *)(a1 + 152); // 0x4ffde8
                        *(int64_t *)(a1 + 40) = 0;
                        *(int64_t *)(a1 + 32) = 0;
                        *(int64_t *)(a1 + 48) = 0;
                        *(int64_t *)(a1 + 8) = v18;
                        *(int64_t *)(a1 + 16) = v18;
                        *(int64_t *)(a1 + 24) = v18;
                        v5 = a2;
                        v6 = a1;
                        goto lab_0x4ffca0;
                    } else {
                        goto lab_0x4ffcf9;
                    }
                }
            } else {
                if ((char)v16 == 0) {
                    int64_t * v19 = (int64_t *)(a1 + 208); // 0x4ffd17
                    int64_t v20 = *v19 + (0x100000000 * v16 >> 32); // 0x4ffd40
                    int64_t * v21 = (int64_t *)(a1 + 232); // 0x4ffd43
                    int64_t * v22 = (int64_t *)(a1 + 224); // 0x4ffd4a
                    *v22 = v20;
                    int64_t v23 = *v21 - v20; // 0x4ffd51
                    int64_t v24 = v15; // 0x4ffd54
                    if (v23 != 0) {
                        // 0x4ffe20
                        v24 = *v19;
                        memmove((int64_t *)v24, (int64_t *)v20, (int32_t)v23);
                    }
                    int64_t v25 = *v19; // 0x4ffd5a
                    *(int64_t *)(a1 + 40) = 0;
                    *(int64_t *)(a1 + 32) = 0;
                    *(int64_t *)(a1 + 48) = 0;
                    *v22 = v25;
                    int64_t v26 = *(int64_t *)(a1 + 152); // 0x4ffd83
                    *v21 = v25 + v23;
                    *(int64_t *)(a1 + 8) = v26;
                    *(int64_t *)(a1 + 16) = v26;
                    *(int64_t *)(a1 + 24) = v26;
                    int64_t v27 = *(int64_t *)(a1 + 124); // 0x4ffd9d
                    *(int64_t *)(a1 + 132) = v27;
                    *(int64_t *)(a1 + 140) = v27;
                    v5 = v20;
                    v6 = v24;
                    goto lab_0x4ffca0;
                } else {
                    // 0x4ffc89
                    v5 = a2;
                    v6 = v15;
                    if (v2 == 0) {
                        goto lab_0x4ffca0;
                    } else {
                        // 0x4ffc8e
                        v5 = a2;
                        v6 = v2;
                        if ((char)*(int64_t *)v2 == 0) {
                            // 0x4ffdc0
                            v5 = 0;
                            v6 = a1;
                            v13 = 0;
                            v14 = a1;
                            if (v2 != -1) {
                                goto lab_0x4ffca0;
                            } else {
                                goto lab_0x4ffcf9;
                            }
                        } else {
                            goto lab_0x4ffca0;
                        }
                    }
                }
            }
        }
    }
  lab_0x4ffe39:
    // 0x4ffe39
    function_5423f0();
    int64_t result2 = *(int64_t *)(v11 + 152); // 0x4ffe43
    *(int64_t *)(v11 + 8) = result2;
    *(int64_t *)(v11 + 16) = result2;
    if (v10 < 1 | (*(int32_t *)(v11 + 120) & 8) == 0) {
        // 0x4ffcbb
        return result2;
    }
    int64_t result3 = result2 + v10; // 0x4ffe5c
    *(int64_t *)(v11 + 24) = result3;
    *(int64_t *)(v11 + 40) = 0;
    *(int64_t *)(v11 + 32) = 0;
    *(int64_t *)(v11 + 48) = 0;
    return result3;
  lab_0x4ffcf9:
    // 0x4ffcf9
    *v12 = 0;
    v8 = v13;
    v9 = v14;
    goto lab_0x4ffca7;
}

// Address range: 0x501a90 - 0x501d1c
// From class:    __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          virtual member function
int64_t function_501a90(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x501aa1
    int64_t v2 = 0; // 0x501ab8
    if ((char)function_50c700() != 0) {
        // 0x501abe
        v2 = function_50b1c0(a2);
    }
    int64_t v3 = a1 + 104; // 0x501ac9
    int64_t v4 = function_4f15a0(v3); // 0x501acd
    int64_t v5 = a2; // 0x501ad4
    int64_t v6 = v3; // 0x501ad4
    char v7; // 0x501ad6
    if ((char)v4 == 0) {
        goto lab_0x501b40;
    } else {
        // 0x501ad6
        v7 = *(char *)(a1 + 169);
        if (v7 == 0) {
            // 0x501b68
            v5 = a2;
            v6 = v3;
            if (*(char *)(a1 + 170) == 0) {
                goto lab_0x501b40;
            } else {
                goto lab_0x501ae3;
            }
        } else {
            goto lab_0x501ae3;
        }
    }
  lab_0x501b40:
    // 0x501b40
    *(int64_t *)(a1 + 200) = v2;
    int64_t v8 = v5; // 0x501b40
    int64_t v9 = v6; // 0x501b40
    goto lab_0x501b47;
  lab_0x501b47:;
    int64_t result = __readfsqword(40) ^ v1; // 0x501b4c
    if (result == 0) {
        // 0x501b5b
        return result;
    }
    // 0x501ce4
    __stack_chk_fail();
    int64_t v10 = v8; // 0x501ce4
    int64_t v11 = v9; // 0x501ce4
    goto lab_0x501ce9;
  lab_0x501ae3:;
    int64_t * v12 = (int64_t *)(a1 + 200); // 0x501ae3
    int64_t v15 = *v12; // 0x501ae3
    v10 = a2;
    v11 = 0;
    int64_t v14; // 0x501a90
    int64_t v13; // 0x501a90
    if (v15 == 0) {
        goto lab_0x501ce9;
    } else {
        int64_t v16 = *(int64_t *)v15; // 0x501af3
        v13 = a2;
        v14 = v15;
        if ((int32_t)v16 == -1) {
            goto lab_0x501b99;
        } else {
            if (v7 == 0) {
                // 0x501b80
                v5 = a2;
                v6 = v15;
                if (*(char *)(a1 + 170) == 0) {
                    goto lab_0x501b40;
                } else {
                    int64_t v17 = function_5012d0(a1); // 0x501b8c
                    v13 = a2;
                    v14 = a1;
                    if ((char)v17 != 0) {
                        int64_t v18 = *(int64_t *)(a1 + 152); // 0x501c98
                        *(int64_t *)(a1 + 40) = 0;
                        *(int64_t *)(a1 + 32) = 0;
                        *(int64_t *)(a1 + 48) = 0;
                        *(int64_t *)(a1 + 8) = v18;
                        *(int64_t *)(a1 + 16) = v18;
                        *(int64_t *)(a1 + 24) = v18;
                        v5 = a2;
                        v6 = a1;
                        goto lab_0x501b40;
                    } else {
                        goto lab_0x501b99;
                    }
                }
            } else {
                if ((char)v16 == 0) {
                    int64_t * v19 = (int64_t *)(a1 + 208); // 0x501bc6
                    int64_t v20 = *v19 + (0x100000000 * v16 >> 32); // 0x501be4
                    int64_t * v21 = (int64_t *)(a1 + 232); // 0x501be7
                    int64_t * v22 = (int64_t *)(a1 + 224); // 0x501bee
                    *v22 = v20;
                    int64_t v23 = *v21 - v20; // 0x501bf5
                    int64_t v24 = v15; // 0x501bf8
                    if (v23 != 0) {
                        // 0x501cd0
                        v24 = *v19;
                        memmove((int64_t *)v24, (int64_t *)v20, (int32_t)v23);
                    }
                    int64_t v25 = *v19; // 0x501bfe
                    *(int64_t *)(a1 + 40) = 0;
                    *(int64_t *)(a1 + 32) = 0;
                    *(int64_t *)(a1 + 48) = 0;
                    *v22 = v25;
                    int64_t v26 = *(int64_t *)(a1 + 152); // 0x501c27
                    *v21 = v25 + v23;
                    *(int64_t *)(a1 + 8) = v26;
                    *(int64_t *)(a1 + 16) = v26;
                    *(int64_t *)(a1 + 24) = v26;
                    int64_t v27 = *(int64_t *)(a1 + 124); // 0x501c41
                    *(int64_t *)(a1 + 132) = v27;
                    *(int64_t *)(a1 + 140) = v27;
                    v5 = v20;
                    v6 = v24;
                    goto lab_0x501b40;
                } else {
                    // 0x501b29
                    v5 = a2;
                    v6 = v15;
                    if (v2 == 0) {
                        goto lab_0x501b40;
                    } else {
                        // 0x501b2e
                        v5 = a2;
                        v6 = v2;
                        if ((char)*(int64_t *)v2 == 0) {
                            // 0x501c70
                            v5 = 0;
                            v6 = a1;
                            v13 = 0;
                            v14 = a1;
                            if (v2 != -1) {
                                goto lab_0x501b40;
                            } else {
                                goto lab_0x501b99;
                            }
                        } else {
                            goto lab_0x501b40;
                        }
                    }
                }
            }
        }
    }
  lab_0x501ce9:
    // 0x501ce9
    function_5423f0();
    int64_t result2 = *(int64_t *)(v11 + 152); // 0x501cf3
    *(int64_t *)(v11 + 8) = result2;
    *(int64_t *)(v11 + 16) = result2;
    if (v10 < 1 | (*(int32_t *)(v11 + 120) & 8) == 0) {
        // 0x501b5b
        return result2;
    }
    int64_t result3 = result2 + 4 * v10; // 0x501d0c
    *(int64_t *)(v11 + 24) = result3;
    *(int64_t *)(v11 + 40) = 0;
    return result3;
  lab_0x501b99:
    // 0x501b99
    *v12 = 0;
    v8 = v13;
    v9 = v14;
    goto lab_0x501b47;
}

// Address range: 0x50e1e0 - 0x50e479
int64_t function_50e1e0(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x50e1e0
    __readfsqword(40);
    int64_t v1 = function_50e0e0(); // 0x50e21f
    uint32_t v2 = *(int32_t *)(a4 + 24); // 0x50e224
    uint32_t v3 = v2 & 74; // 0x50e24a
    int64_t v4 = a6; // 0x50e261
    if (a6 >= 0 != a6 != 0) {
        // 0x50e263
        v4 = v3 == 64 | v3 == 8 ? a6 : -a6;
    }
    int64_t v5 = v2; // 0x50e224
    int64_t v6; // bp-296, 0x50e1e0
    int64_t v7 = (int64_t)&v6; // 0x50e229
    int64_t v8 = v1 + 80; // 0x50e233
    int64_t v9; // bp-128, 0x50e1e0
    int64_t v10; // bp-288, 0x50e1e0
    int64_t v11 = function_50cf40(&v9, v4, v8, v5, (int32_t)!((v3 == 64 | v3 == 8)), &v10, (int64_t)v3); // 0x50e28d
    int32_t v12 = v11; // bp-68, 0x50e2a1
    int64_t v13 = 0x100000000 * v11; // 0x50e29f
    int64_t v14 = (0x2800000000 - v13 >> 30) + (int64_t)&v10; // 0x50e2b0
    int64_t v15; // 0x50e1e0
    int64_t v16; // 0x50e1e0
    int64_t v17; // 0x50e1e0
    int64_t v18; // 0x50e1e0
    int64_t v19; // 0x50e1e0
    int64_t v20; // 0x50e1e0
    int64_t v21; // 0x50e1e0
    int64_t v22; // 0x50e1e0
    if (*(char *)(v1 + 32) != 0) {
        int64_t v23 = *(int64_t *)(v1 + 16); // 0x50e3a7
        int64_t v24 = *(int64_t *)(v1 + 24); // 0x50e3ad
        int64_t v25 = v2; // 0x50e3bc
        int64_t v26 = v7 - ((v13 + 0x100000000 >> 29) + 30 & -16); // 0x50e3c8
        int64_t v27 = v26 + 15 & -16 | 8; // 0x50e3d4
        *(int64_t *)(v26 - 8) = (int64_t)&v12;
        *(int64_t *)(v26 - 16) = v14;
        function_50cd00(a1, v23, v24, *(int32_t *)(v1 + 76), a4, v27, v25, v1);
        int64_t v28 = v12; // 0x50e3f1
        int64_t v29 = 0x100000000 * v27 >> 32; // 0x50e3f4
        int64_t v30 = v25 & 0xffffffff; // 0x50e3f9
        v19 = v28;
        v21 = v26;
        v17 = v29;
        v15 = v30;
        v20 = v28;
        v22 = v26;
        v18 = v29;
        v16 = v30;
        if (v3 != 64 && v3 != 8) {
            goto lab_0x50e2c2;
        } else {
            goto lab_0x50e408;
        }
    } else {
        // 0x50e2ba
        v19 = v11;
        v21 = v7;
        v17 = v14;
        v15 = v5;
        v20 = v11;
        v22 = v7;
        v18 = v14;
        v16 = v5;
        if (v3 == 64 || v3 == 8) {
            goto lab_0x50e408;
        } else {
            goto lab_0x50e2c2;
        }
    }
  lab_0x50e2c2:;
    // 0x50e2c2
    int64_t * v31; // 0x50e1e0
    int64_t v32; // 0x50e1e0
    int64_t v33; // 0x50e1e0
    int64_t v34; // 0x50e1e0
    int64_t v35; // 0x50e1e0
    if (a6 < 0) {
        int64_t v36 = v19 + 1; // 0x50e45c
        v12 = v36;
        *(int32_t *)(v17 - 4) = *(int32_t *)v8;
        v32 = v36 & 0xffffffff;
        v34 = v21;
        goto lab_0x50e2d4;
    } else {
        // 0x50e2cb
        v32 = v19;
        v34 = v21;
        if (((int32_t)v15 & (int32_t)L"\n2") != 0) {
            int64_t v37 = v19 + 1; // 0x50e344
            v12 = v37;
            *(int32_t *)(v17 - 4) = *(int32_t *)(v1 + 84);
            int64_t * v38 = (int64_t *)(a4 + 16);
            uint64_t v39 = *v38; // 0x50e354
            v31 = v38;
            v33 = v39;
            v35 = v21;
            if (0x100000000 * v37 >> 32 >= v39) {
                // 0x50e2e1
                *v38 = 0;
                __readfsqword(40);
                return result;
            }
            goto lab_0x50e35e;
        } else {
            goto lab_0x50e2d4;
        }
    }
  lab_0x50e408:
    // 0x50e408
    v32 = v20;
    v34 = v22;
    if (a6 != 0 && ((int32_t)v16 & (int32_t)&g1) != 0) {
        if (v3 == 64) {
            // 0x50e46e
            return v20 + 1 & 0xffffffff;
        }
        int64_t v40 = v20 + 2; // 0x50e42c
        v12 = v40;
        *(int32_t *)(v18 - 4) = *(int32_t *)((v16 / 0x1000 & 4 | 8) + v8);
        *(int32_t *)(v18 - 8) = *(int32_t *)(v1 + 96);
        v32 = v40 & 0xffffffff;
        v34 = v22;
    }
    goto lab_0x50e2d4;
  lab_0x50e2d4:;
    int64_t * v41 = (int64_t *)(a4 + 16);
    uint64_t v42 = *v41; // 0x50e2d4
    v31 = v41;
    v33 = v42;
    v35 = v34;
    if (0x100000000 * v32 >> 32 >= v42) {
        // 0x50e2e1
        *v41 = 0;
        __readfsqword(40);
        return result;
    }
    goto lab_0x50e35e;
  lab_0x50e35e:
    // 0x50e35e
    *(int64_t *)(v35 - 16 - (4 * v33 + 30 & -16)) = (int64_t)&v12;
    function_50cf10(a1, (int32_t)a5);
    // 0x50e2e1
    *v31 = 0;
    __readfsqword(40);
    return result;
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
    if (result != g15) {
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
        int32_t v18 = *(int32_t *)(v2 + 76); // 0x50ed83
        int64_t v19 = *(int64_t *)(v2 + 16); // 0x50ed87
        int64_t v20 = *(int64_t *)(v2 + 24); // 0x50ed8d
        int64_t v21 = v5 - ((v10 + 0x100000000 >> 29) + 30 & -16); // 0x50eda4
        int64_t v22 = v21 + 15 & -16 | 8; // 0x50edb0
        *(int64_t *)(v21 - 8) = (int64_t)&v9;
        *(int64_t *)(v21 - 16) = v12;
        function_50cd00(a1, v19, v20, v18, a4, v22, v22, (int64_t)&g21);
        int64_t v23 = v9; // 0x50edcd
        v14 = v23;
        v16 = v21;
        v15 = v23;
        v17 = v21;
        v13 = v22;
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
    int64_t * v24 = (int64_t *)(a4 + 16); // 0x50ed12
    int64_t v25 = *v24; // 0x50ed12
    if (0x100000000 * v14 >> 32 < v25) {
        // 0x50ee30
        *(int64_t *)(v16 - 16 - (4 * v25 + 30 & -16)) = (int64_t)&v9;
        function_50cf10(a1, (int32_t)a5);
    }
    // 0x50ed22
    *v24 = 0;
    if (v1 != __readfsqword(40)) {
        // 0x50ee87
        __stack_chk_fail();
        return (int64_t)&g21;
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
            int64_t v26 = v15 + 1; // 0x50ee75
            v9 = v26;
            *(int32_t *)(v13 - 4) = *(int32_t *)(v2 + 96);
            v14 = v26 & 0xffffffff;
            v16 = v17;
        } else {
            int64_t v27 = v15 + 2; // 0x50ee05
            int32_t v28 = *(int32_t *)(v2 + 80 + (int64_t)(v3 / 0x1000 & 4 | 8)); // 0x50ee17
            v9 = v27;
            *(int32_t *)(v13 - 4) = v28;
            *(int32_t *)(v13 - 8) = *(int32_t *)(v2 + 96);
            v14 = v27 & 0xffffffff;
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
    if (result != g13) {
        // 0x50eeb8
        return result;
    }
    // 0x50eeb0
    int64_t v1; // 0x50eea0
    return function_50ec50(a1, v1, v1, v1, v1, v1);
}

// Address range: 0x558400 - 0x558687
int64_t function_558400(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x558400
    __readfsqword(40);
    int64_t v1 = function_558300(); // 0x55843f
    uint32_t v2 = *(int32_t *)(a4 + 24); // 0x558444
    uint32_t v3 = v2 & 74; // 0x558463
    int64_t v4 = a6; // 0x55847a
    if (a6 >= 0 != a6 != 0) {
        // 0x55847c
        v4 = v3 == 64 | v3 == 8 ? a6 : -a6;
    }
    int64_t v5 = v2; // 0x558444
    int64_t v6; // bp-184, 0x558400
    int64_t v7 = (int64_t)&v6; // 0x558449
    int64_t v8 = v1 + 74; // 0x558450
    int64_t v9; // bp-136, 0x558400
    int64_t v10; // bp-176, 0x558400
    int64_t v11 = function_557210(&v9, v4, v8, v5, (int32_t)!((v3 == 64 | v3 == 8)), &v10, (int64_t)v3); // 0x55849f
    int32_t v12 = v11; // bp-68, 0x5584b3
    int64_t v13 = 0x100000000 * v11; // 0x5584b1
    int64_t v14 = (0x2800000000 - v13 >> 32) + (int64_t)&v10; // 0x5584bd
    int64_t v15; // 0x558400
    int64_t v16; // 0x558400
    int64_t v17; // 0x558400
    int64_t v18; // 0x558400
    int64_t v19; // 0x558400
    int64_t v20; // 0x558400
    int64_t v21; // 0x558400
    int64_t v22; // 0x558400
    if (*(char *)(v1 + 32) != 0) {
        int64_t v23 = *(int64_t *)(v1 + 16); // 0x5585b8
        int64_t v24 = *(int64_t *)(v1 + 24); // 0x5585be
        int64_t v25 = v2; // 0x5585ca
        int64_t v26 = v7 - ((v13 + 0x100000000 >> 31) + 30 & -16); // 0x5585d6
        int64_t v27 = v26 + 15 & -16 | 2; // 0x5585e2
        *(int64_t *)(v26 - 8) = (int64_t)&v12;
        *(int64_t *)(v26 - 16) = v14;
        function_556f00(a1, v23, v24, *(char *)(v1 + 73), a4, v27, v25, v1);
        int64_t v28 = v12; // 0x5585ff
        int64_t v29 = 0x100000000 * v27 >> 32; // 0x558602
        int64_t v30 = v25 & 0xffffffff; // 0x558607
        v19 = v28;
        v21 = v26;
        v17 = v29;
        v15 = v30;
        v20 = v28;
        v22 = v26;
        v18 = v29;
        v16 = v30;
        if (v3 != 64 && v3 != 8) {
            goto lab_0x5584d3;
        } else {
            goto lab_0x558616;
        }
    } else {
        // 0x5584cb
        v19 = v11;
        v21 = v7;
        v17 = v14;
        v15 = v5;
        v20 = v11;
        v22 = v7;
        v18 = v14;
        v16 = v5;
        if (v3 == 64 || v3 == 8) {
            goto lab_0x558616;
        } else {
            goto lab_0x5584d3;
        }
    }
  lab_0x5584d3:;
    // 0x5584d3
    int64_t * v31; // 0x558400
    int64_t v32; // 0x558400
    int64_t v33; // 0x558400
    int64_t v34; // 0x558400
    int64_t v35; // 0x558400
    if (a6 < 0) {
        int64_t v36 = v19 + 1; // 0x55866d
        v12 = v36;
        *(char *)(v17 - 1) = *(char *)v8;
        v32 = v36 & 0xffffffff;
        v34 = v21;
        goto lab_0x5584e5;
    } else {
        // 0x5584dc
        v32 = v19;
        v34 = v21;
        if (((int32_t)v15 & (int32_t)L"\n2") != 0) {
            int64_t v37 = v19 + 1; // 0x558555
            v12 = v37;
            *(char *)(v17 - 1) = *(char *)(v1 + 75);
            int64_t * v38 = (int64_t *)(a4 + 16);
            uint64_t v39 = *v38; // 0x558565
            v31 = v38;
            v33 = v39;
            v35 = v21;
            if (0x100000000 * v37 >> 32 >= v39) {
                // 0x5584f2
                *v38 = 0;
                __readfsqword(40);
                return result;
            }
            goto lab_0x55856f;
        } else {
            goto lab_0x5584e5;
        }
    }
  lab_0x558616:
    // 0x558616
    v32 = v20;
    v34 = v22;
    if (a6 != 0 && ((int32_t)v16 & (int32_t)&g1) != 0) {
        if (v3 == 64) {
            // 0x55867f
            return v20 + 1 & 0xffffffff;
        }
        int64_t v40 = v20 + 2; // 0x558636
        v12 = v40;
        *(char *)(v18 - 1) = *(char *)((v16 / 0x4000 % 2 | 2) + v8);
        *(char *)(v18 - 2) = *(char *)(v1 + 78);
        v32 = v40 & 0xffffffff;
        v34 = v22;
    }
    goto lab_0x5584e5;
  lab_0x5584e5:;
    int64_t * v41 = (int64_t *)(a4 + 16);
    uint64_t v42 = *v41; // 0x5584e5
    v31 = v41;
    v33 = v42;
    v35 = v34;
    if (0x100000000 * v32 >> 32 >= v42) {
        // 0x5584f2
        *v41 = 0;
        __readfsqword(40);
        return result;
    }
    goto lab_0x55856f;
  lab_0x55856f:
    // 0x55856f
    *(int64_t *)(v35 - 16 - (v33 + 30 & -16)) = (int64_t)&v12;
    function_5571e0(a1, (int32_t)(0x100000000000000 * a5 >> 56));
    // 0x5584f2
    *v31 = 0;
    __readfsqword(40);
    return result;
}

// Address range: 0x558e30 - 0x558e39
// From class:    std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_558e30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x558e30
    return function_558b90();
}

// Address range: 0x558e40 - 0x558e62
int64_t function_558e40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = *(int64_t *)(a1 + 40); // 0x558e47
    if (result != g14) {
        // 0x558e60
        return result;
    }
    // 0x558e54
    return function_558b90();
}

// Address range: 0x558e70 - 0x5590a0
int64_t function_558e70(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = __readfsqword(40); // 0x558ea1
    int64_t v2 = function_558300(); // 0x558eb0
    uint32_t v3 = *(int32_t *)(a4 + 24); // 0x558eb5
    uint64_t v4 = (int64_t)v3; // 0x558eb5
    int64_t v5; // bp-184, 0x558e70
    int64_t v6 = (int64_t)&v5; // 0x558eb9
    int64_t v7 = v2 + 74; // 0x558ebd
    uint32_t v8 = v3 & 74; // 0x558ed8
    int64_t v9; // bp-136, 0x558e70
    int64_t v10; // bp-176, 0x558e70
    int64_t v11 = function_5572d0(&v9, a6, v7, v4, (int32_t)!((v8 == 64 | v8 == 8)), &v10, (int64_t)v8); // 0x558efb
    int32_t v12 = v11; // bp-68, 0x558f0f
    int64_t v13 = 0x100000000 * v11; // 0x558f0d
    int64_t v14 = (0x2800000000 - v13 >> 32) + (int64_t)&v10; // 0x558f15
    int64_t v15; // 0x558e70
    int64_t v16; // 0x558e70
    int64_t v17; // 0x558e70
    int64_t v18; // 0x558e70
    int64_t v19; // 0x558e70
    if (*(char *)(v2 + 32) != 0) {
        char v20 = *(char *)(v2 + 73); // 0x558f93
        int64_t v21 = *(int64_t *)(v2 + 16); // 0x558f98
        int64_t v22 = *(int64_t *)(v2 + 24); // 0x558f9e
        int64_t v23 = v6 - ((v13 + 0x100000000 >> 31) + 30 & -16); // 0x558fb2
        int64_t v24 = v23 + 15 & -16 | 2; // 0x558fbe
        *(int64_t *)(v23 - 8) = (int64_t)&v12;
        *(int64_t *)(v23 - 16) = v14;
        function_556f00(a1, v21, v22, v20, a4, v24, v24, (int64_t)&g21);
        int64_t v25 = v12; // 0x558fdb
        v16 = v25;
        v18 = v23;
        v17 = v25;
        v19 = v23;
        v15 = v24;
        if (v8 != 64 && v8 != 8) {
            goto lab_0x558f27;
        } else {
            goto lab_0x558fed;
        }
    } else {
        // 0x558f1f
        v16 = v11;
        v18 = v6;
        v17 = v11;
        v19 = v6;
        v15 = v14;
        if (v8 == 64 || v8 == 8) {
            goto lab_0x558fed;
        } else {
            goto lab_0x558f27;
        }
    }
  lab_0x558f27:;
    int64_t * v26 = (int64_t *)(a4 + 16); // 0x558f27
    int64_t v27 = *v26; // 0x558f27
    if (0x100000000 * v16 >> 32 < v27) {
        // 0x559040
        *(int64_t *)(v18 - 16 - (v27 + 30 & -16)) = (int64_t)&v12;
        function_5571e0(a1, (int32_t)(0x100000000000000 * a5 >> 56));
    }
    // 0x558f37
    *v26 = 0;
    if (v1 != __readfsqword(40)) {
        // 0x559095
        __stack_chk_fail();
        return (int64_t)&g21;
    }
    // 0x558f7e
    return result;
  lab_0x558fed:
    // 0x558fed
    v16 = v17;
    v18 = v19;
    if (a6 != 0 && (v3 & (int32_t)&g1) != 0) {
        // 0x559005
        if (v8 == 64) {
            int64_t v28 = v17 + 1; // 0x559083
            v12 = v28;
            *(char *)(v15 - 1) = *(char *)(v2 + 78);
            v16 = v28 & 0xffffffff;
            v18 = v19;
        } else {
            int64_t v29 = v17 + 2; // 0x55900f
            v12 = v29;
            *(char *)(v15 - 1) = *(char *)((v4 / 0x4000 % 2 | 2) + v7);
            *(char *)(v15 - 2) = *(char *)(v2 + 78);
            v16 = v29 & 0xffffffff;
            v18 = v19;
        }
    }
    goto lab_0x558f27;
}

// Address range: 0x5590a0 - 0x5590a9
// From class:    std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_5590a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x5590a0
    int64_t v1; // 0x5590a0
    return function_558e70(a1, a2, a3, a4, 0x100000000000000 * a5 >> 56, v1);
}

// Address range: 0x5826d0 - 0x58295a
int64_t function_5826d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2 & 0xffffffff; // 0x5826e0
    char * v2; // 0x5826d0
    int64_t * v3; // 0x5826d0
    int64_t * v4; // 0x5826d0
    int64_t * v5; // 0x5826d0
    int64_t v6; // 0x5826d0
    int64_t result2; // 0x5826d0
    int64_t v7; // 0x5826d0
    int64_t v8; // 0x5826d0
    if (a4 == 0) {
        goto lab_0x58271b;
    } else {
        int64_t v9 = a4;
        while (*(int32_t *)(v9 + 16) != 0) {
            int64_t v10 = *(int64_t *)v9; // 0x582703
            if (v10 == 0) {
                // 0x58270b
                function_5822c0(a1, v1, a4, 0);
                goto lab_0x58271b;
            }
            v9 = v10;
        }
        // 0x5827f0
        if (*(int32_t *)*(int64_t *)(v9 + 8) != 42) {
            int64_t * v11 = (int64_t *)(a1 + 256);
            char * v12 = (char *)(a1 + 255);
            int64_t * v13 = (int64_t *)(a1 + 320);
            char * v14 = (char *)(a1 + 264);
            int64_t v15 = (int64_t)" (";
            int64_t v16 = *v11;
            char v17 = *(char *)v15; // 0x5828e3
            int64_t v18; // 0x5826d0
            int64_t v19; // 0x5826d0
            if (v16 == 255) {
                // 0x582890
                *v12 = 0;
                *v13 = *v13 + 1;
                v18 = 1;
                v19 = 0;
            } else {
                // 0x5828ea
                v18 = v16 + 1;
                v19 = v16;
            }
            int64_t v20 = v18;
            *v11 = v20;
            *(char *)(v19 + a1) = v17;
            *v14 = v17;
            int64_t v21 = v15 + 1; // 0x5828db
            while (v15 != (int64_t)&g9 - 1) {
                // 0x5828dd
                v15 = v21;
                v16 = v20;
                v17 = *(char *)v15;
                if (v16 == 255) {
                    // 0x582890
                    *v12 = 0;
                    *v13 = *v13 + 1;
                    v18 = 1;
                    v19 = 0;
                } else {
                    // 0x5828ea
                    v18 = v16 + 1;
                    v19 = v16;
                }
                // 0x5828bb
                v20 = v18;
                *v11 = v20;
                *(char *)(v19 + a1) = v17;
                *v14 = v17;
                v21 = v15 + 1;
            }
            int64_t result = function_5822c0(a1, v1, a4, 0); // 0x582903
            if (*v11 != 255) {
                // 0x582960
                return result;
            }
            // 0x582918
            *v12 = 0;
            *v13 = *v13 + 1;
            *(char *)a1 = 41;
            v2 = v14;
            v3 = v11;
            result2 = 1;
            goto lab_0x582944;
        } else {
            // 0x5827f9
            function_5822c0(a1, v1, a4, 0);
            int64_t * v22 = (int64_t *)(a1 + 256);
            int64_t v23 = *v22; // 0x582809
            v4 = v22;
            v7 = v23;
            if (v23 != 255) {
                goto lab_0x58275a;
            } else {
                int64_t v24 = *(int64_t *)(a1 + 280); // 0x58281d
                *(char *)(a1 + 255) = 0;
                *(char *)a1 = 91;
                *(char *)(a1 + 264) = 91;
                int64_t * v25 = (int64_t *)(a1 + 320); // 0x582847
                *v25 = *v25 + 1;
                *v22 = 1;
                v5 = v22;
                v8 = v24;
                v6 = 1;
                if (v24 != 0) {
                    goto lab_0x5827d8;
                } else {
                    goto lab_0x582868;
                }
            }
        }
    }
  lab_0x58271b:;
    int64_t * v26 = (int64_t *)(a1 + 256);
    int64_t v27 = *v26; // 0x58271b
    if (v27 != 255) {
        // 0x58271b
        v2 = (char *)(a1 + 264);
        v3 = v26;
        result2 = v27;
        goto lab_0x582944;
    } else {
        // 0x58272e
        *(char *)(a1 + 255) = 0;
        int64_t * v28 = (int64_t *)(a1 + 320); // 0x58274a
        *v28 = *v28 + 1;
        *(char *)a1 = 32;
        v4 = v26;
        v7 = 1;
        goto lab_0x58275a;
    }
  lab_0x582944:
    // 0x582944
    *v3 = result2 + 1;
    *(char *)(result2 + a1) = 32;
    *v2 = 32;
    return result2;
  lab_0x58275a:;
    int64_t v29 = v7 + 1; // 0x58275a
    *v4 = v29;
    *(char *)(v7 + a1) = 91;
    *(char *)(a1 + 264) = 91;
    int64_t v30 = v29; // 0x582777
    v5 = v4;
    v8 = v7;
    if (v7 != 0) {
        goto lab_0x5827d8;
    } else {
        goto lab_0x582779;
    }
  lab_0x5827d8:
    // 0x5827d8
    function_581610(a1, v1, v8);
    v30 = *v5;
    goto lab_0x582779;
  lab_0x582779:
    // 0x582779
    v6 = v30;
    int64_t result3; // 0x5826d0
    int64_t v31; // 0x5826d0
    if (v30 != 255) {
        goto lab_0x582868;
    } else {
        // 0x582785
        *(char *)(a1 + 255) = 0;
        int64_t * v32 = (int64_t *)(a1 + 320); // 0x5827a1
        *v32 = *v32 + 1;
        result3 = 0;
        v31 = 1;
        goto lab_0x5827b0;
    }
  lab_0x582868:
    // 0x582868
    result3 = v6;
    v31 = v6 + 1;
    goto lab_0x5827b0;
  lab_0x5827b0:
    // 0x5827b0
    *(int64_t *)(a1 + 256) = v31;
    *(char *)(result3 + a1) = 93;
    *(char *)(a1 + 264) = 93;
    return result3;
}
